/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_004_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_004_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_004_mba_reduced_cases[] = {
    {0xd718eu, 0xd73aeu, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x1e8u, 0xa501u, 0xa5u, 0xbdu, 0xbb150900u, 0xbfdd7fedu, ""},
    {0xd73bcu, 0xd75f1u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x15bu, 0x801u, 0x3808u, 0x962u, 0xd11dec8fu, 0x6e822033u, ""},
    {0xd75ffu, 0xd77c8u, 69, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 69@0x85f24:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xc7u, 0xc700u, 0x45c7u, 0x4d3au, 0x3ffda384u, 0x2be4bddcu, ""},
    {0xd77d9u, 0xda38fu, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x2aa5", 0x102u, 0x9601u, 0xbf96u, 0x7607u, 0xbffd67bbu, 0x76b2704cu, ""},
};

enum { VM_PROGRAM_ATLAS_004_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_004_mba_reduced_cases) / sizeof(vm_program_atlas_004_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_004_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_004_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_004_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_004_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_004_mba_successor_d718e(void) {
    return 0xd73aeu;
}

static uint32_t vm_program_atlas_004_mba_successor_d73bc(void) {
    return 0xd75f1u;
}

static uint32_t vm_program_atlas_004_mba_successor_d75ff(void) {
    return 0xd77c8u;
}

static uint32_t vm_program_atlas_004_mba_successor_d77d9(void) {
    return 0xda38fu;
}

#endif /* VM_PROGRAM_ATLAS_004_MBA_REDUCED_C */
