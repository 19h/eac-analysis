#define _GNU_SOURCE
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SECOND_STAGE_PATH "dumps/vmtail-wide-1m-w16/vm_native_obfuscated_second_stage.tsv"
#define DYNAMIC_PATH "dumps/vmtail-wide-1m-w16/vm_native_obfuscated_second_stage_dynamic.tsv"
#define SLOT_PROOF_PATH "dumps/vmtail-wide-1m-w16/vm_native_obfuscated_second_stage_slot_proof.tsv"
#define RBX_PROVENANCE_PATH "dumps/vmtail-wide-1m-w16/vm_native_obfuscated_second_stage_rbx_provenance.tsv"
#define MAX_FIELDS 64
#define TEXT 8192

typedef struct {
    uint64_t entry;
    uint64_t site;
    char chain[128];
    char first_stage_entries[256];
    char source_mix[512];
    char first_stage_windows[1024];
    unsigned dynamic_hits;
    unsigned unique_targets;
    char target_mix[TEXT];
    char target_entry_mix[TEXT];
    char slot_base_check_mix[TEXT];
    char slot_target_check_mix[TEXT];
    char static_formula[128];
    char slot_proof_status[256];
    char rbx_handler_entry_mix[TEXT];
    unsigned rbx_observed_rows;
    char rbx_status[256];
} ModelRow;

static ModelRow g_rows[] = {
    {.entry = 0xc9849, .site = 0xcad88},
    {.entry = 0xcaf2a, .site = 0xcc3f5},
    {.entry = 0xc4258, .site = 0xc559d},
    {.entry = 0xc57b8, .site = 0xc6bce},
    {.entry = 0xc6d58, .site = 0xc80b9},
};

static void chomp(char *line) {
    size_t len = strlen(line);
    while (len && (line[len - 1] == '\n' || line[len - 1] == '\r')) {
        line[--len] = '\0';
    }
}

static int split_tsv(char *line, char **fields, int max_fields) {
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
    return count;
}

static int find_col(char **header, int header_count, const char *name) {
    for (int i = 0; i < header_count; i++) {
        if (strcmp(header[i], name) == 0) {
            return i;
        }
    }
    return -1;
}

static int required_col(char **header, int header_count, const char *name, const char *path) {
    int col = find_col(header, header_count, name);
    if (col < 0) {
        fprintf(stderr, "%s: missing column %s\n", path, name);
        exit(1);
    }
    return col;
}

static const char *field_at(char **fields, int field_count, int index) {
    if (index < 0 || index >= field_count) {
        return "";
    }
    return fields[index];
}

static uint64_t parse_number(const char *text) {
    if (!text || !text[0] || strcmp(text, "-") == 0) {
        return 0;
    }
    return strtoull(text, NULL, 0);
}

static void copy_field(char *dest, size_t dest_size, const char *src) {
    snprintf(dest, dest_size, "%s", src && src[0] ? src : "-");
}

static ModelRow *row_by_entry(uint64_t entry) {
    for (size_t i = 0; i < sizeof(g_rows) / sizeof(g_rows[0]); i++) {
        if (g_rows[i].entry == entry) {
            return &g_rows[i];
        }
    }
    return NULL;
}

static ModelRow *row_by_site(uint64_t site) {
    for (size_t i = 0; i < sizeof(g_rows) / sizeof(g_rows[0]); i++) {
        if (g_rows[i].site == site) {
            return &g_rows[i];
        }
    }
    return NULL;
}

static void init_rows(void) {
    for (size_t i = 0; i < sizeof(g_rows) / sizeof(g_rows[0]); i++) {
        copy_field(g_rows[i].chain, sizeof(g_rows[i].chain), "-");
        copy_field(g_rows[i].first_stage_entries, sizeof(g_rows[i].first_stage_entries), "-");
        copy_field(g_rows[i].source_mix, sizeof(g_rows[i].source_mix), "-");
        copy_field(g_rows[i].first_stage_windows, sizeof(g_rows[i].first_stage_windows), "-");
        copy_field(g_rows[i].target_mix, sizeof(g_rows[i].target_mix), "-");
        copy_field(g_rows[i].target_entry_mix, sizeof(g_rows[i].target_entry_mix), "-");
        copy_field(g_rows[i].slot_base_check_mix, sizeof(g_rows[i].slot_base_check_mix), "-");
        copy_field(g_rows[i].slot_target_check_mix, sizeof(g_rows[i].slot_target_check_mix), "-");
        copy_field(g_rows[i].static_formula, sizeof(g_rows[i].static_formula), "-");
        copy_field(g_rows[i].slot_proof_status, sizeof(g_rows[i].slot_proof_status), "-");
        copy_field(g_rows[i].rbx_handler_entry_mix, sizeof(g_rows[i].rbx_handler_entry_mix), "-");
        copy_field(g_rows[i].rbx_status, sizeof(g_rows[i].rbx_status), "-");
    }
}

static void load_second_stage(void) {
    FILE *file = fopen(SECOND_STAGE_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count, c_entry, c_site, c_chain, c_first, c_source, c_windows;
    if (!file) {
        perror(SECOND_STAGE_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", SECOND_STAGE_PATH);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_entry = required_col(header, header_count, "entry", SECOND_STAGE_PATH);
    c_site = required_col(header, header_count, "indirect_jmp_site", SECOND_STAGE_PATH);
    c_chain = required_col(header, header_count, "chain", SECOND_STAGE_PATH);
    c_first = required_col(header, header_count, "first_stage_entries", SECOND_STAGE_PATH);
    c_source = required_col(header, header_count, "source_mix", SECOND_STAGE_PATH);
    c_windows = required_col(header, header_count, "first_stage_windows", SECOND_STAGE_PATH);
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count;
        ModelRow *row;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = row_by_entry(parse_number(field_at(fields, count, c_entry)));
        if (!row) {
            continue;
        }
        row->site = parse_number(field_at(fields, count, c_site));
        copy_field(row->chain, sizeof(row->chain), field_at(fields, count, c_chain));
        copy_field(row->first_stage_entries, sizeof(row->first_stage_entries), field_at(fields, count, c_first));
        copy_field(row->source_mix, sizeof(row->source_mix), field_at(fields, count, c_source));
        copy_field(row->first_stage_windows, sizeof(row->first_stage_windows), field_at(fields, count, c_windows));
    }
    free(line);
    fclose(file);
}

static void load_dynamic(void) {
    FILE *file = fopen(DYNAMIC_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count, c_site, c_hits, c_unique, c_target, c_target_entry, c_base, c_slot;
    if (!file) {
        perror(DYNAMIC_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", DYNAMIC_PATH);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_site = required_col(header, header_count, "indirect_jmp_site", DYNAMIC_PATH);
    c_hits = required_col(header, header_count, "hit_count", DYNAMIC_PATH);
    c_unique = required_col(header, header_count, "unique_targets", DYNAMIC_PATH);
    c_target = required_col(header, header_count, "target_mix", DYNAMIC_PATH);
    c_target_entry = required_col(header, header_count, "target_entry_mix", DYNAMIC_PATH);
    c_base = required_col(header, header_count, "slot_base_check_mix", DYNAMIC_PATH);
    c_slot = required_col(header, header_count, "slot_target_check_mix", DYNAMIC_PATH);
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count;
        ModelRow *row;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = row_by_site(parse_number(field_at(fields, count, c_site)));
        if (!row) {
            continue;
        }
        row->dynamic_hits = (unsigned)parse_number(field_at(fields, count, c_hits));
        row->unique_targets = (unsigned)parse_number(field_at(fields, count, c_unique));
        copy_field(row->target_mix, sizeof(row->target_mix), field_at(fields, count, c_target));
        copy_field(row->target_entry_mix, sizeof(row->target_entry_mix), field_at(fields, count, c_target_entry));
        copy_field(row->slot_base_check_mix, sizeof(row->slot_base_check_mix), field_at(fields, count, c_base));
        copy_field(row->slot_target_check_mix, sizeof(row->slot_target_check_mix), field_at(fields, count, c_slot));
    }
    free(line);
    fclose(file);
}

static void load_slot_proof(void) {
    FILE *file = fopen(SLOT_PROOF_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count, c_site, c_formula, c_status;
    if (!file) {
        perror(SLOT_PROOF_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", SLOT_PROOF_PATH);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_site = required_col(header, header_count, "indirect_jmp_site", SLOT_PROOF_PATH);
    c_formula = required_col(header, header_count, "static_formula", SLOT_PROOF_PATH);
    c_status = required_col(header, header_count, "proof_status", SLOT_PROOF_PATH);
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count;
        ModelRow *row;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = row_by_site(parse_number(field_at(fields, count, c_site)));
        if (!row) {
            continue;
        }
        copy_field(row->static_formula, sizeof(row->static_formula), field_at(fields, count, c_formula));
        copy_field(row->slot_proof_status, sizeof(row->slot_proof_status), field_at(fields, count, c_status));
    }
    free(line);
    fclose(file);
}

static void load_rbx_provenance(void) {
    FILE *file = fopen(RBX_PROVENANCE_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count, c_site, c_rows, c_mix, c_status;
    if (!file) {
        perror(RBX_PROVENANCE_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", RBX_PROVENANCE_PATH);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_site = required_col(header, header_count, "indirect_jmp_site", RBX_PROVENANCE_PATH);
    c_rows = required_col(header, header_count, "observed_rows", RBX_PROVENANCE_PATH);
    c_mix = required_col(header, header_count, "handler_entry_mix", RBX_PROVENANCE_PATH);
    c_status = required_col(header, header_count, "status", RBX_PROVENANCE_PATH);
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count;
        ModelRow *row;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = row_by_site(parse_number(field_at(fields, count, c_site)));
        if (!row) {
            continue;
        }
        row->rbx_observed_rows = (unsigned)parse_number(field_at(fields, count, c_rows));
        copy_field(row->rbx_handler_entry_mix, sizeof(row->rbx_handler_entry_mix), field_at(fields, count, c_mix));
        copy_field(row->rbx_status, sizeof(row->rbx_status), field_at(fields, count, c_status));
    }
    free(line);
    fclose(file);
}

static const char *model_status(const ModelRow *row) {
    if (strcmp(row->slot_proof_status, "static_dynamic_slot_formula_proven_for_observed_hits") == 0 &&
        strcmp(row->rbx_status, "rbx_stack_entry_to_dispatch_index_proven_for_observed_hits") == 0 &&
        row->dynamic_hits > 0 && row->rbx_observed_rows > 0) {
        return "observed_stack_handler_entry_dispatch_model";
    }
    return "incomplete_second_stage_model";
}

static void print_comment_text(const char *text) {
    for (const char *p = text ? text : ""; *p; p++) {
        if (p[0] == '*' && p[1] == '/') {
            putchar('*');
            putchar(' ');
        } else if ((unsigned char)*p < 0x20) {
            putchar(' ');
        } else {
            putchar(*p);
        }
    }
}

static void print_c_string(const char *text) {
    putchar('"');
    for (const char *p = text ? text : ""; *p; p++) {
        unsigned char ch = (unsigned char)*p;
        if (ch == '\\' || ch == '"') {
            putchar('\\');
            putchar(ch);
        } else if (ch < 0x20 || ch >= 0x7f) {
            printf("\\x%02x", ch);
        } else {
            putchar(ch);
        }
    }
    putchar('"');
}

static void emit_tsv(void) {
    printf("entry\tindirect_jmp_site\tfirst_stage_entries\tchain\tstack_handler_entry_offset\tstack_vm_ip_offset\tstatic_formula\thandler_entry_mix\ttarget_entry_mix\ttarget_mix\tdynamic_hits\trbx_observed_rows\tslot_base_check_mix\tslot_target_check_mix\tslot_proof_status\trbx_status\tmodel_status\tnote\n");
    for (size_t i = 0; i < sizeof(g_rows) / sizeof(g_rows[0]); i++) {
        const ModelRow *row = &g_rows[i];
        printf("0x%llx\t0x%llx\t%s\t%s\t0x88\t0x90\t%s\t%s\t%s\t%s\t%u\t%u\t%s\t%s\t%s\t%s\t%s\t%s\n",
               (unsigned long long)row->entry,
               (unsigned long long)row->site,
               row->first_stage_entries,
               row->chain,
               row->static_formula,
               row->rbx_handler_entry_mix,
               row->target_entry_mix,
               row->target_mix,
               row->dynamic_hits,
               row->rbx_observed_rows,
               row->slot_base_check_mix,
               row->slot_target_check_mix,
               row->slot_proof_status,
               row->rbx_status,
               model_status(row),
               "C_model: handler_entry=stack_qword(rsp+0x88); vm_ip=stack_qword(rsp+0x90); target=dispatch_table[handler_entry]");
    }
}

static void emit_markdown(void) {
    printf("# Native Obfuscated Second-Stage C Model\n\n");
    printf("Combined C-shaped model for the five second-stage computed thunks, joining static structure, dynamic targets, slot proof, and RBX provenance.\n\n");
    printf("| entry | site | model | handler entries | targets | status |\n");
    printf("| --- | --- | --- | --- | --- | --- |\n");
    for (size_t i = 0; i < sizeof(g_rows) / sizeof(g_rows[0]); i++) {
        const ModelRow *row = &g_rows[i];
        printf("| `0x%llx` | `0x%llx` | `target = dispatch_table[stack_qword(rsp+0x88)]` | `%s` | `%s` | `%s` |\n",
               (unsigned long long)row->entry,
               (unsigned long long)row->site,
               row->rbx_handler_entry_mix,
               row->target_entry_mix,
               model_status(row));
    }
}

static void emit_c_function(const ModelRow *row) {
    printf("static void second_stage_model_%llx(VMState *vm, const VMSecondStageNativeStack *stack) {\n",
           (unsigned long long)row->site);
    printf("    uint64_t handler_entry = vm_second_stage_stack_qword(stack, 0x88u);\n");
    printf("    uint64_t observed_vm_ip = vm_second_stage_stack_qword(stack, 0x90u);\n");
    printf("    uint64_t dispatch_index = handler_entry << 3;\n");
    printf("    uint64_t target = vm_second_stage_dispatch_target(vm, handler_entry);\n");
    printf("    /* entry=0x%llx; site=0x%llx; first_stage=",
           (unsigned long long)row->entry,
           (unsigned long long)row->site);
    print_comment_text(row->first_stage_entries);
    printf("; chain=");
    print_comment_text(row->chain);
    printf(" */\n");
    printf("    /* formula=");
    print_comment_text(row->static_formula);
    printf("; handler_entry_mix=");
    print_comment_text(row->rbx_handler_entry_mix);
    printf("; target_entry_mix=");
    print_comment_text(row->target_entry_mix);
    printf(" */\n");
    printf("    /* slot_base_check=");
    print_comment_text(row->slot_base_check_mix);
    printf("; slot_target_check=");
    print_comment_text(row->slot_target_check_mix);
    printf("; model_status=");
    print_comment_text(model_status(row));
    printf(" */\n");
    printf("    vm_note_second_stage_model(vm, stack, 0x%llxu, 0x%llxu, handler_entry,\n",
           (unsigned long long)row->entry,
           (unsigned long long)row->site);
    printf("                               observed_vm_ip, dispatch_index, target, ");
    print_c_string(row->target_entry_mix);
    printf(", ");
    print_c_string(model_status(row));
    printf(");\n");
    printf("}\n\n");
}

static void emit_c(void) {
    printf("/*\n");
    printf(" * Native obfuscated second-stage C model.\n");
    printf(" *\n");
    printf(" * Generated by vm_native_obfuscated_second_stage_model_dump.c from\n");
    printf(" * static thunk structure, dynamic dispatch evidence, slot formula proof,\n");
    printf(" * and RBX provenance probe artifacts.\n");
    printf(" */\n");
    printf("#include <stdint.h>\n\n");
    printf("typedef struct VMState {\n");
    printf("    uint64_t dispatch_table_base;\n");
    printf("    const uint64_t *dispatch_table;\n");
    printf("    uint32_t dispatch_table_entries;\n");
    printf("} VMState;\n\n");
    printf("typedef struct VMSecondStageNativeStack {\n");
    printf("    const uint64_t *qwords;\n");
    printf("    uint32_t qword_count;\n");
    printf("} VMSecondStageNativeStack;\n\n");
    printf("static uint64_t vm_second_stage_stack_qword(const VMSecondStageNativeStack *stack, uint32_t byte_off) {\n");
    printf("    uint32_t index = byte_off >> 3;\n");
    printf("    if (!stack || !stack->qwords || index >= stack->qword_count) {\n");
    printf("        return 0;\n");
    printf("    }\n");
    printf("    return stack->qwords[index];\n");
    printf("}\n\n");
    printf("static uint64_t vm_second_stage_dispatch_target(const VMState *vm, uint64_t handler_entry) {\n");
    printf("    uint64_t slot = (vm ? vm->dispatch_table_base : 0) + (handler_entry << 3);\n");
    printf("    if (vm && vm->dispatch_table && handler_entry < vm->dispatch_table_entries) {\n");
    printf("        return vm->dispatch_table[handler_entry];\n");
    printf("    }\n");
    printf("    return slot;\n");
    printf("}\n\n");
    printf("static void vm_note_second_stage_model(VMState *vm, const VMSecondStageNativeStack *stack,\n");
    printf("                                       uint32_t entry, uint32_t site,\n");
    printf("                                       uint64_t handler_entry, uint64_t observed_vm_ip,\n");
    printf("                                       uint64_t dispatch_index, uint64_t target,\n");
    printf("                                       const char *target_entry_mix,\n");
    printf("                                       const char *status) {\n");
    printf("    (void)vm;\n");
    printf("    (void)stack;\n");
    printf("    (void)entry;\n");
    printf("    (void)site;\n");
    printf("    (void)handler_entry;\n");
    printf("    (void)observed_vm_ip;\n");
    printf("    (void)dispatch_index;\n");
    printf("    (void)target;\n");
    printf("    (void)target_entry_mix;\n");
    printf("    (void)status;\n");
    printf("}\n\n");
    for (size_t i = 0; i < sizeof(g_rows) / sizeof(g_rows[0]); i++) {
        emit_c_function(&g_rows[i]);
    }
    printf("void vm_native_obfuscated_second_stage_model(VMState *vm, uint32_t indirect_jmp_site,\n");
    printf("                                             const VMSecondStageNativeStack *stack) {\n");
    printf("    switch (indirect_jmp_site) {\n");
    for (size_t i = 0; i < sizeof(g_rows) / sizeof(g_rows[0]); i++) {
        printf("    case 0x%llxu:\n", (unsigned long long)g_rows[i].site);
        printf("        second_stage_model_%llx(vm, stack);\n", (unsigned long long)g_rows[i].site);
        printf("        break;\n");
    }
    printf("    default:\n");
    printf("        vm_note_second_stage_model(vm, stack, 0, indirect_jmp_site, 0, 0, 0, 0,\n");
    printf("                                   \"-\", \"unknown_second_stage_model_site\");\n");
    printf("        break;\n");
    printf("    }\n");
    printf("}\n");
}

int main(int argc, char **argv) {
    enum { MODE_C, MODE_TSV, MODE_MARKDOWN } mode = MODE_C;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--c") == 0) {
            mode = MODE_C;
        } else if (strcmp(argv[i], "--tsv") == 0) {
            mode = MODE_TSV;
        } else if (strcmp(argv[i], "--markdown") == 0) {
            mode = MODE_MARKDOWN;
        } else {
            fprintf(stderr, "usage: %s [--c|--tsv|--markdown]\n", argv[0]);
            return 2;
        }
    }
    init_rows();
    load_second_stage();
    load_dynamic();
    load_slot_proof();
    load_rbx_provenance();
    if (mode == MODE_TSV) {
        emit_tsv();
    } else if (mode == MODE_MARKDOWN) {
        emit_markdown();
    } else {
        emit_c();
    }
    return 0;
}
