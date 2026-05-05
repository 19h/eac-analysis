#!/usr/bin/env python3
import argparse
import csv
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")


FIELDS = [
    "rank",
    "offset",
    "end",
    "bytes",
    "semantic_covered_bytes",
    "semantic_uncovered_bytes",
    "coverage_x100",
    "kind",
    "name",
    "nbbs",
    "ninstrs",
    "outdegree",
    "priority_class",
    "next_action",
    "selected_range",
]


def read_tsv(path):
    with Path(path).open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def parse_int(value):
    return int(str(value), 0)


def semantic_ranges(path):
    ranges = []
    for row in read_tsv(path):
        if row.get("row_type") != "range":
            continue
        start = parse_int(row["start"])
        stop = parse_int(row["stop"])
        if stop > start:
            ranges.append((start, stop, row.get("source", "")))
    ranges.sort()
    return ranges


def overlap_bytes(start, stop, ranges):
    total = 0
    sources = set()
    for r_start, r_stop, source in ranges:
        if r_stop <= start:
            continue
        if r_start >= stop:
            break
        left = max(start, r_start)
        right = min(stop, r_stop)
        if right > left:
            total += right - left
            sources.add(source)
    return min(total, stop - start), sources


def classify(row, uncovered):
    size = parse_int(row["end"]) - parse_int(row["offset"])
    if uncovered == 0:
        return "covered_by_existing_semantic_c", "none"
    if row.get("kind") == "import_plt":
        return "import_plt_stub", "skip_import_thunk"
    if size <= 512:
        return "tier0_small_native_gap", "targeted_retdec_single_function"
    if size <= 2048:
        return "tier1_medium_native_gap", "targeted_retdec_single_function"
    if size <= 8192:
        return "tier2_large_native_gap", "targeted_retdec_with_timeout"
    return "tier3_huge_or_noisy_native_gap", "split_or_model_before_retdec"


def build_rows(inventory_path, coverage_path):
    ranges = semantic_ranges(coverage_path)
    rows = []
    for row in read_tsv(inventory_path):
        if row.get("section") != ".text":
            continue
        start = parse_int(row["offset"])
        stop = parse_int(row["end"])
        if stop <= start:
            continue
        size = stop - start
        covered, _sources = overlap_bytes(start, stop, ranges)
        uncovered = max(0, size - covered)
        if uncovered == 0:
            continue
        priority, action = classify(row, uncovered)
        rows.append({
            "rank": "0",
            "offset": row["offset"],
            "end": row["end"],
            "bytes": str(size),
            "semantic_covered_bytes": str(covered),
            "semantic_uncovered_bytes": str(uncovered),
            "coverage_x100": str((covered * 10000) // size if size else 0),
            "kind": row.get("kind", ""),
            "name": row.get("name", ""),
            "nbbs": row.get("nbbs", "0"),
            "ninstrs": row.get("ninstrs", "0"),
            "outdegree": row.get("outdegree", "0"),
            "priority_class": priority,
            "next_action": action,
            "selected_range": f"{row['offset']}-{row['end']}",
        })
    rows.sort(key=lambda r: (
        {"tier0_small_native_gap": 0, "tier1_medium_native_gap": 1, "tier2_large_native_gap": 2}.get(r["priority_class"], 3),
        -int(r["semantic_uncovered_bytes"]),
        int(r["offset"], 0),
    ))
    for i, row in enumerate(rows, 1):
        row["rank"] = str(i)
    return rows


def cstr(value):
    return '"' + str(value).replace("\\", "\\\\").replace('"', '\\"') + '"'


def emit_tsv(rows):
    writer = csv.DictWriter(__import__("sys").stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    writer.writerows(rows)


def emit_md(rows):
    classes = {}
    for row in rows:
        classes[row["priority_class"]] = classes.get(row["priority_class"], 0) + 1
    print("# Native RetDec Gap Queue\n")
    print("Ranks native function skeletons whose byte ranges are not yet covered by semantic RetDec/native C sidecars.\n")
    print(f"- queued functions: {len(rows)}")
    print("- class mix: " + ", ".join(f"{key}:{value}" for key, value in sorted(classes.items())) + "\n")
    print("| rank | range | bytes | uncovered | class | action | name |")
    print("| ---: | --- | ---: | ---: | --- | --- | --- |")
    for row in rows[:80]:
        print(
            f"| {row['rank']} | `{row['selected_range']}` | {row['bytes']} | "
            f"{row['semantic_uncovered_bytes']} | `{row['priority_class']}` | "
            f"`{row['next_action']}` | `{row['name']}` |"
        )


def emit_c(rows):
    print("/*")
    print(" * Native RetDec gap queue.")
    print(" * Ranks native function skeletons that still lack semantic C sidecar coverage.")
    print(" */")
    print("#include <stdint.h>")
    print("")
    print("typedef struct VMNativeRetdecGapQueueRow {")
    print("    uint32_t rank;")
    print("    uint64_t offset;")
    print("    uint64_t end;")
    print("    uint32_t bytes;")
    print("    uint32_t semantic_covered_bytes;")
    print("    uint32_t semantic_uncovered_bytes;")
    print("    uint32_t coverage_x100;")
    print("    const char *kind;")
    print("    const char *name;")
    print("    uint32_t nbbs;")
    print("    uint32_t ninstrs;")
    print("    uint32_t outdegree;")
    print("    const char *priority_class;")
    print("    const char *next_action;")
    print("    const char *selected_range;")
    print("} VMNativeRetdecGapQueueRow;")
    print("")
    print("static const VMNativeRetdecGapQueueRow k_vm_native_retdec_gap_queue[] = {")
    for row in rows:
        print(
            f"    {{ {row['rank']}u, {row['offset']}ull, {row['end']}ull, {row['bytes']}u, "
            f"{row['semantic_covered_bytes']}u, {row['semantic_uncovered_bytes']}u, {row['coverage_x100']}u, "
            f"{cstr(row['kind'])}, {cstr(row['name'])}, {row['nbbs']}u, {row['ninstrs']}u, {row['outdegree']}u, "
            f"{cstr(row['priority_class'])}, {cstr(row['next_action'])}, {cstr(row['selected_range'])} }},"
        )
    print("};")
    print("")
    print("static unsigned vm_native_retdec_gap_queue_count(void) {")
    print("    return (unsigned)(sizeof(k_vm_native_retdec_gap_queue) / sizeof(k_vm_native_retdec_gap_queue[0]));")
    print("}")
    print("")
    print(f"_Static_assert(sizeof(k_vm_native_retdec_gap_queue) / sizeof(k_vm_native_retdec_gap_queue[0]) == {len(rows)}u,")
    print("               \"native RetDec gap queue count changed\");")


def main():
    parser = argparse.ArgumentParser(description="Rank native function skeletons that still lack semantic C coverage.")
    parser.add_argument("--inventory", default=str(TRACE_DIR / "vm_native_function_inventory.tsv"))
    parser.add_argument("--coverage", default=str(TRACE_DIR / "vm_native_executable_coverage_audit.tsv"))
    parser.add_argument("--from-tsv")
    group = parser.add_mutually_exclusive_group()
    group.add_argument("--c", action="store_true")
    group.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = read_tsv(args.from_tsv) if args.from_tsv else build_rows(args.inventory, args.coverage)
    if args.c:
        emit_c(rows)
    elif args.markdown:
        emit_md(rows)
    else:
        emit_tsv(rows)


if __name__ == "__main__":
    main()
