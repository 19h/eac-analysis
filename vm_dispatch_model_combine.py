#!/usr/bin/env python3
import argparse
import csv
from collections import Counter, defaultdict
from pathlib import Path


def parse_int(text):
    if text is None or text == "":
        return None
    return int(text, 0)


def read_tsv(path):
    with Path(path).open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def load_by_source(path):
    rows = {}
    for row in read_tsv(path):
        rows[row["source_entry"]] = row
    return rows


def byte_bit(data, byte_idx, bit):
    if byte_idx < 0 or byte_idx >= len(data):
        return 0
    return (data[byte_idx] >> bit) & 1


def term_bit(term, row, data):
    if term == "1":
        return 1
    if term == "0" or term == "":
        return 0
    if term.startswith("state."):
        bit = int(term.split(".", 1)[1])
        return (parse_int(row["pre_state"]) >> bit) & 1
    if term.startswith("post."):
        bit = int(term.split(".", 1)[1])
        return (parse_int(row["post_state"]) >> bit) & 1
    if term.startswith("b") and "." in term:
        left, bit_s = term.split(".", 1)
        return byte_bit(data, int(left[1:]), int(bit_s))
    return 0


def eval_bit_formulas(bit_formulas, row):
    if not bit_formulas:
        return None
    data = bytes.fromhex(row["bytes"])
    value = 0
    seen = False
    for formula in bit_formulas.split(";"):
        if not formula:
            continue
        left, expr = formula.split("=", 1)
        if not left.startswith("y"):
            continue
        out_bit = int(left[1:])
        bit_value = 0
        for term in expr.split("^"):
            bit_value ^= term_bit(term, row, data)
        if bit_value:
            value |= 1 << out_bit
        seen = True
    return value if seen else None


def choose_model(static_row, affine_row):
    static_pct = float(static_row.get("target_coverage_pct", "0") or 0.0) if static_row else 0.0
    if static_pct == 100.0:
        return "static_100"
    if affine_row and affine_row.get("cv_status") == "robust":
        return "affine_robust_fallback"
    if affine_row and affine_row.get("cv_status") == "partial":
        return "affine_partial_fallback"
    if affine_row and affine_row.get("cv_status") == "no_test":
        return "affine_single_fallback"
    if affine_row and affine_row.get("full_status") == "fit":
        return "affine_fit_fallback"
    return "unresolved"


def main():
    parser = argparse.ArgumentParser(
        description="Combine static dispatch validation with affine dispatch fallback formulas."
    )
    parser.add_argument(
        "trace",
        nargs="?",
        default="dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv",
    )
    parser.add_argument("--static-dispatch", default="dumps/vmtail-state-wide-w16/vm_static_dispatch_validate.tsv")
    parser.add_argument("--affine-cv", default="dumps/vmtail-state-wide-w16/vm_dispatch_affine_cv.tsv")
    args = parser.parse_args()

    static_rows = load_by_source(args.static_dispatch)
    affine_rows = load_by_source(args.affine_cv)
    stats = defaultdict(Counter)
    targets = {}
    model_by_source = {}

    for row in read_tsv(args.trace):
        if row.get("byte_status") != "exact" or not row.get("pre_state") or not row.get("post_state"):
            continue
        source = row["source_entry"]
        static_row = static_rows.get(source, {})
        affine_row = affine_rows.get(source, {})
        model = model_by_source.get(source)
        if model is None:
            model = choose_model(static_row, affine_row)
            model_by_source[source] = model

        bucket = stats[source]
        bucket["events"] += 1
        actual = int(row["target_entry"]) * 8
        matched = False
        if model == "static_100":
            matched = True
        elif model.startswith("affine_"):
            predicted = eval_bit_formulas(affine_row.get("full_bit_formulas", ""), row)
            matched = predicted == actual
            if not matched and "example" not in bucket:
                bucket["example_pred"] = -1 if predicted is None else predicted
                bucket["example_actual"] = actual
                bucket["example_bytes"] = row.get("bytes", "")
        else:
            if "example" not in bucket:
                bucket["example_pred"] = -1
                bucket["example_actual"] = actual
                bucket["example_bytes"] = row.get("bytes", "")
        if matched:
            bucket["matched"] += 1
        else:
            bucket["mismatched"] += 1
            bucket["example"] = 1
        targets[source] = row.get("source_target", "")

    print(
        "source_entry\tsource_target\tmodel\tevents\tmatched_events\t"
        "coverage_pct\tmismatched_events\texample_pred\texample_actual\texample_bytes"
    )
    for source, bucket in sorted(stats.items(), key=lambda item: (-item[1]["events"], int(item[0]))):
        events = bucket["events"]
        matched = bucket["matched"]
        print(
            f"{source}\t{targets.get(source, '')}\t{model_by_source[source]}\t"
            f"{events}\t{matched}\t{matched * 100.0 / events if events else 0.0:.1f}\t"
            f"{bucket['mismatched']}\t"
            f"0x{bucket.get('example_pred', 0) & 0x1fff:x}\t"
            f"0x{bucket.get('example_actual', 0) & 0x1fff:x}\t"
            f"{bucket.get('example_bytes', '')}"
        )


if __name__ == "__main__":
    main()
