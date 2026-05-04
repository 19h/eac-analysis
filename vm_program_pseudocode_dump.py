#!/usr/bin/env python3
import argparse
import sys

from vm_pseudocode_dump import (
    c_block_name,
    c_comment,
    load_edges,
    load_rows,
    map_rows_to_blocks,
    parse_delta,
    parse_hex,
    read_tsv,
    selected_blocks,
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


def emit_exact_call(row):
    entry = row.get("source_entry", "")
    start = row.get("start_vm_ip", "")
    bytes_hex = row.get("bytes", "")
    kind = row.get("row_kind", "")
    target = row.get("target_entry", "")
    delta = fmt_delta(row.get("delta", "0"))
    semantic = row.get("semantic_ir", "")
    print(
        f"    /* {start}: {kind}, bytes={bytes_hex}, entry={entry}, "
        f"expected_next={target}, ip {delta}; {c_comment(semantic)} */"
    )
    print(f"    r = {op_name(entry)}(vm);")


def emit_decoded_control(row):
    start = row.get("start_vm_ip", "")
    kind = row.get("row_kind", "")
    entry = row.get("source_entry", "")
    target = row.get("target_entry", "")
    semantic = row.get("semantic_ir", "")
    delta = parse_delta(row.get("delta", "0"))
    print(f"    /* {start}: decoded {kind}, source entry={entry}; {c_comment(semantic)} */")
    if target:
        print(f"    next_entry = {target};")
    if delta > 0:
        print(f"    vm_ip += 0x{delta:x};")
    elif delta < 0:
        print(f"    vm_ip -= 0x{-delta:x};")


def emit_block(block, rows, edge, args):
    name = c_block_name(block["block"])
    print(f"static void prog_{name}(VMState *vm, uint64_t vm_ip) {{")
    print("    VMOpResult r;")
    print("    int next_entry = -1;")
    print(
        f"    /* VM {block['start_vm_ip']}..{block['byte_end_min']}; "
        f"rows={block['row_count']}, events={block['events']}, terminal={block['terminal_kind']} */"
    )
    print(f"    /* hot source entries: {c_comment(block.get('source_entries', ''))} */")
    shown = rows[:args.rows_per_block]
    for row in shown:
        if row.get("row_kind") == "exact_instruction":
            emit_exact_call(row)
        else:
            emit_decoded_control(row)
    omitted = len(rows) - len(shown)
    if omitted > 0:
        print(f"    /* ... {omitted} bytecode operations omitted from this compact sketch ... */")
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
            print(f"    vm_unresolved_synthetic_tail(vm, 0x{parse_hex(target_vm_ip):x});")
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


def collect_used_entries(blocks, rows_by_block, rows_per_block):
    used = set()
    for block in blocks:
        for row in rows_by_block.get(block["block"], [])[:rows_per_block]:
            entry = row.get("source_entry", "")
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
    parser.add_argument("--start", action="append", default=[])
    parser.add_argument("--keep-order", action="store_true")
    args = parser.parse_args()

    blocks = list(read_tsv(args.blocks))
    chosen = selected_blocks(blocks, args)
    rows_by_block = map_rows_to_blocks(load_rows(args.ir), blocks)
    edges = load_edges(args.edges)

    emit_preamble(collect_used_entries(chosen, rows_by_block, args.rows_per_block))
    for block in chosen:
        emit_block(block, rows_by_block.get(block["block"], []), edges.get(block["block"]), args)
    emit_dispatch(chosen)
    print(
        f"program_pseudocode_blocks={len(chosen)} rows_per_block={args.rows_per_block}",
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
