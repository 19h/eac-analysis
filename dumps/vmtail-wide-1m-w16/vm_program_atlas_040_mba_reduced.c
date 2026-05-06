/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_040_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_040_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_040_mba_reduced_cases[] = {
    {0x2c1156u, 0x2c1277u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0x1eu, 0x1000u, 0x1f10u, 0x1e8u, 0xff96fff8u, 0x9628aa8fu, ""},
    {0x2c1285u, 0x292f3eu, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x2e48f", 0x102u, 0x9e01u, 0xc39eu, 0x7607u, 0xbffce774u, 0xdb19a1edu, ""},
};

enum { VM_PROGRAM_ATLAS_040_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_040_mba_reduced_cases) / sizeof(vm_program_atlas_040_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_040_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_040_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_040_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_040_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_040_mba_successor_2c1156(void) {
    return 0x2c1277u;
}

static uint32_t vm_program_atlas_040_mba_successor_2c1285(void) {
    return 0x292f3eu;
}

#endif /* VM_PROGRAM_ATLAS_040_MBA_REDUCED_C */
