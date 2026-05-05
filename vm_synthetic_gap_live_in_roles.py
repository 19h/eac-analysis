#!/usr/bin/env python3
import argparse
import csv
import re
import struct
import sys
from collections import Counter
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
REG_RE = re.compile(r"\b(?:r(?:1[0-5]|[0-9]|[abcd]x|[sd]i|[sb]p))\b")
FIELD_RE = re.compile(r"\b([a-z][a-z0-9_]*)=0x([0-9a-f]+)")
DEREF_RE = re.compile(r"qword ptr \[(?P<reg>r(?:1[0-5]|[0-9]|[abcd]x|[sd]i|[sb]p))\]")


def read_tsv(path):
    with Path(path).open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def parse_hex(text):
    if not text:
        return None
    return int(text, 16)


def read_dispatch_table(eac_path, table_off=0xc3718, entries=360):
    data = Path(eac_path).read_bytes()
    return [struct.unpack_from("<Q", data, table_off + idx * 8)[0] for idx in range(entries)]


def parse_fields(line):
    return {name: int(value_s, 16) for name, value_s in FIELD_RE.findall(line)}


def needed_live_in_rows(path):
    rows = []
    starts = set()
    for row in read_tsv(path):
        if row.get("classification") != "live_in_dispatch_regs":
            continue
        start = parse_hex(row.get("synthetic_start_vm_ip", ""))
        if start is None:
            continue
        row["_start_int"] = start
        rows.append(row)
        starts.add(start)
    return rows, starts


def load_events(run_path, starts):
    events = {}
    if not Path(run_path).exists():
        return events
    with Path(run_path).open(errors="replace") as handle:
        for line in handle:
            if not line.startswith("[VMTAIL]"):
                continue
            fields = parse_fields(line)
            vm_ip_off = fields.get("vm_ip_off")
            if vm_ip_off in starts and vm_ip_off not in events:
                events[vm_ip_off] = fields
                if len(events) == len(starts):
                    break
    return events


def signed_delta(value, base):
    delta = value - base
    sign = "+" if delta >= 0 else "-"
    return f"{sign}0x{abs(delta):x}"


def classify_value(reg, value, fields, image_base, target_to_entry):
    frame = fields.get("frame")
    table = fields.get("table")
    vm_ip = fields.get("vm_ip")
    target = fields.get("target")
    rsp = fields.get("rsp")
    target_off = fields.get("target_off")
    if value is None:
        return f"{reg}=missing"
    if target is not None and value == target:
        entry = target_to_entry.get(target_off)
        if entry is not None:
            return f"{reg}=current_target(entry={entry},off=0x{target_off:x})"
        return f"{reg}=current_target(off=0x{target_off:x})"
    if table is not None:
        if value == table:
            return f"{reg}=table_base"
        if table <= value < table + 360 * 8 and (value - table) % 8 == 0:
            return f"{reg}=table_slot(entry={(value - table) // 8})"
    if frame is not None and frame - 0x4000 <= value <= frame + 0x4000:
        return f"{reg}=frame{signed_delta(value, frame)}"
    if vm_ip is not None and vm_ip - 0x4000 <= value <= vm_ip + 0x4000:
        return f"{reg}=vm_ip{signed_delta(value, vm_ip)}"
    if rsp is not None and rsp - 0x4000 <= value <= rsp + 0x4000:
        return f"{reg}=stack{signed_delta(value, rsp)}"
    if image_base is not None and image_base <= value < image_base + 0x700000:
        off = value - image_base
        entry = target_to_entry.get(off)
        if entry is not None:
            return f"{reg}=image_handler(entry={entry},off=0x{off:x})"
        return f"{reg}=image+0x{off:x}"
    if value <= 0xffffffff:
        return f"{reg}=const(0x{value:x})"
    return f"{reg}=0x{value:x}"


def role_class(role_text):
    if "current_target" in role_text:
        return "current_target"
    if "frame" in role_text:
        return "frame_relative"
    if "table" in role_text:
        return "table_related"
    if "image_handler" in role_text:
        return "image_handler"
    if "image+" in role_text:
        return "image_pointer"
    if "const(" in role_text:
        return "constant"
    if "stack" in role_text:
        return "stack_relative"
    return "unknown"


def make_rows(args):
    live_rows, starts = needed_live_in_rows(args.transfer_probe)
    events = load_events(args.gpr_run, starts)
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: entry for entry, target in enumerate(table)}
    rows = []
    for row in live_rows:
        start = row["_start_int"]
        fields = events.get(start)
        target_expr = row.get("target_expr", "")
        regs = sorted(set(REG_RE.findall(target_expr)))
        deref_regs = sorted(set(match.group("reg") for match in DEREF_RE.finditer(target_expr)))
        if not fields:
            rows.append({
                "source_entry": row.get("source_entry", ""),
                "synthetic_start_vm_ip": row.get("synthetic_start_vm_ip", ""),
                "missing_successor_vm_ip": row.get("missing_successor_vm_ip", ""),
                "target_expr": target_expr,
                "expr_regs": ",".join(regs),
                "deref_regs": ",".join(deref_regs),
                "event_site": "",
                "event_target_entry": "",
                "event_target_off": "",
                "reg_roles": "",
                "role_classes": "",
                "resolution": "missing_gpr_event",
            })
            continue
        target_off = fields.get("target_off")
        event_entry = target_to_entry.get(target_off, "")
        image_base = fields.get("target") - target_off if fields.get("target") is not None and target_off is not None else None
        role_texts = [
            classify_value(reg, fields.get(reg), fields, image_base, target_to_entry)
            for reg in regs
        ]
        classes = sorted(set(role_class(text) for text in role_texts))
        if deref_regs:
            resolution = "live_regs_named_mem_deref_unresolved"
        elif "unknown" in classes:
            resolution = "live_regs_partly_unknown"
        else:
            resolution = "live_regs_named"
        rows.append({
            "source_entry": row.get("source_entry", ""),
            "synthetic_start_vm_ip": row.get("synthetic_start_vm_ip", ""),
            "missing_successor_vm_ip": row.get("missing_successor_vm_ip", ""),
            "target_expr": target_expr,
            "expr_regs": ",".join(regs),
            "deref_regs": ",".join(deref_regs),
            "event_site": f"0x{fields.get('site', 0):x}",
            "event_target_entry": str(event_entry),
            "event_target_off": f"0x{target_off:x}" if target_off is not None else "",
            "reg_roles": " | ".join(role_texts),
            "role_classes": ",".join(classes),
            "resolution": resolution,
        })
    return rows


def emit_tsv(rows):
    fields = [
        "source_entry",
        "synthetic_start_vm_ip",
        "missing_successor_vm_ip",
        "target_expr",
        "expr_regs",
        "deref_regs",
        "event_site",
        "event_target_entry",
        "event_target_off",
        "reg_roles",
        "role_classes",
        "resolution",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    resolutions = Counter(row["resolution"] for row in rows)
    classes = Counter()
    for row in rows:
        for cls in row["role_classes"].split(","):
            if cls:
                classes[cls] += 1
    print("# Synthetic Gap Live-In Register Roles\n")
    print("Join of live-in synthetic gap transfer expressions with the GPR/scratch VMTAIL trace.\n")
    print(f"Rows: {len(rows)}.")
    print("Resolution mix: " + ", ".join(f"{key}:{value}" for key, value in resolutions.most_common()) + ".")
    print("Role-class mix: " + ", ".join(f"{key}:{value}" for key, value in classes.most_common()) + ".\n")
    print("| Start | Source | Target Expr | Event Site | Event Target | Reg Roles | Resolution |")
    print("| --- | ---: | --- | --- | ---: | --- | --- |")
    for row in rows:
        roles = row["reg_roles"]
        if len(roles) > 120:
            roles = roles[:117] + "..."
        print(
            f"| `{row['synthetic_start_vm_ip']}` | {row['source_entry']} | "
            f"`{row['target_expr']}` | `{row['event_site'] or '-'}` | "
            f"{row['event_target_entry'] or '-'} | `{roles or '-'}` | `{row['resolution']}` |"
        )
    print("\nThe live registers are named here, but qword dereferences remain unresolved unless the pointed frame/table memory is traced at the same event.")


def main():
    parser = argparse.ArgumentParser(description="Join live-in synthetic gap transfer probes with GPR trace register roles.")
    parser.add_argument("--transfer-probe", default=str(TRACE_DIR / "vm_synthetic_gap_transfer_probe.tsv"))
    parser.add_argument("--gpr-run", default="dumps/vmtail-scratch-wide-w16-fs337all-fs128/run.stderr")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = make_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_live_in_role_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
