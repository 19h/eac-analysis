#!/usr/bin/env python3
"""Recover compiler-simplified MBA state expressions and prove them with Z3."""

from __future__ import annotations

import argparse
import csv
import re
import shutil
import subprocess
from pathlib import Path

from vm_mba_state_formula_prover import make_query, prove_with_z3


FIELDS = ["state0", "flags0"] + [f"b{i}" for i in range(16)] + [f"u16_{i}" for i in range(16)] + [f"u32_{i}" for i in range(16)]
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
    "edi": "rdi",
    "ebx": "rbx",
    "esp": "rsp",
    "ebp": "rbp",
}


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


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        cells = [str(cell).replace("|", "\\|").replace("\n", " ") for cell in row]
        lines.append("| " + " | ".join(cell if len(cell) <= 140 else cell[:137] + "..." for cell in cells) + " |")
    return "\n".join(lines)


def parse_int(text: str | None) -> int:
    value = (text or "").strip()
    if not value:
        return 0
    try:
        return int(value, 16 if value.startswith("0x") else 10)
    except ValueError:
        return 0


def hex_u32(value: int) -> str:
    return f"0x{value & 0xFFFFFFFF:x}u"


def norm_reg(reg: str) -> str:
    reg = reg.strip()
    if re.fullmatch(r"r(?:8|9|10|11|12|13|14|15)d?", reg):
        return reg[:-1] if reg.endswith("d") else reg
    return REG_ALIASES.get(reg, reg)


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


def parenthesize(expr: str) -> str:
    if re.fullmatch(r"[A-Za-z_][A-Za-z0-9_]*|0x[0-9a-f]+u?", expr):
        return expr
    return f"({expr})"


def bin_expr(left: str, op: str, right: str) -> str:
    return f"{parenthesize(left)} {op} {parenthesize(right)}"


def mem_to_var(operand: str, pointer_regs: set[str]) -> str | None:
    match = re.fullmatch(r"DWORD PTR (?:([+-]?\d+))?\[([A-Za-z0-9]+)\]", operand)
    if not match:
        return None
    base = norm_reg(match.group(2))
    if base not in pointer_regs:
        return None
    offset = int(match.group(1) or "0")
    return OFFSET_TO_FIELD.get(offset)


def parse_atom(atom: str, regs: dict[str, str], pointer_regs: set[str]) -> str:
    atom = atom.strip()
    mem = mem_to_var(atom, pointer_regs)
    if mem:
        return mem
    if re.fullmatch(r"-?\d+", atom):
        return hex_u32(int(atom))
    if re.fullmatch(r"0x[0-9a-fA-F]+", atom):
        return hex_u32(int(atom, 16))
    reg = norm_reg(atom)
    if reg in regs:
        return regs[reg]
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


def parse_functions(asm_path: Path) -> dict[str, list[str]]:
    functions: dict[str, list[str]] = {}
    current: str | None = None
    for line in asm_path.read_text().splitlines():
        if match := re.match(r"vm_mba_eval_state_(\d+):", line):
            current = str(int(match.group(1)))
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
                regs[dest_reg] = value
        elif op == "lea":
            dest, src = operands
            dest_reg = norm_reg(dest)
            pointer_regs.discard(dest_reg)
            regs[dest_reg] = parse_lea(src, regs, pointer_regs)
        elif op in {"add", "sub", "xor", "or", "and"}:
            dest, src = operands
            dest_reg = norm_reg(dest)
            if dest_reg not in regs:
                raise ValueError(f"{op} before register init: {dest}")
            symbol = {"add": "+", "sub": "-", "xor": "^", "or": "|", "and": "&"}[op]
            pointer_regs.discard(dest_reg)
            regs[dest_reg] = bin_expr(regs[dest_reg], symbol, parse_atom(src, regs, pointer_regs))
        elif op in {"sal", "shl", "shr"}:
            dest, src = operands
            dest_reg = norm_reg(dest)
            if dest_reg not in regs:
                raise ValueError(f"{op} before register init: {dest}")
            symbol = "<<" if op in {"sal", "shl"} else ">>"
            pointer_regs.discard(dest_reg)
            regs[dest_reg] = bin_expr(regs[dest_reg], symbol, parse_atom(src, regs, pointer_regs))
        elif op == "not":
            (dest,) = operands
            dest_reg = norm_reg(dest)
            pointer_regs.discard(dest_reg)
            regs[dest_reg] = f"~{parenthesize(regs[dest_reg])}"
        elif op == "neg":
            (dest,) = operands
            dest_reg = norm_reg(dest)
            pointer_regs.discard(dest_reg)
            regs[dest_reg] = bin_expr("0x0u", "-", regs[dest_reg])
        else:
            raise ValueError(f"unsupported instruction: {instruction}")
    if "rax" not in regs:
        raise ValueError("no eax/rax return expression")
    return regs["rax"]


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--timeout", type=int, default=20)
    args = parser.parse_args()
    root = args.root

    inventory_path = root / "vm_mba_problem_inventory.tsv"
    harness_path = root / "vm_mba_state_formula_reducer_harness.c"
    if not inventory_path.exists() or not harness_path.exists():
        raise SystemExit("missing inventory or reducer harness; run mba-state-formula-reducer first")
    z3_bin = shutil.which("z3")
    if not z3_bin:
        raise SystemExit("missing z3 binary")

    asm_path = root / "vm_mba_state_formula_compiler_reducer.s"
    ok, detail = compile_assembly(harness_path, asm_path)
    if not ok:
        raise SystemExit(f"failed to compile assembly: {detail}")
    functions = parse_functions(asm_path)

    smt_dir = root / "vm_mba_state_formula_compiler_proofs"
    smt_dir.mkdir(parents=True, exist_ok=True)
    for old in smt_dir.glob("state_*.smt2"):
        old.unlink()

    rows: list[dict[str, object]] = []
    for row in read_tsv(inventory_path):
        source = str(parse_int(row["source_entry"]))
        original = row.get("state_formula", "")
        candidate = ""
        reduction_status = "not_attempted"
        proof_status = ""
        solver_excerpt = ""
        smt_path = smt_dir / f"state_{int(source):03d}.smt2"
        try:
            candidate = translate_function(functions[source])
            reduction_status = "compiler_expression_recovered"
            query, _vars = make_query(original, candidate)
            smt_path.write_text(query)
            proof_status, solver_excerpt = prove_with_z3(z3_bin, smt_path, args.timeout)
        except Exception as exc:
            reduction_status = "translator_or_proof_error"
            proof_status = "not_proved"
            solver_excerpt = str(exc)
        rows.append(
            {
                "source_entry": source,
                "opcode_name": row.get("opcode_name", ""),
                "reduction_status": reduction_status,
                "proof_status": proof_status,
                "original_chars": len(original),
                "candidate_chars": len(candidate),
                "candidate_c": candidate,
                "smt2": str(smt_path) if smt_path.exists() else "",
                "solver_output_excerpt": solver_excerpt[:1000].replace("\n", "\\n"),
            }
        )

    out_path = root / "vm_mba_state_formula_compiler_reductions.tsv"
    md_path = root / "vm_mba_state_formula_compiler_reductions.md"
    fields = [
        "source_entry",
        "opcode_name",
        "reduction_status",
        "proof_status",
        "original_chars",
        "candidate_chars",
        "candidate_c",
        "smt2",
        "solver_output_excerpt",
    ]
    write_tsv(out_path, rows, fields)
    status_counts: dict[str, int] = {}
    proof_counts: dict[str, int] = {}
    shorter = 0
    for row in rows:
        status_counts[row["reduction_status"]] = status_counts.get(row["reduction_status"], 0) + 1
        proof_counts[row["proof_status"]] = proof_counts.get(row["proof_status"], 0) + 1
        if row["proof_status"] == "proved_equivalent" and int(row["candidate_chars"]) < int(row["original_chars"]):
            shorter += 1
    md_path.write_text(
        "\n".join(
            [
                "# MBA State Formula Compiler Reductions",
                "",
                "This pass translates GCC -O3 straight-line assembly for each original MBA state formula back into a C-like expression and proves that expression equivalent to the original with Z3.",
                "",
                "## Summary",
                "",
                markdown_table(
                    ["metric", "value"],
                    [
                        ["source entries", len(rows)],
                        ["reduction statuses", "; ".join(f"{key}:{value}" for key, value in sorted(status_counts.items()))],
                        ["proof statuses", "; ".join(f"{key}:{value}" for key, value in sorted(proof_counts.items()))],
                        ["proved and shorter", shorter],
                        ["assembly", asm_path],
                        ["proof dir", smt_dir],
                    ],
                ),
                "",
                "## Examples",
                "",
                markdown_table(
                    ["source", "proof", "chars", "candidate"],
                    [
                        [row["source_entry"], row["proof_status"], f"{row['original_chars']} -> {row['candidate_chars']}", row["candidate_c"]]
                        for row in rows[:80]
                    ],
                ),
                "",
                "## Caveat",
                "",
                "`proved_equivalent` proves the compiler-recovered state expression equivalent to the original state expression. It does not prove dispatch expressions or full program intent.",
            ]
        )
        + "\n"
    )
    print(f"compiler_reduction_rows={len(rows)}")
    print("proof_status_counts=" + ";".join(f"{key}:{value}" for key, value in sorted(proof_counts.items())))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
