#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")


FIELDS = [
    "source_entry",
    "source_block",
    "source_start_vm_ip",
    "synthetic_start_vm_ip",
    "missing_successor_vm_ip",
    "gap_bytes",
    "gap_statuses",
    "events",
    "transfer_classification",
    "transfer_zero_seed_status",
    "transfer_slot_expr",
    "transfer_ip_expr",
    "dynamic_resolution",
    "dynamic_next_source_entry",
    "dynamic_next_source_start_vm_ip",
    "dynamic_next_end_vm_ip",
    "dynamic_next_tail_target_entry",
    "dynamic_next_end_block",
    "chain_statuses",
    "chain_best_hidden_entry",
    "chain_best_hidden_start_vm_ip",
    "chain_best_pred_end_vm_ip",
    "sampled_variants_for_source",
    "span_semantic_gap_class",
    "span_source_observation",
    "span_source_sampled_ir",
    "residual_reason",
    "promotion_state",
]


STATUS_RANK = {
    "hidden_chain_matches_next_event": 0,
    "dynamic_next_hook_matches_static_transfer": 1,
    "hidden_chain_target_only": 2,
    "dynamic_next_hook_target_only": 3,
    "hidden_chain_end_only": 4,
    "dynamic_next_hook_end_only": 5,
    "hidden_chain_mismatch": 6,
    "dynamic_next_hook_mismatch": 7,
}


def clean(text):
    return " ".join((text or "").replace("\t", " ").replace("\n", " ").split())


def clip(text, limit=96):
    text = clean(text)
    if len(text) > limit:
        return text[: limit - 3] + "..."
    return text


def sort_hex_key(text):
    try:
        return parse_hex(text)
    except (TypeError, ValueError):
        return 0


def status_rank(row):
    return STATUS_RANK.get(row.get("status", ""), 100)


def status_mix(rows):
    counts = Counter(row.get("status", "") for row in rows if row.get("status", ""))
    return ";".join(f"{status}:{count}" for status, count in counts.most_common()) or ""


def first_by_start(rows):
    by_start = {}
    for row in rows:
        start = row.get("synthetic_start_vm_ip", "")
        if start and start not in by_start:
            by_start[start] = row
    return by_start


def grouped_by_start(rows):
    groups = defaultdict(list)
    for row in rows:
        start = row.get("synthetic_start_vm_ip", "")
        if start:
            groups[start].append(row)
    return groups


def choose_dynamic(rows):
    preferred = [
        row
        for row in rows
        if row.get("resolution", "") == "dynamic_stitch_to_next_hooked_source"
    ]
    if preferred:
        return sorted(preferred, key=lambda row: int(row.get("next_event_count", "0") or 0))[0]
    return rows[0] if rows else {}


def choose_chain(rows):
    if not rows:
        return {}
    return sorted(rows, key=lambda row: (status_rank(row), sort_hex_key(row.get("hidden_source_start_vm_ip", ""))))[0]


def status_names(rows):
    return {row.get("status", "") for row in rows if row.get("status", "")}


def gap_status_names(text):
    names = []
    for part in (text or "").split(","):
        name = part.split(":", 1)[0]
        if name:
            names.append(name)
    return names


def span_key_candidates(gap):
    source = gap.get("source_entry", "")
    for name in gap_status_names(gap.get("synthetic_statuses", "")):
        yield source, name


def load_span_index(rows):
    index = {}
    for row in rows:
        source = row.get("source_entry", "")
        status = row.get("byte_status", "")
        if source and status and (source, status) not in index:
            index[(source, status)] = row
    return index


def load_block_start_index(rows):
    index = {}
    for row in rows:
        start = row.get("start_vm_ip", "")
        block = row.get("block", "")
        if start and block:
            index[start] = f"prog_bb_{int(block):04d}"
    return index


def residual_reason(chain_rows, transfer):
    statuses = status_names(chain_rows)
    if "dynamic_next_hook_matches_static_transfer" in statuses:
        return "sequence_observed_skip_not_static_replayed"
    if "hidden_chain_target_only" in statuses:
        return "hidden_chain_target_only"
    if transfer.get("classification", "") == "symbolic_slot_expr":
        return "unresolved_symbolic_slot"
    return "unresolved_synthetic_tail"


def promotion_state(chain_rows):
    statuses = status_names(chain_rows)
    if "dynamic_next_hook_matches_static_transfer" in statuses:
        if "hidden_chain_target_only" in statuses:
            return "not_promoted_dynamic_next_hook_with_target_only_hint"
        return "not_promoted_dynamic_next_hook_only"
    if "hidden_chain_target_only" in statuses:
        return "not_promoted_target_only"
    return "not_promoted_unresolved_symbolic"


def build_rows(trace_dir=TRACE_DIR):
    trace_dir = Path(trace_dir)
    gaps = list(read_tsv(trace_dir / "vm_synthetic_successor_gaps.tsv"))
    transfers = first_by_start(list(read_tsv(trace_dir / "vm_synthetic_gap_transfer_probe.tsv")))
    dynamic_groups = grouped_by_start(list(read_tsv(trace_dir / "vm_synthetic_gap_dynamic_stitch.tsv")))
    chain_groups = grouped_by_start(list(read_tsv(trace_dir / "vm_synthetic_gap_chain_probe.tsv")))
    spans = load_span_index(list(read_tsv(trace_dir / "vm_synthetic_span_catalog.tsv")))
    block_starts = load_block_start_index(list(read_tsv(trace_dir / "vm_bytecode_basic_blocks.tsv")))

    promoted_starts = {
        start
        for start, rows in chain_groups.items()
        if any(row.get("status", "") == "hidden_chain_matches_next_event" for row in rows)
    }

    audit_rows = []
    for gap in sorted(gaps, key=lambda row: sort_hex_key(row.get("synthetic_start_vm_ip", ""))):
        start = gap.get("synthetic_start_vm_ip", "")
        if not start or start in promoted_starts:
            continue

        transfer = transfers.get(start, {})
        dynamic = choose_dynamic(dynamic_groups.get(start, []))
        chain_rows = chain_groups.get(start, [])
        chain = choose_chain(chain_rows)

        span = {}
        for key in span_key_candidates(gap):
            if key in spans:
                span = spans[key]
                break

        next_end = dynamic.get("next_end_vm_ip", "") or chain.get("hidden_pred_end_vm_ip", "")

        audit_rows.append({
            "source_entry": gap.get("synthetic_sources", "").split(":", 1)[0] or transfer.get("source_entry", "") or chain.get("source_entry", ""),
            "source_block": gap.get("source_block", ""),
            "source_start_vm_ip": gap.get("source_start_vm_ip", ""),
            "synthetic_start_vm_ip": start,
            "missing_successor_vm_ip": gap.get("missing_successor_vm_ip", ""),
            "gap_bytes": dynamic.get("gap_bytes", "") or transfer.get("operand_bytes", "") or gap.get("top_bytes", "").split(":", 2)[-1],
            "gap_statuses": gap.get("synthetic_statuses", ""),
            "events": gap.get("events", ""),
            "transfer_classification": transfer.get("classification", ""),
            "transfer_zero_seed_status": transfer.get("zero_seed_status", ""),
            "transfer_slot_expr": clean(transfer.get("slot_expr", "")),
            "transfer_ip_expr": clean(transfer.get("ip_expr", "")),
            "dynamic_resolution": dynamic.get("resolution", ""),
            "dynamic_next_source_entry": dynamic.get("inferred_next_source_entry", ""),
            "dynamic_next_source_start_vm_ip": dynamic.get("inferred_next_source_start_vm_ip", ""),
            "dynamic_next_end_vm_ip": dynamic.get("next_end_vm_ip", ""),
            "dynamic_next_tail_target_entry": dynamic.get("next_tail_target_entry", ""),
            "dynamic_next_end_block": block_starts.get(next_end, ""),
            "chain_statuses": status_mix(chain_rows),
            "chain_best_hidden_entry": chain.get("hidden_source_entry", ""),
            "chain_best_hidden_start_vm_ip": chain.get("hidden_source_start_vm_ip", ""),
            "chain_best_pred_end_vm_ip": chain.get("hidden_pred_end_vm_ip", ""),
            "sampled_variants_for_source": gap.get("sampled_variants_for_source", ""),
            "span_semantic_gap_class": span.get("semantic_gap_class", ""),
            "span_source_observation": span.get("source_observation", ""),
            "span_source_sampled_ir": clean(span.get("source_sampled_ir", "")),
            "residual_reason": residual_reason(chain_rows, transfer),
            "promotion_state": promotion_state(chain_rows),
        })

    return audit_rows


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    reason_counts = Counter(row["residual_reason"] for row in rows)
    promotion_counts = Counter(row["promotion_state"] for row in rows)
    chain_status_counts = Counter()
    for row in rows:
        for part in row.get("chain_statuses", "").split(";"):
            if not part:
                continue
            name, _, count = part.partition(":")
            chain_status_counts[name] += int(count or "1")

    print("# Synthetic Gap Residual Audit\n")
    print(
        "Central audit of synthetic-successor starts that remain unresolved after static transfer, "
        "dynamic stitch, and hidden-chain replay evidence is joined.\n"
    )
    print(f"Residual rows: `{len(rows)}`\n")

    print("## Reason Mix\n")
    print("| Reason | Rows |")
    print("| --- | ---: |")
    for reason, count in reason_counts.most_common():
        print(f"| `{reason}` | {count} |")
    print()

    print("## Promotion State Mix\n")
    print("| Promotion state | Rows |")
    print("| --- | ---: |")
    for state, count in promotion_counts.most_common():
        print(f"| `{state}` | {count} |")
    print()

    print("## Chain Status Mix\n")
    print("| Chain status | Rows |")
    print("| --- | ---: |")
    for status, count in chain_status_counts.most_common():
        print(f"| `{status}` | {count} |")
    print()

    print("## Residual Starts\n")
    print("| Start | Source | Gap | Next hook | Next end block | Chain statuses | Reason |")
    print("| --- | ---: | --- | --- | --- | --- | --- |")
    for row in rows:
        next_hook = row.get("dynamic_next_source_start_vm_ip", "")
        next_entry = row.get("dynamic_next_source_entry", "")
        next_end = row.get("dynamic_next_end_vm_ip", "")
        next_hook_text = f"{next_entry}@{next_hook}->{next_end}" if next_hook else ""
        print(
            f"| `{row['synthetic_start_vm_ip']}` | {row['source_entry']} | `{row['gap_statuses']}` | "
            f"`{next_hook_text}` | `{row['dynamic_next_end_block']}` | "
            f"`{row['chain_statuses']}` | `{row['residual_reason']}` |"
        )

    print("\n## Sampled Operand Context\n")
    print("| Start | Sampled variants | Source sampled IR |")
    print("| --- | --- | --- |")
    for row in rows:
        print(
            f"| `{row['synthetic_start_vm_ip']}` | `{clip(row['sampled_variants_for_source'], 120)}` | "
            f"`{clip(row['span_source_sampled_ir'], 120)}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Join residual evidence for unresolved synthetic VM successor gaps.")
    parser.add_argument("--trace-dir", type=Path, default=TRACE_DIR)
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args.trace_dir)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)


if __name__ == "__main__":
    main()
