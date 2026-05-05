#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from collections import defaultdict
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")


def parse_hex(value, default=0):
    if value is None:
        return default
    text = str(value).strip()
    if not text or text == "-":
        return default
    return int(text, 0)


def read_tsv(path):
    with open(path, newline="") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def c_comment(text):
    return str(text).replace("*/", "* /")


def ident(row):
    source = row.get("source_entry", "") or "unknown"
    start = row.get("synthetic_start_vm_ip", "0").replace("0x", "")
    slot = row.get("ret_slot", "ret")
    target = row.get("patched_ret_eac_off", "0").replace("0x", "")
    return f"native_retpatch_entry_{source}_{start}_{slot}_{target}"


def parse_insns(row):
    insns = []
    for item in (row.get("first_insns", "") or "").split(" | "):
        item = item.strip()
        if not item:
            continue
        if ":" not in item:
            continue
        addr_text, text = item.split(":", 1)
        insns.append((parse_hex(addr_text), text.strip()))
    return insns


STACK_LOAD_RE = re.compile(r"\bmov\s+([^,]*\(%rsp\)),%([re]?[abcd]x|[er]si|[er]di|r1[0-5]|r[89])\b")
STACK_ZERO_RE = re.compile(r"\bmovl\s+\$0x0,([^,]*\(%rsp\))\b")
RETVAL_PATTERNS = [
    (re.compile(r"\bxor\s+%eax,%eax\b"), "return_eax_zero"),
    (re.compile(r"\bmov\s+\$0x1,%al\b"), "return_al_one"),
    (re.compile(r"\bmov\s+%ebx,%eax\b"), "return_eax_from_ebx"),
]


def classify(row, insns):
    texts = [text for _, text in insns]
    ret_addrs = [addr for addr, text in insns if text.split(None, 1)[0].startswith("ret")]
    has_cookie = any("%fs:0x28" in text or "__stack_chk_fail" in text for text in texts)
    has_prologue = bool(texts[:4]) and texts[0].startswith("push") and any("sub $" in text and "%rsp" in text for text in texts[:6])
    has_epilogue = bool(ret_addrs) and any(text.startswith("add $") and "%rsp" in text for text in texts)
    has_initial_padding = bool(texts[:4]) and all(
        text.startswith("mov %") and text.split(",", 1)[0][4:] == text.split(",", 1)[1]
        for text in texts[: min(4, len(texts))]
        if "," in text
    )

    if row.get("ret_seen") == "yes" and has_epilogue:
        shape = "bounded_epilogue_ret"
    elif row.get("ret_seen") == "yes":
        shape = "bounded_ret"
    elif has_prologue:
        shape = "native_function_or_trampoline_entry"
    else:
        shape = "native_window_without_bounded_ret"

    retval = "return_value_unknown_or_preserved"
    for regex, label in RETVAL_PATTERNS:
        if any(regex.search(text) for text in texts):
            retval = label
            break
    if retval == "return_value_unknown_or_preserved":
        for text in texts:
            match = STACK_LOAD_RE.search(text)
            if match and match.group(2) == "eax":
                retval = f"return_eax_from_stack_{match.group(1)}"
                break

    stack_loads = []
    stack_zeros = []
    for text in texts:
        match = STACK_LOAD_RE.search(text)
        if match:
            stack_loads.append(f"{match.group(2)}<-{match.group(1)}")
        match = STACK_ZERO_RE.search(text)
        if match:
            stack_zeros.append(match.group(1))

    return {
        "shape": shape,
        "ret_addr": f"0x{ret_addrs[0]:x}" if ret_addrs else "0x0",
        "has_cookie": "yes" if has_cookie else "no",
        "has_initial_padding": "yes" if has_initial_padding else "no",
        "retval": retval,
        "stack_loads": ", ".join(stack_loads) or "-",
        "stack_zeros": ", ".join(stack_zeros) or "-",
    }


def emit_preamble():
    print("/*")
    print(" * Native return-patch target pseudocode.")
    print(" *")
    print(" * This file models the native .text offsets installed by VM return-patch")
    print(" * handlers. The VM bytecode program calls vm_native_ret_patch_tail(...);")
    print(" * this artifact makes those native targets inspectable as C-shaped helper")
    print(" * functions and a dispatcher. It is an analysis artifact, not ABI-complete")
    print(" * native decompilation.")
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
    print("typedef struct VMNativeRetPatchEvent {")
    print("    uint64_t vm_ip;")
    print("    uint32_t ret0;")
    print("    uint32_t ret1;")
    print("    uint16_t stack_off;")
    print("    uint32_t flags;")
    print("} VMNativeRetPatchEvent;")
    print("")
    print("static void vm_note_native_ret_patch_target(VMState *vm, const VMNativeRetPatchEvent *event, uint32_t target, const char *shape) {")
    print("    (void)vm;")
    print("    (void)event;")
    print("    (void)target;")
    print("    (void)shape;")
    print("}")
    print("")
    print("static void vm_note_unknown_native_ret_patch_target(VMState *vm, const VMNativeRetPatchEvent *event, uint32_t target, uint32_t ret_slot) {")
    print("    (void)vm;")
    print("    (void)event;")
    print("    (void)target;")
    print("    (void)ret_slot;")
    print("}")
    print("")


def emit_target_function(row):
    insns = parse_insns(row)
    cls = classify(row, insns)
    target = parse_hex(row.get("patched_ret_eac_off"))
    name = ident(row)
    print(f"static void {name}(VMState *vm, const VMNativeRetPatchEvent *event) {{")
    print(f"    /* source=entry_{c_comment(row.get('source_entry', '?'))}; vm_ip={c_comment(row.get('synthetic_start_vm_ip', '?'))}; slot={c_comment(row.get('ret_slot', '?'))}; target=0x{target:x} */")
    print(f"    /* evidence: rows={c_comment(row.get('rows', '?'))}; kind={c_comment(row.get('ret_patch_kind', '?'))}; seeds={c_comment(row.get('seed_mix', '-'))}; relation={c_comment(row.get('relation_mix', '-'))} */")
    print(f"    /* coarse native shape: {cls['shape']}; first_ret={cls['ret_addr']}; cookie_check={cls['has_cookie']}; padding={cls['has_initial_padding']}; retval={c_comment(cls['retval'])} */")
    print(f"    /* stack loads: {c_comment(cls['stack_loads'])}; stack zeroes: {c_comment(cls['stack_zeros'])} */")
    print("    /* native window:")
    for addr, text in insns:
        print(f"     *   0x{addr:x}: {c_comment(text)}")
    print("     */")
    print(f"    vm_note_native_ret_patch_target(vm, event, 0x{target:x}u, \"{cls['shape']}\");")
    print("}")
    print("")


def emit_dispatch(rows):
    grouped = defaultdict(list)
    for row in rows:
        grouped[parse_hex(row.get("patched_ret_eac_off"))].append(row)

    print("static int vm_dispatch_one_native_ret_patch_target(VMState *vm, const VMNativeRetPatchEvent *event, uint32_t target, uint32_t ret_slot) {")
    print("    switch (target) {")
    for target in sorted(grouped):
        print(f"    case 0x{target:x}u:")
        for row in sorted(grouped[target], key=lambda item: (parse_hex(item.get("synthetic_start_vm_ip")), item.get("ret_slot", ""))):
            start = parse_hex(row.get("synthetic_start_vm_ip"))
            slot_num = 2 if row.get("ret_slot") == "ret2" else 1
            print(f"        if (event->vm_ip == 0x{start:x}ull && ret_slot == {slot_num}u) {{")
            print(f"            {ident(row)}(vm, event);")
            print("            return 1;")
            print("        }")
        print("        break;")
    print("    default:")
    print("        break;")
    print("    }")
    print("    vm_note_unknown_native_ret_patch_target(vm, event, target, ret_slot);")
    print("    return 0;")
    print("}")
    print("")
    print("int vm_native_ret_patch_target_dispatch(VMState *vm, uint64_t vm_ip, uint32_t ret0, uint32_t ret1, uint16_t stack_off, uint32_t flags) {")
    print("    VMNativeRetPatchEvent event = { vm_ip, ret0, ret1, stack_off, flags };")
    print("    int hits = 0;")
    print("    if (ret0 != 0u) {")
    print("        hits += vm_dispatch_one_native_ret_patch_target(vm, &event, ret0, 1u);")
    print("    }")
    print("    if (ret1 != 0u) {")
    print("        hits += vm_dispatch_one_native_ret_patch_target(vm, &event, ret1, 2u);")
    print("    }")
    print("    return hits;")
    print("}")
    print("")
    print("#ifndef VM_NATIVE_RET_PATCH_TAIL_DECL_ONLY")
    print("void vm_native_ret_patch_tail(VMState *vm, uint64_t vm_ip, uint32_t ret0, uint32_t ret1, uint16_t stack_off, uint32_t flags) {")
    print("    (void)vm_native_ret_patch_target_dispatch(vm, vm_ip, ret0, ret1, stack_off, flags);")
    print("}")
    print("#endif")


def main():
    parser = argparse.ArgumentParser(description="Emit C-shaped native ret-patch target helpers from the ret-patch atlas.")
    parser.add_argument("--atlas", default=str(TRACE_DIR / "vm_synthetic_gap_ret_patch_native_target_atlas.tsv"))
    args = parser.parse_args()

    rows = list(read_tsv(args.atlas))
    rows.sort(key=lambda row: (
        parse_hex(row.get("source_entry")),
        parse_hex(row.get("synthetic_start_vm_ip")),
        row.get("ret_slot", ""),
        parse_hex(row.get("patched_ret_eac_off")),
    ))

    emit_preamble()
    for row in rows:
        emit_target_function(row)
    emit_dispatch(rows)
    print(f"native_ret_patch_target_functions={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
