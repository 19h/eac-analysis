#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUEUE_PATH "dumps/vmtail-wide-1m-w16/vm_static_only_handler_queue.tsv"
#define MAX_ROWS 80
#define MAX_FIELDS 32
#define FIELD_SIZE 512

typedef struct QueueRow {
    unsigned rank;
    unsigned entry;
    char target[32];
    char sidecar[128];
    char function_name[128];
    char function_range[128];
    char ip_reads[256];
    char frame_reads[256];
    char frame_writes[256];
} QueueRow;

typedef struct Tier1Augment {
    unsigned entry;
    unsigned ip_advance;
    const char *slot_status;
    const char *slot_expr;
    const char *retdec_tail;
} Tier1Augment;

static const Tier1Augment k_augments[] = {
    { 159, 9, "state_effect_only_no_dispatch_return", "", "state = 2*state0 + s16(ip+4); paired qword pointer copy/step" },
    { 244, 9, "state_pointer_return_no_dispatch_slot", "", "word copy through paired pointer step; flags optionally adjusted" },
    { 12, 8, "retdec_dispatch_table_slot", "(s16(ip+0) - (state0 | flags0) + 0x61ec39cd) & 0xffff", "state = slot_source | (state0 | flags0); byte store through pointer step" },
    { 234, 11, "state_effect_only_no_dispatch_return", "", "state = ((state0 ^ s16(ip+0)) + 0x6352399c) | state0; byte compare/pointer step" },
    { 213, 8, "state_effect_only_no_dispatch_return", "", "state = state0 + 0x45c6c3bb - s16(ip+2); word copy through pointer step" },
    { 100, 11, "retdec_dispatch_table_slot", "(s16(ip+9) - 0x4b931360 + state0) & 0xffff", "state = slot_source ^ state0; word compare/pointer step" },
    { 224, 9, "state_effect_only_no_dispatch_return", "", "state = (state0 + s16(ip+3)) | state0; dword paired pointer step" },
    { 63, 11, "state_effect_only_no_dispatch_return", "", "state = ((s16(ip+2) - state0) ^ 0x14083b5a) + state0; byte compare/pointer step" },
    { 182, 8, "state_effect_only_no_dispatch_return", "", "state = state0 - (s16(ip+4) ^ 0x4174ae3e); word store through pointer step" },
    { 279, 5, "noisy_dispatch_return_candidate", "(s16(ip+2) - (state0 | flags0) + 0x68baea26) & 0xffff", "state = slot_source | (state0 | flags0); native return expression includes dispatch base plus obfuscation residue" },
    { 25, 11, "state_effect_only_no_dispatch_return", "", "state = (state0 + s16(ip+4)) ^ state0; word compare/pointer step" },
    { 228, 11, "state_effect_only_no_dispatch_return", "", "state = (s16(ip+4) ^ 0x5537ca3f) & state_after_flag_or; dword compare/pointer step" },
    { 77, 5, "state_effect_only_no_dispatch_return", "", "state = state0 + s16(ip+0); flag/operand rewrite body precedes tail" },
    { 59, 11, "state_effect_only_no_dispatch_return", "", "state = (s16(ip+6) - 0x26d85c20) & state0; qword compare/pointer step" },
    { 6, 9, "state_effect_only_no_dispatch_return", "", "state = state0 + 0x17cd41c1 + (state0 ^ s16(ip+7)); paired word pointer step" },
    { 155, 9, "state_effect_only_no_dispatch_return", "", "state = (s16(ip+2) - 0x24797ebc) | state0; byte pointer step" },
    { 298, 9, "pointer_effect_no_state_slot", "", "paired word pointer step; no clean state/dispatch slot in RetDec tail" },
    { 162, 11, "state_effect_only_no_dispatch_return", "", "state adjusted by operand/constant chain after byte compare; no clean dispatch slot" },
    { 286, 5, "state_effect_only_no_dispatch_return", "", "state = (state0 + s16(ip+2)) ^ state0; flag/operand rewrite body precedes tail" },
    { 84, 5, "masked_return_slot_requires_g3", "(state0 + s16(ip+0)) & g3_mask", "state = state0 + (state0 + s16(ip+0)); return is masked by g3" },
    { 14, 5, "state_effect_only_no_dispatch_return", "", "state = (s16(ip+0) - 0x7584d103) ^ (state0 & flags0); flag/operand rewrite body precedes tail" },
    { 197, 5, "state_effect_only_no_dispatch_return", "", "state = state0 - (state0 ^ s16(ip+2)); predicate scratch side effects present" },
    { 193, 9, "state_effect_only_no_dispatch_return", "", "state = (-0x1aead89a - state0 + s16(ip+5)) ^ state0; paired word pointer step" },
    { 72, 11, "state_effect_only_no_dispatch_return", "", "state = (state0 & 0x1cdfcc1d) - 0x17395727 - ((state0 & 0x1cdfcc1d) ^ s16(ip+0)); byte compare/pointer step" },
    { 97, 5, "state_effect_only_no_dispatch_return", "", "state = (s16(ip+3) - state0) & state0; flag/operand rewrite body precedes tail" },
    { 55, 5, "state_effect_only_no_dispatch_return", "", "state = state0 | s16(ip+2); flag/operand rewrite body precedes tail" },
    { 61, 11, "state_effect_only_no_dispatch_return", "", "state = 2*state0 - s16(ip+5) - 0x326db6ec; byte compare/pointer step" },
    { 178, 11, "compare_only_no_state_slot", "", "byte/word compare path updates flags; RetDec tail only advances IP" },
    { 41, 5, "state_effect_only_no_dispatch_return", "", "state = ((state0 ^ s16(ip+0)) - 0x7c7cd82f) | state0; flag/operand rewrite body precedes tail" },
    { 235, 5, "masked_return_slot_requires_g3", "(state0 + s16(ip+0)) & g3_mask", "state = state0 + (state0 + s16(ip+0)); return is masked by g3" },
    { 262, 11, "retdec_dispatch_table_slot", "(state0 + flags0 + 0x8f09 + s16(ip+8)) & 0xffff", "state = state0 + flags0; qword compare/pointer step before dispatch-table load" },
    { 16, 5, "state_effect_only_no_dispatch_return", "", "state = (s16(ip+1) - 0x699ad46a) ^ state0; flag/operand rewrite body precedes tail" },
    { 344, 5, "state_effect_only_no_dispatch_return", "", "state = ((state0 ^ s16(ip+0)) - 0x6a74b67c) & state0; predicate scratch side effects present" },
    { 106, 5, "masked_dispatch_table_slot_requires_g3", "s16(ip+3) & g3_mask", "state = state0 - s16(ip+3); return adds dispatch base to g3-masked operand" },
    { 218, 5, "state_effect_only_no_dispatch_return", "", "state = (s16(ip+0) - (state0 & 0x0844d83d) ^ 0x77e8718e) | (state0 & 0x0844d83d)" },
    { 206, 5, "state_effect_only_no_dispatch_return", "", "state = (s16(ip+3) + 0x79a60067) & state0; flag/operand rewrite body precedes tail" },
    { 272, 11, "state_effect_only_no_dispatch_return", "", "state = 2*state0 - s16(ip+0); qword compare/pointer step" },
    { 68, 5, "state_effect_only_no_dispatch_return", "", "state = ((state0 ^ selected_operand) + 0x72639e4e) ^ state0; flag/operand rewrite body precedes tail" },
    { 247, 5, "state_effect_only_no_dispatch_return", "", "state = (s16(ip+0) + 0x4c044f6f + state0) ^ state0; predicate scratch side effects present" },
    { 44, 5, "masked_table_load_requires_g5", "(s16(ip+1) - state0) & g5_mask", "state = (s16(ip+1) - state0) | state0; dispatch-table load uses g5-masked slot source" },
    { 164, 5, "retdec_raw_mod_slot", "((((state0 - flags0 - 0x05d1cfd6) | 0x7c3f7914) ^ s16(ip+0)) - 0x51b094c3) & 0xffff", "RetDec return is raw v46 %% 0x10000, not a dispatch-base load" },
    { 150, 5, "state_effect_only_no_dispatch_return", "", "state adjusted by operand/constant chain; return expression subtracts dispatch base residue" },
    { 170, 11, "state_effect_only_no_dispatch_return", "", "state = 2*state0 + s16(ip+7); byte compare/pointer step" },
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

static const Tier1Augment *augment_for(unsigned entry) {
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
        if (strcmp(klass, "tier1_single_function_medium_static_replay") != 0) {
            continue;
        }
        if (count >= max_rows) {
            fprintf(stderr, "%s: too many tier1 rows\n", QUEUE_PATH);
            exit(1);
        }
        row = &rows[count++];
        memset(row, 0, sizeof(*row));
        row->rank = parse_uint(field_at(fields, field_count, c_rank));
        row->entry = parse_uint(field_at(fields, field_count, c_entry));
        copy_text(row->target, sizeof(row->target), field_at(fields, field_count, c_target));
        copy_text(row->sidecar, sizeof(row->sidecar), field_at(fields, field_count, c_sidecar));
        copy_text(row->function_name, sizeof(row->function_name), field_at(fields, field_count, c_functions));
        copy_text(row->function_range, sizeof(row->function_range), field_at(fields, field_count, c_ranges));
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

static void effect_summary(const QueueRow *row, const Tier1Augment *aug, char *out, size_t size) {
    snprintf(out, size,
             "ip += %u; retdec_tail=%s; ip_reads=%s; frame_reads=%s; frame_writes=%s",
             aug ? aug->ip_advance : 0,
             aug ? aug->retdec_tail : "missing tier1 augment",
             row->ip_reads[0] ? row->ip_reads : "-",
             row->frame_reads[0] ? row->frame_reads : "-",
             row->frame_writes[0] ? row->frame_writes : "-");
}

static bool executable_slot(const Tier1Augment *aug) {
    return aug && strcmp(aug->slot_status, "retdec_dispatch_table_slot") == 0;
}

static void emit_tsv(const QueueRow *rows, size_t count) {
    puts("rank\tentry\ttarget\tfunction\tmodel_function\tsidecar\tip_advance\tslot_status\tslot_expr\teffects");
    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier1Augment *aug = augment_for(row->entry);
        char effects[1024];
        effect_summary(row, aug, effects, sizeof(effects));
        printf("%u\t%u\t%s\t%s\tvm_tier1_entry_%03u\t%s\t%u\t%s\t%s\t%s\n",
               row->rank,
               row->entry,
               row->target,
               row->function_name,
               row->entry,
               row->sidecar,
               aug ? aug->ip_advance : 0,
               aug ? aug->slot_status : "missing_tier1_augment",
               aug && aug->slot_expr ? aug->slot_expr : "",
               effects);
    }
}

static void emit_markdown(const QueueRow *rows, size_t count) {
    unsigned known_slots = 0;
    unsigned executable_slots = 0;
    puts("# Static-only Tier1 Handler Models");
    puts("");
    puts("These models promote the 43 medium single-function static-only handlers from the queue into named C-shaped model functions.");
    puts("Only RetDec tails that expose a real dispatch-table slot are marked executable in the primary VMState handler layer.");
    puts("");
    for (size_t i = 0; i < count; i++) {
        const Tier1Augment *aug = augment_for(rows[i].entry);
        if (aug && aug->slot_expr && aug->slot_expr[0]) known_slots++;
        if (executable_slot(aug)) executable_slots++;
    }
    puts("| Metric | Value |");
    puts("| --- | ---: |");
    printf("| models | %zu |\n", count);
    printf("| known or candidate slot expressions | %u |\n", known_slots);
    printf("| executable dispatch-table slot recoveries | %u |\n", executable_slots);
    puts("| source tier | tier1 single-function medium static replay |");
    puts("");
    puts("| Rank | Entry | Target | RetDec function | Model | Slot status | IP advance |");
    puts("| ---: | ---: | --- | --- | --- | --- | ---: |");
    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier1Augment *aug = augment_for(row->entry);
        printf("| %u | %u | `%s` | `%s` | `vm_tier1_entry_%03u` | `%s` | %u |\n",
               row->rank,
               row->entry,
               row->target,
               row->function_name,
               row->entry,
               aug ? aug->slot_status : "missing_tier1_augment",
               aug ? aug->ip_advance : 0);
    }
}

static void emit_slot_body(unsigned entry) {
    if (entry == 12) {
        puts("    uint32_t state_or_flags = state0 | flags0;");
        puts("    uint32_t slot_source = (uint32_t)((int32_t)vm_tier1_s16(ip + 0) - (int32_t)state_or_flags + 0x61ec39cd);");
        puts("    *vm_tier1_state_cell(vm) = slot_source | state_or_flags;");
        puts("    vm_tier1_advance_ip(vm, 8);");
        puts("    return vm_tier1_done(vm, 12, vm_tier1_slot16(slot_source), 8, \"function_7acd8\", \"retdec_dispatch_table_slot\");");
    } else if (entry == 100) {
        puts("    (void)flags0;");
        puts("    uint32_t slot_source = (uint32_t)((int32_t)vm_tier1_s16(ip + 9) - 0x4b931360 + (int32_t)state0);");
        puts("    *vm_tier1_state_cell(vm) = slot_source ^ state0;");
        puts("    vm_tier1_advance_ip(vm, 11);");
        puts("    return vm_tier1_done(vm, 100, vm_tier1_slot16(slot_source), 11, \"function_8cc81\", \"retdec_dispatch_table_slot\");");
    } else if (entry == 262) {
        puts("    uint32_t state_after_add = state0 + flags0;");
        puts("    uint32_t slot_source = state_after_add + 0x00008f09u + (uint32_t)(int32_t)vm_tier1_s16(ip + 8);");
        puts("    *vm_tier1_state_cell(vm) = state_after_add;");
        puts("    vm_tier1_advance_ip(vm, 11);");
        puts("    return vm_tier1_done(vm, 262, vm_tier1_slot16(slot_source), 11, \"function_aef02\", \"retdec_dispatch_table_slot\");");
    }
}

static void emit_c(const QueueRow *rows, size_t count) {
    puts("/*");
    puts(" * Static-only tier1 handler models.");
    puts(" *");
    puts(" * These functions name and classify the medium single-function");
    puts(" * static-only RetDec handlers.  The clean dispatch-table tails are");
    puts(" * executable; masked/noisy/native-tail rows remain explicit evidence");
    puts(" * for the next operand-rewrite pass.");
    puts(" */");
    puts("#include <stdint.h>");
    puts("#include <stddef.h>");
    puts("");
    puts("#define VM_TIER1_UNKNOWN_SLOT 0xffffffffu");
    puts("#define VM_TIER1_IP_PTR_OFF 10");
    puts("#define VM_TIER1_FLAGS_OFF 35");
    puts("#define VM_TIER1_DISPATCH_BASE_OFF 271");
    puts("#define VM_TIER1_STATE_OFF 368");
    puts("");
    puts("typedef struct VMTier1Frame {");
    puts("    uint8_t *frame;");
    puts("    uintptr_t g2_mask;");
    puts("    uintptr_t g3_mask;");
    puts("    uintptr_t g5_mask;");
    puts("} VMTier1Frame;");
    puts("");
    puts("typedef struct VMTier1Result {");
    puts("    uint16_t entry;");
    puts("    uint32_t slot;");
    puts("    uint8_t ip_advance;");
    puts("    uintptr_t dispatch_table_addr;");
    puts("    const char *source_function;");
    puts("    const char *model_status;");
    puts("} VMTier1Result;");
    puts("");
    puts("typedef struct VMTier1ModelInfo {");
    puts("    uint16_t entry;");
    puts("    uint8_t ip_advance;");
    puts("    const char *target;");
    puts("    const char *source_function;");
    puts("    const char *slot_status;");
    puts("    const char *slot_expr;");
    puts("    const char *effects;");
    puts("} VMTier1ModelInfo;");
    puts("");
    puts("static int16_t vm_tier1_s16(const uint8_t *p) { return *(const int16_t *)p; }");
    puts("static uint32_t *vm_tier1_state_cell(VMTier1Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER1_STATE_OFF); }");
    puts("static uint32_t *vm_tier1_flags_cell(VMTier1Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER1_FLAGS_OFF); }");
    puts("static uint8_t **vm_tier1_ip_cell(VMTier1Frame *vm) { return (uint8_t **)(vm->frame + VM_TIER1_IP_PTR_OFF); }");
    puts("static uint8_t *vm_tier1_ip(VMTier1Frame *vm) { return *vm_tier1_ip_cell(vm); }");
    puts("static void vm_tier1_advance_ip(VMTier1Frame *vm, uint8_t amount) { *vm_tier1_ip_cell(vm) += amount; }");
    puts("static uintptr_t vm_tier1_dispatch_base(VMTier1Frame *vm) { return *(uintptr_t *)(vm->frame + VM_TIER1_DISPATCH_BASE_OFF); }");
    puts("static uint32_t vm_tier1_slot16(uint32_t value) { return value & 0xffffu; }");
    puts("static VMTier1Result vm_tier1_done(VMTier1Frame *vm, uint16_t entry, uint32_t slot, uint8_t advance, const char *source_function, const char *status) {");
    puts("    return (VMTier1Result){ entry, slot, advance, slot == VM_TIER1_UNKNOWN_SLOT ? 0u : vm_tier1_dispatch_base(vm) + slot, source_function, status };");
    puts("}");
    puts("");
    puts("static const VMTier1ModelInfo k_vmtier1_models[] = {");
    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier1Augment *aug = augment_for(row->entry);
        char effects[1024];
        effect_summary(row, aug, effects, sizeof(effects));
        printf("    { %u, %u, ", row->entry, aug ? aug->ip_advance : 0);
        print_c_string(row->target);
        fputs(", ", stdout);
        print_c_string(row->function_name);
        fputs(", ", stdout);
        print_c_string(aug ? aug->slot_status : "missing_tier1_augment");
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
        const Tier1Augment *aug = augment_for(row->entry);
        char effects[1024];
        effect_summary(row, aug, effects, sizeof(effects));
        printf("static VMTier1Result vm_tier1_entry_%03u(VMTier1Frame *vm) {\n", row->entry);
        printf("    /* rank=%u target=%s retdec=%s sidecar=%s */\n",
               row->rank, row->target, row->function_name, row->sidecar);
        printf("    /* %s */\n", effects);
        puts("    uint8_t *ip = vm_tier1_ip(vm);");
        puts("    uint32_t state0 = *vm_tier1_state_cell(vm);");
        puts("    uint32_t flags0 = *vm_tier1_flags_cell(vm);");
        if (executable_slot(aug)) {
            emit_slot_body(row->entry);
        } else {
            puts("    (void)ip;");
            puts("    (void)state0;");
            puts("    (void)flags0;");
            printf("    vm_tier1_advance_ip(vm, %u);\n", aug ? aug->ip_advance : 0);
            printf("    return vm_tier1_done(vm, %u, VM_TIER1_UNKNOWN_SLOT, %u, ",
                   row->entry, aug ? aug->ip_advance : 0);
            print_c_string(row->function_name);
            fputs(", ", stdout);
            print_c_string(aug ? aug->slot_status : "missing_tier1_augment");
            puts(");");
        }
        puts("}");
        puts("");
    }

    puts("static VMTier1Result vm_tier1_call(unsigned entry, VMTier1Frame *vm) {");
    puts("    switch (entry) {");
    for (size_t i = 0; i < count; i++) {
        printf("    case %u: return vm_tier1_entry_%03u(vm);\n", rows[i].entry, rows[i].entry);
    }
    puts("    default: return (VMTier1Result){ (uint16_t)entry, VM_TIER1_UNKNOWN_SLOT, 0, 0, \"-\", \"not_tier1_modelled\" };");
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
