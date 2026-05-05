#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")


FIELDS = [
    "chain_start_vm_ip",
    "chain_source_entry",
    "chain_missing_successor_vm_ip",
    "chain_bridge_class",
    "chain_path",
    "chain_step_count",
    "step_index",
    "step_vm_ip",
    "step_source_entry",
    "step_role",
    "step_bridge_action",
    "step_bridge_class",
    "first_hop_kind",
    "first_hop_vm_ip",
    "first_hop_delta",
    "first_hop_target_entry",
    "following_residual_start",
    "terminal_dest_vm_ip",
    "terminal_dest_block",
    "terminal_dest_entry",
    "primary_vs_focused_first_hop",
    "replay_c_shape",
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
    return [normalize_vm_ip(part.strip()) for part in (text or "").split("->") if part.strip()]


def load_bridge_rows(path):
    by_start = {}
    rows = []
    if not path or not Path(path).exists():
        return rows, by_start
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if not start:
            continue
        row = dict(row)
        row["synthetic_start_vm_ip"] = start
        row["missing_successor_vm_ip"] = normalize_vm_ip(row.get("missing_successor_vm_ip", ""))
        row["first_hop_vm_ip"] = normalize_vm_ip(row.get("first_hop_vm_ip", ""))
        row["following_residual_start"] = normalize_vm_ip(row.get("following_residual_start", ""))
        row["terminal_dest_vm_ip"] = normalize_vm_ip(row.get("terminal_dest_vm_ip", ""))
        rows.append(row)
        by_start[start] = row
    rows.sort(key=lambda row: parse_hex(row["synthetic_start_vm_ip"]))
    return rows, by_start


def step_role(chain_row, step_row, step_index, step_count):
    if step_index != step_count - 1:
        return "residual_chain_step"
    action = step_row.get("bridge_action", "")
    klass = chain_row.get("observed_chain_bridge_class", "")
    if action == "hard_cfg":
        return "focused_direct_terminal_step"
    if klass == "sequence_chain_to_recovered_context_reentry":
        return "context_reentry_terminal_step"
    return "chain_terminal_step"


def replay_shape(step_row, step_following, chain_row):
    source = step_row.get("source_entry", "") or "?"
    target = step_row.get("first_hop_target_entry", "") or "?"
    first = step_row.get("first_hop_vm_ip", "") or "-"
    follow = step_following or step_row.get("following_residual_start", "") or "-"
    dest = chain_row.get("terminal_dest_vm_ip", "") or "-"
    try:
        block = f"{int(chain_row.get('terminal_dest_block', '') or 0):04d}"
    except ValueError:
        block = chain_row.get("terminal_dest_block", "") or "-"
    return (
        f"op_entry_{source}(vm); next_entry={target}; "
        f"first_hop={first}; vm_ip={follow}; terminal=prog_bb_{block}@{dest}"
    )


def build_rows(args):
    bridge_rows, by_start = load_bridge_rows(args.observed_chain_bridge)
    out = []
    for chain_row in bridge_rows:
        if chain_row.get("bridge_action", "") != "disabled_observed_chain_bridge":
            continue
        path = csplit(chain_row.get("chain_path", ""))
        step_count = len(path)
        for idx, step_start in enumerate(path):
            step_row = by_start.get(step_start, {})
            following = path[idx + 1] if idx + 1 < step_count else ""
            out.append({
                "chain_start_vm_ip": chain_row.get("synthetic_start_vm_ip", ""),
                "chain_source_entry": chain_row.get("source_entry", ""),
                "chain_missing_successor_vm_ip": chain_row.get("missing_successor_vm_ip", ""),
                "chain_bridge_class": chain_row.get("observed_chain_bridge_class", ""),
                "chain_path": chain_row.get("chain_path", ""),
                "chain_step_count": str(step_count),
                "step_index": str(idx),
                "step_vm_ip": step_start,
                "step_source_entry": step_row.get("source_entry", ""),
                "step_role": step_role(chain_row, step_row, idx, step_count),
                "step_bridge_action": step_row.get("bridge_action", ""),
                "step_bridge_class": step_row.get("observed_chain_bridge_class", ""),
                "first_hop_kind": step_row.get("first_hop_kind", ""),
                "first_hop_vm_ip": step_row.get("first_hop_vm_ip", ""),
                "first_hop_delta": step_row.get("first_hop_delta", ""),
                "first_hop_target_entry": step_row.get("first_hop_target_entry", ""),
                "following_residual_start": following or step_row.get("following_residual_start", ""),
                "terminal_dest_vm_ip": chain_row.get("terminal_dest_vm_ip", ""),
                "terminal_dest_block": chain_row.get("terminal_dest_block", ""),
                "terminal_dest_entry": chain_row.get("terminal_dest_entry", ""),
                "primary_vs_focused_first_hop": chain_row.get("primary_vs_focused_first_hop", ""),
                "replay_c_shape": replay_shape(step_row, following, chain_row),
                "promotion_blocker": chain_row.get("promotion_blocker", ""),
            })
    return out


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    chain_starts = []
    seen_chains = set()
    for row in rows:
        start = row.get("chain_start_vm_ip", "")
        if start and start not in seen_chains:
            seen_chains.add(start)
            chain_starts.append(start)

    role_mix = Counter(row.get("step_role", "") for row in rows)
    class_mix = Counter(row.get("chain_bridge_class", "") for row in rows if row.get("step_index") == "0")
    terminal_mix = Counter(
        f"prog_bb_{int(row.get('terminal_dest_block', '0') or 0):04d}@{row.get('terminal_dest_vm_ip', '')}"
        for row in rows
        if row.get("step_index") == "0" and row.get("terminal_dest_block", "")
    )
    unique_steps = sorted({row.get("step_vm_ip", "") for row in rows if row.get("step_vm_ip", "")}, key=parse_hex)

    print("# Synthetic Gap Observed Chain Replay Audit\n")
    print(
        "Disabled observed-chain bridge snippets are expanded here into the exact replay steps emitted "
        "inside `VM_ENABLE_OBSERVED_CHAIN_BRIDGES`. These rows are C-shape reconstruction evidence, "
        "not default hard CFG promotion.\n"
    )
    print(f"Chains: `{len(chain_starts)}`")
    print(f"Replay rows: `{len(rows)}`")
    print(f"Unique replay VM starts: `{len(unique_steps)}`\n")

    print("## Step Role Mix\n")
    print("| Role | Rows |")
    print("| --- | ---: |")
    for key, value in role_mix.most_common():
        print(f"| `{key or '-'}` | {value} |")

    print("\n## Chain Class Mix\n")
    print("| Class | Chains |")
    print("| --- | ---: |")
    for key, value in class_mix.most_common():
        print(f"| `{key or '-'}` | {value} |")

    print("\n## Terminal Blocks\n")
    print("| Terminal | Chains |")
    print("| --- | ---: |")
    for key, value in terminal_mix.most_common():
        print(f"| `{key or '-'}` | {value} |")

    print("\n## Replay Steps\n")
    print(
        "| Chain | Step | VM IP | Source | Role | First Hop | Following | Terminal | Shape |"
    )
    print("| --- | ---: | --- | ---: | --- | --- | --- | --- | --- |")
    for row in rows:
        first = (
            f"{row.get('first_hop_kind') or '-'}@{row.get('first_hop_vm_ip') or '-'}"
            f"/{row.get('first_hop_delta') or '-'}->entry_{row.get('first_hop_target_entry') or '-'}"
        )
        terminal = row.get("terminal_dest_vm_ip", "") or "-"
        if row.get("terminal_dest_block", ""):
            terminal = f"prog_bb_{int(row.get('terminal_dest_block')):04d}@{terminal}"
        print(
            f"| `{row.get('chain_start_vm_ip', '')}` | {row.get('step_index', '')} | "
            f"`{row.get('step_vm_ip', '')}` | {row.get('step_source_entry', '') or '-'} | "
            f"`{row.get('step_role', '')}` | `{first}` | "
            f"`{row.get('following_residual_start', '') or '-'}` | `{terminal}` | "
            f"`{row.get('replay_c_shape', '')}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Expand disabled observed-chain bridge evidence into replay steps.")
    parser.add_argument("--observed-chain-bridge", default=str(TRACE_DIR / "vm_synthetic_gap_observed_chain_bridge.tsv"))
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_observed_chain_replay_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
