#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
ALLSTATIC_DIR = Path("dumps/vmtail-allstatic")
VMTAIL_RE = re.compile(r"^\[VMTAIL\] (?P<body>.*)$")
KV_RE = re.compile(r"\b(?P<key>[a-z_]+)=(?P<value>[^ ]+)")


def read_tsv(path):
    path = Path(path)
    if not path.exists():
        return []
    with path.open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def parse_int(text):
    if text in (None, ""):
        return 0
    try:
        return int(text, 0)
    except ValueError:
        return 0


def parse_hex(text):
    if not text:
        return None
    return int(text, 16)


def normalize_hex(text):
    try:
        value = parse_hex(text)
    except (TypeError, ValueError):
        return text or ""
    if value is None:
        return ""
    return f"0x{value:x}"


def compact_counter(counter, limit=6):
    if not counter:
        return ""
    items = counter.most_common(None if limit <= 0 else limit)
    return ",".join(f"{key}:{value}" for key, value in items)


def compact_values(values, limit=8):
    values = [value for value in values if value not in (None, "")]
    if limit > 0 and len(values) > limit:
        return ",".join(values[:limit]) + f",...(+{len(values) - limit})"
    return ",".join(values)


def load_handler_maps(path):
    target_to_entry = {}
    site_to_entries = defaultdict(set)
    for row in read_tsv(path):
        entry = row.get("entry", "")
        if not entry:
            continue
        target = normalize_hex(row.get("target", ""))
        if target:
            target_to_entry[target] = entry
        site = normalize_hex(row.get("tail_site", ""))
        if site:
            site_to_entries[site].add(entry)
    return target_to_entry, site_to_entries


def site_entries_text(site, site_to_entries):
    entries = sorted(site_to_entries.get(site, []), key=lambda value: int(value, 0))
    if not entries:
        return "-"
    return "|".join(entries)


def parse_allstatic_events(path, target_to_entry, site_to_entries):
    events = []
    with Path(path).open(errors="replace") as handle:
        for line in handle:
            match = VMTAIL_RE.match(line)
            if not match:
                continue
            fields = {kv.group("key"): kv.group("value") for kv in KV_RE.finditer(match.group("body"))}
            target_off = normalize_hex(fields.get("target_off", ""))
            site = normalize_hex(fields.get("site", ""))
            event = {
                "idx": len(events),
                "count": str(parse_int(fields.get("count", ""))),
                "site": site,
                "site_source_entries": site_entries_text(site, site_to_entries),
                "frame_off": normalize_hex(fields.get("frame_off", "")),
                "vm_ip_off": normalize_hex(fields.get("vm_ip_off", "")),
                "target_off": target_off,
                "target_entry": target_to_entry.get(target_off, ""),
            }
            events.append(event)
    return events


def load_live_in_reentries(path):
    rows = read_tsv(path)
    rows.sort(key=lambda row: (
        parse_hex(row.get("synthetic_start_vm_ip", "")) or 0,
        parse_int(row.get("source_entry", "")),
        parse_int((row.get("dynamic_event_span", "") or "0").split("->", 1)[0]),
        row.get("dynamic_resolution", ""),
    ))
    return rows


def index_start_events(events):
    by_start = defaultdict(list)
    for event in events:
        if event.get("vm_ip_off") and event.get("target_entry"):
            by_start[(event["vm_ip_off"], event["target_entry"])].append(event)
    return by_start


def next_event(events, event):
    idx = event["idx"] + 1
    if idx >= len(events):
        return None
    return events[idx]


def expected_next(row):
    return {
        "site": normalize_hex(row.get("next_site", "")),
        "end": normalize_hex(row.get("next_end_vm_ip", "")),
        "target": row.get("next_tail_target_entry", ""),
    }


def is_same_frame(start, nxt):
    return bool(nxt) and start.get("frame_off", "") == nxt.get("frame_off", "")


def is_exact_match(row, start, nxt):
    if not is_same_frame(start, nxt):
        return False
    expected = expected_next(row)
    return (
        expected["site"]
        and expected["end"]
        and expected["target"]
        and nxt.get("site", "") == expected["site"]
        and nxt.get("vm_ip_off", "") == expected["end"]
        and nxt.get("target_entry", "") == expected["target"]
    )


def is_target_end_match(row, start, nxt):
    if not is_same_frame(start, nxt):
        return False
    expected = expected_next(row)
    return (
        expected["end"]
        and expected["target"]
        and nxt.get("vm_ip_off", "") == expected["end"]
        and nxt.get("target_entry", "") == expected["target"]
    )


def classify(row, starts, same_frame_nexts, exact_matches, target_end_matches):
    if not starts:
        return (
            "not_seen_in_allstatic",
            "allstatic_not_observed",
            "comment_only",
            "all-static run hit its event limit before this live-in start or did not cover this path",
        )
    if not same_frame_nexts:
        return (
            "allstatic_seen_without_next_event",
            "allstatic_start_only",
            "comment_only",
            "live-in start was seen in all-static trace, but no same-frame next event was available",
        )
    if exact_matches:
        if row.get("dynamic_resolution", "") == "dynamic_stitch_to_next_hooked_source":
            return (
                "allstatic_next_matches_dynamic_reentry",
                "allstatic_immediate_next_hook_corroborates_dynamic_stitch",
                "comment_only",
                "all-static immediate next-hook corroborates the dynamic stitch, but hidden live-in handlers are not replayed as a hard CFG chain",
            )
        return (
            "allstatic_next_matches_ambiguous_event",
            "allstatic_immediate_next_hook_corroborates_ambiguous_event",
            "comment_only",
            "all-static immediate next-hook corroborates this ambiguous event row, but the next source is not byte-matched",
        )
    if target_end_matches:
        return (
            "allstatic_next_target_end_match_site_mismatch",
            "allstatic_partial_immediate_next_hook_match",
            "comment_only",
            "all-static next hook reached the expected VM IP and target but through a different native tail site",
        )
    return (
        "allstatic_next_mismatch",
        "allstatic_conflict_needs_review",
        "comment_only",
        "all-static immediate next event did not match the dynamic reentry expectation",
    )


def make_row(row, events, by_start, site_to_entries):
    start = normalize_hex(row.get("synthetic_start_vm_ip", ""))
    source = row.get("source_entry", "")
    starts = by_start.get((start, source), [])
    nexts = [(event, next_event(events, event)) for event in starts]
    same_frame_nexts = [(event, nxt) for event, nxt in nexts if is_same_frame(event, nxt)]
    exact_matches = [(event, nxt) for event, nxt in same_frame_nexts if is_exact_match(row, event, nxt)]
    target_end_matches = [(event, nxt) for event, nxt in same_frame_nexts if is_target_end_match(row, event, nxt)]
    status, evidence_class, action, blocker = classify(
        row, starts, same_frame_nexts, exact_matches, target_end_matches
    )

    next_site_sources = Counter()
    next_sites = Counter()
    next_ends = Counter()
    next_targets = Counter()
    next_counts = []
    for _event, nxt in same_frame_nexts:
        next_counts.append(nxt.get("count", ""))
        next_sites[nxt.get("site", "-")] += 1
        next_ends[nxt.get("vm_ip_off", "-")] += 1
        next_targets[nxt.get("target_entry", "-")] += 1
        site_sources = nxt.get("site_source_entries", "") or site_entries_text(nxt.get("site", ""), site_to_entries)
        next_site_sources[f"{nxt.get('site', '-') }={site_sources}"] += 1

    expected = expected_next(row)
    return {
        "source_entry": source,
        "synthetic_start_vm_ip": start,
        "missing_successor_vm_ip": normalize_hex(row.get("missing_successor_vm_ip", "")),
        "dynamic_resolution": row.get("dynamic_resolution", ""),
        "dynamic_event_span": row.get("dynamic_event_span", ""),
        "expected_next_site": expected["site"],
        "expected_next_end_vm_ip": expected["end"],
        "expected_next_tail_target_entry": expected["target"],
        "inferred_next_source_entry": row.get("inferred_next_source_entry", ""),
        "inferred_next_source_start_vm_ip": normalize_hex(row.get("inferred_next_source_start_vm_ip", "")),
        "reentry_class": row.get("reentry_class", ""),
        "allstatic_start_events": str(len(starts)),
        "allstatic_start_counts": compact_values([event.get("count", "") for event in starts]),
        "allstatic_start_sites": compact_counter(Counter(event.get("site", "-") for event in starts)),
        "allstatic_next_events": str(len(same_frame_nexts)),
        "allstatic_next_counts": compact_values(next_counts),
        "allstatic_next_sites": compact_counter(next_sites),
        "allstatic_next_end_vm_ips": compact_counter(next_ends),
        "allstatic_next_tail_target_entries": compact_counter(next_targets),
        "allstatic_next_site_source_entries": compact_counter(next_site_sources),
        "allstatic_exact_match_events": str(len(exact_matches)),
        "allstatic_exact_match_counts": compact_values([event.get("count", "") for event, _nxt in exact_matches]),
        "allstatic_status": status,
        "allstatic_evidence_class": evidence_class,
        "hard_cfg_action": action,
        "promotion_blocker": blocker,
    }


FIELDS = [
    "source_entry",
    "synthetic_start_vm_ip",
    "missing_successor_vm_ip",
    "dynamic_resolution",
    "dynamic_event_span",
    "expected_next_site",
    "expected_next_end_vm_ip",
    "expected_next_tail_target_entry",
    "inferred_next_source_entry",
    "inferred_next_source_start_vm_ip",
    "reentry_class",
    "allstatic_start_events",
    "allstatic_start_counts",
    "allstatic_start_sites",
    "allstatic_next_events",
    "allstatic_next_counts",
    "allstatic_next_sites",
    "allstatic_next_end_vm_ips",
    "allstatic_next_tail_target_entries",
    "allstatic_next_site_source_entries",
    "allstatic_exact_match_events",
    "allstatic_exact_match_counts",
    "allstatic_status",
    "allstatic_evidence_class",
    "hard_cfg_action",
    "promotion_blocker",
]


def build_rows(args):
    target_to_entry, site_to_entries = load_handler_maps(args.handler_table)
    events = parse_allstatic_events(args.allstatic_log, target_to_entry, site_to_entries)
    by_start = index_start_events(events)
    rows = [
        make_row(row, events, by_start, site_to_entries)
        for row in load_live_in_reentries(args.live_in_reentry_probe)
    ]
    return rows, len(events)


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows, event_count, limit):
    starts = {row["synthetic_start_vm_ip"] for row in rows}
    seen_starts = {
        row["synthetic_start_vm_ip"]
        for row in rows
        if parse_int(row.get("allstatic_start_events", "0")) > 0
    }
    exact_rows = [
        row for row in rows
        if parse_int(row.get("allstatic_exact_match_events", "0")) > 0
    ]
    exact_starts = {row["synthetic_start_vm_ip"] for row in exact_rows}
    statuses = Counter(row["allstatic_status"] for row in rows)
    print("# Synthetic Gap All-Static Reentry Probe\n")
    print(
        f"All-static VMTAIL events parsed: {event_count}. Rows: {len(rows)}. "
        f"Live-in starts: {len(starts)}. Starts seen in all-static: {len(seen_starts)}. "
        f"Rows with exact immediate-next match: {len(exact_rows)}. "
        f"Starts with an exact immediate-next match: {len(exact_starts)}.\n"
    )
    print("Status mix: " + ", ".join(f"{key}:{value}" for key, value in statuses.most_common()) + ".\n")
    print("| Start | Source | Dynamic | Expected Next | All-Static Next | Matches | Status |")
    print("| --- | ---: | --- | --- | --- | ---: | --- |")
    shown = rows if limit <= 0 else rows[:limit]
    for row in shown:
        expected = (
            f"`{row['expected_next_site']}->{row['expected_next_end_vm_ip']}`"
            f"/entry_{row['expected_next_tail_target_entry']}"
        )
        nexts = (
            f"sites=`{row['allstatic_next_sites'] or '-'}`; "
            f"ends=`{row['allstatic_next_end_vm_ips'] or '-'}`; "
            f"targets=`{row['allstatic_next_tail_target_entries'] or '-'}`"
        )
        print(
            f"| `{row['synthetic_start_vm_ip']}` | {row['source_entry']} | "
            f"`{row['dynamic_resolution'] or '-'}` | {expected} | {nexts} | "
            f"{row['allstatic_exact_match_events']} | `{row['allstatic_status']}` |"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"\n{omitted} additional rows omitted by the display limit.")
    print(
        "\nExact matches mean the next configured all-static tail hook in this run matched the "
        "dynamic reentry row. They remain comment-only because this still does not replay the "
        "hidden live-in handler chain as hard CFG."
    )


def main():
    parser = argparse.ArgumentParser(description="Correlate live-in synthetic gap reentry rows with all-static VMTAIL sequence evidence.")
    parser.add_argument("--live-in-reentry-probe", default=str(TRACE_DIR / "vm_synthetic_gap_live_in_reentry_probe.tsv"))
    parser.add_argument("--allstatic-log", default=str(ALLSTATIC_DIR / "run.stderr"))
    parser.add_argument("--handler-table", default=str(ALLSTATIC_DIR / "vm_handler_table.tsv"))
    parser.add_argument("--markdown", action="store_true")
    parser.add_argument("--limit", type=int, default=60)
    args = parser.parse_args()

    rows, event_count = build_rows(args)
    if args.markdown:
        emit_markdown(rows, event_count, args.limit)
    else:
        emit_tsv(rows)
    print(
        f"synthetic_gap_allstatic_reentry_probe_rows={len(rows)} allstatic_events={event_count}",
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
