/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_043_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_043_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_043_mba_reduced_cases[] = {
    {0x31df8fu, 0x334a3du, 42, "ready_for_mba_reduction", "decoded_control", "sampled operand footprint 0xa; observed target table[42], delta +0x169eb", 0x1cu, 0xe800u, 0x5e8u, 0x7410u, 0xe505eed1u, 0x566fcefcu, ""},
    {0x31e060u, 0x31e171u, 145, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 145@0x95b5c:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0xc4u, 0x4f00u, 0x6e4fu, 0xf034u, 0x16833a04u, 0x16833a04u, ""},
    {0x31e182u, 0x31e23fu, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x4d0eu, 0x494du, 0xe849u, 0xce01u, 0x18020620u, 0xf8d800f1u, ""},
    {0x31e24du, 0x31e35eu, 316, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 316@0xb987b:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0x14du, 0x7b01u, 0xdf7bu, 0x99u, 0xcd4a57b7u, 0x493c4eceu, ""},
    {0x31e36fu, 0x31e42cu, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x9703u, 0x8097u, 0xe880u, 0x901u, 0xa8c7de82u, 0xcffaa845u, ""},
    {0x31e43au, 0x31e54bu, 75, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 75@0x873fc:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0x129u, 0x3101u, 0xe31u, 0xbaebu, 0x8e2e68bfu, 0x834faf4du, ""},
    {0x31e55cu, 0x33b647u, 42, "ready_for_mba_reduction", "decoded_control", "sampled operand footprint 0xa; observed target table[42], delta +0x1d02e", 0xa0u, 0xac00u, 0xe8acu, 0x8b01u, 0x99812d03u, 0x10812ba0u, ""},
    {0x31e627u, 0x31e738u, 246, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 246@0xab427:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0x40u, 0xc500u, 0xa6c5u, 0x99u, 0xb709749du, 0xda6abf6du, ""},
    {0x31e749u, 0x31e77fu, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x22", 0xa09fu, 0xca0u, 0xf60cu, 0xc146u, 0x48100200u, 0x3a08325au, ""},
    {0x31e77fu, 0x31ea5cu, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x21a", 0x72u, 0x9a00u, 0x649au, 0xac5bu, 0xc0171c7bu, 0xa7b508c2u, ""},
};

enum { VM_PROGRAM_ATLAS_043_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_043_mba_reduced_cases) / sizeof(vm_program_atlas_043_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_043_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_043_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_043_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_043_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_043_mba_successor_31df8f(void) {
    return 0x334a3du;
}

static uint32_t vm_program_atlas_043_mba_successor_31e060(void) {
    return 0x31e171u;
}

static uint32_t vm_program_atlas_043_mba_successor_31e182(void) {
    return 0x31e23fu;
}

static uint32_t vm_program_atlas_043_mba_successor_31e24d(void) {
    return 0x31e35eu;
}

static uint32_t vm_program_atlas_043_mba_successor_31e36f(void) {
    return 0x31e42cu;
}

static uint32_t vm_program_atlas_043_mba_successor_31e43a(void) {
    return 0x31e54bu;
}

static uint32_t vm_program_atlas_043_mba_successor_31e55c(void) {
    return 0x33b647u;
}

static uint32_t vm_program_atlas_043_mba_successor_31e627(void) {
    return 0x31e738u;
}

static uint32_t vm_program_atlas_043_mba_successor_31e749(void) {
    return 0x31e77fu;
}

static uint32_t vm_program_atlas_043_mba_successor_31e77f(void) {
    return 0x31ea5cu;
}

#endif /* VM_PROGRAM_ATLAS_043_MBA_REDUCED_C */
