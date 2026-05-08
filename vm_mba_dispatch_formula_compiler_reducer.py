#!/usr/bin/env python3
"""Recover and prove compiler-simplified MBA dispatch slot expressions."""

from __future__ import annotations

import argparse
import csv
import re
import shutil
import subprocess
from collections import Counter
from pathlib import Path

from vm_mba_state_formula_compiler_reducer import FIELDS, bin_expr, hex_u32, markdown_table, parenthesize
from vm_mba_state_formula_prover import make_query, prove_with_z3


OFFSET_TO_FIELD = {index * 4: field for index, field in enumerate(FIELDS)}
REG_ALIASES = {
    "eax": "rax",
    "ax": "rax",
    "al": "rax",
    "ecx": "rcx",
    "cx": "rcx",
    "cl": "rcx",
    "edx": "rdx",
    "dx": "rdx",
    "dl": "rdx",
    "esi": "rsi",
    "si": "rsi",
    "sil": "rsi",
    "edi": "rdi",
    "di": "rdi",
    "dil": "rdi",
    "ebx": "rbx",
    "bx": "rbx",
    "bl": "rbx",
    "esp": "rsp",
    "sp": "rsp",
    "spl": "rsp",
    "ebp": "rbp",
    "bp": "rbp",
    "bpl": "rbp",
}
for index in range(8, 16):
    REG_ALIASES[f"r{index}d"] = f"r{index}"
    REG_ALIASES[f"r{index}w"] = f"r{index}"
    REG_ALIASES[f"r{index}b"] = f"r{index}"
    REG_ALIASES[f"r{index}"] = f"r{index}"


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="", errors="replace") as handle:
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


def c_expr(text: str) -> str:
    return re.sub(r"\bmask32\s*\(", "mask32(", text)


def split_slot_exprs(text: str) -> list[tuple[int, str]]:
    out: list[tuple[int, str]] = []
    for part in (text or "").split(";"):
        if not part:
            continue
        count, sep, expr = part.partition("=")
        if not sep:
            continue
        try:
            count_i = int(count, 10)
        except ValueError:
            count_i = 0
        out.append((count_i, expr.strip()))
    return out


def norm_reg(reg: str) -> str:
    return REG_ALIASES.get(reg.strip(), reg.strip())


def source_width(operand: str) -> int:
    operand = operand.strip()
    if re.fullmatch(r"(?:[abcd][lh]|[sd]il|[sb]pl|r(?:8|9|10|11|12|13|14|15)b)", operand):
        return 8
    if re.fullmatch(r"(?:[abcd]x|[sd]i|[sb]p|r(?:8|9|10|11|12|13|14|15)w)", operand):
        return 16
    if re.fullmatch(r"(?:e[abcd]x|r[abcd]x|e[sd]i|r[sd]i|e[sb]p|r[sb]p|r(?:8|9|10|11|12|13|14|15)d?|[abcd]x)", operand):
        return 32
    if operand.startswith("BYTE PTR"):
        return 8
    if operand.startswith("WORD PTR"):
        return 16
    return 32


def mask_expr(expr: str, bits: int) -> str:
    if bits >= 32:
        return expr
    mask = (1 << bits) - 1
    return bin_expr(expr, "&", hex_u32(mask))


def split_operands(text: str) -> list[str]:
    out: list[str] = []
    depth = 0
    start = 0
    for index, ch in enumerate(text):
        if ch == "[":
            depth += 1
        elif ch == "]":
            depth -= 1
        elif ch == "," and depth == 0:
            out.append(text[start:index].strip())
            start = index + 1
    out.append(text[start:].strip())
    return out


def mem_to_var(operand: str, pointer_regs: set[str]) -> tuple[str, int] | None:
    match = re.fullmatch(r"(BYTE|WORD|DWORD) PTR (?:([+-]?\d+))?\[([A-Za-z0-9]+)\]", operand)
    if not match:
        return None
    base = norm_reg(match.group(3))
    if base not in pointer_regs:
        return None
    offset = int(match.group(2) or "0")
    field = OFFSET_TO_FIELD.get(offset)
    if not field:
        return None
    bits = {"BYTE": 8, "WORD": 16, "DWORD": 32}[match.group(1)]
    return field, bits


def parse_atom(atom: str, regs: dict[str, str], pointer_regs: set[str]) -> str:
    atom = atom.strip()
    mem = mem_to_var(atom, pointer_regs)
    if mem:
        field, bits = mem
        return mask_expr(field, bits)
    if re.fullmatch(r"-?\d+", atom):
        return hex_u32(int(atom))
    if re.fullmatch(r"0x[0-9a-fA-F]+", atom):
        return hex_u32(int(atom, 16))
    reg = norm_reg(atom)
    if reg in regs:
        return mask_expr(regs[reg], source_width(atom))
    raise ValueError(f"unknown operand {atom!r}")


def parse_lea(operand: str, regs: dict[str, str], pointer_regs: set[str]) -> str:
    operand = operand.strip()
    disp = 0
    inner = operand
    match = re.fullmatch(r"([+-]?\d+)?\[(.*)\]", operand)
    if match:
        disp = int(match.group(1) or "0")
        inner = match.group(2)
    terms: list[str] = []
    if disp:
        terms.append(hex_u32(disp))
    for raw in inner.split("+"):
        term = raw.strip()
        if not term:
            continue
        if "*" in term:
            reg, scale = [part.strip() for part in term.split("*", 1)]
            terms.append(bin_expr(parse_atom(reg, regs, pointer_regs), "*", hex_u32(int(scale))))
        else:
            terms.append(parse_atom(term, regs, pointer_regs))
    if not terms:
        return "0x0u"
    expr = terms[0]
    for term in terms[1:]:
        expr = bin_expr(expr, "+", term)
    return expr


def compile_assembly(harness_path: Path, asm_path: Path) -> tuple[bool, str]:
    compiler = shutil.which("gcc") or shutil.which("clang")
    if not compiler:
        return False, "no C compiler found"
    result = subprocess.run(
        [compiler, "-std=c11", "-O3", "-S", "-masm=intel", "-w", str(harness_path), "-o", str(asm_path)],
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        check=False,
    )
    return result.returncode == 0, (result.stderr or result.stdout).strip()


def parse_functions(asm_path: Path) -> dict[tuple[str, int], list[str]]:
    functions: dict[tuple[str, int], list[str]] = {}
    current: tuple[str, int] | None = None
    for line in asm_path.read_text().splitlines():
        if match := re.match(r"vm_mba_eval_dispatch_(\d+)_(\d+):", line):
            current = (str(int(match.group(1))), int(match.group(2)))
            functions[current] = []
            continue
        if current is None:
            continue
        stripped = line.strip()
        if not stripped or stripped.startswith(".") or stripped.endswith(":"):
            continue
        op = stripped.split(None, 1)[0]
        if op in {"endbr64", "ret"}:
            if op == "ret":
                current = None
            continue
        functions[current].append(stripped)
    return functions


def translate_function(instructions: list[str]) -> str:
    regs: dict[str, str] = {}
    pointer_regs: set[str] = {"rdi"}
    for instruction in instructions:
        op, rest = instruction.split(None, 1)
        operands = split_operands(rest)
        if op == "mov":
            dest, src = operands
            dest_reg = norm_reg(dest)
            src_reg = norm_reg(src)
            if src_reg in pointer_regs:
                pointer_regs.add(dest_reg)
                regs.pop(dest_reg, None)
            else:
                value = parse_atom(src, regs, pointer_regs)
                pointer_regs.discard(dest_reg)
                regs[dest_reg] = mask_expr(value, source_width(dest))
        elif op == "movzx":
            dest, src = operands
            dest_reg = norm_reg(dest)
            pointer_regs.discard(dest_reg)
            regs[dest_reg] = mask_expr(parse_atom(src, regs, pointer_regs), source_width(src))
        elif op == "lea":
            dest, src = operands
            dest_reg = norm_reg(dest)
            pointer_regs.discard(dest_reg)
            regs[dest_reg] = mask_expr(parse_lea(src, regs, pointer_regs), source_width(dest))
        elif op in {"add", "sub", "xor", "or", "and"}:
            dest, src = operands
            dest_reg = norm_reg(dest)
            if dest_reg not in regs:
                raise ValueError(f"{op} before register init: {dest}")
            symbol = {"add": "+", "sub": "-", "xor": "^", "or": "|", "and": "&"}[op]
            pointer_regs.discard(dest_reg)
            regs[dest_reg] = mask_expr(bin_expr(regs[dest_reg], symbol, parse_atom(src, regs, pointer_regs)), source_width(dest))
        elif op in {"sal", "shl", "shr"}:
            dest, src = operands
            dest_reg = norm_reg(dest)
            if dest_reg not in regs:
                raise ValueError(f"{op} before register init: {dest}")
            symbol = "<<" if op in {"sal", "shl"} else ">>"
            pointer_regs.discard(dest_reg)
            regs[dest_reg] = mask_expr(bin_expr(regs[dest_reg], symbol, parse_atom(src, regs, pointer_regs)), source_width(dest))
        elif op == "imul":
            if len(operands) == 2:
                dest, src = operands
                dest_reg = norm_reg(dest)
                if dest_reg not in regs:
                    raise ValueError(f"imul before register init: {dest}")
                regs[dest_reg] = mask_expr(bin_expr(regs[dest_reg], "*", parse_atom(src, regs, pointer_regs)), source_width(dest))
            elif len(operands) == 3:
                dest, src, imm = operands
                dest_reg = norm_reg(dest)
                pointer_regs.discard(dest_reg)
                regs[dest_reg] = mask_expr(
                    bin_expr(parse_atom(src, regs, pointer_regs), "*", parse_atom(imm, regs, pointer_regs)),
                    source_width(dest),
                )
            else:
                raise ValueError(f"unsupported imul form: {instruction}")
        elif op == "not":
            (dest,) = operands
            dest_reg = norm_reg(dest)
            pointer_regs.discard(dest_reg)
            regs[dest_reg] = mask_expr(f"~{parenthesize(regs[dest_reg])}", source_width(dest))
        elif op == "neg":
            (dest,) = operands
            dest_reg = norm_reg(dest)
            pointer_regs.discard(dest_reg)
            regs[dest_reg] = mask_expr(bin_expr("0x0u", "-", regs[dest_reg]), source_width(dest))
        else:
            raise ValueError(f"unsupported instruction: {instruction}")
    if "rax" not in regs:
        raise ValueError("no eax/rax return expression")
    return regs["rax"]


def emit_harness(path: Path, expressions: list[dict[str, object]]) -> None:
    lines = [
        "#include <stdint.h>",
        "",
        "typedef struct VMBAInputs {",
    ]
    for field in FIELDS:
        lines.append(f"    uint32_t {field};")
    lines.extend(
        [
            "} VMBAInputs;",
            "",
            "static inline uint32_t mask32(uint32_t value) { return value; }",
            "",
        ]
    )
    for item in expressions:
        source = int(str(item["source_entry"]))
        variant = int(str(item["variant_index"]))
        expr = c_expr(str(item["original_expr"]))
        lines.append(f"uint32_t vm_mba_eval_dispatch_{source:03d}_{variant:02d}(const VMBAInputs *in) {{")
        for field in FIELDS:
            lines.append(f"    const uint32_t {field} = in->{field};")
        lines.append(f"    return (uint32_t)({expr});")
        lines.append("}")
        lines.append("")
    path.write_text("\n".join(lines))


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--timeout", type=int, default=20)
    args = parser.parse_args()
    root = args.root

    transfer_path = root / "vm_static_transfer_expr_full_python.tsv"
    isa_path = root / "vm_readable_isa_state_reduced.tsv"
    if not transfer_path.exists():
        raise SystemExit(f"missing input: {transfer_path}; run full transfer-expression extraction first")
    if not isa_path.exists():
        raise SystemExit(f"missing input: {isa_path}")
    z3_bin = shutil.which("z3")
    if not z3_bin:
        raise SystemExit("missing z3 binary")

    transfer = {row["source_entry"]: row for row in read_tsv(transfer_path)}
    isa_rows = read_tsv(isa_path)
    algebraic_entries = [
        row
        for row in isa_rows
        if row.get("dispatch_slot_kind") in {"slot_multi_path", "slot_mba_stateful"}
    ]

    expressions: list[dict[str, object]] = []
    for row in algebraic_entries:
        source = row["source_entry"]
        transfer_row = transfer.get(source, {})
        for variant_index, (observed_count, expr) in enumerate(split_slot_exprs(transfer_row.get("top_slot_exprs", ""))):
            expressions.append(
                {
                    "source_entry": source,
                    "opcode_name": row.get("opcode_name", ""),
                    "dispatch_slot_kind": row.get("dispatch_slot_kind", ""),
                    "variant_index": variant_index,
                    "observed_expr_count": observed_count,
                    "original_expr": expr,
                    "target_coverage_pct": transfer_row.get("target_coverage_pct", ""),
                    "target_mismatched_events": transfer_row.get("target_mismatched_events", ""),
                    "events": transfer_row.get("events", ""),
                    "unique_slot_exprs": transfer_row.get("unique_slot_exprs", ""),
                }
            )

    harness_path = root / "vm_mba_dispatch_formula_compiler_reducer_harness.c"
    asm_path = root / "vm_mba_dispatch_formula_compiler_reducer.s"
    emit_harness(harness_path, expressions)
    ok, detail = compile_assembly(harness_path, asm_path)
    if not ok:
        raise SystemExit(f"failed to compile dispatch harness: {detail}")
    functions = parse_functions(asm_path)

    smt_dir = root / "vm_mba_dispatch_formula_compiler_proofs"
    smt_dir.mkdir(parents=True, exist_ok=True)
    for old in smt_dir.glob("dispatch_*.smt2"):
        old.unlink()

    rows: list[dict[str, object]] = []
    for item in expressions:
        source = str(item["source_entry"])
        variant = int(str(item["variant_index"]))
        original = str(item["original_expr"])
        candidate = ""
        reduction_status = "not_attempted"
        proof_status = ""
        solver_excerpt = ""
        smt_path = smt_dir / f"dispatch_{int(source):03d}_{variant:02d}.smt2"
        try:
            candidate = translate_function(functions[(str(parse_int(source)), variant)])
            reduction_status = "compiler_expression_recovered"
            query, vars_ = make_query(original, candidate)
            smt_path.write_text(query)
            proof_status, solver_excerpt = prove_with_z3(z3_bin, smt_path, args.timeout)
            variables = ";".join(sorted(vars_))
        except Exception as exc:
            reduction_status = "translator_or_proof_error"
            proof_status = "not_proved"
            solver_excerpt = str(exc)
            variables = ""
        target_status = (
            "target_binding_validated"
            if str(item.get("target_coverage_pct", "")) == "100.0" and str(item.get("target_mismatched_events", "")) == "0"
            else "target_binding_not_validated"
        )
        rows.append(
            {
                "source_entry": source,
                "opcode_name": item.get("opcode_name", ""),
                "dispatch_slot_kind": item.get("dispatch_slot_kind", ""),
                "variant_index": variant,
                "observed_expr_count": item.get("observed_expr_count", ""),
                "entry_events": item.get("events", ""),
                "unique_slot_exprs": item.get("unique_slot_exprs", ""),
                "target_coverage_pct": item.get("target_coverage_pct", ""),
                "target_mismatched_events": item.get("target_mismatched_events", ""),
                "target_binding_status": target_status,
                "reduction_status": reduction_status,
                "proof_status": proof_status,
                "original_chars": len(original),
                "candidate_chars": len(candidate),
                "candidate_c": candidate,
                "original_expr": original,
                "variables": variables,
                "smt2": str(smt_path) if smt_path.exists() else "",
                "solver_output_excerpt": solver_excerpt[:1000].replace("\n", "\\n"),
            }
        )

    by_entry: dict[str, list[dict[str, object]]] = {}
    for row in rows:
        by_entry.setdefault(str(row["source_entry"]), []).append(row)

    summary_rows: list[dict[str, object]] = []
    for source, entry_rows in sorted(by_entry.items(), key=lambda item: parse_int(item[0])):
        proved = [row for row in entry_rows if row["proof_status"] == "proved_equivalent"]
        target_statuses = Counter(str(row["target_binding_status"]) for row in entry_rows)
        summary_rows.append(
            {
                "source_entry": source,
                "opcode_name": entry_rows[0]["opcode_name"],
                "dispatch_slot_kind": entry_rows[0]["dispatch_slot_kind"],
                "variant_count": len(entry_rows),
                "proved_variants": len(proved),
                "proof_status_mix": ";".join(f"{key}:{value}" for key, value in Counter(str(row["proof_status"]) for row in entry_rows).most_common()),
                "target_binding_mix": ";".join(f"{key}:{value}" for key, value in target_statuses.most_common()),
                "target_coverage_pct": entry_rows[0]["target_coverage_pct"],
                "target_mismatched_events": entry_rows[0]["target_mismatched_events"],
                "reduced_dispatch_preview": " ; ".join(
                    f"{row['observed_expr_count']}={row['candidate_c']}" for row in entry_rows if row["proof_status"] == "proved_equivalent"
                ),
            }
        )

    out_path = root / "vm_mba_dispatch_formula_compiler_reductions.tsv"
    summary_path = root / "vm_mba_dispatch_formula_compiler_reductions_by_entry.tsv"
    md_path = root / "vm_mba_dispatch_formula_compiler_reductions.md"
    write_tsv(
        out_path,
        rows,
        [
            "source_entry",
            "opcode_name",
            "dispatch_slot_kind",
            "variant_index",
            "observed_expr_count",
            "entry_events",
            "unique_slot_exprs",
            "target_coverage_pct",
            "target_mismatched_events",
            "target_binding_status",
            "reduction_status",
            "proof_status",
            "original_chars",
            "candidate_chars",
            "candidate_c",
            "original_expr",
            "variables",
            "smt2",
            "solver_output_excerpt",
        ],
    )
    write_tsv(
        summary_path,
        summary_rows,
        [
            "source_entry",
            "opcode_name",
            "dispatch_slot_kind",
            "variant_count",
            "proved_variants",
            "proof_status_mix",
            "target_binding_mix",
            "target_coverage_pct",
            "target_mismatched_events",
            "reduced_dispatch_preview",
        ],
    )

    proof_counts = Counter(str(row["proof_status"]) for row in rows)
    reduction_counts = Counter(str(row["reduction_status"]) for row in rows)
    target_counts = Counter(str(row["target_binding_status"]) for row in rows)
    shorter = sum(
        1
        for row in rows
        if row["proof_status"] == "proved_equivalent" and int(row["candidate_chars"]) < int(row["original_chars"])
    )
    md_path.write_text(
        "\n".join(
            [
                "# MBA Dispatch Formula Compiler Reductions",
                "",
                "This pass uses the full, unclipped Python transfer-expression extraction, translates GCC -O3 assembly for each dispatch slot expression back into C-like arithmetic, and proves equivalence with Z3. The proof covers the slot expression only. The `observed_expr_count` prefix is the number of observed rows using that expression, not a target entry.",
                "",
                "## Summary",
                "",
                markdown_table(
                    ["metric", "value"],
                    [
                        ["algebraic dispatch entries", len(algebraic_entries)],
                        ["dispatch expression variants", len(rows)],
                        ["reduction statuses", "; ".join(f"{key}:{value}" for key, value in sorted(reduction_counts.items()))],
                        ["proof statuses", "; ".join(f"{key}:{value}" for key, value in sorted(proof_counts.items()))],
                        ["proved and shorter", shorter],
                        ["target binding statuses", "; ".join(f"{key}:{value}" for key, value in sorted(target_counts.items()))],
                        ["full transfer input", transfer_path],
                        ["harness", harness_path],
                        ["assembly", asm_path],
                        ["proof dir", smt_dir],
                    ],
                ),
                "",
                "## Entry Summary",
                "",
                markdown_table(
                    ["entry", "kind", "variants", "proofs", "target binding", "preview"],
                    [
                        [
                            row["source_entry"],
                            row["dispatch_slot_kind"],
                            row["variant_count"],
                            row["proof_status_mix"],
                            row["target_binding_mix"],
                            row["reduced_dispatch_preview"],
                        ]
                        for row in summary_rows[:80]
                    ],
                ),
                "",
                "## Caveat",
                "",
                "`proved_equivalent` proves only that the reduced slot expression matches the original slot expression under byte/u16 range constraints. Rows with `target_binding_not_validated` still need dispatch-table/second-stage target binding work. Slot-unknown opcodes are not solved by this pass.",
            ]
        )
        + "\n"
    )
    print(f"dispatch_expression_variants={len(rows)}")
    print("proof_status_counts=" + ";".join(f"{key}:{value}" for key, value in sorted(proof_counts.items())))
    print("target_binding_counts=" + ";".join(f"{key}:{value}" for key, value in sorted(target_counts.items())))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
