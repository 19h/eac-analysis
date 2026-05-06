/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_019_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_019_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_019_mba_reduced_cases[] = {
    {0x122a46u, 0x122c7bu, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100", 0x2bu, 0xa400u, 0x7ba4u, 0x68u, 0xe5057f1du, 0x4ee9d062u, ""},
    {0x122c89u, 0x122e3cu, 299, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 299@0xb6bba:1, ip += +0x4; dispatch_model=static_100", 0xc7u, 0x5700u, 0x4a57u, 0x853au, 0x978d01e4u, 0x2a040889u, ""},
};

enum { VM_PROGRAM_ATLAS_019_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_019_mba_reduced_cases) / sizeof(vm_program_atlas_019_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_019_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_019_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_019_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_019_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_019_mba_successor_122a46(void) {
    return 0x122c7bu;
}

static uint32_t vm_program_atlas_019_mba_successor_122c89(void) {
    return 0x122e3cu;
}

#endif /* VM_PROGRAM_ATLAS_019_MBA_REDUCED_C */
