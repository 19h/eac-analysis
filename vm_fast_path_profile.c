#define _GNU_SOURCE
#include <capstone/capstone.h>
#include <capstone/x86.h>
#include <openssl/sha.h>

#include <ctype.h>
#include <errno.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static FILE *g_output = NULL;
#define printf(...) fprintf(g_output ? g_output : stdout, __VA_ARGS__)

enum {
    FRAME_IP_OFF = 0x0a,
    FRAME_FLAGS_OFF = 0x23,
    FRAME_TABLE_OFF = 0x10f,
    FRAME_STATE_OFF = 0x170,
    FRAME_BYTE_OFF = 0x194,
    FRAME_RUNTIME_LOW12 = 0x36d,
    REG_COUNT = 16,
    TABLE_ENTRIES = 360,
    TABLE_OFF = 0xc3718,
};

typedef enum { VK_INT, VK_PTR, VK_UNKNOWN, VK_LOWBITS } ValueKind;
typedef enum { PK_FRAME, PK_TABLE, PK_IP } PtrKind;

typedef struct {
    ValueKind kind;
    uint64_t u;
    PtrKind ptr_kind;
    int64_t off;
    unsigned bits;
    unsigned ptr_low_bits;
    uint64_t ptr_low_base;
} Value;

typedef struct {
    uint32_t state;
    uint32_t flags;
    uint8_t byte;
    int64_t ip_delta;
    uint64_t ip_low12;
} Frame;

typedef struct {
    int64_t off;
    int size;
    Value value;
} FrameMem;

typedef struct {
    Value regs[REG_COUNT];
    bool reg_present[REG_COUNT];
    FrameMem mem[32];
    size_t mem_count;
    bool present;
} Seed;

typedef struct {
    uint64_t target;
    uint64_t tail_site;
    uint64_t stop;
    bool present;
    bool decoded;
    cs_insn *insns;
    size_t insn_count;
} Handler;

typedef struct {
    uint64_t events;
    uint64_t steps;
    uint64_t unknown_ops;
    uint64_t branch_unknown;
    uint64_t target_matched;
    uint64_t target_mismatched;
    uint64_t ip_matched;
    uint64_t ip_mismatched;
    uint64_t state_matched;
    uint64_t state_mismatched;
    uint64_t status_ok;
    uint64_t status_unknown_target;
    uint64_t status_falloff;
    uint64_t status_step_limit;
    uint64_t branch_sites[512];
    size_t branch_site_count;
    char target_text[32];
    int example_pred_entry;
    uint64_t example_pred_target;
    int example_actual_entry;
    uint64_t example_actual_target;
    uint32_t example_pred_state;
    uint32_t example_actual_state;
    char state_example_status[32];
    char state_example_bytes[256];
    char dispatch_example_status[32];
    char dispatch_example_bytes[256];
    bool has_dispatch_example;
    bool has_state_example;
} SourceStat;

typedef struct {
    char label[64];
    uint64_t count;
} TargetCounter;

typedef struct {
    int source;
    char hash[17];
    char *text;
    char source_target[32];
    uint64_t events;
    uint64_t target_matched;
    uint64_t ip_matched;
    uint64_t status_ok;
    uint64_t status_unknown_target;
    uint64_t status_falloff;
    uint64_t status_step_limit;
    TargetCounter targets[32];
    size_t target_count;
} PathStat;

typedef struct {
    int source;
    char source_target[32];
    uint64_t site;
    char mnemonic[16];
    uint64_t events;
    uint64_t taken;
    uint64_t not_taken;
    uint64_t unknown;
} BranchStat;

typedef struct {
    char **items;
    int count;
} Fields;

typedef struct {
    int seq;
    int source_entry;
    uint64_t source_target;
    uint64_t start_vm_ip;
    int target_entry;
    uint64_t target;
    uint32_t post_state;
    int64_t delta;
    uint8_t bytes[4096];
    size_t byte_count;
    uint32_t pre_flags;
    uint32_t pre_state;
    uint8_t pre_byte;
} TraceRow;

typedef struct {
    int seq;
    int frame;
    int source_entry;
    int source_target;
    int start_vm_ip;
    int target_entry;
    int target;
    int post_state;
    int delta;
    int bytes;
    int byte_status;
    int pre_flags;
    int pre_state;
    int pre_byte;
} TraceCols;

typedef struct {
    char *trace_path;
    char *skeletons_path;
    char *eac_path;
    char *gpr_run_path;
    char *emit_dir;
    int max_steps;
    int max_rows_per_source;
    int max_expr_len;
    int max_cell_len;
    int top;
    int top_targets;
    int max_path_len;
    bool by_path;
    bool branch_sites;
    bool branch_predicates;
    bool state_validate;
    bool dispatch_validate;
} Args;

enum {
    TC_UNKNOWN = UINT64_C(1) << 0,
    TC_CONSTANT = UINT64_C(1) << 1,
    TC_LIVE_IN_REG = UINT64_C(1) << 2,
    TC_DERIVED_UNKNOWN = UINT64_C(1) << 3,
    TC_DERIVED_LIVE_IN = UINT64_C(1) << 4,
    TC_GPR_SEED = UINT64_C(1) << 5,
    TC_FRAME_POINTER = UINT64_C(1) << 6,
    TC_DISPATCH_TABLE_POINTER = UINT64_C(1) << 7,
    TC_VM_IP_POINTER = UINT64_C(1) << 8,
    TC_IMAGE_OFFSET = UINT64_C(1) << 9,
    TC_FRAME_SCRATCH_SEED = UINT64_C(1) << 10,
    TC_VM_BYTECODE = UINT64_C(1) << 11,
    TC_STATE = UINT64_C(1) << 12,
    TC_FLAGS = UINT64_C(1) << 13,
    TC_VM_BYTE = UINT64_C(1) << 14,
    TC_UNKNOWN_MEMORY_POINTER = UINT64_C(1) << 15,
    TC_UNKNOWN_FRAME_FIELD = UINT64_C(1) << 16,
    TC_TABLE_DISPATCH_TARGET = UINT64_C(1) << 17,
    TC_TABLE_READ = UINT64_C(1) << 18,
    TC_PTR_PARTIAL = UINT64_C(1) << 19,
    TC_FRAME_PTR_LOW8 = UINT64_C(1) << 20,
    TC_UNKNOWN_POINTER_KIND = UINT64_C(1) << 21,
};

typedef struct {
    Value value;
    char expr[384];
    char reason[64];
    uint64_t classes;
} TrackedValue;

typedef struct {
    uint64_t site;
    char mnemonic[16];
    char op_str[160];
    TrackedValue left;
    TrackedValue right;
    int zf;
    bool present;
} BranchCondition;

typedef struct {
    char *label;
    uint64_t count;
} TextCount;

typedef struct {
    TextCount *items;
    size_t count;
    size_t cap;
} TextCounter;

typedef struct {
    int source;
    char source_target[32];
    uint64_t site;
    char mnemonic[16];
    uint64_t events;
    uint64_t steps;
    uint64_t taken;
    uint64_t not_taken;
    uint64_t unknown;
    TextCounter classes;
    TextCounter outcomes;
    TextCounter condition_sites;
    TextCounter condition_mnemonics;
    TextCounter condition_ops;
    TextCounter left_exprs;
    TextCounter right_exprs;
    TextCounter left_values;
    TextCounter right_values;
    TextCounter zf_values;
    TextCounter condition_texts;
} BranchPredStat;

typedef struct {
    int64_t off;
    int size;
    TrackedValue value;
} TrackedFrameMem;

static Value val_int(uint64_t u) {
    Value v = {.kind = VK_INT, .u = u};
    return v;
}

static Value val_unknown(void) {
    Value v = {.kind = VK_UNKNOWN};
    return v;
}

static Value val_ptr(PtrKind kind, int64_t off) {
    Value v = {.kind = VK_PTR, .ptr_kind = kind, .off = off};
    return v;
}

static Value val_ptr_low(PtrKind kind, int64_t off, unsigned low_bits, uint64_t low_base) {
    Value v = {
        .kind = VK_PTR,
        .ptr_kind = kind,
        .off = off,
        .ptr_low_bits = low_bits,
        .ptr_low_base = low_base,
    };
    return v;
}

static Value ptr_add(Value ptr, int64_t delta) {
    ptr.off += delta;
    return ptr;
}

static Value val_lowbits(unsigned bits, uint64_t u) {
    Value v = {.kind = VK_LOWBITS, .bits = bits, .u = u & ((UINT64_C(1) << bits) - 1)};
    return v;
}

static uint64_t mask_for_size(int size) {
    if (size <= 0 || size >= 8) {
        return UINT64_MAX;
    }
    return (UINT64_C(1) << (size * 8)) - 1;
}

static unsigned op_bits(int size) {
    return size <= 0 ? 64u : (unsigned)size * 8u;
}

static int64_t sign_extend_u(uint64_t value, unsigned bits) {
    if (bits >= 64) {
        return (int64_t)value;
    }
    uint64_t sign = UINT64_C(1) << (bits - 1);
    uint64_t mask = (UINT64_C(1) << bits) - 1;
    value &= mask;
    return (value & sign) ? (int64_t)(value | ~mask) : (int64_t)value;
}

static bool is_unknown(Value v) {
    return v.kind == VK_UNKNOWN;
}

static bool known_low_bits(Value v, unsigned *bits, uint64_t *low) {
    if (v.kind == VK_INT) {
        *bits = 64;
        *low = v.u;
        return true;
    }
    if (v.kind == VK_LOWBITS) {
        *bits = v.bits;
        *low = v.u;
        return true;
    }
    if (v.kind == VK_PTR && v.ptr_kind == PK_FRAME) {
        *bits = 12;
        *low = (uint64_t)(FRAME_RUNTIME_LOW12 + v.off) & 0xfff;
        return true;
    }
    if (v.kind == VK_PTR && v.ptr_low_bits) {
        *bits = v.ptr_low_bits;
        *low = (v.ptr_low_base + (uint64_t)v.off) & ((UINT64_C(1) << v.ptr_low_bits) - 1);
        return true;
    }
    return false;
}

static bool concrete_full_value(Value v, int size, uint64_t *out) {
    if (v.kind == VK_INT) {
        *out = v.u & mask_for_size(size);
        return true;
    }
    unsigned bits = 0;
    uint64_t low = 0;
    if (known_low_bits(v, &bits, &low) && bits >= op_bits(size)) {
        *out = low & mask_for_size(size);
        return true;
    }
    return false;
}

static uint64_t parse_u64(const char *s) {
    if (!s || !*s || !strcmp(s, "-")) {
        return 0;
    }
    return strtoull(s, NULL, 0);
}

static int64_t parse_delta(const char *s) {
    if (!s || !*s || !strcmp(s, "-")) {
        return 0;
    }
    if (s[0] == '+' && s[1] == '0' && s[2] == 'x') {
        return (int64_t)strtoll(s + 1, NULL, 16);
    }
    if (s[0] == '-' && s[1] == '0' && s[2] == 'x') {
        return -(int64_t)strtoll(s + 3, NULL, 16);
    }
    return strtoll(s, NULL, 0);
}

static void *xcalloc(size_t n, size_t size) {
    void *p = calloc(n, size);
    if (!p) {
        perror("calloc");
        exit(1);
    }
    return p;
}

static char *xstrdup(const char *s) {
    char *p = strdup(s ? s : "");
    if (!p) {
        perror("strdup");
        exit(1);
    }
    return p;
}

static size_t max_size_t(size_t a, size_t b) {
    return a > b ? a : b;
}

static void clip_to_buf(const char *text, int max_len, char *out, size_t out_size) {
    if (!out_size) return;
    if (!text) text = "";
    size_t len = strlen(text);
    if (max_len <= 0 || len <= (size_t)max_len || (size_t)max_len + 1 > out_size) {
        snprintf(out, out_size, "%s", text);
        return;
    }
    unsigned char digest[SHA256_DIGEST_LENGTH];
    SHA256((const unsigned char *)text, len, digest);
    size_t keep = max_size_t(16, (size_t)max_len - 17);
    if (keep + 17 >= out_size) keep = out_size > 18 ? out_size - 18 : 0;
    if (keep > len) keep = len;
    memcpy(out, text, keep);
    char *p = out + keep;
    snprintf(p, out_size - keep, "...#%02x%02x%02x%02x%02x%02x",
             digest[0], digest[1], digest[2], digest[3], digest[4], digest[5]);
}

static void tracked_set_expr(TrackedValue *tv, const char *text, int max_expr_len) {
    clip_to_buf(text, max_expr_len, tv->expr, sizeof(tv->expr));
}

static const char *ptr_kind_name(PtrKind kind) {
    switch (kind) {
    case PK_FRAME: return "frame";
    case PK_TABLE: return "table";
    case PK_IP: return "ip";
    }
    return "ptr";
}

static void fmt_value_buf(Value value, const char *reason, char *out, size_t out_size) {
    if (!out_size) return;
    switch (value.kind) {
    case VK_INT:
        snprintf(out, out_size, "0x%" PRIx64, value.u);
        return;
    case VK_LOWBITS:
        snprintf(out, out_size, "low%u(0x%" PRIx64 ")", value.bits, value.u);
        return;
    case VK_PTR: {
        const char *sign = value.off >= 0 ? "+" : "-";
        uint64_t off = value.off >= 0 ? (uint64_t)value.off : (uint64_t)(-value.off);
        snprintf(out, out_size, "%s%s0x%" PRIx64, ptr_kind_name(value.ptr_kind), sign, off);
        return;
    }
    case VK_UNKNOWN:
        snprintf(out, out_size, "?%s", reason && *reason ? reason : "unknown");
        return;
    }
}

static TrackedValue tracked_from(Value value, const char *expr, uint64_t classes, const char *reason, int max_expr_len) {
    TrackedValue tv = {.value = value, .classes = classes};
    snprintf(tv.reason, sizeof(tv.reason), "%s", reason ? reason : "");
    tracked_set_expr(&tv, expr ? expr : "", max_expr_len);
    return tv;
}

static TrackedValue tracked_unknown(const char *reason, const char *expr, uint64_t classes, int max_expr_len) {
    return tracked_from(val_unknown(), expr ? expr : reason, classes | TC_UNKNOWN, reason, max_expr_len);
}

static TrackedValue tracked_const(uint64_t value, int size, int max_expr_len) {
    uint64_t masked = value & mask_for_size(size);
    char expr[64];
    snprintf(expr, sizeof(expr), "0x%" PRIx64, masked);
    return tracked_from(val_int(masked), expr, TC_CONSTANT, "", max_expr_len);
}

static const char *tracked_reg_name(int idx) {
    static const char *names[REG_COUNT] = {
        "rax","rbx","rcx","rdx","rsi","rdi","r8","r9","r10","r11","r12","r13","r14","r15","rbp","rsp"
    };
    return (idx >= 0 && idx < REG_COUNT) ? names[idx] : "";
}

static void append_piece(char *out, size_t out_size, const char *piece, bool *first) {
    if (!piece || !*piece || !out_size) return;
    size_t len = strlen(out);
    snprintf(out + len, len < out_size ? out_size - len : 0, "%s%s", *first ? "" : ",", piece);
    *first = false;
}

static void class_names_buf(uint64_t classes, char *out, size_t out_size) {
    out[0] = 0;
    bool first = true;
    struct ClassName { uint64_t bit; const char *name; };
    static const struct ClassName names[] = {
        {TC_CONSTANT, "constant"},
        {TC_DERIVED_LIVE_IN, "derived_live_in"},
        {TC_DERIVED_UNKNOWN, "derived_unknown"},
        {TC_DISPATCH_TABLE_POINTER, "dispatch_table_pointer"},
        {TC_FLAGS, "flags"},
        {TC_FRAME_POINTER, "frame_pointer"},
        {TC_FRAME_PTR_LOW8, "frame_ptr_low8"},
        {TC_FRAME_SCRATCH_SEED, "frame_scratch_seed"},
        {TC_GPR_SEED, "gpr_seed"},
        {TC_IMAGE_OFFSET, "image_offset"},
        {TC_LIVE_IN_REG, "live_in_reg"},
        {TC_PTR_PARTIAL, "ptr_partial"},
        {TC_STATE, "state"},
        {TC_TABLE_DISPATCH_TARGET, "table_dispatch_target"},
        {TC_TABLE_READ, "table_read"},
        {TC_UNKNOWN, "unknown"},
        {TC_UNKNOWN_FRAME_FIELD, "unknown_frame_field"},
        {TC_UNKNOWN_MEMORY_POINTER, "unknown_memory_pointer"},
        {TC_UNKNOWN_POINTER_KIND, "unknown_pointer_kind"},
        {TC_VM_BYTE, "vm_byte"},
        {TC_VM_BYTECODE, "vm_bytecode"},
        {TC_VM_IP_POINTER, "vm_ip_pointer"},
    };
    for (size_t i = 0; i < sizeof(names) / sizeof(names[0]); ++i) {
        if (classes & names[i].bit) append_piece(out, out_size, names[i].name, &first);
    }
}

static int cmp_text_count(const void *a, const void *b) {
    const TextCount *x = *(const TextCount * const *)a;
    const TextCount *y = *(const TextCount * const *)b;
    if (x->count != y->count) return x->count < y->count ? 1 : -1;
    return strcmp(x->label, y->label);
}

static void counter_add(TextCounter *counter, const char *label, uint64_t add) {
    if (!label) label = "";
    for (size_t i = 0; i < counter->count; ++i) {
        if (!strcmp(counter->items[i].label, label)) {
            counter->items[i].count += add;
            return;
        }
    }
    if (counter->count == counter->cap) {
        counter->cap = counter->cap ? counter->cap * 2 : 8;
        counter->items = realloc(counter->items, counter->cap * sizeof(TextCount));
        if (!counter->items) {
            perror("realloc");
            exit(1);
        }
    }
    counter->items[counter->count].label = xstrdup(label);
    counter->items[counter->count].count = add;
    counter->count++;
}

static void counter_add_fmt(TextCounter *counter, uint64_t add, const char *fmt, ...) {
    char buf[512];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(buf, sizeof(buf), fmt, ap);
    va_end(ap);
    counter_add(counter, buf, add);
}

static void counter_print_top(TextCounter *counter, int top, int max_len) {
    if (!counter->count) return;
    TextCount **order = xcalloc(counter->count, sizeof(TextCount *));
    for (size_t i = 0; i < counter->count; ++i) order[i] = &counter->items[i];
    qsort(order, counter->count, sizeof(order[0]), cmp_text_count);
    for (size_t i = 0; i < counter->count && (int)i < top; ++i) {
        char label[384];
        clip_to_buf(order[i]->label, max_len, label, sizeof(label));
        printf("%s%s:%" PRIu64, i ? "," : "", label, order[i]->count);
    }
    free(order);
}

static void free_counter(TextCounter *counter) {
    for (size_t i = 0; i < counter->count; ++i) free(counter->items[i].label);
    free(counter->items);
    memset(counter, 0, sizeof(*counter));
}

static Fields split_line(char *line) {
    Fields f = {0};
    int cap = 32;
    f.items = xcalloc((size_t)cap, sizeof(char *));
    char *p = line;
    while (true) {
        if (f.count == cap) {
            cap *= 2;
            f.items = realloc(f.items, (size_t)cap * sizeof(char *));
            if (!f.items) {
                perror("realloc");
                exit(1);
            }
        }
        f.items[f.count++] = p;
        char *tab = strchr(p, '\t');
        if (!tab) {
            p[strcspn(p, "\r\n")] = 0;
            break;
        }
        *tab = 0;
        p = tab + 1;
    }
    return f;
}

static int col_index(Fields *h, const char *name) {
    for (int i = 0; i < h->count; ++i) {
        if (!strcmp(h->items[i], name)) {
            return i;
        }
    }
    return -1;
}

static const char *field(Fields *f, int idx) {
    if (idx < 0 || idx >= f->count) {
        return "";
    }
    return f->items[idx];
}

static int hex_nibble(char c) {
    if ('0' <= c && c <= '9') return c - '0';
    if ('a' <= c && c <= 'f') return c - 'a' + 10;
    if ('A' <= c && c <= 'F') return c - 'A' + 10;
    return -1;
}

static size_t parse_hex_bytes(const char *s, uint8_t *out, size_t max_len) {
    size_t n = 0;
    while (s && s[0] && s[1] && n < max_len) {
        int hi = hex_nibble(s[0]);
        int lo = hex_nibble(s[1]);
        if (hi < 0 || lo < 0) {
            break;
        }
        out[n++] = (uint8_t)((hi << 4) | lo);
        s += 2;
    }
    return n;
}

static bool read_file(const char *path, uint8_t **data, size_t *size) {
    FILE *fp = fopen(path, "rb");
    if (!fp) {
        perror(path);
        return false;
    }
    if (fseek(fp, 0, SEEK_END) != 0) {
        perror("fseek");
        fclose(fp);
        return false;
    }
    long len = ftell(fp);
    if (len < 0) {
        perror("ftell");
        fclose(fp);
        return false;
    }
    rewind(fp);
    *data = xcalloc((size_t)len, 1);
    *size = fread(*data, 1, (size_t)len, fp);
    fclose(fp);
    return *size == (size_t)len;
}

static uint64_t read_le64(const uint8_t *data, size_t off) {
    uint64_t v = 0;
    for (int i = 7; i >= 0; --i) {
        v = (v << 8) | data[off + (size_t)i];
    }
    return v;
}

static int reg_index(x86_reg reg) {
    switch (reg) {
    case X86_REG_AL: case X86_REG_AH: case X86_REG_AX: case X86_REG_EAX: case X86_REG_RAX: return 0;
    case X86_REG_BL: case X86_REG_BH: case X86_REG_BX: case X86_REG_EBX: case X86_REG_RBX: return 1;
    case X86_REG_CL: case X86_REG_CH: case X86_REG_CX: case X86_REG_ECX: case X86_REG_RCX: return 2;
    case X86_REG_DL: case X86_REG_DH: case X86_REG_DX: case X86_REG_EDX: case X86_REG_RDX: return 3;
    case X86_REG_SIL: case X86_REG_SI: case X86_REG_ESI: case X86_REG_RSI: return 4;
    case X86_REG_DIL: case X86_REG_DI: case X86_REG_EDI: case X86_REG_RDI: return 5;
    case X86_REG_R8B: case X86_REG_R8W: case X86_REG_R8D: case X86_REG_R8: return 6;
    case X86_REG_R9B: case X86_REG_R9W: case X86_REG_R9D: case X86_REG_R9: return 7;
    case X86_REG_R10B: case X86_REG_R10W: case X86_REG_R10D: case X86_REG_R10: return 8;
    case X86_REG_R11B: case X86_REG_R11W: case X86_REG_R11D: case X86_REG_R11: return 9;
    case X86_REG_R12B: case X86_REG_R12W: case X86_REG_R12D: case X86_REG_R12: return 10;
    case X86_REG_R13B: case X86_REG_R13W: case X86_REG_R13D: case X86_REG_R13: return 11;
    case X86_REG_R14B: case X86_REG_R14W: case X86_REG_R14D: case X86_REG_R14: return 12;
    case X86_REG_R15B: case X86_REG_R15W: case X86_REG_R15D: case X86_REG_R15: return 13;
    case X86_REG_BPL: case X86_REG_BP: case X86_REG_EBP: case X86_REG_RBP: return 14;
    case X86_REG_SPL: case X86_REG_SP: case X86_REG_ESP: case X86_REG_RSP: return 15;
    default: return -1;
    }
}

static bool mem_ptr(cs_insn *insn, cs_x86_op *op, Value *regs, Value *out) {
    if (op->type != X86_OP_MEM) {
        return false;
    }
    x86_op_mem mem = op->mem;
    if (mem.base == X86_REG_RIP) {
        return false;
    }
    Value base = val_unknown();
    if (mem.base == X86_REG_RBP) {
        base = val_ptr(PK_FRAME, 0);
    } else {
        int b = reg_index((x86_reg)mem.base);
        if (b >= 0) base = regs[b];
    }
    int64_t index_value = 0;
    if (mem.index) {
        int idx = reg_index((x86_reg)mem.index);
        if (idx < 0 || regs[idx].kind != VK_INT) {
            return false;
        }
        index_value = (int64_t)regs[idx].u * mem.scale;
    }
    if (base.kind != VK_PTR) {
        return false;
    }
    *out = ptr_add(base, index_value + mem.disp);
    return true;
}

static Value read_frame_mem(FrameMem *mem, size_t mem_count, int64_t off, int size) {
    for (size_t i = 0; i < mem_count; ++i) {
        if (mem[i].off == off && mem[i].size == size) {
            return mem[i].value;
        }
    }
    for (size_t i = 0; i < mem_count; ++i) {
        if (mem[i].off == off && mem[i].size >= size) {
            Value v = mem[i].value;
            if (v.kind == VK_INT) {
                return val_int(v.u & mask_for_size(size));
            }
            if (v.kind == VK_PTR) {
                return v;
            }
        }
    }
    return val_unknown();
}

static void write_frame_mem(FrameMem *mem, size_t *mem_count, int64_t off, int size, Value value) {
    for (size_t i = 0; i < *mem_count; ++i) {
        if (mem[i].off == off && mem[i].size == size) {
            mem[i].value = value;
            return;
        }
    }
    if (*mem_count < 64) {
        mem[*mem_count] = (FrameMem){.off = off, .size = size, .value = value};
        (*mem_count)++;
    }
}

static Value read_ip(uint8_t *bytes, size_t byte_count, int64_t off, int size) {
    if (off < 0 || (size_t)off + (size_t)size > byte_count || size <= 0 || size > 8) {
        return val_unknown();
    }
    uint64_t v = 0;
    for (int i = size - 1; i >= 0; --i) {
        v = (v << 8) | bytes[(size_t)off + (size_t)i];
    }
    return val_int(v);
}

static Value read_table(uint64_t *table, int64_t off, int size) {
    if (size != 8 || off < 0 || (off % 8) != 0) {
        return val_unknown();
    }
    int entry = (int)(off / 8);
    if (entry < 0 || entry >= TABLE_ENTRIES) {
        return val_unknown();
    }
    return val_int(table[entry]);
}

static Value read_mem_op(cs_insn *insn, cs_x86_op *op, Value *regs, Frame *frame,
                         uint8_t *ip_bytes, size_t ip_len, uint64_t *table,
                         FrameMem *frame_mem, size_t frame_mem_count) {
    Value ptr;
    if (!mem_ptr(insn, op, regs, &ptr)) {
        return val_unknown();
    }
    int size = op->size ? op->size : 8;
    if (ptr.ptr_kind == PK_FRAME) {
        if (ptr.off == FRAME_IP_OFF && size == 8) return val_ptr_low(PK_IP, frame->ip_delta, 12, frame->ip_low12);
        if (ptr.off == FRAME_TABLE_OFF && size == 8) return val_ptr(PK_TABLE, 0);
        if (ptr.off == FRAME_STATE_OFF) return val_int(frame->state & mask_for_size(size));
        if (ptr.off == FRAME_FLAGS_OFF) return val_int(frame->flags & mask_for_size(size));
        if (ptr.off == FRAME_BYTE_OFF) return val_int(frame->byte & mask_for_size(size));
        return read_frame_mem(frame_mem, frame_mem_count, ptr.off, size);
    }
    if (ptr.ptr_kind == PK_IP) {
        return read_ip(ip_bytes, ip_len, ptr.off, size);
    }
    if (ptr.ptr_kind == PK_TABLE) {
        return read_table(table, ptr.off, size);
    }
    return val_unknown();
}

static Value read_op(cs_insn *insn, cs_x86_op *op, Value *regs, Frame *frame,
                     uint8_t *ip_bytes, size_t ip_len, uint64_t *table,
                     FrameMem *frame_mem, size_t frame_mem_count) {
    if (op->type == X86_OP_IMM) {
        return val_int((uint64_t)op->imm);
    }
    if (op->type == X86_OP_REG) {
        int r = reg_index((x86_reg)op->reg);
        return r >= 0 ? regs[r] : val_unknown();
    }
    if (op->type == X86_OP_MEM) {
        return read_mem_op(insn, op, regs, frame, ip_bytes, ip_len, table, frame_mem, frame_mem_count);
    }
    return val_unknown();
}

static bool write_op(cs_insn *insn, cs_x86_op *op, Value value, Value *regs, Frame *frame,
                     FrameMem *frame_mem, size_t *frame_mem_count) {
    int size = op->size ? op->size : 8;
    if (op->type == X86_OP_REG) {
        int r = reg_index((x86_reg)op->reg);
        if (r < 0) return false;
        if (value.kind == VK_INT) value.u &= mask_for_size(size);
        regs[r] = value;
        return true;
    }
    if (op->type != X86_OP_MEM || is_unknown(value)) {
        return false;
    }
    Value ptr;
    if (!mem_ptr(insn, op, regs, &ptr)) {
        return false;
    }
    uint64_t concrete = 0;
    if (ptr.ptr_kind == PK_FRAME && ptr.off == FRAME_IP_OFF) {
        if (value.kind == VK_PTR && value.ptr_kind == PK_IP) {
            frame->ip_delta = value.off;
            if (value.ptr_low_bits) frame->ip_low12 = value.ptr_low_base & 0xfff;
            return true;
        }
        return false;
    }
    if (ptr.ptr_kind == PK_FRAME && ptr.off == FRAME_STATE_OFF) {
        if (!concrete_full_value(value, size, &concrete)) return false;
        frame->state = (uint32_t)concrete;
        return true;
    }
    if (ptr.ptr_kind == PK_FRAME && ptr.off == FRAME_FLAGS_OFF) {
        if (!concrete_full_value(value, size, &concrete)) return false;
        frame->flags = (uint32_t)concrete;
        return true;
    }
    if (ptr.ptr_kind == PK_FRAME && ptr.off == FRAME_BYTE_OFF) {
        if (!concrete_full_value(value, size, &concrete)) return false;
        frame->byte = (uint8_t)concrete;
        return true;
    }
    if (ptr.ptr_kind == PK_FRAME) {
        write_frame_mem(frame_mem, frame_mem_count, ptr.off, size, value);
    }
    return true;
}

static Value eval_shift(const char *mnemonic, Value left, Value right, int size) {
    if (left.kind != VK_INT || right.kind != VK_INT) {
        return val_unknown();
    }
    uint64_t mask = mask_for_size(size);
    unsigned count = (unsigned)(right.u & 0x3f);
    if (!strcmp(mnemonic, "shl")) return val_int((left.u << count) & mask);
    if (!strcmp(mnemonic, "shr")) return val_int((left.u & mask) >> count);
    return val_unknown();
}

static Value eval_bin(const char *mnemonic, Value left, Value right, int size) {
    if (is_unknown(left) || is_unknown(right)) {
        return val_unknown();
    }
    unsigned bits = op_bits(size);
    uint64_t mask = mask_for_size(size);
    if (left.kind == VK_PTR) {
        if (right.kind == VK_INT && (!strcmp(mnemonic, "add") || !strcmp(mnemonic, "sub"))) {
            int64_t delta = sign_extend_u(right.u, bits);
            if (!strcmp(mnemonic, "sub")) delta = -delta;
            return ptr_add(left, delta);
        }
        if (right.kind == VK_PTR && !strcmp(mnemonic, "sub") && left.ptr_kind == right.ptr_kind) {
            return val_int((uint64_t)(left.off - right.off) & mask);
        }
    }
    if (right.kind == VK_PTR) {
        if (left.kind == VK_INT && !strcmp(mnemonic, "add")) {
            return ptr_add(right, sign_extend_u(left.u, bits));
        }
    }
    unsigned lb = 0, rb = 0;
    uint64_t ll = 0, rr = 0;
    bool lk = known_low_bits(left, &lb, &ll);
    bool rk = known_low_bits(right, &rb, &rr);
    if ((left.kind != VK_INT || right.kind != VK_INT) && lk && rk) {
        unsigned kb = lb < rb ? lb : rb;
        if (kb > bits) kb = bits;
        if (kb) {
            if (!strcmp(mnemonic, "add")) return val_lowbits(kb, ll + rr);
            if (!strcmp(mnemonic, "sub")) return val_lowbits(kb, ll - rr);
            if (!strcmp(mnemonic, "xor")) return val_lowbits(kb, ll ^ rr);
            if (!strcmp(mnemonic, "and")) return val_lowbits(kb, ll & rr);
            if (!strcmp(mnemonic, "or")) return val_lowbits(kb, ll | rr);
        }
    }
    if (left.kind != VK_INT || right.kind != VK_INT) {
        return val_unknown();
    }
    if (!strcmp(mnemonic, "add")) return val_int((left.u + right.u) & mask);
    if (!strcmp(mnemonic, "sub")) return val_int((left.u - right.u) & mask);
    if (!strcmp(mnemonic, "xor")) return val_int((left.u ^ right.u) & mask);
    if (!strcmp(mnemonic, "and")) return val_int((left.u & right.u) & mask);
    if (!strcmp(mnemonic, "or")) return val_int((left.u | right.u) & mask);
    return val_unknown();
}

static int cmp_zf(const char *mnemonic, Value left, Value right, int size) {
    uint64_t l = 0, r = 0;
    if (concrete_full_value(left, size, &l) && concrete_full_value(right, size, &r)) {
        if (!strcmp(mnemonic, "cmp")) return (((l - r) & mask_for_size(size)) == 0);
        if (!strcmp(mnemonic, "test")) return ((l & r) == 0);
    }
    if (!strcmp(mnemonic, "cmp") && left.kind == VK_PTR && right.kind == VK_PTR && left.ptr_kind == right.ptr_kind) {
        return left.off == right.off;
    }
    if (!strcmp(mnemonic, "cmp") && size >= 8) {
        if (left.kind == VK_PTR && right.kind == VK_INT && right.u == 0) return 0;
        if (right.kind == VK_PTR && left.kind == VK_INT && left.u == 0) return 0;
    }
    if (!strcmp(mnemonic, "test") && size >= 8 && left.kind == VK_PTR && right.kind == VK_PTR &&
        left.ptr_kind == right.ptr_kind && left.off == right.off) {
        return 0;
    }
    return -1;
}

static int branch_taken(const char *mnemonic, int zf) {
    if (zf < 0) return -1;
    if (!strcmp(mnemonic, "je") || !strcmp(mnemonic, "jz")) return zf;
    if (!strcmp(mnemonic, "jne") || !strcmp(mnemonic, "jnz")) return !zf;
    return -1;
}

static bool mem_ptr_tracked(cs_insn *insn, cs_x86_op *op, TrackedValue *regs, Value *out) {
    Value values[REG_COUNT];
    for (int i = 0; i < REG_COUNT; ++i) values[i] = regs[i].value;
    return mem_ptr(insn, op, values, out);
}

static TrackedValue tracked_seed_from_value(int reg, Value value, int max_expr_len) {
    uint64_t classes = TC_GPR_SEED;
    if (value.kind == VK_PTR) {
        if (value.ptr_kind == PK_FRAME) classes |= TC_FRAME_POINTER;
        else if (value.ptr_kind == PK_TABLE) classes |= TC_DISPATCH_TABLE_POINTER;
        else if (value.ptr_kind == PK_IP) classes |= TC_VM_IP_POINTER;
    } else if (value.kind == VK_INT) {
        classes |= TC_IMAGE_OFFSET;
    }
    char expr[64];
    snprintf(expr, sizeof(expr), "seed(%s)", tracked_reg_name(reg));
    return tracked_from(value, expr, classes, "", max_expr_len);
}

static TrackedValue tracked_narrow(TrackedValue item, int size, int max_expr_len) {
    if (size <= 0 || size >= 8) {
        return item;
    }
    uint64_t mask = mask_for_size(size);
    int bits = size * 8;
    if (item.value.kind == VK_INT) {
        item.value.u &= mask;
    } else if (item.value.kind == VK_PTR && item.value.ptr_kind == PK_FRAME && size == 1) {
        item.classes |= TC_FRAME_PTR_LOW8;
        char expr[512];
        snprintf(expr, sizeof(expr), "low8(%s)", item.expr);
        tracked_set_expr(&item, expr, max_expr_len);
    } else if (item.value.kind == VK_PTR) {
        item.classes |= TC_PTR_PARTIAL;
        char expr[512];
        snprintf(expr, sizeof(expr), "low%d(%s)", bits, item.expr);
        tracked_set_expr(&item, expr, max_expr_len);
    } else if (item.value.kind == VK_UNKNOWN) {
        char expr[512];
        snprintf(expr, sizeof(expr), "low%d(%s)", bits, item.expr);
        tracked_set_expr(&item, expr, max_expr_len);
    }
    return item;
}

static TrackedValue read_tracked_frame_mem(TrackedFrameMem *mem, size_t mem_count, int64_t off, int size, int max_expr_len) {
    for (size_t i = 0; i < mem_count; ++i) {
        if (mem[i].off == off && mem[i].size == size) {
            return mem[i].value;
        }
    }
    for (size_t i = 0; i < mem_count; ++i) {
        if (mem[i].off == off && mem[i].size >= size) {
            TrackedValue v = mem[i].value;
            if (v.value.kind == VK_INT) {
                v.value.u &= mask_for_size(size);
            }
            return v;
        }
    }
    char reason[64], expr[64];
    snprintf(reason, sizeof(reason), "frame_%llx", (unsigned long long)off);
    snprintf(expr, sizeof(expr), "frame+0x%llx", (unsigned long long)off);
    return tracked_unknown(reason, expr, TC_UNKNOWN_FRAME_FIELD, max_expr_len);
}

static void write_tracked_frame_mem(TrackedFrameMem *mem, size_t *mem_count, int64_t off, int size, TrackedValue value) {
    for (size_t i = 0; i < *mem_count; ++i) {
        if (mem[i].off == off && mem[i].size == size) {
            mem[i].value = value;
            return;
        }
    }
    if (*mem_count < 64) {
        mem[*mem_count] = (TrackedFrameMem){.off = off, .size = size, .value = value};
        (*mem_count)++;
    }
}

static TrackedValue read_ip_tracked(uint8_t *bytes, size_t byte_count, int64_t off, int size, int max_expr_len) {
    if (off < 0 || (size_t)off + (size_t)size > byte_count || size <= 0 || size > 8) {
        char expr[64];
        snprintf(expr, sizeof(expr), "ip[0x%llx:%d]", (unsigned long long)off, size);
        return tracked_unknown("ip_oob", expr, TC_VM_BYTECODE, max_expr_len);
    }
    uint64_t v = 0;
    for (int i = size - 1; i >= 0; --i) v = (v << 8) | bytes[(size_t)off + (size_t)i];
    char expr[64];
    snprintf(expr, sizeof(expr), "u%d_%lld", size * 8, (long long)off);
    return tracked_from(val_int(v), expr, TC_VM_BYTECODE, "", max_expr_len);
}

static TrackedValue read_table_tracked(uint64_t *table, int64_t off, int size, int max_expr_len) {
    if (size != 8 || off < 0 || (off % 8) != 0) {
        char expr[64];
        snprintf(expr, sizeof(expr), "table+0x%llx", (unsigned long long)off);
        return tracked_unknown("table_read", expr, TC_TABLE_READ, max_expr_len);
    }
    int entry = (int)(off / 8);
    if (entry < 0 || entry >= TABLE_ENTRIES) {
        char expr[64];
        snprintf(expr, sizeof(expr), "table[%d]", entry);
        return tracked_unknown("table_oob", expr, TC_TABLE_READ, max_expr_len);
    }
    char expr[64];
    snprintf(expr, sizeof(expr), "table[%d]", entry);
    return tracked_from(val_int(table[entry]), expr, TC_TABLE_DISPATCH_TARGET, "", max_expr_len);
}

static TrackedValue read_mem_tracked(cs_insn *insn, cs_x86_op *op, TrackedValue *regs, Frame *frame,
                                     TrackedValue *state_tv, TrackedValue *flags_tv,
                                     TrackedValue *byte_tv, TrackedValue *ip_tv,
                                     uint8_t *ip_bytes, size_t ip_len, uint64_t *table,
                                     TrackedFrameMem *frame_mem, size_t frame_mem_count,
                                     int max_expr_len) {
    Value ptr;
    if (!mem_ptr_tracked(insn, op, regs, &ptr)) {
        char expr[256];
        snprintf(expr, sizeof(expr), "mem[%s]", insn->op_str);
        return tracked_unknown("mem_ptr", expr, TC_UNKNOWN_MEMORY_POINTER, max_expr_len);
    }
    int size = op->size ? op->size : 8;
    if (ptr.ptr_kind == PK_FRAME) {
        if (ptr.off == FRAME_IP_OFF && size == 8) {
            Value base = ip_tv->value;
            uint64_t low_bits = (base.kind == VK_PTR && base.ptr_kind == PK_IP) ? base.ptr_low_bits : 0;
            uint64_t low_base = (base.kind == VK_PTR && base.ptr_kind == PK_IP) ? base.ptr_low_base : 0;
            return tracked_from(val_ptr_low(PK_IP, frame->ip_delta, (unsigned)low_bits, low_base),
                                ip_tv->expr, TC_VM_IP_POINTER, "", max_expr_len);
        }
        if (ptr.off == FRAME_TABLE_OFF && size == 8) {
            return tracked_from(val_ptr(PK_TABLE, 0), "dispatch_table", TC_DISPATCH_TABLE_POINTER, "", max_expr_len);
        }
        if (ptr.off == FRAME_STATE_OFF) return tracked_narrow(*state_tv, size, max_expr_len);
        if (ptr.off == FRAME_FLAGS_OFF) return tracked_narrow(*flags_tv, size, max_expr_len);
        if (ptr.off == FRAME_BYTE_OFF) return tracked_narrow(*byte_tv, size, max_expr_len);
        return read_tracked_frame_mem(frame_mem, frame_mem_count, ptr.off, size, max_expr_len);
    }
    if (ptr.ptr_kind == PK_IP) {
        return read_ip_tracked(ip_bytes, ip_len, ptr.off, size, max_expr_len);
    }
    if (ptr.ptr_kind == PK_TABLE) {
        return read_table_tracked(table, ptr.off, size, max_expr_len);
    }
    char expr[64];
    snprintf(expr, sizeof(expr), "%s+0x%llx", ptr_kind_name(ptr.ptr_kind), (unsigned long long)ptr.off);
    return tracked_unknown(ptr_kind_name(ptr.ptr_kind), expr, TC_UNKNOWN_POINTER_KIND, max_expr_len);
}

static TrackedValue read_op_tracked(cs_insn *insn, cs_x86_op *op, TrackedValue *regs, Frame *frame,
                                    TrackedValue *state_tv, TrackedValue *flags_tv,
                                    TrackedValue *byte_tv, TrackedValue *ip_tv,
                                    uint8_t *ip_bytes, size_t ip_len, uint64_t *table,
                                    TrackedFrameMem *frame_mem, size_t frame_mem_count,
                                    int max_expr_len) {
    if (op->type == X86_OP_IMM) {
        return tracked_const((uint64_t)op->imm, op->size ? op->size : 8, max_expr_len);
    }
    if (op->type == X86_OP_REG) {
        int r = reg_index((x86_reg)op->reg);
        if (r >= 0) {
            return tracked_narrow(regs[r], op->size ? op->size : 8, max_expr_len);
        }
        const char *name = r >= 0 ? tracked_reg_name(r) : insn->op_str;
        char reason[64], expr[80];
        snprintf(reason, sizeof(reason), "livein_%s", name);
        snprintf(expr, sizeof(expr), "live_in(%s)", name);
        return tracked_unknown(reason, expr, TC_LIVE_IN_REG, max_expr_len);
    }
    if (op->type == X86_OP_MEM) {
        return read_mem_tracked(insn, op, regs, frame, state_tv, flags_tv, byte_tv, ip_tv,
                                ip_bytes, ip_len, table, frame_mem, frame_mem_count, max_expr_len);
    }
    return tracked_unknown("op", insn->op_str, 0, max_expr_len);
}

static bool write_op_tracked(cs_insn *insn, cs_x86_op *op, TrackedValue value, TrackedValue *regs,
                             Frame *frame, TrackedValue *state_tv, TrackedValue *flags_tv,
                             TrackedValue *byte_tv, TrackedValue *ip_tv,
                             TrackedFrameMem *frame_mem, size_t *frame_mem_count,
                             int max_expr_len) {
    int size = op->size ? op->size : 8;
    if (op->type == X86_OP_REG) {
        int r = reg_index((x86_reg)op->reg);
        if (r < 0) return false;
        if (value.value.kind == VK_INT) value.value.u &= mask_for_size(size);
        regs[r] = value;
        return true;
    }
    if (op->type != X86_OP_MEM || is_unknown(value.value)) {
        return false;
    }
    Value ptr;
    if (!mem_ptr_tracked(insn, op, regs, &ptr)) {
        return false;
    }
    uint64_t concrete = 0;
    if (ptr.ptr_kind == PK_FRAME && ptr.off == FRAME_IP_OFF) {
        if (value.value.kind == VK_PTR && value.value.ptr_kind == PK_IP) {
            frame->ip_delta = value.value.off;
            if (value.value.ptr_low_bits) frame->ip_low12 = value.value.ptr_low_base & 0xfff;
            *ip_tv = value;
            ip_tv->classes |= TC_VM_IP_POINTER;
            return true;
        }
        return false;
    }
    if (ptr.ptr_kind == PK_FRAME && ptr.off == FRAME_STATE_OFF) {
        if (!concrete_full_value(value.value, size, &concrete)) return false;
        frame->state = (uint32_t)concrete;
        *state_tv = value;
        state_tv->value = val_int(frame->state);
        state_tv->classes |= TC_STATE;
        tracked_set_expr(state_tv, value.expr, max_expr_len);
        return true;
    }
    if (ptr.ptr_kind == PK_FRAME && ptr.off == FRAME_FLAGS_OFF) {
        if (!concrete_full_value(value.value, size, &concrete)) return false;
        frame->flags = (uint32_t)concrete;
        *flags_tv = value;
        flags_tv->value = val_int(frame->flags);
        flags_tv->classes |= TC_FLAGS;
        tracked_set_expr(flags_tv, value.expr, max_expr_len);
        return true;
    }
    if (ptr.ptr_kind == PK_FRAME && ptr.off == FRAME_BYTE_OFF) {
        if (!concrete_full_value(value.value, size, &concrete)) return false;
        frame->byte = (uint8_t)concrete;
        *byte_tv = value;
        byte_tv->value = val_int(frame->byte);
        byte_tv->classes |= TC_VM_BYTE;
        tracked_set_expr(byte_tv, value.expr, max_expr_len);
        return true;
    }
    if (ptr.ptr_kind == PK_FRAME) {
        write_tracked_frame_mem(frame_mem, frame_mem_count, ptr.off, size, value);
    }
    return true;
}

static void combine_expr_buf(const char *mnemonic, TrackedValue left, TrackedValue right,
                             int max_expr_len, char *out, size_t out_size) {
    const char *op = mnemonic;
    if (!strcmp(mnemonic, "add")) op = "+";
    else if (!strcmp(mnemonic, "sub")) op = "-";
    else if (!strcmp(mnemonic, "xor")) op = "^";
    else if (!strcmp(mnemonic, "and")) op = "&";
    else if (!strcmp(mnemonic, "or")) op = "|";
    else if (!strcmp(mnemonic, "shl")) op = "<<";
    else if (!strcmp(mnemonic, "shr")) op = ">>";
    char tmp[900];
    snprintf(tmp, sizeof(tmp), "(%s %s %s)", left.expr, op, right.expr);
    clip_to_buf(tmp, max_expr_len, out, out_size);
}

static TrackedValue eval_bin_tracked(const char *mnemonic, TrackedValue left, TrackedValue right,
                                     int size, int max_expr_len) {
    Value value = (!strcmp(mnemonic, "shl") || !strcmp(mnemonic, "shr"))
        ? eval_shift(mnemonic, left.value, right.value, size)
        : eval_bin(mnemonic, left.value, right.value, size);
    uint64_t classes = left.classes | right.classes;
    if (is_unknown(value)) classes |= TC_DERIVED_UNKNOWN;
    if ((classes & TC_LIVE_IN_REG) &&
        ((left.classes != (TC_UNKNOWN | TC_LIVE_IN_REG)) || (right.classes != TC_CONSTANT))) {
        classes |= TC_DERIVED_LIVE_IN;
    }
    char expr[384];
    combine_expr_buf(mnemonic, left, right, max_expr_len, expr, sizeof(expr));
    return tracked_from(value, expr, classes, is_unknown(value) ? "binop" : "", max_expr_len);
}

static bool self_zero_insn(cs_x86_op *ops, const char *mnem) {
    return ops[0].type == X86_OP_REG && ops[1].type == X86_OP_REG && ops[0].reg == ops[1].reg &&
           (!strcmp(mnem, "xor") || !strcmp(mnem, "sub"));
}

static void path_append(char **path, size_t *len, size_t *cap, uint64_t addr, const char *mnemonic, const char *outcome) {
    char item[80];
    snprintf(item, sizeof(item), "0x%" PRIx64 ":%s:%s", addr, mnemonic, outcome);
    size_t need = strlen(item) + (*len ? 1 : 0) + 1;
    if (*len + need > *cap) {
        *cap = (*cap + need + 128) * 2;
        *path = realloc(*path, *cap);
        if (!*path) {
            perror("realloc");
            exit(1);
        }
    }
    if (*len) (*path)[(*len)++] = ';';
    memcpy(*path + *len, item, strlen(item) + 1);
    *len += strlen(item);
}

static void sha_path(const char *text, char out[17]) {
    unsigned char digest[SHA256_DIGEST_LENGTH];
    SHA256((const unsigned char *)text, strlen(text), digest);
    for (int i = 0; i < 8; ++i) {
        snprintf(out + i * 2, 3, "%02x", digest[i]);
    }
    out[16] = 0;
}

static cs_insn *find_insn(Handler *h, uint64_t pc) {
    size_t lo = 0, hi = h->insn_count;
    while (lo < hi) {
        size_t mid = lo + (hi - lo) / 2;
        if (h->insns[mid].address == pc) return &h->insns[mid];
        if (h->insns[mid].address < pc) lo = mid + 1;
        else hi = mid;
    }
    return NULL;
}

static int target_to_entry(uint64_t *table, uint64_t target) {
    for (int i = 0; i < TABLE_ENTRIES; ++i) {
        if (table[i] == target) return i;
    }
    return -1;
}

static int status_index(const char *status) {
    if (!strcmp(status, "ok")) return 0;
    if (!strcmp(status, "unknown_target")) return 1;
    if (!strcmp(status, "falloff")) return 2;
    return 3;
}

typedef struct {
    int pred_entry;
    uint64_t pred_target;
    uint32_t pred_state;
    int64_t pred_delta;
    const char *status;
    uint64_t steps;
    uint64_t unknown;
    uint64_t branch_unknown;
    char *path;
} ExecResult;

static ExecResult execute_handler(Handler *h, TraceRow *row, uint64_t *table, Seed *seed, int max_steps) {
    Frame frame = {
        .state = row->pre_state,
        .flags = row->pre_flags,
        .byte = row->pre_byte,
        .ip_delta = 0,
        .ip_low12 = row->start_vm_ip & 0xfff,
    };
    Value regs[REG_COUNT];
    for (int i = 0; i < REG_COUNT; ++i) regs[i] = val_unknown();
    FrameMem frame_mem[64];
    size_t frame_mem_count = 0;
    if (seed && seed->present) {
        for (int i = 0; i < REG_COUNT; ++i) {
            if (seed->reg_present[i]) regs[i] = seed->regs[i];
        }
        for (size_t i = 0; i < seed->mem_count && i < 64; ++i) {
            frame_mem[frame_mem_count++] = seed->mem[i];
        }
    }
    regs[14] = val_ptr(PK_FRAME, 0);
    uint64_t pc = h->target;
    int zf = -1;
    uint64_t steps = 0, unknown = 0, branch_unknown = 0;
    char *path = xstrdup("");
    size_t path_len = 0, path_cap = 1;
    while (steps < (uint64_t)max_steps) {
        cs_insn *insn = find_insn(h, pc);
        if (!insn) {
            return (ExecResult){.pred_entry = -1, .pred_state = frame.state, .pred_delta = frame.ip_delta, .status = "falloff",
                                .steps = steps, .unknown = unknown, .branch_unknown = branch_unknown, .path = path};
        }
        steps++;
        cs_x86 *x86 = &insn->detail->x86;
        cs_x86_op *ops = x86->operands;
        uint8_t op_count = x86->op_count;
        uint64_t next_pc = insn->address + insn->size;
        const char *mnem = insn->mnemonic;
        if (!strcmp(mnem, "jmp")) {
            if (op_count && ops[0].type == X86_OP_IMM && find_insn(h, (uint64_t)ops[0].imm)) {
                pc = (uint64_t)ops[0].imm;
                continue;
            }
            Value v = op_count ? read_op(insn, &ops[0], regs, &frame, row->bytes, row->byte_count, table, frame_mem, frame_mem_count) : val_unknown();
            if (v.kind == VK_INT) {
                return (ExecResult){.pred_entry = target_to_entry(table, v.u), .pred_target = v.u, .pred_state = frame.state, .pred_delta = frame.ip_delta,
                                    .status = "ok", .steps = steps, .unknown = unknown, .branch_unknown = branch_unknown, .path = path};
            }
            return (ExecResult){.pred_entry = -1, .pred_state = frame.state, .pred_delta = frame.ip_delta, .status = "unknown_target",
                                .steps = steps, .unknown = unknown + 1, .branch_unknown = branch_unknown, .path = path};
        }
        int taken = branch_taken(mnem, zf);
        if (taken >= 0) {
            path_append(&path, &path_len, &path_cap, insn->address, mnem, taken ? "1" : "0");
            pc = (taken && op_count && ops[0].type == X86_OP_IMM) ? (uint64_t)ops[0].imm : next_pc;
            continue;
        }
        if (mnem[0] == 'j' && strcmp(mnem, "jmp")) {
            path_append(&path, &path_len, &path_cap, insn->address, mnem, "?");
            branch_unknown++;
            pc = next_pc;
            continue;
        }
        if ((!strcmp(mnem, "cmp") || !strcmp(mnem, "test")) && op_count >= 2) {
            Value left = read_op(insn, &ops[0], regs, &frame, row->bytes, row->byte_count, table, frame_mem, frame_mem_count);
            Value right = read_op(insn, &ops[1], regs, &frame, row->bytes, row->byte_count, table, frame_mem, frame_mem_count);
            int size = ops[0].size ? ops[0].size : (ops[1].size ? ops[1].size : 8);
            zf = cmp_zf(mnem, left, right, size);
            if (zf < 0) unknown++;
            pc = next_pc;
            continue;
        }
        if (!op_count) {
            pc = next_pc;
            continue;
        }
        if ((!strcmp(mnem, "mov") || !strcmp(mnem, "movabs") || !strcmp(mnem, "movzx")) && op_count >= 2) {
            Value value = read_op(insn, &ops[1], regs, &frame, row->bytes, row->byte_count, table, frame_mem, frame_mem_count);
            if (!write_op(insn, &ops[0], value, regs, &frame, frame_mem, &frame_mem_count)) unknown++;
            pc = next_pc;
            continue;
        }
        if (!strcmp(mnem, "lea") && op_count >= 2) {
            Value ptr;
            if (!mem_ptr(insn, &ops[1], regs, &ptr)) ptr = val_unknown();
            if (!write_op(insn, &ops[0], ptr, regs, &frame, frame_mem, &frame_mem_count)) unknown++;
            pc = next_pc;
            continue;
        }
        if ((!strcmp(mnem, "add") || !strcmp(mnem, "sub") || !strcmp(mnem, "xor") ||
             !strcmp(mnem, "and") || !strcmp(mnem, "or") || !strcmp(mnem, "shl") || !strcmp(mnem, "shr")) && op_count >= 2) {
            Value dst = read_op(insn, &ops[0], regs, &frame, row->bytes, row->byte_count, table, frame_mem, frame_mem_count);
            Value src = read_op(insn, &ops[1], regs, &frame, row->bytes, row->byte_count, table, frame_mem, frame_mem_count);
            Value value;
            if ((!strcmp(mnem, "xor") || !strcmp(mnem, "sub")) && ops[0].type == X86_OP_REG && ops[1].type == X86_OP_REG && ops[0].reg == ops[1].reg) {
                value = val_int(0);
            } else if (!strcmp(mnem, "shl") || !strcmp(mnem, "shr")) {
                value = eval_shift(mnem, dst, src, ops[0].size ? ops[0].size : 8);
            } else {
                value = eval_bin(mnem, dst, src, ops[0].size ? ops[0].size : 8);
            }
            if (is_unknown(value)) unknown++;
            if (!write_op(insn, &ops[0], value, regs, &frame, frame_mem, &frame_mem_count)) unknown++;
            if (!strcmp(mnem, "and") || !strcmp(mnem, "or") || !strcmp(mnem, "xor") || !strcmp(mnem, "sub")) {
                uint64_t concrete = 0;
                zf = concrete_full_value(value, ops[0].size ? ops[0].size : 8, &concrete) ? (concrete == 0) : -1;
            }
            pc = next_pc;
            continue;
        }
        if (ops[0].type == X86_OP_REG) {
            int r = reg_index((x86_reg)ops[0].reg);
            if (r >= 0) regs[r] = val_unknown();
        }
        pc = next_pc;
    }
    return (ExecResult){.pred_entry = -1, .pred_state = frame.state, .pred_delta = frame.ip_delta, .status = "step_limit",
                        .steps = steps, .unknown = unknown, .branch_unknown = branch_unknown, .path = path};
}

static bool load_skeletons(const char *path, Handler handlers[TABLE_ENTRIES]) {
    FILE *fp = fopen(path, "r");
    if (!fp) {
        perror(path);
        return false;
    }
    char *line = NULL;
    size_t cap = 0;
    if (getline(&line, &cap, fp) < 0) {
        fclose(fp);
        return false;
    }
    Fields header = split_line(line);
    int c_entry = col_index(&header, "entry");
    int c_target = col_index(&header, "target");
    int c_tail = col_index(&header, "tail_site");
    int c_stop = col_index(&header, "static_stop");
    while (getline(&line, &cap, fp) >= 0) {
        Fields f = split_line(line);
        int entry = atoi(field(&f, c_entry));
        if (entry >= 0 && entry < TABLE_ENTRIES) {
            handlers[entry].target = parse_u64(field(&f, c_target));
            handlers[entry].tail_site = parse_u64(field(&f, c_tail));
            handlers[entry].stop = parse_u64(field(&f, c_stop));
            handlers[entry].present = handlers[entry].target != 0;
        }
        free(f.items);
    }
    free(header.items);
    free(line);
    fclose(fp);
    return true;
}

static bool decode_handler(csh cs, Handler *h, uint8_t *eac, size_t eac_size, uint64_t window) {
    if (h->decoded) return true;
    uint64_t stop = h->tail_site ? h->tail_site + 16 : h->target + window;
    if (h->stop && h->stop < stop) stop = h->stop;
    if (stop < h->target || stop - h->target > window) stop = h->target + window;
    if (h->target >= eac_size) return false;
    if (stop > eac_size) stop = eac_size;
    h->insn_count = cs_disasm(cs, eac + h->target, (size_t)(stop - h->target), h->target, 0, &h->insns);
    h->decoded = h->insn_count > 0;
    return h->decoded;
}

static bool find_hex_field(const char *line, const char *key, uint64_t *out) {
    char pattern[64];
    snprintf(pattern, sizeof(pattern), "%s=0x", key);
    const char *p = line;
    size_t klen = strlen(pattern);
    while ((p = strstr(p, pattern))) {
        if ((p == line || p[-1] == ' ' || p[-1] == '[') && !strncmp(p, pattern, klen)) {
            *out = strtoull(p + klen, NULL, 16);
            return true;
        }
        p += klen;
    }
    return false;
}

static bool find_dec_field(const char *line, const char *key, uint64_t *out) {
    char pattern[64];
    snprintf(pattern, sizeof(pattern), "%s=", key);
    const char *p = strstr(line, pattern);
    if (!p) return false;
    *out = strtoull(p + strlen(pattern), NULL, 10);
    return true;
}

static Value normalize_seed(uint64_t value, uint64_t frame, bool has_frame, uint64_t frame_off,
                            bool has_frame_off, uint64_t table, bool has_table,
                            uint64_t vm_ip, bool has_vm_ip) {
    uint64_t image_base = 0;
    bool has_image = false;
    if (has_frame && has_frame_off) {
        image_base = frame - frame_off;
        has_image = true;
    }
    if (has_frame && value >= frame - 0x4000 && value < frame + 0x4000) {
        return val_ptr(PK_FRAME, (int64_t)value - (int64_t)frame);
    }
    if (has_table && value >= table && value < table + TABLE_ENTRIES * 8u) {
        return val_ptr(PK_TABLE, (int64_t)value - (int64_t)table);
    }
    if (has_vm_ip && value >= vm_ip - 0x10000 && value < vm_ip + 0x10000) {
        return val_ptr_low(PK_IP, (int64_t)value - (int64_t)vm_ip, 12, vm_ip & 0xfff);
    }
    if (has_image && value >= image_base && value < image_base + 0x650000) {
        return val_int(value - image_base);
    }
    return val_int(value);
}

static int reg_name_index(const char *name) {
    static const char *names[REG_COUNT] = {
        "rax","rbx","rcx","rdx","rsi","rdi","r8","r9","r10","r11","r12","r13","r14","r15","rbp","rsp"
    };
    for (int i = 0; i < REG_COUNT; ++i) {
        if (!strcmp(name, names[i])) return i;
    }
    return -1;
}

static Seed *load_gpr_seeds(const char *path, size_t *seed_count) {
    if (!path) {
        *seed_count = 0;
        return NULL;
    }
    FILE *fp = fopen(path, "r");
    if (!fp) {
        perror(path);
        *seed_count = 0;
        return NULL;
    }
    size_t cap = 300000;
    Seed *seeds = xcalloc(cap, sizeof(Seed));
    char *line = NULL;
    size_t line_cap = 0;
    while (getline(&line, &line_cap, fp) >= 0) {
        if (strncmp(line, "[VMTAIL]", 8)) continue;
        uint64_t count = 0;
        if (!find_dec_field(line, "count", &count)) continue;
        size_t idx = (size_t)count + 1;
        if (idx >= cap) {
            size_t new_cap = idx + 1024;
            seeds = realloc(seeds, new_cap * sizeof(Seed));
            if (!seeds) {
                perror("realloc");
                exit(1);
            }
            memset(seeds + cap, 0, (new_cap - cap) * sizeof(Seed));
            cap = new_cap;
        }
        uint64_t frame = 0, frame_off = 0, table = 0, vm_ip = 0;
        bool has_frame = find_hex_field(line, "frame", &frame);
        bool has_frame_off = find_hex_field(line, "frame_off", &frame_off);
        bool has_table = find_hex_field(line, "table", &table);
        bool has_vm_ip = find_hex_field(line, "vm_ip", &vm_ip);
        seeds[idx].present = true;
        static const char *regs[REG_COUNT] = {
            "rax","rbx","rcx","rdx","rsi","rdi","r8","r9","r10","r11","r12","r13","r14","r15","rbp","rsp"
        };
        for (int r = 0; r < REG_COUNT; ++r) {
            uint64_t value = 0;
            if (find_hex_field(line, regs[r], &value)) {
                seeds[idx].regs[r] = normalize_seed(value, frame, has_frame, frame_off, has_frame_off, table, has_table, vm_ip, has_vm_ip);
                seeds[idx].reg_present[r] = true;
            }
        }
        char *p = line;
        while ((p = strstr(p, " fs0x"))) {
            p += 5;
            char *end = NULL;
            long off = strtol(p, &end, 16);
            if (!end || strncmp(end, "=0x", 3)) continue;
            uint64_t value = strtoull(end + 3, NULL, 16);
            if (seeds[idx].mem_count < sizeof(seeds[idx].mem) / sizeof(seeds[idx].mem[0])) {
                seeds[idx].mem[seeds[idx].mem_count++] = (FrameMem){.off = off, .size = 8, .value = val_int(value)};
            }
            p = end + 3;
        }
    }
    free(line);
    fclose(fp);
    *seed_count = cap;
    return seeds;
}

static void add_branch_site(SourceStat *s, uint64_t site) {
    for (size_t i = 0; i < s->branch_site_count; ++i) {
        if (s->branch_sites[i] == site) return;
    }
    if (s->branch_site_count < sizeof(s->branch_sites) / sizeof(s->branch_sites[0])) {
        s->branch_sites[s->branch_site_count++] = site;
    }
}

static int cmp_u64(const void *a, const void *b) {
    uint64_t x = *(const uint64_t *)a, y = *(const uint64_t *)b;
    return (x > y) - (x < y);
}

static PathStat *find_path(PathStat **paths, size_t *count, size_t *cap, int source, const char hash[17], const char *text, const char *source_target) {
    for (size_t i = 0; i < *count; ++i) {
        if ((*paths)[i].source == source && !strcmp((*paths)[i].hash, hash)) {
            return &(*paths)[i];
        }
    }
    if (*count == *cap) {
        *cap = *cap ? *cap * 2 : 512;
        *paths = realloc(*paths, *cap * sizeof(PathStat));
        if (!*paths) {
            perror("realloc");
            exit(1);
        }
    }
    PathStat *p = &(*paths)[(*count)++];
    memset(p, 0, sizeof(*p));
    p->source = source;
    memcpy(p->hash, hash, 17);
    p->text = xstrdup(text && *text ? text : "-");
    snprintf(p->source_target, sizeof(p->source_target), "%s", source_target);
    return p;
}

static void add_target_counter(PathStat *p, int entry, uint64_t target) {
    char label[64];
    snprintf(label, sizeof(label), "%d@0x%" PRIx64, entry, target);
    for (size_t i = 0; i < p->target_count; ++i) {
        if (!strcmp(p->targets[i].label, label)) {
            p->targets[i].count++;
            return;
        }
    }
    if (p->target_count < sizeof(p->targets) / sizeof(p->targets[0])) {
        snprintf(p->targets[p->target_count].label, sizeof(p->targets[p->target_count].label), "%s", label);
        p->targets[p->target_count].count = 1;
        p->target_count++;
    }
}

static BranchStat *find_branch_stat(BranchStat **branches, size_t *count, size_t *cap,
                                    int source, const char *source_target, uint64_t site, const char *mnemonic) {
    for (size_t i = 0; i < *count; ++i) {
        if ((*branches)[i].source == source && (*branches)[i].site == site &&
            !strcmp((*branches)[i].mnemonic, mnemonic)) {
            return &(*branches)[i];
        }
    }
    if (*count == *cap) {
        *cap = *cap ? *cap * 2 : 1024;
        *branches = realloc(*branches, *cap * sizeof(BranchStat));
        if (!*branches) {
            perror("realloc");
            exit(1);
        }
    }
    BranchStat *b = &(*branches)[(*count)++];
    memset(b, 0, sizeof(*b));
    b->source = source;
    b->site = site;
    snprintf(b->mnemonic, sizeof(b->mnemonic), "%s", mnemonic);
    snprintf(b->source_target, sizeof(b->source_target), "%s", source_target);
    return b;
}

static void update_branch_stats_from_path(BranchStat **branches, size_t *count, size_t *cap,
                                          int source, const char *source_target, const char *path) {
    if (!path || !*path) return;
    char *copy = xstrdup(path);
    for (char *tok = strtok(copy, ";"); tok; tok = strtok(NULL, ";")) {
        char *first = strchr(tok, ':');
        if (!first) continue;
        *first = 0;
        char *second = strchr(first + 1, ':');
        if (!second) continue;
        *second = 0;
        const char *outcome = second + 1;
        BranchStat *b = find_branch_stat(branches, count, cap, source, source_target, parse_u64(tok), first + 1);
        b->events++;
        if (!strcmp(outcome, "1")) b->taken++;
        else if (!strcmp(outcome, "0")) b->not_taken++;
        else b->unknown++;
    }
    free(copy);
}

static BranchPredStat *find_branch_pred_stat(BranchPredStat **stats, size_t *count, size_t *cap,
                                             int source, const char *source_target, uint64_t site,
                                             const char *mnemonic) {
    for (size_t i = 0; i < *count; ++i) {
        if ((*stats)[i].source == source && (*stats)[i].site == site &&
            !strcmp((*stats)[i].mnemonic, mnemonic)) {
            return &(*stats)[i];
        }
    }
    if (*count == *cap) {
        *cap = *cap ? *cap * 2 : 1024;
        *stats = realloc(*stats, *cap * sizeof(BranchPredStat));
        if (!*stats) {
            perror("realloc");
            exit(1);
        }
    }
    BranchPredStat *b = &(*stats)[(*count)++];
    memset(b, 0, sizeof(*b));
    b->source = source;
    b->site = site;
    snprintf(b->mnemonic, sizeof(b->mnemonic), "%s", mnemonic);
    snprintf(b->source_target, sizeof(b->source_target), "%s", source_target);
    return b;
}

static const char *classify_condition(BranchCondition *cond, const char *branch_mnemonic, bool outcome_unknown) {
    if (!cond || !cond->present) return "missing_condition";
    if (outcome_unknown && strcmp(branch_mnemonic, "je") && strcmp(branch_mnemonic, "jz") &&
        strcmp(branch_mnemonic, "jne") && strcmp(branch_mnemonic, "jnz")) {
        return "unsupported_jcc";
    }
    if (cond->zf >= 0) return "resolved";
    uint64_t classes = cond->left.classes | cond->right.classes;
    if (classes & TC_LIVE_IN_REG) {
        return (classes & (TC_DERIVED_LIVE_IN | TC_DERIVED_UNKNOWN)) ? "derived_live_in" : "live_in_reg";
    }
    if (classes & TC_GPR_SEED) return "seeded_gpr_unresolved";
    if (classes & TC_UNKNOWN_MEMORY_POINTER) return "unknown_memory_pointer";
    if (classes & TC_UNKNOWN_FRAME_FIELD) return "unknown_frame_field";
    if (classes & TC_VM_BYTECODE) return "vm_bytecode_unresolved";
    if (classes & (TC_STATE | TC_FLAGS | TC_VM_BYTE)) return "state_unresolved";
    if (classes & TC_UNKNOWN) return "unknown_operand";
    return "unresolved";
}

static void condition_text_buf(BranchCondition *cond, char *out, size_t out_size, int max_len) {
    if (!cond || !cond->present) {
        snprintf(out, out_size, "-");
        return;
    }
    char left_value[128], right_value[128], classes[512], zf[8], tmp[1400];
    fmt_value_buf(cond->left.value, cond->left.reason, left_value, sizeof(left_value));
    fmt_value_buf(cond->right.value, cond->right.reason, right_value, sizeof(right_value));
    class_names_buf(cond->left.classes | cond->right.classes, classes, sizeof(classes));
    snprintf(zf, sizeof(zf), "%s", cond->zf < 0 ? "None" : (cond->zf ? "True" : "False"));
    snprintf(tmp, sizeof(tmp), "0x%" PRIx64 ":%s:%s:%s(%s) ? %s(%s):zf=%s:%s",
             cond->site, cond->mnemonic, cond->op_str,
             cond->left.expr, left_value, cond->right.expr, right_value, zf, classes);
    clip_to_buf(tmp, max_len, out, out_size);
}

static void update_branch_pred(BranchPredStat **stats, size_t *count, size_t *cap,
                               int source, const char *source_target, cs_insn *insn,
                               int outcome, BranchCondition *cond, uint64_t steps,
                               int max_cell_len) {
    BranchPredStat *b = find_branch_pred_stat(stats, count, cap, source, source_target,
                                              insn->address, insn->mnemonic);
    b->events++;
    b->steps += steps;
    const char *outcome_s = "unknown";
    if (outcome > 0) {
        b->taken++;
        outcome_s = "taken";
    } else if (outcome == 0) {
        b->not_taken++;
        outcome_s = "not_taken";
    } else {
        b->unknown++;
    }
    counter_add(&b->classes, classify_condition(cond, insn->mnemonic, outcome < 0), 1);
    counter_add(&b->outcomes, outcome_s, 1);
    if (!cond || !cond->present) {
        counter_add(&b->condition_sites, "-", 1);
        counter_add(&b->condition_mnemonics, "-", 1);
        counter_add(&b->condition_ops, "-", 1);
        counter_add(&b->left_exprs, "-", 1);
        counter_add(&b->right_exprs, "-", 1);
        counter_add(&b->left_values, "-", 1);
        counter_add(&b->right_values, "-", 1);
        counter_add(&b->zf_values, "-", 1);
        counter_add(&b->condition_texts, "-", 1);
        return;
    }
    char value[256], text[512], zf[8];
    counter_add_fmt(&b->condition_sites, 1, "0x%" PRIx64, cond->site);
    counter_add(&b->condition_mnemonics, cond->mnemonic, 1);
    counter_add(&b->condition_ops, cond->op_str, 1);
    counter_add(&b->left_exprs, cond->left.expr, 1);
    counter_add(&b->right_exprs, cond->right.expr, 1);
    fmt_value_buf(cond->left.value, cond->left.reason, value, sizeof(value));
    counter_add(&b->left_values, value, 1);
    fmt_value_buf(cond->right.value, cond->right.reason, value, sizeof(value));
    counter_add(&b->right_values, value, 1);
    snprintf(zf, sizeof(zf), "%s", cond->zf < 0 ? "None" : (cond->zf ? "True" : "False"));
    counter_add(&b->zf_values, zf, 1);
    condition_text_buf(cond, text, sizeof(text), max_cell_len);
    counter_add(&b->condition_texts, text, 1);
}

static ExecResult execute_handler_branch_pred(Handler *h, TraceRow *row, uint64_t *table, Seed *seed,
                                              int max_steps, int max_expr_len, int max_cell_len,
                                              BranchPredStat **pred_stats, size_t *pred_count, size_t *pred_cap,
                                              int source, const char *source_target) {
    Frame frame = {
        .state = row->pre_state,
        .flags = row->pre_flags,
        .byte = row->pre_byte,
        .ip_delta = 0,
        .ip_low12 = row->start_vm_ip & 0xfff,
    };
    TrackedValue regs[REG_COUNT];
    for (int i = 0; i < REG_COUNT; ++i) {
        char reason[64], expr[80];
        snprintf(reason, sizeof(reason), "livein_%s", tracked_reg_name(i));
        snprintf(expr, sizeof(expr), "live_in(%s)", tracked_reg_name(i));
        regs[i] = tracked_unknown(reason, expr, TC_LIVE_IN_REG, max_expr_len);
    }
    TrackedFrameMem frame_mem[64];
    size_t frame_mem_count = 0;
    if (seed && seed->present) {
        for (int i = 0; i < REG_COUNT; ++i) {
            if (seed->reg_present[i]) regs[i] = tracked_seed_from_value(i, seed->regs[i], max_expr_len);
        }
        for (size_t i = 0; i < seed->mem_count && i < 64; ++i) {
            char expr[64];
            snprintf(expr, sizeof(expr), "seed_frame(0x%llx)", (unsigned long long)seed->mem[i].off);
            frame_mem[frame_mem_count++] = (TrackedFrameMem){
                .off = seed->mem[i].off,
                .size = seed->mem[i].size,
                .value = tracked_from(seed->mem[i].value, expr, TC_FRAME_SCRATCH_SEED, "", max_expr_len),
            };
        }
    }
    regs[14] = tracked_from(val_ptr(PK_FRAME, 0), "frame", TC_FRAME_POINTER, "", max_expr_len);
    TrackedValue state_tv = tracked_from(val_int(frame.state), "state0", TC_STATE, "", max_expr_len);
    TrackedValue flags_tv = tracked_from(val_int(frame.flags), "flags0", TC_FLAGS, "", max_expr_len);
    TrackedValue byte_tv = tracked_from(val_int(frame.byte), "vm_byte0", TC_VM_BYTE, "", max_expr_len);
    TrackedValue ip_tv = tracked_from(val_ptr_low(PK_IP, 0, 12, frame.ip_low12), "ip+0x0", TC_VM_IP_POINTER, "", max_expr_len);
    uint64_t pc = h->target;
    int zf = -1;
    BranchCondition cond = {0};
    cond.zf = -1;
    uint64_t steps = 0, unknown = 0, branch_unknown = 0;
    char *path = xstrdup("");
    size_t path_len = 0, path_cap = 1;
    while (steps < (uint64_t)max_steps) {
        cs_insn *insn = find_insn(h, pc);
        if (!insn) {
            return (ExecResult){.pred_entry = -1, .pred_state = frame.state, .pred_delta = frame.ip_delta,
                                .status = "falloff", .steps = steps, .unknown = unknown,
                                .branch_unknown = branch_unknown, .path = path};
        }
        steps++;
        cs_x86 *x86 = &insn->detail->x86;
        cs_x86_op *ops = x86->operands;
        uint8_t op_count = x86->op_count;
        uint64_t next_pc = insn->address + insn->size;
        const char *mnem = insn->mnemonic;
        if (!strcmp(mnem, "jmp")) {
            if (op_count && ops[0].type == X86_OP_IMM && find_insn(h, (uint64_t)ops[0].imm)) {
                pc = (uint64_t)ops[0].imm;
                continue;
            }
            TrackedValue v = op_count
                ? read_op_tracked(insn, &ops[0], regs, &frame, &state_tv, &flags_tv, &byte_tv, &ip_tv,
                                  row->bytes, row->byte_count, table, frame_mem, frame_mem_count, max_expr_len)
                : tracked_unknown("jmp", "?jmp", 0, max_expr_len);
            if (v.value.kind == VK_INT) {
                return (ExecResult){.pred_entry = target_to_entry(table, v.value.u), .pred_target = v.value.u,
                                    .pred_state = frame.state, .pred_delta = frame.ip_delta, .status = "ok",
                                    .steps = steps, .unknown = unknown, .branch_unknown = branch_unknown, .path = path};
            }
            return (ExecResult){.pred_entry = -1, .pred_state = frame.state, .pred_delta = frame.ip_delta,
                                .status = "unknown_target", .steps = steps, .unknown = unknown + 1,
                                .branch_unknown = branch_unknown, .path = path};
        }
        int taken = branch_taken(mnem, zf);
        if (taken >= 0) {
            update_branch_pred(pred_stats, pred_count, pred_cap, source, source_target, insn, taken, &cond, steps, max_cell_len);
            path_append(&path, &path_len, &path_cap, insn->address, mnem, taken ? "1" : "0");
            pc = (taken && op_count && ops[0].type == X86_OP_IMM) ? (uint64_t)ops[0].imm : next_pc;
            continue;
        }
        if (mnem[0] == 'j' && strcmp(mnem, "jmp")) {
            update_branch_pred(pred_stats, pred_count, pred_cap, source, source_target, insn, -1, &cond, steps, max_cell_len);
            path_append(&path, &path_len, &path_cap, insn->address, mnem, "?");
            branch_unknown++;
            pc = next_pc;
            continue;
        }
        if ((!strcmp(mnem, "cmp") || !strcmp(mnem, "test")) && op_count >= 2) {
            TrackedValue left = read_op_tracked(insn, &ops[0], regs, &frame, &state_tv, &flags_tv, &byte_tv, &ip_tv,
                                                row->bytes, row->byte_count, table, frame_mem, frame_mem_count, max_expr_len);
            TrackedValue right = read_op_tracked(insn, &ops[1], regs, &frame, &state_tv, &flags_tv, &byte_tv, &ip_tv,
                                                 row->bytes, row->byte_count, table, frame_mem, frame_mem_count, max_expr_len);
            int size = ops[0].size ? ops[0].size : (ops[1].size ? ops[1].size : 8);
            zf = cmp_zf(mnem, left.value, right.value, size);
            if (zf < 0) unknown++;
            cond.present = true;
            cond.site = insn->address;
            snprintf(cond.mnemonic, sizeof(cond.mnemonic), "%s", mnem);
            snprintf(cond.op_str, sizeof(cond.op_str), "%s", insn->op_str);
            cond.left = left;
            cond.right = right;
            cond.zf = zf;
            pc = next_pc;
            continue;
        }
        if (!op_count) {
            pc = next_pc;
            continue;
        }
        if ((!strcmp(mnem, "mov") || !strcmp(mnem, "movabs") || !strcmp(mnem, "movzx")) && op_count >= 2) {
            TrackedValue value = read_op_tracked(insn, &ops[1], regs, &frame, &state_tv, &flags_tv, &byte_tv, &ip_tv,
                                                 row->bytes, row->byte_count, table, frame_mem, frame_mem_count, max_expr_len);
            if (!write_op_tracked(insn, &ops[0], value, regs, &frame, &state_tv, &flags_tv, &byte_tv, &ip_tv,
                                  frame_mem, &frame_mem_count, max_expr_len)) unknown++;
            pc = next_pc;
            continue;
        }
        if (!strcmp(mnem, "lea") && op_count >= 2) {
            Value ptr;
            TrackedValue value;
            if (mem_ptr_tracked(insn, &ops[1], regs, &ptr)) {
                char expr[96];
                snprintf(expr, sizeof(expr), "%s+0x%llx", ptr_kind_name(ptr.ptr_kind), (unsigned long long)ptr.off);
                uint64_t cls = ptr.ptr_kind == PK_FRAME ? TC_FRAME_POINTER :
                               ptr.ptr_kind == PK_TABLE ? TC_DISPATCH_TABLE_POINTER : TC_VM_IP_POINTER;
                value = tracked_from(ptr, expr, cls, "", max_expr_len);
            } else {
                char expr[192];
                snprintf(expr, sizeof(expr), "lea(%s)", insn->op_str);
                value = tracked_unknown("lea", expr, TC_UNKNOWN_MEMORY_POINTER, max_expr_len);
            }
            if (!write_op_tracked(insn, &ops[0], value, regs, &frame, &state_tv, &flags_tv, &byte_tv, &ip_tv,
                                  frame_mem, &frame_mem_count, max_expr_len)) unknown++;
            pc = next_pc;
            continue;
        }
        if ((!strcmp(mnem, "add") || !strcmp(mnem, "sub") || !strcmp(mnem, "xor") ||
             !strcmp(mnem, "and") || !strcmp(mnem, "or") || !strcmp(mnem, "shl") || !strcmp(mnem, "shr")) &&
            op_count >= 2) {
            TrackedValue dst = read_op_tracked(insn, &ops[0], regs, &frame, &state_tv, &flags_tv, &byte_tv, &ip_tv,
                                               row->bytes, row->byte_count, table, frame_mem, frame_mem_count, max_expr_len);
            TrackedValue src = read_op_tracked(insn, &ops[1], regs, &frame, &state_tv, &flags_tv, &byte_tv, &ip_tv,
                                               row->bytes, row->byte_count, table, frame_mem, frame_mem_count, max_expr_len);
            TrackedValue value;
            if (self_zero_insn(ops, mnem)) {
                value = tracked_const(0, ops[0].size ? ops[0].size : 8, max_expr_len);
            } else {
                value = eval_bin_tracked(mnem, dst, src, ops[0].size ? ops[0].size : 8, max_expr_len);
            }
            if (is_unknown(value.value)) unknown++;
            if (!write_op_tracked(insn, &ops[0], value, regs, &frame, &state_tv, &flags_tv, &byte_tv, &ip_tv,
                                  frame_mem, &frame_mem_count, max_expr_len)) unknown++;
            if (!strcmp(mnem, "and") || !strcmp(mnem, "or") || !strcmp(mnem, "xor") || !strcmp(mnem, "sub")) {
                uint64_t concrete = 0;
                zf = concrete_full_value(value.value, ops[0].size ? ops[0].size : 8, &concrete) ? (concrete == 0) : -1;
                cond.present = true;
                cond.site = insn->address;
                snprintf(cond.mnemonic, sizeof(cond.mnemonic), "%s", mnem);
                snprintf(cond.op_str, sizeof(cond.op_str), "%s", insn->op_str);
                cond.left = value;
                cond.right = tracked_const(0, ops[0].size ? ops[0].size : 8, max_expr_len);
                cond.zf = zf;
            }
            pc = next_pc;
            continue;
        }
        if (ops[0].type == X86_OP_REG) {
            int r = reg_index((x86_reg)ops[0].reg);
            if (r >= 0) {
                char expr[192], reason[64];
                snprintf(reason, sizeof(reason), "%s", mnem);
                snprintf(expr, sizeof(expr), "?%s(%s)", mnem, insn->op_str);
                regs[r] = tracked_unknown(reason, expr, 0, max_expr_len);
            }
        }
        pc = next_pc;
    }
    return (ExecResult){.pred_entry = -1, .pred_state = frame.state, .pred_delta = frame.ip_delta,
                        .status = "step_limit", .steps = steps, .unknown = unknown,
                        .branch_unknown = branch_unknown, .path = path};
}

static int cmp_target_counter(const void *a, const void *b) {
    const TargetCounter *x = a, *y = b;
    if (x->count != y->count) return x->count < y->count ? 1 : -1;
    return strcmp(x->label, y->label);
}

static void print_statuses(uint64_t ok, uint64_t unknown_target, uint64_t falloff, uint64_t step_limit) {
    bool first = true;
    if (falloff) { printf("falloff:%" PRIu64, falloff); first = false; }
    if (ok) { printf("%sok:%" PRIu64, first ? "" : ",", ok); first = false; }
    if (step_limit) { printf("%sstep_limit:%" PRIu64, first ? "" : ",", step_limit); first = false; }
    if (unknown_target) { printf("%sunknown_target:%" PRIu64, first ? "" : ",", unknown_target); }
}

static void format_bytes(const uint8_t *bytes, size_t count, char *out, size_t out_size) {
    size_t pos = 0;
    if (!out_size) return;
    for (size_t i = 0; i < count && pos + 2 < out_size; ++i) {
        int n = snprintf(out + pos, out_size - pos, "%02x", bytes[i]);
        if (n < 0) break;
        pos += (size_t)n;
    }
    out[out_size - 1] = 0;
}

static void print_statuses_for_stat(SourceStat *s) {
    print_statuses(s->status_ok, s->status_unknown_target, s->status_falloff, s->status_step_limit);
}

static void print_top_actual_targets(PathStat *p, int limit) {
    TargetCounter tmp[32];
    memcpy(tmp, p->targets, sizeof(tmp));
    qsort(tmp, p->target_count, sizeof(tmp[0]), cmp_target_counter);
    for (size_t i = 0; i < p->target_count && (int)i < limit; ++i) {
        printf("%s%s:%" PRIu64, i ? "," : "", tmp[i].label, tmp[i].count);
    }
}

static int cmp_path_events(const void *a, const void *b) {
    const PathStat *x = *(const PathStat * const *)a;
    const PathStat *y = *(const PathStat * const *)b;
    if (x->events != y->events) return x->events < y->events ? 1 : -1;
    if (x->source != y->source) return x->source - y->source;
    return strcmp(x->hash, y->hash);
}

static void emit_by_path(PathStat *paths, size_t path_count, int top_targets) {
    printf("source_entry\tsource_target\tpath_hash\tevents\ttarget_matched_events\ttarget_coverage_pct\t"
           "ip_matched_events\tip_coverage_pct\tstatuses\ttop_actual_targets\tpath\n");
    PathStat **order = xcalloc(path_count, sizeof(PathStat *));
    for (size_t i = 0; i < path_count; ++i) order[i] = &paths[i];
    qsort(order, path_count, sizeof(order[0]), cmp_path_events);
    for (size_t i = 0; i < path_count; ++i) {
        PathStat *p = order[i];
        printf("%d\t%s\t%s\t%" PRIu64 "\t%" PRIu64 "\t%.1f\t%" PRIu64 "\t%.1f\t",
               p->source, p->source_target, p->hash, p->events, p->target_matched,
               p->events ? p->target_matched * 100.0 / p->events : 0.0,
               p->ip_matched, p->events ? p->ip_matched * 100.0 / p->events : 0.0);
        print_statuses(p->status_ok, p->status_unknown_target, p->status_falloff, p->status_step_limit);
        printf("\t");
        print_top_actual_targets(p, top_targets);
        printf("\t%s\n", p->text);
    }
    free(order);
}

static int cmp_source_summary(const void *a, const void *b, void *arg) {
    SourceStat *stats = arg;
    int x = *(const int *)a, y = *(const int *)b;
    if (stats[x].events != stats[y].events) return stats[x].events < stats[y].events ? 1 : -1;
    return x - y;
}

static void print_branch_sites(SourceStat *s) {
    uint64_t tmp[512];
    memcpy(tmp, s->branch_sites, s->branch_site_count * sizeof(uint64_t));
    qsort(tmp, s->branch_site_count, sizeof(uint64_t), cmp_u64);
    for (size_t i = 0; i < s->branch_site_count; ++i) {
        printf("%s0x%" PRIx64, i ? "," : "", tmp[i]);
    }
}

static void print_top_paths_for_source(PathStat *paths, size_t path_count, int source, int top) {
    PathStat **list = xcalloc(path_count ? path_count : 1, sizeof(PathStat *));
    size_t n = 0;
    for (size_t i = 0; i < path_count; ++i) {
        if (paths[i].source == source) list[n++] = &paths[i];
    }
    qsort(list, n, sizeof(list[0]), cmp_path_events);
    for (size_t i = 0; i < n && (int)i < top; ++i) {
        printf("%s%" PRIu64 ":%s:%s", i ? "|" : "", list[i]->events, list[i]->hash, list[i]->text);
    }
    free(list);
}

static void emit_summary(SourceStat stats[TABLE_ENTRIES], PathStat *paths, size_t path_count, int top) {
    printf("source_entry\tsource_target\tevents\ttarget_matched_events\ttarget_coverage_pct\ttarget_mismatched_events\t"
           "ip_matched_events\tip_coverage_pct\tip_mismatched_events\tunknown_ops\tbranch_unknown\tavg_steps\t"
           "unique_paths\tbranch_sites\ttop_paths\tstatuses\n");
    int order[TABLE_ENTRIES], n = 0;
    for (int i = 0; i < TABLE_ENTRIES; ++i) {
        if (stats[i].events) order[n++] = i;
    }
#if defined(__GLIBC__)
    qsort_r(order, (size_t)n, sizeof(order[0]), cmp_source_summary, stats);
#else
    (void)cmp_source_summary;
#endif
    for (int oi = 0; oi < n; ++oi) {
        int source = order[oi];
        SourceStat *s = &stats[source];
        size_t unique_paths = 0;
        for (size_t j = 0; j < path_count; ++j) if (paths[j].source == source) unique_paths++;
        printf("%d\t%s\t%" PRIu64 "\t%" PRIu64 "\t%.1f\t%" PRIu64 "\t%" PRIu64 "\t%.1f\t%" PRIu64 "\t"
               "%" PRIu64 "\t%" PRIu64 "\t%.1f\t%zu\t",
               source, s->target_text, s->events, s->target_matched,
               s->events ? s->target_matched * 100.0 / s->events : 0.0, s->target_mismatched,
               s->ip_matched, s->events ? s->ip_matched * 100.0 / s->events : 0.0, s->ip_mismatched,
               s->unknown_ops, s->branch_unknown, s->events ? s->steps * 1.0 / s->events : 0.0, unique_paths);
        print_branch_sites(s);
        printf("\t");
        print_top_paths_for_source(paths, path_count, source, top);
        printf("\t");
        print_statuses(s->status_ok, s->status_unknown_target, s->status_falloff, s->status_step_limit);
        printf("\n");
    }
}

static void emit_state_validate(SourceStat stats[TABLE_ENTRIES]) {
    printf("source_entry\tsource_target\tevents\tmatched_events\tcoverage_pct\tmismatched_events\t"
           "unknown_ops\tbranch_unknown\tavg_steps\tstatuses\texample_pred\texample_actual\t"
           "example_status\texample_bytes\n");
    int order[TABLE_ENTRIES], n = 0;
    for (int i = 0; i < TABLE_ENTRIES; ++i) if (stats[i].events) order[n++] = i;
#if defined(__GLIBC__)
    qsort_r(order, (size_t)n, sizeof(order[0]), cmp_source_summary, stats);
#endif
    for (int oi = 0; oi < n; ++oi) {
        int source = order[oi];
        SourceStat *s = &stats[source];
        printf("%d\t%s\t%" PRIu64 "\t%" PRIu64 "\t%.1f\t%" PRIu64 "\t%" PRIu64 "\t%" PRIu64 "\t%.1f\t",
               source, s->target_text, s->events, s->state_matched,
               s->events ? s->state_matched * 100.0 / s->events : 0.0,
               s->state_mismatched, s->unknown_ops, s->branch_unknown,
               s->events ? s->steps * 1.0 / s->events : 0.0);
        print_statuses_for_stat(s);
        printf("\t");
        if (s->has_state_example) {
            printf("0x%x\t0x%x\t%s\t%s", s->example_pred_state, s->example_actual_state,
                   s->state_example_status, s->state_example_bytes);
        } else {
            printf("\t\t\t");
        }
        printf("\n");
    }
}

static void emit_dispatch_validate(SourceStat stats[TABLE_ENTRIES]) {
    printf("source_entry\tsource_target\tevents\ttarget_matched_events\ttarget_coverage_pct\t"
           "target_mismatched_events\tip_matched_events\tip_coverage_pct\tip_mismatched_events\t"
           "unknown_ops\tbranch_unknown\tavg_steps\tstatuses\texample_pred_entry\texample_pred_target\t"
           "example_actual_entry\texample_actual_target\texample_status\texample_bytes\n");
    int order[TABLE_ENTRIES], n = 0;
    for (int i = 0; i < TABLE_ENTRIES; ++i) if (stats[i].events) order[n++] = i;
#if defined(__GLIBC__)
    qsort_r(order, (size_t)n, sizeof(order[0]), cmp_source_summary, stats);
#endif
    for (int oi = 0; oi < n; ++oi) {
        int source = order[oi];
        SourceStat *s = &stats[source];
        printf("%d\t%s\t%" PRIu64 "\t%" PRIu64 "\t%.1f\t%" PRIu64 "\t%" PRIu64 "\t%.1f\t%" PRIu64 "\t"
               "%" PRIu64 "\t%" PRIu64 "\t%.1f\t",
               source, s->target_text, s->events, s->target_matched,
               s->events ? s->target_matched * 100.0 / s->events : 0.0, s->target_mismatched,
               s->ip_matched, s->events ? s->ip_matched * 100.0 / s->events : 0.0, s->ip_mismatched,
               s->unknown_ops, s->branch_unknown, s->events ? s->steps * 1.0 / s->events : 0.0);
        print_statuses_for_stat(s);
        printf("\t");
        if (s->has_dispatch_example) {
            if (s->example_pred_entry >= 0) printf("%d", s->example_pred_entry);
            printf("\t0x%" PRIx64 "\t", s->example_pred_target);
            if (s->example_actual_entry >= 0) printf("%d", s->example_actual_entry);
            printf("\t0x%" PRIx64 "\t%s\t%s", s->example_actual_target,
                   s->dispatch_example_status, s->dispatch_example_bytes);
        } else {
            printf("\t\t\t\t\t");
        }
        printf("\n");
    }
}

static int cmp_branch_unknowns(const void *a, const void *b) {
    const BranchStat *x = *(const BranchStat * const *)a;
    const BranchStat *y = *(const BranchStat * const *)b;
    if (x->unknown != y->unknown) return x->unknown < y->unknown ? 1 : -1;
    if (x->events != y->events) return x->events < y->events ? 1 : -1;
    if (x->source != y->source) return x->source - y->source;
    if (x->site != y->site) return x->site < y->site ? -1 : 1;
    return strcmp(x->mnemonic, y->mnemonic);
}

static void emit_branch_sites(BranchStat *branches, size_t branch_count) {
    printf("source_entry\tsource_target\tbranch_site\tbranch_mnemonic\tevents\t"
           "taken_events\tnot_taken_events\tunknown_events\tunknown_pct\n");
    BranchStat **order = xcalloc(branch_count ? branch_count : 1, sizeof(BranchStat *));
    for (size_t i = 0; i < branch_count; ++i) order[i] = &branches[i];
    qsort(order, branch_count, sizeof(order[0]), cmp_branch_unknowns);
    for (size_t i = 0; i < branch_count; ++i) {
        BranchStat *b = order[i];
        printf("%d\t%s\t0x%" PRIx64 "\t%s\t%" PRIu64 "\t%" PRIu64 "\t%" PRIu64 "\t%" PRIu64 "\t%.1f\n",
               b->source, b->source_target, b->site, b->mnemonic, b->events,
               b->taken, b->not_taken, b->unknown,
               b->events ? b->unknown * 100.0 / b->events : 0.0);
    }
    free(order);
}

static int cmp_branch_pred_unknowns(const void *a, const void *b) {
    const BranchPredStat *x = *(const BranchPredStat * const *)a;
    const BranchPredStat *y = *(const BranchPredStat * const *)b;
    if (x->unknown != y->unknown) return x->unknown < y->unknown ? 1 : -1;
    if (x->events != y->events) return x->events < y->events ? 1 : -1;
    if (x->source != y->source) return x->source - y->source;
    if (x->site != y->site) return x->site < y->site ? -1 : 1;
    return strcmp(x->mnemonic, y->mnemonic);
}

static void emit_branch_predicates(BranchPredStat *stats, size_t stat_count, int top, int max_cell_len) {
    printf("source_entry\tsource_target\tbranch_site\tbranch_mnemonic\tevents\t"
           "taken_events\tnot_taken_events\tunknown_events\tunknown_pct\tavg_steps_to_branch\t"
           "top_predicate_classes\tcondition_sites\tcondition_mnemonics\ttop_condition_ops\t"
           "top_left_exprs\ttop_right_exprs\ttop_left_values\ttop_right_values\tzf_values\ttop_conditions\n");
    BranchPredStat **order = xcalloc(stat_count ? stat_count : 1, sizeof(BranchPredStat *));
    for (size_t i = 0; i < stat_count; ++i) order[i] = &stats[i];
    qsort(order, stat_count, sizeof(order[0]), cmp_branch_pred_unknowns);
    for (size_t i = 0; i < stat_count; ++i) {
        BranchPredStat *b = order[i];
        printf("%d\t%s\t0x%" PRIx64 "\t%s\t%" PRIu64 "\t%" PRIu64 "\t%" PRIu64 "\t%" PRIu64 "\t%.1f\t%.1f\t",
               b->source, b->source_target, b->site, b->mnemonic, b->events,
               b->taken, b->not_taken, b->unknown,
               b->events ? b->unknown * 100.0 / b->events : 0.0,
               b->events ? b->steps * 1.0 / b->events : 0.0);
        counter_print_top(&b->classes, top, 0);
        printf("\t");
        counter_print_top(&b->condition_sites, top, 0);
        printf("\t");
        counter_print_top(&b->condition_mnemonics, top, 0);
        printf("\t");
        counter_print_top(&b->condition_ops, top, max_cell_len);
        printf("\t");
        counter_print_top(&b->left_exprs, top, max_cell_len);
        printf("\t");
        counter_print_top(&b->right_exprs, top, max_cell_len);
        printf("\t");
        counter_print_top(&b->left_values, top, max_cell_len);
        printf("\t");
        counter_print_top(&b->right_values, top, max_cell_len);
        printf("\t");
        counter_print_top(&b->zf_values, top, 0);
        printf("\t");
        counter_print_top(&b->condition_texts, top, max_cell_len);
        printf("\n");
    }
    free(order);
}

static void free_branch_predicates(BranchPredStat *stats, size_t stat_count) {
    for (size_t i = 0; i < stat_count; ++i) {
        free_counter(&stats[i].classes);
        free_counter(&stats[i].outcomes);
        free_counter(&stats[i].condition_sites);
        free_counter(&stats[i].condition_mnemonics);
        free_counter(&stats[i].condition_ops);
        free_counter(&stats[i].left_exprs);
        free_counter(&stats[i].right_exprs);
        free_counter(&stats[i].left_values);
        free_counter(&stats[i].right_values);
        free_counter(&stats[i].zf_values);
        free_counter(&stats[i].condition_texts);
    }
    free(stats);
}

static FILE *begin_output_file(const char *dir, const char *name) {
    char path[4096];
    int n = snprintf(path, sizeof(path), "%s/%s", dir, name);
    if (n < 0 || (size_t)n >= sizeof(path)) {
        fprintf(stderr, "output path too long: %s/%s\n", dir, name);
        return NULL;
    }
    FILE *fp = fopen(path, "w");
    if (!fp) {
        perror(path);
        return NULL;
    }
    g_output = fp;
    return fp;
}

static bool finish_output_file(FILE *fp) {
    if (!fp) {
        g_output = NULL;
        return false;
    }
    if (fclose(fp) != 0) {
        perror("fclose");
        g_output = NULL;
        return false;
    }
    g_output = NULL;
    return true;
}

static bool emit_outputs_to_dir(const Args *args, SourceStat stats[TABLE_ENTRIES],
                                PathStat *paths, size_t path_count,
                                BranchStat *branches, size_t branch_count) {
#define EMIT_ONE(name, call) do { \
        FILE *out = begin_output_file(args->emit_dir, (name)); \
        if (!out) return false; \
        call; \
        if (!finish_output_file(out)) return false; \
    } while (0)

    if (args->gpr_run_path) {
        EMIT_ONE("vm_static_path_profile_gpr_seeded_fast.tsv",
                 emit_summary(stats, paths, path_count, args->top));
        EMIT_ONE("vm_static_path_variants_gpr_seeded_fast.tsv",
                 emit_by_path(paths, path_count, args->top_targets));
        EMIT_ONE("vm_branch_sites_gpr_seeded_fast.tsv",
                 emit_branch_sites(branches, branch_count));
    } else {
        EMIT_ONE("vm_state_static_validate_fast.tsv", emit_state_validate(stats));
        EMIT_ONE("vm_static_dispatch_validate_fast.tsv", emit_dispatch_validate(stats));
        EMIT_ONE("vm_static_path_profile_fast.tsv",
                 emit_summary(stats, paths, path_count, args->top));
        EMIT_ONE("vm_static_path_variants_fast.tsv",
                 emit_by_path(paths, path_count, args->top_targets));
        EMIT_ONE("vm_branch_sites_fast.tsv", emit_branch_sites(branches, branch_count));
    }
    return true;

#undef EMIT_ONE
}

static bool parse_trace_header(Fields *header, TraceCols *cols) {
    cols->seq = col_index(header, "seq");
    cols->frame = col_index(header, "frame");
    cols->source_entry = col_index(header, "source_entry");
    cols->source_target = col_index(header, "source_target");
    cols->start_vm_ip = col_index(header, "start_vm_ip");
    cols->target_entry = col_index(header, "target_entry");
    cols->target = col_index(header, "target");
    cols->post_state = col_index(header, "post_state");
    cols->delta = col_index(header, "delta");
    cols->bytes = col_index(header, "bytes");
    cols->byte_status = col_index(header, "byte_status");
    cols->pre_flags = col_index(header, "pre_flags");
    cols->pre_state = col_index(header, "pre_state");
    cols->pre_byte = col_index(header, "pre_byte");
    return cols->seq >= 0 && cols->source_entry >= 0 && cols->start_vm_ip >= 0 && cols->target_entry >= 0 &&
           cols->target >= 0 && cols->delta >= 0 && cols->bytes >= 0 && cols->byte_status >= 0 &&
           cols->pre_state >= 0 && cols->post_state >= 0;
}

static bool parse_trace_row(Fields *f, TraceCols *cols, TraceRow *row) {
    if (strcmp(field(f, cols->byte_status), "exact") || !*field(f, cols->pre_state)) {
        return false;
    }
    row->seq = atoi(field(f, cols->seq));
    row->source_entry = atoi(field(f, cols->source_entry));
    row->source_target = parse_u64(field(f, cols->source_target));
    row->start_vm_ip = parse_u64(field(f, cols->start_vm_ip));
    row->target_entry = atoi(field(f, cols->target_entry));
    row->target = parse_u64(field(f, cols->target));
    row->post_state = (uint32_t)parse_u64(field(f, cols->post_state));
    row->delta = parse_delta(field(f, cols->delta));
    row->byte_count = parse_hex_bytes(field(f, cols->bytes), row->bytes, sizeof(row->bytes));
    row->pre_flags = (uint32_t)parse_u64(field(f, cols->pre_flags));
    row->pre_state = (uint32_t)parse_u64(field(f, cols->pre_state));
    row->pre_byte = (uint8_t)parse_u64(field(f, cols->pre_byte));
    return row->source_entry >= 0 && row->source_entry < TABLE_ENTRIES;
}

static void usage(const char *argv0) {
    fprintf(stderr, "usage: %s [trace.tsv] [--by-path|--branch-sites|--branch-predicates|--state-validate|--dispatch-validate|--emit-dir dir] [--gpr-run run.stderr] [--skeletons path] [--eac eac.elf]\n", argv0);
}

static Args parse_args(int argc, char **argv) {
    Args args = {
        .trace_path = "dumps/vmtail-state-wide-w16/vm_instruction_trace.tsv",
        .skeletons_path = "dumps/vmtail-wide-1m-w16/vm_handler_skeletons.tsv",
        .eac_path = "eac.elf",
        .max_steps = 2000,
        .max_rows_per_source = 0,
        .max_expr_len = 320,
        .max_cell_len = 260,
        .top = 5,
        .top_targets = 8,
        .max_path_len = 260,
    };
    for (int i = 1; i < argc; ++i) {
        if (!strcmp(argv[i], "--by-path")) args.by_path = true;
        else if (!strcmp(argv[i], "--branch-sites")) args.branch_sites = true;
        else if (!strcmp(argv[i], "--branch-predicates")) args.branch_predicates = true;
        else if (!strcmp(argv[i], "--state-validate")) args.state_validate = true;
        else if (!strcmp(argv[i], "--dispatch-validate")) args.dispatch_validate = true;
        else if (!strcmp(argv[i], "--emit-dir") && i + 1 < argc) args.emit_dir = argv[++i];
        else if (!strcmp(argv[i], "--gpr-run") && i + 1 < argc) args.gpr_run_path = argv[++i];
        else if (!strcmp(argv[i], "--skeletons") && i + 1 < argc) args.skeletons_path = argv[++i];
        else if (!strcmp(argv[i], "--eac") && i + 1 < argc) args.eac_path = argv[++i];
        else if (!strcmp(argv[i], "--max-steps") && i + 1 < argc) args.max_steps = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--max-rows-per-source") && i + 1 < argc) args.max_rows_per_source = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--max-expr-len") && i + 1 < argc) args.max_expr_len = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--max-cell-len") && i + 1 < argc) args.max_cell_len = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--top") && i + 1 < argc) args.top = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--top-targets") && i + 1 < argc) args.top_targets = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--max-path-len") && i + 1 < argc) args.max_path_len = atoi(argv[++i]);
        else if (argv[i][0] == '-') {
            usage(argv[0]);
            exit(2);
        } else {
            args.trace_path = argv[i];
        }
    }
    return args;
}

int main(int argc, char **argv) {
    Args args = parse_args(argc, argv);
    uint8_t *eac = NULL;
    size_t eac_size = 0;
    if (!read_file(args.eac_path, &eac, &eac_size)) return 1;
    uint64_t table[TABLE_ENTRIES];
    for (int i = 0; i < TABLE_ENTRIES; ++i) {
        table[i] = read_le64(eac, TABLE_OFF + (size_t)i * 8);
    }
    Handler handlers[TABLE_ENTRIES] = {0};
    if (!load_skeletons(args.skeletons_path, handlers)) return 1;
    size_t seed_count = 0;
    Seed *seeds = load_gpr_seeds(args.gpr_run_path, &seed_count);
    csh cs;
    if (cs_open(CS_ARCH_X86, CS_MODE_64, &cs) != CS_ERR_OK) {
        fprintf(stderr, "cs_open failed\n");
        return 1;
    }
    cs_option(cs, CS_OPT_DETAIL, CS_OPT_ON);
    cs_option(cs, CS_OPT_SKIPDATA, CS_OPT_ON);

    FILE *fp = fopen(args.trace_path, "r");
    if (!fp) {
        perror(args.trace_path);
        return 1;
    }
    char *line = NULL;
    size_t line_cap = 0;
    if (getline(&line, &line_cap, fp) < 0) return 1;
    Fields header = split_line(line);
    TraceCols cols;
    if (!parse_trace_header(&header, &cols)) {
        fprintf(stderr, "trace header missing required columns\n");
        return 1;
    }
    SourceStat stats[TABLE_ENTRIES] = {0};
    uint64_t source_counts[TABLE_ENTRIES] = {0};
    PathStat *paths = NULL;
    size_t path_count = 0, path_cap = 0;
    BranchStat *branches = NULL;
    size_t branch_count = 0, branch_cap = 0;
    BranchPredStat *branch_preds = NULL;
    size_t branch_pred_count = 0, branch_pred_cap = 0;
    while (getline(&line, &line_cap, fp) >= 0) {
        Fields f = split_line(line);
        TraceRow row;
        bool ok = parse_trace_row(&f, &cols, &row);
        free(f.items);
        if (!ok) continue;
        int source = row.source_entry;
        if (args.max_rows_per_source && source_counts[source] >= (uint64_t)args.max_rows_per_source) continue;
        Handler *h = &handlers[source];
        if (!h->present) continue;
        if (!decode_handler(cs, h, eac, eac_size, 0x1200)) continue;
        Seed *seed = (seeds && row.seq >= 0 && (size_t)row.seq < seed_count) ? &seeds[row.seq] : NULL;
        char target_text[32];
        snprintf(target_text, sizeof(target_text), "0x%" PRIx64, h->target);
        ExecResult r = args.branch_predicates
            ? execute_handler_branch_pred(h, &row, table, seed, args.max_steps, args.max_expr_len, args.max_cell_len,
                                          &branch_preds, &branch_pred_count, &branch_pred_cap, source, target_text)
            : execute_handler(h, &row, table, seed, args.max_steps);
        bool target_ok = !strcmp(r.status, "ok") && r.pred_entry == row.target_entry && r.pred_target == row.target;
        bool ip_ok = r.pred_delta == row.delta;
        bool state_ok = r.pred_state == row.post_state;
        char hash[17];
        sha_path(r.path, hash);
        PathStat *p = find_path(&paths, &path_count, &path_cap, source, hash, r.path, target_text);
        p->events++;
        if (target_ok) p->target_matched++;
        if (ip_ok) p->ip_matched++;
        switch (status_index(r.status)) {
        case 0: p->status_ok++; break;
        case 1: p->status_unknown_target++; break;
        case 2: p->status_falloff++; break;
        default: p->status_step_limit++; break;
        }
        add_target_counter(p, row.target_entry, row.target);
        SourceStat *s = &stats[source];
        snprintf(s->target_text, sizeof(s->target_text), "0x%" PRIx64, h->target);
        s->events++;
        s->steps += r.steps;
        s->unknown_ops += r.unknown;
        s->branch_unknown += r.branch_unknown;
        if (target_ok) s->target_matched++; else s->target_mismatched++;
        if (ip_ok) s->ip_matched++; else s->ip_mismatched++;
        if (state_ok) {
            s->state_matched++;
        } else {
            s->state_mismatched++;
            if (!s->has_state_example) {
                s->has_state_example = true;
                s->example_pred_state = r.pred_state;
                s->example_actual_state = row.post_state;
                snprintf(s->state_example_status, sizeof(s->state_example_status), "%s", r.status);
                format_bytes(row.bytes, row.byte_count, s->state_example_bytes, sizeof(s->state_example_bytes));
            }
        }
        if ((!target_ok || !ip_ok) && !s->has_dispatch_example) {
            s->has_dispatch_example = true;
            s->example_pred_entry = r.pred_entry;
            s->example_pred_target = r.pred_target;
            s->example_actual_entry = row.target_entry;
            s->example_actual_target = row.target;
            snprintf(s->dispatch_example_status, sizeof(s->dispatch_example_status), "%s", r.status);
            format_bytes(row.bytes, row.byte_count, s->dispatch_example_bytes, sizeof(s->dispatch_example_bytes));
        }
        switch (status_index(r.status)) {
        case 0: s->status_ok++; break;
        case 1: s->status_unknown_target++; break;
        case 2: s->status_falloff++; break;
        default: s->status_step_limit++; break;
        }
        if (r.path && *r.path) {
            update_branch_stats_from_path(&branches, &branch_count, &branch_cap, source, target_text, r.path);
            char *copy = xstrdup(r.path);
            for (char *tok = strtok(copy, ";"); tok; tok = strtok(NULL, ";")) {
                char *colon = strchr(tok, ':');
                if (colon) *colon = 0;
                add_branch_site(s, parse_u64(tok));
            }
            free(copy);
        }
        free(r.path);
        source_counts[source]++;
    }
    free(header.items);
    free(line);
    fclose(fp);
    int rc = 0;
    if (args.emit_dir) {
        if (!emit_outputs_to_dir(&args, stats, paths, path_count, branches, branch_count)) rc = 1;
    } else if (args.state_validate) {
        emit_state_validate(stats);
    } else if (args.dispatch_validate) {
        emit_dispatch_validate(stats);
    } else if (args.branch_predicates) {
        emit_branch_predicates(branch_preds, branch_pred_count, args.top, args.max_cell_len);
    } else if (args.branch_sites) {
        emit_branch_sites(branches, branch_count);
    } else if (args.by_path) {
        emit_by_path(paths, path_count, args.top_targets);
    } else {
        emit_summary(stats, paths, path_count, args.top);
    }
    for (size_t i = 0; i < path_count; ++i) free(paths[i].text);
    free(paths);
    free(branches);
    free_branch_predicates(branch_preds, branch_pred_count);
    for (int i = 0; i < TABLE_ENTRIES; ++i) {
        if (handlers[i].insns) cs_free(handlers[i].insns, handlers[i].insn_count);
    }
    cs_close(&cs);
    free(seeds);
    free(eac);
    return rc;
}
