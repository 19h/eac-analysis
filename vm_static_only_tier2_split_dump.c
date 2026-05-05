#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUEUE_PATH "dumps/vmtail-wide-1m-w16/vm_static_only_handler_queue.tsv"
#define MAX_ROWS 32
#define MAX_FIELDS 32

typedef struct QueueRow {
    unsigned rank;
    unsigned entry;
    char target[32];
    char sidecar[128];
    char function_names[256];
    char function_ranges[256];
    char ip_reads[256];
    char frame_reads[256];
    char frame_writes[256];
} QueueRow;

typedef struct Tier2Augment {
    unsigned entry;
    unsigned ip_advance;
    const char *split_status;
    const char *slot_status;
    const char *slot_expr;
    const char *retdec_tail;
} Tier2Augment;

static const Tier2Augment k_augments[] = {
    { 204, 8, "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "state = s16(ip+4) - 0x452939b9 ^ state0; word store through pointer step" },
    { 34, 9, "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "state = (state0 + s16(ip+3) ^ 0x459b6b23) + state0; paired qword pointer step" },
    { 45, 9, "primary_prefix_before_neighbor_entry_46", "state_effect_only_no_dispatch_return", "", "state = 0x6050ae66 - s16(ip+0) + state0; paired qword pointer step" },
    { 60, 9, "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "state = ((state0 | 0x6dbd49a4) ^ s16(ip+5)) - 0x4424226a & (state0 | 0x6dbd49a4); paired dword pointer step" },
    { 289, 8, "primary_plus_empty_overlap_stub", "state_pointer_return_no_dispatch_slot", "", "byte copy through pointer step; RetDec return is frame+state pointer" },
    { 46, 8, "primary_before_tier0_entry_47_overlap", "retdec_dispatch_table_slot", "(state0 + s16(ip+6) + 0x368668dd) & 0xffff", "state = slot_source | state0; word store through pointer step" },
    { 328, 11, "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "state = (0x6640824a - state0 + s16(ip+6)) & state0; word compare/pointer step" },
    { 191, 5, "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "state = ((s16(ip+2) - state0) ^ 0x5e6d2a06) + state0; operand rewrite body precedes tail" },
    { 111, 5, "primary_plus_empty_overlap_stub", "retdec_dispatch_table_slot", "((state0 ^ s16(ip+3)) - 0x29ce8b8a) & 0xffff", "state = slot_source ^ state0; operand rewrite body precedes dispatch-table return" },
    { 263, 11, "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "state = state0 - (s16(ip+0) ^ 0x6d9939f2); dword compare/pointer step" },
    { 39, 11, "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "state = state0 | s16(ip+6); qword compare/pointer step" },
    { 335, 8, "primary_plus_empty_overlap_stub", "retdec_dispatch_table_slot", "(0x0000d24b - (flags0 ^ 0x6e6f5b3e ^ state0) + s16(ip+0)) & 0xffff", "state = flags0 ^ 0x6e6f5b3e ^ state0; dword copy through pointer step" },
    { 274, 11, "primary_before_large_neighbor_body", "state_effect_only_no_dispatch_return", "", "state = (state0 ^ s16(ip+0)) + state0; word compare/pointer step" },
    { 137, 9, "primary_plus_empty_overlap_stub", "retdec_dispatch_table_slot", "0", "state = s16(ip+2) - 0x5ff6cae6; RetDec tail algebra collapses slot to zero" },
    { 232, 9, "primary_before_large_neighbor_body", "retdec_dispatch_table_slot", "u16(ip+3) + 0x4204", "state = state0 - (flags0 ^ 0x4821c1c7) - 0x231e4204 - u16(ip+3); byte pointer step" },
};

static char *trim(char *text) {
    size_t len;
    while (*text == ' ' || *text == '\t' || *text == '\r' || *text == '\n') {
        text++;
    }
    len = strlen(text);
    while (len > 0 && (text[len - 1] == ' ' || text[len - 1] == '\t' ||
                       text[len - 1] == '\r' || text[len - 1] == '\n')) {
        text[--len] = '\0';
    }
    return text;
}

static int split_fields(char *line, char **fields, int max_fields) {
    int count = 0;
    char *cursor = line;
    while (count < max_fields) {
        fields[count++] = cursor;
        cursor = strchr(cursor, '\t');
        if (!cursor) {
            break;
        }
        *cursor++ = '\0';
    }
    for (int i = 0; i < count; i++) {
        fields[i] = trim(fields[i]);
    }
    return count;
}

static int col_index(char **header, int count, const char *name) {
    for (int i = 0; i < count; i++) {
        if (strcmp(header[i], name) == 0) {
            return i;
        }
    }
    return -1;
}

static const char *field_at(char **fields, int count, int index) {
    if (index < 0 || index >= count) {
        return "";
    }
    return fields[index];
}

static void copy_text(char *dest, size_t size, const char *src) {
    if (size == 0) {
        return;
    }
    snprintf(dest, size, "%s", src ? src : "");
}

static unsigned parse_uint(const char *text) {
    return (unsigned)strtoul(text && *text ? text : "0", NULL, 0);
}

static const Tier2Augment *augment_for(unsigned entry) {
    size_t count = sizeof(k_augments) / sizeof(k_augments[0]);
    for (size_t i = 0; i < count; i++) {
        if (k_augments[i].entry == entry) {
            return &k_augments[i];
        }
    }
    return NULL;
}

static int cmp_rank(const void *left, const void *right) {
    const QueueRow *a = (const QueueRow *)left;
    const QueueRow *b = (const QueueRow *)right;
    if (a->rank < b->rank) return -1;
    if (a->rank > b->rank) return 1;
    return (a->entry > b->entry) - (a->entry < b->entry);
}

static size_t load_rows(QueueRow *rows, size_t max_rows) {
    FILE *file = fopen(QUEUE_PATH, "r");
    char line[4096];
    char *header[MAX_FIELDS];
    int header_count;
    int c_rank, c_entry, c_target, c_class, c_sidecar, c_functions, c_ranges;
    int c_ip_reads, c_frame_reads, c_frame_writes;
    size_t count = 0;

    if (!file) {
        perror(QUEUE_PATH);
        exit(1);
    }
    if (!fgets(line, sizeof(line), file)) {
        fprintf(stderr, "%s: missing header\n", QUEUE_PATH);
        exit(1);
    }
    header_count = split_fields(line, header, MAX_FIELDS);
    c_rank = col_index(header, header_count, "rank");
    c_entry = col_index(header, header_count, "entry");
    c_target = col_index(header, header_count, "target");
    c_class = col_index(header, header_count, "priority_class");
    c_sidecar = col_index(header, header_count, "sidecar");
    c_functions = col_index(header, header_count, "function_names");
    c_ranges = col_index(header, header_count, "function_ranges");
    c_ip_reads = col_index(header, header_count, "ip_reads");
    c_frame_reads = col_index(header, header_count, "frame_reads");
    c_frame_writes = col_index(header, header_count, "frame_writes");
    if (c_rank < 0 || c_entry < 0 || c_target < 0 || c_class < 0 || c_sidecar < 0 ||
        c_functions < 0 || c_ranges < 0 || c_ip_reads < 0 || c_frame_reads < 0 ||
        c_frame_writes < 0) {
        fprintf(stderr, "%s: missing required queue columns\n", QUEUE_PATH);
        exit(1);
    }

    while (fgets(line, sizeof(line), file)) {
        char *fields[MAX_FIELDS];
        int field_count = split_fields(line, fields, MAX_FIELDS);
        const char *klass = field_at(fields, field_count, c_class);
        QueueRow *row;
        if (strcmp(klass, "tier2_small_shared_range_split") != 0) {
            continue;
        }
        if (count >= max_rows) {
            fprintf(stderr, "%s: too many tier2 rows\n", QUEUE_PATH);
            exit(1);
        }
        row = &rows[count++];
        memset(row, 0, sizeof(*row));
        row->rank = parse_uint(field_at(fields, field_count, c_rank));
        row->entry = parse_uint(field_at(fields, field_count, c_entry));
        copy_text(row->target, sizeof(row->target), field_at(fields, field_count, c_target));
        copy_text(row->sidecar, sizeof(row->sidecar), field_at(fields, field_count, c_sidecar));
        copy_text(row->function_names, sizeof(row->function_names), field_at(fields, field_count, c_functions));
        copy_text(row->function_ranges, sizeof(row->function_ranges), field_at(fields, field_count, c_ranges));
        copy_text(row->ip_reads, sizeof(row->ip_reads), field_at(fields, field_count, c_ip_reads));
        copy_text(row->frame_reads, sizeof(row->frame_reads), field_at(fields, field_count, c_frame_reads));
        copy_text(row->frame_writes, sizeof(row->frame_writes), field_at(fields, field_count, c_frame_writes));
    }
    fclose(file);
    qsort(rows, count, sizeof(rows[0]), cmp_rank);
    return count;
}

static void print_c_string(const char *text) {
    putchar('"');
    for (const unsigned char *p = (const unsigned char *)text; *p; p++) {
        if (*p == '\\' || *p == '"') {
            putchar('\\');
            putchar(*p);
        } else if (*p == '\n') {
            fputs("\\n", stdout);
        } else if (*p == '\t') {
            fputs("\\t", stdout);
        } else if (*p < 32 || *p >= 127) {
            printf("\\x%02x", *p);
        } else {
            putchar(*p);
        }
    }
    putchar('"');
}

static const char *primary_function(const QueueRow *row, char *out, size_t size) {
    const char *comma = strchr(row->function_names, ',');
    size_t len = comma ? (size_t)(comma - row->function_names) : strlen(row->function_names);
    if (len >= size) {
        len = size - 1;
    }
    memcpy(out, row->function_names, len);
    out[len] = '\0';
    return out;
}

static bool executable_slot(const Tier2Augment *aug) {
    return aug && strcmp(aug->slot_status, "retdec_dispatch_table_slot") == 0;
}

static void effect_summary(const QueueRow *row, const Tier2Augment *aug, char *out, size_t size) {
    snprintf(out, size,
             "split=%s; ip += %u; retdec_tail=%s; ip_reads=%s; frame_reads=%s; frame_writes=%s; functions=%s; ranges=%s",
             aug ? aug->split_status : "missing_tier2_augment",
             aug ? aug->ip_advance : 0,
             aug ? aug->retdec_tail : "missing tier2 augment",
             row->ip_reads[0] ? row->ip_reads : "-",
             row->frame_reads[0] ? row->frame_reads : "-",
             row->frame_writes[0] ? row->frame_writes : "-",
             row->function_names[0] ? row->function_names : "-",
             row->function_ranges[0] ? row->function_ranges : "-");
}

static void emit_tsv(const QueueRow *rows, size_t count) {
    puts("rank\tentry\ttarget\tfunction\tmodel_function\tsidecar\tip_advance\tsplit_status\tslot_status\tslot_expr\teffects");
    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier2Augment *aug = augment_for(row->entry);
        char function[128];
        char effects[2048];
        effect_summary(row, aug, effects, sizeof(effects));
        printf("%u\t%u\t%s\t%s\tvm_tier2_entry_%03u\t%s\t%u\t%s\t%s\t%s\t%s\n",
               row->rank,
               row->entry,
               row->target,
               primary_function(row, function, sizeof(function)),
               row->entry,
               row->sidecar,
               aug ? aug->ip_advance : 0,
               aug ? aug->split_status : "missing_tier2_augment",
               aug ? aug->slot_status : "missing_tier2_augment",
               aug && aug->slot_expr ? aug->slot_expr : "",
               effects);
    }
}

static void emit_markdown(const QueueRow *rows, size_t count) {
    unsigned known_slots = 0;
    unsigned executable_slots = 0;
    puts("# Static-only Tier2 Shared-Range Split Models");
    puts("");
    puts("These models split the 15 small shared-range static-only RetDec rows into primary handler evidence plus overlap/neighbor classifications.");
    puts("Only primary tails that expose a clean dispatch-table slot are marked executable in the primary VMState handler layer.");
    puts("");
    for (size_t i = 0; i < count; i++) {
        const Tier2Augment *aug = augment_for(rows[i].entry);
        if (aug && aug->slot_expr && aug->slot_expr[0]) known_slots++;
        if (executable_slot(aug)) executable_slots++;
    }
    puts("| Metric | Value |");
    puts("| --- | ---: |");
    printf("| models | %zu |\n", count);
    printf("| known or candidate slot expressions | %u |\n", known_slots);
    printf("| executable dispatch-table slot recoveries | %u |\n", executable_slots);
    puts("| source tier | tier2 small shared RetDec ranges |");
    puts("");
    puts("| Rank | Entry | Target | Primary function | Split status | Slot status | IP advance |");
    puts("| ---: | ---: | --- | --- | --- | --- | ---: |");
    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier2Augment *aug = augment_for(row->entry);
        char function[128];
        printf("| %u | %u | `%s` | `%s` | `%s` | `%s` | %u |\n",
               row->rank,
               row->entry,
               row->target,
               primary_function(row, function, sizeof(function)),
               aug ? aug->split_status : "missing_tier2_augment",
               aug ? aug->slot_status : "missing_tier2_augment",
               aug ? aug->ip_advance : 0);
    }
}

static void emit_slot_body(unsigned entry) {
    if (entry == 46) {
        puts("    uint32_t slot_source = state0 + 0x368668ddu + (uint32_t)(int32_t)vm_tier2_s16(ip + 6);");
        puts("    *vm_tier2_state_cell(vm) = slot_source | state0;");
        puts("    vm_tier2_advance_ip(vm, 8);");
        puts("    return vm_tier2_done(vm, 46, vm_tier2_slot16(slot_source), 8, \"function_820e1\", \"retdec_dispatch_table_slot\");");
    } else if (entry == 111) {
        puts("    uint32_t slot_source = (state0 ^ (uint32_t)(int32_t)vm_tier2_s16(ip + 3)) - 0x29ce8b8au;");
        puts("    *vm_tier2_state_cell(vm) = slot_source ^ state0;");
        puts("    vm_tier2_advance_ip(vm, 5);");
        puts("    return vm_tier2_done(vm, 111, vm_tier2_slot16(slot_source), 5, \"function_8f8ae\", \"retdec_dispatch_table_slot\");");
    } else if (entry == 335) {
        puts("    uint32_t state_after = flags0 ^ 0x6e6f5b3eu ^ state0;");
        puts("    uint32_t slot_source = 0x0000d24bu - state_after + (uint32_t)(int32_t)vm_tier2_s16(ip + 0);");
        puts("    *vm_tier2_state_cell(vm) = state_after;");
        puts("    vm_tier2_advance_ip(vm, 8);");
        puts("    return vm_tier2_done(vm, 335, vm_tier2_slot16(slot_source), 8, \"function_be648\", \"retdec_dispatch_table_slot\");");
    } else if (entry == 137) {
        puts("    *vm_tier2_state_cell(vm) = (uint32_t)((int32_t)vm_tier2_s16(ip + 2) - 0x5ff6cae6);");
        puts("    vm_tier2_advance_ip(vm, 9);");
        puts("    return vm_tier2_done(vm, 137, 0u, 9, \"function_94973\", \"retdec_dispatch_table_slot\");");
    } else if (entry == 232) {
        puts("    uint32_t operand = vm_tier2_u16(ip + 3);");
        puts("    uint32_t state_mid = state0 - (flags0 ^ 0x4821c1c7u);");
        puts("    uint32_t slot_source = operand + 0x4204u;");
        puts("    *vm_tier2_state_cell(vm) = state_mid - 0x231e4204u - operand;");
        puts("    vm_tier2_advance_ip(vm, 9);");
        puts("    return vm_tier2_done(vm, 232, slot_source, 9, \"function_a7ef8\", \"retdec_dispatch_table_slot\");");
    }
}

static void emit_c(const QueueRow *rows, size_t count) {
    puts("/*");
    puts(" * Static-only tier2 shared-range split models.");
    puts(" *");
    puts(" * These functions split small overlapping RetDec ranges into primary");
    puts(" * handler models plus explicit overlap classifications.  Clean");
    puts(" * dispatch-table tails are executable; neighbor/overlap rows remain");
    puts(" * visible evidence for later full inlining.");
    puts(" */");
    puts("#include <stdint.h>");
    puts("#include <stddef.h>");
    puts("");
    puts("#define VM_TIER2_UNKNOWN_SLOT 0xffffffffu");
    puts("#define VM_TIER2_IP_PTR_OFF 10");
    puts("#define VM_TIER2_FLAGS_OFF 35");
    puts("#define VM_TIER2_DISPATCH_BASE_OFF 271");
    puts("#define VM_TIER2_STATE_OFF 368");
    puts("");
    puts("typedef struct VMTier2Frame {");
    puts("    uint8_t *frame;");
    puts("    uintptr_t g2_mask;");
    puts("    uintptr_t g3_mask;");
    puts("} VMTier2Frame;");
    puts("");
    puts("typedef struct VMTier2Result {");
    puts("    uint16_t entry;");
    puts("    uint32_t slot;");
    puts("    uint8_t ip_advance;");
    puts("    uintptr_t dispatch_table_addr;");
    puts("    const char *source_function;");
    puts("    const char *model_status;");
    puts("} VMTier2Result;");
    puts("");
    puts("typedef struct VMTier2ModelInfo {");
    puts("    uint16_t entry;");
    puts("    uint8_t ip_advance;");
    puts("    const char *target;");
    puts("    const char *functions;");
    puts("    const char *split_status;");
    puts("    const char *slot_status;");
    puts("    const char *slot_expr;");
    puts("    const char *effects;");
    puts("} VMTier2ModelInfo;");
    puts("");
    puts("static int16_t vm_tier2_s16(const uint8_t *p) { return *(const int16_t *)p; }");
    puts("static uint16_t vm_tier2_u16(const uint8_t *p) { return *(const uint16_t *)p; }");
    puts("static uint32_t *vm_tier2_state_cell(VMTier2Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER2_STATE_OFF); }");
    puts("static uint32_t *vm_tier2_flags_cell(VMTier2Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER2_FLAGS_OFF); }");
    puts("static uint8_t **vm_tier2_ip_cell(VMTier2Frame *vm) { return (uint8_t **)(vm->frame + VM_TIER2_IP_PTR_OFF); }");
    puts("static uint8_t *vm_tier2_ip(VMTier2Frame *vm) { return *vm_tier2_ip_cell(vm); }");
    puts("static void vm_tier2_advance_ip(VMTier2Frame *vm, uint8_t amount) { *vm_tier2_ip_cell(vm) += amount; }");
    puts("static uintptr_t vm_tier2_dispatch_base(VMTier2Frame *vm) { return *(uintptr_t *)(vm->frame + VM_TIER2_DISPATCH_BASE_OFF); }");
    puts("static uint32_t vm_tier2_slot16(uint32_t value) { return value & 0xffffu; }");
    puts("static VMTier2Result vm_tier2_done(VMTier2Frame *vm, uint16_t entry, uint32_t slot, uint8_t advance, const char *source_function, const char *status) {");
    puts("    return (VMTier2Result){ entry, slot, advance, slot == VM_TIER2_UNKNOWN_SLOT ? 0u : vm_tier2_dispatch_base(vm) + slot, source_function, status };");
    puts("}");
    puts("");
    puts("const VMTier2ModelInfo k_vmtier2_models[] = {");
    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier2Augment *aug = augment_for(row->entry);
        char effects[2048];
        effect_summary(row, aug, effects, sizeof(effects));
        printf("    { %u, %u, ", row->entry, aug ? aug->ip_advance : 0);
        print_c_string(row->target);
        fputs(", ", stdout);
        print_c_string(row->function_names);
        fputs(", ", stdout);
        print_c_string(aug ? aug->split_status : "missing_tier2_augment");
        fputs(", ", stdout);
        print_c_string(aug ? aug->slot_status : "missing_tier2_augment");
        fputs(", ", stdout);
        print_c_string((aug && aug->slot_expr) ? aug->slot_expr : "");
        fputs(", ", stdout);
        print_c_string(effects);
        puts(" },");
    }
    puts("};");
    puts("");

    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier2Augment *aug = augment_for(row->entry);
        char function[128];
        char effects[2048];
        effect_summary(row, aug, effects, sizeof(effects));
        printf("static VMTier2Result vm_tier2_entry_%03u(VMTier2Frame *vm) {\n", row->entry);
        printf("    /* rank=%u target=%s primary=%s sidecar=%s */\n",
               row->rank, row->target, primary_function(row, function, sizeof(function)), row->sidecar);
        printf("    /* %s */\n", effects);
        puts("    uint8_t *ip = vm_tier2_ip(vm);");
        puts("    uint32_t state0 = *vm_tier2_state_cell(vm);");
        puts("    uint32_t flags0 = *vm_tier2_flags_cell(vm);");
        puts("    (void)ip;");
        puts("    (void)state0;");
        puts("    (void)flags0;");
        if (executable_slot(aug)) {
            emit_slot_body(row->entry);
        } else {
            printf("    vm_tier2_advance_ip(vm, %u);\n", aug ? aug->ip_advance : 0);
            printf("    return vm_tier2_done(vm, %u, VM_TIER2_UNKNOWN_SLOT, %u, ",
                   row->entry, aug ? aug->ip_advance : 0);
            print_c_string(function);
            fputs(", ", stdout);
            print_c_string(aug ? aug->slot_status : "missing_tier2_augment");
            puts(");");
        }
        puts("}");
        puts("");
    }
    puts("static VMTier2Result vm_tier2_call(unsigned entry, VMTier2Frame *vm) {");
    puts("    switch (entry) {");
    for (size_t i = 0; i < count; i++) {
        printf("    case %u: return vm_tier2_entry_%03u(vm);\n", rows[i].entry, rows[i].entry);
    }
    puts("    default: return (VMTier2Result){ (uint16_t)entry, VM_TIER2_UNKNOWN_SLOT, 0, 0, \"-\", \"not_tier2_modelled\" };");
    puts("    }");
    puts("}");
}

int main(int argc, char **argv) {
    QueueRow rows[MAX_ROWS];
    size_t count = load_rows(rows, MAX_ROWS);
    if (argc > 1 && strcmp(argv[1], "--tsv") == 0) {
        emit_tsv(rows, count);
        return 0;
    }
    if (argc > 1 && strcmp(argv[1], "--markdown") == 0) {
        emit_markdown(rows, count);
        return 0;
    }
    if (argc > 1 && strcmp(argv[1], "--c") != 0) {
        fprintf(stderr, "usage: %s [--c|--tsv|--markdown]\n", argv[0]);
        return 2;
    }
    emit_c(rows, count);
    return 0;
}
