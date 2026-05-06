/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_065_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_065_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_065_mba_reduced_cases[] = {
    {0x3717c4u, 0x3718ffu, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:25, ip += +0x4; dispatch_model=static_100", 0x40u, 0xd500u, 0xabd5u, 0x91u, 0xb7fa57feu, 0x624000c8u, ""},
    {0x37190du, 0x371a20u, 316, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 316@0xb987b:25, ip += +0x5; dispatch_model=static_100", 0x72u, 0xcb00u, 0x64cbu, 0xac8cu, 0xeb767f7eu, 0xa7562710u, ""},
    {0x371a30u, 0x370256u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x17ed", 0x9c64u, 0xae9cu, 0x65aeu, 0x3498u, 0x4100000u, 0x4128000u, ""},
    {0x371a63u, 0x371b85u, 95, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0x14cu, 0x1c01u, 0xd71cu, 0xcc47u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x371b93u, 0x371e16u, 311, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100", 0x10cu, 0x4a01u, 0x1c4au, 0x6276u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x371e24u, 0x36504cu, 310, "needs_more_evidence", "decoded_control", "sampled operand footprint 0x6; observed target table[310], delta -0xcf8b", 0x2bu, 0xfd00u, 0x7efdu, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_065_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_065_mba_reduced_cases) / sizeof(vm_program_atlas_065_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_065_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_065_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_065_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_065_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_065_mba_successor_3717c4(void) {
    return 0x3718ffu;
}

static uint32_t vm_program_atlas_065_mba_successor_37190d(void) {
    return 0x371a20u;
}

static uint32_t vm_program_atlas_065_mba_successor_371a30(void) {
    return 0x370256u;
}

static uint32_t vm_program_atlas_065_mba_successor_371a63(void) {
    return 0x371b85u;
}

static uint32_t vm_program_atlas_065_mba_successor_371b93(void) {
    return 0x371e16u;
}

static uint32_t vm_program_atlas_065_mba_successor_371e24(void) {
    return 0x36504cu;
}

#endif /* VM_PROGRAM_ATLAS_065_MBA_REDUCED_C */
