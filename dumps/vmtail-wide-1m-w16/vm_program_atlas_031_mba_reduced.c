/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_031_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_031_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_031_mba_reduced_cases[] = {
    {0x2316bfu, 0x2319b3u, 278, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0xa5u, 0xe800u, 0x1e8u, 0x2bu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x2319c1u, 0x231b74u, 195, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 195@0x9fb50:1, ip += +0x4; dispatch_model=static_100", 0xa8u, 0x9900u, 0x99u, 0xd496u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_031_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_031_mba_reduced_cases) / sizeof(vm_program_atlas_031_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_031_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_031_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_031_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_031_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_031_mba_successor_2316bf(void) {
    return 0x2319b3u;
}

static uint32_t vm_program_atlas_031_mba_successor_2319c1(void) {
    return 0x231b74u;
}

#endif /* VM_PROGRAM_ATLAS_031_MBA_REDUCED_C */
