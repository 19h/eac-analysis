#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path


U8_RE = re.compile(r"\bb([0-9]+)\b")
U16_RE = re.compile(r"\bu16_([0-9]+)\b")
U32_RE = re.compile(r"\bu32_([0-9]+)\b")
HEX_RE = re.compile(r"(?<![A-Za-z0-9_])0x[0-9a-fA-F]+(?![A-Za-z0-9_])")
COUNTED_HEX_RE = re.compile(r"^0x([0-9a-fA-F]+):([0-9]+)$")
TARGET_OFFSET_RE = re.compile(r"^[0-9]+@\+0x([0-9a-fA-F]+):([0-9]+)$")


def read_tsv(path):
    with Path(path).open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def parse_hex(text):
    if not text:
        return 0
    return int(text, 16)


def parse_delta(text):
    if not text:
        return 0
    if text.startswith("+0x"):
        return int(text[1:], 16)
    if text.startswith("-0x"):
        return -int(text[3:], 16)
    return int(text, 0)


def c_block_name(block):
    return f"bb_{int(block):04d}"


def c_comment(text):
    return (text or "").replace("/*", "/ *").replace("*/", "* /")


def clip(text, limit):
    text = " ".join((text or "").replace("\t", " ").replace("\n", " ").split())
    if limit and len(text) > limit:
        return text[:limit - 3] + "..."
    return text


def expr_to_c(expr, max_len):
    expr = clip(expr, max_len)
    expr = expr.replace("state0", "vm->state")
    expr = expr.replace("flags0", "vm->flags")
    expr = expr.replace("byte0", "vm->byte")
    expr = U32_RE.sub(lambda match: f"U32(vm->ip + 0x{int(match.group(1)):x})", expr)
    expr = U16_RE.sub(lambda match: f"U16(vm->ip + 0x{int(match.group(1)):x})", expr)
    expr = U8_RE.sub(lambda match: f"U8(vm->ip + 0x{int(match.group(1)):x})", expr)
    expr = expr.replace("table[", "dispatch_table[")
    expr = HEX_RE.sub(lambda match: f"{match.group(0)}u", expr)
    return expr


def is_clipped_expr(expr):
    return "..." in (expr or "")


def fmt_ip_update(delta):
    if delta == 0:
        return ""
    if delta > 0:
        return f"vm->ip += 0x{delta:x};"
    return f"vm->ip -= 0x{-delta:x};"


def is_decoded_long_control(row):
    return (
        (row.get("row_kind") or "").startswith("long_branch_")
        and "target_u32@+0" in (row.get("operand_shape") or "")
        and "delta_u32@+4" in (row.get("operand_shape") or "")
    )


def normalize_vm_ip(text):
    try:
        return f"0x{parse_hex(text):x}"
    except (TypeError, ValueError):
        return text or ""


def fmt_counter(counter, limit):
    return ",".join(f"{key}:{value}" for key, value in counter.most_common(limit))


def top_key(counter):
    return counter.most_common(1)[0][0] if counter else ""


def top_int(counter):
    key = top_key(counter)
    try:
        return int(key, 0)
    except (TypeError, ValueError):
        return None


def short_bytes(counter, limit, max_hex):
    parts = []
    for value, count in counter.most_common(limit):
        suffix = "..." if len(value) > max_hex else ""
        parts.append(f"{count}:{value[:max_hex]}{suffix}")
    return ",".join(parts)


def single_counted_hex(text):
    if not text or "," in text:
        return None, 0
    match = COUNTED_HEX_RE.match(text)
    if not match:
        return None, 0
    return int(match.group(1), 16), int(match.group(2))


def single_target_offset(text):
    if not text or "," in text:
        return None, 0
    match = TARGET_OFFSET_RE.match(text)
    if not match:
        return None, 0
    return int(match.group(1), 16), int(match.group(2))


def fmt_u16_load(offset):
    if offset < 0:
        return f"(int)U16(vm->ip - 0x{-offset:x})"
    if offset == 0:
        return "(int)U16(vm->ip)"
    return f"(int)U16(vm->ip + 0x{offset:x})"


def tail_target_load(tail_lift, after_prefix=False):
    if not tail_lift:
        return ""
    try:
        events = int(tail_lift.get("events", "0") or 0)
        encoded_events = int(tail_lift.get("target_encoded_events", "0") or 0)
        span_encoded_events = int(tail_lift.get("span_target_encoded_events", "0") or 0)
    except ValueError:
        return ""
    if not events:
        return ""
    prefix_len, prefix_count = single_counted_hex(tail_lift.get("prefix_lens", ""))
    if prefix_len is None or prefix_count != events:
        return ""
    if encoded_events == events:
        target_off, target_count = single_target_offset(tail_lift.get("target_match_offsets", ""))
        if target_off is None or target_count != events:
            return ""
        offset = target_off if after_prefix else prefix_len + target_off
        return fmt_u16_load(offset)
    if span_encoded_events == events:
        target_off, target_count = single_target_offset(tail_lift.get("span_target_match_offsets", ""))
        if target_off is None or target_count != events:
            return ""
        offset = target_off - prefix_len if after_prefix else target_off
        return fmt_u16_load(offset)
    return ""


def synthetic_bucket():
    return {
        "events": 0,
        "sources": Counter(),
        "targets": Counter(),
        "deltas": Counter(),
        "statuses": Counter(),
        "sites": Counter(),
        "bytes": Counter(),
        "tail_lift": {},
    }


def load_synthetic_spans(path, tail_lift_path=None):
    spans = {}
    if not path:
        return spans
    try:
        rows = read_tsv(path)
    except FileNotFoundError:
        return spans
    for row in rows:
        status = row.get("byte_status", "")
        if not status or status == "exact":
            continue
        start = normalize_vm_ip(row.get("start_vm_ip", ""))
        if not start:
            continue
        bucket = spans.setdefault(start, synthetic_bucket())
        bucket["events"] += 1
        for field, name in (
            ("source_entry", "sources"),
            ("target_entry", "targets"),
            ("delta", "deltas"),
            ("byte_status", "statuses"),
            ("site", "sites"),
            ("bytes", "bytes"),
        ):
            value = row.get(field, "")
            if value:
                bucket[name][value] += 1
    if tail_lift_path and Path(tail_lift_path).exists():
        for row in read_tsv(tail_lift_path):
            start = normalize_vm_ip(row.get("start_vm_ip", ""))
            if not start:
                continue
            spans.setdefault(start, synthetic_bucket())["tail_lift"] = row
    return spans


def load_dynamic_stitches(path):
    stitches = defaultdict(list)
    if not path or not Path(path).exists():
        return stitches
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            stitches[start].append(row)
    for rows in stitches.values():
        rows.sort(key=lambda row: int(row.get("start_event_count", "0") or 0))
    return stitches


def load_transfer_probes(path):
    probes = defaultdict(list)
    if not path or not Path(path).exists():
        return probes
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            probes[start].append(row)
    for rows in probes.values():
        rows.sort(key=lambda row: normalize_vm_ip(row.get("missing_successor_vm_ip", "")))
    return probes


def load_symbolic_successors(path):
    successors = defaultdict(list)
    if not path or not Path(path).exists():
        return successors
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            successors[start].append(row)
    for rows in successors.values():
        rows.sort(key=lambda row: normalize_vm_ip(row.get("concrete_dest_vm_ip", "")))
    return successors


def load_hidden_chains(path):
    chains = defaultdict(list)
    if not path or not Path(path).exists():
        return chains
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            chains[start].append(row)

    def sort_key(row):
        status_rank = {
            "hidden_chain_matches_next_event": 0,
            "hidden_chain_target_only": 1,
            "hidden_chain_end_only": 2,
        }
        try:
            offset = parse_delta(row.get("hidden_source_delta_from_start", "0"))
        except ValueError:
            offset = 0
        return (
            status_rank.get(row.get("status", ""), 9),
            offset,
            int(row.get("hidden_source_entry", "0") or 0),
        )

    for rows in chains.values():
        rows.sort(key=sort_key)
    return chains


def load_residual_audits(path):
    audits = defaultdict(list)
    if not path or not Path(path).exists():
        return audits
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            audits[start].append(row)
    for rows in audits.values():
        rows.sort(key=lambda row: normalize_vm_ip(row.get("missing_successor_vm_ip", "")))
    return audits


def load_concrete_state_audits(path):
    audits = defaultdict(list)
    if not path or not Path(path).exists():
        return audits
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            audits[start].append(row)
    for rows in audits.values():
        rows.sort(key=lambda row: (row.get("classification", ""), normalize_vm_ip(row.get("missing_successor_vm_ip", ""))))
    return audits


def load_live_context_audits(path):
    audits = defaultdict(list)
    if not path or not Path(path).exists():
        return audits
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            audits[start].append(row)
    for rows in audits.values():
        rows.sort(key=lambda row: (row.get("live_resolution", ""), normalize_vm_ip(row.get("missing_successor_vm_ip", ""))))
    return audits


def load_table_read_diagnostics(path):
    diagnostics = defaultdict(list)
    if not path or not Path(path).exists():
        return diagnostics
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            diagnostics[start].append(row)
    for rows in diagnostics.values():
        rows.sort(key=lambda row: (row.get("diagnosis", ""), normalize_vm_ip(row.get("missing_successor_vm_ip", ""))))
    return diagnostics


def load_table_memory_probes(path):
    probes = defaultdict(list)
    if not path or not Path(path).exists():
        return probes
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            probes[start].append(row)
    for rows in probes.values():
        rows.sort(key=lambda row: (row.get("region", ""), row.get("table_offset", "")))
    return probes


def load_runtime_table_memory_probes(path):
    probes = defaultdict(list)
    if not path or not Path(path).exists():
        return probes
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            probes[start].append(row)
    for rows in probes.values():
        rows.sort(key=lambda row: (row.get("runtime_matches_file", ""), row.get("runtime_qword_class", ""), row.get("table_offset", "")))
    return probes


def load_live_table_evidences(path):
    evidences = defaultdict(list)
    if not path or not Path(path).exists():
        return evidences
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            evidences[start].append(row)
    for rows in evidences.values():
        rows.sort(key=lambda row: (
            0 if row.get("seed_quality", "") == "full_gpr_snapshot" else 1,
            row.get("evidence_class", ""),
            Path(row.get("run_dir", "")).name,
            row.get("live_table_offset", ""),
        ))
    return evidences


def load_source299_ret_patch_probes(path):
    probes = defaultdict(list)
    if not path or not Path(path).exists():
        return probes
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            probes[start].append(row)
    for rows in probes.values():
        rows.sort(key=lambda row: (
            0 if row.get("ret_patch_base_source", "").startswith("postcall_map_") else 1,
            0 if row.get("seed_quality", "") == "full_gpr_snapshot" else 1,
            row.get("ret_patch_relation", ""),
            Path(row.get("run_dir", "")).name,
            row.get("patched_ret_eac_off", ""),
        ))
    return probes


def load_sampled_control_correlations(path):
    correlations = defaultdict(list)
    if not path or not Path(path).exists():
        return correlations
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            correlations[start].append(row)
    for rows in correlations.values():
        rows.sort(key=lambda row: (row.get("sampled_correlation_class", ""), row.get("dynamic_next_source_entry", "")))
    return correlations


def load_focused_direct_trace_audits(path):
    audits = defaultdict(list)
    if not path or not Path(path).exists():
        return audits
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            audits[start].append(row)
    for rows in audits.values():
        rows.sort(key=lambda row: (row.get("focused_direct_class", ""), row.get("example_end_vm_ip", "")))
    return audits


def load_focused_sequence_audits(path):
    audits = defaultdict(list)
    if not path or not Path(path).exists():
        return audits
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            audits[start].append(row)
    for rows in audits.values():
        rows.sort(key=lambda row: (row.get("chain_terminal", ""), row.get("example_next_event_vm_ip", "")))
    return audits


def load_observed_chain_bridges(path):
    bridges = defaultdict(list)
    if not path or not Path(path).exists():
        return bridges
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            bridges[start].append(row)
    action_rank = {
        "hard_cfg": 0,
        "disabled_observed_chain_bridge": 1,
    }
    for rows in bridges.values():
        rows.sort(
            key=lambda row: (
                action_rank.get(row.get("bridge_action", ""), 9),
                row.get("observed_chain_bridge_class", ""),
                normalize_vm_ip(row.get("terminal_dest_vm_ip", "")),
            )
        )
    return bridges


def resolved_hidden_chain(target_vm_ip, hidden_chains):
    start = normalize_vm_ip(target_vm_ip)
    for row in hidden_chains.get(start, []):
        if row.get("status", "") == "hidden_chain_matches_next_event":
            return row
    return None


def load_live_in_roles(path):
    roles = defaultdict(list)
    if not path or not Path(path).exists():
        return roles
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            roles[start].append(row)
    for rows in roles.values():
        rows.sort(
            key=lambda row: (
                int(row.get("source_entry", "0") or 0),
                normalize_vm_ip(row.get("missing_successor_vm_ip", "")),
                row.get("resolution", ""),
            )
        )
    return roles


def load_live_in_reentries(path):
    reentries = defaultdict(list)
    if not path or not Path(path).exists():
        return reentries
    class_rank = {
        "exact_tail_dynamic_reentry_not_promoted": 0,
        "observed_site_mem_match_dynamic_reentry_not_promoted": 1,
        "source_tail_mechanism_dynamic_reentry_not_promoted": 2,
        "dynamic_reentry_live_deref_unproven": 3,
        "ambiguous_dynamic_reentry": 4,
    }
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            reentries[start].append(row)

    def sort_key(row):
        try:
            event = int((row.get("dynamic_event_span", "") or "0").split("->", 1)[0] or "0", 0)
        except ValueError:
            event = 0
        return (
            class_rank.get(row.get("reentry_class", ""), 9),
            event,
            normalize_vm_ip(row.get("next_end_vm_ip", "")),
        )

    for rows in reentries.values():
        rows.sort(key=sort_key)
    return reentries


def load_allstatic_reentries(path):
    reentries = defaultdict(list)
    if not path or not Path(path).exists():
        return reentries
    status_rank = {
        "allstatic_next_matches_dynamic_reentry": 0,
        "allstatic_next_matches_ambiguous_event": 1,
        "allstatic_next_target_end_match_site_mismatch": 2,
        "allstatic_next_mismatch": 3,
        "allstatic_seen_without_next_event": 4,
        "not_seen_in_allstatic": 5,
    }
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("synthetic_start_vm_ip", ""))
        if start:
            reentries[start].append(row)

    def sort_key(row):
        return (
            status_rank.get(row.get("allstatic_status", ""), 9),
            -int(row.get("allstatic_exact_match_events", "0") or 0),
            normalize_vm_ip(row.get("expected_next_end_vm_ip", "")),
        )

    for rows in reentries.values():
        rows.sort(key=sort_key)
    return reentries


def load_final_tail_site_probes(path):
    probes = defaultdict(list)
    if not path or not Path(path).exists():
        return probes
    for row in read_tsv(path):
        source = row.get("source_entry", "")
        if source:
            probes[source].append(row)
    for rows in probes.values():
        rows.sort(key=lambda row: (row.get("final_tail_site", ""), row.get("final_tail_target_reg", "")))
    return probes


def emit_transfer_probe_comments(target_vm_ip, transfer_probes, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = transfer_probes.get(start, [])
    if not rows:
        return
    limit = getattr(args, "transfer_probe_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    max_expr = getattr(args, "transfer_probe_max_expr", 180)
    print(
        f"    /* transfer probe evidence @ {start}: rows={len(rows)}; "
        "static zero-seeded path; symbolic target/IP expressions are preserved. */"
    )
    for row in shown:
        slot_ip = row.get("slot_expr", "") or "-"
        ip_expr = row.get("ip_expr", "")
        if ip_expr and ip_expr != "0x0":
            slot_ip = f"{slot_ip}; ip={ip_expr}"
        concrete = "-"
        if row.get("zero_seed_pred_entry", ""):
            concrete = f"entry={row.get('zero_seed_pred_entry', '?')},delta={row.get('zero_seed_pred_delta', '?')}"
        roles = row.get("static_slot_roles", "") or row.get("tail_roles", "") or "-"
        print(
            f"    /* transfer probe: missing_successor={normalize_vm_ip(row.get('missing_successor_vm_ip', ''))}, "
            f"class={c_comment(row.get('classification', '') or '-')}, "
            f"zero_seed={c_comment(row.get('zero_seed_status', '') or '-')}, "
            f"concrete={c_comment(concrete)}, "
            f"target={c_comment(clip(row.get('target_expr', '') or '-', max_expr))}, "
            f"slot_ip={c_comment(clip(slot_ip, max_expr))}, "
            f"roles={c_comment(clip(roles, max_expr))} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional transfer probe rows omitted ... */")


def emit_dynamic_stitch_comments(target_vm_ip, dynamic_stitches, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = dynamic_stitches.get(start, [])
    if not rows:
        return
    limit = getattr(args, "dynamic_stitch_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    max_candidates = getattr(args, "dynamic_stitch_max_candidates", 180)
    print(
        f"    /* dynamic stitch evidence @ {start}: rows={len(rows)}; "
        "sequence evidence only; next hooked source may skip unhooked handlers. */"
    )
    for row in shown:
        event_span = f"{row.get('start_event_count', '?')}->{row.get('next_event_count', '?')}"
        resolution = row.get("resolution", "")
        if resolution == "dynamic_stitch_to_next_hooked_source":
            print(
                f"    /* dynamic stitch: event={event_span}, "
                f"missing_successor={normalize_vm_ip(row.get('missing_successor_vm_ip', ''))}, "
                f"next_hooked_source=entry_{row.get('inferred_next_source_entry', '?')} "
                f"@ {normalize_vm_ip(row.get('inferred_next_source_start_vm_ip', ''))}, "
                f"hidden_delta={row.get('inferred_hidden_delta', '?')}, "
                f"next_site={row.get('next_site', '?')}, "
                f"bytes={c_comment(row.get('inferred_next_source_bytes', '') or '-')}, "
                f"evidence={c_comment(row.get('inference_evidence', '') or '-')} */"
            )
        else:
            print(
                f"    /* dynamic stitch: event={event_span}, "
                f"missing_successor={normalize_vm_ip(row.get('missing_successor_vm_ip', ''))}, "
                f"resolution={c_comment(resolution or '-')}, "
                f"next_site={row.get('next_site', '?')}, "
                f"next_end={normalize_vm_ip(row.get('next_end_vm_ip', ''))}, "
                f"candidates={c_comment(clip(row.get('candidate_entries', '') or '-', max_candidates))} */"
            )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional dynamic stitch rows omitted ... */")


def emit_symbolic_successor_comments(target_vm_ip, symbolic_successors, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = symbolic_successors.get(start, [])
    if not rows:
        return
    limit = getattr(args, "symbolic_successor_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    max_expr = getattr(args, "symbolic_successor_max_expr", 180)
    print(
        f"    /* symbolic successor audit @ {start}: rows={len(rows)}; "
        "zero-seeded static candidate only; dynamic mismatch keeps this unresolved. */"
    )
    for row in shown:
        dest_row = row.get("dest_row_kind", "") or "-"
        if row.get("dest_source_entry", ""):
            dest_row = f"{dest_row}/entry_{row.get('dest_source_entry')}"
        dest_block = "-"
        if row.get("dest_block", ""):
            dest_block = f"{row.get('dest_block')}@{normalize_vm_ip(row.get('dest_block_start_vm_ip', ''))}"
        dynamic = row.get("dynamic_resolution", "") or "-"
        if row.get("dynamic_next_end_vm_ip", ""):
            dynamic = f"{dynamic}@{normalize_vm_ip(row.get('dynamic_next_end_vm_ip', ''))}"
        print(
            f"    /* symbolic successor: source={row.get('source_entry', '?')}, "
            f"missing_successor={normalize_vm_ip(row.get('missing_successor_vm_ip', ''))}, "
            f"pred_entry={row.get('zero_seed_pred_entry', '-')}, "
            f"pred_delta={row.get('zero_seed_pred_delta', '-')}, "
            f"dest={normalize_vm_ip(row.get('concrete_dest_vm_ip', ''))}, "
            f"dest_row={c_comment(dest_row)}, "
            f"dest_block={c_comment(dest_block)}, "
            f"slot={c_comment(clip(row.get('transfer_slot_expr', '') or '-', max_expr))}, "
            f"ip={c_comment(clip(row.get('transfer_ip_expr', '') or '-', max_expr))}, "
            f"dynamic={c_comment(dynamic)}, "
            f"status={c_comment(row.get('status', '') or '-')} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional symbolic successor rows omitted ... */")


def emit_hidden_chain_comments(target_vm_ip, hidden_chains, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = hidden_chains.get(start, [])
    if not rows:
        return
    limit = getattr(args, "hidden_chain_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    max_expr = getattr(args, "hidden_chain_max_expr", 180)
    print(
        f"    /* hidden chain probe @ {start}: rows={len(rows)}; "
        "candidate next-source handlers replayed at short offsets or dynamic-stitch inferred next-hook starts. */"
    )
    for row in shown:
        print(
            f"    /* hidden chain: source={row.get('source_entry', '?')}, "
            f"hidden_entry={row.get('hidden_source_entry', '-')}"
            f"@{normalize_vm_ip(row.get('hidden_source_start_vm_ip', ''))}, "
            f"offset={row.get('hidden_source_delta_from_start', '-')}, "
            f"pred_entry={row.get('hidden_pred_entry', '-')}, "
            f"pred_delta={row.get('hidden_pred_delta', '-')}, "
            f"pred_end={normalize_vm_ip(row.get('hidden_pred_end_vm_ip', ''))}, "
            f"dynamic={normalize_vm_ip(row.get('dynamic_next_end_vm_ip', ''))}"
            f"/entry_{row.get('dynamic_next_tail_target_entry', '-')}, "
            f"slot={c_comment(clip(row.get('hidden_slot_expr', '') or '-', max_expr))}, "
            f"ip={c_comment(clip(row.get('hidden_ip_expr', '') or '-', max_expr))}, "
            f"status={c_comment(row.get('status', '') or '-')} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional hidden chain rows omitted ... */")


def emit_residual_audit_comments(target_vm_ip, residual_audits, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = residual_audits.get(start, [])
    if not rows:
        return
    limit = getattr(args, "residual_audit_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    max_expr = getattr(args, "residual_audit_max_expr", 180)
    print(
        f"    /* residual audit @ {start}: rows={len(rows)}; "
        "still emitted as unresolved tail because promotion evidence is not hard CFG. */"
    )
    for row in shown:
        next_hook = "-"
        if row.get("dynamic_next_source_entry", ""):
            next_hook = (
                f"entry_{row.get('dynamic_next_source_entry')}@"
                f"{normalize_vm_ip(row.get('dynamic_next_source_start_vm_ip', ''))}"
                f"->{normalize_vm_ip(row.get('dynamic_next_end_vm_ip', ''))}"
            )
        print(
            f"    /* residual audit: source={row.get('source_entry', '?')}, "
            f"missing_successor={normalize_vm_ip(row.get('missing_successor_vm_ip', ''))}, "
            f"reason={c_comment(row.get('residual_reason', '') or '-')}, "
            f"promotion={c_comment(row.get('promotion_state', '') or '-')}, "
            f"transfer={c_comment(row.get('transfer_classification', '') or '-')}"
            f"/{c_comment(row.get('transfer_zero_seed_status', '') or '-')}, "
            f"next_hook={c_comment(next_hook)}, "
            f"next_block={c_comment(row.get('dynamic_next_end_block', '') or '-')}, "
            f"chain={c_comment(row.get('chain_statuses', '') or '-')}, "
            f"span={c_comment(row.get('span_semantic_gap_class', '') or '-')}"
            f"/{c_comment(row.get('span_source_observation', '') or '-')}, "
            f"sampled={c_comment(clip(row.get('sampled_variants_for_source', '') or '-', max_expr))} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional residual audit rows omitted ... */")


def emit_concrete_state_audit_comments(target_vm_ip, concrete_state_audits, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = concrete_state_audits.get(start, [])
    if not rows:
        return
    limit = getattr(args, "concrete_state_audit_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    max_expr = getattr(args, "concrete_state_audit_max_expr", 180)
    print(
        f"    /* concrete-state audit @ {start}: rows={len(rows)}; "
        "residual handler replay seeded from state-aware predecessor post-state where available. */"
    )
    for row in shown:
        print(
            f"    /* concrete-state audit: source={row.get('source_entry', '?')}, "
            f"state_rows={row.get('state_trace_rows', '0')}, "
            f"variants={row.get('state_variants', '0')}, "
            f"class={c_comment(row.get('classification', '') or '-')}, "
            f"status={c_comment(row.get('concrete_status_mix', '') or '-')}, "
            f"reason={c_comment(row.get('unknown_reason_mix', '') or '-')}, "
            f"pred_entries={c_comment(row.get('concrete_pred_entries', '') or '-')}, "
            f"pred_ends={c_comment(row.get('concrete_pred_ends', '') or '-')}, "
            f"example_state={c_comment(row.get('state_example_pre_state', '') or '-')}"
            f"/{c_comment(row.get('state_example_pre_flags', '') or '-')}, "
            f"path={c_comment(clip(row.get('example_path', '') or '-', max_expr))} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional concrete-state audit rows omitted ... */")


def emit_live_context_audit_comments(target_vm_ip, live_context_audits, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = live_context_audits.get(start, [])
    if not rows:
        return
    limit = getattr(args, "live_context_audit_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    max_expr = getattr(args, "live_context_audit_max_expr", 180)
    print(
        f"    /* live-context audit @ {start}: rows={len(rows)}; "
        "residual replay seeded with state plus entry GPR/frame-scratch snapshots. */"
    )
    for row in shown:
        print(
            f"    /* live-context audit: source={row.get('source_entry', '?')}, "
            f"state_rows={row.get('state_trace_rows', '0')}, "
            f"seeds={row.get('live_seed_rows', '0')}, "
            f"resolution={c_comment(row.get('live_resolution', '') or '-')}, "
            f"status={c_comment(row.get('live_status_mix', '') or '-')}, "
            f"reason={c_comment(row.get('live_unknown_reason_mix', '') or '-')}, "
            f"pred_entries={c_comment(row.get('live_pred_entries', '') or '-')}, "
            f"pred_ends={c_comment(row.get('live_pred_ends', '') or '-')}, "
            f"seed_site={c_comment(row.get('live_example_seed_site', '') or '-')}, "
            f"seed_target={c_comment(row.get('live_example_seed_target_off', '') or '-')}, "
            f"path={c_comment(clip(row.get('live_example_path', '') or '-', max_expr))} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional live-context audit rows omitted ... */")


def emit_table_read_diagnostic_comments(target_vm_ip, table_read_diagnostics, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = table_read_diagnostics.get(start, [])
    if not rows:
        return
    limit = getattr(args, "table_read_diagnostic_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    max_expr = getattr(args, "table_read_diagnostic_max_expr", 180)
    print(
        f"    /* table-read diagnostic @ {start}: rows={len(rows)}; "
        "final dispatch-table access reached by live-context residual replay. */"
    )
    for row in shown:
        print(
            f"    /* table-read diagnostic: source={row.get('source_entry', '?')}, "
            f"state_rows={row.get('state_trace_rows', '0')}, "
            f"seeds={row.get('live_seed_rows', '0')}, "
            f"variants={row.get('variants_replayed', '0')}, "
            f"diagnosis={c_comment(row.get('diagnosis', '') or '-')}, "
            f"table_status={c_comment(row.get('table_access_status_mix', '') or '-')}, "
            f"size={c_comment(row.get('table_access_size_mix', '') or '-')}, "
            f"offset={c_comment(row.get('table_access_offset_mix', '') or '-')}, "
            f"entry={c_comment(row.get('table_access_entry_mix', '') or '-')}, "
            f"site={c_comment(row.get('table_access_site_mix', '') or '-')}, "
            f"operand={c_comment(row.get('example_table_operand', '') or '-')}, "
            f"value_entry={c_comment(row.get('example_table_value_entry', '') or '-')}, "
            f"pred_end={c_comment(row.get('example_pred_end_vm_ip', '') or '-')}, "
            f"path={c_comment(clip(row.get('example_path', '') or '-', max_expr))} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional table-read diagnostic rows omitted ... */")


def emit_table_memory_probe_comments(target_vm_ip, table_memory_probes, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = table_memory_probes.get(start, [])
    if not rows:
        return
    limit = getattr(args, "table_memory_probe_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    print(
        f"    /* table-memory probe @ {start}: rows={len(rows)}; "
        "dispatch-table-base plus residual offset mapped back to eac.elf bytes. */"
    )
    for row in shown:
        print(
            f"    /* table-memory probe: source={row.get('source_entry', '?')}, "
            f"offset={c_comment(row.get('table_offset', '') or '-')}, "
            f"count={row.get('table_offset_count', '0')}, "
            f"file_off={c_comment(row.get('absolute_file_off', '') or '-')}, "
            f"section={c_comment(row.get('section', '') or '-')}, "
            f"region={c_comment(row.get('region', '') or '-')}, "
            f"align={c_comment(row.get('alignment', '') or '-')}, "
            f"nearest_entry={c_comment(row.get('nearest_dispatch_entry', '') or '-')}"
            f"+{c_comment(row.get('nearest_dispatch_entry_delta', '') or '-')}, "
            f"qword={c_comment(row.get('file_qword_le', '') or '-')}, "
            f"qword_class={c_comment(row.get('file_qword_class', '') or '-')}, "
            f"dynamic_next=entry_{row.get('dynamic_next_source_entry', '-')}"
            f"@{normalize_vm_ip(row.get('dynamic_next_source_start_vm_ip', ''))} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional table-memory probe rows omitted ... */")


def emit_runtime_table_memory_probe_comments(target_vm_ip, runtime_table_memory_probes, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = runtime_table_memory_probes.get(start, [])
    if not rows:
        return
    limit = getattr(args, "runtime_table_memory_probe_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    print(
        f"    /* runtime table-memory probe @ {start}: rows={len(rows)}; "
        "postcall mapped EAC bytes compared against eac.elf at the residual table offset. */"
    )
    for row in shown:
        runtime_target = row.get("runtime_qword_eac_off", "") or "-"
        if row.get("runtime_qword_dispatch_entry", ""):
            runtime_target = f"entry_{row.get('runtime_qword_dispatch_entry')}@{runtime_target}"
        print(
            f"    /* runtime table-memory probe: source={row.get('source_entry', '?')}, "
            f"offset={c_comment(row.get('table_offset', '') or '-')}, "
            f"count={row.get('table_offset_count', '0')}, "
            f"match_file={c_comment(row.get('runtime_matches_file', '') or '-')}, "
            f"file_off={c_comment(row.get('absolute_file_off', '') or '-')}, "
            f"runtime_va={c_comment(row.get('runtime_va', '') or '-')}, "
            f"region={c_comment(row.get('region', '') or '-')}, "
            f"file_qword={c_comment(row.get('file_qword_le', '') or '-')}, "
            f"runtime_qword={c_comment(row.get('runtime_qword_le', '') or '-')}, "
            f"runtime_class={c_comment(row.get('runtime_qword_class', '') or '-')}, "
            f"runtime_target={c_comment(runtime_target)}, "
            f"dynamic_next=entry_{row.get('dynamic_next_source_entry', '-')}"
            f"@{normalize_vm_ip(row.get('dynamic_next_source_start_vm_ip', ''))} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional runtime table-memory probe rows omitted ... */")


def emit_live_table_evidence_comments(target_vm_ip, live_table_evidences, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = live_table_evidences.get(start, [])
    if not rows:
        return
    limit = getattr(args, "live_table_evidence_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    print(
        f"    /* live table evidence @ {start}: rows={len(rows)}; "
        "per-live-row table offsets mapped to file/runtime bytes, preserving seed quality. */"
    )
    for row in shown:
        run_name = Path(row.get("run_dir", "")).name if row.get("run_dir", "") else "-"
        next_event = "-"
        if row.get("next_event_vm_ip", ""):
            next_event = (
                f"entry_{row.get('next_event_target_entry', '-')}"
                f"@{normalize_vm_ip(row.get('next_event_vm_ip', ''))}"
            )
        observed_first_hop = normalize_vm_ip(row.get("observed_first_hop_vm_ip", "")) or "-"
        terminal_dest = normalize_vm_ip(row.get("terminal_dest_vm_ip", "")) or "-"
        runtime_target = row.get("runtime_qword_eac_off", "") or "-"
        if row.get("runtime_qword_dispatch_entry", ""):
            runtime_target = f"entry_{row.get('runtime_qword_dispatch_entry')}@{runtime_target}"
        file_target = row.get("file_qword_le", "") or "-"
        if row.get("file_qword_dispatch_entry", ""):
            file_target = f"entry_{row.get('file_qword_dispatch_entry')}@{file_target}"
        print(
            f"    /* live table evidence: source={row.get('source_entry', '?')}, "
            f"run={c_comment(run_name)}, "
            f"seed={c_comment(row.get('seed_quality', '') or '-')}, "
            f"status={c_comment(row.get('live_table_status', '') or '-')}, "
            f"diagnosis={c_comment(row.get('live_table_diagnosis', '') or '-')}, "
            f"offset={c_comment(row.get('live_table_offset', '') or '-')}, "
            f"entry={c_comment(row.get('live_table_entry', '') or '-')}, "
            f"site={c_comment(row.get('live_table_site', '') or '-')}, "
            f"operand={c_comment(row.get('live_table_operand', '') or '-')}, "
            f"evidence={c_comment(row.get('evidence_class', '') or '-')}, "
            f"region={c_comment(row.get('region', '') or '-')}, "
            f"file_target={c_comment(file_target)}, "
            f"file_class={c_comment(row.get('file_qword_class', '') or '-')}, "
            f"runtime_qword={c_comment(row.get('runtime_qword_le', '') or '-')}, "
            f"runtime_class={c_comment(row.get('runtime_qword_class', '') or '-')}, "
            f"match_file={c_comment(row.get('runtime_matches_file', '') or '-')}, "
            f"runtime_target={c_comment(runtime_target)}, "
            f"next={c_comment(next_event)}, "
            f"first_hop={c_comment(observed_first_hop)}, "
            f"terminal={c_comment(terminal_dest)}, "
            f"branch={c_comment(row.get('branch_resolution', '') or '-')} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional live table evidence rows omitted ... */")


def emit_source299_ret_patch_comments(target_vm_ip, source299_ret_patch_probes, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = source299_ret_patch_probes.get(start, [])
    if not rows:
        return
    limit = getattr(args, "source299_ret_patch_probe_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    print(
        f"    /* source299 ret-patch probe @ {start}: rows={len(rows)}; "
        "entry_299 writes frame[0xbb]+u32_0 to *(uint64_t *)(rsp+u16_4) and returns, "
        "so this hidden control path is native return-patching rather than a dispatch-table slot. */"
    )
    for row in shown:
        run_name = Path(row.get("run_dir", "")).name if row.get("run_dir", "") else "-"
        next_event = "-"
        if row.get("next_event_vm_ip", ""):
            next_event = (
                f"entry_{row.get('next_event_target_entry', '-')}"
                f"@{normalize_vm_ip(row.get('next_event_vm_ip', ''))}"
            )
        dynamic_next = "-"
        if row.get("dynamic_next_source_entry", ""):
            dynamic_next = (
                f"entry_{row.get('dynamic_next_source_entry')}"
                f"@{normalize_vm_ip(row.get('dynamic_next_source_start_vm_ip', ''))}"
                f"->{normalize_vm_ip(row.get('dynamic_next_end_vm_ip', ''))}"
            )
        print(
            f"    /* source299 ret-patch: run={c_comment(run_name)}, "
            f"seed={c_comment(row.get('seed_quality', '') or '-')}, "
            f"operand_u32={c_comment(row.get('family_operand_u32_0', '') or '-')}, "
            f"stack_off={c_comment(row.get('stack_write_offset', '') or '-')}, "
            f"stack_addr={c_comment(row.get('stack_write_addr', '') or '-')}, "
            f"base={c_comment(row.get('ret_patch_base', '') or '-')}, "
            f"base_source={c_comment(row.get('ret_patch_base_source', '') or '-')}, "
            f"patched_ret={c_comment(row.get('patched_ret_eac_off', '') or '-')}, "
            f"section={c_comment(row.get('patched_ret_section', '') or '-')}, "
            f"bytes={c_comment(row.get('patched_ret_file_bytes16', '') or '-')}, "
            f"relation={c_comment(row.get('ret_patch_relation', '') or '-')}, "
            f"next={c_comment(next_event)}, "
            f"dynamic_next={c_comment(dynamic_next)} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional source299 ret-patch rows omitted ... */")


def emit_sampled_control_correlation_comments(target_vm_ip, sampled_control_correlations, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = sampled_control_correlations.get(start, [])
    if not rows:
        return
    limit = getattr(args, "sampled_control_correlation_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    max_expr = getattr(args, "sampled_control_correlation_max_expr", 180)
    print(
        f"    /* sampled-control correlation @ {start}: rows={len(rows)}; "
        "sampled-operand target/delta sidecars joined to the next hooked VMTAIL source. */"
    )
    for row in shown:
        print(
            f"    /* sampled-control correlation: source={row.get('source_entry', '?')}, "
            f"footprint={c_comment(row.get('footprint_len', '') or '-')}, "
            f"span={c_comment(row.get('span_semantic_gap_class', '') or '-')}"
            f"/{c_comment(row.get('span_source_observation', '') or '-')}, "
            f"sampled_targets={c_comment(row.get('sampled_target_entries', '') or '-')}, "
            f"sampled_deltas={c_comment(row.get('sampled_deltas', '') or '-')}, "
            f"byte_matches={c_comment(row.get('sampled_operand_byte_exact_matches', '') or '-')}, "
            f"dynamic_next=entry_{row.get('dynamic_next_source_entry', '-')}"
            f"@{normalize_vm_ip(row.get('dynamic_next_source_start_vm_ip', ''))}"
            f"/{c_comment(row.get('dynamic_next_delta', '') or '-')}, "
            f"target_match={c_comment(row.get('dynamic_next_matches_sampled_target', '') or '-')}, "
            f"delta_match={c_comment(row.get('dynamic_next_delta_matches_sampled_delta', '') or '-')}, "
            f"class={c_comment(row.get('sampled_correlation_class', '') or '-')}, "
            f"variants={c_comment(clip(row.get('sampled_variants_for_source', '') or '-', max_expr))} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional sampled-control correlation rows omitted ... */")


def emit_focused_direct_trace_audit_comments(target_vm_ip, focused_direct_trace_audits, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = focused_direct_trace_audits.get(start, [])
    if not rows:
        return
    limit = getattr(args, "focused_direct_trace_audit_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    max_expr = getattr(args, "focused_direct_trace_audit_max_expr", 180)
    print(
        f"    /* focused direct trace @ {start}: rows={len(rows)}; "
        "focused live/state traces checked for direct execution from this residual start. */"
    )
    for row in shown:
        transfer = "-"
        if row.get("example_end_vm_ip", ""):
            transfer = (
                f"{normalize_vm_ip(row.get('example_start_vm_ip', ''))}->"
                f"{normalize_vm_ip(row.get('example_end_vm_ip', ''))}"
                f"/{row.get('example_delta', '-')}"
            )
        target = "-"
        if row.get("example_target_entry", ""):
            target = f"entry_{row.get('example_target_entry')}@{row.get('example_target', '-')}"
        print(
            f"    /* focused direct trace: source={row.get('source_entry', '?')}, "
            f"trace_rows={row.get('focused_trace_rows', '0')}, "
            f"unique={row.get('focused_unique_transfers', '0')}, "
            f"transfer={c_comment(transfer)}, "
            f"target={c_comment(target)}, "
            f"dest_block={c_comment(row.get('example_dest_block', '') or '-')}, "
            f"dest_ir={c_comment(row.get('focused_dest_ir_starts', '') or '-')}, "
            f"bytes={c_comment(clip(row.get('example_bytes', '') or '-', max_expr))}, "
            f"byte_status={c_comment(row.get('example_byte_status', '') or '-')}, "
            f"candidate={c_comment(row.get('promotion_candidate', '') or '-')}, "
            f"class={c_comment(row.get('focused_direct_class', '') or '-')}, "
            f"blocker={c_comment(clip(row.get('promotion_blocker', '') or '-', max_expr))} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional focused direct trace rows omitted ... */")


def emit_focused_sequence_audit_comments(target_vm_ip, focused_sequence_audits, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = focused_sequence_audits.get(start, [])
    if not rows:
        return
    limit = getattr(args, "focused_sequence_audit_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    max_expr = getattr(args, "focused_sequence_audit_max_expr", 180)
    print(
        f"    /* focused sequence audit @ {start}: rows={len(rows)}; "
        "raw focused VMTAIL order, including indirect tail-site hops, comment-only. */"
    )
    for row in shown:
        raw_next = "-"
        if row.get("example_next_event_vm_ip", ""):
            target = row.get("example_next_event_target_entry", "") or "?"
            raw_next = (
                f"{row.get('example_next_event_kind', '-')}"
                f"@{normalize_vm_ip(row.get('example_next_event_vm_ip', ''))}"
                f"/{row.get('example_next_event_delta', '-')}"
                f"->entry_{target}"
            )
        following = row.get("example_following_residual_start", "") or "-"
        print(
            f"    /* focused sequence: source={row.get('source_entry', '?')}, "
            f"start_events={row.get('raw_start_event_rows', '0')}, "
            f"raw_rows={row.get('raw_sequence_rows', '0')}, "
            f"class={c_comment(row.get('raw_sequence_class_mix', '') or '-')}, "
            f"raw_next={c_comment(raw_next)}, "
            f"next_site={c_comment(row.get('example_next_event_site', '') or '-')}, "
            f"site_sources={c_comment(row.get('example_next_event_site_sources', '') or '-')}, "
            f"site_match={c_comment(row.get('example_next_site_matches_start_entry', '') or '-')}, "
            f"following_residual={c_comment(following)}, "
            f"terminal={c_comment(row.get('chain_terminal', '') or '-')}, "
            f"chain={c_comment(clip(row.get('chain_path', '') or '-', max_expr))}, "
            f"candidate={c_comment(row.get('sequence_promotion_candidate', '') or '-')}, "
            f"blocker={c_comment(clip(row.get('promotion_blocker', '') or '-', max_expr))} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional focused sequence rows omitted ... */")


def emit_observed_chain_bridge_comments(target_vm_ip, observed_chain_bridges, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = observed_chain_bridges.get(start, [])
    if not rows:
        return
    limit = getattr(args, "observed_chain_bridge_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    max_expr = getattr(args, "observed_chain_bridge_max_expr", 220)
    print(
        f"    /* observed-chain bridge audit @ {start}: rows={len(rows)}; "
        "focused residual chain evidence; chain rows are comment-only until indirect tail hops are statically replayed. */"
    )
    for row in shown:
        first_hop = "-"
        if row.get("first_hop_vm_ip", ""):
            target = row.get("first_hop_target_entry", "") or "?"
            first_hop = (
                f"{row.get('first_hop_kind', '-')}"
                f"@{normalize_vm_ip(row.get('first_hop_vm_ip', ''))}"
                f"/{row.get('first_hop_delta', '-')}"
                f"->entry_{target}"
            )
        terminal = "-"
        if row.get("terminal_dest_vm_ip", ""):
            terminal = (
                f"{row.get('terminal_dest_block', '-')}"
                f"@{normalize_vm_ip(row.get('terminal_dest_vm_ip', ''))}"
                f"/entry_{row.get('terminal_dest_entry', '-')}"
            )
        primary = "-"
        if row.get("primary_dynamic_next_end_vm_ip", ""):
            primary = (
                f"entry_{row.get('primary_dynamic_next_source_entry', '-')}"
                f"@{normalize_vm_ip(row.get('primary_dynamic_next_source_start_vm_ip', ''))}"
                f"->{normalize_vm_ip(row.get('primary_dynamic_next_end_vm_ip', ''))}"
                f"/{row.get('primary_dynamic_dest_block', '-')}"
            )
        following = row.get("following_residual_start", "") or "-"
        print(
            f"    /* observed-chain bridge: source={row.get('source_entry', '?')}, "
            f"missing_successor={normalize_vm_ip(row.get('missing_successor_vm_ip', ''))}, "
            f"first_hop={c_comment(first_hop)}, "
            f"following_residual={c_comment(following)}, "
            f"chain={c_comment(clip(row.get('chain_path', '') or '-', max_expr))}, "
            f"terminal={c_comment(terminal)}, "
            f"class={c_comment(row.get('observed_chain_bridge_class', '') or '-')}, "
            f"action={c_comment(row.get('bridge_action', '') or '-')}, "
            f"primary={c_comment(primary)}, "
            f"relation={c_comment(row.get('primary_vs_focused_first_hop', '') or '-')}, "
            f"blocker={c_comment(clip(row.get('promotion_blocker', '') or '-', max_expr))} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional observed-chain bridge rows omitted ... */")


def matching_final_tail_probe(row, final_tail_site_probes):
    source = row.get("source_entry", "")
    final_site = normalize_vm_ip(row.get("final_tail_site", ""))
    target_reg = row.get("final_tail_target_reg", "")
    for probe in final_tail_site_probes.get(source, []):
        if final_site and normalize_vm_ip(probe.get("final_tail_site", "")) != final_site:
            continue
        if target_reg and probe.get("final_tail_target_reg", "") != target_reg:
            continue
        return probe
    return None


def emit_live_in_role_comments(target_vm_ip, live_in_roles, final_tail_site_probes, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = live_in_roles.get(start, [])
    if not rows:
        return
    limit = getattr(args, "live_in_role_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    max_expr = getattr(args, "live_in_role_max_expr", 220)
    print(
        f"    /* live-in role evidence @ {start}: rows={len(rows)}; "
        "prioritized GPR/memory traces; final-tail site proof is mechanism evidence, not path-complete coverage. */"
    )
    for row in shown:
        tail_target = "-"
        if row.get("tail_event_target_entry", ""):
            tail_target = f"entry={row.get('tail_event_target_entry')},off={row.get('tail_event_target_off', '-')}"
        event_target = "-"
        if row.get("event_target_entry", ""):
            event_target = f"entry={row.get('event_target_entry')},off={row.get('event_target_off', '-')}"
        final_site = normalize_vm_ip(row.get("final_tail_site", ""))
        print(
            f"    /* live-in role: source={row.get('source_entry', '?')}, "
            f"missing_successor={normalize_vm_ip(row.get('missing_successor_vm_ip', ''))}, "
            f"target={c_comment(clip(row.get('target_expr', '') or '-', max_expr))}, "
            f"regs={c_comment(row.get('expr_regs', '') or '-')}, "
            f"deref={c_comment(row.get('deref_regs', '') or '-')}, "
            f"start_site={normalize_vm_ip(row.get('event_site', ''))}, "
            f"start_target={c_comment(event_target)}, "
            f"final_site={final_site}:{row.get('final_tail_target_reg', '-')}, "
            f"tail_site={normalize_vm_ip(row.get('tail_event_site', ''))}, "
            f"exact_tail={row.get('tail_event_site_match', '0') or '0'}, "
            f"tail_target={c_comment(tail_target)}, "
            f"mem={c_comment(clip(row.get('deref_reads', '') or '-', max_expr))}, "
            f"roles={c_comment(clip(row.get('reg_roles', '') or '-', max_expr))}, "
            f"classes={c_comment(row.get('role_classes', '') or '-')}, "
            f"resolution={c_comment(row.get('resolution', '') or '-')} */"
        )
        probe = matching_final_tail_probe(row, final_tail_site_probes)
        if probe:
            print(
                f"    /* final-tail site proof: source={probe.get('source_entry', '?')}, "
                f"site={normalize_vm_ip(probe.get('final_tail_site', ''))}:{probe.get('final_tail_target_reg', '-')}, "
                f"deref={c_comment(probe.get('deref_regs', '') or '-')}, "
                f"events={probe.get('events', '0')}, "
                f"target_reg_match={c_comment(probe.get('target_reg_equals_target', '') or '-')}, "
                f"deref_mem_match={c_comment(probe.get('deref_mem_matches_target', '') or '-')}, "
                f"top_targets={c_comment(clip(probe.get('top_target_entries', '') or '-', max_expr))} */"
            )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional live-in role rows omitted ... */")


def emit_live_in_reentry_comments(target_vm_ip, live_in_reentries, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = live_in_reentries.get(start, [])
    if not rows:
        return
    limit = getattr(args, "live_in_reentry_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    max_expr = getattr(args, "live_in_reentry_max_expr", 220)
    print(
        f"    /* live-in reentry probe @ {start}: rows={len(rows)}; "
        "dynamic next-hook evidence is comment-only unless a hidden chain is statically replayed. */"
    )
    for row in shown:
        next_hook = "-"
        if row.get("inferred_next_source_entry", ""):
            next_hook = (
                f"entry_{row.get('inferred_next_source_entry')}@"
                f"{normalize_vm_ip(row.get('inferred_next_source_start_vm_ip', ''))}"
            )
        source_tail = "-"
        if row.get("source_final_tail_proof_events", ""):
            source_tail = (
                f"events={row.get('source_final_tail_proof_events')},"
                f"target_reg={row.get('source_final_tail_target_reg_match', '-')},"
                f"deref={row.get('source_final_tail_deref_match', '-')},"
                f"full={row.get('source_final_tail_proof_full', '0')}"
            )
        print(
            f"    /* live-in reentry: source={row.get('source_entry', '?')}, "
            f"event={row.get('dynamic_event_span', '-') or '-'}, "
            f"missing_successor={normalize_vm_ip(row.get('missing_successor_vm_ip', ''))}, "
            f"live={c_comment(row.get('live_mem_match_class', '') or '-')}, "
            f"tail={normalize_vm_ip(row.get('final_tail_site', ''))}:{row.get('final_tail_target_reg', '-')}, "
            f"exact_tail={row.get('tail_event_site_match', '0') or '0'}, "
            f"dynamic={c_comment(row.get('dynamic_resolution', '') or '-')}, "
            f"next_hook={c_comment(next_hook)}, "
            f"next_end={normalize_vm_ip(row.get('next_end_vm_ip', ''))}, "
            f"next_target=entry_{row.get('next_tail_target_entry', '-')}, "
            f"hidden_delta={row.get('inferred_hidden_delta', '-') or '-'}, "
            f"bytes={c_comment(row.get('inferred_next_source_bytes', '') or '-')}, "
            f"source_tail={c_comment(clip(source_tail, max_expr))}, "
            f"class={c_comment(row.get('reentry_class', '') or '-')}, "
            f"action={c_comment(row.get('hard_cfg_action', '') or '-')}, "
            f"blocker={c_comment(clip(row.get('promotion_blocker', '') or '-', max_expr))} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional live-in reentry rows omitted ... */")


def emit_allstatic_reentry_comments(target_vm_ip, allstatic_reentries, args):
    start = normalize_vm_ip(target_vm_ip)
    rows = allstatic_reentries.get(start, [])
    if not rows:
        return
    limit = getattr(args, "allstatic_reentry_top_items", 4)
    shown = rows if limit <= 0 else rows[:limit]
    max_expr = getattr(args, "allstatic_reentry_max_expr", 220)
    print(
        f"    /* all-static reentry probe @ {start}: rows={len(rows)}; "
        "immediate next-hook evidence from dumps/vmtail-allstatic remains comment-only. */"
    )
    for row in shown:
        next_hook = "-"
        if row.get("inferred_next_source_entry", ""):
            next_hook = (
                f"entry_{row.get('inferred_next_source_entry')}@"
                f"{normalize_vm_ip(row.get('inferred_next_source_start_vm_ip', ''))}"
            )
        expected = (
            f"{normalize_vm_ip(row.get('expected_next_site', ''))}->"
            f"{normalize_vm_ip(row.get('expected_next_end_vm_ip', ''))}"
            f"/entry_{row.get('expected_next_tail_target_entry', '-')}"
        )
        observed = (
            f"starts={row.get('allstatic_start_counts', '-') or '-'},"
            f"nexts={row.get('allstatic_next_counts', '-') or '-'},"
            f"sites={row.get('allstatic_next_sites', '-') or '-'},"
            f"ends={row.get('allstatic_next_end_vm_ips', '-') or '-'},"
            f"targets={row.get('allstatic_next_tail_target_entries', '-') or '-'}"
        )
        print(
            f"    /* all-static reentry: source={row.get('source_entry', '?')}, "
            f"dynamic={c_comment(row.get('dynamic_resolution', '') or '-')}, "
            f"event={row.get('dynamic_event_span', '-') or '-'}, "
            f"expected={c_comment(expected)}, "
            f"next_hook={c_comment(next_hook)}, "
            f"observed={c_comment(clip(observed, max_expr))}, "
            f"site_sources={c_comment(clip(row.get('allstatic_next_site_source_entries', '') or '-', max_expr))}, "
            f"matches={row.get('allstatic_exact_match_events', '0')}, "
            f"match_counts={c_comment(row.get('allstatic_exact_match_counts', '') or '-')}, "
            f"status={c_comment(row.get('allstatic_status', '') or '-')}, "
            f"action={c_comment(row.get('hard_cfg_action', '') or '-')}, "
            f"blocker={c_comment(clip(row.get('promotion_blocker', '') or '-', max_expr))} */"
        )
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} additional all-static reentry rows omitted ... */")


def load_tail_lifts(path):
    lifts = {}
    if not path or not Path(path).exists():
        return lifts
    for row in read_tsv(path):
        start = normalize_vm_ip(row.get("start_vm_ip", ""))
        if start:
            lifts[start] = row
    return lifts


def tail_lifts_for_block(block, tail_lifts):
    try:
        start = parse_hex(block.get("start_vm_ip", ""))
        end = parse_hex(block.get("byte_end_min", ""))
    except (TypeError, ValueError):
        return []
    if end <= start:
        return []
    rows = []
    for vm_ip, row in tail_lifts.items():
        try:
            value = parse_hex(vm_ip)
        except (TypeError, ValueError):
            continue
        if start <= value < end:
            rows.append(row)
    rows.sort(key=lambda row: parse_hex(row.get("start_vm_ip", "0x0")))
    return rows


def emit_internal_tail_lift(row):
    print(
        f"    /* internal synthetic tail lift @ {row.get('start_vm_ip', '')}: "
        f"events={row.get('events', '0')}, encoded={row.get('target_encoded_events', '0')}/"
        f"{row.get('events', '0')}, longctl={row.get('long_control_overlap_events', '0')}/"
        f"{row.get('events', '0')}, prefix={row.get('long_control_prefix_events', '0')}/"
        f"{row.get('events', '0')}, source={c_comment(row.get('top_sources', '') or '-')}, "
        f"target={c_comment(row.get('top_targets', '') or '-')}, "
        f"classes={c_comment(row.get('lift_classes', '') or '-')} */"
    )
    if row.get("long_control_overlaps"):
        print(
            f"    /* internal overlapping long-control span: "
            f"{c_comment(row.get('long_control_overlaps', ''))}; "
            f"targets={c_comment(row.get('long_control_targets', '') or '-')}; "
            f"deltas={c_comment(row.get('long_control_deltas', '') or '-')} */"
        )
    if row.get("long_control_prefixes"):
        print(
            f"    /* internal decoded long-control prefix: "
            f"{c_comment(row.get('long_control_prefixes', ''))}; "
            f"targets={c_comment(row.get('long_control_prefix_targets', '') or '-')}; "
            f"deltas={c_comment(row.get('long_control_prefix_deltas', '') or '-')} */"
        )
    elif row.get("tail_schemas") or row.get("top_tail_hexes"):
        print(
            f"    /* internal tail schema: schemas={c_comment(row.get('tail_schemas', '') or '-')}, "
            f"offsets={c_comment(row.get('target_match_offsets', '') or '-')}, "
            f"span_offsets={c_comment(row.get('span_target_match_offsets', '') or '-')}, "
            f"tails={c_comment(row.get('top_tail_hexes', '') or '-')} */"
        )


def row_to_c(row, max_expr_len):
    start = row.get("start_vm_ip", "")
    entry = row.get("source_entry", "")
    kind = row.get("row_kind", "")
    bytes_hex = row.get("bytes", "")
    operand_shape = row.get("operand_shape", "")
    target = row.get("target_entry", "")
    delta = parse_delta(row.get("delta", "0"))
    state = row.get("state_effect_ir", "")
    semantic = row.get("semantic_ir", "")
    dispatch = row.get("dispatch_expr_ir", "")
    validation = row.get("validation", "")

    lines = []
    lines.append(
        f"    /* {start}: entry_{entry}, {kind}, bytes={bytes_hex}, "
        f"shape={c_comment(operand_shape or '-')}, {c_comment(semantic)} */"
    )
    if state and state != "state0":
        state_expr = expr_to_c(state, max_expr_len)
        if is_clipped_expr(state_expr):
            lines.append(f"    /* state effect clipped: {c_comment(state_expr)} */")
        else:
            lines.append(f"    vm->state = {state_expr};")
    elif state == "state0":
        lines.append("    /* state preserved */")
    if is_decoded_long_control(row):
        lines.append("    next_entry = (int)U32(vm->ip + 0x0);")
        if target:
            lines.append(f"    /* observed decoded target: {target} */")
        lines.append("    vm->ip += signed_vm_delta_u32(U32(vm->ip + 0x4));")
        lines.append(f"    /* observed decoded delta: {row.get('delta', '0')} */")
        update = ""
    elif target:
        lines.append(f"    next_entry = {target};")
        update = fmt_ip_update(delta)
    else:
        update = fmt_ip_update(delta)
    if update:
        lines.append(f"    {update}")
    if dispatch:
        lines.append(f"    /* dispatch: {c_comment(expr_to_c(dispatch, max_expr_len))} */")
    if validation:
        lines.append(f"    /* validation: {c_comment(validation)} */")
    return lines


def load_rows(ir_path):
    rows = list(read_tsv(ir_path))
    rows.sort(key=lambda row: parse_hex(row.get("start_vm_ip", "0x0")))
    return rows


def map_rows_to_blocks(rows, blocks):
    rows_by_block = defaultdict(list)
    row_idx = 0
    sorted_blocks = sorted(blocks, key=lambda row: parse_hex(row.get("start_vm_ip") or "0x0"))
    for block in sorted_blocks:
        start = parse_hex(block.get("start_vm_ip") or "0x0")
        end = parse_hex(block.get("byte_end_min") or block.get("terminal_vm_ip") or "0x0")
        while row_idx < len(rows) and parse_hex(rows[row_idx].get("end_vm_ip", "0x0")) <= start:
            row_idx += 1
        scan = row_idx
        while scan < len(rows):
            row_start = parse_hex(rows[scan].get("start_vm_ip", "0x0"))
            if row_start >= end:
                break
            if row_start >= start:
                rows_by_block[block["block"]].append(rows[scan])
            scan += 1
    return rows_by_block


def load_edges(edge_path):
    edges = {}
    for row in read_tsv(edge_path):
        edges[row["source_block"]] = row
    return edges


def selected_blocks(blocks, args):
    rows = list(blocks)
    if args.start:
        wanted = set(args.start)
        rows = [row for row in rows if row["block"] in wanted or row["start_vm_ip"] in wanted]
    if not args.keep_order:
        rows.sort(key=lambda row: (-int(row.get("events") or 0), parse_hex(row.get("start_vm_ip") or "0x0")))
    if args.limit_blocks:
        rows = rows[:args.limit_blocks]
    return rows


def emit_preamble():
    print("/*")
    print(" * Decompiled VM pseudocode sketch.")
    print(" * This is syntax-checkable C, but still an analysis artifact rather than drop-in source.")
    print(" * Dynamic bytecode coverage is scenario-specific; see vm_trace_coverage_matrix.tsv for run/network provenance.")
    print(" */")
    print("#include <stdint.h>")
    print("")
    print("typedef struct VMState {")
    print("    uint8_t *ip;")
    print("    uint32_t state;")
    print("    uint32_t flags;")
    print("    uint8_t byte;")
    print("} VMState;")
    print("")
    print("#define U8(p)  (*(const uint8_t *)(p))")
    print("#define U16(p) (*(const uint16_t *)(p))")
    print("#define U32(p) (*(const uint32_t *)(p))")
    print("#define mask32(x) ((uint32_t)(x))")
    print("#define mask16(x) ((uint16_t)(x))")
    print("#define mask8(x)  ((uint8_t)(x))")
    print("")
    print("static int64_t signed_vm_delta_u32(uint32_t raw) {")
    print("    return (raw & 0x80000000u) ? -(int64_t)(raw & 0x7fffffffu) : (int64_t)raw;")
    print("}")
    print("")
    print("extern uintptr_t dispatch_table[360];")
    print("")


def emit_synthetic_edge(edge, synthetic_spans, dynamic_stitches, transfer_probes, symbolic_successors, hidden_chains, residual_audits, concrete_state_audits, live_context_audits, table_read_diagnostics, table_memory_probes, runtime_table_memory_probes, live_table_evidences, source299_ret_patch_probes, sampled_control_correlations, focused_direct_trace_audits, focused_sequence_audits, observed_chain_bridges, live_in_roles, live_in_reentries, allstatic_reentries, final_tail_site_probes, args):
    target_vm_ip = normalize_vm_ip(edge.get("target_vm_ip", ""))
    chain = resolved_hidden_chain(target_vm_ip, hidden_chains)
    info = synthetic_spans.get(target_vm_ip)
    if not info:
        emit_transfer_probe_comments(target_vm_ip, transfer_probes, args)
        emit_dynamic_stitch_comments(target_vm_ip, dynamic_stitches, args)
        emit_symbolic_successor_comments(target_vm_ip, symbolic_successors, args)
        emit_hidden_chain_comments(target_vm_ip, hidden_chains, args)
        emit_residual_audit_comments(target_vm_ip, residual_audits, args)
        emit_concrete_state_audit_comments(target_vm_ip, concrete_state_audits, args)
        emit_live_context_audit_comments(target_vm_ip, live_context_audits, args)
        emit_table_read_diagnostic_comments(target_vm_ip, table_read_diagnostics, args)
        emit_table_memory_probe_comments(target_vm_ip, table_memory_probes, args)
        emit_runtime_table_memory_probe_comments(target_vm_ip, runtime_table_memory_probes, args)
        emit_live_table_evidence_comments(target_vm_ip, live_table_evidences, args)
        emit_source299_ret_patch_comments(target_vm_ip, source299_ret_patch_probes, args)
        emit_sampled_control_correlation_comments(target_vm_ip, sampled_control_correlations, args)
        emit_focused_direct_trace_audit_comments(target_vm_ip, focused_direct_trace_audits, args)
        emit_focused_sequence_audit_comments(target_vm_ip, focused_sequence_audits, args)
        emit_observed_chain_bridge_comments(target_vm_ip, observed_chain_bridges, args)
        emit_live_in_role_comments(target_vm_ip, live_in_roles, final_tail_site_probes, args)
        emit_live_in_reentry_comments(target_vm_ip, live_in_reentries, args)
        emit_allstatic_reentry_comments(target_vm_ip, allstatic_reentries, args)
        if chain:
            print(f"    /* hidden chain resolves synthetic reentry at {normalize_vm_ip(chain.get('hidden_pred_end_vm_ip', ''))}. */")
            return
        print(f"    vm_unresolved_synthetic_tail(vm, 0x{parse_hex(target_vm_ip):x});")
        return

    target = top_int(info["targets"])
    delta_text = top_key(info["deltas"])
    status = fmt_counter(info["statuses"], args.synthetic_top_items)
    sites = fmt_counter(info["sites"], args.synthetic_top_items)
    byte_variants = short_bytes(info["bytes"], args.synthetic_top_items, args.synthetic_max_bytes)
    print(
        f"    /* recovered synthetic span @ {target_vm_ip}: events={info['events']}, "
        f"source={fmt_counter(info['sources'], args.synthetic_top_items)}, "
        f"target={fmt_counter(info['targets'], args.synthetic_top_items)}, "
        f"delta={fmt_counter(info['deltas'], args.synthetic_top_items)}, "
        f"status={c_comment(status)} */"
    )
    if sites or byte_variants:
        print(f"    /* synthetic sites={c_comment(sites)}; bytes={c_comment(byte_variants)} */")
    tail_lift = info.get("tail_lift") or {}
    if tail_lift:
        print(
            f"    /* synthetic tail lift: encoded={tail_lift.get('target_encoded_events', '0')}/"
            f"{tail_lift.get('events', '0')}, boundary={tail_lift.get('span_target_encoded_events', '0')}/"
            f"{tail_lift.get('events', '0')}, schemas={c_comment(tail_lift.get('tail_schemas', '') or '-')}, "
            f"offsets={c_comment(tail_lift.get('target_match_offsets', '') or '-')}, "
            f"span_offsets={c_comment(tail_lift.get('span_target_match_offsets', '') or '-')}, "
            f"classes={c_comment(tail_lift.get('lift_classes', '') or '-')}, "
            f"tails={c_comment(tail_lift.get('top_tail_hexes', '') or '-')} */"
        )
        if tail_lift.get("long_control_overlaps"):
            print(
                f"    /* overlapping long-control span: "
                f"{c_comment(tail_lift.get('long_control_overlaps', ''))}; "
                f"targets={c_comment(tail_lift.get('long_control_targets', '') or '-')}; "
                f"deltas={c_comment(tail_lift.get('long_control_deltas', '') or '-')} */"
            )
        if tail_lift.get("long_control_prefixes"):
            print(
                f"    /* decoded long-control prefix: "
                f"{c_comment(tail_lift.get('long_control_prefixes', ''))}; "
                f"targets={c_comment(tail_lift.get('long_control_prefix_targets', '') or '-')}; "
                f"deltas={c_comment(tail_lift.get('long_control_prefix_deltas', '') or '-')} */"
            )
    emit_transfer_probe_comments(target_vm_ip, transfer_probes, args)
    emit_dynamic_stitch_comments(target_vm_ip, dynamic_stitches, args)
    emit_symbolic_successor_comments(target_vm_ip, symbolic_successors, args)
    emit_hidden_chain_comments(target_vm_ip, hidden_chains, args)
    emit_residual_audit_comments(target_vm_ip, residual_audits, args)
    emit_concrete_state_audit_comments(target_vm_ip, concrete_state_audits, args)
    emit_live_context_audit_comments(target_vm_ip, live_context_audits, args)
    emit_table_read_diagnostic_comments(target_vm_ip, table_read_diagnostics, args)
    emit_table_memory_probe_comments(target_vm_ip, table_memory_probes, args)
    emit_runtime_table_memory_probe_comments(target_vm_ip, runtime_table_memory_probes, args)
    emit_live_table_evidence_comments(target_vm_ip, live_table_evidences, args)
    emit_source299_ret_patch_comments(target_vm_ip, source299_ret_patch_probes, args)
    emit_sampled_control_correlation_comments(target_vm_ip, sampled_control_correlations, args)
    emit_focused_direct_trace_audit_comments(target_vm_ip, focused_direct_trace_audits, args)
    emit_focused_sequence_audit_comments(target_vm_ip, focused_sequence_audits, args)
    emit_observed_chain_bridge_comments(target_vm_ip, observed_chain_bridges, args)
    emit_live_in_role_comments(target_vm_ip, live_in_roles, final_tail_site_probes, args)
    emit_live_in_reentry_comments(target_vm_ip, live_in_reentries, args)
    if chain:
        try:
            offset = parse_delta(chain.get("hidden_source_delta_from_start", "0"))
            pred_delta = parse_delta(chain.get("hidden_pred_delta", "0"))
        except ValueError:
            offset = 0
            pred_delta = 0
        if offset:
            print(f"    {fmt_ip_update(offset)}")
        print(
            f"    /* hidden source entry_{chain.get('hidden_source_entry', '?')} "
            f"replayed from {normalize_vm_ip(chain.get('hidden_source_start_vm_ip', ''))}. */"
        )
        if chain.get("hidden_pred_entry", ""):
            print(f"    next_entry = {chain.get('hidden_pred_entry')};")
        if pred_delta:
            print(f"    {fmt_ip_update(pred_delta)}")
        return
    tail_expr = tail_target_load(tail_lift)
    if tail_expr:
        print(f"    next_entry = {tail_expr};")
    elif target is not None:
        print(f"    next_entry = {target};")
    try:
        delta = parse_delta(delta_text)
    except ValueError:
        delta = 0
    update = fmt_ip_update(delta)
    if update:
        print(f"    {update}")


def synthetic_successor(edge, synthetic_spans, hidden_chains, block_by_start):
    target_vm_ip = normalize_vm_ip(edge.get("target_vm_ip", ""))
    chain = resolved_hidden_chain(target_vm_ip, hidden_chains)
    if chain:
        try:
            dest = parse_hex(chain.get("hidden_pred_end_vm_ip", ""))
        except (TypeError, ValueError):
            dest = None
        if dest is not None:
            return block_by_start.get(dest), dest
    info = synthetic_spans.get(target_vm_ip)
    if not info:
        return None, None
    delta_text = top_key(info["deltas"])
    if not delta_text:
        return None, None
    try:
        dest = parse_hex(target_vm_ip) + parse_delta(delta_text)
    except (TypeError, ValueError):
        return None, None
    return block_by_start.get(dest), dest


def emit_block_prototypes(blocks):
    for block in blocks:
        print(f"static void {c_block_name(block['block'])}(VMState *vm);")
    print("")


def emit_block(block, rows, edge, synthetic_spans, dynamic_stitches, transfer_probes, symbolic_successors, hidden_chains, residual_audits, concrete_state_audits, live_context_audits, table_read_diagnostics, table_memory_probes, runtime_table_memory_probes, live_table_evidences, source299_ret_patch_probes, sampled_control_correlations, focused_direct_trace_audits, focused_sequence_audits, observed_chain_bridges, live_in_roles, live_in_reentries, allstatic_reentries, final_tail_site_probes, tail_lifts, args, known_blocks, block_by_start):
    name = c_block_name(block["block"])
    print(f"static void {name}(VMState *vm) {{")
    print("    int next_entry = -1;")
    print(
        f"    /* VM {block['start_vm_ip']}..{block['byte_end_min']}; "
        f"rows={block['row_count']}, events={block['events']}, terminal={block['terminal_kind']} */"
    )
    print(f"    /* hot source entries: {c_comment(block.get('source_entries', ''))} */")
    shown = rows if args.rows_per_block <= 0 else rows[:args.rows_per_block]
    for row in shown:
        for line in row_to_c(row, args.max_expr_len):
            print(line)
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} recovered IR rows omitted from this block sketch ... */")
    for lift in tail_lifts_for_block(block, tail_lifts):
        emit_internal_tail_lift(lift)
    if edge:
        edge_kind = edge.get("edge_kind", "")
        target_block = edge.get("target_block", "")
        target_vm_ip = edge.get("target_vm_ip", "")
        coverage = edge.get("target_coverage_statuses", "")
        semantic = edge.get("semantic_ir", "")
        print(
            f"    /* terminal edge: {edge_kind}, target_vm_ip={target_vm_ip}, "
            f"coverage={c_comment(coverage)}, {c_comment(semantic)} */"
        )
        if target_block:
            print(f"    /* goto {c_block_name(target_block)}; */")
            if target_block == block["block"]:
                print("    /* self-loop edge retained as a CFG comment. */")
            elif target_block in known_blocks:
                print(f"    {c_block_name(target_block)}(vm);")
            else:
                print("    /* target block is outside this selected sketch. */")
        elif edge_kind == "covered_synthetic_fallthrough":
            emit_synthetic_edge(edge, synthetic_spans, dynamic_stitches, transfer_probes, symbolic_successors, hidden_chains, residual_audits, concrete_state_audits, live_context_audits, table_read_diagnostics, table_memory_probes, runtime_table_memory_probes, live_table_evidences, source299_ret_patch_probes, sampled_control_correlations, focused_direct_trace_audits, focused_sequence_audits, observed_chain_bridges, live_in_roles, live_in_reentries, allstatic_reentries, final_tail_site_probes, args)
            target_block, target_vm_ip = synthetic_successor(edge, synthetic_spans, hidden_chains, block_by_start)
            if target_block is not None:
                print(f"    /* synthetic successor after lifted delta: {c_block_name(target_block)} @ 0x{target_vm_ip:x}; */")
                print(f"    {c_block_name(target_block)}(vm);")
            elif target_vm_ip is not None:
                print(f"    /* synthetic successor 0x{target_vm_ip:x} is outside this selected sketch. */")
                print(f"    vm_unresolved_synthetic_tail(vm, 0x{target_vm_ip:x});")
    print("    (void)next_entry;")
    print("    return;")
    print("}")
    print("")


def emit_dispatch(blocks):
    print("void vm_recovered_dispatch_sketch(VMState *vm, uint64_t vm_ip) {")
    print("    switch (vm_ip) {")
    for block in blocks:
        print(f"    case {block['start_vm_ip']}: goto {c_block_name(block['block'])};")
    print("    default: vm_unresolved_synthetic_tail(vm, vm_ip); return;")
    print("    }")
    print("")
    for block in blocks:
        print(f"{c_block_name(block['block'])}:")
        print(f"    {c_block_name(block['block'])}(vm);")
        print("    return;")
    print("}")


def main():
    parser = argparse.ArgumentParser(description="Render recovered VM bytecode IR as C-like pseudocode blocks.")
    parser.add_argument("--ir", default="dumps/vmtail-wide-1m-w16/vm_bytecode_ir.tsv")
    parser.add_argument("--blocks", default="dumps/vmtail-wide-1m-w16/vm_bytecode_basic_blocks.tsv")
    parser.add_argument("--edges", default="dumps/vmtail-wide-1m-w16/vm_bytecode_basic_block_edges.tsv")
    parser.add_argument("--limit-blocks", type=int, default=40)
    parser.add_argument("--rows-per-block", type=int, default=24)
    parser.add_argument("--max-expr-len", type=int, default=220)
    parser.add_argument("--synthetic-trace", default="dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv")
    parser.add_argument("--synthetic-tail-lift", default="dumps/vmtail-wide-1m-w16/vm_synthetic_tail_lift.tsv")
    parser.add_argument("--synthetic-gap-transfer-probe", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_transfer_probe.tsv")
    parser.add_argument("--synthetic-gap-dynamic-stitch", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_dynamic_stitch.tsv")
    parser.add_argument("--synthetic-gap-symbolic-successors", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_symbolic_successors.tsv")
    parser.add_argument("--synthetic-gap-chain-probe", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_chain_probe.tsv")
    parser.add_argument("--synthetic-gap-residual-audit", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_residual_audit.tsv")
    parser.add_argument("--synthetic-gap-concrete-state-audit", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_concrete_state_audit.tsv")
    parser.add_argument("--synthetic-gap-live-context-audit", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_context_audit.tsv")
    parser.add_argument("--synthetic-gap-table-read-diagnostic", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_table_read_diagnostic.tsv")
    parser.add_argument("--synthetic-gap-table-memory-probe", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_table_memory_probe.tsv")
    parser.add_argument("--synthetic-gap-runtime-table-memory-probe", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_runtime_table_memory_probe.tsv")
    parser.add_argument("--synthetic-gap-live-table-evidence", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_table_evidence.tsv")
    parser.add_argument("--synthetic-gap-source299-ret-patch-probe", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_source299_ret_patch_probe.tsv")
    parser.add_argument("--synthetic-gap-sampled-control-correlation", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_sampled_control_correlation.tsv")
    parser.add_argument("--synthetic-gap-focused-direct-trace-audit", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_focused_direct_trace_audit.tsv")
    parser.add_argument("--synthetic-gap-focused-sequence-audit", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_focused_sequence_audit.tsv")
    parser.add_argument("--synthetic-gap-observed-chain-bridge", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_observed_chain_bridge.tsv")
    parser.add_argument("--synthetic-gap-live-in-roles", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_in_roles.tsv")
    parser.add_argument("--synthetic-gap-live-in-reentry-probe", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_in_reentry_probe.tsv")
    parser.add_argument("--synthetic-gap-allstatic-reentry-probe", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_allstatic_reentry_probe.tsv")
    parser.add_argument("--live-in-final-tail-site-probe", default="dumps/vmtail-wide-1m-w16/vm_live_in_final_tail_site_probe.tsv")
    parser.add_argument("--synthetic-top-items", type=int, default=4)
    parser.add_argument("--synthetic-max-bytes", type=int, default=48)
    parser.add_argument("--transfer-probe-top-items", type=int, default=4)
    parser.add_argument("--transfer-probe-max-expr", type=int, default=180)
    parser.add_argument("--dynamic-stitch-top-items", type=int, default=4)
    parser.add_argument("--dynamic-stitch-max-candidates", type=int, default=180)
    parser.add_argument("--symbolic-successor-top-items", type=int, default=4)
    parser.add_argument("--symbolic-successor-max-expr", type=int, default=180)
    parser.add_argument("--hidden-chain-top-items", type=int, default=4)
    parser.add_argument("--hidden-chain-max-expr", type=int, default=180)
    parser.add_argument("--residual-audit-top-items", type=int, default=4)
    parser.add_argument("--residual-audit-max-expr", type=int, default=180)
    parser.add_argument("--concrete-state-audit-top-items", type=int, default=4)
    parser.add_argument("--concrete-state-audit-max-expr", type=int, default=180)
    parser.add_argument("--live-context-audit-top-items", type=int, default=4)
    parser.add_argument("--live-context-audit-max-expr", type=int, default=180)
    parser.add_argument("--table-read-diagnostic-top-items", type=int, default=4)
    parser.add_argument("--table-read-diagnostic-max-expr", type=int, default=180)
    parser.add_argument("--table-memory-probe-top-items", type=int, default=4)
    parser.add_argument("--runtime-table-memory-probe-top-items", type=int, default=4)
    parser.add_argument("--live-table-evidence-top-items", type=int, default=4)
    parser.add_argument("--source299-ret-patch-probe-top-items", type=int, default=4)
    parser.add_argument("--sampled-control-correlation-top-items", type=int, default=4)
    parser.add_argument("--sampled-control-correlation-max-expr", type=int, default=180)
    parser.add_argument("--focused-direct-trace-audit-top-items", type=int, default=4)
    parser.add_argument("--focused-direct-trace-audit-max-expr", type=int, default=180)
    parser.add_argument("--focused-sequence-audit-top-items", type=int, default=4)
    parser.add_argument("--focused-sequence-audit-max-expr", type=int, default=180)
    parser.add_argument("--observed-chain-bridge-top-items", type=int, default=4)
    parser.add_argument("--observed-chain-bridge-max-expr", type=int, default=220)
    parser.add_argument("--live-in-role-top-items", type=int, default=4)
    parser.add_argument("--live-in-role-max-expr", type=int, default=220)
    parser.add_argument("--live-in-reentry-top-items", type=int, default=4)
    parser.add_argument("--live-in-reentry-max-expr", type=int, default=220)
    parser.add_argument("--allstatic-reentry-top-items", type=int, default=4)
    parser.add_argument("--allstatic-reentry-max-expr", type=int, default=220)
    parser.add_argument("--start", action="append", default=[])
    parser.add_argument("--keep-order", action="store_true")
    args = parser.parse_args()

    blocks = list(read_tsv(args.blocks))
    chosen = selected_blocks(blocks, args)
    rows_by_block = map_rows_to_blocks(load_rows(args.ir), blocks)
    edges = load_edges(args.edges)
    synthetic_spans = load_synthetic_spans(args.synthetic_trace, args.synthetic_tail_lift)
    dynamic_stitches = load_dynamic_stitches(args.synthetic_gap_dynamic_stitch)
    transfer_probes = load_transfer_probes(args.synthetic_gap_transfer_probe)
    symbolic_successors = load_symbolic_successors(args.synthetic_gap_symbolic_successors)
    hidden_chains = load_hidden_chains(args.synthetic_gap_chain_probe)
    residual_audits = load_residual_audits(args.synthetic_gap_residual_audit)
    concrete_state_audits = load_concrete_state_audits(args.synthetic_gap_concrete_state_audit)
    live_context_audits = load_live_context_audits(args.synthetic_gap_live_context_audit)
    table_read_diagnostics = load_table_read_diagnostics(args.synthetic_gap_table_read_diagnostic)
    table_memory_probes = load_table_memory_probes(args.synthetic_gap_table_memory_probe)
    runtime_table_memory_probes = load_runtime_table_memory_probes(args.synthetic_gap_runtime_table_memory_probe)
    live_table_evidences = load_live_table_evidences(args.synthetic_gap_live_table_evidence)
    source299_ret_patch_probes = load_source299_ret_patch_probes(args.synthetic_gap_source299_ret_patch_probe)
    sampled_control_correlations = load_sampled_control_correlations(args.synthetic_gap_sampled_control_correlation)
    focused_direct_trace_audits = load_focused_direct_trace_audits(args.synthetic_gap_focused_direct_trace_audit)
    focused_sequence_audits = load_focused_sequence_audits(args.synthetic_gap_focused_sequence_audit)
    observed_chain_bridges = load_observed_chain_bridges(args.synthetic_gap_observed_chain_bridge)
    live_in_roles = load_live_in_roles(args.synthetic_gap_live_in_roles)
    live_in_reentries = load_live_in_reentries(args.synthetic_gap_live_in_reentry_probe)
    allstatic_reentries = load_allstatic_reentries(args.synthetic_gap_allstatic_reentry_probe)
    final_tail_site_probes = load_final_tail_site_probes(args.live_in_final_tail_site_probe)
    tail_lifts = load_tail_lifts(args.synthetic_tail_lift)

    emit_preamble()
    print("extern void vm_unresolved_synthetic_tail(VMState *vm, uint64_t vm_ip);")
    print("")
    emit_block_prototypes(chosen)
    known_blocks = {block["block"] for block in chosen}
    block_by_start = {parse_hex(block["start_vm_ip"]): block["block"] for block in chosen}
    for block in chosen:
        emit_block(
            block,
            rows_by_block.get(block["block"], []),
            edges.get(block["block"]),
            synthetic_spans,
            dynamic_stitches,
            transfer_probes,
            symbolic_successors,
            hidden_chains,
            residual_audits,
            concrete_state_audits,
            live_context_audits,
            table_read_diagnostics,
            table_memory_probes,
            runtime_table_memory_probes,
            live_table_evidences,
            source299_ret_patch_probes,
            sampled_control_correlations,
            focused_direct_trace_audits,
            focused_sequence_audits,
            observed_chain_bridges,
            live_in_roles,
            live_in_reentries,
            allstatic_reentries,
            final_tail_site_probes,
            tail_lifts,
            args,
            known_blocks,
            block_by_start,
        )
    emit_dispatch(chosen)

    print(
        f"pseudocode_blocks={len(chosen)} rows_per_block={args.rows_per_block}",
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
