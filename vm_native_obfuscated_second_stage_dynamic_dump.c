#define _GNU_SOURCE
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SECOND_STAGE_PATH "dumps/vmtail-wide-1m-w16/vm_native_obfuscated_second_stage.tsv"
#define HANDLER_TABLE_PATH "dumps/vmtail-wide-1m-w16/vm_handler_table.tsv"
#define MAX_FIELDS 64
#define MAX_LINE 65536
#define MAX_MIX 256
#define MAX_HANDLERS 512
#define MIX_TEXT 8192

typedef struct {
    char key[128];
    unsigned count;
} MixItem;

typedef struct {
    MixItem items[MAX_MIX];
    size_t count;
} Mix;

typedef struct {
    uint64_t entry;
    uint64_t target;
} HandlerTarget;

typedef struct {
    const char *label;
    const char *path;
} EvidenceRun;

typedef struct {
    uint64_t entry;
    uint64_t site;
    char chain[128];
    char static_status[128];
    char static_next_action[160];
    char first_stage_entries[256];
    char source_mix[512];
    char first_stage_windows[1024];
    unsigned hits;
    Mix target_mix;
    Mix target_entry_mix;
    Mix slot_entry_mix;
    Mix slot_target_check_mix;
    Mix slot_mix;
    Mix idx_mix;
    Mix vm_ip_mix;
    Mix run_mix;
} DynamicSite;

static HandlerTarget g_handlers[MAX_HANDLERS];
static size_t g_handler_count = 0;

static DynamicSite g_sites[] = {
    {.entry = 0xc9849, .site = 0xcad88},
    {.entry = 0xcaf2a, .site = 0xcc3f5},
    {.entry = 0xc4258, .site = 0xc559d},
    {.entry = 0xc57b8, .site = 0xc6bce},
    {.entry = 0xc6d58, .site = 0xc80b9},
};

static const EvidenceRun k_runs[] = {
    {"focus_cad88", "dumps/dispatch-obf-cad88/run.stderr"},
    {"focus_cc3f5", "dumps/dispatch-obf-cc3f5/run.stderr"},
    {"focus_c559d", "dumps/dispatch-obf-second-stage/run.stderr"},
    {"focus_c6bce", "dumps/dispatch-obf-c6bce/run.stderr"},
    {"focus_c80b9", "dumps/dispatch-obf-c80b9/run.stderr"},
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

static void hex64(char *out, size_t out_size, uint64_t value) {
    snprintf(out, out_size, "0x%llx", (unsigned long long)value);
}

static void mix_add(Mix *mix, const char *key, unsigned count) {
    if (!key || !key[0] || strcmp(key, "-") == 0 || count == 0) {
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

static DynamicSite *find_site_by_entry(uint64_t entry) {
    for (size_t i = 0; i < sizeof(g_sites) / sizeof(g_sites[0]); i++) {
        if (g_sites[i].entry == entry) {
            return &g_sites[i];
        }
    }
    return NULL;
}

static DynamicSite *find_site_by_dispatch(uint64_t site) {
    for (size_t i = 0; i < sizeof(g_sites) / sizeof(g_sites[0]); i++) {
        if (g_sites[i].site == site) {
            return &g_sites[i];
        }
    }
    return NULL;
}

static int cmp_handler_target(const void *left, const void *right) {
    const HandlerTarget *a = (const HandlerTarget *)left;
    const HandlerTarget *b = (const HandlerTarget *)right;
    if (a->target < b->target) {
        return -1;
    }
    if (a->target > b->target) {
        return 1;
    }
    if (a->entry < b->entry) {
        return -1;
    }
    if (a->entry > b->entry) {
        return 1;
    }
    return 0;
}

static const HandlerTarget *find_handler_by_target(uint64_t target) {
    for (size_t i = 0; i < g_handler_count; i++) {
        if (g_handlers[i].target == target) {
            return &g_handlers[i];
        }
    }
    return NULL;
}

static const HandlerTarget *find_handler_by_entry(uint64_t entry) {
    for (size_t i = 0; i < g_handler_count; i++) {
        if (g_handlers[i].entry == entry) {
            return &g_handlers[i];
        }
    }
    return NULL;
}

static void handler_label_for_target(uint64_t target, char *out, size_t out_size) {
    const HandlerTarget *handler = find_handler_by_target(target);
    if (handler) {
        snprintf(out, out_size, "%llu@0x%llx",
                 (unsigned long long)handler->entry,
                 (unsigned long long)target);
    } else {
        snprintf(out, out_size, "native@0x%llx", (unsigned long long)target);
    }
}

static void load_handler_table(const char *path) {
    FILE *file = fopen(path, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count;
    int c_entry, c_target;
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
    c_target = find_col(header, header_count, "target");
    if (c_entry < 0 || c_target < 0) {
        fprintf(stderr, "%s: required columns missing\n", path);
        exit(1);
    }
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int field_count;
        if (g_handler_count >= MAX_HANDLERS) {
            fprintf(stderr, "too many handler rows\n");
            exit(1);
        }
        chomp(line);
        if (!line[0]) {
            continue;
        }
        field_count = split_tsv(line, fields, MAX_FIELDS);
        g_handlers[g_handler_count].entry = parse_number(field_at(fields, field_count, c_entry));
        g_handlers[g_handler_count].target = parse_number(field_at(fields, field_count, c_target));
        g_handler_count++;
    }
    free(line);
    fclose(file);
    qsort(g_handlers, g_handler_count, sizeof(g_handlers[0]), cmp_handler_target);
}

static void load_second_stage_static(const char *path) {
    FILE *file = fopen(path, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count;
    int c_entry, c_site, c_chain, c_status, c_next_action;
    int c_first_stage, c_source_mix, c_windows;
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
    c_site = find_col(header, header_count, "indirect_jmp_site");
    c_chain = find_col(header, header_count, "chain");
    c_status = find_col(header, header_count, "status");
    c_next_action = find_col(header, header_count, "next_action");
    c_first_stage = find_col(header, header_count, "first_stage_entries");
    c_source_mix = find_col(header, header_count, "source_mix");
    c_windows = find_col(header, header_count, "first_stage_windows");
    if (c_entry < 0 || c_site < 0 || c_chain < 0 || c_status < 0 ||
        c_next_action < 0 || c_first_stage < 0 || c_source_mix < 0 || c_windows < 0) {
        fprintf(stderr, "%s: required columns missing\n", path);
        exit(1);
    }
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int field_count;
        uint64_t entry, site;
        DynamicSite *row;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        field_count = split_tsv(line, fields, MAX_FIELDS);
        entry = parse_number(field_at(fields, field_count, c_entry));
        site = parse_number(field_at(fields, field_count, c_site));
        row = find_site_by_entry(entry);
        if (!row) {
            continue;
        }
        if (row->site != site) {
            fprintf(stderr, "%s: site mismatch for 0x%llx: expected 0x%llx got 0x%llx\n",
                    path, (unsigned long long)entry,
                    (unsigned long long)row->site, (unsigned long long)site);
            exit(1);
        }
        copy_field(row->chain, sizeof(row->chain), field_at(fields, field_count, c_chain));
        copy_field(row->static_status, sizeof(row->static_status), field_at(fields, field_count, c_status));
        copy_field(row->static_next_action, sizeof(row->static_next_action),
                   field_at(fields, field_count, c_next_action));
        copy_field(row->first_stage_entries, sizeof(row->first_stage_entries),
                   field_at(fields, field_count, c_first_stage));
        copy_field(row->source_mix, sizeof(row->source_mix), field_at(fields, field_count, c_source_mix));
        copy_field(row->first_stage_windows, sizeof(row->first_stage_windows),
                   field_at(fields, field_count, c_windows));
    }
    free(line);
    fclose(file);
}

static bool parse_token_u64(const char *line, const char *key, uint64_t *out) {
    const char *pos = strstr(line, key);
    char *end = NULL;
    if (!pos) {
        return false;
    }
    pos += strlen(key);
    *out = strtoull(pos, &end, 0);
    return end != pos;
}

static void record_dispatch_line(DynamicSite *site, const char *run_label, const char *line) {
    uint64_t target = 0;
    uint64_t slot = 0;
    uint64_t idx = 0;
    uint64_t vm_ip = 0;
    char key[128];
    char handler_key[160];
    char slot_entry_key[160];

    if (!parse_token_u64(line, "target_off=", &target)) {
        return;
    }
    site->hits++;
    hex64(key, sizeof(key), target);
    mix_add(&site->target_mix, key, 1);
    handler_label_for_target(target, handler_key, sizeof(handler_key));
    mix_add(&site->target_entry_mix, handler_key, 1);
    if (parse_token_u64(line, "slot_off=", &slot)) {
        hex64(key, sizeof(key), slot);
        mix_add(&site->slot_mix, key, 1);
    }
    if (parse_token_u64(line, "idx=", &idx)) {
        hex64(key, sizeof(key), idx);
        mix_add(&site->idx_mix, key, 1);
        if ((idx & 7ull) == 0) {
            uint64_t entry = idx >> 3;
            const HandlerTarget *handler = find_handler_by_entry(entry);
            snprintf(slot_entry_key, sizeof(slot_entry_key), "%llu@0x%llx",
                     (unsigned long long)entry, (unsigned long long)target);
            mix_add(&site->slot_entry_mix, slot_entry_key, 1);
            if (handler && handler->target == target) {
                mix_add(&site->slot_target_check_mix, "slot_index_matches_handler_target", 1);
            } else if (handler) {
                mix_add(&site->slot_target_check_mix, "slot_index_target_mismatch", 1);
            } else {
                mix_add(&site->slot_target_check_mix, "slot_index_unknown_handler", 1);
            }
        } else {
            mix_add(&site->slot_target_check_mix, "unaligned_slot_index", 1);
        }
    }
    if (parse_token_u64(line, "vm_ip_off=", &vm_ip)) {
        hex64(key, sizeof(key), vm_ip);
        mix_add(&site->vm_ip_mix, key, 1);
    }
    mix_add(&site->run_mix, run_label, 1);
}

static void load_dispatch_run(const EvidenceRun *run) {
    FILE *file = fopen(run->path, "r");
    char line[MAX_LINE];
    if (!file) {
        perror(run->path);
        exit(1);
    }
    while (fgets(line, sizeof(line), file)) {
        uint64_t site_value = 0;
        DynamicSite *site;
        if (!strstr(line, "[DISPATCH]")) {
            continue;
        }
        if (!parse_token_u64(line, "site=", &site_value)) {
            continue;
        }
        site = find_site_by_dispatch(site_value);
        if (!site) {
            continue;
        }
        record_dispatch_line(site, run->label, line);
    }
    fclose(file);
}

static const char *dynamic_status(const DynamicSite *site) {
    return site->hits ? "dynamic_computed_targets_observed" : "missing_dynamic_evidence";
}

static const char *dynamic_next_action(const DynamicSite *site) {
    (void)site;
    return "promote_observed_target_mix_then_symbolically_solve_uncovered_slots";
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

static void site_mix_strings(const DynamicSite *site,
                             char *target_mix, char *target_entry_mix,
                             char *slot_entry_mix, char *slot_target_check_mix,
                             char *slot_mix, char *idx_mix,
                             char *vm_ip_mix, char *run_mix) {
    mix_to_string(&site->target_mix, target_mix, MIX_TEXT);
    mix_to_string(&site->target_entry_mix, target_entry_mix, MIX_TEXT);
    mix_to_string(&site->slot_entry_mix, slot_entry_mix, MIX_TEXT);
    mix_to_string(&site->slot_target_check_mix, slot_target_check_mix, MIX_TEXT);
    mix_to_string(&site->slot_mix, slot_mix, MIX_TEXT);
    mix_to_string(&site->idx_mix, idx_mix, MIX_TEXT);
    mix_to_string(&site->vm_ip_mix, vm_ip_mix, MIX_TEXT);
    mix_to_string(&site->run_mix, run_mix, MIX_TEXT);
}

static void emit_tsv(void) {
    printf("entry\tindirect_jmp_site\thit_count\tunique_targets\ttarget_mix\ttarget_entry_mix\tslot_entry_mix\tslot_target_check_mix\tslot_mix\tidx_mix\tvm_ip_mix\trun_mix\tchain\tstatic_status\tstatic_next_action\tdynamic_status\tdynamic_next_action\tfirst_stage_entries\tsource_mix\tfirst_stage_windows\tnote\n");
    for (size_t i = 0; i < sizeof(g_sites) / sizeof(g_sites[0]); i++) {
        const DynamicSite *site = &g_sites[i];
        char target_mix[MIX_TEXT], target_entry_mix[MIX_TEXT], slot_entry_mix[MIX_TEXT];
        char slot_target_check_mix[MIX_TEXT], slot_mix[MIX_TEXT];
        char idx_mix[MIX_TEXT], vm_ip_mix[MIX_TEXT], run_mix[MIX_TEXT];
        site_mix_strings(site, target_mix, target_entry_mix, slot_entry_mix, slot_target_check_mix,
                         slot_mix, idx_mix, vm_ip_mix, run_mix);
        printf("0x%llx\t0x%llx\t%u\t%zu\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",
               (unsigned long long)site->entry,
               (unsigned long long)site->site,
               site->hits,
               site->target_mix.count,
               target_mix,
               target_entry_mix,
               slot_entry_mix,
               slot_target_check_mix,
               slot_mix,
               idx_mix,
               vm_ip_mix,
               run_mix,
               site->chain[0] ? site->chain : "-",
               site->static_status[0] ? site->static_status : "-",
               site->static_next_action[0] ? site->static_next_action : "-",
               dynamic_status(site),
               dynamic_next_action(site),
               site->first_stage_entries[0] ? site->first_stage_entries : "-",
               site->source_mix[0] ? site->source_mix : "-",
               site->first_stage_windows[0] ? site->first_stage_windows : "-",
               "bounded_driver_trace_under_fake_launcher_fast_exit;target_mix_is_observed_not_static_exhaustive");
    }
}

static void emit_markdown(void) {
    printf("# Native Obfuscated Second-Stage Dynamic Dispatch\n\n");
    printf("Indexes bounded driver traces for the five computed `jmp [rax]` sites emitted by `vm_native_obfuscated_second_stage.c`.\n\n");
    printf("| entry | site | hits | observed targets | slot entries | slot check | evidence runs | status |\n");
    printf("| --- | --- | ---: | --- | --- | --- | --- | --- |\n");
    for (size_t i = 0; i < sizeof(g_sites) / sizeof(g_sites[0]); i++) {
        const DynamicSite *site = &g_sites[i];
        char target_mix[MIX_TEXT], target_entry_mix[MIX_TEXT], slot_entry_mix[MIX_TEXT];
        char slot_target_check_mix[MIX_TEXT], slot_mix[MIX_TEXT];
        char idx_mix[MIX_TEXT], vm_ip_mix[MIX_TEXT], run_mix[MIX_TEXT];
        site_mix_strings(site, target_mix, target_entry_mix, slot_entry_mix, slot_target_check_mix,
                         slot_mix, idx_mix, vm_ip_mix, run_mix);
        (void)target_entry_mix;
        (void)idx_mix;
        (void)vm_ip_mix;
        (void)slot_mix;
        printf("| `0x%llx` | `0x%llx` | %u | `%s` | `%s` | `%s` | `%s` | `%s` |\n",
               (unsigned long long)site->entry,
               (unsigned long long)site->site,
               site->hits,
               target_mix,
               slot_entry_mix,
               slot_target_check_mix,
               run_mix,
               dynamic_status(site));
    }
}

static void emit_c_function(const DynamicSite *site) {
    char target_mix[MIX_TEXT], target_entry_mix[MIX_TEXT], slot_entry_mix[MIX_TEXT];
    char slot_target_check_mix[MIX_TEXT], slot_mix[MIX_TEXT];
    char idx_mix[MIX_TEXT], vm_ip_mix[MIX_TEXT], run_mix[MIX_TEXT];
    site_mix_strings(site, target_mix, target_entry_mix, slot_entry_mix, slot_target_check_mix,
                     slot_mix, idx_mix, vm_ip_mix, run_mix);
    printf("static void second_stage_dynamic_%llx(VMState *vm, const VMSecondStageDynamicDispatch *edge) {\n",
           (unsigned long long)site->site);
    printf("    /* entry=0x%llx; indirect_jmp_site=0x%llx; chain=",
           (unsigned long long)site->entry,
           (unsigned long long)site->site);
    print_comment_text(site->chain[0] ? site->chain : "-");
    printf(" */\n");
    printf("    /* first_stage_entries=");
    print_comment_text(site->first_stage_entries[0] ? site->first_stage_entries : "-");
    printf("; source_mix=");
    print_comment_text(site->source_mix[0] ? site->source_mix : "-");
    printf("; first_stage_windows=");
    print_comment_text(site->first_stage_windows[0] ? site->first_stage_windows : "-");
    printf(" */\n");
    printf("    /* dynamic_target_mix=");
    print_comment_text(target_mix);
    printf("; target_entry_mix=");
    print_comment_text(target_entry_mix);
    printf(" */\n");
    printf("    /* slot_entry_mix=");
    print_comment_text(slot_entry_mix);
    printf("; slot_target_check_mix=");
    print_comment_text(slot_target_check_mix);
    printf(" */\n");
    printf("    /* slot_mix=");
    print_comment_text(slot_mix);
    printf("; idx_mix=");
    print_comment_text(idx_mix);
    printf("; vm_ip_mix=");
    print_comment_text(vm_ip_mix);
    printf("; runs=");
    print_comment_text(run_mix);
    printf(" */\n");
    printf("    vm_note_second_stage_dynamic(vm, edge, 0x%llxu, 0x%llxu, %uu, ",
           (unsigned long long)site->entry,
           (unsigned long long)site->site,
           site->hits);
    print_c_string(target_mix);
    printf(", ");
    print_c_string(target_entry_mix);
    printf(", ");
    print_c_string(dynamic_status(site));
    printf(", ");
    print_c_string(dynamic_next_action(site));
    printf(");\n");
    printf("}\n\n");
}

static void emit_c(void) {
    printf("/*\n");
    printf(" * Native obfuscated second-stage dynamic dispatch index.\n");
    printf(" *\n");
    printf(" * Generated by vm_native_obfuscated_second_stage_dynamic_dump.c from\n");
    printf(" * %s plus focused driver dispatch logs.\n", SECOND_STAGE_PATH);
    printf(" * It records observed computed jmp [rax] targets for the five remaining\n");
    printf(" * second-stage obfuscated thunks. The observations are bounded runtime\n");
    printf(" * evidence, not proof that every config/environment successor is covered.\n");
    printf(" */\n");
    printf("#include <stdint.h>\n\n");
    printf("typedef struct VMState {\n");
    printf("    uint8_t *ip;\n");
    printf("    uint32_t state;\n");
    printf("    uint32_t flags;\n");
    printf("    uint8_t byte;\n");
    printf("} VMState;\n\n");
    printf("typedef struct VMSecondStageDynamicDispatch {\n");
    printf("    uint32_t entry;\n");
    printf("    uint32_t indirect_jmp_site;\n");
    printf("    const char *first_stage_entries;\n");
    printf("    const char *source_mix;\n");
    printf("} VMSecondStageDynamicDispatch;\n\n");
    printf("static void vm_note_second_stage_dynamic(VMState *vm,\n");
    printf("                                             const VMSecondStageDynamicDispatch *edge,\n");
    printf("                                             uint32_t entry, uint32_t site,\n");
    printf("                                             unsigned hit_count,\n");
    printf("                                             const char *target_mix,\n");
    printf("                                             const char *target_entry_mix,\n");
    printf("                                             const char *status,\n");
    printf("                                             const char *next_action) {\n");
    printf("    (void)vm;\n");
    printf("    (void)edge;\n");
    printf("    (void)entry;\n");
    printf("    (void)site;\n");
    printf("    (void)hit_count;\n");
    printf("    (void)target_mix;\n");
    printf("    (void)target_entry_mix;\n");
    printf("    (void)status;\n");
    printf("    (void)next_action;\n");
    printf("}\n\n");
    for (size_t i = 0; i < sizeof(g_sites) / sizeof(g_sites[0]); i++) {
        emit_c_function(&g_sites[i]);
    }
    printf("void vm_native_obfuscated_second_stage_dynamic(VMState *vm, uint32_t indirect_jmp_site,\n");
    printf("                                                const VMSecondStageDynamicDispatch *edge) {\n");
    printf("    switch (indirect_jmp_site) {\n");
    for (size_t i = 0; i < sizeof(g_sites) / sizeof(g_sites[0]); i++) {
        printf("    case 0x%llxu:\n", (unsigned long long)g_sites[i].site);
        printf("        second_stage_dynamic_%llx(vm, edge);\n", (unsigned long long)g_sites[i].site);
        printf("        break;\n");
    }
    printf("    default:\n");
    printf("        vm_note_second_stage_dynamic(vm, edge, 0, indirect_jmp_site, 0,\n");
    printf("                                     \"-\", \"-\", \"unknown_second_stage_dispatch_site\",\n");
    printf("                                     \"instrument_site_or_add_to_static_thunk_index\");\n");
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
    load_handler_table(HANDLER_TABLE_PATH);
    load_second_stage_static(SECOND_STAGE_PATH);
    for (size_t i = 0; i < sizeof(k_runs) / sizeof(k_runs[0]); i++) {
        load_dispatch_run(&k_runs[i]);
    }
    if (mode == MODE_TSV) {
        emit_tsv();
    } else if (mode == MODE_MARKDOWN) {
        emit_markdown();
    } else {
        emit_c();
    }
    return 0;
}
