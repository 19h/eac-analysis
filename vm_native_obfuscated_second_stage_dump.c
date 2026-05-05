#define _GNU_SOURCE
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ISLANDS_PATH "dumps/vmtail-wide-1m-w16/vm_native_obfuscated_islands.tsv"
#define MAX_FIELDS 32
#define MAX_PROVENANCE 16

typedef struct {
    uint64_t entry;
    char source_mix[512];
    char first_stage_entries[512];
    char first_stage_windows[1024];
} SecondStageProvenance;

typedef struct {
    uint64_t entry;
    uint64_t scan_start;
    uint64_t scan_stop;
    uint64_t setup_call_target;
    uint64_t loop1_jmp_site;
    uint64_t loop1_target;
    uint64_t loop2_jmp_site;
    uint64_t loop2_target;
    uint64_t indirect_jmp_site;
    uint64_t next_linear_entry;
    const char *chain;
    const char *shape;
    const char *status;
    const char *next_action;
    const char *note;
} SecondStageSpec;

static SecondStageProvenance g_provenance[MAX_PROVENANCE];
static size_t g_provenance_count = 0;

static const SecondStageSpec k_second_stage[] = {
    {0xc9849, 0xc9849, 0xcad8a, 0xc984e, 0xca175, 0xca166, 0xcab3a, 0xca97b, 0xcad88, 0xcaf2a,
     "source299_chain_a",
     "call_plus_zero_stack_setup_two_internal_loops_computed_jmp_mem_rax",
     "computed_indirect_target_unresolved",
     "instrument_or_symbolically_collapse_jmp_rax_memory_target",
     "Reached from first-stage island 0x17bf1f; reaches a computed jmp [rax] rather than a direct downstream branch."},
    {0xcaf2a, 0xcaf2a, 0xcc3f7, 0xcaf2f, 0xcb941, 0xcb932, 0xcc23f, 0xcc081, 0xcc3f5, 0xcc59c,
     "source195_chain_b",
     "call_plus_zero_stack_setup_two_internal_loops_computed_jmp_mem_rax",
     "computed_indirect_target_unresolved",
     "instrument_or_symbolically_collapse_jmp_rax_memory_target",
     "Reached from first-stage island 0x33f109; exact indirect target at jmp [rax] still needs native stack/register symbolic collapse."},
    {0xc4258, 0xc4258, 0xc559f, 0xc425d, 0xc4af1, 0xc4ae2, 0xc53a0, 0xc524c, 0xc559d, 0xc57b8,
     "source299_chain_b",
     "call_plus_zero_stack_setup_two_internal_loops_computed_jmp_mem_rax",
     "computed_indirect_target_unresolved",
     "instrument_or_symbolically_collapse_jmp_rax_memory_target",
     "Reached from first-stage island 0x33b4b6; the next linear thunk is 0xc57b8 but control leaves through computed jmp [rax]."},
    {0xc57b8, 0xc57b8, 0xc6bd0, 0xc57bd, 0xc60ca, 0xc60bb, 0xc69d2, 0xc68b4, 0xc6bce, 0xc6d58,
     "source195_chain_c",
     "call_plus_zero_stack_setup_two_internal_loops_computed_jmp_mem_rax",
     "computed_indirect_target_unresolved",
     "instrument_or_symbolically_collapse_jmp_rax_memory_target",
     "Reached from first-stage island 0x36afd2; structurally matches the c4258/c6d58 computed-jump thunk family."},
    {0xc6d58, 0xc6d58, 0xc80bb, 0xc6d5d, 0xc764f, 0xc7640, 0xc7e9a, 0xc7d7a, 0xc80b9, 0xc823b,
     "source195_chain_d",
     "call_plus_zero_stack_setup_two_internal_loops_computed_jmp_mem_rax",
     "computed_indirect_target_unresolved",
     "instrument_or_symbolically_collapse_jmp_rax_memory_target",
     "Reached from first-stage island 0x337d35; exact indirect target at jmp [rax] remains the next native-control solve."},
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

static bool is_second_stage_entry(uint64_t value) {
    for (size_t i = 0; i < sizeof(k_second_stage) / sizeof(k_second_stage[0]); i++) {
        if (k_second_stage[i].entry == value) {
            return true;
        }
    }
    return false;
}

static SecondStageProvenance *find_or_add_provenance(uint64_t entry) {
    for (size_t i = 0; i < g_provenance_count; i++) {
        if (g_provenance[i].entry == entry) {
            return &g_provenance[i];
        }
    }
    if (g_provenance_count >= MAX_PROVENANCE) {
        fprintf(stderr, "too many second-stage provenance rows\n");
        exit(1);
    }
    memset(&g_provenance[g_provenance_count], 0, sizeof(g_provenance[g_provenance_count]));
    g_provenance[g_provenance_count].entry = entry;
    copy_field(g_provenance[g_provenance_count].source_mix, sizeof(g_provenance[g_provenance_count].source_mix), "-");
    copy_field(g_provenance[g_provenance_count].first_stage_entries, sizeof(g_provenance[g_provenance_count].first_stage_entries), "-");
    copy_field(g_provenance[g_provenance_count].first_stage_windows, sizeof(g_provenance[g_provenance_count].first_stage_windows), "-");
    return &g_provenance[g_provenance_count++];
}

static const SecondStageProvenance *find_provenance(uint64_t entry) {
    for (size_t i = 0; i < g_provenance_count; i++) {
        if (g_provenance[i].entry == entry) {
            return &g_provenance[i];
        }
    }
    return NULL;
}

static void append_value(char *dest, size_t dest_size, const char *value) {
    size_t used = strlen(dest);
    if (!value || !value[0] || strcmp(value, "-") == 0) {
        return;
    }
    if (used == 0 || strcmp(dest, "-") == 0) {
        snprintf(dest, dest_size, "%s", value);
    } else if (strstr(dest, value) == NULL) {
        snprintf(dest + used, dest_size - used, ",%s", value);
    }
}

static void load_island_provenance(const char *path) {
    FILE *file = fopen(path, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count;
    int c_entry, c_downstream, c_status, c_source_mix, c_window_mix;
    if (!file) {
        perror(path);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", path);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_entry = find_col(header, header_count, "entry");
    c_downstream = find_col(header, header_count, "downstream");
    c_status = find_col(header, header_count, "downstream_status");
    c_source_mix = find_col(header, header_count, "source_mix");
    c_window_mix = find_col(header, header_count, "window_mix");
    if (c_entry < 0 || c_downstream < 0 || c_status < 0 || c_source_mix < 0 || c_window_mix < 0) {
        fprintf(stderr, "%s: required columns missing\n", path);
        exit(1);
    }
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int field_count;
        uint64_t entry, downstream;
        const char *status;
        SecondStageProvenance *prov;
        char first_stage[32];
        chomp(line);
        if (!line[0]) {
            continue;
        }
        field_count = split_tsv(line, fields, MAX_FIELDS);
        entry = parse_number(field_at(fields, field_count, c_entry));
        downstream = parse_number(field_at(fields, field_count, c_downstream));
        status = field_at(fields, field_count, c_status);
        if (!is_second_stage_entry(downstream) || strcmp(status, "second_stage_obfuscated_thunk") != 0) {
            continue;
        }
        prov = find_or_add_provenance(downstream);
        copy_field(prov->source_mix, sizeof(prov->source_mix), field_at(fields, field_count, c_source_mix));
        snprintf(first_stage, sizeof(first_stage), "0x%llx", (unsigned long long)entry);
        append_value(prov->first_stage_entries, sizeof(prov->first_stage_entries), first_stage);
        append_value(prov->first_stage_windows, sizeof(prov->first_stage_windows),
                     field_at(fields, field_count, c_window_mix));
    }
    free(line);
    fclose(file);
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

static void emit_tsv(void) {
    printf("entry\tscan_start\tscan_stop\tsetup_call_target\tloop1_jmp_site\tloop1_target\tloop2_jmp_site\tloop2_target\tindirect_jmp_site\tnext_linear_entry\tchain\tshape\tstatus\tnext_action\tfirst_stage_entries\tsource_mix\tfirst_stage_windows\tnote\n");
    for (size_t i = 0; i < sizeof(k_second_stage) / sizeof(k_second_stage[0]); i++) {
        const SecondStageSpec *spec = &k_second_stage[i];
        const SecondStageProvenance *prov = find_provenance(spec->entry);
        printf("0x%llx\t0x%llx\t0x%llx\t0x%llx\t0x%llx\t0x%llx\t0x%llx\t0x%llx\t0x%llx\t0x%llx\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",
               (unsigned long long)spec->entry,
               (unsigned long long)spec->scan_start,
               (unsigned long long)spec->scan_stop,
               (unsigned long long)spec->setup_call_target,
               (unsigned long long)spec->loop1_jmp_site,
               (unsigned long long)spec->loop1_target,
               (unsigned long long)spec->loop2_jmp_site,
               (unsigned long long)spec->loop2_target,
               (unsigned long long)spec->indirect_jmp_site,
               (unsigned long long)spec->next_linear_entry,
               spec->chain,
               spec->shape,
               spec->status,
               spec->next_action,
               prov ? prov->first_stage_entries : "-",
               prov ? prov->source_mix : "-",
               prov ? prov->first_stage_windows : "-",
               spec->note);
    }
}

static void emit_markdown(void) {
    printf("# Native Obfuscated Second-Stage Thunks\n\n");
    printf("Indexes the five first-stage island downstreams that do not collapse to direct jumps. Each reaches a computed `jmp [rax]` site.\n\n");
    printf("| entry | first stage | computed jump | internal loops | next linear entry | status | next action |\n");
    printf("| --- | --- | --- | --- | --- | --- | --- |\n");
    for (size_t i = 0; i < sizeof(k_second_stage) / sizeof(k_second_stage[0]); i++) {
        const SecondStageSpec *spec = &k_second_stage[i];
        const SecondStageProvenance *prov = find_provenance(spec->entry);
        printf("| `0x%llx` | `%s` | `0x%llx` | `0x%llx->0x%llx`, `0x%llx->0x%llx` | `0x%llx` | `%s` | `%s` |\n",
               (unsigned long long)spec->entry,
               prov ? prov->first_stage_entries : "-",
               (unsigned long long)spec->indirect_jmp_site,
               (unsigned long long)spec->loop1_jmp_site,
               (unsigned long long)spec->loop1_target,
               (unsigned long long)spec->loop2_jmp_site,
               (unsigned long long)spec->loop2_target,
               (unsigned long long)spec->next_linear_entry,
               spec->status,
               spec->next_action);
    }
}

static void emit_c_function(const SecondStageSpec *spec) {
    const SecondStageProvenance *prov = find_provenance(spec->entry);
    printf("static void second_stage_thunk_%llx(VMState *vm, const VMNativeSecondStageThunk *edge) {\n",
           (unsigned long long)spec->entry);
    printf("    /* entry=0x%llx; scan=0x%llx-0x%llx; setup_call_target=0x%llx */\n",
           (unsigned long long)spec->entry,
           (unsigned long long)spec->scan_start,
           (unsigned long long)spec->scan_stop,
           (unsigned long long)spec->setup_call_target);
    printf("    /* loops: 0x%llx->0x%llx and 0x%llx->0x%llx; computed_jump=0x%llx jmp [rax] */\n",
           (unsigned long long)spec->loop1_jmp_site,
           (unsigned long long)spec->loop1_target,
           (unsigned long long)spec->loop2_jmp_site,
           (unsigned long long)spec->loop2_target,
           (unsigned long long)spec->indirect_jmp_site);
    printf("    /* shape=%s; status=%s; next_action=%s; next_linear_entry=0x%llx */\n",
           spec->shape, spec->status, spec->next_action,
           (unsigned long long)spec->next_linear_entry);
    if (prov) {
        printf("    /* first_stage_entries=");
        print_comment_text(prov->first_stage_entries);
        printf("; source_mix=");
        print_comment_text(prov->source_mix);
        printf("; first_stage_windows=");
        print_comment_text(prov->first_stage_windows);
        printf(" */\n");
    }
    printf("    /* note: ");
    print_comment_text(spec->note);
    printf(" */\n");
    printf("    vm_note_second_stage_thunk(vm, edge, 0x%llxu, 0x%llxu, \"%s\", \"%s\");\n",
           (unsigned long long)spec->entry,
           (unsigned long long)spec->indirect_jmp_site,
           spec->status,
           spec->next_action);
    printf("}\n\n");
}

static void emit_c(void) {
    printf("/*\n");
    printf(" * Native obfuscated second-stage computed-thunk map.\n");
    printf(" *\n");
    printf(" * Generated by vm_native_obfuscated_second_stage_dump.c from %s.\n", ISLANDS_PATH);
    printf(" * These are the first-stage island downstreams that no longer end in a\n");
    printf(" * direct jump. They reach computed jmp [rax] sites, so this artifact keeps\n");
    printf(" * the C-shaped evidence precise and marks the remaining target recovery as\n");
    printf(" * an instrumentation/symbolic-stack task.\n");
    printf(" */\n");
    printf("#include <stdint.h>\n\n");
    printf("typedef struct VMState {\n");
    printf("    uint8_t *ip;\n");
    printf("    uint32_t state;\n");
    printf("    uint32_t flags;\n");
    printf("    uint8_t byte;\n");
    printf("} VMState;\n\n");
    printf("typedef struct VMNativeSecondStageThunk {\n");
    printf("    uint64_t first_stage_entry;\n");
    printf("    uint64_t synthetic_start_vm_ip;\n");
    printf("    uint32_t native_entry;\n");
    printf("    const char *source_mix;\n");
    printf("} VMNativeSecondStageThunk;\n\n");
    printf("static void vm_note_second_stage_thunk(VMState *vm, const VMNativeSecondStageThunk *edge,\n");
    printf("                                       uint32_t entry, uint32_t computed_jump,\n");
    printf("                                       const char *status, const char *next_action) {\n");
    printf("    (void)vm;\n");
    printf("    (void)edge;\n");
    printf("    (void)entry;\n");
    printf("    (void)computed_jump;\n");
    printf("    (void)status;\n");
    printf("    (void)next_action;\n");
    printf("}\n\n");
    for (size_t i = 0; i < sizeof(k_second_stage) / sizeof(k_second_stage[0]); i++) {
        emit_c_function(&k_second_stage[i]);
    }
    printf("void vm_native_obfuscated_second_stage(VMState *vm, uint32_t entry,\n");
    printf("                                       const VMNativeSecondStageThunk *edge) {\n");
    printf("    switch (entry) {\n");
    for (size_t i = 0; i < sizeof(k_second_stage) / sizeof(k_second_stage[0]); i++) {
        printf("    case 0x%llxu:\n", (unsigned long long)k_second_stage[i].entry);
        printf("        second_stage_thunk_%llx(vm, edge);\n", (unsigned long long)k_second_stage[i].entry);
        printf("        break;\n");
    }
    printf("    default:\n");
    printf("        vm_note_second_stage_thunk(vm, edge, entry, 0, \"unknown_second_stage_thunk\", \"needs_static_audit\");\n");
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
    load_island_provenance(ISLANDS_PATH);
    if (mode == MODE_TSV) {
        emit_tsv();
    } else if (mode == MODE_MARKDOWN) {
        emit_markdown();
    } else {
        emit_c();
    }
    return 0;
}
