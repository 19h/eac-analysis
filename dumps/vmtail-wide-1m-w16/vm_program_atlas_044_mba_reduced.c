/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_044_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_044_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_044_mba_reduced_cases[] = {
    {0x31ea5cu, 0x31eae4u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x58", 0x10cu, 0x6401u, 0x1c64u, 0x6276u, 0x6a040490u, 0xe08fc8au, ""},
};

enum { VM_PROGRAM_ATLAS_044_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_044_mba_reduced_cases) / sizeof(vm_program_atlas_044_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_044_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_044_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_044_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_044_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_044_mba_successor_31ea5c(void) {
    return 0x31eae4u;
}

#endif /* VM_PROGRAM_ATLAS_044_MBA_REDUCED_C */
