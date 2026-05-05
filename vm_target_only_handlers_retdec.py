#!/usr/bin/env python3
import argparse
import csv
import subprocess
import sys
import tempfile
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")


def read_rows(path):
    with Path(path).open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def load_target_only_ranges(semantics_path, table_path):
    semantics = {row["entry"]: row for row in read_rows(semantics_path)}
    ranges = []
    provenance = []
    for row in read_rows(table_path):
        entry = row["entry"]
        sem = semantics.get(entry, {})
        if sem.get("observation") != "target_only":
            continue
        start = int(row["target"], 16)
        stop = int(row["static_stop"], 16)
        if stop <= start:
            continue
        ranges.append(f"0x{start:x}-0x{stop:x}")
        provenance.append(row)
    return ranges, provenance


def extract_functions(text):
    start_marker = "// ------------------------ Functions -------------------------"
    end_marker = "// --------------------- Meta-Information ---------------------"
    start = text.find(start_marker)
    end = text.find(end_marker)
    if start < 0 or end < 0 or end <= start:
        raise SystemExit("retdec output did not contain the expected functions section")
    functions = text[start + len(start_marker):end].strip()
    functions = functions.replace(" = &v", " = (int64_t)&v")
    return functions


def main():
    parser = argparse.ArgumentParser(description="Emit targeted RetDec C for target-only VM handler native ranges.")
    parser.add_argument("--semantics", default=str(TRACE_DIR / "vm_handler_semantics.tsv"))
    parser.add_argument("--handler-table", default=str(TRACE_DIR / "vm_handler_table.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--retdec", default="retdec-decompiler")
    parser.add_argument("--timeout", type=int, default=60)
    args = parser.parse_args()

    ranges, provenance = load_target_only_ranges(args.semantics, args.handler_table)
    if not ranges:
        raise SystemExit("no target-only handler ranges found")

    with tempfile.TemporaryDirectory(prefix="eacsym-retdec-target-only-") as tmpdir:
        out_path = Path(tmpdir) / "target_only_handlers.c"
        cmd = [
            args.retdec,
            "--select-ranges",
            ",".join(ranges),
            "--select-decode-only",
            "--timeout",
            str(args.timeout),
            "-o",
            str(out_path),
            args.eac,
        ]
        proc = subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
        if proc.returncode != 0:
            sys.stderr.write(proc.stdout)
            raise SystemExit(proc.returncode)
        source = out_path.read_text(errors="replace")

    print("/*")
    print(" * Targeted RetDec C for target-only VM handler native ranges.")
    print(" *")
    print(" * These dispatch entries were reached as targets but were not observed as")
    print(" * source-executed VM instructions in the concrete traces. The generated")
    print(" * functions are native decompiler evidence for coverage gaps, separate from")
    print(" * the all-entry static handler pseudocode.")
    print(" *")
    print(" * Ranges:")
    for item, row in zip(ranges, provenance):
        print(f" *   {item} entry={row['entry']} target={row['target']} static_stop={row['static_stop']}")
    print(" */")
    print("#include <stdbool.h>")
    print("#include <stdint.h>")
    print("")
    print("extern int g1;")
    print("extern int g2;")
    print("unsigned char llvm_ctpop_i8(unsigned char value);")
    print("")
    print(extract_functions(source))
    print(f"target_only_handler_ranges={len(provenance)}", file=sys.stderr)


if __name__ == "__main__":
    main()
