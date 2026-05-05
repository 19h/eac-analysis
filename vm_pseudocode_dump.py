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


def emit_synthetic_edge(edge, synthetic_spans, dynamic_stitches, args):
    target_vm_ip = normalize_vm_ip(edge.get("target_vm_ip", ""))
    info = synthetic_spans.get(target_vm_ip)
    if not info:
        emit_dynamic_stitch_comments(target_vm_ip, dynamic_stitches, args)
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
    emit_dynamic_stitch_comments(target_vm_ip, dynamic_stitches, args)
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


def synthetic_successor(edge, synthetic_spans, block_by_start):
    target_vm_ip = normalize_vm_ip(edge.get("target_vm_ip", ""))
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


def emit_block(block, rows, edge, synthetic_spans, dynamic_stitches, tail_lifts, args, known_blocks, block_by_start):
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
            emit_synthetic_edge(edge, synthetic_spans, dynamic_stitches, args)
            target_block, target_vm_ip = synthetic_successor(edge, synthetic_spans, block_by_start)
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
    parser.add_argument("--synthetic-gap-dynamic-stitch", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_dynamic_stitch.tsv")
    parser.add_argument("--synthetic-top-items", type=int, default=4)
    parser.add_argument("--synthetic-max-bytes", type=int, default=48)
    parser.add_argument("--dynamic-stitch-top-items", type=int, default=4)
    parser.add_argument("--dynamic-stitch-max-candidates", type=int, default=180)
    parser.add_argument("--start", action="append", default=[])
    parser.add_argument("--keep-order", action="store_true")
    args = parser.parse_args()

    blocks = list(read_tsv(args.blocks))
    chosen = selected_blocks(blocks, args)
    rows_by_block = map_rows_to_blocks(load_rows(args.ir), blocks)
    edges = load_edges(args.edges)
    synthetic_spans = load_synthetic_spans(args.synthetic_trace, args.synthetic_tail_lift)
    dynamic_stitches = load_dynamic_stitches(args.synthetic_gap_dynamic_stitch)
    tail_lifts = load_tail_lifts(args.synthetic_tail_lift)

    emit_preamble()
    print("extern void vm_unresolved_synthetic_tail(VMState *vm, uint64_t vm_ip);")
    print("")
    emit_block_prototypes(chosen)
    known_blocks = {block["block"] for block in chosen}
    block_by_start = {parse_hex(block["start_vm_ip"]): block["block"] for block in chosen}
    for block in chosen:
        emit_block(block, rows_by_block.get(block["block"], []), edges.get(block["block"]), synthetic_spans, dynamic_stitches, tail_lifts, args, known_blocks, block_by_start)
    emit_dispatch(chosen)

    print(
        f"pseudocode_blocks={len(chosen)} rows_per_block={args.rows_per_block}",
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
