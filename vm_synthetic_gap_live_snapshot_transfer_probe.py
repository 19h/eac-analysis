#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv
from vm_static_dispatch_validate import read_dispatch_table
from vm_static_path_profile import REG_NAMES, parse_gpr_fields
from vm_static_transfer_expr import clip, execute, path_hash
from vm_synthetic_gap_table_read_diagnostic import execute_debug
from vm_state_static_validate import Ptr, disassemble_region, make_disassembler, parse_int, read_skeletons


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
DEFAULT_RUNS = [
    Path("dumps/vmtail-state-residual-targets/run.stderr"),
    Path("dumps/vmtail-live-residual-targets/run.stderr"),
    Path("dumps/vmtail-residual-122e3c-context/run.stderr"),
    Path("dumps/vmtail-residual-122e3c-context-postcall/run.stderr"),
    Path("dumps/vmtail-fakenet-w16/run.stderr"),
]


FIELDS = [
    "row_kind",
    "family_id",
    "synthetic_start_vm_ip",
    "missing_successor_vm_ip",
    "source_entry",
    "run_dir",
    "event_line",
    "event_kind",
    "event_count",
    "event_site",
    "event_target_entry",
    "event_target",
    "seed_quality",
    "live_status",
    "live_terminal_reason",
    "live_pred_entry",
    "live_pred_target",
    "live_pred_delta",
    "live_table_status",
    "live_table_site",
    "live_table_operand",
    "live_table_size",
    "live_table_offset",
    "live_table_entry",
    "live_table_value_entry",
    "live_table_diagnosis",
    "live_target_expr",
    "live_slot_expr",
    "live_ip_expr",
    "live_steps",
    "live_unknown_ops",
    "live_branch_unknown",
    "live_path_hash",
    "live_path",
    "family_transfer_path_hash",
    "branch_resolution",
    "family_table_diagnosis",
    "family_table_offset",
    "family_table_region",
    "family_table_alignment",
    "family_runtime_qword_class",
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


def h(value):
    if value is None or value == "":
        return ""
    return f"0x{value:x}"


def norm_ip(text):
    if not text:
        return ""
    try:
        return h(parse_hex(text))
    except ValueError:
        return text


def norm_delta(delta):
    if delta is None:
        return ""
    return f"{delta:+#x}"


def normalize_live_seed_value(value, fields):
    frame = fields.get("frame")
    table = fields.get("table")
    vm_ip = fields.get("vm_ip")
    image_base = None
    if frame is not None and fields.get("frame_off") is not None:
        image_base = frame - fields["frame_off"]

    if frame is not None and frame - 0x4000 <= value < frame + 0x4000:
        return Ptr("frame", value - frame)
    if table is not None and table <= value < table + 360 * 8:
        return Ptr("table", value - table, 12, table & 0xFFF)
    if vm_ip is not None and vm_ip - 0x10000 <= value < vm_ip + 0x10000:
        return Ptr("ip", value - vm_ip, 12, vm_ip & 0xFFF)
    if image_base is not None and image_base <= value < image_base + 0x650000:
        return value - image_base
    return value


def build_live_seed(fields):
    regs = {
        reg: normalize_live_seed_value(fields[reg], fields)
        for reg in REG_NAMES
        if reg in fields
    }
    frame_mem = {}
    for name, value in fields.items():
        if not name.startswith("fs"):
            continue
        off_s = name[2:]
        if off_s.startswith("0x"):
            off_s = off_s[2:]
        try:
            off = int(off_s, 16)
        except ValueError:
            continue
        frame_mem[(off, 8)] = normalize_live_seed_value(value, fields)
    if frame_mem:
        regs["__frame_mem__"] = frame_mem
    return regs


def seed_quality(fields):
    reg_count = sum(1 for reg in REG_NAMES if reg in fields)
    fs_count = sum(1 for name in fields if name.startswith("fs"))
    if reg_count and fs_count:
        return "full_gpr_snapshot"
    if reg_count:
        return "gpr_only_snapshot"
    if fs_count:
        return "frame_scratch_snapshot"
    return "frame_only_snapshot"


def split_seed(regs):
    regs = dict(regs)
    frame_mem = regs.pop("__frame_mem__", {})
    return regs, frame_mem


def read_family_rows(path):
    rows = []
    for row in read_tsv(path):
        row = dict(row)
        for key in (
            "synthetic_start_vm_ip",
            "missing_successor_vm_ip",
            "observed_first_hop_vm_ip",
            "terminal_dest_vm_ip",
            "following_residual_start",
        ):
            row[key] = norm_ip(row.get(key, ""))
        rows.append(row)
    return sorted(rows, key=lambda row: parse_hex(row["synthetic_start_vm_ip"]))


def parse_event(line, line_no, run_path, target_to_entry):
    if "[VMTAIL]" in line:
        kind = "tail"
    elif "[DISPATCH]" in line:
        kind = "dispatch"
    else:
        return None
    fields = parse_gpr_fields(line)
    vm_ip = fields.get("vm_ip_off")
    target = fields.get("target_off")
    site = fields.get("site")
    if vm_ip is None or target is None or site is None:
        return None
    return {
        "kind": kind,
        "line_no": line_no,
        "run_dir": str(run_path.parent),
        "site": site,
        "vm_ip": vm_ip,
        "target": target,
        "entry": target_to_entry.get(target),
        "count": fields.get("count"),
        "state": fields.get("vm_state"),
        "flags": fields.get("vm_flags"),
        "byte": fields.get("vm_byte"),
        "fields": fields,
    }


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


def decode_handlers(eac, skeletons, sources, window):
    md = make_disassembler()
    decoded = {}
    source_targets = {}
    for source in sorted(sources, key=int):
        skel = skeletons.get(source)
        if not skel:
            continue
        target = parse_int(skel.get("target"))
        tail_site = parse_int(skel.get("tail_site"))
        if target is None:
            continue
        stop = tail_site + 16 if tail_site is not None else target + window
        if stop - target > window:
            stop = target + window
        _insns, by_addr = disassemble_region(md, eac, target, stop)
        decoded[source] = (target, by_addr)
        source_targets[source] = target
    return decoded, source_targets


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


def branch_resolution(family, live_branch_unknown):
    family_unknown = parse_int(family.get("transfer_branch_unknown", ""))
    if family_unknown is None:
        return "unknown_baseline"
    if live_branch_unknown < family_unknown:
        return "branch_unknown_removed"
    if live_branch_unknown == 0:
        return "branch_unknown_unchanged_zero"
    if live_branch_unknown == family_unknown:
        return "branch_unknown_still_same"
    if live_branch_unknown > family_unknown:
        return "branch_unknown_increased"
    return "branch_unknown_partially_reduced"


def classify_interpretation(status, pred_entry, next_event, relation, branch_class):
    next_entry = next_event.get("entry") if next_event else None
    if status == "ok" and pred_entry is not None and next_entry == pred_entry:
        return "live_table_target_matches_next_event"
    if status == "ok" and pred_entry is not None:
        return "live_table_target_points_elsewhere"
    if branch_class == "branch_unknown_removed" and relation in {
        "next_event_is_observed_first_hop",
        "next_event_is_following_residual",
        "next_event_is_terminal_reentry",
    }:
        return "live_branches_resolved_sequence_only"
    if branch_class == "branch_unknown_removed":
        return "live_branches_resolved_table_rejected"
    if status == "unknown_target":
        return "live_table_rejected_or_symbolic"
    if status:
        return f"live_{status}"
    return "no_live_transfer"


def classify_table_log(table_log):
    if not table_log:
        return {}, "no_table_access"
    selected = next((item for item in reversed(table_log) if item["status"] != "ok"), table_log[-1])
    statuses = {item.get("status", "") for item in table_log}
    if "table_oob" in statuses:
        diagnosis = "table_index_out_of_range"
    elif "table_read" in statuses:
        diagnosis = "misaligned_or_non_qword_table_read"
    elif "ok" in statuses:
        diagnosis = "dispatch_table_pointer_read"
    else:
        diagnosis = "unknown_table_access"
    return selected, diagnosis


def no_snapshot_row(family):
    return {
        "row_kind": "no_matching_live_event",
        "family_id": family.get("family_id", ""),
        "synthetic_start_vm_ip": family.get("synthetic_start_vm_ip", ""),
        "missing_successor_vm_ip": family.get("missing_successor_vm_ip", ""),
        "source_entry": family.get("source_entry", ""),
        "family_transfer_path_hash": family.get("transfer_path_hash", ""),
        "branch_resolution": "no_live_snapshot",
        "family_table_diagnosis": family.get("table_diagnosis", ""),
        "family_table_offset": family.get("table_offset", ""),
        "family_table_region": family.get("table_region", ""),
        "family_table_alignment": family.get("table_alignment", ""),
        "family_runtime_qword_class": family.get("runtime_qword_class", ""),
        "observed_first_hop_vm_ip": family.get("observed_first_hop_vm_ip", ""),
        "observed_chain_bridge_class": family.get("observed_chain_bridge_class", ""),
        "terminal_dest_vm_ip": family.get("terminal_dest_vm_ip", ""),
        "following_residual_start": family.get("following_residual_start", ""),
        "interpretation": "no_matching_live_event_in_selected_runs",
    }


def live_row(args, family, event, decoded, table, target_to_entry):
    source = family.get("source_entry", "")
    target, by_addr = decoded[source]
    fields = event["fields"]
    row = {
        "bytes": family.get("operand_bytes", ""),
        "pre_state": h(event.get("state") or 0),
        "pre_flags": h(event.get("flags") or 0),
        "pre_byte": h(event.get("byte") or 0),
        "start_vm_ip": family.get("synthetic_start_vm_ip", "0x0"),
    }
    initial_regs = build_live_seed(fields)
    (
        pred_entry,
        pred_target,
        pred_delta,
        status,
        target_expr,
        slot_expr,
        ip_expr,
        steps,
        unknown,
        live_branch_unknown,
        path,
    ) = execute(
        by_addr,
        target,
        row,
        table,
        target_to_entry,
        args.max_steps,
        args.max_expr_len,
        initial_regs,
    )
    debug_regs, debug_frame_mem = split_seed(initial_regs)
    (
        debug_pred_entry,
        _debug_pred_target,
        _debug_pred_delta,
        debug_status,
        debug_reason,
        _debug_steps,
        _debug_unknown,
        _debug_branch_unknown,
        _debug_path,
        table_log,
    ) = execute_debug(
        by_addr,
        target,
        row,
        table,
        target_to_entry,
        args.max_steps,
        seed_regs=debug_regs,
        seed_frame_mem=debug_frame_mem,
    )
    table_item, table_diagnosis = classify_table_log(table_log)
    if debug_pred_entry is not None:
        pred_entry = debug_pred_entry
    if debug_status != status:
        debug_reason = f"{debug_status}:{debug_reason}" if debug_reason else debug_status
    next_event = event.get("next_event")
    relation = next_relation(family, next_event)
    branch_class = branch_resolution(family, live_branch_unknown)
    digest = path_hash(path)
    return {
        "row_kind": "live_event",
        "family_id": family.get("family_id", ""),
        "synthetic_start_vm_ip": family.get("synthetic_start_vm_ip", ""),
        "missing_successor_vm_ip": family.get("missing_successor_vm_ip", ""),
        "source_entry": source,
        "run_dir": event.get("run_dir", ""),
        "event_line": str(event.get("line_no", "")),
        "event_kind": event.get("kind", ""),
        "event_count": "" if event.get("count") is None else str(event.get("count")),
        "event_site": h(event.get("site")),
        "event_target_entry": str(event.get("entry", "")),
        "event_target": h(event.get("target")),
        "seed_quality": seed_quality(fields),
        "live_status": status,
        "live_terminal_reason": debug_reason,
        "live_pred_entry": "" if pred_entry is None or pred_entry < 0 else str(pred_entry),
        "live_pred_target": h(pred_target),
        "live_pred_delta": norm_delta(pred_delta),
        "live_table_status": table_item.get("status", ""),
        "live_table_site": table_item.get("site", ""),
        "live_table_operand": table_item.get("operand", ""),
        "live_table_size": table_item.get("size", ""),
        "live_table_offset": table_item.get("offset", ""),
        "live_table_entry": table_item.get("entry", ""),
        "live_table_value_entry": table_item.get("value_entry", ""),
        "live_table_diagnosis": table_diagnosis,
        "live_target_expr": clip(target_expr, args.max_expr_len),
        "live_slot_expr": clip(slot_expr, args.max_expr_len),
        "live_ip_expr": ip_expr,
        "live_steps": str(steps),
        "live_unknown_ops": str(unknown),
        "live_branch_unknown": str(live_branch_unknown),
        "live_path_hash": digest,
        "live_path": clip(";".join(path) if path else "-", args.max_path_len),
        "family_transfer_path_hash": family.get("transfer_path_hash", ""),
        "branch_resolution": branch_class,
        "family_table_diagnosis": family.get("table_diagnosis", ""),
        "family_table_offset": family.get("table_offset", ""),
        "family_table_region": family.get("table_region", ""),
        "family_table_alignment": family.get("table_alignment", ""),
        "family_runtime_qword_class": family.get("runtime_qword_class", ""),
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
        "interpretation": classify_interpretation(status, pred_entry, next_event, relation, branch_class),
    }


def build_rows(args):
    eac = Path(args.eac).read_bytes()
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    families = read_family_rows(args.family_audit)
    if args.source_entry:
        families = [row for row in families if row.get("source_entry") == str(args.source_entry)]
    if args.family:
        families = [row for row in families if row.get("family_id") == args.family]

    skeletons = read_skeletons(args.skeletons)
    decoded, source_targets = decode_handlers(
        eac,
        skeletons,
        {row.get("source_entry", "") for row in families if row.get("source_entry", "")},
        args.window,
    )
    events = load_events([Path(path) for path in args.runs], target_to_entry)
    events_by_start = {}
    for event in events:
        events_by_start.setdefault(event["vm_ip"], []).append(event)

    out = []
    for family in families:
        source = family.get("source_entry", "")
        start = parse_hex(family.get("synthetic_start_vm_ip", ""))
        source_target = source_targets.get(source)
        matches = []
        for event in events_by_start.get(start, []):
            if event.get("kind") != "tail":
                continue
            if event.get("entry") != parse_int(source):
                continue
            if source_target is not None and event.get("target") != source_target:
                continue
            if source not in decoded:
                continue
            matches.append(event)
        if not matches:
            out.append(no_snapshot_row(family))
            continue
        for event in matches:
            out.append(live_row(args, family, event, decoded, table, target_to_entry))

    out.sort(key=lambda row: (
        parse_hex(row.get("synthetic_start_vm_ip", "0x0")),
        row.get("row_kind", ""),
        row.get("run_dir", ""),
        int(row.get("event_line") or 0),
    ))
    return out


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow({field: row.get(field, "") for field in FIELDS})


def emit_counter(title, counter):
    print(f"### {title}\n")
    print("| Value | Rows |")
    print("| --- | ---: |")
    for key, value in counter.most_common():
        print(f"| `{key or '-'}` | {value} |")
    print()


def emit_markdown(rows):
    live_rows = [row for row in rows if row.get("row_kind") == "live_event"]
    starts = {row.get("synthetic_start_vm_ip", "") for row in rows if row.get("synthetic_start_vm_ip")}
    live_starts = {row.get("synthetic_start_vm_ip", "") for row in live_rows if row.get("synthetic_start_vm_ip")}

    print("# Synthetic Gap Live Snapshot Transfer Probe\n")
    print(
        "Replays unresolved synthetic-gap source handlers from selected VMTAIL run snapshots. "
        "Rows with full GPR snapshots can resolve register-dependent native branches; frame-only rows "
        "are weaker evidence and are kept separate. This probe does not promote sequence-only next events "
        "into hard CFG edges.\n"
    )
    print(f"Rows: `{len(rows)}`")
    print(f"Unresolved starts represented: `{len(starts)}`")
    print(f"Starts with matching live events: `{len(live_starts)}`")
    print(f"Starts without matching live events: `{len(starts - live_starts)}`\n")

    print("## Mixes\n")
    emit_counter("Row Kind", Counter(row.get("row_kind", "") for row in rows))
    emit_counter("Seed Quality", Counter(row.get("seed_quality", "") for row in live_rows))
    emit_counter("Source Entry", Counter(row.get("source_entry", "") for row in rows))
    emit_counter("Live Status", Counter(row.get("live_status", "") for row in live_rows))
    emit_counter("Live Table Diagnosis", Counter(row.get("live_table_diagnosis", "") for row in live_rows))
    emit_counter("Branch Resolution", Counter(row.get("branch_resolution", "") for row in rows))
    emit_counter("Next Relation", Counter(row.get("next_relation", "") for row in live_rows))
    emit_counter("Interpretation", Counter(row.get("interpretation", "") for row in rows))

    print("## Rows\n")
    print(
        "| Start | Source | Family | Run | Seed | Status | Table | Branches | Path | Next | Interpretation |"
    )
    print("| --- | ---: | --- | --- | --- | --- | --- | ---: | --- | --- | --- |")
    for row in rows:
        run_name = Path(row.get("run_dir", "")).name if row.get("run_dir") else "-"
        next_text = "-"
        if row.get("next_event_vm_ip"):
            next_text = (
                f"{row.get('next_event_kind')}@{row.get('next_event_vm_ip')}"
                f"->entry_{row.get('next_event_target_entry') or '?'}"
            )
        print(
            f"| `{row.get('synthetic_start_vm_ip')}` | {row.get('source_entry') or '-'} | "
            f"`{row.get('family_id') or '-'}` | `{run_name}` | "
            f"`{row.get('seed_quality') or '-'}` | `{row.get('live_status') or '-'}` | "
            f"`{row.get('live_table_diagnosis') or '-'}/{row.get('live_table_offset') or '-'}` | "
            f"`{row.get('live_branch_unknown') or '-'}` | `{row.get('live_path_hash') or '-'}` | "
            f"`{next_text}` | `{row.get('interpretation') or '-'}` |"
        )


def main():
    parser = argparse.ArgumentParser(
        description="Replay unresolved synthetic gap handlers from live VMTAIL snapshots."
    )
    parser.add_argument("--family-audit", default=str(TRACE_DIR / "vm_synthetic_gap_unresolved_family_audit.tsv"))
    parser.add_argument("--skeletons", default=str(TRACE_DIR / "vm_handler_skeletons.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--source-entry", default="")
    parser.add_argument("--family", default="")
    parser.add_argument("--runs", nargs="*", default=[str(path) for path in DEFAULT_RUNS])
    parser.add_argument("--window", type=lambda value: int(value, 0), default=0x1200)
    parser.add_argument("--max-steps", type=int, default=2000)
    parser.add_argument("--max-expr-len", type=int, default=420)
    parser.add_argument("--max-path-len", type=int, default=260)
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_live_snapshot_transfer_probe_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
