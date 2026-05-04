#!/usr/bin/env python3
import argparse
import csv
from collections import Counter, defaultdict
from pathlib import Path


TARGET_BITS = 13


def parse_u32(text):
    return int(text, 16) & 0xffffffff


def feature_layout(max_bytes):
    names = ["1"]
    names += [f"state.{bit}" for bit in range(32)]
    names += [f"post.{bit}" for bit in range(32)]
    for byte_idx in range(max_bytes):
        names += [f"b{byte_idx}.{bit}" for bit in range(8)]
    return names


def feature_bits(row, names, max_bytes):
    data = bytes.fromhex(row["bytes"])
    values = {"state": parse_u32(row["pre_state"]), "post": parse_u32(row["post_state"])}
    bits = 1
    pos = 1
    for name in ("state", "post"):
        value = values[name]
        for bit in range(32):
            if (value >> bit) & 1:
                bits |= 1 << pos
            pos += 1
    for byte_idx in range(max_bytes):
        value = data[byte_idx] if byte_idx < len(data) else 0
        for bit in range(8):
            if (value >> bit) & 1:
                bits |= 1 << pos
            pos += 1
    return bits


def load_rows(path, max_bytes, max_rows_per_source):
    names = feature_layout(max_bytes)
    by_source = defaultdict(list)
    with Path(path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            if row.get("byte_status") != "exact":
                continue
            if not row.get("pre_state") or not row.get("post_state"):
                continue
            if not row.get("bytes"):
                continue
            source = row["source_entry"]
            if max_rows_per_source and len(by_source[source]) >= max_rows_per_source:
                continue
            x = feature_bits(row, names, max_bytes)
            y = int(row["target_entry"]) * 8
            by_source[source].append((row, x, y))
    return names, by_source


def solve_affine(samples, nvars):
    rows = [[x, y] for _row, x, y in samples]
    pivot_row = 0
    pivots = []
    for col in range(nvars):
        pivot = None
        bit = 1 << col
        for idx in range(pivot_row, len(rows)):
            if rows[idx][0] & bit:
                pivot = idx
                break
        if pivot is None:
            continue
        rows[pivot_row], rows[pivot] = rows[pivot], rows[pivot_row]
        for idx in range(len(rows)):
            if idx != pivot_row and (rows[idx][0] & bit):
                rows[idx][0] ^= rows[pivot_row][0]
                rows[idx][1] ^= rows[pivot_row][1]
        pivots.append((col, pivot_row))
        pivot_row += 1

    inconsistent = 0
    for coeff, rhs in rows:
        if coeff == 0 and rhs:
            inconsistent += 1
    if inconsistent:
        return None, inconsistent

    solution = [0] * nvars
    for col, row_idx in pivots:
        solution[col] = rows[row_idx][1] & ((1 << TARGET_BITS) - 1)
    return solution, 0


def predict(solution, x):
    y = 0
    bits = x
    while bits:
        lsb = bits & -bits
        y ^= solution[lsb.bit_length() - 1]
        bits ^= lsb
    return y


def summarize_solution(solution, names, max_terms):
    bit_summaries = []
    total_terms = 0
    state_terms = 0
    post_terms = 0
    byte_terms = 0
    for out_bit in range(TARGET_BITS):
        terms = [names[idx] for idx, mask in enumerate(solution) if (mask >> out_bit) & 1]
        total_terms += len(terms)
        state_terms += sum(1 for term in terms if term.startswith("state."))
        post_terms += sum(1 for term in terms if term.startswith("post."))
        byte_terms += sum(1 for term in terms if term.startswith("b"))
        if len(terms) <= max_terms:
            text = "^".join(terms) if terms else "0"
        else:
            text = "^".join(terms[:max_terms]) + f"^...+{len(terms) - max_terms}"
        bit_summaries.append(f"y{out_bit}={text}")
    return ";".join(bit_summaries), total_terms, state_terms, post_terms, byte_terms


def fmt_counter(counter, max_items):
    return ",".join(f"0x{key:x}:{count}" for key, count in counter.most_common(max_items))


def main():
    parser = argparse.ArgumentParser(
        description="Fit GF(2) affine formulas for VM dispatch target_entry*8."
    )
    parser.add_argument(
        "trace",
        nargs="?",
        default="dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv",
    )
    parser.add_argument("--max-bytes", type=int, default=8)
    parser.add_argument("--max-rows-per-source", type=int, default=0)
    parser.add_argument("--max-terms", type=int, default=10)
    parser.add_argument("--max-items", type=int, default=8)
    args = parser.parse_args()

    names, by_source = load_rows(args.trace, args.max_bytes, args.max_rows_per_source)
    print(
        "source_entry\tsource_target\tevents\tunique_targets\tstatus\t"
        "matched_events\tcoverage_pct\tinconsistent_rows\ttotal_terms\t"
        "state_terms\tpost_terms\tbyte_terms\ttop_targets\tbit_formulas"
    )
    for source, samples in sorted(by_source.items(), key=lambda item: (-len(item[1]), int(item[0]))):
        targets = Counter(y for _row, _x, y in samples)
        source_target = samples[0][0]["source_target"]
        solution, inconsistent = solve_affine(samples, len(names))
        if solution is None:
            print(
                f"{source}\t{source_target}\t{len(samples)}\t{len(targets)}\t"
                f"inconsistent\t0\t0.0\t{inconsistent}\t0\t0\t0\t0\t"
                f"{fmt_counter(targets, args.max_items)}\t"
            )
            continue
        matched = sum(1 for _row, x, y in samples if predict(solution, x) == y)
        pct = matched * 100.0 / len(samples) if samples else 0.0
        formulas, total_terms, state_terms, post_terms, byte_terms = summarize_solution(
            solution, names, args.max_terms
        )
        print(
            f"{source}\t{source_target}\t{len(samples)}\t{len(targets)}\t"
            f"fit\t{matched}\t{pct:.1f}\t0\t{total_terms}\t"
            f"{state_terms}\t{post_terms}\t{byte_terms}\t"
            f"{fmt_counter(targets, args.max_items)}\t{formulas}"
        )


if __name__ == "__main__":
    main()
