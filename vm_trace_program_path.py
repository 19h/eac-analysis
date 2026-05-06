#!/usr/bin/env python3
"""Map x()-driven traces onto recovered VM bytecode programs."""

from __future__ import annotations

import argparse
import csv
from collections import Counter, defaultdict
from pathlib import Path


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def write_tsv(path: Path, rows: list[dict[str, object]], fields: list[str]) -> None:
    with path.open("w", newline="") as handle:
        writer = csv.DictWriter(handle, delimiter="\t", fieldnames=fields, lineterminator="\n")
        writer.writeheader()
        for row in rows:
            writer.writerow({field: row.get(field, "") for field in fields})


def parse_int(text: str | int | None) -> int:
    if isinstance(text, int):
        return text
    value = (text or "").strip()
    if not value:
        return 0
    try:
        return int(value, 16 if value.startswith("0x") else 10)
    except ValueError:
        return 0


def format_hex(value: int | None) -> str:
    return "" if value is None else f"0x{value:x}"


def program_for_ip(ranges: list[tuple[int, int, str]], ip: int) -> str:
    for start, end, program in ranges:
        if start <= ip < end:
            return program
    return ""


def counter_text(counter: Counter[str], limit: int = 12) -> str:
    return ",".join(f"{key}:{count}" for key, count in counter.most_common(limit) if key)


def compress_sequence(sequence: list[str], limit: int = 80) -> str:
    if not sequence:
        return ""
    runs: list[tuple[str, int]] = []
    for item in sequence:
        if runs and runs[-1][0] == item:
            runs[-1] = (item, runs[-1][1] + 1)
        else:
            runs.append((item, 1))
    rendered = [f"{program}x{count}" if count > 1 else program for program, count in runs[:limit]]
    if len(runs) > limit:
        rendered.append(f"...+{len(runs) - limit}")
    return " -> ".join(rendered)


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        cells = [str(cell).replace("|", "\\|").replace("\n", " ") for cell in row]
        lines.append("| " + " | ".join(cell if len(cell) <= 140 else cell[:137] + "..." for cell in cells) + " |")
    return "\n".join(lines)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    manifest_path = root / "vm_programs_decompiled_folded_manifest.tsv"
    coverage_path = root / "vm_trace_coverage_matrix.tsv"
    hypotheses_path = root / "vm_program_behavior_hypotheses.tsv"
    if not manifest_path.exists():
        raise SystemExit(f"missing input: {manifest_path}")
    if not coverage_path.exists():
        raise SystemExit(f"missing input: {coverage_path}")

    manifest = read_tsv(manifest_path)
    coverage = read_tsv(coverage_path)
    hypotheses = read_tsv(hypotheses_path) if hypotheses_path.exists() else []
    hypothesis_by_program = {row["program"]: row for row in hypotheses}
    ranges = sorted((parse_int(row["start"]), parse_int(row["end"]), row["program"]) for row in manifest)
    all_programs = sorted(row["program"] for row in manifest)

    summary_rows: list[dict[str, object]] = []
    program_rows: list[dict[str, object]] = []
    edge_accum: dict[tuple[str, str, str], dict[str, object]] = {}

    for cov in coverage:
        trace_path_text = cov.get("path", "")
        trace_path = Path(trace_path_text) if trace_path_text else Path()
        if trace_path_text and not trace_path.is_absolute():
            trace_path = Path(trace_path_text)

        has_trace = bool(trace_path_text) and trace_path.exists()
        total_rows = 0
        mapped_rows = 0
        unmapped_rows = 0
        first_program = ""
        first_vm_ip: int | None = None
        last_program = ""
        last_vm_ip: int | None = None
        programs = Counter()
        program_first: dict[str, tuple[int, int]] = {}
        program_last: dict[str, tuple[int, int]] = {}
        program_sequence: list[str] = []
        prev_program = ""

        if has_trace:
            with trace_path.open(newline="") as handle:
                reader = csv.DictReader(handle, delimiter="\t")
                for raw in reader:
                    total_rows += 1
                    seq = parse_int(raw.get("seq")) or total_rows
                    ip = parse_int(raw.get("start_vm_ip"))
                    program = program_for_ip(ranges, ip)
                    if program:
                        mapped_rows += 1
                        programs[program] += 1
                        if not first_program:
                            first_program = program
                            first_vm_ip = ip
                        last_program = program
                        last_vm_ip = ip
                        program_sequence.append(program)
                        program_first.setdefault(program, (seq, ip))
                        program_last[program] = (seq, ip)
                        if prev_program and prev_program != program:
                            key = (cov.get("trace_dir", ""), prev_program, program)
                            edge = edge_accum.setdefault(
                                key,
                                {
                                    "trace_dir": cov.get("trace_dir", ""),
                                    "runtime_config": cov.get("runtime_config", ""),
                                    "run_mode": cov.get("run_mode", ""),
                                    "network_policy": cov.get("network_policy", ""),
                                    "source_program": prev_program,
                                    "target_program": program,
                                    "count": 0,
                                    "first_seq": seq,
                                    "last_seq": seq,
                                },
                            )
                            edge["count"] = int(edge["count"]) + 1
                            edge["last_seq"] = seq
                        prev_program = program or prev_program
                    else:
                        unmapped_rows += 1

        for program in all_programs:
            if programs[program] == 0:
                continue
            hyp = hypothesis_by_program.get(program, {})
            first_seq, first_ip = program_first[program]
            last_seq, last_ip = program_last[program]
            program_rows.append(
                {
                    "trace_dir": cov.get("trace_dir", ""),
                    "runtime_config": cov.get("runtime_config", ""),
                    "run_mode": cov.get("run_mode", ""),
                    "network_policy": cov.get("network_policy", ""),
                    "program": program,
                    "rows": programs[program],
                    "first_seq": first_seq,
                    "first_vm_ip": format_hex(first_ip),
                    "last_seq": last_seq,
                    "last_vm_ip": format_hex(last_ip),
                    "behavior_tags": hyp.get("behavior_tags", ""),
                    "confidence": hyp.get("confidence", ""),
                    "string_refs": hyp.get("string_refs", ""),
                }
            )

        missing = [program for program in all_programs if programs[program] == 0]
        summary_rows.append(
            {
                "trace_dir": cov.get("trace_dir", ""),
                "trace_class": cov.get("trace_class", ""),
                "runtime_config": cov.get("runtime_config", ""),
                "run_mode": cov.get("run_mode", ""),
                "network_policy": cov.get("network_policy", ""),
                "network_events": cov.get("network_events", ""),
                "has_instruction_trace": int(has_trace),
                "trace_rows_read": total_rows,
                "mapped_rows": mapped_rows,
                "unmapped_rows": unmapped_rows,
                "unique_programs": len(programs),
                "missing_programs": ",".join(missing),
                "first_program": first_program,
                "first_vm_ip": format_hex(first_vm_ip),
                "last_program": last_program,
                "last_vm_ip": format_hex(last_vm_ip),
                "top_programs": counter_text(programs),
                "program_switches": sum(1 for idx in range(1, len(program_sequence)) if program_sequence[idx] != program_sequence[idx - 1]),
                "compressed_program_path": compress_sequence(program_sequence),
                "trace_path": trace_path_text,
            }
        )

    edge_rows = sorted(edge_accum.values(), key=lambda row: (str(row["trace_dir"]), int(row["first_seq"]), str(row["source_program"]), str(row["target_program"])))

    summary_path = root / "vm_trace_program_path_summary.tsv"
    program_path = root / "vm_trace_program_path_programs.tsv"
    edge_path = root / "vm_trace_program_path_edges.tsv"
    md_path = root / "vm_trace_program_path.md"

    summary_fields = [
        "trace_dir",
        "trace_class",
        "runtime_config",
        "run_mode",
        "network_policy",
        "network_events",
        "has_instruction_trace",
        "trace_rows_read",
        "mapped_rows",
        "unmapped_rows",
        "unique_programs",
        "missing_programs",
        "first_program",
        "first_vm_ip",
        "last_program",
        "last_vm_ip",
        "top_programs",
        "program_switches",
        "compressed_program_path",
        "trace_path",
    ]
    program_fields = [
        "trace_dir",
        "runtime_config",
        "run_mode",
        "network_policy",
        "program",
        "rows",
        "first_seq",
        "first_vm_ip",
        "last_seq",
        "last_vm_ip",
        "behavior_tags",
        "confidence",
        "string_refs",
    ]
    edge_fields = [
        "trace_dir",
        "runtime_config",
        "run_mode",
        "network_policy",
        "source_program",
        "target_program",
        "count",
        "first_seq",
        "last_seq",
    ]
    write_tsv(summary_path, summary_rows, summary_fields)
    write_tsv(program_path, program_rows, program_fields)
    write_tsv(edge_path, edge_rows, edge_fields)

    traced_summaries = [row for row in summary_rows if row["has_instruction_trace"]]
    x_summaries = [row for row in traced_summaries if str(row["runtime_config"]).startswith("x_mode_")]
    first_mix = Counter(str(row["first_program"]) for row in x_summaries)
    network_mix = Counter(str(row["network_policy"]) for row in summary_rows)
    md_lines = [
        "# VM Trace Program Paths",
        "",
        "This maps each available x()-driven instruction trace onto the 66 recovered folded VM bytecode programs. It is dynamic path evidence, not proof that every possible configuration or network response has executed.",
        "",
        "## Summary",
        "",
        markdown_table(
            ["metric", "value"],
            [
                ["coverage rows", len(summary_rows)],
                ["instruction traces mapped", len(traced_summaries)],
                ["program rows", len(program_rows)],
                ["program switch edges", len(edge_rows)],
                ["x trace first-program mix", counter_text(first_mix)],
                ["network policy mix", counter_text(network_mix)],
            ],
        ),
        "",
        "## x() Trace Roots",
        "",
        markdown_table(
            ["trace", "mode", "network", "rows", "programs", "first", "last", "top programs"],
            [
                [
                    row["trace_dir"],
                    row["run_mode"],
                    row["network_policy"],
                    row["mapped_rows"],
                    row["unique_programs"],
                    f"{row['first_program']}@{row['first_vm_ip']}",
                    f"{row['last_program']}@{row['last_vm_ip']}",
                    row["top_programs"],
                ]
                for row in x_summaries[:40]
            ],
        ),
        "",
        "## Primary Trace Program Path",
        "",
    ]
    primary = next((row for row in summary_rows if row["trace_dir"] == str(root)), None)
    if primary is None:
        primary = next((row for row in summary_rows if row["trace_dir"].endswith(root.name)), None)
    if primary:
        md_lines.extend(
            [
                f"- Trace: `{primary['trace_dir']}`",
                f"- First mapped program: `{primary['first_program']}` at `{primary['first_vm_ip']}`",
                f"- Last mapped program: `{primary['last_program']}` at `{primary['last_vm_ip']}`",
                f"- Unique programs in trace: `{primary['unique_programs']}`",
                f"- Top programs: `{primary['top_programs']}`",
                f"- Compressed path: `{primary['compressed_program_path']}`",
                "",
            ]
        )
    md_lines.extend(
        [
            "## Artifacts",
            "",
            f"- Trace summary: `{summary_path}`",
            f"- Per-trace program rows: `{program_path}`",
            f"- Dynamic program switch edges: `{edge_path}`",
            "",
        ]
    )
    md_path.write_text("\n".join(md_lines), encoding="utf-8")

    print(f"wrote {summary_path}")
    print(f"wrote {program_path}")
    print(f"wrote {edge_path}")
    print(f"wrote {md_path}")
    print(
        f"coverage_rows={len(summary_rows)} instruction_traces={len(traced_summaries)} "
        f"program_rows={len(program_rows)} program_switch_edges={len(edge_rows)} "
        f"x_first_programs={counter_text(first_mix)}"
    )
    print("semantic_status=trace_program_paths_ready;dynamic_path_coverage_not_exhaustive")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
