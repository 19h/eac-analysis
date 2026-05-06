/*
 * Targeted RetDec C for native executable gap queue batch 327.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1e76e8-0x1e78e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e78e8-0x1e7ae8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e7ae8-0x1e7ce8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f881e-0x2f8a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f8a1e-0x2f8c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f8c1e-0x2f8e1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f8e1e-0x2f901e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f901e-0x2f921e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1e76e8(void);
int64_t function_1e76f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e779d(void);
int64_t function_1e780b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e784d(void);
int64_t function_1e7858(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e78a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int16_t a5);
int64_t function_1e78a9(void);
int64_t function_1e78b3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e7944(int64_t a1);
int64_t function_1e799d(void);
int64_t function_1e79c5(void);
int64_t function_1e79e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e7a1d(void);
int64_t function_1e7ab4(int64_t a1);
int64_t function_1e7ab9(int64_t a1);
int64_t function_1e7ad5(int64_t a1, int64_t a2);
int64_t function_1e7b0f(void);
int64_t function_1e7b27(int64_t a1);
int64_t function_1e7b9b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e7bca(void);
int64_t function_1e7c24(void);
int64_t function_1e7c52(void);
int64_t function_1e7c5d(void);
int64_t function_1e7c60(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e7c64(void);
int64_t function_1e7c77(void);
int64_t function_1e7c99(void);
int64_t function_1e7cac(void);
int64_t function_1e7cc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_206d4bb();
int64_t function_217a8f5();
int64_t function_2f881e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f8847(int64_t a1);
int64_t function_2f8860(void);
int64_t function_2f8889(void);
int64_t function_2f88af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f8901(int64_t a1);
int64_t function_2f89ac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f8a16(void);
int64_t function_2f8a45(void);
int64_t function_2f8a66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f8a9c(void);
int64_t function_2f8ad0(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_2f8b5b(int64_t a1);
int64_t function_2f8b7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f8bea(void);
int64_t function_2f8c4f(void);
int64_t function_2f8ca3(void);
int64_t function_2f8cc6(int64_t a1);
int64_t function_2f8d33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f8e99(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2f9016(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2f91b5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2f91bc(void);
int64_t function_37196f();
int64_t function_68c05054();
int64_t function_caf2a();
int64_t function_ffffffffb004c3e8();
int64_t unknown_1814a4a7();
int64_t unknown_1c3a2b23();
int64_t unknown_206fb863();
int64_t unknown_284592c3();
int64_t unknown_29314216();
int64_t unknown_2fe7c286();
int64_t unknown_362afecc();
int64_t unknown_3a4cf06b();
int64_t unknown_3acf7cf1();
int64_t unknown_3d3172db();
int64_t unknown_463c98b5();
int64_t unknown_64de7cea();
int64_t unknown_65b72874();
int64_t unknown_7c959dcc();
int64_t unknown_c291823();
int64_t unknown_eb0dc19();
int64_t unknown_ffffffff89a9da45();
int64_t unknown_ffffffff8bea924d();
int64_t unknown_ffffffffabe4243a();
int64_t unknown_ffffffffb1e43316();
int64_t unknown_ffffffffbe073a2e();
int64_t unknown_ffffffffe1e047c6();

// Address range: 0x1e76e8 - 0x1e76f1
int64_t function_1e76e8(void) {
    // 0x1e76e8
    int64_t v1; // 0x1e76e8
    bool v2; // 0x1e76e8
    return v1 - (v2 ? 0x3f82af0f : 0x3f82af0e) & 0xffffff00 | (int64_t)__asm_in(-102);
}

// Address range: 0x1e76f1 - 0x1e773a
int64_t function_1e76f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x1e76f1
    int32_t * v2; // 0x1e772b
    uint32_t v3; // 0x1e772b
    if (v1 == 0) {
        bool v4; // 0x1e76f1
        if (v4) {
            // 0x1e7720
            __asm_hlt(a5);
            v2 = (int32_t *)(a3 + 0x1e82a92);
            v3 = *v2;
            *v2 = 2 * v3 | (int32_t)(v3 < 0);
            return 0x23001332;
        }
    } else {
        char * v5 = (char *)(a2 - 0x506fe18); // 0x1e76f1
        char v6 = *v5 << v1; // 0x1e76f1
        unsigned char v7 = llvm_ctpop_i8(v6); // 0x1e76f1
        *v5 = v6;
        if (v7 % 2 == 0) {
            // 0x1e7720
            __asm_hlt(a5);
            v2 = (int32_t *)(a3 + 0x1e82a92);
            v3 = *v2;
            *v2 = 2 * v3 | (int32_t)(v3 < 0);
            return 0x23001332;
        }
    }
    // 0x1e76fa
    int64_t v8; // 0x1e76f1
    int32_t * v9 = (int32_t *)(v8 - 0xf0805f6); // 0x1e76fa
    *v9 = *v9 | 0x1e80123;
    int32_t * v10 = (int32_t *)(a5 + 1); // 0x1e770e
    uint32_t v11 = *v10; // 0x1e770e
    *v10 = v11 / 0x2000 | 0x80000 * v11;
    unknown_eb0dc19(a5);
    return __asm_sti();
}

// Address range: 0x1e779d - 0x1e779e
int64_t function_1e779d(void) {
    // 0x1e779d
    int64_t result; // 0x1e779d
    return result;
}

// Address range: 0x1e780b - 0x1e7834
int64_t function_1e780b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x1e7813
    __asm_in_133(v1);
    int64_t v2; // 0x1e780b
    if ((int32_t)v2 > 0x3cc4f701) {
        function_1e779d();
    }
    // 0x1e7816
    __asm_outsb(v1, (char)v2);
    unknown_c291823();
    *(char *)a1 = __asm_insb(v1);
    *(int32_t *)0x5c206030 = *(int32_t *)0x5c206030 + (int32_t)a1;
    return function_68c05054();
}

// Address range: 0x1e784d - 0x1e784e
int64_t function_1e784d(void) {
    // 0x1e784d
    int64_t result; // 0x1e784d
    return result;
}

// Address range: 0x1e7858 - 0x1e78a0
int64_t function_1e7858(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e7858
    int64_t v1; // 0x1e7858
    char * v2 = (char *)(v1 - 24); // 0x1e7858
    *v2 = -*v2;
    bool v3; // 0x1e7858
    int64_t v4 = (v3 ? -1 : 1) + a2; // 0x1e785d
    int32_t * v5 = (int32_t *)(a3 + 0x3fd50570); // 0x1e785e
    uint32_t v6 = *v5; // 0x1e785e
    int64_t v7; // 0x1e7858
    uint32_t v8 = (int32_t)(v1 & 0xffffff00 | (int64_t)*(char *)&v7); // 0x1e785e
    *v5 = v6 - v8;
    __asm_in_133((int16_t)a3);
    uint64_t v9 = unknown_3a4cf06b(); // 0x1e7865
    *(int32_t *)(a2 + a1 & 0xffffffff) = *(int32_t *)v4;
    int64_t v10 = v4 + (v3 ? -4 : 4); // 0x1e786c
    v7 = v10;
    unsigned char v11 = (char)a4 % 32; // 0x1e786d
    v7 = v10;
    if (v11 != 0) {
        char * v12 = (char *)(v10 - 24 + 2 * v10); // 0x1e786d
        *v12 = *v12 << v11;
    }
    uint64_t v13 = v9 + 151 + (int64_t)(v6 < v8); // 0x1e786a
    int32_t * v14 = (int32_t *)(v7 - 0x5f7969f8); // 0x1e7871
    *v14 = *v14 + (int32_t)v1;
    char * v15 = (char *)(8 * v1 - 0x27002aff + (v13 % 256 | v9 & -256)); // 0x1e7877
    *v15 = *v15 + (char)v13;
    char * v16 = (char *)a4; // 0x1e7882
    *v16 = *v16 + (char)(v9 / 256);
    float80_t v17; // 0x1e7858
    *(float64_t *)(a3 - 0x7769fe18) = (float64_t)v17;
    return a4 + 0xce8f4a84 + (v9 & 0xffffff00 | v13 & 170 | 85) & 0xffffffff;
}

// Address range: 0x1e78a0 - 0x1e78a9
int64_t function_1e78a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int16_t a5) {
    // 0x1e78a0
    return function_206d4bb();
}

// Address range: 0x1e78a9 - 0x1e78aa
int64_t function_1e78a9(void) {
    // 0x1e78a9
    int64_t result; // 0x1e78a9
    return result;
}

// Address range: 0x1e78b3 - 0x1e791b
int64_t function_1e78b3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e78b3
    int64_t v1; // 0x1e78b3
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a1;
    int32_t * v2 = (int32_t *)(a3 - 0x3da7fa40); // 0x1e78b6
    int64_t v3; // 0x1e78b3
    int64_t v4 = v3;
    int64_t v5; // 0x1e78b3
    int64_t v6 = *(int64_t *)v5; // 0x1e78b5
    *v2 = *v2 - (int32_t)v1;
    int64_t v7; // 0x1e78b3
    int64_t v8 = (int32_t)v7 < 0x846301e8 ? 161 : 160; // 0x1e78c1
    int64_t v9 = unknown_7c959dcc(); // 0x1e78c6
    int64_t v10 = (v9 + 211) % 256 | v9 & -256; // 0x1e78cb
    int32_t v11 = *(int32_t *)(v10 - 24); // 0x1e78ff
    uint32_t v12 = (int32_t)((char)v9 < 45) - v11 + (int32_t)v10; // 0x1e78ff
    int64_t v13 = v12; // 0x1e78ff
    int64_t v14 = ((v4 & 0xff00) + v4 & 0xff00 | v4 & 0xffff0000 | (v4 - v8) % 256) + a1 & 0xffffffff; // 0x1e7902
    int32_t * v15 = (int32_t *)(v6 - 0x5062b600); // 0x1e7904
    uint32_t v16 = *v15; // 0x1e7904
    *v15 = v16 / 2 | 0x80000000 * v16;
    *(int32_t *)v13 = v12;
    v5 += 8;
    while (v6 == 0) {
        // 0x1e78b5
        v4 = v14;
        v6 = *(int64_t *)v5;
        *v2 = *v2 - (int32_t)v1;
        v8 = (int32_t)v13 < 0x846301e8 ? 161 : 160;
        v9 = unknown_7c959dcc();
        v10 = (v9 + 211) % 256 | v9 & -256;
        v11 = *(int32_t *)(v10 - 24);
        v12 = (int32_t)((char)v9 < 45) - v11 + (int32_t)v10;
        v13 = v12;
        v14 = ((v4 & 0xff00) + v4 & 0xff00 | v4 & 0xffff0000 | (v4 - v8) % 256) + a1 & 0xffffffff;
        v15 = (int32_t *)(v6 - 0x5062b600);
        v16 = *v15;
        *v15 = v16 / 2 | 0x80000000 * v16;
        *(int32_t *)v13 = v12;
        v5 += 8;
    }
    int64_t result = unknown_ffffffffb1e43316(); // 0x1e790f
    __asm_fbld(*(float80_t *)(v14 + 0x7cd4dc96));
    return result;
}

// Address range: 0x1e7944 - 0x1e7945
int64_t function_1e7944(int64_t a1) {
    // 0x1e7944
    int64_t result; // 0x1e7944
    return result;
}

// Address range: 0x1e799d - 0x1e799e
int64_t function_1e799d(void) {
    // 0x1e799d
    int64_t result; // 0x1e799d
    return result;
}

// Address range: 0x1e79c5 - 0x1e79c8
int64_t function_1e79c5(void) {
    // 0x1e79c5
    int64_t result; // 0x1e79c5
    return result;
}

// Address range: 0x1e79e8 - 0x1e7a07
int64_t function_1e79e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e79e8
    int64_t v1; // 0x1e79e8
    int64_t v2 = v1;
    int64_t v3 = unknown_3acf7cf1(); // 0x1e79f0
    if (a4 == 0) {
        v3 = function_1e799d();
    }
    int64_t v4 = v3;
    char * v5 = (char *)(4 * a2 + a4); // 0x1e79f2
    *v5 = *v5 | (char)v2;
    char v6 = *(char *)((v2 + 3840 & 0xff00 | v2 & -0xff01) + 12); // 0x1e7a01
    return v4 & -256 | (int64_t)(v6 ^ ((char)v4 | -17));
}

// Address range: 0x1e7a1d - 0x1e7a20
int64_t function_1e7a1d(void) {
    // 0x1e7a1d
    int64_t result; // 0x1e7a1d
    return result;
}

// Address range: 0x1e7ab4 - 0x1e7ab5
int64_t function_1e7ab4(int64_t a1) {
    // 0x1e7ab4
    int64_t result; // 0x1e7ab4
    return result;
}

// Address range: 0x1e7ab9 - 0x1e7abc
int64_t function_1e7ab9(int64_t a1) {
    // 0x1e7ab9
    int64_t result; // 0x1e7ab9
    return result;
}

// Address range: 0x1e7ad5 - 0x1e7ad9
int64_t function_1e7ad5(int64_t a1, int64_t a2) {
    // 0x1e7ad5
    int64_t v1; // 0x1e7ad5
    __asm_fbld(*(float80_t *)&v1);
    int64_t result; // 0x1e7ad5
    return result;
}

// Address range: 0x1e7b0f - 0x1e7b10
int64_t function_1e7b0f(void) {
    // 0x1e7b0f
    int64_t result; // 0x1e7b0f
    return result;
}

// Address range: 0x1e7b27 - 0x1e7b28
int64_t function_1e7b27(int64_t a1) {
    // 0x1e7b27
    int64_t result; // 0x1e7b27
    return result;
}

// Address range: 0x1e7b9b - 0x1e7bbe
int64_t function_1e7b9b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e7b9b
    int64_t v1; // 0x1e7b9b
    *(char *)a1 = (char)(v1 | a1);
    *(int32_t *)0x2ace03f0f131f495 = (int32_t)unknown_1814a4a7();
    return a3 + 0x29fffb7d & 0xffffffff;
}

// Address range: 0x1e7bca - 0x1e7bcd
int64_t function_1e7bca(void) {
    // 0x1e7bca
    int64_t result; // 0x1e7bca
    return result;
}

// Address range: 0x1e7c24 - 0x1e7c27
int64_t function_1e7c24(void) {
    // 0x1e7c24
    int64_t result; // 0x1e7c24
    return result;
}

// Address range: 0x1e7c52 - 0x1e7c53
int64_t function_1e7c52(void) {
    // 0x1e7c52
    int64_t result; // 0x1e7c52
    return result;
}

// Address range: 0x1e7c5d - 0x1e7c5e
int64_t function_1e7c5d(void) {
    // 0x1e7c5d
    int64_t result; // 0x1e7c5d
    return result;
}

// Address range: 0x1e7c60 - 0x1e7c64
int64_t function_1e7c60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e7c60
    __asm_int(-87);
    return a4 & 0xffffffff;
}

// Address range: 0x1e7c64 - 0x1e7c6f
int64_t function_1e7c64(void) {
    char v1 = *(char *)0x6f40d46b; // 0x1e7c64
    int64_t v2; // 0x1e7c64
    char v3 = (uint64_t)v2 / 256; // 0x1e7c64
    char v4 = v1 + v3; // 0x1e7c64
    *(char *)0x6f40d46b = v4;
    int64_t result; // 0x1e7c64
    if (v4 < 0 != ((v4 ^ v1) & (v4 ^ v3)) < 0) {
        result = function_1e7c5d();
    }
    // 0x1e7c6c
    return result;
}

// Address range: 0x1e7c77 - 0x1e7c78
int64_t function_1e7c77(void) {
    // 0x1e7c77
    int64_t result; // 0x1e7c77
    return result;
}

// Address range: 0x1e7c99 - 0x1e7c9a
int64_t function_1e7c99(void) {
    // 0x1e7c99
    int64_t result; // 0x1e7c99
    return result;
}

// Address range: 0x1e7cac - 0x1e7caf
int64_t function_1e7cac(void) {
    // 0x1e7cac
    int64_t result; // 0x1e7cac
    return result;
}

// Address range: 0x1e7cc1 - 0x1e7cd3
int64_t function_1e7cc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a1; // 0x1e7cc1
    uint32_t v2 = (int32_t)a4; // 0x1e7cc1
    uint32_t v3 = v2 + v1; // 0x1e7cc1
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x1e7cc1
    *(int32_t *)-0x1434d286 = *(int32_t *)-0x1434d286 + (int32_t)(v3 < v1);
    int64_t v5; // 0x1e7cc1
    int64_t result = 256 * (64 * (int64_t)(v3 == 0) | (int64_t)(v3 < v1) | 128 * (int64_t)(v3 < 0) | 16 * (int64_t)(v2 % 16 + v1 % 16 > 15) | 4 * (int64_t)(v4 % 2 == 0)) | v5 & -0xff01 | 512; // 0x1e7ccb
    if (a4 != 1) {
        result = function_1e7c52();
    }
    // 0x1e7ccd
    return result;
}

// Address range: 0x2f881e - 0x2f8823
int64_t function_2f881e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f881e
    int64_t result; // 0x2f881e
    return result;
}

// Address range: 0x2f8847 - 0x2f8848
int64_t function_2f8847(int64_t a1) {
    // 0x2f8847
    int64_t result; // 0x2f8847
    return result;
}

// Address range: 0x2f8860 - 0x2f8865
int64_t function_2f8860(void) {
    // 0x2f8860
    return function_37196f();
}

// Address range: 0x2f8889 - 0x2f888a
int64_t function_2f8889(void) {
    // 0x2f8889
    int64_t result; // 0x2f8889
    return result;
}

// Address range: 0x2f88af - 0x2f8900
int64_t function_2f88af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_463c98b5(); // 0x2f88af
    bool v1; // 0x2f88af
    if (v1) {
        int32_t * v2 = (int32_t *)(a2 - 82); // 0x2f88fd
        *v2 = *v2 + (int32_t)a4;
        return result;
    }
    // 0x2f88b6
    return function_2f8889();
}

// Address range: 0x2f8901 - 0x2f8909
int64_t function_2f8901(int64_t a1) {
    // 0x2f8901
    bool v1; // 0x2f8901
    return function_217a8f5((v1 ? -1 : 1) + a1);
}

// Address range: 0x2f89ac - 0x2f89d2
int64_t function_2f89ac(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f89ac
    int64_t v1; // 0x2f89ac
    return unknown_ffffffffe1e047c6() ^ 256 * v1 & 0xff00;
}

// Address range: 0x2f8a16 - 0x2f8a17
int64_t function_2f8a16(void) {
    // 0x2f8a16
    int64_t result; // 0x2f8a16
    return result;
}

// Address range: 0x2f8a45 - 0x2f8a52
int64_t function_2f8a45(void) {
    // 0x2f8a45
    return unknown_ffffffff8bea924d();
}

// Address range: 0x2f8a66 - 0x2f8a90
int64_t function_2f8a66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f8a66
    unknown_65b72874();
    return unknown_284592c3() & -256 | (int64_t)*(char *)-0x6fe953983de5de27;
}

// Address range: 0x2f8a9c - 0x2f8a9d
int64_t function_2f8a9c(void) {
    // 0x2f8a9c
    int64_t result; // 0x2f8a9c
    return result;
}

// Address range: 0x2f8ad0 - 0x2f8b4a
int64_t function_2f8ad0(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    int64_t v1 = a3 % 256 & a4 / 256 | a3 & -256; // 0x2f8ad2
    unknown_3d3172db();
    int32_t * v2 = (int32_t *)(v1 - 0x276a06ed); // 0x2f8ada
    int32_t v3 = *v2; // 0x2f8ada
    int32_t v4 = v1; // 0x2f8ada
    int32_t v5 = v3 + v4; // 0x2f8ada
    *v2 = v5;
    if (v5 < 0 == ((v5 ^ v3) & (v5 ^ v4)) < 0 == (v5 != 0)) {
        function_2f8a9c();
    }
    int64_t v6 = unknown_64de7cea() + 0xef32f5ff; // 0x2f8af9
    char * v7 = (char *)(v6 & 0xffffffff); // 0x2f8aff
    *v7 = *v7 | (char)a4;
    *(int32_t *)0x6201e8752ad345a6 = (int32_t)v6;
    unknown_29314216();
    unknown_1c3a2b23();
    int64_t v8 = unknown_ffffffffbe073a2e(); // 0x2f8b28
    char * v9 = (char *)(v1 + 0x1e83aff); // 0x2f8b2d
    int64_t v10; // 0x2f8ad0
    *v9 = *v9 & ((char)v10 | (char)&g1);
    int64_t v11 = v8 & 0xffffffff; // 0x2f8b34
    int32_t * v12 = (int32_t *)(v11 - 128); // 0x2f8b35
    *v12 = *v12 | (int32_t)v10;
    int64_t v13 = a1 + 0xe875fe3f; // 0x2f8b3a
    int32_t * v14 = (int32_t *)(v13 & 0xffffffff); // 0x2f8b3f
    *v14 = *v14 + (int32_t)(2 * v1 + 0xa982de09 + v10);
    float80_t v15; // 0x2f8ad0
    *(float32_t *)v11 = (float32_t)v15;
    char v16 = __asm_in_133((int16_t)v1); // 0x2f8b43
    int64_t v17; // 0x2f8ad0
    *(int32_t *)v17 = *(int32_t *)&v17 | (int32_t)v10;
    return v13 & 0xffffff00 | (int64_t)v16;
}

// Address range: 0x2f8b5b - 0x2f8b65
int64_t function_2f8b5b(int64_t a1) {
    // 0x2f8b5b
    int64_t v1; // 0x2f8b5b
    *(char *)v1 = 0;
    return unknown_206fb863(a1);
}

// Address range: 0x2f8b7c - 0x2f8b9b
int64_t function_2f8b7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t result = unknown_2fe7c286(); // 0x2f8b80
    char * v1 = (char *)(result + 0x2508e00); // 0x2f8b85
    *v1 = *v1 + (char)result;
    int64_t v2; // 0x2f8b7c
    char * v3 = (char *)(v2 - 0x42fe1800); // 0x2f8b8b
    *v3 = *v3 + (char)(result / 256);
    char * v4 = (char *)(a4 + 0x3fefdbff); // 0x2f8b91
    *v4 = *v4 + (char)v2;
    return result;
}

// Address range: 0x2f8bea - 0x2f8bef
int64_t function_2f8bea(void) {
    // 0x2f8bea
    return function_ffffffffb004c3e8();
}

// Address range: 0x2f8c4f - 0x2f8c50
int64_t function_2f8c4f(void) {
    // 0x2f8c4f
    int64_t result; // 0x2f8c4f
    return result;
}

// Address range: 0x2f8ca3 - 0x2f8ca9
int64_t function_2f8ca3(void) {
    // 0x2f8ca3
    int64_t result; // 0x2f8ca3
    return result;
}

// Address range: 0x2f8cc6 - 0x2f8ccf
int64_t function_2f8cc6(int64_t a1) {
    // 0x2f8cc6
    *(char *)a1 = (char)unknown_362afecc(a1);
    return function_2f8c4f();
}

// Address range: 0x2f8d33 - 0x2f8e99
int64_t function_2f8d33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f8d33
    __asm_hlt(a1);
    unknown_ffffffffabe4243a();
    __asm_hlt(a1);
    int64_t v1; // 0x2f8d33
    *(char *)a1 = (char)v1;
    bool v2; // 0x2f8d33
    int64_t v3 = v2 ? -1 : 1; // 0x2f8d3c
    int64_t v4 = v3 + a1; // 0x2f8d3c
    int64_t v5 = v3 + a2; // 0x2f8d3c
    unknown_ffffffff89a9da45(v4, v5);
    return function_caf2a(v4, v5, a3, a4, v1, v1, 0x2f3393);
}

// Address range: 0x2f8e99 - 0x2f9016
int64_t function_2f8e99(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x100000000 * a3 >> 32; // 0x2f8e99
    int64_t v2 = 0x343fd * v1; // 0x2f8e99
    int64_t v3 = v2 != 0x343fd00000000 * v1 >> 32; // 0x2f8e9f
    bool v4; // 0x2f8e99
    int64_t v5 = 2048 * v3 | v3 | 0x4000 * (int64_t)(bool)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | 4 * (int64_t)v4 | 2; // 0x2f8e9f
    int64_t v6 = 0x68f2c21a; // bp-40, 0x2f8f36
    int64_t v7 = (int64_t)&v6; // 0x2f8f65
    int64_t v8 = v7 + 16; // 0x2f8f6d
    int64_t v9 = *(int64_t *)v8; // 0x2f8f6d
    int64_t * v10 = (int64_t *)(v7 - 8); // 0x2f8f6d
    int64_t * v11 = (int64_t *)(v7 - 16); // 0x2f8f71
    *(int64_t *)(v7 + 8) = v5;
    *v11 = a4;
    *(int64_t *)(v7 - 24) = v5;
    *v10 = v9;
    *(int64_t *)(v7 + 24) = v9;
    *v11 = v6;
    *v10 = v8;
    *v11 = v6;
    return function_caf2a(a1, a2, v2 & 0xffffffff, *v11, a5, a6, v6);
}

// Address range: 0x2f9016 - 0x2f9144
int64_t function_2f9016(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x44607c3; // bp-24, 0x2f90ec
    int64_t v2 = (int64_t)&v1; // 0x2f911e
    *(int64_t *)(v2 - 8) = 0x44607c3;
    *(int64_t *)(v2 - 16) = 0x44607c3;
    return function_caf2a(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x2f91b5 - 0x2f91bb
int64_t function_2f91b5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2f91b5
    int64_t result; // 0x2f91b5
    char * v1 = (char *)(result - 108); // 0x2f91b5
    *v1 = *v1 | (char)(a4 / 256);
    return result;
}

// Address range: 0x2f91bc - 0x2f91c3
int64_t function_2f91bc(void) {
    // 0x2f91bc
    int64_t result; // 0x2f91bc
    char * v1 = (char *)(result + 0x236839ca); // 0x2f91bc
    *v1 = *v1 + (char)result;
    return result;
}
