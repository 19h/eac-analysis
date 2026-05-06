/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_049_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_049_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_049_mba_reduced_cases[] = {
    {0x336dc8u, 0x33710fu, 299, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 299@0xb6bba:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x40u, 0x4e00u, 0xa84eu, 0x68u, 0xfa49e743u, 0x24ea0f7cu, ""},
};

enum { VM_PROGRAM_ATLAS_049_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_049_mba_reduced_cases) / sizeof(vm_program_atlas_049_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_049_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_049_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_049_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_049_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_049_mba_successor_336dc8(void) {
    return 0x33710fu;
}

#endif /* VM_PROGRAM_ATLAS_049_MBA_REDUCED_C */
