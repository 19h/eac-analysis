#!/usr/bin/env python3
import argparse
import re
import sys

from vm_handler_pseudocode_dump import (
    c_expr,
    final_expr_from_chain,
    is_complete_expr,
    parse_count_exprs,
    slot_is_table_offset,
)
from vm_pseudocode_dump import c_comment, clip, read_tsv


def path_name(row):
    entry = int(row["source_entry"])
    digest = re.sub(r"[^0-9a-fA-F]", "", row["path_hash"])[:12] or "unknown"
    return f"path_entry_{entry:03d}_{digest}"


def single_count_expr(text):
    exprs = parse_count_exprs(text or "")
    if len(exprs) == 1:
        return exprs[0][0], exprs[0][1]
    return "", ""


def emit_preamble():
    print("/*")
    print(" * Path-specialized VM handler pseudocode.")
    print(" * Each function is one concrete static-replay branch path with sampled transfer expressions.")
    print(" * This is a C-like analysis artifact, not drop-in buildable source.")
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
    print("#define U8(p)  (*(const uint8_t *)(p))")
    print("#define U16(p) (*(const uint16_t *)(p))")
    print("#define U32(p) (*(const uint32_t *)(p))")
    print("#define mask32(x) ((uint32_t)(x))")
    print("#define mask16(x) ((uint16_t)(x))")
    print("#define mask8(x)  ((uint8_t)(x))")
    print("")
    print("static int vm_entry_from_slot_index(uint32_t slot) {")
    print("    return slot < 360u ? (int)slot : -1;")
    print("}")
    print("")
    print("static int vm_entry_from_table_offset(uint32_t slot) {")
    print("    return ((slot & 7u) == 0u && (slot >> 3) < 360u) ? (int)(slot >> 3) : -1;")
    print("}")
    print("")


def emit_optional_assignment(dst, expr, max_len):
    expr = (expr or "").strip()
    if not expr:
        return
    if is_complete_expr(expr, max_len):
        print(f"    {dst} = {c_expr(expr)};")
    else:
        print(f"    /* {dst} = {c_comment(clip(c_expr(expr), max_len))}; */")


def emit_ip_update(expr):
    try:
        delta = int(expr, 0)
    except (TypeError, ValueError):
        if expr:
            print(f"    /* vm->ip += {c_comment(c_expr(expr))}; */")
        return
    if delta >= 0:
        print(f"    vm->ip += 0x{delta:x};")
    else:
        print(f"    vm->ip -= 0x{-delta:x};")


def emit_path(row, args):
    print(f"static VMOpResult {path_name(row)}(VMState *vm) {{")
    print("    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };")
    print("    uint32_t state0 = vm->state;")
    print("    uint32_t flags0 = vm->flags;")
    print("    uint8_t byte0 = vm->byte;")
    print(
        f"    /* entry={row['source_entry']}, native={row['source_target']}, "
        f"path={row['path_hash']}, class={row['source_class']}, events={row['events']} */"
    )
    print(
        f"    /* validation: target={row.get('target_pct', '-') }%, ip={row.get('ip_pct', '-') }%, "
        f"sample_expr_events={row.get('sample_expr_events', '') or '-'} */"
    )
    if row.get("path"):
        print(f"    /* branch path: {c_comment(clip(row['path'], args.max_comment_len))} */")
    if row.get("top_actual_targets"):
        print(f"    /* top actual targets: {c_comment(clip(row['top_actual_targets'], args.max_comment_len))} */")
    if row.get("operand_layout"):
        print(f"    /* operands: {c_comment(clip(row['operand_layout'], args.max_comment_len))} */")
    if row.get("source_branch_gpr_profile"):
        print(f"    /* GPR+scratch branch profile: {c_comment(clip(row['source_branch_gpr_profile'], args.max_comment_len))} */")

    emit_optional_assignment("vm->state", final_expr_from_chain(row.get("state_ir", "")), args.max_expr_len)
    emit_optional_assignment("vm->flags", final_expr_from_chain(row.get("flag_ir", "")), args.max_expr_len)

    _count, slot_expr = single_count_expr(row.get("slot_expr", ""))
    if slot_expr and is_complete_expr(slot_expr, args.max_expr_len):
        print(f"    r.slot = (uint32_t)({c_expr(slot_expr)});")
        helper = "vm_entry_from_table_offset" if slot_is_table_offset(slot_expr) else "vm_entry_from_slot_index"
        print(f"    r.next_entry = {helper}(r.slot);")
    elif slot_expr:
        print(f"    /* r.slot = {c_comment(clip(c_expr(slot_expr), args.max_expr_len))}; */")
    elif row.get("slot_expr"):
        print(f"    /* slot variants: {c_comment(clip(c_expr(row['slot_expr']), args.max_comment_len))} */")

    _count, ip_expr = single_count_expr(row.get("ip_advance", ""))
    emit_ip_update(ip_expr)

    print("    return r;")
    print("}")
    print("")


def selected_rows(rows, args):
    rows.sort(key=lambda row: (-int(row.get("events") or 0), int(row["source_entry"]), row["path_hash"]))
    if args.entry:
        wanted = {str(int(value, 0)) for value in args.entry}
        rows = [row for row in rows if row["source_entry"] in wanted]
    if args.validated_only:
        rows = [row for row in rows if row.get("target_pct") == "100.0" and row.get("ip_pct") == "100.0"]
    if args.limit:
        rows = rows[:args.limit]
    return rows


def main():
    parser = argparse.ArgumentParser(description="Render path-specialized VM microcode rows as C-like functions.")
    parser.add_argument("--paths", default="dumps/vmtail-wide-1m-w16/vm_path_microcode_catalog_gpr_seeded_fast.tsv")
    parser.add_argument("--limit", type=int, default=0)
    parser.add_argument("--entry", action="append", default=[])
    parser.add_argument("--validated-only", action="store_true")
    parser.add_argument("--max-expr-len", type=int, default=480)
    parser.add_argument("--max-comment-len", type=int, default=360)
    args = parser.parse_args()

    rows = selected_rows(list(read_tsv(args.paths)), args)
    emit_preamble()
    for row in rows:
        emit_path(row, args)
    print(f"path_pseudocode_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
