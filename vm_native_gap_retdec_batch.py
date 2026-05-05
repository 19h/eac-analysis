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
    6: [
        "0x4d3af0-0x4d3c86",
        "0x54d830-0x54d9c6",
        "0x552760-0x5528f6",
        "0x29a64-0x29bf9",
        "0x4dfc2-0x4e155",
        "0x497ff0-0x498183",
        "0x4ab380-0x4ab513",
        "0x4b53f0-0x4b5583",
        "0x489630-0x4897c0",
        "0x23344-0x234d2",
        "0x4918e-0x4931c",
        "0x4d4560-0x4d46ec",
        "0x565450-0x5655dc",
        "0x4985b0-0x49873b",
        "0x5be1a-0x5bfa4",
        "0x67ede-0x68067",
    ],
    7: [
        "0x71a15-0x71b9e",
        "0x491e50-0x491fd9",
        "0x30c30-0x30db8",
        "0x2620b-0x26392",
        "0x488d00-0x488e87",
        "0x5515b0-0x551735",
        "0x33be0-0x33d64",
        "0x564190-0x564314",
        "0x565720-0x5658a3",
        "0x4b1ac0-0x4b1c41",
        "0x27c71-0x27df1",
        "0x4b2e6-0x4b465",
        "0x5c136-0x5c2b5",
        "0x5c2b6-0x5c435",
        "0x5143e0-0x51455f",
        "0x61d90-0x61f0e",
    ],
    8: [
        "0x55ead0-0x55ec4e",
        "0x497e60-0x497fdd",
        "0x5422a-0x543a6",
        "0x48c190-0x48c30c",
        "0x54d560-0x54d6dc",
        "0x61792-0x6190c",
        "0x4ff270-0x4ff3e8",
        "0x5010e0-0x501258",
        "0x2247e-0x225f5",
        "0x327a0-0x32917",
        "0x36b64-0x36cda",
        "0x4b51a-0x4b690",
        "0x71d34-0x71eaa",
        "0x4c5bd0-0x4c5d45",
        "0x4ea160-0x4ea2d5",
        "0x548780-0x5488f5",
    ],
    9: [
        "0x48e480-0x48e5f4",
        "0x4d2690-0x4d2804",
        "0x50cac0-0x50cc34",
        "0x2d980-0x2daf3",
        "0x549ac-0x54b1f",
        "0x55c6e-0x55de1",
        "0x59cd2-0x59e45",
        "0x50c440-0x50c5b3",
        "0x4fd550-0x4fd6c1",
        "0x4c87e-0x4c9ee",
        "0x4d2270-0x4d23e0",
        "0x5001a-0x50189",
        "0x6837a-0x684e8",
        "0x4a578-0x4a6e5",
        "0x2808e-0x281fa",
        "0x4b9df0-0x4b9f5c",
    ],
    10: [
        "0x48e723-0x48e88e",
        "0x4af8d0-0x4afa38",
        "0x5484b0-0x548616",
        "0x549e80-0x549fe6",
        "0x5720a0-0x572205",
        "0x57d580-0x57d6e5",
        "0x4c4730-0x4c4893",
        "0x4fd6d0-0x4fd833",
        "0x583450-0x5835b3",
        "0x4525c-0x453be",
        "0x4ad570-0x4ad6d2",
        "0x5009e0-0x500b42",
        "0x58d40-0x58ea1",
        "0x752b0-0x75411",
        "0x5146f0-0x514851",
        "0x2c930-0x2ca8f",
    ],
    11: [
        "0x40adf-0x40c3e",
        "0x67060-0x671bf",
        "0x4c0830-0x4c098f",
        "0x4feb80-0x4fecdf",
        "0x5a828-0x5a984",
        "0x48f642-0x48f79d",
        "0x53c4b0-0x53c60b",
        "0x307d0-0x30929",
        "0x33b1f2-0x33b34b",
        "0x52b400-0x52b558",
        "0x577f00-0x578058",
        "0x578090-0x5781e8",
        "0x2a9de-0x2ab35",
        "0x495a4-0x496fb",
        "0x4f0b6-0x4f20d",
        "0x4c0990-0x4c0ae6",
    ],
    12: [
        "0x4096a-0x40abf",
        "0x4bd90-0x4bee5",
        "0x578220-0x578375",
        "0x498440-0x498594",
        "0x4a9620-0x4a9774",
        "0x508490-0x5085e1",
        "0x281fa-0x2834a",
        "0x4d70e-0x4d85d",
        "0x4b66c0-0x4b680e",
        "0x20f9a-0x210e7",
        "0x578380-0x5784cd",
        "0x47660-0x477ac",
        "0x53b22-0x53c6e",
        "0x54eda-0x55026",
        "0x609f0-0x60b3b",
        "0x49044-0x4918e",
    ],
    13: [
        "0x4b188-0x4b2d2",
        "0x4c3810-0x4c395a",
        "0x556cf0-0x556e3a",
        "0x4c0d4-0x4c21c",
        "0x4c592-0x4c6da",
        "0x633cc-0x63514",
        "0x4ff460-0x4ff5a7",
        "0x5012d0-0x501417",
        "0x54f250-0x54f397",
        "0x552590-0x5526d7",
        "0x25712-0x25856",
        "0x2588a-0x259ce",
        "0x27e7a-0x27fbe",
        "0x45a3e-0x45b82",
        "0x713da-0x7151e",
        "0x4d30d0-0x4d3213",
    ],
    14: [
        "0x4d8cc0-0x4d8e02",
        "0x4885ae-0x4886ef",
        "0x57b2f0-0x57b431",
        "0x59b19-0x59c57",
        "0x4ea000-0x4ea13d",
        "0x579bc0-0x579cfd",
        "0x6bb54-0x6bc90",
        "0x525bd0-0x525d0c",
        "0x525d20-0x525e5c",
        "0x54ed60-0x54ee9c",
        "0x54eec0-0x54effc",
        "0x55b740-0x55b87c",
        "0x55b890-0x55b9cc",
        "0x577a20-0x577b5c",
        "0x577bc0-0x577cfc",
        "0x56788-0x568c3",
    ],
    15: [
        "0x56fab0-0x56fbea",
        "0x48e347-0x48e480",
        "0x27a86-0x27bbe",
        "0x59078-0x591b0",
        "0x514590-0x5146c8",
        "0x5148a0-0x5149d8",
        "0x51970f-0x519847",
        "0x6b56e-0x6b6a5",
        "0x4bb8d0-0x4bba05",
        "0x573580-0x5736b5",
        "0x692e6-0x69419",
        "0x38fcf-0x39101",
        "0xfeebc-0xfefee",
        "0x6a512-0x6a643",
        "0x4b8660-0x4b8791",
        "0x4fdd8-0x4ff08",
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
    print("struct sockaddr;")
    print("struct utsname;")
    print("#define F_GETFL 3")
    print("#define F_SETFL 4")
    print("#define SO_DEBUG 1")
    for index in referenced_globals(functions):
        print(f"extern int g{index};")
    print("unsigned char llvm_ctpop_i8(unsigned char value);")
    print("uint16_t llvm_bswap_i16(uint16_t value);")
    print("void __asm_int(int32_t interrupt);")
    print("int64_t __asm_int1(int32_t interrupt);")
    print("int64_t __asm_int3(void);")
    print("int32_t __asm_in(uint16_t port);")
    print("int32_t __asm_in_134(uint16_t port);")
    print("char __asm_in_136(uint16_t port);")
    print("void __asm_out(uint16_t port, char value);")
    print("void __asm_out_135(uint16_t port, int32_t value);")
    print("void __asm_outsb(uint16_t port, char value);")
    print("uint8_t __readfsbyte(int64_t offset);")
    print("uint64_t __readfsqword(int64_t offset);")
    print("int64_t __asm_iretd(void);")
    print("void __asm_rcl(int32_t value);")
    print("void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);")
    print("void __asm_rep_stosb_memset(char *dst, char value, int64_t count);")
    print("void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);")
    print("void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);")
    print("void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);")
    print("void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);")
    print("int64_t __asm_hlt(void);")
    print("int64_t __asm_mfence(void);")
    print("void __stack_chk_fail(void);")
    print("int __cxa_atexit(void (*func)(int64_t *), void *arg, void *dso);")
    print("int128_t __asm_movsd(int64_t value);")
    print("int128_t __asm_movss(int32_t value);")
    print("int64_t __asm_movss_133(int128_t value);")
    print("int128_t __asm_movdqa(int128_t value);")
    print("int128_t __asm_movdqu(int128_t value);")
    print("void __asm_movdqu_133();")
    print("int128_t __asm_movapd(int128_t value);")
    print("int128_t __asm_andpd(int128_t left, int128_t right);")
    print("int128_t __asm_andnpd(int128_t left, int128_t right);")
    print("int128_t __asm_divsd(int128_t left, int64_t right);")
    print("int128_t __asm_divsd_133(int128_t left, int128_t right);")
    print("int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);")
    print("int128_t __asm_psrldq(int128_t value, int count);")
    print("int128_t __asm_pslldq(int128_t value, int count);")
    print("int128_t __asm_psllq(int128_t value, int count);")
    print("int128_t __asm_psrlq(int128_t value, int count);")
    print("int128_t __asm_por(int128_t left, int128_t right);")
    print("int128_t __asm_pxor(int128_t left, int128_t right);")
    print("int128_t __asm_cmpnlesd(int128_t left, int128_t right);")
    print("int128_t __asm_cvtsi2sd(int64_t value);")
    print("int128_t __asm_subsd(int128_t left, int128_t right);")
    print("int64_t __asm_cvttsd2si(int128_t value);")
    print("void __asm_ucomisd(int128_t left, int128_t right);")
    print("int128_t __asm_movups();")
    print("void __asm_movups_133();")
    print("int128_t __asm_movaps(int128_t value);")
    print("float80_t __frontend_reg_load_fpr(int32_t reg);")
    print("void __frontend_reg_store_fpr(int32_t reg, float80_t value);")
    print("char *__nl_langinfo_l(int32_t item, struct __locale_struct *locale);")
    print("struct __locale_struct *__uselocale(struct __locale_struct *locale);")
    print("char *dgettext(char *domain, char *msgid);")
    print("char *gettext(char *msgid);")
    print("char *bind_textdomain_codeset(char *domainname, char *codeset);")
    print("void *iconv_open(const char *tocode, const char *fromcode);")
    print("int32_t iconv(void *cd, char **inbuf, int32_t *inbytesleft, char **outbuf, int32_t *outbytesleft);")
    print("int iconv_close(void *cd);")
    print("struct _IO_FILE *fopen(const char *path, const char *mode);")
    print("size_t fread(void *ptr, size_t size, size_t nmemb, struct _IO_FILE *stream);")
    print("int fclose(struct _IO_FILE *stream);")
    print("int uname(struct utsname *buf);")
    print("int64_t __tls_get_addr(void *arg);")
    print("int32_t mbrtowc(int32_t *pwc, const char *s, size_t n, struct _TYPEDEF___mbstate_t *ps);")
    print("int32_t mbsnrtowcs(int32_t *dst, char **src, size_t nms, size_t len, struct _TYPEDEF___mbstate_t *ps);")
    print("size_t wcslen(const int32_t *s);")
    print("int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);")
    print("int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);")
    print("int64_t memset2(void *s, int c, size_t n);")
    print("int pthread_mutex_lock(void *mutex);")
    print("int pthread_mutex_unlock(void *mutex);")
    print("int fcntl(int fd, int cmd, ...);")
    print("int32_t *__errno_location(void);")
    print("int connect(int sockfd, const struct sockaddr *addr, int32_t addrlen);")
    print("int getsockopt(int sockfd, int level, int optname, void *optval, int32_t *optlen);")
    print("int64_t readlink(const char *path, char *buf, size_t bufsiz);")
    print("char *realpath(const char *path, char *resolved_path);")
    print("int64_t __wctype_l(const char *property, struct __locale_struct *locale);")
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
