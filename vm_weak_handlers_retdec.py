#!/usr/bin/env python3
import argparse
import csv
import re
import subprocess
import sys
import tempfile
from collections import Counter
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
WEAK_CLASSES = (
    "affine_dispatch_fallback",
    "partial",
    "sampled_only",
    "sampled_operand_lifted",
)
FUNCTION_DEF_RE = re.compile(r"^int64_t (function_[0-9a-f]+)\(.*\) \{", re.M)
FUNCTION_CALL_RE = re.compile(r"\b(function_[0-9a-f]+)\(")
GLOBAL_ADDR_RE = re.compile(r"&g(\d+)")


def read_rows(path):
    with Path(path).open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def counter_text(counter):
    return ",".join(f"{key}:{value}" for key, value in counter.most_common()) or "-"


def load_weak_ranges(microcode_path, table_path, classes):
    microcode = {row["entry"]: row for row in read_rows(microcode_path)}
    selected = []
    for row in read_rows(table_path):
        entry = row["entry"]
        micro = microcode.get(entry, {})
        if micro.get("class") not in classes:
            continue
        start = int(row["target"], 16)
        stop = int(row["static_stop"], 16)
        if stop <= start:
            continue
        selected.append((row, micro))
    selected.sort(key=lambda item: int(item[0]["entry"]))
    ranges = [f"{row['target']}-{row['static_stop']}" for row, _ in selected]
    return ranges, selected


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
    parser = argparse.ArgumentParser(description="Emit targeted RetDec C for observed handler classes with weaker static/trace models.")
    parser.add_argument("--microcode", default=str(TRACE_DIR / "vm_microcode_catalog.tsv"))
    parser.add_argument("--handler-table", default=str(TRACE_DIR / "vm_handler_table.tsv"))
    parser.add_argument("--classes", default=",".join(WEAK_CLASSES))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--retdec", default="retdec-decompiler")
    parser.add_argument("--timeout", type=int, default=120)
    args = parser.parse_args()

    classes = tuple(item for item in args.classes.split(",") if item)
    ranges, selected = load_weak_ranges(args.microcode, args.handler_table, set(classes))
    if not ranges:
        raise SystemExit("no weak observed handler ranges found")

    with tempfile.TemporaryDirectory(prefix="eacsym-retdec-weak-handlers-") as tmpdir:
        out_path = Path(tmpdir) / "weak_handlers.c"
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
    class_mix = Counter(micro["class"] for _, micro in selected)

    print("/*")
    print(" * Targeted RetDec C for observed VM handler ranges with weaker recovery classes.")
    print(" *")
    print(" * Covered classes:")
    for klass in classes:
        print(f" *   {klass}")
    print(f" * Class mix: {counter_text(class_mix)}")
    print(" *")
    print(" * These handlers were observed, but their handler-layer model is not the")
    print(" * fully static-validated class. This artifact keeps native decompiler")
    print(" * evidence next to the trace/static pseudocode for review and refinement.")
    print(" *")
    print(" * Ranges:")
    for item, (row, micro) in zip(ranges, selected):
        print(
            f" *   {item} entry={row['entry']} class={micro['class']} "
            f"events={micro['events']} span_bytes={row['span_bytes']}"
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
    print(f"weak_handler_retdec_selected_ranges={len(selected)}", file=sys.stderr)
    print(f"weak_handler_retdec_class_mix={counter_text(class_mix)}", file=sys.stderr)


if __name__ == "__main__":
    main()
