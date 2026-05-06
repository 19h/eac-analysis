/*
 * Targeted RetDec C for native executable gap queue batch 196.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4ad3b0-0x4ad3e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b1d90-0x4b1e79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x62c80-0x62d6d rank=- name=- kind=- bytes=- uncovered=-
 *   0x4926da-0x492820 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5bb9c-0x5bca0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5790b0-0x5791c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57c770-0x57c880 rank=- name=- kind=- bytes=- uncovered=-
 *   0x554b00-0x554bc0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
extern int g17;
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

int64_t function_1ff50();
int64_t function_20110();
int64_t function_20550();
int64_t function_20730();
int64_t function_24ded();
int64_t function_251e8();
int64_t function_254fe();
int64_t function_25712();
int64_t function_29cea();
int64_t function_29cf4();
int64_t function_36622();
int64_t function_491fda();
int64_t function_492512();
int64_t function_4926da(int64_t a1);
int64_t function_492796(void);
int64_t function_492798(void);
int64_t function_49279c(void);
int64_t function_4927a6(void);
int64_t function_4927ac(int64_t a1);
int64_t function_4927ce(int64_t a1, int64_t a2);
int64_t function_4ad3a3();
int64_t function_4ad3b0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4b0890();
int64_t function_4b08f0();
int64_t function_4b0d80();
int64_t function_4b1d20();
int64_t function_4b1d90(void);
int64_t function_4b1d98(int64_t a1, int64_t a2);
int64_t function_4b1dcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4b1df0(void);
int64_t function_4b1e00(void);
int64_t function_4b1e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f0a80();
int64_t function_4f0eb0();
int64_t function_4f5b50();
int64_t function_5423f0();
int64_t function_554b00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_566390();
int64_t function_5790b0(int64_t a1, int64_t a2);
int64_t function_57a000();
int64_t function_57ac30();
int64_t function_57c770(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5b3e6();
int64_t function_5bb9c(int64_t a1, int64_t a2);
int64_t function_61bf0();
int64_t function_61bfc();
int64_t function_62bf7();
int64_t function_62c80(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_62d5c(void);
int64_t function_62d5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_7293a();

// Address range: 0x5bb9c - 0x5bc9e
int64_t function_5bb9c(int64_t a1, int64_t a2) {
    // 0x5bb9c
    __readfsqword(40);
    int64_t v1 = a2 - 24; // 0x5bbc3
    if ((char)function_29cea(v1) == 0) {
        // 0x5bbf4
        function_29cf4(v1, 0);
    } else {
        if (v1 != (int64_t)&g15) {
            // 0x5bbe4
            function_5b3e6(v1);
        }
        // 0x5bbe9
        *(int64_t *)a2 = (int64_t)&g16;
    }
    // 0x5bbff
    function_251e8(a1 + 8);
    *(int64_t *)(a1 + 16) = -1;
    *(int64_t *)(a1 + 24) = -1;
    if (*(int64_t *)(a1 - 16) == 0) {
        // 0x5bc1e
        return function_36622(a2, L"Config file data empty");
    }
    int64_t result = function_24ded(&g1); // 0x5bc5b
    uint64_t v2 = *(int64_t *)((int64_t)&g1 - 24); // 0x5bc69
    if (result != 0) {
        // 0x5bc79
        if (v2 > 1) {
            // 0x5bc82
            return 1;
        }
        // 0x5bc82
        return result;
    }
    // 0x5bc6f
    if (v2 != 0) {
        // 0x5bc82
        return result;
    }
    // 0x5bc82
    return result;
}

// Address range: 0x62c80 - 0x62d5c
int64_t function_62c80(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x62c80
    bool v1; // 0x62c80
    int64_t v2; // 0x62c80
    if (false != !v1) {
        // 0x62c87
        function_4f0a80(v2);
        return function_62bf7();
    }
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x62ca5
    int64_t * v4; // 0x62c80
    if (*v3 - v2 < a3) {
        int64_t v5 = function_61bfc(a3); // 0x62cb9
        function_61bf0(v2);
        *(int64_t *)v2 = v5;
        int64_t * v6 = (int64_t *)(v2 + 8);
        *v6 = v5;
        *v3 = v5 + a3;
        v4 = v6;
    } else {
        // 0x62ca5
        v4 = (int64_t *)(v2 + 8);
    }
    int64_t * v7 = (int64_t *)(v2 + 8);
    int64_t * v8 = (int64_t *)(v2 + 256);
    int64_t v9; // 0x62c80
    int64_t v10 = v9;
    int64_t v11 = *(int64_t *)(v10 + 40); // 0x62ce5
    *(int64_t *)(v2 - 16) = 0;
    function_25712(v2, *v4, v11, *(int64_t *)(v10 + 48));
    int64_t v12 = function_4f0a80(v10); // 0x62cfb
    int64_t v13 = function_4f0eb0(v10, v2); // 0x62d09
    *v7 = v13;
    function_254fe(v13 + 40);
    function_4eeb50(*v7);
    *v8 = *v8 - 1;
    while (v2 != v10) {
        // 0x62cdc
        v10 = v12;
        v11 = *(int64_t *)(v10 + 40);
        *(int64_t *)(v2 - 16) = 0;
        function_25712(v2, *v4, v11, *(int64_t *)(v10 + 48));
        v12 = function_4f0a80(v10);
        v13 = function_4f0eb0(v10, v2);
        *v7 = v13;
        function_254fe(v13 + 40);
        function_4eeb50(*v7);
        *v8 = *v8 - 1;
    }
    // 0x62d46
    *(int64_t *)(v2 + 264) = *(int64_t *)v2;
    int64_t result = function_62d5e((int64_t)&g17, (int64_t)&g17, (int64_t)&g17, (int64_t)&g17, (int64_t)&g17, (int64_t)&g17); // 0x62d5a
    return result;
}

// Address range: 0x62d5c - 0x62d5e
int64_t function_62d5c(void) {
    // 0x62d5c
    return 0;
}

// Address range: 0x62d5e - 0x62d6d
int64_t function_62d5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x62d5e
    int64_t result; // 0x62d5e
    return result;
}

// Address range: 0x4926da - 0x492795
int64_t function_4926da(int64_t a1) {
    // 0x4926da
    if (*(char *)&g4 != 0) {
        // 0x492781
        return function_492512(&g5, a1, *(int64_t *)(a1 + 8));
    }
    int64_t v1 = function_20550(&g4); // 0x4926f3
    int64_t v2 = (int64_t)&g4; // 0x4926fa
    if ((int32_t)v1 != 0) {
        // 0x492700
        function_7293a(&g6);
        g8 = 1;
        g9 = 0;
        g10 = 0;
        g7 = (int64_t)&g13;
        *(int32_t *)&g11 = 0x3f800000;
        g12 = 0;
        g13 = 0;
        function_1ff50(&g4);
        __cxa_atexit((void (*)(int64_t *))0x491d7a, &g5, (int64_t *)0x849800);
        v2 = 0x491d7a;
    }
    // 0x492781
    return function_492512(&g5, v2, *(int64_t *)(a1 + 8));
}

// Address range: 0x492796 - 0x492797
int64_t function_492796(void) {
    // 0x492796
    int64_t result; // 0x492796
    return result;
}

// Address range: 0x492798 - 0x49279b
int64_t function_492798(void) {
    // 0x492798
    return 0;
}

// Address range: 0x49279c - 0x4927a6
int64_t function_49279c(void) {
    // 0x49279c
    int64_t v1; // 0x49279c
    return function_4eeb30(v1, 24);
}

// Address range: 0x4927a6 - 0x4927ab
int64_t function_4927a6(void) {
    // 0x4927a6
    return function_49279c();
}

// Address range: 0x4927ac - 0x4927cd
int64_t function_4927ac(int64_t a1) {
    // 0x4927ac
    if (a1 == 0) {
        // 0x4927cb
        int64_t result; // 0x4927ac
        return result;
    }
    // 0x4927b5
    function_491fda(a1);
    return function_4eeb30(a1, 32);
}

// Address range: 0x4927ce - 0x492813
int64_t function_4927ce(int64_t a1, int64_t a2) {
    // 0x4927ce
    *(int64_t *)a1 = a2;
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4927dd
    *v1 = 0;
    int64_t v2 = function_4efd30(24); // 0x4927ea
    *(int64_t *)(v2 + 16) = a2;
    *(int64_t *)(v2 + 8) = 0x100000001;
    *v1 = v2;
    *(int64_t *)v2 = (int64_t)&g2;
    int64_t result; // 0x4927ce
    return result;
}

// Address range: 0x4ad3b0 - 0x4ad3de
int64_t function_4ad3b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ad3b0
    int64_t v1; // 0x4ad3b0
    int64_t v2 = v1;
    int64_t v3 = v2 & -256 | (int64_t)(*(char *)(v2 - 0x2f8a8006) + (char)v2); // 0x4ad3b2
    *(char *)(v3 + v1) = 63;
    int64_t v4 = v3 + 1; // 0x4ad3bd
    int64_t v5 = v4; // 0x4ad3c5
    if (*(int64_t *)(v1 + 32) > v4) {
        v5 = function_4ad3a3();
    }
    // 0x4ad3c7
    *(char *)(v1 + 32 + v5) = 0;
    return 0;
}

// Address range: 0x4b1d90 - 0x4b1d92
int64_t function_4b1d90(void) {
    int64_t result = function_4b1dcd((int64_t)&g17, (int64_t)&g17, (int64_t)&g17, (int64_t)&g17, (int64_t)&g17, (int64_t)&g17); // 0x4b1d90
    return result;
}

// Address range: 0x4b1d98 - 0x4b1dcd
int64_t function_4b1d98(int64_t a1, int64_t a2) {
    // 0x4b1d98
    int64_t v1; // 0x4b1d98
    uint64_t v2 = v1;
    if (v2 >= 0x4000000000000000) {
        function_4b1e00();
    }
    // 0x4b1da7
    return function_4b08f0(v1, (v2 / 16 & 0x3ffffffffffffff) + (int64_t)(v2 % 16 != 0));
}

// Address range: 0x4b1dcd - 0x4b1de9
int64_t function_4b1dcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4b1dcd
    int64_t v1; // bp+32, 0x4b1dcd
    function_4b0890(&v1);
    int64_t v2; // 0x4b1dcd
    return v2 & 0xffffffff;
}

// Address range: 0x4b1df0 - 0x4b1dfc
int64_t function_4b1df0(void) {
    // 0x4b1df0
    int64_t v1; // 0x4b1df0
    *(int32_t *)v1 = -1;
    return function_4b1d20();
}

// Address range: 0x4b1e00 - 0x4b1e08
int64_t function_4b1e00(void) {
    // 0x4b1e00
    int64_t result; // 0x4b1e00
    return result;
}

// Address range: 0x4b1e10 - 0x4b1e77
int64_t function_4b1e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4b1e10
    int64_t v1; // 0x4b1e10
    int64_t v2 = function_4b0d80(v1, 0); // 0x4b1e15
    int64_t result = v2; // 0x4b1e1f
    if ((int32_t)v2 != 0) {
        result = function_4b1dcd((int64_t)&g17, (int64_t)&g17, (int64_t)&g17, (int64_t)&g17, (int64_t)&g17, (int64_t)&g17);
    }
    // 0x4b1e21
    return result;
}

// Address range: 0x554b00 - 0x554bbb
int64_t function_554b00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    uint64_t v1 = function_566390(&g14); // 0x554b0b
    int64_t v2 = *(int64_t *)((int64_t)&g14 + 8); // 0x554b17
    int64_t v3 = (int64_t)&g14; // 0x554b1b
    int64_t v4; // 0x554b00
    int64_t v5; // 0x554b00
    int64_t v6; // 0x554b00
    int64_t v7; // 0x554b00
    if (*(int64_t *)((int64_t)&g14 + 16) > v1) {
        int64_t v8 = *(int64_t *)(v2 + 8 * v1); // 0x554b1d
        v3 = 0;
        if (v8 == 0) {
            goto lab_0x554b42;
        } else {
            int64_t result = function_20730(v8, 0x847658, &g3, 0); // 0x554b36
            v4 = 208;
            v6 = (int64_t)&g3;
            v7 = 0x847658;
            v5 = v8;
            if (result != 0) {
                // 0x554b40
                return result;
            }
            goto lab_0x554b47;
        }
    } else {
        goto lab_0x554b42;
    }
  lab_0x554b42:
    // 0x554b42
    function_5423f0();
    v4 = v2 + 208;
    v6 = (int64_t)&g14;
    v7 = a2;
    v5 = v3;
    goto lab_0x554b47;
  lab_0x554b47:
    // 0x554b47
    function_20110();
    int64_t result2 = function_554b00(v4, v7, v6, a7, a5, a6, a7, v5); // 0x554ba3
    if (a7 == a8) {
        // 0x554b40
        return result2;
    }
    // 0x554ba9
    return 0x100000000000000 * a5 >> 56;
}

// Address range: 0x5790b0 - 0x5791bc
int64_t function_5790b0(int64_t a1, int64_t a2) {
    // 0x5790b0
    __readfsqword(40);
    if (a2 == 1) {
        // 0x5791c8
        return 0;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x5790db
    *v1 = 0;
    char v2; // bp-65, 0x5790b0
    int64_t result = function_4f5b50((int64_t *)&v2, a1, 1); // 0x5790f3
    if (a2 < 1 || v2 == 0) {
        // 0x5791c8
        return result;
    }
    int64_t v3 = *(int64_t *)((int64_t)&v2 - 24); // 0x579113
    int64_t v4 = *(int64_t *)(a1 + 232 + v3); // 0x579117
    int64_t * v5 = (int64_t *)(v4 + 16); // 0x57911f
    int64_t result2 = *v5; // 0x57911f
    int64_t * v6 = (int64_t *)(v4 + 24); // 0x579124
    uint64_t v7 = *v6; // 0x579124
    if (v7 <= result2) {
        // 0x5791c8
        return result2;
    }
    int64_t v8 = *v1; // 0x579132
    int64_t v9 = result2; // 0x57914b
    if (v8 >= a2) {
      lab_0x57919d:;
        int64_t result3 = (int64_t)*(char *)v9;
        if (a2 != 0x7fffffffffffffff) {
            // 0x5791c8
            return result3;
        }
        // 0x5791b5
        *v1 = -0x8000000000000000;
        return result3;
    }
    int64_t v10 = a2 - v8; // 0x579163
    int64_t v11 = v7 - result2; // 0x579169
    int64_t v12 = v10 - v11; // 0x57916c
    int64_t v13 = v12 < 0 == ((v12 ^ v10) & (v10 ^ v11)) < 0 == (v12 != 0) ? v11 : v10; // 0x57916f
    int64_t v14 = v8; // 0x579177
    int64_t v15 = v7; // 0x579177
    if (v13 < 2) {
        // 0x5791c8
        return result2;
    }
    int64_t v16 = v13 + result2; // 0x57917d
    v14 += v13;
    *v5 = v16;
    *v1 = v14;
    int64_t result4 = v16; // 0x57918f
    while (v15 > v16) {
        // 0x579195
        v9 = v16;
        if (v14 >= a2) {
            goto lab_0x57919d;
        }
        // 0x579195
        v15 = *v6;
        int64_t v17 = *v5;
        int64_t v18 = a2 - v14; // 0x579163
        int64_t v19 = v15 - v17; // 0x579169
        int64_t v20 = v18 - v19; // 0x57916c
        int64_t v21 = v20 < 0 == ((v20 ^ v18) & (v18 ^ v19)) < 0 == (v20 != 0) ? v19 : v18; // 0x57916f
        result4 = v17;
        if (v21 < 2) {
            // break -> 0x5791c8
            break;
        }
        v16 = v21 + v17;
        v14 += v21;
        *v5 = v16;
        *v1 = v14;
        result4 = v16;
    }
    // 0x5791c8
    return result4;
}

// Address range: 0x57c770 - 0x57c877
int64_t function_57c770(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x57c78a
    int64_t v2 = *v1; // 0x57c78a
    int64_t result = function_57a000(v2); // 0x57c7bd
    if ((int32_t)result == 0) {
        // 0x57c880
        return result;
    }
    int64_t result2 = v2 + 1; // 0x57c7d0
    *v1 = result2;
    switch (*(char *)v2) {
        case 114: {
        }
        case 86: {
        }
        case 75: {
            // 0x57c880
            return result2;
        }
    }
    char * v3 = (char *)result2; // 0x57c7f6
    if (*v3 == 0) {
        // 0x57c880
        return result2;
    }
    // 0x57c800
    *v1 = v2 + 2;
    unsigned char v4 = *v3; // 0x57c808
    if (v4 == 120) {
        // 0x57c880
        return 120;
    }
    int64_t result3 = v4; // 0x57c808
    if ((result3 & 223) != 79) {
        // 0x57c880
        return result3;
    }
    int32_t * v5 = (int32_t *)(a1 + 80); // 0x57c822
    *v5 = *v5 + 9;
    if (v4 != 79) {
        // 0x57c880
        return result3;
    }
    int32_t * v6 = (int32_t *)(a1 + 84); // 0x57c82f
    *v6 = 1;
    int64_t v7 = function_57ac30(a1); // 0x57c842
    if (v7 == 0) {
        // 0x57c880
        return 0;
    }
    int64_t result4 = *v1; // 0x57c85b
    if (*(char *)result4 != 69) {
        // 0x57c880
        return result4;
    }
    int64_t result5 = result4 + 1; // 0x57c868
    *v1 = result5;
    return result5;
}
