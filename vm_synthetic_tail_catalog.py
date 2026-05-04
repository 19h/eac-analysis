#!/usr/bin/env python3
import argparse
import csv
import hashlib
import sys
from collections import Counter
from pathlib import Path

from vm_synthetic_span_catalog import (
    byte_layout,
    load_by,
    load_tail_ip_advances,
    parse_hex,
    parse_len_status,
    read_tsv,
    semantic_gap_class,
    status_kind,
)


MOTIFS = {
    "8000": bytes.fromhex("8000"),
    "e801": bytes.fromhex("e801"),
    "3d01": bytes.fromhex("3d01"),
    "9d01": bytes.fromhex("9d01"),
    "ab00": bytes.fromhex("ab00"),
    "a500": bytes.fromhex("a500"),
    "6201": bytes.fromhex("6201"),
}


def fmt_counter(counter, max_items):
    return ",".join(f"{key}:{value}" for key, value in counter.most_common(max_items))


def variant_hash(hex_text):
    try:
        return hashlib.sha256(bytes.fromhex(hex_text)).hexdigest()[:12]
    except ValueError:
        return ""


def motifs(data):
    names = []
    for name, needle in MOTIFS.items():
        if data.find(needle) >= 0:
            names.append(name)
    return ",".join(names)


def u16_candidates(data, target_counter, max_entry):
    candidates = []
    target_values = set()
    for target in target_counter:
        try:
            target_values.add(int(target))
        except ValueError:
            pass
    for off in range(0, max(0, len(data) - 1)):
        value = int.from_bytes(data[off:off + 2], "little")
        if value <= max_entry:
            mark = "*" if value in target_values else ""
            candidates.append(f"+0x{off:x}:{value}{mark}")
    return ",".join(candidates)


def target_offsets(data, target_counter):
    rows = []
    for target, count in target_counter.most_common():
        try:
            value = int(target)
        except ValueError:
            continue
        offsets = []
        for off in range(0, max(0, len(data) - 1)):
            if int.from_bytes(data[off:off + 2], "little") == value:
                offsets.append(f"+0x{off:x}")
        if offsets:
            rows.append(f"{target}@{','.join(offsets)}:{count}")
    return ";".join(rows)


def make_rows(args):
    transition = load_by(args.transition_model, "entry")
    microcode = load_by(args.microcode, "entry")
    tail_ip_advances = load_tail_ip_advances(args.handler_table, args.eac, args.tail_window)
    tails = {}

    for row in read_tsv(args.trace):
        status = row.get("byte_status", "")
        kind = status_kind(status)
        if kind == "other":
            continue
        source_entry = row.get("source_entry", "")
        target_entry = row.get("target_entry", "")
        span_len = parse_len_status(status)
        if not span_len:
            try:
                span_len = parse_hex(row["end_vm_ip"]) - parse_hex(row["start_vm_ip"])
            except (KeyError, ValueError):
                span_len = 0
        gap_class, footprint, footprint_source, unresolved = semantic_gap_class(
            kind, source_entry, span_len, transition, microcode, tail_ip_advances
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
        hex_text = tail.hex()
        bucket = tails.setdefault(hex_text, {
            "events": 0,
            "sources": Counter(),
            "targets": Counter(),
            "classes": Counter(),
            "statuses": Counter(),
            "prefix_sources": Counter(),
            "source_classes": Counter(),
            "span_lens": Counter(),
            "prefix_lens": Counter(),
        })
        bucket["events"] += 1
        if source_entry:
            bucket["sources"][source_entry] += 1
        if target_entry:
            bucket["targets"][target_entry] += 1
        bucket["classes"][gap_class] += 1
        bucket["statuses"][status] += 1
        bucket["prefix_sources"][footprint_source or "-"] += 1
        bucket["source_classes"][microcode.get(source_entry, {}).get("class", "-")] += 1
        bucket["span_lens"][f"0x{span_len:x}"] += 1
        bucket["prefix_lens"][f"0x{int(footprint):x}"] += 1

    rows = []
    for hex_text, bucket in tails.items():
        data = bytes.fromhex(hex_text)
        rows.append({
            "tail_hash": variant_hash(hex_text),
            "tail_len": f"0x{len(data):x}",
            "tail_hex": hex_text,
            "events": str(bucket["events"]),
            "source_entries": str(len(bucket["sources"])),
            "target_entries": str(len(bucket["targets"])),
            "semantic_gap_classes": fmt_counter(bucket["classes"], args.max_items),
            "source_classes": fmt_counter(bucket["source_classes"], args.max_items),
            "prefix_sources": fmt_counter(bucket["prefix_sources"], args.max_items),
            "prefix_lens": fmt_counter(bucket["prefix_lens"], args.max_items),
            "span_lens": fmt_counter(bucket["span_lens"], args.max_items),
            "top_sources": fmt_counter(bucket["sources"], args.max_items),
            "top_targets": fmt_counter(bucket["targets"], args.max_items),
            "u16_candidates": u16_candidates(data, bucket["targets"], args.max_table_entry),
            "target_match_offsets": target_offsets(data, bucket["targets"]),
            "motifs": motifs(data),
            "byte_layout": byte_layout(Counter({hex_text: bucket["events"]}), args.max_layout_items),
        })
    rows.sort(key=lambda row: (-int(row["events"]), int(row["tail_len"], 16), row["tail_hex"]))
    return rows


def emit_tsv(rows):
    fields = [
        "tail_hash",
        "tail_len",
        "tail_hex",
        "events",
        "source_entries",
        "target_entries",
        "semantic_gap_classes",
        "source_classes",
        "prefix_sources",
        "prefix_lens",
        "span_lens",
        "top_sources",
        "top_targets",
        "u16_candidates",
        "target_match_offsets",
        "motifs",
        "byte_layout",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows, args):
    print("# VM Synthetic Tail Catalog\n")
    print(f"Top {min(args.limit, len(rows))} unresolved synthetic tail variants by event count.\n")
    print("| Events | Len | Hash | Tail | Targets | Target Offsets | Classes | Motifs |")
    print("| ---: | ---: | --- | --- | --- | --- | --- | --- |")
    for row in rows[:args.limit]:
        print(
            f"| {row['events']} | `{row['tail_len']}` | `{row['tail_hash']}` | "
            f"`{row['tail_hex'][:args.max_tail_hex]}` | `{row['top_targets']}` | "
            f"`{row['target_match_offsets'] or '-'}` | `{row['semantic_gap_classes']}` | `{row['motifs']}` |"
        )

    by_len = Counter()
    by_len_events = Counter()
    for row in rows:
        by_len[row["tail_len"]] += 1
        by_len_events[row["tail_len"]] += int(row["events"])
    print("\n## By Tail Length\n")
    print("| Tail Len | Variants | Events |")
    print("| ---: | ---: | ---: |")
    for key, count in by_len.most_common():
        print(f"| `{key}` | {count} | {by_len_events[key]} |")


def main():
    parser = argparse.ArgumentParser(
        description="Aggregate unresolved suffix bytes from byte-covered synthetic VM spans."
    )
    parser.add_argument(
        "--trace",
        default="dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv",
    )
    parser.add_argument("--transition-model", default="dumps/vmtail-wide-1m-w16/vm_transition_model.tsv")
    parser.add_argument("--microcode", default="dumps/vmtail-wide-1m-w16/vm_microcode_catalog.tsv")
    parser.add_argument("--handler-table", default="dumps/vmtail-wide-1m-w16/vm_handler_table.tsv")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--tail-window", type=lambda value: int(value, 0), default=0x80)
    parser.add_argument("--max-table-entry", type=lambda value: int(value, 0), default=359)
    parser.add_argument("--max-items", type=int, default=8)
    parser.add_argument("--max-layout-items", type=int, default=16)
    parser.add_argument("--markdown", action="store_true")
    parser.add_argument("--limit", type=int, default=50)
    parser.add_argument("--max-tail-hex", type=int, default=64)
    args = parser.parse_args()

    rows = make_rows(args)
    if args.markdown:
        emit_markdown(rows, args)
    else:
        emit_tsv(rows)

    events = sum(int(row["events"]) for row in rows)
    by_len = Counter(row["tail_len"] for row in rows)
    print(
        f"synthetic_tail_variants={len(rows)} events={events} lens="
        + ",".join(f"{key}:{value}" for key, value in by_len.most_common()),
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
