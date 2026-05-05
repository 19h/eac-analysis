#define _GNU_SOURCE
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_OBS 32
#define MAX_LINE 65536
#define MIX_TEXT 4096

typedef struct {
    uint64_t entry;
    uint64_t dispatch_site;
    uint64_t push_site;
    uint64_t load_site;
    uint64_t shift_site;
    const char *label;
    const char *run_path;
} SiteSpec;

typedef struct {
    unsigned count;
    bool have_push;
    bool have_load;
    bool have_shift;
    bool have_dispatch;
    uint64_t push_sp88;
    uint64_t push_sp90;
    uint64_t load_sp0;
    uint64_t shift_rbx;
    uint64_t shift_sp88;
    uint64_t dispatch_idx;
    uint64_t dispatch_target;
    uint64_t dispatch_vm_ip;
} Observation;

typedef struct {
    char key[128];
    unsigned count;
} MixItem;

typedef struct {
    MixItem items[64];
    size_t count;
} Mix;

typedef struct {
    const SiteSpec *spec;
    Observation obs[MAX_OBS];
    size_t obs_count;
    Mix handler_mix;
    Mix target_mix;
    unsigned complete_rows;
    unsigned push_to_shift_matches;
    unsigned load_to_shift_matches;
    unsigned shift_to_dispatch_matches;
    unsigned vm_ip_matches;
} SiteResult;

static const SiteSpec k_sites[] = {
    {0xc9849, 0xcad88, 0xcaca3, 0xcacb0, 0xcacf1, "cad88", "dumps/probe-obf-rbx-cad88/run.stderr"},
    {0xcaf2a, 0xcc3f5, 0xcc31c, 0xcc326, 0xcc36a, "cc3f5", "dumps/probe-obf-rbx-cc3f5/run.stderr"},
    {0xc4258, 0xc559d, 0xc54c6, 0xc54d3, 0xc5512, "c559d", "dumps/probe-obf-rbx-c559d/run.stderr"},
    {0xc57b8, 0xc6bce, 0xc6afc, 0xc6b09, 0xc6b43, "c6bce", "dumps/probe-obf-rbx-c6bce/run.stderr"},
    {0xc6d58, 0xc80b9, 0xc7fdc, 0xc7fe6, 0xc802e, "c80b9", "dumps/probe-obf-rbx-c80b9/run.stderr"},
};

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

static Observation *find_or_add_obs(SiteResult *result, unsigned count) {
    for (size_t i = 0; i < result->obs_count; i++) {
        if (result->obs[i].count == count) {
            return &result->obs[i];
        }
    }
    if (result->obs_count >= MAX_OBS) {
        fprintf(stderr, "%s: too many observations\n", result->spec->label);
        exit(1);
    }
    memset(&result->obs[result->obs_count], 0, sizeof(result->obs[result->obs_count]));
    result->obs[result->obs_count].count = count;
    return &result->obs[result->obs_count++];
}

static void mix_add(Mix *mix, const char *key) {
    if (!key || !key[0] || strcmp(key, "-") == 0) {
        return;
    }
    for (size_t i = 0; i < mix->count; i++) {
        if (strcmp(mix->items[i].key, key) == 0) {
            mix->items[i].count++;
            return;
        }
    }
    if (mix->count >= sizeof(mix->items) / sizeof(mix->items[0])) {
        fprintf(stderr, "too many mix values for %s\n", key);
        exit(1);
    }
    snprintf(mix->items[mix->count].key, sizeof(mix->items[mix->count].key), "%s", key);
    mix->items[mix->count].count = 1;
    mix->count++;
}

static void hex_key(char *out, size_t out_size, uint64_t value) {
    snprintf(out, out_size, "0x%llx", (unsigned long long)value);
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

static void load_site_result(SiteResult *result) {
    FILE *file = fopen(result->spec->run_path, "r");
    char line[MAX_LINE];
    if (!file) {
        perror(result->spec->run_path);
        exit(1);
    }
    while (fgets(line, sizeof(line), file)) {
        uint64_t site = 0;
        uint64_t count64 = 0;
        Observation *obs;
        if (strstr(line, "[PROBE]")) {
            if (!parse_token_u64(line, "site=", &site) || !parse_token_u64(line, "count=", &count64)) {
                continue;
            }
            obs = find_or_add_obs(result, (unsigned)count64);
            if (site == result->spec->push_site) {
                obs->have_push = true;
                (void)parse_token_u64(line, "sp0x88=", &obs->push_sp88);
                (void)parse_token_u64(line, "sp0x90=", &obs->push_sp90);
            } else if (site == result->spec->load_site) {
                obs->have_load = true;
                (void)parse_token_u64(line, "sp0x0=", &obs->load_sp0);
            } else if (site == result->spec->shift_site) {
                obs->have_shift = true;
                (void)parse_token_u64(line, "rbx=", &obs->shift_rbx);
                (void)parse_token_u64(line, "sp0x88=", &obs->shift_sp88);
            }
        } else if (strstr(line, "[DISPATCH]")) {
            if (!parse_token_u64(line, "site=", &site) || site != result->spec->dispatch_site ||
                !parse_token_u64(line, "count=", &count64)) {
                continue;
            }
            obs = find_or_add_obs(result, (unsigned)count64);
            obs->have_dispatch = true;
            (void)parse_token_u64(line, "idx=", &obs->dispatch_idx);
            (void)parse_token_u64(line, "target_off=", &obs->dispatch_target);
            (void)parse_token_u64(line, "vm_ip_off=", &obs->dispatch_vm_ip);
        }
    }
    fclose(file);
}

static void finalize_result(SiteResult *result) {
    for (size_t i = 0; i < result->obs_count; i++) {
        Observation *obs = &result->obs[i];
        char key[64];
        if (obs->have_push && obs->have_load && obs->have_shift && obs->have_dispatch) {
            result->complete_rows++;
        }
        if (obs->have_push && obs->have_shift && obs->push_sp88 == obs->shift_rbx &&
            obs->shift_sp88 == obs->shift_rbx) {
            result->push_to_shift_matches++;
        }
        if (obs->have_load && obs->have_shift && obs->load_sp0 == obs->shift_rbx) {
            result->load_to_shift_matches++;
        }
        if (obs->have_shift && obs->have_dispatch && (obs->shift_rbx << 3) == obs->dispatch_idx) {
            result->shift_to_dispatch_matches++;
        }
        if (obs->have_push && obs->have_dispatch && obs->push_sp90 == obs->dispatch_vm_ip) {
            result->vm_ip_matches++;
        }
        if (obs->have_shift) {
            hex_key(key, sizeof(key), obs->shift_rbx);
            mix_add(&result->handler_mix, key);
        }
        if (obs->have_dispatch) {
            hex_key(key, sizeof(key), obs->dispatch_target);
            mix_add(&result->target_mix, key);
        }
    }
}

static const char *result_status(const SiteResult *result) {
    if (result->complete_rows == result->obs_count &&
        result->push_to_shift_matches == result->obs_count &&
        result->load_to_shift_matches == result->obs_count &&
        result->shift_to_dispatch_matches == result->obs_count &&
        result->vm_ip_matches == result->obs_count &&
        result->obs_count > 0) {
        return "rbx_stack_entry_to_dispatch_index_proven_for_observed_hits";
    }
    return "rbx_stack_entry_provenance_incomplete";
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

static void emit_tsv(const SiteResult *results, size_t count) {
    printf("entry\tindirect_jmp_site\tpush_site\tload_site\tshift_site\tobserved_rows\thandler_entry_mix\ttarget_mix\tcomplete_rows\tpush_sp88_to_shift_rbx_matches\tload_sp0_to_shift_rbx_matches\tshift_rbx_to_dispatch_idx_matches\tpush_sp90_to_dispatch_vm_ip_matches\tstatus\tnote\n");
    for (size_t i = 0; i < count; i++) {
        char handler_mix[MIX_TEXT], target_mix[MIX_TEXT];
        const SiteResult *r = &results[i];
        mix_to_string(&r->handler_mix, handler_mix, sizeof(handler_mix));
        mix_to_string(&r->target_mix, target_mix, sizeof(target_mix));
        printf("0x%llx\t0x%llx\t0x%llx\t0x%llx\t0x%llx\t%zu\t%s\t%s\t%u\t%u\t%u\t%u\t%u\t%s\t%s\n",
               (unsigned long long)r->spec->entry,
               (unsigned long long)r->spec->dispatch_site,
               (unsigned long long)r->spec->push_site,
               (unsigned long long)r->spec->load_site,
               (unsigned long long)r->spec->shift_site,
               r->obs_count,
               handler_mix,
               target_mix,
               r->complete_rows,
               r->push_to_shift_matches,
               r->load_to_shift_matches,
               r->shift_to_dispatch_matches,
               r->vm_ip_matches,
               result_status(r),
               "probe_single_step_evidence;push_sp88_is_handler_entry;shift_rbx_times_8_is_dispatch_idx");
    }
}

static void emit_markdown(const SiteResult *results, size_t count) {
    printf("# Native Obfuscated Second-Stage RBX Provenance\n\n");
    printf("Single-step probe evidence for the upstream handler entry loaded into `rbx` before the proven `rbx << 3` dispatch-table addressing formula.\n\n");
    printf("| entry | site | rows | handler entries | targets | checks | status |\n");
    printf("| --- | --- | ---: | --- | --- | --- | --- |\n");
    for (size_t i = 0; i < count; i++) {
        char handler_mix[MIX_TEXT], target_mix[MIX_TEXT], checks[256];
        const SiteResult *r = &results[i];
        mix_to_string(&r->handler_mix, handler_mix, sizeof(handler_mix));
        mix_to_string(&r->target_mix, target_mix, sizeof(target_mix));
        snprintf(checks, sizeof(checks), "push:%u load:%u shift:%u vmip:%u",
                 r->push_to_shift_matches, r->load_to_shift_matches,
                 r->shift_to_dispatch_matches, r->vm_ip_matches);
        printf("| `0x%llx` | `0x%llx` | %zu | `%s` | `%s` | `%s` | `%s` |\n",
               (unsigned long long)r->spec->entry,
               (unsigned long long)r->spec->dispatch_site,
               r->obs_count,
               handler_mix,
               target_mix,
               checks,
               result_status(r));
    }
}

static void emit_c_function(const SiteResult *r) {
    char handler_mix[MIX_TEXT], target_mix[MIX_TEXT];
    mix_to_string(&r->handler_mix, handler_mix, sizeof(handler_mix));
    mix_to_string(&r->target_mix, target_mix, sizeof(target_mix));
    printf("static void second_stage_rbx_provenance_%llx(VMState *vm, const VMSecondStageRBXProvenance *edge) {\n",
           (unsigned long long)r->spec->dispatch_site);
    printf("    /* entry=0x%llx; dispatch_site=0x%llx; push_site=0x%llx; load_site=0x%llx; shift_site=0x%llx */\n",
           (unsigned long long)r->spec->entry,
           (unsigned long long)r->spec->dispatch_site,
           (unsigned long long)r->spec->push_site,
           (unsigned long long)r->spec->load_site,
           (unsigned long long)r->spec->shift_site);
    printf("    /* handler_entry_mix=");
    print_comment_text(handler_mix);
    printf("; target_mix=");
    print_comment_text(target_mix);
    printf("; complete=%u; push_match=%u; load_match=%u; shift_match=%u; vmip_match=%u */\n",
           r->complete_rows, r->push_to_shift_matches, r->load_to_shift_matches,
           r->shift_to_dispatch_matches, r->vm_ip_matches);
    printf("    vm_note_second_stage_rbx_provenance(vm, edge, 0x%llxu, 0x%llxu, %zuu, ",
           (unsigned long long)r->spec->entry,
           (unsigned long long)r->spec->dispatch_site,
           r->obs_count);
    print_c_string(handler_mix);
    printf(", ");
    print_c_string(result_status(r));
    printf(");\n");
    printf("}\n\n");
}

static void emit_c(const SiteResult *results, size_t count) {
    printf("/*\n");
    printf(" * Native obfuscated second-stage RBX provenance evidence.\n");
    printf(" *\n");
    printf(" * Generated by vm_native_obfuscated_second_stage_rbx_provenance_dump.c\n");
    printf(" * from generic single-step probe logs. It proves, for observed hits, that\n");
    printf(" * push 0x88(%%rsp) carries the handler entry, the rbx load receives that\n");
    printf(" * value, and the later dispatch idx is rbx << 3.\n");
    printf(" */\n");
    printf("#include <stdint.h>\n\n");
    printf("typedef struct VMState {\n");
    printf("    uint8_t *ip;\n");
    printf("    uint32_t state;\n");
    printf("    uint32_t flags;\n");
    printf("    uint8_t byte;\n");
    printf("} VMState;\n\n");
    printf("typedef struct VMSecondStageRBXProvenance {\n");
    printf("    uint32_t entry;\n");
    printf("    uint32_t indirect_jmp_site;\n");
    printf("    const char *handler_entry_mix;\n");
    printf("} VMSecondStageRBXProvenance;\n\n");
    printf("static void vm_note_second_stage_rbx_provenance(VMState *vm,\n");
    printf("                                                    const VMSecondStageRBXProvenance *edge,\n");
    printf("                                                    uint32_t entry, uint32_t site,\n");
    printf("                                                    unsigned observed_rows,\n");
    printf("                                                    const char *handler_entry_mix,\n");
    printf("                                                    const char *status) {\n");
    printf("    (void)vm;\n");
    printf("    (void)edge;\n");
    printf("    (void)entry;\n");
    printf("    (void)site;\n");
    printf("    (void)observed_rows;\n");
    printf("    (void)handler_entry_mix;\n");
    printf("    (void)status;\n");
    printf("}\n\n");
    for (size_t i = 0; i < count; i++) {
        emit_c_function(&results[i]);
    }
    printf("void vm_native_obfuscated_second_stage_rbx_provenance(VMState *vm,\n");
    printf("                                                       uint32_t indirect_jmp_site,\n");
    printf("                                                       const VMSecondStageRBXProvenance *edge) {\n");
    printf("    switch (indirect_jmp_site) {\n");
    for (size_t i = 0; i < count; i++) {
        printf("    case 0x%llxu:\n", (unsigned long long)results[i].spec->dispatch_site);
        printf("        second_stage_rbx_provenance_%llx(vm, edge);\n",
               (unsigned long long)results[i].spec->dispatch_site);
        printf("        break;\n");
    }
    printf("    default:\n");
    printf("        vm_note_second_stage_rbx_provenance(vm, edge, 0, indirect_jmp_site, 0,\n");
    printf("                                             \"-\", \"unknown_rbx_provenance_site\");\n");
    printf("        break;\n");
    printf("    }\n");
    printf("}\n");
}

int main(int argc, char **argv) {
    enum { MODE_C, MODE_TSV, MODE_MARKDOWN } mode = MODE_C;
    SiteResult results[sizeof(k_sites) / sizeof(k_sites[0])];
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
    memset(results, 0, sizeof(results));
    for (size_t i = 0; i < sizeof(k_sites) / sizeof(k_sites[0]); i++) {
        results[i].spec = &k_sites[i];
        load_site_result(&results[i]);
        finalize_result(&results[i]);
    }
    if (mode == MODE_TSV) {
        emit_tsv(results, sizeof(results) / sizeof(results[0]));
    } else if (mode == MODE_MARKDOWN) {
        emit_markdown(results, sizeof(results) / sizeof(results[0]));
    } else {
        emit_c(results, sizeof(results) / sizeof(results[0]));
    }
    return 0;
}
