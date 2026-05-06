#!/usr/bin/env python3
"""Audit reconstruction artifacts against the full-reconstruction objective."""

from __future__ import annotations

import argparse
import csv
import re
import subprocess
from pathlib import Path

from vm_recovered_source_all_evidence_bundle import default_sidecars


PROGRAM_BLOCK_RE = re.compile(r"^static void prog_bb_([0-9]{4})\(VMState \*vm, uint64_t vm_ip\) \{")
DECOMPILED_BLOCK_RE = re.compile(r"^static void vmdec_bb_([0-9]{4})\(VMState \*vm, uint64_t vm_ip\) \{")
DECOMPILED_ROW_RE = re.compile(r"^\s*/\* 0x[0-9a-f]+..0x[0-9a-f]+:")


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


def bundle_sidecar_markers(path: Path) -> set[str]:
    markers: set[str] = set()
    if not path.exists():
        return markers
    with path.open(encoding="utf-8", errors="replace") as handle:
        for line in handle:
            if not line.startswith("/* --- sidecar: "):
                continue
            rest = line.removeprefix("/* --- sidecar: ")
            marker = rest.split(" tag=", 1)[0]
            markers.add(marker)
    return markers


def count_tsv_rows(path: Path) -> int:
    with path.open(newline="") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        return sum(1 for _ in reader)


def program_pseudocode_blocks(path: Path) -> set[str]:
    blocks: set[str] = set()
    with path.open(encoding="utf-8", errors="replace") as handle:
        for line in handle:
            match = PROGRAM_BLOCK_RE.match(line)
            if match:
                blocks.add(match.group(1))
    return blocks


def decompiled_program_counts(path: Path) -> dict[str, int | bool]:
    blocks: set[str] = set()
    row_comments = 0
    state_inlined = 0
    state_summarized = 0
    op_entry_refs = 0
    dispatch = False
    omitted = False
    with path.open(encoding="utf-8", errors="replace") as handle:
        for line in handle:
            match = DECOMPILED_BLOCK_RE.match(line)
            if match:
                blocks.add(match.group(1))
            if DECOMPILED_ROW_RE.match(line):
                row_comments += 1
            if line.startswith("    vm->state = "):
                state_inlined += 1
            if "state effect summarized/clipped" in line:
                state_summarized += 1
            if "op_entry_" in line:
                op_entry_refs += 1
            if "rows omitted by --rows-per-block" in line:
                omitted = True
            if "void vm_program_decompiled(VMState *vm, uint64_t vm_ip)" in line:
                dispatch = True
    return {
        "blocks": len(blocks),
        "row_comments": row_comments,
        "state_inlined": state_inlined,
        "state_summarized": state_summarized,
        "op_entry_refs": op_entry_refs,
        "dispatch": dispatch,
        "omitted": omitted,
    }


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
    program_pseudocode = root / "vm_program_pseudocode_full.c"
    program_decompiled = root / "vm_program_decompiled_full.c"
    bytecode_ir_decompile = root / "vm_bytecode_ir_decompile.tsv"
    bytecode_blocks = root / "vm_bytecode_basic_blocks.tsv"

    print("objective=reconstruct the binary back to C/C++ in full, including executable semantics and referenced static data")
    print("success_criteria=single C/C++ evidence artifact, all referenced static data present, all executable bytes covered by decompiled/manual semantics or exact byte carriers, no uncovered executable semantics")

    ok = True
    ok &= check("bundle_exists", bundle.exists(), str(bundle))
    ok &= check("coverage_exists", coverage.exists(), str(coverage))
    ok &= check("uncovered_carrier_exists", carrier.exists(), str(carrier))
    ok &= check("program_pseudocode_exists", program_pseudocode.exists(), str(program_pseudocode))
    ok &= check("program_decompiled_exists", program_decompiled.exists(), str(program_decompiled))
    ok &= check("bytecode_ir_decompile_exists", bytecode_ir_decompile.exists(), str(bytecode_ir_decompile))
    ok &= check("bytecode_blocks_exists", bytecode_blocks.exists(), str(bytecode_blocks))

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
        markers = bundle_sidecar_markers(bundle)
        expected = {str(path) for path in default_sidecars() if path.exists()}
        missing_sidecars = sorted(expected - markers)
        ok &= check(
            "bundle_includes_expected_sidecars",
            not missing_sidecars,
            f"expected={len(expected)} present={len(markers)} missing={len(missing_sidecars)}"
            + (f" first_missing={missing_sidecars[:5]}" if missing_sidecars else ""),
        )
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
        ok &= check(
            "bundle_includes_vm_program_pseudocode",
            has_text(bundle, "void vm_program_sketch(VMState *vm, uint64_t vm_ip)")
            and has_text(bundle, "static void prog_bb_0000(VMState *vm, uint64_t vm_ip)"),
            "readable inline VM program pseudocode entrypoint and block functions",
        )
        ok &= check(
            "bundle_includes_vm_program_decompiled",
            has_text(bundle, "vm_program_decompiled_full.c")
            and has_text(bundle, "eac_evidence_program_decompiled_full__vm_program_decompiled"),
            "decompiled VM bytecode-program sidecar with inlined row semantics",
        )

    if program_pseudocode.exists() and bytecode_blocks.exists():
        expected_blocks = count_tsv_rows(bytecode_blocks)
        pseudocode_blocks = program_pseudocode_blocks(program_pseudocode)
        ok &= check(
            "program_pseudocode_covers_all_bytecode_blocks",
            len(pseudocode_blocks) == expected_blocks,
            f"expected_blocks={expected_blocks} pseudocode_blocks={len(pseudocode_blocks)}",
        )
        ok &= check(
            "program_pseudocode_not_compact_omitted",
            not has_text(program_pseudocode, "bytecode operations omitted from this compact sketch"),
            "full artifact generated with --limit-blocks 0 --rows-per-block 0",
        )
        ok &= check(
            "program_pseudocode_has_dispatch",
            has_text(program_pseudocode, "void vm_program_sketch(VMState *vm, uint64_t vm_ip)"),
            "VM IP dispatch entrypoint present",
        )

    if program_decompiled.exists() and bytecode_blocks.exists() and bytecode_ir_decompile.exists():
        expected_blocks = count_tsv_rows(bytecode_blocks)
        expected_rows = count_tsv_rows(bytecode_ir_decompile)
        counts = decompiled_program_counts(program_decompiled)
        ok &= check(
            "program_decompiled_covers_all_bytecode_blocks",
            counts["blocks"] == expected_blocks,
            f"expected_blocks={expected_blocks} decompiled_blocks={counts['blocks']}",
        )
        ok &= check(
            "program_decompiled_covers_all_bytecode_rows",
            counts["row_comments"] == expected_rows,
            f"expected_rows={expected_rows} decompiled_rows={counts['row_comments']}",
        )
        ok &= check(
            "program_decompiled_has_no_handler_calls",
            counts["op_entry_refs"] == 0,
            f"op_entry_refs={counts['op_entry_refs']}",
        )
        ok &= check(
            "program_decompiled_has_no_omitted_rows",
            not counts["omitted"],
            "generated with --limit-blocks 0 --rows-per-block 0",
        )
        ok &= check(
            "program_decompiled_has_no_clipped_state_effects",
            counts["state_summarized"] == 0,
            f"state_inlined={counts['state_inlined']} state_summarized={counts['state_summarized']}",
        )
        ok &= check(
            "program_decompiled_has_dispatch",
            bool(counts["dispatch"]),
            "VM IP decompiled dispatch entrypoint present",
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
