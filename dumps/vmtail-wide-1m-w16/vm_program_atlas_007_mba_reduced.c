/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_007_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_007_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_007_mba_reduced_cases[] = {
    {0x11ac5eu, 0x11aee0u, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100; state=state_mixed", 0xabu, 0xe800u, 0x1e8u, 0xacu, 0xf05f0900u, 0xf9ffff2eu, ""},
    {0x11aeeeu, 0x11b122u, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x72u, 0x6b00u, 0x646bu, 0xac8cu, 0x8a348a08u, 0x853eb39fu, ""},
    {0x11b130u, 0x11b364u, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x154u, 0xd401u, 0x17d4u, 0x99u, 0x5a6f7898u, 0xb6f0bb68u, ""},
    {0x11b372u, 0x11b5a6u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x42u, 0x2100u, 0x9121u, 0xf63au, 0xffb9bdf9u, 0x14896ba4u, ""},
    {0x11b5b4u, 0x11b7e8u, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xcbu, 0x4f00u, 0x914fu, 0x7635u, 0x46c45d0au, 0x2fc2c36du, ""},
    {0x11b7f6u, 0x11ba2au, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x151u, 0xe001u, 0x99e0u, 0x99u, 0x4fbf0bb9u, 0xadce7040u, ""},
    {0x11ba38u, 0x11bb7eu, 145, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 145@0x95b5c:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0x12u, 0xe800u, 0x4e8u, 0xfe3au, 0x4378a023u, 0x4378a021u, ""},
    {0x11bb8fu, 0x11bc28u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x54", 0x1e8u, 0xd301u, 0xefd3u, 0x914fu, 0x34b258edu, 0x63100080u, ""},
};

enum { VM_PROGRAM_ATLAS_007_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_007_mba_reduced_cases) / sizeof(vm_program_atlas_007_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_007_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_007_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_007_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_007_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_007_mba_successor_11ac5e(void) {
    return 0x11aee0u;
}

static uint32_t vm_program_atlas_007_mba_successor_11aeee(void) {
    return 0x11b122u;
}

static uint32_t vm_program_atlas_007_mba_successor_11b130(void) {
    return 0x11b364u;
}

static uint32_t vm_program_atlas_007_mba_successor_11b372(void) {
    return 0x11b5a6u;
}

static uint32_t vm_program_atlas_007_mba_successor_11b5b4(void) {
    return 0x11b7e8u;
}

static uint32_t vm_program_atlas_007_mba_successor_11b7f6(void) {
    return 0x11ba2au;
}

static uint32_t vm_program_atlas_007_mba_successor_11ba38(void) {
    return 0x11bb7eu;
}

static uint32_t vm_program_atlas_007_mba_successor_11bb8f(void) {
    return 0x11bc28u;
}

#endif /* VM_PROGRAM_ATLAS_007_MBA_REDUCED_C */
