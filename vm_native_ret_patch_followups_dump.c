#define _GNU_SOURCE
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ATLAS_PATH "dumps/vmtail-wide-1m-w16/vm_synthetic_gap_ret_patch_native_target_atlas.tsv"
#define MAX_FIELDS 32
#define MAX_LINE 32768
#define MAX_TARGETS 128
#define MAX_MIX 64
#define MIX_TEXT 4096

#define PLT_START 0x1fbf0ull
#define PLT_STOP  0x20bd0ull
#define PLTGOT_START 0x20bd0ull
#define PLTGOT_STOP  0x20be0ull
#define TEXT_START 0x20c00ull
#define TEXT_STOP  0x583650ull

typedef struct {
    char key[128];
    unsigned count;
} MixItem;

typedef struct {
    MixItem items[MAX_MIX];
    size_t count;
} Mix;

typedef struct {
    uint64_t target;
    unsigned total_edges;
    Mix edge_kind_mix;
    Mix source_mix;
    Mix window_mix;
    Mix relation_mix;
} FollowupTarget;

typedef struct {
    uint64_t target;
    const char *classification;
    const char *priority;
    const char *note;
} KnownTarget;

static FollowupTarget g_targets[MAX_TARGETS];
static size_t g_target_count = 0;

static const KnownTarget k_known_targets[] = {
    {0x206c0, "plt_stack_chk_fail", "external_runtime",
     "__stack_chk_fail PLT target reached only from stack-cookie guard failure branches."},
    {0x21a50, "internal_realloc_copy_helper", "targeted_retdec_candidate",
     "Function-shaped helper with normal prologue; copies or reallocates buffered native state and calls allocator-family helpers."},
    {0x23122, "internal_obfuscated_helper_to_e0017", "targeted_obfuscation_candidate",
     "Function-shaped helper begins with a normal prologue then transfers into the 0xe0017 obfuscated native island."},
    {0x2508e, "internal_container_wrapper", "bounded_targeted_retdec_candidate",
     "Small wrapper around pointer adjustment and a tail transfer toward the nearby 0x24cb0 container/object helper family."},
    {0x48eb2b, "internal_large_string_state_helper", "targeted_retdec_candidate",
     "Large function-shaped helper with string references and allocator/helper calls; worth a narrow decompiler pass, not a broad sweep."},
    {0x729b6, "pthread_mutex_lock_store_helper", "native_semantics_recovered",
     "Tiny helper stores rsi through rdi, moves rsi to rdi, then tail-jumps to pthread_mutex_lock@plt."},
    {0x7260a, "internal_helper_chain", "bounded_targeted_retdec_candidate",
     "Small helper calls the nearby 0x72588 routine and tail-transfers onward; it is native control, not a VM dispatch edge."},
    {0x2d2cf4, "source278_downstream_retdec_covered", "covered_by_source278_retdec",
     "Downstream native target already represented in the source278 targeted RetDec sidecar."},
    {0x4eeb30, "allocator_free_wrapper", "native_semantics_recovered",
     "Allocator/free wrapper family target; observed as native cleanup control rather than bytecode CFG."},
    {0x4eeb50, "allocator_free_wrapper", "native_semantics_recovered",
     "Allocator/free wrapper family target; observed as native cleanup control rather than bytecode CFG."},
    {0xe0017, "obfuscated_native_island", "obfuscation_island_candidate",
     "Native obfuscation island with flag/stack gymnastics; reached from the 0x23122 helper path."},
    {0x17bf1f, "obfuscated_native_island", "obfuscation_island_candidate",
     "Native obfuscation island reached by source 299 ret-patch follow-up control."},
    {0x231586, "obfuscated_native_island", "obfuscation_island_candidate",
     "Native obfuscation island reached by a source 195 ret-patch target window."},
    {0x337d35, "obfuscated_native_island", "obfuscation_island_candidate",
     "Native obfuscation island reached by a source 195 ret-patch target window."},
    {0x33b4b6, "obfuscated_native_island", "obfuscation_island_candidate",
     "Native obfuscation island reached by source 299 ret-patch follow-up control."},
    {0x33f109, "obfuscated_native_island", "obfuscation_island_candidate",
     "Native obfuscation island reached by a source 195 ret-patch target window."},
    {0x36afd2, "obfuscated_native_island", "obfuscation_island_candidate",
     "Native obfuscation island reached by a source 195 ret-patch target window."},
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

static void mix_add(Mix *mix, const char *key, unsigned count) {
    if (!key || !key[0] || count == 0) {
        return;
    }
    for (size_t i = 0; i < mix->count; i++) {
        if (strcmp(mix->items[i].key, key) == 0) {
            mix->items[i].count += count;
            return;
        }
    }
    if (mix->count >= MAX_MIX) {
        fprintf(stderr, "too many mix values for %s\n", key);
        exit(1);
    }
    snprintf(mix->items[mix->count].key, sizeof(mix->items[mix->count].key), "%s", key);
    mix->items[mix->count].count = count;
    mix->count++;
}

static bool mix_has(const Mix *mix, const char *key) {
    for (size_t i = 0; i < mix->count; i++) {
        if (strcmp(mix->items[i].key, key) == 0) {
            return true;
        }
    }
    return false;
}

static void mix_to_string(const Mix *mix, char *out, size_t out_size) {
    size_t used = 0;
    out[0] = '\0';
    for (size_t i = 0; i < mix->count; i++) {
        int written = snprintf(out + used, out_size - used, "%s%s:%u",
                               used ? "," : "", mix->items[i].key, mix->items[i].count);
        if (written < 0 || (size_t)written >= out_size - used) {
            out[out_size - 1] = '\0';
            return;
        }
        used += (size_t)written;
    }
    if (!used) {
        snprintf(out, out_size, "-");
    }
}

static FollowupTarget *find_or_add_target(uint64_t target) {
    for (size_t i = 0; i < g_target_count; i++) {
        if (g_targets[i].target == target) {
            return &g_targets[i];
        }
    }
    if (g_target_count >= MAX_TARGETS) {
        fprintf(stderr, "too many follow-up targets\n");
        exit(1);
    }
    memset(&g_targets[g_target_count], 0, sizeof(g_targets[g_target_count]));
    g_targets[g_target_count].target = target;
    return &g_targets[g_target_count++];
}

static const KnownTarget *known_target(uint64_t target) {
    for (size_t i = 0; i < sizeof(k_known_targets) / sizeof(k_known_targets[0]); i++) {
        if (k_known_targets[i].target == target) {
            return &k_known_targets[i];
        }
    }
    return NULL;
}

static const char *section_name(uint64_t target) {
    if (target >= PLT_START && target < PLT_STOP) {
        return ".plt";
    }
    if (target >= PLTGOT_START && target < PLTGOT_STOP) {
        return ".plt.got";
    }
    if (target >= TEXT_START && target < TEXT_STOP) {
        return ".text";
    }
    return "outside_known_sections";
}

static const char *target_classification(const FollowupTarget *target) {
    const KnownTarget *known = known_target(target->target);
    if (known) {
        return known->classification;
    }
    if (strcmp(section_name(target->target), ".plt") == 0) {
        return "plt_external";
    }
    if (mix_has(&target->relation_mix, "inside_retpatch_window")) {
        return "local_retpatch_window_branch";
    }
    if (mix_has(&target->relation_mix, "post_window_adjacent")) {
        return "post_window_adjacent_branch";
    }
    if (strcmp(section_name(target->target), ".text") == 0) {
        return "unknown_text_followup";
    }
    return "unknown_followup";
}

static const char *target_priority(const FollowupTarget *target) {
    const KnownTarget *known = known_target(target->target);
    if (known) {
        return known->priority;
    }
    if (strcmp(section_name(target->target), ".plt") == 0) {
        return "external_runtime";
    }
    if (mix_has(&target->relation_mix, "inside_retpatch_window") ||
        mix_has(&target->relation_mix, "post_window_adjacent")) {
        return "covered_by_source_window";
    }
    if (strcmp(section_name(target->target), ".text") == 0) {
        return "needs_static_followup";
    }
    return "needs_section_audit";
}

static const char *target_note(const FollowupTarget *target) {
    const KnownTarget *known = known_target(target->target);
    if (known) {
        return known->note;
    }
    if (strcmp(section_name(target->target), ".plt") == 0) {
        return "External PLT target reached from the native ret-patch window.";
    }
    if (mix_has(&target->relation_mix, "inside_retpatch_window")) {
        return "Direct branch target stays inside an already-rendered native ret-patch disassembly window.";
    }
    if (mix_has(&target->relation_mix, "post_window_adjacent")) {
        return "Direct branch lands just after the bounded window; keep with the local native epilogue/adjacent-helper evidence.";
    }
    if (strcmp(section_name(target->target), ".text") == 0) {
        return "Text target not yet covered by the current bounded follow-up classification.";
    }
    return "Target is outside the known .plt/.plt.got/.text ranges used by this static classifier.";
}

static const char *relation_to_window(uint64_t target, uint64_t start, uint64_t stop) {
    if (target >= start && target < stop) {
        return "inside_retpatch_window";
    }
    if (target >= stop && target < stop + 0x80) {
        return "post_window_adjacent";
    }
    return "outside_retpatch_window";
}

static void add_target_edge(uint64_t target_value, const char *edge_kind, unsigned count,
                            const char *source_entry, const char *synthetic_start,
                            uint64_t window_start, uint64_t window_stop) {
    FollowupTarget *target = find_or_add_target(target_value);
    char key[128];
    char window[192];
    target->total_edges += count;
    snprintf(key, sizeof(key), "%s", edge_kind);
    mix_add(&target->edge_kind_mix, key, count);
    snprintf(key, sizeof(key), "entry_%s", source_entry && source_entry[0] ? source_entry : "unknown");
    mix_add(&target->source_mix, key, count);
    snprintf(window, sizeof(window), "%s@%s:0x%llx-0x%llx",
             source_entry && source_entry[0] ? source_entry : "?",
             synthetic_start && synthetic_start[0] ? synthetic_start : "?",
             (unsigned long long)window_start, (unsigned long long)window_stop);
    mix_add(&target->window_mix, window, count);
    mix_add(&target->relation_mix, relation_to_window(target_value, window_start, window_stop), count);
}

static void parse_target_list(const char *text, const char *edge_kind, const char *source_entry,
                              const char *synthetic_start, uint64_t window_start,
                              uint64_t window_stop) {
    char buffer[4096];
    char *cursor = buffer;
    snprintf(buffer, sizeof(buffer), "%s", text ? text : "");
    if (!buffer[0] || strcmp(buffer, "-") == 0) {
        return;
    }
    while (cursor && *cursor) {
        char *next = strchr(cursor, ',');
        char *colon = NULL;
        uint64_t target = 0;
        unsigned count = 1;
        if (next) {
            *next++ = '\0';
        }
        while (*cursor && isspace((unsigned char)*cursor)) {
            cursor++;
        }
        colon = strchr(cursor, ':');
        if (colon) {
            *colon++ = '\0';
            count = (unsigned)strtoul(colon, NULL, 0);
            if (!count) {
                count = 1;
            }
        }
        target = parse_number(cursor);
        if (target) {
            add_target_edge(target, edge_kind, count, source_entry, synthetic_start,
                            window_start, window_stop);
        }
        cursor = next;
    }
}

static void load_atlas(const char *path) {
    FILE *file = fopen(path, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count;
    int c_source, c_start, c_disasm_start, c_disasm_stop, c_calls, c_jumps;
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
    c_source = find_col(header, header_count, "source_entry");
    c_start = find_col(header, header_count, "synthetic_start_vm_ip");
    c_disasm_start = find_col(header, header_count, "disasm_start");
    c_disasm_stop = find_col(header, header_count, "disasm_stop");
    c_calls = find_col(header, header_count, "call_targets");
    c_jumps = find_col(header, header_count, "jump_targets");
    if (c_source < 0 || c_start < 0 || c_disasm_start < 0 || c_disasm_stop < 0 ||
        c_calls < 0 || c_jumps < 0) {
        fprintf(stderr, "%s: required columns missing\n", path);
        exit(1);
    }
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int field_count;
        const char *source_entry;
        const char *synthetic_start;
        uint64_t window_start;
        uint64_t window_stop;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        field_count = split_tsv(line, fields, MAX_FIELDS);
        source_entry = field_at(fields, field_count, c_source);
        synthetic_start = field_at(fields, field_count, c_start);
        window_start = parse_number(field_at(fields, field_count, c_disasm_start));
        window_stop = parse_number(field_at(fields, field_count, c_disasm_stop));
        parse_target_list(field_at(fields, field_count, c_calls), "call", source_entry,
                          synthetic_start, window_start, window_stop);
        parse_target_list(field_at(fields, field_count, c_jumps), "jump", source_entry,
                          synthetic_start, window_start, window_stop);
    }
    free(line);
    fclose(file);
}

static int compare_targets(const void *lhs, const void *rhs) {
    const FollowupTarget *a = (const FollowupTarget *)lhs;
    const FollowupTarget *b = (const FollowupTarget *)rhs;
    if (a->target < b->target) {
        return -1;
    }
    if (a->target > b->target) {
        return 1;
    }
    return 0;
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
    printf("target\tsection\tclassification\tpriority\tedge_count\tedge_kind_mix\tsource_mix\trelation_mix\twindow_mix\tnote\n");
    for (size_t i = 0; i < g_target_count; i++) {
        char edges[MIX_TEXT], sources[MIX_TEXT], relations[MIX_TEXT], windows[MIX_TEXT];
        const FollowupTarget *target = &g_targets[i];
        mix_to_string(&target->edge_kind_mix, edges, sizeof(edges));
        mix_to_string(&target->source_mix, sources, sizeof(sources));
        mix_to_string(&target->relation_mix, relations, sizeof(relations));
        mix_to_string(&target->window_mix, windows, sizeof(windows));
        printf("0x%llx\t%s\t%s\t%s\t%u\t%s\t%s\t%s\t%s\t%s\n",
               (unsigned long long)target->target, section_name(target->target),
               target_classification(target), target_priority(target),
               target->total_edges, edges, sources, relations, windows,
               target_note(target));
    }
}

static void emit_markdown(void) {
    printf("# Native Ret-Patch Follow-Up Index\n\n");
    printf("Classifies direct call/jump follow-ups found inside the bounded native return-patch target windows.\n\n");
    printf("| target | section | class | priority | edges | sources | relation | note |\n");
    printf("| --- | --- | --- | --- | ---: | --- | --- | --- |\n");
    for (size_t i = 0; i < g_target_count; i++) {
        char sources[MIX_TEXT], relations[MIX_TEXT];
        const FollowupTarget *target = &g_targets[i];
        mix_to_string(&target->source_mix, sources, sizeof(sources));
        mix_to_string(&target->relation_mix, relations, sizeof(relations));
        printf("| `0x%llx` | `%s` | `%s` | `%s` | %u | `%s` | `%s` | ",
               (unsigned long long)target->target, section_name(target->target),
               target_classification(target), target_priority(target),
               target->total_edges, sources, relations);
        print_comment_text(target_note(target));
        printf(" |\n");
    }
}

static void emit_c_function(const FollowupTarget *target) {
    char edges[MIX_TEXT], sources[MIX_TEXT], relations[MIX_TEXT], windows[MIX_TEXT];
    mix_to_string(&target->edge_kind_mix, edges, sizeof(edges));
    mix_to_string(&target->source_mix, sources, sizeof(sources));
    mix_to_string(&target->relation_mix, relations, sizeof(relations));
    mix_to_string(&target->window_mix, windows, sizeof(windows));
    printf("static void followup_target_%llx(VMState *vm, const VMNativeRetPatchFollowup *edge) {\n",
           (unsigned long long)target->target);
    printf("    /* target=0x%llx; section=%s; class=%s; priority=%s */\n",
           (unsigned long long)target->target, section_name(target->target),
           target_classification(target), target_priority(target));
    printf("    /* edge_count=%u; edge_kind_mix=", target->total_edges);
    print_comment_text(edges);
    printf("; source_mix=");
    print_comment_text(sources);
    printf(" */\n");
    printf("    /* relation_mix=");
    print_comment_text(relations);
    printf(" */\n");
    printf("    /* windows=");
    print_comment_text(windows);
    printf(" */\n");
    printf("    /* note: ");
    print_comment_text(target_note(target));
    printf(" */\n");
    printf("    vm_note_ret_patch_followup(vm, edge, 0x%llxu, \"%s\", \"%s\");\n",
           (unsigned long long)target->target, target_classification(target),
           target_priority(target));
    printf("}\n\n");
}

static void emit_c(void) {
    printf("/*\n");
    printf(" * Native return-patch follow-up classifier.\n");
    printf(" *\n");
    printf(" * Generated by vm_native_ret_patch_followups_dump.c from %s.\n", ATLAS_PATH);
    printf(" * This C-shaped evidence layer indexes the direct call/jump targets that\n");
    printf(" * appear inside bounded native return-patch windows. It deliberately\n");
    printf(" * distinguishes local epilogue branches, PLT/runtime calls, allocator\n");
    printf(" * wrappers, internal helpers, and native obfuscation islands from VM CFG\n");
    printf(" * successors.\n");
    printf(" */\n");
    printf("#include <stdint.h>\n\n");
    printf("typedef struct VMState {\n");
    printf("    uint8_t *ip;\n");
    printf("    uint32_t state;\n");
    printf("    uint32_t flags;\n");
    printf("    uint8_t byte;\n");
    printf("} VMState;\n\n");
    printf("typedef struct VMNativeRetPatchFollowup {\n");
    printf("    uint64_t source_entry;\n");
    printf("    uint64_t synthetic_start_vm_ip;\n");
    printf("    uint32_t patched_ret_eac_off;\n");
    printf("    const char *edge_kind;\n");
    printf("} VMNativeRetPatchFollowup;\n\n");
    printf("static void vm_note_ret_patch_followup(VMState *vm, const VMNativeRetPatchFollowup *edge,\n");
    printf("                                       uint32_t target, const char *classification,\n");
    printf("                                       const char *priority) {\n");
    printf("    (void)vm;\n");
    printf("    (void)edge;\n");
    printf("    (void)target;\n");
    printf("    (void)classification;\n");
    printf("    (void)priority;\n");
    printf("}\n\n");
    for (size_t i = 0; i < g_target_count; i++) {
        emit_c_function(&g_targets[i]);
    }
    printf("void vm_native_ret_patch_followup(VMState *vm, uint32_t target,\n");
    printf("                                  const VMNativeRetPatchFollowup *edge) {\n");
    printf("    switch (target) {\n");
    for (size_t i = 0; i < g_target_count; i++) {
        printf("    case 0x%llxu:\n", (unsigned long long)g_targets[i].target);
        printf("        followup_target_%llx(vm, edge);\n", (unsigned long long)g_targets[i].target);
        printf("        break;\n");
    }
    printf("    default:\n");
    printf("        vm_note_ret_patch_followup(vm, edge, target, \"unknown_followup\", \"needs_static_audit\");\n");
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
    load_atlas(ATLAS_PATH);
    qsort(g_targets, g_target_count, sizeof(g_targets[0]), compare_targets);
    if (mode == MODE_TSV) {
        emit_tsv();
    } else if (mode == MODE_MARKDOWN) {
        emit_markdown();
    } else {
        emit_c();
    }
    return 0;
}
