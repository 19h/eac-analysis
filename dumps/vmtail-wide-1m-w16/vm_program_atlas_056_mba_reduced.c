/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_056_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_056_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_056_mba_reduced_cases[] = {
    {0x3603afu, 0x360dfdu, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0xa9u, 0x0u, 0x0u, 0xa5u, 0x3f05edf2u, 0xb40402u, ""},
    {0x360dfdu, 0x3613bbu, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x288", 0x15bu, 0xb101u, 0x31b1u, 0x931u, 0x732609e2u, 0xf666536bu, ""},
    {0x361143u, 0x360dfdu, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x5b6", 0xf15u, 0x490fu, 0xb449u, 0x1e8u, 0x51901c2cu, 0xac6f6b13u, ""},
    {0x3613bbu, 0x36152cu, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100", 0xfeu, 0xe800u, 0x1e8u, 0x4742u, 0x78ab40dcu, 0x7a5e9ffbu, ""},
    {0x36152cu, 0x361802u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x28b", 0x151u, 0xaf01u, 0x98afu, 0x68u, 0x573b8ba0u, 0x3c7fd5efu, ""},
    {0x361587u, 0x36152cu, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x2ce", 0x9e8au, 0x589eu, 0xd358u, 0x2bbu, 0xf8ffb7ebu, 0xd05b03e3u, ""},
    {0x361802u, 0x362615u, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100", 0x1eu, 0x3800u, 0x1f38u, 0x1e8u, 0x782307b0u, 0x76f4318cu, ""},
    {0x362615u, 0x362b2au, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x211", 0x133u, 0x3a01u, 0xa53au, 0x58aau, 0x573b8ba9u, 0x40504820u, ""},
    {0x36292au, 0x362615u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x50d", 0xfb67u, 0x6fbu, 0x6006u, 0x398au, 0x17486d77u, 0x943a3101u, ""},
    {0x362b2au, 0x362c9bu, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100", 0x1cu, 0x8800u, 0x888u, 0xc410u, 0xe505f817u, 0x3ce1e03u, ""},
    {0x362c9bu, 0x362f71u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x28b", 0x151u, 0x6701u, 0x9467u, 0x68u, 0x20450150u, 0xd7b2de40u, ""},
    {0x362cf7u, 0x362c9bu, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x2ce", 0xd8u, 0xe800u, 0x1e8u, 0xe5u, 0xdd7602d8u, 0x20000u, ""},
    {0x362f71u, 0x363d84u, 165, "ready_for_mba_reduction", "fallthrough", "next = 165@0x9a24c:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x1eu, 0x1000u, 0x1f10u, 0x1e8u, 0x84c308d6u, 0x20000u, ""},
    {0x363d84u, 0x36426cu, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x211", 0x12u, 0x6000u, 0x860u, 0x783au, 0x86040028u, 0x12e908deu, ""},
    {0x36406bu, 0x363d84u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip -= 0x4e0", 0x9d73u, 0xa39du, 0xd1a3u, 0xc69bu, 0xc2cf5942u, 0x5025c5c6u, ""},
    {0x36426cu, 0x364c68u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0xc4u, 0x1e00u, 0x6e1eu, 0xf45cu, 0x81b31885u, 0x12833a10u, ""},
    {0x364c72u, 0x364d87u, 316, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 316@0xb987b:1, ip += +0x5; dispatch_model=static_100", 0x1e8u, 0xab01u, 0xabu, 0xc7u, 0x674d2a10u, 0x9bd57398u, ""},
    {0x364d98u, 0x364e55u, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100", 0x570u, 0xf205u, 0x20f2u, 0xe82cu, 0x2a1c09e0u, 0x5ac9af82u, ""},
    {0x364e5fu, 0x364f74u, 334, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 334@0xbdd18:1, ip += +0x5; dispatch_model=static_100", 0x1e8u, 0xa501u, 0xa5u, 0x14du, 0xbffd291du, 0x6d6bdcfbu, ""},
    {0x364f84u, 0x365042u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100", 0x80d0u, 0x2d80u, 0x502du, 0xff58u, 0x42101c08u, 0x16833a14u, ""},
    {0x36504cu, 0x365190u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x2f", 0x1e8u, 0x6201u, 0x162u, 0x10cu, 0x5f858df9u, 0x42a6d7c6u, ""},
    {0x365190u, 0x365458u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x21a", 0xc7u, 0x5f00u, 0x4c5fu, 0x3e50u, 0x38450260u, 0xebc2d834u, ""},
};

enum { VM_PROGRAM_ATLAS_056_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_056_mba_reduced_cases) / sizeof(vm_program_atlas_056_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_056_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_056_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_056_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_056_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_056_mba_successor_3603af(void) {
    return 0x360dfdu;
}

static uint32_t vm_program_atlas_056_mba_successor_360dfd(void) {
    return 0x3613bbu;
}

static uint32_t vm_program_atlas_056_mba_successor_361143(void) {
    return 0x360dfdu;
}

static uint32_t vm_program_atlas_056_mba_successor_3613bb(void) {
    return 0x36152cu;
}

static uint32_t vm_program_atlas_056_mba_successor_36152c(void) {
    return 0x361802u;
}

static uint32_t vm_program_atlas_056_mba_successor_361587(void) {
    return 0x36152cu;
}

static uint32_t vm_program_atlas_056_mba_successor_361802(void) {
    return 0x362615u;
}

static uint32_t vm_program_atlas_056_mba_successor_362615(void) {
    return 0x362b2au;
}

static uint32_t vm_program_atlas_056_mba_successor_36292a(void) {
    return 0x362615u;
}

static uint32_t vm_program_atlas_056_mba_successor_362b2a(void) {
    return 0x362c9bu;
}

static uint32_t vm_program_atlas_056_mba_successor_362c9b(void) {
    return 0x362f71u;
}

static uint32_t vm_program_atlas_056_mba_successor_362cf7(void) {
    return 0x362c9bu;
}

static uint32_t vm_program_atlas_056_mba_successor_362f71(void) {
    return 0x363d84u;
}

static uint32_t vm_program_atlas_056_mba_successor_363d84(void) {
    return 0x36426cu;
}

static uint32_t vm_program_atlas_056_mba_successor_36406b(void) {
    return 0x363d84u;
}

static uint32_t vm_program_atlas_056_mba_successor_36426c(void) {
    return 0x364c68u;
}

static uint32_t vm_program_atlas_056_mba_successor_364c72(void) {
    return 0x364d87u;
}

static uint32_t vm_program_atlas_056_mba_successor_364d98(void) {
    return 0x364e55u;
}

static uint32_t vm_program_atlas_056_mba_successor_364e5f(void) {
    return 0x364f74u;
}

static uint32_t vm_program_atlas_056_mba_successor_364f84(void) {
    return 0x365042u;
}

static uint32_t vm_program_atlas_056_mba_successor_36504c(void) {
    return 0x365190u;
}

static uint32_t vm_program_atlas_056_mba_successor_365190(void) {
    return 0x365458u;
}

#endif /* VM_PROGRAM_ATLAS_056_MBA_REDUCED_C */
