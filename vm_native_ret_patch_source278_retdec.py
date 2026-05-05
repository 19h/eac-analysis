#!/usr/bin/env python3
import argparse
import subprocess
import sys
import tempfile
from pathlib import Path


RANGES = (
    "0x6c010-0x6c044,"
    "0x15b5b2-0x15b6f2,"
    "0x2d2cf4-0x2d2e69,"
    "0xcf3c7-0xcf5c7,"
    "0xcdc60-0xcde60"
)

PROTOTYPES = [
    "uint64_t __readfsqword(uint64_t offset);",
    "int64_t function_6c010(int64_t a1, int64_t a2);",
    "int64_t function_cdc60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);",
    "int64_t function_cf3c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);",
    "int64_t function_15b5b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);",
    "int64_t function_2d2cf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);",
]


def extract_functions(text):
    start_marker = "// ------------------------ Functions -------------------------"
    end_marker = "// --------------------- Meta-Information ---------------------"
    start = text.find(start_marker)
    end = text.find(end_marker)
    if start < 0 or end < 0 or end <= start:
        raise SystemExit("retdec output did not contain the expected functions section")
    functions = text[start + len(start_marker):end].strip()
    # RetDec emits address-of stack locals into int64_t temporaries for this
    # obfuscated stack-pivot code. Preserve the decompiler shape but make the
    # artifact strict-C syntax-checkable.
    functions = functions.replace(" = &v", " = (int64_t)&v")
    return functions


def main():
    parser = argparse.ArgumentParser(description="Emit a targeted RetDec C view for source278 double ret-patch native targets.")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--retdec", default="retdec-decompiler")
    parser.add_argument("--timeout", type=int, default=60)
    parser.add_argument("--ranges", default=RANGES)
    args = parser.parse_args()

    with tempfile.TemporaryDirectory(prefix="eacsym-retdec-") as tmpdir:
        out_path = Path(tmpdir) / "source278_retdec.c"
        cmd = [
            args.retdec,
            "--select-ranges",
            args.ranges,
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
    print(" * Targeted RetDec C for source278 double native return-patch control.")
    print(" *")
    print(" * Ranges:")
    for item in args.ranges.split(","):
        print(f" *   {item}")
    print(" *")
    print(" * This is external decompiler output kept as an evidence artifact. It is")
    print(" * useful for C-shape and call-chain recovery, not treated as proof that the")
    print(" * obfuscated native stack/register shuffles are fully simplified.")
    print(" */")
    print("#include <stdbool.h>")
    print("#include <stdint.h>")
    print("")
    for proto in PROTOTYPES:
        print(proto)
    print("")
    print(extract_functions(source))
    print("source278_retdec_functions=5", file=sys.stderr)


if __name__ == "__main__":
    main()
