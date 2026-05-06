/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_048_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_048_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_048_mba_reduced_cases[] = {
    {0x334a3du, 0x334c63u, 165, "ready_for_mba_reduction", "fallthrough", "next = 165@0x9a24c:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x0u, 0xa900u, 0xa9u, 0x162u, 0xffc939bfu, 0x7170d2b7u, ""},
    {0x334c63u, 0x334cabu, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x30", 0x14du, 0xeb01u, 0xe0ebu, 0x79u, 0x22450388u, 0xb4da3a5du, ""},
    {0x334c91u, 0x334c63u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip -= 0x40", 0x158u, 0xc401u, 0x3ec4u, 0xe28bu, 0x1da2f235u, 0x8504cd4u, ""},
    {0x334cabu, 0x334eafu, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x129u, 0x3101u, 0xee31u, 0xd3e5u, 0x81338600u, 0x8504cd4u, ""},
    {0x334eafu, 0x335414u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x288", 0x1cu, 0xf000u, 0x7f0u, 0x2710u, 0xa3993273u, 0xe10f6d44u, ""},
    {0x33519cu, 0x334eafu, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x55d", 0x1b1fu, 0xdc1bu, 0xbcdcu, 0xc53u, 0x3553baf4u, 0xcaa845abu, ""},
    {0x335414u, 0x335585u, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0xcbu, 0xf700u, 0x92f7u, 0x7604u, 0xe505e0a5u, 0x16833a04u, ""},
    {0x335585u, 0x33585bu, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x28b", 0x154u, 0x7c01u, 0xf7cu, 0x68u, 0x87800000u, 0xb8eee7c2u, ""},
    {0x3355e0u, 0x335585u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x2ce", 0xa616u, 0x44a6u, 0xf744u, 0xf15u, 0x12900118u, 0x52923918u, ""},
    {0x33585bu, 0x3364c6u, 334, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 334@0xbdd18:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0x2bu, 0xfc00u, 0x7afcu, 0x68u, 0xe5057e49u, 0x52df7d99u, ""},
    {0x3364d7u, 0x336806u, 145, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 145@0x95b5c:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0x252du, 0xa25u, 0x550au, 0x6f82u, 0xfb5ffa39u, 0x7bf38cd4u, ""},
    {0x336817u, 0x3369f2u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100; state=state_mixed", 0xa195u, 0xd3a1u, 0x63d3u, 0x1e8u, 0x7c9fu, 0x48440050u, ""},
    {0x3369fcu, 0x336dc8u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x55", 0xabu, 0xe800u, 0x1e8u, 0x9du, 0x26e60110u, 0x37feff37u, ""},
};

enum { VM_PROGRAM_ATLAS_048_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_048_mba_reduced_cases) / sizeof(vm_program_atlas_048_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_048_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_048_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_048_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_048_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_048_mba_successor_334a3d(void) {
    return 0x334c63u;
}

static uint32_t vm_program_atlas_048_mba_successor_334c63(void) {
    return 0x334cabu;
}

static uint32_t vm_program_atlas_048_mba_successor_334c91(void) {
    return 0x334c63u;
}

static uint32_t vm_program_atlas_048_mba_successor_334cab(void) {
    return 0x334eafu;
}

static uint32_t vm_program_atlas_048_mba_successor_334eaf(void) {
    return 0x335414u;
}

static uint32_t vm_program_atlas_048_mba_successor_33519c(void) {
    return 0x334eafu;
}

static uint32_t vm_program_atlas_048_mba_successor_335414(void) {
    return 0x335585u;
}

static uint32_t vm_program_atlas_048_mba_successor_335585(void) {
    return 0x33585bu;
}

static uint32_t vm_program_atlas_048_mba_successor_3355e0(void) {
    return 0x335585u;
}

static uint32_t vm_program_atlas_048_mba_successor_33585b(void) {
    return 0x3364c6u;
}

static uint32_t vm_program_atlas_048_mba_successor_3364d7(void) {
    return 0x336806u;
}

static uint32_t vm_program_atlas_048_mba_successor_336817(void) {
    return 0x3369f2u;
}

static uint32_t vm_program_atlas_048_mba_successor_3369fc(void) {
    return 0x336dc8u;
}

#endif /* VM_PROGRAM_ATLAS_048_MBA_REDUCED_C */
