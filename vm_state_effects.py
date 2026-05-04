#!/usr/bin/env python3
import argparse
import csv
from collections import Counter, defaultdict
from pathlib import Path


MASK32 = 0xffffffff


def parse_hex(text):
    if not text:
        return None
    return int(text, 16)


def parse_signed_hex(text):
    if text.startswith("+0x"):
        return int(text[1:], 16)
    if text.startswith("-0x"):
        return -int(text[3:], 16)
    return int(text, 0)


def signed32(value):
    value &= MASK32
    if value & 0x80000000:
        return value - 0x100000000
    return value


def fmt_hex(value):
    return "" if value is None else f"0x{value & MASK32:x}"


def fmt_signed(value):
    value = signed32(value)
    sign = "-" if value < 0 else "+"
    return f"{sign}0x{abs(value):x}"


def fmt_counter(counter, max_items, formatter=str):
    return ",".join(f"{formatter(key)}:{count}" for key, count in counter.most_common(max_items))


def new_group():
    return {
        "events": 0,
        "unique_start_ips": set(),
        "targets": Counter(),
        "sites": Counter(),
        "statuses": Counter(),
        "deltas": Counter(),
        "bytes": Counter(),
        "pre_states": Counter(),
        "post_states": Counter(),
        "state_add": Counter(),
        "state_xor": Counter(),
        "flag_add": Counter(),
        "flag_xor": Counter(),
        "byte_add": Counter(),
        "byte_xor": Counter(),
    }


def classify(group):
    if not group["pre_states"] or not group["post_states"]:
        return "no_state"
    if len(group["state_add"]) == 1:
        add_value = next(iter(group["state_add"]))
        if add_value == 0:
            return "state_preserve"
        return "state_add_const"
    if len(group["state_xor"]) == 1:
        xor_value = next(iter(group["state_xor"]))
        if xor_value == 0:
            return "state_preserve"
        return "state_xor_const"
    if len(group["post_states"]) == 1:
        return "state_const_post"
    return "state_mixed"


def load_groups(path: Path):
    groups = defaultdict(new_group)
    missing_state_rows = 0

    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            key = (int(row["source_entry"], 10), row["source_target"])
            group = groups[key]
            group["events"] += 1
            group["unique_start_ips"].add(row["start_vm_ip"])
            group["targets"][f"{row['target_entry']}@{row['target']}"] += 1
            group["sites"][f"{row['kind']}@{row['site']}"] += 1
            group["statuses"][row["byte_status"]] += 1
            group["deltas"][row["delta"]] += 1
            if row["bytes"]:
                group["bytes"][row["bytes"]] += 1

            pre_state = parse_hex(row.get("pre_state", ""))
            post_state = parse_hex(row.get("post_state", ""))
            pre_flags = parse_hex(row.get("pre_flags", ""))
            post_flags = parse_hex(row.get("post_flags", ""))
            pre_byte = parse_hex(row.get("pre_byte", ""))
            post_byte = parse_hex(row.get("post_byte", ""))

            if pre_state is None or post_state is None:
                missing_state_rows += 1
                continue

            group["pre_states"][pre_state] += 1
            group["post_states"][post_state] += 1
            group["state_add"][(post_state - pre_state) & MASK32] += 1
            group["state_xor"][post_state ^ pre_state] += 1

            if pre_flags is not None and post_flags is not None:
                group["flag_add"][(post_flags - pre_flags) & MASK32] += 1
                group["flag_xor"][post_flags ^ pre_flags] += 1
            if pre_byte is not None and post_byte is not None:
                group["byte_add"][(post_byte - pre_byte) & 0xff] += 1
                group["byte_xor"][post_byte ^ pre_byte] += 1

    return groups, missing_state_rows


def main():
    parser = argparse.ArgumentParser(description="Summarize observed VM frame state effects per handler.")
    parser.add_argument("trace", nargs="?", default="dumps/vmtail-state-smoke-w16/vm_instruction_trace.tsv")
    parser.add_argument("--max-items", type=int, default=8)
    args = parser.parse_args()

    groups, missing_state_rows = load_groups(Path(args.trace))
    print(
        "source_entry\tsource_target\tclass\tevents\tunique_start_ips\t"
        "unique_pre_states\tunique_post_states\tunique_state_add\tunique_state_xor\t"
        "top_state_add\ttop_state_xor\ttop_pre_states\ttop_post_states\t"
        "top_flag_add\ttop_flag_xor\ttop_byte_add\ttop_byte_xor\t"
        "top_targets\ttop_sites\ttop_deltas\tbyte_statuses\ttop_bytes"
    )

    for (source, source_target), group in sorted(
        groups.items(), key=lambda item: (-item[1]["events"], item[0][0])
    ):
        print(
            f"{source}\t{source_target}\t{classify(group)}\t{group['events']}\t"
            f"{len(group['unique_start_ips'])}\t{len(group['pre_states'])}\t"
            f"{len(group['post_states'])}\t{len(group['state_add'])}\t"
            f"{len(group['state_xor'])}\t"
            f"{fmt_counter(group['state_add'], args.max_items, fmt_signed)}\t"
            f"{fmt_counter(group['state_xor'], args.max_items, fmt_hex)}\t"
            f"{fmt_counter(group['pre_states'], args.max_items, fmt_hex)}\t"
            f"{fmt_counter(group['post_states'], args.max_items, fmt_hex)}\t"
            f"{fmt_counter(group['flag_add'], args.max_items, fmt_signed)}\t"
            f"{fmt_counter(group['flag_xor'], args.max_items, fmt_hex)}\t"
            f"{fmt_counter(group['byte_add'], args.max_items, fmt_signed)}\t"
            f"{fmt_counter(group['byte_xor'], args.max_items, fmt_hex)}\t"
            f"{fmt_counter(group['targets'], args.max_items)}\t"
            f"{fmt_counter(group['sites'], args.max_items)}\t"
            f"{fmt_counter(group['deltas'], args.max_items)}\t"
            f"{fmt_counter(group['statuses'], args.max_items)}\t"
            f"{fmt_counter(group['bytes'], args.max_items)}"
        )

    if missing_state_rows:
        print(f"# missing_state_rows={missing_state_rows}", file=__import__("sys").stderr)


if __name__ == "__main__":
    main()
