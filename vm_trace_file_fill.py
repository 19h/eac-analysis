#!/usr/bin/env python3
import argparse
import csv
import re
import sys
from pathlib import Path


PREFIX_RE = re.compile(r"^prefix_(\d+)_of_(\d+)$")


def parse_delta(delta):
    if delta.startswith("+0x"):
        return int(delta[1:], 16)
    if delta.startswith("-0x"):
        return -int(delta[3:], 16)
    return int(delta, 0)


def main():
    parser = argparse.ArgumentParser(
        description="Promote positive prefix-only VM trace rows to file-backed exact bytes."
    )
    parser.add_argument(
        "trace",
        nargs="?",
        default="dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv",
    )
    parser.add_argument("--eac", default="eac.elf")
    parser.add_argument(
        "--status",
        default="file_exact",
        help="byte_status to use for promoted prefix rows",
    )
    args = parser.parse_args()

    eac = Path(args.eac).read_bytes()
    promoted = 0
    verified_exact = 0
    exact_mismatches = 0
    rows = 0

    with Path(args.trace).open(newline="", errors="replace") as handle:
        reader = csv.DictReader(handle, delimiter="\t")
        fieldnames = list(reader.fieldnames or [])
        writer = csv.DictWriter(sys.stdout, fieldnames=fieldnames, delimiter="\t", lineterminator="\n")
        writer.writeheader()
        for row in reader:
            rows += 1
            start = int(row["start_vm_ip"], 16)
            delta = parse_delta(row["delta"])
            status = row["byte_status"]
            if status == "exact":
                data = bytes.fromhex(row["bytes"])
                verified_exact += 1
                if eac[start:start + len(data)] != data:
                    exact_mismatches += 1
            elif PREFIX_RE.match(status) and delta > 0:
                end = start + delta
                if end <= len(eac):
                    row["bytes"] = eac[start:end].hex()
                    row["byte_status"] = args.status
                    promoted += 1
            writer.writerow(row)

    print(f"# rows={rows}", file=sys.stderr)
    print(f"# verified_exact_rows={verified_exact}", file=sys.stderr)
    print(f"# exact_mismatches={exact_mismatches}", file=sys.stderr)
    print(f"# promoted_prefix_rows={promoted}", file=sys.stderr)


if __name__ == "__main__":
    main()
