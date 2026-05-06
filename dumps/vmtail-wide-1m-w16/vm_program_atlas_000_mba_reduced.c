/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_000_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_000_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_000_mba_reduced_cases[] = {
    {0xd0ac0u, 0xd0c5fu, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100; state=state_mixed", 0x1e8u, 0xa501u, 0xa5u, 0x1cu, 0x6f14ffffu, 0x933cbe65u, ""},
    {0xd0c5fu, 0xd0eb3u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x23e", 0xa8u, 0x4700u, 0x147u, 0xd1aau, 0xa6020010u, 0x5f729fc2u, ""},
    {0xd0c86u, 0xd0d43u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:4, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x3c41u, 0x2a3cu, 0x582au, 0xe8e0u, 0x32200710u, 0x42c4a900u, ""},
    {0xd0d51u, 0xd0c5fu, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x24c", 0xb9u, 0x1b00u, 0xab1bu, 0x893au, 0xcfaf9a79u, 0x8012448u, ""},
    {0xd0eb3u, 0xd1002u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x2bu, 0xac00u, 0x79acu, 0x68u, 0xe5060584u, 0xb94996a8u, ""},
    {0xd1010u, 0xd1284u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x12u, 0x5800u, 0x658u, 0xdf3au, 0x1054a2dau, 0x3fc15e28u, ""},
    {0xd1292u, 0xd1445u, 175, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 175@0x9c08f:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x1cu, 0x6800u, 0xa68u, 0x7310u, 0x10551f9cu, 0x2bc05628u, ""},
};

enum { VM_PROGRAM_ATLAS_000_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_000_mba_reduced_cases) / sizeof(vm_program_atlas_000_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_000_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_000_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_000_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_000_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_000_mba_successor_d0ac0(void) {
    return 0xd0c5fu;
}

static uint32_t vm_program_atlas_000_mba_successor_d0c5f(void) {
    return 0xd0eb3u;
}

static uint32_t vm_program_atlas_000_mba_successor_d0c86(void) {
    return 0xd0d43u;
}

static uint32_t vm_program_atlas_000_mba_successor_d0d51(void) {
    return 0xd0c5fu;
}

static uint32_t vm_program_atlas_000_mba_successor_d0eb3(void) {
    return 0xd1002u;
}

static uint32_t vm_program_atlas_000_mba_successor_d1010(void) {
    return 0xd1284u;
}

static uint32_t vm_program_atlas_000_mba_successor_d1292(void) {
    return 0xd1445u;
}

#endif /* VM_PROGRAM_ATLAS_000_MBA_REDUCED_C */
