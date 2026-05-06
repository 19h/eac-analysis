/*
 * Targeted RetDec C for native executable gap queue batch 268.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1063bf-0x1065bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f361e-0x2f381e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f381e-0x2f3a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f3a1e-0x2f3c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x458834-0x458a34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x458a34-0x458c34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x458e34-0x459034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x459034-0x459234 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1063bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1063c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1063da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_106531(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10654f(void);
int64_t function_106554(void);
int64_t function_10658c(int64_t a1);
int64_t function_2ca9894e();
int64_t function_2f361e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2f369e(int64_t a1);
int64_t function_2f36c2(void);
int64_t function_2f36e5(void);
int64_t function_2f370d(int64_t a1);
int64_t function_2f37aa(void);
int64_t function_2f3822(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2f3869(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f386f(int64_t a1);
int64_t function_2f3871(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2f3947(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f39b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f39c4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f39d4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2f3a87(void);
int64_t function_2f3ac0(void);
int64_t function_2f3ac3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f3ac5(int64_t a1, int64_t a2);
int64_t function_2f3ad6(int64_t a1, int64_t a2);
int64_t function_2f3b13(void);
int64_t function_2f3b61(void);
int64_t function_2f3b76(void);
int64_t function_2f3b85(int64_t a1, int64_t a2);
int64_t function_2f3b91(void);
int64_t function_2f3bd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f3be7(void);
int64_t function_458819();
int64_t function_458834(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_458957(int64_t a1);
int64_t function_458962(void);
int64_t function_45897c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45898f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_458ac8(void);
int64_t function_458b0b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_458b2c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_458b82(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_458bf5(void);
int64_t function_458bfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_458e34(int64_t a1, int64_t a2);
int64_t function_458ed5(void);
int64_t function_458f59(int64_t a1, int64_t a2);
int64_t function_458f79(void);
int64_t function_458f87(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_458fae(void);
int64_t function_458fcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_458ffa(void);
int64_t function_459012(void);
int64_t function_459019(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_459047(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_459075(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4590ec(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45913d(int64_t a1);
int64_t function_459146(int64_t a1);
int64_t function_45916a(void);
int64_t function_459188(void);
int64_t function_459198(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_45921e(void);
int64_t function_459226(void);
int64_t function_6d8bf42d();
int64_t function_9bb35e6();
int64_t function_caf2a();
int64_t function_e21cb9f();
int64_t function_ffffffff81973b36();
int64_t function_ffffffff82618910();
int64_t function_ffffffff90c6d1ff();
int64_t function_ffffffff973073d3();
int64_t function_ffffffffb7687d9e();
int64_t function_fffffffffdd60893();
int64_t unknown_433075c8();
int64_t unknown_47ad21f6();
int64_t unknown_5d5f597a();
int64_t unknown_d90d0e3();
int64_t unknown_ffffffffeb598fe2();

// Address range: 0x1063bf - 0x1063c7
int64_t function_1063bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 49); // 0x1063bf
    unsigned char v2 = *v1; // 0x1063bf
    unsigned char v3 = v2 + (char)a4; // 0x1063bf
    *v1 = v3;
    int64_t v4; // 0x1063bf
    int32_t * v5 = (int32_t *)(v4 + 73); // 0x1063c2
    *v5 = 0x80000000 * (int32_t)(v3 < v2) | *v5 / 2;
    return __asm_int1(a1, a2, a3, a4);
}

// Address range: 0x1063c8 - 0x1063da
int64_t function_1063c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1063c8
    int64_t v1; // 0x1063c8
    return function_caf2a(a1, a2, a3, a6, v1, a5);
}

// Address range: 0x1063da - 0x10651f
int64_t function_1063da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1063da
    bool v1; // 0x1063da
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x1063de
    int64_t v3; // bp-40, 0x1063da
    int64_t v4 = (int64_t)&v3; // 0x106485
    int64_t v5 = *(int64_t *)(v4 + 16); // 0x10648d
    int64_t * v6 = (int64_t *)(v4 - 8); // 0x10648d
    *v6 = v5;
    int64_t * v7 = (int64_t *)(v4 - 16); // 0x106495
    int64_t * v8 = (int64_t *)(v4 - 24); // 0x1064ac
    *v8 = v4;
    *(int64_t *)(v4 - 32) = *v7;
    *v7 = 0x6bdc0245;
    *v8 = v2;
    *(int64_t *)(v4 + 8) = v2;
    *v8 = v5;
    *(int64_t *)(v4 + 24) = v5;
    int64_t v9 = *v6; // 0x1064ef
    *v7 = v9;
    *v8 = v9;
    *v6 = v3;
    *v7 = v3;
    int64_t v10; // 0x1063da
    return function_caf2a(a1, a2, *v7, (int64_t)*(int32_t *)(v10 + 8), *v7, v10);
}

// Address range: 0x106531 - 0x10653e
int64_t function_106531(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x106531
    int64_t v1; // 0x106531
    *(char *)a1 = (char)v1;
    int64_t result; // 0x106531
    int64_t v2 = result;
    *(char *)v2 = *(char *)&result + (char)v2;
    char * v3 = (char *)(a4 - 1); // 0x106538
    *v3 = *v3 + (char)a4;
    return result;
}

// Address range: 0x10654f - 0x106550
int64_t function_10654f(void) {
    // 0x10654f
    int64_t result; // 0x10654f
    return result;
}

// Address range: 0x106554 - 0x106557
int64_t function_106554(void) {
    // 0x106554
    int64_t result; // 0x106554
    return result;
}

// Address range: 0x10658c - 0x10658f
int64_t function_10658c(int64_t a1) {
    // 0x10658c
    int64_t result; // 0x10658c
    return result;
}

// Address range: 0x2f361e - 0x2f364d
int64_t function_2f361e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 - 65); // 0x2f3622
    unsigned char v2 = *v1; // 0x2f3622
    *v1 = (char)(a3 / 256);
    int64_t v3; // 0x2f361e
    *(char *)-0x2928decf = *(char *)-0x2928decf + (char)(v3 / 256);
    __asm_out(-20, (char)v3 ^ 11);
    int32_t * v4 = (int32_t *)(v3 + 0x65eb0540 & 0xffffffff); // 0x2f3632
    *v4 = (int32_t)a1;
    int64_t v5 = (int64_t)*v4; // 0x2f3632
    __asm_int(81);
    int64_t v6; // 0x2f361e
    *(int32_t *)v5 = *(int32_t *)&v6;
    bool v7; // 0x2f361e
    int64_t v8 = v7 ? -4 : 4; // 0x2f3649
    return __asm_hlt(v8 + v5, v8 + (v3 + a2 & 0xffffffff), 256 * (int64_t)v2 | a3 & -0xff01);
}

// Address range: 0x2f369e - 0x2f36a1
int64_t function_2f369e(int64_t a1) {
    // 0x2f369e
    int64_t result; // 0x2f369e
    return result;
}

// Address range: 0x2f36c2 - 0x2f36d3
int64_t function_2f36c2(void) {
    // 0x2f36c2
    __asm_in(53);
    return function_ffffffff973073d3();
}

// Address range: 0x2f36e5 - 0x2f36e6
int64_t function_2f36e5(void) {
    // 0x2f36e5
    int64_t result; // 0x2f36e5
    return result;
}

// Address range: 0x2f370d - 0x2f371c
int64_t function_2f370d(int64_t a1) {
    int64_t result = __asm_iretd(); // 0x2f370f
    bool v1; // 0x2f370d
    if (v1) {
        result = function_2f36e5();
    }
    int32_t v2 = result; // 0x2f3711
    __asm_out_133(-48, v2);
    __asm_out_133(16, v2);
    __asm_int(78);
    return result;
}

// Address range: 0x2f37aa - 0x2f37ab
int64_t function_2f37aa(void) {
    // 0x2f37aa
    int64_t result; // 0x2f37aa
    return result;
}

// Address range: 0x2f3822 - 0x2f3869
int64_t function_2f3822(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2f3822
    int64_t v1; // 0x2f3822
    *(int32_t *)-0x11ff90159206c50a = (int32_t)(v1 | a2);
    char v2 = *(char *)-0x47a466c7; // 0x2f3832
    *(char *)-0x47a466c7 = v2 | (char)((uint64_t)v1 / 256);
    uint32_t result = (int32_t)a5 + 0x13d002a + (int32_t)(-1 - (char)a3 < (char)(a3 / 256)); // 0x2f3845
    if (result != 0) {
        // 0x2f3867
        return result;
    }
    // 0x2f384d
    __asm_out(-48, (char)result);
    return function_9bb35e6();
}

// Address range: 0x2f3869 - 0x2f386e
int64_t function_2f3869(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f3869
    if (a4 != 1) {
        // 0x2f3870
        int64_t result; // 0x2f3869
        return result;
    }
    // 0x2f386c
    abort();
    // UNREACHABLE
}

// Address range: 0x2f386f - 0x2f3870
int64_t function_2f386f(int64_t a1) {
    // 0x2f386f
    int64_t result; // 0x2f386f
    return result;
}

// Address range: 0x2f3871 - 0x2f391a
int64_t function_2f3871(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2; // 0x2f3871
    int64_t v3 = v2 + 0x37be5d2; // 0x2f3871
    uint32_t v4 = *(int32_t *)((v3 & 0xffffffff) + 0xdd89a7) + (int32_t)v3; // 0x2f3876
    if (v4 >= 0x8670e02) {
        // 0x2f3885
        return v2 & 0xffffffff;
    }
    int64_t v5 = v4; // 0x2f3876
    uint32_t v6 = *(int32_t *)v5 + v4; // 0x2f3898
    uint32_t v7 = v6 + (int32_t)(v4 < 0x8670e01); // 0x2f3898
    bool v8 = v4 < 0x8670e01 ? v7 <= v4 : v6 < v4; // 0x2f3898
    int64_t v9 = v7; // 0x2f389a
    char v10 = *(char *)(v5 - 55); // 0x2f389b
    uint64_t v11 = (256 * (int64_t)((char)(a4 / 256) - v10 + (char)v8) | a4 & -0xff01) - 1; // 0x2f389e
    int64_t v12 = v11 & -0x10000; // 0x2f38a0
    int64_t v13 = v11 / 256 | v2;
    int64_t v14 = v12 | 256 * v13 & 0xff00 | 22; // 0x2f38a2
    *(char *)(v2 & 0xffffffff) = (char)v7 + 1;
    int64_t v15 = v1; // 0x2f38bc
    int64_t v16 = unknown_433075c8(0xf1b500b3, v15, v5, v14); // 0x2f38c2
    char v17 = *(char *)(4 * v16 + v2); // 0x2f38c9
    int64_t v18 = 256 * (int64_t)(v17 | (char)(v4 / 256)) | v5 & 0xffff00ff; // 0x2f38c9
    v1 = v18;
    int32_t v19 = v14;
    int32_t * v20 = (int32_t *)(v15 + 0xda1d384 + 2 * v14); // 0x2f38d2
    int32_t v21 = v15; // 0x2f38db
    int32_t v22 = -0xe4aff4d;
    int64_t v23 = (int64_t)&v1;
    uint64_t v24 = v18;
    *v20 = *v20 + v19;
    int32_t v25 = v22 + v21; // 0x2f38db
    int64_t v26 = v23 - 8; // 0x2f38dd
    int64_t * v27 = (int64_t *)v26;
    *v27 = v9;
    *(char *)(v15 + 66 + 8 * v24) = (char)(v24 / 256);
    while (v25 < 0 == ((v25 ^ v22) & (v25 ^ v21)) < 0) {
        // 0x2f38d0
        v22 = v25;
        v23 = v26;
        v24 = (int64_t)*(int32_t *)(v16 + 15);
        *v20 = *v20 + v19;
        v25 = v22 + v21;
        v26 = v23 - 8;
        v27 = (int64_t *)v26;
        *v27 = v9;
        *(char *)(v15 + 66 + 8 * v24) = (char)(v24 / 256);
    }
    // 0x2f38e8
    *(int32_t *)-0x5ed435d7 = *(int32_t *)-0x5ed435d7 + v19;
    int64_t v28 = unknown_47ad21f6(v25); // 0x2f38f0
    char v29 = *(char *)(v28 + 30); // 0x2f3900
    int64_t v30 = v12 | 256 * (int64_t)(v29 | (char)v13) | 22; // 0x2f3900
    int32_t * v31 = (int32_t *)(v30 + 0x6a01e8eb); // 0x2f3905
    *v31 = *v31 + (int32_t)v30;
    *v27 = 0xe803090b;
    *(int64_t *)(v23 - 16) = v26;
    *(int64_t *)(v23 - 24) = v15;
    int32_t * v32 = (int32_t *)((8 * v9 | 1) + (v28 & -256 | (int64_t)__asm_in(-90))); // 0x2f3911
    *v32 = *v32 & 0x14544f0a;
    return __asm_wait();
}

// Address range: 0x2f3947 - 0x2f394e
int64_t function_2f3947(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f3947
    int64_t v1; // 0x2f3947
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_ffffffff81973b36();
}

// Address range: 0x2f39b9 - 0x2f39c3
int64_t function_2f39b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f39b9
    int64_t v1; // 0x2f39b9
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a4;
    return v2 & -229;
}

// Address range: 0x2f39c4 - 0x2f39cd
int64_t function_2f39c4(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 11); // 0x2f39c7
    int64_t result; // 0x2f39c4
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2f39d4 - 0x2f39e1
int64_t function_2f39d4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2f39d4
    int64_t v1; // 0x2f39d4
    int64_t v2 = v1 & -0xff01 | (int64_t)&g2; // 0x2f39d4
    int32_t * v3 = (int32_t *)(a2 - 53 + 2 * v1); // 0x2f39d6
    *v3 = *v3 + (int32_t)v2;
    return (a4 / 256 + 252 + v2) % 256 | v2 & -256;
}

// Address range: 0x2f3a87 - 0x2f3a8a
int64_t function_2f3a87(void) {
    // 0x2f3a87
    int64_t result; // 0x2f3a87
    return result;
}

// Address range: 0x2f3ac0 - 0x2f3ac2
int64_t function_2f3ac0(void) {
    // 0x2f3ac0
    int64_t v1; // 0x2f3ac0
    return function_2f3ac5(v1, v1);
}

// Address range: 0x2f3ac3 - 0x2f3ac5
int64_t function_2f3ac3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f3ac3
    int64_t result; // 0x2f3ac3
    return result;
}

// Address range: 0x2f3ac5 - 0x2f3acc
int64_t function_2f3ac5(int64_t a1, int64_t a2) {
    // 0x2f3ac5
    *(int32_t *)(a2 + 68) = -0xcf9571d;
    int64_t result; // 0x2f3ac5
    return result;
}

// Address range: 0x2f3ad6 - 0x2f3af9
int64_t function_2f3ad6(int64_t a1, int64_t a2) {
    // 0x2f3ad6
    bool v1; // 0x2f3ad6
    int64_t v2 = v1 ? -1 : 1; // 0x2f3ada
    int64_t v3 = v2 + a2; // 0x2f3ada
    *(int32_t *)a1 = *(int32_t *)v3;
    int64_t v4 = v1 ? -4 : 4; // 0x2f3adb
    int64_t v5 = v4 + a1 + v2; // 0x2f3adc
    int32_t * v6 = (int32_t *)((unknown_d90d0e3(v5, v3 + v4) & 0xffffffff) + 0x48013d68); // 0x2f3aed
    int64_t v7; // 0x2f3ad6
    *v6 = *v6 + ((int32_t)v7 & -256 | 232);
    return v5 + v7 & 0xffffff0e | 241;
}

// Address range: 0x2f3b13 - 0x2f3b14
int64_t function_2f3b13(void) {
    // 0x2f3b13
    int64_t result; // 0x2f3b13
    return result;
}

// Address range: 0x2f3b61 - 0x2f3b62
int64_t function_2f3b61(void) {
    // 0x2f3b61
    int64_t result; // 0x2f3b61
    return result;
}

// Address range: 0x2f3b76 - 0x2f3b77
int64_t function_2f3b76(void) {
    // 0x2f3b76
    int64_t result; // 0x2f3b76
    return result;
}

// Address range: 0x2f3b85 - 0x2f3b91
int64_t function_2f3b85(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)-0x17c5ea6c; // 0x2f3b85
    *(char *)-0x17c5ea6c = v1 / 128 | 2 * v1;
    int64_t v2; // 0x2f3b85
    *(char *)a1 = (char)v2;
    return function_2f3b76();
}

// Address range: 0x2f3b91 - 0x2f3b93
int64_t function_2f3b91(void) {
    // 0x2f3b91
    return function_2f3b61();
}

// Address range: 0x2f3bd3 - 0x2f3bd8
int64_t function_2f3bd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f3bd3
    int64_t result; // 0x2f3bd3
    return result;
}

// Address range: 0x2f3be7 - 0x2f3bea
int64_t function_2f3be7(void) {
    // 0x2f3be7
    int64_t result; // 0x2f3be7
    return result;
}

// Address range: 0x458834 - 0x45889f
int64_t function_458834(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x458834
    int64_t v1; // 0x458834
    // 0x458836
    *(char *)a2 = (char)(a3 & a2);
    int64_t result = a3 & 0xffffffff; // 0x458843
    if (*(char *)(a1 - 122) + 126 == (char)(((char)v1 ^ -2) < 162)) {
        result = function_458819();
    }
    // 0x458845
    return result;
}

// Address range: 0x458957 - 0x45895d
int64_t function_458957(int64_t a1) {
    // 0x458957
    int64_t v1; // 0x458957
    int64_t v2 = v1;
    bool v3; // 0x458957
    return (v2 - (v3 ? 35 : 34)) % 256 | v2 & -256;
}

// Address range: 0x458962 - 0x458963
int64_t function_458962(void) {
    // 0x458962
    int64_t result; // 0x458962
    return result;
}

// Address range: 0x45897c - 0x458987
int64_t function_45897c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45897c
    int64_t v1; // 0x45897c
    uint64_t v2 = v1;
    *(char *)v2 = (char)v2;
    char v3 = *(char *)(118 * a3 & 0xfffffffe); // 0x458984
    return 256 * (int64_t)(v3 | (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x45898f - 0x458a17
int64_t function_45898f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45898f
    int64_t v1; // 0x45898f
    unsigned char v2 = (char)((v1 ^ a3) / 256); // 0x45898f
    int64_t v3 = v1 & 0xff00 ^ a3; // 0x45898f
    __asm_hlt(a1, a2, v3);
    int64_t result = __asm_wait(); // 0x458992
    if (v2 >= 0) {
        unsigned char v4 = llvm_ctpop_i8((char)result ^ 14); // 0x458995
        *(int32_t *)(a2 - 80) = (int32_t)v1;
        if (v4 % 2 == 0) {
            function_458962();
        }
        // 0x4589a1
        return function_ffffffff82618910();
    }
    // 0x4589fc
    if (llvm_ctpop_i8(v2) % 2 == 0) {
        int32_t * v5 = (int32_t *)(8 * a1 + a4); // 0x4589c8
        *v5 = *v5 + (int32_t)v1;
        return result;
    }
    unsigned char v6 = (char)a4 % 32; // 0x4589fe
    if (v6 != 0) {
        char * v7 = (char *)(a4 - 58); // 0x4589fe
        *v7 = *v7 >> v6;
    }
    *(int32_t *)(a1 & 0xffffffff) = (int32_t)a1 - 39;
    uint64_t v8 = a1 + 0x2ea04733; // 0x458a05
    unsigned char v9 = (char)a3; // 0x458a0a
    unsigned char v10 = *(char *)(2 * v1 - 0x22cb419c); // 0x458a0a
    char * v11 = (char *)(v1 + 69); // 0x458a11
    *v11 = *v11 + (char)(v8 / 256) + (char)(v10 > v9);
    int32_t * v12 = (int32_t *)((result & 0xffffffff) + 2 * v1); // 0x458a14
    *v12 = *v12 + (int32_t)(v3 & 0xffffff00 | (int64_t)(v9 - v10));
    return v8 & 0xffffffff;
}

// Address range: 0x458ac8 - 0x458ac9
int64_t function_458ac8(void) {
    // 0x458ac8
    int64_t result; // 0x458ac8
    return result;
}

// Address range: 0x458b0b - 0x458b12
int64_t function_458b0b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x458b0b
    int64_t result; // 0x458b0b
    return result;
}

// Address range: 0x458b2c - 0x458b42
int64_t function_458b2c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x458b2c
    *(int32_t *)(a1 - 0x4d7daff1) = (int32_t)a3;
    int64_t v1; // 0x458b2c
    *(char *)-0x68f223ad5916c3b1 = (char)v1;
    return function_458ac8();
}

// Address range: 0x458b82 - 0x458b85
int64_t function_458b82(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x458b82
    int64_t result; // 0x458b82
    return result;
}

// Address range: 0x458bf5 - 0x458bfa
int64_t function_458bf5(void) {
    // 0x458bf5
    return function_e21cb9f();
}

// Address range: 0x458bfa - 0x458c29
int64_t function_458bfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 1); // 0x458bfe
    *v1 = *v1 | (int32_t)a4;
    uint64_t v2 = __asm_iretd(); // 0x458c26
    char v3 = *(char *)v2; // 0x458c27
    return 256 * (int64_t)(v3 + (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x458e34 - 0x458e35
int64_t function_458e34(int64_t a1, int64_t a2) {
    // 0x458e34
    int64_t result; // 0x458e34
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x458ed5 - 0x458ed9
int64_t function_458ed5(void) {
    // 0x458ed5
    int64_t result; // 0x458ed5
    return result;
}

// Address range: 0x458f59 - 0x458f61
int64_t function_458f59(int64_t a1, int64_t a2) {
    // 0x458f59
    int64_t v1; // 0x458f59
    *(int32_t *)a2 = (int32_t)v1;
    return function_2ca9894e();
}

// Address range: 0x458f79 - 0x458f7e
int64_t function_458f79(void) {
    // 0x458f79
    return function_fffffffffdd60893();
}

// Address range: 0x458f87 - 0x458f96
int64_t function_458f87(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)(a1 + 0xfb0fe); // 0x458f87
    int32_t * v2 = (int32_t *)(a1 + 0xffffff95 & 0xffffffff); // 0x458f8d
    int32_t v3 = *v2; // 0x458f8d
    *v2 = v3 >> 8;
    int64_t v4; // 0x458f87
    char v5 = *(char *)&v4; // 0x458f92
    *(char *)v4 = v5 - (char)a3 + (char)((char)v3 < 0);
    return function_458fcf(a1, a2, a3, a4 & -256 | (int64_t)(v1 & (char)a4));
}

// Address range: 0x458fae - 0x458fb5
int64_t function_458fae(void) {
    // 0x458fae
    bool v1; // 0x458fae
    if (v1) {
        function_459012();
    }
    // 0x458fb0
    return function_ffffffffb7687d9e();
}

// Address range: 0x458fcf - 0x458fe9
int64_t function_458fcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x458fcf
    int64_t result; // 0x458fcf
    // 0x458fd1
    return result;
    // 0x458fe3
    *(int32_t *)a4 = (int32_t)a4 - ((int32_t)result & -256 | 246);
    return result;
}

// Address range: 0x458ffa - 0x458ffb
int64_t function_458ffa(void) {
    // 0x458ffa
    int64_t result; // 0x458ffa
    return result;
}

// Address range: 0x459012 - 0x459015
int64_t function_459012(void) {
    // 0x459012
    int64_t result; // 0x459012
    return result;
}

// Address range: 0x459019 - 0x459047
int64_t function_459019(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x459019
    __asm_int1((int64_t)&g3, (int64_t)&g3, (int64_t)&g3, (int64_t)&g3);
    *(int864_t *)a3 = (int864_t)__asm_fnsave();
    char v1 = *(char *)-0x5ffd8ee0; // 0x45902d
    char v2 = a3 / 256; // 0x45902d
    int64_t v3 = 0xa0027120; // 0x459030
    if (((v1 - v2 ^ v1) & (v1 ^ v2)) >= 0) {
        v3 = function_458ffa();
    }
    int64_t v4 = v3;
    return (v4 + 222) % 256 | v4 & -256;
}

// Address range: 0x459047 - 0x459060
int64_t function_459047(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x459047
    int64_t result; // 0x459047
    bool v1; // 0x459047
    if (v1 || false) {
        // 0x45905d
        __asm_out(116, (char)result);
        return result;
    }
    // 0x459049
    return result;
}

// Address range: 0x459075 - 0x459094
int64_t function_459075(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x459075
    int64_t v1; // 0x459075
    int64_t v2 = v1;
    int64_t v3 = a4 - 1; // 0x459075
    bool v4; // 0x459075
    if (v3 == 0 || v4) {
        char * v5 = (char *)(v1 + 47); // 0x45907d
        *v5 = *v5 & (char)v1;
        int64_t v6; // 0x459075
        *(char *)v6 = *(char *)&v6 - (char)v3;
        return function_6d8bf42d();
    }
    // 0x45908f
    return (v2 & 225) + 140 & 237 | v2 & -256;
}

// Address range: 0x4590ec - 0x459106
int64_t function_4590ec(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4590ec
    __asm_out_134((int16_t)a3, (char)unknown_5d5f597a());
    return function_ffffffff90c6d1ff();
}

// Address range: 0x45913d - 0x45913f
int64_t function_45913d(int64_t a1) {
    // 0x45913d
    int64_t result; // 0x45913d
    return result;
}

// Address range: 0x459146 - 0x45914a
int64_t function_459146(int64_t a1) {
    // 0x459146
    int64_t result; // 0x459146
    return result;
}

// Address range: 0x45916a - 0x45916b
int64_t function_45916a(void) {
    // 0x45916a
    int64_t result; // 0x45916a
    return result;
}

// Address range: 0x459188 - 0x45918a
int64_t function_459188(void) {
    // 0x459188
    return function_45916a();
}

// Address range: 0x459198 - 0x4591a3
int64_t function_459198(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t result = unknown_ffffffffeb598fe2(a1, a2, a3); // 0x459198
    *(char *)(a1 + 103) = (char)(a3 / 256);
    return result;
}

// Address range: 0x45921e - 0x45921f
int64_t function_45921e(void) {
    // 0x45921e
    int64_t result; // 0x45921e
    return result;
}

// Address range: 0x459226 - 0x459228
int64_t function_459226(void) {
    // 0x459226
    int64_t result; // 0x459226
    return result;
}
