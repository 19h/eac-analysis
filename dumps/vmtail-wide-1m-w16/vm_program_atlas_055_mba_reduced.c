/* Auto-generated compact MBA successor reduction. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_PROGRAM_ATLAS_055_MBA_REDUCED_C
#define VM_PROGRAM_ATLAS_055_MBA_REDUCED_C

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

static const VMProgramAtlasMBAReducedCase vm_program_atlas_055_mba_reduced_cases[] = {
    {0x33f278u, 0x33f6c8u, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100; state=state_const_post", 0x136u, 0x1u, 0x0u, 0x1e8u, 0xbffcd2b0u, 0xd56bbddfu, ""},
    {0x33f6c8u, 0x33f710u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x30", 0x1cu, 0xc800u, 0xac8u, 0x3410u, 0x120u, 0x24100164u, ""},
    {0x33f6f6u, 0x33f6c8u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x40", 0x9861u, 0x6498u, 0x8564u, 0x620u, 0xffa77c1cu, 0xc43ef185u, ""},
    {0x33f710u, 0x33f914u, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_const_post", 0xd7u, 0x1000u, 0x810u, 0x5288u, 0x7f5b78f4u, 0xc43ef185u, ""},
    {0x33f914u, 0x33fe02u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x211", 0xa8u, 0x6800u, 0x68u, 0xd72eu, 0x573b8fd9u, 0x60008101u, ""},
    {0x33fc02u, 0x33f914u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x4e6", 0xe5bu, 0xe80eu, 0x1e8u, 0x69ccu, 0xdd7695e2u, 0x5ffffd7fu, ""},
    {0x33fe02u, 0x34017bu, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x42u, 0x6900u, 0x9869u, 0xc53au, 0x78db2638u, 0x7bd65f3fu, ""},
    {0x34017bu, 0x3401c3u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x30", 0xc8u, 0x0u, 0x0u, 0x0u, 0xfffff67fu, 0x6dd8e9c0u, ""},
    {0x3401a9u, 0x34017bu, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x40", 0x1a6bu, 0x3a1au, 0x213au, 0x7d0bu, 0xe5079ff8u, 0x2860a00u, ""},
    {0x3401c3u, 0x3403c7u, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0xb9u, 0xd300u, 0xa9d3u, 0xde3au, 0xe50594f8u, 0x42c68a84u, ""},
    {0x3403c7u, 0x340953u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x288", 0xcbu, 0xcf00u, 0x9dcfu, 0x7604u, 0x573b8ba9u, 0xd2198268u, ""},
    {0x3406dcu, 0x3403c7u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x584", 0x72f5u, 0x4672u, 0x9546u, 0x8a0bu, 0xf6f5bfa4u, 0x18dd6daeu, ""},
    {0x340953u, 0x340ac4u, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100; state=state_const_post", 0x42u, 0xe900u, 0x8ee9u, 0x323au, 0xe5056fe7u, 0x5674bd9cu, ""},
    {0x340ac4u, 0x340d9au, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x28b", 0xc7u, 0x3700u, 0x4837u, 0x603au, 0xfffff7ffu, 0xfeddffffu, ""},
    {0x340b20u, 0x340ac4u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x2ce", 0x1e8u, 0x5d01u, 0x8f5du, 0x92a7u, 0xfffffa83u, 0x10103a30u, ""},
    {0x340d9au, 0x340f03u, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0xacu, 0x4300u, 0xaf43u, 0xebu, 0x7aab0433u, 0x11536cffu, ""},
    {0x340f03u, 0x340f4bu, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x30", 0x151u, 0x7801u, 0x9978u, 0x79u, 0x4012acdfu, 0x1db377d9u, ""},
    {0x340f31u, 0x340f03u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x40", 0x37b5u, 0xe537u, 0xcfe5u, 0xa88u, 0xff9f375bu, 0xe50c8c4u, ""},
    {0x340f4bu, 0x34114fu, 165, "ready_for_mba_reduction", "fallthrough", "next = 165@0x9a24c:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0xacu, 0x4300u, 0xaf43u, 0xaa3u, 0x782b32c3u, 0xe50c8c4u, ""},
    {0x34114fu, 0x3416b4u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x288", 0x79u, 0x5800u, 0x6058u, 0xff34u, 0xfffca7c7u, 0x6cd0e9c4u, ""},
    {0x34143du, 0x34114fu, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip -= 0x55d", 0x5781u, 0xe857u, 0x1e8u, 0x6c45u, 0x34ba5d21u, 0x624004c8u, ""},
    {0x3416b4u, 0x341a2du, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0xc7u, 0x1f00u, 0x4f1fu, 0x6c3au, 0x87db1110u, 0x200500u, ""},
    {0x341a2du, 0x341a75u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x30", 0xfdu, 0x8e00u, 0xb88eu, 0x0u, 0xfffee7dfu, 0x6cd1fdc4u, ""},
    {0x341a5bu, 0x341a2du, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x40", 0x43b8u, 0x9043u, 0xa790u, 0x3f61u, 0xb70144c5u, 0x42c48804u, ""},
    {0x341a75u, 0x341c79u, 354, "ready_for_mba_reduction", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x10cu, 0x1901u, 0x1c19u, 0x6bf6u, 0xe5059470u, 0x42c48804u, ""},
    {0x341c79u, 0x342205u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x288", 0x142u, 0xe801u, 0x1e8u, 0x978cu, 0x224501a0u, 0x6729ce04u, ""},
    {0x341f8eu, 0x341c79u, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip -= 0x584", 0xe1a7u, 0x44e1u, 0x9644u, 0xf1du, 0x1e84201eu, 0xed7c946du, ""},
    {0x342205u, 0x342376u, 165, "ready_for_mba_reduction", "fallthrough", "next = 165@0x9a24c:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x12u, 0x2000u, 0x820u, 0x953au, 0x86cb7743u, 0x7adeb6bdu, ""},
    {0x342376u, 0x34264cu, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x28b", 0x15bu, 0x7901u, 0x3979u, 0x931u, 0x20450388u, 0x4ad2e4fcu, ""},
    {0x3423d2u, 0x342376u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip -= 0x2ce", 0x473au, 0x6847u, 0x68u, 0xca5du, 0x176b6a33u, 0x900af3e5u, ""},
    {0x34264cu, 0x3427b5u, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x12u, 0x6000u, 0x560u, 0xc33au, 0x7c3afb2du, 0xf11927u, ""},
    {0x3427b5u, 0x3427fdu, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip += 0x30", 0x154u, 0xcc01u, 0x12ccu, 0x79u, 0x970979d0u, 0x5675c510u, ""},
    {0x3427e3u, 0x3427b5u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x40", 0x630au, 0x7963u, 0x79u, 0x8aa8u, 0x7eb71efcu, 0x206803u, ""},
    {0x3427fdu, 0x342a01u, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_add_const", 0x42u, 0x7900u, 0x9379u, 0xe83au, 0x7eb31e74u, 0x1c30e98bu, ""},
    {0x342a01u, 0x342f66u, 165, "ready_for_mba_reduction", "decoded_control", "next = table[165], ip += 0x288", 0x12u, 0x6000u, 0x560u, 0xc33au, 0x10000000u, 0x14108001u, ""},
    {0x342cefu, 0x342a01u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x55d", 0xe99eu, 0x32e9u, 0x9132u, 0xc70au, 0x2d70915au, 0xfe87fe50u, ""},
    {0x342f66u, 0x3430d7u, 171, "ready_for_mba_reduction", "fallthrough", "next = 171@0x9b4b3:1, ip += +0x2; dispatch_model=static_100; state=state_const_post", 0xc4u, 0x1e00u, 0x6e1eu, 0xf884u, 0x782304a8u, 0x9c90b4a9u, ""},
    {0x3430d7u, 0x3433adu, 354, "ready_for_mba_reduction", "decoded_control", "next = table[354], ip += 0x28b", 0x1eu, 0x1000u, 0x1f10u, 0x1e8u, 0x573b8bf1u, 0xfeb53bf9u, ""},
    {0x343132u, 0x3430d7u, 171, "ready_for_mba_reduction", "decoded_control", "next = table[171], ip -= 0x2ce", 0xcb3fu, 0x38cbu, 0xea38u, 0x253bu, 0x920633bcu, 0x21d2fe93u, ""},
    {0x3433adu, 0x30e872u, 42, "ready_for_mba_reduction", "decoded_control", "sampled operand footprint 0xa; observed target table[42], delta -0x34ced", 0x111u, 0xd801u, 0xe9d8u, 0x228u, 0x7ca32457u, 0x31520cdfu, ""},
    {0x343569u, 0x34367eu, 145, "ready_for_mba_reduction", "covered_synthetic_fallthrough", "next = 145@0x95b5c:1, ip += +0x5; dispatch_model=static_100", 0x1e8u, 0xab01u, 0xabu, 0x154u, 0x664d0eadu, 0x42000800u, ""},
    {0x34368fu, 0x343ef4u, 354, "needs_more_evidence", "fallthrough", "next = 354@0xc2241:1, ip += +0x2; dispatch_model=static_100", 0xc5e8u, 0xac5u, 0x940au, 0xe39au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x343ef4u, 0x343f3cu, 354, "needs_more_evidence", "decoded_control", "next = table[354], ip += 0x30", 0x159u, 0x4001u, 0x540u, 0x0u, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x343f22u, 0x343ef4u, 354, "needs_more_evidence", "decoded_control", "next = table[354], ip -= 0x40", 0x9e02u, 0x6d9eu, 0xd86du, 0xb4acu, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
    {0x343f3cu, 0x34556cu, 175, "needs_more_evidence", "covered_synthetic_fallthrough", "next = 175@0x9c08f:1, ip += +0x4; dispatch_model=static_100", 0xb9u, 0xab00u, 0xababu, 0xf33au, 0x0u, 0x0u, "state_trace_pre_state,state_trace_pre_flags,state_trace_pre_byte"},
};

enum { VM_PROGRAM_ATLAS_055_MBA_REDUCED_CASE_COUNT = sizeof(vm_program_atlas_055_mba_reduced_cases) / sizeof(vm_program_atlas_055_mba_reduced_cases[0]) };

static const VMProgramAtlasMBAReducedCase *vm_program_atlas_055_mba_case(uint32_t state) {
    for (size_t i = 0; i < VM_PROGRAM_ATLAS_055_MBA_REDUCED_CASE_COUNT; ++i) {
        if (vm_program_atlas_055_mba_reduced_cases[i].case_state == state) {
            return &vm_program_atlas_055_mba_reduced_cases[i];
        }
    }
    return 0;
}

static uint32_t vm_program_atlas_055_mba_successor_33f278(void) {
    return 0x33f6c8u;
}

static uint32_t vm_program_atlas_055_mba_successor_33f6c8(void) {
    return 0x33f710u;
}

static uint32_t vm_program_atlas_055_mba_successor_33f6f6(void) {
    return 0x33f6c8u;
}

static uint32_t vm_program_atlas_055_mba_successor_33f710(void) {
    return 0x33f914u;
}

static uint32_t vm_program_atlas_055_mba_successor_33f914(void) {
    return 0x33fe02u;
}

static uint32_t vm_program_atlas_055_mba_successor_33fc02(void) {
    return 0x33f914u;
}

static uint32_t vm_program_atlas_055_mba_successor_33fe02(void) {
    return 0x34017bu;
}

static uint32_t vm_program_atlas_055_mba_successor_34017b(void) {
    return 0x3401c3u;
}

static uint32_t vm_program_atlas_055_mba_successor_3401a9(void) {
    return 0x34017bu;
}

static uint32_t vm_program_atlas_055_mba_successor_3401c3(void) {
    return 0x3403c7u;
}

static uint32_t vm_program_atlas_055_mba_successor_3403c7(void) {
    return 0x340953u;
}

static uint32_t vm_program_atlas_055_mba_successor_3406dc(void) {
    return 0x3403c7u;
}

static uint32_t vm_program_atlas_055_mba_successor_340953(void) {
    return 0x340ac4u;
}

static uint32_t vm_program_atlas_055_mba_successor_340ac4(void) {
    return 0x340d9au;
}

static uint32_t vm_program_atlas_055_mba_successor_340b20(void) {
    return 0x340ac4u;
}

static uint32_t vm_program_atlas_055_mba_successor_340d9a(void) {
    return 0x340f03u;
}

static uint32_t vm_program_atlas_055_mba_successor_340f03(void) {
    return 0x340f4bu;
}

static uint32_t vm_program_atlas_055_mba_successor_340f31(void) {
    return 0x340f03u;
}

static uint32_t vm_program_atlas_055_mba_successor_340f4b(void) {
    return 0x34114fu;
}

static uint32_t vm_program_atlas_055_mba_successor_34114f(void) {
    return 0x3416b4u;
}

static uint32_t vm_program_atlas_055_mba_successor_34143d(void) {
    return 0x34114fu;
}

static uint32_t vm_program_atlas_055_mba_successor_3416b4(void) {
    return 0x341a2du;
}

static uint32_t vm_program_atlas_055_mba_successor_341a2d(void) {
    return 0x341a75u;
}

static uint32_t vm_program_atlas_055_mba_successor_341a5b(void) {
    return 0x341a2du;
}

static uint32_t vm_program_atlas_055_mba_successor_341a75(void) {
    return 0x341c79u;
}

static uint32_t vm_program_atlas_055_mba_successor_341c79(void) {
    return 0x342205u;
}

static uint32_t vm_program_atlas_055_mba_successor_341f8e(void) {
    return 0x341c79u;
}

static uint32_t vm_program_atlas_055_mba_successor_342205(void) {
    return 0x342376u;
}

static uint32_t vm_program_atlas_055_mba_successor_342376(void) {
    return 0x34264cu;
}

static uint32_t vm_program_atlas_055_mba_successor_3423d2(void) {
    return 0x342376u;
}

static uint32_t vm_program_atlas_055_mba_successor_34264c(void) {
    return 0x3427b5u;
}

static uint32_t vm_program_atlas_055_mba_successor_3427b5(void) {
    return 0x3427fdu;
}

static uint32_t vm_program_atlas_055_mba_successor_3427e3(void) {
    return 0x3427b5u;
}

static uint32_t vm_program_atlas_055_mba_successor_3427fd(void) {
    return 0x342a01u;
}

static uint32_t vm_program_atlas_055_mba_successor_342a01(void) {
    return 0x342f66u;
}

static uint32_t vm_program_atlas_055_mba_successor_342cef(void) {
    return 0x342a01u;
}

static uint32_t vm_program_atlas_055_mba_successor_342f66(void) {
    return 0x3430d7u;
}

static uint32_t vm_program_atlas_055_mba_successor_3430d7(void) {
    return 0x3433adu;
}

static uint32_t vm_program_atlas_055_mba_successor_343132(void) {
    return 0x3430d7u;
}

static uint32_t vm_program_atlas_055_mba_successor_3433ad(void) {
    return 0x30e872u;
}

static uint32_t vm_program_atlas_055_mba_successor_343569(void) {
    return 0x34367eu;
}

static uint32_t vm_program_atlas_055_mba_successor_34368f(void) {
    return 0x343ef4u;
}

static uint32_t vm_program_atlas_055_mba_successor_343ef4(void) {
    return 0x343f3cu;
}

static uint32_t vm_program_atlas_055_mba_successor_343f22(void) {
    return 0x343ef4u;
}

static uint32_t vm_program_atlas_055_mba_successor_343f3c(void) {
    return 0x34556cu;
}

#endif /* VM_PROGRAM_ATLAS_055_MBA_REDUCED_C */
