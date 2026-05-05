#!/usr/bin/env python3
import argparse
import csv
import re
import subprocess
import sys
import tempfile
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
FUNCTION_DEF_RE = re.compile(r"^int64_t (function_[0-9a-f]+)\(.*\) \{", re.M)
FUNCTION_CALL_RE = re.compile(r"\b(function_[0-9a-f]+)\(")
GLOBAL_ADDR_RE = re.compile(r"&g(\d+)")


def read_rows(path):
    with Path(path).open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def load_validated_ranges(microcode_path, table_path, batch_index, batch_size):
    microcode = {row["entry"]: row for row in read_rows(microcode_path)}
    rows = []
    for row in read_rows(table_path):
        entry = row["entry"]
        micro = microcode.get(entry, {})
        if micro.get("class") != "static_validated":
            continue
        start = int(row["target"], 16)
        stop = int(row["static_stop"], 16)
        if stop <= start:
            continue
        rows.append((row, micro))
    rows.sort(key=lambda item: (int(item[0].get("span_bytes", "0")), int(item[0]["entry"])))
    batch_start = batch_index * batch_size
    selected = rows[batch_start:batch_start + batch_size]
    ranges = [f"{row['target']}-{row['static_stop']}" for row, _ in selected]
    return ranges, selected, len(rows)


def extract_functions(text):
    start_marker = "// ------------------------ Functions -------------------------"
    end_marker = "// --------------------- Meta-Information ---------------------"
    start = text.find(start_marker)
    end = text.find(end_marker)
    if start < 0 or end < 0 or end <= start:
        raise SystemExit("retdec output did not contain the expected functions section")
    functions = text[start + len(start_marker):end].strip()
    functions = functions.replace(" = &v", " = (int64_t)&v")
    functions = re.sub(r" = &g(\d+)", r" = (int64_t)&g\1", functions)
    functions = re.sub(r"return &g(\d+)", r"return (int64_t)&g\1", functions)
    return functions


def missing_function_prototypes(functions):
    defined = set(FUNCTION_DEF_RE.findall(functions))
    called = set(FUNCTION_CALL_RE.findall(functions))
    return [f"int64_t {name}();" for name in sorted(called - defined)]


def referenced_globals(functions):
    return sorted({int(match) for match in GLOBAL_ADDR_RE.findall(functions)})


def main():
    parser = argparse.ArgumentParser(description="Emit targeted RetDec C for one batch of static-validated VM handler native ranges.")
    parser.add_argument("--microcode", default=str(TRACE_DIR / "vm_microcode_catalog.tsv"))
    parser.add_argument("--handler-table", default=str(TRACE_DIR / "vm_handler_table.tsv"))
    parser.add_argument("--batch-index", type=int, default=0)
    parser.add_argument("--batch-size", type=int, default=24)
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--retdec", default="retdec-decompiler")
    parser.add_argument("--timeout", type=int, default=90)
    args = parser.parse_args()

    ranges, selected, total_validated = load_validated_ranges(
        args.microcode,
        args.handler_table,
        args.batch_index,
        args.batch_size,
    )
    if not ranges:
        raise SystemExit(f"no static-validated handler ranges found for batch {args.batch_index}")

    with tempfile.TemporaryDirectory(prefix=f"eacsym-retdec-validated-b{args.batch_index:02d}-") as tmpdir:
        out_path = Path(tmpdir) / "validated_handlers.c"
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

    functions = extract_functions(source)

    print("/*")
    print(f" * Targeted RetDec C for static-validated VM handler native ranges, batch {args.batch_index}.")
    print(" *")
    print(" * These handlers already have 100% validated handler-layer transfer models.")
    print(" * This artifact keeps native decompiler sidecars for full dispatch-entry")
    print(" * coverage and cross-checking against the VM-lifted C pseudocode.")
    print(" *")
    print(f" * Total static-validated handler ranges: {total_validated}")
    print(f" * Batch size: {args.batch_size}")
    print(" * Ranges:")
    for item, (row, micro) in zip(ranges, selected):
        print(
            f" *   {item} entry={row['entry']} events={micro['events']} "
            f"span_bytes={row['span_bytes']} insns={row['insns']}"
        )
    print(" */")
    print("#include <stdbool.h>")
    print("#include <stdint.h>")
    print("")
    print("typedef __int128 int128_t;")
    for index in referenced_globals(functions):
        print(f"extern int g{index};")
    print("unsigned char llvm_ctpop_i8(unsigned char value);")
    print("void __asm_out(uint16_t port, char value);")
    print("uint8_t __readfsbyte(int64_t offset);")
    print("")
    for proto in missing_function_prototypes(functions):
        print(proto)
    print("")
    print(functions)
    print(f"validated_handler_retdec_batch={args.batch_index}", file=sys.stderr)
    print(f"validated_handler_retdec_selected_ranges={len(selected)}", file=sys.stderr)


if __name__ == "__main__":
    main()
