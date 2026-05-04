#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path


KIND_WEIGHT = {
    "uncovered_exact_destination": 100,
    "prefix_long_jump": 80,
    "missing_exact_source": 70,
    "decoded_long_branch_source": 15,
    "backedge_sample": 40,
    "uncovered_source_start": 30,
    "hidden_transition_destination": 25,
    "target_only_entry": 10,
    "unobserved_entry": 1,
}


def parse_signed_hex(text):
    if text.startswith("+0x"):
        return int(text[1:], 16)
    if text.startswith("-0x"):
        return -int(text[3:], 16)
    return int(text, 0)


def fmt_counter(counter, max_items):
    return ",".join(f"{key}:{count}" for key, count in counter.most_common(max_items))


def fmt_set(values, max_items):
    if not values:
        return ""
    try:
        ordered = sorted(values, key=lambda value: int(value, 16) if value.startswith("0x") else value)
    except ValueError:
        ordered = sorted(values)
    shown = ordered[:max_items]
    suffix = f",...+{len(ordered) - len(shown)}" if len(ordered) > len(shown) else ""
    return ",".join(shown) + suffix


def parse_count_items(text):
    counts = Counter()
    if not text:
        return counts
    for item in text.split(","):
        if not item:
            continue
        key, count_s = item.rsplit(":", 1)
        counts[key] += int(count_s, 10)
    return counts


def find_long_branch_path(dump_dir: Path, explicit_path):
    if explicit_path:
        path = Path(explicit_path)
        return path if path.exists() else None

    candidates = [dump_dir / "vm_long_branch_catalog.tsv"]
    if dump_dir.name.endswith("-filefill"):
        base_name = dump_dir.name[: -len("-filefill")]
        candidates.append(dump_dir.with_name(base_name) / "vm_long_branch_catalog.tsv")

    for path in candidates:
        if path.exists():
            return path
    return None


def find_hidden_transition_path(dump_dir: Path, explicit_path):
    if explicit_path:
        path = Path(explicit_path)
        return path if path.exists() else None

    candidates = [dump_dir / "vm_hidden_transition_catalog.tsv"]
    if dump_dir.name.endswith("-filefill"):
        base_name = dump_dir.name[: -len("-filefill")]
        candidates.append(dump_dir.with_name(base_name) / "vm_hidden_transition_catalog.tsv")

    for path in candidates:
        if path.exists():
            return path
    return None


def load_long_branches(path: Path, top=5):
    rows = defaultdict(lambda: {
        "events": 0,
        "variants": 0,
        "irs": Counter(),
        "operand_lens": Counter(),
        "operand_shapes": Counter(),
    })
    if path is None:
        return {}

    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            entry = row.get("source_entry", "")
            if not entry:
                continue
            events = int(row.get("events", "0") or 0)
            bucket = rows[entry]
            bucket["events"] += events
            bucket["variants"] += 1
            lifted_ir = row.get("lifted_ir", "")
            if lifted_ir:
                bucket["irs"][lifted_ir] += events
            operand_min_len = row.get("operand_min_len", "")
            if operand_min_len:
                bucket["operand_lens"][operand_min_len] += events
            operand_shape = row.get("operand_shape", "")
            if operand_shape:
                bucket["operand_shapes"][operand_shape] += events

    compact = {}
    for entry, bucket in rows.items():
        compact[entry] = {
            "events": bucket["events"],
            "variants": bucket["variants"],
            "top_ir": ",".join(
                f"{value}={key}"
                for key, value in sorted(bucket["irs"].items(), key=lambda item: (-item[1], item[0]))[:top]
            ),
            "operand_lens": ",".join(
                f"{key}:{value}" for key, value in bucket["operand_lens"].most_common(top)
            ),
            "operand_shapes": ",".join(
                f"{value}={key}"
                for key, value in sorted(bucket["operand_shapes"].items(), key=lambda item: (-item[1], item[0]))[:top]
            ),
        }
    return compact


def load_hidden_transitions(path: Path, top=3):
    by_start = defaultdict(list)
    if path is None:
        return by_start

    with path.open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            starts = row.get("all_start_ips") or row.get("start_ips", "")
            if not starts:
                continue
            summary = (
                f"{row.get('hidden_source_entry', '')}->{row.get('hidden_target_entry', '')}"
                f":{row.get('delta', '')}"
                f":events={row.get('events', '')}"
                f":obs={row.get('source_observations', '')}"
            )
            for start in starts.split(","):
                if not start or start.startswith("..."):
                    continue
                by_start[start].append(summary)

    return {
        start: ",".join(summaries[:top])
        for start, summaries in by_start.items()
    }


def load_segments(path: Path):
    segments = []
    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            segments.append({
                "idx": int(row["segment"], 10),
                "start": int(row["start"], 16),
                "end": int(row["end"], 16),
            })
    segments.sort(key=lambda row: row["start"])
    return segments


def find_segment(segments, offset):
    lo = 0
    hi = len(segments)
    while lo < hi:
        mid = (lo + hi) // 2
        if segments[mid]["end"] <= offset:
            lo = mid + 1
        else:
            hi = mid
    if lo < len(segments):
        segment = segments[lo]
        if segment["start"] <= offset < segment["end"]:
            return segment
    return None


def find_boundary_segment(boundary_by_start, offset):
    return boundary_by_start.get(offset)


def nearest_segments(segments, offset):
    containing = find_segment(segments, offset)
    if containing is not None:
        return (
            f"inside={containing['idx']}@0x{containing['start']:x}-0x{containing['end']:x}"
            f"+0x{offset - containing['start']:x}"
        )

    prev_segment = None
    next_segment = None
    for segment in segments:
        if segment["end"] <= offset:
            prev_segment = segment
            continue
        next_segment = segment
        break
    parts = []
    if prev_segment is not None:
        parts.append(
            f"prev={prev_segment['idx']}@0x{prev_segment['start']:x}-0x{prev_segment['end']:x}"
            f"+0x{offset - prev_segment['end']:x}"
        )
    if next_segment is not None:
        parts.append(
            f"next={next_segment['idx']}@0x{next_segment['start']:x}-0x{next_segment['end']:x}"
            f"-0x{next_segment['start'] - offset:x}"
        )
    return ";".join(parts)


def new_group(kind, key, offset=None, detail=""):
    return {
        "kind": kind,
        "key": key,
        "offset": offset,
        "detail": detail,
        "events": 0,
        "starts": set(),
        "ends": set(),
        "sources": Counter(),
        "targets": Counter(),
        "deltas": Counter(),
        "statuses": Counter(),
        "sites": Counter(),
    }


def add_trace_row(groups, kind, key, row, offset=None, detail=""):
    group = groups.setdefault((kind, key), new_group(kind, key, offset, detail))
    group["events"] += 1
    group["starts"].add(row["start_vm_ip"])
    group["ends"].add(row["end_vm_ip"])
    group["sources"][row["source_entry"]] += 1
    group["targets"][row["target_entry"]] += 1
    group["deltas"][row["delta"]] += 1
    group["statuses"][row["byte_status"]] += 1
    group["sites"][f"{row['kind']}@{row['site']}"] += 1


def add_static_group(groups, kind, key, events, source="", target="", delta="", status="", site="",
                     offset=None, detail=""):
    group = groups.setdefault((kind, key), new_group(kind, key, offset, detail))
    group["events"] += events
    if source:
        group["sources"][source] += events
    if target:
        group["targets"][target] += events
    if delta:
        group["deltas"][delta] += events
    if status:
        group["statuses"][status] += events
    if site:
        group["sites"][site] += events


def analyze_trace(dump_dir: Path, segments, groups, hidden_transitions):
    trace_path = dump_dir / "vm_instruction_trace.tsv"
    boundary_by_start = {segment["start"]: segment for segment in segments}
    with trace_path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            start = int(row["start_vm_ip"], 16)
            end = int(row["end_vm_ip"], 16)
            delta = parse_signed_hex(row["delta"])
            status = row["byte_status"]

            start_segment = find_segment(segments, start)
            end_segment = find_segment(segments, end)
            if end_segment is None:
                end_segment = find_boundary_segment(boundary_by_start, end)

            if start_segment is None:
                add_trace_row(
                    groups,
                    "uncovered_source_start",
                    f"0x{start:x}",
                    row,
                    offset=start,
                    detail="instruction source VM IP is not in an exact recovered segment",
                )

            if status == "exact" and delta > 0 and start_segment is not None and end_segment is None:
                hidden = hidden_transitions.get(f"0x{end:x}", "")
                kind = "hidden_transition_destination" if hidden else "uncovered_exact_destination"
                detail = (
                    f"exact positive instruction enters adjacent hidden span; hidden={hidden}"
                    if hidden else "exact positive instruction exits recovered bytecode coverage"
                )
                add_trace_row(
                    groups,
                    kind,
                    f"0x{end:x}",
                    row,
                    offset=end,
                    detail=detail,
                )

            if status.startswith("prefix_"):
                add_trace_row(
                    groups,
                    "prefix_long_jump",
                    f"{row['source_entry']}->{row['target_entry']}:{status}",
                    row,
                    offset=end,
                    detail="positive VM IP delta exceeds logged byte window",
                )
            elif status.startswith("backedge"):
                add_trace_row(
                    groups,
                    "backedge_sample",
                    f"{row['source_entry']}->{row['target_entry']}:{row['delta']}",
                    row,
                    offset=end,
                    detail="negative VM IP delta, exact consumed bytes unavailable from forward lookahead",
                )


def load_missing_exact(dump_dir: Path, groups, long_branches):
    path = dump_dir / "vm_isa_missing_exact.tsv"
    if not path.exists():
        return
    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            entry = row["source_entry"]
            events = int(row["events"], 10)
            long_branch = long_branches.get(entry)
            if long_branch:
                kind = "decoded_long_branch_source"
                detail = (
                    f"source_target={row.get('source_target', '')};"
                    f"unique_vm_ips={row.get('unique_vm_ips', '')};"
                    f"top_targets={row.get('top_targets', '')};"
                    f"top_deltas={row.get('top_ip_deltas', '')};"
                    f"long_branch_events={long_branch['events']};"
                    f"long_branch_variants={long_branch['variants']};"
                    f"long_branch_operand_lens={long_branch['operand_lens']};"
                    f"long_branch_operand_shapes={long_branch['operand_shapes']};"
                    f"long_branch_top_ir={long_branch['top_ir']}"
                )
                status = "decoded_long_branch"
            else:
                kind = "missing_exact_source"
                detail = (
                    f"source_target={row.get('source_target', '')};"
                    f"unique_vm_ips={row.get('unique_vm_ips', '')};"
                    f"top_targets={row.get('top_targets', '')};"
                    f"top_deltas={row.get('top_ip_deltas', '')}"
                )
                status = "missing_exact"
            group = groups.setdefault(
                (kind, entry),
                new_group(
                    kind,
                    entry,
                    detail=detail,
                ),
            )
            group["events"] += events
            group["sources"][entry] += events
            group["targets"].update(parse_count_items(row.get("top_targets", "")))
            group["deltas"].update(parse_count_items(row.get("top_ip_deltas", "")))
            group["statuses"][status] += events
            group["sites"].update(parse_count_items(row.get("top_sites", "")))


def load_observation_gaps(dump_dir: Path, groups):
    path = dump_dir / "vm_handler_semantics.tsv"
    if not path.exists():
        return
    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            observation = row["observation"]
            if observation not in {"unobserved", "target_only"}:
                continue
            kind = "unobserved_entry" if observation == "unobserved" else "target_only_entry"
            entry = row["entry"]
            events = int(row["events"], 10)
            add_static_group(
                groups,
                kind,
                entry,
                events,
                source=entry,
                target=row["target"],
                status=observation,
                detail=(
                    f"target={row.get('target', '')};"
                    f"frame_reads={row.get('frame_reads', '')};"
                    f"frame_writes={row.get('frame_writes', '')};"
                    f"ip_reads={row.get('ip_reads', '')};"
                    f"rets={row.get('rets', '')}"
                ),
            )


def emit_report(groups, segments, max_items, limit):
    rows = list(groups.values())
    for row in rows:
        row["priority"] = KIND_WEIGHT.get(row["kind"], 0) * max(row["events"], 1)
        row["nearest"] = nearest_segments(segments, row["offset"]) if row["offset"] is not None else ""

    rows.sort(key=lambda row: (-row["priority"], -row["events"], row["kind"], row["key"]))
    if limit:
        rows = rows[:limit]

    print(
        "rank\tkind\tkey\tpriority\tevents\tunique_start_ips\tunique_end_ips\t"
        "sources\ttargets\tdeltas\tstatuses\tsites\tnearest_recovered\tsample_starts\t"
        "sample_ends\tdetail"
    )
    for rank, row in enumerate(rows, 1):
        print(
            f"{rank}\t{row['kind']}\t{row['key']}\t{row['priority']}\t{row['events']}\t"
            f"{len(row['starts'])}\t{len(row['ends'])}\t"
            f"{fmt_counter(row['sources'], max_items)}\t"
            f"{fmt_counter(row['targets'], max_items)}\t"
            f"{fmt_counter(row['deltas'], max_items)}\t"
            f"{fmt_counter(row['statuses'], max_items)}\t"
            f"{fmt_counter(row['sites'], max_items)}\t"
            f"{row['nearest']}\t{fmt_set(row['starts'], max_items)}\t"
            f"{fmt_set(row['ends'], max_items)}\t{row['detail']}"
        )


def emit_summary(groups):
    by_kind = Counter()
    events_by_kind = Counter()
    for group in groups.values():
        by_kind[group["kind"]] += 1
        events_by_kind[group["kind"]] += group["events"]
    for kind, count in sorted(by_kind.items()):
        print(f"{kind}: rows={count} events={events_by_kind[kind]}", file=sys.stderr)


def main():
    parser = argparse.ArgumentParser(description="Prioritize VM bytecode and handler coverage gaps.")
    parser.add_argument("dump_dir", nargs="?", default="dumps/vmtail-wide-1m-w16")
    parser.add_argument("--segments", default=None)
    parser.add_argument("--long-branches", default=None)
    parser.add_argument("--no-long-branches", action="store_true")
    parser.add_argument("--hidden-transitions", default=None)
    parser.add_argument("--no-hidden-transitions", action="store_true")
    parser.add_argument("--max-items", type=int, default=8)
    parser.add_argument("--limit", type=int, default=0, help="limit emitted rows; 0 emits all")
    args = parser.parse_args()

    dump_dir = Path(args.dump_dir)
    segment_path = Path(args.segments) if args.segments else dump_dir / "vm_bytecode_segments.tsv"
    segments = load_segments(segment_path)
    long_branch_path = None if args.no_long_branches else find_long_branch_path(dump_dir, args.long_branches)
    long_branches = load_long_branches(long_branch_path)
    hidden_path = None if args.no_hidden_transitions else find_hidden_transition_path(dump_dir, args.hidden_transitions)
    hidden_transitions = load_hidden_transitions(hidden_path)
    groups = {}

    analyze_trace(dump_dir, segments, groups, hidden_transitions)
    load_missing_exact(dump_dir, groups, long_branches)
    load_observation_gaps(dump_dir, groups)

    emit_summary(groups)
    emit_report(groups, segments, args.max_items, args.limit)


if __name__ == "__main__":
    main()
