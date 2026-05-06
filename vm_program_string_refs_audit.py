#!/usr/bin/env python3
"""Audit per-program VM string-reference manifests and embedded C tables."""

from __future__ import annotations

import argparse
import csv
import re
import subprocess
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path

from vm_program_string_refs import BEGIN, END


COUNT_RE = re.compile(r"enum \{ VM_PROGRAM_ATLAS_([0-9]{3})_STRING_REF_COUNT = ([0-9]+) \};")
ALLOWED_SOURCES = {"c_literal", "bytecode_u32", "bytecode_u64"}


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def load_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def parse_hex(text: str) -> int:
    return int(text, 16 if text.startswith("0x") else 10)


def load_strings(path: Path) -> dict[int, tuple[int, str]]:
    strings: dict[int, tuple[int, str]] = {}
    for row in load_tsv(path):
        if row.get("kind") != "string":
            continue
        strings[parse_hex(row["vaddr"])] = (parse_hex(row["size"]), row.get("text", ""))
    return strings


def file_string_count(path: Path) -> tuple[bool, int | None]:
    text = path.read_text(encoding="utf-8", errors="replace")
    has_block = BEGIN in text and END in text
    match = COUNT_RE.search(text)
    return has_block, int(match.group(2)) if match else None


def compile_one(cc: str, path: Path) -> tuple[Path, int, str]:
    result = subprocess.run([cc, "-std=c11", "-fsyntax-only", "-w", str(path)], stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
    return path, result.returncode, result.stdout[-4000:]


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--cc", default="cc")
    parser.add_argument("--compile", action="store_true")
    parser.add_argument("--jobs", type=int, default=8)
    args = parser.parse_args()

    split_manifest_path = args.root / "vm_programs_decompiled_manifest.tsv"
    string_manifest_path = args.root / "vm_program_string_refs.tsv"
    strings_path = args.root / "vm_binary_data_sections.tsv"

    ok = True
    ok &= check("split_manifest_exists", split_manifest_path.exists(), str(split_manifest_path))
    ok &= check("string_ref_manifest_exists", string_manifest_path.exists(), str(string_manifest_path))
    ok &= check("binary_string_index_exists", strings_path.exists(), str(strings_path))
    if not ok:
        return 1

    split_rows = load_tsv(split_manifest_path)
    ref_rows = load_tsv(string_manifest_path)
    known_strings = load_strings(strings_path)
    ref_counts: dict[str, int] = {}
    invalid_refs: list[str] = []
    invalid_sources: list[str] = []
    for row in ref_rows:
        program = row["program"]
        ref_counts[program] = ref_counts.get(program, 0) + 1
        if row["source"] not in ALLOWED_SOURCES:
            invalid_sources.append(f"{program}:{row['source']}")
        string_vaddr = parse_hex(row["string_vaddr"])
        value = parse_hex(row["value"])
        size_text = known_strings.get(string_vaddr)
        if size_text is None:
            invalid_refs.append(f"{program}:unknown_string@0x{string_vaddr:x}")
        else:
            size, _ = size_text
            if not (string_vaddr <= value < string_vaddr + size):
                invalid_refs.append(f"{program}:value_not_in_string@0x{value:x}->0x{string_vaddr:x}+0x{size:x}")

    files_missing_block: list[str] = []
    count_mismatches: list[str] = []
    for row in split_rows:
        program = row["program"]
        path = Path(row["path"])
        has_block, file_count = file_string_count(path)
        manifest_count = ref_counts.get(program, 0)
        if not has_block:
            files_missing_block.append(str(path))
        if file_count != manifest_count:
            count_mismatches.append(f"{program}:file={file_count} manifest={manifest_count}")

    ok &= check("string_ref_manifest_programs_match_split", set(ref_counts).issubset({row["program"] for row in split_rows}), f"programs_with_refs={len(ref_counts)} split_programs={len(split_rows)}")
    ok &= check("string_ref_sources_are_known", not invalid_sources, f"invalid_sources={invalid_sources[:5]}")
    ok &= check("string_ref_values_match_binary_string_index", not invalid_refs, f"invalid_refs={invalid_refs[:5]}")
    ok &= check("string_ref_blocks_embedded_in_all_program_files", not files_missing_block, f"missing={files_missing_block[:5]}")
    ok &= check("string_ref_embedded_counts_match_manifest", not count_mismatches, f"mismatches={count_mismatches[:5]}")

    if args.compile:
        failures = []
        with ThreadPoolExecutor(max_workers=max(1, args.jobs)) as pool:
            futures = [pool.submit(compile_one, args.cc, Path(row["path"])) for row in split_rows]
            for future in as_completed(futures):
                path, rc, output = future.result()
                if rc != 0:
                    failures.append((path, output))
        ok &= check("string_ref_program_files_compile", not failures, f"files={len(split_rows)} failures={len(failures)}")
        for path, output in failures[:5]:
            print(f"compile_failure={path}")
            print(output)

    print(f"string_ref_rows={len(ref_rows)} programs_with_refs={len(ref_counts)}")
    print(f"completion_status={'complete' if ok else 'not_complete'}")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
