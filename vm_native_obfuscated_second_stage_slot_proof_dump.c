#define _GNU_SOURCE
#include <capstone/capstone.h>
#include <capstone/x86.h>

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EAC_PATH "eac.elf"
#define DYNAMIC_PATH "dumps/vmtail-wide-1m-w16/vm_native_obfuscated_second_stage_dynamic.tsv"
#define MAX_FIELDS 64
#define MAX_TEXT 8192

typedef struct {
    uint64_t entry;
    uint64_t site;
    const char *chain;
} SiteSpec;

typedef struct {
    uint64_t site;
    unsigned hit_count;
    unsigned unique_targets;
    char target_mix[MAX_TEXT];
    char slot_entry_mix[MAX_TEXT];
    char slot_target_check_mix[MAX_TEXT];
    char slot_base_check_mix[MAX_TEXT];
    char run_mix[MAX_TEXT];
} DynamicRow;

typedef struct {
    uint64_t entry;
    uint64_t site;
    uint64_t window_start;
    uint64_t shift_site;
    uint64_t add_index_site;
    uint64_t jmp_site;
    uint64_t pre_index_rax_delta;
    uint64_t post_index_rax_delta;
    uint64_t net_rax_delta;
    x86_reg base_reg;
    x86_reg index_reg;
    unsigned shift_amount;
    bool has_shift;
    bool has_index_add;
    bool has_jmp_mem_base;
    DynamicRow dynamic;
} SlotProof;

static const SiteSpec k_sites[] = {
    {0xc9849, 0xcad88, "source299_chain_a"},
    {0xcaf2a, 0xcc3f5, "source195_chain_b"},
    {0xc4258, 0xc559d, "source299_chain_b"},
    {0xc57b8, 0xc6bce, "source195_chain_c"},
    {0xc6d58, 0xc80b9, "source195_chain_d"},
};

static uint8_t *g_image;
static size_t g_image_size;
static csh g_cs;

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

static void read_file(const char *path) {
    FILE *file = fopen(path, "rb");
    long size;
    if (!file) {
        perror(path);
        exit(1);
    }
    if (fseek(file, 0, SEEK_END) != 0) {
        perror(path);
        exit(1);
    }
    size = ftell(file);
    if (size <= 0) {
        fprintf(stderr, "%s: empty or unseekable\n", path);
        exit(1);
    }
    if (fseek(file, 0, SEEK_SET) != 0) {
        perror(path);
        exit(1);
    }
    g_image = malloc((size_t)size);
    if (!g_image) {
        fprintf(stderr, "out of memory reading %s\n", path);
        exit(1);
    }
    if (fread(g_image, 1, (size_t)size, file) != (size_t)size) {
        fprintf(stderr, "%s: short read\n", path);
        exit(1);
    }
    g_image_size = (size_t)size;
    fclose(file);
}

static const char *reg_name(x86_reg reg) {
    const char *name = cs_reg_name(g_cs, reg);
    return name ? name : "-";
}

static bool op_is_reg(const cs_x86_op *op, x86_reg reg) {
    return op->type == X86_OP_REG && op->reg == reg;
}

static bool op_is_imm(const cs_x86_op *op) {
    return op->type == X86_OP_IMM;
}

static bool insn_is_shift3(const cs_insn *insn, x86_reg *reg) {
    const cs_x86 *x86 = &insn->detail->x86;
    if (insn->id != X86_INS_SHL && insn->id != X86_INS_SAL) {
        return false;
    }
    if (x86->op_count != 2 || x86->operands[0].type != X86_OP_REG ||
        !op_is_imm(&x86->operands[1]) || x86->operands[1].imm != 3) {
        return false;
    }
    *reg = x86->operands[0].reg;
    return true;
}

static bool insn_is_add_index_to_rax(const cs_insn *insn, x86_reg reg) {
    const cs_x86 *x86 = &insn->detail->x86;
    return insn->id == X86_INS_ADD &&
           x86->op_count == 2 &&
           op_is_reg(&x86->operands[0], X86_REG_RAX) &&
           op_is_reg(&x86->operands[1], reg);
}

static bool insn_is_rax_imm_delta(const cs_insn *insn, uint64_t *delta) {
    const cs_x86 *x86 = &insn->detail->x86;
    if (x86->op_count != 2 || !op_is_reg(&x86->operands[0], X86_REG_RAX) ||
        !op_is_imm(&x86->operands[1])) {
        return false;
    }
    if (insn->id == X86_INS_ADD) {
        *delta = (uint64_t)x86->operands[1].imm;
        return true;
    }
    if (insn->id == X86_INS_SUB) {
        *delta = 0ull - (uint64_t)x86->operands[1].imm;
        return true;
    }
    return false;
}

static bool insn_is_jmp_mem_base(const cs_insn *insn, x86_reg reg) {
    const cs_x86 *x86 = &insn->detail->x86;
    return insn->id == X86_INS_JMP &&
           x86->op_count == 1 &&
           x86->operands[0].type == X86_OP_MEM &&
           x86->operands[0].mem.base == reg &&
           x86->operands[0].mem.index == X86_REG_INVALID &&
           x86->operands[0].mem.disp == 0;
}

static int find_matching_column(char **header, int header_count, const char *name, const char *path) {
    int column = find_col(header, header_count, name);
    if (column < 0) {
        fprintf(stderr, "%s: missing required column %s\n", path, name);
        exit(1);
    }
    return column;
}

static DynamicRow load_dynamic_for_site(uint64_t site) {
    FILE *file = fopen(DYNAMIC_PATH, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count;
    int c_site, c_hits, c_unique, c_targets, c_slots, c_check, c_runs;
    int c_base_check;
    DynamicRow out = {.site = site};
    copy_field(out.target_mix, sizeof(out.target_mix), "-");
    copy_field(out.slot_entry_mix, sizeof(out.slot_entry_mix), "-");
    copy_field(out.slot_target_check_mix, sizeof(out.slot_target_check_mix), "-");
    copy_field(out.slot_base_check_mix, sizeof(out.slot_base_check_mix), "-");
    copy_field(out.run_mix, sizeof(out.run_mix), "-");
    if (!file) {
        perror(DYNAMIC_PATH);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", DYNAMIC_PATH);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_site = find_matching_column(header, header_count, "indirect_jmp_site", DYNAMIC_PATH);
    c_hits = find_matching_column(header, header_count, "hit_count", DYNAMIC_PATH);
    c_unique = find_matching_column(header, header_count, "unique_targets", DYNAMIC_PATH);
    c_targets = find_matching_column(header, header_count, "target_mix", DYNAMIC_PATH);
    c_slots = find_matching_column(header, header_count, "slot_entry_mix", DYNAMIC_PATH);
    c_check = find_matching_column(header, header_count, "slot_target_check_mix", DYNAMIC_PATH);
    c_base_check = find_matching_column(header, header_count, "slot_base_check_mix", DYNAMIC_PATH);
    c_runs = find_matching_column(header, header_count, "run_mix", DYNAMIC_PATH);
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int field_count;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        field_count = split_tsv(line, fields, MAX_FIELDS);
        if (parse_number(field_at(fields, field_count, c_site)) != site) {
            continue;
        }
        out.hit_count = (unsigned)parse_number(field_at(fields, field_count, c_hits));
        out.unique_targets = (unsigned)parse_number(field_at(fields, field_count, c_unique));
        copy_field(out.target_mix, sizeof(out.target_mix), field_at(fields, field_count, c_targets));
        copy_field(out.slot_entry_mix, sizeof(out.slot_entry_mix), field_at(fields, field_count, c_slots));
        copy_field(out.slot_target_check_mix, sizeof(out.slot_target_check_mix), field_at(fields, field_count, c_check));
        copy_field(out.slot_base_check_mix, sizeof(out.slot_base_check_mix), field_at(fields, field_count, c_base_check));
        copy_field(out.run_mix, sizeof(out.run_mix), field_at(fields, field_count, c_runs));
        break;
    }
    free(line);
    fclose(file);
    return out;
}

static unsigned matching_slot_hits(const DynamicRow *row) {
    const char *prefix = "slot_index_matches_handler_target:";
    const char *text = row->slot_target_check_mix;
    if (strncmp(text, prefix, strlen(prefix)) == 0 && strchr(text, ',') == NULL) {
        return (unsigned)strtoul(text + strlen(prefix), NULL, 10);
    }
    return 0;
}

static unsigned matching_base_hits(const DynamicRow *row) {
    const char *prefix = "slot_minus_idx_matches_dispatch_table:";
    const char *text = row->slot_base_check_mix;
    if (strncmp(text, prefix, strlen(prefix)) == 0 && strchr(text, ',') == NULL) {
        return (unsigned)strtoul(text + strlen(prefix), NULL, 10);
    }
    return 0;
}

static void analyze_site(const SiteSpec *spec, SlotProof *proof) {
    uint64_t start = spec->entry;
    uint64_t stop = spec->site + 8;
    cs_insn *insns = NULL;
    size_t count;
    size_t jmp_idx = (size_t)-1;
    size_t shift_idx = (size_t)-1;
    x86_reg index_reg = X86_REG_INVALID;

    memset(proof, 0, sizeof(*proof));
    proof->entry = spec->entry;
    proof->site = spec->site;
    proof->window_start = start;
    proof->base_reg = X86_REG_RAX;
    proof->dynamic = load_dynamic_for_site(spec->site);

    if (stop > g_image_size) {
        fprintf(stderr, "site 0x%llx outside image\n", (unsigned long long)spec->site);
        exit(1);
    }

    count = cs_disasm(g_cs, g_image + start, (size_t)(stop - start), start, 0, &insns);
    if (!count) {
        fprintf(stderr, "failed to disassemble window for 0x%llx\n", (unsigned long long)spec->site);
        exit(1);
    }

    for (size_t i = 0; i < count; i++) {
        if (insns[i].address == spec->site && insn_is_jmp_mem_base(&insns[i], X86_REG_RAX)) {
            jmp_idx = i;
            proof->has_jmp_mem_base = true;
            proof->jmp_site = insns[i].address;
            break;
        }
    }
    if (jmp_idx == (size_t)-1) {
        fprintf(stderr, "no jmp [rax] at 0x%llx\n", (unsigned long long)spec->site);
        cs_free(insns, count);
        exit(1);
    }

    for (size_t i = 0; i < jmp_idx; i++) {
        x86_reg candidate = X86_REG_INVALID;
        if (!insn_is_shift3(&insns[i], &candidate)) {
            continue;
        }
        for (size_t j = i + 1; j < jmp_idx; j++) {
            if (insn_is_add_index_to_rax(&insns[j], candidate)) {
                shift_idx = i;
                index_reg = candidate;
                proof->add_index_site = insns[j].address;
            }
        }
    }

    if (shift_idx != (size_t)-1) {
        bool after_index = false;
        proof->has_shift = true;
        proof->shift_site = insns[shift_idx].address;
        proof->index_reg = index_reg;
        proof->shift_amount = 3;
        for (size_t i = shift_idx + 1; i < jmp_idx; i++) {
            uint64_t delta;
            if (insn_is_add_index_to_rax(&insns[i], index_reg)) {
                proof->has_index_add = true;
                after_index = true;
                continue;
            }
            if (insn_is_rax_imm_delta(&insns[i], &delta)) {
                proof->net_rax_delta += delta;
                if (after_index) {
                    proof->post_index_rax_delta += delta;
                } else {
                    proof->pre_index_rax_delta += delta;
                }
            }
        }
    }

    cs_free(insns, count);
}

static const char *static_status(const SlotProof *proof) {
    if (proof->has_shift && proof->has_index_add && proof->has_jmp_mem_base &&
        proof->shift_amount == 3 && proof->net_rax_delta == 0) {
        return "static_slot_formula_net_zero";
    }
    return "static_slot_formula_incomplete";
}

static const char *proof_status(const SlotProof *proof) {
    if (strcmp(static_status(proof), "static_slot_formula_net_zero") == 0 &&
        matching_slot_hits(&proof->dynamic) == proof->dynamic.hit_count &&
        matching_base_hits(&proof->dynamic) == proof->dynamic.hit_count &&
        proof->dynamic.hit_count > 0) {
        return "static_dynamic_slot_formula_proven_for_observed_hits";
    }
    return "needs_more_static_or_dynamic_evidence";
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

static void emit_tsv(const SlotProof *proofs, size_t count) {
    printf("entry\tindirect_jmp_site\tshift_site\tadd_index_site\tjmp_site\tbase_reg\tindex_reg\tindex_shift\tpre_index_rax_delta\tpost_index_rax_delta\tnet_rax_delta\tstatic_formula\tdynamic_hits\tunique_targets\ttarget_mix\tslot_entry_mix\tslot_target_check_mix\tslot_base_check_mix\trun_mix\tstatic_status\tproof_status\tnote\n");
    for (size_t i = 0; i < count; i++) {
        const SlotProof *p = &proofs[i];
        printf("0x%llx\t0x%llx\t0x%llx\t0x%llx\t0x%llx\t%s\t%s\t%u\t0x%llx\t0x%llx\t0x%llx\t%s_final=%s_initial+(%s<<%u)\t%u\t%u\t%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",
               (unsigned long long)p->entry,
               (unsigned long long)p->site,
               (unsigned long long)p->shift_site,
               (unsigned long long)p->add_index_site,
               (unsigned long long)p->jmp_site,
               reg_name(p->base_reg),
               reg_name(p->index_reg),
               p->shift_amount,
               (unsigned long long)p->pre_index_rax_delta,
               (unsigned long long)p->post_index_rax_delta,
               (unsigned long long)p->net_rax_delta,
               reg_name(p->base_reg),
               reg_name(p->base_reg),
               reg_name(p->index_reg),
               p->shift_amount,
               p->dynamic.hit_count,
               p->dynamic.unique_targets,
               p->dynamic.target_mix,
               p->dynamic.slot_entry_mix,
               p->dynamic.slot_target_check_mix,
               p->dynamic.slot_base_check_mix,
               p->dynamic.run_mix,
               static_status(p),
               proof_status(p),
               "capstone_static_window_proves_constant_ladder_cancels;dynamic_rows_prove_observed_slots_match_handler_targets");
    }
}

static void emit_markdown(const SlotProof *proofs, size_t count) {
    printf("# Native Obfuscated Second-Stage Slot Formula Proof\n\n");
    printf("Capstone-backed static proof for the five second-stage computed `jmp [rax]` sites, joined to focused dynamic slot evidence.\n\n");
    printf("| entry | site | formula | net delta | dynamic hits | base check | slot check | proof status |\n");
    printf("| --- | --- | --- | ---: | ---: | --- | --- | --- |\n");
    for (size_t i = 0; i < count; i++) {
        const SlotProof *p = &proofs[i];
        printf("| `0x%llx` | `0x%llx` | `%s_final=%s_initial+(%s<<%u)` | `0x%llx` | %u | `%s` | `%s` | `%s` |\n",
               (unsigned long long)p->entry,
               (unsigned long long)p->site,
               reg_name(p->base_reg),
               reg_name(p->base_reg),
               reg_name(p->index_reg),
               p->shift_amount,
               (unsigned long long)p->net_rax_delta,
               p->dynamic.hit_count,
               p->dynamic.slot_base_check_mix,
               p->dynamic.slot_target_check_mix,
               proof_status(p));
    }
}

static void emit_c_function(const SlotProof *p) {
    printf("static void second_stage_slot_formula_%llx(VMState *vm, const VMSecondStageSlotProof *edge) {\n",
           (unsigned long long)p->site);
    printf("    /* entry=0x%llx; site=0x%llx; static formula: %s_final=%s_initial+(%s<<%u) */\n",
           (unsigned long long)p->entry,
           (unsigned long long)p->site,
           reg_name(p->base_reg),
           reg_name(p->base_reg),
           reg_name(p->index_reg),
           p->shift_amount);
    printf("    /* shift_site=0x%llx; add_index_site=0x%llx; jmp_site=0x%llx; pre_delta=0x%llx; post_delta=0x%llx; net_delta=0x%llx */\n",
           (unsigned long long)p->shift_site,
           (unsigned long long)p->add_index_site,
           (unsigned long long)p->jmp_site,
           (unsigned long long)p->pre_index_rax_delta,
           (unsigned long long)p->post_index_rax_delta,
           (unsigned long long)p->net_rax_delta);
    printf("    /* dynamic_target_mix=");
    print_comment_text(p->dynamic.target_mix);
    printf("; slot_entry_mix=");
    print_comment_text(p->dynamic.slot_entry_mix);
    printf("; slot_target_check_mix=");
    print_comment_text(p->dynamic.slot_target_check_mix);
    printf("; slot_base_check_mix=");
    print_comment_text(p->dynamic.slot_base_check_mix);
    printf(" */\n");
    printf("    vm_note_second_stage_slot_formula(vm, edge, 0x%llxu, 0x%llxu, %uu, 0x%llxu, %uu, ",
           (unsigned long long)p->entry,
           (unsigned long long)p->site,
           p->shift_amount,
           (unsigned long long)p->net_rax_delta,
           p->dynamic.hit_count);
    print_c_string(static_status(p));
    printf(", ");
    print_c_string(proof_status(p));
    printf(", ");
    print_c_string(p->dynamic.slot_target_check_mix);
    printf(");\n");
    printf("}\n\n");
}

static void emit_c(const SlotProof *proofs, size_t count) {
    printf("/*\n");
    printf(" * Native obfuscated second-stage slot formula proof.\n");
    printf(" *\n");
    printf(" * Generated by vm_native_obfuscated_second_stage_slot_proof_dump.c.\n");
    printf(" * Capstone validates that each computed jmp [rax] is fed by\n");
    printf(" * rax_final = rax_initial + (rbx << 3), with all surrounding immediate\n");
    printf(" * add/sub noise canceling to a net zero delta. Dynamic slot evidence is\n");
    printf(" * joined from %s.\n", DYNAMIC_PATH);
    printf(" */\n");
    printf("#include <stdint.h>\n\n");
    printf("typedef struct VMState {\n");
    printf("    uint8_t *ip;\n");
    printf("    uint32_t state;\n");
    printf("    uint32_t flags;\n");
    printf("    uint8_t byte;\n");
    printf("} VMState;\n\n");
    printf("typedef struct VMSecondStageSlotProof {\n");
    printf("    uint32_t entry;\n");
    printf("    uint32_t indirect_jmp_site;\n");
    printf("    const char *static_formula;\n");
    printf("    const char *dynamic_slot_check;\n");
    printf("} VMSecondStageSlotProof;\n\n");
    printf("static void vm_note_second_stage_slot_formula(VMState *vm,\n");
    printf("                                                  const VMSecondStageSlotProof *edge,\n");
    printf("                                                  uint32_t entry, uint32_t site,\n");
    printf("                                                  unsigned index_shift,\n");
    printf("                                                  uint64_t net_delta,\n");
    printf("                                                  unsigned dynamic_hits,\n");
    printf("                                                  const char *static_status,\n");
    printf("                                                  const char *proof_status,\n");
    printf("                                                  const char *slot_check) {\n");
    printf("    (void)vm;\n");
    printf("    (void)edge;\n");
    printf("    (void)entry;\n");
    printf("    (void)site;\n");
    printf("    (void)index_shift;\n");
    printf("    (void)net_delta;\n");
    printf("    (void)dynamic_hits;\n");
    printf("    (void)static_status;\n");
    printf("    (void)proof_status;\n");
    printf("    (void)slot_check;\n");
    printf("}\n\n");
    for (size_t i = 0; i < count; i++) {
        emit_c_function(&proofs[i]);
    }
    printf("void vm_native_obfuscated_second_stage_slot_proof(VMState *vm,\n");
    printf("                                                   uint32_t indirect_jmp_site,\n");
    printf("                                                   const VMSecondStageSlotProof *edge) {\n");
    printf("    switch (indirect_jmp_site) {\n");
    for (size_t i = 0; i < count; i++) {
        printf("    case 0x%llxu:\n", (unsigned long long)proofs[i].site);
        printf("        second_stage_slot_formula_%llx(vm, edge);\n", (unsigned long long)proofs[i].site);
        printf("        break;\n");
    }
    printf("    default:\n");
    printf("        vm_note_second_stage_slot_formula(vm, edge, 0, indirect_jmp_site, 0, 0, 0,\n");
    printf("                                          \"unknown_second_stage_slot_site\",\n");
    printf("                                          \"needs_static_window_analysis\", \"-\");\n");
    printf("        break;\n");
    printf("    }\n");
    printf("}\n");
}

int main(int argc, char **argv) {
    enum { MODE_C, MODE_TSV, MODE_MARKDOWN } mode = MODE_C;
    SlotProof proofs[sizeof(k_sites) / sizeof(k_sites[0])];
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
    read_file(EAC_PATH);
    if (cs_open(CS_ARCH_X86, CS_MODE_64, &g_cs) != CS_ERR_OK) {
        fprintf(stderr, "failed to initialize capstone\n");
        return 1;
    }
    cs_option(g_cs, CS_OPT_DETAIL, CS_OPT_ON);
    for (size_t i = 0; i < sizeof(k_sites) / sizeof(k_sites[0]); i++) {
        analyze_site(&k_sites[i], &proofs[i]);
    }
    if (mode == MODE_TSV) {
        emit_tsv(proofs, sizeof(proofs) / sizeof(proofs[0]));
    } else if (mode == MODE_MARKDOWN) {
        emit_markdown(proofs, sizeof(proofs) / sizeof(proofs[0]));
    } else {
        emit_c(proofs, sizeof(proofs) / sizeof(proofs[0]));
    }
    cs_close(&g_cs);
    free(g_image);
    return 0;
}
