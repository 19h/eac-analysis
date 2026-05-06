/*
 * Targeted RetDec C for native executable gap queue batch 396.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3e2a96-0x3e2c96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e2c96-0x3e2e96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e2e96-0x3e3096 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f079e-0x3f099e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f099e-0x3f0b9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f0b9e-0x3f0d9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f0d9e-0x3f0f9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f0f9e-0x3f119e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_168d9a2a();
int64_t function_3e2a96(void);
int64_t function_3e2aa7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3e2af9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3e2b5b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e2b68(void);
int64_t function_3e2b8f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e2b98(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e2ba0(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_3e2bf8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3e2c1b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e2c6e(void);
int64_t function_3e2c8f(void);
int64_t function_3e2caa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3e2dbd(void);
int64_t function_3e2de6(int64_t a1, int64_t a2);
int64_t function_3e2df6(void);
int64_t function_3e2e02(void);
int64_t function_3e2e34(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e2e65(void);
int64_t function_3e2e7d(void);
int64_t function_3e2e89(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e2eae(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3e2eff(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e2f32(void);
int64_t function_3e3006(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e301c(int64_t a1);
int64_t function_3e3028(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e3039(void);
int64_t function_3e3060(void);
int64_t function_3e3086(void);
int64_t function_3e308d(void);
int64_t function_3f079e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3f07d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f07da(int64_t a1);
int64_t function_3f07dd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f08eb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f092e(void);
int64_t function_3f0937(void);
int64_t function_3f0956(int64_t a1);
int64_t function_3f0969(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f0a36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3f0b14(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f0b1c(void);
int64_t function_3f0b28(int64_t a1);
int64_t function_3f0b3c(void);
int64_t function_3f0bda(void);
int64_t function_3f0bdf(void);
int64_t function_3f0bff(void);
int64_t function_3f0c0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f0c3b(void);
int64_t function_3f0c3c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3f0e52(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f0ec7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3f0ef1(void);
int64_t function_3f0f28(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f0f94(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f0fb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3f0fda(void);
int64_t function_3f1001(void);
int64_t function_3f1006(void);
int64_t function_3f100a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f1045(void);
int64_t function_3f1073(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f10c9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f10e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3f1118(int64_t a1, int64_t a2);
int64_t function_3f112d(void);
int64_t function_3f1145(void);
int64_t function_3f118e(int64_t a1);
int64_t function_3f1197(int64_t a1, int64_t a2, int64_t a3);
int64_t function_447885df();
int64_t function_54bb24a5();
int64_t function_70259d79();
int64_t function_ffffffffa8f676cc();
int64_t function_ffffffffc2181576();
int64_t function_ffffffffe0aa5b0a();
int64_t function_fffffffff085f46d();
int64_t unknown_7a6cd41a();

// Address range: 0x3e2a96 - 0x3e2a97
int64_t function_3e2a96(void) {
    // 0x3e2a96
    int64_t result; // 0x3e2a96
    return result;
}

// Address range: 0x3e2aa7 - 0x3e2ad0
int64_t function_3e2aa7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3e2aa7
    int64_t v1; // 0x3e2aa7
    int64_t v2 = v1;
    *(char *)a1 = (char)v1;
    int64_t v3 = -1 - (char)a4 < (char)(a3 / 256) ? 104 : 105; // 0x3e2ab3
    int64_t v4 = ((v2 + v3) % 256 | v2 & 0xffffff00) ^ 0xa1517826; // 0x3e2ac2
    bool v5; // 0x3e2aa7
    *(char *)((v5 ? -1 : 1) + a1) = (char)v4;
    return 256 * (int64_t)*(char *)(v4 + 114) | v4 & 0xffff00ff;
}

// Address range: 0x3e2af9 - 0x3e2b26
int64_t function_3e2af9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char * v1 = (char *)(a3 + 0x4a280540); // 0x3e2af9
    *v1 = *v1 ^ (char)(a4 / 256);
    int64_t v2; // 0x3e2af9
    char v3 = *(char *)(v2 % 256 + v2); // 0x3e2b21
    return v2 & -256 | (int64_t)(v3 + (char)a6);
}

// Address range: 0x3e2b5b - 0x3e2b5f
int64_t function_3e2b5b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e2b5b
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1; // 0x3e2b5b
    return v1 | 177;
}

// Address range: 0x3e2b68 - 0x3e2b69
int64_t function_3e2b68(void) {
    // 0x3e2b68
    int64_t result; // 0x3e2b68
    return result;
}

// Address range: 0x3e2b8f - 0x3e2b97
int64_t function_3e2b8f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e2b8f
    int64_t v1; // 0x3e2b8f
    uint64_t v2 = v1;
    char v3 = *(char *)(a3 + a1); // 0x3e2b8f
    return 256 * (int64_t)(v3 ^ (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x3e2b98 - 0x3e2ba0
int64_t function_3e2b98(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e2b98
    int64_t result; // 0x3e2b98
    bool v1; // 0x3e2b98
    *(int32_t *)a4 = 2 * (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x3e2ba0 - 0x3e2bca
int64_t function_3e2ba0(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x3e2ba0
    if ((char)(a3 / 256) - (char)(a4 / 256) >= 0) {
        // 0x3e2bac
        return function_168d9a2a();
    }
    int64_t result = __asm_iretd(); // 0x3e2bc6
    float80_t v1; // 0x3e2ba0
    *(int16_t *)*(int64_t *)0x78070b99 = (int16_t)v1;
    return result;
}

// Address range: 0x3e2bf8 - 0x3e2c07
int64_t function_3e2bf8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3e2bf8
    int64_t v1; // 0x3e2bf8
    int64_t v2 = v1;
    bool v3; // 0x3e2bf8
    int64_t v4 = (v2 - (v3 ? 23 : 22)) % 256 | v2 & -256; // 0x3e2bf8
    *(int32_t *)a1 = (int32_t)v4;
    char * v5 = (char *)(v1 - 37); // 0x3e2c00
    *v5 = *v5 & (char)(a4 / 256);
    *(char *)((v3 ? -4 : 4) + a1) = __asm_insb((int16_t)a3);
    return v4 + 0x218f21d2 & 0xffffffff;
}

// Address range: 0x3e2c1b - 0x3e2c37
int64_t function_3e2c1b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e2c1b
    int64_t v1; // 0x3e2c1b
    __asm_pavgw(v1, *(int64_t *)(a1 + 0x2192f78));
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_70259d79();
}

// Address range: 0x3e2c6e - 0x3e2c71
int64_t function_3e2c6e(void) {
    // 0x3e2c6e
    int64_t result; // 0x3e2c6e
    return result;
}

// Address range: 0x3e2c8f - 0x3e2c90
int64_t function_3e2c8f(void) {
    // 0x3e2c8f
    int64_t result; // 0x3e2c8f
    return result;
}

// Address range: 0x3e2caa - 0x3e2d95
int64_t function_3e2caa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x3e2caa
    char * v3 = (char *)(v2 - 0x7209f2a8); // 0x3e2d1c
    char v4 = *v3 - (char)(a4 / 256); // 0x3e2d1c
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x3e2d1c
    *v3 = v4;
    if (v5 % 2 != 0) {
        // 0x3e2cb5
        int64_t result; // 0x3e2caa
        return result;
    }
    int32_t v6 = __asm_insd((int16_t)a3); // 0x3e2d26
    int32_t * v7 = (int32_t *)a1; // 0x3e2d26
    *v7 = v6;
    int32_t * v8 = (int32_t *)(v1 - 63); // 0x3e2d2b
    int32_t v9 = *v8; // 0x3e2d2b
    uint32_t v10 = (int32_t)v2; // 0x3e2d2b
    int32_t v11 = v9 + v10; // 0x3e2d2b
    *v8 = v11;
    int64_t v12 = a4 - 1; // 0x3e2d33
    if (v12 != 0 && v11 != 0) {
        int32_t * v13 = (int32_t *)(v2 & -256 | (int64_t)*(char *)&v1); // 0x3e2d7d
        *v13 = *v13 ^ (int32_t)v2;
        bool v14; // 0x3e2caa
        *(int32_t *)((v14 ? -1 : 1) + a1) = 0x1cf14579;
        return 0;
    }
    if (v11 < 0 == ((v11 ^ v9) & (v11 ^ v10)) < 0 == (v11 != 0)) {
        // 0x3e2d94
        *v7 = *(int32_t *)&v1;
        return 0x1cf14579;
    }
    char * v15 = (char *)(a4 + 9); // 0x3e2d38
    unsigned char v16 = *v15; // 0x3e2d38
    unsigned char v17 = (char)v12 % 32; // 0x3e2d38
    if (v17 != 0) {
        *v15 = v16 >> v17 | (char)(-1 - v9 < v10) << 8 - v17 | (char)((int16_t)v16 << (int16_t)(9 - v17));
    }
    // 0x3e2cb5
    return 0x1cf14579;
}

// Address range: 0x3e2dbd - 0x3e2dbe
int64_t function_3e2dbd(void) {
    // 0x3e2dbd
    int64_t result; // 0x3e2dbd
    return result;
}

// Address range: 0x3e2de6 - 0x3e2df6
int64_t function_3e2de6(int64_t a1, int64_t a2) {
    // 0x3e2de6
    int64_t v1; // 0x3e2de6
    int64_t result = v1 + 0xe72969e & 0xffffffff; // 0x3e2df3
    if (llvm_ctpop_i8(0) % 2 == 0) {
        result = function_3e2dbd();
    }
    // 0x3e2df5
    return result;
}

// Address range: 0x3e2df6 - 0x3e2df7
int64_t function_3e2df6(void) {
    // 0x3e2df6
    int64_t result; // 0x3e2df6
    return result;
}

// Address range: 0x3e2e02 - 0x3e2e04
int64_t function_3e2e02(void) {
    // 0x3e2e02
    return function_3e2e7d();
}

// Address range: 0x3e2e34 - 0x3e2e38
int64_t function_3e2e34(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e2e34
    int64_t result; // 0x3e2e34
    return result;
}

// Address range: 0x3e2e65 - 0x3e2e66
int64_t function_3e2e65(void) {
    // 0x3e2e65
    int64_t result; // 0x3e2e65
    return result;
}

// Address range: 0x3e2e7d - 0x3e2e7f
int64_t function_3e2e7d(void) {
    // 0x3e2e7d
    int64_t v1; // 0x3e2e7d
    int64_t v2 = v1;
    bool v3; // 0x3e2e7d
    return (v2 - (v3 ? 213 : 212)) % 256 | v2 & -256;
}

// Address range: 0x3e2e89 - 0x3e2e9e
int64_t function_3e2e89(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e2e89
    int64_t v1; // 0x3e2e89
    uint64_t v2 = v1;
    *(char *)(v2 - 87) = (char)(v2 / 256);
    char v3 = *(char *)(a2 + 0x5a17ea53) + (char)a3; // 0x3e2e8d
    int64_t v4; // 0x3e2e89
    if (v3 < 1) {
        v4 = function_3e2e65();
    }
    // 0x3e2e95
    *(char *)a1 = __asm_insb((int16_t)(a3 & 0xff00 | (int64_t)v3));
    return v4 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x3e2eae - 0x3e2efc
int64_t function_3e2eae(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3e2eae
    bool v1; // 0x3e2eae
    int64_t v2 = v1 ? 0xffffffff : 1; // 0x3e2eae
    int64_t v3; // 0x3e2eae
    int32_t v4 = *(int32_t *)(a2 - 90 + v3); // 0x3e2eaf
    *(int32_t *)-0x65d4a3a2bdcaa879 = v4 + (int32_t)v3;
    *(int32_t *)(v2 + a1 & 0xffffffff) = __asm_insd((int16_t)(a3 / 0x80000) % 0x2000);
    *(int64_t *)a6 = (int64_t)((int32_t)a7 > 0xed076f95) + a6 + v3;
    return a7 + 0x12f8906a & 0xffffffff;
}

// Address range: 0x3e2eff - 0x3e2f20
int64_t function_3e2eff(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e2eff
    __asm_in(11);
    bool v1; // 0x3e2eff
    __asm_outsd((int16_t)a3, *(int32_t *)((v1 ? -2 : 2) + a2));
    int64_t v2; // 0x3e2eff
    return (int64_t)((char)v2 > 174) - v2 + unknown_7a6cd41a() & 0xffffffff;
}

// Address range: 0x3e2f32 - 0x3e2f33
int64_t function_3e2f32(void) {
    // 0x3e2f32
    int64_t result; // 0x3e2f32
    return result;
}

// Address range: 0x3e3006 - 0x3e3009
int64_t function_3e3006(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e3006
    int64_t result; // 0x3e3006
    return result;
}

// Address range: 0x3e301c - 0x3e301f
int64_t function_3e301c(int64_t a1) {
    // 0x3e301c
    int64_t result; // 0x3e301c
    return result;
}

// Address range: 0x3e3028 - 0x3e3033
int64_t function_3e3028(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e3028
    int64_t v1; // 0x3e3028
    return v1 & 0xffffffff;
}

// Address range: 0x3e3039 - 0x3e303b
int64_t function_3e3039(void) {
    // 0x3e3039
    return function_3e3086();
}

// Address range: 0x3e3060 - 0x3e3065
int64_t function_3e3060(void) {
    // 0x3e3060
    return function_fffffffff085f46d();
}

// Address range: 0x3e3086 - 0x3e308b
int64_t function_3e3086(void) {
    // 0x3e3086
    int64_t result; // 0x3e3086
    return result;
}

// Address range: 0x3e308d - 0x3e3093
int64_t function_3e308d(void) {
    // 0x3e308d
    return function_ffffffffe0aa5b0a();
}

// Address range: 0x3f079e - 0x3f07c1
int64_t function_3f079e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3f079e
    int64_t v1; // 0x3f079e
    char * v2 = (char *)(2 * v1); // 0x3f079e
    unsigned char v3 = *v2; // 0x3f079e
    *v2 = (char)(a3 / 256);
    int64_t v4 = __asm_iretd(); // 0x3f07a1
    int64_t * v5 = (int64_t *)(a1 - 0x1283bc1a); // 0x3f07a2
    *v5 = *v5 & v1;
    __asm_fbld(*(float80_t *)(v1 + 0x6daed221));
    int64_t v6; // 0x3f079e
    int32_t v7 = *(int32_t *)&v6; // 0x3f07bd
    __asm_outsd((int16_t)(256 * (int64_t)v3 | a3 % 256) + (int16_t)v1, v7);
    return v4 & -0xff01 | (int64_t)&g4;
}

// Address range: 0x3f07d1 - 0x3f07d6
int64_t function_3f07d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f07d1
    bool v1; // 0x3f07d1
    *(int32_t *)a4 = (int32_t)v1;
    return function_3f07dd(a1, a2, a3);
}

// Address range: 0x3f07da - 0x3f07dd
int64_t function_3f07da(int64_t a1) {
    // 0x3f07da
    int64_t result; // 0x3f07da
    return result;
}

// Address range: 0x3f07dd - 0x3f07f4
int64_t function_3f07dd(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 36); // 0x3f07dd
    uint32_t v2 = *v1; // 0x3f07dd
    bool v3; // 0x3f07dd
    int32_t v4 = v3; // 0x3f07dd
    int64_t v5; // 0x3f07dd
    uint32_t v6 = v4 + (int32_t)v5; // 0x3f07dd
    int32_t v7 = v2 - v6; // 0x3f07dd
    uint32_t v8 = v7 - v4; // 0x3f07dd
    bool v9 = v3 ? v6 != -1 | v2 < v8 : v2 < v6; // 0x3f07dd
    unsigned char v10 = llvm_ctpop_i8((char)v7); // 0x3f07dd
    *v1 = v7;
    __readgsdword(0x15dc55e0ab2b64d7);
    int64_t v11 = 0x4000 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 64 * (int64_t)(v7 == 0) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v4 - v6 % 16 + v2 % 16 > 15) | (int64_t)v9 | 4 * (int64_t)(v10 % 2 == 0) | 2048 * (int64_t)(((v8 ^ v2) & (v2 ^ v6)) < 0) | 2; // bp-8, 0x3f07ea
    return (int64_t)&v11 & -256 | (int64_t)__asm_in(118);
}

// Address range: 0x3f08eb - 0x3f08ee
int64_t function_3f08eb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f08eb
    __asm_insb((int16_t)a3);
    int64_t result; // 0x3f08eb
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x3f092e - 0x3f092f
int64_t function_3f092e(void) {
    // 0x3f092e
    int64_t result; // 0x3f092e
    return result;
}

// Address range: 0x3f0937 - 0x3f0941
int64_t function_3f0937(void) {
    // 0x3f0937
    int64_t v1; // 0x3f0937
    int64_t v2 = v1;
    return v2 & 0x289ee200 | 2 * v2 & 162 | 0xd7611d5d;
}

// Address range: 0x3f0956 - 0x3f0959
int64_t function_3f0956(int64_t a1) {
    // 0x3f0956
    int64_t result; // 0x3f0956
    return result;
}

// Address range: 0x3f0969 - 0x3f0a32
int64_t function_3f0969(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f0969
    int64_t v1; // 0x3f0969
    uint64_t v2 = v1;
    uint64_t v3 = v1;
    *(char *)(v2 + 84) = (char)(v2 / 256);
    uint32_t v4 = *(int32_t *)(v2 + 0x34c54e55); // 0x3f096c
    bool v5; // 0x3f0969
    if (v5) {
        // 0x3f0974
        int64_t result; // 0x3f0969
        return result;
    }
    char v6 = *(char *)(v1 + 109); // 0x3f09dc
    int64_t v7 = v2 + a2; // 0x3f09df
    int64_t v8 = -1 - (int32_t)a2 < (int32_t)v2 ? 90 : 89; // 0x3f09eb
    int64_t result2 = (v7 - v8) % 256 | v7 & 0xffffff00; // 0x3f09eb
    int64_t v9 = a4 - 1; // 0x3f09ed
    if (v9 == 0) {
        int64_t v10 = 256 * (int64_t)(v6 ^ (char)(v3 / 256)) | v3 & 0xffff00ff; // 0x3f09dc
        *(int64_t *)0x5aaf2c1c = 118;
        *(int64_t *)0x5aaf2c14 = 0x5aaf545a;
        *(int64_t *)0x5aaf2c0c = -102;
        int32_t * v11 = (int32_t *)(v10 + 0x34bfab71); // 0x3f09f5
        *v11 = *v11 + (int32_t)v10;
        return result2 & 0x2610880 | 0x841c4249;
    }
    uint32_t v12 = *(int32_t *)-126; // 0x3f099b
    *(int32_t *)-126 = v12 - v4;
    int32_t * v13 = (int32_t *)((int64_t)v4 + 65); // 0x3f099e
    uint32_t v14 = *v13; // 0x3f099e
    uint32_t v15 = (int32_t)v9 % 32; // 0x3f099e
    if (v15 != 0) {
        *v13 = (int32_t)(v12 < v4) << 32 - v15 | v14 >> v15 | (int32_t)((int64_t)v14 << (int64_t)(33 - v15));
    }
    // 0x3f0974
    return result2;
}

// Address range: 0x3f0a36 - 0x3f0a9f
int64_t function_3f0a36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3f0a36
    int64_t result; // 0x3f0a36
    int64_t v1; // 0x3f0a36
    bool v2; // 0x3f0a36
    if (v2) {
        int32_t * v3 = (int32_t *)(v1 + 0x35d01f0f); // 0x3f0a99
        *v3 = *v3 | (int32_t)v1;
        return result;
    }
    char * v4 = (char *)(v1 + 104); // 0x3f0a38
    *v4 = *v4 + (char)a4;
    *(char *)result = *(char *)&result ^ (char)v1;
    int64_t v5 = v2 ? -1 : 1; // 0x3f0a42
    int64_t v6 = v5 + a1; // 0x3f0a42
    int16_t v7 = a3; // 0x3f0a4b
    *(char *)v6 = __asm_insb(v7);
    char * v8 = (char *)(a2 + 78 + a3 + v5); // 0x3f0a4c
    *v8 = *v8 + (char)((result + 0xb1ae) / 256);
    int64_t result2 = __asm_int3(); // 0x3f0a50
    *(int32_t *)v6 = __asm_insd(v7);
    return result2;
}

// Address range: 0x3f0b14 - 0x3f0b19
int64_t function_3f0b14(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f0b14
    int64_t result; // 0x3f0b14
    return result;
}

// Address range: 0x3f0b1c - 0x3f0b21
int64_t function_3f0b1c(void) {
    int64_t v1 = __asm_int1(); // 0x3f0b1c
    return (v1 + 30) % 256 | v1 & -256;
}

// Address range: 0x3f0b28 - 0x3f0b2d
int64_t function_3f0b28(int64_t a1) {
    // 0x3f0b28
    int64_t result; // 0x3f0b28
    return result;
}

// Address range: 0x3f0b3c - 0x3f0b42
int64_t function_3f0b3c(void) {
    // 0x3f0b3c
    int64_t result; // 0x3f0b3c
    return result;
}

// Address range: 0x3f0bda - 0x3f0bdb
int64_t function_3f0bda(void) {
    // 0x3f0bda
    int64_t result; // 0x3f0bda
    return result;
}

// Address range: 0x3f0bdf - 0x3f0be0
int64_t function_3f0bdf(void) {
    // 0x3f0bdf
    int64_t result; // 0x3f0bdf
    return result;
}

// Address range: 0x3f0bff - 0x3f0c00
int64_t function_3f0bff(void) {
    // 0x3f0bff
    int64_t result; // 0x3f0bff
    return result;
}

// Address range: 0x3f0c0f - 0x3f0c2a
int64_t function_3f0c0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f0c0f
    int64_t result; // 0x3f0c0f
    int64_t v1; // 0x3f0c0f
    if ((char)v1 < 39) {
        // 0x3f0c13
        result = function_3f0bff();
    } else {
        result = function_3f0bdf();
    }
    // 0x3f0c1a
    return result;
}

// Address range: 0x3f0c3b - 0x3f0c3c
int64_t function_3f0c3b(void) {
    // 0x3f0c3b
    int64_t result; // 0x3f0c3b
    return result;
}

// Address range: 0x3f0c3c - 0x3f0d5a
int64_t function_3f0c3c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    uint64_t v1 = __asm_wait(); // 0x3f0c3c
    unsigned char v2 = (char)(v1 / 128); // 0x3f0c47
    char v3 = a4 / 256; // 0x3f0c47
    unsigned char v4 = v2 + v3; // 0x3f0c47
    if (v4 >= v2 && v4 != 0) {
        // 0x3f0c4c
        return function_ffffffffc2181576();
    }
    unsigned char v5 = *(char *)(2 * a1 + 0x48f0852b + v1) & (char)a4; // 0x3f0c3d
    unsigned char v6 = v5 % 32; // 0x3f0cc4
    bool v7 = v4 < v2; // 0x3f0cc4
    if (v6 != 0) {
        unsigned char v8 = (char)a2;
        unsigned char v9 = v8 >> 8 - v6 | v8 << v6; // 0x3f0cc4
        *(char *)a2 = v9;
        v7 = v9 % 2 != 0;
    }
    int64_t v10; // 0x3f0c3c
    char * v11 = (char *)(v10 - 15); // 0x3f0cc6
    *v11 = *v11 + v5 + (char)v7;
    int64_t v12 = __asm_hlt((int64_t)&g5, (int64_t)&g5, (int64_t)&g5, (int64_t)&g5); // 0x3f0cd4
    *(char *)a1 = __asm_insb((int16_t)a3);
    if (v3 + (char)a3 >= 0) {
        // 0x3f0cd9
        return a2 & 0xffffffff;
    }
    // 0x3f0ce4
    if (llvm_ctpop_i8((char)v12 & 112) % 2 != 0) {
        float32_t v13 = *(float32_t *)(a3 + 82); // 0x3f0d35
        float80_t v14; // 0x3f0c3c
        *(int16_t *)((a3 & 0xffffffff) + 0x3a38ea1a) = (int16_t)(v14 - (float80_t)v13);
        return 0x6da57816;
    }
    int32_t v15 = *(int32_t *)(a6 - 3); // 0x3f0cea
    char * v16 = (char *)((int64_t)(v15 | (int32_t)a2) - 73); // 0x3f0d0e
    *v16 = *v16 & 42;
    *(char *)(a1 + 109) = -46;
    return v10 & 0xffffffff;
}

// Address range: 0x3f0e52 - 0x3f0e57
int64_t function_3f0e52(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x3f0e52
    if (v1 != 0) {
        int64_t v2; // 0x3f0e52
        char * v3 = (char *)(v2 + 97); // 0x3f0e52
        unsigned char v4 = *v3; // 0x3f0e52
        *v3 = v4 >> 8 - v1 | v4 << v1;
    }
    return __asm_hlt(a1, a2, a3, a4);
}

// Address range: 0x3f0ec7 - 0x3f0ecb
int64_t function_3f0ec7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3f0ec7
    int64_t result; // 0x3f0ec7
    return result;
}

// Address range: 0x3f0ef1 - 0x3f0ef6
int64_t function_3f0ef1(void) {
    // 0x3f0ef1
    return function_54bb24a5();
}

// Address range: 0x3f0f28 - 0x3f0f3d
int64_t function_3f0f28(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f0f28
    int64_t v1; // 0x3f0f28
    int64_t v2 = v1;
    int64_t v3 = (v2 + 98) % 256 | v2 & 0xffffff00; // 0x3f0f28
    uint64_t v4 = v3 + 0xc188f5f5; // 0x3f0f33
    *(int32_t *)a1 = (int32_t)v1;
    bool v5; // 0x3f0f28
    char v6 = *(char *)((v5 ? -4 : 4) + a1); // 0x3f0f3a
    return 256 * (int64_t)((char)((int32_t)v3 < 0x3e770a0b) - v6 + (char)(v4 / 256)) | v4 & 0xffff00ff;
}

// Address range: 0x3f0f94 - 0x3f0fb1
int64_t function_3f0f94(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f0f94
    int64_t v1; // 0x3f0f94
    __asm_outsb((int16_t)a3, (char)v1);
    *(char *)-0x44fb193 = ((char)v1 + 70 & 118) + *(char *)-0x44fb193;
    *(int32_t *)0x4416b281c20a5205 = (int32_t)(v1 & 0xffffff00 | v1 % 256);
    return v1 & 0xffffffff;
}

// Address range: 0x3f0fb1 - 0x3f0fd8
int64_t function_3f0fb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3f0fb1
    int64_t v1; // 0x3f0fb1
    int64_t v2 = v1 & 0xffffffff; // 0x3f0fc0
    char * v3 = (char *)((29 * v1 & 0xffffffff) - 88); // 0x3f0fcc
    *v3 = *v3 + (char)a5;
    int32_t * v4 = (int32_t *)(v2 - 63); // 0x3f0fcf
    *v4 = *v4 + (int32_t)a4;
    return function_3f100a(v2, a2, a3, a4);
}

// Address range: 0x3f0fda - 0x3f0fdf
int64_t function_3f0fda(void) {
    // 0x3f0fda
    return function_447885df();
}

// Address range: 0x3f1001 - 0x3f1002
int64_t function_3f1001(void) {
    // 0x3f1001
    int64_t result; // 0x3f1001
    return result;
}

// Address range: 0x3f1006 - 0x3f1008
int64_t function_3f1006(void) {
    // 0x3f1006
    return function_3f1001();
}

// Address range: 0x3f100a - 0x3f100f
int64_t function_3f100a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f100a
    int64_t result; // 0x3f100a
    return result;
}

// Address range: 0x3f1045 - 0x3f1047
int64_t function_3f1045(void) {
    // 0x3f1045
    int64_t result; // 0x3f1045
    // 0x3f1047
    return result;
}

// Address range: 0x3f1073 - 0x3f1079
int64_t function_3f1073(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f1073
    int64_t result; // 0x3f1073
    bool v1; // 0x3f1073
    *(int32_t *)a4 = 2 * (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x3f10c9 - 0x3f10cf
int64_t function_3f10c9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f10c9
    return a2 & 0xffffffff;
}

// Address range: 0x3f10e5 - 0x3f10e9
int64_t function_3f10e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3f10e5
    int64_t result; // 0x3f10e5
    return result;
}

// Address range: 0x3f1118 - 0x3f1121
int64_t function_3f1118(int64_t a1, int64_t a2) {
    // 0x3f1118
    int64_t result; // 0x3f1118
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x3f112d - 0x3f112e
int64_t function_3f112d(void) {
    // 0x3f112d
    int64_t result; // 0x3f112d
    return result;
}

// Address range: 0x3f1145 - 0x3f1163
int64_t function_3f1145(void) {
    // 0x3f1145
    int64_t v1; // 0x3f1145
    int32_t v2 = *(int32_t *)(v1 + 0x7a6c3f59); // 0x3f1145
    int64_t v3; // 0x3f1145
    if (llvm_ctpop_i8((char)((int32_t)v1 - v2)) % 2 == 0) {
        v3 = function_3f112d();
    }
    int64_t v4 = v3;
    *(char *)v4 = (char)v4;
    if ((int32_t)v4 < -0x257824b3) {
        // 0x3f119d
        return v4 + 0x257824b3 & 0xffffffff;
    }
    // 0x3f115d
    return function_ffffffffa8f676cc();
}

// Address range: 0x3f118e - 0x3f1193
int64_t function_3f118e(int64_t a1) {
    // 0x3f118e
    int64_t v1; // 0x3f118e
    return v1 ^ 93;
}

// Address range: 0x3f1197 - 0x3f119d
int64_t function_3f1197(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f1197
    int64_t result; // 0x3f1197
    *(int32_t *)a1 = (int32_t)result - (int32_t)a3;
    return result;
}
