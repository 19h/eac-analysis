#!/usr/bin/env python3
"""Bind first-stage MBA dispatch handlers to observed central DISPATCH targets."""

from __future__ import annotations

import argparse
import csv
import re
from collections import Counter, defaultdict
from pathlib import Path


HEX_FIELD_RE = re.compile(r"\b([a-z_]+)=0x([0-9a-fA-F]+)")


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def write_tsv(path: Path, rows: list[dict[str, object]], fields: list[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", newline="") as handle:
        writer = csv.DictWriter(handle, delimiter="\t", fieldnames=fields, lineterminator="\n")
        writer.writeheader()
        for row in rows:
            writer.writerow({field: row.get(field, "") for field in fields})


def parse_int(text: str | None) -> int | None:
    value = (text or "").strip()
    if not value:
        return None
    try:
        return int(value, 16 if value.startswith("0x") else 10)
    except ValueError:
        return None


def hx(value: int | None) -> str:
    if value is None:
        return ""
    return f"-0x{-value:x}" if value < 0 else f"0x{value:x}"


def c_string(text: object) -> str:
    value = str(text).replace("\\", "\\\\").replace('"', '\\"')
    return f'"{value}"'


def compact(counter: Counter[str], limit: int = 8) -> str:
    return ",".join(f"{key}:{value}" for key, value in counter.most_common(limit))


def open_dispatch_entries(root: Path) -> set[int]:
    path = root / "vm_mba_dispatch_formula_compiler_reductions_by_entry.tsv"
    out: set[int] = set()
    for row in read_tsv(path):
        if "target_binding_not_validated" in row.get("target_binding_mix", ""):
            entry = parse_int(row.get("source_entry"))
            if entry is not None:
                out.add(entry)
    return out


def table_maps(root: Path) -> tuple[dict[int, int], dict[int, int]]:
    entry_to_target: dict[int, int] = {}
    target_to_entry: dict[int, int] = {}
    for row in read_tsv(root / "vm_table.tsv"):
        entry = parse_int(row.get("entry"))
        target = parse_int(row.get("target"))
        if entry is None or target is None:
            continue
        entry_to_target[entry] = target
        target_to_entry[target] = entry
    return entry_to_target, target_to_entry


def load_static_transfer(root: Path) -> dict[int, dict[str, str]]:
    out: dict[int, dict[str, str]] = {}
    path = root / "vm_static_transfer_expr_full_python.tsv"
    if not path.exists():
        return out
    for row in read_tsv(path):
        entry = parse_int(row.get("source_entry"))
        if entry is not None:
            out[entry] = row
    return out


def extract_events(run_path: Path, wanted: set[int], target_to_entry: dict[int, int]) -> list[dict[str, object]]:
    rows: list[dict[str, object]] = []
    pending_by_frame: dict[int, dict[str, int]] = {}
    with run_path.open(errors="replace") as handle:
        for line in handle:
            if not (line.startswith("[VMTAIL]") or line.startswith("[DISPATCH]")):
                continue
            fields = {key: int(value, 16) for key, value in HEX_FIELD_RE.findall(line)}
            frame = fields.get("frame")
            if frame is None:
                continue
            if line.startswith("[VMTAIL]"):
                target_off = fields.get("target_off")
                source_entry = target_to_entry.get(target_off) if target_off is not None else None
                if source_entry in wanted:
                    pending_by_frame[frame] = dict(fields)
                continue
            pending = pending_by_frame.pop(frame, None)
            if not pending:
                continue
            source_target = pending.get("target_off")
            source_entry = target_to_entry.get(source_target) if source_target is not None else None
            if source_entry not in wanted:
                continue
            idx = fields.get("idx")
            dispatch_target = fields.get("target_off")
            dispatch_entry = target_to_entry.get(dispatch_target) if dispatch_target is not None else None
            idx_entry = idx // 8 if idx is not None and idx % 8 == 0 else None
            tail_vm_ip = pending.get("vm_ip_off")
            dispatch_vm_ip = fields.get("vm_ip_off")
            rows.append(
                {
                    "source_entry": source_entry,
                    "source_target": hx(source_target),
                    "tail_site": hx(pending.get("site")),
                    "dispatch_site": hx(fields.get("site")),
                    "start_vm_ip": hx(tail_vm_ip),
                    "dispatch_vm_ip": hx(dispatch_vm_ip),
                    "ip_delta": hx(dispatch_vm_ip - tail_vm_ip) if dispatch_vm_ip is not None and tail_vm_ip is not None else "",
                    "idx": hx(idx),
                    "idx_entry": idx_entry if idx_entry is not None else "",
                    "target_entry": dispatch_entry if dispatch_entry is not None else "",
                    "target": hx(dispatch_target),
                    "idx_matches_target_entry": "yes" if idx_entry is not None and idx_entry == dispatch_entry else "no",
                    "table_off": hx(fields.get("table_off")),
                    "table_is_default": "yes" if fields.get("table_off") == 0xC3718 else "no",
                    "vm_state": hx(fields.get("vm_state")),
                    "vm_flags": hx(fields.get("vm_flags")),
                    "vm_byte": hx(fields.get("vm_byte")),
                    "binding_basis": "observed_central_dispatch",
                }
            )
    return rows


def summarize(rows: list[dict[str, object]], wanted: set[int], static_transfer: dict[int, dict[str, str]]) -> list[dict[str, object]]:
    by_entry: dict[int, list[dict[str, object]]] = defaultdict(list)
    for row in rows:
        by_entry[int(row["source_entry"])].append(row)

    out: list[dict[str, object]] = []
    for entry in sorted(wanted):
        entry_rows = by_entry.get(entry, [])
        idx_mix = Counter(str(row.get("idx", "")) for row in entry_rows if row.get("idx"))
        target_mix = Counter(str(row.get("target_entry", "")) for row in entry_rows if row.get("target_entry") != "")
        dispatch_site_mix = Counter(str(row.get("dispatch_site", "")) for row in entry_rows if row.get("dispatch_site"))
        ip_delta_mix = Counter(str(row.get("ip_delta", "")) for row in entry_rows if row.get("ip_delta"))
        bad_rows = [
            row
            for row in entry_rows
            if row.get("idx_matches_target_entry") != "yes" or row.get("table_is_default") != "yes"
        ]
        transfer = static_transfer.get(entry, {})
        status = "second_stage_dispatch_validated" if entry_rows and not bad_rows else "second_stage_dispatch_not_validated"
        out.append(
            {
                "source_entry": entry,
                "source_target": transfer.get("source_target", "") or (entry_rows[0].get("source_target", "") if entry_rows else ""),
                "validation_status": status,
                "events": len(entry_rows),
                "bad_events": len(bad_rows),
                "dispatch_site_mix": compact(dispatch_site_mix),
                "idx_mix": compact(idx_mix),
                "target_entry_mix": compact(target_mix),
                "ip_delta_mix": compact(ip_delta_mix),
                "static_transfer_statuses": transfer.get("statuses", ""),
                "static_transfer_target_coverage_pct": transfer.get("target_coverage_pct", ""),
                "static_transfer_target_mismatched_events": transfer.get("target_mismatched_events", ""),
                "static_transfer_branch_unknown": transfer.get("branch_unknown", ""),
                "static_transfer_top_target_exprs": transfer.get("top_target_exprs", ""),
                "static_transfer_top_slot_exprs": transfer.get("top_slot_exprs", ""),
                "note": "first-stage MBA tail enters central dispatch; final target validated from DISPATCH idx" if status == "second_stage_dispatch_validated" else "missing or inconsistent central DISPATCH evidence",
            }
        )
    return out


def emit_c(path: Path, summary_rows: list[dict[str, object]]) -> None:
    with path.open("w") as handle:
        handle.write("/* Auto-generated observed second-stage dispatch bindings. */\n")
        handle.write("#include <stdint.h>\n#include <stddef.h>\n\n")
        handle.write("#ifndef VM_DISPATCH_SECOND_STAGE_BINDINGS_C\n#define VM_DISPATCH_SECOND_STAGE_BINDINGS_C\n\n")
        handle.write("typedef struct VMDispatchSecondStageBinding {\n")
        handle.write("    uint32_t source_entry;\n")
        handle.write("    const char *validation_status;\n")
        handle.write("    uint32_t events;\n")
        handle.write("    const char *idx_mix;\n")
        handle.write("    const char *target_entry_mix;\n")
        handle.write("    const char *dispatch_site_mix;\n")
        handle.write("} VMDispatchSecondStageBinding;\n\n")
        handle.write("static const VMDispatchSecondStageBinding vm_dispatch_second_stage_bindings[] = {\n")
        for row in summary_rows:
            handle.write(
                "    {"
                f"{int(row['source_entry'])}u, {c_string(row['validation_status'])}, "
                f"{int(row['events'])}u, {c_string(row['idx_mix'])}, "
                f"{c_string(row['target_entry_mix'])}, {c_string(row['dispatch_site_mix'])}"
                "},\n"
            )
        handle.write("};\n\n")
        handle.write("enum { VM_DISPATCH_SECOND_STAGE_BINDING_COUNT = sizeof(vm_dispatch_second_stage_bindings) / sizeof(vm_dispatch_second_stage_bindings[0]) };\n\n")
        handle.write("#endif /* VM_DISPATCH_SECOND_STAGE_BINDINGS_C */\n")


def emit_md(path: Path, summary_rows: list[dict[str, object]]) -> None:
    with path.open("w") as handle:
        handle.write("# VM Dispatch Second-Stage Bindings\n\n")
        handle.write(
            "These rows close target-binding evidence for MBA dispatch handlers whose first-stage static transfer reaches "
            "the central dispatcher instead of a final VM handler. The binding is observed from `[DISPATCH] idx` lines; "
            "the slot index must be aligned, point into the normal dispatch table, and match the observed target entry.\n\n"
        )
        handle.write("| Source | Status | Events | Dispatch Sites | Idx Mix | Entry Mix | Note |\n")
        handle.write("| ---: | --- | ---: | --- | --- | --- | --- |\n")
        for row in summary_rows:
            handle.write(
                f"| {row['source_entry']} | `{row['validation_status']}` | {row['events']} | "
                f"`{row['dispatch_site_mix']}` | `{row['idx_mix']}` | `{row['target_entry_mix']}` | {row['note']} |\n"
            )


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--run", type=Path, default=Path("dumps/vmtail-state-wide-w16/run.stderr"))
    args = parser.parse_args()

    wanted = open_dispatch_entries(args.root)
    _entry_to_target, target_to_entry = table_maps(args.root)
    static_transfer = load_static_transfer(args.root)
    rows = extract_events(args.run, wanted, target_to_entry)
    summary_rows = summarize(rows, wanted, static_transfer)

    row_fields = [
        "source_entry",
        "source_target",
        "tail_site",
        "dispatch_site",
        "start_vm_ip",
        "dispatch_vm_ip",
        "ip_delta",
        "idx",
        "idx_entry",
        "target_entry",
        "target",
        "idx_matches_target_entry",
        "table_off",
        "table_is_default",
        "vm_state",
        "vm_flags",
        "vm_byte",
        "binding_basis",
    ]
    summary_fields = [
        "source_entry",
        "source_target",
        "validation_status",
        "events",
        "bad_events",
        "dispatch_site_mix",
        "idx_mix",
        "target_entry_mix",
        "ip_delta_mix",
        "static_transfer_statuses",
        "static_transfer_target_coverage_pct",
        "static_transfer_target_mismatched_events",
        "static_transfer_branch_unknown",
        "static_transfer_top_target_exprs",
        "static_transfer_top_slot_exprs",
        "note",
    ]
    write_tsv(args.root / "vm_dispatch_second_stage_binding_rows.tsv", rows, row_fields)
    write_tsv(args.root / "vm_dispatch_second_stage_binding_summary.tsv", summary_rows, summary_fields)
    emit_c(args.root / "vm_dispatch_second_stage_bindings.c", summary_rows)
    emit_md(args.root / "vm_dispatch_second_stage_bindings.md", summary_rows)
    statuses = Counter(str(row["validation_status"]) for row in summary_rows)
    print(f"second_stage_binding_entries={len(summary_rows)}")
    print(f"second_stage_binding_rows={len(rows)}")
    print("second_stage_binding_statuses=" + ",".join(f"{key}:{value}" for key, value in sorted(statuses.items())))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
