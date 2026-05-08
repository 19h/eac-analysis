/* Auto-generated observed second-stage dispatch bindings. */
#include <stdint.h>
#include <stddef.h>

#ifndef VM_DISPATCH_SECOND_STAGE_BINDINGS_C
#define VM_DISPATCH_SECOND_STAGE_BINDINGS_C

typedef struct VMDispatchSecondStageBinding {
    uint32_t source_entry;
    const char *validation_status;
    uint32_t events;
    const char *idx_mix;
    const char *target_entry_mix;
    const char *dispatch_site_mix;
} VMDispatchSecondStageBinding;

static const VMDispatchSecondStageBinding vm_dispatch_second_stage_bindings[] = {
    {78u, "second_stage_dispatch_validated", 1u, "0x9b0:1", "310:1", "0xc80b9:1"},
    {95u, "second_stage_dispatch_validated", 95u, "0x548:61,0x9b0:31,0x2b0:2,0x150:1", "169:61,310:31,86:2,42:1", "0xcdac7:81,0xc80b9:14"},
    {216u, "second_stage_dispatch_validated", 112u, "0x9b0:82,0x548:30", "310:82,169:30", "0xcdac7:108,0xc80b9:4"},
    {264u, "second_stage_dispatch_validated", 50u, "0x548:32,0x9b0:18", "169:32,310:18", "0xcdac7:40,0xc80b9:10"},
    {278u, "second_stage_dispatch_validated", 83u, "0x548:56,0x9b0:26,0xa18:1", "169:56,310:26,323:1", "0xcdac7:82,0xc80b9:1"},
    {311u, "second_stage_dispatch_validated", 69u, "0x548:36,0x9b0:31,0x150:2", "169:36,310:31,42:2", "0xcdac7:55,0xc80b9:14"},
    {321u, "second_stage_dispatch_validated", 19u, "0x548:16,0x9b0:3", "169:16,310:3", "0xcdac7:19"},
    {356u, "second_stage_dispatch_validated", 116u, "0x9b0:61,0x548:55", "310:61,169:55", "0xcdac7:110,0xc80b9:6"},
};

enum { VM_DISPATCH_SECOND_STAGE_BINDING_COUNT = sizeof(vm_dispatch_second_stage_bindings) / sizeof(vm_dispatch_second_stage_bindings[0]) };

#endif /* VM_DISPATCH_SECOND_STAGE_BINDINGS_C */
