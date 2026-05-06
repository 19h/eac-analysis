/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_054_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_054_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_054_mba_reduced_cases[] = {
    {0x33e889u, 0x33dd15u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip -= 0xbc1", 0xbdu, 0x6800u, 0x68u, 0xed6cu, 0x3a8307f0u, 0x72bfa236u, ""},
    {0x33e8deu, 0x3369fcu, 169, "ready_for_mba_reduction", "decoded_control", "sampled operand footprint 0x6; observed target table[169], delta -0x7fe6", 0xc7u, 0xdf00u, 0x4ddfu, 0xd43au, 0xfc0507b0u, 0xa20bb5aau, ""},
};

enum { VM_PROGRAM_ATLAS_054_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_054_mba_reduced_cases) / sizeof(vm_program_atlas_054_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_054_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_054_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_054_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_054_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_054_mba_successor_33e889(void) {
    return 0x33dd15u;
}

static uint32_t vm_program_atlas_054_mba_successor_33e8de(void) {
    return 0x3369fcu;
}

#endif /* VM_PROGRAM_ATLAS_054_MBA_REDUCED_C */
