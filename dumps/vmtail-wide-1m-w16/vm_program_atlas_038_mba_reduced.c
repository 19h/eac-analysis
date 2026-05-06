/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_038_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_038_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_038_mba_reduced_cases[] = {
    {0x2bf97cu, 0x2bfe6fu, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x4c3", 0x102u, 0xd401u, 0xc2d4u, 0x7621u, 0x3a82f4cbu, 0x4280b108u, ""},
};

enum { VM_PROGRAM_ATLAS_038_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_038_mba_reduced_cases) / sizeof(vm_program_atlas_038_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_038_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_038_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_038_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_038_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_038_mba_successor_2bf97c(void) {
    return 0x2bfe6fu;
}

#endif /* VM_PROGRAM_ATLAS_038_MBA_REDUCED_C */
