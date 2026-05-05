#define _GNU_SOURCE
#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

#define DEFAULT_EAC "eac.elf"
#define DEFAULT_RETDEC "retdec-decompiler"
#define DEFAULT_TIMEOUT 90
#define DEFAULT_RANGES "0x21a50-0x21b05,0x2508e-0x2509a,0x72588-0x7259e,0x7260a-0x7261c,0x72bbc-0x72c20,0x48eb2b-0x48ec68"

typedef struct {
    char *data;
    size_t size;
} Buffer;

static Buffer read_file(const char *path) {
    FILE *file = fopen(path, "rb");
    Buffer buffer = {0};
    long size = 0;
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
    buffer.data = (char *)malloc((size_t)size + 1);
    if (!buffer.data) {
        fprintf(stderr, "out of memory reading %s\n", path);
        exit(1);
    }
    buffer.size = fread(buffer.data, 1, (size_t)size, file);
    if (buffer.size != (size_t)size && ferror(file)) {
        perror("fread");
        exit(1);
    }
    buffer.data[buffer.size] = '\0';
    fclose(file);
    return buffer;
}

static const char *find_required(const char *text, const char *marker) {
    const char *pos = strstr(text, marker);
    if (!pos) {
        fprintf(stderr, "retdec output missing marker: %s\n", marker);
        exit(1);
    }
    return pos + strlen(marker);
}

static void print_rewritten_slice(const char *start, const char *stop) {
    const char *p = start;
    while (p < stop && *p) {
        if ((size_t)(stop - p) >= strlen("(int32_t *)&inbytesleft") &&
            strncmp(p, "(int32_t *)&inbytesleft", strlen("(int32_t *)&inbytesleft")) == 0) {
            fputs("(size_t *)&inbytesleft", stdout);
            p += strlen("(int32_t *)&inbytesleft");
        } else if ((size_t)(stop - p) >= strlen("(int32_t *)&outbytesleft") &&
                   strncmp(p, "(int32_t *)&outbytesleft", strlen("(int32_t *)&outbytesleft")) == 0) {
            fputs("(size_t *)&outbytesleft", stdout);
            p += strlen("(int32_t *)&outbytesleft");
        } else if ((size_t)(stop - p) >= strlen(" = &g") &&
                   strncmp(p, " = &g", strlen(" = &g")) == 0) {
            fputs(" = (int64_t)&g", stdout);
            p += strlen(" = &g");
        } else if ((size_t)(stop - p) >= strlen(" = &v") &&
                   strncmp(p, " = &v", strlen(" = &v")) == 0) {
            fputs(" = (int64_t)&v", stdout);
            p += strlen(" = &v");
        } else {
            fputc(*p++, stdout);
        }
    }
}

static void print_section(const char *source, const char *start_marker, const char *stop_marker) {
    const char *start = find_required(source, start_marker);
    const char *stop = strstr(start, stop_marker);
    if (!stop) {
        fprintf(stderr, "retdec output missing stop marker after: %s\n", start_marker);
        exit(1);
    }
    print_rewritten_slice(start, stop);
}

static void run_retdec(const char *retdec, const char *eac, const char *ranges,
                       int timeout, char *out_path, size_t out_path_size) {
    char tmp_template[] = "/tmp/eacsym-followup-retdec-XXXXXX";
    char command[4096];
    char *tmpdir = mkdtemp(tmp_template);
    int rc = 0;
    if (!tmpdir) {
        perror("mkdtemp");
        exit(1);
    }
    snprintf(out_path, out_path_size, "%s/followups.c", tmpdir);
    snprintf(command, sizeof(command),
             "%s --select-ranges %s --select-decode-only --timeout %d -o %s %s >&2",
             retdec, ranges, timeout, out_path, eac);
    rc = system(command);
    if (rc == -1) {
        perror("system");
        exit(1);
    }
    if (!WIFEXITED(rc) || WEXITSTATUS(rc) != 0) {
        fprintf(stderr, "retdec failed with status %d\n", rc);
        exit(WIFEXITED(rc) ? WEXITSTATUS(rc) : 1);
    }
}

static void emit_artifact(const char *retdec_source, const char *ranges) {
    printf("/*\n");
    printf(" * Targeted RetDec C for native return-patch follow-up helpers.\n");
    printf(" *\n");
    printf(" * Ranges:\n");
    const char *cursor = ranges;
    while (*cursor) {
        const char *next = strchr(cursor, ',');
        printf(" *   ");
        if (next) {
            fwrite(cursor, 1, (size_t)(next - cursor), stdout);
            printf("\n");
            cursor = next + 1;
        } else {
            printf("%s\n", cursor);
            break;
        }
    }
    printf(" *\n");
    printf(" * These are the narrow follow-up targets selected by\n");
    printf(" * vm_native_ret_patch_followups.c. They model native helper semantics\n");
    printf(" * adjacent to ret-patch exits; they are not promoted as VM bytecode CFG.\n");
    printf(" */\n");
    printf("#include <iconv.h>\n");
    printf("#include <stdint.h>\n");
    printf("#include <stddef.h>\n\n");
    printf("int64_t __readfsqword(uint64_t offset);\n");
    print_section(retdec_source,
                  "// ------------------- Function Prototypes --------------------",
                  "// --------------------- Global Variables ---------------------");
    print_section(retdec_source,
                  "// --------------------- Global Variables ---------------------",
                  "// ------- Dynamically Linked Functions Without Header --------");
    print_section(retdec_source,
                  "// ------- Dynamically Linked Functions Without Header --------",
                  "// ------------------------ Functions -------------------------");
    print_section(retdec_source,
                  "// ------------------------ Functions -------------------------",
                  "// --------------------- Meta-Information ---------------------");
}

int main(int argc, char **argv) {
    const char *retdec = DEFAULT_RETDEC;
    const char *eac = DEFAULT_EAC;
    const char *ranges = DEFAULT_RANGES;
    int timeout = DEFAULT_TIMEOUT;
    char out_path[512];
    Buffer retdec_source;
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--retdec") == 0 && i + 1 < argc) {
            retdec = argv[++i];
        } else if (strcmp(argv[i], "--eac") == 0 && i + 1 < argc) {
            eac = argv[++i];
        } else if (strcmp(argv[i], "--ranges") == 0 && i + 1 < argc) {
            ranges = argv[++i];
        } else if (strcmp(argv[i], "--timeout") == 0 && i + 1 < argc) {
            timeout = atoi(argv[++i]);
        } else {
            fprintf(stderr, "usage: %s [--retdec PATH] [--eac PATH] [--ranges RANGES] [--timeout SEC]\n", argv[0]);
            return 2;
        }
    }
    run_retdec(retdec, eac, ranges, timeout, out_path, sizeof(out_path));
    retdec_source = read_file(out_path);
    emit_artifact(retdec_source.data, ranges);
    free(retdec_source.data);
    unlink(out_path);
    char *slash = strrchr(out_path, '/');
    if (slash) {
        *slash = '\0';
        rmdir(out_path);
    }
    return 0;
}
