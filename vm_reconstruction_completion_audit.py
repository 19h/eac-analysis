#!/usr/bin/env python3
"""Audit reconstruction artifacts against the full-reconstruction objective."""

from __future__ import annotations

import argparse
import csv
import subprocess
from pathlib import Path


def read_coverage_gaps(path: Path) -> list[tuple[str, str, str, int]]:
    gaps: list[tuple[str, str, str, int]] = []
    with path.open(newline="") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        for row in reader:
            if row.get("row_type") == "gap":
                gaps.append((row["section"], row["start"], row["stop"], int(row["bytes"])))
    return gaps


def read_carrier_gaps(path: Path) -> list[tuple[str, str, str, int]]:
    gaps: list[tuple[str, str, str, int]] = []
    with path.open(newline="") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        for row in reader:
            gaps.append((row["section"], row["start"], row["stop"], int(row["bytes"])))
    return gaps


def text_section_row(path: Path) -> dict[str, str]:
    with path.open(newline="") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        for row in reader:
            if row.get("row_type") == "section" and row.get("section") == ".text":
                return row
    raise SystemExit(f"missing .text section row in {path}")


def has_text(path: Path, needle: str) -> bool:
    return needle in path.read_text(encoding="utf-8", errors="replace")


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--cc", default="cc")
    parser.add_argument("--syntax", action="store_true", help="Run a full aggregate C syntax check.")
    parser.add_argument("--fail-if-incomplete", action="store_true")
    args = parser.parse_args()

    root = args.root
    bundle = root / "vm_recovered_source_all_evidence_bundle.c"
    coverage = root / "vm_native_executable_coverage_audit.tsv"
    carrier = root / "vm_uncovered_executable_gaps.tsv"

    print("objective=reconstruct the binary back to C/C++ in full, including executable semantics and referenced static data")
    print("success_criteria=single C/C++ evidence artifact, all referenced static data present, all executable bytes covered by decompiled/manual semantics or exact byte carriers, no uncovered executable semantics")

    ok = True
    ok &= check("bundle_exists", bundle.exists(), str(bundle))
    ok &= check("coverage_exists", coverage.exists(), str(coverage))
    ok &= check("uncovered_carrier_exists", carrier.exists(), str(carrier))

    coverage_gaps = read_coverage_gaps(coverage)
    carrier_gaps = read_carrier_gaps(carrier)
    gap_rows_match = coverage_gaps == carrier_gaps
    gap_bytes = sum(item[3] for item in coverage_gaps)
    carrier_bytes = sum(item[3] for item in carrier_gaps)
    ok &= check(
        "uncovered_carrier_matches_coverage",
        gap_rows_match,
        f"coverage_gaps={len(coverage_gaps)} carrier_gaps={len(carrier_gaps)} coverage_bytes={gap_bytes} carrier_bytes={carrier_bytes}",
    )

    text_row = text_section_row(coverage)
    text_uncovered = int(text_row["uncovered_bytes"])
    text_covered = int(text_row["covered_bytes"])
    text_total = text_uncovered + text_covered
    print(f"text_semantic_coverage={text_covered}/{text_total} bytes ({int(text_row['coverage_x100']) / 100:.2f}%)")

    if bundle.exists():
        ok &= check(
            "bundle_includes_binary_data_sidecar",
            has_text(bundle, "vm_binary_data_sections.c"),
            "static ELF section/string/data carrier sidecar marker",
        )
        ok &= check(
            "bundle_includes_uncovered_executable_carrier",
            has_text(bundle, "vm_uncovered_executable_gaps.c") and has_text(bundle, "VM_UNCOVERED_EXECUTABLE_GAP_BYTES"),
            "exact byte carrier sidecar marker and byte-count enum",
        )

    if args.syntax:
        result = subprocess.run(
            [args.cc, "-std=c11", "-fsyntax-only", "-w", str(bundle)],
            stdout=subprocess.PIPE,
            stderr=subprocess.STDOUT,
            text=True,
        )
        ok &= check("aggregate_c_syntax", result.returncode == 0, f"command={' '.join(result.args)}")
        if result.returncode != 0:
            print(result.stdout[-4000:])

    complete = ok and text_uncovered == 0 and gap_bytes == 0
    if text_uncovered != 0 or gap_bytes != 0:
        print(f"incomplete_reason=remaining executable semantics: text_uncovered_bytes={text_uncovered} audit_gap_bytes={gap_bytes}")
    print(f"completion_status={'complete' if complete else 'not_complete'}")
    if args.fail_if_incomplete and not complete:
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
