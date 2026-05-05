#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter, defaultdict
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv
from vm_static_dispatch_validate import read_dispatch_table
from vm_static_transfer_expr import clip, execute, path_hash
from vm_state_static_validate import disassemble_region, make_disassembler, parse_int, read_skeletons


def first_counted_hex(text):
    if not text:
        return ""
    item = text.split(",", 1)[0]
    parts = item.split(":")
    return parts[-1] if len(parts) >= 2 else ""


def source_from_counter(text):
    if not text:
        return ""
    return text.split(",", 1)[0].split(":", 1)[0]


def load_by_source(path):
    rows = defaultdict(list)
    for row in read_tsv(path):
        source = row.get("source_entry", "")
        if source:
            rows[source].append(row)
    return rows


def compact_tail_roles(rows):
    out = []
    for row in rows:
        site = row.get("site", "")
        target = row.get("target_reg", "")
        slot = row.get("live_slot_reg", "") or row.get("slot_reg", "") or row.get("static_slot_temp", "")
        index = row.get("static_index_reg", "") or row.get("byte_index_reg", "")
        kind = row.get("static_kind", "")
        pieces = [f"site={site}"]
        if kind:
            pieces.append(f"kind={kind}")
        if target:
            pieces.append(f"target={target}")
        if slot:
            pieces.append(f"slot={slot}")
        if index:
            pieces.append(f"index={index}")
        out.append(",".join(pieces))
    return " | ".join(out)


def classify(status, target_expr, slot_expr, tail_roles):
    if slot_expr:
        return "symbolic_slot_expr"
    if status == "ok":
        return "zero_seed_concrete_target"
    if target_expr.startswith("mem[") and tail_roles:
        return "live_in_dispatch_regs"
    if status:
        return status
    return "unknown"


def build_rows(args):
    eac = Path(args.eac).read_bytes()
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    md = make_disassembler()
    skeletons = read_skeletons(args.skeletons)
    tail_roles = load_by_source(args.tail_roles)
    static_slots = load_by_source(args.static_slots)

    decoded = {}
    out = []
    for gap in read_tsv(args.gaps):
        source = source_from_counter(gap.get("synthetic_sources", ""))
        if not source:
            continue
        operand_bytes = first_counted_hex(gap.get("top_bytes", ""))
        skel = skeletons.get(source)
        if not skel:
            continue
        if source not in decoded:
            target = parse_int(skel.get("target"))
            tail_site = parse_int(skel.get("tail_site"))
            if target is None:
                continue
            stop = tail_site + 16 if tail_site is not None else target + args.window
            if stop - target > args.window:
                stop = target + args.window
            _insns, by_addr = disassemble_region(md, eac, target, stop)
            decoded[source] = (target, by_addr)
        target, by_addr = decoded[source]
        row = {
            "bytes": operand_bytes,
            "pre_state": "0x0",
            "pre_flags": "0x0",
            "pre_byte": "0x0",
            "start_vm_ip": gap.get("synthetic_start_vm_ip", "0x0"),
        }
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
            branch_unknown,
            path,
        ) = execute(by_addr, target, row, table, target_to_entry, args.max_steps, args.max_expr_len)
        role_text = compact_tail_roles(tail_roles.get(source, []))
        static_text = compact_tail_roles(static_slots.get(source, []))
        out.append({
            "source_entry": source,
            "synthetic_start_vm_ip": gap.get("synthetic_start_vm_ip", ""),
            "missing_successor_vm_ip": gap.get("missing_successor_vm_ip", ""),
            "operand_bytes": operand_bytes,
            "gap_statuses": gap.get("synthetic_statuses", ""),
            "zero_seed_status": status,
            "zero_seed_pred_entry": "" if pred_entry is None or pred_entry < 0 else str(pred_entry),
            "zero_seed_pred_target": "" if pred_target is None else f"0x{pred_target:x}",
            "zero_seed_pred_delta": f"{pred_delta:+#x}",
            "target_expr": target_expr,
            "slot_expr": slot_expr,
            "ip_expr": ip_expr,
            "steps": steps,
            "unknown_ops": unknown,
            "branch_unknown": branch_unknown,
            "path_hash": path_hash(path),
            "path": clip(";".join(path) if path else "-", args.max_path_len),
            "tail_roles": role_text,
            "static_slot_roles": static_text,
            "classification": classify(status, target_expr, slot_expr, role_text or static_text),
            "atlas_context": gap.get("atlas_context", ""),
        })
    out.sort(key=lambda row: parse_hex(row["missing_successor_vm_ip"]))
    return out


def emit_tsv(rows):
    fields = [
        "source_entry",
        "synthetic_start_vm_ip",
        "missing_successor_vm_ip",
        "operand_bytes",
        "gap_statuses",
        "zero_seed_status",
        "zero_seed_pred_entry",
        "zero_seed_pred_target",
        "zero_seed_pred_delta",
        "target_expr",
        "slot_expr",
        "ip_expr",
        "steps",
        "unknown_ops",
        "branch_unknown",
        "path_hash",
        "path",
        "tail_roles",
        "static_slot_roles",
        "classification",
        "atlas_context",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    classes = Counter(row["classification"] for row in rows)
    statuses = Counter(row["zero_seed_status"] for row in rows)
    print("# Synthetic Gap Transfer Probe\n")
    print("Static transfer probe over the remaining synthetic-successor gap bytes.")
    print("Concrete state/flags are zero-seeded only to drive a path; target/slot expressions remain symbolic where recovered.\n")
    print(f"Rows: {len(rows)}.")
    print(f"Class mix: {', '.join(f'{k}:{v}' for k, v in classes.most_common()) or '-'}.")
    print(f"Zero-seed status mix: {', '.join(f'{k}:{v}' for k, v in statuses.most_common()) or '-'}.\n")
    print("| Missing Successor | Source | Bytes | Class | Target Expr | Slot/IP Expr | Tail Roles |")
    print("| --- | ---: | --- | --- | --- | --- | --- |")
    for row in rows:
        slot_ip = row["slot_expr"] or "-"
        if row["ip_expr"] and row["ip_expr"] != "0x0":
            slot_ip = f"{slot_ip}; ip={row['ip_expr']}"
        print(
            f"| `{row['missing_successor_vm_ip']}` | {row['source_entry']} | "
            f"`{row['operand_bytes']}` | `{row['classification']}` | "
            f"`{row['target_expr'] or '-'}` | `{slot_ip}` | "
            f"`{row['static_slot_roles'] or row['tail_roles'] or '-'}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Run a symbolic transfer probe over unresolved synthetic successor gaps.")
    parser.add_argument("--gaps", default="dumps/vmtail-wide-1m-w16/vm_synthetic_successor_gaps.tsv")
    parser.add_argument("--skeletons", default="dumps/vmtail-wide-1m-w16/vm_handler_skeletons.tsv")
    parser.add_argument("--tail-roles", default="dumps/vmtail-wide-1m-w16/vm_handler_tail_roles_wide_regs.tsv")
    parser.add_argument("--static-slots", default="dumps/vmtail-wide-1m-w16/vm_tail_static_slots.tsv")
    parser.add_argument("--eac", default="eac.elf")
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
    print(f"synthetic_gap_transfer_probe_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
