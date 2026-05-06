/*
 * Targeted RetDec C for native executable gap queue batch 270.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x147d13-0x147f13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x147f13-0x148113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x148113-0x148313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x148313-0x148513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x148513-0x148713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x313ebb-0x3140bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3140bb-0x3142bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3142bb-0x3144bb rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
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

int64_t function_147d13(void);
int64_t function_147d2b(int64_t a1, int64_t a2);
int64_t function_147d81(int64_t a1);
int64_t function_147daf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_147df8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_147e61(void);
int64_t function_147e68(int64_t a1);
int64_t function_147e71(int64_t a1, int64_t a2);
int64_t function_147e98(void);
int64_t function_147eb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_147ed0(void);
int64_t function_147ef3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_147f50(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_147fe6(void);
int64_t function_147fed(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1480a4(int64_t a1);
int64_t function_1480d3(int64_t a1);
int64_t function_1480d5(int64_t a1);
int64_t function_14818d(void);
int64_t function_1481a6(void);
int64_t function_1481b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14823b(void);
int64_t function_148258(void);
int64_t function_1482f2(void);
int64_t function_148353(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_148481(void);
int64_t function_14849b(int64_t a1);
int64_t function_14852c(int64_t a1);
int64_t function_14856f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14859e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1486f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_219415c();
int64_t function_21a2626();
int64_t function_2347fe52();
int64_t function_313ebb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_313f58(void);
int64_t function_313f5f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_313fd1(void);
int64_t function_314017(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31405a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_314088(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_3140ba(void);
int64_t function_3140ea(int64_t a1, int64_t a2, int64_t a3);
int64_t function_314118(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3141b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31427e(void);
int64_t function_31430c(int64_t a1);
int64_t function_31433e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_314354(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_314357(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_314374(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_314426(int64_t a1, int64_t a2, int64_t a3);
int64_t function_31446a(int64_t a1);
int64_t function_3c15bffa();
int64_t function_93328c0();
int64_t function_ffffffff85e07f00();
int64_t function_ffffffff9715c40a();
int64_t function_ffffffff9a87626f();
int64_t function_ffffffffb1da07ce();
int64_t function_ffffffffe8ae0e3e();
int64_t unknown_15185f1();
int64_t unknown_2b96a53d();
int64_t unknown_2bd537ff();
int64_t unknown_34345666();
int64_t unknown_40c3b580();
int64_t unknown_5b334361();
int64_t unknown_6036839d();
int64_t unknown_6e2fd120();
int64_t unknown_ffffffff8bbe2a2b();
int64_t unknown_ffffffff9ba60122();
int64_t unknown_ffffffff9f2c0fc4();
int64_t unknown_ffffffffa2329b7f();
int64_t unknown_ffffffffae1f2e76();
int64_t unknown_ffffffffb3f6ca7a();
int64_t unknown_ffffffffba795303();
int64_t unknown_ffffffffc7739e0b();
int64_t unknown_ffffffffce966a60();

// Address range: 0x147d13 - 0x147d14
int64_t function_147d13(void) {
    // 0x147d13
    int64_t result; // 0x147d13
    return result;
}

// Address range: 0x147d2b - 0x147d42
int64_t function_147d2b(int64_t a1, int64_t a2) {
    // 0x147d2b
    int64_t v1; // 0x147d2b
    *(char *)0x1a0e10d9a566503a = (char)v1;
    int32_t * v2 = (int32_t *)(v1 + 50); // 0x147d34
    *v2 = *v2 & (int32_t)a2;
    return unknown_2b96a53d() & -0xff01 | (int64_t)&g3;
}

// Address range: 0x147d81 - 0x147d8c
int64_t function_147d81(int64_t a1) {
    // 0x147d81
    int64_t result; // 0x147d81
    return result;
}

// Address range: 0x147daf - 0x147db8
int64_t function_147daf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 9); // 0x147daf
    int64_t v2; // 0x147daf
    *v1 = *v1 + (int32_t)v2;
    __asm_out(117, (int32_t)v2);
    return v2 & -256 | (int64_t)__asm_in(37);
}

// Address range: 0x147df8 - 0x147e61
int64_t function_147df8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x147df8
    bool v1; // 0x147df8
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x147df8
    int64_t v3 = unknown_2bd537ff(v2); // 0x147df9
    uint32_t v4 = -0x17154e19 * *(int32_t *)(v2 - 44); // 0x147e00
    int32_t * v5 = (int32_t *)(((v3 + 58) % 256 | v3 & -256) + 0x6629a803); // 0x147e07
    *v5 = *v5 + (int32_t)a3;
    int32_t * v6 = (int32_t *)(v2 - 119); // 0x147e12
    *v6 = *v6 + v4;
    char * v7 = (char *)(v2 - 116); // 0x147e15
    *v7 = *v7 - 37;
    unknown_ffffffff9ba60122();
    __asm_int3();
    int64_t v8; // 0x147df8
    int32_t v9 = *(int32_t *)(v2 + 34) | (int32_t)v8; // 0x147e22
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x147e22
    int64_t v11 = unknown_ffffffff8bbe2a2b(); // 0x147e25
    uint32_t v12 = 3 * v9; // 0x147e2a
    int64_t v13 = v12; // 0x147e2a
    unsigned char v14 = *(char *)-0x1721e7c0; // 0x147e2d
    char v15 = v14 / 128; // 0x147e2d
    *(char *)-0x1721e7c0 = v15 | 2 * v14;
    int64_t v16 = v11 & -0xff01 | 256 * (128 * (int64_t)(v9 < 0) | 64 * (int64_t)(v9 == 0) | (int64_t)(v15 != 0) | 4 * (int64_t)(v10 % 2 == 0)) | 512; // 0x147e34
    int32_t * v17 = (int32_t *)(4 * v13 + (int64_t)v4); // 0x147e35
    *v17 = v9;
    int32_t * v18 = (int32_t *)v16; // 0x147e3e
    *v18 = *v18 + v12;
    int64_t v19; // 0x147df8
    *(char *)a4 = *(char *)&v19 | (char)a4;
    int64_t v20 = *v17 > -1 - (int32_t)a2 ? 0x161991 : 0x161990; // 0x147e49
    int64_t v21 = (v16 & 0xffffff00 | (v11 + 226) % 256) - v20; // 0x147e49
    char * v22 = (char *)(v21 & 0xffffffff); // 0x147e4e
    *v22 = *v22 ^ -128;
    int32_t v23 = *(int32_t *)v13 | (int32_t)v21; // 0x147e51
    int32_t * v24 = (int32_t *)(v13 + 1); // 0x147e55
    *v24 = *v24 + v4;
    int32_t v25 = *(int32_t *)&v19; // 0x147e58
    *(int32_t *)a4 = v25 - ((v23 + (int32_t)(a4 / 256)) % 256 | v23 & -256);
    return function_ffffffff9a87626f();
}

// Address range: 0x147e61 - 0x147e67
int64_t function_147e61(void) {
    // 0x147e61
    return function_ffffffff85e07f00();
}

// Address range: 0x147e68 - 0x147e6d
int64_t function_147e68(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 85); // 0x147e68
    int64_t v2; // 0x147e68
    *v1 = *v1 + (int32_t)v2;
    return function_147e98();
}

// Address range: 0x147e71 - 0x147e88
int64_t function_147e71(int64_t a1, int64_t a2) {
    int64_t result = (int64_t)(*(int32_t *)0x637bfaae01e8685a - *(int32_t *)(a1 - 115)); // 0x147e7b
    int64_t v1; // 0x147e71
    int32_t * v2 = (int32_t *)(v1 + 50 + result); // 0x147e7e
    *v2 = *v2 - 0x6101e80a;
    return result;
}

// Address range: 0x147e98 - 0x147e9a
int64_t function_147e98(void) {
    // 0x147e98
    int64_t v1; // 0x147e98
    return v1 & 0xffffffff & v1;
}

// Address range: 0x147eb6 - 0x147ebe
int64_t function_147eb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x147eb6
    int64_t result; // 0x147eb6
    return result;
}

// Address range: 0x147ed0 - 0x147ed5
int64_t function_147ed0(void) {
    // 0x147ed0
    return function_ffffffffb1da07ce();
}

// Address range: 0x147ef3 - 0x147f03
int64_t function_147ef3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x147ef3
    int64_t v1; // 0x147ef3
    *(int32_t *)a1 = (int32_t)(v1 ^ v1);
    int64_t v2; // 0x147ef3
    *(char *)a3 = *(char *)&v2 ^ (char)(v1 / 256);
    return unknown_ffffffffba795303();
}

// Address range: 0x147f50 - 0x147fe5
int64_t function_147f50(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x147f50
    int64_t v1; // 0x147f50
    int64_t v2 = v1;
    int64_t v3 = a4;
    int64_t v4 = a3;
    bool v5; // 0x147f50
    uint64_t v6 = v1 + a4 / 256 + (int64_t)v5; // 0x147f50
    int64_t v7 = v6 % 256 | v1 & -256; // 0x147f50
    int32_t * v8 = (int32_t *)(v2 - 0xf0ef59d + 2 * v2); // 0x147f52
    uint32_t v9 = *v8; // 0x147f52
    uint32_t v10 = v9 + (int32_t)v1; // 0x147f52
    *v8 = v10;
    int32_t v11 = __asm_insd((int16_t)a3); // 0x147f59
    int32_t * v12 = (int32_t *)a1; // 0x147f59
    *v12 = v11;
    char * v13 = (char *)v7; // 0x147f5a
    *v13 = (char)(v10 < v9) - (char)v6 + *v13;
    uint32_t v14 = (int32_t)v7; // 0x147f5c
    uint32_t v15 = v14 + 0xe03cee2; // 0x147f5c
    if (((v15 ^ v14) & (v14 ^ -0x80000000)) < 0) {
        int64_t result = __asm_int3(); // 0x147fac
        int32_t * v16 = (int32_t *)(v1 + 0x6e013d00); // 0x147fad
        *v16 = *v16 ^ (int32_t)a2;
        return result;
    }
    int64_t result2 = v15; // 0x147f5c
    if (v14 < 0xf1fc311e) {
        // 0x147fa4
        *(char *)(v1 - 0x79aff738) = (char)v3;
        return result2;
    }
    int32_t v17 = *(int32_t *)-0x6e9be5ac; // 0x147f67
    *(int32_t *)-0x6e9be5ac = v17 + ((int32_t)v2 & -256 | 206);
    *v12 = __asm_insd((int16_t)v4);
    int64_t v18 = __asm_sti(); // 0x147f72
    int32_t v19 = v1; // 0x147f75
    if ((int32_t)a5 == v19) {
        int32_t * v20 = (int32_t *)v18; // 0x147fd3
        uint32_t v21 = *v20; // 0x147fd3
        *v20 = 0x40000000 * v21 | v21 / 8;
        *(char *)0x5969436d = *(char *)0x5969436d + (char)(v4 / 256);
        return 0x680637;
    }
    unsigned char v22 = *(char *)&v3 ^ (char)(v15 / 256); // 0x147f73
    uint64_t v23 = unknown_40c3b580(); // 0x147f79
    unsigned char v24 = *(char *)-0x664b807a; // 0x147f7f
    *(char *)-0x664b807a = v24 - v22;
    unsigned char v25 = *(char *)(v23 % 256 + (result2 & 0xffff0000 | (v6 + 160) % 256 | 256 * (int64_t)v22)); // 0x147f85
    *(int32_t *)v4 = (int32_t)(v24 < v22) + v19 + *(int32_t *)&v4;
    return v23 & -256 | (int64_t)v25;
}

// Address range: 0x147fe6 - 0x147fed
int64_t function_147fe6(void) {
    // 0x147fe6
    int64_t result; // 0x147fe6
    return result;
}

// Address range: 0x147fed - 0x148060
int64_t function_147fed(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a1;
    uint64_t v2 = __asm_iretd(); // 0x147fef
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int64_t v3; // 0x147fed
    if (v3 < a3) {
        char * v4 = (char *)(a2 - 0x68fcc573); // 0x148053
        *v4 = *v4 + (char)(v2 / 256);
        *(char *)-0x21e3689f = *(char *)-0x21e3689f + (char)(v3 / 256);
        return a4 & 0xffffffff;
    }
    unsigned char v5 = *(char *)0x48cb76fd + (char)(v3 / 256); // 0x147ff6
    *(char *)0x48cb76fd = v5;
    uint64_t result = unknown_ffffffffc7739e0b(); // 0x147ffc
    if (v5 >= 0) {
        // 0x148008
        *(int32_t *)(a1 - 2) = (int32_t)v3;
        return result;
    }
    uint32_t v6 = (int32_t)result; // 0x14800f
    uint32_t v7 = v6 / 0x80000000; // 0x14800f
    char * v8 = (char *)result; // 0x148010
    *v8 = *v8 & (char)result;
    *(int32_t *)v1 = __asm_insd((int16_t)v7);
    char * v9 = (char *)(v3 & -256 | 186); // 0x148018
    unsigned char v10 = *v9; // 0x148018
    unsigned char v11 = v10 + (char)(result / 256); // 0x148018
    unsigned char v12 = v11 + (char)(v6 < 0x759f9701); // 0x148018
    *v9 = v12;
    int64_t v13 = __asm_hlt(); // 0x14801a
    uint32_t v14 = (int32_t)a4 % 32; // 0x14801b
    if (v14 != 0) {
        uint32_t v15 = *(int32_t *)&v1; // 0x14801b
        bool v16 = v6 < 0x759f9701 ? v12 <= v10 : v11 < v10; // 0x148018
        *(int32_t *)v1 = v15 << v14 | (int32_t)((int64_t)v15 >> (int64_t)(33 - v14)) | (int32_t)v16 << v14 - 1;
    }
    int64_t result2 = a2 & 0xffffffff; // 0x14801e
    float80_t v17; // 0x147fed
    *(int16_t *)(8 * v3 + result2) = (int16_t)v17;
    int32_t * v18 = (int32_t *)((int64_t)v7 + 0x68d14f37); // 0x148022
    *v18 = *v18 + (int32_t)v13;
    char * v19 = (char *)((v13 & 0xffffffff) + (int64_t)&g1); // 0x148028
    *v19 = *v19 + (char)(a4 / 256);
    return result2;
}

// Address range: 0x1480a4 - 0x1480a7
int64_t function_1480a4(int64_t a1) {
    // 0x1480a4
    bool v1; // 0x1480a4
    return function_1480d5((v1 ? -1 : 1) + a1);
}

// Address range: 0x1480d3 - 0x1480d5
int64_t function_1480d3(int64_t a1) {
    // 0x1480d3
    int64_t result; // 0x1480d3
    return result;
}

// Address range: 0x1480d5 - 0x1480e1
int64_t function_1480d5(int64_t a1) {
    int32_t v1 = *(int32_t *)0x693a00b3f2d79eff; // 0x1480d5
    return (v1 + 207) % 256 | v1 & -256;
}

// Address range: 0x14818d - 0x14818e
int64_t function_14818d(void) {
    // 0x14818d
    int64_t result; // 0x14818d
    return result;
}

// Address range: 0x1481a6 - 0x1481b2
int64_t function_1481a6(void) {
    char v1 = *(char *)0x2fd4fcad; // 0x1481a6
    int64_t v2; // 0x1481a6
    *(char *)0x2fd4fcad = v1 + (char)((uint64_t)v2 / 256);
    return function_ffffffffe8ae0e3e();
}

// Address range: 0x1481b6 - 0x1481d2
int64_t function_1481b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1481b6
    int64_t v1; // 0x1481b6
    int32_t * v2 = (int32_t *)(v1 - 0x71194afe); // 0x1481b6
    *v2 = *v2 - 113;
    int64_t v3 = v1 | 210; // 0x1481bd
    int32_t v4 = *(int32_t *)(a3 - 0x3a48c4ff + v3); // 0x1481c6
    if (v4 + (int32_t)((int32_t)v3 < 0x32d51c01) < (int32_t)a1) {
        // 0x1481d0
        return function_14818d();
    }
    // 0x148228
    return a4 & 0xffffff00;
}

// Address range: 0x14823b - 0x14823e
int64_t function_14823b(void) {
    // 0x14823b
    int64_t result; // 0x14823b
    return result;
}

// Address range: 0x148258 - 0x14825a
int64_t function_148258(void) {
    // 0x148258
    int64_t result; // 0x148258
    return result;
}

// Address range: 0x1482f2 - 0x1482fa
int64_t function_1482f2(void) {
    // 0x1482f2
    return function_3c15bffa();
}

// Address range: 0x148353 - 0x148355
int64_t function_148353(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x148353
    return a4 & 0xffffffff;
}

// Address range: 0x148481 - 0x148494
int64_t function_148481(void) {
    // 0x148481
    int64_t result; // 0x148481
    return result;
}

// Address range: 0x14849b - 0x14849c
int64_t function_14849b(int64_t a1) {
    // 0x14849b
    int64_t result; // 0x14849b
    return result;
}

// Address range: 0x14852c - 0x14852d
int64_t function_14852c(int64_t a1) {
    // 0x14852c
    int64_t result; // 0x14852c
    return result;
}

// Address range: 0x14856f - 0x14858f
int64_t function_14856f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14856f
    int64_t result; // 0x14856f
    __asm_outsb((int16_t)a3, (char)result);
    float80_t v1; // 0x14856f
    *(int64_t *)-0x1b88548a = (int64_t)v1;
    return result;
}

// Address range: 0x14859e - 0x1486a5
int64_t function_14859e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x14859e
    int64_t v3 = *(int64_t *)(v2 + 0x98f5c4) | v2; // 0x14859e
    int32_t * v4 = (int32_t *)(4 * v3 + v2); // 0x1485bf
    *v4 = *v4 & (int32_t)a3;
    uint32_t v5 = *(int32_t *)(v2 + 2 * a4) + (int32_t)v3; // 0x1485c2
    int64_t v6 = v5; // 0x1485c2
    *(int32_t *)-0x27715c09 = 2 * *(int32_t *)-0x27715c09;
    uint32_t v7 = (int32_t)v2; // 0x1485ce
    uint32_t v8 = *(int32_t *)0x871953d4 | v7; // 0x1485ce
    *(int32_t *)0x871953d4 = v8;
    bool v9; // 0x14859e
    int64_t v10 = v9 ? 0x871953d0 : 0x871953d8; // 0x1485d0
    unsigned char v11 = *(char *)((int64_t)(v8 % 256) + v6); // 0x1485d3
    int64_t v12 = v11; // 0x1485d3
    uint64_t v13 = (int64_t)(v8 & -256); // 0x1485d3
    int64_t v14 = v13 | v12; // 0x1485d3
    char * v15 = (char *)v14; // 0x1485d4
    *v15 = (char)((int32_t)a4 < v7) - v11 + *v15;
    int64_t v16 = a4 - 1; // 0x1485db
    if (v16 != 0 != (v14 == 0xe287801)) {
        int64_t v17 = v1;
        return unknown_15185f1(0x14a24c80, v10, (v17 + v13 / 256) % 256 | v17 & -256, v16);
    }
    char v18 = *(char *)&v1 ^ v11; // 0x148647
    *(char *)v1 = v18;
    int64_t v19 = v16 & -256 | 128; // 0x14864a
    int64_t result = v14; // 0x14864a
    if (v18 != 0) {
        unsigned char v20 = *(char *)-0x2c6326ad; // 0x14864c
        char v21 = v5 / 256; // 0x14864c
        unsigned char v22 = v20 + v21; // 0x14864c
        *(char *)-0x2c6326ad = v22;
        uint32_t v23 = (int32_t)v1; // 0x148654
        uint32_t v24 = v5 + v23; // 0x148654
        uint32_t v25 = v24 + (int32_t)(v22 < v20); // 0x148654
        bool v26 = v22 < v20 ? v25 <= v23 : v24 < v23; // 0x148654
        int32_t v27 = __asm_in_133((int16_t)v25); // 0x148656
        char v28 = *(char *)(v10 + 0xa5000e0); // 0x148657
        int64_t v29 = (int64_t)((char)v25 - v28 + (char)v26) | (int64_t)(v25 & -256); // 0x148657
        v1 = v29;
        *(char *)-0x15b48a96 = *(char *)-0x15b48a96 + v21;
        int32_t * v30 = (int32_t *)((int64_t)v27 + 72); // 0x148669
        *v30 = *v30 + (int32_t)v29;
        int64_t v31 = unknown_ffffffffae1f2e76(); // 0x148670
        int16_t v32 = v29; // 0x148675
        *(char *)0x14a24c80 = __asm_insb(v32);
        __asm_out_134(v32, (char)v31);
        char * v33 = (char *)v29; // 0x148677
        unsigned char v34 = *v33; // 0x148677
        *v33 = v34 / 2 | 128 * v34;
        v19 = 256 * v12;
        result = (int64_t)*(int32_t *)(v31 + 0x3d006a52);
    }
    char * v35 = (char *)v6; // 0x14868f
    *v35 = *v35 ^ (char)(v19 / 256);
    uint32_t v36 = (int32_t)v19 % 32; // 0x148694
    if (v36 != 0) {
        uint32_t v37 = *(int32_t *)0x15df4d44; // 0x148694
        *(int32_t *)0x15df4d44 = v37 >> 32 - v36 | v37 << v36;
    }
    *(int32_t *)0x14a24c80 = (int32_t)result;
    return result;
}

// Address range: 0x1486f0 - 0x1486fb
int64_t function_1486f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x1486f0
    if (v1 != 0) {
        char * v2 = (char *)(a4 + 98); // 0x1486f0
        unsigned char v3 = *v2; // 0x1486f0
        bool v4; // 0x1486f0
        *v2 = (char)(bool)v4 << v1 - 1 | v3 << v1 | (char)((int16_t)v3 >> (int16_t)(9 - v1));
    }
    return function_ffffffff9715c40a();
}

// Address range: 0x313ebb - 0x313f22
int64_t function_313ebb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = unknown_ffffffff9f2c0fc4(); // 0x313ebd
    char * v1 = (char *)result; // 0x313ec3
    char v2 = *v1 - (char)result; // 0x313ec3
    unsigned char v3 = llvm_ctpop_i8(v2); // 0x313ec3
    *v1 = v2;
    if (v3 % 2 == 0) {
        // 0x313ec8
        return result + 0x560ad0f0 & 0xffffffff;
    }
    // 0x313f0d
    int64_t v4; // 0x313ebb
    __asm_fbld(*(float80_t *)&v4);
    int64_t v5; // 0x313ebb
    int32_t * v6 = (int32_t *)(v5 - 32); // 0x313f1f
    *v6 = *v6 + (int32_t)result;
    return result;
}

// Address range: 0x313f58 - 0x313f59
int64_t function_313f58(void) {
    // 0x313f58
    int64_t result; // 0x313f58
    return result;
}

// Address range: 0x313f5f - 0x313f9e
int64_t function_313f5f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1; // 0x313f5f
    if (a4 == 0) {
        v1 = function_313f58();
    }
    uint32_t v2 = (int32_t)a4 % 32; // 0x313f61
    if (v2 != 0) {
        uint32_t v3 = (int32_t)v1; // 0x313f61
        *(int32_t *)v1 = v3 >> 32 - v2 | v3 << v2;
    }
    *(char *)-0xd84c55c53fe17b3 = (char)v1;
    __asm_out_135(118, (char)a3 | -33);
    int64_t v4 = unknown_ffffffffb3f6ca7a(); // 0x313f74
    char * v5 = (char *)(4 * a1 - 0x484e84d2 + v4); // 0x313f79
    *v5 = *v5 + (char)(a4 / 256);
    char * v6 = (char *)(v4 - 0x17fe1745); // 0x313f80
    *v6 = *v6 | (char)(v1 / 256);
    *(int32_t *)-0x17591073 = *(int32_t *)-0x17591073 + (int32_t)a1;
    uint32_t v7 = (int32_t)v1; // 0x313f8c
    uint32_t v8 = 2 * v7; // 0x313f8c
    int64_t v9 = __asm_int3(); // 0x313f8e
    char * v10 = (char *)(v9 - 0x6f6365f6); // 0x313f8f
    *v10 = (char)(v8 < v7) + (char)a4 + *v10;
    int64_t result = v9 & 0x77bf8d7d; // 0x313f95
    int64_t v11 = v8; // 0x313f9b
    while (a4 == 0) {
        // 0x313f6c
        int64_t v12; // 0x313f5f
        v12 -= 8;
        __asm_out_135(118, (char)v11 | -33);
        v4 = unknown_ffffffffb3f6ca7a();
        v5 = (char *)(4 * a1 - 0x484e84d2 + v4);
        *v5 = *v5 + (char)(a4 / 256);
        v6 = (char *)(v4 - 0x17fe1745);
        *v6 = *v6 | (char)(result / 256);
        *(int32_t *)-0x17591073 = *(int32_t *)-0x17591073 + (int32_t)a1;
        v7 = (int32_t)result;
        v8 = 2 * v7;
        v9 = __asm_int3();
        v10 = (char *)(v9 - 0x6f6365f6);
        *v10 = (char)(v8 < v7) + (char)a4 + *v10;
        result = v9 & 0x77bf8d7d;
        v11 = v8;
    }
    // 0x313f9d
    return result;
}

// Address range: 0x313fd1 - 0x313fd6
int64_t function_313fd1(void) {
    // 0x313fd1
    return function_21a2626();
}

// Address range: 0x314017 - 0x314039
int64_t function_314017(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x314017
    int64_t v1; // 0x314017
    int32_t * v2 = (int32_t *)(v1 - 0x5f241f51); // 0x314019
    *v2 = *v2 + (int32_t)v1;
    __asm_hlt();
    return function_219415c();
}

// Address range: 0x31405a - 0x314068
int64_t function_31405a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31405a
    unknown_ffffffffce966a60(a1, a2, a3, a4);
    __asm_in(-99);
    return function_93328c0();
}

// Address range: 0x314088 - 0x3140ac
int64_t function_314088(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x314088
    int64_t v1; // 0x314088
    int64_t v2 = v1;
    int64_t v3 = a2;
    __asm_outsb((int16_t)a3, (char)a2);
    unsigned char v4 = (char)a4 % 32; // 0x314089
    if (v4 != 0) {
        char * v5 = (char *)(a4 + 0x3a418e92); // 0x314089
        unsigned char v6 = *v5; // 0x314089
        bool v7; // 0x314088
        *v5 = v6 >> v4 | (char)v7 << 8 - v4 | (char)((int16_t)v6 << (int16_t)(9 - v4));
    }
    char * v8 = (char *)(a3 - 124); // 0x314096
    char v9 = a3; // 0x314096
    *v8 = *v8 | v9;
    int64_t v10; // 0x314088
    *(char *)v10 = *(char *)&v10 - v9;
    *(int32_t *)(v2 + 0x1f01e83e) = (int32_t)v2;
    __asm_outsd((int16_t)v10 | 106, *(int32_t *)&v3);
    *(char *)v2 = (char)(a4 / 256);
    return a3 / 256 % 256 | a3 & 0xffff0000 | 256 * a3 & 0xff00;
}

// Address range: 0x3140ba - 0x3140bb
int64_t function_3140ba(void) {
    // 0x3140ba
    int64_t result; // 0x3140ba
    return result;
}

// Address range: 0x3140ea - 0x3140f6
int64_t function_3140ea(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3140ea
    return function_2347fe52();
}

// Address range: 0x314118 - 0x3141b1
int64_t function_314118(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x314118
    int64_t v1; // 0x314118
    __asm_out_135(-97, (char)v1);
    int64_t v2 = unknown_6e2fd120() & 0xffffffff; // 0x314122
    char * v3 = (char *)(4 * v2 - 0x16fe174d); // 0x314123
    char v4 = *v3; // 0x314123
    char v5 = v1; // 0x314123
    char v6 = v4 + v5; // 0x314123
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x314123
    *v3 = v6;
    int64_t v8 = a4 & 0xffffffff; // 0x31412b
    if (v7 % 2 == 0) {
        v8 = function_3140ba();
    }
    int64_t result = v8 & -0xff01 | (int64_t)&g2; // 0x31412d
    *(char *)(a3 - 0x7d5be3ea) = v5;
    int32_t v9 = result; // 0x314135
    *(int32_t *)0xd3df2c01e87094 = v9;
    if (v6 != 0) {
        // 0x314143
        return result;
    }
    // 0x314140
    *(int32_t *)a1 = v9;
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x314143
        return result;
    }
    int32_t * v10 = (int32_t *)v2; // 0x3141af
    *v10 = *v10 + v9;
    return result;
}

// Address range: 0x3141b2 - 0x3141d0
int64_t function_3141b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3141b2
    int64_t v1; // 0x3141b2
    char v2 = v1; // 0x3141b2
    *(char *)0x2e90e013d00ba5a = v2;
    __asm_out_135(-75, v2);
    int32_t * v3 = (int32_t *)(v1 - 48); // 0x3141bf
    *v3 = *v3 & (int32_t)a2;
    int16_t v4 = 256 * (int16_t)v1 >> 8; // 0x3141ce
    return v1 & -0x10000 | (int64_t)(v4 * v4);
}

// Address range: 0x31427e - 0x314281
int64_t function_31427e(void) {
    // 0x31427e
    int64_t result; // 0x31427e
    return result;
}

// Address range: 0x31430c - 0x31430f
int64_t function_31430c(int64_t a1) {
    // 0x31430c
    int64_t v1; // 0x31430c
    return function_314354(v1, v1, v1, a1);
}

// Address range: 0x31433e - 0x314347
int64_t function_31433e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31433e
    int64_t result; // 0x31433e
    int32_t * v1 = (int32_t *)(result + 0x47c5f903); // 0x31433e
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x314354 - 0x314356
int64_t function_314354(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x314354
    return a4 & 0xffffffff;
}

// Address range: 0x314357 - 0x314367
int64_t function_314357(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x314357
    bool v1; // 0x314357
    int64_t v2 = v1 ? -4 : 4; // 0x314357
    unknown_5b334361(v2 + a1, v2 + a2);
    return a3 & 0xffffffff;
}

// Address range: 0x314374 - 0x3143f7
int64_t function_314374(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffa2329b7f(); // 0x314379
    *(int32_t *)-0x17fef8c55b1d2064 = (int32_t)v1;
    uint64_t v2 = a4 + a1; // 0x314387
    int64_t v3 = v2 & 0xffffffff; // 0x314387
    char v4 = (char)v1 ^ -15; // 0x31438a
    int64_t v5 = v1 & -256; // 0x31438a
    int64_t v6 = v5 | (int64_t)v4; // 0x31438a
    uint64_t v7; // 0x314374
    float80_t v8; // 0x314374
    char v9; // 0x3143a2
    if (v3 == 0) {
        // 0x31439f
        v7 = v6;
        *(float32_t *)(v7 + 7) = (float32_t)v8;
        v9 = *(char *)v3;
        return 256 * (int64_t)((char)(v7 / 256) - v9) | v7 & -0xff01;
    }
    if (v4 >= 0 == (v4 != 0)) {
        // 0x3143e8
        __asm_out_135(127, v4);
        return v5 | (int64_t)*(char *)-0x4fec2fffe17dfc4;
    }
    int64_t v10 = (int64_t)*(int32_t *)(v6 - 0x1be3039f); // 0x314390
    int64_t v11 = unknown_6036839d(); // 0x314397
    char * v12 = (char *)(v11 - 90); // 0x31439c
    unsigned char v13 = *v12; // 0x31439c
    char v14 = -29 * v10 != -0x1d00000000 * v10 >> 32; // 0x31439c
    unsigned char v15 = v14 + (char)(v2 / 256); // 0x31439c
    char v16 = v13 - v15; // 0x31439c
    bool v17 = -29 * v10 != -0x1d00000000 * v10 >> 32 ? v15 != -1 | v13 < v16 - v14 : v13 < v15; // 0x31439c
    *v12 = v16;
    // 0x31439f
    v7 = v11;
    *(float32_t *)(v7 + 7) = (float32_t)v8;
    v9 = *(char *)v3;
    return 256 * (int64_t)((char)v17 - v9 + (char)(v7 / 256)) | v7 & -0xff01;
}

// Address range: 0x314426 - 0x314465
int64_t function_314426(int64_t a1, int64_t a2, int64_t a3) {
    // 0x314426
    int64_t v1; // 0x314426
    __asm_out_136((int16_t)a3, (int32_t)v1);
    char v2 = a3;
    *(char *)a3 = (char)v1 + v2;
    int64_t v3; // 0x314426
    unsigned char v4 = *(char *)&v3; // 0x31442b
    bool v5; // 0x314426
    int64_t v6 = (v5 ? -1 : 1) + a2; // 0x31442b
    v3 = v6;
    int64_t result; // 0x314426
    int64_t v7; // 0x314426
    if (v4 > *(char *)&v7) {
        int32_t * v8 = (int32_t *)(a3 - 0x7917896d); // 0x31442f
        *v8 = *v8 ^ 0x4c0814b9;
        int64_t v9 = result;
        *(int32_t *)v9 = *(int32_t *)&result + (int32_t)v9;
        return result;
    }
    char * v10 = (char *)(2 * result + v6); // 0x31444b
    *v10 = *v10 + v2;
    char v11 = *(char *)0x66f2eb57; // 0x314450
    *(char *)0x66f2eb57 = v11 + (char)((uint64_t)v1 / 256);
    __asm_in_137(-19);
    return unknown_34345666();
}

// Address range: 0x31446a - 0x31446b
int64_t function_31446a(int64_t a1) {
    // 0x31446a
    int64_t result; // 0x31446a
    return result;
}
