#include <elf.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EAC_PATH "eac.elf"
#define MAX_SECTIONS 128
#define DISPATCH_TABLE_FILE_OFFSET 0xc3718u
#define DISPATCH_TABLE_ENTRIES 360u
#define DISPATCH_TABLE_ENTRY_SIZE 8u

typedef struct SectionInfo {
    unsigned index;
    const char *name;
    uint32_t type;
    uint64_t flags;
    uint64_t addr;
    uint64_t offset;
    uint64_t size;
    uint64_t entsize;
    bool alloc;
    bool writable;
    bool executable;
    bool nobits;
    char symbol[96];
} SectionInfo;

typedef struct Image {
    unsigned char *data;
    size_t size;
    Elf64_Ehdr *ehdr;
    Elf64_Shdr *shdrs;
    const char *shstr;
    SectionInfo sections[MAX_SECTIONS];
    size_t section_count;
} Image;

static unsigned char *read_file(const char *path, size_t *size_out) {
    FILE *file = fopen(path, "rb");
    long size;
    unsigned char *data;
    if (!file) {
        perror(path);
        exit(1);
    }
    if (fseek(file, 0, SEEK_END) != 0) {
        perror("fseek");
        exit(1);
    }
    size = ftell(file);
    if (size < 0) {
        perror("ftell");
        exit(1);
    }
    if (fseek(file, 0, SEEK_SET) != 0) {
        perror("fseek");
        exit(1);
    }
    data = (unsigned char *)malloc((size_t)size);
    if (!data) {
        fprintf(stderr, "malloc failed for %ld bytes\n", size);
        exit(1);
    }
    if (fread(data, 1, (size_t)size, file) != (size_t)size) {
        fprintf(stderr, "%s: short read\n", path);
        exit(1);
    }
    fclose(file);
    *size_out = (size_t)size;
    return data;
}

static void sanitize_symbol(char *out, size_t size, unsigned index, const char *name) {
    size_t pos = (size_t)snprintf(out, size, "vm_eac_section_%02u", index);
    if (pos >= size) {
        out[size - 1] = '\0';
        return;
    }
    for (const unsigned char *p = (const unsigned char *)name; *p && pos + 1 < size; p++) {
        unsigned char ch = *p;
        out[pos++] = ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
                      (ch >= '0' && ch <= '9')) ? (char)ch : '_';
    }
    out[pos] = '\0';
}

static bool emit_section_data(const SectionInfo *section) {
    if (!section->alloc || section->executable || section->nobits || section->size == 0) {
        return false;
    }
    return true;
}

static bool section_string_scan_enabled(const SectionInfo *section) {
    return strcmp(section->name, ".rodata") == 0 ||
           strcmp(section->name, ".dynstr") == 0 ||
           strcmp(section->name, ".data") == 0 ||
           strcmp(section->name, ".data.rel.ro") == 0;
}

static bool printable(unsigned char ch) {
    return ch >= 0x20 && ch <= 0x7e;
}

static void load_image(Image *image) {
    memset(image, 0, sizeof(*image));
    image->data = read_file(EAC_PATH, &image->size);
    if (image->size < sizeof(Elf64_Ehdr)) {
        fprintf(stderr, "%s: too small for ELF header\n", EAC_PATH);
        exit(1);
    }
    image->ehdr = (Elf64_Ehdr *)image->data;
    if (memcmp(image->ehdr->e_ident, ELFMAG, SELFMAG) != 0 ||
        image->ehdr->e_ident[EI_CLASS] != ELFCLASS64 ||
        image->ehdr->e_ident[EI_DATA] != ELFDATA2LSB) {
        fprintf(stderr, "%s: expected little-endian ELF64\n", EAC_PATH);
        exit(1);
    }
    if ((uint64_t)image->ehdr->e_shoff + (uint64_t)image->ehdr->e_shnum * sizeof(Elf64_Shdr) > image->size) {
        fprintf(stderr, "%s: section headers outside file\n", EAC_PATH);
        exit(1);
    }
    image->shdrs = (Elf64_Shdr *)(image->data + image->ehdr->e_shoff);
    if (image->ehdr->e_shstrndx >= image->ehdr->e_shnum) {
        fprintf(stderr, "%s: invalid shstr index\n", EAC_PATH);
        exit(1);
    }
    Elf64_Shdr *shstr = &image->shdrs[image->ehdr->e_shstrndx];
    if (shstr->sh_offset + shstr->sh_size > image->size) {
        fprintf(stderr, "%s: shstr outside file\n", EAC_PATH);
        exit(1);
    }
    image->shstr = (const char *)(image->data + shstr->sh_offset);

    for (unsigned i = 0; i < image->ehdr->e_shnum; i++) {
        const Elf64_Shdr *sh = &image->shdrs[i];
        const char *name = sh->sh_name < shstr->sh_size ? image->shstr + sh->sh_name : "";
        SectionInfo *section;
        if (!(sh->sh_flags & SHF_ALLOC) || !name[0]) {
            continue;
        }
        if (image->section_count >= MAX_SECTIONS) {
            fprintf(stderr, "too many emitted sections\n");
            exit(1);
        }
        section = &image->sections[image->section_count++];
        memset(section, 0, sizeof(*section));
        section->index = i;
        section->name = name;
        section->type = sh->sh_type;
        section->flags = sh->sh_flags;
        section->addr = sh->sh_addr;
        section->offset = sh->sh_offset;
        section->size = sh->sh_size;
        section->entsize = sh->sh_entsize;
        section->alloc = (sh->sh_flags & SHF_ALLOC) != 0;
        section->writable = (sh->sh_flags & SHF_WRITE) != 0;
        section->executable = (sh->sh_flags & SHF_EXECINSTR) != 0;
        section->nobits = sh->sh_type == SHT_NOBITS;
        sanitize_symbol(section->symbol, sizeof(section->symbol), i, name);
        if (!section->nobits && section->offset + section->size > image->size) {
            fprintf(stderr, "%s: section %s outside file\n", EAC_PATH, name);
            exit(1);
        }
    }
}

static void print_c_string(const char *text) {
    putchar('"');
    for (const unsigned char *p = (const unsigned char *)text; *p; p++) {
        if (*p == '\\' || *p == '"') {
            putchar('\\');
            putchar(*p);
        } else if (*p == '\n') {
            fputs("\\n", stdout);
        } else if (*p == '\t') {
            fputs("\\t", stdout);
        } else if (*p < 32 || *p >= 127) {
            printf("\\x%02x", *p);
        } else {
            putchar(*p);
        }
    }
    putchar('"');
}

static void print_tsv_text(const unsigned char *data, size_t len, size_t max_len) {
    size_t n = len < max_len ? len : max_len;
    for (size_t i = 0; i < n; i++) {
        unsigned char ch = data[i];
        if (ch == '\t') {
            fputs("\\t", stdout);
        } else if (ch == '\n') {
            fputs("\\n", stdout);
        } else if (ch == '\r') {
            fputs("\\r", stdout);
        } else if (ch == '\\') {
            fputs("\\\\", stdout);
        } else if (printable(ch)) {
            putchar(ch);
        } else {
            printf("\\x%02x", ch);
        }
    }
    if (len > max_len) {
        fputs("...", stdout);
    }
}

static void print_c_bytes(const unsigned char *data, uint64_t size) {
    for (uint64_t i = 0; i < size; i++) {
        if (i % 12 == 0) {
            fputs("    ", stdout);
        }
        printf("0x%02x", data[i]);
        if (i + 1 != size) {
            fputs(", ", stdout);
        }
        if (i % 12 == 11 || i + 1 == size) {
            putchar('\n');
        }
    }
}

static void emit_string_ref_c(size_t section_slot, const SectionInfo *section, uint64_t string_off,
                              const unsigned char *data, size_t len) {
    printf("    { %zu, 0x%llxull, 0x%llxull, %zu, %s + 0x%llxull, ",
           section_slot,
           (unsigned long long)string_off,
           (unsigned long long)(section->addr + string_off),
           len,
           section->symbol,
           (unsigned long long)string_off);
    char *text = (char *)malloc(len + 1);
    if (!text) {
        fprintf(stderr, "malloc failed for string ref length %zu\n", len);
        exit(1);
    }
    memcpy(text, data, len);
    text[len] = '\0';
    print_c_string(text);
    free(text);
    puts(" },");
}

static size_t count_strings(const Image *image) {
    size_t count = 0;
    for (size_t i = 0; i < image->section_count; i++) {
        const SectionInfo *section = &image->sections[i];
        if (!emit_section_data(section) || !section_string_scan_enabled(section)) {
            continue;
        }
        const unsigned char *data = image->data + section->offset;
        uint64_t pos = 0;
        while (pos < section->size) {
            while (pos < section->size && !printable(data[pos])) {
                pos++;
            }
            uint64_t start = pos;
            while (pos < section->size && printable(data[pos])) {
                pos++;
            }
            if (pos - start >= 4) {
                count++;
            }
        }
    }
    return count;
}

static uint64_t count_string_bytes(const Image *image) {
    uint64_t total = 0;
    for (size_t i = 0; i < image->section_count; i++) {
        const SectionInfo *section = &image->sections[i];
        if (!emit_section_data(section) || !section_string_scan_enabled(section)) {
            continue;
        }
        const unsigned char *data = image->data + section->offset;
        uint64_t pos = 0;
        while (pos < section->size) {
            while (pos < section->size && !printable(data[pos])) {
                pos++;
            }
            uint64_t start = pos;
            while (pos < section->size && printable(data[pos])) {
                pos++;
            }
            if (pos - start >= 4) {
                total += pos - start;
            }
        }
    }
    return total;
}

static void emit_c(const Image *image) {
    size_t emitted_data_sections = 0;
    size_t string_count = count_strings(image);
    uint64_t string_bytes = count_string_bytes(image);
    puts("/*");
    puts(" * Binary data sections and string/data carrier for eac.elf.");
    puts(" *");
    puts(" * This preserves allocatable non-executable ELF section bytes plus");
    puts(" * the VM dispatch table embedded in .text, so the all-evidence C");
    puts(" * artifact carries program data as well as reconstructed code.");
    puts(" * String rows carry full escaped text and a pointer into the exact");
    puts(" * backing section byte array, not just a shortened preview.");
    puts(" */");
    puts("#include <stdint.h>");
    puts("#include <stddef.h>");
    puts("");
    puts("typedef struct VMBinaryDataSection {");
    puts("    const char *name;");
    puts("    uint16_t section_index;");
    puts("    uint32_t type;");
    puts("    uint64_t flags;");
    puts("    uint64_t vaddr;");
    puts("    uint64_t file_offset;");
    puts("    uint64_t size;");
    puts("    uint64_t entsize;");
    puts("    const uint8_t *bytes;");
    puts("} VMBinaryDataSection;");
    puts("");
    puts("typedef struct VMBinaryStringRef {");
    puts("    uint16_t data_section_index;");
    puts("    uint64_t section_offset;");
    puts("    uint64_t vaddr;");
    puts("    uint64_t length;");
    puts("    const uint8_t *bytes;");
    puts("    const char *text;");
    puts("} VMBinaryStringRef;");
    puts("");

    for (size_t i = 0; i < image->section_count; i++) {
        const SectionInfo *section = &image->sections[i];
        if (!emit_section_data(section)) {
            continue;
        }
        printf("static const uint8_t %s[%llu] = {\n",
               section->symbol, (unsigned long long)section->size);
        print_c_bytes(image->data + section->offset, section->size);
        puts("};");
        puts("");
        emitted_data_sections++;
    }

    if ((uint64_t)DISPATCH_TABLE_FILE_OFFSET + DISPATCH_TABLE_ENTRIES * DISPATCH_TABLE_ENTRY_SIZE <= image->size) {
        const unsigned char *table = image->data + DISPATCH_TABLE_FILE_OFFSET;
        puts("static const uint8_t vm_eac_dispatch_table_raw_bytes[2880] = {");
        print_c_bytes(table, DISPATCH_TABLE_ENTRIES * DISPATCH_TABLE_ENTRY_SIZE);
        puts("};");
        puts("");
        puts("static const uint64_t vm_eac_dispatch_table_raw_offsets[360] = {");
        for (unsigned i = 0; i < DISPATCH_TABLE_ENTRIES; i++) {
            const unsigned char *p = table + i * DISPATCH_TABLE_ENTRY_SIZE;
            uint64_t value = 0;
            for (unsigned j = 0; j < 8; j++) {
                value |= (uint64_t)p[j] << (8u * j);
            }
            if (i % 4 == 0) {
                fputs("    ", stdout);
            }
            printf("0x%llxull", (unsigned long long)value);
            if (i + 1 != DISPATCH_TABLE_ENTRIES) {
                fputs(", ", stdout);
            }
            if (i % 4 == 3 || i + 1 == DISPATCH_TABLE_ENTRIES) {
                putchar('\n');
            }
        }
        puts("};");
        puts("");
        puts("_Static_assert(sizeof(vm_eac_dispatch_table_raw_offsets) / sizeof(vm_eac_dispatch_table_raw_offsets[0]) == 360,");
        puts("               \"all VM dispatch-table entries are carried\");");
        puts("");
    }

    printf("enum { VM_BINARY_DATA_SECTION_COUNT = %zu };\n", image->section_count);
    printf("enum { VM_BINARY_EMITTED_DATA_SECTION_COUNT = %zu };\n", emitted_data_sections);
    printf("enum { VM_BINARY_STRING_REF_COUNT = %zu };\n", string_count);
    printf("enum { VM_BINARY_STRING_BYTE_COUNT = %llu };\n", (unsigned long long)string_bytes);
    puts("");

    puts("static const VMBinaryDataSection k_vm_binary_data_sections[] = {");
    for (size_t i = 0; i < image->section_count; i++) {
        const SectionInfo *section = &image->sections[i];
        printf("    { ");
        print_c_string(section->name);
        printf(", %u, %u, 0x%llxull, 0x%llxull, 0x%llxull, 0x%llxull, 0x%llxull, ",
               section->index,
               section->type,
               (unsigned long long)section->flags,
               (unsigned long long)section->addr,
               (unsigned long long)section->offset,
               (unsigned long long)section->size,
               (unsigned long long)section->entsize);
        if (emit_section_data(section)) {
            fputs(section->symbol, stdout);
        } else {
            fputs("NULL", stdout);
        }
        puts(" },");
    }
    puts("};");
    puts("");
    puts("_Static_assert(sizeof(k_vm_binary_data_sections) / sizeof(k_vm_binary_data_sections[0]) == VM_BINARY_DATA_SECTION_COUNT,");
    puts("               \"all allocatable ELF sections are indexed\");");
    puts("");
    puts("static const size_t k_vm_binary_data_section_count = VM_BINARY_DATA_SECTION_COUNT;");
    puts("static const size_t k_vm_binary_emitted_data_section_count = VM_BINARY_EMITTED_DATA_SECTION_COUNT;");
    puts("static const size_t k_vm_binary_string_ref_count = VM_BINARY_STRING_REF_COUNT;");
    puts("static const size_t k_vm_binary_string_byte_count = VM_BINARY_STRING_BYTE_COUNT;");
    puts("");
    puts("static const VMBinaryStringRef k_vm_binary_string_refs[] = {");
    for (size_t i = 0; i < image->section_count; i++) {
        const SectionInfo *section = &image->sections[i];
        if (!emit_section_data(section) || !section_string_scan_enabled(section)) {
            continue;
        }
        const unsigned char *data = image->data + section->offset;
        uint64_t pos = 0;
        while (pos < section->size) {
            while (pos < section->size && !printable(data[pos])) {
                pos++;
            }
            uint64_t start = pos;
            while (pos < section->size && printable(data[pos])) {
                pos++;
            }
            if (pos - start >= 4) {
                emit_string_ref_c(i, section, start, data + start, (size_t)(pos - start));
            }
        }
    }
    puts("};");
    puts("");
    puts("_Static_assert(sizeof(k_vm_binary_string_refs) / sizeof(k_vm_binary_string_refs[0]) == VM_BINARY_STRING_REF_COUNT,");
    puts("               \"all indexed runtime strings are carried with full text and backing bytes\");");
}

static void emit_tsv(const Image *image) {
    puts("kind\tsection_index\tname\tvaddr\tfile_offset\tsize\ttype\tflags\temitted_data\twritable\texecutable\tnobits\ttext");
    for (size_t i = 0; i < image->section_count; i++) {
        const SectionInfo *section = &image->sections[i];
        printf("section\t%u\t%s\t0x%llx\t0x%llx\t0x%llx\t%u\t0x%llx\t%s\t%s\t%s\t%s\t\n",
               section->index,
               section->name,
               (unsigned long long)section->addr,
               (unsigned long long)section->offset,
               (unsigned long long)section->size,
               section->type,
               (unsigned long long)section->flags,
               emit_section_data(section) ? "yes" : "no",
               section->writable ? "yes" : "no",
               section->executable ? "yes" : "no",
               section->nobits ? "yes" : "no");
    }
    printf("dispatch_table\t-\tvm_dispatch_table_raw\t0x0\t0x%x\t0x%x\t-\t-\tyes\tno\tyes\tno\t360 raw qword offsets from embedded .text table\n",
           DISPATCH_TABLE_FILE_OFFSET, DISPATCH_TABLE_ENTRIES * DISPATCH_TABLE_ENTRY_SIZE);
    for (size_t i = 0; i < image->section_count; i++) {
        const SectionInfo *section = &image->sections[i];
        if (!emit_section_data(section) || !section_string_scan_enabled(section)) {
            continue;
        }
        const unsigned char *data = image->data + section->offset;
        uint64_t pos = 0;
        while (pos < section->size) {
            while (pos < section->size && !printable(data[pos])) {
                pos++;
            }
            uint64_t start = pos;
            while (pos < section->size && printable(data[pos])) {
                pos++;
            }
            if (pos - start >= 4) {
                printf("string\t%u\t%s\t0x%llx\t0x%llx\t0x%llx\t%u\t0x%llx\tyes\t%s\tno\tno\t",
                       section->index,
                       section->name,
                       (unsigned long long)(section->addr + start),
                       (unsigned long long)(section->offset + start),
                       (unsigned long long)(pos - start),
                       section->type,
                       (unsigned long long)section->flags,
                       section->writable ? "yes" : "no");
                print_tsv_text(data + start, (size_t)(pos - start), (size_t)(pos - start));
                putchar('\n');
            }
        }
    }
}

static void emit_markdown(const Image *image) {
    uint64_t emitted_bytes = 0;
    size_t emitted_sections = 0;
    size_t nobits_sections = 0;
    for (size_t i = 0; i < image->section_count; i++) {
        const SectionInfo *section = &image->sections[i];
        if (emit_section_data(section)) {
            emitted_sections++;
            emitted_bytes += section->size;
        }
        if (section->nobits) {
            nobits_sections++;
        }
    }
    puts("# Binary Data Sections");
    puts("");
    puts("Native C-generated carrier for allocatable non-executable ELF data and the embedded VM dispatch table.");
    puts("");
    puts("| metric | value |");
    puts("| --- | ---: |");
    printf("| alloc sections tracked | %zu |\n", image->section_count);
    printf("| emitted data sections | %zu |\n", emitted_sections);
    printf("| emitted data bytes | 0x%llx |\n", (unsigned long long)emitted_bytes);
    printf("| bss/nobits sections tracked | %zu |\n", nobits_sections);
    printf("| string refs indexed | %zu |\n", count_strings(image));
    printf("| indexed string bytes | 0x%llx |\n", (unsigned long long)count_string_bytes(image));
    printf("| dispatch table entries | %u |\n", DISPATCH_TABLE_ENTRIES);
    puts("");
    puts("| section | vaddr | file offset | size | emitted | writable | executable | nobits |");
    puts("| --- | ---: | ---: | ---: | --- | --- | --- | --- |");
    for (size_t i = 0; i < image->section_count; i++) {
        const SectionInfo *section = &image->sections[i];
        printf("| `%s` | `0x%llx` | `0x%llx` | `0x%llx` | `%s` | `%s` | `%s` | `%s` |\n",
               section->name,
               (unsigned long long)section->addr,
               (unsigned long long)section->offset,
               (unsigned long long)section->size,
               emit_section_data(section) ? "yes" : "no",
               section->writable ? "yes" : "no",
               section->executable ? "yes" : "no",
               section->nobits ? "yes" : "no");
    }
}

int main(int argc, char **argv) {
    Image image;
    const char *mode = argc > 1 ? argv[1] : "--c";
    load_image(&image);
    if (strcmp(mode, "--c") == 0) {
        emit_c(&image);
    } else if (strcmp(mode, "--tsv") == 0) {
        emit_tsv(&image);
    } else if (strcmp(mode, "--markdown") == 0 || strcmp(mode, "--md") == 0) {
        emit_markdown(&image);
    } else {
        fprintf(stderr, "usage: %s [--c|--tsv|--markdown]\n", argv[0]);
        return 2;
    }
    free(image.data);
    return 0;
}
