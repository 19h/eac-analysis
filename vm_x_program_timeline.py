#!/usr/bin/env python3
"""Build a chronological x() VM-program timeline for the primary trace."""

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


def clip(text: str, limit: int = 160) -> str:
    return text if len(text) <= limit else text[: limit - 16] + f"...#{len(text):x}"


def join_limited(values: list[str], limit: int = 6) -> str:
    unique = []
    seen = set()
    for value in values:
        if value in seen:
            continue
        unique.append(value)
        seen.add(value)
    rendered = unique[:limit]
    if len(unique) > limit:
        rendered.append(f"...+{len(unique) - limit}")
    return " || ".join(rendered)


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        cells = [clip(str(cell).replace("|", "\\|").replace("\n", " "), 140) for cell in row]
        lines.append("| " + " | ".join(cells) + " |")
    return "\n".join(lines)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--trace", type=Path, default=None)
    args = parser.parse_args()
    root = args.root
    trace_path = args.trace or (root / "vm_instruction_trace.tsv")

    manifest_path = root / "vm_programs_decompiled_folded_manifest.tsv"
    behavior_path = root / "vm_program_behavior_hypotheses.tsv"
    string_context_path = root / "vm_string_reference_context.tsv"
    graph_summary_path = root / "vm_program_control_graph_summary.tsv"
    trace_path_summary_path = root / "vm_trace_program_path_summary.tsv"
    for path in [manifest_path, behavior_path, string_context_path, graph_summary_path, trace_path_summary_path, trace_path]:
        if not path.exists():
            raise SystemExit(f"missing input: {path}")

    manifest = read_tsv(manifest_path)
    behaviors = read_tsv(behavior_path)
    contexts = read_tsv(string_context_path)
    graph = read_tsv(graph_summary_path)
    trace_summaries = read_tsv(trace_path_summary_path)

    ranges = sorted((parse_int(row["start"]), parse_int(row["end"]), row["program"]) for row in manifest)
    manifest_by_program = {row["program"]: row for row in manifest}
    behavior_by_program = {row["program"]: row for row in behaviors}
    graph_by_program = {row["program"]: row for row in graph}
    strings_by_program: dict[str, list[str]] = defaultdict(list)
    for row in contexts:
        strings_by_program[row["program"]].append(row.get("text", ""))

    trace_summary = next((row for row in trace_summaries if row.get("trace_path") == str(trace_path)), None)
    if trace_summary is None:
        trace_summary = next((row for row in trace_summaries if row.get("trace_dir") == str(root)), {})

    segments: list[dict[str, object]] = []
    current: dict[str, object] | None = None
    total_mapped_rows = 0
    unmapped_rows = 0
    program_totals = Counter()
    segment_counts = Counter()

    with trace_path.open(newline="") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        for raw in reader:
            seq = parse_int(raw.get("seq")) or (total_mapped_rows + unmapped_rows + 1)
            start_ip = parse_int(raw.get("start_vm_ip"))
            end_ip = parse_int(raw.get("end_vm_ip"))
            program = program_for_ip(ranges, start_ip)
            if not program:
                unmapped_rows += 1
                continue
            total_mapped_rows += 1
            program_totals[program] += 1
            if current and current["program"] == program:
                current["end_seq"] = seq
                current["last_vm_ip"] = format_hex(start_ip)
                current["last_end_vm_ip"] = format_hex(end_ip)
                current["row_count"] = int(current["row_count"]) + 1
                current["last_source_entry"] = raw.get("source_entry", "")
                current["last_target_entry"] = raw.get("target_entry", "")
                continue
            if current:
                segments.append(current)
            segment_counts[program] += 1
            current = {
                "segment": len(segments),
                "program": program,
                "start_seq": seq,
                "end_seq": seq,
                "row_count": 1,
                "first_vm_ip": format_hex(start_ip),
                "last_vm_ip": format_hex(start_ip),
                "last_end_vm_ip": format_hex(end_ip),
                "first_source_entry": raw.get("source_entry", ""),
                "last_source_entry": raw.get("source_entry", ""),
                "first_target_entry": raw.get("target_entry", ""),
                "last_target_entry": raw.get("target_entry", ""),
            }
    if current:
        segments.append(current)

    for index, segment in enumerate(segments):
        program = str(segment["program"])
        behavior = behavior_by_program.get(program, {})
        graph_row = graph_by_program.get(program, {})
        manifest_row = manifest_by_program.get(program, {})
        segment["segment"] = index
        segment["program_range"] = f"{manifest_row.get('start', '')}..{manifest_row.get('end', '')}"
        segment["behavior_tags"] = behavior.get("behavior_tags", "")
        segment["confidence"] = behavior.get("confidence", "")
        segment["string_refs"] = behavior.get("string_refs", "")
        segment["top_strings"] = join_limited(strings_by_program.get(program, []), 4)
        segment["outgoing_targets"] = graph_row.get("outgoing_targets", "")
        segment["external_or_exit_edges"] = graph_row.get("external_or_exit_edges", "")

    first_seen_rows: list[dict[str, object]] = []
    first_seen_programs: set[str] = set()
    for segment in segments:
        program = str(segment["program"])
        if program in first_seen_programs:
            continue
        first_seen_programs.add(program)
        behavior = behavior_by_program.get(program, {})
        graph_row = graph_by_program.get(program, {})
        first_seen_rows.append(
            {
                "first_seen_rank": len(first_seen_rows),
                "program": program,
                "first_segment": segment["segment"],
                "first_seq": segment["start_seq"],
                "first_vm_ip": segment["first_vm_ip"],
                "total_rows": program_totals[program],
                "segment_count": segment_counts[program],
                "behavior_tags": behavior.get("behavior_tags", ""),
                "confidence": behavior.get("confidence", ""),
                "string_refs": behavior.get("string_refs", ""),
                "top_strings": join_limited(strings_by_program.get(program, []), 6),
                "outgoing_targets": graph_row.get("outgoing_targets", ""),
                "external_or_exit_edges": graph_row.get("external_or_exit_edges", ""),
            }
        )

    segment_path = root / "vm_x_program_timeline.tsv"
    first_seen_path = root / "vm_x_program_first_seen.tsv"
    md_path = root / "vm_x_program_timeline.md"
    segment_fields = [
        "segment",
        "program",
        "program_range",
        "start_seq",
        "end_seq",
        "row_count",
        "first_vm_ip",
        "last_vm_ip",
        "last_end_vm_ip",
        "first_source_entry",
        "last_source_entry",
        "first_target_entry",
        "last_target_entry",
        "behavior_tags",
        "confidence",
        "string_refs",
        "top_strings",
        "outgoing_targets",
        "external_or_exit_edges",
    ]
    first_seen_fields = [
        "first_seen_rank",
        "program",
        "first_segment",
        "first_seq",
        "first_vm_ip",
        "total_rows",
        "segment_count",
        "behavior_tags",
        "confidence",
        "string_refs",
        "top_strings",
        "outgoing_targets",
        "external_or_exit_edges",
    ]
    write_tsv(segment_path, segments, segment_fields)
    write_tsv(first_seen_path, first_seen_rows, first_seen_fields)

    string_first_seen = [row for row in first_seen_rows if parse_int(row.get("string_refs")) > 0]
    md_lines = [
        "# x() VM Program Timeline",
        "",
        "This is the chronological VM-program timeline for the primary x()-driven trace. It names recovered folded VM programs by first-seen order and joins structural behavior hypotheses, string references, and solved graph exits. It is still dynamic evidence, not a final proof of every unexecuted branch.",
        "",
        "## Summary",
        "",
        markdown_table(
            ["metric", "value"],
            [
                ["trace", str(trace_path)],
                ["mapped rows", total_mapped_rows],
                ["unmapped rows", unmapped_rows],
                ["segments", len(segments)],
                ["programs first seen", len(first_seen_rows)],
                ["declared trace unique programs", trace_summary.get("unique_programs", "")],
                ["declared trace first program", f"{trace_summary.get('first_program', '')}@{trace_summary.get('first_vm_ip', '')}"],
            ],
        ),
        "",
        "## First-Seen Program Order",
        "",
        markdown_table(
            ["rank", "program", "seq", "rows", "segments", "tags", "strings", "outgoing"],
            [
                [
                    row["first_seen_rank"],
                    row["program"],
                    row["first_seq"],
                    row["total_rows"],
                    row["segment_count"],
                    row["behavior_tags"],
                    row["top_strings"] or "-",
                    row["outgoing_targets"],
                ]
                for row in first_seen_rows
            ],
        ),
        "",
        "## String-Bearing Programs In Timeline",
        "",
        markdown_table(
            ["rank", "program", "seq", "tags", "strings"],
            [
                [
                    row["first_seen_rank"],
                    row["program"],
                    row["first_seq"],
                    row["behavior_tags"],
                    row["top_strings"],
                ]
                for row in string_first_seen
            ],
        ),
        "",
        "## Initial Segments",
        "",
        markdown_table(
            ["segment", "program", "seq range", "rows", "tags", "strings"],
            [
                [
                    row["segment"],
                    row["program"],
                    f"{row['start_seq']}..{row['end_seq']}",
                    row["row_count"],
                    row["behavior_tags"],
                    row["top_strings"] or "-",
                ]
                for row in segments[:120]
            ],
        ),
        "",
        "## Artifacts",
        "",
        f"- Timeline: `{segment_path}`",
        f"- First-seen program table: `{first_seen_path}`",
        "",
    ]
    md_path.write_text("\n".join(md_lines), encoding="utf-8")

    print(f"wrote {segment_path}")
    print(f"wrote {first_seen_path}")
    print(f"wrote {md_path}")
    print(
        f"timeline_segments={len(segments)} first_seen_programs={len(first_seen_rows)} "
        f"mapped_rows={total_mapped_rows} unmapped_rows={unmapped_rows} first_program={segments[0]['program'] if segments else ''}"
    )
    print("semantic_status=x_program_timeline_ready;branch_globality_and_final_intent_open")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
