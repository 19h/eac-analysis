/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_025_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_025_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_025_mba_reduced_cases[] = {
    {0x18b66fu, 0x18b88fu, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xabu, 0xe800u, 0x1e8u, 0x2bu, 0x4d77e943u, 0x4537c942u, ""},
    {0x18b89du, 0x18ba5bu, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xcbu, 0x9f00u, 0x919fu, 0x7635u, 0x13c80d8u, 0x103eb39eu, ""},
    {0x18ba69u, 0x18bd8cu, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xc7u, 0x5700u, 0x4a57u, 0x853au, 0x914f615cu, 0xe595dbu, ""},
    {0x18bd9au, 0x18beabu, 75, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 75@0x873fc:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0x1cu, 0x6000u, 0x560u, 0x8a10u, 0x2a9356c3u, 0x39d44ca8u, ""},
    {0x18bebcu, 0x18c07au, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x109bu, 0xe810u, 0x1e8u, 0x270au, 0xff7605e2u, 0xffefef7fu, ""},
    {0x18c088u, 0x18c2a6u, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xc7u, 0xf00u, 0x480fu, 0x8b3au, 0x3f060deau, 0x4000000u, ""},
    {0x18c2b4u, 0x18c467u, 195, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 195@0x9fb50:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xbdu, 0x9900u, 0x99u, 0xecc4u, 0x7b8f7bbcu, 0xd65b60ddu, ""},
};

enum { VM_PROGRAM_ATLAS_025_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_025_mba_reduced_cases) / sizeof(vm_program_atlas_025_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_025_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_025_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_025_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_025_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_025_mba_successor_18b66f(void) {
    return 0x18b88fu;
}

static uint32_t vm_program_atlas_025_mba_successor_18b89d(void) {
    return 0x18ba5bu;
}

static uint32_t vm_program_atlas_025_mba_successor_18ba69(void) {
    return 0x18bd8cu;
}

static uint32_t vm_program_atlas_025_mba_successor_18bd9a(void) {
    return 0x18beabu;
}

static uint32_t vm_program_atlas_025_mba_successor_18bebc(void) {
    return 0x18c07au;
}

static uint32_t vm_program_atlas_025_mba_successor_18c088(void) {
    return 0x18c2a6u;
}

static uint32_t vm_program_atlas_025_mba_successor_18c2b4(void) {
    return 0x18c467u;
}

#endif /* VM_PROGRAM_ATLAS_025_MBA_REDUCED_C */
