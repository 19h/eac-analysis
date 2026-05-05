#define _GNU_SOURCE
#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FIELDS 96
#define MAX_FAMILIES 64
#define MAX_STEPS 256
#define MAX_RETS 64
#define MAX_TEXT 256

typedef struct {
    char family_id[MAX_TEXT];
    char synthetic_start_vm_ip[MAX_TEXT];
    char missing_successor_vm_ip[MAX_TEXT];
    char source_entry[MAX_TEXT];
    char transfer_path_hash[MAX_TEXT];
    char transfer_branch_unknown[MAX_TEXT];
    char transfer_ip_expr[MAX_TEXT];
    char slot_expr_hash[MAX_TEXT];
    char operand_bytes[MAX_TEXT];
    char footprint_len[MAX_TEXT];
    char zero_seed_status[MAX_TEXT];
    char table_diagnosis[MAX_TEXT];
    char table_offset[MAX_TEXT];
    char table_region[MAX_TEXT];
    char runtime_qword_class[MAX_TEXT];
    char sampled_correlation_class[MAX_TEXT];
    char sampled_target_entries[MAX_TEXT];
    char dynamic_next_source_entry[MAX_TEXT];
    char dynamic_next_source_start_vm_ip[MAX_TEXT];
    char dynamic_next_end_vm_ip[MAX_TEXT];
    char observed_first_hop_target_entry[MAX_TEXT];
    char observed_first_hop_vm_ip[MAX_TEXT];
    char following_residual_start[MAX_TEXT];
    char observed_chain_bridge_class[MAX_TEXT];
    char terminal_dest_vm_ip[MAX_TEXT];
    char terminal_dest_block[MAX_TEXT];
    char terminal_dest_entry[MAX_TEXT];
    char next_reconstruction_target[MAX_TEXT];
} FamilyRow;

typedef struct {
    char chain_start_vm_ip[MAX_TEXT];
    char step_index[MAX_TEXT];
    char step_vm_ip[MAX_TEXT];
    char step_source_entry[MAX_TEXT];
    char step_role[MAX_TEXT];
    char first_hop_kind[MAX_TEXT];
    char first_hop_target_entry[MAX_TEXT];
    char first_hop_slot_offset[MAX_TEXT];
    char first_hop_vm_ip[MAX_TEXT];
    char following_residual_start[MAX_TEXT];
    char table_diagnosis[MAX_TEXT];
    char table_offset[MAX_TEXT];
    char table_region[MAX_TEXT];
    char sampled_correlation_class[MAX_TEXT];
    char dynamic_next_source_entry[MAX_TEXT];
    char dynamic_next_source_start_vm_ip[MAX_TEXT];
    char dynamic_next_end_vm_ip[MAX_TEXT];
    char reconciliation_class[MAX_TEXT];
} StepRow;

typedef struct {
    char source_entry[MAX_TEXT];
    char synthetic_start_vm_ip[MAX_TEXT];
    char ret_slot[MAX_TEXT];
    char patched_ret_eac_off[MAX_TEXT];
    char ret_patch_kind[MAX_TEXT];
    char ret_seen[MAX_TEXT];
    char call_targets[MAX_TEXT];
    char jump_targets[MAX_TEXT];
} RetPatchRow;

static FamilyRow g_families[MAX_FAMILIES];
static size_t g_family_count = 0;
static StepRow g_steps[MAX_STEPS];
static size_t g_step_count = 0;
static RetPatchRow g_rets[MAX_RETS];
static size_t g_ret_count = 0;

static void chomp(char *line) {
    size_t len = strlen(line);
    while (len && (line[len - 1] == '\n' || line[len - 1] == '\r')) {
        line[--len] = '\0';
    }
}

static void copy_field(char *dst, size_t dst_size, const char *src) {
    if (dst_size == 0) {
        return;
    }
    snprintf(dst, dst_size, "%s", src && src[0] ? src : "-");
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

static void print_comment_value(const char *value) {
    if (!value) {
        return;
    }
    for (const char *p = value; *p; p++) {
        if (p[0] == '*' && p[1] == '/') {
            putchar('*');
            putchar(' ');
        } else if ((unsigned char)*p < 0x20 && *p != '\t') {
            putchar(' ');
        } else {
            putchar(*p);
        }
    }
}

static void function_suffix(const char *vm_ip, char *out, size_t out_size) {
    size_t pos = 0;
    const char *cursor = vm_ip;
    if (strncmp(cursor, "0x", 2) == 0) {
        cursor += 2;
    }
    while (*cursor && pos + 1 < out_size) {
        char ch = *cursor++;
        out[pos++] = isalnum((unsigned char)ch) ? ch : '_';
    }
    out[pos] = '\0';
}

static void load_families(const char *path) {
    FILE *file = fopen(path, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count = 0;
    int c_family_id, c_start, c_missing, c_source, c_path_hash, c_branch_unknown;
    int c_ip_expr, c_slot_hash, c_operands, c_footprint, c_zero_status;
    int c_table_diag, c_table_offset, c_table_region, c_runtime_qword;
    int c_sampled_class, c_sampled_targets, c_dyn_entry, c_dyn_start, c_dyn_end;
    int c_first_hop_entry, c_first_hop_ip, c_following, c_bridge_class;
    int c_terminal_ip, c_terminal_block, c_terminal_entry, c_next_target;
    if (!file) {
        perror(path);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", path);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_family_id = find_col(header, header_count, "family_id");
    c_start = find_col(header, header_count, "synthetic_start_vm_ip");
    c_missing = find_col(header, header_count, "missing_successor_vm_ip");
    c_source = find_col(header, header_count, "source_entry");
    c_path_hash = find_col(header, header_count, "transfer_path_hash");
    c_branch_unknown = find_col(header, header_count, "transfer_branch_unknown");
    c_ip_expr = find_col(header, header_count, "transfer_ip_expr");
    c_slot_hash = find_col(header, header_count, "slot_expr_hash");
    c_operands = find_col(header, header_count, "operand_bytes");
    c_footprint = find_col(header, header_count, "footprint_len");
    c_zero_status = find_col(header, header_count, "zero_seed_status");
    c_table_diag = find_col(header, header_count, "table_diagnosis");
    c_table_offset = find_col(header, header_count, "table_offset");
    c_table_region = find_col(header, header_count, "table_region");
    c_runtime_qword = find_col(header, header_count, "runtime_qword_class");
    c_sampled_class = find_col(header, header_count, "sampled_correlation_class");
    c_sampled_targets = find_col(header, header_count, "sampled_target_entries");
    c_dyn_entry = find_col(header, header_count, "dynamic_next_source_entry");
    c_dyn_start = find_col(header, header_count, "dynamic_next_source_start_vm_ip");
    c_dyn_end = find_col(header, header_count, "dynamic_next_end_vm_ip");
    c_first_hop_entry = find_col(header, header_count, "observed_first_hop_target_entry");
    c_first_hop_ip = find_col(header, header_count, "observed_first_hop_vm_ip");
    c_following = find_col(header, header_count, "following_residual_start");
    c_bridge_class = find_col(header, header_count, "observed_chain_bridge_class");
    c_terminal_ip = find_col(header, header_count, "terminal_dest_vm_ip");
    c_terminal_block = find_col(header, header_count, "terminal_dest_block");
    c_terminal_entry = find_col(header, header_count, "terminal_dest_entry");
    c_next_target = find_col(header, header_count, "next_reconstruction_target");
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count = 0;
        FamilyRow *row = NULL;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        if (g_family_count >= MAX_FAMILIES) {
            fprintf(stderr, "too many unresolved family rows\n");
            exit(1);
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = &g_families[g_family_count++];
        copy_field(row->family_id, sizeof(row->family_id), field_at(fields, count, c_family_id));
        copy_field(row->synthetic_start_vm_ip, sizeof(row->synthetic_start_vm_ip), field_at(fields, count, c_start));
        copy_field(row->missing_successor_vm_ip, sizeof(row->missing_successor_vm_ip), field_at(fields, count, c_missing));
        copy_field(row->source_entry, sizeof(row->source_entry), field_at(fields, count, c_source));
        copy_field(row->transfer_path_hash, sizeof(row->transfer_path_hash), field_at(fields, count, c_path_hash));
        copy_field(row->transfer_branch_unknown, sizeof(row->transfer_branch_unknown), field_at(fields, count, c_branch_unknown));
        copy_field(row->transfer_ip_expr, sizeof(row->transfer_ip_expr), field_at(fields, count, c_ip_expr));
        copy_field(row->slot_expr_hash, sizeof(row->slot_expr_hash), field_at(fields, count, c_slot_hash));
        copy_field(row->operand_bytes, sizeof(row->operand_bytes), field_at(fields, count, c_operands));
        copy_field(row->footprint_len, sizeof(row->footprint_len), field_at(fields, count, c_footprint));
        copy_field(row->zero_seed_status, sizeof(row->zero_seed_status), field_at(fields, count, c_zero_status));
        copy_field(row->table_diagnosis, sizeof(row->table_diagnosis), field_at(fields, count, c_table_diag));
        copy_field(row->table_offset, sizeof(row->table_offset), field_at(fields, count, c_table_offset));
        copy_field(row->table_region, sizeof(row->table_region), field_at(fields, count, c_table_region));
        copy_field(row->runtime_qword_class, sizeof(row->runtime_qword_class), field_at(fields, count, c_runtime_qword));
        copy_field(row->sampled_correlation_class, sizeof(row->sampled_correlation_class), field_at(fields, count, c_sampled_class));
        copy_field(row->sampled_target_entries, sizeof(row->sampled_target_entries), field_at(fields, count, c_sampled_targets));
        copy_field(row->dynamic_next_source_entry, sizeof(row->dynamic_next_source_entry), field_at(fields, count, c_dyn_entry));
        copy_field(row->dynamic_next_source_start_vm_ip, sizeof(row->dynamic_next_source_start_vm_ip), field_at(fields, count, c_dyn_start));
        copy_field(row->dynamic_next_end_vm_ip, sizeof(row->dynamic_next_end_vm_ip), field_at(fields, count, c_dyn_end));
        copy_field(row->observed_first_hop_target_entry, sizeof(row->observed_first_hop_target_entry), field_at(fields, count, c_first_hop_entry));
        copy_field(row->observed_first_hop_vm_ip, sizeof(row->observed_first_hop_vm_ip), field_at(fields, count, c_first_hop_ip));
        copy_field(row->following_residual_start, sizeof(row->following_residual_start), field_at(fields, count, c_following));
        copy_field(row->observed_chain_bridge_class, sizeof(row->observed_chain_bridge_class), field_at(fields, count, c_bridge_class));
        copy_field(row->terminal_dest_vm_ip, sizeof(row->terminal_dest_vm_ip), field_at(fields, count, c_terminal_ip));
        copy_field(row->terminal_dest_block, sizeof(row->terminal_dest_block), field_at(fields, count, c_terminal_block));
        copy_field(row->terminal_dest_entry, sizeof(row->terminal_dest_entry), field_at(fields, count, c_terminal_entry));
        copy_field(row->next_reconstruction_target, sizeof(row->next_reconstruction_target), field_at(fields, count, c_next_target));
    }
    free(line);
    fclose(file);
}

static void load_steps(const char *path) {
    FILE *file = fopen(path, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count = 0;
    int c_chain_start, c_step_index, c_step_ip, c_step_source, c_step_role;
    int c_hop_kind, c_hop_entry, c_hop_slot, c_hop_ip, c_following;
    int c_table_diag, c_table_offset, c_table_region, c_sampled_class;
    int c_dyn_entry, c_dyn_start, c_dyn_end, c_reconciliation;
    if (!file) {
        perror(path);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", path);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_chain_start = find_col(header, header_count, "chain_start_vm_ip");
    c_step_index = find_col(header, header_count, "step_index");
    c_step_ip = find_col(header, header_count, "step_vm_ip");
    c_step_source = find_col(header, header_count, "step_source_entry");
    c_step_role = find_col(header, header_count, "step_role");
    c_hop_kind = find_col(header, header_count, "first_hop_kind");
    c_hop_entry = find_col(header, header_count, "first_hop_target_entry");
    c_hop_slot = find_col(header, header_count, "first_hop_slot_offset");
    c_hop_ip = find_col(header, header_count, "first_hop_vm_ip");
    c_following = find_col(header, header_count, "following_residual_start");
    c_table_diag = find_col(header, header_count, "table_diagnosis");
    c_table_offset = find_col(header, header_count, "table_offset");
    c_table_region = find_col(header, header_count, "table_region");
    c_sampled_class = find_col(header, header_count, "sampled_correlation_class");
    c_dyn_entry = find_col(header, header_count, "dynamic_next_source_entry");
    c_dyn_start = find_col(header, header_count, "dynamic_next_source_start_vm_ip");
    c_dyn_end = find_col(header, header_count, "dynamic_next_end_vm_ip");
    c_reconciliation = find_col(header, header_count, "reconciliation_class");
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count = 0;
        StepRow *row = NULL;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        if (g_step_count >= MAX_STEPS) {
            fprintf(stderr, "too many chain reconciliation rows\n");
            exit(1);
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = &g_steps[g_step_count++];
        copy_field(row->chain_start_vm_ip, sizeof(row->chain_start_vm_ip), field_at(fields, count, c_chain_start));
        copy_field(row->step_index, sizeof(row->step_index), field_at(fields, count, c_step_index));
        copy_field(row->step_vm_ip, sizeof(row->step_vm_ip), field_at(fields, count, c_step_ip));
        copy_field(row->step_source_entry, sizeof(row->step_source_entry), field_at(fields, count, c_step_source));
        copy_field(row->step_role, sizeof(row->step_role), field_at(fields, count, c_step_role));
        copy_field(row->first_hop_kind, sizeof(row->first_hop_kind), field_at(fields, count, c_hop_kind));
        copy_field(row->first_hop_target_entry, sizeof(row->first_hop_target_entry), field_at(fields, count, c_hop_entry));
        copy_field(row->first_hop_slot_offset, sizeof(row->first_hop_slot_offset), field_at(fields, count, c_hop_slot));
        copy_field(row->first_hop_vm_ip, sizeof(row->first_hop_vm_ip), field_at(fields, count, c_hop_ip));
        copy_field(row->following_residual_start, sizeof(row->following_residual_start), field_at(fields, count, c_following));
        copy_field(row->table_diagnosis, sizeof(row->table_diagnosis), field_at(fields, count, c_table_diag));
        copy_field(row->table_offset, sizeof(row->table_offset), field_at(fields, count, c_table_offset));
        copy_field(row->table_region, sizeof(row->table_region), field_at(fields, count, c_table_region));
        copy_field(row->sampled_correlation_class, sizeof(row->sampled_correlation_class), field_at(fields, count, c_sampled_class));
        copy_field(row->dynamic_next_source_entry, sizeof(row->dynamic_next_source_entry), field_at(fields, count, c_dyn_entry));
        copy_field(row->dynamic_next_source_start_vm_ip, sizeof(row->dynamic_next_source_start_vm_ip), field_at(fields, count, c_dyn_start));
        copy_field(row->dynamic_next_end_vm_ip, sizeof(row->dynamic_next_end_vm_ip), field_at(fields, count, c_dyn_end));
        copy_field(row->reconciliation_class, sizeof(row->reconciliation_class), field_at(fields, count, c_reconciliation));
    }
    free(line);
    fclose(file);
}

static void load_retpatch(const char *path) {
    FILE *file = fopen(path, "r");
    char *line = NULL;
    size_t cap = 0;
    char *header[MAX_FIELDS];
    int header_count = 0;
    int c_source, c_start, c_slot, c_target, c_kind, c_ret_seen, c_calls, c_jumps;
    if (!file) {
        perror(path);
        exit(1);
    }
    if (getline(&line, &cap, file) < 0) {
        fprintf(stderr, "%s: missing header\n", path);
        exit(1);
    }
    chomp(line);
    header_count = split_tsv(line, header, MAX_FIELDS);
    c_source = find_col(header, header_count, "source_entry");
    c_start = find_col(header, header_count, "synthetic_start_vm_ip");
    c_slot = find_col(header, header_count, "ret_slot");
    c_target = find_col(header, header_count, "patched_ret_eac_off");
    c_kind = find_col(header, header_count, "ret_patch_kind");
    c_ret_seen = find_col(header, header_count, "ret_seen");
    c_calls = find_col(header, header_count, "call_targets");
    c_jumps = find_col(header, header_count, "jump_targets");
    while (getline(&line, &cap, file) >= 0) {
        char *fields[MAX_FIELDS];
        int count = 0;
        RetPatchRow *row = NULL;
        chomp(line);
        if (!line[0]) {
            continue;
        }
        if (g_ret_count >= MAX_RETS) {
            fprintf(stderr, "too many ret-patch atlas rows\n");
            exit(1);
        }
        count = split_tsv(line, fields, MAX_FIELDS);
        row = &g_rets[g_ret_count++];
        copy_field(row->source_entry, sizeof(row->source_entry), field_at(fields, count, c_source));
        copy_field(row->synthetic_start_vm_ip, sizeof(row->synthetic_start_vm_ip), field_at(fields, count, c_start));
        copy_field(row->ret_slot, sizeof(row->ret_slot), field_at(fields, count, c_slot));
        copy_field(row->patched_ret_eac_off, sizeof(row->patched_ret_eac_off), field_at(fields, count, c_target));
        copy_field(row->ret_patch_kind, sizeof(row->ret_patch_kind), field_at(fields, count, c_kind));
        copy_field(row->ret_seen, sizeof(row->ret_seen), field_at(fields, count, c_ret_seen));
        copy_field(row->call_targets, sizeof(row->call_targets), field_at(fields, count, c_calls));
        copy_field(row->jump_targets, sizeof(row->jump_targets), field_at(fields, count, c_jumps));
    }
    free(line);
    fclose(file);
}

static bool ret_matches_family(const RetPatchRow *ret, const FamilyRow *family) {
    return strcmp(ret->source_entry, family->source_entry) == 0 &&
           strcmp(ret->synthetic_start_vm_ip, family->synthetic_start_vm_ip) == 0;
}

static bool step_matches_family(const StepRow *step, const FamilyRow *family) {
    return strcmp(step->chain_start_vm_ip, family->synthetic_start_vm_ip) == 0;
}

static void print_header(void) {
    printf("/*\n");
    printf(" * C-shaped evidence for residual synthetic successor families.\n");
    printf(" *\n");
    printf(" * This file is generated by vm_unresolved_family_chains_dump.c from the\n");
    printf(" * unresolved-family audit, observed-chain slot reconciliation, and native\n");
    printf(" * return-patch target atlas. It is intentionally conservative: calls below\n");
    printf(" * are evidence records, not hard VM CFG promotions.\n");
    printf(" */\n");
    printf("#include <stdbool.h>\n");
    printf("#include <stdint.h>\n\n");
    printf("typedef struct VMState {\n");
    printf("    uint64_t ip;\n");
    printf("} VMState;\n\n");
    printf("static void evidence_native_ret_patch(VMState *vm, uint32_t source_entry, uint64_t start_vm_ip, const char *ret_slot, uint64_t native_text_off) {\n");
    printf("    (void)vm; (void)source_entry; (void)start_vm_ip; (void)ret_slot; (void)native_text_off;\n");
    printf("}\n\n");
    printf("static void evidence_chain_step(VMState *vm, uint64_t chain_start, uint32_t step_index, uint64_t step_vm_ip, uint32_t source_entry, uint32_t first_hop_entry, uint64_t first_hop_vm_ip) {\n");
    printf("    (void)vm; (void)chain_start; (void)step_index; (void)step_vm_ip; (void)source_entry; (void)first_hop_entry; (void)first_hop_vm_ip;\n");
    printf("}\n\n");
    printf("static void evidence_terminal(VMState *vm, uint64_t terminal_vm_ip, uint32_t terminal_entry) {\n");
    printf("    (void)vm; (void)terminal_vm_ip; (void)terminal_entry;\n");
    printf("}\n\n");
    for (size_t i = 0; i < g_family_count; i++) {
        char suffix[MAX_TEXT];
        function_suffix(g_families[i].synthetic_start_vm_ip, suffix, sizeof(suffix));
        printf("static void residual_start_%s(VMState *vm);\n", suffix);
    }
    printf("\n");
}

static void print_family_function(const FamilyRow *family) {
    char suffix[MAX_TEXT];
    size_t ret_count = 0;
    size_t step_count = 0;
    function_suffix(family->synthetic_start_vm_ip, suffix, sizeof(suffix));
    printf("static void residual_start_%s(VMState *vm) {\n", suffix);
    printf("    /* family=");
    print_comment_value(family->family_id);
    printf(" source_entry=");
    print_comment_value(family->source_entry);
    printf(" start=");
    print_comment_value(family->synthetic_start_vm_ip);
    printf(" missing_successor=");
    print_comment_value(family->missing_successor_vm_ip);
    printf(" */\n");
    printf("    /* transfer_path_hash=");
    print_comment_value(family->transfer_path_hash);
    printf(" branch_unknown=");
    print_comment_value(family->transfer_branch_unknown);
    printf(" ip_expr=");
    print_comment_value(family->transfer_ip_expr);
    printf(" slot_expr_hash=");
    print_comment_value(family->slot_expr_hash);
    printf(" operands=");
    print_comment_value(family->operand_bytes);
    printf(" footprint=");
    print_comment_value(family->footprint_len);
    printf(" */\n");
    printf("    /* table=");
    print_comment_value(family->table_diagnosis);
    printf(" offset=");
    print_comment_value(family->table_offset);
    printf(" region=");
    print_comment_value(family->table_region);
    printf(" runtime_qword=");
    print_comment_value(family->runtime_qword_class);
    printf(" zero_seed=");
    print_comment_value(family->zero_seed_status);
    printf(" */\n");
    printf("    /* sampled=");
    print_comment_value(family->sampled_correlation_class);
    printf(" sampled_targets=");
    print_comment_value(family->sampled_target_entries);
    printf(" observed_bridge=");
    print_comment_value(family->observed_chain_bridge_class);
    printf(" next_target=");
    print_comment_value(family->next_reconstruction_target);
    printf(" */\n");
    for (size_t i = 0; i < g_ret_count; i++) {
        const RetPatchRow *ret = &g_rets[i];
        if (!ret_matches_family(ret, family)) {
            continue;
        }
        printf("    /* native ret-patch kind=");
        print_comment_value(ret->ret_patch_kind);
        printf(" ret_seen=");
        print_comment_value(ret->ret_seen);
        printf(" call_targets=");
        print_comment_value(ret->call_targets);
        printf(" jump_targets=");
        print_comment_value(ret->jump_targets);
        printf(" */\n");
        printf("    evidence_native_ret_patch(vm, %lluu, 0x%llxull, \"%s\", 0x%llxull);\n",
               (unsigned long long)parse_number(ret->source_entry),
               (unsigned long long)parse_number(ret->synthetic_start_vm_ip),
               ret->ret_slot,
               (unsigned long long)parse_number(ret->patched_ret_eac_off));
        ret_count++;
    }
    for (size_t i = 0; i < g_step_count; i++) {
        const StepRow *step = &g_steps[i];
        if (!step_matches_family(step, family)) {
            continue;
        }
        printf("    /* step_role=");
        print_comment_value(step->step_role);
        printf(" hop_kind=");
        print_comment_value(step->first_hop_kind);
        printf(" slot=");
        print_comment_value(step->first_hop_slot_offset);
        printf(" table=");
        print_comment_value(step->table_diagnosis);
        printf(" table_offset=");
        print_comment_value(step->table_offset);
        printf(" reconciliation=");
        print_comment_value(step->reconciliation_class);
        printf(" */\n");
        printf("    evidence_chain_step(vm, 0x%llxull, %lluu, 0x%llxull, %lluu, %lluu, 0x%llxull);\n",
               (unsigned long long)parse_number(step->chain_start_vm_ip),
               (unsigned long long)parse_number(step->step_index),
               (unsigned long long)parse_number(step->step_vm_ip),
               (unsigned long long)parse_number(step->step_source_entry),
               (unsigned long long)parse_number(step->first_hop_target_entry),
               (unsigned long long)parse_number(step->first_hop_vm_ip));
        step_count++;
    }
    printf("    /* dynamic_next source=");
    print_comment_value(family->dynamic_next_source_entry);
    printf(" start=");
    print_comment_value(family->dynamic_next_source_start_vm_ip);
    printf(" end=");
    print_comment_value(family->dynamic_next_end_vm_ip);
    printf(" focused_first_hop_entry=");
    print_comment_value(family->observed_first_hop_target_entry);
    printf(" focused_first_hop_ip=");
    print_comment_value(family->observed_first_hop_vm_ip);
    printf(" following_residual=");
    print_comment_value(family->following_residual_start);
    printf(" */\n");
    printf("    evidence_terminal(vm, 0x%llxull, %lluu);\n",
           (unsigned long long)parse_number(family->terminal_dest_vm_ip),
           (unsigned long long)parse_number(family->terminal_dest_entry));
    printf("    /* ret_patch_records=%zu observed_chain_steps=%zu terminal_block=", ret_count, step_count);
    print_comment_value(family->terminal_dest_block);
    printf(" */\n");
    printf("}\n\n");
}

static void print_dispatcher(void) {
    printf("void vm_unresolved_family_chain_evidence(VMState *vm, uint64_t start_vm_ip) {\n");
    printf("    switch (start_vm_ip) {\n");
    for (size_t i = 0; i < g_family_count; i++) {
        char suffix[MAX_TEXT];
        function_suffix(g_families[i].synthetic_start_vm_ip, suffix, sizeof(suffix));
        printf("    case 0x%llxull:\n", (unsigned long long)parse_number(g_families[i].synthetic_start_vm_ip));
        printf("        residual_start_%s(vm);\n", suffix);
        printf("        return;\n");
    }
    printf("    default:\n");
    printf("        return;\n");
    printf("    }\n");
    printf("}\n");
}

int main(int argc, char **argv) {
    const char *family_path = "dumps/vmtail-wide-1m-w16/vm_synthetic_gap_unresolved_family_audit.tsv";
    const char *steps_path = "dumps/vmtail-wide-1m-w16/vm_synthetic_gap_chain_slot_reconciliation.tsv";
    const char *retpatch_path = "dumps/vmtail-wide-1m-w16/vm_synthetic_gap_ret_patch_native_target_atlas.tsv";
    if (argc != 1) {
        fprintf(stderr, "usage: %s\n", argv[0]);
        return 2;
    }
    load_families(family_path);
    load_steps(steps_path);
    load_retpatch(retpatch_path);
    print_header();
    for (size_t i = 0; i < g_family_count; i++) {
        print_family_function(&g_families[i]);
    }
    print_dispatcher();
    fprintf(stderr, "unresolved_family_chain_functions=%zu\n", g_family_count);
    fprintf(stderr, "unresolved_family_chain_steps=%zu\n", g_step_count);
    fprintf(stderr, "unresolved_family_chain_retpatch_records=%zu\n", g_ret_count);
    return 0;
}
