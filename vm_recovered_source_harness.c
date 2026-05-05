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

void vm_unresolved_synthetic_tail(VMState *vm, uint64_t vm_ip) {
    (void)vm;
    unresolved_calls++;
    last_unresolved_ip = vm_ip;
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
