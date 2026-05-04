#!/usr/bin/env python3
import argparse
import csv
import hashlib
import sys
from collections import Counter
from pathlib import Path


def fmt_delta(value):
    sign = "+" if value >= 0 else "-"
    return f"{sign}0x{abs(value):x}"


def fmt_counter(counter, limit):
    return ",".join(f"{key}:{count}" for key, count in counter.most_common(limit))


def fmt_set(values, limit):
    ordered = sorted(values, key=lambda item: int(item, 16) if item.startswith("0x") else item)
    shown = ordered[:limit]
    if len(ordered) > limit:
        shown.append(f"...+{len(ordered) - limit}")
    return ",".join(shown)


def load_semantics(path):
    rows = {}
    if not path:
        return rows
    path = Path(path)
    if not path.exists():
        return rows
    with path.open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            entry = row.get("entry", "")
            if entry:
                rows[entry] = row
    return rows


def build_rows(args):
    eac = Path(args.eac).read_bytes() if args.eac else b""
    semantics = load_semantics(args.handler_semantics)
    groups = {}
    rejected = Counter()
    total_pairs = 0
    matched_events = 0
    previous = None

    with Path(args.trace).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            if previous is None:
                previous = row
                continue
            total_pairs += 1
            prev = previous
            previous = row

            if prev.get("frame") != row.get("frame"):
                rejected["frame_change"] += 1
                continue
            hidden_source = prev.get("target_entry", "")
            observed_next = row.get("source_entry", "")
            if hidden_source == observed_next:
                rejected["directly_observed"] += 1
                continue
            try:
                start = int(prev["end_vm_ip"], 16)
                end = int(row["start_vm_ip"], 16)
            except (KeyError, ValueError):
                rejected["bad_ip"] += 1
                continue
            delta = end - start
            if delta <= 0:
                rejected["non_positive_delta"] += 1
                continue
            if delta > args.max_delta:
                rejected["too_large"] += 1
                continue

            data = eac[start:end] if eac else b""
            if eac and len(data) != delta:
                rejected["file_oob"] += 1
                continue

            semantic = semantics.get(hidden_source, {})
            key = (
                hidden_source,
                prev.get("target", ""),
                observed_next,
                row.get("source_target", ""),
                fmt_delta(delta),
            )
            group = groups.get(key)
            if group is None:
                group = {
                    "events": 0,
                    "starts": set(),
                    "ends": set(),
                    "prev_sources": Counter(),
                    "prev_sites": Counter(),
                    "next_targets": Counter(),
                    "bytes": Counter(),
                    "statuses": Counter(),
                    "source_observations": Counter(),
                    "ip_reads": Counter(),
                }
                groups[key] = group

            matched_events += 1
            group["events"] += 1
            group["starts"].add(f"0x{start:x}")
            group["ends"].add(f"0x{end:x}")
            group["prev_sources"][prev.get("source_entry", "")] += 1
            group["prev_sites"][f"{prev.get('kind', '')}@{prev.get('site', '')}"] += 1
            group["next_targets"][row.get("target_entry", "")] += 1
            if data:
                group["bytes"][data.hex()] += 1
                group["statuses"]["file_backed"] += 1
            else:
                group["statuses"]["not_file_checked"] += 1
            group["source_observations"][semantic.get("observation", "unknown")] += 1
            if semantic.get("ip_reads"):
                group["ip_reads"][semantic["ip_reads"]] += 1

    rows = []
    for key, group in groups.items():
        hidden_source, hidden_source_target, hidden_target, hidden_target_addr, delta = key
        top_bytes = group["bytes"].most_common(1)
        top_hash = hashlib.sha256(bytes.fromhex(top_bytes[0][0])).hexdigest() if top_bytes else ""
        rows.append({
            "hidden_source_entry": hidden_source,
            "hidden_source_target": hidden_source_target,
            "hidden_target_entry": hidden_target,
            "hidden_target": hidden_target_addr,
            "delta": delta,
            "events": str(group["events"]),
            "unique_start_ips": str(len(group["starts"])),
            "unique_end_ips": str(len(group["ends"])),
            "statuses": fmt_counter(group["statuses"], args.max_items),
            "source_observations": fmt_counter(group["source_observations"], args.max_items),
            "prev_sources": fmt_counter(group["prev_sources"], args.max_items),
            "prev_sites": fmt_counter(group["prev_sites"], args.max_items),
            "next_targets": fmt_counter(group["next_targets"], args.max_items),
            "start_ips": fmt_set(group["starts"], args.max_items),
            "end_ips": fmt_set(group["ends"], args.max_items),
            "top_ip_reads": fmt_counter(group["ip_reads"], args.max_items),
            "top_bytes": fmt_counter(group["bytes"], args.max_items),
            "top_sha256": top_hash,
            "inference": "adjacent_unhooked_span",
            "lifted_ir": f"inferred table[{hidden_source}] -> table[{hidden_target}], ip += {delta}",
        })

    rows.sort(key=lambda row: (-int(row["events"]), int(row["hidden_source_entry"]), row["delta"], int(row["hidden_target_entry"])))
    stats = {
        "trace_pairs": total_pairs,
        "matched_events": matched_events,
        "catalog_rows": len(rows),
        "rejected": rejected,
    }
    return rows, stats


def emit_tsv(rows):
    fields = [
        "hidden_source_entry",
        "hidden_source_target",
        "hidden_target_entry",
        "hidden_target",
        "delta",
        "events",
        "unique_start_ips",
        "unique_end_ips",
        "statuses",
        "source_observations",
        "prev_sources",
        "prev_sites",
        "next_targets",
        "start_ips",
        "end_ips",
        "top_ip_reads",
        "top_bytes",
        "top_sha256",
        "inference",
        "lifted_ir",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    writer.writerows(rows)


def emit_markdown(rows, stats, limit):
    print("# VM Hidden Transition Catalog")
    print()
    print(f"- trace pairs: `{stats['trace_pairs']}`")
    print(f"- inferred hidden-span events: `{stats['matched_events']}`")
    print(f"- catalog rows: `{stats['catalog_rows']}`")
    rejected = ",".join(f"{key}:{value}" for key, value in stats["rejected"].most_common())
    print(f"- rejected pairs: `{rejected}`")
    print()
    print("| Hidden Source | Next Hooked Source | Delta | Events | Starts | Observation | Lift |")
    print("| ---: | ---: | ---: | ---: | ---: | --- | --- |")
    for row in rows[:limit]:
        print(
            f"| {row['hidden_source_entry']} | {row['hidden_target_entry']} | `{row['delta']}` | "
            f"{row['events']} | {row['unique_start_ips']} | `{row['source_observations']}` | "
            f"`{row['lifted_ir']}` |"
        )


def main():
    parser = argparse.ArgumentParser(
        description="Infer file-backed VM spans between adjacent trace rows when the previous target handler is not itself hooked."
    )
    parser.add_argument("trace", nargs="?", default="dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--handler-semantics", default="dumps/vmtail-wide-1m-w16/vm_handler_semantics.tsv")
    parser.add_argument("--max-delta", type=lambda value: int(value, 0), default=0x400)
    parser.add_argument("--max-items", type=int, default=8)
    parser.add_argument("--markdown", action="store_true")
    parser.add_argument("--limit", type=int, default=30)
    args = parser.parse_args()

    rows, stats = build_rows(args)
    if args.markdown:
        emit_markdown(rows, stats, args.limit)
    else:
        emit_tsv(rows)


if __name__ == "__main__":
    main()
