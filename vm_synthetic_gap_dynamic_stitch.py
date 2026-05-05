#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path

from vm_pseudocode_dump import parse_delta, parse_hex, read_tsv
from vm_static_dispatch_validate import read_dispatch_table
from vm_static_path_profile import parse_gpr_fields
from vm_synthetic_gap_transfer_probe import first_counted_hex, source_from_counter


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")


def parse_top_counter(text):
    out = Counter()
    for item in (text or "").split(","):
        if not item:
            continue
        key, _, value = item.partition(":")
        try:
            out[key] += int(value, 0)
        except ValueError:
            pass
    return out


def load_events(path):
    events = []
    by_start_target = defaultdict(list)
    with Path(path).open(errors="replace") as handle:
        for line in handle:
            if not line.startswith("[VMTAIL]"):
                continue
            fields = parse_gpr_fields(line)
            needed = {"count", "site", "frame", "vm_ip_off", "target_off"}
            if not needed.issubset(fields):
                continue
            event = {
                "count": fields["count"],
                "site": fields["site"],
                "frame": fields["frame"],
                "vm_ip_off": fields["vm_ip_off"],
                "target_off": fields["target_off"],
            }
            events.append(event)
            by_start_target[(event["vm_ip_off"], event["target_off"])].append(len(events) - 1)
    return events, by_start_target


def load_site_entries(path):
    by_site = defaultdict(list)
    by_entry = {}
    for row in read_tsv(path):
        entry = row.get("entry", "")
        site_text = row.get("tail_site", "")
        if not entry or not site_text:
            continue
        try:
            site = parse_hex(site_text)
        except ValueError:
            continue
        source_events = int(row.get("source_events", "0") or "0")
        target_counts = parse_top_counter(row.get("top_targets", ""))
        info = {
            "entry": int(entry, 0),
            "site": site,
            "source_events": source_events,
            "target_counts": target_counts,
        }
        by_site[site].append(info)
        by_entry[info["entry"]] = info
    return by_site, by_entry


def load_isa(path):
    out = {}
    for row in read_tsv(path):
        entry = row.get("source_entry", "")
        if not entry:
            continue
        try:
            entry_i = int(entry, 0)
            pct = float(row.get("dominant_delta_pct", "0") or "0")
            delta = parse_delta(row.get("dominant_delta", "0"))
        except ValueError:
            continue
        top_bytes = {
            item.split(":", 1)[0]
            for item in (row.get("top_bytes", "") or "").split(",")
            if item and ":" in item
        }
        out[entry_i] = {
            "dominant_delta": delta,
            "dominant_delta_pct": pct,
            "top_bytes": top_bytes,
        }
    return out


def target_entry_for_offset(target_to_entry, target_off):
    value = target_to_entry.get(target_off)
    return "" if value is None else str(value)


def score_candidate(candidate, isa, eac, next_event, next_target_entry):
    entry = candidate["entry"]
    meta = isa.get(entry, {})
    score = 0
    reasons = []
    if candidate["source_events"] > 0:
        score += 1
        reasons.append("observed_source")
    if next_target_entry and next_target_entry in candidate["target_counts"]:
        score += 1
        reasons.append("target_seen")
    delta = meta.get("dominant_delta")
    pct = meta.get("dominant_delta_pct", 0.0)
    start = None
    byte_hex = ""
    if delta is not None and delta > 0 and pct == 100.0:
        start = next_event["vm_ip_off"] - delta
        if 0 <= start < len(eac) and start + delta <= len(eac):
            byte_hex = eac[start:start + delta].hex()
            if byte_hex in meta.get("top_bytes", set()):
                score += 4
                reasons.append("byte_match")
            else:
                reasons.append("byte_miss")
        else:
            reasons.append("byte_oob")
    else:
        reasons.append("nonfixed_delta")
    return {
        "entry": entry,
        "score": score,
        "reasons": ",".join(reasons),
        "delta": delta,
        "delta_pct": pct,
        "start": start,
        "bytes": byte_hex,
    }


def choose_candidate(candidates, isa, eac, next_event, target_to_entry):
    next_target_entry = target_entry_for_offset(target_to_entry, next_event["target_off"])
    scored = [
        score_candidate(candidate, isa, eac, next_event, next_target_entry)
        for candidate in candidates
    ]
    scored.sort(key=lambda item: (-item["score"], item["entry"]))
    if not scored:
        return None, scored
    if len(scored) > 1 and scored[0]["score"] == scored[1]["score"]:
        return None, scored
    return scored[0], scored


def fmt_hex(value):
    if value is None or value == "":
        return ""
    return f"0x{value:x}"


def fmt_delta(value):
    if value is None or value == "":
        return ""
    sign = "+" if value >= 0 else "-"
    return f"{sign}0x{abs(value):x}"


def compact_scored(scored, limit=5):
    parts = []
    for item in scored[:limit]:
        delta = fmt_delta(item["delta"])
        parts.append(f"{item['entry']}:{item['score']}:{delta}:{item['reasons']}")
    if len(scored) > limit:
        parts.append(f"...+{len(scored) - limit}")
    return ",".join(parts)


def build_rows(args):
    eac = Path(args.eac).read_bytes()
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    events, by_start_target = load_events(args.run)
    site_entries, _entry_info = load_site_entries(args.handler_table)
    isa = load_isa(args.isa_handlers)

    rows = []
    for gap in read_tsv(args.gaps):
        source = source_from_counter(gap.get("synthetic_sources", ""))
        if not source:
            continue
        source_i = int(source, 0)
        synthetic_start = parse_hex(gap["synthetic_start_vm_ip"])
        source_target = table[source_i]
        event_indexes = by_start_target.get((synthetic_start, source_target), [])
        if not event_indexes:
            rows.append({
                "source_entry": source,
                "synthetic_start_vm_ip": gap.get("synthetic_start_vm_ip", ""),
                "missing_successor_vm_ip": gap.get("missing_successor_vm_ip", ""),
                "gap_statuses": gap.get("synthetic_statuses", ""),
                "gap_bytes": first_counted_hex(gap.get("top_bytes", "")),
                "resolution": "no_start_event",
            })
            continue

        for event_index in event_indexes:
            event = events[event_index]
            next_event = events[event_index + 1] if event_index + 1 < len(events) else None
            row = {
                "source_entry": source,
                "synthetic_start_vm_ip": gap.get("synthetic_start_vm_ip", ""),
                "missing_successor_vm_ip": gap.get("missing_successor_vm_ip", ""),
                "gap_statuses": gap.get("synthetic_statuses", ""),
                "gap_bytes": first_counted_hex(gap.get("top_bytes", "")),
                "start_event_count": str(event["count"]),
                "start_site": fmt_hex(event["site"]),
                "start_target_entry": str(source_i),
            }
            if not next_event or next_event["frame"] != event["frame"]:
                row["resolution"] = "no_next_event"
                rows.append(row)
                continue

            next_candidates = site_entries.get(next_event["site"], [])
            choice, scored = choose_candidate(next_candidates, isa, eac, next_event, target_to_entry)
            next_target_entry = target_entry_for_offset(target_to_entry, next_event["target_off"])
            row.update({
                "next_event_count": str(next_event["count"]),
                "next_site": fmt_hex(next_event["site"]),
                "next_end_vm_ip": fmt_hex(next_event["vm_ip_off"]),
                "next_tail_target_entry": next_target_entry,
                "candidate_entries": compact_scored(scored),
            })
            if choice and choice["start"] is not None and choice["score"] >= args.min_score:
                hidden_delta = choice["start"] - synthetic_start
                row.update({
                    "resolution": "dynamic_stitch_to_source_start",
                    "inferred_next_source_entry": str(choice["entry"]),
                    "inferred_next_source_delta": fmt_delta(choice["delta"]),
                    "inferred_next_source_start_vm_ip": fmt_hex(choice["start"]),
                    "inferred_hidden_delta": fmt_delta(hidden_delta),
                    "inferred_next_source_bytes": choice["bytes"],
                    "inference_evidence": choice["reasons"],
                })
            elif scored:
                row["resolution"] = "ambiguous_next_source"
            else:
                row["resolution"] = "unmapped_next_site"
            rows.append(row)
    rows.sort(key=lambda row: (
        parse_hex(row.get("synthetic_start_vm_ip", "0x0")),
        int(row.get("start_event_count", "0") or "0"),
    ))
    return rows


def emit_tsv(rows):
    fields = [
        "source_entry",
        "synthetic_start_vm_ip",
        "missing_successor_vm_ip",
        "gap_statuses",
        "gap_bytes",
        "resolution",
        "start_event_count",
        "start_site",
        "start_target_entry",
        "next_event_count",
        "next_site",
        "next_end_vm_ip",
        "next_tail_target_entry",
        "candidate_entries",
        "inferred_next_source_entry",
        "inferred_next_source_delta",
        "inferred_next_source_start_vm_ip",
        "inferred_hidden_delta",
        "inferred_next_source_bytes",
        "inference_evidence",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow({field: row.get(field, "") for field in fields})


def emit_markdown(rows):
    resolutions = Counter(row.get("resolution", "") for row in rows)
    print("# Synthetic Gap Dynamic Stitch\n")
    print("Sequence-based stitching for synthetic-successor gaps using the raw VMTAIL event stream.")
    print("A `dynamic_stitch_to_source_start` row means the next hooked VMTAIL event's source handler was inferred from its tail site, fixed delta, and byte match at `next_end - delta`.\n")
    print(f"Rows: {len(rows)}.")
    print(f"Resolution mix: {', '.join(f'{k}:{v}' for k, v in resolutions.most_common()) or '-'}.\n")
    print("| Synthetic Start | Source | Gap Bytes | Resolution | Next Source | Hidden Delta | Next Source Start | Evidence |")
    print("| --- | ---: | --- | --- | ---: | ---: | --- | --- |")
    for row in rows:
        print(
            f"| `{row.get('synthetic_start_vm_ip', '')}` | {row.get('source_entry', '')} | "
            f"`{row.get('gap_bytes', '')}` | `{row.get('resolution', '')}` | "
            f"{row.get('inferred_next_source_entry', '-') or '-'} | "
            f"`{row.get('inferred_hidden_delta', '') or '-'}` | "
            f"`{row.get('inferred_next_source_start_vm_ip', '') or '-'}` | "
            f"`{row.get('inference_evidence', '') or row.get('candidate_entries', '') or '-'}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Dynamically stitch remaining synthetic successor gaps from VMTAIL order.")
    parser.add_argument("--gaps", default=str(TRACE_DIR / "vm_synthetic_successor_gaps.tsv"))
    parser.add_argument("--run", default=str(TRACE_DIR / "run.stderr"))
    parser.add_argument("--handler-table", default=str(TRACE_DIR / "vm_handler_table.tsv"))
    parser.add_argument("--isa-handlers", default=str(TRACE_DIR / "vm_isa_handlers.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--min-score", type=int, default=5)
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_dynamic_stitch_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
