TRACE_MARKERS = ("[VMTAIL]", "[DISPATCH]")


def strip_to_trace_marker(line, markers=TRACE_MARKERS):
    """Return the substring beginning at the first trace marker, if present."""
    positions = [pos for marker in markers for pos in [line.find(marker)] if pos >= 0]
    if not positions:
        return line
    return line[min(positions):]
