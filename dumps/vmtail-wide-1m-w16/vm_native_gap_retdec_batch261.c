/*
 * Targeted RetDec C for native executable gap queue batch 261.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xea59c-0xea79c rank=- name=- kind=- bytes=- uncovered=-
 *   0xead9c-0xeaf9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x21cc66-0x21ce66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21ce66-0x21d066 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21d066-0x21d266 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21d266-0x21d466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21d466-0x21d666 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f2a1e-0x2f2c1e rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
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
extern int g5;
extern int g6;
extern int g7;
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

int64_t function_209f287();
int64_t function_2172ae3();
int64_t function_21cc66(void);
int64_t function_21cc6e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21ccc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21ccd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21cd5d(void);
int64_t function_21cdc3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_21ce18(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21ce67(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21ce83(void);
int64_t function_21ceed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21cf5f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21cf74(int64_t a1, int64_t a2);
int64_t function_21cf89(void);
int64_t function_21cf8a(void);
int64_t function_21cf8e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21cfb9(void);
int64_t function_21cfd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21cffe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21d025(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21d071(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21d0d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21d134(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21d17b(int64_t a1);
int64_t function_21d1ae(void);
int64_t function_21d1b0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_21d1e6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21d221(void);
int64_t function_21d244(void);
int64_t function_21d25f(int64_t a1);
int64_t function_21d264(int64_t a1, int64_t a2);
int64_t function_21d2c4(int64_t a1);
int64_t function_21d2c7(int64_t a1);
int64_t function_21d2d6(int64_t a1);
int64_t function_21d318(void);
int64_t function_21d321(int64_t a1);
int64_t function_21d428(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_21d44b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21d49f(void);
int64_t function_21d4a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21d4da(void);
int64_t function_21d4e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21d565(void);
int64_t function_21d599(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_21d628(void);
int64_t function_21d63f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_21d65a(void);
int64_t function_21d65b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f2a1e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f2a4c(void);
int64_t function_2f2a65(void);
int64_t function_2f2a8e(void);
int64_t function_2f2a99(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f2b16(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f2b33(void);
int64_t function_2f2b61(void);
int64_t function_2f2b91(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f2bc5(void);
int64_t function_2f2be1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5c108faf();
int64_t function_6c1e9d30();
int64_t function_7f25cfa1();
int64_t function_ea59c(void);
int64_t function_ea5e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ea5fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ea617(int64_t a1, int64_t a2, int64_t a3);
int64_t function_ea65e(int64_t a1);
int64_t function_ea662(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ea736(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ea75d(void);
int64_t function_ea793(int64_t a1);
int64_t function_ead9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_eadb7(int64_t a1, uint64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_eae65(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_eae73(int64_t a1);
int64_t function_eae9f(int64_t a1);
int64_t function_eaea6(int64_t a1, int64_t result);
int64_t function_eaee5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_eaf0b(int64_t a1);
int64_t function_eaf30(void);
int64_t function_ffffffff80216223();
int64_t function_ffffffff89feae01();
int64_t unknown_11e1919();
int64_t unknown_1498446f();
int64_t unknown_1a60fe6e();
int64_t unknown_1bd325bd();
int64_t unknown_20790eef();
int64_t unknown_3da6ece1();
int64_t unknown_400f5310();
int64_t unknown_4017f8fa();
int64_t unknown_761435b2();
int64_t unknown_ab79a7a();
int64_t unknown_ffffffff8eb855f5();
int64_t unknown_ffffffff8f19977d();
int64_t unknown_ffffffff9026bc78();
int64_t unknown_ffffffff97c82fc0();
int64_t unknown_ffffffff9d443224();
int64_t unknown_ffffffffa09aaabb();
int64_t unknown_ffffffffa31c4c59();
int64_t unknown_ffffffffab8a6d23();
int64_t unknown_ffffffffb22435f5();
int64_t unknown_ffffffffb3b7c8da();
int64_t unknown_ffffffffb43f12a5();
int64_t unknown_ffffffffb568d066();
int64_t unknown_ffffffffbc7aaf87();
int64_t unknown_ffffffffc86685ea();
int64_t unknown_ffffffffd1230d0d();
int64_t unknown_ffffffffd392d27f();
int64_t unknown_ffffffffd8d562df();
int64_t unknown_ffffffffd8e88a4a();
int64_t unknown_ffffffffe335dc0f();
int64_t unknown_ffffffffe51ca073();
int64_t unknown_ffffffffefbf7500();
int64_t unknown_fffffffff42c59cd();

// Address range: 0xea59c - 0xea5a1
int64_t function_ea59c(void) {
    // 0xea59c
    return function_ffffffff89feae01();
}

// Address range: 0xea5e8 - 0xea5fd
int64_t function_ea5e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)((int64_t)(-24 * *(int32_t *)(a2 - 51)) + 0x684a3a04); // 0xea5f2
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0xea5e8
    return v2 ^ 217;
}

// Address range: 0xea5fd - 0xea617
int64_t function_ea5fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xea5fd
    int64_t v1; // 0xea5fd
    char * v2 = (char *)(v1 - 0x78fe17cf); // 0xea5fd
    *v2 = *v2 + (char)v1;
    uint64_t v3 = __asm_wait((int64_t)&g7); // 0xea605
    *(char *)0x7089aab7 = (char)a4;
    char * v4 = (char *)(v1 - 0x16fe17a2); // 0xea60c
    *v4 = *v4 + (char)(v3 / 256);
    return function_ffffffff80216223();
}

// Address range: 0xea617 - 0xea646
int64_t function_ea617(int64_t a1, int64_t a2, int64_t a3) {
    // 0xea617
    unknown_ffffffff9d443224();
    *(int32_t *)0x7aba1decf0e101e8 = (int32_t)*(int64_t *)0x976eb485;
    int64_t v1; // 0xea617
    if ((v1 & 1024) == 0) {
        // 0xea63c
        return __asm_hlt();
    }
    int32_t * v2 = (int32_t *)(a1 - 7); // 0xea635
    *v2 = *v2 + (int32_t)a3;
    return __asm_wait((int64_t)&g7);
}

// Address range: 0xea65e - 0xea65f
int64_t function_ea65e(int64_t a1) {
    // 0xea65e
    int64_t result; // 0xea65e
    return result;
}

// Address range: 0xea662 - 0xea71e
int64_t function_ea662(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xea662
    if (a4 != 1) {
        // 0xea6b9
        __asm_int1();
        return __asm_sti();
    }
    int32_t v1 = __asm_in((int16_t)a3); // 0xea6c9
    char * v2 = (char *)(int64_t)v1; // 0xea6ca
    *v2 = (char)v1;
    if ((v1 & -256 | (int32_t)*v2) != 0x54c9bad5) {
        // 0xea6de
        return unknown_ffffffffa09aaabb();
    }
    char v3 = *(char *)-0x77e91a01; // 0xea6f8
    int64_t v4; // 0xea662
    *(char *)-0x77e91a01 = v3 + (char)((uint64_t)v4 / 256);
    int64_t v5 = unknown_ffffffff8f19977d(); // 0xea700
    float80_t v6; // 0xea662
    *(float64_t *)0x9b5bdc = (float64_t)v6;
    return v5 & -230;
}

// Address range: 0xea736 - 0xea73e
int64_t function_ea736(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xea736
    return function_5c108faf();
}

// Address range: 0xea75d - 0xea75f
int64_t function_ea75d(void) {
    // 0xea75d
    int64_t result; // 0xea75d
    return result;
}

// Address range: 0xea793 - 0xea794
int64_t function_ea793(int64_t a1) {
    // 0xea793
    int64_t result; // 0xea793
    return result;
}

// Address range: 0xead9c - 0xeada2
int64_t function_ead9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x41fea36); // 0xead9c
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0xead9c
    return result;
}

// Address range: 0xeadb7 - 0xeae65
int64_t function_eadb7(int64_t a1, uint64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int32_t v2 = *(int32_t *)(a2 + 29); // 0xeadb7
    int64_t v3 = unknown_ffffffff97c82fc0(); // 0xeadba
    int64_t v4; // 0xeadb7
    bool v5; // 0xeadb7
    if (v5) {
        // 0xeadc1
        __asm_out(112, (int32_t)v3);
        int64_t v6 = v3 + 0xe814b548; // 0xeadc3
        int32_t * v7 = (int32_t *)(v6 & 0xffffffff); // 0xeadc8
        *v7 = *v7 + (int32_t)v6;
        float80_t v8; // 0xeadb7
        *(float80_t *)((v4 + a4 & 0xffffffff) - 124) = __asm_fbstp(v8 * (float80_t)v2);
        return unknown_3da6ece1();
    }
    int64_t v9 = v3 & -256 | a2 % 256; // 0xeadf8
    int64_t result = 0xc201e8f5 * v4 & 0xffffffff; // 0xeadf9
    unsigned char v10 = *(char *)(result + 0x80000f + v9) | (char)(a4 / 256); // 0xeadff
    int64_t v11 = 256 * (int64_t)v10 | a4 & -0xff01; // 0xeadff
    uint64_t v12 = v11 - 1; // 0xeae06
    if (v10 == 0 || v12 == 0) {
        // 0xeae08
        unknown_400f5310();
        char * v13 = (char *)(result + 0x430099aa); // 0xeae0f
        *v13 = *v13 + (char)(v12 / 256);
        *(char *)v1 = __asm_insb((int16_t)a3);
        unknown_ffffffffc86685ea();
        unknown_ffffffffab8a6d23();
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a3;
        *(int64_t *)0xf86101e0 = result;
        *(int32_t *)(v11 + 0x1080088) = (int32_t)v1;
        int32_t * v14 = (int32_t *)(a2 - 0x3c7735d1 + (v5 ? -1 : 1)); // 0xeae3a
        *v14 = *v14 - 0x79efe20;
        return result;
    }
    int32_t * v15 = (int32_t *)(v9 - 123); // 0xeae5a
    *v15 = *v15 + (int32_t)v4;
    return (int64_t)(*(int32_t *)(v9 & 0xffffffff) & (int32_t)a3);
}

// Address range: 0xeae65 - 0xeae72
int64_t function_eae65(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xeae65
    __asm_in_133((int16_t)a3);
    unknown_1a60fe6e();
    return function_eaee5(a4, a2, a3);
}

// Address range: 0xeae73 - 0xeae74
int64_t function_eae73(int64_t a1) {
    // 0xeae73
    int64_t result; // 0xeae73
    return result;
}

// Address range: 0xeae9f - 0xeaea6
int64_t function_eae9f(int64_t a1) {
    int64_t result = __asm_wait(a1); // 0xeae9f
    int64_t v1; // 0xeae9f
    *(int32_t *)result = 2 * (int32_t)v1;
    return result;
}

// Address range: 0xeaea6 - 0xeaeab
int64_t function_eaea6(int64_t a1, int64_t result) {
    int32_t * v1 = (int32_t *)(a1 - 52); // 0xeaea7
    int64_t v2; // 0xeaea6
    *v1 = *v1 + (int32_t)v2;
    return result;
}

// Address range: 0xeaee5 - 0xeaef5
int64_t function_eaee5(int64_t a1, int64_t a2, int64_t a3) {
    // 0xeaee5
    unknown_20790eef();
    return unknown_ffffffffb22435f5() & -256 | (int64_t)__asm_in_133((int16_t)a3);
}

// Address range: 0xeaf0b - 0xeaf0c
int64_t function_eaf0b(int64_t a1) {
    // 0xeaf0b
    int64_t result; // 0xeaf0b
    return result;
}

// Address range: 0xeaf30 - 0xeaf33
int64_t function_eaf30(void) {
    // 0xeaf30
    int64_t result; // 0xeaf30
    return result;
}

// Address range: 0x21cc66 - 0x21cc6d
int64_t function_21cc66(void) {
    // 0x21cc66
    *(char *)0x5c23b46f = *(char *)0x5c23b46f + 39;
    int64_t result; // 0x21cc66
    return result;
}

// Address range: 0x21cc6e - 0x21cc7b
int64_t function_21cc6e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x21cc6e
    int64_t result; // 0x21cc6e
    return result;
}

// Address range: 0x21ccc2 - 0x21ccd6
int64_t function_21ccc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21ccc2
    int64_t v1; // 0x21ccc2
    return v1 & -256 | (int64_t)__asm_in_133((int16_t)a3);
}

// Address range: 0x21ccd9 - 0x21cd4f
int64_t function_21ccd9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffd8d562df(); // 0x21ccd9
    uint64_t v2 = (a4 & 0x99010097 | (int64_t)(int32_t)&g2) - 0xd101e8e1; // 0x21ccf5
    int64_t result = v2 & 0xffffffff; // 0x21cd38
    if (v2 % 2 == 0) {
        // 0x21cd3a
        result = unknown_ffffffffd8e88a4a(0xf901e865);
        *(char *)0x13b64f73 = (char)v1;
    }
    // 0x21cd4f
    return result;
}

// Address range: 0x21cd5d - 0x21cd62
int64_t function_21cd5d(void) {
    // 0x21cd5d
    return function_209f287();
}

// Address range: 0x21cdc3 - 0x21ce05
int64_t function_21cdc3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x21cdc3
    int64_t v1; // 0x21cdc3
    int32_t * v2 = (int32_t *)(v1 - 57); // 0x21cdc5
    *v2 = *v2 | 48;
    *(char *)0x3d114ed0 = *(char *)0x3d114ed0 + (char)(v1 / 256);
    uint32_t v3 = *(int32_t *)(a4 + 0x634090bb); // 0x21cdcf
    uint32_t v4 = (int32_t)a4; // 0x21cdcf
    int32_t * v5 = (int32_t *)(a1 + 0x1e006803); // 0x21cdd7
    *v5 = *v5 + v4;
    char v6 = *(char *)((v1 + a4 / 256 + (int64_t)(v3 < v4)) % 256 + (v1 & -256 | 122)); // 0x21cdde
    char v7 = *(char *)0x7912f4b7; // 0x21cdea
    *(char *)0x7912f4b7 = v6 + (char)((v1 & 256) != 0) + v7;
    return function_6c1e9d30(*(int32_t *)0x954c01 + 0x60a9e6ed);
}

// Address range: 0x21ce18 - 0x21ce66
int64_t function_21ce18(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21ce18
    int64_t v1; // 0x21ce18
    bool v2; // 0x21ce18
    if (v2) {
        return (int64_t)&v1;
    }
    // 0x21ce1b
    *(int32_t *)a2 = (int32_t)a2 - (v2 ? 0xd91642a : 0xd916429);
    int64_t v3; // 0x21ce18
    *(char *)-0x50e12fd0 = *(char *)-0x50e12fd0 + (char)(v3 / 256);
    unsigned char v4 = (char)a4 % 32; // 0x21ce2f
    if (v4 != 0) {
        char * v5 = (char *)(4 * a1 + 0x1bffee3 + v3); // 0x21ce2f
        *v5 = *v5 << v4;
    }
    return (int64_t)&v1;
}

// Address range: 0x21ce67 - 0x21ce7e
int64_t function_21ce67(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21ce67
    int64_t v1; // 0x21ce67
    *(char *)a4 = (char)(v1 / 256) + (char)v1;
    int32_t * v2 = (int32_t *)(v1 - 0x199a955f); // 0x21ce6c
    int32_t v3 = a3; // 0x21ce6c
    *v2 = *v2 + v3;
    int64_t result = __asm_hlt(); // 0x21ce72
    int32_t * v4 = (int32_t *)(a3 + 0x3c0ad850); // 0x21ce75
    *v4 = *v4 + v3;
    return result;
}

// Address range: 0x21ce83 - 0x21ce84
int64_t function_21ce83(void) {
    // 0x21ce83
    int64_t result; // 0x21ce83
    return result;
}

// Address range: 0x21ceed - 0x21cf02
int64_t function_21ceed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21ceed
    unknown_ffffffff8eb855f5();
    *(char *)-0x705eefb6 = (char)a4;
    return unknown_ffffffffefbf7500();
}

// Address range: 0x21cf5f - 0x21cf74
int64_t function_21cf5f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x21cf5f
    unknown_ffffffffb568d066();
    bool v1; // 0x21cf5f
    int64_t v2 = v1 ? -1 : 1; // 0x21cf6b
    return unknown_ffffffffe51ca073(v2 + a1, v2 + a2);
}

// Address range: 0x21cf74 - 0x21cf78
int64_t function_21cf74(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 - 16); // 0x21cf74
    int64_t result; // 0x21cf74
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x21cf89 - 0x21cf8a
int64_t function_21cf89(void) {
    // 0x21cf89
    int64_t result; // 0x21cf89
    return result;
}

// Address range: 0x21cf8a - 0x21cf8d
int64_t function_21cf8a(void) {
    // 0x21cf8a
    int64_t result; // 0x21cf8a
    return result;
}

// Address range: 0x21cf8e - 0x21cf9e
int64_t function_21cf8e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x21cf8e
    int64_t v1; // 0x21cf8e
    int32_t * v2 = (int32_t *)(v1 + 27); // 0x21cf8e
    *v2 = *v2 + (int32_t)a3;
    int64_t v3; // 0x21cf8e
    return (int64_t)(*(int32_t *)&v3 * (int32_t)v1);
}

// Address range: 0x21cfb9 - 0x21cfba
int64_t function_21cfb9(void) {
    // 0x21cfb9
    int64_t result; // 0x21cfb9
    return result;
}

// Address range: 0x21cfd1 - 0x21cffd
int64_t function_21cfd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21cfd1
    bool v1; // 0x21cfd1
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x21cfd1
    int64_t v3; // 0x21cfd1
    int16_t v4 = v3; // 0x21cfd2
    int16_t v5 = (int16_t)v3 % 256; // 0x21cfd2
    int64_t v6 = 0x100000000 * (v3 & 0xffff0000 | (int64_t)(v4 / v5 % 256) | (int64_t)(256 * (v4 % v5))) >> 32; // 0x21cfd5
    uint64_t v7 = v6 * v6; // 0x21cfd5
    int16_t v8 = v7 / 0x100000000; // 0x21cfda
    *(char *)v2 = __asm_insb(v8);
    __asm_out_134(v8, (char)v7);
    while ((int32_t)a4 != -(int32_t)v2) {
        // 0x21cfdb
        __asm_out_134(v8, (char)v7);
    }
    // 0x21cfdf
    __asm_out_135(v8, (int32_t)v7);
    return unknown_4017f8fa(0xee9cbf9d) & -256 | 150;
}

// Address range: 0x21cffe - 0x21d01e
int64_t function_21cffe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21cffe
    int64_t v1; // 0x21cffe
    char * v2 = (char *)(a4 - 24 + 2 * v1); // 0x21d000
    *v2 = *v2 + (char)((int64_t)&g6 >> 8);
    int32_t * v3 = (int32_t *)(a4 - 11); // 0x21d004
    *v3 = *v3 + (int32_t)a4;
    int64_t result = unknown_ffffffffd1230d0d(); // 0x21d007
    int32_t * v4 = (int32_t *)(v1 + 0x1307d310); // 0x21d00e
    *v4 = *v4 + (int32_t)a1;
    char * v5 = (char *)(result - 120); // 0x21d015
    *v5 = *v5 + (char)v1;
    return result;
}

// Address range: 0x21d025 - 0x21d04c
int64_t function_21d025(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 109); // 0x21d025
    int64_t v2; // 0x21d025
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x21d025
    *(char *)a2 = *(char *)&v3 & (char)v2;
    *(int32_t *)-0x1617edef = (int32_t)a2;
    if (2 * (int32_t)v2 >= 0) {
        function_21cfb9();
    }
    // 0x21d038
    unknown_11e1919();
    return unknown_1bd325bd();
}

// Address range: 0x21d071 - 0x21d074
int64_t function_21d071(int64_t a1, int64_t a2, int64_t a3) {
    // 0x21d071
    return a3 & 0xffffffff;
}

// Address range: 0x21d0d1 - 0x21d115
int64_t function_21d0d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21d0d1
    int64_t v1; // 0x21d0d1
    int64_t v2 = v1;
    int64_t v3 = a2;
    bool v4; // 0x21d0d1
    if (v4) {
        uint64_t result = unknown_ffffffffb3b7c8da(); // 0x21d0d4
        *(char *)v2 = (char)(result / 256) + (char)v2;
        return result;
    }
    int32_t * v5 = (int32_t *)(a4 + 0x719458f5); // 0x21d0ef
    *v5 = *v5 + (int32_t)v1;
    int32_t * v6 = (int32_t *)(v3 - 109); // 0x21d0fc
    *v6 = *v6 + (int32_t)a3;
    uint64_t v7 = unknown_ffffffffe335dc0f(); // 0x21d0ff
    char v8 = *(char *)((v2 & -256 | -v2 % 256) - 0x759ffe18); // 0x21d104
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    *(char *)a1 = (char)v7;
    unsigned char v9 = *(char *)0x53f25b4c01e8fa05; // 0x21d10c
    return 256 * (int64_t)(v8 ^ (char)(v7 / 256)) | v7 & -0x10000 | (int64_t)v9;
}

// Address range: 0x21d134 - 0x21d17b
int64_t function_21d134(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21d134
    int64_t v1; // 0x21d134
    int32_t * v2 = (int32_t *)(v1 + 91); // 0x21d134
    uint32_t v3 = *v2; // 0x21d134
    *v2 = v3 / 512 | 0x800000 * v3;
    int64_t v4; // 0x21d134
    __asm_outsb((int16_t)a3, *(char *)&v4);
    int32_t * v5 = (int32_t *)(a5 - 12); // 0x21d14a
    *v5 = *v5 - (((int32_t)v1 ^ -4) < 0x1e84b74 ? -0x23e34167 : -0x23e34168);
    unknown_ffffffffa31c4c59();
    char * v6 = (char *)(v1 + 114); // 0x21d166
    *v6 = *v6 & (char)(v1 / 256);
    unknown_1498446f();
    unknown_ab79a7a();
    return __asm_hlt();
}

// Address range: 0x21d17b - 0x21d17e
int64_t function_21d17b(int64_t a1) {
    // 0x21d17b
    int64_t result; // 0x21d17b
    return result;
}

// Address range: 0x21d1ae - 0x21d1af
int64_t function_21d1ae(void) {
    // 0x21d1ae
    return __asm_hlt();
}

// Address range: 0x21d1b0 - 0x21d1e6
int64_t function_21d1b0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a2 - 37); // 0x21d1b0
    int64_t v2; // 0x21d1b0
    *v1 = *v1 | (char)v2;
    char * v3 = (char *)((int64_t)((int32_t)v2 >> 31) - 80); // 0x21d1c4
    *v3 = *v3 + (char)(a4 / 256);
    *(int64_t *)((unknown_fffffffff42c59cd() & 0xffffffff) - 8) = -0x60604e73;
    return *(int64_t *)0x3158dff4fb3b01e8;
}

// Address range: 0x21d1e6 - 0x21d1e9
int64_t function_21d1e6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x21d1e6
    int64_t result; // 0x21d1e6
    *(int32_t *)a2 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x21d221 - 0x21d222
int64_t function_21d221(void) {
    // 0x21d221
    int64_t result; // 0x21d221
    return result;
}

// Address range: 0x21d244 - 0x21d246
int64_t function_21d244(void) {
    // 0x21d244
    return function_21d221();
}

// Address range: 0x21d25f - 0x21d260
int64_t function_21d25f(int64_t a1) {
    // 0x21d25f
    int64_t result; // 0x21d25f
    return result;
}

// Address range: 0x21d264 - 0x21d281
int64_t function_21d264(int64_t a1, int64_t a2) {
    // 0x21d264
    return unknown_ffffffffd392d27f();
}

// Address range: 0x21d2c4 - 0x21d2c5
int64_t function_21d2c4(int64_t a1) {
    // 0x21d2c4
    int64_t result; // 0x21d2c4
    return result;
}

// Address range: 0x21d2c7 - 0x21d2ca
int64_t function_21d2c7(int64_t a1) {
    // 0x21d2c7
    int64_t result; // 0x21d2c7
    return result;
}

// Address range: 0x21d2d6 - 0x21d2da
int64_t function_21d2d6(int64_t a1) {
    // 0x21d2d6
    int64_t result; // 0x21d2d6
    return result;
}

// Address range: 0x21d318 - 0x21d319
int64_t function_21d318(void) {
    // 0x21d318
    int64_t result; // 0x21d318
    return result;
}

// Address range: 0x21d321 - 0x21d324
int64_t function_21d321(int64_t a1) {
    // 0x21d321
    int64_t result; // 0x21d321
    return result;
}

// Address range: 0x21d428 - 0x21d442
int64_t function_21d428(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x21d428
    int64_t v1; // 0x21d428
    *(char *)(v1 + 0x2c9fabb5) = (char)(a3 / 256);
    int32_t * v2 = (int32_t *)(a4 + 0x3a2f8bf5); // 0x21d435
    *v2 = *v2 + (int32_t)a1;
    char v3 = __asm_in_136(-95); // 0x21d43b
    int32_t * v4 = (int32_t *)(a1 - 10); // 0x21d43d
    *v4 = *v4 / 2;
    return v1 & -256 | (int64_t)v3;
}

// Address range: 0x21d44b - 0x21d49d
int64_t function_21d44b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = a5; // 0x21d455
    int64_t v2; // 0x21d44b
    int32_t v3 = v2; // 0x21d455
    int32_t v4 = v3 + v1; // 0x21d455
    if (v4 < 0 == ((v4 ^ v1) & (v4 ^ v3)) < 0 != v4 != 0) {
        char * v5 = (char *)(a3 - 0x5c78f8b0 + 2 * a2); // 0x21d459
        *v5 = *v5 + (char)((int64_t)&g5 >> 8);
        *(int64_t *)((v2 & 0xffffffff) - 8) = 109;
        return (int64_t)*(int32_t *)-0x620c8cc55f54fe18;
    }
    // 0x21d46c
    __asm_outsd((int16_t)a3, (int32_t)a2);
    __asm_wait((int64_t)&g7);
    int64_t v6 = unknown_ffffffff9026bc78(); // 0x21d472
    int32_t * v7 = (int32_t *)(a1 - 6); // 0x21d47a
    *v7 = *v7 + (int32_t)v6;
    __asm_wait((int64_t)&g7);
    __asm_out_137(60, (char)__asm_sti());
    uint64_t v8 = unknown_ffffffffbc7aaf87(); // 0x21d481
    uint64_t v9 = v8 / 256; // 0x21d486
    *(char *)0x1cd688e1 = *(char *)0x1cd688e1 | (char)v9;
    int64_t result = v8 & 0xffffffff; // 0x21d494
    char * v10 = (char *)result; // 0x21d495
    *v10 = *v10 + (char)(v9 + a4);
    *(int32_t *)a1 = *(int32_t *)(2 * a2 & 0xfffffffe);
    return result;
}

// Address range: 0x21d49f - 0x21d4a5
int64_t function_21d49f(void) {
    // 0x21d49f
    return unknown_ffffffffb43f12a5();
}

// Address range: 0x21d4a7 - 0x21d4ba
int64_t function_21d4a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21d4a7
    int64_t v1; // 0x21d4a7
    *(int32_t *)(a2 + 8) = (int32_t)(256 * v1 + a3 & 0xff00 | a3 & 0xffff00ff);
    return unknown_761435b2();
}

// Address range: 0x21d4da - 0x21d4dd
int64_t function_21d4da(void) {
    // 0x21d4da
    int64_t result; // 0x21d4da
    return result;
}

// Address range: 0x21d4e1 - 0x21d4ee
int64_t function_21d4e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21d4e1
    float80_t v1; // 0x21d4e1
    *(int16_t *)(a3 - 0x746a25ec) = (int16_t)v1;
    int64_t v2; // 0x21d4e1
    return (int64_t)*(int32_t *)&v2;
}

// Address range: 0x21d565 - 0x21d566
int64_t function_21d565(void) {
    // 0x21d565
    int64_t result; // 0x21d565
    return result;
}

// Address range: 0x21d599 - 0x21d626
int64_t function_21d599(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x21d599
    int3_t v1; // 0x21d599
    int3_t v2 = v1;
    int64_t v3 = a4;
    int64_t v4 = a1;
    int64_t v5; // 0x21d599
    __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v2) + (float80_t)(float32_t)(int32_t)v5);
    v4 = a1;
    int64_t result; // 0x21d599
    bool v6; // 0x21d599
    uint64_t v7 = 0; // 0x21d59d
    int32_t * v8 = (int32_t *)(a3 - 99); // 0x21d59f
    *v8 = *v8 + (int32_t)a3;
    uint32_t v9 = *(int32_t *)&v4; // 0x21d5a2
    int64_t v10 = v6 ? -4 : 4; // 0x21d5a2
    v4 += v10;
    char v11 = *(char *)&v3; // 0x21d5a3
    *(char *)v3 = (char)(v9 > (int32_t)v7) + (char)(v7 / 256) + v11;
    int64_t v12 = v3 - 1; // 0x21d5a5
    v3 = v12;
    if (v12 == 0) {
        int64_t v13 = v4; // 0x21d5b7
        int64_t v14 = a2; // 0x21d599
        while (true) {
            int32_t * v15 = (int32_t *)v13; // 0x21d5b3
            *v15 = *v15 + (int32_t)v14;
            *(int32_t *)v4 = *(int32_t *)v14;
            v13 = v4 + v10;
            v4 = v13;
            v14 += v10;
        }
    }
    // 0x21d59d
    result = v7 & 0xffffffff;
    char v16 = result; // 0x21d61b
    __asm_out_134((int16_t)a3, v16);
    *(char *)(v4 + (v6 ? -1 : 1)) = v16;
    return result;
}

// Address range: 0x21d628 - 0x21d629
int64_t function_21d628(void) {
    // 0x21d628
    int64_t result; // 0x21d628
    return result;
}

// Address range: 0x21d63f - 0x21d658
int64_t function_21d63f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x21d63f
    int64_t v1; // 0x21d63f
    int64_t v2 = v1;
    int64_t result = (v2 + a4 / 256) % 256 | v2 & -256; // 0x21d63f
    int32_t * v3 = (int32_t *)(a2 + 59); // 0x21d641
    *v3 = *v3 + (int32_t)v1;
    if (a4 != 1) {
        // 0x21d659
        return result;
    }
    int64_t result2 = result + 0x4b0e307a & 0xffffffff ^ 0x5801e89c; // 0x21d64f
    __asm_out_135((int16_t)a3, (int32_t)result2);
    return result2;
}

// Address range: 0x21d65a - 0x21d65b
int64_t function_21d65a(void) {
    // 0x21d65a
    int64_t result; // 0x21d65a
    return result;
}

// Address range: 0x21d65b - 0x21d665
int64_t function_21d65b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21d65b
    __asm_in_136(34);
    return function_21d628();
}

// Address range: 0x2f2a1e - 0x2f2a2b
int64_t function_2f2a1e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f2a1e
    int64_t v1; // 0x2f2a1e
    uint64_t v2 = v1;
    char v3 = *(char *)-0x17be722d; // 0x2f2a1e
    int32_t * v4 = (int32_t *)(a3 - 0x201f7378); // 0x2f2a24
    *v4 = *v4 + (int32_t)a3;
    bool v5; // 0x2f2a1e
    return 256 * (int64_t)((char)v5 - v3 + (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x2f2a4c - 0x2f2a5a
int64_t function_2f2a4c(void) {
    // 0x2f2a4c
    return function_2172ae3();
}

// Address range: 0x2f2a65 - 0x2f2a66
int64_t function_2f2a65(void) {
    // 0x2f2a65
    int64_t result; // 0x2f2a65
    return result;
}

// Address range: 0x2f2a8e - 0x2f2a96
int64_t function_2f2a8e(void) {
    // 0x2f2a8e
    __asm_in_138(-24);
    return __asm_wait((int64_t)&g7);
}

// Address range: 0x2f2a99 - 0x2f2b13
int64_t function_2f2a99(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f2a99
    int64_t v1; // 0x2f2a99
    *(int32_t *)0x157a01e8937da650 = (int32_t)v1;
    *(char *)a1 = __asm_insb((int16_t)a3 & -256 | 122);
    int64_t v2; // 0x2f2a99
    int64_t v3 = v1 & -256 | (int64_t)*(char *)&v2; // 0x2f2aa7
    int32_t * v4 = (int32_t *)(4 * a4 - 0x117bc6c8 + v3); // 0x2f2aac
    *v4 = *v4 + (int32_t)a1;
    *(char *)(a4 + 0x2201e818) = (char)((uint64_t)v1 / 256);
    return v3 & -92 ^ 160;
}

// Address range: 0x2f2b16 - 0x2f2b17
int64_t function_2f2b16(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f2b16
    return a4 & 0xffffffff;
}

// Address range: 0x2f2b33 - 0x2f2b35
int64_t function_2f2b33(void) {
    // 0x2f2b33
    int64_t result; // 0x2f2b33
    return result;
}

// Address range: 0x2f2b61 - 0x2f2b62
int64_t function_2f2b61(void) {
    // 0x2f2b61
    int64_t result; // 0x2f2b61
    return result;
}

// Address range: 0x2f2b91 - 0x2f2ba8
int64_t function_2f2b91(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f2b91
    int64_t v1; // 0x2f2b91
    char v2 = v1; // 0x2f2b99
    char v3 = v2 - (char)v1; // 0x2f2b99
    unsigned char v4 = (char)a4 % 32; // 0x2f2b9a
    bool v5 = ((v3 ^ v2) & (char)(v1 ^ v1)) < 0; // 0x2f2b9a
    if (v4 != 0) {
        unsigned char v6 = (char)a3;
        unsigned char v7 = v6 << 8 - v4 | v6 >> v4; // 0x2f2b9a
        *(char *)a3 = v7;
        v5 = v4 == 1 ? v7 / 128 != v7 / 64 % 2 : ((v3 ^ v2) & (char)(v1 ^ v1)) < 0;
    }
    if (v3 < 0 == v5 == (v3 != 0)) {
        function_2f2b61();
    }
    // 0x2f2b9e
    return function_7f25cfa1();
}

// Address range: 0x2f2bc5 - 0x2f2bc9
int64_t function_2f2bc5(void) {
    // 0x2f2bc5
    int64_t result; // 0x2f2bc5
    return result;
}

// Address range: 0x2f2be1 - 0x2f2bea
int64_t function_2f2be1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f2be1
    int64_t result; // 0x2f2be1
    int32_t * v1 = (int32_t *)(result - 0x405ff81b); // 0x2f2be1
    *v1 = *v1 - (int32_t)a2;
    return result;
}
