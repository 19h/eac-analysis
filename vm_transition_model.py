#!/usr/bin/env python3
import argparse
import csv
import sys
from pathlib import Path


def read_tsv(path):
    with Path(path).open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def load_by(path, key):
    rows = {}
    if not path:
        return rows
    for row in read_tsv(path):
        rows[row.get(key, "")] = row
    return rows


def load_tail_rows(path):
    rows = {}
    if not path:
        return rows
    for row in read_tsv(path):
        key = (row.get("source_entry", ""), row.get("source_target", ""), row.get("site", ""))
        rows[key] = row
    return rows


def choose_tail_row(rows, entry, target, site):
    if not rows:
        return {}
    return (
        rows.get((entry, target, site))
        or rows.get((entry, "", site))
        or rows.get((entry, target, ""))
        or {}
    )


def sorted_entries(*row_maps):
    entries = set()
    for rows in row_maps:
        entries.update(key for key in rows if key != "")
    return sorted(entries, key=lambda value: int(value, 0))


def main():
    parser = argparse.ArgumentParser(
        description="Build a one-row-per-dispatch-entry VM transition model table."
    )
    parser.add_argument(
        "--skeletons",
        default="dumps/vmtail-wide-1m-w16/vm_handler_skeletons.tsv",
    )
    parser.add_argument(
        "--state-slice",
        default="dumps/vmtail-wide-1m-w16/vm_state_static_slice.tsv",
    )
    parser.add_argument(
        "--state-static-validate",
        default="dumps/vmtail-state-wide-w16/vm_state_static_validate.tsv",
    )
    parser.add_argument(
        "--state-affine",
        default="dumps/vmtail-state-wide-w16/vm_state_affine_fullfields.tsv",
    )
    parser.add_argument(
        "--static-dispatch-validate",
        default="dumps/vmtail-state-wide-w16/vm_static_dispatch_validate.tsv",
    )
    parser.add_argument(
        "--dispatch-model",
        default="dumps/vmtail-state-wide-w16/vm_dispatch_model_combined.tsv",
    )
    parser.add_argument(
        "--dispatch-affine-cv",
        default="dumps/vmtail-state-wide-w16/vm_dispatch_affine_cv.tsv",
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

    skeletons = load_by(args.skeletons, "entry")
    slices = load_by(args.state_slice, "entry")
    state_static = load_by(args.state_static_validate, "source_entry")
    state_affine = load_by(args.state_affine, "source_entry")
    static_dispatch = load_by(args.static_dispatch_validate, "source_entry")
    dispatch_model = load_by(args.dispatch_model, "source_entry")
    dispatch_affine_cv = load_by(args.dispatch_affine_cv, "source_entry")
    tail_roles = load_tail_rows(args.tail_roles)
    static_slots = load_tail_rows(args.static_slots)

    fieldnames = [
        "entry",
        "target",
        "observation",
        "observed_events",
        "delta",
        "shape",
        "tail_site",
        "static_stop",
        "top_targets",
        "state_update_count",
        "flag_update_count",
        "branch_count",
        "ip_reads",
        "state_static_pct",
        "state_static_mismatches",
        "state_affine_status",
        "state_affine_cv_status",
        "state_affine_cv_pct",
        "state_affine_terms",
        "static_dispatch_pct",
        "static_dispatch_mismatches",
        "static_ip_pct",
        "static_ip_mismatches",
        "dispatch_model",
        "dispatch_model_pct",
        "dispatch_model_events",
        "dispatch_affine_cv_status",
        "dispatch_affine_cv_pct",
        "dispatch_affine_terms",
        "target_reg",
        "slot_kind",
        "slot_reg_or_temp",
        "byte_index_reg",
        "static_load_site",
        "static_index_add_site",
        "tail_role_events",
        "decode_signature",
        "dispatch_skeleton",
        "final_state_expr",
    ]

    writer = csv.DictWriter(sys.stdout, fieldnames=fieldnames, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for entry in sorted_entries(
        skeletons,
        slices,
        state_static,
        state_affine,
        static_dispatch,
        dispatch_model,
        dispatch_affine_cv,
    ):
        skeleton = skeletons.get(entry, {})
        state_slice = slices.get(entry, {})
        state_static_row = state_static.get(entry, {})
        state_affine_row = state_affine.get(entry, {})
        static_dispatch_row = static_dispatch.get(entry, {})
        dispatch_model_row = dispatch_model.get(entry, {})
        dispatch_affine_row = dispatch_affine_cv.get(entry, {})

        target = skeleton.get("target", "") or state_slice.get("target", "")
        tail_site = skeleton.get("tail_site", "") or state_slice.get("tail_site", "")
        role = choose_tail_row(tail_roles, entry, target, tail_site)
        slot = choose_tail_row(static_slots, entry, target, tail_site)
        slot_kind = slot.get("static_kind", "")
        slot_reg_or_temp = slot.get("static_slot_temp", "") or role.get("slot_reg", "")
        byte_index_reg = slot.get("static_index_reg", "") or role.get("byte_index_reg", "")

        writer.writerow(
            {
                "entry": entry,
                "target": target,
                "observation": skeleton.get("observation", ""),
                "observed_events": skeleton.get("events", "") or state_slice.get("events", ""),
                "delta": skeleton.get("delta", ""),
                "shape": skeleton.get("shape", ""),
                "tail_site": tail_site,
                "static_stop": skeleton.get("static_stop", ""),
                "top_targets": skeleton.get("top_targets", ""),
                "state_update_count": state_slice.get("state_update_count", ""),
                "flag_update_count": state_slice.get("flag_update_count", ""),
                "branch_count": state_slice.get("branch_count", ""),
                "ip_reads": state_slice.get("ip_reads", ""),
                "state_static_pct": state_static_row.get("coverage_pct", ""),
                "state_static_mismatches": state_static_row.get("mismatched_events", ""),
                "state_affine_status": state_affine_row.get("full_status", ""),
                "state_affine_cv_status": state_affine_row.get("cv_status", ""),
                "state_affine_cv_pct": state_affine_row.get("cv_coverage_pct", ""),
                "state_affine_terms": state_affine_row.get("total_terms", ""),
                "static_dispatch_pct": static_dispatch_row.get("target_coverage_pct", ""),
                "static_dispatch_mismatches": static_dispatch_row.get("target_mismatched_events", ""),
                "static_ip_pct": static_dispatch_row.get("ip_coverage_pct", ""),
                "static_ip_mismatches": static_dispatch_row.get("ip_mismatched_events", ""),
                "dispatch_model": dispatch_model_row.get("model", ""),
                "dispatch_model_pct": dispatch_model_row.get("coverage_pct", ""),
                "dispatch_model_events": dispatch_model_row.get("events", ""),
                "dispatch_affine_cv_status": dispatch_affine_row.get("cv_status", ""),
                "dispatch_affine_cv_pct": dispatch_affine_row.get("coverage_pct", ""),
                "dispatch_affine_terms": dispatch_affine_row.get("full_terms", ""),
                "target_reg": role.get("target_reg", ""),
                "slot_kind": slot_kind,
                "slot_reg_or_temp": slot_reg_or_temp,
                "byte_index_reg": byte_index_reg,
                "static_load_site": slot.get("static_load_site", ""),
                "static_index_add_site": slot.get("static_index_add_site", ""),
                "tail_role_events": role.get("register_trace_events", ""),
                "decode_signature": skeleton.get("decode_signature", ""),
                "dispatch_skeleton": skeleton.get("dispatch_skeleton", ""),
                "final_state_expr": state_slice.get("final_state_expr", ""),
            }
        )


if __name__ == "__main__":
    main()
