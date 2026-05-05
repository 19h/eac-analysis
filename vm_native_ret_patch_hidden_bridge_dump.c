#define _GNU_SOURCE
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ATLAS_PATH "dumps/vmtail-wide-1m-w16/vm_synthetic_gap_ret_patch_native_target_atlas.tsv"
#define CONTROL_MODEL_PATH "dumps/vmtail-wide-1m-w16/vm_native_obfuscated_control_model.tsv"
#define MAX_FIELDS 64
#define MAX_ATLAS_ROWS 64
#define MAX_CONTROL_ROWS 32
#define MAX_BRIDGE_ROWS 64
#define TEXT 8192

typedef struct {
    unsigned source_entry;
    uint64_t vm_ip;
    char ret_slot[16];
    uint32_t patched_ret;
    char ret_patch_kind[128];
    unsigned rows;
    char seed_mix[512];
    char run_mix[512];
    char relation_mix[512];
    uint64_t disasm_start;
    uint64_t disasm_stop;
    char call_targets[TEXT];
    char jump_targets[TEXT];
} AtlasRow;

typedef struct {
    uint64_t entry;
    char kind[128];
    char source_mix[512];
    char window_mix[1024];
    uint64_t immediate_downstream;
    char immediate_status[256];
    char final_model[256];
    uint64_t final_target;
    uint64_t second_stage_entry;
    uint64_t indirect_jmp_site;
    char stack_source_status[256];
    char target_entry_mix[TEXT];
    char target_mix[TEXT];
    unsigned dynamic_hits;
    unsigned rbx_observed_rows;
    char control_status[256];
} ControlRow;

typedef struct {
    AtlasRow atlas;
    ControlRow control;
    char edge_kind[16];
    unsigned edge_hits;
    uint64_t hidden_entry;
} BridgeRow;

static AtlasRow g_atlas[MAX_ATLAS_ROWS];
static size_t g_atlas_count;
static ControlRow g_controls[MAX_CONTROL_ROWS];
static size_t g_control_count;
static BridgeRow g_bridges[MAX_BRIDGE_ROWS];
static size_t g_bridge_count;

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

static const ControlRow *control_by_entry(uint64_t entry) {
    for (size_t i = 0; i < g_control_count; i++) {
        if (g_controls[i].entry == entry) {
            return &g_controls[i];
        }
    }
    return NULL;
}

static bool bridge_exists(const AtlasRow *atlas, const char *edge_kind, uint64_t hidden_entry) {
    for (size_t i = 0; i < g_bridge_count; i++) {
        const BridgeRow *row = &g_bridges[i];
        if (row->atlas.vm_ip == atlas->vm_ip &&
            row->atlas.patched_ret == atlas->patched_ret &&
            row->hidden_entry == hidden_entry &&
            strcmp(row->edge_kind, edge_kind) == 0) {
            return true;
        }
    }
    return false;
}

static void add_bridge(const AtlasRow *atlas, const ControlRow *control,
                       const char *edge_kind, unsigned edge_hits) {
    BridgeRow *row;
    if (bridge_exists(atlas, edge_kind, control->entry)) {
        return;
    }
    if (g_bridge_count >= MAX_BRIDGE_ROWS) {
        fprintf(stderr, "too many hidden bridge rows\n");
        exit(1);
    }
    row = &g_bridges[g_bridge_count++];
    memset(row, 0, sizeof(*row));
    row->atlas = *atlas;
    row->control = *control;
    row->edge_hits = edge_hits;
    row->hidden_entry = control->entry;
    copy_field(row->edge_kind, sizeof(row->edge_kind), edge_kind);
}

static void load_atlas(void) {
    FILE *file = fopen(ATLAS_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count;
    int c_source, c_vm_ip, c_ret_slot, c_patch, c_kind, c_rows, c_seed, c_run, c_relation;
    int c_disasm_start, c_disasm_stop, c_calls, c_jumps;
    if (!file) {
        perror(ATLAS_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", ATLAS_PATH);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_source = required_col(header, header_count, "source_entry", ATLAS_PATH);
    c_vm_ip = required_col(header, header_count, "synthetic_start_vm_ip", ATLAS_PATH);
    c_ret_slot = required_col(header, header_count, "ret_slot", ATLAS_PATH);
    c_patch = required_col(header, header_count, "patched_ret_eac_off", ATLAS_PATH);
    c_kind = required_col(header, header_count, "ret_patch_kind", ATLAS_PATH);
    c_rows = required_col(header, header_count, "rows", ATLAS_PATH);
    c_seed = required_col(header, header_count, "seed_mix", ATLAS_PATH);
    c_run = required_col(header, header_count, "run_mix", ATLAS_PATH);
    c_relation = required_col(header, header_count, "relation_mix", ATLAS_PATH);
    c_disasm_start = required_col(header, header_count, "disasm_start", ATLAS_PATH);
    c_disasm_stop = required_col(header, header_count, "disasm_stop", ATLAS_PATH);
    c_calls = required_col(header, header_count, "call_targets", ATLAS_PATH);
    c_jumps = required_col(header, header_count, "jump_targets", ATLAS_PATH);
    while (getline(&line, &cap, file) >= 0) {
        AtlasRow *row;
        char *fields[MAX_FIELDS];
        int count;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        if (g_atlas_count >= MAX_ATLAS_ROWS) {
            fprintf(stderr, "%s: too many rows\n", ATLAS_PATH);
            exit(1);
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = &g_atlas[g_atlas_count++];
        memset(row, 0, sizeof(*row));
        row->source_entry = (unsigned)parse_number(field_at(fields, count, c_source));
        row->vm_ip = parse_number(field_at(fields, count, c_vm_ip));
        row->patched_ret = (uint32_t)parse_number(field_at(fields, count, c_patch));
        row->rows = (unsigned)parse_number(field_at(fields, count, c_rows));
        row->disasm_start = parse_number(field_at(fields, count, c_disasm_start));
        row->disasm_stop = parse_number(field_at(fields, count, c_disasm_stop));
        copy_field(row->ret_slot, sizeof(row->ret_slot), field_at(fields, count, c_ret_slot));
        copy_field(row->ret_patch_kind, sizeof(row->ret_patch_kind), field_at(fields, count, c_kind));
        copy_field(row->seed_mix, sizeof(row->seed_mix), field_at(fields, count, c_seed));
        copy_field(row->run_mix, sizeof(row->run_mix), field_at(fields, count, c_run));
        copy_field(row->relation_mix, sizeof(row->relation_mix), field_at(fields, count, c_relation));
        copy_field(row->call_targets, sizeof(row->call_targets), field_at(fields, count, c_calls));
        copy_field(row->jump_targets, sizeof(row->jump_targets), field_at(fields, count, c_jumps));
    }
    free(line);
    fclose(file);
}

static void load_controls(void) {
    FILE *file = fopen(CONTROL_MODEL_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count;
    int c_entry, c_kind, c_source, c_window, c_downstream, c_status, c_final_model, c_final_target;
    int c_second, c_site, c_stack_status, c_target_entry, c_target_mix, c_hits, c_rbx, c_control_status;
    if (!file) {
        perror(CONTROL_MODEL_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", CONTROL_MODEL_PATH);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_entry = required_col(header, header_count, "entry", CONTROL_MODEL_PATH);
    c_kind = required_col(header, header_count, "kind", CONTROL_MODEL_PATH);
    c_source = required_col(header, header_count, "source_mix", CONTROL_MODEL_PATH);
    c_window = required_col(header, header_count, "window_mix", CONTROL_MODEL_PATH);
    c_downstream = required_col(header, header_count, "immediate_downstream", CONTROL_MODEL_PATH);
    c_status = required_col(header, header_count, "immediate_status", CONTROL_MODEL_PATH);
    c_final_model = required_col(header, header_count, "final_model", CONTROL_MODEL_PATH);
    c_final_target = required_col(header, header_count, "final_target", CONTROL_MODEL_PATH);
    c_second = required_col(header, header_count, "second_stage_entry", CONTROL_MODEL_PATH);
    c_site = required_col(header, header_count, "indirect_jmp_site", CONTROL_MODEL_PATH);
    c_stack_status = required_col(header, header_count, "stack_source_status", CONTROL_MODEL_PATH);
    c_target_entry = required_col(header, header_count, "target_entry_mix", CONTROL_MODEL_PATH);
    c_target_mix = required_col(header, header_count, "target_mix", CONTROL_MODEL_PATH);
    c_hits = required_col(header, header_count, "dynamic_hits", CONTROL_MODEL_PATH);
    c_rbx = required_col(header, header_count, "rbx_observed_rows", CONTROL_MODEL_PATH);
    c_control_status = required_col(header, header_count, "control_status", CONTROL_MODEL_PATH);
    while (getline(&line, &cap, file) >= 0) {
        ControlRow *row;
        char *fields[MAX_FIELDS];
        int count;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        if (g_control_count >= MAX_CONTROL_ROWS) {
            fprintf(stderr, "%s: too many rows\n", CONTROL_MODEL_PATH);
            exit(1);
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = &g_controls[g_control_count++];
        memset(row, 0, sizeof(*row));
        row->entry = parse_number(field_at(fields, count, c_entry));
        row->immediate_downstream = parse_number(field_at(fields, count, c_downstream));
        row->final_target = parse_number(field_at(fields, count, c_final_target));
        row->second_stage_entry = parse_number(field_at(fields, count, c_second));
        row->indirect_jmp_site = parse_number(field_at(fields, count, c_site));
        row->dynamic_hits = (unsigned)parse_number(field_at(fields, count, c_hits));
        row->rbx_observed_rows = (unsigned)parse_number(field_at(fields, count, c_rbx));
        copy_field(row->kind, sizeof(row->kind), field_at(fields, count, c_kind));
        copy_field(row->source_mix, sizeof(row->source_mix), field_at(fields, count, c_source));
        copy_field(row->window_mix, sizeof(row->window_mix), field_at(fields, count, c_window));
        copy_field(row->immediate_status, sizeof(row->immediate_status), field_at(fields, count, c_status));
        copy_field(row->final_model, sizeof(row->final_model), field_at(fields, count, c_final_model));
        copy_field(row->stack_source_status, sizeof(row->stack_source_status), field_at(fields, count, c_stack_status));
        copy_field(row->target_entry_mix, sizeof(row->target_entry_mix), field_at(fields, count, c_target_entry));
        copy_field(row->target_mix, sizeof(row->target_mix), field_at(fields, count, c_target_mix));
        copy_field(row->control_status, sizeof(row->control_status), field_at(fields, count, c_control_status));
    }
    free(line);
    fclose(file);
}

static void scan_target_mix(const AtlasRow *atlas, const char *edge_kind, const char *mix) {
    char buffer[TEXT];
    char *save = NULL;
    char *item;
    if (!mix || !mix[0] || strcmp(mix, "-") == 0) {
        return;
    }
    snprintf(buffer, sizeof(buffer), "%s", mix);
    for (item = strtok_r(buffer, ",", &save); item; item = strtok_r(NULL, ",", &save)) {
        char *colon = strchr(item, ':');
        uint64_t target;
        unsigned hits = 1;
        const ControlRow *control;
        if (colon) {
            *colon++ = '\0';
            hits = (unsigned)parse_number(colon);
        }
        target = parse_number(item);
        if (!target) {
            continue;
        }
        control = control_by_entry(target);
        if (control) {
            add_bridge(atlas, control, edge_kind, hits ? hits : 1);
        }
    }
}

static void build_bridges(void) {
    for (size_t i = 0; i < g_atlas_count; i++) {
        scan_target_mix(&g_atlas[i], "call", g_atlas[i].call_targets);
        scan_target_mix(&g_atlas[i], "jump", g_atlas[i].jump_targets);
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

static void print_target_or_dash(uint64_t target) {
    if (target) {
        printf("0x%llx", (unsigned long long)target);
    } else {
        printf("-");
    }
}

static void emit_tsv(void) {
    printf("source_entry\tsynthetic_start_vm_ip\tret_slot\tpatched_ret_eac_off\tedge_kind\thidden_entry\tedge_hits\tret_patch_kind\tseed_mix\trun_mix\trelation_mix\twindow\tfinal_model\tfinal_target\timmediate_downstream\timmediate_status\tsecond_stage_entry\tindirect_jmp_site\tstack_source_status\ttarget_entry_mix\ttarget_mix\tdynamic_hits\trbx_observed_rows\tcontrol_status\tnote\n");
    for (size_t i = 0; i < g_bridge_count; i++) {
        const BridgeRow *row = &g_bridges[i];
        printf("%u\t0x%llx\t%s\t0x%x\t%s\t0x%llx\t%u\t%s\t%s\t%s\t%s\t0x%llx-0x%llx\t%s\t",
               row->atlas.source_entry,
               (unsigned long long)row->atlas.vm_ip,
               row->atlas.ret_slot,
               row->atlas.patched_ret,
               row->edge_kind,
               (unsigned long long)row->hidden_entry,
               row->edge_hits,
               row->atlas.ret_patch_kind,
               row->atlas.seed_mix,
               row->atlas.run_mix,
               row->atlas.relation_mix,
               (unsigned long long)row->atlas.disasm_start,
               (unsigned long long)row->atlas.disasm_stop,
               row->control.final_model);
        print_target_or_dash(row->control.final_target);
        printf("\t0x%llx\t%s\t",
               (unsigned long long)row->control.immediate_downstream,
               row->control.immediate_status);
        print_target_or_dash(row->control.second_stage_entry);
        printf("\t");
        print_target_or_dash(row->control.indirect_jmp_site);
        printf("\t%s\t%s\t%s\t%u\t%u\t%s\tret_patch_followup_target_joined_to_hidden_control_model\n",
               row->control.stack_source_status,
               row->control.target_entry_mix,
               row->control.target_mix,
               row->control.dynamic_hits,
               row->control.rbx_observed_rows,
               row->control.control_status);
    }
}

static void emit_markdown(void) {
    printf("# Native Ret-Patch Hidden Bridge\n\n");
    printf("Joined ret-patch native target windows to the hidden obfuscated-control model. These rows connect `vm_native_ret_patch_tail(...)` exits back to concrete C-shaped hidden-control helpers.\n\n");
    printf("| source | VM IP | ret target | edge | hidden entry | model | targets | status |\n");
    printf("| --- | --- | --- | --- | --- | --- | --- | --- |\n");
    for (size_t i = 0; i < g_bridge_count; i++) {
        const BridgeRow *row = &g_bridges[i];
        char target[64];
        if (row->control.final_target) {
            snprintf(target, sizeof(target), "0x%llx", (unsigned long long)row->control.final_target);
        } else {
            snprintf(target, sizeof(target), "%s", row->control.target_entry_mix);
        }
        printf("| `entry_%u` | `0x%llx` | `0x%x` | `%s` | `0x%llx` | `%s` | `%s` | `%s` |\n",
               row->atlas.source_entry,
               (unsigned long long)row->atlas.vm_ip,
               row->atlas.patched_ret,
               row->edge_kind,
               (unsigned long long)row->hidden_entry,
               row->control.final_model,
               target,
               row->control.control_status);
    }
}

static const char *bridge_func_prefix(const BridgeRow *row) {
    return strcmp(row->edge_kind, "call") == 0 ? "call" : "jump";
}

static void emit_bridge_function(const BridgeRow *row) {
    printf("static int ret_patch_hidden_%u_%llx_%s_%llx(VMState *vm,\n",
           row->atlas.source_entry,
           (unsigned long long)row->atlas.vm_ip,
           bridge_func_prefix(row),
           (unsigned long long)row->hidden_entry);
    printf("                                                   const VMNativeRetPatchEvent *event,\n");
    printf("                                                   const VMNativeHiddenStack *stack) {\n");
    printf("    /* ret-patch source=entry_%u; vm_ip=0x%llx; patched_ret=0x%x; edge=%s; edge_hits=%u */\n",
           row->atlas.source_entry,
           (unsigned long long)row->atlas.vm_ip,
           row->atlas.patched_ret,
           row->edge_kind,
           row->edge_hits);
    printf("    /* ret-patch evidence: kind=");
    print_comment_text(row->atlas.ret_patch_kind);
    printf("; seeds=");
    print_comment_text(row->atlas.seed_mix);
    printf("; runs=");
    print_comment_text(row->atlas.run_mix);
    printf("; relation=");
    print_comment_text(row->atlas.relation_mix);
    printf(" */\n");
    printf("    /* hidden entry=0x%llx; kind=",
           (unsigned long long)row->hidden_entry);
    print_comment_text(row->control.kind);
    printf("; downstream=0x%llx; downstream_status=",
           (unsigned long long)row->control.immediate_downstream);
    print_comment_text(row->control.immediate_status);
    printf("; model=");
    print_comment_text(row->control.final_model);
    printf(" */\n");
    if (row->control.second_stage_entry) {
        printf("    /* second_stage_entry=0x%llx; indirect_jmp_site=0x%llx; stack_source=",
               (unsigned long long)row->control.second_stage_entry,
               (unsigned long long)row->control.indirect_jmp_site);
        print_comment_text(row->control.stack_source_status);
        printf("; target_entry_mix=");
        print_comment_text(row->control.target_entry_mix);
        printf(" */\n");
    }
    printf("    uint64_t target = vm_native_obfuscated_control_model(vm, 0x%llxu, stack);\n",
           (unsigned long long)row->hidden_entry);
    if (row->control.final_target) {
        printf("    if (target == 0) {\n");
        printf("        target = 0x%llxu;\n", (unsigned long long)row->control.final_target);
        printf("    }\n");
    }
    printf("    vm_note_native_ret_patch_hidden_bridge(vm, event, 0x%llxu, 0x%llxu, target,\n",
           (unsigned long long)row->hidden_entry,
           (unsigned long long)row->control.immediate_downstream);
    printf("                                           ");
    print_c_string(row->edge_kind);
    printf(", ");
    print_c_string(row->control.final_model);
    printf(", ");
    print_c_string(row->control.control_status);
    printf(");\n");
    printf("    return 1;\n");
    printf("}\n\n");
}

static void emit_dispatch_group(size_t first, size_t last) {
    const BridgeRow *row = &g_bridges[first];
    printf("    case 0x%llxull:\n", (unsigned long long)row->atlas.vm_ip);
    printf("        if (ret0 == 0x%xu) {\n", row->atlas.patched_ret);
    for (size_t i = first; i < last; i++) {
        const BridgeRow *item = &g_bridges[i];
        printf("            hits += ret_patch_hidden_%u_%llx_%s_%llx(vm, &event, stack);\n",
               item->atlas.source_entry,
               (unsigned long long)item->atlas.vm_ip,
               bridge_func_prefix(item),
               (unsigned long long)item->hidden_entry);
    }
    printf("            return hits;\n");
    printf("        }\n");
    printf("        break;\n");
}

static void emit_c(void) {
    printf("/*\n");
    printf(" * Native ret-patch hidden-control bridge.\n");
    printf(" *\n");
    printf(" * Generated by vm_native_ret_patch_hidden_bridge_dump.c from the native\n");
    printf(" * return-patch target atlas and the joined obfuscated-control model.\n");
    printf(" */\n");
    printf("#include <stdint.h>\n\n");
    printf("typedef struct VMState {\n");
    printf("    uint8_t *ip;\n");
    printf("    uint32_t state;\n");
    printf("    uint32_t flags;\n");
    printf("    uint8_t byte;\n");
    printf("} VMState;\n\n");
    printf("typedef struct VMNativeRetPatchEvent {\n");
    printf("    uint64_t vm_ip;\n");
    printf("    uint32_t ret0;\n");
    printf("    uint32_t ret1;\n");
    printf("    uint16_t stack_off;\n");
    printf("    uint32_t flags;\n");
    printf("} VMNativeRetPatchEvent;\n\n");
    printf("typedef struct VMNativeHiddenStack {\n");
    printf("    const uint64_t *qwords;\n");
    printf("    uint32_t qword_count;\n");
    printf("} VMNativeHiddenStack;\n\n");
    printf("extern uint64_t vm_native_obfuscated_control_model(VMState *vm, uint32_t island_entry,\n");
    printf("                                                    const VMNativeHiddenStack *stack);\n\n");
    printf("static void vm_note_native_ret_patch_hidden_bridge(VMState *vm, const VMNativeRetPatchEvent *event,\n");
    printf("                                                   uint32_t hidden_entry, uint32_t downstream,\n");
    printf("                                                   uint64_t target, const char *edge_kind,\n");
    printf("                                                   const char *model, const char *status) {\n");
    printf("    (void)vm;\n");
    printf("    (void)event;\n");
    printf("    (void)hidden_entry;\n");
    printf("    (void)downstream;\n");
    printf("    (void)target;\n");
    printf("    (void)edge_kind;\n");
    printf("    (void)model;\n");
    printf("    (void)status;\n");
    printf("}\n\n");
    printf("static void vm_note_unknown_native_ret_patch_hidden_bridge(VMState *vm, const VMNativeRetPatchEvent *event) {\n");
    printf("    (void)vm;\n");
    printf("    (void)event;\n");
    printf("}\n\n");
    for (size_t i = 0; i < g_bridge_count; i++) {
        emit_bridge_function(&g_bridges[i]);
    }
    printf("int vm_native_ret_patch_hidden_bridge_dispatch(VMState *vm, uint64_t vm_ip,\n");
    printf("                                               uint32_t ret0, uint32_t ret1,\n");
    printf("                                               uint16_t stack_off, uint32_t flags,\n");
    printf("                                               const VMNativeHiddenStack *stack) {\n");
    printf("    VMNativeRetPatchEvent event = { vm_ip, ret0, ret1, stack_off, flags };\n");
    printf("    int hits = 0;\n");
    printf("    (void)ret1;\n");
    printf("    switch (vm_ip) {\n");
    for (size_t i = 0; i < g_bridge_count;) {
        size_t j = i + 1;
        while (j < g_bridge_count &&
               g_bridges[j].atlas.vm_ip == g_bridges[i].atlas.vm_ip &&
               g_bridges[j].atlas.patched_ret == g_bridges[i].atlas.patched_ret) {
            j++;
        }
        emit_dispatch_group(i, j);
        i = j;
    }
    printf("    default:\n");
    printf("        break;\n");
    printf("    }\n");
    printf("    vm_note_unknown_native_ret_patch_hidden_bridge(vm, &event);\n");
    printf("    return hits;\n");
    printf("}\n\n");
    printf("void vm_native_ret_patch_hidden_bridge(VMState *vm, uint64_t vm_ip,\n");
    printf("                                       uint32_t ret0, uint32_t ret1,\n");
    printf("                                       uint16_t stack_off, uint32_t flags) {\n");
    printf("    (void)vm_native_ret_patch_hidden_bridge_dispatch(vm, vm_ip, ret0, ret1,\n");
    printf("                                                     stack_off, flags, 0);\n");
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
    load_atlas();
    load_controls();
    build_bridges();
    if (mode == MODE_TSV) {
        emit_tsv();
    } else if (mode == MODE_MARKDOWN) {
        emit_markdown();
    } else {
        emit_c();
    }
    return 0;
}
