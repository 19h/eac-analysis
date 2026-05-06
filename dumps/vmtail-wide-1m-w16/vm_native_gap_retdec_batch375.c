/*
 * Targeted RetDec C for native executable gap queue batch 375.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1fb434-0x1fb634 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fb634-0x1fb834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fb834-0x1fba34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fba34-0x1fbc34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fbc34-0x1fbe34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fac1e-0x2fae1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fae1e-0x2fb01e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fb01e-0x2fb21e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_15cb92a();
int64_t function_1fb434(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fb5b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fb5ce(int64_t a1, int64_t a2);
int64_t function_1fb636(void);
int64_t function_1fb644(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fb69a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fb6c1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1fb757(void);
int64_t function_1fb758(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fb794(void);
int64_t function_1fb7a5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1fb7d5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1fb80b(int64_t a1, int64_t a2);
int64_t function_1fb834(void);
int64_t function_1fb904(void);
int64_t function_1fb91a(void);
int64_t function_1fb990(void);
int64_t function_1fb9a0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1fba49(void);
int64_t function_1fbaac(void);
int64_t function_1fbaaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1fbafe(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1fbb45(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fbbdd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1fbc04(int64_t a1, int64_t a2);
int64_t function_1fbc7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1fbd2f(int64_t a1);
int64_t function_1fbd35(void);
int64_t function_1fbd3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fbd5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fbd72(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fbd9e(void);
int64_t function_1fbd9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fbde3(void);
int64_t function_1fbdfd(void);
int64_t function_2fac1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_2fac8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fadce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2faee9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2fb00c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fb1ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_61120d39();
int64_t function_caf2a();
int64_t function_ffffffffaf358e3d();
int64_t function_ffffffffc7b34d93();
int64_t function_ffffffffe8e3bcf3();
int64_t unknown_102a92ba();
int64_t unknown_19ad31f4();
int64_t unknown_23f078af();
int64_t unknown_2bb59f05();
int64_t unknown_342a8da0();
int64_t unknown_3a488048();
int64_t unknown_3d5d7b14();
int64_t unknown_3dbc1057();
int64_t unknown_47ba4a64();
int64_t unknown_649d8783();
int64_t unknown_6fb7d694();
int64_t unknown_7b0eeb14();
int64_t unknown_7c32e9ee();
int64_t unknown_7c884891();
int64_t unknown_ab626be();
int64_t unknown_b160d83();
int64_t unknown_ffffffff8c918e0a();
int64_t unknown_ffffffff922b251b();
int64_t unknown_ffffffffa083eadd();
int64_t unknown_ffffffffa0f54bb1();
int64_t unknown_ffffffffe7e273c3();
int64_t unknown_fffffffff5df86a3();
int64_t unknown_fffffffff8be38c7();

// Address range: 0x1fb434 - 0x1fb5b4
int64_t function_1fb434(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1fb434
    int64_t v1; // 0x1fb434
    int64_t v2 = v1;
    int64_t v3 = a4;
    bool v4; // 0x1fb434
    if (!v4 && true) {
        // 0x1fb436
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        return a3 & 0xffffffff;
    }
    int32_t v5 = v1; // 0x1fb498
    int64_t v6 = v1 & 0xffffffff; // 0x1fb49d
    if ((0x7fec000 - v5 & v5) < 0) {
        // 0x1fb4cf
        return unknown_ffffffffa083eadd((v4 ? -1 : 1) + v6) / 2 % 0x80000000;
    }
    char v7 = *(char *)(v6 - 0x6e201f4b); // 0x1fb4a0
    int64_t v8 = v2 & -256 | (int64_t)((char)v2 - v7); // 0x1fb4a0
    int32_t * v9 = (int32_t *)(v1 - 0xbff4c51 + 4 * v8); // 0x1fb4a8
    *v9 = *v9 + v5;
    int32_t v10 = a1;
    if (v10 <= 0xc50f0901) {
        int64_t result = __asm_sti(v6); // 0x1fb474
        int32_t * v11 = (int32_t *)(result + 23); // 0x1fb475
        *v11 = *v11 | (int32_t)v1;
        return result;
    }
    int32_t v12 = v10; // 0x1fb4ea
    if (llvm_ctpop_i8((char)(v3 / 256) - (char)a1) % 2 != 0) {
        v12 = function_ffffffffe8e3bcf3();
    }
    uint32_t v13 = (int32_t)a2; // 0x1fb4f0
    uint32_t v14 = v12 + v13; // 0x1fb4f0
    if (v14 < v13) {
        // 0x1fb4bc
        unknown_fffffffff8be38c7();
        return v3 & 0xffffffff;
    }
    int64_t v15 = v14; // 0x1fb4f0
    *(int32_t *)v6 = *(int32_t *)v15;
    int64_t v16 = v4 ? -4 : 4; // 0x1fb4f4
    int64_t v17 = v16 + v15; // 0x1fb4f4
    int64_t v18 = 2 * v16 + v6; // 0x1fb4f5
    uint32_t v19 = *(int32_t *)(a3 + 0x4fea01e8) | (int32_t)a3; // 0x1fb4f6
    int64_t v20 = v19; // 0x1fb4f6
    int32_t v21 = v1; // 0x1fb506
    *(int32_t *)-0x5e00b74 = *(int32_t *)-0x5e00b74 + v21;
    *(int32_t *)v18 = *(int32_t *)v17;
    int64_t result2 = unknown_7b0eeb14(v18 + (v4 ? -5 : 5), v17 + v16, v19); // 0x1fb50e
    int64_t v22 = 8 * v1 + 0xe810d40c + v20; // 0x1fb513
    int32_t v23 = *(int32_t *)&v3 + (int32_t)v22; // 0x1fb51a
    *(int32_t *)v3 = v23;
    if (v23 == 0) {
        // 0x1fb51e
        return result2;
    }
    char * v24 = (char *)(result2 + 0x29d9400); // 0x1fb562
    *v24 = *v24 + (char)result2;
    char * v25 = (char *)(v8 + 0xc01e800); // 0x1fb568
    *v25 = *v25 + (char)(v3 / 256);
    int32_t * v26 = (int32_t *)(v20 + 28); // 0x1fb56e
    *v26 = *v26 + (int32_t)v3;
    int32_t v27 = *(int32_t *)(v22 & 0xffffffff); // 0x1fb576
    *(int32_t *)v3 = *(int32_t *)&v3 + v21;
    if ((a5 & 65) == 0) {
        // 0x1fb538
        return ((int64_t)(v27 & -0x10000) | (int64_t)(46 * ((int16_t)v2 >> 8))) ^ 0xe201e8af;
    }
    // 0x1fb582
    int64_t v28; // 0x1fb434
    *(float80_t *)(v1 + 0x3a2b13e8 + (int64_t)&v28) = __asm_fbstp(1.0L);
    unsigned char v29 = (char)unknown_7c884891(); // 0x1fb590
    unsigned char v30 = llvm_ctpop_i8(v29 + 90); // 0x1fb590
    int64_t result3 = __asm_hlt(); // 0x1fb593
    if (v30 % 2 == 0) {
        // 0x1fb51e
        return result3;
    }
    int32_t * v31 = (int32_t *)unknown_342a8da0(); // 0x1fb59f
    *v31 = *v31 + (int32_t)(v29 < 166) + (int32_t)v3;
    int64_t result4 = unknown_23f078af(); // 0x1fb5a8
    int32_t * v32 = (int32_t *)(v1 - 0x5cdb15bf); // 0x1fb5ae
    *v32 = *v32 + (int32_t)v3;
    return result4;
}

// Address range: 0x1fb5b7 - 0x1fb5cc
int64_t function_1fb5b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fb5b7
    __asm_wait();
    int64_t v1 = unknown_ab626be(); // 0x1fb5b8
    bool v2; // 0x1fb5b7
    uint64_t v3 = v1 & -0x10000 | (int64_t)__asm_in((int16_t)a3) | 256 * (64 * (int64_t)v2 | 128 * (int64_t)(bool)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2); // 0x1fb5bd
    char v4 = *(char *)(a3 + 0x1e80147); // 0x1fb5c1
    return 256 * (int64_t)(((char)(v3 / 256) | 2) ^ v4) | v3 & -0xff01;
}

// Address range: 0x1fb5ce - 0x1fb5d1
int64_t function_1fb5ce(int64_t a1, int64_t a2) {
    // 0x1fb5ce
    int64_t result; // 0x1fb5ce
    return result;
}

// Address range: 0x1fb636 - 0x1fb644
int64_t function_1fb636(void) {
    // 0x1fb636
    return function_ffffffffaf358e3d();
}

// Address range: 0x1fb644 - 0x1fb657
int64_t function_1fb644(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fb644
    int64_t v1; // 0x1fb644
    __asm_out(-21, (int32_t)v1);
    char * v2 = (char *)(4 * a4 + 0x1e822be + v1); // 0x1fb647
    *v2 = *v2 + (char)v1;
    int64_t result = __asm_hlt(); // 0x1fb64e
    int64_t v3; // 0x1fb644
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    return result;
}

// Address range: 0x1fb69a - 0x1fb6c1
int64_t function_1fb69a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fb69a
    int64_t v1; // 0x1fb69a
    int64_t v2 = v1;
    bool v3; // 0x1fb69a
    bool v4 = v3;
    int64_t v5 = (v2 + 41) % 256 | v2 & -256; // 0x1fb6ac
    uint32_t v6 = *(int32_t *)-0x620c6d47; // 0x1fb6b4
    *(int32_t *)-0x620c6d47 = 0x80000000 * (int32_t)((int32_t)v5 < 0x809ebf01) | v6 / 2;
    int64_t v7 = (v4 ? 0xfffffffc : 4) + a1 + (v4 ? 0xffffffff : 1) + v5; // 0x1fb6ba
    char * v8 = (char *)(v7 & 0xffffffff); // 0x1fb6bc
    *v8 = *v8 ^ (char)v7;
    return (v7 + 77) % 256 | v7 & 0xffffff00;
}

// Address range: 0x1fb6c1 - 0x1fb70b
int64_t function_1fb6c1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a4 & -0xff01; // 0x1fb6c1
    int64_t v2; // 0x1fb6c1
    *(char *)a1 = (char)v2;
    bool v3; // 0x1fb6c1
    int64_t v4 = v3 ? -1 : 1; // 0x1fb6c3
    int64_t v5 = v4 + a1; // 0x1fb6c3
    int64_t v6 = v4 + a2; // 0x1fb6c3
    char * v7 = (char *)(v6 - 0x6d3fec3 + 2 * v5); // 0x1fb6c4
    int64_t v8; // 0x1fb6c1
    *v7 = *v7 + (char)(v8 / 256);
    int32_t * v9 = (int32_t *)(v5 - 0x7ea88961); // 0x1fb6cb
    *v9 = -*v9;
    unsigned char v10 = (char)(a3 / 256); // 0x1fb6da
    unsigned char v11 = v10 + (char)((int64_t)&g5 >> 8); // 0x1fb6da
    __asm_outsb((int16_t)(256 * (int64_t)v11 | a3 % 256), *(char *)v6);
    int32_t v12 = v5; // 0x1fb6e2
    *(int32_t *)0x7068a1fd = v12;
    int64_t v13 = unknown_7c32e9ee(); // 0x1fb6e8
    uint64_t v14 = v13 + (v11 < v10 ? 180 : 179); // 0x1fb6ed
    int64_t v15 = v13 & -256; // 0x1fb6ed
    int64_t v16 = v14 % 256 | v15; // 0x1fb6ed
    char * v17 = (char *)(v1 | (int64_t)&g5); // 0x1fb6ef
    char v18 = v14; // 0x1fb6ef
    *v17 = *v17 + v18;
    *(int32_t *)0x3d219fc0 = *(int32_t *)0x3d219fc0 + (int32_t)v16;
    int32_t * v19 = (int32_t *)v16; // 0x1fb6fa
    *v19 = *v19 + (int32_t)v2;
    char v20 = *(char *)&v8 | v18; // 0x1fb6fe
    char * v21 = (char *)(v2 - 77); // 0x1fb700
    *v21 = *v21 ^ v20;
    int32_t * v22 = (int32_t *)((v1 | (int64_t)&g5 & -0xff01 | (int64_t)&g4) - 106); // 0x1fb705
    *v22 = *v22 + v12;
    return v15 | (int64_t)(v20 + (char)(((int64_t)&g5 & -0xff01 | (int64_t)&g4) >> 8));
}

// Address range: 0x1fb757 - 0x1fb758
int64_t function_1fb757(void) {
    // 0x1fb757
    int64_t result; // 0x1fb757
    return result;
}

// Address range: 0x1fb758 - 0x1fb78c
int64_t function_1fb758(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int32_t * v2 = (int32_t *)(unknown_47ba4a64() + 0x1e86800); // 0x1fb763
    *v2 = *v2 + (int32_t)(int64_t)&v1;
    __asm_outsd((int16_t)a3, *(int32_t *)0x9205ea71);
    return unknown_649d8783();
}

// Address range: 0x1fb794 - 0x1fb795
int64_t function_1fb794(void) {
    // 0x1fb794
    int64_t result; // 0x1fb794
    return result;
}

// Address range: 0x1fb7a5 - 0x1fb7d5
int64_t function_1fb7a5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1fb7a5
    int64_t v1; // 0x1fb7a5
    char * v2 = (char *)(v1 + 0x38a2000); // 0x1fb7a5
    *v2 = *v2 + (char)v1;
    char * v3 = (char *)(v1 + 0x4001e800); // 0x1fb7ab
    *v3 = *v3 + (char)(v1 / 256);
    char * v4 = (char *)(v1 - 0x68ff6659); // 0x1fb7b1
    *v4 = *v4 + (char)(v1 / 256);
    unknown_ffffffffe7e273c3();
    char * v5 = (char *)((v1 & 0xffffffff) + 0x6101e819); // 0x1fb7cb
    char v6 = *v5 & (char)(a4 / 256); // 0x1fb7cb
    *v5 = v6;
    if (v6 < 0) {
        function_1fb757();
    }
    // 0x1fb7d3
    return function_1fb794();
}

// Address range: 0x1fb7d5 - 0x1fb7e9
int64_t function_1fb7d5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1fb7d5
    bool v1; // 0x1fb7d5
    bool v2 = v1;
    int64_t v3; // 0x1fb7d5
    unsigned char v4 = (char)((uint64_t)v3 / 256); // 0x1fb7d5
    unsigned char v5 = v4 + (char)(a4 / 256); // 0x1fb7d5
    bool v6 = v2 ? v5 + (char)v2 <= v4 : v5 < v4; // 0x1fb7d5
    int64_t v7 = __asm_sti(a1); // 0x1fb7d7
    int32_t v8 = *(int32_t *)(v7 - 0x1dfe17c6); // 0x1fb7d8
    char v9 = *(char *)((int64_t)(v8 + (int32_t)a3 + (int32_t)v6) - 0x331d5464); // 0x1fb7e1
    return v7 & -256 | (int64_t)(((char)v7 ^ 59) - v9);
}

// Address range: 0x1fb80b - 0x1fb80f
int64_t function_1fb80b(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 40); // 0x1fb80b
    int64_t result; // 0x1fb80b
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1fb834 - 0x1fb836
int64_t function_1fb834(void) {
    // 0x1fb834
    int64_t result; // 0x1fb834
    return result;
}

// Address range: 0x1fb904 - 0x1fb909
int64_t function_1fb904(void) {
    // 0x1fb904
    return function_15cb92a();
}

// Address range: 0x1fb91a - 0x1fb91f
int64_t function_1fb91a(void) {
    // 0x1fb91a
    return function_ffffffffc7b34d93();
}

// Address range: 0x1fb990 - 0x1fb99c
int64_t function_1fb990(void) {
    // 0x1fb990
    int64_t v1; // 0x1fb990
    return v1 & -256 | (int64_t)*(char *)0xad8144301e86200;
}

// Address range: 0x1fb9a0 - 0x1fb9a9
int64_t function_1fb9a0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1fb9a0
    int64_t result; // 0x1fb9a0
    *(char *)a4 = (char)result + 1;
    int64_t v1; // 0x1fb9a0
    *(char *)a1 = *(char *)&v1 - (char)(a3 / 256);
    return result;
}

// Address range: 0x1fba49 - 0x1fba4a
int64_t function_1fba49(void) {
    // 0x1fba49
    int64_t result; // 0x1fba49
    return result;
}

// Address range: 0x1fbaac - 0x1fbaad
int64_t function_1fbaac(void) {
    // 0x1fbaac
    int64_t result; // 0x1fbaac
    return result;
}

// Address range: 0x1fbaaf - 0x1fbac3
int64_t function_1fbaaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1fbaaf
    bool v1; // 0x1fbaaf
    if (!v1) {
        function_1fba49();
    }
    int64_t v2; // 0x1fbaaf
    if ((v2 & 0xffffffff) != 1 && !v1) {
        function_1fbaac();
    }
    // 0x1fbab4
    unknown_102a92ba();
    if (!v1) {
        function_1fba49();
    }
    int64_t * v3 = (int64_t *)(v2 - 111); // 0x1fbabb
    *v3 = *v3 + a5;
    return __asm_in_133((int16_t)a3);
}

// Address range: 0x1fbafe - 0x1fbb1a
int64_t function_1fbafe(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1fbafe
    unknown_2bb59f05();
    int64_t v1; // 0x1fbafe
    return unknown_3d5d7b14() + 2 * v1 & 0xffffffff;
}

// Address range: 0x1fbb45 - 0x1fbb73
int64_t function_1fbb45(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1fbb45
    *(char *)-0x7587f9a = *(char *)-0x7587f9a - 77;
    int64_t v1; // 0x1fbb45
    return a3 + a1 + (int64_t)((int32_t)v1 < 0xe40aa0e7) & 0xffffff00 | (int64_t)__asm_in_134(-99);
}

// Address range: 0x1fbbdd - 0x1fbc04
int64_t function_1fbbdd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1fbbdd
    int64_t v1; // 0x1fbbdd
    bool v2; // 0x1fbbdd
    uint32_t v3 = (int32_t)v1 + (int32_t)a1 + (int32_t)v2; // 0x1fbbea
    int64_t v4 = unknown_19ad31f4(v3); // 0x1fbbee
    int64_t * v5 = (int64_t *)(v1 & 0xffffff00 | (int64_t)*(char *)0x37f801e8b1befa92); // 0x1fbbf3
    int32_t * v6 = (int32_t *)((int64_t)v3 - 118); // 0x1fbbf8
    *v6 = *v6 + (int32_t)((v1 + a3) % 256 | a3 & 0xffffff00);
    return (v4 + a4 / 256) % 256 | v4 & -256;
}

// Address range: 0x1fbc04 - 0x1fbc0c
int64_t function_1fbc04(int64_t a1, int64_t a2) {
    int64_t result = unknown_ffffffff8c918e0a(a1, a2); // 0x1fbc04
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x1fbc7d - 0x1fbd23
int64_t function_1fbc7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = unknown_b160d83(); // 0x1fbc7d
    *(char *)0x4eca99802fb83402 = (char)a2;
    unknown_6fb7d694();
    int16_t v2 = v1 / 256 % 256 | a3 & 0xff00; // 0x1fbc98
    __asm_outsb(v2, *(char *)(v1 & 0xffffffff));
    __asm_hlt();
    bool v3; // 0x1fbc7d
    if (v3 || v3) {
        int64_t v4 = unknown_ffffffff922b251b(); // 0x1fbd15
        *(char *)a1 = __asm_insb(v2);
        int64_t result = v4 & -0xff01 | 0xa300; // 0x1fbd1d
        char * v5 = (char *)result; // 0x1fbd1f
        unsigned char v6 = *v5; // 0x1fbd1f
        *v5 = v6 / 128 | 2 * v6;
        return result;
    }
    // 0x1fbc9d
    unknown_fffffffff5df86a3();
    return function_61120d39();
}

// Address range: 0x1fbd2f - 0x1fbd30
int64_t function_1fbd2f(int64_t a1) {
    // 0x1fbd2f
    int64_t result; // 0x1fbd2f
    return result;
}

// Address range: 0x1fbd35 - 0x1fbd37
int64_t function_1fbd35(void) {
    // 0x1fbd35
    int64_t v1; // 0x1fbd35
    return function_1fbd5d(v1, v1, v1, v1);
}

// Address range: 0x1fbd3a - 0x1fbd5d
int64_t function_1fbd3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 121; // bp-8, 0x1fbd3d
    int64_t v2; // 0x1fbd3a
    char * v3 = (char *)(v2 - 22); // 0x1fbd3f
    *v3 = *v3 + (char)a3;
    unknown_3a488048();
    __asm_in_134(-96);
    int32_t * v4 = (int32_t *)(4 * a1 + 29 + a4 & 0xffffffff); // 0x1fbd49
    int32_t v5 = *v4 - (int32_t)a2; // 0x1fbd49
    *v4 = v5;
    if (a4 != 1 && v5 != 0) {
        function_1fbd9e();
    }
    int64_t v6 = unknown_3dbc1057(); // 0x1fbd50
    int32_t * v7 = (int32_t *)(a4 + 110); // 0x1fbd5a
    *v7 = *v7 + (int32_t)(int64_t)&v1;
    return v6 + 2 * v2 & 0xffffffff;
}

// Address range: 0x1fbd5d - 0x1fbd67
int64_t function_1fbd5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fbd5d
    int64_t v1; // 0x1fbd5d
    uint64_t v2 = v1;
    char * v3 = (char *)(v1 - 45 + 8 * v1); // 0x1fbd5d
    bool v4; // 0x1fbd5d
    *v3 = *v3 + (char)a3 + (char)v4;
    int64_t v5; // 0x1fbd5d
    *(char *)a1 = *(char *)&v5 + (char)a4;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x1fbd72 - 0x1fbd8e
int64_t function_1fbd72(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fbd72
    int64_t result; // 0x1fbd72
    __asm_psllq(result, *(int64_t *)(a4 + 47));
    *(int32_t *)-0x3d79ff99845dafff = (int32_t)result;
    char * v1 = (char *)(result + 65); // 0x1fbd80
    *v1 = *v1 | (char)a4;
    char v2 = *(char *)0xfdfa48e; // 0x1fbd87
    *(char *)0xfdfa48e = v2 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x1fbd9e - 0x1fbd9f
int64_t function_1fbd9e(void) {
    // 0x1fbd9e
    int64_t result; // 0x1fbd9e
    return result;
}

// Address range: 0x1fbd9f - 0x1fbdb6
int64_t function_1fbd9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fbd9f
    int64_t v1; // 0x1fbd9f
    uint64_t v2 = v1;
    *(char *)0x6033dda6 = *(char *)0x6033dda6 + (char)(v2 / 256);
    char * v3 = (char *)(a3 + 0x2b476876); // 0x1fbda5
    char v4 = v2; // 0x1fbda5
    *v3 = *v3 & v4;
    int64_t result = unknown_ffffffffa0f54bb1(); // 0x1fbdab
    char * v5 = (char *)(a3 + 70); // 0x1fbdb0
    *v5 = *v5 | v4;
    return result;
}

// Address range: 0x1fbde3 - 0x1fbde4
int64_t function_1fbde3(void) {
    // 0x1fbde3
    int64_t result; // 0x1fbde3
    return result;
}

// Address range: 0x1fbdfd - 0x1fbdff
int64_t function_1fbdfd(void) {
    // 0x1fbdfd
    return function_1fbde3();
}

// Address range: 0x2fac1e - 0x2fac8c
int64_t function_2fac1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x2fac1e
    return function_caf2a(a1, a2, a3, a4);
}

// Address range: 0x2fac8c - 0x2fadce
int64_t function_2fac8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fac8c
    int64_t v1; // bp-16, 0x2fac8c
    int64_t v2 = (int64_t)&v1; // 0x2faca6
    v1 = 169;
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x2facbe
    int64_t v4 = v2 - 24; // 0x2facc3
    *(int64_t *)(v2 - 8) = 0x2f7683;
    int64_t v5 = v2 - 32; // 0x2facee
    int64_t * v6 = (int64_t *)v5; // 0x2facef
    *(int64_t *)v4 = 0x73147705;
    *v6 = 0x5af71801;
    int64_t * v7 = (int64_t *)(v2 - 40); // 0x2facff
    int64_t v8 = *(int64_t *)(v2 + 8); // 0x2fad0e
    *v6 = v8;
    *v7 = v4;
    int64_t v9 = *v3; // 0x2fad31
    *v7 = v9;
    int64_t v10 = v2 - 48; // 0x2fad35
    int64_t * v11 = (int64_t *)v10; // 0x2fad35
    *v11 = a1;
    int64_t * v12 = (int64_t *)(v2 - 56); // 0x2fad3a
    *v12 = v10;
    *v11 = 0x2a8bf821;
    *v12 = v8;
    *v6 = *v11;
    *v11 = 0x596bad31;
    *(int64_t *)(v2 - 64) = v9;
    *v12 = v9;
    *v3 = *v11;
    *v12 = a4;
    *v11 = v5;
    *v7 = *v6;
    *v11 = v5;
    return function_caf2a(*v11, a2, a3, a4);
}

// Address range: 0x2fadce - 0x2faee9
int64_t function_2fadce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2fadce
    return function_caf2a(a1, a2, a3, a4);
}

// Address range: 0x2faee9 - 0x2fb00c
int64_t function_2faee9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a4 + 16); // 0x2faf8c
    int64_t v2 = *v1; // 0x2faf8c
    int64_t v3 = a4 - 8; // 0x2faf8c
    int64_t * v4 = (int64_t *)v3; // 0x2faf8c
    *(int64_t *)(a4 - 24) = v2;
    *(int64_t *)(a4 - 16) = v3;
    int64_t * v5 = (int64_t *)a4; // 0x2fafc6
    bool v6; // 0x2faee9
    *v1 = 0x4000 * (int64_t)(bool)v6 | 2048 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 128 * (int64_t)v6 | 64 * (int64_t)v6 | 16 * (int64_t)v6 | (int64_t)v6 | 4 * (int64_t)v6 | 2;
    *v5 = 0x2b0d6510;
    *v4 = v2;
    *(int64_t *)(a4 + 32) = *v5;
    int64_t * v7 = (int64_t *)(a4 + 8); // 0x2fafe2
    int64_t v8 = *v7; // 0x2fafe2
    *v5 = v8;
    *v4 = v8;
    int64_t v9 = *v1; // 0x2faff1
    *v7 = v9;
    *v5 = v9;
    return function_caf2a(a1, a2, a3, a4);
}

// Address range: 0x2fb00c - 0x2fb16b
int64_t function_2fb00c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fb00c
    int64_t v1; // bp-48, 0x2fb00c
    v1 = (int64_t)&v1 + 16;
    return function_caf2a(a1, a2, a3, a4);
}

// Address range: 0x2fb1ed - 0x2fb21b
int64_t function_2fb1ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2fb1ed
    int64_t result; // 0x2fb1ed
    char * v1 = (char *)(result - 127); // 0x2fb1ed
    *v1 = *v1 | (char)a4;
    return result;
}
