#!/usr/bin/env python3
"""Build a readable VM ISA layer and per-program readable opcode listings."""

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


def parse_int(text: str | None) -> int:
    value = (text or "").strip()
    if not value:
        return 0
    try:
        return int(value, 16 if value.startswith("0x") else 10)
    except ValueError:
        return 0


def trim(text: str, limit: int = 220) -> str:
    value = (text or "").replace("\n", " ")
    return value if len(value) <= limit else value[: limit - 20] + f"...#{len(value):x}"


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        cells = [str(cell).replace("|", "\\|").replace("\n", " ") for cell in row]
        lines.append("| " + " | ".join(cell if len(cell) <= 140 else cell[:137] + "..." for cell in cells) + " |")
    return "\n".join(lines)


def counter_text(counter: Counter[str], limit: int = 10) -> str:
    return ",".join(f"{key}:{count}" for key, count in counter.most_common(limit) if key)


def delta_bytes(delta: str) -> int:
    value = (delta or "").strip()
    if not value:
        return 0
    sign = -1 if value.startswith("-") else 1
    value = value[1:] if value[0] in "+-" else value
    try:
        return sign * int(value, 16 if value.startswith("0x") else 10)
    except ValueError:
        return 0


def operand_model(row: dict[str, str]) -> str:
    shape = row.get("shape", "")
    word_shape = row.get("word_shape", "")
    layout = row.get("operand_layout", "")
    parts: list[str] = []
    if shape:
        parts.append(f"byte_shape={shape} (C=constant,E=enumerated,V=variable)")
    if word_shape:
        parts.append(f"word_shape={word_shape}")
    if "u16_0" in row.get("dispatch_slot_ir", ""):
        parts.append("reads u16(ip+0)")
    if "u16_1" in row.get("dispatch_slot_ir", ""):
        parts.append("reads u16(ip+1)")
    if "u16_2" in row.get("dispatch_slot_ir", ""):
        parts.append("reads u16(ip+2)")
    if "u16_3" in row.get("dispatch_slot_ir", ""):
        parts.append("reads u16(ip+3)")
    if layout:
        parts.append(trim(layout, 180))
    return "; ".join(parts) if parts else "operand model not recovered"


def state_semantics(row: dict[str, str]) -> str:
    state_kind = row.get("state_kind", "")
    preview = row.get("state_effect_preview", "")
    if state_kind == "state_preserve":
        return "vm_state is preserved"
    if state_kind == "state_const_post":
        return "vm_state is set to or checked against a post-dispatch constant marker"
    if state_kind == "state_add_const":
        return "vm_state = add/constant-style update over state, flags, and operands; formula=" + trim(preview)
    if state_kind == "state_mixed":
        return "vm_state = mixed MBA update over state, flags, and operands; formula=" + trim(preview)
    if state_kind == "state_formula":
        return "vm_state = unresolved formula; formula=" + trim(preview)
    if state_kind == "state_affine":
        return "vm_state = affine expression; formula=" + trim(preview)
    if state_kind == "state_simple":
        return "vm_state = simple expression; formula=" + trim(preview)
    if state_kind in {"sampled_backedge", "sampled_long_or_sparse", "central_or_long", "exact"}:
        return f"control-special state class {state_kind}; formula=" + trim(preview)
    if preview:
        return f"vm_state update class {state_kind}; formula=" + trim(preview)
    return f"vm_state update class {state_kind or 'unknown'}"


def dispatch_semantics(row: dict[str, str]) -> str:
    slot_kind = row.get("dispatch_slot_kind", "")
    preview = row.get("dispatch_slot_preview", "")
    if slot_kind == "slot_u16_0":
        return "next_entry = dispatch_table[u16(ip+0)]"
    if slot_kind == "slot_u16_1":
        return "next_entry = dispatch_table[u16(ip+1)]"
    if slot_kind == "slot_u16_2":
        return "next_entry = dispatch_table[u16(ip+2)]"
    if slot_kind == "slot_u16_0_sub_const":
        return "next_entry = dispatch_table[(u16(ip+0) - constant) & 0xffff]"
    if slot_kind == "slot_u16_1_sub_const":
        return "next_entry = dispatch_table[(u16(ip+1) - constant) & 0xffff]"
    if slot_kind == "slot_const_or_affine":
        return "next_entry = fixed or affine dispatch slot; expression=" + trim(preview)
    if slot_kind == "slot_multi_path":
        return "next_entry = one of multiple algebraic dispatch slots; per-row concrete target is resolved; expression=" + trim(preview)
    if slot_kind == "slot_mba_stateful":
        return "next_entry = MBA(state, flags, operands) dispatch slot; per-row concrete target is resolved; expression=" + trim(preview)
    if slot_kind == "slot_byte_operand":
        return "next_entry = dispatch slot derived from byte operand; expression=" + trim(preview)
    if slot_kind == "slot_unknown":
        return "dispatch slot expression not recovered; use per-row target evidence when available"
    return f"dispatch slot class {slot_kind or 'unknown'}; expression=" + trim(preview)


def ip_semantics(delta: str) -> str:
    amount = delta_bytes(delta)
    if amount > 0:
        return f"ip += 0x{amount:x}"
    if amount < 0:
        return f"ip -= 0x{-amount:x} (backedge)"
    return "ip advance unknown or non-local"


def operation_family(row: dict[str, str]) -> str:
    state_kind = row.get("state_kind", "")
    slot_kind = row.get("dispatch_slot_kind", "")
    amount = delta_bytes(row.get("delta", ""))
    if amount < 0 or state_kind in {"sampled_backedge", "sampled_long_or_sparse", "central_or_long"}:
        return "long_or_backedge_control"
    if slot_kind in {"slot_u16_0", "slot_u16_1", "slot_u16_2", "slot_u16_0_sub_const", "slot_u16_1_sub_const"}:
        return "operand_table_dispatch"
    if slot_kind == "slot_const_or_affine":
        return "fixed_or_affine_dispatch"
    if slot_kind in {"slot_multi_path", "slot_mba_stateful"}:
        return "obfuscated_table_dispatch"
    if slot_kind == "slot_unknown":
        return "unresolved_dispatch"
    return "structural_dispatch"


def unresolved_reasons(row: dict[str, str]) -> list[str]:
    reasons: list[str] = []
    status = row.get("readability_status", "")
    slot_kind = row.get("dispatch_slot_kind", "")
    state_kind = row.get("state_kind", "")
    class_name = row.get("class", "")
    if "needs_algebraic_simplification" in status:
        reasons.append("algebraic_state_or_slot_formula")
    if slot_kind == "slot_unknown":
        reasons.append("dispatch_slot_unknown")
    if class_name in {"partial", "sampled_only", "sampled_operand_lifted"}:
        reasons.append("static_model_or_runtime_validation_incomplete")
    if state_kind in {"state_formula", "state_mixed"}:
        reasons.append("state_formula_not_named")
    if not reasons:
        reasons.append("none")
    return reasons


def readability_grade(reasons: list[str], row: dict[str, str]) -> str:
    if reasons == ["none"]:
        return "readable_control_semantics"
    if "dispatch_slot_unknown" in reasons:
        return "unresolved_dispatch_details"
    if "static_model_or_runtime_validation_incomplete" in reasons:
        return "partial_runtime_or_static_model"
    if "algebraic_state_or_slot_formula" in reasons:
        return "readable_with_structural_algebra"
    return "readable_with_notes"


def semantic_c(row: dict[str, str], state: str, dispatch: str, ip: str) -> str:
    opname = row.get("opcode_name", "")
    return f"{opname}: {state}; {dispatch}; {ip};"


def build_string_maps(vm_refs: list[dict[str, str]]) -> dict[tuple[str, str], list[dict[str, str]]]:
    by_row: dict[tuple[str, str], list[dict[str, str]]] = defaultdict(list)
    for row in vm_refs:
        by_row[(row.get("program", ""), row.get("row_start", ""))].append(row)
    return by_row


def format_refs(refs: list[dict[str, str]]) -> tuple[str, str, str]:
    indexes = " || ".join(row.get("ref_index", "") for row in refs)
    strings = " || ".join(f"{row.get('text', '')} [{row.get('role', '')}]" for row in refs)
    categories = " || ".join(row.get("categories", "") for row in refs)
    return indexes, strings, categories


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    catalog_path = root / "vm_semantic_opcode_catalog.tsv"
    program_ops_path = root / "vm_program_opcode_pseudocode.tsv"
    program_manifest_path = root / "vm_program_opcode_pseudocode_manifest.tsv"
    vm_refs_path = root / "vm_native_side_effect_vm_refs.tsv"
    for path in [catalog_path, program_ops_path, program_manifest_path, vm_refs_path]:
        if not path.exists():
            raise SystemExit(f"missing input: {path}")

    catalog = read_tsv(catalog_path)
    program_ops = read_tsv(program_ops_path)
    old_manifest = read_tsv(program_manifest_path)
    vm_refs = read_tsv(vm_refs_path)
    refs_by_row = build_string_maps(vm_refs)

    isa_rows: list[dict[str, object]] = []
    isa_by_entry: dict[str, dict[str, object]] = {}
    for row in catalog:
        reasons = unresolved_reasons(row)
        state = state_semantics(row)
        dispatch = dispatch_semantics(row)
        ip = ip_semantics(row.get("delta", ""))
        family = operation_family(row)
        grade = readability_grade(reasons, row)
        out = {
            "source_entry": row.get("source_entry", ""),
            "opcode_name": row.get("opcode_name", ""),
            "operation_family": family,
            "readability_grade": grade,
            "class": row.get("class", ""),
            "ir_rows": row.get("ir_rows", ""),
            "delta": row.get("delta", ""),
            "ip_semantics": ip,
            "operand_model": operand_model(row),
            "state_semantics": state,
            "dispatch_semantics": dispatch,
            "semantic_c": semantic_c(row, state, dispatch, ip),
            "unresolved": ";".join(reasons),
            "state_kind": row.get("state_kind", ""),
            "dispatch_slot_kind": row.get("dispatch_slot_kind", ""),
            "state_effect_preview": row.get("state_effect_preview", ""),
            "dispatch_slot_preview": row.get("dispatch_slot_preview", ""),
            "programs": row.get("programs", ""),
        }
        isa_rows.append(out)
        isa_by_entry[str(out["source_entry"])] = out

    program_rows: list[dict[str, object]] = []
    rows_by_program: dict[str, list[dict[str, object]]] = defaultdict(list)
    string_ref_indexes_seen: set[str] = set()
    for row in program_ops:
        entry = row.get("source_entry", "")
        isa = isa_by_entry.get(entry, {})
        refs = refs_by_row.get((row.get("program", ""), row.get("start_vm_ip", "")), [])
        ref_indexes, ref_strings, ref_categories = format_refs(refs)
        for ref in refs:
            if ref.get("ref_index"):
                string_ref_indexes_seen.add(ref["ref_index"])
        out = {
            "program": row.get("program", ""),
            "start_vm_ip": row.get("start_vm_ip", ""),
            "end_vm_ip": row.get("end_vm_ip", ""),
            "source_block": row.get("source_block", ""),
            "source_entry": entry,
            "opcode_name": row.get("opcode_name", ""),
            "bytes": row.get("bytes", ""),
            "operation_family": isa.get("operation_family", ""),
            "readability_grade": isa.get("readability_grade", ""),
            "operation_summary": isa.get("semantic_c", ""),
            "operand_model": isa.get("operand_model", ""),
            "state_semantics": isa.get("state_semantics", ""),
            "dispatch_semantics": isa.get("dispatch_semantics", ""),
            "ip_semantics": isa.get("ip_semantics", ""),
            "target_entry": row.get("target_entry", ""),
            "target": row.get("target", ""),
            "delta": row.get("delta", ""),
            "string_ref_indexes": ref_indexes,
            "string_refs": ref_strings,
            "side_effect_categories": ref_categories,
            "unresolved": isa.get("unresolved", ""),
        }
        program_rows.append(out)
        rows_by_program[str(out["program"])].append(out)

    out_dir = root / "vm_programs_readable_ops"
    out_dir.mkdir(parents=True, exist_ok=True)
    for old in out_dir.glob("vm_program_atlas_*.vmpseudo"):
        old.unlink()

    manifest_rows: list[dict[str, object]] = []
    old_by_program = {row.get("program", ""): row for row in old_manifest}
    for program in sorted(rows_by_program, key=lambda value: parse_int(value)):
        rows = rows_by_program[program]
        path = out_dir / f"vm_program_atlas_{program}.vmpseudo"
        string_refs = [row for row in rows if row.get("string_ref_indexes")]
        unresolved_count = sum(1 for row in rows if row.get("unresolved") and row.get("unresolved") != "none")
        family_mix = Counter(str(row.get("operation_family", "")) for row in rows)
        lines = [
            f"VM program atlas {program} readable operations",
            f"source_vmops: {old_by_program.get(program, {}).get('path', '')}",
            f"rows: {len(rows)}",
            f"family_mix: {counter_text(family_mix, 8)}",
            f"string_refs: {'; '.join(str(row.get('string_refs', '')) for row in string_refs) if string_refs else ''}",
            "",
        ]
        current_block = None
        for row in rows:
            block = str(row.get("source_block", ""))
            if block != current_block:
                current_block = block
                lines.append(f"block {block}")
            line = (
                f"  {row['start_vm_ip']}..{row['end_vm_ip']} {row['opcode_name']} "
                f"bytes={row['bytes']} family={row['operation_family']} grade={row['readability_grade']} "
                f"target={row['target']} delta={row['delta']}"
            )
            lines.append(line)
            lines.append(f"    state: {row['state_semantics']}")
            lines.append(f"    dispatch: {row['dispatch_semantics']}")
            lines.append(f"    ip: {row['ip_semantics']}")
            if row.get("string_refs"):
                lines.append(f"    data: {row['string_refs']} categories={row['side_effect_categories']}")
            if row.get("unresolved") and row.get("unresolved") != "none":
                lines.append(f"    unresolved: {row['unresolved']}")
        path.write_text("\n".join(lines) + "\n")
        manifest_rows.append(
            {
                "program": program,
                "path": str(path),
                "rows": len(rows),
                "string_ref_rows": len(string_refs),
                "unresolved_rows": unresolved_count,
                "family_mix": counter_text(family_mix, 8),
            }
        )

    isa_fields = [
        "source_entry",
        "opcode_name",
        "operation_family",
        "readability_grade",
        "class",
        "ir_rows",
        "delta",
        "ip_semantics",
        "operand_model",
        "state_semantics",
        "dispatch_semantics",
        "semantic_c",
        "unresolved",
        "state_kind",
        "dispatch_slot_kind",
        "state_effect_preview",
        "dispatch_slot_preview",
        "programs",
    ]
    program_fields = [
        "program",
        "start_vm_ip",
        "end_vm_ip",
        "source_block",
        "source_entry",
        "opcode_name",
        "bytes",
        "operation_family",
        "readability_grade",
        "operation_summary",
        "operand_model",
        "state_semantics",
        "dispatch_semantics",
        "ip_semantics",
        "target_entry",
        "target",
        "delta",
        "string_ref_indexes",
        "string_refs",
        "side_effect_categories",
        "unresolved",
    ]
    manifest_fields = ["program", "path", "rows", "string_ref_rows", "unresolved_rows", "family_mix"]
    write_tsv(root / "vm_readable_isa.tsv", isa_rows, isa_fields)
    write_tsv(root / "vm_program_readable_ops.tsv", program_rows, program_fields)
    write_tsv(root / "vm_program_readable_ops_manifest.tsv", manifest_rows, manifest_fields)

    family_mix = Counter(str(row["operation_family"]) for row in isa_rows)
    grade_mix = Counter(str(row["readability_grade"]) for row in isa_rows)
    unresolved_mix = Counter()
    for row in isa_rows:
        for item in str(row["unresolved"]).split(";"):
            if item:
                unresolved_mix[item] += 1
    md_lines = [
        "# VM Readable ISA",
        "",
        "This is a second-pass readable ISA layer over the recovered opcode catalog. It gives every VM source entry a C-like operation summary and emits per-program readable operation listings. It does not claim that all MBA algebra is simplified; unresolved algebra remains explicitly marked.",
        "",
        "## Summary",
        "",
        markdown_table(
            ["metric", "value"],
            [
                ["opcode entries", len(isa_rows)],
                ["program op rows", len(program_rows)],
                ["program files", len(manifest_rows)],
                ["string refs propagated", len(string_ref_indexes_seen)],
                ["operation families", counter_text(family_mix, 12)],
                ["readability grades", counter_text(grade_mix, 12)],
                ["unresolved mix", counter_text(unresolved_mix, 12)],
            ],
        ),
        "",
        "## ISA Entries",
        "",
        markdown_table(
            ["entry", "opcode", "family", "grade", "state", "dispatch", "unresolved"],
            [
                [
                    row["source_entry"],
                    row["opcode_name"],
                    row["operation_family"],
                    row["readability_grade"],
                    row["state_semantics"],
                    row["dispatch_semantics"],
                    row["unresolved"],
                ]
                for row in isa_rows[:80]
            ],
        ),
        "",
        "## Caveat",
        "",
        "Rows marked `readable_with_structural_algebra`, `partial_runtime_or_static_model`, or `unresolved_dispatch_details` are readable control semantics with preserved formulas, not fully deobfuscated arithmetic. They remain open work before claiming full per-instruction understanding.",
    ]
    (root / "vm_readable_isa.md").write_text("\n".join(md_lines) + "\n")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
