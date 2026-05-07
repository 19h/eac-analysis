#!/usr/bin/env python3
"""Build an observed x() behavior model from VM and runtime evidence."""

from __future__ import annotations

import argparse
import csv
import re
from collections import Counter, defaultdict
from pathlib import Path


TRACE_RE = re.compile(r"^\[TRACE\] caller=eac\.elf\+0x([0-9a-fA-F]+)\s+(\S+)(?:\s+(.*))?$")


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def write_tsv(path: Path, rows: list[dict[str, object]], fields: list[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", newline="") as handle:
        writer = csv.DictWriter(handle, delimiter="\t", fieldnames=fields, lineterminator="\n")
        writer.writeheader()
        for row in rows:
            writer.writerow({field: row.get(field, "") for field in fields})


def parse_int(text: str | None) -> int:
    value = (text or "").strip()
    if not value:
        return 0
    try:
        return int(value, 16 if value.startswith("0x") else 10)
    except ValueError:
        return 0


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        cells = [str(cell).replace("|", "\\|").replace("\n", " ") for cell in row]
        lines.append("| " + " | ".join(cell if len(cell) <= 140 else cell[:137] + "..." for cell in cells) + " |")
    return "\n".join(lines)


def counter_text(counter: Counter[str], limit: int = 12) -> str:
    return ",".join(f"{key}:{count}" for key, count in counter.most_common(limit) if key)


def extract_detail(operation: str, rest: str) -> tuple[str, str, str]:
    policy: list[str] = []
    if " DENY" in rest or rest.endswith("DENY"):
        policy.append("deny")
    if " FAKE" in rest or rest.endswith("FAKE"):
        policy.append("fake")
    if "-> set" in rest:
        policy.append("set")
    if "-> unset" in rest:
        policy.append("unset")
    if operation == "popen":
        match = re.search(r"command=(.*?)\s+type=", rest)
        if match:
            return "command", match.group(1), ";".join(policy)
    for key in ["path", "node", "name", "addr", "fd", "file"]:
        match = re.search(rf"\b{key}=([^ ]+)", rest)
        if match:
            return key, match.group(1), ";".join(policy)
    return "", "", ";".join(policy)


def classify_phase(operation: str, detail_key: str, detail_value: str) -> str:
    lower = detail_value.lower()
    if operation in {"socket", "connect", "send", "recv", "recvfrom", "sendto", "getaddrinfo"}:
        return "network_connectivity"
    if operation == "popen":
        if detail_value.startswith("host "):
            return "network_dns_fallback_shell"
        return "process_or_shell_probe"
    if operation == "pthread_create":
        return "thread_start"
    if operation.startswith("pthread_"):
        return "thread_synchronization"
    if operation in {"mprotect", "mmap", "munmap", "mremap"}:
        return "self_memory_protection"
    if operation in {"getenv", "secure_getenv", "__secure_getenv"}:
        return "environment_check"
    if detail_key == "path":
        if lower in {"/dev/urandom", "/dev/random"}:
            return "entropy_seed"
        if lower.startswith("/proc/self/maps"):
            return "self_memory_map_inspection"
        if lower.startswith("/proc/") or lower.startswith("/proc/self"):
            return "process_inventory"
        if lower.startswith("/sys/class/dmi") or lower.startswith("/sys/devices/virtual/dmi"):
            return "firmware_hardware_inventory"
        if lower.startswith("/sys/class/block") or lower.startswith("/dev/disk"):
            return "storage_inventory"
        if lower in {"/proc/mounts", "/etc/mtab"}:
            return "mount_inventory"
        if lower.startswith("/sys/") or lower.startswith("/dev/"):
            return "device_inventory"
        return "filesystem_io"
    return "native_runtime_event"


def discover_logs(root: Path, coverage: list[dict[str, str]]) -> list[Path]:
    logs: set[Path] = set()
    for row in coverage:
        run_dir = row.get("origin_run_dir") or row.get("trace_dir")
        if run_dir:
            candidate = Path(run_dir) / "run.stderr"
            if candidate.exists():
                logs.add(candidate)
    for extra in [root / "run.stderr", Path("dumps/local-blocked-log/run.stderr")]:
        if extra.exists():
            logs.add(extra)
    return sorted(logs, key=lambda path: str(path))


def parse_sequences(logs: list[Path]) -> list[dict[str, object]]:
    rows: list[dict[str, object]] = []
    for log in logs:
        event_index = 0
        with log.open(encoding="utf-8", errors="replace") as handle:
            for raw in handle:
                raw = raw.rstrip("\n")
                match = TRACE_RE.match(raw)
                if not match:
                    continue
                caller_hex, operation, rest = match.groups()
                rest = rest or ""
                detail_key, detail_value, policy = extract_detail(operation, rest)
                phase = classify_phase(operation, detail_key, detail_value)
                rows.append(
                    {
                        "run_dir": str(log.parent),
                        "event_index": event_index,
                        "caller_offset": "0x" + caller_hex.lower(),
                        "operation": operation,
                        "phase": phase,
                        "detail_key": detail_key,
                        "detail_value": detail_value,
                        "policy": policy,
                        "program_binding": "runtime_native_offset_not_bound_to_vm_instruction",
                        "raw": raw[:260],
                    }
                )
                event_index += 1
    return rows


def phase_for_program(row: dict[str, str]) -> str:
    text = (row.get("exact_side_effect_categories", "") + ";" + row.get("behavior_tags", "") + ";" + row.get("summary", "")).lower()
    if "network" in text:
        return "network_connectivity_or_tls"
    if "tls_or_ssl" in text or "tls" in text:
        return "network_connectivity_or_tls"
    if "crypto" in text:
        return "crypto_hash_or_entropy"
    if "thread" in text or "sync" in text:
        return "threading"
    if "host_environment" in text or "host/environment" in text:
        return "host_inventory"
    if "process_or_shell" in text or "process or shell" in text:
        return "process_or_shell_probe"
    if "cxx_runtime" in text or "runtime/support" in text or "locale_i18n" in text:
        return "runtime_support"
    if "disassembly" in text:
        return "disassembly_metadata"
    return "vm_control_dispatch"


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    coverage_path = root / "vm_trace_coverage_matrix.tsv"
    timeline_path = root / "vm_x_program_timeline.tsv"
    first_seen_path = root / "vm_x_program_first_seen.tsv"
    dossiers_path = root / "vm_program_behavior_dossiers.tsv"
    side_effect_runtime_path = root / "vm_native_side_effect_runtime.tsv"
    for path in [coverage_path, timeline_path, first_seen_path, dossiers_path, side_effect_runtime_path]:
        if not path.exists():
            raise SystemExit(f"missing input: {path}")

    coverage = read_tsv(coverage_path)
    timeline = read_tsv(timeline_path)
    first_seen = read_tsv(first_seen_path)
    dossiers = read_tsv(dossiers_path)
    runtime_aggregate = read_tsv(side_effect_runtime_path)

    sequence_rows = parse_sequences(discover_logs(root, coverage))

    phase_counter: dict[str, Counter[str]] = defaultdict(Counter)
    phase_detail_counter: dict[str, Counter[str]] = defaultdict(Counter)
    phase_run_counter: dict[str, Counter[str]] = defaultdict(Counter)
    for row in sequence_rows:
        phase = str(row["phase"])
        run_dir = str(row["run_dir"])
        phase_counter[phase][str(row["operation"])] += 1
        if row.get("detail_value"):
            phase_detail_counter[phase][f"{row['operation']}:{row['detail_value']}"] += 1
        phase_run_counter[phase][run_dir] += 1

    phase_rows: list[dict[str, object]] = []
    for phase in sorted(phase_counter):
        phase_rows.append(
            {
                "phase": phase,
                "events": sum(phase_counter[phase].values()),
                "runs": len(phase_run_counter[phase]),
                "operations": counter_text(phase_counter[phase]),
                "top_details": counter_text(phase_detail_counter[phase], 10),
                "evidence_scope": "runtime_trace_sequence_native_offsets",
            }
        )

    dossier_by_program = {row["program"]: row for row in dossiers}
    first_seen_by_program = {row["program"]: row for row in first_seen}
    timeline_counts: Counter[str] = Counter(row.get("program", "") for row in timeline)
    overlay_rows: list[dict[str, object]] = []
    for program in sorted(dossier_by_program, key=lambda value: parse_int(value)):
        dossier = dossier_by_program[program]
        first = first_seen_by_program.get(program, {})
        overlay_rows.append(
            {
                "program": program,
                "first_seen_rank": first.get("first_seen_rank", ""),
                "first_vm_ip": first.get("first_vm_ip", ""),
                "timeline_segments": timeline_counts.get(program, 0),
                "phase_hint": phase_for_program(dossier),
                "summary": dossier.get("summary", ""),
                "behavior_tags": dossier.get("behavior_tags", ""),
                "exact_side_effect_categories": dossier.get("exact_side_effect_categories", ""),
                "top_strings": dossier.get("top_strings", ""),
                "evidence_scope": "vm_program_timeline_plus_static_refs",
            }
        )

    coverage_modes = Counter(row.get("run_mode", "") for row in coverage if row.get("run_mode"))
    coverage_network = Counter(row.get("network_policy", "") for row in coverage if row.get("network_policy"))
    network_hosts = Counter()
    for row in coverage:
        for item in row.get("network_hosts", "").split(","):
            if ":" not in item:
                continue
            host, count = item.rsplit(":", 1)
            try:
                network_hosts[host] += int(count)
            except ValueError:
                pass

    sequence_out = root / "vm_x_runtime_event_sequence.tsv"
    phase_out = root / "vm_x_behavior_phase_summary.tsv"
    overlay_out = root / "vm_x_program_phase_overlay.tsv"
    md_out = root / "vm_x_behavior_model.md"
    sequence_fields = [
        "run_dir",
        "event_index",
        "caller_offset",
        "operation",
        "phase",
        "detail_key",
        "detail_value",
        "policy",
        "program_binding",
        "raw",
    ]
    phase_fields = ["phase", "events", "runs", "operations", "top_details", "evidence_scope"]
    overlay_fields = [
        "program",
        "first_seen_rank",
        "first_vm_ip",
        "timeline_segments",
        "phase_hint",
        "summary",
        "behavior_tags",
        "exact_side_effect_categories",
        "top_strings",
        "evidence_scope",
    ]
    write_tsv(sequence_out, sequence_rows, sequence_fields)
    write_tsv(phase_out, phase_rows, phase_fields)
    write_tsv(overlay_out, overlay_rows, overlay_fields)

    phase_mix = Counter(row["phase"] for row in sequence_rows)
    first_program_rows = sorted(overlay_rows, key=lambda row: parse_int(str(row["first_seen_rank"] or "999999")))[:30]
    runtime_ops = Counter()
    for row in runtime_aggregate:
        runtime_ops[row.get("operation", "")] += parse_int(row.get("count"))
    md_lines = [
        "# x() Observed Behavior Model",
        "",
        "This model joins the recovered VM timeline with runtime side-effect traces from instrumented x() runs. Runtime events are concrete native-offset observations, but they are not proof of a per-VM-instruction binding unless a later bridge/dataflow artifact links them.",
        "",
        "## Run Coverage",
        "",
        markdown_table(
            ["metric", "value"],
            [
                ["trace rows", len(coverage)],
                ["x modes", counter_text(coverage_modes)],
                ["network policies", counter_text(coverage_network)],
                ["network hosts", counter_text(network_hosts)],
                ["runtime event sequence rows", len(sequence_rows)],
                ["runtime aggregate operations", counter_text(runtime_ops, 15)],
            ],
        ),
        "",
        "## Runtime Phases",
        "",
        markdown_table(
            ["phase", "events", "runs", "operations", "top details"],
            [[row["phase"], row["events"], row["runs"], row["operations"], row["top_details"]] for row in phase_rows],
        ),
        "",
        "## First Seen VM Program Overlay",
        "",
        markdown_table(
            ["rank", "program", "phase hint", "summary", "strings"],
            [
                [
                    row["first_seen_rank"],
                    row["program"],
                    row["phase_hint"],
                    row["summary"],
                    row["top_strings"],
                ]
                for row in first_program_rows
            ],
        ),
        "",
        "## Caveat",
        "",
        "This is an observed behavior model for available x() runs. It keeps runtime native events and VM program rows separate; it is not a proof that every runtime event is bound to a specific VM instruction, and it does not exercise real external server responses.",
    ]
    md_out.write_text("\n".join(md_lines) + "\n")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
