#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path


def parse_hex(text):
    if not text:
        return 0
    return int(text, 16)


def parse_signed_hex(text):
    if text.startswith("+0x"):
        return int(text[1:], 16)
    if text.startswith("-0x"):
        return -int(text[3:], 16)
    return int(text, 0)


def fmt_hex(value):
    return f"0x{value:x}"


def fmt_counter(counter, limit):
    return ",".join(f"{key}:{value}" for key, value in counter.most_common(limit))


def read_ir(path):
    rows = []
    with Path(path).open(newline="", errors="replace") as handle:
        for raw in csv.DictReader(handle, delimiter="\t"):
            row = dict(raw)
            row["start_i"] = parse_hex(row["start_vm_ip"])
            row["end_i"] = parse_hex(row["end_vm_ip"])
            row["events_i"] = int(row.get("events") or 0)
            row["delta_i"] = parse_signed_hex(row.get("delta", "0"))
            row["operand_len_i"] = parse_hex(row.get("operand_min_len", "0") or "0")
            rows.append(row)
    rows.sort(key=lambda row: (row["start_i"], row["row_kind"], row["source_entry"], row["delta_i"]))
    return rows


def load_coverage(path):
    coverage = defaultdict(Counter)
    if not path or not Path(path).exists():
        return coverage
    with Path(path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            start = row.get("start_vm_ip", "")
            status = row.get("byte_status", "")
            if start and status and status != "exact":
                coverage[parse_hex(start)][status] += 1
    return coverage


def leader_reasons(rows):
    starts = {row["start_i"] for row in rows}
    reasons = defaultdict(Counter)
    if rows:
        reasons[rows[0]["start_i"]]["first_recovered_row"] += 1

    for idx, row in enumerate(rows):
        next_start = rows[idx + 1]["start_i"] if idx + 1 < len(rows) else None
        prev_end = rows[idx - 1]["end_i"] if idx > 0 else None
        if idx > 0 and prev_end != row["start_i"]:
            reasons[row["start_i"]]["address_gap_or_jump_target"] += 1

        if row["row_kind"] != "exact_instruction":
            if row["end_i"] in starts:
                reasons[row["end_i"]][f"{row['row_kind']}_target"] += row["events_i"]
            if next_start is not None:
                reasons[next_start]["after_decoded_control"] += 1
            continue

        if row["end_i"] in starts and row["end_i"] != next_start:
            reasons[row["end_i"]]["exact_target"] += row["events_i"]
        if next_start is not None and row["end_i"] != next_start:
            reasons[next_start]["after_unrecovered_gap"] += 1

    return reasons


def build_blocks(rows):
    reasons = leader_reasons(rows)
    leaders = set(reasons)
    blocks = []
    current = None

    def start_block(row):
        return {
            "block": len(blocks),
            "rows": [],
            "start_i": row["start_i"],
            "start_vm_ip": row["start_vm_ip"],
            "leader_reasons": reasons[row["start_i"]],
        }

    for idx, row in enumerate(rows):
        if current is None:
            current = start_block(row)
        current["rows"].append(row)

        next_start = rows[idx + 1]["start_i"] if idx + 1 < len(rows) else None
        terminate = False
        if row["row_kind"] != "exact_instruction":
            terminate = True
        elif next_start is None:
            terminate = True
        elif row["end_i"] != next_start:
            terminate = True
        elif next_start in leaders:
            terminate = True

        if terminate:
            blocks.append(current)
            current = None

    return blocks


def terminal_edge_kind(last, successor, coverage):
    if last["row_kind"] == "exact_instruction":
        if successor is not None:
            return "fallthrough"
        if coverage.get(last["end_i"]):
            return "covered_synthetic_fallthrough"
        return "unrecovered_fallthrough"
    if successor is not None:
        return "decoded_control"
    if coverage.get(last["end_i"]):
        return "decoded_control_covered_synthetic"
    return "decoded_control_unrecovered"


def block_summary(block, block_by_start, coverage, args):
    rows = block["rows"]
    last = rows[-1]
    exact_rows = [row for row in rows if row["row_kind"] == "exact_instruction"]
    decoded_rows = [row for row in rows if row["row_kind"] != "exact_instruction"]
    source_entries = Counter(row["source_entry"] for row in rows if row.get("source_entry"))
    target_entries = Counter(row["target_entry"] for row in rows if row.get("target_entry"))
    row_kinds = Counter(row["row_kind"] for row in rows)
    state_classes = Counter(row["state_ir"] for row in rows if row.get("state_ir"))
    provenance = Counter(row["provenance"] for row in rows if row.get("provenance"))

    byte_end = last["end_i"] if last["row_kind"] == "exact_instruction" else last["start_i"] + last["operand_len_i"]
    successor = block_by_start.get(last["end_i"])
    edge_kind = terminal_edge_kind(last, successor, coverage)
    semantic_tail = last.get("semantic_ir", "")
    if len(semantic_tail) > args.max_semantic_len:
        semantic_tail = semantic_tail[: args.max_semantic_len - 3] + "..."

    return {
        "block": str(block["block"]),
        "start_vm_ip": block["start_vm_ip"],
        "byte_end_min": fmt_hex(byte_end),
        "terminal_vm_ip": last["start_vm_ip"],
        "terminal_target_vm_ip": last["end_vm_ip"],
        "successor_block": "" if successor is None else str(successor["block"]),
        "successor_vm_ip": last["end_vm_ip"],
        "edge_kind": edge_kind,
        "row_count": str(len(rows)),
        "exact_rows": str(len(exact_rows)),
        "decoded_rows": str(len(decoded_rows)),
        "events": str(sum(row["events_i"] for row in rows)),
        "terminal_events": str(last["events_i"]),
        "source_entries": fmt_counter(source_entries, args.max_items),
        "target_entries": fmt_counter(target_entries, args.max_items),
        "target_coverage_statuses": fmt_counter(coverage.get(last["end_i"], Counter()), args.max_items),
        "row_kinds": fmt_counter(row_kinds, args.max_items),
        "state_classes": fmt_counter(state_classes, args.max_items),
        "provenance": fmt_counter(provenance, args.max_items),
        "leader_reasons": fmt_counter(block["leader_reasons"], args.max_items),
        "terminal_kind": last["row_kind"],
        "terminal_source_entry": last["source_entry"],
        "terminal_target_entry": last["target_entry"],
        "terminal_delta": last["delta"],
        "terminal_semantic_ir": semantic_tail,
        "source_block": rows[0].get("source_block", ""),
    }


def emit_blocks(blocks, args):
    block_by_start = {block["start_i"]: block for block in blocks}
    coverage = load_coverage(args.coverage_trace)
    fields = [
        "block",
        "start_vm_ip",
        "byte_end_min",
        "terminal_vm_ip",
        "terminal_target_vm_ip",
        "successor_block",
        "successor_vm_ip",
        "edge_kind",
        "row_count",
        "exact_rows",
        "decoded_rows",
        "events",
        "terminal_events",
        "source_entries",
        "target_entries",
        "target_coverage_statuses",
        "row_kinds",
        "state_classes",
        "provenance",
        "leader_reasons",
        "terminal_kind",
        "terminal_source_entry",
        "terminal_target_entry",
        "terminal_delta",
        "terminal_semantic_ir",
        "source_block",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for block in blocks:
        writer.writerow(block_summary(block, block_by_start, coverage, args))


def emit_edges(blocks, args):
    block_by_start = {block["start_i"]: block for block in blocks}
    coverage = load_coverage(args.coverage_trace)
    fields = [
        "source_block",
        "source_start_vm_ip",
        "source_terminal_vm_ip",
        "target_block",
        "target_vm_ip",
        "edge_kind",
        "target_coverage_statuses",
        "events",
        "terminal_kind",
        "source_entry",
        "target_entry",
        "delta",
        "semantic_ir",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for block in blocks:
        last = block["rows"][-1]
        target = block_by_start.get(last["end_i"])
        edge_kind = terminal_edge_kind(last, target, coverage)
        writer.writerow({
            "source_block": block["block"],
            "source_start_vm_ip": block["start_vm_ip"],
            "source_terminal_vm_ip": last["start_vm_ip"],
            "target_block": "" if target is None else target["block"],
            "target_vm_ip": last["end_vm_ip"],
            "edge_kind": edge_kind,
            "target_coverage_statuses": fmt_counter(coverage.get(last["end_i"], Counter()), 8),
            "events": last["events"],
            "terminal_kind": last["row_kind"],
            "source_entry": last["source_entry"],
            "target_entry": last["target_entry"],
            "delta": last["delta"],
            "semantic_ir": last["semantic_ir"],
        })


def emit_markdown(blocks, args):
    block_by_start = {block["start_i"]: block for block in blocks}
    coverage = load_coverage(args.coverage_trace)
    summaries = [block_summary(block, block_by_start, coverage, args) for block in blocks]
    summaries.sort(key=lambda row: (-int(row["events"]), int(row["block"])))

    print("# VM Bytecode Basic Blocks\n")
    print(f"Recovered {len(blocks)} basic blocks from `{args.ir}`.\n")
    print(f"Top {min(args.limit, len(summaries))} blocks by aggregate event count.\n")
    print("| Events | Block | Start | Rows | Terminal | Successor | Kind | Tail IR |")
    print("| ---: | ---: | --- | ---: | --- | --- | --- | --- |")
    for summary in summaries[: args.limit]:
        successor = summary["successor_block"] or "?"
        print(
            f"| {summary['events']} | {summary['block']} | `{summary['start_vm_ip']}` | "
            f"{summary['row_count']} | `{summary['terminal_vm_ip']}` -> `{summary['terminal_target_vm_ip']}` | "
            f"{successor} | `{summary['edge_kind']}` | `{summary['terminal_semantic_ir']}` |"
        )

    print("\n## Block Listings\n")
    for summary in summaries[: args.detail_blocks]:
        block = blocks[int(summary["block"])]
        print(
            f"### Block {block['block']} `{summary['start_vm_ip']}` "
            f"events={summary['events']} rows={summary['row_count']} terminal={summary['edge_kind']}\n"
        )
        print("| VM IP | Kind | Source | Target | Delta | Events | IR |")
        print("| --- | --- | ---: | ---: | ---: | ---: | --- |")
        for row in block["rows"][: args.rows_per_block]:
            ir = row["semantic_ir"]
            if len(ir) > args.max_semantic_len:
                ir = ir[: args.max_semantic_len - 3] + "..."
            print(
                f"| `{row['start_vm_ip']}` | `{row['row_kind']}` | {row['source_entry']} | "
                f"{row['target_entry']} | `{row['delta']}` | {row['events']} | `{ir}` |"
            )
        if len(block["rows"]) > args.rows_per_block:
            print(f"\n... {len(block['rows']) - args.rows_per_block} more rows omitted.\n")
        else:
            print("")


def loop_rows(blocks):
    block_by_start = {block["start_i"]: block for block in blocks}
    loops = []
    for block in blocks:
        last = block["rows"][-1]
        target = block_by_start.get(last["end_i"])
        if target is None or target["block"] > block["block"]:
            continue
        body = blocks[target["block"]: block["block"] + 1]
        body_rows = sum(len(item["rows"]) for item in body)
        body_events = sum(row["events_i"] for item in body for row in item["rows"])
        loops.append({
            "loop": len(loops),
            "header_block": target["block"],
            "header_vm_ip": target["start_vm_ip"],
            "latch_block": block["block"],
            "latch_vm_ip": last["start_vm_ip"],
            "target_vm_ip": last["end_vm_ip"],
            "backedge_kind": last["row_kind"],
            "latch_events": last["events"],
            "body_blocks": len(body),
            "body_rows": body_rows,
            "body_events": body_events,
            "terminal_source_entry": last["source_entry"],
            "terminal_target_entry": last["target_entry"],
            "delta": last["delta"],
            "semantic_ir": last["semantic_ir"],
        })
    loops.sort(key=lambda row: (-int(row["latch_events"] or 0), row["header_block"], row["latch_block"]))
    for idx, row in enumerate(loops):
        row["loop"] = idx
    return loops


def emit_loops(blocks, args):
    fields = [
        "loop",
        "header_block",
        "header_vm_ip",
        "latch_block",
        "latch_vm_ip",
        "target_vm_ip",
        "backedge_kind",
        "latch_events",
        "body_blocks",
        "body_rows",
        "body_events",
        "terminal_source_entry",
        "terminal_target_entry",
        "delta",
        "semantic_ir",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in loop_rows(blocks):
        writer.writerow(row)


def emit_loop_markdown(blocks, args):
    rows = loop_rows(blocks)
    print("# VM Bytecode Loop Backedges\n")
    print(f"Recovered {len(rows)} block-level backedges from `{args.ir}`.\n")

    def table(title, ranked):
        print(f"## {title}\n")
        print(f"Top {min(args.limit, len(ranked))} loops.\n")
        print("| Latch Events | Body Events | Header | Latch | Body Blocks | Body Rows | Kind | IR |")
        print("| ---: | ---: | --- | --- | ---: | ---: | --- | --- |")
        for row in ranked[: args.limit]:
            ir = row["semantic_ir"]
            if len(ir) > args.max_semantic_len:
                ir = ir[: args.max_semantic_len - 3] + "..."
            print(
                f"| {row['latch_events']} | {row['body_events']} | `{row['header_vm_ip']}` b{row['header_block']} | "
                f"`{row['latch_vm_ip']}` b{row['latch_block']} -> `{row['target_vm_ip']}` | "
                f"{row['body_blocks']} | {row['body_rows']} | `{row['backedge_kind']}` | `{ir}` |"
            )
        print("")

    table("By Latch Events", rows)
    table("By Body Events", sorted(rows, key=lambda row: (-int(row["body_events"]), row["header_block"], row["latch_block"])))


def print_summary(blocks, args):
    coverage = load_coverage(args.coverage_trace)
    edge_kinds = Counter()
    terminal_kinds = Counter()
    rows = Counter()
    events = Counter()
    block_by_start = {block["start_i"]: block for block in blocks}
    for block in blocks:
        last = block["rows"][-1]
        target = block_by_start.get(last["end_i"])
        edge_kind = terminal_edge_kind(last, target, coverage)
        edge_kinds[edge_kind] += 1
        terminal_kinds[last["row_kind"]] += 1
        for row in block["rows"]:
            rows[row["row_kind"]] += 1
            events[row["row_kind"]] += row["events_i"]
    row_summary = ",".join(f"{key}:{rows[key]}/{events[key]}" for key in sorted(rows))
    edge_summary = ",".join(f"{key}:{value}" for key, value in sorted(edge_kinds.items()))
    terminal_summary = ",".join(f"{key}:{value}" for key, value in sorted(terminal_kinds.items()))
    print(
        f"basic_blocks={len(blocks)} edge_kinds={edge_summary} "
        f"terminal_kinds={terminal_summary} rows={row_summary}",
        file=sys.stderr,
    )


def main():
    parser = argparse.ArgumentParser(description="Build inspectable VM bytecode basic blocks from recovered IR rows.")
    parser.add_argument("--ir", default="dumps/vmtail-wide-1m-w16/vm_bytecode_ir.tsv")
    parser.add_argument(
        "--coverage-trace",
        default="dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv",
    )
    parser.add_argument("--edges", action="store_true")
    parser.add_argument("--loops", action="store_true")
    parser.add_argument("--markdown", action="store_true")
    parser.add_argument("--limit", type=int, default=40)
    parser.add_argument("--detail-blocks", type=int, default=12)
    parser.add_argument("--rows-per-block", type=int, default=18)
    parser.add_argument("--max-items", type=int, default=8)
    parser.add_argument("--max-semantic-len", type=int, default=180)
    args = parser.parse_args()

    rows = read_ir(args.ir)
    blocks = build_blocks(rows)
    if args.loops and args.markdown:
        emit_loop_markdown(blocks, args)
    elif args.loops:
        emit_loops(blocks, args)
    elif args.markdown:
        emit_markdown(blocks, args)
    elif args.edges:
        emit_edges(blocks, args)
    else:
        emit_blocks(blocks, args)
    print_summary(blocks, args)


if __name__ == "__main__":
    main()
