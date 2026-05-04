#!/usr/bin/env python3
import argparse
import csv
import math
from collections import Counter, defaultdict
from pathlib import Path


def parse_count_items(text):
    counts = Counter()
    if not text:
        return counts
    for item in text.split(","):
        if not item:
            continue
        key, count_s = item.rsplit(":", 1)
        counts[key] += int(count_s, 10)
    return counts


def fmt_counter(counter, max_items):
    return ",".join(f"{key}:{count}" for key, count in counter.most_common(max_items))


def entropy(counter):
    total = sum(counter.values())
    if total <= 0:
        return 0.0
    value = 0.0
    for count in counter.values():
        p = count / total
        value -= p * math.log2(p)
    return value


def load_by_int_key(path, key):
    rows = {}
    if not path.exists():
        return rows
    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            rows[int(row[key], 10)] = row
    return rows


def load_missing_exact(path):
    rows = {}
    if not path.exists():
        return rows
    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            rows[int(row["source_entry"], 10)] = row
    return rows


def constant_bytes_from_layout(layout):
    constants = []
    if not layout:
        return "-"
    for part in layout.split(";"):
        if "=" not in part:
            continue
        name, value = part.split("=", 1)
        if value.startswith("0x"):
            constants.append(f"{name}={value}")
    return ",".join(constants) or "-"


def normalized_offsets(text):
    if not text:
        return "-"
    keys = []
    for item in text.split(","):
        if not item:
            continue
        keys.append(item.rsplit(":", 1)[0])
    return ",".join(keys) or "-"


def top_delta(text):
    if not text:
        return ""
    return text.split(",", 1)[0].rsplit(":", 1)[0]


def classify_observation(handler, pattern, missing):
    if pattern is not None:
        return "exact"
    if missing is not None:
        delta = top_delta(missing.get("top_ip_deltas", ""))
        sites = missing.get("top_sites", "")
        if delta.startswith("-"):
            return "sampled_backedge"
        if "dispatch@" in sites:
            return "central_or_long"
        return "sampled_long_or_sparse"
    if int(handler.get("source_events", "0") or "0") > 0:
        return "dynamic_no_profile"
    if handler.get("observed_target") == "1":
        return "target_only"
    return "unobserved"


def semantic_key(handler, pattern, missing):
    obs = classify_observation(handler, pattern, missing)
    if pattern is not None:
        delta = pattern["delta"]
        shape = pattern["shape"]
        constants = constant_bytes_from_layout(pattern["byte_layout"])
    else:
        delta = top_delta(missing.get("top_ip_deltas", "")) if missing is not None else ""
        shape = "sampled" if missing is not None else "-"
        constants = "-"

    return (
        obs,
        delta or "-",
        shape or "-",
        constants,
        normalized_offsets(handler.get("ip_reads", "")),
        normalized_offsets(handler.get("frame_writes", "")),
        normalized_offsets(handler.get("table_reads", "")),
        handler.get("calls", "0"),
        handler.get("rets", "0"),
    )


def emit_handler_rows(handler_rows, pattern_rows, missing_rows, max_items):
    print(
        "entry\ttarget\tobservation\tevents\tunique_vm_ips\tdelta\tshape\t"
        "constant_bytes\tframe_reads\tframe_writes\tip_reads\ttable_reads\t"
        "calls\trets\ttarget_entropy\ttop_targets\ttop_sites\ttop_deltas"
    )
    for entry, handler in sorted(handler_rows.items()):
        pattern = pattern_rows.get(entry)
        missing = missing_rows.get(entry)
        obs, delta, shape, constants, ip_reads, frame_writes, table_reads, calls, rets = semantic_key(
            handler, pattern, missing
        )
        if pattern is not None:
            events = int(pattern["events"], 10)
            unique_vm_ips = int(pattern["unique_start_ips"], 10)
            targets = parse_count_items(pattern.get("top_targets", ""))
            sites = parse_count_items(pattern.get("top_sites", ""))
            deltas = Counter({pattern["delta"]: events})
        elif missing is not None:
            events = int(missing["events"], 10)
            unique_vm_ips = int(missing["unique_vm_ips"], 10)
            targets = parse_count_items(missing.get("top_targets", ""))
            sites = parse_count_items(missing.get("top_sites", ""))
            deltas = parse_count_items(missing.get("top_ip_deltas", ""))
        else:
            events = int(handler.get("source_events", "0") or "0")
            unique_vm_ips = int(handler.get("unique_vm_ips", "0") or "0")
            targets = parse_count_items(handler.get("top_targets", ""))
            sites = parse_count_items(handler.get("top_sites", ""))
            deltas = parse_count_items(handler.get("top_ip_deltas", ""))

        print(
            f"{entry}\t{handler['target']}\t{obs}\t{events}\t{unique_vm_ips}\t"
            f"{delta}\t{shape}\t{constants}\t"
            f"{normalized_offsets(handler.get('frame_reads', ''))}\t{frame_writes}\t"
            f"{ip_reads}\t{table_reads}\t{calls}\t{rets}\t{entropy(targets):.3f}\t"
            f"{fmt_counter(targets, max_items)}\t{fmt_counter(sites, max_items)}\t"
            f"{fmt_counter(deltas, max_items)}"
        )


def emit_template_rows(handler_rows, pattern_rows, missing_rows, max_items, min_events):
    templates = {}
    for entry, handler in handler_rows.items():
        pattern = pattern_rows.get(entry)
        missing = missing_rows.get(entry)
        key = semantic_key(handler, pattern, missing)
        group = templates.setdefault(
            key,
            {
                "events": 0,
                "entries": Counter(),
                "targets": Counter(),
                "sites": Counter(),
                "deltas": Counter(),
            },
        )
        if pattern is not None:
            events = int(pattern["events"], 10)
            group["targets"].update(parse_count_items(pattern.get("top_targets", "")))
            group["sites"].update(parse_count_items(pattern.get("top_sites", "")))
            group["deltas"][pattern["delta"]] += events
        elif missing is not None:
            events = int(missing["events"], 10)
            group["targets"].update(parse_count_items(missing.get("top_targets", "")))
            group["sites"].update(parse_count_items(missing.get("top_sites", "")))
            group["deltas"].update(parse_count_items(missing.get("top_ip_deltas", "")))
        else:
            events = int(handler.get("source_events", "0") or "0")
            group["targets"].update(parse_count_items(handler.get("top_targets", "")))
            group["sites"].update(parse_count_items(handler.get("top_sites", "")))
            group["deltas"].update(parse_count_items(handler.get("top_ip_deltas", "")))
        group["events"] += events
        group["entries"][f"{entry}@{handler['target']}"] += max(events, int(handler.get("target_hits", "0") or "0"))

    print(
        "observation\tdelta\tshape\tconstant_bytes\tip_reads\tframe_writes\t"
        "table_reads\tcalls\trets\tevents\tentries\ttop_entries\ttarget_entropy\t"
        "top_targets\ttop_sites\ttop_deltas"
    )
    for key, group in sorted(templates.items(), key=lambda item: (-item[1]["events"], item[0])):
        if group["events"] < min_events:
            continue
        obs, delta, shape, constants, ip_reads, frame_writes, table_reads, calls, rets = key
        print(
            f"{obs}\t{delta}\t{shape}\t{constants}\t{ip_reads}\t{frame_writes}\t"
            f"{table_reads}\t{calls}\t{rets}\t{group['events']}\t{len(group['entries'])}\t"
            f"{fmt_counter(group['entries'], max_items)}\t{entropy(group['targets']):.3f}\t"
            f"{fmt_counter(group['targets'], max_items)}\t"
            f"{fmt_counter(group['sites'], max_items)}\t"
            f"{fmt_counter(group['deltas'], max_items)}"
        )


def main():
    parser = argparse.ArgumentParser(
        description="Merge VM ISA shapes with static handler features into semantic templates."
    )
    parser.add_argument("dump_dir", nargs="?", default="dumps/vmtail-wide-1m")
    parser.add_argument("--handlers", default="vm_handler_table.tsv")
    parser.add_argument("--patterns", default="vm_isa_patterns.tsv")
    parser.add_argument("--missing-exact", default="vm_isa_missing_exact.tsv")
    parser.add_argument("--per-handler", action="store_true")
    parser.add_argument("--max-items", type=int, default=6)
    parser.add_argument("--min-events", type=int, default=1)
    args = parser.parse_args()

    dump_dir = Path(args.dump_dir)
    handler_rows = load_by_int_key(dump_dir / args.handlers, "entry")
    pattern_rows = load_by_int_key(dump_dir / args.patterns, "source_entry")
    missing_rows = load_missing_exact(dump_dir / args.missing_exact)

    if args.per_handler:
        emit_handler_rows(handler_rows, pattern_rows, missing_rows, args.max_items)
    else:
        emit_template_rows(handler_rows, pattern_rows, missing_rows, args.max_items, args.min_events)


if __name__ == "__main__":
    main()
