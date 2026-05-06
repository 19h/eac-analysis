#!/usr/bin/env python3
"""Classify VM string/data references by behavioral role."""

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


def classify(text: str, section: str) -> tuple[str, str, str]:
    lower = text.lower()
    if text in {"socket", "connect", "send", "recv", "getaddrinfo"}:
        return "network_import_symbol", "high", "network syscall/libc import name"
    if text in {"pthread_mutexattr_init", "pthread_cond_wait", "pthread_cond_timedwait", "pthread_mutex_destroy"}:
        return "threading_import_symbol", "high", "pthread synchronization import name"
    if text in {"pclose", "popen", "uname"}:
        return "process_or_host_import_symbol", "high", "process/host libc import name"
    if "client hello" in lower or "changecipherspec" in lower:
        return "tls_protocol_message", "high", "TLS protocol diagnostic text"
    if "mbedtls" in lower or "ssl_tls.c" in lower:
        return "tls_library_source_path", "high", "mbedTLS source-path string"
    if "glibc_" in lower:
        return "libc_version_requirement", "high", "GLIBC symbol-version string"
    if "blake3" in lower:
        return "crypto_import_symbol", "high", "BLAKE3 import/name string"
    if "zydis" in lower:
        return "disassembly_metadata_symbol", "high", "Zydis decoder metadata/name string"
    if text.startswith("_ITM_"):
        return "gnu_transactional_memory_runtime_symbol", "medium", "libgcc/libstdc++ transactional-memory support symbol"
    if text == "__freelocale":
        return "locale_runtime_symbol", "medium", "libc locale runtime symbol"
    if text.startswith("_Z") or text.startswith("NSt") or "basic_string" in text:
        return "cxx_runtime_type_or_exception_text", "medium", "C++ ABI/libstdc++ type or diagnostic text"
    if text in {"unsigned __int128", "long double"}:
        return "compiler_type_name", "medium", "compiler/runtime type-name string"
    if text.startswith("/") or "/proc/" in lower or "/sys/" in lower or "/dev/" in lower or "/etc/" in lower:
        return "filesystem_path", "medium", "absolute or proc/sys/dev filesystem path"
    if "filter" in lower or "prefetch" in lower:
        return "cpu_or_runtime_configuration_name", "medium", "CPU/runtime feature/configuration name"
    if re.fullmatch(r"[A-Za-z0-9+/]{48,}={0,2}", text):
        return "embedded_token_or_encoded_blob", "medium", "long base64-like embedded data string"
    if re.fullmatch(r"Y{3,}", text):
        return "literal_data_marker", "low", "short repeated literal data marker"
    if section == ".dynstr":
        return "dynamic_symbol_name", "low", "dynamic string table symbol with no stronger local role"
    return "unclassified_data_string", "low", "no stronger role heuristic matched"


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        cells = [str(cell).replace("|", "\\|").replace("\n", " ") for cell in row]
        lines.append("| " + " | ".join(cell if len(cell) <= 140 else cell[:137] + "..." for cell in cells) + " |")
    return "\n".join(lines)


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    context_path = root / "vm_string_reference_context.tsv"
    behavior_path = root / "vm_program_behavior_hypotheses.tsv"
    first_seen_path = root / "vm_x_program_first_seen.tsv"
    if not context_path.exists():
        raise SystemExit(f"missing input: {context_path}")

    contexts = read_tsv(context_path)
    behaviors = read_tsv(behavior_path) if behavior_path.exists() else []
    first_seen = read_tsv(first_seen_path) if first_seen_path.exists() else []
    behavior_by_program = {row["program"]: row for row in behaviors}
    first_seen_by_program = {row["program"]: row for row in first_seen}

    rows: list[dict[str, object]] = []
    program_roles: dict[str, Counter[str]] = defaultdict(Counter)
    program_confidence: dict[str, Counter[str]] = defaultdict(Counter)
    program_texts: dict[str, list[str]] = defaultdict(list)

    for row in contexts:
        text = row.get("text", "")
        role, confidence, evidence = classify(text, row.get("section_name", ""))
        program = row["program"]
        program_roles[program][role] += 1
        program_confidence[program][confidence] += 1
        program_texts[program].append(text)
        behavior = behavior_by_program.get(program, {})
        first = first_seen_by_program.get(program, {})
        rows.append(
            {
                "ref_index": row.get("ref_index", ""),
                "program": program,
                "first_seen_rank": first.get("first_seen_rank", ""),
                "site": row.get("site", ""),
                "text": text,
                "section_name": row.get("section_name", ""),
                "role": role,
                "role_confidence": confidence,
                "role_evidence": evidence,
                "behavior_tags": behavior.get("behavior_tags", ""),
                "opcode_name": row.get("opcode_name", ""),
                "source_entry": row.get("source_entry", ""),
                "row_start": row.get("row_start", ""),
                "semantic_ir": row.get("semantic_ir", ""),
            }
        )

    program_rows: list[dict[str, object]] = []
    for program in sorted(program_roles):
        behavior = behavior_by_program.get(program, {})
        first = first_seen_by_program.get(program, {})
        role_counter = program_roles[program]
        program_rows.append(
            {
                "program": program,
                "first_seen_rank": first.get("first_seen_rank", ""),
                "string_refs": sum(role_counter.values()),
                "role_mix": ",".join(f"{role}:{count}" for role, count in role_counter.most_common()),
                "confidence_mix": ",".join(f"{key}:{count}" for key, count in program_confidence[program].most_common()),
                "behavior_tags": behavior.get("behavior_tags", ""),
                "top_strings": " || ".join(program_texts[program][:8]),
            }
        )

    role_path = root / "vm_string_role_annotations.tsv"
    program_path = root / "vm_string_role_programs.tsv"
    md_path = root / "vm_string_role_annotations.md"
    role_fields = [
        "ref_index",
        "program",
        "first_seen_rank",
        "site",
        "text",
        "section_name",
        "role",
        "role_confidence",
        "role_evidence",
        "behavior_tags",
        "opcode_name",
        "source_entry",
        "row_start",
        "semantic_ir",
    ]
    program_fields = [
        "program",
        "first_seen_rank",
        "string_refs",
        "role_mix",
        "confidence_mix",
        "behavior_tags",
        "top_strings",
    ]
    write_tsv(role_path, rows, role_fields)
    write_tsv(program_path, program_rows, program_fields)

    role_mix = Counter(str(row["role"]) for row in rows)
    md_lines = [
        "# VM String Role Annotations",
        "",
        "This classifies exact VM string/data references into behavioral roles and joins them to recovered programs/opcodes. These are conservative annotations; they identify likely roles of referenced strings, not complete program intent by themselves.",
        "",
        "## Summary",
        "",
        markdown_table(
            ["metric", "value"],
            [
                ["string refs", len(rows)],
                ["programs with refs", len(program_rows)],
                ["role mix", ",".join(f"{role}:{count}" for role, count in role_mix.most_common())],
            ],
        ),
        "",
        "## Program Role Mix",
        "",
        markdown_table(
            ["program", "first seen", "refs", "roles", "tags", "strings"],
            [
                [
                    row["program"],
                    row["first_seen_rank"],
                    row["string_refs"],
                    row["role_mix"],
                    row["behavior_tags"],
                    row["top_strings"],
                ]
                for row in program_rows
            ],
        ),
        "",
        "## Reference Roles",
        "",
        markdown_table(
            ["program", "site", "role", "confidence", "text", "opcode"],
            [
                [row["program"], row["site"], row["role"], row["role_confidence"], row["text"], row["opcode_name"]]
                for row in rows
            ],
        ),
        "",
        "## Artifacts",
        "",
        f"- Reference roles: `{role_path}`",
        f"- Program role rollup: `{program_path}`",
        "",
    ]
    md_path.write_text("\n".join(md_lines), encoding="utf-8")

    print(f"wrote {role_path}")
    print(f"wrote {program_path}")
    print(f"wrote {md_path}")
    print(f"refs={len(rows)} programs={len(program_rows)} role_mix={','.join(f'{role}:{count}' for role, count in role_mix.most_common())}")
    print("semantic_status=string_roles_ready;full_program_intent_still_open")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
