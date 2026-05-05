#!/usr/bin/env python3
import argparse
import csv
import re
import struct
import sys
from collections import Counter
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv
from vm_static_dispatch_validate import read_dispatch_table
from vm_static_transfer_expr import path_hash


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
DEFAULT_RUNS = [
    Path("dumps/vmtail-state-residual-targets/run.stderr"),
    Path("dumps/vmtail-live-residual-targets/run.stderr"),
    Path("dumps/vmtail-residual-122e3c-context/run.stderr"),
]
TABLE_OFF = 0xC3718
TABLE_ENTRIES = 360
TABLE_SIZE = TABLE_ENTRIES * 8
MASK32 = 0xFFFFFFFF


FIELDS = [
    "family_id",
    "synthetic_start_vm_ip",
    "source_entry",
    "run_dir",
    "event_line",
    "event_site",
    "event_target_entry",
    "r8_low",
    "branch_b6c57",
    "branch_b6c87",
    "branch_b6d00",
    "branch_b6f5c",
    "resolved_path",
    "resolved_path_hash",
    "slot_variant",
    "resolved_slot",
    "slot_region",
    "slot_alignment",
    "file_qword_class",
    "file_qword_dispatch_entry",
    "next_event_kind",
    "next_event_site",
    "next_event_vm_ip",
    "next_event_target_entry",
    "next_event_target",
    "next_relation",
    "observed_first_hop_vm_ip",
    "observed_chain_bridge_class",
    "terminal_dest_vm_ip",
    "following_residual_start",
    "interpretation",
]


PAIR_RE = re.compile(r"([A-Za-z0-9_]+)=([^ \t]+)")


def h(value):
    if value is None or value == "":
        return ""
    return f"0x{value:x}"


def parse_int(text):
    if text is None or text == "":
        return None
    try:
        return int(text, 0)
    except ValueError:
        return None


def norm_ip(text):
    if not text:
        return ""
    try:
        return h(parse_hex(text))
    except ValueError:
        return text


def read_skeleton_targets(path):
    out = {}
    for row in read_tsv(path):
        entry = row.get("entry", "")
        target = parse_int(row.get("target", ""))
        if entry and target is not None:
            out[str(entry)] = target
    return out


def load_family_rows(path, source_entry):
    rows = []
    for row in read_tsv(path):
        if row.get("source_entry") != str(source_entry):
            continue
        row = dict(row)
        row["synthetic_start_vm_ip"] = norm_ip(row.get("synthetic_start_vm_ip", ""))
        row["observed_first_hop_vm_ip"] = norm_ip(row.get("observed_first_hop_vm_ip", ""))
        row["terminal_dest_vm_ip"] = norm_ip(row.get("terminal_dest_vm_ip", ""))
        row["following_residual_start"] = norm_ip(row.get("following_residual_start", ""))
        rows.append(row)
    return sorted(rows, key=lambda row: parse_hex(row["synthetic_start_vm_ip"]))


def parse_event(line, line_no, run_path, target_to_entry):
    if "[VMTAIL]" in line:
        kind = "tail"
    elif "[DISPATCH]" in line:
        kind = "dispatch"
    else:
        return None
    pairs = dict(PAIR_RE.findall(line))
    vm_ip = parse_int(pairs.get("vm_ip_off"))
    target = parse_int(pairs.get("target_off"))
    site = parse_int(pairs.get("site"))
    if vm_ip is None or target is None or site is None:
        return None
    entry = target_to_entry.get(target)
    event = {
        "kind": kind,
        "line_no": line_no,
        "run_dir": str(run_path.parent),
        "site": site,
        "vm_ip": vm_ip,
        "target": target,
        "entry": entry,
        "frame": parse_int(pairs.get("frame_off")),
        "flags": parse_int(pairs.get("vm_flags")),
        "state": parse_int(pairs.get("vm_state")),
        "byte": parse_int(pairs.get("vm_byte")),
    }
    for reg in ("r8", "rbp"):
        event[reg] = parse_int(pairs.get(reg))
    return event


def load_events(run_paths, target_to_entry):
    events = []
    for run_path in run_paths:
        if not run_path.exists():
            continue
        run_events = []
        with run_path.open(errors="replace") as handle:
            for line_no, line in enumerate(handle, 1):
                event = parse_event(line, line_no, run_path, target_to_entry)
                if event:
                    run_events.append(event)
        for idx, event in enumerate(run_events):
            event["next_event"] = run_events[idx + 1] if idx + 1 < len(run_events) else None
        events.extend(run_events)
    return events


def calc_slot(state, flags, u16_0, u16_2, use_adjusted_flags):
    a = state & 0x2B7E7713
    b = a & 0x515F6307
    if use_adjusted_flags:
        flag_term = ((flags & 0x0742354D) + 0x2FF05A2B) & MASK32
        rhs = ((b - ((u16_0 + b) & MASK32) - flag_term) & MASK32) | (flag_term & 0x1011BA33)
    else:
        rhs = ((b - ((u16_0 + b) & MASK32) - flags) & MASK32) | (flags & 0x1011BA33)
    return (u16_2 - rhs) & 0xFFFF


def classify_slot(eac, table, target_to_entry, slot):
    abs_off = TABLE_OFF + slot
    if 0 <= slot < TABLE_SIZE:
        region = "inside_dispatch_table_aligned" if slot % 8 == 0 else "inside_dispatch_table_unaligned"
    elif slot < 0:
        region = "before_dispatch_table"
    else:
        region = "after_dispatch_table"
    alignment = slot % 8
    file_qword_class = "file_oob"
    dispatch_entry = ""
    if 0 <= abs_off <= len(eac) - 8:
        qword = struct.unpack_from("<Q", eac, abs_off)[0]
        entry = target_to_entry.get(qword)
        if entry is not None:
            file_qword_class = "dispatch_target_pointer"
            dispatch_entry = str(entry)
        else:
            file_qword_class = "non_pointer_bytes"
    return region, alignment, file_qword_class, dispatch_entry


def branch_path(event):
    r8 = event.get("r8")
    frame = event.get("frame")
    flags = event.get("flags") or 0
    r8_low = None if r8 is None else r8 & 0xFF
    frame81_low = None if frame is None else (frame + 0x81) & 0xFF
    frame170_low = None if frame is None else (frame + 0x170) & 0xFF
    b6c57 = 1 if r8_low == 0 else 0
    b6c87 = 1 if frame81_low == 0 else 0
    b6d00 = 1 if (flags & 0x2) == 0 else 0
    b6f5c = 1 if frame170_low == 0 else 0
    path = [
        f"0xb6c57:je:{b6c57}",
        f"0xb6c87:je:{b6c87}",
        f"0xb6d00:je:{b6d00}",
        f"0xb6f5c:je:{b6f5c}",
    ]
    return r8_low, b6c57, b6c87, b6d00, b6f5c, path


def next_relation(family, next_event):
    if not next_event:
        return "no_following_event_in_run"
    next_ip = h(next_event["vm_ip"])
    first_hop = family.get("observed_first_hop_vm_ip", "")
    following = family.get("following_residual_start", "")
    terminal = family.get("terminal_dest_vm_ip", "")
    if terminal and next_ip == terminal:
        return "next_event_is_terminal_reentry"
    if first_hop and next_ip == first_hop:
        return "next_event_is_observed_first_hop"
    if following and next_ip == following:
        return "next_event_is_following_residual"
    return "next_event_differs_from_family_chain"


def build_rows(args):
    eac = Path(args.eac).read_bytes()
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    skeleton_targets = read_skeleton_targets(args.skeletons)
    family_rows = load_family_rows(args.family_audit, args.source_entry)
    if args.family:
        family_rows = [row for row in family_rows if row.get("family_id") == args.family]
    family_by_start = {parse_hex(row["synthetic_start_vm_ip"]): row for row in family_rows}
    events = load_events([Path(path) for path in args.runs], target_to_entry)
    out = []
    source_target = skeleton_targets.get(str(args.source_entry))

    for event in events:
        start = event["vm_ip"]
        family = family_by_start.get(start)
        if not family or event.get("entry") != args.source_entry:
            continue
        if source_target is not None and event.get("target") != source_target:
            continue
        flags = event.get("flags")
        state = event.get("state")
        if flags is None or state is None:
            continue
        u16_0 = parse_int(family.get("operand_bytes", "")[:4])
        raw_bytes = bytes.fromhex(family.get("operand_bytes", ""))
        if len(raw_bytes) < 4:
            continue
        u16_0 = int.from_bytes(raw_bytes[0:2], "little")
        u16_2 = int.from_bytes(raw_bytes[2:4], "little")

        r8_low, b6c57, b6c87, b6d00, b6f5c, path = branch_path(event)
        use_adjusted_flags = b6d00 == 0
        slot = calc_slot(state, flags, u16_0, u16_2, use_adjusted_flags)
        region, alignment, qword_class, dispatch_entry = classify_slot(eac, table, target_to_entry, slot)
        next_event = event.get("next_event")
        relation = next_relation(family, next_event)
        if qword_class == "dispatch_target_pointer" and next_event and dispatch_entry == str(next_event.get("entry", "")):
            interpretation = "resolved_table_slot_matches_next_event"
        elif qword_class == "dispatch_target_pointer":
            interpretation = "resolved_table_slot_points_elsewhere"
        elif relation in {"next_event_is_following_residual", "next_event_is_observed_first_hop", "next_event_is_terminal_reentry"}:
            interpretation = "branch_resolved_but_observed_flow_is_sequence_only"
        else:
            interpretation = "branch_resolved_table_rejected"

        out.append({
            "family_id": family.get("family_id", ""),
            "synthetic_start_vm_ip": h(start),
            "source_entry": str(args.source_entry),
            "run_dir": event.get("run_dir", ""),
            "event_line": str(event.get("line_no", "")),
            "event_site": h(event.get("site")),
            "event_target_entry": str(event.get("entry", "")),
            "r8_low": "" if r8_low is None else h(r8_low),
            "branch_b6c57": f"je:{b6c57}",
            "branch_b6c87": f"je:{b6c87}",
            "branch_b6d00": f"je:{b6d00}",
            "branch_b6f5c": f"je:{b6f5c}",
            "resolved_path": ";".join(path),
            "resolved_path_hash": path_hash(path),
            "slot_variant": "adjusted_flags_slot8" if use_adjusted_flags else "direct_flags_slot120",
            "resolved_slot": h(slot),
            "slot_region": region,
            "slot_alignment": str(alignment),
            "file_qword_class": qword_class,
            "file_qword_dispatch_entry": dispatch_entry,
            "next_event_kind": next_event.get("kind", "") if next_event else "",
            "next_event_site": h(next_event.get("site")) if next_event else "",
            "next_event_vm_ip": h(next_event.get("vm_ip")) if next_event else "",
            "next_event_target_entry": str(next_event.get("entry", "")) if next_event else "",
            "next_event_target": h(next_event.get("target")) if next_event else "",
            "next_relation": relation,
            "observed_first_hop_vm_ip": family.get("observed_first_hop_vm_ip", ""),
            "observed_chain_bridge_class": family.get("observed_chain_bridge_class", ""),
            "terminal_dest_vm_ip": family.get("terminal_dest_vm_ip", ""),
            "following_residual_start": family.get("following_residual_start", ""),
            "interpretation": interpretation,
        })

    out.sort(key=lambda row: (
        parse_hex(row["synthetic_start_vm_ip"]),
        row["run_dir"],
        int(row["event_line"] or 0),
    ))
    return out


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    start_mix = Counter(row["synthetic_start_vm_ip"] for row in rows)
    path_mix = Counter(row["resolved_path_hash"] for row in rows)
    relation_mix = Counter(row["next_relation"] for row in rows)
    slot_mix = Counter(f"{row['slot_region']}/{row['file_qword_class']}" for row in rows)
    interpretation_mix = Counter(row["interpretation"] for row in rows)

    print("# Source 299 Context-Reentry Probe\n")
    print(
        "Live VMTAIL register snapshots resolve the source-299 branch path for the unresolved "
        "context-reentry family and compare the concrete slot result with the next focused raw event. "
        "This audit does not promote sequence-only evidence into hard CFG.\n"
    )
    print(f"Rows: `{len(rows)}`")
    print(f"Starts: `{len(start_mix)}`\n")

    print("## Mixes\n")
    for title, counter in [
        ("Start", start_mix),
        ("Resolved Path Hash", path_mix),
        ("Slot/File Class", slot_mix),
        ("Next Relation", relation_mix),
        ("Interpretation", interpretation_mix),
    ]:
        print(f"### {title}\n")
        print("| Value | Rows |")
        print("| --- | ---: |")
        for key, value in counter.most_common():
            print(f"| `{key or '-'}` | {value} |")
        print()

    print("## Rows\n")
    print(
        "| Start | Run | r8 Low | Path | Slot | Table | Next | Relation | Interpretation |"
    )
    print("| --- | --- | ---: | --- | --- | --- | --- | --- | --- |")
    for row in rows:
        next_text = "-"
        if row.get("next_event_vm_ip"):
            next_text = (
                f"{row.get('next_event_kind')}@{row.get('next_event_vm_ip')}"
                f"->entry_{row.get('next_event_target_entry') or '?'}"
            )
        table = f"{row.get('slot_region')}/{row.get('file_qword_class')}"
        print(
            f"| `{row.get('synthetic_start_vm_ip')}` | `{Path(row.get('run_dir', '')).name}` | "
            f"`{row.get('r8_low') or '-'}` | `{row.get('resolved_path_hash')}` | "
            f"`{row.get('resolved_slot')}` | `{table}` | `{next_text}` | "
            f"`{row.get('next_relation')}` | `{row.get('interpretation')}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Resolve source-299 context-reentry residuals with live VMTAIL register snapshots.")
    parser.add_argument("--family-audit", default=str(TRACE_DIR / "vm_synthetic_gap_unresolved_family_audit.tsv"))
    parser.add_argument("--skeletons", default=str(TRACE_DIR / "vm_handler_skeletons.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--source-entry", type=int, default=299)
    parser.add_argument("--family", default="")
    parser.add_argument("--runs", nargs="*", default=[str(path) for path in DEFAULT_RUNS])
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_source299_context_probe_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
