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


def load_state_affine(path):
    affine = {}
    if not path:
        return affine
    for row in read_tsv(path):
        affine[row.get("source_entry", "")] = row
    return affine


def load_state_static_validate(path):
    validate = {}
    if not path:
        return validate
    for row in read_tsv(path):
        validate[row.get("source_entry", "")] = row
    return validate


def load_static_dispatch_validate(path):
    validate = {}
    if not path:
        return validate
    for row in read_tsv(path):
        validate[row.get("source_entry", "")] = row
    return validate


def load_dispatch_model(path):
    model = {}
    if not path:
        return model
    for row in read_tsv(path):
        model[row.get("source_entry", "")] = row
    return model


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


def load_dispatch_formulas(path):
    formulas = {}
    if not path:
        return formulas
    for row in read_tsv(path):
        formulas[row.get("source_entry", "")] = row
    return formulas


def load_dispatch_affine(path):
    affine = {}
    if not path:
        return affine
    for row in read_tsv(path):
        affine[row.get("source_entry", "")] = row
    return affine


def load_dispatch_affine_cv(path):
    cv = {}
    if not path:
        return cv
    for row in read_tsv(path):
        cv[row.get("source_entry", "")] = row
    return cv


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
        "--state-affine",
        default="dumps/vmtail-state-wide-w16/vm_state_affine_fullfields.tsv",
    )
    parser.add_argument(
        "--state-static-validate",
        default="dumps/vmtail-state-wide-w16/vm_state_static_validate_fast.tsv",
    )
    parser.add_argument(
        "--static-dispatch-validate",
        default="dumps/vmtail-state-wide-w16/vm_static_dispatch_validate_fast.tsv",
    )
    parser.add_argument(
        "--dispatch-model",
        default="dumps/vmtail-state-wide-w16/vm_dispatch_model_combined.tsv",
    )
    parser.add_argument(
        "--tail-roles",
        default="dumps/vmtail-wide-1m-w16/vm_handler_tail_roles_wide_regs.tsv",
    )
    parser.add_argument(
        "--static-slots",
        default="dumps/vmtail-wide-1m-w16/vm_tail_static_slots.tsv",
    )
    parser.add_argument(
        "--dispatch-formulas",
        default="dumps/vmtail-state-wide-w16/vm_dispatch_formulas.tsv",
    )
    parser.add_argument(
        "--dispatch-affine",
        default="dumps/vmtail-state-wide-w16/vm_dispatch_affine.tsv",
    )
    parser.add_argument(
        "--dispatch-affine-cv",
        default="dumps/vmtail-state-wide-w16/vm_dispatch_affine_cv.tsv",
    )
    args = parser.parse_args()

    states = load_state_signatures(args.state_signatures)
    state_affine = load_state_affine(args.state_affine)
    state_static_validate = load_state_static_validate(args.state_static_validate)
    static_dispatch_validate = load_static_dispatch_validate(args.static_dispatch_validate)
    dispatch_model = load_dispatch_model(args.dispatch_model)
    roles = load_tail_roles(args.tail_roles)
    slots = load_static_slots(args.static_slots)
    formulas = load_dispatch_formulas(args.dispatch_formulas)
    affine = load_dispatch_affine(args.dispatch_affine)
    affine_cv = load_dispatch_affine_cv(args.dispatch_affine_cv)

    print(
        "start_vm_ip\tsource_entry\tsource_target\tdelta\tbytes\tbyte_status\t"
        "count\ttop_targets\ttop_site\tstate_class\tstate_events\ttop_state_add\t"
        "top_flag_add\ttop_byte_add\tstate_affine_status\tstate_affine_cv_status\t"
        "state_affine_cv_pct\tstate_affine_terms\tstate_static_pct\t"
        "state_static_mismatches\tstatic_dispatch_pct\tstatic_dispatch_mismatches\t"
        "static_ip_pct\tstatic_ip_mismatches\tdispatch_model\tdispatch_model_pct\t"
        "target_reg\tslot_kind\tslot_reg_or_temp\t"
        "byte_index_reg\tstatic_load_site\tstatic_index_add_site\ttail_role_events\t"
        "dispatch_formula\tdispatch_formula_class\tdispatch_formula_pct\t"
        "dispatch_affine_status\tdispatch_affine_pct\tdispatch_affine_terms\t"
        "dispatch_affine_cv_status\tdispatch_affine_cv_pct"
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
        state_affine_row = state_affine.get(source_entry, {})
        static_validate_row = state_static_validate.get(source_entry, {})
        static_dispatch_row = static_dispatch_validate.get(source_entry, {})
        dispatch_model_row = dispatch_model.get(source_entry, {})
        role = roles.get((source_entry, source_target, site), {})
        static = slots.get((source_entry, source_target, site), {})
        formula = formulas.get(source_entry, {})
        affine_row = affine.get(source_entry, {})
        affine_cv_row = affine_cv.get(source_entry, {})
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
            f"{state.get('top_byte_add', '')}\t"
            f"{state_affine_row.get('full_status', '')}\t"
            f"{state_affine_row.get('cv_status', '')}\t"
            f"{state_affine_row.get('cv_coverage_pct', '')}\t"
            f"{state_affine_row.get('total_terms', '')}\t"
            f"{static_validate_row.get('coverage_pct', '')}\t"
            f"{static_validate_row.get('mismatched_events', '')}\t"
            f"{static_dispatch_row.get('target_coverage_pct', '')}\t"
            f"{static_dispatch_row.get('target_mismatched_events', '')}\t"
            f"{static_dispatch_row.get('ip_coverage_pct', '')}\t"
            f"{static_dispatch_row.get('ip_mismatched_events', '')}\t"
            f"{dispatch_model_row.get('model', '')}\t"
            f"{dispatch_model_row.get('coverage_pct', '')}\t"
            f"{role.get('target_reg', '')}\t"
            f"{slot_kind}\t{slot_reg_or_temp}\t{byte_index_reg}\t"
            f"{static.get('static_load_site', '')}\t"
            f"{static.get('static_index_add_site', '')}\t"
            f"{role.get('register_trace_events', '')}\t"
            f"{formula.get('best_formula', '')}\t"
            f"{formula.get('best_class', '')}\t"
            f"{formula.get('coverage_pct', '')}\t"
            f"{affine_row.get('status', '')}\t"
            f"{affine_row.get('coverage_pct', '')}\t"
            f"{affine_row.get('total_terms', '')}\t"
            f"{affine_cv_row.get('cv_status', '')}\t"
            f"{affine_cv_row.get('coverage_pct', '')}"
        )


if __name__ == "__main__":
    main()
