#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")


FIELDS = [
    "source_entry",
    "synthetic_start_vm_ip",
    "missing_successor_vm_ip",
    "focused_direct_promotion_candidate",
    "chain_terminal",
    "chain_path",
    "chain_length",
    "first_hop_kind",
    "first_hop_vm_ip",
    "first_hop_delta",
    "first_hop_target_entry",
    "following_residual_start",
    "terminal_start_vm_ip",
    "terminal_bridge_kind",
    "terminal_dest_vm_ip",
    "terminal_dest_block",
    "terminal_dest_entry",
    "primary_dynamic_next_source_entry",
    "primary_dynamic_next_source_start_vm_ip",
    "primary_dynamic_next_end_vm_ip",
    "primary_dynamic_dest_block",
    "primary_vs_focused_first_hop",
    "observed_chain_bridge_class",
    "bridge_action",
    "promotion_blocker",
]


def normalize_vm_ip(text):
    if not text:
        return ""
    try:
        return f"0x{parse_hex(text):x}"
    except (TypeError, ValueError):
        return text


def csplit(text):
    return [part.strip() for part in (text or "").split("->") if part.strip()]


def load_by_start(path):
    out = {}
    if not path or not Path(path).exists():
        return out
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            out[start] = row
    return out


def load_blocks(path):
    out = {}
    if not path or not Path(path).exists():
        return out
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("start_vm_ip", ""))
        if start:
            out[start] = row.get("block", "")
    return out


def direct_dest(row):
    if not row or row.get("promotion_candidate", "") != "yes":
        return "", "", ""
    return (
        normalize_vm_ip(row.get("example_end_vm_ip", "")),
        row.get("example_dest_block", ""),
        row.get("example_target_entry", ""),
    )


def context_dest(sequence_by_start, blocks_by_start, terminal_start):
    row = sequence_by_start.get(terminal_start, {})
    if row.get("chain_terminal", "") != "raw_sequence_no_residual_successor":
        return "", "", ""
    dest = normalize_vm_ip(row.get("example_next_event_vm_ip", ""))
    if not dest:
        return "", "", ""
    block = blocks_by_start.get(dest, "")
    entry = row.get("example_next_event_target_entry", "")
    return dest, block, entry


def compare_primary_focused(residual, sequence):
    focused_next = normalize_vm_ip(sequence.get("example_next_event_vm_ip", ""))
    primary_start = normalize_vm_ip(residual.get("dynamic_next_source_start_vm_ip", ""))
    primary_end = normalize_vm_ip(residual.get("dynamic_next_end_vm_ip", ""))
    if not focused_next:
        return "focused_no_next_event"
    if focused_next == primary_end:
        return "focused_first_hop_matches_primary_next_end"
    if focused_next == primary_start:
        return "focused_first_hop_matches_primary_next_start"
    if primary_start or primary_end:
        return "focused_first_hop_differs_from_primary_next_hook"
    return "primary_next_hook_missing"


def classify_bridge(start, sequence, direct_by_start, sequence_by_start, blocks_by_start):
    direct = direct_by_start.get(start, {})
    dest, block, entry = direct_dest(direct)
    if dest and block:
        return start, dest, block, entry, "hard_focused_direct_bridge_already_promoted", "hard_cfg"

    path = csplit(sequence.get("chain_path", ""))
    terminal = path[-1] if path else start
    terminal_direct = direct_by_start.get(terminal, {})
    dest, block, entry = direct_dest(terminal_direct)
    if dest and block:
        return terminal, dest, block, entry, "sequence_chain_to_focused_direct_bridge", "disabled_observed_chain_bridge"

    dest, block, entry = context_dest(sequence_by_start, blocks_by_start, terminal)
    if dest and block:
        return terminal, dest, block, entry, "sequence_chain_to_recovered_context_reentry", "disabled_observed_chain_bridge"

    if dest:
        return terminal, dest, block, entry, "sequence_chain_to_unblocked_context_event", "comment_only"
    return terminal, "", "", "", "sequence_chain_unresolved", "comment_only"


def build_rows(args):
    residual_by_start = load_by_start(args.residual_audit)
    direct_by_start = load_by_start(args.focused_direct_audit)
    sequence_by_start = load_by_start(args.focused_sequence_audit)
    blocks_by_start = load_blocks(args.blocks)

    rows = []
    for start, sequence in sorted(sequence_by_start.items(), key=lambda item: parse_hex(item[0])):
        residual = residual_by_start.get(start, {})
        terminal_kind, terminal_dest, terminal_block, terminal_entry, bridge_class, action = classify_bridge(
            start, sequence, direct_by_start, sequence_by_start, blocks_by_start
        )
        rows.append({
            "source_entry": sequence.get("source_entry", residual.get("source_entry", "")),
            "synthetic_start_vm_ip": start,
            "missing_successor_vm_ip": residual.get("missing_successor_vm_ip", ""),
            "focused_direct_promotion_candidate": sequence.get("focused_direct_promotion_candidate", ""),
            "chain_terminal": sequence.get("chain_terminal", ""),
            "chain_path": sequence.get("chain_path", ""),
            "chain_length": sequence.get("chain_length", ""),
            "first_hop_kind": sequence.get("example_next_event_kind", ""),
            "first_hop_vm_ip": normalize_vm_ip(sequence.get("example_next_event_vm_ip", "")),
            "first_hop_delta": sequence.get("example_next_event_delta", ""),
            "first_hop_target_entry": sequence.get("example_next_event_target_entry", ""),
            "following_residual_start": normalize_vm_ip(sequence.get("example_following_residual_start", "")),
            "terminal_start_vm_ip": terminal_kind,
            "terminal_bridge_kind": "direct" if action == "hard_cfg" else "sequence",
            "terminal_dest_vm_ip": terminal_dest,
            "terminal_dest_block": terminal_block,
            "terminal_dest_entry": terminal_entry,
            "primary_dynamic_next_source_entry": residual.get("dynamic_next_source_entry", ""),
            "primary_dynamic_next_source_start_vm_ip": residual.get("dynamic_next_source_start_vm_ip", ""),
            "primary_dynamic_next_end_vm_ip": residual.get("dynamic_next_end_vm_ip", ""),
            "primary_dynamic_dest_block": residual.get("dynamic_next_end_block", ""),
            "primary_vs_focused_first_hop": compare_primary_focused(residual, sequence),
            "observed_chain_bridge_class": bridge_class,
            "bridge_action": action,
            "promotion_blocker": sequence.get("promotion_blocker", ""),
        })
    return rows


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    class_mix = Counter(row.get("observed_chain_bridge_class", "") for row in rows)
    action_mix = Counter(row.get("bridge_action", "") for row in rows)
    compare_mix = Counter(row.get("primary_vs_focused_first_hop", "") for row in rows)

    print("# Synthetic Gap Observed Chain Bridge Audit\n")
    print(
        "Focused residual traces expose raw VMTAIL chain paths that either terminate in a focused direct "
        "bridge or in the dedicated `0x122e3c -> 0x2c0468` context reentry. These rows are bridge evidence, "
        "not hard CFG promotion, unless the focused direct trace starts exactly at the residual VM IP.\n"
    )
    print(f"Rows: `{len(rows)}`\n")

    print("## Bridge Class Mix\n")
    print("| Class | Rows |")
    print("| --- | ---: |")
    for key, value in class_mix.most_common():
        print(f"| `{key or '-'}` | {value} |")

    print("\n## Bridge Action Mix\n")
    print("| Action | Rows |")
    print("| --- | ---: |")
    for key, value in action_mix.most_common():
        print(f"| `{key or '-'}` | {value} |")

    print("\n## Primary vs Focused First Hop\n")
    print("| Relation | Rows |")
    print("| --- | ---: |")
    for key, value in compare_mix.most_common():
        print(f"| `{key or '-'}` | {value} |")

    print("\n## Observed Chain Bridges\n")
    print(
        "| Start | Source | First Hop | Following Residual | Chain | Bridge Class | "
        "Action | Terminal Dest | Primary Next | Relation |"
    )
    print("| --- | ---: | --- | --- | --- | --- | --- | --- | --- | --- |")
    for row in rows:
        first = (
            f"{row.get('first_hop_kind') or '-'} {row.get('first_hop_vm_ip') or '-'} "
            f"{row.get('first_hop_delta') or ''} -> entry {row.get('first_hop_target_entry') or '-'}"
        )
        terminal = row.get("terminal_dest_vm_ip", "") or "-"
        if row.get("terminal_dest_block", ""):
            terminal = f"prog_bb_{int(row.get('terminal_dest_block')):04d} @ {terminal}"
        primary = row.get("primary_dynamic_next_end_vm_ip", "") or "-"
        if row.get("primary_dynamic_next_source_entry", ""):
            primary = (
                f"entry {row.get('primary_dynamic_next_source_entry')} @ "
                f"{row.get('primary_dynamic_next_source_start_vm_ip')} -> {primary}"
            )
        print(
            f"| `{row.get('synthetic_start_vm_ip', '')}` | {row.get('source_entry', '')} | "
            f"`{first}` | `{row.get('following_residual_start', '') or '-'}` | "
            f"`{row.get('chain_path', '')}` | `{row.get('observed_chain_bridge_class', '')}` | "
            f"`{row.get('bridge_action', '')}` | `{terminal}` | `{primary}` | "
            f"`{row.get('primary_vs_focused_first_hop', '')}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Audit observed focused residual chain bridges.")
    parser.add_argument("--residual-audit", default=str(TRACE_DIR / "vm_synthetic_gap_residual_audit.tsv"))
    parser.add_argument("--focused-direct-audit", default=str(TRACE_DIR / "vm_synthetic_gap_focused_direct_trace_audit.tsv"))
    parser.add_argument("--focused-sequence-audit", default=str(TRACE_DIR / "vm_synthetic_gap_focused_sequence_audit.tsv"))
    parser.add_argument("--blocks", default=str(TRACE_DIR / "vm_bytecode_basic_blocks.tsv"))
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_observed_chain_bridge_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
