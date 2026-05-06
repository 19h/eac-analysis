/*
 * Targeted RetDec C for native executable gap queue batch 807.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3c19dd-0x3c1bdd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c1bdd-0x3c1ddd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c1ddd-0x3c1fdd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c1fdd-0x3c21dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c21dd-0x3c23dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x51dfc0-0x51e1c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51e1c0-0x51e3c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51e3c0-0x51e5c0 rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
typedef struct { uint8_t bytes[108]; } int864_t;
typedef struct { uint8_t bytes[32]; } int256_t;
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
void __asm_out_138(uint16_t port, char value);
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint32_t __readfsdword(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
void __writefsbyte(int64_t offset, uint8_t value);
void __writegsbyte(int64_t offset, uint8_t value);
void __writegsdword(int64_t offset, uint32_t value);
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
int64_t unknown_b6ccb9(void);
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
void __asm_rcl_133(int32_t value);
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt();
void __asm_clts(void);
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_emms(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
void __asm_fldenv(int224_t value);
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int256_t __asm_vpcmpeqw(int256_t left, int256_t right);
int256_t __asm_vprord(int256_t value, int count);
int256_t __asm_vpaddd(int256_t left, int256_t right);
int256_t __asm_vpxord(int256_t left, int256_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psadbw(int128_t left, int128_t right);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_vpunpckhdq(int128_t left, int128_t right);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
int128_t __asm_pmaxub(int128_t left, int128_t right);
int128_t __asm_pmaxsw(int128_t left, int128_t right);
int128_t __asm_pmulhw(int128_t left, int128_t right);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_addps(int128_t left, int128_t right);
int128_t __asm_maxps(int128_t left, int128_t right);
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

int64_t function_3c19dd(void);
int64_t function_3c19df(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c1a1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3c1b83(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c1caa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c1dfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3c1f46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3c20a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3c21f6(void);
int64_t function_3c2298(void);
int64_t function_3c22cf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c22de(void);
int64_t function_3c2357(void);
int64_t function_3c239d(void);
int64_t function_3c23c1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_51dfc0(int64_t a1);
int64_t function_566390();
int64_t function_caf2a();
int64_t unknown_4f946d5();
int64_t unknown_ffffffffe8bae9de();

// Address range: 0x3c19dd - 0x3c19de
int64_t function_3c19dd(void) {
    // 0x3c19dd
    int64_t result; // 0x3c19dd
    return result;
}

// Address range: 0x3c19df - 0x3c1a1f
int64_t function_3c19df(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c19df
    int64_t v1; // bp+24, 0x3c19df
    int64_t v2; // 0x3c19df
    return function_caf2a(a1, a2, a3, v2, v2, v2, (int64_t)&v1);
}

// Address range: 0x3c1a1f - 0x3c1b83
int64_t function_3c1a1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3c1a1f
    int64_t v1; // bp-32, 0x3c1a1f
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x3c1a1f
    return function_caf2a(a1, a2, a3, a4, a5, v2, 169);
}

// Address range: 0x3c1b83 - 0x3c1caa
int64_t function_3c1b83(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x39b99095; // bp-40, 0x3c1bf9
    int64_t v2 = (int64_t)&v1; // 0x3c1c29
    int64_t v3 = v2 - 8; // 0x3c1c31
    int64_t * v4 = (int64_t *)v3; // 0x3c1c31
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x3c1c35
    *v4 = 0x3887d5bd;
    *v5 = 0x694de032;
    bool v6; // 0x3c1b83
    *(int64_t *)(v2 - 24) = 0x4000 * (int64_t)v6 | 2048 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 128 * (int64_t)v6 | 64 * (int64_t)v6 | 16 * (int64_t)v6 | (int64_t)v6 | 4 * (int64_t)v6 | 2;
    int64_t v7 = v2 + 8; // 0x3c1c55
    int64_t * v8 = (int64_t *)v7; // 0x3c1c55
    *v8 = *v4;
    *v4 = 0x69ec604e;
    *v5 = *(int64_t *)(v2 + 16);
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v1;
    *v5 = v1;
    v1 = *v8;
    *v4 = a3;
    *v5 = v3;
    *v4 = v7;
    int64_t v9; // 0x3c1b83
    return function_caf2a(a1, a2, *v4, a4, v9, v9, v1);
}

// Address range: 0x3c1caa - 0x3c1dfc
int64_t function_3c1caa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c1caa
    int64_t v1; // 0x3c1caa
    return function_caf2a(a1, a2, a3, a4, v1, v1, 0x6e72194f);
}

// Address range: 0x3c1dfc - 0x3c1f46
int64_t function_3c1dfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3c1dfc
    int64_t v1; // bp-48, 0x3c1dfc
    v1 = (int64_t)&v1 + 8;
    return function_caf2a(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x3c1f46 - 0x3c20a6
int64_t function_3c1f46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6; // bp-40, 0x3c1fde
    int64_t * v2 = (int64_t *)(a3 - 8); // 0x3c202e
    *v2 = 0x16311b81;
    *(int64_t *)(a3 - 16) = a6;
    *(int64_t *)(a3 + 8) = *v2;
    int64_t * v3 = (int64_t *)a3; // 0x3c2061
    *v3 = a2;
    *v2 = a4;
    int64_t v4 = *v3; // 0x3c2084
    int64_t v5 = a3 + 16 ^ a2 ^ v4; // 0x3c2084
    *v3 = v5;
    int64_t v6 = *(int64_t *)v5; // 0x3c2092
    *(int64_t *)(v5 - 8) = v6;
    *(int64_t *)(v5 - 16) = v6;
    int64_t v7; // 0x3c1f46
    return function_caf2a(a1, v4, a3, *v2, a5, v7, (int64_t)&v1);
}

// Address range: 0x3c20a6 - 0x3c21f6
int64_t function_3c20a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3c20a6
    int64_t v1; // bp-64, 0x3c20a6
    int64_t v2 = (int64_t)&v1; // 0x3c217e
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3c2187
    bool v4; // 0x3c20a6
    *v3 = 0x4000 * (int64_t)(bool)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    *(int64_t *)(v2 + 16) = v1;
    v1 = a3;
    *v3 = a2;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x3c2193
    *v5 = a3;
    *v3 = a6;
    *v5 = a4;
    *(int64_t *)(v2 + 40) = a3;
    int64_t v6 = v1; // 0x3c21a7
    int64_t v7 = v2 + 8; // 0x3c21a7
    *v3 = v7;
    v1 = v2 + 24;
    *v3 = *(int64_t *)v7;
    return function_caf2a(a1, *v3, v6, *v5, a5, *v3, 0x7b6e5026);
}

// Address range: 0x3c21f6 - 0x3c21fb
int64_t function_3c21f6(void) {
    // 0x3c21f6
    int64_t result; // 0x3c21f6
    return result;
}

// Address range: 0x3c2298 - 0x3c229b
int64_t function_3c2298(void) {
    // 0x3c2298
    int64_t result; // 0x3c2298
    return result;
}

// Address range: 0x3c22cf - 0x3c22d9
int64_t function_3c22cf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c22cf
    int64_t v1; // 0x3c22cf
    *(int32_t *)(v1 + 0x1e8dc6d) = (int32_t)v1;
    return __asm_sti(a1, a2, a3);
}

// Address range: 0x3c22de - 0x3c22df
int64_t function_3c22de(void) {
    // 0x3c22de
    int64_t result; // 0x3c22de
    return result;
}

// Address range: 0x3c2357 - 0x3c2359
int64_t function_3c2357(void) {
    // 0x3c2357
    int64_t v1; // 0x3c2357
    return function_3c23c1(v1, v1, v1);
}

// Address range: 0x3c239d - 0x3c239f
int64_t function_3c239d(void) {
    // 0x3c239d
    int64_t v1; // 0x3c239d
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x3c23c1 - 0x3c23dd
int64_t function_3c23c1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c23c1
    *(int32_t *)-0x30934938 = *(int32_t *)-0x30934938 + (int32_t)a1;
    int64_t v1 = unknown_4f946d5(); // 0x3c23cf
    int32_t * v2 = (int32_t *)(a3 + 85); // 0x3c23d4
    *v2 = *v2 + 1;
    *(char *)a1 = (char)v1;
    bool v3; // 0x3c23c1
    return unknown_ffffffffe8bae9de((v3 ? -1 : 1) + a1);
}

// Address range: 0x51dfc0 - 0x51e5bd
int64_t function_51dfc0(int64_t a1) {
    // 0x51dfc0
    __readfsqword(40);
    int64_t v1; // 0x51dfc0
    int64_t result = *(int64_t *)(*(int64_t *)(v1 + 208) + 24) + 8 * function_566390(); // 0x51dff0
    int64_t v2 = *(int64_t *)result; // 0x51dff4
    if (v2 == 0) {
        // 0x51e698
        return result;
    }
    uint32_t v3 = *(int32_t *)(v1 + 24) & 74; // 0x51e010
    int32_t v4 = 8; // 0x51e016
    int64_t result2 = result; // 0x51e016
    if (v3 != 64) {
        // 0x51e018
        v4 = v3 != 8 ? 10 : 16;
        result2 = 10;
    }
    // 0x51e02c
    if ((int32_t)v1 == -1 || v1 == 0) {
        // 0x51e698
        return result2;
    }
    // 0x51e03f
    int64_t * v5; // 0x51dfc0
    int64_t * v6; // 0x51dfc0
    int64_t result4; // 0x51dfc0
    int64_t v7; // 0x51dfc0
    int64_t v8; // 0x51dfc0
    int64_t v9; // 0x51dfc0
    int64_t v10; // 0x51dfc0
    int32_t v11; // 0x51dfc0
    char v12; // 0x51dfc0
    char * v13; // 0x51e079
    char * v14; // 0x51e09a
    int64_t v15; // 0x51e0d5
    char v16; // 0x51e136
    if (a1 == 0) {
        unsigned char v17 = *(char *)(v2 + 110); // 0x51e074
        int64_t result3 = v17; // 0x51e074
        v13 = (char *)(v2 + 32);
        char v18 = *v13; // 0x51e079
        char v19 = v1; // 0x51e07e
        if (v17 != v19) {
            // 0x51e087
            if (*(char *)(v2 + 111) != v19) {
                // 0x51e698
                return result3;
            }
        }
        // 0x51e091
        result4 = result3;
        if (v18 != 0) {
            // 0x51e698
            return result4;
        }
        int64_t v20 = v1 & 0xffffffff; // 0x51e071
        v14 = (char *)(v2 + 72);
        if (*v14 == v19) {
            // 0x51e09a
            v6 = (int64_t *)(v1 + 24);
            v5 = (int64_t *)(v1 + 16);
            v8 = result3;
            v15 = v20;
            v16 = v18;
            goto lab_0x51e13b;
        } else {
            // 0x51e0a4
            if (v1 == 0) {
                // 0x51e698
                return result3;
            }
            int64_t * v21 = (int64_t *)(v1 + 16);
            uint64_t result5 = *v21; // 0x51e0ad
            int64_t * v22 = (int64_t *)(v1 + 24);
            uint64_t v23 = *v22; // 0x51e0b2
            if (result5 >= v23) {
                // 0x51e698
                return result5;
            }
            int64_t v24 = result5 + 1; // 0x51e0c0
            *v21 = v24;
            result4 = v24;
            if (v24 >= v23) {
                // 0x51e698
                return result4;
            }
            if (v1 == 0) {
                // 0x51e133
                v15 = (int64_t)*(char *)v24;
                v16 = *v13;
                v6 = v22;
                v5 = v21;
                v8 = v24;
                v7 = v15;
                goto lab_0x51e13b;
            } else {
                // 0x51e0db
                if ((int32_t)v1 == -1) {
                    // 0x51e698
                    return 0;
                }
                // 0x51e0f0
                v12 = 1;
                v11 = v4;
                v9 = v20;
                v10 = (int64_t)*v13;
                goto lab_0x51e215;
            }
        }
    } else {
        // 0x51e047
        int32_t v25; // 0x51dfc0
        if (v25 == -1) {
            // 0x51e698
            return 0;
        }
        // 0x51e570
        v12 = 1;
        v11 = v4;
        v9 = 0;
        v10 = (int64_t)*(char *)(v2 + 32);
        goto lab_0x51e215;
    }
  lab_0x51e17b:;
    // 0x51e17b
    int64_t v26; // 0x51dfc0
    int64_t v27 = v26;
    char v28; // 0x51dfc0
    if (*(char *)(v2 + 112) != v28) {
        // 0x51e181
        result4 = v27;
        if (*(char *)(v2 + 113) != v28) {
            // 0x51e698
            return result4;
        }
    }
    // 0x51e18b
    int64_t v29; // 0x51dfc0
    int64_t v30; // 0x51dfc0
    bool v31 = (int32_t)v29 == 0 | (int32_t)v30 == 16;
    int64_t v32 = v27 & -256 | (int64_t)v31; // 0x51e197
    int64_t v33 = v32; // 0x51e19a
    int64_t v34 = 16; // 0x51e19a
    int64_t v35 = 0; // 0x51e19a
    result4 = v32;
    if (!v31) {
        // 0x51e698
        return result4;
    }
    goto lab_0x51e1b0;
  lab_0x51e1b0:;
    int64_t v36 = v34; // 0x51e1b3
    int64_t v37 = v35; // 0x51e1b3
    int64_t v38 = v33; // 0x51e1b3
    int64_t v39 = v34; // 0x51e1b3
    int64_t v40 = v35; // 0x51e1b3
    if (v1 == 0) {
        goto lab_0x51e4d0;
    } else {
        goto lab_0x51e1b9;
    }
  lab_0x51e4d0:;
    int64_t v41 = v29; // 0x51e4d3
    int64_t v42 = v39; // 0x51e4d3
    int64_t v43; // 0x51dfc0
    int64_t v44 = v43; // 0x51e4d3
    int64_t v45 = v40; // 0x51e4d3
    int64_t v46; // 0x51dfc0
    int64_t v47 = v46; // 0x51e4d3
    char v48 = 1; // 0x51e4d3
    result4 = v38;
    if (v1 == 0) {
        // 0x51e698
        return result4;
    }
    goto lab_0x51e1ed;
  lab_0x51e1b9:;
    int64_t v90 = v37;
    int64_t v100 = v36;
    uint64_t v101 = *v5; // 0x51e1b9
    uint64_t v102 = *v6; // 0x51e1be
    int64_t v60; // 0x51dfc0
    int64_t v61; // 0x51dfc0
    int64_t v59; // 0x51dfc0
    int64_t v89; // 0x51dfc0
    int64_t v56; // 0x51dfc0
    int64_t v57; // 0x51dfc0
    int64_t v87; // 0x51dfc0
    int64_t v58; // 0x51dfc0
    int64_t v85; // 0x51dfc0
    if (v101 >= v102) {
        // 0x51e4e8
        v87 = v29 & 0xffffffff;
        v85 = v100 & 0xffffffff;
        v89 = v43 & 0xffffffff;
        goto lab_0x51e520;
    } else {
        int64_t v103 = v101 + 1; // 0x51e1cc
        *v5 = v103;
        v87 = v29;
        v85 = v100;
        v89 = v43;
        if (v103 >= v102) {
            goto lab_0x51e520;
        } else {
            int64_t v104 = (int64_t)*(char *)v103; // 0x51e1e1
            v41 = v29;
            v42 = v100;
            v44 = v43;
            v45 = v90;
            v47 = v104;
            v48 = 0;
            v56 = v103;
            v57 = v29;
            v58 = v100;
            v59 = v43;
            v60 = v90;
            v61 = v104;
            if (v1 == 0) {
                goto lab_0x51e43b;
            } else {
                goto lab_0x51e1ed;
            }
        }
    }
  lab_0x51e1ed:;
    int64_t v49 = v45;
    int64_t v50 = v42;
    int64_t v51 = v41;
    int64_t v52 = v44; // 0x51e1f3
    if ((int32_t)v44 == -1) {
        uint64_t v53 = *(int64_t *)(v1 + 16); // 0x51e468
        result4 = v53;
        if (v53 >= *(int64_t *)(v1 + 24)) {
            // 0x51e698
            return result4;
        }
        // 0x51e476
        v52 = (int64_t)*(char *)v53;
    }
    int64_t v54; // 0x51dfc0
    if (v48 == 0) {
        // 0x51e202
        v12 = 1;
        v11 = v50;
        v9 = v54;
        v10 = (int64_t)*v13;
        goto lab_0x51e215;
    }
    // 0x51e418
    result4 = 0;
    if (v1 == 0) {
        // 0x51e698
        return result4;
    }
    int64_t v55 = v52;
    v56 = 0;
    v57 = v51;
    v58 = v50;
    v59 = v55;
    v60 = v49;
    v61 = v47;
    if ((int32_t)v47 == -1) {
        int64_t v62 = *v5; // 0x51e427
        result4 = v62;
        if (v62 >= *v6) {
            // 0x51e698
            return result4;
        }
        // 0x51e437
        v56 = v62;
        v57 = v51;
        v58 = v50;
        v59 = v55;
        v60 = v49;
        v61 = (int64_t)*(char *)v62;
    }
    goto lab_0x51e43b;
  lab_0x51e43b:;
    int64_t v63 = v61 & 0xffffffff; // 0x51e43b
    int64_t v64 = (int64_t)*v13; // 0x51e441
    int64_t v65 = v56; // 0x51e446
    int64_t v66 = v57; // 0x51e446
    int64_t v67 = v58; // 0x51e446
    int64_t v68 = v63; // 0x51e446
    int64_t v69 = v64; // 0x51e446
    int64_t v70 = v59; // 0x51e446
    int64_t v71 = v60; // 0x51e446
    int64_t v72 = v61; // 0x51e446
    int64_t v73 = v58; // 0x51e446
    int64_t v74 = v63; // 0x51e446
    int64_t v75 = v64; // 0x51e446
    if ((char)v60 == 0) {
        // break -> 0x51e450
        goto lab_0x51e450;
    }
    goto lab_0x51e14f;
  lab_0x51e520:
    if ((int32_t)v1 == -1) {
        // 0x51e698
        return result4;
    }
    int64_t v84 = v85 & 0xffffffff; // 0x51e53d
    int64_t v86 = v87 & 0xffffffff; // 0x51e541
    int64_t v88 = v89 & 0xffffffff; // 0x51e545
    v41 = v86;
    v42 = v84;
    v44 = v88;
    v45 = v90;
    int64_t v91; // 0x51dfc0
    v47 = v91;
    v48 = 0;
    v57 = v86;
    v58 = v84;
    v59 = v88;
    v60 = v90;
    v61 = v91;
    if (v1 != 0) {
        goto lab_0x51e1ed;
    } else {
        goto lab_0x51e43b;
    }
  lab_0x51e215:;
    char v92 = 0; // bp+112, 0x51e240
    if ((char)v10 != 0) {
        // 0x51e980
        return (int64_t)&v92;
    }
    unsigned char v93 = *(char *)(v2 + 136); // 0x51e26b
    int64_t result6 = v93; // 0x51e26b
    if (v93 != 0) {
        // 0x51e598
        if (v12 == 0) {
            // 0x51e5a3
            return v2 + 114;
        }
        // 0x51e698
        return result6;
    }
    // 0x51e27f
    if (v12 != 0) {
        // 0x51e698
        return result6;
    }
    int32_t v94 = v11;
    unsigned char v95 = v94 == 16 ? 22 : (char)v94;
    int64_t result7 = 0x100000000000000 * v9 >> 56; // 0x51e2a1
    if (v95 > 10 || (char)v9 < 48 || (int64_t)v95 + 48 <= v9) {
        // 0x51e698
        return result7;
    }
    int64_t v96 = result7 + 0xffffffd0; // 0x51e2c3
    if (v1 == 0 || (int32_t)v96 == -1) {
        // 0x51e698
        return v96 & 0xffffffff;
    }
    int64_t * v97 = (int64_t *)(v1 + 16); // 0x51e305
    uint64_t result8 = *v97; // 0x51e305
    uint64_t v98 = *(int64_t *)(v1 + 24); // 0x51e30a
    if (result8 < v98) {
        uint64_t v99 = result8 + 1; // 0x51e318
        *v97 = v99;
        return v1 == 0 | v98 <= v99 ? v99 : 0;
    }
    // 0x51e698
    return result8;
  lab_0x51e13b:
    // 0x51e13b
    v91 = v1 & 0xffffffff;
    v65 = v8;
    v66 = v3;
    v67 = v4;
    v68 = v15;
    v69 = v16;
    v70 = v1 & 0xffffffff;
    v71 = 0;
    v72 = v7;
    while (true) {
      lab_0x51e14f:
        // 0x51e14f
        v46 = v72;
        int64_t v76 = v71;
        v43 = v70;
        int64_t v77 = v69;
        v54 = v68;
        v30 = v67;
        v29 = v66;
        int64_t v78 = v65;
        char v79; // 0x51dfc0
        if (v77 == 0) {
            // 0x51e14f
            v79 = v54;
        } else {
            char v80 = v54;
            v79 = v80;
            v73 = v30;
            v74 = v54;
            v75 = v77;
            if (*(char *)(v2 + 73) == v80) {
                // break -> 0x51e450
                break;
            }
        }
        // 0x51e15e
        v28 = v79;
        v73 = v30;
        v74 = v54;
        v75 = v77;
        if (*v14 == v28) {
            // break -> 0x51e450
            break;
        }
        // 0x51e168
        if (*(char *)(v2 + 114) == v28) {
            int32_t v81 = v30; // 0x51e48c
            unsigned char v82 = (char)v76 ^ 1 | (char)(v81 == 10); // 0x51e492
            int64_t v83 = v78 & -256 | (int64_t)v82; // 0x51e492
            v26 = v83;
            if (v82 == 0) {
                goto lab_0x51e17b;
            } else {
                if ((int32_t)v29 != 0 && v81 != 8) {
                    // 0x51e560
                    v33 = v83;
                    v34 = v30;
                    v35 = v83 & 0xffffffff;
                    goto lab_0x51e1b0;
                } else {
                    // 0x51e4b1
                    v36 = 8;
                    v37 = 1;
                    v38 = v83;
                    v39 = 8;
                    v40 = 1;
                    if (v1 != 0) {
                        goto lab_0x51e1b9;
                    } else {
                        goto lab_0x51e4d0;
                    }
                }
            }
        } else {
            // 0x51e172
            v26 = v78;
            v73 = v30;
            v74 = v54;
            v75 = v77;
            if ((char)v76 == 0) {
                // break -> 0x51e450
                break;
            }
            goto lab_0x51e17b;
        }
    }
  lab_0x51e450:
    // 0x51e450
    v12 = 0;
    v11 = v73;
    v9 = v74;
    v10 = v75;
    goto lab_0x51e215;
}
