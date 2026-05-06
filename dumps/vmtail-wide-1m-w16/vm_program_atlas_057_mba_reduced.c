/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_057_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_057_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_057_mba_reduced_cases[] = {
    {0x365458u, 0x3654e0u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x58", 0xbdu, 0xb300u, 0xb3u, 0xe964u, 0xe505d812u, 0x427f7ff1u, ""},
};

enum { VM_PROGRAM_ATLAS_057_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_057_mba_reduced_cases) / sizeof(vm_program_atlas_057_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_057_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_057_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_057_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_057_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_057_mba_successor_365458(void) {
    return 0x3654e0u;
}

#endif /* VM_PROGRAM_ATLAS_057_MBA_REDUCED_C */
