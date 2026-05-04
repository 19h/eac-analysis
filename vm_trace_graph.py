#!/usr/bin/env python3
import argparse
import re
import struct
import sys
from collections import Counter, defaultdict, namedtuple
from pathlib import Path

from capstone import CS_ARCH_X86, CS_MODE_64, Cs
from capstone.x86_const import X86_OP_REG


REG_NAMES = {
    "rax", "rbx", "rcx", "rdx", "rsi", "rdi", "rbp", "rsp",
    "r8", "r9", "r10", "r11", "r12", "r13", "r14", "r15",
}

Event = namedtuple("Event", "kind site count frame vm_ip target entry words")

TAIL_RE = re.compile(
    r"^\[VMTAIL\] site=0x([0-9a-f]+) count=([0-9]+).* "
    r"frame=0x([0-9a-f]+).* vm_ip_off=0x([0-9a-f]+).* "
    r"target_off=0x([0-9a-f]+)"
)
DISPATCH_RE = re.compile(
    r"^\[DISPATCH\] site=0x([0-9a-f]+) count=([0-9]+).* "
    r"idx=0x([0-9a-f]+).* frame=0x([0-9a-f]+).* "
    r"vm_ip_off=0x([0-9a-f]+).* target_off=0x([0-9a-f]+)"
)
TAIL_LIMIT_RE = re.compile(r"\btail_limit=([0-9]+)")
IP_WORD_RE = re.compile(r"\bip_w([0-9]+)=0x([0-9a-f]+)")


def read_dispatch_table(eac_path: Path, table_off=0xc3718, entries=360):
    data = eac_path.read_bytes()
    return [struct.unpack_from("<Q", data, table_off + idx * 8)[0] for idx in range(entries)]


def find_jmp_reg(eac: bytes, start: int, window: int):
    md = Cs(CS_ARCH_X86, CS_MODE_64)
    md.detail = True
    for insn in md.disasm(eac[start:start + window], start):
        if insn.mnemonic != "jmp" or len(insn.operands) != 1:
            continue
        op = insn.operands[0]
        if op.type != X86_OP_REG:
            continue
        reg = insn.reg_name(op.reg)
        if reg in REG_NAMES:
            return insn.address, reg, insn.address - start
    return None


def build_tail_maps(eac: bytes, table, window: int):
    by_site = defaultdict(list)
    by_entry = {}
    for entry, target in enumerate(table):
        hit = find_jmp_reg(eac, target, window)
        if hit is not None:
            site, reg, distance = hit
            by_site[site].append((entry, target, reg, distance))
            by_entry[entry] = (site, reg, distance)
    return by_site, by_entry


def parse_event(line: str, target_to_entry):
    words = parse_ip_words(line)

    m = TAIL_RE.search(line)
    if m:
        site_s, count_s, frame_s, vm_ip_s, target_s = m.groups()
        site = int(site_s, 16)
        count = int(count_s, 10)
        frame = int(frame_s, 16)
        vm_ip = int(vm_ip_s, 16)
        target = int(target_s, 16)
        return Event("tail", site, count, frame, vm_ip, target, target_to_entry.get(target), words)

    m = DISPATCH_RE.search(line)
    if m:
        site_s, count_s, idx_s, frame_s, vm_ip_s, target_s = m.groups()
        site = int(site_s, 16)
        count = int(count_s, 10)
        idx = int(idx_s, 16)
        frame = int(frame_s, 16)
        vm_ip = int(vm_ip_s, 16)
        target = int(target_s, 16)
        entry = target_to_entry.get(target)
        if entry is None and idx % 8 == 0:
            entry = idx // 8
        return Event("dispatch", site, count, frame, vm_ip, target, entry, words)

    return None


def parse_ip_words(line: str):
    found = [(int(idx_s), int(value_s, 16)) for idx_s, value_s in IP_WORD_RE.findall(line)]
    if not found:
        return tuple()
    words = [None] * (max(idx for idx, _value in found) + 1)
    for idx, value in found:
        words[idx] = value
    return tuple(words)


def iter_trace_events(trace_path: Path, target_to_entry):
    tail_limit = None
    with trace_path.open(errors="replace") as trace:
        for line in trace:
            m = TAIL_LIMIT_RE.search(line)
            if m:
                tail_limit = int(m.group(1))

            event = parse_event(line, target_to_entry)
            if event is not None:
                yield event, tail_limit


def emit_static_edges(trace_path: Path, target_to_entry, site_sources):
    edges = Counter()
    edge_vm_ips = defaultdict(set)
    unknown_targets = Counter()
    for event, _tail_limit in iter_trace_events(trace_path, target_to_entry):
        if event.entry is None:
            unknown_targets[event.target] += 1
            continue

        if event.kind == "tail":
            src_entries = site_sources.get(event.site, [])
            src_text = ",".join(str(entry) for entry, _, _, _ in src_entries) or "?"
            key = ("tail", event.site, src_text, event.entry, event.target)
            edges[key] += 1
            edge_vm_ips[key].add(event.vm_ip)
        else:
            key = ("dispatch", event.site, "", event.entry, event.target)
            edges[key] += 1
            edge_vm_ips[key].add(event.vm_ip)

    print("kind\tsite\tsource_entries\ttarget_entry\ttarget\tcount\tunique_vm_ips")
    for (kind, site, src_text, target_entry, target), count in edges.most_common():
        print(
            f"{kind}\t0x{site:x}\t{src_text}\t{target_entry}\t0x{target:x}\t"
            f"{count}\t{len(edge_vm_ips[(kind, site, src_text, target_entry, target)])}"
        )


def format_signed_hex(value: int):
    sign = "-" if value < 0 else "+"
    return f"{sign}0x{abs(value):x}"


def format_delta_counts(delta_counts: Counter, max_deltas: int):
    return ",".join(
        f"{format_signed_hex(delta)}:{count}"
        for delta, count in delta_counts.most_common(max_deltas)
    )


def format_hex_counts(counts: Counter, max_items: int):
    return ",".join(f"0x{value:x}:{count}" for value, count in counts.most_common(max_items))


def format_words(words):
    formatted = [f"0x{word:x}" if word is not None else "" for word in words]
    while len(formatted) < 6:
        formatted.append("")
    return formatted


def format_word_bytes(words, delta):
    raw = bytearray()
    for word in words:
        if word is None:
            continue
        raw.extend((word & 0xffff).to_bytes(2, "little"))
    if delta is None:
        return raw.hex(), "sample"
    if delta < 0:
        return raw.hex(), "backedge_sample"
    if delta <= len(raw):
        return raw[:delta].hex(), "exact"
    return raw.hex(), f"prefix_{len(raw)}_of_{delta}"


def format_entry_counts(counts: Counter, table, max_items: int):
    return ",".join(
        f"{entry}@0x{table[entry]:x}:{count}"
        for entry, count in counts.most_common(max_items)
    )


def format_site_counts(counts: Counter, max_items: int):
    return ",".join(
        f"{kind}@0x{site:x}:{count}"
        for (kind, site), count in counts.most_common(max_items)
    )


def site_entries(site_sources, site):
    return {entry for entry, _target, _reg, _distance in site_sources.get(site, [])}


def is_direct_event(prev_entry, event, site_sources, allow_indirect_site: bool):
    if event.kind == "dispatch":
        return True
    if allow_indirect_site:
        return True
    return prev_entry in site_entries(site_sources, event.site)


def emit_sequential_edges(trace_path: Path, table, target_to_entry, site_sources, hooked_entries,
                          max_deltas: int, stop_at_tail_cap: bool,
                          allow_unhooked_source: bool, allow_indirect_site: bool):
    edges = Counter()
    edge_vm_ips = defaultdict(set)
    edge_frames = defaultdict(set)
    edge_deltas = defaultdict(Counter)
    unknown_targets = Counter()
    prev_by_frame = {}
    stopped_at_cap = False
    skipped_unhooked_sources = 0
    skipped_indirect_sites = 0

    for event, tail_limit in iter_trace_events(trace_path, target_to_entry):
        if event.entry is None:
            unknown_targets[event.target] += 1
            prev_by_frame.pop(event.frame, None)
            continue

        prev = prev_by_frame.get(event.frame)
        if prev is not None:
            if allow_unhooked_source or prev.entry in hooked_entries:
                if is_direct_event(prev.entry, event, site_sources, allow_indirect_site):
                    key = (prev.entry, table[prev.entry], event.kind, event.site, event.entry, event.target)
                    edges[key] += 1
                    edge_vm_ips[key].add(event.vm_ip)
                    edge_frames[key].add(event.frame)
                    edge_deltas[key][event.vm_ip - prev.vm_ip] += 1
                else:
                    skipped_indirect_sites += 1
            else:
                skipped_unhooked_sources += 1

        prev_by_frame[event.frame] = event

        if stop_at_tail_cap and event.kind == "tail" and tail_limit and event.count >= tail_limit:
            stopped_at_cap = True
            break

    print(
        "source_entry\tsource_target\tkind\tsite\ttarget_entry\ttarget\t"
        "count\tunique_vm_ips\tframes\ttop_ip_deltas"
    )
    for (source_entry, source_target, kind, site, target_entry, target), count in edges.most_common():
        print(
            f"{source_entry}\t0x{source_target:x}\t{kind}\t0x{site:x}\t"
            f"{target_entry}\t0x{target:x}\t{count}\t"
            f"{len(edge_vm_ips[(source_entry, source_target, kind, site, target_entry, target)])}\t"
            f"{len(edge_frames[(source_entry, source_target, kind, site, target_entry, target)])}\t"
            f"{format_delta_counts(edge_deltas[(source_entry, source_target, kind, site, target_entry, target)], max_deltas)}"
        )

    if stopped_at_cap:
        print("# stopped_at_tail_cap=1", file=sys.stderr, flush=True)
    if skipped_unhooked_sources:
        print(f"# skipped_unhooked_sources={skipped_unhooked_sources}", file=sys.stderr, flush=True)
    if skipped_indirect_sites:
        print(f"# skipped_indirect_sites={skipped_indirect_sites}", file=sys.stderr, flush=True)


def emit_source_profile(trace_path: Path, table, target_to_entry, site_sources, hooked_entries,
                        max_items: int, stop_at_tail_cap: bool,
                        allow_unhooked_source: bool, allow_indirect_site: bool):
    profiles = {}
    prev_by_frame = {}
    stopped_at_cap = False
    skipped_unhooked_sources = 0
    skipped_indirect_sites = 0

    def profile_for(entry):
        if entry not in profiles:
            profiles[entry] = {
                "count": 0,
                "vm_ips": set(),
                "targets": Counter(),
                "sites": Counter(),
                "deltas": Counter(),
                "words": [Counter() for _ in range(6)],
            }
        return profiles[entry]

    for event, tail_limit in iter_trace_events(trace_path, target_to_entry):
        if event.entry is None:
            prev_by_frame.pop(event.frame, None)
            continue

        prev = prev_by_frame.get(event.frame)
        if prev is not None:
            if allow_unhooked_source or prev.entry in hooked_entries:
                if is_direct_event(prev.entry, event, site_sources, allow_indirect_site):
                    profile = profile_for(prev.entry)
                    profile["count"] += 1
                    profile["vm_ips"].add(event.vm_ip)
                    profile["targets"][event.entry] += 1
                    profile["sites"][(event.kind, event.site)] += 1
                    profile["deltas"][event.vm_ip - prev.vm_ip] += 1
                    for idx, word in enumerate(event.words):
                        if word is not None:
                            while idx >= len(profile["words"]):
                                profile["words"].append(Counter())
                            profile["words"][idx][word] += 1
                else:
                    skipped_indirect_sites += 1
            else:
                skipped_unhooked_sources += 1

        prev_by_frame[event.frame] = event

        if stop_at_tail_cap and event.kind == "tail" and tail_limit and event.count >= tail_limit:
            stopped_at_cap = True
            break

    print(
        "source_entry\tsource_target\tcount\tunique_vm_ips\ttop_sites\t"
        "top_targets\ttop_ip_deltas\ttop_w0\ttop_w1\ttop_w2\ttop_w3\ttop_w4\ttop_w5"
    )
    for entry, profile in sorted(profiles.items(), key=lambda item: item[1]["count"], reverse=True):
        words = profile["words"]
        while len(words) < 6:
            words.append(Counter())
        print(
            f"{entry}\t0x{table[entry]:x}\t{profile['count']}\t{len(profile['vm_ips'])}\t"
            f"{format_site_counts(profile['sites'], max_items)}\t"
            f"{format_entry_counts(profile['targets'], table, max_items)}\t"
            f"{format_delta_counts(profile['deltas'], max_items)}\t"
            f"{format_hex_counts(words[0], max_items)}\t"
            f"{format_hex_counts(words[1], max_items)}\t"
            f"{format_hex_counts(words[2], max_items)}\t"
            f"{format_hex_counts(words[3], max_items)}\t"
            f"{format_hex_counts(words[4], max_items)}\t"
            f"{format_hex_counts(words[5], max_items)}"
        )

    if stopped_at_cap:
        print("# stopped_at_tail_cap=1", file=sys.stderr, flush=True)
    if skipped_unhooked_sources:
        print(f"# skipped_unhooked_sources={skipped_unhooked_sources}", file=sys.stderr, flush=True)
    if skipped_indirect_sites:
        print(f"# skipped_indirect_sites={skipped_indirect_sites}", file=sys.stderr, flush=True)


def emit_instruction_trace(trace_path: Path, table, target_to_entry, site_sources, hooked_entries,
                           stop_at_tail_cap: bool, allow_unhooked_source: bool,
                           allow_indirect_site: bool):
    prev_by_frame = {}
    stopped_at_cap = False
    skipped_unhooked_sources = 0
    skipped_indirect_sites = 0
    seq = 0

    print(
        "seq\tframe\tsource_entry\tsource_target\tstart_vm_ip\tend_vm_ip\t"
        "delta\tkind\tsite\ttarget_entry\ttarget\tw0\tw1\tw2\tw3\tw4\tw5\tbytes\tbyte_status"
    )

    for event, tail_limit in iter_trace_events(trace_path, target_to_entry):
        if event.entry is None:
            prev_by_frame.pop(event.frame, None)
            continue

        prev = prev_by_frame.get(event.frame)
        if prev is not None:
            if allow_unhooked_source or prev.entry in hooked_entries:
                if is_direct_event(prev.entry, event, site_sources, allow_indirect_site):
                    delta = event.vm_ip - prev.vm_ip
                    words = format_words(prev.words)
                    byte_hex, byte_status = format_word_bytes(prev.words, delta)
                    seq += 1
                    print(
                        f"{seq}\t0x{event.frame:x}\t{prev.entry}\t0x{table[prev.entry]:x}\t"
                        f"0x{prev.vm_ip:x}\t0x{event.vm_ip:x}\t{format_signed_hex(delta)}\t"
                        f"{event.kind}\t0x{event.site:x}\t{event.entry}\t0x{event.target:x}\t"
                        f"{words[0]}\t{words[1]}\t{words[2]}\t{words[3]}\t{words[4]}\t{words[5]}\t"
                        f"{byte_hex}\t{byte_status}"
                    )
                else:
                    skipped_indirect_sites += 1
            else:
                skipped_unhooked_sources += 1

        prev_by_frame[event.frame] = event

        if stop_at_tail_cap and event.kind == "tail" and tail_limit and event.count >= tail_limit:
            stopped_at_cap = True
            break

    if stopped_at_cap:
        print("# stopped_at_tail_cap=1", file=sys.stderr, flush=True)
    if skipped_unhooked_sources:
        print(f"# skipped_unhooked_sources={skipped_unhooked_sources}", file=sys.stderr, flush=True)
    if skipped_indirect_sites:
        print(f"# skipped_indirect_sites={skipped_indirect_sites}", file=sys.stderr, flush=True)


def main():
    parser = argparse.ArgumentParser(description="Build VM edge TSVs from a traced run.")
    parser.add_argument("dump_dir", nargs="?", default="dumps/vmtail-allstatic")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--window", type=lambda x: int(x, 0), default=0x800)
    parser.add_argument(
        "--sequential",
        action="store_true",
        help="emit dynamic edges from consecutive events per VM frame",
    )
    parser.add_argument(
        "--source-profile",
        action="store_true",
        help="emit per-source handler target, delta, and ip_w profile",
    )
    parser.add_argument(
        "--instruction-trace",
        action="store_true",
        help="emit direct executed VM instruction rows with start/end VM IP and bytes",
    )
    parser.add_argument(
        "--max-deltas",
        type=int,
        default=5,
        help="maximum VM IP deltas to show per sequential edge",
    )
    parser.add_argument(
        "--no-stop-at-tail-cap",
        action="store_true",
        help="keep reading after the VM tail trace count reaches the configured cap",
    )
    parser.add_argument(
        "--allow-unhooked-source",
        action="store_true",
        help="keep sequential edges whose source table entry has no static tail hook",
    )
    parser.add_argument(
        "--allow-indirect-site",
        action="store_true",
        help="keep tail events whose site does not statically belong to the previous source entry",
    )
    args = parser.parse_args()

    dump_dir = Path(args.dump_dir)
    trace_path = dump_dir / "run.stderr"
    eac_path = Path(args.eac)
    eac = eac_path.read_bytes()
    table = read_dispatch_table(eac_path)
    target_to_entry = {target: entry for entry, target in enumerate(table)}
    site_sources, entry_tails = build_tail_maps(eac, table, args.window)

    if args.sequential:
        emit_sequential_edges(
            trace_path,
            table,
            target_to_entry,
            site_sources,
            entry_tails,
            args.max_deltas,
            not args.no_stop_at_tail_cap,
            args.allow_unhooked_source,
            args.allow_indirect_site,
        )
        return

    if args.source_profile:
        emit_source_profile(
            trace_path,
            table,
            target_to_entry,
            site_sources,
            entry_tails,
            args.max_deltas,
            not args.no_stop_at_tail_cap,
            args.allow_unhooked_source,
            args.allow_indirect_site,
        )
        return

    if args.instruction_trace:
        emit_instruction_trace(
            trace_path,
            table,
            target_to_entry,
            site_sources,
            entry_tails,
            not args.no_stop_at_tail_cap,
            args.allow_unhooked_source,
            args.allow_indirect_site,
        )
        return

    emit_static_edges(trace_path, target_to_entry, site_sources)


if __name__ == "__main__":
    main()
