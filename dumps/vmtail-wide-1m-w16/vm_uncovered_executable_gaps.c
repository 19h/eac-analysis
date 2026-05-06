/*
 * Exact byte carriers for executable coverage gaps.
 * ELF: eac.elf
 * Coverage: dumps/vmtail-wide-1m-w16/vm_native_executable_coverage_audit.tsv
 * Section: all
 * Gaps: 0
 * Bytes: 0
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

static const VMUncoveredExecutableGap vm_uncovered_executable_gaps[] = {
};

enum { VM_UNCOVERED_EXECUTABLE_GAP_COUNT = 0 };
enum { VM_UNCOVERED_EXECUTABLE_GAP_BYTES = 0 };
_Static_assert(sizeof(vm_uncovered_executable_gaps) / sizeof(vm_uncovered_executable_gaps[0]) == VM_UNCOVERED_EXECUTABLE_GAP_COUNT, "gap table count mismatch");

const VMUncoveredExecutableGap *vm_uncovered_executable_gap_at(size_t index) {
    return index < VM_UNCOVERED_EXECUTABLE_GAP_COUNT ? &vm_uncovered_executable_gaps[index] : 0;
}

size_t vm_uncovered_executable_gap_count(void) {
    return VM_UNCOVERED_EXECUTABLE_GAP_COUNT;
}
