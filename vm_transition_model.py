#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import defaultdict
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


def parse_counter_text(text):
    items = []
    for part in (text or "").split(","):
        if not part:
            continue
        key, sep, value = part.rpartition(":")
        if not sep:
            continue
        try:
            items.append((key, int(value)))
        except ValueError:
            continue
    return items


def load_branch_predicates(path, top=5):
    rows = defaultdict(lambda: {
        "events": 0,
        "unknown_events": 0,
        "classes": defaultdict(int),
        "sites": defaultdict(int),
        "conditions": defaultdict(int),
    })
    if not path:
        return {}
    for row in read_tsv(path):
        entry = row.get("source_entry", "")
        if not entry:
            continue
        bucket = rows[entry]
        events = int(row.get("events", "0") or 0)
        unknown = int(row.get("unknown_events", "0") or 0)
        bucket["events"] += events
        bucket["unknown_events"] += unknown
        for key, value in parse_counter_text(row.get("top_predicate_classes", "")):
            if key != "resolved":
                bucket["classes"][key] += value
        if unknown:
            class_head = row.get("top_predicate_classes", "").split(",", 1)[0].rsplit(":", 1)[0]
            site_key = f"{row.get('branch_site', '')}:{row.get('branch_mnemonic', '')}:{class_head}"
            bucket["sites"][site_key] += unknown
            condition = row.get("top_conditions", "")
            if condition:
                bucket["conditions"][condition] += unknown

    compact = {}
    for entry, bucket in rows.items():
        events = bucket["events"]
        unknown = bucket["unknown_events"]
        compact[entry] = {
            "events": str(events),
            "unknown_events": str(unknown),
            "unknown_pct": f"{unknown * 100.0 / events if events else 0.0:.1f}",
            "top_classes": ",".join(
                f"{key}:{value}"
                for key, value in sorted(bucket["classes"].items(), key=lambda item: (-item[1], item[0]))[:top]
            ),
            "top_unknown_sites": ",".join(
                f"{key}:{value}"
                for key, value in sorted(bucket["sites"].items(), key=lambda item: (-item[1], item[0]))[:top]
            ),
            "top_unknown_conditions": ",".join(
                f"{key}:{value}"
                for key, value in sorted(bucket["conditions"].items(), key=lambda item: (-item[1], item[0]))[:top]
            ),
        }
    return compact


def load_long_branches(path, top=5):
    rows = defaultdict(lambda: {
        "events": 0,
        "variants": 0,
        "irs": defaultdict(int),
        "operand_lens": defaultdict(int),
        "operand_shapes": defaultdict(int),
    })
    if not path:
        return {}
    for row in read_tsv(path):
        entry = row.get("source_entry", "")
        if not entry:
            continue
        bucket = rows[entry]
        events = int(row.get("events", "0") or 0)
        bucket["events"] += events
        bucket["variants"] += 1
        ir = row.get("lifted_ir", "")
        if ir:
            bucket["irs"][ir] += events
        operand_min_len = row.get("operand_min_len", "")
        if operand_min_len:
            bucket["operand_lens"][operand_min_len] += events
        operand_shape = row.get("operand_shape", "")
        if operand_shape:
            bucket["operand_shapes"][operand_shape] += events

    compact = {}
    for entry, bucket in rows.items():
        compact[entry] = {
            "events": str(bucket["events"]),
            "variants": str(bucket["variants"]),
            "top_ir": ";".join(
                f"{value}={key}"
                for key, value in sorted(bucket["irs"].items(), key=lambda item: (-item[1], item[0]))[:top]
            ),
            "operand_lens": ";".join(
                f"{value}={key}"
                for key, value in sorted(bucket["operand_lens"].items(), key=lambda item: (-item[1], item[0]))[:top]
            ),
            "operand_shapes": ";".join(
                f"{value}={key}"
                for key, value in sorted(bucket["operand_shapes"].items(), key=lambda item: (-item[1], item[0]))[:top]
            ),
        }
    return compact


def load_sampled_operands(path, top=5):
    rows = defaultdict(lambda: {
        "events": 0,
        "variants": 0,
        "irs": defaultdict(int),
        "operand_lens": defaultdict(int),
        "operand_shapes": defaultdict(int),
    })
    if not path:
        return {}
    for row in read_tsv(path):
        entry = row.get("source_entry", "")
        if not entry:
            continue
        bucket = rows[entry]
        events = int(row.get("events", "0") or 0)
        bucket["events"] += events
        bucket["variants"] += 1
        ir = row.get("lifted_ir", "")
        if ir:
            bucket["irs"][ir] += events
        operand_min_len = row.get("operand_min_len", "")
        if operand_min_len:
            bucket["operand_lens"][operand_min_len] += events
        operand_shape = row.get("operand_shape", "")
        if operand_shape:
            bucket["operand_shapes"][operand_shape] += events

    compact = {}
    for entry, bucket in rows.items():
        compact[entry] = {
            "events": str(bucket["events"]),
            "variants": str(bucket["variants"]),
            "top_ir": ";".join(
                f"{value}={key}"
                for key, value in sorted(bucket["irs"].items(), key=lambda item: (-item[1], item[0]))[:top]
            ),
            "operand_lens": ";".join(
                f"{value}={key}"
                for key, value in sorted(bucket["operand_lens"].items(), key=lambda item: (-item[1], item[0]))[:top]
            ),
            "operand_shapes": ";".join(
                f"{value}={key}"
                for key, value in sorted(bucket["operand_shapes"].items(), key=lambda item: (-item[1], item[0]))[:top]
            ),
        }
    return compact


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
        default="dumps/vmtail-state-wide-w16/vm_state_static_validate_fast.tsv",
    )
    parser.add_argument(
        "--state-affine",
        default="dumps/vmtail-state-wide-w16/vm_state_affine_fullfields.tsv",
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
        "--dispatch-affine-cv",
        default="dumps/vmtail-state-wide-w16/vm_dispatch_affine_cv.tsv",
    )
    parser.add_argument(
        "--transfer-expr",
        default="dumps/vmtail-state-wide-w16/vm_static_transfer_expr.tsv",
    )
    parser.add_argument(
        "--path-profile",
        default="dumps/vmtail-state-wide-w16/vm_static_path_profile.tsv",
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
        "--branch-predicates",
        default="dumps/vmtail-state-wide-w16/vm_branch_predicates.tsv",
    )
    parser.add_argument(
        "--branch-predicates-gpr",
        default="dumps/vmtail-state-wide-w16/vm_branch_predicates_gpr_seeded.tsv",
    )
    parser.add_argument(
        "--long-branches",
        default="dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv",
    )
    parser.add_argument(
        "--sampled-operands",
        default="dumps/vmtail-wide-1m-w16/vm_sampled_operand_catalog.tsv",
    )
    parser.add_argument("--branch-top", type=int, default=5)
    args = parser.parse_args()

    skeletons = load_by(args.skeletons, "entry")
    slices = load_by(args.state_slice, "entry")
    state_static = load_by(args.state_static_validate, "source_entry")
    state_affine = load_by(args.state_affine, "source_entry")
    static_dispatch = load_by(args.static_dispatch_validate, "source_entry")
    dispatch_model = load_by(args.dispatch_model, "source_entry")
    dispatch_affine_cv = load_by(args.dispatch_affine_cv, "source_entry")
    transfer_expr = load_by(args.transfer_expr, "source_entry")
    path_profile = load_by(args.path_profile, "source_entry")
    tail_roles = load_tail_rows(args.tail_roles)
    static_slots = load_tail_rows(args.static_slots)
    branch_predicates = load_branch_predicates(args.branch_predicates, args.branch_top)
    branch_predicates_gpr = load_branch_predicates(args.branch_predicates_gpr, args.branch_top)
    long_branches = load_long_branches(args.long_branches, args.branch_top)
    sampled_operands = load_sampled_operands(args.sampled_operands, args.branch_top)

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
        "transfer_expr_events",
        "transfer_expr_target_pct",
        "transfer_expr_ip_pct",
        "transfer_expr_unique_slot_exprs",
        "transfer_expr_unique_ip_exprs",
        "transfer_expr_top_slot_exprs",
        "transfer_expr_top_ip_exprs",
        "path_profile_events",
        "path_profile_unique_paths",
        "path_profile_branch_sites",
        "path_profile_top_paths",
        "branch_predicate_events",
        "branch_predicate_unknown_events",
        "branch_predicate_unknown_pct",
        "branch_predicate_top_classes",
        "branch_predicate_top_unknown_sites",
        "branch_predicate_top_unknown_conditions",
        "branch_gpr_predicate_events",
        "branch_gpr_predicate_unknown_events",
        "branch_gpr_predicate_unknown_pct",
        "branch_gpr_predicate_top_classes",
        "branch_gpr_predicate_top_unknown_sites",
        "branch_gpr_predicate_top_unknown_conditions",
        "long_branch_events",
        "long_branch_variants",
        "long_branch_operand_lens",
        "long_branch_operand_shapes",
        "long_branch_top_ir",
        "sampled_operand_events",
        "sampled_operand_variants",
        "sampled_operand_lens",
        "sampled_operand_shapes",
        "sampled_operand_top_ir",
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
        transfer_expr,
        path_profile,
        branch_predicates,
        branch_predicates_gpr,
        long_branches,
        sampled_operands,
    ):
        skeleton = skeletons.get(entry, {})
        state_slice = slices.get(entry, {})
        state_static_row = state_static.get(entry, {})
        state_affine_row = state_affine.get(entry, {})
        static_dispatch_row = static_dispatch.get(entry, {})
        dispatch_model_row = dispatch_model.get(entry, {})
        dispatch_affine_row = dispatch_affine_cv.get(entry, {})
        transfer_expr_row = transfer_expr.get(entry, {})
        path_profile_row = path_profile.get(entry, {})
        branch_predicate_row = branch_predicates.get(entry, {})
        branch_gpr_row = branch_predicates_gpr.get(entry, {})
        long_branch_row = long_branches.get(entry, {})
        sampled_operand_row = sampled_operands.get(entry, {})

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
                "transfer_expr_events": transfer_expr_row.get("events", ""),
                "transfer_expr_target_pct": transfer_expr_row.get("target_coverage_pct", ""),
                "transfer_expr_ip_pct": transfer_expr_row.get("ip_coverage_pct", ""),
                "transfer_expr_unique_slot_exprs": transfer_expr_row.get("unique_slot_exprs", ""),
                "transfer_expr_unique_ip_exprs": transfer_expr_row.get("unique_ip_exprs", ""),
                "transfer_expr_top_slot_exprs": transfer_expr_row.get("top_slot_exprs", ""),
                "transfer_expr_top_ip_exprs": transfer_expr_row.get("top_ip_exprs", ""),
                "path_profile_events": path_profile_row.get("events", ""),
                "path_profile_unique_paths": path_profile_row.get("unique_paths", ""),
                "path_profile_branch_sites": path_profile_row.get("branch_sites", ""),
                "path_profile_top_paths": path_profile_row.get("top_paths", ""),
                "branch_predicate_events": branch_predicate_row.get("events", ""),
                "branch_predicate_unknown_events": branch_predicate_row.get("unknown_events", ""),
                "branch_predicate_unknown_pct": branch_predicate_row.get("unknown_pct", ""),
                "branch_predicate_top_classes": branch_predicate_row.get("top_classes", ""),
                "branch_predicate_top_unknown_sites": branch_predicate_row.get("top_unknown_sites", ""),
                "branch_predicate_top_unknown_conditions": branch_predicate_row.get("top_unknown_conditions", ""),
                "branch_gpr_predicate_events": branch_gpr_row.get("events", ""),
                "branch_gpr_predicate_unknown_events": branch_gpr_row.get("unknown_events", ""),
                "branch_gpr_predicate_unknown_pct": branch_gpr_row.get("unknown_pct", ""),
                "branch_gpr_predicate_top_classes": branch_gpr_row.get("top_classes", ""),
                "branch_gpr_predicate_top_unknown_sites": branch_gpr_row.get("top_unknown_sites", ""),
                "branch_gpr_predicate_top_unknown_conditions": branch_gpr_row.get("top_unknown_conditions", ""),
                "long_branch_events": long_branch_row.get("events", ""),
                "long_branch_variants": long_branch_row.get("variants", ""),
                "long_branch_operand_lens": long_branch_row.get("operand_lens", ""),
                "long_branch_operand_shapes": long_branch_row.get("operand_shapes", ""),
                "long_branch_top_ir": long_branch_row.get("top_ir", ""),
                "sampled_operand_events": sampled_operand_row.get("events", ""),
                "sampled_operand_variants": sampled_operand_row.get("variants", ""),
                "sampled_operand_lens": sampled_operand_row.get("operand_lens", ""),
                "sampled_operand_shapes": sampled_operand_row.get("operand_shapes", ""),
                "sampled_operand_top_ir": sampled_operand_row.get("top_ir", ""),
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
