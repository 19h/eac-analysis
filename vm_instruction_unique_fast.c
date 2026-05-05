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
} Counter;

typedef struct {
    char *start_vm_ip;
    char *source_entry;
    char *source_target;
    char *delta;
    char *bytes;
    char *status;
    uint64_t start_value;
    int source_value;
    uint64_t count;
    uint64_t order;
    uint64_t counter_order;
    Counter end_ips;
    Counter targets;
    Counter sites;
} Group;

typedef struct {
    Group **slots;
    size_t cap;
    size_t len;
    Group **groups;
    size_t group_len;
    size_t group_cap;
} GroupTable;

typedef struct {
    int seq;
    int source_entry;
    int source_target;
    int start_vm_ip;
    int end_vm_ip;
    int delta;
    int kind;
    int site;
    int target_entry;
    int target;
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

static uint64_t fnv1a(const char *text, uint64_t seed) {
    uint64_t hash = seed;
    const unsigned char *p = (const unsigned char *)text;
    while (*p) {
        hash ^= (uint64_t)*p++;
        hash *= UINT64_C(1099511628211);
    }
    return hash;
}

static uint64_t group_hash(const char *start, const char *source, const char *delta, const char *bytes, const char *status) {
    uint64_t hash = UINT64_C(1469598103934665603);
    hash = fnv1a(start, hash);
    hash = fnv1a("\xff", hash);
    hash = fnv1a(source, hash);
    hash = fnv1a("\xfe", hash);
    hash = fnv1a(delta, hash);
    hash = fnv1a("\xfd", hash);
    hash = fnv1a(bytes, hash);
    hash = fnv1a("\xfc", hash);
    hash = fnv1a(status, hash);
    return hash;
}

static bool key_matches(Group *group, const char *start, const char *source, const char *delta, const char *bytes, const char *status) {
    return strcmp(group->start_vm_ip, start) == 0 &&
           strcmp(group->source_entry, source) == 0 &&
           strcmp(group->delta, delta) == 0 &&
           strcmp(group->bytes, bytes) == 0 &&
           strcmp(group->status, status) == 0;
}

static uint64_t parse_u64_hex(const char *text) {
    errno = 0;
    char *end = NULL;
    uint64_t value = strtoull(text, &end, 0);
    if (errno || !end || *end) {
        fprintf(stderr, "failed to parse integer: %s\n", text);
        exit(1);
    }
    return value;
}

static int parse_int_decimal(const char *text) {
    errno = 0;
    char *end = NULL;
    long value = strtol(text, &end, 10);
    if (errno || !end || *end) {
        fprintf(stderr, "failed to parse decimal integer: %s\n", text);
        exit(1);
    }
    return (int)value;
}

static int64_t parse_signed_hex(const char *text, bool *ok) {
    *ok = false;
    if (!text || !*text) {
        return 0;
    }

    int sign = 1;
    const char *p = text;
    if (p[0] == '+') {
        p++;
    } else if (p[0] == '-') {
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
    if (sign < 0) {
        return -(int64_t)value;
    }
    return (int64_t)value;
}

static void counter_add(Counter *counter, const char *label, uint64_t *order) {
    for (size_t i = 0; i < counter->len; i++) {
        if (strcmp(counter->items[i].label, label) == 0) {
            counter->items[i].count++;
            return;
        }
    }

    if (counter->len == counter->cap) {
        counter->cap = counter->cap ? counter->cap * 2 : 4;
        counter->items = xrealloc(counter->items, counter->cap * sizeof(counter->items[0]));
    }
    counter->items[counter->len].label = xstrdup(label);
    counter->items[counter->len].count = 1;
    counter->items[counter->len].order = (*order)++;
    counter->len++;
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

static void table_init(GroupTable *table, size_t cap) {
    table->cap = cap;
    table->slots = xcalloc(table->cap, sizeof(table->slots[0]));
}

static void table_insert_existing(GroupTable *table, Group *group) {
    uint64_t hash = group_hash(group->start_vm_ip, group->source_entry, group->delta, group->bytes, group->status);
    size_t mask = table->cap - 1;
    for (size_t probe = 0; probe < table->cap; probe++) {
        size_t idx = (hash + probe) & mask;
        if (!table->slots[idx]) {
            table->slots[idx] = group;
            table->len++;
            return;
        }
    }
    die("hash table insert failed");
}

static void table_resize(GroupTable *table) {
    Group **old_slots = table->slots;
    size_t old_cap = table->cap;
    table->cap *= 2;
    table->slots = xcalloc(table->cap, sizeof(table->slots[0]));
    table->len = 0;
    for (size_t i = 0; i < old_cap; i++) {
        if (old_slots[i]) {
            table_insert_existing(table, old_slots[i]);
        }
    }
    free(old_slots);
}

static void table_append_group(GroupTable *table, Group *group) {
    if (table->group_len == table->group_cap) {
        table->group_cap = table->group_cap ? table->group_cap * 2 : 4096;
        table->groups = xrealloc(table->groups, table->group_cap * sizeof(table->groups[0]));
    }
    table->groups[table->group_len++] = group;
}

static Group *table_get_or_add(GroupTable *table, const char *start, const char *source, const char *source_target,
                               const char *delta, const char *bytes, const char *status) {
    if ((table->len + 1) * 10 >= table->cap * 7) {
        table_resize(table);
    }

    uint64_t hash = group_hash(start, source, delta, bytes, status);
    size_t mask = table->cap - 1;
    for (size_t probe = 0; probe < table->cap; probe++) {
        size_t idx = (hash + probe) & mask;
        Group *group = table->slots[idx];
        if (group) {
            if (key_matches(group, start, source, delta, bytes, status)) {
                return group;
            }
            continue;
        }

        group = xcalloc(1, sizeof(*group));
        group->start_vm_ip = xstrdup(start);
        group->source_entry = xstrdup(source);
        group->source_target = xstrdup(source_target);
        group->delta = xstrdup(delta);
        group->bytes = xstrdup(bytes);
        group->status = xstrdup(status);
        group->start_value = parse_u64_hex(start);
        group->source_value = parse_int_decimal(source);
        group->order = table->group_len;
        table->slots[idx] = group;
        table->len++;
        table_append_group(table, group);
        return group;
    }

    die("hash table lookup failed");
    return NULL;
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
    require_col(&cols.source_target, fields, count, "source_target");
    require_col(&cols.start_vm_ip, fields, count, "start_vm_ip");
    require_col(&cols.end_vm_ip, fields, count, "end_vm_ip");
    require_col(&cols.delta, fields, count, "delta");
    require_col(&cols.kind, fields, count, "kind");
    require_col(&cols.site, fields, count, "site");
    require_col(&cols.target_entry, fields, count, "target_entry");
    require_col(&cols.target, fields, count, "target");
    require_col(&cols.bytes, fields, count, "bytes");
    require_col(&cols.byte_status, fields, count, "byte_status");
    return cols;
}

static char *join2(const char *left, const char *sep, const char *right) {
    size_t len = strlen(left) + strlen(sep) + strlen(right) + 1;
    char *out = xcalloc(len, 1);
    snprintf(out, len, "%s%s%s", left, sep, right);
    return out;
}

static void load_trace(const char *path, GroupTable *table) {
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

    char *fields[128];
    while ((n = getline(&line, &cap, fp)) >= 0) {
        int count = split_fields(line, fields, 128);
        if (count <= cols.byte_status) {
            continue;
        }

        const char *status = fields[cols.byte_status];
        if (strcmp(status, "exact") != 0) {
            continue;
        }

        bool ok = false;
        int64_t delta = parse_signed_hex(fields[cols.delta], &ok);
        if (!ok) {
            fprintf(stderr, "failed to parse delta at seq=%s: %s\n", fields[cols.seq], fields[cols.delta]);
            exit(1);
        }
        if (delta <= 0) {
            continue;
        }
        size_t byte_hex_len = strlen(fields[cols.bytes]);
        if (byte_hex_len != (size_t)delta * 2) {
            fprintf(stderr, "exact row has mismatched byte length: seq=%s\n", fields[cols.seq]);
            exit(1);
        }

        Group *group = table_get_or_add(
            table,
            fields[cols.start_vm_ip],
            fields[cols.source_entry],
            fields[cols.source_target],
            fields[cols.delta],
            fields[cols.bytes],
            status
        );
        group->count++;
        counter_add(&group->end_ips, fields[cols.end_vm_ip], &group->counter_order);

        char *target_label = join2(fields[cols.target_entry], "@", fields[cols.target]);
        counter_add(&group->targets, target_label, &group->counter_order);
        free(target_label);

        char *site_label = join2(fields[cols.kind], "@", fields[cols.site]);
        counter_add(&group->sites, site_label, &group->counter_order);
        free(site_label);
    }

    free(line);
    fclose(fp);
}

static int group_ptr_cmp(const void *a, const void *b) {
    const Group *ga = *(const Group *const *)a;
    const Group *gb = *(const Group *const *)b;
    if (ga->count != gb->count) {
        return ga->count > gb->count ? -1 : 1;
    }
    if (ga->start_value != gb->start_value) {
        return ga->start_value < gb->start_value ? -1 : 1;
    }
    if (ga->source_value != gb->source_value) {
        return ga->source_value < gb->source_value ? -1 : 1;
    }
    if (ga->order != gb->order) {
        return ga->order < gb->order ? -1 : 1;
    }
    return 0;
}

static void emit_groups(GroupTable *table, int max_items) {
    qsort(table->groups, table->group_len, sizeof(table->groups[0]), group_ptr_cmp);

    puts("start_vm_ip\tsource_entry\tsource_target\tdelta\tbytes\tbyte_status\tcount\ttop_end_ips\ttop_targets\ttop_sites");
    for (size_t i = 0; i < table->group_len; i++) {
        Group *group = table->groups[i];
        printf("%s\t%s\t%s\t%s\t%s\t%s\t%" PRIu64 "\t",
               group->start_vm_ip,
               group->source_entry,
               group->source_target,
               group->delta,
               group->bytes,
               group->status,
               group->count);
        print_counter(&group->end_ips, max_items);
        putchar('\t');
        print_counter(&group->targets, max_items);
        putchar('\t');
        print_counter(&group->sites, max_items);
        putchar('\n');
    }
}

static void usage(const char *argv0) {
    fprintf(stderr, "usage: %s TRACE [--max-items N]\n", argv0);
}

int main(int argc, char **argv) {
    const char *trace = NULL;
    int max_items = 8;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--max-items") == 0) {
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

    GroupTable table = {0};
    table_init(&table, 131072);
    load_trace(trace, &table);
    emit_groups(&table, max_items);
    return 0;
}
