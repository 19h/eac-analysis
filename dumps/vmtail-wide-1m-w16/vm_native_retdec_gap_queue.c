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
    { 13u, 0x4c3770ull, 0x4c37faull, 138u, 0u, 138u, 0u, "r2_discovered", "fcn.004c3770", 11u, 52u, 1u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x4c3770-0x4c37fa" },
    { 14u, 0x492814ull, 0x492897ull, 131u, 0u, 131u, 0u, "r2_discovered", "fcn.00492814", 9u, 40u, 0u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x492814-0x492897" },
    { 15u, 0x4aa540ull, 0x4aa5bfull, 127u, 0u, 127u, 0u, "r2_discovered", "fcn.004aa540", 11u, 42u, 2u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x4aa540-0x4aa5bf" },
    { 16u, 0x59c58ull, 0x59cd1ull, 121u, 0u, 121u, 0u, "r2_discovered", "fcn.00059c58", 9u, 46u, 1u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x59c58-0x59cd1" },
    { 17u, 0x773b0ull, 0x77429ull, 121u, 0u, 121u, 0u, "r2_discovered", "fcn.000773b0", 9u, 46u, 1u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x773b0-0x77429" },
    { 18u, 0x52586ull, 0x525efull, 105u, 0u, 105u, 0u, "r2_discovered", "fcn.00052586", 19u, 37u, 0u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x52586-0x525ef" },
    { 19u, 0x4aa5d0ull, 0x4aa639ull, 105u, 0u, 105u, 0u, "r2_discovered", "fcn.004aa5d0", 11u, 35u, 2u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x4aa5d0-0x4aa639" },
    { 20u, 0x4c3060ull, 0x4c30b5ull, 85u, 0u, 85u, 0u, "r2_discovered", "fcn.004c3060", 7u, 32u, 1u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x4c3060-0x4c30b5" },
    { 21u, 0x4a95d0ull, 0x4a9612ull, 66u, 0u, 66u, 0u, "r2_discovered", "fcn.004a95d0", 9u, 26u, 0u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x4a95d0-0x4a9612" },
    { 22u, 0x4b03a0ull, 0x4b03deull, 62u, 0u, 62u, 0u, "r2_discovered", "fcn.004b03a0", 6u, 25u, 1u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x4b03a0-0x4b03de" },
    { 23u, 0x4883d8ull, 0x488414ull, 60u, 0u, 60u, 0u, "r2_discovered", "fcn.004883d8", 9u, 21u, 0u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x4883d8-0x488414" },
    { 24u, 0x4b4e10ull, 0x4b4e4cull, 60u, 0u, 60u, 0u, "r2_discovered", "fcn.004b4e10", 8u, 18u, 0u, "tier0_small_native_gap", "targeted_retdec_single_function", "0x4b4e10-0x4b4e4c" },
    { 25u, 0x57cf40ull, 0x57d4d7ull, 1431u, 0u, 1431u, 0u, "r2_discovered", "fcn.0057cf40", 99u, 399u, 29u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x57cf40-0x57d4d7" },
    { 26u, 0x4d1510ull, 0x4d19b5ull, 1189u, 0u, 1189u, 0u, "r2_discovered", "fcn.004d1510", 50u, 294u, 15u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x4d1510-0x4d19b5" },
    { 27u, 0x4b3910ull, 0x4b3cceull, 958u, 0u, 958u, 0u, "r2_discovered", "fcn.004b3910", 40u, 220u, 35u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x4b3910-0x4b3cce" },
    { 28u, 0x4aa830ull, 0x4aab60ull, 816u, 0u, 816u, 0u, "r2_discovered", "fcn.004aa830", 32u, 194u, 13u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x4aa830-0x4aab60" },
    { 29u, 0x415aeull, 0x418c6ull, 792u, 0u, 792u, 0u, "r2_discovered", "fcn.000415ae", 71u, 235u, 2u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x415ae-0x418c6" },
    { 30u, 0x554b00ull, 0x554de0ull, 736u, 0u, 736u, 0u, "r2_discovered", "fcn.00554b00", 37u, 197u, 7u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x554b00-0x554de0" },
    { 31u, 0x57c770ull, 0x57c987ull, 535u, 0u, 535u, 0u, "r2_discovered", "fcn.0057c770", 36u, 146u, 5u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x57c770-0x57c987" },
    { 32u, 0x5790b0ull, 0x5792c3ull, 531u, 0u, 531u, 0u, "r2_discovered", "fcn.005790b0", 36u, 135u, 7u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x5790b0-0x5792c3" },
    { 33u, 0x5bb9cull, 0x5bda0ull, 516u, 0u, 516u, 0u, "r2_discovered", "fcn.0005bb9c", 27u, 136u, 15u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x5bb9c-0x5bda0" },
    { 34u, 0x4926daull, 0x49295cull, 642u, 298u, 344u, 4641u, "r2_discovered", "fcn.004926da", 27u, 153u, 12u, "tier1_medium_native_gap", "targeted_retdec_single_function", "0x4926da-0x49295c" },
    { 35u, 0x4a4be0ull, 0x4a6a5eull, 7806u, 0u, 7806u, 0u, "r2_discovered", "fcn.004a4be0", 324u, 1681u, 95u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4a4be0-0x4a6a5e" },
    { 36u, 0x3e19cull, 0x3f89full, 5891u, 207u, 5684u, 351u, "r2_discovered", "fcn.0003e19c", 468u, 1574u, 1u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x3e19c-0x3f89f" },
    { 37u, 0x4d7f50ull, 0x4d8c59ull, 3337u, 0u, 3337u, 0u, "symbol_named", "sym.blake3_hasher_finalize_seek", 62u, 677u, 8u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4d7f50-0x4d8c59" },
    { 38u, 0x4ed250ull, 0x4edf1full, 3279u, 0u, 3279u, 0u, "symbol_named", "sym.ZydisDecoderDecodeOperands", 208u, 771u, 20u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4ed250-0x4edf1f" },
    { 39u, 0x47e0aull, 0x48a9dull, 3219u, 0u, 3219u, 0u, "r2_discovered", "fcn.00047e0a", 3u, 731u, 247u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x47e0a-0x48a9d" },
    { 40u, 0x5df38ull, 0x5eba0ull, 3176u, 0u, 3176u, 0u, "r2_discovered", "fcn.0005df38", 61u, 712u, 96u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x5df38-0x5eba0" },
    { 41u, 0x4d9eb0ull, 0x4daa69ull, 3001u, 0u, 3001u, 0u, "r2_discovered", "fcn.004d9eb0", 1u, 915u, 0u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4d9eb0-0x4daa69" },
    { 42u, 0x4ab520ull, 0x4ac09full, 2943u, 0u, 2943u, 0u, "r2_discovered", "fcn.004ab520", 143u, 620u, 48u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4ab520-0x4ac09f" },
    { 43u, 0x21906ull, 0x22f41ull, 5691u, 2766u, 2925u, 4860u, "r2_discovered", "fcn.00021906", 12u, 1424u, 2u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x21906-0x22f41" },
    { 44u, 0x4a0710ull, 0x4a1241ull, 2865u, 0u, 2865u, 0u, "r2_discovered", "fcn.004a0710", 77u, 604u, 68u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4a0710-0x4a1241" },
    { 45u, 0x4d4f10ull, 0x4d5a23ull, 2835u, 0u, 2835u, 0u, "r2_discovered", "fcn.004d4f10", 63u, 610u, 9u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4d4f10-0x4d5a23" },
    { 46u, 0x495700ull, 0x49620bull, 2827u, 0u, 2827u, 0u, "r2_discovered", "fcn.00495700", 76u, 601u, 45u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x495700-0x49620b" },
    { 47u, 0x573920ull, 0x5743bcull, 2716u, 0u, 2716u, 0u, "r2_discovered", "fcn.00573920", 87u, 527u, 45u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x573920-0x5743bc" },
    { 48u, 0x5784e0ull, 0x578f7cull, 2716u, 0u, 2716u, 0u, "r2_discovered", "fcn.005784e0", 87u, 527u, 45u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x5784e0-0x578f7c" },
    { 49u, 0x4a98b0ull, 0x4aa335ull, 2693u, 0u, 2693u, 0u, "r2_discovered", "fcn.004a98b0", 143u, 679u, 42u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4a98b0-0x4aa335" },
    { 50u, 0x4a3d40ull, 0x4a479bull, 2651u, 0u, 2651u, 0u, "r2_discovered", "fcn.004a3d40", 88u, 564u, 58u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4a3d40-0x4a479b" },
    { 51u, 0x2a320ull, 0x2b9b6ull, 5782u, 3142u, 2640u, 5434u, "r2_discovered", "fcn.0002a320", 11u, 1443u, 1u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x2a320-0x2b9b6" },
    { 52u, 0x4c1ea0ull, 0x4c28e6ull, 2630u, 0u, 2630u, 0u, "r2_discovered", "fcn.004c1ea0", 1u, 732u, 0u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4c1ea0-0x4c28e6" },
    { 53u, 0x57ba10ull, 0x57c443ull, 2611u, 0u, 2611u, 0u, "r2_discovered", "fcn.0057ba10", 110u, 651u, 48u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x57ba10-0x57c443" },
    { 54u, 0x512ca0ull, 0x5136b9ull, 2585u, 0u, 2585u, 0u, "r2_discovered", "fcn.00512ca0", 154u, 554u, 43u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x512ca0-0x5136b9" },
    { 55u, 0x5137b0ull, 0x5141c9ull, 2585u, 0u, 2585u, 0u, "r2_discovered", "fcn.005137b0", 154u, 554u, 43u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x5137b0-0x5141c9" },
    { 56u, 0x3ff6eull, 0x4096aull, 2556u, 0u, 2556u, 0u, "r2_discovered", "fcn.0003ff6e", 143u, 636u, 4u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x3ff6e-0x4096a" },
    { 57u, 0x4ccde0ull, 0x4cd7c5ull, 2533u, 0u, 2533u, 0u, "r2_discovered", "fcn.004ccde0", 12u, 790u, 0u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4ccde0-0x4cd7c5" },
    { 58u, 0x55d470ull, 0x55de3eull, 2510u, 0u, 2510u, 0u, "r2_discovered", "fcn.0055d470", 146u, 533u, 41u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x55d470-0x55de3e" },
    { 59u, 0x55df10ull, 0x55e8deull, 2510u, 0u, 2510u, 0u, "r2_discovered", "fcn.0055df10", 146u, 533u, 41u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x55df10-0x55e8de" },
    { 60u, 0x562030ull, 0x5629f1ull, 2497u, 0u, 2497u, 0u, "native_discovered", "method.std::num_get_char__std::istreambuf_iterator_char__std::char_traits_char_____.virtual_56", 153u, 560u, 26u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x562030-0x5629f1" },
    { 61u, 0x562060ull, 0x562a1cull, 2492u, 0u, 2492u, 0u, "r2_discovered", "fcn.00562060", 152u, 559u, 26u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x562060-0x562a1c" },
    { 62u, 0x4bbff0ull, 0x4bc986ull, 2454u, 0u, 2454u, 0u, "r2_discovered", "fcn.004bbff0", 95u, 534u, 97u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4bbff0-0x4bc986" },
    { 63u, 0x4b2d10ull, 0x4b369eull, 2446u, 0u, 2446u, 0u, "r2_discovered", "fcn.004b2d10", 90u, 535u, 37u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4b2d10-0x4b369e" },
    { 64u, 0x56d3e0ull, 0x56dd19ull, 2361u, 0u, 2361u, 0u, "r2_discovered", "fcn.0056d3e0", 5u, 403u, 50u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x56d3e0-0x56dd19" },
    { 65u, 0x56dd60ull, 0x56e696ull, 2358u, 0u, 2358u, 0u, "r2_discovered", "fcn.0056dd60", 5u, 400u, 50u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x56dd60-0x56e696" },
    { 66u, 0x4fe280ull, 0x4fec1eull, 2462u, 158u, 2304u, 641u, "native_discovered", "method.std::basic_filebuf_char__std::char_traits_char___.virtual_96", 136u, 612u, 28u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4fe280-0x4fec1e" },
    { 67u, 0x515d80ull, 0x516662ull, 2274u, 0u, 2274u, 0u, "native_discovered", "method.std::num_get_wchar_t__std::istreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_32", 151u, 524u, 26u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x515d80-0x516662" },
    { 68u, 0x5153a0ull, 0x515c7cull, 2268u, 0u, 2268u, 0u, "native_discovered", "method.std::num_get_wchar_t__std::istreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_64", 151u, 523u, 26u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x5153a0-0x515c7c" },
    { 69u, 0x55f800ull, 0x5600d9ull, 2265u, 0u, 2265u, 0u, "native_discovered", "method.std::num_get_char__std::istreambuf_iterator_char__std::char_traits_char_____.virtual_64", 146u, 522u, 26u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x55f800-0x5600d9" },
    { 70u, 0x516790ull, 0x517067ull, 2263u, 0u, 2263u, 0u, "r2_discovered", "fcn.00516790", 150u, 522u, 26u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x516790-0x517067" },
    { 71u, 0x516760ull, 0x517035ull, 2261u, 0u, 2261u, 0u, "native_discovered", "method.std::num_get_wchar_t__std::istreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_40", 151u, 520u, 26u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x516760-0x517035" },
    { 72u, 0x55f830ull, 0x560104ull, 2260u, 0u, 2260u, 0u, "r2_discovered", "fcn.0055f830", 145u, 521u, 26u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x55f830-0x560104" },
    { 73u, 0x5615a0ull, 0x561e6bull, 2251u, 0u, 2251u, 0u, "native_discovered", "method.std::num_get_char__std::istreambuf_iterator_char__std::char_traits_char_____.virtual_32", 146u, 524u, 26u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x5615a0-0x561e6b" },
    { 74u, 0x560c00ull, 0x5614bbull, 2235u, 0u, 2235u, 0u, "native_discovered", "method.std::num_get_char__std::istreambuf_iterator_char__std::char_traits_char_____.virtual_40", 146u, 520u, 26u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x560c00-0x5614bb" },
    { 75u, 0x529a20ull, 0x52a2b6ull, 2198u, 0u, 2198u, 0u, "r2_discovered", "fcn.00529a20", 25u, 403u, 42u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x529a20-0x52a2b6" },
    { 76u, 0x4d9310ull, 0x4d9ea1ull, 2961u, 770u, 2191u, 2600u, "r2_discovered", "fcn.004d9310", 1u, 899u, 0u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4d9310-0x4d9ea1" },
    { 77u, 0x4d0060ull, 0x4d08ddull, 2173u, 0u, 2173u, 0u, "r2_discovered", "fcn.004d0060", 71u, 505u, 6u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4d0060-0x4d08dd" },
    { 78u, 0x4baf40ull, 0x4bb7aaull, 2154u, 0u, 2154u, 0u, "r2_discovered", "fcn.004baf40", 83u, 508u, 55u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x4baf40-0x4bb7aa" },
    { 79u, 0x5816a0ull, 0x581ef8ull, 2136u, 0u, 2136u, 0u, "r2_discovered", "fcn.005816a0", 91u, 442u, 21u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x5816a0-0x581ef8" },
    { 80u, 0x49aaf0ull, 0x49b344ull, 2132u, 0u, 2132u, 0u, "r2_discovered", "fcn.0049aaf0", 73u, 502u, 29u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x49aaf0-0x49b344" },
    { 81u, 0x511c20ull, 0x5124d4ull, 2228u, 107u, 2121u, 480u, "r2_discovered", "fcn.00511c20", 144u, 512u, 43u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x511c20-0x5124d4" },
    { 82u, 0x55bec0ull, 0x55c700ull, 2112u, 0u, 2112u, 0u, "r2_discovered", "fcn.0055bec0", 138u, 495u, 43u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x55bec0-0x55c700" },
    { 83u, 0x51a610ull, 0x51ae41ull, 2097u, 0u, 2097u, 0u, "r2_discovered", "fcn.0051a610", 81u, 456u, 36u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x51a610-0x51ae41" },
    { 84u, 0x51aeb0ull, 0x51b6e1ull, 2097u, 0u, 2097u, 0u, "r2_discovered", "fcn.0051aeb0", 81u, 456u, 36u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x51aeb0-0x51b6e1" },
    { 85u, 0x46521ull, 0x46d51ull, 2096u, 0u, 2096u, 0u, "r2_discovered", "fcn.00046521", 3u, 593u, 0u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x46521-0x46d51" },
    { 86u, 0x52fb30ull, 0x53034aull, 2074u, 0u, 2074u, 0u, "r2_discovered", "fcn.0052fb30", 74u, 433u, 37u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x52fb30-0x53034a" },
    { 87u, 0x5303e0ull, 0x530bfaull, 2074u, 0u, 2074u, 0u, "r2_discovered", "fcn.005303e0", 74u, 433u, 37u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x5303e0-0x530bfa" },
    { 88u, 0x497670ull, 0x49930full, 7327u, 6744u, 583u, 9204u, "r2_discovered", "fcn.00497670", 223u, 1595u, 136u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x497670-0x49930f" },
    { 89u, 0x518b00ull, 0x519427ull, 2343u, 1868u, 475u, 7972u, "native_discovered", "method.std::num_get_wchar_t__std::istreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_56", 144u, 530u, 26u, "tier2_large_native_gap", "targeted_retdec_with_timeout", "0x518b00-0x519427" },
    { 90u, 0x57d700ull, 0x581463ull, 15715u, 163u, 15552u, 103u, "r2_discovered", "fcn.0057d700", 695u, 3347u, 223u, "tier3_huge_or_noisy_native_gap", "split_or_model_before_retdec", "0x57d700-0x581463" },
    { 91u, 0x4ea390ull, 0x4ed13aull, 11690u, 0u, 11690u, 0u, "symbol_named", "sym.ZydisDecoderDecodeInstruction", 590u, 2670u, 19u, "tier3_huge_or_noisy_native_gap", "split_or_model_before_retdec", "0x4ea390-0x4ed13a" },
    { 92u, 0x4a1270ull, 0x4a3b2eull, 10430u, 0u, 10430u, 0u, "r2_discovered", "fcn.004a1270", 363u, 2196u, 169u, "tier3_huge_or_noisy_native_gap", "split_or_model_before_retdec", "0x4a1270-0x4a3b2e" },
    { 93u, 0x4d5a50ull, 0x4d7e3cull, 9196u, 0u, 9196u, 0u, "r2_discovered", "fcn.004d5a50", 123u, 2007u, 22u, "tier3_huge_or_noisy_native_gap", "split_or_model_before_retdec", "0x4d5a50-0x4d7e3c" },
};

static unsigned vm_native_retdec_gap_queue_count(void) {
    return (unsigned)(sizeof(k_vm_native_retdec_gap_queue) / sizeof(k_vm_native_retdec_gap_queue[0]));
}

_Static_assert(sizeof(k_vm_native_retdec_gap_queue) / sizeof(k_vm_native_retdec_gap_queue[0]) == 93u,
               "native RetDec gap queue count changed");
