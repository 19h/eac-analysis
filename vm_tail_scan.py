#!/usr/bin/env python3
import argparse
import re
import struct
from collections import Counter
from pathlib import Path

from capstone import CS_ARCH_X86, CS_MODE_64, Cs
from capstone.x86_const import X86_OP_REG


REG_NAMES = {
    "rax", "rbx", "rcx", "rdx", "rsi", "rdi", "rbp", "rsp",
    "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15",
}


def read_dispatch_table(eac_path: Path, table_off=0xc3718, entries=360):
    data = eac_path.read_bytes()
    return [struct.unpack_from("<Q", data, table_off + idx * 8)[0] for idx in range(entries)]


def parse_trace(trace_path: Path, target_to_entry):
    target_counts = Counter()
    known_sites = set()
    target_re = re.compile(r"target_off=0x([0-9a-f]+)")
    site_re = re.compile(r"^\[(?:VMTAIL|DISPATCH)\] site=0x([0-9a-f]+)")
    driver_site_re = re.compile(r"^\[DRIVER\] tail site \+0x([0-9a-f]+)")
    for line in trace_path.read_text(errors="replace").splitlines():
        m = site_re.search(line)
        if m:
            known_sites.add(int(m.group(1), 16))
        m = driver_site_re.search(line)
        if m:
            known_sites.add(int(m.group(1), 16))
        m = target_re.search(line)
        if m:
            target = int(m.group(1), 16)
            if target in target_to_entry:
                target_counts[target] += 1
    return target_counts, known_sites


def parse_report_counts(trace_path: Path):
    target_counts = Counter()
    site_counts = Counter()
    target_re = re.compile(r"target_off=0x([0-9a-f]+)")
    tail_site_re = re.compile(r"^\[VMTAIL\] site=0x([0-9a-f]+)")
    for line in trace_path.read_text(errors="replace").splitlines():
        m = target_re.search(line)
        if m:
            target_counts[int(m.group(1), 16)] += 1
        m = tail_site_re.search(line)
        if m:
            site_counts[int(m.group(1), 16)] += 1
    return target_counts, site_counts


def find_jmp_reg(eac: bytes, start: int, known_sites, window: int):
    md = Cs(CS_ARCH_X86, CS_MODE_64)
    md.detail = True
    for insn in md.disasm(eac[start:start + window], start):
        if insn.address in known_sites:
            continue
        if insn.mnemonic != "jmp" or len(insn.operands) != 1:
            continue
        op = insn.operands[0]
        if op.type != X86_OP_REG:
            continue
        reg = insn.reg_name(op.reg)
        if reg in REG_NAMES:
            return insn.address, reg, insn.address - start
    return None


def print_suggestions(suggestions):
    print("Tail Site Suggestions")
    for count, entry, target, site, reg, distance in suggestions:
        print(
            f"  count={count:5d} entry={entry:3d} target=0x{target:x} "
            f"candidate=0x{site:x}:{reg} distance=0x{distance:x}"
        )
    if suggestions:
        spec = ",".join(f"0x{site:x}:{reg}" for _, _, _, site, reg, _ in suggestions)
        print("EAC_VMTAIL_SITES=" + spec)


def scan_all_table(eac: bytes, table, window: int, limit: int):
    suggestions = []
    sites = set()
    misses = []
    for entry, target in enumerate(table):
        hit = find_jmp_reg(eac, target, set(), window)
        if hit is None:
            misses.append((entry, target))
            continue
        site, reg, distance = hit
        if site in sites:
            continue
        sites.add(site)
        suggestions.append((0, entry, target, site, reg, distance))
        if limit and len(suggestions) >= limit:
            break

    print(
        f"Static Table Scan: entries={len(table)} candidate_sites={len(suggestions)} "
        f"misses={len(misses)} window=0x{window:x}"
    )
    if misses:
        sample = " ".join(f"{entry}:0x{target:x}" for entry, target in misses[:16])
        print(f"  misses: {sample}")
    print_suggestions(suggestions)


def print_table_report(eac: bytes, table, trace_path: Path, window: int):
    target_counts, site_counts = parse_report_counts(trace_path)
    print(
        "entry\ttarget\ttail_site\ttail_reg\ttail_distance\t"
        "target_hits\ttail_site_hits\tobserved_target"
    )
    for entry, target in enumerate(table):
        hit = find_jmp_reg(eac, target, set(), window)
        if hit is None:
            site_text = ""
            reg = ""
            distance_text = ""
            site_hits = 0
        else:
            site, reg, distance = hit
            site_text = f"0x{site:x}"
            distance_text = f"0x{distance:x}"
            site_hits = site_counts[site]
        target_hits = target_counts[target]
        print(
            f"{entry}\t0x{target:x}\t{site_text}\t{reg}\t{distance_text}\t"
            f"{target_hits}\t{site_hits}\t{1 if target_hits else 0}"
        )


def main():
    parser = argparse.ArgumentParser(
        description="Suggest extra EAC_VMTAIL_SITES from observed dispatch table targets."
    )
    parser.add_argument("dump_dir", nargs="?", default="dumps/vmtail-recursive")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--limit", type=int, default=24)
    parser.add_argument("--window", type=lambda x: int(x, 0), default=0x700)
    parser.add_argument(
        "--all-table",
        action="store_true",
        help="scan every dispatch-table target statically instead of ranking trace targets",
    )
    parser.add_argument(
        "--table-report",
        action="store_true",
        help="emit TSV table with one row per dispatch-table entry",
    )
    args = parser.parse_args()

    dump_dir = Path(args.dump_dir)
    trace_path = dump_dir / "run.stderr"
    eac_path = Path(args.eac)
    eac = eac_path.read_bytes()
    table = read_dispatch_table(eac_path)
    if args.table_report:
        print_table_report(eac, table, trace_path, args.window)
        return

    if args.all_table:
        scan_all_table(eac, table, args.window, args.limit)
        return

    target_to_entry = {target: idx for idx, target in enumerate(table)}
    target_counts, known_sites = parse_trace(trace_path, target_to_entry)

    suggestions = []
    suggested_sites = set()
    for target, count in target_counts.most_common():
        hit = find_jmp_reg(eac, target, known_sites, args.window)
        if hit is None:
            continue
        site, reg, distance = hit
        if site in suggested_sites:
            continue
        suggested_sites.add(site)
        suggestions.append((count, target_to_entry[target], target, site, reg, distance))
        if len(suggestions) >= args.limit:
            break

    print_suggestions(suggestions)


if __name__ == "__main__":
    main()
