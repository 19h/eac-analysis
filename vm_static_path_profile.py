#!/usr/bin/env python3
import argparse
import csv
import hashlib
import re
from collections import Counter, defaultdict
from pathlib import Path

from capstone.x86_const import X86_OP_IMM, X86_OP_REG

from vm_state_static_validate import (
    MASK32,
    Ptr,
    Unknown,
    branch_taken,
    concrete_compare_value,
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
from vm_static_dispatch_validate import (
    eval_shift,
    parse_delta,
    read_dispatch_table,
    read_op,
    write_op,
)


FIELD_RE = re.compile(r"\b([a-z][a-z0-9_]*)=0x([0-9a-f]+)")
COUNT_RE = re.compile(r"\bcount=([0-9]+)")
TRACE_RE = re.compile(r"^\[VMTAIL\]")
REG_NAMES = {
    "rax", "rbx", "rcx", "rdx", "rsi", "rdi",
    "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15",
    "rbp", "rsp",
}


def clip(text, max_len):
    if len(text) <= max_len:
        return text
    digest = hashlib.sha256(text.encode()).hexdigest()[:12]
    keep = max(16, max_len - 17)
    return f"{text[:keep]}...#{digest}"


def path_hash(path):
    text = ";".join(path)
    return hashlib.sha256(text.encode()).hexdigest()[:16]


def parse_gpr_fields(line):
    fields = {name: int(value_s, 16) for name, value_s in FIELD_RE.findall(line)}
    count = COUNT_RE.search(line)
    if count:
        fields["count"] = int(count.group(1), 10)
    return fields


def normalize_seed_value(value, fields):
    frame = fields.get("frame")
    table = fields.get("table")
    vm_ip = fields.get("vm_ip")
    image_base = None
    if frame is not None and fields.get("frame_off") is not None:
        image_base = frame - fields["frame_off"]

    if frame is not None and frame - 0x4000 <= value < frame + 0x4000:
        return Ptr("frame", value - frame)
    if table is not None and table <= value < table + 360 * 8:
        return Ptr("table", value - table)
    if vm_ip is not None and vm_ip - 0x10000 <= value < vm_ip + 0x10000:
        return Ptr("ip", value - vm_ip)
    if image_base is not None and image_base <= value < image_base + 0x650000:
        return value - image_base
    return value


def load_gpr_seeds(path):
    if not path:
        return {}
    seeds = {}
    with Path(path).open(errors="replace") as handle:
        for line in handle:
            if not TRACE_RE.search(line):
                continue
            fields = parse_gpr_fields(line)
            count = fields.get("count")
            if count is None:
                continue
            regs = {
                reg: normalize_seed_value(fields[reg], fields)
                for reg in REG_NAMES
                if reg in fields
            }
            frame_mem = {}
            for name, value in fields.items():
                if not name.startswith("fs"):
                    continue
                off_s = name[2:]
                if off_s.startswith("0x"):
                    off_s = off_s[2:]
                try:
                    off = int(off_s, 16)
                except ValueError:
                    continue
                frame_mem[(off, 8)] = value
            if frame_mem:
                regs["__frame_mem__"] = frame_mem
            # Instruction row N starts at the previous VMTAIL event's exit state.
            seeds[str(count + 1)] = regs
    return seeds


def execute(insns_by_addr, start, row, table, target_to_entry, max_steps, initial_regs=None):
    ip_bytes = bytes.fromhex(row["bytes"])
    frame = {
        "state": parse_int(row["pre_state"]) & MASK32,
        "flags": parse_int(row.get("pre_flags", "0x0") or "0x0") & MASK32,
        "byte": parse_int(row.get("pre_byte", "0x0") or "0x0") & 0xff,
        "ip_delta": 0,
    }
    regs = dict(initial_regs or {})
    frame_mem = dict(regs.pop("__frame_mem__", {}))
    regs["rbp"] = Ptr("frame", 0)
    pc = start
    zf = None
    steps = 0
    unknown = 0
    branch_unknown = 0
    path = []

    while steps < max_steps:
        insn = insns_by_addr.get(pc)
        if insn is None:
            return None, None, frame["ip_delta"], "falloff", steps, unknown, branch_unknown, path
        steps += 1
        mnem = insn.mnemonic
        ops = insn.operands
        next_pc = insn.address + insn.size

        if mnem == "jmp":
            if ops and ops[0].type == X86_OP_IMM and ops[0].imm in insns_by_addr:
                pc = ops[0].imm
                continue
            value = read_op(insn, ops[0], regs, frame, ip_bytes, table, frame_mem) if ops else Unknown("jmp")
            if isinstance(value, int):
                return target_to_entry.get(value), value, frame["ip_delta"], "ok", steps, unknown, branch_unknown, path
            return None, None, frame["ip_delta"], "unknown_target", steps, unknown + 1, branch_unknown, path

        taken = branch_taken(mnem, zf)
        if taken is not None:
            path.append(f"0x{insn.address:x}:{mnem}:{1 if taken else 0}")
            pc = ops[0].imm if taken and ops and ops[0].type == X86_OP_IMM else next_pc
            continue
        if mnem.startswith("j") and mnem != "jmp":
            path.append(f"0x{insn.address:x}:{mnem}:?")
            branch_unknown += 1
            pc = next_pc
            continue

        if mnem in {"cmp", "test"} and len(ops) >= 2:
            left = read_op(insn, ops[0], regs, frame, ip_bytes, table, frame_mem)
            right = read_op(insn, ops[1], regs, frame, ip_bytes, table, frame_mem)
            zf = cmp_zf(mnem, left, right, ops[0].size or ops[1].size or 8)
            if zf is None:
                unknown += 1
            pc = next_pc
            continue

        if not ops:
            pc = next_pc
            continue

        if mnem in {"mov", "movabs", "movzx"} and len(ops) >= 2:
            value = read_op(insn, ops[1], regs, frame, ip_bytes, table, frame_mem)
            if not write_op(insn, ops[0], value, regs, frame, frame_mem):
                unknown += 1
            pc = next_pc
            continue

        if mnem == "lea" and len(ops) >= 2:
            ptr = mem_ptr(insn, ops[1], regs)
            if not write_op(insn, ops[0], ptr if ptr is not None else Unknown("lea"), regs, frame, frame_mem):
                unknown += 1
            pc = next_pc
            continue

        if mnem in {"add", "sub", "xor", "and", "or", "shl", "shr"} and len(ops) >= 2:
            dst = read_op(insn, ops[0], regs, frame, ip_bytes, table, frame_mem)
            src = read_op(insn, ops[1], regs, frame, ip_bytes, table, frame_mem)
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
            if not write_op(insn, ops[0], value, regs, frame, frame_mem):
                unknown += 1
            if mnem in {"and", "or", "xor", "sub"}:
                concrete_value = concrete_compare_value(value, ops[0].size or 8)
                zf = (concrete_value == 0) if concrete_value is not None else None
            pc = next_pc
            continue

        if ops[0].type == X86_OP_REG:
            regs[reg_of(insn, ops[0])] = Unknown(mnem)
        pc = next_pc

    return None, None, frame["ip_delta"], "step_limit", steps, unknown, branch_unknown, path


def top_counter(counter, limit):
    return ",".join(f"{key}:{value}" for key, value in counter.most_common(limit))


def top_paths(counter, paths, limit, max_path_len):
    parts = []
    for digest, count in counter.most_common(limit):
        parts.append(f"{count}:{digest}:{clip(paths[digest], max_path_len)}")
    return "|".join(parts)


def emit_summary(source_stats, source_paths, source_path_texts, source_branch_sites, targets, args):
    print(
        "source_entry\tsource_target\tevents\ttarget_matched_events\t"
        "target_coverage_pct\ttarget_mismatched_events\tip_matched_events\t"
        "ip_coverage_pct\tip_mismatched_events\tunknown_ops\tbranch_unknown\t"
        "avg_steps\tunique_paths\tbranch_sites\ttop_paths\tstatuses"
    )
    for source, bucket in sorted(source_stats.items(), key=lambda item: (-item[1]["events"], int(item[0]))):
        events = bucket["events"]
        target_matched = bucket["target_matched"]
        ip_matched = bucket["ip_matched"]
        statuses = ",".join(
            f"{key[7:]}:{value}" for key, value in sorted(bucket.items())
            if key.startswith("status_")
        )
        branch_sites = ",".join(sorted(source_branch_sites[source], key=lambda value: int(value, 16)))
        print(
            f"{source}\t{targets.get(source, '')}\t{events}\t{target_matched}\t"
            f"{target_matched * 100.0 / events if events else 0.0:.1f}\t"
            f"{bucket['target_mismatched']}\t{ip_matched}\t"
            f"{ip_matched * 100.0 / events if events else 0.0:.1f}\t"
            f"{bucket['ip_mismatched']}\t{bucket['unknown_ops']}\t"
            f"{bucket['branch_unknown']}\t{bucket['steps'] / events if events else 0.0:.1f}\t"
            f"{len(source_paths[source])}\t{branch_sites}\t"
            f"{top_paths(source_paths[source], source_path_texts[source], args.top, args.max_path_len)}\t"
            f"{statuses}"
        )


def emit_by_path(path_stats, path_targets, path_texts, args):
    print(
        "source_entry\tsource_target\tpath_hash\tevents\ttarget_matched_events\t"
        "target_coverage_pct\tip_matched_events\tip_coverage_pct\tstatuses\t"
        "top_actual_targets\tpath"
    )
    for (source, digest), bucket in sorted(path_stats.items(), key=lambda item: (-item[1]["events"], int(item[0][0]), item[0][1])):
        events = bucket["events"]
        statuses = ",".join(
            f"{key[7:]}:{value}" for key, value in sorted(bucket.items())
            if key.startswith("status_")
        )
        print(
            f"{source}\t{bucket.get('source_target', '')}\t{digest}\t{events}\t"
            f"{bucket['target_matched']}\t"
            f"{bucket['target_matched'] * 100.0 / events if events else 0.0:.1f}\t"
            f"{bucket['ip_matched']}\t"
            f"{bucket['ip_matched'] * 100.0 / events if events else 0.0:.1f}\t"
            f"{statuses}\t{top_counter(path_targets[(source, digest)], args.top_targets)}\t"
            f"{clip(path_texts[(source, digest)], args.max_path_len)}"
        )


def main():
    parser = argparse.ArgumentParser(
        description="Profile concrete static-handler branch paths over a state-aware VM trace."
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
    parser.add_argument(
        "--gpr-run",
        help="seed handler-entry registers from the previous VMTAIL line in an EAC_VMTAIL_REGS run.stderr",
    )
    parser.add_argument("--by-path", action="store_true")
    parser.add_argument("--top", type=int, default=5)
    parser.add_argument("--top-targets", type=int, default=8)
    parser.add_argument("--max-path-len", type=int, default=260)
    args = parser.parse_args()

    eac = Path(args.eac).read_bytes()
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    md = make_disassembler()
    skeletons = read_skeletons(args.skeletons)
    gpr_seeds = load_gpr_seeds(args.gpr_run)
    decoded = {}
    counts = defaultdict(int)
    source_stats = defaultdict(Counter)
    source_paths = defaultdict(Counter)
    source_path_texts = defaultdict(dict)
    source_branch_sites = defaultdict(set)
    path_stats = defaultdict(Counter)
    path_targets = defaultdict(Counter)
    path_texts = {}
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
        pred_entry, pred_target, pred_delta, status, steps, unknown, branch_unknown, path = execute(
            by_addr, target, row, table, target_to_entry, args.max_steps, gpr_seeds.get(row.get("seq", ""))
        )
        actual_entry = int(row["target_entry"])
        actual_target = parse_int(row["target"])
        actual_delta = parse_delta(row["delta"])
        target_ok = status == "ok" and pred_entry == actual_entry and pred_target == actual_target
        ip_ok = pred_delta == actual_delta
        digest = path_hash(path)
        path_text = ";".join(path) if path else "-"

        bucket = source_stats[source]
        bucket["events"] += 1
        bucket["steps"] += steps
        bucket["unknown_ops"] += unknown
        bucket["branch_unknown"] += branch_unknown
        bucket[f"status_{status}"] += 1
        bucket["target_matched" if target_ok else "target_mismatched"] += 1
        bucket["ip_matched" if ip_ok else "ip_mismatched"] += 1
        source_paths[source][digest] += 1
        source_path_texts[source][digest] = path_text
        for item in path:
            source_branch_sites[source].add(item.split(":", 1)[0])

        path_bucket = path_stats[(source, digest)]
        path_bucket["events"] += 1
        path_bucket["target_matched" if target_ok else "target_mismatched"] += 1
        path_bucket["ip_matched" if ip_ok else "ip_mismatched"] += 1
        path_bucket[f"status_{status}"] += 1
        path_bucket["source_target"] = skel.get("target", "")
        path_targets[(source, digest)][f"{actual_entry}@0x{actual_target:x}"] += 1
        path_texts[(source, digest)] = path_text

        targets[source] = skel.get("target", "")
        counts[source] += 1

    if args.by_path:
        emit_by_path(path_stats, path_targets, path_texts, args)
    else:
        emit_summary(source_stats, source_paths, source_path_texts, source_branch_sites, targets, args)


if __name__ == "__main__":
    main()
