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
GLOBAL_RE = re.compile(r"\bg(\d+)\b")


BATCHES = {
    0: [
        "0x568cf0-0x568eea",
        "0x56274-0x5646b",
        "0x4fed10-0x4fef07",
        "0x25a3e-0x25c34",
        "0x500b70-0x500d66",
        "0x498230-0x498422",
        "0x4c98a0-0x4c9a91",
        "0x2ceb0-0x2d09e",
        "0x579d80-0x579f6e",
        "0x4f75e-0x4f94a",
        "0x4d3da0-0x4d3f8b",
        "0x4fbb00-0x4fbceb",
        "0x4b2990-0x4b2b79",
        "0x53f76-0x5415e",
        "0x5534e-0x55536",
        "0x568500-0x5686e7",
    ],
}


def read_tsv(path):
    path = Path(path)
    if not path.exists():
        return []
    with path.open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def queue_by_range(path):
    return {row.get("selected_range", ""): row for row in read_tsv(path)}


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
    return sorted({int(match) for match in GLOBAL_RE.findall(functions)})


def c_comment(value):
    return str(value).replace("*/", "* /")


def main():
    parser = argparse.ArgumentParser(description="Emit targeted RetDec C for a fixed native gap queue batch.")
    parser.add_argument("--batch-index", type=int, default=0)
    parser.add_argument("--queue", default=str(TRACE_DIR / "vm_native_retdec_gap_queue.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--retdec", default="retdec-decompiler")
    parser.add_argument("--timeout", type=int, default=90)
    args = parser.parse_args()

    ranges = BATCHES.get(args.batch_index)
    if not ranges:
        raise SystemExit(f"no fixed native gap RetDec batch {args.batch_index}")

    with tempfile.TemporaryDirectory(prefix=f"eacsym-retdec-native-gap-b{args.batch_index:02d}-") as tmpdir:
        out_path = Path(tmpdir) / f"native_gap_batch{args.batch_index:02d}.c"
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
    provenance = queue_by_range(args.queue)

    print("/*")
    print(f" * Targeted RetDec C for native executable gap queue batch {args.batch_index}.")
    print(" *")
    print(" * This batch is fixed from the ranked native gap queue so it can feed the")
    print(" * executable coverage audit without creating a Make dependency cycle:")
    print(" * coverage -> queue -> RetDec batch -> coverage.")
    print(" *")
    print(" * Ranges:")
    for selected_range in ranges:
        row = provenance.get(selected_range, {})
        print(
            " *   "
            f"{selected_range} rank={c_comment(row.get('rank', '-'))} "
            f"name={c_comment(row.get('name', '-'))} "
            f"kind={c_comment(row.get('kind', '-'))} "
            f"bytes={c_comment(row.get('bytes', '-'))} "
            f"uncovered={c_comment(row.get('semantic_uncovered_bytes', '-'))}"
        )
    print(" */")
    print("#include <stdbool.h>")
    print("#include <stdint.h>")
    print("#include <stdlib.h>")
    print("#include <string.h>")
    print("")
    print("typedef __int128 int128_t;")
    print("typedef int32_t int3_t;")
    print("typedef float float32_t;")
    print("typedef double float64_t;")
    print("typedef long double float80_t;")
    print("struct __locale_struct;")
    for index in referenced_globals(functions):
        print(f"extern int g{index};")
    print("unsigned char llvm_ctpop_i8(unsigned char value);")
    print("void __asm_out(uint16_t port, char value);")
    print("uint8_t __readfsbyte(int64_t offset);")
    print("uint64_t __readfsqword(int64_t offset);")
    print("int64_t __asm_iretd(void);")
    print("void __asm_rep_stosb_memset(char *dst, char value, int64_t count);")
    print("void __stack_chk_fail(void);")
    print("int __cxa_atexit(void (*func)(int64_t *), void *arg, void *dso);")
    print("int128_t __asm_movsd(int64_t value);")
    print("int128_t __asm_movapd(int128_t value);")
    print("int128_t __asm_andpd(int128_t left, int128_t right);")
    print("int128_t __asm_andnpd(int128_t left, int128_t right);")
    print("int128_t __asm_pxor(int128_t left, int128_t right);")
    print("int128_t __asm_cmpnlesd(int128_t left, int128_t right);")
    print("int128_t __asm_cvtsi2sd(int64_t value);")
    print("int128_t __asm_subsd(int128_t left, int128_t right);")
    print("int64_t __asm_cvttsd2si(int128_t value);")
    print("void __asm_ucomisd(int128_t left, int128_t right);")
    print("void __asm_movups(int128_t dst, int128_t src);")
    print("float80_t __frontend_reg_load_fpr(int32_t reg);")
    print("void __frontend_reg_store_fpr(int32_t reg, float80_t value);")
    print("char *__nl_langinfo_l(int32_t item, struct __locale_struct *locale);")
    print("struct __locale_struct *__uselocale(struct __locale_struct *locale);")
    print("char *dgettext(char *domain, char *msgid);")
    print("")
    for proto in missing_function_prototypes(functions):
        print(proto)
    print("")
    print(functions)
    print(f"native_gap_retdec_batch={args.batch_index}", file=sys.stderr)
    print(f"native_gap_retdec_selected_ranges={len(ranges)}", file=sys.stderr)


if __name__ == "__main__":
    main()
