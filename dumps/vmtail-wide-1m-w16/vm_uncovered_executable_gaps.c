/*
 * Exact byte carriers for executable coverage gaps.
 * ELF: eac.elf
 * Coverage: dumps/vmtail-wide-1m-w16/vm_native_executable_coverage_audit.tsv
 * Section: all
 * Gaps: 4
 * Bytes: 7
 *
 * These are not decompiled semantics. They are lossless C evidence for
 * executable bytes that are not yet represented by RetDec/manual lifts.
 */
#include <stddef.h>
#include <stdint.h>

typedef struct VMUncoveredExecutableGap {
    const char *section;
    uint64_t start;
    uint64_t stop;
    uint64_t size;
    const uint8_t *bytes;
} VMUncoveredExecutableGap;

static const uint8_t vm_uncovered_executable_gap_0000_bytes[2] = {
    0x0f, 0x32,
};

static const uint8_t vm_uncovered_executable_gap_0001_bytes[2] = {
    0xd9, 0xdb,
};

static const uint8_t vm_uncovered_executable_gap_0002_bytes[2] = {
    0x0f, 0x07,
};

static const uint8_t vm_uncovered_executable_gap_0003_bytes[1] = {
    0xe5,
};

static const VMUncoveredExecutableGap vm_uncovered_executable_gaps[] = {
    { ".text", 0xd73dfull, 0xd73e1ull, 2ull, vm_uncovered_executable_gap_0000_bytes },
    { ".text", 0x251dc0ull, 0x251dc2ull, 2ull, vm_uncovered_executable_gap_0001_bytes },
    { ".text", 0x33202bull, 0x33202dull, 2ull, vm_uncovered_executable_gap_0002_bytes },
    { ".text", 0xdae08ull, 0xdae09ull, 1ull, vm_uncovered_executable_gap_0003_bytes },
};

enum { VM_UNCOVERED_EXECUTABLE_GAP_COUNT = 4 };
enum { VM_UNCOVERED_EXECUTABLE_GAP_BYTES = 7 };
_Static_assert(sizeof(vm_uncovered_executable_gaps) / sizeof(vm_uncovered_executable_gaps[0]) == VM_UNCOVERED_EXECUTABLE_GAP_COUNT, "gap table count mismatch");

const VMUncoveredExecutableGap *vm_uncovered_executable_gap_at(size_t index) {
    return index < VM_UNCOVERED_EXECUTABLE_GAP_COUNT ? &vm_uncovered_executable_gaps[index] : 0;
}

size_t vm_uncovered_executable_gap_count(void) {
    return VM_UNCOVERED_EXECUTABLE_GAP_COUNT;
}
