/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_050_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_050_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_050_mba_reduced_cases[] = {
    {0x337e84u, 0x338682u, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x162u, 0xe801u, 0x1e8u, 0x151u, 0x68f22732u, 0x8e3b9c95u, ""},
    {0x338682u, 0x338e18u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x74b", 0x9au, 0xa000u, 0x38a0u, 0x1e8u, 0xfffee7a7u, 0x6fd3ffe2u, ""},
    {0x3386deu, 0x3387d9u, 69, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 69@0x85f24:4, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xc33u, 0xe80cu, 0x1e8u, 0x58aeu, 0xdd7615e0u, 0x8f14b9ecu, ""},
    {0x3387eau, 0x338682u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x78e", 0x2bu, 0x3d00u, 0x793du, 0x99u, 0xbffce21au, 0xa957a10du, ""},
    {0x338e18u, 0x338f6cu, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0xc4u, 0x1e00u, 0x6e1eu, 0xf914u, 0x7b3b02ebu, 0x8f14b9ecu, ""},
    {0x338f7au, 0x3391acu, 278, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 278@0xb2342:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x14du, 0x3301u, 0xe833u, 0x99u, 0xddd181d8u, 0x33534da8u, ""},
    {0x3391bau, 0x339432u, 95, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 95@0x8c41c:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x133u, 0x3a01u, 0x1d3au, 0xfbb4u, 0x99ac9a10u, 0x202403c9u, ""},
    {0x339440u, 0x339674u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100; state=state_mixed", 0x72u, 0x5300u, 0x6353u, 0xac8cu, 0x3f069ccau, 0x4001000u, ""},
    {0x339682u, 0x3398e6u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x133u, 0x3a01u, 0xd3au, 0x75abu, 0xff35ff53u, 0x9b3cb945u, ""},
    {0x3398f4u, 0x339a83u, 316, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 316@0xb987b:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0x10cu, 0x4a01u, 0x1c4au, 0x689eu, 0x1055179au, 0x3fc44428u, ""},
    {0x339a94u, 0x339c26u, 264, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 264@0xaf4cf:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x1e8u, 0x4501u, 0xee45u, 0x262cu, 0xfffe5aa3u, 0x10000210u, ""},
    {0x339c34u, 0x339dc3u, 246, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 246@0xab427:1, ip += +0x5; dispatch_model=static_100; state=state_add_const", 0xa8u, 0x9900u, 0x99u, 0xd586u, 0x914f7129u, 0x1bec4806u, ""},
    {0x339dd4u, 0x339fafu, 216, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 216@0xa4a61:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x267au, 0x1326u, 0x8113u, 0x7dbbu, 0xf6f6641fu, 0x5929e172u, ""},
    {0x339fbdu, 0x33a225u, 356, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 356@0xc291a:1, ip += +0x4; dispatch_model=static_100; state=state_add_const", 0x12u, 0x2000u, 0x620u, 0xdc3au, 0x26e60110u, 0x7ecd2d50u, ""},
    {0x33a233u, 0x33a385u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x55", 0x151u, 0xf001u, 0x94f0u, 0x99u, 0xbc0c0003u, 0xd2451705u, ""},
};

enum { VM_PROGRAM_ATLAS_050_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_050_mba_reduced_cases) / sizeof(vm_program_atlas_050_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_050_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_050_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_050_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_050_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_050_mba_successor_337e84(void) {
    return 0x338682u;
}

static uint32_t vm_program_atlas_050_mba_successor_338682(void) {
    return 0x338e18u;
}

static uint32_t vm_program_atlas_050_mba_successor_3386de(void) {
    return 0x3387d9u;
}

static uint32_t vm_program_atlas_050_mba_successor_3387ea(void) {
    return 0x338682u;
}

static uint32_t vm_program_atlas_050_mba_successor_338e18(void) {
    return 0x338f6cu;
}

static uint32_t vm_program_atlas_050_mba_successor_338f7a(void) {
    return 0x3391acu;
}

static uint32_t vm_program_atlas_050_mba_successor_3391ba(void) {
    return 0x339432u;
}

static uint32_t vm_program_atlas_050_mba_successor_339440(void) {
    return 0x339674u;
}

static uint32_t vm_program_atlas_050_mba_successor_339682(void) {
    return 0x3398e6u;
}

static uint32_t vm_program_atlas_050_mba_successor_3398f4(void) {
    return 0x339a83u;
}

static uint32_t vm_program_atlas_050_mba_successor_339a94(void) {
    return 0x339c26u;
}

static uint32_t vm_program_atlas_050_mba_successor_339c34(void) {
    return 0x339dc3u;
}

static uint32_t vm_program_atlas_050_mba_successor_339dd4(void) {
    return 0x339fafu;
}

static uint32_t vm_program_atlas_050_mba_successor_339fbd(void) {
    return 0x33a225u;
}

static uint32_t vm_program_atlas_050_mba_successor_33a233(void) {
    return 0x33a385u;
}

#endif /* VM_PROGRAM_ATLAS_050_MBA_REDUCED_C */
