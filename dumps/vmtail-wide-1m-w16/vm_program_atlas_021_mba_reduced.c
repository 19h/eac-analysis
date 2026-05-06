/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_021_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_021_MBA_REDUCED_C

typedef struct VMProgramAtlasMBAReducedCase {
    uint32_t case_state;
    uint32_t successor_vm_ip;
    int32_t successor_entry;
    const char *status;
    const char *edge_kind;
    const char *edge_semantic;
    uint16_t raw_u16_0;
    uint16_t raw_u16_1;
    uint16_t raw_u16_2;
    uint16_t raw_u16_4;
    uint32_t observed_pre_state;
    uint32_t observed_pre_flags;
    const char *missing;
} VMProgramAtlasMBAReducedCase;

static const VMProgramAtlasMBAReducedCase vm_program_atlas_021_mba_reduced_cases[] = {
    {0x1705a9u, 0x170856u, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100", 0xabu, 0xe800u, 0x1e8u, 0x151u, 0x7a61e008u, 0xed741ff8u, ""},
    {0x170864u, 0x170b41u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0x72u, 0xf300u, 0x5ef3u, 0xac8cu, 0x8a5e7085u, 0x8a5e7085u, ""},
    {0x170b4fu, 0x170db1u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0xcbu, 0x9f00u, 0x919fu, 0x7635u, 0xceabcefdu, 0x12831a14u, ""},
    {0x170dbfu, 0x170fdbu, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0x2bu, 0xbd00u, 0x7dbdu, 0x99u, 0x69bffffau, 0x9b3d28e5u, ""},
    {0x170fe9u, 0x171205u, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0x15bu, 0x7801u, 0x3d78u, 0x962u, 0xc22b88d8u, 0xc62d3346u, ""},
    {0x171213u, 0x1714bcu, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0x42u, 0x1900u, 0x9819u, 0x633au, 0x4000fd56u, 0x14022b48u, ""},
    {0x1714cau, 0x1717a7u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0x72u, 0x7300u, 0x6373u, 0xac8cu, 0xba2d80d8u, 0xc60f3346u, ""},
    {0x1717b5u, 0x171a17u, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0x40u, 0xad00u, 0xaaadu, 0x99u, 0x30d27bd3u, 0x75b464aeu, ""},
    {0x171a25u, 0x171c41u, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0x10cu, 0x4a01u, 0x1c4au, 0x6b2eu, 0xdfab67f1u, 0x4280a900u, ""},
    {0x171c4fu, 0x171e6bu, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0x9du, 0x1700u, 0xd317u, 0x99u, 0x513c8908u, 0x403eb39eu, ""},
    {0x171e79u, 0x172122u, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0xacu, 0xb200u, 0xafb2u, 0xaa3u, 0xd0d627d3u, 0xec87f335u, ""},
    {0x172130u, 0x17240du, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0xbdu, 0x9900u, 0x99u, 0xec4cu, 0x2fe99a8du, 0xfcf9e66cu, ""},
    {0x17241bu, 0x17264du, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0x2bu, 0xf500u, 0x77f5u, 0x99u, 0xf63586d8u, 0x92fb386u, ""},
    {0x17265bu, 0x172877u, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100", 0x40u, 0xc500u, 0xa6c5u, 0x99u, 0x1054eeccu, 0x3bd04ca8u, ""},
    {0x172885u, 0x172aa1u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100", 0x102u, 0xa601u, 0xbfa6u, 0x7607u, 0xe76c77f4u, 0x22400089u, ""},
    {0x172aafu, 0x172d58u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100", 0x151u, 0xe801u, 0x93e8u, 0x99u, 0x4f4adf4eu, 0x62de7882u, ""},
    {0x172d66u, 0x173043u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0x10cu, 0x4a01u, 0x1c4au, 0x6c86u, 0xeb832ff4u, 0x33ad2b1cu, ""},
    {0x173051u, 0x1732b3u, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0xc4u, 0x4f00u, 0x6e4fu, 0xf8fcu, 0xc10c77d3u, 0xa1dbd91eu, ""},
    {0x1732c1u, 0x1734ddu, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100", 0xc4u, 0x4f00u, 0x6e4fu, 0xf634u, 0x99b8178u, 0x473d3205u, ""},
    {0x1734ebu, 0x173707u, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0x72u, 0xab00u, 0x67abu, 0xac8cu, 0x3ffd2b04u, 0x2ee55b1cu, ""},
    {0x173715u, 0x1739beu, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0x151u, 0x7001u, 0x9970u, 0x99u, 0xa8dcb58du, 0xdbf56b98u, ""},
    {0x1739ccu, 0x173ca9u, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100", 0xb9u, 0xa300u, 0xa4a3u, 0x373au, 0x3a9aea64u, 0xd1e923b0u, ""},
    {0x173cb7u, 0x173f19u, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0x14du, 0xfb01u, 0xe6fbu, 0x99u, 0x10546030u, 0x7fd05cb8u, ""},
    {0x173f27u, 0x174143u, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0x42u, 0xf100u, 0x92f1u, 0xe13au, 0x9012321fu, 0x8111fdedu, ""},
    {0x174151u, 0x17436du, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0xbdu, 0x9900u, 0x99u, 0xe01cu, 0x573ca08cu, 0x6c2000c0u, ""},
    {0x17437bu, 0x17452eu, 299, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 299@0xb6bba:1, ip += +0x4; dispatch_model=static_100", 0x42u, 0x7900u, 0x9379u, 0x793au, 0x92d4a35bu, 0xfe566e29u, ""},
};

enum { VM_PROGRAM_ATLAS_021_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_021_mba_reduced_cases) / sizeof(vm_program_atlas_021_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_021_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_021_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_021_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_021_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_021_mba_successor_1705a9(void) {
    return 0x170856u;
}

static uint32_t vm_program_atlas_021_mba_successor_170864(void) {
    return 0x170b41u;
}

static uint32_t vm_program_atlas_021_mba_successor_170b4f(void) {
    return 0x170db1u;
}

static uint32_t vm_program_atlas_021_mba_successor_170dbf(void) {
    return 0x170fdbu;
}

static uint32_t vm_program_atlas_021_mba_successor_170fe9(void) {
    return 0x171205u;
}

static uint32_t vm_program_atlas_021_mba_successor_171213(void) {
    return 0x1714bcu;
}

static uint32_t vm_program_atlas_021_mba_successor_1714ca(void) {
    return 0x1717a7u;
}

static uint32_t vm_program_atlas_021_mba_successor_1717b5(void) {
    return 0x171a17u;
}

static uint32_t vm_program_atlas_021_mba_successor_171a25(void) {
    return 0x171c41u;
}

static uint32_t vm_program_atlas_021_mba_successor_171c4f(void) {
    return 0x171e6bu;
}

static uint32_t vm_program_atlas_021_mba_successor_171e79(void) {
    return 0x172122u;
}

static uint32_t vm_program_atlas_021_mba_successor_172130(void) {
    return 0x17240du;
}

static uint32_t vm_program_atlas_021_mba_successor_17241b(void) {
    return 0x17264du;
}

static uint32_t vm_program_atlas_021_mba_successor_17265b(void) {
    return 0x172877u;
}

static uint32_t vm_program_atlas_021_mba_successor_172885(void) {
    return 0x172aa1u;
}

static uint32_t vm_program_atlas_021_mba_successor_172aaf(void) {
    return 0x172d58u;
}

static uint32_t vm_program_atlas_021_mba_successor_172d66(void) {
    return 0x173043u;
}

static uint32_t vm_program_atlas_021_mba_successor_173051(void) {
    return 0x1732b3u;
}

static uint32_t vm_program_atlas_021_mba_successor_1732c1(void) {
    return 0x1734ddu;
}

static uint32_t vm_program_atlas_021_mba_successor_1734eb(void) {
    return 0x173707u;
}

static uint32_t vm_program_atlas_021_mba_successor_173715(void) {
    return 0x1739beu;
}

static uint32_t vm_program_atlas_021_mba_successor_1739cc(void) {
    return 0x173ca9u;
}

static uint32_t vm_program_atlas_021_mba_successor_173cb7(void) {
    return 0x173f19u;
}

static uint32_t vm_program_atlas_021_mba_successor_173f27(void) {
    return 0x174143u;
}

static uint32_t vm_program_atlas_021_mba_successor_174151(void) {
    return 0x17436du;
}

static uint32_t vm_program_atlas_021_mba_successor_17437b(void) {
    return 0x17452eu;
}

#endif /* VM_PROGRAM_ATLAS_021_MBA_REDUCED_C */
