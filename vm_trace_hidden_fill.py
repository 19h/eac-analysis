#!/usr/bin/env python3
import argparse
import csv
import sys
from pathlib import Path


def fmt_delta(value):
    sign = "+" if value >= 0 else "-"
    return f"{sign}0x{abs(value):x}"


def word_at(data, index):
    start = index * 2
    chunk = data[start:start + 2]
    if len(chunk) != 2:
        return ""
    return f"0x{int.from_bytes(chunk, 'little'):x}"


def hidden_candidate(prev, row, max_delta):
    if prev.get("frame") != row.get("frame"):
        return None
    if prev.get("target_entry") == row.get("source_entry"):
        return None
    try:
        start = int(prev["end_vm_ip"], 16)
        end = int(row["start_vm_ip"], 16)
    except (KeyError, ValueError):
        return None
    delta = end - start
    if delta <= 0 or delta > max_delta:
        return None
    return start, end, delta


def synthetic_row(prev, row, start, end, delta, data, fieldnames):
    out = {field: "" for field in fieldnames}
    out.update({
        "seq": f"{prev.get('seq', '')}.h",
        "frame": prev.get("frame", ""),
        "source_entry": prev.get("target_entry", ""),
        "source_target": prev.get("target", ""),
        "start_vm_ip": f"0x{start:x}",
        "end_vm_ip": f"0x{end:x}",
        "delta": fmt_delta(delta),
        "kind": "hidden",
        "site": "adjacent_unhooked_span",
        "target_entry": row.get("source_entry", ""),
        "target": row.get("source_target", ""),
        "bytes": data.hex(),
        "byte_status": f"hidden_span_of_{delta}",
    })
    for idx in range(6):
        key = f"w{idx}"
        if key in out:
            out[key] = word_at(data, idx)
    return out


def main():
    parser = argparse.ArgumentParser(
        description="Insert file-backed synthetic trace rows for adjacent hidden VM transition spans."
    )
    parser.add_argument("trace", nargs="?", default="dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv")
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument("--max-delta", type=lambda value: int(value, 0), default=0x400)
    args = parser.parse_args()

    eac = Path(args.eac).read_bytes()
    rows = 0
    inserted = 0
    inserted_bytes = 0
    previous = None

    with Path(args.trace).open(newline="", errors="replace") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        fieldnames = list(reader.fieldnames or [])
        writer = csv.DictWriter(sys.stdout, fieldnames=fieldnames, delimiter="\t", lineterminator="\n")
        writer.writeheader()

        for row in reader:
            rows += 1
            if previous is None:
                previous = row
                continue

            writer.writerow(previous)
            candidate = hidden_candidate(previous, row, args.max_delta)
            if candidate is not None:
                start, end, delta = candidate
                data = eac[start:end]
                if len(data) == delta:
                    writer.writerow(synthetic_row(previous, row, start, end, delta, data, fieldnames))
                    inserted += 1
                    inserted_bytes += delta
            previous = row

        if previous is not None:
            writer.writerow(previous)

    print(f"# input_rows={rows}", file=sys.stderr)
    print(f"# inserted_hidden_rows={inserted}", file=sys.stderr)
    print(f"# inserted_hidden_event_bytes=0x{inserted_bytes:x}", file=sys.stderr)


if __name__ == "__main__":
    main()
