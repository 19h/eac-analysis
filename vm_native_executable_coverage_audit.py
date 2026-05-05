#!/usr/bin/env python3
import argparse
import csv
import re
import subprocess
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
ELF_PATH = Path("eac.elf")


def parse_int(value):
    value = str(value).strip()
    if not value or value == "-":
        return None
    return int(value, 16 if value.startswith("0x") else 10)


def read_tsv(path):
    path = Path(path)
    if not path.exists():
        return []
    with path.open(newline="") as f:
        return list(csv.DictReader(f, delimiter="\t"))


def executable_sections():
    out = subprocess.check_output(["readelf", "-SW", str(ELF_PATH)], text=True)
    sections = []
    pattern = re.compile(
        r"^\s*\[\s*\d+\]\s+(\S+)\s+\S+\s+([0-9a-fA-F]+)\s+"
        r"([0-9a-fA-F]+)\s+([0-9a-fA-F]+)\s+\S+\s+(\S+)"
    )
    for line in out.splitlines():
        m = pattern.match(line)
        if not m:
            continue
        name, addr, off, size, flags = m.groups()
        if "A" not in flags or "X" not in flags:
            continue
        start = int(addr, 16)
        file_off = int(off, 16)
        span = int(size, 16)
        if span == 0:
            continue
        sections.append({
            "name": name,
            "start": start,
            "stop": start + span,
            "file_off": file_off,
            "size": span,
            "flags": flags,
        })
    return sections


def add_range(ranges, start, stop, source, detail):
    if start is None or stop is None:
        return
    if stop <= start:
        return
    ranges.append({
        "start": start,
        "stop": stop,
        "bytes": stop - start,
        "source": source,
        "detail": detail[:180],
    })


def add_dash_ranges(ranges, text, source, detail):
    for start, stop in re.findall(r"0x([0-9a-fA-F]+)\s*-\s*0x([0-9a-fA-F]+)", text):
        add_range(ranges, int(start, 16), int(stop, 16), source, detail)


def recovered_ranges():
    ranges = []

    for row in read_tsv(TRACE_DIR / "vm_handler_retdec_index.tsv"):
        entry = row.get("entry", "?")
        klass = row.get("class", "?")
        add_range(
            ranges,
            parse_int(row.get("selected_start")),
            parse_int(row.get("selected_stop")),
            "handler_retdec_selected",
            f"entry={entry};class={klass};sidecar={row.get('sidecar', '')}",
        )
        for item in row.get("function_ranges", "").split(","):
            item = item.strip()
            m = re.match(r"0x([0-9a-fA-F]+)-0x([0-9a-fA-F]+)$", item)
            if m:
                add_range(
                    ranges,
                    int(m.group(1), 16),
                    int(m.group(2), 16),
                    "handler_retdec_function",
                    f"entry={entry};class={klass};sidecar={row.get('sidecar', '')}",
                )

    for c_path in sorted(TRACE_DIR.glob("vm_*retdec*.c")):
        text = c_path.read_text(errors="replace")
        for start, stop in re.findall(r"// Address range: 0x([0-9a-fA-F]+) - 0x([0-9a-fA-F]+)", text):
            add_range(
                ranges,
                int(start, 16),
                int(stop, 16),
                "retdec_address_range",
                c_path.name,
            )
        add_dash_ranges(ranges, text.split("*/", 1)[0] if "*/" in text else "", "retdec_header_range", c_path.name)

    for row in read_tsv(TRACE_DIR / "vm_synthetic_gap_ret_patch_native_target_atlas.tsv"):
        add_range(
            ranges,
            parse_int(row.get("disasm_start")),
            parse_int(row.get("disasm_stop")),
            "retpatch_disasm_window",
            f"entry={row.get('source_entry', '')};vm_ip={row.get('synthetic_start_vm_ip', '')};target={row.get('patched_ret_eac_off', '')}",
        )

    for row in read_tsv(TRACE_DIR / "vm_native_obfuscated_islands.tsv"):
        add_range(
            ranges,
            parse_int(row.get("range_start")),
            parse_int(row.get("range_stop")),
            "obfuscated_island_range",
            f"entry={row.get('entry', '')};kind={row.get('kind', '')};downstream={row.get('downstream', '')}",
        )

    for row in read_tsv(TRACE_DIR / "vm_native_obfuscated_second_stage.tsv"):
        add_range(
            ranges,
            parse_int(row.get("scan_start")),
            parse_int(row.get("scan_stop")),
            "obfuscated_second_stage_scan",
            f"entry={row.get('entry', '')};indirect={row.get('indirect_jmp_site', '')};chain={row.get('chain', '')}",
        )

    return ranges


def clamp_ranges_to_sections(ranges, sections):
    out = []
    for r in ranges:
        for sec in sections:
            start = max(r["start"], sec["start"])
            stop = min(r["stop"], sec["stop"])
            if stop <= start:
                continue
            item = dict(r)
            item["start"] = start
            item["stop"] = stop
            item["bytes"] = stop - start
            item["section"] = sec["name"]
            out.append(item)
    return out


def merge_intervals(intervals):
    merged = []
    for start, stop in sorted(intervals):
        if not merged or start > merged[-1][1]:
            merged.append([start, stop])
        else:
            merged[-1][1] = max(merged[-1][1], stop)
    return [(a, b) for a, b in merged]


def compute():
    sections = executable_sections()
    ranges = clamp_ranges_to_sections(recovered_ranges(), sections)
    section_rows = []
    gaps = []
    for sec in sections:
        intervals = merge_intervals((r["start"], r["stop"]) for r in ranges if r["section"] == sec["name"])
        covered = sum(stop - start for start, stop in intervals)
        section_rows.append({
            "row_type": "section",
            "section": sec["name"],
            "start": sec["start"],
            "stop": sec["stop"],
            "bytes": sec["size"],
            "covered_bytes": covered,
            "uncovered_bytes": sec["size"] - covered,
            "coverage_x100": (covered * 10000) // sec["size"],
            "range_count": sum(1 for r in ranges if r["section"] == sec["name"]),
            "merged_range_count": len(intervals),
        })
        pos = sec["start"]
        for start, stop in intervals:
            if start > pos:
                gaps.append({
                    "row_type": "gap",
                    "section": sec["name"],
                    "start": pos,
                    "stop": start,
                    "bytes": start - pos,
                    "covered_bytes": 0,
                    "uncovered_bytes": start - pos,
                    "coverage_x100": 0,
                    "range_count": 0,
                    "merged_range_count": 0,
                })
            pos = max(pos, stop)
        if pos < sec["stop"]:
            gaps.append({
                "row_type": "gap",
                "section": sec["name"],
                "start": pos,
                "stop": sec["stop"],
                "bytes": sec["stop"] - pos,
                "covered_bytes": 0,
                "uncovered_bytes": sec["stop"] - pos,
                "coverage_x100": 0,
                "range_count": 0,
                "merged_range_count": 0,
            })
    ranges.sort(key=lambda r: (r["section"], r["start"], r["stop"], r["source"], r["detail"]))
    gaps.sort(key=lambda r: (-r["bytes"], r["section"], r["start"]))
    return section_rows, ranges, gaps


def hx(value):
    return f"0x{value:x}"


def cstr(value):
    return '"' + str(value).replace("\\", "\\\\").replace('"', '\\"') + '"'


def emit_tsv(section_rows, ranges, gaps):
    print("row_type\tsection\tstart\tstop\tbytes\tcovered_bytes\tuncovered_bytes\tcoverage_x100\trange_count\tmerged_range_count\tsource\tdetail")
    for row in section_rows + gaps:
        print("\t".join([
            row["row_type"],
            row["section"],
            hx(row["start"]),
            hx(row["stop"]),
            str(row["bytes"]),
            str(row["covered_bytes"]),
            str(row["uncovered_bytes"]),
            str(row["coverage_x100"]),
            str(row["range_count"]),
            str(row["merged_range_count"]),
            "",
            "",
        ]))
    for row in ranges:
        print("\t".join([
            "range",
            row["section"],
            hx(row["start"]),
            hx(row["stop"]),
            str(row["bytes"]),
            str(row["bytes"]),
            "0",
            "10000",
            "1",
            "1",
            row["source"],
            row["detail"],
        ]))


def emit_md(section_rows, ranges, gaps):
    total = sum(row["bytes"] for row in section_rows)
    covered = sum(row["covered_bytes"] for row in section_rows)
    print("# Native Executable Coverage Audit\n")
    print("Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.\n")
    print(f"- executable sections: {len(section_rows)}")
    print(f"- executable bytes: {total}")
    print(f"- recovered executable bytes: {covered}")
    print(f"- uncovered executable bytes: {total - covered}")
    print(f"- recovered range rows: {len(ranges)}")
    print(f"- uncovered gaps: {len(gaps)}\n")
    print("| section | range | bytes | covered | uncovered | coverage | ranges |")
    print("| --- | --- | ---: | ---: | ---: | ---: | ---: |")
    for row in section_rows:
        print(
            f"| `{row['section']}` | `{hx(row['start'])}-{hx(row['stop'])}` | "
            f"{row['bytes']} | {row['covered_bytes']} | {row['uncovered_bytes']} | "
            f"{row['coverage_x100'] / 100:.2f}% | {row['range_count']} |"
        )
    print("\n## Largest Uncovered Gaps\n")
    print("| section | range | bytes |")
    print("| --- | --- | ---: |")
    for row in gaps[:40]:
        print(f"| `{row['section']}` | `{hx(row['start'])}-{hx(row['stop'])}` | {row['bytes']} |")


def emit_c(section_rows, ranges, gaps):
    print("/*")
    print(" * Native executable coverage audit.")
    print(" * Compares executable ELF sections with native ranges represented by C sidecars.")
    print(" * Uncovered gaps are explicit frontier rows, not reconstructed code.")
    print(" */")
    print("#include <stdint.h>")
    print("")
    print("typedef struct VMNativeExecSectionCoverage {")
    print("    const char *section;")
    print("    uint64_t start;")
    print("    uint64_t stop;")
    print("    uint64_t bytes;")
    print("    uint64_t covered_bytes;")
    print("    uint64_t uncovered_bytes;")
    print("    uint32_t coverage_x100;")
    print("    uint32_t range_count;")
    print("    uint32_t merged_range_count;")
    print("} VMNativeExecSectionCoverage;")
    print("")
    print("typedef struct VMNativeRecoveredRange {")
    print("    const char *section;")
    print("    uint64_t start;")
    print("    uint64_t stop;")
    print("    uint64_t bytes;")
    print("    const char *source;")
    print("    const char *detail;")
    print("} VMNativeRecoveredRange;")
    print("")
    print("typedef struct VMNativeExecutableGap {")
    print("    const char *section;")
    print("    uint64_t start;")
    print("    uint64_t stop;")
    print("    uint64_t bytes;")
    print("} VMNativeExecutableGap;")
    print("")
    print("static const VMNativeExecSectionCoverage k_vm_native_exec_section_coverage[] = {")
    for row in section_rows:
        print(
            f"    {{ {cstr(row['section'])}, {hx(row['start'])}ull, {hx(row['stop'])}ull, "
            f"{row['bytes']}ull, {row['covered_bytes']}ull, {row['uncovered_bytes']}ull, "
            f"{row['coverage_x100']}u, {row['range_count']}u, {row['merged_range_count']}u }},"
        )
    print("};")
    print("")
    print("static const VMNativeRecoveredRange k_vm_native_recovered_ranges[] = {")
    for row in ranges:
        print(
            f"    {{ {cstr(row['section'])}, {hx(row['start'])}ull, {hx(row['stop'])}ull, "
            f"{row['bytes']}ull, {cstr(row['source'])}, {cstr(row['detail'])} }},"
        )
    print("};")
    print("")
    print("static const VMNativeExecutableGap k_vm_native_executable_gaps[] = {")
    for row in gaps:
        print(
            f"    {{ {cstr(row['section'])}, {hx(row['start'])}ull, {hx(row['stop'])}ull, {row['bytes']}ull }},"
        )
    print("};")
    print("")
    print("static unsigned vm_native_exec_section_coverage_count(void) {")
    print("    return (unsigned)(sizeof(k_vm_native_exec_section_coverage) / sizeof(k_vm_native_exec_section_coverage[0]));")
    print("}")
    print("")
    print("static unsigned vm_native_recovered_range_count(void) {")
    print("    return (unsigned)(sizeof(k_vm_native_recovered_ranges) / sizeof(k_vm_native_recovered_ranges[0]));")
    print("}")
    print("")
    print("static unsigned vm_native_executable_gap_count(void) {")
    print("    return (unsigned)(sizeof(k_vm_native_executable_gaps) / sizeof(k_vm_native_executable_gaps[0]));")
    print("}")
    print("")
    print(f"_Static_assert(sizeof(k_vm_native_exec_section_coverage) / sizeof(k_vm_native_exec_section_coverage[0]) == {len(section_rows)}u,")
    print("               \"native executable section count changed\");")
    print(f"_Static_assert(sizeof(k_vm_native_recovered_ranges) / sizeof(k_vm_native_recovered_ranges[0]) == {len(ranges)}u,")
    print("               \"native recovered range count changed\");")
    print(f"_Static_assert(sizeof(k_vm_native_executable_gaps) / sizeof(k_vm_native_executable_gaps[0]) == {len(gaps)}u,")
    print("               \"native executable gap count changed\");")


def main():
    parser = argparse.ArgumentParser(description="Audit executable ELF coverage represented by native C sidecars.")
    group = parser.add_mutually_exclusive_group()
    group.add_argument("--c", action="store_true")
    group.add_argument("--markdown", action="store_true")
    args = parser.parse_args()
    section_rows, ranges, gaps = compute()
    if args.c:
        emit_c(section_rows, ranges, gaps)
    elif args.markdown:
        emit_md(section_rows, ranges, gaps)
    else:
        emit_tsv(section_rows, ranges, gaps)


if __name__ == "__main__":
    main()
