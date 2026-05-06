/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_027_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_027_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_027_mba_reduced_cases[] = {
    {0x1a5f3du, 0x1a6041u, 175, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 175@0x9c08f:1, ip += +0x4; dispatch_model=static_100", 0x133u, 0x3a01u, 0xa53au, 0xe8b1u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_027_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_027_mba_reduced_cases) / sizeof(vm_program_atlas_027_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_027_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_027_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_027_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_027_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_027_mba_successor_1a5f3d(void) {
    return 0x1a6041u;
}

#endif /* VM_PROGRAM_ATLAS_027_MBA_REDUCED_C */
