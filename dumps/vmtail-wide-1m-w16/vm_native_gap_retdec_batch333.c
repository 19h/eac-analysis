/*
 * Targeted RetDec C for native executable gap queue batch 333.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x10bfbf-0x10c1bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e7ee8-0x1e80e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e80e8-0x1e82e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e82e8-0x1e84e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e84e8-0x1e86e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45e634-0x45e834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45e834-0x45ea34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45ea34-0x45ec34 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
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
int64_t __asm_sldt(void);
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

int64_t function_10bfbf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_10c011(int64_t a1, int64_t a2, int64_t a3);
int64_t function_10c06b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_10c0d9(int64_t a1, int64_t a2);
int64_t function_133e85f0();
int64_t function_1e7ee8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e7f5e(void);
int64_t function_1e7f96(void);
int64_t function_1e7fca(void);
int64_t function_1e7fd3(void);
int64_t function_1e7fd7(int64_t a1);
int64_t function_1e7fe5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e7feb(void);
int64_t function_1e800b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1e8080(int64_t a1);
int64_t function_1e8084(int64_t a1);
int64_t function_1e80c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e813a(void);
int64_t function_1e8148(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1e81a7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e81b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e81c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e8217(void);
int64_t function_1e8248(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1e839b(void);
int64_t function_1e8402(void);
int64_t function_1e84a8(int64_t a1);
int64_t function_1e84e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e852d(void);
int64_t function_1e8541(void);
int64_t function_1e85a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e85ff(void);
int64_t function_1e8602(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_45e634(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_45e72c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45e79b(int64_t a1);
int64_t function_45e7a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45e7f3(void);
int64_t function_45e823(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45e8ce(void);
int64_t function_45e8df(int64_t a1);
int64_t function_45e8e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45e903(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45e930(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45e970(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45e97d(int64_t a1);
int64_t function_45e98e(void);
int64_t function_45e9db(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45e9e3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45e9fc(int64_t a1);
int64_t function_45ea91(int64_t a1, int64_t a2);
int64_t function_45eaae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45eab1(int32_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_45eacc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45eae8(int64_t a1);
int64_t function_45eb35(void);
int64_t function_45eb47(void);
int64_t function_45eb4e(void);
int64_t function_45eb66(void);
int64_t function_45eb7e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_45ebe8(int64_t a1, int64_t a2);
int64_t function_45ebff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45ec2c(int64_t a1);
int64_t function_45ec34();
int64_t function_45ec58();
int64_t function_603eb8fa();
int64_t function_ffffffffd21e57fc();
int64_t unknown_10f4a674();
int64_t unknown_3a246cb5();
int64_t unknown_3aa509f5();
int64_t unknown_3d12a7c9();
int64_t unknown_3d874097();
int64_t unknown_44fc8b25();
int64_t unknown_4599dbdb();
int64_t unknown_5ddfbe1a();
int64_t unknown_60ce20fe();
int64_t unknown_71294b14();
int64_t unknown_74435c7();
int64_t unknown_ffffffff9dfca8d7();
int64_t unknown_ffffffffa6206c03();
int64_t unknown_ffffffffc108321d();
int64_t unknown_ffffffffc5128795();
int64_t unknown_ffffffffef169151();
int64_t unknown_fffffffffe2192bc();

// Address range: 0x10bfbf - 0x10bfdc
int64_t function_10bfbf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x10bfbf
    int64_t v1; // 0x10bfbf
    __asm_outsb((int16_t)a3, (char)v1);
    unknown_3d12a7c9();
    int32_t * v2 = (int32_t *)(a1 + 89); // 0x10bfc8
    *v2 = *v2 + (int32_t)a4;
    int64_t result = a4 / 256 % 256 | a3 & 0xffffff00; // 0x10bfd1
    int32_t * v3 = (int32_t *)(result - 0x5234395b + (4 * v1 & -1024)); // 0x10bfd5
    *v3 = 2 * *v3;
    return result;
}

// Address range: 0x10c011 - 0x10c026
int64_t function_10c011(int64_t a1, int64_t a2, int64_t a3) {
    // 0x10c011
    int64_t v1; // 0x10c011
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x10c011
    int64_t v3 = v2 ? -4 : 4; // 0x10c011
    int64_t v4 = v3 + a1 + (v2 ? -1 : 1); // 0x10c013
    unknown_5ddfbe1a(v4, v3 + a2);
    return unknown_44fc8b25(v4 + 0x3a08f302 & 0xffffffff);
}

// Address range: 0x10c06b - 0x10c08c
int64_t function_10c06b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x10c06b
    int64_t v1; // 0x10c06b
    int64_t v2 = 256 * v1 & 0xff00 | v1 & -0xff01; // 0x10c06c
    int64_t v3 = unknown_10f4a674(); // 0x10c06e
    char * v4 = (char *)(v3 + 0x2c2c800); // 0x10c073
    *v4 = *v4 + (char)v3;
    int32_t * v5 = (int32_t *)(v2 + 0x2d004000); // 0x10c07b
    *v5 = *v5 + (int32_t)v1;
    bool v6; // 0x10c06b
    int64_t v7 = v6 ? -4 : 4; // 0x10c081
    int64_t v8 = v7 + a1; // 0x10c081
    uint32_t v9 = (int32_t)v3 >> 31; // 0x10c082
    char * v10 = (char *)v2; // 0x10c083
    unsigned char v11 = *v10; // 0x10c083
    unsigned char v12 = v11 + (char)(v3 + a4 / 256); // 0x10c083
    *v10 = v12;
    int32_t * v13 = (int32_t *)(int64_t)v9; // 0x10c085
    *v13 = *v13 - (int32_t)v8 + (int32_t)(v12 < v11);
    int64_t result = __asm_sti(v8, v7 + a2, v9); // 0x10c087
    *(char *)v8 = __asm_insb((int16_t)v9);
    return result;
}

// Address range: 0x10c0d9 - 0x10c0dd
int64_t function_10c0d9(int64_t a1, int64_t a2) {
    // 0x10c0d9
    int64_t result; // 0x10c0d9
    return result;
}

// Address range: 0x1e7ee8 - 0x1e7f4f
int64_t function_1e7ee8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1e7ee8
    int64_t v1; // 0x1e7ee8
    int32_t * v2 = (int32_t *)(2 * v1); // 0x1e7ee8
    *v2 = *v2 + (int32_t)v1;
    int32_t v3 = v1; // 0x1e7ef2
    uint32_t v4 = __asm_in((int16_t)a3) + v3; // 0x1e7ef2
    int64_t v5 = v4; // 0x1e7ef2
    int64_t v6 = 4 * a3; // 0x1e7ef4
    int32_t * v7 = (int32_t *)(v6 + 0x1e80208 + v1); // 0x1e7ef4
    *v7 = *v7 + v3;
    char * v8 = (char *)(v6 + a2); // 0x1e7efb
    unsigned char v9 = *v8; // 0x1e7efb
    unsigned char v10 = (char)v4; // 0x1e7efb
    char v11 = v9 + v10; // 0x1e7efb
    *v8 = v11;
    if (v11 < 0 == ((v11 ^ v9) & (v11 ^ v10)) < 0 == (v11 != 0)) {
        int64_t result = v5 & 0x482a0028 | 0x8000 * (int64_t)(v11 < 0) | 0x4000 * (int64_t)(v11 == 0) | 0x1000 * (int64_t)(v9 % 16 + v10 % 16 > 15) | 1024 * (int64_t)(llvm_ctpop_i8(v11) % 2 == 0) | 0xb7d523d7; // 0x1e7f41
        char * v12 = (char *)(a4 + 0x13d0093); // 0x1e7f49
        *v12 = *v12 + (char)result;
        return result;
    }
    int32_t * v13 = (int32_t *)v5; // 0x1e7f01
    *v13 = *v13 + (int32_t)a3;
    *(char *)0x78545d0f = *(char *)0x78545d0f - 1;
    int32_t * v14 = (int32_t *)(a4 - 0x6cb41d2 + 2 * v5); // 0x1e7f10
    uint32_t v15 = *v14; // 0x1e7f10
    *v14 = v4;
    return ((int64_t)(v4 > -1 - (int32_t)a1) + 48 - (int64_t)(v15 / 256)) % 256 | (int64_t)(v15 & -256);
}

// Address range: 0x1e7f5e - 0x1e7f5f
int64_t function_1e7f5e(void) {
    // 0x1e7f5e
    int64_t result; // 0x1e7f5e
    return result;
}

// Address range: 0x1e7f96 - 0x1e7f9e
int64_t function_1e7f96(void) {
    // 0x1e7f96
    int64_t v1; // 0x1e7f96
    *(int32_t *)-0x64b465ed = *(int32_t *)-0x64b465ed + (int32_t)v1;
    return function_1e7f5e();
}

// Address range: 0x1e7fca - 0x1e7fcb
int64_t function_1e7fca(void) {
    // 0x1e7fca
    int64_t result; // 0x1e7fca
    return result;
}

// Address range: 0x1e7fd3 - 0x1e7fd4
int64_t function_1e7fd3(void) {
    // 0x1e7fd3
    int64_t result; // 0x1e7fd3
    return result;
}

// Address range: 0x1e7fd7 - 0x1e7fda
int64_t function_1e7fd7(int64_t a1) {
    // 0x1e7fd7
    int64_t result; // 0x1e7fd7
    return result;
}

// Address range: 0x1e7fe5 - 0x1e7fea
int64_t function_1e7fe5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1e7fe5
    int64_t result; // 0x1e7fe5
    return result;
}

// Address range: 0x1e7feb - 0x1e7fec
int64_t function_1e7feb(void) {
    // 0x1e7feb
    int64_t result; // 0x1e7feb
    return result;
}

// Address range: 0x1e800b - 0x1e8052
int64_t function_1e800b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1e800b
    *(char *)0x2520683a = *(char *)0x2520683a - 126;
    int32_t v1 = *(int32_t *)0x2508e0080001eab; // 0x1e8012
    int64_t v2; // 0x1e800b
    int32_t * v3 = (int32_t *)(v2 + 0x60001200); // 0x1e801d
    *v3 = *v3 + (int32_t)v2;
    if ((char)((((v1 + (int32_t)(a4 / 256)) % 256 | v1 & 0xff00) + 0x323a) / 256) != -(char)a3) {
        function_1e7fd3();
    }
    // 0x1e802e
    __asm_iretd();
    int64_t v4; // 0x1e800b
    unknown_ffffffffef169151(*(int32_t *)&v4 | (int32_t)a1);
    return function_1e7feb();
}

// Address range: 0x1e8080 - 0x1e8082
int64_t function_1e8080(int64_t a1) {
    // 0x1e8080
    int64_t result; // 0x1e8080
    return result;
}

// Address range: 0x1e8084 - 0x1e8085
int64_t function_1e8084(int64_t a1) {
    // 0x1e8084
    int64_t result; // 0x1e8084
    return result;
}

// Address range: 0x1e80c7 - 0x1e80e7
int64_t function_1e80c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x55d9d70e); // 0x1e80d3
    *v1 = *v1 + (int32_t)a2;
    int64_t v2; // 0x1e80c7
    return ((uint64_t)v2 / 256 + a4) % 256 | a4 & 0xffffff00;
}

// Address range: 0x1e813a - 0x1e813b
int64_t function_1e813a(void) {
    // 0x1e813a
    int64_t result; // 0x1e813a
    return result;
}

// Address range: 0x1e8148 - 0x1e81a7
int64_t function_1e8148(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    __asm_hlt();
    char * v2 = (char *)(a3 + 71); // 0x1e8156
    unsigned char v3 = *v2; // 0x1e8156
    *v2 = v3 / 2 | 128 * v3;
    char * v4 = (char *)(a3 + 0x243d1be3); // 0x1e816e
    char v5 = *v4 | (char)(a3 / 256); // 0x1e816e
    *v4 = v5;
    if (v5 < 1) {
        function_1e813a();
    }
    int32_t * v6 = (int32_t *)(a2 + 34); // 0x1e8183
    *v6 = *v6 + (int32_t)a3;
    unsigned char v7 = *(char *)-0x17b3ac21; // 0x1e818a
    *(char *)-0x17b3ac21 = v7 / 128 | 2 * v7;
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)unknown_3d874097();
    int32_t v8 = *(int32_t *)0xd50369c; // 0x1e819f
    int64_t v9; // bp+16, 0x1e8148
    *(int32_t *)0xd50369c = v8 + (int32_t)(int64_t)&v9;
    return unknown_ffffffffc108321d();
}

// Address range: 0x1e81a7 - 0x1e81b3
int64_t function_1e81a7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e81a7
    int64_t v1; // 0x1e81a7
    int64_t v2 = v1 + 0xe8571dc8; // 0x1e81a7
    int32_t * v3 = (int32_t *)(a3 - 0x6973535e); // 0x1e81ac
    *v3 = *v3 + (int32_t)v2;
    return v2 & 0xffffffff;
}

// Address range: 0x1e81b3 - 0x1e81c1
int64_t function_1e81b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e81b3
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    unknown_fffffffffe2192bc();
    return __asm_sti(a1, a2, (int32_t)a3);
}

// Address range: 0x1e81c1 - 0x1e8217
int64_t function_1e81c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_74435c7(); // 0x1e81c1
    int32_t * v2 = (int32_t *)v1; // 0x1e81c6
    int32_t v3 = a4; // 0x1e81c6
    *v2 = *v2 + v3;
    int64_t v4 = v1 + 0xe8cf3508; // 0x1e81c8
    int32_t * v5 = (int32_t *)((v4 & 0xffffffff) - 0x5d7c86fd); // 0x1e81cd
    *v5 = *v5 + (int32_t)a3;
    unsigned char v6 = llvm_ctpop_i8((char)v4 + 16); // 0x1e81d3
    int64_t result = unknown_4599dbdb(); // 0x1e81d5
    if (v6 % 2 == 0) {
        // 0x1e81dc
        return result;
    }
    // 0x1e81f8
    __asm_out((int16_t)a3, (int32_t)unknown_60ce20fe());
    unsigned char v7 = (char)a4 % 32; // 0x1e81ff
    if (v7 != 0) {
        char * v8 = (char *)(a2 - 24); // 0x1e81ff
        *v8 = *v8 >> v7;
    }
    int32_t * v9 = (int32_t *)(a3 + 36); // 0x1e8202
    *v9 = *v9 + v3;
    int64_t v10 = unknown_71294b14(); // 0x1e820e
    return (v10 + 118) % 256 | v10 & -256;
}

// Address range: 0x1e8217 - 0x1e821c
int64_t function_1e8217(void) {
    // 0x1e8217
    return unknown_ffffffffc108321d();
}

// Address range: 0x1e8248 - 0x1e8386
int64_t function_1e8248(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1e8248
    int64_t v1; // 0x1e8248
    int64_t result = v1;
    int64_t v2 = a3;
    int64_t v3 = a2;
    *(int32_t *)a1 = (int32_t)result;
    *(char *)a3 = *(char *)&v2 + (char)(a3 / 256);
    if ((result & 0x4000) != 0) {
        // 0x1e8254
        return result;
    }
    uint32_t v4 = 63 * *(int32_t *)(4 * a4 - 84 + v1); // 0x1e824c
    int64_t v5 = v4; // 0x1e824c
    unsigned char v6 = *(char *)&v2; // 0x1e82cc
    *(char *)v2 = v6 / 2 | 128 * v6;
    *(char *)a4 = (char)(v2 / 256);
    v2 = 2 * result & 0xfffffffe | (int64_t)((result & 256) != 0);
    int64_t v7 = unknown_ffffffff9dfca8d7(); // 0x1e82d1
    int32_t * v8 = (int32_t *)(4 * v1 - 0x62497c52); // 0x1e82d6
    int32_t v9 = v1; // 0x1e82d6
    *v8 = *v8 + v9;
    uint64_t v10 = v7 + v1; // 0x1e82dd
    int64_t v11 = v10 & 0xffffffff; // 0x1e82dd
    int32_t * v12 = (int32_t *)v11; // 0x1e82df
    uint32_t v13 = *v12; // 0x1e82df
    int32_t v14 = v13 + v4; // 0x1e82df
    *v12 = v14;
    int64_t v15 = v2;
    if (v14 < 0) {
        char * v16 = (char *)(v15 + 1); // 0x1e8346
        *v16 = (char)(v14 < v13) + (char)(v10 / 256) + *v16;
        char * v17 = (char *)v11; // 0x1e8349
        *v17 = *v17 + (char)v10;
        char * v18 = (char *)((v2 & 0xffffffff) - 0x2bf8ff63); // 0x1e834c
        *v18 = *v18 + (char)v2;
        *(int64_t *)(v5 - 8) = 0x3a899b00;
        return function_ffffffffd21e57fc();
    }
    // 0x1e82e4
    bool v19; // 0x1e8248
    int64_t v20 = v19 ? -4 : 4; // 0x1e8248
    int64_t v21 = v20 + a1; // 0x1e8248
    v2 = v15 & -0xff01 | (int64_t)&g4;
    *(int32_t *)v21 = *(int32_t *)&v3;
    int64_t v22 = v21 + v20; // 0x1e82e6
    v3 += v20;
    int64_t v23 = a4 & -256 | 140; // 0x1e82e7
    *(int64_t *)(v5 - 8) = v5;
    int64_t v24 = v5 - 16; // 0x1e82ed
    *(int64_t *)v24 = v11;
    int64_t v25 = unknown_3aa509f5(); // 0x1e82ef
    int64_t v26 = v23; // 0x1e82f4
    int64_t v27 = v22; // 0x1e82f4
    int64_t v28 = v25; // 0x1e82f4
    if (*(int32_t *)(v3 - 12) != (int32_t)v23) {
        unsigned char v29 = (char)(v1 / 256); // 0x1e82f9
        int64_t v30 = v23; // 0x1e82fd
        uint64_t v31 = v2;
        char v32 = *(char *)(v31 - 101); // 0x1e82f6
        int64_t v33 = 256 * (int64_t)(v32 + (char)(v31 / 256)) | v31 & -0xff01; // 0x1e82f6
        v2 = v33;
        *(int32_t *)v22 = __asm_insd((int16_t)v33);
        int32_t v34 = v25; // 0x1e82ff
        int32_t v35 = v33; // 0x1e82ff
        int32_t v36 = v35 + v34; // 0x1e82ff
        int64_t v37 = v24 & 0xffffffff; // 0x1e8301
        int64_t v38; // 0x1e8248
        int64_t v39 = *(int64_t *)v38; // 0x1e8302
        int64_t v40 = v38 + 8; // 0x1e8302
        int64_t v41 = v37; // 0x1e8303
        int64_t v42 = v22; // 0x1e8303
        int64_t v43 = v40; // 0x1e8303
        int64_t result2; // 0x1e8248
        int32_t v44; // 0x1e8307
        int32_t v45; // 0x1e8307
        int64_t v46; // 0x1e8307
        int64_t v47; // 0x1e830b
        int64_t v48; // 0x1e8316
        int64_t v49; // 0x1e8318
        if (v36 == 0) {
            // 0x1e8305
            v49 = v40;
            result2 = v37;
            if (v36 < 0 != ((v36 ^ v34) & (v36 ^ v35)) < 0) {
                // 0x1e8382
                __asm_out((int16_t)v2, (int32_t)result2);
                return result2;
            }
            v44 = v22;
            v45 = v44 + v9;
            v46 = v45;
            v47 = unknown_ffffffffa6206c03(v45);
            *(int32_t *)(v47 + 1) = (int32_t)v39;
            v48 = v47 & -0xff01 | (int64_t)&g5;
            v49 -= 8;
            *(int64_t *)v49 = v48;
            v41 = v48;
            v42 = v46;
            v43 = v49;
            while (v45 == 0) {
                // 0x1e8305
                result2 = v48;
                if (v45 < 0 != ((v45 ^ v44) & (v45 ^ v9)) < 0) {
                    // 0x1e8382
                    __asm_out((int16_t)v2, (int32_t)result2);
                    return result2;
                }
                v44 = v46;
                v45 = v44 + v9;
                v46 = v45;
                v47 = unknown_ffffffffa6206c03(v45);
                *(int32_t *)(v47 + 1) = (int32_t)v39;
                v48 = v47 & -0xff01 | (int64_t)&g5;
                v49 -= 8;
                *(int64_t *)v49 = v48;
                v41 = v48;
                v42 = v46;
                v43 = v49;
            }
        }
        uint64_t v50 = v30 / 256; // 0x1e82f9
        v30 = 256 * (v50 + v25 + (int64_t)((char)v50 < v29)) & 0xff00 | v30 & -0xff01;
        int64_t v51 = v43;
        int64_t v52 = v42;
        *(int64_t *)(v51 - 8) = v51;
        int64_t v53 = v51 - 16; // 0x1e82ed
        *(int64_t *)v53 = v41;
        int64_t v54 = unknown_3aa509f5(); // 0x1e82ef
        v26 = v30;
        v27 = v52;
        v28 = v54;
        v38 = v39;
        while (*(int32_t *)(v3 - 12) != (int32_t)v30) {
            int64_t v55 = v52;
            v31 = v2;
            v32 = *(char *)(v31 - 101);
            v33 = 256 * (int64_t)(v32 + (char)(v31 / 256)) | v31 & -0xff01;
            v2 = v33;
            *(int32_t *)v55 = __asm_insd((int16_t)v33);
            v34 = v54;
            v35 = v33;
            v36 = v35 + v34;
            v37 = v53 & 0xffffffff;
            v39 = *(int64_t *)v38;
            v40 = v38 + 8;
            v41 = v37;
            v42 = v55;
            v43 = v40;
            if (v36 == 0) {
                // 0x1e8305
                v49 = v40;
                result2 = v37;
                if (v36 < 0 != ((v36 ^ v34) & (v36 ^ v35)) < 0) {
                    // 0x1e8382
                    __asm_out((int16_t)v2, (int32_t)result2);
                    return result2;
                }
                v44 = v55;
                v45 = v44 + v9;
                v46 = v45;
                v47 = unknown_ffffffffa6206c03(v45);
                *(int32_t *)(v47 + 1) = (int32_t)v39;
                v48 = v47 & -0xff01 | (int64_t)&g5;
                v49 -= 8;
                *(int64_t *)v49 = v48;
                v41 = v48;
                v42 = v46;
                v43 = v49;
                while (v45 == 0) {
                    // 0x1e8305
                    result2 = v48;
                    if (v45 < 0 != ((v45 ^ v44) & (v45 ^ v9)) < 0) {
                        // 0x1e8382
                        __asm_out((int16_t)v2, (int32_t)result2);
                        return result2;
                    }
                    v44 = v46;
                    v45 = v44 + v9;
                    v46 = v45;
                    v47 = unknown_ffffffffa6206c03(v45);
                    *(int32_t *)(v47 + 1) = (int32_t)v39;
                    v48 = v47 & -0xff01 | (int64_t)&g5;
                    v49 -= 8;
                    *(int64_t *)v49 = v48;
                    v41 = v48;
                    v42 = v46;
                    v43 = v49;
                }
            }
            // 0x1e82e9
            v50 = v30 / 256;
            v30 = 256 * (v50 + v54 + (int64_t)((char)v50 < v29)) & 0xff00 | v30 & -0xff01;
            v51 = v43;
            v52 = v42;
            *(int64_t *)(v51 - 8) = v51;
            v53 = v51 - 16;
            *(int64_t *)v53 = v41;
            v54 = unknown_3aa509f5();
            v26 = v30;
            v27 = v52;
            v28 = v54;
            v38 = v39;
        }
    }
    uint64_t v56 = v26 / 256; // 0x1e8292
    int64_t v57 = v28 & -256 | v56 % 256; // 0x1e8292
    int32_t * v58 = (int32_t *)v57; // 0x1e8294
    uint32_t v59 = *v58; // 0x1e8294
    uint32_t v60 = v59 + (int32_t)v27; // 0x1e8294
    *v58 = v60;
    char * v61 = (char *)(3 * v57); // 0x1e8299
    *v61 = *v61 - (char)v56 + (char)(v60 < v59);
    return v57 + 0x9fbde3ff & 0xffffff00 | (int64_t)*(char *)0x2600cb13a401e809;
}

// Address range: 0x1e839b - 0x1e839e
int64_t function_1e839b(void) {
    // 0x1e839b
    int64_t result; // 0x1e839b
    return result;
}

// Address range: 0x1e8402 - 0x1e8408
int64_t function_1e8402(void) {
    // 0x1e8402
    return function_133e85f0();
}

// Address range: 0x1e84a8 - 0x1e84b6
int64_t function_1e84a8(int64_t a1) {
    // 0x1e84a8
    return unknown_3a246cb5();
}

// Address range: 0x1e84e7 - 0x1e84f8
int64_t function_1e84e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e84e7
    int64_t v1; // 0x1e84e7
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = v2 + (int32_t)v1; // 0x1e84e9
    *(int32_t *)a3 = v3;
    char * v4 = (char *)(a4 + a3); // 0x1e84f0
    *v4 = *v4 + (char)a3;
    __asm_int(64);
    int16_t v5; // 0x1e84e7
    return (int64_t)v5 + 0xbbbfeaaf + (int64_t)(v3 < v2);
}

// Address range: 0x1e852d - 0x1e8535
int64_t function_1e852d(void) {
    // 0x1e852d
    int64_t result; // 0x1e852d
    bool v1; // 0x1e852d
    *(char *)(result + 0x7c01e8b7) = (char)!v1;
    return result;
}

// Address range: 0x1e8541 - 0x1e8542
int64_t function_1e8541(void) {
    // 0x1e8541
    int64_t result; // 0x1e8541
    return result;
}

// Address range: 0x1e85a8 - 0x1e85f4
int64_t function_1e85a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffc5128795(); // 0x1e85a8
    bool v1; // 0x1e85a8
    if (a4 != 1 == v1) {
        // 0x1e85e8
        return result;
    }
    // 0x1e85af
    __asm_int(-35);
    return function_1e8541();
}

// Address range: 0x1e85ff - 0x1e8600
int64_t function_1e85ff(void) {
    // 0x1e85ff
    int64_t result; // 0x1e85ff
    return result;
}

// Address range: 0x1e8602 - 0x1e8653
int64_t function_1e8602(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1e8602
    int64_t v1; // 0x1e8602
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a1;
    unsigned char v5 = (char)a4 % 32; // 0x1e8602
    int64_t v6; // 0x1e8602
    char v7; // 0x1e8602
    if (v5 == 0) {
        // 0x1e8602
        v6 = a3;
        v7 = a3;
    } else {
        char * v8 = (char *)(a1 + 0x1071234); // 0x1e8602
        unsigned char v9 = *v8; // 0x1e8602
        bool v10; // 0x1e8602
        *v8 = v9 << v5 | (char)v10 << v5 - 1 | (char)((int16_t)v9 >> (int16_t)(9 - v5));
        v6 = v3;
        v7 = *(char *)&v3;
    }
    unsigned char v11 = v7; // 0x1e8608
    *(char *)v6 = v11 / 2 | 128 * v11;
    int32_t * v12 = (int32_t *)(v1 + 8 * v1); // 0x1e860c
    int32_t v13 = *v12 + (int32_t)v1; // 0x1e860c
    *v12 = v13;
    if (v13 < 0) {
        // 0x1e8611
        return function_1e85ff();
    }
    int64_t v14 = v2 & 202 | a4 / 256 % 256 | v2 & 0x23a44c00; // 0x1e864e
    *(int32_t *)v4 = *(int32_t *)&v4 + (int32_t)v14;
    return v14 & 0x4cff;
}

// Address range: 0x45e634 - 0x45e6d4
int64_t function_45e634(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x45e634
    int3_t v1; // 0x45e634
    int3_t v2 = v1;
    uint64_t v3 = a3 / 256;
    unsigned char v4 = (char)v3;
    bool v5; // 0x45e634
    int64_t v6 = 0x4000 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5;
    int64_t v7 = 4 * (int64_t)v5; // 0x45e634
    int64_t v8 = a4; // 0x45e634
    int64_t v9 = 0x56257ca8; // 0x45e634
    *(int64_t *)(v9 - 8) = -0x4423c4f0;
    int64_t v10; // 0x45e634
    int64_t v11 = v10; // 0x45e63e
    bool v12; // 0x45e634
    int64_t v13; // 0x45e634
    uint64_t v14; // 0x45e641
    unsigned char v15; // 0x45e634
    unsigned char v16; // 0x45e641
    int64_t result; // 0x45e641
    bool v17; // 0x45e634
    while (!v17 && !v12) {
        // 0x45e640
        v9 -= 16;
        bool v18; // 0x45e634
        bool v19; // 0x45e634
        bool v20; // 0x45e634
        *(int64_t *)v9 = v6 | 128 * (int64_t)v20 | v7 | 2048 * (int64_t)v19 | 16 * (int64_t)v18 | 2;
        v14 = v10 / 256;
        v15 = (char)v14;
        v16 = v15 - v4;
        result = 256 * (int64_t)v16 | v10 & -0xff01;
        if (v16 != 0) {
            // 0x45e697
            v13 = result;
            goto lab_0x45e698;
        }
        // 0x45e645
        __asm_int(2);
        unsigned char v21 = (char)v8; // 0x45e647
        char v22 = v15 < v4; // 0x45e647
        unsigned char v23 = v16 + v21; // 0x45e647
        unsigned char v24 = v23 + v22; // 0x45e647
        char v25 = v24 + v22; // 0x45e647
        v8 = v8 & -256 | (int64_t)v24;
        if (v24 < 0 != ((v25 ^ v21) & (v25 ^ v16)) < 0) {
            if (v8 != 0) {
                // 0x45e687
                return function_603eb8fa();
            }
            // 0x45e6ae
            __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v2) * (float80_t)*(float64_t *)a1);
            return result;
        }
        unsigned char v26 = llvm_ctpop_i8(v24); // 0x45e647
        v20 = ((v25 ^ v21) & (v25 ^ v16)) < 0;
        v17 = v24 == 0;
        v19 = ((v25 ^ v21) & (v25 ^ v16)) < 0;
        v18 = v16 % 16 + v21 % 16 + v22 > 15;
        v7 = 0;
        v10 = result;
        v12 = v15 < v4 ? v24 <= v21 : v23 < v21;
        if (v26 % 2 == 0) {
            unsigned char v27 = v24 % 32; // 0x45e64d
            if (v27 == 0) {
                if (((v25 ^ v21) & (v25 ^ v16)) < 0) {
                    // 0x45e687
                    return function_603eb8fa();
                }
                goto lab_0x45e655;
            } else {
                char * v28 = (char *)(result - 0x52d0018e); // 0x45e64d
                char v29 = *v28; // 0x45e64d
                char v30 = v29 << v27; // 0x45e64d
                *v28 = v30;
                if (v27 == 1 ? (v30 ^ v29 << v27 - 1) < 0 : ((v25 ^ v21) & (v25 ^ v16)) < 0) {
                    // 0x45e687
                    return function_603eb8fa();
                }
                goto lab_0x45e655;
            }
        }
        *(int64_t *)(v9 - 8) = -0x4423c4f0;
        v11 = v10;
    }
    goto lab_0x45e664;
  lab_0x45e664:
    // 0x45e664
    __asm_int(-51);
    char * v31 = (char *)(2 * v11 + a2); // 0x45e666
    *v31 = *v31 | v4;
    return 0x10000 * (int32_t)v11 >> 16;
  lab_0x45e698:;
    int64_t v32 = v13;
    int64_t v33; // 0x45e634
    int64_t result2 = v33 & 0xffffffff; // 0x45e698
    v13 = result2;
    v33 = v32 & 0xffffffff;
    if (((v16 ^ v15) & (char)(v14 ^ v3)) < 0) {
        // 0x45e69d
        return result2;
    }
    goto lab_0x45e698;
  lab_0x45e655:;
    int3_t v34 = v2 + 2; // 0x45e65f
    __frontend_reg_store_fpr(v34, __frontend_reg_load_fpr(v2) / __frontend_reg_load_fpr(v34));
    v11 = result;
    goto lab_0x45e664;
}

// Address range: 0x45e72c - 0x45e766
int64_t function_45e72c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45e72c
    int64_t v1; // 0x45e72c
    int64_t v2 = v1;
    if ((a4 & -0xff01 || (int64_t)&g6) == 1) {
        // 0x45e737
        bool v3; // 0x45e72c
        return (v2 + 60 + (int64_t)v3) % 256 | v2 & -256;
    }
    // 0x45e759
    return 0x675ffffd;
}

// Address range: 0x45e79b - 0x45e7a3
int64_t function_45e79b(int64_t a1) {
    // 0x45e79b
    int64_t v1; // 0x45e79b
    return v1 & 0x3ceda8a1;
}

// Address range: 0x45e7a3 - 0x45e7b3
int64_t function_45e7a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 86); // 0x45e7aa
    int64_t result; // 0x45e7a3
    *v1 = *v1 & (char)result;
    return result;
}

// Address range: 0x45e7f3 - 0x45e7f4
int64_t function_45e7f3(void) {
    // 0x45e7f3
    int64_t result; // 0x45e7f3
    return result;
}

// Address range: 0x45e823 - 0x45e8bc
int64_t function_45e823(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45e823
    int64_t v1; // 0x45e823
    unsigned char v2 = (char)v1; // 0x45e823
    if (v2 >= 62) {
        char * v3 = (char *)(2 * a1); // 0x45e827
        *v3 = *v3 ^ (char)(v1 / 256);
        __asm_insb((int16_t)a3);
        *(char *)a1 = v2 & 14;
        return a3 & 0xffffffff;
    }
    uint32_t v4 = (int32_t)a2; // 0x45e88f
    uint32_t v5 = (int32_t)v1 + v4; // 0x45e88f
    uint32_t v6 = v5 + (int32_t)(v2 < 61); // 0x45e88f
    bool v7 = v2 < 61 ? v6 <= v4 : v5 < v4; // 0x45e88f
    int64_t v8 = a4 & -0xff01 | (int64_t)&g7; // 0x45e891
    unsigned char v9 = (char)v7 + (char)v8 + *(char *)(a3 + 0x10017783); // 0x45e893
    __asm_rcl(*(char *)(a3 + 94));
    unsigned char v10 = v9 % 32;
    int64_t v11 = a3; // 0x45e8ac
    if (v10 != 0) {
        v11 = (int32_t)a3 >> (int32_t)v10;
    }
    int64_t v12 = v6; // 0x45e88f
    __asm_outsb((int16_t)v11, __readfsbyte(v12));
    unsigned char v13 = *(char *)v12; // 0x45e8b0
    int32_t v14 = *(int32_t *)((v8 & -256 | (int64_t)v9) - 0x7ddaa269); // 0x45e8b3
    return ((int32_t)(v1 & 0x90732900 | (int64_t)v13) | 0x6f8cd600) & v14;
}

// Address range: 0x45e8ce - 0x45e8d0
int64_t function_45e8ce(void) {
    // 0x45e8ce
    int64_t v1; // 0x45e8ce
    return function_45e930(v1, v1, v1, v1);
}

// Address range: 0x45e8df - 0x45e8e1
int64_t function_45e8df(int64_t a1) {
    // 0x45e8df
    int64_t result; // 0x45e8df
    return result;
}

// Address range: 0x45e8e5 - 0x45e903
int64_t function_45e8e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45e8e5
    __writegsbyte(a2, __readgsbyte(a2) | (char)a4);
    int64_t v1; // 0x45e8e5
    return v1 | 78;
}

// Address range: 0x45e903 - 0x45e90c
int64_t function_45e903(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45e903
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x45e903
    return result;
}

// Address range: 0x45e930 - 0x45e93c
int64_t function_45e930(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45e930
    int64_t v1; // 0x45e930
    int32_t * v2 = (int32_t *)(v1 - 0x55e18274); // 0x45e930
    *v2 = *v2 - (int32_t)a4;
    __asm_int1();
    return function_45e97d((int64_t)&g8);
}

// Address range: 0x45e970 - 0x45e97d
int64_t function_45e970(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45e970
    int64_t v1; // 0x45e970
    bool v2; // 0x45e970
    if ((char)v2 + (char)a3 == *(char *)(v1 - 0x29c28226)) {
        function_45e9db(a1, a2, a3 & -256);
    }
    // 0x45e978
    return __asm_int3();
}

// Address range: 0x45e97d - 0x45e97f
int64_t function_45e97d(int64_t a1) {
    // 0x45e97d
    int64_t result; // 0x45e97d
    return result;
}

// Address range: 0x45e98e - 0x45e991
int64_t function_45e98e(void) {
    // 0x45e98e
    int64_t result; // 0x45e98e
    return result;
}

// Address range: 0x45e9db - 0x45e9e1
int64_t function_45e9db(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45e9db
    int64_t v1; // 0x45e9db
    int64_t v2 = v1;
    __asm_outsd((int16_t)a3, (int32_t)v1);
    bool v3; // 0x45e9db
    return (v2 + 5 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x45e9e3 - 0x45e9ea
int64_t function_45e9e3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45e9e3
    int64_t result; // 0x45e9e3
    return result;
}

// Address range: 0x45e9fc - 0x45e9fe
int64_t function_45e9fc(int64_t a1) {
    // 0x45e9fc
    int64_t result; // 0x45e9fc
    return result;
}

// Address range: 0x45ea91 - 0x45eaae
int64_t function_45ea91(int64_t a1, int64_t a2) {
    // 0x45ea91
    int64_t v1; // 0x45ea91
    int64_t v2 = v1;
    *(char *)-0x1cddef6206c192a3 = (char)v2;
    *(int32_t *)v2 = (int32_t)(v2 ^ v1);
    int32_t v3 = *(int32_t *)(2 * a2 + 0x7ad2f00a); // 0x45eaa5
    return function_45eab1(v3 + (int32_t)a1, v1, v1, v1);
}

// Address range: 0x45eaae - 0x45eab1
int64_t function_45eaae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45eaae
    int64_t result; // 0x45eaae
    return result;
}

// Address range: 0x45eab1 - 0x45eacb
int64_t function_45eab1(int32_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a3; // bp-8, 0x45eab3
    int64_t v2; // 0x45eab1
    int32_t v3 = *(int32_t *)((v2 & 0xffffffff) + 118); // 0x45eab4
    uint32_t v4 = v3 | (int32_t)(int64_t)&v1; // 0x45eab4
    char * v5 = (char *)(v2 + 76); // 0x45eabf
    *v5 = *v5 + (char)(a3 / 256);
    *(int64_t *)((int64_t)v4 - 8) = a4;
    return v4 - 8;
}

// Address range: 0x45eacc - 0x45ead5
int64_t function_45eacc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45eacc
    int64_t v1; // 0x45eacc
    return v1 & 0xffffffff;
}

// Address range: 0x45eae8 - 0x45eaeb
int64_t function_45eae8(int64_t a1) {
    // 0x45eae8
    int64_t result; // 0x45eae8
    return result;
}

// Address range: 0x45eb35 - 0x45eb36
int64_t function_45eb35(void) {
    // 0x45eb35
    int64_t result; // 0x45eb35
    return result;
}

// Address range: 0x45eb47 - 0x45eb4d
int64_t function_45eb47(void) {
    // 0x45eb47
    int64_t result; // 0x45eb47
    return result;
}

// Address range: 0x45eb4e - 0x45eb53
int64_t function_45eb4e(void) {
    // 0x45eb4e
    int64_t v1; // 0x45eb4e
    int64_t v2 = v1;
    char v3 = *(char *)(v2 + 67); // 0x45eb4e
    return v2 & -0x10000 | (int64_t)((256 * (int16_t)v2 >> 8) * (int16_t)v3);
}

// Address range: 0x45eb66 - 0x45eb6e
int64_t function_45eb66(void) {
    // 0x45eb66
    int64_t v1; // 0x45eb66
    int64_t v2 = v1;
    return (v2 - (int64_t)(int16_t)&g1) % 0x10000 | v2 & -0x10000;
}

// Address range: 0x45eb7e - 0x45ebcd
int64_t function_45eb7e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x45eb7e
    int64_t v1; // 0x45eb7e
    uint64_t v2 = v1;
    // 0x45eb81
    return v2 & 0xffffffff;
    int64_t v3 = a4 & 0xffffff00 | a3 | a3 % 256 & v2 / 256 + a4;
    int64_t result = function_45eb35(); // 0x45eb8f
    if ((int32_t)v3 == 0) {
        // 0x45eb93
        return result;
    }
    // 0x45ebc7
    return __asm_in((int16_t)v3);
}

// Address range: 0x45ebe8 - 0x45ebfc
int64_t function_45ebe8(int64_t a1, int64_t a2) {
    int64_t v1 = __asm_wait(); // 0x45ebe9
    int64_t v2; // 0x45ebe8
    int32_t * v3 = (int32_t *)(v2 - 34); // 0x45ebea
    *v3 = *v3 ^ 0x7c6e6bfe;
    return v1 & 0x860d25ad;
}

// Address range: 0x45ebff - 0x45ec0d
int64_t function_45ebff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45ebff
    return function_45ec58();
}

// Address range: 0x45ec2c - 0x45ec32
int64_t function_45ec2c(int64_t a1) {
    // 0x45ec2c
    int64_t v1; // 0x45ec2c
    bool v2; // 0x45ec2c
    if (!v2) {
        v1 = function_45ec34();
    }
    // 0x45ec2e
    return 2 * v1 & 0xfffffffe;
}
