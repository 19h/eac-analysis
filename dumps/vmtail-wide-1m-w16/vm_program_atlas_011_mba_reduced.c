/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_011_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_011_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_011_mba_reduced_cases[] = {
    {0x11de9fu, 0x11e02du, 78, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 78@0x883c0:1, ip += +0x4; dispatch_model=static_100", 0x129u, 0x3101u, 0xd631u, 0x17e6u, 0x82000010u, 0x5decfc86u, ""},
    {0x11e03eu, 0x11e14fu, 316, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 316@0xb987b:1, ip += +0x5; dispatch_model=static_100", 0x154u, 0xac01u, 0x12acu, 0x99u, 0xff3d5e52u, 0x124e8db5u, ""},
    {0x11e15fu, 0x11e27cu, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0x6fdcu, 0x686fu, 0x68u, 0x887u, 0x1d60u, 0x7ad7bf7fu, ""},
    {0x11e28au, 0x11e574u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x1d9", 0xbdu, 0x9900u, 0x99u, 0xefa4u, 0x41103848u, 0x41103848u, ""},
};

enum { VM_PROGRAM_ATLAS_011_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_011_mba_reduced_cases) / sizeof(vm_program_atlas_011_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_011_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_011_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_011_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_011_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_011_mba_successor_11de9f(void) {
    return 0x11e02du;
}

static uint32_t vm_program_atlas_011_mba_successor_11e03e(void) {
    return 0x11e14fu;
}

static uint32_t vm_program_atlas_011_mba_successor_11e15f(void) {
    return 0x11e27cu;
}

static uint32_t vm_program_atlas_011_mba_successor_11e28a(void) {
    return 0x11e574u;
}

#endif /* VM_PROGRAM_ATLAS_011_MBA_REDUCED_C */
