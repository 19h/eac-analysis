/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_026_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_026_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_026_mba_reduced_cases[] = {
    {0x1a480du, 0x1a4a91u, 311, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100", 0xabu, 0xe800u, 0x1e8u, 0x151u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1a4a9fu, 0x1a4c73u, 356, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100", 0x2bu, 0xed00u, 0x7dedu, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1a4c81u, 0x1a4daau, 334, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 334@0xbdd18:1, ip += +0x5; dispatch_model=static_100", 0x10cu, 0x4a01u, 0x1c4au, 0x67aeu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1a4dbbu, 0x1a4fc9u, 356, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100", 0x8217u, 0xd382u, 0x28d3u, 0x988eu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1a4fd7u, 0x1a519eu, 80, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 80@0x88a58:1, ip += +0x4; dispatch_model=static_100", 0x9du, 0x2f00u, 0xcf2fu, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1a51afu, 0x1a52c0u, 75, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 75@0x873fc:1, ip += +0x5; dispatch_model=static_100", 0x9du, 0x2f00u, 0xcf2fu, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1a52d0u, 0x1a5438u, 278, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0x9594u, 0xbc95u, 0x54bcu, 0x3a0au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1a5446u, 0x1a55efu, 145, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 145@0x95b5c:1, ip += +0x5; dispatch_model=static_100", 0x12u, 0x4000u, 0x540u, 0x143au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1a5600u, 0x1a5793u, 278, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0x8611u, 0xfe86u, 0x38feu, 0xf43u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1a57a1u, 0x1a5968u, 321, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 321@0xbb1dd:1, ip += +0x4; dispatch_model=static_100", 0x72u, 0xdb00u, 0x63dbu, 0xac8cu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1a5979u, 0x1a5a8au, 316, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 316@0xb987b:1, ip += +0x5; dispatch_model=static_100", 0x151u, 0x1801u, 0x9818u, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1a5a9au, 0x1a5d7eu, 311, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100", 0x8d0du, 0x6d8du, 0x6du, 0xca73u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x1a5d8cu, 0x1a5f3du, 165, "needs_more_evidence", "decoded_control", "next = table[165], ip += 0x55", 0x15bu, 0x6001u, 0x3060u, 0x962u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_026_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_026_mba_reduced_cases) / sizeof(vm_program_atlas_026_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_026_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_026_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_026_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_026_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_026_mba_successor_1a480d(void) {
    return 0x1a4a91u;
}

static uint32_t vm_program_atlas_026_mba_successor_1a4a9f(void) {
    return 0x1a4c73u;
}

static uint32_t vm_program_atlas_026_mba_successor_1a4c81(void) {
    return 0x1a4daau;
}

static uint32_t vm_program_atlas_026_mba_successor_1a4dbb(void) {
    return 0x1a4fc9u;
}

static uint32_t vm_program_atlas_026_mba_successor_1a4fd7(void) {
    return 0x1a519eu;
}

static uint32_t vm_program_atlas_026_mba_successor_1a51af(void) {
    return 0x1a52c0u;
}

static uint32_t vm_program_atlas_026_mba_successor_1a52d0(void) {
    return 0x1a5438u;
}

static uint32_t vm_program_atlas_026_mba_successor_1a5446(void) {
    return 0x1a55efu;
}

static uint32_t vm_program_atlas_026_mba_successor_1a5600(void) {
    return 0x1a5793u;
}

static uint32_t vm_program_atlas_026_mba_successor_1a57a1(void) {
    return 0x1a5968u;
}

static uint32_t vm_program_atlas_026_mba_successor_1a5979(void) {
    return 0x1a5a8au;
}

static uint32_t vm_program_atlas_026_mba_successor_1a5a9a(void) {
    return 0x1a5d7eu;
}

static uint32_t vm_program_atlas_026_mba_successor_1a5d8c(void) {
    return 0x1a5f3du;
}

#endif /* VM_PROGRAM_ATLAS_026_MBA_REDUCED_C */
