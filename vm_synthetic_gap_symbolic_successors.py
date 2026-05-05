#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter
from pathlib import Path

from vm_pseudocode_dump import parse_delta, parse_hex, read_tsv


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")


def fmt_hex(value):
    if value is None:
        return ""
    return f"0x{value:x}"


def load_ir_rows(path):
    rows = {}
    for row in read_tsv(path):
        start = row.get("start_vm_ip", "")
        if start:
            rows[parse_hex(start)] = row
    return rows


def load_blocks(path):
    blocks = []
    for row in read_tsv(path):
        start = parse_hex(row.get("start_vm_ip", "0x0"))
        end = parse_hex(row.get("byte_end_min", "0x0"))
        if end > start:
            blocks.append((start, end, row))
    blocks.sort(key=lambda item: item[0])
    return blocks


def containing_block(blocks, vm_ip):
    for start, end, row in blocks:
        if start <= vm_ip < end:
            return row
    return None


def load_dynamic_by_start(path):
    out = {}
    for row in read_tsv(path):
        start = row.get("synthetic_start_vm_ip", "")
        if start:
            out.setdefault(start, []).append(row)
    return out


def classify_destination(probe, dest, ir_row, block, dynamic_rows):
    pieces = []
    if ir_row:
        if ir_row.get("source_entry", "") == probe.get("zero_seed_pred_entry", ""):
            pieces.append("recovered_exact_entry_match")
        else:
            pieces.append("recovered_exact_entry_mismatch")
    elif block:
        pieces.append("inside_recovered_block_without_row")
    else:
        pieces.append("uncovered_dest")

    if block:
        if parse_hex(block.get("start_vm_ip", "0x0")) == dest:
            pieces.append("block_start")
        else:
            pieces.append("mid_block_split_needed")

    for row in dynamic_rows:
        next_end = row.get("next_end_vm_ip", "")
        if not next_end:
            continue
        try:
            next_end_value = parse_hex(next_end)
        except ValueError:
            continue
        if next_end_value == dest:
            pieces.append("dynamic_next_end_matches")
        else:
            pieces.append("dynamic_next_end_mismatch")
        break

    return ",".join(pieces)


def build_rows(args):
    ir_rows = load_ir_rows(args.ir)
    blocks = load_blocks(args.blocks)
    dynamic_by_start = load_dynamic_by_start(args.dynamic_stitch)
    out = []

    for probe in read_tsv(args.transfer_probe):
        if probe.get("classification", "") != "symbolic_slot_expr":
            continue
        if probe.get("zero_seed_status", "") != "ok":
            continue
        start = parse_hex(probe.get("synthetic_start_vm_ip", "0x0"))
        try:
            delta = parse_delta(probe.get("zero_seed_pred_delta", "0"))
        except ValueError:
            continue
        dest = start + delta
        ir_row = ir_rows.get(dest)
        block = containing_block(blocks, dest)
        dynamic_rows = dynamic_by_start.get(probe.get("synthetic_start_vm_ip", ""), [])
        row = {
            "source_entry": probe.get("source_entry", ""),
            "synthetic_start_vm_ip": probe.get("synthetic_start_vm_ip", ""),
            "missing_successor_vm_ip": probe.get("missing_successor_vm_ip", ""),
            "operand_bytes": probe.get("operand_bytes", ""),
            "zero_seed_pred_entry": probe.get("zero_seed_pred_entry", ""),
            "zero_seed_pred_delta": probe.get("zero_seed_pred_delta", ""),
            "transfer_target_expr": probe.get("target_expr", ""),
            "transfer_slot_expr": probe.get("slot_expr", ""),
            "transfer_ip_expr": probe.get("ip_expr", ""),
            "concrete_dest_vm_ip": fmt_hex(dest),
            "dest_row_kind": ir_row.get("row_kind", "") if ir_row else "",
            "dest_source_entry": ir_row.get("source_entry", "") if ir_row else "",
            "dest_block": block.get("block", "") if block else "",
            "dest_block_start_vm_ip": block.get("start_vm_ip", "") if block else "",
            "dynamic_resolution": ";".join(row.get("resolution", "") for row in dynamic_rows),
            "dynamic_next_end_vm_ip": ";".join(row.get("next_end_vm_ip", "") for row in dynamic_rows),
            "dynamic_next_tail_target_entry": ";".join(row.get("next_tail_target_entry", "") for row in dynamic_rows),
            "status": classify_destination(probe, dest, ir_row, block, dynamic_rows),
        }
        out.append(row)
    out.sort(key=lambda row: parse_hex(row["synthetic_start_vm_ip"]))
    return out


def emit_tsv(rows):
    fields = [
        "source_entry",
        "synthetic_start_vm_ip",
        "missing_successor_vm_ip",
        "operand_bytes",
        "zero_seed_pred_entry",
        "zero_seed_pred_delta",
        "transfer_target_expr",
        "transfer_slot_expr",
        "transfer_ip_expr",
        "concrete_dest_vm_ip",
        "dest_row_kind",
        "dest_source_entry",
        "dest_block",
        "dest_block_start_vm_ip",
        "dynamic_resolution",
        "dynamic_next_end_vm_ip",
        "dynamic_next_tail_target_entry",
        "status",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    statuses = Counter()
    for row in rows:
        for status in row.get("status", "").split(","):
            if status:
                statuses[status] += 1
    print("# Synthetic Gap Symbolic Successors\n")
    print("Audit of symbolic-slot synthetic gap transfer probes.")
    print("Concrete destinations here come from zero-seeded static transfer paths, so they are candidates, not dynamic proof.\n")
    print(f"Rows: {len(rows)}.")
    print(f"Status mix: {', '.join(f'{k}:{v}' for k, v in statuses.most_common()) or '-'}.\n")
    print("| Synthetic Start | Source | Concrete Dest | Pred Entry | Dest Row | Dest Block | Dynamic Next End | Status |")
    print("| --- | ---: | --- | ---: | --- | --- | --- | --- |")
    for row in rows:
        dest_row = row["dest_row_kind"] or "-"
        if row["dest_source_entry"]:
            dest_row = f"{dest_row}/entry_{row['dest_source_entry']}"
        print(
            f"| `{row['synthetic_start_vm_ip']}` | {row['source_entry']} | "
            f"`{row['concrete_dest_vm_ip']}` | {row['zero_seed_pred_entry']} | "
            f"`{dest_row}` | `{row['dest_block'] or '-'}` | "
            f"`{row['dynamic_next_end_vm_ip'] or '-'}` | `{row['status']}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Audit symbolic synthetic gap successor candidates.")
    parser.add_argument("--transfer-probe", default=str(TRACE_DIR / "vm_synthetic_gap_transfer_probe.tsv"))
    parser.add_argument("--dynamic-stitch", default=str(TRACE_DIR / "vm_synthetic_gap_dynamic_stitch.tsv"))
    parser.add_argument("--ir", default=str(TRACE_DIR / "vm_bytecode_ir.tsv"))
    parser.add_argument("--blocks", default=str(TRACE_DIR / "vm_bytecode_basic_blocks.tsv"))
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_symbolic_successor_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
