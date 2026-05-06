/*
 * Targeted RetDec C for native executable gap queue batch 538.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd8bc7-0xd8dc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd8dc7-0xd8fc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd8fc7-0xd91c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ab015-0x3ab215 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ab215-0x3ab415 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ab415-0x3ab615 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ab615-0x3ab815 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ab815-0x3aba15 rank=- name=- kind=- bytes=- uncovered=-
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
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

int64_t function_1c753afd();
int64_t function_222b41e();
int64_t function_3492b998();
int64_t function_3ab015(void);
int64_t function_3ab019(int64_t a1, int64_t a2);
int64_t function_3ab039(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ab04a(void);
int64_t function_3ab055(void);
int64_t function_3ab067(int64_t a1, int64_t a2);
int64_t function_3ab108(int64_t a1);
int64_t function_3ab11f(int64_t a1);
int64_t function_3ab126(void);
int64_t function_3ab13b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ab173(void);
int64_t function_3ab17c(int64_t a1);
int64_t function_3ab18a(int64_t a1, int64_t a2);
int64_t function_3ab19a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ab1d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ab2c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ab32f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ab362(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3ab408(void);
int64_t function_3ab42d(void);
int64_t function_3ab45d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ab47e(int64_t a1);
int64_t function_3ab490(int64_t a1);
int64_t function_3ab49b(void);
int64_t function_3ab4b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ab4e9(int64_t a1, int64_t a2);
int64_t function_3ab50f(void);
int64_t function_3ab586(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ab5a7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3ab5cd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3ab616(void);
int64_t function_3ab67e(void);
int64_t function_3ab67f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ab69a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3ab6ce(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ab714(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3ab7d7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3ab7f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ab802(void);
int64_t function_3ab803(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ab821(int64_t a1, int32_t a2, int64_t a3, int64_t a4);
int64_t function_3ab84c(int64_t a1, int64_t a2);
int64_t function_3ab885(int64_t a1, int64_t a2);
int64_t function_3ab88c(int64_t a1);
int64_t function_3ab8a4(int64_t a1);
int64_t function_3ab8ac(void);
int64_t function_3ab8e0(void);
int64_t function_3ab960(int64_t a1);
int64_t function_574cb237();
int64_t function_6897c551();
int64_t function_77eeba74();
int64_t function_d8bc7(void);
int64_t function_d8bcf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d8c06(void);
int64_t function_d8c0b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_d8c62(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d8cd6(int64_t a1);
int64_t function_d8cd9(int64_t a1);
int64_t function_d8cdc(void);
int64_t function_d8ce4(int64_t a1);
int64_t function_d8d73(void);
int64_t function_d8d8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d8dd2(void);
int64_t function_d8ddc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d8e38(int64_t a1);
int64_t function_d8ea0(void);
int64_t function_d8ea2(void);
int64_t function_d8f28(void);
int64_t function_d8f41(void);
int64_t function_d8f5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d8f98(void);
int64_t function_d8fdc(void);
int64_t function_d9006(int64_t a1);
int64_t function_d9022(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d90b9(void);
int64_t function_d90db(void);
int64_t function_d90e6(int64_t a1, int64_t a2);
int64_t function_d90ff(void);
int64_t function_d912d(void);
int64_t function_d9147(int64_t a1);
int64_t function_d916d(void);
int64_t function_d9177(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ffffffffabb0d668();
int64_t function_ffffffffb644375f();
int64_t function_ffffffffbf4fcd19();
int64_t function_ffffffffd2108d2d();
int64_t function_ffffffffd3a31507();
int64_t function_ffffffffe9dddc0f();
int64_t function_ffffffffef86b57e();
int64_t unknown_10708ff7();
int64_t unknown_10e28568();
int64_t unknown_1a868996();
int64_t unknown_1bbecca5();
int64_t unknown_2922ee2c();
int64_t unknown_3607609f();
int64_t unknown_3d14896d();
int64_t unknown_3d3ca030();
int64_t unknown_463fca75();
int64_t unknown_4dd075c5();
int64_t unknown_5a3a9b51();
int64_t unknown_63087d7a();
int64_t unknown_6bc561da();
int64_t unknown_ffffffff8a307a1d();
int64_t unknown_ffffffffbc6129af();
int64_t unknown_ffffffffcfd8f04a();
int64_t unknown_ffffffffd063f9d9();
int64_t unknown_ffffffffe1d43c0a();
int64_t unknown_fffffffffe735929();
int64_t unknown_ffffffffff57597f();

// Address range: 0xd8bc7 - 0xd8bc8
int64_t function_d8bc7(void) {
    // 0xd8bc7
    int64_t result; // 0xd8bc7
    return result;
}

// Address range: 0xd8bcf - 0xd8be6
int64_t function_d8bcf(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd8bcf
    float80_t v1; // 0xd8bcf
    *(int16_t *)(a3 - 0x7d8229ac) = (int16_t)v1;
    int64_t v2; // 0xd8bcf
    uint32_t v3 = *(int32_t *)&v2;
    *(int32_t *)(int64_t)v3 = v3 / 2;
    return function_ffffffffbf4fcd19();
}

// Address range: 0xd8c06 - 0xd8c07
int64_t function_d8c06(void) {
    // 0xd8c06
    int64_t result; // 0xd8c06
    return result;
}

// Address range: 0xd8c0b - 0xd8c43
int64_t function_d8c0b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0xd8c0b
    int64_t result; // 0xd8c0b
    uint32_t v1 = (int32_t)result; // 0xd8c10
    *(int32_t *)0x1adc4917ff620609 = v1;
    if ((int32_t)result > v1) {
        // 0xd8c3e
        return result;
    }
    // 0xd8c1c
    return a3 & 0xffffff00 | (int64_t)(*(char *)(result + a3 % 256) | 115);
}

// Address range: 0xd8c62 - 0xd8c7a
int64_t function_d8c62(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd8c62
    int64_t v1; // 0xd8c62
    *(char *)0x13d008a6f23756c = (char)v1;
    int64_t v2; // 0xd8c62
    int64_t v3 = v2; // 0xd8c6d
    *(int32_t *)v3 = (int32_t)(v3 & v1);
    return function_ffffffffd2108d2d();
}

// Address range: 0xd8cd6 - 0xd8cd9
int64_t function_d8cd6(int64_t a1) {
    // 0xd8cd6
    int64_t result; // 0xd8cd6
    return result;
}

// Address range: 0xd8cd9 - 0xd8cdc
int64_t function_d8cd9(int64_t a1) {
    // 0xd8cd9
    int64_t result; // 0xd8cd9
    return result;
}

// Address range: 0xd8cdc - 0xd8ce0
int64_t function_d8cdc(void) {
    // 0xd8cdc
    int64_t result; // 0xd8cdc
    return result;
}

// Address range: 0xd8ce4 - 0xd8ce7
int64_t function_d8ce4(int64_t a1) {
    // 0xd8ce4
    int64_t result; // 0xd8ce4
    return result;
}

// Address range: 0xd8d73 - 0xd8d74
int64_t function_d8d73(void) {
    // 0xd8d73
    int64_t result; // 0xd8d73
    return result;
}

// Address range: 0xd8d8e - 0xd8dbf
int64_t function_d8d8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd8d8e
    *(int32_t *)-0x41c5daffff5427ae = (int32_t)unknown_1a868996();
    unknown_1bbecca5();
    __asm_int3();
    int64_t v1; // 0xd8d8e
    char v2 = (char)v1 | 46; // 0xd8db4
    *(char *)a4 = v2;
    int64_t result = __asm_hlt(); // 0xd8db8
    if (v2 >= 0) {
        result = function_d8d73();
    }
    // 0xd8dba
    return result;
}

// Address range: 0xd8dd2 - 0xd8dd7
int64_t function_d8dd2(void) {
    // 0xd8dd2
    int64_t result; // 0xd8dd2
    return result;
}

// Address range: 0xd8ddc - 0xd8de4
int64_t function_d8ddc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 0x5754310d + 4 * a3); // 0xd8ddc
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0xd8ddc
    return result;
}

// Address range: 0xd8e38 - 0xd8e39
int64_t function_d8e38(int64_t a1) {
    // 0xd8e38
    int64_t result; // 0xd8e38
    return result;
}

// Address range: 0xd8ea0 - 0xd8ea1
int64_t function_d8ea0(void) {
    // 0xd8ea0
    int64_t result; // 0xd8ea0
    return result;
}

// Address range: 0xd8ea2 - 0xd8ea3
int64_t function_d8ea2(void) {
    // 0xd8ea2
    int64_t result; // 0xd8ea2
    return result;
}

// Address range: 0xd8f28 - 0xd8f29
int64_t function_d8f28(void) {
    // 0xd8f28
    int64_t result; // 0xd8f28
    return result;
}

// Address range: 0xd8f41 - 0xd8f44
int64_t function_d8f41(void) {
    // 0xd8f41
    int64_t result; // 0xd8f41
    return result;
}

// Address range: 0xd8f5f - 0xd8f7a
int64_t function_d8f5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd8f5f
    *(int32_t *)a1 = (int32_t)a2;
    __asm_hlt();
    int64_t result = unknown_10e28568(); // 0xd8f62
    char * v1 = (char *)(a4 - 80 + 8 * result); // 0xd8f67
    int64_t v2; // 0xd8f5f
    *v1 = *v1 | (char)v2;
    float80_t v3; // 0xd8f5f
    *(int32_t *)((v2 & 0xffffffff) + 0x301e828) = (int32_t)v3;
    int32_t * v4 = (int32_t *)result; // 0xd8f72
    *v4 = *v4 ^ (int32_t)v2;
    return result;
}

// Address range: 0xd8f98 - 0xd8f9f
int64_t function_d8f98(void) {
    // 0xd8f98
    return unknown_3607609f();
}

// Address range: 0xd8fdc - 0xd8fe1
int64_t function_d8fdc(void) {
    // 0xd8fdc
    return function_ffffffffabb0d668();
}

// Address range: 0xd9006 - 0xd900d
int64_t function_d9006(int64_t a1) {
    // 0xd9006
    return unknown_463fca75(a1);
}

// Address range: 0xd9022 - 0xd902a
int64_t function_d9022(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd9022
    int64_t v1; // 0xd9022
    __asm_out((int16_t)a3, (char)v1);
    int64_t result = unknown_fffffffffe735929(); // 0xd9023
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0xd90b9 - 0xd90be
int64_t function_d90b9(void) {
    // 0xd90b9
    int64_t v1; // 0xd90b9
    return 2 * v1 & 0xfffffffe;
}

// Address range: 0xd90db - 0xd90df
int64_t function_d90db(void) {
    // 0xd90db
    int64_t result; // 0xd90db
    return result;
}

// Address range: 0xd90e6 - 0xd90fb
int64_t function_d90e6(int64_t a1, int64_t a2) {
    // 0xd90e6
    return a2 & 0xffffffff ^ 248;
}

// Address range: 0xd90ff - 0xd9102
int64_t function_d90ff(void) {
    // 0xd90ff
    int64_t result; // 0xd90ff
    return result;
}

// Address range: 0xd912d - 0xd912e
int64_t function_d912d(void) {
    // 0xd912d
    int64_t result; // 0xd912d
    return result;
}

// Address range: 0xd9147 - 0xd9157
int64_t function_d9147(int64_t a1) {
    // 0xd9147
    bool v1; // 0xd9147
    if (v1) {
        function_d912d();
    }
    // 0xd9149
    return unknown_5a3a9b51();
}

// Address range: 0xd916d - 0xd916e
int64_t function_d916d(void) {
    // 0xd916d
    int64_t result; // 0xd916d
    return result;
}

// Address range: 0xd9177 - 0xd9194
int64_t function_d9177(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    *(int32_t *)a1 = (int32_t)a1 / 2;
    int64_t v2 = unknown_ffffffffff57597f(); // 0xd9179
    int64_t v3; // 0xd9177
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    int64_t v4 = v2; // 0xd9183
    int64_t v5; // 0xd9177
    if (*(char *)&v1 <= (char)((uint64_t)v5 / 256)) {
        v4 = function_d916d();
    }
    int32_t * v6 = (int32_t *)v4; // 0xd9185
    *v6 = *v6 + (int32_t)v4;
    return __asm_int1();
}

// Address range: 0x3ab015 - 0x3ab018
int64_t function_3ab015(void) {
    // 0x3ab015
    int64_t result; // 0x3ab015
    char * v1 = (char *)(result + 56); // 0x3ab015
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x3ab019 - 0x3ab01d
int64_t function_3ab019(int64_t a1, int64_t a2) {
    // 0x3ab019
    int64_t result; // 0x3ab019
    return result;
}

// Address range: 0x3ab039 - 0x3ab03e
int64_t function_3ab039(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ab039
    int64_t v1; // 0x3ab039
    int64_t result = v1;
    bool v2; // 0x3ab039
    *(char *)result = (char)result + (char)a4 + (char)v2;
    return result;
}

// Address range: 0x3ab04a - 0x3ab04f
int64_t function_3ab04a(void) {
    // 0x3ab04a
    return function_574cb237();
}

// Address range: 0x3ab055 - 0x3ab056
int64_t function_3ab055(void) {
    // 0x3ab055
    int64_t result; // 0x3ab055
    return result;
}

// Address range: 0x3ab067 - 0x3ab07a
int64_t function_3ab067(int64_t a1, int64_t a2) {
    // 0x3ab067
    if ((char)unknown_3d14896d() >= -57) {
        function_3ab055();
    }
    // 0x3ab073
    return unknown_63087d7a();
}

// Address range: 0x3ab108 - 0x3ab109
int64_t function_3ab108(int64_t a1) {
    // 0x3ab108
    int64_t result; // 0x3ab108
    return result;
}

// Address range: 0x3ab11f - 0x3ab124
int64_t function_3ab11f(int64_t a1) {
    // 0x3ab11f
    int64_t result; // 0x3ab11f
    return result;
}

// Address range: 0x3ab126 - 0x3ab127
int64_t function_3ab126(void) {
    // 0x3ab126
    int64_t result; // 0x3ab126
    return result;
}

// Address range: 0x3ab13b - 0x3ab166
int64_t function_3ab13b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffcfd8f04a(); // 0x3ab149
    if (a4 != 1) {
        result = function_3ab126();
    }
    // 0x3ab14b
    if ((char)a2 > (char)a1) {
        // 0x3ab150
        __asm_out_133(26, (int32_t)result);
        return result;
    }
    int32_t * v1 = (int32_t *)(result + 8); // 0x3ab163
    int64_t v2; // 0x3ab13b
    *v1 = *v1 + (int32_t)(int64_t)&v2;
    return result;
}

// Address range: 0x3ab173 - 0x3ab178
int64_t function_3ab173(void) {
    // 0x3ab173
    return function_ffffffffe9dddc0f();
}

// Address range: 0x3ab17c - 0x3ab17d
int64_t function_3ab17c(int64_t a1) {
    // 0x3ab17c
    int64_t result; // 0x3ab17c
    return result;
}

// Address range: 0x3ab18a - 0x3ab18f
int64_t function_3ab18a(int64_t a1, int64_t a2) {
    // 0x3ab18a
    int64_t result; // 0x3ab18a
    return result;
}

// Address range: 0x3ab19a - 0x3ab1a0
int64_t function_3ab19a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ab19a
    int64_t v1; // 0x3ab19a
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x3ab1d2 - 0x3ab1e1
int64_t function_3ab1d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int32_t v2 = a4;
    uint32_t v3 = v2 % 32; // 0x3ab1d2
    v1 = a4;
    int32_t v4 = v2; // 0x3ab1d2
    int64_t v5; // 0x3ab1d2
    if (v3 != 0) {
        uint32_t v6 = (int32_t)v5;
        *(int32_t *)v5 = v6 >> 32 - v3 | v6 << v3;
        v4 = *(int32_t *)&v1;
    }
    // 0x3ab1d2
    *(int32_t *)v1 = v4 + (int32_t)v5;
    __asm_int1();
    return function_ffffffffb644375f();
}

// Address range: 0x3ab2c0 - 0x3ab32e
int64_t function_3ab2c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ab2c0
    int64_t v1; // 0x3ab2c0
    int64_t v2 = (v1 | 0x1e80e5b) + 0xe3b57d7a; // 0x3ab2cb
    *(int64_t *)v1 = -0x4b447300;
    *(char *)a1 = (char)v2;
    return v2 & 0xffbffffd;
}

// Address range: 0x3ab32f - 0x3ab356
int64_t function_3ab32f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ab32f
    int64_t v1; // 0x3ab32f
    uint32_t v2 = (int32_t)v1; // 0x3ab335
    uint32_t v3 = (int32_t)a4 % 32; // 0x3ab33d
    bool v4 = (0x3a0a5800 - v2 & v2) < 0; // 0x3ab33d
    bool v5 = v2 < 0x3a0a5801; // 0x3ab33d
    if (v3 != 0) {
        int32_t v6 = v1;
        uint64_t v7 = v1 & 0xffffffff; // 0x3ab33c
        uint32_t v8 = v3 - 1; // 0x3ab33d
        int32_t v9 = v6 << v3 | (int32_t)(v7 >> (int64_t)(33 - v3)) | (int32_t)(v2 < 0x3a0a5801) << v8; // 0x3ab33d
        *(int32_t *)v7 = v9;
        v4 = v3 == 1 ? v9 < 0 != v6 << v8 < 0 : (0x3a0a5800 - v2 & v2) < 0;
        v5 = v6 << v8 < 0;
    }
    int32_t v10 = v2 - 0x3a0a5801; // 0x3ab335
    unsigned char v11 = llvm_ctpop_i8((char)v10); // 0x3ab335
    bool v12; // 0x3ab32f
    *(int64_t *)v1 = 0x4000 * (int64_t)v12 | 64 * (int64_t)(v10 == 0) | 128 * (int64_t)(v10 < 0) | 1024 * (int64_t)v12 | 16 * (int64_t)(v2 % 16 > 16) | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 4 * (int64_t)(v11 % 2 == 0) | (int64_t)v5 | 2048 * (int64_t)v4 | 2;
    return function_222b41e();
}

// Address range: 0x3ab362 - 0x3ab3ee
int64_t function_3ab362(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3ab362
    int64_t v1; // 0x3ab362
    unsigned char v2 = *(char *)(v1 - 105) & (char)(a3 / 256); // 0x3ab369
    uint64_t v3 = a4 - 1; // 0x3ab36c
    if (v3 == 0 || v2 == 0) {
        // 0x3ab36e
        return a2 & 0xffffffff;
    }
    int32_t * v4 = (int32_t *)v3; // 0x3ab3e2
    *v4 = *v4 | 62;
    uint32_t v5 = (int32_t)v3 % 32; // 0x3ab3e5
    if (v5 != 0) {
        int64_t v6; // 0x3ab362
        uint32_t v7 = *(int32_t *)&v6; // 0x3ab3e5
        *(int32_t *)v6 = v7 >> v5 | v7 << 32 - v5;
    }
    int64_t result = v1 | v3 / 256 % 256; // 0x3ab3e7
    int32_t * v8 = (int32_t *)result; // 0x3ab3e9
    *v8 = *v8 + (int32_t)(256 * (int64_t)v2 | a3 & 0xffff00ff);
    return result;
}

// Address range: 0x3ab408 - 0x3ab409
int64_t function_3ab408(void) {
    // 0x3ab408
    int64_t result; // 0x3ab408
    return result;
}

// Address range: 0x3ab42d - 0x3ab42e
int64_t function_3ab42d(void) {
    // 0x3ab42d
    int64_t result; // 0x3ab42d
    return result;
}

// Address range: 0x3ab45d - 0x3ab47e
int64_t function_3ab45d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ab45d
    int64_t v1; // 0x3ab45d
    *(char *)v1 = 0;
    int32_t v2 = __asm_in(19); // 0x3ab45f
    int64_t v3 = v2; // 0x3ab466
    if (((v2 + 0x515dbbff ^ v2) & (v2 ^ -0x80000000)) < 0) {
        v3 = function_3ab42d();
    }
    int64_t v4 = v3; // 0x3ab46d
    if (v2 > -0x515dbbff) {
        v4 = function_3ab408();
    }
    char * v5 = (char *)(a1 - 105); // 0x3ab472
    *v5 = *v5 + (char)((uint64_t)v1 / 256);
    *(char *)v4 = 41;
    int64_t result = function_3ab4b8(a1, a2, a3 & -0xff01 | (int64_t)"cxa_get_globals_fast", 0x686b35, (int64_t)&g1); // 0x3ab47c
    return result;
}

// Address range: 0x3ab47e - 0x3ab47f
int64_t function_3ab47e(int64_t a1) {
    // 0x3ab47e
    int64_t result; // 0x3ab47e
    return result;
}

// Address range: 0x3ab490 - 0x3ab493
int64_t function_3ab490(int64_t a1) {
    // 0x3ab490
    int64_t result; // 0x3ab490
    return result;
}

// Address range: 0x3ab49b - 0x3ab4ab
int64_t function_3ab49b(void) {
    // 0x3ab49b
    int64_t v1; // 0x3ab49b
    return v1 & 0xffffff00;
}

// Address range: 0x3ab4b8 - 0x3ab4e8
int64_t function_3ab4b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ab4b8
    int64_t v1; // 0x3ab4b8
    *(char *)v1 = (char)a3;
    int64_t v2 = unknown_6bc561da(a5); // 0x3ab4d3
    *(char *)-0x5d9c2b1d = *(char *)-0x5d9c2b1d ^ (char)v1;
    int64_t v3; // 0x3ab4b8
    *(char *)a3 = *(char *)&v3 + 49;
    int64_t v4; // 0x3ab4b8
    *(int32_t *)a5 = *(int32_t *)&v4;
    *(int32_t *)(a5 + 4) = *(int32_t *)(a2 + 4);
    return (int64_t)(*(int32_t *)v2 + (int32_t)v2);
}

// Address range: 0x3ab4e9 - 0x3ab4f1
int64_t function_3ab4e9(int64_t a1, int64_t a2) {
    // 0x3ab4e9
    return function_6897c551();
}

// Address range: 0x3ab50f - 0x3ab516
int64_t function_3ab50f(void) {
    // 0x3ab50f
    return function_ffffffffef86b57e();
}

// Address range: 0x3ab586 - 0x3ab5a7
int64_t function_3ab586(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ab586
    int64_t result; // 0x3ab586
    int32_t * v1 = (int32_t *)(result + 0x3a9794f2); // 0x3ab594
    int32_t v2 = a3; // 0x3ab594
    int32_t v3 = *v1; // 0x3ab594
    int32_t v4 = v3 + v2; // 0x3ab594
    *v1 = v4;
    int64_t v5; // 0x3ab586
    int64_t v6 = v5 - 8; // 0x3ab59c
    *(int64_t *)v6 = 0x4391c900;
    while (v4 < 0 == ((v4 ^ v3) & (v4 ^ v2)) < 0 == (v4 != 0)) {
        // 0x3ab58b
        v3 = *v1;
        v4 = v3 + v2;
        *v1 = v4;
        v6 -= 8;
        *(int64_t *)v6 = 0x4391c900;
    }
    int32_t * v7 = (int32_t *)(a4 - 91); // 0x3ab5a3
    *v7 = *v7 + (int32_t)result;
    return result;
}

// Address range: 0x3ab5a7 - 0x3ab5cd
int64_t function_3ab5a7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3ab5a7
    int64_t v1; // 0x3ab5a7
    uint32_t v2 = 0x10000 * (int32_t)(v1 | a4 / 256 % 256) >> 16; // 0x3ab5a9
    char * v3 = (char *)(int64_t)v2; // 0x3ab5aa
    *v3 = *v3 + (char)a4;
    __asm_out_134(-39, (char)v2);
    int32_t * v4 = (int32_t *)__asm_int3(); // 0x3ab5b5
    *v4 = *v4 >> 17;
    return function_ffffffffd3a31507();
}

// Address range: 0x3ab5cd - 0x3ab5e3
int64_t function_3ab5cd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3ab5cd
    unknown_ffffffffd063f9d9();
    char * v1 = (char *)(a2 - 95); // 0x3ab5d8
    bool v2; // 0x3ab5cd
    *v1 = (char)v2 - (char)(a4 / 256) + *v1;
    return 0x1e88405;
}

// Address range: 0x3ab616 - 0x3ab61b
int64_t function_3ab616(void) {
    // 0x3ab616
    return function_1c753afd();
}

// Address range: 0x3ab67e - 0x3ab67f
int64_t function_3ab67e(void) {
    // 0x3ab67e
    int64_t result; // 0x3ab67e
    return result;
}

// Address range: 0x3ab67f - 0x3ab68d
int64_t function_3ab67f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ab67f
    int64_t v1; // 0x3ab67f
    *(int32_t *)-0x1766b47ddbf6f7d6 = (int32_t)v1;
    *(int32_t *)a3 = 2 * (int32_t)v1;
    return function_3ab6ce(a1, a2, a3);
}

// Address range: 0x3ab69a - 0x3ab6ce
int64_t function_3ab69a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x3ab69c
    if (v1 != 0) {
        char * v2 = (char *)(a2 - 24); // 0x3ab69c
        *v2 = *v2 >> v1;
    }
    int64_t v3; // 0x3ab69a
    char v4 = *(char *)(2 * a2 + 0x7c812f09 + v3); // 0x3ab6a1
    unknown_ffffffffbc6129af();
    __asm_out((int16_t)((int32_t)a2 >> 31), (char)a2);
    int64_t result = unknown_4dd075c5(); // 0x3ab6bf
    int32_t * v5 = (int32_t *)((a4 & -0x10000 | 256 * (int64_t)(v4 | (char)(a4 / 256)) | 249) + 0x73b91e29); // 0x3ab6c4
    *v5 = *v5 | 0x531001e8;
    return result;
}

// Address range: 0x3ab6ce - 0x3ab6d0
int64_t function_3ab6ce(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ab6ce
    int64_t v1; // 0x3ab6ce
    return v1 & -256 | (int64_t)__asm_in_135((int16_t)a3);
}

// Address range: 0x3ab714 - 0x3ab766
int64_t function_3ab714(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a3 & 0xffffffff ^ 0xffffffe0; // 0x3ab714
    unknown_ffffffff8a307a1d();
    int64_t v3 = v2 + 256 * a4 & 0xff00 | v2 & 0xffff00ff; // 0x3ab71c
    int64_t v4 = unknown_2922ee2c(); // 0x3ab725
    char v5 = v4; // 0x3ab72b
    char v6 = a4 / 256; // 0x3ab72b
    unsigned char v7 = v5 + v6; // 0x3ab72b
    int64_t result = v4 & -256 | (int64_t)v7; // 0x3ab72b
    int32_t v8 = result; // 0x3ab72d
    __asm_out_136((int16_t)v3, v8);
    if (((v7 ^ v5) & (v7 ^ v6)) >= 0) {
        char * v9 = (char *)result; // 0x3ab732
        *v9 = -108 - (char)v2 + *v9;
        return result;
    }
    int32_t * v10 = (int32_t *)(v3 - 125); // 0x3ab75a
    *v10 = *v10 + (int32_t)v3;
    *(char *)v1 = *(char *)&v1 | v7;
    __asm_out_133(-104, v8);
    return result;
}

// Address range: 0x3ab7d7 - 0x3ab7e0
int64_t function_3ab7d7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3ab7d7
    int64_t v1; // 0x3ab7d7
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)((v2 + a4 / 256) % 256 | v2 & -256); // 0x3ab7d9
    *v3 = *v3 + (int32_t)v1;
    return function_3ab84c(a1, a2);
}

// Address range: 0x3ab7f1 - 0x3ab802
int64_t function_3ab7f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ab7f1
    unknown_10708ff7();
    int64_t v1; // 0x3ab7f1
    *(int32_t *)a2 = (int32_t)v1 - 0x17697b63;
    *(char *)(a4 + 8) = (char)a3;
    return function_3ab803(0xe896849d, a2, a3, a4, (int64_t)&g1);
}

// Address range: 0x3ab802 - 0x3ab803
int64_t function_3ab802(void) {
    // 0x3ab802
    int64_t result; // 0x3ab802
    return result;
}

// Address range: 0x3ab803 - 0x3ab818
int64_t function_3ab803(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ab803
    unknown_ffffffffe1d43c0a();
    return 0x1e88005;
}

// Address range: 0x3ab821 - 0x3ab831
int64_t function_3ab821(int64_t a1, int32_t a2, int64_t a3, int64_t a4) {
    // 0x3ab821
    *(int32_t *)((int64_t)a2 + 0x1c817a0b) = (int32_t)a4;
    int64_t v1; // 0x3ab821
    *(char *)a1 = (char)v1;
    bool v2; // 0x3ab821
    return unknown_3d3ca030((v2 ? -1 : 1) + a1);
}

// Address range: 0x3ab84c - 0x3ab857
int64_t function_3ab84c(int64_t a1, int64_t a2) {
    // 0x3ab84c
    int64_t v1; // 0x3ab84c
    uint64_t v2 = v1 + 61; // 0x3ab84c
    __asm_out_134(-24, (char)v2);
    return function_3ab821(a1, (int32_t)(v2 % 256 | v1 & 0xffffff00) + (int32_t)a2, v1, v1);
}

// Address range: 0x3ab885 - 0x3ab88c
int64_t function_3ab885(int64_t a1, int64_t a2) {
    // 0x3ab885
    int64_t v1; // 0x3ab885
    *(char *)a1 = (char)v1;
    bool v2; // 0x3ab885
    int64_t v3 = v2 ? -4 : 4; // 0x3ab886
    return function_77eeba74((v2 ? -1 : 1) + a1 + v3, v3 + a2);
}

// Address range: 0x3ab88c - 0x3ab88d
int64_t function_3ab88c(int64_t a1) {
    // 0x3ab88c
    int64_t result; // 0x3ab88c
    return result;
}

// Address range: 0x3ab8a4 - 0x3ab8a8
int64_t function_3ab8a4(int64_t a1) {
    // 0x3ab8a4
    int64_t v1; // 0x3ab8a4
    return v1 & 0xffffffff & v1;
}

// Address range: 0x3ab8ac - 0x3ab8af
int64_t function_3ab8ac(void) {
    // 0x3ab8ac
    int64_t result; // 0x3ab8ac
    return result;
}

// Address range: 0x3ab8e0 - 0x3ab8e5
int64_t function_3ab8e0(void) {
    // 0x3ab8e0
    return function_3492b998();
}

// Address range: 0x3ab960 - 0x3ab963
int64_t function_3ab960(int64_t a1) {
    // 0x3ab960
    int64_t result; // 0x3ab960
    return result;
}
