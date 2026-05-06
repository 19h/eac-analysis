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
    { 2u, 0x57cf40ull, 0x57d4d7ull, 1431u, 0u, 1431u, 0u, "r2_discovered", "fcn.0057cf40", 99u, 399u, 29u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x57cf40-0x57d4d7" },
    { 3u, 0x4d1510ull, 0x4d19b5ull, 1189u, 0u, 1189u, 0u, "r2_discovered", "fcn.004d1510", 50u, 294u, 15u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x4d1510-0x4d19b5" },
    { 4u, 0x4b3910ull, 0x4b3cceull, 958u, 0u, 958u, 0u, "r2_discovered", "fcn.004b3910", 40u, 220u, 35u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x4b3910-0x4b3cce" },
    { 5u, 0x4aa830ull, 0x4aab60ull, 816u, 416u, 400u, 5098u, "r2_discovered", "fcn.004aa830", 32u, 194u, 13u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x4aa830-0x4aab60" },
    { 6u, 0x415aeull, 0x418c6ull, 792u, 402u, 390u, 5075u, "r2_discovered", "fcn.000415ae", 71u, 235u, 2u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x415ae-0x418c6" },
    { 7u, 0x554b00ull, 0x554de0ull, 736u, 368u, 368u, 5000u, "r2_discovered", "fcn.00554b00", 37u, 197u, 7u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x554b00-0x554de0" },
    { 8u, 0x57c770ull, 0x57c987ull, 535u, 416u, 119u, 7775u, "r2_discovered", "fcn.0057c770", 36u, 146u, 5u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x57c770-0x57c987" },
    { 9u, 0x4926daull, 0x49295cull, 642u, 641u, 1u, 9984u, "r2_discovered", "fcn.004926da", 27u, 153u, 12u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x4926da-0x49295c" },
    { 10u, 0x4a4be0ull, 0x4a6a5eull, 7806u, 0u, 7806u, 0u, "r2_discovered", "fcn.004a4be0", 324u, 1681u, 95u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4a4be0-0x4a6a5e" },
    { 11u, 0x3e19cull, 0x3f89full, 5891u, 207u, 5684u, 351u, "r2_discovered", "fcn.0003e19c", 468u, 1574u, 1u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x3e19c-0x3f89f" },
};

static unsigned vm_native_retdec_gap_queue_count(void) {
    return (unsigned)(sizeof(k_vm_native_retdec_gap_queue) / sizeof(k_vm_native_retdec_gap_queue[0]));
}

_Static_assert(sizeof(k_vm_native_retdec_gap_queue) / sizeof(k_vm_native_retdec_gap_queue[0]) == 11u,
               "native RetDec gap queue count changed");
