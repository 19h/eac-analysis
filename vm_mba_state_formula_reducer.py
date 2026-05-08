#!/usr/bin/env python3
"""Generate and test compact candidates for VM MBA state formulas."""

from __future__ import annotations

import argparse
import csv
import ctypes
import random
import re
import shutil
import subprocess
from itertools import combinations
from pathlib import Path


BYTE_COLUMNS = [f"b{index}" for index in range(16)]
WORD_COLUMNS = [f"u16_{offset}" for offset in range(16)]
DWORD_COLUMNS = [f"u32_{offset}" for offset in range(16)]
ALL_VARS = ["state0", "flags0", *BYTE_COLUMNS, *WORD_COLUMNS, *DWORD_COLUMNS]
VAR_RE = re.compile(r"\b(?:state0|flags0|u32_[0-9]+|u16_[0-9]+|b[0-9]+)\b")
MASK32 = 0xFFFFFFFF


class VMBAInputs(ctypes.Structure):
    _fields_ = [(name, ctypes.c_uint32) for name in ALL_VARS]


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


def variables(text: str) -> list[str]:
    return sorted(set(VAR_RE.findall(text or "")), key=lambda value: (not value.startswith("state"), value))


def c_string(text: str) -> str:
    return '"' + (text or "").replace("\\", "\\\\").replace('"', '\\"') + '"'


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        cells = [str(cell).replace("|", "\\|").replace("\n", " ") for cell in row]
        lines.append("| " + " | ".join(cell if len(cell) <= 140 else cell[:137] + "..." for cell in cells) + " |")
    return "\n".join(lines)


def emit_harness(path: Path, rows: list[dict[str, str]]) -> None:
    lines = [
        "/* Auto-generated MBA state formula evaluator harness. */",
        "#include <stdint.h>",
        "",
        "typedef struct VMBAInputs {",
    ]
    for name in ALL_VARS:
        lines.append(f"    uint32_t {name};")
    lines.extend(
        [
            "} VMBAInputs;",
            "",
            "static inline uint32_t mask32(uint64_t x) { return (uint32_t)x; }",
            "",
        ]
    )
    for row in rows:
        source = parse_int(row["source_entry"])
        formula = row.get("state_formula", "") or "state0"
        lines.append(f"uint32_t vm_mba_eval_state_{source}(const VMBAInputs *in) {{")
        for name in ALL_VARS:
            lines.append(f"    const uint32_t {name} = in->{name};")
        lines.append(f"    return (uint32_t)({formula});")
        lines.append("}")
        lines.append("")
    path.write_text("\n".join(lines))


def compile_harness(c_path: Path, so_path: Path) -> tuple[bool, str]:
    compiler = shutil.which("gcc") or shutil.which("clang")
    if not compiler:
        return False, "no C compiler found"
    result = subprocess.run(
        [compiler, "-std=c11", "-O2", "-fPIC", "-shared", "-w", str(c_path), "-o", str(so_path)],
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE,
        check=False,
    )
    return result.returncode == 0, (result.stderr or result.stdout).strip()


def make_samples(count: int) -> list[VMBAInputs]:
    rng = random.Random(0xEAC51A7E)
    seeds = [0, 1, 2, 3, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF, 0xAAAAAAAA, 0x55555555, 0x12345678, 0x87654321]
    samples: list[VMBAInputs] = []
    for seed in seeds:
        item = VMBAInputs()
        item.state0 = seed & MASK32
        item.flags0 = (~seed) & MASK32
        for index, name in enumerate(BYTE_COLUMNS):
            setattr(item, name, (seed >> ((index % 4) * 8)) & 0xFF)
        for index, name in enumerate(WORD_COLUMNS):
            setattr(item, name, (seed + index * 0x1111) & 0xFFFF)
        for index, name in enumerate(DWORD_COLUMNS):
            setattr(item, name, (seed + index * 0x11111111) & MASK32)
        samples.append(item)
    for _ in range(count):
        item = VMBAInputs()
        item.state0 = rng.getrandbits(32)
        item.flags0 = rng.getrandbits(32)
        for name in BYTE_COLUMNS:
            setattr(item, name, rng.getrandbits(8))
        for name in WORD_COLUMNS:
            setattr(item, name, rng.getrandbits(16))
        for name in DWORD_COLUMNS:
            setattr(item, name, rng.getrandbits(32))
        samples.append(item)
    return samples


def get_var(sample: VMBAInputs, name: str) -> int:
    return int(getattr(sample, name)) & MASK32


def hex_u32(value: int) -> str:
    return f"0x{value & MASK32:x}u"


def verify(outputs: list[int], samples: list[VMBAInputs], expr) -> bool:
    return all(((expr(sample) & MASK32) == output) for sample, output in zip(samples, outputs))


def synthesized_features(vars_: list[str]) -> list[tuple[str, str, object]]:
    features: list[tuple[str, str, object]] = []
    for var in vars_:
        features.append(("var", var, lambda sample, v=var: get_var(sample, v)))
    for left, right in combinations(vars_, 2):
        features.extend(
            [
                ("add2", f"{left} + {right}", lambda sample, a=left, b=right: get_var(sample, a) + get_var(sample, b)),
                ("sub2", f"{left} - {right}", lambda sample, a=left, b=right: get_var(sample, a) - get_var(sample, b)),
                ("rsub2", f"{right} - {left}", lambda sample, a=left, b=right: get_var(sample, b) - get_var(sample, a)),
                ("xor2", f"{left} ^ {right}", lambda sample, a=left, b=right: get_var(sample, a) ^ get_var(sample, b)),
                ("or2", f"{left} | {right}", lambda sample, a=left, b=right: get_var(sample, a) | get_var(sample, b)),
                ("and2", f"{left} & {right}", lambda sample, a=left, b=right: get_var(sample, a) & get_var(sample, b)),
            ]
        )
    for first, second, third in combinations(vars_, 3):
        features.extend(
            [
                (
                    "add3",
                    f"{first} + {second} + {third}",
                    lambda sample, a=first, b=second, c=third: get_var(sample, a) + get_var(sample, b) + get_var(sample, c),
                ),
                (
                    "xor3",
                    f"{first} ^ {second} ^ {third}",
                    lambda sample, a=first, b=second, c=third: get_var(sample, a) ^ get_var(sample, b) ^ get_var(sample, c),
                ),
                (
                    "or3",
                    f"{first} | {second} | {third}",
                    lambda sample, a=first, b=second, c=third: get_var(sample, a) | get_var(sample, b) | get_var(sample, c),
                ),
                (
                    "and3",
                    f"{first} & {second} & {third}",
                    lambda sample, a=first, b=second, c=third: get_var(sample, a) & get_var(sample, b) & get_var(sample, c),
                ),
                (
                    "xor_or3",
                    f"({first} | {second}) ^ {third}",
                    lambda sample, a=first, b=second, c=third: (get_var(sample, a) | get_var(sample, b)) ^ get_var(sample, c),
                ),
                (
                    "xor_and3",
                    f"({first} & {second}) ^ {third}",
                    lambda sample, a=first, b=second, c=third: (get_var(sample, a) & get_var(sample, b)) ^ get_var(sample, c),
                ),
            ]
        )
    return features


def candidate_templates(vars_: list[str], outputs: list[int], samples: list[VMBAInputs]) -> list[tuple[str, str, object]]:
    if not outputs:
        return []
    candidates: list[tuple[str, str, object]] = []
    first = samples[0]
    y0 = outputs[0]

    const = y0
    const_fn = lambda _sample, c=const: c
    if verify(outputs, samples, const_fn):
        candidates.append(("constant", hex_u32(const), const_fn))

    for var in vars_:
        x0 = get_var(first, var)
        tests = [
            ("identity", var, lambda sample, v=var: get_var(sample, v)),
            ("add_const", f"{var} + {hex_u32((y0 - x0) & MASK32)}", lambda sample, v=var, c=(y0 - x0) & MASK32: get_var(sample, v) + c),
            ("sub_const", f"{var} - {hex_u32((x0 - y0) & MASK32)}", lambda sample, v=var, c=(x0 - y0) & MASK32: get_var(sample, v) - c),
            ("const_sub", f"{hex_u32((y0 + x0) & MASK32)} - {var}", lambda sample, v=var, c=(y0 + x0) & MASK32: c - get_var(sample, v)),
            ("xor_const", f"{var} ^ {hex_u32(y0 ^ x0)}", lambda sample, v=var, c=y0 ^ x0: get_var(sample, v) ^ c),
        ]
        and_mask = 0
        for output in outputs:
            and_mask |= output
        tests.append(("and_mask", f"{var} & {hex_u32(and_mask)}", lambda sample, v=var, c=and_mask: get_var(sample, v) & c))
        or_mask = MASK32
        for output in outputs:
            or_mask &= output
        tests.append(("or_mask", f"{var} | {hex_u32(or_mask)}", lambda sample, v=var, c=or_mask: get_var(sample, v) | c))
        for name, c_expr, fn in tests:
            if verify(outputs, samples, fn):
                candidates.append((name, c_expr, fn))

    for left_index, left in enumerate(vars_):
        for right in vars_[left_index + 1 :]:
            a0 = get_var(first, left)
            b0 = get_var(first, right)
            tests = [
                (
                    "add2_const",
                    f"{left} + {right} + {hex_u32((y0 - a0 - b0) & MASK32)}",
                    lambda sample, a=left, b=right, c=(y0 - a0 - b0) & MASK32: get_var(sample, a) + get_var(sample, b) + c,
                ),
                (
                    "sub2_const",
                    f"{left} - {right} + {hex_u32((y0 - a0 + b0) & MASK32)}",
                    lambda sample, a=left, b=right, c=(y0 - a0 + b0) & MASK32: get_var(sample, a) - get_var(sample, b) + c,
                ),
                (
                    "rsub2_const",
                    f"{right} - {left} + {hex_u32((y0 - b0 + a0) & MASK32)}",
                    lambda sample, a=left, b=right, c=(y0 - b0 + a0) & MASK32: get_var(sample, b) - get_var(sample, a) + c,
                ),
                (
                    "xor2_const",
                    f"{left} ^ {right} ^ {hex_u32(y0 ^ a0 ^ b0)}",
                    lambda sample, a=left, b=right, c=y0 ^ a0 ^ b0: get_var(sample, a) ^ get_var(sample, b) ^ c,
                ),
                (
                    "or2_add_const",
                    f"({left} | {right}) + {hex_u32((y0 - (a0 | b0)) & MASK32)}",
                    lambda sample, a=left, b=right, c=(y0 - (a0 | b0)) & MASK32: (get_var(sample, a) | get_var(sample, b)) + c,
                ),
                (
                    "and2_add_const",
                    f"({left} & {right}) + {hex_u32((y0 - (a0 & b0)) & MASK32)}",
                    lambda sample, a=left, b=right, c=(y0 - (a0 & b0)) & MASK32: (get_var(sample, a) & get_var(sample, b)) + c,
                ),
            ]
            for name, c_expr, fn in tests:
                if verify(outputs, samples, fn):
                    candidates.append((name, c_expr, fn))
    if candidates:
        return candidates

    seen_exprs: set[str] = set()
    for feature_name, feature_expr, feature_fn in synthesized_features(vars_):
        f0 = feature_fn(first) & MASK32
        variants = [
            (
                f"{feature_name}_identity",
                feature_expr,
                lambda sample, fn=feature_fn: fn(sample),
            ),
            (
                f"{feature_name}_add_const",
                f"({feature_expr}) + {hex_u32((y0 - f0) & MASK32)}",
                lambda sample, fn=feature_fn, c=(y0 - f0) & MASK32: fn(sample) + c,
            ),
            (
                f"{feature_name}_sub_const",
                f"({feature_expr}) - {hex_u32((f0 - y0) & MASK32)}",
                lambda sample, fn=feature_fn, c=(f0 - y0) & MASK32: fn(sample) - c,
            ),
            (
                f"{feature_name}_const_sub",
                f"{hex_u32((y0 + f0) & MASK32)} - ({feature_expr})",
                lambda sample, fn=feature_fn, c=(y0 + f0) & MASK32: c - fn(sample),
            ),
            (
                f"{feature_name}_xor_const",
                f"({feature_expr}) ^ {hex_u32(y0 ^ f0)}",
                lambda sample, fn=feature_fn, c=y0 ^ f0: fn(sample) ^ c,
            ),
        ]
        and_mask = 0
        for output in outputs:
            and_mask |= output
        variants.append(
            (
                f"{feature_name}_and_mask",
                f"({feature_expr}) & {hex_u32(and_mask)}",
                lambda sample, fn=feature_fn, c=and_mask: fn(sample) & c,
            )
        )
        or_mask = MASK32
        for output in outputs:
            or_mask &= output
        variants.append(
            (
                f"{feature_name}_or_mask",
                f"({feature_expr}) | {hex_u32(or_mask)}",
                lambda sample, fn=feature_fn, c=or_mask: fn(sample) | c,
            )
        )
        for name, c_expr, fn in variants:
            if c_expr in seen_exprs:
                continue
            seen_exprs.add(c_expr)
            if verify(outputs, samples, fn):
                candidates.append((name, c_expr, fn))
    return candidates


def exhaustive_validation(fn, candidate_fn, vars_: list[str]) -> str:
    if not vars_:
        sample = VMBAInputs()
        original = int(fn(ctypes.byref(sample))) & MASK32
        candidate = int(candidate_fn(sample)) & MASK32
        return "exhaustive_constant" if original == candidate else "exhaustive_constant_failed"
    if len(vars_) != 1:
        return "random_differential_against_compiled_original_not_formal_proof"
    var = vars_[0]
    if var.startswith("b"):
        limit = 256
        label = "exhaustive_8bit_operand"
    elif var.startswith("u16_"):
        limit = 65536
        label = "exhaustive_16bit_operand"
    else:
        return "random_differential_against_compiled_original_not_formal_proof"
    sample = VMBAInputs()
    for value in range(limit):
        setattr(sample, var, value)
        original = int(fn(ctypes.byref(sample))) & MASK32
        candidate = int(candidate_fn(sample)) & MASK32
        if original != candidate:
            return f"{label}_failed"
    return label


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--samples", type=int, default=4096)
    args = parser.parse_args()
    root = args.root

    inventory_path = root / "vm_mba_problem_inventory.tsv"
    if not inventory_path.exists():
        raise SystemExit(f"missing input: {inventory_path}")
    rows = read_tsv(inventory_path)

    harness_path = root / "vm_mba_state_formula_reducer_harness.c"
    so_path = root / "vm_mba_state_formula_reducer_harness.so"
    reductions_path = root / "vm_mba_state_formula_reductions.tsv"
    md_path = root / "vm_mba_state_formula_reductions.md"

    emit_harness(harness_path, rows)
    compiled, detail = compile_harness(harness_path, so_path)
    if not compiled:
        raise SystemExit(f"failed to compile harness: {detail}")
    lib = ctypes.CDLL(str(so_path.resolve()))
    samples = make_samples(args.samples)

    reduction_rows: list[dict[str, object]] = []
    for row in rows:
        source = parse_int(row["source_entry"])
        fn = getattr(lib, f"vm_mba_eval_state_{source}")
        fn.argtypes = [ctypes.POINTER(VMBAInputs)]
        fn.restype = ctypes.c_uint32
        outputs = [int(fn(ctypes.byref(sample))) & MASK32 for sample in samples]
        vars_ = variables(row.get("state_formula", ""))
        candidates = candidate_templates(vars_, outputs, samples)
        if candidates:
            template, expr, candidate_fn = min(candidates, key=lambda item: (len(item[1]), item[0]))
            status = "candidate_simplified"
            validation = exhaustive_validation(fn, candidate_fn, vars_)
        else:
            template, expr = "", ""
            status = "unsolved_by_current_templates"
            validation = "random_differential_no_candidate"
        reduction_rows.append(
            {
                "source_entry": row["source_entry"],
                "opcode_name": row.get("opcode_name", ""),
                "problem_kind": row.get("problem_kind", ""),
                "state_kind": row.get("state_kind", ""),
                "variables": ";".join(vars_),
                "status": status,
                "template": template,
                "candidate_c": expr,
                "random_tests": len(samples),
                "validation": validation,
                "original_state_formula": row.get("state_formula", ""),
            }
        )

    fields = [
        "source_entry",
        "opcode_name",
        "problem_kind",
        "state_kind",
        "variables",
        "status",
        "template",
        "candidate_c",
        "random_tests",
        "validation",
        "original_state_formula",
    ]
    write_tsv(reductions_path, reduction_rows, fields)
    status_counts: dict[str, int] = {}
    for row in reduction_rows:
        status_counts[row["status"]] = status_counts.get(row["status"], 0) + 1
    md_path.write_text(
        "\n".join(
            [
                "# MBA State Formula Reductions",
                "",
                "This pass compiles the original C-like state formulas and tests compact candidate expressions against deterministic random input vectors. It is a reduction aid, not a formal proof.",
                "",
                "## Summary",
                "",
                markdown_table(
                    ["metric", "value"],
                    [
                        ["source entries", len(reduction_rows)],
                        ["random tests per entry", len(samples)],
                        ["status counts", "; ".join(f"{key}:{value}" for key, value in sorted(status_counts.items()))],
                        ["harness", harness_path],
                        ["reductions", reductions_path],
                    ],
                ),
                "",
                "## Candidate Rows",
                "",
                markdown_table(
                    ["source", "status", "template", "candidate"],
                    [[row["source_entry"], row["status"], row["template"], row["candidate_c"]] for row in reduction_rows[:80]],
                ),
                "",
                "## Caveat",
                "",
                "A `candidate_simplified` row means the candidate matched the compiled original for the generated vectors. It still needs formal proof or exhaustive bit-vector validation before replacing the original expression in final reconstructed C.",
            ]
        )
        + "\n"
    )
    print(f"mba_state_formula_reduction_rows={len(reduction_rows)}")
    print("status_counts=" + ";".join(f"{key}:{value}" for key, value in sorted(status_counts.items())))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
