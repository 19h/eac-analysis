#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from collections import Counter
from pathlib import Path

from vm_pseudocode_dump import parse_hex, read_tsv
from vm_static_dispatch_validate import read_dispatch_table
from vm_synthetic_gap_runtime_table_memory_probe import (
    image_base_from_maps,
    mapped_image_size,
    parse_runtime_maps,
    text_range_from_sections,
)
from vm_synthetic_gap_table_memory_probe import (
    c_escape,
    fmt_hex,
    read_sections,
    section_for_off,
)


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
DEFAULT_RUNS = [
    Path("dumps/vmtail-state-residual-targets/run.stderr"),
    Path("dumps/vmtail-live-residual-targets/run.stderr"),
    Path("dumps/vmtail-residual-122e3c-context/run.stderr"),
    Path("dumps/vmtail-residual-122e3c-context-postcall/run.stderr"),
    Path("dumps/vmtail-fakenet-w16/run.stderr"),
]
DEFAULT_RUNTIME_DUMPS = [
    Path("dumps/vmtail-residual-122e3c-context-postcall"),
]


PAIR_RE = re.compile(r"([A-Za-z0-9_]+)=([^ \t]+)")


FIELDS = [
    "family_id",
    "synthetic_start_vm_ip",
    "source_entry",
    "run_dir",
    "event_line",
    "event_site",
    "event_count",
    "event_target_entry",
    "seed_quality",
    "handler_native_entry",
    "ret_patch_formula",
    "ret_patch_kind",
    "operand_bytes",
    "event_operand_u32_0",
    "family_operand_u32_0",
    "event_operand_u16_4",
    "family_operand_u16_4",
    "event_operand_u32_6",
    "family_operand_u32_6",
    "operand_match",
    "event_image_base",
    "event_image_base_source",
    "event_image_base_crosscheck",
    "ret_patch_base",
    "ret_patch_base_source",
    "ret_patch_base_matches_event_base",
    "stack_write_rsp",
    "stack_write_offset",
    "stack_write_addr",
    "stack_write_addr2",
    "patched_ret_runtime",
    "patched_ret_eac_off",
    "patched_ret_section",
    "patched_ret_file_bytes16",
    "patched_ret_text_class",
    "patched_ret2_runtime",
    "patched_ret2_eac_off",
    "patched_ret2_section",
    "patched_ret2_file_bytes16",
    "patched_ret2_text_class",
    "dynamic_next_source_entry",
    "dynamic_next_source_start_vm_ip",
    "dynamic_next_end_vm_ip",
    "observed_first_hop_vm_ip",
    "terminal_dest_vm_ip",
    "next_event_kind",
    "next_event_vm_ip",
    "next_event_target_entry",
    "next_relation",
    "ret_patch_relation",
    "ret_patch2_relation",
    "interpretation",
]


def parse_int(text):
    if text is None or text == "":
        return None
    try:
        return int(text, 0)
    except ValueError:
        return None


def h(value):
    if value is None:
        return ""
    return f"0x{value:x}"


def norm_ip(text):
    if not text:
        return ""
    try:
        return h(parse_hex(text))
    except ValueError:
        return text


def read_skeleton_targets(path):
    out = {}
    for row in read_tsv(path):
        entry = row.get("entry", "")
        target = parse_int(row.get("target", ""))
        if entry and target is not None:
            out[str(entry)] = target
    return out


def load_family_rows(path, source_entry):
    rows = []
    for row in read_tsv(path):
        if row.get("source_entry") != str(source_entry):
            continue
        row = dict(row)
        for key in (
            "synthetic_start_vm_ip",
            "dynamic_next_source_start_vm_ip",
            "dynamic_next_end_vm_ip",
            "observed_first_hop_vm_ip",
            "terminal_dest_vm_ip",
            "following_residual_start",
        ):
            row[key] = norm_ip(row.get(key, ""))
        rows.append(row)
    return sorted(rows, key=lambda row: parse_hex(row["synthetic_start_vm_ip"]))


def parse_operand_words(event):
    w0 = event.get("ip_w0")
    w1 = event.get("ip_w1")
    w2 = event.get("ip_w2")
    if w0 is None or w1 is None:
        u32_0 = None
    else:
        u32_0 = ((w1 & 0xffff) << 16) | (w0 & 0xffff)
    u16_4 = None if w2 is None else w2 & 0xffff
    return u32_0, u16_4


def parse_family_operand(row):
    raw = row.get("operand_bytes", "")
    try:
        data = bytes.fromhex(raw)
    except ValueError:
        return None, None
    if len(data) < 6:
        return None, None
    return int.from_bytes(data[:4], "little"), int.from_bytes(data[4:6], "little")


def parse_event(line, line_no, run_path, target_to_entry):
    if "[VMTAIL]" in line:
        kind = "tail"
    elif "[DISPATCH]" in line:
        kind = "dispatch"
    else:
        return None
    pairs = dict(PAIR_RE.findall(line))
    vm_ip = parse_int(pairs.get("vm_ip"))
    vm_ip_off = parse_int(pairs.get("vm_ip_off"))
    target = parse_int(pairs.get("target_off"))
    target_abs = parse_int(pairs.get("target"))
    site = parse_int(pairs.get("site"))
    if vm_ip_off is None or target is None or site is None:
        return None
    event = {
        "kind": kind,
        "line_no": line_no,
        "run_dir": str(run_path.parent),
        "site": site,
        "count": parse_int(pairs.get("count")),
        "vm_ip": vm_ip,
        "vm_ip_off": vm_ip_off,
        "target": target,
        "target_abs": target_abs,
        "entry": target_to_entry.get(target),
        "frame": parse_int(pairs.get("frame")),
        "frame_off": parse_int(pairs.get("frame_off")),
        "table": parse_int(pairs.get("table")),
        "table_off": parse_int(pairs.get("table_off")),
        "rsp": parse_int(pairs.get("rsp")),
        "rbp": parse_int(pairs.get("rbp")),
    }
    for idx in range(16):
        event[f"ip_w{idx}"] = parse_int(pairs.get(f"ip_w{idx}"))
    return event


def load_events(run_paths, target_to_entry):
    events = []
    for run_path in run_paths:
        if not run_path.exists():
            continue
        run_events = []
        with run_path.open(errors="replace") as handle:
            for line_no, line in enumerate(handle, 1):
                event = parse_event(line, line_no, run_path, target_to_entry)
                if event:
                    run_events.append(event)
        for idx, event in enumerate(run_events):
            event["next_event"] = run_events[idx + 1] if idx + 1 < len(run_events) else None
        events.extend(run_events)
    return events


def image_base_candidates(event):
    candidates = []
    if event.get("vm_ip") is not None and event.get("vm_ip_off") is not None:
        candidates.append(("vm_ip_minus_vm_ip_off", event["vm_ip"] - event["vm_ip_off"]))
    if event.get("table") is not None and event.get("table_off") is not None:
        candidates.append(("table_minus_table_off", event["table"] - event["table_off"]))
    if event.get("frame") is not None and event.get("frame_off") is not None:
        candidates.append(("frame_minus_frame_off", event["frame"] - event["frame_off"]))
    if event.get("target_abs") is not None and event.get("target") is not None:
        candidates.append(("target_minus_target_off", event["target_abs"] - event["target"]))
    return candidates


def choose_event_base(event):
    candidates = image_base_candidates(event)
    if not candidates:
        return None, "", ""
    counts = Counter(value for _name, value in candidates)
    value, _count = counts.most_common(1)[0]
    source = next(name for name, candidate in candidates if candidate == value)
    crosscheck = ",".join(f"{name}:{h(candidate)}" for name, candidate in candidates)
    return value, source, crosscheck


def read_runtime_qword_at_va(runtime_maps_by_dir, run_dir, va):
    run_path = Path(run_dir)
    search_dirs = [run_path]
    search_dirs.extend(Path(path) for path in runtime_maps_by_dir)
    seen = set()
    for dump_dir in search_dirs:
        key = str(dump_dir)
        if key in seen:
            continue
        seen.add(key)
        maps = runtime_maps_by_dir.get(key)
        if not maps:
            continue
        for item in maps:
            if item.start <= va <= item.end - 8:
                delta = va - item.start
                data = item.data[delta:delta + 8]
                if len(data) == 8:
                    return int.from_bytes(data, "little"), f"postcall_map_frame_plus_0xbb:{dump_dir.name}"
    return None, ""


def classify_text_off(value, text_range):
    if value is None:
        return ""
    text_start, text_end = text_range
    if text_start <= value < text_end:
        return "inside_text"
    return "outside_text"


def next_relation(family, next_event):
    if not next_event:
        return "no_following_event_in_run"
    next_ip = h(next_event["vm_ip_off"])
    first_hop = family.get("observed_first_hop_vm_ip", "")
    following = family.get("following_residual_start", "")
    terminal = family.get("terminal_dest_vm_ip", "")
    if terminal and next_ip == terminal:
        return "next_event_is_terminal_reentry"
    if first_hop and next_ip == first_hop:
        return "next_event_is_observed_first_hop"
    if following and next_ip == following:
        return "next_event_is_following_residual"
    return "next_event_differs_from_family_chain"


def ret_patch_relation(family, patched_eac_off, text_class):
    if patched_eac_off is None:
        return "ret_patch_target_unknown"
    patched = h(patched_eac_off)
    if patched == family.get("dynamic_next_source_start_vm_ip", ""):
        return "ret_patch_equals_dynamic_next_source_start"
    if patched == family.get("dynamic_next_end_vm_ip", ""):
        return "ret_patch_equals_dynamic_next_end"
    if patched == family.get("observed_first_hop_vm_ip", ""):
        return "ret_patch_equals_observed_first_hop"
    if patched == family.get("terminal_dest_vm_ip", ""):
        return "ret_patch_equals_terminal_dest"
    if text_class == "inside_text":
        return "native_ret_patch_text_offset_not_vm_ip"
    return "native_ret_patch_outside_text_not_vm_ip"


def build_rows(args):
    eac = Path(args.eac).read_bytes()
    sections = read_sections(eac)
    text_range = text_range_from_sections(sections)
    table = read_dispatch_table(args.eac)
    target_to_entry = {target: idx for idx, target in enumerate(table)}
    skeleton_targets = read_skeleton_targets(args.skeletons)
    source_target = skeleton_targets.get(str(args.source_entry))
    family_rows = load_family_rows(args.family_audit, args.source_entry)
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
        if not family or event.get("entry") != args.source_entry:
            continue
        if source_target is not None and event.get("target") != source_target:
            continue

        event_u32, event_u16 = parse_operand_words(event)
        family_u32, family_u16 = parse_family_operand(family)
        operand_match = (
            "yes"
            if event_u32 == family_u32 and event_u16 == family_u16
            else "no"
        )
        u32_0 = family_u32 if family_u32 is not None else event_u32
        u16_4 = family_u16 if family_u16 is not None else event_u16

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

        patched_runtime = None
        patched_eac_off = None
        if ret_base is not None and u32_0 is not None:
            patched_runtime = ret_base + u32_0
            if event_base is not None:
                patched_eac_off = patched_runtime - event_base
            elif direct_base is not None:
                patched_eac_off = u32_0

        stack_write_addr = None
        if event.get("rsp") is not None and u16_4 is not None:
            stack_write_addr = event["rsp"] + u16_4

        if patched_eac_off is not None and 0 <= patched_eac_off < len(eac):
            patched_bytes = eac[patched_eac_off:patched_eac_off + 16].hex()
        else:
            patched_bytes = ""
        text_class = classify_text_off(patched_eac_off, text_range)
        section = section_for_off(sections, patched_eac_off) if patched_eac_off is not None else ""
        next_event = event.get("next_event")
        relation = next_relation(family, next_event)
        patch_relation = ret_patch_relation(family, patched_eac_off, text_class)
        if text_class == "inside_text":
            interpretation = "sampled_native_return_patch_controls_hidden_text_reentry"
        elif patched_eac_off is not None:
            interpretation = "sampled_native_return_patch_targets_non_text"
        else:
            interpretation = "sampled_native_return_patch_target_unresolved"

        out.append({
            "family_id": family.get("family_id", ""),
            "synthetic_start_vm_ip": h(start),
            "source_entry": str(args.source_entry),
            "run_dir": event.get("run_dir", ""),
            "event_line": str(event.get("line_no", "")),
            "event_site": h(event.get("site")),
            "event_count": str(event.get("count") or ""),
            "event_target_entry": str(event.get("entry", "")),
            "seed_quality": "full_gpr_snapshot" if event.get("rsp") is not None else "frame_only_snapshot",
            "handler_native_entry": h(source_target),
            "ret_patch_formula": "*(uint64_t *)(rsp + u16_4) = frame_qword_0xbb + u32_0; ret",
            "ret_patch_kind": "single_stack_return",
            "operand_bytes": family.get("operand_bytes", ""),
            "event_operand_u32_0": h(event_u32),
            "family_operand_u32_0": h(family_u32),
            "event_operand_u16_4": h(event_u16),
            "family_operand_u16_4": h(family_u16),
            "event_operand_u32_6": "",
            "family_operand_u32_6": "",
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
            "stack_write_addr2": "",
            "patched_ret_runtime": h(patched_runtime),
            "patched_ret_eac_off": h(patched_eac_off),
            "patched_ret_section": section,
            "patched_ret_file_bytes16": patched_bytes,
            "patched_ret_text_class": text_class,
            "patched_ret2_runtime": "",
            "patched_ret2_eac_off": "",
            "patched_ret2_section": "",
            "patched_ret2_file_bytes16": "",
            "patched_ret2_text_class": "",
            "dynamic_next_source_entry": family.get("dynamic_next_source_entry", ""),
            "dynamic_next_source_start_vm_ip": family.get("dynamic_next_source_start_vm_ip", ""),
            "dynamic_next_end_vm_ip": family.get("dynamic_next_end_vm_ip", ""),
            "observed_first_hop_vm_ip": family.get("observed_first_hop_vm_ip", ""),
            "terminal_dest_vm_ip": family.get("terminal_dest_vm_ip", ""),
            "next_event_kind": next_event.get("kind", "") if next_event else "",
            "next_event_vm_ip": h(next_event.get("vm_ip_off")) if next_event else "",
            "next_event_target_entry": str(next_event.get("entry", "")) if next_event else "",
            "next_relation": relation,
            "ret_patch_relation": patch_relation,
            "ret_patch2_relation": "",
            "interpretation": interpretation,
        })

    out.sort(key=lambda row: (
        parse_hex(row["synthetic_start_vm_ip"]),
        row["run_dir"],
        int(row["event_line"] or 0),
    ))
    return out


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
    print("# Source 299 Ret-Patch Probe\n")
    print(
        "Source 299 is a native return-patch thunk: it combines the bytecode `u32_0` "
        "operand with the VM-frame qword at `+0xbb`, writes that address to "
        "`rsp + u16_4`, restores registers, and returns. This probe materializes "
        "that hidden native control transfer for the source-299 residual gaps.\n"
    )
    print(f"Rows: `{len(rows)}`")
    print(f"Starts: `{len(set(row['synthetic_start_vm_ip'] for row in rows))}`\n")

    emit_counter("Start", Counter(row["synthetic_start_vm_ip"] for row in rows))
    emit_counter("Seed Quality", Counter(row["seed_quality"] for row in rows))
    emit_counter("Ret Patch Relation", Counter(row["ret_patch_relation"] for row in rows))
    emit_counter("Interpretation", Counter(row["interpretation"] for row in rows))

    print("## Rows\n")
    print(
        "| Start | Run | Operand | Stack Slot | Patched Ret | Section | Next | Relation | Interpretation |"
    )
    print("| --- | --- | ---: | ---: | ---: | --- | --- | --- | --- |")
    for row in rows:
        run = Path(row.get("run_dir", "")).name
        next_text = "-"
        if row.get("next_event_vm_ip"):
            next_text = (
                f"{row.get('next_event_kind')}@{row.get('next_event_vm_ip')}"
                f"->entry_{row.get('next_event_target_entry') or '?'}"
            )
        print(
            f"| `{row.get('synthetic_start_vm_ip')}` | `{run}` | "
            f"`{row.get('family_operand_u32_0')}` | `{row.get('stack_write_offset')}` | "
            f"`{row.get('patched_ret_eac_off')}` | `{row.get('patched_ret_section') or '-'}` | "
            f"`{next_text}` | `{row.get('ret_patch_relation')}` | "
            f"`{row.get('interpretation')}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Recover source-299 native return-patch control targets.")
    parser.add_argument("--family-audit", default=str(TRACE_DIR / "vm_synthetic_gap_unresolved_family_audit.tsv"))
    parser.add_argument("--skeletons", default=str(TRACE_DIR / "vm_handler_skeletons.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--source-entry", type=int, default=299)
    parser.add_argument("--family", default="")
    parser.add_argument("--runs", nargs="*", default=[str(path) for path in DEFAULT_RUNS])
    parser.add_argument("--runtime-dump-dir", nargs="*", default=[str(path) for path in DEFAULT_RUNTIME_DUMPS])
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"synthetic_gap_source299_ret_patch_probe_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
