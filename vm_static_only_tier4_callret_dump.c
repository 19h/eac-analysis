#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QUEUE_PATH "dumps/vmtail-wide-1m-w16/vm_static_only_handler_queue.tsv"
#define MAX_ROWS 64
#define MAX_FIELDS 32

typedef struct QueueRow {
    unsigned rank;
    unsigned entry;
    unsigned function_count;
    unsigned span_bytes;
    unsigned covered_bytes;
    unsigned calls;
    unsigned rets;
    char target[32];
    char sidecar[128];
    char function_names[256];
    char function_ranges[256];
    char ip_reads[512];
    char frame_reads[256];
    char frame_writes[256];
} QueueRow;

typedef struct Tier4Augment {
    unsigned entry;
    const char *callret_status;
    const char *slot_status;
    const char *slot_expr;
    const char *retdec_tail;
} Tier4Augment;

static const Tier4Augment k_augments[] = {
    { 116, "native_ret_frame_cell", "frame_cell_return_no_dispatch_slot", "", "primary returns frame[112]; overlap child returns pointer-table value" },
    { 309, "native_ret_frame_cell", "frame_cell_return_no_dispatch_slot", "", "primary returns frame[112]; overlap child returns result" },
    { 265, "native_call_side_effect_collapsed_by_retdec", "state_effect_only_no_dispatch_return", "", "RetDec exposes state update and ip += 34; native skeleton still has call side effects" },
    { 233, "native_ret_result_prefix", "state_effect_only_no_dispatch_return", "", "primary copies pointee into operand-selected frame slot and returns result" },
    { 227, "native_ret_result_prefix", "state_effect_only_no_dispatch_return", "", "primary copies frame value into operand-selected frame slot and returns result" },
    { 58, "native_ret_result_prefix", "state_effect_only_no_dispatch_return", "", "primary copies source operand into destination frame slot and returns result" },
    { 288, "native_ret_stack_prefix", "state_pointer_return_no_dispatch_slot", "", "primary builds a two-qword stack/value cell; overlap tier2 body is not standalone for this entry" },
    { 110, "native_ret_prefix_over_clean_child_slot", "overlap_dispatch_table_slot_comment_only", "((state0 ^ s16(ip+3)) - 0x29ce8b8a) & 0xffff", "primary writes frame[dst] = frame[187] + operand; child tier2 slot is clean only after separate entry composition" },
    { 126, "native_ret_stack_prefix", "state_pointer_return_no_dispatch_slot", "", "primary writes dereferenced qword plus frame[187]+operand stack cell" },
    { 303, "native_ret_result_prefix", "masked_noisy_overlap_return_no_dispatch_slot", "", "primary writes dereferenced source into destination; overlap tier3 return is g2/noise residue" },
    { 342, "native_ret_result_prefix", "state_effect_only_no_dispatch_return", "", "primary moves frame value and returns result; overlap child returns result" },
    { 353, "native_ret_result_prefix", "state_effect_only_no_dispatch_return", "", "primary writes frame[187]+operand into destination and returns result" },
    { 15, "native_ret_frame_cell", "frame_cell_return_no_dispatch_slot", "", "primary returns frame[112] after stack-like frame cell writes" },
    { 53, "native_ret_frame_cell", "frame_cell_return_no_dispatch_slot", "", "primary returns frame[112]; overlap child returns g2-derived residue" },
    { 163, "native_ret_prefix_over_raw_child_slot", "overlap_raw_slot_comment_only", "((((state0 - flags0 - 0x05d1cfd6) | 0x7c3f7914) ^ s16(ip+0)) - 0x51b094c3) & 0xffff", "primary copies frame value; child raw modulo slot lacks dispatch-table base for this entry" },
    { 252, "native_ret_frame_cell", "frame_cell_return_no_dispatch_slot", "", "primary returns frame[112]; overlap child is noisy predicate residue" },
    { 98, "native_ret_stack_prefix", "overlap_dispatch_deref_comment_only", "", "primary writes dereferenced qword plus frame[187]+operand; child dereferences dispatch_base+slot but slot algebra is not isolated" },
    { 149, "native_ret_result_prefix", "state_effect_only_no_dispatch_return", "", "primary copies frame value into operand-selected frame slot and returns result" },
    { 226, "native_double_ret_shared_prefix", "multi_ret_side_effect_no_dispatch_slot", "", "prefix plus known child both return; native queue records two ret side-effect sites" },
    { 7, "native_ret_prefix_over_clean_child_slot", "overlap_dispatch_table_slot_comment_only", "(s16(ip+0) + 0x4c6) & 0xffff", "primary copies source into destination; child tier3 slot is clean only after separate entry composition" },
    { 139, "native_ret_result_prefix", "raw_mod_overlap_return_comment_only", "", "primary writes frame[187]+operand into destination; overlap child returns raw modulo value" },
    { 205, "native_ret_stack_prefix", "masked_noisy_overlap_return_no_dispatch_slot", "", "primary builds stack/value cell; overlaps tier1 state-only and tier3 masked dispatch-base candidate bodies" },
    { 143, "native_ret_stack_prefix", "masked_noisy_overlap_return_no_dispatch_slot", "", "primary writes dereferenced qword plus frame[187]+operand; overlap return is noisy predicate residue" },
    { 202, "native_ret_stack_prefix", "state_effect_only_no_dispatch_return", "", "primary writes dereferenced qword plus frame[187]+operand and returns result" },
    { 270, "native_ret_prefix_over_helper_call_stub", "state_effect_only_no_dispatch_return", "", "primary writes frame[187]+operand into destination; later overlap stub calls external helper" },
    { 29, "native_ret_result_prefix", "masked_noisy_overlap_return_no_dispatch_slot", "", "primary writes frame[187]+operand into destination; overlap return is masked arithmetic residue" },
    { 1, "native_ret_stack_prefix", "state_effect_only_no_dispatch_return", "", "primary builds stack/value cell; overlap tier3 body is state-only for this entry" },
    { 133, "native_ret_prefix_over_noisy_child", "noisy_dispatch_base_candidate_comment_only", "", "primary loads through a pointer and stores result; overlap tier3 body has noisy dispatch-base candidate" },
    { 113, "native_ret_stack_prefix", "state_effect_only_no_dispatch_return", "", "primary builds stack/value cell; overlap child returns constant predicate" },
    { 21, "native_ret_frame_cell", "frame_cell_return_no_dispatch_slot", "", "primary returns frame[112] before tier3 state-only overlap body" },
    { 219, "native_ret_frame_cell", "frame_cell_return_no_dispatch_slot", "", "primary returns frame[112]; overlap child is noisy predicate residue" },
    { 11, "native_ret_with_early_masked_return", "early_masked_native_return_no_dispatch_slot", "", "RetDec has early masked dispatch-base/frame return plus final result return" },
    { 132, "native_double_ret_shared_prefix", "multi_ret_side_effect_no_dispatch_slot", "", "prefix plus noisy child return; native queue records two ret side-effect sites" },
    { 194, "native_double_ret_shared_prefix", "multi_ret_side_effect_no_dispatch_slot", "", "multiple shared range returns; no isolated dispatch slot" },
    { 318, "native_ret_stack_prefix", "masked_noisy_overlap_return_no_dispatch_slot", "", "primary builds stack/value cell; overlap return is noisy predicate residue" },
    { 93, "native_ret_result_prefix", "masked_noisy_overlap_return_no_dispatch_slot", "", "primary writes frame[187]+operand into destination; overlap return is g3/noise residue" },
    { 32, "native_ret_with_early_masked_return", "early_masked_native_return_no_dispatch_slot", "", "RetDec has early g3-masked native return plus final result return" },
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

static const Tier4Augment *augment_for(unsigned entry) {
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
    int c_span_bytes, c_covered_bytes, c_calls, c_rets;
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
    c_covered_bytes = col_index(header, header_count, "covered_bytes");
    c_calls = col_index(header, header_count, "calls");
    c_rets = col_index(header, header_count, "rets");
    if (c_rank < 0 || c_entry < 0 || c_target < 0 || c_class < 0 || c_sidecar < 0 ||
        c_functions < 0 || c_ranges < 0 || c_ip_reads < 0 || c_frame_reads < 0 ||
        c_frame_writes < 0 || c_function_count < 0 || c_span_bytes < 0 ||
        c_covered_bytes < 0 || c_calls < 0 || c_rets < 0) {
        fprintf(stderr, "%s: missing required queue columns\n", QUEUE_PATH);
        exit(1);
    }

    while (fgets(line, sizeof(line), file)) {
        char *fields[MAX_FIELDS];
        int field_count = split_fields(line, fields, MAX_FIELDS);
        const char *klass = field_at(fields, field_count, c_class);
        QueueRow *row;
        if (strcmp(klass, "tier4_native_call_or_ret_side_effect") != 0) {
            continue;
        }
        if (count >= max_rows) {
            fprintf(stderr, "%s: too many tier4 rows\n", QUEUE_PATH);
            exit(1);
        }
        row = &rows[count++];
        memset(row, 0, sizeof(*row));
        row->rank = parse_uint(field_at(fields, field_count, c_rank));
        row->entry = parse_uint(field_at(fields, field_count, c_entry));
        row->function_count = parse_uint(field_at(fields, field_count, c_function_count));
        row->span_bytes = parse_uint(field_at(fields, field_count, c_span_bytes));
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

static bool executable_slot(const Tier4Augment *aug) {
    return aug && strcmp(aug->slot_status, "retdec_dispatch_table_slot") == 0;
}

static void effect_summary(const QueueRow *row, const Tier4Augment *aug, char *out, size_t size) {
    snprintf(out, size,
             "callret=%s; calls=%u; rets=%u; ip += %u; retdec_tail=%s; ip_reads=%s; frame_reads=%s; frame_writes=%s; functions=%s; ranges=%s",
             aug ? aug->callret_status : "missing_tier4_augment",
             row->calls,
             row->rets,
             parse_ip_advance(row->ip_reads),
             aug ? aug->retdec_tail : "missing tier4 augment",
             row->ip_reads[0] ? row->ip_reads : "-",
             row->frame_reads[0] ? row->frame_reads : "-",
             row->frame_writes[0] ? row->frame_writes : "-",
             row->function_names[0] ? row->function_names : "-",
             row->function_ranges[0] ? row->function_ranges : "-");
}

static void emit_tsv(const QueueRow *rows, size_t count) {
    puts("rank\tentry\ttarget\tfunction\tmodel_function\tsidecar\tip_advance\tfunction_count\tcalls\trets\tcallret_status\tslot_status\tslot_expr\teffects");
    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier4Augment *aug = augment_for(row->entry);
        char function[128];
        char effects[2048];
        effect_summary(row, aug, effects, sizeof(effects));
        printf("%u\t%u\t%s\t%s\tvm_tier4_entry_%03u\t%s\t%u\t%u\t%u\t%u\t%s\t%s\t%s\t%s\n",
               row->rank,
               row->entry,
               row->target,
               primary_function(row, function, sizeof(function)),
               row->entry,
               row->sidecar,
               parse_ip_advance(row->ip_reads),
               row->function_count,
               row->calls,
               row->rets,
               aug ? aug->callret_status : "missing_tier4_augment",
               aug ? aug->slot_status : "missing_tier4_augment",
               aug && aug->slot_expr ? aug->slot_expr : "",
               effects);
    }
}

static void emit_markdown(const QueueRow *rows, size_t count) {
    unsigned candidate_slots = 0;
    unsigned clean_slots = 0;
    unsigned call_rows = 0;
    unsigned multi_ret_rows = 0;
    puts("# Static-Only Tier4 Call/Ret Models");
    puts("");
    puts("Native C-generated C/TSV evidence for tier4 static-only ranges with native call or ret side effects.");
    puts("Rows are preserved as executable C model functions, but dispatch slots stay comment-only unless a primary RetDec tail is proven clean.");
    puts("");
    for (size_t i = 0; i < count; i++) {
        const Tier4Augment *aug = augment_for(rows[i].entry);
        if (aug && aug->slot_expr && aug->slot_expr[0]) {
            candidate_slots++;
        }
        if (executable_slot(aug)) {
            clean_slots++;
        }
        if (rows[i].calls) {
            call_rows++;
        }
        if (rows[i].rets > 1) {
            multi_ret_rows++;
        }
    }
    puts("| metric | value |");
    puts("| --- | ---: |");
    printf("| tier4 rows | %zu |\n", count);
    printf("| native call rows | %u |\n", call_rows);
    printf("| multi-ret rows | %u |\n", multi_ret_rows);
    printf("| candidate slot rows | %u |\n", candidate_slots);
    printf("| executable dispatch-table slot rows | %u |\n", clean_slots);
    puts("");
    puts("| rank | entry | primary function | funcs | calls | rets | call/ret status | slot status | slot expr |");
    puts("| ---: | ---: | --- | ---: | ---: | ---: | --- | --- | --- |");
    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier4Augment *aug = augment_for(row->entry);
        char function[128];
        printf("| %u | %u | `%s` | %u | %u | %u | `%s` | `%s` | `%s` |\n",
               row->rank,
               row->entry,
               primary_function(row, function, sizeof(function)),
               row->function_count,
               row->calls,
               row->rets,
               aug ? aug->callret_status : "missing_tier4_augment",
               aug ? aug->slot_status : "missing_tier4_augment",
               aug && aug->slot_expr ? aug->slot_expr : "");
    }
}

static void emit_model_info(const QueueRow *rows, size_t count) {
    puts("const VMTier4ModelInfo k_vmtier4_models[] = {");
    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier4Augment *aug = augment_for(row->entry);
        char effects[2048];
        effect_summary(row, aug, effects, sizeof(effects));
        printf("    { %u, %u, %u, %u, %u, ",
               row->entry, parse_ip_advance(row->ip_reads), row->function_count, row->calls, row->rets);
        print_c_string(row->target);
        fputs(", ", stdout);
        print_c_string(row->function_names);
        fputs(", ", stdout);
        print_c_string(aug ? aug->callret_status : "missing_tier4_augment");
        fputs(", ", stdout);
        print_c_string(aug ? aug->slot_status : "missing_tier4_augment");
        fputs(", ", stdout);
        print_c_string(aug && aug->slot_expr ? aug->slot_expr : "");
        fputs(", ", stdout);
        print_c_string(effects);
        puts(" },");
    }
    puts("};");
}

static void emit_entry_function(const QueueRow *row) {
    const Tier4Augment *aug = augment_for(row->entry);
    unsigned advance = parse_ip_advance(row->ip_reads);
    char function[128];
    char effects[2048];
    effect_summary(row, aug, effects, sizeof(effects));

    printf("static VMTier4Result vm_tier4_entry_%03u(VMTier4Frame *vm) {\n", row->entry);
    printf("    /* rank=%u target=%s primary=%s sidecar=%s functions=%u calls=%u rets=%u span=%u covered=%u */\n",
           row->rank, row->target, primary_function(row, function, sizeof(function)),
           row->sidecar, row->function_count, row->calls, row->rets, row->span_bytes, row->covered_bytes);
    fputs("    /* ", stdout);
    fputs(effects, stdout);
    puts(" */");
    puts("    uint8_t *ip = vm_tier4_ip(vm);");
    puts("    uint32_t state0 = *vm_tier4_state_cell(vm);");
    puts("    uint32_t flags0 = *vm_tier4_flags_cell(vm);");
    puts("    (void)flags0;");
    if (row->entry == 265) {
        puts("    uint32_t state_after = ((uint32_t)(int32_t)vm_tier4_s16(ip + 8) - 0x6fba3362u + state0) & state0;");
        puts("    *vm_tier4_state_cell(vm) = state_after;");
    } else {
        puts("    (void)ip;");
        puts("    (void)state0;");
    }
    printf("    vm_tier4_advance_ip(vm, %u);\n", advance);
    printf("    return vm_tier4_done(vm, %u, VM_TIER4_UNKNOWN_SLOT, %u, ", row->entry, advance);
    print_c_string(function);
    printf(", ");
    print_c_string(aug ? aug->slot_status : "missing_tier4_augment");
    puts(");");
    puts("}");
    puts("");
}

static void emit_c(const QueueRow *rows, size_t count) {
    puts("/*");
    puts(" * Static-only tier4 native call/ret side-effect models.");
    puts(" *");
    puts(" * Tier4 rows have native call or ret side effects that make direct");
    puts(" * dispatch-slot promotion unsafe. This artifact keeps every row in");
    puts(" * syntax-checkable C and promotes only primary clean dispatch tails.");
    puts(" */");
    puts("#include <stdint.h>");
    puts("#include <stddef.h>");
    puts("");
    puts("#define VM_TIER4_UNKNOWN_SLOT 0xffffffffu");
    puts("#define VM_TIER4_IP_PTR_OFF 10");
    puts("#define VM_TIER4_FLAGS_OFF 35");
    puts("#define VM_TIER4_DISPATCH_BASE_OFF 271");
    puts("#define VM_TIER4_STATE_OFF 368");
    puts("");
    puts("typedef struct VMTier4Frame {");
    puts("    uint8_t *frame;");
    puts("    uintptr_t g2_mask;");
    puts("    uintptr_t g3_mask;");
    puts("} VMTier4Frame;");
    puts("");
    puts("typedef struct VMTier4Result {");
    puts("    uint16_t entry;");
    puts("    uint32_t slot;");
    puts("    uint8_t ip_advance;");
    puts("    uintptr_t dispatch_table_addr;");
    puts("    const char *source_function;");
    puts("    const char *model_status;");
    puts("} VMTier4Result;");
    puts("");
    puts("typedef struct VMTier4ModelInfo {");
    puts("    uint16_t entry;");
    puts("    uint8_t ip_advance;");
    puts("    uint8_t function_count;");
    puts("    uint8_t calls;");
    puts("    uint8_t rets;");
    puts("    const char *target;");
    puts("    const char *functions;");
    puts("    const char *callret_status;");
    puts("    const char *slot_status;");
    puts("    const char *slot_expr;");
    puts("    const char *effects;");
    puts("} VMTier4ModelInfo;");
    puts("");
    puts("static int16_t vm_tier4_s16(const uint8_t *p) { return *(const int16_t *)p; }");
    puts("static uint32_t *vm_tier4_state_cell(VMTier4Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER4_STATE_OFF); }");
    puts("static uint32_t *vm_tier4_flags_cell(VMTier4Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER4_FLAGS_OFF); }");
    puts("static uint8_t **vm_tier4_ip_cell(VMTier4Frame *vm) { return (uint8_t **)(vm->frame + VM_TIER4_IP_PTR_OFF); }");
    puts("static uint8_t *vm_tier4_ip(VMTier4Frame *vm) { return *vm_tier4_ip_cell(vm); }");
    puts("static void vm_tier4_advance_ip(VMTier4Frame *vm, uint8_t amount) { *vm_tier4_ip_cell(vm) += amount; }");
    puts("static uintptr_t vm_tier4_dispatch_base(VMTier4Frame *vm) { return *(uintptr_t *)(vm->frame + VM_TIER4_DISPATCH_BASE_OFF); }");
    puts("static VMTier4Result vm_tier4_done(VMTier4Frame *vm, uint16_t entry, uint32_t slot, uint8_t advance, const char *source_function, const char *status) {");
    puts("    return (VMTier4Result){ entry, slot, advance, slot == VM_TIER4_UNKNOWN_SLOT ? 0u : vm_tier4_dispatch_base(vm) + slot, source_function, status };");
    puts("}");
    puts("");
    emit_model_info(rows, count);
    puts("");
    for (size_t i = 0; i < count; i++) {
        emit_entry_function(&rows[i]);
    }
    puts("static VMTier4Result vm_tier4_call(unsigned entry, VMTier4Frame *vm) {");
    puts("    switch (entry) {");
    for (size_t i = 0; i < count; i++) {
        printf("    case %u: return vm_tier4_entry_%03u(vm);\n", rows[i].entry, rows[i].entry);
    }
    puts("    default: return (VMTier4Result){ (uint16_t)entry, VM_TIER4_UNKNOWN_SLOT, 0, 0, \"-\", \"not_tier4_modelled\" };");
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
