#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import defaultdict
from pathlib import Path


def read_tsv(path):
    with Path(path).open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def load_by(path, key):
    rows = {}
    if not path:
        return rows
    for row in read_tsv(path):
        rows[row.get(key, "")] = row
    return rows


def load_best_patterns(path):
    patterns = {}
    if not path:
        return patterns
    for row in read_tsv(path):
        entry = row.get("source_entry", "")
        if not entry:
            continue
        old = patterns.get(entry)
        if old is None or int(row.get("events", "0") or 0) > int(old.get("events", "0") or 0):
            patterns[entry] = row
    return patterns


def split_updates(text, name):
    if not text:
        return ""
    parts = []
    for item in text.split(";"):
        fields = item.split(":", 2)
        if len(fields) == 3:
            addr, op, expr = fields
            parts.append(f"{addr}: {name} {op}= {expr}")
    return " | ".join(parts)


def top_expr(text, max_variants):
    if not text:
        return ""
    variants = [part for part in text.split(";") if part]
    return " | ".join(variants[:max_variants])


def status(row):
    pieces = []
    if row.get("state_static_pct"):
        pieces.append(f"state_static={row['state_static_pct']}%")
    if row.get("static_dispatch_pct"):
        pieces.append(f"dispatch_static={row['static_dispatch_pct']}%")
    if row.get("dispatch_model"):
        pieces.append(f"dispatch_model={row['dispatch_model']}:{row.get('dispatch_model_pct', '')}%")
    if row.get("transfer_expr_target_pct"):
        pieces.append(f"transfer_expr={row['transfer_expr_target_pct']}%/{row.get('transfer_expr_events', '')}")
    return ", ".join(pieces)


def classify(row):
    if row.get("observation") == "unobserved":
        return "unobserved_static"
    if row.get("dispatch_model") == "static_100" and row.get("state_static_pct") == "100.0":
        return "static_validated"
    if row.get("dispatch_model", "").startswith("affine_"):
        return "affine_dispatch_fallback"
    if row.get("observation", "").startswith("sampled"):
        return "sampled_only"
    if row.get("observation") == "target_only":
        return "target_only"
    return "partial"


def build_rows(args):
    transition = list(read_tsv(args.transition_model))
    slices = load_by(args.state_slice, "entry")
    patterns = load_best_patterns(args.isa_patterns)

    rows = []
    for row in transition:
        entry = row.get("entry", "")
        state = slices.get(entry, {})
        pattern = patterns.get(entry, {})
        ip_advance = top_expr(row.get("transfer_expr_top_ip_exprs", ""), 1)
        slot_exprs = top_expr(row.get("transfer_expr_top_slot_exprs", ""), args.max_variants)
        if not slot_exprs and row.get("dispatch_model"):
            slot_exprs = f"model:{row.get('dispatch_model', '')}"
        rows.append(
            {
                "entry": entry,
                "target": row.get("target", ""),
                "class": classify(row),
                "events": row.get("observed_events", ""),
                "delta": row.get("delta", ""),
                "shape": row.get("shape", ""),
                "word_shape": pattern.get("word_shape", ""),
                "operand_layout": pattern.get("byte_layout", ""),
                "word_layout": pattern.get("word_layout", ""),
                "ip_reads": row.get("ip_reads", ""),
                "state_ir": split_updates(state.get("state_updates", ""), "state"),
                "flag_ir": split_updates(state.get("flag_updates", ""), "flags"),
                "dispatch_slot_ir": slot_exprs,
                "ip_advance_ir": ip_advance,
                "tail_ir": f"next = table[slot]; ip += {ip_advance}" if ip_advance else "",
                "validation": status(row),
                "top_targets": row.get("top_targets", ""),
            }
        )
    return rows


def emit_tsv(rows):
    fields = [
        "entry",
        "target",
        "class",
        "events",
        "delta",
        "shape",
        "word_shape",
        "operand_layout",
        "word_layout",
        "ip_reads",
        "state_ir",
        "flag_ir",
        "dispatch_slot_ir",
        "ip_advance_ir",
        "tail_ir",
        "validation",
        "top_targets",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows, limit):
    rows = sorted(rows, key=lambda row: int(row.get("events", "0") or 0), reverse=True)[:limit]
    print("# VM Handler Microcode Catalog\n")
    print(f"Top {len(rows)} observed dispatch entries by long-run event count.\n")
    for row in rows:
        print(f"## Entry {row['entry']} @ {row['target']}")
        print(f"- class: `{row['class']}`")
        print(f"- events: `{row['events']}`, delta: `{row['delta']}`, shape: `{row['shape']}`")
        if row["operand_layout"]:
            print(f"- operands: `{row['operand_layout']}`")
        if row["word_layout"]:
            print(f"- words: `{row['word_layout']}`")
        if row["validation"]:
            print(f"- validation: `{row['validation']}`")
        if row["flag_ir"]:
            print(f"- flags: `{row['flag_ir']}`")
        if row["state_ir"]:
            print(f"- state: `{row['state_ir']}`")
        if row["dispatch_slot_ir"]:
            print(f"- slot: `{row['dispatch_slot_ir']}`")
        if row["tail_ir"]:
            print(f"- tail: `{row['tail_ir']}`")
        if row["top_targets"]:
            print(f"- top targets: `{row['top_targets']}`")
        print()


def main():
    parser = argparse.ArgumentParser(
        description="Emit compact pseudo-IR rows for reconstructed VM dispatch entries."
    )
    parser.add_argument(
        "--transition-model",
        default="dumps/vmtail-wide-1m-w16/vm_transition_model.tsv",
    )
    parser.add_argument(
        "--state-slice",
        default="dumps/vmtail-wide-1m-w16/vm_state_static_slice.tsv",
    )
    parser.add_argument(
        "--isa-patterns",
        default="dumps/vmtail-wide-1m-w16/vm_isa_patterns.tsv",
    )
    parser.add_argument("--max-variants", type=int, default=2)
    parser.add_argument("--markdown", action="store_true")
    parser.add_argument("--limit", type=int, default=20)
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows, args.limit)
    else:
        emit_tsv(rows)


if __name__ == "__main__":
    main()
