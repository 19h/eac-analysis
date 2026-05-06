/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_061_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_061_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_061_mba_reduced_cases[] = {
    {0x36b124u, 0x36b346u, 354, "needs_more_evidence", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100; state=state_mixed", 0xabu, 0xe800u, 0x1e8u, 0x151u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36b346u, 0x36b38eu, 171, "needs_more_evidence", "decoded_control", "next = table[171], ip += 0x30", 0x15bu, 0xb001u, 0x3cb0u, 0x942u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36b374u, 0x36b346u, 354, "needs_more_evidence", "decoded_control", "next = table[354], ip -= 0x40", 0x688fu, 0x5468u, 0x654u, 0x6d6u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36b38eu, 0x36b592u, 171, "needs_more_evidence", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x40u, 0xde00u, 0xa6deu, 0x68u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36b592u, 0x36b693u, 78, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 78@0x883c0:11, ip += +0x4; dispatch_model=static_100", 0xacu, 0x4300u, 0xaf43u, 0xc3u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36b6a4u, 0x36bb1eu, 354, "needs_more_evidence", "decoded_control", "next = table[354], ip += 0x288", 0x14du, 0xeb01u, 0xe0ebu, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36b8a7u, 0x36b592u, 171, "needs_more_evidence", "decoded_control", "next = table[171], ip -= 0x584", 0x1897u, 0x2a18u, 0x432au, 0xd249u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36bb1eu, 0x36bee0u, 95, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0xc4u, 0x1e00u, 0x6e1eu, 0xf834u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36beeeu, 0x36c10au, 216, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0x2bu, 0xf500u, 0x77f5u, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36c118u, 0x36c395u, 95, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0xc4u, 0x4f00u, 0x6e4fu, 0xf45cu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36c3a3u, 0x36c4e9u, 145, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 145@0x95b5c:1, ip += +0x5; dispatch_model=static_100", 0xc7u, 0xd700u, 0x4ed7u, 0xb33au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36c4fau, 0x36c68cu, 216, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0x16dcu, 0xbf16u, 0x97bfu, 0x130cu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36c69au, 0x36c829u, 210, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 210@0xa2da3:1, ip += +0x5; dispatch_model=static_100", 0xd7u, 0x2000u, 0x620u, 0xef88u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36c839u, 0x36c899u, 75, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 75@0x873fc:1, ip += +0x5; dispatch_model=static_100", 0xed63u, 0x23edu, 0x23u, 0x8c2cu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36c8aau, 0x36c9b1u, 354, "needs_more_evidence", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100", 0x1063u, 0xe810u, 0x1e8u, 0xe4d3u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36c9b1u, 0x36cabeu, 216, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 216@0xa4a61:4, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xa8u, 0x6800u, 0x68u, 0xd9e6u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36caccu, 0x36ccc6u, 50, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 50@0x82e76:4, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x151u, 0xf001u, 0x91f0u, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36ccd7u, 0x36d579u, 354, "needs_more_evidence", "decoded_control", "next = table[354], ip += 0x791", 0x72u, 0x7b00u, 0x687bu, 0xac8cu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36cdf9u, 0x36cf76u, 356, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 356@0xc291a:3, ip += +0x4; dispatch_model=static_100", 0x8a7du, 0x9c8au, 0x729cu, 0x6758u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36cf84u, 0x36d1cdu, 216, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 216@0xa4a61:3, ip += +0x4; dispatch_model=static_100", 0x12u, 0xe800u, 0x4e8u, 0x7e3au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36d1dbu, 0x36d3a2u, 80, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 80@0x88a58:3, ip += +0x4; dispatch_model=static_100", 0x10cu, 0x4a01u, 0x1c4au, 0x67ceu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36d3b3u, 0x36d524u, 354, "needs_more_evidence", "decoded_control", "next = table[354], ip += 0x60", 0x9du, 0x8f00u, 0xd78fu, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_061_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_061_mba_reduced_cases) / sizeof(vm_program_atlas_061_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_061_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_061_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_061_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_061_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_061_mba_successor_36b124(void) {
    return 0x36b346u;
}

static uint32_t vm_program_atlas_061_mba_successor_36b346(void) {
    return 0x36b38eu;
}

static uint32_t vm_program_atlas_061_mba_successor_36b374(void) {
    return 0x36b346u;
}

static uint32_t vm_program_atlas_061_mba_successor_36b38e(void) {
    return 0x36b592u;
}

static uint32_t vm_program_atlas_061_mba_successor_36b592(void) {
    return 0x36b693u;
}

static uint32_t vm_program_atlas_061_mba_successor_36b6a4(void) {
    return 0x36bb1eu;
}

static uint32_t vm_program_atlas_061_mba_successor_36b8a7(void) {
    return 0x36b592u;
}

static uint32_t vm_program_atlas_061_mba_successor_36bb1e(void) {
    return 0x36bee0u;
}

static uint32_t vm_program_atlas_061_mba_successor_36beee(void) {
    return 0x36c10au;
}

static uint32_t vm_program_atlas_061_mba_successor_36c118(void) {
    return 0x36c395u;
}

static uint32_t vm_program_atlas_061_mba_successor_36c3a3(void) {
    return 0x36c4e9u;
}

static uint32_t vm_program_atlas_061_mba_successor_36c4fa(void) {
    return 0x36c68cu;
}

static uint32_t vm_program_atlas_061_mba_successor_36c69a(void) {
    return 0x36c829u;
}

static uint32_t vm_program_atlas_061_mba_successor_36c839(void) {
    return 0x36c899u;
}

static uint32_t vm_program_atlas_061_mba_successor_36c8aa(void) {
    return 0x36c9b1u;
}

static uint32_t vm_program_atlas_061_mba_successor_36c9b1(void) {
    return 0x36cabeu;
}

static uint32_t vm_program_atlas_061_mba_successor_36cacc(void) {
    return 0x36ccc6u;
}

static uint32_t vm_program_atlas_061_mba_successor_36ccd7(void) {
    return 0x36d579u;
}

static uint32_t vm_program_atlas_061_mba_successor_36cdf9(void) {
    return 0x36cf76u;
}

static uint32_t vm_program_atlas_061_mba_successor_36cf84(void) {
    return 0x36d1cdu;
}

static uint32_t vm_program_atlas_061_mba_successor_36d1db(void) {
    return 0x36d3a2u;
}

static uint32_t vm_program_atlas_061_mba_successor_36d3b3(void) {
    return 0x36d524u;
}

#endif /* VM_PROGRAM_ATLAS_061_MBA_REDUCED_C */
