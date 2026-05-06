/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_041_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_041_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_041_mba_reduced_cases[] = {
    {0x30e872u, 0x30eea2u, 165, "ready_for_mba_reduction", "fallthrough", "next = 165@0x9a24c:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x0u, 0xa900u, 0xa9u, 0x162u, 0xa86c6e49u, 0xf0397358u, ""},
    {0x30eea2u, 0x30eeeau, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x30", 0xb9u, 0xc300u, 0xa3c3u, 0xcd3au, 0x53a603ecu, 0x3ac62b5eu, ""},
    {0x30eed0u, 0x30eea2u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip -= 0x40", 0xcaefu, 0x2acau, 0xe42au, 0x6915u, 0x7a230ef8u, 0x204010u, ""},
    {0x30eeeau, 0x30f0eeu, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100; state=state_mixed", 0x151u, 0x5f01u, 0x9a5fu, 0x68u, 0x7a230878u, 0x430c4d4u, ""},
    {0x30f0eeu, 0x30f64du, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x288", 0xc4u, 0x1e00u, 0x6e1eu, 0xf634u, 0x22450050u, 0x276ae924u, ""},
    {0x30f3d6u, 0x30f0eeu, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x557", 0x130u, 0x3601u, 0xb36u, 0x2813u, 0x998173a1u, 0x801214cu, ""},
    {0x30f64du, 0x30fd84u, 210, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 210@0xa2da3:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0xc7u, 0x6f00u, 0x4f6fu, 0xf93au, 0xe50579efu, 0x4d1c5ffbu, ""},
    {0x30fd95u, 0x310b1cu, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0xf0du, 0x6a0fu, 0xb26au, 0xb3bu, 0xf6f651cbu, 0x5de9d0f2u, ""},
    {0x310b1cu, 0x315cc8u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x4f0e", 0x14du, 0xd301u, 0xe4d3u, 0x68u, 0x874f7fa0u, 0x16292acfu, ""},
    {0x310dcau, 0x3129aau, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x2d", 0xf9du, 0x390fu, 0x5139u, 0x1e8u, 0x283b02u, 0xd7f67ddbu, ""},
    {0x3129aau, 0x31580eu, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x2d", 0x2bu, 0xa400u, 0x7ba4u, 0x68u, 0x430108c0u, 0xc75bd0c4u, ""},
    {0x31580eu, 0x310b1cu, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x51a4", 0x151u, 0xf401u, 0x97f4u, 0xb3u, 0xe505a30bu, 0x262680abu, ""},
    {0x315cc8u, 0x343569u, 310, "ready_for_mba_reduction", "decoded_control", "sampled operand footprint 0x6; observed target table[310], delta +0x2cef7", 0x151u, 0xaf01u, 0x92afu, 0x68u, 0xfbfb525au, 0x8345d1e7u, ""},
};

enum { VM_PROGRAM_ATLAS_041_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_041_mba_reduced_cases) / sizeof(vm_program_atlas_041_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_041_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_041_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_041_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_041_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_041_mba_successor_30e872(void) {
    return 0x30eea2u;
}

static uint32_t vm_program_atlas_041_mba_successor_30eea2(void) {
    return 0x30eeeau;
}

static uint32_t vm_program_atlas_041_mba_successor_30eed0(void) {
    return 0x30eea2u;
}

static uint32_t vm_program_atlas_041_mba_successor_30eeea(void) {
    return 0x30f0eeu;
}

static uint32_t vm_program_atlas_041_mba_successor_30f0ee(void) {
    return 0x30f64du;
}

static uint32_t vm_program_atlas_041_mba_successor_30f3d6(void) {
    return 0x30f0eeu;
}

static uint32_t vm_program_atlas_041_mba_successor_30f64d(void) {
    return 0x30fd84u;
}

static uint32_t vm_program_atlas_041_mba_successor_30fd95(void) {
    return 0x310b1cu;
}

static uint32_t vm_program_atlas_041_mba_successor_310b1c(void) {
    return 0x315cc8u;
}

static uint32_t vm_program_atlas_041_mba_successor_310dca(void) {
    return 0x3129aau;
}

static uint32_t vm_program_atlas_041_mba_successor_3129aa(void) {
    return 0x31580eu;
}

static uint32_t vm_program_atlas_041_mba_successor_31580e(void) {
    return 0x310b1cu;
}

static uint32_t vm_program_atlas_041_mba_successor_315cc8(void) {
    return 0x343569u;
}

#endif /* VM_PROGRAM_ATLAS_041_MBA_REDUCED_C */
