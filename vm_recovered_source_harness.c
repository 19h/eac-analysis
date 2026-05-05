#include <stdint.h>

typedef struct VMState {
    uint8_t *ip;
    uint32_t state;
    uint32_t flags;
    uint8_t byte;
} VMState;

uintptr_t dispatch_table[360];

static uint64_t unresolved_calls;
static uint64_t last_unresolved_ip;
static uint64_t ret_patch_calls;
static uint64_t last_ret_patch_ip;
static uint32_t last_ret_patch_ret0;
static uint32_t last_ret_patch_ret1;
static uint16_t last_ret_patch_stack_off;
static uint32_t last_ret_patch_flags;

void vm_unresolved_synthetic_tail(VMState *vm, uint64_t vm_ip) {
    (void)vm;
    unresolved_calls++;
    last_unresolved_ip = vm_ip;
}

void vm_native_ret_patch_tail(VMState *vm, uint64_t vm_ip, uint32_t ret0, uint32_t ret1, uint16_t stack_off, uint32_t flags) {
    (void)vm;
    ret_patch_calls++;
    last_ret_patch_ip = vm_ip;
    last_ret_patch_ret0 = ret0;
    last_ret_patch_ret1 = ret1;
    last_ret_patch_stack_off = stack_off;
    last_ret_patch_flags = flags;
}

void vm_program_sketch(VMState *vm, uint64_t vm_ip);

int main(void) {
    uint8_t bytecode[64] = {0};
    VMState vm = {
        .ip = bytecode,
        .state = 0,
        .flags = 0,
        .byte = 0,
    };

    vm_program_sketch(&vm, UINT64_MAX);
    return (unresolved_calls == 1 && last_unresolved_ip == UINT64_MAX) ? 0 : 1;
}
