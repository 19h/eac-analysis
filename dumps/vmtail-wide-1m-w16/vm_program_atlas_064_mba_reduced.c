/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_064_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_064_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_064_mba_reduced_cases[] = {
    {0x3716c7u, 0x37142cu, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x2e8", 0x10cu, 0x1901u, 0x1c19u, 0x6cbeu, 0x83c2fc34u, 0xda0e0873u, ""},
    {0x37171cu, 0x3717c4u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x78", 0xfdu, 0x1e00u, 0xbe1eu, 0x0u, 0xe505d085u, 0x3d8a4075u, ""},
};

enum { VM_PROGRAM_ATLAS_064_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_064_mba_reduced_cases) / sizeof(vm_program_atlas_064_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_064_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_064_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_064_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_064_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_064_mba_successor_3716c7(void) {
    return 0x37142cu;
}

static uint32_t vm_program_atlas_064_mba_successor_37171c(void) {
    return 0x3717c4u;
}

#endif /* VM_PROGRAM_ATLAS_064_MBA_REDUCED_C */
