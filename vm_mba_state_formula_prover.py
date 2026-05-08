#!/usr/bin/env python3
"""Prove MBA state formula candidates with Z3 SMT-LIB bit-vector queries."""

from __future__ import annotations

import argparse
import csv
import re
import shutil
import subprocess
from pathlib import Path


TOKEN_RE = re.compile(r"\s*(0x[0-9a-fA-F]+[uUlL]*|\d+[uUlL]*|[A-Za-z_][A-Za-z0-9_]*|<<|>>|[()+\-*~&^|,])")
VAR_RE = re.compile(r"\b(?:state0|flags0|u32_[0-9]+|u16_[0-9]+|b[0-9]+)\b")


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


def c_string(text: str) -> str:
    return '"' + (text or "").replace("\\", "\\\\").replace('"', '\\"') + '"'


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        cells = [str(cell).replace("|", "\\|").replace("\n", " ") for cell in row]
        lines.append("| " + " | ".join(cell if len(cell) <= 140 else cell[:137] + "..." for cell in cells) + " |")
    return "\n".join(lines)


class Parser:
    def __init__(self, text: str):
        self.tokens = self.lex(text)
        self.index = 0

    @staticmethod
    def lex(text: str) -> list[str]:
        tokens: list[str] = []
        pos = 0
        while pos < len(text):
            match = TOKEN_RE.match(text, pos)
            if not match:
                raise ValueError(f"unexpected token at {pos}: {text[pos:pos + 40]!r}")
            tokens.append(match.group(1))
            pos = match.end()
        tokens.append("<EOF>")
        return tokens

    def peek(self) -> str:
        return self.tokens[self.index]

    def take(self, expected: str | None = None) -> str:
        token = self.peek()
        if expected is not None and token != expected:
            raise ValueError(f"expected {expected!r}, got {token!r}")
        self.index += 1
        return token

    def parse(self):
        expr = self.parse_or()
        if self.peek() != "<EOF>":
            raise ValueError(f"trailing token {self.peek()!r}")
        return expr

    def parse_or(self):
        node = self.parse_xor()
        while self.peek() == "|":
            op = self.take()
            node = ("bin", op, node, self.parse_xor())
        return node

    def parse_xor(self):
        node = self.parse_and()
        while self.peek() == "^":
            op = self.take()
            node = ("bin", op, node, self.parse_and())
        return node

    def parse_and(self):
        node = self.parse_shift()
        while self.peek() == "&":
            op = self.take()
            node = ("bin", op, node, self.parse_shift())
        return node

    def parse_shift(self):
        node = self.parse_add()
        while self.peek() in ("<<", ">>"):
            op = self.take()
            node = ("bin", op, node, self.parse_add())
        return node

    def parse_add(self):
        node = self.parse_mul()
        while self.peek() in ("+", "-"):
            op = self.take()
            node = ("bin", op, node, self.parse_mul())
        return node

    def parse_mul(self):
        node = self.parse_unary()
        while self.peek() == "*":
            op = self.take()
            node = ("bin", op, node, self.parse_unary())
        return node

    def parse_unary(self):
        if self.peek() in ("+", "-", "~"):
            op = self.take()
            return ("unary", op, self.parse_unary())
        return self.parse_primary()

    def parse_primary(self):
        token = self.peek()
        if token == "(":
            self.take("(")
            node = self.parse_or()
            self.take(")")
            return node
        if re.match(r"0x[0-9a-fA-F]+[uUlL]*$|\d+[uUlL]*$", token):
            self.take()
            clean = re.sub(r"[uUlL]+$", "", token)
            return ("num", int(clean, 16 if clean.startswith("0x") else 10) & 0xFFFFFFFF)
        if re.match(r"[A-Za-z_][A-Za-z0-9_]*$", token):
            name = self.take()
            if self.peek() == "(":
                self.take("(")
                args = []
                if self.peek() != ")":
                    args.append(self.parse_or())
                    while self.peek() == ",":
                        self.take(",")
                        args.append(self.parse_or())
                self.take(")")
                return ("call", name, args)
            return ("var", name)
        raise ValueError(f"unexpected token {token!r}")


def ast_vars(node) -> set[str]:
    kind = node[0]
    if kind == "var":
        return {node[1]}
    if kind == "num":
        return set()
    if kind == "unary":
        return ast_vars(node[2])
    if kind == "bin":
        return ast_vars(node[2]) | ast_vars(node[3])
    if kind == "call":
        out: set[str] = set()
        for arg in node[2]:
            out.update(ast_vars(arg))
        return out
    raise ValueError(f"bad ast kind {kind}")


def bv(value: int) -> str:
    return f"#x{value & 0xFFFFFFFF:08x}"


def to_smt(node) -> str:
    kind = node[0]
    if kind == "num":
        return bv(node[1])
    if kind == "var":
        name = node[1]
        if not VAR_RE.fullmatch(name):
            raise ValueError(f"unknown variable {name}")
        return name
    if kind == "unary":
        op, child = node[1], node[2]
        expr = to_smt(child)
        if op == "+":
            return expr
        if op == "-":
            return f"(bvneg {expr})"
        if op == "~":
            return f"(bvnot {expr})"
    if kind == "bin":
        op, left, right = node[1], to_smt(node[2]), to_smt(node[3])
        mapping = {
            "+": "bvadd",
            "-": "bvsub",
            "*": "bvmul",
            "&": "bvand",
            "^": "bvxor",
            "|": "bvor",
            "<<": "bvshl",
            ">>": "bvlshr",
        }
        if op not in mapping:
            raise ValueError(f"unsupported operator {op}")
        return f"({mapping[op]} {left} {right})"
    if kind == "call":
        name, args = node[1], node[2]
        if name == "mask32" and len(args) == 1:
            return to_smt(args[0])
        raise ValueError(f"unsupported call {name}/{len(args)}")
    raise ValueError(f"bad ast kind {kind}")


def var_constraint(name: str) -> str:
    if name.startswith("b"):
        return f"(assert (= ((_ extract 31 8) {name}) #x000000))"
    if name.startswith("u16_"):
        return f"(assert (= ((_ extract 31 16) {name}) #x0000))"
    return ""


def make_query(original: str, candidate: str) -> tuple[str, set[str]]:
    original_ast = Parser(original).parse()
    candidate_ast = Parser(candidate).parse()
    vars_ = ast_vars(original_ast) | ast_vars(candidate_ast)
    original_smt = to_smt(original_ast)
    candidate_smt = to_smt(candidate_ast)
    lines = [
        "(set-logic QF_BV)",
        "(set-option :produce-models true)",
    ]
    for name in sorted(vars_):
        lines.append(f"(declare-fun {name} () (_ BitVec 32))")
    for name in sorted(vars_):
        constraint = var_constraint(name)
        if constraint:
            lines.append(constraint)
    lines.extend(
        [
            f"(assert (not (= {original_smt} {candidate_smt})))",
            "(check-sat)",
            "(get-model)",
        ]
    )
    return "\n".join(lines) + "\n", vars_


def prove_with_z3(z3_bin: str, smt_path: Path, timeout: int) -> tuple[str, str]:
    result = subprocess.run(
        [z3_bin, f"-T:{timeout}", "-smt2", str(smt_path)],
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        check=False,
    )
    output = (result.stdout + result.stderr).strip()
    first = output.splitlines()[0].strip() if output else ""
    if result.returncode not in (0, 1):
        return "solver_error", output
    if first == "unsat":
        return "proved_equivalent", output
    if first == "sat":
        return "candidate_refuted", output
    if first == "unknown":
        return "solver_unknown", output
    return "solver_unparsed", output


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--timeout", type=int, default=5)
    args = parser.parse_args()
    root = args.root

    reductions_path = root / "vm_mba_state_formula_reductions.tsv"
    if not reductions_path.exists():
        raise SystemExit(f"missing input: {reductions_path}")
    z3_bin = shutil.which("z3")
    if not z3_bin:
        raise SystemExit("missing z3 binary")

    proof_dir = root / "vm_mba_state_formula_proofs"
    proof_dir.mkdir(parents=True, exist_ok=True)
    for old in proof_dir.glob("state_*.smt2"):
        old.unlink()

    proof_rows: list[dict[str, object]] = []
    candidates = [row for row in read_tsv(reductions_path) if row.get("status") == "candidate_simplified"]
    for row in candidates:
        source = row["source_entry"]
        smt_path = proof_dir / f"state_{int(source):03d}.smt2"
        try:
            query, vars_ = make_query(row["original_state_formula"], row["candidate_c"])
            smt_path.write_text(query)
            proof_status, solver_output = prove_with_z3(z3_bin, smt_path, args.timeout)
        except Exception as exc:
            vars_ = set()
            proof_status, solver_output = "parse_or_emit_error", str(exc)
        proof_rows.append(
            {
                "source_entry": source,
                "opcode_name": row.get("opcode_name", ""),
                "template": row.get("template", ""),
                "candidate_c": row.get("candidate_c", ""),
                "proof_status": proof_status,
                "variables": ";".join(sorted(vars_)),
                "solver": z3_bin,
                "smt2": str(smt_path),
                "solver_output_excerpt": solver_output[:1000].replace("\n", "\\n"),
            }
        )

    proofs_path = root / "vm_mba_state_formula_proofs.tsv"
    md_path = root / "vm_mba_state_formula_proofs.md"
    fields = [
        "source_entry",
        "opcode_name",
        "template",
        "candidate_c",
        "proof_status",
        "variables",
        "solver",
        "smt2",
        "solver_output_excerpt",
    ]
    write_tsv(proofs_path, proof_rows, fields)
    counts: dict[str, int] = {}
    for row in proof_rows:
        counts[row["proof_status"]] = counts.get(row["proof_status"], 0) + 1
    md_path.write_text(
        "\n".join(
            [
                "# MBA State Formula Proofs",
                "",
                "This pass translates candidate state formula reductions into SMT-LIB QF_BV queries and asks Z3 whether the original formula and candidate can differ under byte/u16 range constraints.",
                "",
                "## Summary",
                "",
                markdown_table(
                    ["metric", "value"],
                    [
                        ["candidate reductions", len(candidates)],
                        ["proof rows", len(proof_rows)],
                        ["status counts", "; ".join(f"{key}:{value}" for key, value in sorted(counts.items()))],
                        ["proof dir", proof_dir],
                    ],
                ),
                "",
                "## Proof Rows",
                "",
                markdown_table(
                    ["source", "status", "template", "candidate"],
                    [[row["source_entry"], row["proof_status"], row["template"], row["candidate_c"]] for row in proof_rows],
                ),
                "",
                "## Caveat",
                "",
                "`proved_equivalent` means Z3 returned `unsat` for a disequality query over 32-bit bit-vectors with byte/u16 zero-extension constraints. It proves the candidate state expression equivalent to the original expression, not the dispatch formula.",
            ]
        )
        + "\n"
    )
    print(f"mba_state_formula_candidate_proofs={len(proof_rows)}")
    print("proof_status_counts=" + ";".join(f"{key}:{value}" for key, value in sorted(counts.items())))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
