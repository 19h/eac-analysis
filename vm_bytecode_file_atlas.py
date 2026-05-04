#!/usr/bin/env python3
import argparse
import csv
import hashlib
import sys
from pathlib import Path


def load_segments(path):
    segments = []
    with Path(path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            segments.append({
                "segment": row.get("segment", ""),
                "start": int(row["start"], 16),
                "end": int(row["end"], 16),
                "size": int(row["size"], 16),
                "events": int(row.get("events", "0") or 0),
                "unique_start_ips": int(row.get("unique_start_ips", "0") or 0),
            })
    return sorted(segments, key=lambda row: (row["start"], row["end"]))


def verify_instructions(eac, instruction_path):
    if not instruction_path:
        return 0, 0
    checked = 0
    mismatches = 0
    with Path(instruction_path).open(newline="", errors="replace") as handle:
        for row in csv.DictReader(handle, delimiter="\t"):
            if row.get("byte_status") != "exact":
                continue
            start = int(row["start_vm_ip"], 16)
            data = bytes.fromhex(row["bytes"])
            checked += 1
            if eac[start:start + len(data)] != data:
                mismatches += 1
                if mismatches <= 8:
                    print(
                        f"# mismatch start=0x{start:x} expected={data.hex()} "
                        f"file={eac[start:start + len(data)].hex()}",
                        file=sys.stderr,
                    )
    return checked, mismatches


def build_atlas(segments, max_gap):
    atlases = []
    current = None
    for segment in segments:
        if current is None:
            current = {
                "start": segment["start"],
                "end": segment["end"],
                "segments": [segment],
                "gaps": [],
            }
            continue
        gap = segment["start"] - current["end"]
        if 0 <= gap <= max_gap:
            if gap:
                current["gaps"].append((current["end"], segment["start"], gap))
            current["segments"].append(segment)
            current["end"] = max(current["end"], segment["end"])
        else:
            atlases.append(current)
            current = {
                "start": segment["start"],
                "end": segment["end"],
                "segments": [segment],
                "gaps": [],
            }
    if current is not None:
        atlases.append(current)
    return atlases


def fmt_gaps(gaps, max_items):
    parts = [f"0x{start:x}-0x{end:x}:0x{size:x}" for start, end, size in gaps[:max_items]]
    if len(gaps) > max_items:
        parts.append(f"...+{len(gaps) - max_items}")
    return ",".join(parts)


def main():
    parser = argparse.ArgumentParser(
        description="Build a file-backed VM bytecode atlas from observed recovered segments."
    )
    parser.add_argument(
        "segments",
        nargs="?",
        default="dumps/vmtail-wide-1m-w16/vm_bytecode_segments_sampled.tsv",
    )
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument(
        "--instructions",
        default="dumps/vmtail-wide-1m-w16/vm_instruction_unique.tsv",
        help="exact instruction table to verify against the ELF image",
    )
    parser.add_argument("--max-gap", type=lambda value: int(value, 0), default=0x20)
    parser.add_argument("--max-items", type=int, default=8)
    args = parser.parse_args()

    eac = Path(args.eac).read_bytes()
    checked, mismatches = verify_instructions(eac, args.instructions)
    print(f"# verified_exact_instruction_bytes={checked}", file=sys.stderr)
    print(f"# file_byte_mismatches={mismatches}", file=sys.stderr)

    segments = load_segments(args.segments)
    atlases = build_atlas(segments, args.max_gap)
    print(
        "atlas\tstart\tend\tsize\tobserved_segments\tobserved_bytes\t"
        "inferred_gap_bytes\tmax_gap\tsegment_ids\tevents\tunique_start_ips\t"
        "sha256\tgaps\thex_prefix\thex_suffix"
    )
    for idx, atlas in enumerate(atlases):
        start = atlas["start"]
        end = atlas["end"]
        data = eac[start:end]
        observed_bytes = sum(segment["size"] for segment in atlas["segments"])
        inferred_gap_bytes = sum(size for _, _, size in atlas["gaps"])
        segment_ids = ",".join(segment["segment"] for segment in atlas["segments"][:args.max_items])
        if len(atlas["segments"]) > args.max_items:
            segment_ids += f",...+{len(atlas['segments']) - args.max_items}"
        events = sum(segment["events"] for segment in atlas["segments"])
        unique_start_ips = sum(segment["unique_start_ips"] for segment in atlas["segments"])
        print(
            f"{idx}\t0x{start:x}\t0x{end:x}\t0x{end - start:x}\t"
            f"{len(atlas['segments'])}\t0x{observed_bytes:x}\t"
            f"0x{inferred_gap_bytes:x}\t0x{args.max_gap:x}\t{segment_ids}\t"
            f"{events}\t{unique_start_ips}\t{hashlib.sha256(data).hexdigest()}\t"
            f"{fmt_gaps(atlas['gaps'], args.max_items)}\t"
            f"{data[:96].hex()}\t{data[-96:].hex()}"
        )


if __name__ == "__main__":
    main()
