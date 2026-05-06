#!/usr/bin/env python3
"""Audit the VM behavior inventory coverage."""

from __future__ import annotations

import argparse
import csv
from pathlib import Path


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def parse_int(text: str | None) -> int:
    value = (text or "").strip()
    if not value:
        return 0
    return int(value, 16 if value.startswith("0x") else 10)


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    manifest_path = root / "vm_programs_decompiled_folded_manifest.tsv"
    blocks_path = root / "vm_bytecode_basic_blocks.tsv"
    ir_path = root / "vm_bytecode_ir_decompile.tsv"
    coverage_path = root / "vm_trace_coverage_matrix.tsv"
    strings_path = root / "vm_program_folded_string_refs.tsv"
    inventory_path = root / "vm_behavior_inventory.tsv"
    gap_path = root / "vm_behavior_gap_register.tsv"
    md_path = root / "vm_behavior_inventory.md"

    ok = True
    for name, path in [
        ("manifest_exists", manifest_path),
        ("blocks_exists", blocks_path),
        ("ir_exists", ir_path),
        ("coverage_matrix_exists", coverage_path),
        ("string_refs_exists", strings_path),
        ("behavior_inventory_exists", inventory_path),
        ("behavior_gap_register_exists", gap_path),
        ("behavior_markdown_exists", md_path),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    manifest = read_tsv(manifest_path)
    blocks = read_tsv(blocks_path)
    ir_rows = read_tsv(ir_path)
    coverage_rows = read_tsv(coverage_path)
    string_rows = read_tsv(strings_path)
    inventory = read_tsv(inventory_path)
    gaps = read_tsv(gap_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")

    manifest_programs = {row["program"] for row in manifest}
    inventory_programs = {row["program"] for row in inventory}
    ok &= check("inventory_covers_all_programs", inventory_programs == manifest_programs, f"inventory={len(inventory_programs)} manifest={len(manifest_programs)}")
    ok &= check("inventory_has_one_row_per_program", len(inventory) == len(manifest_programs), f"rows={len(inventory)} programs={len(manifest_programs)}")

    manifest_blocks = sum(parse_int(row.get("blocks")) for row in manifest)
    manifest_rows = sum(parse_int(row.get("rows")) for row in manifest)
    inventory_blocks = sum(parse_int(row.get("blocks")) for row in inventory)
    inventory_rows = sum(parse_int(row.get("ir_rows")) for row in inventory)
    inventory_mba = sum(parse_int(row.get("mba_cases")) for row in inventory)
    inventory_mba_ready = sum(parse_int(row.get("mba_ready_cases")) for row in inventory)
    inventory_mba_missing = sum(parse_int(row.get("mba_missing_cases")) for row in inventory)
    ok &= check("inventory_block_total_matches_manifest", inventory_blocks == manifest_blocks == len(blocks), f"inventory={inventory_blocks} manifest={manifest_blocks} blocks_file={len(blocks)}")
    ok &= check("inventory_row_total_matches_manifest", inventory_rows == manifest_rows == len(ir_rows), f"inventory={inventory_rows} manifest={manifest_rows} ir_file={len(ir_rows)}")
    ok &= check("inventory_mba_cases_cover_blocks", inventory_mba == len(blocks) and inventory_mba_ready == len(blocks) and inventory_mba_missing == 0, f"mba={inventory_mba} ready={inventory_mba_ready} missing={inventory_mba_missing} blocks={len(blocks)}")

    missing_paths = [row["path"] for row in inventory if not Path(row["path"]).exists()]
    ok &= check("inventory_paths_exist", not missing_paths, f"missing={missing_paths[:5]}")

    string_counts: dict[str, int] = {}
    for row in string_rows:
        string_counts[row["program"]] = string_counts.get(row["program"], 0) + 1
    bad_string_counts = [
        f"{row['program']}:inventory={row.get('string_ref_count')} refs={string_counts.get(row['program'], 0)}"
        for row in inventory
        if parse_int(row.get("string_ref_count")) != string_counts.get(row["program"], 0)
    ]
    ok &= check("inventory_string_counts_match_refs", not bad_string_counts, f"bad={bad_string_counts[:5]}")

    x_modes = {row.get("run_mode", "") for row in coverage_rows if row.get("runtime_config", "").startswith("x_mode_")}
    network_hosts = ",".join(row.get("network_hosts", "") for row in coverage_rows)
    policies = {row.get("network_policy", "") for row in coverage_rows if row.get("network_policy")}
    ok &= check("coverage_matrix_has_x_modes_0_1_2", {"0", "1", "2"}.issubset(x_modes), f"x_modes={sorted(x_modes)}")
    ok &= check("coverage_matrix_has_network_hosts", "api.epicgames.dev" in network_hosts and "datarouter.ol.epicgames.com" in network_hosts, network_hosts[:240])
    ok &= check("coverage_matrix_has_blocked_and_fake_network", "blocked_observed" in policies and "fake_observed" in policies, f"policies={sorted(policies)}")

    gap_requirements = {row.get("requirement", "") for row in gaps}
    gap_statuses = {row.get("status", "") for row in gaps}
    ok &= check("gap_register_is_explicitly_open", bool(gaps) and ("open" in gap_statuses or "partial" in gap_statuses), f"gaps={len(gaps)} statuses={sorted(gap_statuses)}")
    ok &= check("gap_register_mentions_human_intent", any("human-readable intent" in req for req in gap_requirements), str(sorted(gap_requirements))[:240])
    ok &= check("gap_register_mentions_x_behavior", any("initial x()" in req for req in gap_requirements), str(sorted(gap_requirements))[:240])
    ok &= check("markdown_states_objective_not_complete", "remains open" in md_text and "objective_status=not_complete" not in md_text, "report contains conservative caveat")

    semantic_gap_rows = [row for row in inventory if "semantic_intent_unknown" in row.get("semantic_gap", "")]
    ok &= check("inventory_marks_program_intent_gaps", len(semantic_gap_rows) == len(inventory), f"gap_rows={len(semantic_gap_rows)} inventory={len(inventory)}")

    print(f"inventory_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_human_intent_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
