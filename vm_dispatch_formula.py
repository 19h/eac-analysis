#!/usr/bin/env python3
import argparse
import csv
from collections import Counter, defaultdict
from pathlib import Path


MASK32 = 0xffffffff


def parse_u32(text):
    return int(text, 16) & MASK32


def parse_delta(text):
    if text.startswith("+0x"):
        return int(text[1:], 16)
    if text.startswith("-0x"):
        return -int(text[3:], 16)
    return int(text, 0)


def byte_values(data):
    values = {}
    for idx, value in enumerate(data[:8]):
        values[f"b{idx}"] = value
    for idx in range(max(0, min(len(data) - 1, 7))):
        values[f"u16_{idx}"] = int.from_bytes(data[idx:idx + 2], "little")
    for idx in range(max(0, min(len(data) - 3, 5))):
        values[f"u32_{idx}"] = int.from_bytes(data[idx:idx + 4], "little")
    return values


def load_rows(path, max_rows_per_source):
    by_source = defaultdict(list)
    with Path(path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            if row.get("byte_status") != "exact":
                continue
            if not row.get("pre_state") or not row.get("post_state"):
                continue
            data = bytes.fromhex(row["bytes"])
            if not data:
                continue
            source = row["source_entry"]
            if max_rows_per_source and len(by_source[source]) >= max_rows_per_source:
                continue
            values = byte_values(data)
            values["state"] = parse_u32(row["pre_state"])
            values["post"] = parse_u32(row["post_state"])
            values["delta"] = parse_delta(row["delta"]) & MASK32
            values["target_index"] = int(row["target_entry"]) * 8
            by_source[source].append((row, values))
    return by_source


def make_candidates():
    candidates = []
    names = ["state", "post", "delta"]
    names += [f"b{i}" for i in range(8)]
    names += [f"u16_{i}" for i in range(7)]
    names += [f"u32_{i}" for i in range(5)]
    masks = [0xff, 0x1ff, 0x3ff, 0x7ff, 0xfff, 0x1fff, 0xffff]

    for name in names:
        candidates.append((name, lambda values, name=name: values.get(name)))
        for mask in masks:
            candidates.append((f"{name}&0x{mask:x}", lambda values, name=name, mask=mask: (
                None if values.get(name) is None else values[name] & mask
            )))
            candidates.append((f"({name}&0x{mask:x})*8", lambda values, name=name, mask=mask: (
                None if values.get(name) is None else (values[name] & mask) * 8
            )))

    pairs = [
        ("state", "u16_0"), ("state", "u16_1"), ("state", "u16_2"),
        ("state", "u32_0"), ("state", "u32_1"),
        ("post", "u16_0"), ("post", "u16_1"), ("post", "u16_2"),
        ("post", "u32_0"), ("post", "u32_1"),
    ]
    for left, right in pairs:
        for mask in masks:
            candidates.append((f"({left}+{right})&0x{mask:x}", binop(left, right, mask, "+")))
            candidates.append((f"({left}-{right})&0x{mask:x}", binop(left, right, mask, "-")))
            candidates.append((f"({right}-{left})&0x{mask:x}", binop(right, left, mask, "-")))
            candidates.append((f"({left}^{right})&0x{mask:x}", binop(left, right, mask, "^")))
    return candidates


def binop(left, right, mask, op):
    def fn(values):
        a = values.get(left)
        b = values.get(right)
        if a is None or b is None:
            return None
        if op == "+":
            return (a + b) & mask
        if op == "-":
            return (a - b) & mask
        if op == "^":
            return (a ^ b) & mask
        raise AssertionError(op)
    return fn


def classify(formula):
    if not formula:
        return "unfit"
    if formula.startswith("u16_"):
        return "direct_u16"
    if formula.startswith("u32_"):
        return "direct_u32"
    if formula.startswith("b"):
        return "direct_byte"
    if formula.startswith("constant:"):
        return "constant_target"
    if "state" in formula or "post" in formula:
        return "state_expr"
    return "other_expr"


def fit_source(rows, candidates):
    targets = Counter(values["target_index"] for _row, values in rows)
    best_count, best_name = targets.most_common(1)[0][1], f"constant:0x{targets.most_common(1)[0][0]:x}"
    for name, fn in candidates:
        ok = 0
        usable = 0
        for _row, values in rows:
            value = fn(values)
            if value is None:
                continue
            usable += 1
            if value == values["target_index"]:
                ok += 1
        if usable and (ok > best_count or (ok == best_count and name < best_name)):
            best_count, best_name = ok, name
    return best_name, best_count, targets


def fmt_counter(counter, max_items):
    return ",".join(f"0x{key:x}:{count}" for key, count in counter.most_common(max_items))


def main():
    parser = argparse.ArgumentParser(
        description="Fit simple expressions for VM dispatch byte index target_entry*8."
    )
    parser.add_argument(
        "trace",
        nargs="?",
        default="dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv",
    )
    parser.add_argument("--max-rows-per-source", type=int, default=0)
    parser.add_argument("--max-items", type=int, default=8)
    args = parser.parse_args()

    by_source = load_rows(args.trace, args.max_rows_per_source)
    candidates = make_candidates()
    print(
        "source_entry\tsource_target\tevents\tunique_targets\tbest_class\t"
        "best_formula\tmatched_events\tcoverage_pct\ttop_targets"
    )
    for source, rows in sorted(by_source.items(), key=lambda item: (-len(item[1]), int(item[0]))):
        formula, matched, targets = fit_source(rows, candidates)
        source_target = rows[0][0]["source_target"]
        total = len(rows)
        pct = matched * 100.0 / total if total else 0.0
        print(
            f"{source}\t{source_target}\t{total}\t{len(targets)}\t"
            f"{classify(formula)}\t{formula}\t{matched}\t{pct:.1f}\t"
            f"{fmt_counter(targets, args.max_items)}"
        )


if __name__ == "__main__":
    main()
