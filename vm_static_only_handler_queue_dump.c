#define _GNU_SOURCE
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COVERAGE_PATH "dumps/vmtail-wide-1m-w16/vm_native_handler_environment_coverage.tsv"
#define RETDEC_INDEX_PATH "dumps/vmtail-wide-1m-w16/vm_handler_retdec_index.tsv"
#define SEMANTICS_PATH "dumps/vmtail-wide-1m-w16/vm_handler_semantics.tsv"
#define MAX_FIELDS 64
#define MAX_HANDLERS 512
#define MAX_TEXT 8192
#define MAX_ROWS 512

typedef struct {
    bool present;
    unsigned entry;
    uint64_t target;
    char coverage_status[128];
} CoverageRow;

typedef struct {
    bool present;
    unsigned entry;
    char class_name[128];
    char sidecar[256];
    uint64_t selected_start;
    uint64_t selected_stop;
    unsigned selected_span_bytes;
    int events;
    int insns;
    unsigned function_count;
    unsigned covered_bytes;
    char function_names[MAX_TEXT];
    char function_ranges[MAX_TEXT];
} RetdecRow;

typedef struct {
    bool present;
    unsigned entry;
    char observation[128];
    int events;
    unsigned unique_vm_ips;
    char delta[64];
    char frame_reads[MAX_TEXT];
    char frame_writes[MAX_TEXT];
    char ip_reads[MAX_TEXT];
    char table_reads[256];
    int calls;
    int rets;
} SemanticsRow;

typedef struct {
    unsigned rank;
    unsigned entry;
    uint64_t target;
    const CoverageRow *coverage;
    const RetdecRow *retdec;
    const SemanticsRow *semantics;
    unsigned priority_score;
    char priority_class[128];
    char next_action[256];
} QueueRow;

static CoverageRow g_coverage[MAX_HANDLERS];
static RetdecRow g_retdec[MAX_HANDLERS];
static SemanticsRow g_semantics[MAX_HANDLERS];
static QueueRow g_queue[MAX_ROWS];
static size_t g_queue_count;

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

static const char *field_at(char **fields, int count, int index) {
    if (index < 0 || index >= count) {
        return "";
    }
    return fields[index];
}

static uint64_t parse_u64(const char *text) {
    if (!text || !text[0] || strcmp(text, "-") == 0) {
        return 0;
    }
    return strtoull(text, NULL, 0);
}

static int parse_i32(const char *text) {
    if (!text || !text[0] || strcmp(text, "-") == 0) {
        return -1;
    }
    return (int)strtol(text, NULL, 0);
}

static void copy_text(char *dst, size_t dst_size, const char *src) {
    snprintf(dst, dst_size, "%s", src && src[0] ? src : "-");
}

static void load_coverage(void) {
    FILE *file = fopen(COVERAGE_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count, c_entry, c_target, c_status;
    if (!file) {
        perror(COVERAGE_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", COVERAGE_PATH);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_entry = required_col(header, header_count, "entry", COVERAGE_PATH);
    c_target = required_col(header, header_count, "target", COVERAGE_PATH);
    c_status = required_col(header, header_count, "coverage_status", COVERAGE_PATH);
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count;
        unsigned entry;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        entry = (unsigned)parse_u64(field_at(fields, count, c_entry));
        if (entry >= MAX_HANDLERS) {
            fprintf(stderr, "%s: entry out of range %u\n", COVERAGE_PATH, entry);
            exit(1);
        }
        g_coverage[entry].present = true;
        g_coverage[entry].entry = entry;
        g_coverage[entry].target = parse_u64(field_at(fields, count, c_target));
        copy_text(g_coverage[entry].coverage_status, sizeof(g_coverage[entry].coverage_status),
                  field_at(fields, count, c_status));
    }
    free(line);
    fclose(file);
}

static void load_retdec(void) {
    FILE *file = fopen(RETDEC_INDEX_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count;
    int c_entry, c_class, c_sidecar, c_start, c_stop, c_span, c_events, c_insns;
    int c_function_count, c_covered_bytes, c_function_names, c_function_ranges;
    if (!file) {
        perror(RETDEC_INDEX_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", RETDEC_INDEX_PATH);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_entry = required_col(header, header_count, "entry", RETDEC_INDEX_PATH);
    c_class = required_col(header, header_count, "class", RETDEC_INDEX_PATH);
    c_sidecar = required_col(header, header_count, "sidecar", RETDEC_INDEX_PATH);
    c_start = required_col(header, header_count, "selected_start", RETDEC_INDEX_PATH);
    c_stop = required_col(header, header_count, "selected_stop", RETDEC_INDEX_PATH);
    c_span = required_col(header, header_count, "selected_span_bytes", RETDEC_INDEX_PATH);
    c_events = required_col(header, header_count, "events", RETDEC_INDEX_PATH);
    c_insns = required_col(header, header_count, "insns", RETDEC_INDEX_PATH);
    c_function_count = required_col(header, header_count, "function_count", RETDEC_INDEX_PATH);
    c_covered_bytes = required_col(header, header_count, "covered_bytes", RETDEC_INDEX_PATH);
    c_function_names = required_col(header, header_count, "function_names", RETDEC_INDEX_PATH);
    c_function_ranges = required_col(header, header_count, "function_ranges", RETDEC_INDEX_PATH);
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count;
        unsigned entry;
        RetdecRow *row;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        entry = (unsigned)parse_u64(field_at(fields, count, c_entry));
        if (entry >= MAX_HANDLERS) {
            fprintf(stderr, "%s: entry out of range %u\n", RETDEC_INDEX_PATH, entry);
            exit(1);
        }
        row = &g_retdec[entry];
        row->present = true;
        row->entry = entry;
        copy_text(row->class_name, sizeof(row->class_name), field_at(fields, count, c_class));
        copy_text(row->sidecar, sizeof(row->sidecar), field_at(fields, count, c_sidecar));
        row->selected_start = parse_u64(field_at(fields, count, c_start));
        row->selected_stop = parse_u64(field_at(fields, count, c_stop));
        row->selected_span_bytes = (unsigned)parse_u64(field_at(fields, count, c_span));
        row->events = parse_i32(field_at(fields, count, c_events));
        row->insns = parse_i32(field_at(fields, count, c_insns));
        row->function_count = (unsigned)parse_u64(field_at(fields, count, c_function_count));
        row->covered_bytes = (unsigned)parse_u64(field_at(fields, count, c_covered_bytes));
        copy_text(row->function_names, sizeof(row->function_names), field_at(fields, count, c_function_names));
        copy_text(row->function_ranges, sizeof(row->function_ranges), field_at(fields, count, c_function_ranges));
    }
    free(line);
    fclose(file);
}

static void load_semantics(void) {
    FILE *file = fopen(SEMANTICS_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count;
    int c_entry, c_observation, c_events, c_unique, c_delta, c_frame_reads;
    int c_frame_writes, c_ip_reads, c_table_reads, c_calls, c_rets;
    if (!file) {
        perror(SEMANTICS_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", SEMANTICS_PATH);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_entry = required_col(header, header_count, "entry", SEMANTICS_PATH);
    c_observation = required_col(header, header_count, "observation", SEMANTICS_PATH);
    c_events = required_col(header, header_count, "events", SEMANTICS_PATH);
    c_unique = required_col(header, header_count, "unique_vm_ips", SEMANTICS_PATH);
    c_delta = required_col(header, header_count, "delta", SEMANTICS_PATH);
    c_frame_reads = required_col(header, header_count, "frame_reads", SEMANTICS_PATH);
    c_frame_writes = required_col(header, header_count, "frame_writes", SEMANTICS_PATH);
    c_ip_reads = required_col(header, header_count, "ip_reads", SEMANTICS_PATH);
    c_table_reads = required_col(header, header_count, "table_reads", SEMANTICS_PATH);
    c_calls = required_col(header, header_count, "calls", SEMANTICS_PATH);
    c_rets = required_col(header, header_count, "rets", SEMANTICS_PATH);
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count;
        unsigned entry;
        SemanticsRow *row;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        entry = (unsigned)parse_u64(field_at(fields, count, c_entry));
        if (entry >= MAX_HANDLERS) {
            fprintf(stderr, "%s: entry out of range %u\n", SEMANTICS_PATH, entry);
            exit(1);
        }
        row = &g_semantics[entry];
        row->present = true;
        row->entry = entry;
        copy_text(row->observation, sizeof(row->observation), field_at(fields, count, c_observation));
        row->events = parse_i32(field_at(fields, count, c_events));
        row->unique_vm_ips = (unsigned)parse_u64(field_at(fields, count, c_unique));
        copy_text(row->delta, sizeof(row->delta), field_at(fields, count, c_delta));
        copy_text(row->frame_reads, sizeof(row->frame_reads), field_at(fields, count, c_frame_reads));
        copy_text(row->frame_writes, sizeof(row->frame_writes), field_at(fields, count, c_frame_writes));
        copy_text(row->ip_reads, sizeof(row->ip_reads), field_at(fields, count, c_ip_reads));
        copy_text(row->table_reads, sizeof(row->table_reads), field_at(fields, count, c_table_reads));
        row->calls = parse_i32(field_at(fields, count, c_calls));
        row->rets = parse_i32(field_at(fields, count, c_rets));
    }
    free(line);
    fclose(file);
}

static unsigned score_row(const RetdecRow *retdec, const SemanticsRow *semantics,
                          char *priority_class, size_t class_size,
                          char *next_action, size_t action_size) {
    unsigned span = retdec && retdec->present ? retdec->selected_span_bytes : 99999u;
    unsigned funcs = retdec && retdec->present ? retdec->function_count : 99u;
    int calls = semantics && semantics->present ? semantics->calls : 0;
    int rets = semantics && semantics->present ? semantics->rets : 0;
    unsigned score = span + funcs * 200u;
    if (calls > 0 || rets > 0) {
        score += 2000u;
    }
    if (!retdec || !retdec->present || funcs == 0) {
        score += 10000u;
    }
    if (funcs == 1 && span <= 512u && calls == 0 && rets == 0) {
        copy_text(priority_class, class_size, "tier0_single_function_small_static_replay");
        copy_text(next_action, action_size, "inline_retdec_function_into_handler_model");
        return score;
    }
    if (funcs == 1 && span <= 1024u && calls == 0 && rets == 0) {
        copy_text(priority_class, class_size, "tier1_single_function_medium_static_replay");
        copy_text(next_action, action_size, "inline_retdec_function_after_operand_rewrite");
        return score + 500u;
    }
    if (funcs <= 2 && span <= 768u && calls == 0 && rets == 0) {
        copy_text(priority_class, class_size, "tier2_small_shared_range_split");
        copy_text(next_action, action_size, "split_overlapping_retdec_chunks_then_inline");
        return score + 1000u;
    }
    if (calls > 0 || rets > 0) {
        copy_text(priority_class, class_size, "tier4_native_call_or_ret_side_effect");
        copy_text(next_action, action_size, "audit_call_ret_side_effects_before_inlining");
        return score + 3000u;
    }
    if (funcs > 1) {
        copy_text(priority_class, class_size, "tier3_multi_function_shared_range");
        copy_text(next_action, action_size, "recover_shared_chunks_or_split_by_entry");
        return score + 1500u;
    }
    copy_text(priority_class, class_size, "tier5_large_static_replay");
    copy_text(next_action, action_size, "defer_until_small_static_handlers_are_inlined");
    return score + 2500u;
}

static int compare_queue(const void *left, const void *right) {
    const QueueRow *a = (const QueueRow *)left;
    const QueueRow *b = (const QueueRow *)right;
    if (a->priority_score != b->priority_score) {
        return a->priority_score < b->priority_score ? -1 : 1;
    }
    if (a->entry != b->entry) {
        return a->entry < b->entry ? -1 : 1;
    }
    return 0;
}

static void build_queue(void) {
    for (unsigned entry = 0; entry < MAX_HANDLERS; entry++) {
        const CoverageRow *coverage = &g_coverage[entry];
        QueueRow *row;
        if (!coverage->present ||
            strcmp(coverage->coverage_status, "static_only_unobserved_in_trace_matrix") != 0) {
            continue;
        }
        if (g_queue_count >= MAX_ROWS) {
            fprintf(stderr, "too many queue rows\n");
            exit(1);
        }
        row = &g_queue[g_queue_count++];
        memset(row, 0, sizeof(*row));
        row->entry = entry;
        row->target = coverage->target;
        row->coverage = coverage;
        row->retdec = g_retdec[entry].present ? &g_retdec[entry] : NULL;
        row->semantics = g_semantics[entry].present ? &g_semantics[entry] : NULL;
        row->priority_score = score_row(row->retdec, row->semantics,
                                        row->priority_class, sizeof(row->priority_class),
                                        row->next_action, sizeof(row->next_action));
    }
    qsort(g_queue, g_queue_count, sizeof(g_queue[0]), compare_queue);
    for (size_t i = 0; i < g_queue_count; i++) {
        g_queue[i].rank = (unsigned)i + 1u;
    }
}

static const char *text_or_dash(const char *text) {
    return text && text[0] ? text : "-";
}

static void emit_tsv(void) {
    printf("rank\tentry\ttarget\tpriority_score\tpriority_class\tnext_action\tselected_start\tselected_stop\tspan_bytes\tinsns\tfunction_count\tcovered_bytes\tsidecar\tfunction_names\tfunction_ranges\tsemantics_observation\tcalls\trets\ttable_reads\tip_reads\tframe_reads\tframe_writes\n");
    for (size_t i = 0; i < g_queue_count; i++) {
        const QueueRow *row = &g_queue[i];
        const RetdecRow *retdec = row->retdec;
        const SemanticsRow *semantics = row->semantics;
        printf("%u\t%u\t0x%llx\t%u\t%s\t%s\t0x%llx\t0x%llx\t%u\t%d\t%u\t%u\t%s\t%s\t%s\t%s\t%d\t%d\t%s\t%s\t%s\t%s\n",
               row->rank,
               row->entry,
               (unsigned long long)row->target,
               row->priority_score,
               row->priority_class,
               row->next_action,
               (unsigned long long)(retdec ? retdec->selected_start : 0),
               (unsigned long long)(retdec ? retdec->selected_stop : 0),
               retdec ? retdec->selected_span_bytes : 0,
               retdec ? retdec->insns : -1,
               retdec ? retdec->function_count : 0,
               retdec ? retdec->covered_bytes : 0,
               retdec ? text_or_dash(retdec->sidecar) : "-",
               retdec ? text_or_dash(retdec->function_names) : "-",
               retdec ? text_or_dash(retdec->function_ranges) : "-",
               semantics ? text_or_dash(semantics->observation) : "-",
               semantics ? semantics->calls : -1,
               semantics ? semantics->rets : -1,
               semantics ? text_or_dash(semantics->table_reads) : "-",
               semantics ? text_or_dash(semantics->ip_reads) : "-",
               semantics ? text_or_dash(semantics->frame_reads) : "-",
               semantics ? text_or_dash(semantics->frame_writes) : "-");
    }
}

static void emit_markdown(void) {
    unsigned tiers[6] = {0};
    unsigned single_function = 0;
    unsigned multi_function = 0;
    unsigned call_or_ret = 0;
    unsigned top_limit = g_queue_count < 20 ? (unsigned)g_queue_count : 20u;
    for (size_t i = 0; i < g_queue_count; i++) {
        const QueueRow *row = &g_queue[i];
        const RetdecRow *retdec = row->retdec;
        if (strncmp(row->priority_class, "tier0_", 6) == 0) tiers[0]++;
        else if (strncmp(row->priority_class, "tier1_", 6) == 0) tiers[1]++;
        else if (strncmp(row->priority_class, "tier2_", 6) == 0) tiers[2]++;
        else if (strncmp(row->priority_class, "tier3_", 6) == 0) tiers[3]++;
        else if (strncmp(row->priority_class, "tier4_", 6) == 0) tiers[4]++;
        else tiers[5]++;
        if (retdec && retdec->function_count == 1) {
            single_function++;
        } else {
            multi_function++;
        }
        if (row->semantics && (row->semantics->calls > 0 || row->semantics->rets > 0)) {
            call_or_ret++;
        }
    }
    printf("# Static-Only Handler Closure Queue\n\n");
    printf("Ranked queue for converting dispatch entries that are static-only in the current trace matrix into stronger C-shaped handler evidence. Lower ranks are smaller, cleaner RetDec ranges.\n\n");
    printf("| metric | value |\n");
    printf("| --- | ---: |\n");
    printf("| static-only queue rows | %zu |\n", g_queue_count);
    printf("| tier0 single-function small | %u |\n", tiers[0]);
    printf("| tier1 single-function medium | %u |\n", tiers[1]);
    printf("| tier2 small shared range | %u |\n", tiers[2]);
    printf("| tier3 multi-function shared range | %u |\n", tiers[3]);
    printf("| tier4 call/ret side-effect | %u |\n", tiers[4]);
    printf("| tier5 large/static deferred | %u |\n", tiers[5]);
    printf("| single-function rows | %u |\n", single_function);
    printf("| multi-function rows | %u |\n", multi_function);
    printf("| rows with native call/ret side effects | %u |\n\n", call_or_ret);
    printf("## Top Queue\n\n");
    printf("| rank | entry | target | span | funcs | sidecar | class | next action |\n");
    printf("| ---: | ---: | --- | ---: | ---: | --- | --- | --- |\n");
    for (unsigned i = 0; i < top_limit; i++) {
        const QueueRow *row = &g_queue[i];
        const RetdecRow *retdec = row->retdec;
        printf("| %u | %u | 0x%llx | %u | %u | `%s` | `%s` | `%s` |\n",
               row->rank,
               row->entry,
               (unsigned long long)row->target,
               retdec ? retdec->selected_span_bytes : 0,
               retdec ? retdec->function_count : 0,
               retdec ? text_or_dash(retdec->sidecar) : "-",
               row->priority_class,
               row->next_action);
    }
}

static void emit_c(void) {
    printf("/*\n");
    printf(" * Static-only handler closure queue.\n");
    printf(" * Generated from handler environment coverage, handler RetDec index,\n");
    printf(" * and handler semantics. This ranks unobserved dispatch entries for\n");
    printf(" * static replay/inlining work; it does not claim dynamic coverage.\n");
    printf(" */\n");
    printf("#include <stdint.h>\n\n");
    printf("typedef struct VMStaticOnlyHandlerClosureQueue {\n");
    printf("    uint16_t rank;\n");
    printf("    uint16_t entry;\n");
    printf("    uint64_t target;\n");
    printf("    uint32_t priority_score;\n");
    printf("    uint32_t selected_span_bytes;\n");
    printf("    uint16_t insns;\n");
    printf("    uint16_t function_count;\n");
    printf("    uint32_t covered_bytes;\n");
    printf("    const char *sidecar;\n");
    printf("    const char *function_names;\n");
    printf("    const char *priority_class;\n");
    printf("    const char *next_action;\n");
    printf("} VMStaticOnlyHandlerClosureQueue;\n\n");
    printf("static const VMStaticOnlyHandlerClosureQueue g_static_only_handler_closure_queue[] = {\n");
    for (size_t i = 0; i < g_queue_count; i++) {
        const QueueRow *row = &g_queue[i];
        const RetdecRow *retdec = row->retdec;
        printf("    { %u, %u, 0x%llxull, %u, %u, %u, %u, %u, \"%s\", \"%s\", \"%s\", \"%s\" },\n",
               row->rank,
               row->entry,
               (unsigned long long)row->target,
               row->priority_score,
               retdec ? retdec->selected_span_bytes : 0,
               retdec && retdec->insns > 0 ? (unsigned)retdec->insns : 0u,
               retdec ? retdec->function_count : 0,
               retdec ? retdec->covered_bytes : 0,
               retdec ? text_or_dash(retdec->sidecar) : "-",
               retdec ? text_or_dash(retdec->function_names) : "-",
               row->priority_class,
               row->next_action);
    }
    printf("};\n\n");
    printf("const VMStaticOnlyHandlerClosureQueue *vm_static_only_handler_closure_queue(unsigned *count) {\n");
    printf("    if (count) {\n");
    printf("        *count = (unsigned)(sizeof(g_static_only_handler_closure_queue) / sizeof(g_static_only_handler_closure_queue[0]));\n");
    printf("    }\n");
    printf("    return g_static_only_handler_closure_queue;\n");
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
    load_coverage();
    load_retdec();
    load_semantics();
    build_queue();
    if (mode == MODE_TSV) {
        emit_tsv();
    } else if (mode == MODE_MARKDOWN) {
        emit_markdown();
    } else {
        emit_c();
    }
    return 0;
}
