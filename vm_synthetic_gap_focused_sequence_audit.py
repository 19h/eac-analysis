#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv
from vm_synthetic_gap_concrete_state_audit import top_counter
from vm_trace_graph import (
    build_tail_maps,
    format_signed_hex,
    format_word_bytes,
    parse_event,
    read_dispatch_table,
)


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
DEFAULT_FOCUSED_RUNS = [
    Path("dumps/vmtail-live-residual-targets/run.stderr"),
    Path("dumps/vmtail-state-residual-targets/run.stderr"),
    Path("dumps/vmtail-residual-122e3c-context/run.stderr"),
]


FIELDS = [
    "source_entry",
    "synthetic_start_vm_ip",
    "focused_direct_promotion_candidate",
    "raw_start_event_rows",
    "raw_sequence_rows",
    "unique_raw_transfers",
    "raw_sequence_class_mix",
    "following_residual_start_mix",
    "chain_path",
    "chain_terminal",
    "chain_length",
    "example_trace_file",
    "example_start_event_index",
    "example_start_event_count",
    "example_start_event_kind",
    "example_start_event_site",
    "example_start_event_entry",
    "example_next_event_kind",
    "example_next_event_site",
    "example_next_event_site_sources",
    "example_next_site_matches_start_entry",
    "example_next_event_vm_ip",
    "example_next_event_delta",
    "example_next_event_target_entry",
    "example_next_event_target",
    "example_next_event_byte_status",
    "example_next_event_bytes",
    "example_following_event_kind",
    "example_following_event_site",
    "example_following_event_vm_ip",
    "example_following_event_delta",
    "example_following_event_entry",
    "example_following_residual_start",
    "sequence_promotion_candidate",
    "promotion_blocker",
]


def fmt_hex(value):
    if value is None:
        return ""
    return f"0x{value:x}"


def compact(items):
    return top_counter(Counter(item for item in items if item))


def normalize_trace_name(path):
    path = Path(path)
    try:
        return str(path.relative_to(Path.cwd()))
    except ValueError:
        return str(path)


def load_residual_rows(path):
    rows = []
    for row in read_tsv(path):
        start = row.get("synthetic_start_vm_ip", "")
        if start:
            rows.append(row)
    return rows


def load_direct_audit(path):
    out = {}
    if not path or not Path(path).exists():
        return out
    for row in read_tsv(path):
        start = row.get("synthetic_start_vm_ip", "")
        if start:
            out[start] = row
    return out


def iter_events(path, target_to_entry):
    events_by_frame = defaultdict(list)
    trace_name = normalize_trace_name(path)
    event_index = 0
    with Path(path).open(errors="replace") as handle:
        for line in handle:
            event = parse_event(line, target_to_entry)
            if event is None:
                continue
            event_index += 1
            events_by_frame[event.frame].append({
                "event": event,
                "trace_file": trace_name,
                "event_index": event_index,
            })
    return events_by_frame


def site_source_entries(site_sources, site):
    return sorted(entry for entry, _target, _reg, _distance in site_sources.get(site, []))


def classify_transfer(start_event, next_event, site_sources):
    if next_event is None:
        return "raw_start_seen_no_next_event"
    if next_event.kind == "dispatch":
        return "raw_next_dispatch"
    sources = site_source_entries(site_sources, next_event.site)
    if start_event.entry in sources:
        return "raw_next_tail_site_matches_start_entry"
    return "raw_next_tail_indirect_site"


def collect_raw_sequences(run_paths, residual_starts, target_to_entry, site_sources):
    by_start = defaultdict(list)
    start_seen = Counter()
    for path in run_paths:
        if not Path(path).exists():
            continue
        for frame_events in iter_events(path, target_to_entry).values():
            for idx, item in enumerate(frame_events):
                event = item["event"]
                start = fmt_hex(event.vm_ip)
                if start not in residual_starts:
                    continue
                start_seen[start] += 1
                next_item = frame_events[idx + 1] if idx + 1 < len(frame_events) else None
                following_item = frame_events[idx + 2] if idx + 2 < len(frame_events) else None
                next_event = next_item["event"] if next_item else None
                following_event = following_item["event"] if following_item else None
                delta = next_event.vm_ip - event.vm_ip if next_event else None
                byte_hex, byte_status = format_word_bytes(event.words, delta)
                sources = site_source_entries(site_sources, next_event.site) if next_event else []
                following_start = ""
                following_delta = None
                if following_event is not None:
                    following_delta = following_event.vm_ip - next_event.vm_ip if next_event else None
                    candidate = fmt_hex(following_event.vm_ip)
                    if candidate in residual_starts:
                        following_start = candidate
                by_start[start].append({
                    "trace_file": item["trace_file"],
                    "start_event_index": str(item["event_index"]),
                    "start_event_count": str(event.count),
                    "start_event_kind": event.kind,
                    "start_event_site": fmt_hex(event.site),
                    "start_event_entry": str(event.entry) if event.entry is not None else "",
                    "next_event_kind": next_event.kind if next_event else "",
                    "next_event_site": fmt_hex(next_event.site) if next_event else "",
                    "next_event_site_sources": ",".join(str(entry) for entry in sources),
                    "next_site_matches_start_entry": "yes" if event.entry in sources else "no",
                    "next_event_vm_ip": fmt_hex(next_event.vm_ip) if next_event else "",
                    "next_event_delta": format_signed_hex(delta) if delta is not None else "",
                    "next_event_target_entry": str(next_event.entry) if next_event and next_event.entry is not None else "",
                    "next_event_target": fmt_hex(next_event.target) if next_event else "",
                    "next_event_byte_status": byte_status,
                    "next_event_bytes": byte_hex,
                    "following_event_kind": following_event.kind if following_event else "",
                    "following_event_site": fmt_hex(following_event.site) if following_event else "",
                    "following_event_vm_ip": fmt_hex(following_event.vm_ip) if following_event else "",
                    "following_event_delta": format_signed_hex(following_delta) if following_delta is not None else "",
                    "following_event_entry": str(following_event.entry) if following_event and following_event.entry is not None else "",
                    "following_residual_start": following_start,
                    "raw_sequence_class": classify_transfer(event, next_event, site_sources),
                })
    return by_start, start_seen


def transfer_signature(row):
    return (
        row.get("next_event_kind", ""),
        row.get("next_event_site", ""),
        row.get("next_event_vm_ip", ""),
        row.get("next_event_delta", ""),
        row.get("next_event_target_entry", ""),
        row.get("next_event_target", ""),
        row.get("next_event_byte_status", ""),
        row.get("following_residual_start", ""),
    )


def unique_rows(rows):
    seen = set()
    out = []
    for row in rows:
        sig = transfer_signature(row)
        if sig in seen:
            continue
        seen.add(sig)
        out.append(row)
    return out


def select_example(rows):
    if not rows:
        return {}
    unique = unique_rows(rows)
    direct = [row for row in unique if row.get("raw_sequence_class") == "raw_next_dispatch"]
    if direct:
        return direct[0]
    linked = [row for row in unique if row.get("following_residual_start")]
    if linked:
        return linked[0]
    with_next = [row for row in unique if row.get("next_event_vm_ip")]
    if with_next:
        return with_next[0]
    return unique[0]


def build_chain_paths(starts, raw_by_start, direct_audit):
    graph = {}
    for start in starts:
        example = select_example(raw_by_start.get(start, []))
        next_start = example.get("following_residual_start", "")
        if next_start:
            graph[start] = next_start

    direct_promoted = {
        start for start, row in direct_audit.items()
        if row.get("promotion_candidate", "") == "yes"
    }
    paths = {}
    for start in starts:
        path = []
        seen = set()
        cur = start
        terminal = ""
        while cur:
            if cur in seen:
                path.append(cur)
                terminal = "cycle"
                break
            seen.add(cur)
            path.append(cur)
            if cur in direct_promoted:
                terminal = "focused_direct_promoted"
                break
            nxt = graph.get(cur)
            if not nxt:
                rows = raw_by_start.get(cur, [])
                if rows:
                    terminal = "raw_sequence_no_residual_successor"
                else:
                    terminal = "no_raw_sequence"
                break
            cur = nxt
        paths[start] = (path, terminal)
    return paths


def build_rows(args):
    residual_rows = load_residual_rows(args.residual_audit)
    residual_starts = {row.get("synthetic_start_vm_ip", "") for row in residual_rows}
    direct_audit = load_direct_audit(args.focused_direct_trace_audit)
    table = read_dispatch_table(Path(args.eac))
    target_to_entry = {target: entry for entry, target in enumerate(table)}
    eac = Path(args.eac).read_bytes()
    site_sources, _entry_tails = build_tail_maps(eac, table, args.window)
    raw_by_start, start_seen = collect_raw_sequences(args.run, residual_starts, target_to_entry, site_sources)
    chains = build_chain_paths(residual_starts, raw_by_start, direct_audit)

    rows = []
    for residual in residual_rows:
        start = residual.get("synthetic_start_vm_ip", "")
        raw_rows = raw_by_start.get(start, [])
        unique = unique_rows(raw_rows)
        example = select_example(raw_rows)
        chain_path, chain_terminal = chains.get(start, ([start], "no_raw_sequence"))
        promotion_candidate = "no"
        blocker = "sequence-only indirect tail evidence"
        if direct_audit.get(start, {}).get("promotion_candidate", "") == "yes":
            promotion_candidate = "superseded_by_focused_direct_bridge"
            blocker = "-"
        elif chain_terminal == "focused_direct_promoted":
            blocker = "chains into a focused direct bridge but the first hop is an indirect tail-site sequence"
        elif start_seen[start] and not any(row.get("next_event_vm_ip", "") for row in raw_rows):
            blocker = "focused run stopped before a following event for this residual start"

        rows.append({
            "source_entry": residual.get("source_entry", ""),
            "synthetic_start_vm_ip": start,
            "focused_direct_promotion_candidate": direct_audit.get(start, {}).get("promotion_candidate", "no"),
            "raw_start_event_rows": str(start_seen[start]),
            "raw_sequence_rows": str(len(raw_rows)),
            "unique_raw_transfers": str(len(unique)),
            "raw_sequence_class_mix": compact(row.get("raw_sequence_class", "") for row in raw_rows),
            "following_residual_start_mix": compact(row.get("following_residual_start", "") for row in raw_rows),
            "chain_path": " -> ".join(chain_path),
            "chain_terminal": chain_terminal,
            "chain_length": str(len(chain_path)),
            "example_trace_file": example.get("trace_file", ""),
            "example_start_event_index": example.get("start_event_index", ""),
            "example_start_event_count": example.get("start_event_count", ""),
            "example_start_event_kind": example.get("start_event_kind", ""),
            "example_start_event_site": example.get("start_event_site", ""),
            "example_start_event_entry": example.get("start_event_entry", ""),
            "example_next_event_kind": example.get("next_event_kind", ""),
            "example_next_event_site": example.get("next_event_site", ""),
            "example_next_event_site_sources": example.get("next_event_site_sources", ""),
            "example_next_site_matches_start_entry": example.get("next_site_matches_start_entry", ""),
            "example_next_event_vm_ip": example.get("next_event_vm_ip", ""),
            "example_next_event_delta": example.get("next_event_delta", ""),
            "example_next_event_target_entry": example.get("next_event_target_entry", ""),
            "example_next_event_target": example.get("next_event_target", ""),
            "example_next_event_byte_status": example.get("next_event_byte_status", ""),
            "example_next_event_bytes": example.get("next_event_bytes", ""),
            "example_following_event_kind": example.get("following_event_kind", ""),
            "example_following_event_site": example.get("following_event_site", ""),
            "example_following_event_vm_ip": example.get("following_event_vm_ip", ""),
            "example_following_event_delta": example.get("following_event_delta", ""),
            "example_following_event_entry": example.get("following_event_entry", ""),
            "example_following_residual_start": example.get("following_residual_start", ""),
            "sequence_promotion_candidate": promotion_candidate,
            "promotion_blocker": blocker,
        })
    return rows


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    writer.writerows(rows)


def emit_markdown(rows):
    classes = Counter()
    terminals = Counter(row.get("chain_terminal", "") for row in rows)
    with_next = [row for row in rows if row.get("example_next_event_vm_ip", "")]
    linked = [row for row in rows if row.get("example_following_residual_start", "")]
    for row in rows:
        for item in (row.get("raw_sequence_class_mix", "") or "").split(","):
            if item and ":" in item:
                key, value = item.rsplit(":", 1)
                classes[key] += int(value)
    print("# Synthetic Gap Focused Sequence Audit\n")
    print("Raw focused VMTAIL sequence around residual starts, including indirect tail-site hops that are not hard CFG evidence.\n")
    print(f"Rows: `{len(rows)}`\n")
    print(f"- starts with raw focused start events: `{sum(1 for row in rows if int(row.get('raw_start_event_rows', '0') or 0) > 0)}`")
    print(f"- starts with a following raw event: `{len(with_next)}`")
    print(f"- starts whose next raw event is followed by another residual start: `{len(linked)}`\n")
    print("## Raw Class Mix\n")
    print("| Class | Rows |")
    print("| --- | ---: |")
    for key, value in classes.most_common():
        print(f"| `{key}` | {value} |")
    print("\n## Chain Terminals\n")
    print("| Terminal | Starts |")
    print("| --- | ---: |")
    for key, value in terminals.most_common():
        print(f"| `{key}` | {value} |")
    print("\n## Residual Sequence Chains\n")
    print("| Start | Source | Raw Next | Following Residual | Chain Terminal | Chain |")
    print("| --- | ---: | --- | --- | --- | --- |")
    for row in rows:
        raw_next = "-"
        if row.get("example_next_event_vm_ip", ""):
            target = row.get("example_next_event_target_entry", "") or "?"
            raw_next = (
                f"{row.get('example_next_event_kind')} "
                f"{row.get('example_next_event_vm_ip')} "
                f"{row.get('example_next_event_delta')} -> entry {target}"
            )
        following = row.get("example_following_residual_start", "") or "-"
        print(
            f"| `{row.get('synthetic_start_vm_ip', '')}` | {row.get('source_entry', '')} | "
            f"`{raw_next}` | `{following}` | `{row.get('chain_terminal', '')}` | "
            f"`{row.get('chain_path', '')}` |"
        )


def main():
    parser = argparse.ArgumentParser(
        description="Audit raw focused VMTAIL sequence around residual synthetic starts."
    )
    parser.add_argument("--residual-audit", default=str(TRACE_DIR / "vm_synthetic_gap_residual_audit.tsv"))
    parser.add_argument("--focused-direct-trace-audit", default=str(TRACE_DIR / "vm_synthetic_gap_focused_direct_trace_audit.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--window", type=lambda value: int(value, 0), default=0x1200)
    parser.add_argument("--run", action="append", default=[str(path) for path in DEFAULT_FOCUSED_RUNS])
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_focused_sequence_audit_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
