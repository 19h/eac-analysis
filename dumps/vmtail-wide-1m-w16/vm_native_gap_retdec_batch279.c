/*
 * Targeted RetDec C for native executable gap queue batch 279.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x18f685-0x18f885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18fa85-0x18fc85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18fc85-0x18fe85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18fe85-0x190085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e38e8-0x1e3ae8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x314cbb-0x314ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x314ebb-0x3150bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3150bb-0x3152bb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_18f681();
int64_t function_18f685(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18f69f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18f72b(void);
int64_t function_18f732(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_18f81b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18f820(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_18f824(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18fa85(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18fad1(void);
int64_t function_18faec(int64_t a1, int64_t a2);
int64_t function_18faff(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_18fbba(void);
int64_t function_18fc6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18fd74(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18fde1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18fef5(int64_t a1, int64_t a2);
int64_t function_18ff33(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18ff5b(int64_t a1);
int64_t function_190033(void);
int64_t function_1e38e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e3949(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e39a5(int64_t a1);
int64_t function_1e3a1c(int64_t a1);
int64_t function_1e3ab7(void);
int64_t function_1e3abb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_314c83();
int64_t function_314ca7();
int64_t function_314cbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_314cda(void);
int64_t function_314cf3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_314cfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_314d18(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_314d6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_314d72(void);
int64_t function_314d88(void);
int64_t function_314da5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_314df7(void);
int64_t function_314e33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_314e85(int64_t a1, int64_t a2);
int64_t function_314e8c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_314ebc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_314ec5(int64_t a1, int64_t a2);
int64_t function_314ec7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_314f09(int64_t a1, int64_t a2, int64_t a3);
int64_t function_314fc9(int64_t a1, int64_t a2);
int64_t function_315021(void);
int64_t function_31506b(int64_t a1);
int64_t function_3150ff(void);
int64_t function_315118(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3151d9(void);
int64_t function_31520f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_31525d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31526e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_315270(void);
int64_t function_315274(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a9dc2cb();
int64_t function_3cf8fce4();
int64_t function_4ffc0d11();
int64_t function_ffffffff87a0293a();
int64_t function_ffffffff97add874();
int64_t function_ffffffffb03eab25();
int64_t function_fffffffff4333931();
int64_t unknown_290474ef();
int64_t unknown_2b3d0d0b();
int64_t unknown_566d4173();
int64_t unknown_5fc2d544();
int64_t unknown_609120cb();
int64_t unknown_6b799879();
int64_t unknown_6faa2f53();
int64_t unknown_7d20053b();
int64_t unknown_82e3ae4();
int64_t unknown_ffffffff8842a4a5();
int64_t unknown_ffffffffa260355c();
int64_t unknown_ffffffffa998eef1();
int64_t unknown_ffffffffad769493();
int64_t unknown_ffffffffad7740b0();
int64_t unknown_ffffffffbfb304fe();
int64_t unknown_ffffffffc43bd5b0();
int64_t unknown_ffffffffc52c2600();
int64_t unknown_ffffffffcc893255();
int64_t unknown_ffffffffce39874f();
int64_t unknown_fffffffff692229a();
int64_t unknown_fffffffffba9def2();

// Address range: 0x18f685 - 0x18f69e
int64_t function_18f685(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18f685
    int64_t v1; // 0x18f685
    char v2 = v1;
    *(char *)v1 = 2 * v2;
    char * v3 = (char *)(v1 + 5); // 0x18f68c
    *v3 = *v3 + (char)v1;
    char * v4 = (char *)(v1 + 0x1e80142); // 0x18f68f
    *v4 = *v4 + v2;
    return a3 & 0xffffffff;
}

// Address range: 0x18f69f - 0x18f6b3
int64_t function_18f69f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18f69f
    bool v1; // 0x18f69f
    if (v1) {
        function_18f681();
    }
    // 0x18f6ad
    int64_t v2; // 0x18f69f
    char * v3 = (char *)(v2 - 89); // 0x18f6af
    *v3 = (char)v1 + (char)v2 + *v3;
    return a3 & 0xffffffff;
}

// Address range: 0x18f72b - 0x18f72c
int64_t function_18f72b(void) {
    // 0x18f72b
    int64_t result; // 0x18f72b
    return result;
}

// Address range: 0x18f732 - 0x18f761
int64_t function_18f732(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x18f732
    int64_t v1; // 0x18f732
    __asm_out(37, (char)v1);
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x18f732
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x18f734
    int64_t v4 = unknown_7d20053b(v3); // 0x18f735
    uint32_t v5 = (int32_t)a3; // 0x18f73f
    int64_t v6; // 0x18f732
    uint32_t v7 = *(int32_t *)&v6 + v5; // 0x18f73f
    uint32_t v8 = v7 + (int32_t)((int32_t)v4 < 0x508ebf8); // 0x18f73f
    if (v8 != 0 && !(((int32_t)v4 < 0x508ebf8 ? v8 <= v5 : v7 < v5))) {
        function_18f72b();
    }
    int32_t * v9 = (int32_t *)(v1 + 0x26646b2f); // 0x18f743
    *v9 = *v9 + v8;
    int32_t * v10 = (int32_t *)(v1 - 114); // 0x18f74a
    *v10 = *v10 + (int32_t)a4;
    *(char *)v3 = (char)unknown_6faa2f53();
    int64_t v11 = v3 + ((a5 & (int64_t)&g1) != 0 ? -1 : 1); // 0x18f755
    unknown_ffffffffa260355c(v11);
    return function_3a9dc2cb(v11 + ((a5 & (int64_t)&g1) != 0 ? -4 : 4));
}

// Address range: 0x18f81b - 0x18f81f
int64_t function_18f81b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18f81b
    int64_t v1; // 0x18f81b
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t v3; // 0x18f81b
    return (int64_t)*(int32_t *)&v3;
}

// Address range: 0x18f820 - 0x18f823
int64_t function_18f820(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x18f820
    int64_t result; // 0x18f820
    *(char *)a3 = (char)result + (char)(a3 / 256);
    return result;
}

// Address range: 0x18f824 - 0x18f833
int64_t function_18f824(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18f824
    int64_t v1; // 0x18f824
    int64_t v2 = v1;
    char * v3 = (char *)(v2 - 44); // 0x18f824
    unsigned char v4 = *v3; // 0x18f824
    unsigned char v5 = (char)a4 % 32; // 0x18f824
    bool v6; // 0x18f824
    bool v7; // 0x18f824
    if (v5 != 0) {
        unsigned char v8 = v5 - 1; // 0x18f824
        *v3 = v4 << v5 | (char)v7 << v8 | (char)((int16_t)v4 >> (int16_t)(9 - v5));
        v6 = (v4 & 128 >> v8) != 0;
    }
    *(char *)a1 = (char)v2;
    *(int32_t *)((v7 ? -1 : 1) + a1) = (int32_t)v2;
    return (v2 - (v6 ? 71 : 70)) % 256 | v2 & -256;
}

// Address range: 0x18fa85 - 0x18faa7
int64_t function_18fa85(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 - 0x59a985f8); // 0x18fa8c
    *v1 = *v1 & -24;
    int64_t v2; // 0x18fa85
    int32_t * v3 = (int32_t *)(v2 - 0x17fec2d6); // 0x18fa93
    int32_t v4 = a4; // 0x18fa93
    *v3 = *v3 + v4;
    int32_t * v5 = (int32_t *)(a3 - 46); // 0x18fa9b
    *v5 = *v5 + v4;
    __asm_wait();
    char * v6 = (char *)(a2 + 99); // 0x18faa1
    *v6 = *v6 ^ 97;
    return unknown_fffffffffba9def2(a1, a2);
}

// Address range: 0x18fad1 - 0x18fad6
int64_t function_18fad1(void) {
    // 0x18fad1
    return function_4ffc0d11();
}

// Address range: 0x18faec - 0x18faf6
int64_t function_18faec(int64_t a1, int64_t a2) {
    int64_t result = unknown_fffffffffba9def2(a1, a2); // 0x18faec
    int64_t v1; // 0x18faec
    *(int32_t *)a1 = (int32_t)v1;
    return result;
}

// Address range: 0x18faff - 0x18fb20
int64_t function_18faff(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x18faff
    int64_t v1; // 0x18faff
    int64_t v2 = v1;
    int32_t v3 = *(int32_t *)(a1 - 0x17076ec6); // 0x18faff
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    char * v4 = (char *)(v1 + 0x5901e83a + v1); // 0x18fb09
    *v4 = *v4 + (char)(a3 / 256);
    int32_t v5 = __asm_in_133((int16_t)a3); // 0x18fb12
    uint64_t v6 = (int64_t)v5; // 0x18fb12
    char v7 = __readgsbyte(v6 + a1); // 0x18fb13
    int32_t * v8 = (int32_t *)(a3 - 119); // 0x18fb19
    *v8 = *v8 + (int32_t)a1;
    return ((int64_t)v5 + (int64_t)((v3 | (int32_t)a4) / 256)) % 256 | v6 & -0x10000 | 256 * (int64_t)(v7 ^ (char)(v6 / 256));
}

// Address range: 0x18fbba - 0x18fbc1
int64_t function_18fbba(void) {
    // 0x18fbba
    return function_3cf8fce4();
}

// Address range: 0x18fc6b - 0x18fc89
int64_t function_18fc6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18fc6b
    *(int32_t *)0x1079e374 = *(int32_t *)0x1079e374 + (int32_t)a1;
    return unknown_6b799879();
}

// Address range: 0x18fd74 - 0x18fd7a
int64_t function_18fd74(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18fd74
    int64_t result; // 0x18fd74
    *(int32_t *)a2 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x18fde1 - 0x18fe00
int64_t function_18fde1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)a1; // 0x18fde1
    int64_t v2; // 0x18fde1
    *v1 = (char)(v2 & v2);
    int64_t v3 = unknown_290474ef(); // 0x18fde9
    *v1 = (char)v3;
    int32_t v4 = *(int32_t *)v3; // 0x18fdf3
    char * v5 = (char *)(((a4 & 0xff00) + a3 & 0xff00 | a4 & -0xff01) + (int64_t)((int32_t)v2 - v4 + (int32_t)((v3 & 256) != 0))); // 0x18fdf5
    *v5 = *v5 + (char)a4;
    bool v6; // 0x18fde1
    return unknown_ffffffffbfb304fe((v6 ? -1 : 1) + a1);
}

// Address range: 0x18fef5 - 0x18fefd
int64_t function_18fef5(int64_t a1, int64_t a2) {
    // 0x18fef5
    int64_t v1; // 0x18fef5
    *(char *)a1 = (char)v1;
    bool v2; // 0x18fef5
    int64_t v3 = v2 ? -1 : 1; // 0x18fef7
    return function_ffffffff97add874(v3 + a1, v3 + a2);
}

// Address range: 0x18ff33 - 0x18ff45
int64_t function_18ff33(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = *(int32_t *)0x3d2da07a08f8e75b; // 0x18ff34
    int64_t result = v1; // 0x18ff34
    int32_t * v2 = (int32_t *)result; // 0x18ff3d
    *v2 = *v2 + v1;
    return result;
}

// Address range: 0x18ff5b - 0x18ff5e
int64_t function_18ff5b(int64_t a1) {
    // 0x18ff5b
    int64_t result; // 0x18ff5b
    return result;
}

// Address range: 0x190033 - 0x190038
int64_t function_190033(void) {
    // 0x190033
    return function_ffffffff87a0293a();
}

// Address range: 0x1e38e8 - 0x1e3926
int64_t function_1e38e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e38e8
    unknown_ffffffffa998eef1();
    int64_t v1 = unknown_82e3ae4(); // 0x1e38f7
    int64_t v2 = -0x6c92972d; // bp-16, 0x1e38fc
    uint32_t v3 = ((int32_t)a4 | (int32_t)&g3) % 32; // 0x1e3901
    int64_t v4; // 0x1e38e8
    if (v3 != 0) {
        int32_t * v5 = (int32_t *)(8 * v4 + 0x1e868301 + v1); // 0x1e3901
        *v5 = *v5 << v3;
    }
    char * v6 = (char *)(v1 + 0x3614e00); // 0x1e3908
    *v6 = *v6 + (char)v1;
    int64_t result = (v1 + ((int64_t)&g3 >> 8)) % 256 | v1 & -256; // 0x1e390e
    int32_t * v7 = (int32_t *)(v4 + 0x34015400); // 0x1e3910
    *v7 = *v7 + (int32_t)(int64_t)&v2;
    int32_t * v8 = (int32_t *)(result - 108); // 0x1e3923
    *v8 = *v8 + (int32_t)result;
    return result;
}

// Address range: 0x1e3949 - 0x1e3979
int64_t function_1e3949(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e3949
    int64_t v1; // 0x1e3949
    char * v2 = (char *)(v1 - 0x613abff9); // 0x1e3949
    char v3 = v1; // 0x1e3949
    *v2 = *v2 + v3;
    char * v4 = (char *)(unknown_ffffffffcc893255() - 111); // 0x1e3954
    *v4 = *v4 + v3;
    __asm_int1();
    return unknown_566d4173() & -256 | (int64_t)__asm_in_134(-107);
}

// Address range: 0x1e39a5 - 0x1e39a8
int64_t function_1e39a5(int64_t a1) {
    // 0x1e39a5
    int64_t result; // 0x1e39a5
    return result;
}

// Address range: 0x1e3a1c - 0x1e3a1f
int64_t function_1e3a1c(int64_t a1) {
    // 0x1e3a1c
    int64_t result; // 0x1e3a1c
    return result;
}

// Address range: 0x1e3ab7 - 0x1e3ab8
int64_t function_1e3ab7(void) {
    // 0x1e3ab7
    int64_t result; // 0x1e3ab7
    return result;
}

// Address range: 0x1e3abb - 0x1e3ad5
int64_t function_1e3abb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e3abb
    int64_t v1; // 0x1e3abb
    int32_t * v2 = (int32_t *)(4 * a4 - 0x72a5f1f5 + v1); // 0x1e3abb
    int32_t v3 = *v2 + (int32_t)a2; // 0x1e3abb
    *v2 = v3;
    unknown_609120cb();
    int64_t result = __asm_in(-59); // 0x1e3acd
    if (v3 < 1) {
        result = function_1e3ab7();
    }
    // 0x1e3acf
    return result;
}

// Address range: 0x314cbb - 0x314cd8
int64_t function_314cbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x314cbb
    int64_t v1; // 0x314cbb
    int64_t v2 = v1;
    if ((char)v2 + 58 + ((int32_t)v2 > 0x825e84c5 ? -7 : -6) >= 0) {
        function_314ca7();
    }
    int32_t result = __asm_in(0); // 0x314cc4
    int32_t * v3 = (int32_t *)(a1 + 0x570f8b3 + 4 * a3); // 0x314ccb
    *v3 = *v3 - 24 + (int32_t)(result < 0x3726a701);
    float80_t v4; // 0x314cbb
    *(float64_t *)(a1 - 24) = (float64_t)v4;
    return result;
}

// Address range: 0x314cda - 0x314cdb
int64_t function_314cda(void) {
    // 0x314cda
    int64_t result; // 0x314cda
    return result;
}

// Address range: 0x314cf3 - 0x314cf6
int64_t function_314cf3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x314cf3
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1; // 0x314cf3
    return function_314d6f(a1, a2, a3, v1);
}

// Address range: 0x314cfa - 0x314d0c
int64_t function_314cfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x314cfa
    unknown_ffffffffc52c2600();
    __asm_hlt();
    if (a4 == 0) {
        function_314c83();
    }
    // 0x314d03
    unknown_2b3d0d0b();
    return a3 & 0xffffffff;
}

// Address range: 0x314d18 - 0x314d6b
int64_t function_314d18(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = -0x178b691b; // bp-8, 0x314d2f
    __asm_in_135((int16_t)a3);
    if ((*(char *)(a4 - 15) & (char)a4) < 0) {
        function_314cda();
    }
    // 0x314d3e
    unknown_5fc2d544();
    int64_t v2 = unknown_ffffffffce39874f(); // 0x314d49
    int32_t * v3 = (int32_t *)(v2 + 5); // 0x314d4e
    *v3 = *v3 ^ -92;
    int64_t v4 = -1 - (int32_t)a3 < (int32_t)((int64_t)&v1 + a1) ? 0xb8b7bb0e : 0xb8b7bb0d; // 0x314d57
    int64_t v5 = v2 - v4; // 0x314d57
    int32_t * v6 = (int32_t *)((v5 & 0xffffffff) + 19); // 0x314d60
    uint32_t v7 = *v6; // 0x314d60
    uint32_t v8 = v7 + (int32_t)v5; // 0x314d60
    *v6 = v8;
    int64_t v9 = __asm_hlt(); // 0x314d63
    return (v9 - (v8 < v7 ? 145 : 144)) % 256 | v9 & -256;
}

// Address range: 0x314d6f - 0x314d70
int64_t function_314d6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x314d6f
    int64_t result; // 0x314d6f
    return result;
}

// Address range: 0x314d72 - 0x314d73
int64_t function_314d72(void) {
    // 0x314d72
    int64_t result; // 0x314d72
    return result;
}

// Address range: 0x314d88 - 0x314d8a
int64_t function_314d88(void) {
    // 0x314d88
    return function_314d72();
}

// Address range: 0x314da5 - 0x314dc6
int64_t function_314da5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffc43bd5b0(); // 0x314daa
    int32_t * v1 = (int32_t *)(a2 + 35); // 0x314dbb
    int64_t v2; // 0x314da5
    *v1 = *v1 | (int32_t)v2;
    // 0x314dc6
    return result;
}

// Address range: 0x314df7 - 0x314df8
int64_t function_314df7(void) {
    // 0x314df7
    int64_t result; // 0x314df7
    return result;
}

// Address range: 0x314e33 - 0x314e42
int64_t function_314e33(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x314e33
    __asm_rcl(*(char *)(a4 - 0x72dd06f9));
    int64_t result; // 0x314e33
    return result;
}

// Address range: 0x314e85 - 0x314e8b
int64_t function_314e85(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 - 97); // 0x314e85
    int64_t result; // 0x314e85
    *v1 = *v1 | (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x314e8c - 0x314eaf
int64_t function_314e8c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x314e8c
    *(int32_t *)0x105d3b95 = *(int32_t *)0x105d3b95 + (int32_t)a1;
    int64_t v1 = unknown_fffffffff692229a(); // 0x314e94
    int64_t v2; // 0x314e8c
    float80_t v3; // 0x314e8c
    *(int32_t *)(8 * v2 + 27 + v2) = (int32_t)v3;
    int64_t v4; // 0x314e8c
    __asm_outsb((int16_t)a3 & -256 | 232, *(char *)&v4);
    bool v5; // 0x314e8c
    int64_t v6 = v5 ? -1 : 1; // 0x314e9e
    *(int32_t *)0x22f88396bc931a = (int32_t)v1;
    return function_314ec5(v6 + a1, v6 + a2);
}

// Address range: 0x314ebc - 0x314ec5
int64_t function_314ebc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x314ebc
    *(char *)(a1 + 0x444b72) = 61;
    int64_t result; // 0x314ebc
    return result;
}

// Address range: 0x314ec5 - 0x314ec6
int64_t function_314ec5(int64_t a1, int64_t a2) {
    // 0x314ec5
    int64_t result; // 0x314ec5
    return result;
}

// Address range: 0x314ec7 - 0x314ef5
int64_t function_314ec7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x314ec7
    int64_t v1; // 0x314ec7
    bool v2; // 0x314ec7
    uint64_t v3 = v1 - (v2 ? 10 : 9); // 0x314ec8
    int64_t v4 = (int64_t)(*(int32_t *)(v1 - 0x1529cb1d) + (int32_t)a1); // 0x314eca
    *(char *)v4 = (char)v3;
    int64_t v5 = (v2 ? -1 : 1) + v4; // 0x314ee9
    int32_t * v6 = (int32_t *)(v1 + 0x47013d00 + 8 * v5); // 0x314eec
    *v6 = *v6 + (int32_t)v5;
    return v3 % 256 | v1 & -256;
}

// Address range: 0x314f09 - 0x314f13
int64_t function_314f09(int64_t a1, int64_t a2, int64_t a3) {
    // 0x314f09
    int64_t v1; // 0x314f09
    int64_t v2 = v1;
    int64_t result = (v2 + 195) % 256 | v2 & -256; // 0x314f09
    int32_t * v3 = (int32_t *)(a3 + 0x15a997b1 + 2 * result); // 0x314f0b
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x314fc9 - 0x314fd8
int64_t function_314fc9(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 59); // 0x314fce
    int64_t v2; // 0x314fc9
    *v1 = (int32_t)v2 - 0x17caab5c + *v1;
    return a1 & 0xffffffff;
}

// Address range: 0x315021 - 0x31502c
int64_t function_315021(void) {
    // 0x315021
    return function_ffffffffb03eab25();
}

// Address range: 0x31506b - 0x315072
int64_t function_31506b(int64_t a1) {
    // 0x31506b
    int64_t v1; // 0x31506b
    return v1 ^ 105;
}

// Address range: 0x3150ff - 0x315104
int64_t function_3150ff(void) {
    // 0x3150ff
    return function_fffffffff4333931();
}

// Address range: 0x315118 - 0x3151d0
int64_t function_315118(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a4 - 1; // 0x315120
    int64_t result; // 0x315118
    if (v1 == 0) {
        // 0x315122
        return result;
    }
    uint32_t v2 = (int32_t)result; // 0x31511a
    int32_t v3 = v2 + 0x7807a0ff; // 0x31511a
    uint32_t v4 = v2 / 0x80000000; // 0x31511f
    unsigned char v5 = llvm_ctpop_i8((char)v3); // 0x31511a
    __asm_out_136(123, v2);
    int32_t * v6 = (int32_t *)(a2 + 0x3a91dbb9); // 0x315193
    *v6 = *v6 + v4;
    *(char *)a1 = __asm_insb((int16_t)v4);
    char * v7 = (char *)(result - 114); // 0x31519c
    char v8 = *v7; // 0x31519c
    *v7 = v8 + (64 * (char)(v3 == 0) | (char)(v2 < 0x87f85f01) | 128 * (char)(v3 < 0) | 16 * (char)(v2 % 16 > 16) | 4 * (char)(v5 % 2 == 0) | 2);
    unknown_ffffffff8842a4a5();
    *(char *)v1 = (char)result;
    unknown_ffffffffad7740b0();
    int64_t v9 = (int64_t)*(int32_t *)((int64_t)v4 - 0x17a3fcd3); // 0x3151b0
    __asm_wait();
    int32_t v10 = *(int32_t *)(result + 0x4a0e4585); // 0x3151c0
    *(char *)((int64_t)((int32_t)result - v10 + (int32_t)(-0x63d23bff * v9 != -0x63d23bff00000000 * v9 >> 32)) + 0x1e8b793) = -1;
    bool v11; // 0x315118
    return (int64_t)*(int32_t *)((v11 ? -1 : 1) + a2);
}

// Address range: 0x3151d9 - 0x3151da
int64_t function_3151d9(void) {
    // 0x3151d9
    int64_t result; // 0x3151d9
    return result;
}

// Address range: 0x31520f - 0x315241
int64_t function_31520f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x31520f
    int64_t v1; // 0x31520f
    int64_t v2 = v1 & -256 | 215; // 0x31521e
    char v3 = __readgsbyte(a1 - 24); // 0x315220
    *(int32_t *)0xb61097d8 = *(int32_t *)0xb61097d8 - 0x49ef6828;
    int32_t * v4 = (int32_t *)v2; // 0x315227
    *v4 = *v4 ^ (int32_t)v2;
    char * v5 = (char *)v2; // 0x315229
    *v5 = *v5 + 120;
    *(int32_t *)0xfd115ed8 = *(int32_t *)0xfd115ed8 + (int32_t)a7;
    int32_t * v6 = (int32_t *)(4 * (256 * (int64_t)(v3 ^ (char)(a3 / 256)) | a3 & 0x3fffffffffff00ff) + a2); // 0x31523b
    *v6 = *v6 + (int32_t)a2;
    return function_3151d9();
}

// Address range: 0x31525d - 0x31526d
int64_t function_31525d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31525d
    return function_315270();
}

// Address range: 0x31526e - 0x315270
int64_t function_31526e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31526e
    int64_t result; // 0x31526e
    *(int32_t *)a4 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x315270 - 0x315271
int64_t function_315270(void) {
    // 0x315270
    int64_t result; // 0x315270
    return result;
}

// Address range: 0x315274 - 0x315297
int64_t function_315274(int64_t a1, int64_t a2, int64_t a3) {
    // 0x315274
    bool v1; // 0x315274
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // bp-8, 0x315276
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int32_t v3 = a1; // 0x31527f
    int64_t v4; // 0x315274
    *(int32_t *)v4 = *(int32_t *)&v4 + v3;
    int64_t v5; // 0x315274
    *(char *)0x47d382138b8ca73a = (char)(v5 & v5);
    int32_t * v6 = (int32_t *)(v4 + 65); // 0x31528a
    uint32_t v7 = *v6; // 0x31528a
    uint32_t v8 = v7 + v3; // 0x31528a
    *v6 = v8;
    int64_t result = unknown_ffffffffad769493(); // 0x31528d
    int32_t * v9 = (int32_t *)(v4 - 74); // 0x315292
    int32_t v10 = *v9; // 0x315292
    *v9 = v10 - ((int32_t)(v8 < v7) | (int32_t)(int64_t)&v2);
    return result;
}
