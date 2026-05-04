#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from collections import Counter
from pathlib import Path

from vm_pseudocode_dump import c_comment, clip, read_tsv


U8_RE = re.compile(r"\bb([0-9]+)\b")
U16_RE = re.compile(r"\bu16_([0-9]+)\b")
U32_RE = re.compile(r"\bu32_([0-9]+)\b")


def load_by(path, key):
    rows = {}
    if not path or not Path(path).exists():
        return rows
    for row in read_tsv(path):
        value = row.get(key, "")
        if value:
            rows[value] = row
    return rows


def c_expr(expr):
    expr = (expr or "").strip()
    expr = expr.replace("state0", "state0")
    expr = expr.replace("flags0", "flags0")
    expr = expr.replace("byte0", "byte0")
    expr = U32_RE.sub(lambda match: f"U32(vm->ip + 0x{int(match.group(1)):x})", expr)
    expr = U16_RE.sub(lambda match: f"U16(vm->ip + 0x{int(match.group(1)):x})", expr)
    expr = U8_RE.sub(lambda match: f"U8(vm->ip + 0x{int(match.group(1)):x})", expr)
    expr = re.sub(r"(?<!dispatch_)table\[", "dispatch_table[", expr)
    return expr


def is_complete_expr(expr, max_len):
    if not expr:
        return False
    if "..." in expr or "#" in expr:
        return False
    return len(expr) <= max_len


def emit_expr_assignment(dst, expr, max_len):
    expr = (expr or "").strip()
    if is_complete_expr(expr, max_len):
        print(f"    {dst} = {c_expr(expr)};")
    elif expr:
        print(f"    /* {dst} = {c_comment(clip(c_expr(expr), max_len))}; */")


def final_expr_from_chain(text):
    if not text:
        return ""
    for item in reversed(text.split(" | ")):
        item = item.strip()
        if not item or "..." in item or "#" in item or "=" not in item:
            continue
        return item.rsplit("=", 1)[1].strip()
    return ""


def parse_count_exprs(text):
    exprs = []
    for item in re.split(r";|\s+\|\s+(?=\d+=)", text or ""):
        item = item.strip()
        if not item or "=" not in item:
            continue
        count, expr = item.split("=", 1)
        exprs.append((count.strip(), expr.strip()))
    return exprs


def single_expr(text):
    exprs = parse_count_exprs(text)
    if len(exprs) == 1:
        expr = exprs[0][1]
        if re.search(r"\b\d+=", expr):
            return ""
        return expr
    return ""


def constant_ip_advance(text):
    exprs = parse_count_exprs(text)
    values = set()
    for _count, expr in exprs:
        try:
            values.add(int(expr, 0))
        except ValueError:
            return None
    if len(values) == 1:
        return values.pop()
    return None


def parse_delta(text):
    if not text or text == "-":
        return None
    if text.startswith("+0x"):
        return int(text[1:], 16)
    if text.startswith("-0x"):
        return -int(text[3:], 16)
    return int(text, 0)


def fmt_ip_update(delta):
    if delta is None:
        return ""
    if delta >= 0:
        return f"vm->ip += 0x{delta:x};"
    return f"vm->ip -= 0x{-delta:x};"


def likely_dispatch_comment(row):
    long_ir = row.get("long_branch_ir", "")
    sampled_ir = row.get("sampled_operand_ir", "")
    tail_ir = row.get("tail_ir", "")
    if long_ir:
        return long_ir
    if sampled_ir:
        return sampled_ir
    if tail_ir:
        return tail_ir
    return "next = dispatch_table[slot]"


def emit_preamble():
    print("/*")
    print(" * VM handler pseudocode.")
    print(" * These functions are a C-like static reconstruction of dispatch-entry semantics.")
    print(" * They are intentionally a decompiler sketch, not drop-in buildable source.")
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
    print("extern uintptr_t dispatch_table[360];")
    print("")


def emit_handler(row, transition, args):
    entry = row["entry"]
    name = f"op_entry_{int(entry):03d}"
    klass = row.get("class", "")
    events = row.get("events", "0")
    target = row.get("target", "")
    shape = row.get("shape", "")
    delta = row.get("delta", "")
    validation = row.get("validation", "")
    print(f"static VMOpResult {name}(VMState *vm) {{")
    print("    VMOpResult r = { .next_entry = -1, .slot = 0xffffffffu };")
    print("    uint32_t state0 = vm->state;")
    print("    uint32_t flags0 = vm->flags;")
    print("    uint8_t byte0 = vm->byte;")
    print(
        f"    /* entry={entry}, native={target}, class={klass}, events={events}, "
        f"shape={shape or '-'}, delta={delta or '-'} */"
    )
    if row.get("operand_layout"):
        print(f"    /* operands: {c_comment(clip(row['operand_layout'], args.max_comment_len))} */")
    if row.get("ip_reads"):
        print(f"    /* native IP reads: {c_comment(clip(row['ip_reads'], args.max_comment_len))} */")

    state_expr = transition.get(entry, {}).get("final_state_expr", "") or final_expr_from_chain(row.get("state_ir", ""))
    emit_expr_assignment("vm->state", state_expr, args.max_expr_len)

    flag_expr = final_expr_from_chain(row.get("flag_ir", ""))
    emit_expr_assignment("vm->flags", flag_expr, args.max_expr_len)

    slot_expr = single_expr(row.get("dispatch_slot_ir", ""))
    if slot_expr and is_complete_expr(slot_expr, args.max_expr_len):
        print(f"    r.slot = (uint32_t)({c_expr(slot_expr)});")
    elif row.get("dispatch_slot_ir"):
        print(f"    /* slot variants: {c_comment(clip(c_expr(row['dispatch_slot_ir']), args.max_comment_len))} */")

    ip_advance = constant_ip_advance(row.get("ip_advance_ir", ""))
    if ip_advance is None:
        ip_advance = parse_delta(delta)
    update = fmt_ip_update(ip_advance)
    if update:
        print(f"    {update}")
    elif row.get("ip_advance_ir"):
        print(f"    /* ip advance variants: {c_comment(row['ip_advance_ir'])} */")

    dispatch_note = likely_dispatch_comment(row)
    if dispatch_note:
        print(f"    /* dispatch: {c_comment(clip(c_expr(dispatch_note), args.max_comment_len))} */")
    if row.get("top_targets"):
        print(f"    /* observed top targets: {c_comment(clip(row['top_targets'], args.max_comment_len))} */")
    if validation:
        print(f"    /* validation: {c_comment(clip(validation, args.max_comment_len))} */")
    if klass in {"unobserved_static", "target_only"}:
        print("    /* No direct source-row execution in current dynamic bytecode traces. */")
    print("    return r;")
    print("}")
    print("")


def selected_handlers(rows, args):
    if args.all:
        return rows
    if args.entry:
        wanted = {str(int(value, 0)) for value in args.entry}
        return [row for row in rows if row["entry"] in wanted]
    rows = [row for row in rows if int(row.get("events") or 0) > 0]
    rows.sort(key=lambda row: (-int(row.get("events") or 0), int(row["entry"])))
    return rows[:args.limit]


def emit_dispatch_table(rows):
    print("static VMOpResult vm_call_handler(int entry, VMState *vm) {")
    print("    switch (entry) {")
    for row in rows:
        entry = int(row["entry"])
        print(f"    case {entry}: return op_entry_{entry:03d}(vm);")
    print("    default: return (VMOpResult){ .next_entry = -1, .slot = 0xffffffffu };")
    print("    }")
    print("}")


def main():
    parser = argparse.ArgumentParser(description="Render VM dispatch-entry semantics as C-like handler functions.")
    parser.add_argument("--microcode", default="dumps/vmtail-wide-1m-w16/vm_microcode_catalog.tsv")
    parser.add_argument("--transition-model", default="dumps/vmtail-wide-1m-w16/vm_transition_model.tsv")
    parser.add_argument("--limit", type=int, default=80)
    parser.add_argument("--entry", action="append", default=[])
    parser.add_argument("--all", action="store_true")
    parser.add_argument("--max-expr-len", type=int, default=360)
    parser.add_argument("--max-comment-len", type=int, default=260)
    args = parser.parse_args()

    rows = list(read_tsv(args.microcode))
    rows.sort(key=lambda row: int(row["entry"]))
    transition = load_by(args.transition_model, "entry")
    chosen = selected_handlers(rows, args)

    emit_preamble()
    for row in chosen:
        emit_handler(row, transition, args)
    emit_dispatch_table(chosen)

    classes = Counter(row.get("class", "") for row in chosen)
    print(
        f"handler_pseudocode_entries={len(chosen)} classes="
        + ",".join(f"{key}:{value}" for key, value in classes.most_common()),
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
