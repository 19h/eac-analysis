/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_046_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_046_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_046_mba_reduced_cases[] = {
    {0x33170bu, 0x33192du, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x162u, 0xe801u, 0x1e8u, 0xbdu, 0xe8eb0d40u, 0x515e4dc9u, ""},
    {0x33192du, 0x331975u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x30", 0xc4u, 0x2f00u, 0x6e2fu, 0xf59cu, 0x224501a0u, 0xcc55eaf8u, ""},
    {0x33195bu, 0x33192du, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x40", 0x8948u, 0x7989u, 0x79u, 0x9897u, 0xebbe3855u, 0x9e0b95b6u, ""},
    {0x331975u, 0x331b79u, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x15bu, 0x8101u, 0x3c81u, 0x931u, 0xe5059226u, 0x9e0b95b6u, ""},
    {0x331b79u, 0x331c7au, 78, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 78@0x883c0:5, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x15bu, 0xc901u, 0x32c9u, 0x931u, 0x87050228u, 0xbfe87e62u, ""},
    {0x331c8bu, 0x332105u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x288", 0x12u, 0x0u, 0x200u, 0xda3au, 0x3ffdb24fu, 0x16833a00u, ""},
    {0x331e8eu, 0x331b79u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x584", 0xe74u, 0x3a0eu, 0x703au, 0xd87fu, 0x99816d59u, 0x8082248u, ""},
    {0x332105u, 0x332469u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xfeu, 0xe800u, 0x1e8u, 0x4742u, 0x87db5d34u, 0x61be58a4u, ""},
    {0x332477u, 0x3326a9u, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x154u, 0xc401u, 0x13c4u, 0x99u, 0xd6a77f34u, 0x6c865134u, ""},
    {0x3326b7u, 0x33292fu, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x133u, 0x3a01u, 0xf53au, 0x99aeu, 0x69a34a52u, 0x37d04120u, ""},
    {0x33293du, 0x332b71u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xacu, 0xb200u, 0xafb2u, 0xaa3u, 0x914f6bdeu, 0x7d40c4f0u, ""},
    {0x332b7fu, 0x332de3u, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xcbu, 0xa700u, 0x92a7u, 0x7635u, 0xdf223358u, 0x3203fe28u, ""},
    {0x332df1u, 0x332f80u, 210, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 210@0xa2da3:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0x154u, 0xcc01u, 0x12ccu, 0x99u, 0x3f2500b2u, 0x8472f2c7u, ""},
    {0x332f90u, 0x333123u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xf0abu, 0xf8f0u, 0x92f8u, 0x7ab3u, 0xd606302au, 0xe0548bbu, ""},
    {0x333131u, 0x3332c0u, 246, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 246@0xab427:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0xb9u, 0x1b00u, 0xab1bu, 0xc13au, 0x7ff9b3ffu, 0x799ee768u, ""},
    {0x3332d1u, 0x3334acu, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xf738u, 0xe8f7u, 0x1e8u, 0xb6au, 0xfffffde0u, 0x10103a30u, ""},
    {0x3334bau, 0x333722u, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x40u, 0xa500u, 0xa6a5u, 0x99u, 0xf83481e8u, 0x82eb39fu, ""},
    {0x333730u, 0x333882u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x55", 0x154u, 0xcc01u, 0x12ccu, 0x99u, 0x5aaa0c69u, 0xb689c739u, ""},
};

enum { VM_PROGRAM_ATLAS_046_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_046_mba_reduced_cases) / sizeof(vm_program_atlas_046_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_046_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_046_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_046_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_046_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_046_mba_successor_33170b(void) {
    return 0x33192du;
}

static uint32_t vm_program_atlas_046_mba_successor_33192d(void) {
    return 0x331975u;
}

static uint32_t vm_program_atlas_046_mba_successor_33195b(void) {
    return 0x33192du;
}

static uint32_t vm_program_atlas_046_mba_successor_331975(void) {
    return 0x331b79u;
}

static uint32_t vm_program_atlas_046_mba_successor_331b79(void) {
    return 0x331c7au;
}

static uint32_t vm_program_atlas_046_mba_successor_331c8b(void) {
    return 0x332105u;
}

static uint32_t vm_program_atlas_046_mba_successor_331e8e(void) {
    return 0x331b79u;
}

static uint32_t vm_program_atlas_046_mba_successor_332105(void) {
    return 0x332469u;
}

static uint32_t vm_program_atlas_046_mba_successor_332477(void) {
    return 0x3326a9u;
}

static uint32_t vm_program_atlas_046_mba_successor_3326b7(void) {
    return 0x33292fu;
}

static uint32_t vm_program_atlas_046_mba_successor_33293d(void) {
    return 0x332b71u;
}

static uint32_t vm_program_atlas_046_mba_successor_332b7f(void) {
    return 0x332de3u;
}

static uint32_t vm_program_atlas_046_mba_successor_332df1(void) {
    return 0x332f80u;
}

static uint32_t vm_program_atlas_046_mba_successor_332f90(void) {
    return 0x333123u;
}

static uint32_t vm_program_atlas_046_mba_successor_333131(void) {
    return 0x3332c0u;
}

static uint32_t vm_program_atlas_046_mba_successor_3332d1(void) {
    return 0x3334acu;
}

static uint32_t vm_program_atlas_046_mba_successor_3334ba(void) {
    return 0x333722u;
}

static uint32_t vm_program_atlas_046_mba_successor_333730(void) {
    return 0x333882u;
}

#endif /* VM_PROGRAM_ATLAS_046_MBA_REDUCED_C */
