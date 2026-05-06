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
    { 2u, 0x57cf40ull, 0x57d4d7ull, 1431u, 368u, 1063u, 2571u, "r2_discovered", "fcn.0057cf40", 99u, 399u, 29u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x57cf40-0x57d4d7" },
    { 3u, 0x4d1510ull, 0x4d19b5ull, 1189u, 608u, 581u, 5113u, "r2_discovered", "fcn.004d1510", 50u, 294u, 15u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x4d1510-0x4d19b5" },
    { 4u, 0x4b3910ull, 0x4b3cceull, 958u, 480u, 478u, 5010u, "r2_discovered", "fcn.004b3910", 40u, 220u, 35u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x4b3910-0x4b3cce" },
    { 5u, 0x415aeull, 0x418c6ull, 792u, 610u, 182u, 7702u, "r2_discovered", "fcn.000415ae", 71u, 235u, 2u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x415ae-0x418c6" },
    { 6u, 0x4a4be0ull, 0x4a6a5eull, 7806u, 0u, 7806u, 0u, "r2_discovered", "fcn.004a4be0", 324u, 1681u, 95u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4a4be0-0x4a6a5e" },
    { 7u, 0x3e19cull, 0x3f89full, 5891u, 207u, 5684u, 351u, "r2_discovered", "fcn.0003e19c", 468u, 1574u, 1u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x3e19c-0x3f89f" },
};

static unsigned vm_native_retdec_gap_queue_count(void) {
    return (unsigned)(sizeof(k_vm_native_retdec_gap_queue) / sizeof(k_vm_native_retdec_gap_queue[0]));
}

_Static_assert(sizeof(k_vm_native_retdec_gap_queue) / sizeof(k_vm_native_retdec_gap_queue[0]) == 7u,
               "native RetDec gap queue count changed");
