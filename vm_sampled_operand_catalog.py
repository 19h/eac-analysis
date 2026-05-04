#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter
from pathlib import Path


def parse_delta(text):
    if text.startswith("+0x"):
        return int(text[1:], 16)
    if text.startswith("-0x"):
        return -int(text[3:], 16)
    return int(text, 0)


def fmt_counter(counter, limit):
    return ",".join(f"{key}:{count}" for key, count in counter.most_common(limit))


def fmt_set(values, limit):
    ordered = sorted(values, key=lambda item: int(item, 16) if item.startswith("0x") else item)
    shown = ordered[:limit]
    if len(ordered) > limit:
        shown.append(f"...+{len(ordered) - limit}")
    return ",".join(shown)


def parse_ip_reads(text):
    reads = []
    for item in (text or "").split(","):
        if not item:
            continue
        if "/" not in item:
            continue
        offset_s, size_s = item.split("/", 1)
        try:
            reads.append((int(offset_s, 0), int(size_s, 0)))
        except ValueError:
            pass
    return reads


def field_name(offset, size):
    if size == 1:
        return f"b{offset}"
    if size == 2:
        return f"u16_{offset}"
    if size == 4:
        return f"u32_{offset}"
    return f"bytes{size}_{offset}"


def load_operand_shapes(path):
    shapes = {}
    with Path(path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            entry = row.get("entry", "")
            if not entry:
                continue
            reads = parse_ip_reads(row.get("ip_reads", ""))
            if not reads:
                continue
            min_len = max(offset + size for offset, size in reads)
            shape = ",".join(f"{field_name(offset, size)}@+0x{offset:x}" for offset, size in sorted(set(reads)))
            shapes[entry] = {
                "min_len": min_len,
                "shape": shape,
                "observation": row.get("observation", ""),
            }
    return shapes


def load_long_branch_keys(path):
    keys = set()
    if not path:
        return keys
    path = Path(path)
    if not path.exists():
        return keys
    with path.open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            key = (row.get("source_entry", ""), row.get("target_entry", ""), row.get("delta", ""))
            if all(key):
                keys.add(key)
    return keys


def build_rows(args):
    eac = Path(args.eac).read_bytes() if args.eac else b""
    shapes = load_operand_shapes(args.handler_semantics)
    long_keys = load_long_branch_keys(args.long_branches)
    groups = {}
    rejected = Counter()
    total_rows = 0
    matched_events = 0
    operand_mismatches = 0

    with Path(args.trace).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            total_rows += 1
            status = row.get("byte_status", "")
            if status == "exact":
                rejected["exact"] += 1
                continue
            if not (status.startswith("prefix_") or status.startswith("backedge")):
                rejected["other_status"] += 1
                continue
            key3 = (row.get("source_entry", ""), row.get("target_entry", ""), row.get("delta", ""))
            if key3 in long_keys:
                rejected["long_branch"] += 1
                continue
            shape = shapes.get(row.get("source_entry", ""))
            if not shape:
                rejected["no_static_shape"] += 1
                continue
            try:
                data = bytes.fromhex(row.get("bytes", ""))
            except ValueError:
                rejected["bad_hex"] += 1
                continue
            min_len = shape["min_len"]
            if len(data) < min_len:
                rejected["short_operand"] += 1
                continue
            start = int(row["start_vm_ip"], 16)
            operand_data = data[:min_len]
            status_text = "not_checked"
            if eac:
                status_text = "file_match" if eac[start:start + min_len] == operand_data else "file_mismatch"
                if status_text == "file_mismatch":
                    operand_mismatches += 1
            key = (
                row.get("source_entry", ""),
                row.get("source_target", ""),
                row.get("target_entry", ""),
                row.get("target", ""),
                row.get("delta", ""),
                f"0x{min_len:x}",
                shape["shape"],
            )
            group = groups.setdefault(key, {
                "events": 0,
                "starts": set(),
                "ends": set(),
                "statuses": Counter(),
                "sites": Counter(),
                "operand_statuses": Counter(),
                "operand_bytes": Counter(),
                "prefixes": Counter(),
                "observations": Counter(),
            })
            matched_events += 1
            group["events"] += 1
            group["starts"].add(row.get("start_vm_ip", ""))
            group["ends"].add(row.get("end_vm_ip", ""))
            group["statuses"][status] += 1
            group["sites"][f"{row.get('kind', '')}@{row.get('site', '')}"] += 1
            group["operand_statuses"][status_text] += 1
            group["operand_bytes"][operand_data.hex()] += 1
            group["prefixes"][data[: args.prefix_bytes].hex()] += 1
            group["observations"][shape.get("observation", "")] += 1

    rows = []
    for key, group in groups.items():
        source_entry, source_target, target_entry, target, delta, operand_min_len, operand_shape = key
        rows.append({
            "source_entry": source_entry,
            "source_target": source_target,
            "target_entry": target_entry,
            "target": target,
            "delta": delta,
            "events": str(group["events"]),
            "unique_start_ips": str(len(group["starts"])),
            "unique_end_ips": str(len(group["ends"])),
            "byte_statuses": fmt_counter(group["statuses"], args.max_items),
            "sites": fmt_counter(group["sites"], args.max_items),
            "start_ips": fmt_set(group["starts"], args.max_items),
            "end_ips": fmt_set(group["ends"], args.max_items),
            "source_observations": fmt_counter(group["observations"], args.max_items),
            "operand_min_len": operand_min_len,
            "operand_shape": operand_shape,
            "operand_statuses": fmt_counter(group["operand_statuses"], args.max_items),
            "top_operand_bytes": fmt_counter(group["operand_bytes"], args.max_items),
            "top_prefixes": fmt_counter(group["prefixes"], args.max_items),
            "lifted_ir": f"sampled operand footprint {operand_min_len}; observed target table[{target_entry}], delta {delta}",
        })
    rows.sort(key=lambda row: (-int(row["events"]), int(row["source_entry"]), row["delta"], int(row["target_entry"])))
    stats = {
        "trace_rows": total_rows,
        "matched_events": matched_events,
        "catalog_rows": len(rows),
        "operand_mismatches": operand_mismatches,
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
        "events",
        "unique_start_ips",
        "unique_end_ips",
        "byte_statuses",
        "sites",
        "start_ips",
        "end_ips",
        "source_observations",
        "operand_min_len",
        "operand_shape",
        "operand_statuses",
        "top_operand_bytes",
        "top_prefixes",
        "lifted_ir",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    writer.writerows(rows)


def emit_markdown(rows, stats, limit):
    print("# VM Sampled Operand Catalog")
    print()
    print(f"- trace rows: `{stats['trace_rows']}`")
    print(f"- matched events: `{stats['matched_events']}`")
    print(f"- catalog rows: `{stats['catalog_rows']}`")
    print(f"- operand byte mismatches: `{stats['operand_mismatches']}`")
    rejected = ",".join(f"{key}:{value}" for key, value in stats["rejected"].most_common())
    print(f"- rejected rows: `{rejected}`")
    print()
    print("| Source | Target | Delta | Events | Footprint | Statuses | Lift |")
    print("| ---: | ---: | ---: | ---: | ---: | --- | --- |")
    for row in rows[:limit]:
        print(
            f"| {row['source_entry']} | {row['target_entry']} | `{row['delta']}` | "
            f"{row['events']} | `{row['operand_min_len']}` | `{row['byte_statuses']}` | "
            f"`{row['lifted_ir']}` |"
        )


def main():
    parser = argparse.ArgumentParser(
        description="Catalog sampled non-long-branch rows with byte-verified static operand footprints."
    )
    parser.add_argument("trace", nargs="?", default="dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--handler-semantics", default="dumps/vmtail-wide-1m-w16/vm_handler_semantics.tsv")
    parser.add_argument("--long-branches", default="dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv")
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
