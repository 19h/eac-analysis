/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_014_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_014_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_014_mba_reduced_cases[] = {
    {0x1209d2u, 0x120af4u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0x14cu, 0x1c01u, 0xd71cu, 0xcc5fu, 0x3a82b247u, 0x6988e264u, ""},
    {0x120b02u, 0x120d67u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100", 0x102u, 0x4601u, 0xc246u, 0x7607u, 0x3a62df32u, 0xa4d1c06eu, ""},
    {0x120d75u, 0x1210d6u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x238", 0x10cu, 0x4a01u, 0x1c4au, 0x63e6u, 0x3adaf805u, 0xc7e93f08u, ""},
};

enum { VM_PROGRAM_ATLAS_014_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_014_mba_reduced_cases) / sizeof(vm_program_atlas_014_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_014_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_014_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_014_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_014_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_014_mba_successor_1209d2(void) {
    return 0x120af4u;
}

static uint32_t vm_program_atlas_014_mba_successor_120b02(void) {
    return 0x120d67u;
}

static uint32_t vm_program_atlas_014_mba_successor_120d75(void) {
    return 0x1210d6u;
}

#endif /* VM_PROGRAM_ATLAS_014_MBA_REDUCED_C */
