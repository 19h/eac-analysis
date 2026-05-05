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
    choose_event_base,
    classify_text_off,
    c_escape,
    h,
    image_base_from_maps,
    load_events,
    load_family_rows,
    mapped_image_size,
    next_relation,
    parse_hex,
    parse_family_operand,
    parse_runtime_maps,
    read_dispatch_table,
    read_runtime_qword_at_va,
    read_sections,
    read_skeleton_targets,
    ret_patch_relation,
    section_for_off,
    text_range_from_sections,
    parse_operand_words,
)


DEFAULT_SOURCE_ENTRIES = [175, 195, 278, 299]


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


def parse_event_u32_6(event):
    w3 = event.get("ip_w3")
    w4 = event.get("ip_w4")
    if w3 is None or w4 is None:
        return None
    return ((w4 & 0xffff) << 16) | (w3 & 0xffff)


def parse_source278_family_operand(row):
    u32_0, u16_4 = parse_family_operand(row)
    raw = row.get("operand_bytes", "")
    try:
        data = bytes.fromhex(raw)
    except ValueError:
        return u32_0, u16_4, None
    if len(data) < 10:
        return u32_0, u16_4, None
    return u32_0, u16_4, int.from_bytes(data[6:10], "little")


def file_bytes(eac, off):
    if off is not None and 0 <= off < len(eac):
        return eac[off:off + 16].hex()
    return ""


def build_source278_rows(args):
    eac = Path(args.eac).read_bytes()
    sections = read_sections(eac)
    text_range = text_range_from_sections(sections)
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    skeleton_targets = read_skeleton_targets(args.skeletons)
    source_target = skeleton_targets.get("278")
    family_rows = load_family_rows(args.family_audit, 278)
    if args.family:
        family_rows = [row for row in family_rows if row.get("family_id") == args.family]
    family_by_start = {parse_hex(row["synthetic_start_vm_ip"]): row for row in family_rows}

    runtime_maps_by_dir = {}
    for dump_dir in [Path(path) for path in args.runtime_dump_dir]:
        maps = parse_runtime_maps(dump_dir)
        if maps:
            runtime_maps_by_dir[str(dump_dir)] = maps
            image_base_from_maps(maps)
            mapped_image_size(maps)

    events = load_events([Path(path) for path in args.runs], target_to_entry)
    out = []
    for event in events:
        start = event["vm_ip_off"]
        family = family_by_start.get(start)
        if not family or event.get("entry") != 278:
            continue
        if source_target is not None and event.get("target") != source_target:
            continue

        event_u32_0, event_u16 = parse_operand_words(event)
        event_u32_6 = parse_event_u32_6(event)
        family_u32_0, family_u16, family_u32_6 = parse_source278_family_operand(family)
        operand_match = (
            "yes"
            if event_u32_0 == family_u32_0 and event_u16 == family_u16 and event_u32_6 == family_u32_6
            else "no"
        )
        u32_0 = family_u32_0 if family_u32_0 is not None else event_u32_0
        u16_4 = family_u16 if family_u16 is not None else event_u16
        u32_6 = family_u32_6 if family_u32_6 is not None else event_u32_6

        event_base, event_base_source, event_base_crosscheck = choose_event_base(event)
        direct_base = None
        direct_base_source = ""
        frame = event.get("frame")
        if frame is not None:
            direct_base, direct_base_source = read_runtime_qword_at_va(
                runtime_maps_by_dir,
                event["run_dir"],
                frame + 0xbb,
            )
        if direct_base is not None:
            ret_base = direct_base
            ret_base_source = direct_base_source
        else:
            ret_base = event_base
            ret_base_source = f"inferred_{event_base_source}" if event_base_source else ""

        patched1_runtime = ret_base + u32_6 if ret_base is not None and u32_6 is not None else None
        patched2_runtime = ret_base + u32_0 if ret_base is not None and u32_0 is not None else None
        patched1_off = patched1_runtime - event_base if patched1_runtime is not None and event_base is not None else u32_6 if direct_base is not None else None
        patched2_off = patched2_runtime - event_base if patched2_runtime is not None and event_base is not None else u32_0 if direct_base is not None else None

        stack_write_addr = event["rsp"] + u16_4 if event.get("rsp") is not None and u16_4 is not None else None
        stack_write_addr2 = stack_write_addr + 8 if stack_write_addr is not None else None

        text_class1 = classify_text_off(patched1_off, text_range)
        text_class2 = classify_text_off(patched2_off, text_range)
        section1 = section_for_off(sections, patched1_off) if patched1_off is not None else ""
        section2 = section_for_off(sections, patched2_off) if patched2_off is not None else ""
        next_event = event.get("next_event")
        relation = next_relation(family, next_event)
        patch_relation1 = ret_patch_relation(family, patched1_off, text_class1)
        patch_relation2 = ret_patch_relation(family, patched2_off, text_class2)
        if text_class1 == "inside_text" and text_class2 == "inside_text":
            interpretation = "sampled_native_double_return_patch_controls_hidden_text_reentry"
        elif text_class1 == "inside_text" or text_class2 == "inside_text":
            interpretation = "sampled_native_double_return_patch_partially_text"
        elif patched1_off is not None or patched2_off is not None:
            interpretation = "sampled_native_double_return_patch_targets_non_text"
        else:
            interpretation = "sampled_native_double_return_patch_target_unresolved"

        out.append({
            "family_id": family.get("family_id", ""),
            "synthetic_start_vm_ip": h(start),
            "source_entry": "278",
            "run_dir": event.get("run_dir", ""),
            "event_line": str(event.get("line_no", "")),
            "event_site": h(event.get("site")),
            "event_count": str(event.get("count") or ""),
            "event_target_entry": str(event.get("entry", "")),
            "seed_quality": "full_gpr_snapshot" if event.get("rsp") is not None else "frame_only_snapshot",
            "handler_native_entry": h(source_target),
            "ret_patch_formula": (
                "*(uint64_t *)(rsp + u16_4) = frame_qword_0xbb + u32_6; "
                "*(uint64_t *)(rsp + u16_4 + 8) = frame_qword_0xbb + u32_0; ret"
            ),
            "ret_patch_kind": "double_stack_return",
            "operand_bytes": family.get("operand_bytes", ""),
            "event_operand_u32_0": h(event_u32_0),
            "family_operand_u32_0": h(family_u32_0),
            "event_operand_u16_4": h(event_u16),
            "family_operand_u16_4": h(family_u16),
            "event_operand_u32_6": h(event_u32_6),
            "family_operand_u32_6": h(family_u32_6),
            "operand_match": operand_match,
            "event_image_base": h(event_base),
            "event_image_base_source": event_base_source,
            "event_image_base_crosscheck": event_base_crosscheck,
            "ret_patch_base": h(ret_base),
            "ret_patch_base_source": ret_base_source,
            "ret_patch_base_matches_event_base": (
                "yes" if ret_base is not None and event_base is not None and ret_base == event_base else "no"
            ),
            "stack_write_rsp": h(event.get("rsp")),
            "stack_write_offset": h(u16_4),
            "stack_write_addr": h(stack_write_addr),
            "stack_write_addr2": h(stack_write_addr2),
            "patched_ret_runtime": h(patched1_runtime),
            "patched_ret_eac_off": h(patched1_off),
            "patched_ret_section": section1,
            "patched_ret_file_bytes16": file_bytes(eac, patched1_off),
            "patched_ret_text_class": text_class1,
            "patched_ret2_runtime": h(patched2_runtime),
            "patched_ret2_eac_off": h(patched2_off),
            "patched_ret2_section": section2,
            "patched_ret2_file_bytes16": file_bytes(eac, patched2_off),
            "patched_ret2_text_class": text_class2,
            "dynamic_next_source_entry": family.get("dynamic_next_source_entry", ""),
            "dynamic_next_source_start_vm_ip": family.get("dynamic_next_source_start_vm_ip", ""),
            "dynamic_next_end_vm_ip": family.get("dynamic_next_end_vm_ip", ""),
            "observed_first_hop_vm_ip": family.get("observed_first_hop_vm_ip", ""),
            "terminal_dest_vm_ip": family.get("terminal_dest_vm_ip", ""),
            "next_event_kind": next_event.get("kind", "") if next_event else "",
            "next_event_vm_ip": h(next_event.get("vm_ip_off")) if next_event else "",
            "next_event_target_entry": str(next_event.get("entry", "")) if next_event else "",
            "next_relation": relation,
            "ret_patch_relation": patch_relation1,
            "ret_patch2_relation": patch_relation2,
            "interpretation": interpretation,
        })

    out.sort(key=lambda row: (
        parse_hex(row["synthetic_start_vm_ip"]),
        row["run_dir"],
        int(row["event_line"] or 0),
    ))
    return out


def build_all_rows(args):
    rows = []
    for source_entry in args.source_entry:
        if source_entry == 278:
            rows.extend(build_source278_rows(probe_args(args, source_entry)))
        else:
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
        "This probe generalizes native return-patch checks across sampled "
        "unresolved-control entries. Sources 175, 195, and 299 write "
        "`frame_qword_0xbb + u32_0` to `rsp + u16_4`; source 278 writes "
        "two stacked return addresses from `u32_6` and `u32_0`. These handlers "
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
        operand = row.get("family_operand_u32_0")
        patched = row.get("patched_ret_eac_off")
        section = row.get("patched_ret_section") or "-"
        relation = row.get("ret_patch_relation")
        if row.get("ret_patch_kind") == "double_stack_return":
            operand = f"{row.get('family_operand_u32_6')}->{row.get('family_operand_u32_0')}"
            patched = f"{row.get('patched_ret_eac_off')}->{row.get('patched_ret2_eac_off')}"
            section = f"{row.get('patched_ret_section') or '-'}->{row.get('patched_ret2_section') or '-'}"
            relation = f"{row.get('ret_patch_relation')}->{row.get('ret_patch2_relation')}"
        print(
            f"| `{row.get('source_entry')}` | `{row.get('synthetic_start_vm_ip')}` | `{run}` | "
            f"`{operand}` | `{row.get('stack_write_offset')}` | "
            f"`{patched}` | `{section}` | "
            f"`{next_text}` | `{relation}` | "
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
