#!/usr/bin/env python3
import argparse
import csv
import re
import struct
import sys
from collections import Counter, defaultdict
from pathlib import Path

from vm_trace_log import strip_to_trace_marker


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
DEFAULT_RUNS = [
    Path("dumps/vmtail-mem-focus-final-sites/run.stderr"),
    Path("dumps/vmtail-mem-focus-final-site-b265e/run.stderr"),
    Path("dumps/vmtail-mem-focus-final-site-c2d35/run.stderr"),
]
FIELD_RE = re.compile(r"\b([a-z][a-z0-9_]*)=0x([0-9a-f]+)")


def read_tsv(path):
    with Path(path).open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def parse_hex(text):
    if not text:
        return None
    return int(text, 16)


def read_dispatch_table(eac_path, table_off=0xc3718, entries=360):
    data = Path(eac_path).read_bytes()
    return [struct.unpack_from("<Q", data, table_off + idx * 8)[0] for idx in range(entries)]


def parse_fields(line):
    return {name: int(value_s, 16) for name, value_s in FIELD_RE.findall(line)}


def load_live_in_site_info(path):
    by_source = {}
    for row in read_tsv(path):
        source = row.get("source_entry", "")
        site = parse_hex(row.get("final_tail_site", ""))
        if not source or site is None:
            continue
        by_source[source] = {
            "source_entry": source,
            "final_tail_site": site,
            "final_tail_site_text": f"0x{site:x}",
            "final_tail_target_reg": row.get("final_tail_target_reg", ""),
            "deref_regs": row.get("deref_regs", ""),
        }
    return by_source


def load_events(paths, sites):
    events = defaultdict(list)
    for path in paths:
        path = Path(path)
        if not path.exists():
            continue
        with path.open(errors="replace") as handle:
            for line in handle:
                line = strip_to_trace_marker(line, ("[VMTAIL]",))
                if not line.startswith("[VMTAIL]"):
                    continue
                fields = parse_fields(line)
                site = fields.get("site")
                if site not in sites:
                    continue
                fields["_run_dir"] = str(path.parent)
                events[site].append(fields)
    return events


def fmt_counter(counter, limit=8, hex_keys=True):
    parts = []
    for key, value in counter.most_common(limit):
        if key is None:
            key_text = ""
        elif hex_keys:
            key_text = f"0x{key:x}"
        else:
            key_text = str(key)
        parts.append(f"{key_text}:{value}")
    return ",".join(parts) or "-"


def parse_reg_list(text):
    return [part for part in (text or "").split(",") if part]


def make_rows(args):
    site_info = load_live_in_site_info(args.live_in_roles)
    sites = {info["final_tail_site"] for info in site_info.values()}
    events_by_site = load_events(args.run, sites)
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: entry for entry, target in enumerate(table)}

    rows = []
    for source, info in sorted(site_info.items(), key=lambda item: int(item[0], 0)):
        site = info["final_tail_site"]
        target_reg = info["final_tail_target_reg"]
        deref_regs = parse_reg_list(info["deref_regs"])
        events = events_by_site.get(site, [])
        vm_ips = Counter(event.get("vm_ip_off") for event in events)
        target_offs = Counter(event.get("target_off") for event in events)
        target_entries = Counter()
        run_dirs = Counter(event.get("_run_dir", "") for event in events)
        target_reg_matches = 0
        deref_matches = Counter()
        for event in events:
            target = event.get("target")
            target_off = event.get("target_off")
            entry = target_to_entry.get(target_off)
            if entry is not None:
                target_entries[entry] += 1
            if target_reg and event.get(target_reg) == target:
                target_reg_matches += 1
            for reg in deref_regs:
                if event.get(f"mem_{reg}") == target:
                    deref_matches[reg] += 1
        deref_match_summary = ",".join(
            f"{reg}:{deref_matches.get(reg, 0)}/{len(events)}"
            for reg in deref_regs
        ) or "-"
        rows.append({
            "source_entry": source,
            "final_tail_site": info["final_tail_site_text"],
            "final_tail_target_reg": target_reg,
            "deref_regs": ",".join(deref_regs),
            "events": str(len(events)),
            "unique_vm_ips": str(len(vm_ips)),
            "unique_targets": str(len(target_offs)),
            "target_reg_equals_target": f"{target_reg_matches}/{len(events)}",
            "deref_mem_matches_target": deref_match_summary,
            "top_vm_ips": fmt_counter(vm_ips),
            "top_target_entries": fmt_counter(target_entries, hex_keys=False),
            "top_target_offsets": fmt_counter(target_offs),
            "run_dirs": ",".join(run_dirs) or "-",
        })
    return rows


def emit_tsv(rows):
    fields = [
        "source_entry",
        "final_tail_site",
        "final_tail_target_reg",
        "deref_regs",
        "events",
        "unique_vm_ips",
        "unique_targets",
        "target_reg_equals_target",
        "deref_mem_matches_target",
        "top_vm_ips",
        "top_target_entries",
        "top_target_offsets",
        "run_dirs",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    total_events = sum(int(row["events"]) for row in rows)
    observed = sum(1 for row in rows if int(row["events"]) > 0)
    print("# Live-In Final Tail Site Probe\n")
    print(f"Rows: {len(rows)}. Observed sites: {observed}. Events: {total_events}.\n")
    print("| Source | Final Site | Target Reg | Deref Regs | Events | Target Reg Match | Deref Mem Match | Top Targets | Top VM IPs |")
    print("| ---: | --- | --- | --- | ---: | ---: | --- | --- | --- |")
    for row in rows:
        print(
            f"| {row['source_entry']} | `{row['final_tail_site']}` | `{row['final_tail_target_reg']}` | "
            f"`{row['deref_regs'] or '-'}` | {row['events']} | `{row['target_reg_equals_target']}` | "
            f"`{row['deref_mem_matches_target']}` | `{row['top_target_entries']}` | `{row['top_vm_ips']}` |"
        )
    print("\nA full `N/N` dereference match means the event-local `mem_<reg>` qword read equals the native tail target at that exact final tail site.")


def main():
    parser = argparse.ArgumentParser(description="Summarize memory-enabled exact final-tail site probes for live-in synthetic gaps.")
    parser.add_argument("--live-in-roles", default=str(TRACE_DIR / "vm_synthetic_gap_live_in_roles.tsv"))
    parser.add_argument("--run", action="append", type=Path, default=list(DEFAULT_RUNS), help="memory-enabled run.stderr to scan")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = make_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"live_in_final_tail_site_probe_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
