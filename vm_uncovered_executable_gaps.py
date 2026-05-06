#!/usr/bin/env python3
"""Emit exact C byte carriers for executable bytes not yet lifted to C."""

from __future__ import annotations

import argparse
import csv
import struct
import sys
from dataclasses import dataclass
from pathlib import Path


SHT_NOBITS = 8


@dataclass(frozen=True)
class ElfSection:
    name: str
    addr: int
    offset: int
    size: int
    section_type: int

    @property
    def stop(self) -> int:
        return self.addr + self.size


@dataclass(frozen=True)
class Gap:
    index: int
    section: ElfSection
    start: int
    stop: int
    data: bytes

    @property
    def size(self) -> int:
        return self.stop - self.start


def read_elf_sections(path: Path) -> list[ElfSection]:
    data = path.read_bytes()
    if data[:4] != b"\x7fELF":
        raise SystemExit(f"{path} is not an ELF file")
    if data[4] != 2 or data[5] != 1:
        raise SystemExit(f"{path} is not a little-endian ELF64 file")
    (
        _e_type,
        _e_machine,
        _e_version,
        _e_entry,
        _e_phoff,
        e_shoff,
        _e_flags,
        _e_ehsize,
        _e_phentsize,
        _e_phnum,
        e_shentsize,
        e_shnum,
        e_shstrndx,
    ) = struct.unpack_from("<HHIQQQIHHHHHH", data, 16)
    if e_shoff == 0 or e_shnum == 0:
        raise SystemExit(f"{path} has no section table")
    raw_sections = []
    for index in range(e_shnum):
        off = e_shoff + index * e_shentsize
        raw_sections.append(struct.unpack_from("<IIQQQQIIQQ", data, off))
    shstr = raw_sections[e_shstrndx]
    shstr_off = shstr[4]
    shstr_size = shstr[5]
    shstr_data = data[shstr_off : shstr_off + shstr_size]

    def name_at(offset: int) -> str:
        end = shstr_data.find(b"\0", offset)
        if end < 0:
            end = len(shstr_data)
        return shstr_data[offset:end].decode("utf-8", errors="replace")

    sections = []
    for raw in raw_sections:
        sh_name, sh_type, _flags, sh_addr, sh_offset, sh_size, *_rest = raw
        sections.append(
            ElfSection(
                name=name_at(sh_name),
                addr=sh_addr,
                offset=sh_offset,
                size=sh_size,
                section_type=sh_type,
            )
        )
    return sections


def parse_int(value: str) -> int:
    return int(value, 0)


def read_gaps(coverage_tsv: Path, sections: dict[str, ElfSection], elf_data: bytes, section_name: str) -> list[Gap]:
    gaps: list[Gap] = []
    with coverage_tsv.open(newline="") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        for row in reader:
            if row.get("row_type") != "gap" or row.get("section") != section_name:
                continue
            section = sections.get(section_name)
            if section is None:
                raise SystemExit(f"ELF section {section_name!r} is missing")
            start = parse_int(row["start"])
            stop = parse_int(row["stop"])
            expected_size = int(row["bytes"])
            if stop <= start:
                raise SystemExit(f"invalid gap {start:#x}-{stop:#x}")
            if stop - start != expected_size:
                raise SystemExit(f"gap size mismatch {start:#x}-{stop:#x}")
            if start < section.addr or stop > section.stop:
                raise SystemExit(f"gap {start:#x}-{stop:#x} is outside {section.name}")
            if section.section_type == SHT_NOBITS:
                data = bytes(expected_size)
            else:
                file_start = section.offset + (start - section.addr)
                file_stop = file_start + expected_size
                data = elf_data[file_start:file_stop]
                if len(data) != expected_size:
                    raise SystemExit(f"short ELF read for gap {start:#x}-{stop:#x}")
            gaps.append(Gap(len(gaps), section, start, stop, data))
    return gaps


def emit_byte_array(name: str, data: bytes) -> None:
    print(f"static const uint8_t {name}[{len(data)}] = {{")
    for offset in range(0, len(data), 12):
        chunk = data[offset : offset + 12]
        values = ", ".join(f"0x{byte:02x}" for byte in chunk)
        print(f"    {values},")
    print("};")


def emit_c(gaps: list[Gap], elf: Path, coverage: Path, section_name: str) -> None:
    total = sum(gap.size for gap in gaps)
    print("/*")
    print(" * Exact byte carriers for executable coverage gaps.")
    print(f" * ELF: {elf}")
    print(f" * Coverage: {coverage}")
    print(f" * Section: {section_name}")
    print(f" * Gaps: {len(gaps)}")
    print(f" * Bytes: {total}")
    print(" *")
    print(" * These are not decompiled semantics. They are lossless C evidence for")
    print(" * executable bytes that are not yet represented by RetDec/manual lifts.")
    print(" */")
    print("#include <stddef.h>")
    print("#include <stdint.h>")
    print("")
    print("typedef struct VMUncoveredExecutableGap {")
    print("    uint64_t start;")
    print("    uint64_t stop;")
    print("    uint64_t size;")
    print("    const uint8_t *bytes;")
    print("} VMUncoveredExecutableGap;")
    print("")
    for gap in gaps:
        emit_byte_array(f"vm_uncovered_executable_gap_{gap.index:04d}_bytes", gap.data)
        print("")
    print("static const VMUncoveredExecutableGap vm_uncovered_executable_gaps[] = {")
    for gap in gaps:
        print(
            "    { "
            f"0x{gap.start:x}ull, 0x{gap.stop:x}ull, {gap.size}ull, "
            f"vm_uncovered_executable_gap_{gap.index:04d}_bytes"
            " },"
        )
    print("};")
    print("")
    print(f"enum {{ VM_UNCOVERED_EXECUTABLE_GAP_COUNT = {len(gaps)} }};")
    print(f"enum {{ VM_UNCOVERED_EXECUTABLE_GAP_BYTES = {total} }};")
    print("_Static_assert(sizeof(vm_uncovered_executable_gaps) / sizeof(vm_uncovered_executable_gaps[0]) == VM_UNCOVERED_EXECUTABLE_GAP_COUNT, \"gap table count mismatch\");")
    print("")
    print("const VMUncoveredExecutableGap *vm_uncovered_executable_gap_at(size_t index) {")
    print("    return index < VM_UNCOVERED_EXECUTABLE_GAP_COUNT ? &vm_uncovered_executable_gaps[index] : 0;")
    print("}")
    print("")
    print("size_t vm_uncovered_executable_gap_count(void) {")
    print("    return VM_UNCOVERED_EXECUTABLE_GAP_COUNT;")
    print("}")


def emit_tsv(gaps: list[Gap]) -> None:
    print("index\tsection\tstart\tstop\tbytes")
    for gap in gaps:
        print(f"{gap.index}\t{gap.section.name}\t0x{gap.start:x}\t0x{gap.stop:x}\t{gap.size}")


def emit_markdown(gaps: list[Gap], section_name: str) -> None:
    total = sum(gap.size for gap in gaps)
    print(f"# Uncovered Executable Gaps ({section_name})")
    print("")
    print(f"- gaps: `{len(gaps)}`")
    print(f"- bytes: `{total}`")
    print("")
    print("| Index | Start | Stop | Bytes |")
    print("| ---: | ---: | ---: | ---: |")
    for gap in gaps[:64]:
        print(f"| {gap.index} | `0x{gap.start:x}` | `0x{gap.stop:x}` | {gap.size} |")
    if len(gaps) > 64:
        print(f"| ... | ... | ... | {len(gaps) - 64} more gaps |")


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--elf", type=Path, default=Path("eac.elf"))
    parser.add_argument(
        "--coverage",
        type=Path,
        default=Path("dumps/vmtail-wide-1m-w16/vm_native_executable_coverage_audit.tsv"),
    )
    parser.add_argument("--section", default=".text")
    parser.add_argument("--format", choices=("c", "tsv", "markdown"), default="c")
    args = parser.parse_args()

    elf_data = args.elf.read_bytes()
    sections = {section.name: section for section in read_elf_sections(args.elf)}
    gaps = read_gaps(args.coverage, sections, elf_data, args.section)

    if args.format == "c":
        emit_c(gaps, args.elf, args.coverage, args.section)
    elif args.format == "tsv":
        emit_tsv(gaps)
    else:
        emit_markdown(gaps, args.section)

    print(f"uncovered_executable_gaps={len(gaps)} bytes={sum(gap.size for gap in gaps)}", file=sys.stderr)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
