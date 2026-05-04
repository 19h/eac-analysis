#!/usr/bin/env python3
import argparse
import csv
import hashlib
import sys
from collections import Counter, defaultdict
from pathlib import Path


def parse_hex(text):
    if not text:
        return 0
    return int(text, 16)


def parse_signed_hex(text):
    if text.startswith("+0x"):
        return int(text[1:], 16)
    if text.startswith("-0x"):
        return -int(text[3:], 16)
    return int(text, 0)


def parse_len_status(status):
    if "_of_" not in status:
        return 0
    try:
        return int(status.rsplit("_of_", 1)[1], 0)
    except ValueError:
        return 0


def compact(text, limit):
    text = " ".join((text or "").replace("\t", " ").replace("\n", " ").split())
    if limit and len(text) > limit:
        return text[: limit - 3] + "..."
    return text


def read_tsv(path):
    with Path(path).open(newline="", errors="replace") as handle:
        yield from csv.DictReader(handle, delimiter="\t")


def load_by(path, key):
    rows = {}
    if not path or not Path(path).exists():
        return rows
    for row in read_tsv(path):
        value = row.get(key, "")
        if value:
            rows[value] = row
    return rows


def load_terminal_coverage(path):
    by_start = defaultdict(lambda: {"blocks": 0, "events": 0, "entries": Counter()})
    if not path or not Path(path).exists():
        return by_start
    for row in read_tsv(path):
        if row.get("edge_kind") != "covered_synthetic_fallthrough":
            continue
        start = row.get("target_vm_ip", "")
        if not start:
            continue
        by_start[start]["blocks"] += 1
        by_start[start]["events"] += int(row.get("events") or 0)
        entry = row.get("target_entry", "")
        if entry:
            by_start[start]["entries"][entry] += int(row.get("events") or 0)
    return by_start


def status_kind(status):
    if status.startswith("hidden_span"):
        return "hidden_span"
    if status.startswith("frontier_span"):
        return "frontier_span"
    if status.startswith("target_footprint"):
        return "target_footprint"
    return "other"


def shape_len(row):
    shape = row.get("shape", "")
    if not shape or shape in {"-", "sampled"}:
        return 0
    return len(shape)


def operand_len(row, prefix):
    text = row.get(prefix, "")
    if not text:
        return 0
    best = 0
    for item in text.split(","):
        item = item.strip()
        if not item:
            continue
        if "=" in item:
            item = item.rsplit("=", 1)[1]
        try:
            value = int(item, 16)
        except ValueError:
            continue
        best = max(best, value)
    return best


def source_footprint(entry, transition):
    row = transition.get(entry, {})
    exact_len = shape_len(row)
    sampled_len = operand_len(row, "sampled_operand_lens")
    long_len = operand_len(row, "long_branch_operand_lens")
    if exact_len:
        return exact_len, "exact_shape"
    if sampled_len:
        return sampled_len, "sampled_operand"
    if long_len:
        return long_len, "long_branch_operand"
    return 0, ""


def semantic_gap_class(kind, entry, span_len, transition, microcode):
    tr = transition.get(entry, {})
    mc = microcode.get(entry, {})
    footprint, source = source_footprint(entry, transition)
    klass = mc.get("class", "")
    if kind == "target_footprint":
        return "operand_footprint_only", footprint, source, span_len - footprint if footprint else span_len
    if klass == "target_only":
        return "target_only_span", footprint, source, span_len - footprint if footprint else span_len
    if footprint and footprint == span_len:
        return "single_known_footprint", footprint, source, 0
    if footprint and footprint < span_len:
        return "known_prefix_plus_tail", footprint, source, span_len - footprint
    if footprint and footprint > span_len:
        return "partial_prefix", footprint, source, span_len - footprint
    if tr.get("observation", "").startswith("sampled") or klass == "sampled_only":
        return "sampled_source_span", footprint, source, span_len
    return "unclassified_span", footprint, source, span_len


def byte_layout(byte_counter, max_items):
    if not byte_counter:
        return ""
    byte_values = []
    for hex_text, count in byte_counter.items():
        try:
            data = bytes.fromhex(hex_text)
        except ValueError:
            continue
        byte_values.append((data, count))
    if not byte_values:
        return ""
    max_len = max(len(data) for data, _count in byte_values)
    pieces = []
    for idx in range(max_len):
        values = Counter()
        missing = 0
        for data, count in byte_values:
            if idx >= len(data):
                missing += count
            else:
                values[data[idx]] += count
        if missing:
            pieces.append(f"b{idx}=missing:{missing}")
        elif len(values) == 1:
            value = next(iter(values))
            pieces.append(f"b{idx}=0x{value:02x}")
        else:
            top = ",".join(f"0x{value:02x}:{count}" for value, count in values.most_common(3))
            pieces.append(f"b{idx}=enum{min(3, len(values))}({top})")
        if len(pieces) >= max_items:
            omitted = max_len - idx - 1
            if omitted:
                pieces.append(f"...{omitted} omitted")
            break
    return ";".join(pieces)


def make_groups(args):
    transition = load_by(args.transition_model, "entry")
    microcode = load_by(args.microcode, "entry")
    terminal = load_terminal_coverage(args.block_edges)
    groups = {}

    for row in read_tsv(args.trace):
        status = row.get("byte_status", "")
        kind = status_kind(status)
        if kind == "other":
            continue
        source_entry = row.get("source_entry", "")
        target_entry = row.get("target_entry", "")
        span_len = parse_len_status(status)
        if not span_len:
            try:
                span_len = parse_hex(row["end_vm_ip"]) - parse_hex(row["start_vm_ip"])
            except (KeyError, ValueError):
                span_len = 0
        gap_class, footprint, footprint_source, unresolved = semantic_gap_class(
            kind, source_entry, span_len, transition, microcode
        )
        key = (kind, status, source_entry, target_entry, gap_class, footprint_source, str(footprint), str(unresolved))
        group = groups.setdefault(key, {
            "events": 0,
            "starts": set(),
            "ends": set(),
            "deltas": Counter(),
            "bytes": Counter(),
            "targets": Counter(),
            "terminal_starts": set(),
            "terminal_blocks": 0,
            "terminal_events": 0,
            "terminal_entries": Counter(),
        })
        group["events"] += 1
        group["starts"].add(row.get("start_vm_ip", ""))
        group["ends"].add(row.get("end_vm_ip", ""))
        group["deltas"][row.get("delta", "")] += 1
        if target_entry:
            group["targets"][target_entry] += 1
        data = row.get("bytes", "")
        if data:
            group["bytes"][data] += 1
        start_vm_ip = row.get("start_vm_ip", "")
        term = terminal.get(start_vm_ip, {})
        if term:
            if start_vm_ip not in group["terminal_starts"]:
                group["terminal_starts"].add(start_vm_ip)
                group["terminal_blocks"] += term.get("blocks", 0)
                group["terminal_events"] += term.get("events", 0)
                group["terminal_entries"].update(term.get("entries", Counter()))

    rows = []
    for key, group in groups.items():
        kind, status, source_entry, target_entry, gap_class, footprint_source, footprint, unresolved = key
        tr = transition.get(source_entry, {})
        mc = microcode.get(source_entry, {})
        target_mc = microcode.get(target_entry, {})
        top_bytes = []
        for data, count in group["bytes"].most_common(args.max_items):
            digest = hashlib.sha256(bytes.fromhex(data)).hexdigest()[:12] if data else ""
            top_bytes.append(f"{digest}:{count}:{data[:args.preview_hex]}")
        rows.append({
            "kind": kind,
            "byte_status": status,
            "source_entry": source_entry,
            "source_class": mc.get("class", ""),
            "source_observation": tr.get("observation", ""),
            "source_delta": tr.get("delta", ""),
            "source_shape": tr.get("shape", ""),
            "target_entry": target_entry,
            "target_class": target_mc.get("class", ""),
            "semantic_gap_class": gap_class,
            "span_len": f"0x{parse_len_status(status):x}" if parse_len_status(status) else "",
            "known_footprint_len": f"0x{int(footprint):x}" if footprint else "",
            "known_footprint_source": footprint_source,
            "unresolved_tail_len": f"0x{int(unresolved):x}" if int(unresolved) >= 0 else f"-0x{abs(int(unresolved)):x}",
            "events": str(group["events"]),
            "unique_start_ips": str(len(group["starts"])),
            "unique_end_ips": str(len(group["ends"])),
            "byte_variants": str(len(group["bytes"])),
            "terminal_blocks": str(group["terminal_blocks"]),
            "terminal_events": str(group["terminal_events"]),
            "top_targets": ",".join(f"{key}:{value}" for key, value in group["targets"].most_common(args.max_items)),
            "terminal_target_entries": ",".join(
                f"{key}:{value}" for key, value in group["terminal_entries"].most_common(args.max_items)
            ),
            "top_deltas": ",".join(f"{key}:{value}" for key, value in group["deltas"].most_common(args.max_items)),
            "byte_layout": byte_layout(group["bytes"], args.max_layout_items),
            "top_byte_variants": ";".join(top_bytes),
            "source_state_ir": compact(mc.get("state_ir", ""), args.max_expr_len),
            "source_dispatch_ir": compact(mc.get("dispatch_slot_ir", ""), args.max_expr_len),
            "source_ip_ir": compact(mc.get("ip_advance_ir", ""), args.max_expr_len),
            "source_long_ir": compact(mc.get("long_branch_ir", ""), args.max_expr_len),
            "source_sampled_ir": compact(mc.get("sampled_operand_ir", ""), args.max_expr_len),
        })
    rows.sort(key=lambda row: (-int(row["events"]), -int(row["terminal_events"]), row["kind"], row["source_entry"]))
    return rows


def emit_tsv(rows):
    fields = [
        "kind",
        "byte_status",
        "source_entry",
        "source_class",
        "source_observation",
        "source_delta",
        "source_shape",
        "target_entry",
        "target_class",
        "semantic_gap_class",
        "span_len",
        "known_footprint_len",
        "known_footprint_source",
        "unresolved_tail_len",
        "events",
        "unique_start_ips",
        "unique_end_ips",
        "byte_variants",
        "terminal_blocks",
        "terminal_events",
        "top_targets",
        "terminal_target_entries",
        "top_deltas",
        "byte_layout",
        "top_byte_variants",
        "source_state_ir",
        "source_dispatch_ir",
        "source_ip_ir",
        "source_long_ir",
        "source_sampled_ir",
    ]
    writer = csv.DictWriter(sys.stdout, fieldnames=fields, delimiter="\t", lineterminator="\n")
    writer.writeheader()
    for row in rows:
        writer.writerow(row)


def emit_markdown(rows, args):
    print("# VM Synthetic Span Catalog\n")
    print(f"Top {min(args.limit, len(rows))} synthetic span groups by event count.\n")
    print("| Events | Term Events | Kind | Status | Source | Target | Class | Known | Tail | Bytes |")
    print("| ---: | ---: | --- | --- | ---: | ---: | --- | --- | --- | --- |")
    for row in rows[: args.limit]:
        known = row["known_footprint_len"] or "-"
        if row["known_footprint_source"]:
            known += f" {row['known_footprint_source']}"
        print(
            f"| {row['events']} | {row['terminal_events']} | `{row['kind']}` | `{row['byte_status']}` | "
            f"{row['source_entry']} `{row['source_class']}` | {row['target_entry']} `{row['target_class']}` | "
            f"`{row['semantic_gap_class']}` | `{known}` | `{row['unresolved_tail_len']}` | "
            f"`{row['top_byte_variants'][:args.max_markdown_bytes]}` |"
        )

    print("\n## By Semantic Gap Class\n")
    by_class = Counter()
    by_class_events = Counter()
    by_class_terminal = Counter()
    for row in rows:
        key = row["semantic_gap_class"]
        by_class[key] += 1
        by_class_events[key] += int(row["events"])
        by_class_terminal[key] += int(row["terminal_events"])
    print("| Class | Groups | Events | Terminal Events |")
    print("| --- | ---: | ---: | ---: |")
    for key, count in by_class.most_common():
        print(f"| `{key}` | {count} | {by_class_events[key]} | {by_class_terminal[key]} |")


def main():
    parser = argparse.ArgumentParser(
        description="Catalog byte-covered synthetic VM spans that still lack direct semantic IR rows."
    )
    parser.add_argument(
        "--trace",
        default="dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill_footprintfill.tsv",
    )
    parser.add_argument("--transition-model", default="dumps/vmtail-wide-1m-w16/vm_transition_model.tsv")
    parser.add_argument("--microcode", default="dumps/vmtail-wide-1m-w16/vm_microcode_catalog.tsv")
    parser.add_argument("--block-edges", default="dumps/vmtail-wide-1m-w16/vm_bytecode_basic_block_edges.tsv")
    parser.add_argument("--max-items", type=int, default=6)
    parser.add_argument("--max-layout-items", type=int, default=16)
    parser.add_argument("--preview-hex", type=int, default=48)
    parser.add_argument("--max-expr-len", type=int, default=180)
    parser.add_argument("--markdown", action="store_true")
    parser.add_argument("--limit", type=int, default=40)
    parser.add_argument("--max-markdown-bytes", type=int, default=90)
    args = parser.parse_args()

    rows = make_groups(args)
    if args.markdown:
        emit_markdown(rows, args)
    else:
        emit_tsv(rows)

    events = sum(int(row["events"]) for row in rows)
    terminal_events = sum(int(row["terminal_events"]) for row in rows)
    classes = Counter(row["semantic_gap_class"] for row in rows)
    print(
        "synthetic_span_groups="
        f"{len(rows)} events={events} terminal_events={terminal_events} classes="
        + ",".join(f"{key}:{value}" for key, value in classes.most_common()),
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
