/*
 * Targeted RetDec C for native executable gap queue batch 351.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x224a66-0x224c66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x224c66-0x224e66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x224e66-0x225066 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25dac2-0x25dcc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25dcc2-0x25dec2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25dec2-0x25e0c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25e0c2-0x25e2c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25e2c2-0x25e4c2 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_224a66(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_224ab1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_224b03(void);
int64_t function_224b22(int64_t a1);
int64_t function_224b27(void);
int64_t function_224b33(int64_t a1);
int64_t function_224b6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_224b78(int64_t a1);
int64_t function_224baf(void);
int64_t function_224bb4(void);
int64_t function_224bd7(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_224c18(void);
int64_t function_224c46(void);
int64_t function_224c63(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_224c77(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_224cd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_224cd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_224d0f(int64_t a1);
int64_t function_224d11(int64_t a1, int64_t a2);
int64_t function_224d51(void);
int64_t function_224d55(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_224dc8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_224de3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_224e64(void);
int64_t function_224f91(void);
int64_t function_224fa4(void);
int64_t function_224fbe(void);
int64_t function_22503c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25dac2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25dae6(void);
int64_t function_25db35(int64_t a1);
int64_t function_25db6b(void);
int64_t function_25dc06(void);
int64_t function_25dc4d(int64_t a1, int64_t a2);
int64_t function_25dc78(void);
int64_t function_25dd1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25dd82(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25ddd9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25de40(void);
int64_t function_25de51(void);
int64_t function_25de66(void);
int64_t function_25de98(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8);
int64_t function_25df51(int64_t a1, int64_t a2);
int64_t function_25dfa1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25dfab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25e027(void);
int64_t function_25e06b(void);
int64_t function_25e0a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25e0b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25e142(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25e14d(int64_t a1);
int64_t function_25e18f(void);
int64_t function_25e1dd(void);
int64_t function_25e21e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25e278(void);
int64_t function_25e293(void);
int64_t function_25e294(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25e2a8(int64_t a1);
int64_t function_25e2c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25e305(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_25e31e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25e344(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25e36c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25e36f(int64_t a1);
int64_t function_25e3b5(void);
int64_t function_25e3b8(void);
int64_t function_25e3e5(int64_t a1);
int64_t function_25e3f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25e439(int64_t a1, int64_t a2);
int64_t function_25e481(int64_t a1, int64_t a2);
int64_t function_2a8144();
int64_t function_3d232237();
int64_t function_3d8246f2();
int64_t function_6ff2e37c();
int64_t function_ffffffff9084f210();
int64_t function_ffffffffd884f25d();
int64_t function_ffffffffdad93cc6();
int64_t function_ffffffffdfba5c97();
int64_t function_ffffffffe82ae173();
int64_t function_ffffffffe8b9754d();
int64_t unknown_1b19cb8e();
int64_t unknown_242bf4fc();
int64_t unknown_249c5c73();
int64_t unknown_2a5074ce();
int64_t unknown_3b774c53();
int64_t unknown_3d27cc07();
int64_t unknown_42c19076();
int64_t unknown_4b4f3ec();
int64_t unknown_60bbe9c2();
int64_t unknown_61122f7a();
int64_t unknown_7c1cf5f9();
int64_t unknown_ffffffff882972e6();
int64_t unknown_ffffffffa02323bd();
int64_t unknown_ffffffffa72f46fb();
int64_t unknown_ffffffffad1d85d1();
int64_t unknown_ffffffffb41407f9();
int64_t unknown_ffffffffcbc170ef();
int64_t unknown_ffffffffd625dd64();
int64_t unknown_ffffffffdb191aa2();
int64_t unknown_ffffffffe85ffb78();
int64_t unknown_ffffffffeb935997();
int64_t unknown_fffffffff88ca64b();
int64_t unknown_fffffffffca395bf();

// Address range: 0x224a66 - 0x224a9a
int64_t function_224a66(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x224a66
    __readfsdword(unknown_3b774c53() + 0x29e44e53);
    int64_t v1 = unknown_ffffffffe85ffb78() + 0x2c79dac0; // 0x224a77
    int64_t v2 = v1 & 0xffffffff; // 0x224a77
    int64_t v3; // 0x224a66
    *(int32_t *)a1 = (int32_t)v3;
    bool v4; // 0x224a66
    int64_t v5 = v4 ? -4 : 4; // 0x224a7c
    int64_t v6 = v5 + a1; // 0x224a7c
    int32_t * v7 = (int32_t *)(a3 - 0x7fffdd2f); // 0x224a80
    *v7 = *v7 + (int32_t)v1;
    char * v8 = (char *)(8 * v2 + v3); // 0x224a86
    *v8 = *v8 + (char)(v3 / 256);
    unsigned char v9 = *(char *)v2 + (char)v1; // 0x224a89
    int64_t v10 = v1 & 0xffffff00; // 0x224a89
    *(int32_t *)v6 = (int32_t)(v10 | (int64_t)v9);
    int64_t v11; // 0x224a66
    int32_t v12 = *(int32_t *)&v11; // 0x224a8e
    *(int32_t *)a3 = v12 + (int32_t)(v10 | (int64_t)(v9 + (char)(a4 / 256)));
    int32_t * v13 = (int32_t *)(a4 + 0x86cce3a); // 0x224a91
    *v13 = *v13 & (int32_t)a3;
    return __asm_int1(v6 + v5, v5 + a2);
}

// Address range: 0x224ab1 - 0x224ad4
int64_t function_224ab1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a4 + 0x6d146d1a); // 0x224ab5
    int64_t v2; // 0x224ab1
    bool v3; // 0x224ab1
    *v1 = (char)v3 + (char)v2 + *v1;
    int64_t v4 = unknown_60bbe9c2(); // 0x224abc
    __asm_out((int16_t)a3, (int32_t)v4);
    *(char *)a3 = (char)(a4 / 256);
    char * v5 = (char *)v4; // 0x224ac7
    *v5 = *v5 - (char)v4;
    return unknown_ffffffffad1d85d1(a3 & 0xffffffff);
}

// Address range: 0x224b03 - 0x224b08
int64_t function_224b03(void) {
    // 0x224b03
    return function_ffffffffe8b9754d();
}

// Address range: 0x224b22 - 0x224b27
int64_t function_224b22(int64_t a1) {
    // 0x224b22
    int64_t v1; // 0x224b22
    int64_t v2 = v1;
    return (v2 + 66) % 256 | v2 & -256;
}

// Address range: 0x224b27 - 0x224b28
int64_t function_224b27(void) {
    // 0x224b27
    int64_t result; // 0x224b27
    return result;
}

// Address range: 0x224b33 - 0x224b34
int64_t function_224b33(int64_t a1) {
    // 0x224b33
    int64_t result; // 0x224b33
    return result;
}

// Address range: 0x224b6d - 0x224b77
int64_t function_224b6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 22); // 0x224b6d
    int64_t v2; // 0x224b6d
    *v1 = *v1 + (char)v2;
    unknown_42c19076(a1, a2, a3, a4);
    return function_224bd7(a1, a2, a3, a4);
}

// Address range: 0x224b78 - 0x224b7c
int64_t function_224b78(int64_t a1) {
    // 0x224b78
    int64_t v1; // 0x224b78
    int64_t v2 = v1;
    bool v3; // 0x224b78
    return (v2 - (v3 ? 148 : 147)) % 256 | v2 & -256;
}

// Address range: 0x224baf - 0x224bb4
int64_t function_224baf(void) {
    // 0x224baf
    return function_ffffffffdfba5c97();
}

// Address range: 0x224bb4 - 0x224bb5
int64_t function_224bb4(void) {
    // 0x224bb4
    int64_t result; // 0x224bb4
    return result;
}

// Address range: 0x224bd7 - 0x224bfb
int64_t function_224bd7(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x224bd7
    int64_t v1; // 0x224bd7
    *(char *)(v1 - 1) = (char)(a4 / 256);
    int64_t v2; // 0x224bd7
    uint32_t v3 = *(int32_t *)&v2 | (int32_t)a1; // 0x224be2
    uint32_t v4 = *(int32_t *)-0x15c1b415; // 0x224be4
    int32_t v5 = v3 - v4; // 0x224be4
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x224be4
    int64_t v7 = 4 * a4; // 0x224beb
    *(char *)(v7 + 0x1100b355 + (v1 & -0xff01 | 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v3 < v4) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v3 % 16 - v4 % 16 > 15) | 4 * (int64_t)(v6 % 2 == 0)) | 512)) = 0;
    int64_t result = unknown_ffffffffb41407f9(v5); // 0x224bf3
    char * v8 = (char *)(v7 + (int64_t)v5); // 0x224bf8
    *v8 = *v8 + (char)(a3 / 256);
    return result;
}

// Address range: 0x224c18 - 0x224c1b
int64_t function_224c18(void) {
    // 0x224c18
    int64_t result; // 0x224c18
    return result;
}

// Address range: 0x224c46 - 0x224c47
int64_t function_224c46(void) {
    // 0x224c46
    int64_t result; // 0x224c46
    return result;
}

// Address range: 0x224c63 - 0x224c6e
int64_t function_224c63(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 128); // 0x224c68
    *v1 = *v1 - 0x17f175b5;
    int64_t result; // 0x224c63
    return result;
}

// Address range: 0x224c77 - 0x224cd5
int64_t function_224c77(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a1 - 0x73fe1799 + 4 * a1); // 0x224c77
    *v2 = *v2 + (int32_t)a4;
    int64_t v3; // 0x224c77
    char v4 = *(char *)&v3; // 0x224c84
    int64_t v5; // 0x224c77
    char v6 = (uint64_t)v5 / 256; // 0x224c84
    char v7 = v4 + v6; // 0x224c84
    *(char *)a3 = v7;
    unknown_1b19cb8e();
    int64_t v8 = unknown_ffffffffeb935997(); // 0x224c91
    v3 = a5 & -0xff01 | (int64_t)&g1;
    int64_t v9 = v8; // 0x224c99
    if (((v7 ^ v4) & (v7 ^ v6)) < 0) {
        v9 = function_224c46();
    }
    // 0x224c9b
    __asm_out_133(-24, (char)v9);
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a1;
    char v10 = *(char *)(v1 + 25); // 0x224ca1
    int64_t v11 = 256 * (int64_t)(v10 | (char)(a4 / 256)) | a4 & -0x10000; // 0x224ca1
    int64_t v12 = (v11 | 46) + v3 & 0xffffffff; // 0x224caa
    v3 = v12;
    char * v13 = (char *)(v12 + 1); // 0x224cb4
    *v13 = *v13 + (char)(v9 / 256);
    int64_t v14 = v11 | (int64_t)(*(char *)(unknown_ffffffffa02323bd() + 0x994626) | 46); // 0x224cbc
    unknown_2a5074ce();
    *(char *)(v14 + 0x63ee593e) = (char)v3;
    return function_224cd8(a1, v1, v3, v14);
}

// Address range: 0x224cd7 - 0x224cd8
int64_t function_224cd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x224cd7
    int64_t result; // 0x224cd7
    return result;
}

// Address range: 0x224cd8 - 0x224cfc
int64_t function_224cd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x224cd8
    __asm_in_134(-43);
    int32_t v1 = __asm_insd((int16_t)a3); // 0x224ce5
    int64_t v2; // 0x224cd8
    *(int32_t *)(int64_t)((int32_t)a1 - *(int32_t *)&v2) = v1;
    unknown_4b4f3ec();
    __asm_wait();
    return unknown_7c1cf5f9();
}

// Address range: 0x224d0f - 0x224d10
int64_t function_224d0f(int64_t a1) {
    // 0x224d0f
    int64_t result; // 0x224d0f
    return result;
}

// Address range: 0x224d11 - 0x224d18
int64_t function_224d11(int64_t a1, int64_t a2) {
    // 0x224d11
    int64_t v1; // 0x224d11
    uint64_t result = v1;
    char * v2 = (char *)(a1 - 0xf54fe18); // 0x224d11
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x224d51 - 0x224d53
int64_t function_224d51(void) {
    // 0x224d51
    int64_t v1; // 0x224d51
    return function_224dc8(v1, v1, v1);
}

// Address range: 0x224d55 - 0x224dc8
int64_t function_224d55(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x224d55
    int32_t v3 = (int32_t)v2 + (int32_t)a4; // 0x224d5b
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x224d5b
    *(int32_t *)a4 = v3;
    uint64_t v5 = unknown_ffffffffd625dd64(); // 0x224d5d
    if (v4 % 2 != 0) {
        // 0x224dbb
        return v5 + 0x10f22aff & 0xffffffff;
    }
    char v6 = v2 / 256; // 0x224d66
    *(char *)(v2 - 86) = v6;
    char * v7 = (char *)(v1 + 18); // 0x224d6a
    *v7 = *v7 + v6;
    int64_t v8 = unknown_249c5c73(); // 0x224d6d
    *(char *)v1 = *(char *)&v1 + (char)a1;
    uint32_t v9 = *(int32_t *)(v1 + 0x2d1f2c65); // 0x224d75
    int64_t v10 = 256 * (v5 / 256 + a1 + (int64_t)(v9 > (int32_t)v2)) & 0xff00 | v5 & 0xffff00ff; // 0x224d7b
    int32_t * v11 = (int32_t *)(v1 + 4 * v2); // 0x224d7d
    uint32_t v12 = *v11; // 0x224d7d
    uint32_t v13 = v12 + (int32_t)v8; // 0x224d7d
    *v11 = v13;
    char v14; // 0x224d55
    if (v13 < v12 || v13 == 0) {
        function_224de3(v8 & 0xffffffff, a2, v1, v10, (int64_t)&g3);
        v14 = v1;
    } else {
        // 0x224d65
        v14 = *(char *)&v1;
    }
    // 0x224d83
    *(char *)v1 = v14 - (char)v2;
    int32_t * v15 = (int32_t *)v10; // 0x224d8a
    *v15 = *v15 + (int32_t)v1;
    return function_2a8144();
}

// Address range: 0x224dc8 - 0x224dd3
int64_t function_224dc8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x224dc8
    int64_t v1; // 0x224dc8
    int64_t v2 = v1;
    *(char *)-0x17dfb930 = *(char *)-0x17dfb930 + (char)a1;
    return (v2 + 107) % 256 | v2 & -256;
}

// Address range: 0x224de3 - 0x224e5a
int64_t function_224de3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x224de3
    int64_t v1; // 0x224de3
    int64_t v2 = v1;
    int64_t v3 = a3;
    bool v4; // 0x224de3
    if (v4 || false) {
        // 0x224e58
        return (v2 - (v4 ? 231 : 230)) % 256 | v2 & -256;
    }
    char * v5 = (char *)(a4 + 0x1001782c); // 0x224de5
    *v5 = *v5 + (char)(a3 / 256);
    char v6 = __asm_in(79); // 0x224dee
    char v7 = *(char *)&v3; // 0x224df0
    *(char *)v3 = v6 + (char)(-1 - (char)v2 < (char)a4) + v7;
    return function_3d232237();
}

// Address range: 0x224e64 - 0x224e69
int64_t function_224e64(void) {
    // 0x224e64
    return function_ffffffffe82ae173();
}

// Address range: 0x224f91 - 0x224f92
int64_t function_224f91(void) {
    // 0x224f91
    int64_t result; // 0x224f91
    return result;
}

// Address range: 0x224fa4 - 0x224fa5
int64_t function_224fa4(void) {
    // 0x224fa4
    int64_t result; // 0x224fa4
    return result;
}

// Address range: 0x224fbe - 0x224fca
int64_t function_224fbe(void) {
    // 0x224fbe
    int64_t v1; // 0x224fbe
    int64_t v2 = v1;
    *(int32_t *)(v2 + 0x14680ff6) = (int32_t)v2;
    return v1 + 0xfbfe176e & 0xffffffff;
}

// Address range: 0x22503c - 0x225040
int64_t function_22503c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x22503c
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x22503c
    return result;
}

// Address range: 0x25dac2 - 0x25dacf
int64_t function_25dac2(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = __asm_in(74); // 0x25dac2
    int64_t v2; // 0x25dac2
    __asm_outsb((int16_t)a3, (char)v2);
    float80_t v3; // 0x25dac2
    *(float32_t *)(v2 - 0x4b4817ff) = (float32_t)v3;
    return (v2 | (int64_t)v1) & -256 | (int64_t)(v1 - 55);
}

// Address range: 0x25dae6 - 0x25dae9
int64_t function_25dae6(void) {
    // 0x25dae6
    int64_t result; // 0x25dae6
    return result;
}

// Address range: 0x25db35 - 0x25db38
int64_t function_25db35(int64_t a1) {
    // 0x25db35
    int64_t result; // 0x25db35
    return result;
}

// Address range: 0x25db6b - 0x25db6c
int64_t function_25db6b(void) {
    // 0x25db6b
    int64_t result; // 0x25db6b
    return result;
}

// Address range: 0x25dc06 - 0x25dc07
int64_t function_25dc06(void) {
    // 0x25dc06
    int64_t result; // 0x25dc06
    return result;
}

// Address range: 0x25dc4d - 0x25dc56
int64_t function_25dc4d(int64_t a1, int64_t a2) {
    // 0x25dc4d
    int64_t v1; // 0x25dc4d
    return (int64_t)(*(int32_t *)(a1 + 0x2662762) | (int32_t)v1);
}

// Address range: 0x25dc78 - 0x25dc85
int64_t function_25dc78(void) {
    // 0x25dc78
    return (int64_t)*(int32_t *)-0x562aa05a875c6749;
}

// Address range: 0x25dd1f - 0x25dd22
int64_t function_25dd1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25dd1f
    int64_t result; // 0x25dd1f
    return result;
}

// Address range: 0x25dd82 - 0x25dd8c
int64_t function_25dd82(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25dd82
    int64_t result; // 0x25dd82
    return result;
}

// Address range: 0x25ddd9 - 0x25de0e
int64_t function_25ddd9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x25ddd9
    int64_t v1; // 0x25ddd9
    uint64_t v2 = v1;
    int16_t v3; // 0x25ddd9
    int64_t v4 = v3; // 0x25ddd9
    char v5 = __asm_in_136((int16_t)a3); // 0x25dde1
    char v6 = *(char *)(4 * a2 - 24 + v4); // 0x25ddec
    int32_t * v7 = (int32_t *)(v4 - 0x65574b42); // 0x25ddf0
    *v7 = *v7 + (int32_t)v1;
    char * v8 = (char *)(8 * a1 - 0x17bcb6c2 + ((int64_t)v5 & 0xffffffff | v1 & 0xffffff00)); // 0x25ddf6
    *v8 = *v8 & (char)v1;
    int16_t v9; // 0x25ddd9
    *(int32_t *)v4 = *(int32_t *)&v9 + (int32_t)a3;
    unsigned char v10 = *(char *)-0x2723572e0f93715f; // 0x25de00
    int32_t * v11 = (int32_t *)(a3 - 24); // 0x25de09
    *v11 = *v11 | *(int32_t *)(v1 + 8 * v1) & (int32_t)v1;
    return 256 * (int64_t)(v6 | (char)(v2 / 256)) | v2 & 0xffff0000 | (int64_t)v10;
}

// Address range: 0x25de40 - 0x25de45
int64_t function_25de40(void) {
    // 0x25de40
    return function_3d8246f2();
}

// Address range: 0x25de51 - 0x25de54
int64_t function_25de51(void) {
    // 0x25de51
    int64_t result; // 0x25de51
    return result;
}

// Address range: 0x25de66 - 0x25de67
int64_t function_25de66(void) {
    // 0x25de66
    int64_t result; // 0x25de66
    return result;
}

// Address range: 0x25de98 - 0x25df4f
int64_t function_25de98(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a5;
    int64_t v2; // 0x25de98
    uint32_t v3 = (int32_t)v2; // 0x25dea4
    uint32_t v4 = v3 + (int32_t)a3; // 0x25dea4
    if (llvm_ctpop_i8((char)v4) % 2 != 0) {
        char v5 = *(char *)(int64_t)(0x10000 * (int32_t)v2 >> 16 & -256 | 157); // 0x25df27
        char * v6 = (char *)(a3 - 110); // 0x25df3b
        unsigned char v7 = *v6; // 0x25df3b
        *v6 = (char)(a3 / 256);
        int32_t v8 = *(int32_t *)-0x18a620b5; // 0x25df44
        return function_ffffffff9084f210((int32_t)a1 - v8, v4 + (int32_t)a2, 256 * (int64_t)v7 | a3 & -0xff01, 256 * (int64_t)(v5 + (char)(a4 / 256)) | a4 & -0xff01);
    }
    int64_t * v9 = (int64_t *)((int64_t)v4 - 8); // 0x25dea8
    *v9 = a4;
    char v10 = *(char *)-0x7ac018f1; // 0x25dea9
    *(char *)-0x7ac018f1 = (char)(v2 / 256) + (char)(v4 < v3) + v10;
    *(char *)0x4419fdb9 = *(char *)0x4419fdb9 + (char)a1;
    *(int64_t *)a6 = a6 / 0x4000 | 0x4000000000000 * a6;
    int32_t * v11 = (int32_t *)(a2 - 0x12ffffcf); // 0x25decb
    uint32_t v12 = *v11; // 0x25decb
    uint32_t v13 = v12 + (int32_t)a4; // 0x25decb
    unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x25decb
    *v11 = v13;
    if (v14 % 2 != 0) {
        // 0x25df12
        return (int64_t)*(int32_t *)0x3de03c22ed300620;
    }
    // 0x25ded3
    __asm_int1(a1, a2);
    if (v13 >= v12 && v13 != 0) {
        function_25de66();
    }
    // 0x25ded6
    __asm_in_136((int16_t)a3);
    unknown_61122f7a();
    int64_t v15 = unknown_ffffffffa72f46fb(); // 0x25def4
    *(char *)-0x78afcdff = *(char *)-0x78afcdff + (char)(v2 / 256);
    int64_t v16 = 0x10000 * (int32_t)v15 >> 16; // 0x25df00
    *v9 = v16;
    unsigned char v17 = *(char *)&v1; // 0x25df02
    *(char *)v1 = v17 / 128 | 2 * v17;
    char v18 = *(char *)(v16 + 0x631ea079); // 0x25df05
    *(char *)a3 = (char)a4;
    return v16 & 0xffff0000 | (int64_t)((256 * (int16_t)v15 >> 8) * (int16_t)v18);
}

// Address range: 0x25df51 - 0x25df55
int64_t function_25df51(int64_t a1, int64_t a2) {
    // 0x25df51
    int64_t result; // 0x25df51
    return result;
}

// Address range: 0x25dfa1 - 0x25dfab
int64_t function_25dfa1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25dfa1
    int64_t result; // 0x25dfa1
    return result;
}

// Address range: 0x25dfab - 0x25dfdc
int64_t function_25dfab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25dfab
    *(char *)0x48eac6e = *(char *)0x48eac6e - (char)a4;
    int64_t v1; // 0x25dfab
    *(char *)v1 = *(char *)(char *)&g2 + (char)(v1 / 256);
    return function_ffffffffd884f25d();
}

// Address range: 0x25e027 - 0x25e028
int64_t function_25e027(void) {
    // 0x25e027
    int64_t result; // 0x25e027
    return result;
}

// Address range: 0x25e06b - 0x25e06c
int64_t function_25e06b(void) {
    // 0x25e06b
    int64_t result; // 0x25e06b
    return result;
}

// Address range: 0x25e0a7 - 0x25e0ac
int64_t function_25e0a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25e0a7
    int64_t result; // 0x25e0a7
    return result;
}

// Address range: 0x25e0b5 - 0x25e0da
int64_t function_25e0b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)unknown_fffffffffca395bf(); // 0x25e0c0
    *v1 = *v1 + (char)a3;
    int32_t * v2 = (int32_t *)(a2 - 0x3f65ab9d); // 0x25e0c7
    *v2 = *v2 + (int32_t)a1;
    int32_t * v3 = (int32_t *)(a1 - 0x19040645); // 0x25e0d2
    int64_t v4; // 0x25e0b5
    *v3 = *v3 + (int32_t)v4;
    return function_25e06b();
}

// Address range: 0x25e142 - 0x25e14b
int64_t function_25e142(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25e142
    return unknown_fffffffff88ca64b(a1, a2, a3, a4);
}

// Address range: 0x25e14d - 0x25e150
int64_t function_25e14d(int64_t a1) {
    // 0x25e14d
    int64_t result; // 0x25e14d
    return result;
}

// Address range: 0x25e18f - 0x25e194
int64_t function_25e18f(void) {
    // 0x25e18f
    return function_6ff2e37c();
}

// Address range: 0x25e1dd - 0x25e1de
int64_t function_25e1dd(void) {
    // 0x25e1dd
    int64_t result; // 0x25e1dd
    return result;
}

// Address range: 0x25e21e - 0x25e225
int64_t function_25e21e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25e21e
    int64_t result; // 0x25e21e
    return result;
}

// Address range: 0x25e278 - 0x25e27e
int64_t function_25e278(void) {
    // 0x25e278
    int64_t result; // 0x25e278
    return result;
}

// Address range: 0x25e293 - 0x25e294
int64_t function_25e293(void) {
    // 0x25e293
    int64_t result; // 0x25e293
    return result;
}

// Address range: 0x25e294 - 0x25e2a4
int64_t function_25e294(int64_t a1, int64_t a2, int64_t a3) {
    // 0x25e294
    int64_t v1; // 0x25e294
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 0x261037e8 + 2 * v2); // 0x25e294
    *v3 = *v3 + (int32_t)v1;
    uint64_t v4 = unknown_ffffffffdb191aa2(); // 0x25e29b
    int64_t v5; // 0x25e294
    __asm_outsb((int16_t)a3, *(char *)&v5);
    return v4 & -256 | (int64_t)*(char *)(v4 % 256 + v1);
}

// Address range: 0x25e2a8 - 0x25e2ab
int64_t function_25e2a8(int64_t a1) {
    // 0x25e2a8
    int64_t result; // 0x25e2a8
    return result;
}

// Address range: 0x25e2c6 - 0x25e304
int64_t function_25e2c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x25e2c6
    uint32_t v3 = (int32_t)v2; // 0x25e2c6
    int32_t v4 = v3 + 0x6301e829; // 0x25e2c6
    int64_t result = v4; // 0x25e2cb
    if (v4 >= 0) {
        result = function_25e293();
    }
    // 0x25e2ce
    if (v4 == 0) {
        // 0x25e2d0
        *(int32_t *)a4 = (int32_t)v2 + (int32_t)a4 + (int32_t)(v3 > 0x9cfe17d6);
        return result;
    }
    uint64_t v5 = (result & 0xffffffff | 0x100000000 * a3) % (a4 & 0xffffffff); // 0x25e2dc
    int16_t v6 = v5; // 0x25e2df
    __asm_out_137(v6, (char)a4);
    unknown_ffffffff882972e6();
    __asm_sti();
    unknown_ffffffffcbc170ef();
    int32_t * v7 = (int32_t *)(__asm_wait() - 126); // 0x25e2f2
    *v7 = (int32_t)(v3 > 0x9cfe17d6) - (int32_t)v5 + *v7;
    __asm_outsb(v6, *(char *)&v1);
    uint64_t result2 = unknown_242bf4fc(); // 0x25e2f6
    char * v8 = (char *)(v2 + 0x7d18a244); // 0x25e2fb
    *v8 = *v8 + (char)(result2 / 256);
    return result2;
}

// Address range: 0x25e305 - 0x25e31d
int64_t function_25e305(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x25e305
    int64_t v1; // 0x25e305
    int64_t v2 = v1;
    char * v3 = (char *)(v2 + 0x2514000); // 0x25e305
    *v3 = *v3 + (char)v2;
    char * v4 = (char *)(v1 + 0x3301e800); // 0x25e30c
    *v4 = *v4 + (char)(a4 / 256);
    int64_t v5; // 0x25e305
    *(int32_t *)a3 = *(int32_t *)&v5 + (int32_t)a1;
    return (v2 & 0xff00) + a4 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x25e31e - 0x25e325
int64_t function_25e31e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 24); // 0x25e31e
    *v1 = *v1 - 1;
    int64_t result; // 0x25e31e
    return result;
}

// Address range: 0x25e344 - 0x25e36c
int64_t function_25e344(int64_t a1, int64_t a2, int64_t a3) {
    // 0x25e344
    __asm_sti();
    uint32_t v1 = __asm_in_134(-93); // 0x25e345
    int32_t * v2 = (int32_t *)(a2 + 0x1e8b38a); // 0x25e349
    *v2 = *v2 >> 28;
    int32_t * v3 = (int32_t *)(a2 - 0x38f0c61f); // 0x25e352
    int64_t v4; // 0x25e344
    *v3 = *v3 + (int32_t)v4;
    int64_t v5; // 0x25e344
    unsigned char v6 = *(char *)(v5 + (int64_t)(v1 % 256)); // 0x25e359
    int64_t result = (int64_t)v6 | (int64_t)(v1 & -256); // 0x25e359
    char * v7 = (char *)(a2 + 0x27ca01e8); // 0x25e35a
    *v7 = *v7 + (char)(v5 / 256);
    *(int32_t *)-0x5df575226d3daaf6 = (int32_t)result;
    return result;
}

// Address range: 0x25e36c - 0x25e36f
int64_t function_25e36c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25e36c
    int64_t result; // 0x25e36c
    return result;
}

// Address range: 0x25e36f - 0x25e370
int64_t function_25e36f(int64_t a1) {
    // 0x25e36f
    int64_t result; // 0x25e36f
    return result;
}

// Address range: 0x25e3b5 - 0x25e3b6
int64_t function_25e3b5(void) {
    // 0x25e3b5
    int64_t result; // 0x25e3b5
    return result;
}

// Address range: 0x25e3b8 - 0x25e3c3
int64_t function_25e3b8(void) {
    // 0x25e3b8
    int64_t v1; // 0x25e3b8
    int32_t * v2 = (int32_t *)(v1 + 0x7605e6bc); // 0x25e3b8
    *v2 = *v2 & (int32_t)v1;
    return function_ffffffffdad93cc6();
}

// Address range: 0x25e3e5 - 0x25e3e6
int64_t function_25e3e5(int64_t a1) {
    // 0x25e3e5
    int64_t result; // 0x25e3e5
    return result;
}

// Address range: 0x25e3f2 - 0x25e40f
int64_t function_25e3f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = a4 - 1; // 0x25e3f2
    int64_t v2; // 0x25e3f2
    bool v3; // 0x25e3f2
    if (v1 != 0 && !v3) {
        v2 = function_25e3b5();
    }
    int32_t v4 = *(int32_t *)(a2 - 77); // 0x25e3f7
    char * v5 = (char *)(v2 - 119); // 0x25e3fa
    uint64_t v6 = v1 / 256; // 0x25e3fa
    *v5 = *v5 + (char)v6;
    int64_t v7 = unknown_3d27cc07(); // 0x25e401
    int32_t * v8 = (int32_t *)(a2 - 28); // 0x25e406
    uint32_t v9 = *v8; // 0x25e406
    uint32_t v10 = v9 + ((int32_t)a3 & -256 | 75); // 0x25e406
    *v8 = v10;
    int64_t result = (v7 + v6 + (int64_t)(v10 < v9)) % 256 | v7 & -256; // 0x25e409
    int64_t v11; // 0x25e3f2
    int32_t * v12 = (int32_t *)(a2 - 13 + 2 * (int64_t)((v4 | (int32_t)v11) & -256)); // 0x25e40b
    *v12 = *v12 + (int32_t)result;
    return result;
}

// Address range: 0x25e439 - 0x25e441
int64_t function_25e439(int64_t a1, int64_t a2) {
    // 0x25e439
    int64_t result; // 0x25e439
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x25e481 - 0x25e485
int64_t function_25e481(int64_t a1, int64_t a2) {
    // 0x25e481
    return a1 & 0xffffffff;
}
