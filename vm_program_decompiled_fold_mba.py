#!/usr/bin/env python3
"""Fold solved MBA successor maps into per-program decompiled VM C."""

from __future__ import annotations

import argparse
import contextlib
import csv
import sys
from collections import Counter
from pathlib import Path

from vm_program_decompiled_dump import c_string, emit_row
from vm_program_decompiled_split import atlas_for_ip, load_atlas, segment_key
from vm_pseudocode_dump import load_rows, map_rows_to_blocks, parse_hex, read_tsv


def safe_unlink_generated(output_dir: Path) -> None:
    for path in output_dir.glob("vm_program_atlas_*.c"):
        path.unlink()


def write_manifest(path: Path, rows: list[dict[str, str | int]]) -> None:
    fields = [
        "program",
        "path",
        "entrypoint",
        "start",
        "end",
        "size",
        "atlas_segments",
        "blocks",
        "rows",
        "mba_cases",
        "state_inlined",
        "state_summarized",
        "state_preserved",
        "concrete_next_entry",
        "decoded_long_control",
        "folded_internal_edges",
        "folded_hidden_span_edges",
        "folded_external_edges",
        "source_blocks",
    ]
    with path.open("w", newline="") as handle:
        writer = csv.DictWriter(handle, delimiter="\t", fieldnames=fields)
        writer.writeheader()
        writer.writerows(rows)


def read_mba_reduced(root: Path, program: int) -> dict[str, dict[str, str]]:
    path = root / f"vm_program_atlas_{program:03d}_mba_reduced.tsv"
    with path.open(newline="") as handle:
        return {row["case_state"]: row for row in csv.DictReader(handle, delimiter="\t")}


def emit_preamble() -> None:
    print("/*")
    print(" * Decompiled VM bytecode program with solved MBA successor layer folded in.")
    print(" * Each switch case is a recovered VM basic block; its terminal MBA/dispatcher")
    print(" * successor is emitted directly as the next vm_ip instead of as a side table.")
    print(" */")
    print("#include <stdint.h>")
    print("")
    print("typedef struct VMState {")
    print("    uint8_t *ip;")
    print("    uint32_t state;")
    print("    uint32_t flags;")
    print("    uint8_t byte;")
    print("} VMState;")
    print("")
    print("#define U8(p)  (*(const uint8_t *)(p))")
    print("#define U16(p) (*(const uint16_t *)(p))")
    print("#define U32(p) (*(const uint32_t *)(p))")
    print("#define mask32(x) ((uint32_t)(x))")
    print("#define mask16(x) ((uint16_t)(x))")
    print("#define mask8(x)  ((uint8_t)(x))")
    print("static int64_t signed_vm_delta_u32(uint32_t raw) {")
    print("    return (raw & 0x80000000u) ? -(int64_t)(raw & 0x7fffffffu) : (int64_t)raw;")
    print("}")
    print("")
    print("static void vm_program_external_edge(VMState *vm, uint64_t target_vm_ip, int next_entry) {")
    print("    (void)vm;")
    print("    (void)target_vm_ip;")
    print("    (void)next_entry;")
    print("}")
    print("")
    print("static void vm_program_unknown_entry(VMState *vm, uint64_t vm_ip) {")
    print("    (void)vm;")
    print("    (void)vm_ip;")
    print("}")
    print("")


def next_block_start(blocks: list[dict[str, str]], block_index: int, target: int) -> str:
    for block in blocks[block_index + 1:]:
        start = parse_hex(block["start_vm_ip"])
        if target <= start:
            return block["start_vm_ip"]
    return ""


def folded_successor(
    blocks: list[dict[str, str]],
    block_index: int,
    reduced: dict[str, str],
    start_to_block: dict[str, dict[str, str]],
) -> tuple[str, str]:
    raw = reduced.get("successor_vm_ip", "")
    if not raw:
        return "", "missing_successor"
    if raw in start_to_block:
        return raw, "direct_block"
    raw_int = parse_hex(raw)
    current = blocks[block_index]
    end_int = parse_hex(current["byte_end_min"])
    candidate = next_block_start(blocks, block_index, raw_int)
    if candidate:
        candidate_int = parse_hex(candidate)
        if end_int <= raw_int <= candidate_int:
            return candidate, "hidden_span_fold"
    return "", "external_or_program_exit"


def emit_case(
    program: int,
    block: dict[str, str],
    block_index: int,
    blocks: list[dict[str, str]],
    rows: list[dict[str, str]],
    reduced: dict[str, str],
    start_to_block: dict[str, dict[str, str]],
    args: argparse.Namespace,
    stats: Counter[str],
) -> None:
    start = block["start_vm_ip"]
    folded, fold_kind = folded_successor(blocks, block_index, reduced, start_to_block)
    raw_successor = reduced.get("successor_vm_ip", "")
    successor_entry = reduced.get("successor_entry", "") or "-1"
    print(f"    case {start}u: {{")
    print("        uint32_t state0 = vm->state;")
    print("        uint32_t flags0 = vm->flags;")
    print("        uint8_t byte0 = vm->byte;")
    print("        int next_entry = -1;")
    print(
        f"        /* VM block {block['block']}: {block['start_vm_ip']}..{block['byte_end_min']}; "
        f"rows={block['row_count']}, terminal={block['terminal_kind']} */"
    )
    for row in rows:
        emit_row(row, args, stats)
    print(
        f"        /* folded MBA successor: raw={raw_successor or '-'}, folded={folded or '-'}, "
        f"entry={successor_entry}, edge={c_string(reduced.get('edge_kind', ''))}, "
        f"mode={fold_kind}; {c_string(reduced.get('edge_semantic_ir', ''))} */"
    )
    if successor_entry and successor_entry != "-1":
        print(f"        next_entry = {int(successor_entry, 0)};")
    if folded:
        if fold_kind == "hidden_span_fold":
            stats["folded_hidden_span_edges"] += 1
        else:
            stats["folded_internal_edges"] += 1
        print(f"        vm_ip = UINT64_C({folded});")
        print("        (void)state0;")
        print("        (void)flags0;")
        print("        (void)byte0;")
        print("        (void)next_entry;")
        print("        continue;")
    else:
        stats["folded_external_edges"] += 1
        target = raw_successor or start
        print(f"        vm_program_external_edge(vm, UINT64_C({target}), next_entry);")
        print("        (void)state0;")
        print("        (void)flags0;")
        print("        (void)byte0;")
        print("        return;")
    print("    }")


def emit_program(
    program: int,
    atlas: dict[str, str | int],
    blocks: list[dict[str, str]],
    rows_by_block: dict[str, list[dict[str, str]]],
    reduced_by_state: dict[str, dict[str, str]],
    args: argparse.Namespace,
    stats: Counter[str],
) -> None:
    entrypoint = f"vm_program_atlas_{program:03d}_decompiled_folded"
    start_to_block = {block["start_vm_ip"]: block for block in blocks}
    emit_preamble()
    print(f"/* VM program atlas {program:03d}: {atlas['start']}..{atlas['end']} */")
    print("")
    print(f"void {entrypoint}(VMState *vm, uint64_t vm_ip) {{")
    print("    while (1) {")
    print("        switch (vm_ip) {")
    for idx, block in enumerate(blocks):
        reduced = reduced_by_state.get(block["start_vm_ip"])
        if reduced is None:
            raise SystemExit(f"program {program:03d} missing MBA reduction for {block['start_vm_ip']}")
        if reduced.get("status") != "ready_for_mba_reduction":
            raise SystemExit(f"program {program:03d} unreduced MBA case {block['start_vm_ip']}: {reduced.get('status')}")
        emit_case(program, block, idx, blocks, rows_by_block.get(block["block"], []), reduced, start_to_block, args, stats)
    print("        default:")
    print("            vm_program_unknown_entry(vm, vm_ip);")
    print("            return;")
    print("        }")
    print("    }")
    print("}")


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--ir", type=Path)
    parser.add_argument("--blocks", type=Path)
    parser.add_argument("--atlas", type=Path)
    parser.add_argument("--output-dir", type=Path)
    parser.add_argument("--manifest", type=Path)
    parser.add_argument("--max-expr-len", type=int, default=4000)
    args = parser.parse_args()

    args.ir = args.ir or args.root / "vm_bytecode_ir_decompile.tsv"
    args.blocks = args.blocks or args.root / "vm_bytecode_basic_blocks.tsv"
    args.atlas = args.atlas or args.root / "vm_bytecode_file_atlas.tsv"
    args.output_dir = args.output_dir or args.root / "vm_programs_decompiled_folded"
    args.manifest = args.manifest or args.root / "vm_programs_decompiled_folded_manifest.tsv"

    atlases = load_atlas(args.atlas)
    blocks = list(read_tsv(args.blocks))
    rows_by_block = map_rows_to_blocks(load_rows(args.ir), blocks)

    blocks_by_program: dict[int, list[dict[str, str]]] = {int(atlas["atlas_int"]): [] for atlas in atlases}
    unassigned: list[str] = []
    for block in blocks:
        start = parse_hex(block["start_vm_ip"])
        atlas = atlas_for_ip(atlases, start)
        if atlas is None:
            unassigned.append(f"{block['block']}@{block['start_vm_ip']}")
            continue
        blocks_by_program[int(atlas["atlas_int"])].append(block)
    if unassigned:
        raise SystemExit(f"unassigned bytecode blocks: {','.join(unassigned[:20])}")

    args.output_dir.mkdir(parents=True, exist_ok=True)
    safe_unlink_generated(args.output_dir)

    manifest_rows: list[dict[str, str | int]] = []
    total_blocks = 0
    total_rows = 0
    total_mba_cases = 0
    for atlas in atlases:
        program = int(atlas["atlas_int"])
        chosen = sorted(blocks_by_program[program], key=lambda row: parse_hex(row["start_vm_ip"]))
        if not chosen:
            continue
        reduced_by_state = read_mba_reduced(args.root, program)
        output = args.output_dir / f"vm_program_atlas_{program:03d}.c"
        stats: Counter[str] = Counter()

        with output.open("w") as handle, contextlib.redirect_stdout(handle):
            emit_program(program, atlas, chosen, rows_by_block, reduced_by_state, args, stats)

        source_blocks = Counter(segment_key(block.get("source_block", "")) for block in chosen)
        row_count = sum(len(rows_by_block.get(block["block"], [])) for block in chosen)
        total_blocks += len(chosen)
        total_rows += row_count
        total_mba_cases += len(chosen)
        manifest_rows.append({
            "program": f"{program:03d}",
            "path": str(output),
            "entrypoint": f"vm_program_atlas_{program:03d}_decompiled_folded",
            "start": str(atlas["start"]),
            "end": str(atlas["end"]),
            "size": str(atlas["size"]),
            "atlas_segments": str(atlas.get("segment_ids", "")),
            "blocks": len(chosen),
            "rows": row_count,
            "mba_cases": len(chosen),
            "state_inlined": stats["state_inlined"],
            "state_summarized": stats["state_summarized"],
            "state_preserved": stats["state_preserved"],
            "concrete_next_entry": stats["concrete_next_entry"],
            "decoded_long_control": stats["decoded_long_control"],
            "folded_internal_edges": stats["folded_internal_edges"],
            "folded_hidden_span_edges": stats["folded_hidden_span_edges"],
            "folded_external_edges": stats["folded_external_edges"],
            "source_blocks": ",".join(f"{key}:{value}" for key, value in source_blocks.most_common()),
        })

    write_manifest(args.manifest, manifest_rows)
    print(
        f"vm_program_folded_files={len(manifest_rows)} blocks={total_blocks} rows={total_rows} "
        f"mba_cases={total_mba_cases} manifest={args.manifest}",
        file=sys.stderr,
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
