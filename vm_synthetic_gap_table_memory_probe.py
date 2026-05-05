#!/usr/bin/env python3
import argparse
import csv
import struct
import sys
from collections import Counter
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv
from vm_static_dispatch_validate import read_dispatch_table


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
TABLE_OFF = 0xC3718
TABLE_ENTRIES = 360


FIELDS = [
    "source_entry",
    "synthetic_start_vm_ip",
    "missing_successor_vm_ip",
    "diagnosis",
    "table_offset",
    "table_offset_count",
    "table_access_status_mix",
    "absolute_file_off",
    "section",
    "region",
    "alignment",
    "nearest_dispatch_entry",
    "nearest_dispatch_entry_delta",
    "dispatch_entry",
    "file_bytes16",
    "file_qword_le",
    "file_qword_class",
    "file_qword_dispatch_entry",
    "dynamic_next_source_entry",
    "dynamic_next_source_start_vm_ip",
    "dynamic_next_end_vm_ip",
]


def fmt_hex(value):
    if value is None:
        return ""
    return f"0x{value:x}"


def csplit(text):
    return [item for item in (text or "").split(",") if item and item != "-"]


def parse_mix(text):
    out = []
    for item in csplit(text):
        if ":" not in item:
            continue
        key, value = item.rsplit(":", 1)
        try:
            count = int(value)
        except ValueError:
            count = 0
        out.append((key, count))
    return out


def c_escape(text):
    return (text or "").replace("|", "\\|")


def read_sections(data):
    if data[:4] != b"\x7fELF":
        return []
    if data[4] != 2 or data[5] != 1:
        return []
    ehdr = struct.unpack_from("<16sHHIQQQIHHHHHH", data, 0)
    e_shoff = ehdr[6]
    e_shentsize = ehdr[11]
    e_shnum = ehdr[12]
    e_shstrndx = ehdr[13]
    if e_shoff == 0 or e_shnum == 0 or e_shstrndx >= e_shnum:
        return []

    raw_sections = []
    for idx in range(e_shnum):
        off = e_shoff + idx * e_shentsize
        if off + 64 > len(data):
            return []
        raw_sections.append(struct.unpack_from("<IIQQQQIIQQ", data, off))

    shstr = raw_sections[e_shstrndx]
    shstr_off = shstr[4]
    shstr_size = shstr[5]
    names = data[shstr_off:shstr_off + shstr_size]

    sections = []
    for idx, sh in enumerate(raw_sections):
        name_off, sh_type, flags, addr, off, size, _link, _info, align, entsize = sh
        end = names.find(b"\0", name_off)
        name = names[name_off:end].decode("utf-8", "replace") if end >= name_off else ""
        sections.append({
            "idx": idx,
            "name": name,
            "type": sh_type,
            "flags": flags,
            "addr": addr,
            "off": off,
            "size": size,
            "align": align,
            "entsize": entsize,
        })
    return sections


def section_for_off(sections, file_off):
    for section in sections:
        if section["size"] and section["off"] <= file_off < section["off"] + section["size"]:
            return section["name"] or f"section_{section['idx']}"
    return ""


def classify_region(table_offset, abs_off, table_size, file_size):
    if abs_off < 0 or abs_off >= file_size:
        return "file_oob"
    if table_offset < 0:
        return "before_dispatch_table"
    if table_offset < table_size:
        return "inside_dispatch_table_aligned" if table_offset % 8 == 0 else "inside_dispatch_table_unaligned"
    return "after_dispatch_table"


def classify_qword(value, target_to_entry, text_range):
    if value is None:
        return "", ""
    if value in target_to_entry:
        return "raw_dispatch_target", str(target_to_entry[value])
    text_start, text_end = text_range
    if text_start <= value < text_end:
        return "raw_text_offset", ""
    low32 = value & 0xffffffff
    if text_start <= low32 < text_end:
        return "low32_text_offset", ""
    return "non_pointer_bytes", ""


def load_residual_by_start(path):
    rows = {}
    if not path or not Path(path).exists():
        return rows
    for row in read_tsv(path):
        start = row.get("synthetic_start_vm_ip", "")
        if start:
            rows[start] = row
    return rows


def build_rows(args):
    eac_path = Path(args.eac)
    data = eac_path.read_bytes()
    sections = read_sections(data)
    text = next((s for s in sections if s["name"] == ".text"), None)
    text_range = (text["off"], text["off"] + text["size"]) if text else (0, 0)
    table = read_dispatch_table(args.eac, args.table_off, args.table_entries)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    residual_by_start = load_residual_by_start(args.residual_audit)
    table_size = args.table_entries * 8

    out = []
    for diag in read_tsv(args.table_read_diagnostic):
        start = diag.get("synthetic_start_vm_ip", "")
        residual = residual_by_start.get(start, {})
        for offset_text, count in parse_mix(diag.get("table_access_offset_mix", "")):
            try:
                table_offset = parse_hex(offset_text)
            except ValueError:
                continue
            abs_off = args.table_off + table_offset
            nearest_entry = table_offset // 8
            nearest_delta = table_offset % 8
            dispatch_entry = str(nearest_entry) if 0 <= nearest_entry < args.table_entries and nearest_delta == 0 else ""
            if 0 <= abs_off < len(data):
                chunk = data[abs_off:abs_off + 16]
                qword = int.from_bytes(data[abs_off:abs_off + 8], "little") if abs_off + 8 <= len(data) else None
            else:
                chunk = b""
                qword = None
            qword_class, qword_entry = classify_qword(qword, target_to_entry, text_range)
            out.append({
                "source_entry": diag.get("source_entry", ""),
                "synthetic_start_vm_ip": start,
                "missing_successor_vm_ip": diag.get("missing_successor_vm_ip", ""),
                "diagnosis": diag.get("diagnosis", ""),
                "table_offset": offset_text,
                "table_offset_count": str(count),
                "table_access_status_mix": diag.get("table_access_status_mix", ""),
                "absolute_file_off": fmt_hex(abs_off),
                "section": section_for_off(sections, abs_off),
                "region": classify_region(table_offset, abs_off, table_size, len(data)),
                "alignment": str(nearest_delta),
                "nearest_dispatch_entry": str(nearest_entry),
                "nearest_dispatch_entry_delta": str(nearest_delta),
                "dispatch_entry": dispatch_entry,
                "file_bytes16": chunk.hex(),
                "file_qword_le": fmt_hex(qword),
                "file_qword_class": qword_class,
                "file_qword_dispatch_entry": qword_entry,
                "dynamic_next_source_entry": residual.get("dynamic_next_source_entry", ""),
                "dynamic_next_source_start_vm_ip": residual.get("dynamic_next_source_start_vm_ip", ""),
                "dynamic_next_end_vm_ip": residual.get("dynamic_next_end_vm_ip", ""),
            })
    return out


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    region_mix = Counter()
    qword_mix = Counter()
    section_mix = Counter()
    for row in rows:
        count = int(row.get("table_offset_count", "0") or 0)
        region_mix[row.get("region", "")] += count
        qword_mix[row.get("file_qword_class", "")] += count
        section_mix[row.get("section", "")] += count

    print("# Synthetic Gap Table-Memory Probe\n")
    print("File-backed view of the residual table-relative offsets reached by live-context replay.\n")
    print(f"Rows: `{len(rows)}`\n")
    print("## Region Mix\n")
    print("| Region | Offset Observations |")
    print("| --- | ---: |")
    for key, value in region_mix.most_common():
        print(f"| `{key or '-'}` | {value} |")
    print("\n## Qword Class Mix\n")
    print("| Class | Offset Observations |")
    print("| --- | ---: |")
    for key, value in qword_mix.most_common():
        print(f"| `{key or '-'}` | {value} |")
    print("\n## Residual Offsets\n")
    print("| Start | Source | Offset | File Off | Section | Region | Align | File Qword | Qword Class | Dynamic Next |")
    print("| --- | ---: | --- | --- | --- | --- | ---: | --- | --- | --- |")
    for row in rows:
        dynamic_next = row.get("dynamic_next_source_start_vm_ip", "") or "-"
        if row.get("dynamic_next_source_entry", ""):
            dynamic_next = f"entry {row.get('dynamic_next_source_entry')} @ {dynamic_next}"
        print(
            f"| `{row.get('synthetic_start_vm_ip', '')}` | {row.get('source_entry', '')} | "
            f"`{row.get('table_offset', '')}` | `{row.get('absolute_file_off', '')}` | "
            f"`{row.get('section', '') or '-'}` | `{row.get('region', '')}` | "
            f"{row.get('alignment', '')} | `{row.get('file_qword_le', '') or '-'}` | "
            f"`{row.get('file_qword_class', '') or '-'}` | {c_escape(dynamic_next)} |"
        )


def main():
    parser = argparse.ArgumentParser(description="Map residual synthetic-gap table-relative offsets back to file bytes/sections.")
    parser.add_argument("--table-read-diagnostic", default=str(TRACE_DIR / "vm_synthetic_gap_table_read_diagnostic.tsv"))
    parser.add_argument("--residual-audit", default=str(TRACE_DIR / "vm_synthetic_gap_residual_audit.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--table-off", type=lambda value: int(value, 0), default=TABLE_OFF)
    parser.add_argument("--table-entries", type=int, default=TABLE_ENTRIES)
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_table_memory_probe_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
