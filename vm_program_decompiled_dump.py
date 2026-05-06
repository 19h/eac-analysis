#!/usr/bin/env python3
"""Render recovered VM bytecode programs as inlined C-like pseudocode."""

from __future__ import annotations

import argparse
from collections import Counter

from vm_pseudocode_dump import (
    c_block_name,
    c_comment,
    expr_to_c,
    is_clipped_expr,
    is_decoded_long_control,
    load_edges,
    load_rows,
    map_rows_to_blocks,
    parse_delta,
    read_tsv,
    selected_blocks,
)


def dec_block_name(block: str) -> str:
    return f"vmdec_{c_block_name(block)}"


def emit_preamble() -> None:
    print("/*")
    print(" * Decompiled VM bytecode programs.")
    print(" * This layer inlines lifted bytecode-row semantics instead of handler-call sketches.")
    print(" * Rows whose symbolic expressions were clipped upstream are retained as comments,")
    print(" * so the artifact remains syntax-checkable while preserving audit visibility.")
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
    print("static int64_t signed_vm_delta_u32(uint32_t raw) {")
    print("    return (raw & 0x80000000u) ? -(int64_t)(raw & 0x7fffffffu) : (int64_t)raw;")
    print("}")
    print("extern void vm_unresolved_synthetic_tail(VMState *vm, uint64_t vm_ip);")
    print("")


def emit_prototypes(blocks: list[dict[str, str]]) -> None:
    for block in blocks:
        print(f"static void {dec_block_name(block['block'])}(VMState *vm, uint64_t vm_ip);")
    print("")


def emit_delta_update(delta_text: str) -> None:
    delta = parse_delta(delta_text or "0")
    if delta > 0:
        print(f"    vm_ip += 0x{delta:x};")
    elif delta < 0:
        print(f"    vm_ip -= 0x{-delta:x};")


def emit_state_effect(row: dict[str, str], args: argparse.Namespace, stats: Counter[str]) -> None:
    state = row.get("state_effect_ir", "")
    state_class = row.get("state_ir", "")
    if not state or state in {"state0", "state_preserve"}:
        stats["state_preserved"] += 1
        print(f"    /* state preserved: {c_comment(state_class or state or '-')} */")
        return
    expr = expr_to_c(state, args.max_expr_len)
    if is_clipped_expr(state) or is_clipped_expr(expr):
        stats["state_summarized"] += 1
        print(f"    /* state effect summarized/clipped: {c_comment(expr)} */")
        return
    stats["state_inlined"] += 1
    print(f"    vm->state = {expr};")


def emit_next_and_ip(row: dict[str, str], args: argparse.Namespace, stats: Counter[str]) -> None:
    target = row.get("target_entry", "")
    if is_decoded_long_control(row):
        stats["decoded_long_control"] += 1
        print("    next_entry = (int)U32(vm->ip + 0x0);")
        print("    vm_ip += signed_vm_delta_u32(U32(vm->ip + 0x4));")
        return
    if target:
        stats["concrete_next_entry"] += 1
        print(f"    next_entry = {int(target, 0)};")
    else:
        dispatch = row.get("dispatch_expr_ir", "")
        expr = expr_to_c(dispatch, args.max_expr_len)
        if dispatch and not is_clipped_expr(dispatch) and not is_clipped_expr(expr):
            stats["dispatch_summarized"] += 1
            print(f"    /* non-concrete dispatch expression: {c_comment(expr)} */")
        else:
            stats["dispatch_unknown"] += 1
            print("    /* dispatch target not concretized in this row. */")
    emit_delta_update(row.get("delta", "0"))


def emit_row(row: dict[str, str], args: argparse.Namespace, stats: Counter[str]) -> None:
    stats["rows"] += 1
    kind = row.get("row_kind", "")
    start = row.get("start_vm_ip", "")
    end = row.get("end_vm_ip", "")
    entry = row.get("source_entry", "")
    bytes_hex = row.get("bytes", "")
    semantic = row.get("semantic_ir", "")
    validation = row.get("validation", "")
    print(
        f"    /* {start}..{end}: {kind}, entry={entry}, bytes={bytes_hex}; "
        f"{c_comment(semantic)}; validation={c_comment(validation or '-')} */"
    )
    emit_state_effect(row, args, stats)
    emit_next_and_ip(row, args, stats)


def emit_edge(edge: dict[str, str] | None, known_blocks: set[str]) -> None:
    if not edge:
        return
    edge_kind = edge.get("edge_kind", "")
    target_block = edge.get("target_block", "")
    target_vm_ip = edge.get("target_vm_ip", "")
    coverage = edge.get("target_coverage_statuses", "")
    print(
        f"    /* terminal CFG edge: {edge_kind}, target_vm_ip={target_vm_ip}, "
        f"coverage={c_comment(coverage or '-')} */"
    )
    if target_block and target_block in known_blocks:
        print(f"    {dec_block_name(target_block)}(vm, vm_ip);")
    elif target_vm_ip:
        print(f"    vm_unresolved_synthetic_tail(vm, {target_vm_ip});")


def emit_block(
    block: dict[str, str],
    rows: list[dict[str, str]],
    edge: dict[str, str] | None,
    args: argparse.Namespace,
    known_blocks: set[str],
    stats: Counter[str],
) -> None:
    print(f"static void {dec_block_name(block['block'])}(VMState *vm, uint64_t vm_ip) {{")
    print("    uint32_t state0 = vm->state;")
    print("    uint32_t flags0 = vm->flags;")
    print("    uint8_t byte0 = vm->byte;")
    print("    int next_entry = -1;")
    print(
        f"    /* VM block {block['block']}: {block['start_vm_ip']}..{block['byte_end_min']}; "
        f"rows={block['row_count']}, terminal={block['terminal_kind']} */"
    )
    shown = rows if args.rows_per_block <= 0 else rows[: args.rows_per_block]
    for row in shown:
        emit_row(row, args, stats)
    omitted = len(rows) - len(shown)
    if omitted:
        stats["omitted_rows"] += omitted
        print(f"    /* {omitted} rows omitted by --rows-per-block. */")
    emit_edge(edge, known_blocks)
    print("    (void)state0;")
    print("    (void)flags0;")
    print("    (void)byte0;")
    print("    (void)next_entry;")
    print("    (void)vm_ip;")
    print("}")
    print("")


def emit_dispatch(blocks: list[dict[str, str]]) -> None:
    print("void vm_program_decompiled(VMState *vm, uint64_t vm_ip) {")
    print("    switch (vm_ip) {")
    for block in blocks:
        print(f"    case {block['start_vm_ip']}: {dec_block_name(block['block'])}(vm, vm_ip); return;")
    print("    default: vm_unresolved_synthetic_tail(vm, vm_ip); return;")
    print("    }")
    print("}")


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--ir", default="dumps/vmtail-wide-1m-w16/vm_bytecode_ir.tsv")
    parser.add_argument("--blocks", default="dumps/vmtail-wide-1m-w16/vm_bytecode_basic_blocks.tsv")
    parser.add_argument("--edges", default="dumps/vmtail-wide-1m-w16/vm_bytecode_basic_block_edges.tsv")
    parser.add_argument("--limit-blocks", type=int, default=0)
    parser.add_argument("--rows-per-block", type=int, default=0)
    parser.add_argument("--max-expr-len", type=int, default=260)
    parser.add_argument("--start", action="append", default=[])
    parser.add_argument("--keep-order", action="store_true")
    args = parser.parse_args()

    blocks = list(read_tsv(args.blocks))
    chosen = selected_blocks(blocks, args)
    rows_by_block = map_rows_to_blocks(load_rows(args.ir), blocks)
    edges = load_edges(args.edges)
    known_blocks = {block["block"] for block in chosen}
    stats: Counter[str] = Counter()

    emit_preamble()
    emit_prototypes(chosen)
    for block in chosen:
        emit_block(block, rows_by_block.get(block["block"], []), edges.get(block["block"]), args, known_blocks, stats)
    emit_dispatch(chosen)
    print(
        "program_decompiled_blocks="
        f"{len(chosen)} rows={stats['rows']} state_inlined={stats['state_inlined']} "
        f"state_summarized={stats['state_summarized']} state_preserved={stats['state_preserved']} "
        f"concrete_next_entry={stats['concrete_next_entry']} decoded_long_control={stats['decoded_long_control']} "
        f"omitted_rows={stats['omitted_rows']}",
        file=__import__("sys").stderr,
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
