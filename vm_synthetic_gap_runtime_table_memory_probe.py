#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from collections import Counter
from dataclasses import dataclass
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv
from vm_static_dispatch_validate import read_dispatch_table
from vm_synthetic_gap_table_memory_probe import (
    TABLE_ENTRIES,
    TABLE_OFF,
    c_escape,
    fmt_hex,
    read_sections,
    section_for_off,
)


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
RUNTIME_DUMP_DIR = Path("dumps/vmtail-residual-122e3c-context-postcall")
MAP_RE = re.compile(
    r"^postcall_map_([0-9a-f]+)_([0-9a-f]+)_([^_]+)_off_([0-9a-f]+)\.bin$"
)


FIELDS = [
    "source_entry",
    "synthetic_start_vm_ip",
    "missing_successor_vm_ip",
    "table_offset",
    "table_offset_count",
    "absolute_file_off",
    "section",
    "region",
    "alignment",
    "runtime_dump_dir",
    "runtime_map_file",
    "runtime_map_perms",
    "runtime_map_file_off",
    "runtime_va",
    "runtime_bytes16",
    "runtime_matches_file",
    "file_qword_le",
    "file_qword_class",
    "runtime_qword_le",
    "runtime_qword_class",
    "runtime_qword_eac_off",
    "runtime_qword_dispatch_entry",
    "runtime_qword_section",
    "dynamic_next_source_entry",
    "dynamic_next_source_start_vm_ip",
    "dynamic_next_end_vm_ip",
]


@dataclass(frozen=True)
class RuntimeMap:
    path: Path
    start: int
    end: int
    perms: str
    file_off: int
    data: bytes

    @property
    def size(self):
        return self.end - self.start

    def contains_file_off(self, file_off):
        return self.file_off <= file_off < self.file_off + len(self.data)

    def runtime_va_for_file_off(self, file_off):
        return self.start + (file_off - self.file_off)

    def bytes_at_file_off(self, file_off, size):
        delta = file_off - self.file_off
        return self.data[delta:delta + size]


def parse_runtime_maps(dump_dir):
    maps = []
    for path in sorted(Path(dump_dir).glob("postcall_map_*.bin")):
        match = MAP_RE.match(path.name)
        if not match:
            continue
        start_s, end_s, perms, file_off_s = match.groups()
        start = int(start_s, 16)
        end = int(end_s, 16)
        file_off = int(file_off_s, 16)
        maps.append(RuntimeMap(path, start, end, perms, file_off, path.read_bytes()))
    maps.sort(key=lambda item: (item.file_off, item.start))
    return maps


def image_base_from_maps(maps):
    candidates = [item.start - item.file_off for item in maps if item.file_off <= item.start]
    if not candidates:
        return None
    counts = Counter(candidates)
    return counts.most_common(1)[0][0]


def mapped_image_size(maps):
    if not maps:
        return 0
    return max(item.file_off + len(item.data) for item in maps)


def find_map_for_file_off(maps, file_off):
    for item in maps:
        if item.contains_file_off(file_off):
            return item
    return None


def text_range_from_sections(sections):
    text = next((section for section in sections if section["name"] == ".text"), None)
    if not text:
        return (0, 0)
    return (text["off"], text["off"] + text["size"])


def classify_runtime_qword(value, image_base, image_size, target_to_entry, sections, text_range):
    if value is None:
        return "", "", "", ""

    text_start, text_end = text_range
    if value in target_to_entry:
        return "raw_dispatch_target", fmt_hex(value), str(target_to_entry[value]), section_for_off(sections, value)
    if text_start <= value < text_end:
        return "raw_text_offset", fmt_hex(value), "", section_for_off(sections, value)

    if image_base is not None and image_base <= value < image_base + image_size:
        eac_off = value - image_base
        if eac_off in target_to_entry:
            return "absolute_dispatch_target", fmt_hex(eac_off), str(target_to_entry[eac_off]), section_for_off(sections, eac_off)
        if text_start <= eac_off < text_end:
            return "absolute_text_pointer", fmt_hex(eac_off), "", section_for_off(sections, eac_off)
        return "absolute_eac_pointer", fmt_hex(eac_off), "", section_for_off(sections, eac_off)

    low32 = value & 0xffffffff
    if low32 in target_to_entry:
        return "low32_dispatch_target", fmt_hex(low32), str(target_to_entry[low32]), section_for_off(sections, low32)
    if text_start <= low32 < text_end:
        return "low32_text_offset", fmt_hex(low32), "", section_for_off(sections, low32)

    return "non_pointer_bytes", "", "", ""


def build_rows(args):
    eac_path = Path(args.eac)
    eac = eac_path.read_bytes()
    sections = read_sections(eac)
    text_range = text_range_from_sections(sections)
    table = read_dispatch_table(args.eac, args.table_off, args.table_entries)
    target_to_entry = {target: idx for idx, target in enumerate(table)}

    runtime_maps = parse_runtime_maps(args.runtime_dump_dir)
    image_base = image_base_from_maps(runtime_maps)
    image_size = mapped_image_size(runtime_maps)

    rows = []
    for row in read_tsv(args.table_memory_probe):
        file_off = parse_hex(row.get("absolute_file_off", ""))
        runtime_map = find_map_for_file_off(runtime_maps, file_off)
        runtime_bytes = b""
        runtime_qword = None
        runtime_va = None
        runtime_map_file = ""
        runtime_map_perms = ""
        runtime_map_file_off = ""
        if runtime_map is not None:
            runtime_bytes = runtime_map.bytes_at_file_off(file_off, 16)
            runtime_va = runtime_map.runtime_va_for_file_off(file_off)
            runtime_map_file = runtime_map.path.name
            runtime_map_perms = runtime_map.perms
            runtime_map_file_off = fmt_hex(runtime_map.file_off)
            if len(runtime_bytes) >= 8:
                runtime_qword = int.from_bytes(runtime_bytes[:8], "little")

        runtime_class, runtime_eac_off, runtime_entry, runtime_section = classify_runtime_qword(
            runtime_qword, image_base, image_size, target_to_entry, sections, text_range
        )
        file_bytes = row.get("file_bytes16", "")
        runtime_bytes_hex = runtime_bytes.hex()
        rows.append({
            "source_entry": row.get("source_entry", ""),
            "synthetic_start_vm_ip": row.get("synthetic_start_vm_ip", ""),
            "missing_successor_vm_ip": row.get("missing_successor_vm_ip", ""),
            "table_offset": row.get("table_offset", ""),
            "table_offset_count": row.get("table_offset_count", ""),
            "absolute_file_off": row.get("absolute_file_off", ""),
            "section": row.get("section", ""),
            "region": row.get("region", ""),
            "alignment": row.get("alignment", ""),
            "runtime_dump_dir": str(args.runtime_dump_dir),
            "runtime_map_file": runtime_map_file,
            "runtime_map_perms": runtime_map_perms,
            "runtime_map_file_off": runtime_map_file_off,
            "runtime_va": fmt_hex(runtime_va),
            "runtime_bytes16": runtime_bytes_hex,
            "runtime_matches_file": "yes" if runtime_bytes_hex == file_bytes else "no",
            "file_qword_le": row.get("file_qword_le", ""),
            "file_qword_class": row.get("file_qword_class", ""),
            "runtime_qword_le": fmt_hex(runtime_qword),
            "runtime_qword_class": runtime_class,
            "runtime_qword_eac_off": runtime_eac_off,
            "runtime_qword_dispatch_entry": runtime_entry,
            "runtime_qword_section": runtime_section,
            "dynamic_next_source_entry": row.get("dynamic_next_source_entry", ""),
            "dynamic_next_source_start_vm_ip": row.get("dynamic_next_source_start_vm_ip", ""),
            "dynamic_next_end_vm_ip": row.get("dynamic_next_end_vm_ip", ""),
        })
    return rows, image_base, image_size, runtime_maps


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def add_weighted(counter, row, key):
    count = int(row.get("table_offset_count", "0") or 0)
    counter[row.get(key, "")] += count


def emit_markdown(rows, image_base, image_size, runtime_maps):
    match_mix = Counter()
    runtime_qword_mix = Counter()
    file_qword_mix = Counter()
    region_mix = Counter()
    section_mix = Counter()
    for row in rows:
        add_weighted(match_mix, row, "runtime_matches_file")
        add_weighted(runtime_qword_mix, row, "runtime_qword_class")
        add_weighted(file_qword_mix, row, "file_qword_class")
        add_weighted(region_mix, row, "region")
        add_weighted(section_mix, row, "section")

    mismatches = [row for row in rows if row.get("runtime_matches_file") != "yes"]
    dispatch_targets = [
        row for row in rows
        if row.get("runtime_qword_dispatch_entry", "")
    ]

    print("# Synthetic Gap Runtime Table-Memory Probe\n")
    print(
        "Postcall mapped-memory view of the residual table-relative offsets, used to check "
        "whether runtime relocation/patching turns rejected file bytes into usable dispatch targets.\n"
    )
    print(f"Rows: `{len(rows)}`")
    print(f"Runtime maps: `{len(runtime_maps)}`")
    print(f"Runtime image base: `{fmt_hex(image_base) or '-'}`")
    print(f"Runtime mapped image size: `{fmt_hex(image_size)}`\n")

    print("## Runtime/File Match Mix\n")
    print("| Match | Offset Observations |")
    print("| --- | ---: |")
    for key, value in match_mix.most_common():
        print(f"| `{key or '-'}` | {value} |")

    print("\n## Runtime Qword Class Mix\n")
    print("| Class | Offset Observations |")
    print("| --- | ---: |")
    for key, value in runtime_qword_mix.most_common():
        print(f"| `{key or '-'}` | {value} |")

    print("\n## File Qword Class Mix\n")
    print("| Class | Offset Observations |")
    print("| --- | ---: |")
    for key, value in file_qword_mix.most_common():
        print(f"| `{key or '-'}` | {value} |")

    print("\n## Region Mix\n")
    print("| Region | Offset Observations |")
    print("| --- | ---: |")
    for key, value in region_mix.most_common():
        print(f"| `{key or '-'}` | {value} |")

    print("\n## Mismatched Runtime Bytes\n")
    print("| Start | Offset | File Off | Region | File Qword | Runtime Qword | Runtime Class | Runtime Target |")
    print("| --- | --- | --- | --- | --- | --- | --- | --- |")
    if not mismatches:
        print("| - | - | - | - | - | - | - | - |")
    for row in mismatches:
        target = row.get("runtime_qword_dispatch_entry", "")
        if target:
            target = f"entry {target} @ {row.get('runtime_qword_eac_off', '')}"
        else:
            target = row.get("runtime_qword_eac_off", "") or "-"
        print(
            f"| `{row.get('synthetic_start_vm_ip', '')}` | `{row.get('table_offset', '')}` | "
            f"`{row.get('absolute_file_off', '')}` | `{row.get('region', '')}` | "
            f"`{row.get('file_qword_le', '') or '-'}` | `{row.get('runtime_qword_le', '') or '-'}` | "
            f"`{row.get('runtime_qword_class', '') or '-'}` | {c_escape(target)} |"
        )

    print("\n## Residual Offsets\n")
    print(
        "| Start | Source | Offset | File Off | Runtime VA | Match | Region | "
        "File Class | Runtime Class | Runtime Target | Dynamic Next |"
    )
    print("| --- | ---: | --- | --- | --- | --- | --- | --- | --- | --- | --- |")
    for row in rows:
        runtime_target = row.get("runtime_qword_eac_off", "") or "-"
        if row.get("runtime_qword_dispatch_entry", ""):
            runtime_target = f"entry {row.get('runtime_qword_dispatch_entry')} @ {runtime_target}"
        dynamic_next = row.get("dynamic_next_source_start_vm_ip", "") or "-"
        if row.get("dynamic_next_source_entry", ""):
            dynamic_next = f"entry {row.get('dynamic_next_source_entry')} @ {dynamic_next}"
        print(
            f"| `{row.get('synthetic_start_vm_ip', '')}` | {row.get('source_entry', '')} | "
            f"`{row.get('table_offset', '')}` | `{row.get('absolute_file_off', '')}` | "
            f"`{row.get('runtime_va', '') or '-'}` | `{row.get('runtime_matches_file', '')}` | "
            f"`{row.get('region', '')}` | `{row.get('file_qword_class', '') or '-'}` | "
            f"`{row.get('runtime_qword_class', '') or '-'}` | {c_escape(runtime_target)} | "
            f"{c_escape(dynamic_next)} |"
        )

    print("\n## Runtime Dispatch Targets\n")
    if not dispatch_targets:
        print("No residual runtime qword resolved to a dispatch-table target.\n")
    else:
        print("| Start | Runtime Entry | Runtime Offset | Dynamic Next |")
        print("| --- | ---: | --- | --- |")
        for row in dispatch_targets:
            dynamic_next = row.get("dynamic_next_source_start_vm_ip", "") or "-"
            if row.get("dynamic_next_source_entry", ""):
                dynamic_next = f"entry {row.get('dynamic_next_source_entry')} @ {dynamic_next}"
            print(
                f"| `{row.get('synthetic_start_vm_ip', '')}` | "
                f"{row.get('runtime_qword_dispatch_entry', '')} | "
                f"`{row.get('runtime_qword_eac_off', '')}` | {c_escape(dynamic_next)} |"
            )


def main():
    parser = argparse.ArgumentParser(
        description="Compare residual table-relative offsets against postcall mapped EAC memory."
    )
    parser.add_argument("--table-memory-probe", default=str(TRACE_DIR / "vm_synthetic_gap_table_memory_probe.tsv"))
    parser.add_argument("--runtime-dump-dir", type=Path, default=RUNTIME_DUMP_DIR)
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--table-off", type=lambda value: int(value, 0), default=TABLE_OFF)
    parser.add_argument("--table-entries", type=int, default=TABLE_ENTRIES)
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows, image_base, image_size, runtime_maps = build_rows(args)
    if args.markdown:
        emit_markdown(rows, image_base, image_size, runtime_maps)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_runtime_table_memory_probe_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
