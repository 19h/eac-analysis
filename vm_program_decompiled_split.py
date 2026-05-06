#!/usr/bin/env python3
"""Split decompiled VM bytecode into one C file per recovered VM program."""

from __future__ import annotations

import argparse
import contextlib
import csv
import re
import sys
from collections import Counter
from pathlib import Path

from vm_program_decompiled_dump import emit_block, emit_dispatch, emit_preamble, emit_prototypes
from vm_pseudocode_dump import load_edges, load_rows, map_rows_to_blocks, parse_hex, read_tsv


SOURCE_BLOCK_RE = re.compile(r"^(?P<segment>[0-9]+)@0x(?P<start>[0-9a-f]+)-0x(?P<end>[0-9a-f]+)")


def load_atlas(path: Path) -> list[dict[str, str | int]]:
    rows: list[dict[str, str | int]] = []
    with path.open(newline="") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            rows.append({
                **row,
                "atlas_int": int(row["atlas"], 0),
                "start_int": int(row["start"], 16),
                "end_int": int(row["end"], 16),
            })
    rows.sort(key=lambda row: int(row["atlas_int"]))
    return rows


def atlas_for_ip(atlases: list[dict[str, str | int]], ip: int) -> dict[str, str | int] | None:
    for atlas in atlases:
        if int(atlas["start_int"]) <= ip < int(atlas["end_int"]):
            return atlas
    return None


def segment_key(source_block: str) -> str:
    match = SOURCE_BLOCK_RE.match(source_block or "")
    if not match:
        return source_block or "-"
    return f"{match.group('segment')}@0x{match.group('start')}-0x{match.group('end')}"


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
        "state_inlined",
        "state_summarized",
        "state_preserved",
        "concrete_next_entry",
        "decoded_long_control",
        "external_edges",
        "source_blocks",
    ]
    with path.open("w", newline="") as handle:
        writer = csv.DictWriter(handle, delimiter="\t", fieldnames=fields)
        writer.writeheader()
        writer.writerows(rows)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--ir", type=Path, default=Path("dumps/vmtail-wide-1m-w16/vm_bytecode_ir_decompile.tsv"))
    parser.add_argument("--blocks", type=Path, default=Path("dumps/vmtail-wide-1m-w16/vm_bytecode_basic_blocks.tsv"))
    parser.add_argument("--edges", type=Path, default=Path("dumps/vmtail-wide-1m-w16/vm_bytecode_basic_block_edges.tsv"))
    parser.add_argument("--atlas", type=Path, default=Path("dumps/vmtail-wide-1m-w16/vm_bytecode_file_atlas.tsv"))
    parser.add_argument("--output-dir", type=Path, default=Path("dumps/vmtail-wide-1m-w16/vm_programs_decompiled"))
    parser.add_argument("--manifest", type=Path, default=Path("dumps/vmtail-wide-1m-w16/vm_programs_decompiled_manifest.tsv"))
    parser.add_argument("--max-expr-len", type=int, default=4000)
    args = parser.parse_args()

    atlases = load_atlas(args.atlas)
    blocks = list(read_tsv(args.blocks))
    rows_by_block = map_rows_to_blocks(load_rows(args.ir), blocks)
    edges = load_edges(args.edges)

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
    for atlas in atlases:
        program = int(atlas["atlas_int"])
        chosen = sorted(blocks_by_program[program], key=lambda row: parse_hex(row["start_vm_ip"]))
        if not chosen:
            continue
        known_blocks = {block["block"] for block in chosen}
        prefix = f"vmdec_p{program:03d}"
        entrypoint = f"vm_program_atlas_{program:03d}_decompiled"
        output = args.output_dir / f"vm_program_atlas_{program:03d}.c"
        stats: Counter[str] = Counter()
        external_edges = 0
        for block in chosen:
            edge = edges.get(block["block"])
            if edge and edge.get("target_block") and edge.get("target_block") not in known_blocks:
                external_edges += 1

        with output.open("w") as handle, contextlib.redirect_stdout(handle):
            emit_preamble()
            print(f"/* VM program atlas {program}: {atlas['start']}..{atlas['end']} */")
            print("")
            emit_prototypes(chosen, prefix)
            for block in chosen:
                local_args = argparse.Namespace(max_expr_len=args.max_expr_len, rows_per_block=0)
                emit_block(
                    block,
                    rows_by_block.get(block["block"], []),
                    edges.get(block["block"]),
                    local_args,
                    known_blocks,
                    stats,
                    prefix,
                )
            emit_dispatch(chosen, prefix, entrypoint)

        source_blocks = Counter(segment_key(block.get("source_block", "")) for block in chosen)
        row_count = sum(len(rows_by_block.get(block["block"], [])) for block in chosen)
        total_blocks += len(chosen)
        total_rows += row_count
        manifest_rows.append({
            "program": f"{program:03d}",
            "path": str(output),
            "entrypoint": entrypoint,
            "start": str(atlas["start"]),
            "end": str(atlas["end"]),
            "size": str(atlas["size"]),
            "atlas_segments": str(atlas.get("segment_ids", "")),
            "blocks": len(chosen),
            "rows": row_count,
            "state_inlined": stats["state_inlined"],
            "state_summarized": stats["state_summarized"],
            "state_preserved": stats["state_preserved"],
            "concrete_next_entry": stats["concrete_next_entry"],
            "decoded_long_control": stats["decoded_long_control"],
            "external_edges": external_edges,
            "source_blocks": ",".join(f"{key}:{value}" for key, value in source_blocks.most_common()),
        })

    write_manifest(args.manifest, manifest_rows)
    print(
        f"vm_program_split_files={len(manifest_rows)} blocks={total_blocks} rows={total_rows} "
        f"manifest={args.manifest}",
        file=sys.stderr,
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
