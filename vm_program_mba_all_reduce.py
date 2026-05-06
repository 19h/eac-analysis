#!/usr/bin/env python3
"""Generate compact MBA/readability reduction inventories for all split VM programs."""

from __future__ import annotations

import argparse
import csv
import struct
from collections import defaultdict
from pathlib import Path

from vm_program_mba_collection import (
    CASE_REDUCTION_FIELDS,
    build_trace_targets,
    case_reduction_row,
    collect_raw_vmtail_observations,
    collect_trace_observations,
    hx,
    raw_run_paths,
    trace_paths,
    u16le,
    write_tsv,
)
from vm_program_mba_reduce import main as reduce_main


def parse_int(text: str) -> int:
    text = text or "0"
    return int(text, 16 if text.startswith("0x") else 10)


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def read_dispatch_table(eac_path: Path, table_off: int = 0xC3718, entries: int = 360) -> list[int]:
    data = eac_path.read_bytes()
    return [struct.unpack_from("<Q", data, table_off + idx * 8)[0] for idx in range(entries)]


def compact_counter(values: list[str], limit: int = 8) -> str:
    vals = [value for value in values if value]
    if not vals:
        return ""
    counts: dict[str, int] = {}
    for value in vals:
        counts[value] = counts.get(value, 0) + 1
    return ",".join(f"{key}:{count}" for key, count in sorted(counts.items(), key=lambda item: (-item[1], item[0]))[:limit])


def program_number(row: dict[str, str]) -> int:
    return int(row["program"])


def block_program(block: dict[str, str], programs: list[dict[str, str]]) -> str:
    start = parse_int(block["start_vm_ip"])
    for program in programs:
        if parse_int(program["start"]) <= start < parse_int(program["end"]):
            return f"{int(program['program']):03d}"
    return ""


def make_case_row(program: str, block: dict[str, str], edge: dict[str, str], elf: bytes, obs: list[dict[str, str]]) -> dict[str, str]:
    state = block["start_vm_ip"]
    off = parse_int(state)
    data = elf[off:off + 32]
    return {
        "program": program,
        "block": block["block"],
        "state": state,
        "block_end": block.get("byte_end_min", ""),
        "byte_end_min": block.get("byte_end_min", ""),
        "rows": block.get("row_count", ""),
        "terminal_kind": block.get("terminal_kind", ""),
        "source_block": block.get("source_block", ""),
        "raw_b0": hx(data[0]) if len(data) > 0 else "",
        "raw_b1": hx(data[1]) if len(data) > 1 else "",
        "raw_b2": hx(data[2]) if len(data) > 2 else "",
        "raw_b3": hx(data[3]) if len(data) > 3 else "",
        "raw_b4": hx(data[4]) if len(data) > 4 else "",
        "raw_b5": hx(data[5]) if len(data) > 5 else "",
        "raw_u16_0": hx(u16le(data, 0)),
        "raw_u16_1": hx(u16le(data, 1)),
        "raw_u16_2": hx(u16le(data, 2)),
        "raw_u16_4": hx(u16le(data, 4)),
        "raw_prefix32": data.hex(),
        "first_source_entry": "",
        "first_target_entry": "",
        "first_state_ir": "",
        "first_state_effect_ir": "",
        "first_dispatch_ir": "",
        "last_source_entry": edge.get("source_entry", ""),
        "last_target_entry": edge.get("target_entry", ""),
        "last_state_ir": "",
        "last_state_effect_ir": "",
        "last_dispatch_ir": "",
        "edge_kind": edge.get("edge_kind", ""),
        "edge_target_block": edge.get("target_block", ""),
        "edge_target_vm_ip": edge.get("target_vm_ip", ""),
        "edge_source_entry": edge.get("source_entry", ""),
        "edge_target_entry": edge.get("target_entry", ""),
        "edge_delta": edge.get("delta", ""),
        "edge_semantic_ir": edge.get("semantic_ir", ""),
        "edge_coverage": edge.get("target_coverage_statuses", ""),
        "trace_observations": str(len(obs)),
        "trace_with_pre_state": str(sum(1 for row in obs if row.get("pre_state"))),
        "trace_with_pre_flags": str(sum(1 for row in obs if row.get("pre_flags"))),
        "trace_with_pre_byte": str(sum(1 for row in obs if row.get("pre_byte"))),
        "observed_pre_state": compact_counter([row.get("pre_state", "") for row in obs]),
        "observed_post_state": compact_counter([row.get("post_state", "") for row in obs]),
        "observed_pre_flags": compact_counter([row.get("pre_flags", "") for row in obs]),
        "observed_post_flags": compact_counter([row.get("post_flags", "") for row in obs]),
        "observed_target_entry": compact_counter([row.get("target_entry", "") for row in obs]),
        "observed_bytes": compact_counter([row.get("bytes", "") for row in obs]),
    }


def run_reducer(root: Path, program: int) -> None:
    import sys

    old_argv = sys.argv
    try:
        sys.argv = ["vm_program_mba_reduce.py", "--root", str(root), "--program", str(program)]
        reduce_main()
    finally:
        sys.argv = old_argv


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--elf", type=Path, default=Path("eac.elf"))
    args = parser.parse_args()

    manifest = sorted(read_tsv(args.root / "vm_programs_decompiled_manifest.tsv"), key=program_number)
    blocks = read_tsv(args.root / "vm_bytecode_basic_blocks.tsv")
    edges = {
        row["source_block"]: row
        for row in read_tsv(args.root / "vm_bytecode_basic_block_edges.tsv")
    }
    program_by_block = {block["block"]: block_program(block, manifest) for block in blocks}
    case_starts = {block["start_vm_ip"] for block in blocks}
    table = read_dispatch_table(args.elf)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    observations = collect_trace_observations(trace_paths(), case_starts)
    observations.extend(collect_raw_vmtail_observations(raw_run_paths(), case_starts, target_to_entry))
    obs_by_case: dict[str, list[dict[str, str]]] = defaultdict(list)
    for row in observations:
        if row.get("relation") == "case_start":
            obs_by_case[row["case_state"]].append(row)

    elf = args.elf.read_bytes()
    summary_rows: list[dict[str, str]] = []
    for program_row in manifest:
        program = f"{int(program_row['program']):03d}"
        program_blocks = [block for block in blocks if program_by_block.get(block["block"]) == program]
        program_blocks.sort(key=lambda row: parse_int(row["start_vm_ip"]))
        case_rows = [
            make_case_row(program, block, edges.get(block["block"], {}), elf, obs_by_case.get(block["start_vm_ip"], []))
            for block in program_blocks
        ]
        if not case_rows:
            continue
        reduction_rows = [case_reduction_row(row) for row in case_rows]
        missing_rows = [row for row in reduction_rows if row["status"] != "ready_for_mba_reduction"]
        prefix = args.root / f"vm_program_atlas_{program}_mba"
        write_tsv(prefix.with_name(prefix.name + "_cases.tsv"), list(case_rows[0].keys()), case_rows)
        write_tsv(prefix.with_name(prefix.name + "_requirements.tsv"), CASE_REDUCTION_FIELDS, reduction_rows)
        write_tsv(prefix.with_name(prefix.name + "_missing.tsv"), CASE_REDUCTION_FIELDS, missing_rows)
        write_tsv(prefix.with_name(prefix.name + "_trace_targets.tsv"), [
            "program", "case_state", "capture_status", "case_start_site", "case_start_source_entry",
            "case_start_target_entry", "case_start_bytes", "predecessor_start_vm_ip",
            "predecessor_end_vm_ip", "predecessor_site", "predecessor_source_entry",
            "focus_ips", "focus_sites", "stop_after_matches", "focus_env", "capture_goal",
        ], build_trace_targets(int(program), missing_rows, observations))
        run_reducer(args.root, int(program))
        summary_rows.append({
            "program": program,
            "blocks": str(len(case_rows)),
            "ready_cases": str(len(reduction_rows) - len(missing_rows)),
            "missing_cases": str(len(missing_rows)),
        })

    write_tsv(args.root / "vm_program_mba_all_summary.tsv", ["program", "blocks", "ready_cases", "missing_cases"], summary_rows)
    print(
        f"programs={len(summary_rows)} blocks={sum(int(row['blocks']) for row in summary_rows)} "
        f"ready={sum(int(row['ready_cases']) for row in summary_rows)} "
        f"missing={sum(int(row['missing_cases']) for row in summary_rows)}"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
