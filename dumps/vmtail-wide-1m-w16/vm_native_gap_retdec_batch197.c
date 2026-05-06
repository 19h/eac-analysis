/*
 * Targeted RetDec C for native executable gap queue batch 197.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4ad3e0-0x4ad440 rank=- name=- kind=- bytes=- uncovered=-
 *   0x492820-0x492870 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5bca0-0x5bda0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5791c0-0x5792c3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57c880-0x57c910 rank=- name=- kind=- bytes=- uncovered=-
 *   0x554bc0-0x554c70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x415ae-0x41740 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aa830-0x4aa9d0 rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
typedef int64_t int224_t;
typedef int32_t int3_t;
typedef float float32_t;
typedef double float64_t;
typedef long double float80_t;
static inline int128_t eac_retdec_i128(uint64_t hi, uint64_t lo) { return (int128_t)(((uint128_t)hi << 64) | (uint128_t)lo); }
struct __locale_struct;
struct _TYPEDEF_glob_t;
struct _TYPEDEF___mbstate_t;
struct _IO_FILE;
struct __dirstream;
struct dirent;
struct pollfd;
struct sockaddr;
struct addrinfo;
struct stat;
struct stat64;
struct timespec;
struct timeval;
struct utsname;
struct iovec;
struct epoll_event;
#ifndef EAC_RETDEC_CPUID_REGS_DEFINED
#define EAC_RETDEC_CPUID_REGS_DEFINED 1
struct eac_retdec_cpuid_regs { uint32_t e0; uint32_t e1; uint32_t e2; uint32_t e3; };
#endif
#define F_GETFL 3
#define F_SETFL 4
#define SO_DEBUG 1
#define _SC_PAGESIZE 30
#define SIGALARM 14
#define SYS_getegid32 50
#define PTHREAD_MUTEX_RECURSIVE 1
extern int g1;
extern int g2;
extern int g3;
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
int64_t entry_point();
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
uint32_t llvm_bswap_i32(uint32_t value);
uint64_t llvm_ctlz_i64(uint64_t value, bool is_zero_undef);
int __popcountdi2(uint64_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3();
int32_t __asm_in(uint16_t port);
int32_t __asm_in_133(uint16_t port);
int32_t __asm_in_134(uint16_t port);
char __asm_in_136(uint16_t port);
char __asm_in_137(uint16_t port);
int32_t __asm_in_138(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_134(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_out_137(uint16_t port, char value);
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
void __writegsbyte(int64_t offset, uint8_t value);
int64_t __asm_iretd();
int64_t __asm_sti();
int64_t unknown_34e4aca1(int64_t value);
void unknown_11c3039(void);
int64_t unknown_2a35274a(void);
int64_t unknown_3dc1cbae(int32_t value);
int64_t unknown_6847365b(void);
int64_t unknown_74517502(void);
int64_t unknown_6ae5a3c4(void);
int64_t unknown_3d2a4ac0(void);
int64_t unknown_3f58ba8f(void);
int64_t unknown_3a9782b0(void);
int64_t unknown_4a2eb0c7(int64_t value);
int64_t unknown_4c300d9d(void);
int64_t unknown_1a5f8c06(void);
int64_t unknown_1c9eef14(void);
int64_t unknown_fce9f06(void);
int64_t unknown_6830301e(void);
int64_t unknown_2f0fdc0b(void);
int64_t unknown_38ae20ec(void);
int64_t unknown_401c0cfa(void);
void unknown_b6ccb9(void);
int64_t unknown_ffffffffd3dfe90d(void);
int64_t unknown_ffffffffba4fa1e3(void);
int64_t unknown_ffffffffa83be585(void);
int64_t unknown_ffffffffa845fcb4(int64_t a1, int64_t a2, int64_t a3);
int64_t unknown_ffffffffa337f4e6(void);
int64_t unknown_ffffffffb8c4d43e(void);
int64_t unknown_ffffffffb1f005c0(int64_t value);
int64_t unknown_ffffffffc9a6c1f7(void);
int64_t unknown_ffffffffe026915f(void);
int64_t unknown_ffffffffffa50add(void);
int64_t unknown_ffffffff8d401ab3(void);
int64_t unknown_ffffffff920a593a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t unknown_ffffffffc304842d(int64_t value);
int64_t unknown_ffffffffc23c8777(int64_t a1, int64_t a2);
int64_t unknown_ffffffffd64cfc2a(int64_t dst, int64_t src);
int64_t unknown_ffffffffd296219c(void);
int64_t unknown_ffffffffe8914fc1(void);
int64_t unknown_fffffffff537c295(void);
int64_t unknown_ffffffffb38ec0a9(void);
int64_t _ITM_RU1(int64_t src);
int64_t _ITM_RU8(void);
int64_t _ZGTtnam(int64_t size);
int64_t _ITM_memcpyRtWn(int64_t dst, int64_t src, int64_t size);
void __asm_rcl(int32_t value);
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt();
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_wait(void);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __asm_fnstenv(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
struct eac_retdec_cpuid_regs __asm_cpuid(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_133(uint32_t leaf);
struct eac_retdec_cpuid_regs __asm_cpuid_134(uint32_t leaf);
uint64_t __asm_xgetbv(uint64_t index);
uint64_t __asm_rdtsc(void);
void __stack_chk_fail(void);
int __cxa_atexit(void (*func)(int64_t *), void *arg, void *dso);
uint128_t __udivti3(uint128_t a, uint128_t b);
int64_t _ZN9__gnu_cxxL27__exchange_and_add_dispatchEPii_constprop_31(int64_t value);
int64_t _ZGTtdlPv(int64_t value);
int64_t blake3_hasher_init_derive_key_raw(int64_t hasher, int64_t context, int64_t context_len);
int64_t unknown_166c28d(void);
int128_t __asm_movsd(int64_t value);
int128_t __asm_movsd_133(int64_t value);
int128_t __asm_movd(int32_t value);
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
int128_t __asm_movq();
int128_t __asm_aesimc(int128_t value);
int128_t __asm_aeskeygenassist(int128_t value, int imm);
int128_t __asm_movdqu(int128_t value);
int128_t __asm_movdqu_133(int128_t value);
int128_t __asm_movapd(int128_t value);
int128_t __asm_movaps_133(int128_t value);
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
int128_t __asm_orpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_addps(int128_t left, int128_t right);
int128_t __asm_cmpnlesd(int128_t left, int128_t right);
int128_t __asm_cvtsi2sd(int64_t value);
int128_t __asm_cvtss2sd(int32_t value);
int128_t __asm_addsd(int128_t left, int128_t right);
int128_t __asm_subsd(int128_t left, int128_t right);
int64_t __asm_cvttsd2si(int128_t value);
int64_t __asm_vcvttsd2si(int128_t value);
void __asm_ucomisd(int128_t left, int128_t right);
void __asm_ucomiss(int128_t left, int64_t right);
void __asm_ucomiss_134(int128_t left, int128_t right);
int128_t __asm_movups();
int128_t __asm_movups_133();
void __asm_movups_134();
int128_t __asm_movaps(int128_t value);
float80_t __frontend_reg_load_fpr(int32_t reg);
void __frontend_reg_store_fpr(int32_t reg, float80_t value);
char *__nl_langinfo_l(int32_t item, struct __locale_struct *locale);
struct __locale_struct *__newlocale(int category_mask, const char *locale, struct __locale_struct *base);
void __freelocale(struct __locale_struct *locale);
struct __locale_struct *__uselocale(struct __locale_struct *locale);
struct __locale_struct *__duplocale(struct __locale_struct *locale);
float32_t __strtof_l(const char *nptr, char **endptr, struct __locale_struct *locale);
float64_t __strtod_l(const char *nptr, char **endptr, struct __locale_struct *locale);
float80_t strtold_l(const char *nptr, char **endptr, struct __locale_struct *locale);
int32_t __strcoll_l(const char *s1, const char *s2, struct __locale_struct *locale);
int32_t __wcscoll_l(const int32_t *s1, const int32_t *s2, struct __locale_struct *locale);
size_t __strxfrm_l(char *dest, const char *src, size_t n, struct __locale_struct *locale);
size_t __wcsxfrm_l(int32_t *dest, const int32_t *src, size_t n, struct __locale_struct *locale);
char *dgettext(char *domain, char *msgid);
char *gettext(char *msgid);
char *bind_textdomain_codeset(char *domainname, char *codeset);
void *iconv_open(const char *tocode, const char *fromcode);
int32_t iconv(void *cd, char **inbuf, int32_t *inbytesleft, char **outbuf, int32_t *outbytesleft);
int iconv_close(void *cd);
struct _IO_FILE *fopen(const char *path, const char *mode);
struct _IO_FILE *fopen64(const char *path, const char *mode);
struct _IO_FILE *fdopen(int fd, const char *mode);
size_t fread(void *ptr, size_t size, size_t nmemb, struct _IO_FILE *stream);
int32_t read(int fd, void *buf, size_t count);
int fileno(struct _IO_FILE *stream);
void rewind(struct _IO_FILE *stream);
int fclose(struct _IO_FILE *stream);
int uname(struct utsname *buf);
int64_t __tls_get_addr(void *arg);
void *dlsym(void *handle, const char *symbol);
int dlclose(void *handle);
int32_t mbrtowc(int32_t *pwc, const char *s, size_t n, struct _TYPEDEF___mbstate_t *ps);
size_t mbstowcs(int32_t *dest, const char *src, size_t n);
size_t mbsrtowcs(int32_t *dst, char **src, size_t len, struct _TYPEDEF___mbstate_t *ps);
int32_t mbsnrtowcs(int32_t *dst, char **src, size_t nms, size_t len, struct _TYPEDEF___mbstate_t *ps);
size_t wcslen(const int32_t *s);
int wcscmp(const int32_t *s1, const int32_t *s2);
int wctob(int32_t wc);
int32_t btowc(int c);
int32_t towlower(int32_t wc);
int32_t __towlower_l(int32_t wc, struct __locale_struct *locale);
int32_t __towupper_l(int32_t wc, struct __locale_struct *locale);
int vswprintf(int32_t *wcs, size_t maxlen, const int32_t *format, int64_t ap);
int32_t *wmemchr(const int32_t *s, int32_t c, size_t n);
int32_t *wmemcpy(int32_t *dest, const int32_t *src, size_t n);
int wmemcmp(const int32_t *s1, const int32_t *s2, size_t n);
int32_t *wmemmove(int32_t *dest, const int32_t *src, size_t n);
int32_t *wmemset(int32_t *wcs, int32_t wc, size_t n);
int32_t getwc(struct _IO_FILE *stream);
int32_t putwc(int32_t wc, struct _IO_FILE *stream);
int32_t ungetwc(int32_t wc, struct _IO_FILE *stream);
size_t wcsnrtombs(char *dst, int32_t **src, size_t nwc, size_t len, struct _TYPEDEF___mbstate_t *ps);
size_t wcrtomb(char *s, int32_t wc, struct _TYPEDEF___mbstate_t *ps);
int64_t memset2();
int pthread_mutex_lock(void *mutex);
int pthread_mutex_trylock(void *mutex);
int pthread_mutex_unlock(void *mutex);
int pthread_mutex_init(void *mutex, void *attr);
int pthread_mutex_destroy(void *mutex);
int pthread_mutexattr_init(void *attr);
int pthread_mutexattr_settype(void *attr, int type);
int pthread_create(int32_t *thread, const void *attr, int64_t *(*start_routine)(int64_t *), int64_t *arg);
int pthread_join(int32_t thread, void **retval);
int pthread_once(int32_t *once_control, ...);
int pthread_cond_init(void *cond, void *attr);
int pthread_cond_wait(void *cond, void *mutex);
int pthread_cond_timedwait(void *cond, void *mutex, const struct timespec *abstime);
int pthread_cond_broadcast(void *cond);
int sem_init(int64_t *sem, int pshared, unsigned int value);
int sem_post(int64_t *sem);
int sem_wait(int64_t *sem);
int sem_destroy(int64_t *sem);
int64_t signal(int signum, int64_t handler);
unsigned int alarm(unsigned int seconds);
int fcntl(int fd, int cmd, ...);
int32_t write(int fd, const void *buf, size_t nbyte);
int ftruncate(int fd, int64_t length);
int writev(int fd, const struct iovec *iov, int iovcnt);
int epoll_create(int size);
int epoll_ctl(int epfd, int op, int fd, struct epoll_event *event);
int epoll_wait(int epfd, struct epoll_event *events, int maxevents, int timeout);
int close(int fd);
struct __dirstream *opendir(const char *name);
struct dirent *readdir(struct __dirstream *dirp);
int closedir(struct __dirstream *dirp);
int64_t blake3_hasher_finalize_seek();
int ioctl(int fd, unsigned long request, ...);
int poll(struct pollfd *fds, unsigned long nfds, int timeout);
int gettimeofday(struct timeval *tv, void *tz);
int clock_gettime(int clk_id, struct timespec *tp);
int64_t sysconf(int name);
int64_t syscall(int64_t number, ...);
int mprotect(void *addr, size_t len, int prot);
int memfd_create(void *name, unsigned int flags);
void *mmap(void *addr, size_t len, int prot, int flags, int fd, int64_t offset);
int munmap(void *addr, size_t len);
int __xstat(int ver, const char *path, struct stat *buf);
int __fxstat64(int ver, int fd, struct stat64 *buf);
int fseeko64(struct _IO_FILE *stream, int64_t offset, int whence);
int64_t ftello64(struct _IO_FILE *stream);
int64_t lseek64(int fd, int64_t offset, int whence);
int32_t *__errno_location(void);
int connect(int sockfd, const struct sockaddr *addr, int32_t addrlen);
int getsockopt(int sockfd, int level, int optname, void *optval, int32_t *optlen);
int setsockopt(int sockfd, int level, int optname, const void *optval, int32_t optlen);
int getaddrinfo(const char *node, const char *service, const struct addrinfo *hints, struct addrinfo **res);
void freeaddrinfo(struct addrinfo *res);
int64_t readlink(const char *path, char *buf, size_t bufsiz);
char *realpath(const char *path, char *resolved_path);
int glob(const char *pattern, int flags, void *errfunc, struct _TYPEDEF_glob_t *pglob);
void globfree(struct _TYPEDEF_glob_t *pglob);
char *__xpg_basename(char *path);
int32_t eac_retdec_vsnprintf(char *str, int32_t size, char *format, int64_t ap);
int64_t __wctype_l(const char *property, struct __locale_struct *locale);
int __iswctype_l(int32_t wc, int32_t desc, struct __locale_struct *locale);
int32_t __strftime_l(char *s, int32_t max, const char *format, struct tm *tm, struct __locale_struct *locale);
int32_t __wcsftime_l(int32_t *s, int32_t max, int32_t *format, struct tm *tm, struct __locale_struct *locale);
char *strdup(const char *s);
int __sprintf_chk(char *str, int flag, size_t slen, const char *format, ...);
void *__memcpy_chk(void *dest, const void *src, size_t len, size_t destlen);
struct tm *gmtime_r(const time_t *timep, struct tm *result);
struct _Unwind_Exception;
int64_t _Unwind_DeleteException(int64_t exception);
int64_t _Unwind_GetDataRelBase(int64_t context);
int64_t _Unwind_GetLanguageSpecificData(int64_t context);
int64_t _Unwind_GetIPInfo(int64_t context, void *ip_before_insn, int64_t extra);
int64_t _Unwind_GetRegionStart();
int64_t _Unwind_RaiseException(int64_t exception);
void _Unwind_SetGR(int64_t context, int index, int64_t value);
void _Unwind_SetIP(int64_t context, int64_t value);
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_24ded();
int64_t function_2508e();
int64_t function_36622();
int64_t function_36712();
int64_t function_415ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_492820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_4aa470();
int64_t function_4aa830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4ad2f0();
int64_t function_4ad3e0(int64_t a1, int64_t a2, int32_t a3);
int64_t function_4ad720();
int64_t function_4ad750();
int64_t function_4c14d0();
int64_t function_4c18b0();
int64_t function_4fc010();
int64_t function_504cb();
int64_t function_554bc0(void);
int64_t function_5791c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5791d6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_5797e0();
int64_t function_57a000();
int64_t function_57c7d0();
int64_t function_57c880(int64_t a1, int64_t a2, int64_t a3, int64_t a4, unsigned char a5);
int64_t function_5b7ba();
int64_t function_5bc4b();
int64_t function_5bca0(void);
int64_t function_5bca1(int64_t a1, int64_t a2);
int64_t function_5bfa4();
int64_t function_5bfb2();

// Address range: 0x415ae - 0x4173b
int64_t function_415ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x415ae
    if (a1 == 0) {
        // 0x41727
        return 0xffffffff;
    }
    int64_t v1 = *(int64_t *)(a1 + 88); // 0x415ce
    if (a2 == 0 || v1 == 0) {
        // 0x41727
        return 0xffffffff;
    }
    // 0x415e5
    if (*(int32_t *)(a1 + 20) != 1) {
        // 0x41727
        return 0xffffffff;
    }
    int64_t result3 = a4 & 0xffffffff; // 0x415ef
    bool v2; // 0x415ae
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = -1; // 0x415fb
    int64_t v5 = a2; // 0x415fb
    int64_t v6 = 0; // 0x415fb
    while (v4 != 0) {
        int64_t v7 = v5;
        v4--;
        v5 = v7 + v3;
        v6 = v4;
        if (*(char *)v7 == 0) {
            // break -> 
            break;
        }
        v6 = 0;
    }
    uint64_t v8 = -2 - v6; // 0x41603
    int64_t result; // 0x415ae
    int64_t v9; // 0x415ae
    int64_t v10; // 0x415ae
    int64_t v11; // 0x415ae
    int64_t result2; // 0x415ae
    uint64_t v12; // 0x415ae
    int64_t v13; // 0x415ae
    int64_t v14; // 0x415ae
    int64_t v15; // 0x415ae
    int64_t v16; // 0x41630
    int32_t v17; // 0x41650
    int64_t v18; // 0x41656
    int64_t v19; // 0x41665
    uint64_t v20; // 0x41676
    if (a3 == 0 == ((int32_t)a4 & (int32_t)&g4) == 0) {
        // 0x4161b
        if (*(int64_t *)(v1 + 72) != 0) {
            // 0x41627
            v16 = v8 & 0xffffffff;
            int64_t v21 = (int64_t)(*(int32_t *)(a1 + 16) - 1); // 0x415ae
            int64_t v22 = 0; // 0x416d5
            while (true) {
                // 0x41644
                v12 = v22;
                v11 = v21;
                int64_t v23; // 0x415ae
                while (true) {
                  lab_0x41644:
                    // 0x41644
                    v23 = v11;
                    v17 = (int32_t)(v23 + v12) >> 1;
                    uint32_t v24 = *(int32_t *)(4 * (int64_t)v17 + *(int64_t *)(v1 + 64)); // 0x41656
                    v18 = v24;
                    uint32_t v25 = *(int32_t *)(4 * v18 + *(int64_t *)(v1 + 32)); // 0x4165b
                    int64_t v26 = *(int64_t *)v1 + (int64_t)v25; // 0x41661
                    uint16_t v27 = *(int16_t *)(v26 + 28); // 0x41665
                    v19 = v27;
                    int64_t v28 = v26 + 46; // 0x41669
                    v20 = ((int32_t)v8 > (int32_t)v27 ? v19 : v16) + v28;
                    int64_t v29 = v28; // 0x4168c
                    v13 = 0;
                    v15 = v28;
                    v9 = 0;
                    if (v20 > v28) {
                        int64_t v30 = v29;
                        int64_t v31 = a2;
                        unsigned char v32 = *(char *)v30; // 0x4168e
                        int64_t v33 = v32; // 0x4168e
                        int64_t v34 = v32 < 91 ? v33 + 32 : v33;
                        unsigned char v35 = *(char *)v31; // 0x4169e
                        int64_t v36 = v35; // 0x4169e
                        int64_t v37 = v35 < 91 ? v36 + 32 : v36;
                        v14 = v37;
                        v10 = v34;
                        while ((char)v34 == (char)v37) {
                            int64_t v38 = v30 + 1; // 0x416b3
                            int64_t v39 = v31 + 1; // 0x4168c
                            v29 = v38;
                            v13 = v37;
                            v15 = v38;
                            v9 = v34;
                            if (v20 <= v38) {
                                goto lab_0x416bb;
                            }
                            v30 = v29;
                            v31 = v39;
                            v32 = *(char *)v30;
                            v33 = v32;
                            v34 = v32 < 91 ? v33 + 32 : v33;
                            v35 = *(char *)v31;
                            v36 = v35;
                            v37 = v35 < 91 ? v36 + 32 : v36;
                            v14 = v37;
                            v10 = v34;
                        }
                        goto lab_0x416c2;
                    } else {
                        goto lab_0x416bb;
                    }
                }
              lab_0x416d5:
                // 0x416d5
                v22 = v17 + 1;
                v21 = v23;
                result = v18;
                if (v23 < v22) {
                    // 0x41727
                    return result;
                }
            }
          lab_0x418b6:
            // 0x41727
            return result2;
        }
    }
    // 0x416e7
    if (v8 > (int64_t)&g7) {
        // 0x41727
        return 0xffffffff;
    }
    int64_t v40 = -1; // 0x416fa
    if (a3 == 0) {
        // 0x41727
        return result3;
    }
    int64_t v41 = a3; // 0x416fa
    int64_t v42 = 0; // 0x41708
    while (v40 != 0) {
        int64_t v43 = v41;
        v40--;
        v41 = v43 + v3;
        v42 = v40;
        if (*(char *)v43 == 0) {
            // break -> 
            break;
        }
        v42 = 0;
    }
    if (-2 - v42 <= (int64_t)&g7) {
        // 0x41727
        return result3;
    }
    // 0x41727
    return 0xffffffff;
  lab_0x416bb:
    // 0x416bb
    v14 = v13;
    v10 = v9;
    int64_t v44; // 0x415ae
    if (v20 != v15) {
        goto lab_0x416c2;
    } else {
        // 0x416bd
        v44 = v19 - v16;
        goto lab_0x416cb;
    }
  lab_0x416c2:
    // 0x416c2
    v44 = v10 % 256 - v14 % 256;
    goto lab_0x416cb;
  lab_0x416cb:;
    int32_t v45 = v44; // 0x416cb
    result2 = v18;
    if (v45 == 0) {
        // break (via goto) -> 0x418b6
        goto lab_0x418b6;
    }
    if (v45 < 0) {
        // break -> 0x416d5
        goto lab_0x416d5;
    }
    int64_t v46 = v17 - 1; // 0x416de
    v11 = v46;
    result = v18;
    if (v12 > v46) {
        // 0x41727
        return result;
    }
    goto lab_0x41644;
}

// Address range: 0x5bca0 - 0x5bca1
int64_t function_5bca0(void) {
    // 0x5bca0
    int64_t result; // 0x5bca0
    return result;
}

// Address range: 0x5bca1 - 0x5bda0
int64_t function_5bca1(int64_t a1, int64_t a2) {
    // 0x5bca1
    int64_t v1; // 0x5bca1
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4; // 0x5bca1
    int64_t v5; // 0x5bca1
    int64_t v6; // 0x5bca1
    int64_t v7; // bp+40, 0x5bca1
    if (v2 <= v1) {
        int64_t v8 = function_504cb(); // 0x5bcb5
        v5 = 0;
        while (v8 != 0) {
            int64_t v9 = function_5bfa4(v8, &g5, v2); // 0x5bccf
            if ((int32_t)v9 == 0) {
                int64_t v10 = v8 - v1; // 0x5bcd8
                v7 = v10;
                v4 = 1;
                v6 = v9;
                if (v10 == -1) {
                    goto lab_0x5bd79;
                } else {
                    // 0x5bcfa
                    function_36712(a1, v1, v3, v10 - v3);
                    uint64_t v11 = function_5b7ba(v1, a1, v3, &v7, v1); // 0x5bd23
                    function_2508e(a1);
                    if ((char)v11 != 0) {
                        // 0x5bd4b
                        function_5bfb2(v1, "\r\n", v7, function_24ded("\r\n"));
                        return function_5bc4b();
                    }
                    // 0x5bd3a
                    v4 = v11 % 256;
                    v6 = function_36622(v1, L"Config parsing error");
                    goto lab_0x5bd79;
                }
            }
            // 0x5bcdd
            v5 = v9;
            if (v2 > -1 - v8 + a2) {
                // break -> 0x5bcef
                break;
            }
            v8 = function_504cb();
            v5 = 0;
        }
    }
    // 0x5bcef
    v7 = -1;
    v4 = 1;
    v6 = v5;
    goto lab_0x5bd79;
  lab_0x5bd79:;
    int64_t result = v6 & -256 | v4; // 0x5bd8a
    if (v1 != __readfsqword(40)) {
        // 0x5bd8c
        __stack_chk_fail();
        result = (int64_t)&g8;
    }
    // 0x5bd91
    return result;
}

// Address range: 0x492820 - 0x492870
int64_t function_492820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x492820
    if (*(int64_t *)(result + 24) != a4) {
        // 0x49286d
        return result;
    }
    int64_t v1 = 0x1daba93d29a9f5bd * (a3 ^ 0x1d8fd4b0f55dfcbb); // 0x49285a
    if (v1 == 0x1daba93d29a9f5bd * (*(int64_t *)(result + 8) ^ 0x1d8fd4b0f55dfcbb)) {
        // 0x49288d
        return v1 + 0x20e363be81a5ac2b;
    }
    // 0x49286d
    return result;
}

// Address range: 0x4aa830 - 0x4aa9ce
int64_t function_4aa830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4aa830
    if ((int32_t)function_4ad720(a1 + 304) != 0) {
        int32_t * v1 = (int32_t *)a7; // 0x4aa877
        *v1 = *v1 | 1;
    }
    int64_t result = function_4ad750(a1 + 280); // 0x4aa881
    if ((int32_t)result != 0) {
        // 0x4aa9c0
        return result;
    }
    int32_t * v2 = (int32_t *)a7; // 0x4aa896
    int64_t v3 = (int64_t)*v2; // 0x4aa896
    int32_t v4 = *(int32_t *)(a1 + (int64_t)&g1); // 0x4aa898
    int64_t v5 = v3; // 0x4aa8af
    int64_t v6; // 0x4aa830
    if ((1 << (v4 + 31) % 32 & *(int32_t *)&v6) == 0) {
        // 0x4aa8b1
        v5 = v3 | 0x4000;
        *v2 = (int32_t)v5;
    }
    uint32_t v7 = 1 << (*(int32_t *)(a1 + (int64_t)&g2) + 31) % 32;
    int64_t v8 = v5 & 0xffff7fff | 0x8000; // 0x4aa8de
    *v2 = (int32_t)((v7 & *(int32_t *)(a4 + 4)) == 0 ? v8 : v5) | 8;
    int64_t v9 = function_4c14d0(v4, a4, (int64_t)v7, v8, a7); // 0x4aa8ed
    if (v9 == 0) {
        // 0x4aa9c0
        return 0;
    }
    int64_t v10 = *(int64_t *)(a1 + 40); // 0x4aa904
    int64_t v11; // bp-120, 0x4aa830
    int64_t result2 = function_4c18b0(v9, v10, *(int64_t *)(a1 + 32), &v11); // 0x4aa910
    if (a2 == 0) {
        // 0x4aa9c0
        return result2;
    }
    int64_t v12 = a5 & 0xffffffff; // 0x4aa832
    int64_t v13 = a5 + 1 & 0xffffffff; // 0x4aa923
    int64_t v14 = a2; // 0x4aa92b
    int64_t v15; // 0x4aa830
    int64_t v16; // 0x4aa830
    while (true) {
      lab_0x4aa962:
        // 0x4aa962
        v15 = v14;
        int64_t v17 = function_4aa470(a1, v15, 1, (int64_t)((int32_t)a5 == 0)); // 0x4aa96f
        v16 = v17;
        if ((int32_t)v17 != 0) {
            goto lab_0x4aa952;
        } else {
            int64_t v18 = v13; // 0x4aa989
            if (*(int64_t *)(a1 + 136) == *(int64_t *)(v15 + 136)) {
                int64_t n = *(int64_t *)(a1 + 112); // 0x4aa98b
                int64_t str2 = *(int64_t *)(v15 + 144); // 0x4aa98f
                int64_t str = *(int64_t *)(a1 + 144); // 0x4aa996
                int64_t v19 = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) == 0 ? v12 : v13;
                v18 = v19;
            }
            uint32_t v20 = *(int32_t *)(v15 + 456); // 0x4aa930
            if (v20 < 1) {
                goto lab_0x4aa942;
            } else {
                int64_t v21 = v20; // 0x4aa930
                v16 = v21;
                if ((v18 - a6 & 0xffffffff) > v21) {
                    goto lab_0x4aa952;
                } else {
                    goto lab_0x4aa942;
                }
            }
        }
    }
  lab_0x4aa9c0_2:;
    // 0x4aa9c0
    int64_t result3; // 0x4aa830
    return result3;
  lab_0x4aa952:
    // 0x4aa952
    v14 = *(int64_t *)(v15 + (int64_t)&g3);
    result3 = v16;
    if (v14 == 0) {
        // break -> 0x4aa9c0
        goto lab_0x4aa9c0_2;
    }
    goto lab_0x4aa962;
  lab_0x4aa942:;
    int64_t v22 = function_4ad720(v15 + 304); // 0x4aa949
    v16 = v22;
    if ((int32_t)v22 == 0) {
        int64_t v23 = function_4ad750(v15 + 280); // 0x4aa9b7
        v16 = v23;
        result3 = v23;
        if ((int32_t)v23 == 0) {
            // break -> 0x4aa9c0
            goto lab_0x4aa9c0_2;
        }
    }
    goto lab_0x4aa952;
}

// Address range: 0x4ad3e0 - 0x4ad440
int64_t function_4ad3e0(int64_t a1, int64_t a2, int32_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 0x78c085ff); // 0x4ad3e0
    *v1 = *v1 - (int32_t)a2;
    int64_t v2; // 0x4ad3e0
    uint64_t v3 = 0x100000000 * v2 >> 32; // 0x4ad3e6
    if (v2 <= v3) {
        // 0x4ad431
        return 0xffffd680;
    }
    // 0x4ad3ee
    if (*(int64_t *)(v2 + 48) != 0) {
        function_4ad2f0();
    }
    // 0x4ad431
    return a3 - (int32_t)(v2 - v3);
}

// Address range: 0x554bc0 - 0x554c6f
int64_t function_554bc0(void) {
    // 0x554bc0
    int64_t v1; // 0x554bc0
    int64_t result; // 0x554bc0
    int64_t v2; // 0x554bc0
    int64_t v3; // 0x554bc0
    if ((char)v3 == 37) {
      lab_0x554c19:
        // 0x554c19
        if (v3 == v2) {
            // 0x554cca
            return result;
        }
        int64_t v4 = v3 + 313; // 0x554c27
        char v5 = *(char *)(v4 + (int64_t)*(char *)(v1 + 1)); // 0x554c27
        switch (v5) {
            case 0: {
                // 0x554cca
                return result;
            }
            default: {
                // 0x554c42
                if (v5 != 79) {
                    // 0x554cca
                    return result;
                }
            }
            case 69: {
                int64_t v6 = v1 + 2; // 0x554c4c
                if (v3 != v6) {
                    // 0x554c55
                    return (int64_t)*(char *)(v4 + (int64_t)*(char *)v6);
                }
                // 0x554cca
                return result;
            }
        }
    }
    int64_t result2; // 0x554bc0
    if ((char)v3 == 0 || true) {
        // 0x554cca
        return result2;
    }
    int64_t v7; // 0x554bc0
    int64_t v8 = v7;
    unsigned char v9 = *(char *)v8; // 0x554bd9
    int64_t v10 = v9; // 0x554bd9
    char * v11 = (char *)(v3 + 313 + v10); // 0x554be1
    if (*v11 != 0) {
        function_554bc0();
    }
    int64_t v12 = *(int64_t *)(v3 + 64); // 0x554bf5
    result2 = v12;
    // 0x554bd9
    while (v12 == g6) {
        int64_t v13 = v8 + 1; // 0x554bdd
        int64_t v14 = v12; // 0x554c09
        if (v9 != 0) {
            // 0x554c0b
            *v11 = v9;
            v14 = v10;
            v2 = v13;
            result = v10;
            v1 = v8;
            if (v9 == 37) {
                goto lab_0x554c19;
            }
        }
        // 0x554bc4
        result2 = v14;
        if (v3 == v13) {
            // break -> 0x554cca
            break;
        }
        v8 = v13;
        v9 = *(char *)v8;
        v10 = v9;
        v11 = (char *)(v3 + 313 + v10);
        if (*v11 != 0) {
            function_554bc0();
        }
        // 0x554bf1
        v12 = *(int64_t *)(v3 + 64);
        result2 = v12;
    }
    // 0x554cca
    return result2;
}

// Address range: 0x5791c0 - 0x5791d3
int64_t function_5791c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5791c0
    int64_t v1; // 0x5791c0
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x5791c0
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    char * v5 = (char *)(v3 - 0x7bba7f15); // 0x5791c4
    *v5 = *v5 + (char)v3;
    uint16_t v6 = (int16_t)v3; // 0x5791ca
    uint16_t v7 = (int16_t)*(char *)(a2 + 72 + a4); // 0x5791ca
    return v3 & -0x10000 | (int64_t)(v6 / v7 % 256) | (int64_t)(256 * (v6 % v7));
}

// Address range: 0x5791d6 - 0x5792c3
int64_t function_5791d6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x5791d6
    int64_t v1; // 0x5791d6
    int64_t result = v1;
    bool v2; // 0x5791d6
    if (true == !v2) {
        if ((char)(a3 / 256) != 0) {
            // branch -> 0x579224
        }
    } else {
        // 0x5791d8
        *(int32_t *)(result + 8) = (int32_t)a2;
        if ((int32_t)v1 != -1) {
            // 0x5791e0
            __readfsqword(40);
            return result;
        }
    }
    int64_t v3 = *(int64_t *)(result - 24) + result; // 0x57922b
    function_4fc010(v3, *(int32_t *)(v3 + 32) | 2);
    // 0x5791e0
    __readfsqword(40);
    return result;
}

// Address range: 0x57c880 - 0x57c906
int64_t function_57c880(int64_t a1, int64_t a2, int64_t a3, int64_t a4, unsigned char a5) {
    // 0x57c880
    int64_t v1; // 0x57c880
    int32_t * v2 = (int32_t *)(v1 + 80); // 0x57c880
    *v2 = *v2 + 9;
    int64_t v3 = function_5797e0(v1, v1 & 0xffffffff, 0, 0); // 0x57c88e
    *(int64_t *)v1 = v3;
    if (v3 == 0) {
        // 0x57c920
        return 0;
    }
    int64_t v4 = *(int64_t *)(v1 + 24); // 0x57c89f
    int64_t v5 = function_57a000(v4); // 0x57c8ae
    int64_t result = v5; // 0x57c8b5
    if ((int32_t)v5 != 0) {
        result = function_57c7d0();
    }
    // 0x57c8bb
    if (v3 + 8 == v1 | a5 % 2 != 0 | *(char *)v4 != 70) {
        // 0x57c920
        return result;
    }
    // 0x57c8bb
    int64_t result2; // 0x57c880
    while (true) {
        // 0x57c8ef
        int64_t v6; // 0x57c880
        int64_t v7 = *(int64_t *)v6; // 0x57c8ef
        int32_t * v8 = (int32_t *)v7; // 0x57c8f3
        uint32_t v9 = *v8; // 0x57c8f3
        if (v9 != 26) {
            // 0x57c8d0
            result2 = 27;
            if (v9 == 27) {
                // break -> 0x57c920
                break;
            }
            if (v9 == 25) {
                // 0x57c8de
                *v8 = 28;
            }
        } else {
            // 0x57c8fc
            *v8 = 29;
        }
        int64_t v10 = v7 + 8; // 0x57c8e6
        v6 = v10;
        if (v3 + 8 == v10) {
            // 0x57c8ea
            result2 = v9;
            return result2;
        }
    }
  lab_0x57c920:
    // 0x57c920
    return result2;
}
