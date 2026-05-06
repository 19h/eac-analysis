/*
 * Targeted RetDec C for native executable gap queue batch 437.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x11c546-0x11c746 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11cb46-0x11cd46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11cd46-0x11cf46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x197c85-0x197e85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x197e85-0x198085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x198085-0x198285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x198285-0x198485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x198485-0x198685 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g1;
extern int g2;
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
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
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

int64_t function_11c546(void);
int64_t function_11c562(void);
int64_t function_11c574(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11c611(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11c65f(void);
int64_t function_11c664(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_11c6b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11c6ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11c6eb(int64_t a1, int64_t a2);
int64_t function_11c701(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11cae6();
int64_t function_11cb46(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11cb65(void);
int64_t function_11cc05(void);
int64_t function_11cc0d(void);
int64_t function_11cc24(int64_t a1);
int64_t function_11cc54(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint16_t a5);
int64_t function_11cc97(void);
int64_t function_11ccaf(int64_t a1);
int64_t function_11ccd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11cd25(void);
int64_t function_11cd67(void);
int64_t function_11cd73(int64_t a1, int64_t a2);
int64_t function_11cda8(void);
int64_t function_11cdc3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11cddf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11ce27(void);
int64_t function_11ce41(void);
int64_t function_11ce85(int64_t a1);
int64_t function_11ce92(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_11cec3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11cf14(void);
int64_t function_11cf35(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_197c85(int64_t a1, int64_t a2);
int64_t function_197cfa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_197d03(int64_t a1);
int64_t function_197d5f(int64_t a1);
int64_t function_197da4(void);
int64_t function_197e87(void);
int64_t function_197f15(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_197f69(void);
int64_t function_197f7f(int64_t a1);
int64_t function_197f8d(int64_t a1);
int64_t function_197fe2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_19801e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_198118(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_198165(void);
int64_t function_1981d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1981f0(int64_t a1);
int64_t function_198232(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_198262(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_198275(void);
int64_t function_198284(void);
int64_t function_198288(int64_t a1);
int64_t function_1982aa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1982c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_198382(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19839e(int64_t a1);
int64_t function_19840c(void);
int64_t function_19844f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1984c3(int64_t a1);
int64_t function_1984db(void);
int64_t function_1984de(void);
int64_t function_1984e6(int64_t a1);
int64_t function_1984e7(int64_t a1);
int64_t function_198506(void);
int64_t function_198539(int64_t a1);
int64_t function_19855f(void);
int64_t function_19858b(void);
int64_t function_1985a5(void);
int64_t function_1985bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1985f4(void);
int64_t function_1985f9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_19863a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_198677(void);
int64_t function_3d11c817();
int64_t function_3d6b866c();
int64_t function_42a1c7c4();
int64_t function_ffffffffcbf66fbd();
int64_t function_ffffffffdc539060();
int64_t function_fffffffffe4fd0d2();
int64_t unknown_1bde7beb();
int64_t unknown_1fba59c4();
int64_t unknown_37155ce5();
int64_t unknown_3b0427d0();
int64_t unknown_48b17e1a();
int64_t unknown_4ad541e4();
int64_t unknown_66986fc2();
int64_t unknown_680bf6d1();
int64_t unknown_734ce737();
int64_t unknown_ffffffff8687fad3();
int64_t unknown_ffffffff9c14670d();
int64_t unknown_ffffffffa4a22ef1();
int64_t unknown_ffffffffa991cc59();
int64_t unknown_ffffffffa9c6c61e();
int64_t unknown_ffffffffb09bfa43();
int64_t unknown_ffffffffb49f0018();
int64_t unknown_ffffffffc452c268();
int64_t unknown_ffffffffc4ada5ce();
int64_t unknown_ffffffffd3f6d456();
int64_t unknown_ffffffffda77c745();
int64_t unknown_ffffffffe104626c();
int64_t unknown_ffffffffe873c061();
int64_t unknown_fffffffff46941cb();

// Address range: 0x11c546 - 0x11c54e
int64_t function_11c546(void) {
    char v1 = *(char *)0x3dafcc4f; // 0x11c548
    int64_t result; // 0x11c546
    *(char *)0x3dafcc4f = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x11c562 - 0x11c563
int64_t function_11c562(void) {
    // 0x11c562
    int64_t result; // 0x11c562
    return result;
}

// Address range: 0x11c574 - 0x11c5fb
int64_t function_11c574(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int32_t * v3 = (int32_t *)(a3 + 0x3d9d425); // 0x11c574
    int64_t v4; // 0x11c574
    *v3 = *v3 - (int32_t)v4;
    *(char *)-0x7003547f = *(char *)-0x7003547f + (char)(v4 / 256);
    int32_t v5 = __asm_in(-45); // 0x11c580
    uint64_t v6 = (int64_t)v5; // 0x11c580
    char * v7 = (char *)v6; // 0x11c582
    *v7 = *v7 + (char)(v6 / 256);
    unsigned char v8 = *(char *)&v2; // 0x11c585
    unsigned char v9 = (char)v5; // 0x11c587
    char v10 = v8 > (char)a4; // 0x11c587
    unsigned char v11 = v9 + 72 + v10; // 0x11c587
    int64_t v12 = v6 & -256; // 0x11c587
    if (v11 < 0 == (v11 + v10 & (v9 ^ -128)) < 0 == (v11 != 0)) {
        bool v13 = v8 > (char)a4 ? v11 <= v9 : v9 > 183; // 0x11c587
        __asm_outsd((int16_t)a3, *(int32_t *)&v1);
        char * v14 = (char *)(v1 - 0x12c5e021); // 0x11c5f5
        *v14 = (char)v13 - (char)v4 + *v14;
        return v12 | (int64_t)v11;
    }
    // 0x11c58d
    *(char *)-0x39defb6b = *(char *)-0x39defb6b + (char)v2;
    unsigned char v15 = *(char *)-0x620974640a4a81d7; // 0x11c596
    int64_t v16 = v12 | (int64_t)v15; // 0x11c596
    int32_t * v17 = (int32_t *)(v16 + 8); // 0x11c5a0
    *v17 = *v17 + (int32_t)v4;
    char * v18 = (char *)v16; // 0x11c5a3
    *v18 = *v18 + v15;
    *(int32_t *)v2 = __asm_insd((int16_t)a3);
    __asm_out(41, (int32_t)v4);
    return function_3d11c817();
}

// Address range: 0x11c611 - 0x11c63a
int64_t function_11c611(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11c611
    unknown_ffffffffb49f0018();
    float80_t v1; // 0x11c611
    *(int16_t *)(a3 - 0x6360fe18) = (int16_t)v1;
    int64_t v2; // 0x11c611
    *(int16_t *)a4 = (int16_t)v2;
    return unknown_734ce737();
}

// Address range: 0x11c65f - 0x11c662
int64_t function_11c65f(void) {
    // 0x11c65f
    int64_t result; // 0x11c65f
    return result;
}

// Address range: 0x11c664 - 0x11c678
int64_t function_11c664(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x11c664
    bool v1; // 0x11c664
    int64_t v2 = a5 & -0xff01 | 256 * (64 * (int64_t)v1 | 128 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1) | 512; // 0x11c667
    int64_t v3; // 0x11c664
    int64_t v4 = (int64_t)&v3 + a4 & 0xffffffff; // 0x11c66b
    int64_t v5; // 0x11c664
    char * v6 = (char *)(8 * v5 + 97 + v4); // 0x11c66d
    unsigned char v7 = *v6; // 0x11c66d
    *v6 = v7 / 2 | 128 * v7;
    *(int32_t *)a1 = (int32_t)v2;
    *(int64_t *)(v4 - 8) = a4;
    return v2 & -256 | (a4 / 256 + a5) % 256;
}

// Address range: 0x11c6b6 - 0x11c6bf
int64_t function_11c6b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 0x6a01e800); // 0x11c6b8
    *v1 = *v1 + (char)a4;
    int64_t result; // 0x11c6b6
    return result;
}

// Address range: 0x11c6ca - 0x11c6db
int64_t function_11c6ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11c6ca
    unknown_3b0427d0();
    return __asm_iretd();
}

// Address range: 0x11c6eb - 0x11c6ef
int64_t function_11c6eb(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 39); // 0x11c6eb
    int64_t result; // 0x11c6eb
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x11c701 - 0x11c70b
int64_t function_11c701(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11c701
    int64_t v1; // 0x11c701
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v2;
    int32_t * v3 = (int32_t *)(a3 + 0x1e8aabd); // 0x11c702
    *v3 = *v3 + 1;
    bool v4; // 0x11c701
    return (v2 + 205 + (int64_t)v4) % 256 | v2 & -256;
}

// Address range: 0x11cb46 - 0x11cb5f
int64_t function_11cb46(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11cb46
    int64_t v1; // 0x11cb46
    char v2 = *(char *)0x1405ea4f + (char)((uint64_t)v1 / 256); // 0x11cb48
    *(char *)0x1405ea4f = v2;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v3 = a4 - 1; // 0x11cb5a
    if (v3 != 0 && v2 != 0) {
        function_11cae6();
    }
    // 0x11cb5c
    int64_t v4; // bp+18057, 0x11cb46
    int64_t result = (int64_t)&v4; // 0x11cb5c
    char * v5 = (char *)v3; // 0x11cb5d
    *v5 = *v5 - (char)result;
    return result;
}

// Address range: 0x11cb65 - 0x11cb6c
int64_t function_11cb65(void) {
    // 0x11cb65
    int64_t result; // 0x11cb65
    return result;
}

// Address range: 0x11cc05 - 0x11cc06
int64_t function_11cc05(void) {
    // 0x11cc05
    int64_t result; // 0x11cc05
    return result;
}

// Address range: 0x11cc0d - 0x11cc0e
int64_t function_11cc0d(void) {
    // 0x11cc0d
    int64_t result; // 0x11cc0d
    return result;
}

// Address range: 0x11cc24 - 0x11cc28
int64_t function_11cc24(int64_t a1) {
    // 0x11cc24
    return __asm_sti(a1);
}

// Address range: 0x11cc54 - 0x11cc7d
int64_t function_11cc54(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint16_t a5) {
    int64_t v1 = a3;
    unknown_ffffffffe873c061();
    int32_t * v2 = (int32_t *)(a3 - 0x2d995273); // 0x11cc60
    int32_t v3 = *v2 >> 1; // 0x11cc60
    *v2 = v3;
    int64_t v4 = unknown_ffffffffe104626c(); // 0x11cc6b
    if ((a4 & -0x10000 || (int64_t)a5) != 1 == v3 == 0) {
        v4 = function_11cc0d();
    }
    char * v5 = (char *)(v1 + 0x7fd101e8); // 0x11cc6d
    int64_t v6; // 0x11cc54
    *v5 = *v5 & (char)((uint64_t)v6 / 256);
    char v7 = *(char *)&v1; // 0x11cc73
    char v8 = v4; // 0x11cc73
    char v9 = v7 + v8; // 0x11cc73
    *(char *)v1 = v9;
    int64_t result = v4; // 0x11cc78
    if (((v9 ^ v7) & (v9 ^ v8)) < 0) {
        result = function_11cc05();
    }
    // 0x11cc7a
    return result;
}

// Address range: 0x11cc97 - 0x11cc98
int64_t function_11cc97(void) {
    // 0x11cc97
    int64_t result; // 0x11cc97
    return result;
}

// Address range: 0x11ccaf - 0x11ccb0
int64_t function_11ccaf(int64_t a1) {
    // 0x11ccaf
    int64_t result; // 0x11ccaf
    return result;
}

// Address range: 0x11ccd1 - 0x11cd00
int64_t function_11ccd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 8); // 0x11ccd3
    int32_t v2 = a4; // 0x11ccd3
    *v1 = *v1 + v2;
    int64_t v3; // 0x11ccd1
    int64_t v4; // 0x11ccd1
    *(char *)a3 = *(char *)&v3 + (char)v4;
    function_11cc97();
    int64_t v5 = unknown_37155ce5(); // 0x11ccdf
    __asm_int(120);
    *(char *)a1 = (char)v5;
    *(int32_t *)a4 = v2;
    return v5 & 0xffffffff ^ 0x9a01e855;
}

// Address range: 0x11cd25 - 0x11cd27
int64_t function_11cd25(void) {
    // 0x11cd25
    int64_t v1; // 0x11cd25
    return function_11cd73(v1, v1);
}

// Address range: 0x11cd67 - 0x11cd73
int64_t function_11cd67(void) {
    // 0x11cd67
    int64_t result; // 0x11cd67
    *(int32_t *)0x1e89d60b6a9380a = (int32_t)result;
    return result;
}

// Address range: 0x11cd73 - 0x11cd77
int64_t function_11cd73(int64_t a1, int64_t a2) {
    // 0x11cd73
    int64_t v1; // 0x11cd73
    return v1 & 0xffffff00 | 54;
}

// Address range: 0x11cda8 - 0x11cda9
int64_t function_11cda8(void) {
    // 0x11cda8
    int64_t result; // 0x11cda8
    return result;
}

// Address range: 0x11cdc3 - 0x11cdcf
int64_t function_11cdc3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11cdc3
    int64_t v1; // 0x11cdc3
    __asm_outsb((int16_t)a3, (char)v1);
    __asm_in_133((int16_t)((__asm_int3() & 0xffffffff) * (a2 & 0xffffffff) / 0x100000000));
    return unknown_ffffffffc4ada5ce();
}

// Address range: 0x11cddf - 0x11cde6
int64_t function_11cddf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11cddf
    int64_t v1; // 0x11cddf
    int32_t v2 = v1 | v1; // 0x11cddf
    *(int32_t *)a3 = v2;
    int64_t result; // 0x11cddf
    if (v2 < 1) {
        result = function_11cda8();
    }
    // 0x11cde3
    return result;
}

// Address range: 0x11ce27 - 0x11ce2f
int64_t function_11ce27(void) {
    // 0x11ce27
    int64_t result; // 0x11ce27
    __asm_out_134(108, (char)result);
    return result;
}

// Address range: 0x11ce41 - 0x11ce43
int64_t function_11ce41(void) {
    // 0x11ce41
    int64_t v1; // 0x11ce41
    return function_11ce92(v1, v1, v1, v1);
}

// Address range: 0x11ce85 - 0x11ce88
int64_t function_11ce85(int64_t a1) {
    // 0x11ce85
    int64_t result; // 0x11ce85
    return result;
}

// Address range: 0x11ce92 - 0x11cec1
int64_t function_11ce92(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x11ce92
    int64_t result; // 0x11ce92
    int32_t v1 = *(int32_t *)(result + (8 * result | 1)); // 0x11cead
    char * v2 = (char *)((int64_t)(v1 | (int32_t)result) + 85); // 0x11ceb1
    char v3 = *v2; // 0x11ceb1
    char v4 = a3 / 256; // 0x11ceb1
    char v5 = v3 + v4; // 0x11ceb1
    *v2 = v5;
    if (((v5 ^ v3) & (v5 ^ v4)) < 0) {
        // 0x11cea8
        return result;
    }
    // 0x11cebc
    return unknown_66986fc2();
}

// Address range: 0x11cec3 - 0x11cf07
int64_t function_11cec3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11cec3
    unknown_fffffffff46941cb();
    int32_t * v1 = (int32_t *)(a3 + 0x1a360c203); // 0x11ced1
    int64_t v2; // 0x11cec3
    *v1 = *v1 + (int32_t)v2;
    *(int32_t *)0x73219afc = *(int32_t *)0x73219afc ^ -0x27fe1757;
    uint32_t v3 = (int32_t)(a4 + 0x1400 & 0xff00 | a4 & 0xffff00ff); // 0x11cee2
    int64_t v4; // 0x11cec3
    uint32_t v5 = *(int32_t *)&v4; // 0x11cee2
    int64_t v6 = 232; // 0x11cee4
    if (v5 > v3) {
        v6 = (char)function_fffffffffe4fd0d2() < 145 ? 233 : 232;
    }
    int64_t v7 = v5 & (int32_t)a1; // 0x11ceeb
    int64_t v8 = __asm_sti(v7); // 0x11cef6
    v4 = 256 * (v8 + v6) & 0xff00 | 0x2a010037;
    char * v9 = (char *)v8; // 0x11cefa
    *v9 = *v9 - (char)a5;
    uint32_t v10 = (v3 - v5) % 32; // 0x11cefc
    if (v10 != 0) {
        int32_t * v11 = (int32_t *)(v7 - 0x6588fe18); // 0x11cefc
        *v11 = *v11 << v10;
    }
    return a5 & 0xffffffff;
}

// Address range: 0x11cf14 - 0x11cf1b
int64_t function_11cf14(void) {
    // 0x11cf14
    return unknown_48b17e1a();
}

// Address range: 0x11cf35 - 0x11cf40
int64_t function_11cf35(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x11cf35
    int64_t v2; // 0x11cf35
    int32_t v3; // 0x11cf35
    int64_t result; // 0x11cf35
    if (v1 == 0) {
        // 0x11cf35
        int64_t v4; // 0x11cf35
        v3 = v4;
    } else {
        int32_t * v5 = (int32_t *)(a4 + 0x3c93eb00); // 0x11cf35
        uint32_t v6 = *v5; // 0x11cf35
        bool v7; // 0x11cf35
        *v5 = v6 >> v1 | (int32_t)v7 << 32 - v1 | (int32_t)((int64_t)v6 << (int64_t)(33 - v1));
        v2 = result;
        v3 = *(int32_t *)&result;
    }
    *(int32_t *)v2 = v3 + (int32_t)a2;
    return result;
}

// Address range: 0x197c85 - 0x197c8b
int64_t function_197c85(int64_t a1, int64_t a2) {
    // 0x197c85
    int64_t result; // 0x197c85
    int32_t * v1 = (int32_t *)(result + 0x4803908b); // 0x197c85
    *v1 = *v1 + (int32_t)a2;
    return result;
}

// Address range: 0x197cfa - 0x197d00
int64_t function_197cfa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x197cfa
    int64_t v1; // 0x197cfa
    uint64_t v2 = v1;
    uint64_t v3 = v2 / 2 % 128; // 0x197cfa
    *(char *)a1 = (char)v3;
    int64_t v4; // 0x197cfa
    bool v5; // 0x197cfa
    *(int32_t *)((v5 ? -1 : 1) + a1) = *(int32_t *)&v4;
    return v3 | v2 & -256;
}

// Address range: 0x197d03 - 0x197d04
int64_t function_197d03(int64_t a1) {
    // 0x197d03
    int64_t result; // 0x197d03
    return result;
}

// Address range: 0x197d5f - 0x197d60
int64_t function_197d5f(int64_t a1) {
    // 0x197d5f
    int64_t result; // 0x197d5f
    return result;
}

// Address range: 0x197da4 - 0x197da7
int64_t function_197da4(void) {
    // 0x197da4
    int64_t result; // 0x197da4
    return result;
}

// Address range: 0x197e87 - 0x197e88
int64_t function_197e87(void) {
    // 0x197e87
    int64_t result; // 0x197e87
    return result;
}

// Address range: 0x197f15 - 0x197f1e
int64_t function_197f15(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 0x7afe178d); // 0x197f15
    *v1 = *v1 + (char)a4;
    int64_t result; // 0x197f15
    return result;
}

// Address range: 0x197f69 - 0x197f6e
int64_t function_197f69(void) {
    // 0x197f69
    return function_42a1c7c4();
}

// Address range: 0x197f7f - 0x197f80
int64_t function_197f7f(int64_t a1) {
    // 0x197f7f
    int64_t result; // 0x197f7f
    return result;
}

// Address range: 0x197f8d - 0x197f8e
int64_t function_197f8d(int64_t a1) {
    // 0x197f8d
    int64_t result; // 0x197f8d
    return result;
}

// Address range: 0x197fe2 - 0x19801d
int64_t function_197fe2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    bool v2; // 0x197fe2
    if (v2) {
        // 0x197fe4
        __asm_iretd();
        int64_t v3 = unknown_1bde7beb(); // 0x197fe5
        int64_t v4 = *(char *)v3 > (char)(a3 / 256) ? 0x2f742c43 : 0x2f742c42; // 0x197fed
        return v3 - v4 & 0xffffffff;
    }
    // 0x198006
    int64_t v5; // 0x197fe2
    __asm_pcmpgtb(v5, v5);
    char * v6 = (char *)(v5 + 100); // 0x19800a
    *v6 = *v6 | (char)(v5 / 256);
    __asm_int3();
    *(int32_t *)a3 = (int32_t)(int64_t)&v1;
    return __asm_int1();
}

// Address range: 0x19801e - 0x1980c5
int64_t function_19801e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x19801e
    uint64_t v3 = v2 / 256 + a4; // 0x198022
    int64_t v4 = v3 % 256 | a4 & 0xffffff00; // 0x198022
    int32_t * v5 = (int32_t *)(v4 - 0x4818a44); // 0x198024
    int32_t v6 = *v5 + (int32_t)a1; // 0x198024
    *v5 = v6;
    if (v6 == 0) {
        int64_t v7 = v4 + a3; // 0x19802c
        char * v8 = (char *)(v1 + 0x1e8d118); // 0x19802e
        *v8 = *v8 + (char)v7;
        *(int32_t *)v2 = (int32_t)v7;
        return unknown_ffffffffd3f6d456();
    }
    // 0x198073
    __asm_out_135((int16_t)a3, (char)v3);
    __asm_iretd();
    int64_t v9 = ((a5 & (int64_t)&g1) == 0 ? 4 : -4) + a1; // 0x198076
    int32_t * v10 = (int32_t *)(a3 + 0x3d01e8c3); // 0x19807c
    *v10 = *v10 + (int32_t)v2;
    int32_t * v11 = (int32_t *)v9; // 0x19808f
    *v11 = *v11 + ((int32_t)v2 & -256 | 36);
    unsigned char v12 = *(char *)&v1; // 0x1980ab
    int64_t result = (int64_t)v12 | 0x8fb00d00; // 0x1980ab
    char * v13 = (char *)result; // 0x1980b2
    *v13 = *v13 | v12;
    *(char *)0x63e659bc = *(char *)0x63e659bc + (char)v9;
    char * v14 = (char *)(v9 - 43); // 0x1980bb
    *v14 = *v14 + 36;
    return result;
}

// Address range: 0x198118 - 0x198122
int64_t function_198118(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x198118
    int64_t result; // 0x198118
    return result;
}

// Address range: 0x198165 - 0x198166
int64_t function_198165(void) {
    // 0x198165
    int64_t result; // 0x198165
    return result;
}

// Address range: 0x1981d1 - 0x1981e6
int64_t function_1981d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1981d1
    int64_t v1; // 0x1981d1
    unsigned char v2 = *(char *)(v1 + (8 * v1 | 1)) ^ (char)(v1 / 256); // 0x1981d1
    if (v2 == 0) {
        function_198165();
    }
    char * v3 = (char *)((256 * (int64_t)v2 | v1 & -0xff01) + 58); // 0x1981da
    *v3 = *v3 ^ (char)a3;
    unknown_4ad541e4();
    int64_t result = __asm_int3(); // 0x1981e3
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x1981f0 - 0x1981f1
int64_t function_1981f0(int64_t a1) {
    // 0x1981f0
    int64_t result; // 0x1981f0
    return result;
}

// Address range: 0x198232 - 0x19825f
int64_t function_198232(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 20 + (4 * a4 & 0x3fffffffc)); // 0x198235
    *v1 = *v1 + (int32_t)a1;
    int64_t v2 = a4 & 0xffffff1a; // 0x198239
    char * v3 = (char *)(v2 + 0x35a0600); // 0x19823b
    *v3 = *v3 + (char)v2;
    int64_t v4; // 0x198232
    char * v5 = (char *)(v4 + 0x1201e800); // 0x198241
    *v5 = *v5 + (char)(a4 / 256);
    int64_t v6; // 0x198232
    *(int32_t *)a1 = *(int32_t *)&v6;
    bool v7; // 0x198232
    int64_t v8 = v7 ? -4 : 4; // 0x19824e
    int64_t v9 = unknown_ffffffffa991cc59(v8 + a1 + (v7 ? -8 : 8), v8 + a2); // 0x198253
    return (v9 + v4) % 256 | v9 & -256;
}

// Address range: 0x198262 - 0x19826e
int64_t function_198262(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x198262
    return unknown_ffffffffc452c268(a1, a2, a3, a4);
}

// Address range: 0x198275 - 0x198276
int64_t function_198275(void) {
    // 0x198275
    int64_t result; // 0x198275
    return result;
}

// Address range: 0x198284 - 0x198285
int64_t function_198284(void) {
    // 0x198284
    int64_t result; // 0x198284
    return result;
}

// Address range: 0x198288 - 0x198289
int64_t function_198288(int64_t a1) {
    // 0x198288
    int64_t result; // 0x198288
    return result;
}

// Address range: 0x1982aa - 0x1982c9
int64_t function_1982aa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1982aa
    int64_t v1; // 0x1982aa
    int64_t v2 = v1;
    int64_t v3 = a3 & -0xff01 | (int64_t)&g2; // 0x1982aa
    int64_t v4 = (v2 + a4 / 256) % 256 | v2 & -256; // 0x1982ac
    int32_t * v5 = (int32_t *)(a1 + 52 + v4); // 0x1982ae
    uint32_t v6 = *v5; // 0x1982ae
    uint32_t v7 = v6 + (int32_t)a2; // 0x1982ae
    *v5 = v7;
    int32_t * v8 = (int32_t *)v4; // 0x1982b2
    *v8 = *v8 - (int32_t)a1 + (int32_t)(v7 < v6);
    char * v9 = (char *)v4; // 0x1982b4
    *v9 = *v9 + (char)v3;
    __asm_out_135((int16_t)v3, (char)unknown_1fba59c4());
    return function_ffffffffcbf66fbd();
}

// Address range: 0x1982c9 - 0x198344
int64_t function_1982c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    int64_t v1 = a1; // 0x1982c9
    int64_t v2; // 0x1982c9
    bool v3; // 0x1982c9
    if (!v3) {
        int32_t v4 = (int32_t)a2 - (int32_t)a3; // 0x1982cb
        unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x1982cb
        unknown_ffffffff8687fad3();
        if (v5 % 2 != 0) {
            function_198284();
        }
        unsigned char v6 = (char)a3;
        *(char *)a3 = v6 / 2 | 128 * v6;
        char v7 = __asm_insb((int16_t)a3); // 0x1982e8
        char * v8 = (char *)a1; // 0x1982e8
        *v8 = v7;
        if ((char)(a5 / 256) - (char)a4 < 0 != v6 % 2 != v6 / 128) {
            // 0x198339
            *(int32_t *)0x10ddf940 = *(int32_t *)0x10ddf940 + (int32_t)a1;
            return unknown_ffffffffda77c745();
        }
        int64_t v9 = (int64_t)(*(int32_t *)(a3 + 77) + v4); // 0x1982e1
        uint64_t v10 = unknown_ffffffffa4a22ef1(); // 0x1982eb
        *(char *)(v10 + 6) = -1;
        unsigned char v11 = *(char *)(v10 % 256 + a5); // 0x1982f4
        int32_t * v12 = (int32_t *)(v9 + 0x2e150680); // 0x1982fd
        *v12 = *v12 + (int32_t)(v10 & 0xffffff00 | (int64_t)v11);
        __asm_iretd();
        *v8 = *(char *)v9;
        int64_t v13; // 0x1982c9
        v2 = v9 + (int64_t)&v13 & 0xffffffff;
        v1 = (v3 ? -1 : 1) + a1;
    }
    uint32_t v14 = (int32_t)v1 + (int32_t)a4; // 0x19830a
    int32_t v15 = v14 - 0x1765e221; // 0x19830e
    unsigned char v16 = llvm_ctpop_i8((char)v15); // 0x19830e
    *(int64_t *)(v2 - 8) = 0x4000 * (int64_t)(bool)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | (int64_t)(v14 > 0x1765e220) | 16 * (int64_t)(v14 % 16 != 0) | 64 * (int64_t)(v15 == 0) | 128 * (int64_t)(v15 < 0) | 2048 * (int64_t)(((v15 ^ v14) & v14 + 0x689a1ddf) < 0) | 4 * (int64_t)(v16 % 2 == 0) | 2;
    return unknown_ffffffffa9c6c61e(v15);
}

// Address range: 0x198382 - 0x198384
int64_t function_198382(int64_t a1, int64_t a2, int64_t a3) {
    // 0x198382
    int64_t result; // 0x198382
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x19839e - 0x19839f
int64_t function_19839e(int64_t a1) {
    // 0x19839e
    int64_t result; // 0x19839e
    return result;
}

// Address range: 0x19840c - 0x19840d
int64_t function_19840c(void) {
    // 0x19840c
    int64_t result; // 0x19840c
    return result;
}

// Address range: 0x19844f - 0x19847b
int64_t function_19844f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    uint32_t v1 = *(int32_t *)-0x47cf972; // 0x198454
    int64_t v2; // 0x19844f
    uint32_t v3 = v1 + (int32_t)v2; // 0x198454
    *(int32_t *)-0x47cf972 = v3;
    int64_t v4 = __asm_iretd(); // 0x19845a
    int32_t v5 = a1;
    if (v3 < v1 || v3 == 0) {
        // 0x198477
        *(int32_t *)a1 = (int32_t)v2 + v5;
        return (v4 + a4 / 256) % 256 | v4 & -256;
    }
    // 0x19845d
    *(int32_t *)0x3a577d68 = *(int32_t *)0x3a577d68 + v5;
    return function_19840c();
}

// Address range: 0x1984c3 - 0x1984c4
int64_t function_1984c3(int64_t a1) {
    // 0x1984c3
    int64_t result; // 0x1984c3
    return result;
}

// Address range: 0x1984db - 0x1984dc
int64_t function_1984db(void) {
    // 0x1984db
    int64_t result; // 0x1984db
    return result;
}

// Address range: 0x1984de - 0x1984e1
int64_t function_1984de(void) {
    // 0x1984de
    return function_1984db();
}

// Address range: 0x1984e6 - 0x1984e7
int64_t function_1984e6(int64_t a1) {
    // 0x1984e6
    int64_t result; // 0x1984e6
    return result;
}

// Address range: 0x1984e7 - 0x1984ef
int64_t function_1984e7(int64_t a1) {
    // 0x1984e7
    int64_t v1; // 0x1984e7
    return v1 & 0xffffffff ^ 0x353101e8;
}

// Address range: 0x198506 - 0x198507
int64_t function_198506(void) {
    // 0x198506
    int64_t result; // 0x198506
    return result;
}

// Address range: 0x198539 - 0x19853b
int64_t function_198539(int64_t a1) {
    // 0x198539
    int64_t result; // 0x198539
    return result;
}

// Address range: 0x19855f - 0x198560
int64_t function_19855f(void) {
    // 0x19855f
    int64_t result; // 0x19855f
    return result;
}

// Address range: 0x19858b - 0x198590
int64_t function_19858b(void) {
    // 0x19858b
    return function_ffffffffdc539060();
}

// Address range: 0x1985a5 - 0x1985a6
int64_t function_1985a5(void) {
    // 0x1985a5
    int64_t result; // 0x1985a5
    return result;
}

// Address range: 0x1985bb - 0x1985f3
int64_t function_1985bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3 = a4 - 1; // 0x1985bb
    bool v4; // 0x1985bb
    if (v3 != 0 == v4) {
        function_1985a5();
    }
    int32_t * v5 = (int32_t *)(a4 - 0x5bac700c); // 0x1985bd
    uint32_t v6 = *v5; // 0x1985bd
    int64_t v7; // 0x1985bb
    uint32_t v8 = v6 + (int32_t)v7; // 0x1985bd
    *v5 = v8;
    int32_t v9 = *(int32_t *)&v2; // 0x1985c4
    *(int32_t *)v2 = v9 + (int32_t)(v8 < v6) + (int32_t)v1;
    unknown_680bf6d1();
    int32_t * v10 = (int32_t *)(v2 - 0x11d6502b); // 0x1985dd
    *v10 = *v10 + (int32_t)(v3 & 0xffff00ff | 256 * a3 & 0xff00);
    __asm_outsd(-0x6eb4, *(int32_t *)&v1);
    return function_3d6b866c();
}

// Address range: 0x1985f4 - 0x1985f5
int64_t function_1985f4(void) {
    // 0x1985f4
    int64_t result; // 0x1985f4
    return result;
}

// Address range: 0x1985f9 - 0x19860d
int64_t function_1985f9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x4c3b5c0c); // 0x1985f9
    int64_t v2; // 0x1985f9
    *v1 = *v1 + (int32_t)v2;
    char * v3 = (char *)(v2 + 0x125a38ea); // 0x1985ff
    *v3 = *v3 + (char)(a4 / 256);
    return unknown_ffffffff9c14670d();
}

// Address range: 0x19863a - 0x198676
int64_t function_19863a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19863a
    int64_t v1; // 0x19863a
    int32_t * v2 = (int32_t *)(v1 + 7); // 0x19863a
    uint32_t v3 = *v2 + (int32_t)a3; // 0x19863a
    *v2 = v3;
    unknown_ffffffffb09bfa43();
    int64_t v4 = __asm_sti(a1); // 0x198642
    int64_t result = v4; // 0x198643
    if (v3 >= 0) {
        // 0x198645
        result = v4 & -256 | (int64_t)__asm_in_136(-99);
    }
    char * v5 = (char *)(a2 - 116); // 0x19864e
    *v5 = *v5 + (char)result;
    int32_t v6 = v1; // 0x198656
    int32_t v7 = *(int32_t *)(a2 - 0x786a53fd); // 0x198656
    int32_t v8 = v7 + (int32_t)(*(int32_t *)(v1 + 74) > -1 - (int32_t)a1); // 0x198656
    if (v8 > v6) {
        // 0x1986c8
        return result;
    }
    // 0x19865e
    __asm_in_137(0x2548);
    char v9 = *(char *)-0x5718d197; // 0x198662
    *(char *)-0x5718d197 = v9 + (char)((v6 - v8) / 256);
    return function_1985f4();
}

// Address range: 0x198677 - 0x198678
int64_t function_198677(void) {
    // 0x198677
    int64_t result; // 0x198677
    return result;
}
