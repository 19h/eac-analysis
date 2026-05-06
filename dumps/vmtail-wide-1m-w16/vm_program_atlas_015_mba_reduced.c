/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_015_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_015_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_015_mba_reduced_cases[] = {
    {0x1210d6u, 0x121199u, 278, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0x133u, 0x3a01u, 0xc53au, 0x7cb1u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1211a7u, 0x121435u, 311, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100", 0x72u, 0xf300u, 0x5ef3u, 0xac8cu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x121443u, 0x121690u, 278, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0x151u, 0x8801u, 0x9488u, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x12169eu, 0x1217c7u, 316, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 316@0xb987b:1, ip += +0x5; dispatch_model=static_100", 0x102u, 0x1e01u, 0xb91eu, 0x7607u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1217d8u, 0x121924u, 278, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0x9bau, 0x8409u, 0x9984u, 0x1e8u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x121932u, 0x121a8au, 171, "needs_more_evidence", "decoded_control", "next = table[171], ip += 0x2f", 0x40u, 0x2d00u, 0xa72du, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x121a8au, 0x121b31u, 171, "needs_more_evidence", "decoded_control", "next = table[171], ip += 0x77", 0x14du, 0x8b01u, 0xe98bu, 0xb3u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_015_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_015_mba_reduced_cases) / sizeof(vm_program_atlas_015_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_015_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_015_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_015_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_015_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_015_mba_successor_1210d6(void) {
    return 0x121199u;
}

static uint32_t vm_program_atlas_015_mba_successor_1211a7(void) {
    return 0x121435u;
}

static uint32_t vm_program_atlas_015_mba_successor_121443(void) {
    return 0x121690u;
}

static uint32_t vm_program_atlas_015_mba_successor_12169e(void) {
    return 0x1217c7u;
}

static uint32_t vm_program_atlas_015_mba_successor_1217d8(void) {
    return 0x121924u;
}

static uint32_t vm_program_atlas_015_mba_successor_121932(void) {
    return 0x121a8au;
}

static uint32_t vm_program_atlas_015_mba_successor_121a8a(void) {
    return 0x121b31u;
}

#endif /* VM_PROGRAM_ATLAS_015_MBA_REDUCED_C */
