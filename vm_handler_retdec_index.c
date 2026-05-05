#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 512
#define MAX_FUNCS 1024
#define MAX_TOKEN 128
#define MAX_LINE 4096
#define MAX_JOINED 8192

typedef struct {
    const char *path;
    const char *default_class;
} FileSpec;

typedef struct {
    char path[256];
    char sidecar[128];
    char class_name[MAX_TOKEN];
    uint64_t start;
    uint64_t stop;
    int entry;
    int events;
    int span_bytes;
    int insns;
    uint64_t tail;
} HandlerRange;

typedef struct {
    char path[256];
    char name[MAX_TOKEN];
    uint64_t start;
    uint64_t stop;
} FunctionRange;

static const FileSpec k_files[] = {
    {"dumps/vmtail-wide-1m-w16/vm_target_only_handlers_retdec.c", "target_only"},
    {"dumps/vmtail-wide-1m-w16/vm_unobserved_handlers_retdec_batch00.c", "unobserved_static"},
    {"dumps/vmtail-wide-1m-w16/vm_unobserved_handlers_retdec_batch01.c", "unobserved_static"},
    {"dumps/vmtail-wide-1m-w16/vm_unobserved_handlers_retdec_batch02.c", "unobserved_static"},
    {"dumps/vmtail-wide-1m-w16/vm_unobserved_handlers_retdec_batch03.c", "unobserved_static"},
    {"dumps/vmtail-wide-1m-w16/vm_unobserved_handlers_retdec_batch04.c", "unobserved_static"},
    {"dumps/vmtail-wide-1m-w16/vm_unobserved_handlers_retdec_batch05.c", "unobserved_static"},
    {"dumps/vmtail-wide-1m-w16/vm_unobserved_handlers_retdec_batch06.c", "unobserved_static"},
    {"dumps/vmtail-wide-1m-w16/vm_weak_handlers_retdec.c", "weak_observed"},
    {"dumps/vmtail-wide-1m-w16/vm_validated_handlers_retdec_batch00.c", "static_validated"},
    {"dumps/vmtail-wide-1m-w16/vm_validated_handlers_retdec_batch01.c", "static_validated"},
    {"dumps/vmtail-wide-1m-w16/vm_validated_handlers_retdec_batch02.c", "static_validated"},
    {"dumps/vmtail-wide-1m-w16/vm_validated_handlers_retdec_batch03.c", "static_validated"},
    {"dumps/vmtail-wide-1m-w16/vm_validated_handlers_retdec_batch04.c", "static_validated"},
    {"dumps/vmtail-wide-1m-w16/vm_validated_handlers_retdec_batch05.c", "static_validated"},
    {"dumps/vmtail-wide-1m-w16/vm_validated_handlers_retdec_batch06.c", "static_validated"},
};

static HandlerRange g_ranges[MAX_ENTRIES];
static size_t g_range_count = 0;
static FunctionRange g_funcs[MAX_FUNCS];
static size_t g_func_count = 0;

static const char *path_base(const char *path) {
    const char *slash = strrchr(path, '/');
    return slash ? slash + 1 : path;
}

static void copy_string(char *dst, size_t dst_size, const char *src) {
    if (dst_size == 0) {
        return;
    }
    snprintf(dst, dst_size, "%s", src ? src : "");
}

static bool parse_uint_token(const char *text, const char *key, uint64_t *out) {
    const char *pos = strstr(text, key);
    char *end = NULL;
    if (!pos) {
        return false;
    }
    pos += strlen(key);
    *out = strtoull(pos, &end, 0);
    return end != pos;
}

static bool parse_int_token(const char *text, const char *key, int *out) {
    uint64_t value = 0;
    if (!parse_uint_token(text, key, &value)) {
        return false;
    }
    *out = (int)value;
    return true;
}

static bool parse_string_token(const char *text, const char *key, char *out, size_t out_size) {
    const char *pos = strstr(text, key);
    size_t len = 0;
    if (!pos) {
        return false;
    }
    pos += strlen(key);
    while (pos[len] && !isspace((unsigned char)pos[len])) {
        len++;
    }
    if (len >= out_size) {
        len = out_size - 1;
    }
    memcpy(out, pos, len);
    out[len] = '\0';
    return true;
}

static void append_token(char *dst, size_t dst_size, const char *token) {
    size_t len = strlen(dst);
    int written = 0;
    if (len >= dst_size - 1) {
        return;
    }
    written = snprintf(dst + len, dst_size - len, "%s%s", len ? "," : "", token);
    if (written < 0) {
        dst[dst_size - 1] = '\0';
    }
}

static uint64_t overlap_bytes(uint64_t a_start, uint64_t a_stop, uint64_t b_start, uint64_t b_stop) {
    uint64_t start = a_start > b_start ? a_start : b_start;
    uint64_t stop = a_stop < b_stop ? a_stop : b_stop;
    return stop > start ? stop - start : 0;
}

static void add_handler_range(const FileSpec *spec, uint64_t start, uint64_t stop,
                              int entry, const char *rest) {
    HandlerRange *range = NULL;
    if (g_range_count >= MAX_ENTRIES) {
        fprintf(stderr, "too many handler ranges\n");
        exit(1);
    }
    range = &g_ranges[g_range_count++];
    memset(range, 0, sizeof(*range));
    copy_string(range->path, sizeof(range->path), spec->path);
    copy_string(range->sidecar, sizeof(range->sidecar), path_base(spec->path));
    copy_string(range->class_name, sizeof(range->class_name), spec->default_class);
    range->start = start;
    range->stop = stop;
    range->entry = entry;
    range->events = -1;
    range->span_bytes = (int)(stop > start ? stop - start : 0);
    range->insns = -1;
    range->tail = 0;
    parse_string_token(rest, "class=", range->class_name, sizeof(range->class_name));
    parse_int_token(rest, "events=", &range->events);
    parse_int_token(rest, "span_bytes=", &range->span_bytes);
    parse_int_token(rest, "insns=", &range->insns);
    parse_uint_token(rest, "tail=", &range->tail);
}

static void add_function_range(const char *path, uint64_t start, uint64_t stop,
                               const char *name_start, size_t name_len) {
    FunctionRange *func = NULL;
    if (g_func_count >= MAX_FUNCS) {
        fprintf(stderr, "too many function ranges\n");
        exit(1);
    }
    func = &g_funcs[g_func_count++];
    memset(func, 0, sizeof(*func));
    copy_string(func->path, sizeof(func->path), path);
    if (name_len >= sizeof(func->name)) {
        name_len = sizeof(func->name) - 1;
    }
    memcpy(func->name, name_start, name_len);
    func->name[name_len] = '\0';
    func->start = start;
    func->stop = stop;
}

static void parse_file(const FileSpec *spec) {
    FILE *file = fopen(spec->path, "r");
    char line[MAX_LINE];
    bool pending_func = false;
    uint64_t pending_start = 0;
    uint64_t pending_stop = 0;
    if (!file) {
        fprintf(stderr, "failed to open %s\n", spec->path);
        exit(1);
    }
    while (fgets(line, sizeof(line), file)) {
        char *range_line = strstr(line, "*   0x");
        uint64_t start = 0;
        uint64_t stop = 0;
        unsigned long long parsed_start = 0;
        unsigned long long parsed_stop = 0;
        int entry = -1;
        char rest[MAX_LINE] = {0};
        if (range_line &&
            sscanf(range_line, "*   0x%llx-0x%llx entry=%d%4095[^\n]",
                   &parsed_start, &parsed_stop,
                   &entry, rest) >= 3) {
            start = (uint64_t)parsed_start;
            stop = (uint64_t)parsed_stop;
            add_handler_range(spec, start, stop, entry, rest);
            continue;
        }
        if (sscanf(line, "// Address range: 0x%llx - 0x%llx",
                   &parsed_start, &parsed_stop) == 2) {
            pending_start = (uint64_t)parsed_start;
            pending_stop = (uint64_t)parsed_stop;
            pending_func = true;
            continue;
        }
        if (pending_func) {
            const char prefix[] = "int64_t ";
            if (strncmp(line, prefix, sizeof(prefix) - 1) == 0) {
                const char *name = line + sizeof(prefix) - 1;
                const char *paren = strchr(name, '(');
                if (paren && strncmp(name, "function_", 9) == 0) {
                    add_function_range(spec->path, pending_start, pending_stop,
                                       name, (size_t)(paren - name));
                }
                pending_func = false;
            } else if (line[0] && line[0] != '\n') {
                pending_func = false;
            }
        }
    }
    fclose(file);
}

static int compare_ranges(const void *left, const void *right) {
    const HandlerRange *a = (const HandlerRange *)left;
    const HandlerRange *b = (const HandlerRange *)right;
    if (a->entry != b->entry) {
        return a->entry - b->entry;
    }
    if (a->start < b->start) {
        return -1;
    }
    if (a->start > b->start) {
        return 1;
    }
    return strcmp(a->sidecar, b->sidecar);
}

static void build_function_lists(const HandlerRange *range, int *function_count,
                                 uint64_t *covered_bytes, char *names,
                                 size_t names_size, char *func_ranges,
                                 size_t func_ranges_size) {
    *function_count = 0;
    *covered_bytes = 0;
    names[0] = '\0';
    func_ranges[0] = '\0';
    for (size_t i = 0; i < g_func_count; i++) {
        const FunctionRange *func = &g_funcs[i];
        uint64_t overlap = 0;
        char range_text[MAX_TOKEN];
        if (strcmp(func->path, range->path) != 0) {
            continue;
        }
        overlap = overlap_bytes(range->start, range->stop, func->start, func->stop);
        if (!overlap) {
            continue;
        }
        (*function_count)++;
        *covered_bytes += overlap;
        append_token(names, names_size, func->name);
        snprintf(range_text, sizeof(range_text), "0x%llx-0x%llx",
                 (unsigned long long)func->start,
                 (unsigned long long)func->stop);
        append_token(func_ranges, func_ranges_size, range_text);
    }
}

static void print_tsv(void) {
    printf("entry\tclass\tsidecar\tselected_start\tselected_stop\tselected_span_bytes\tevents\tinsns\tfunction_count\tcovered_bytes\tfunction_names\tfunction_ranges\n");
    for (size_t i = 0; i < g_range_count; i++) {
        const HandlerRange *range = &g_ranges[i];
        int function_count = 0;
        uint64_t covered_bytes = 0;
        char names[MAX_JOINED];
        char func_ranges[MAX_JOINED];
        build_function_lists(range, &function_count, &covered_bytes,
                             names, sizeof(names), func_ranges, sizeof(func_ranges));
        printf("%d\t%s\t%s\t0x%llx\t0x%llx\t%d\t%d\t%d\t%d\t%llu\t%s\t%s\n",
               range->entry, range->class_name, range->sidecar,
               (unsigned long long)range->start,
               (unsigned long long)range->stop,
               range->span_bytes, range->events, range->insns,
               function_count, (unsigned long long)covered_bytes,
               names[0] ? names : "-", func_ranges[0] ? func_ranges : "-");
    }
}

static void print_markdown(void) {
    printf("# VM Handler RetDec Index\n\n");
    printf("Native RetDec sidecar coverage for every VM dispatch-entry handler range.\n\n");
    printf("| entry | class | sidecar | selected range | funcs | covered bytes | function names |\n");
    printf("| --- | --- | --- | --- | ---: | ---: | --- |\n");
    for (size_t i = 0; i < g_range_count; i++) {
        const HandlerRange *range = &g_ranges[i];
        int function_count = 0;
        uint64_t covered_bytes = 0;
        char names[MAX_JOINED];
        char func_ranges[MAX_JOINED];
        (void)func_ranges;
        build_function_lists(range, &function_count, &covered_bytes,
                             names, sizeof(names), func_ranges, sizeof(func_ranges));
        printf("| %d | `%s` | `%s` | `0x%llx-0x%llx` | %d | %llu | `%s` |\n",
               range->entry, range->class_name, range->sidecar,
               (unsigned long long)range->start,
               (unsigned long long)range->stop, function_count,
               (unsigned long long)covered_bytes, names[0] ? names : "-");
    }
}

int main(int argc, char **argv) {
    bool markdown = false;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--markdown") == 0) {
            markdown = true;
        } else {
            fprintf(stderr, "usage: %s [--markdown]\n", argv[0]);
            return 2;
        }
    }
    for (size_t i = 0; i < sizeof(k_files) / sizeof(k_files[0]); i++) {
        parse_file(&k_files[i]);
    }
    qsort(g_ranges, g_range_count, sizeof(g_ranges[0]), compare_ranges);
    if (markdown) {
        print_markdown();
    } else {
        print_tsv();
    }
    fprintf(stderr, "handler_retdec_index_rows=%zu\n", g_range_count);
    fprintf(stderr, "handler_retdec_index_functions=%zu\n", g_func_count);
    return 0;
}
