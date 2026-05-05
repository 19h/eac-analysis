#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from collections import Counter
from pathlib import Path


DEFAULT_TRACE_DIRS = [
    "dumps/vmtail-wide",
    "dumps/vmtail-wide-w16",
    "dumps/vmtail-wide-1m",
    "dumps/vmtail-wide-1m-w16",
    "dumps/vmtail-mode0-w16",
    "dumps/vmtail-mode2-w16",
    "dumps/vmtail-state-wide-w16",
]

DISPATCH_RE = re.compile(r"^\[DRIVER\] dispatch trace enabled (?P<body>.*)$")
CALL_RE = re.compile(r"^\[DRIVER\] call [^(]+\(.*\bmode=(?P<mode>[0-9]+),")
EAC_ENV_RE = re.compile(r"\bgetenv name=(?P<name>EAC_[A-Z0-9_]+) -> set\b")
KV_RE = re.compile(r"\b(?P<key>[a-z_]+)=(?P<value>[^ ]+)")
NETWORK_EVENT_RE = re.compile(r"\b(?P<func>socket|connect|send|recv|getaddrinfo)\b")
GETADDR_RE = re.compile(r"\bgetaddrinfo node=(?P<node>[^ ]+) service=(?P<service>[^ ]+)")
SPAWN_EVENT_RE = re.compile(r"\b(?P<func>popen|system)\b")
POPEN_RE = re.compile(r"\bpopen command=(?P<command>.*?) type=")
CALLER_RE = re.compile(r"\bcaller=(?P<caller>[^ ]+)")
RUN_METADATA_CACHE = {}
TRACE_CACHE = {}


def empty_trace():
    return {
        "rows": 0,
        "source_entries": set(),
        "target_entries": set(),
        "start_ips": set(),
        "intervals": [],
        "exact_intervals": [],
        "statuses": Counter(),
        "kinds": Counter(),
        "events_by_source": Counter(),
        "events_by_target": Counter(),
    }


def read_tsv(path):
    with Path(path).open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def parse_hex(text):
    if not text:
        return 0
    return int(text, 16)


def merge_intervals(intervals):
    if not intervals:
        return []
    intervals = sorted(intervals)
    merged = [list(intervals[0])]
    for start, end in intervals[1:]:
        last = merged[-1]
        if start <= last[1]:
            if end > last[1]:
                last[1] = end
        else:
            merged.append([start, end])
    return [(start, end) for start, end in merged]


def interval_bytes(intervals):
    return sum(end - start for start, end in merge_intervals(intervals))


def fmt_counter(counter, limit):
    return ",".join(f"{key}:{value}" for key, value in counter.most_common(limit))


def classify_dir(path):
    text = str(path)
    if "filefill" in text or "hiddenfill" in text or "frontierfill" in text or "footprintfill" in text:
        return "synthetic_filled_trace"
    if "mem" in text:
        return "memory_context_trace"
    if "regs" in text or "scratch" in text:
        return "register_context_trace"
    if "state" in text:
        return "state_trace"
    if "mode" in text:
        return "alternate_mode_trace"
    if not (Path(path) / "vm_instruction_trace.tsv").exists():
        return "run_without_instruction_trace"
    return "raw_dynamic_trace"


def load_trace(path):
    path = Path(path)
    if not path.exists():
        return empty_trace()
    cache_key = str(path.resolve())
    cached = TRACE_CACHE.get(cache_key)
    if cached is not None:
        return cached
    rows = 0
    source_entries = set()
    target_entries = set()
    start_ips = set()
    intervals = []
    exact_intervals = []
    statuses = Counter()
    kinds = Counter()
    events_by_source = Counter()
    events_by_target = Counter()
    with path.open(errors="replace") as handle:
        header = handle.readline().rstrip("\n").split("\t")
        idx = {name: pos for pos, name in enumerate(header)}

        def col(parts, name):
            pos = idx.get(name)
            if pos is None or pos >= len(parts):
                return ""
            return parts[pos]

        for line in handle:
            rows += 1
            parts = line.rstrip("\n").split("\t")
            source = col(parts, "source_entry")
            target = col(parts, "target_entry")
            if source:
                source_entries.add(source)
                events_by_source[source] += 1
            if target:
                target_entries.add(target)
                events_by_target[target] += 1
            start = col(parts, "start_vm_ip")
            end = col(parts, "end_vm_ip")
            if start:
                start_ips.add(start)
            status = col(parts, "byte_status")
            kind = col(parts, "kind")
            if status:
                statuses[status] += 1
            if kind:
                kinds[kind] += 1
            try:
                start_i = parse_hex(start)
                end_i = parse_hex(end)
            except ValueError:
                continue
            if end_i > start_i:
                intervals.append((start_i, end_i))
                if status == "exact":
                    exact_intervals.append((start_i, end_i))
    data = {
        "rows": rows,
        "source_entries": source_entries,
        "target_entries": target_entries,
        "start_ips": start_ips,
        "intervals": intervals,
        "exact_intervals": exact_intervals,
        "statuses": statuses,
        "kinds": kinds,
        "events_by_source": events_by_source,
        "events_by_target": events_by_target,
    }
    TRACE_CACHE[cache_key] = data
    return data


def origin_run_dir(trace_dir):
    trace_dir = Path(trace_dir)
    text = str(trace_dir)
    marker = "-filefill"
    if marker in text:
        return Path(text.split(marker, 1)[0])
    return trace_dir


def parse_run_metadata(trace_dir):
    run_dir = origin_run_dir(trace_dir)
    cache_key = str(run_dir)
    cached = RUN_METADATA_CACHE.get(cache_key)
    if cached is not None:
        return dict(cached)
    path = run_dir / "run.stderr"
    meta = {
        "origin_run_dir": str(run_dir),
        "has_run_stderr": "0",
        "run_mode": "",
        "driver_tail_limit": "",
        "driver_tail_sites": "",
        "driver_tail_regs": "0",
        "driver_tail_scratch": "0",
        "driver_tail_mem": "0",
        "driver_tail_focus_ips": "",
        "driver_tail_focus_sites": "",
        "driver_tail_stop_after_matches": "",
        "driver_scratch_offsets": "",
        "driver_read_ranges": "",
        "driver_detail": "",
        "driver_tail_trace": "0",
        "env_flags": "",
        "runtime_config": "",
        "network_policy": "not_observed",
        "network_events": "0",
        "network_denied_events": "0",
        "network_hosts": "",
        "network_callers": "",
        "spawn_policy": "not_observed",
        "spawn_events": "0",
        "spawn_denied_events": "0",
        "spawn_commands": "",
    }
    if not path.exists():
        RUN_METADATA_CACHE[cache_key] = dict(meta)
        return meta

    meta["has_run_stderr"] = "1"
    env_flags = set()
    network_events = 0
    network_denied_events = 0
    network_hosts = Counter()
    network_callers = Counter()
    spawn_events = 0
    spawn_denied_events = 0
    spawn_commands = Counter()
    dispatch_seen = False
    call_seen = False
    with path.open(errors="replace") as handle:
        for idx, line in enumerate(handle):
            if "getenv name=EAC_" in line:
                env_match = EAC_ENV_RE.search(line)
                if env_match:
                    env_flags.add(env_match.group("name"))
            if not call_seen and line.startswith("[DRIVER] call "):
                call_match = CALL_RE.match(line)
                if call_match:
                    meta["run_mode"] = call_match.group("mode")
                    call_seen = True
            if not dispatch_seen and line.startswith("[DRIVER] dispatch trace enabled "):
                dispatch_match = DISPATCH_RE.match(line)
                if dispatch_match:
                    dispatch_seen = True
                    fields = {m.group("key"): m.group("value") for m in KV_RE.finditer(dispatch_match.group("body"))}
                    meta["driver_tail_limit"] = fields.get("tail_limit", "")
                    meta["driver_tail_sites"] = fields.get("tail_sites", "")
                    meta["driver_tail_regs"] = fields.get("tail_regs", "0")
                    meta["driver_tail_scratch"] = fields.get("tail_scratch", "0")
                    meta["driver_tail_mem"] = fields.get("tail_mem", "0")
                    meta["driver_tail_focus_ips"] = fields.get("focus_ips", "")
                    meta["driver_tail_focus_sites"] = fields.get("focus_sites", "")
                    meta["driver_tail_stop_after_matches"] = fields.get("stop_after_matches", "")
                    meta["driver_scratch_offsets"] = fields.get("scratch_offsets", "")
                    meta["driver_read_ranges"] = fields.get("read_ranges", "")
                    meta["driver_detail"] = fields.get("detail", "")
                    meta["driver_tail_trace"] = fields.get("tail", "0")

            network_func = ""
            if "getaddrinfo " in line:
                network_func = "getaddrinfo"
            elif "socket domain=" in line:
                network_func = "socket"
            elif "connect fd=" in line:
                network_func = "connect"
            elif "send fd=" in line:
                network_func = "send"
            elif "recv fd=" in line:
                network_func = "recv"
            if network_func:
                network_events += 1
                if " DENY" in line:
                    network_denied_events += 1
                getaddr_match = GETADDR_RE.search(line)
                if getaddr_match:
                    host = getaddr_match.group("node")
                    if host and host != "(null)":
                        network_hosts[host] += 1
                caller_match = CALLER_RE.search(line)
                if caller_match:
                    key = f"{network_func}@{caller_match.group('caller')}"
                    network_callers[key] += 1
            spawn_func = ""
            if "popen command=" in line:
                spawn_func = "popen"
            elif "system command=" in line:
                spawn_func = "system"
            if spawn_func:
                spawn_events += 1
                if " DENY" in line:
                    spawn_denied_events += 1
                popen_match = POPEN_RE.search(line)
                if popen_match:
                    command = popen_match.group("command")
                    if command and command != "(null)":
                        spawn_commands[command] += 1
            if idx >= 20000 and not (dispatch_seen and call_seen):
                # Some failure-only runs never reach VMTAIL; keep later provenance
                # scanning, but stop trying to infer early driver settings.
                dispatch_seen = True
                call_seen = True

    meta["env_flags"] = ",".join(sorted(env_flags))
    if "EAC_VMTAIL_TRACE" in env_flags:
        meta["driver_tail_trace"] = "1"
    if "EAC_VMTAIL_REGS" in env_flags:
        meta["driver_tail_regs"] = "1"
    if "EAC_VMTAIL_SCRATCH" in env_flags:
        meta["driver_tail_scratch"] = "1"
    if "EAC_VMTAIL_MEM" in env_flags:
        meta["driver_tail_mem"] = "1"
    if meta["run_mode"]:
        meta["runtime_config"] = f"x_mode_{meta['run_mode']}"
    elif "local-blocked" in str(trace_dir):
        meta["runtime_config"] = "local_blocked"
    else:
        meta["runtime_config"] = "unknown"
    meta["network_events"] = str(network_events)
    meta["network_denied_events"] = str(network_denied_events)
    meta["network_hosts"] = fmt_counter(network_hosts, 8)
    meta["network_callers"] = fmt_counter(network_callers, 8)
    if network_events == 0:
        meta["network_policy"] = "not_observed"
    elif network_denied_events == network_events:
        meta["network_policy"] = "blocked_observed"
    elif network_denied_events:
        meta["network_policy"] = "mixed_observed"
    else:
        meta["network_policy"] = "allowed_observed"
    meta["spawn_events"] = str(spawn_events)
    meta["spawn_denied_events"] = str(spawn_denied_events)
    meta["spawn_commands"] = fmt_counter(spawn_commands, 8)
    if spawn_events == 0:
        meta["spawn_policy"] = "not_observed"
    elif spawn_denied_events == spawn_events:
        meta["spawn_policy"] = "blocked_observed"
    elif spawn_denied_events:
        meta["spawn_policy"] = "mixed_observed"
    else:
        meta["spawn_policy"] = "allowed_observed"
    RUN_METADATA_CACHE[cache_key] = dict(meta)
    return meta


def load_segments(path):
    if not Path(path).exists():
        return None
    rows = 0
    bytes_total = 0
    conflicts = 0
    for row in read_tsv(path):
        rows += 1
        try:
            bytes_total += parse_hex(row.get("size", "0x0"))
        except ValueError:
            pass
        try:
            conflicts += int(row.get("conflict_offsets", "0") or 0)
        except ValueError:
            pass
    return rows, bytes_total, conflicts


def segment_path_for(trace_dir):
    trace_dir = Path(trace_dir)
    sampled = trace_dir / "vm_bytecode_segments_sampled.tsv"
    plain = trace_dir / "vm_bytecode_segments.tsv"
    if sampled.exists():
        return sampled
    if plain.exists():
        return plain
    return None


def discover_dirs(root):
    root = Path(root)
    dirs = set()
    for name in ("vm_instruction_trace.tsv", "run.stderr"):
        for path in root.glob(f"*/{name}"):
            dirs.add(path.parent)
    return sorted(dirs, key=lambda path: str(path))


def default_dirs(root):
    dirs = {Path(path) for path in DEFAULT_TRACE_DIRS}
    dirs.update(discover_dirs(root))
    return sorted(dirs, key=lambda path: str(path))


def make_rows(args):
    trace_dirs = [Path(path) for path in (args.trace_dir or default_dirs(args.dumps_root))]
    traces = []
    for trace_dir in trace_dirs:
        path = trace_dir / "vm_instruction_trace.tsv"
        run_path = origin_run_dir(trace_dir) / "run.stderr"
        if not path.exists() and not run_path.exists():
            continue
        traces.append((trace_dir, path, load_trace(path)))

    if not traces:
        return []

    primary = None
    for trace_dir, _path, data in traces:
        if str(trace_dir) == args.primary:
            primary = data
            break
    if primary is None:
        primary = traces[0][2]

    union_sources = set()
    union_targets = set()
    union_starts = set()
    union_intervals = []
    for _trace_dir, _path, data in traces:
        union_sources.update(data["source_entries"])
        union_targets.update(data["target_entries"])
        union_starts.update(data["start_ips"])
        union_intervals.extend(data["intervals"])

    rows = []
    for trace_dir, path, data in traces:
        segment_path = segment_path_for(trace_dir)
        segment_rows = ""
        segment_bytes = ""
        segment_conflicts = ""
        if segment_path:
            seg = load_segments(segment_path)
            if seg:
                segment_rows, segment_bytes_i, segment_conflicts = seg
                segment_bytes = f"0x{segment_bytes_i:x}"
        extra_sources = data["source_entries"] - primary["source_entries"]
        missing_sources = primary["source_entries"] - data["source_entries"]
        extra_targets = data["target_entries"] - primary["target_entries"]
        missing_targets = primary["target_entries"] - data["target_entries"]
        extra_starts = data["start_ips"] - primary["start_ips"]
        missing_starts = primary["start_ips"] - data["start_ips"]
        meta = parse_run_metadata(trace_dir)
        tail_limit = meta.get("driver_tail_limit", "")
        trace_cap_status = ""
        if tail_limit and data["kinds"].get("tail"):
            try:
                limit_i = int(tail_limit, 0)
                trace_cap_status = "near_or_at_limit" if data["kinds"]["tail"] >= max(0, limit_i - 1024) else "below_limit"
            except ValueError:
                trace_cap_status = ""
        row = {
            "trace_dir": str(trace_dir),
            "trace_class": classify_dir(trace_dir),
            "runtime_config": meta["runtime_config"],
            "run_mode": meta["run_mode"],
            "driver_tail_limit": meta["driver_tail_limit"],
            "driver_tail_sites": meta["driver_tail_sites"],
            "driver_tail_regs": meta["driver_tail_regs"],
            "driver_tail_scratch": meta["driver_tail_scratch"],
            "driver_tail_mem": meta["driver_tail_mem"],
            "driver_tail_focus_ips": meta["driver_tail_focus_ips"],
            "driver_tail_focus_sites": meta["driver_tail_focus_sites"],
            "driver_tail_stop_after_matches": meta["driver_tail_stop_after_matches"],
            "driver_tail_trace": meta["driver_tail_trace"],
            "driver_scratch_offsets": meta["driver_scratch_offsets"],
            "driver_read_ranges": meta["driver_read_ranges"],
            "trace_cap_status": trace_cap_status,
            "trace_rows": str(data["rows"]),
            "source_entries": str(len(data["source_entries"])),
            "target_entries": str(len(data["target_entries"])),
            "start_vm_ips": str(len(data["start_ips"])),
            "covered_byte_ranges": str(len(merge_intervals(data["intervals"]))),
            "covered_bytes": f"0x{interval_bytes(data['intervals']):x}",
            "exact_covered_bytes": f"0x{interval_bytes(data['exact_intervals']):x}",
            "segment_rows": str(segment_rows),
            "segment_bytes": str(segment_bytes),
            "segment_conflict_offsets": str(segment_conflicts),
            "source_entries_vs_primary": f"+{len(extra_sources)}/-{len(missing_sources)}",
            "target_entries_vs_primary": f"+{len(extra_targets)}/-{len(missing_targets)}",
            "start_vm_ips_vs_primary": f"+{len(extra_starts)}/-{len(missing_starts)}",
            "source_entries_vs_union": f"{len(data['source_entries'])}/{len(union_sources)}",
            "target_entries_vs_union": f"{len(data['target_entries'])}/{len(union_targets)}",
            "start_vm_ips_vs_union": f"{len(data['start_ips'])}/{len(union_starts)}",
            "byte_statuses": fmt_counter(data["statuses"], args.max_items),
            "kinds": fmt_counter(data["kinds"], args.max_items),
            "top_sources": fmt_counter(data["events_by_source"], args.max_items),
            "top_targets": fmt_counter(data["events_by_target"], args.max_items),
            "env_flags": meta["env_flags"],
            "network_policy": meta["network_policy"],
            "network_events": meta["network_events"],
            "network_denied_events": meta["network_denied_events"],
            "network_hosts": meta["network_hosts"],
            "network_callers": meta["network_callers"],
            "spawn_policy": meta["spawn_policy"],
            "spawn_events": meta["spawn_events"],
            "spawn_denied_events": meta["spawn_denied_events"],
            "spawn_commands": meta["spawn_commands"],
            "has_run_stderr": meta["has_run_stderr"],
            "origin_run_dir": meta["origin_run_dir"],
            "path": str(path) if path.exists() else "",
        }
        rows.append(row)
    rows.sort(key=lambda row: (row["trace_class"], row["trace_dir"]))
    return rows


def emit_tsv(rows):
    fields = [
        "trace_dir",
        "trace_class",
        "runtime_config",
        "run_mode",
        "driver_tail_limit",
        "driver_tail_sites",
        "driver_tail_regs",
        "driver_tail_scratch",
        "driver_tail_mem",
        "driver_tail_focus_ips",
        "driver_tail_focus_sites",
        "driver_tail_stop_after_matches",
        "driver_tail_trace",
        "driver_scratch_offsets",
        "driver_read_ranges",
        "trace_cap_status",
        "trace_rows",
        "source_entries",
        "target_entries",
        "start_vm_ips",
        "covered_byte_ranges",
        "covered_bytes",
        "exact_covered_bytes",
        "segment_rows",
        "segment_bytes",
        "segment_conflict_offsets",
        "source_entries_vs_primary",
        "target_entries_vs_primary",
        "start_vm_ips_vs_primary",
        "source_entries_vs_union",
        "target_entries_vs_union",
        "start_vm_ips_vs_union",
        "byte_statuses",
        "kinds",
        "top_sources",
        "top_targets",
        "env_flags",
        "network_policy",
        "network_events",
        "network_denied_events",
        "network_hosts",
        "network_callers",
        "spawn_policy",
        "spawn_events",
        "spawn_denied_events",
        "spawn_commands",
        "has_run_stderr",
        "origin_run_dir",
        "path",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    print("# VM Trace Coverage Matrix\n")
    print("Dynamic VM bytecode coverage is scenario-specific; this matrix compares available run directories.\n")
    print("| Trace | Class | Mode | Tail Limit | Flags | Network | Rows | Sources | Targets | Starts | Bytes | Vs Primary Sources | Vs Primary Starts |")
    print("| --- | --- | ---: | ---: | --- | --- | ---: | ---: | ---: | ---: | ---: | ---: | ---: |")
    for row in rows:
        flags = []
        if row["driver_tail_regs"] == "1":
            flags.append("regs")
        if row["driver_tail_scratch"] == "1":
            flags.append("scratch")
        if row["driver_tail_mem"] == "1":
            flags.append("mem")
        if row["trace_class"] == "synthetic_filled_trace":
            flags.append("synthetic")
        if not flags and row.get("driver_tail_trace") == "1":
            flags.append("tail")
        print(
            f"| `{row['trace_dir']}` | `{row['trace_class']}` | {row['run_mode'] or '-'} | "
            f"{row['driver_tail_limit'] or '-'} | `{','.join(flags) or '-'}` | `{row['network_policy']}` | {row['trace_rows']} | "
            f"{row['source_entries']} | {row['target_entries']} | {row['start_vm_ips']} | "
            f"`{row['covered_bytes']}` | "
            f"`{row['source_entries_vs_primary']}` | `{row['start_vm_ips_vs_primary']}` |"
        )
    print("\n`blocked_observed` means trace_preload saw network calls and denied them, so that row is not network-enabled coverage.")
    print("The static handler inventory is broader than any one row here, but these dynamic rows do not prove full program coverage.")


def main():
    parser = argparse.ArgumentParser(description="Compare VM dynamic trace coverage across run scenarios.")
    parser.add_argument("--trace-dir", action="append", help="Trace directory containing vm_instruction_trace.tsv")
    parser.add_argument("--primary", default="dumps/vmtail-wide-1m-w16")
    parser.add_argument("--dumps-root", default="dumps")
    parser.add_argument("--max-items", type=int, default=8)
    parser.add_argument("--from-tsv", help="Render rows from a precomputed matrix TSV instead of rescanning traces")
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = list(read_tsv(args.from_tsv)) if args.from_tsv else make_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"trace_coverage_rows={len(rows)} primary={args.primary}", file=sys.stderr)


if __name__ == "__main__":
    main()
