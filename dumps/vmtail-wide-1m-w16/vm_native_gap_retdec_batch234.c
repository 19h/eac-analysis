/*
 * Targeted RetDec C for native executable gap queue batch 234.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x218666-0x218866 rank=- name=- kind=- bytes=- uncovered=-
 *   0x218866-0x218a66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x218a66-0x218c66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x218c66-0x218e66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x218e66-0x219066 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe5f9c-0xe619c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe619c-0xe639c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe639c-0xe659c rank=- name=- kind=- bytes=- uncovered=-
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
int32_t __asm_in_135(uint16_t port);
char __asm_in_136(uint16_t port);
char __asm_in_137(uint16_t port);
int32_t __asm_in_138(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_134(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_out_136(uint16_t port, int32_t value);
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
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
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
int128_t __asm_pmaxsw(int128_t left, int128_t right);
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
struct _IO_FILE *popen(const char *command, const char *type);
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

int64_t function_218666(int64_t a1, int64_t a2);
int64_t function_218737(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_218898(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_218a0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_218b4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_218c8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_218de7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_218f5c(void);
int64_t function_218f7c(int64_t a1);
int64_t function_218fbf(void);
int64_t function_218fdf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4f1114a2();
int64_t function_c57b8();
int64_t function_e5f9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e5fae(int64_t a1);
int64_t function_e601b(void);
int64_t function_e602a(void);
int64_t function_e6053(void);
int64_t function_e6060(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_e6234(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e63a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6);
int64_t function_e64d0(void);
int64_t function_e64e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e6506(void);
int64_t function_e650b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e6555(void);
int64_t function_e6559(void);
int64_t function_e655d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e6577(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffffafc95641();
int64_t unknown_1b0fb970();
int64_t unknown_2d9dd50();
int64_t unknown_7372863();
int64_t unknown_ffffffffabb1e425();
int64_t unknown_ffffffffd4219918();

// Address range: 0xe5f9c - 0xe5fa9
int64_t function_e5f9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe5f9c
    int64_t result; // 0xe5f9c
    int32_t * v1 = (int32_t *)(result + 2 * a2); // 0xe5f9c
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0xe5fae - 0xe5fb6
int64_t function_e5fae(int64_t a1) {
    // 0xe5fae
    int64_t v1; // 0xe5fae
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0xe601b - 0xe601c
int64_t function_e601b(void) {
    // 0xe601b
    int64_t result; // 0xe601b
    return result;
}

// Address range: 0xe602a - 0xe602b
int64_t function_e602a(void) {
    // 0xe602a
    int64_t result; // 0xe602a
    return result;
}

// Address range: 0xe6053 - 0xe6054
int64_t function_e6053(void) {
    // 0xe6053
    int64_t result; // 0xe6053
    return result;
}

// Address range: 0xe6060 - 0xe6184
int64_t function_e6060(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int64_t v2 = a5;
    int64_t v3; // 0xe6060
    int32_t v4 = v3; // 0xe6062
    bool v5; // 0xe6060
    if ((0x3001e86f - v4 & v4) < 0) {
        int64_t v6 = v5 ? 0xfffffffc : 4; // 0xe606a
        __asm_out_133(82, (char)a2);
        *(int32_t *)(a2 & 0xffffffff) = (int32_t)(v6 + a2) + (int32_t)a1;
        int32_t * v7 = (int32_t *)(v3 + 124); // 0xe607d
        *v7 = *v7 + (int32_t)a4;
        *(int32_t *)v1 = *(int32_t *)&v1 ^ -91;
        return a2 & 0x17c800c5 | v3 + (a2 & 0xff00) & 0xa500 | 0xe8375a3a;
    }
    // 0xe60e7
    function_e6053();
    int32_t * v8 = (int32_t *)((a2 & 0xffffffff) + 0x5a38c790); // 0xe60f6
    *v8 = *v8 + (int32_t)a1;
    uint64_t v9 = a2 & 0xe84c3baf; // 0xe60fc
    int32_t v10 = v3 | (int64_t)&v2; // 0xe6101
    *(int32_t *)-0x7ff19017 = *(int32_t *)-0x7ff19017 + v10;
    char * v11 = (char *)(a2 - 0x17fff8d7 + (v5 ? -4 : 4)); // 0xe6107
    *v11 = *v11 + (char)(a1 / 256);
    int32_t * v12 = (int32_t *)(v3 + 0x1d004000); // 0xe610d
    *v12 = *v12 + v10;
    char * v13 = (char *)(v9 + 5); // 0xe6115
    unsigned char v14 = *v13; // 0xe6115
    unsigned char v15 = v14 + (char)(v9 / 256); // 0xe6115
    *v13 = v15;
    unknown_2d9dd50();
    if (v15 < v14 || v15 == 0) {
        // 0xe6169
        return unknown_1b0fb970() ^ 192;
    }
    int64_t v16 = unknown_ffffffffabb1e425() + 0x8191e39c; // 0xe6131
    int64_t result = v16 & 0xffffffff; // 0xe6131
    *(int32_t *)result = (int32_t)v16;
    return result;
}

// Address range: 0xe6234 - 0xe62be
int64_t function_e6234(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    unsigned char v2 = *(char *)-0x5afec20a5391b0ff; // 0xe62a9
    int64_t result = (int64_t)v2 | 0x42c58a00; // 0xe62a9
    char * v3 = (char *)result; // 0xe62b2
    *v3 = *v3 + v2;
    char * v4 = (char *)(a1 + 0x3d000014); // 0xe62b4
    *v4 = *v4 + (char)(v1 / 256);
    int64_t v5; // 0xe6234
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v5;
    return result;
}

// Address range: 0xe63a6 - 0xe644e
int64_t function_e63a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6) {
    int64_t v1 = a3;
    char v2 = *(char *)-0x54567d4b; // 0xe63ae
    int64_t v3; // 0xe63a6
    *(char *)-0x54567d4b = v2 + (char)((uint64_t)v3 / 256);
    uint32_t v4 = 0x14b4f701 * *(int32_t *)(a4 + 0x3d009829); // 0xe63bf
    int64_t result = v4; // 0xe63bf
    if (a4 != 1 != ((v4 & 0x7650919f) == 0)) {
        // 0xe63d9
        return result;
    }
    // 0xe643f
    *(int32_t *)a3 = v4 + (int32_t)a3;
    int32_t v5 = *(int32_t *)&v1; // 0xe644c
    int64_t v6; // bp-8, 0xe63a6
    *(int32_t *)v1 = v5 + (int32_t)(int64_t)&v6;
    return result;
}

// Address range: 0xe64d0 - 0xe64d1
int64_t function_e64d0(void) {
    // 0xe64d0
    int64_t result; // 0xe64d0
    return result;
}

// Address range: 0xe64e9 - 0xe64fc
int64_t function_e64e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe64e9
    int64_t v1; // 0xe64e9
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(int32_t *)v3 = (int32_t)v3;
    *(int32_t *)(v2 & 0xffffffff) = (int32_t)v2;
    *(int64_t *)((v3 & 0xffffffff) + 40) = a3;
    return (v2 & 0xff00) + v3 & 0xff00 | v2 & 0xffff00ff;
}

// Address range: 0xe6506 - 0xe6507
int64_t function_e6506(void) {
    // 0xe6506
    int64_t result; // 0xe6506
    return result;
}

// Address range: 0xe650b - 0xe651d
int64_t function_e650b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe650b
    int64_t v1; // 0xe650b
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4; // 0xe650b
    bool v5; // 0xe650b
    if (a4 != 1 && !v5) {
        v4 = function_e64d0();
    }
    // 0xe650d
    *(char *)v2 = (char)(v4 / 256 | v2);
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)v1;
    unknown_ffffffffd4219918();
    __asm_wait();
    return function_ffffffffafc95641();
}

// Address range: 0xe6555 - 0xe6556
int64_t function_e6555(void) {
    // 0xe6555
    int64_t result; // 0xe6555
    return result;
}

// Address range: 0xe6559 - 0xe655c
int64_t function_e6559(void) {
    // 0xe6559
    int64_t result; // 0xe6559
    return result;
}

// Address range: 0xe655d - 0xe6577
int64_t function_e655d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)unknown_7372863(); // 0xe6562
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0xe655d
    char * v3 = (char *)(a2 - 0x918e687 + v2); // 0xe6564
    *v3 = *v3 | (char)v2;
    function_e6555();
    int64_t v4 = v2; // 0xe656d
    *(int32_t *)v4 = *(int32_t *)&v2 + (int32_t)v4;
    return function_e6506();
}

// Address range: 0xe6577 - 0xe6588
int64_t function_e6577(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe6577
    int64_t v1; // 0xe6577
    char * v2 = (char *)((a4 & 0xffffffff) + 0x5f8601e8 + 4 * v1); // 0xe6578
    *v2 = *v2 + (char)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x218666 - 0x218737
int64_t function_218666(int64_t a1, int64_t a2) {
    // 0x218666
    int64_t v1; // 0x218666
    __asm_out(72, (int32_t)v1);
    int64_t v2; // 0x218666
    int64_t v3 = (int64_t)&v2; // 0x218687
    v2 = v3;
    int64_t * v4 = (int64_t *)(v3 - 8); // 0x218697
    int64_t v5 = *(int64_t *)(v3 + 32); // 0x21869a
    *v4 = v5;
    int64_t v6 = v3 - 16; // 0x21869e
    int64_t * v7 = (int64_t *)v6; // 0x21869e
    *v7 = v3;
    int64_t * v8 = (int64_t *)(v3 + 8); // 0x2186be
    int64_t v9 = *v8; // 0x2186be
    *v7 = v9;
    int64_t * v10 = (int64_t *)(v3 - 24); // 0x2186c2
    int64_t * v11 = (int64_t *)(v3 - 32); // 0x2186d7
    *v10 = 0x14a55555;
    *v11 = v5;
    *v4 = *v10;
    *v10 = 0x13ff192;
    *v11 = 0x6f8c727c;
    *(int64_t *)(v3 - 40) = v9;
    *v8 = *v10;
    *v11 = *v7;
    *v10 = v6;
    *v7 = v3;
    return function_c57b8(a2, v1, v1, v1, v1, v1);
}

// Address range: 0x218737 - 0x218898
int64_t function_218737(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x218737
    int64_t v1; // bp-32, 0x218737
    int64_t v2 = (int64_t)&v1; // 0x2187a9
    v1 = a6;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x218811
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x21881a
    *v4 = a6;
    *(int64_t *)(v2 + 16) = a6;
    *v4 = 0x46944e75;
    *(int64_t *)(v2 - 24) = 0x216f84;
    *(int64_t *)(v2 + 24) = *v3;
    *v4 = *v3;
    *v3 = v2 + 8;
    int64_t v5; // 0x218737
    return function_c57b8(a1, a2, a3, a4, a5, v5);
}

// Address range: 0x218898 - 0x218a0e
int64_t function_218898(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x2171ae; // bp-24, 0x2188ec
    int64_t v2; // bp-56, 0x218898
    v2 = (int64_t)&v2;
    int64_t v3 = (int64_t)&v1; // 0x2189db
    *(int64_t *)(v3 - 8) = v3 + 8;
    int64_t v4; // 0x218898
    return function_c57b8(a1, a2, a3, a4, a5, v4);
}

// Address range: 0x218a0e - 0x218b4e
int64_t function_218a0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x218a0e
    int64_t v1; // bp-32, 0x218a0e
    int64_t v2 = (int64_t)&v1; // 0x218a70
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x218a78
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x218a87
    *v4 = 0x2ea8d14e;
    int64_t v5 = v2 - 24; // 0x218a8c
    int64_t * v6 = (int64_t *)v5; // 0x218a8c
    int64_t * v7 = (int64_t *)(v2 - 32); // 0x218a90
    int64_t v8 = *(int64_t *)(v2 + 24); // 0x218a99
    *v4 = v8;
    *v6 = v8;
    int64_t * v9 = (int64_t *)(v2 + 8); // 0x218aaf
    int64_t v10 = *v9; // 0x218aaf
    *v4 = v10;
    *v6 = 0x48895414;
    *(int64_t *)(v2 - 40) = v8;
    *v7 = v8;
    *(int64_t *)v3 = *v6;
    *v6 = 0x2afdeab4;
    *v7 = v10;
    *v9 = *v6;
    *v7 = v5;
    *v6 = v3;
    return function_c57b8(a1, a2, 0x3b02602d, a4, a5, v8);
}

// Address range: 0x218b4e - 0x218c8e
int64_t function_218b4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x218b4e
    int64_t v1; // bp-56, 0x218b4e
    int64_t v2 = (int64_t)&v1; // 0x218c0b
    int64_t v3 = v2 + 16; // 0x218c26
    bool v4; // 0x218b4e
    *(int64_t *)v3 = 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    v1 = 0x75463877;
    *(int64_t *)(v2 - 16) = 0x2178ce;
    *(int64_t *)(v2 + 32) = v1;
    v1 = a4;
    *(int64_t *)(v2 - 8) = v2;
    int64_t v5 = v1; // 0x218c84
    v1 = v3;
    int64_t v6; // 0x218b4e
    return function_c57b8(a1, a2, a3, v5, 0x2178ce, v6);
}

// Address range: 0x218c8e - 0x218de7
int64_t function_218c8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x218c8e
    int64_t v1; // 0x218c8e
    return function_c57b8(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x218de7 - 0x218f2e
int64_t function_218de7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x218de7
    int64_t v1; // bp-24, 0x218de7
    int64_t v2 = (int64_t)&v1; // 0x218e1e
    v1 = 0x217d3f;
    int64_t * v3 = (int64_t *)(v2 - 24); // 0x218e46
    int64_t v4 = v2 - 16; // 0x218e4c
    int64_t * v5 = (int64_t *)v4; // 0x218e4c
    *v5 = 0x4ef8fbe;
    int64_t v6 = v2 - 32; // 0x218e56
    int64_t * v7 = (int64_t *)v6; // 0x218e56
    *v7 = a2;
    int64_t v8 = *(int64_t *)(v2 + 16); // 0x218e6a
    *v3 = v8;
    *v7 = v4;
    *v3 = v1;
    int64_t v9 = v2 - 40; // 0x218e94
    int64_t * v10 = (int64_t *)v9; // 0x218ea4
    *v10 = v9;
    *v7 = v8;
    *(int64_t *)(v2 - 8) = *v3;
    *v3 = v1;
    *v10 = *v7;
    *(int64_t *)(v2 + 8) = *v3;
    *v3 = *v5;
    *v10 = v6;
    *v7 = v4;
    int64_t v11 = *v5; // 0x218f10
    *v3 = v11;
    *v7 = v11;
    int64_t v12; // 0x218de7
    return function_c57b8(a1, *v7, a3, v12, v12, v12);
}

// Address range: 0x218f5c - 0x218f61
int64_t function_218f5c(void) {
    // 0x218f5c
    return function_4f1114a2();
}

// Address range: 0x218f7c - 0x218f7f
int64_t function_218f7c(int64_t a1) {
    // 0x218f7c
    int64_t result; // 0x218f7c
    return result;
}

// Address range: 0x218fbf - 0x218fc2
int64_t function_218fbf(void) {
    // 0x218fbf
    int64_t result; // 0x218fbf
    return result;
}

// Address range: 0x218fdf - 0x219064
int64_t function_218fdf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x218fdf
    int64_t v1; // 0x218fdf
    int64_t v2 = v1;
    char * v3 = (char *)(v2 - 127); // 0x218fdf
    *v3 = *v3 | (char)a4;
    return (char)v2 == 0 ? v2 : a5;
}
