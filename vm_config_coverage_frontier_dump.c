#define _GNU_SOURCE
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRACE_MATRIX_PATH "dumps/vmtail-wide-1m-w16/vm_trace_coverage_matrix.tsv"
#define STATIC_AUDIT_PATH "dumps/vmtail-wide-1m-w16/vm_static_coverage_audit.tsv"
#define HANDLER_ENV_PATH "dumps/vmtail-wide-1m-w16/vm_native_handler_environment_coverage.tsv"
#define PATH_MICROCODE_PATH "dumps/vmtail-wide-1m-w16/vm_path_microcode_catalog_gpr_seeded_fast.tsv"

#define MAX_FIELDS 96
#define MAX_ROWS 2048
#define TEXT 512

enum {
    FRONTIER_STATIC_ONLY_HANDLER = 1u << 0,
    FRONTIER_TARGET_ONLY_HANDLER = 1u << 1,
    FRONTIER_PATH_UNKNOWN_TARGET = 1u << 2,
    FRONTIER_NO_REAL_NETWORK = 1u << 3,
    FRONTIER_SYNTHETIC_FILL_ONLY = 1u << 4,
};

typedef struct {
    char trace_dir[TEXT];
    char trace_class[TEXT];
    char network_policy[TEXT];
    char run_mode[32];
    char path[TEXT];
    uint64_t trace_rows;
    uint64_t source_entries;
    uint64_t target_entries;
    uint64_t start_vm_ips;
    uint64_t network_events;
    uint64_t network_denied_events;
    uint64_t network_fake_events;
    char source_entries_vs_primary[64];
} TraceRow;

typedef struct {
    char scope[TEXT];
    char metric[TEXT];
    char value[TEXT];
    char note[TEXT];
} MetricRow;

typedef struct {
    unsigned entry;
    uint64_t target;
    char coverage_status[TEXT];
    unsigned source_trace_count;
    unsigned target_trace_count;
} HandlerRow;

typedef struct {
    unsigned source_entry;
    uint64_t source_target;
    char path_hash[64];
    char source_class[TEXT];
    uint64_t events;
    char target_pct[64];
    char ip_pct[64];
    char validation[TEXT];
} PathRow;

typedef struct {
    char row_type[32];
    char scope[TEXT];
    char metric[TEXT];
    char value[TEXT];
    unsigned entry;
    uint64_t target;
    uint64_t events;
    unsigned flags;
    char frontier_kind[TEXT];
    char evidence[TEXT];
    char next_action[TEXT];
    char note[TEXT];
} OutputRow;

static TraceRow g_traces[MAX_ROWS];
static size_t g_trace_count;
static MetricRow g_static_metrics[MAX_ROWS];
static size_t g_static_metric_count;
static HandlerRow g_handlers[MAX_ROWS];
static size_t g_handler_count;
static PathRow g_paths[MAX_ROWS];
static size_t g_path_count;
static OutputRow g_rows[MAX_ROWS * 2];
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

static const char *field_at(char **fields, int count, int col) {
    if (col < 0 || col >= count) {
        return "";
    }
    return fields[col];
}

static uint64_t parse_u64(const char *text) {
    if (!text || !text[0] || strcmp(text, "-") == 0) {
        return 0;
    }
    return strtoull(text, NULL, 0);
}

static void copy_text(char *dest, size_t size, const char *src) {
    snprintf(dest, size, "%s", src && src[0] ? src : "-");
}

static void c_string(const char *text) {
    putchar('"');
    for (const unsigned char *p = (const unsigned char *)text; *p; p++) {
        if (*p == '\\' || *p == '"') {
            putchar('\\');
            putchar(*p);
        } else if (*p == '\n') {
            fputs("\\n", stdout);
        } else if (*p == '\t') {
            fputs("\\t", stdout);
        } else if (*p < 0x20 || *p >= 0x7f) {
            printf("\\x%02x", *p);
        } else {
            putchar(*p);
        }
    }
    putchar('"');
}

static void load_trace_matrix(void) {
    FILE *file = fopen(TRACE_MATRIX_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int hc;
    int c_trace_dir, c_trace_class, c_network_policy, c_run_mode, c_path;
    int c_trace_rows, c_source_entries, c_target_entries, c_start_vm_ips;
    int c_network_events, c_network_denied, c_network_fake, c_source_vs_primary;
    if (!file) {
        perror(TRACE_MATRIX_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", TRACE_MATRIX_PATH);
        exit(1);
    }
    chomp(line);
    hc = split_tsv(line, header, MAX_FIELDS);
    c_trace_dir = required_col(header, hc, "trace_dir", TRACE_MATRIX_PATH);
    c_trace_class = required_col(header, hc, "trace_class", TRACE_MATRIX_PATH);
    c_network_policy = required_col(header, hc, "network_policy", TRACE_MATRIX_PATH);
    c_run_mode = required_col(header, hc, "run_mode", TRACE_MATRIX_PATH);
    c_path = required_col(header, hc, "path", TRACE_MATRIX_PATH);
    c_trace_rows = required_col(header, hc, "trace_rows", TRACE_MATRIX_PATH);
    c_source_entries = required_col(header, hc, "source_entries", TRACE_MATRIX_PATH);
    c_target_entries = required_col(header, hc, "target_entries", TRACE_MATRIX_PATH);
    c_start_vm_ips = required_col(header, hc, "start_vm_ips", TRACE_MATRIX_PATH);
    c_network_events = required_col(header, hc, "network_events", TRACE_MATRIX_PATH);
    c_network_denied = required_col(header, hc, "network_denied_events", TRACE_MATRIX_PATH);
    c_network_fake = required_col(header, hc, "network_fake_events", TRACE_MATRIX_PATH);
    c_source_vs_primary = required_col(header, hc, "source_entries_vs_primary", TRACE_MATRIX_PATH);
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count;
        TraceRow *row;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        if (g_trace_count >= MAX_ROWS) {
            fprintf(stderr, "%s: too many rows\n", TRACE_MATRIX_PATH);
            exit(1);
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = &g_traces[g_trace_count++];
        memset(row, 0, sizeof(*row));
        copy_text(row->trace_dir, sizeof(row->trace_dir), field_at(fields, count, c_trace_dir));
        copy_text(row->trace_class, sizeof(row->trace_class), field_at(fields, count, c_trace_class));
        copy_text(row->network_policy, sizeof(row->network_policy), field_at(fields, count, c_network_policy));
        copy_text(row->run_mode, sizeof(row->run_mode), field_at(fields, count, c_run_mode));
        copy_text(row->path, sizeof(row->path), field_at(fields, count, c_path));
        copy_text(row->source_entries_vs_primary, sizeof(row->source_entries_vs_primary), field_at(fields, count, c_source_vs_primary));
        row->trace_rows = parse_u64(field_at(fields, count, c_trace_rows));
        row->source_entries = parse_u64(field_at(fields, count, c_source_entries));
        row->target_entries = parse_u64(field_at(fields, count, c_target_entries));
        row->start_vm_ips = parse_u64(field_at(fields, count, c_start_vm_ips));
        row->network_events = parse_u64(field_at(fields, count, c_network_events));
        row->network_denied_events = parse_u64(field_at(fields, count, c_network_denied));
        row->network_fake_events = parse_u64(field_at(fields, count, c_network_fake));
    }
    free(line);
    fclose(file);
}

static void load_static_audit(void) {
    FILE *file = fopen(STATIC_AUDIT_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int hc, c_scope, c_metric, c_value, c_note;
    if (!file) {
        perror(STATIC_AUDIT_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", STATIC_AUDIT_PATH);
        exit(1);
    }
    chomp(line);
    hc = split_tsv(line, header, MAX_FIELDS);
    c_scope = required_col(header, hc, "scope", STATIC_AUDIT_PATH);
    c_metric = required_col(header, hc, "metric", STATIC_AUDIT_PATH);
    c_value = required_col(header, hc, "value", STATIC_AUDIT_PATH);
    c_note = required_col(header, hc, "note", STATIC_AUDIT_PATH);
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count;
        MetricRow *row;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        if (g_static_metric_count >= MAX_ROWS) {
            fprintf(stderr, "%s: too many rows\n", STATIC_AUDIT_PATH);
            exit(1);
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = &g_static_metrics[g_static_metric_count++];
        memset(row, 0, sizeof(*row));
        copy_text(row->scope, sizeof(row->scope), field_at(fields, count, c_scope));
        copy_text(row->metric, sizeof(row->metric), field_at(fields, count, c_metric));
        copy_text(row->value, sizeof(row->value), field_at(fields, count, c_value));
        copy_text(row->note, sizeof(row->note), field_at(fields, count, c_note));
    }
    free(line);
    fclose(file);
}

static void load_handler_env(void) {
    FILE *file = fopen(HANDLER_ENV_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int hc, c_entry, c_target, c_status, c_source_count, c_target_count;
    if (!file) {
        perror(HANDLER_ENV_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", HANDLER_ENV_PATH);
        exit(1);
    }
    chomp(line);
    hc = split_tsv(line, header, MAX_FIELDS);
    c_entry = required_col(header, hc, "entry", HANDLER_ENV_PATH);
    c_target = required_col(header, hc, "target", HANDLER_ENV_PATH);
    c_status = required_col(header, hc, "coverage_status", HANDLER_ENV_PATH);
    c_source_count = required_col(header, hc, "source_trace_count", HANDLER_ENV_PATH);
    c_target_count = required_col(header, hc, "target_trace_count", HANDLER_ENV_PATH);
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count;
        HandlerRow *row;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        if (g_handler_count >= MAX_ROWS) {
            fprintf(stderr, "%s: too many rows\n", HANDLER_ENV_PATH);
            exit(1);
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = &g_handlers[g_handler_count++];
        memset(row, 0, sizeof(*row));
        row->entry = (unsigned)parse_u64(field_at(fields, count, c_entry));
        row->target = parse_u64(field_at(fields, count, c_target));
        row->source_trace_count = (unsigned)parse_u64(field_at(fields, count, c_source_count));
        row->target_trace_count = (unsigned)parse_u64(field_at(fields, count, c_target_count));
        copy_text(row->coverage_status, sizeof(row->coverage_status), field_at(fields, count, c_status));
    }
    free(line);
    fclose(file);
}

static void load_path_microcode(void) {
    FILE *file = fopen(PATH_MICROCODE_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int hc, c_entry, c_target, c_hash, c_class, c_events, c_target_pct, c_ip_pct, c_validation;
    if (!file) {
        perror(PATH_MICROCODE_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", PATH_MICROCODE_PATH);
        exit(1);
    }
    chomp(line);
    hc = split_tsv(line, header, MAX_FIELDS);
    c_entry = required_col(header, hc, "source_entry", PATH_MICROCODE_PATH);
    c_target = required_col(header, hc, "source_target", PATH_MICROCODE_PATH);
    c_hash = required_col(header, hc, "path_hash", PATH_MICROCODE_PATH);
    c_class = required_col(header, hc, "source_class", PATH_MICROCODE_PATH);
    c_events = required_col(header, hc, "events", PATH_MICROCODE_PATH);
    c_target_pct = required_col(header, hc, "target_pct", PATH_MICROCODE_PATH);
    c_ip_pct = required_col(header, hc, "ip_pct", PATH_MICROCODE_PATH);
    c_validation = required_col(header, hc, "validation", PATH_MICROCODE_PATH);
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count;
        PathRow *row;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        if (g_path_count >= MAX_ROWS) {
            fprintf(stderr, "%s: too many rows\n", PATH_MICROCODE_PATH);
            exit(1);
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = &g_paths[g_path_count++];
        memset(row, 0, sizeof(*row));
        row->source_entry = (unsigned)parse_u64(field_at(fields, count, c_entry));
        row->source_target = parse_u64(field_at(fields, count, c_target));
        row->events = parse_u64(field_at(fields, count, c_events));
        copy_text(row->path_hash, sizeof(row->path_hash), field_at(fields, count, c_hash));
        copy_text(row->source_class, sizeof(row->source_class), field_at(fields, count, c_class));
        copy_text(row->target_pct, sizeof(row->target_pct), field_at(fields, count, c_target_pct));
        copy_text(row->ip_pct, sizeof(row->ip_pct), field_at(fields, count, c_ip_pct));
        copy_text(row->validation, sizeof(row->validation), field_at(fields, count, c_validation));
    }
    free(line);
    fclose(file);
}

static bool is_instruction_trace(const TraceRow *row) {
    return row->trace_rows > 0 && row->path[0] && strcmp(row->path, "-") != 0;
}

static bool is_synthetic_trace(const TraceRow *row) {
    return strcmp(row->trace_class, "synthetic_filled_trace") == 0;
}

static bool is_concrete_instruction_trace(const TraceRow *row) {
    return is_instruction_trace(row) && !is_synthetic_trace(row);
}

static void add_metric(const char *scope, const char *metric, const char *value, const char *note) {
    OutputRow *row;
    if (g_row_count >= sizeof(g_rows) / sizeof(g_rows[0])) {
        fprintf(stderr, "too many output rows\n");
        exit(1);
    }
    row = &g_rows[g_row_count++];
    memset(row, 0, sizeof(*row));
    copy_text(row->row_type, sizeof(row->row_type), "metric");
    copy_text(row->scope, sizeof(row->scope), scope);
    copy_text(row->metric, sizeof(row->metric), metric);
    copy_text(row->value, sizeof(row->value), value);
    copy_text(row->note, sizeof(row->note), note);
}

static void add_metric_u64(const char *scope, const char *metric, uint64_t value, const char *note) {
    char text[64];
    snprintf(text, sizeof(text), "%llu", (unsigned long long)value);
    add_metric(scope, metric, text, note);
}

static void add_frontier(unsigned entry, uint64_t target, uint64_t events, unsigned flags,
                         const char *kind, const char *evidence, const char *next_action) {
    OutputRow *row;
    if (g_row_count >= sizeof(g_rows) / sizeof(g_rows[0])) {
        fprintf(stderr, "too many output rows\n");
        exit(1);
    }
    row = &g_rows[g_row_count++];
    memset(row, 0, sizeof(*row));
    copy_text(row->row_type, sizeof(row->row_type), "frontier");
    row->entry = entry;
    row->target = target;
    row->events = events;
    row->flags = flags;
    copy_text(row->frontier_kind, sizeof(row->frontier_kind), kind);
    copy_text(row->evidence, sizeof(row->evidence), evidence);
    copy_text(row->next_action, sizeof(row->next_action), next_action);
}

static void build_rows(void) {
    uint64_t instruction_traces = 0, concrete_instruction_traces = 0, run_only = 0, synthetic_traces = 0;
    uint64_t blocked_rows = 0, fake_rows = 0, not_observed_rows = 0;
    uint64_t concrete_network_denied = 0, concrete_network_fake = 0, concrete_network_allowed = 0;
    uint64_t concrete_adds_sources = 0, max_concrete_sources = 0, max_concrete_targets = 0, max_concrete_vm_ips = 0;
    uint64_t static_only = 0, target_only = 0, path_unknown = 0, path_validated = 0;

    for (size_t i = 0; i < g_trace_count; i++) {
        const TraceRow *row = &g_traces[i];
        if (is_instruction_trace(row)) instruction_traces++;
        else run_only++;
        if (is_synthetic_trace(row)) synthetic_traces++;
        if (strcmp(row->network_policy, "blocked_observed") == 0) blocked_rows++;
        else if (strcmp(row->network_policy, "fake_observed") == 0) fake_rows++;
        else if (strcmp(row->network_policy, "not_observed") == 0) not_observed_rows++;
        if (is_concrete_instruction_trace(row)) {
            concrete_instruction_traces++;
            if (row->network_denied_events > 0) concrete_network_denied++;
            else if (row->network_fake_events > 0) concrete_network_fake++;
            else if (row->network_events > 0) concrete_network_allowed++;
            if (row->source_entries_vs_primary[0] == '+') {
                const char *slash = strchr(row->source_entries_vs_primary, '/');
                long plus = strtol(row->source_entries_vs_primary + 1, NULL, 10);
                if ((!slash || slash > row->source_entries_vs_primary + 1) && plus > 0) {
                    concrete_adds_sources++;
                }
            }
            if (row->source_entries > max_concrete_sources) max_concrete_sources = row->source_entries;
            if (row->target_entries > max_concrete_targets) max_concrete_targets = row->target_entries;
            if (row->start_vm_ips > max_concrete_vm_ips) max_concrete_vm_ips = row->start_vm_ips;
        }
    }

    add_metric_u64("config_frontier", "trace_matrix_rows", g_trace_count,
                   "Run directories inventoried by the cross-run coverage matrix.");
    add_metric_u64("config_frontier", "instruction_trace_scenarios", instruction_traces,
                   "Runs with VM instruction-trace rows contributing bytecode path coverage.");
    add_metric_u64("config_frontier", "concrete_instruction_trace_scenarios", concrete_instruction_traces,
                   "Instruction traces before synthetic file/hidden/frontier/footprint fill sidecars.");
    add_metric_u64("config_frontier", "run_dirs_without_instruction_trace", run_only,
                   "Run directories with logs/context but no VM instruction rows.");
    add_metric_u64("config_frontier", "synthetic_fill_trace_rows", synthetic_traces,
                   "Derived trace rows that widen bytecode coverage without proving a runtime config.");
    add_metric_u64("config_frontier", "network_blocked_rows", blocked_rows,
                   "Coverage-matrix rows whose preload log denied network/process activity.");
    add_metric_u64("config_frontier", "network_fake_rows", fake_rows,
                   "Coverage-matrix rows satisfied by local fake-network behavior.");
    add_metric_u64("config_frontier", "network_not_observed_rows", not_observed_rows,
                   "Coverage-matrix rows with no preload-observed network calls.");
    add_metric_u64("config_frontier", "concrete_network_denied_traces", concrete_network_denied,
                   "Concrete instruction traces reaching denied network calls.");
    add_metric_u64("config_frontier", "concrete_network_fake_traces", concrete_network_fake,
                   "Concrete instruction traces reaching locally faked network calls.");
    add_metric_u64("config_frontier", "concrete_network_allowed_traces", concrete_network_allowed,
                   "Concrete instruction traces with real/non-fake network calls allowed.");
    add_metric_u64("config_frontier", "concrete_traces_adding_sources_vs_primary", concrete_adds_sources,
                   "Concrete instruction traces that add source handlers beyond the primary long trace.");
    add_metric_u64("config_frontier", "max_concrete_source_handlers_seen", max_concrete_sources,
                   "Largest source-handler count in any concrete instruction trace.");
    add_metric_u64("config_frontier", "max_concrete_target_handlers_seen", max_concrete_targets,
                   "Largest target-handler count in any concrete instruction trace.");
    add_metric_u64("config_frontier", "max_concrete_vm_ip_starts_seen", max_concrete_vm_ips,
                   "Largest VM-IP-start count in any concrete instruction trace.");

    for (size_t i = 0; i < g_static_metric_count; i++) {
        char scope[TEXT];
        snprintf(scope, sizeof(scope), "static_audit.%.480s", g_static_metrics[i].scope);
        add_metric(scope, g_static_metrics[i].metric, g_static_metrics[i].value, g_static_metrics[i].note);
    }

    for (size_t i = 0; i < g_handler_count; i++) {
        const HandlerRow *row = &g_handlers[i];
        char evidence[TEXT];
        if (strcmp(row->coverage_status, "static_only_unobserved_in_trace_matrix") == 0) {
            static_only++;
            snprintf(evidence, sizeof(evidence),
                     "coverage_status=%s source_traces=%u target_traces=%u",
                     row->coverage_status, row->source_trace_count, row->target_trace_count);
            add_frontier(row->entry, row->target, 0, FRONTIER_STATIC_ONLY_HANDLER,
                         "static_only_handler",
                         evidence,
                         "static RetDec/model lifting or force targeted trace for this dispatch entry");
        } else if (strcmp(row->coverage_status, "concrete_target_only") == 0) {
            target_only++;
            snprintf(evidence, sizeof(evidence),
                     "coverage_status=%s source_traces=%u target_traces=%u",
                     row->coverage_status, row->source_trace_count, row->target_trace_count);
            add_frontier(row->entry, row->target, row->target_trace_count, FRONTIER_TARGET_ONLY_HANDLER,
                         "target_only_handler",
                         evidence,
                         "recover source-side predecessor or static source semantics for this handler");
        }
    }

    for (size_t i = 0; i < g_path_count; i++) {
        const PathRow *row = &g_paths[i];
        if (strcmp(row->target_pct, "100.0") == 0 && strcmp(row->ip_pct, "100.0") == 0) {
            path_validated++;
        } else {
            char evidence[TEXT];
            path_unknown++;
            snprintf(evidence, sizeof(evidence),
                     "path_hash=%s class=%s target_pct=%s ip_pct=%s validation=%s",
                     row->path_hash, row->source_class, row->target_pct, row->ip_pct, row->validation);
            add_frontier(row->source_entry, row->source_target, row->events, FRONTIER_PATH_UNKNOWN_TARGET,
                         "path_microcode_unknown_target",
                         evidence,
                         "seed missing live-ins or force the branch path until target/ip validate");
        }
    }

    add_metric_u64("config_frontier", "handler_static_only_frontier_rows", static_only,
                   "Dispatch entries present statically but not observed in the trace matrix.");
    add_metric_u64("config_frontier", "handler_target_only_frontier_rows", target_only,
                   "Dispatch entries reached as concrete targets but not observed as concrete sources.");
    add_metric_u64("config_frontier", "path_microcode_validated_rows", path_validated,
                   "Path-specialized rows with target and IP validation at 100%.");
    add_metric_u64("config_frontier", "path_microcode_unknown_target_rows", path_unknown,
                   "Path-specialized rows whose target/IP validation is still zero or incomplete.");

    if (concrete_network_allowed == 0) {
        add_frontier(65535u, 0, concrete_network_denied + concrete_network_fake, FRONTIER_NO_REAL_NETWORK,
                     "no_real_network_allowed_trace",
                     "concrete instruction traces reached network calls but 11 were denied and 1 was locally faked",
                     "run controlled real-network trace or deeper protocol-faithful fake responses");
    }
    for (size_t i = 0; i < g_trace_count; i++) {
        const TraceRow *row = &g_traces[i];
        char evidence[TEXT];
        if (!is_synthetic_trace(row)) {
            continue;
        }
        snprintf(evidence, sizeof(evidence),
                 "trace_dir=%.180s trace_rows=%llu source_entries=%llu target_entries=%llu vm_ip_starts=%llu",
                 row->trace_dir,
                 (unsigned long long)row->trace_rows,
                 (unsigned long long)row->source_entries,
                 (unsigned long long)row->target_entries,
                 (unsigned long long)row->start_vm_ips);
        add_frontier(65535u, 0, row->trace_rows, FRONTIER_SYNTHETIC_FILL_ONLY,
                     "synthetic_fill_only",
                     evidence,
                     "replace derived fill coverage with concrete config trace or static symbolic proof");
    }
}

static void emit_tsv(void) {
    printf("row_type\tscope\tmetric\tvalue\tentry\ttarget\tevents\tflags\tfrontier_kind\tevidence\tnext_action\tnote\n");
    for (size_t i = 0; i < g_row_count; i++) {
        const OutputRow *row = &g_rows[i];
        printf("%s\t%s\t%s\t%s\t", row->row_type, row->scope, row->metric, row->value);
        if (strcmp(row->row_type, "frontier") == 0) {
            printf("%u\t0x%llx\t%llu\t0x%x\t%s\t%s\t%s\t%s\n",
                   row->entry,
                   (unsigned long long)row->target,
                   (unsigned long long)row->events,
                   row->flags,
                   row->frontier_kind,
                   row->evidence,
                   row->next_action,
                   row->note[0] ? row->note : "-");
        } else {
            printf("\t\t\t\t\t\t\t%s\n", row->note);
        }
    }
}

static void emit_c(void) {
    printf("/*\n");
    printf(" * Configuration and coverage frontier for the reconstructed VM program.\n");
    printf(" *\n");
    printf(" * This is a C-carried audit boundary: it distinguishes static/global\n");
    printf(" * handler evidence from scenario/config-limited bytecode coverage.\n");
    printf(" */\n");
    printf("#include <stddef.h>\n");
    printf("#include <stdint.h>\n\n");
    printf("#if defined(__GNUC__) || defined(__clang__)\n");
    printf("#define VM_CONFIG_COVERAGE_USED __attribute__((used))\n");
    printf("#else\n");
    printf("#define VM_CONFIG_COVERAGE_USED\n");
    printf("#endif\n\n");
    printf("typedef struct VMConfigCoverageMetric {\n");
    printf("    const char *scope;\n");
    printf("    const char *metric;\n");
    printf("    const char *value;\n");
    printf("    const char *note;\n");
    printf("} VMConfigCoverageMetric;\n\n");
    printf("typedef struct VMConfigCoverageFrontier {\n");
    printf("    uint16_t entry;\n");
    printf("    uint64_t target;\n");
    printf("    uint64_t events;\n");
    printf("    uint32_t flags;\n");
    printf("    const char *frontier_kind;\n");
    printf("    const char *evidence;\n");
    printf("    const char *next_action;\n");
    printf("} VMConfigCoverageFrontier;\n\n");
    printf("enum {\n");
    printf("    VM_FRONTIER_STATIC_ONLY_HANDLER = 0x%x,\n", FRONTIER_STATIC_ONLY_HANDLER);
    printf("    VM_FRONTIER_TARGET_ONLY_HANDLER = 0x%x,\n", FRONTIER_TARGET_ONLY_HANDLER);
    printf("    VM_FRONTIER_PATH_UNKNOWN_TARGET = 0x%x,\n", FRONTIER_PATH_UNKNOWN_TARGET);
    printf("    VM_FRONTIER_NO_REAL_NETWORK = 0x%x,\n", FRONTIER_NO_REAL_NETWORK);
    printf("    VM_FRONTIER_SYNTHETIC_FILL_ONLY = 0x%x\n", FRONTIER_SYNTHETIC_FILL_ONLY);
    printf("};\n\n");
    printf("static const VMConfigCoverageMetric k_vm_config_coverage_metrics[] VM_CONFIG_COVERAGE_USED = {\n");
    for (size_t i = 0; i < g_row_count; i++) {
        const OutputRow *row = &g_rows[i];
        if (strcmp(row->row_type, "metric") != 0) {
            continue;
        }
        printf("    { ");
        c_string(row->scope);
        printf(", ");
        c_string(row->metric);
        printf(", ");
        c_string(row->value);
        printf(", ");
        c_string(row->note);
        printf(" },\n");
    }
    printf("};\n\n");
    printf("static const VMConfigCoverageFrontier k_vm_config_coverage_frontier[] VM_CONFIG_COVERAGE_USED = {\n");
    for (size_t i = 0; i < g_row_count; i++) {
        const OutputRow *row = &g_rows[i];
        if (strcmp(row->row_type, "frontier") != 0) {
            continue;
        }
        printf("    { %u, 0x%llxull, %lluull, 0x%xu, ",
               row->entry,
               (unsigned long long)row->target,
               (unsigned long long)row->events,
               row->flags);
        c_string(row->frontier_kind);
        printf(", ");
        c_string(row->evidence);
        printf(", ");
        c_string(row->next_action);
        printf(" },\n");
    }
    printf("};\n\n");
    printf("static const size_t k_vm_config_coverage_metric_count = sizeof(k_vm_config_coverage_metrics) / sizeof(k_vm_config_coverage_metrics[0]);\n");
    printf("static const size_t k_vm_config_coverage_frontier_count = sizeof(k_vm_config_coverage_frontier) / sizeof(k_vm_config_coverage_frontier[0]);\n");
}

static void emit_markdown(void) {
    uint64_t metrics = 0, frontier = 0, static_only = 0, target_only = 0, path_unknown = 0, network = 0, synthetic = 0;
    for (size_t i = 0; i < g_row_count; i++) {
        const OutputRow *row = &g_rows[i];
        if (strcmp(row->row_type, "metric") == 0) {
            metrics++;
        } else if (strcmp(row->row_type, "frontier") == 0) {
            frontier++;
            if (row->flags & FRONTIER_STATIC_ONLY_HANDLER) static_only++;
            if (row->flags & FRONTIER_TARGET_ONLY_HANDLER) target_only++;
            if (row->flags & FRONTIER_PATH_UNKNOWN_TARGET) path_unknown++;
            if (row->flags & FRONTIER_NO_REAL_NETWORK) network++;
            if (row->flags & FRONTIER_SYNTHETIC_FILL_ONLY) synthetic++;
        }
    }
    printf("# Configuration Coverage Frontier\n\n");
    printf("C-carried audit boundary for what is still scenario/config limited in the reconstruction.\n\n");
    printf("| metric | value |\n");
    printf("| --- | ---: |\n");
    printf("| metric rows | %llu |\n", (unsigned long long)metrics);
    printf("| frontier rows | %llu |\n", (unsigned long long)frontier);
    printf("| static-only handler rows | %llu |\n", (unsigned long long)static_only);
    printf("| target-only handler rows | %llu |\n", (unsigned long long)target_only);
    printf("| path unknown-target rows | %llu |\n", (unsigned long long)path_unknown);
    printf("| no real-network frontier rows | %llu |\n", (unsigned long long)network);
    printf("| synthetic-fill-only frontier rows | %llu |\n", (unsigned long long)synthetic);
    printf("\n| frontier | entry | target | events | evidence |\n");
    printf("| --- | ---: | ---: | ---: | --- |\n");
    for (size_t i = 0; i < g_row_count; i++) {
        const OutputRow *row = &g_rows[i];
        if (strcmp(row->row_type, "frontier") != 0) {
            continue;
        }
        printf("| `%s` | `%u` | `0x%llx` | `%llu` | %s |\n",
               row->frontier_kind,
               row->entry,
               (unsigned long long)row->target,
               (unsigned long long)row->events,
               row->evidence);
    }
}

int main(int argc, char **argv) {
    enum { MODE_C, MODE_TSV, MODE_MARKDOWN } mode = MODE_C;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--c") == 0) {
            mode = MODE_C;
        } else if (strcmp(argv[i], "--tsv") == 0) {
            mode = MODE_TSV;
        } else if (strcmp(argv[i], "--markdown") == 0 || strcmp(argv[i], "--md") == 0) {
            mode = MODE_MARKDOWN;
        } else {
            fprintf(stderr, "usage: %s [--c|--tsv|--markdown]\n", argv[0]);
            return 2;
        }
    }
    load_trace_matrix();
    load_static_audit();
    load_handler_env();
    load_path_microcode();
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
