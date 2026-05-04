#!/usr/bin/env python3
import argparse
import csv
import hashlib
import sys
from pathlib import Path


def read_tsv(path):
    with Path(path).open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def load_by(path, *keys):
    rows = {}
    if not path:
        return rows
    for row in read_tsv(path):
        rows[tuple(row.get(key, "") for key in keys)] = row
    return rows


def clip(text, max_len):
    if max_len <= 0 or len(text) <= max_len:
        return text
    digest = hashlib.sha256(text.encode()).hexdigest()[:12]
    keep = max(24, max_len - 17)
    return f"{text[:keep]}...#{digest}"


def top_expr(text, max_expr_len):
    if not text:
        return ""
    part = text.split(";", 1)[0]
    count, sep, expr = part.partition("=")
    return f"{count}{sep}{clip(expr, max_expr_len)}" if sep else clip(part, max_expr_len)


def validation(row):
    pieces = []
    if row.get("target_coverage_pct"):
        pieces.append(f"target={row['target_coverage_pct']}%")
    if row.get("ip_coverage_pct"):
        pieces.append(f"ip={row['ip_coverage_pct']}%")
    if row.get("statuses"):
        pieces.append(row["statuses"])
    return ", ".join(pieces)


def build_rows(args):
    source_microcode = load_by(args.microcode_catalog, "entry")
    path_exprs = load_by(args.path_transfer_expr, "source_entry", "path_hash")
    rows = []
    for path_row in read_tsv(args.path_variants):
        source = path_row.get("source_entry", "")
        digest = path_row.get("path_hash", "")
        micro = source_microcode.get((source,), {})
        expr = path_exprs.get((source, digest), {})
        slot_expr = top_expr(expr.get("top_slot_exprs", ""), args.max_expr_len)
        ip_expr = top_expr(expr.get("top_ip_exprs", ""), args.max_expr_len)
        rows.append(
            {
                "source_entry": source,
                "source_target": path_row.get("source_target", ""),
                "path_hash": digest,
                "source_class": micro.get("class", ""),
                "source_branch_profile": micro.get("branch_profile", ""),
                "source_branch_gpr_profile": micro.get("branch_gpr_profile", ""),
                "events": path_row.get("events", ""),
                "target_pct": path_row.get("target_coverage_pct", ""),
                "ip_pct": path_row.get("ip_coverage_pct", ""),
                "sample_expr_events": expr.get("events", ""),
                "sample_expr_target_pct": expr.get("target_coverage_pct", ""),
                "slot_expr": slot_expr,
                "ip_advance": ip_expr,
                "operand_layout": micro.get("operand_layout", ""),
                "state_ir": micro.get("state_ir", ""),
                "flag_ir": micro.get("flag_ir", ""),
                "top_actual_targets": path_row.get("top_actual_targets", ""),
                "path": path_row.get("path", ""),
                "validation": validation(path_row),
            }
        )
    return rows


def emit_tsv(rows):
    fields = [
        "source_entry",
        "source_target",
        "path_hash",
        "source_class",
        "source_branch_profile",
        "source_branch_gpr_profile",
        "events",
        "target_pct",
        "ip_pct",
        "sample_expr_events",
        "sample_expr_target_pct",
        "slot_expr",
        "ip_advance",
        "operand_layout",
        "state_ir",
        "flag_ir",
        "top_actual_targets",
        "path",
        "validation",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows, limit):
    def row_events(row):
        try:
            return int(row.get("events", "0") or 0)
        except ValueError:
            return 0

    rows = sorted(rows, key=row_events, reverse=True)[:limit]
    print("# VM Path Microcode Catalog\n")
    print(f"Top {len(rows)} concrete handler paths by state-trace event count.\n")
    for row in rows:
        print(f"## Entry {row['source_entry']} Path {row['path_hash']}")
        print(f"- target: `{row['source_target']}`, class: `{row['source_class']}`")
        print(f"- events: `{row['events']}`, validation: `{row['validation']}`")
        if row["source_branch_profile"]:
            print(f"- source branch predicates: `{row['source_branch_profile']}`")
        if row["source_branch_gpr_profile"]:
            print(f"- source GPR+scratch-seeded branch predicates: `{row['source_branch_gpr_profile']}`")
        if row["sample_expr_events"]:
            print(f"- sampled expression events: `{row['sample_expr_events']}`")
        if row["slot_expr"]:
            print(f"- slot: `{row['slot_expr']}`")
        if row["ip_advance"]:
            print(f"- ip advance: `{row['ip_advance']}`")
        if row["path"]:
            print(f"- path: `{clip(row['path'], 420)}`")
        if row["top_actual_targets"]:
            print(f"- top actual targets: `{row['top_actual_targets']}`")
        if row["state_ir"]:
            print(f"- state: `{clip(row['state_ir'], 420)}`")
        print()


def main():
    parser = argparse.ArgumentParser(
        description="Join full concrete path profiles with sampled transfer expressions into path-specialized VM microcode."
    )
    parser.add_argument(
        "--path-variants",
        default="dumps/vmtail-state-wide-w16/vm_static_path_variants.tsv",
    )
    parser.add_argument(
        "--path-transfer-expr",
        default="dumps/vmtail-state-wide-w16/vm_static_path_transfer_expr.tsv",
    )
    parser.add_argument(
        "--microcode-catalog",
        default="dumps/vmtail-wide-1m-w16/vm_microcode_catalog.tsv",
    )
    parser.add_argument("--max-expr-len", type=int, default=360)
    parser.add_argument("--markdown", action="store_true")
    parser.add_argument("--limit", type=int, default=30)
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows, args.limit)
    else:
        emit_tsv(rows)


if __name__ == "__main__":
    main()
