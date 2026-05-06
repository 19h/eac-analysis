/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_059_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_059_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_059_mba_reduced_cases[] = {
    {0x3674c3u, 0x3676e5u, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100", 0xa5u, 0xe800u, 0x1e8u, 0x12u, 0xea9cdab8u, 0xdb551cd1u, ""},
    {0x3676e5u, 0x36772du, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x30", 0x7cu, 0xc100u, 0x4dc1u, 0x2e00u, 0x117b1e60u, 0xea549f90u, ""},
    {0x367713u, 0x3676e5u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x40", 0x9376u, 0x2893u, 0x5628u, 0x8d4au, 0xaec59fe8u, 0x5c5a4951u, ""},
    {0x36772du, 0x367931u, 165, "ready_for_mba_reduction", "fallthrough", "next = 165@0x9a24c:1, ip += +0x2; dispatch_model=static_100", 0x9au, 0xa000u, 0x38a0u, 0x1e8u, 0x7d53a2f8u, 0x16831a14u, ""},
    {0x367931u, 0x367e96u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x288", 0x154u, 0x8c01u, 0x138cu, 0x68u, 0xee7c393au, 0x6f40cdd1u, ""},
    {0x367c1fu, 0x367931u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip -= 0x55d", 0xff74u, 0x6cffu, 0xff6cu, 0x77a3u, 0x8020620u, 0x9e0b95b6u, ""},
    {0x367e96u, 0x368007u, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100; state=state_mixed", 0x14cu, 0x1c01u, 0xd71cu, 0xcf7fu, 0xe506389du, 0x16833a14u, ""},
    {0x368007u, 0x3682ddu, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x28b", 0x142u, 0xe801u, 0x1e8u, 0x9774u, 0xd9f75ee5u, 0x4022918u, ""},
    {0x368063u, 0x368007u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x2ce", 0xae3u, 0xe80au, 0x1e8u, 0x642u, 0x529ba229u, 0x1d4e1231u, ""},
    {0x3682ddu, 0x36848fu, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100", 0x1cu, 0x9000u, 0x390u, 0x2e10u, 0x78230118u, 0xa1dfbe1u, ""},
    {0x36849du, 0x3686b9u, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100", 0x1cu, 0xe800u, 0x5e8u, 0x5e10u, 0xe6dd2577u, 0x89bc33b1u, ""},
    {0x3686c7u, 0x368944u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100", 0x40u, 0x1d00u, 0xa81du, 0x99u, 0x69a345e1u, 0x33d047a8u, ""},
    {0x368952u, 0x368a98u, 75, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 75@0x873fc:1, ip += +0x5; dispatch_model=static_100", 0x40u, 0xbd00u, 0xa2bdu, 0x99u, 0x1054a4b2u, 0x3bc054bau, ""},
    {0x368aa9u, 0x368c3bu, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100", 0x6158u, 0xd061u, 0x3d0u, 0x1e8u, 0x20040u, 0x453a090u, ""},
    {0x368c49u, 0x368dd8u, 334, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 334@0xbdd18:1, ip += +0x5; dispatch_model=static_100", 0x102u, 0x4e01u, 0xbe4eu, 0x7607u, 0x9cde1084u, 0xacb11fb3u, ""},
    {0x368de9u, 0x368e48u, 334, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 334@0xbdd18:1, ip += +0x5; dispatch_model=static_100", 0x1b10u, 0x501bu, 0xc550u, 0xf93u, 0x17d34ed8u, 0xa04b0a4u, ""},
    {0x368e58u, 0x368f60u, 165, "ready_for_mba_reduction", "fallthrough", "next = 165@0x9a24c:1, ip += +0x2; dispatch_model=static_100", 0x8a96u, 0x8c8au, 0x28cu, 0x947fu, 0xa575bd8u, 0xf4288cafu, ""},
    {0x368f60u, 0x36906du, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:4, ip += +0x4; dispatch_model=static_100", 0xc8u, 0xd800u, 0x7bd8u, 0x7u, 0xfffffc2fu, 0xfefdeff9u, ""},
    {0x36907bu, 0x369275u, 321, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 321@0xbb1dd:4, ip += +0x4; dispatch_model=static_100", 0x14du, 0x7301u, 0xe973u, 0x99u, 0xdf8b4fecu, 0xe066dc88u, ""},
    {0x369286u, 0x369b28u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x791", 0xa8u, 0x9900u, 0x99u, 0xd816u, 0xfdbf9aa9u, 0x25d3a910u, ""},
    {0x3693a8u, 0x369525u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:3, ip += +0x4; dispatch_model=static_100", 0xd03bu, 0x68d0u, 0x68u, 0x3e0u, 0x7b5fbbf3u, 0x7bfb94ddu, ""},
    {0x369533u, 0x36977cu, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:3, ip += +0x4; dispatch_model=static_100", 0x154u, 0xd401u, 0x17d4u, 0x99u, 0x20e2508fu, 0x75bc468eu, ""},
    {0x36978au, 0x369951u, 69, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 69@0x85f24:3, ip += +0x4; dispatch_model=static_100", 0x151u, 0x6801u, 0x9568u, 0x99u, 0xb0f85fd1u, 0x3b514600u, ""},
    {0x369962u, 0x369ad3u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x60", 0x151u, 0x1001u, 0x9510u, 0x99u, 0xd1853c4u, 0x4199e44u, ""},
};

enum { VM_PROGRAM_ATLAS_059_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_059_mba_reduced_cases) / sizeof(vm_program_atlas_059_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_059_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_059_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_059_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_059_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_059_mba_successor_3674c3(void) {
    return 0x3676e5u;
}

static uint32_t vm_program_atlas_059_mba_successor_3676e5(void) {
    return 0x36772du;
}

static uint32_t vm_program_atlas_059_mba_successor_367713(void) {
    return 0x3676e5u;
}

static uint32_t vm_program_atlas_059_mba_successor_36772d(void) {
    return 0x367931u;
}

static uint32_t vm_program_atlas_059_mba_successor_367931(void) {
    return 0x367e96u;
}

static uint32_t vm_program_atlas_059_mba_successor_367c1f(void) {
    return 0x367931u;
}

static uint32_t vm_program_atlas_059_mba_successor_367e96(void) {
    return 0x368007u;
}

static uint32_t vm_program_atlas_059_mba_successor_368007(void) {
    return 0x3682ddu;
}

static uint32_t vm_program_atlas_059_mba_successor_368063(void) {
    return 0x368007u;
}

static uint32_t vm_program_atlas_059_mba_successor_3682dd(void) {
    return 0x36848fu;
}

static uint32_t vm_program_atlas_059_mba_successor_36849d(void) {
    return 0x3686b9u;
}

static uint32_t vm_program_atlas_059_mba_successor_3686c7(void) {
    return 0x368944u;
}

static uint32_t vm_program_atlas_059_mba_successor_368952(void) {
    return 0x368a98u;
}

static uint32_t vm_program_atlas_059_mba_successor_368aa9(void) {
    return 0x368c3bu;
}

static uint32_t vm_program_atlas_059_mba_successor_368c49(void) {
    return 0x368dd8u;
}

static uint32_t vm_program_atlas_059_mba_successor_368de9(void) {
    return 0x368e48u;
}

static uint32_t vm_program_atlas_059_mba_successor_368e58(void) {
    return 0x368f60u;
}

static uint32_t vm_program_atlas_059_mba_successor_368f60(void) {
    return 0x36906du;
}

static uint32_t vm_program_atlas_059_mba_successor_36907b(void) {
    return 0x369275u;
}

static uint32_t vm_program_atlas_059_mba_successor_369286(void) {
    return 0x369b28u;
}

static uint32_t vm_program_atlas_059_mba_successor_3693a8(void) {
    return 0x369525u;
}

static uint32_t vm_program_atlas_059_mba_successor_369533(void) {
    return 0x36977cu;
}

static uint32_t vm_program_atlas_059_mba_successor_36978a(void) {
    return 0x369951u;
}

static uint32_t vm_program_atlas_059_mba_successor_369962(void) {
    return 0x369ad3u;
}

#endif /* VM_PROGRAM_ATLAS_059_MBA_REDUCED_C */
