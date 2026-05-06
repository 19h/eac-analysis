/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_008_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_008_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_008_mba_reduced_cases[] = {
    {0x11bc28u, 0x11bd5fu, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x40u, 0x7e00u, 0xaa7eu, 0x68u, 0x573b8ba0u, 0x8cb0ee1cu, ""},
    {0x11bd6du, 0x11beb3u, 334, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 334@0xbdd18:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0x12u, 0x4000u, 0x540u, 0x143au, 0x9854b615u, 0xc000b00u, ""},
    {0x11bec4u, 0x11bf5du, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x54", 0x1e8u, 0x6e01u, 0x7f6eu, 0x2d95u, 0x84480518u, 0xa8019a30u, ""},
};

enum { VM_PROGRAM_ATLAS_008_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_008_mba_reduced_cases) / sizeof(vm_program_atlas_008_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_008_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_008_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_008_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_008_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_008_mba_successor_11bc28(void) {
    return 0x11bd5fu;
}

static uint32_t vm_program_atlas_008_mba_successor_11bd6d(void) {
    return 0x11beb3u;
}

static uint32_t vm_program_atlas_008_mba_successor_11bec4(void) {
    return 0x11bf5du;
}

#endif /* VM_PROGRAM_ATLAS_008_MBA_REDUCED_C */
