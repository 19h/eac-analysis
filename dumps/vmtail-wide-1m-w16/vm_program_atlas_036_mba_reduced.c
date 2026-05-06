/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_036_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_036_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_036_mba_reduced_cases[] = {
    {0x2bec2eu, 0x2bed4fu, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0x9au, 0xa000u, 0x38a0u, 0x1e8u, 0x3e6fc58u, 0x4280b118u, ""},
    {0x2bed5du, 0x2bef26u, 80, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 80@0x88a58:1, ip += +0x4; dispatch_model=static_100", 0x129u, 0x3101u, 0x2e31u, 0xa8e7u, 0x3f05df58u, 0x40001010u, ""},
    {0x2bef37u, 0x2bf297u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x24f", 0x151u, 0x6001u, 0x9c60u, 0x99u, 0x9012321fu, 0x8111fdedu, ""},
};

enum { VM_PROGRAM_ATLAS_036_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_036_mba_reduced_cases) / sizeof(vm_program_atlas_036_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_036_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_036_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_036_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_036_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_036_mba_successor_2bec2e(void) {
    return 0x2bed4fu;
}

static uint32_t vm_program_atlas_036_mba_successor_2bed5d(void) {
    return 0x2bef26u;
}

static uint32_t vm_program_atlas_036_mba_successor_2bef37(void) {
    return 0x2bf297u;
}

#endif /* VM_PROGRAM_ATLAS_036_MBA_REDUCED_C */
