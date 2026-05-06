/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_032_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_032_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_032_mba_reduced_cases[] = {
    {0x249468u, 0x24972bu, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:2, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x162u, 0xe801u, 0x1e8u, 0xbdu, 0x5cedded2u, 0x4a007939u, ""},
    {0x249739u, 0x26cd71u, 86, "ready_for_mba_reduction", "decoded_control", "sampled operand footprint 0xa; observed target table[86], delta +0x2341b", 0x40u, 0xf500u, 0xa1f5u, 0x99u, 0x1054f45au, 0x3fd146a8u, ""},
    {0x249964u, 0x249b99u, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:2, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x72u, 0xfb00u, 0x62fbu, 0xac8cu, 0xce64e04au, 0x6ded2cfdu, ""},
    {0x249ba7u, 0x249ddcu, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:2, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x42u, 0xf100u, 0x92f1u, 0xe13au, 0x8040024u, 0x8040024u, ""},
    {0x249deau, 0x24a01fu, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:2, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xa8u, 0x9900u, 0x99u, 0xd0ceu, 0x1f05e089u, 0x7a631339u, ""},
    {0x24a02du, 0x24a292u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:2, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xacu, 0xb200u, 0xafb2u, 0x93u, 0x98fc0fd1u, 0x295376b8u, ""},
    {0x24a2a0u, 0x24a4d5u, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:2, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x1cu, 0x9000u, 0x390u, 0xaf10u, 0x1054ef6au, 0x3f524628u, ""},
    {0x24a4e3u, 0x24a8c5u, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:2, ip += +0x4; dispatch_model=static_100; state=state_const_post", 0xd7u, 0x4000u, 0x540u, 0x1c88u, 0x65ad3428u, 0xab8efff8u, ""},
    {0x24a8d3u, 0x24ab6au, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:2, ip += +0x4; dispatch_model=static_100; state=state_mixed", 0x10cu, 0x4a01u, 0x1c4au, 0x62c6u, 0x10550082u, 0x2bc05ca8u, ""},
    {0x24ab78u, 0x24ae0fu, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:2, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x154u, 0xac01u, 0x12acu, 0x99u, 0x3a64e02au, 0xf1eee07du, ""},
    {0x24ae1du, 0x24b052u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:2, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xc4u, 0x4f00u, 0x6e4fu, 0xf8acu, 0x3a9aea38u, 0xc6052088u, ""},
    {0x24b060u, 0x24b39bu, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:2, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x10cu, 0x4a01u, 0x1c4au, 0x67ceu, 0xa91e7c79u, 0x3be3edb8u, ""},
    {0x24b3a9u, 0x24b640u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:2, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xacu, 0xb200u, 0xafb2u, 0xc0bu, 0x3f066162u, 0x1000u, ""},
    {0x24b64eu, 0x24b883u, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:2, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x129u, 0x3101u, 0xae31u, 0xeae2u, 0x288b0bccu, 0x13b446e8u, ""},
    {0x24b891u, 0x24bb69u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:2, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x10cu, 0x4a01u, 0x1c4au, 0x6cbeu, 0xd54f00e8u, 0x3bd0ccb8u, ""},
    {0x24bb77u, 0x24bd2au, 299, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 299@0xb6bba:2, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x72u, 0xab00u, 0x67abu, 0xac8cu, 0xcffe58d3u, 0xa21d8a71u, ""},
};

enum { VM_PROGRAM_ATLAS_032_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_032_mba_reduced_cases) / sizeof(vm_program_atlas_032_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_032_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_032_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_032_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_032_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_032_mba_successor_249468(void) {
    return 0x24972bu;
}

static uint32_t vm_program_atlas_032_mba_successor_249739(void) {
    return 0x26cd71u;
}

static uint32_t vm_program_atlas_032_mba_successor_249964(void) {
    return 0x249b99u;
}

static uint32_t vm_program_atlas_032_mba_successor_249ba7(void) {
    return 0x249ddcu;
}

static uint32_t vm_program_atlas_032_mba_successor_249dea(void) {
    return 0x24a01fu;
}

static uint32_t vm_program_atlas_032_mba_successor_24a02d(void) {
    return 0x24a292u;
}

static uint32_t vm_program_atlas_032_mba_successor_24a2a0(void) {
    return 0x24a4d5u;
}

static uint32_t vm_program_atlas_032_mba_successor_24a4e3(void) {
    return 0x24a8c5u;
}

static uint32_t vm_program_atlas_032_mba_successor_24a8d3(void) {
    return 0x24ab6au;
}

static uint32_t vm_program_atlas_032_mba_successor_24ab78(void) {
    return 0x24ae0fu;
}

static uint32_t vm_program_atlas_032_mba_successor_24ae1d(void) {
    return 0x24b052u;
}

static uint32_t vm_program_atlas_032_mba_successor_24b060(void) {
    return 0x24b39bu;
}

static uint32_t vm_program_atlas_032_mba_successor_24b3a9(void) {
    return 0x24b640u;
}

static uint32_t vm_program_atlas_032_mba_successor_24b64e(void) {
    return 0x24b883u;
}

static uint32_t vm_program_atlas_032_mba_successor_24b891(void) {
    return 0x24bb69u;
}

static uint32_t vm_program_atlas_032_mba_successor_24bb77(void) {
    return 0x24bd2au;
}

#endif /* VM_PROGRAM_ATLAS_032_MBA_REDUCED_C */
