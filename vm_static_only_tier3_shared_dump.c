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
    char target[32];
    char sidecar[128];
    char function_names[256];
    char function_ranges[256];
    char ip_reads[256];
    char frame_reads[256];
    char frame_writes[256];
} QueueRow;

typedef struct Tier3Augment {
    unsigned entry;
    const char *share_status;
    const char *slot_status;
    const char *slot_expr;
    const char *retdec_tail;
} Tier3Augment;

static const Tier3Augment k_augments[] = {
    { 327, "primary_plus_two_empty_overlap_stubs", "state_effect_only_no_dispatch_return", "", "return is frame/result pointer after state update and pointer copy" },
    { 109, "primary_plus_tiny_overlap_stubs", "constant_return_no_dispatch_slot", "", "return 1 after state update and pointer write" },
    { 115, "primary_plus_empty_overlap_stubs", "non_dispatch_predicate_return", "", "return is low predicate bits from operand, not dispatch table" },
    { 304, "primary_plus_empty_overlap_stubs", "masked_noisy_return_no_dispatch_slot", "", "return is g2/base-mangled predicate residue" },
    { 135, "primary_plus_empty_overlap_stubs", "noisy_dispatch_return_candidate", "((state0 ^ s16(ip+5)) - 0x7ed035c5) & 0xffff", "RetDec tail has dispatch-base plus slot xor noisy low-bit residue" },
    { 141, "primary_plus_empty_overlap_stubs", "masked_noisy_return_no_dispatch_slot", "", "return is g2-masked residue after state/pointer effects" },
    { 341, "primary_plus_empty_overlap_stub", "constant_like_predicate_return", "", "return is obfuscated constant/predicate expression" },
    { 120, "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "return is frame+state cell after compare/flag side effects" },
    { 147, "primary_plus_empty_overlap_stubs", "state_effect_only_no_dispatch_return", "", "return is frame/result pointer after operand rewrite" },
    { 275, "primary_plus_empty_overlap_stub", "retdec_raw_mod_slot", "((state0 ^ s16(ip+1)) - 0x26ed1596) & 0xffff", "RetDec return is raw modulo slot without dispatch base" },
    { 152, "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "return is frame/result pointer after compare/flag side effects" },
    { 19, "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "return is frame+ip cell after pointer compare and state update" },
    { 296, "primary_plus_empty_overlap_stubs", "state_effect_only_no_dispatch_return", "", "return is frame/result pointer after flag/operand rewrite" },
    { 329, "primary_plus_empty_overlap_stub", "noisy_dispatch_base_candidate", "", "RetDec references dispatch base but return algebra is g3/noise-mixed" },
    { 177, "primary_plus_large_neighbor_body", "masked_return_slot_requires_g3", "", "return is g3-masked state/slot candidate" },
    { 103, "primary_plus_empty_overlap_stub", "non_dispatch_predicate_return", "", "return is low predicate bits" },
    { 24, "primary_plus_empty_overlap_stub", "retdec_dispatch_table_slot", "((((0x7d53d38d - state0 + s16(ip+6)) & state0) ^ s16(ip+2)) + 0x565) & 0xffff", "return dispatch_base + slot after state_after = (0x7d53d38d - state0 + s16(ip+6)) & state0" },
    { 343, "primary_plus_large_neighbor_body", "state_effect_only_no_dispatch_return", "", "return is frame/result pointer after compare/flag side effects" },
    { 51, "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "return is frame/result pointer after pointer compare and state update" },
    { 8, "primary_plus_empty_overlap_stub", "retdec_dispatch_table_slot", "(s16(ip+0) + 0x4c6) & 0xffff", "return dispatch_table[s16(ip+0)+0x4c6] after rotate/flag side effects" },
    { 277, "primary_plus_empty_overlap_stub", "noisy_dispatch_base_candidate", "", "RetDec references dispatch base but return algebra is g3/noise-mixed" },
    { 4, "primary_plus_empty_overlap_stub", "g2_mask_return_no_dispatch_slot", "", "return is g2 mask address, not dispatch" },
    { 212, "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "return is frame/result pointer after qword pointer step" },
    { 211, "primary_plus_empty_overlap_stub", "masked_noisy_return_no_dispatch_slot", "", "return is g3/base-mangled arithmetic residue" },
    { 312, "primary_plus_empty_overlap_stub", "masked_dispatch_base_requires_g3", "", "return mixes dispatch base address with g3 mask" },
    { 104, "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "return is frame/result pointer on both RetDec branches" },
    { 27, "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "return is frame/result pointer after operand/state rewrite" },
    { 89, "primary_plus_empty_overlap_stubs", "non_dispatch_pointer_return", "", "return is frame+0x81 plus predicate-selected residue" },
    { 230, "primary_plus_empty_overlap_stub", "noisy_dispatch_base_candidate", "", "RetDec reads dispatch base but return subtracts masked low-slot residue" },
    { 294, "primary_plus_empty_overlap_stubs", "masked_noisy_return_no_dispatch_slot", "", "return is obfuscated pointer/noise expression" },
    { 2, "primary_plus_empty_overlap_stubs", "state_effect_only_no_dispatch_return", "", "return is frame/result pointer after wide operand update" },
    { 166, "primary_plus_empty_overlap_stub", "masked_return_slot_requires_g3", "", "return is g3-masked state/slot candidate" },
    { 271, "primary_plus_empty_overlap_stub", "constant_pointer_return_no_dispatch_slot", "", "return is frame plus constant offset" },
    { 10, "primary_plus_empty_overlap_stub", "noisy_dispatch_base_candidate", "", "RetDec reads dispatch base but return is g3/noise-mixed" },
    { 249, "primary_plus_empty_overlap_stubs", "retdec_raw_mod_slot", "((s16(ip+0) - state0 + 0x4522afca) & 0xffff)", "RetDec return is raw modulo slot without dispatch base" },
    { 207, "primary_plus_empty_overlap_stub", "masked_dispatch_base_candidate", "", "return is dispatch base OR mask mixed with frame+state" },
    { 134, "primary_plus_empty_overlap_stubs", "noisy_dispatch_base_candidate", "", "RetDec reads dispatch base but return algebra is g3/noise-mixed" },
    { 223, "primary_plus_empty_overlap_stubs", "noisy_dispatch_base_candidate", "", "RetDec reads dispatch base but return algebra is heavily base/noise-mixed" },
    { 22, "primary_plus_empty_overlap_stubs", "state_effect_only_no_dispatch_return", "", "return is frame/result pointer after operand/state rewrite" },
    { 81, "primary_plus_empty_overlap_stub", "state_effect_only_no_dispatch_return", "", "return is frame/result pointer after operand/state rewrite" },
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

static const Tier3Augment *augment_for(unsigned entry) {
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
    int c_ip_reads, c_frame_reads, c_frame_writes, c_function_count, c_span_bytes, c_covered_bytes;
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
    if (c_rank < 0 || c_entry < 0 || c_target < 0 || c_class < 0 || c_sidecar < 0 ||
        c_functions < 0 || c_ranges < 0 || c_ip_reads < 0 || c_frame_reads < 0 ||
        c_frame_writes < 0 || c_function_count < 0 || c_span_bytes < 0 || c_covered_bytes < 0) {
        fprintf(stderr, "%s: missing required queue columns\n", QUEUE_PATH);
        exit(1);
    }

    while (fgets(line, sizeof(line), file)) {
        char *fields[MAX_FIELDS];
        int field_count = split_fields(line, fields, MAX_FIELDS);
        const char *klass = field_at(fields, field_count, c_class);
        QueueRow *row;
        if (strcmp(klass, "tier3_multi_function_shared_range") != 0) {
            continue;
        }
        if (count >= max_rows) {
            fprintf(stderr, "%s: too many tier3 rows\n", QUEUE_PATH);
            exit(1);
        }
        row = &rows[count++];
        memset(row, 0, sizeof(*row));
        row->rank = parse_uint(field_at(fields, field_count, c_rank));
        row->entry = parse_uint(field_at(fields, field_count, c_entry));
        row->function_count = parse_uint(field_at(fields, field_count, c_function_count));
        row->span_bytes = parse_uint(field_at(fields, field_count, c_span_bytes));
        row->covered_bytes = parse_uint(field_at(fields, field_count, c_covered_bytes));
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

static bool executable_slot(const Tier3Augment *aug) {
    return aug && strcmp(aug->slot_status, "retdec_dispatch_table_slot") == 0;
}

static void effect_summary(const QueueRow *row, const Tier3Augment *aug, char *out, size_t size) {
    snprintf(out, size,
             "share=%s; ip += %u; retdec_tail=%s; ip_reads=%s; frame_reads=%s; frame_writes=%s; functions=%s; ranges=%s",
             aug ? aug->share_status : "missing_tier3_augment",
             parse_ip_advance(row->ip_reads),
             aug ? aug->retdec_tail : "missing tier3 augment",
             row->ip_reads[0] ? row->ip_reads : "-",
             row->frame_reads[0] ? row->frame_reads : "-",
             row->frame_writes[0] ? row->frame_writes : "-",
             row->function_names[0] ? row->function_names : "-",
             row->function_ranges[0] ? row->function_ranges : "-");
}

static void emit_tsv(const QueueRow *rows, size_t count) {
    puts("rank\tentry\ttarget\tfunction\tmodel_function\tsidecar\tip_advance\tfunction_count\tshare_status\tslot_status\tslot_expr\teffects");
    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier3Augment *aug = augment_for(row->entry);
        char function[128];
        char effects[2048];
        effect_summary(row, aug, effects, sizeof(effects));
        printf("%u\t%u\t%s\t%s\tvm_tier3_entry_%03u\t%s\t%u\t%u\t%s\t%s\t%s\t%s\n",
               row->rank,
               row->entry,
               row->target,
               primary_function(row, function, sizeof(function)),
               row->entry,
               row->sidecar,
               parse_ip_advance(row->ip_reads),
               row->function_count,
               aug ? aug->share_status : "missing_tier3_augment",
               aug ? aug->slot_status : "missing_tier3_augment",
               aug && aug->slot_expr ? aug->slot_expr : "",
               effects);
    }
}

static void emit_markdown(const QueueRow *rows, size_t count) {
    unsigned candidate_slots = 0;
    unsigned clean_slots = 0;
    puts("# Static-Only Tier3 Shared-Range Models");
    puts("");
    puts("Native C-generated C/TSV evidence for tier3 static-only multi-function shared ranges.");
    puts("Rows with clean dispatch-table tails are executable in the generated model; noisy or masked tails are preserved as comments.");
    puts("");
    for (size_t i = 0; i < count; i++) {
        const Tier3Augment *aug = augment_for(rows[i].entry);
        if (aug && aug->slot_expr && aug->slot_expr[0]) {
            candidate_slots++;
        }
        if (executable_slot(aug)) {
            clean_slots++;
        }
    }
    puts("| metric | value |");
    puts("| --- | ---: |");
    printf("| tier3 rows | %zu |\n", count);
    printf("| candidate slot rows | %u |\n", candidate_slots);
    printf("| executable dispatch-table slot rows | %u |\n", clean_slots);
    puts("");
    puts("| rank | entry | primary function | funcs | share status | slot status | slot expr |");
    puts("| ---: | ---: | --- | ---: | --- | --- | --- |");
    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier3Augment *aug = augment_for(row->entry);
        char function[128];
        printf("| %u | %u | `%s` | %u | `%s` | `%s` | `%s` |\n",
               row->rank,
               row->entry,
               primary_function(row, function, sizeof(function)),
               row->function_count,
               aug ? aug->share_status : "missing_tier3_augment",
               aug ? aug->slot_status : "missing_tier3_augment",
               aug && aug->slot_expr ? aug->slot_expr : "");
    }
}

static void emit_model_info(const QueueRow *rows, size_t count) {
    puts("const VMTier3ModelInfo k_vmtier3_models[] = {");
    for (size_t i = 0; i < count; i++) {
        const QueueRow *row = &rows[i];
        const Tier3Augment *aug = augment_for(row->entry);
        char effects[2048];
        effect_summary(row, aug, effects, sizeof(effects));
        printf("    { %u, %u, %u, ", row->entry, parse_ip_advance(row->ip_reads), row->function_count);
        print_c_string(row->target);
        fputs(", ", stdout);
        print_c_string(row->function_names);
        fputs(", ", stdout);
        print_c_string(aug ? aug->share_status : "missing_tier3_augment");
        fputs(", ", stdout);
        print_c_string(aug ? aug->slot_status : "missing_tier3_augment");
        fputs(", ", stdout);
        print_c_string(aug && aug->slot_expr ? aug->slot_expr : "");
        fputs(", ", stdout);
        print_c_string(effects);
        puts(" },");
    }
    puts("};");
}

static void emit_entry_function(const QueueRow *row) {
    const Tier3Augment *aug = augment_for(row->entry);
    unsigned advance = parse_ip_advance(row->ip_reads);
    char function[128];
    char effects[2048];
    effect_summary(row, aug, effects, sizeof(effects));

    printf("static VMTier3Result vm_tier3_entry_%03u(VMTier3Frame *vm) {\n", row->entry);
    printf("    /* rank=%u target=%s primary=%s sidecar=%s functions=%u span=%u covered=%u */\n",
           row->rank, row->target, primary_function(row, function, sizeof(function)),
           row->sidecar, row->function_count, row->span_bytes, row->covered_bytes);
    fputs("    /* ", stdout);
    fputs(effects, stdout);
    puts(" */");
    puts("    uint8_t *ip = vm_tier3_ip(vm);");
    puts("    uint32_t state0 = *vm_tier3_state_cell(vm);");
    puts("    uint32_t flags0 = *vm_tier3_flags_cell(vm);");
    puts("    (void)ip;");
    puts("    (void)state0;");
    puts("    (void)flags0;");
    if (row->entry == 8) {
        puts("    uint32_t slot_source = (uint32_t)((int32_t)vm_tier3_s16(ip + 0) + 0x4c6);");
        printf("    vm_tier3_advance_ip(vm, %u);\n", advance);
        printf("    return vm_tier3_done(vm, %u, vm_tier3_slot16(slot_source), %u, ", row->entry, advance);
        print_c_string(function);
        puts(", \"retdec_dispatch_table_slot\");");
    } else if (row->entry == 24) {
        puts("    uint32_t state_after = (0x7d53d38du - state0 + (uint32_t)(int32_t)vm_tier3_s16(ip + 6)) & state0;");
        puts("    uint32_t slot_source = (state_after ^ (uint32_t)(int32_t)vm_tier3_s16(ip + 2)) + 0x565u;");
        puts("    *vm_tier3_state_cell(vm) = state_after;");
        printf("    vm_tier3_advance_ip(vm, %u);\n", advance);
        printf("    return vm_tier3_done(vm, %u, vm_tier3_slot16(slot_source), %u, ", row->entry, advance);
        print_c_string(function);
        puts(", \"retdec_dispatch_table_slot\");");
    } else {
        printf("    vm_tier3_advance_ip(vm, %u);\n", advance);
        printf("    return vm_tier3_done(vm, %u, VM_TIER3_UNKNOWN_SLOT, %u, ", row->entry, advance);
        print_c_string(function);
        printf(", ");
        print_c_string(aug ? aug->slot_status : "missing_tier3_augment");
        puts(");");
    }
    puts("}");
    puts("");
}

static void emit_c(const QueueRow *rows, size_t count) {
    puts("/*");
    puts(" * Static-only tier3 multi-function shared-range models.");
    puts(" *");
    puts(" * These functions preserve all tier3 shared RetDec rows in a");
    puts(" * syntax-checkable C model. Clean dispatch-table tails are");
    puts(" * executable; noisy/masked native returns remain explicit evidence.");
    puts(" */");
    puts("#include <stdint.h>");
    puts("#include <stddef.h>");
    puts("");
    puts("#define VM_TIER3_UNKNOWN_SLOT 0xffffffffu");
    puts("#define VM_TIER3_IP_PTR_OFF 10");
    puts("#define VM_TIER3_FLAGS_OFF 35");
    puts("#define VM_TIER3_DISPATCH_BASE_OFF 271");
    puts("#define VM_TIER3_STATE_OFF 368");
    puts("");
    puts("typedef struct VMTier3Frame {");
    puts("    uint8_t *frame;");
    puts("    uintptr_t g2_mask;");
    puts("    uintptr_t g3_mask;");
    puts("} VMTier3Frame;");
    puts("");
    puts("typedef struct VMTier3Result {");
    puts("    uint16_t entry;");
    puts("    uint32_t slot;");
    puts("    uint8_t ip_advance;");
    puts("    uintptr_t dispatch_table_addr;");
    puts("    const char *source_function;");
    puts("    const char *model_status;");
    puts("} VMTier3Result;");
    puts("");
    puts("typedef struct VMTier3ModelInfo {");
    puts("    uint16_t entry;");
    puts("    uint8_t ip_advance;");
    puts("    uint8_t function_count;");
    puts("    const char *target;");
    puts("    const char *functions;");
    puts("    const char *share_status;");
    puts("    const char *slot_status;");
    puts("    const char *slot_expr;");
    puts("    const char *effects;");
    puts("} VMTier3ModelInfo;");
    puts("");
    puts("static int16_t vm_tier3_s16(const uint8_t *p) { return *(const int16_t *)p; }");
    puts("static uint32_t *vm_tier3_state_cell(VMTier3Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER3_STATE_OFF); }");
    puts("static uint32_t *vm_tier3_flags_cell(VMTier3Frame *vm) { return (uint32_t *)(vm->frame + VM_TIER3_FLAGS_OFF); }");
    puts("static uint8_t **vm_tier3_ip_cell(VMTier3Frame *vm) { return (uint8_t **)(vm->frame + VM_TIER3_IP_PTR_OFF); }");
    puts("static uint8_t *vm_tier3_ip(VMTier3Frame *vm) { return *vm_tier3_ip_cell(vm); }");
    puts("static void vm_tier3_advance_ip(VMTier3Frame *vm, uint8_t amount) { *vm_tier3_ip_cell(vm) += amount; }");
    puts("static uintptr_t vm_tier3_dispatch_base(VMTier3Frame *vm) { return *(uintptr_t *)(vm->frame + VM_TIER3_DISPATCH_BASE_OFF); }");
    puts("static uint32_t vm_tier3_slot16(uint32_t value) { return value & 0xffffu; }");
    puts("static VMTier3Result vm_tier3_done(VMTier3Frame *vm, uint16_t entry, uint32_t slot, uint8_t advance, const char *source_function, const char *status) {");
    puts("    return (VMTier3Result){ entry, slot, advance, slot == VM_TIER3_UNKNOWN_SLOT ? 0u : vm_tier3_dispatch_base(vm) + slot, source_function, status };");
    puts("}");
    puts("");
    emit_model_info(rows, count);
    puts("");
    for (size_t i = 0; i < count; i++) {
        emit_entry_function(&rows[i]);
    }
    puts("static VMTier3Result vm_tier3_call(unsigned entry, VMTier3Frame *vm) {");
    puts("    switch (entry) {");
    for (size_t i = 0; i < count; i++) {
        printf("    case %u: return vm_tier3_entry_%03u(vm);\n", rows[i].entry, rows[i].entry);
    }
    puts("    default: return (VMTier3Result){ (uint16_t)entry, VM_TIER3_UNKNOWN_SLOT, 0, 0, \"-\", \"not_tier3_modelled\" };");
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
