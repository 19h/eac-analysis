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
    { 1u, 0x62b92ull, 0x62d6dull, 475u, 0u, 475u, 0u, "r2_discovered", "fcn.00062b92", 19u, 123u, 9u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x62b92-0x62d6d" },
    { 2u, 0x4b1ca0ull, 0x4b1e79ull, 473u, 0u, 473u, 0u, "r2_discovered", "fcn.004b1ca0", 30u, 135u, 11u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x4b1ca0-0x4b1e79" },
    { 3u, 0x4bfaf0ull, 0x4bfcc3ull, 467u, 0u, 467u, 0u, "r2_discovered", "fcn.004bfaf0", 28u, 128u, 6u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x4bfaf0-0x4bfcc3" },
    { 4u, 0x4ad2a0ull, 0x4ad440ull, 416u, 0u, 416u, 0u, "r2_discovered", "fcn.004ad2a0", 27u, 119u, 5u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x4ad2a0-0x4ad440" },
    { 5u, 0x57c4c0ull, 0x57c64full, 399u, 0u, 399u, 0u, "r2_discovered", "fcn.0057c4c0", 26u, 117u, 4u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x57c4c0-0x57c64f" },
    { 6u, 0x4b16c0ull, 0x4b17fbull, 315u, 0u, 315u, 0u, "r2_discovered", "fcn.004b16c0", 23u, 99u, 3u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x4b16c0-0x4b17fb" },
    { 7u, 0x570310ull, 0x57043aull, 298u, 0u, 298u, 0u, "r2_discovered", "fcn.00570310", 24u, 99u, 2u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x570310-0x57043a" },
    { 8u, 0x54ea90ull, 0x54ebb0ull, 288u, 0u, 288u, 0u, "native_discovered", "method.std::__codecvt_utf8_utf16_base_wchar_t_.virtual_16", 18u, 77u, 3u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x54ea90-0x54ebb0" },
    { 9u, 0x54ebd0ull, 0x54ecf0ull, 288u, 0u, 288u, 0u, "native_discovered", "method.std::__codecvt_utf8_utf16_base_char32_t_.virtual_16", 18u, 77u, 3u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x54ebd0-0x54ecf0" },
    { 10u, 0x6b7a0ull, 0x6b8bbull, 283u, 0u, 283u, 0u, "r2_discovered", "fcn.0006b7a0", 15u, 78u, 8u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x6b7a0-0x6b8bb" },
    { 11u, 0x54e240ull, 0x54e308ull, 200u, 0u, 200u, 0u, "r2_discovered", "fcn.0054e240", 14u, 60u, 1u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x54e240-0x54e308" },
    { 12u, 0x53fce0ull, 0x53fda4ull, 196u, 0u, 196u, 0u, "r2_discovered", "fcn.0053fce0", 14u, 65u, 1u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x53fce0-0x53fda4" },
    { 13u, 0x4aa540ull, 0x4aa5bfull, 127u, 64u, 63u, 5039u, "r2_discovered", "fcn.004aa540", 11u, 42u, 2u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x4aa540-0x4aa5bf" },
    { 14u, 0x4c3770ull, 0x4c37faull, 138u, 80u, 58u, 5797u, "r2_discovered", "fcn.004c3770", 11u, 52u, 1u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x4c3770-0x4c37fa" },
    { 15u, 0x773b0ull, 0x77429ull, 121u, 64u, 57u, 5289u, "r2_discovered", "fcn.000773b0", 9u, 46u, 1u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x773b0-0x77429" },
    { 16u, 0x492814ull, 0x492897ull, 131u, 76u, 55u, 5801u, "r2_discovered", "fcn.00492814", 9u, 40u, 0u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x492814-0x492897" },
    { 17u, 0x52586ull, 0x525efull, 105u, 63u, 42u, 6000u, "r2_discovered", "fcn.00052586", 19u, 37u, 0u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x52586-0x525ef" },
    { 18u, 0x57cf40ull, 0x57d4d7ull, 1431u, 0u, 1431u, 0u, "r2_discovered", "fcn.0057cf40", 99u, 399u, 29u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x57cf40-0x57d4d7" },
    { 19u, 0x4d1510ull, 0x4d19b5ull, 1189u, 0u, 1189u, 0u, "r2_discovered", "fcn.004d1510", 50u, 294u, 15u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x4d1510-0x4d19b5" },
    { 20u, 0x4b3910ull, 0x4b3cceull, 958u, 0u, 958u, 0u, "r2_discovered", "fcn.004b3910", 40u, 220u, 35u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x4b3910-0x4b3cce" },
    { 21u, 0x4aa830ull, 0x4aab60ull, 816u, 0u, 816u, 0u, "r2_discovered", "fcn.004aa830", 32u, 194u, 13u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x4aa830-0x4aab60" },
    { 22u, 0x415aeull, 0x418c6ull, 792u, 0u, 792u, 0u, "r2_discovered", "fcn.000415ae", 71u, 235u, 2u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x415ae-0x418c6" },
    { 23u, 0x554b00ull, 0x554de0ull, 736u, 0u, 736u, 0u, "r2_discovered", "fcn.00554b00", 37u, 197u, 7u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x554b00-0x554de0" },
    { 24u, 0x57c770ull, 0x57c987ull, 535u, 0u, 535u, 0u, "r2_discovered", "fcn.0057c770", 36u, 146u, 5u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x57c770-0x57c987" },
    { 25u, 0x5790b0ull, 0x5792c3ull, 531u, 0u, 531u, 0u, "r2_discovered", "fcn.005790b0", 36u, 135u, 7u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x5790b0-0x5792c3" },
    { 26u, 0x5bb9cull, 0x5bda0ull, 516u, 0u, 516u, 0u, "r2_discovered", "fcn.0005bb9c", 27u, 136u, 15u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x5bb9c-0x5bda0" },
    { 27u, 0x4926daull, 0x49295cull, 642u, 374u, 268u, 5825u, "r2_discovered", "fcn.004926da", 27u, 153u, 12u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x4926da-0x49295c" },
    { 28u, 0x4a4be0ull, 0x4a6a5eull, 7806u, 0u, 7806u, 0u, "r2_discovered", "fcn.004a4be0", 324u, 1681u, 95u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4a4be0-0x4a6a5e" },
    { 29u, 0x3e19cull, 0x3f89full, 5891u, 207u, 5684u, 351u, "r2_discovered", "fcn.0003e19c", 468u, 1574u, 1u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x3e19c-0x3f89f" },
};

static unsigned vm_native_retdec_gap_queue_count(void) {
    return (unsigned)(sizeof(k_vm_native_retdec_gap_queue) / sizeof(k_vm_native_retdec_gap_queue[0]));
}

_Static_assert(sizeof(k_vm_native_retdec_gap_queue) / sizeof(k_vm_native_retdec_gap_queue[0]) == 29u,
               "native RetDec gap queue count changed");
