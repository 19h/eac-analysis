/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_003_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_003_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_003_mba_reduced_cases[] = {
    {0xd5a12u, 0xd5b17u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x9du, 0x8b00u, 0xd78bu, 0x19du, 0x8722e376u, 0x1022b785u, ""},
    {0xd5b25u, 0xd5cfbu, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xc4u, 0x4f00u, 0x6e4fu, 0xf45cu, 0xce30c8c2u, 0xeb700f42u, ""},
    {0xd5d09u, 0xd5ebcu, 195, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 195@0x9fb50:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x40u, 0xbd00u, 0xa7bdu, 0x99u, 0x69452d03u, 0x4040000u, ""},
};

enum { VM_PROGRAM_ATLAS_003_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_003_mba_reduced_cases) / sizeof(vm_program_atlas_003_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_003_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_003_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_003_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_003_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_003_mba_successor_d5a12(void) {
    return 0xd5b17u;
}

static uint32_t vm_program_atlas_003_mba_successor_d5b25(void) {
    return 0xd5cfbu;
}

static uint32_t vm_program_atlas_003_mba_successor_d5d09(void) {
    return 0xd5ebcu;
}

#endif /* VM_PROGRAM_ATLAS_003_MBA_REDUCED_C */
