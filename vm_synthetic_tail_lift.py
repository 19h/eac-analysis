#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter

from vm_synthetic_span_catalog import (
    load_by,
    load_tail_ip_advances,
    parse_hex,
    parse_len_status,
    read_tsv,
    semantic_gap_class,
    status_kind,
)
from vm_synthetic_tail_catalog import motifs, tail_schema


def normalize_vm_ip(text):
    try:
        return f"0x{parse_hex(text):x}"
    except (TypeError, ValueError):
        return text or ""


def fmt_counter(counter, max_items):
    return ",".join(f"{key}:{value}" for key, value in counter.most_common(max_items))


def short_hex(counter, max_items, max_hex):
    parts = []
    for value, count in counter.most_common(max_items):
        suffix = "..." if len(value) > max_hex else ""
        parts.append(f"{count}:{value[:max_hex]}{suffix}")
    return ",".join(parts)


def span_len(row, status):
    length = parse_len_status(status)
    if length:
        return length
    try:
        return parse_hex(row["end_vm_ip"]) - parse_hex(row["start_vm_ip"])
    except (KeyError, ValueError):
        return 0


def single_target_counter(target_entry):
    counter = Counter()
    if target_entry:
        counter[target_entry] += 1
    return counter


def target_offset_key(data, target_entry):
    if not target_entry:
        return ""
    try:
        value = int(target_entry)
    except ValueError:
        return ""
    offsets = []
    for off in range(0, max(0, len(data) - 1)):
        if int.from_bytes(data[off:off + 2], "little") == value:
            offsets.append(f"+0x{off:x}")
    if not offsets:
        return ""
    return f"{target_entry}@{','.join(offsets)}"


def load_long_control_overlaps(path):
    overlaps = {}
    if not path:
        return overlaps
    try:
        rows = read_tsv(path)
    except FileNotFoundError:
        return overlaps
    for row in rows:
        source = row.get("source_entry", "")
        target = row.get("target_entry", "")
        delta = row.get("delta", "")
        lifted = row.get("lifted_ir", "")
        byte_statuses = row.get("byte_statuses", "")
        if not source or not target or not delta:
            continue
        label = f"{source}->{target}/{delta}"
        if lifted:
            label += f" ({lifted})"
        if byte_statuses:
            label += f" [{byte_statuses}]"
        for start in (row.get("start_ips", "") or "").split(","):
            start = normalize_vm_ip(start.strip())
            if start:
                overlaps.setdefault(start, []).append({
                    "source": source,
                    "target": target,
                    "delta": delta,
                    "lifted": lifted,
                    "label": label,
                })
    return overlaps


def make_rows(args):
    transition = load_by(args.transition_model, "entry")
    microcode = load_by(args.microcode, "entry")
    tail_ip_advances = load_tail_ip_advances(args.handler_table, args.eac, args.tail_window)
    long_control_overlaps = load_long_control_overlaps(args.long_branches)
    lifts = {}

    for row in read_tsv(args.trace):
        status = row.get("byte_status", "")
        kind = status_kind(status)
        if kind == "other":
            continue

        source_entry = row.get("source_entry", "")
        target_entry = row.get("target_entry", "")
        total_len = span_len(row, status)
        gap_class, footprint, footprint_source, unresolved = semantic_gap_class(
            kind, source_entry, total_len, transition, microcode, tail_ip_advances
        )
        if int(unresolved) <= 0 or not footprint:
            continue

        try:
            data = bytes.fromhex(row.get("bytes", ""))
        except ValueError:
            continue
        if int(footprint) > len(data):
            continue
        tail = data[int(footprint):]
        if not tail:
            continue

        start = normalize_vm_ip(row.get("start_vm_ip", ""))
        overlap_rows = long_control_overlaps.get(start, [])
        bucket = lifts.setdefault(start, {
            "events": 0,
            "target_encoded_events": 0,
            "schema_events": 0,
            "long_control_overlap_events": 0,
            "sources": Counter(),
            "targets": Counter(),
            "statuses": Counter(),
            "gap_classes": Counter(),
            "prefix_sources": Counter(),
            "prefix_lens": Counter(),
            "unresolved_lens": Counter(),
            "tail_schemas": Counter(),
            "target_offsets": Counter(),
            "motifs": Counter(),
            "tails": Counter(),
            "lift_classes": Counter(),
            "long_control_overlaps": Counter(),
            "long_control_targets": Counter(),
            "long_control_deltas": Counter(),
        })
        bucket["events"] += 1
        if source_entry:
            bucket["sources"][source_entry] += 1
        if target_entry:
            bucket["targets"][target_entry] += 1
        bucket["statuses"][status] += 1
        bucket["gap_classes"][gap_class] += 1
        bucket["prefix_sources"][footprint_source or "-"] += 1
        bucket["prefix_lens"][f"0x{int(footprint):x}"] += 1
        bucket["unresolved_lens"][f"0x{len(tail):x}"] += 1
        tail_hex = tail.hex()
        bucket["tails"][tail_hex] += 1

        target_counter = single_target_counter(target_entry)
        schema = tail_schema(tail, target_counter)
        offsets = target_offset_key(tail, target_entry)
        motif_text = motifs(tail)
        if schema:
            bucket["tail_schemas"][schema] += 1
            bucket["schema_events"] += 1
        if offsets:
            bucket["target_offsets"][offsets] += 1
            bucket["target_encoded_events"] += 1
            bucket["lift_classes"]["target_encoded_tail"] += 1
        elif overlap_rows:
            bucket["long_control_overlap_events"] += 1
            bucket["lift_classes"]["long_control_overlap"] += 1
            for overlap in overlap_rows:
                bucket["long_control_overlaps"][overlap["label"]] += 1
                bucket["long_control_targets"][overlap["target"]] += 1
                bucket["long_control_deltas"][overlap["delta"]] += 1
        elif schema:
            bucket["lift_classes"]["schema_without_target_match"] += 1
        elif target_entry:
            bucket["lift_classes"]["observed_target_only"] += 1
        else:
            bucket["lift_classes"]["unresolved_tail"] += 1
        if motif_text:
            bucket["motifs"][motif_text] += 1

    rows = []
    for start, bucket in lifts.items():
        rows.append({
            "start_vm_ip": start,
            "events": str(bucket["events"]),
            "target_encoded_events": str(bucket["target_encoded_events"]),
            "schema_events": str(bucket["schema_events"]),
            "long_control_overlap_events": str(bucket["long_control_overlap_events"]),
            "source_entries": str(len(bucket["sources"])),
            "target_entries": str(len(bucket["targets"])),
            "top_sources": fmt_counter(bucket["sources"], args.max_items),
            "top_targets": fmt_counter(bucket["targets"], args.max_items),
            "byte_statuses": fmt_counter(bucket["statuses"], args.max_items),
            "semantic_gap_classes": fmt_counter(bucket["gap_classes"], args.max_items),
            "prefix_sources": fmt_counter(bucket["prefix_sources"], args.max_items),
            "prefix_lens": fmt_counter(bucket["prefix_lens"], args.max_items),
            "unresolved_lens": fmt_counter(bucket["unresolved_lens"], args.max_items),
            "tail_schemas": fmt_counter(bucket["tail_schemas"], args.max_items),
            "target_match_offsets": fmt_counter(bucket["target_offsets"], args.max_items),
            "tail_motifs": fmt_counter(bucket["motifs"], args.max_items),
            "lift_classes": fmt_counter(bucket["lift_classes"], args.max_items),
            "long_control_overlaps": fmt_counter(bucket["long_control_overlaps"], args.max_items),
            "long_control_targets": fmt_counter(bucket["long_control_targets"], args.max_items),
            "long_control_deltas": fmt_counter(bucket["long_control_deltas"], args.max_items),
            "top_tail_hexes": short_hex(bucket["tails"], args.max_items, args.max_tail_hex),
        })

    rows.sort(key=lambda row: (-int(row["events"]), parse_hex(row["start_vm_ip"])))
    return rows


def emit_tsv(rows):
    fields = [
        "start_vm_ip",
        "events",
        "target_encoded_events",
        "schema_events",
        "long_control_overlap_events",
        "source_entries",
        "target_entries",
        "top_sources",
        "top_targets",
        "byte_statuses",
        "semantic_gap_classes",
        "prefix_sources",
        "prefix_lens",
        "unresolved_lens",
        "tail_schemas",
        "target_match_offsets",
        "tail_motifs",
        "lift_classes",
        "long_control_overlaps",
        "long_control_targets",
        "long_control_deltas",
        "top_tail_hexes",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows, args):
    print("# VM Synthetic Tail Lift\n")
    print(f"Top {min(args.limit, len(rows))} synthetic VM IPs with unresolved suffix bytes.\n")
    print("| Events | VM IP | Encoded | LongCtl | Schemas | Targets | Offsets | Classes | Tails |")
    print("| ---: | ---: | ---: | ---: | --- | --- | --- | --- | --- |")
    for row in rows[:args.limit]:
        print(
            f"| {row['events']} | `{row['start_vm_ip']}` | "
            f"{row['target_encoded_events']}/{row['events']} | "
            f"{row['long_control_overlap_events']}/{row['events']} | "
            f"`{row['tail_schemas'] or '-'}` | `{row['top_targets'] or '-'}` | "
            f"`{row['target_match_offsets'] or '-'}` | `{row['lift_classes']}` | "
            f"`{row['top_tail_hexes']}` |"
        )


def main():
    parser = argparse.ArgumentParser(
        description="Lift unresolved synthetic VM suffix bytes into row-level target/tail schemas."
    )
    parser.add_argument(
        "--trace",
        default="dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv",
    )
    parser.add_argument("--transition-model", default="dumps/vmtail-wide-1m-w16/vm_transition_model.tsv")
    parser.add_argument("--microcode", default="dumps/vmtail-wide-1m-w16/vm_microcode_catalog.tsv")
    parser.add_argument("--handler-table", default="dumps/vmtail-wide-1m-w16/vm_handler_table.tsv")
    parser.add_argument("--long-branches", default="dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--tail-window", type=lambda value: int(value, 0), default=0x80)
    parser.add_argument("--max-items", type=int, default=6)
    parser.add_argument("--max-tail-hex", type=int, default=48)
    parser.add_argument("--markdown", action="store_true")
    parser.add_argument("--limit", type=int, default=50)
    args = parser.parse_args()

    rows = make_rows(args)
    if args.markdown:
        emit_markdown(rows, args)
    else:
        emit_tsv(rows)

    events = sum(int(row["events"]) for row in rows)
    encoded = sum(int(row["target_encoded_events"]) for row in rows)
    schemas = sum(int(row["schema_events"]) for row in rows)
    overlaps = sum(int(row["long_control_overlap_events"]) for row in rows)
    print(
        f"synthetic_tail_lift_ips={len(rows)} events={events} "
        f"target_encoded_events={encoded} schema_events={schemas} "
        f"long_control_overlap_events={overlaps}",
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
