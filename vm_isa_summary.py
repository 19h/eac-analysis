#!/usr/bin/env python3
import argparse
import csv
import math
import sys
from collections import Counter, defaultdict
from pathlib import Path


def parse_signed_hex(text):
    if text.startswith("+0x"):
        return int(text[1:], 16)
    if text.startswith("-0x"):
        return -int(text[3:], 16)
    return int(text, 0)


def format_signed_hex(value):
    sign = "-" if value < 0 else "+"
    return f"{sign}0x{abs(value):x}"


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


def fmt_hex_counter(counter, max_items):
    return ",".join(f"0x{key:x}:{count}" for key, count in counter.most_common(max_items))


def pct(part, total):
    if not total:
        return "0.0"
    return f"{part * 100.0 / total:.1f}"


def entropy(counter):
    total = sum(counter.values())
    if total <= 0:
        return 0.0
    value = 0.0
    for count in counter.values():
        p = count / total
        value -= p * math.log2(p)
    return value


def byte_layout(byte_counters, total, max_items, enum_limit, max_positions):
    parts = []
    for pos in range(min(len(byte_counters), max_positions)):
        counts = byte_counters[pos]
        if not counts:
            continue
        distinct = len(counts)
        top_value, top_count = counts.most_common(1)[0]
        if distinct == 1:
            parts.append(f"b{pos}=0x{top_value:02x}")
        elif distinct <= enum_limit:
            vals = ",".join(f"0x{value:02x}:{count}" for value, count in counts.most_common(max_items))
            parts.append(f"b{pos}=enum{distinct}({vals})")
        else:
            parts.append(f"b{pos}=var{distinct}(top=0x{top_value:02x}:{pct(top_count, total)}%)")
    if len(byte_counters) > max_positions:
        parts.append(f"...+{len(byte_counters) - max_positions}")
    return ";".join(parts)


def layout_shape(counters, total, enum_limit):
    shape = []
    for counts in counters:
        distinct = len(counts)
        if distinct == 0:
            shape.append("-")
            continue
        top_count = counts.most_common(1)[0][1]
        if distinct == 1:
            shape.append("C")
        elif distinct <= enum_limit:
            shape.append("E")
        elif total and top_count / total >= 0.90:
            shape.append("M")
        else:
            shape.append("V")
    return "".join(shape)


def word_layout(word_counters, total, max_items, enum_limit):
    parts = []
    for word_idx in sorted(word_counters):
        counts = word_counters[word_idx]
        distinct = len(counts)
        top_value, top_count = counts.most_common(1)[0]
        if distinct == 1:
            parts.append(f"w{word_idx}=0x{top_value:04x}")
        elif distinct <= enum_limit:
            vals = ",".join(f"0x{value:04x}:{count}" for value, count in counts.most_common(max_items))
            parts.append(f"w{word_idx}=enum{distinct}({vals})")
        else:
            parts.append(f"w{word_idx}=var{distinct}(top=0x{top_value:04x}:{pct(top_count, total)}%)")
    return ";".join(parts)


def constant_byte_key(byte_counters):
    parts = []
    for pos, counts in enumerate(byte_counters):
        if len(counts) == 1:
            value = next(iter(counts))
            parts.append(f"b{pos}=0x{value:02x}")
    return ",".join(parts) or "-"


def add_bytes(group, byte_data, weight):
    group["byte_values"].update({byte_data.hex(): weight})
    for pos, value in enumerate(byte_data):
        while len(group["byte_counters"]) <= pos:
            group["byte_counters"].append(Counter())
        group["byte_counters"][pos][value] += weight
    for word_idx, pos in enumerate(range(0, len(byte_data) - 1, 2)):
        value = byte_data[pos] | (byte_data[pos + 1] << 8)
        group["word_counters"][word_idx][value] += weight


def new_group():
    return {
        "events": 0,
        "starts": set(),
        "signatures": 0,
        "deltas": Counter(),
        "targets": Counter(),
        "sites": Counter(),
        "end_ips": Counter(),
        "byte_values": Counter(),
        "byte_counters": [],
        "word_counters": defaultdict(Counter),
    }


def load_groups(path):
    handlers = {}
    patterns = {}
    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            if row.get("byte_status") != "exact":
                continue
            count = int(row["count"], 10)
            delta = parse_signed_hex(row["delta"])
            source = int(row["source_entry"], 10)
            source_target = row["source_target"]
            byte_data = bytes.fromhex(row["bytes"])
            if len(byte_data) != delta:
                raise ValueError(f"mismatched exact bytes at {row['start_vm_ip']}")

            for key, store in (
                ((source, source_target), handlers),
                ((source, source_target, delta), patterns),
            ):
                group = store.setdefault(key, new_group())
                group["events"] += count
                group["starts"].add(row["start_vm_ip"])
                group["signatures"] += 1
                group["deltas"][delta] += count
                group["targets"].update(parse_count_items(row["top_targets"]))
                group["sites"].update(parse_count_items(row["top_sites"]))
                group["end_ips"].update(parse_count_items(row["top_end_ips"]))
                add_bytes(group, byte_data, count)

    return handlers, patterns


def dominant_pattern_for_handler(patterns, source, source_target):
    candidates = [
        (delta, group)
        for (entry, target, delta), group in patterns.items()
        if entry == source and target == source_target
    ]
    if not candidates:
        return None, None
    return max(candidates, key=lambda item: item[1]["events"])


def emit_handlers(handlers, patterns, max_items, enum_limit, max_positions, min_events):
    print(
        "source_entry\tsource_target\tevents\tunique_start_ips\tunique_signatures\t"
        "top_deltas\tdominant_delta\tdominant_delta_pct\tdominant_shape\t"
        "dominant_word_shape\ttarget_entropy\ttop_targets\ttop_sites\ttop_bytes"
    )
    for (source, source_target), group in sorted(
        handlers.items(), key=lambda item: (-item[1]["events"], item[0][0])
    ):
        if group["events"] < min_events:
            continue
        dominant_delta, dominant_group = dominant_pattern_for_handler(patterns, source, source_target)
        if dominant_group is None:
            dominant_delta_s = ""
            dominant_delta_pct = "0.0"
            dominant_shape = ""
            word_shape = ""
        else:
            dominant_delta_s = format_signed_hex(dominant_delta)
            dominant_delta_pct = pct(dominant_group["events"], group["events"])
            dominant_shape = layout_shape(dominant_group["byte_counters"], dominant_group["events"], enum_limit)
            word_shape = layout_shape(
                [dominant_group["word_counters"][idx] for idx in sorted(dominant_group["word_counters"])],
                dominant_group["events"],
                enum_limit,
            )

        print(
            f"{source}\t{source_target}\t{group['events']}\t{len(group['starts'])}\t"
            f"{group['signatures']}\t"
            f"{fmt_counter(Counter({format_signed_hex(k): v for k, v in group['deltas'].items()}), max_items)}\t"
            f"{dominant_delta_s}\t{dominant_delta_pct}\t{dominant_shape}\t{word_shape}\t"
            f"{entropy(group['targets']):.3f}\t{fmt_counter(group['targets'], max_items)}\t"
            f"{fmt_counter(group['sites'], max_items)}\t{fmt_counter(group['byte_values'], max_items)}"
        )


def emit_patterns(handlers, patterns, max_items, enum_limit, max_positions, min_events):
    print(
        "source_entry\tsource_target\tdelta\tevents\tsource_event_pct\t"
        "unique_start_ips\tunique_signatures\tshape\tword_shape\ttarget_entropy\t"
        "top_targets\ttop_sites\ttop_byte_values\tbyte_layout\tword_layout"
    )
    for (source, source_target, delta), group in sorted(
        patterns.items(), key=lambda item: (-item[1]["events"], item[0][0], item[0][2])
    ):
        if group["events"] < min_events:
            continue
        handler_total = handlers[(source, source_target)]["events"]
        shape = layout_shape(group["byte_counters"], group["events"], enum_limit)
        word_shape_s = layout_shape(
            [group["word_counters"][idx] for idx in sorted(group["word_counters"])],
            group["events"],
            enum_limit,
        )
        print(
            f"{source}\t{source_target}\t{format_signed_hex(delta)}\t{group['events']}\t"
            f"{pct(group['events'], handler_total)}\t{len(group['starts'])}\t"
            f"{group['signatures']}\t{shape}\t{word_shape_s}\t"
            f"{entropy(group['targets']):.3f}\t{fmt_counter(group['targets'], max_items)}\t"
            f"{fmt_counter(group['sites'], max_items)}\t{fmt_counter(group['byte_values'], max_items)}\t"
            f"{byte_layout(group['byte_counters'], group['events'], max_items, enum_limit, max_positions)}\t"
            f"{word_layout(group['word_counters'], group['events'], max_items, enum_limit)}"
        )


def emit_families(patterns, max_items, enum_limit, min_events):
    families = {}
    for (source, source_target, delta), group in patterns.items():
        shape = layout_shape(group["byte_counters"], group["events"], enum_limit)
        const_key = constant_byte_key(group["byte_counters"])
        key = (delta, shape, const_key)
        family = families.setdefault(
            key,
            {
                "events": 0,
                "entries": Counter(),
                "targets": Counter(),
                "sites": Counter(),
                "signatures": 0,
            },
        )
        family["events"] += group["events"]
        family["entries"][f"{source}@{source_target}"] += group["events"]
        family["targets"].update(group["targets"])
        family["sites"].update(group["sites"])
        family["signatures"] += group["signatures"]

    print(
        "delta\tshape\tconstant_bytes\tevents\tentries\tunique_signatures\t"
        "top_entries\ttop_targets\ttop_sites"
    )
    for (delta, shape, const_key), family in sorted(
        families.items(), key=lambda item: (-item[1]["events"], item[0][0], item[0][1])
    ):
        if family["events"] < min_events:
            continue
        print(
            f"{format_signed_hex(delta)}\t{shape}\t{const_key}\t{family['events']}\t"
            f"{len(family['entries'])}\t{family['signatures']}\t"
            f"{fmt_counter(family['entries'], max_items)}\t"
            f"{fmt_counter(family['targets'], max_items)}\t"
            f"{fmt_counter(family['sites'], max_items)}"
        )


def emit_missing_exact(source_profile_path, handlers):
    exact_sources = {str(source) for source, _source_target in handlers}
    missing = 0
    events = 0
    print(
        "source_entry\tsource_target\tevents\tunique_vm_ips\ttop_sites\t"
        "top_targets\ttop_ip_deltas\ttop_w0\ttop_w1\ttop_w2\ttop_w3\ttop_w4\ttop_w5"
    )
    with source_profile_path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            if row["source_entry"] in exact_sources:
                continue
            missing += 1
            events += int(row["count"], 10)
            print(
                f"{row['source_entry']}\t{row['source_target']}\t{row['count']}\t"
                f"{row['unique_vm_ips']}\t{row['top_sites']}\t{row['top_targets']}\t"
                f"{row['top_ip_deltas']}\t{row['top_w0']}\t{row['top_w1']}\t"
                f"{row['top_w2']}\t{row['top_w3']}\t{row['top_w4']}\t{row['top_w5']}"
            )
    print(f"# missing_exact_sources={missing} events={events}", file=sys.stderr, flush=True)


def main():
    parser = argparse.ArgumentParser(
        description="Summarize recovered exact VM instruction signatures into handler and operand-shape clusters."
    )
    parser.add_argument("unique", nargs="?", default="dumps/vmtail-wide/vm_instruction_unique.tsv")
    parser.add_argument("--patterns", action="store_true", help="emit one row per source handler and byte length")
    parser.add_argument("--families", action="store_true", help="emit families grouped by byte length, shape, and constants")
    parser.add_argument("--max-items", type=int, default=6)
    parser.add_argument("--max-positions", type=int, default=12)
    parser.add_argument("--enum-limit", type=int, default=8)
    parser.add_argument("--min-events", type=int, default=1)
    parser.add_argument("--source-profile", type=Path)
    parser.add_argument("--missing-exact", action="store_true", help="emit dynamic source handlers with no exact schema")
    args = parser.parse_args()

    handlers, patterns = load_groups(Path(args.unique))
    print(
        f"# handlers={len(handlers)} patterns={len(patterns)}",
        file=sys.stderr,
        flush=True,
    )
    if args.missing_exact:
        if args.source_profile is None:
            raise SystemExit("--missing-exact requires --source-profile")
        emit_missing_exact(args.source_profile, handlers)
        return
    if args.families:
        emit_families(patterns, args.max_items, args.enum_limit, args.min_events)
        return
    if args.patterns:
        emit_patterns(handlers, patterns, args.max_items, args.enum_limit, args.max_positions, args.min_events)
    else:
        emit_handlers(handlers, patterns, args.max_items, args.enum_limit, args.max_positions, args.min_events)


if __name__ == "__main__":
    main()
