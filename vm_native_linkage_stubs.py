#!/usr/bin/env python3
"""Recover ELF linkage stubs as mechanical C evidence."""

from __future__ import annotations

import argparse
import re
import subprocess
from dataclasses import dataclass
from pathlib import Path


SECTIONS = (".init", ".plt", ".plt.got", ".fini")


@dataclass(frozen=True)
class Section:
    name: str
    start: int
    stop: int


@dataclass(frozen=True)
class Stub:
    section: str
    start: int
    stop: int
    symbol: str
    instructions: tuple[str, ...]

    @property
    def size(self) -> int:
        return self.stop - self.start


def read_sections(elf: Path) -> dict[str, Section]:
    out = subprocess.check_output(["readelf", "-SW", str(elf)], text=True)
    sections: dict[str, Section] = {}
    pattern = re.compile(
        r"^\s*\[\s*\d+\]\s+(\S+)\s+\S+\s+([0-9a-fA-F]+)\s+"
        r"[0-9a-fA-F]+\s+([0-9a-fA-F]+)\s+\S+\s+\S+"
    )
    for line in out.splitlines():
        match = pattern.match(line)
        if not match:
            continue
        name, addr, size = match.groups()
        if name in SECTIONS:
            start = int(addr, 16)
            sections[name] = Section(name, start, start + int(size, 16))
    missing = [name for name in SECTIONS if name not in sections]
    if missing:
        raise SystemExit(f"missing executable linkage sections: {', '.join(missing)}")
    return sections


def read_objdump_stubs(elf: Path, sections: dict[str, Section]) -> list[Stub]:
    cmd = ["objdump", "-d"]
    for section in SECTIONS:
        cmd.extend(["-j", section])
    cmd.append(str(elf))
    out = subprocess.check_output(cmd, text=True)

    current_section: str | None = None
    current_symbol: str | None = None
    current_start: int | None = None
    current_lines: list[str] = []
    raw: list[tuple[str, int, str, tuple[str, ...]]] = []

    def flush() -> None:
        nonlocal current_symbol, current_start, current_lines
        if current_section and current_symbol is not None and current_start is not None:
            raw.append((current_section, current_start, current_symbol, tuple(current_lines)))
        current_symbol = None
        current_start = None
        current_lines = []

    section_re = re.compile(r"^Disassembly of section (\S+):")
    label_re = re.compile(r"^([0-9a-fA-F]+)\s+<(.+)>:")
    insn_re = re.compile(r"^\s*[0-9a-fA-F]+:\s+(.+)$")
    for line in out.splitlines():
        section_match = section_re.match(line)
        if section_match:
            flush()
            current_section = section_match.group(1)
            continue
        label_match = label_re.match(line)
        if label_match and current_section in sections:
            flush()
            current_start = int(label_match.group(1), 16)
            current_symbol = label_match.group(2)
            continue
        insn_match = insn_re.match(line)
        if insn_match and current_symbol is not None:
            current_lines.append(insn_match.group(1).strip())
    flush()

    stubs: list[Stub] = []
    by_section: dict[str, list[tuple[str, int, str, tuple[str, ...]]]] = {}
    for item in raw:
        by_section.setdefault(item[0], []).append(item)
    for section_name, items in by_section.items():
        items = sorted(items, key=lambda item: item[1])
        section = sections[section_name]
        for index, (_section, start, symbol, lines) in enumerate(items):
            stop = items[index + 1][1] if index + 1 < len(items) else section.stop
            stubs.append(Stub(section_name, start, stop, symbol, lines))
    return sorted(stubs, key=lambda item: (item.section, item.start))


def c_name(stub: Stub) -> str:
    symbol = stub.symbol
    symbol = symbol.split("@@", 1)[0]
    symbol = symbol.replace("@plt", "_plt")
    symbol = re.sub(r"[^A-Za-z0-9_]+", "_", symbol).strip("_")
    if not symbol or not re.match(r"[A-Za-z_]", symbol):
        symbol = f"stub_{stub.start:x}"
    return f"eac_linkage_{stub.section.strip('.').replace('.', '_')}_{stub.start:x}_{symbol}"


def c_string(value: str) -> str:
    return '"' + value.replace("\\", "\\\\").replace('"', '\\"') + '"'


def emit_c(stubs: list[Stub]) -> None:
    print("/*")
    print(" * Mechanical C evidence for ELF linkage stubs.")
    print(" * These functions model linker/loader veneers, not program-owned logic.")
    print(" */")
    print("#include <stdint.h>")
    print("")
    print("typedef struct EACLinkageStub {")
    print("    const char *section;")
    print("    const char *symbol;")
    print("    uint64_t start;")
    print("    uint64_t stop;")
    print("    uint64_t size;")
    print("} EACLinkageStub;")
    print("")
    for stub in stubs:
        print(f"// Address range: 0x{stub.start:x} - 0x{stub.stop:x}")
        print(f"void {c_name(stub)}(void) {{")
        print(f"    /* {stub.section} {stub.symbol} */")
        for line in stub.instructions:
            print(f"    /* {line} */")
        print("}")
        print("")
    print("static const EACLinkageStub k_eac_linkage_stubs[] = {")
    for stub in stubs:
        print(
            "    { "
            f"{c_string(stub.section)}, {c_string(stub.symbol)}, "
            f"0x{stub.start:x}ull, 0x{stub.stop:x}ull, {stub.size}ull"
            " },"
        )
    print("};")
    print(f"enum {{ EAC_LINKAGE_STUB_COUNT = {len(stubs)} }};")
    print("_Static_assert(sizeof(k_eac_linkage_stubs) / sizeof(k_eac_linkage_stubs[0]) == EAC_LINKAGE_STUB_COUNT, \"linkage stub count mismatch\");")


def emit_tsv(stubs: list[Stub]) -> None:
    print("section\tstart\tstop\tbytes\tsymbol")
    for stub in stubs:
        print(f"{stub.section}\t0x{stub.start:x}\t0x{stub.stop:x}\t{stub.size}\t{stub.symbol}")


def emit_markdown(stubs: list[Stub]) -> None:
    print("# Native Linkage Stubs")
    print("")
    print(f"- stubs: `{len(stubs)}`")
    print(f"- bytes: `{sum(stub.size for stub in stubs)}`")
    print("")
    print("| Section | Start | Stop | Bytes | Symbol |")
    print("| --- | ---: | ---: | ---: | --- |")
    for stub in stubs:
        print(f"| `{stub.section}` | `0x{stub.start:x}` | `0x{stub.stop:x}` | {stub.size} | `{stub.symbol}` |")


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--elf", type=Path, default=Path("eac.elf"))
    parser.add_argument("--format", choices=("c", "tsv", "markdown"), default="c")
    args = parser.parse_args()

    stubs = read_objdump_stubs(args.elf, read_sections(args.elf))
    if args.format == "c":
        emit_c(stubs)
    elif args.format == "tsv":
        emit_tsv(stubs)
    else:
        emit_markdown(stubs)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
