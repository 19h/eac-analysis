#!/usr/bin/env python3
import argparse
import csv
import re
import struct
import sys
from collections import Counter, defaultdict
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
REG_RE = re.compile(r"\b(?:r(?:1[0-5]|[0-9]|[abcd]x|[sd]i|[sb]p))\b")
FIELD_RE = re.compile(r"\b([a-z][a-z0-9_]*)=0x([0-9a-f]+)")
DEREF_RE = re.compile(r"qword ptr \[(?P<reg>r(?:1[0-5]|[0-9]|[abcd]x|[sd]i|[sb]p))\]")
JMP_RE = re.compile(r"\bJMP:(?P<reg>\*?r(?:1[0-5]|[0-9]|[abcd]x|[sd]i|[sb]p))\b")


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
    wanted_ips = set()
    for row in read_tsv(path):
        if row.get("classification") != "live_in_dispatch_regs":
            continue
        start = parse_hex(row.get("synthetic_start_vm_ip", ""))
        missing = parse_hex(row.get("missing_successor_vm_ip", ""))
        if start is None:
            continue
        row["_start_int"] = start
        row["_missing_int"] = missing
        rows.append(row)
        wanted_ips.add(start)
        if missing is not None:
            wanted_ips.add(missing)
    return rows, wanted_ips


def load_events(run_path, wanted_ips):
    events = defaultdict(list)
    if not Path(run_path).exists():
        return events
    with Path(run_path).open(errors="replace") as handle:
        for line in handle:
            if not line.startswith("[VMTAIL]"):
                continue
            fields = parse_fields(line)
            vm_ip_off = fields.get("vm_ip_off")
            if vm_ip_off in wanted_ips:
                events[vm_ip_off].append(fields)
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


def load_skeleton_tail_sites(path):
    sites = {}
    if not Path(path).exists():
        return sites
    for row in read_tsv(path):
        entry = row.get("entry", "")
        site = parse_hex(row.get("tail_site", ""))
        if site is None:
            continue
        text = row.get("dispatch_skeleton", "") or row.get("skeleton", "")
        match = JMP_RE.search(text)
        target_reg = match.group("reg") if match else ""
        sites[entry] = {
            "tail_site": site,
            "tail_site_text": f"0x{site:x}",
            "tail_target_reg": target_reg,
        }
    return sites


def select_event(events, vm_ip_off, site=None):
    candidates = events.get(vm_ip_off) or []
    if site is not None:
        for fields in candidates:
            if fields.get("site") == site:
                return fields
    return candidates[0] if candidates else None


def event_target_entry(fields, target_to_entry):
    if not fields:
        return "", "", None
    target_off = fields.get("target_off")
    entry = target_to_entry.get(target_off, "")
    target_off_text = f"0x{target_off:x}" if target_off is not None else ""
    return str(entry), target_off_text, target_off


def image_base_from_event(fields):
    if not fields:
        return None
    target = fields.get("target")
    target_off = fields.get("target_off")
    if target is None or target_off is None:
        return None
    return target - target_off


def deref_read_roles(deref_regs, fields, target_to_entry):
    if not fields:
        return "", 0, 0
    image_base = image_base_from_event(fields)
    parts = []
    observed = 0
    target_matches = 0
    target = fields.get("target")
    for reg in deref_regs:
        value = fields.get(f"mem_{reg}")
        addr = fields.get(reg)
        if value is None:
            addr_text = f"@0x{addr:x}" if addr is not None else ""
            parts.append(f"{reg}{addr_text}=unread")
            continue
        observed += 1
        if target is not None and value == target:
            target_matches += 1
        parts.append(classify_value(f"*{reg}", value, fields, image_base, target_to_entry))
    return " | ".join(parts), observed, target_matches


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
    live_rows, wanted_ips = needed_live_in_rows(args.transfer_probe)
    events = load_events(args.gpr_run, wanted_ips)
    skeleton_tail_sites = load_skeleton_tail_sites(args.skeletons)
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: entry for entry, target in enumerate(table)}
    rows = []
    for row in live_rows:
        start = row["_start_int"]
        missing = row.get("_missing_int")
        tail_info = skeleton_tail_sites.get(row.get("source_entry", ""), {})
        tail_site = tail_info.get("tail_site")
        fields = select_event(events, start)
        tail_fields = select_event(events, missing, tail_site) if missing is not None else None
        target_expr = row.get("target_expr", "")
        regs = sorted(set(REG_RE.findall(target_expr)))
        deref_regs = sorted(set(match.group("reg") for match in DEREF_RE.finditer(target_expr)))
        tail_entry, tail_target_off_text, _tail_target_off = event_target_entry(tail_fields, target_to_entry)
        deref_reads, deref_observed, deref_target_matches = deref_read_roles(deref_regs, tail_fields, target_to_entry)
        if not fields:
            if deref_regs and deref_target_matches:
                resolution = "tail_mem_deref_matches_event_target"
            elif deref_regs and deref_observed:
                resolution = "tail_mem_deref_observed_without_start_regs"
            else:
                resolution = "missing_gpr_event"
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
                "final_tail_site": tail_info.get("tail_site_text", ""),
                "final_tail_target_reg": tail_info.get("tail_target_reg", ""),
                "tail_event_site": f"0x{tail_fields.get('site', 0):x}" if tail_fields else "",
                "tail_event_target_entry": tail_entry,
                "tail_event_target_off": tail_target_off_text,
                "deref_reads": deref_reads,
                "reg_roles": "",
                "role_classes": "",
                "resolution": resolution,
            })
            continue
        target_off = fields.get("target_off")
        event_entry = target_to_entry.get(target_off, "")
        image_base = image_base_from_event(fields)
        role_texts = [
            classify_value(reg, fields.get(reg), fields, image_base, target_to_entry)
            for reg in regs
        ]
        classes = sorted(set(role_class(text) for text in role_texts))
        if deref_regs and deref_target_matches:
            resolution = "tail_mem_deref_matches_event_target"
        elif deref_regs and deref_observed == len(deref_regs):
            resolution = "tail_mem_deref_observed_target_mismatch"
        elif deref_regs and deref_observed:
            resolution = "tail_mem_deref_partially_observed"
        elif deref_regs:
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
            "final_tail_site": tail_info.get("tail_site_text", ""),
            "final_tail_target_reg": tail_info.get("tail_target_reg", ""),
            "tail_event_site": f"0x{tail_fields.get('site', 0):x}" if tail_fields else "",
            "tail_event_target_entry": tail_entry,
            "tail_event_target_off": tail_target_off_text,
            "deref_reads": deref_reads,
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
        "final_tail_site",
        "final_tail_target_reg",
        "tail_event_site",
        "tail_event_target_entry",
        "tail_event_target_off",
        "deref_reads",
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
    print("| Start | Source | Target Expr | Start Site | Final Site | Tail Target | Deref Reads | Resolution |")
    print("| --- | ---: | --- | --- | --- | ---: | --- | --- |")
    for row in rows:
        deref_reads = row["deref_reads"]
        if len(deref_reads) > 100:
            deref_reads = deref_reads[:97] + "..."
        print(
            f"| `{row['synthetic_start_vm_ip']}` | {row['source_entry']} | "
            f"`{row['target_expr']}` | `{row['event_site'] or '-'}` | "
            f"`{row['final_tail_site'] or '-'}` | {row['tail_event_target_entry'] or '-'} | "
            f"`{deref_reads or '-'}` | `{row['resolution']}` |"
        )
    print("\nThe start-site registers name live inputs; final-tail `mem_<reg>` fields resolve the qword dereferences when `EAC_VMTAIL_MEM=1` traces those sites.")


def main():
    parser = argparse.ArgumentParser(description="Join live-in synthetic gap transfer probes with GPR trace register roles.")
    parser.add_argument("--transfer-probe", default=str(TRACE_DIR / "vm_synthetic_gap_transfer_probe.tsv"))
    parser.add_argument("--gpr-run", default="dumps/vmtail-scratch-wide-w16-fs337all-fs128/run.stderr")
    parser.add_argument("--skeletons", default=str(TRACE_DIR / "vm_handler_skeletons.tsv"))
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
