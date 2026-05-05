#!/usr/bin/env python3
import argparse
import csv
import re
import subprocess
import sys
from collections import Counter, defaultdict
from pathlib import Path

from vm_pseudocode_dump import read_tsv
from vm_synthetic_gap_source299_ret_patch_probe import c_escape, parse_hex


TRACE_DIR = Path("dumps/vmtail-wide-1m-w16")
INSN_RE = re.compile(r"^\s*([0-9a-f]+):\s+(.*)$")
TARGET_RE = re.compile(r"\b(?:call|jmp|je|jne|jg|jge|jl|jle|ja|jae|jb|jbe)\s+([0-9a-f]+)\b")

FIELDS = [
    "source_entry",
    "synthetic_start_vm_ip",
    "ret_slot",
    "patched_ret_eac_off",
    "patched_ret_section",
    "patched_ret_text_class",
    "ret_patch_kind",
    "rows",
    "seed_mix",
    "run_mix",
    "relation_mix",
    "file_bytes16",
    "disasm_start",
    "disasm_stop",
    "disasm_insn_count",
    "ret_seen",
    "call_targets",
    "jump_targets",
    "first_insns",
]


def counter_text(counter, limit=6):
    return ",".join(f"{key}:{value}" for key, value in counter.most_common(limit)) or "-"


def unique_key(row, ret_slot):
    if ret_slot == "ret2":
        return (
            row.get("source_entry", ""),
            row.get("synthetic_start_vm_ip", ""),
            ret_slot,
            row.get("patched_ret2_eac_off", ""),
        )
    return (
        row.get("source_entry", ""),
        row.get("synthetic_start_vm_ip", ""),
        ret_slot,
        row.get("patched_ret_eac_off", ""),
    )


def iter_target_rows(rows):
    for row in rows:
        if row.get("patched_ret_eac_off", ""):
            yield "ret1", row
        if row.get("patched_ret2_eac_off", ""):
            yield "ret2", row


def disassemble(eac, start, window):
    stop = start + window
    cmd = [
        "objdump",
        "-d",
        "--no-show-raw-insn",
        f"--start-address=0x{start:x}",
        f"--stop-address=0x{stop:x}",
        eac,
    ]
    proc = subprocess.run(cmd, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
    insns = []
    ret_seen = "no"
    call_targets = Counter()
    jump_targets = Counter()
    for line in proc.stdout.splitlines():
        match = INSN_RE.match(line)
        if not match:
            continue
        addr = int(match.group(1), 16)
        text = " ".join(match.group(2).split())
        insns.append((addr, text))
        mnemonic = text.split(None, 1)[0] if text else ""
        if mnemonic.startswith("ret"):
            ret_seen = "yes"
        target_match = TARGET_RE.search(text)
        if target_match:
            target = f"0x{int(target_match.group(1), 16):x}"
            if mnemonic == "call":
                call_targets[target] += 1
            elif mnemonic.startswith("j"):
                jump_targets[target] += 1
    return insns, ret_seen, call_targets, jump_targets


def build_rows(args):
    probe_rows = list(read_tsv(args.sampled_ret_patch_probe))
    grouped = defaultdict(list)
    for ret_slot, row in iter_target_rows(probe_rows):
        grouped[unique_key(row, ret_slot)].append(row)

    out = []
    for key, rows in grouped.items():
        source_entry, start_vm_ip, ret_slot, patched = key
        target = parse_hex(patched)
        first = rows[0]
        insns, ret_seen, call_targets, jump_targets = disassemble(args.eac, target, args.window)
        first_insns = " | ".join(f"0x{addr:x}:{text}" for addr, text in insns[:args.max_insns])
        if ret_slot == "ret2":
            section = first.get("patched_ret2_section", "")
            text_class = first.get("patched_ret2_text_class", "")
            relation_key = "ret_patch2_relation"
            bytes16 = first.get("patched_ret2_file_bytes16", "")
        else:
            section = first.get("patched_ret_section", "")
            text_class = first.get("patched_ret_text_class", "")
            relation_key = "ret_patch_relation"
            bytes16 = first.get("patched_ret_file_bytes16", "")
        out.append({
            "source_entry": source_entry,
            "synthetic_start_vm_ip": start_vm_ip,
            "ret_slot": ret_slot,
            "patched_ret_eac_off": patched,
            "patched_ret_section": section,
            "patched_ret_text_class": text_class,
            "ret_patch_kind": first.get("ret_patch_kind", "") or "single_stack_return",
            "rows": str(len(rows)),
            "seed_mix": counter_text(Counter(row.get("seed_quality", "") for row in rows)),
            "run_mix": counter_text(Counter(Path(row.get("run_dir", "")).name for row in rows)),
            "relation_mix": counter_text(Counter(row.get(relation_key, "") for row in rows)),
            "file_bytes16": bytes16,
            "disasm_start": f"0x{target:x}",
            "disasm_stop": f"0x{target + args.window:x}",
            "disasm_insn_count": str(len(insns)),
            "ret_seen": ret_seen,
            "call_targets": counter_text(call_targets),
            "jump_targets": counter_text(jump_targets),
            "first_insns": first_insns,
        })
    out.sort(key=lambda row: (
        int(row["source_entry"] or "0", 10),
        parse_hex(row["synthetic_start_vm_ip"]),
        row["ret_slot"],
        parse_hex(row["patched_ret_eac_off"]),
    ))
    return out


def emit_tsv(rows):
    writer = csv.DictWriter(sys.stdout, fieldnames=FIELDS, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows):
    print("# Ret-Patch Native Target Atlas\n")
    print(
        "Disassembly windows for native `.text` offsets installed by sampled return-patch handlers. "
        "These offsets are native reentry targets, not VM bytecode IPs or dispatch-table slots.\n"
    )
    print(f"Targets: `{len(rows)}`\n")
    print("## Summary\n")
    print("| Source | Start | Slot | Target | Rows | Section | Ret | Calls | Jumps |")
    print("| ---: | --- | --- | ---: | ---: | --- | --- | --- | --- |")
    for row in rows:
        print(
            f"| `{row['source_entry']}` | `{row['synthetic_start_vm_ip']}` | `{row['ret_slot']}` | "
            f"`{row['patched_ret_eac_off']}` | `{row['rows']}` | `{row['patched_ret_section']}` | "
            f"`{row['ret_seen']}` | `{c_escape(row['call_targets'])}` | `{c_escape(row['jump_targets'])}` |"
        )
    print("\n## Windows\n")
    for row in rows:
        print(
            f"### entry_{row['source_entry']} {row['synthetic_start_vm_ip']} "
            f"{row['ret_slot']} -> {row['patched_ret_eac_off']}\n"
        )
        print(
            f"- rows: `{row['rows']}`; seed: `{c_escape(row['seed_mix'])}`; "
            f"runs: `{c_escape(row['run_mix'])}`; relation: `{c_escape(row['relation_mix'])}`"
        )
        print(f"- bytes: `{row['file_bytes16']}`\n")
        print("```asm")
        for item in row["first_insns"].split(" | "):
            if item:
                print(item)
        print("```\n")


def main():
    parser = argparse.ArgumentParser(description="Disassemble native .text targets installed by ret-patch handlers.")
    parser.add_argument("--sampled-ret-patch-probe", default=str(TRACE_DIR / "vm_synthetic_gap_sampled_ret_patch_probe.tsv"))
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--window", type=lambda value: int(value, 0), default=0x80)
    parser.add_argument("--max-insns", type=int, default=24)
    parser.add_argument("--markdown", action="store_true")
    args = parser.parse_args()

    rows = build_rows(args)
    if args.markdown:
        emit_markdown(rows)
    else:
        emit_tsv(rows)
    print(f"ret_patch_native_target_atlas_rows={len(rows)}", file=sys.stderr)


if __name__ == "__main__":
    main()
