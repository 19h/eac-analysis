/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_028_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_028_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_028_mba_reduced_cases[] = {
    {0x1ec0abu, 0x1ec347u, 356, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100", 0x1e8u, 0xab01u, 0xabu, 0x14du, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1ec355u, 0x1ec466u, 316, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 316@0xb987b:1, ip += +0x5; dispatch_model=static_100", 0x133u, 0x3a01u, 0x8d3au, 0x60b4u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1ec477u, 0x1ec5c3u, 278, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xc5a3u, 0x8ac5u, 0x6b8au, 0xb046u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1ec5d1u, 0x1ec87au, 216, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0xbdu, 0x9900u, 0x99u, 0xe01cu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1ec888u, 0x1ecb65u, 264, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0x102u, 0x3e01u, 0xb63eu, 0x7607u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1ecb73u, 0x1ecdd5u, 278, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0xcbu, 0x3f00u, 0x9e3fu, 0x7635u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1ecde3u, 0x1ecfffu, 311, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100", 0xc4u, 0x4f00u, 0x6e4fu, 0xf7bcu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1ed00du, 0x1ed229u, 278, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0xb9u, 0x5300u, 0xa253u, 0x6b3au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1ed237u, 0x1ed483u, 195, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 195@0x9fb50:1, ip += +0x4; dispatch_model=static_100", 0x12u, 0xe800u, 0x4e8u, 0x363au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_028_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_028_mba_reduced_cases) / sizeof(vm_program_atlas_028_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_028_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_028_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_028_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_028_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_028_mba_successor_1ec0ab(void) {
    return 0x1ec347u;
}

static uint32_t vm_program_atlas_028_mba_successor_1ec355(void) {
    return 0x1ec466u;
}

static uint32_t vm_program_atlas_028_mba_successor_1ec477(void) {
    return 0x1ec5c3u;
}

static uint32_t vm_program_atlas_028_mba_successor_1ec5d1(void) {
    return 0x1ec87au;
}

static uint32_t vm_program_atlas_028_mba_successor_1ec888(void) {
    return 0x1ecb65u;
}

static uint32_t vm_program_atlas_028_mba_successor_1ecb73(void) {
    return 0x1ecdd5u;
}

static uint32_t vm_program_atlas_028_mba_successor_1ecde3(void) {
    return 0x1ecfffu;
}

static uint32_t vm_program_atlas_028_mba_successor_1ed00d(void) {
    return 0x1ed229u;
}

static uint32_t vm_program_atlas_028_mba_successor_1ed237(void) {
    return 0x1ed483u;
}

#endif /* VM_PROGRAM_ATLAS_028_MBA_REDUCED_C */
