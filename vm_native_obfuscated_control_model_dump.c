#define _GNU_SOURCE
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ISLANDS_PATH "dumps/vmtail-wide-1m-w16/vm_native_obfuscated_islands.tsv"
#define SECOND_STAGE_MODEL_PATH "dumps/vmtail-wide-1m-w16/vm_native_obfuscated_second_stage_model.tsv"
#define MAX_FIELDS 64
#define MAX_ROWS 32
#define TEXT 8192

typedef struct {
    uint64_t entry;
    char kind[128];
    uint64_t downstream;
    char downstream_status[256];
    char source_mix[512];
    char edge_kind_mix[256];
    char relation_mix[256];
    char window_mix[1024];
    char followup_classification[256];
    char followup_priority[256];
    char note[TEXT];
} IslandRow;

typedef struct {
    uint64_t entry;
    uint64_t site;
    char first_stage_entries[256];
    char static_formula[256];
    char stack_source_sites[256];
    char stack_source_status[256];
    char handler_entry_mix[TEXT];
    char target_entry_mix[TEXT];
    char target_mix[TEXT];
    unsigned dynamic_hits;
    unsigned rbx_observed_rows;
    char slot_proof_status[256];
    char rbx_status[256];
    char model_status[256];
} SecondStageModelRow;

typedef struct {
    IslandRow island;
    SecondStageModelRow model;
    bool has_model;
    uint64_t final_target;
    char final_model[256];
    char status[256];
} ControlRow;

static IslandRow g_islands[MAX_ROWS];
static size_t g_island_count;
static SecondStageModelRow g_models[MAX_ROWS];
static size_t g_model_count;
static ControlRow g_rows[MAX_ROWS];
static size_t g_row_count;

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

static IslandRow *island_by_entry(uint64_t entry) {
    for (size_t i = 0; i < g_island_count; i++) {
        if (g_islands[i].entry == entry) {
            return &g_islands[i];
        }
    }
    return NULL;
}

static SecondStageModelRow *model_by_entry(uint64_t entry) {
    for (size_t i = 0; i < g_model_count; i++) {
        if (g_models[i].entry == entry) {
            return &g_models[i];
        }
    }
    return NULL;
}

static void load_islands(void) {
    FILE *file = fopen(ISLANDS_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count;
    int c_entry, c_kind, c_downstream, c_downstream_status, c_source, c_edge, c_relation;
    int c_window, c_classification, c_priority, c_note;
    if (!file) {
        perror(ISLANDS_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", ISLANDS_PATH);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_entry = required_col(header, header_count, "entry", ISLANDS_PATH);
    c_kind = required_col(header, header_count, "kind", ISLANDS_PATH);
    c_downstream = required_col(header, header_count, "downstream", ISLANDS_PATH);
    c_downstream_status = required_col(header, header_count, "downstream_status", ISLANDS_PATH);
    c_source = required_col(header, header_count, "source_mix", ISLANDS_PATH);
    c_edge = required_col(header, header_count, "edge_kind_mix", ISLANDS_PATH);
    c_relation = required_col(header, header_count, "relation_mix", ISLANDS_PATH);
    c_window = required_col(header, header_count, "window_mix", ISLANDS_PATH);
    c_classification = required_col(header, header_count, "followup_classification", ISLANDS_PATH);
    c_priority = required_col(header, header_count, "followup_priority", ISLANDS_PATH);
    c_note = required_col(header, header_count, "note", ISLANDS_PATH);
    while (getline(&line, &cap, file) >= 0) {
        IslandRow *row;
        char *fields[MAX_FIELDS];
        int count;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        if (g_island_count >= MAX_ROWS) {
            fprintf(stderr, "%s: too many rows\n", ISLANDS_PATH);
            exit(1);
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = &g_islands[g_island_count++];
        memset(row, 0, sizeof(*row));
        row->entry = parse_number(field_at(fields, count, c_entry));
        row->downstream = parse_number(field_at(fields, count, c_downstream));
        copy_field(row->kind, sizeof(row->kind), field_at(fields, count, c_kind));
        copy_field(row->downstream_status, sizeof(row->downstream_status), field_at(fields, count, c_downstream_status));
        copy_field(row->source_mix, sizeof(row->source_mix), field_at(fields, count, c_source));
        copy_field(row->edge_kind_mix, sizeof(row->edge_kind_mix), field_at(fields, count, c_edge));
        copy_field(row->relation_mix, sizeof(row->relation_mix), field_at(fields, count, c_relation));
        copy_field(row->window_mix, sizeof(row->window_mix), field_at(fields, count, c_window));
        copy_field(row->followup_classification, sizeof(row->followup_classification), field_at(fields, count, c_classification));
        copy_field(row->followup_priority, sizeof(row->followup_priority), field_at(fields, count, c_priority));
        copy_field(row->note, sizeof(row->note), field_at(fields, count, c_note));
    }
    free(line);
    fclose(file);
}

static void load_second_stage_models(void) {
    FILE *file = fopen(SECOND_STAGE_MODEL_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count;
    int c_entry, c_site, c_first, c_formula, c_stack_sites, c_stack_status, c_handler_mix;
    int c_target_entry, c_target_mix, c_hits, c_rbx_rows, c_slot_status, c_rbx_status, c_model_status;
    if (!file) {
        perror(SECOND_STAGE_MODEL_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", SECOND_STAGE_MODEL_PATH);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_entry = required_col(header, header_count, "entry", SECOND_STAGE_MODEL_PATH);
    c_site = required_col(header, header_count, "indirect_jmp_site", SECOND_STAGE_MODEL_PATH);
    c_first = required_col(header, header_count, "first_stage_entries", SECOND_STAGE_MODEL_PATH);
    c_formula = required_col(header, header_count, "static_formula", SECOND_STAGE_MODEL_PATH);
    c_stack_sites = required_col(header, header_count, "stack_source_sites", SECOND_STAGE_MODEL_PATH);
    c_stack_status = required_col(header, header_count, "stack_source_status", SECOND_STAGE_MODEL_PATH);
    c_handler_mix = required_col(header, header_count, "handler_entry_mix", SECOND_STAGE_MODEL_PATH);
    c_target_entry = required_col(header, header_count, "target_entry_mix", SECOND_STAGE_MODEL_PATH);
    c_target_mix = required_col(header, header_count, "target_mix", SECOND_STAGE_MODEL_PATH);
    c_hits = required_col(header, header_count, "dynamic_hits", SECOND_STAGE_MODEL_PATH);
    c_rbx_rows = required_col(header, header_count, "rbx_observed_rows", SECOND_STAGE_MODEL_PATH);
    c_slot_status = required_col(header, header_count, "slot_proof_status", SECOND_STAGE_MODEL_PATH);
    c_rbx_status = required_col(header, header_count, "rbx_status", SECOND_STAGE_MODEL_PATH);
    c_model_status = required_col(header, header_count, "model_status", SECOND_STAGE_MODEL_PATH);
    while (getline(&line, &cap, file) >= 0) {
        SecondStageModelRow *row;
        char *fields[MAX_FIELDS];
        int count;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        if (g_model_count >= MAX_ROWS) {
            fprintf(stderr, "%s: too many rows\n", SECOND_STAGE_MODEL_PATH);
            exit(1);
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = &g_models[g_model_count++];
        memset(row, 0, sizeof(*row));
        row->entry = parse_number(field_at(fields, count, c_entry));
        row->site = parse_number(field_at(fields, count, c_site));
        row->dynamic_hits = (unsigned)parse_number(field_at(fields, count, c_hits));
        row->rbx_observed_rows = (unsigned)parse_number(field_at(fields, count, c_rbx_rows));
        copy_field(row->first_stage_entries, sizeof(row->first_stage_entries), field_at(fields, count, c_first));
        copy_field(row->static_formula, sizeof(row->static_formula), field_at(fields, count, c_formula));
        copy_field(row->stack_source_sites, sizeof(row->stack_source_sites), field_at(fields, count, c_stack_sites));
        copy_field(row->stack_source_status, sizeof(row->stack_source_status), field_at(fields, count, c_stack_status));
        copy_field(row->handler_entry_mix, sizeof(row->handler_entry_mix), field_at(fields, count, c_handler_mix));
        copy_field(row->target_entry_mix, sizeof(row->target_entry_mix), field_at(fields, count, c_target_entry));
        copy_field(row->target_mix, sizeof(row->target_mix), field_at(fields, count, c_target_mix));
        copy_field(row->slot_proof_status, sizeof(row->slot_proof_status), field_at(fields, count, c_slot_status));
        copy_field(row->rbx_status, sizeof(row->rbx_status), field_at(fields, count, c_rbx_status));
        copy_field(row->model_status, sizeof(row->model_status), field_at(fields, count, c_model_status));
    }
    free(line);
    fclose(file);
}

static void build_rows(void) {
    for (size_t i = 0; i < g_island_count; i++) {
        ControlRow *row;
        if (g_row_count >= MAX_ROWS) {
            fprintf(stderr, "too many control rows\n");
            exit(1);
        }
        row = &g_rows[g_row_count++];
        memset(row, 0, sizeof(*row));
        row->island = g_islands[i];
        copy_field(row->final_model, sizeof(row->final_model), "-");
        copy_field(row->status, sizeof(row->status), "unjoined_obfuscated_control");

        if (strcmp(row->island.downstream_status, "second_stage_obfuscated_thunk") == 0) {
            SecondStageModelRow *model = model_by_entry(row->island.downstream);
            if (model) {
                row->model = *model;
                row->has_model = true;
                copy_field(row->final_model, sizeof(row->final_model), "dispatch_table[stack_qword(rsp+0x88)]");
                if (strcmp(model->model_status, "static_stack_handler_entry_dispatch_model_for_observed_hits") == 0) {
                    copy_field(row->status, sizeof(row->status), "end_to_end_second_stage_dispatch_model_joined");
                } else {
                    copy_field(row->status, sizeof(row->status), "second_stage_model_incomplete");
                }
            }
        } else if (strcmp(row->island.downstream_status, "source278_retdec_covered") == 0) {
            row->final_target = row->island.downstream;
            copy_field(row->final_model, sizeof(row->final_model), "source278_retdec_native_target");
            copy_field(row->status, sizeof(row->status), "source278_retdec_target_joined");
        } else if (strcmp(row->island.kind, "entry_helper") == 0) {
            IslandRow *downstream = island_by_entry(row->island.downstream);
            if (downstream && strcmp(downstream->downstream_status, "source278_retdec_covered") == 0) {
                row->final_target = downstream->downstream;
                copy_field(row->final_model, sizeof(row->final_model), "entry_helper_to_source278_retdec_native_target");
                copy_field(row->status, sizeof(row->status), "entry_helper_to_source278_retdec_target_joined");
            }
        }
    }
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
    printf("entry\tkind\tsource_mix\twindow_mix\timmediate_downstream\timmediate_status\tfinal_model\tfinal_target\tsecond_stage_entry\tindirect_jmp_site\tstack_source_status\ttarget_entry_mix\ttarget_mix\tdynamic_hits\trbx_observed_rows\tcontrol_status\tnote\n");
    for (size_t i = 0; i < g_row_count; i++) {
        const ControlRow *row = &g_rows[i];
        printf("0x%llx\t%s\t%s\t%s\t0x%llx\t%s\t%s\t",
               (unsigned long long)row->island.entry,
               row->island.kind,
               row->island.source_mix,
               row->island.window_mix,
               (unsigned long long)row->island.downstream,
               row->island.downstream_status,
               row->final_model);
        if (row->final_target) {
            printf("0x%llx", (unsigned long long)row->final_target);
        } else {
            printf("-");
        }
        printf("\t");
        if (row->has_model) {
            printf("0x%llx\t0x%llx\t%s\t%s\t%s\t%u\t%u",
                   (unsigned long long)row->model.entry,
                   (unsigned long long)row->model.site,
                   row->model.stack_source_status,
                   row->model.target_entry_mix,
                   row->model.target_mix,
                   row->model.dynamic_hits,
                   row->model.rbx_observed_rows);
        } else {
            printf("-\t-\t-\t-\t-\t0\t0");
        }
        printf("\t%s\tjoined_retpatch_followup_obfuscated_island_second_stage_model\n", row->status);
    }
}

static void emit_markdown(void) {
    printf("# Native Obfuscated Control Model\n\n");
    printf("Joined hidden-control model from ret-patch follow-up obfuscated islands through source278 RetDec-covered targets or the static second-stage dispatch-table model.\n\n");
    printf("| entry | source | downstream | final model | targets | status |\n");
    printf("| --- | --- | --- | --- | --- | --- |\n");
    for (size_t i = 0; i < g_row_count; i++) {
        const ControlRow *row = &g_rows[i];
        const char *targets = row->has_model ? row->model.target_entry_mix : "-";
        char final_target[64];
        if (row->final_target) {
            snprintf(final_target, sizeof(final_target), "0x%llx", (unsigned long long)row->final_target);
            targets = final_target;
        }
        printf("| `0x%llx` | `%s` | `0x%llx` | `%s` | `%s` | `%s` |\n",
               (unsigned long long)row->island.entry,
               row->island.source_mix,
               (unsigned long long)row->island.downstream,
               row->final_model,
               targets,
               row->status);
    }
}

static void emit_c_function(const ControlRow *row) {
    printf("static uint64_t native_obfuscated_control_%llx(VMState *vm, const VMNativeHiddenStack *stack) {\n",
           (unsigned long long)row->island.entry);
    printf("    /* source_mix=");
    print_comment_text(row->island.source_mix);
    printf("; window_mix=");
    print_comment_text(row->island.window_mix);
    printf(" */\n");
    printf("    /* entry=0x%llx; kind=",
           (unsigned long long)row->island.entry);
    print_comment_text(row->island.kind);
    printf("; downstream=0x%llx; downstream_status=",
           (unsigned long long)row->island.downstream);
    print_comment_text(row->island.downstream_status);
    printf("; final_model=");
    print_comment_text(row->final_model);
    printf(" */\n");
    if (row->has_model) {
        printf("    uint64_t handler_entry = vm_native_hidden_stack_qword(stack, 0x88u);\n");
        printf("    uint64_t observed_vm_ip = vm_native_hidden_stack_qword(stack, 0x90u);\n");
        printf("    uint64_t dispatch_index = handler_entry << 3;\n");
        printf("    uint64_t target = vm_native_hidden_dispatch_target(vm, handler_entry);\n");
        printf("    /* second_stage_entry=0x%llx; indirect_jmp_site=0x%llx; stack_source=",
               (unsigned long long)row->model.entry,
               (unsigned long long)row->model.site);
        print_comment_text(row->model.stack_source_sites);
        printf("; model_status=");
        print_comment_text(row->model.model_status);
        printf(" */\n");
        printf("    /* handler_entry_mix=");
        print_comment_text(row->model.handler_entry_mix);
        printf("; target_entry_mix=");
        print_comment_text(row->model.target_entry_mix);
        printf(" */\n");
        printf("    vm_note_native_obfuscated_control(vm, stack, 0x%llxu, 0x%llxu, target,\n",
               (unsigned long long)row->island.entry,
               (unsigned long long)row->island.downstream);
        printf("                                      handler_entry, observed_vm_ip, dispatch_index, ");
        print_c_string(row->status);
        printf(");\n");
        printf("    return target;\n");
    } else {
        uint64_t target = row->final_target ? row->final_target : row->island.downstream;
        printf("    uint64_t target = 0x%llxu;\n", (unsigned long long)target);
        printf("    vm_note_native_obfuscated_control(vm, stack, 0x%llxu, 0x%llxu, target,\n",
               (unsigned long long)row->island.entry,
               (unsigned long long)row->island.downstream);
        printf("                                      0, 0, 0, ");
        print_c_string(row->status);
        printf(");\n");
        printf("    return target;\n");
    }
    printf("}\n\n");
}

static void emit_c(void) {
    printf("/*\n");
    printf(" * Native obfuscated hidden-control model.\n");
    printf(" *\n");
    printf(" * Generated by vm_native_obfuscated_control_model_dump.c from\n");
    printf(" * ret-patch follow-up island rows and the second-stage dispatch model.\n");
    printf(" */\n");
    printf("#include <stdint.h>\n\n");
    printf("typedef struct VMState {\n");
    printf("    uint64_t dispatch_table_base;\n");
    printf("    const uint64_t *dispatch_table;\n");
    printf("    uint32_t dispatch_table_entries;\n");
    printf("} VMState;\n\n");
    printf("typedef struct VMNativeHiddenStack {\n");
    printf("    const uint64_t *qwords;\n");
    printf("    uint32_t qword_count;\n");
    printf("} VMNativeHiddenStack;\n\n");
    printf("static uint64_t vm_native_hidden_stack_qword(const VMNativeHiddenStack *stack, uint32_t byte_off) {\n");
    printf("    uint32_t index = byte_off >> 3;\n");
    printf("    if (!stack || !stack->qwords || index >= stack->qword_count) {\n");
    printf("        return 0;\n");
    printf("    }\n");
    printf("    return stack->qwords[index];\n");
    printf("}\n\n");
    printf("static uint64_t vm_native_hidden_dispatch_target(const VMState *vm, uint64_t handler_entry) {\n");
    printf("    uint64_t slot = (vm ? vm->dispatch_table_base : 0) + (handler_entry << 3);\n");
    printf("    if (vm && vm->dispatch_table && handler_entry < vm->dispatch_table_entries) {\n");
    printf("        return vm->dispatch_table[handler_entry];\n");
    printf("    }\n");
    printf("    return slot;\n");
    printf("}\n\n");
    printf("static void vm_note_native_obfuscated_control(VMState *vm, const VMNativeHiddenStack *stack,\n");
    printf("                                             uint32_t island_entry, uint32_t downstream,\n");
    printf("                                             uint64_t target, uint64_t handler_entry,\n");
    printf("                                             uint64_t observed_vm_ip, uint64_t dispatch_index,\n");
    printf("                                             const char *status) {\n");
    printf("    (void)vm;\n");
    printf("    (void)stack;\n");
    printf("    (void)island_entry;\n");
    printf("    (void)downstream;\n");
    printf("    (void)target;\n");
    printf("    (void)handler_entry;\n");
    printf("    (void)observed_vm_ip;\n");
    printf("    (void)dispatch_index;\n");
    printf("    (void)status;\n");
    printf("}\n\n");
    for (size_t i = 0; i < g_row_count; i++) {
        emit_c_function(&g_rows[i]);
    }
    printf("uint64_t vm_native_obfuscated_control_model(VMState *vm, uint32_t island_entry,\n");
    printf("                                            const VMNativeHiddenStack *stack) {\n");
    printf("    switch (island_entry) {\n");
    for (size_t i = 0; i < g_row_count; i++) {
        printf("    case 0x%llxu:\n", (unsigned long long)g_rows[i].island.entry);
        printf("        return native_obfuscated_control_%llx(vm, stack);\n",
               (unsigned long long)g_rows[i].island.entry);
    }
    printf("    default:\n");
    printf("        vm_note_native_obfuscated_control(vm, stack, island_entry, 0, 0, 0, 0, 0,\n");
    printf("                                         \"unknown_native_obfuscated_control_entry\");\n");
    printf("        return 0;\n");
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
    load_islands();
    load_second_stage_models();
    build_rows();
    if (mode == MODE_TSV) {
        emit_tsv();
    } else if (mode == MODE_MARKDOWN) {
        emit_markdown();
    } else {
        emit_c();
    }
    return 0;
}
