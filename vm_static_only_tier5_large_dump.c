#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUEUE_PATH "dumps/vmtail-wide-1m-w16/vm_static_only_handler_queue.tsv"
#define MAX_ROWS 16
#define MAX_FIELDS 32

typedef struct QueueRow {
    unsigned rank;
    unsigned entry;
    unsigned function_count;
    unsigned span_bytes;
    unsigned insns;
    unsigned covered_bytes;
    unsigned calls;
    unsigned rets;
    char target[32];
    char sidecar[128];
    char function_names[256];
    char function_ranges[256];
    char ip_reads[512];
    char frame_reads[512];
    char frame_writes[512];
} QueueRow;

typedef struct Tier5Augment {
    unsigned entry;
    const char *large_status;
    const char *slot_status;
    const char *slot_expr;
    const char *retdec_tail;
} Tier5Augment;

static const Tier5Augment k_augments[] = {
    { 76, "large_single_function_state_machine", "non_dispatch_frame_cell_return", "", "updates state/flags through two immediate-mixed rounds, ip += 6, returns frame+113" },
    { 293, "large_single_function_predicate_machine", "g2_mask_return_no_dispatch_slot", "", "updates frame[96], flags, state, ip += 10, returns g2 mask" },
    { 238, "large_single_function_conditional_store", "state_effect_only_no_dispatch_return", "", "optional operand-selected frame store, state/flag rewrite, ip += 5, returns result value" },
    { 306, "large_single_function_noisy_dispatch_base_return", "noisy_dispatch_base_candidate_comment_only", "", "references dispatch base but mixes g1/g2/g3 masks, frame pointer, wide constants, and state before return" },
    { 355, "large_single_function_conditional_store", "masked_small_return_no_dispatch_slot", "", "optional operand-selected frame store, state rewrite, ip += 5, returns masked low pointer residue" },
    { 23, "large_single_function_flag_stack_cell", "frame_ip_cell_return_no_dispatch_slot", "", "builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns frame+10" },
    { 325, "large_single_function_flag_stack_cell", "raw_predicate_return_no_dispatch_slot", "", "builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns raw predicate" },
    { 236, "large_single_function_flag_stack_cell", "constant_return_no_dispatch_slot", "", "builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns constant 124" },
    { 156, "large_single_function_flag_stack_cell", "constant_return_no_dispatch_slot", "", "builds flag stack cell, optional operand-selected frame store, state rewrite, ip += 5, returns constant 1" },
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

static unsigned parse_ip_advance(const char *ip_reads) {
    unsigned best = 0;
    const char *p = ip_reads;
    while (p && *p) {
        const char *plus = strstr(p, "+0x");
        char *end = NULL;
        unsigned off;
        unsigned width = 1;
        if (!plus) {
            break;
        }
        off = (unsigned)strtoul(plus + 3, &end, 16);
        if (end && *end == '/') {
            width = (unsigned)strtoul(end + 1, NULL, 10);
        }
        if (off + width > best) {
            best = off + width;
        }
        p = end ? end : plus + 3;
    }
    return best;
}

static const Tier5Augment *augment_for(unsigned entry) {
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
    int c_ip_reads, c_frame_reads, c_frame_writes, c_function_count;
    int c_span_bytes, c_insns, c_covered_bytes, c_calls, c_rets;
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
    c_function_count = col_index(header, header_count, "function_count");
    c_span_bytes = col_index(header, header_count, "span_bytes");
    c_insns = col_index(header, header_count, "insns");
    c_covered_bytes = col_index(header, header_count, "covered_bytes");
    c_calls = col_index(header, header_count, "calls");
    c_rets = col_index(header, header_count, "rets");
    if (c_rank < 0 || c_entry < 0 || c_target < 0 || c_class < 0 || c_sidecar < 0 ||
        c_functions < 0 || c_ranges < 0 || c_ip_reads < 0 || c_frame_reads < 0 ||
        c_frame_writes < 0 || c_function_count < 0 || c_span_bytes < 0 ||
        c_insns < 0 || c_covered_bytes < 0 || c_calls < 0 || c_rets < 0) {
        fprintf(stderr, "%s: missing required queue columns\n", QUEUE_PATH);
        exit(1);
    }

    while (fgets(line, sizeof(line), file)) {
        char *fields[MAX_FIELDS];
        int field_count = split_fields(line, fields, MAX_FIELDS);
        const char *klass = field_at(fields, field_count, c_class);
        QueueRow *row;
        if (strcmp(klass, "tier5_large_static_replay") != 0) {
            continue;
        }
        if (count >= max_rows) {
            fprintf(stderr, "%s: too many tier5 rows\n", QUEUE_PATH);
            exit(1);
        }
        row = &rows[count++];
        memset(row, 0, sizeof(*row));
        row->rank = parse_uint(field_at(fields, field_count, c_rank));
        row->entry = parse_uint(field_at(fields, field_count, c_entry));
        row->function_count = parse_uint(field_at(fields, field_count, c_function_count));
        row->span_bytes = parse_uint(field_at(fields, field_count, c_span_bytes));
        row->insns = parse_uint(field_at(fields, field_count, c_insns));
        row->covered_bytes = parse_uint(field_at(fields, field_count, c_covered_bytes));
        row->calls = parse_uint(field_at(fields, field_count, c_calls));
        row->rets = parse_uint(field_at(fields, field_count, c_rets));
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

static void effect_summary(const QueueRow *row, const Tier5Augment *aug, char *out, size_t size) {
    snprintf(out, size,
             "large=%s; ip += %u; retdec_tail=%s; insns=%u; span=%u; ip_reads=%s; frame_reads=%s; frame_writes=%s; functions=%s; ranges=%s",
             aug ? aug->large_status : "missing_tier5_augment",
             parse_ip_advance(row->ip_reads),
             aug ? aug->retdec_tail : "missing tier5 augment",
             row->insns,
             row->span_bytes,
             row->ip_reads[0] ? row->ip_reads : "-",
             row->frame_reads[0] ? row->frame_reads : "-",
             row->frame_writes[0] ? row->frame_writes : "-",
             row->function_names[0] ? row->function_names : "-",
             row->function_ranges[0] ? row->function_ranges : "-");
}

static void emit_tsv(const QueueRow *rows, size_t count) {
    puts("rank\tentry\ttarget\tfunction\tmodel_function\tsidecar\tip_advance\tfunction_count\tspan_bytes\tinsns\tcovered_bytes\tlarge_status\tslot_status\tslot_expr\teffects");
    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier5Augment *aug = augment_for(row->entry);
        char function[128];
        char effects[4096];
        effect_summary(row, aug, effects, sizeof(effects));
        printf("%u\t%u\t%s\t%s\tvm_tier5_entry_%03u\t%s\t%u\t%u\t%u\t%u\t%u\t%s\t%s\t%s\t%s\n",
               row->rank,
               row->entry,
               row->target,
               primary_function(row, function, sizeof(function)),
               row->entry,
               row->sidecar,
               parse_ip_advance(row->ip_reads),
               row->function_count,
               row->span_bytes,
               row->insns,
               row->covered_bytes,
               aug ? aug->large_status : "missing_tier5_augment",
               aug ? aug->slot_status : "missing_tier5_augment",
               aug && aug->slot_expr ? aug->slot_expr : "",
               effects);
    }
}

static void emit_markdown(const QueueRow *rows, size_t count) {
    unsigned total_span = 0;
    unsigned total_insns = 0;
    unsigned max_span = 0;
    unsigned candidate_slots = 0;
    puts("# Static-Only Tier5 Large Models");
    puts("");
    puts("Native C-generated C/TSV evidence for the remaining large static-only single-function handlers.");
    puts("These rows are linked to their RetDec sidecars and emitted as conservative model functions; no dispatch slot is promoted without a clean primary tail.");
    puts("");
    for (size_t i = 0; i < count; i++) {
        const Tier5Augment *aug = augment_for(rows[i].entry);
        total_span += rows[i].span_bytes;
        total_insns += rows[i].insns;
        if (rows[i].span_bytes > max_span) {
            max_span = rows[i].span_bytes;
        }
        if (aug && aug->slot_expr && aug->slot_expr[0]) {
            candidate_slots++;
        }
    }
    puts("| metric | value |");
    puts("| --- | ---: |");
    printf("| tier5 rows | %zu |\n", count);
    printf("| total native span bytes | %u |\n", total_span);
    printf("| total native instructions | %u |\n", total_insns);
    printf("| max native span bytes | %u |\n", max_span);
    printf("| candidate slot rows | %u |\n", candidate_slots);
    printf("| executable dispatch-table slot rows | 0 |\n");
    puts("");
    puts("| rank | entry | primary function | span | insns | large status | slot status | tail |");
    puts("| ---: | ---: | --- | ---: | ---: | --- | --- | --- |");
    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier5Augment *aug = augment_for(row->entry);
        char function[128];
        printf("| %u | %u | `%s` | %u | %u | `%s` | `%s` | %s |\n",
               row->rank,
               row->entry,
               primary_function(row, function, sizeof(function)),
               row->span_bytes,
               row->insns,
               aug ? aug->large_status : "missing_tier5_augment",
               aug ? aug->slot_status : "missing_tier5_augment",
               aug ? aug->retdec_tail : "missing tier5 augment");
    }
}

static void emit_model_info(const QueueRow *rows, size_t count) {
    puts("const VMTier5ModelInfo k_vmtier5_models[] = {");
    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier5Augment *aug = augment_for(row->entry);
        char effects[4096];
        effect_summary(row, aug, effects, sizeof(effects));
        printf("    { %u, %u, %u, %u, %u, %u, ",
               row->entry,
               parse_ip_advance(row->ip_reads),
               row->function_count,
               row->span_bytes,
               row->insns,
               row->covered_bytes);
        print_c_string(row->target);
        fputs(", ", stdout);
        print_c_string(row->function_names);
        fputs(", ", stdout);
        print_c_string(aug ? aug->large_status : "missing_tier5_augment");
        fputs(", ", stdout);
        print_c_string(aug ? aug->slot_status : "missing_tier5_augment");
        fputs(", ", stdout);
        print_c_string(aug && aug->slot_expr ? aug->slot_expr : "");
        fputs(", ", stdout);
        print_c_string(effects);
        puts(" },");
    }
    puts("};");
}

static void emit_entry_function(const QueueRow *row) {
    const Tier5Augment *aug = augment_for(row->entry);
    unsigned advance = parse_ip_advance(row->ip_reads);
    char function[128];
    char effects[4096];
    effect_summary(row, aug, effects, sizeof(effects));

    printf("static VMTier5Result vm_tier5_entry_%03u(VMTier5Frame *vm) {\n", row->entry);
    printf("    /* rank=%u target=%s primary=%s sidecar=%s functions=%u span=%u insns=%u covered=%u */\n",
           row->rank, row->target, primary_function(row, function, sizeof(function)),
           row->sidecar, row->function_count, row->span_bytes, row->insns, row->covered_bytes);
    fputs("    /* ", stdout);
    fputs(effects, stdout);
    puts(" */");
    puts("    uint8_t *ip = vm_tier5_ip(vm);");
    puts("    uint32_t state0 = *vm_tier5_state_cell(vm);");
    puts("    uint32_t flags0 = *vm_tier5_flags_cell(vm);");
    puts("    (void)ip;");
    puts("    (void)state0;");
    puts("    (void)flags0;");
    if (row->entry == 76) {
        puts("    *vm_tier5_flags_cell(vm) = (*vm_tier5_flags_cell(vm) ^ (*vm_tier5_state_cell(vm) | 0x1244c900u)) & 0x3247cd40u;");
        puts("    *vm_tier5_state_cell(vm) = *vm_tier5_state_cell(vm) - 0x795b9aa4u;");
        puts("    vm->frame[367] = 0;");
        puts("    state0 = *vm_tier5_state_cell(vm);");
        puts("    uint32_t mix0 = (state0 + vm_tier5_u32(ip + 2)) ^ *vm_tier5_flags_cell(vm);");
        puts("    *vm_tier5_state_cell(vm) = mix0 + state0;");
        puts("    *vm_tier5_flags_cell(vm) = *vm_tier5_flags_cell(vm) ^ 0x6e4cfe36u;");
        puts("    *(uint64_t *)vm->frame = (uint64_t)(mix0 ^ 0x0da3b7d9u);");
        puts("    uint32_t mix1 = *vm_tier5_state_cell(vm) ^ *vm_tier5_flags_cell(vm);");
        puts("    *vm_tier5_state_cell(vm) = mix1;");
        puts("    *vm_tier5_flags_cell(vm) = (*vm_tier5_flags_cell(vm) & mix1) - 0x6ff7d7e8u;");
        puts("    state0 = *vm_tier5_state_cell(vm);");
        puts("    *vm_tier5_state_cell(vm) = ((state0 + (uint32_t)(int32_t)vm_tier5_s16(ip + 0)) ^ 0x5381a641u) & state0;");
    }
    printf("    vm_tier5_advance_ip(vm, %u);\n", advance);
    printf("    return vm_tier5_done(vm, %u, VM_TIER5_UNKNOWN_SLOT, %u, ", row->entry, advance);
    print_c_string(function);
    printf(", ");
    print_c_string(aug ? aug->slot_status : "missing_tier5_augment");
    puts(");");
    puts("}");
    puts("");
}

static void emit_c(const QueueRow *rows, size_t count) {
    puts("/*");
    puts(" * Static-only tier5 large-handler models.");
    puts(" *");
    puts(" * Tier5 rows are the remaining large static-only handler functions.");
    puts(" * The full RetDec function bodies are already present in sidecars;");
    puts(" * this layer binds them back to dispatch entries and keeps slot");
    puts(" * promotion conservative until a clean dispatch-table tail is proven.");
    puts(" */");
    puts("#include <stdint.h>");
    puts("#include <stddef.h>");
    puts("");
    puts("#define VM_TIER5_UNKNOWN_SLOT 0xffffffffu");
    puts("#define VM_TIER5_IP_PTR_OFF 10");
    puts("#define VM_TIER5_FLAGS_OFF 35");
    puts("#define VM_TIER5_DISPATCH_BASE_OFF 271");
    puts("#define VM_TIER5_STATE_OFF 368");
    puts("");
    puts("typedef struct VMTier5Frame {");
    puts("    uint8_t *frame;");
    puts("    uintptr_t g1_mask;");
    puts("    uintptr_t g2_mask;");
    puts("    uintptr_t g3_mask;");
    puts("} VMTier5Frame;");
    puts("");
    puts("typedef struct VMTier5Result {");
    puts("    uint16_t entry;");
    puts("    uint32_t slot;");
    puts("    uint8_t ip_advance;");
    puts("    uintptr_t dispatch_table_addr;");
    puts("    const char *source_function;");
    puts("    const char *model_status;");
    puts("} VMTier5Result;");
    puts("");
    puts("typedef struct VMTier5ModelInfo {");
    puts("    uint16_t entry;");
    puts("    uint8_t ip_advance;");
    puts("    uint8_t function_count;");
    puts("    uint16_t span_bytes;");
    puts("    uint16_t insns;");
    puts("    uint16_t covered_bytes;");
    puts("    const char *target;");
    puts("    const char *functions;");
    puts("    const char *large_status;");
    puts("    const char *slot_status;");
    puts("    const char *slot_expr;");
    puts("    const char *effects;");
    puts("} VMTier5ModelInfo;");
    puts("");
    puts("static int16_t vm_tier5_s16(const uint8_t *p) { return *(const int16_t *)p; }");
    puts("static uint32_t vm_tier5_u32(const uint8_t *p) { return *(const uint32_t *)p; }");
    puts("static uint32_t *vm_tier5_state_cell(VMTier5Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER5_STATE_OFF); }");
    puts("static uint32_t *vm_tier5_flags_cell(VMTier5Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER5_FLAGS_OFF); }");
    puts("static uint8_t **vm_tier5_ip_cell(VMTier5Frame *vm) { return (uint8_t **)(vm->frame + VM_TIER5_IP_PTR_OFF); }");
    puts("static uint8_t *vm_tier5_ip(VMTier5Frame *vm) { return *vm_tier5_ip_cell(vm); }");
    puts("static void vm_tier5_advance_ip(VMTier5Frame *vm, uint8_t amount) { *vm_tier5_ip_cell(vm) += amount; }");
    puts("static uintptr_t vm_tier5_dispatch_base(VMTier5Frame *vm) { return *(uintptr_t *)(vm->frame + VM_TIER5_DISPATCH_BASE_OFF); }");
    puts("static VMTier5Result vm_tier5_done(VMTier5Frame *vm, uint16_t entry, uint32_t slot, uint8_t advance, const char *source_function, const char *status) {");
    puts("    return (VMTier5Result){ entry, slot, advance, slot == VM_TIER5_UNKNOWN_SLOT ? 0u : vm_tier5_dispatch_base(vm) + slot, source_function, status };");
    puts("}");
    puts("");
    emit_model_info(rows, count);
    puts("");
    for (size_t i = 0; i < count; i++) {
        emit_entry_function(&rows[i]);
    }
    puts("static VMTier5Result vm_tier5_call(unsigned entry, VMTier5Frame *vm) {");
    puts("    switch (entry) {");
    for (size_t i = 0; i < count; i++) {
        printf("    case %u: return vm_tier5_entry_%03u(vm);\n", rows[i].entry, rows[i].entry);
    }
    puts("    default: return (VMTier5Result){ (uint16_t)entry, VM_TIER5_UNKNOWN_SLOT, 0, 0, \"-\", \"not_tier5_modelled\" };");
    puts("    }");
    puts("}");
}

int main(int argc, char **argv) {
    QueueRow rows[MAX_ROWS];
    size_t count = load_rows(rows, MAX_ROWS);
    const char *mode = argc > 1 ? argv[1] : "--c";
    if (strcmp(mode, "--c") == 0) {
        emit_c(rows, count);
    } else if (strcmp(mode, "--tsv") == 0) {
        emit_tsv(rows, count);
    } else if (strcmp(mode, "--markdown") == 0 || strcmp(mode, "--md") == 0) {
        emit_markdown(rows, count);
    } else {
        fprintf(stderr, "usage: %s [--c|--tsv|--markdown]\n", argv[0]);
        return 2;
    }
    return 0;
}
