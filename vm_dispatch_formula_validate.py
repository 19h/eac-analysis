#!/usr/bin/env python3
import argparse
import csv
import re
from collections import Counter, defaultdict
from pathlib import Path


TARGET_RE = re.compile(r"(\d+)@0x[0-9a-f]+:(\d+)")


def parse_targets(text):
    counts = Counter()
    for entry_s, count_s in TARGET_RE.findall(text or ""):
        counts[int(entry_s) * 8] += int(count_s)
    return counts


def byte_values(data):
    values = {}
    for idx, value in enumerate(data[:8]):
        values[f"b{idx}"] = value
    for idx in range(max(0, min(len(data) - 1, 7))):
        values[f"u16_{idx}"] = int.from_bytes(data[idx:idx + 2], "little")
    for idx in range(max(0, min(len(data) - 3, 5))):
        values[f"u32_{idx}"] = int.from_bytes(data[idx:idx + 4], "little")
    return values


def eval_formula(formula, values):
    if formula.startswith("constant:"):
        return int(formula.split(":", 1)[1], 16)
    if "state" in formula or "post" in formula:
        return None
    m = re.fullmatch(r"([bu]\d{0,2}_?\d*)(?:&0x([0-9a-f]+))?(?:\*8)?", formula)
    if m:
        name, mask_s = m.groups()
        if name not in values:
            return None
        value = values[name]
        if mask_s:
            value &= int(mask_s, 16)
        if formula.endswith("*8"):
            value *= 8
        return value
    m = re.fullmatch(r"\((u16_\d)&0x([0-9a-f]+)\)\*8", formula)
    if m:
        name, mask_s = m.groups()
        return (values.get(name, 0) & int(mask_s, 16)) * 8
    m = re.fullmatch(r"\((u32_\d)&0x([0-9a-f]+)\)\*8", formula)
    if m:
        name, mask_s = m.groups()
        return (values.get(name, 0) & int(mask_s, 16)) * 8
    return None


def load_formulas(path):
    out = {}
    with Path(path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            out[row["source_entry"]] = row
    return out


def main():
    parser = argparse.ArgumentParser(
        description="Validate byte-only VM dispatch formulas against unique instruction rows."
    )
    parser.add_argument(
        "instructions",
        nargs="?",
        default="dumps/vmtail-wide-1m-w16/vm_instruction_unique.tsv",
    )
    parser.add_argument(
        "--formulas",
        default="dumps/vmtail-state-wide-w16/vm_dispatch_formulas.tsv",
    )
    args = parser.parse_args()

    formulas = load_formulas(args.formulas)
    stats = defaultdict(lambda: Counter(rows=0, events=0, matched_rows=0, matched_events=0, skipped_rows=0, skipped_events=0))
    with Path(args.instructions).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            formula_row = formulas.get(row["source_entry"])
            if not formula_row:
                continue
            formula = formula_row["best_formula"]
            count = int(row.get("count", "0") or 0)
            bucket = stats[row["source_entry"]]
            bucket["rows"] += 1
            bucket["events"] += count
            value = eval_formula(formula, byte_values(bytes.fromhex(row["bytes"])))
            if value is None:
                bucket["skipped_rows"] += 1
                bucket["skipped_events"] += count
                continue
            targets = parse_targets(row.get("top_targets", ""))
            if targets and targets.most_common(1)[0][0] == value:
                bucket["matched_rows"] += 1
                bucket["matched_events"] += count

    print(
        "source_entry\tformula\tformula_class\trows\tevents\tmatched_rows\t"
        "matched_events\tcoverage_pct\tskipped_rows\tskipped_events"
    )
    for source, bucket in sorted(stats.items(), key=lambda item: (-item[1]["events"], int(item[0]))):
        formula_row = formulas[source]
        events = bucket["events"]
        pct = bucket["matched_events"] * 100.0 / events if events else 0.0
        print(
            f"{source}\t{formula_row['best_formula']}\t{formula_row['best_class']}\t"
            f"{bucket['rows']}\t{events}\t{bucket['matched_rows']}\t"
            f"{bucket['matched_events']}\t{pct:.1f}\t"
            f"{bucket['skipped_rows']}\t{bucket['skipped_events']}"
        )


if __name__ == "__main__":
    main()
