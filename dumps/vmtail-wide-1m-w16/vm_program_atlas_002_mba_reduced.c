/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_002_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_002_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_002_mba_reduced_cases[] = {
    {0xd476eu, 0xd4889u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xc7u, 0xdf00u, 0x4cdfu, 0x663au, 0x73a71a76u, 0xf7cef776u, ""},
    {0xd4897u, 0xd4a83u, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x151u, 0x8801u, 0x9488u, 0x99u, 0x4001032fu, 0xc032108u, ""},
    {0xd4a91u, 0xd4bebu, 316, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 316@0xb987b:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0xc7u, 0x4700u, 0x4f47u, 0x643au, 0xc001254au, 0xa004u, ""},
    {0xd4bfcu, 0xd4cb9u, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x192bu, 0x3a19u, 0xd03au, 0xe815u, 0x120588u, 0x18b4c73fu, ""},
    {0xd4cc7u, 0xd5044u, 69, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 69@0x85f24:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xc7u, 0x1f00u, 0x4f1fu, 0x743au, 0xdeab19f9u, 0xc8167c4u, ""},
    {0xd5055u, 0xd521eu, 321, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 321@0xbb1dd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xa8u, 0x9900u, 0x99u, 0xd0deu, 0x114beef2u, 0x2fda28c4u, ""},
    {0xd522fu, 0xd5641u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xcbu, 0x9700u, 0x9b97u, 0x7635u, 0xc000eac5u, 0x75432345u, ""},
    {0xd564fu, 0xd5a12u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x23e", 0x151u, 0xd801u, 0x90d8u, 0x99u, 0x694c590bu, 0xc000000u, ""},
};

enum { VM_PROGRAM_ATLAS_002_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_002_mba_reduced_cases) / sizeof(vm_program_atlas_002_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_002_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_002_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_002_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_002_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_002_mba_successor_d476e(void) {
    return 0xd4889u;
}

static uint32_t vm_program_atlas_002_mba_successor_d4897(void) {
    return 0xd4a83u;
}

static uint32_t vm_program_atlas_002_mba_successor_d4a91(void) {
    return 0xd4bebu;
}

static uint32_t vm_program_atlas_002_mba_successor_d4bfc(void) {
    return 0xd4cb9u;
}

static uint32_t vm_program_atlas_002_mba_successor_d4cc7(void) {
    return 0xd5044u;
}

static uint32_t vm_program_atlas_002_mba_successor_d5055(void) {
    return 0xd521eu;
}

static uint32_t vm_program_atlas_002_mba_successor_d522f(void) {
    return 0xd5641u;
}

static uint32_t vm_program_atlas_002_mba_successor_d564f(void) {
    return 0xd5a12u;
}

#endif /* VM_PROGRAM_ATLAS_002_MBA_REDUCED_C */
