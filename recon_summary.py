#!/usr/bin/env python3
import argparse
import re
import struct
from collections import Counter
from pathlib import Path


def read_base(maps_path: Path) -> int | None:
    if not maps_path.exists():
        return None
    for line in maps_path.read_text(errors="replace").splitlines():
        if "eac.elf" not in line:
            continue
        m = re.match(r"([0-9a-f]+)-[0-9a-f]+", line)
        if m:
            return int(m.group(1), 16)
    return None


def ranges(indices, step=1):
    if not indices:
        return []
    out = []
    start = prev = indices[0]
    for idx in indices[1:]:
        if idx == prev + step:
            prev = idx
        else:
            out.append((start, prev))
            start = prev = idx
    out.append((start, prev))
    return out


def ranges_by_gap(values, max_gap):
    values = sorted(values)
    if not values:
        return []
    out = []
    start = prev = values[0]
    count = 1
    for value in values[1:]:
        if value - prev > max_gap:
            out.append((start, prev, count))
            start = value
            count = 1
        else:
            count += 1
        prev = value
    out.append((start, prev, count))
    return out


def read_dispatch_table(eac_path: Path, table_off=0xc3718, entries=360):
    if not eac_path.exists():
        return []
    eac = eac_path.read_bytes()
    end = table_off + entries * 8
    if len(eac) < end:
        return []
    return [struct.unpack_from("<Q", eac, table_off + idx * 8)[0] for idx in range(entries)]


def summarize_trace(dump_dir: Path):
    trace = dump_dir / "run.stderr"
    if not trace.exists():
        return
    caller_re = re.compile(r"caller=eac\.elf\+0x([0-9a-f]+)")
    api_re = re.compile(r"\] caller=eac\.elf\+0x[0-9a-f]+ ([a-zA-Z_][a-zA-Z0-9_]*)")
    callers = Counter()
    apis = Counter()
    selected = []
    for line in trace.read_text(errors="replace").splitlines():
        m = caller_re.search(line)
        if m:
            callers[int(m.group(1), 16)] += 1
        m = api_re.search(line)
        if m:
            apis[m.group(1)] += 1
        if any(token in line for token in (
            "pthread_create", "getaddrinfo", "popen", "mprotect",
            "LD_PRELOAD", "/proc/self/exe", "/proc/modules",
            "/etc/os-release", "/proc/net/route", "/sys/class/net",
        )):
            selected.append(line)

    print("Trace")
    print(f"  lines: {sum(callers.values())} EAC-origin events")
    print("  top callers:")
    for addr, count in callers.most_common(20):
        print(f"    eac+0x{addr:x}: {count}")
    print("  api counts:")
    for name, count in apis.most_common():
        print(f"    {name}: {count}")
    print("  selected events:")
    for line in selected[:80]:
        print(f"    {line}")


def summarize_dispatch(dump_dir: Path):
    trace = dump_dir / "run.stderr"
    if not trace.exists():
        return set()

    dispatch_re = re.compile(
        r"^\[DISPATCH\] site=0x([0-9a-f]+).* "
        r"slot_off=0x([0-9a-f]+) idx=0x([0-9a-f]+) "
        r".* target_off=0x([0-9a-f]+)"
    )
    by_site = Counter()
    by_edge = Counter()
    by_table = Counter()
    by_frame = Counter()
    by_vm_ip = Counter()
    by_table_field = Counter()
    sequence = []
    observed_entries = set()
    for line in trace.read_text(errors="replace").splitlines():
        m = dispatch_re.search(line)
        if not m:
            continue
        site, slot, idx, target = (int(part, 16) for part in m.groups())
        table = slot - idx
        entry = idx // 8 if idx % 8 == 0 else None
        by_site[site] += 1
        by_table[table] += 1
        by_edge[(site, table, idx, target)] += 1
        if entry is not None:
            observed_entries.add(entry)
        m_frame = re.search(r" frame_off=0x([0-9a-f]+)", line)
        if m_frame:
            by_frame[int(m_frame.group(1), 16)] += 1
        m_vm_ip = re.search(r" vm_ip_off=0x([0-9a-f]+)", line)
        if m_vm_ip:
            vm_ip = int(m_vm_ip.group(1), 16)
            by_vm_ip[vm_ip] += 1
            sequence.append((site, vm_ip, entry, target))
        m_table = re.search(r" table_off=0x([0-9a-f]+)", line)
        if m_table:
            by_table_field[int(m_table.group(1), 16)] += 1

    if not by_edge:
        return observed_entries

    print("Dispatch")
    print("  site counts:")
    for site, count in by_site.most_common():
        print(f"    0x{site:x}: {count}")
    print("  inferred tables:")
    for table, count in by_table.most_common():
        print(f"    table=0x{table:x}: {count} hits")
    if by_table_field:
        print("  frame table fields:")
        for table, count in by_table_field.most_common():
            print(f"    frame+0x10f -> 0x{table:x}: {count} hits")
    if by_frame:
        print("  frames:")
        for frame, count in by_frame.most_common(8):
            print(f"    frame=0x{frame:x}: {count} hits")
    if by_vm_ip:
        print("  top vm_ip offsets:")
        for vm_ip, count in by_vm_ip.most_common(12):
            print(f"    0x{vm_ip:x}: {count}")
        print("  vm_ip bands:")
        for start, end, count in ranges_by_gap(by_vm_ip.keys(), max_gap=0x8000)[:12]:
            print(f"    0x{start:x}-0x{end:x}: {count} unique offsets")
    if len(sequence) > 1:
        transitions = Counter((sequence[idx][1], sequence[idx + 1][1])
                              for idx in range(len(sequence) - 1))
        print("  hot vm_ip transitions:")
        for (src, dst), count in transitions.most_common(10):
            print(f"    {count:5d} 0x{src:x} -> 0x{dst:x} delta=0x{dst - src:x}")
    print("  observed edges:")
    for (site, table, idx, target), count in by_edge.most_common(20):
        entry = idx // 8 if idx % 8 == 0 else None
        entry_text = f"entry={entry}" if entry is not None else f"byte_idx=0x{idx:x}"
        print(
            f"    {count:5d} site=0x{site:x} table=0x{table:x} "
            f"{entry_text} slot=0x{table + idx:x} -> 0x{target:x}"
        )
    return observed_entries


def summarize_vmtail(dump_dir: Path, eac_path: Path):
    trace = dump_dir / "run.stderr"
    if not trace.exists():
        return set()

    table = read_dispatch_table(eac_path)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    vmtail_re = re.compile(
        r"^\[VMTAIL\] site=0x([0-9a-f]+).* "
        r"vm_ip_off=0x([0-9a-f]+).* table_off=0x([0-9a-f]+).* "
        r"ip_w0=0x([0-9a-f]+) ip_w1=0x([0-9a-f]+) "
        r"ip_w2=0x([0-9a-f]+) ip_w3=0x([0-9a-f]+).* "
        r"target_off=0x([0-9a-f]+)"
    )
    by_site = Counter()
    by_target = Counter()
    by_site_target = Counter()
    by_table = Counter()
    by_vm_ip = Counter()
    observed_entries = set()
    tail_limit = None
    total_records = 0
    for line in trace.read_text(errors="replace").splitlines():
        m_limit = re.search(r"tail_limit=([0-9]+)", line)
        if m_limit:
            tail_limit = int(m_limit.group(1), 10)
        m = vmtail_re.search(line)
        if not m:
            continue
        site, vm_ip, table_off, w0, w1, w2, w3, target = (
            int(part, 16) for part in m.groups()
        )
        entry = target_to_entry.get(target)
        if entry is not None:
            observed_entries.add(entry)
        by_site[site] += 1
        by_target[(target, entry)] += 1
        by_site_target[(site, target, entry)] += 1
        by_table[table_off] += 1
        by_vm_ip[vm_ip] += 1
        total_records += 1

    if not by_site:
        return observed_entries

    print("VM Tail Trace")
    cap_text = " capped" if tail_limit is not None and total_records >= tail_limit else ""
    print(f"  records: {total_records}{cap_text}")
    print(f"  observed table entries: {len(observed_entries)}")
    print("  site counts:")
    for site, count in by_site.most_common():
        print(f"    0x{site:x}: {count}")
    print("  frame table fields:")
    for table_off, count in by_table.most_common():
        print(f"    frame+0x10f -> 0x{table_off:x}: {count} hits")
    print(f"  unique vm_ip offsets: {len(by_vm_ip)}")
    print("  vm_ip bands:")
    for start, end, count in ranges_by_gap(by_vm_ip.keys(), max_gap=0x8000)[:16]:
        print(f"    0x{start:x}-0x{end:x}: {count} unique offsets")
    print("  tail targets:")
    for (target, entry), count in by_target.most_common(12):
        entry_text = f"entry={entry}" if entry is not None else "entry=?"
        print(f"    {count:5d} {entry_text} -> 0x{target:x}")
    print("  site to target:")
    for (site, target, entry), count in by_site_target.most_common(16):
        entry_text = f"entry={entry}" if entry is not None else "entry=?"
        print(f"    {count:5d} site=0x{site:x} -> {entry_text} 0x{target:x}")
    return observed_entries


def summarize_dispatch_table(eac_path: Path, observed_entries):
    table = read_dispatch_table(eac_path)
    if not table:
        return
    print("Dispatch Table")
    print(
        f"  file+0xc3718 entries={len(table)} unique_targets={len(set(table))} "
        f"target_range=0x{min(table):x}-0x{max(table):x}"
    )
    if observed_entries:
        print(f"  observed entries: {len(observed_entries)}")
        for entry in sorted(observed_entries):
            if 0 <= entry < len(table):
                print(f"    entry={entry:3d} slot=0x{0xc3718 + entry * 8:x} -> 0x{table[entry]:x}")


def summarize_maps(dump_dir: Path, eac_path: Path):
    eac = eac_path.read_bytes()
    print("Memory Maps")
    for map_file in sorted(dump_dir.glob("postcall_map_*_off_*.bin")):
        m = re.search(r"_off_([0-9a-f]+)\.bin$", map_file.name)
        if not m:
            continue
        off = int(m.group(1), 16)
        data = map_file.read_bytes()
        ref = eac[off:off + len(data)]
        diff = [i for i, (a, b) in enumerate(zip(data, ref)) if a != b]
        print(f"  {map_file.name}: size=0x{len(data):x} file_off=0x{off:x} diffs={len(diff)}")
        for start, end in ranges(diff)[:12]:
            print(f"    file+0x{off + start:x}-0x{off + end + 1:x} ({end - start + 1} bytes)")

    print("Postcall To Postsleep Changes")
    for postcall in sorted(dump_dir.glob("postcall_map_*_off_*.bin")):
        suffix = postcall.name.rsplit("_off_", 1)[1]
        matches = list(dump_dir.glob(f"postsleep_map_*_off_{suffix}"))
        if not matches:
            continue
        postsleep = matches[0]
        a = postcall.read_bytes()
        b = postsleep.read_bytes()
        diff = [i for i in range(min(len(a), len(b))) if a[i] != b[i]]
        print(f"  off_{suffix}: diffs={len(diff)}")
        for start, end in ranges(diff)[:8]:
            print(f"    map+0x{start:x}-0x{end + 1:x} ({end - start + 1} bytes)")


def summarize_executable_pointer_fixups(dump_dir: Path, eac_path: Path):
    base = read_base(dump_dir / "postcall_maps.txt")
    if base is None:
        return

    eac = eac_path.read_bytes()
    hits = []
    for map_file in sorted(dump_dir.glob("postcall_map_*_off_*.bin")):
        m = re.search(r"_([rwxps-]+)_off_([0-9a-f]+)\.bin$", map_file.name)
        if not m:
            continue
        perms = m.group(1)
        if "x" not in perms:
            continue
        file_off = int(m.group(2), 16)
        data = map_file.read_bytes()
        max_len = min(len(data), max(0, len(eac) - file_off))
        for off in range(0, max_len - 7, 8):
            file_value = struct.unpack_from("<Q", eac, file_off + off)[0]
            mem_value = struct.unpack_from("<Q", data, off)[0]
            if 0 < file_value < len(eac) and mem_value == base + file_value:
                hits.append(file_off + off)

    if not hits:
        return

    print("Executable Pointer Fixups")
    print(f"  base-relative qwords in executable maps: {len(hits)}")
    for start, end in ranges(hits, step=8)[:20]:
        entries = ((end - start) // 8) + 1
        first = struct.unpack_from("<Q", eac, start)[0]
        last = struct.unpack_from("<Q", eac, end)[0]
        print(
            f"    file+0x{start:x}-0x{end + 8:x}: "
            f"{entries} qwords, first=0x{first:x}, last=0x{last:x}"
        )


def summarize_context(dump_dir: Path):
    ctx_files = sorted(dump_dir.glob("postcall_ctx_*.bin"))
    if not ctx_files:
        return
    base = read_base(dump_dir / "postcall_maps.txt")
    if base is None:
        return
    ctx = ctx_files[0].read_bytes()
    heap_match = re.search(r"ctx_(0x[0-9a-f]+)\.bin", ctx_files[0].name)
    ctx_addr = int(heap_match.group(1), 16) if heap_match else 0
    print("Context")
    print(f"  file: {ctx_files[0].name}")
    print(f"  ctx_addr: 0x{ctx_addr:x}")
    print(f"  eac_base: 0x{base:x}")
    for off in range(0, len(ctx) - 7, 8):
        value = struct.unpack_from("<Q", ctx, off)[0]
        if base <= value < base + 0x900000:
            print(f"    ctx+0x{off:04x}: eac+0x{value - base:x}")
        elif ctx_addr and ctx_addr - 0x40000 <= value < ctx_addr + 0x80000:
            print(f"    ctx+0x{off:04x}: near_ctx+0x{value - ctx_addr:x}")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("dump_dir", nargs="?", default="dumps/local-blocked-log")
    parser.add_argument("--eac", default="eac.elf")
    args = parser.parse_args()

    dump_dir = Path(args.dump_dir)
    eac_path = Path(args.eac)
    summarize_trace(dump_dir)
    observed_entries = summarize_dispatch(dump_dir)
    observed_entries |= summarize_vmtail(dump_dir, eac_path)
    summarize_dispatch_table(eac_path, observed_entries)
    summarize_maps(dump_dir, eac_path)
    summarize_executable_pointer_fixups(dump_dir, eac_path)
    summarize_context(dump_dir)


if __name__ == "__main__":
    main()
