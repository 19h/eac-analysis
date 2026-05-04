#!/usr/bin/env python3
import argparse
import csv
from pathlib import Path


KEY_FIELDS = ("start_vm_ip", "source_entry", "source_target", "delta", "bytes", "byte_status")


def load_unique(path):
    rows = {}
    with Path(path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            key = tuple(row[field] for field in KEY_FIELDS)
            rows[key] = int(row.get("count", "0") or 0)
    return rows


def main():
    parser = argparse.ArgumentParser(description="Compare unique VM instruction catalogs.")
    parser.add_argument("baseline")
    parser.add_argument("catalogs", nargs="+")
    args = parser.parse_args()

    baseline = load_unique(args.baseline)
    baseline_keys = set(baseline)
    print(
        "catalog\trows\tevents\tbaseline_rows\tbaseline_events\t"
        "overlap_rows\toverlap_events\tnew_rows\tnew_events\t"
        "missing_baseline_rows\tmissing_baseline_events"
    )
    for catalog in args.catalogs:
        rows = load_unique(catalog)
        keys = set(rows)
        overlap = keys & baseline_keys
        new = keys - baseline_keys
        missing = baseline_keys - keys
        print(
            f"{catalog}\t{len(rows)}\t{sum(rows.values())}\t"
            f"{len(baseline)}\t{sum(baseline.values())}\t"
            f"{len(overlap)}\t{sum(rows[key] for key in overlap)}\t"
            f"{len(new)}\t{sum(rows[key] for key in new)}\t"
            f"{len(missing)}\t{sum(baseline[key] for key in missing)}"
        )


if __name__ == "__main__":
    main()
