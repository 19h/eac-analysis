#!/usr/bin/env python3
"""Attach per-VM-program string reference tables to split decompiled C files."""

from __future__ import annotations

import argparse
import bisect
import csv
import re
import struct
from dataclasses import dataclass
from pathlib import Path


BEGIN = "/* === VM PROGRAM STRING REFERENCES BEGIN === */"
END = "/* === VM PROGRAM STRING REFERENCES END === */"
HEX_RE = re.compile(r"0x[0-9a-fA-F]+")


@dataclass(frozen=True)
class Section:
    index: str
    name: str
    vaddr: int
    file_offset: int
    size: int


@dataclass(frozen=True)
class StringRef:
    section_index: str
    section_name: str
    vaddr: int
    size: int
    text: str

    @property
    def end(self) -> int:
        return self.vaddr + self.size


@dataclass(frozen=True)
class Program:
    ident: str
    path: Path
    entrypoint: str
    start: int
    end: int
    size: int


@dataclass(frozen=True)
class Hit:
    program: str
    path: Path
    entrypoint: str
    source: str
    site: int
    value: int
    string: StringRef

    @property
    def offset(self) -> int:
        return self.value - self.string.vaddr

    @property
    def match_class(self) -> str:
        return "string_start" if self.offset == 0 else "string_interior"


def parse_int(text: str) -> int:
    return int(text, 16 if text.startswith("0x") else 10)


def c_string(text: str) -> str:
    out = ['"']
    for ch in text:
        code = ord(ch)
        if ch == "\\":
            out.append("\\\\")
        elif ch == '"':
            out.append('\\"')
        elif ch == "\n":
            out.append("\\n")
        elif ch == "\r":
            out.append("\\r")
        elif ch == "\t":
            out.append("\\t")
        elif 32 <= code < 127:
            out.append(ch)
        else:
            out.append(f"\\x{code:02x}")
    out.append('"')
    return "".join(out)


def load_sections_and_strings(path: Path) -> tuple[list[Section], list[StringRef]]:
    sections: list[Section] = []
    strings: list[StringRef] = []
    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            if row["kind"] == "section":
                sections.append(
                    Section(
                        index=row["section_index"],
                        name=row["name"],
                        vaddr=parse_int(row["vaddr"]),
                        file_offset=parse_int(row["file_offset"]),
                        size=parse_int(row["size"]),
                    )
                )
            elif row["kind"] == "string":
                strings.append(
                    StringRef(
                        section_index=row["section_index"],
                        section_name=row["name"],
                        vaddr=parse_int(row["vaddr"]),
                        size=parse_int(row["size"]),
                        text=row["text"],
                    )
                )
    strings.sort(key=lambda item: item.vaddr)
    return sections, strings


def load_programs(path: Path) -> list[Program]:
    programs: list[Program] = []
    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            ident = f"{int(row['program']):03d}"
            programs.append(
                Program(
                    ident=ident,
                    path=Path(row["path"]),
                    entrypoint=row["entrypoint"],
                    start=parse_int(row["start"]),
                    end=parse_int(row["end"]),
                    size=parse_int(row["size"]),
                )
            )
    return programs


def make_string_lookup(strings: list[StringRef]):
    starts = [item.vaddr for item in strings]

    def find(value: int) -> StringRef | None:
        idx = bisect.bisect_right(starts, value) - 1
        if idx < 0:
            return None
        item = strings[idx]
        if item.vaddr <= value < item.end:
            return item
        return None

    return find


def vaddr_to_file_offset(sections: list[Section], vaddr: int) -> int:
    for section in sections:
        if section.vaddr <= vaddr < section.vaddr + section.size:
            return section.file_offset + (vaddr - section.vaddr)
    # The bytecode atlas uses file-offset-like addresses for this sample. Keep
    # that fallback explicit so odd future sections do not silently disappear.
    return vaddr


def strip_existing_block(text: str) -> str:
    start = text.find(BEGIN)
    if start == -1:
        return text.rstrip() + "\n"
    stop = text.find(END, start)
    if stop == -1:
        return text.rstrip() + "\n"
    stop += len(END)
    return (text[:start].rstrip() + "\n" + text[stop:].lstrip()).rstrip() + "\n"


def scan_c_literals(program: Program, find_string) -> list[Hit]:
    text = program.path.read_text(encoding="utf-8", errors="replace")
    text = strip_existing_block(text)
    hits: list[Hit] = []
    for match in HEX_RE.finditer(text):
        value = int(match.group(0), 16)
        string = find_string(value)
        if string is not None:
            line = text.count("\n", 0, match.start()) + 1
            hits.append(Hit(program.ident, program.path, program.entrypoint, "c_literal", line, value, string))
    return hits


def scan_bytecode(program: Program, elf_bytes: bytes, sections: list[Section], find_string) -> list[Hit]:
    start = vaddr_to_file_offset(sections, program.start)
    end = vaddr_to_file_offset(sections, program.end - 1) + 1
    data = elf_bytes[start:end]
    hits: list[Hit] = []
    seen: set[tuple[str, int, int]] = set()
    for off in range(len(data)):
        if off + 4 <= len(data):
            value = struct.unpack_from("<I", data, off)[0]
            string = find_string(value)
            if string is not None:
                key = ("bytecode_u32", start + off, value)
                if key not in seen:
                    seen.add(key)
                    hits.append(Hit(program.ident, program.path, program.entrypoint, "bytecode_u32", program.start + off, value, string))
        if off + 8 <= len(data):
            value = struct.unpack_from("<Q", data, off)[0]
            string = find_string(value)
            if string is not None:
                key = ("bytecode_u64", start + off, value)
                if key not in seen:
                    seen.add(key)
                    hits.append(Hit(program.ident, program.path, program.entrypoint, "bytecode_u64", program.start + off, value, string))
    return hits


def dedupe_hits(hits: list[Hit]) -> list[Hit]:
    unique: dict[tuple[str, str, int, int, int], Hit] = {}
    for hit in hits:
        key = (hit.program, hit.source, hit.site, hit.value, hit.string.vaddr)
        unique.setdefault(key, hit)
    return sorted(unique.values(), key=lambda h: (h.program, h.source, h.site, h.value, h.string.vaddr))


def emit_block(program: Program, hits: list[Hit]) -> str:
    symbol = f"k_vm_program_atlas_{program.ident}_string_refs"
    count_symbol = f"VM_PROGRAM_ATLAS_{program.ident}_STRING_REF_COUNT"
    lines = ["", BEGIN, "typedef struct VMProgramStringRef {", "    const char *source;", "    uint64_t site;", "    uint64_t value;", "    uint64_t string_vaddr;", "    uint64_t string_offset;", "    uint64_t string_size;", "    const char *section;", "    const char *match_class;", "    const char *text;", "} VMProgramStringRef;"]
    lines.append(f"enum {{ {count_symbol} = {len(hits)} }};")
    if hits:
        lines.append(f"static const VMProgramStringRef {symbol}[{count_symbol}] = {{")
        for hit in hits:
            lines.append(
                "    { "
                f"{c_string(hit.source)}, "
                f"UINT64_C(0x{hit.site:x}), "
                f"UINT64_C(0x{hit.value:x}), "
                f"UINT64_C(0x{hit.string.vaddr:x}), "
                f"UINT64_C(0x{hit.offset:x}), "
                f"UINT64_C(0x{hit.string.size:x}), "
                f"{c_string(hit.string.section_name)}, "
                f"{c_string(hit.match_class)}, "
                f"{c_string(hit.string.text)} "
                "},"
            )
        lines.append("};")
    else:
        lines.append("/* No exact string-address references were found in this VM program's decompiled literals or bytecode immediates. */")
    lines.append(END)
    lines.append("")
    return "\n".join(lines)


def write_program_block(program: Program, hits: list[Hit]) -> None:
    text = program.path.read_text(encoding="utf-8", errors="replace")
    base = strip_existing_block(text)
    program.path.write_text(base + emit_block(program, hits), encoding="utf-8")


def write_manifest(path: Path, hits_by_program: dict[str, list[Hit]]) -> None:
    fields = [
        "program",
        "path",
        "entrypoint",
        "source",
        "site",
        "value",
        "string_vaddr",
        "string_offset",
        "section_index",
        "section_name",
        "string_size",
        "match_class",
        "text",
    ]
    with path.open("w", newline="") as handle:
        writer = csv.DictWriter(handle, delimiter="\t", fieldnames=fields)
        writer.writeheader()
        for program in sorted(hits_by_program):
            for hit in hits_by_program[program]:
                writer.writerow(
                    {
                        "program": hit.program,
                        "path": str(hit.path),
                        "entrypoint": hit.entrypoint,
                        "source": hit.source,
                        "site": f"0x{hit.site:x}",
                        "value": f"0x{hit.value:x}",
                        "string_vaddr": f"0x{hit.string.vaddr:x}",
                        "string_offset": f"0x{hit.offset:x}",
                        "section_index": hit.string.section_index,
                        "section_name": hit.string.section_name,
                        "string_size": f"0x{hit.string.size:x}",
                        "match_class": hit.match_class,
                        "text": hit.string.text,
                    }
                )


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--elf", type=Path, default=Path("eac.elf"))
    parser.add_argument("--strings-tsv", type=Path)
    parser.add_argument("--program-manifest", type=Path)
    parser.add_argument("--output", type=Path)
    parser.add_argument("--no-rewrite-c", action="store_true")
    args = parser.parse_args()

    strings_tsv = args.strings_tsv or args.root / "vm_binary_data_sections.tsv"
    program_manifest = args.program_manifest or args.root / "vm_programs_decompiled_manifest.tsv"
    output = args.output or args.root / "vm_program_string_refs.tsv"

    sections, strings = load_sections_and_strings(strings_tsv)
    programs = load_programs(program_manifest)
    find_string = make_string_lookup(strings)
    elf_bytes = args.elf.read_bytes()

    hits_by_program: dict[str, list[Hit]] = {}
    for program in programs:
        hits = scan_c_literals(program, find_string)
        hits.extend(scan_bytecode(program, elf_bytes, sections, find_string))
        hits = dedupe_hits(hits)
        hits_by_program[program.ident] = hits
        if not args.no_rewrite_c:
            write_program_block(program, hits)

    write_manifest(output, hits_by_program)
    total = sum(len(items) for items in hits_by_program.values())
    programs_with_refs = sum(1 for items in hits_by_program.values() if items)
    print(f"programs={len(programs)} strings={len(strings)} string_refs={total} programs_with_refs={programs_with_refs} output={output}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
