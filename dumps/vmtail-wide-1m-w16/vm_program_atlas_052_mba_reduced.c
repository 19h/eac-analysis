/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_052_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_052_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_052_mba_reduced_cases[] = {
    {0x33b647u, 0x33be49u, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x0u, 0x3600u, 0x136u, 0x1e8u, 0x37ee0220u, 0x3fee7f36u, ""},
    {0x33be49u, 0x33c5b8u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x724", 0x1eu, 0x5800u, 0x1058u, 0x1e8u, 0x40000100u, 0x44008901u, ""},
    {0x33bea5u, 0x33be49u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x767", 0x22fbu, 0xa622u, 0x44a6u, 0x5aa9u, 0x7c101922u, 0x97681127u, ""},
    {0x33c5b8u, 0x33cd0fu, 316, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 316@0xb987b:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0xc4u, 0x1e00u, 0x6e1eu, 0xf614u, 0xe5062189u, 0x27a62d01u, ""},
    {0x33cd1fu, 0x33d2d9u, 195, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 195@0x9fb50:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xbe8u, 0x240bu, 0x7024u, 0x799eu, 0x5206704cu, 0x89d2fe5fu, ""},
};

enum { VM_PROGRAM_ATLAS_052_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_052_mba_reduced_cases) / sizeof(vm_program_atlas_052_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_052_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_052_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_052_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_052_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_052_mba_successor_33b647(void) {
    return 0x33be49u;
}

static uint32_t vm_program_atlas_052_mba_successor_33be49(void) {
    return 0x33c5b8u;
}

static uint32_t vm_program_atlas_052_mba_successor_33bea5(void) {
    return 0x33be49u;
}

static uint32_t vm_program_atlas_052_mba_successor_33c5b8(void) {
    return 0x33cd0fu;
}

static uint32_t vm_program_atlas_052_mba_successor_33cd1f(void) {
    return 0x33d2d9u;
}

#endif /* VM_PROGRAM_ATLAS_052_MBA_REDUCED_C */
