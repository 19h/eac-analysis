#!/usr/bin/env python3
import argparse
import csv
import hashlib
import sys
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


def clip(text, max_len):
    if max_len <= 0 or len(text) <= max_len:
        return text
    digest = hashlib.sha256(text.encode()).hexdigest()[:12]
    keep = max(24, max_len - 17)
    return f"{text[:keep]}...#{digest}"


def split_updates(text, name, max_updates, max_expr_len, max_field_len):
    if not text:
        return ""
    items = [item for item in text.split(";") if item]
    if max_updates > 0 and len(items) > max_updates:
        items = items[: max_updates - 1] + [f"...{len(text.split(';')) - max_updates} omitted...", items[-1]]
    parts = []
    for item in items:
        if item.startswith("..."):
            parts.append(item)
            continue
        fields = item.split(":", 2)
        if len(fields) == 3:
            addr, op, expr = fields
            parts.append(f"{addr}: {name} {op}= {clip(expr, max_expr_len)}")
    return clip(" | ".join(parts), max_field_len)


def top_expr(text, max_variants, max_expr_len, max_field_len):
    if not text:
        return ""
    variants = [part for part in text.split(";") if part]
    clipped = []
    for variant in variants[:max_variants]:
        count, sep, expr = variant.partition("=")
        clipped.append(f"{count}{sep}{clip(expr, max_expr_len)}" if sep else clip(variant, max_expr_len))
    return clip(" | ".join(clipped), max_field_len)


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
    if row.get("long_branch_events"):
        pieces.append(f"long_branch={row['long_branch_events']}/{row.get('long_branch_variants', '')}")
    if row.get("long_branch_operand_lens"):
        pieces.append(f"long_branch_len={row['long_branch_operand_lens']}")
    if row.get("sampled_operand_events"):
        pieces.append(f"sampled_operand={row['sampled_operand_events']}/{row.get('sampled_operand_variants', '')}")
    if row.get("sampled_operand_lens"):
        pieces.append(f"sampled_operand_len={row['sampled_operand_lens']}")
    return ", ".join(pieces)


def classify(row):
    if row.get("observation") == "unobserved":
        return "unobserved_static"
    if row.get("dispatch_model") == "static_100" and row.get("state_static_pct") == "100.0":
        return "static_validated"
    if row.get("dispatch_model", "").startswith("affine_"):
        return "affine_dispatch_fallback"
    if row.get("sampled_operand_events"):
        return "sampled_operand_lifted"
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
        ip_advance = top_expr(row.get("transfer_expr_top_ip_exprs", ""), 1, args.max_expr_len, args.max_field_len)
        slot_exprs = top_expr(
            row.get("transfer_expr_top_slot_exprs", ""),
            args.max_variants,
            args.max_expr_len,
            args.max_field_len,
        )
        if not slot_exprs and row.get("dispatch_model"):
            slot_exprs = f"model:{row.get('dispatch_model', '')}"
        long_branch_ir = top_expr(
            row.get("long_branch_top_ir", ""),
            args.max_variants,
            args.max_expr_len,
            args.max_field_len,
        )
        long_branch_operands = top_expr(
            row.get("long_branch_operand_shapes", ""),
            args.max_variants,
            args.max_expr_len,
            args.max_field_len,
        )
        sampled_operand_ir = top_expr(
            row.get("sampled_operand_top_ir", ""),
            args.max_variants,
            args.max_expr_len,
            args.max_field_len,
        )
        sampled_operand_operands = top_expr(
            row.get("sampled_operand_shapes", ""),
            args.max_variants,
            args.max_expr_len,
            args.max_field_len,
        )
        tail_ir = f"next = table[slot]; ip += {ip_advance}" if ip_advance else long_branch_ir or sampled_operand_ir
        rows.append(
            {
                "entry": entry,
                "target": row.get("target", ""),
                "class": classify(row),
                "events": row.get("observed_events", ""),
                "delta": row.get("delta", ""),
                "shape": row.get("shape", ""),
                "word_shape": pattern.get("word_shape", ""),
                "operand_layout": clip(pattern.get("byte_layout", ""), args.max_field_len),
                "word_layout": clip(pattern.get("word_layout", ""), args.max_field_len),
                "ip_reads": row.get("ip_reads", ""),
                "state_ir": split_updates(
                    state.get("state_updates", ""),
                    "state",
                    args.max_updates,
                    args.max_expr_len,
                    args.max_field_len,
                ),
                "flag_ir": split_updates(
                    state.get("flag_updates", ""),
                    "flags",
                    args.max_updates,
                    args.max_expr_len,
                    args.max_field_len,
                ),
                "dispatch_slot_ir": slot_exprs,
                "ip_advance_ir": ip_advance,
                "long_branch_ir": long_branch_ir,
                "long_branch_operands": long_branch_operands,
                "sampled_operand_ir": sampled_operand_ir,
                "sampled_operand_operands": sampled_operand_operands,
                "tail_ir": tail_ir,
                "path_profile": (
                    f"{row.get('path_profile_unique_paths', '')} paths over "
                    f"{row.get('path_profile_events', '')} state events"
                    if row.get("path_profile_unique_paths", "") else ""
                ),
                "branch_profile": (
                    f"{row.get('branch_predicate_unknown_events', '')}/"
                    f"{row.get('branch_predicate_events', '')} unknown branches "
                    f"({row.get('branch_predicate_unknown_pct', '')}%): "
                    f"{clip(row.get('branch_predicate_top_classes', ''), args.max_field_len)}"
                    if row.get("branch_predicate_events", "") else ""
                ),
                "branch_sites": clip(row.get("branch_predicate_top_unknown_sites", ""), args.max_field_len),
                "branch_gpr_profile": (
                    f"{row.get('branch_gpr_predicate_unknown_events', '')}/"
                    f"{row.get('branch_gpr_predicate_events', '')} unknown branches "
                    f"({row.get('branch_gpr_predicate_unknown_pct', '')}%): "
                    f"{clip(row.get('branch_gpr_predicate_top_classes', ''), args.max_field_len)}"
                    if row.get("branch_gpr_predicate_events", "") else ""
                ),
                "branch_gpr_sites": clip(row.get("branch_gpr_predicate_top_unknown_sites", ""), args.max_field_len),
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
        "long_branch_ir",
        "long_branch_operands",
        "sampled_operand_ir",
        "sampled_operand_operands",
        "tail_ir",
        "path_profile",
        "branch_profile",
        "branch_sites",
        "branch_gpr_profile",
        "branch_gpr_sites",
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
        if row["path_profile"]:
            print(f"- paths: `{row['path_profile']}`")
        if row["branch_profile"]:
            print(f"- branch predicates: `{row['branch_profile']}`")
        if row["branch_sites"]:
            print(f"- unknown branch sites: `{row['branch_sites']}`")
        if row["branch_gpr_profile"]:
            print(f"- GPR+scratch-seeded branch predicates: `{row['branch_gpr_profile']}`")
        if row["branch_gpr_sites"]:
            print(f"- GPR+scratch-seeded unknown branch sites: `{row['branch_gpr_sites']}`")
        if row["flag_ir"]:
            print(f"- flags: `{row['flag_ir']}`")
        if row["state_ir"]:
            print(f"- state: `{row['state_ir']}`")
        if row["dispatch_slot_ir"]:
            print(f"- slot: `{row['dispatch_slot_ir']}`")
        if row["sampled_operand_ir"]:
            print(f"- sampled operand tail: `{row['sampled_operand_ir']}`")
        if row["tail_ir"]:
            print(f"- tail: `{row['tail_ir']}`")
        if row["sampled_operand_operands"]:
            print(f"- sampled operand footprints: `{row['sampled_operand_operands']}`")
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
    parser.add_argument("--max-updates", type=int, default=5)
    parser.add_argument("--max-expr-len", type=int, default=220)
    parser.add_argument("--max-field-len", type=int, default=640)
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
