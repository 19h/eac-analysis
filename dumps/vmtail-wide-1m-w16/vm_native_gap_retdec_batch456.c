/*
 * Targeted RetDec C for native executable gap queue batch 456.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x31debb-0x31e0bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31e0bb-0x31e2bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31e2bb-0x31e4bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31e6bb-0x31e8bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e5496-0x3e5696 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e5896-0x3e5a96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41f61f-0x41f81f rank=- name=- kind=- bytes=- uncovered=-
 *   0x41fe1f-0x42001f rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1aa6fd36();
int64_t function_209e61f5();
int64_t function_31debb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31ded8(void);
int64_t function_31def3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31dfba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_31e016(void);
int64_t function_31e06f(void);
int64_t function_31e0be(void);
int64_t function_31e0c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31e0f9(void);
int64_t function_31e10f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31e13b(int64_t a1);
int64_t function_31e1b0(void);
int64_t function_31e297(int64_t a1);
int64_t function_31e29c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31e2b3(void);
int64_t function_31e2bd(int64_t a1);
int64_t function_31e2d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31e2e3(int64_t a1, int64_t a2);
int64_t function_31e34e(int64_t a1, int64_t a2);
int64_t function_31e36a(void);
int64_t function_31e376(void);
int64_t function_31e3c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31e3ea(void);
int64_t function_31e3fa(void);
int64_t function_31e406(void);
int64_t function_31e40b(void);
int64_t function_31e43a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31e452(int64_t a1);
int64_t function_31e486(int64_t a1);
int64_t function_31e490(int64_t a1);
int64_t function_31e6bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31e701(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_31e768(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31e770(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31e7c0(void);
int64_t function_31e838(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e5496(void);
int64_t function_3e5521(int64_t a1);
int64_t function_3e5567(int64_t a1);
int64_t function_3e5571(void);
int64_t function_3e5573(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e5630(int64_t a1);
int64_t function_3e5896(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e58b4(int64_t a1);
int64_t function_3e58c0(void);
int64_t function_3e58d1(void);
int64_t function_3e58d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3e596a(void);
int64_t function_3e5a04(void);
int64_t function_3e5a13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e5a21(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3e5a8e(void);
int64_t function_41f61f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41f64e(void);
int64_t function_41f65a(void);
int64_t function_41f696(int64_t a1);
int64_t function_41f69f(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_41f722(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41f73e(void);
int64_t function_41f76a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41f778(void);
int64_t function_41f77a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_41f7d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41fe11();
int64_t function_41fe1f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41fe59(int64_t a1);
int64_t function_41fee2(void);
int64_t function_41ff26(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4cd27d55();
int64_t function_ffffffff9d15d1bf();
int64_t function_ffffffffb1f7b86d();
int64_t function_ffffffffc0cc383c();
int64_t function_ffffffffc7e9df1a();
int64_t unknown_168897c7();
int64_t unknown_21abe62();
int64_t unknown_3acf8fe8();
int64_t unknown_57a6e807();
int64_t unknown_78df5732();
int64_t unknown_7f2a6e9();
int64_t unknown_8e55929();
int64_t unknown_b23310b();
int64_t unknown_f3a68de();
int64_t unknown_ffffffffa625c038();
int64_t unknown_ffffffffa836caad();
int64_t unknown_ffffffffa83740cf();
int64_t unknown_ffffffffb1f740c3();
int64_t unknown_ffffffffc094f74c();
int64_t unknown_ffffffffc611dc04();

// Address range: 0x31debb - 0x31debf
int64_t function_31debb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 67); // 0x31debb
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x31debb
    return result;
}

// Address range: 0x31ded8 - 0x31dee2
int64_t function_31ded8(void) {
    // 0x31ded8
    unknown_f3a68de();
    return function_ffffffffc7e9df1a();
}

// Address range: 0x31def3 - 0x31df8e
int64_t function_31def3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    if (a4 != 1) {
        // 0x31defd
        unknown_b23310b();
        return 0xfc081001 * a1 & 0xffffffff;
    }
    // 0x31df15
    bool v1; // 0x31def3
    int64_t v2 = v1 ? -1 : 1; // 0x31df1c
    unknown_8e55929(v2 + a1, v2 + a2, 0xf74c0564, 0);
    return unknown_ffffffffa625c038();
}

// Address range: 0x31dfba - 0x31e009
int64_t function_31dfba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x31dfba
    int64_t v1; // 0x31dfba
    char * v2 = (char *)(v1 + 0x686c0570); // 0x31dfba
    *v2 = *v2 ^ (char)v1;
    uint32_t v3 = (int32_t)unknown_168897c7() >> 31; // 0x31dfc7
    int64_t v4 = v3; // 0x31dfc7
    int32_t v5 = *(int32_t *)(a1 + 0x5ca201e8); // 0x31dfc8
    char * v6 = (char *)(v4 - 0x5272817f); // 0x31dfda
    *v6 = *v6 + (char)a4;
    *(char *)v4 = (char)(v1 / 256);
    bool v7; // 0x31dfba
    int64_t v8 = unknown_3acf8fe8((int32_t)a1 - v5, (v7 ? -1 : 1) + a2, v3); // 0x31dfe2
    *(int32_t *)-0x67cc374c = *(int32_t *)-0x67cc374c + (int32_t)v1;
    *(int64_t *)(int64_t)(0x10000 * (int32_t)v8 >> 16) = a6;
    unknown_ffffffffc611dc04();
    return unknown_57a6e807();
}

// Address range: 0x31e016 - 0x31e018
int64_t function_31e016(void) {
    // 0x31e016
    int64_t result; // 0x31e016
    return result;
}

// Address range: 0x31e06f - 0x31e074
int64_t function_31e06f(void) {
    // 0x31e06f
    return function_ffffffffb1f7b86d();
}

// Address range: 0x31e0be - 0x31e0c6
int64_t function_31e0be(void) {
    // 0x31e0be
    int64_t v1; // 0x31e0be
    return v1 & 0xffffffff;
}

// Address range: 0x31e0c7 - 0x31e0d2
int64_t function_31e0c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x31e0c7
    return unknown_ffffffffa83740cf(a1, a2, a3, a4, a5);
}

// Address range: 0x31e0f9 - 0x31e0fa
int64_t function_31e0f9(void) {
    // 0x31e0f9
    int64_t result; // 0x31e0f9
    return result;
}

// Address range: 0x31e10f - 0x31e127
int64_t function_31e10f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31e10f
    int64_t v1; // 0x31e10f
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a3;
    *(char *)a1 = __asm_insb((int16_t)a3);
    if ((int32_t)v1 != 0) {
        function_ffffffff9d15d1bf();
    }
    int32_t * v2 = (int32_t *)(a3 + 0x1e89c4e); // 0x31e11f
    *v2 = *v2 | (int32_t)a1;
    return function_31e0f9();
}

// Address range: 0x31e13b - 0x31e13e
int64_t function_31e13b(int64_t a1) {
    // 0x31e13b
    int64_t result; // 0x31e13b
    return result;
}

// Address range: 0x31e1b0 - 0x31e1b3
int64_t function_31e1b0(void) {
    // 0x31e1b0
    int64_t result; // 0x31e1b0
    return result;
}

// Address range: 0x31e297 - 0x31e29a
int64_t function_31e297(int64_t a1) {
    // 0x31e297
    int64_t result; // 0x31e297
    return result;
}

// Address range: 0x31e29c - 0x31e2af
int64_t function_31e29c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31e29c
    int64_t v1; // 0x31e29c
    *(int32_t *)0x6c5e1d020a0fca60 = (int32_t)v1;
    unknown_ffffffffa836caad();
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return __asm_sti();
}

// Address range: 0x31e2b3 - 0x31e2b5
int64_t function_31e2b3(void) {
    // 0x31e2b3
    int64_t v1; // 0x31e2b3
    return function_31e2e3(v1, v1);
}

// Address range: 0x31e2bd - 0x31e2c3
int64_t function_31e2bd(int64_t a1) {
    // 0x31e2bd
    int64_t v1; // 0x31e2bd
    return v1 + 0x108d19b & 0xffffffff;
}

// Address range: 0x31e2d0 - 0x31e2d5
int64_t function_31e2d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31e2d0
    int64_t result; // 0x31e2d0
    return result;
}

// Address range: 0x31e2e3 - 0x31e34d
int64_t function_31e2e3(int64_t a1, int64_t a2) {
    int64_t v1 = a1;
    int64_t v2 = unknown_7f2a6e9(); // 0x31e2e3
    int32_t * v3 = (int32_t *)v2; // 0x31e2e8
    int32_t v4 = v2; // 0x31e2e8
    int32_t v5 = *v3 + v4; // 0x31e2e8
    *v3 = v5;
    if (v5 < 0) {
        // 0x31e2ec
        return unknown_21abe62();
    }
    uint32_t v6 = *(int32_t *)&v1 ^ v4; // 0x31e328
    int64_t v7; // 0x31e2e3
    int32_t v8 = v4 >> 31 & (int32_t)v7; // 0x31e32a
    int64_t v9 = unknown_78df5732(v6); // 0x31e32c
    int64_t v10; // 0x31e2e3
    uint32_t v11 = *(int32_t *)&v10; // 0x31e331
    int64_t v12 = v9 & 0xffffffff; // 0x31e333
    int32_t v13 = *(int32_t *)(v12 - 24); // 0x31e33b
    int32_t * v14 = (int32_t *)(int64_t)v6; // 0x31e33e
    *v14 = v13 - 0x62b5b739 + (int32_t)(v11 > (int32_t)v7) + *v14;
    int32_t * v15 = (int32_t *)(int64_t)(((v6 + 61) % 256 | v6 & -256) + (int32_t)v7); // 0x31e344
    *v15 = *v15 + v8;
    int64_t result = unknown_ffffffffc094f74c(v12); // 0x31e346
    __asm_out_133((int16_t)v8, (char)result);
    return result;
}

// Address range: 0x31e34e - 0x31e35c
int64_t function_31e34e(int64_t a1, int64_t a2) {
    // 0x31e34e
    int64_t result; // 0x31e34e
    int32_t * v1 = (int32_t *)(result - 0x1724b121); // 0x31e351
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x31e36a - 0x31e36c
int64_t function_31e36a(void) {
    // 0x31e36a
    int64_t v1; // 0x31e36a
    return function_31e3c3(v1, v1, v1, v1);
}

// Address range: 0x31e376 - 0x31e377
int64_t function_31e376(void) {
    // 0x31e376
    int64_t result; // 0x31e376
    return result;
}

// Address range: 0x31e3c3 - 0x31e3d6
int64_t function_31e3c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31e3c3
    int64_t v1; // 0x31e3c3
    int32_t * v2 = (int32_t *)(v1 + 0x57d201e8); // 0x31e3c3
    bool v3; // 0x31e3c3
    *v2 = (int32_t)v3 - (int32_t)a4 + *v2;
    return __asm_in_134((int16_t)a3);
}

// Address range: 0x31e3ea - 0x31e3eb
int64_t function_31e3ea(void) {
    // 0x31e3ea
    int64_t result; // 0x31e3ea
    return result;
}

// Address range: 0x31e3fa - 0x31e3fb
int64_t function_31e3fa(void) {
    // 0x31e3fa
    int64_t result; // 0x31e3fa
    return result;
}

// Address range: 0x31e406 - 0x31e408
int64_t function_31e406(void) {
    // 0x31e406
    return function_31e3ea();
}

// Address range: 0x31e40b - 0x31e410
int64_t function_31e40b(void) {
    // 0x31e40b
    return function_ffffffffc0cc383c();
}

// Address range: 0x31e43a - 0x31e440
int64_t function_31e43a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31e43a
    *(int32_t *)a4 = 0;
    int64_t v1; // 0x31e43a
    *(int32_t *)a2 = *(int32_t *)&v1 ^ (int32_t)a4;
    return function_31e3fa();
}

// Address range: 0x31e452 - 0x31e453
int64_t function_31e452(int64_t a1) {
    // 0x31e452
    int64_t result; // 0x31e452
    return result;
}

// Address range: 0x31e486 - 0x31e48e
int64_t function_31e486(int64_t a1) {
    // 0x31e486
    int64_t v1; // 0x31e486
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 5); // 0x31e486
    uint32_t v4 = *v3; // 0x31e486
    uint32_t v5 = v4 + (int32_t)v2; // 0x31e486
    *v3 = v5;
    return (v2 + 187 + (int64_t)(v5 < v4)) % 256 | v2 & -256;
}

// Address range: 0x31e490 - 0x31e491
int64_t function_31e490(int64_t a1) {
    // 0x31e490
    int64_t result; // 0x31e490
    return result;
}

// Address range: 0x31e6bb - 0x31e6c4
int64_t function_31e6bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x31e6bb
    return unknown_ffffffffb1f740c3();
}

// Address range: 0x31e701 - 0x31e708
int64_t function_31e701(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x31e701
    int64_t v1; // 0x31e701
    *(char *)a1 = (char)v1 + (char)(a3 / 256);
    return function_1aa6fd36();
}

// Address range: 0x31e768 - 0x31e769
int64_t function_31e768(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31e768
    int64_t result; // 0x31e768
    return result;
}

// Address range: 0x31e770 - 0x31e778
int64_t function_31e770(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31e770
    int64_t result; // 0x31e770
    bool v1; // 0x31e770
    if (a4 != 1 && !v1) {
        result = function_31e768(a1, a2, a3, a4);
    }
    // 0x31e772
    return result;
}

// Address range: 0x31e7c0 - 0x31e7c1
int64_t function_31e7c0(void) {
    // 0x31e7c0
    int64_t result; // 0x31e7c0
    return result;
}

// Address range: 0x31e838 - 0x31e851
int64_t function_31e838(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    int64_t v2; // 0x31e838
    *(int32_t *)0x162013dabde2ecf = (int32_t)v2;
    unsigned char v3 = (char)v2;
    unsigned char v4 = 2 * v3; // 0x31e844
    *(char *)v2 = v4;
    unsigned char v5 = (char)(v4 < v3) - *(char *)&v1 + v3; // 0x31e846
    int64_t result = v2 & -256 | (int64_t)v5; // 0x31e846
    char * v6 = (char *)result; // 0x31e848
    *v6 = v5 + *v6;
    *(char *)v1 = *(char *)&v1 + v5;
    return result;
}

// Address range: 0x3e5496 - 0x3e5497
int64_t function_3e5496(void) {
    // 0x3e5496
    int64_t result; // 0x3e5496
    return result;
}

// Address range: 0x3e5521 - 0x3e5524
int64_t function_3e5521(int64_t a1) {
    // 0x3e5521
    int64_t result; // 0x3e5521
    return result;
}

// Address range: 0x3e5567 - 0x3e556b
int64_t function_3e5567(int64_t a1) {
    // 0x3e5567
    int64_t v1; // 0x3e5567
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x3e5571 - 0x3e5572
int64_t function_3e5571(void) {
    // 0x3e5571
    int64_t result; // 0x3e5571
    return result;
}

// Address range: 0x3e5573 - 0x3e562f
int64_t function_3e5573(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x3e5573
    uint64_t v3 = (v2 & 0xffffffff) * (int64_t)*(int32_t *)(a2 + 26); // 0x3e557a
    uint64_t v4 = v3 / 0x100000000; // 0x3e557a
    *(int32_t *)a2 = (int32_t)a2 - 1;
    char v5 = *(char *)(v4 + 49); // 0x3e557f
    int64_t v6; // 0x3e5573
    unsigned char v7 = *(char *)(v6 + v3 % 256); // 0x3e5582
    char v8 = v4; // 0x3e5583
    char v9 = *(char *)(v3 & 0xffff0000 | (int64_t)v7 | 256 * (int64_t)(v5 + (char)(v3 / 256) + (char)(v3 > 0xffffffff))); // 0x3e5583
    if (a4 != 1 != (v9 == v8)) {
        // 0x3e5587
        *(int32_t *)a1 = __asm_insd((int16_t)v4);
        *(int32_t *)v6 = *(int32_t *)&v6 + (int32_t)v2;
        return function_209e61f5();
    }
    // 0x3e5591
    *(char *)a1 = *(char *)&v1;
    bool v10; // 0x3e5573
    int64_t v11 = (v10 ? 0xffffffff : 1) + a1; // 0x3e5591
    v1 = a5;
    int64_t v12 = v6 & -0xff01 | (int64_t)&g2; // 0x3e5596
    v6 = v12;
    int64_t v13 = a4 - 2; // 0x3e559a
    if (v13 == 0 || (v11 & 0x4000) != 0) {
        // 0x3e559c
        return v11 & 0xffffffff;
    }
    char v14 = v12; // 0x3e55bc
    unsigned char v15 = *(char *)(a5 + 0x211f57e4); // 0x3e55bc
    unsigned char v16 = v15 + v14; // 0x3e55bc
    int64_t v17 = v12 & -256 | (int64_t)v16; // 0x3e55bc
    char * v18 = (char *)(v17 + 67); // 0x3e55c2
    unsigned char v19 = *v18; // 0x3e55c2
    char v20 = v15 > -1 - v14; // 0x3e55c2
    unsigned char v21 = v16 + v20; // 0x3e55c2
    char v22 = v19 - v21; // 0x3e55c2
    bool v23 = v15 > -1 - v14 ? v21 != -1 | v19 < v22 - v20 : v19 < v21; // 0x3e55c2
    *v18 = v22;
    int64_t v24 = v1 + (v11 ^ 77) + (int64_t)v23 & 0xffffffff ^ 21; // 0x3e55c7
    __asm_outsd((int16_t)v4, *(int32_t *)v1);
    int64_t v25 = (v24 + v13) % 256 | v13 & 0xffffff00; // 0x3e55cb
    v6 = v17 - v25 & 0xffffffff;
    char * v26 = (char *)(v2 + 127); // 0x3e55d5
    *v26 = *v26 - v8 + (char)((int32_t)v17 < (int32_t)v25);
    return (v24 & 0xffff00ff | (int64_t)&g5) ^ 26;
}

// Address range: 0x3e5630 - 0x3e5633
int64_t function_3e5630(int64_t a1) {
    // 0x3e5630
    int64_t result; // 0x3e5630
    return result;
}

// Address range: 0x3e5896 - 0x3e589f
int64_t function_3e5896(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e5896
    int64_t v1; // 0x3e5896
    return (int64_t)__asm_in((int16_t)a3) & 0x56ab7f64 | v1 & 0x56ab7f00;
}

// Address range: 0x3e58b4 - 0x3e58b7
int64_t function_3e58b4(int64_t a1) {
    // 0x3e58b4
    int64_t result; // 0x3e58b4
    return result;
}

// Address range: 0x3e58c0 - 0x3e58c1
int64_t function_3e58c0(void) {
    // 0x3e58c0
    int64_t result; // 0x3e58c0
    return result;
}

// Address range: 0x3e58d1 - 0x3e58d2
int64_t function_3e58d1(void) {
    // 0x3e58d1
    int64_t result; // 0x3e58d1
    return result;
}

// Address range: 0x3e58d6 - 0x3e5966
int64_t function_3e58d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t result; // 0x3e58d6
    bool v2; // 0x3e58d6
    if (!v2) {
        char * v3 = (char *)(a6 + 109); // 0x3e58d9
        *v3 = *v3 - (char)a6;
        return result;
    }
    int64_t result2 = a1 & 0xffffffff; // 0x3e590d
    if ((*(int32_t *)-0x1a951601 ^ (int32_t)result) >= 0) {
        result2 = function_3e58c0();
    }
    char * v4 = (char *)(result - 93); // 0x3e5913
    *v4 = *v4 + (char)a2;
    if (result <= *(int64_t *)(4 * result - 59 + result)) {
        // 0x3e5920
        return result2;
    }
    unsigned char v5 = *(char *)&v1; // 0x3e5955
    unsigned char v6 = (char)result; // 0x3e5955
    char v7 = v5 + v6; // 0x3e5955
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x3e5955
    *(char *)v1 = v7;
    __asm_out_135((int16_t)a6, (int32_t)result2);
    return result2 & -0xff01 | 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v7 < v5) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v5 % 16 + v6 % 16 > 15) | 4 * (int64_t)(v8 % 2 == 0)) | 512;
}

// Address range: 0x3e596a - 0x3e596d
int64_t function_3e596a(void) {
    // 0x3e596a
    int64_t result; // 0x3e596a
    return result;
}

// Address range: 0x3e5a04 - 0x3e5a05
int64_t function_3e5a04(void) {
    // 0x3e5a04
    int64_t result; // 0x3e5a04
    return result;
}

// Address range: 0x3e5a13 - 0x3e5a21
int64_t function_3e5a13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e5a13
    int64_t result; // 0x3e5a13
    char * v1 = (char *)(result - 59); // 0x3e5a13
    *v1 = *v1 & (char)a3;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t * v2 = (int64_t *)(a4 + 100); // 0x3e5a17
    *v2 = *v2 & result;
    return result;
}

// Address range: 0x3e5a21 - 0x3e5a8d
int64_t function_3e5a21(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3e5a21
    *(int64_t *)0x41e3d970 = a1;
    int64_t v1; // 0x3e5a21
    char * v2 = (char *)(2 * a3 + 0x286c527e + v1); // 0x3e5a30
    *v2 = (char)(a3 / 256);
    int64_t v3 = 256 * (int64_t)*v2 | a3 & -0xff01; // 0x3e5a30
    int32_t v4 = *(int32_t *)(v3 + 42) ^ 0x41e3d970; // 0x3e5a3a
    int64_t v5; // 0x3e5a21
    __asm_outsd((int16_t)v3, *(int32_t *)&v5);
    if (v4 < 0) {
        // 0x3e5a8c
        return function_3e5a04();
    }
    // 0x3e5a43
    *(int32_t *)a1 = (int32_t)(v1 ^ v1 / 256 % 256);
    uint32_t v6 = __readgsdword(v3 + 0x7c751129); // 0x3e5a4b
    int64_t v7 = 0x100000000 * v3 | 0xc96deb02; // 0x3e5a4b
    int64_t v8 = v6; // 0x3e5a4b
    int64_t v9 = v7 % v8; // 0x3e5a4b
    int64_t v10 = v9 & 0xffffffff; // 0x3e5a4b
    __asm_out_135((int16_t)v9, (int32_t)(v7 / v8));
    char * v11 = (char *)(2 * v1 - 0x39ee67c4 + v10); // 0x3e5a60
    char v12 = *v11; // 0x3e5a5b
    int64_t v13 = a4; // 0x3e5a5b
    v12 += (char)(v9 / 256);
    while (v13 != 1 == v12 == 0) {
        // 0x3e5a60
        v13--;
        v12 += (char)(v9 / 256);
    }
    // 0x3e5a6b
    *v11 = v12;
    __asm_iretd();
    char v14 = *(char *)v10; // 0x3e5a73
    char v15 = __asm_insb((int16_t)(v9 & 0xff00 | (int64_t)((char)v9 - v14))); // 0x3e5a75
    *(char *)*(int64_t *)(int64_t)v4 = v15;
    return (int64_t)*(int32_t *)0x7406ad3f7603eb40;
}

// Address range: 0x3e5a8e - 0x3e5a92
int64_t function_3e5a8e(void) {
    // 0x3e5a8e
    int64_t result; // 0x3e5a8e
    return result;
}

// Address range: 0x41f61f - 0x41f625
int64_t function_41f61f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41f61f
    __asm_int1(a5);
    unsigned char v1 = (char)a4 % 32; // 0x41f622
    if (v1 != 0) {
        int64_t v2; // 0x41f61f
        unsigned char v3 = (char)v2;
        *(char *)v2 = v3 >> v1 | v3 << 8 - v1;
    }
    return __asm_sti();
}

// Address range: 0x41f64e - 0x41f64f
int64_t function_41f64e(void) {
    // 0x41f64e
    int64_t result; // 0x41f64e
    return result;
}

// Address range: 0x41f65a - 0x41f65b
int64_t function_41f65a(void) {
    // 0x41f65a
    int64_t result; // 0x41f65a
    return result;
}

// Address range: 0x41f696 - 0x41f699
int64_t function_41f696(int64_t a1) {
    // 0x41f696
    int64_t result; // 0x41f696
    return result;
}

// Address range: 0x41f69f - 0x41f6d1
int64_t function_41f69f(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x41f69f
    int64_t v1; // 0x41f69f
    int64_t v2 = v1;
    char v3 = a3 / 256; // 0x41f69f
    char v4 = v1;
    bool v5; // 0x41f69f
    char v6 = v5; // 0x41f69f
    char v7 = v4 + v3 + v6; // 0x41f69f
    char v8 = v7 + v6; // 0x41f69f
    char v9 = v4; // 0x41f6a1
    if (v7 < 0 != ((v8 ^ v3) & (v8 ^ v4)) < 0) {
        v9 = function_41f64e();
    }
    int64_t result = 256 * (int64_t)v7 | a3 & 0xffff00ff; // 0x41f69f
    unsigned char v10 = v9 + 59; // 0x41f6a6
    unsigned char v11 = v10 + (char)v1; // 0x41f6a6
    unsigned char v12 = v11 + (char)(v9 < 197); // 0x41f6a6
    if (v12 == 0 || (v9 < 197 ? v12 <= v10 : v11 < v10)) {
        // 0x41f6cd
        *(char *)v2 = v12 | (char)v2;
        return result;
    }
    // 0x41f6ac
    *(int32_t *)0x58cc08ab = (int32_t)v1;
    return result;
}

// Address range: 0x41f722 - 0x41f73d
int64_t function_41f722(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41f722
    int64_t v1; // 0x41f722
    int32_t * v2 = (int32_t *)(v1 & -0xff01 | (int64_t)&g1); // 0x41f72b
    *v2 = *v2 | (int32_t)a3;
    return __asm_hlt() & 0x48003db3;
}

// Address range: 0x41f73e - 0x41f743
int64_t function_41f73e(void) {
    // 0x41f73e
    return function_4cd27d55();
}

// Address range: 0x41f76a - 0x41f778
int64_t function_41f76a(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 114); // 0x41f76a
    int64_t result; // 0x41f76a
    *v1 = *v1 & (int32_t)result;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x41f778 - 0x41f779
int64_t function_41f778(void) {
    // 0x41f778
    int64_t result; // 0x41f778
    return result;
}

// Address range: 0x41f77a - 0x41f7d5
int64_t function_41f77a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x41f77a
    int64_t v1; // 0x41f77a
    int64_t result = v1;
    char * v2 = (char *)(a2 - 0x33e18410); // 0x41f7b0
    *v2 = *v2 + (char)(a4 / 256);
    *(char *)a1 = (char)result;
    if (a4 == 1) {
        // 0x41f7c4
        return (result + 150) % 256 | result & -256;
    }
    // 0x41f7cb
    return result;
}

// Address range: 0x41f7d6 - 0x41f81b
int64_t function_41f7d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41f7d6
    int64_t v1; // 0x41f7d6
    char v2 = v1 / 256; // 0x41f7e3
    unsigned char v3 = (char)a2;
    char v4 = v2 + v3; // 0x41f7e3
    *(int64_t *)v1 = a4;
    int32_t v5 = __asm_in_136(45); // 0x41f7e6
    int64_t result = v5; // 0x41f7e6
    if (((v4 ^ v2) & (v4 ^ v3)) >= 0) {
        // 0x41f7ea
        return result;
    }
    // 0x41f808
    __asm_out_135((int16_t)a3, v5);
    uint32_t v6 = (int32_t)a4 % 32; // 0x41f809
    bool v7 = v3 > -1 - v2; // 0x41f809
    if (v6 != 0) {
        int32_t * v8 = (int32_t *)(a2 + 0xffffff80 & 0xffffffff); // 0x41f809
        uint32_t v9 = *v8; // 0x41f809
        int32_t v10 = v9 >> v6 | v9 << 32 - v6; // 0x41f809
        *v8 = v10;
        v7 = v10 < 0;
    }
    return (int64_t)(v5 + (int32_t)v7 + *(int32_t *)(2 * result + a4));
}

// Address range: 0x41fe1f - 0x41fe2c
int64_t function_41fe1f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41fe1f
    int64_t result; // 0x41fe1f
    int64_t v1; // 0x41fe1f
    if ((char)v1 != -(char)a3) {
        result = function_41fe11();
    }
    // 0x41fe23
    __asm_out(15, (char)result);
    return result;
}

// Address range: 0x41fe59 - 0x41fe5a
int64_t function_41fe59(int64_t a1) {
    // 0x41fe59
    int64_t result; // 0x41fe59
    return result;
}

// Address range: 0x41fee2 - 0x41fee3
int64_t function_41fee2(void) {
    // 0x41fee2
    int64_t result; // 0x41fee2
    return result;
}

// Address range: 0x41ff26 - 0x41ffde
int64_t function_41ff26(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41ff26
    int64_t result; // 0x41ff26
    if (a4 != 0) {
        // 0x41ff34
        return result | 176;
    }
    // 0x41ffaf
    __asm_out_133((int16_t)a3, (char)result);
    return result;
}
