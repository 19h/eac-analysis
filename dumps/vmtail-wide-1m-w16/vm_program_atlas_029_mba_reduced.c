/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_029_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_029_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_029_mba_reduced_cases[] = {
    {0x22fe2du, 0x22ff44u, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x162u, 0xe801u, 0x1e8u, 0x102u, 0x6192a572u, 0x7e16ed87u, ""},
    {0x22ff44u, 0x22ff44u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x6d", 0x142u, 0x1301u, 0x13u, 0x9657u, 0x79a30258u, 0x2d52bb94u, ""},
    {0x22ffc2u, 0x22ffeau, 165, "ready_for_mba_reduction", "fallthrough", "next = 165@0x9a24c:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x9fc3u, 0xb69fu, 0x3ab6u, 0x6836u, 0x50u, 0xa058c8e3u, ""},
    {0x22ffeau, 0x230111u, 50, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 50@0x82e76:256, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x72u, 0xd900u, 0x5ed9u, 0xaca6u, 0x83bacdb7u, 0xc4000d0u, ""},
    {0x230122u, 0x22ffeau, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip -= 0x3c4", 0xc4u, 0x4f00u, 0x6e4fu, 0xeeb4u, 0xa66ce37bu, 0x55b834b9u, ""},
    {0x2303beu, 0x2304b8u, 195, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 195@0x9fb50:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x1b38u, 0x901bu, 0xd990u, 0xd80u, 0xf8feb817u, 0x65a6d327u, ""},
};

enum { VM_PROGRAM_ATLAS_029_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_029_mba_reduced_cases) / sizeof(vm_program_atlas_029_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_029_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_029_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_029_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_029_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_029_mba_successor_22fe2d(void) {
    return 0x22ff44u;
}

static uint32_t vm_program_atlas_029_mba_successor_22ff44(void) {
    return 0x22ff44u;
}

static uint32_t vm_program_atlas_029_mba_successor_22ffc2(void) {
    return 0x22ffeau;
}

static uint32_t vm_program_atlas_029_mba_successor_22ffea(void) {
    return 0x230111u;
}

static uint32_t vm_program_atlas_029_mba_successor_230122(void) {
    return 0x22ffeau;
}

static uint32_t vm_program_atlas_029_mba_successor_2303be(void) {
    return 0x2304b8u;
}

#endif /* VM_PROGRAM_ATLAS_029_MBA_REDUCED_C */
