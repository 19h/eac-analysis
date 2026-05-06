/*
 * Targeted RetDec C for native executable gap queue batch 590.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xf899c-0xf8b9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf8b9c-0xf8d9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf8d9c-0xf8f9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf8f9c-0xf919c rank=- name=- kind=- bytes=- uncovered=-
 *   0x120146-0x120346 rank=- name=- kind=- bytes=- uncovered=-
 *   0x448925-0x448b25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x448d25-0x448f25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x449125-0x449325 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_120106();
int64_t function_120146(void);
int64_t function_120148(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1201e2(int64_t a1);
int64_t function_1201ed(void);
int64_t function_120204(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_120232(int64_t a1, int64_t a2, int64_t a3);
int64_t function_120250(int64_t a1, int64_t a2, int64_t a3);
int64_t function_120262(void);
int64_t function_120290(int64_t a1);
int64_t function_1202a3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1202b1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1202f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f80a31();
int64_t function_4488f8();
int64_t function_448925(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4489f9(int64_t a1);
int64_t function_448a0e(void);
int64_t function_448a4f(void);
int64_t function_448aa8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_448d25(void);
int64_t function_448d57(int64_t a1);
int64_t function_448d67(int64_t a1, int64_t a2, int64_t a3);
int64_t function_448ddb(int64_t a1);
int64_t function_448e35(void);
int64_t function_448e42(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_448e52(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_448e9f(int64_t a1);
int64_t function_448eb8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_448f01(int64_t a1);
int64_t function_448f1e(void);
int64_t function_449114();
int64_t function_449125(int64_t a1, int64_t a2, int64_t a3);
int64_t function_449145(void);
int64_t function_44914f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44915d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_449221(void);
int64_t function_44923c(int64_t a1);
int64_t function_44928e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4492a1(void);
int64_t function_449308(int64_t a1);
int64_t function_44931a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_4b750acb();
int64_t function_58d67754();
int64_t function_8b37de();
int64_t function_cc59c();
int64_t function_daecd59();
int64_t function_f899c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f8aa8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_f8c04(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_f8d61(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f8eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f8ffb(void);
int64_t function_f9006(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f9046(int64_t a1, int64_t a2);
int64_t function_f906d(int64_t a1);
int64_t function_f90e4(int64_t a1, int64_t a2);
int64_t function_f9108(void);
int64_t function_f910e(int64_t a1);
int64_t function_f917d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_ffffffff8dd6a34b();
int64_t function_ffffffffdbf79556();
int64_t function_fffffffff46f5e8d();
int64_t unknown_84d32cd();
int64_t unknown_ffffffff912fcea9();
int64_t unknown_ffffffffa0147859();
int64_t unknown_ffffffffae02e26b();
int64_t unknown_fffffffffe4f425e();

// Address range: 0xf899c - 0xf8aa8
int64_t function_f899c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf899c
    int64_t v1; // 0xf899c
    int64_t * v2 = (int64_t *)(v1 - 8); // 0xf8a41
    *v2 = a4;
    int64_t * v3 = (int64_t *)(v1 - 16); // 0xf8a49
    *v3 = a1;
    *v2 = v1 + 8;
    int64_t v4; // bp+24, 0xf899c
    return function_cc59c(*v3, a2, a3, *v2, a5, v1, (int64_t)&v4);
}

// Address range: 0xf8aa8 - 0xf8c04
int64_t function_f8aa8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xf8aa8
    int64_t v1; // bp-32, 0xf8aa8
    int64_t v2 = (int64_t)&v1; // 0xf8b02
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0xf8b12
    *v3 = 0x3d7b147f;
    int64_t v4 = v2 - 16; // 0xf8b1a
    int64_t * v5 = (int64_t *)v4; // 0xf8b1a
    *v5 = 0x5c09f370;
    int64_t v6 = v2 - 24; // 0xf8b1f
    int64_t * v7 = (int64_t *)v6; // 0xf8b1f
    int64_t v8 = *(int64_t *)(v2 + 24); // 0xf8b2e
    *v5 = v8;
    *v7 = v8;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0xf8b35
    *v9 = v8;
    int64_t * v10 = (int64_t *)(v2 + 8); // 0xf8b41
    int64_t v11 = *v10; // 0xf8b41
    *v5 = v11;
    int64_t * v12 = (int64_t *)(v2 - 40); // 0xf8b6b
    *v7 = v8;
    *v3 = v8;
    *v9 = 0x3bf2a4c6;
    *v12 = v11;
    *v10 = *v7;
    *v7 = *v5;
    *v12 = v4;
    *(int64_t *)(v2 - 48) = *v9;
    *v7 = v6;
    *v5 = v2;
    return function_cc59c(a1, a2, a3, a4, a5, a6, 0xf68ac);
}

// Address range: 0xf8c04 - 0xf8d61
int64_t function_f8c04(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0xf6a8e; // bp-32, 0xf8c56
    int64_t v2 = (int64_t)&v1; // 0xf8cc8
    int64_t * v3 = (int64_t *)(v2 - 8); // 0xf8cd0
    int64_t * v4 = (int64_t *)(v2 - 16); // 0xf8cd8
    *v4 = a5;
    *v3 = a4;
    *(int64_t *)(v2 + 16) = a6;
    *v3 = 0x2db32366;
    *(int64_t *)(v2 - 24) = a6;
    *v4 = 169;
    *(int64_t *)(v2 + 24) = *v3;
    int64_t v5 = v2 + 8; // 0xf8d2e
    *v3 = v5;
    v1 = *(int64_t *)v5;
    *v3 = v5;
    int64_t v6; // 0xf8c04
    return function_cc59c(a1, a2, a3, *v3, a5, v6, v6);
}

// Address range: 0xf8d61 - 0xf8eb8
int64_t function_f8d61(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf8d61
    int64_t v1; // 0xf8d61
    return function_cc59c(a1, a2, a3, v1, v1, v1, v1);
}

// Address range: 0xf8eb8 - 0xf8ffb
int64_t function_f8eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf8eb8
    int64_t v1; // bp-64, 0xf8eb8
    int64_t v2 = (int64_t)&v1; // 0xf8fb1
    int64_t * v3 = (int64_t *)(v2 + 8); // 0xf8fc1
    int64_t v4 = *v3; // 0xf8fc1
    v1 = v4;
    *(int64_t *)(v2 - 8) = v4;
    int64_t v5 = v2 + 16; // 0xf8fd3
    *v3 = *(int64_t *)v5;
    v1 = v5;
    int64_t v6; // 0xf8eb8
    bool v7; // 0xf8eb8
    return function_cc59c(a1, a2, a3, a4, v6, v6, 0x4000 * (int64_t)v7 | 2048 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 128 * (int64_t)v7 | 64 * (int64_t)v7 | 16 * (int64_t)v7 | (int64_t)v7 | 4 * (int64_t)v7 | 2);
}

// Address range: 0xf8ffb - 0xf9000
int64_t function_f8ffb(void) {
    // 0xf8ffb
    int64_t result; // 0xf8ffb
    return result;
}

// Address range: 0xf9006 - 0xf900b
int64_t function_f9006(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf9006
    int64_t result; // 0xf9006
    *(int32_t *)a1 = (int32_t)result;
    char * v1 = (char *)(result + 1); // 0xf9007
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0xf9046 - 0xf9059
int64_t function_f9046(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 117); // 0xf9046
    int64_t v2; // 0xf9046
    bool v3; // 0xf9046
    *v1 = (int32_t)v3 - (int32_t)v2 + *v1;
    int64_t v4; // 0xf9046
    *(char *)a2 = *(char *)&v4 & (char)v2;
    return unknown_ffffffffa0147859();
}

// Address range: 0xf906d - 0xf9071
int64_t function_f906d(int64_t a1) {
    // 0xf906d
    return a1 & 0xffffffff;
}

// Address range: 0xf90e4 - 0xf90eb
int64_t function_f90e4(int64_t a1, int64_t a2) {
    // 0xf90e4
    bool v1; // 0xf90e4
    int64_t v2 = v1 ? -4 : 4; // 0xf90e4
    return function_1f80a31(v2 + a1, v2 + a2);
}

// Address range: 0xf9108 - 0xf910e
int64_t function_f9108(void) {
    // 0xf9108
    int64_t result; // 0xf9108
    return result;
}

// Address range: 0xf910e - 0xf911d
int64_t function_f910e(int64_t a1) {
    char v1 = *(char *)0x3fba191b; // 0xf9113
    int64_t result; // 0xf910e
    *(char *)0x3fba191b = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0xf917d - 0xf919b
int64_t function_f917d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0xf917d
    int64_t v1; // 0xf917d
    unsigned char v2 = *(char *)(a3 - 0x20fa3a69 + 2 * v1) | (char)(v1 / 256); // 0xf917d
    int64_t result = 256 * (int64_t)v2 | v1 & -0xff01; // 0xf917d
    *(int32_t *)a1 = (int32_t)result;
    if (a4 != 1 == v2 == 0) {
        // 0xf91cc
        return result;
    }
    // 0xf918f
    bool v3; // 0xf917d
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0xf9184
    int64_t v5 = v4 - 108; // 0xf918f
    int32_t * v6 = (int32_t *)v5; // 0xf918f
    *v6 = *v6 + (int32_t)a3;
    *(int64_t *)0x32005c23 = v4;
    char v7 = __asm_in(104); // 0xf9193
    char * v8 = (char *)(v5 + 4 * a3); // 0xf9195
    *v8 = *v8 + (char)(a3 / 256);
    return result & -256 | (int64_t)v7;
}

// Address range: 0x120146 - 0x120147
int64_t function_120146(void) {
    // 0x120146
    int64_t result; // 0x120146
    return result;
}

// Address range: 0x120148 - 0x1201e1
int64_t function_120148(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x120148
    int64_t v1; // 0x120148
    int64_t v2 = v1;
    *(char *)-0x17960973 = *(char *)-0x17960973 | (char)v1;
    int32_t * v3 = (int32_t *)(v2 - 0x5f7c7f0c + 8 * v2); // 0x120151
    *v3 = *v3 + (int32_t)a4;
    *(int32_t *)-0x2bec15ca = *(int32_t *)-0x2bec15ca | -66;
    int64_t v4 = a4 - 1; // 0x12015f
    if (v4 != 0) {
        function_120106();
    }
    int64_t v5 = unknown_84d32cd(); // 0x1201c7
    bool v6; // 0x120148
    int64_t v7 = v6 ? -4 : 4; // 0x1201cc
    char * v8 = (char *)(v5 - 23); // 0x1201cd
    *v8 = *v8 - (char)v4;
    *(int32_t *)((v1 + a1 + (int64_t)v6 & 0xffffffff) + v7) = (int32_t)v5;
    char * v9 = (char *)(a4 - 0x17fe1740); // 0x1201d1
    *v9 = *v9 + (char)a3;
    int64_t result = v5 + 0xc556e8 & 0xffffffff; // 0x1201d7
    int32_t * v10 = (int32_t *)(result + 127); // 0x1201de
    *v10 = *v10 + (int32_t)v2;
    return result;
}

// Address range: 0x1201e2 - 0x1201ea
int64_t function_1201e2(int64_t a1) {
    // 0x1201e2
    int64_t v1; // 0x1201e2
    int64_t v2 = v1;
    bool v3; // 0x1201e2
    char * v4 = (char *)(v2 & -256 | (int64_t)v3 | 2 * v2 & 254); // 0x1201e5
    *v4 = *v4 + 43;
    return function_120232(v1, v1, a1);
}

// Address range: 0x1201ed - 0x1201ee
int64_t function_1201ed(void) {
    // 0x1201ed
    int64_t result; // 0x1201ed
    return result;
}

// Address range: 0x120204 - 0x120222
int64_t function_120204(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x120204
    int64_t v1; // 0x120204
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4; // 0x12020c
    uint32_t v4 = v3 - 0x2b308963; // 0x12020c
    *(int32_t *)v2 = (int32_t)v2;
    int64_t v5; // 0x120204
    unsigned char v6 = *(char *)&v5; // 0x120213
    bool v7; // 0x120204
    int64_t v8 = (v7 ? -1 : 1) + a2; // 0x120213
    v5 = v8;
    int64_t v9 = v2 & -256 | (int64_t)v6; // 0x120214
    if (v3 > 0x2b308962 || v4 == 0) {
        v9 = function_120250(a1, v8, 0xd4cf769d);
    }
    uint64_t v10 = (int64_t)v4; // 0x12020c
    *(int16_t *)(v10 + 0x1e87665) = 1;
    int64_t result = v9; // 0x12021e
    if (v10 <= a1) {
        result = function_1201ed();
    }
    // 0x120220
    return result;
}

// Address range: 0x120232 - 0x120241
int64_t function_120232(int64_t a1, int64_t a2, int64_t a3) {
    // 0x120232
    int64_t v1; // 0x120232
    char * v2 = (char *)(v1 + 0x1e80cda); // 0x120236
    *v2 = *v2 & (char)v1;
    return function_58d67754();
}

// Address range: 0x120250 - 0x12025f
int64_t function_120250(int64_t a1, int64_t a2, int64_t a3) {
    // 0x120250
    char v1; // 0x120250
    *(char *)a3 = (char)(int64_t)&v1;
    int64_t v2; // 0x120250
    char * v3 = (char *)(v2 - 40); // 0x120254
    *v3 = *v3 | (char)v2;
    return unknown_fffffffffe4f425e();
}

// Address range: 0x120262 - 0x12026d
int64_t function_120262(void) {
    // 0x120262
    return unknown_ffffffffae02e26b();
}

// Address range: 0x120290 - 0x120291
int64_t function_120290(int64_t a1) {
    // 0x120290
    int64_t result; // 0x120290
    return result;
}

// Address range: 0x1202a3 - 0x1202b1
int64_t function_1202a3(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_ffffffff912fcea9(a1, a2, a3); // 0x1202a3
    char * v1 = (char *)(a3 - 0x77aad92c); // 0x1202a8
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x1202b1 - 0x1202cb
int64_t function_1202b1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1202b1
    int64_t v1; // 0x1202b1
    int32_t * v2 = (int32_t *)(v1 + 0x3a8c4b88); // 0x1202b1
    *v2 = *v2 + (int32_t)a2;
    float80_t v3; // 0x1202b1
    *(int32_t *)a1 = (int32_t)v3;
    *(char *)a1 = (char)v1 & -38;
    bool v4; // 0x1202b1
    return function_8b37de((v4 ? -1 : 1) + a1);
}

// Address range: 0x1202f0 - 0x12031d
int64_t function_1202f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a3 + 0x3455d350); // 0x1202f0
    int64_t v2; // 0x1202f0
    *(char *)0x5889e004 = *(char *)0x5889e004 + (char)(v2 / 256);
    int32_t * v3 = (int32_t *)(a4 - 0x170bc929); // 0x120303
    *v3 = *v3 - (int32_t)a3;
    int32_t * v4 = (int32_t *)(v2 + 63 + v2); // 0x120309
    *v4 = *v4 + (int32_t)v2;
    uint32_t v5 = *(int32_t *)(a3 + 0x1c028017); // 0x12030d
    int64_t v6; // 0x1202f0
    *(char *)a1 = *(char *)&v6;
    return (0x100000000 * a3 | (int64_t)(-102 * v1)) / (int64_t)v5 & 0xffffffff;
}

// Address range: 0x448925 - 0x4489c5
int64_t function_448925(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x448925
    int64_t v1; // 0x448925
    int64_t v2 = v1;
    bool v3; // 0x448925
    if (!v3) {
        int32_t * v4 = (int32_t *)(a2 + 0x620dba16); // 0x44894b
        *v4 = *v4 - (int32_t)v2;
        int64_t v5 = (char)(v1 / 256) < (char)v2 ? 131 : 130; // 0x44895b
        *(int32_t *)0x678842a0 = *(int32_t *)0x678842a0 & (int32_t)a4;
        return (v2 - v5) % 256 | v2 & -256;
    }
    // 0x44892b
    *(char *)(v1 + 73) = (char)(v1 / 256);
    __asm_int(69);
    int64_t v6 = (char)v2 < 10 ? 231 : 232; // 0x44893a
    __asm_out((int16_t)a3, (int32_t)((v2 + 246 + v6) % 256 | v2 & 0xffffff00));
    int64_t result = __asm_iretd(); // 0x448941
    if (a4 != 1) {
        result = function_4488f8();
    }
    // 0x448943
    return result;
}

// Address range: 0x4489f9 - 0x4489ff
int64_t function_4489f9(int64_t a1) {
    // 0x4489f9
    int64_t v1; // 0x4489f9
    return v1 + 0x83704382 & 0xffffffff;
}

// Address range: 0x448a0e - 0x448a13
int64_t function_448a0e(void) {
    // 0x448a0e
    return function_fffffffff46f5e8d();
}

// Address range: 0x448a4f - 0x448a52
int64_t function_448a4f(void) {
    // 0x448a4f
    int64_t v1; // 0x448a4f
    return v1 & (v1 | -256);
}

// Address range: 0x448aa8 - 0x448aad
int64_t function_448aa8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x448aa8
    int64_t result; // 0x448aa8
    return result;
}

// Address range: 0x448d25 - 0x448d28
int64_t function_448d25(void) {
    // 0x448d25
    int64_t result; // 0x448d25
    return result;
}

// Address range: 0x448d57 - 0x448d63
int64_t function_448d57(int64_t a1) {
    // 0x448d57
    return (int64_t)*(int32_t *)0x78680048d14636d2;
}

// Address range: 0x448d67 - 0x448d7d
int64_t function_448d67(int64_t a1, int64_t a2, int64_t a3) {
    // 0x448d67
    *(int32_t *)a2 = 0;
    int64_t v1; // 0x448d67
    __asm_outsb((int16_t)a3, *(char *)&v1);
    return __asm_hlt();
}

// Address range: 0x448ddb - 0x448dde
int64_t function_448ddb(int64_t a1) {
    // 0x448ddb
    int64_t result; // 0x448ddb
    return result;
}

// Address range: 0x448e35 - 0x448e36
int64_t function_448e35(void) {
    // 0x448e35
    int64_t result; // 0x448e35
    return result;
}

// Address range: 0x448e42 - 0x448e52
int64_t function_448e42(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x448e42
    int64_t v1; // 0x448e42
    *(char *)a1 = (char)v1;
    int64_t v2; // 0x448e42
    *(char *)a2 = *(char *)&v2 | (char)a3;
    bool v3; // 0x448e42
    return function_4b750acb((v3 ? -1 : 1) + a1);
}

// Address range: 0x448e52 - 0x448e62
int64_t function_448e52(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x448e52
    int64_t v1; // 0x448e52
    *(char *)(8 * v1 + a1) = (char)a3;
    bool v2; // 0x448e52
    if (v2 || v2) {
        function_448e35();
    }
    // 0x448e59
    int64_t v3; // 0x448e52
    __asm_outsb((int16_t)a3, *(char *)&v3);
    uint32_t v4 = (int32_t)a4 % 32; // 0x448e5a
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)(v1 - 99); // 0x448e5a
        uint32_t v6 = *v5; // 0x448e5a
        *v5 = v6 >> v4 | v6 << 32 - v4;
    }
    return function_ffffffffdbf79556();
}

// Address range: 0x448e9f - 0x448ea3
int64_t function_448e9f(int64_t a1) {
    // 0x448e9f
    int64_t result; // 0x448e9f
    return result;
}

// Address range: 0x448eb8 - 0x448ece
int64_t function_448eb8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x448eb8
    return function_daecd59();
}

// Address range: 0x448f01 - 0x448f04
int64_t function_448f01(int64_t a1) {
    // 0x448f01
    int64_t result; // 0x448f01
    return result;
}

// Address range: 0x448f1e - 0x448f23
int64_t function_448f1e(void) {
    // 0x448f1e
    return function_ffffffff8dd6a34b();
}

// Address range: 0x449125 - 0x44913f
int64_t function_449125(int64_t a1, int64_t a2, int64_t a3) {
    // 0x449125
    int64_t v1; // 0x449125
    char v2 = v1; // 0x449125
    int64_t v3 = a3; // 0x44912f
    if ((v2 + 93 & (v2 ^ -128)) >= 0) {
        v3 = function_449114();
    }
    uint64_t v4 = v3;
    *(int32_t *)0x64a9b9a8 = *(int32_t *)0x64a9b9a8 | (int32_t)a1;
    return v4 & -256 | (int64_t)*(char *)(v4 % 256 + v1);
}

// Address range: 0x449145 - 0x449146
int64_t function_449145(void) {
    // 0x449145
    int64_t result; // 0x449145
    return result;
}

// Address range: 0x44914f - 0x44915d
int64_t function_44914f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44914f
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x44914f
    return (v1 & 0x6a6bdbc4) + 0xd1481f41 & 0xfbfbffc5;
}

// Address range: 0x44915d - 0x4491b9
int64_t function_44915d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = __asm_in_133((int16_t)a3); // 0x44915d
    // 0x4491b3
    int64_t v2; // 0x44915d
    return ((int64_t)v1 & 0xffffffff | v2 & 0xffffff00) ^ 0x8a7a1f33;
    char * v3 = (char *)(a4 + 0x71d84a87); // 0x449160
    unsigned char v4 = *v3; // 0x449160
    *v3 = v4 / 2 | 128 * v4;
    return function_449145();
}

// Address range: 0x449221 - 0x449222
int64_t function_449221(void) {
    // 0x449221
    int64_t result; // 0x449221
    return result;
}

// Address range: 0x44923c - 0x44923f
int64_t function_44923c(int64_t a1) {
    // 0x44923c
    int64_t result; // 0x44923c
    return result;
}

// Address range: 0x44928e - 0x449292
int64_t function_44928e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44928e
    return function_449221();
}

// Address range: 0x4492a1 - 0x4492a3
int64_t function_4492a1(void) {
    // 0x4492a1
    int64_t v1; // 0x4492a1
    return function_44931a(v1, v1, v1, v1);
}

// Address range: 0x449308 - 0x44930b
int64_t function_449308(int64_t a1) {
    // 0x449308
    int64_t result; // 0x449308
    return result;
}

// Address range: 0x44931a - 0x449324
int64_t function_44931a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x44931a
    int64_t result; // 0x44931a
    *(char *)a1 = (char)result;
    bool v1; // 0x44931a
    int64_t v2 = (int64_t)*(int32_t *)((v1 ? -1 : 1) + a1); // 0x44931b
    if (92 * v2 == 0x5c00000000 * v2 >> 32) {
        // 0x44933f
        return result;
    }
    // 0x449320
    int64_t v3; // 0x44931a
    *(char *)v3 = *(char *)&v3 ^ (char)(a4 / 256);
    return result;
}
