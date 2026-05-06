/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_009_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_009_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_009_mba_reduced_cases[] = {
    {0x11bf5du, 0x11c0acu, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xb9u, 0x6300u, 0xab63u, 0xdb3au, 0xfffff7cfu, 0x6df8eff9u, ""},
    {0x11c0bau, 0x11c200u, 334, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 334@0xbdd18:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0x1cu, 0x0u, 0x200u, 0x6210u, 0x38c980f8u, 0x482bb39fu, ""},
    {0x11c211u, 0x11c2aau, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x54", 0x588u, 0x2a05u, 0x232au, 0x2656u, 0x998174a8u, 0xc822048u, ""},
};

enum { VM_PROGRAM_ATLAS_009_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_009_mba_reduced_cases) / sizeof(vm_program_atlas_009_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_009_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_009_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_009_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_009_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_009_mba_successor_11bf5d(void) {
    return 0x11c0acu;
}

static uint32_t vm_program_atlas_009_mba_successor_11c0ba(void) {
    return 0x11c200u;
}

static uint32_t vm_program_atlas_009_mba_successor_11c211(void) {
    return 0x11c2aau;
}

#endif /* VM_PROGRAM_ATLAS_009_MBA_REDUCED_C */
