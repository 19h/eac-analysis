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
    1: [
        "0x56b2c0-0x56b4a7",
        "0x4cd00-0x4cee6",
        "0x268c9-0x26aae",
        "0x4a6e6-0x4a8c5",
        "0x57160-0x5733f",
        "0x55c790-0x55c96f",
        "0x55c9b0-0x55cb8f",
        "0x5725b0-0x57278f",
        "0x5727c0-0x57299f",
        "0x4b8430-0x4b860e",
        "0x538ea0-0x53907d",
        "0x5cb26-0x5cd02",
        "0x2cafa-0x2ccd5",
        "0x4aa650-0x4aa829",
        "0x567f20-0x5680f7",
        "0x492898-0x492a6e",
    ],
    2: [
        "0x4c6100-0x4c62d6",
        "0x56b60-0x56d34",
        "0x4bcd80-0x4bcf54",
        "0x4b8bc0-0x4b8d92",
        "0x572230-0x572400",
        "0x4b36d0-0x4b389f",
        "0x5586e0-0x5588ad",
        "0x4f20e-0x4f3da",
        "0x50e4c0-0x50e68c",
        "0x619f2-0x61bbd",
        "0x502fa0-0x50316a",
        "0x505870-0x505a3a",
        "0x556610-0x5567da",
        "0x5100a0-0x510269",
        "0x55a0c0-0x55a289",
        "0x530c90-0x530e56",
    ],
    3: [
        "0x4b60a0-0x4b6264",
        "0x48bfc0-0x48c182",
        "0x4cf380-0x4cf540",
        "0x4d3930-0x4d3af0",
        "0x568c4-0x56a83",
        "0x69abc-0x69c7b",
        "0x37c20-0x37dde",
        "0x66ea2-0x67060",
        "0x4a3b70-0x4a3d2c",
        "0x56b7e0-0x56b99c",
        "0x32360-0x3251a",
        "0x522540-0x5226f9",
        "0x555240-0x5553f9",
        "0x50dec0-0x50e078",
        "0x5580e0-0x558297",
        "0x59faa-0x5a160",
    ],
    4: [
        "0x50ab00-0x50acb6",
        "0x56bf40-0x56c0f5",
        "0x4baf6-0x4bca9",
        "0x50cd40-0x50cef3",
        "0x49a910-0x49aac2",
        "0x4c5100-0x4c52b2",
        "0x55ec80-0x55ee32",
        "0x499e90-0x49a041",
        "0x4eb84-0x4ed34",
        "0x4ac9e0-0x4acb8f",
        "0x212399-0x212547",
        "0x4ac0d0-0x4ac27e",
        "0x2293e-0x22aea",
        "0x2ccd6-0x2ce81",
        "0x529840-0x5299eb",
        "0x50aff0-0x50b198",
    ],
    5: [
        "0x535930-0x535ad8",
        "0x527483-0x52762a",
        "0x54d0a0-0x54d247",
        "0x6747c-0x67622",
        "0x48aec0-0x48b066",
        "0x4f3230-0x4f33d6",
        "0x542770-0x542916",
        "0x69802-0x699a6",
        "0x4b13e0-0x4b1584",
        "0x6bd8a-0x6bf2a",
        "0x568b50-0x568d00",
        "0x61082-0x61221",
        "0x4886f0-0x48888d",
        "0x55620-0x557b9",
        "0x4ae080-0x4ae218",
        "0x4cd900-0x4cda96",
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
    functions = re.sub(r"(int64_t\s+v\d+\s*=\s*)&([A-Za-z_]\w*)", r"\1(int64_t)&\2", functions)
    functions = re.sub(r" = &g(\d+)", r" = (int64_t)&g\1", functions)
    functions = re.sub(r"return &g(\d+)", r"return (int64_t)&g\1", functions)
    functions = re.sub(r"return &v(\d+)", r"return (int64_t)&v\1", functions)
    return functions


def function_prototypes(functions):
    defined = set(FUNCTION_DEF_RE.findall(functions))
    called = set(FUNCTION_CALL_RE.findall(functions))
    return [f"int64_t {name}();" for name in sorted(called | defined)]


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
    print("#include <stdio.h>")
    print("#include <stdint.h>")
    print("#include <stdlib.h>")
    print("#include <string.h>")
    print("")
    print("typedef __int128 int128_t;")
    print("typedef unsigned __int128 uint128_t;")
    print("typedef int32_t int3_t;")
    print("typedef float float32_t;")
    print("typedef double float64_t;")
    print("typedef long double float80_t;")
    print("struct __locale_struct;")
    print("struct _TYPEDEF___mbstate_t;")
    print("struct _IO_FILE;")
    for index in referenced_globals(functions):
        print(f"extern int g{index};")
    print("unsigned char llvm_ctpop_i8(unsigned char value);")
    print("void __asm_int(int32_t interrupt);")
    print("int32_t __asm_in(uint16_t port);")
    print("void __asm_out(uint16_t port, char value);")
    print("void __asm_outsb(uint16_t port, char value);")
    print("uint8_t __readfsbyte(int64_t offset);")
    print("uint64_t __readfsqword(int64_t offset);")
    print("int64_t __asm_iretd(void);")
    print("void __asm_rep_stosb_memset(char *dst, char value, int64_t count);")
    print("void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);")
    print("void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);")
    print("void __asm_mfence(void);")
    print("void __stack_chk_fail(void);")
    print("int __cxa_atexit(void (*func)(int64_t *), void *arg, void *dso);")
    print("int128_t __asm_movsd(int64_t value);")
    print("int128_t __asm_movdqu(int128_t value);")
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
    print("char *gettext(char *msgid);")
    print("char *bind_textdomain_codeset(char *domainname, char *codeset);")
    print("struct _IO_FILE *fopen(const char *path, const char *mode);")
    print("size_t fread(void *ptr, size_t size, size_t nmemb, struct _IO_FILE *stream);")
    print("int fclose(struct _IO_FILE *stream);")
    print("int32_t mbrtowc(int32_t *pwc, const char *s, size_t n, struct _TYPEDEF___mbstate_t *ps);")
    print("int32_t mbsnrtowcs(int32_t *dst, char **src, size_t nms, size_t len, struct _TYPEDEF___mbstate_t *ps);")
    print("int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);")
    print("int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);")
    print("void *memset2(void *s, int c, size_t n);")
    print("int pthread_mutex_lock(int64_t *mutex);")
    print("int pthread_mutex_unlock(int64_t *mutex);")
    print("char *strdup(const char *s);")
    print("struct _Unwind_Exception;")
    print("void _Unwind_Resume(struct _Unwind_Exception *exception);")
    print("")
    for proto in function_prototypes(functions):
        print(proto)
    print("")
    print(functions)
    print(f"native_gap_retdec_batch={args.batch_index}", file=sys.stderr)
    print(f"native_gap_retdec_selected_ranges={len(ranges)}", file=sys.stderr)


if __name__ == "__main__":
    main()
