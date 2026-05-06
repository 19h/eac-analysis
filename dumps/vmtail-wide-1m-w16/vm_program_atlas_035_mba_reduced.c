/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_035_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_035_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_035_mba_reduced_cases[] = {
    {0x292986u, 0x292b48u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0x1e8u, 0xa501u, 0xa5u, 0xb9u, 0x5be4c908u, 0xe4188598u, ""},
    {0x292b56u, 0x292de8u, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0x102u, 0xbe01u, 0xc2beu, 0x7607u, 0xffa78fe5u, 0x34d7dadu, ""},
    {0x292df6u, 0x292f3eu, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_const_post", 0x12u, 0xe800u, 0x5e8u, 0xae3au, 0xa5d60030u, 0xfead2d50u, ""},
    {0x292f3eu, 0x293001u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:2, ip += +0x4; dispatch_model=static_100", 0x12u, 0x8800u, 0xa88u, 0x4c3au, 0x573b8bd0u, 0xe2e98999u, ""},
    {0x29300fu, 0x293222u, 78, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 78@0x883c0:2, ip += +0x4; dispatch_model=static_100", 0x154u, 0x4c01u, 0xe4cu, 0x99u, 0x114babdcu, 0x783681d3u, ""},
    {0x293233u, 0x293344u, 334, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 334@0xbdd18:2, ip += +0x5; dispatch_model=static_100", 0xc4u, 0x4f00u, 0x6e4fu, 0xf024u, 0x7a2b3665u, 0xe4252730u, ""},
    {0x293355u, 0x293470u, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0xd4b2u, 0x34d4u, 0xe234u, 0x4d0u, 0x7fffb7fbu, 0x7ffd8cc5u, ""},
    {0x29347eu, 0x2935dau, 210, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 210@0xa2da3:1, ip += +0x5; dispatch_model=static_100", 0x14du, 0xa301u, 0xe5a3u, 0x99u, 0x694c698cu, 0xee396f18u, ""},
    {0x2935ebu, 0x2935fdu, 75, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 75@0x873fc:1, ip += +0x5; dispatch_model=static_100", 0xc91bu, 0xb3c9u, 0xb3u, 0xb8deu, 0x9fe8u, 0x40000000u, ""},
    {0x29360eu, 0x293620u, 145, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 145@0x95b5c:1, ip += +0x5; dispatch_model=static_100", 0x91f2u, 0x7691u, 0xbb76u, 0x1e2cu, 0xc20060u, 0x2d427e84u, ""},
    {0x293630u, 0x293643u, 75, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 75@0x873fc:1, ip += +0x5; dispatch_model=static_100", 0x9dbfu, 0xb99du, 0x69b9u, 0x211u, 0x803bf7b0u, 0x7bd69d5bu, ""},
    {0x293654u, 0x293666u, 316, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 316@0xb987b:1, ip += +0x5; dispatch_model=static_100", 0x1aa6u, 0x91au, 0x7b09u, 0xd3c5u, 0xf6f5d887u, 0xbc1635dau, ""},
    {0x293677u, 0x293689u, 246, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 246@0xab427:1, ip += +0x5; dispatch_model=static_100", 0xf824u, 0xf9f8u, 0xfdf9u, 0xd4e7u, 0x58701122u, 0x73681327u, ""},
};

enum { VM_PROGRAM_ATLAS_035_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_035_mba_reduced_cases) / sizeof(vm_program_atlas_035_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_035_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_035_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_035_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_035_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_035_mba_successor_292986(void) {
    return 0x292b48u;
}

static uint32_t vm_program_atlas_035_mba_successor_292b56(void) {
    return 0x292de8u;
}

static uint32_t vm_program_atlas_035_mba_successor_292df6(void) {
    return 0x292f3eu;
}

static uint32_t vm_program_atlas_035_mba_successor_292f3e(void) {
    return 0x293001u;
}

static uint32_t vm_program_atlas_035_mba_successor_29300f(void) {
    return 0x293222u;
}

static uint32_t vm_program_atlas_035_mba_successor_293233(void) {
    return 0x293344u;
}

static uint32_t vm_program_atlas_035_mba_successor_293355(void) {
    return 0x293470u;
}

static uint32_t vm_program_atlas_035_mba_successor_29347e(void) {
    return 0x2935dau;
}

static uint32_t vm_program_atlas_035_mba_successor_2935eb(void) {
    return 0x2935fdu;
}

static uint32_t vm_program_atlas_035_mba_successor_29360e(void) {
    return 0x293620u;
}

static uint32_t vm_program_atlas_035_mba_successor_293630(void) {
    return 0x293643u;
}

static uint32_t vm_program_atlas_035_mba_successor_293654(void) {
    return 0x293666u;
}

static uint32_t vm_program_atlas_035_mba_successor_293677(void) {
    return 0x293689u;
}

#endif /* VM_PROGRAM_ATLAS_035_MBA_REDUCED_C */
