#!/usr/bin/env python3
"""Audit collected MBA evidence for a VM program."""

from __future__ import annotations

import argparse
import csv
import subprocess
from pathlib import Path


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--program", type=int, default=10)
    parser.add_argument("--cc", default="cc")
    parser.add_argument("--fail-if-missing-state", action="store_true")
    args = parser.parse_args()

    prefix = args.root / f"vm_program_atlas_{args.program:03d}_mba"
    cases_path = prefix.with_name(prefix.name + "_cases.tsv")
    observations_path = prefix.with_name(prefix.name + "_observations.tsv")
    ir_path = prefix.with_name(prefix.name + "_ir_rows.tsv")
    requirements_path = prefix.with_name(prefix.name + "_requirements.tsv")
    missing_path = prefix.with_name(prefix.name + "_missing.tsv")
    trace_targets_path = prefix.with_name(prefix.name + "_trace_targets.tsv")
    frida_path = prefix.with_name(prefix.name + "_frida_trace.js")
    md_path = prefix.with_suffix(".md")
    reduced_path = prefix.with_name(prefix.name + "_reduced.tsv")
    reduced_c_path = prefix.with_name(prefix.name + "_reduced.c")
    reduced_md_path = prefix.with_name(prefix.name + "_reduced.md")

    ok = True
    for label, path in [
        ("mba_cases_exists", cases_path),
        ("mba_observations_exists", observations_path),
        ("mba_ir_rows_exists", ir_path),
        ("mba_requirements_exists", requirements_path),
        ("mba_missing_exists", missing_path),
        ("mba_trace_targets_exists", trace_targets_path),
        ("mba_frida_template_exists", frida_path),
        ("mba_markdown_exists", md_path),
        ("mba_reduced_tsv_exists", reduced_path),
        ("mba_reduced_c_exists", reduced_c_path),
        ("mba_reduced_markdown_exists", reduced_md_path),
    ]:
        ok &= check(label, path.exists(), str(path))

    if not ok:
        print("completion_status=not_complete")
        return 1

    cases = read_tsv(cases_path)
    observations = read_tsv(observations_path)
    ir_rows = read_tsv(ir_path)
    requirements = read_tsv(requirements_path)
    missing = read_tsv(missing_path)
    trace_targets = read_tsv(trace_targets_path)
    reduced = read_tsv(reduced_path)

    case_states = {row["state"] for row in cases}
    req_states = {row["state"] for row in requirements}
    missing_states = {row["state"] for row in missing}
    trace_target_states = {row["case_state"] for row in trace_targets}
    reduced_states = {row["case_state"] for row in reduced}
    obs_case_states = {row["case_state"] for row in observations if row.get("relation") == "case_start"}
    ir_blocks = {row["block"] for row in ir_rows if row.get("block")}
    case_blocks = {row["block"] for row in cases}

    ok &= check("mba_case_count_nonzero", len(cases) > 0, f"cases={len(cases)}")
    ok &= check("mba_requirements_cover_cases", req_states == case_states, f"requirements={len(req_states)} cases={len(case_states)}")
    ok &= check("mba_observations_cover_cases", case_states <= obs_case_states, f"observed_cases={len(obs_case_states)} cases={len(case_states)}")
    ok &= check("mba_ir_rows_cover_case_blocks", case_blocks <= ir_blocks, f"ir_blocks={len(ir_blocks)} case_blocks={len(case_blocks)}")

    ready = [row for row in requirements if row.get("status") == "ready_for_mba_reduction"]
    not_ready = [row for row in requirements if row.get("status") != "ready_for_mba_reduction"]
    bad_ready = [
        row for row in ready
        if row.get("raw_bytes_known") != "yes"
        or row.get("edge_known") != "yes"
        or int(row.get("trace_with_pre_state", "0") or 0) == 0
        or int(row.get("trace_with_pre_flags", "0") or 0) == 0
        or int(row.get("trace_with_pre_byte", "0") or 0) == 0
        or int(row.get("ir_rows", "0") or 0) == 0
    ]
    ok &= check("mba_ready_cases_have_required_fields", not bad_ready, f"ready={len(ready)} bad_ready={len(bad_ready)}")
    ok &= check("mba_missing_manifest_matches_requirements", missing_states == {row["state"] for row in not_ready}, f"missing={len(missing_states)} not_ready={len(not_ready)}")
    ok &= check("mba_trace_targets_cover_missing_cases", trace_target_states == missing_states, f"trace_targets={len(trace_target_states)} missing={len(missing_states)}")
    bad_trace_targets = [row for row in trace_targets if not row.get("focus_env") or "$ALL_TABLE_SPEC" not in row.get("focus_env", "")]
    ok &= check("mba_trace_targets_have_focus_env", not bad_trace_targets, f"bad_trace_targets={len(bad_trace_targets)}")
    ok &= check("mba_reduced_covers_cases", reduced_states == case_states, f"reduced={len(reduced_states)} cases={len(case_states)}")
    case_successors = {row["state"]: (row.get("edge_target_vm_ip", ""), row.get("edge_target_entry", "")) for row in cases}
    bad_reduced = [
        row for row in reduced
        if (row.get("successor_vm_ip", ""), row.get("successor_entry", "")) != case_successors.get(row.get("case_state", ""), ("", ""))
    ]
    ok &= check("mba_reduced_successors_match_cases", not bad_reduced, f"bad_reduced={len(bad_reduced)}")
    result = subprocess.run(
        [args.cc, "-std=c11", "-fsyntax-only", "-w", str(reduced_c_path)],
        stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT,
        text=True,
    )
    ok &= check("mba_reduced_c_syntax", result.returncode == 0, f"command={' '.join(result.args)}")
    if result.returncode != 0:
        print(result.stdout[-4000:])

    if missing:
        print("mba_missing_states=" + ",".join(row["state"] for row in missing))
    print(f"mba_ready_cases={len(ready)}/{len(requirements)}")
    complete = ok and (not missing or not args.fail_if_missing_state)
    if args.fail_if_missing_state and missing:
        print("incomplete_reason=some MBA cases still need state_trace_pre_state/pre_flags/pre_byte")
    print(f"completion_status={'complete' if complete else 'not_complete'}")
    return 0 if complete else 1


if __name__ == "__main__":
    raise SystemExit(main())
