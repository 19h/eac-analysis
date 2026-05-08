#!/usr/bin/env python3
"""Audit state-reduced readable VM artifacts."""

from __future__ import annotations

import argparse
import csv
import re
import shutil
import subprocess
from collections import Counter
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def parse_int(text: str | None) -> int:
    value = (text or "").strip()
    if not value:
        return 0
    try:
        return int(value, 16 if value.startswith("0x") else 10)
    except ValueError:
        return 0


def split_refs(text: str) -> set[str]:
    return {part.strip() for part in str(text or "").split("||") if part.strip()}


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def resolve_path(text: str) -> Path:
    path = Path(text)
    return path if path.is_absolute() else Path.cwd() / path


def enum_count(text: str, macro: str, suffix: str) -> int | None:
    match = re.search(rf"\b{re.escape(macro)}_{suffix}_COUNT\s*=\s*([0-9]+)\b", text)
    return int(match.group(1)) if match else None


def syntax_check(compiler: str, path: Path) -> tuple[Path, bool, str]:
    result = subprocess.run(
        [compiler, "-std=c11", "-pedantic-errors", "-fsyntax-only", "-w", str(path)],
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        check=False,
    )
    return path, result.returncode == 0, (result.stderr or result.stdout).strip()


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--syntax", action="store_true")
    parser.add_argument("--jobs", type=int, default=8)
    args = parser.parse_args()
    root = args.root

    paths = {
        "source_readable_isa": root / "vm_readable_isa.tsv",
        "source_program_ops": root / "vm_program_readable_ops.tsv",
        "compiler_reductions": root / "vm_mba_state_formula_compiler_reductions.tsv",
        "dispatch_reductions_by_entry": root / "vm_mba_dispatch_formula_compiler_reductions_by_entry.tsv",
        "slot_unknown_summary": root / "vm_slot_unknown_dispatch_summary.tsv",
        "control_edges": root / "vm_program_control_graph_edges.tsv",
        "vm_refs": root / "vm_native_side_effect_vm_refs.tsv",
        "dossiers": root / "vm_program_behavior_dossiers.tsv",
        "state_reduced_isa": root / "vm_readable_isa_state_reduced.tsv",
        "state_reduced_ops": root / "vm_program_readable_ops_state_reduced.tsv",
        "state_reduced_ops_manifest": root / "vm_program_readable_ops_state_reduced_manifest.tsv",
        "state_reduced_c_manifest": root / "vm_program_state_reduced_readable_c_manifest.tsv",
        "state_reduced_md": root / "vm_readable_state_reduced.md",
        "state_reduced_ops_dir": root / "vm_programs_state_reduced_readable_ops",
        "state_reduced_c_dir": root / "vm_programs_state_reduced_readable_c",
    }

    ok = True
    for name, path in paths.items():
        ok &= check(f"{name}_exists", path.exists(), str(path))
    if not ok:
        return 1

    source_isa = read_tsv(paths["source_readable_isa"])
    source_ops = read_tsv(paths["source_program_ops"])
    reductions = read_tsv(paths["compiler_reductions"])
    dispatch_reductions = read_tsv(paths["dispatch_reductions_by_entry"])
    slot_unknown_summary = read_tsv(paths["slot_unknown_summary"])
    edges = read_tsv(paths["control_edges"])
    refs = read_tsv(paths["vm_refs"])
    dossiers = read_tsv(paths["dossiers"])
    reduced_isa = read_tsv(paths["state_reduced_isa"])
    reduced_ops = read_tsv(paths["state_reduced_ops"])
    ops_manifest = read_tsv(paths["state_reduced_ops_manifest"])
    c_manifest = read_tsv(paths["state_reduced_c_manifest"])
    md_text = paths["state_reduced_md"].read_text(encoding="utf-8", errors="replace")

    proved = {
        row["source_entry"]: row
        for row in reductions
        if row.get("proof_status") == "proved_equivalent" and row.get("candidate_c")
    }
    source_isa_by_entry = {row["source_entry"]: row for row in source_isa}
    reduced_isa_by_entry = {row["source_entry"]: row for row in reduced_isa}
    dispatch_proved = {
        row["source_entry"]: row
        for row in dispatch_reductions
        if parse_int(row.get("variant_count")) > 0
        and parse_int(row.get("variant_count")) == parse_int(row.get("proved_variants"))
        and row.get("reduced_dispatch_preview")
    }
    slot_unknown_tables = {
        row["source_entry"]: row
        for row in slot_unknown_summary
        if row.get("resolution_status") == "exact_observed_table_no_formula"
    }

    ok &= check("state_reduced_isa_row_count_matches_source", len(reduced_isa) == len(source_isa), f"reduced={len(reduced_isa)} source={len(source_isa)}")
    ok &= check("state_reduced_ops_row_count_matches_source", len(reduced_ops) == len(source_ops), f"reduced={len(reduced_ops)} source={len(source_ops)}")
    ok &= check("state_reduced_isa_entries_match_source", set(reduced_isa_by_entry) == set(source_isa_by_entry), f"reduced={len(reduced_isa_by_entry)} source={len(source_isa_by_entry)}")

    missing_entries = sorted(set(proved) - set(reduced_isa_by_entry), key=parse_int)
    ok &= check("all_proved_reductions_have_isa_rows", not missing_entries, f"missing={missing_entries[:8]}")

    bad_reduction_rows: list[str] = []
    for entry, proof in proved.items():
        row = reduced_isa_by_entry.get(entry)
        if not row:
            continue
        candidate = proof["candidate_c"]
        if row.get("state_reduction_status") != "applied_proved_equivalent":
            bad_reduction_rows.append(f"{entry}:status={row.get('state_reduction_status')}")
        elif row.get("state_reduction_proof_status") != "proved_equivalent":
            bad_reduction_rows.append(f"{entry}:proof={row.get('state_reduction_proof_status')}")
        elif candidate not in row.get("state_semantics", "") or row.get("state_effect_preview") != candidate:
            bad_reduction_rows.append(f"{entry}:candidate_not_promoted")
        elif row.get("original_state_effect_preview") != source_isa_by_entry.get(entry, {}).get("state_effect_preview", ""):
            bad_reduction_rows.append(f"{entry}:original_not_preserved")
    ok &= check("proved_reductions_promoted_to_state_semantics", not bad_reduction_rows, f"bad={bad_reduction_rows[:8]} total_proved={len(proved)}")

    reduced_entries = {entry for entry, row in reduced_isa_by_entry.items() if row.get("state_reduction_status") == "applied_proved_equivalent"}
    ok &= check("only_proved_entries_marked_reduced", reduced_entries == set(proved), f"reduced={len(reduced_entries)} proved={len(proved)} extra={sorted(reduced_entries - set(proved), key=parse_int)[:8]}")

    old_bad_unresolved = [
        row["source_entry"]
        for row in reduced_isa
        if row["source_entry"] in proved
        and ("algebraic_state_or_slot_formula" in row.get("unresolved", "") or "state_formula_not_named" in row.get("unresolved", ""))
    ]
    ok &= check("state_specific_unresolved_reasons_removed", not old_bad_unresolved, f"bad={old_bad_unresolved[:8]}")

    algebraic_entries = {
        row["source_entry"]
        for row in source_isa
        if row.get("dispatch_slot_kind") in {"slot_multi_path", "slot_mba_stateful"}
    }
    ok &= check("dispatch_reductions_cover_algebraic_entries", set(dispatch_proved) == algebraic_entries, f"dispatch={len(dispatch_proved)} algebraic={len(algebraic_entries)}")

    bad_dispatch_rows: list[str] = []
    target_binding_open: list[str] = []
    for entry, proof in dispatch_proved.items():
        row = reduced_isa_by_entry.get(entry)
        if not row:
            bad_dispatch_rows.append(f"{entry}:missing_reduced_isa")
            continue
        if row.get("dispatch_reduction_status") != "applied_proved_equivalent":
            bad_dispatch_rows.append(f"{entry}:status={row.get('dispatch_reduction_status')}")
        elif "Z3-proved simplified dispatch" not in row.get("dispatch_semantics", ""):
            bad_dispatch_rows.append(f"{entry}:semantics_not_promoted")
        elif row.get("dispatch_variant_count") != proof.get("variant_count"):
            bad_dispatch_rows.append(f"{entry}:variant_count")
        if "target_binding_not_validated" in proof.get("target_binding_mix", ""):
            target_binding_open.append(entry)
            if row.get("dispatch_target_binding_status") != "target_binding_not_validated":
                bad_dispatch_rows.append(f"{entry}:target_binding_not_visible")
        else:
            if "dispatch_formula_not_reduced" in row.get("unresolved", ""):
                bad_dispatch_rows.append(f"{entry}:stale_dispatch_formula_gap")
    ok &= check("proved_dispatch_reductions_promoted_to_dispatch_semantics", not bad_dispatch_rows, f"bad={bad_dispatch_rows[:8]} total={len(dispatch_proved)}")
    ok &= check("dispatch_target_binding_open_entries_visible", len(target_binding_open) == 8, f"entries={target_binding_open[:12]}")

    slot_unknown_entries = {
        row["source_entry"]
        for row in source_isa
        if row.get("dispatch_slot_kind") == "slot_unknown"
    }
    bad_slot_unknown: list[str] = []
    for entry in slot_unknown_entries:
        row = reduced_isa_by_entry.get(entry, {})
        if entry not in slot_unknown_tables:
            bad_slot_unknown.append(f"{entry}:missing_table")
        elif row.get("slot_unknown_dispatch_status") != "exact_observed_table_no_formula":
            bad_slot_unknown.append(f"{entry}:status={row.get('slot_unknown_dispatch_status')}")
        elif "exact observed target-by-bytecode table" not in row.get("dispatch_semantics", ""):
            bad_slot_unknown.append(f"{entry}:semantics_not_promoted")
        elif "slot_unknown_formula_not_recovered_exact_table_only" not in row.get("unresolved", ""):
            bad_slot_unknown.append(f"{entry}:formula_gap_not_visible")
    ok &= check("slot_unknown_exact_tables_promoted_to_dispatch_semantics", not bad_slot_unknown, f"bad={bad_slot_unknown[:8]} total={len(slot_unknown_entries)}")

    missing_program_promotions: list[str] = []
    missing_dispatch_program_promotions: list[str] = []
    missing_slot_unknown_program_promotions: list[str] = []
    source_ref_indexes: set[str] = set()
    reduced_ref_indexes: set[str] = set()
    reduced_program_row_count = 0
    dispatch_reduced_program_row_count = 0
    slot_unknown_program_row_count = 0
    for row in source_ops:
        source_ref_indexes.update(split_refs(row.get("string_ref_indexes", "")))
    for row in reduced_ops:
        reduced_ref_indexes.update(split_refs(row.get("string_ref_indexes", "")))
        entry = row.get("source_entry", "")
        if entry in proved:
            reduced_program_row_count += 1
            candidate = proved[entry]["candidate_c"]
            if row.get("state_reduction_status") != "applied_proved_equivalent" or candidate not in row.get("state_semantics", ""):
                missing_program_promotions.append(f"{row.get('program')}:{row.get('start_vm_ip')}:{entry}")
        if entry in dispatch_proved:
            dispatch_reduced_program_row_count += 1
            if row.get("dispatch_reduction_status") != "applied_proved_equivalent" or "Z3-proved simplified dispatch" not in row.get("dispatch_semantics", ""):
                missing_dispatch_program_promotions.append(f"{row.get('program')}:{row.get('start_vm_ip')}:{entry}")
        if entry in slot_unknown_tables:
            slot_unknown_program_row_count += 1
            if row.get("slot_unknown_dispatch_status") != "exact_observed_table_no_formula" or "exact observed target-by-bytecode table" not in row.get("dispatch_semantics", ""):
                missing_slot_unknown_program_promotions.append(f"{row.get('program')}:{row.get('start_vm_ip')}:{entry}")
    ok &= check("program_rows_promote_proved_state_reductions", not missing_program_promotions, f"bad={missing_program_promotions[:8]} rows={reduced_program_row_count}")
    ok &= check("program_rows_promote_proved_dispatch_reductions", not missing_dispatch_program_promotions, f"bad={missing_dispatch_program_promotions[:8]} rows={dispatch_reduced_program_row_count}")
    ok &= check("program_rows_promote_slot_unknown_exact_tables", not missing_slot_unknown_program_promotions, f"bad={missing_slot_unknown_program_promotions[:8]} rows={slot_unknown_program_row_count}")
    ok &= check("string_ref_indexes_preserved", source_ref_indexes == reduced_ref_indexes, f"source={len(source_ref_indexes)} reduced={len(reduced_ref_indexes)} missing={sorted(source_ref_indexes - reduced_ref_indexes)[:8]}")

    ops_counts: Counter[str] = Counter(row["program"] for row in reduced_ops)
    reduced_counts: Counter[str] = Counter(row["program"] for row in reduced_ops if row.get("state_reduction_status") == "applied_proved_equivalent")
    dispatch_reduced_counts: Counter[str] = Counter(row["program"] for row in reduced_ops if row.get("dispatch_reduction_status") == "applied_proved_equivalent")
    edge_counts: Counter[str] = Counter(row["source_program"] for row in edges)
    ref_counts: Counter[str] = Counter(row["program"] for row in refs)
    dossier_programs = {row["program"] for row in dossiers}
    manifest_programs = {row["program"] for row in c_manifest}
    ok &= check("c_manifest_covers_dossiers", manifest_programs == dossier_programs, f"manifest={len(manifest_programs)} dossiers={len(dossier_programs)}")
    ok &= check("ops_manifest_covers_programs", {row["program"] for row in ops_manifest} == set(ops_counts), f"manifest={len(ops_manifest)} programs={len(ops_counts)}")

    bad_manifest_counts: list[str] = []
    for row in c_manifest:
        program = row["program"]
        expected = (
            ops_counts.get(program, 0),
            reduced_counts.get(program, 0),
            dispatch_reduced_counts.get(program, 0),
            edge_counts.get(program, 0),
            ref_counts.get(program, 0),
        )
        actual = (
            parse_int(row.get("ops")),
            parse_int(row.get("state_reduced_ops")),
            parse_int(row.get("dispatch_reduced_ops")),
            parse_int(row.get("edges")),
            parse_int(row.get("string_refs")),
        )
        if actual != expected:
            bad_manifest_counts.append(f"{program}:actual={actual} expected={expected}")
    ok &= check("c_manifest_counts_match_inputs", not bad_manifest_counts, f"bad={bad_manifest_counts[:8]}")

    c_paths = [(row["program"], resolve_path(row.get("path", ""))) for row in c_manifest]
    missing_c_files = [str(path) for _, path in c_paths if not path.exists()]
    ok &= check("state_reduced_c_files_exist", not missing_c_files, f"missing={missing_c_files[:8]}")

    bad_file_counts: list[str] = []
    missing_reduced_text: list[str] = []
    missing_dispatch_text: list[str] = []
    missing_slot_unknown_text: list[str] = []
    for program, path in c_paths:
        if not path.exists():
            continue
        text = path.read_text(encoding="utf-8", errors="replace")
        macro = f"VM_PROGRAM_ATLAS_{program}"
        expected = (
            ops_counts.get(program, 0),
            edge_counts.get(program, 0),
            ref_counts.get(program, 0),
        )
        actual = (
            enum_count(text, macro, "OP"),
            enum_count(text, macro, "EDGE"),
            enum_count(text, macro, "STRING_REF"),
        )
        if actual != expected:
            bad_file_counts.append(f"{program}:actual={actual} expected={expected}")
        if reduced_counts.get(program, 0) and "Z3-proved simplified expression" not in text:
            missing_reduced_text.append(program)
        if dispatch_reduced_counts.get(program, 0) and "Z3-proved simplified dispatch" not in text:
            missing_dispatch_text.append(program)
        if any(row.get("program") == program for row in reduced_ops if row.get("slot_unknown_dispatch_status") == "exact_observed_table_no_formula") and "exact observed target-by-bytecode table" not in text:
            missing_slot_unknown_text.append(program)
    ok &= check("state_reduced_c_enum_counts_match_inputs", not bad_file_counts, f"bad={bad_file_counts[:8]}")
    ok &= check("state_reduced_c_files_contain_reduced_state_text", not missing_reduced_text, f"bad={missing_reduced_text[:8]}")
    ok &= check("state_reduced_c_files_contain_reduced_dispatch_text", not missing_dispatch_text, f"bad={missing_dispatch_text[:8]}")
    ok &= check("state_reduced_c_files_contain_slot_unknown_table_text", not missing_slot_unknown_text, f"bad={missing_slot_unknown_text[:8]}")

    generated_c_files = sorted(paths["state_reduced_c_dir"].glob("vm_program_atlas_*_readable.c"))
    ok &= check("state_reduced_c_file_count_matches_manifest", len(generated_c_files) == len(c_manifest), f"files={len(generated_c_files)} manifest={len(c_manifest)}")
    ok &= check(
        "markdown_caveats_remaining_gaps",
        "symbolic formulas remain unrecovered" in md_text and "unvalidated dispatch target binding" in md_text and "native-call binding" in md_text and "real-server path coverage" in md_text,
        "required caveats present",
    )

    if args.syntax:
        compiler = shutil.which("gcc") or shutil.which("clang")
        ok &= check("c_compiler_available_for_state_reduced_syntax", compiler is not None, compiler or "not found")
        if compiler:
            failures: list[str] = []
            with ThreadPoolExecutor(max_workers=max(1, args.jobs)) as executor:
                futures = [executor.submit(syntax_check, compiler, path) for _, path in c_paths if path.exists()]
                for future in as_completed(futures):
                    path, passed, detail = future.result()
                    if not passed:
                        failures.append(f"{path}: {detail[:600]}")
            ok &= check("state_reduced_c_files_compile_c11_syntax", not failures, f"failures={failures[:4]} checked={len(c_paths)}")

    print(f"state_reduced_readable_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_slot_unknown_dispatch_native_binding_real_server_paths_and_program_intent_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
