/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_005_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_005_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_005_mba_reduced_cases[] = {
    {0xda38fu, 0xda4b0u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x72u, 0xa200u, 0x63a2u, 0xac5bu, 0x58u, 0x400802u, ""},
    {0xda4beu, 0xdac57u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x670", 0x133u, 0x3a01u, 0x9d3au, 0x99afu, 0x3f061baau, 0x4000000u, ""},
};

enum { VM_PROGRAM_ATLAS_005_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_005_mba_reduced_cases) / sizeof(vm_program_atlas_005_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_005_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_005_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_005_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_005_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_005_mba_successor_da38f(void) {
    return 0xda4b0u;
}

static uint32_t vm_program_atlas_005_mba_successor_da4be(void) {
    return 0xdac57u;
}

#endif /* VM_PROGRAM_ATLAS_005_MBA_REDUCED_C */
