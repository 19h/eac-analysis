/*
 * Native RetDec gap queue.
 * Ranks native function skeletons that still lack semantic C sidecar coverage.
 */
#include <stdint.h>

typedef struct VMNativeRetdecGapQueueRow {
    uint32_t rank;
    uint64_t offset;
    uint64_t end;
    uint32_t bytes;
    uint32_t semantic_covered_bytes;
    uint32_t semantic_uncovered_bytes;
    uint32_t coverage_x100;
    const char *kind;
    const char *name;
    uint32_t nbbs;
    uint32_t ninstrs;
    uint32_t outdegree;
    const char *priority_class;
    const char *next_action;
    const char *selected_range;
} VMNativeRetdecGapQueueRow;

static const VMNativeRetdecGapQueueRow k_vm_native_retdec_gap_queue[] = {
    { 1u, 0x6b7a0ull, 0x6b8bbull, 283u, 267u, 16u, 9434u, "r2_discovered", "fcn.0006b7a0", 15u, 78u, 8u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x6b7a0-0x6b8bb" },
    { 2u, 0x4b3910ull, 0x4b3cceull, 958u, 942u, 16u, 9832u, "r2_discovered", "fcn.004b3910", 40u, 220u, 35u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x4b3910-0x4b3cce" },
    { 3u, 0x3e19cull, 0x3f89full, 5891u, 4644u, 1247u, 7883u, "r2_discovered", "fcn.0003e19c", 468u, 1574u, 1u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x3e19c-0x3f89f" },
};

static unsigned vm_native_retdec_gap_queue_count(void) {
    return (unsigned)(sizeof(k_vm_native_retdec_gap_queue) / sizeof(k_vm_native_retdec_gap_queue[0]));
}

_Static_assert(sizeof(k_vm_native_retdec_gap_queue) / sizeof(k_vm_native_retdec_gap_queue[0]) == 3u,
               "native RetDec gap queue count changed");
