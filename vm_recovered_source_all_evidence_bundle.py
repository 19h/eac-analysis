#!/usr/bin/env python3
import argparse
import re
import sys
from pathlib import Path


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")


def native_gap_batch_key(path: Path) -> int:
    match = re.search(r"vm_native_gap_retdec_batch([0-9]+)\.c$", path.name)
    if not match:
        return -1
    digits = match.group(1)
    if len(digits) > 2 and digits.startswith("0"):
        return -1
    return int(digits)


def default_sidecars():
    seen = set()
    sidecars = []
    native_gap_sidecars = [
        path for path in TRACE_DIR.glob("vm_native_gap_retdec_batch*.c")
        if native_gap_batch_key(path) >= 0
    ]
    for path in DEFAULT_SIDECARS + sorted(native_gap_sidecars, key=native_gap_batch_key):
        if path in seen:
            continue
        seen.add(path)
        sidecars.append(path)
    return sidecars

DEFAULT_SIDECARS = [
    TRACE_DIR / "vm_native_ret_patch_targets.c",
    TRACE_DIR / "vm_native_ret_patch_epilogues_retdec.c",
    TRACE_DIR / "vm_native_ret_patch_source278_retdec.c",
    TRACE_DIR / "vm_native_ret_patch_followups.c",
    TRACE_DIR / "vm_native_ret_patch_followup_retdec.c",
    TRACE_DIR / "vm_native_obfuscated_islands.c",
    TRACE_DIR / "vm_native_obfuscated_second_stage.c",
    TRACE_DIR / "vm_native_obfuscated_second_stage_dynamic.c",
    TRACE_DIR / "vm_native_obfuscated_second_stage_slot_proof.c",
    TRACE_DIR / "vm_native_obfuscated_second_stage_stack_source.c",
    TRACE_DIR / "vm_native_obfuscated_second_stage_rbx_provenance.c",
    TRACE_DIR / "vm_native_obfuscated_second_stage_model.c",
    TRACE_DIR / "vm_native_obfuscated_control_model.c",
    TRACE_DIR / "vm_native_ret_patch_hidden_bridge.c",
    TRACE_DIR / "vm_native_handler_environment_coverage.c",
    TRACE_DIR / "vm_config_coverage_frontier.c",
    TRACE_DIR / "vm_binary_data_sections.c",
    TRACE_DIR / "vm_path_handlers_pseudocode.c",
    TRACE_DIR / "vm_path_handlers_frontier_pseudocode.c",
    TRACE_DIR / "vm_path_frontier_slot_audit.c",
    TRACE_DIR / "vm_native_executable_coverage_audit.c",
    TRACE_DIR / "vm_native_function_inventory.c",
    TRACE_DIR / "vm_native_retdec_gap_queue.c",
    TRACE_DIR / "vm_native_gap_retdec_batch00.c",
    TRACE_DIR / "vm_native_gap_retdec_batch01.c",
    TRACE_DIR / "vm_native_gap_retdec_batch02.c",
    TRACE_DIR / "vm_native_gap_retdec_batch03.c",
    TRACE_DIR / "vm_native_gap_retdec_batch04.c",
    TRACE_DIR / "vm_native_gap_retdec_batch05.c",
    TRACE_DIR / "vm_native_gap_retdec_batch06.c",
    TRACE_DIR / "vm_native_gap_retdec_batch07.c",
    TRACE_DIR / "vm_native_gap_retdec_batch08.c",
    TRACE_DIR / "vm_native_gap_retdec_batch09.c",
    TRACE_DIR / "vm_native_gap_retdec_batch10.c",
    TRACE_DIR / "vm_native_gap_retdec_batch11.c",
    TRACE_DIR / "vm_native_gap_retdec_batch12.c",
    TRACE_DIR / "vm_native_gap_retdec_batch13.c",
    TRACE_DIR / "vm_native_gap_retdec_batch14.c",
    TRACE_DIR / "vm_native_gap_retdec_batch15.c",
    TRACE_DIR / "vm_native_gap_retdec_batch16.c",
    TRACE_DIR / "vm_native_gap_retdec_batch17.c",
    TRACE_DIR / "vm_native_gap_retdec_batch18.c",
    TRACE_DIR / "vm_native_gap_retdec_batch19.c",
    TRACE_DIR / "vm_native_gap_retdec_batch20.c",
    TRACE_DIR / "vm_native_gap_retdec_batch21.c",
    TRACE_DIR / "vm_native_gap_retdec_batch22.c",
    TRACE_DIR / "vm_native_gap_retdec_batch23.c",
    TRACE_DIR / "vm_native_gap_retdec_batch24.c",
    TRACE_DIR / "vm_native_gap_retdec_batch25.c",
    TRACE_DIR / "vm_native_gap_retdec_batch26.c",
    TRACE_DIR / "vm_native_gap_retdec_batch27.c",
    TRACE_DIR / "vm_native_gap_retdec_batch28.c",
    TRACE_DIR / "vm_native_gap_retdec_batch29.c",
    TRACE_DIR / "vm_native_gap_retdec_batch30.c",
    TRACE_DIR / "vm_native_gap_retdec_batch31.c",
    TRACE_DIR / "vm_native_gap_retdec_batch32.c",
    TRACE_DIR / "vm_native_gap_retdec_batch33.c",
    TRACE_DIR / "vm_native_gap_retdec_batch34.c",
    TRACE_DIR / "vm_native_gap_retdec_batch35.c",
    TRACE_DIR / "vm_native_gap_retdec_batch36.c",
    TRACE_DIR / "vm_native_gap_retdec_batch37.c",
    TRACE_DIR / "vm_native_gap_retdec_batch38.c",
    TRACE_DIR / "vm_native_gap_retdec_batch39.c",
    TRACE_DIR / "vm_native_gap_retdec_batch40.c",
    TRACE_DIR / "vm_native_gap_retdec_batch41.c",
    TRACE_DIR / "vm_native_gap_retdec_batch42.c",
    TRACE_DIR / "vm_native_gap_retdec_batch43.c",
    TRACE_DIR / "vm_native_gap_retdec_batch44.c",
    TRACE_DIR / "vm_native_gap_retdec_batch45.c",
    TRACE_DIR / "vm_native_gap_retdec_batch46.c",
    TRACE_DIR / "vm_native_gap_retdec_batch47.c",
    TRACE_DIR / "vm_native_gap_retdec_batch48.c",
    TRACE_DIR / "vm_native_gap_retdec_batch49.c",
    TRACE_DIR / "vm_native_gap_retdec_batch50.c",
    TRACE_DIR / "vm_native_gap_retdec_batch51.c",
    TRACE_DIR / "vm_native_gap_retdec_batch52.c",
    TRACE_DIR / "vm_native_gap_retdec_batch53.c",
    TRACE_DIR / "vm_native_gap_retdec_batch54.c",
    TRACE_DIR / "vm_native_gap_retdec_batch55.c",
    TRACE_DIR / "vm_native_gap_retdec_batch56.c",
    TRACE_DIR / "vm_native_gap_retdec_batch57.c",
    TRACE_DIR / "vm_native_gap_retdec_batch58.c",
    TRACE_DIR / "vm_native_gap_retdec_batch59.c",
    TRACE_DIR / "vm_native_gap_retdec_batch60.c",
    TRACE_DIR / "vm_native_gap_retdec_batch61.c",
    TRACE_DIR / "vm_native_gap_retdec_batch62.c",
    TRACE_DIR / "vm_native_gap_retdec_batch63.c",
    TRACE_DIR / "vm_native_gap_retdec_batch64.c",
    TRACE_DIR / "vm_native_gap_retdec_batch65.c",
    TRACE_DIR / "vm_native_gap_retdec_batch66.c",
    TRACE_DIR / "vm_native_gap_retdec_batch67.c",
    TRACE_DIR / "vm_native_gap_retdec_batch68.c",
    TRACE_DIR / "vm_native_gap_retdec_batch69.c",
    TRACE_DIR / "vm_native_gap_retdec_batch70.c",
    TRACE_DIR / "vm_native_gap_retdec_batch71.c",
    TRACE_DIR / "vm_native_gap_retdec_batch72.c",
    TRACE_DIR / "vm_native_gap_retdec_batch73.c",
    TRACE_DIR / "vm_native_gap_retdec_batch74.c",
    TRACE_DIR / "vm_native_gap_retdec_batch75.c",
    TRACE_DIR / "vm_native_gap_retdec_batch76.c",
    TRACE_DIR / "vm_native_gap_retdec_batch77.c",
    TRACE_DIR / "vm_native_gap_retdec_batch78.c",
    TRACE_DIR / "vm_native_gap_retdec_batch79.c",
    TRACE_DIR / "vm_native_gap_retdec_batch80.c",
    TRACE_DIR / "vm_native_gap_retdec_batch81.c",
    TRACE_DIR / "vm_native_gap_retdec_batch82.c",
    TRACE_DIR / "vm_native_gap_retdec_batch83.c",
    TRACE_DIR / "vm_static_only_handler_queue.c",
    TRACE_DIR / "vm_static_only_tier0_handler_models.c",
    TRACE_DIR / "vm_static_only_tier1_handler_models.c",
    TRACE_DIR / "vm_static_only_tier2_split_models.c",
    TRACE_DIR / "vm_static_only_tier3_shared_models.c",
    TRACE_DIR / "vm_static_only_tier4_callret_models.c",
    TRACE_DIR / "vm_static_only_tier5_large_models.c",
    TRACE_DIR / "vm_target_only_handlers_retdec.c",
    TRACE_DIR / "vm_unobserved_handlers_retdec_batch00.c",
    TRACE_DIR / "vm_unobserved_handlers_retdec_batch01.c",
    TRACE_DIR / "vm_unobserved_handlers_retdec_batch02.c",
    TRACE_DIR / "vm_unobserved_handlers_retdec_batch03.c",
    TRACE_DIR / "vm_unobserved_handlers_retdec_batch04.c",
    TRACE_DIR / "vm_unobserved_handlers_retdec_batch05.c",
    TRACE_DIR / "vm_unobserved_handlers_retdec_batch06.c",
    TRACE_DIR / "vm_weak_handlers_retdec.c",
    TRACE_DIR / "vm_validated_handlers_retdec_batch00.c",
    TRACE_DIR / "vm_validated_handlers_retdec_batch01.c",
    TRACE_DIR / "vm_validated_handlers_retdec_batch02.c",
    TRACE_DIR / "vm_validated_handlers_retdec_batch03.c",
    TRACE_DIR / "vm_validated_handlers_retdec_batch04.c",
    TRACE_DIR / "vm_validated_handlers_retdec_batch05.c",
    TRACE_DIR / "vm_validated_handlers_retdec_batch06.c",
    TRACE_DIR / "vm_unresolved_family_chains.c",
]

FIXED_TYPE_NAMES = {
    "VMState",
    "VMNativeRetPatchEvent",
    "VMNativeHiddenStack",
    "VMHandlerEnvironmentCoverage",
    "VMUnresolvedFamilyEvent",
    "int128_t",
}


def read_text(path):
    return Path(path).read_text(errors="replace")


def tag_for(path):
    stem = Path(path).stem
    stem = re.sub(r"^vm_", "", stem)
    stem = re.sub(r"[^A-Za-z0-9_]", "_", stem)
    return stem


def collect_typedefs(text):
    names = set(FIXED_TYPE_NAMES)
    for match in re.finditer(r"^typedef\s+struct\s+([A-Za-z_]\w*)\s*\{", text, re.M):
        names.add(match.group(1))
    for match in re.finditer(r"^\}\s*([A-Za-z_]\w*)\s*;", text, re.M):
        names.add(match.group(1))
    for match in re.finditer(r"^typedef\s+[^;\n]*\(\s*\*\s*([A-Za-z_]\w*)\s*\)\s*\([^;]*\)\s*;", text, re.M):
        names.add(match.group(1))
    for match in re.finditer(r"^typedef\s+[^;\n]+\s+([A-Za-z_]\w*)\s*;", text, re.M):
        names.add(match.group(1))
    return names


def collect_symbols(text):
    names = set(re.findall(r"\b(?:function|unknown)_[0-9a-fA-F]+\b", text))
    for match in re.finditer(
        r"^(?:extern\s+)?(?:static\s+)?(?:const\s+)?[A-Za-z_][A-Za-z0-9_\s\*]*?\s+([A-Za-z_]\w*)\s*\([^;{}]*\)\s*(?:\{|;)",
        text,
        re.M,
    ):
        names.add(match.group(1))
    for match in re.finditer(
        r"^(?:extern\s+)?(?:static\s+)?(?:const\s+)?[A-Za-z_][A-Za-z0-9_\s\*]*?\*+\s*([A-Za-z_]\w*)\s*\([^;{}]*\)\s*(?:\{|;)",
        text,
        re.M,
    ):
        names.add(match.group(1))
    for match in re.finditer(
        r"^(?:extern\s+)?(?:static\s+)?(?:const\s+)?[A-Za-z_][A-Za-z0-9_\s\*]*?\s+([A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*(?:[A-Z_][A-Z0-9_]*\s*)?(?:=|;)",
        text,
        re.M,
    ):
        names.add(match.group(1))
    names.discard("if")
    names.discard("for")
    names.discard("while")
    names.discard("switch")
    return names


def token_replace(text, replacements):
    if not replacements:
        return text
    pattern = re.compile(
        r"(?<![A-Za-z0-9_])("
        + "|".join(re.escape(key) for key in sorted(replacements, key=len, reverse=True))
        + r")(?![A-Za-z0-9_])"
    )
    return pattern.sub(lambda match: replacements[match.group(1)], text)


def token_replace_code_preserving_literals(text, replacements):
    out = []
    chunk = []
    quote = None
    escaped = False

    def flush_chunk():
        if chunk:
            out.append(token_replace("".join(chunk), replacements))
            chunk.clear()

    for char in text:
        if quote:
            out.append(char)
            if escaped:
                escaped = False
            elif char == "\\":
                escaped = True
            elif char == quote:
                quote = None
            continue
        if char == '"' or char == "'":
            flush_chunk()
            quote = char
            out.append(char)
            continue
        chunk.append(char)
    flush_chunk()
    return "".join(out)


def sanitize_sidecar(path):
    path = Path(path)
    text = read_text(path)
    tag = tag_for(path)
    replacements = {}
    for name in collect_typedefs(text):
        replacements[name] = f"EACEvidence_{tag}__{name}"
    for name in collect_symbols(text):
        replacements[name] = f"eac_evidence_{tag}__{name}"

    out_lines = []
    for line in text.splitlines():
        if line.startswith("#include "):
            out_lines.append(f"/* omitted sidecar include: {line} */")
            continue
        out_lines.append(token_replace_code_preserving_literals(line, replacements))
    return tag, out_lines, len(replacements)


def main():
    parser = argparse.ArgumentParser(
        description="Emit a single C evidence bundle: source bundle plus renamed native sidecar C."
    )
    parser.add_argument("--source-bundle", default=str(TRACE_DIR / "vm_recovered_source_bundle.c"))
    parser.add_argument("--sidecar", action="append", default=[], help="Additional sidecar C file to append.")
    args = parser.parse_args()

    source_bundle = read_text(args.source_bundle)
    sidecars = default_sidecars() + [Path(item) for item in args.sidecar]

    print("/*")
    print(" * All-evidence VM reconstruction bundle.")
    print(" *")
    print(" * The first section is vm_recovered_source_bundle.c: the all-entry")
    print(" * handler layer plus the recovered VM bytecode program. The following")
    print(" * sections append native RetDec/control sidecars with per-file symbol")
    print(" * prefixes so overlapping decompiler output can coexist in one C file.")
    print(" * The appended binary-data sidecar carries the static ELF strings/data")
    print(" * and raw VM dispatch-table bytes referenced by the program data carrier.")
    print(" * This is an analysis artifact; the smoke-linked runnable bundle remains")
    print(" * vm_recovered_source_bundle.c.")
    print(" */")
    print("")
    print("#include <stdbool.h>")
    print("#include <stddef.h>")
    print("#include <stdint.h>")
    print("#include <time.h>")
    print("")
    print("void *iconv_open(const char *tocode, const char *fromcode);")
    print("size_t iconv(void *cd, char **inbuf, size_t *inbytesleft, char **outbuf, size_t *outbytesleft);")
    print("int iconv_close(void *cd);")
    print("void abort(void);")
    print("void *malloc(size_t size);")
    print("void *calloc(size_t nmemb, size_t size);")
    print("char *getenv(const char *name);")
    print("char *fgets();")
    print("int feof();")
    print("int fseek(void *stream, long offset, int whence);")
    print("long ftell(void *stream);")
    print("int ungetc(int c, void *stream);")
    print("int fflush(void *stream);")
    print("int setvbuf(void *stream, char *buf, int mode, size_t size);")
    print("size_t fwrite(const void *ptr, size_t size, size_t nmemb, void *stream);")
    print("void free(void *ptr);")
    print("void *realloc(void *ptr, size_t size);")
    print("void *memchr(const void *s, int c, size_t n);")
    print("void *memcpy(void *dest, const void *src, size_t n);")
    print("int memcmp(const void *s1, const void *s2, size_t n);")
    print("void *memmove(void *dest, const void *src, size_t n);")
    print("void *memset(void *s, int c, size_t n);")
    print("int snprintf(char *str, size_t size, const char *format, ...);")
    print("char *strchr(const char *s, int c);")
    print("int strcmp(const char *s1, const char *s2);")
    print("char *strstr(const char *haystack, const char *needle);")
    print("size_t strlen(const char *s);")
    print("size_t __ctype_get_mb_cur_max(void);")
    print("#define SEEK_SET 0")
    print("#define SEEK_END 2")
    print("")
    print("/* === BEGIN RECOVERED SOURCE BUNDLE === */")
    print(source_bundle, end="" if source_bundle.endswith("\n") else "\n")
    print("/* === END RECOVERED SOURCE BUNDLE === */")
    print("")
    print("/* === BEGIN RENAMED NATIVE EVIDENCE SIDECARS === */")

    emitted = 0
    symbol_rewrites = 0
    for sidecar in sidecars:
        if not sidecar.exists():
            continue
        tag, lines, rewrites = sanitize_sidecar(sidecar)
        emitted += 1
        symbol_rewrites += rewrites
        print("")
        print(f"/* --- sidecar: {sidecar} tag={tag} rewrites={rewrites} --- */")
        for line in lines:
            print(line)

    print("/* === END RENAMED NATIVE EVIDENCE SIDECARS === */")
    print(
        f"all_evidence_bundle_sidecars={emitted} symbol_rewrites={symbol_rewrites}",
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
