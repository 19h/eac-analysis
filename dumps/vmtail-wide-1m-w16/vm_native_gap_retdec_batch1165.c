/*
 * Targeted RetDec C for native executable gap queue batch 1165.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3d2eff-0x3d30ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d32ff-0x3d34ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3dbfb9-0x3dc0b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3dc0b9-0x3dc139 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3dc1b9-0x3dc3b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3dc4b9-0x3dc5b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3dc5b9-0x3dc7b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3dc7b9-0x3dc9b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3dc9b9-0x3dcbb9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3dcbb9-0x3dcdb9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x485862-0x485a62 rank=- name=- kind=- bytes=- uncovered=-
 *   0x485a62-0x485c62 rank=- name=- kind=- bytes=- uncovered=-
 *   0x485c62-0x485e62 rank=- name=- kind=- bytes=- uncovered=-
 *   0x485e62-0x486062 rank=- name=- kind=- bytes=- uncovered=-
 *   0x486062-0x486262 rank=- name=- kind=- bytes=- uncovered=-
 *   0x486262-0x486462 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g1;
extern int g2;
extern int g4;
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
int64_t __asm_fnstenv();
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

int64_t function_17ac514();
int64_t function_2eb7bcce();
int64_t function_306ff96d();
int64_t function_3d2eff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3d2f5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d30a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d30f6(void);
int64_t function_3d32ff(void);
int64_t function_3d3370(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d339f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d3406(int64_t a1);
int64_t function_3d3410(void);
int64_t function_3d341d(void);
int64_t function_3d341e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3d3e3337();
int64_t function_3dbfb9(int64_t a1, int64_t a2);
int64_t function_3dbfe5(void);
int64_t function_3dc037(void);
int64_t function_3dc03f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3dc090(int64_t a1);
int64_t function_3dc0bc(void);
int64_t function_3dc0e6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3dc102(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3dc1b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3dc21f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3dc23c(void);
int64_t function_3dc26b(int64_t a1);
int64_t function_3dc2f3(int64_t a1);
int64_t function_3dc35b(int64_t a1, int64_t a2);
int64_t function_3dc36e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3dc4b9(void);
int64_t function_3dc4da(int64_t a1);
int64_t function_3dc580(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3dc59e(void);
int64_t function_3dc5c9(void);
int64_t function_3dc5da(void);
int64_t function_3dc61f(void);
int64_t function_3dc629(void);
int64_t function_3dc62e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3dc75c(int64_t a1, int64_t a2);
int64_t function_3dc78e(void);
int64_t function_3dc78f(int64_t a1, int64_t a2);
int64_t function_3dc7af(void);
int64_t function_3dc7d7(void);
int64_t function_3dc800(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3dc85f(void);
int64_t function_3dc861(int64_t a1);
int64_t function_3dc86e(int64_t a1);
int64_t function_3dc86f(void);
int64_t function_3dc870(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3dc882(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3dc922(int64_t a1);
int64_t function_3dc974(void);
int64_t function_3dc99d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3dca11(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3dca7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3dcb0d(int64_t a1);
int64_t function_3dcb5f(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3dcb76(void);
int64_t function_3dcb7e(int64_t a1, int64_t a2);
int64_t function_3dcb87(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_3dcba0(int64_t a1, int64_t a2);
int64_t function_3dcbcf(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3dcbdd(int64_t a1, int64_t a2);
int64_t function_3dccb1(void);
int64_t function_3dcd04(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3dcd26(void);
int64_t function_3dcd3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3dcd4b(void);
int64_t function_3dcd8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_485862(void);
int64_t function_485947(void);
int64_t function_48596a(void);
int64_t function_485991(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4859cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_485a43(void);
int64_t function_485a51(void);
int64_t function_485a60(int64_t a1, int64_t a2, int64_t a3);
int64_t function_485aa7(void);
int64_t function_485ac9(void);
int64_t function_485af0(void);
int64_t function_485b12(void);
int64_t function_485b1d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_485bd2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_485bec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_485c10(void);
int64_t function_485c1a(void);
int64_t function_485c2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_485d40(void);
int64_t function_485e41(int64_t a1);
int64_t function_485e4a(void);
int64_t function_485e51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_485e6c(void);
int64_t function_485f61(void);
int64_t function_485fa6(int64_t a1);
int64_t function_48602a(void);
int64_t function_48603c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_48606a(int64_t a1);
int64_t function_48606b(void);
int64_t function_48607e(void);
int64_t function_4860a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4860cc(void);
int64_t function_4860db(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_48610e(int64_t a1);
int64_t function_486145(void);
int64_t function_4861ac(int64_t a1);
int64_t function_486253(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_486318(int64_t a1);
int64_t function_486320(void);
int64_t function_48634f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_48641a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_486435(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_486445(void);
int64_t function_787e74b6();
int64_t function_ffffffff8e5c88db();
int64_t function_ffffffffaeac2179();
int64_t function_ffffffffb13d9fc3();
int64_t function_ffffffffbb5ca555();
int64_t function_ffffffffca623333();
int64_t function_ffffffffd32c9c76();
int64_t function_ffffffffe6dfc420();
int64_t function_ffffffffee09c60d();
int64_t unknown_1120058f();
int64_t unknown_21edcdc5();
int64_t unknown_2f3dcccb();
int64_t unknown_2f47b7dc();
int64_t unknown_3a534e65();
int64_t unknown_3baca59a();
int64_t unknown_45e0ff84();
int64_t unknown_48fb4b07();
int64_t unknown_5298e859();
int64_t unknown_56b67c01();
int64_t unknown_5bca0fa5();
int64_t unknown_5e9c1e1c();
int64_t unknown_6514d8a5();
int64_t unknown_743f779();
int64_t unknown_77c57d39();
int64_t unknown_7c37e378();
int64_t unknown_ffffffff82fb144f();
int64_t unknown_ffffffff9083802d();
int64_t unknown_ffffffff90b28cb4();
int64_t unknown_ffffffff98eda69c();
int64_t unknown_ffffffff9c91d938();
int64_t unknown_ffffffffabf324a7();
int64_t unknown_ffffffffe89cf998();
int64_t unknown_ffffffffe9204aae();

// Address range: 0x3d2eff - 0x3d2f56
int64_t function_3d2eff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = unknown_48fb4b07(); // 0x3d2f01
    int64_t v1; // 0x3d2eff
    char v2 = v1;
    bool v3; // 0x3d2eff
    if (v3) {
        unsigned char v4 = (char)a4 % 32; // 0x3d2f18
        if (v4 != 0) {
            *(char *)v1 = v2 << v4;
        }
        // 0x3d2f1c
        return result;
    }
    if (v3 || v3) {
        char * v5 = (char *)(a1 - 0x17c503b5); // 0x3d2f21
        *v5 = *v5 & v2;
        return result;
    }
    // 0x3d2f4f
    *(char *)0x153f175e = *(char *)0x153f175e + 122;
    return result;
}

// Address range: 0x3d2f5d - 0x3d309e
int64_t function_3d2f5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d2f5d
    unknown_3a534e65();
    int64_t v1; // 0x3d2f5d
    int64_t v2 = v1 & -0xff01; // 0x3d2f64
    int64_t v3 = v2 | (int64_t)&g2; // 0x3d2f64
    int32_t * v4 = (int32_t *)(v3 - 0x735f1741); // 0x3d2f6b
    *v4 = *v4 + (int32_t)a3;
    int64_t v5; // 0x3d2f5d
    *(int32_t *)a3 = *(int32_t *)&v5 + (int32_t)a4;
    int64_t v6 = unknown_1120058f(); // 0x3d2f89
    char * v7 = (char *)v6; // 0x3d2f8e
    *v7 = *v7 | (char)a4;
    v5 = v6 & 0xffffffff;
    int64_t result = unknown_3baca59a(); // 0x3d2f94
    uint32_t v8 = (int32_t)a1; // 0x3d2fa0
    uint32_t v9 = (int32_t)v3 + v8; // 0x3d2fa0
    if (llvm_ctpop_i8((char)v9) % 2 != 0) {
        // 0x3d2fe1
        return result;
    }
    uint32_t v10 = 0x10000 * (int32_t)result >> 16; // 0x3d2fa6
    int64_t result2 = v10; // 0x3d2fa6
    if ((int32_t)v6 + (int32_t)v1 != (int32_t)(v9 < v8)) {
        // 0x3d2ff0
        *(int32_t *)result2 = v10;
        return result2;
    }
    char * v11 = (char *)v3; // 0x3d2f93
    unsigned char v12 = *v11; // 0x3d2fb3
    *v11 = (char)((v3 - (result2 & 0xff00)) / 256);
    char * v13 = (char *)(v1 + 1); // 0x3d2fc0
    int64_t v14; // bp-1364901880, 0x3d2f5d
    *v13 = *v13 + (char)(int64_t)&v14;
    unknown_2f3dcccb(v1);
    int64_t v15 = __asm_iretd(); // 0x3d2fca
    int64_t v16 = 8 * (v2 | (int64_t)&g2 & -0xff01 | 256 * (int64_t)v12); // 0x3d2fcc
    char * v17 = (char *)(v15 + v16); // 0x3d2fcc
    *v17 = *v17 + v12;
    int64_t v18 = (int32_t)v15 >> 31; // 0x3d2fcf
    v5 = v18;
    char * v19 = (char *)(v18 - 0x6399cb99); // 0x3d2fd0
    *v19 = *v19 + (char)(v15 / 256);
    int64_t result3 = unknown_2f47b7dc(); // 0x3d2fd6
    unsigned char v20 = llvm_ctpop_i8((char)result3 + 107); // 0x3d2fdb
    while (v20 % 2 == 0) {
        // 0x3d2fcc
        v17 = (char *)(result3 + v16);
        *v17 = *v17 + v12;
        v18 = (int32_t)result3 >> 31;
        v5 = v18;
        v19 = (char *)(v18 - 0x6399cb99);
        *v19 = *v19 + (char)(result3 / 256);
        result3 = unknown_2f47b7dc();
        v20 = llvm_ctpop_i8((char)result3 + 107);
    }
    // 0x3d2fe1
    return result3;
}

// Address range: 0x3d30a9 - 0x3d30b0
int64_t function_3d30a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 0x5270e1bc); // 0x3d30a9
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x3d30a9
    return result;
}

// Address range: 0x3d30f6 - 0x3d30f7
int64_t function_3d30f6(void) {
    // 0x3d30f6
    int64_t result; // 0x3d30f6
    return result;
}

// Address range: 0x3d32ff - 0x3d3309
int64_t function_3d32ff(void) {
    // 0x3d32ff
    int64_t result; // 0x3d32ff
    return result;
}

// Address range: 0x3d3370 - 0x3d339f
int64_t function_3d3370(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d3370
    unknown_743f779();
    int32_t * v1 = (int32_t *)(a3 + 0x4dd3af25); // 0x3d3378
    *v1 = *v1 + (int32_t)a3;
    int64_t v2 = unknown_45e0ff84(); // 0x3d337e
    __asm_out_133(127, (int32_t)v2);
    *(char *)a1 = (char)v2;
    bool v3; // 0x3d3370
    int64_t v4 = v3 ? -1 : 1; // 0x3d3391
    int64_t v5; // 0x3d3370
    int64_t v6 = unknown_ffffffffe89cf998(v4 + a1, (int32_t)v5 + (int32_t)a2) + 0x20954f16; // 0x3d3397
    __asm_out_133(-128, (int32_t)v6);
    return v6 & 0xffffffff;
}

// Address range: 0x3d339f - 0x3d33a9
int64_t function_3d339f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d339f
    return unknown_5bca0fa5(a1, a2, a3, a4);
}

// Address range: 0x3d3406 - 0x3d3407
int64_t function_3d3406(int64_t a1) {
    // 0x3d3406
    int64_t result; // 0x3d3406
    return result;
}

// Address range: 0x3d3410 - 0x3d341b
int64_t function_3d3410(void) {
    // 0x3d3410
    int64_t v1; // 0x3d3410
    *(int32_t *)0x73c4a6078050c572 = (int32_t)v1;
    return function_3d341e(v1, v1, v1, v1, v1, v1, (int64_t)&g4);
}

// Address range: 0x3d341d - 0x3d341e
int64_t function_3d341d(void) {
    // 0x3d341d
    int64_t result; // 0x3d341d
    return result;
}

// Address range: 0x3d341e - 0x3d34c8
int64_t function_3d341e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3d341e
    __asm_in(64);
    return __asm_iretd() & 0xffffff17 ^ 0xb7e3bc50;
}

// Address range: 0x3dbfb9 - 0x3dbfbd
int64_t function_3dbfb9(int64_t a1, int64_t a2) {
    // 0x3dbfb9
    return a1 & 0xffffffff;
}

// Address range: 0x3dbfe5 - 0x3dbfe6
int64_t function_3dbfe5(void) {
    // 0x3dbfe5
    int64_t result; // 0x3dbfe5
    return result;
}

// Address range: 0x3dc037 - 0x3dc03f
int64_t function_3dc037(void) {
    // 0x3dc037
    int64_t result; // 0x3dc037
    return result;
}

// Address range: 0x3dc03f - 0x3dc050
int64_t function_3dc03f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3dc03f
    int64_t v1; // 0x3dc03f
    *(char *)a1 = (char)(v1 / 256 | v1);
    return function_3dbfe5();
}

// Address range: 0x3dc090 - 0x3dc091
int64_t function_3dc090(int64_t a1) {
    // 0x3dc090
    int64_t result; // 0x3dc090
    return result;
}

// Address range: 0x3dc0bc - 0x3dc0c1
int64_t function_3dc0bc(void) {
    // 0x3dc0bc
    return function_3d3e3337();
}

// Address range: 0x3dc0e6 - 0x3dc102
int64_t function_3dc0e6(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    int64_t v2 = -0x3054f267; // bp-8, 0x3dc0e6
    int64_t v3; // 0x3dc0e6
    int32_t * v4 = (int32_t *)(v3 - 63); // 0x3dc0f8
    *v4 = *v4 - (int32_t)v3;
    *(char *)v1 = *(char *)&v1 + (char)v3;
    int64_t v5; // 0x3dc0e6
    __asm_outsb((int16_t)(v1 & 0xff00 | v3 % 256), *(char *)&v5);
    return (int64_t)&v2;
}

// Address range: 0x3dc102 - 0x3dc110
int64_t function_3dc102(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3dc102
    __asm_outsd((int16_t)a3, __readgsdword(a2));
    char v1 = *(char *)0x14aa90c; // 0x3dc105
    int64_t result; // 0x3dc102
    bool v2; // 0x3dc102
    *(char *)0x14aa90c = (char)v2 - (char)(result / 256) + v1;
    int32_t * v3 = (int32_t *)a4; // 0x3dc10b
    *v3 = *v3 & (int32_t)result;
    return result;
}

// Address range: 0x3dc1b9 - 0x3dc1e2
int64_t function_3dc1b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3dc1b9
    int64_t v1; // 0x3dc1b9
    int32_t * v2 = (int32_t *)(v1 + 0x9d9750); // 0x3dc1c7
    *v2 = *v2 + (int32_t)v1;
    *(char *)v1 = 102;
    return v1 + 0xba2eae6c & 0xffffffff;
}

// Address range: 0x3dc21f - 0x3dc22d
int64_t function_3dc21f(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_ffffffff82fb144f(a1, a2, a3); // 0x3dc224
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3dc23c - 0x3dc24d
int64_t function_3dc23c(void) {
    // 0x3dc23c
    int64_t v1; // 0x3dc23c
    int64_t v2 = v1 + 0x5baa885e; // 0x3dc23c
    char v3 = *(char *)(v2 & 0xffffffff); // 0x3dc241
    return v2 & 0xffffff00 | (int64_t)(v3 + (char)v2);
}

// Address range: 0x3dc26b - 0x3dc26f
int64_t function_3dc26b(int64_t a1) {
    // 0x3dc26b
    return a1 & 0xffffffff;
}

// Address range: 0x3dc2f3 - 0x3dc300
int64_t function_3dc2f3(int64_t a1) {
    // 0x3dc2f3
    bool v1; // 0x3dc2f3
    return function_ffffffffe6dfc420((v1 ? -1 : 1) + a1);
}

// Address range: 0x3dc35b - 0x3dc36e
int64_t function_3dc35b(int64_t a1, int64_t a2) {
    // 0x3dc35b
    int64_t v1; // 0x3dc35b
    int64_t v2 = v1 ^ 218; // 0x3dc35b
    *(char *)a2 = (char)v2 + (char)v1;
    *(int32_t *)0x1afded7d = *(int32_t *)0x1afded7d | (int32_t)v1;
    bool v3; // 0x3dc35b
    *(int32_t *)((v3 ? -4 : 4) + a1) = *(int32_t *)(v2 & 0xffffffff);
    return a2 & 0xffffffff;
}

// Address range: 0x3dc36e - 0x3dc398
int64_t function_3dc36e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 & 0xff00 & a4 | a3 & -0xff01); // 0x3dc376
    uint32_t v2 = (int32_t)a4; // 0x3dc376
    uint32_t v3 = v2 % 32; // 0x3dc376
    int64_t v4; // 0x3dc36e
    int32_t v5; // 0x3dc36e
    int64_t v6; // 0x3dc36e
    if (v3 == 0) {
        // 0x3dc36e
        v5 = v6;
    } else {
        uint32_t v7 = *v1; // 0x3dc376
        *v1 = v7 >> 32 - v3 | v7 << v3;
        int64_t v8; // 0x3dc36e
        v4 = v8;
        v5 = *(int32_t *)&v8;
    }
    __asm_iretd();
    *(int32_t *)v4 = v5 ^ v2;
    *v1 = *v1 - (int32_t)v6;
    return function_ffffffffb13d9fc3();
}

// Address range: 0x3dc4b9 - 0x3dc4ba
int64_t function_3dc4b9(void) {
    // 0x3dc4b9
    int64_t result; // 0x3dc4b9
    return result;
}

// Address range: 0x3dc4da - 0x3dc525
int64_t function_3dc4da(int64_t a1) {
    unsigned char v1 = (char)a1;
    int64_t result; // 0x3dc4da
    if (llvm_ctpop_i8(v1 - 123) % 2 == 0) {
        char v2 = *(char *)-0x4ea8c4da; // 0x3dc51f
        *(char *)-0x4ea8c4da = v2 + (char)((uint64_t)result / 256);
        return result;
    }
    int64_t v3 = result & 0xffffffff; // 0x3dc4e5
    if (v1 < 123) {
        // 0x3dc4eb
        return function_17ac514(v3, 0xba09c627);
    }
    int64_t result2 = a1 & 0xffffffff; // 0x3dc4e5
    if ((122 - v1 & v1) >= 0) {
        // 0x3dc50e
        return result2;
    }
    // 0x3dc4f6
    *(int32_t *)v3 = (int32_t)result + (int32_t)a1;
    return result2 ^ 255;
}

// Address range: 0x3dc580 - 0x3dc585
int64_t function_3dc580(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3dc580
    *(char *)a3 = (char)a4;
    int64_t result; // 0x3dc580
    return result;
}

// Address range: 0x3dc59e - 0x3dc5a5
int64_t function_3dc59e(void) {
    // 0x3dc59e
    return function_ffffffffee09c60d();
}

// Address range: 0x3dc5c9 - 0x3dc5cb
int64_t function_3dc5c9(void) {
    // 0x3dc5c9
    int64_t v1; // 0x3dc5c9
    return function_3dc62e(v1, v1, v1, v1, (int64_t)&g4);
}

// Address range: 0x3dc5da - 0x3dc5db
int64_t function_3dc5da(void) {
    // 0x3dc5da
    int64_t result; // 0x3dc5da
    return result;
}

// Address range: 0x3dc61f - 0x3dc624
int64_t function_3dc61f(void) {
    // 0x3dc61f
    return function_ffffffffca623333();
}

// Address range: 0x3dc629 - 0x3dc62b
int64_t function_3dc629(void) {
    // 0x3dc629
    return function_3dc5da();
}

// Address range: 0x3dc62e - 0x3dc745
int64_t function_3dc62e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x3dc62e
    int64_t result = v2 | 69; // 0x3dc62f
    uint64_t v3 = a4 - 1; // 0x3dc637
    if (v3 == 0 | *(char *)(a4 + 0xb32b26) == (char)a4) {
        // 0x3dc639
        return result;
    }
    int64_t v4 = result & 0xffffffff; // 0x3dc63f
    int64_t v5; // bp-8, 0x3dc62e
    int64_t result2 = (int64_t)&v5; // 0x3dc63f
    uint32_t v6 = (int32_t)v2; // 0x3dc640
    int32_t v7; // 0x3dc62e
    uint32_t v8 = v7 + v6; // 0x3dc640
    int64_t v9 = v4 - 8; // 0x3dc645
    if (v8 >= 1) {
        // 0x3dc639
        return result2;
    }
    uint64_t v10 = result2 + 179 + (int64_t)(v8 < v6); // 0x3dc6bf
    int64_t result3 = v10 % 256 | result2 & -256; // 0x3dc6bf
    char * v11 = (char *)(result3 + 37); // 0x3dc6c1
    unsigned char v12 = *v11; // 0x3dc6c1
    char v13 = a3; // 0x3dc6c1
    char v14 = v12 + v13; // 0x3dc6c1
    *v11 = v14;
    if (((v14 ^ v12) & (v14 ^ v13)) < 0) {
        char * v15 = (char *)(a3 + 0x5a9c09df); // 0x3dc676
        *v15 = *v15 - v13;
        return result3;
    }
    uint64_t v16 = v3 % 64; // 0x3dc6c6
    bool v17; // 0x3dc62e
    if (v16 == 0) {
        v17 = v14 < v12;
        if (v14 < 0) {
            goto lab_0x3dc726;
        } else {
            goto lab_0x3dc6cc;
        }
    } else {
        int64_t * v18 = (int64_t *)(v2 + 84); // 0x3dc6c6
        uint64_t v19 = *v18; // 0x3dc6c6
        int64_t v20 = v19 >> v16; // 0x3dc6c6
        *v18 = v20;
        v17 = (v19 & 1 << v16 - 1) != 0;
        if (v20 < 0) {
            goto lab_0x3dc726;
        } else {
            goto lab_0x3dc6cc;
        }
    }
  lab_0x3dc726:;
    bool v21 = v17;
    unsigned char v22 = (char)v10; // 0x3dc726
    unsigned char v23 = *(char *)result3 + v22; // 0x3dc726
    bool v24 = v21 ? v23 + (char)v21 <= v22 : v23 < v22; // 0x3dc726
    char * v25 = (char *)v3; // 0x3dc731
    *v25 = (char)(v8 / 256);
    int64_t result4 = unknown_77c57d39(); // 0x3dc733
    int32_t * v26 = (int32_t *)v3; // 0x3dc73b
    *v26 = *v26 + (int32_t)result4 + (int32_t)v24;
    *(char *)-0x392062bc = *(char *)-0x392062bc + *v25;
    *(int64_t *)(v4 - 16) = 9;
    return result4;
  lab_0x3dc6cc:
    // 0x3dc6cc
    __asm_outsb((int16_t)a3, *(char *)&v1);
    int32_t * v27 = (int32_t *)(a1 + 0x1b7111b7); // 0x3dc6d2
    int32_t v28 = *v27; // 0x3dc6d2
    *v27 = v28 + (int32_t)(-1 - (int32_t)v9 < (int32_t)a1) - (int32_t)v1;
    int32_t result5 = __asm_in_135(-110); // 0x3dc6e3
    *(char *)-0x683d9a0f = *(char *)-0x683d9a0f + (char)(v8 / 256);
    return result5;
}

// Address range: 0x3dc75c - 0x3dc761
int64_t function_3dc75c(int64_t a1, int64_t a2) {
    // 0x3dc75c
    return function_3dc78f(a1, a2);
}

// Address range: 0x3dc78e - 0x3dc78f
int64_t function_3dc78e(void) {
    // 0x3dc78e
    int64_t result; // 0x3dc78e
    return result;
}

// Address range: 0x3dc78f - 0x3dc798
int64_t function_3dc78f(int64_t a1, int64_t a2) {
    // 0x3dc78f
    int64_t v1; // 0x3dc78f
    int64_t v2 = v1;
    unsigned char v3 = *(char *)(v2 + (int64_t)*(char *)(v1 % 256 + v2)); // 0x3dc790
    int64_t result = v1 & -256 | (int64_t)v3; // 0x3dc790
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x3dc7af - 0x3dc7b0
int64_t function_3dc7af(void) {
    // 0x3dc7af
    int64_t result; // 0x3dc7af
    return result;
}

// Address range: 0x3dc7d7 - 0x3dc7d8
int64_t function_3dc7d7(void) {
    // 0x3dc7d7
    int64_t result; // 0x3dc7d7
    return result;
}

// Address range: 0x3dc800 - 0x3dc82c
int64_t function_3dc800(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a1 + 0x310ec898); // 0x3dc800
    unsigned char v2 = *v1; // 0x3dc800
    int64_t v3; // 0x3dc800
    unsigned char v4 = v2 + (char)v3; // 0x3dc800
    *v1 = v4;
    char * v5 = (char *)(v3 - 0x194811f9); // 0x3dc806
    unsigned char v6 = *v5; // 0x3dc806
    *v5 = 64 * v6 | v6 / 8 | 32 * (char)(v4 < v2);
    int32_t * v7 = (int32_t *)(a2 + 0x8dcf4a); // 0x3dc80d
    *v7 = *v7 | (int32_t)v3;
    *(char *)(v3 - 106) = (char)(a4 / 256);
    int64_t v8; // 0x3dc800
    *(char *)a3 = *(char *)&v8 ^ ((char)v3 | -117);
    return function_3dc7d7();
}

// Address range: 0x3dc85f - 0x3dc860
int64_t function_3dc85f(void) {
    // 0x3dc85f
    int64_t result; // 0x3dc85f
    return result;
}

// Address range: 0x3dc861 - 0x3dc862
int64_t function_3dc861(int64_t a1) {
    // 0x3dc861
    int64_t result; // 0x3dc861
    return result;
}

// Address range: 0x3dc86e - 0x3dc86f
int64_t function_3dc86e(int64_t a1) {
    // 0x3dc86e
    int64_t result; // 0x3dc86e
    return result;
}

// Address range: 0x3dc86f - 0x3dc870
int64_t function_3dc86f(void) {
    // 0x3dc86f
    int64_t result; // 0x3dc86f
    return result;
}

// Address range: 0x3dc870 - 0x3dc882
int64_t function_3dc870(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3dc870
    __asm_movq(*(int64_t *)(a3 - 0x5585fe99));
    int64_t result; // 0x3dc870
    return result;
}

// Address range: 0x3dc882 - 0x3dc8f5
int64_t function_3dc882(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3dc882
    int64_t v1; // 0x3dc882
    int64_t v2 = v1;
    int64_t v3 = a1 & 0xffffffff; // 0x3dc88a
    bool v4; // 0x3dc882
    if (v4) {
        v3 = function_3dc85f();
    }
    uint64_t v5 = v3;
    if ((int32_t)v5 != -0x66e18aff) {
        unsigned char v6 = *(char *)((v5 + (v2 & 0xff00) & 0xff00 | v2 & -0xff01) + v5 % 256); // 0x3dc8f2
        return v5 & -256 | (int64_t)v6;
    }
    // 0x3dc8c1
    *(char *)a2 = (char)a5 + (char)a2;
    __asm_wait();
    int32_t v7 = (int32_t)__asm_int3() | 0x3a0aca51; // 0x3dc8e3
    int64_t result = v7; // 0x3dc8e8
    if (v7 >= 0) {
        result = function_3dc86f();
    }
    // 0x3dc8ea
    return result;
}

// Address range: 0x3dc922 - 0x3dc92d
int64_t function_3dc922(int64_t a1) {
    // 0x3dc922
    int64_t v1; // 0x3dc922
    return v1 & 0xc600d0 | (int64_t)((int32_t)&g2 & 0xc608d0);
}

// Address range: 0x3dc974 - 0x3dc975
int64_t function_3dc974(void) {
    // 0x3dc974
    int64_t result; // 0x3dc974
    return result;
}

// Address range: 0x3dc99d - 0x3dca10
int64_t function_3dc99d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x3dc99d
    if (v1 != 0) {
        function_3dc974();
    }
    // 0x3dc99f
    unknown_6514d8a5();
    int64_t result = unknown_ffffffffe9204aae(); // 0x3dc9a8
    int64_t v2; // 0x3dc99d
    *(int32_t *)a1 = (int32_t)v2 + (int32_t)a1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int32_t v3 = result; // 0x3dc9b0
    if ((0x6eef2000 - v3 & v3) >= 0) {
        int32_t * v4 = (int32_t *)(8 * v1 - 0x5c9f0635 + result); // 0x3dca07
        *v4 = *v4 + (int32_t)*(int64_t *)(a3 & 0xffffffff & v2);
        return result;
    }
    while (true) {
        // 0x3dc9fa
        unknown_56b67c01();
    }
}

// Address range: 0x3dca11 - 0x3dca7d
int64_t function_3dca11(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3dca11
    int64_t v1; // 0x3dca11
    *(char *)a1 = (char)v1;
    bool v2; // 0x3dca11
    int64_t v3 = (v2 ? -1 : 1) + a1; // 0x3dca11
    uint64_t v4 = 256 * v1 & 0xff00 ^ a4; // 0x3dca12
    int32_t * v5 = (int32_t *)(a2 - 0x1b6ad050); // 0x3dca14
    *v5 = *v5 + (int32_t)v4;
    int64_t v6 = v1 & 0xffffffff; // 0x3dca1a
    uint32_t v7 = 2 * (int32_t)v1; // 0x3dca1d
    if (v7 == 0) {
        char * v8 = (char *)((a2 & 0xffffffff) + 0x49449600); // 0x3dca5a
        *v8 = *v8 + (char)a2;
        char v9 = *(char *)((v4 / 256 + a2) % 256 | a2 & 0xffffff00); // 0x3dca68
        return unknown_7c37e378(v3, v6, a3 & -256 | (int64_t)(v9 | (char)a3), v4);
    }
    // 0x3dca21
    int64_t v10; // 0x3dca11
    uint32_t v11 = *(int32_t *)&v10; // 0x3dca23
    *(int32_t *)v10 = v11 / 4 | 0x40000000 * v11;
    int64_t v12 = unknown_ffffffff9083802d(v3, (v2 ? -4 : 4) + v6); // 0x3dca26
    uint32_t v13 = (int32_t)v1; // 0x3dca2c
    uint32_t v14 = *(int32_t *)v12 + v13; // 0x3dca2c
    uint64_t v15 = unknown_ffffffff9c91d938(); // 0x3dca32
    char v16 = *(char *)(v4 - 0x327af00); // 0x3dca37
    int64_t v17 = *(int64_t *)((int64_t)v7 + 8); // 0x3dca4d
    char * v18 = (char *)((v4 & -256 | (int64_t)((char)a4 - v16 + (char)(v14 < v13))) + 8 * (int64_t)v14); // 0x3dca50
    *v18 = *v18 + (char)(v15 / 256);
    return unknown_5298e859(((v17 & (int64_t)&g1) == 0 ? 4 : -4) + v3);
}

// Address range: 0x3dca7d - 0x3dcaeb
int64_t function_3dca7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    uint32_t v2 = (int32_t)a4 % 32; // 0x3dca7d
    if (v2 != 0) {
        *(int32_t *)a1 = (int32_t)a1 << v2;
    }
    int64_t v3; // 0x3dca7d
    __asm_out((int16_t)a3, (int32_t)v3);
    int64_t v4 = 2 * a4; // 0x3dca82
    int16_t v5 = 256 * (int16_t)v3 >> 8; // 0x3dca84
    int16_t v6 = v5 * v5; // 0x3dca84
    int64_t v7 = v3 & 0xffff0000 | (int64_t)(v6 & 0x7f00) | (int64_t)((v6 + 135) % 256); // 0x3dca86
    int64_t * v8 = (int64_t *)(v3 - 8); // 0x3dca8e
    char v9 = (int32_t)v7 < (int32_t)v4; // 0x3dca88
    int64_t v10 = v4 & 0xfffffffe;
    int64_t v11 = a3;
    int64_t v12 = a1;
    uint32_t v13 = (int32_t)v7;
    *(int32_t *)v7 = v13;
    char * v14 = (char *)v10; // 0x3dca8c
    *v14 = v9 + (char)v10 + *v14;
    *v8 = v11;
    uint32_t v15 = v13 - 0x678ad001; // 0x3dca8f
    int64_t v16 = v10 - 1; // 0x3dca95
    while (v16 == 0 || v15 == 0) {
        char * v17 = (char *)((int64_t)v15 + 0x6c20228b); // 0x3dca97
        *v17 = *v17 + (char)v16;
        int64_t v18 = unknown_ffffffffabf324a7(); // 0x3dcaa1
        uint32_t v19 = (int32_t)v11 + 1 + *(int32_t *)(v11 + 0x2b4ff923); // 0x3dcaa6
        *(int32_t *)v12 = (int32_t)v18;
        int64_t v20 = *v8; // 0x3dcaad
        int64_t v21 = unknown_ffffffff90b28cb4(v20); // 0x3dcaae
        unsigned char v22 = *(char *)&v1 ^ (char)v21; // 0x3dcab3
        int64_t result = v21 & -256 | (int64_t)v22; // 0x3dcab3
        *(int32_t *)v20 = __asm_insd((int16_t)v19);
        if (v22 != 0) {
            // 0x3dcab8
            return result;
        }
        v10 = v16;
        v11 = v19;
        v12 = v20;
        v13 = (int32_t)result;
        *(int32_t *)result = v13;
        v14 = (char *)v10;
        *v14 = (char)v10 + *v14;
        *v8 = v11;
        v15 = v13 - 0x678ad001;
        v16 = v10 - 1;
    }
    int64_t v23 = unknown_21edcdc5(); // 0x3dcabf
    int32_t v24 = v13 < 0x678ad001 ? 0x5d201e9 : 0x5d201e8; // 0x3dcac9
    *(int32_t *)0xeed20eb1 = *(int32_t *)0xeed20eb1 + v24;
    char * v25 = (char *)(8 * v3 - 46 + v1); // 0x3dcad0
    *v25 = *v25 & (char)v16;
    int32_t * v26 = (int32_t *)(v12 + 0x7f01e8e6); // 0x3dcada
    uint32_t v27 = *v26; // 0x3dcada
    *v26 = v27 + 22;
    uint32_t v28 = (int32_t)v23; // 0x3dcae1
    uint32_t v29 = *(int32_t *)v23 + v28; // 0x3dcae1
    uint32_t result2 = v29 + (int32_t)(v27 < 0xffffffea); // 0x3dcae1
    bool v30 = v27 < 0xffffffea ? result2 <= v28 : v29 < v28; // 0x3dcae1
    char * v31 = (char *)(v3 + 0x3d0ab037 + v3); // 0x3dcae3
    *v31 = *v31 + (*(char *)(v10 + 0x5dae40a2) ^ -84) + (char)v30;
    return result2;
}

// Address range: 0x3dcb0d - 0x3dcb10
int64_t function_3dcb0d(int64_t a1) {
    // 0x3dcb0d
    int64_t result; // 0x3dcb0d
    return result;
}

// Address range: 0x3dcb5f - 0x3dcb71
int64_t function_3dcb5f(int64_t a1, int64_t a2, uint64_t a3) {
    char * v1 = (char *)(a3 - 0x7eff2c3c); // 0x3dcb61
    bool v2; // 0x3dcb5f
    *v1 = *v1 + (char)(a3 / 256) + (char)v2;
    int64_t result; // 0x3dcb5f
    return result;
}

// Address range: 0x3dcb76 - 0x3dcb7a
int64_t function_3dcb76(void) {
    // 0x3dcb76
    int64_t v1; // 0x3dcb76
    return function_3dcbcf(v1, v1, v1);
}

// Address range: 0x3dcb7e - 0x3dcb87
int64_t function_3dcb7e(int64_t a1, int64_t a2) {
    // 0x3dcb7e
    int64_t v1; // 0x3dcb7e
    int32_t * v2 = (int32_t *)(v1 - 42); // 0x3dcb83
    *v2 = *v2 + (int32_t)a1;
    return 0xe807fb37;
}

// Address range: 0x3dcb87 - 0x3dcb9d
int64_t function_3dcb87(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x3dcb87
    int64_t v1; // 0x3dcb87
    int32_t * v2 = (int32_t *)(v1 + 0x3da4223a); // 0x3dcb88
    bool v3; // 0x3dcb87
    *v2 = *v2 + 1 + (int32_t)v3;
    char * v4 = (char *)(a4 + 20); // 0x3dcb8f
    *v4 = *v4 + (char)(a5 / 256);
    unknown_ffffffff98eda69c();
    return function_ffffffff8e5c88db();
}

// Address range: 0x3dcba0 - 0x3dcbc3
int64_t function_3dcba0(int64_t a1, int64_t a2) {
    // 0x3dcba0
    int64_t v1; // 0x3dcba0
    int32_t * v2 = (int32_t *)(v1 + a1); // 0x3dcba7
    uint32_t v3 = *v2; // 0x3dcba7
    uint32_t v4 = v3 + (int32_t)a1; // 0x3dcba7
    *v2 = v4;
    int32_t * v5 = (int32_t *)(v1 - 0x673a9a73); // 0x3dcbaa
    *v5 = *v5 + (int32_t)v1 + (int32_t)(v4 < v3);
    int64_t v6 = *(int64_t *)(int64_t)(0x3dff3100 * *(int32_t *)(a2 - 42)); // 0x3dcbb2
    return v6 + 43 & 73 | v6 & 0xc0c900;
}

// Address range: 0x3dcbcf - 0x3dcbd8
int64_t function_3dcbcf(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x3dcbcf
    int64_t v1; // 0x3dcbcf
    int64_t v2 = v1;
    char * v3 = (char *)(a1 - 0x78da89ff); // 0x3dcbd1
    *v3 = *v3 | (char)(a3 / 256);
    return 2 * v2 & 254 | v2 & -256;
}

// Address range: 0x3dcbdd - 0x3dcbe3
int64_t function_3dcbdd(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 + 16); // 0x3dcbdd
    int64_t result; // 0x3dcbdd
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x3dccb1 - 0x3dccb2
int64_t function_3dccb1(void) {
    // 0x3dccb1
    int64_t result; // 0x3dccb1
    return result;
}

// Address range: 0x3dcd04 - 0x3dcd1d
int64_t function_3dcd04(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3dcd04
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x3dcd04
    if ((*(int16_t *)(a2 - 0x4eb24895) & (int16_t)v1) != 0) {
        function_3dccb1();
    }
    // 0x3dcd16
    return unknown_5e9c1e1c();
}

// Address range: 0x3dcd26 - 0x3dcd27
int64_t function_3dcd26(void) {
    // 0x3dcd26
    int64_t result; // 0x3dcd26
    return result;
}

// Address range: 0x3dcd3b - 0x3dcd3f
int64_t function_3dcd3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3dcd3b
    return function_3dcd26();
}

// Address range: 0x3dcd4b - 0x3dcd4c
int64_t function_3dcd4b(void) {
    // 0x3dcd4b
    int64_t result; // 0x3dcd4b
    return result;
}

// Address range: 0x3dcd8c - 0x3dcd98
int64_t function_3dcd8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3dcd8c
    int64_t v1; // 0x3dcd8c
    int64_t * v2 = (int64_t *)(v1 + 0x7e01e822); // 0x3dcd91
    bool v3; // 0x3dcd8c
    *v2 = (int64_t)v3 - a6 + *v2;
    return function_3dcd4b();
}

// Address range: 0x485862 - 0x485863
int64_t function_485862(void) {
    // 0x485862
    int64_t result; // 0x485862
    return result;
}

// Address range: 0x485947 - 0x485948
int64_t function_485947(void) {
    // 0x485947
    int64_t result; // 0x485947
    return result;
}

// Address range: 0x48596a - 0x48597a
int64_t function_48596a(void) {
    // 0x48596a
    return function_485947();
}

// Address range: 0x485991 - 0x48599b
int64_t function_485991(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(3 * a3); // 0x485991
    *v1 = 2 * *v1;
    int64_t result; // 0x485991
    return result;
}

// Address range: 0x4859cd - 0x485a42
int64_t function_4859cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4859cd
    int64_t v1; // 0x4859cd
    uint64_t v2 = v1;
    __asm_out_136((int16_t)a3, (char)v2);
    int64_t result; // 0x4859cd
    bool v3; // 0x4859cd
    if (!v3) {
        // 0x4859d5
        result = v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
    }
    // 0x485a41
    return result;
}

// Address range: 0x485a43 - 0x485a45
int64_t function_485a43(void) {
    // 0x485a43
    int64_t result; // 0x485a43
    return result;
}

// Address range: 0x485a51 - 0x485a54
int64_t function_485a51(void) {
    // 0x485a51
    int64_t result; // 0x485a51
    return result;
}

// Address range: 0x485a60 - 0x485a83
int64_t function_485a60(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a1; // 0x485a60
    *(int32_t *)(a1 - 0x3a158079) = v1;
    int64_t v2; // 0x485a60
    bool v3; // 0x485a60
    if (!v3) {
        // 0x485a68
        float80_t v4; // 0x485a60
        *(float64_t *)v2 = (float64_t)v4;
        return (int64_t)(-48 * *(int32_t *)(v2 + 0x12e44675));
    }
    // 0x485a77
    int64_t result; // 0x485a60
    if (*(int32_t *)(v2 - 0x6cebb1f1) < v1) {
        result = function_485af0();
    }
    // 0x485a7f
    return result;
}

// Address range: 0x485aa7 - 0x485aa8
int64_t function_485aa7(void) {
    // 0x485aa7
    int64_t result; // 0x485aa7
    return result;
}

// Address range: 0x485ac9 - 0x485aca
int64_t function_485ac9(void) {
    // 0x485ac9
    int64_t result; // 0x485ac9
    return result;
}

// Address range: 0x485af0 - 0x485af1
int64_t function_485af0(void) {
    // 0x485af0
    int64_t result; // 0x485af0
    return result;
}

// Address range: 0x485b12 - 0x485b1d
int64_t function_485b12(void) {
    // 0x485b12
    return function_306ff96d();
}

// Address range: 0x485b1d - 0x485bc4
int64_t function_485b1d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x485b1d
    int64_t v1; // 0x485b1d
    uint64_t v2 = v1;
    char v3 = *(char *)(v2 - 63); // 0x485b1f
    char v4 = *(char *)(a1 + 82) & (char)(v2 / 256); // 0x485b22
    bool v5; // 0x485b1d
    int64_t result = v2 & -0x10000 | (int64_t)((char)v5 + (char)v2 + v3) | 256 * (int64_t)v4; // 0x485b25
    if (a4 == 0) {
        result = function_485ac9();
    }
    // 0x485b27
    if (llvm_ctpop_i8(v4) % 2 == 0) {
        // 0x485b79
        *(int32_t *)result = (int32_t)a2;
        if (v4 < 1) {
            // 0x485bc1
            return result;
        }
        int32_t * v6 = (int32_t *)(result + 115); // 0x485b7e
        int32_t v7 = *v6; // 0x485b7e
        *v6 = 0x80000 * v7;
        return result + 0x534890e6 + (int64_t)((v7 & 0x2000) != 0) & 0xffffffff;
    }
    unsigned char v8 = (char)v1;
    __asm_out((int16_t)a3, (int32_t)result);
    uint32_t v9 = (int32_t)a1; // 0x485b2d
    char v10 = 2 * v9 < v9; // 0x485b32
    unsigned char v11 = (char)(a3 / 256) + v10; // 0x485b32
    char v12 = v8 - v11; // 0x485b32
    *(char *)v1 = v12;
    int64_t v13 = 2 * v9 < v9 ? v11 != -1 | v12 - v10 > v8 : v11 > v8 ? 127 : 128; // 0x485b35
    return (a2 - v13) % 256 | a2 & 0xffffff00;
}

// Address range: 0x485bd2 - 0x485be2
int64_t function_485bd2(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x69089628); // 0x485bdb
    int64_t v2; // 0x485bd2
    bool v3; // 0x485bd2
    *v1 = (int32_t)v3 + (int32_t)v2 + *v1;
    return v2 & -256 | (int64_t)*(char *)0x416f1f3d23066e50;
}

// Address range: 0x485bec - 0x485bf6
int64_t function_485bec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x485bec
    int64_t v1; // 0x485bec
    int32_t * v2 = (int32_t *)(v1 + 40); // 0x485bee
    *v2 = *v2 - 88;
    return __asm_int3();
}

// Address range: 0x485c10 - 0x485c15
int64_t function_485c10(void) {
    // 0x485c10
    return function_787e74b6();
}

// Address range: 0x485c1a - 0x485c1b
int64_t function_485c1a(void) {
    // 0x485c1a
    int64_t result; // 0x485c1a
    return result;
}

// Address range: 0x485c2e - 0x485d1f
int64_t function_485c2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t v1 = *(int32_t *)(2 * a4 + a1); // 0x485c69
    int64_t v2 = __asm_int3(); // 0x485c6c
    int64_t result = __asm_int1(); // 0x485c70
    *(char *)a1 = (char)a2;
    int64_t v3 = a4 - 1; // 0x485c72
    if (v3 == 0 || (char)v2 == -122) {
        // 0x485c74
        return result;
    }
    // 0x485cd2
    bool v4; // 0x485c2e
    int64_t v5 = v4 ? -9 : 9;
    int64_t v6 = v5 + a2; // 0x485cd2
    unsigned char v7 = (char)v3 % 32; // 0x485cd5
    if (v7 != 0) {
        char * v8 = (char *)(v6 + 0x1c60004b); // 0x485cd5
        *v8 = *v8 << v7;
    }
    // 0x485cdb
    int64_t v9; // 0x485c2e
    int64_t v10 = (int32_t)v4 + (int32_t)v9 - v1; // 0x485c69
    int64_t v11 = v5 + a1; // 0x485cd2
    int64_t result2 = result & 0xffffffff ^ 0x7c3f76d3; // 0x485cdb
    *(int64_t *)v10 = a3;
    if (a4 == 2) {
        // 0x485ce3
        if (*(int32_t *)v11 == (int32_t)v6) {
            // 0x485c74
            return result2;
        }
        int64_t v12 = result2 + 0x59a8e15f; // 0x485cf1
        *(int64_t *)(v10 - 8) = v10;
        int64_t result3 = (v12 ^ v9) % 256 | v12 & 0xffffff00; // 0x485cf7
        *(int64_t *)(v10 - 16) = result3;
        return result3;
    }
    // 0x485ca0
    *(char *)result2 = __asm_insb((int16_t)a3);
    char v13 = __asm_in(24); // 0x485ca8
    int64_t v14 = (int64_t)v13 & -256 | v11 & 0xffffff00 | (int64_t)(v13 + 109); // 0x485caa
    *(int32_t *)result2 = (int32_t)v14;
    int32_t * v15 = (int32_t *)(a3 + 7); // 0x485cad
    *v15 = *v15 / 0x200000;
    uint32_t v16 = *(int32_t *)v6; // 0x485cb1
    return (v14 & 0xffffffff | 0x100000000 * a3) / (int64_t)v16 & 0xffffffff;
}

// Address range: 0x485d40 - 0x485d41
int64_t function_485d40(void) {
    // 0x485d40
    int64_t result; // 0x485d40
    return result;
}

// Address range: 0x485e41 - 0x485e42
int64_t function_485e41(int64_t a1) {
    // 0x485e41
    int64_t result; // 0x485e41
    return result;
}

// Address range: 0x485e4a - 0x485e4f
int64_t function_485e4a(void) {
    // 0x485e4a
    return function_ffffffffbb5ca555();
}

// Address range: 0x485e51 - 0x485e5b
int64_t function_485e51(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x485e51
    int64_t result; // 0x485e51
    int64_t * v1 = (int64_t *)(a5 - 15 + 8 * result); // 0x485e51
    bool v2; // 0x485e51
    *v1 = *v1 + 0x36ed16b2 + (int64_t)v2;
    return result;
}

// Address range: 0x485e6c - 0x485e72
int64_t function_485e6c(void) {
    // 0x485e6c
    int64_t result; // 0x485e6c
    return result;
}

// Address range: 0x485f61 - 0x485f62
int64_t function_485f61(void) {
    // 0x485f61
    int64_t result; // 0x485f61
    return result;
}

// Address range: 0x485fa6 - 0x485fb7
int64_t function_485fa6(int64_t a1) {
    // 0x485fa6
    int64_t v1; // 0x485fa6
    // 0x485fad
    return v1 & -256 | (int64_t)*(char *)-0x241f82cb406988fc;
}

// Address range: 0x48602a - 0x48602c
int64_t function_48602a(void) {
    // 0x48602a
    int64_t v1; // 0x48602a
    return function_4860a3(v1, v1, v1, v1);
}

// Address range: 0x48603c - 0x48604a
int64_t function_48603c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x48603c
    float80_t v1; // 0x48603c
    *(int64_t *)(a4 - 0x64a9c0cb) = (int64_t)v1;
    int64_t result; // 0x48603c
    int64_t v2 = result;
    *(int32_t *)v2 = *(int32_t *)&result + (int32_t)v2;
    return result;
}

// Address range: 0x48606a - 0x48606b
int64_t function_48606a(int64_t a1) {
    // 0x48606a
    int64_t result; // 0x48606a
    return result;
}

// Address range: 0x48606b - 0x486073
int64_t function_48606b(void) {
    // 0x48606b
    return function_ffffffffd32c9c76();
}

// Address range: 0x48607e - 0x48607f
int64_t function_48607e(void) {
    // 0x48607e
    int64_t result; // 0x48607e
    return result;
}

// Address range: 0x4860a3 - 0x4860c6
int64_t function_4860a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4860a3
    int64_t result; // 0x4860a3
    bool v1; // 0x4860a3
    if (!v1) {
        // 0x4860c5
        return result;
    }
    // 0x4860a6
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x4860cc - 0x4860cf
int64_t function_4860cc(void) {
    // 0x4860cc
    int64_t result; // 0x4860cc
    return result;
}

// Address range: 0x4860db - 0x4860f5
int64_t function_4860db(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x4860db
    int64_t v1; // 0x4860db
    uint64_t v2 = v1;
    bool v3; // 0x4860db
    *(char *)v2 = (char)v2 - (char)(v2 / 256) + (char)v3;
    uint32_t v4 = __asm_in_134(0x5ee7); // 0x4860e9
    int64_t v5; // 0x4860db
    uint32_t v6 = *(int32_t *)&v5; // 0x4860ea
    *(int32_t *)a4 = v6 / 2 | 0x80000000 * (int32_t)(v1 > 0x115ac5c0);
    int64_t v7 = v6 % 2 == 0 ? 3 : 2; // 0x4860ec
    int64_t v8; // 0x4860db
    unsigned char v9 = *(char *)&v8; // 0x4860ee
    return ((int64_t)v4 + 170 + v7 + (int64_t)(v9 > (char)(a4 / 256))) % 256 | (int64_t)(v4 & -256);
}

// Address range: 0x48610e - 0x48610f
int64_t function_48610e(int64_t a1) {
    // 0x48610e
    int64_t result; // 0x48610e
    return result;
}

// Address range: 0x486145 - 0x48614b
int64_t function_486145(void) {
    // 0x486145
    return function_ffffffffaeac2179();
}

// Address range: 0x4861ac - 0x4861af
int64_t function_4861ac(int64_t a1) {
    // 0x4861ac
    int64_t result; // 0x4861ac
    return result;
}

// Address range: 0x486253 - 0x48630b
int64_t function_486253(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x486253
    int64_t result; // 0x486253
    // 0x486255
    __asm_outsb((int16_t)a3, (char)a2);
    return result;
    // 0x48625d
    if ((char)result - *(char *)(result + 2 * result) >= 0) {
        // 0x48628c
        return result & 0xffffffff;
    }
    // 0x486263
    *(int32_t *)a1 = (int32_t)a2;
    return result;
}

// Address range: 0x486318 - 0x48631b
int64_t function_486318(int64_t a1) {
    // 0x486318
    int64_t result; // 0x486318
    return result;
}

// Address range: 0x486320 - 0x486321
int64_t function_486320(void) {
    // 0x486320
    int64_t result; // 0x486320
    return result;
}

// Address range: 0x48634f - 0x4863ea
int64_t function_48634f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x48634f
    bool v1; // 0x48634f
    if (!v1) {
        // 0x486380
        return a1 & 0xffffffff;
    }
    // 0x486351
    int64_t result; // 0x48634f
    return result;
}

// Address range: 0x48641a - 0x486427
int64_t function_48641a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48641a
    int64_t result; // 0x48641a
    *(int32_t *)-0x3051a63355e8d230 = (int32_t)result;
    return result;
}

// Address range: 0x486435 - 0x486443
int64_t function_486435(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x486435
    int64_t v1; // 0x486435
    *(int32_t *)v1 = (int32_t)a4;
    return (int64_t)*(int32_t *)-0xf6acaab5579883f;
}

// Address range: 0x486445 - 0x48644a
int64_t function_486445(void) {
    // 0x486445
    return function_2eb7bcce();
}
