/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_060_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_060_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_060_mba_reduced_cases[] = {
    {0x369ad3u, 0x368f60u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip -= 0xbc0", 0x79u, 0x5800u, 0x6058u, 0xff34u, 0xf7ffef9eu, 0x6008824u, ""},
    {0x369b28u, 0x369c4au, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0x40u, 0x600u, 0xa406u, 0x68u, 0x4150630u, 0x95b0f1e6u, ""},
    {0x369c58u, 0x369edbu, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0x14du, 0xeb01u, 0xe0ebu, 0x99u, 0x10547f60u, 0x7ff45e28u, ""},
    {0x369ee9u, 0x364c72u, 310, "ready_for_mba_reduction", "decoded_control", "sampled operand footprint 0x6; observed target table[310], delta -0x542a", 0x40u, 0x7500u, 0xa375u, 0x99u, 0xdc8e08b0u, 0xdedffffdu, ""},
};

enum { VM_PROGRAM_ATLAS_060_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_060_mba_reduced_cases) / sizeof(vm_program_atlas_060_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_060_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_060_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_060_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_060_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_060_mba_successor_369ad3(void) {
    return 0x368f60u;
}

static uint32_t vm_program_atlas_060_mba_successor_369b28(void) {
    return 0x369c4au;
}

static uint32_t vm_program_atlas_060_mba_successor_369c58(void) {
    return 0x369edbu;
}

static uint32_t vm_program_atlas_060_mba_successor_369ee9(void) {
    return 0x364c72u;
}

#endif /* VM_PROGRAM_ATLAS_060_MBA_REDUCED_C */
