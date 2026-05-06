/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_045_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_045_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_045_mba_reduced_cases[] = {
    {0x31eae4u, 0x31ec6au, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100; state=state_const_post", 0x111u, 0xd801u, 0xe9d8u, 0x228u, 0xa3fa29e0u, 0x57923958u, ""},
    {0x31ec78u, 0x31eeadu, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x12u, 0x8800u, 0xa88u, 0xe83au, 0x10548262u, 0x3fd04ca8u, ""},
    {0x31eebbu, 0x31f0f0u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xd7u, 0x6000u, 0x560u, 0x2388u, 0xfdff5f7au, 0x4e4b93d5u, ""},
    {0x31f0feu, 0x31f2b1u, 195, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 195@0x9fb50:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x133u, 0x3a01u, 0xd3au, 0x7b0u, 0x3f05edd2u, 0x29769275u, ""},
};

enum { VM_PROGRAM_ATLAS_045_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_045_mba_reduced_cases) / sizeof(vm_program_atlas_045_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_045_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_045_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_045_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_045_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_045_mba_successor_31eae4(void) {
    return 0x31ec6au;
}

static uint32_t vm_program_atlas_045_mba_successor_31ec78(void) {
    return 0x31eeadu;
}

static uint32_t vm_program_atlas_045_mba_successor_31eebb(void) {
    return 0x31f0f0u;
}

static uint32_t vm_program_atlas_045_mba_successor_31f0fe(void) {
    return 0x31f2b1u;
}

#endif /* VM_PROGRAM_ATLAS_045_MBA_REDUCED_C */
