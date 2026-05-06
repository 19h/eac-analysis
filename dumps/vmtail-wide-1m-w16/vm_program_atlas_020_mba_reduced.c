/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_020_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_020_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_020_mba_reduced_cases[] = {
    {0x128952u, 0x128b72u, 278, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0x162u, 0xe801u, 0x1e8u, 0x2bu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x128b80u, 0x128de7u, 95, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0x15bu, 0x7001u, 0x3970u, 0x962u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x128df5u, 0x12906fu, 278, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0x40u, 0x9d00u, 0xa79du, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_020_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_020_mba_reduced_cases) / sizeof(vm_program_atlas_020_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_020_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_020_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_020_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_020_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_020_mba_successor_128952(void) {
    return 0x128b72u;
}

static uint32_t vm_program_atlas_020_mba_successor_128b80(void) {
    return 0x128de7u;
}

static uint32_t vm_program_atlas_020_mba_successor_128df5(void) {
    return 0x12906fu;
}

#endif /* VM_PROGRAM_ATLAS_020_MBA_REDUCED_C */
