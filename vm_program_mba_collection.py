#!/usr/bin/env python3
"""Collect static and runtime evidence needed to reduce MBA-heavy VM program cases."""

from __future__ import annotations

import argparse
import csv
from collections import Counter, defaultdict
from pathlib import Path


CASE_REDUCTION_FIELDS = [
    "program",
    "state",
    "status",
    "reason",
    "trace_observations",
    "trace_with_pre_state",
    "trace_with_pre_flags",
    "trace_with_pre_byte",
    "raw_bytes_known",
    "edge_known",
    "ir_rows",
    "needs",
]


def parse_int(text: str) -> int:
    text = text or "0"
    return int(text, 16 if text.startswith("0x") else 10)


def read_tsv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="") as handle:
        return list(csv.DictReader(handle, delimiter="\t"))


def write_tsv(path: Path, fields: list[str], rows: list[dict[str, str]]) -> None:
    with path.open("w", newline="") as handle:
        writer = csv.DictWriter(handle, delimiter="\t", fieldnames=fields)
        writer.writeheader()
        writer.writerows(rows)


def hx(value: int) -> str:
    return f"0x{value:x}"


def u16le(data: bytes, off: int) -> int:
    if off + 1 >= len(data):
        return 0
    return data[off] | (data[off + 1] << 8)


def compact_counter(values: list[str], limit: int = 8) -> str:
    vals = [value for value in values if value]
    if not vals:
        return ""
    return ",".join(f"{key}:{count}" for key, count in Counter(vals).most_common(limit))


def md_escape(text: str) -> str:
    return (text or "").replace("|", "\\|")


def trace_paths() -> list[Path]:
    return sorted(Path("dumps").glob("**/vm_instruction_trace*.tsv"))


def load_program_row(manifest: Path, program: int) -> dict[str, str]:
    for row in read_tsv(manifest):
        if int(row["program"]) == program:
            return row
    raise SystemExit(f"missing program {program:03d} in {manifest}")


def collect_trace_observations(paths: list[Path], case_starts: set[str]) -> list[dict[str, str]]:
    rows: list[dict[str, str]] = []
    for path in paths:
        if not path.exists():
            continue
        with path.open(newline="") as handle:
            reader = csv.DictReader(handle, delimiter="\t")
            for row in reader:
                start = row.get("start_vm_ip", "")
                end = row.get("end_vm_ip", "")
                relation = ""
                case_state = ""
                if start in case_starts:
                    relation = "case_start"
                    case_state = start
                elif end in case_starts:
                    relation = "predecessor_to_case"
                    case_state = end
                else:
                    continue
                out = {"trace_path": str(path), "relation": relation, "case_state": case_state}
                for key in [
                    "seq",
                    "frame",
                    "source_entry",
                    "source_target",
                    "start_vm_ip",
                    "end_vm_ip",
                    "delta",
                    "kind",
                    "site",
                    "target_entry",
                    "target",
                    "w0",
                    "w1",
                    "w2",
                    "w3",
                    "w4",
                    "w5",
                    "bytes",
                    "byte_status",
                    "pre_flags",
                    "post_flags",
                    "pre_state",
                    "post_state",
                    "state_delta",
                    "pre_byte",
                    "post_byte",
                ]:
                    out[key] = row.get(key, "")
                rows.append(out)
    rows.sort(key=lambda row: (row["case_state"], row["relation"], row["trace_path"], row.get("seq", "")))
    return rows


def case_reduction_row(case: dict[str, str]) -> dict[str, str]:
    observations = int(case.get("trace_observations", "0") or 0)
    pre_state = int(case.get("trace_with_pre_state", "0") or 0)
    pre_flags = int(case.get("trace_with_pre_flags", "0") or 0)
    pre_byte = int(case.get("trace_with_pre_byte", "0") or 0)
    raw_bytes_known = bool(case.get("raw_prefix32"))
    edge_known = bool(case.get("edge_target_vm_ip") or case.get("edge_target_block"))
    ir_rows = int(case.get("rows", "0") or 0)

    needs = []
    if observations == 0:
        needs.append("case_start_trace")
    if pre_state == 0:
        needs.append("state_trace_pre_state")
    if pre_flags == 0:
        needs.append("state_trace_pre_flags")
    if pre_byte == 0:
        needs.append("state_trace_pre_byte")
    if not raw_bytes_known:
        needs.append("raw_bytecode_bytes")
    if not edge_known:
        needs.append("static_or_dynamic_successor_edge")
    if ir_rows == 0:
        needs.append("lifted_ir_rows")

    status = "ready_for_mba_reduction" if not needs else "needs_more_evidence"
    reason = "all required static/runtime fields are present" if not needs else ",".join(needs)
    return {
        "program": case.get("program", ""),
        "state": case.get("state", ""),
        "status": status,
        "reason": reason,
        "trace_observations": str(observations),
        "trace_with_pre_state": str(pre_state),
        "trace_with_pre_flags": case.get("trace_with_pre_flags", "0"),
        "trace_with_pre_byte": case.get("trace_with_pre_byte", "0"),
        "raw_bytes_known": "yes" if raw_bytes_known else "no",
        "edge_known": "yes" if edge_known else "no",
        "ir_rows": str(ir_rows),
        "needs": ",".join(needs),
    }


def write_frida_template(path: Path, program: int, states: list[str]) -> None:
    state_array = ", ".join(f'"{state}"' for state in states)
    path.write_text(
        f"""// Focused VM Program Atlas {program:03d} MBA evidence logger.
// Fill FN with the native dispatcher/function address if one is available in the target.
// The logger records the fields needed to reduce each MBA transition:
// state, key, old/new ctx->next, ctx->ip bytes/u16s, ctx pointer, and alias proof.
"use strict";

const FN = ptr("0xPUT_VM_PROGRAM_ATLAS_{program:03d}_FUNCTION_ADDRESS_HERE");
const STATES = new Set([{state_array}]);

function hx(v) {{
    return "0x" + v.toString(16);
}}

function u16(p) {{
    return p.readU16();
}}

function bytes6(p) {{
    const out = [];
    for (let i = 0; i < 6; i++) {{
        out.push(p.add(i).readU8().toString(16).padStart(2, "0"));
    }}
    return out.join(" ");
}}

Interceptor.attach(FN, {{
    onEnter(args) {{
        this.ctx = args[0];
        this.state = args[1].toUInt32();
        this.keep = STATES.has(hx(this.state));
        if (!this.keep) {{
            return;
        }}
        this.ip = this.ctx.readPointer();
        this.nextPtr = this.ctx.add(0x08);
        this.oldNext = this.nextPtr.readU32();
        this.key = this.ctx.add(0x0c).readU32();
        this.aliasNextInIpWindow =
            this.nextPtr.compare(this.ip) >= 0 && this.nextPtr.compare(this.ip.add(6)) < 0;
        this.before = {{
            state: hx(this.state),
            ctx: this.ctx.toString(),
            ip: this.ip.toString(),
            next_ptr: this.nextPtr.toString(),
            alias_next_in_ip_window: this.aliasNextInIpWindow,
            key: hx(this.key),
            old_next: hx(this.oldNext),
            bytes: bytes6(this.ip),
            b0: hx(this.ip.readU8()),
            b1: hx(this.ip.add(1).readU8()),
            b2: hx(this.ip.add(2).readU8()),
            b3: hx(this.ip.add(3).readU8()),
            b4: hx(this.ip.add(4).readU8()),
            b5: hx(this.ip.add(5).readU8()),
            u16_0: hx(u16(this.ip)),
            u16_1: hx(u16(this.ip.add(1))),
            u16_2: hx(u16(this.ip.add(2))),
            u16_4: hx(u16(this.ip.add(4)))
        }};
    }},
    onLeave(retval) {{
        if (!this.keep) {{
            return;
        }}
        this.before.new_next = hx(this.nextPtr.readU32());
        this.before.retval = retval.toString();
        console.log(JSON.stringify(this.before));
    }}
}});
""",
        encoding="utf-8",
    )


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, default=Path("dumps/vmtail-wide-1m-w16"))
    parser.add_argument("--program", type=int, default=10)
    parser.add_argument("--elf", type=Path, default=Path("eac.elf"))
    parser.add_argument("--out-prefix", type=Path)
    args = parser.parse_args()

    out_prefix = args.out_prefix or args.root / f"vm_program_atlas_{args.program:03d}_mba"
    program_row = load_program_row(args.root / "vm_programs_decompiled_manifest.tsv", args.program)
    start = parse_int(program_row["start"])
    end = parse_int(program_row["end"])
    blocks = [
        row for row in read_tsv(args.root / "vm_bytecode_basic_blocks.tsv")
        if start <= parse_int(row["start_vm_ip"]) < end
    ]
    blocks.sort(key=lambda row: parse_int(row["start_vm_ip"]))
    block_by_id = {row["block"]: row for row in blocks}
    case_starts = {row["start_vm_ip"] for row in blocks}
    edges = {
        row["source_block"]: row
        for row in read_tsv(args.root / "vm_bytecode_basic_block_edges.tsv")
        if row.get("source_block") in block_by_id
    }
    def block_for_ip(ip_text: str) -> str:
        ip = parse_int(ip_text)
        for block in blocks:
            if parse_int(block["start_vm_ip"]) <= ip < parse_int(block["byte_end_min"]):
                return block["block"]
        return ""

    ir_rows = [
        {**row, "_block": block_for_ip(row.get("start_vm_ip", "0"))}
        for row in read_tsv(args.root / "vm_bytecode_ir_decompile.tsv")
        if start <= parse_int(row.get("start_vm_ip", "0")) < end
    ]
    ir_by_block: dict[str, list[dict[str, str]]] = defaultdict(list)
    for row in ir_rows:
        ir_by_block[row["_block"]].append(row)

    elf = args.elf.read_bytes()
    observations = collect_trace_observations(trace_paths(), case_starts)
    obs_by_case: dict[str, list[dict[str, str]]] = defaultdict(list)
    for row in observations:
        if row["relation"] == "case_start":
            obs_by_case[row["case_state"]].append(row)

    case_rows: list[dict[str, str]] = []
    for block in blocks:
        state = block["start_vm_ip"]
        off = parse_int(state)
        data = elf[off:off + 32]
        first = ir_by_block.get(block["block"], [{}])[0]
        last = ir_by_block.get(block["block"], [{}])[-1]
        edge = edges.get(block["block"], {})
        obs = obs_by_case.get(state, [])
        case_rows.append({
            "program": f"{args.program:03d}",
            "block": block["block"],
            "state": state,
            "block_end": block.get("byte_end_min", ""),
            "byte_end_min": block.get("byte_end_min", ""),
            "rows": block.get("row_count", ""),
            "terminal_kind": block.get("terminal_kind", ""),
            "source_block": block.get("source_block", ""),
            "raw_b0": hx(data[0]) if len(data) > 0 else "",
            "raw_b1": hx(data[1]) if len(data) > 1 else "",
            "raw_b2": hx(data[2]) if len(data) > 2 else "",
            "raw_b3": hx(data[3]) if len(data) > 3 else "",
            "raw_b4": hx(data[4]) if len(data) > 4 else "",
            "raw_b5": hx(data[5]) if len(data) > 5 else "",
            "raw_u16_0": hx(u16le(data, 0)),
            "raw_u16_1": hx(u16le(data, 1)),
            "raw_u16_2": hx(u16le(data, 2)),
            "raw_u16_4": hx(u16le(data, 4)),
            "raw_prefix32": data.hex(),
            "first_source_entry": first.get("source_entry", ""),
            "first_target_entry": first.get("target_entry", ""),
            "first_state_ir": first.get("state_ir", ""),
            "first_state_effect_ir": first.get("state_effect_ir", ""),
            "first_dispatch_ir": first.get("dispatch_ir", ""),
            "last_source_entry": last.get("source_entry", ""),
            "last_target_entry": last.get("target_entry", ""),
            "last_state_ir": last.get("state_ir", ""),
            "last_state_effect_ir": last.get("state_effect_ir", ""),
            "last_dispatch_ir": last.get("dispatch_ir", ""),
            "edge_kind": edge.get("edge_kind", ""),
            "edge_target_block": edge.get("target_block", ""),
            "edge_target_vm_ip": edge.get("target_vm_ip", ""),
            "edge_source_entry": edge.get("source_entry", ""),
            "edge_target_entry": edge.get("target_entry", ""),
            "edge_delta": edge.get("delta", ""),
            "edge_semantic_ir": edge.get("semantic_ir", ""),
            "edge_coverage": edge.get("target_coverage_statuses", ""),
            "trace_observations": str(len(obs)),
            "trace_with_pre_state": str(sum(1 for row in obs if row.get("pre_state"))),
            "trace_with_pre_flags": str(sum(1 for row in obs if row.get("pre_flags"))),
            "trace_with_pre_byte": str(sum(1 for row in obs if row.get("pre_byte"))),
            "observed_pre_state": compact_counter([row.get("pre_state", "") for row in obs]),
            "observed_post_state": compact_counter([row.get("post_state", "") for row in obs]),
            "observed_pre_flags": compact_counter([row.get("pre_flags", "") for row in obs]),
            "observed_post_flags": compact_counter([row.get("post_flags", "") for row in obs]),
            "observed_target_entry": compact_counter([row.get("target_entry", "") for row in obs]),
            "observed_bytes": compact_counter([row.get("bytes", "") for row in obs]),
        })

    ir_fields = [
        "block",
        "start_vm_ip",
        "end_vm_ip",
        "row_kind",
        "source_entry",
        "source_target",
        "target_entry",
        "target",
        "delta",
        "bytes",
        "byte_status",
        "operand_min_len",
        "operand_shape",
        "semantic_ir",
        "state_ir",
        "state_effect_ir",
        "dispatch_ir",
        "dispatch_expr_ir",
        "ip_advance_expr_ir",
        "validation",
        "provenance",
    ]
    ir_out = []
    for row in ir_rows:
        block = row.get("_block", "")
        ir_out.append({"block": block, **{field: row.get(field, "") for field in ir_fields if field != "block"}})

    observation_fields = [
        "trace_path",
        "relation",
        "case_state",
        "seq",
        "frame",
        "source_entry",
        "source_target",
        "start_vm_ip",
        "end_vm_ip",
        "delta",
        "kind",
        "site",
        "target_entry",
        "target",
        "w0",
        "w1",
        "w2",
        "w3",
        "w4",
        "w5",
        "bytes",
        "byte_status",
        "pre_flags",
        "post_flags",
        "pre_state",
        "post_state",
        "state_delta",
        "pre_byte",
        "post_byte",
    ]
    case_fields = list(case_rows[0].keys()) if case_rows else []
    reduction_rows = [case_reduction_row(row) for row in case_rows]
    missing_rows = [row for row in reduction_rows if row["status"] != "ready_for_mba_reduction"]
    write_tsv(out_prefix.with_name(out_prefix.name + "_cases.tsv"), case_fields, case_rows)
    write_tsv(out_prefix.with_name(out_prefix.name + "_observations.tsv"), observation_fields, observations)
    write_tsv(out_prefix.with_name(out_prefix.name + "_ir_rows.tsv"), ir_fields, ir_out)
    write_tsv(out_prefix.with_name(out_prefix.name + "_requirements.tsv"), CASE_REDUCTION_FIELDS, reduction_rows)
    write_tsv(out_prefix.with_name(out_prefix.name + "_missing.tsv"), CASE_REDUCTION_FIELDS, missing_rows)
    write_frida_template(
        out_prefix.with_name(out_prefix.name + "_frida_trace.js"),
        args.program,
        [row["state"] for row in missing_rows] or [row["state"] for row in case_rows],
    )

    md = out_prefix.with_name(out_prefix.name + ".md")
    with md.open("w") as handle:
        handle.write(f"# VM Program Atlas {args.program:03d} MBA Collection\n\n")
        handle.write(f"- Program range: `{program_row['start']}`..`{program_row['end']}`\n")
        handle.write(f"- Case states / blocks: `{len(case_rows)}`\n")
        handle.write(f"- IR rows captured: `{len(ir_out)}`\n")
        handle.write(f"- Runtime observations captured: `{len(observations)}` from `{len(trace_paths())}` trace files\n")
        handle.write(f"- Case-start observations with concrete pre-state: `{sum(1 for row in observations if row['relation'] == 'case_start' and row.get('pre_state'))}`\n\n")
        handle.write("## Reduction Readiness\n\n")
        ready = len(reduction_rows) - len(missing_rows)
        handle.write(f"- Ready for MBA reduction from collected evidence: `{ready}` / `{len(reduction_rows)}` cases\n")
        handle.write(f"- Missing additional stateful observations: `{len(missing_rows)}` cases\n\n")
        handle.write("| State | Status | Trace obs | Pre-state obs | Edge | Target | Needs |\n")
        handle.write("| --- | --- | ---: | ---: | --- | --- | --- |\n")
        req_by_state = {row["state"]: row for row in reduction_rows}
        for case in case_rows:
            req = req_by_state[case["state"]]
            target = case.get("edge_target_vm_ip") or case.get("edge_target_block", "")
            handle.write(
                f"| `{case['state']}` | `{req['status']}` | {req['trace_observations']} | "
                f"{req['trace_with_pre_state']} | `{md_escape(case.get('edge_kind', ''))}` | "
                f"`{md_escape(target)}` | `{md_escape(req['needs'])}` |\n"
            )
        handle.write("\n")
        handle.write("## Files\n\n")
        handle.write(f"- `{out_prefix.name}_cases.tsv`: per-case static block, raw bytecode, edge, and observation summary.\n")
        handle.write(f"- `{out_prefix.name}_observations.tsv`: all trace rows whose start is a case state or whose end enters a case state.\n")
        handle.write(f"- `{out_prefix.name}_ir_rows.tsv`: all lifted IR rows inside the program.\n\n")
        handle.write(f"- `{out_prefix.name}_requirements.tsv`: reduction-readiness checklist for each case.\n")
        handle.write(f"- `{out_prefix.name}_missing.tsv`: focused list of cases still missing mandatory reduction inputs.\n")
        handle.write(f"- `{out_prefix.name}_frida_trace.js`: focused direct-instrumentation template for missing runtime fields.\n\n")
        handle.write("## Missing For Full MBA Reduction\n\n")
        if missing_rows:
            states = ", ".join(f"`{row['state']}`" for row in missing_rows)
            handle.write(f"- Concrete state/flags/byte observations are still missing for: {states}.\n")
        handle.write("- Native function entry address if using the generated Frida direct-dispatch logger.\n")
        handle.write("- Runtime pointer value for `ctx->ip`, so alias checks against `&ctx->next` can be proven directly.\n")
        handle.write("- Additional diverse observations if any MBA helper is not uniquely determined by the existing state traces.\n")
    print(
        f"program={args.program:03d} cases={len(case_rows)} ir_rows={len(ir_out)} observations={len(observations)} "
        f"out_prefix={out_prefix}",
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
