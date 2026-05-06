#!/usr/bin/env python3
"""Generate a compact opcode-level catalog and per-program VM-op listings."""

from __future__ import annotations

import argparse
import csv
import re
from collections import Counter, defaultdict
from pathlib import Path


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def write_tsv(path: Path, rows: list[dict[str, object]], fields: list[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", newline="") as handle:
        writer = csv.DictWriter(handle, delimiter="\t", fieldnames=fields, lineterminator="\n")
        writer.writeheader()
        for row in rows:
            writer.writerow({field: row.get(field, "") for field in fields})


def parse_int(text: str | int | None) -> int:
    if isinstance(text, int):
        return text
    value = (text or "").strip()
    if not value:
        return 0
    return int(value, 16 if value.startswith("0x") else 10)


def counter_text(counter: Counter[str], limit: int = 8) -> str:
    return ",".join(f"{key}:{count}" for key, count in counter.most_common(limit) if key)


def trim(text: str, limit: int = 320) -> str:
    value = (text or "").replace("\n", " ")
    return value if len(value) <= limit else value[: limit - 24] + f"...#{len(value):x}"


def program_for_ip(program_ranges: list[tuple[int, int, str]], ip: int) -> str:
    for start, end, program in program_ranges:
        if start <= ip < end:
            return program
    return ""


def safe_name(text: str) -> str:
    value = re.sub(r"[^a-z0-9_]+", "_", text.lower()).strip("_")
    return value or "unknown"


def slot_kind(slot_expr: str) -> str:
    expr = (slot_expr or "").lower()
    if not expr:
        return "slot_unknown"
    variants = [part.strip() for part in expr.split(" | ") if part.strip()]
    if len(variants) > 1:
        return "slot_multi_path"
    if re.fullmatch(r"[0-9]+=\(?u16_0\)?\s*&\s*0xffff", expr) or re.fullmatch(r"[0-9]+=u16_0\s*&\s*0xffff", expr):
        return "slot_u16_0"
    if re.search(r"u16_0\s*&\s*0xffff", expr) and "mask32" not in expr and all(tok not in expr for tok in ["state0", "flags0", "b0", "b1", "b2"]):
        return "slot_u16_0"
    if re.search(r"u16_1\s*&\s*0xffff", expr) and "mask32" not in expr:
        return "slot_u16_1"
    if re.search(r"u16_2\s*&\s*0xffff", expr) and "mask32" not in expr:
        return "slot_u16_2"
    if re.search(r"u16_1\s*-\s*0x[0-9a-f]+", expr):
        return "slot_u16_1_sub_const"
    if re.search(r"u16_0\s*-\s*0x[0-9a-f]+", expr):
        return "slot_u16_0_sub_const"
    if re.search(r"\bb[0-5]\b", expr) and "mask32" not in expr:
        return "slot_byte_operand"
    if "state0" in expr or "flags0" in expr or "mask32" in expr:
        return "slot_mba_stateful"
    if re.search(r"0x[0-9a-f]+", expr):
        return "slot_const_or_affine"
    return "slot_other"


def state_kind(state_class_counter: Counter[str], state_effect: str) -> str:
    state_class = state_class_counter.most_common(1)[0][0] if state_class_counter else ""
    if state_class:
        return safe_name(state_class)
    if not state_effect:
        return "state_unknown"
    if state_effect in {"state0", "flags0", "0x0"}:
        return "state_simple"
    if len(state_effect) < 80 and all(token not in state_effect for token in ["|", "&"]):
        return "state_affine"
    return "state_formula"


def opcode_name(entry: str, delta: str, state_name: str, slot_name: str) -> str:
    delta_name = safe_name(delta.replace("+", "plus").replace("-", "minus"))
    return f"vmop_{int(entry):03d}_{delta_name}_{state_name}_{slot_name}"


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        escaped = [str(cell).replace("|", "\\|").replace("\n", " ") for cell in row]
        lines.append("| " + " | ".join(cell if len(cell) <= 120 else cell[:117] + "..." for cell in escaped) + " |")
    return "\n".join(lines)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    microcode_path = root / "vm_microcode_catalog.tsv"
    ir_path = root / "vm_bytecode_ir_decompile.tsv"
    manifest_path = root / "vm_programs_decompiled_folded_manifest.tsv"
    strings_path = root / "vm_program_folded_string_refs.tsv"
    for path in [microcode_path, ir_path, manifest_path, strings_path]:
        if not path.exists():
            raise SystemExit(f"missing input: {path}")

    manifest = read_tsv(manifest_path)
    program_ranges = sorted((parse_int(row["start"]), parse_int(row["end"]), row["program"]) for row in manifest)
    program_paths = {row["program"]: row for row in manifest}

    program_strings: dict[str, list[str]] = defaultdict(list)
    for row in read_tsv(strings_path):
        program = row.get("program", "")
        text = row.get("text", "")
        if program and text and text not in program_strings[program]:
            program_strings[program].append(text)

    ir_by_entry: dict[str, Counter[str]] = defaultdict(Counter)
    ir_state_by_entry: dict[str, Counter[str]] = defaultdict(Counter)
    ir_bytes_by_entry: dict[str, Counter[str]] = defaultdict(Counter)
    ir_programs_by_entry: dict[str, Counter[str]] = defaultdict(Counter)
    ir_rows: list[dict[str, str]] = []
    with ir_path.open(newline="") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        for row in reader:
            ir_rows.append(row)
            entry = row.get("source_entry", "")
            program = program_for_ip(program_ranges, parse_int(row.get("start_vm_ip", "0")))
            ir_by_entry[entry][row.get("state_effect_ir", "")] += 1
            ir_state_by_entry[entry][row.get("state_ir", "")] += 1
            ir_bytes_by_entry[entry][row.get("bytes", "")] += 1
            if program:
                ir_programs_by_entry[entry][program] += 1

    microcode = {row["entry"]: row for row in read_tsv(microcode_path)}
    source_entries = sorted({row.get("source_entry", "") for row in ir_rows if row.get("source_entry", "")}, key=lambda value: int(value))
    catalog_rows: list[dict[str, object]] = []
    opcode_by_entry: dict[str, dict[str, object]] = {}
    for entry in source_entries:
        mc = microcode.get(entry, {})
        common_effect, effect_count = ir_by_entry[entry].most_common(1)[0] if ir_by_entry[entry] else ("", 0)
        skind = state_kind(ir_state_by_entry[entry], common_effect)
        slkind = slot_kind(mc.get("dispatch_slot_ir", ""))
        delta = mc.get("delta", "") or "-"
        opname = opcode_name(entry, delta, skind, slkind)
        observed_rows = sum(ir_by_entry[entry].values())
        class_name = mc.get("class", "missing_microcode") or "missing_microcode"
        readability_status = "named_structural"
        if class_name.startswith("unobserved"):
            readability_status = "static_only_needs_runtime_validation"
        if slkind in {"slot_mba_stateful", "slot_multi_path"} or skind in {"state_formula", "state_mixed"}:
            readability_status += ";needs_algebraic_simplification"
        row = {
            "source_entry": entry,
            "source_target": mc.get("target", ""),
            "opcode_name": opname,
            "class": class_name,
            "events": mc.get("events", "0"),
            "ir_rows": observed_rows,
            "delta": delta,
            "shape": mc.get("shape", ""),
            "word_shape": mc.get("word_shape", ""),
            "operand_layout": mc.get("operand_layout", ""),
            "word_layout": mc.get("word_layout", ""),
            "state_kind": skind,
            "state_class_mix": counter_text(ir_state_by_entry[entry], 6),
            "state_effect_rows": effect_count,
            "state_effect_ir": common_effect,
            "state_effect_preview": trim(common_effect),
            "dispatch_slot_kind": slkind,
            "dispatch_slot_ir": mc.get("dispatch_slot_ir", ""),
            "dispatch_slot_preview": trim(mc.get("dispatch_slot_ir", "")),
            "ip_advance_ir": mc.get("ip_advance_ir", ""),
            "long_branch_ir": mc.get("long_branch_ir", ""),
            "sampled_operand_ir": mc.get("sampled_operand_ir", ""),
            "top_bytes": counter_text(ir_bytes_by_entry[entry], 8),
            "programs": counter_text(ir_programs_by_entry[entry], 12),
            "readability_status": readability_status,
        }
        catalog_rows.append(row)
        opcode_by_entry[entry] = row

    catalog_fields = [
        "source_entry",
        "source_target",
        "opcode_name",
        "class",
        "events",
        "ir_rows",
        "delta",
        "shape",
        "word_shape",
        "operand_layout",
        "word_layout",
        "state_kind",
        "state_class_mix",
        "state_effect_rows",
        "state_effect_preview",
        "dispatch_slot_kind",
        "dispatch_slot_preview",
        "ip_advance_ir",
        "long_branch_ir",
        "sampled_operand_ir",
        "top_bytes",
        "programs",
        "readability_status",
        "state_effect_ir",
        "dispatch_slot_ir",
    ]
    catalog_path = root / "vm_semantic_opcode_catalog.tsv"
    write_tsv(catalog_path, catalog_rows, catalog_fields)

    output_dir = root / "vm_programs_opcode_pseudocode"
    output_dir.mkdir(parents=True, exist_ok=True)
    for old in output_dir.glob("vm_program_atlas_*.vmops"):
        old.unlink()

    rows_by_program: dict[str, list[dict[str, str]]] = defaultdict(list)
    pseudocode_rows: list[dict[str, object]] = []
    for row in ir_rows:
        program = program_for_ip(program_ranges, parse_int(row.get("start_vm_ip", "0")))
        if not program:
            continue
        entry = row.get("source_entry", "")
        opcode = opcode_by_entry.get(entry, {})
        pseudo = {
            "program": program,
            "start_vm_ip": row.get("start_vm_ip", ""),
            "end_vm_ip": row.get("end_vm_ip", ""),
            "source_block": row.get("source_block", ""),
            "row_kind": row.get("row_kind", ""),
            "source_entry": entry,
            "opcode_name": opcode.get("opcode_name", f"vmop_{entry}_missing"),
            "bytes": row.get("bytes", ""),
            "state_kind": opcode.get("state_kind", ""),
            "dispatch_slot_kind": opcode.get("dispatch_slot_kind", ""),
            "target_entry": row.get("target_entry", ""),
            "target": row.get("target", ""),
            "delta": row.get("delta", ""),
            "semantic_ir": row.get("semantic_ir", ""),
        }
        pseudocode_rows.append(pseudo)
        rows_by_program[program].append(pseudo)

    pseudocode_fields = [
        "program",
        "start_vm_ip",
        "end_vm_ip",
        "source_block",
        "row_kind",
        "source_entry",
        "opcode_name",
        "bytes",
        "state_kind",
        "dispatch_slot_kind",
        "target_entry",
        "target",
        "delta",
        "semantic_ir",
    ]
    pseudocode_path = root / "vm_program_opcode_pseudocode.tsv"
    write_tsv(pseudocode_path, pseudocode_rows, pseudocode_fields)

    manifest_rows: list[dict[str, object]] = []
    for program in sorted(program_paths, key=lambda value: int(value)):
        path = output_dir / f"vm_program_atlas_{int(program):03d}.vmops"
        rows = rows_by_program[program]
        with path.open("w", encoding="utf-8") as handle:
            meta = program_paths[program]
            handle.write(f"VM program atlas {program}: {meta['start']}..{meta['end']}\n")
            handle.write(f"source: {meta['path']}\n")
            if program_strings[program]:
                handle.write("strings: " + "; ".join(program_strings[program]) + "\n")
            handle.write("\n")
            current_block = ""
            for row in rows:
                block = str(row["source_block"]).split("@", 1)[0]
                if block != current_block:
                    current_block = block
                    handle.write(f"\nblock {current_block}\n")
                handle.write(
                    f"  {row['start_vm_ip']}..{row['end_vm_ip']} "
                    f"{row['opcode_name']} bytes={row['bytes']} "
                    f"state={row['state_kind']} dispatch={row['dispatch_slot_kind']} "
                    f"=> {row['target']} ({row['delta']})\n"
                )
        manifest_rows.append(
            {
                "program": program,
                "path": str(path),
                "rows": len(rows),
                "blocks": program_paths[program].get("blocks", ""),
                "strings": "; ".join(program_strings[program][:10]),
            }
        )

    pseudo_manifest_path = root / "vm_program_opcode_pseudocode_manifest.tsv"
    write_tsv(pseudo_manifest_path, manifest_rows, ["program", "path", "rows", "blocks", "strings"])

    slot_mix = Counter(str(row["dispatch_slot_kind"]) for row in catalog_rows)
    state_mix = Counter(str(row["state_kind"]) for row in catalog_rows)
    readability_mix = Counter(str(row["readability_status"]) for row in catalog_rows)
    top_opcode_rows = sorted(catalog_rows, key=lambda row: parse_int(row["ir_rows"]), reverse=True)[:30]
    md_path = root / "vm_semantic_opcode_catalog.md"
    md_lines = [
        "# VM Semantic Opcode Catalog",
        "",
        "This is a structural opcode catalog, not a completed source-level deobfuscation. It assigns stable names to VM handler entries and exposes their state-update and dispatch-slot families so repeated bytecode sequences can be read without reopening the giant C expressions.",
        "",
        "## Summary",
        "",
        markdown_table(
            ["metric", "value"],
            [
                ["cataloged source entries", len(catalog_rows)],
                ["VM program opcode rows", len(pseudocode_rows)],
                ["program pseudocode files", len(manifest_rows)],
                ["dispatch slot kinds", counter_text(slot_mix, 12)],
                ["state kinds", counter_text(state_mix, 12)],
                ["readability status", counter_text(readability_mix, 12)],
            ],
        ),
        "",
        "## Top Opcodes By Program Use",
        "",
        markdown_table(
            ["entry", "opcode", "rows", "events", "delta", "state", "dispatch", "status"],
            [
                [
                    row["source_entry"],
                    row["opcode_name"],
                    row["ir_rows"],
                    row["events"],
                    row["delta"],
                    row["state_kind"],
                    row["dispatch_slot_kind"],
                    row["readability_status"],
                ]
                for row in top_opcode_rows
            ],
        ),
        "",
        "## Artifacts",
        "",
        f"- Opcode catalog: `{catalog_path}`",
        f"- Per-row VM-op TSV: `{pseudocode_path}`",
        f"- Per-program VM-op files: `{output_dir}/`",
        f"- Per-program manifest: `{pseudo_manifest_path}`",
        "",
    ]
    md_path.write_text("\n".join(md_lines), encoding="utf-8")

    print(f"wrote {catalog_path}")
    print(f"wrote {pseudocode_path}")
    print(f"wrote {pseudo_manifest_path}")
    print(f"wrote {md_path}")
    print(f"opcode_entries={len(catalog_rows)} program_rows={len(pseudocode_rows)} program_files={len(manifest_rows)}")
    print("semantic_status=structural_opcode_names_ready;algebraic_simplification_open")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
