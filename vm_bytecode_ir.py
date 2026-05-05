#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path


def parse_signed_hex(text):
    if text.startswith("+0x"):
        return int(text[1:], 16)
    if text.startswith("-0x"):
        return -int(text[3:], 16)
    return int(text, 0)


def fmt_delta(value):
    sign = "+" if value >= 0 else "-"
    return f"{sign}0x{abs(value):x}"


def read_tsv(path):
    with Path(path).open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def load_by(path, key_field):
    rows = {}
    if not path or not Path(path).exists():
        return rows
    for row in read_tsv(path):
        key = row.get(key_field, "")
        if key:
            rows[key] = row
    return rows


def compact_text(text, limit):
    text = " ".join((text or "").replace("\t", " ").replace("\n", " ").split())
    if limit and len(text) > limit:
        return text[: limit - 3] + "..."
    return text


def load_segments(path):
    segments = []
    for row in read_tsv(path):
        segments.append({
            "idx": row["segment"],
            "start": int(row["start"], 16),
            "end": int(row["end"], 16),
        })
    return sorted(segments, key=lambda row: (row["start"], row["end"]))


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
    for segment in segments:
        if segment["start"] == offset:
            return segment
    return None


def segment_text(segment, offset):
    if segment is None:
        return ""
    return f"{segment['idx']}@0x{segment['start']:x}-0x{segment['end']:x}+0x{offset - segment['start']:x}"


def load_sidecar(path, kind):
    rows = {}
    if not path or not Path(path).exists():
        return rows
    for row in read_tsv(path):
        key = (row.get("source_entry", ""), row.get("target_entry", ""), row.get("delta", ""))
        if not all(key):
            continue
        rows[key] = {
            "kind": kind,
            "operand_min_len": row.get("operand_min_len", ""),
            "operand_shape": row.get("operand_shape", ""),
            "lifted_ir": row.get("lifted_ir", ""),
        }
    return rows


def add_exact_rows(args, segments, rows, sidecars, transitions):
    for row in read_tsv(args.instruction_lift):
        start = int(row["start_vm_ip"], 16)
        delta = parse_signed_hex(row.get("delta", "0"))
        end = start + delta
        source_segment = find_segment(segments, start)
        target_segment = find_segment(segments, end)
        top_targets = row.get("top_targets", "")
        target_entry = top_targets.split("@", 1)[0] if top_targets else ""
        sidecar = sidecars.get((row.get("source_entry", ""), target_entry, row.get("delta", "")))
        transition = transitions.get(row.get("source_entry", ""), {})
        semantic = f"next = {top_targets or 'table[slot]'}, ip += {row.get('delta', '')}"
        if sidecar and sidecar.get("lifted_ir"):
            semantic = sidecar["lifted_ir"]
        if row.get("dispatch_model"):
            semantic += f"; dispatch_model={row['dispatch_model']}"
        if row.get("state_class"):
            semantic += f"; state={row['state_class']}"
        validation = (
            f"state_static={row.get('state_static_pct', '')}%;"
            f"dispatch_static={row.get('static_dispatch_pct', '')}%;"
            f"ip_static={row.get('static_ip_pct', '')}%"
        )
        if sidecar:
            validation += f";sidecar={sidecar['kind']}"
        dispatch_expr = row.get("dispatch_formula", "")
        if dispatch_expr and row.get("dispatch_formula_class"):
            dispatch_expr = f"{row['dispatch_formula_class']}:{dispatch_expr}"
        transfer_slot_expr = compact_text(transition.get("transfer_expr_top_slot_exprs", ""), args.max_expr_len)
        if transfer_slot_expr:
            dispatch_expr = f"{dispatch_expr}; transfer_slot={transfer_slot_expr}" if dispatch_expr else transfer_slot_expr
        ip_advance_expr = compact_text(transition.get("transfer_expr_top_ip_exprs", ""), args.max_expr_len)
        rows.append({
            "start_vm_ip": row.get("start_vm_ip", ""),
            "end_vm_ip": f"0x{end:x}",
            "row_kind": "exact_instruction",
            "source_entry": row.get("source_entry", ""),
            "source_target": row.get("source_target", ""),
            "target_entry": target_entry,
            "target": top_targets,
            "delta": row.get("delta", ""),
            "events": row.get("count", ""),
            "bytes": row.get("bytes", ""),
            "byte_status": row.get("byte_status", ""),
            "operand_min_len": sidecar.get("operand_min_len", "") if sidecar else f"0x{len(row.get('bytes', '')) // 2:x}",
            "operand_shape": sidecar.get("operand_shape", "") if sidecar else row.get("shape", ""),
            "source_block": segment_text(source_segment, start),
            "target_block": segment_text(target_segment, end) if target_segment else "",
            "semantic_ir": semantic,
            "state_ir": row.get("state_class", ""),
            "state_effect_ir": compact_text(transition.get("final_state_expr", ""), args.max_expr_len),
            "dispatch_ir": row.get("dispatch_model", "") or (sidecar.get("lifted_ir", "") if sidecar else ""),
            "dispatch_expr_ir": compact_text(dispatch_expr, args.max_expr_len),
            "ip_advance_expr_ir": ip_advance_expr,
            "validation": validation,
            "provenance": "vm_instruction_lift" + (f"+{sidecar['kind']}" if sidecar else ""),
        })


def add_decoded_rows(args, segments, rows, sidecars, transitions):
    groups = {}
    eac = Path(args.eac).read_bytes() if args.eac else b""

    for row in read_tsv(args.trace):
        status = row.get("byte_status", "")
        if not (status.startswith("prefix_") or status.startswith("backedge")):
            continue
        key = (row.get("source_entry", ""), row.get("target_entry", ""), row.get("delta", ""))
        sidecar = sidecars.get(key)
        if sidecar is None:
            continue
        start = int(row["start_vm_ip"], 16)
        delta = parse_signed_hex(row["delta"])
        end = start + delta
        group_key = (
            sidecar["kind"],
            row.get("start_vm_ip", ""),
            f"0x{end:x}",
            row.get("source_entry", ""),
            row.get("source_target", ""),
            row.get("target_entry", ""),
            row.get("target", ""),
            row.get("delta", ""),
            sidecar["operand_min_len"],
            sidecar["operand_shape"],
            sidecar["lifted_ir"],
        )
        group = groups.setdefault(group_key, {
            "events": 0,
            "statuses": Counter(),
            "prefixes": Counter(),
        })
        group["events"] += 1
        group["statuses"][status] += 1
        if row.get("bytes"):
            group["prefixes"][row["bytes"][: args.prefix_hex_chars]] += 1

    for key, group in groups.items():
        (
            kind,
            start_s,
            end_s,
            source_entry,
            source_target,
            target_entry,
            target,
            delta_s,
            operand_min_len,
            operand_shape,
            lifted_ir,
        ) = key
        start = int(start_s, 16)
        end = int(end_s, 16)
        source_segment = find_segment(segments, start)
        target_segment = find_segment(segments, end)
        operand_len = int(operand_min_len, 16) if operand_min_len else 0
        operand_bytes = eac[start:start + operand_len].hex() if eac and operand_len else ""
        transition = transitions.get(source_entry, {})
        state_effect = compact_text(transition.get("final_state_expr", ""), args.max_expr_len)
        direction = "backedge" if parse_signed_hex(delta_s) < 0 else "forward"
        validation = "file_backed_operand"
        if state_effect:
            validation += ";source_state=transition_model"
        rows.append({
            "start_vm_ip": start_s,
            "end_vm_ip": end_s,
            "row_kind": f"{kind}_{direction}",
            "source_entry": source_entry,
            "source_target": source_target,
            "target_entry": target_entry,
            "target": f"{target_entry}@{target}" if target else target_entry,
            "delta": delta_s,
            "events": str(group["events"]),
            "bytes": operand_bytes,
            "byte_status": ",".join(f"{key}:{value}" for key, value in group["statuses"].most_common(args.max_items)),
            "operand_min_len": operand_min_len,
            "operand_shape": operand_shape,
            "source_block": segment_text(source_segment, start),
            "target_block": segment_text(target_segment, end) if target_segment else "",
            "semantic_ir": lifted_ir,
            "state_ir": transition.get("observation", ""),
            "state_effect_ir": state_effect,
            "dispatch_ir": lifted_ir,
            "dispatch_expr_ir": lifted_ir,
            "ip_advance_expr_ir": lifted_ir,
            "validation": validation,
            "provenance": kind,
        })


def emit_tsv(rows):
    fields = [
        "start_vm_ip",
        "end_vm_ip",
        "row_kind",
        "source_entry",
        "source_target",
        "target_entry",
        "target",
        "delta",
        "events",
        "bytes",
        "byte_status",
        "operand_min_len",
        "operand_shape",
        "source_block",
        "target_block",
        "semantic_ir",
        "state_ir",
        "state_effect_ir",
        "dispatch_ir",
        "dispatch_expr_ir",
        "ip_advance_expr_ir",
        "validation",
        "provenance",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows, limit):
    def row_events(row):
        try:
            return int(row.get("events", "0") or 0)
        except ValueError:
            return 0

    print("# VM Bytecode IR\n")
    print(f"Top {min(limit, len(rows))} recovered VM bytecode IR rows by event count.\n")
    print("| Events | VM IP | Kind | Source | Target | Delta | IR |")
    print("| ---: | --- | --- | ---: | --- | ---: | --- |")
    for row in sorted(rows, key=row_events, reverse=True)[:limit]:
        print(
            f"| {row['events']} | `{row['start_vm_ip']}` | `{row['row_kind']}` | "
            f"{row['source_entry']} | `{row['target']}` | `{row['delta']}` | "
            f"`{row['semantic_ir']}` |"
        )


def main():
    parser = argparse.ArgumentParser(
        description="Build a unified recovered VM bytecode IR table from exact lifts and decoded sidecars."
    )
    parser.add_argument("--instruction-lift", default="dumps/vmtail-wide-1m-w16/vm_instruction_lift.tsv")
    parser.add_argument("--trace", default="dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv")
    parser.add_argument(
        "--segments",
        default="dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_frontierfill_footprintfill_sampled.tsv",
    )
    parser.add_argument("--long-branches", default="dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv")
    parser.add_argument("--sampled-operands", default="dumps/vmtail-wide-1m-w16/vm_sampled_operand_catalog.tsv")
    parser.add_argument("--transition-model", default="dumps/vmtail-wide-1m-w16/vm_transition_model.tsv")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--prefix-hex-chars", type=int, default=32)
    parser.add_argument("--max-items", type=int, default=5)
    parser.add_argument("--max-expr-len", type=int, default=220)
    parser.add_argument("--markdown", action="store_true")
    parser.add_argument("--limit", type=int, default=50)
    args = parser.parse_args()

    segments = load_segments(args.segments)
    sidecars = {}
    sidecars.update(load_sidecar(args.long_branches, "long_branch"))
    sidecars.update(load_sidecar(args.sampled_operands, "sampled_operand"))
    transitions = load_by(args.transition_model, "entry")
    rows = []
    add_exact_rows(args, segments, rows, sidecars, transitions)
    add_decoded_rows(args, segments, rows, sidecars, transitions)
    rows.sort(key=lambda row: (int(row["start_vm_ip"], 16), row["row_kind"], row["source_entry"], row["delta"]))

    if args.markdown:
        emit_markdown(rows, args.limit)
    else:
        emit_tsv(rows)

    kinds = Counter(row["row_kind"] for row in rows)
    events = Counter()
    for row in rows:
        events[row["row_kind"]] += int(row.get("events", "0") or 0)
    summary = ",".join(f"{kind}:{kinds[kind]}/{events[kind]}" for kind in sorted(kinds))
    print(f"bytecode_ir_rows={len(rows)} kinds={summary}", file=sys.stderr)


if __name__ == "__main__":
    main()
