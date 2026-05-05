#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path

from vm_pseudocode_dump import c_comment, clip, read_tsv
from vm_synthetic_span_catalog import load_tail_ip_advances


U8_RE = re.compile(r"\bb([0-9]+)\b")
U16_RE = re.compile(r"\bu16_([0-9]+)\b")
U32_RE = re.compile(r"\bu32_([0-9]+)\b")
HEX_RE = re.compile(r"(?<![A-Za-z0-9_])0x[0-9a-fA-F]+(?![A-Za-z0-9_])")


def load_by(path, key):
    rows = {}
    if not path or not Path(path).exists():
        return rows
    for row in read_tsv(path):
        value = row.get(key, "")
        if value:
            rows[value] = row
    return rows


def load_ret_patch_summaries(path):
    by_entry = defaultdict(list)
    if not path or not Path(path).exists():
        return {}
    for row in read_tsv(path):
        entry = row.get("source_entry", "")
        if entry:
            by_entry[entry].append(row)
    return by_entry


def load_static_models(path):
    if not path or not Path(path).exists():
        return {}
    return {row["entry"]: row for row in read_tsv(path) if row.get("entry")}


def load_static_only_queue(path):
    if not path or not Path(path).exists():
        return {}
    return {row["entry"]: row for row in read_tsv(path) if row.get("entry")}


def counter_text(counter, limit=6):
    return ",".join(f"{key}:{value}" for key, value in counter.most_common(limit)) or "-"


def c_expr(expr):
    expr = (expr or "").strip()
    expr = expr.replace("state0", "state0")
    expr = expr.replace("flags0", "flags0")
    expr = expr.replace("byte0", "byte0")
    expr = U32_RE.sub(lambda match: f"U32(vm->ip + 0x{int(match.group(1)):x})", expr)
    expr = U16_RE.sub(lambda match: f"U16(vm->ip + 0x{int(match.group(1)):x})", expr)
    expr = U8_RE.sub(lambda match: f"U8(vm->ip + 0x{int(match.group(1)):x})", expr)
    expr = re.sub(r"(?<!dispatch_)table\[", "dispatch_table[", expr)
    expr = HEX_RE.sub(lambda match: f"{match.group(0)}u", expr)
    return expr


def static_model_slot_c_expr(expr):
    expr = (expr or "").strip()
    if not expr or "g3_mask" in expr or "g5_mask" in expr:
        return ""
    expr = re.sub(
        r"\bs16\(ip\+([0-9]+)\)",
        lambda match: f"((int32_t)S16(vm->ip + 0x{int(match.group(1)):x}u))",
        expr,
    )
    expr = re.sub(
        r"\bu16\(ip\+([0-9]+)\)",
        lambda match: f"U16(vm->ip + 0x{int(match.group(1)):x}u)",
        expr,
    )
    return c_expr(expr)


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


def slot_is_table_offset(expr):
    # Normal VM dispatch expressions are byte offsets into the dispatch table.
    # Long-control operands are the direct-entry exception and are handled above.
    return bool(expr)


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


def is_long_control_handler(row):
    operands = row.get("long_branch_operands", "")
    return "target_u32@+0" in operands and "delta_u32@+4" in operands


def is_sampled_operand_only_handler(row):
    return row.get("class", "") == "sampled_operand_lifted" and bool(row.get("sampled_operand_ir", ""))


def ret_patch_base_class(row):
    source = row.get("ret_patch_base_source", "")
    if source.startswith("postcall_map_"):
        return "mapped_frame_qword"
    if source:
        return "inferred_image_base"
    return "unknown_base"


def emit_ret_patch_handler_body(row, ret_patch_rows, args):
    starts = Counter(item.get("synthetic_start_vm_ip", "") for item in ret_patch_rows)
    patched = Counter(item.get("patched_ret_eac_off", "") for item in ret_patch_rows)
    patched2 = Counter(item.get("patched_ret2_eac_off", "") for item in ret_patch_rows if item.get("patched_ret2_eac_off", ""))
    seeds = Counter(item.get("seed_quality", "") for item in ret_patch_rows)
    base_sources = Counter(ret_patch_base_class(item) for item in ret_patch_rows)
    relations = Counter(item.get("ret_patch_relation", "") for item in ret_patch_rows)
    relations2 = Counter(item.get("ret_patch2_relation", "") for item in ret_patch_rows if item.get("ret_patch2_relation", ""))
    sections = Counter(item.get("patched_ret_section", "") for item in ret_patch_rows)
    sections2 = Counter(item.get("patched_ret2_section", "") for item in ret_patch_rows if item.get("patched_ret2_section", ""))
    formulas = Counter(item.get("ret_patch_formula", "") for item in ret_patch_rows)
    stack_offsets = Counter(item.get("stack_write_offset", "") for item in ret_patch_rows)
    kinds = Counter(item.get("ret_patch_kind", "") or "single_stack_return" for item in ret_patch_rows)
    double_stack = kinds.most_common(1)[0][0] == "double_stack_return"

    print(
        f"    /* native return-patch thunk: the observed entry_{row.get('entry', '?')} body ends in a native ret; "
        "the normal dispatch decode that follows belongs to the next native handler entry. */"
    )
    print(
        f"    /* ret-patch evidence: rows={len(ret_patch_rows)}, "
        f"kind={c_comment(counter_text(kinds, args.ret_patch_comment_items))}, "
        f"starts={c_comment(counter_text(starts, args.ret_patch_comment_items))}, "
        f"patched_text={c_comment(counter_text(patched, args.ret_patch_comment_items))}, "
        f"patched_text2={c_comment(counter_text(patched2, args.ret_patch_comment_items))}, "
        f"stack_offsets={c_comment(counter_text(stack_offsets, args.ret_patch_comment_items))}, "
        f"sections={c_comment(counter_text(sections, args.ret_patch_comment_items))}, "
        f"sections2={c_comment(counter_text(sections2, args.ret_patch_comment_items))}, "
        f"seed={c_comment(counter_text(seeds, args.ret_patch_comment_items))}, "
        f"base={c_comment(counter_text(base_sources, args.ret_patch_comment_items))}, "
        f"relation={c_comment(counter_text(relations, args.ret_patch_comment_items))}, "
        f"relation2={c_comment(counter_text(relations2, args.ret_patch_comment_items))} */"
    )
    if formulas:
        print(f"    /* ret-patch formula: {c_comment(clip(formulas.most_common(1)[0][0], args.max_comment_len))} */")
    if double_stack:
        print("    uint32_t native_ret_off0 = U32(vm->ip + 0x6);")
        print("    uint32_t native_ret_off1 = U32(vm->ip + 0x0);")
        print("    uint16_t native_stack_off = U16(vm->ip + 0x4);")
        print("    r.slot = native_ret_off0;")
        print("    r.next_entry = -1;")
        print("    /* r.slot carries the first native text/file offset for this analysis artifact, not a dispatch-table slot. */")
        print("    /* native effect: *(uint64_t *)(rsp + native_stack_off) = frame_qword_0xbb + native_ret_off0; */")
        print("    /* native effect: *(uint64_t *)(rsp + native_stack_off + 8) = frame_qword_0xbb + native_ret_off1; ret */")
        print("    (void)native_ret_off1;")
        print("    (void)native_stack_off;")
    else:
        print("    uint32_t native_ret_off = U32(vm->ip + 0x0);")
        print("    uint16_t native_stack_off = U16(vm->ip + 0x4);")
        print("    r.slot = native_ret_off;")
        print("    r.next_entry = -1;")
        print("    /* r.slot carries the native text/file offset for this analysis artifact, not a dispatch-table slot. */")
        print("    /* native effect: *(uint64_t *)(rsp + native_stack_off) = frame_qword_0xbb + native_ret_off; ret */")
        print("    (void)native_stack_off;")
    if row.get("sampled_operand_ir"):
        print(f"    /* sampled sidecars remain bytecode-layer evidence: {c_comment(clip(row['sampled_operand_ir'], args.max_comment_len))} */")
    if row.get("validation"):
        print(f"    /* validation: {c_comment(clip(row['validation'], args.max_comment_len))} */")
    print("    return r;")


def emit_preamble():
    print("/*")
    print(" * VM handler pseudocode.")
    print(" * These functions are a C-like static reconstruction of dispatch-entry semantics.")
    print(" * They are syntax-checkable C, but still an analysis artifact rather than drop-in source.")
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
    print("#define S16(p) (*(const int16_t *)(p))")
    print("#define U16(p) (*(const uint16_t *)(p))")
    print("#define U32(p) (*(const uint32_t *)(p))")
    print("#define mask32(x) ((uint32_t)(x))")
    print("#define mask16(x) ((uint16_t)(x))")
    print("#define mask8(x)  ((uint8_t)(x))")
    print("")
    print("extern uintptr_t dispatch_table[360];")
    print("")
    print("static int vm_entry_from_slot_index(uint32_t slot) {")
    print("    return slot < 360u ? (int)slot : -1;")
    print("}")
    print("")
    print("static int vm_entry_from_table_offset(uint32_t slot) {")
    print("    return ((slot & 7u) == 0u && (slot >> 3) < 360u) ? (int)(slot >> 3) : -1;")
    print("}")
    print("")
    print("static int64_t signed_vm_delta_u32(uint32_t raw) {")
    print("    return (raw & 0x80000000u) ? -(int64_t)(raw & 0x7fffffffu) : (int64_t)raw;")
    print("}")
    print("")


def emit_handler(row, transition, tail_ip_advances, ret_patch_summaries, tier0_models, tier1_models, tier2_models, tier3_models, tier4_models, tier5_models, static_only_queue, args):
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
    ret_patch_rows = ret_patch_summaries.get(entry, [])
    if ret_patch_rows:
        emit_ret_patch_handler_body(row, ret_patch_rows, args)
        print("}")
        print("")
        return
    if row.get("operand_layout"):
        print(f"    /* operands: {c_comment(clip(row['operand_layout'], args.max_comment_len))} */")
    if row.get("ip_reads"):
        print(f"    /* native IP reads: {c_comment(clip(row['ip_reads'], args.max_comment_len))} */")
    queue_row = static_only_queue.get(entry, {})
    if queue_row:
        print(
            f"    /* static-only queue: rank={c_comment(queue_row.get('rank', '-'))}, "
            f"tier={c_comment(queue_row.get('priority_class', '-'))}, "
            f"sidecar={c_comment(queue_row.get('sidecar', '-'))}, "
            f"funcs={c_comment(clip(queue_row.get('function_names', '-'), args.max_comment_len))}, "
            f"span={c_comment(queue_row.get('span_bytes', '-'))}, "
            f"action={c_comment(queue_row.get('next_action', '-'))} */"
        )
    tier0_model = tier0_models.get(entry, {})
    if tier0_model:
        print(
            f"    /* tier0 static model: rank={c_comment(tier0_model.get('rank', '-'))}, "
            f"retdec={c_comment(tier0_model.get('function', '-'))}, "
            f"slot_status={c_comment(tier0_model.get('slot_status', '-'))}, "
            f"ip_advance={c_comment(tier0_model.get('ip_advance', '-'))} */"
        )
        if tier0_model.get("effects"):
            print(f"    /* tier0 effects: {c_comment(clip(tier0_model['effects'], args.max_comment_len))} */")
    tier1_model = tier1_models.get(entry, {})
    if tier1_model:
        print(
            f"    /* tier1 static model: rank={c_comment(tier1_model.get('rank', '-'))}, "
            f"retdec={c_comment(tier1_model.get('function', '-'))}, "
            f"slot_status={c_comment(tier1_model.get('slot_status', '-'))}, "
            f"ip_advance={c_comment(tier1_model.get('ip_advance', '-'))} */"
        )
        if tier1_model.get("effects"):
            print(f"    /* tier1 effects: {c_comment(clip(tier1_model['effects'], args.max_comment_len))} */")
    tier2_model = tier2_models.get(entry, {})
    if tier2_model:
        print(
            f"    /* tier2 split model: rank={c_comment(tier2_model.get('rank', '-'))}, "
            f"retdec={c_comment(tier2_model.get('function', '-'))}, "
            f"split={c_comment(tier2_model.get('split_status', '-'))}, "
            f"slot_status={c_comment(tier2_model.get('slot_status', '-'))}, "
            f"ip_advance={c_comment(tier2_model.get('ip_advance', '-'))} */"
        )
        if tier2_model.get("effects"):
            print(f"    /* tier2 effects: {c_comment(clip(tier2_model['effects'], args.max_comment_len))} */")
    tier3_model = tier3_models.get(entry, {})
    if tier3_model:
        print(
            f"    /* tier3 shared model: rank={c_comment(tier3_model.get('rank', '-'))}, "
            f"retdec={c_comment(tier3_model.get('function', '-'))}, "
            f"share={c_comment(tier3_model.get('share_status', '-'))}, "
            f"slot_status={c_comment(tier3_model.get('slot_status', '-'))}, "
            f"ip_advance={c_comment(tier3_model.get('ip_advance', '-'))} */"
        )
        if tier3_model.get("effects"):
            print(f"    /* tier3 effects: {c_comment(clip(tier3_model['effects'], args.max_comment_len))} */")
    tier4_model = tier4_models.get(entry, {})
    if tier4_model:
        print(
            f"    /* tier4 call/ret model: rank={c_comment(tier4_model.get('rank', '-'))}, "
            f"retdec={c_comment(tier4_model.get('function', '-'))}, "
            f"callret={c_comment(tier4_model.get('callret_status', '-'))}, "
            f"slot_status={c_comment(tier4_model.get('slot_status', '-'))}, "
            f"ip_advance={c_comment(tier4_model.get('ip_advance', '-'))} */"
        )
        if tier4_model.get("effects"):
            print(f"    /* tier4 effects: {c_comment(clip(tier4_model['effects'], args.max_comment_len))} */")
    tier5_model = tier5_models.get(entry, {})
    if tier5_model:
        print(
            f"    /* tier5 large model: rank={c_comment(tier5_model.get('rank', '-'))}, "
            f"retdec={c_comment(tier5_model.get('function', '-'))}, "
            f"large={c_comment(tier5_model.get('large_status', '-'))}, "
            f"slot_status={c_comment(tier5_model.get('slot_status', '-'))}, "
            f"ip_advance={c_comment(tier5_model.get('ip_advance', '-'))} */"
        )
        if tier5_model.get("effects"):
            print(f"    /* tier5 effects: {c_comment(clip(tier5_model['effects'], args.max_comment_len))} */")
    tr = transition.get(entry, {})
    if tr.get("decode_signature"):
        print(f"    /* decode signature: {c_comment(clip(tr['decode_signature'], args.max_comment_len))} */")
    if tr.get("dispatch_skeleton"):
        print(f"    /* dispatch skeleton: {c_comment(clip(tr['dispatch_skeleton'], args.max_comment_len))} */")

    state_expr = tr.get("final_state_expr", "") or final_expr_from_chain(row.get("state_ir", ""))
    emit_expr_assignment("vm->state", state_expr, args.max_expr_len)

    flag_expr = final_expr_from_chain(row.get("flag_ir", ""))
    emit_expr_assignment("vm->flags", flag_expr, args.max_expr_len)

    if is_long_control_handler(row):
        print("    r.slot = U32(vm->ip + 0x0);")
        print("    r.next_entry = vm_entry_from_slot_index(r.slot);")
        print("    vm->ip += signed_vm_delta_u32(U32(vm->ip + 0x4));")
        print("    /* long-control operands: target_u32@+0, signed delta_u32@+4 */")
    elif is_sampled_operand_only_handler(row):
        print("    /* sampled-operand target/delta sidecar has no generic handler formula yet. */")
        print("    /* concrete observed sampled-operand rows are rendered in the bytecode program layer. */")
    else:
        slot_expr = single_expr(row.get("dispatch_slot_ir", ""))
        if slot_expr and is_complete_expr(slot_expr, args.max_expr_len):
            print(f"    r.slot = (uint32_t)({c_expr(slot_expr)});")
            helper = "vm_entry_from_table_offset" if slot_is_table_offset(slot_expr) else "vm_entry_from_slot_index"
            print(f"    r.next_entry = {helper}(r.slot);")
        elif row.get("dispatch_slot_ir"):
            print(f"    /* slot variants: {c_comment(clip(c_expr(row['dispatch_slot_ir']), args.max_comment_len))} */")
        elif tier0_model:
            tier0_slot_expr = static_model_slot_c_expr(tier0_model.get("slot_expr", ""))
            if tier0_slot_expr and is_complete_expr(tier0_slot_expr, args.max_expr_len):
                print(f"    r.slot = (uint32_t)({tier0_slot_expr});")
                print("    r.next_entry = vm_entry_from_table_offset(r.slot);")
                print("    /* tier0 static slot recovered from the RetDec single-function model; dynamic source-row validation is still absent. */")
            elif tier0_model.get("slot_expr"):
                print(
                    f"    /* tier0 slot expression not executable in VMState model: "
                    f"{c_comment(clip(tier0_model['slot_expr'], args.max_comment_len))} */"
                )
        elif tier1_model:
            tier1_slot_expr = static_model_slot_c_expr(tier1_model.get("slot_expr", ""))
            if (
                tier1_model.get("slot_status") == "retdec_dispatch_table_slot"
                and tier1_slot_expr
                and is_complete_expr(tier1_slot_expr, args.max_expr_len)
            ):
                print(f"    r.slot = (uint32_t)({tier1_slot_expr});")
                print("    r.next_entry = vm_entry_from_table_offset(r.slot);")
                print("    /* tier1 static slot recovered from a clean RetDec dispatch-table tail; dynamic source-row validation is still absent. */")
            elif tier1_model.get("slot_expr"):
                print(
                    f"    /* tier1 slot expression kept comment-only: "
                    f"{c_comment(clip(tier1_model['slot_expr'], args.max_comment_len))} */"
                )
        elif tier2_model:
            tier2_slot_expr = static_model_slot_c_expr(tier2_model.get("slot_expr", ""))
            if (
                tier2_model.get("slot_status") == "retdec_dispatch_table_slot"
                and tier2_slot_expr
                and is_complete_expr(tier2_slot_expr, args.max_expr_len)
            ):
                print(f"    r.slot = (uint32_t)({tier2_slot_expr});")
                print("    r.next_entry = vm_entry_from_table_offset(r.slot);")
                print("    /* tier2 static slot recovered from a split RetDec primary tail; dynamic source-row validation is still absent. */")
            elif tier2_model.get("slot_expr"):
                print(
                    f"    /* tier2 slot expression kept comment-only: "
                    f"{c_comment(clip(tier2_model['slot_expr'], args.max_comment_len))} */"
                )
        elif tier3_model:
            tier3_slot_expr = static_model_slot_c_expr(tier3_model.get("slot_expr", ""))
            if (
                tier3_model.get("slot_status") == "retdec_dispatch_table_slot"
                and tier3_slot_expr
                and is_complete_expr(tier3_slot_expr, args.max_expr_len)
            ):
                print(f"    r.slot = (uint32_t)({tier3_slot_expr});")
                print("    r.next_entry = vm_entry_from_table_offset(r.slot);")
                print("    /* tier3 static slot recovered from a shared RetDec primary tail; dynamic source-row validation is still absent. */")
            elif tier3_model.get("slot_expr"):
                print(
                    f"    /* tier3 slot expression kept comment-only: "
                    f"{c_comment(clip(tier3_model['slot_expr'], args.max_comment_len))} */"
                )
        elif tier4_model:
            tier4_slot_expr = static_model_slot_c_expr(tier4_model.get("slot_expr", ""))
            if (
                tier4_model.get("slot_status") == "retdec_dispatch_table_slot"
                and tier4_slot_expr
                and is_complete_expr(tier4_slot_expr, args.max_expr_len)
            ):
                print(f"    r.slot = (uint32_t)({tier4_slot_expr});")
                print("    r.next_entry = vm_entry_from_table_offset(r.slot);")
                print("    /* tier4 static slot recovered from a call/ret RetDec primary tail; dynamic source-row validation is still absent. */")
            elif tier4_model.get("slot_expr"):
                print(
                    f"    /* tier4 slot expression kept comment-only: "
                    f"{c_comment(clip(tier4_model['slot_expr'], args.max_comment_len))} */"
                )
        elif tier5_model:
            tier5_slot_expr = static_model_slot_c_expr(tier5_model.get("slot_expr", ""))
            if (
                tier5_model.get("slot_status") == "retdec_dispatch_table_slot"
                and tier5_slot_expr
                and is_complete_expr(tier5_slot_expr, args.max_expr_len)
            ):
                print(f"    r.slot = (uint32_t)({tier5_slot_expr});")
                print("    r.next_entry = vm_entry_from_table_offset(r.slot);")
                print("    /* tier5 static slot recovered from a large RetDec primary tail; dynamic source-row validation is still absent. */")
            elif tier5_model.get("slot_expr"):
                print(
                    f"    /* tier5 slot expression kept comment-only: "
                    f"{c_comment(clip(tier5_model['slot_expr'], args.max_comment_len))} */"
                )

        ip_advance = constant_ip_advance(row.get("ip_advance_ir", ""))
        ip_source = "microcode"
        if ip_advance is None:
            ip_advance = parse_delta(delta)
            ip_source = "observed_delta"
        if ip_advance is None and entry in tail_ip_advances:
            ip_advance = int(tail_ip_advances[entry]["advance"])
            ip_source = tail_ip_advances[entry]["site"]
        update = fmt_ip_update(ip_advance)
        if update:
            print(f"    {update}")
            if ip_source not in {"microcode", "observed_delta"}:
                print(f"    /* IP advance recovered from native tail site: {c_comment(ip_source)} */")
        elif row.get("ip_advance_ir"):
            print(f"    /* ip advance variants: {c_comment(row['ip_advance_ir'])} */")
        elif entry in tail_ip_advances:
            print(f"    /* native tail IP advance candidate: {tail_ip_advances[entry]['advance']} at {tail_ip_advances[entry]['site']} */")

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
    parser.add_argument("--handler-table", default="dumps/vmtail-wide-1m-w16/vm_handler_table.tsv")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--tail-window", type=lambda value: int(value, 0), default=0x80)
    parser.add_argument("--sampled-ret-patch-probe", dest="sampled_ret_patch_probe", default="dumps/vmtail-wide-1m-w16/vm_synthetic_gap_sampled_ret_patch_probe.tsv")
    parser.add_argument("--source299-ret-patch-probe", dest="sampled_ret_patch_probe", default=argparse.SUPPRESS)
    parser.add_argument("--limit", type=int, default=80)
    parser.add_argument("--entry", action="append", default=[])
    parser.add_argument("--all", action="store_true")
    parser.add_argument("--max-expr-len", type=int, default=360)
    parser.add_argument("--max-comment-len", type=int, default=260)
    parser.add_argument("--ret-patch-comment-items", type=int, default=6)
    parser.add_argument("--static-only-tier0-models", default="dumps/vmtail-wide-1m-w16/vm_static_only_tier0_handler_models.tsv")
    parser.add_argument("--static-only-tier1-models", default="dumps/vmtail-wide-1m-w16/vm_static_only_tier1_handler_models.tsv")
    parser.add_argument("--static-only-tier2-models", default="dumps/vmtail-wide-1m-w16/vm_static_only_tier2_split_models.tsv")
    parser.add_argument("--static-only-tier3-models", default="dumps/vmtail-wide-1m-w16/vm_static_only_tier3_shared_models.tsv")
    parser.add_argument("--static-only-tier4-models", default="dumps/vmtail-wide-1m-w16/vm_static_only_tier4_callret_models.tsv")
    parser.add_argument("--static-only-tier5-models", default="dumps/vmtail-wide-1m-w16/vm_static_only_tier5_large_models.tsv")
    parser.add_argument("--static-only-queue", default="dumps/vmtail-wide-1m-w16/vm_static_only_handler_queue.tsv")
    args = parser.parse_args()

    rows = list(read_tsv(args.microcode))
    rows.sort(key=lambda row: int(row["entry"]))
    transition = load_by(args.transition_model, "entry")
    tail_ip_advances = load_tail_ip_advances(args.handler_table, args.eac, args.tail_window)
    ret_patch_summaries = load_ret_patch_summaries(args.sampled_ret_patch_probe)
    tier0_models = load_static_models(args.static_only_tier0_models)
    tier1_models = load_static_models(args.static_only_tier1_models)
    tier2_models = load_static_models(args.static_only_tier2_models)
    tier3_models = load_static_models(args.static_only_tier3_models)
    tier4_models = load_static_models(args.static_only_tier4_models)
    tier5_models = load_static_models(args.static_only_tier5_models)
    static_only_queue = load_static_only_queue(args.static_only_queue)
    chosen = selected_handlers(rows, args)

    emit_preamble()
    for row in chosen:
        emit_handler(row, transition, tail_ip_advances, ret_patch_summaries, tier0_models, tier1_models, tier2_models, tier3_models, tier4_models, tier5_models, static_only_queue, args)
    emit_dispatch_table(chosen)

    classes = Counter(row.get("class", "") for row in chosen)
    print(
        f"handler_pseudocode_entries={len(chosen)} classes="
        + ",".join(f"{key}:{value}" for key, value in classes.most_common()),
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
