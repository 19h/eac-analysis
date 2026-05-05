/*
 * Path frontier slot audit.
 * Evaluates weak path slot expressions against bounded state-trace rows.
 * Rows marked not_promotable are preserved as frontier evidence, not hard CFG.
 */
#include <stdint.h>

typedef struct VMPathFrontierSlotAudit {
    uint16_t entry;
    uint64_t path_key;
    uint32_t path_events;
    uint32_t eval_rows;
    uint32_t direct_table_matches;
    uint32_t direct_entry_matches;
    uint32_t aligned_in_range_rows;
    uint32_t invalid_slot_rows;
    uint32_t eval_errors;
    const char *validation;
    const char *top_actual_targets;
    const char *top_eval_relations;
    const char *slot_expr;
    const char *verdict;
} VMPathFrontierSlotAudit;

static const VMPathFrontierSlotAudit k_vm_path_frontier_slot_audit[] = {
    { 356u, 0x7af0b6860c39318dull, 116u, 116u, 0u, 0u, 13u, 103u, 0u, "target=0.0%, ip=0.0%, ok:13,unknown_target:103", "310@0xb8556:61,169@0x9af18:55", "slot=0x7e6d,table_entry=-1,actual=310:14;slot=0x3bae,table_entry=-1,actual=310:14;slot=0x4e00,table_entry=-1,actual=310:14;slot=0x668f,table_entry=-1,actual=169:14;slot=0x7614,table_entry=-1,actual=310:14;slot=0x4ac3,table_entry=-1,actual=169:13", "(mask32((mask32(u16_0 ^ (mask32(state0 ^ flags0)))) + 0x70d7d4a7)) & 0xffff", "not_promotable" },
    { 216u, 0x75052fca20bfc88bull, 112u, 112u, 0u, 0u, 0u, 112u, 0u, "target=0.0%, ip=0.0%, unknown_target:112", "310@0xb8556:82,169@0x9af18:30", "slot=0xa35a,table_entry=-1,actual=310:14;slot=0x4506,table_entry=-1,actual=310:13;slot=0x651d,table_entry=-1,actual=310:13;slot=0xdb22,table_entry=-1,actual=310:13;slot=0x2593,table_entry=-1,actual=310:13;slot=0x385f,table_entry=-1,actual=310:13", "(mask32(u16_1 - (mask32(state0 ^ flags0)))) & 0xffff", "not_promotable" },
    { 278u, 0xa604fbe70c42f7fdull, 82u, 83u, 0u, 0u, 0u, 83u, 0u, "target=0.0%, ip=0.0%, unknown_target:82", "169@0x9af18:56,310@0xb8556:26", "slot=0x5459,table_entry=-1,actual=169:14;slot=0xeb29,table_entry=-1,actual=169:14;slot=0x3b64,table_entry=-1,actual=310:13;slot=0xfa58,table_entry=-1,actual=310:13;slot=0x6b2a,table_entry=-1,actual=169:13;slot=0xf0d9,table_entry=-1,actual=169:13", "(mask32((mask32(u16_2 - (mask32(state0 | flags0)))) + 0x68baea26)) & 0xffff", "not_promotable" },
    { 311u, 0x75688f09a9896611ull, 67u, 69u, 0u, 0u, 0u, 69u, 0u, "target=0.0%, ip=0.0%, unknown_target:67", "169@0x9af18:36,310@0xb8556:31", "slot=0xbfc3,table_entry=-1,actual=310:13;slot=0x4a2c,table_entry=-1,actual=169:13;slot=0x3492,table_entry=-1,actual=310:13;slot=0xf091,table_entry=-1,actual=169:13;slot=0xfe36,table_entry=-1,actual=169:4;slot=0xf4f,table_entry=-1,actual=310:4", "(mask32((mask32(u16_3 ^ (mask32((mask32(state0 - 0x1889c111)) - (mask32((mask32((mask32(flags0 - (mask32((mask32(state0 - 0x1889c111)) + 0x3cae9026)))) | 0x2b959efa)) | 0x35e8abc1)))))) ^ 0xa9f4228)) & 0xffff", "not_promotable" },
    { 95u, 0x605a965b0cc7f63eull, 52u, 95u, 0u, 0u, 0u, 95u, 0u, "target=0.0%, ip=0.0%, unknown_target:52", "169@0x9af18:34,310@0xb8556:18", "slot=0xe22a,table_entry=-1,actual=169:61;slot=0xe22a,table_entry=-1,actual=310:31;slot=0xe22a,table_entry=-1,actual=86:2;slot=0xe22a,table_entry=-1,actual=42:1", "(mask32(u16_4 + 0x1f18e1aa)) & 0xffff", "not_promotable" },
    { 264u, 0xe3b0c44298fc1c14ull, 49u, 49u, 0u, 0u, 0u, 49u, 0u, "target=0.0%, ip=0.0%, unknown_target:49", "169@0x9af18:31,310@0xb8556:18", "slot=0x4c20,table_entry=-1,actual=169:13;slot=0x75ad,table_entry=-1,actual=169:13;slot=0x2aff,table_entry=-1,actual=310:13;slot=0xf0ec,table_entry=-1,actual=310:4;slot=0x5806,table_entry=-1,actual=169:4;slot=0x5816,table_entry=-1,actual=310:1", "(mask32((mask32(u16_8 + state0)) - 0x6fba3362)) & 0xffff", "not_promotable" },
    { 95u, 0xbe7c6d4e5e3db62full, 40u, 95u, 0u, 0u, 0u, 95u, 0u, "target=0.0%, ip=0.0%, unknown_target:40", "169@0x9af18:27,310@0xb8556:13", "slot=0xe22a,table_entry=-1,actual=169:61;slot=0xe22a,table_entry=-1,actual=310:31;slot=0xe22a,table_entry=-1,actual=86:2;slot=0xe22a,table_entry=-1,actual=42:1", "(mask32(u16_4 + 0x1f18e1aa)) & 0xffff", "not_promotable" },
    { 321u, 0xe43a6d061b0d7434ull, 13u, 19u, 0u, 0u, 0u, 19u, 0u, "target=0.0%, ip=0.0%, unknown_target:13", "169@0x9af18:13", "slot=0x5eb1,table_entry=-1,actual=169:13;slot=0x307a,table_entry=-1,actual=310:3;slot=0xd3cf,table_entry=-1,actual=169:3", "(mask32((mask32(u16_2 - (mask32((mask32((mask32(state0 + (mask32(u16_0 ^ flags0)))) | 0x2d680d90)) + 0x69cbe1a0)))) + 0x7ba65dc4)) & 0xffff", "not_promotable" },
    { 321u, 0x9e32de774899afb7ull, 6u, 19u, 0u, 0u, 0u, 19u, 0u, "target=0.0%, ip=0.0%, unknown_target:6", "169@0x9af18:3,310@0xb8556:3", "slot=0x5eb1,table_entry=-1,actual=169:13;slot=0x307a,table_entry=-1,actual=310:3;slot=0xd3cf,table_entry=-1,actual=169:3", "(mask32((mask32(u16_2 - (mask32((mask32((mask32(state0 + (mask32(u16_0 ^ flags0)))) | 0x2d680d90)) + 0x69cbe1a0)))) + 0x7ba65dc4)) & 0xffff", "not_promotable" },
    { 78u, 0x96fd915ac218c913ull, 1u, 1u, 0u, 0u, 0u, 1u, 0u, "target=0.0%, ip=0.0%, unknown_target:1", "310@0xb8556:1", "slot=0x82eb,table_entry=-1,actual=310:1", "(mask32(u16_0 ^ (mask32((mask32((mask32((mask32((mask32((mask32((mask32(state0 - (mask32((mask32(flags0 ^ 0xc7e744f)) ^ 0x623ccce4)))) & 0xd4da920)) | (mask32((mask32(flags0 ^ 0xc7e744f)) ^ 0x225dfa31)))) - 0x6110d031)) ^ 0x3fcb6e9a)) ^ (mask32(flags0 ^ 0xc7e744f)))) + 0x60a9dba6)))) & 0xffff", "not_promotable" },
};

static unsigned vm_path_frontier_slot_audit_count(void) {
    return (unsigned)(sizeof(k_vm_path_frontier_slot_audit) / sizeof(k_vm_path_frontier_slot_audit[0]));
}

_Static_assert(sizeof(k_vm_path_frontier_slot_audit) / sizeof(k_vm_path_frontier_slot_audit[0]) == 10u,
               "expected 10 path frontier slot audit rows");
