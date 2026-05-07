#!/usr/bin/env python3
"""Audit the observed x() behavior model."""

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


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    coverage_path = root / "vm_trace_coverage_matrix.tsv"
    first_seen_path = root / "vm_x_program_first_seen.tsv"
    dossiers_path = root / "vm_program_behavior_dossiers.tsv"
    sequence_path = root / "vm_x_runtime_event_sequence.tsv"
    phase_path = root / "vm_x_behavior_phase_summary.tsv"
    overlay_path = root / "vm_x_program_phase_overlay.tsv"
    md_path = root / "vm_x_behavior_model.md"

    ok = True
    for name, path in [
        ("coverage_matrix_exists", coverage_path),
        ("first_seen_exists", first_seen_path),
        ("program_dossiers_exists", dossiers_path),
        ("runtime_sequence_exists", sequence_path),
        ("phase_summary_exists", phase_path),
        ("program_phase_overlay_exists", overlay_path),
        ("behavior_model_markdown_exists", md_path),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    coverage = read_tsv(coverage_path)
    first_seen = read_tsv(first_seen_path)
    dossiers = read_tsv(dossiers_path)
    sequence = read_tsv(sequence_path)
    phases = read_tsv(phase_path)
    overlay = read_tsv(overlay_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")

    ok &= check("runtime_sequence_has_events", len(sequence) > 0, f"events={len(sequence)}")
    phase_names = {row["phase"] for row in phases}
    required_phases = {
        "entropy_seed",
        "process_inventory",
        "firmware_hardware_inventory",
        "storage_inventory",
        "network_connectivity",
        "network_dns_fallback_shell",
        "thread_start",
        "self_memory_protection",
        "environment_check",
    }
    ok &= check("required_runtime_phases_present", required_phases.issubset(phase_names), f"missing={sorted(required_phases - phase_names)}")

    coverage_modes = {row.get("run_mode", "") for row in coverage if row.get("run_mode")}
    ok &= check("coverage_includes_x_modes_0_1_2", {"0", "1", "2"}.issubset(coverage_modes), f"modes={sorted(coverage_modes)}")
    host_text = "\n".join(row.get("network_hosts", "") for row in coverage)
    ok &= check("coverage_mentions_epic_network_hosts", "api.epicgames.dev" in host_text and "datarouter.ol.epicgames.com" in host_text, "expected hosts present")

    overlay_programs = {row["program"] for row in overlay}
    first_seen_programs = {row["program"] for row in first_seen}
    dossier_programs = {row["program"] for row in dossiers}
    ok &= check("overlay_covers_first_seen_programs", overlay_programs == first_seen_programs, f"overlay={len(overlay_programs)} first_seen={len(first_seen_programs)}")
    ok &= check("overlay_covers_dossier_programs", overlay_programs == dossier_programs, f"overlay={len(overlay_programs)} dossiers={len(dossier_programs)}")
    empty_phase_hints = [row["program"] for row in overlay if not row.get("phase_hint")]
    ok &= check("every_program_has_phase_hint", not empty_phase_hints, f"empty={empty_phase_hints[:8]}")

    sequence_binding = {row.get("program_binding", "") for row in sequence}
    ok &= check("runtime_events_not_overbound_to_vm", sequence_binding == {"runtime_native_offset_not_bound_to_vm_instruction"}, f"bindings={sorted(sequence_binding)}")
    phase_counts = Counter(row["phase"] for row in sequence)
    ok &= check("phase_summary_counts_match_sequence", sum(parse_int(row.get("events")) for row in phases) == len(sequence), f"summary={sum(parse_int(row.get('events')) for row in phases)} sequence={len(sequence)}")
    ok &= check("markdown_preserves_observed_and_no_real_server_caveat", "not proof of a per-VM-instruction binding" in md_text and "does not exercise real external server responses" in md_text, "caveat present")

    print(f"x_behavior_model_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_real_server_paths_and_vm_native_binding_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
