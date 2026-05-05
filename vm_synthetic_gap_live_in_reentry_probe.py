#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")


def read_tsv(path):
    path = Path(path)
    if not path.exists():
        return []
    with path.open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def parse_hex(text):
    if not text:
        return None
    return int(text, 16)


def normalize_vm_ip(text):
    try:
        value = parse_hex(text)
    except (TypeError, ValueError):
        return text or ""
    if value is None:
        return ""
    return f"0x{value:x}"


def parse_int(text):
    if text is None or text == "":
        return 0
    try:
        return int(text, 0)
    except ValueError:
        return 0


def parse_ratio(text):
    if not text or "/" not in text:
        return 0, 0
    left, right = text.split("/", 1)
    try:
        return int(left, 0), int(right, 0)
    except ValueError:
        return 0, 0


def load_live_in_roles(path):
    rows = {}
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if not start:
            continue
        rows[start] = row
    return rows


def load_dynamic_stitches(path):
    rows = defaultdict(list)
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            rows[start].append(row)
    for start_rows in rows.values():
        start_rows.sort(key=lambda row: (
            parse_int(row.get("start_event_count", "")),
            row.get("resolution", ""),
            parse_int(row.get("inferred_next_source_entry", "")),
        ))
    return rows


def load_final_tail_probes(path):
    rows = defaultdict(list)
    for row in read_tsv(path):
        source = row.get("source_entry", "")
        if source:
            rows[source].append(row)
    return rows


def matching_final_tail_probe(live_row, probes):
    source = live_row.get("source_entry", "")
    final_site = normalize_vm_ip(live_row.get("final_tail_site", ""))
    target_reg = live_row.get("final_tail_target_reg", "")
    for probe in probes.get(source, []):
        if final_site and normalize_vm_ip(probe.get("final_tail_site", "")) != final_site:
            continue
        if target_reg and probe.get("final_tail_target_reg", "") != target_reg:
            continue
        return probe
    return None


def final_tail_proof_summary(probe):
    if not probe:
        return {
            "events": "0",
            "target_reg_match": "",
            "deref_match": "",
            "source_tail_proof_full": "0",
        }
    events = parse_int(probe.get("events", ""))
    target_num, target_den = parse_ratio(probe.get("target_reg_equals_target", ""))
    target_full = events > 0 and target_num == target_den == events
    deref_full = events > 0
    for part in (probe.get("deref_mem_matches_target", "") or "").split(","):
        if not part or ":" not in part:
            continue
        _reg, ratio = part.split(":", 1)
        num, den = parse_ratio(ratio)
        if num != den or den != events:
            deref_full = False
    return {
        "events": str(events),
        "target_reg_match": probe.get("target_reg_equals_target", ""),
        "deref_match": probe.get("deref_mem_matches_target", ""),
        "source_tail_proof_full": "1" if target_full and deref_full else "0",
    }


def live_mem_match_class(live_row):
    resolution = live_row.get("resolution", "")
    if resolution == "final_tail_mem_deref_matches_event_target":
        return "row_exact_final_tail_mem_match"
    if resolution == "tail_mem_deref_matches_event_target_at_observed_site":
        return "row_observed_site_mem_match"
    if "mem_deref_observed" in resolution:
        return "row_mem_observed_target_mismatch"
    if resolution == "live_regs_named_mem_deref_unresolved":
        return "row_live_deref_unresolved"
    return resolution or "-"


def dynamic_reentry(stitch_row):
    return (
        stitch_row
        and stitch_row.get("resolution", "") == "dynamic_stitch_to_next_hooked_source"
        and stitch_row.get("inferred_next_source_start_vm_ip", "")
    )


def classify_reentry(live_row, stitch_row, proof):
    if not stitch_row:
        return "missing_dynamic_stitch", "comment_only", "no dynamic stitch event for this live-in start"
    if not dynamic_reentry(stitch_row):
        return "ambiguous_dynamic_reentry", "comment_only", "no unique byte-matched next hooked source"
    if live_row.get("resolution", "") == "final_tail_mem_deref_matches_event_target":
        return (
            "exact_tail_dynamic_reentry_not_promoted",
            "comment_only",
            "row has exact final-tail target proof, but no statically replayed hidden chain to the next hook",
        )
    if live_row.get("resolution", "") == "tail_mem_deref_matches_event_target_at_observed_site":
        return (
            "observed_site_mem_match_dynamic_reentry_not_promoted",
            "comment_only",
            "memory match is not at the source final tail site, and the dynamic stitch may skip unhooked handlers",
        )
    if proof.get("source_tail_proof_full") == "1":
        return (
            "source_tail_mechanism_dynamic_reentry_not_promoted",
            "comment_only",
            "source final-tail mechanism is proven, but row-level hidden handlers are not replayed",
        )
    return (
        "dynamic_reentry_live_deref_unproven",
        "comment_only",
        "live dereference lacks exact final-tail proof for this row",
    )


def event_span(row):
    if not row:
        return ""
    start = row.get("start_event_count", "")
    end = row.get("next_event_count", "")
    if start or end:
        return f"{start}->{end}"
    return ""


def make_row(live_row, stitch_row, proof):
    reentry_class, action, blocker = classify_reentry(live_row, stitch_row, proof)
    out = {
        "source_entry": live_row.get("source_entry", ""),
        "synthetic_start_vm_ip": normalize_vm_ip(live_row.get("synthetic_start_vm_ip", "")),
        "missing_successor_vm_ip": normalize_vm_ip(live_row.get("missing_successor_vm_ip", "")),
        "target_expr": live_row.get("target_expr", ""),
        "live_in_resolution": live_row.get("resolution", ""),
        "live_mem_match_class": live_mem_match_class(live_row),
        "tail_event_site_match": live_row.get("tail_event_site_match", ""),
        "tail_event_site": normalize_vm_ip(live_row.get("tail_event_site", "")),
        "tail_event_target_entry": live_row.get("tail_event_target_entry", ""),
        "deref_reads": live_row.get("deref_reads", ""),
        "final_tail_site": normalize_vm_ip(live_row.get("final_tail_site", "")),
        "final_tail_target_reg": live_row.get("final_tail_target_reg", ""),
        "source_final_tail_proof_events": proof.get("events", "0"),
        "source_final_tail_target_reg_match": proof.get("target_reg_match", ""),
        "source_final_tail_deref_match": proof.get("deref_match", ""),
        "source_final_tail_proof_full": proof.get("source_tail_proof_full", "0"),
        "dynamic_resolution": "",
        "dynamic_event_span": "",
        "next_site": "",
        "next_end_vm_ip": "",
        "next_tail_target_entry": "",
        "candidate_entries": "",
        "inferred_next_source_entry": "",
        "inferred_next_source_start_vm_ip": "",
        "inferred_next_source_delta": "",
        "inferred_hidden_delta": "",
        "inferred_next_source_bytes": "",
        "inference_evidence": "",
        "reentry_class": reentry_class,
        "hard_cfg_action": action,
        "promotion_blocker": blocker,
    }
    if stitch_row:
        out.update({
            "dynamic_resolution": stitch_row.get("resolution", ""),
            "dynamic_event_span": event_span(stitch_row),
            "next_site": normalize_vm_ip(stitch_row.get("next_site", "")),
            "next_end_vm_ip": normalize_vm_ip(stitch_row.get("next_end_vm_ip", "")),
            "next_tail_target_entry": stitch_row.get("next_tail_target_entry", ""),
            "candidate_entries": stitch_row.get("candidate_entries", ""),
            "inferred_next_source_entry": stitch_row.get("inferred_next_source_entry", ""),
            "inferred_next_source_start_vm_ip": normalize_vm_ip(stitch_row.get("inferred_next_source_start_vm_ip", "")),
            "inferred_next_source_delta": stitch_row.get("inferred_next_source_delta", ""),
            "inferred_hidden_delta": stitch_row.get("inferred_hidden_delta", ""),
            "inferred_next_source_bytes": stitch_row.get("inferred_next_source_bytes", ""),
            "inference_evidence": stitch_row.get("inference_evidence", ""),
        })
    return out


def build_rows(args):
    live_rows = load_live_in_roles(args.live_in_roles)
    dynamic_rows = load_dynamic_stitches(args.dynamic_stitch)
    final_tail_probes = load_final_tail_probes(args.final_tail_site_probe)

    rows = []
    for start, live_row in sorted(live_rows.items(), key=lambda item: parse_hex(item[0]) or 0):
        proof = final_tail_proof_summary(matching_final_tail_probe(live_row, final_tail_probes))
        stitches = dynamic_rows.get(start) or [None]
        for stitch_row in stitches:
            rows.append(make_row(live_row, stitch_row, proof))
    return rows


FIELDS = [
    "source_entry",
    "synthetic_start_vm_ip",
    "missing_successor_vm_ip",
    "target_expr",
    "live_in_resolution",
    "live_mem_match_class",
    "tail_event_site_match",
    "tail_event_site",
    "tail_event_target_entry",
    "deref_reads",
    "final_tail_site",
    "final_tail_target_reg",
    "source_final_tail_proof_events",
    "source_final_tail_target_reg_match",
    "source_final_tail_deref_match",
    "source_final_tail_proof_full",
    "dynamic_resolution",
    "dynamic_event_span",
    "next_site",
    "next_end_vm_ip",
    "next_tail_target_entry",
    "candidate_entries",
    "inferred_next_source_entry",
    "inferred_next_source_start_vm_ip",
    "inferred_next_source_delta",
    "inferred_hidden_delta",
    "inferred_next_source_bytes",
    "inference_evidence",
    "reentry_class",
    "hard_cfg_action",
    "promotion_blocker",
]


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows, limit):
    starts = {row["synthetic_start_vm_ip"] for row in rows}
    class_counts = Counter(row["reentry_class"] for row in rows)
    dynamic_starts = {
        row["synthetic_start_vm_ip"]
        for row in rows
        if row["dynamic_resolution"] == "dynamic_stitch_to_next_hooked_source"
    }
    exact_rows = [
        row for row in rows
        if row["reentry_class"] == "exact_tail_dynamic_reentry_not_promoted"
    ]
    print("# Synthetic Gap Live-In Reentry Probe\n")
    print(
        f"Rows: {len(rows)}. Live-in starts: {len(starts)}. "
        f"Byte-matched dynamic reentry starts: {len(dynamic_starts)}. "
        f"Row-exact final-tail reentries: {len(exact_rows)}.\n"
    )
    print("Class mix: " + ", ".join(f"{key}:{value}" for key, value in class_counts.most_common()) + ".\n")
    print("| Start | Source | Live-In | Tail | Dynamic | Next Hooked Source | Next End | Class |")
    print("| --- | ---: | --- | --- | --- | --- | --- | --- |")
    shown = rows if limit <= 0 else rows[:limit]
    for row in shown:
        next_hook = "-"
        if row["inferred_next_source_entry"]:
            next_hook = f"entry_{row['inferred_next_source_entry']}@`{row['inferred_next_source_start_vm_ip']}`"
        tail = f"`{row['final_tail_site']}:{row['final_tail_target_reg']}`"
        if row["tail_event_site_match"] == "1":
            tail += " exact-row"
        print(
            f"| `{row['synthetic_start_vm_ip']}` | {row['source_entry']} | "
            f"`{row['live_mem_match_class']}` | {tail} | "
            f"`{row['dynamic_resolution'] or '-'}` | {next_hook} | "
            f"`{row['next_end_vm_ip'] or '-'}` | `{row['reentry_class']}` |"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"\n{omitted} additional rows omitted by the display limit.")
    print("\nAll rows remain comment-only unless a hidden-handler chain is statically replayed to the next hooked event.")


def main():
    parser = argparse.ArgumentParser(description="Join live-in synthetic gaps to dynamic next-hooked reentry and final-tail proof.")
    parser.add_argument("--live-in-roles", default=str(TRACE_DIR / "vm_synthetic_gap_live_in_roles.tsv"))
    parser.add_argument("--dynamic-stitch", default=str(TRACE_DIR / "vm_synthetic_gap_dynamic_stitch.tsv"))
    parser.add_argument("--final-tail-site-probe", default=str(TRACE_DIR / "vm_live_in_final_tail_site_probe.tsv"))
    parser.add_argument("--markdown", action="store_true")
    parser.add_argument("--limit", type=int, default=60)
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows, args.limit)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_live_in_reentry_probe_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
