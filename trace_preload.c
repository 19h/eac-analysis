#define _GNU_SOURCE
#define _LARGEFILE64_SOURCE
#include <arpa/inet.h>
#include <dlfcn.h>
#include <dirent.h>
#include <errno.h>
#include <fcntl.h>
#include <netdb.h>
#include <pthread.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/select.h>
#include <sys/mman.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <unistd.h>

static __thread int g_in_hook;

#define EAC_FAKE_FD_MAX 4096

static pthread_mutex_t g_fake_fd_lock = PTHREAD_MUTEX_INITIALIZER;
static uint8_t g_fake_fd_active[EAC_FAKE_FD_MAX];
static int g_fake_fd_peer[EAC_FAKE_FD_MAX];
static size_t g_fake_fd_read_off[EAC_FAKE_FD_MAX];

static const char g_fake_net_payload[] =
    "HTTP/1.1 204 No Content\r\n"
    "Content-Length: 0\r\n"
    "Connection: close\r\n"
    "\r\n";

static const char *safe_str(const char *s) {
    return s != NULL ? s : "(null)";
}

static void format_origin(void *caller, char *buf, size_t size) {
    if (size == 0) return;
    buf[0] = '\0';
    if (caller == NULL) {
        snprintf(buf, size, "caller=(null)");
        return;
    }

    Dl_info info;
    if (dladdr(caller, &info) != 0 && info.dli_fname != NULL) {
        uintptr_t off = 0;
        if (info.dli_fbase != NULL) {
            off = (uintptr_t)caller - (uintptr_t)info.dli_fbase;
        }
        const char *name = strrchr(info.dli_fname, '/');
        name = name != NULL ? name + 1 : info.dli_fname;
        snprintf(buf, size, "caller=%s+0x%zx", name, (size_t)off);
        return;
    }

    snprintf(buf, size, "caller=%p", caller);
}

static void trace_write(const char *msg) {
    if (msg == NULL) return;
    size_t n = strlen(msg);
    while (n > 0) {
        ssize_t w = write(STDERR_FILENO, msg, n);
        if (w <= 0) break;
        msg += (size_t)w;
        n -= (size_t)w;
    }
}

static void trace_log(const char *fmt, ...) {
    if (g_in_hook) return;
    g_in_hook = 1;

    char buf[2048];
    int off = snprintf(buf, sizeof(buf), "[TRACE] ");
    if (off < 0) off = 0;
    if ((size_t)off >= sizeof(buf)) off = (int)sizeof(buf) - 1;

    va_list ap;
    va_start(ap, fmt);
    int n = vsnprintf(buf + off, sizeof(buf) - (size_t)off, fmt, ap);
    va_end(ap);

    size_t used;
    if (n < 0) {
        used = (size_t)off;
    } else {
        used = (size_t)off + (size_t)n;
        if (used >= sizeof(buf)) used = sizeof(buf) - 1;
    }
    if (used + 1 < sizeof(buf)) {
        buf[used++] = '\n';
        buf[used] = '\0';
    } else {
        buf[sizeof(buf) - 2] = '\n';
        buf[sizeof(buf) - 1] = '\0';
    }
    trace_write(buf);

    g_in_hook = 0;
}

static void trace_log_from(void *caller, const char *fmt, ...) {
    if (g_in_hook) return;
    g_in_hook = 1;

    char origin[256];
    format_origin(caller, origin, sizeof(origin));

    char buf[3072];
    int off = snprintf(buf, sizeof(buf), "[TRACE] %s ", origin);
    if (off < 0) off = 0;
    if ((size_t)off >= sizeof(buf)) off = (int)sizeof(buf) - 1;

    va_list ap;
    va_start(ap, fmt);
    int n = vsnprintf(buf + off, sizeof(buf) - (size_t)off, fmt, ap);
    va_end(ap);

    size_t used;
    if (n < 0) {
        used = (size_t)off;
    } else {
        used = (size_t)off + (size_t)n;
        if (used >= sizeof(buf)) used = sizeof(buf) - 1;
    }
    if (used + 1 < sizeof(buf)) {
        buf[used++] = '\n';
        buf[used] = '\0';
    } else {
        buf[sizeof(buf) - 2] = '\n';
        buf[sizeof(buf) - 1] = '\0';
    }
    trace_write(buf);

    g_in_hook = 0;
}

static void hex_prefix(const void *data, size_t len, char *out, size_t out_size) {
    static const char hex[] = "0123456789abcdef";
    if (out_size == 0) return;
    out[0] = '\0';
    if (data == NULL || len == 0 || out_size < 3) return;

    size_t n = len < 48 ? len : 48;
    const uint8_t *p = (const uint8_t *)data;
    size_t j = 0;
    for (size_t i = 0; i < n && j + 2 < out_size; ++i) {
        out[j++] = hex[p[i] >> 4];
        out[j++] = hex[p[i] & 0xf];
    }
    if (len > n && j + 3 < out_size) {
        out[j++] = '.';
        out[j++] = '.';
        out[j++] = '.';
    }
    out[j] = '\0';
}

static int env_is_one(const char *name) {
    char *(*real_getenv_fn)(const char *) = dlsym(RTLD_NEXT, "getenv");
    const char *v = real_getenv_fn ? real_getenv_fn(name) : NULL;
    return v != NULL && strcmp(v, "1") == 0;
}

static int block_network(void) {
    return !env_is_one("EAC_TRACE_ALLOW_NETWORK") && !env_is_one("EAC_TRACE_FAKE_NETWORK");
}

static int fake_network(void) {
    return env_is_one("EAC_TRACE_FAKE_NETWORK");
}

static int block_spawn(void) {
    return !env_is_one("EAC_TRACE_ALLOW_SPAWN");
}

static int fake_fd_is_active(int fd) {
    int active = 0;
    if (fd >= 0 && fd < EAC_FAKE_FD_MAX) {
        pthread_mutex_lock(&g_fake_fd_lock);
        active = g_fake_fd_active[fd] != 0;
        pthread_mutex_unlock(&g_fake_fd_lock);
    }
    return active;
}

static void fake_fd_mark(int fd, int peer) {
    if (fd < 0 || fd >= EAC_FAKE_FD_MAX) return;
    pthread_mutex_lock(&g_fake_fd_lock);
    g_fake_fd_active[fd] = 1;
    g_fake_fd_peer[fd] = peer;
    g_fake_fd_read_off[fd] = 0;
    pthread_mutex_unlock(&g_fake_fd_lock);
}

static int fake_fd_unmark(int fd) {
    int peer = -1;
    if (fd < 0 || fd >= EAC_FAKE_FD_MAX) return -1;
    pthread_mutex_lock(&g_fake_fd_lock);
    if (g_fake_fd_active[fd]) {
        peer = g_fake_fd_peer[fd];
        g_fake_fd_active[fd] = 0;
        g_fake_fd_peer[fd] = -1;
        g_fake_fd_read_off[fd] = 0;
    }
    pthread_mutex_unlock(&g_fake_fd_lock);
    return peer;
}

static ssize_t fake_fd_read(int fd, void *buf, size_t len) {
    ssize_t ret = -2;
    if (fd < 0 || fd >= EAC_FAKE_FD_MAX) return ret;
    pthread_mutex_lock(&g_fake_fd_lock);
    if (g_fake_fd_active[fd]) {
        size_t payload_len = sizeof(g_fake_net_payload) - 1u;
        size_t off = g_fake_fd_read_off[fd];
        if (off >= payload_len) {
            ret = 0;
        } else {
            size_t n = payload_len - off;
            if (n > len) n = len;
            memcpy(buf, g_fake_net_payload + off, n);
            g_fake_fd_read_off[fd] = off + n;
            ret = (ssize_t)n;
        }
    }
    pthread_mutex_unlock(&g_fake_fd_lock);
    return ret;
}

static int fake_socket_create(void) {
    int (*real_socketpair_fn)(int, int, int, int[2]) = dlsym(RTLD_NEXT, "socketpair");
    ssize_t (*real_write_fn)(int, const void *, size_t) = dlsym(RTLD_NEXT, "write");
    int fds[2] = {-1, -1};
    if (!real_socketpair_fn) {
        errno = ENOSYS;
        return -1;
    }
    if (real_socketpair_fn(AF_UNIX, SOCK_STREAM, 0, fds) != 0) return -1;
    fake_fd_mark(fds[0], fds[1]);
    if (real_write_fn) {
        (void)real_write_fn(fds[1], g_fake_net_payload, sizeof(g_fake_net_payload) - 1u);
    }
    return fds[0];
}

int open(const char *pathname, int flags, ...) {
    mode_t mode = 0;
    if (flags & O_CREAT) {
        va_list ap;
        va_start(ap, flags);
        mode = va_arg(ap, mode_t);
        va_end(ap);
    }

    int (*real_open_fn)(const char *, int, ...) = dlsym(RTLD_NEXT, "open");
    trace_log_from(__builtin_return_address(0), "open path=%s flags=0x%x", safe_str(pathname), flags);
    if (!real_open_fn) {
        errno = ENOSYS;
        return -1;
    }
    if (flags & O_CREAT) return real_open_fn(pathname, flags, mode);
    return real_open_fn(pathname, flags);
}

int open64(const char *pathname, int flags, ...) {
    mode_t mode = 0;
    if (flags & O_CREAT) {
        va_list ap;
        va_start(ap, flags);
        mode = va_arg(ap, mode_t);
        va_end(ap);
    }

    int (*real_open64_fn)(const char *, int, ...) = dlsym(RTLD_NEXT, "open64");
    trace_log_from(__builtin_return_address(0), "open64 path=%s flags=0x%x", safe_str(pathname), flags);
    if (!real_open64_fn) {
        errno = ENOSYS;
        return -1;
    }
    if (flags & O_CREAT) return real_open64_fn(pathname, flags, mode);
    return real_open64_fn(pathname, flags);
}

FILE *fopen(const char *pathname, const char *mode) {
    FILE *(*real_fopen_fn)(const char *, const char *) = dlsym(RTLD_NEXT, "fopen");
    trace_log_from(__builtin_return_address(0), "fopen path=%s mode=%s", safe_str(pathname), safe_str(mode));
    if (!real_fopen_fn) {
        errno = ENOSYS;
        return NULL;
    }
    return real_fopen_fn(pathname, mode);
}

FILE *fopen64(const char *pathname, const char *mode) {
    FILE *(*real_fopen64_fn)(const char *, const char *) = dlsym(RTLD_NEXT, "fopen64");
    trace_log_from(__builtin_return_address(0), "fopen64 path=%s mode=%s", safe_str(pathname), safe_str(mode));
    if (!real_fopen64_fn) {
        errno = ENOSYS;
        return NULL;
    }
    return real_fopen64_fn(pathname, mode);
}

DIR *opendir(const char *name) {
    DIR *(*real_opendir_fn)(const char *) = dlsym(RTLD_NEXT, "opendir");
    trace_log_from(__builtin_return_address(0), "opendir path=%s", safe_str(name));
    if (!real_opendir_fn) {
        errno = ENOSYS;
        return NULL;
    }
    return real_opendir_fn(name);
}

ssize_t readlink(const char *pathname, char *buf, size_t bufsiz) {
    ssize_t (*real_readlink_fn)(const char *, char *, size_t) = dlsym(RTLD_NEXT, "readlink");
    trace_log_from(__builtin_return_address(0), "readlink path=%s size=%zu", safe_str(pathname), bufsiz);
    if (!real_readlink_fn) {
        errno = ENOSYS;
        return -1;
    }
    return real_readlink_fn(pathname, buf, bufsiz);
}

char *realpath(const char *path, char *resolved_path) {
    char *(*real_realpath_fn)(const char *, char *) = dlsym(RTLD_NEXT, "realpath");
    trace_log_from(__builtin_return_address(0), "realpath path=%s", safe_str(path));
    if (!real_realpath_fn) {
        errno = ENOSYS;
        return NULL;
    }
    return real_realpath_fn(path, resolved_path);
}

char *getenv(const char *name) {
    char *(*real_getenv_fn)(const char *) = dlsym(RTLD_NEXT, "getenv");
    char *ret = real_getenv_fn ? real_getenv_fn(name) : NULL;
    trace_log_from(__builtin_return_address(0), "getenv name=%s -> %s", safe_str(name), ret ? "set" : "null");
    return ret;
}

char *secure_getenv(const char *name) {
    char *(*real_secure_getenv_fn)(const char *) = dlsym(RTLD_NEXT, "secure_getenv");
    char *ret = NULL;
    if (real_secure_getenv_fn) ret = real_secure_getenv_fn(name);
    else {
        char *(*real_getenv_fn)(const char *) = dlsym(RTLD_NEXT, "getenv");
        ret = real_getenv_fn ? real_getenv_fn(name) : NULL;
    }
    trace_log_from(__builtin_return_address(0), "secure_getenv name=%s -> %s", safe_str(name), ret ? "set" : "null");
    return ret;
}

void *dlopen(const char *filename, int flags) {
    void *(*real_dlopen_fn)(const char *, int) = dlsym(RTLD_NEXT, "dlopen");
    trace_log_from(__builtin_return_address(0), "dlopen file=%s flags=0x%x", safe_str(filename), flags);
    if (!real_dlopen_fn) {
        errno = ENOSYS;
        return NULL;
    }
    return real_dlopen_fn(filename, flags);
}

void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset) {
    void *(*real_mmap_fn)(void *, size_t, int, int, int, off_t) = dlsym(RTLD_NEXT, "mmap");
    trace_log_from(__builtin_return_address(0), "mmap addr=%p len=0x%zx prot=0x%x flags=0x%x fd=%d off=0x%lx",
              addr, length, prot, flags, fd, (unsigned long)offset);
    if (!real_mmap_fn) {
        errno = ENOSYS;
        return MAP_FAILED;
    }
    return real_mmap_fn(addr, length, prot, flags, fd, offset);
}

int mprotect(void *addr, size_t len, int prot) {
    int (*real_mprotect_fn)(void *, size_t, int) = dlsym(RTLD_NEXT, "mprotect");
    trace_log_from(__builtin_return_address(0), "mprotect addr=%p len=0x%zx prot=0x%x", addr, len, prot);
    if (!real_mprotect_fn) {
        errno = ENOSYS;
        return -1;
    }
    return real_mprotect_fn(addr, len, prot);
}

int munmap(void *addr, size_t length) {
    int (*real_munmap_fn)(void *, size_t) = dlsym(RTLD_NEXT, "munmap");
    trace_log_from(__builtin_return_address(0), "munmap addr=%p len=0x%zx", addr, length);
    if (!real_munmap_fn) {
        errno = ENOSYS;
        return -1;
    }
    return real_munmap_fn(addr, length);
}

int memfd_create(const char *name, unsigned int flags) {
    int (*real_memfd_create_fn)(const char *, unsigned int) = dlsym(RTLD_NEXT, "memfd_create");
    trace_log_from(__builtin_return_address(0), "memfd_create name=%s flags=0x%x", safe_str(name), flags);
    if (real_memfd_create_fn) return real_memfd_create_fn(name, flags);
#ifdef SYS_memfd_create
    return (int)syscall(SYS_memfd_create, name, flags);
#else
    errno = ENOSYS;
    return -1;
#endif
}

int socket(int domain, int type, int protocol) {
    int (*real_socket_fn)(int, int, int) = dlsym(RTLD_NEXT, "socket");
    trace_log_from(__builtin_return_address(0), "socket domain=%d type=%d protocol=%d%s%s", domain, type, protocol,
              fake_network() ? " FAKE" : "", block_network() ? " DENY" : "");
    if (fake_network()) {
        return fake_socket_create();
    }
    if (block_network()) {
        errno = ENETDOWN;
        return -1;
    }
    if (!real_socket_fn) {
        errno = ENOSYS;
        return -1;
    }
    return real_socket_fn(domain, type, protocol);
}

int connect(int sockfd, const struct sockaddr *addr, socklen_t addrlen) {
    int (*real_connect_fn)(int, const struct sockaddr *, socklen_t) = dlsym(RTLD_NEXT, "connect");
    char desc[128] = {0};
    if (addr && addr->sa_family == AF_INET && addrlen >= sizeof(struct sockaddr_in)) {
        const struct sockaddr_in *in = (const struct sockaddr_in *)addr;
        char ip[INET_ADDRSTRLEN];
        inet_ntop(AF_INET, &in->sin_addr, ip, sizeof(ip));
        snprintf(desc, sizeof(desc), "%s:%u", ip, (unsigned)ntohs(in->sin_port));
    } else if (addr && addr->sa_family == AF_INET6 && addrlen >= sizeof(struct sockaddr_in6)) {
        const struct sockaddr_in6 *in6 = (const struct sockaddr_in6 *)addr;
        char ip[INET6_ADDRSTRLEN];
        inet_ntop(AF_INET6, &in6->sin6_addr, ip, sizeof(ip));
        snprintf(desc, sizeof(desc), "[%s]:%u", ip, (unsigned)ntohs(in6->sin6_port));
    } else {
        snprintf(desc, sizeof(desc), "family=%d", addr != NULL ? addr->sa_family : -1);
    }

    trace_log_from(__builtin_return_address(0), "connect fd=%d addr=%s%s%s", sockfd, desc,
                   fake_fd_is_active(sockfd) ? " FAKE" : "", block_network() ? " DENY" : "");
    if (fake_fd_is_active(sockfd)) {
        return 0;
    }
    if (block_network()) {
        errno = ENETDOWN;
        return -1;
    }
    if (!real_connect_fn) {
        errno = ENOSYS;
        return -1;
    }
    return real_connect_fn(sockfd, addr, addrlen);
}

ssize_t send(int sockfd, const void *buf, size_t len, int flags) {
    ssize_t (*real_send_fn)(int, const void *, size_t, int) = dlsym(RTLD_NEXT, "send");
    char prefix[112];
    hex_prefix(buf, len, prefix, sizeof(prefix));
    trace_log_from(__builtin_return_address(0), "send fd=%d len=%zu flags=0x%x data=%s%s%s", sockfd, len, flags,
                   prefix, fake_fd_is_active(sockfd) ? " FAKE" : "", block_network() ? " DENY" : "");
    if (fake_fd_is_active(sockfd)) {
        return (ssize_t)len;
    }
    if (block_network()) {
        errno = ENETDOWN;
        return -1;
    }
    if (!real_send_fn) {
        errno = ENOSYS;
        return -1;
    }
    return real_send_fn(sockfd, buf, len, flags);
}

ssize_t recv(int sockfd, void *buf, size_t len, int flags) {
    ssize_t (*real_recv_fn)(int, void *, size_t, int) = dlsym(RTLD_NEXT, "recv");
    ssize_t fake_ret = fake_fd_read(sockfd, buf, len);
    if (fake_ret >= -1) {
        char prefix[112];
        hex_prefix(buf, fake_ret > 0 ? (size_t)fake_ret : 0, prefix, sizeof(prefix));
        trace_log_from(__builtin_return_address(0), "recv fd=%d len=%zu flags=0x%x ret=%zd data=%s FAKE",
                       sockfd, len, flags, fake_ret, prefix);
        return fake_ret;
    }
    if (block_network()) {
        trace_log_from(__builtin_return_address(0), "recv fd=%d len=%zu flags=0x%x DENY", sockfd, len, flags);
        errno = ENETDOWN;
        return -1;
    }
    if (!real_recv_fn) {
        errno = ENOSYS;
        return -1;
    }
    ssize_t ret = real_recv_fn(sockfd, buf, len, flags);
    char prefix[112];
    hex_prefix(buf, ret > 0 ? (size_t)ret : 0, prefix, sizeof(prefix));
    trace_log_from(__builtin_return_address(0), "recv fd=%d len=%zu flags=0x%x ret=%zd data=%s",
                   sockfd, len, flags, ret, prefix);
    return ret;
}

int getaddrinfo(const char *node, const char *service,
                const struct addrinfo *hints, struct addrinfo **res) {
    int (*real_getaddrinfo_fn)(const char *, const char *, const struct addrinfo *, struct addrinfo **) =
        dlsym(RTLD_NEXT, "getaddrinfo");
    trace_log_from(__builtin_return_address(0), "getaddrinfo node=%s service=%s%s%s", safe_str(node),
              safe_str(service), fake_network() ? " FAKE" : "", block_network() ? " DENY" : "");
    if (fake_network()) {
        if (!res) return EAI_SYSTEM;
        struct addrinfo *ai = (struct addrinfo *)calloc(1, sizeof(*ai));
        struct sockaddr_in *addr = (struct sockaddr_in *)calloc(1, sizeof(*addr));
        if (!ai || !addr) {
            free(ai);
            free(addr);
            return EAI_MEMORY;
        }
        int socktype = hints && hints->ai_socktype ? hints->ai_socktype : SOCK_STREAM;
        int proto = hints && hints->ai_protocol ? hints->ai_protocol : IPPROTO_TCP;
        unsigned long port = service ? strtoul(service, NULL, 10) : 443ul;
        if (port == 0 || port > 65535ul) port = 443ul;
        addr->sin_family = AF_INET;
        addr->sin_port = htons((uint16_t)port);
        addr->sin_addr.s_addr = htonl(0x7f000001u);
        ai->ai_family = AF_INET;
        ai->ai_socktype = socktype;
        ai->ai_protocol = proto;
        ai->ai_addrlen = sizeof(*addr);
        ai->ai_addr = (struct sockaddr *)addr;
        *res = ai;
        return 0;
    }
    if (block_network()) {
        if (res) *res = NULL;
        return EAI_FAIL;
    }
    if (!real_getaddrinfo_fn) return EAI_SYSTEM;
    return real_getaddrinfo_fn(node, service, hints, res);
}

ssize_t read(int fd, void *buf, size_t count) {
    ssize_t (*real_read_fn)(int, void *, size_t) = dlsym(RTLD_NEXT, "read");
    if (!g_in_hook) {
        ssize_t fake_ret = fake_fd_read(fd, buf, count);
        if (fake_ret >= -1) {
            char prefix[112];
            hex_prefix(buf, fake_ret > 0 ? (size_t)fake_ret : 0, prefix, sizeof(prefix));
            trace_log_from(__builtin_return_address(0), "read fd=%d len=%zu ret=%zd data=%s FAKE",
                           fd, count, fake_ret, prefix);
            return fake_ret;
        }
    }
    if (!real_read_fn) {
        errno = ENOSYS;
        return -1;
    }
    return real_read_fn(fd, buf, count);
}

ssize_t write(int fd, const void *buf, size_t count) {
    ssize_t (*real_write_fn)(int, const void *, size_t) = dlsym(RTLD_NEXT, "write");
    if (!g_in_hook && fake_fd_is_active(fd)) {
        char prefix[112];
        hex_prefix(buf, count, prefix, sizeof(prefix));
        trace_log_from(__builtin_return_address(0), "write fd=%d len=%zu data=%s FAKE", fd, count, prefix);
        return (ssize_t)count;
    }
    if (!real_write_fn) {
        errno = ENOSYS;
        return -1;
    }
    return real_write_fn(fd, buf, count);
}

int shutdown(int sockfd, int how) {
    int (*real_shutdown_fn)(int, int) = dlsym(RTLD_NEXT, "shutdown");
    if (fake_fd_is_active(sockfd)) {
        trace_log_from(__builtin_return_address(0), "shutdown fd=%d how=%d FAKE", sockfd, how);
        return 0;
    }
    if (!real_shutdown_fn) {
        errno = ENOSYS;
        return -1;
    }
    return real_shutdown_fn(sockfd, how);
}

int close(int fd) {
    int (*real_close_fn)(int) = dlsym(RTLD_NEXT, "close");
    int peer = fake_fd_unmark(fd);
    if (peer >= 0) {
        trace_log_from(__builtin_return_address(0), "close fd=%d FAKE", fd);
        if (real_close_fn) (void)real_close_fn(peer);
    }
    if (!real_close_fn) {
        errno = ENOSYS;
        return -1;
    }
    return real_close_fn(fd);
}

FILE *popen(const char *command, const char *type) {
    FILE *(*real_popen_fn)(const char *, const char *) = dlsym(RTLD_NEXT, "popen");
    trace_log_from(__builtin_return_address(0), "popen command=%s type=%s%s", safe_str(command),
              safe_str(type), block_spawn() ? " DENY" : "");
    if (block_spawn()) {
        errno = EACCES;
        return NULL;
    }
    if (!real_popen_fn) {
        errno = ENOSYS;
        return NULL;
    }
    return real_popen_fn(command, type);
}

int system(const char *command) {
    int (*real_system_fn)(const char *) = dlsym(RTLD_NEXT, "system");
    trace_log_from(__builtin_return_address(0), "system command=%s%s", safe_str(command), block_spawn() ? " DENY" : "");
    if (block_spawn()) {
        errno = EACCES;
        return -1;
    }
    if (!real_system_fn) {
        errno = ENOSYS;
        return -1;
    }
    return real_system_fn(command);
}

int pthread_create(pthread_t *thread, const pthread_attr_t *attr,
                   void *(*start_routine)(void *), void *arg) {
    int (*real_pthread_create_fn)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *) =
        dlsym(RTLD_NEXT, "pthread_create");
    char start[256];
    format_origin((void *)start_routine, start, sizeof(start));
    trace_log_from(__builtin_return_address(0), "pthread_create %s arg=%p", start, arg);
    if (!real_pthread_create_fn) return ENOSYS;
    return real_pthread_create_fn(thread, attr, start_routine, arg);
}
