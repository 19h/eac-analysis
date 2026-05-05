#!/usr/bin/env python3
import argparse
import sys
from collections import Counter
from pathlib import Path

from vm_pseudocode_dump import (
    c_block_name,
    c_comment,
    emit_internal_tail_lift,
    is_decoded_long_control,
    load_edges,
    load_rows,
    load_tail_lifts,
    map_rows_to_blocks,
    parse_delta,
    parse_hex,
    read_tsv,
    selected_blocks,
    tail_target_load,
    tail_lifts_for_block,
)


def emit_preamble(used_entries):
    print("/*")
    print(" * VM bytecode program pseudocode.")
    print(" * This layer is intentionally compact: bytecode blocks call recovered op_entry_NNN handlers.")
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
        print(f"static VMOpResult op_entry_{entry:03d}(VMState *vm);")
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


def emit_decoded_control(row):
    start = row.get("start_vm_ip", "")
    kind = row.get("row_kind", "")
    entry = row.get("source_entry", "")
    target = row.get("target_entry", "")
    semantic = row.get("semantic_ir", "")
    bytes_hex = row.get("bytes", "")
    operand_shape = row.get("operand_shape", "")
    validation = row.get("validation", "")
    delta = parse_delta(row.get("delta", "0"))
    print(
        f"    /* {start}: decoded {kind}, source entry={entry}, bytes={bytes_hex}, "
        f"shape={c_comment(operand_shape or '-')}, validation={c_comment(validation or '-')}; "
        f"{c_comment(semantic)} */"
    )
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


def emit_synthetic_edge(edge, synthetic_spans, args):
    target_vm_ip = normalize_vm_ip(edge.get("target_vm_ip", ""))
    info = synthetic_spans.get(target_vm_ip)
    if not info:
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
    if source is not None:
        print(f"    r = {op_name(source)}(vm);")
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


def emit_block(block, rows, edge, synthetic_spans, tail_lifts, args):
    name = c_block_name(block["block"])
    print(f"static void prog_{name}(VMState *vm, uint64_t vm_ip) {{")
    print("    VMOpResult r;")
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
            emit_decoded_control(row)
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
        elif edge_kind == "covered_synthetic_fallthrough":
            emit_synthetic_edge(edge, synthetic_spans, args)
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


def collect_used_entries(blocks, rows_by_block, rows_per_block, edges, synthetic_spans):
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
            info = synthetic_spans.get(normalize_vm_ip(edge.get("target_vm_ip", "")))
            if info:
                for entry in info["sources"]:
                    try:
                        used.add(int(entry))
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
    parser.add_argument("--synthetic-top-items", type=int, default=4)
    parser.add_argument("--synthetic-max-bytes", type=int, default=48)
    parser.add_argument("--start", action="append", default=[])
    parser.add_argument("--keep-order", action="store_true")
    args = parser.parse_args()

    blocks = list(read_tsv(args.blocks))
    chosen = selected_blocks(blocks, args)
    rows_by_block = map_rows_to_blocks(load_rows(args.ir), blocks)
    edges = load_edges(args.edges)
    synthetic_spans = load_synthetic_spans(args.synthetic_trace, args.synthetic_tail_lift)
    tail_lifts = load_tail_lifts(args.synthetic_tail_lift)

    emit_preamble(collect_used_entries(chosen, rows_by_block, args.rows_per_block, edges, synthetic_spans))
    for block in chosen:
        emit_block(block, rows_by_block.get(block["block"], []), edges.get(block["block"]), synthetic_spans, tail_lifts, args)
    emit_dispatch(chosen)
    print(
        f"program_pseudocode_blocks={len(chosen)} rows_per_block={args.rows_per_block}",
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
