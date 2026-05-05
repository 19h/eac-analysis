#!/usr/bin/env python3
import argparse
import csv
import re
import subprocess
import sys
import tempfile
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
INSN_RE = re.compile(r"^0x([0-9a-f]+):(.*)$")


def read_rows(path):
    with Path(path).open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def parse_first_ret(first_insns):
    for item in first_insns.split(" | "):
        match = INSN_RE.match(item)
        if not match:
            continue
        text = match.group(2).strip()
        mnemonic = text.split(None, 1)[0] if text else ""
        if mnemonic.startswith("ret"):
            return int(match.group(1), 16)
    return None


def selected_ranges(rows):
    ranges = []
    provenance = []
    for row in rows:
        if row.get("source_entry") == "278":
            continue
        if row.get("ret_seen") != "yes":
            continue
        start = int(row["disasm_start"], 16)
        ret_addr = parse_first_ret(row.get("first_insns", ""))
        if ret_addr is None:
            continue
        stop = ret_addr + 1
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
    functions = functions.replace(" = &g1;", " = (int64_t)&g1;")
    return functions


def main():
    parser = argparse.ArgumentParser(description="Emit targeted RetDec C for single-stack native ret-patch epilogues.")
    parser.add_argument("--atlas", default=str(TRACE_DIR / "vm_synthetic_gap_ret_patch_native_target_atlas.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--retdec", default="retdec-decompiler")
    parser.add_argument("--timeout", type=int, default=60)
    args = parser.parse_args()

    ranges, provenance = selected_ranges(read_rows(args.atlas))
    if not ranges:
        raise SystemExit("no single-stack ret-patch epilogue ranges found")

    with tempfile.TemporaryDirectory(prefix="eacsym-retdec-epilogues-") as tmpdir:
        out_path = Path(tmpdir) / "retpatch_epilogues.c"
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
    print(" * Targeted RetDec C for single-stack native return-patch epilogue targets.")
    print(" *")
    print(" * Source 278 is intentionally excluded; its double-stack trampoline chain")
    print(" * is emitted by vm_native_ret_patch_source278_retdec.py.")
    print(" *")
    print(" * Ranges:")
    for item, row in zip(ranges, provenance):
        print(
            " *   "
            f"{item} source={row['source_entry']} start={row['synthetic_start_vm_ip']} "
            f"target={row['patched_ret_eac_off']}"
        )
    print(" *")
    print(" * This is external decompiler output kept as an evidence artifact. These")
    print(" * functions model native epilogue return values and stack-check exits, not")
    print(" * VM bytecode CFG successors.")
    print(" */")
    print("#include <stdint.h>")
    print("")
    print("extern int g1;")
    print("int64_t __readfsqword(uint64_t offset);")
    print("void __stack_chk_fail(void);")
    print("")
    print(extract_functions(source))
    print(f"retpatch_epilogue_retdec_functions={len(provenance)}", file=sys.stderr)


if __name__ == "__main__":
    main()
