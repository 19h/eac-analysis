/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_022_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_022_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_022_mba_reduced_cases[] = {
    {0x176883u, 0x176aa5u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0xabu, 0xe800u, 0x1e8u, 0x15bu, 0xdeab6bf9u, 0x108a6bc4u, ""},
    {0x176ab3u, 0x176c87u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0xc7u, 0x5700u, 0x4957u, 0xfb3au, 0xa0fdfbb1u, 0x37d4ec9cu, ""},
    {0x176c95u, 0x176e97u, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0x151u, 0xb801u, 0x97b8u, 0x99u, 0xc000c077u, 0xd25f080u, ""},
    {0x176ea5u, 0x1770e9u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0x151u, 0x6001u, 0x9c60u, 0x99u, 0x573ce88cu, 0xc400080u, ""},
    {0x1770f7u, 0x177353u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x57", 0xc7u, 0xf700u, 0x4ef7u, 0xfc3au, 0xcca3e037u, 0xb09c5dedu, ""},
};

enum { VM_PROGRAM_ATLAS_022_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_022_mba_reduced_cases) / sizeof(vm_program_atlas_022_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_022_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_022_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_022_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_022_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_022_mba_successor_176883(void) {
    return 0x176aa5u;
}

static uint32_t vm_program_atlas_022_mba_successor_176ab3(void) {
    return 0x176c87u;
}

static uint32_t vm_program_atlas_022_mba_successor_176c95(void) {
    return 0x176e97u;
}

static uint32_t vm_program_atlas_022_mba_successor_176ea5(void) {
    return 0x1770e9u;
}

static uint32_t vm_program_atlas_022_mba_successor_1770f7(void) {
    return 0x177353u;
}

#endif /* VM_PROGRAM_ATLAS_022_MBA_REDUCED_C */
