#define _GNU_SOURCE
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HANDLER_TABLE_PATH "dumps/vmtail-wide-1m-w16/vm_handler_table.tsv"
#define COVERAGE_MATRIX_PATH "dumps/vmtail-wide-1m-w16/vm_trace_coverage_matrix.tsv"
#define PRIMARY_TRACE_DIR "dumps/vmtail-wide-1m-w16"
#define MAX_FIELDS 64
#define MAX_HANDLERS 512
#define MAX_TRACES 64
#define TEXT 2048

enum {
    SEEN_PRIMARY = 1u << 0,
    SEEN_CONCRETE = 1u << 1,
    SEEN_BLOCKED_NETWORK = 1u << 2,
    SEEN_FAKE_NETWORK = 1u << 3,
    SEEN_SYNTHETIC_FILL = 1u << 4,
    SEEN_ALTERNATE_MODE = 1u << 5,
    SEEN_STATE_TRACE = 1u << 6,
    SEEN_FOCUSED_TRACE = 1u << 7,
    SEEN_MODE0 = 1u << 8,
    SEEN_MODE1 = 1u << 9,
    SEEN_MODE2 = 1u << 10,
};

typedef struct {
    unsigned entry;
    uint64_t target;
    bool present;
    unsigned source_flags;
    unsigned target_flags;
    unsigned source_trace_count;
    unsigned target_trace_count;
} HandlerCoverage;

typedef struct {
    char trace_dir[512];
    char trace_class[128];
    char network_policy[128];
    char run_mode[32];
    char path[512];
    unsigned trace_rows;
} TraceRow;

static HandlerCoverage g_handlers[MAX_HANDLERS];
static TraceRow g_traces[MAX_TRACES];
static size_t g_trace_count;

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

static bool has_focus_env(const TraceRow *trace) {
    return strstr(trace->trace_dir, "residual") != NULL ||
           strstr(trace->trace_dir, "focus") != NULL ||
           strstr(trace->trace_class, "memory_context_trace") != NULL;
}

static unsigned flags_for_trace(const TraceRow *trace) {
    unsigned flags = 0;
    if (strcmp(trace->trace_dir, PRIMARY_TRACE_DIR) == 0) {
        flags |= SEEN_PRIMARY;
    }
    if (strcmp(trace->trace_class, "synthetic_filled_trace") == 0) {
        flags |= SEEN_SYNTHETIC_FILL;
    } else {
        flags |= SEEN_CONCRETE;
    }
    if (strcmp(trace->network_policy, "blocked_observed") == 0) {
        flags |= SEEN_BLOCKED_NETWORK;
    } else if (strcmp(trace->network_policy, "fake_observed") == 0) {
        flags |= SEEN_FAKE_NETWORK;
    }
    if (strcmp(trace->trace_class, "alternate_mode_trace") == 0) {
        flags |= SEEN_ALTERNATE_MODE;
    }
    if (strcmp(trace->trace_class, "state_trace") == 0) {
        flags |= SEEN_STATE_TRACE;
    }
    if (has_focus_env(trace)) {
        flags |= SEEN_FOCUSED_TRACE;
    }
    if (strcmp(trace->run_mode, "0") == 0) {
        flags |= SEEN_MODE0;
    } else if (strcmp(trace->run_mode, "1") == 0) {
        flags |= SEEN_MODE1;
    } else if (strcmp(trace->run_mode, "2") == 0) {
        flags |= SEEN_MODE2;
    }
    return flags;
}

static void load_handlers(void) {
    FILE *file = fopen(HANDLER_TABLE_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count;
    int c_entry, c_target;
    if (!file) {
        perror(HANDLER_TABLE_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", HANDLER_TABLE_PATH);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_entry = required_col(header, header_count, "entry", HANDLER_TABLE_PATH);
    c_target = required_col(header, header_count, "target", HANDLER_TABLE_PATH);
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count;
        unsigned entry;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        entry = (unsigned)parse_number(field_at(fields, count, c_entry));
        if (entry >= MAX_HANDLERS) {
            fprintf(stderr, "%s: handler entry out of range: %u\n", HANDLER_TABLE_PATH, entry);
            exit(1);
        }
        g_handlers[entry].entry = entry;
        g_handlers[entry].target = parse_number(field_at(fields, count, c_target));
        g_handlers[entry].present = true;
    }
    free(line);
    fclose(file);
}

static void load_trace_rows(void) {
    FILE *file = fopen(COVERAGE_MATRIX_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count;
    int c_trace_dir, c_trace_class, c_network, c_run_mode, c_path, c_rows;
    if (!file) {
        perror(COVERAGE_MATRIX_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", COVERAGE_MATRIX_PATH);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_trace_dir = required_col(header, header_count, "trace_dir", COVERAGE_MATRIX_PATH);
    c_trace_class = required_col(header, header_count, "trace_class", COVERAGE_MATRIX_PATH);
    c_network = required_col(header, header_count, "network_policy", COVERAGE_MATRIX_PATH);
    c_run_mode = required_col(header, header_count, "run_mode", COVERAGE_MATRIX_PATH);
    c_path = required_col(header, header_count, "path", COVERAGE_MATRIX_PATH);
    c_rows = required_col(header, header_count, "trace_rows", COVERAGE_MATRIX_PATH);
    while (getline(&line, &cap, file) >= 0) {
        TraceRow *row;
        char *fields[MAX_FIELDS];
        int count;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        if (g_trace_count >= MAX_TRACES) {
            fprintf(stderr, "%s: too many trace rows\n", COVERAGE_MATRIX_PATH);
            exit(1);
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = &g_traces[g_trace_count];
        memset(row, 0, sizeof(*row));
        row->trace_rows = (unsigned)parse_number(field_at(fields, count, c_rows));
        copy_field(row->path, sizeof(row->path), field_at(fields, count, c_path));
        if (row->trace_rows == 0 || strcmp(row->path, "-") == 0 || row->path[0] == '\0') {
            continue;
        }
        copy_field(row->trace_dir, sizeof(row->trace_dir), field_at(fields, count, c_trace_dir));
        copy_field(row->trace_class, sizeof(row->trace_class), field_at(fields, count, c_trace_class));
        copy_field(row->network_policy, sizeof(row->network_policy), field_at(fields, count, c_network));
        copy_field(row->run_mode, sizeof(row->run_mode), field_at(fields, count, c_run_mode));
        g_trace_count++;
    }
    free(line);
    fclose(file);
}

static void scan_trace(const TraceRow *trace) {
    FILE *file = fopen(trace->path, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count;
    int c_source, c_target;
    bool source_seen[MAX_HANDLERS] = {0};
    bool target_seen[MAX_HANDLERS] = {0};
    unsigned flags = flags_for_trace(trace);
    if (!file) {
        perror(trace->path);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", trace->path);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_source = required_col(header, header_count, "source_entry", trace->path);
    c_target = required_col(header, header_count, "target_entry", trace->path);
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count;
        const char *source_text;
        const char *target_text;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        source_text = field_at(fields, count, c_source);
        target_text = field_at(fields, count, c_target);
        if (source_text[0] && strcmp(source_text, "-") != 0) {
            unsigned source = (unsigned)parse_number(source_text);
            if (source < MAX_HANDLERS) {
                source_seen[source] = true;
            }
        }
        if (target_text[0] && strcmp(target_text, "-") != 0) {
            unsigned target = (unsigned)parse_number(target_text);
            if (target < MAX_HANDLERS) {
                target_seen[target] = true;
            }
        }
    }
    free(line);
    fclose(file);

    for (unsigned entry = 0; entry < MAX_HANDLERS; entry++) {
        if (!g_handlers[entry].present) {
            continue;
        }
        if (source_seen[entry]) {
            g_handlers[entry].source_flags |= flags;
            g_handlers[entry].source_trace_count++;
        }
        if (target_seen[entry]) {
            g_handlers[entry].target_flags |= flags;
            g_handlers[entry].target_trace_count++;
        }
    }
}

static void build_coverage(void) {
    for (size_t i = 0; i < g_trace_count; i++) {
        scan_trace(&g_traces[i]);
    }
}

static void append_item(char *dest, size_t dest_size, const char *item) {
    if (dest[0]) {
        strncat(dest, ",", dest_size - strlen(dest) - 1);
    }
    strncat(dest, item, dest_size - strlen(dest) - 1);
}

static void flag_mix(unsigned flags, char *dest, size_t dest_size) {
    dest[0] = '\0';
    if (flags & SEEN_PRIMARY) append_item(dest, dest_size, "primary");
    if (flags & SEEN_CONCRETE) append_item(dest, dest_size, "concrete");
    if (flags & SEEN_BLOCKED_NETWORK) append_item(dest, dest_size, "blocked_network");
    if (flags & SEEN_FAKE_NETWORK) append_item(dest, dest_size, "fake_network");
    if (flags & SEEN_SYNTHETIC_FILL) append_item(dest, dest_size, "synthetic_fill");
    if (flags & SEEN_ALTERNATE_MODE) append_item(dest, dest_size, "alternate_mode");
    if (flags & SEEN_STATE_TRACE) append_item(dest, dest_size, "state_trace");
    if (flags & SEEN_FOCUSED_TRACE) append_item(dest, dest_size, "focused_context");
    if (flags & SEEN_MODE0) append_item(dest, dest_size, "mode0");
    if (flags & SEEN_MODE1) append_item(dest, dest_size, "mode1");
    if (flags & SEEN_MODE2) append_item(dest, dest_size, "mode2");
    if (!dest[0]) {
        snprintf(dest, dest_size, "-");
    }
}

static const char *status_for(const HandlerCoverage *row) {
    bool concrete_source = (row->source_flags & SEEN_CONCRETE) != 0;
    bool concrete_target = (row->target_flags & SEEN_CONCRETE) != 0;
    bool synthetic_seen = ((row->source_flags | row->target_flags) & SEEN_SYNTHETIC_FILL) != 0;
    if (concrete_source && concrete_target) {
        return "concrete_source_and_target_seen";
    }
    if (concrete_target) {
        return "concrete_target_only";
    }
    if (concrete_source) {
        return "concrete_source_only";
    }
    if (synthetic_seen) {
        return "synthetic_fill_only";
    }
    return "static_only_unobserved_in_trace_matrix";
}

static void emit_tsv(void) {
    printf("entry\ttarget\tprimary_source\tprimary_target\tconcrete_source\tconcrete_target\tblocked_source\tblocked_target\tfake_source\tfake_target\tsynthetic_source\tsynthetic_target\tsource_trace_count\ttarget_trace_count\tsource_evidence\ttarget_evidence\tcoverage_status\tnote\n");
    for (unsigned entry = 0; entry < MAX_HANDLERS; entry++) {
        const HandlerCoverage *row = &g_handlers[entry];
        char source_mix[TEXT], target_mix[TEXT];
        if (!row->present) {
            continue;
        }
        flag_mix(row->source_flags, source_mix, sizeof(source_mix));
        flag_mix(row->target_flags, target_mix, sizeof(target_mix));
        printf("%u\t0x%llx\t%u\t%u\t%u\t%u\t%u\t%u\t%u\t%u\t%u\t%u\t%u\t%u\t%s\t%s\t%s\t%s\n",
               row->entry,
               (unsigned long long)row->target,
               (row->source_flags & SEEN_PRIMARY) ? 1u : 0u,
               (row->target_flags & SEEN_PRIMARY) ? 1u : 0u,
               (row->source_flags & SEEN_CONCRETE) ? 1u : 0u,
               (row->target_flags & SEEN_CONCRETE) ? 1u : 0u,
               (row->source_flags & SEEN_BLOCKED_NETWORK) ? 1u : 0u,
               (row->target_flags & SEEN_BLOCKED_NETWORK) ? 1u : 0u,
               (row->source_flags & SEEN_FAKE_NETWORK) ? 1u : 0u,
               (row->target_flags & SEEN_FAKE_NETWORK) ? 1u : 0u,
               (row->source_flags & SEEN_SYNTHETIC_FILL) ? 1u : 0u,
               (row->target_flags & SEEN_SYNTHETIC_FILL) ? 1u : 0u,
               row->source_trace_count,
               row->target_trace_count,
               source_mix,
               target_mix,
               status_for(row),
               "handler_level_environment_coverage_from_trace_matrix");
    }
}

static void emit_markdown(void) {
    unsigned concrete_both = 0, concrete_target = 0, concrete_source = 0, synthetic_only = 0, static_only = 0;
    unsigned fake_source = 0, fake_target = 0, blocked_source = 0, blocked_target = 0;
    for (unsigned entry = 0; entry < MAX_HANDLERS; entry++) {
        const HandlerCoverage *row = &g_handlers[entry];
        const char *status;
        if (!row->present) {
            continue;
        }
        status = status_for(row);
        if (strcmp(status, "concrete_source_and_target_seen") == 0) concrete_both++;
        else if (strcmp(status, "concrete_target_only") == 0) concrete_target++;
        else if (strcmp(status, "concrete_source_only") == 0) concrete_source++;
        else if (strcmp(status, "synthetic_fill_only") == 0) synthetic_only++;
        else static_only++;
        if (row->source_flags & SEEN_FAKE_NETWORK) fake_source++;
        if (row->target_flags & SEEN_FAKE_NETWORK) fake_target++;
        if (row->source_flags & SEEN_BLOCKED_NETWORK) blocked_source++;
        if (row->target_flags & SEEN_BLOCKED_NETWORK) blocked_target++;
    }
    printf("# Native Handler Environment Coverage\n\n");
    printf("Handler-level cross-run provenance from `vm_trace_coverage_matrix.tsv` and every listed instruction trace. This is evidence about observed scenarios, not proof of exhaustive environment/config coverage.\n\n");
    printf("| metric | value |\n");
    printf("| --- | ---: |\n");
    printf("| concrete source and target seen | %u |\n", concrete_both);
    printf("| concrete target only | %u |\n", concrete_target);
    printf("| concrete source only | %u |\n", concrete_source);
    printf("| synthetic fill only | %u |\n", synthetic_only);
    printf("| static only / unobserved in trace matrix | %u |\n", static_only);
    printf("| fake-network source handlers | %u |\n", fake_source);
    printf("| fake-network target handlers | %u |\n", fake_target);
    printf("| blocked-network source handlers | %u |\n", blocked_source);
    printf("| blocked-network target handlers | %u |\n", blocked_target);
}

static void emit_c(void) {
    printf("/*\n");
    printf(" * Native handler environment coverage map.\n");
    printf(" *\n");
    printf(" * Generated by vm_native_handler_environment_coverage_dump.c from the\n");
    printf(" * cross-run coverage matrix and listed instruction traces.\n");
    printf(" */\n");
    printf("#include <stdint.h>\n\n");
    printf("typedef struct VMHandlerEnvironmentCoverage {\n");
    printf("    uint16_t entry;\n");
    printf("    uint64_t target;\n");
    printf("    uint32_t source_flags;\n");
    printf("    uint32_t target_flags;\n");
    printf("    uint16_t source_trace_count;\n");
    printf("    uint16_t target_trace_count;\n");
    printf("    const char *coverage_status;\n");
    printf("} VMHandlerEnvironmentCoverage;\n\n");
    printf("enum {\n");
    printf("    VM_ENV_SEEN_PRIMARY = 0x%x,\n", SEEN_PRIMARY);
    printf("    VM_ENV_SEEN_CONCRETE = 0x%x,\n", SEEN_CONCRETE);
    printf("    VM_ENV_SEEN_BLOCKED_NETWORK = 0x%x,\n", SEEN_BLOCKED_NETWORK);
    printf("    VM_ENV_SEEN_FAKE_NETWORK = 0x%x,\n", SEEN_FAKE_NETWORK);
    printf("    VM_ENV_SEEN_SYNTHETIC_FILL = 0x%x,\n", SEEN_SYNTHETIC_FILL);
    printf("    VM_ENV_SEEN_ALTERNATE_MODE = 0x%x,\n", SEEN_ALTERNATE_MODE);
    printf("    VM_ENV_SEEN_STATE_TRACE = 0x%x,\n", SEEN_STATE_TRACE);
    printf("    VM_ENV_SEEN_FOCUSED_TRACE = 0x%x,\n", SEEN_FOCUSED_TRACE);
    printf("    VM_ENV_SEEN_MODE0 = 0x%x,\n", SEEN_MODE0);
    printf("    VM_ENV_SEEN_MODE1 = 0x%x,\n", SEEN_MODE1);
    printf("    VM_ENV_SEEN_MODE2 = 0x%x\n", SEEN_MODE2);
    printf("};\n\n");
    printf("static const VMHandlerEnvironmentCoverage g_handler_environment_coverage[] = {\n");
    for (unsigned entry = 0; entry < MAX_HANDLERS; entry++) {
        const HandlerCoverage *row = &g_handlers[entry];
        if (!row->present) {
            continue;
        }
        printf("    { %u, 0x%llxull, 0x%xu, 0x%xu, %uu, %uu, \"%s\" },\n",
               row->entry,
               (unsigned long long)row->target,
               row->source_flags,
               row->target_flags,
               row->source_trace_count,
               row->target_trace_count,
               status_for(row));
    }
    printf("};\n\n");
    printf("const VMHandlerEnvironmentCoverage *vm_handler_environment_coverage(uint16_t entry) {\n");
    printf("    for (unsigned i = 0; i < (unsigned)(sizeof(g_handler_environment_coverage) / sizeof(g_handler_environment_coverage[0])); i++) {\n");
    printf("        if (g_handler_environment_coverage[i].entry == entry) {\n");
    printf("            return &g_handler_environment_coverage[i];\n");
    printf("        }\n");
    printf("    }\n");
    printf("    return 0;\n");
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
    load_handlers();
    load_trace_rows();
    build_coverage();
    if (mode == MODE_TSV) {
        emit_tsv();
    } else if (mode == MODE_MARKDOWN) {
        emit_markdown();
    } else {
        emit_c();
    }
    return 0;
}
