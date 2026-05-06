#!/usr/bin/env python3
"""Map native side-effect evidence to recovered VM programs.

This intentionally keeps three evidence classes separate:

* import/linkage surface: what the ELF can call through native linkage stubs
* VM string/data refs: exact bytecode sites that reference native/behavioral text
* runtime trace events: native side effects observed during instrumented x() runs

Only VM string/data refs are program-local evidence. Runtime trace callers are
native offsets observed during x(); they are not assigned to a VM program unless a
later dataflow artifact proves that link.
"""

from __future__ import annotations

import argparse
import csv
import re
from collections import Counter, defaultdict
from pathlib import Path


TRACE_RE = re.compile(r"^\[TRACE\] caller=eac\.elf\+0x([0-9a-fA-F]+)\s+(\S+)(?:\s+(.*))?$")


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


def split_categories(text: str) -> list[str]:
    return [part for part in str(text).split(";") if part]


def normalize_symbol(symbol: str) -> str:
    value = symbol.strip()
    value = re.sub(r"@plt(?:-0x[0-9a-fA-F]+)?$", "", value)
    value = re.sub(r"@@.*$", "", value)
    value = value.removeprefix("sym.imp.")
    value = value.removeprefix("loc.imp.")
    value = value.removeprefix("sym.")
    value = value.removeprefix("imp.")
    return value


def add_unique(items: list[str], value: str) -> None:
    if value and value not in items:
        items.append(value)


def classify_symbol(symbol: str) -> tuple[str, str, str]:
    name = normalize_symbol(symbol)
    lower = name.lower()
    categories: list[str] = []
    reasons: list[str] = []

    def add(category: str, reason: str) -> None:
        add_unique(categories, category)
        add_unique(reasons, reason)

    if name in {"socket", "connect", "send", "recv", "recvfrom", "sendto", "getaddrinfo", "freeaddrinfo", "setsockopt", "getsockopt"} or lower.startswith("epoll_") or name == "poll":
        add("network", "network libc/syscall import")
    if name.startswith("pthread_") or name.startswith("sem_") or name == "sched_yield":
        add("threading_sync", "pthread/semaphore/scheduler import")
    if name in {"mprotect", "mmap", "munmap", "mremap", "madvise", "memfd_create"}:
        add("memory_protection", "memory mapping/protection import")
    if name in {"open", "open64", "fopen", "fopen64", "fclose", "read", "pread64", "write", "close", "opendir", "readdir", "closedir", "readlink", "realpath", "stat", "stat64", "fstat", "fstat64", "lstat", "access", "fileno", "fseek", "fseeko64", "ftell"}:
        add("filesystem_io", "filesystem/device I/O import")
    if name in {"popen", "pclose", "system", "execve", "fork", "waitpid"}:
        add("process_or_shell", "process/shell import")
    if name in {"uname", "getpid", "getppid", "getuid", "getpwuid", "sysconf", "ioctl"}:
        add("host_environment_inventory", "host/process environment import")
    if name in {"getenv", "secure_getenv", "__secure_getenv", "setenv", "unsetenv"}:
        add("env_check", "environment-variable import")
    if "ssl" in lower or "tls" in lower or "mbedtls" in lower:
        add("tls_or_ssl", "TLS/SSL symbol")
    if "blake3" in lower or "sha" in lower or "hash" in lower or name in {"getrandom", "rand", "srand"}:
        add("crypto_hashing", "crypto/hash/random import")
    if "zydis" in lower:
        add("disassembly_metadata", "Zydis disassembly symbol")
    if name.startswith("_Z") or name.startswith("__cxa") or name.startswith("_Unwind") or name in {"__gxx_personality_v0", "__cxa_atexit"}:
        add("cxx_runtime", "C++ ABI/exception import")
    if name.startswith("_ITM_"):
        add("cxx_runtime", "GNU transactional-memory runtime symbol")
    if "locale" in lower or "langinfo" in lower or "gettext" in lower or name in {"iconv", "iconv_open", "iconv_close", "strcoll", "wcscoll", "wcsftime", "mbrtowc"}:
        add("locale_i18n", "locale/i18n import")
    if name in {"printf", "snprintf", "sprintf", "fprintf", "puts", "putchar", "vsnprintf"}:
        add("text_formatting", "formatting/output import")
    if name in {"memcpy", "memmove", "memset", "memcmp", "memchr", "strlen", "strnlen", "strcmp", "strncmp", "strstr", "strchr", "strrchr", "strdup", "wmemcpy", "wcslen"}:
        add("memory_string", "memory/string helper import")

    if not categories:
        add("native_runtime_misc", "no stronger side-effect category")
    confidence = "high" if categories != ["native_runtime_misc"] else "low"
    return ";".join(categories), confidence, "; ".join(reasons)


ROLE_CATEGORY = {
    "network_import_symbol": "network",
    "threading_import_symbol": "threading_sync",
    "process_or_host_import_symbol": "process_or_shell;host_environment_inventory",
    "tls_protocol_message": "tls_or_ssl",
    "tls_library_source_path": "tls_or_ssl",
    "libc_version_requirement": "host_environment_inventory",
    "crypto_import_symbol": "crypto_hashing",
    "disassembly_metadata_symbol": "disassembly_metadata",
    "gnu_transactional_memory_runtime_symbol": "cxx_runtime",
    "locale_runtime_symbol": "locale_i18n",
    "cxx_runtime_type_or_exception_text": "cxx_runtime",
    "compiler_type_name": "compiler_metadata",
    "filesystem_path": "filesystem_io",
    "cpu_or_runtime_configuration_name": "host_environment_inventory",
    "embedded_token_or_encoded_blob": "embedded_data_or_token",
    "literal_data_marker": "literal_data",
    "dynamic_symbol_name": "native_runtime_misc",
    "unclassified_data_string": "unclassified_data",
}


def category_for_role(role: str) -> str:
    return ROLE_CATEGORY.get(role, "native_runtime_misc")


def classify_path(path: str) -> str:
    categories: list[str] = ["filesystem_io"]
    lower = path.lower()
    if lower.startswith("/proc") or lower.startswith("/sys") or lower.startswith("/dev/disk") or lower.startswith("/dev/input") or lower.startswith("/etc/mtab") or lower.startswith("/proc/bus/pci"):
        add_unique(categories, "host_environment_inventory")
    if lower.startswith("/dev/urandom") or lower.startswith("/dev/random"):
        add_unique(categories, "crypto_hashing")
    return ";".join(categories)


def extract_detail(operation: str, rest: str) -> tuple[str, str, str]:
    """Return detail_key, detail_value, policy from a trace payload."""
    policy_bits: list[str] = []
    if " DENY" in rest or rest.endswith("DENY"):
        policy_bits.append("deny")
    if " FAKE" in rest or rest.endswith("FAKE"):
        policy_bits.append("fake")
    if "-> set" in rest:
        policy_bits.append("set")
    if "-> unset" in rest:
        policy_bits.append("unset")

    if operation == "popen":
        match = re.search(r"command=(.*?)\s+type=", rest)
        if match:
            return "command", match.group(1), ";".join(policy_bits)
    for key in ["path", "node", "name", "addr", "fd", "file"]:
        match = re.search(rf"\b{key}=([^ ]+)", rest)
        if match:
            return key, match.group(1), ";".join(policy_bits)
    return "", "", ";".join(policy_bits)


def classify_runtime_event(operation: str, detail_key: str, detail_value: str) -> str:
    if operation in {"socket", "connect", "send", "recv", "recvfrom", "sendto", "getaddrinfo", "freeaddrinfo", "setsockopt", "getsockopt"}:
        return "network"
    if operation == "popen":
        if detail_value.startswith("host ") or " api." in detail_value or "datarouter." in detail_value:
            return "process_or_shell;network"
        return "process_or_shell"
    if operation in {"pthread_create", "pthread_join", "pthread_cond_wait", "pthread_mutex_lock", "pthread_mutex_unlock"}:
        return "threading_sync"
    if operation in {"mprotect", "mmap", "munmap", "mremap"}:
        return "memory_protection"
    if operation in {"getenv", "secure_getenv", "__secure_getenv"}:
        return "env_check"
    if operation in {"open", "fopen", "opendir", "readlink", "realpath", "stat", "lstat", "access"}:
        return classify_path(detail_value)
    if operation in {"close", "fclose", "closedir"}:
        return "resource_lifecycle"
    return "native_runtime_misc"


def discover_runtime_logs(root: Path, coverage: list[dict[str, str]]) -> list[Path]:
    logs: set[Path] = set()
    for row in coverage:
        run_dir = row.get("origin_run_dir") or row.get("trace_dir")
        if run_dir:
            candidate = Path(run_dir) / "run.stderr"
            if candidate.exists():
                logs.add(candidate)
    for extra in [root / "run.stderr", Path("dumps/local-blocked-log/run.stderr")]:
        if extra.exists():
            logs.add(extra)
    return sorted(logs, key=lambda p: str(p))


def read_native_functions(path: Path) -> list[dict[str, object]]:
    if not path.exists():
        return []
    rows: list[dict[str, object]] = []
    for row in read_tsv(path):
        start = parse_int(row.get("offset"))
        end = parse_int(row.get("end"))
        if start and end and end >= start:
            rows.append(
                {
                    "start": start,
                    "end": end,
                    "name": row.get("name", ""),
                    "kind": row.get("kind", ""),
                    "safe_name": row.get("safe_name", ""),
                }
            )
    rows.sort(key=lambda item: int(item["start"]))
    return rows


def find_native_function(functions: list[dict[str, object]], offset: int) -> dict[str, object] | None:
    # The inventory is small enough for a linear scan, and this avoids subtle
    # boundary assumptions while the source is still evolving.
    for row in functions:
        if int(row["start"]) <= offset < int(row["end"]):
            return row
    return None


def parse_runtime_events(logs: list[Path], functions: list[dict[str, object]]) -> list[dict[str, object]]:
    aggregate: dict[tuple[str, str, str, str, str, str], dict[str, object]] = {}
    for log in logs:
        with log.open(encoding="utf-8", errors="replace") as handle:
            for line in handle:
                line = line.rstrip("\n")
                match = TRACE_RE.match(line)
                if not match:
                    continue
                caller_hex, operation, rest = match.groups()
                rest = rest or ""
                caller_offset = parse_int("0x" + caller_hex)
                detail_key, detail_value, policy = extract_detail(operation, rest)
                categories = classify_runtime_event(operation, detail_key, detail_value)
                fn = find_native_function(functions, caller_offset)
                function_name = str(fn.get("name", "")) if fn else ""
                function_kind = str(fn.get("kind", "")) if fn else ""
                key = (str(log.parent), f"0x{caller_offset:x}", operation, detail_key, detail_value, categories)
                if key not in aggregate:
                    aggregate[key] = {
                        "run_dir": str(log.parent),
                        "caller_offset": f"0x{caller_offset:x}",
                        "caller_function": function_name,
                        "caller_function_kind": function_kind,
                        "operation": operation,
                        "categories": categories,
                        "detail_key": detail_key,
                        "detail_value": detail_value,
                        "policy": policy,
                        "count": 0,
                        "provenance": "runtime_trace_x_run_native_offset",
                        "program_binding": "not_bound_to_vm_program",
                        "example": line[:240],
                    }
                row = aggregate[key]
                row["count"] = int(row["count"]) + 1
                if policy and not row.get("policy"):
                    row["policy"] = policy
    return sorted(
        aggregate.values(),
        key=lambda row: (
            str(row["run_dir"]),
            str(row["categories"]),
            str(row["operation"]),
            str(row["caller_offset"]),
            str(row["detail_value"]),
        ),
    )


def markdown_table(headers: list[str], rows: list[list[object]]) -> str:
    lines = ["| " + " | ".join(headers) + " |", "| " + " | ".join("---" for _ in headers) + " |"]
    for row in rows:
        cells = [str(cell).replace("|", "\\|").replace("\n", " ") for cell in row]
        lines.append("| " + " | ".join(cell if len(cell) <= 140 else cell[:137] + "..." for cell in cells) + " |")
    return "\n".join(lines)


def counter_to_text(counter: Counter[str]) -> str:
    return ",".join(f"{key}:{count}" for key, count in counter.most_common())


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    args = parser.parse_args()
    root = args.root

    imports_path = root / "vm_native_linkage_stubs.tsv"
    roles_path = root / "vm_string_role_annotations.tsv"
    role_programs_path = root / "vm_string_role_programs.tsv"
    behavior_path = root / "vm_program_behavior_hypotheses.tsv"
    first_seen_path = root / "vm_x_program_first_seen.tsv"
    coverage_path = root / "vm_trace_coverage_matrix.tsv"
    native_functions_path = root / "vm_native_function_inventory.tsv"
    for path in [imports_path, roles_path, role_programs_path, behavior_path, first_seen_path, coverage_path]:
        if not path.exists():
            raise SystemExit(f"missing input: {path}")

    imports = read_tsv(imports_path)
    roles = read_tsv(roles_path)
    role_programs = read_tsv(role_programs_path)
    behaviors = read_tsv(behavior_path)
    first_seen = read_tsv(first_seen_path)
    coverage = read_tsv(coverage_path)
    native_functions = read_native_functions(native_functions_path)

    import_rows: list[dict[str, object]] = []
    for row in imports:
        categories, confidence, reason = classify_symbol(row.get("symbol", ""))
        import_rows.append(
            {
                "section": row.get("section", ""),
                "start": row.get("start", ""),
                "stop": row.get("stop", ""),
                "bytes": row.get("bytes", ""),
                "symbol": row.get("symbol", ""),
                "normalized_symbol": normalize_symbol(row.get("symbol", "")),
                "categories": categories,
                "classification_confidence": confidence,
                "classification_reason": reason,
                "provenance": "native_linkage_stub_inventory",
            }
        )

    vm_ref_rows: list[dict[str, object]] = []
    vm_categories_by_program: dict[str, Counter[str]] = defaultdict(Counter)
    vm_roles_by_program: dict[str, Counter[str]] = defaultdict(Counter)
    vm_texts_by_program: dict[str, list[str]] = defaultdict(list)
    for row in roles:
        categories = category_for_role(row.get("role", ""))
        program = row.get("program", "")
        for category in split_categories(categories):
            vm_categories_by_program[program][category] += 1
        vm_roles_by_program[program][row.get("role", "")] += 1
        if row.get("text"):
            vm_texts_by_program[program].append(row["text"])
        vm_ref_rows.append(
            {
                "ref_index": row.get("ref_index", ""),
                "program": program,
                "first_seen_rank": row.get("first_seen_rank", ""),
                "site": row.get("site", ""),
                "text": row.get("text", ""),
                "section_name": row.get("section_name", ""),
                "role": row.get("role", ""),
                "role_confidence": row.get("role_confidence", ""),
                "categories": categories,
                "behavior_tags": row.get("behavior_tags", ""),
                "opcode_name": row.get("opcode_name", ""),
                "source_entry": row.get("source_entry", ""),
                "row_start": row.get("row_start", ""),
                "semantic_ir": row.get("semantic_ir", ""),
                "provenance": "exact_vm_string_data_reference",
                "execution_claim": "reference_observed_in_recovered_vm_program_not_call_proof",
            }
        )

    runtime_rows = parse_runtime_events(discover_runtime_logs(root, coverage), native_functions)

    behavior_by_program = {row.get("program", ""): row for row in behaviors}
    first_seen_by_program = {row.get("program", ""): row for row in first_seen}
    string_rollup_by_program = {row.get("program", ""): row for row in role_programs}

    program_rows: list[dict[str, object]] = []
    all_programs = sorted(set(behavior_by_program) | set(first_seen_by_program), key=lambda value: parse_int(value))
    for program in all_programs:
        behavior = behavior_by_program.get(program, {})
        first = first_seen_by_program.get(program, {})
        string_rollup = string_rollup_by_program.get(program, {})
        categories_counter = vm_categories_by_program.get(program, Counter())
        category_text = counter_to_text(categories_counter)
        if not category_text and behavior.get("behavior_tags"):
            category_text = "no_exact_side_effect_ref"
        program_rows.append(
            {
                "program": program,
                "first_seen_rank": first.get("first_seen_rank", ""),
                "first_vm_ip": first.get("first_vm_ip", ""),
                "behavior_tags": behavior.get("behavior_tags", ""),
                "behavior_confidence": behavior.get("confidence", ""),
                "exact_vm_ref_count": sum(categories_counter.values()),
                "exact_side_effect_categories": category_text,
                "role_mix": counter_to_text(vm_roles_by_program.get(program, Counter())),
                "top_strings": " || ".join(vm_texts_by_program.get(program, [])[:8]) or string_rollup.get("top_strings", ""),
                "runtime_native_binding": "not_bound_to_vm_program",
                "provenance": "program_rollup_from_exact_vm_refs_and_behavior_hypotheses",
                "next_action": "reduce opcode/dataflow around referenced site and native bridge target" if categories_counter else behavior.get("next_action", ""),
            }
        )

    import_fields = [
        "section",
        "start",
        "stop",
        "bytes",
        "symbol",
        "normalized_symbol",
        "categories",
        "classification_confidence",
        "classification_reason",
        "provenance",
    ]
    vm_ref_fields = [
        "ref_index",
        "program",
        "first_seen_rank",
        "site",
        "text",
        "section_name",
        "role",
        "role_confidence",
        "categories",
        "behavior_tags",
        "opcode_name",
        "source_entry",
        "row_start",
        "semantic_ir",
        "provenance",
        "execution_claim",
    ]
    runtime_fields = [
        "run_dir",
        "caller_offset",
        "caller_function",
        "caller_function_kind",
        "operation",
        "categories",
        "detail_key",
        "detail_value",
        "policy",
        "count",
        "provenance",
        "program_binding",
        "example",
    ]
    program_fields = [
        "program",
        "first_seen_rank",
        "first_vm_ip",
        "behavior_tags",
        "behavior_confidence",
        "exact_vm_ref_count",
        "exact_side_effect_categories",
        "role_mix",
        "top_strings",
        "runtime_native_binding",
        "provenance",
        "next_action",
    ]

    imports_out = root / "vm_native_side_effect_imports.tsv"
    vm_refs_out = root / "vm_native_side_effect_vm_refs.tsv"
    runtime_out = root / "vm_native_side_effect_runtime.tsv"
    programs_out = root / "vm_native_side_effect_programs.tsv"
    md_out = root / "vm_native_side_effect_map.md"
    write_tsv(imports_out, import_rows, import_fields)
    write_tsv(vm_refs_out, vm_ref_rows, vm_ref_fields)
    write_tsv(runtime_out, runtime_rows, runtime_fields)
    write_tsv(programs_out, program_rows, program_fields)

    import_mix: Counter[str] = Counter()
    for row in import_rows:
        import_mix.update(split_categories(str(row["categories"])))
    vm_mix: Counter[str] = Counter()
    for row in vm_ref_rows:
        vm_mix.update(split_categories(str(row["categories"])))
    runtime_mix: Counter[str] = Counter()
    runtime_ops: Counter[str] = Counter()
    runtime_details: Counter[str] = Counter()
    for row in runtime_rows:
        runtime_mix.update(split_categories(str(row["categories"])))
        runtime_ops[str(row["operation"])] += int(row["count"])
        detail = str(row.get("detail_value", ""))
        if detail:
            runtime_details[f"{row['operation']}:{detail}"] += int(row["count"])

    programs_with_exact = [row for row in program_rows if parse_int(str(row["exact_vm_ref_count"]))]
    md_lines = [
        "# VM Native Side-Effect Map",
        "",
        "This artifact connects native side-effect evidence to recovered VM evidence without overclaiming dataflow. Exact VM string/data rows are program-local references. Runtime rows are native offsets observed during x() runs and remain globally observed until a later bridge/dataflow proof binds them to a VM instruction.",
        "",
        "## Evidence Classes",
        "",
        markdown_table(
            ["class", "rows", "scope", "provenance"],
            [
                ["native import surface", len(import_rows), "ELF-wide", "vm_native_linkage_stubs.tsv"],
                ["exact VM string/data refs", len(vm_ref_rows), "program-local", "vm_string_role_annotations.tsv"],
                ["runtime native side effects", len(runtime_rows), "x() run observed, native-offset scoped", "run.stderr TRACE lines"],
                ["program rollup", len(program_rows), "all recovered VM programs", "exact refs plus behavior hypotheses"],
            ],
        ),
        "",
        "## Category Mix",
        "",
        markdown_table(
            ["source", "categories"],
            [
                ["imports", counter_to_text(import_mix)],
                ["exact VM refs", counter_to_text(vm_mix)],
                ["runtime x() events", counter_to_text(runtime_mix)],
            ],
        ),
        "",
        "## Runtime Operations",
        "",
        markdown_table(
            ["operation", "count"],
            [[operation, count] for operation, count in runtime_ops.most_common(20)],
        ),
        "",
        "## Runtime Details",
        "",
        markdown_table(
            ["detail", "count"],
            [[detail, count] for detail, count in runtime_details.most_common(25)],
        ),
        "",
        "## Programs With Exact Side-Effect References",
        "",
        markdown_table(
            ["program", "first seen", "categories", "roles", "strings", "tags"],
            [
                [
                    row["program"],
                    row["first_seen_rank"],
                    row["exact_side_effect_categories"],
                    row["role_mix"],
                    row["top_strings"],
                    row["behavior_tags"],
                ]
                for row in programs_with_exact
            ],
        ),
        "",
        "## Caveat",
        "",
        "Runtime native calls are concrete x() observations, but this table does not claim a per-VM-instruction caller binding for those native offsets. Exact VM references prove that the recovered VM program references the string/data item; they do not by themselves prove the referenced import was invoked on that path.",
    ]
    md_out.write_text("\n".join(md_lines) + "\n")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
