#!/usr/bin/env python3
import argparse
import sys
from collections import Counter
from pathlib import Path

from vm_pseudocode_dump import (
    c_block_name,
    c_comment,
    emit_dynamic_stitch_comments,
    emit_internal_tail_lift,
    emit_hidden_chain_comments,
    emit_live_in_reentry_comments,
    emit_live_in_role_comments,
    emit_symbolic_successor_comments,
    emit_transfer_probe_comments,
    expr_to_c,
    is_decoded_long_control,
    is_clipped_expr,
    load_dynamic_stitches,
    load_edges,
    load_final_tail_site_probes,
    load_hidden_chains,
    load_live_in_reentries,
    load_live_in_roles,
    load_rows,
    load_symbolic_successors,
    load_tail_lifts,
    load_transfer_probes,
    map_rows_to_blocks,
    parse_delta,
    parse_hex,
    read_tsv,
    resolved_hidden_chain,
    selected_blocks,
    tail_target_load,
    tail_lifts_for_block,
)


def emit_preamble(used_entries):
    print("/*")
    print(" * VM bytecode program pseudocode.")
    print(" * This layer is intentionally compact: bytecode blocks call recovered op_entry_NNN handlers.")
    print(" * It is syntax-checkable C, but still an analysis artifact rather than drop-in source.")
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
    print("typedef struct VMOpResult {")
    print("    int next_entry;")
    print("    uint32_t slot;")
    print("} VMOpResult;")
    print("")
    print("extern void vm_unresolved_synthetic_tail(VMState *vm, uint64_t vm_ip);")
    print("#define U16(p) (*(const uint16_t *)(p))")
    print("#define U32(p) (*(const uint32_t *)(p))")
    print("static int64_t signed_vm_delta_u32(uint32_t raw) {")
    print("    return (raw & 0x80000000u) ? -(int64_t)(raw & 0x7fffffffu) : (int64_t)raw;")
    print("}")
    for entry in sorted(used_entries):
        print(f"extern VMOpResult op_entry_{entry:03d}(VMState *vm);")
    print("")


def op_name(entry):
    try:
        return f"op_entry_{int(entry):03d}"
    except ValueError:
        return "op_entry_unknown"


def fmt_delta(delta_text):
    delta = parse_delta(delta_text or "0")
    if delta >= 0:
        return f"+0x{delta:x}"
    return f"-0x{-delta:x}"


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


def emit_exact_call(row):
    entry = row.get("source_entry", "")
    start = row.get("start_vm_ip", "")
    bytes_hex = row.get("bytes", "")
    kind = row.get("row_kind", "")
    target = row.get("target_entry", "")
    delta_value = parse_delta(row.get("delta", "0"))
    delta = fmt_delta(row.get("delta", "0"))
    semantic = row.get("semantic_ir", "")
    print(
        f"    /* {start}: {kind}, bytes={bytes_hex}, entry={entry}, "
        f"expected_next={target}, ip {delta}; {c_comment(semantic)} */"
    )
    print(f"    r = {op_name(entry)}(vm);")
    if target:
        print(f"    next_entry = (r.next_entry >= 0) ? r.next_entry : {target};")
    else:
        print("    next_entry = r.next_entry;")
    if delta_value > 0:
        print(f"    vm_ip += 0x{delta_value:x};")
    elif delta_value < 0:
        print(f"    vm_ip -= 0x{-delta_value:x};")


def emit_decoded_control(row, args):
    start = row.get("start_vm_ip", "")
    kind = row.get("row_kind", "")
    entry = row.get("source_entry", "")
    target = row.get("target_entry", "")
    semantic = row.get("semantic_ir", "")
    bytes_hex = row.get("bytes", "")
    operand_shape = row.get("operand_shape", "")
    validation = row.get("validation", "")
    state = row.get("state_effect_ir", "")
    delta = parse_delta(row.get("delta", "0"))
    print(
        f"    /* {start}: decoded {kind}, source entry={entry}, bytes={bytes_hex}, "
        f"shape={c_comment(operand_shape or '-')}, validation={c_comment(validation or '-')}; "
        f"{c_comment(semantic)} */"
    )
    if state and state != "state0":
        state_expr = expr_to_c(state, args.max_expr_len)
        if is_clipped_expr(state_expr):
            print(f"    /* source state effect clipped: {c_comment(state_expr)} */")
        else:
            print(f"    vm->state = {state_expr};")
            print("    /* source state effect joined from transition model */")
    elif state == "state0":
        print("    /* source state preserved */")
    if is_decoded_long_control(row):
        print("    next_entry = (int)U32(vm->ip + 0x0);")
        if target:
            print(f"    /* observed decoded target: {target} */")
        print("    vm_ip += signed_vm_delta_u32(U32(vm->ip + 0x4));")
        print(f"    /* observed decoded delta: {fmt_delta(row.get('delta', '0'))} */")
    elif target:
        print(f"    next_entry = {target};")
        if delta > 0:
            print(f"    vm_ip += 0x{delta:x};")
        elif delta < 0:
            print(f"    vm_ip -= 0x{-delta:x};")
    elif delta > 0:
        print(f"    vm_ip += 0x{delta:x};")
    elif delta < 0:
        print(f"    vm_ip -= 0x{-delta:x};")


def emit_synthetic_edge(edge, synthetic_spans, dynamic_stitches, transfer_probes, symbolic_successors, hidden_chains, live_in_roles, live_in_reentries, final_tail_site_probes, args):
    target_vm_ip = normalize_vm_ip(edge.get("target_vm_ip", ""))
    chain = resolved_hidden_chain(target_vm_ip, hidden_chains)
    info = synthetic_spans.get(target_vm_ip)
    if not info:
        emit_transfer_probe_comments(target_vm_ip, transfer_probes, args)
        emit_dynamic_stitch_comments(target_vm_ip, dynamic_stitches, args)
        emit_symbolic_successor_comments(target_vm_ip, symbolic_successors, args)
        emit_hidden_chain_comments(target_vm_ip, hidden_chains, args)
        emit_live_in_role_comments(target_vm_ip, live_in_roles, final_tail_site_probes, args)
        emit_live_in_reentry_comments(target_vm_ip, live_in_reentries, args)
        if chain:
            print(f"    /* hidden chain resolves synthetic reentry at {normalize_vm_ip(chain.get('hidden_pred_end_vm_ip', ''))}. */")
            return
        print(f"    vm_unresolved_synthetic_tail(vm, 0x{parse_hex(target_vm_ip):x});")
        return

    source = top_int(info["sources"])
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
    emit_live_in_role_comments(target_vm_ip, live_in_roles, final_tail_site_probes, args)
    emit_live_in_reentry_comments(target_vm_ip, live_in_reentries, args)
    if source is not None:
        print(f"    r = {op_name(source)}(vm);")
    if chain:
        try:
            offset = parse_delta(chain.get("hidden_source_delta_from_start", "0"))
            pred_delta = parse_delta(chain.get("hidden_pred_delta", "0"))
        except ValueError:
            offset = 0
            pred_delta = 0
        if offset > 0:
            print(f"    vm_ip += 0x{offset:x};")
        elif offset < 0:
            print(f"    vm_ip -= 0x{-offset:x};")
        hidden_entry = chain.get("hidden_source_entry", "")
        if hidden_entry:
            print(
                f"    /* hidden source entry_{hidden_entry} replayed from "
                f"{normalize_vm_ip(chain.get('hidden_source_start_vm_ip', ''))}. */"
            )
            print(f"    r = {op_name(hidden_entry)}(vm);")
        if chain.get("hidden_pred_entry", ""):
            print(f"    next_entry = {chain.get('hidden_pred_entry')};")
        if pred_delta > 0:
            print(f"    vm_ip += 0x{pred_delta:x};")
        elif pred_delta < 0:
            print(f"    vm_ip -= 0x{-pred_delta:x};")
        return
    tail_expr = tail_target_load(tail_lift, after_prefix=source is not None)
    if tail_expr:
        print(f"    next_entry = {tail_expr};")
        if target is not None:
            print(f"    /* observed synthetic target: {target} */")
    elif target is not None:
        print(f"    next_entry = {target};")
    try:
        delta = parse_delta(delta_text)
    except ValueError:
        delta = 0
    if delta > 0:
        print(f"    vm_ip += 0x{delta:x};")
    elif delta < 0:
        print(f"    vm_ip -= 0x{-delta:x};")


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
        print(f"static void prog_{c_block_name(block['block'])}(VMState *vm, uint64_t vm_ip);")
    print("")


def emit_block(block, rows, edge, synthetic_spans, dynamic_stitches, transfer_probes, symbolic_successors, hidden_chains, live_in_roles, live_in_reentries, final_tail_site_probes, tail_lifts, args, known_blocks, block_by_start):
    name = c_block_name(block["block"])
    print(f"static void prog_{name}(VMState *vm, uint64_t vm_ip) {{")
    print("    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };")
    print("    int next_entry = -1;")
    print(
        f"    /* VM {block['start_vm_ip']}..{block['byte_end_min']}; "
        f"rows={block['row_count']}, events={block['events']}, terminal={block['terminal_kind']} */"
    )
    print(f"    /* hot source entries: {c_comment(block.get('source_entries', ''))} */")
    shown = rows if args.rows_per_block <= 0 else rows[:args.rows_per_block]
    for row in shown:
        if row.get("row_kind") == "exact_instruction":
            emit_exact_call(row)
        else:
            emit_decoded_control(row, args)
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} bytecode operations omitted from this compact sketch ... */")
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
            print(f"    /* goto prog_{c_block_name(target_block)}; */")
            if target_block == block["block"]:
                print("    /* self-loop edge retained as a CFG comment. */")
            elif target_block in known_blocks:
                print(f"    prog_{c_block_name(target_block)}(vm, vm_ip);")
            else:
                print("    /* target block is outside this selected sketch. */")
        elif edge_kind == "covered_synthetic_fallthrough":
            emit_synthetic_edge(edge, synthetic_spans, dynamic_stitches, transfer_probes, symbolic_successors, hidden_chains, live_in_roles, live_in_reentries, final_tail_site_probes, args)
            target_block, target_vm_ip = synthetic_successor(edge, synthetic_spans, hidden_chains, block_by_start)
            if target_block is not None:
                print(f"    /* synthetic successor after lifted delta: prog_{c_block_name(target_block)} @ 0x{target_vm_ip:x}; */")
                print(f"    prog_{c_block_name(target_block)}(vm, vm_ip);")
            elif target_vm_ip is not None:
                print(f"    /* synthetic successor 0x{target_vm_ip:x} is outside this selected sketch. */")
                print(f"    vm_unresolved_synthetic_tail(vm, 0x{target_vm_ip:x});")
    print("    (void)r;")
    print("    (void)next_entry;")
    print("    (void)vm_ip;")
    print("}")
    print("")


def emit_dispatch(blocks):
    print("void vm_program_sketch(VMState *vm, uint64_t vm_ip) {")
    print("    switch (vm_ip) {")
    for block in blocks:
        print(f"    case {block['start_vm_ip']}: prog_{c_block_name(block['block'])}(vm, vm_ip); return;")
    print("    default: vm_unresolved_synthetic_tail(vm, vm_ip); return;")
    print("    }")
    print("}")


def collect_used_entries(blocks, rows_by_block, rows_per_block, edges, synthetic_spans, hidden_chains):
    used = set()
    for block in blocks:
        rows = rows_by_block.get(block["block"], [])
        shown = rows if rows_per_block <= 0 else rows[:rows_per_block]
        for row in shown:
            entry = row.get("source_entry", "")
            try:
                used.add(int(entry))
            except ValueError:
                pass
        edge = edges.get(block["block"])
        if edge and edge.get("edge_kind") == "covered_synthetic_fallthrough":
            start = normalize_vm_ip(edge.get("target_vm_ip", ""))
            info = synthetic_spans.get(start)
            if info:
                for entry in info["sources"]:
                    try:
                        used.add(int(entry))
                    except ValueError:
                        pass
            for chain in hidden_chains.get(start, []):
                try:
                    used.add(int(chain.get("hidden_source_entry", "")))
                except ValueError:
                    pass
    return used


def main():
    parser = argparse.ArgumentParser(description="Render recovered VM bytecode as compact C-like op_entry calls.")
    parser.add_argument("--ir", default="dumps/vmtail-wide-1m-w16/vm_bytecode_ir.tsv")
    parser.add_argument("--blocks", default="dumps/vmtail-wide-1m-w16/vm_bytecode_basic_blocks.tsv")
    parser.add_argument("--edges", default="dumps/vmtail-wide-1m-w16/vm_bytecode_basic_block_edges.tsv")
    parser.add_argument("--limit-blocks", type=int, default=80)
    parser.add_argument("--rows-per-block", type=int, default=80)
    parser.add_argument("--synthetic-trace", default="dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv")
    parser.add_argument("--synthetic-tail-lift", default="dumps/vmtail-wide-1m-w16/vm_synthetic_tail_lift.tsv")
    parser.add_argument("--synthetic-gap-transfer-probe", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_transfer_probe.tsv")
    parser.add_argument("--synthetic-gap-dynamic-stitch", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_dynamic_stitch.tsv")
    parser.add_argument("--synthetic-gap-symbolic-successors", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_symbolic_successors.tsv")
    parser.add_argument("--synthetic-gap-chain-probe", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_chain_probe.tsv")
    parser.add_argument("--synthetic-gap-live-in-roles", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_in_roles.tsv")
    parser.add_argument("--synthetic-gap-live-in-reentry-probe", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_live_in_reentry_probe.tsv")
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
    parser.add_argument("--live-in-role-top-items", type=int, default=4)
    parser.add_argument("--live-in-role-max-expr", type=int, default=220)
    parser.add_argument("--live-in-reentry-top-items", type=int, default=4)
    parser.add_argument("--live-in-reentry-max-expr", type=int, default=220)
    parser.add_argument("--max-expr-len", type=int, default=220)
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
    live_in_roles = load_live_in_roles(args.synthetic_gap_live_in_roles)
    live_in_reentries = load_live_in_reentries(args.synthetic_gap_live_in_reentry_probe)
    final_tail_site_probes = load_final_tail_site_probes(args.live_in_final_tail_site_probe)
    tail_lifts = load_tail_lifts(args.synthetic_tail_lift)

    emit_preamble(collect_used_entries(chosen, rows_by_block, args.rows_per_block, edges, synthetic_spans, hidden_chains))
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
            live_in_roles,
            live_in_reentries,
            final_tail_site_probes,
            tail_lifts,
            args,
            known_blocks,
            block_by_start,
        )
    emit_dispatch(chosen)
    print(
        f"program_pseudocode_blocks={len(chosen)} rows_per_block={args.rows_per_block}",
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
