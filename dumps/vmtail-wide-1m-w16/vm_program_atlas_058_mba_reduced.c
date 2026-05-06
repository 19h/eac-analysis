/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_058_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_058_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_058_mba_reduced_cases[] = {
    {0x3654e0u, 0x3655e4u, 195, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 195@0x9fb50:1, ip += +0x4; dispatch_model=static_100", 0x14du, 0xa301u, 0xe5a3u, 0x68u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_058_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_058_mba_reduced_cases) / sizeof(vm_program_atlas_058_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_058_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_058_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_058_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_058_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_058_mba_successor_3654e0(void) {
    return 0x3655e4u;
}

#endif /* VM_PROGRAM_ATLAS_058_MBA_REDUCED_C */
