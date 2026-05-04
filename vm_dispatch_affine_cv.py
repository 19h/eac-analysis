#!/usr/bin/env python3
import argparse
from collections import Counter

from vm_dispatch_affine import (
    fmt_counter,
    load_rows,
    predict,
    solve_affine,
    summarize_solution,
)


def split_fold(samples, folds, fold):
    train = []
    test = []
    for idx, sample in enumerate(samples):
        if idx % folds == fold:
            test.append(sample)
        else:
            train.append(sample)
    return train, test


def source_status(tested_folds, train_fit_folds, test_events, matched_events):
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
        description="Cross-validate GF(2) affine VM dispatch formulas by source handler."
    )
    parser.add_argument(
        "trace",
        nargs="?",
        default="dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv",
    )
    parser.add_argument("--folds", type=int, default=5)
    parser.add_argument("--max-bytes", type=int, default=8)
    parser.add_argument("--max-rows-per-source", type=int, default=0)
    parser.add_argument("--max-terms", type=int, default=10)
    parser.add_argument("--max-items", type=int, default=8)
    args = parser.parse_args()

    if args.folds < 2:
        raise SystemExit("--folds must be at least 2")

    names, by_source = load_rows(args.trace, args.max_bytes, args.max_rows_per_source)
    print(
        "source_entry\tsource_target\tevents\tunique_targets\tfull_status\t"
        "full_terms\tfull_state_terms\tfull_post_terms\tfull_byte_terms\t"
        "tested_folds\ttrain_fit_folds\ttest_events\tmatched_events\t"
        "coverage_pct\tcv_status\ttop_targets\tfull_bit_formulas"
    )
    for source, samples in sorted(by_source.items(), key=lambda item: (-len(item[1]), int(item[0]))):
        targets = Counter(y for _row, _x, y in samples)
        source_target = samples[0][0]["source_target"]

        full_solution, _inconsistent = solve_affine(samples, len(names))
        if full_solution is None:
            full_status = "inconsistent"
            full_terms = full_state_terms = full_post_terms = full_byte_terms = 0
            full_formulas = ""
        else:
            full_status = "fit"
            (
                full_formulas,
                full_terms,
                full_state_terms,
                full_post_terms,
                full_byte_terms,
            ) = summarize_solution(full_solution, names, args.max_terms)

        tested_folds = 0
        train_fit_folds = 0
        test_events = 0
        matched_events = 0
        for fold in range(args.folds):
            train, test = split_fold(samples, args.folds, fold)
            if not train or not test:
                continue
            tested_folds += 1
            test_events += len(test)
            solution, _inconsistent = solve_affine(train, len(names))
            if solution is None:
                continue
            train_fit_folds += 1
            matched_events += sum(1 for _row, x, y in test if predict(solution, x) == y)

        pct = matched_events * 100.0 / test_events if test_events else 0.0
        status = source_status(tested_folds, train_fit_folds, test_events, matched_events)
        print(
            f"{source}\t{source_target}\t{len(samples)}\t{len(targets)}\t"
            f"{full_status}\t{full_terms}\t{full_state_terms}\t{full_post_terms}\t"
            f"{full_byte_terms}\t{tested_folds}\t{train_fit_folds}\t"
            f"{test_events}\t{matched_events}\t{pct:.1f}\t{status}\t"
            f"{fmt_counter(targets, args.max_items)}\t{full_formulas}"
        )


if __name__ == "__main__":
    main()
