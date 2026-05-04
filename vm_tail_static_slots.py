#!/usr/bin/env python3
import argparse
import csv
from pathlib import Path

from capstone import CS_ARCH_X86, CS_MODE_64, Cs
from capstone.x86_const import X86_OP_MEM, X86_OP_REG


def parse_int(value):
    if value is None or value == "":
        return None
    return int(value, 0)


def make_disassembler():
    md = Cs(CS_ARCH_X86, CS_MODE_64)
    md.detail = True
    md.skipdata = True
    return md


def reg_name(insn, reg_id):
    if not reg_id:
        return ""
    return insn.reg_name(reg_id)


def read_rows(path):
    with path.open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def disassemble_region(md, eac, start, end):
    if start < 0:
        start = 0
    if end > len(eac):
        end = len(eac)
    return list(md.disasm(eac[start:end], start))


def find_target_load(insns, site, target_reg):
    if not target_reg or target_reg.startswith("*"):
        return None
    for insn in reversed(insns):
        if insn.address >= site:
            continue
        if insn.mnemonic != "mov" or len(insn.operands) != 2:
            continue
        dst, src = insn.operands
        if dst.type != X86_OP_REG or src.type != X86_OP_MEM:
            continue
        if reg_name(insn, dst.reg) != target_reg:
            continue
        mem = src.mem
        base = reg_name(insn, mem.base)
        index = reg_name(insn, mem.index)
        scale = mem.scale
        disp = mem.disp
        if index:
            expr = f"{base}+{index}*{scale}+0x{disp:x}"
        elif disp:
            expr = f"{base}+0x{disp:x}"
        else:
            expr = base
        return {
            "load_site": insn.address,
            "slot_temp": base,
            "mem_expr": expr,
        }
    return None


def find_index_add(insns, load_site, slot_temp, byte_index_reg):
    if not slot_temp or not byte_index_reg:
        return None
    for insn in reversed(insns):
        if insn.address >= load_site:
            continue
        if insn.mnemonic not in {"add", "lea"} or len(insn.operands) < 2:
            continue
        dst = insn.operands[0]
        if dst.type != X86_OP_REG or reg_name(insn, dst.reg) != slot_temp:
            continue
        for src in insn.operands[1:]:
            if src.type == X86_OP_REG and reg_name(insn, src.reg) == byte_index_reg:
                return insn.address
            if src.type == X86_OP_MEM:
                mem = src.mem
                if reg_name(insn, mem.base) == byte_index_reg:
                    return insn.address
                if reg_name(insn, mem.index) == byte_index_reg:
                    return insn.address
    return None


def infer_row(md, eac, row, window):
    source_target = parse_int(row.get("source_target"))
    site = parse_int(row.get("site"))
    target_reg = row.get("target_reg", "")
    slot_reg = row.get("slot_reg", "")
    byte_index_reg = row.get("byte_index_reg", "")
    if source_target is None or site is None:
        return ("", "", "", "", "")

    start = source_target
    if site - start > window:
        start = site - window
    insns = disassemble_region(md, eac, start, site + 8)

    if target_reg.startswith("*"):
        slot_temp = target_reg[1:]
        return ("central_indirect", f"0x{site:x}", slot_temp, byte_index_reg, "tail_memory_jmp")
    if slot_reg:
        return ("live_slot", "", slot_reg, byte_index_reg, "")

    load = find_target_load(insns, site, target_reg)
    if load is None:
        return ("no_static_load", "", "", byte_index_reg, "")
    add_site = find_index_add(insns, load["load_site"], load["slot_temp"], byte_index_reg)
    if add_site is None:
        kind = "target_load"
        add_text = ""
    else:
        kind = "consumed_slot"
        add_text = f"0x{add_site:x}"
    return (
        kind,
        f"0x{load['load_site']:x}",
        load["slot_temp"],
        byte_index_reg,
        add_text,
    )


def main():
    parser = argparse.ArgumentParser(
        description="Recover static dispatch-slot temporaries for VM tail sites."
    )
    parser.add_argument(
        "roles_tsv",
        nargs="?",
        default="dumps/vmtail-wide-1m-w16/vm_handler_tail_roles_wide_regs.tsv",
    )
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--window", type=lambda value: int(value, 0), default=0x400)
    args = parser.parse_args()

    eac = Path(args.eac).read_bytes()
    md = make_disassembler()
    print(
        "source_entry\tsource_target\tsite\tinstruction_events\t"
        "target_reg\tlive_slot_reg\tbyte_index_reg\tstatic_kind\t"
        "static_load_site\tstatic_slot_temp\tstatic_index_reg\tstatic_index_add_site\t"
        "top_targets"
    )
    for row in read_rows(Path(args.roles_tsv)):
        kind, load_site, slot_temp, index_reg, index_add = infer_row(md, eac, row, args.window)
        print(
            f"{row.get('source_entry', '')}\t{row.get('source_target', '')}\t"
            f"{row.get('site', '')}\t{row.get('instruction_events', '')}\t"
            f"{row.get('target_reg', '')}\t{row.get('slot_reg', '')}\t"
            f"{row.get('byte_index_reg', '')}\t{kind}\t{load_site}\t"
            f"{slot_temp}\t{index_reg}\t{index_add}\t{row.get('top_targets', '')}"
        )


if __name__ == "__main__":
    main()
