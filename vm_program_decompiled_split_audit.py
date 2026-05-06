#!/usr/bin/env python3
"""Audit per-program VM decompilation files and optionally compile-check them."""

from __future__ import annotations

import argparse
import csv
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path


BLOCK_RE = re.compile(r"^static void vmdec_p[0-9]{3}_bb_[0-9]{4}\(VMState \*vm, uint64_t vm_ip\) \{")
ROW_RE = re.compile(r"^\s*/\* 0x[0-9a-f]+..0x[0-9a-f]+:")


def count_tsv(path: Path) -> int:
    with path.open(newline="") as handle:
        return sum(1 for _ in csv.DictReader(handle, delimiter="\t"))


def load_manifest(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def file_counts(path: Path) -> dict[str, int | bool]:
    blocks = 0
    rows = 0
    state_summarized = 0
    op_entry_refs = 0
    unresolved_tail_refs = 0
    omitted = False
    dispatch = False
    with path.open(encoding="utf-8", errors="replace") as handle:
        for line in handle:
            if BLOCK_RE.match(line):
                blocks += 1
            if ROW_RE.match(line):
                rows += 1
            if "state effect summarized/clipped" in line:
                state_summarized += 1
            if "op_entry_" in line:
                op_entry_refs += 1
            if "vm_unresolved_synthetic_tail" in line:
                unresolved_tail_refs += 1
            if "rows omitted by --rows-per-block" in line:
                omitted = True
            if re.search(r"void vm_program_atlas_[0-9]{3}_decompiled\(VMState \*vm, uint64_t vm_ip\)", line):
                dispatch = True
    return {
        "blocks": blocks,
        "rows": rows,
        "state_summarized": state_summarized,
        "op_entry_refs": op_entry_refs,
        "unresolved_tail_refs": unresolved_tail_refs,
        "omitted": omitted,
        "dispatch": dispatch,
    }


def compile_one(cc: str, path: Path, object_dir: Path | None) -> tuple[Path, int, str]:
    if object_dir is None:
        cmd = [cc, "-std=c11", "-fsyntax-only", "-w", str(path)]
    else:
        object_dir.mkdir(parents=True, exist_ok=True)
        cmd = [cc, "-std=c11", "-O0", "-g0", "-c", "-w", str(path), "-o", str(object_dir / f"{path.stem}.o")]
    result = subprocess.run(cmd, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True)
    return path, result.returncode, result.stdout[-4000:]


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--cc", default="cc")
    parser.add_argument("--compile", action="store_true", help="Compile each per-program file to object files.")
    parser.add_argument("--syntax", action="store_true", help="Run syntax-only checks for each per-program file.")
    parser.add_argument("--jobs", type=int, default=8)
    args = parser.parse_args()

    manifest = args.root / "vm_programs_decompiled_manifest.tsv"
    output_dir = args.root / "vm_programs_decompiled"
    blocks_tsv = args.root / "vm_bytecode_basic_blocks.tsv"
    ir_tsv = args.root / "vm_bytecode_ir_decompile.tsv"

    ok = True
    ok &= check("split_manifest_exists", manifest.exists(), str(manifest))
    ok &= check("split_output_dir_exists", output_dir.exists(), str(output_dir))
    ok &= check("bytecode_blocks_exists", blocks_tsv.exists(), str(blocks_tsv))
    ok &= check("bytecode_ir_decompile_exists", ir_tsv.exists(), str(ir_tsv))
    if not ok:
        return 1

    rows = load_manifest(manifest)
    files = sorted(output_dir.glob("vm_program_atlas_*.c"))
    expected_blocks = count_tsv(blocks_tsv)
    expected_rows = count_tsv(ir_tsv)
    manifest_blocks = sum(int(row["blocks"]) for row in rows)
    manifest_rows = sum(int(row["rows"]) for row in rows)
    manifest_state_summarized = sum(int(row["state_summarized"]) for row in rows)
    paths_in_manifest = {row["path"] for row in rows}

    ok &= check("split_file_count_matches_manifest", len(files) == len(rows), f"files={len(files)} manifest_rows={len(rows)}")
    ok &= check("split_manifest_paths_exist", all(Path(path).exists() for path in paths_in_manifest), f"paths={len(paths_in_manifest)}")
    ok &= check("split_manifest_covers_all_blocks", manifest_blocks == expected_blocks, f"manifest_blocks={manifest_blocks} expected_blocks={expected_blocks}")
    ok &= check("split_manifest_covers_all_rows", manifest_rows == expected_rows, f"manifest_rows={manifest_rows} expected_rows={expected_rows}")
    ok &= check("split_manifest_has_no_clipped_state", manifest_state_summarized == 0, f"state_summarized={manifest_state_summarized}")

    file_block_total = 0
    file_row_total = 0
    bad_files: list[str] = []
    for path in files:
        counts = file_counts(path)
        file_block_total += int(counts["blocks"])
        file_row_total += int(counts["rows"])
        if counts["op_entry_refs"] or counts["unresolved_tail_refs"] or counts["state_summarized"] or counts["omitted"] or not counts["dispatch"]:
            bad_files.append(str(path))
    ok &= check("split_files_cover_all_blocks", file_block_total == expected_blocks, f"file_blocks={file_block_total} expected_blocks={expected_blocks}")
    ok &= check("split_files_cover_all_rows", file_row_total == expected_rows, f"file_rows={file_row_total} expected_rows={expected_rows}")
    ok &= check("split_files_have_no_handler_calls_unresolved_tails_or_omissions", not bad_files, f"bad_files={bad_files[:5]}")

    if args.syntax or args.compile:
        object_dir = Path("/tmp/eacsym-vm-program-split-audit-objs") if args.compile else None
        failures = []
        with ThreadPoolExecutor(max_workers=max(1, args.jobs)) as pool:
            futures = [pool.submit(compile_one, args.cc, path, object_dir) for path in files]
            for future in as_completed(futures):
                path, rc, output = future.result()
                if rc != 0:
                    failures.append((path, output))
        ok &= check(
            "split_files_compile",
            not failures,
            f"mode={'compile' if args.compile else 'syntax'} files={len(files)} failures={len(failures)}",
        )
        for path, output in failures[:5]:
            print(f"compile_failure={path}")
            print(output)

    print(f"completion_status={'complete' if ok else 'not_complete'}")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
