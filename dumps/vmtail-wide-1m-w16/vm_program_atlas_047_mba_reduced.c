/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_047_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_047_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_047_mba_reduced_cases[] = {
    {0x333882u, 0x333a08u, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x111u, 0xd801u, 0xe9d8u, 0x228u, 0xff9b8df1u, 0x1bbd5bdau, ""},
    {0x333a16u, 0x333bc9u, 195, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 195@0x9fb50:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x72u, 0x4b00u, 0x644bu, 0xac8cu, 0x1054e34au, 0x3ff05e38u, ""},
};

enum { VM_PROGRAM_ATLAS_047_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_047_mba_reduced_cases) / sizeof(vm_program_atlas_047_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_047_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_047_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_047_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_047_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_047_mba_successor_333882(void) {
    return 0x333a08u;
}

static uint32_t vm_program_atlas_047_mba_successor_333a16(void) {
    return 0x333bc9u;
}

#endif /* VM_PROGRAM_ATLAS_047_MBA_REDUCED_C */
