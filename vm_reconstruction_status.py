#!/usr/bin/env python3
"""Print the current reconstruction progress from generated local artifacts."""

from __future__ import annotations

import argparse
import csv
import re
from pathlib import Path


FUNCTION_RE = re.compile(r"^int64_t eac_evidence_[A-Za-z0-9_]+__function_[0-9a-f]+\(.*\) \{")
SYMBOL_RE = re.compile(r"\beac_evidence_[A-Za-z0-9_]+__")


def line_byte_count(path: Path) -> tuple[int, int]:
    data = path.read_bytes()
    return data.count(b"\n"), len(data)


def bundle_counts(path: Path) -> tuple[int, int, int]:
    sidecars = 0
    functions = 0
    symbols = 0
    with path.open("r", encoding="utf-8", errors="replace") as handle:
        for line in handle:
            if line.startswith("/* --- sidecar: "):
                sidecars += 1
            if FUNCTION_RE.match(line):
                functions += 1
            symbols += len(SYMBOL_RE.findall(line))
    return sidecars, functions, symbols


def coverage_counts(path: Path) -> dict[str, int | str]:
    text_row: dict[str, str] | None = None
    rows = 0
    audit_gaps = 0
    text_gaps = 0
    with path.open(newline="") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        for row in reader:
            rows += 1
            if row.get("row_type") == "gap":
                audit_gaps += 1
                if row.get("section") == ".text":
                    text_gaps += 1
            if row.get("row_type") == "section" and row.get("section") == ".text":
                text_row = row
    if text_row is None:
        raise SystemExit(f"missing .text section row in {path}")
    return {
        "audit_rows": rows,
        "audit_gap_rows": audit_gaps,
        "text_gap_rows": text_gaps,
        "covered_bytes": int(text_row["covered_bytes"]),
        "uncovered_bytes": int(text_row["uncovered_bytes"]),
        "range_count": int(text_row["range_count"]),
        "merged_range_count": int(text_row["merged_range_count"]),
        "coverage_x100": int(text_row["coverage_x100"]),
    }


def reject_count(path: Path) -> int:
    if not path.exists():
        return 0
    lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
    return max(0, len(lines) - 1)


def latest_batch(primary: Path) -> int:
    latest = -1
    for path in primary.glob("vm_native_gap_retdec_batch*.c"):
        suffix = path.stem.removeprefix("vm_native_gap_retdec_batch")
        if suffix.isdigit():
            latest = max(latest, int(suffix))
    return latest


def uncovered_carrier_counts(path: Path) -> tuple[int, int]:
    if not path.exists():
        return 0, 0
    gaps = 0
    bytes_total = 0
    with path.open(newline="") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        for row in reader:
            gaps += 1
            bytes_total += int(row["bytes"])
    return gaps, bytes_total


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    bundle = root / "vm_recovered_source_all_evidence_bundle.c"
    coverage = root / "vm_native_executable_coverage_audit.tsv"
    reject_cache = root / "vm_executable_gap_retdec_reject_cache.tsv"
    uncovered_carrier = root / "vm_uncovered_executable_gaps.tsv"

    bundle_lines, bundle_bytes = line_byte_count(bundle)
    sidecars, functions, symbols = bundle_counts(bundle)
    cov = coverage_counts(coverage)
    carrier_gaps, carrier_bytes = uncovered_carrier_counts(uncovered_carrier)

    print(f"root={root}")
    print(f"latest_batch={latest_batch(root)}")
    print(f"bundle_lines={bundle_lines}")
    print(f"bundle_bytes={bundle_bytes}")
    print(f"sidecar_sections={sidecars}")
    print(f"prefixed_functions={functions}")
    print(f"prefixed_symbols={symbols}")
    print(f"text_recovered_range_rows={cov['range_count']}")
    print(f"text_gap_rows={cov['text_gap_rows']}")
    print(f"audit_gap_rows={cov['audit_gap_rows']}")
    print(f"text_covered_bytes={cov['covered_bytes']}")
    print(f"text_uncovered_bytes={cov['uncovered_bytes']}")
    print(f"text_coverage_x100={cov['coverage_x100']}")
    print(f"uncovered_carrier_gaps={carrier_gaps}")
    print(f"uncovered_carrier_bytes={carrier_bytes}")
    print(f"reject_cache_rejects={reject_count(reject_cache)}")
    print("completion_status=not_complete")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
