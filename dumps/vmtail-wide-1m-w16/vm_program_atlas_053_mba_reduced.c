/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_053_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_053_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_053_mba_reduced_cases[] = {
    {0x33db28u, 0x33dcbdu, 210, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 210@0xa2da3:3, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0x1e8u, 0xab01u, 0xabu, 0x9du, 0x6bfb0000u, 0x40200141u, ""},
    {0x33dcceu, 0x33dd15u, 165, "ready_for_mba_reduction", "fallthrough", "next = 165@0x9a24c:3, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0xc1bu, 0xe80cu, 0x1e8u, 0x5f32u, 0x5aa13299u, 0xe0f7e7b9u, ""},
    {0x33dd15u, 0x33de22u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:12, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x7cu, 0xe100u, 0x9de1u, 0x2e07u, 0x224503a8u, 0x2c0f8ac9u, ""},
    {0x33de30u, 0x33e02au, 80, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 80@0x88a58:12, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xa8u, 0x9900u, 0x99u, 0xd0ceu, 0x573c9bc6u, 0x4c640a48u, ""},
    {0x33e03bu, 0x33e8deu, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x792", 0x40u, 0x4500u, 0xa245u, 0x99u, 0xc6e982d8u, 0xca0f3386u, ""},
    {0x33e15du, 0x33e2dau, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:9, ip += +0x4; dispatch_model=static_100; state=state_mixed", 0x1158u, 0x7a11u, 0xdc7au, 0xc074u, 0x36866c58u, 0x849ab140u, ""},
    {0x33e2e8u, 0x33e532u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:9, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x42u, 0xa100u, 0x95a1u, 0xe13au, 0x4c648056u, 0x41dbe5a7u, ""},
    {0x33e540u, 0x33e707u, 69, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 69@0x85f24:9, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xc4u, 0x4f00u, 0x6e4fu, 0xf1b4u, 0xf93fdef7u, 0xda3bf6b5u, ""},
    {0x33e718u, 0x33e889u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x60", 0x1cu, 0x5800u, 0x158u, 0x9910u, 0x79baf6d1u, 0xefe939b0u, ""},
};

enum { VM_PROGRAM_ATLAS_053_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_053_mba_reduced_cases) / sizeof(vm_program_atlas_053_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_053_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_053_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_053_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_053_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_053_mba_successor_33db28(void) {
    return 0x33dcbdu;
}

static uint32_t vm_program_atlas_053_mba_successor_33dcce(void) {
    return 0x33dd15u;
}

static uint32_t vm_program_atlas_053_mba_successor_33dd15(void) {
    return 0x33de22u;
}

static uint32_t vm_program_atlas_053_mba_successor_33de30(void) {
    return 0x33e02au;
}

static uint32_t vm_program_atlas_053_mba_successor_33e03b(void) {
    return 0x33e8deu;
}

static uint32_t vm_program_atlas_053_mba_successor_33e15d(void) {
    return 0x33e2dau;
}

static uint32_t vm_program_atlas_053_mba_successor_33e2e8(void) {
    return 0x33e532u;
}

static uint32_t vm_program_atlas_053_mba_successor_33e540(void) {
    return 0x33e707u;
}

static uint32_t vm_program_atlas_053_mba_successor_33e718(void) {
    return 0x33e889u;
}

#endif /* VM_PROGRAM_ATLAS_053_MBA_REDUCED_C */
