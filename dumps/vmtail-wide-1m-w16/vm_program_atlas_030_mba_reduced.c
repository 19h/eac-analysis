/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_030_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_030_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_030_mba_reduced_cases[] = {
    {0x230722u, 0x230839u, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x1e8u, 0x6201u, 0x162u, 0xd7u, 0x7586f8e6u, 0x987d8f4au, ""},
    {0x230839u, 0x230b1bu, 50, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 50@0x82e76:64, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xb9u, 0x1b00u, 0xab1bu, 0x2350u, 0xfffee627u, 0xedd9fde4u, ""},
    {0x230b2cu, 0x230e07u, 321, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 321@0xbb1dd:64, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xc4u, 0x4f00u, 0x6e4fu, 0xf40cu, 0xfa431b65u, 0x902523f0u, ""},
    {0x230e18u, 0x230839u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x9de", 0x14du, 0xc301u, 0xe9c3u, 0x99u, 0x38c4ada3u, 0x58e66062u, ""},
};

enum { VM_PROGRAM_ATLAS_030_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_030_mba_reduced_cases) / sizeof(vm_program_atlas_030_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_030_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_030_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_030_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_030_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_030_mba_successor_230722(void) {
    return 0x230839u;
}

static uint32_t vm_program_atlas_030_mba_successor_230839(void) {
    return 0x230b1bu;
}

static uint32_t vm_program_atlas_030_mba_successor_230b2c(void) {
    return 0x230e07u;
}

static uint32_t vm_program_atlas_030_mba_successor_230e18(void) {
    return 0x230839u;
}

#endif /* VM_PROGRAM_ATLAS_030_MBA_REDUCED_C */
