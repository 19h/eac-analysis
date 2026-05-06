/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_010_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_010_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_010_mba_reduced_cases[] = {
    {0x11c2aau, 0x11c3f9u, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x1cu, 0x6000u, 0x560u, 0x7b10u, 0x87800088u, 0xaf8ed83u, ""},
    {0x11c407u, 0x11c682u, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100; state=state_mixed", 0x15bu, 0x3801u, 0x3c38u, 0x962u, 0x3cef0830u, 0x77de2d50u, ""},
    {0x11c690u, 0x11ca2au, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x15bu, 0x4001u, 0x3140u, 0x962u, 0x4fcb06cfu, 0x8038c158u, ""},
    {0x11ca38u, 0x11ccf7u, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x10cu, 0x4a01u, 0x1c4au, 0x69f6u, 0xb11a78d1u, 0xf5e05a68u, ""},
    {0x11cd05u, 0x11cf21u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xc7u, 0xf700u, 0x4ef7u, 0x743au, 0xfff67ed7u, 0x7526bd09u, ""},
    {0x11cf2fu, 0x11d207u, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x42u, 0xf900u, 0x97f9u, 0x7b3au, 0xa0e1fc8cu, 0x6dbda5bbu, ""},
    {0x11d215u, 0x11d3d3u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x72u, 0x6b00u, 0x646bu, 0xac8cu, 0x6b345f7eu, 0x924f2425u, ""},
    {0x11d3e1u, 0x11d6a2u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x129u, 0x3101u, 0x8631u, 0xa8e2u, 0x400177d4u, 0xe890314cu, ""},
    {0x11d6b0u, 0x11d91bu, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xc7u, 0x5700u, 0x4957u, 0x633au, 0x3f061d5au, 0x40b30000u, ""},
    {0x11d929u, 0x11da3au, 145, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 145@0x95b5c:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0x9du, 0x7f00u, 0xd77fu, 0x99u, 0x1054bc08u, 0x3fd24ca8u, ""},
    {0x11da4bu, 0x33f278u, 323, "ready_for_mba_reduction", "decoded_control", "sampled operand footprint 0xa; observed target table[323], delta +0x221770", 0x4578u, 0x1a45u, 0xe81au, 0x5401u, 0xf6f61c6bu, 0x9df07098u, ""},
    {0x11db16u, 0x11dc27u, 210, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 210@0xa2da3:1, ip += +0x5; dispatch_model=static_100", 0xcbu, 0xa700u, 0x92a7u, 0x7635u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x11dc37u, 0x3603afu, 86, "needs_more_evidence", "decoded_control", "sampled operand footprint 0xa; observed target table[86], delta +0x2426ba", 0x76cdu, 0x9276u, 0x3d92u, 0x63d0u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x11dd03u, 0x11de14u, 210, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 210@0xa2da3:1, ip += +0x5; dispatch_model=static_100", 0x2bu, 0x2500u, 0x7425u, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x11de27u, 0x11de9fu, 171, "needs_more_evidence", "decoded_control", "next = table[171], ip += 0x66", 0xc18fu, 0xb3c1u, 0xb3u, 0xc770u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_010_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_010_mba_reduced_cases) / sizeof(vm_program_atlas_010_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_010_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_010_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_010_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_010_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_010_mba_successor_11c2aa(void) {
    return 0x11c3f9u;
}

static uint32_t vm_program_atlas_010_mba_successor_11c407(void) {
    return 0x11c682u;
}

static uint32_t vm_program_atlas_010_mba_successor_11c690(void) {
    return 0x11ca2au;
}

static uint32_t vm_program_atlas_010_mba_successor_11ca38(void) {
    return 0x11ccf7u;
}

static uint32_t vm_program_atlas_010_mba_successor_11cd05(void) {
    return 0x11cf21u;
}

static uint32_t vm_program_atlas_010_mba_successor_11cf2f(void) {
    return 0x11d207u;
}

static uint32_t vm_program_atlas_010_mba_successor_11d215(void) {
    return 0x11d3d3u;
}

static uint32_t vm_program_atlas_010_mba_successor_11d3e1(void) {
    return 0x11d6a2u;
}

static uint32_t vm_program_atlas_010_mba_successor_11d6b0(void) {
    return 0x11d91bu;
}

static uint32_t vm_program_atlas_010_mba_successor_11d929(void) {
    return 0x11da3au;
}

static uint32_t vm_program_atlas_010_mba_successor_11da4b(void) {
    return 0x33f278u;
}

static uint32_t vm_program_atlas_010_mba_successor_11db16(void) {
    return 0x11dc27u;
}

static uint32_t vm_program_atlas_010_mba_successor_11dc37(void) {
    return 0x3603afu;
}

static uint32_t vm_program_atlas_010_mba_successor_11dd03(void) {
    return 0x11de14u;
}

static uint32_t vm_program_atlas_010_mba_successor_11de27(void) {
    return 0x11de9fu;
}

#endif /* VM_PROGRAM_ATLAS_010_MBA_REDUCED_C */
