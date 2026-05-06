/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_039_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_039_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_039_mba_reduced_cases[] = {
    {0x2bfe6fu, 0x2bff90u, 216, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0x40u, 0x5e00u, 0xac5eu, 0x68u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x2bff9eu, 0x2c0230u, 264, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0x102u, 0xee01u, 0xc4eeu, 0x7607u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x2c023eu, 0x2c045au, 356, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100", 0x42u, 0xe900u, 0x8ee9u, 0x9b3au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x2c0468u, 0x2c1156u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0xbc5", 0x2bu, 0xf500u, 0x74f5u, 0x99u, 0xb10e1ab5u, 0x3bda694cu, ""},
};

enum { VM_PROGRAM_ATLAS_039_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_039_mba_reduced_cases) / sizeof(vm_program_atlas_039_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_039_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_039_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_039_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_039_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_039_mba_successor_2bfe6f(void) {
    return 0x2bff90u;
}

static uint32_t vm_program_atlas_039_mba_successor_2bff9e(void) {
    return 0x2c0230u;
}

static uint32_t vm_program_atlas_039_mba_successor_2c023e(void) {
    return 0x2c045au;
}

static uint32_t vm_program_atlas_039_mba_successor_2c0468(void) {
    return 0x2c1156u;
}

#endif /* VM_PROGRAM_ATLAS_039_MBA_REDUCED_C */
