/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_063_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_063_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_063_mba_reduced_cases[] = {
    {0x36ecdcu, 0x36eefeu, 165, "needs_more_evidence", "fallthrough", "next = 165@0x9a24c:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x1e8u, 0xa501u, 0xa5u, 0xbdu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36eefeu, 0x36ef46u, 171, "needs_more_evidence", "decoded_control", "next = table[171], ip += 0x30", 0x12u, 0xc800u, 0xac8u, 0x303au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36ef2cu, 0x36eefeu, 165, "needs_more_evidence", "decoded_control", "next = table[165], ip -= 0x40", 0x9a17u, 0x69au, 0x3706u, 0x4dfdu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36ef46u, 0x36f14au, 165, "needs_more_evidence", "fallthrough", "next = 165@0x9a24c:1, ip += +0x2; dispatch_model=static_100; state=state_mixed", 0xfeu, 0xe800u, 0x1e8u, 0x4742u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36f14au, 0x36f6afu, 165, "needs_more_evidence", "decoded_control", "next = table[165], ip += 0x288", 0x102u, 0x3701u, 0xb637u, 0x75d6u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36f438u, 0x36f14au, 165, "needs_more_evidence", "decoded_control", "next = table[165], ip -= 0x55d", 0x1e8u, 0x2e01u, 0x8a2eu, 0x8f99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36f6afu, 0x36f820u, 165, "needs_more_evidence", "fallthrough", "next = 165@0x9a24c:1, ip += +0x2; dispatch_model=static_100", 0x15bu, 0x8101u, 0x3981u, 0x931u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36f820u, 0x36faf6u, 171, "needs_more_evidence", "decoded_control", "next = table[171], ip += 0x28b", 0xc7u, 0x6f00u, 0x456fu, 0x343au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36f87cu, 0x36f820u, 165, "needs_more_evidence", "decoded_control", "next = table[165], ip -= 0x2ce", 0x4f46u, 0x7d4fu, 0x247du, 0x7ba9u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36faf6u, 0x36fca8u, 264, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0xbdu, 0x6800u, 0x68u, 0xefdcu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36fcb6u, 0x36fed4u, 356, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100", 0x72u, 0x7300u, 0x6373u, 0xac8cu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x36fee2u, 0x370127u, 69, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 69@0x85f24:1, ip += +0x4; dispatch_model=static_100", 0xc7u, 0x9f00u, 0x4a9fu, 0x433au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x370138u, 0x370249u, 246, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 246@0xab427:1, ip += +0x5; dispatch_model=static_100", 0x2bu, 0x2d00u, 0x7e2du, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x370256u, 0x370258u, 340, "needs_more_evidence", "fallthrough", "next = 340@0xbf435:25, ip += +0x2; dispatch_model=static_100; state=state_const_post", 0x154u, 0xfc01u, 0xdfcu, 0x68u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x370258u, 0x3703d8u, 311, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 311@0xb86f8:26, ip += +0x4; dispatch_model=static_100", 0xdfcu, 0x680du, 0x68u, 0x546au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x3703e6u, 0x370770u, 354, "needs_more_evidence", "decoded_control", "next = table[354], ip += 0x279", 0x14du, 0xfb01u, 0xe6fbu, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x370508u, 0x370624u, 95, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 95@0x8c41c:25, ip += +0x4; dispatch_model=static_100", 0xac55u, 0xaaacu, 0xb8aau, 0x3880u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x370632u, 0x370743u, 145, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 145@0x95b5c:25, ip += +0x5; dispatch_model=static_100", 0x9du, 0x8f00u, 0xd78fu, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x370756u, 0x37078au, 171, "needs_more_evidence", "decoded_control", "next = table[171], ip += 0x22", 0x875u, 0x2508u, 0x8f25u, 0x200u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x370770u, 0x37078au, 171, "needs_more_evidence", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100", 0xc7u, 0xd700u, 0x48d7u, 0x6a50u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x37078au, 0x371a63u, 165, "needs_more_evidence", "decoded_control", "next = table[165], ip += 0x12c3", 0xa8u, 0xb300u, 0xb3u, 0xd586u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x3707b1u, 0x3708e4u, 264, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:25, ip += +0x4; dispatch_model=static_100", 0x9267u, 0x492u, 0xda04u, 0xc6dcu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x3708f2u, 0x370a81u, 246, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 246@0xab427:25, ip += +0x5; dispatch_model=static_100", 0x151u, 0xf001u, 0x94f0u, 0x99u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x370a91u, 0x370cb0u, 356, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 356@0xc291a:25, ip += +0x4; dispatch_model=static_100", 0xf4du, 0xef0fu, 0x82efu, 0xc0afu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x370cbeu, 0x370f0au, 264, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:25, ip += +0x4; dispatch_model=static_100", 0x42u, 0x7900u, 0x9379u, 0x793au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x370f18u, 0x37142cu, 354, "needs_more_evidence", "fallthrough", "next = 354@0xc2241:25, ip += +0x2; dispatch_model=static_100", 0xc7u, 0xd700u, 0x4ed7u, 0x533au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x37142cu, 0x37171cu, 354, "needs_more_evidence", "decoded_control", "next = table[354], ip += 0x2a5", 0xb9u, 0xe300u, 0xa9e3u, 0x953au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x371488u, 0x3716c7u, 354, "needs_more_evidence", "decoded_control", "next = table[354], ip += 0x139", 0x1e8u, 0x1u, 0x2a00u, 0x361du, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_063_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_063_mba_reduced_cases) / sizeof(vm_program_atlas_063_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_063_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_063_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_063_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_063_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_063_mba_successor_36ecdc(void) {
    return 0x36eefeu;
}

static uint32_t vm_program_atlas_063_mba_successor_36eefe(void) {
    return 0x36ef46u;
}

static uint32_t vm_program_atlas_063_mba_successor_36ef2c(void) {
    return 0x36eefeu;
}

static uint32_t vm_program_atlas_063_mba_successor_36ef46(void) {
    return 0x36f14au;
}

static uint32_t vm_program_atlas_063_mba_successor_36f14a(void) {
    return 0x36f6afu;
}

static uint32_t vm_program_atlas_063_mba_successor_36f438(void) {
    return 0x36f14au;
}

static uint32_t vm_program_atlas_063_mba_successor_36f6af(void) {
    return 0x36f820u;
}

static uint32_t vm_program_atlas_063_mba_successor_36f820(void) {
    return 0x36faf6u;
}

static uint32_t vm_program_atlas_063_mba_successor_36f87c(void) {
    return 0x36f820u;
}

static uint32_t vm_program_atlas_063_mba_successor_36faf6(void) {
    return 0x36fca8u;
}

static uint32_t vm_program_atlas_063_mba_successor_36fcb6(void) {
    return 0x36fed4u;
}

static uint32_t vm_program_atlas_063_mba_successor_36fee2(void) {
    return 0x370127u;
}

static uint32_t vm_program_atlas_063_mba_successor_370138(void) {
    return 0x370249u;
}

static uint32_t vm_program_atlas_063_mba_successor_370256(void) {
    return 0x370258u;
}

static uint32_t vm_program_atlas_063_mba_successor_370258(void) {
    return 0x3703d8u;
}

static uint32_t vm_program_atlas_063_mba_successor_3703e6(void) {
    return 0x370770u;
}

static uint32_t vm_program_atlas_063_mba_successor_370508(void) {
    return 0x370624u;
}

static uint32_t vm_program_atlas_063_mba_successor_370632(void) {
    return 0x370743u;
}

static uint32_t vm_program_atlas_063_mba_successor_370756(void) {
    return 0x37078au;
}

static uint32_t vm_program_atlas_063_mba_successor_370770(void) {
    return 0x37078au;
}

static uint32_t vm_program_atlas_063_mba_successor_37078a(void) {
    return 0x371a63u;
}

static uint32_t vm_program_atlas_063_mba_successor_3707b1(void) {
    return 0x3708e4u;
}

static uint32_t vm_program_atlas_063_mba_successor_3708f2(void) {
    return 0x370a81u;
}

static uint32_t vm_program_atlas_063_mba_successor_370a91(void) {
    return 0x370cb0u;
}

static uint32_t vm_program_atlas_063_mba_successor_370cbe(void) {
    return 0x370f0au;
}

static uint32_t vm_program_atlas_063_mba_successor_370f18(void) {
    return 0x37142cu;
}

static uint32_t vm_program_atlas_063_mba_successor_37142c(void) {
    return 0x37171cu;
}

static uint32_t vm_program_atlas_063_mba_successor_371488(void) {
    return 0x3716c7u;
}

#endif /* VM_PROGRAM_ATLAS_063_MBA_REDUCED_C */
