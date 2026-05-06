/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_013_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_013_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_013_mba_reduced_cases[] = {
    {0x11ef65u, 0x11f1b9u, 5, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 5@0x79675:1, ip += +0x4; dispatch_model=static_100", 0x102u, 0xf01u, 0xc20fu, 0x75d6u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x11f1c5u, 0x11f39bu, 356, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100", 0xd7u, 0x4000u, 0x540u, 0x1c88u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x11f3a9u, 0x1209d2u, 354, "needs_more_evidence", "decoded_control", "next = table[354], ip += 0x1518", 0xc4u, 0x4f00u, 0x6e4fu, 0xf45cu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_013_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_013_mba_reduced_cases) / sizeof(vm_program_atlas_013_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_013_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_013_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_013_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_013_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_013_mba_successor_11ef65(void) {
    return 0x11f1b9u;
}

static uint32_t vm_program_atlas_013_mba_successor_11f1c5(void) {
    return 0x11f39bu;
}

static uint32_t vm_program_atlas_013_mba_successor_11f3a9(void) {
    return 0x1209d2u;
}

#endif /* VM_PROGRAM_ATLAS_013_MBA_REDUCED_C */
