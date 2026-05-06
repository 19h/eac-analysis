/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_051_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_051_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_051_mba_reduced_cases[] = {
    {0x33a385u, 0x33a50bu, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xfeu, 0xe800u, 0x1e8u, 0x475au, 0xe7b209f8u, 0x20u, ""},
    {0x33a519u, 0x33a6ccu, 299, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 299@0xb6bba:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xacu, 0xb200u, 0xafb2u, 0xebu, 0xa96af0b9u, 0x89c53888u, ""},
};

enum { VM_PROGRAM_ATLAS_051_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_051_mba_reduced_cases) / sizeof(vm_program_atlas_051_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_051_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_051_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_051_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_051_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_051_mba_successor_33a385(void) {
    return 0x33a50bu;
}

static uint32_t vm_program_atlas_051_mba_successor_33a519(void) {
    return 0x33a6ccu;
}

#endif /* VM_PROGRAM_ATLAS_051_MBA_REDUCED_C */
