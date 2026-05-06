/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_061_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_061_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_061_mba_reduced_cases[] = {
    {0x36b124u, 0x36b346u, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100; state=state_mixed", 0xabu, 0xe800u, 0x1e8u, 0x151u, 0xd9b4affbu, 0xe648ee49u, ""},
    {0x36b346u, 0x36b38eu, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x30", 0x15bu, 0xb001u, 0x3cb0u, 0x942u, 0x751f33acu, 0xe54f3676u, ""},
    {0x36b374u, 0x36b346u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x40", 0x688fu, 0x5468u, 0x654u, 0x6d6u, 0x7a330fe0u, 0x200800u, ""},
    {0x36b38eu, 0x36b592u, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x40u, 0xde00u, 0xa6deu, 0x68u, 0x7a330bc0u, 0x43088c4u, ""},
    {0x36b592u, 0x36b693u, 78, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 78@0x883c0:11, ip += +0x4; dispatch_model=static_100", 0xacu, 0x4300u, 0xaf43u, 0xc3u, 0x573b8ba1u, 0xf77ebec7u, ""},
    {0x36b6a4u, 0x36bb1eu, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x288", 0x14du, 0xeb01u, 0xe0ebu, 0x99u, 0x281c7190u, 0x53dc41b9u, ""},
    {0x36b8a7u, 0x36b592u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x584", 0x1897u, 0x2a18u, 0x432au, 0xd249u, 0xff96u, 0x480c0010u, ""},
    {0x36bb1eu, 0x36bee0u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0xc4u, 0x1e00u, 0x6e1eu, 0xf834u, 0xe505feb6u, 0xc81f0198u, ""},
    {0x36beeeu, 0x36c10au, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0x2bu, 0xf500u, 0x77f5u, 0x99u, 0x914b4bc9u, 0x5fc336aeu, ""},
    {0x36c118u, 0x36c395u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100", 0xc4u, 0x4f00u, 0x6e4fu, 0xf45cu, 0x8cd640b4u, 0x490673f7u, ""},
    {0x36c3a3u, 0x36c4e9u, 145, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 145@0x95b5c:1, ip += +0x5; dispatch_model=static_100", 0xc7u, 0xd700u, 0x4ed7u, 0xb33au, 0x10551f84u, 0x3fc45638u, ""},
    {0x36c4fau, 0x36c68cu, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0x16dcu, 0xbf16u, 0x97bfu, 0x130cu, 0xf5fb4ffau, 0x6043000u, ""},
    {0x36c69au, 0x36c829u, 210, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 210@0xa2da3:1, ip += +0x5; dispatch_model=static_100", 0xd7u, 0x2000u, 0x620u, 0xef88u, 0x3ee3ff32u, 0x2d9ec11du, ""},
    {0x36c839u, 0x36c899u, 75, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 75@0x873fc:1, ip += +0x5; dispatch_model=static_100", 0xed63u, 0x23edu, 0x23u, 0x8c2cu, 0xd5dfd7e0u, 0xa202d3fu, ""},
    {0x36c8aau, 0x36c9b1u, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100", 0x1063u, 0xe810u, 0x1e8u, 0xe4d3u, 0x3b00120u, 0x350a074u, ""},
    {0x36c9b1u, 0x36cabeu, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:4, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xa8u, 0x6800u, 0x68u, 0xd9e6u, 0x2000028u, 0xf7f78a9u, ""},
    {0x36caccu, 0x36ccc6u, 50, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 50@0x82e76:4, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x151u, 0xf001u, 0x91f0u, 0x99u, 0xbd1668bbu, 0xc0afd315u, ""},
    {0x36ccd7u, 0x36d579u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x791", 0x72u, 0x7b00u, 0x687bu, 0xac8cu, 0xdea1c1d1u, 0x7dffca58u, ""},
    {0x36cdf9u, 0x36cf76u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:3, ip += +0x4; dispatch_model=static_100", 0x8a7du, 0x9c8au, 0x729cu, 0x6758u, 0xf5ff8a93u, 0x7bf18dccu, ""},
    {0x36cf84u, 0x36d1cdu, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:3, ip += +0x4; dispatch_model=static_100", 0x12u, 0xe800u, 0x4e8u, 0x7e3au, 0x3f06a1c2u, 0x14130000u, ""},
    {0x36d1dbu, 0x36d3a2u, 80, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 80@0x88a58:3, ip += +0x4; dispatch_model=static_100", 0x10cu, 0x4a01u, 0x1c4au, 0x67ceu, 0x7f9c5fd7u, 0xdb768c21u, ""},
    {0x36d3b3u, 0x36d524u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x60", 0x9du, 0x8f00u, 0xd78fu, 0x99u, 0x24de0200u, 0x7facad49u, ""},
};

enum { VM_PROGRAM_ATLAS_061_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_061_mba_reduced_cases) / sizeof(vm_program_atlas_061_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_061_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_061_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_061_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_061_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_061_mba_successor_36b124(void) {
    return 0x36b346u;
}

static uint32_t vm_program_atlas_061_mba_successor_36b346(void) {
    return 0x36b38eu;
}

static uint32_t vm_program_atlas_061_mba_successor_36b374(void) {
    return 0x36b346u;
}

static uint32_t vm_program_atlas_061_mba_successor_36b38e(void) {
    return 0x36b592u;
}

static uint32_t vm_program_atlas_061_mba_successor_36b592(void) {
    return 0x36b693u;
}

static uint32_t vm_program_atlas_061_mba_successor_36b6a4(void) {
    return 0x36bb1eu;
}

static uint32_t vm_program_atlas_061_mba_successor_36b8a7(void) {
    return 0x36b592u;
}

static uint32_t vm_program_atlas_061_mba_successor_36bb1e(void) {
    return 0x36bee0u;
}

static uint32_t vm_program_atlas_061_mba_successor_36beee(void) {
    return 0x36c10au;
}

static uint32_t vm_program_atlas_061_mba_successor_36c118(void) {
    return 0x36c395u;
}

static uint32_t vm_program_atlas_061_mba_successor_36c3a3(void) {
    return 0x36c4e9u;
}

static uint32_t vm_program_atlas_061_mba_successor_36c4fa(void) {
    return 0x36c68cu;
}

static uint32_t vm_program_atlas_061_mba_successor_36c69a(void) {
    return 0x36c829u;
}

static uint32_t vm_program_atlas_061_mba_successor_36c839(void) {
    return 0x36c899u;
}

static uint32_t vm_program_atlas_061_mba_successor_36c8aa(void) {
    return 0x36c9b1u;
}

static uint32_t vm_program_atlas_061_mba_successor_36c9b1(void) {
    return 0x36cabeu;
}

static uint32_t vm_program_atlas_061_mba_successor_36cacc(void) {
    return 0x36ccc6u;
}

static uint32_t vm_program_atlas_061_mba_successor_36ccd7(void) {
    return 0x36d579u;
}

static uint32_t vm_program_atlas_061_mba_successor_36cdf9(void) {
    return 0x36cf76u;
}

static uint32_t vm_program_atlas_061_mba_successor_36cf84(void) {
    return 0x36d1cdu;
}

static uint32_t vm_program_atlas_061_mba_successor_36d1db(void) {
    return 0x36d3a2u;
}

static uint32_t vm_program_atlas_061_mba_successor_36d3b3(void) {
    return 0x36d524u;
}

#endif /* VM_PROGRAM_ATLAS_061_MBA_REDUCED_C */
