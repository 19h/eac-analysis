#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path

from vm_pseudocode_dump import parse_delta, parse_hex, read_tsv
from vm_program_pseudocode_dump import (
    fmt_counter,
    load_synthetic_spans,
    normalize_vm_ip,
    short_bytes,
    top_key,
)


def parse_counted_hexes(text):
    out = []
    for item in (text or "").split(";"):
        item = item.strip()
        if not item:
            continue
        parts = item.split(":")
        if len(parts) < 3:
            continue
        try:
            count = int(parts[-2], 0)
        except ValueError:
            continue
        out.append((parts[-1], count))
    return out


def load_sampled_operand_index(path):
    by_source = defaultdict(list)
    exact = defaultdict(list)
    for row in read_tsv(path):
        source = row.get("source_entry", "")
        if not source:
            continue
        summary = (
            f"{row.get('target_entry', '?')}:{row.get('delta', '?')}:"
            f"{row.get('top_operand_bytes', '')}"
        )
        by_source[source].append(summary)
        for operand_hex, _count in parse_counted_hexes(row.get("top_operand_bytes", "")):
            exact[(source, operand_hex)].append(f"{row.get('target_entry', '?')}:{row.get('delta', '?')}")
    return by_source, exact


def load_atlas(path):
    rows = []
    for row in read_tsv(path):
        try:
            rows.append((parse_hex(row.get("start", "")), parse_hex(row.get("end", "")), row))
        except ValueError:
            pass
    return rows


def atlas_context(atlas, ip):
    for start, end, row in atlas:
        if start <= ip < end:
            return f"inside atlas {row.get('atlas')} 0x{start:x}-0x{end:x}"
        if ip == end:
            return f"at end of atlas {row.get('atlas')} 0x{start:x}-0x{end:x}"
    before = [item for item in atlas if item[1] <= ip]
    after = [item for item in atlas if item[0] > ip]
    parts = []
    if before:
        start, end, row = before[-1]
        parts.append(f"prev atlas {row.get('atlas')} ends 0x{end:x} (+0x{ip - end:x})")
    if after:
        start, end, row = after[0]
        parts.append(f"next atlas {row.get('atlas')} starts 0x{start:x} (-0x{start - ip:x})")
    return "; ".join(parts)


def compact(items, limit=4):
    if not items:
        return ""
    shown = list(items)[:limit]
    if len(items) > limit:
        shown.append(f"...+{len(items) - limit}")
    return ",".join(shown)


def build_rows(args):
    blocks = list(read_tsv(args.blocks))
    block_by_start = {parse_hex(row["start_vm_ip"]): row for row in blocks}
    edges = list(read_tsv(args.edges))
    spans = load_synthetic_spans(args.synthetic_trace, args.synthetic_tail_lift)
    sampled_by_source, exact_sampled = load_sampled_operand_index(args.sampled_operands)
    atlas = load_atlas(args.atlas)

    rows = []
    for edge in edges:
        if edge.get("edge_kind") != "covered_synthetic_fallthrough":
            continue
        synthetic_start_text = normalize_vm_ip(edge.get("target_vm_ip", ""))
        info = spans.get(synthetic_start_text)
        if not info:
            continue
        delta_text = top_key(info["deltas"])
        if not delta_text:
            continue
        try:
            synthetic_start = parse_hex(synthetic_start_text)
            lifted_delta = parse_delta(delta_text)
        except ValueError:
            continue
        successor_ip = synthetic_start + lifted_delta
        if successor_ip in block_by_start:
            continue

        top_sources = fmt_counter(info["sources"], args.top_items)
        top_statuses = fmt_counter(info["statuses"], args.top_items)
        top_bytes = short_bytes(info["bytes"], args.top_items, args.max_bytes)
        source = next(iter(info["sources"]), "")
        byte_matches = []
        for operand_hex in info["bytes"]:
            byte_matches.extend(exact_sampled.get((source, operand_hex), []))
        rows.append({
            "source_block": edge.get("source_block", ""),
            "source_start_vm_ip": edge.get("source_start_vm_ip", ""),
            "source_terminal_vm_ip": edge.get("source_terminal_vm_ip", ""),
            "synthetic_start_vm_ip": synthetic_start_text,
            "lifted_delta": delta_text,
            "missing_successor_vm_ip": f"0x{successor_ip:x}",
            "events": edge.get("events", ""),
            "synthetic_sources": top_sources,
            "synthetic_targets": fmt_counter(info["targets"], args.top_items),
            "synthetic_statuses": top_statuses,
            "top_bytes": top_bytes,
            "sampled_exact_byte_matches": compact(sorted(set(byte_matches)), args.top_items),
            "sampled_variants_for_source": compact(sampled_by_source.get(source, []), args.top_items),
            "atlas_context": atlas_context(atlas, successor_ip),
            "tail_schemas": (info.get("tail_lift") or {}).get("tail_schemas", ""),
            "long_control_overlaps": (info.get("tail_lift") or {}).get("long_control_overlaps", ""),
            "long_control_prefixes": (info.get("tail_lift") or {}).get("long_control_prefixes", ""),
        })
    rows.sort(key=lambda row: parse_hex(row["missing_successor_vm_ip"]))
    return rows


def emit_tsv(rows):
    fields = [
        "source_block",
        "source_start_vm_ip",
        "source_terminal_vm_ip",
        "synthetic_start_vm_ip",
        "lifted_delta",
        "missing_successor_vm_ip",
        "events",
        "synthetic_sources",
        "synthetic_targets",
        "synthetic_statuses",
        "top_bytes",
        "sampled_exact_byte_matches",
        "sampled_variants_for_source",
        "atlas_context",
        "tail_schemas",
        "long_control_overlaps",
        "long_control_prefixes",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    statuses = Counter()
    sources = Counter()
    for row in rows:
        for item in row["synthetic_statuses"].split(","):
            if not item:
                continue
            key, _, value = item.partition(":")
            try:
                statuses[key] += int(value)
            except ValueError:
                pass
        for item in row["synthetic_sources"].split(","):
            if not item:
                continue
            key, _, value = item.partition(":")
            try:
                sources[key] += int(value)
            except ValueError:
                pass

    print("# Synthetic Successor Gap Report\n")
    print(f"Recovered synthetic successors still missing a block start: {len(rows)}.\n")
    print(f"Status mix: {fmt_counter(statuses, 12) or '-'}.\n")
    print(f"Source mix: {fmt_counter(sources, 12) or '-'}.\n")
    print("| Missing Successor | Source Block | Synthetic Start | Delta | Sources | Statuses | Bytes | Atlas |")
    print("| --- | ---: | --- | ---: | --- | --- | --- | --- |")
    for row in rows:
        print(
            f"| `{row['missing_successor_vm_ip']}` | {row['source_block']} | "
            f"`{row['synthetic_start_vm_ip']}` | `{row['lifted_delta']}` | "
            f"`{row['synthetic_sources']}` | `{row['synthetic_statuses']}` | "
            f"`{row['top_bytes']}` | {row['atlas_context']} |"
        )


def main():
    parser = argparse.ArgumentParser(description="Report synthetic terminal successors that still lack recovered block starts.")
    parser.add_argument("--blocks", default="dumps/vmtail-wide-1m-w16/vm_bytecode_basic_blocks.tsv")
    parser.add_argument("--edges", default="dumps/vmtail-wide-1m-w16/vm_bytecode_basic_block_edges.tsv")
    parser.add_argument("--synthetic-trace", default="dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv")
    parser.add_argument("--synthetic-tail-lift", default="dumps/vmtail-wide-1m-w16/vm_synthetic_tail_lift.tsv")
    parser.add_argument("--sampled-operands", default="dumps/vmtail-wide-1m-w16/vm_sampled_operand_catalog.tsv")
    parser.add_argument("--atlas", default="dumps/vmtail-wide-1m-w16/vm_bytecode_file_atlas.tsv")
    parser.add_argument("--top-items", type=int, default=4)
    parser.add_argument("--max-bytes", type=int, default=64)
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_successor_gaps={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
