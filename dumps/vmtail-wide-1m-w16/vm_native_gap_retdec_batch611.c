/*
 * Targeted RetDec C for native executable gap queue batch 611.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4764ee-0x4766ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4766ee-0x4768ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x4768ee-0x476aee rank=- name=- kind=- bytes=- uncovered=-
 *   0x51c1c0-0x51c3c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51c3c0-0x51c5c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51c5c0-0x51c7c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51c7c0-0x51c9c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51c9c0-0x51cbc0 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
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

int64_t function_4764ee(int64_t a1);
int64_t function_476523(void);
int64_t function_47653c(void);
int64_t function_476559(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5);
int64_t function_476593(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_476646(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4766ec(void);
int64_t function_4766ef(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_476704(int64_t a1);
int64_t function_476746(void);
int64_t function_47676d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_476816(void);
int64_t function_476829(int64_t a1);
int64_t function_476848(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_47685a(void);
int64_t function_476879(void);
int64_t function_4768a9(void);
int64_t function_476920(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_4769a5(void);
int64_t function_4769b8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4769e7(int64_t a1);
int64_t function_4769f9(void);
int64_t function_476a82(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4eeb50();
int64_t function_51c1c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int32_t a7, uint64_t n, char a9);
int64_t function_52b400();
int64_t function_567700();
int64_t function_7fbbc3e3();

// Address range: 0x4764ee - 0x4764fb
int64_t function_4764ee(int64_t a1) {
    // 0x4764ee
    return __asm_int3(a1) + 0x5b5b6216 & 0xffffffff;
}

// Address range: 0x476523 - 0x476524
int64_t function_476523(void) {
    // 0x476523
    int64_t result; // 0x476523
    return result;
}

// Address range: 0x47653c - 0x47653d
int64_t function_47653c(void) {
    // 0x47653c
    int64_t result; // 0x47653c
    return result;
}

// Address range: 0x476559 - 0x476592
int64_t function_476559(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5) {
    char * v1 = (char *)(a3 + 0x411002d); // 0x476559
    char v2 = a3; // 0x476559
    bool v3; // 0x476559
    *v1 = (char)v3 - v2 + *v1;
    int64_t v4; // 0x476559
    __asm_frstor(*(int864_t *)(v4 + 121));
    if (llvm_ctpop_i8((char)(a4 / 256) - v2 + (char)(a5 % 2 != 0)) % 2 != 0) {
        unsigned char v5 = llvm_ctpop_i8((char)a4); // 0x476589
        int64_t v6; // 0x476559
        int64_t result = (int64_t)&v6; // 0x47658b
        if (v5 % 2 != 0) {
            result = function_476523();
        }
        // 0x47658d
        return result;
    }
    char v7 = v4; // 0x476573
    char v8 = *(char *)(v4 - 56); // 0x476573
    char v9 = v8 + v7; // 0x476573
    int64_t v10 = v4 & -256 | (int64_t)v9; // 0x476576
    if (v9 < 0 == ((v9 ^ v7) & (v9 ^ v8)) < 0 == (v9 != 0)) {
        v10 = function_47653c();
    }
    int64_t v11 = v10 ^ 110; // 0x476579
    return (v11 + 117 + ((char)v11 < 100 ? 113 : 114)) % 256 | v10 & -256;
}

// Address range: 0x476593 - 0x47663a
int64_t function_476593(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x476593
    int64_t result; // 0x476593
    bool v1; // 0x476593
    if (v1) {
        int64_t v2 = result & 0x86a07d15 | 0x795f82ea; // 0x4765a8
        int32_t * v3 = (int32_t *)(v2 + 8); // 0x4765ad
        uint32_t v4 = *v3; // 0x4765ad
        *v3 = v4 / 0x800000 | 1024 * v4;
        return v2 + 18 & 253 | v2 & 0xffffff00;
    }
    // 0x4765a6
    return result;
    // 0x4765a2
    __asm_out((int16_t)a5, (char)result);
    if (v1) {
        // 0x4765a6
        return result;
    }
    int64_t v5 = result + 0x2a72a646; // 0x476623
    char * v6 = (char *)(a6 + 121); // 0x476628
    *v6 = 2 * *v6;
    int16_t v7 = v5; // 0x476632
    int16_t v8 = (int16_t)*(char *)((v5 & 0xffffffff) - 1); // 0x476632
    return v5 & 0xffff0000 | (int64_t)(v7 / v8 % 256) | (int64_t)(256 * (v7 % v8));
}

// Address range: 0x476646 - 0x4766cf
int64_t function_476646(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x476646
    int64_t v1; // 0x476646
    int64_t v2 = v1 & 0xffffffff ^ 0x6c19d66e; // 0x476646
    char v3 = v2; // 0x47664b
    if (v3 <= -71) {
        // 0x476650
        *(int32_t *)a2 = (int32_t)a2;
        int64_t v4; // 0x476646
        return (int64_t)&v4;
    }
    int64_t result = (v2 + 71) % 256 | v2 & 0xffffff00; // 0x47664b
    char * v5 = (char *)(result + 71); // 0x4766c8
    *v5 = *v5 + (v3 < 185 ? 38 : 37);
    return result;
}

// Address range: 0x4766ec - 0x4766ed
int64_t function_4766ec(void) {
    // 0x4766ec
    int64_t result; // 0x4766ec
    return result;
}

// Address range: 0x4766ef - 0x4766fa
int64_t function_4766ef(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a2 + 0x301fef2a); // 0x4766ef
    bool v2; // 0x4766ef
    *v1 = *v1 + (char)(a4 / 256) + (char)(bool)v2;
    return function_7fbbc3e3();
}

// Address range: 0x476704 - 0x476707
int64_t function_476704(int64_t a1) {
    // 0x476704
    int64_t result; // 0x476704
    return result;
}

// Address range: 0x476746 - 0x476749
int64_t function_476746(void) {
    // 0x476746
    int64_t result; // 0x476746
    return result;
}

// Address range: 0x47676d - 0x47680f
int64_t function_47676d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = __asm_hlt(); // 0x476772
    float80_t v3; // 0x47676d
    *(int64_t *)(a3 + 0xb5006a6d & 0xffffffff) = (int64_t)v3;
    int64_t v4 = v2 + 0x9aa633ea; // 0x47677a
    unsigned char v5 = (char)v4 - ((int32_t)v2 < 0x6559cc16 ? -67 : -68); // 0x476780
    if (a4 == 1 || v5 == 0) {
        int64_t v6 = v4 & 0xffffff00 | (int64_t)v5; // 0x476780
        char * v7 = (char *)(v6 - 0x371bd865); // 0x476784
        *v7 = *v7 + (char)(v1 / 256);
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v6;
        int32_t v8 = *(int32_t *)0x7c29c6e8de561cf3; // 0x476790
        *(int32_t *)-0x6d2dcf41bee2c6d3 = v8;
        *(char *)v1 = *(char *)&v1 - 1;
        return (int64_t)*(char *)0x2fe26a7cdf2c7387 | (int64_t)(v8 & -256);
    }
    int64_t v9 = __asm_wait(); // 0x4767fd
    *(int32_t *)(2 * a2 & 0x1fffffffe) = (int32_t)a1;
    return v9 ^ 101;
}

// Address range: 0x476816 - 0x47681b
int64_t function_476816(void) {
    // 0x476816
    int64_t v1; // 0x476816
    char * v2 = (char *)(v1 + 40); // 0x476817
    *v2 = *v2 | (char)v1;
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x476829 - 0x47682c
int64_t function_476829(int64_t a1) {
    // 0x476829
    int64_t result; // 0x476829
    return result;
}

// Address range: 0x476848 - 0x476858
int64_t function_476848(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x476848
    int64_t result; // 0x476848
    *(int32_t *)a3 = (int32_t)result - 1;
    *(int32_t *)0xf45d55b9 = (int32_t)result;
    return result;
}

// Address range: 0x47685a - 0x47685b
int64_t function_47685a(void) {
    // 0x47685a
    int64_t result; // 0x47685a
    return result;
}

// Address range: 0x476879 - 0x47687a
int64_t function_476879(void) {
    // 0x476879
    int64_t result; // 0x476879
    return result;
}

// Address range: 0x4768a9 - 0x4768ab
int64_t function_4768a9(void) {
    // 0x4768a9
    return function_476879();
}

// Address range: 0x476920 - 0x476982
int64_t function_476920(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a2;
    int64_t result; // 0x476920
    int32_t v2 = result; // 0x476920
    *(int32_t *)0x32c7da13585345 = v2;
    int32_t v3 = result;
    bool v4; // 0x476920
    int64_t v5 = (v4 ? -4 : 4) + a1; // 0x476929
    if (v3 > v2) {
        char * v6 = (char *)(result + 0x616e7ec3); // 0x47692c
        *v6 = *v6 | (char)a4;
        *(char *)v5 = *(char *)&v1;
        return result;
    }
    int64_t v7 = __asm_int1(v5); // 0x476960
    uint64_t v8 = v7 - (v3 > v2 ? 3 : 2); // 0x476961
    uint32_t v9 = (int32_t)(v8 % 256 | v7 & 0xffffff00) - 0x28b7c708; // 0x476963
    int64_t v10 = v9; // 0x476963
    int64_t result2 = v10; // 0x476968
    if (v9 >= 0) {
        // 0x47696a
        *(int32_t *)(a2 + 118) = (int32_t)a6;
        result2 = v10 & 0xffffff00 | (v8 + 231) % 256;
    }
    // 0x476948
    return result2;
}

// Address range: 0x4769a5 - 0x4769a6
int64_t function_4769a5(void) {
    // 0x4769a5
    int64_t result; // 0x4769a5
    return result;
}

// Address range: 0x4769b8 - 0x4769cd
int64_t function_4769b8(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)-0x4fab30440cc16f92; // 0x4769b8
    return (int64_t)(v1 & -256) | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x4769e7 - 0x4769ec
int64_t function_4769e7(int64_t a1) {
    // 0x4769e7
    int64_t result; // 0x4769e7
    bool v1; // 0x4769e7
    if (!v1 && !v1) {
        result = function_4769a5();
    }
    // 0x4769e9
    return result;
}

// Address range: 0x4769f9 - 0x4769fd
int64_t function_4769f9(void) {
    // 0x4769f9
    int64_t v1; // 0x4769f9
    float80_t v2; // 0x4769f9
    *(int32_t *)v1 = (int32_t)v2;
    bool v3; // 0x4769f9
    return v1 & -0xff01 | 256 * (64 * (int64_t)v3 | 128 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3) | 512;
}

// Address range: 0x476a82 - 0x476abc
int64_t function_476a82(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x476a82
    bool v1; // 0x476a82
    if (!v1) {
        // 0x476a89
        int64_t result; // 0x476a82
        return result;
    }
    // 0x476a90
    int64_t v2; // 0x476a82
    char * v3 = (char *)(a1 + 98 + 8 * v2); // 0x476a96
    *v3 = *v3 & (char)(v2 / 256);
    int32_t v4 = *(int32_t *)(a2 + 64) + (int32_t)v2; // 0x476a9a
    int64_t result2 = v4; // 0x476a9a
    float80_t v5; // 0x476a82
    *(int16_t *)(a4 + 0x2c112ef1 + result2) = (int16_t)v5;
    __asm_int(60);
    char * v6 = (char *)((a4 + 0xf5414b1e & 0xffffffff) - 119); // 0x476aa6
    char v7 = *v6 + (char)v2; // 0x476aa6
    *v6 = v7;
    __asm_out((int16_t)a3, (char)v4);
    if (v7 != 0) {
        // 0x476a89
        return result2;
    }
    // 0x476aad
    __asm_out_133((int16_t)(v4 >> 31), v4);
    return result2 & 0xffffff00 | 176;
}

// Address range: 0x51c1c0 - 0x51cbbc
int64_t function_51c1c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int32_t a7, uint64_t n, char a9) {
    // 0x51c1c0
    int64_t result2; // 0x51c1c0
    int64_t v1 = result2;
    uint64_t v2 = (int64_t)a7; // 0x51c1c0
    bool v3; // 0x51c1c0
    uint64_t v4 = v3 ? 0x7fffffffffffffff : -0x8000000000000000; // 0x51c1d9
    uint64_t v5 = v4 / v2;
    char v6 = *(char *)(v1 + 136); // 0x51c1f1
    int64_t v7 = v6; // 0x51c1f1
    char v8; // 0x51c1c0
    int64_t result; // 0x51c1c0
    int64_t v9; // 0x51c1c0
    int64_t v10; // 0x51c1c0
    int64_t v11; // 0x51c1c0
    int64_t v12; // 0x51c1c0
    int64_t v13; // 0x51c1c0
    int64_t v14; // 0x51c1c0
    int64_t v15; // 0x51c1c0
    int64_t v16; // 0x51c1c0
    int32_t v17; // 0x51c1c0
    int32_t v18; // 0x51c1c0
    char v19; // 0x51c1c0
    char v20; // 0x51c1c0
    char v21; // 0x51c1c0
    char v22; // 0x51c1c0
    char v23; // 0x51c1c0
    int32_t v24; // 0x51c1c0
    int32_t v25; // 0x51c1c0
    int32_t v26; // 0x51c1c0
    int32_t v27; // 0x51c1c0
    int32_t v28; // 0x51c1c0
    int32_t v29; // 0x51c1c0
    int32_t v30; // 0x51c1c0
    int32_t v31; // 0x51c1c0
    int32_t v32; // 0x51c1c0
    int32_t v33; // 0x51c1c0
    int32_t v34; // 0x51c1c0
    int32_t v35; // 0x51c1c0
    int32_t v36; // 0x51c1c0
    int32_t v37; // 0x51c1c0
    int64_t str; // 0x51c543
    int64_t * v38; // 0x51c1c0
    int64_t * v39; // 0x51c1c0
    int64_t v40; // 0x51c1c0
    if (v6 != 0) {
        // 0x51c538
        result = v7;
        if (a9 != 0) {
            // 0x51cbf1
            return result;
        }
        // 0x51c543
        str = v1 + 114;
        int64_t v41 = v37;
        v38 = (int64_t *)(result2 + 16);
        v39 = (int64_t *)(result2 + 24);
        v40 = result2 & 0xffffffff;
        v34 = a6;
        v22 = 0;
        v30 = 0;
        while (true) {
          lab_0x51c55a_2:
            // 0x51c55a
            v31 = v30;
            v10 = v9;
            v14 = v13;
            v16 = v15;
            v23 = v22;
            v35 = v34;
            v18 = v17;
            v25 = v24;
            unsigned char v42 = *(char *)(v1 + 32); // 0x51c55a
            if (v42 == 0) {
                // 0x51c55a
                v8 = v16;
                goto lab_0x51c56d;
            } else {
                char v43 = v16;
                v8 = v43;
                if (*(char *)(v1 + 73) == v43) {
                    if (v35 == 0) {
                        // 0x51cbf1
                        result = v42;
                        return result;
                    }
                    int64_t v44 = v25; // 0x51c82c
                    int32_t v45 = v25 + 1; // 0x51c847
                    uint64_t v46 = (int64_t)v45; // 0x51c867
                    if ((result2 + 16 == v41 ? 15 : result2) < v46) {
                        // 0x51c9f8
                        function_52b400(result2, v44, 0, 0, 1);
                    }
                    // 0x51c872
                    *(char *)(v44 + v41) = (char)v35;
                    *(char *)(v46 + v41) = 0;
                    v26 = v45;
                    v36 = 0;
                    v20 = v23;
                    v28 = v31;
                    goto lab_0x51c5d7;
                } else {
                    goto lab_0x51c56d;
                }
            }
        }
    } else {
        // 0x51c205
        result = v7;
        if (a9 != 0) {
            // 0x51cbf1
            return result;
        }
        int64_t v47 = 0x100000000000000 * result2 >> 56; // 0x51c224
        v32 = a6;
        v19 = 0;
        v11 = v47;
        v27 = 0;
        v33 = a6;
        v21 = 0;
        v12 = v47;
        v29 = 0;
        if (n < 11) {
            goto lab_0x51c22d;
        } else {
            goto lab_0x51c753;
        }
    }
  lab_0x51c56d:;
    int32_t v48 = v35; // 0x51c571
    char v49 = v23; // 0x51c571
    char v50 = 0; // 0x51c571
    int32_t v51 = v25; // 0x51c571
    int32_t v52 = v31; // 0x51c571
    if (*(char *)(v1 + 72) == v8) {
        // break -> 0x51c630
        goto lab_0x51c630_5;
    }
    int64_t * found_byte_pos = memchr((int64_t *)str, 0x1000000 * (int32_t)v16 >> 24, (int32_t)n); // 0x51c584
    v48 = v35;
    v49 = v23;
    v50 = 0;
    v51 = v25;
    v52 = v31;
    if (found_byte_pos == NULL) {
        // break -> 0x51c630
        goto lab_0x51c630_5;
    }
    uint64_t v53 = (int64_t)v31; // 0x51c597
    char v54; // 0x51c1c0
    char v55; // 0x51c1c0
    int32_t v56; // 0x51c1c0
    int32_t v57; // 0x51c1c0
    int32_t v58; // 0x51c1c0
    int32_t v59; // 0x51c1c0
    int32_t v60; // 0x51c1c0
    int32_t v61; // 0x51c1c0
    if (v5 < v53) {
        // 0x51c7c0
        v56 = v25;
        v60 = v35;
        v54 = v6;
        v58 = v31;
        v57 = v25;
        v61 = v35;
        v55 = v6;
        v59 = v31;
        if (result2 != 0) {
            goto lab_0x51c5e0;
        } else {
            goto lab_0x51c7d2;
        }
    } else {
        int64_t v62 = (int64_t)found_byte_pos - str; // 0x51c592
        int32_t v63 = v62; // 0x51c59f
        int32_t v64 = v63 - 15; // 0x51c59f
        uint64_t v65 = v53 * v2; // 0x51c5b0
        int64_t v66 = 0x100000000 * v62;
        int64_t v67 = (v64 < 0 == (14 - v63 & v63) < 0 == (v64 != 0) ? v66 - 0x600000000 : v66) >> 32; // 0x51c5bb
        v26 = v25;
        v36 = v35 + 1;
        v20 = v23 | (char)(v4 - v67 < v65);
        v28 = v67 + v65;
        goto lab_0x51c5d7;
    }
  lab_0x51c5d7:
    // 0x51c5d7
    v56 = v26;
    v60 = v36;
    v54 = v20;
    v58 = v28;
    v57 = v26;
    v61 = v36;
    v55 = v20;
    v59 = v28;
    if (result2 == 0) {
        goto lab_0x51c7d2;
    } else {
        goto lab_0x51c5e0;
    }
  lab_0x51c5e0:;
    int32_t v68 = v58;
    char v69 = v54;
    int32_t v70 = v60;
    int32_t v71 = v56;
    uint64_t v72 = *v38; // 0x51c5e0
    uint64_t v73 = *v39; // 0x51c5e4
    int64_t v74; // 0x51c1c0
    int64_t v75; // 0x51c1c0
    int64_t v76; // 0x51c1c0
    int32_t v77; // 0x51c1c0
    char v78; // 0x51c1c0
    char v79; // 0x51c1c0
    int32_t v80; // 0x51c1c0
    int32_t v81; // 0x51c1c0
    int32_t v82; // 0x51c1c0
    int32_t v83; // 0x51c1c0
    int32_t v84; // 0x51c1c0
    int32_t v85; // 0x51c1c0
    char v86; // 0x51c1c0
    if (v72 >= v73) {
        goto lab_0x51c968;
    } else {
        uint64_t v87 = v72 + 1; // 0x51c5f1
        *v38 = v87;
        if (v73 > v87) {
            int64_t v88 = (int64_t)*(char *)v87; // 0x51c605
            v80 = v71;
            v84 = v70;
            v78 = v69;
            v75 = v88;
            v82 = v68;
            v86 = 0;
            v81 = v71;
            v77 = v18;
            v85 = v70;
            v79 = v69;
            v76 = 0;
            v74 = v88;
            v83 = v68;
            if (v14 == 0) {
                goto lab_0x51c711;
            } else {
                goto lab_0x51c611;
            }
        } else {
            goto lab_0x51c968;
        }
    }
  lab_0x51c7d2:
    // 0x51c7d2
    v80 = v57;
    v84 = v61;
    v78 = v55;
    v75 = v10;
    v82 = v59;
    v86 = v6;
    v48 = v61;
    v49 = v55;
    v50 = v6;
    v51 = v57;
    v52 = v59;
    if (v14 == 0) {
        // break -> 0x51c630
        goto lab_0x51c630_5;
    }
    goto lab_0x51c611;
  lab_0x51c968:
    if ((int32_t)result2 == -1) {
        // 0x51cbf1
        return result;
    }
    // 0x51c97d
    v80 = v71;
    v84 = v70;
    v78 = v69;
    v75 = v40;
    v82 = v68;
    v86 = 0;
    v81 = v71;
    v77 = v18;
    v85 = v70;
    v79 = v69;
    v76 = v14;
    v74 = v40;
    v83 = v68;
    if (v14 != 0) {
        goto lab_0x51c611;
    } else {
        goto lab_0x51c711;
    }
  lab_0x51c611:;
    int32_t v89 = v82;
    char v90 = v78;
    int32_t v91 = v84;
    int32_t v92 = v80;
    int32_t v93 = v18; // 0x51c618
    int64_t v94 = 0; // 0x51c618
    int64_t v95 = v14; // 0x51c618
    if (v18 == -1) {
        uint64_t v96 = *(int64_t *)(v14 + 16); // 0x51c7e8
        if (v96 >= *(int64_t *)(v14 + 24)) {
            int32_t v97 = (int32_t)*(int64_t *)v14; // 0x51cb2a
            v93 = v97;
            v94 = v97 != -1 ? 0 : v7;
            v95 = v97 != -1 ? v14 : 0;
        } else {
            // 0x51c7f6
            v93 = (int32_t)*(char *)v96;
            v94 = 0;
            v95 = v14;
        }
    }
    // 0x51c61e
    v48 = v91;
    v49 = v90;
    v50 = v6;
    v51 = v92;
    v52 = v89;
    if (v86 == (char)v94) {
        // break -> 0x51c630
        goto lab_0x51c630_5;
    }
    // 0x51c6f0
    result = v94;
    if (result2 == 0) {
        // 0x51cbf1
        return result;
    }
    int64_t v98 = v95;
    int32_t v99 = v93;
    v81 = v92;
    v77 = v99;
    v85 = v91;
    v79 = v90;
    v76 = v98;
    v74 = v75;
    v83 = v89;
    if ((int32_t)v75 == -1) {
        uint64_t v100 = *v38; // 0x51c6ff
        result = v100;
        if (v100 >= *v39) {
            // 0x51cbf1
            return result;
        }
        // 0x51c70d
        v81 = v92;
        v77 = v99;
        v85 = v91;
        v79 = v90;
        v76 = v98;
        v74 = (int64_t)*(char *)v100;
        v83 = v89;
    }
    goto lab_0x51c711;
  lab_0x51c711:
    // 0x51c711
    v24 = v81;
    v17 = v77;
    v34 = v85;
    v22 = v79;
    v15 = v74 & 0xffffffff;
    v13 = v76;
    v9 = v74;
    v30 = v83;
    goto lab_0x51c55a_2;
  lab_0x51c630_5:;
    int64_t v101 = v37;
    int32_t v102 = v48; // 0x51c633
    char v103 = v49; // 0x51c633
    char v104 = v50; // 0x51c633
    int32_t v105 = v51; // 0x51c633
    int64_t v106 = v101; // 0x51c633
    int32_t v107 = v52; // 0x51c633
    int32_t v108 = v48; // 0x51c633
    char v109 = v49; // 0x51c633
    char v110 = v50; // 0x51c633
    int64_t v111 = v101; // 0x51c633
    int32_t v112 = v52; // 0x51c633
    if (v51 != 0) {
        goto lab_0x51c2f3;
    } else {
        goto lab_0x51c640;
    }
  lab_0x51c22d:;
    int32_t v113 = v27;
    int64_t v114; // 0x51c1c0
    int64_t v115 = v114;
    char v116 = v19;
    int32_t v117 = v32;
    v48 = v117;
    v49 = v116;
    v50 = 0;
    v52 = v113;
    int64_t v118; // 0x51c1c0
    int64_t v119; // 0x51c1c0
    int64_t v120; // 0x51c1c0
    int64_t v121; // 0x51c1c0
    int64_t v122; // 0x51c1c0
    int32_t v123; // 0x51c1c0
    int32_t v124; // 0x51c1c0
    char v125; // 0x51c1c0
    int32_t v126; // 0x51c1c0
    int32_t v127; // 0x51c1c0
    if ((char)v115 < 48) {
        goto lab_0x51c630_5;
    } else {
        // 0x51c236
        v124 = v123;
        v127 = v117;
        v125 = v116;
        v120 = v11;
        v122 = v121;
        v119 = v118;
        v126 = v113;
        v48 = v117;
        v49 = v116;
        v50 = 0;
        v52 = v113;
        if (n % 256 + 48 > v115) {
            goto lab_0x51c246;
        } else {
            goto lab_0x51c630_5;
        }
    }
  lab_0x51c753:;
    int32_t v128 = v29;
    int64_t v129; // 0x51c1c0
    int64_t v130 = v129;
    int64_t v131; // 0x51c1c0
    int64_t v132 = v131;
    int64_t v133 = v12;
    char v134 = v21;
    int32_t v135 = v33;
    int32_t v136; // 0x51c1c0
    int32_t v137 = v136;
    int64_t v138; // 0x51c1c0
    char v139 = v138;
    v124 = v137;
    v127 = v135;
    v125 = v134;
    v120 = v133;
    v122 = v132;
    v119 = v130;
    v126 = v128;
    int64_t v140; // 0x51c1c0
    int64_t v141; // 0x51c1c0
    int64_t v142; // 0x51c1c0
    int64_t v143; // 0x51c1c0
    int64_t v144; // 0x51c1c0
    int32_t v145; // 0x51c1c0
    int32_t v146; // 0x51c1c0
    char v147; // 0x51c1c0
    char v148; // 0x51c1c0
    int32_t v149; // 0x51c1c0
    int32_t v150; // 0x51c1c0
    int32_t v151; // 0x51c1c0
    int32_t v152; // 0x51c1c0
    int64_t v153; // 0x51c1c0
    if (v139 < 58) {
        goto lab_0x51c246;
    } else {
        if (v139 < 103) {
            // 0x51c8a0
            v145 = v137;
            v151 = v135;
            v147 = v134;
            v143 = v132;
            v140 = v130;
            v149 = v128;
            v153 = v133 + 0xffffffa9;
            goto lab_0x51c249;
        } else {
            // 0x51c76b
            v48 = v135;
            v49 = v134;
            v50 = 0;
            v52 = v128;
            if (v139 < 71) {
                int64_t v154 = v133 + 0xffffffc9; // 0x51c773
                v146 = v137;
                v152 = v135;
                v148 = v134;
                v142 = v154;
                v144 = v132;
                v141 = v130;
                v150 = v128;
                v48 = v135;
                v49 = v134;
                v50 = 0;
                v52 = v128;
                if ((int32_t)v154 != -1) {
                    goto lab_0x51c252;
                } else {
                    goto lab_0x51c630_5;
                }
            } else {
                goto lab_0x51c630_5;
            }
        }
    }
  lab_0x51c2f3:;
    int32_t v155 = v107;
    int64_t v156 = v106;
    char v157 = v104;
    char v158 = v103;
    int64_t v159 = v105;
    uint64_t v160 = v159 + 1; // 0x51c2f8
    int64_t v161; // 0x51c1c0
    int64_t v162; // 0x51c1c0
    if (v160 > (v156 == result2 + 16 ? 15 : result2)) {
        // 0x51cb70
        function_52b400(result2, v159, 0, 0, 1);
        int64_t v163 = v37;
        v161 = v163;
        v162 = v163;
    } else {
        // 0x51c2f3
        v161 = v37;
        v162 = v156;
    }
    int64_t v164 = v161;
    *(char *)(v162 + v159) = (char)v102;
    *(char *)(v164 + v160) = 0;
    function_567700(*(int64_t *)(v1 + 16), *(int64_t *)(v1 + 24), result2);
    char v165 = v158; // 0x51c35f
    char v166 = v157; // 0x51c35f
    int64_t v167 = v164; // 0x51c35f
    int32_t v168 = v155; // 0x51c35f
    int64_t v169; // 0x51c1c0
    char v170; // 0x51c1c0
    if (v102 != 0) {
        goto lab_0x51c373;
    } else {
        // 0x51c361
        v165 = v158;
        v166 = v157;
        v167 = v164;
        v168 = v155;
        v170 = v157;
        v169 = v164;
        if ((char)result2 != 1 == (int32_t)v160 == 0) {
            goto lab_0x51c656;
        } else {
            goto lab_0x51c373;
        }
    }
  lab_0x51c640:
    // 0x51c640
    v165 = v109;
    v166 = v110;
    v167 = v111;
    v168 = v112;
    v170 = v110;
    v169 = v111;
    if ((char)result2 == 1 || v108 != 0) {
        goto lab_0x51c373;
    } else {
        goto lab_0x51c656;
    }
  lab_0x51c246:
    // 0x51c246
    v145 = v124;
    v151 = v127;
    v147 = v125;
    v143 = v122;
    v140 = v119;
    v149 = v126;
    v153 = v120 + 0xffffffd0;
    goto lab_0x51c249;
  lab_0x51c373:;
    int64_t v227 = v167;
    char v228 = v166;
    v170 = v228;
    v169 = v227;
    int64_t v229; // 0x51c1c0
    char v230; // 0x51c1c0
    if (a9 != 0) {
        goto lab_0x51c656;
    } else {
        // 0x51c37e
        char v231; // 0x51c1c0
        if (v165 == 0) {
            int64_t v232 = v168; // 0x51ca40
            *(int64_t *)result2 = v231 == 0 ? v232 : -v232;
            v230 = v228;
            v229 = v227;
        } else {
            if (v231 == 0) {
                // 0x51cbf1
                return result;
            }
            // 0x51c399
            *(int64_t *)result2 = -0x8000000000000000;
            v230 = v228;
            v229 = v227;
        }
        goto lab_0x51c66d;
    }
  lab_0x51c656:
    // 0x51c656
    *(int64_t *)result2 = 0;
    v230 = v170;
    v229 = v169;
    goto lab_0x51c66d;
  lab_0x51c66d:;
    int64_t v233 = v229;
    if (v230 != 0) {
        // branch -> 0x51c67c
    }
    if (v233 != result2 + 16) {
        // 0x51c69f
        function_4eeb50(v233);
    }
    // 0x51c6a4
    __readfsqword(40);
    return result2;
  lab_0x51c249:
    // 0x51c249
    v146 = v145;
    v152 = v151;
    v148 = v147;
    v142 = v153;
    v144 = v143;
    v141 = v140;
    v150 = v149;
    v48 = v151;
    v49 = v147;
    v50 = 0;
    v52 = v149;
    if ((int32_t)v153 == -1) {
        goto lab_0x51c630_5;
    } else {
        goto lab_0x51c252;
    }
  lab_0x51c252:;
    int32_t v171 = v150;
    int64_t v172 = v141;
    int64_t v173 = v144;
    int32_t v174 = v152;
    int32_t v175 = v146;
    uint64_t v176 = (int64_t)v171; // 0x51c252
    char v177; // 0x51c1c0
    char v178; // 0x51c1c0
    int32_t v179; // 0x51c1c0
    int32_t v180; // 0x51c1c0
    int32_t v181; // 0x51c1c0
    int32_t v182; // 0x51c1c0
    if (v5 < v176) {
        // 0x51c798
        v181 = v174;
        v177 = 1;
        v179 = v171;
        if (result2 != 0) {
            goto lab_0x51c295;
        } else {
            goto lab_0x51c7a6;
        }
    } else {
        uint64_t v183 = v176 * v2; // 0x51c262
        int64_t v184 = 0x100000000 * v142 >> 32; // 0x51c268
        char v185 = v148 | (char)(v4 - v184 < v183); // 0x51c27e
        int32_t v186 = v174 + 1; // 0x51c282
        int32_t v187 = v183 + v184; // 0x51c28a
        v182 = v186;
        v178 = v185;
        v180 = v187;
        v181 = v186;
        v177 = v185;
        v179 = v187;
        if (result2 == 0) {
            goto lab_0x51c7a6;
        } else {
            goto lab_0x51c295;
        }
    }
  lab_0x51c295:;
    int32_t v188 = v180;
    char v189 = v178;
    int32_t v190 = v182;
    int64_t * v191 = (int64_t *)(result2 + 16); // 0x51c295
    uint64_t v192 = *v191; // 0x51c295
    uint64_t v193 = *(int64_t *)(result2 + 24); // 0x51c299
    int64_t v194; // 0x51c1c0
    int64_t v195; // 0x51c1c0
    int64_t v196; // 0x51c1c0
    int32_t v197; // 0x51c1c0
    char v198; // 0x51c1c0
    char v199; // 0x51c1c0
    int32_t v200; // 0x51c1c0
    int32_t v201; // 0x51c1c0
    int32_t v202; // 0x51c1c0
    int32_t v203; // 0x51c1c0
    char v204; // 0x51c1c0
    if (v192 >= v193) {
        goto lab_0x51c9d0;
    } else {
        uint64_t v205 = v192 + 1; // 0x51c2a6
        *v191 = v205;
        if (v205 >= v193) {
            goto lab_0x51c9d0;
        } else {
            int64_t v206 = (int64_t)*(char *)v205; // 0x51c2ba
            v203 = v190;
            v199 = v189;
            v195 = v206;
            v201 = v188;
            v204 = 0;
            v197 = v175;
            v202 = v190;
            v198 = v189;
            v196 = 0;
            v194 = v206;
            v200 = v188;
            if (v173 == 0) {
                goto lab_0x51c741;
            } else {
                goto lab_0x51c2c6;
            }
        }
    }
  lab_0x51c7a6:
    // 0x51c7a6
    v203 = v181;
    v199 = v177;
    v195 = v172;
    v201 = v179;
    v204 = 1;
    int32_t v207 = v181; // 0x51c7a9
    char v208 = v177; // 0x51c7a9
    int32_t v209 = v179; // 0x51c7a9
    if (v173 == 0) {
        goto lab_0x51c2db;
    } else {
        goto lab_0x51c2c6;
    }
  lab_0x51c9d0:
    if ((int32_t)result2 == -1) {
        // 0x51cbf1
        return result;
    }
    int64_t v210 = result2 & 0xffffffff; // 0x51c9dc
    v203 = v190;
    v199 = v189;
    v195 = v210;
    v201 = v188;
    v204 = 0;
    v197 = v175;
    v202 = v190;
    v198 = v189;
    v196 = v173;
    v194 = v210;
    v200 = v188;
    if (v173 != 0) {
        goto lab_0x51c2c6;
    } else {
        goto lab_0x51c741;
    }
  lab_0x51c2db:;
    int64_t v211 = v37; // 0x51c2e0
    v102 = v207;
    v103 = v208;
    v104 = 1;
    v106 = v211;
    v107 = v209;
    v108 = v207;
    v109 = v208;
    v110 = 1;
    v111 = v211;
    v112 = v209;
    if (v37 == 0) {
        goto lab_0x51c640;
    } else {
        goto lab_0x51c2f3;
    }
  lab_0x51c2c6:;
    int32_t v212 = v201;
    int64_t v213 = v195;
    char v214 = v199;
    int32_t v215 = v203;
    int32_t v216 = v175; // 0x51c2cd
    int64_t v217 = 0; // 0x51c2cd
    int64_t v218 = v173; // 0x51c2cd
    if (v175 == -1) {
        uint64_t v219 = *(int64_t *)(v173 + 16); // 0x51c808
        if (v219 >= *(int64_t *)(v173 + 24)) {
            int32_t v220 = (int32_t)*(int64_t *)v173; // 0x51cb52
            v216 = v220;
            v217 = v220 == -1;
            v218 = v220 != -1 ? v173 : 0;
        } else {
            // 0x51c816
            v216 = (int32_t)*(char *)v219;
            v217 = 0;
            v218 = v173;
        }
    }
    int64_t v221 = v217;
    v207 = v215;
    v208 = v214;
    v209 = v212;
    if (v204 != (char)v221) {
        // 0x51c720
        result = v221;
        if (result2 == 0) {
            // 0x51cbf1
            return result;
        }
        int64_t v222 = v218;
        int32_t v223 = v216;
        v197 = v223;
        v202 = v215;
        v198 = v214;
        v196 = v222;
        v194 = v213;
        v200 = v212;
        if ((int32_t)v213 == -1) {
            uint64_t v224 = *(int64_t *)(result2 + 16); // 0x51c72f
            result = v224;
            if (v224 >= *(int64_t *)(result2 + 24)) {
                // 0x51cbf1
                return result;
            }
            // 0x51c73d
            v197 = v223;
            v202 = v215;
            v198 = v214;
            v196 = v222;
            v194 = (int64_t)*(char *)v224;
            v200 = v212;
        }
        goto lab_0x51c741;
    } else {
        goto lab_0x51c2db;
    }
  lab_0x51c741:;
    int64_t v225 = v194 & 0xffffffff; // 0x51c747
    int64_t v226 = 0x100000000000000 * v194 >> 56; // 0x51c74a
    v123 = v197;
    v32 = v202;
    v19 = v198;
    v11 = v226;
    v114 = v225;
    v121 = v196;
    v118 = v194;
    v27 = v200;
    v136 = v197;
    v33 = v202;
    v21 = v198;
    v12 = v226;
    v138 = v225;
    v131 = v196;
    v129 = v194;
    v29 = v200;
    if (n < 11) {
        goto lab_0x51c22d;
    } else {
        goto lab_0x51c753;
    }
}
