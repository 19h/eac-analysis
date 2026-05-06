/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_006_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_006_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_006_mba_reduced_cases[] = {
    {0xdac57u, 0xdad78u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x15bu, 0x1901u, 0x3719u, 0x931u, 0xa3fe9eb7u, 0x3d5986e9u, ""},
    {0xdad86u, 0xdaf39u, 195, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 195@0x9fb50:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xb9u, 0x1b00u, 0xab1bu, 0xe93au, 0x6f8ffa0bu, 0x4f02306du, ""},
};

enum { VM_PROGRAM_ATLAS_006_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_006_mba_reduced_cases) / sizeof(vm_program_atlas_006_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_006_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_006_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_006_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_006_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_006_mba_successor_dac57(void) {
    return 0xdad78u;
}

static uint32_t vm_program_atlas_006_mba_successor_dad86(void) {
    return 0xdaf39u;
}

#endif /* VM_PROGRAM_ATLAS_006_MBA_REDUCED_C */
