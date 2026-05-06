/*
 * Targeted RetDec C for native executable gap queue batch 274.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x21e666-0x21e866 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21e866-0x21ea66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21ea66-0x21ec66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21ec66-0x21ee66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x314abb-0x314cbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x459234-0x459434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x459634-0x459834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x459a34-0x459c34 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
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

int64_t function_15eeead();
int64_t function_21e666(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_21e692(void);
int64_t function_21e6af(void);
int64_t function_21e6c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21e764(int64_t a1);
int64_t function_21e78c(int64_t a1);
int64_t function_21e818(void);
int64_t function_21e81a(void);
int64_t function_21e82e(int64_t a1);
int64_t function_21e85b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21e877(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21e8b6(void);
int64_t function_21e8cd(int64_t a1);
int64_t function_21e937(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_21e991(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21e9cd(int64_t a1);
int64_t function_21ea9e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, char a5);
int64_t function_21eb7a(void);
int64_t function_21eb7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21eb81(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21eca6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21ecc0(void);
int64_t function_21ed05(int64_t a1);
int64_t function_21ed30(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_21ed53(int64_t a1, int64_t a2);
int64_t function_21ed6e(void);
int64_t function_21ede0(void);
int64_t function_21edf6(int64_t a1);
int64_t function_21ee35(int64_t a1);
int64_t function_314abb(int64_t a1, int64_t result);
int64_t function_314b40(void);
int64_t function_314b7c(void);
int64_t function_314b88(int64_t a1, int64_t a2);
int64_t function_314bbd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_314bd9(void);
int64_t function_314bed(int64_t a1, int64_t a2, int64_t a3);
int64_t function_314c2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_314c7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_314cae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_458ffbc9();
int64_t function_459234(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_459240(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_459353(void);
int64_t function_459356(int64_t a1);
int64_t function_459398(void);
int64_t function_4593a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4593ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4593ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45942e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t result);
int64_t function_459461();
int64_t function_459634(void);
int64_t function_459638(void);
int64_t function_459691(void);
int64_t function_4596d8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_459701(void);
int64_t function_459706(int64_t a1, int64_t a2, int64_t a3);
int64_t function_459715(void);
int64_t function_45973f(void);
int64_t function_459754(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4597c8(int64_t a1);
int64_t function_4597d9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_459a2a();
int64_t function_459a34(int64_t a1, int64_t a2, int64_t result);
int64_t function_459aa0(int64_t a1);
int64_t function_459ac0(void);
int64_t function_459ac5(int64_t a1);
int64_t function_459af0(void);
int64_t function_459b95(void);
int64_t function_4e90a991();
int64_t function_6b90a303();
int64_t function_ffffffffa9966f58();
int64_t function_ffffffffdd5bf4d2();
int64_t function_ffffffffe849d3ac();
int64_t unknown_24a8c9c();
int64_t unknown_3abdcb15();
int64_t unknown_6ded37a2();
int64_t unknown_79b48f6f();
int64_t unknown_ffffffff83b51eb8();
int64_t unknown_ffffffff8a9dcc42();
int64_t unknown_ffffffff8ea6e96a();
int64_t unknown_ffffffffa41a7716();
int64_t unknown_ffffffffab1b218b();
int64_t unknown_ffffffffcc6e4edb();

// Address range: 0x21e666 - 0x21e688
int64_t function_21e666(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x21e666
    int64_t result; // 0x21e666
    bool v1; // 0x21e666
    if (v1) {
        // 0x21e682
        __asm_int(61);
        *(int32_t *)a2 = (int32_t)a2 - 1 + (int32_t)a4;
        return result;
    }
    char * v2 = (char *)(a2 - 124); // 0x21e66a
    *v2 = *v2 + (char)(a3 / 256);
    char * v3 = (char *)a1; // 0x21e674
    *v3 = (char)a1 + 61;
    *v3 = *(char *)((a2 | a1) & 0xffffffff);
    return result & -256 | 166;
}

// Address range: 0x21e692 - 0x21e693
int64_t function_21e692(void) {
    // 0x21e692
    int64_t result; // 0x21e692
    return result;
}

// Address range: 0x21e6af - 0x21e6b0
int64_t function_21e6af(void) {
    // 0x21e6af
    int64_t result; // 0x21e6af
    return result;
}

// Address range: 0x21e6c8 - 0x21e6fb
int64_t function_21e6c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21e6c8
    int64_t v1; // 0x21e6c8
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = a3;
    int64_t v5 = a4 - 1; // 0x21e6cf
    int32_t v6 = a2;
    if (v5 != 0) {
        int64_t result = v3 & -0x10000 | (int64_t)&g1 | (v3 + 152) % 256; // 0x21e6f3
        if (v5 != 1) {
            result = function_21e692();
        }
        int32_t * v7 = (int32_t *)(a1 + 0x13d00a6); // 0x21e6f5
        *v7 = *v7 + v6;
        return result;
    }
    char v8 = *(char *)(2 * v3 - 0x7087fec3); // 0x21e6c8
    int64_t v9 = unknown_ffffffffcc6e4edb(); // 0x21e6d1
    *(int32_t *)a1 = v6;
    int32_t v10 = *(int32_t *)v9; // 0x21e6d8
    int64_t v11 = v9; // 0x21e6da
    if ((v10 ^ (int32_t)(256 * (int64_t)(v8 | (char)(v2 / 256)) || v2 & 0xffff00ff)) < 1) {
        v11 = function_21e6af();
    }
    // 0x21e6dc
    *(char *)v4 = *(char *)&v4 - (char)(v11 / 256);
    return v11 & -256 | (int64_t)*(char *)0x13d00800700f8f3;
}

// Address range: 0x21e764 - 0x21e76c
int64_t function_21e764(int64_t a1) {
    // 0x21e764
    unknown_ffffffff8ea6e96a(a1);
    return __asm_hlt();
}

// Address range: 0x21e78c - 0x21e78d
int64_t function_21e78c(int64_t a1) {
    // 0x21e78c
    int64_t result; // 0x21e78c
    return result;
}

// Address range: 0x21e818 - 0x21e81a
int64_t function_21e818(void) {
    // 0x21e818
    return function_21e82e((int64_t)&g4);
}

// Address range: 0x21e81a - 0x21e81d
int64_t function_21e81a(void) {
    // 0x21e81a
    int64_t result; // 0x21e81a
    return result;
}

// Address range: 0x21e82e - 0x21e846
int64_t function_21e82e(int64_t a1) {
    // 0x21e82e
    return unknown_ffffffff8a9dcc42();
}

// Address range: 0x21e85b - 0x21e86f
int64_t function_21e85b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x21e85b
    int64_t v1; // 0x21e85b
    int32_t * v2 = (int32_t *)(v1 - 0x5ad78a); // 0x21e85b
    uint32_t v3 = *v2; // 0x21e85b
    uint32_t v4 = v3 + (int32_t)v1; // 0x21e85b
    *v2 = v4;
    int64_t v5; // 0x21e85b
    char v6 = *(char *)&v5; // 0x21e861
    *(char *)a3 = v6 - (char)(v1 / 256) + (char)(v4 < v3);
    int64_t v7; // 0x21e85b
    *(int32_t *)a1 = *(int32_t *)&v7;
    bool v8; // 0x21e85b
    int64_t v9 = v8 ? -4 : 4; // 0x21e863
    return unknown_79b48f6f(v9 + a1, v9 + a2);
}

// Address range: 0x21e877 - 0x21e8a0
int64_t function_21e877(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21e877
    __asm_in(7);
    int64_t v1; // 0x21e877
    int32_t * v2 = (int32_t *)(5 * v1); // 0x21e880
    *v2 = *v2 + (int32_t)a1;
    unknown_ffffffffab1b218b();
    unknown_24a8c9c(0x800091ef);
    return function_ffffffffdd5bf4d2();
}

// Address range: 0x21e8b6 - 0x21e8bc
int64_t function_21e8b6(void) {
    // 0x21e8b6
    int64_t result; // 0x21e8b6
    return result;
}

// Address range: 0x21e8cd - 0x21e8ce
int64_t function_21e8cd(int64_t a1) {
    // 0x21e8cd
    int64_t result; // 0x21e8cd
    return result;
}

// Address range: 0x21e937 - 0x21e966
int64_t function_21e937(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x21e937
    int64_t v1; // 0x21e937
    uint64_t v2 = v1;
    int64_t v3 = v1;
    *(int32_t *)v3 = 2 * (int32_t)v3;
    char * v4 = (char *)a3; // 0x21e939
    int64_t v5; // 0x21e937
    int64_t v6; // 0x21e937
    *v4 = *(char *)&v6 + (char)(v5 / 256);
    int64_t v7 = v5;
    *(char *)v7 = *(char *)&v5 + (char)v7;
    char v8 = a3; // 0x21e93d
    *v4 = *(char *)&v6 + v8;
    char * v9 = (char *)(v5 + 5); // 0x21e93f
    unsigned char v10 = *v9; // 0x21e93f
    unsigned char v11 = v10 + (char)(v5 / 256); // 0x21e93f
    *v9 = v11;
    char * v12 = (char *)(v2 + 0x48380d4b); // 0x21e943
    *v12 = *v12 - v8 + (char)(v11 < v10);
    unsigned char v13 = *(char *)&v5; // 0x21e949
    unsigned char v14 = v13 + (char)(a3 / 256); // 0x21e949
    *(char *)v5 = v14;
    *(int64_t *)a1 = v5;
    int64_t v15 = v5;
    int64_t v16 = v14 < v13 ? 73 : 72; // 0x21e94d
    *(char *)0x2fd65258 = *(char *)0x2fd65258 + (char)(v2 / 256);
    int64_t v17; // 0x21e937
    char v18 = *(char *)&v17; // 0x21e958
    int32_t * v19 = (int32_t *)(a2 - 5); // 0x21e95c
    *v19 = *v19 & (int32_t)a2;
    return v15 & -0x10000 | (int64_t)&g3 | (int64_t)(v18 + (char)(v15 + v16));
}

// Address range: 0x21e991 - 0x21e9bc
int64_t function_21e991(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21e991
    int64_t v1; // 0x21e991
    int32_t * v2 = (int32_t *)(a4 - 0x7f9539d3 + v1); // 0x21e991
    *v2 = *v2 + 0x3aa90630;
    int64_t v3; // 0x21e991
    *(int32_t *)a3 = *(int32_t *)&v3 >> 20;
    return v1 & 0xffffffff ^ 0x6a640325;
}

// Address range: 0x21e9cd - 0x21e9ce
int64_t function_21e9cd(int64_t a1) {
    // 0x21e9cd
    int64_t result; // 0x21e9cd
    return result;
}

// Address range: 0x21ea9e - 0x21eb1f
int64_t function_21ea9e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, char a5) {
    // 0x21ea9e
    int64_t v1; // 0x21ea9e
    bool v2; // 0x21ea9e
    int64_t v3 = 256 * (v1 + a4 / 256 + (int64_t)v2) & 0xff00 | a4 & -0xff01; // 0x21ea9e
    int64_t v4 = v1 + a3; // 0x21eaa0
    int64_t v5 = v4 & 0xffffffff; // 0x21eaa0
    int32_t v6 = *(int32_t *)((8 * v1 + 0x1e62be380 & 0x7fffffff8) - 24 + v3); // 0x21eaa7
    int32_t * v7 = (int32_t *)(v5 + 63); // 0x21eaab
    int32_t v8 = *v7; // 0x21eaab
    int32_t v9 = v1; // 0x21eaab
    int32_t v10 = v8 + v9; // 0x21eaab
    *v7 = v10;
    int64_t v11; // 0x21ea9e
    if (((v10 ^ v8) & (v10 ^ v9)) < 0) {
        int32_t * v12 = (int32_t *)(a2 - 0x18fe17ad); // 0x21eab4
        *v12 = *v12 | (int32_t)a2;
        int64_t v13 = v11; // 0x21eac4
        return (v13 + 20) % 256 | v13 & 0xffffff00;
    }
    uint32_t v14 = v6 | (int32_t)v3; // 0x21eaa7
    int32_t * v15 = (int32_t *)(v5 - 36); // 0x21eb03
    *v15 = *v15 + (int32_t)a1;
    *(char *)0x10af8fe3 = *(char *)0x10af8fe3 | (char)v4;
    *(int32_t *)v11 = *(int32_t *)&v11 + v14;
    int64_t v16 = unknown_3abdcb15(); // 0x21eb0e
    char v17 = __asm_in_133((int16_t)v4); // 0x21eb14
    int64_t v18 = v16 & -256 | (int64_t)v17; // 0x21eb14
    int32_t v19 = v18; // 0x21eb15
    *(int32_t *)a1 = v19;
    int32_t * v20 = (int32_t *)((int64_t)(v19 >> 31) + 0x591e45d1); // 0x21eb19
    *v20 = *v20 + (int32_t)a2;
    return v18 & -256 | (int64_t)(v17 + (char)(v14 / 256));
}

// Address range: 0x21eb7a - 0x21eb7e
int64_t function_21eb7a(void) {
    // 0x21eb7a
    int64_t v1; // 0x21eb7a
    return function_21eb81(v1, v1, v1, v1);
}

// Address range: 0x21eb7f - 0x21eb81
int64_t function_21eb7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21eb7f
    int64_t result; // 0x21eb7f
    return result;
}

// Address range: 0x21eb81 - 0x21ebb7
int64_t function_21eb81(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21eb81
    int64_t v1; // 0x21eb81
    *(int32_t *)a4 = (int32_t)v1 - 0x17633922;
    return unknown_6ded37a2();
}

// Address range: 0x21eca6 - 0x21ecbf
int64_t function_21eca6(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 109); // 0x21eca6
    int64_t v2; // 0x21eca6
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x21eca6
    return unknown_ffffffff83b51eb8() & -256 | (int64_t)(*(char *)&v3 | 23);
}

// Address range: 0x21ecc0 - 0x21ecc5
int64_t function_21ecc0(void) {
    // 0x21ecc0
    return function_15eeead();
}

// Address range: 0x21ed05 - 0x21ed1d
int64_t function_21ed05(int64_t a1) {
    // 0x21ed05
    return unknown_ffffffffa41a7716();
}

// Address range: 0x21ed30 - 0x21ed41
int64_t function_21ed30(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x21ed30
    int64_t v1; // 0x21ed30
    int64_t v2 = v1;
    int64_t v3; // 0x21ed30
    int32_t v4 = *(int32_t *)&v3; // 0x21ed37
    return v4 & (int32_t)((v2 + a4 / 256) % 256 | v2 & 0xffffff00);
}

// Address range: 0x21ed53 - 0x21ed60
int64_t function_21ed53(int64_t a1, int64_t a2) {
    // 0x21ed53
    int64_t v1; // 0x21ed53
    int32_t * v2 = (int32_t *)(v1 - 0x49634e3b); // 0x21ed55
    *v2 = *v2 + (int32_t)a2;
    return function_ffffffffe849d3ac();
}

// Address range: 0x21ed6e - 0x21ed74
int64_t function_21ed6e(void) {
    // 0x21ed6e
    int64_t result; // 0x21ed6e
    char * v1 = (char *)result; // 0x21ed70
    *v1 = *v1 + 60;
    return result;
}

// Address range: 0x21ede0 - 0x21ede1
int64_t function_21ede0(void) {
    // 0x21ede0
    int64_t result; // 0x21ede0
    return result;
}

// Address range: 0x21edf6 - 0x21edf9
int64_t function_21edf6(int64_t a1) {
    // 0x21edf6
    int64_t result; // 0x21edf6
    return result;
}

// Address range: 0x21ee35 - 0x21ee3b
int64_t function_21ee35(int64_t a1) {
    // 0x21ee35
    int64_t result; // 0x21ee35
    return result;
}

// Address range: 0x314abb - 0x314abd
int64_t function_314abb(int64_t a1, int64_t result) {
    // 0x314abb
    return result;
}

// Address range: 0x314b40 - 0x314b4b
int64_t function_314b40(void) {
    // 0x314b40
    return 0x5e801e8;
}

// Address range: 0x314b7c - 0x314b7d
int64_t function_314b7c(void) {
    // 0x314b7c
    int64_t result; // 0x314b7c
    return result;
}

// Address range: 0x314b88 - 0x314b8b
int64_t function_314b88(int64_t a1, int64_t a2) {
    // 0x314b88
    bool v1; // 0x314b88
    int64_t v2 = v1 ? -1 : 1; // 0x314b88
    return __asm_iretd(v2 + a1, v2 + a2);
}

// Address range: 0x314bbd - 0x314bc9
int64_t function_314bbd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x314bbd
    int64_t v1; // 0x314bbd
    char * v2 = (char *)((int64_t)((int32_t)v1 >> 31) - 0x788c1f3); // 0x314bbe
    char v3 = a4 / 256; // 0x314bbe
    *v2 = *v2 + v3;
    int64_t result; // 0x314bbd
    *(char *)result = *(char *)&result | v3;
    return result;
}

// Address range: 0x314bd9 - 0x314bdb
int64_t function_314bd9(void) {
    // 0x314bd9
    return function_314b7c();
}

// Address range: 0x314bed - 0x314bef
int64_t function_314bed(int64_t a1, int64_t a2, int64_t a3) {
    // 0x314bed
    return a3 & 0xffffffff;
}

// Address range: 0x314c2e - 0x314c35
int64_t function_314c2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 96); // 0x314c32
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x314c2e
    return result;
}

// Address range: 0x314c7d - 0x314c92
int64_t function_314c7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x314c7d
    int64_t result; // 0x314c7d
    int32_t * v1 = (int32_t *)(result + 107); // 0x314c7d
    *v1 = *v1 + (int32_t)a3;
    int32_t * v2 = (int32_t *)(result + 2 * result); // 0x314c85
    *v2 = *v2 & -0x176df2ec;
    int32_t * v3 = (int32_t *)(a4 - 0x6d5843a2); // 0x314c8c
    *v3 = *v3 + (int32_t)a4;
    return result;
}

// Address range: 0x314cae - 0x314cb9
int64_t function_314cae(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 0x7e01e87b); // 0x314cae
    *v1 = *v1 + (int32_t)a3;
    return __asm_in_134(16);
}

// Address range: 0x459234 - 0x45923f
int64_t function_459234(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x459234
    int64_t v1; // 0x459234
    char * v2 = (char *)(v1 - 104); // 0x459234
    *v2 = *v2 + (char)(v1 / 256);
    return v1 & 0xffffffff;
}

// Address range: 0x459240 - 0x45932f
int64_t function_459240(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x459240
    int64_t v1; // 0x459240
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = (v2 + 12) % 256 | v2 & -256; // 0x459240
    *(char *)a3 = (char)(a4 / 256);
    int64_t v5 = 256 * v1 & 0xff00 | a4 & -0xff01; // 0x459242
    int32_t * v6 = (int32_t *)(v5 + 0x43321c86); // 0x459244
    *v6 = *v6 + (int32_t)v5;
    uint32_t v7 = (int32_t)a3; // 0x45924a
    uint32_t v8 = *(int32_t *)(v4 - 0x61f7857f) + v7; // 0x45924a
    int64_t result = v5 & 0xffffffff; // 0x459251
    if (llvm_ctpop_i8((char)v8) % 2 == 0) {
        // 0x459254
        return result;
    }
    if ((v4 & 0xffffffff) != 1 && v8 != 0) {
        // 0x459254
        return result;
    }
    int64_t v9 = a7 - 1; // 0x459281
    if (v9 != 0 == v8 == 0) {
        // 0x4592b2
        __asm_int(-33);
        return result;
    }
    if (v8 == 0) {
        // 0x459254
        return result;
    }
    if (v8 >= v7) {
        // 0x45932e
        return v1 & 0xffffffff;
    }
    // 0x4592d8
    *(int32_t *)-0x24ec87161b64adc2 = *(int32_t *)-0x7dafe108ed9a419;
    uint32_t v10 = *(int32_t *)&v3; // 0x4592ea
    unsigned char v11 = (char)v9; // 0x4592f0
    unsigned char v12 = *(char *)(v1 - 0x2302abc9) + (char)(v10 < 0x65250a37); // 0x4592f0
    bool v13 = v10 < 0x65250a37 ? v12 != -1 | (char)(v10 < 0x65250a37) + v11 - v12 > v11 : v12 > v11; // 0x4592f0
    return ((int64_t)v10 + 131 + (int64_t)v13) % 256 | (int64_t)(v10 & -256);
}

// Address range: 0x459353 - 0x459354
int64_t function_459353(void) {
    // 0x459353
    int64_t result; // 0x459353
    return result;
}

// Address range: 0x459356 - 0x459357
int64_t function_459356(int64_t a1) {
    // 0x459356
    int64_t result; // 0x459356
    return result;
}

// Address range: 0x459398 - 0x459399
int64_t function_459398(void) {
    // 0x459398
    int64_t result; // 0x459398
    return result;
}

// Address range: 0x4593a0 - 0x4593a3
int64_t function_4593a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result; // 0x4593a0
    if (a4 != 1) {
        result = function_459353();
    }
    // 0x4593a2
    return result;
}

// Address range: 0x4593ba - 0x4593e6
int64_t function_4593ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4593ba
    int64_t result; // 0x4593ba
    bool v1; // 0x4593ba
    if (a4 != 1 && !v1) {
        // 0x459434
        return result;
    }
    if (v1 || v1) {
        function_459398();
    }
    // 0x4593be
    *(char *)a1 = (char)result - 45;
    return function_458ffbc9((v1 ? -1 : 1) + a1);
}

// Address range: 0x4593ff - 0x45941c
int64_t function_4593ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4593ff
    __asm_sti(a1);
    bool v1; // 0x4593ff
    if (!v1) {
        function_459461();
    }
    // 0x459408
    return a5 & 0xffffffff;
}

// Address range: 0x45942e - 0x459434
int64_t function_45942e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t result) {
    // 0x45942e
    int64_t v1; // 0x45942e
    bool v2; // 0x45942e
    *(int32_t *)v1 = (int32_t)v2;
    return result;
}

// Address range: 0x459634 - 0x459635
int64_t function_459634(void) {
    // 0x459634
    int64_t result; // 0x459634
    return result;
}

// Address range: 0x459638 - 0x45963d
int64_t function_459638(void) {
    // 0x459638
    return function_4e90a991();
}

// Address range: 0x459691 - 0x459692
int64_t function_459691(void) {
    // 0x459691
    int64_t result; // 0x459691
    return result;
}

// Address range: 0x4596d8 - 0x4596e1
int64_t function_4596d8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4596d8
    int64_t v1; // 0x4596d8
    int32_t v2 = *(int32_t *)(2 * a3 + 105 + v1); // 0x4596d8
    bool v3; // 0x4596d8
    return function_ffffffffa9966f58(v2 + (int32_t)a1 + (int32_t)v3);
}

// Address range: 0x459701 - 0x459704
int64_t function_459701(void) {
    // 0x459701
    int64_t result; // 0x459701
    return result;
}

// Address range: 0x459706 - 0x459714
int64_t function_459706(int64_t a1, int64_t a2, int64_t a3) {
    // 0x459706
    int64_t v1; // 0x459706
    bool v2; // 0x459706
    int64_t result = true == !v2 ? v1 : a2; // 0x45970f
    // 0x459711
    return result;
}

// Address range: 0x459715 - 0x459719
int64_t function_459715(void) {
    // 0x459715
    int64_t result; // 0x459715
    return result;
}

// Address range: 0x45973f - 0x459742
int64_t function_45973f(void) {
    // 0x45973f
    int64_t v1; // 0x45973f
    bool v2; // 0x45973f
    return 2 * v1 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x459754 - 0x4597bd
int64_t function_459754(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x459754
    int64_t v1; // 0x459754
    int64_t result = v1;
    bool v2; // 0x459754
    if (!v2 && !v2) {
        // 0x459756
        return result;
    }
    if (v2) {
        int64_t v3 = (result + 93) % 256 | result & -256; // 0x4597ad
        return (int64_t)(*(int32_t *)v3 & (int32_t)v3);
    }
    if (!v2) {
        // 0x459772
        return result + 0xa2dbe4a7 & 0xffffffff;
    }
    // 0x459756
    return result;
}

// Address range: 0x4597c8 - 0x4597cc
int64_t function_4597c8(int64_t a1) {
    // 0x4597c8
    int64_t result; // 0x4597c8
    return result;
}

// Address range: 0x4597d9 - 0x4597e1
int64_t function_4597d9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4597d9
    int64_t result; // 0x4597d9
    int32_t * v1 = (int32_t *)(2 * result + a3); // 0x4597d9
    bool v2; // 0x4597d9
    *v1 = *v1 - (v2 ? 0x96f6fc2 : 0x96f6fc1);
    return result;
}

// Address range: 0x459a34 - 0x459a4f
int64_t function_459a34(int64_t a1, int64_t a2, int64_t result) {
    // 0x459a34
    int64_t v1; // 0x459a34
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x459a34
    int64_t v3 = __asm_sti((v2 ? -4 : 4) + a1); // 0x459a37
    v3 = function_459a2a();
    // 0x459a39
    *(char *)0xf5f685146ca0058 = (char)v3;
    int32_t * v4 = (int32_t *)(v1 + 85 + v3); // 0x459a42
    *v4 = *v4 + (int32_t)a2;
    return result;
}

// Address range: 0x459aa0 - 0x459aa7
int64_t function_459aa0(int64_t a1) {
    // 0x459aa0
    __asm_wait(a1);
    return function_6b90a303();
}

// Address range: 0x459ac0 - 0x459ac3
int64_t function_459ac0(void) {
    // 0x459ac0
    int64_t result; // 0x459ac0
    return result;
}

// Address range: 0x459ac5 - 0x459ac6
int64_t function_459ac5(int64_t a1) {
    // 0x459ac5
    int64_t result; // 0x459ac5
    return result;
}

// Address range: 0x459af0 - 0x459af1
int64_t function_459af0(void) {
    // 0x459af0
    int64_t result; // 0x459af0
    return result;
}

// Address range: 0x459b95 - 0x459b99
int64_t function_459b95(void) {
    // 0x459b95
    int64_t v1; // 0x459b95
    return __asm_iretd(v1, v1);
}
