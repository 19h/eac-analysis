#define _GNU_SOURCE

#include <errno.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *label;
    uint64_t count;
    uint64_t order;
} CounterItem;

typedef struct {
    CounterItem *items;
    size_t len;
    size_t cap;
    uint64_t next_order;
} Counter;

typedef struct {
    uint64_t *items;
    size_t len;
    size_t cap;
} UIntSet;

typedef struct {
    uint64_t start;
    uint64_t end;
    uint64_t order;
    char *source_entry;
    char *target_entry;
    char *delta;
    char *byte_status;
} Row;

typedef struct {
    Row *items;
    size_t len;
    size_t cap;
} Rows;

typedef struct {
    uint64_t start;
    uint64_t end;
} Interval;

typedef struct {
    uint64_t start;
    uint64_t end;
    uint64_t events;
    UIntSet starts;
    Counter sources;
    Counter targets;
    Counter deltas;
    Counter statuses;
} Block;

typedef struct {
    int seq;
    int source_entry;
    int start_vm_ip;
    int delta;
    int target_entry;
    int bytes;
    int byte_status;
} TraceCols;

static void die(const char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(1);
}

static void *xcalloc(size_t count, size_t size) {
    void *ptr = calloc(count, size);
    if (!ptr) {
        perror("calloc");
        exit(1);
    }
    return ptr;
}

static void *xrealloc(void *ptr, size_t size) {
    void *out = realloc(ptr, size);
    if (!out) {
        perror("realloc");
        exit(1);
    }
    return out;
}

static char *xstrdup(const char *text) {
    char *out = strdup(text ? text : "");
    if (!out) {
        perror("strdup");
        exit(1);
    }
    return out;
}

static uint64_t parse_u64(const char *text) {
    errno = 0;
    char *end = NULL;
    uint64_t value = strtoull(text, &end, 0);
    if (errno || !end || *end) {
        fprintf(stderr, "failed to parse integer: %s\n", text);
        exit(1);
    }
    return value;
}

static int64_t parse_signed_hex(const char *text, bool *ok) {
    *ok = false;
    if (!text || !*text) {
        return 0;
    }
    int sign = 1;
    const char *p = text;
    if (*p == '+') {
        p++;
    } else if (*p == '-') {
        sign = -1;
        p++;
    }
    errno = 0;
    char *end = NULL;
    uint64_t value = strtoull(p, &end, 0);
    if (errno || !end || *end) {
        return 0;
    }
    *ok = true;
    return sign < 0 ? -(int64_t)value : (int64_t)value;
}

static int split_fields(char *line, char **fields, int max_fields) {
    int count = 0;
    fields[count++] = line;
    for (char *p = line; *p; p++) {
        if (*p == '\t') {
            *p = '\0';
            if (count < max_fields) {
                fields[count++] = p + 1;
            }
        } else if (*p == '\n' || *p == '\r') {
            *p = '\0';
            if (p[1] == '\n') {
                p[1] = '\0';
            }
            break;
        }
    }
    return count;
}

static int find_col(char **fields, int count, const char *name) {
    for (int i = 0; i < count; i++) {
        if (strcmp(fields[i], name) == 0) {
            return i;
        }
    }
    return -1;
}

static void require_col(int *slot, char **fields, int count, const char *name) {
    *slot = find_col(fields, count, name);
    if (*slot < 0) {
        fprintf(stderr, "missing column: %s\n", name);
        exit(1);
    }
}

static TraceCols parse_header(char *line) {
    char *fields[128];
    int count = split_fields(line, fields, 128);
    TraceCols cols;
    require_col(&cols.seq, fields, count, "seq");
    require_col(&cols.source_entry, fields, count, "source_entry");
    require_col(&cols.start_vm_ip, fields, count, "start_vm_ip");
    require_col(&cols.delta, fields, count, "delta");
    require_col(&cols.target_entry, fields, count, "target_entry");
    require_col(&cols.bytes, fields, count, "bytes");
    require_col(&cols.byte_status, fields, count, "byte_status");
    return cols;
}

static void rows_append(Rows *rows, uint64_t start, uint64_t end, uint64_t order,
                        const char *source, const char *target, const char *delta, const char *status) {
    if (rows->len == rows->cap) {
        rows->cap = rows->cap ? rows->cap * 2 : 4096;
        rows->items = xrealloc(rows->items, rows->cap * sizeof(rows->items[0]));
    }
    rows->items[rows->len].start = start;
    rows->items[rows->len].end = end;
    rows->items[rows->len].order = order;
    rows->items[rows->len].source_entry = xstrdup(source);
    rows->items[rows->len].target_entry = xstrdup(target);
    rows->items[rows->len].delta = xstrdup(delta);
    rows->items[rows->len].byte_status = xstrdup(status);
    rows->len++;
}

static void load_trace(const char *path, bool include_sampled, Rows *rows) {
    FILE *fp = fopen(path, "r");
    if (!fp) {
        perror(path);
        exit(1);
    }

    char *line = NULL;
    size_t cap = 0;
    ssize_t n = getline(&line, &cap, fp);
    if (n < 0) {
        die("empty trace");
    }
    TraceCols cols = parse_header(line);

    uint64_t order = 0;
    char *fields[128];
    while ((n = getline(&line, &cap, fp)) >= 0) {
        int count = split_fields(line, fields, 128);
        if (count <= cols.byte_status) {
            continue;
        }

        const char *status = fields[cols.byte_status];
        size_t byte_len = strlen(fields[cols.bytes]) / 2;
        uint64_t coverage_len = 0;
        if (strcmp(status, "exact") == 0) {
            bool ok = false;
            int64_t delta = parse_signed_hex(fields[cols.delta], &ok);
            if (!ok) {
                fprintf(stderr, "failed to parse delta at seq=%s: %s\n", fields[cols.seq], fields[cols.delta]);
                exit(1);
            }
            if (delta <= 0) {
                order++;
                continue;
            }
            coverage_len = (uint64_t)delta;
        } else if (include_sampled && byte_len > 0) {
            coverage_len = byte_len;
        } else {
            order++;
            continue;
        }

        uint64_t start = parse_u64(fields[cols.start_vm_ip]);
        uint64_t end = start + coverage_len;
        if (end > start) {
            rows_append(rows, start, end, order, fields[cols.source_entry], fields[cols.target_entry], fields[cols.delta], status);
        }
        order++;
    }

    free(line);
    fclose(fp);
}

static int interval_cmp(const void *a, const void *b) {
    const Interval *ia = (const Interval *)a;
    const Interval *ib = (const Interval *)b;
    if (ia->start != ib->start) {
        return ia->start < ib->start ? -1 : 1;
    }
    if (ia->end != ib->end) {
        return ia->end < ib->end ? -1 : 1;
    }
    return 0;
}

static Block *build_blocks(const Rows *rows, size_t *block_count) {
    Interval *intervals = xcalloc(rows->len ? rows->len : 1, sizeof(intervals[0]));
    for (size_t i = 0; i < rows->len; i++) {
        intervals[i].start = rows->items[i].start;
        intervals[i].end = rows->items[i].end;
    }
    qsort(intervals, rows->len, sizeof(intervals[0]), interval_cmp);

    Block *blocks = NULL;
    size_t len = 0;
    size_t cap = 0;
    for (size_t i = 0; i < rows->len; i++) {
        uint64_t start = intervals[i].start;
        uint64_t end = intervals[i].end;
        if (!len || start > blocks[len - 1].end) {
            if (len == cap) {
                cap = cap ? cap * 2 : 128;
                blocks = xrealloc(blocks, cap * sizeof(blocks[0]));
            }
            memset(&blocks[len], 0, sizeof(blocks[len]));
            blocks[len].start = start;
            blocks[len].end = end;
            len++;
        } else if (end > blocks[len - 1].end) {
            blocks[len - 1].end = end;
        }
    }

    free(intervals);
    *block_count = len;
    return blocks;
}

static int row_ptr_cmp(const void *a, const void *b) {
    const Row *ra = *(const Row *const *)a;
    const Row *rb = *(const Row *const *)b;
    if (ra->start != rb->start) {
        return ra->start < rb->start ? -1 : 1;
    }
    if (ra->order != rb->order) {
        return ra->order < rb->order ? -1 : 1;
    }
    return 0;
}

static void counter_add(Counter *counter, const char *label) {
    for (size_t i = 0; i < counter->len; i++) {
        if (strcmp(counter->items[i].label, label) == 0) {
            counter->items[i].count++;
            return;
        }
    }
    if (counter->len == counter->cap) {
        counter->cap = counter->cap ? counter->cap * 2 : 8;
        counter->items = xrealloc(counter->items, counter->cap * sizeof(counter->items[0]));
    }
    counter->items[counter->len].label = xstrdup(label);
    counter->items[counter->len].count = 1;
    counter->items[counter->len].order = counter->next_order++;
    counter->len++;
}

static void uintset_add(UIntSet *set, uint64_t value) {
    for (size_t i = 0; i < set->len; i++) {
        if (set->items[i] == value) {
            return;
        }
    }
    if (set->len == set->cap) {
        set->cap = set->cap ? set->cap * 2 : 16;
        set->items = xrealloc(set->items, set->cap * sizeof(set->items[0]));
    }
    set->items[set->len++] = value;
}

static size_t row_block_index(const Block *blocks, size_t block_count, uint64_t start) {
    size_t lo = 0;
    size_t hi = block_count;
    while (lo < hi) {
        size_t mid = (lo + hi) / 2;
        if (blocks[mid].end <= start) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    if (lo < block_count && blocks[lo].start <= start && start < blocks[lo].end) {
        return lo;
    }
    return SIZE_MAX;
}

static void assign_rows(const Rows *rows, Block *blocks, size_t block_count) {
    Row **sorted = xcalloc(rows->len ? rows->len : 1, sizeof(sorted[0]));
    for (size_t i = 0; i < rows->len; i++) {
        sorted[i] = &rows->items[i];
    }
    qsort(sorted, rows->len, sizeof(sorted[0]), row_ptr_cmp);

    for (size_t i = 0; i < rows->len; i++) {
        Row *row = sorted[i];
        size_t idx = row_block_index(blocks, block_count, row->start);
        if (idx == SIZE_MAX) {
            continue;
        }
        Block *block = &blocks[idx];
        block->events++;
        uintset_add(&block->starts, row->start);
        counter_add(&block->sources, row->source_entry);
        counter_add(&block->targets, row->target_entry);
        counter_add(&block->deltas, row->delta);
        counter_add(&block->statuses, row->byte_status);
    }

    free(sorted);
}

static int counter_item_ptr_cmp(const void *a, const void *b) {
    const CounterItem *ia = *(const CounterItem *const *)a;
    const CounterItem *ib = *(const CounterItem *const *)b;
    if (ia->count != ib->count) {
        return ia->count > ib->count ? -1 : 1;
    }
    if (ia->order != ib->order) {
        return ia->order < ib->order ? -1 : 1;
    }
    return 0;
}

static void print_counter(const Counter *counter, int max_items) {
    if (!counter->len || max_items <= 0) {
        return;
    }
    CounterItem **items = xcalloc(counter->len, sizeof(items[0]));
    for (size_t i = 0; i < counter->len; i++) {
        items[i] = &counter->items[i];
    }
    qsort(items, counter->len, sizeof(items[0]), counter_item_ptr_cmp);
    size_t limit = counter->len < (size_t)max_items ? counter->len : (size_t)max_items;
    for (size_t i = 0; i < limit; i++) {
        if (i) {
            putchar(',');
        }
        printf("%s:%" PRIu64, items[i]->label, items[i]->count);
    }
    free(items);
}

static void emit_blocks(const Block *blocks, size_t block_count, int max_items) {
    puts("block\tstart\tend\tsize\tevents\tunique_start_ips\tunique_sources\ttop_sources\ttop_targets\ttop_deltas\tbyte_statuses");
    for (size_t idx = 0; idx < block_count; idx++) {
        const Block *block = &blocks[idx];
        printf("%zu\t0x%" PRIx64 "\t0x%" PRIx64 "\t0x%" PRIx64 "\t%" PRIu64 "\t%zu\t%zu\t",
               idx,
               block->start,
               block->end,
               block->end - block->start,
               block->events,
               block->starts.len,
               block->sources.len);
        print_counter(&block->sources, max_items);
        putchar('\t');
        print_counter(&block->targets, max_items);
        putchar('\t');
        print_counter(&block->deltas, max_items);
        putchar('\t');
        print_counter(&block->statuses, max_items);
        putchar('\n');
    }
}

static void usage(const char *argv0) {
    fprintf(stderr, "usage: %s TRACE [--include-sampled] [--max-items N]\n", argv0);
}

int main(int argc, char **argv) {
    const char *trace = NULL;
    bool include_sampled = false;
    int max_items = 8;

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--include-sampled") == 0) {
            include_sampled = true;
        } else if (strcmp(argv[i], "--max-items") == 0) {
            if (i + 1 >= argc) {
                usage(argv[0]);
                return 2;
            }
            max_items = atoi(argv[++i]);
            if (max_items < 0) {
                die("--max-items must be non-negative");
            }
        } else if (!trace) {
            trace = argv[i];
        } else {
            usage(argv[0]);
            return 2;
        }
    }
    if (!trace) {
        trace = "dumps/vmtail-wide-1m-w16/vm_instruction_trace.tsv";
    }

    Rows rows = {0};
    load_trace(trace, include_sampled, &rows);
    size_t block_count = 0;
    Block *blocks = build_blocks(&rows, &block_count);
    assign_rows(&rows, blocks, block_count);
    emit_blocks(blocks, block_count, max_items);
    return 0;
}
