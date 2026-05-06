/*
 * Targeted RetDec C for native executable gap queue batch 314.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x10a3bf-0x10a5bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10a5bf-0x10a7bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10a7bf-0x10a9bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e64e8-0x1e66e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e66e8-0x1e68e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e68e8-0x1e6ae8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e6ce8-0x1e6ee8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x221e66-0x222066 rank=- name=- kind=- bytes=- uncovered=-
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
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint32_t __readfsdword(int64_t offset);
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
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
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

int64_t function_10a344();
int64_t function_10a3bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10a4b8(void);
int64_t function_10a5c2(void);
int64_t function_10a5e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10a5f2(int64_t a1);
int64_t function_10a613(void);
int64_t function_10a62b(int64_t a1);
int64_t function_10a65d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10a66d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10a6b5(int64_t a1);
int64_t function_10a74b(int64_t a1);
int64_t function_10a77c(void);
int64_t function_10a7a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_10a7c2(void);
int64_t function_10a83e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10a85a(void);
int64_t function_10a862(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10a877(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10a8ae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_10a8ed(void);
int64_t function_10a913(int64_t a1, int64_t a2);
int64_t function_10a92a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10a976(void);
int64_t function_1e64e8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1e6580(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e6650(void);
int64_t function_1e66f3(int64_t a1);
int64_t function_1e673c(void);
int64_t function_1e676a(void);
int64_t function_1e679a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e67f6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e680c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e683e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e687b(void);
int64_t function_1e688b(int64_t a1, int64_t a2);
int64_t function_1e6898(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e68aa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e68d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e693c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e6946(int64_t a1);
int64_t function_1e695f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e6990(void);
int64_t function_1e6996(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1e69b7(void);
int64_t function_1e6a1f(int64_t a1, int64_t a2);
int64_t function_1e6a30(int64_t a1);
int64_t function_1e6ce8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e6d0a(void);
int64_t function_1e6d27(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1e6daa(void);
int64_t function_1e6dcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e6def(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e6e31(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e6e64(void);
int64_t function_1e6ecc(void);
int64_t function_1f9a133();
int64_t function_221e66(void);
int64_t function_221e71(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_222005(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22200f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d18abce();
int64_t function_cdc60();
int64_t function_ffffffff9035a334();
int64_t function_ffffffffab1fa735();
int64_t function_ffffffffe8c95c99();
int64_t unknown_2067599();
int64_t unknown_283d35cd();
int64_t unknown_2e8189c0();
int64_t unknown_381f1838();
int64_t unknown_41152e28();
int64_t unknown_44d9834e();
int64_t unknown_a0f91e9();
int64_t unknown_ffffffff82605343();
int64_t unknown_ffffffff9e1dd8b4();
int64_t unknown_ffffffffc144ee0c();
int64_t unknown_ffffffffc5064222();
int64_t unknown_ffffffffd8c36a45();
int64_t unknown_ffffffffdd5198fd();
int64_t unknown_ffffffffe836bad5();

// Address range: 0x10a3bf - 0x10a444
int64_t function_10a3bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10a3bf
    bool v1; // 0x10a3bf
    if (!v1 && !v1) {
        function_10a344();
    }
    uint64_t v2 = (v1 ? 0xffffffff : 1) + a1; // 0x10a3c8
    int64_t v3; // 0x10a3bf
    *(char *)0x3fc90ad1 = *(char *)0x3fc90ad1 + (char)(v3 / 256);
    int64_t result = v2 & 0xffffffff; // 0x10a3d0
    char v4 = v2;
    char v5 = *(char *)*(int64_t *)(v3 + 8) - v4; // 0x10a3d3
    if (v5 >= 0) {
        // 0x10a440
        __asm_out(-24, v4);
        return result;
    }
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x10a3d3
    *(int64_t *)((int64_t)(45 * *(int32_t *)(result + 0x1e8a300)) - 8) = a3;
    if (v6 % 2 == 0) {
        // 0x10a3e2
        return v2 & 0xffffff00 | (int64_t)__asm_in(0);
    }
    int32_t * v7 = (int32_t *)(v3 + 0x1557a7b1); // 0x10a400
    *v7 = *v7 + (int32_t)v2;
    char * v8 = (char *)(result + 90); // 0x10a406
    *v8 = *v8 ^ (char)(v2 / 256);
    return v3 & 0xffffffff;
}

// Address range: 0x10a4b8 - 0x10a4b9
int64_t function_10a4b8(void) {
    // 0x10a4b8
    int64_t result; // 0x10a4b8
    return result;
}

// Address range: 0x10a5c2 - 0x10a5c5
int64_t function_10a5c2(void) {
    // 0x10a5c2
    int64_t result; // 0x10a5c2
    return result;
}

// Address range: 0x10a5e2 - 0x10a5ef
int64_t function_10a5e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10a5e2
    int64_t v1; // 0x10a5e2
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a3;
    bool v2; // 0x10a5e2
    int64_t result = __asm_int3((v2 ? -1 : 1) + a1); // 0x10a5ea
    int64_t v3; // 0x10a5e2
    *(char *)a3 = *(char *)&v3 + (char)a4;
    return result;
}

// Address range: 0x10a5f2 - 0x10a5f5
int64_t function_10a5f2(int64_t a1) {
    // 0x10a5f2
    int64_t result; // 0x10a5f2
    return result;
}

// Address range: 0x10a613 - 0x10a618
int64_t function_10a613(void) {
    // 0x10a613
    return function_ffffffffe8c95c99();
}

// Address range: 0x10a62b - 0x10a62e
int64_t function_10a62b(int64_t a1) {
    // 0x10a62b
    int64_t result; // 0x10a62b
    return result;
}

// Address range: 0x10a65d - 0x10a662
int64_t function_10a65d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10a65d
    int64_t result; // 0x10a65d
    return result;
}

// Address range: 0x10a66d - 0x10a680
int64_t function_10a66d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 - 0x6d3cfe18); // 0x10a66d
    int64_t result; // 0x10a66d
    *v1 = *v1 & (char)result;
    return result;
}

// Address range: 0x10a6b5 - 0x10a6c6
int64_t function_10a6b5(int64_t a1) {
    // 0x10a6b5
    int64_t v1; // 0x10a6b5
    *(char *)a1 = (char)v1;
    bool v2; // 0x10a6b5
    return function_2d18abce((v2 ? -1 : 1) + a1);
}

// Address range: 0x10a74b - 0x10a74e
int64_t function_10a74b(int64_t a1) {
    // 0x10a74b
    int64_t result; // 0x10a74b
    return result;
}

// Address range: 0x10a77c - 0x10a781
int64_t function_10a77c(void) {
    // 0x10a77c
    return function_1f9a133();
}

// Address range: 0x10a7a3 - 0x10a7b8
int64_t function_10a7a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x10a7a3
    int64_t v1; // 0x10a7a3
    char * v2 = (char *)(v1 + 0x4701e89e); // 0x10a7a9
    unsigned char v3 = *v2; // 0x10a7a9
    unsigned char v4 = (char)(a3 / 256); // 0x10a7a9
    *v2 = v3 - v4;
    int64_t result; // 0x10a7a3
    char v5 = *(char *)&result; // 0x10a7b2
    *(char *)result = v5 + (char)a4 + (char)(v3 < v4);
    return result;
}

// Address range: 0x10a7c2 - 0x10a7c3
int64_t function_10a7c2(void) {
    // 0x10a7c2
    int64_t result; // 0x10a7c2
    return result;
}

// Address range: 0x10a83e - 0x10a845
int64_t function_10a83e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10a83e
    int64_t result; // 0x10a83e
    int64_t v1; // 0x10a83e
    if (a4 != 1 && (char)v1 != (char)(v1 / 256)) {
        result = function_10a7c2();
    }
    // 0x10a842
    return result;
}

// Address range: 0x10a85a - 0x10a85b
int64_t function_10a85a(void) {
    // 0x10a85a
    int64_t result; // 0x10a85a
    return result;
}

// Address range: 0x10a862 - 0x10a877
int64_t function_10a862(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10a862
    int64_t result; // 0x10a862
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x10a877 - 0x10a883
int64_t function_10a877(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10a877
    int64_t result; // 0x10a877
    char * v1 = (char *)(result - 0x18fec300); // 0x10a877
    *v1 = *v1 & (char)result;
    int32_t * v2 = (int32_t *)(result + 10); // 0x10a87f
    *v2 = *v2 / 2;
    return result;
}

// Address range: 0x10a8ae - 0x10a8dd
int64_t function_10a8ae(int64_t a1, int64_t a2, int64_t a3) {
    // 0x10a8ae
    unknown_ffffffff9e1dd8b4();
    int64_t v1; // 0x10a8ae
    __asm_outsb((int16_t)a3, (char)v1);
    int64_t v2 = a1; // 0x10a8c1
    int64_t v3; // 0x10a8ae
    uint32_t v4 = (int32_t)v3 % 32; // 0x10a8cb
    int32_t * v5; // 0x10a8cb
    if (v4 != 0) {
        v5 = (int32_t *)v3;
        *v5 = *v5 << v4;
    }
    bool v6; // 0x10a8ae
    v2 += (v6 ? -4 : 4);
    uint32_t result = (int32_t)unknown_ffffffffe836bad5(v2) + 0x50e5d690; // 0x10a8d4
    int64_t v7 = v3 - 1; // 0x10a8d9
    while (v7 != 0 && result != 0) {
        int64_t v8 = v7;
        v4 = (int32_t)v8 % 32;
        if (v4 != 0) {
            v5 = (int32_t *)v8;
            *v5 = *v5 << v4;
        }
        v2 += (v6 ? -4 : 4);
        result = (int32_t)unknown_ffffffffe836bad5(v2) + 0x50e5d690;
        v7 = v8 - 1;
    }
    // 0x10a8db
    return result;
}

// Address range: 0x10a8ed - 0x10a8f1
int64_t function_10a8ed(void) {
    // 0x10a8ed
    int64_t v1; // 0x10a8ed
    return v1 & -256 | (int64_t)__asm_in(-32);
}

// Address range: 0x10a913 - 0x10a92a
int64_t function_10a913(int64_t a1, int64_t a2) {
    // 0x10a913
    int64_t v1; // 0x10a913
    *(char *)0x3aa9e3c575a06846 = (char)v1;
    return 0x10000 * (int32_t)unknown_ffffffffc5064222() >> 16;
}

// Address range: 0x10a92a - 0x10a96b
int64_t function_10a92a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10a92a
    int64_t v1; // 0x10a92a
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 0x60d64a03); // 0x10a92a
    uint32_t v4 = *v3; // 0x10a92a
    uint32_t v5 = (int32_t)a3; // 0x10a92a
    int32_t v6 = v4 + v5; // 0x10a92a
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x10a92a
    *v3 = v6;
    int64_t v8 = v6 < v4; // 0x10a930
    int32_t * v9 = (int32_t *)((v2 & -0x10000 | (v2 + 10 + v8) % 256 | 256 * (64 * (int64_t)(v6 == 0) | v8 | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v4 % 16 + v5 % 16 > 15) | 4 * (int64_t)(v7 % 2 == 0)) | 512) - 0x7b2fb9f6); // 0x10a935
    *v9 = *v9 + (int32_t)a4;
    int64_t v10 = a4 & -256; // 0x10a93b
    int64_t v11 = v10 | 165; // 0x10a93b
    int64_t v12 = unknown_ffffffff82605343(); // 0x10a93d
    char * v13 = (char *)(8 * v12 + (v10 | 237)); // 0x10a942
    *v13 = *v13 ^ 53;
    bool v14; // 0x10a92a
    int64_t v15 = (v14 ? -4 : 4) + a1; // 0x10a947
    int64_t v16 = unknown_44d9834e(v15); // 0x10a948
    int32_t * v17 = (int32_t *)(v11 + 0x48050800); // 0x10a94d
    int64_t v18; // 0x10a92a
    *v17 = *v17 - (*(int32_t *)&v18 > (int32_t)v12 ? 0x1e8d516 : 0x1e8d515);
    uint64_t v19 = v11 - v1; // 0x10a957
    char * v20 = (char *)v16; // 0x10a959
    char v21 = v16; // 0x10a959
    char v22 = ((int32_t)v11 < (int32_t)v1 ? 65 : 64) + v21 + *v20; // 0x10a95b
    *v20 = v22;
    unsigned char v23 = v22 + v21; // 0x10a95f
    int64_t v24 = v16 & -256; // 0x10a95f
    *(int32_t *)v15 = (int32_t)(v24 | (int64_t)v23);
    unsigned char v25 = v23 + (char)(v19 / 256); // 0x10a962
    int32_t * v26 = (int32_t *)(v19 & 0xffffffff); // 0x10a964
    *v26 = (int32_t)v1 + (int32_t)a2 + *v26;
    __asm_out(-30, v25);
    return v24 | (int64_t)v25;
}

// Address range: 0x10a976 - 0x10a979
int64_t function_10a976(void) {
    // 0x10a976
    int64_t result; // 0x10a976
    return result;
}

// Address range: 0x1e64e8 - 0x1e653a
int64_t function_1e64e8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int3_t v3; // 0x1e64e8
    float80_t v4 = __frontend_reg_load_fpr(v3); // 0x1e64e8
    int64_t v5; // 0x1e64e8
    __frontend_reg_store_fpr(v3, v4 / (float80_t)*(float64_t *)(v5 + 19));
    int64_t v6; // 0x1e64e8
    bool v7; // 0x1e64e8
    if (!v7) {
        int32_t * v8 = (int32_t *)(4 * a2 + 71 + v5); // 0x1e64f0
        *v8 = *v8 + (int32_t)a2;
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v5;
        int64_t v9 = unknown_ffffffffdd5198fd(); // 0x1e64f6
        *(char *)0xd490cb572d96e70 = (char)v9;
        v1 = v9 & 0xffffffff;
        unknown_ffffffffc144ee0c();
        char * v10 = (char *)(a2 - 0x4afe1741); // 0x1e6512
        unsigned char v11 = *v10; // 0x1e6512
        *v10 = v11 / 2 | 128 * v11;
        float64_t v12 = *(float64_t *)((int64_t)(30 * *(int32_t *)(v2 - 0x20c7320c)) + 15); // 0x1e651a
        __frontend_reg_store_fpr(v3 - 1, (float80_t)v12);
        v6 = unknown_41152e28();
    }
    uint32_t v13 = (int32_t)a4 % 32; // 0x1e652c
    if (v13 != 0) {
        int32_t * v14 = (int32_t *)(a4 + 0x18df0cc7); // 0x1e652c
        uint32_t v15 = *v14; // 0x1e652c
        *v14 = v15 << v13 | (int32_t)((int64_t)v15 >> (int64_t)(33 - v13)) | (int32_t)((int32_t)v6 > 0x56a78fb7) << v13 - 1;
    }
    int64_t v16 = v6 + 0xa9587048; // 0x1e6527
    int64_t result = (v16 + a4 / 256) % 256 | v16 & 0xffffff00; // 0x1e6532
    int32_t * v17 = (int32_t *)(v5 + 7 + v2); // 0x1e6534
    *v17 = *v17 + (int32_t)result;
    *(int32_t *)v2 = *(int32_t *)&v2 + (int32_t)v1;
    return result;
}

// Address range: 0x1e6580 - 0x1e65bf
int64_t function_1e6580(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e6580
    int64_t v1; // 0x1e6580
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x1e6580
    int64_t v4 = v3 == 0 ? v2 : (int64_t)((int32_t)v2 << v3);
    unknown_ffffffffd8c36a45();
    int64_t v5 = unknown_2067599(); // 0x1e6593
    *(int32_t *)a2 = (int32_t)a2 + (int32_t)a1;
    *(char *)a1 = ((char)v5 | -43) - 95;
    char * v6 = (char *)(a4 + 0x58fd001a); // 0x1e65b0
    *v6 = *v6 - 1;
    int64_t result = *(int64_t *)(v4 + 8); // 0x1e65b6
    *(char *)a3 = (char)result;
    return result;
}

// Address range: 0x1e6650 - 0x1e6653
int64_t function_1e6650(void) {
    // 0x1e6650
    int64_t result; // 0x1e6650
    return result;
}

// Address range: 0x1e66f3 - 0x1e66f4
int64_t function_1e66f3(int64_t a1) {
    // 0x1e66f3
    int64_t result; // 0x1e66f3
    return result;
}

// Address range: 0x1e673c - 0x1e673f
int64_t function_1e673c(void) {
    // 0x1e673c
    int64_t result; // 0x1e673c
    return result;
}

// Address range: 0x1e676a - 0x1e676b
int64_t function_1e676a(void) {
    // 0x1e676a
    int64_t result; // 0x1e676a
    return result;
}

// Address range: 0x1e679a - 0x1e67b0
int64_t function_1e679a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e679a
    return function_1e676a();
}

// Address range: 0x1e67f6 - 0x1e680a
int64_t function_1e67f6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e67f6
    int64_t v1; // 0x1e67f6
    *(char *)a1 = (char)v1;
    return function_1e683e(v1 & 0xffffffff, a2, 0x1e8a64f, v1);
}

// Address range: 0x1e680c - 0x1e683e
int64_t function_1e680c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e680c
    int64_t v1; // 0x1e680c
    bool v2; // 0x1e680c
    if (!v2) {
        v1 = function_1e688b(a1, a2);
    }
    // 0x1e680e
    int64_t v3; // 0x1e680c
    *(char *)(4 * a4 - 24 + v3) = (char)(v1 / 256);
    uint32_t v4 = (int32_t)v3; // 0x1e6812
    uint32_t v5 = (int32_t)a4; // 0x1e6812
    uint32_t v6 = v4 + v5; // 0x1e6812
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x1e6812
    *(int64_t *)((int64_t)v6 - 8) = 64 * (int64_t)(v6 == 0) | (int64_t)(v6 < v4) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v4 % 16 + v5 % 16 > 15) | 2048 * (int64_t)(((v6 ^ v4) & (v6 ^ v5)) < 0) | 4 * (int64_t)(v7 % 2 == 0) | 0x4000 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 2;
    *(int16_t *)(a3 - 118) = (int16_t)v3;
    int64_t v8 = __asm_hlt(); // 0x1e6820
    int64_t v9 = (int64_t)((int32_t)a3 - *(int32_t *)(a2 - 24)); // 0x1e6823
    int32_t * v10 = (int32_t *)(v8 - 71); // 0x1e6826
    *v10 = *v10 + (int32_t)a2;
    char * v11 = (char *)v9; // 0x1e6829
    *v11 = *v11 + (char)v8;
    char * v12 = (char *)(a2 - 0x4b9d6cfd + v9); // 0x1e682b
    *v12 = *v12 | (char)(v3 / 256);
    return unknown_381f1838() & 0xffffffff ^ 0x7201e8af;
}

// Address range: 0x1e683e - 0x1e6849
int64_t function_1e683e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e683e
    int64_t v1; // 0x1e683e
    uint64_t v2 = v1;
    int64_t v3; // bp-8, 0x1e683e
    *(int32_t *)a3 = (int32_t)(int64_t)&v3 + (int32_t)v1;
    return v2 / 2 % 128 | v2 & -256;
}

// Address range: 0x1e687b - 0x1e687d
int64_t function_1e687b(void) {
    // 0x1e687b
    int64_t v1; // 0x1e687b
    return function_1e68d9(v1, v1, v1, v1);
}

// Address range: 0x1e688b - 0x1e688e
int64_t function_1e688b(int64_t a1, int64_t a2) {
    // 0x1e688b
    int64_t v1; // 0x1e688b
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = (int32_t)v1; // 0x1e688b
    int32_t v4 = v3 + v2; // 0x1e688b
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x1e688b
    *(int32_t *)a2 = v4;
    return v1 & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v4 < v2) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v3 % 16 + v2 % 16 > 15) | 4 * (int64_t)(v5 % 2 == 0)) | 512;
}

// Address range: 0x1e6898 - 0x1e68a1
int64_t function_1e6898(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e6898
    int64_t v1; // 0x1e6898
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x1e6898
    *(char *)a3 = *(char *)&v2 + (char)v1;
    bool v3; // 0x1e6898
    return function_ffffffff9035a334((v3 ? -4 : 4) + a1);
}

// Address range: 0x1e68aa - 0x1e68d1
int64_t function_1e68aa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e68aa
    int64_t v1; // 0x1e68aa
    *(int32_t *)a3 = 2 * (int32_t)v1;
    int32_t v2 = *(int32_t *)(a2 + 0x3a04a881); // 0x1e68ac
    int64_t v3 = v1 + 0xc38201e8; // 0x1e68b5
    *(int32_t *)(v3 & 0xffffffff) = (int32_t)v3;
    int64_t v4 = v3 & 0xffffff00 | (v1 + 92) % 256; // 0x1e68be
    *(int32_t *)v4 = (int32_t)v4;
    int64_t v5 = unknown_283d35cd(); // 0x1e68c7
    char * v6 = (char *)((int64_t)(v2 | (int32_t)v1) - 40); // 0x1e68cc
    *v6 = *v6 + (char)((int64_t)&g2 >> 8);
    return v5 ^ 216;
}

// Address range: 0x1e68d9 - 0x1e68ed
int64_t function_1e68d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 53); // 0x1e68da
    bool v2; // 0x1e68d9
    *v1 = *v1 + (int32_t)a3 + (int32_t)(bool)v2;
    __asm_wait();
    int32_t v3 = __asm_in_133(-40); // 0x1e68df
    int32_t * v4 = (int32_t *)(int64_t)v3; // 0x1e68e1
    *v4 = *v4 | v3;
    int64_t v5 = unknown_a0f91e9(); // 0x1e68e3
    char v6 = (char)v5 + 29; // 0x1e68e8
    int64_t result = v5 & -256 | (int64_t)v6; // 0x1e68ea
    if (v6 < 1) {
        result = function_1e68aa(a1, a2, a3);
    }
    // 0x1e68ec
    return result;
}

// Address range: 0x1e693c - 0x1e6945
int64_t function_1e693c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 14); // 0x1e693e
    int64_t v2; // 0x1e693c
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x1e693c
    *(int32_t *)a2 = *(int32_t *)&v3 | -50;
    return 2 * v2 & 0xffffffff;
}

// Address range: 0x1e6946 - 0x1e694a
int64_t function_1e6946(int64_t a1) {
    // 0x1e6946
    int64_t result; // 0x1e6946
    return result;
}

// Address range: 0x1e695f - 0x1e696b
int64_t function_1e695f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 & -0xff01 | (int64_t)&g1; // 0x1e695f
    __asm_int(-45);
    int64_t v2; // 0x1e695f
    char * v3 = (char *)(v2 - 36);
    *v3 = *v3 + (char)v1;
    uint32_t v4 = (int32_t)v1 % 32; // 0x1e6968
    int64_t result; // 0x1e695f
    if (v4 != 0) {
        uint32_t v5 = *(int32_t *)&result; // 0x1e6968
        *(int32_t *)result = v5 >> 32 - v4 | v5 << v4;
    }
    return result;
}

// Address range: 0x1e6990 - 0x1e6993
int64_t function_1e6990(void) {
    // 0x1e6990
    int64_t result; // 0x1e6990
    return result;
}

// Address range: 0x1e6996 - 0x1e69a8
int64_t function_1e6996(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1e6996
    int64_t result; // 0x1e6996
    char * v1 = (char *)(result - 0x1b4001f6); // 0x1e6996
    bool v2; // 0x1e6996
    *v1 = (char)v2 + (char)a4 + *v1;
    return result;
}

// Address range: 0x1e69b7 - 0x1e69c4
int64_t function_1e69b7(void) {
    // 0x1e69b7
    unknown_2e8189c0();
    return function_ffffffffab1fa735();
}

// Address range: 0x1e6a1f - 0x1e6a26
int64_t function_1e6a1f(int64_t a1, int64_t a2) {
    // 0x1e6a1f
    int64_t result; // 0x1e6a1f
    char * v1 = (char *)(result - 42); // 0x1e6a1f
    *v1 = *v1 + (char)(result / 256);
    int32_t * v2 = (int32_t *)(a1 - 73); // 0x1e6a22
    *v2 = *v2 - (int32_t)result;
    return result;
}

// Address range: 0x1e6a30 - 0x1e6a37
int64_t function_1e6a30(int64_t a1) {
    // 0x1e6a30
    int64_t v1; // 0x1e6a30
    *(char *)v1 = (char)(v1 / 256);
    return 256 * v1 & 0xff00 | v1 & -0xff01;
}

// Address range: 0x1e6ce8 - 0x1e6d04
int64_t function_1e6ce8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e6ce8
    int64_t result; // 0x1e6ce8
    uint32_t v1 = (int32_t)result;
    *(int32_t *)result = 2 * v1;
    int32_t * v2 = (int32_t *)(a3 - 0x713ff104); // 0x1e6cf8
    *v2 = *v2 + 0x29ce5c22 + (int32_t)(v1 < 0x1fbef701);
    return result;
}

// Address range: 0x1e6d0a - 0x1e6d0d
int64_t function_1e6d0a(void) {
    // 0x1e6d0a
    int64_t result; // 0x1e6d0a
    return result;
}

// Address range: 0x1e6d27 - 0x1e6d5f
int64_t function_1e6d27(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1e6d27
    int64_t result; // 0x1e6d27
    __asm_out(-44, (char)result);
    bool v1; // 0x1e6d27
    if (!v1) {
        // 0x1e6d56
        return a4 & 0xffffffff;
    }
    char * v2 = (char *)((v1 ? -1 : 1) + a5); // 0x1e6d32
    *v2 = *v2 + (char)(a3 / 256);
    return result;
}

// Address range: 0x1e6daa - 0x1e6dab
int64_t function_1e6daa(void) {
    // 0x1e6daa
    int64_t result; // 0x1e6daa
    return result;
}

// Address range: 0x1e6dcd - 0x1e6def
int64_t function_1e6dcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e6dcd
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1 = a4 - 1; // 0x1e6dd2
    if (v1 == 0) {
        function_1e6daa();
    }
    // 0x1e6dd4
    *(int32_t *)(a2 + 33) = (int32_t)v1;
    int64_t v2; // 0x1e6dcd
    int32_t * v3 = (int32_t *)((v2 & 0xffffff19 | 230) + 0x1c01e8ff); // 0x1e6de1
    *v3 = *v3 + (int32_t)a2;
    return v2 % 256 | v2 & 0xffffff00;
}

// Address range: 0x1e6def - 0x1e6dfc
int64_t function_1e6def(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e6def
    int64_t result; // 0x1e6def
    char * v1 = (char *)(a4 + 61 + 4 * result); // 0x1e6df1
    *v1 = *v1 + (char)result;
    int32_t * v2 = (int32_t *)(a1 + 0x3a0400f5); // 0x1e6df5
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x1e6e31 - 0x1e6e4c
int64_t function_1e6e31(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 - 1; // 0x1e6e31
    int64_t result; // 0x1e6e31
    bool v2; // 0x1e6e31
    if (v1 != 0 == v2) {
        // 0x1e6e4b
        return result;
    }
    int32_t * v3 = (int32_t *)v1; // 0x1e6e33
    *v3 = 256 * *v3;
    int32_t * v4 = (int32_t *)(8 * v1 + 25 + result); // 0x1e6e36
    *v4 = *v4 + (int32_t)result;
    return result;
}

// Address range: 0x1e6e64 - 0x1e6e67
int64_t function_1e6e64(void) {
    // 0x1e6e64
    int64_t result; // 0x1e6e64
    return result;
}

// Address range: 0x1e6ecc - 0x1e6ee5
int64_t function_1e6ecc(void) {
    uint32_t v1 = *(int32_t *)-0x3f2cc297d48fdfd; // 0x1e6ece
    int64_t v2; // 0x1e6ecc
    uint32_t result = v1 + (int32_t)v2; // 0x1e6edd
    int32_t v3 = *(int32_t *)0x3d006b52; // 0x1e6edf
    *(int32_t *)0x3d006b52 = v3 - (int32_t)v2 + (int32_t)(result < v1);
    return result;
}

// Address range: 0x221e66 - 0x221e71
int64_t function_221e66(void) {
    // 0x221e66
    int64_t v1; // 0x221e66
    return function_cdc60(v1, v1, v1, v1);
}

// Address range: 0x221e71 - 0x221fb9
int64_t function_221e71(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x221e71
    int64_t v1; // bp-32, 0x221e71
    int64_t v2 = (int64_t)&v1; // 0x221ef1
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x221f09
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x221f09
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x221f0d
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x221f10
    *v6 = v3;
    int64_t v7 = *(int64_t *)(v2 + 16); // 0x221f1f
    *v6 = v7;
    *v4 = a4;
    *v5 = v3;
    int64_t v8 = v2 + 8; // 0x221f46
    *(int64_t *)v8 = v3;
    *v5 = a2;
    *v4 = v7;
    *(int64_t *)(v2 + 24) = v7;
    *v4 = v1;
    *v5 = v2;
    *v4 = v1;
    *v5 = *v4;
    *v4 = v8;
    return function_cdc60(a1, *v5, a3, *v4);
}

// Address range: 0x222005 - 0x22200c
int64_t function_222005(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x222005
    int64_t v1; // 0x222005
    return v1 ^ 36;
}

// Address range: 0x22200f - 0x222015
int64_t function_22200f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22200f
    return __asm_int1(a1, a2, a3, a4);
}
