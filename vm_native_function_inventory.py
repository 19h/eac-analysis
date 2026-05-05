#!/usr/bin/env python3
import argparse
import csv
import json
import re
import subprocess
import sys
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")


FIELDS = [
    "section",
    "offset",
    "end",
    "size",
    "realsz",
    "name",
    "safe_name",
    "kind",
    "nbbs",
    "ninstrs",
    "edges",
    "indegree",
    "outdegree",
    "nlocals",
    "nargs",
    "stackframe",
    "noreturn",
    "signature",
]


def executable_sections(eac):
    out = subprocess.check_output(["readelf", "-SW", str(eac)], text=True)
    sections = []
    pattern = re.compile(
        r"^\s*\[\s*\d+\]\s+(\S+)\s+\S+\s+([0-9a-fA-F]+)\s+"
        r"([0-9a-fA-F]+)\s+([0-9a-fA-F]+)\s+\S+\s+(\S+)"
    )
    for line in out.splitlines():
        m = pattern.match(line)
        if not m:
            continue
        name, addr, _off, size, flags = m.groups()
        if "A" not in flags or "X" not in flags:
            continue
        start = int(addr, 16)
        span = int(size, 16)
        if span:
            sections.append((name, start, start + span))
    return sections


def section_for(offset, sections):
    for name, start, stop in sections:
        if start <= offset < stop:
            return name
    return "-"


def section_stop_for(offset, sections):
    for _name, start, stop in sections:
        if start <= offset < stop:
            return stop
    return offset


def safe_ident(name, offset):
    base = re.sub(r"[^A-Za-z0-9_]", "_", name)
    base = re.sub(r"_+", "_", base).strip("_")
    if not base or base[0].isdigit():
        base = "fn_" + base
    return f"native_stub_{offset:08x}_{base[:72]}"


def kind_for(name, section):
    if name.startswith("sym.imp.") or section in {".plt", ".plt.got"}:
        return "import_plt"
    if name.startswith("entry0") or name.startswith("sym._start"):
        return "entrypoint"
    if name.startswith("fcn."):
        return "r2_discovered"
    if name.startswith("sym."):
        return "symbol_named"
    return "native_discovered"


def run_r2(eac, r2):
    cmd = [r2, "-2", "-q", "-c", "aaa; aflj", str(eac)]
    proc = subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
    if proc.returncode != 0:
        sys.stderr.write(proc.stderr)
        raise SystemExit(proc.returncode)
    return json.loads(proc.stdout)


def rows_from_r2(eac, r2):
    sections = executable_sections(eac)
    rows = []
    seen = set()
    for item in run_r2(eac, r2):
        offset = int(item.get("offset", 0) or 0)
        size = int(item.get("size", item.get("realsz", 0)) or 0)
        realsz = int(item.get("realsz", size) or 0)
        end = offset + max(size, realsz, 0)
        section = section_for(offset, sections)
        if section == "-":
            continue
        end = min(end, section_stop_for(offset, sections))
        size = min(max(size, 0), max(end - offset, 0))
        realsz = min(max(realsz, 0), max(end - offset, 0))
        key = (offset, end)
        if key in seen:
            continue
        seen.add(key)
        name = str(item.get("name", f"fcn.{offset:x}"))
        rows.append({
            "section": section,
            "offset": f"0x{offset:x}",
            "end": f"0x{end:x}",
            "size": str(max(size, 0)),
            "realsz": str(max(realsz, 0)),
            "name": name,
            "safe_name": safe_ident(name, offset),
            "kind": kind_for(name, section),
            "nbbs": str(int(item.get("nbbs", 0) or 0)),
            "ninstrs": str(int(item.get("ninstrs", 0) or 0)),
            "edges": str(int(item.get("edges", 0) or 0)),
            "indegree": str(int(item.get("indegree", 0) or 0)),
            "outdegree": str(int(item.get("outdegree", 0) or 0)),
            "nlocals": str(int(item.get("nlocals", 0) or 0)),
            "nargs": str(int(item.get("nargs", 0) or 0)),
            "stackframe": str(int(item.get("stackframe", 0) or 0)),
            "noreturn": "1" if item.get("noreturn") else "0",
            "signature": str(item.get("signature", "")),
        })
    rows.sort(key=lambda row: (int(row["offset"], 16), int(row["end"], 16), row["name"]))
    return rows


def read_rows(path):
    with Path(path).open(newline="", errors="replace") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def write_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    writer.writerows(rows)


def intervals_for(rows, section=None):
    intervals = []
    for row in rows:
        if section is not None and row["section"] != section:
            continue
        start = int(row["offset"], 16)
        stop = int(row["end"], 16)
        if stop > start:
            intervals.append((start, stop))
    return intervals


def merge_intervals(intervals):
    merged = []
    for start, stop in sorted(intervals):
        if not merged or start > merged[-1][1]:
            merged.append([start, stop])
        else:
            merged[-1][1] = max(merged[-1][1], stop)
    return [(start, stop) for start, stop in merged]


def cstr(value):
    return '"' + str(value).replace("\\", "\\\\").replace('"', '\\"') + '"'


def emit_c(rows):
    print("/*")
    print(" * Native function inventory from radare2 analysis.")
    print(" * These are weak native skeletons: function boundaries and metadata, not decompiled semantics.")
    print(" */")
    print("#include <stdint.h>")
    print("")
    print("typedef struct VMNativeFunctionInventoryRow {")
    print("    const char *section;")
    print("    uint64_t offset;")
    print("    uint64_t end;")
    print("    uint32_t size;")
    print("    uint32_t realsz;")
    print("    const char *name;")
    print("    const char *kind;")
    print("    uint32_t nbbs;")
    print("    uint32_t ninstrs;")
    print("    uint32_t edges;")
    print("    uint32_t indegree;")
    print("    uint32_t outdegree;")
    print("    uint32_t nlocals;")
    print("    uint32_t nargs;")
    print("    uint32_t stackframe;")
    print("    uint8_t noreturn;")
    print("    const char *signature;")
    print("} VMNativeFunctionInventoryRow;")
    print("")
    for row in rows:
        print(f"static uint64_t {row['safe_name']}(void) {{ return {row['offset']}ull; }}")
    print("")
    print("static const VMNativeFunctionInventoryRow k_vm_native_function_inventory[] = {")
    for row in rows:
        print(
            f"    {{ {cstr(row['section'])}, {row['offset']}ull, {row['end']}ull, "
            f"{row['size']}u, {row['realsz']}u, {cstr(row['name'])}, {cstr(row['kind'])}, "
            f"{row['nbbs']}u, {row['ninstrs']}u, {row['edges']}u, {row['indegree']}u, "
            f"{row['outdegree']}u, {row['nlocals']}u, {row['nargs']}u, {row['stackframe']}u, "
            f"{row['noreturn']}u, {cstr(row['signature'])} }},"
        )
    print("};")
    print("")
    print("static unsigned vm_native_function_inventory_count(void) {")
    print("    return (unsigned)(sizeof(k_vm_native_function_inventory) / sizeof(k_vm_native_function_inventory[0]));")
    print("}")
    print("")
    print("static uint64_t vm_native_function_stub_dispatch(uint64_t offset) {")
    print("    switch (offset) {")
    for row in rows:
        print(f"    case {row['offset']}ull: return {row['safe_name']}();")
    print("    default: return 0;")
    print("    }")
    print("}")
    print("")
    print(f"_Static_assert(sizeof(k_vm_native_function_inventory) / sizeof(k_vm_native_function_inventory[0]) == {len(rows)}u,")
    print("               \"native function inventory count changed\");")


def emit_md(rows):
    total_bytes = sum(int(row["realsz"] or row["size"] or "0") for row in rows)
    text_rows = [row for row in rows if row["section"] == ".text"]
    text_covered = sum(stop - start for start, stop in merge_intervals(intervals_for(rows, ".text")))
    kinds = {}
    for row in rows:
        kinds[row["kind"]] = kinds.get(row["kind"], 0) + 1
    largest = sorted(rows, key=lambda row: int(row["realsz"] or row["size"] or "0"), reverse=True)[:40]
    print("# Native Function Inventory\n")
    print("Radare2 function-boundary inventory rendered as C skeleton metadata. These rows are not decompiled semantics.\n")
    print(f"- functions: {len(rows)}")
    print(f"- text functions: {len(text_rows)}")
    print(f"- summed function sizes: {total_bytes}")
    print(f"- merged .text function coverage bytes: {text_covered}")
    print("- kind mix: " + ", ".join(f"{key}:{value}" for key, value in sorted(kinds.items())) + "\n")
    print("| offset | end | size | kind | blocks | insns | name |")
    print("| --- | --- | ---: | --- | ---: | ---: | --- |")
    for row in largest:
        print(
            f"| `{row['offset']}` | `{row['end']}` | {row['realsz']} | `{row['kind']}` | "
            f"{row['nbbs']} | {row['ninstrs']} | `{row['name']}` |"
        )


def main():
    parser = argparse.ArgumentParser(description="Generate native function inventory artifacts from radare2 analysis.")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--r2", default="r2")
    parser.add_argument("--from-tsv")
    group = parser.add_mutually_exclusive_group()
    group.add_argument("--c", action="store_true")
    group.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    if args.from_tsv:
        rows = read_rows(args.from_tsv)
    else:
        rows = rows_from_r2(args.eac, args.r2)

    if args.c:
        emit_c(rows)
    elif args.markdown:
        emit_md(rows)
    else:
        write_tsv(rows)


if __name__ == "__main__":
    main()
