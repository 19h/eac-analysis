#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from collections import defaultdict
from pathlib import Path


U8_RE = re.compile(r"\bb([0-9]+)\b")
U16_RE = re.compile(r"\bu16_([0-9]+)\b")
U32_RE = re.compile(r"\bu32_([0-9]+)\b")


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
    return expr


def fmt_ip_update(delta):
    if delta == 0:
        return ""
    if delta > 0:
        return f"vm->ip += 0x{delta:x};"
    return f"vm->ip -= 0x{-delta:x};"


def row_to_c(row, max_expr_len):
    start = row.get("start_vm_ip", "")
    entry = row.get("source_entry", "")
    kind = row.get("row_kind", "")
    bytes_hex = row.get("bytes", "")
    target = row.get("target_entry", "")
    delta = parse_delta(row.get("delta", "0"))
    state = row.get("state_effect_ir", "")
    semantic = row.get("semantic_ir", "")
    dispatch = row.get("dispatch_expr_ir", "")
    validation = row.get("validation", "")

    lines = []
    lines.append(f"    /* {start}: entry_{entry}, {kind}, bytes={bytes_hex}, {c_comment(semantic)} */")
    if state and state != "state0":
        lines.append(f"    vm->state = {expr_to_c(state, max_expr_len)};")
    elif state == "state0":
        lines.append("    /* state preserved */")
    if target:
        lines.append(f"    next_entry = {target};")
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
    print(" * This is not intended to compile as-is; it is a C-like rendering of recovered VM IR.")
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
    print("extern uintptr_t dispatch_table[360];")
    print("")


def emit_block(block, rows, edge, args):
    name = c_block_name(block["block"])
    print(f"static void {name}(VMState *vm) {{")
    print("    int next_entry = -1;")
    print(
        f"    /* VM {block['start_vm_ip']}..{block['byte_end_min']}; "
        f"rows={block['row_count']}, events={block['events']}, terminal={block['terminal_kind']} */"
    )
    print(f"    /* hot source entries: {c_comment(block.get('source_entries', ''))} */")
    shown = rows[:args.rows_per_block]
    for row in shown:
        for line in row_to_c(row, args.max_expr_len):
            print(line)
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} recovered IR rows omitted from this block sketch ... */")
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
            print("    return;")
        elif edge_kind == "covered_synthetic_fallthrough":
            print(f"    vm_unresolved_synthetic_tail(vm, 0x{parse_hex(target_vm_ip):x});")
        else:
            print("    return;")
    else:
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
    parser.add_argument("--start", action="append", default=[])
    parser.add_argument("--keep-order", action="store_true")
    args = parser.parse_args()

    blocks = list(read_tsv(args.blocks))
    chosen = selected_blocks(blocks, args)
    rows_by_block = map_rows_to_blocks(load_rows(args.ir), blocks)
    edges = load_edges(args.edges)

    emit_preamble()
    print("extern void vm_unresolved_synthetic_tail(VMState *vm, uint64_t vm_ip);")
    print("")
    for block in chosen:
        emit_block(block, rows_by_block.get(block["block"], []), edges.get(block["block"]), args)
    emit_dispatch(chosen)

    print(
        f"pseudocode_blocks={len(chosen)} rows_per_block={args.rows_per_block}",
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
