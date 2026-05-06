/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_016_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_016_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_016_mba_reduced_cases[] = {
    {0x121b31u, 0x121c83u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0x104u, 0xd01u, 0xf0du, 0xbfc3u, 0x3a832db5u, 0xaafb2e95u, ""},
    {0x121c91u, 0x121ec6u, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0x133u, 0x3a01u, 0xd3au, 0xefb0u, 0x105528fau, 0x3bd24ca8u, ""},
    {0x121ed4u, 0x122074u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x77", 0x42u, 0x1900u, 0x9819u, 0x5b3au, 0xf9955f7fu, 0x124c7dc5u, ""},
};

enum { VM_PROGRAM_ATLAS_016_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_016_mba_reduced_cases) / sizeof(vm_program_atlas_016_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_016_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_016_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_016_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_016_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_016_mba_successor_121b31(void) {
    return 0x121c83u;
}

static uint32_t vm_program_atlas_016_mba_successor_121c91(void) {
    return 0x121ec6u;
}

static uint32_t vm_program_atlas_016_mba_successor_121ed4(void) {
    return 0x122074u;
}

#endif /* VM_PROGRAM_ATLAS_016_MBA_REDUCED_C */
