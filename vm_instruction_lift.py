#!/usr/bin/env python3
import argparse
import csv
import re
from pathlib import Path


SITE_RE = re.compile(r"(?:tail|dispatch)@(0x[0-9a-f]+):(\d+)")


def parse_int(value):
    if value is None or value == "":
        return None
    if value.startswith("+"):
        return int(value[1:], 0)
    return int(value, 0)


def read_tsv(path):
    with Path(path).open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def first_site(top_sites):
    best = None
    for site_s, count_s in SITE_RE.findall(top_sites or ""):
        count = int(count_s)
        if best is None or count > best[1]:
            best = (site_s, count)
    return best[0] if best else ""


def load_state_signatures(path):
    if not path:
        return {}
    states = {}
    for row in read_tsv(path):
        key = (
            row.get("source_entry", ""),
            row.get("source_target", ""),
            row.get("key_delta", ""),
            row.get("key_status", ""),
            row.get("key_bytes", ""),
        )
        states[key] = row
    return states


def load_tail_roles(path):
    roles = {}
    if not path:
        return roles
    for row in read_tsv(path):
        key = (row.get("source_entry", ""), row.get("source_target", ""), row.get("site", ""))
        roles[key] = row
    return roles


def load_static_slots(path):
    slots = {}
    if not path:
        return slots
    for row in read_tsv(path):
        key = (row.get("source_entry", ""), row.get("source_target", ""), row.get("site", ""))
        slots[key] = row
    return slots


def main():
    parser = argparse.ArgumentParser(
        description="Join recovered VM instructions with state effects and tail dispatch roles."
    )
    parser.add_argument(
        "instructions",
        nargs="?",
        default="dumps/vmtail-wide-1m-w16/vm_instruction_unique.tsv",
    )
    parser.add_argument(
        "--state-signatures",
        default="dumps/vmtail-state-wide-w16/vm_state_signatures.tsv",
    )
    parser.add_argument(
        "--tail-roles",
        default="dumps/vmtail-wide-1m-w16/vm_handler_tail_roles_wide_regs.tsv",
    )
    parser.add_argument(
        "--static-slots",
        default="dumps/vmtail-wide-1m-w16/vm_tail_static_slots.tsv",
    )
    args = parser.parse_args()

    states = load_state_signatures(args.state_signatures)
    roles = load_tail_roles(args.tail_roles)
    slots = load_static_slots(args.static_slots)

    print(
        "start_vm_ip\tsource_entry\tsource_target\tdelta\tbytes\tbyte_status\t"
        "count\ttop_targets\ttop_site\tstate_class\tstate_events\ttop_state_add\t"
        "top_flag_add\ttop_byte_add\ttarget_reg\tslot_kind\tslot_reg_or_temp\t"
        "byte_index_reg\tstatic_load_site\tstatic_index_add_site\ttail_role_events"
    )
    for row in read_tsv(args.instructions):
        site = first_site(row.get("top_sites", ""))
        source_entry = row.get("source_entry", "")
        source_target = row.get("source_target", "")
        state_key = (
            source_entry,
            source_target,
            row.get("delta", ""),
            row.get("byte_status", ""),
            row.get("bytes", ""),
        )
        state = states.get(state_key, {})
        role = roles.get((source_entry, source_target, site), {})
        static = slots.get((source_entry, source_target, site), {})
        slot_kind = static.get("static_kind", "")
        slot_reg_or_temp = static.get("static_slot_temp", "") or role.get("slot_reg", "")
        byte_index_reg = static.get("static_index_reg", "") or role.get("byte_index_reg", "")
        print(
            f"{row.get('start_vm_ip', '')}\t{source_entry}\t{source_target}\t"
            f"{row.get('delta', '')}\t{row.get('bytes', '')}\t"
            f"{row.get('byte_status', '')}\t{row.get('count', '')}\t"
            f"{row.get('top_targets', '')}\t{site}\t"
            f"{state.get('class', '')}\t{state.get('events', '')}\t"
            f"{state.get('top_state_add', '')}\t{state.get('top_flag_add', '')}\t"
            f"{state.get('top_byte_add', '')}\t{role.get('target_reg', '')}\t"
            f"{slot_kind}\t{slot_reg_or_temp}\t{byte_index_reg}\t"
            f"{static.get('static_load_site', '')}\t"
            f"{static.get('static_index_add_site', '')}\t"
            f"{role.get('register_trace_events', '')}"
        )


if __name__ == "__main__":
    main()
