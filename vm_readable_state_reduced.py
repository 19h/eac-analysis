#!/usr/bin/env python3
"""Promote proved MBA state reductions into readable VM program artifacts."""

from __future__ import annotations

import argparse
from collections import Counter, defaultdict
from pathlib import Path

from vm_program_readable_c import emit_program, group_by, markdown_table, parse_int, read_tsv, write_tsv


OBFUSCATED_DISPATCH_KINDS = {"slot_multi_path", "slot_mba_stateful"}


def split_reasons(text: str) -> list[str]:
    return [part.strip() for part in str(text or "").split(";") if part.strip() and part.strip() != "none"]


def join_reasons(reasons: list[str]) -> str:
    unique: list[str] = []
    for reason in reasons:
        if reason and reason not in unique:
            unique.append(reason)
    return ";".join(unique) if unique else "none"


def semantic_c(row: dict[str, str]) -> str:
    return (
        f"{row.get('opcode_name', '')}: {row.get('state_semantics', '')}; "
        f"{row.get('dispatch_semantics', '')}; {row.get('ip_semantics', '')};"
    )


def reduced_unresolved(row: dict[str, str]) -> str:
    reasons = [
        reason
        for reason in split_reasons(row.get("unresolved", ""))
        if reason not in {"algebraic_state_or_slot_formula", "state_formula_not_named"}
    ]
    slot_kind = row.get("dispatch_slot_kind", "")
    if slot_kind in OBFUSCATED_DISPATCH_KINDS:
        reasons.append("dispatch_formula_not_reduced")
    return join_reasons(reasons)


def reduced_grade(row: dict[str, str], unresolved: str) -> str:
    reasons = set(split_reasons(unresolved))
    if "dispatch_slot_unknown" in reasons:
        return "state_reduced_unresolved_dispatch_details"
    if "static_model_or_runtime_validation_incomplete" in reasons:
        return "state_reduced_partial_runtime_or_static_model"
    if "dispatch_formula_not_reduced" in reasons:
        return "state_reduced_dispatch_formula_open"
    if unresolved == "none":
        return "state_reduced_readable_control_semantics"
    return "state_reduced_with_notes"


def proof_map(rows: list[dict[str, str]]) -> dict[str, dict[str, str]]:
    proved: dict[str, dict[str, str]] = {}
    for row in rows:
        if row.get("proof_status") == "proved_equivalent" and row.get("candidate_c"):
            proved[row["source_entry"]] = row
    return proved


def reduce_isa_rows(
    isa_rows: list[dict[str, str]], reductions_by_entry: dict[str, dict[str, str]]
) -> tuple[list[dict[str, object]], Counter[str]]:
    out_rows: list[dict[str, object]] = []
    status_counts: Counter[str] = Counter()
    for row in isa_rows:
        out: dict[str, object] = dict(row)
        entry = row.get("source_entry", "")
        proof = reductions_by_entry.get(entry)
        if proof:
            candidate = proof["candidate_c"]
            out["original_state_semantics"] = row.get("state_semantics", "")
            out["original_state_effect_preview"] = row.get("state_effect_preview", "")
            out["state_semantics"] = f"vm_state = Z3-proved simplified expression; formula={candidate}"
            out["state_effect_preview"] = candidate
            out["state_reduction_status"] = "applied_proved_equivalent"
            out["state_reduction_proof_status"] = proof.get("proof_status", "")
            out["state_reduction_smt2"] = proof.get("smt2", "")
            out["state_reduction_original_chars"] = proof.get("original_chars", "")
            out["state_reduction_candidate_chars"] = proof.get("candidate_chars", "")
            out["unresolved"] = reduced_unresolved({k: str(v) for k, v in out.items()})
            out["readability_grade"] = reduced_grade({k: str(v) for k, v in out.items()}, str(out["unresolved"]))
            out["semantic_c"] = semantic_c({k: str(v) for k, v in out.items()})
            status_counts["applied"] += 1
        else:
            out["original_state_semantics"] = row.get("state_semantics", "")
            out["original_state_effect_preview"] = row.get("state_effect_preview", "")
            out["state_reduction_status"] = "not_applicable_or_unproved"
            out["state_reduction_proof_status"] = ""
            out["state_reduction_smt2"] = ""
            out["state_reduction_original_chars"] = ""
            out["state_reduction_candidate_chars"] = ""
            status_counts["not_applicable_or_unproved"] += 1
        out_rows.append(out)
    return out_rows, status_counts


def reduce_program_rows(
    program_rows: list[dict[str, str]], reduced_isa_by_entry: dict[str, dict[str, object]]
) -> tuple[list[dict[str, object]], dict[str, list[dict[str, object]]]]:
    out_rows: list[dict[str, object]] = []
    rows_by_program: dict[str, list[dict[str, object]]] = defaultdict(list)
    for row in program_rows:
        out: dict[str, object] = dict(row)
        isa = reduced_isa_by_entry.get(row.get("source_entry", ""), {})
        for field in [
            "operation_family",
            "readability_grade",
            "operand_model",
            "state_semantics",
            "dispatch_semantics",
            "ip_semantics",
            "unresolved",
            "state_reduction_status",
            "state_reduction_proof_status",
            "state_reduction_smt2",
        ]:
            if field in isa:
                out[field] = isa[field]
        out["operation_summary"] = isa.get("semantic_c", row.get("operation_summary", ""))
        out_rows.append(out)
        rows_by_program[str(out["program"])].append(out)
    return out_rows, rows_by_program


def emit_vmpseudo_files(root: Path, rows_by_program: dict[str, list[dict[str, object]]]) -> list[dict[str, object]]:
    out_dir = root / "vm_programs_state_reduced_readable_ops"
    out_dir.mkdir(parents=True, exist_ok=True)
    for old in out_dir.glob("vm_program_atlas_*.vmpseudo"):
        old.unlink()

    manifest_rows: list[dict[str, object]] = []
    for program in sorted(rows_by_program, key=lambda value: parse_int(value)):
        rows = rows_by_program[program]
        path = out_dir / f"vm_program_atlas_{program}.vmpseudo"
        reduced_rows = [row for row in rows if row.get("state_reduction_status") == "applied_proved_equivalent"]
        unresolved_rows = [row for row in rows if row.get("unresolved") and row.get("unresolved") != "none"]
        string_refs = [row for row in rows if row.get("string_ref_indexes")]
        family_mix = Counter(str(row.get("operation_family", "")) for row in rows)
        lines = [
            f"VM program atlas {program} state-reduced readable operations",
            f"rows: {len(rows)}",
            f"state_reduced_rows: {len(reduced_rows)}",
            f"unresolved_rows: {len(unresolved_rows)}",
            f"family_mix: {','.join(f'{key}:{count}' for key, count in family_mix.most_common(8) if key)}",
            "",
        ]
        current_block = None
        for row in rows:
            block = str(row.get("source_block", "")).split("@", 1)[0]
            if block != current_block:
                current_block = block
                lines.append(f"block {block}")
            lines.append(
                f"  {row['start_vm_ip']}..{row['end_vm_ip']} {row['opcode_name']} "
                f"bytes={row['bytes']} grade={row['readability_grade']} target={row['target']} delta={row['delta']}"
            )
            lines.append(f"    state: {row['state_semantics']}")
            lines.append(f"    dispatch: {row['dispatch_semantics']}")
            lines.append(f"    ip: {row['ip_semantics']}")
            if row.get("state_reduction_status") == "applied_proved_equivalent":
                lines.append(f"    proof: {row.get('state_reduction_smt2', '')}")
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
                "state_reduced_rows": len(reduced_rows),
                "string_ref_rows": len(string_refs),
                "unresolved_rows": len(unresolved_rows),
                "family_mix": ",".join(f"{key}:{count}" for key, count in family_mix.most_common(8) if key),
            }
        )
    return manifest_rows


def emit_c_files(
    root: Path,
    rows_by_program: dict[str, list[dict[str, object]]],
    edges_by_program: dict[str, list[dict[str, str]]],
    refs_by_program: dict[str, list[dict[str, str]]],
    dossiers: dict[str, dict[str, str]],
) -> list[dict[str, object]]:
    out_dir = root / "vm_programs_state_reduced_readable_c"
    out_dir.mkdir(parents=True, exist_ok=True)
    for old in out_dir.glob("vm_program_atlas_*_readable.c"):
        old.unlink()

    manifest_rows: list[dict[str, object]] = []
    for program in sorted(rows_by_program, key=lambda value: parse_int(value)):
        ops = sorted(rows_by_program[program], key=lambda row: parse_int(str(row.get("start_vm_ip"))))
        edges = sorted(edges_by_program.get(program, []), key=lambda row: parse_int(row.get("case_state")))
        refs = sorted(refs_by_program.get(program, []), key=lambda row: parse_int(row.get("ref_index")))
        dossier = dossiers.get(program, {})
        path = emit_program(root, out_dir, program, [{k: str(v) for k, v in row.items()} for row in ops], edges, refs, dossier)
        family_mix = Counter(str(row.get("operation_family", "")) for row in ops)
        manifest_rows.append(
            {
                "program": program,
                "path": str(path),
                "ops": len(ops),
                "state_reduced_ops": sum(1 for row in ops if row.get("state_reduction_status") == "applied_proved_equivalent"),
                "edges": len(edges),
                "string_refs": len(refs),
                "range": dossier.get("range", ""),
                "summary": dossier.get("summary", ""),
                "unresolved": dossier.get("unresolved", ""),
                "family_mix": ",".join(f"{key}:{count}" for key, count in family_mix.most_common(8) if key),
            }
        )
    return manifest_rows


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    input_paths = [
        root / "vm_readable_isa.tsv",
        root / "vm_program_readable_ops.tsv",
        root / "vm_mba_state_formula_compiler_reductions.tsv",
        root / "vm_program_control_graph_edges.tsv",
        root / "vm_native_side_effect_vm_refs.tsv",
        root / "vm_program_behavior_dossiers.tsv",
    ]
    for path in input_paths:
        if not path.exists():
            raise SystemExit(f"missing input: {path}")

    isa_rows = read_tsv(root / "vm_readable_isa.tsv")
    program_rows = read_tsv(root / "vm_program_readable_ops.tsv")
    reductions = read_tsv(root / "vm_mba_state_formula_compiler_reductions.tsv")
    edges_by_program = group_by(read_tsv(root / "vm_program_control_graph_edges.tsv"), "source_program")
    refs_by_program = group_by(read_tsv(root / "vm_native_side_effect_vm_refs.tsv"), "program")
    dossiers = {row["program"]: row for row in read_tsv(root / "vm_program_behavior_dossiers.tsv")}

    reductions_by_entry = proof_map(reductions)
    reduced_isa_rows, status_counts = reduce_isa_rows(isa_rows, reductions_by_entry)
    reduced_isa_by_entry = {str(row["source_entry"]): row for row in reduced_isa_rows}
    reduced_program_rows, rows_by_program = reduce_program_rows(program_rows, reduced_isa_by_entry)
    vmpseudo_manifest = emit_vmpseudo_files(root, rows_by_program)
    c_manifest = emit_c_files(root, rows_by_program, edges_by_program, refs_by_program, dossiers)

    isa_fields = list(isa_rows[0].keys()) + [
        "original_state_semantics",
        "original_state_effect_preview",
        "state_reduction_status",
        "state_reduction_proof_status",
        "state_reduction_smt2",
        "state_reduction_original_chars",
        "state_reduction_candidate_chars",
    ]
    program_fields = list(program_rows[0].keys()) + [
        "state_reduction_status",
        "state_reduction_proof_status",
        "state_reduction_smt2",
    ]
    vmpseudo_manifest_fields = [
        "program",
        "path",
        "rows",
        "state_reduced_rows",
        "string_ref_rows",
        "unresolved_rows",
        "family_mix",
    ]
    c_manifest_fields = [
        "program",
        "path",
        "ops",
        "state_reduced_ops",
        "edges",
        "string_refs",
        "range",
        "summary",
        "unresolved",
        "family_mix",
    ]
    write_tsv(root / "vm_readable_isa_state_reduced.tsv", reduced_isa_rows, isa_fields)
    write_tsv(root / "vm_program_readable_ops_state_reduced.tsv", reduced_program_rows, program_fields)
    write_tsv(root / "vm_program_readable_ops_state_reduced_manifest.tsv", vmpseudo_manifest, vmpseudo_manifest_fields)
    write_tsv(root / "vm_program_state_reduced_readable_c_manifest.tsv", c_manifest, c_manifest_fields)

    applied_entries = {row["source_entry"] for row in reduced_isa_rows if row["state_reduction_status"] == "applied_proved_equivalent"}
    applied_program_rows = sum(1 for row in reduced_program_rows if row.get("state_reduction_status") == "applied_proved_equivalent")
    unresolved_mix = Counter(str(row.get("unresolved", "")) for row in reduced_isa_rows)
    grade_mix = Counter(str(row.get("readability_grade", "")) for row in reduced_isa_rows)
    md_lines = [
        "# VM Readable State-Reduced Artifacts",
        "",
        "This layer applies only compiler-recovered MBA state expressions that were proven equivalent with Z3. It preserves dispatch formulas, concrete row targets, string/data references, and native side-effect evidence instead of treating state reduction as full program understanding.",
        "",
        "## Summary",
        "",
        markdown_table(
            ["metric", "value"],
            [
                ["readable ISA entries", len(reduced_isa_rows)],
                ["proved state reductions available", len(reductions_by_entry)],
                ["proved state reductions applied", len(applied_entries)],
                ["program rows", len(reduced_program_rows)],
                ["program rows with reduced state", applied_program_rows],
                ["program files", len(c_manifest)],
                ["C output dir", str(root / "vm_programs_state_reduced_readable_c")],
                ["readability grades", ",".join(f"{k}:{v}" for k, v in grade_mix.most_common(10))],
                ["unresolved mix", ",".join(f"{k}:{v}" for k, v in unresolved_mix.most_common(10))],
            ],
        ),
        "",
        "## Reduced Entries",
        "",
        markdown_table(
            ["entry", "opcode", "state", "dispatch", "unresolved"],
            [
                [
                    row["source_entry"],
                    row["opcode_name"],
                    row["state_semantics"],
                    row["dispatch_semantics"],
                    row["unresolved"],
                ]
                for row in reduced_isa_rows
                if row["state_reduction_status"] == "applied_proved_equivalent"
            ][:80],
        ),
        "",
        "## Remaining Gaps",
        "",
        "State MBA formulas covered by `vm_mba_state_formula_compiler_reductions.tsv` are reduced here. Dispatch formulas, unknown dispatch slots, native-call binding, real-server path coverage, and human intent remain separate open gaps before claiming full C/C++ reconstruction.",
    ]
    (root / "vm_readable_state_reduced.md").write_text("\n".join(md_lines) + "\n")

    print(f"state_reduced_isa_entries={len(reduced_isa_rows)}")
    print(f"proved_state_reductions_available={len(reductions_by_entry)}")
    print(f"proved_state_reductions_applied={len(applied_entries)}")
    print(f"state_reduced_program_rows={applied_program_rows}")
    print(f"program_files={len(c_manifest)}")
    print(f"status_counts={dict(status_counts)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
