/*
 * Targeted RetDec C for native executable gap queue batch 1028.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x13e068-0x13e268 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13e268-0x13e468 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13e468-0x13e668 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13e668-0x13e868 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13e868-0x13ea68 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13ea68-0x13ec68 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13ec68-0x13ee68 rank=- name=- kind=- bytes=- uncovered=-
 *   0x158f13-0x159113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x159113-0x159313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x159313-0x159513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x159513-0x159713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x159713-0x159913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x159913-0x159b13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x159b13-0x159d13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x159d13-0x159f13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x445267-0x445467 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
extern int g3;
extern int g4;
extern int g5;
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

int64_t function_13e068(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13e071(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13e1d3(void);
int64_t function_13e243(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13e294(void);
int64_t function_13e2c4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_13e2e6(void);
int64_t function_13e391(int64_t a1);
int64_t function_13e3cf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13e400(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13e412(void);
int64_t function_13e41f(void);
int64_t function_13e457(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8);
int64_t function_13e568(void);
int64_t function_13e5f6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_13e61c(void);
int64_t function_13e630(void);
int64_t function_13e633(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_13e6a6(int64_t a1, int64_t a2);
int64_t function_13e6b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13e720(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13e80d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13e873(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13e8a8(void);
int64_t function_13e990(void);
int64_t function_13e999(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13e99d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13ea1e(void);
int64_t function_13ea2a(void);
int64_t function_13ea85(void);
int64_t function_13ea91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_13eb98(void);
int64_t function_13eb9f(void);
int64_t function_13ebbb(void);
int64_t function_13ebd0(void);
int64_t function_13ebd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13ebd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13ec0b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13ec28(void);
int64_t function_13ed09(void);
int64_t function_13ed32(void);
int64_t function_13ed61(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13ed87(void);
int64_t function_13edcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13eddc(void);
int64_t function_13edf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13ee46(void);
int64_t function_158f13(int64_t a1);
int64_t function_158fa2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1590c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_159253(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_15939e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1594d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_159676(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1597a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_159906(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_159a91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_159c56(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_159e0e(void);
int64_t function_159e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_159e58(int64_t a1, int64_t a2);
int64_t function_1fbed0c();
int64_t function_1fc4b2d();
int64_t function_445267(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_44527e(void);
int64_t function_445288(int64_t a1, int64_t a2, int64_t a3);
int64_t function_445371(void);
int64_t function_445385(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4453d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4779215b();
int64_t function_cdc60();
int64_t function_ffffffff9c3201ea();
int64_t function_ffffffff9cd8b40f();
int64_t function_ffffffffa3440879();
int64_t function_ffffffffabc9cb96();
int64_t function_ffffffffd91e7e3c();
int64_t unknown_345b7fc2();
int64_t unknown_3bd8b348();
int64_t unknown_5cead151();
int64_t unknown_f15d2b3();
int64_t unknown_f925a9b();
int64_t unknown_ffffffff8dd37856();
int64_t unknown_ffffffff8fe240fc();
int64_t unknown_ffffffff91f64e16();
int64_t unknown_ffffffffb0fdc5e2();
int64_t unknown_fffffffff67ca232();

// Address range: 0x13e068 - 0x13e070
int64_t function_13e068(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13e068
    return __asm_in((int16_t)a3);
}

// Address range: 0x13e071 - 0x13e07c
int64_t function_13e071(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13e071
    int64_t result; // 0x13e071
    int32_t * v1 = (int32_t *)(a3 - 104 + result); // 0x13e071
    *v1 = *v1 + 0x6cff76f3;
    return result;
}

// Address range: 0x13e1d3 - 0x13e1d4
int64_t function_13e1d3(void) {
    // 0x13e1d3
    int64_t result; // 0x13e1d3
    return result;
}

// Address range: 0x13e243 - 0x13e246
int64_t function_13e243(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13e243
    int64_t result; // 0x13e243
    return result;
}

// Address range: 0x13e294 - 0x13e297
int64_t function_13e294(void) {
    // 0x13e294
    int64_t result; // 0x13e294
    return result;
}

// Address range: 0x13e2c4 - 0x13e2cd
int64_t function_13e2c4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 - 0x42773c49); // 0x13e2c4
    *v1 = *v1 + (char)(a4 / 256);
    int64_t result; // 0x13e2c4
    return result;
}

// Address range: 0x13e2e6 - 0x13e2f0
int64_t function_13e2e6(void) {
    // 0x13e2e6
    int64_t v1; // 0x13e2e6
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x13e391 - 0x13e39a
int64_t function_13e391(int64_t a1) {
    // 0x13e391
    __asm_in_133((char)a1);
    bool v1; // 0x13e391
    __asm_sti((v1 ? -1 : 1) + a1);
    return function_4779215b();
}

// Address range: 0x13e3cf - 0x13e3d7
int64_t function_13e3cf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13e3cf
    int64_t result; // 0x13e3cf
    return result;
}

// Address range: 0x13e400 - 0x13e40a
int64_t function_13e400(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13e400
    int64_t result; // 0x13e400
    *(int32_t *)a3 = (int32_t)result - (int32_t)a3;
    return result;
}

// Address range: 0x13e412 - 0x13e413
int64_t function_13e412(void) {
    // 0x13e412
    int64_t result; // 0x13e412
    return result;
}

// Address range: 0x13e41f - 0x13e420
int64_t function_13e41f(void) {
    // 0x13e41f
    int64_t result; // 0x13e41f
    return result;
}

// Address range: 0x13e457 - 0x13e536
int64_t function_13e457(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8) {
    int64_t v1 = a2;
    int64_t result2 = a8;
    int32_t * v2 = (int32_t *)(a2 - 0x675f9b57); // 0x13e457
    int64_t v3; // 0x13e457
    *v2 = *v2 + (int32_t)v3;
    int32_t * v4 = (int32_t *)(v3 - 36); // 0x13e45d
    *v4 = *v4 | (int32_t)a3;
    unsigned char v5 = (char)v3; // 0x13e463
    unsigned char v6 = (a7 % 2 != 0 ? 97 : 96) + v5; // 0x13e463
    int64_t v7 = v3 & -256 | (int64_t)v6; // 0x13e465
    if (v6 != 0 && !((a7 % 2 != 0 ? v6 <= v5 : v5 > 159))) {
        v7 = function_13e412();
    }
    uint64_t result = v7 & 0xffffffff ^ 0xcd27cbe5; // 0x13e467
    unsigned char v8 = *(char *)0x361d7373; // 0x13e46c
    char v9 = v3 / 256; // 0x13e46c
    unsigned char v10 = v8 + v9; // 0x13e46c
    *(char *)0x361d7373 = v10;
    char * v11 = (char *)(result + 118); // 0x13e472
    unsigned char v12 = *v11; // 0x13e472
    char v13 = a4; // 0x13e472
    char v14 = v10 < v8; // 0x13e472
    unsigned char v15 = v12 + v13; // 0x13e472
    char v16 = v15 + v14; // 0x13e472
    char v17 = v16 + v14; // 0x13e472
    *v11 = v16;
    if (v16 < 0 == ((v17 ^ v12) & (v17 ^ v13)) < 0 != v16 != 0) {
        // 0x13e4c0
        __asm_out_134((int16_t)a3, (char)result);
        return result;
    }
    // 0x13e48b
    if (v16 == 0 || (v10 < v8 ? v16 <= v12 : v15 < v12)) {
        int64_t v18 = v3 & -256 | 119; // 0x13e461
        char v19 = *(char *)v18; // 0x13e48d
        char v20 = result;
        char v21 = __asm_insb((int16_t)(a3 & 0xff00 | (int64_t)(v19 ^ (char)a3))); // 0x13e496
        *(char *)a1 = v21;
        int64_t * v22 = (int64_t *)v18; // 0x13e497
        int64_t v23 = *v22; // 0x13e497
        int64_t v24 = v20 < 211; // 0x13e497
        int64_t v25 = v24 + a6 + v23; // 0x13e497
        int64_t v26 = v25 + v24; // 0x13e497
        *v22 = v25;
        char v27 = v20; // 0x13e49a
        if (((v26 ^ v23) & (v26 ^ a6)) >= 0) {
            v27 = function_13e41f();
        }
        // 0x13e49c
        __asm_out_135(54, v27);
        *(char *)-0x6e2955b = *(char *)-0x6e2955b + v9;
        return result2;
    }
    uint32_t v28 = (int32_t)a4 % 32; // 0x13e506
    bool v29 = (int32_t)v3 < (int32_t)(int64_t)&result2; // 0x13e506
    if (v28 != 0) {
        int32_t * v30 = (int32_t *)result; // 0x13e506
        uint32_t v31 = *v30; // 0x13e506
        uint32_t v32 = v31 >> 32 - v28 | v31 << v28; // 0x13e506
        *v30 = v32;
        v29 = v32 % 2 != 0;
    }
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    char * v33 = (char *)result; // 0x13e512
    *v33 = (char)v29 + (char)a3 + *v33;
    uint32_t v34 = (int32_t)result; // 0x13e515
    int32_t v35 = v34 + 0x50220dff; // 0x13e515
    return 0x10000 * (int32_t)(256 * (64 * (int64_t)(v35 == 0) | (int64_t)(v34 < 0xafddf201) | 128 * (int64_t)(v35 < 0) | 16 * (int64_t)(v34 % 16 > 16) | 4 * (int64_t)(llvm_ctpop_i8((char)v35) % 2 == 0)) | result % 256) >> 16 | 512;
}

// Address range: 0x13e568 - 0x13e56d
int64_t function_13e568(void) {
    // 0x13e568
    return function_1fc4b2d();
}

// Address range: 0x13e5f6 - 0x13e61a
int64_t function_13e5f6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_ffffffff8fe240fc(); // 0x13e5f6
    bool v2; // 0x13e5f6
    int64_t v3 = v2 ? -4 : 4; // 0x13e5fb
    __asm_outsd((int16_t)(a3 / 2 & 0x7f00 | a3 % 256), *(int32_t *)(v3 + a2));
    int64_t result = (a4 + 118) % 256 | a4 & 0xffffff00; // 0x13e600
    int64_t v4; // 0x13e5f6
    *(char *)-0x24ed3af7 = *(char *)-0x24ed3af7 + (char)(v4 / 256);
    int32_t * v5 = (int32_t *)(result + 5); // 0x13e608
    *v5 = *v5 + (int32_t)v4;
    char * v6 = (char *)(v4 - 93); // 0x13e60b
    *v6 = *v6 | (char)a3;
    *(int32_t *)0xf8a68c1 = *(int32_t *)0xf8a68c1 - (int32_t)v1;
    return result;
}

// Address range: 0x13e61c - 0x13e61d
int64_t function_13e61c(void) {
    // 0x13e61c
    int64_t result; // 0x13e61c
    return result;
}

// Address range: 0x13e630 - 0x13e633
int64_t function_13e630(void) {
    // 0x13e630
    int64_t result; // 0x13e630
    return result;
}

// Address range: 0x13e633 - 0x13e6a3
int64_t function_13e633(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    int64_t v2; // 0x13e633
    *(char *)0x6f42ae3a = *(char *)0x6f42ae3a + (char)(v2 / 256);
    __asm_out_134((int16_t)a5, (char)a3);
    int32_t * v3 = (int32_t *)(a2 + 0x3d01e8bc); // 0x13e640
    *v3 = *v3 + (int32_t)v2;
    int32_t * v4 = (int32_t *)(v2 + 61); // 0x13e648
    int32_t v5 = *v4 - (int32_t)a3; // 0x13e648
    *v4 = v5;
    *(int32_t *)a1 = (int32_t)(int64_t)&v1 + (int32_t)a2;
    bool v6; // 0x13e633
    int64_t v7 = (v6 ? -4 : 4) + a1; // 0x13e64e
    int64_t v8 = unknown_ffffffff8dd37856(v7); // 0x13e64f
    int64_t v9 = *(int64_t *)(a3 & 0xffff00ff | (int64_t)(int32_t)&g2); // 0x13e655
    int64_t v10 = v9 - 1; // 0x13e657
    int64_t result = v8; // 0x13e657
    if (v5 != 0 && v10 != 0) {
        result = function_13e61c();
    }
    // 0x13e659
    if (llvm_ctpop_i8((char)v5) % 2 != 0) {
        // 0x13e65b
        return result;
    }
    int32_t * v11 = (int32_t *)(v2 - 19 + 4 * v10); // 0x13e695
    int32_t v12 = *v11; // 0x13e695
    int32_t v13 = v2; // 0x13e695
    int32_t v14 = v12 + v13; // 0x13e695
    *v11 = v14;
    if (((v14 ^ v12) & (v14 ^ v13)) < 0) {
        // 0x13e6a1
        return function_13e720(v7, a2, a5 & 0xffffffff, v10, (int64_t)&g5);
    }
    // 0x13e65b
    return result;
}

// Address range: 0x13e6a6 - 0x13e6af
int64_t function_13e6a6(int64_t a1, int64_t a2) {
    // 0x13e6a6
    int64_t result; // 0x13e6a6
    char * v1 = (char *)((8 * result | 1) + result); // 0x13e6a6
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x13e6b1 - 0x13e70b
int64_t function_13e6b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13e6b1
    int64_t v1; // 0x13e6b1
    int32_t * v2 = (int32_t *)(v1 - 0x405c98fe); // 0x13e6b6
    *v2 = *v2 + (int32_t)a4;
    int32_t * v3 = (int32_t *)(a3 - 0x3537b3fe); // 0x13e6e2
    *v3 = (int32_t)v1 - 0x17d216c6 + *v3;
    uint64_t result = __asm_int1(); // 0x13e6f3
    char * v4 = (char *)result; // 0x13e6f9
    *v4 = *v4 - 24;
    int32_t * v5 = (int32_t *)(v1 - 0x66ff5800); // 0x13e6fc
    *v5 = (int32_t)v1 + 0x1e837ce + *v5;
    char * v6 = (char *)(a2 - 40); // 0x13e702
    *v6 = *v6 + (char)(result / 256);
    *(int32_t *)0x598cefbf = *(int32_t *)0x598cefbf | (int32_t)a1;
    return result;
}

// Address range: 0x13e720 - 0x13e79d
int64_t function_13e720(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 & -256 | (int64_t)(*(char *)(a1 + 0x3e4f4b08) + (char)a4); // 0x13e726
    int64_t v2 = unknown_fffffffff67ca232() + 0xe887310a + v1 & 0xffffffff; // 0x13e733
    int32_t v3 = *(int32_t *)(a1 - 42); // 0x13e743
    *(float64_t *)(v2 + 0x489701e8) = (float64_t)((float80_t)v3 - 1.0);
    uint64_t v4 = (2 * v1 & 0xfffffffe) - 1; // 0x13e751
    uint32_t v5 = *(int32_t *)a5 | (int32_t)a3; // 0x13e781
    char * v6 = (char *)a5; // 0x13e783
    *v6 = *v6 + (char)((int64_t)&g4 >> 8);
    uint32_t v7 = v5 + (int32_t)v4; // 0x13e787
    int64_t v8; // 0x13e720
    char * v9 = (char *)(v8 + 0x2593be57); // 0x13e789
    *v9 = *v9 - (char)(v4 / 256) + (char)(v7 < v5);
    __asm_iretd();
    *(char *)v4 = (char)v4;
    int64_t result = unknown_f925a9b(); // 0x13e795
    char * v10 = (char *)(v2 + (int64_t)v7); // 0x13e79a
    *v10 = *v10 + (char)(v7 / 256);
    return result;
}

// Address range: 0x13e80d - 0x13e849
int64_t function_13e80d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13e80d
    int64_t v1; // 0x13e80d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 0x601e80b + 2 * v2); // 0x13e816
    *v3 = (int32_t)a1;
    int64_t v4 = (int64_t)*v3; // 0x13e816
    __asm_sti(v4);
    int32_t v5 = __asm_in_133(104); // 0x13e821
    int64_t v6 = v5; // 0x13e821
    char * v7 = (char *)(v1 - 23); // 0x13e823
    *v7 = *v7 + (char)a3;
    int64_t v8 = v6 & -256 | (int64_t)(*(char *)v6 + (char)v5); // 0x13e828
    int32_t v9 = *(int32_t *)v8; // 0x13e82f
    int64_t v10 = v8 * (int64_t)v9 & 0xffffff00 | (int64_t)__asm_in_137(34); // 0x13e832
    int64_t v11; // 0x13e80d
    *(int32_t *)a4 = *(int32_t *)&v11 + (int32_t)v10;
    int64_t v12; // 0x13e80d
    *(char *)v4 = *(char *)&v12;
    return v10 & 0xffffffff;
}

// Address range: 0x13e873 - 0x13e894
int64_t function_13e873(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a4 + 0x3dadc5b7); // 0x13e873
    int64_t v2; // 0x13e873
    int64_t v3 = v2 & 0x13e5de9a; // 0x13e879
    char * v4 = (char *)(v2 + 0x3d4809f8); // 0x13e883
    *v4 = *v4 | -61;
    int32_t * v5 = (int32_t *)((int64_t)(v1 + (int32_t)a2) + 0x74e1b514); // 0x13e88d
    *v5 = *v5 + 1;
    return (int64_t)((int32_t)v3 - *(int32_t *)v3);
}

// Address range: 0x13e8a8 - 0x13e8af
int64_t function_13e8a8(void) {
    // 0x13e8a8
    return function_ffffffffa3440879();
}

// Address range: 0x13e990 - 0x13e992
int64_t function_13e990(void) {
    // 0x13e990
    int64_t v1; // 0x13e990
    return function_13e99d(v1, v1, v1);
}

// Address range: 0x13e999 - 0x13e99d
int64_t function_13e999(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13e999
    int64_t result; // 0x13e999
    return result;
}

// Address range: 0x13e99d - 0x13e9a1
int64_t function_13e99d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13e99d
    __asm_rcl(*(char *)(a3 + 80 + 2 * a2));
    int64_t result; // 0x13e99d
    return result;
}

// Address range: 0x13ea1e - 0x13ea1f
int64_t function_13ea1e(void) {
    // 0x13ea1e
    int64_t result; // 0x13ea1e
    return result;
}

// Address range: 0x13ea2a - 0x13ea2d
int64_t function_13ea2a(void) {
    // 0x13ea2a
    int64_t result; // 0x13ea2a
    return result;
}

// Address range: 0x13ea85 - 0x13ea91
int64_t function_13ea85(void) {
    // 0x13ea85
    return function_ffffffff9cd8b40f();
}

// Address range: 0x13ea91 - 0x13eb50
int64_t function_13ea91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x13ea91
    int64_t result; // 0x13ea91
    __asm_out_135(-91, (char)result);
    if (a4 != 1) {
        // 0x13eaad
        unknown_f15d2b3();
        int64_t v1 = unknown_345b7fc2((int64_t)(0xb3d6ec * *(int32_t *)0x59a0d0bd)); // 0x13eabc
        return (v1 + 6) % 256 | v1 & -256;
    }
    if ((int32_t)result == -0x4f2d22ff) {
        // 0x13eaa5
        return result;
    }
    int32_t * v2 = (int32_t *)(a3 - 24); // 0x13eb2a
    *v2 = *v2 ^ (int32_t)a3;
    int32_t * v3 = (int32_t *)(a3 + 0x97d7f1b); // 0x13eb2d
    *v3 = *v3 + (int32_t)result;
    unknown_3bd8b348();
    *(int32_t *)a1 = *(int32_t *)(a3 + 0x47bc8b + result & 0xffffffff);
    return unknown_5cead151(a1 + 5);
}

// Address range: 0x13eb98 - 0x13eb9d
int64_t function_13eb98(void) {
    // 0x13eb98
    return function_ffffffffabc9cb96();
}

// Address range: 0x13eb9f - 0x13eba0
int64_t function_13eb9f(void) {
    // 0x13eb9f
    int64_t result; // 0x13eb9f
    return result;
}

// Address range: 0x13ebbb - 0x13ebc5
int64_t function_13ebbb(void) {
    // 0x13ebbb
    return function_1fbed0c();
}

// Address range: 0x13ebd0 - 0x13ebd2
int64_t function_13ebd0(void) {
    // 0x13ebd0
    int64_t v1; // 0x13ebd0
    return function_13ebd5(v1, v1, v1, (int64_t)&g5);
}

// Address range: 0x13ebd3 - 0x13ebd5
int64_t function_13ebd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13ebd3
    int64_t result; // 0x13ebd3
    *(int32_t *)a4 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x13ebd5 - 0x13ebf3
int64_t function_13ebd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13ebd5
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x13ebd5
    char v2; // 0x13ebd5
    int64_t v3; // 0x13ebd5
    bool v4; // 0x13ebd5
    if (v4) {
        // 0x13ebd5
        v1 = v3;
        v2 = *(char *)&v3;
    } else {
        int64_t v5 = function_13eb9f(); // 0x13ebd7
        v3 = v5;
        v1 = v5;
        v2 = v5;
    }
    uint64_t v6 = v1;
    int64_t v7 = v2 < (char)(v6 / 256) ? 239 : 238; // 0x13ebdf
    int64_t v8; // 0x13ebd5
    int32_t * v9 = (int32_t *)(v8 + 0x13d8bb3c); // 0x13ebe9
    *v9 = *v9 & -0x6efe1800;
    return ((v6 - v7) % 256 | v6 & 0xffffff00) ^ 0x2901e8a1;
}

// Address range: 0x13ec0b - 0x13ec21
int64_t function_13ec0b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13ec0b
    int64_t v1; // 0x13ec0b
    *(int32_t *)a3 = 2 * (int32_t)v1;
    int64_t result = unknown_ffffffff91f64e16(); // 0x13ec0f
    char * v2 = (char *)result; // 0x13ec15
    *v2 = *v2 + (char)result;
    int64_t v3; // 0x13ec0b
    int32_t v4 = *(int32_t *)&v3; // 0x13ec17
    *(char *)0x7c15d4a7 = (char)((v4 | (int32_t)v1) >= 0);
    return result;
}

// Address range: 0x13ec28 - 0x13ec29
int64_t function_13ec28(void) {
    // 0x13ec28
    int64_t result; // 0x13ec28
    return result;
}

// Address range: 0x13ed09 - 0x13ed0c
int64_t function_13ed09(void) {
    // 0x13ed09
    int64_t result; // 0x13ed09
    return result;
}

// Address range: 0x13ed32 - 0x13ed36
int64_t function_13ed32(void) {
    // 0x13ed32
    int64_t result; // 0x13ed32
    return result;
}

// Address range: 0x13ed61 - 0x13ed68
int64_t function_13ed61(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13ed61
    int64_t v1; // 0x13ed61
    *(int32_t *)a1 = (int32_t)v1 - (int32_t)a4;
    return function_ffffffff9c3201ea();
}

// Address range: 0x13ed87 - 0x13ed88
int64_t function_13ed87(void) {
    // 0x13ed87
    int64_t result; // 0x13ed87
    return result;
}

// Address range: 0x13edcd - 0x13eddb
int64_t function_13edcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13edcd
    int64_t v1; // 0x13edcd
    int32_t * v2 = (int32_t *)(2 * v1); // 0x13edcd
    uint32_t v3 = *v2; // 0x13edcd
    uint32_t v4 = (int32_t)v1; // 0x13edcd
    *v2 = v3 - v4;
    int64_t v5; // 0x13edcd
    *(char *)a3 = *(char *)&v5 | (char)a4;
    __asm_out_135(91, (char)v1 - (v3 < v4 ? 57 : 56));
    return function_13edf1(a1, a2, a3, a4);
}

// Address range: 0x13eddc - 0x13edf1
int64_t function_13eddc(void) {
    int64_t v1 = unknown_ffffffffb0fdc5e2(); // 0x13eddc
    __asm_out_135(47, (char)v1);
    uint32_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0x13ede6
    int64_t v3 = v2; // 0x13ede6
    unsigned char v4 = *(char *)v3 + (char)v2; // 0x13ede7
    int64_t result = v3 & 0xffffff00 | (int64_t)v4; // 0x13ede9
    if (v4 != 0) {
        result = function_13ed87();
    }
    char v5 = *(char *)0xbaf84f2; // 0x13edeb
    int64_t v6; // 0x13eddc
    *(char *)0xbaf84f2 = v5 + (char)((v6 + 0xff00) / 256);
    return result;
}

// Address range: 0x13edf1 - 0x13edf9
int64_t function_13edf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13edf1
    int64_t result; // 0x13edf1
    char * v1 = (char *)(result - 0x178e63c1); // 0x13edf3
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x13ee46 - 0x13ee47
int64_t function_13ee46(void) {
    // 0x13ee46
    int64_t result; // 0x13ee46
    return result;
}

// Address range: 0x158f13 - 0x158fa2
int64_t function_158f13(int64_t a1) {
    int64_t v1 = a1;
    int64_t v2; // 0x158f13
    return function_cdc60(v2, v2, v2, v2, v2, v2, v2, (int64_t)&v1);
}

// Address range: 0x158fa2 - 0x1590c9
int64_t function_158fa2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x158fa2
    int64_t v1; // bp-48, 0x158fa2
    int64_t v2 = (int64_t)&v1; // 0x15901b
    int64_t v3 = *(int64_t *)(v2 + 40); // 0x15902a
    v1 = v3;
    int64_t v4 = v2 - 8; // 0x15902e
    int64_t * v5 = (int64_t *)v4; // 0x15902e
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x159031
    *v6 = v3;
    int64_t * v7 = (int64_t *)(v2 + 24); // 0x15903d
    int64_t v8 = *v7; // 0x15903d
    v1 = v8;
    int64_t v9 = v2 + 8; // 0x159057
    *v5 = v9;
    *(int64_t *)(v2 - 24) = v3;
    int64_t * v10 = (int64_t *)v9; // 0x159075
    *v10 = *v5;
    *v6 = v8;
    *v7 = *v5;
    *v5 = v1;
    *v6 = v1;
    v1 = *v10;
    *v5 = a4;
    *v6 = v4;
    *v5 = v9;
    int64_t v11; // 0x158fa2
    return function_cdc60(a1, a2, a3, *v5, v11, v11, 0x55a556ad, 0x3a09f92a);
}

// Address range: 0x1590c9 - 0x159253
int64_t function_1590c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 310; // bp-40, 0x159173
    int64_t v2; // 0x1590c9
    return function_cdc60(a1, a2, a3, a4, a5, v2, (int64_t)&v1 + 8, 0x147795);
}

// Address range: 0x159253 - 0x15939e
int64_t function_159253(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x159253
    int64_t v1; // 0x159253
    int64_t * v2 = (int64_t *)v1; // 0x159305
    int64_t v3 = *(int64_t *)(v1 + 32); // 0x159309
    int64_t * v4 = (int64_t *)(v1 - 8); // 0x159309
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v1 - 16); // 0x15930d
    *v5 = a4;
    int64_t * v6 = (int64_t *)(v1 - 24); // 0x159319
    int64_t v7 = *v5; // 0x159331
    *v5 = 0x2d5208ed;
    *v6 = v3;
    *v2 = *v5;
    *v5 = 0x1d5a2e46;
    *v6 = *(int64_t *)(v1 + 8);
    *(int64_t *)(v1 + 16) = *v5;
    int64_t v8 = *v4; // 0x15936e
    *v5 = v8;
    *v6 = v8;
    int64_t v9 = *v2; // 0x159387
    *v4 = v9;
    *v5 = v9;
    int64_t v10; // bp-40, 0x159253
    int64_t result = function_cdc60(a1, a2, a3, v7, a5, v1, (int64_t)&v10, (int64_t)&g5); // 0x159399
    return result;
}

// Address range: 0x15939e - 0x1594d9
int64_t function_15939e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x15939e
    int64_t v1; // 0x15939e
    int64_t v2 = 0x6db9fa1 * (0x100000000 * v1 >> 32) & 0xffffffff; // 0x15939e
    int64_t v3 = a6; // bp-40, 0x15942b
    int64_t v4 = (int64_t)&v3; // 0x159468
    int64_t * v5 = (int64_t *)(v4 - 8); // 0x159470
    *v5 = 0x58a3c0a7;
    int64_t * v6 = (int64_t *)(v4 - 16); // 0x159475
    *v6 = 0x434f036b;
    *(int64_t *)(v4 - 24) = a6;
    int64_t v7 = v4 + 8; // 0x159481
    int64_t * v8 = (int64_t *)v7; // 0x159481
    *v8 = *v5;
    *v5 = a6;
    *v6 = v2;
    *(int64_t *)(v4 + 24) = v2;
    *v5 = v3;
    *v6 = v3;
    v3 = *v8;
    *v5 = v7;
    return function_cdc60(a1, a2, a3, a4, a5, v1, 0x477ca190, (int64_t)&g5);
}

// Address range: 0x1594d9 - 0x159676
int64_t function_1594d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x148cae; // bp-56, 0x1595a8
    int64_t v2 = (int64_t)&v1; // 0x159601
    *(int64_t *)(v2 - 8) = v2 + 8;
    return function_cdc60(a1, a2, a3, a4, a5, 0x148cae, v2, (int64_t)&g5);
}

// Address range: 0x159676 - 0x1597a8
int64_t function_159676(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x159676
    int64_t v1; // 0x159676
    return function_cdc60(a1, a2, a3, a4, v1, v1, 169, (int64_t)&g5);
}

// Address range: 0x1597a8 - 0x159906
int64_t function_1597a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1597a8
    int64_t v1; // 0x1597a8
    return function_cdc60(a1, a2, a3, a4, a5, v1, 169, (int64_t)&g5);
}

// Address range: 0x159906 - 0x159a91
int64_t function_159906(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = function_cdc60(a1, a2, 0x43fd43fd * (0x100000000 * a3 >> 32) & 0xffffffff, a4, a5, a6, 0x79d63c04, (int64_t)&g5); // 0x159a8c
    return result;
}

// Address range: 0x159a91 - 0x159c56
int64_t function_159a91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x159a91
    int64_t v1; // 0x159a91
    int64_t v2 = (int128_t)v1 * (int128_t)&g3 != 0 >> 64; // 0x159a98
    bool v3; // 0x159a91
    int64_t v4 = 0x4000 * (int64_t)v3 | 1024 * (int64_t)v3 | v2 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 2048 * v2 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | 4 * (int64_t)v3 | 2; // 0x159a98
    int64_t v5; // bp-48, 0x159a91
    int64_t v6 = (int64_t)&v5; // 0x159b3a
    v5 = v4;
    int64_t v7 = *(int64_t *)(v6 + 8); // 0x159c38
    v5 = v7;
    *(int64_t *)(v6 - 8) = v7;
    return function_cdc60(a1, a2, a3, a4, a5, a6, v4, (int64_t)&g5);
}

// Address range: 0x159c56 - 0x159dfb
int64_t function_159c56(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x159c56
    int64_t v1; // 0x159c56
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x159c56
    int64_t v3 = 0x57558fc7 * v2 != 0x57558fc700000000 * v2 >> 32; // 0x159c5c
    int64_t v4; // bp-48, 0x159c56
    v4 = (int64_t)&v4 + 16;
    bool v5; // 0x159c56
    return function_cdc60(a1, a2, a3, a4, a5, v1, 0x14c7f1, 0x4000 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | v3 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 2048 * v3 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | 4 * (int64_t)v5 | 2);
}

// Address range: 0x159e0e - 0x159e10
int64_t function_159e0e(void) {
    // 0x159e0e
    int64_t v1; // 0x159e0e
    return function_159e58(v1, (int64_t)&g5);
}

// Address range: 0x159e10 - 0x159e58
int64_t function_159e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x159e10
    int64_t result; // 0x159e10
    return result;
}

// Address range: 0x159e58 - 0x159f13
int64_t function_159e58(int64_t a1, int64_t a2) {
    // 0x159e58
    int64_t v1; // 0x159e58
    int64_t v2 = (int64_t)&v1; // 0x159e5f
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x159e76
    int64_t v4 = v2 - 16; // 0x159e7e
    int64_t * v5 = (int64_t *)v4; // 0x159e7e
    *v5 = 0x11dc41a8;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x159e83
    int64_t result = *(int64_t *)(v2 + 24); // 0x159e92
    *v5 = result;
    *v6 = v3;
    *v6 = v1;
    int64_t * v7 = (int64_t *)(v2 - 32); // 0x159eb9
    int64_t * v8 = (int64_t *)(v2 - 40); // 0x159ebc
    *v7 = 0x7bcb4deb;
    *v8 = result;
    *(int64_t *)v3 = *v6;
    *v6 = 0x1a230546;
    *v8 = v1;
    *(int64_t *)(v2 + 8) = *v6;
    *v6 = *v5;
    *v7 = v4;
    *v6 = *v5;
    return result;
}

// Address range: 0x445267 - 0x44527c
int64_t function_445267(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x445267
    int64_t v1; // 0x445267
    uint64_t v2 = v1;
    int64_t v3 = v1;
    __asm_out((int16_t)a3, (int32_t)v3);
    char * v4 = (char *)(a1 + 0x37f1955a + 2 * a4); // 0x445273
    *v4 = *v4 + (char)v2;
    return (v3 + 154 + (int64_t)((char)(a3 / 256) < (char)(v2 / 256))) % 256 | v3 & -256;
}

// Address range: 0x44527e - 0x44527f
int64_t function_44527e(void) {
    // 0x44527e
    int64_t result; // 0x44527e
    return result;
}

// Address range: 0x445288 - 0x44528d
int64_t function_445288(int64_t a1, int64_t a2, int64_t a3) {
    // 0x445288
    int64_t result; // 0x445288
    char * v1 = (char *)(result + 27); // 0x445288
    *v1 = *v1 + (char)result;
    int64_t v2; // 0x445288
    __asm_outsb((int16_t)a3, *(char *)&v2);
    return result;
}

// Address range: 0x445371 - 0x445376
int64_t function_445371(void) {
    // 0x445371
    return function_ffffffffd91e7e3c();
}

// Address range: 0x445385 - 0x44538b
int64_t function_445385(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x445385
    int64_t v1; // 0x445385
    uint64_t v2 = v1;
    bool v3; // 0x445385
    return 256 * (v2 / 256 + v2 + (int64_t)v3) & 0xff00 | v2 & -0xff01;
}

// Address range: 0x4453d8 - 0x445455
int64_t function_4453d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4453d8
    int64_t result; // 0x4453d8
    // 0x4453da
    return result;
    unsigned char v1 = (char)a4 % 32; // 0x445419
    if (v1 != 0) {
        char * v2 = (char *)(result + 0x2e13e475); // 0x445419
        *v2 = *v2 << v1;
    }
    int32_t * v3 = (int32_t *)(a1 - 0x7c8c28ab); // 0x44541f
    *v3 = *v3 ^ (int32_t)a3;
    *(char *)(a3 - 84) = (char)a3;
    *(char *)0x18a700fe = *(char *)0x18a700fe + (char)result;
    int64_t v4 = a1 + 118 & 0xffffffff; // 0x445431
    uint32_t v5 = __asm_in_133(-108); // 0x445434
    *(int32_t *)a1 = *(int32_t *)v4;
    bool v6; // 0x4453d8
    int64_t v7 = v6 ? -4 : 4; // 0x44543d
    uint64_t v8 = (int64_t)*(int32_t *)(v7 + v4) * (int64_t)v5; // 0x445440
    uint64_t v9 = v8 / 0x100000000; // 0x445440
    *(char *)(v7 + a1) = __asm_insb((int16_t)v9);
    int32_t * v10 = (int32_t *)(a4 + 4); // 0x445444
    *v10 = *v10 - 0x42218daa;
    int64_t * v11 = (int64_t *)(a4 & -256); // 0x44544d
    *v11 = *v11 - 2;
    __asm_rcl(*(char *)(v9 + 105));
    return v8 & 0xffffffff;
}
