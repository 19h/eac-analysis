#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter
from pathlib import Path
from types import SimpleNamespace

from vm_synthetic_gap_source299_ret_patch_probe import (
    DEFAULT_RUNS,
    DEFAULT_RUNTIME_DUMPS,
    FIELDS,
    TRACE_DIR,
    build_rows,
    c_escape,
    parse_hex,
)


DEFAULT_SOURCE_ENTRIES = [175, 195, 299]


def probe_args(args, source_entry):
    return SimpleNamespace(
        family_audit=args.family_audit,
        skeletons=args.skeletons,
        eac=args.eac,
        source_entry=source_entry,
        family=args.family,
        runs=args.runs,
        runtime_dump_dir=args.runtime_dump_dir,
    )


def build_all_rows(args):
    rows = []
    for source_entry in args.source_entry:
        rows.extend(build_rows(probe_args(args, source_entry)))
    rows.sort(key=lambda row: (
        int(row.get("source_entry", "0") or "0", 10),
        parse_hex(row.get("synthetic_start_vm_ip", "0x0")),
        Path(row.get("run_dir", "")).name,
        int(row.get("event_line", "0") or "0"),
    ))
    return rows


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_counter(title, counter):
    print(f"### {title}\n")
    print("| Value | Rows |")
    print("| --- | ---: |")
    for key, value in counter.most_common():
        print(f"| `{c_escape(key or '-')}` | {value} |")
    print()


def emit_markdown(rows):
    print("# Sampled Ret-Patch Probe\n")
    print(
        "This probe generalizes the source-299 return-patch check across sampled "
        "unresolved-control entries whose native handlers write "
        "`frame_qword_0xbb + u32_0` to `rsp + u16_4`, restore registers, and "
        "return into native `.text` instead of taking a normal VM dispatch-table slot.\n"
    )
    print(f"Rows: `{len(rows)}`")
    print(f"Sources: `{len(set(row['source_entry'] for row in rows))}`")
    print(f"Starts: `{len(set(row['synthetic_start_vm_ip'] for row in rows))}`\n")

    emit_counter("Source Entry", Counter(row["source_entry"] for row in rows))
    emit_counter("Start", Counter(row["synthetic_start_vm_ip"] for row in rows))
    emit_counter("Seed Quality", Counter(row["seed_quality"] for row in rows))
    emit_counter("Ret Patch Relation", Counter(row["ret_patch_relation"] for row in rows))
    emit_counter("Interpretation", Counter(row["interpretation"] for row in rows))

    print("## Rows\n")
    print(
        "| Source | Start | Run | Operand | Stack Slot | Patched Ret | Section | Next | Relation | Interpretation |"
    )
    print("| ---: | --- | --- | ---: | ---: | ---: | --- | --- | --- | --- |")
    for row in rows:
        run = Path(row.get("run_dir", "")).name
        next_text = "-"
        if row.get("next_event_vm_ip"):
            next_text = (
                f"{row.get('next_event_kind')}@{row.get('next_event_vm_ip')}"
                f"->entry_{row.get('next_event_target_entry') or '?'}"
            )
        print(
            f"| `{row.get('source_entry')}` | `{row.get('synthetic_start_vm_ip')}` | `{run}` | "
            f"`{row.get('family_operand_u32_0')}` | `{row.get('stack_write_offset')}` | "
            f"`{row.get('patched_ret_eac_off')}` | `{row.get('patched_ret_section') or '-'}` | "
            f"`{next_text}` | `{row.get('ret_patch_relation')}` | "
            f"`{row.get('interpretation')}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Recover sampled native return-patch control targets.")
    parser.add_argument("--family-audit", default=str(TRACE_DIR / "vm_synthetic_gap_unresolved_family_audit.tsv"))
    parser.add_argument("--skeletons", default=str(TRACE_DIR / "vm_handler_skeletons.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--source-entry", action="append", type=int, default=[])
    parser.add_argument("--family", default="")
    parser.add_argument("--runs", nargs="*", default=[str(path) for path in DEFAULT_RUNS])
    parser.add_argument("--runtime-dump-dir", nargs="*", default=[str(path) for path in DEFAULT_RUNTIME_DUMPS])
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    if not args.source_entry:
        args.source_entry = list(DEFAULT_SOURCE_ENTRIES)

    rows = build_all_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_sampled_ret_patch_probe_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
