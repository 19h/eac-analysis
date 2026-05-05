#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from collections import Counter, defaultdict
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
STATE_DIR = Path("dumps/vmtail-state-wide-w16")
TABLE_ENTRIES = 360


def read_tsv(path):
    with Path(path).open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def c_escape(text):
    return (text or "").replace("\\", "\\\\").replace('"', '\\"')


def path_key(path_hash):
    digest = re.sub(r"[^0-9a-fA-F]", "", path_hash or "")[:16]
    return f"0x{digest or '0'}ull"


def single_count_expr(text):
    part = (text or "").split(";", 1)[0].strip()
    if "=" not in part:
        return ""
    return part.split("=", 1)[1].strip()


def load_frontier_rows(path):
    rows = []
    for row in read_tsv(path):
        if row.get("target_pct") == "100.0" and row.get("ip_pct") == "100.0":
            continue
        row = dict(row)
        row["slot_expr_raw"] = single_count_expr(row.get("slot_expr", ""))
        rows.append(row)
    rows.sort(key=lambda item: (-int(item.get("events") or 0), int(item["source_entry"]), item["path_hash"]))
    return rows


def load_trace_rows(path, wanted_sources, max_rows_per_source):
    rows = defaultdict(list)
    seen = Counter()
    for row in read_tsv(path):
        try:
            source = int(row.get("source_entry", "-1"))
        except ValueError:
            continue
        if source not in wanted_sources:
            continue
        if max_rows_per_source and seen[source] >= max_rows_per_source:
            continue
        rows[source].append(row)
        seen[source] += 1
    return rows


def read_image_value(image, off, size):
    if off < 0 or size <= 0 or off + size > len(image):
        return 0
    return int.from_bytes(image[off:off + size], "little")


def byte_value(row, image, off, size):
    data = bytes.fromhex(row.get("bytes", ""))
    if off >= 0 and off + size <= len(data):
        return int.from_bytes(data[off:off + size], "little")
    return read_image_value(image, int(row.get("start_vm_ip", "0"), 0) + off, size)


def eval_slot_expr(expr, row, image):
    def mask32(value):
        return value & 0xffffffff

    env = {
        "mask32": mask32,
        "state0": int(row.get("pre_state", "0"), 0),
        "flags0": int(row.get("pre_flags", "0"), 0),
        "byte0": int(row.get("pre_byte", "0"), 0),
    }
    for match in re.finditer(r"\bu32_([0-9]+)\b", expr):
        off = int(match.group(1))
        env[f"u32_{off}"] = byte_value(row, image, off, 4)
    for match in re.finditer(r"\bu16_([0-9]+)\b", expr):
        off = int(match.group(1))
        env[f"u16_{off}"] = byte_value(row, image, off, 2)
    for match in re.finditer(r"\bb([0-9]+)\b", expr):
        off = int(match.group(1))
        env[f"b{off}"] = byte_value(row, image, off, 1)
    return eval(expr, {"__builtins__": {}}, env) & 0xffffffff


def classify_eval(row, expr, image):
    slot = eval_slot_expr(expr, row, image)
    actual = int(row.get("target_entry", "-1"))
    aligned_in_range = slot % 8 == 0 and slot // 8 < TABLE_ENTRIES
    table_entry = slot // 8 if aligned_in_range else -1
    return slot, table_entry, actual


def summarize(frontier_row, trace_rows, image):
    expr = frontier_row.get("slot_expr_raw", "")
    eval_rows = trace_rows.get(int(frontier_row["source_entry"]), [])
    relation_counts = Counter()
    actual_counts = Counter()
    eval_errors = 0
    direct_table_matches = 0
    direct_entry_matches = 0
    aligned_in_range = 0
    invalid = 0
    for trace_row in eval_rows:
        actual = int(trace_row.get("target_entry", "-1"))
        actual_counts[actual] += 1
        try:
            slot, table_entry, actual = classify_eval(trace_row, expr, image)
        except Exception as exc:
            eval_errors += 1
            relation_counts[f"eval_error:{type(exc).__name__}"] += 1
            continue
        if table_entry >= 0:
            aligned_in_range += 1
        else:
            invalid += 1
        if table_entry == actual:
            direct_table_matches += 1
        if slot == actual:
            direct_entry_matches += 1
        relation_counts[f"slot=0x{slot:x},table_entry={table_entry},actual={actual}"] += 1
    verdict = "not_promotable"
    if eval_rows and direct_table_matches == len(eval_rows):
        verdict = "direct_table_slot_validated"
    elif direct_table_matches:
        verdict = "partial_table_slot_match"
    elif direct_entry_matches:
        verdict = "direct_entry_value_match_without_table_offset"
    return {
        "source_entry": frontier_row["source_entry"],
        "source_target": frontier_row.get("source_target", ""),
        "path_hash": frontier_row.get("path_hash", ""),
        "events": frontier_row.get("events", "0"),
        "target_pct": frontier_row.get("target_pct", ""),
        "ip_pct": frontier_row.get("ip_pct", ""),
        "validation": frontier_row.get("validation", ""),
        "slot_expr": expr,
        "top_actual_targets": frontier_row.get("top_actual_targets", ""),
        "path": frontier_row.get("path", ""),
        "eval_rows": len(eval_rows),
        "direct_table_matches": direct_table_matches,
        "direct_entry_matches": direct_entry_matches,
        "aligned_in_range_rows": aligned_in_range,
        "invalid_slot_rows": invalid,
        "eval_errors": eval_errors,
        "top_eval_relations": ";".join(f"{key}:{value}" for key, value in relation_counts.most_common(6)) or "-",
        "verdict": verdict,
    }


def build_rows(args):
    frontier = load_frontier_rows(args.paths)
    wanted = {int(row["source_entry"]) for row in frontier}
    trace_rows = load_trace_rows(args.trace, wanted, args.max_rows_per_source)
    image = Path(args.eac).read_bytes()
    return [summarize(row, trace_rows, image) for row in frontier]


FIELDS = [
    "source_entry",
    "source_target",
    "path_hash",
    "events",
    "target_pct",
    "ip_pct",
    "validation",
    "eval_rows",
    "direct_table_matches",
    "direct_entry_matches",
    "aligned_in_range_rows",
    "invalid_slot_rows",
    "eval_errors",
    "top_actual_targets",
    "top_eval_relations",
    "verdict",
    "slot_expr",
    "path",
]


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    print("# Path Frontier Slot Audit\n")
    print("Evaluation of weak path-specialized slot expressions against state-trace rows.")
    print("This checks whether a frontier expression can be safely promoted to a dispatch-table entry.\n")
    print("| metric | value |")
    print("| --- | ---: |")
    print(f"| frontier rows | {len(rows)} |")
    print(f"| direct table validated rows | {sum(1 for row in rows if row['verdict'] == 'direct_table_slot_validated')} |")
    print(f"| rows with any direct table matches | {sum(1 for row in rows if int(row['direct_table_matches']) > 0)} |")
    print(f"| not promotable rows | {sum(1 for row in rows if row['verdict'] == 'not_promotable')} |")
    print("")
    print("| entry | path | events | eval rows | table matches | invalid slots | verdict |")
    print("| ---: | --- | ---: | ---: | ---: | ---: | --- |")
    for row in rows:
        print(
            f"| `{row['source_entry']}` | `{row['path_hash']}` | `{row['events']}` | "
            f"`{row['eval_rows']}` | `{row['direct_table_matches']}` | "
            f"`{row['invalid_slot_rows']}` | `{row['verdict']}` |"
        )


def emit_c(rows):
    print("/*")
    print(" * Path frontier slot audit.")
    print(" * Evaluates weak path slot expressions against bounded state-trace rows.")
    print(" * Rows marked not_promotable are preserved as frontier evidence, not hard CFG.")
    print(" */")
    print("#include <stdint.h>")
    print("")
    print("typedef struct VMPathFrontierSlotAudit {")
    print("    uint16_t entry;")
    print("    uint64_t path_key;")
    print("    uint32_t path_events;")
    print("    uint32_t eval_rows;")
    print("    uint32_t direct_table_matches;")
    print("    uint32_t direct_entry_matches;")
    print("    uint32_t aligned_in_range_rows;")
    print("    uint32_t invalid_slot_rows;")
    print("    uint32_t eval_errors;")
    print("    const char *validation;")
    print("    const char *top_actual_targets;")
    print("    const char *top_eval_relations;")
    print("    const char *slot_expr;")
    print("    const char *verdict;")
    print("} VMPathFrontierSlotAudit;")
    print("")
    print("static const VMPathFrontierSlotAudit k_vm_path_frontier_slot_audit[] = {")
    for row in rows:
        print(
            f"    {{ {int(row['source_entry'])}u, {path_key(row['path_hash'])}, "
            f"{int(row['events'] or 0)}u, {int(row['eval_rows'])}u, "
            f"{int(row['direct_table_matches'])}u, {int(row['direct_entry_matches'])}u, "
            f"{int(row['aligned_in_range_rows'])}u, {int(row['invalid_slot_rows'])}u, "
            f"{int(row['eval_errors'])}u, \"{c_escape(row['validation'])}\", "
            f"\"{c_escape(row['top_actual_targets'])}\", "
            f"\"{c_escape(row['top_eval_relations'])}\", "
            f"\"{c_escape(row['slot_expr'])}\", \"{c_escape(row['verdict'])}\" }},"
        )
    print("};")
    print("")
    print("static unsigned vm_path_frontier_slot_audit_count(void) {")
    print("    return (unsigned)(sizeof(k_vm_path_frontier_slot_audit) / sizeof(k_vm_path_frontier_slot_audit[0]));")
    print("}")
    print("")
    print("_Static_assert(sizeof(k_vm_path_frontier_slot_audit) / sizeof(k_vm_path_frontier_slot_audit[0]) == 10u,")
    print("               \"expected 10 path frontier slot audit rows\");")


def main():
    parser = argparse.ArgumentParser(description="Audit weak path frontier slot expressions against trace rows.")
    parser.add_argument("--paths", default=str(TRACE_DIR / "vm_path_microcode_catalog_gpr_seeded_fast.tsv"))
    parser.add_argument("--trace", default=str(STATE_DIR / "vm_instruction_trace.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--max-rows-per-source", type=int, default=128)
    parser.add_argument("--markdown", action="store_true")
    parser.add_argument("--c", action="store_true")
    args = parser.parse_args()
    rows = build_rows(args)
    if args.c:
        emit_c(rows)
    elif args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)


if __name__ == "__main__":
    main()
