#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter
from pathlib import Path


def parse_signed_hex(text):
    if text.startswith("+0x"):
        return int(text[1:], 16)
    if text.startswith("-0x"):
        return -int(text[3:], 16)
    return int(text, 0)


def load_segments(path):
    segments = []
    with Path(path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            segments.append({
                "idx": row["segment"],
                "start": int(row["start"], 16),
                "end": int(row["end"], 16),
            })
    return sorted(segments, key=lambda row: (row["start"], row["end"]))


def find_segment(segments, offset):
    lo = 0
    hi = len(segments)
    while lo < hi:
        mid = (lo + hi) // 2
        if segments[mid]["end"] <= offset:
            lo = mid + 1
        else:
            hi = mid
    if lo < len(segments):
        segment = segments[lo]
        if segment["start"] <= offset < segment["end"]:
            return segment
    return None


def fmt_segment(segment, offset=""):
    if segment is None:
        return ""
    suffix = ""
    if offset != "":
        suffix = f"+0x{offset - segment['start']:x}"
    return f"{segment['idx']}@0x{segment['start']:x}-0x{segment['end']:x}{suffix}"


def fmt_counter(counter, max_items):
    items = counter.most_common(max_items)
    suffix = f",...+{len(counter) - len(items)}" if len(counter) > len(items) else ""
    return ",".join(f"{key}:{value}" for key, value in items) + suffix


def split_hexes(text):
    if not text:
        return []
    return [int(item, 16) for item in text.split(",") if item]


def edge_kind(prefix, delta):
    if delta < 0:
        return f"{prefix}_backedge"
    return f"{prefix}_forward"


def load_catalog(path, kind, segments, max_items):
    rows = []
    if not path or not Path(path).exists():
        return rows
    with Path(path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            starts = split_hexes(row.get("start_ips", ""))
            ends = split_hexes(row.get("end_ips", ""))
            delta = parse_signed_hex(row.get("delta", "0"))
            source_blocks = Counter()
            target_blocks = Counter()
            source_sites = Counter()
            target_sites = Counter()
            missing_start = 0
            missing_end = 0

            for start in starts:
                segment = find_segment(segments, start)
                if segment is None:
                    missing_start += 1
                    continue
                source_blocks[fmt_segment(segment)] += 1
                source_sites[fmt_segment(segment, start)] += 1
            for end in ends:
                segment = find_segment(segments, end)
                if segment is None:
                    missing_end += 1
                    continue
                target_blocks[fmt_segment(segment)] += 1
                target_sites[fmt_segment(segment, end)] += 1

            byte_statuses = row.get("byte_statuses", "")
            if not byte_statuses:
                byte_statuses = row.get("operand_statuses", "")
            rows.append({
                "kind": edge_kind(kind, delta),
                "source_entry": row.get("source_entry", ""),
                "source_target": row.get("source_target", ""),
                "target_entry": row.get("target_entry", ""),
                "target": row.get("target", ""),
                "delta": row.get("delta", ""),
                "events": int(row.get("events", "0") or 0),
                "unique_start_ips": row.get("unique_start_ips", ""),
                "unique_end_ips": row.get("unique_end_ips", ""),
                "source_blocks": fmt_counter(source_blocks, max_items),
                "target_blocks": fmt_counter(target_blocks, max_items),
                "source_sites": fmt_counter(source_sites, max_items),
                "target_sites": fmt_counter(target_sites, max_items),
                "missing_start_ips": str(missing_start),
                "missing_end_ips": str(missing_end),
                "byte_statuses": byte_statuses,
                "operand_min_len": row.get("operand_min_len", ""),
                "operand_shape": row.get("operand_shape", ""),
                "lifted_ir": row.get("lifted_ir", ""),
            })
    return rows


def emit_tsv(rows):
    fields = [
        "kind",
        "source_entry",
        "source_target",
        "target_entry",
        "target",
        "delta",
        "events",
        "unique_start_ips",
        "unique_end_ips",
        "source_blocks",
        "target_blocks",
        "source_sites",
        "target_sites",
        "missing_start_ips",
        "missing_end_ips",
        "byte_statuses",
        "operand_min_len",
        "operand_shape",
        "lifted_ir",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        out = dict(row)
        out["events"] = str(out["events"])
        writer.writerow(out)


def emit_markdown(rows, limit):
    print("# VM Decoded Control Edges\n")
    print(f"Top {min(limit, len(rows))} decoded non-exact VM control edges.\n")
    print("| Events | Kind | Source | Target | Delta | Source Blocks | Target Blocks | Lift |")
    print("| ---: | --- | ---: | ---: | ---: | --- | --- | --- |")
    for row in rows[:limit]:
        print(
            f"| {row['events']} | `{row['kind']}` | {row['source_entry']} | "
            f"{row['target_entry']} | `{row['delta']}` | `{row['source_blocks']}` | "
            f"`{row['target_blocks']}` | `{row['lifted_ir']}` |"
        )


def main():
    parser = argparse.ArgumentParser(
        description="Build decoded VM control-flow edges from long-branch and sampled-operand sidecars."
    )
    parser.add_argument(
        "--segments",
        default="dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_frontierfill_footprintfill_sampled.tsv",
    )
    parser.add_argument("--long-branches", default="dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv")
    parser.add_argument("--sampled-operands", default="dumps/vmtail-wide-1m-w16/vm_sampled_operand_catalog.tsv")
    parser.add_argument("--max-items", type=int, default=6)
    parser.add_argument("--markdown", action="store_true")
    parser.add_argument("--limit", type=int, default=40)
    args = parser.parse_args()

    segments = load_segments(args.segments)
    rows = []
    rows.extend(load_catalog(args.long_branches, "long_branch", segments, args.max_items))
    rows.extend(load_catalog(args.sampled_operands, "sampled_operand", segments, args.max_items))
    rows.sort(key=lambda row: (-row["events"], row["kind"], int(row["source_entry"] or 0), row["delta"]))

    if args.markdown:
        emit_markdown(rows, args.limit)
    else:
        emit_tsv(rows)

    missing_starts = sum(int(row["missing_start_ips"]) for row in rows)
    missing_ends = sum(int(row["missing_end_ips"]) for row in rows)
    print(
        f"control_edges={len(rows)} events={sum(row['events'] for row in rows)} "
        f"missing_start_ips={missing_starts} missing_end_ips={missing_ends}",
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
