#define _GNU_SOURCE
#include <dlfcn.h>
#include <errno.h>
#include <inttypes.h>
#include <stdint.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <time.h>
#include <ucontext.h>
#include <unistd.h>

enum {
    EAC_CONTEXT_SLOT_OFFSET = 0x84cd20,
    EAC_CONTEXT_SIZE = 0x23f0,
    EAC_X_OFFSET = 0x380dc,
    EAC_DISPATCH_C80B9 = 0xc80b9,
    EAC_DISPATCH_CDAC7 = 0xcdac7,
    EAC_MAX_DISPATCH_SITES = 64,
    EAC_MAX_TAIL_SITES = 512,
    EAC_IP_WORD_COUNT = 16,
    EAC_MAX_SCRATCH_OFFSETS = 64,
    EAC_MAX_READ_RANGES = 512,
    EAC_MAX_FOCUS_IPS = 128,
    EAC_MAX_FOCUS_SITES = 128
};

enum tail_reg {
    TAIL_REG_RAX,
    TAIL_REG_RBX,
    TAIL_REG_RCX,
    TAIL_REG_RDX,
    TAIL_REG_RSI,
    TAIL_REG_RDI,
    TAIL_REG_RBP,
    TAIL_REG_RSP,
    TAIL_REG_R8,
    TAIL_REG_R9,
    TAIL_REG_R10,
    TAIL_REG_R11,
    TAIL_REG_R12,
    TAIL_REG_R13,
    TAIL_REG_R14,
    TAIL_REG_R15,
    TAIL_REG_INVALID = -1
};

struct tail_site {
    uintptr_t off;
    enum tail_reg reg;
};

struct read_range {
    uintptr_t start;
    uintptr_t end;
};

static uint8_t *g_eac_base;
static uint64_t g_dispatch_counts[EAC_MAX_DISPATCH_SITES];
static uint64_t g_dispatch_limit = 4096;
static uintptr_t g_dispatch_sites[EAC_MAX_DISPATCH_SITES];
static size_t g_dispatch_site_count;
static uintptr_t g_dispatch_focus_sites[EAC_MAX_FOCUS_SITES];
static size_t g_dispatch_focus_site_count;
static uint64_t g_dispatch_focus_hits;
static uint64_t g_dispatch_stop_after_matches;
static uint64_t g_tail_count;
static uint64_t g_tail_limit = 4096;
static int g_dispatch_detail;
static int g_tail_trace;
static int g_tail_regs;
static int g_tail_scratch;
static int g_tail_mem;
static uint32_t g_tail_mem_reg_mask;
static uintptr_t g_tail_focus_ips[EAC_MAX_FOCUS_IPS];
static size_t g_tail_focus_ip_count;
static uintptr_t g_tail_focus_sites[EAC_MAX_FOCUS_SITES];
static size_t g_tail_focus_site_count;
static uint64_t g_tail_focus_hits;
static uint64_t g_tail_stop_after_matches;
static struct tail_site g_tail_sites[EAC_MAX_TAIL_SITES];
static size_t g_tail_site_count;
static uint16_t g_scratch_offsets[EAC_MAX_SCRATCH_OFFSETS];
static size_t g_scratch_offset_count;
static struct read_range g_read_ranges[EAC_MAX_READ_RANGES];
static size_t g_read_range_count;

static const struct tail_site g_default_tail_sites[] = {
    {0x8173b, TAIL_REG_RAX},
    {0x8a49b, TAIL_REG_R8},
    {0x9a46b, TAIL_REG_R9},
    {0x9b0c5, TAIL_REG_R10},
    {0x9b687, TAIL_REG_R14},
    {0xb86f5, TAIL_REG_R13},
    {0xbb8a8, TAIL_REG_RAX},
    {0xbba0c, TAIL_REG_R12},
    {0xc240d, TAIL_REG_RDX},
    {0x9c3f4, TAIL_REG_R13},
    {0xa0068, TAIL_REG_R10},
    {0xb265e, TAIL_REG_R10},
    {0xb708a, TAIL_REG_R12},
    {0xc2d35, TAIL_REG_RBX},
};

static const uint16_t g_default_scratch_offsets[] = {
    0x000, 0x012, 0x060, 0x068, 0x071,
    0x081, 0x0e1, 0x13d, 0x16f, 0x1e8,
    0x013, 0x091, 0x0ab, 0x0b3, 0x0cb, 0x19d,
    0x028, 0x038, 0x079, 0x089, 0x099,
    0x0d3, 0x107, 0x123, 0x128, 0x147,
};

static void put_u32(uint8_t *p, size_t off, uint32_t v) {
    memcpy(p + off, &v, sizeof(v));
}

static void put_u64(uint8_t *p, size_t off, uint64_t v) {
    memcpy(p + off, &v, sizeof(v));
}

static unsigned long parse_ul(const char *s, unsigned long fallback) {
    if (s == NULL || *s == '\0') return fallback;
    errno = 0;
    char *end = NULL;
    unsigned long v = strtoul(s, &end, 0);
    if (errno != 0 || end == s || (end != NULL && *end != '\0')) return fallback;
    return v;
}

static int env_is_one_driver(const char *name) {
    const char *v = getenv(name);
    return v != NULL && strcmp(v, "1") == 0;
}

static int ascii_lower(int c) {
    return c >= 'A' && c <= 'Z' ? c + ('a' - 'A') : c;
}

static int tail_reg_name_eq(const char *s, size_t len, const char *name) {
    size_t i = 0;
    for (; i < len && name[i] != '\0'; ++i) {
        if (ascii_lower((unsigned char)s[i]) != name[i]) return 0;
    }
    return i == len && name[i] == '\0';
}

static enum tail_reg parse_tail_reg(const char *s, size_t len) {
    if (tail_reg_name_eq(s, len, "rax")) return TAIL_REG_RAX;
    if (tail_reg_name_eq(s, len, "rbx")) return TAIL_REG_RBX;
    if (tail_reg_name_eq(s, len, "rcx")) return TAIL_REG_RCX;
    if (tail_reg_name_eq(s, len, "rdx")) return TAIL_REG_RDX;
    if (tail_reg_name_eq(s, len, "rsi")) return TAIL_REG_RSI;
    if (tail_reg_name_eq(s, len, "rdi")) return TAIL_REG_RDI;
    if (tail_reg_name_eq(s, len, "rbp")) return TAIL_REG_RBP;
    if (tail_reg_name_eq(s, len, "rsp")) return TAIL_REG_RSP;
    if (tail_reg_name_eq(s, len, "r8")) return TAIL_REG_R8;
    if (tail_reg_name_eq(s, len, "r9")) return TAIL_REG_R9;
    if (tail_reg_name_eq(s, len, "r10")) return TAIL_REG_R10;
    if (tail_reg_name_eq(s, len, "r11")) return TAIL_REG_R11;
    if (tail_reg_name_eq(s, len, "r12")) return TAIL_REG_R12;
    if (tail_reg_name_eq(s, len, "r13")) return TAIL_REG_R13;
    if (tail_reg_name_eq(s, len, "r14")) return TAIL_REG_R14;
    if (tail_reg_name_eq(s, len, "r15")) return TAIL_REG_R15;
    return TAIL_REG_INVALID;
}

static const char *tail_reg_name(enum tail_reg reg) {
    switch (reg) {
        case TAIL_REG_RAX: return "rax";
        case TAIL_REG_RBX: return "rbx";
        case TAIL_REG_RCX: return "rcx";
        case TAIL_REG_RDX: return "rdx";
        case TAIL_REG_RSI: return "rsi";
        case TAIL_REG_RDI: return "rdi";
        case TAIL_REG_RBP: return "rbp";
        case TAIL_REG_RSP: return "rsp";
        case TAIL_REG_R8: return "r8";
        case TAIL_REG_R9: return "r9";
        case TAIL_REG_R10: return "r10";
        case TAIL_REG_R11: return "r11";
        case TAIL_REG_R12: return "r12";
        case TAIL_REG_R13: return "r13";
        case TAIL_REG_R14: return "r14";
        case TAIL_REG_R15: return "r15";
        default: return "?";
    }
}

static uint32_t tail_reg_bit(enum tail_reg reg) {
    if (reg == TAIL_REG_INVALID) return 0;
    return 1u << (unsigned)reg;
}

static uint32_t all_tail_reg_bits(void) {
    return tail_reg_bit(TAIL_REG_RAX) | tail_reg_bit(TAIL_REG_RBX) |
           tail_reg_bit(TAIL_REG_RCX) | tail_reg_bit(TAIL_REG_RDX) |
           tail_reg_bit(TAIL_REG_RSI) | tail_reg_bit(TAIL_REG_RDI) |
           tail_reg_bit(TAIL_REG_RBP) | tail_reg_bit(TAIL_REG_RSP) |
           tail_reg_bit(TAIL_REG_R8) | tail_reg_bit(TAIL_REG_R9) |
           tail_reg_bit(TAIL_REG_R10) | tail_reg_bit(TAIL_REG_R11) |
           tail_reg_bit(TAIL_REG_R12) | tail_reg_bit(TAIL_REG_R13) |
           tail_reg_bit(TAIL_REG_R14) | tail_reg_bit(TAIL_REG_R15);
}

static int add_dispatch_site(uintptr_t off) {
    if (off == 0) return -1;
    for (size_t i = 0; i < g_dispatch_site_count; ++i) {
        if (g_dispatch_sites[i] == off) return 0;
    }
    if (g_dispatch_site_count >= EAC_MAX_DISPATCH_SITES) return -1;
    g_dispatch_sites[g_dispatch_site_count++] = off;
    return 0;
}

static int add_dispatch_focus_site(uintptr_t off) {
    if (off == 0) return -1;
    for (size_t i = 0; i < g_dispatch_focus_site_count; ++i) {
        if (g_dispatch_focus_sites[i] == off) return 0;
    }
    if (g_dispatch_focus_site_count >= EAC_MAX_FOCUS_SITES) return -1;
    g_dispatch_focus_sites[g_dispatch_focus_site_count++] = off;
    return 0;
}

static void add_default_dispatch_sites(void) {
    (void)add_dispatch_site(EAC_DISPATCH_C80B9);
    (void)add_dispatch_site(EAC_DISPATCH_CDAC7);
}

static void parse_dispatch_sites(const char *spec, int focus_only) {
    if (spec == NULL || *spec == '\0') return;
    const char *p = spec;
    while (*p != '\0') {
        while (*p == ' ' || *p == '\t' || *p == ',') ++p;
        if (*p == '\0') break;

        errno = 0;
        char *end = NULL;
        unsigned long off = strtoul(p, &end, 0);
        if (errno != 0 || end == p) {
            fprintf(stderr, "[DRIVER] ignoring malformed dispatch site near '%s'\n", p);
            while (*p != '\0' && *p != ',') ++p;
            continue;
        }
        if (focus_only) {
            if (add_dispatch_focus_site((uintptr_t)off) != 0) {
                fprintf(stderr, "[DRIVER] ignoring dispatch focus site 0x%lx\n", off);
            }
        } else if (add_dispatch_site((uintptr_t)off) != 0) {
            fprintf(stderr, "[DRIVER] ignoring dispatch site 0x%lx\n", off);
        }
        p = end;
        while (*p != '\0' && *p != ',') ++p;
    }
}

static int add_tail_site(uintptr_t off, enum tail_reg reg) {
    if (reg == TAIL_REG_INVALID || off == 0) return -1;
    for (size_t i = 0; i < g_tail_site_count; ++i) {
        if (g_tail_sites[i].off == off) {
            g_tail_sites[i].reg = reg;
            return 0;
        }
    }
    if (g_tail_site_count >= EAC_MAX_TAIL_SITES) return -1;
    g_tail_sites[g_tail_site_count].off = off;
    g_tail_sites[g_tail_site_count].reg = reg;
    ++g_tail_site_count;
    return 0;
}

static void add_default_tail_sites(void) {
    for (size_t i = 0; i < sizeof(g_default_tail_sites) / sizeof(g_default_tail_sites[0]); ++i) {
        (void)add_tail_site(g_default_tail_sites[i].off, g_default_tail_sites[i].reg);
    }
}

static void parse_extra_tail_sites(const char *spec) {
    if (spec == NULL || *spec == '\0') return;
    const char *p = spec;
    while (*p != '\0') {
        while (*p == ' ' || *p == '\t' || *p == ',') ++p;
        if (*p == '\0') break;

        errno = 0;
        char *end = NULL;
        unsigned long off = strtoul(p, &end, 0);
        if (errno != 0 || end == p || (*end != ':' && *end != '=')) {
            fprintf(stderr, "[DRIVER] ignoring malformed tail site near '%s'\n", p);
            while (*p != '\0' && *p != ',') ++p;
            continue;
        }
        p = end + 1;
        const char *reg_start = p;
        while ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') ||
               (*p >= '0' && *p <= '9')) {
            ++p;
        }
        enum tail_reg reg = parse_tail_reg(reg_start, (size_t)(p - reg_start));
        if (add_tail_site((uintptr_t)off, reg) != 0) {
            fprintf(stderr, "[DRIVER] ignoring tail site 0x%lx:%.*s\n",
                    off, (int)(p - reg_start), reg_start);
        }
        while (*p != '\0' && *p != ',') ++p;
    }
}

static uint32_t parse_tail_reg_mask(const char *spec) {
    if (spec == NULL || *spec == '\0') return all_tail_reg_bits();

    uint32_t mask = 0;
    const char *p = spec;
    while (*p != '\0') {
        while (*p == ' ' || *p == '\t' || *p == ',') ++p;
        if (*p == '\0') break;

        const char *reg_start = p;
        while ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') ||
               (*p >= '0' && *p <= '9')) {
            ++p;
        }
        enum tail_reg reg = parse_tail_reg(reg_start, (size_t)(p - reg_start));
        if (reg == TAIL_REG_INVALID) {
            fprintf(stderr, "[DRIVER] ignoring malformed VMTAIL mem reg near '%s'\n", reg_start);
        } else {
            mask |= tail_reg_bit(reg);
        }
        while (*p != '\0' && *p != ',') ++p;
    }
    return mask != 0 ? mask : all_tail_reg_bits();
}

static int add_focus_ip(uintptr_t off) {
    for (size_t i = 0; i < g_tail_focus_ip_count; ++i) {
        if (g_tail_focus_ips[i] == off) return 0;
    }
    if (g_tail_focus_ip_count >= EAC_MAX_FOCUS_IPS) return -1;
    g_tail_focus_ips[g_tail_focus_ip_count++] = off;
    return 0;
}

static int add_focus_site(uintptr_t off) {
    for (size_t i = 0; i < g_tail_focus_site_count; ++i) {
        if (g_tail_focus_sites[i] == off) return 0;
    }
    if (g_tail_focus_site_count >= EAC_MAX_FOCUS_SITES) return -1;
    g_tail_focus_sites[g_tail_focus_site_count++] = off;
    return 0;
}

static void parse_focus_ips(const char *spec) {
    if (spec == NULL || *spec == '\0') return;
    const char *p = spec;
    while (*p != '\0') {
        while (*p == ' ' || *p == '\t' || *p == ',') ++p;
        if (*p == '\0') break;

        errno = 0;
        char *end = NULL;
        unsigned long off = strtoul(p, &end, 0);
        if (errno != 0 || end == p) {
            fprintf(stderr, "[DRIVER] ignoring malformed focus VM IP near '%s'\n", p);
            while (*p != '\0' && *p != ',') ++p;
            continue;
        }
        if (add_focus_ip((uintptr_t)off) != 0) {
            fprintf(stderr, "[DRIVER] ignoring focus VM IP 0x%lx\n", off);
        }
        p = end;
        while (*p != '\0' && *p != ',') ++p;
    }
}

static void parse_focus_sites(const char *spec) {
    if (spec == NULL || *spec == '\0') return;
    const char *p = spec;
    while (*p != '\0') {
        while (*p == ' ' || *p == '\t' || *p == ',') ++p;
        if (*p == '\0') break;

        errno = 0;
        char *end = NULL;
        unsigned long off = strtoul(p, &end, 0);
        if (errno != 0 || end == p) {
            fprintf(stderr, "[DRIVER] ignoring malformed focus tail site near '%s'\n", p);
            while (*p != '\0' && *p != ',') ++p;
            continue;
        }
        if (add_focus_site((uintptr_t)off) != 0) {
            fprintf(stderr, "[DRIVER] ignoring focus tail site 0x%lx\n", off);
        }
        p = end;
        while (*p != '\0' && *p != ',') ++p;
    }
}

static int add_scratch_offset(uint16_t off) {
    for (size_t i = 0; i < g_scratch_offset_count; ++i) {
        if (g_scratch_offsets[i] == off) return 0;
    }
    if (g_scratch_offset_count >= EAC_MAX_SCRATCH_OFFSETS) return -1;
    g_scratch_offsets[g_scratch_offset_count++] = off;
    return 0;
}

static void add_default_scratch_offsets(void) {
    for (size_t i = 0; i < sizeof(g_default_scratch_offsets) / sizeof(g_default_scratch_offsets[0]); ++i) {
        (void)add_scratch_offset(g_default_scratch_offsets[i]);
    }
}

static void parse_scratch_offsets(const char *spec) {
    if (spec == NULL || *spec == '\0') return;
    const char *p = spec;
    while (*p != '\0') {
        while (*p == ' ' || *p == '\t' || *p == ',') ++p;
        if (*p == '\0') break;

        errno = 0;
        char *end = NULL;
        unsigned long off = strtoul(p, &end, 0);
        if (errno != 0 || end == p || off > UINT16_MAX) {
            fprintf(stderr, "[DRIVER] ignoring malformed scratch offset near '%s'\n", p);
            while (*p != '\0' && *p != ',') ++p;
            continue;
        }
        if (add_scratch_offset((uint16_t)off) != 0) {
            fprintf(stderr, "[DRIVER] ignoring scratch offset 0x%lx\n", off);
        }
        p = end;
        while (*p != '\0' && *p != ',') ++p;
    }
}

static char *append_lit(char *p, char *end, const char *s) {
    while (p < end && *s != '\0') *p++ = *s++;
    return p;
}

static char *append_dec(char *p, char *end, uint64_t v) {
    char tmp[32];
    size_t n = 0;
    do {
        tmp[n++] = (char)('0' + (v % 10));
        v /= 10;
    } while (v != 0 && n < sizeof(tmp));
    while (n > 0 && p < end) *p++ = tmp[--n];
    return p;
}

static char *append_hex(char *p, char *end, uint64_t v) {
    static const char hex[] = "0123456789abcdef";
    char tmp[16];
    size_t n = 0;
    p = append_lit(p, end, "0x");
    do {
        tmp[n++] = hex[v & 0xfu];
        v >>= 4;
    } while (v != 0 && n < sizeof(tmp));
    while (n > 0 && p < end) *p++ = tmp[--n];
    return p;
}

static void read_ip_words(uint64_t vm_ip, uint16_t words[EAC_IP_WORD_COUNT]) {
    for (size_t i = 0; i < EAC_IP_WORD_COUNT; ++i) {
        words[i] = *(const uint16_t *)(uintptr_t)(vm_ip + i * 2u);
    }
}

static char *append_ip_words(char *p, char *end, const uint16_t words[EAC_IP_WORD_COUNT]) {
    for (size_t i = 0; i < EAC_IP_WORD_COUNT; ++i) {
        p = append_lit(p, end, " ip_w");
        p = append_dec(p, end, i);
        p = append_lit(p, end, "=");
        p = append_hex(p, end, words[i]);
    }
    return p;
}

static uint64_t read_frame_u64(uintptr_t frame, uint16_t off) {
    uint64_t value = 0;
    memcpy(&value, (const void *)(frame + off), sizeof(value));
    return value;
}

static int add_read_range(uintptr_t start, uintptr_t end) {
    if (end <= start || g_read_range_count >= EAC_MAX_READ_RANGES) return -1;
    g_read_ranges[g_read_range_count].start = start;
    g_read_ranges[g_read_range_count].end = end;
    ++g_read_range_count;
    return 0;
}

static void load_read_ranges(void) {
    g_read_range_count = 0;
    FILE *maps = fopen("/proc/self/maps", "r");
    if (maps == NULL) {
        fprintf(stderr, "[DRIVER] VMTAIL mem maps open failed: %s\n", strerror(errno));
        return;
    }

    char line[1024];
    while (fgets(line, sizeof(line), maps) != NULL) {
        unsigned long start = 0;
        unsigned long end = 0;
        char perms[8] = {0};
        if (sscanf(line, "%lx-%lx %7s", &start, &end, perms) != 3) continue;
        if (perms[0] != 'r') continue;
        if (add_read_range((uintptr_t)start, (uintptr_t)end) != 0) break;
    }
    fclose(maps);
}

static int range_contains_bytes(uintptr_t addr, size_t size) {
    if (addr > UINTPTR_MAX - size) return 0;
    uintptr_t end = addr + size;
    for (size_t i = 0; i < g_read_range_count; ++i) {
        if (addr >= g_read_ranges[i].start && end <= g_read_ranges[i].end) return 1;
    }
    return 0;
}

static int read_mapped_u64(uintptr_t addr, uint64_t *value) {
    if (!range_contains_bytes(addr, sizeof(uint64_t))) return 0;
    memcpy(value, (const void *)addr, sizeof(*value));
    return 1;
}

static int read_mapped_u32(uintptr_t addr, uint32_t *value) {
    if (!range_contains_bytes(addr, sizeof(uint32_t))) return 0;
    memcpy(value, (const void *)addr, sizeof(*value));
    return 1;
}

static int read_mapped_u8(uintptr_t addr, uint8_t *value) {
    if (!range_contains_bytes(addr, sizeof(uint8_t))) return 0;
    memcpy(value, (const void *)addr, sizeof(*value));
    return 1;
}

static void read_ip_words_mapped(uint64_t vm_ip, uint16_t words[EAC_IP_WORD_COUNT]) {
    for (size_t i = 0; i < EAC_IP_WORD_COUNT; ++i) {
        uint32_t value = 0;
        if (read_mapped_u32((uintptr_t)(vm_ip + i * 2u), &value)) {
            words[i] = (uint16_t)value;
        } else {
            words[i] = 0;
        }
    }
}

static char *append_frame_scratch(char *p, char *end, uintptr_t frame) {
    for (size_t i = 0; i < g_scratch_offset_count; ++i) {
        uint16_t off = g_scratch_offsets[i];
        p = append_lit(p, end, " fs");
        p = append_hex(p, end, off);
        p = append_lit(p, end, "=");
        p = append_hex(p, end, read_frame_u64(frame, off));
    }
    return p;
}

#if defined(__x86_64__)
static uintptr_t tail_reg_value(const ucontext_t *uc, enum tail_reg reg);

static char *append_gpr(char *p, char *end, const char *name, const ucontext_t *uc, int reg) {
    p = append_lit(p, end, " ");
    p = append_lit(p, end, name);
    p = append_lit(p, end, "=");
    p = append_hex(p, end, (uintptr_t)uc->uc_mcontext.gregs[reg]);
    return p;
}

static char *append_gprs(char *p, char *end, const ucontext_t *uc) {
    p = append_gpr(p, end, "rax", uc, REG_RAX);
    p = append_gpr(p, end, "rbx", uc, REG_RBX);
    p = append_gpr(p, end, "rcx", uc, REG_RCX);
    p = append_gpr(p, end, "rdx", uc, REG_RDX);
    p = append_gpr(p, end, "rsi", uc, REG_RSI);
    p = append_gpr(p, end, "rdi", uc, REG_RDI);
    p = append_gpr(p, end, "r8", uc, REG_R8);
    p = append_gpr(p, end, "r9", uc, REG_R9);
    p = append_gpr(p, end, "r10", uc, REG_R10);
    p = append_gpr(p, end, "r11", uc, REG_R11);
    p = append_gpr(p, end, "r12", uc, REG_R12);
    p = append_gpr(p, end, "r13", uc, REG_R13);
    p = append_gpr(p, end, "r14", uc, REG_R14);
    p = append_gpr(p, end, "r15", uc, REG_R15);
    p = append_gpr(p, end, "rbp", uc, REG_RBP);
    p = append_gpr(p, end, "rsp", uc, REG_RSP);
    return p;
}

static char *append_gpr_mem(char *p, char *end, const ucontext_t *uc, enum tail_reg reg) {
    uint64_t value = 0;
    uintptr_t addr = tail_reg_value(uc, reg);
    p = append_lit(p, end, " mem_");
    p = append_lit(p, end, tail_reg_name(reg));
    p = append_lit(p, end, "=");
    if (read_mapped_u64(addr, &value)) {
        p = append_hex(p, end, value);
    } else {
        p = append_lit(p, end, "?");
    }
    return p;
}

static char *append_gpr_mems(char *p, char *end, const ucontext_t *uc) {
    static const enum tail_reg regs[] = {
        TAIL_REG_RAX, TAIL_REG_RBX, TAIL_REG_RCX, TAIL_REG_RDX,
        TAIL_REG_RSI, TAIL_REG_RDI, TAIL_REG_RBP, TAIL_REG_RSP,
        TAIL_REG_R8, TAIL_REG_R9, TAIL_REG_R10, TAIL_REG_R11,
        TAIL_REG_R12, TAIL_REG_R13, TAIL_REG_R14, TAIL_REG_R15,
    };
    for (size_t i = 0; i < sizeof(regs) / sizeof(regs[0]); ++i) {
        if ((g_tail_mem_reg_mask & tail_reg_bit(regs[i])) != 0) {
            p = append_gpr_mem(p, end, uc, regs[i]);
        }
    }
    return p;
}
#endif

static void dispatch_trace_write(size_t idx, uintptr_t site, uintptr_t slot,
                                 uintptr_t index, uintptr_t target,
                                 uintptr_t frame, uint64_t vm_ip,
                                 uint32_t vm_flags, uint32_t vm_state,
                                 uint8_t vm_byte, uintptr_t table,
                                 const uint16_t ip_words[EAC_IP_WORD_COUNT]) {
    uint64_t count = __atomic_fetch_add(&g_dispatch_counts[idx], 1, __ATOMIC_RELAXED);
    if (count >= g_dispatch_limit) return;

    char buf[1024];
    char *p = buf;
    char *end = buf + sizeof(buf) - 1;
    p = append_lit(p, end, "[DISPATCH] site=");
    p = append_hex(p, end, site);
    p = append_lit(p, end, " count=");
    p = append_dec(p, end, count + 1);
    p = append_lit(p, end, " slot=");
    p = append_hex(p, end, slot);
    p = append_lit(p, end, " slot_off=");
    p = append_hex(p, end, slot - (uintptr_t)g_eac_base);
    p = append_lit(p, end, " idx=");
    p = append_hex(p, end, index);
    p = append_lit(p, end, " frame=");
    p = append_hex(p, end, frame);
    p = append_lit(p, end, " frame_off=");
    p = append_hex(p, end, frame - (uintptr_t)g_eac_base);
    p = append_lit(p, end, " vm_ip=");
    p = append_hex(p, end, vm_ip);
    p = append_lit(p, end, " vm_ip_off=");
    p = append_hex(p, end, vm_ip - (uintptr_t)g_eac_base);
    p = append_lit(p, end, " vm_flags=");
    p = append_hex(p, end, vm_flags);
    p = append_lit(p, end, " vm_state=");
    p = append_hex(p, end, vm_state);
    p = append_lit(p, end, " vm_byte=");
    p = append_hex(p, end, vm_byte);
    if (g_dispatch_detail) {
        p = append_lit(p, end, " table=");
        p = append_hex(p, end, table);
        p = append_lit(p, end, " table_off=");
        p = append_hex(p, end, table - (uintptr_t)g_eac_base);
        p = append_ip_words(p, end, ip_words);
    }
    p = append_lit(p, end, " target=");
    p = append_hex(p, end, target);
    p = append_lit(p, end, " target_off=");
    p = append_hex(p, end, target - (uintptr_t)g_eac_base);
    p = append_lit(p, end, "\n");
    write(STDERR_FILENO, buf, (size_t)(p - buf));
}

static int tail_focus_enabled(void) {
    return g_tail_focus_ip_count != 0 || g_tail_focus_site_count != 0;
}

static int dispatch_focus_match(uintptr_t site) {
    if (g_dispatch_focus_site_count == 0) return 1;
    for (size_t i = 0; i < g_dispatch_focus_site_count; ++i) {
        if (g_dispatch_focus_sites[i] == site) return 1;
    }
    return 0;
}

static void dispatch_focus_maybe_stop(uintptr_t site) {
    if (g_dispatch_focus_site_count == 0 || g_dispatch_stop_after_matches == 0) return;
    uint64_t hits = __atomic_add_fetch(&g_dispatch_focus_hits, 1, __ATOMIC_RELAXED);
    if (hits < g_dispatch_stop_after_matches) return;

    char buf[160];
    char *p = buf;
    char *end = buf + sizeof(buf) - 1;
    p = append_lit(p, end, "[DRIVER] DISPATCH focus stop hits=");
    p = append_dec(p, end, hits);
    p = append_lit(p, end, " site=");
    p = append_hex(p, end, site);
    p = append_lit(p, end, "\n");
    write(STDERR_FILENO, buf, (size_t)(p - buf));
    _exit(0);
}

static int tail_focus_match(uintptr_t site, uintptr_t vm_ip_off) {
    if (g_tail_focus_ip_count != 0) {
        int match = 0;
        for (size_t i = 0; i < g_tail_focus_ip_count; ++i) {
            if (g_tail_focus_ips[i] == vm_ip_off) {
                match = 1;
                break;
            }
        }
        if (!match) return 0;
    }
    if (g_tail_focus_site_count != 0) {
        int match = 0;
        for (size_t i = 0; i < g_tail_focus_site_count; ++i) {
            if (g_tail_focus_sites[i] == site) {
                match = 1;
                break;
            }
        }
        if (!match) return 0;
    }
    return 1;
}

static void tail_focus_maybe_stop(uintptr_t site, uintptr_t vm_ip_off) {
    if (!tail_focus_enabled() || g_tail_stop_after_matches == 0) return;
    uint64_t hits = __atomic_add_fetch(&g_tail_focus_hits, 1, __ATOMIC_RELAXED);
    if (hits < g_tail_stop_after_matches) return;

    char buf[160];
    char *p = buf;
    char *end = buf + sizeof(buf) - 1;
    p = append_lit(p, end, "[DRIVER] VMTAIL focus stop hits=");
    p = append_dec(p, end, hits);
    p = append_lit(p, end, " vm_ip_off=");
    p = append_hex(p, end, vm_ip_off);
    p = append_lit(p, end, " site=");
    p = append_hex(p, end, site);
    p = append_lit(p, end, "\n");
    write(STDERR_FILENO, buf, (size_t)(p - buf));
    _exit(0);
}

static void tail_trace_write(uintptr_t site, uintptr_t target, uintptr_t frame,
                             uint64_t vm_ip, uintptr_t table,
                             uint32_t vm_flags, uint32_t vm_state, uint8_t vm_byte,
#if defined(__x86_64__)
                             const ucontext_t *uc,
#endif
                             const uint16_t ip_words[EAC_IP_WORD_COUNT]) {
    uintptr_t vm_ip_off = vm_ip - (uintptr_t)g_eac_base;
    if (!tail_focus_match(site, vm_ip_off)) return;

    uint64_t count = __atomic_fetch_add(&g_tail_count, 1, __ATOMIC_RELAXED);
    if (count >= g_tail_limit) return;

    char buf[8192];
    char *p = buf;
    char *end = buf + sizeof(buf) - 1;
    p = append_lit(p, end, "[VMTAIL] site=");
    p = append_hex(p, end, site);
    p = append_lit(p, end, " count=");
    p = append_dec(p, end, count + 1);
    p = append_lit(p, end, " frame=");
    p = append_hex(p, end, frame);
    p = append_lit(p, end, " frame_off=");
    p = append_hex(p, end, frame - (uintptr_t)g_eac_base);
    p = append_lit(p, end, " vm_ip=");
    p = append_hex(p, end, vm_ip);
    p = append_lit(p, end, " vm_ip_off=");
    p = append_hex(p, end, vm_ip_off);
    p = append_lit(p, end, " vm_flags=");
    p = append_hex(p, end, vm_flags);
    p = append_lit(p, end, " vm_state=");
    p = append_hex(p, end, vm_state);
    p = append_lit(p, end, " vm_byte=");
    p = append_hex(p, end, vm_byte);
    p = append_lit(p, end, " table=");
    p = append_hex(p, end, table);
    p = append_lit(p, end, " table_off=");
    p = append_hex(p, end, table - (uintptr_t)g_eac_base);
#if defined(__x86_64__)
    if (g_tail_regs) {
        p = append_gprs(p, end, uc);
    }
    if (g_tail_mem) {
        p = append_gpr_mems(p, end, uc);
    }
#endif
    if (g_tail_scratch) {
        p = append_frame_scratch(p, end, frame);
    }
    p = append_ip_words(p, end, ip_words);
    p = append_lit(p, end, " target=");
    p = append_hex(p, end, target);
    p = append_lit(p, end, " target_off=");
    p = append_hex(p, end, target - (uintptr_t)g_eac_base);
    p = append_lit(p, end, "\n");
    write(STDERR_FILENO, buf, (size_t)(p - buf));
    tail_focus_maybe_stop(site, vm_ip_off);
}

#if defined(__x86_64__)
static uintptr_t tail_reg_value(const ucontext_t *uc, enum tail_reg reg) {
    switch (reg) {
        case TAIL_REG_RAX: return (uintptr_t)uc->uc_mcontext.gregs[REG_RAX];
        case TAIL_REG_RBX: return (uintptr_t)uc->uc_mcontext.gregs[REG_RBX];
        case TAIL_REG_RCX: return (uintptr_t)uc->uc_mcontext.gregs[REG_RCX];
        case TAIL_REG_RDX: return (uintptr_t)uc->uc_mcontext.gregs[REG_RDX];
        case TAIL_REG_RSI: return (uintptr_t)uc->uc_mcontext.gregs[REG_RSI];
        case TAIL_REG_RDI: return (uintptr_t)uc->uc_mcontext.gregs[REG_RDI];
        case TAIL_REG_RBP: return (uintptr_t)uc->uc_mcontext.gregs[REG_RBP];
        case TAIL_REG_RSP: return (uintptr_t)uc->uc_mcontext.gregs[REG_RSP];
        case TAIL_REG_R8: return (uintptr_t)uc->uc_mcontext.gregs[REG_R8];
        case TAIL_REG_R9: return (uintptr_t)uc->uc_mcontext.gregs[REG_R9];
        case TAIL_REG_R10: return (uintptr_t)uc->uc_mcontext.gregs[REG_R10];
        case TAIL_REG_R11: return (uintptr_t)uc->uc_mcontext.gregs[REG_R11];
        case TAIL_REG_R12: return (uintptr_t)uc->uc_mcontext.gregs[REG_R12];
        case TAIL_REG_R13: return (uintptr_t)uc->uc_mcontext.gregs[REG_R13];
        case TAIL_REG_R14: return (uintptr_t)uc->uc_mcontext.gregs[REG_R14];
        case TAIL_REG_R15: return (uintptr_t)uc->uc_mcontext.gregs[REG_R15];
        default: return 0;
    }
}
#endif

static void dispatch_sigtrap(int sig, siginfo_t *info, void *opaque) {
    (void)sig;
    (void)info;

#if defined(__x86_64__)
    ucontext_t *uc = (ucontext_t *)opaque;
    uintptr_t rip = (uintptr_t)uc->uc_mcontext.gregs[REG_RIP];
    uintptr_t trap_site = rip - 1u;

    for (size_t idx = 0; idx < g_dispatch_site_count; ++idx) {
        uintptr_t site = (uintptr_t)g_eac_base + g_dispatch_sites[idx];
        uint64_t target_value = 0;
        uint64_t vm_ip_value = 0;
        if (trap_site != site) continue;

        uintptr_t slot = (uintptr_t)uc->uc_mcontext.gregs[REG_RAX];
        uintptr_t index = (uintptr_t)uc->uc_mcontext.gregs[REG_RBX];
        uintptr_t frame = (uintptr_t)uc->uc_mcontext.gregs[REG_RBP];
        uintptr_t target;
        uint64_t table_value = 0;
        uint32_t vm_flags = 0;
        uint32_t vm_state = 0;
        uint8_t vm_byte = 0;
        uint16_t ip_words[EAC_IP_WORD_COUNT];
        if (!read_mapped_u64(slot, &target_value)) {
            signal(SIGTRAP, SIG_DFL);
            uc->uc_mcontext.gregs[REG_RIP] = (greg_t)trap_site;
            return;
        }
        target = (uintptr_t)target_value;
        (void)read_mapped_u64(frame + 0x0a, &vm_ip_value);
        (void)read_mapped_u32(frame + 0x23, &vm_flags);
        (void)read_mapped_u32(frame + 0x170, &vm_state);
        (void)read_mapped_u8(frame + 0x194, &vm_byte);
        (void)read_mapped_u64(frame + 0x10f, &table_value);
        read_ip_words_mapped(vm_ip_value, ip_words);
        if (dispatch_focus_match(g_dispatch_sites[idx])) {
            dispatch_trace_write(idx, trap_site - (uintptr_t)g_eac_base, slot, index, target,
                                 frame, vm_ip_value, vm_flags, vm_state, vm_byte,
                                 (uintptr_t)table_value, ip_words);
            dispatch_focus_maybe_stop(g_dispatch_sites[idx]);
        }
        uc->uc_mcontext.gregs[REG_RIP] = (greg_t)target;
        return;
    }

    for (size_t i = 0; g_tail_trace && i < g_tail_site_count; ++i) {
        if (trap_site != (uintptr_t)g_eac_base + g_tail_sites[i].off) continue;

        uintptr_t frame = (uintptr_t)uc->uc_mcontext.gregs[REG_RBP];
        uint64_t vm_ip = *(const uint64_t *)(frame + 0x0a);
        uint32_t vm_flags = *(const uint32_t *)(frame + 0x23);
        uint32_t vm_state = *(const uint32_t *)(frame + 0x170);
        uint8_t vm_byte = *(const uint8_t *)(frame + 0x194);
        uintptr_t table = *(const uintptr_t *)(frame + 0x10f);
        uint16_t ip_words[EAC_IP_WORD_COUNT];
        read_ip_words(vm_ip, ip_words);
        uintptr_t target = tail_reg_value(uc, g_tail_sites[i].reg);

        tail_trace_write(trap_site - (uintptr_t)g_eac_base, target, frame, vm_ip,
                         table, vm_flags, vm_state, vm_byte,
#if defined(__x86_64__)
                         uc,
#endif
                         ip_words);
        uc->uc_mcontext.gregs[REG_RIP] = (greg_t)target;
        return;
    }

    signal(SIGTRAP, SIG_DFL);
    uc->uc_mcontext.gregs[REG_RIP] = (greg_t)trap_site;
#else
    signal(SIGTRAP, SIG_DFL);
#endif
}

static int patch_dispatch_byte(uint8_t *addr) {
    long page_size = sysconf(_SC_PAGESIZE);
    if (page_size <= 0) page_size = 4096;
    uintptr_t page = (uintptr_t)addr & ~((uintptr_t)page_size - 1u);
    if (mprotect((void *)page, (size_t)page_size, PROT_READ | PROT_WRITE | PROT_EXEC) != 0) {
        fprintf(stderr, "[DRIVER] dispatch mprotect %p failed: %s\n", (void *)addr, strerror(errno));
        return -1;
    }
    *addr = 0xcc;
    __builtin___clear_cache((char *)addr, (char *)addr + 1);
    return 0;
}

static void install_dispatch_trace(void *sym) {
    if (!env_is_one_driver("EAC_DISPATCH_TRACE")) return;

    g_dispatch_limit = parse_ul(getenv("EAC_DISPATCH_LIMIT"), 4096);
    if (g_dispatch_limit == 0) g_dispatch_limit = 1;
    g_dispatch_detail = env_is_one_driver("EAC_DISPATCH_DETAIL");
    g_dispatch_site_count = 0;
    g_dispatch_focus_site_count = 0;
    g_dispatch_focus_hits = 0;
    g_dispatch_stop_after_matches = parse_ul(getenv("EAC_DISPATCH_STOP_AFTER_MATCHES"), 0);
    add_default_dispatch_sites();
    parse_dispatch_sites(getenv("EAC_DISPATCH_EXTRA_SITES"), 0);
    parse_dispatch_sites(getenv("EAC_DISPATCH_FOCUS_SITES"), 1);
    g_tail_trace = env_is_one_driver("EAC_VMTAIL_TRACE");
    g_tail_regs = env_is_one_driver("EAC_VMTAIL_REGS");
    g_tail_scratch = env_is_one_driver("EAC_VMTAIL_SCRATCH");
    g_tail_mem = env_is_one_driver("EAC_VMTAIL_MEM");
    g_tail_mem_reg_mask = parse_tail_reg_mask(getenv("EAC_VMTAIL_MEM_REGS"));
    g_tail_limit = parse_ul(getenv("EAC_VMTAIL_LIMIT"), 4096);
    if (g_tail_limit == 0) g_tail_limit = 1;
    g_tail_focus_ip_count = 0;
    g_tail_focus_site_count = 0;
    g_tail_focus_hits = 0;
    parse_focus_ips(getenv("EAC_VMTAIL_FOCUS_IPS"));
    parse_focus_sites(getenv("EAC_VMTAIL_FOCUS_SITES"));
    g_tail_stop_after_matches = parse_ul(getenv("EAC_VMTAIL_STOP_AFTER_MATCHES"), 0);
    g_tail_site_count = 0;
    g_scratch_offset_count = 0;
    if (g_tail_trace) {
        add_default_tail_sites();
        parse_extra_tail_sites(getenv("EAC_VMTAIL_SITES"));
    }
    if (g_tail_scratch) {
        add_default_scratch_offsets();
        parse_scratch_offsets(getenv("EAC_VMTAIL_SCRATCH_OFFSETS"));
    }
    load_read_ranges();

    Dl_info info;
    memset(&info, 0, sizeof(info));
    if (dladdr(sym, &info) == 0 || info.dli_fbase == NULL) {
        fprintf(stderr, "[DRIVER] dispatch trace dladdr failed\n");
        return;
    }
    g_eac_base = (uint8_t *)info.dli_fbase;

    struct sigaction sa;
    memset(&sa, 0, sizeof(sa));
    sa.sa_sigaction = dispatch_sigtrap;
    sa.sa_flags = SA_SIGINFO | SA_NODEFER;
    sigemptyset(&sa.sa_mask);
    if (sigaction(SIGTRAP, &sa, NULL) != 0) {
        fprintf(stderr, "[DRIVER] dispatch sigaction failed: %s\n", strerror(errno));
        return;
    }

    for (size_t i = 0; i < g_dispatch_site_count; ++i) {
        if (patch_dispatch_byte(g_eac_base + g_dispatch_sites[i]) != 0) return;
    }
    if (g_tail_trace) {
        for (size_t i = 0; i < g_tail_site_count; ++i) {
            if (patch_dispatch_byte(g_eac_base + g_tail_sites[i].off) != 0) return;
        }
    }

    fprintf(stderr,
            "[DRIVER] dispatch trace enabled base=%p dispatch_sites=%zu limit=%" PRIu64
            " detail=%d tail=%d tail_regs=%d tail_scratch=%d tail_mem=%d"
            " tail_limit=%" PRIu64
            " tail_sites=%zu scratch_offsets=%zu read_ranges=%zu focus_ips=%zu"
            " focus_sites=%zu stop_after_matches=%" PRIu64
            " dispatch_focus_sites=%zu dispatch_stop_after_matches=%" PRIu64 "\n",
            (void *)g_eac_base, g_dispatch_site_count, g_dispatch_limit,
            g_dispatch_detail, g_tail_trace, g_tail_regs, g_tail_scratch, g_tail_mem,
            g_tail_limit, g_tail_site_count, g_scratch_offset_count, g_read_range_count,
            g_tail_focus_ip_count, g_tail_focus_site_count, g_tail_stop_after_matches,
            g_dispatch_focus_site_count, g_dispatch_stop_after_matches);
    for (size_t i = 0; i < g_dispatch_site_count; ++i) {
        fprintf(stderr, "[DRIVER] dispatch site +0x%lx\n",
                (unsigned long)g_dispatch_sites[i]);
    }
    for (size_t i = 0; g_tail_trace && i < g_tail_site_count; ++i) {
        fprintf(stderr, "[DRIVER] tail site +0x%lx -> %s\n",
                (unsigned long)g_tail_sites[i].off, tail_reg_name(g_tail_sites[i].reg));
    }
}

typedef uintptr_t (*sidecar_x_fn)(void *buf, uint32_t len);

static const char *dump_dir(void) {
    const char *dir = getenv("EAC_DUMP_DIR");
    return dir != NULL && *dir != '\0' ? dir : NULL;
}

static void dump_bytes(const char *path, const void *data, size_t len) {
    FILE *fp = fopen(path, "wb");
    if (fp == NULL) {
        fprintf(stderr, "[DRIVER] dump failed open %s: %s\n", path, strerror(errno));
        return;
    }
    if (len > 0 && fwrite(data, 1, len, fp) != len) {
        fprintf(stderr, "[DRIVER] dump short write %s: %s\n", path, strerror(errno));
    }
    fclose(fp);
}

static void dump_eac_maps(const char *tag, void *sym, const uint8_t *out, size_t out_len) {
    const char *dir = dump_dir();
    if (dir == NULL) return;
    if (mkdir(dir, 0755) != 0 && errno != EEXIST) {
        fprintf(stderr, "[DRIVER] dump mkdir %s failed: %s\n", dir, strerror(errno));
        return;
    }

    Dl_info info;
    memset(&info, 0, sizeof(info));
    if (dladdr(sym, &info) == 0 || info.dli_fbase == NULL) {
        fprintf(stderr, "[DRIVER] dladdr failed for dump\n");
        return;
    }

    char path[512];
    snprintf(path, sizeof(path), "%s/%s_out.bin", dir, tag);
    dump_bytes(path, out, out_len);

    uint8_t *base = (uint8_t *)info.dli_fbase;
    void *ctx = NULL;
    memcpy(&ctx, base + EAC_CONTEXT_SLOT_OFFSET, sizeof(ctx));
    fprintf(stderr, "[DRIVER] dump %s base=%p ctx_slot=+0x%x ctx=%p\n",
            tag, info.dli_fbase, EAC_CONTEXT_SLOT_OFFSET, ctx);
    if (ctx != NULL) {
        snprintf(path, sizeof(path), "%s/%s_ctx_%p.bin", dir, tag, ctx);
        dump_bytes(path, ctx, EAC_CONTEXT_SIZE);
    }

    FILE *maps = fopen("/proc/self/maps", "r");
    if (maps == NULL) {
        fprintf(stderr, "[DRIVER] dump maps open failed: %s\n", strerror(errno));
        return;
    }

    snprintf(path, sizeof(path), "%s/%s_maps.txt", dir, tag);
    FILE *maps_copy = fopen(path, "w");

    char line[1024];
    while (fgets(line, sizeof(line), maps) != NULL) {
        if (maps_copy != NULL) fputs(line, maps_copy);
        if (strstr(line, "eac.elf") == NULL) continue;

        unsigned long start = 0, end = 0, off = 0;
        char perms[8] = {0};
        if (sscanf(line, "%lx-%lx %7s %lx", &start, &end, perms, &off) != 4) continue;
        if (perms[0] != 'r' || end <= start) continue;

        snprintf(path, sizeof(path), "%s/%s_map_%lx_%lx_%s_off_%lx.bin",
                 dir, tag, start, end, perms, off);
        dump_bytes(path, (const void *)start, (size_t)(end - start));
    }

    if (maps_copy != NULL) fclose(maps_copy);
    fclose(maps);
}

static void usage(const char *argv0) {
    fprintf(stderr,
            "usage: %s <path-to-elf> [mode] [symbol] [buffer_len_hex_or_dec] [sleep_seconds]\n"
            "\n"
            "defaults:\n"
            "  mode          = 1\n"
            "  symbol        = x\n"
            "  buffer_len    = 0x800\n"
            "  sleep_seconds = 3\n"
            "\n"
            "example:\n"
            "  EAC_LAUNCHERDIR=/tmp/fake_launcher LD_PRELOAD=./trace_preload.so \\\n"
            "    %s ./easyanticheat.elf 1 x 0x800 3\n",
            argv0, argv0);
}

int main(int argc, char **argv) {
    if (argc < 2) {
        usage(argv[0]);
        return 2;
    }

    const char *elf_path = argv[1];
    uint32_t mode = (uint32_t)parse_ul(argc > 2 ? argv[2] : NULL, 1);
    const char *symbol = argc > 3 ? argv[3] : "x";
    size_t buf_len = (size_t)parse_ul(argc > 4 ? argv[4] : NULL, 0x800);
    unsigned sleep_seconds = (unsigned)parse_ul(argc > 5 ? argv[5] : NULL, 3);

    if (buf_len < 0x80) {
        fprintf(stderr, "[DRIVER] buffer too small: 0x%zx; using 0x800\n", buf_len);
        buf_len = 0x800;
    }

    uint8_t *buf = (uint8_t *)calloc(1, buf_len);
    uint8_t *out = (uint8_t *)calloc(1, 0x4000);
    if (buf == NULL || out == NULL) {
        fprintf(stderr, "[DRIVER] calloc failed\n");
        free(buf);
        free(out);
        return 1;
    }

    /*
       Synthetic launcher-like buffer used only to reach observable code paths.
       The exact vendor ABI is not public here; all fields are intentionally
       written bytewise to avoid unaligned stores and C aliasing problems.
    */
    put_u32(buf, 0x00, mode);
    put_u32(buf, 0x04, (uint32_t)buf_len);
    put_u32(buf, 0x08, 1u);
    put_u64(buf, 0x0c, (uint64_t)(uintptr_t)out);
    put_u32(buf, 0x14, mode);
    put_u32(buf, 0x18, 0u);

    if (buf_len > 0x320) {
        snprintf((char *)(buf + 0x1c), 0x40, "synthetic-game");
        snprintf((char *)(buf + 0x5c), 0x40, "synthetic-product");
        snprintf((char *)(buf + 0x9c), 0x40, "synthetic-sandbox");
        snprintf((char *)(buf + 0xdc), 0x200, "synthetic-launcher");
        snprintf((char *)(buf + 0x2dc), 0x40, "synthetic-extra");
    }

    fprintf(stderr, "[DRIVER] dlopen path=%s\n", elf_path);
    void *handle = dlopen(elf_path, RTLD_NOW | RTLD_LOCAL);
    if (handle == NULL) {
        fprintf(stderr, "[DRIVER] dlopen failed: %s\n", dlerror());
        free(buf);
        free(out);
        return 1;
    }

    dlerror();
    void *sym = dlsym(handle, symbol);
    const char *dlsym_error = dlerror();
    if (dlsym_error != NULL || sym == NULL) {
        fprintf(stderr, "[DRIVER] dlsym(%s) failed: %s\n", symbol,
                dlsym_error != NULL ? dlsym_error : "null symbol");
        dlclose(handle);
        free(buf);
        free(out);
        return 1;
    }

    fprintf(stderr, "[DRIVER] dlsym %s=%p\n", symbol, sym);
    install_dispatch_trace(sym);
    fprintf(stderr, "[DRIVER] call %s(buf=%p,len=0x%zx,mode=%u,out=%p)\n",
            symbol, (void *)buf, buf_len, mode, (void *)out);

    sidecar_x_fn fn = (sidecar_x_fn)sym;
    uintptr_t ret = fn(buf, (uint32_t)buf_len);

    fprintf(stderr, "[DRIVER] %s returned 0x%" PRIxPTR "\n", symbol, ret);
    fprintf(stderr, "[DRIVER] out[0..31]=");
    for (size_t i = 0; i < 32; ++i) fprintf(stderr, "%02x", out[i]);
    fprintf(stderr, "\n");
    dump_eac_maps("postcall", sym, out, 0x4000);

    if (sleep_seconds > 0) {
        fprintf(stderr, "[DRIVER] sleeping %u second(s) for worker threads\n", sleep_seconds);
        sleep(sleep_seconds);
        dump_eac_maps("postsleep", sym, out, 0x4000);
    }

    if (env_is_one_driver("EAC_FAST_EXIT")) {
        fprintf(stderr, "[DRIVER] fast exit\n");
        fflush(stdout);
        fflush(stderr);
        _exit(0);
    }

    dlclose(handle);
    free(buf);
    free(out);
    fprintf(stderr, "[DRIVER] done\n");
    return 0;
}
