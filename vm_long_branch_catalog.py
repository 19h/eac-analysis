#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path


def parse_delta(text):
    if text.startswith("+0x"):
        return int(text[1:], 16)
    if text.startswith("-0x"):
        return -int(text[3:], 16)
    return int(text, 0)


def fmt_delta(value):
    sign = "+" if value >= 0 else "-"
    return f"{sign}0x{abs(value):x}"


def fmt_counter(counter, limit):
    return ",".join(f"{key}:{count}" for key, count in counter.most_common(limit))


def fmt_set(values, limit):
    if not values:
        return ""
    ordered = sorted(values, key=lambda item: int(item, 16) if item.startswith("0x") else item)
    shown = ordered[:limit]
    if len(ordered) > limit:
        shown.append(f"...+{len(ordered) - limit}")
    return ",".join(shown)


def decode_long_branch(data):
    if len(data) < 8:
        return None
    target_entry = int.from_bytes(data[0:4], "little")
    raw_delta = int.from_bytes(data[4:8], "little")
    magnitude = raw_delta & 0x7fffffff
    delta = -magnitude if raw_delta & 0x80000000 else magnitude
    return target_entry, raw_delta, delta


def target_text(entry, target):
    if entry == "" and target == "":
        return ""
    if target:
        return f"{entry}@{target}"
    return entry


def ip_update_text(delta):
    value = parse_delta(delta)
    if value >= 0:
        return f"ip += 0x{value:x}"
    return f"ip -= 0x{-value:x}"


def build_rows(args):
    eac = Path(args.eac).read_bytes() if args.eac else b""
    groups = {}
    rejected = Counter()
    file_mismatches = 0
    matched_events = 0
    total_rows = 0

    with Path(args.trace).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            total_rows += 1
            data_hex = row.get("bytes", "")
            if len(data_hex) < 16:
                rejected["short_bytes"] += 1
                continue
            try:
                data = bytes.fromhex(data_hex)
            except ValueError:
                rejected["bad_hex"] += 1
                continue
            decoded = decode_long_branch(data)
            if decoded is None:
                rejected["undecodable"] += 1
                continue
            decoded_entry, raw_delta, decoded_delta = decoded
            target_entry = int(row.get("target_entry", "-1") or "-1")
            actual_delta = parse_delta(row.get("delta", "0"))
            if decoded_entry != target_entry:
                rejected["target_mismatch"] += 1
                continue
            if decoded_delta != actual_delta:
                rejected["delta_mismatch"] += 1
                continue
            if decoded_entry < 0 or decoded_entry >= args.dispatch_entries:
                rejected["target_oob"] += 1
                continue
            start = int(row["start_vm_ip"], 16)
            if eac and eac[start:start + len(data)] != data:
                file_mismatches += 1
            matched_events += 1
            key = (
                row.get("source_entry", ""),
                row.get("source_target", ""),
                str(decoded_entry),
                row.get("target", ""),
                fmt_delta(decoded_delta),
                f"0x{decoded_entry:08x}",
                f"0x{raw_delta:08x}",
            )
            group = groups.get(key)
            if group is None:
                group = {
                    "events": 0,
                    "starts": set(),
                    "ends": set(),
                    "statuses": Counter(),
                    "sites": Counter(),
                    "prefixes": Counter(),
                    "source_targets": Counter(),
                }
                groups[key] = group
            group["events"] += 1
            group["starts"].add(row.get("start_vm_ip", ""))
            group["ends"].add(row.get("end_vm_ip", ""))
            group["statuses"][row.get("byte_status", "")] += 1
            group["sites"][row.get("site", "")] += 1
            group["prefixes"][data[: args.prefix_bytes].hex()] += 1
            group["source_targets"][target_text(row.get("target_entry", ""), row.get("target", ""))] += 1

    rows = []
    for key, group in groups.items():
        source_entry, source_target, target_entry, target, delta, raw_target, raw_delta = key
        direction = "backedge" if delta.startswith("-") else "forward"
        rows.append({
            "source_entry": source_entry,
            "source_target": source_target,
            "target_entry": target_entry,
            "target": target,
            "delta": delta,
            "direction": direction,
            "events": str(group["events"]),
            "unique_start_ips": str(len(group["starts"])),
            "unique_end_ips": str(len(group["ends"])),
            "byte_statuses": fmt_counter(group["statuses"], args.max_items),
            "sites": fmt_counter(group["sites"], args.max_items),
            "start_ips": fmt_set(group["starts"], args.max_items),
            "end_ips": fmt_set(group["ends"], args.max_items),
            "raw_target_u32": raw_target,
            "raw_delta_u32": raw_delta,
            "format": "target_u32_delta_u32",
            "lifted_ir": f"next = table[{target_entry}]; {ip_update_text(delta)}",
            "top_prefixes": fmt_counter(group["prefixes"], args.max_items),
        })

    rows.sort(key=lambda row: (-int(row["events"]), int(row["source_entry"]), row["delta"], int(row["target_entry"])))
    stats = {
        "trace_rows": total_rows,
        "matched_events": matched_events,
        "matched_rows": len(rows),
        "file_mismatches": file_mismatches,
        "rejected": rejected,
    }
    return rows, stats


def emit_tsv(rows):
    fields = [
        "source_entry",
        "source_target",
        "target_entry",
        "target",
        "delta",
        "direction",
        "events",
        "unique_start_ips",
        "unique_end_ips",
        "byte_statuses",
        "sites",
        "start_ips",
        "end_ips",
        "raw_target_u32",
        "raw_delta_u32",
        "format",
        "lifted_ir",
        "top_prefixes",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    writer.writerows(rows)


def emit_markdown(rows, stats, limit):
    print("# VM Long Branch Catalog")
    print()
    print(f"- trace rows: `{stats['trace_rows']}`")
    print(f"- matched events: `{stats['matched_events']}`")
    print(f"- catalog rows: `{stats['matched_rows']}`")
    print(f"- file byte mismatches: `{stats['file_mismatches']}`")
    rejected = ",".join(f"{key}:{value}" for key, value in stats["rejected"].most_common())
    print(f"- rejected candidates: `{rejected}`")
    print()
    print("| Source | Target | Delta | Events | Starts | Statuses | Lift |")
    print("| ---: | ---: | ---: | ---: | ---: | --- | --- |")
    for row in rows[:limit]:
        print(
            f"| {row['source_entry']} | {row['target_entry']} | `{row['delta']}` | "
            f"{row['events']} | {row['unique_start_ips']} | `{row['byte_statuses']}` | "
            f"`{row['lifted_ir']}` |"
        )


def main():
    parser = argparse.ArgumentParser(
        description="Catalog VM bytecode rows whose first u32 encodes target entry and second u32 encodes signed VM-IP delta."
    )
    parser.add_argument("trace", nargs="?", default="dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--dispatch-entries", type=int, default=360)
    parser.add_argument("--prefix-bytes", type=int, default=16)
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
