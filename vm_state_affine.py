#!/usr/bin/env python3
import argparse
import csv
from collections import Counter, defaultdict
from pathlib import Path


STATE_BITS = 32
MASK32 = 0xffffffff


def parse_u32(text):
    return int(text, 16) & MASK32


def feature_layout(max_bytes, include_flags, include_vm_byte):
    names = ["1"]
    names += [f"state.{bit}" for bit in range(STATE_BITS)]
    if include_flags:
        names += [f"flags.{bit}" for bit in range(32)]
    if include_vm_byte:
        names += [f"vm_byte.{bit}" for bit in range(8)]
    for byte_idx in range(max_bytes):
        names += [f"b{byte_idx}.{bit}" for bit in range(8)]
    return names


def feature_bits(row, max_bytes, include_flags, include_vm_byte):
    data = bytes.fromhex(row["bytes"])
    bits = 1
    pos = 1

    state = parse_u32(row["pre_state"])
    for bit in range(STATE_BITS):
        if (state >> bit) & 1:
            bits |= 1 << pos
        pos += 1

    if include_flags:
        flags = parse_u32(row.get("pre_flags") or "0x0")
        for bit in range(32):
            if (flags >> bit) & 1:
                bits |= 1 << pos
            pos += 1

    if include_vm_byte:
        vm_byte = parse_u32(row.get("pre_byte") or "0x0") & 0xff
        for bit in range(8):
            if (vm_byte >> bit) & 1:
                bits |= 1 << pos
            pos += 1

    for byte_idx in range(max_bytes):
        value = data[byte_idx] if byte_idx < len(data) else 0
        for bit in range(8):
            if (value >> bit) & 1:
                bits |= 1 << pos
            pos += 1
    return bits


def load_rows(path, max_bytes, include_flags, include_vm_byte, max_rows_per_source):
    names = feature_layout(max_bytes, include_flags, include_vm_byte)
    by_source = defaultdict(list)
    with Path(path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            if row.get("byte_status") != "exact":
                continue
            if not row.get("pre_state") or not row.get("post_state") or not row.get("bytes"):
                continue
            source = row["source_entry"]
            if max_rows_per_source and len(by_source[source]) >= max_rows_per_source:
                continue
            x = feature_bits(row, max_bytes, include_flags, include_vm_byte)
            y = parse_u32(row["post_state"])
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
        solution[col] = rows[row_idx][1] & MASK32
    return solution, 0


def predict(solution, x):
    y = 0
    bits = x
    while bits:
        lsb = bits & -bits
        y ^= solution[lsb.bit_length() - 1]
        bits ^= lsb
    return y & MASK32


def summarize_solution(solution, names, max_terms):
    bit_summaries = []
    total_terms = 0
    state_terms = 0
    flag_terms = 0
    vm_byte_terms = 0
    byte_terms = 0
    for out_bit in range(STATE_BITS):
        terms = [names[idx] for idx, mask in enumerate(solution) if (mask >> out_bit) & 1]
        total_terms += len(terms)
        state_terms += sum(1 for term in terms if term.startswith("state."))
        flag_terms += sum(1 for term in terms if term.startswith("flags."))
        vm_byte_terms += sum(1 for term in terms if term.startswith("vm_byte."))
        byte_terms += sum(1 for term in terms if term.startswith("b"))
        if len(terms) <= max_terms:
            text = "^".join(terms) if terms else "0"
        else:
            text = "^".join(terms[:max_terms]) + f"^...+{len(terms) - max_terms}"
        bit_summaries.append(f"s{out_bit}={text}")
    return bit_summaries, total_terms, state_terms, flag_terms, vm_byte_terms, byte_terms


def fmt_counter(counter, max_items):
    return ",".join(f"0x{key:x}:{count}" for key, count in counter.most_common(max_items))


def split_fold(samples, folds, fold):
    train = []
    test = []
    for idx, sample in enumerate(samples):
        if idx % folds == fold:
            test.append(sample)
        else:
            train.append(sample)
    return train, test


def cv_status(tested_folds, train_fit_folds, test_events, matched_events):
    if tested_folds == 0:
        return "no_test"
    if train_fit_folds == 0:
        return "no_train_fit"
    if train_fit_folds == tested_folds and matched_events == test_events:
        return "robust"
    if matched_events == test_events:
        return "partial_train_fit"
    if matched_events:
        return "partial"
    return "failed"


def main():
    parser = argparse.ArgumentParser(
        description="Fit and optionally cross-validate affine formulas for VM frame+0x170 post_state."
    )
    parser.add_argument(
        "trace",
        nargs="?",
        default="dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv",
    )
    parser.add_argument("--max-bytes", type=int, default=8)
    parser.add_argument("--max-rows-per-source", type=int, default=0)
    parser.add_argument("--include-flags", action="store_true")
    parser.add_argument("--include-vm-byte", action="store_true")
    parser.add_argument("--cv-folds", type=int, default=0)
    parser.add_argument("--max-terms", type=int, default=10)
    parser.add_argument("--max-items", type=int, default=8)
    args = parser.parse_args()

    if args.cv_folds and args.cv_folds < 2:
        raise SystemExit("--cv-folds must be 0 or at least 2")

    names, by_source = load_rows(
        args.trace,
        args.max_bytes,
        args.include_flags,
        args.include_vm_byte,
        args.max_rows_per_source,
    )
    print(
        "source_entry\tsource_target\tevents\tunique_post_states\tfull_status\t"
        "matched_events\tcoverage_pct\tinconsistent_rows\ttotal_terms\tstate_terms\t"
        "flag_terms\tvm_byte_terms\tbyte_terms\ttested_folds\ttrain_fit_folds\t"
        "test_events\tcv_matched_events\tcv_coverage_pct\tcv_status\ttop_post_states\tbit_formulas"
    )
    for source, samples in sorted(by_source.items(), key=lambda item: (-len(item[1]), int(item[0]))):
        post_states = Counter(y for _row, _x, y in samples)
        source_target = samples[0][0]["source_target"]
        solution, inconsistent = solve_affine(samples, len(names))
        if solution is None:
            full_status = "inconsistent"
            matched = 0
            pct = 0.0
            total_terms = state_terms = flag_terms = vm_byte_terms = byte_terms = 0
            formulas = ""
        else:
            full_status = "fit"
            matched = sum(1 for _row, x, y in samples if predict(solution, x) == y)
            pct = matched * 100.0 / len(samples) if samples else 0.0
            bit_formulas, total_terms, state_terms, flag_terms, vm_byte_terms, byte_terms = summarize_solution(
                solution, names, args.max_terms
            )
            formulas = ";".join(bit_formulas)

        tested_folds = train_fit_folds = test_events = cv_matched = 0
        if args.cv_folds:
            for fold in range(args.cv_folds):
                train, test = split_fold(samples, args.cv_folds, fold)
                if not train or not test:
                    continue
                tested_folds += 1
                test_events += len(test)
                fold_solution, _fold_inconsistent = solve_affine(train, len(names))
                if fold_solution is None:
                    continue
                train_fit_folds += 1
                cv_matched += sum(1 for _row, x, y in test if predict(fold_solution, x) == y)
        cv_pct = cv_matched * 100.0 / test_events if test_events else 0.0
        status = cv_status(tested_folds, train_fit_folds, test_events, cv_matched)

        print(
            f"{source}\t{source_target}\t{len(samples)}\t{len(post_states)}\t"
            f"{full_status}\t{matched}\t{pct:.1f}\t{inconsistent}\t"
            f"{total_terms}\t{state_terms}\t{flag_terms}\t{vm_byte_terms}\t{byte_terms}\t"
            f"{tested_folds}\t{train_fit_folds}\t{test_events}\t{cv_matched}\t"
            f"{cv_pct:.1f}\t{status}\t{fmt_counter(post_states, args.max_items)}\t{formulas}"
        )


if __name__ == "__main__":
    main()
