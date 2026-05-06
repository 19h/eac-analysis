/*
 * Targeted RetDec C for native executable gap queue batch 549.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3202bb-0x3204bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3204bb-0x3206bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3206bb-0x3208bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e7696-0x3e7896 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e7896-0x3e7a96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e7a96-0x3e7c96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e7c96-0x3e7e96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e7e96-0x3e8096 rank=- name=- kind=- bytes=- uncovered=-
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
void __writegsdword(int64_t offset, uint32_t value);
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
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

int64_t function_13d68e0e();
int64_t function_1c23cfe();
int64_t function_20e2b5ba();
int64_t function_3202bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32030f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_320469(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3205a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_320701(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3d0d200();
int64_t function_3e7696(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int16_t a5);
int64_t function_3e775d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3e77e8(void);
int64_t function_3e7806(void);
int64_t function_3e781f(void);
int64_t function_3e782d(int64_t a1);
int64_t function_3e78ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e7922(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3e79fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e7a3e(void);
int64_t function_3e7a5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e7b02(void);
int64_t function_3e7b2d(void);
int64_t function_3e7bc9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e7bfe(int64_t a1);
int64_t function_3e7c25(void);
int64_t function_3e7c3d(void);
int64_t function_3e7c99(int64_t a1);
int64_t function_3e7cb2(int64_t a1);
int64_t function_3e7d21(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e7d25(void);
int64_t function_3e7d44(void);
int64_t function_3e7d5a(void);
int64_t function_3e7d5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e7d69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e7d95(void);
int64_t function_3e7dbe(void);
int64_t function_3e7dc6(void);
int64_t function_3e7de0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e7e0e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e7e29(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e7e50(void);
int64_t function_3e7e6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3e7fc5(int64_t a1);
int64_t function_3e7fe6(int64_t a1);
int64_t function_3e7fef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e8042(void);
int64_t function_3e807a(int64_t a1, int64_t a2);
int64_t function_6f98324a();
int64_t function_c823b();
int64_t function_d5b4();
int64_t function_ffffffffa45d91cb();
int64_t function_ffffffffe53aed7b();
int64_t unknown_ffffffff9ac6d137();

// Address range: 0x3202bb - 0x32030f
int64_t function_3202bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3202bb
    int64_t v1; // 0x3202bb
    int64_t v2 = (int64_t)&v1; // 0x3202d9
    int64_t v3 = v2 + 16; // 0x3202df
    v1 = v3;
    int64_t v4 = *(int64_t *)v3; // 0x3202ee
    *(int64_t *)(v2 + 8) = v4;
    v1 = v4;
    return function_c823b();
}

// Address range: 0x32030f - 0x320469
int64_t function_32030f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x32030f
    bool v1; // 0x32030f
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x32030f
    int64_t v3 = v2; // bp-48, 0x320382
    int64_t v4 = (int64_t)&v3; // 0x32038f
    int64_t v5 = *(int64_t *)(v4 + 24); // 0x3203bf
    v3 = v5;
    int64_t v6 = v4 - 8; // 0x3203c7
    int64_t * v7 = (int64_t *)v6; // 0x3203c7
    *v7 = v2;
    int64_t * v8 = (int64_t *)(v4 - 16); // 0x3203c8
    *v8 = v6;
    int64_t v9 = v4 + 8; // 0x3203ce
    int64_t v10 = v4 + 16; // 0x3203ec
    *(int64_t *)v10 = v3;
    *v7 = v5;
    *v8 = v5;
    *(int64_t *)(v4 + 40) = *v7;
    *v7 = v4;
    v3 = v10;
    v3 = *(int64_t *)v9;
    *v7 = v9;
    return function_c823b();
}

// Address range: 0x320469 - 0x3205a4
int64_t function_320469(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x320469
    int64_t v1; // bp-48, 0x320469
    int64_t v2 = (int64_t)&v1; // 0x320552
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x32055b
    *v3 = a4;
    int64_t * v4 = (int64_t *)(v2 + 16); // 0x32055e
    *v4 = v1;
    v1 = 0x1f6701d6;
    *v3 = 0x234fa576;
    *(int64_t *)(v2 - 16) = 0x31e623;
    *(int64_t *)(v2 + 32) = v1;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x320577
    int64_t v6 = *v5; // 0x320577
    v1 = v6;
    *v3 = v6;
    int64_t v7 = *v4; // 0x320586
    *v5 = v7;
    v1 = v7;
    return function_c823b();
}

// Address range: 0x3205a4 - 0x320701
int64_t function_3205a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3205a4
    return function_c823b();
}

// Address range: 0x320701 - 0x32085e
int64_t function_320701(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x320701
    return function_c823b();
}

// Address range: 0x3e7696 - 0x3e775c
int64_t function_3e7696(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int16_t a5) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a1 - 0x48bcf716); // 0x3e769b
    int32_t v3 = *v2; // 0x3e769b
    *v2 = v3 - (int32_t)a3;
    int64_t v4; // 0x3e7696
    if ((int64_t)v3 >= a3) {
        // 0x3e76a3
        return v4 | 181;
    }
    int64_t v5 = a3 / 256 % 256 ^ a4; // 0x3e76c7
    *(char *)v1 = (char)a3;
    int64_t v6 = a3 & -256 | (int64_t)*(char *)&v1; // 0x3e76c9
    __asm_in(-43);
    int64_t v7 = unknown_ffffffff9ac6d137(); // 0x3e76d6
    v1 = (int64_t)(*(int32_t *)(v4 + 0x4b1bf680) + (int32_t)v1);
    int64_t v8 = v4 + 127; // 0x3e76e1
    int64_t result = v8 & 0xffffffff; // 0x3e76e1
    int64_t * v9 = (int64_t *)(v7 & 0xffffffff); // 0x3e76e2
    int64_t v10 = *v9; // 0x3e76e2
    char * v11 = (char *)(v5 - 0x1bc8e2cc + v4); // 0x3e76e3
    unsigned char v12 = *v11; // 0x3e76e3
    unsigned char v13 = v12 + (char)v10; // 0x3e76e3
    *v11 = v13;
    if (v5 == 1 || v13 == 0) {
        char * v14 = (char *)(v1 + 0x15f64230); // 0x3e76ec
        *v14 = *v14 + (v13 < v12 ? -110 : -111);
        *v9 = 0x73c2a2aa;
        int32_t * v15 = (int32_t *)v6; // 0x3e76f8
        *v15 = *v15 ^ (int32_t)v1;
        return result;
    }
    int32_t v16 = *(int32_t *)v1; // 0x3e76fd
    int64_t v17 = v16 & (int32_t)*(int64_t *)(v4 + 119 & 0xffffffff); // 0x3e76fd
    int32_t * v18 = (int32_t *)v17; // 0x3e76ff
    uint32_t v19 = *v18; // 0x3e76ff
    uint32_t v20 = (int32_t)v10; // 0x3e76ff
    int32_t v21 = v19 - v20; // 0x3e76ff
    *v18 = v21;
    int16_t v22 = v6;
    if (v19 < v20 || v21 == 0) {
        char v23 = __asm_in_133(v22); // 0x3e7705
        __asm_outsd(v22, *(int32_t *)v1);
        *v9 = v17;
        return v8 & 0xffffff00 | (int64_t)v23;
    }
    // 0x3e775b
    __asm_outsd(v22, *(int32_t *)v1);
    return result;
}

// Address range: 0x3e775d - 0x3e77d4
int64_t function_3e775d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3e775d
    int64_t result; // 0x3e775d
    if (a4 != 1) {
        // 0x3e77d1
        return result & -256 | (int64_t)__asm_in_134(79);
    }
    // 0x3e775f
    bool v1; // 0x3e775d
    char v2 = (char)v1 + (char)(a3 / 256) + *(char *)0x1cc42980; // 0x3e7760
    unsigned char v3 = llvm_ctpop_i8(v2); // 0x3e7760
    *(char *)0x1cc42980 = v2;
    if (v3 % 2 == 0) {
        // 0x3e77bb
        return result;
    }
    // 0x3e7768
    return function_1c23cfe();
}

// Address range: 0x3e77e8 - 0x3e77ee
int64_t function_3e77e8(void) {
    // 0x3e77e8
    int64_t result; // 0x3e77e8
    return result;
}

// Address range: 0x3e7806 - 0x3e780b
int64_t function_3e7806(void) {
    // 0x3e7806
    return function_13d68e0e();
}

// Address range: 0x3e781f - 0x3e7822
int64_t function_3e781f(void) {
    // 0x3e781f
    int64_t v1; // 0x3e781f
    int64_t v2 = v1;
    bool v3; // 0x3e781f
    return (v2 + 32 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x3e782d - 0x3e782e
int64_t function_3e782d(int64_t a1) {
    // 0x3e782d
    int64_t result; // 0x3e782d
    return result;
}

// Address range: 0x3e78ad - 0x3e78c0
int64_t function_3e78ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e78ad
    int64_t result; // 0x3e78ad
    *(char *)0x3d1f20513f60530a = (char)result;
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3e7922 - 0x3e79f0
int64_t function_3e7922(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3e7922
    int64_t v1; // 0x3e7922
    unsigned char v2 = (char)v1 & 44; // 0x3e7923
    int64_t result = v1 & -256 | (int64_t)v2; // 0x3e7923
    if (v2 == 0 || v2 != 0) {
        // 0x3e7963
        return result;
    }
    int64_t v3 = 0x100000000 * a2 >> 32; // 0x3e7989
    char * v4 = (char *)(a2 - 58); // 0x3e798f
    unsigned char v5 = *v4; // 0x3e798f
    unsigned char v6 = v5 + (char)a4; // 0x3e798f
    unsigned char v7 = v6 + (char)(0x17b13100 * v3 != 0x17b1310000000000 * v3 >> 32); // 0x3e798f
    bool v8 = 0x17b13100 * v3 != 0x17b1310000000000 * v3 >> 32 ? v7 <= v5 : v6 < v5; // 0x3e798f
    *v4 = v7;
    int64_t v9; // 0x3e7922
    int32_t v10 = *(int32_t *)&v9; // 0x3e7992
    int32_t v11 = *(int32_t *)(int64_t)((int32_t)a2 - v10 + (int32_t)v8); // 0x3e7997
    __asm_outsd((int16_t)a5, v11);
    *(int32_t *)(v9 - 0x26f6dfc1) = (int32_t)result;
    return __asm_sti();
}

// Address range: 0x3e79fc - 0x3e7a27
int64_t function_3e79fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_int1(); // 0x3e7a0a
    int64_t v1; // 0x3e79fc
    int32_t * v2 = (int32_t *)(4 * a4 - 72 + v1); // 0x3e7a13
    *v2 = *v2 ^ (int32_t)v1;
    int32_t * v3 = (int32_t *)(a4 + 0x157c68e); // 0x3e7a17
    int32_t v4 = *v3 + (int32_t)result; // 0x3e7a17
    *v3 = v4;
    if (v4 == 0) {
        // 0x3e7a45
        return result;
    }
    // 0x3e7a1f
    return result + 0xd4107d36 & 0xffffffff;
}

// Address range: 0x3e7a3e - 0x3e7a45
int64_t function_3e7a3e(void) {
    // 0x3e7a3e
    int64_t v1; // 0x3e7a3e
    return v1 + 0x9867b3fb & 0xffffffff;
}

// Address range: 0x3e7a5b - 0x3e7afe
int64_t function_3e7a5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    __asm_outsb((int16_t)a3, (char)a2);
    int64_t v2; // 0x3e7a5b
    unsigned char v3 = (char)v2; // 0x3e7a5c
    bool v4; // 0x3e7a5b
    unsigned char v5 = v4 ? 122 : 121; // 0x3e7a5c
    char v6 = v3 - v5; // 0x3e7a5c
    char v7 = v4; // 0x3e7a5c
    int64_t v8 = 0x4000 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | (int64_t)(v4 | v5 > v3) | 64 * (int64_t)(v6 == 0) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v3 % 16 + v7 - (v5 & 11) > 15) | 4 * (int64_t)(llvm_ctpop_i8(v6) % 2 == 0) | 2048 * (int64_t)((-1 - v6 + v7 & v3) < 0) | 2; // bp-8, 0x3e7a61
    char * v9 = (char *)(2 * a3 - 108 + v2); // 0x3e7a62
    char v10 = *v9; // 0x3e7a62
    char v11 = a3; // 0x3e7a62
    *v9 = v10 - v11;
    if ((int64_t)v10 >= a3) {
        int32_t * v12 = (int32_t *)(a3 + 50); // 0x3e7acf
        int32_t v13 = a2; // 0x3e7acf
        *v12 = *v12 | v13;
        char v14 = *(char *)0x74db185b + (char)v1; // 0x3e7ad7
        *(char *)0x74db185b = v14;
        if (v14 == 0) {
            // 0x3e7afd
            return a1 & 0xffffffff;
        }
        int64_t v15 = v2 & 0x6e53df00 | (int64_t)(v6 & 110); // 0x3e7aca
        if (v14 <= 0) {
            // 0x3e7a8f
            return v15 ^ 220;
        }
        int32_t * v16 = (int32_t *)(a2 + 48); // 0x3e7ae6
        *v16 = *v16 + 0x5a5d0713;
        char v17 = __asm_in_134(52); // 0x3e7aed
        unsigned char v18 = *(char *)((v1 & 0xffffffff) + (int64_t)v17); // 0x3e7af4
        int64_t result = ((int64_t)v17 | (int64_t)&v8) & -256 | (int64_t)v18; // 0x3e7af4
        char v19 = *(char *)(int64_t)(*(int32_t *)(a2 - 13) | v13); // 0x3e7af5
        *(char *)a1 = v19;
        *(int64_t *)(v15 - 8) = result;
        return result;
    }
    unsigned char v20 = *(char *)(a1 + 0x651f20e3) & v11; // 0x3e7a6f
    int64_t v21 = __asm_int3(); // 0x3e7a75
    char * v22 = (char *)(a1 + 42); // 0x3e7a76
    *v22 = *v22 + v20;
    __asm_out(-32, (char)v21);
    char * v23 = (char *)(a2 + 0xb095931); // 0x3e7a7b
    int64_t v24; // 0x3e7a5b
    *v23 = *v23 ^ (char)(v24 / 256);
    unsigned char v25 = (char)v1 % 32; // 0x3e7a81
    int32_t v26; // 0x3e7a5b
    if (v25 == 0) {
        // 0x3e7a68
        v26 = v1;
    } else {
        *(char *)v24 = *(char *)&v24 << v25;
        v26 = *(int32_t *)&v1;
    }
    *(int32_t *)v1 = v26 ^ (int32_t)a2;
    int64_t result2 = (int64_t)&v8; // 0x3e7a85
    *(int32_t *)a1 = (int32_t)result2;
    uint32_t v27 = (int32_t)v21; // 0x3e7a87
    uint32_t v28 = *(int32_t *)((a3 & -256 | (int64_t)v20) - 117); // 0x3e7a87
    if (v28 <= v27) {
        // 0x3e7ac8
        return result2;
    }
    int32_t * v29 = (int32_t *)(a1 - 83 + (v4 ? -4 : 4)); // 0x3e7a8c
    *v29 = *v29 + (int32_t)(v28 > v27) + (int32_t)v24;
    // 0x3e7a8f
    return result2 ^ 220;
}

// Address range: 0x3e7b02 - 0x3e7b09
int64_t function_3e7b02(void) {
    // 0x3e7b02
    return function_6f98324a();
}

// Address range: 0x3e7b2d - 0x3e7b2f
int64_t function_3e7b2d(void) {
    // 0x3e7b2d
    int64_t result; // 0x3e7b2d
    return result;
}

// Address range: 0x3e7bc9 - 0x3e7bcf
int64_t function_3e7bc9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e7bc9
    int64_t result; // 0x3e7bc9
    return result;
}

// Address range: 0x3e7bfe - 0x3e7bff
int64_t function_3e7bfe(int64_t a1) {
    // 0x3e7bfe
    int64_t result; // 0x3e7bfe
    return result;
}

// Address range: 0x3e7c25 - 0x3e7c2a
int64_t function_3e7c25(void) {
    // 0x3e7c25
    return function_3d0d200();
}

// Address range: 0x3e7c3d - 0x3e7c3e
int64_t function_3e7c3d(void) {
    // 0x3e7c3d
    int64_t result; // 0x3e7c3d
    return result;
}

// Address range: 0x3e7c99 - 0x3e7c9a
int64_t function_3e7c99(int64_t a1) {
    // 0x3e7c99
    int64_t result; // 0x3e7c99
    return result;
}

// Address range: 0x3e7cb2 - 0x3e7cb5
int64_t function_3e7cb2(int64_t a1) {
    // 0x3e7cb2
    int64_t result; // 0x3e7cb2
    return result;
}

// Address range: 0x3e7d21 - 0x3e7d25
int64_t function_3e7d21(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e7d21
    int64_t result; // 0x3e7d21
    __asm_out_135((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3e7d25 - 0x3e7d2a
int64_t function_3e7d25(void) {
    // 0x3e7d25
    return function_20e2b5ba();
}

// Address range: 0x3e7d44 - 0x3e7d45
int64_t function_3e7d44(void) {
    // 0x3e7d44
    int64_t result; // 0x3e7d44
    return result;
}

// Address range: 0x3e7d5a - 0x3e7d5f
int64_t function_3e7d5a(void) {
    // 0x3e7d5a
    return function_ffffffffe53aed7b();
}

// Address range: 0x3e7d5f - 0x3e7d69
int64_t function_3e7d5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e7d5f
    int64_t v1; // 0x3e7d5f
    uint64_t v2 = v1;
    char v3 = *(char *)(a4 - 56); // 0x3e7d5f
    int64_t v4 = 256 * (int64_t)((char)(v2 / 256) - v3) | v2 & -0xff01; // 0x3e7d5f
    int32_t * v5 = (int32_t *)v4; // 0x3e7d62
    *v5 = *v5 - (int32_t)v4;
    return function_ffffffffa45d91cb();
}

// Address range: 0x3e7d69 - 0x3e7d83
int64_t function_3e7d69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    if (a4 == 0) {
        function_3e7d44();
    }
    int64_t v2 = __asm_hlt(); // 0x3e7d6d
    float80_t v3; // 0x3e7d69
    *(int32_t *)a2 = (int32_t)v3;
    *(char *)a1 = *(char *)&v1;
    bool v4; // 0x3e7d69
    __asm_outsb((int16_t)a3, *(char *)(v1 + (v4 ? -1 : 1)));
    int64_t v5; // 0x3e7d69
    *(int32_t *)v2 = *(int32_t *)&v5 | (int32_t)v2;
    return __asm_int3();
}

// Address range: 0x3e7d95 - 0x3e7d96
int64_t function_3e7d95(void) {
    // 0x3e7d95
    int64_t result; // 0x3e7d95
    return result;
}

// Address range: 0x3e7dbe - 0x3e7dbf
int64_t function_3e7dbe(void) {
    // 0x3e7dbe
    int64_t result; // 0x3e7dbe
    return result;
}

// Address range: 0x3e7dc6 - 0x3e7dc8
int64_t function_3e7dc6(void) {
    // 0x3e7dc6
    int64_t v1; // 0x3e7dc6
    return function_3e7e0e(v1, v1, v1);
}

// Address range: 0x3e7de0 - 0x3e7e0e
int64_t function_3e7de0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 98); // 0x3e7de0
    int64_t v2; // 0x3e7de0
    *v1 = *v1 ^ (int32_t)v2;
    unsigned char v3 = *(char *)(a2 - 0x4af9d548); // 0x3e7de3
    __asm_outsb((int16_t)(a3 & 0xff00 | (int64_t)v3), __readfsbyte(a2));
    if (a4 == 0) {
        function_3e7dbe();
    }
    uint64_t v4 = v2 + 0x4f5cec95 & 0xffffffff ^ 0xc4d41b8; // 0x3e7df1
    char * v5 = (char *)(v2 - 0x2ee4b489); // 0x3e7dfb
    *v5 = *v5 ^ (char)(v4 / 256);
    int32_t * v6 = (int32_t *)(a2 - 111); // 0x3e7e07
    *v6 = *v6 - (int32_t)v4;
    return __asm_wait();
}

// Address range: 0x3e7e0e - 0x3e7e1a
int64_t function_3e7e0e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e7e0e
    int64_t v1; // 0x3e7e0e
    float80_t v2; // 0x3e7e0e
    *(int32_t *)(v1 - 98) = (int32_t)v2;
    __asm_outsb((int16_t)a3, __readgsbyte(a2));
    int64_t result; // 0x3e7e0e
    bool v3; // 0x3e7e0e
    if (v3 || v3) {
        result = function_3e7d95();
    }
    // 0x3e7e15
    return result;
}

// Address range: 0x3e7e29 - 0x3e7e2d
int64_t function_3e7e29(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e7e29
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x3e7e29
    return result;
}

// Address range: 0x3e7e50 - 0x3e7e51
int64_t function_3e7e50(void) {
    // 0x3e7e50
    int64_t result; // 0x3e7e50
    return result;
}

// Address range: 0x3e7e6a - 0x3e7f03
int64_t function_3e7e6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3e7e6a
    int64_t v1; // 0x3e7e6a
    bool v2; // 0x3e7e6a
    if (v2 || v2) {
        int32_t * v3 = (int32_t *)(v1 - 28); // 0x3e7eec
        *v3 = *v3 ^ (int32_t)a2;
        int64_t result = v1 & -256 | (int64_t)__asm_in_133((int16_t)a3); // 0x3e7eef
        __asm_out_136(124, (int32_t)result);
        return result;
    }
    // 0x3e7efe
    return v1 & 0xffffffff ^ 0xc4324807;
}

// Address range: 0x3e7fc5 - 0x3e7fc9
int64_t function_3e7fc5(int64_t a1) {
    // 0x3e7fc5
    int64_t v1; // 0x3e7fc5
    return v1 & -256 | 12;
}

// Address range: 0x3e7fe6 - 0x3e7fe7
int64_t function_3e7fe6(int64_t a1) {
    // 0x3e7fe6
    int64_t result; // 0x3e7fe6
    return result;
}

// Address range: 0x3e7fef - 0x3e8012
int64_t function_3e7fef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e7fef
    return function_d5b4();
}

// Address range: 0x3e8042 - 0x3e8045
int64_t function_3e8042(void) {
    // 0x3e8042
    int64_t result; // 0x3e8042
    return result;
}

// Address range: 0x3e807a - 0x3e8083
int64_t function_3e807a(int64_t a1, int64_t a2) {
    // 0x3e807a
    int64_t v1; // 0x3e807a
    *(char *)a1 = (char)v1;
    return v1 & 0xfa18d308 | 0x5e72cf7;
}
