#!/usr/bin/env python3
import argparse
import re
import struct
from collections import Counter, defaultdict
from pathlib import Path


FIELD_RE = re.compile(r"\b([a-z][a-z0-9_]*)=0x([0-9a-f]+)")
VMTAIL_RE = re.compile(r"^\[VMTAIL\]")
REG_NAMES = {
    "rax", "rbx", "rcx", "rdx", "rsi", "rdi",
    "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15",
    "rbp", "rsp",
}


def read_dispatch_table(eac_path: Path, table_off=0xc3718, entries=360):
    data = eac_path.read_bytes()
    return [struct.unpack_from("<Q", data, table_off + idx * 8)[0] for idx in range(entries)]


def fmt_counter(counter, max_items):
    return ",".join(f"{key}:{count}" for key, count in counter.most_common(max_items))


def parse_fields(line):
    return {name: int(value_s, 16) for name, value_s in FIELD_RE.findall(line)}


def classify_event(fields, target_to_entry):
    target_off = fields.get("target_off")
    table = fields.get("table")
    frame = fields.get("frame")
    vm_ip = fields.get("vm_ip")
    target = fields.get("target")
    entry = target_to_entry.get(target_off)
    roles = []
    if entry is None or table is None:
        return roles
    slot = table + entry * 8
    idx = entry * 8

    for reg in REG_NAMES:
        value = fields.get(reg)
        if value is None:
            continue
        if target is not None and value == target:
            roles.append((reg, "target_value", entry))
        if value == table:
            roles.append((reg, "table_value", entry))
        if value == slot:
            roles.append((reg, "slot_pointer", entry))
        if value == idx:
            roles.append((reg, "byte_index", entry))
        if value == entry:
            roles.append((reg, "entry_index", entry))
        if frame is not None and value == frame:
            roles.append((reg, "frame_pointer", entry))
        if vm_ip is not None and value == vm_ip:
            roles.append((reg, "vm_ip_pointer", entry))
        if table <= value < table + 360 * 8 and (value - table) % 8 == 0:
            pointed_entry = (value - table) // 8
            role = "table_slot_match" if pointed_entry == entry else "table_slot_other"
            roles.append((reg, role, pointed_entry))
    return roles


def main():
    parser = argparse.ArgumentParser(description="Infer VM tail register roles from EAC_VMTAIL_REGS traces.")
    parser.add_argument("dump_dir", nargs="?", default="dumps/vmtail-regs-smoke-w16")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--site-summary", action="store_true", help="emit one compact row per tail site")
    parser.add_argument("--max-items", type=int, default=8)
    args = parser.parse_args()

    dump_dir = Path(args.dump_dir)
    table = read_dispatch_table(Path(args.eac))
    target_to_entry = {target: entry for entry, target in enumerate(table)}

    by_site_role = Counter()
    role_entries = defaultdict(Counter)
    site_events = Counter()
    site_targets = defaultdict(Counter)
    role_values = defaultdict(Counter)
    parsed_events = 0
    missing_entry = 0

    with (dump_dir / "run.stderr").open(errors="replace") as handle:
        for line in handle:
            if not VMTAIL_RE.search(line):
                continue
            fields = parse_fields(line)
            site = fields.get("site")
            target_off = fields.get("target_off")
            if site is None:
                continue
            parsed_events += 1
            site_events[site] += 1
            entry = target_to_entry.get(target_off)
            if entry is None:
                missing_entry += 1
            else:
                site_targets[site][entry] += 1
            for reg, role, role_entry in classify_event(fields, target_to_entry):
                key = (site, reg, role)
                by_site_role[key] += 1
                role_entries[key][role_entry] += 1
                value = fields.get(reg)
                if value is not None:
                    role_values[key][f"0x{value:x}"] += 1

    if args.site_summary:
        emit_site_summary(site_events, site_targets, by_site_role, args.max_items)
    else:
        emit_role_rows(site_events, site_targets, by_site_role, role_entries, role_values, args.max_items)

    print(f"# parsed_vm_tail_events={parsed_events}", file=__import__("sys").stderr)
    if missing_entry:
        print(f"# missing_target_entry={missing_entry}", file=__import__("sys").stderr)


def best_role(site, role, site_events, by_site_role):
    best = None
    for (role_site, reg, candidate_role), count in by_site_role.items():
        if role_site != site or candidate_role != role:
            continue
        if best is None or count > best[1] or (count == best[1] and reg < best[0]):
            best = (reg, count)
    if best is None:
        return "", "", ""
    reg, count = best
    total = site_events[site]
    pct = count * 100.0 / total if total else 0.0
    return reg, str(count), f"{pct:.1f}"


def emit_site_summary(site_events, site_targets, by_site_role, max_items):
    print(
        "site\tevents\ttarget_reg\ttarget_events\ttarget_pct\t"
        "slot_reg\tslot_events\tslot_pct\tbyte_index_reg\tbyte_index_events\t"
        "byte_index_pct\tentry_index_reg\tentry_index_events\tentry_index_pct\t"
        "table_reg\ttable_events\ttable_pct\tframe_reg\tframe_events\tframe_pct\t"
        "top_targets"
    )
    for site, total in site_events.most_common():
        target = best_role(site, "target_value", site_events, by_site_role)
        slot = best_role(site, "slot_pointer", site_events, by_site_role)
        byte_index = best_role(site, "byte_index", site_events, by_site_role)
        entry_index = best_role(site, "entry_index", site_events, by_site_role)
        table = best_role(site, "table_value", site_events, by_site_role)
        frame = best_role(site, "frame_pointer", site_events, by_site_role)
        print(
            f"0x{site:x}\t{total}\t"
            f"{target[0]}\t{target[1]}\t{target[2]}\t"
            f"{slot[0]}\t{slot[1]}\t{slot[2]}\t"
            f"{byte_index[0]}\t{byte_index[1]}\t{byte_index[2]}\t"
            f"{entry_index[0]}\t{entry_index[1]}\t{entry_index[2]}\t"
            f"{table[0]}\t{table[1]}\t{table[2]}\t"
            f"{frame[0]}\t{frame[1]}\t{frame[2]}\t"
            f"{fmt_counter(site_targets[site], max_items)}"
        )


def emit_role_rows(site_events, site_targets, by_site_role, role_entries, role_values, max_items):
    print(
        "site\treg\trole\tevents\tsite_events\tcoverage_pct\t"
        "top_entries\ttop_values\ttop_site_targets"
    )
    for (site, reg, role), count in sorted(
        by_site_role.items(), key=lambda item: (-item[1], item[0][0], item[0][1], item[0][2])
    ):
        total = site_events[site]
        pct = count * 100.0 / total if total else 0.0
        print(
            f"0x{site:x}\t{reg}\t{role}\t{count}\t{total}\t{pct:.1f}\t"
            f"{fmt_counter(role_entries[(site, reg, role)], max_items)}\t"
            f"{fmt_counter(role_values[(site, reg, role)], max_items)}\t"
            f"{fmt_counter(site_targets[site], max_items)}"
        )


if __name__ == "__main__":
    main()
