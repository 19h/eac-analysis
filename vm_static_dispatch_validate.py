#!/usr/bin/env python3
import argparse
import csv
import struct
from collections import Counter, defaultdict
from pathlib import Path

from capstone.x86_const import X86_OP_IMM, X86_OP_MEM, X86_OP_REG

from vm_state_static_validate import (
    FRAME_BYTE_OFF,
    FRAME_FLAGS_OFF,
    FRAME_IP_OFF,
    FRAME_STATE_OFF,
    FRAME_TABLE_OFF,
    MASK32,
    MASK64,
    Ptr,
    Unknown,
    branch_taken,
    cmp_zf,
    disassemble_region,
    eval_bin,
    is_unknown,
    make_disassembler,
    mask_for_size,
    mem_ptr,
    parse_int,
    read_skeletons,
    read_trace_rows,
    reg_of,
)


def parse_delta(text):
    if text.startswith("+0x"):
        return int(text[1:], 16)
    if text.startswith("-0x"):
        return -int(text[3:], 16)
    return int(text, 0)


def read_dispatch_table(eac_path, table_off=0xC3718, entries=360):
    data = Path(eac_path).read_bytes()
    return [struct.unpack_from("<Q", data, table_off + idx * 8)[0] for idx in range(entries)]


def read_ip(data, off, size):
    if off < 0 or off + size > len(data):
        return Unknown("ip_oob")
    return int.from_bytes(data[off:off + size], "little")


def read_table(table, off, size):
    if size != 8 or off < 0 or off % 8:
        return Unknown("table_read")
    entry = off // 8
    if entry < 0 or entry >= len(table):
        return Unknown("table_oob")
    return table[entry]


def read_mem(insn, op, regs, frame, ip_bytes, table):
    ptr = mem_ptr(insn, op, regs)
    if ptr is None:
        return Unknown("mem_ptr")
    size = op.size or 8
    if ptr.kind == "frame":
        if ptr.off == FRAME_IP_OFF and size == 8:
            return Ptr("ip", frame["ip_delta"])
        if ptr.off == FRAME_TABLE_OFF and size == 8:
            return Ptr("table", 0)
        if ptr.off == FRAME_STATE_OFF:
            return frame["state"] & mask_for_size(size)
        if ptr.off == FRAME_FLAGS_OFF:
            return frame["flags"] & mask_for_size(size)
        if ptr.off == FRAME_BYTE_OFF:
            return frame["byte"] & mask_for_size(size)
        return Unknown(f"frame_{ptr.off:x}")
    if ptr.kind == "ip":
        return read_ip(ip_bytes, ptr.off, size)
    if ptr.kind == "table":
        return read_table(table, ptr.off, size)
    return Unknown(ptr.kind)


def read_op(insn, op, regs, frame, ip_bytes, table):
    if op.type == X86_OP_IMM:
        return op.imm & MASK64
    if op.type == X86_OP_REG:
        return regs.get(reg_of(insn, op), Unknown("reg"))
    if op.type == X86_OP_MEM:
        return read_mem(insn, op, regs, frame, ip_bytes, table)
    return Unknown("op")


def write_op(insn, op, value, regs, frame):
    if op.type == X86_OP_REG:
        reg = reg_of(insn, op)
        if not reg:
            return False
        if isinstance(value, int):
            value &= mask_for_size(op.size or 8)
        regs[reg] = value
        return True
    if op.type == X86_OP_MEM:
        ptr = mem_ptr(insn, op, regs)
        if ptr is None or is_unknown(value):
            return False
        if ptr == Ptr("frame", FRAME_IP_OFF):
            if isinstance(value, Ptr) and value.kind == "ip":
                frame["ip_delta"] = value.off
                return True
            return False
        if ptr == Ptr("frame", FRAME_STATE_OFF):
            frame["state"] = value & MASK32
            return True
        if ptr == Ptr("frame", FRAME_FLAGS_OFF):
            frame["flags"] = value & MASK32
            return True
        if ptr == Ptr("frame", FRAME_BYTE_OFF):
            frame["byte"] = value & 0xff
            return True
        return True
    return False


def eval_shift(mnemonic, left, right, size):
    if is_unknown(left) or is_unknown(right) or not isinstance(left, int) or not isinstance(right, int):
        return Unknown("shift")
    mask = mask_for_size(size)
    count = right & 0x3f
    if mnemonic == "shl":
        return (left << count) & mask
    if mnemonic == "shr":
        return (left & mask) >> count
    return Unknown("shift")


def execute(insns_by_addr, start, row, table, target_to_entry, max_steps):
    ip_bytes = bytes.fromhex(row["bytes"])
    frame = {
        "state": parse_int(row["pre_state"]) & MASK32,
        "flags": parse_int(row.get("pre_flags", "0x0") or "0x0") & MASK32,
        "byte": parse_int(row.get("pre_byte", "0x0") or "0x0") & 0xff,
        "ip_delta": 0,
    }
    regs = {"rbp": Ptr("frame", 0)}
    pc = start
    zf = None
    steps = 0
    unknown = 0
    branch_unknown = 0

    while steps < max_steps:
        insn = insns_by_addr.get(pc)
        if insn is None:
            return None, None, frame["ip_delta"], "falloff", steps, unknown, branch_unknown
        steps += 1
        mnem = insn.mnemonic
        ops = insn.operands
        next_pc = insn.address + insn.size

        if mnem == "jmp":
            if ops and ops[0].type == X86_OP_IMM and ops[0].imm in insns_by_addr:
                pc = ops[0].imm
                continue
            value = read_op(insn, ops[0], regs, frame, ip_bytes, table) if ops else Unknown("jmp")
            if isinstance(value, int):
                return target_to_entry.get(value), value, frame["ip_delta"], "ok", steps, unknown, branch_unknown
            return None, None, frame["ip_delta"], "unknown_target", steps, unknown + 1, branch_unknown

        taken = branch_taken(mnem, zf)
        if taken is not None:
            pc = ops[0].imm if taken and ops and ops[0].type == X86_OP_IMM else next_pc
            continue
        if mnem.startswith("j") and mnem != "jmp":
            branch_unknown += 1
            pc = next_pc
            continue

        if mnem in {"cmp", "test"} and len(ops) >= 2:
            left = read_op(insn, ops[0], regs, frame, ip_bytes, table)
            right = read_op(insn, ops[1], regs, frame, ip_bytes, table)
            zf = cmp_zf(mnem, left, right, ops[0].size or ops[1].size or 8)
            if zf is None:
                unknown += 1
            pc = next_pc
            continue

        if not ops:
            pc = next_pc
            continue

        if mnem in {"mov", "movabs", "movzx"} and len(ops) >= 2:
            value = read_op(insn, ops[1], regs, frame, ip_bytes, table)
            if not write_op(insn, ops[0], value, regs, frame):
                unknown += 1
            pc = next_pc
            continue

        if mnem == "lea" and len(ops) >= 2:
            ptr = mem_ptr(insn, ops[1], regs)
            if not write_op(insn, ops[0], ptr if ptr is not None else Unknown("lea"), regs, frame):
                unknown += 1
            pc = next_pc
            continue

        if mnem in {"add", "sub", "xor", "and", "or", "shl", "shr"} and len(ops) >= 2:
            dst = read_op(insn, ops[0], regs, frame, ip_bytes, table)
            src = read_op(insn, ops[1], regs, frame, ip_bytes, table)
            if mnem == "xor" and ops[0].type == X86_OP_REG and ops[1].type == X86_OP_REG and ops[0].reg == ops[1].reg:
                value = 0
            elif mnem == "sub" and ops[0].type == X86_OP_REG and ops[1].type == X86_OP_REG and ops[0].reg == ops[1].reg:
                value = 0
            elif mnem in {"shl", "shr"}:
                value = eval_shift(mnem, dst, src, ops[0].size or 8)
            else:
                value = eval_bin(mnem, dst, src, ops[0].size or 8)
            if is_unknown(value):
                unknown += 1
            if not write_op(insn, ops[0], value, regs, frame):
                unknown += 1
            if mnem in {"and", "or", "xor", "sub"}:
                zf = (value & mask_for_size(ops[0].size or 8)) == 0 if isinstance(value, int) else None
            pc = next_pc
            continue

        if ops[0].type == X86_OP_REG:
            regs[reg_of(insn, ops[0])] = Unknown(mnem)
        pc = next_pc

    return None, None, frame["ip_delta"], "step_limit", steps, unknown, branch_unknown


def main():
    parser = argparse.ArgumentParser(
        description="Validate static VM dispatch target/IP predictions against an instruction trace."
    )
    parser.add_argument(
        "trace",
        nargs="?",
        default="dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv",
    )
    parser.add_argument("--skeletons", default="dumps/vmtail-wide-1m-w16/vm_handler_skeletons.tsv")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--window", type=lambda value: int(value, 0), default=0x1200)
    parser.add_argument("--max-steps", type=int, default=2000)
    parser.add_argument("--max-rows-per-source", type=int, default=0)
    args = parser.parse_args()

    eac = Path(args.eac).read_bytes()
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    md = make_disassembler()
    skeletons = read_skeletons(args.skeletons)
    decoded = {}
    counts = defaultdict(int)
    stats = defaultdict(Counter)
    targets = {}

    for row in read_trace_rows(args.trace):
        if row.get("byte_status") != "exact" or not row.get("pre_state"):
            continue
        source = row["source_entry"]
        if args.max_rows_per_source and counts[source] >= args.max_rows_per_source:
            continue
        skel = skeletons.get(source)
        if not skel:
            continue
        if source not in decoded:
            target = parse_int(skel.get("target"))
            tail_site = parse_int(skel.get("tail_site"))
            if target is None:
                continue
            stop = tail_site + 16 if tail_site is not None else target + args.window
            if stop - target > args.window:
                stop = target + args.window
            _insns, by_addr = disassemble_region(md, eac, target, stop)
            decoded[source] = (target, by_addr)
        target, by_addr = decoded[source]
        pred_entry, pred_target, pred_delta, status, steps, unknown, branch_unknown = execute(
            by_addr, target, row, table, target_to_entry, args.max_steps
        )
        actual_entry = int(row["target_entry"])
        actual_target = parse_int(row["target"])
        actual_delta = parse_delta(row["delta"])

        bucket = stats[source]
        bucket["events"] += 1
        bucket["steps"] += steps
        bucket["unknown_ops"] += unknown
        bucket["branch_unknown"] += branch_unknown
        bucket[f"status_{status}"] += 1
        if status == "ok" and pred_entry == actual_entry and pred_target == actual_target:
            bucket["target_matched"] += 1
        else:
            bucket["target_mismatched"] += 1
            if "target_example" not in bucket:
                bucket["target_example"] = 1
                bucket["example_pred_entry"] = -1 if pred_entry is None else pred_entry
                bucket["example_pred_target"] = 0 if pred_target is None else pred_target
                bucket["example_actual_entry"] = actual_entry
                bucket["example_actual_target"] = actual_target
                bucket["example_status"] = status
                bucket["example_bytes"] = row.get("bytes", "")
        if pred_delta == actual_delta:
            bucket["ip_matched"] += 1
        else:
            bucket["ip_mismatched"] += 1
        targets[source] = skel.get("target", "")
        counts[source] += 1

    print(
        "source_entry\tsource_target\tevents\ttarget_matched_events\t"
        "target_coverage_pct\ttarget_mismatched_events\tip_matched_events\t"
        "ip_coverage_pct\tip_mismatched_events\tunknown_ops\tbranch_unknown\t"
        "avg_steps\tstatuses\texample_pred_entry\texample_pred_target\t"
        "example_actual_entry\texample_actual_target\texample_status\texample_bytes"
    )
    for source, bucket in sorted(stats.items(), key=lambda item: (-item[1]["events"], int(item[0]))):
        events = bucket["events"]
        target_matched = bucket["target_matched"]
        ip_matched = bucket["ip_matched"]
        statuses = ",".join(
            f"{key[7:]}:{value}" for key, value in sorted(bucket.items())
            if key.startswith("status_")
        )
        print(
            f"{source}\t{targets.get(source, '')}\t{events}\t{target_matched}\t"
            f"{target_matched * 100.0 / events if events else 0.0:.1f}\t"
            f"{bucket['target_mismatched']}\t{ip_matched}\t"
            f"{ip_matched * 100.0 / events if events else 0.0:.1f}\t"
            f"{bucket['ip_mismatched']}\t{bucket['unknown_ops']}\t"
            f"{bucket['branch_unknown']}\t{bucket['steps'] / events if events else 0.0:.1f}\t"
            f"{statuses}\t{bucket.get('example_pred_entry', '')}\t"
            f"0x{bucket.get('example_pred_target', 0):x}\t"
            f"{bucket.get('example_actual_entry', '')}\t"
            f"0x{bucket.get('example_actual_target', 0):x}\t"
            f"{bucket.get('example_status', '')}\t{bucket.get('example_bytes', '')}"
        )


if __name__ == "__main__":
    main()
