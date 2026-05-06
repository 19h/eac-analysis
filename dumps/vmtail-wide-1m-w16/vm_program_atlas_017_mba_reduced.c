/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_017_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_017_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_017_mba_reduced_cases[] = {
    {0x122074u, 0x122196u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100", 0x14cu, 0x1c01u, 0xd71cu, 0xcc47u, 0x8040830u, 0xf7ff9ddbu, ""},
    {0x1221a4u, 0x122344u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x77", 0x9du, 0x3700u, 0xcf37u, 0x99u, 0x98f9d8d1u, 0x33d0ccb8u, ""},
};

enum { VM_PROGRAM_ATLAS_017_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_017_mba_reduced_cases) / sizeof(vm_program_atlas_017_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_017_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_017_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_017_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_017_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_017_mba_successor_122074(void) {
    return 0x122196u;
}

static uint32_t vm_program_atlas_017_mba_successor_1221a4(void) {
    return 0x122344u;
}

#endif /* VM_PROGRAM_ATLAS_017_MBA_REDUCED_C */
