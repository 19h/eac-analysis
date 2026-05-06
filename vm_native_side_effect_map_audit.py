#!/usr/bin/env python3
"""Audit the VM native side-effect map."""

from __future__ import annotations

import argparse
import csv
from collections import Counter
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


def split_categories(text: str) -> set[str]:
    return {part for part in str(text).split(";") if part}


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def categories(rows: list[dict[str, str]]) -> Counter[str]:
    counter: Counter[str] = Counter()
    for row in rows:
        counter.update(split_categories(row.get("categories", "")))
    return counter


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    imports_input_path = root / "vm_native_linkage_stubs.tsv"
    roles_input_path = root / "vm_string_role_annotations.tsv"
    behaviors_input_path = root / "vm_program_behavior_hypotheses.tsv"
    imports_path = root / "vm_native_side_effect_imports.tsv"
    vm_refs_path = root / "vm_native_side_effect_vm_refs.tsv"
    runtime_path = root / "vm_native_side_effect_runtime.tsv"
    programs_path = root / "vm_native_side_effect_programs.tsv"
    md_path = root / "vm_native_side_effect_map.md"

    ok = True
    for name, path in [
        ("native_linkage_input_exists", imports_input_path),
        ("string_roles_input_exists", roles_input_path),
        ("behavior_input_exists", behaviors_input_path),
        ("side_effect_imports_exists", imports_path),
        ("side_effect_vm_refs_exists", vm_refs_path),
        ("side_effect_runtime_exists", runtime_path),
        ("side_effect_programs_exists", programs_path),
        ("side_effect_markdown_exists", md_path),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    imports_input = read_tsv(imports_input_path)
    roles_input = read_tsv(roles_input_path)
    behaviors_input = read_tsv(behaviors_input_path)
    imports = read_tsv(imports_path)
    vm_refs = read_tsv(vm_refs_path)
    runtime = read_tsv(runtime_path)
    programs = read_tsv(programs_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")

    ok &= check("imports_cover_linkage_stubs", len(imports) == len(imports_input), f"imports={len(imports)} linkage={len(imports_input)}")
    ok &= check("vm_refs_cover_string_roles", len(vm_refs) == len(roles_input), f"vm_refs={len(vm_refs)} roles={len(roles_input)}")
    ok &= check("program_rollup_covers_behavior_programs", len(programs) == len(behaviors_input), f"programs={len(programs)} behaviors={len(behaviors_input)}")

    input_role_keys = {(row["ref_index"], row["program"], row["site"], row["text"]) for row in roles_input}
    output_ref_keys = {(row["ref_index"], row["program"], row["site"], row["text"]) for row in vm_refs}
    ok &= check("vm_ref_keys_match_string_roles", output_ref_keys == input_role_keys, f"vm_refs={len(output_ref_keys)} roles={len(input_role_keys)}")

    import_categories = categories(imports)
    vm_categories = categories(vm_refs)
    runtime_categories = categories(runtime)
    required_import_categories = {"network", "threading_sync", "memory_protection", "filesystem_io", "crypto_hashing", "disassembly_metadata", "cxx_runtime"}
    required_vm_categories = {"network", "threading_sync", "tls_or_ssl", "crypto_hashing", "disassembly_metadata", "cxx_runtime", "process_or_shell", "host_environment_inventory"}
    required_runtime_categories = {"network", "filesystem_io", "host_environment_inventory", "threading_sync", "memory_protection", "env_check"}
    ok &= check("expected_import_categories_present", required_import_categories.issubset(set(import_categories)), f"missing={sorted(required_import_categories - set(import_categories))}")
    ok &= check("expected_vm_ref_categories_present", required_vm_categories.issubset(set(vm_categories)), f"missing={sorted(required_vm_categories - set(vm_categories))}")
    ok &= check("expected_runtime_categories_present", required_runtime_categories.issubset(set(runtime_categories)), f"missing={sorted(required_runtime_categories - set(runtime_categories))}")

    normalized_symbols = {row.get("normalized_symbol", "") for row in imports}
    expected_symbols = {"mprotect", "pthread_create", "getaddrinfo", "socket", "connect", "recv", "send", "open", "fopen", "popen", "pclose", "uname"}
    ok &= check("expected_native_symbols_present", expected_symbols.issubset(normalized_symbols), f"missing={sorted(expected_symbols - normalized_symbols)}")

    runtime_ops = Counter(row.get("operation", "") for row in runtime)
    expected_ops = {"open", "fopen", "getaddrinfo", "popen", "pthread_create", "mprotect", "getenv"}
    ok &= check("expected_runtime_ops_present", expected_ops.issubset(set(runtime_ops)), f"missing={sorted(expected_ops - set(runtime_ops))}")
    runtime_count = sum(parse_int(row.get("count")) for row in runtime)
    ok &= check("runtime_events_aggregated", runtime_count > 0 and len(runtime) > 0, f"events={runtime_count} aggregate_rows={len(runtime)}")

    bound_rows = [row for row in runtime if row.get("program_binding") != "not_bound_to_vm_program"]
    ok &= check("runtime_rows_are_not_overbound_to_vm", not bound_rows, f"bound_rows={len(bound_rows)}")
    exact_programs = {row["program"] for row in vm_refs}
    program_exact_counts = {row["program"]: parse_int(row.get("exact_vm_ref_count")) for row in programs}
    missing_exact_programs = [program for program in exact_programs if program_exact_counts.get(program, 0) <= 0]
    ok &= check("program_rollup_marks_exact_ref_programs", not missing_exact_programs, f"missing={missing_exact_programs[:8]}")
    ok &= check("markdown_caveat_preserves_provenance", "does not claim a per-VM-instruction caller binding" in md_text and "do not by themselves prove" in md_text, "runtime and VM reference caveat present")

    print(f"native_side_effect_map_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_full_vm_dataflow_and_instruction_semantics_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
