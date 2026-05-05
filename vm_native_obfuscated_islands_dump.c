#define _GNU_SOURCE
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FOLLOWUPS_PATH "dumps/vmtail-wide-1m-w16/vm_native_ret_patch_followups.tsv"
#define MAX_FIELDS 32
#define MAX_LINE 32768
#define MAX_PROVENANCE 32

typedef struct {
    uint64_t target;
    char section[32];
    char classification[96];
    char priority[96];
    char edge_count[32];
    char edge_kind_mix[512];
    char source_mix[512];
    char relation_mix[512];
    char window_mix[2048];
    char note[2048];
} Provenance;

typedef struct {
    uint64_t entry;
    uint64_t range_start;
    uint64_t range_stop;
    uint64_t final_jump_site;
    uint64_t downstream;
    const char *kind;
    const char *collapse_shape;
    const char *downstream_status;
    const char *coverage;
    const char *next_action;
    const char *note;
} IslandSpec;

static Provenance g_provenance[MAX_PROVENANCE];
static size_t g_provenance_count = 0;

static const IslandSpec k_islands[] = {
    {0x23122, 0x23122, 0x2314f, 0x2314a, 0xe0017,
     "entry_helper",
     "normal_prologue_stack_cookie_then_direct_jump",
     "first_stage_obfuscated_island",
     "covered_by_obfuscated_island_map",
     "follow_downstream_island",
     "Helper has a conventional prologue, records a zero local, then jumps directly into the 0xe0017 native obfuscation island."},
    {0xe0017, 0xe0017, 0xe0166, 0xe0161, 0xcdc60,
     "stack_obfuscated_island",
     "pushf_stack_register_permutation_then_direct_jump",
     "source278_retdec_covered",
     "covered_by_vm_native_ret_patch_source278_retdec",
     "join_existing_source278_retdec",
     "Stack/flag permutation island collapses to 0xcdc60, already emitted in the source278 targeted RetDec sidecar."},
    {0x17bf1f, 0x17bf1f, 0x17c085, 0x17c080, 0xc9849,
     "stack_obfuscated_island",
     "pushf_stack_register_permutation_then_direct_jump",
     "second_stage_obfuscated_thunk",
     "needs_second_stage_obfuscation_collapse",
     "decode_downstream_stack_thunk",
     "Source 299 island collapses to 0xc9849, which begins as another stack/call obfuscation thunk rather than a normal C function."},
    {0x231586, 0x231586, 0x2316b6, 0x2316b1, 0xcf3c7,
     "stack_obfuscated_island",
     "pushf_stack_register_permutation_then_direct_jump",
     "source278_retdec_covered",
     "covered_by_vm_native_ret_patch_source278_retdec",
     "join_existing_source278_retdec",
     "Stack/flag permutation island collapses to 0xcf3c7, already emitted in the source278 targeted RetDec sidecar."},
    {0x337d35, 0x337d35, 0x337e7b, 0x337e76, 0xc6d58,
     "stack_obfuscated_island",
     "pushf_stack_register_permutation_then_direct_jump",
     "second_stage_obfuscated_thunk",
     "needs_second_stage_obfuscation_collapse",
     "decode_downstream_stack_thunk",
     "Source 195 island collapses to 0xc6d58, which starts with a call/pop-style obfuscation thunk."},
    {0x33b4b6, 0x33b4b6, 0x33b642, 0x33b63d, 0xc4258,
     "stack_obfuscated_island",
     "pushf_stack_register_permutation_then_direct_jump",
     "second_stage_obfuscated_thunk",
     "needs_second_stage_obfuscation_collapse",
     "decode_downstream_stack_thunk",
     "Source 299 island collapses to 0xc4258, whose downstream bytes are still obfuscated stack code."},
    {0x33f109, 0x33f109, 0x33f273, 0x33f26e, 0xcaf2a,
     "stack_obfuscated_island",
     "pushf_stack_register_permutation_then_direct_jump",
     "second_stage_obfuscated_thunk",
     "needs_second_stage_obfuscation_collapse",
     "decode_downstream_stack_thunk",
     "Source 195 island collapses to 0xcaf2a, which begins with a call into more stack/register obfuscation."},
    {0x36afd2, 0x36afd2, 0x36b11b, 0x36b116, 0xc57b8,
     "stack_obfuscated_island",
     "pushf_stack_register_permutation_then_direct_jump",
     "second_stage_obfuscated_thunk",
     "needs_second_stage_obfuscation_collapse",
     "decode_downstream_stack_thunk",
     "Source 195 island collapses to 0xc57b8, which begins as another call/stack obfuscation thunk."},
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

static void add_provenance(char **fields, int field_count, int c_target, int c_section,
                           int c_classification, int c_priority, int c_edge_count,
                           int c_edge_kind_mix, int c_source_mix, int c_relation_mix,
                           int c_window_mix, int c_note) {
    Provenance *prov;
    if (g_provenance_count >= MAX_PROVENANCE) {
        fprintf(stderr, "too many obfuscated-island provenance rows\n");
        exit(1);
    }
    prov = &g_provenance[g_provenance_count++];
    memset(prov, 0, sizeof(*prov));
    prov->target = parse_number(field_at(fields, field_count, c_target));
    copy_field(prov->section, sizeof(prov->section), field_at(fields, field_count, c_section));
    copy_field(prov->classification, sizeof(prov->classification), field_at(fields, field_count, c_classification));
    copy_field(prov->priority, sizeof(prov->priority), field_at(fields, field_count, c_priority));
    copy_field(prov->edge_count, sizeof(prov->edge_count), field_at(fields, field_count, c_edge_count));
    copy_field(prov->edge_kind_mix, sizeof(prov->edge_kind_mix), field_at(fields, field_count, c_edge_kind_mix));
    copy_field(prov->source_mix, sizeof(prov->source_mix), field_at(fields, field_count, c_source_mix));
    copy_field(prov->relation_mix, sizeof(prov->relation_mix), field_at(fields, field_count, c_relation_mix));
    copy_field(prov->window_mix, sizeof(prov->window_mix), field_at(fields, field_count, c_window_mix));
    copy_field(prov->note, sizeof(prov->note), field_at(fields, field_count, c_note));
}

static bool is_interesting_target(uint64_t target) {
    for (size_t i = 0; i < sizeof(k_islands) / sizeof(k_islands[0]); i++) {
        if (k_islands[i].entry == target) {
            return true;
        }
    }
    return false;
}

static const Provenance *find_provenance(uint64_t target) {
    for (size_t i = 0; i < g_provenance_count; i++) {
        if (g_provenance[i].target == target) {
            return &g_provenance[i];
        }
    }
    return NULL;
}

static void load_followup_provenance(const char *path) {
    FILE *file = fopen(path, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count;
    int c_target, c_section, c_classification, c_priority, c_edge_count;
    int c_edge_kind_mix, c_source_mix, c_relation_mix, c_window_mix, c_note;
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
    c_target = find_col(header, header_count, "target");
    c_section = find_col(header, header_count, "section");
    c_classification = find_col(header, header_count, "classification");
    c_priority = find_col(header, header_count, "priority");
    c_edge_count = find_col(header, header_count, "edge_count");
    c_edge_kind_mix = find_col(header, header_count, "edge_kind_mix");
    c_source_mix = find_col(header, header_count, "source_mix");
    c_relation_mix = find_col(header, header_count, "relation_mix");
    c_window_mix = find_col(header, header_count, "window_mix");
    c_note = find_col(header, header_count, "note");
    if (c_target < 0 || c_section < 0 || c_classification < 0 || c_priority < 0 ||
        c_edge_count < 0 || c_edge_kind_mix < 0 || c_source_mix < 0 ||
        c_relation_mix < 0 || c_window_mix < 0 || c_note < 0) {
        fprintf(stderr, "%s: required columns missing\n", path);
        exit(1);
    }
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int field_count;
        uint64_t target;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        field_count = split_tsv(line, fields, MAX_FIELDS);
        target = parse_number(field_at(fields, field_count, c_target));
        if (is_interesting_target(target)) {
            add_provenance(fields, field_count, c_target, c_section, c_classification,
                           c_priority, c_edge_count, c_edge_kind_mix, c_source_mix,
                           c_relation_mix, c_window_mix, c_note);
        }
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

static unsigned count_status(const char *status) {
    unsigned count = 0;
    for (size_t i = 0; i < sizeof(k_islands) / sizeof(k_islands[0]); i++) {
        if (strcmp(k_islands[i].downstream_status, status) == 0) {
            count++;
        }
    }
    return count;
}

static void emit_tsv(void) {
    printf("entry\tkind\trange_start\trange_stop\tfinal_jump_site\tdownstream\tdownstream_status\tcoverage\tnext_action\tsource_mix\tedge_kind_mix\trelation_mix\twindow_mix\tfollowup_classification\tfollowup_priority\tnote\n");
    for (size_t i = 0; i < sizeof(k_islands) / sizeof(k_islands[0]); i++) {
        const IslandSpec *spec = &k_islands[i];
        const Provenance *prov = find_provenance(spec->entry);
        printf("0x%llx\t%s\t0x%llx\t0x%llx\t0x%llx\t0x%llx\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",
               (unsigned long long)spec->entry,
               spec->kind,
               (unsigned long long)spec->range_start,
               (unsigned long long)spec->range_stop,
               (unsigned long long)spec->final_jump_site,
               (unsigned long long)spec->downstream,
               spec->downstream_status,
               spec->coverage,
               spec->next_action,
               prov ? prov->source_mix : "-",
               prov ? prov->edge_kind_mix : "-",
               prov ? prov->relation_mix : "-",
               prov ? prov->window_mix : "-",
               prov ? prov->classification : "-",
               prov ? prov->priority : "-",
               spec->note);
    }
}

static void emit_markdown(void) {
    printf("# Native Obfuscated Island Map\n\n");
    printf("Collapses the obfuscated native islands reached by return-patch follow-up control into their next concrete native targets.\n\n");
    printf("- island/helper rows: %zu\n", sizeof(k_islands) / sizeof(k_islands[0]));
    printf("- downstreams already covered by source278 RetDec: %u\n", count_status("source278_retdec_covered"));
    printf("- downstreams still requiring second-stage obfuscation collapse: %u\n\n", count_status("second_stage_obfuscated_thunk"));
    printf("| entry | kind | range | final jump | downstream | downstream status | sources | next action |\n");
    printf("| --- | --- | --- | --- | --- | --- | --- | --- |\n");
    for (size_t i = 0; i < sizeof(k_islands) / sizeof(k_islands[0]); i++) {
        const IslandSpec *spec = &k_islands[i];
        const Provenance *prov = find_provenance(spec->entry);
        printf("| `0x%llx` | `%s` | `0x%llx-0x%llx` | `0x%llx` | `0x%llx` | `%s` | `%s` | `%s` |\n",
               (unsigned long long)spec->entry,
               spec->kind,
               (unsigned long long)spec->range_start,
               (unsigned long long)spec->range_stop,
               (unsigned long long)spec->final_jump_site,
               (unsigned long long)spec->downstream,
               spec->downstream_status,
               prov ? prov->source_mix : "-",
               spec->next_action);
    }
}

static void emit_c_function(const IslandSpec *spec) {
    const Provenance *prov = find_provenance(spec->entry);
    printf("static void obfuscated_island_%llx(VMState *vm, const VMNativeObfuscatedIslandEvidence *edge) {\n",
           (unsigned long long)spec->entry);
    printf("    /* entry=0x%llx; kind=%s; range=0x%llx-0x%llx */\n",
           (unsigned long long)spec->entry, spec->kind,
           (unsigned long long)spec->range_start,
           (unsigned long long)spec->range_stop);
    printf("    /* collapse_shape=%s; final_jump_site=0x%llx; downstream=0x%llx */\n",
           spec->collapse_shape,
           (unsigned long long)spec->final_jump_site,
           (unsigned long long)spec->downstream);
    printf("    /* downstream_status=%s; coverage=%s; next_action=%s */\n",
           spec->downstream_status, spec->coverage, spec->next_action);
    if (prov) {
        printf("    /* followup_classification=");
        print_comment_text(prov->classification);
        printf("; priority=");
        print_comment_text(prov->priority);
        printf("; sources=");
        print_comment_text(prov->source_mix);
        printf(" */\n");
        printf("    /* relation_mix=");
        print_comment_text(prov->relation_mix);
        printf("; windows=");
        print_comment_text(prov->window_mix);
        printf(" */\n");
    }
    printf("    /* note: ");
    print_comment_text(spec->note);
    printf(" */\n");
    printf("    vm_note_native_obfuscated_island(vm, edge, 0x%llxu, 0x%llxu, \"%s\", \"%s\");\n",
           (unsigned long long)spec->entry,
           (unsigned long long)spec->downstream,
           spec->kind,
           spec->downstream_status);
    printf("}\n\n");
}

static void emit_c(void) {
    printf("/*\n");
    printf(" * Native obfuscated island reconstruction map.\n");
    printf(" *\n");
    printf(" * Generated by vm_native_obfuscated_islands_dump.c from %s plus\n", FOLLOWUPS_PATH);
    printf(" * bounded objdump collapse facts for the first obfuscation stage.\n");
    printf(" * This artifact is intentionally C-shaped: every return-patch island is\n");
    printf(" * represented as an explicit helper and the dispatcher records whether the\n");
    printf(" * collapsed downstream is already represented by targeted RetDec or still\n");
    printf(" * needs a second-stage obfuscation collapse.\n");
    printf(" */\n");
    printf("#include <stdint.h>\n\n");
    printf("typedef struct VMState {\n");
    printf("    uint8_t *ip;\n");
    printf("    uint32_t state;\n");
    printf("    uint32_t flags;\n");
    printf("    uint8_t byte;\n");
    printf("} VMState;\n\n");
    printf("typedef struct VMNativeObfuscatedIslandEvidence {\n");
    printf("    uint64_t source_entry;\n");
    printf("    uint64_t synthetic_start_vm_ip;\n");
    printf("    uint32_t patched_ret_eac_off;\n");
    printf("    const char *source_mix;\n");
    printf("} VMNativeObfuscatedIslandEvidence;\n\n");
    printf("static void vm_note_native_obfuscated_island(VMState *vm,\n");
    printf("                                             const VMNativeObfuscatedIslandEvidence *edge,\n");
    printf("                                             uint32_t entry, uint32_t downstream,\n");
    printf("                                             const char *kind,\n");
    printf("                                             const char *downstream_status) {\n");
    printf("    (void)vm;\n");
    printf("    (void)edge;\n");
    printf("    (void)entry;\n");
    printf("    (void)downstream;\n");
    printf("    (void)kind;\n");
    printf("    (void)downstream_status;\n");
    printf("}\n\n");
    for (size_t i = 0; i < sizeof(k_islands) / sizeof(k_islands[0]); i++) {
        emit_c_function(&k_islands[i]);
    }
    printf("void vm_native_obfuscated_island(VMState *vm, uint32_t entry,\n");
    printf("                                 const VMNativeObfuscatedIslandEvidence *edge) {\n");
    printf("    switch (entry) {\n");
    for (size_t i = 0; i < sizeof(k_islands) / sizeof(k_islands[0]); i++) {
        printf("    case 0x%llxu:\n", (unsigned long long)k_islands[i].entry);
        printf("        obfuscated_island_%llx(vm, edge);\n", (unsigned long long)k_islands[i].entry);
        printf("        break;\n");
    }
    printf("    default:\n");
    printf("        vm_note_native_obfuscated_island(vm, edge, entry, 0, \"unknown_obfuscated_entry\", \"needs_static_audit\");\n");
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
    load_followup_provenance(FOLLOWUPS_PATH);
    if (mode == MODE_TSV) {
        emit_tsv();
    } else if (mode == MODE_MARKDOWN) {
        emit_markdown();
    } else {
        emit_c();
    }
    return 0;
}
