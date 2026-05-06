/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_042_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_042_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_042_mba_reduced_cases[] = {
    {0x31aa27u, 0x31aec3u, 321, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 321@0xbb1dd:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x1e8u, 0x6201u, 0x162u, 0x102u, 0x6bb71fd7u, 0x3d153672u, ""},
    {0x31aed4u, 0x31b303u, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_const_post", 0xb9u, 0x9b00u, 0xa09bu, 0x2e3au, 0xc000e202u, 0x4ac58a04u, ""},
    {0x31b303u, 0x31b34bu, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x30", 0x151u, 0xd001u, 0x9ad0u, 0x79u, 0xfffee637u, 0x6cd0e9edu, ""},
    {0x31b331u, 0x31b303u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x40", 0xde09u, 0x80deu, 0xaf80u, 0x9d7du, 0xed5011f0u, 0x7924da69u, ""},
    {0x31b34bu, 0x31b54fu, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0xb9u, 0xa300u, 0xa8a3u, 0xad3au, 0x7c2309e0u, 0x536c0dfu, ""},
    {0x31b54fu, 0x31ba3du, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x211", 0x129u, 0x3101u, 0x7e31u, 0x36e2u, 0x573b8b91u, 0xa02004u, ""},
    {0x31b83du, 0x31b54fu, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x4e6", 0x99e5u, 0x1e99u, 0x391eu, 0xbc3u, 0x99813904u, 0xc820008u, ""},
    {0x31ba3du, 0x31bbaeu, 165, "ready_for_mba_reduction", "fallthrough", "next = 165@0x9a24c:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x102u, 0x7701u, 0xc177u, 0x75d6u, 0xe505e8a3u, 0x794d571au, ""},
    {0x31bbaeu, 0x31be84u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x28b", 0x129u, 0x3101u, 0xd631u, 0xa7e6u, 0x573b8bf1u, 0xee972fd9u, ""},
    {0x31bc0au, 0x31bbaeu, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip -= 0x2ce", 0x5307u, 0x6853u, 0x68u, 0x89c8u, 0x321c4d18u, 0x4ac58800u, ""},
    {0x31be84u, 0x31bfedu, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0xbdu, 0x6800u, 0x68u, 0xef3cu, 0xe50568f9u, 0xa2447151u, ""},
    {0x31bfedu, 0x31c035u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x30", 0x72u, 0x7300u, 0x6373u, 0xac6cu, 0xb84fc5c9u, 0xb0beee60u, ""},
    {0x31c01bu, 0x31bfedu, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x40", 0xadcfu, 0x18adu, 0xfb18u, 0x860u, 0x8a9ca64eu, 0xf7fe9ddbu, ""},
    {0x31c035u, 0x31c239u, 165, "ready_for_mba_reduction", "fallthrough", "next = 165@0x9a24c:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x111u, 0xf001u, 0xe9f0u, 0x228u, 0x7a2302bau, 0xf7fe9ddbu, ""},
    {0x31c239u, 0x31c33au, 69, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 69@0x85f24:2, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x12u, 0xf000u, 0xaf0u, 0xe23au, 0x6000010u, 0x1f78d882u, ""},
    {0x31c34bu, 0x31c7a7u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x211", 0x42u, 0xd100u, 0x92d1u, 0x1c3au, 0x31f7f4bfu, 0x31f3d4bdu, ""},
    {0x31c5a7u, 0x31c239u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip -= 0x566", 0x1550u, 0x2e15u, 0x7a2eu, 0x1366u, 0x50000000u, 0xfe549fd4u, ""},
    {0x31c7a7u, 0x31c918u, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x9du, 0xd700u, 0xd4d7u, 0x68u, 0x7ecb7623u, 0x7ad6fefdu, ""},
    {0x31c918u, 0x31cbeeu, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x28b", 0x9au, 0xd800u, 0x35d8u, 0x1e8u, 0x320u, 0x14108361u, ""},
    {0x31c974u, 0x31c918u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x2ce", 0x56b9u, 0x8956u, 0x2289u, 0x67aeu, 0x46e06938u, 0x847eb340u, ""},
    {0x31cbeeu, 0x31cd8cu, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xfeu, 0xe800u, 0x1e8u, 0x4742u, 0xe5061e50u, 0x72deb6fdu, ""},
    {0x31cd9au, 0x31cfb6u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x133u, 0x3a01u, 0xf53au, 0x99aeu, 0xc10e80d3u, 0xa1dbd90eu, ""},
    {0x31cfc4u, 0x31d273u, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x40u, 0xc500u, 0xa9c5u, 0x99u, 0x3fffe6fbu, 0x1f438161u, ""},
    {0x31d281u, 0x31d49du, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x154u, 0x8c01u, 0x138cu, 0x99u, 0x10544d3au, 0x3fc24c3au, ""},
    {0x31d4abu, 0x31d75au, 311, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 311@0xb86f8:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x154u, 0x5401u, 0x1254u, 0x99u, 0x40010353u, 0x40a26ccu, ""},
    {0x31d768u, 0x31d984u, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x154u, 0x4c01u, 0xe4cu, 0x99u, 0x7d3efed6u, 0x933cb175u, ""},
    {0x31d992u, 0x31dc41u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x151u, 0x1801u, 0x9918u, 0x99u, 0x3ffce65cu, 0x871c9944u, ""},
    {0x31dc4fu, 0x31df8fu, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x1fa", 0xbdu, 0x9900u, 0x99u, 0xed6cu, 0x914bf3e2u, 0x295376bcu, ""},
};

enum { VM_PROGRAM_ATLAS_042_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_042_mba_reduced_cases) / sizeof(vm_program_atlas_042_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_042_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_042_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_042_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_042_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_042_mba_successor_31aa27(void) {
    return 0x31aec3u;
}

static uint32_t vm_program_atlas_042_mba_successor_31aed4(void) {
    return 0x31b303u;
}

static uint32_t vm_program_atlas_042_mba_successor_31b303(void) {
    return 0x31b34bu;
}

static uint32_t vm_program_atlas_042_mba_successor_31b331(void) {
    return 0x31b303u;
}

static uint32_t vm_program_atlas_042_mba_successor_31b34b(void) {
    return 0x31b54fu;
}

static uint32_t vm_program_atlas_042_mba_successor_31b54f(void) {
    return 0x31ba3du;
}

static uint32_t vm_program_atlas_042_mba_successor_31b83d(void) {
    return 0x31b54fu;
}

static uint32_t vm_program_atlas_042_mba_successor_31ba3d(void) {
    return 0x31bbaeu;
}

static uint32_t vm_program_atlas_042_mba_successor_31bbae(void) {
    return 0x31be84u;
}

static uint32_t vm_program_atlas_042_mba_successor_31bc0a(void) {
    return 0x31bbaeu;
}

static uint32_t vm_program_atlas_042_mba_successor_31be84(void) {
    return 0x31bfedu;
}

static uint32_t vm_program_atlas_042_mba_successor_31bfed(void) {
    return 0x31c035u;
}

static uint32_t vm_program_atlas_042_mba_successor_31c01b(void) {
    return 0x31bfedu;
}

static uint32_t vm_program_atlas_042_mba_successor_31c035(void) {
    return 0x31c239u;
}

static uint32_t vm_program_atlas_042_mba_successor_31c239(void) {
    return 0x31c33au;
}

static uint32_t vm_program_atlas_042_mba_successor_31c34b(void) {
    return 0x31c7a7u;
}

static uint32_t vm_program_atlas_042_mba_successor_31c5a7(void) {
    return 0x31c239u;
}

static uint32_t vm_program_atlas_042_mba_successor_31c7a7(void) {
    return 0x31c918u;
}

static uint32_t vm_program_atlas_042_mba_successor_31c918(void) {
    return 0x31cbeeu;
}

static uint32_t vm_program_atlas_042_mba_successor_31c974(void) {
    return 0x31c918u;
}

static uint32_t vm_program_atlas_042_mba_successor_31cbee(void) {
    return 0x31cd8cu;
}

static uint32_t vm_program_atlas_042_mba_successor_31cd9a(void) {
    return 0x31cfb6u;
}

static uint32_t vm_program_atlas_042_mba_successor_31cfc4(void) {
    return 0x31d273u;
}

static uint32_t vm_program_atlas_042_mba_successor_31d281(void) {
    return 0x31d49du;
}

static uint32_t vm_program_atlas_042_mba_successor_31d4ab(void) {
    return 0x31d75au;
}

static uint32_t vm_program_atlas_042_mba_successor_31d768(void) {
    return 0x31d984u;
}

static uint32_t vm_program_atlas_042_mba_successor_31d992(void) {
    return 0x31dc41u;
}

static uint32_t vm_program_atlas_042_mba_successor_31dc4f(void) {
    return 0x31df8fu;
}

#endif /* VM_PROGRAM_ATLAS_042_MBA_REDUCED_C */
