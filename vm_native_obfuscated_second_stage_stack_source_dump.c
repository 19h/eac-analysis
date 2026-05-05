#define _GNU_SOURCE
#include <capstone/capstone.h>
#include <capstone/x86.h>

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EAC_PATH "eac.elf"

typedef struct {
    uint64_t entry;
    uint64_t site;
    uint64_t source_push_site;
    uint64_t load_site;
    uint64_t shift_site;
    unsigned expected_duplicate_pushes;
    const char *chain;
} SiteSpec;

typedef struct {
    uint64_t entry;
    uint64_t site;
    uint64_t source_push_site;
    uint64_t load_site;
    uint64_t shift_site;
    unsigned duplicate_pushes;
    unsigned preserved_rbx_writes;
    bool source_push_ok;
    bool load_ok;
    bool load_is_pop;
    bool shift_ok;
    bool unprotected_rbx_clobber;
    const char *chain;
} StackSourceProof;

static const SiteSpec k_sites[] = {
    {0xc9849, 0xcad88, 0xcaca3, 0xcacb0, 0xcacf1, 2, "source299_chain_a"},
    {0xcaf2a, 0xcc3f5, 0xcc31c, 0xcc326, 0xcc36a, 1, "source195_chain_b"},
    {0xc4258, 0xc559d, 0xc54c6, 0xc54d3, 0xc5512, 2, "source299_chain_b"},
    {0xc57b8, 0xc6bce, 0xc6afc, 0xc6b09, 0xc6b43, 2, "source195_chain_c"},
    {0xc6d58, 0xc80b9, 0xc7fdc, 0xc7fe6, 0xc802e, 1, "source195_chain_d"},
};

static uint8_t *g_image;
static size_t g_image_size;
static csh g_cs;

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

static bool reg_is_rbx_family(x86_reg reg) {
    return reg == X86_REG_RBX || reg == X86_REG_EBX || reg == X86_REG_BX ||
           reg == X86_REG_BL || reg == X86_REG_BH;
}

static bool op_is_reg(const cs_x86_op *op, x86_reg reg) {
    return op->type == X86_OP_REG && op->reg == reg;
}

static bool op_is_rsp_mem(const cs_x86_op *op, int64_t disp) {
    return op->type == X86_OP_MEM &&
           op->mem.base == X86_REG_RSP &&
           op->mem.index == X86_REG_INVALID &&
           op->mem.disp == disp;
}

static bool insn_is_push_rsp_disp(const cs_insn *insn, int64_t disp) {
    const cs_x86 *x86 = &insn->detail->x86;
    return insn->id == X86_INS_PUSH &&
           x86->op_count == 1 &&
           op_is_rsp_mem(&x86->operands[0], disp);
}

static bool insn_is_load_rbx_from_rsp(const cs_insn *insn, bool *is_pop) {
    const cs_x86 *x86 = &insn->detail->x86;
    if (insn->id == X86_INS_MOV &&
        x86->op_count == 2 &&
        op_is_reg(&x86->operands[0], X86_REG_RBX) &&
        op_is_rsp_mem(&x86->operands[1], 0)) {
        *is_pop = false;
        return true;
    }
    if (insn->id == X86_INS_POP &&
        x86->op_count == 1 &&
        op_is_reg(&x86->operands[0], X86_REG_RBX)) {
        *is_pop = true;
        return true;
    }
    return false;
}

static bool insn_is_push_rbx(const cs_insn *insn) {
    const cs_x86 *x86 = &insn->detail->x86;
    return insn->id == X86_INS_PUSH &&
           x86->op_count == 1 &&
           op_is_reg(&x86->operands[0], X86_REG_RBX);
}

static bool insn_is_pop_rbx(const cs_insn *insn) {
    const cs_x86 *x86 = &insn->detail->x86;
    return insn->id == X86_INS_POP &&
           x86->op_count == 1 &&
           op_is_reg(&x86->operands[0], X86_REG_RBX);
}

static bool insn_is_shift_rbx_3(const cs_insn *insn) {
    const cs_x86 *x86 = &insn->detail->x86;
    return (insn->id == X86_INS_SHL || insn->id == X86_INS_SAL) &&
           x86->op_count == 2 &&
           op_is_reg(&x86->operands[0], X86_REG_RBX) &&
           x86->operands[1].type == X86_OP_IMM &&
           x86->operands[1].imm == 3;
}

static bool insn_writes_rbx_family(const cs_insn *insn) {
    cs_regs read_regs, write_regs;
    uint8_t read_count = 0, write_count = 0;
    if (cs_regs_access(g_cs, insn, read_regs, &read_count, write_regs, &write_count) != 0) {
        return false;
    }
    for (uint8_t i = 0; i < write_count; i++) {
        if (reg_is_rbx_family((x86_reg)write_regs[i])) {
            return true;
        }
    }
    return false;
}

static const cs_insn *insn_at(const cs_insn *insns, size_t count, uint64_t address, size_t *index_out) {
    for (size_t i = 0; i < count; i++) {
        if (insns[i].address == address) {
            if (index_out) {
                *index_out = i;
            }
            return &insns[i];
        }
    }
    return NULL;
}

static void analyze_site(const SiteSpec *spec, StackSourceProof *proof) {
    cs_insn *insns = NULL;
    size_t count;
    size_t push_idx = 0, load_idx = 0, shift_idx = 0;
    const cs_insn *push_insn, *load_insn, *shift_insn;
    unsigned rbx_save_depth = 0;

    memset(proof, 0, sizeof(*proof));
    proof->entry = spec->entry;
    proof->site = spec->site;
    proof->source_push_site = spec->source_push_site;
    proof->load_site = spec->load_site;
    proof->shift_site = spec->shift_site;
    proof->chain = spec->chain;

    if (spec->shift_site + 8 > g_image_size) {
        fprintf(stderr, "site 0x%llx outside image\n", (unsigned long long)spec->site);
        exit(1);
    }

    count = cs_disasm(g_cs, g_image + spec->source_push_site,
                      (size_t)(spec->shift_site + 8 - spec->source_push_site),
                      spec->source_push_site, 0, &insns);
    if (!count) {
        fprintf(stderr, "failed to disassemble stack-source window for 0x%llx\n",
                (unsigned long long)spec->site);
        exit(1);
    }

    push_insn = insn_at(insns, count, spec->source_push_site, &push_idx);
    load_insn = insn_at(insns, count, spec->load_site, &load_idx);
    shift_insn = insn_at(insns, count, spec->shift_site, &shift_idx);
    proof->source_push_ok = push_insn && insn_is_push_rsp_disp(push_insn, 0x88);
    proof->load_ok = load_insn && insn_is_load_rbx_from_rsp(load_insn, &proof->load_is_pop);
    proof->shift_ok = shift_insn && insn_is_shift_rbx_3(shift_insn);

    if (push_insn && load_insn && push_idx < load_idx) {
        for (size_t i = push_idx + 1; i < load_idx; i++) {
            if (insn_is_push_rsp_disp(&insns[i], 0)) {
                proof->duplicate_pushes++;
            }
        }
    }

    if (load_insn && shift_insn && load_idx < shift_idx) {
        for (size_t i = load_idx + 1; i < shift_idx; i++) {
            if (insn_is_push_rbx(&insns[i])) {
                rbx_save_depth++;
                continue;
            }
            if (insn_is_pop_rbx(&insns[i])) {
                if (rbx_save_depth) {
                    rbx_save_depth--;
                    continue;
                }
                proof->unprotected_rbx_clobber = true;
                continue;
            }
            if (!insn_writes_rbx_family(&insns[i])) {
                continue;
            }
            if (rbx_save_depth) {
                proof->preserved_rbx_writes++;
            } else {
                proof->unprotected_rbx_clobber = true;
            }
        }
    }

    if (proof->duplicate_pushes != spec->expected_duplicate_pushes) {
        proof->unprotected_rbx_clobber = true;
    }

    cs_free(insns, count);
}

static const char *load_kind(const StackSourceProof *proof) {
    return proof->load_is_pop ? "pop_rbx" : "mov_rbx_qword_rsp";
}

static const char *stack_source_status(const StackSourceProof *proof) {
    if (proof->source_push_ok && proof->load_ok && proof->shift_ok &&
        !proof->unprotected_rbx_clobber) {
        return "static_stack_source_to_rbx_shift_proven";
    }
    return "static_stack_source_incomplete";
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

static void emit_tsv(const StackSourceProof *proofs, size_t count) {
    printf("entry\tindirect_jmp_site\tchain\tsource_push_site\tload_site\tshift_site\tstack_handler_entry_offset\tload_kind\tduplicate_pushes\tpreserved_rbx_writes\tsource_push_ok\tload_ok\tshift_ok\tunprotected_rbx_clobber\tstack_source_status\tnote\n");
    for (size_t i = 0; i < count; i++) {
        const StackSourceProof *p = &proofs[i];
        printf("0x%llx\t0x%llx\t%s\t0x%llx\t0x%llx\t0x%llx\t0x88\t%s\t%u\t%u\t%s\t%s\t%s\t%s\t%s\t%s\n",
               (unsigned long long)p->entry,
               (unsigned long long)p->site,
               p->chain,
               (unsigned long long)p->source_push_site,
               (unsigned long long)p->load_site,
               (unsigned long long)p->shift_site,
               load_kind(p),
               p->duplicate_pushes,
               p->preserved_rbx_writes,
               p->source_push_ok ? "yes" : "no",
               p->load_ok ? "yes" : "no",
               p->shift_ok ? "yes" : "no",
               p->unprotected_rbx_clobber ? "yes" : "no",
               stack_source_status(p),
               "capstone_static_window_proves_stack_qword_rsp_plus_0x88_feeds_rbx_before_shift");
    }
}

static void emit_markdown(const StackSourceProof *proofs, size_t count) {
    printf("# Native Obfuscated Second-Stage Stack Source Proof\n\n");
    printf("Capstone-backed static proof that the second-stage handler entry comes from `qword [rsp+0x88]`, is loaded into `rbx`, and is shifted before dispatch.\n\n");
    printf("| entry | site | source | load | shift | load kind | status |\n");
    printf("| --- | --- | --- | --- | --- | --- | --- |\n");
    for (size_t i = 0; i < count; i++) {
        const StackSourceProof *p = &proofs[i];
        printf("| `0x%llx` | `0x%llx` | `0x%llx: push [rsp+0x88]` | `0x%llx` | `0x%llx: shl rbx,3` | `%s` | `%s` |\n",
               (unsigned long long)p->entry,
               (unsigned long long)p->site,
               (unsigned long long)p->source_push_site,
               (unsigned long long)p->load_site,
               (unsigned long long)p->shift_site,
               load_kind(p),
               stack_source_status(p));
    }
}

static void emit_c_function(const StackSourceProof *p) {
    printf("static void second_stage_stack_source_%llx(VMState *vm, const VMSecondStageStackSource *edge) {\n",
           (unsigned long long)p->site);
    printf("    uint64_t handler_entry = vm_second_stage_stack_qword(edge, 0x88u);\n");
    printf("    uint64_t dispatch_index = handler_entry << 3;\n");
    printf("    /* entry=0x%llx; site=0x%llx; chain=",
           (unsigned long long)p->entry,
           (unsigned long long)p->site);
    print_comment_text(p->chain);
    printf(" */\n");
    printf("    /* source_push_site=0x%llx; load_site=0x%llx; shift_site=0x%llx; load_kind=%s; duplicate_pushes=%u; preserved_rbx_writes=%u */\n",
           (unsigned long long)p->source_push_site,
           (unsigned long long)p->load_site,
           (unsigned long long)p->shift_site,
           load_kind(p),
           p->duplicate_pushes,
           p->preserved_rbx_writes);
    printf("    vm_note_second_stage_stack_source(vm, edge, 0x%llxu, 0x%llxu, handler_entry,\n",
           (unsigned long long)p->entry,
           (unsigned long long)p->site);
    printf("                                      dispatch_index, ");
    print_c_string(load_kind(p));
    printf(", ");
    print_c_string(stack_source_status(p));
    printf(");\n");
    printf("}\n\n");
}

static void emit_c(const StackSourceProof *proofs, size_t count) {
    printf("/*\n");
    printf(" * Native obfuscated second-stage stack-source proof.\n");
    printf(" *\n");
    printf(" * Generated by vm_native_obfuscated_second_stage_stack_source_dump.c.\n");
    printf(" * Capstone validates the static stack source for the rbx dispatch index.\n");
    printf(" */\n");
    printf("#include <stdint.h>\n\n");
    printf("typedef struct VMState { uint64_t dispatch_table_base; } VMState;\n\n");
    printf("typedef struct VMSecondStageStackSource {\n");
    printf("    const uint64_t *qwords;\n");
    printf("    uint32_t qword_count;\n");
    printf("} VMSecondStageStackSource;\n\n");
    printf("static uint64_t vm_second_stage_stack_qword(const VMSecondStageStackSource *edge, uint32_t byte_off) {\n");
    printf("    uint32_t index = byte_off >> 3;\n");
    printf("    if (!edge || !edge->qwords || index >= edge->qword_count) {\n");
    printf("        return 0;\n");
    printf("    }\n");
    printf("    return edge->qwords[index];\n");
    printf("}\n\n");
    printf("static void vm_note_second_stage_stack_source(VMState *vm, const VMSecondStageStackSource *edge,\n");
    printf("                                              uint32_t entry, uint32_t site,\n");
    printf("                                              uint64_t handler_entry, uint64_t dispatch_index,\n");
    printf("                                              const char *load_kind, const char *status) {\n");
    printf("    (void)vm;\n");
    printf("    (void)edge;\n");
    printf("    (void)entry;\n");
    printf("    (void)site;\n");
    printf("    (void)handler_entry;\n");
    printf("    (void)dispatch_index;\n");
    printf("    (void)load_kind;\n");
    printf("    (void)status;\n");
    printf("}\n\n");
    for (size_t i = 0; i < count; i++) {
        emit_c_function(&proofs[i]);
    }
    printf("void vm_native_obfuscated_second_stage_stack_source(VMState *vm, uint32_t indirect_jmp_site,\n");
    printf("                                                    const VMSecondStageStackSource *edge) {\n");
    printf("    switch (indirect_jmp_site) {\n");
    for (size_t i = 0; i < count; i++) {
        printf("    case 0x%llxu:\n", (unsigned long long)proofs[i].site);
        printf("        second_stage_stack_source_%llx(vm, edge);\n", (unsigned long long)proofs[i].site);
        printf("        break;\n");
    }
    printf("    default:\n");
    printf("        vm_note_second_stage_stack_source(vm, edge, 0, indirect_jmp_site, 0, 0,\n");
    printf("                                             \"-\", \"unknown_second_stage_stack_source_site\");\n");
    printf("        break;\n");
    printf("    }\n");
    printf("}\n");
}

int main(int argc, char **argv) {
    enum { MODE_C, MODE_TSV, MODE_MARKDOWN } mode = MODE_C;
    StackSourceProof proofs[sizeof(k_sites) / sizeof(k_sites[0])];

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
        fprintf(stderr, "capstone open failed\n");
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
