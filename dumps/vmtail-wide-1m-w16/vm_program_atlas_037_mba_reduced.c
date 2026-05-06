/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_037_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_037_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_037_mba_reduced_cases[] = {
    {0x2bf297u, 0x2bf3b8u, 216, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0x72u, 0x9a00u, 0x5f9au, 0xac5bu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x2bf3c6u, 0x2bf97cu, 165, "needs_more_evidence", "decoded_control", "next = table[165], ip += 0x48d", 0x40u, 0xbd00u, 0xa2bdu, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_037_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_037_mba_reduced_cases) / sizeof(vm_program_atlas_037_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_037_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_037_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_037_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_037_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_037_mba_successor_2bf297(void) {
    return 0x2bf3b8u;
}

static uint32_t vm_program_atlas_037_mba_successor_2bf3c6(void) {
    return 0x2bf97cu;
}

#endif /* VM_PROGRAM_ATLAS_037_MBA_REDUCED_C */
