/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_012_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_012_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_012_mba_reduced_cases[] = {
    {0x11e574u, 0x11e695u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0x104u, 0x1501u, 0xf15u, 0xbfc3u, 0x2060000u, 0xa53a794u, ""},
    {0x11e6a3u, 0x11e962u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0x15bu, 0x3801u, 0x3c38u, 0x962u, 0xa6d60230u, 0xffad2d50u, ""},
    {0x11e970u, 0x11eb8cu, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0xc7u, 0xbf00u, 0x49bfu, 0x853au, 0x1054d8e2u, 0x3f405cb8u, ""},
    {0x11eb9au, 0x11edcfu, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100", 0xbdu, 0x9900u, 0x99u, 0xed6cu, 0xb83ba1eeu, 0xcde93cb0u, ""},
    {0x11edddu, 0x11ef65u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x77", 0x14du, 0xd301u, 0xe4d3u, 0x99u, 0xd14500cfu, 0x73c3092au, ""},
};

enum { VM_PROGRAM_ATLAS_012_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_012_mba_reduced_cases) / sizeof(vm_program_atlas_012_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_012_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_012_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_012_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_012_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_012_mba_successor_11e574(void) {
    return 0x11e695u;
}

static uint32_t vm_program_atlas_012_mba_successor_11e6a3(void) {
    return 0x11e962u;
}

static uint32_t vm_program_atlas_012_mba_successor_11e970(void) {
    return 0x11eb8cu;
}

static uint32_t vm_program_atlas_012_mba_successor_11eb9a(void) {
    return 0x11edcfu;
}

static uint32_t vm_program_atlas_012_mba_successor_11eddd(void) {
    return 0x11ef65u;
}

#endif /* VM_PROGRAM_ATLAS_012_MBA_REDUCED_C */
