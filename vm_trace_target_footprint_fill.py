#!/usr/bin/env python3
import argparse
import csv
import sys
from collections import Counter
from pathlib import Path


def parse_signed_hex(text):
    if text.startswith("+0x"):
        return int(text[1:], 16)
    if text.startswith("-0x"):
        return -int(text[3:], 16)
    return int(text, 0)


def fmt_delta(value):
    sign = "+" if value >= 0 else "-"
    return f"{sign}0x{abs(value):x}"


def parse_hex_int(text):
    if not text:
        return 0
    return int(text, 0)


def word_at(data, index):
    start = index * 2
    chunk = data[start:start + 2]
    if len(chunk) != 2:
        return ""
    return f"0x{int.from_bytes(chunk, 'little'):x}"


def load_segments(path):
    segments = []
    with Path(path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            segments.append((int(row["start"], 16), int(row["end"], 16)))
    return sorted(segments)


def find_segment(segments, offset):
    lo = 0
    hi = len(segments)
    while lo < hi:
        mid = (lo + hi) // 2
        if segments[mid][1] <= offset:
            lo = mid + 1
        else:
            hi = mid
    if lo < len(segments):
        start, end = segments[lo]
        if start <= offset < end:
            return start, end
    return None


def add_length(lengths, entry, length, source):
    if not entry or length <= 0:
        return
    current = lengths.get(entry)
    if current is None or length > current[0]:
        lengths[entry] = (length, source)


def load_exact_shape_lengths(path, lengths):
    if not path or not Path(path).exists():
        return
    with Path(path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            shape = row.get("shape", "")
            if not shape or shape == "sampled":
                continue
            add_length(lengths, row.get("entry", ""), len(shape), "exact_shape")


def load_catalog_lengths(path, lengths, source):
    if not path or not Path(path).exists():
        return
    with Path(path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            add_length(lengths, row.get("source_entry", ""), parse_hex_int(row.get("operand_min_len", "")), source)


def footprint_candidate(row, segments, lengths):
    if row.get("byte_status") != "exact":
        return None
    try:
        delta = parse_signed_hex(row["delta"])
        start = int(row["end_vm_ip"], 16)
    except (KeyError, ValueError):
        return None
    if delta <= 0 or find_segment(segments, start) is not None:
        return None
    target_entry = row.get("target_entry", "")
    if target_entry not in lengths:
        return None
    length, source = lengths[target_entry]
    return start, start + length, length, source


def synthetic_row(row, start, end, delta, source, data, fieldnames):
    out = {field: "" for field in fieldnames}
    out.update({
        "seq": f"{row.get('seq', '')}.p",
        "frame": row.get("frame", ""),
        "source_entry": row.get("target_entry", ""),
        "source_target": row.get("target", ""),
        "start_vm_ip": f"0x{start:x}",
        "end_vm_ip": f"0x{end:x}",
        "delta": fmt_delta(delta),
        "kind": "footprint",
        "site": source,
        "bytes": data.hex(),
        "byte_status": f"target_footprint_of_{delta}",
    })
    for idx in range(16):
        key = f"w{idx}"
        if key in out:
            out[key] = word_at(data, idx)
    return out


def main():
    parser = argparse.ArgumentParser(
        description="Insert file-backed target-handler byte footprints at uncovered exact destinations."
    )
    parser.add_argument(
        "trace",
        nargs="?",
        default="dumps/vmtail-wide-1m-w16/vm_instruction_trace_filefill_hiddenfill_frontierfill.tsv",
    )
    parser.add_argument(
        "--segments",
        default="dumps/vmtail-wide-1m-w16/vm_bytecode_segments_filefill_hiddenfill_frontierfill_sampled.tsv",
    )
    parser.add_argument("--handler-semantics", default="dumps/vmtail-wide-1m-w16/vm_handler_semantics.tsv")
    parser.add_argument("--long-branches", default="dumps/vmtail-wide-1m-w16/vm_long_branch_catalog.tsv")
    parser.add_argument("--sampled-operands", default="dumps/vmtail-wide-1m-w16/vm_sampled_operand_catalog.tsv")
    parser.add_argument("--eac", default="eac.elf")
    args = parser.parse_args()

    eac = Path(args.eac).read_bytes()
    segments = load_segments(args.segments)
    lengths = {}
    load_exact_shape_lengths(args.handler_semantics, lengths)
    load_catalog_lengths(args.long_branches, lengths, "long_branch_operand")
    load_catalog_lengths(args.sampled_operands, lengths, "sampled_operand")

    rows = 0
    inserted = 0
    inserted_bytes = 0
    inserted_sources = Counter()

    with Path(args.trace).open(newline="", errors="replace") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        fieldnames = list(reader.fieldnames or [])
        writer = csv.DictWriter(sys.stdout, fieldnames=fieldnames, delimiter="\t", lineterminator="\n")
        writer.writeheader()

        for row in reader:
            rows += 1
            writer.writerow(row)
            candidate = footprint_candidate(row, segments, lengths)
            if candidate is None:
                continue
            start, end, delta, source = candidate
            data = eac[start:end]
            if len(data) != delta:
                continue
            writer.writerow(synthetic_row(row, start, end, delta, source, data, fieldnames))
            inserted += 1
            inserted_bytes += delta
            inserted_sources[source] += 1

    print(f"# input_rows={rows}", file=sys.stderr)
    print(f"# inserted_footprint_rows={inserted}", file=sys.stderr)
    print(f"# inserted_footprint_event_bytes=0x{inserted_bytes:x}", file=sys.stderr)
    print(
        "# inserted_footprint_sources="
        + ",".join(f"{key}:{value}" for key, value in inserted_sources.most_common()),
        file=sys.stderr,
    )


if __name__ == "__main__":
    main()
