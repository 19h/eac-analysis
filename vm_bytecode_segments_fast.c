#define _GNU_SOURCE

#include <errno.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <openssl/sha.h>

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
    uint8_t value;
    uint32_t count;
    uint32_t order;
} ByteCount;

typedef struct {
    uint64_t offset;
    uint32_t events;
    uint32_t order_next;
    ByteCount inline_counts[4];
    ByteCount *extra_counts;
    size_t len;
    size_t cap;
    bool used;
} ByteCell;

typedef struct {
    ByteCell *slots;
    size_t cap;
    size_t len;
} ByteMap;

typedef struct {
    uint64_t start;
    char *source_entry;
    char *target_entry;
    char *delta;
} Row;

typedef struct {
    Row *items;
    size_t len;
    size_t cap;
} Rows;

typedef struct {
    uint64_t start;
    uint64_t end;
    size_t cell_first;
    size_t cell_last;
    uint64_t events;
    UIntSet starts;
    Counter sources;
    Counter targets;
    Counter deltas;
} Segment;

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

static int hex_nibble(char ch) {
    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    }
    if (ch >= 'a' && ch <= 'f') {
        return ch - 'a' + 10;
    }
    if (ch >= 'A' && ch <= 'F') {
        return ch - 'A' + 10;
    }
    return -1;
}

static uint8_t parse_hex_byte(const char *text) {
    int hi = hex_nibble(text[0]);
    int lo = hex_nibble(text[1]);
    if (hi < 0 || lo < 0) {
        fprintf(stderr, "invalid hex byte: %.2s\n", text);
        exit(1);
    }
    return (uint8_t)((hi << 4) | lo);
}

static uint64_t mix_u64(uint64_t value) {
    value ^= value >> 33;
    value *= UINT64_C(0xff51afd7ed558ccd);
    value ^= value >> 33;
    value *= UINT64_C(0xc4ceb9fe1a85ec53);
    value ^= value >> 33;
    return value;
}

static ByteCount *cell_counts(ByteCell *cell) {
    return cell->extra_counts ? cell->extra_counts : cell->inline_counts;
}

static void cell_promote(ByteCell *cell) {
    if (cell->extra_counts) {
        return;
    }
    cell->cap = 8;
    cell->extra_counts = xcalloc(cell->cap, sizeof(cell->extra_counts[0]));
    memcpy(cell->extra_counts, cell->inline_counts, cell->len * sizeof(cell->inline_counts[0]));
}

static void cell_add_byte(ByteCell *cell, uint8_t value) {
    ByteCount *counts = cell_counts(cell);
    for (size_t i = 0; i < cell->len; i++) {
        if (counts[i].value == value) {
            counts[i].count++;
            cell->events++;
            return;
        }
    }

    if (!cell->extra_counts && cell->len == 4) {
        cell_promote(cell);
        counts = cell_counts(cell);
    } else if (cell->extra_counts && cell->len == cell->cap) {
        cell->cap *= 2;
        cell->extra_counts = xrealloc(cell->extra_counts, cell->cap * sizeof(cell->extra_counts[0]));
        counts = cell_counts(cell);
    }

    counts[cell->len].value = value;
    counts[cell->len].count = 1;
    counts[cell->len].order = cell->order_next++;
    cell->len++;
    cell->events++;
}

static void bytemap_init(ByteMap *map, size_t cap) {
    map->cap = cap;
    map->slots = xcalloc(map->cap, sizeof(map->slots[0]));
}

static void bytemap_insert_existing(ByteMap *map, ByteCell old) {
    size_t mask = map->cap - 1;
    uint64_t hash = mix_u64(old.offset);
    for (size_t probe = 0; probe < map->cap; probe++) {
        size_t idx = (hash + probe) & mask;
        if (!map->slots[idx].used) {
            map->slots[idx] = old;
            map->len++;
            return;
        }
    }
    die("byte map insert failed");
}

static void bytemap_resize(ByteMap *map) {
    ByteCell *old = map->slots;
    size_t old_cap = map->cap;
    map->cap *= 2;
    map->slots = xcalloc(map->cap, sizeof(map->slots[0]));
    map->len = 0;
    for (size_t i = 0; i < old_cap; i++) {
        if (old[i].used) {
            bytemap_insert_existing(map, old[i]);
        }
    }
    free(old);
}

static ByteCell *bytemap_get(ByteMap *map, uint64_t offset) {
    if ((map->len + 1) * 10 >= map->cap * 7) {
        bytemap_resize(map);
    }

    size_t mask = map->cap - 1;
    uint64_t hash = mix_u64(offset);
    for (size_t probe = 0; probe < map->cap; probe++) {
        size_t idx = (hash + probe) & mask;
        ByteCell *cell = &map->slots[idx];
        if (cell->used) {
            if (cell->offset == offset) {
                return cell;
            }
            continue;
        }
        cell->used = true;
        cell->offset = offset;
        map->len++;
        return cell;
    }

    die("byte map lookup failed");
    return NULL;
}

static void rows_append(Rows *rows, uint64_t start, const char *source_entry, const char *target_entry, const char *delta) {
    if (rows->len == rows->cap) {
        rows->cap = rows->cap ? rows->cap * 2 : 4096;
        rows->items = xrealloc(rows->items, rows->cap * sizeof(rows->items[0]));
    }
    rows->items[rows->len].start = start;
    rows->items[rows->len].source_entry = xstrdup(source_entry);
    rows->items[rows->len].target_entry = xstrdup(target_entry);
    rows->items[rows->len].delta = xstrdup(delta);
    rows->len++;
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

static void load_trace(const char *path, bool include_sampled, Rows *rows, ByteMap *byte_map) {
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
        const char *byte_hex = fields[cols.bytes];
        size_t byte_hex_len = strlen(byte_hex);
        size_t byte_len = byte_hex_len / 2;

        if (strcmp(status, "exact") == 0) {
            bool ok = false;
            int64_t delta = parse_signed_hex(fields[cols.delta], &ok);
            if (!ok) {
                fprintf(stderr, "failed to parse delta at seq=%s: %s\n", fields[cols.seq], fields[cols.delta]);
                exit(1);
            }
            if (delta <= 0) {
                continue;
            }
            if (byte_hex_len != (size_t)delta * 2) {
                fprintf(stderr, "exact row has mismatched byte length: seq=%s\n", fields[cols.seq]);
                exit(1);
            }
        } else if (!include_sampled) {
            continue;
        } else if (byte_len == 0) {
            continue;
        }

        if (byte_hex_len & 1) {
            fprintf(stderr, "odd byte hex length at seq=%s\n", fields[cols.seq]);
            exit(1);
        }

        uint64_t start = parse_u64(fields[cols.start_vm_ip]);
        for (size_t i = 0; i < byte_len; i++) {
            ByteCell *cell = bytemap_get(byte_map, start + i);
            cell_add_byte(cell, parse_hex_byte(byte_hex + i * 2));
        }
        rows_append(rows, start, fields[cols.source_entry], fields[cols.target_entry], fields[cols.delta]);
    }

    free(line);
    fclose(fp);
}

static int bytecell_ptr_cmp(const void *a, const void *b) {
    const ByteCell *ca = *(const ByteCell *const *)a;
    const ByteCell *cb = *(const ByteCell *const *)b;
    if (ca->offset != cb->offset) {
        return ca->offset < cb->offset ? -1 : 1;
    }
    return 0;
}

static ByteCell **sorted_cells(ByteMap *map) {
    ByteCell **cells = xcalloc(map->len, sizeof(cells[0]));
    size_t out = 0;
    for (size_t i = 0; i < map->cap; i++) {
        if (map->slots[i].used) {
            cells[out++] = &map->slots[i];
        }
    }
    qsort(cells, map->len, sizeof(cells[0]), bytecell_ptr_cmp);
    return cells;
}

static Segment *build_segments(ByteCell **cells, size_t cell_count, size_t *segment_count) {
    Segment *segments = NULL;
    size_t len = 0;
    size_t cap = 0;

    for (size_t i = 0; i < cell_count; i++) {
        uint64_t offset = cells[i]->offset;
        if (!len || offset != segments[len - 1].end) {
            if (len == cap) {
                cap = cap ? cap * 2 : 128;
                segments = xrealloc(segments, cap * sizeof(segments[0]));
            }
            memset(&segments[len], 0, sizeof(segments[len]));
            segments[len].start = offset;
            segments[len].end = offset + 1;
            segments[len].cell_first = i;
            segments[len].cell_last = i + 1;
            len++;
        } else {
            segments[len - 1].end = offset + 1;
            segments[len - 1].cell_last = i + 1;
        }
    }

    *segment_count = len;
    return segments;
}

static uint8_t dominant_byte(const ByteCell *cell) {
    const ByteCount *counts = cell->extra_counts ? cell->extra_counts : cell->inline_counts;
    const ByteCount *best = &counts[0];
    for (size_t i = 1; i < cell->len; i++) {
        if (counts[i].count > best->count ||
            (counts[i].count == best->count && counts[i].order < best->order)) {
            best = &counts[i];
        }
    }
    return best->value;
}

static void conflict_stats(const ByteCell *cell, uint64_t *offsets, uint64_t *events) {
    if (cell->len <= 1) {
        return;
    }
    const ByteCount *counts = cell->extra_counts ? cell->extra_counts : cell->inline_counts;
    const ByteCount *best = &counts[0];
    for (size_t i = 1; i < cell->len; i++) {
        if (counts[i].count > best->count ||
            (counts[i].count == best->count && counts[i].order < best->order)) {
            best = &counts[i];
        }
    }
    (*offsets)++;
    *events += cell->events - best->count;
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

static size_t row_segment_index(const Segment *segments, size_t segment_count, uint64_t start) {
    size_t lo = 0;
    size_t hi = segment_count;
    while (lo < hi) {
        size_t mid = (lo + hi) / 2;
        if (segments[mid].end <= start) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    if (lo < segment_count && segments[lo].start <= start && start < segments[lo].end) {
        return lo;
    }
    return SIZE_MAX;
}

static void attach_rows_to_segments(const Rows *rows, Segment *segments, size_t segment_count) {
    for (size_t i = 0; i < rows->len; i++) {
        const Row *row = &rows->items[i];
        size_t idx = row_segment_index(segments, segment_count, row->start);
        if (idx == SIZE_MAX) {
            continue;
        }
        Segment *segment = &segments[idx];
        segment->events++;
        uintset_add(&segment->starts, row->start);
        counter_add(&segment->sources, row->source_entry);
        counter_add(&segment->targets, row->target_entry);
        counter_add(&segment->deltas, row->delta);
    }
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

static void bytes_to_hex(const uint8_t *data, size_t len, char *out) {
    static const char hex[] = "0123456789abcdef";
    for (size_t i = 0; i < len; i++) {
        out[i * 2] = hex[data[i] >> 4];
        out[i * 2 + 1] = hex[data[i] & 0xf];
    }
    out[len * 2] = '\0';
}

static void emit_segments(ByteCell **cells, Segment *segments, size_t segment_count, int max_items) {
    puts("segment\tstart\tend\tsize\tevents\tunique_start_ips\tunique_sources\tconflict_offsets\tconflict_events\tsha256\ttop_sources\ttop_targets\ttop_deltas\thex_prefix\thex_suffix");

    for (size_t idx = 0; idx < segment_count; idx++) {
        Segment *segment = &segments[idx];
        size_t size = (size_t)(segment->end - segment->start);
        uint8_t *data = xcalloc(size ? size : 1, 1);
        uint64_t conflicts = 0;
        uint64_t conflict_events = 0;

        for (size_t i = segment->cell_first; i < segment->cell_last; i++) {
            ByteCell *cell = cells[i];
            data[cell->offset - segment->start] = dominant_byte(cell);
            conflict_stats(cell, &conflicts, &conflict_events);
        }

        unsigned char digest[SHA256_DIGEST_LENGTH];
        SHA256(data, size, digest);
        char digest_hex[SHA256_DIGEST_LENGTH * 2 + 1];
        bytes_to_hex(digest, SHA256_DIGEST_LENGTH, digest_hex);

        size_t prefix_len = size < 64 ? size : 64;
        char prefix[64 * 2 + 1];
        bytes_to_hex(data, prefix_len, prefix);

        char suffix[64 * 2 + 1] = "";
        if (size > 64) {
            bytes_to_hex(data + size - 64, 64, suffix);
        }

        printf("%zu\t0x%" PRIx64 "\t0x%" PRIx64 "\t0x%" PRIx64 "\t%" PRIu64 "\t%zu\t%zu\t%" PRIu64 "\t%" PRIu64 "\t%s\t",
               idx,
               segment->start,
               segment->end,
               segment->end - segment->start,
               segment->events,
               segment->starts.len,
               segment->sources.len,
               conflicts,
               conflict_events,
               digest_hex);
        print_counter(&segment->sources, max_items);
        putchar('\t');
        print_counter(&segment->targets, max_items);
        putchar('\t');
        print_counter(&segment->deltas, max_items);
        printf("\t%s\t%s\n", prefix, suffix);

        free(data);
    }
}

static void emit_summary(const Rows *rows, ByteCell **cells, Segment *segments, size_t segment_count) {
    uint64_t conflict_offsets = 0;
    uint64_t conflict_events = 0;
    uint64_t total_bytes = 0;
    for (size_t idx = 0; idx < segment_count; idx++) {
        Segment *segment = &segments[idx];
        total_bytes += segment->end - segment->start;
        for (size_t i = segment->cell_first; i < segment->cell_last; i++) {
            conflict_stats(cells[i], &conflict_offsets, &conflict_events);
        }
    }
    fprintf(stderr,
            "rows=%zu segments=%zu bytes=0x%" PRIx64 " conflict_offsets=%" PRIu64 " conflict_events=%" PRIu64 "\n",
            rows->len,
            segment_count,
            total_bytes,
            conflict_offsets,
            conflict_events);
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
    ByteMap byte_map = {0};
    bytemap_init(&byte_map, 1048576);
    load_trace(trace, include_sampled, &rows, &byte_map);

    ByteCell **cells = sorted_cells(&byte_map);
    size_t segment_count = 0;
    Segment *segments = build_segments(cells, byte_map.len, &segment_count);
    attach_rows_to_segments(&rows, segments, segment_count);
    emit_summary(&rows, cells, segments, segment_count);
    emit_segments(cells, segments, segment_count, max_items);

    return 0;
}
