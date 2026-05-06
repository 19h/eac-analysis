/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_023_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_023_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_023_mba_reduced_cases[] = {
    {0x177353u, 0x1774b8u, 216, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0x15eu, 0xe101u, 0x5ee1u, 0x3806u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1774c6u, 0x17776fu, 356, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100", 0xcbu, 0x9f00u, 0x919fu, 0x7635u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x17777du, 0x177930u, 334, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 334@0xbdd18:1, ip += +0x5; dispatch_model=static_100", 0x1cu, 0x6000u, 0x860u, 0x6910u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x177940u, 0x177aebu, 264, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0x7430u, 0x9474u, 0x394u, 0x5fecu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x177af9u, 0x179f43u, 354, "needs_more_evidence", "decoded_control", "next = table[354], ip += 0x22c1", 0x12u, 0x6000u, 0x860u, 0xa93au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_023_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_023_mba_reduced_cases) / sizeof(vm_program_atlas_023_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_023_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_023_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_023_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_023_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_023_mba_successor_177353(void) {
    return 0x1774b8u;
}

static uint32_t vm_program_atlas_023_mba_successor_1774c6(void) {
    return 0x17776fu;
}

static uint32_t vm_program_atlas_023_mba_successor_17777d(void) {
    return 0x177930u;
}

static uint32_t vm_program_atlas_023_mba_successor_177940(void) {
    return 0x177aebu;
}

static uint32_t vm_program_atlas_023_mba_successor_177af9(void) {
    return 0x179f43u;
}

#endif /* VM_PROGRAM_ATLAS_023_MBA_REDUCED_C */
