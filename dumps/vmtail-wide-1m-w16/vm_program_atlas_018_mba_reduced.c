/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_018_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_018_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_018_mba_reduced_cases[] = {
    {0x122344u, 0x122466u, 264, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0x15bu, 0x3101u, 0x3c31u, 0x931u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x122474u, 0x122615u, 75, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 75@0x873fc:1, ip += +0x5; dispatch_model=static_100", 0x40u, 0xbd00u, 0xa2bdu, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x122626u, 0x122a46u, 171, "needs_more_evidence", "decoded_control", "next = table[171], ip += 0x380", 0xa4u, 0x2900u, 0xa729u, 0x1e8u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_018_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_018_mba_reduced_cases) / sizeof(vm_program_atlas_018_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_018_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_018_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_018_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_018_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_018_mba_successor_122344(void) {
    return 0x122466u;
}

static uint32_t vm_program_atlas_018_mba_successor_122474(void) {
    return 0x122615u;
}

static uint32_t vm_program_atlas_018_mba_successor_122626(void) {
    return 0x122a46u;
}

#endif /* VM_PROGRAM_ATLAS_018_MBA_REDUCED_C */
