#!/usr/bin/env python3
"""Audit folded per-program VM decompilation files."""

from __future__ import annotations

import argparse
import csv
import re
import subprocess
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path

from vm_program_string_refs import BEGIN, END


CASE_RE = re.compile(r"^\s*case (0x[0-9a-f]+)u: \{")
ROW_RE = re.compile(r"^\s*/\* 0x[0-9a-f]+..0x[0-9a-f]+:")
COUNT_RE = re.compile(r"enum \{ VM_PROGRAM_ATLAS_([0-9]{3})_STRING_REF_COUNT = ([0-9]+) \};")
FORBIDDEN_TABLE_TOKENS = [
    "VMProgramAtlasMBAReducedCase",
    "_mba_reduced_cases",
    "VMSyntheticTailEvidence",
    "vm_program_synthetic_tail_evidence",
    "static void vmdec_p",
]


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def parse_int(text: str) -> int:
    return int(text, 16 if text.startswith("0x") else 10)


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def program_for_ip(programs: list[dict[str, str]], ip: int) -> str:
    for row in programs:
        if parse_int(row["start"]) <= ip < parse_int(row["end"]):
            return row["program"]
    return ""


def file_counts(path: Path) -> dict[str, object]:
    text = path.read_text(encoding="utf-8", errors="replace")
    lines = text.splitlines()
    cases = [match.group(1) for line in lines if (match := CASE_RE.match(line))]
    rows = sum(1 for line in lines if ROW_RE.match(line))
    forbidden = [token for token in FORBIDDEN_TABLE_TOKENS if token in text]
    has_loop_switch = "while (1)" in text and "switch (vm_ip)" in text
    has_fold_comments = text.count("folded MBA successor:")
    has_string_refs = BEGIN in text and END in text
    count_match = COUNT_RE.search(text)
    return {
        "cases": cases,
        "rows": rows,
        "forbidden": forbidden,
        "has_loop_switch": has_loop_switch,
        "fold_comments": has_fold_comments,
        "has_string_refs": has_string_refs,
        "string_count": int(count_match.group(2)) if count_match else None,
    }


def compile_one(cc: str, path: Path) -> tuple[Path, int, str]:
    result = subprocess.run([cc, "-std=c11", "-fsyntax-only", "-w", str(path)], stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
    return path, result.returncode, result.stdout[-4000:]


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--cc", default="cc")
    parser.add_argument("--syntax", action="store_true")
    parser.add_argument("--jobs", type=int, default=8)
    args = parser.parse_args()

    source_manifest_path = args.root / "vm_programs_decompiled_manifest.tsv"
    folded_manifest_path = args.root / "vm_programs_decompiled_folded_manifest.tsv"
    folded_dir = args.root / "vm_programs_decompiled_folded"
    blocks_path = args.root / "vm_bytecode_basic_blocks.tsv"
    rows_path = args.root / "vm_bytecode_ir_decompile.tsv"
    refs_path = args.root / "vm_program_folded_string_refs.tsv"

    ok = True
    for name, path in [
        ("source_manifest_exists", source_manifest_path),
        ("folded_manifest_exists", folded_manifest_path),
        ("folded_output_dir_exists", folded_dir),
        ("bytecode_blocks_exists", blocks_path),
        ("bytecode_rows_exists", rows_path),
        ("folded_string_refs_exists", refs_path),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    source_manifest = read_tsv(source_manifest_path)
    folded_manifest = read_tsv(folded_manifest_path)
    blocks = read_tsv(blocks_path)
    rows = read_tsv(rows_path)
    refs = read_tsv(refs_path)

    expected_programs = {row["program"] for row in source_manifest}
    folded_programs = {row["program"] for row in folded_manifest}
    expected_blocks = len(blocks)
    expected_rows = len(rows)
    manifest_blocks = sum(int(row["blocks"]) for row in folded_manifest)
    manifest_rows = sum(int(row["rows"]) for row in folded_manifest)
    manifest_cases = sum(int(row["mba_cases"]) for row in folded_manifest)

    ok &= check("folded_program_set_matches_split", folded_programs == expected_programs, f"folded={len(folded_programs)} split={len(expected_programs)}")
    ok &= check("folded_manifest_covers_all_blocks", manifest_blocks == expected_blocks, f"manifest_blocks={manifest_blocks} expected_blocks={expected_blocks}")
    ok &= check("folded_manifest_covers_all_rows", manifest_rows == expected_rows, f"manifest_rows={manifest_rows} expected_rows={expected_rows}")
    ok &= check("folded_manifest_covers_all_mba_cases", manifest_cases == expected_blocks, f"manifest_cases={manifest_cases} expected_cases={expected_blocks}")

    blocks_by_program: dict[str, list[dict[str, str]]] = {program: [] for program in expected_programs}
    for block in blocks:
        program = program_for_ip(source_manifest, parse_int(block["start_vm_ip"]))
        if program:
            blocks_by_program[program].append(block)

    ref_counts: dict[str, int] = {}
    for row in refs:
        ref_counts[row["program"]] = ref_counts.get(row["program"], 0) + 1

    file_case_total = 0
    file_row_total = 0
    bad_files: list[str] = []
    bad_case_sets: list[str] = []
    bad_string_refs: list[str] = []
    bad_mba_requirements: list[str] = []
    for row in folded_manifest:
        program = row["program"]
        path = Path(row["path"])
        if not path.exists():
            bad_files.append(f"{program}:missing_file")
            continue
        counts = file_counts(path)
        expected_cases = {block["start_vm_ip"] for block in blocks_by_program[program]}
        file_cases = set(counts["cases"])
        file_case_total += len(file_cases)
        file_row_total += int(counts["rows"])
        if file_cases != expected_cases:
            bad_case_sets.append(f"{program}:file={len(file_cases)} expected={len(expected_cases)}")
        if counts["fold_comments"] != len(expected_cases):
            bad_case_sets.append(f"{program}:fold_comments={counts['fold_comments']} expected={len(expected_cases)}")
        if counts["forbidden"] or not counts["has_loop_switch"]:
            bad_files.append(f"{program}:forbidden={counts['forbidden']} loop_switch={counts['has_loop_switch']}")
        manifest_count = ref_counts.get(program, 0)
        if not counts["has_string_refs"] or counts["string_count"] != manifest_count:
            bad_string_refs.append(f"{program}:file={counts['string_count']} manifest={manifest_count}")

        reduced_path = args.root / f"vm_program_atlas_{int(program):03d}_mba_reduced.tsv"
        reduced = read_tsv(reduced_path)
        reduced_states = {r["case_state"] for r in reduced}
        not_ready = [r["case_state"] for r in reduced if r.get("status") != "ready_for_mba_reduction"]
        if reduced_states != expected_cases or not_ready:
            bad_mba_requirements.append(f"{program}:reduced={len(reduced_states)} expected={len(expected_cases)} not_ready={not_ready[:3]}")

    ok &= check("folded_files_cover_all_cases", file_case_total == expected_blocks and not bad_case_sets, f"file_cases={file_case_total} expected={expected_blocks} bad={bad_case_sets[:5]}")
    ok &= check("folded_files_cover_all_rows", file_row_total == expected_rows, f"file_rows={file_row_total} expected_rows={expected_rows}")
    ok &= check("folded_files_are_switches_not_side_tables", not bad_files, f"bad={bad_files[:5]}")
    ok &= check("folded_files_embed_string_refs", not bad_string_refs, f"bad={bad_string_refs[:5]}")
    ok &= check("folded_files_consume_ready_mba_reductions", not bad_mba_requirements, f"bad={bad_mba_requirements[:5]}")

    if args.syntax:
        failures = []
        paths = [Path(row["path"]) for row in folded_manifest]
        with ThreadPoolExecutor(max_workers=max(1, args.jobs)) as pool:
            futures = [pool.submit(compile_one, args.cc, path) for path in paths]
            for future in as_completed(futures):
                path, rc, output = future.result()
                if rc != 0:
                    failures.append((path, output))
        ok &= check("folded_files_syntax", not failures, f"files={len(paths)} failures={len(failures)}")
        for path, output in failures[:5]:
            print(f"compile_failure={path}")
            print(output)

    print(f"completion_status={'complete' if ok else 'not_complete'}")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
