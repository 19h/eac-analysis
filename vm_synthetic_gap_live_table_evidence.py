#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv
from vm_static_dispatch_validate import read_dispatch_table
from vm_synthetic_gap_runtime_table_memory_probe import (
    classify_runtime_qword,
    find_map_for_file_off,
    image_base_from_maps,
    mapped_image_size,
    parse_runtime_maps,
    text_range_from_sections,
)
from vm_synthetic_gap_table_memory_probe import (
    TABLE_ENTRIES,
    TABLE_OFF,
    c_escape,
    classify_qword,
    classify_region,
    fmt_hex,
    read_sections,
    section_for_off,
)


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
RUNTIME_DUMP_DIR = Path("dumps/vmtail-residual-122e3c-context-postcall")


FIELDS = [
    "family_id",
    "synthetic_start_vm_ip",
    "source_entry",
    "run_dir",
    "seed_quality",
    "live_status",
    "live_table_status",
    "live_table_diagnosis",
    "live_table_offset",
    "live_table_entry",
    "live_table_site",
    "live_table_operand",
    "absolute_file_off",
    "section",
    "region",
    "alignment",
    "nearest_dispatch_entry",
    "nearest_dispatch_entry_delta",
    "dispatch_slot_entry",
    "file_bytes16",
    "file_qword_le",
    "file_qword_class",
    "file_qword_dispatch_entry",
    "runtime_dump_dir",
    "runtime_map_file",
    "runtime_map_perms",
    "runtime_va",
    "runtime_bytes16",
    "runtime_matches_file",
    "runtime_qword_le",
    "runtime_qword_class",
    "runtime_qword_eac_off",
    "runtime_qword_dispatch_entry",
    "runtime_qword_section",
    "next_relation",
    "next_event_vm_ip",
    "next_event_target_entry",
    "observed_first_hop_vm_ip",
    "terminal_dest_vm_ip",
    "live_path_hash",
    "branch_resolution",
    "evidence_class",
]


def parse_hex_safe(text):
    if not text:
        return None
    try:
        return parse_hex(text)
    except ValueError:
        return None


def table_evidence_class(row, region, qword_class, runtime_class):
    table_status = row.get("live_table_status", "")
    next_entry = row.get("next_event_target_entry", "")
    live_entry = row.get("live_table_entry", "")
    file_dispatch_entry = row.get("file_qword_dispatch_entry", "")
    runtime_dispatch_entry = row.get("runtime_qword_dispatch_entry", "")

    if table_status == "table_oob":
        return "table_index_out_of_dispatch_range"
    if table_status == "table_read":
        if region == "inside_dispatch_table_unaligned":
            return "misaligned_inside_dispatch_table"
        if region == "after_dispatch_table":
            return "post_table_code_byte_read"
        return "misaligned_or_non_qword_read"
    if table_status == "ok":
        if live_entry and next_entry and live_entry == next_entry:
            return "direct_slot_matches_next_event"
        if live_entry:
            return "direct_slot_points_elsewhere"
        if file_dispatch_entry or runtime_dispatch_entry:
            return "qword_decodes_as_dispatch_pointer"
        return "aligned_slot_without_dispatch_entry"
    if qword_class in {"raw_dispatch_target", "low32_dispatch_target"} or runtime_class.endswith("dispatch_target"):
        return "bytes_decode_as_dispatch_pointer_but_not_valid_read"
    return "no_dispatch_edge_evidence"


def build_rows(args):
    eac = Path(args.eac).read_bytes()
    sections = read_sections(eac)
    text_range = text_range_from_sections(sections)
    table = read_dispatch_table(args.eac, args.table_off, args.table_entries)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    table_size = args.table_entries * 8

    runtime_maps = parse_runtime_maps(args.runtime_dump_dir)
    image_base = image_base_from_maps(runtime_maps)
    image_size = mapped_image_size(runtime_maps)

    out = []
    for row in read_tsv(args.live_snapshot_probe):
        table_offset = parse_hex_safe(row.get("live_table_offset", ""))
        if table_offset is None:
            continue
        abs_off = args.table_off + table_offset
        nearest_entry = table_offset // 8
        nearest_delta = table_offset % 8
        dispatch_slot_entry = (
            str(nearest_entry)
            if 0 <= nearest_entry < args.table_entries and nearest_delta == 0
            else ""
        )

        if 0 <= abs_off < len(eac):
            file_bytes = eac[abs_off:abs_off + 16]
            file_qword = int.from_bytes(eac[abs_off:abs_off + 8], "little") if abs_off + 8 <= len(eac) else None
        else:
            file_bytes = b""
            file_qword = None
        file_qword_class, file_qword_entry = classify_qword(file_qword, target_to_entry, text_range)
        section = section_for_off(sections, abs_off)
        region = classify_region(table_offset, abs_off, table_size, len(eac))

        runtime_map = find_map_for_file_off(runtime_maps, abs_off)
        runtime_bytes = b""
        runtime_qword = None
        runtime_va = None
        runtime_map_file = ""
        runtime_map_perms = ""
        if runtime_map is not None:
            runtime_bytes = runtime_map.bytes_at_file_off(abs_off, 16)
            runtime_va = runtime_map.runtime_va_for_file_off(abs_off)
            runtime_map_file = runtime_map.path.name
            runtime_map_perms = runtime_map.perms
            if len(runtime_bytes) >= 8:
                runtime_qword = int.from_bytes(runtime_bytes[:8], "little")
        runtime_class, runtime_eac_off, runtime_entry, runtime_section = classify_runtime_qword(
            runtime_qword,
            image_base,
            image_size,
            target_to_entry,
            sections,
            text_range,
        )
        runtime_bytes_hex = runtime_bytes.hex()
        file_bytes_hex = file_bytes.hex()

        evidence = table_evidence_class(row, region, file_qword_class, runtime_class)
        out.append({
            "family_id": row.get("family_id", ""),
            "synthetic_start_vm_ip": row.get("synthetic_start_vm_ip", ""),
            "source_entry": row.get("source_entry", ""),
            "run_dir": row.get("run_dir", ""),
            "seed_quality": row.get("seed_quality", ""),
            "live_status": row.get("live_status", ""),
            "live_table_status": row.get("live_table_status", ""),
            "live_table_diagnosis": row.get("live_table_diagnosis", ""),
            "live_table_offset": row.get("live_table_offset", ""),
            "live_table_entry": row.get("live_table_entry", ""),
            "live_table_site": row.get("live_table_site", ""),
            "live_table_operand": row.get("live_table_operand", ""),
            "absolute_file_off": fmt_hex(abs_off),
            "section": section,
            "region": region,
            "alignment": str(nearest_delta),
            "nearest_dispatch_entry": str(nearest_entry),
            "nearest_dispatch_entry_delta": str(nearest_delta),
            "dispatch_slot_entry": dispatch_slot_entry,
            "file_bytes16": file_bytes_hex,
            "file_qword_le": fmt_hex(file_qword),
            "file_qword_class": file_qword_class,
            "file_qword_dispatch_entry": file_qword_entry,
            "runtime_dump_dir": str(args.runtime_dump_dir),
            "runtime_map_file": runtime_map_file,
            "runtime_map_perms": runtime_map_perms,
            "runtime_va": fmt_hex(runtime_va),
            "runtime_bytes16": runtime_bytes_hex,
            "runtime_matches_file": "yes" if runtime_bytes_hex == file_bytes_hex else "no",
            "runtime_qword_le": fmt_hex(runtime_qword),
            "runtime_qword_class": runtime_class,
            "runtime_qword_eac_off": runtime_eac_off,
            "runtime_qword_dispatch_entry": runtime_entry,
            "runtime_qword_section": runtime_section,
            "next_relation": row.get("next_relation", ""),
            "next_event_vm_ip": row.get("next_event_vm_ip", ""),
            "next_event_target_entry": row.get("next_event_target_entry", ""),
            "observed_first_hop_vm_ip": row.get("observed_first_hop_vm_ip", ""),
            "terminal_dest_vm_ip": row.get("terminal_dest_vm_ip", ""),
            "live_path_hash": row.get("live_path_hash", ""),
            "branch_resolution": row.get("branch_resolution", ""),
            "evidence_class": evidence,
        })
    return out, image_base, image_size, runtime_maps


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_counter(title, counter):
    print(f"### {title}\n")
    print("| Value | Rows |")
    print("| --- | ---: |")
    for key, value in counter.most_common():
        print(f"| `{key or '-'}` | {value} |")
    print()


def emit_markdown(rows, image_base, image_size, runtime_maps):
    print("# Synthetic Gap Live Table Evidence\n")
    print(
        "Per-live-row file/runtime evidence for the concrete table offsets reached by unresolved "
        "synthetic-gap replay. This keeps full-GPR rows separate from frame-only alternate/config rows "
        "and checks whether rejected offsets decode as dispatch edges in either file or runtime memory.\n"
    )
    print(f"Rows: `{len(rows)}`")
    print(f"Runtime maps: `{len(runtime_maps)}`")
    print(f"Runtime image base: `{fmt_hex(image_base) or '-'}`")
    print(f"Runtime mapped image size: `{fmt_hex(image_size)}`\n")

    print("## Mixes\n")
    emit_counter("Evidence Class", Counter(row.get("evidence_class", "") for row in rows))
    emit_counter("Seed Quality", Counter(row.get("seed_quality", "") for row in rows))
    emit_counter("Region", Counter(row.get("region", "") for row in rows))
    emit_counter("File Qword Class", Counter(row.get("file_qword_class", "") for row in rows))
    emit_counter("Runtime Qword Class", Counter(row.get("runtime_qword_class", "") for row in rows))
    emit_counter("Runtime/File Match", Counter(row.get("runtime_matches_file", "") for row in rows))

    print("## Rows\n")
    print(
        "| Start | Source | Run | Seed | Offset | Region | File Qword | Runtime Qword | Next | Evidence |"
    )
    print("| --- | ---: | --- | --- | --- | --- | --- | --- | --- | --- |")
    for row in rows:
        run_name = Path(row.get("run_dir", "")).name if row.get("run_dir") else "-"
        next_text = "-"
        if row.get("next_event_vm_ip"):
            next_text = f"entry_{row.get('next_event_target_entry') or '?'}@{row.get('next_event_vm_ip')}"
        print(
            f"| `{row.get('synthetic_start_vm_ip')}` | {row.get('source_entry') or '-'} | "
            f"`{run_name}` | `{row.get('seed_quality') or '-'}` | "
            f"`{row.get('live_table_offset')}` | `{row.get('region')}` | "
            f"`{row.get('file_qword_class') or '-'}` | `{row.get('runtime_qword_class') or '-'}` | "
            f"`{c_escape(next_text)}` | `{row.get('evidence_class')}` |"
        )


def main():
    parser = argparse.ArgumentParser(
        description="Map live-snapshot residual table offsets to file/runtime dispatch evidence."
    )
    parser.add_argument("--live-snapshot-probe", default=str(TRACE_DIR / "vm_synthetic_gap_live_snapshot_transfer_probe.tsv"))
    parser.add_argument("--runtime-dump-dir", default=str(RUNTIME_DUMP_DIR))
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
    print(f"synthetic_gap_live_table_evidence_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
