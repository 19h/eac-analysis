#!/usr/bin/env python3
import argparse
import sys
from pathlib import Path


def read_lines(path):
    return Path(path).read_text(errors="replace").splitlines()


def program_body(lines):
    for idx, line in enumerate(lines):
        if line.startswith("static void prog_"):
            return lines[idx:]
    raise SystemExit("could not find first program block in program pseudocode")


def main():
    parser = argparse.ArgumentParser(description="Bundle handler and full bytecode pseudocode into one C-like source file.")
    parser.add_argument("--handlers", default="dumps/vmtail-wide-1m-w16/vm_handlers_pseudocode.c")
    parser.add_argument("--program", default="dumps/vmtail-wide-1m-w16/vm_program_pseudocode_full.c")
    args = parser.parse_args()

    handlers = read_lines(args.handlers)
    program = read_lines(args.program)

    print("/*")
    print(" * Combined VM reconstruction bundle.")
    print(" * Handler/operator bodies come first; recovered bytecode program blocks follow.")
    print(" * This is a C-like analysis artifact, not drop-in buildable source.")
    print(" */")
    print("")
    for line in handlers:
        print(line)
    print("")
    print("/* Recovered full VM bytecode program. */")
    print("extern void vm_unresolved_synthetic_tail(VMState *vm, uint64_t vm_ip);")
    if not any("signed_vm_delta_u32" in line for line in handlers):
        print("static int64_t signed_vm_delta_u32(uint32_t raw) {")
        print("    return (raw & 0x80000000u) ? -(int64_t)(raw & 0x7fffffffu) : (int64_t)raw;")
        print("}")
    print("")
    for line in program_body(program):
        print(line)

    print(
        f"source_bundle_handlers={sum(1 for line in handlers if line.startswith('static VMOpResult op_entry_'))} "
        f"program_blocks={sum(1 for line in program if line.startswith('static void prog_'))}",
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
