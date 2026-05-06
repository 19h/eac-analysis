/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_001_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_001_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_001_mba_reduced_cases[] = {
    {0xd3facu, 0xd420bu, 321, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 321@0xbb1dd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x162u, 0xe801u, 0x1e8u, 0x129u, 0x7777458eu, 0xc78ea4d6u, ""},
    {0xd421cu, 0xd43cfu, 80, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 80@0x88a58:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x129u, 0x3101u, 0xee31u, 0x16e0u, 0xdee5ebb9u, 0x42c6aa80u, ""},
    {0xd43e0u, 0xd476eu, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x20d", 0xa8u, 0x9900u, 0x99u, 0xd506u, 0x4e2d138au, 0x239b89edu, ""},
};

enum { VM_PROGRAM_ATLAS_001_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_001_mba_reduced_cases) / sizeof(vm_program_atlas_001_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_001_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_001_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_001_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_001_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_001_mba_successor_d3fac(void) {
    return 0xd420bu;
}

static uint32_t vm_program_atlas_001_mba_successor_d421c(void) {
    return 0xd43cfu;
}

static uint32_t vm_program_atlas_001_mba_successor_d43e0(void) {
    return 0xd476eu;
}

#endif /* VM_PROGRAM_ATLAS_001_MBA_REDUCED_C */
