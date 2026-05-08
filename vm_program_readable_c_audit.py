#!/usr/bin/env python3
"""Audit compileable per-program readable C VM artifacts."""

from __future__ import annotations

import argparse
import csv
import re
import shutil
import subprocess
from collections import Counter
from concurrent.futures import ThreadPoolExecutor, as_completed
from pathlib import Path


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def parse_int(text: str | None) -> int:
    value = (text or "").strip()
    if not value:
        return 0
    try:
        return int(value, 16 if value.startswith("0x") else 10)
    except ValueError:
        return 0


def check(name: str, ok: bool, detail: str) -> bool:
    print(f"{name}={'ok' if ok else 'missing'}\t{detail}")
    return ok


def resolve_path(text: str) -> Path:
    path = Path(text)
    if path.is_absolute():
        return path
    return Path.cwd() / path


def enum_count(text: str, macro: str, suffix: str) -> int | None:
    match = re.search(rf"\b{re.escape(macro)}_{suffix}_COUNT\s*=\s*([0-9]+)\b", text)
    if not match:
        return None
    return int(match.group(1))


def syntax_check(compiler: str, path: Path) -> tuple[Path, bool, str]:
    result = subprocess.run(
        [compiler, "-std=c11", "-pedantic-errors", "-fsyntax-only", "-w", str(path)],
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        check=False,
    )
    detail = (result.stderr or result.stdout).strip()
    return path, result.returncode == 0, detail


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--syntax", action="store_true", help="compile every generated C file with a C11 syntax-only pass")
    parser.add_argument("--jobs", type=int, default=8)
    args = parser.parse_args()
    root = args.root

    readable_ops_path = root / "vm_program_readable_ops.tsv"
    readable_ops_manifest_path = root / "vm_program_readable_ops_manifest.tsv"
    edges_path = root / "vm_program_control_graph_edges.tsv"
    refs_path = root / "vm_native_side_effect_vm_refs.tsv"
    dossiers_path = root / "vm_program_behavior_dossiers.tsv"
    manifest_path = root / "vm_program_readable_c_manifest.tsv"
    md_path = root / "vm_program_readable_c.md"
    out_dir = root / "vm_programs_readable_c"

    ok = True
    for name, path in [
        ("readable_ops_exists", readable_ops_path),
        ("readable_ops_manifest_exists", readable_ops_manifest_path),
        ("control_edges_exists", edges_path),
        ("vm_string_refs_exists", refs_path),
        ("behavior_dossiers_exists", dossiers_path),
        ("readable_c_manifest_exists", manifest_path),
        ("readable_c_markdown_exists", md_path),
        ("readable_c_dir_exists", out_dir),
    ]:
        ok &= check(name, path.exists(), str(path))
    if not ok:
        return 1

    readable_ops = read_tsv(readable_ops_path)
    readable_ops_manifest = read_tsv(readable_ops_manifest_path)
    edges = read_tsv(edges_path)
    refs = read_tsv(refs_path)
    dossiers = read_tsv(dossiers_path)
    manifest = read_tsv(manifest_path)
    md_text = md_path.read_text(encoding="utf-8", errors="replace")

    source_programs = {row["program"] for row in readable_ops_manifest}
    dossier_programs = {row["program"] for row in dossiers}
    manifest_programs = {row["program"] for row in manifest}
    ok &= check("manifest_covers_readable_ops_manifest", manifest_programs == source_programs, f"c={len(manifest_programs)} readable={len(source_programs)}")
    ok &= check("manifest_covers_dossiers", manifest_programs == dossier_programs, f"c={len(manifest_programs)} dossiers={len(dossier_programs)}")
    ok &= check("manifest_has_one_row_per_program", len(manifest) == len(manifest_programs), f"rows={len(manifest)} programs={len(manifest_programs)}")

    ops_counts: Counter[str] = Counter(row["program"] for row in readable_ops)
    edge_counts: Counter[str] = Counter(row["source_program"] for row in edges)
    ref_counts: Counter[str] = Counter(row["program"] for row in refs)
    manifest_counts = {
        row["program"]: (parse_int(row.get("ops")), parse_int(row.get("edges")), parse_int(row.get("string_refs")))
        for row in manifest
    }
    bad_ops = [program for program, counts in manifest_counts.items() if counts[0] != ops_counts.get(program, 0)]
    bad_edges = [program for program, counts in manifest_counts.items() if counts[1] != edge_counts.get(program, 0)]
    bad_refs = [program for program, counts in manifest_counts.items() if counts[2] != ref_counts.get(program, 0)]
    ok &= check("manifest_op_counts_match_rows", not bad_ops, f"bad={bad_ops[:8]}")
    ok &= check("manifest_edge_counts_match_rows", not bad_edges, f"bad={bad_edges[:8]}")
    ok &= check("manifest_string_ref_counts_match_rows", not bad_refs, f"bad={bad_refs[:8]}")
    ok &= check("manifest_totals_match_inputs", sum(c[0] for c in manifest_counts.values()) == len(readable_ops) and sum(c[1] for c in manifest_counts.values()) == len(edges) and sum(c[2] for c in manifest_counts.values()) == len(refs), f"ops={len(readable_ops)} edges={len(edges)} refs={len(refs)}")

    c_paths = [(row["program"], resolve_path(row.get("path", ""))) for row in manifest]
    missing_files = [str(path) for _, path in c_paths if not path.exists()]
    ok &= check("all_readable_c_files_exist", not missing_files, f"missing={missing_files[:8]}")

    bad_file_counts: list[str] = []
    missing_symbols: list[str] = []
    for program, path in c_paths:
        if not path.exists():
            continue
        text = path.read_text(encoding="utf-8", errors="replace")
        macro = f"VM_PROGRAM_ATLAS_{program}"
        expected = manifest_counts[program]
        actual = (
            enum_count(text, macro, "OP"),
            enum_count(text, macro, "EDGE"),
            enum_count(text, macro, "STRING_REF"),
        )
        if actual != expected:
            bad_file_counts.append(f"{program}:file={actual} manifest={expected}")
        required_symbol = f"vm_program_atlas_{program}_readable(void)"
        if required_symbol not in text:
            missing_symbols.append(program)
    ok &= check("file_enum_counts_match_manifest", not bad_file_counts, f"bad={bad_file_counts[:8]}")
    ok &= check("files_export_readable_accessors", not missing_symbols, f"missing={missing_symbols[:8]}")

    generated_files = sorted(out_dir.glob("vm_program_atlas_*_readable.c"))
    ok &= check("output_dir_file_count_matches_manifest", len(generated_files) == len(manifest), f"files={len(generated_files)} manifest={len(manifest)}")
    ok &= check("markdown_has_analysis_caveat", "designed to compile" in md_text and "not a replacement for final MBA algebra reduction" in md_text, "caveat present")

    if args.syntax:
        compiler = shutil.which("gcc") or shutil.which("clang")
        ok &= check("c_compiler_available_for_syntax_check", compiler is not None, compiler or "not found")
        if compiler:
            failures: list[str] = []
            with ThreadPoolExecutor(max_workers=max(1, args.jobs)) as executor:
                futures = [executor.submit(syntax_check, compiler, path) for _, path in c_paths if path.exists()]
                for future in as_completed(futures):
                    path, passed, detail = future.result()
                    if not passed:
                        failures.append(f"{path}: {detail[:600]}")
            ok &= check("all_readable_c_files_compile_c11_syntax", not failures, f"failures={failures[:4]} checked={len(c_paths)}")

    print(f"program_readable_c_audit_status={'complete' if ok else 'not_complete'}")
    print("objective_status=not_complete_final_mba_algebra_native_binding_and_full_intent_open")
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
