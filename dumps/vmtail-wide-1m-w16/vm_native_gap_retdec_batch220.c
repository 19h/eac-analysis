/*
 * Targeted RetDec C for native executable gap queue batch 220.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x181485-0x181685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x181885-0x181a85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x181a85-0x181c85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x181c85-0x181e85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e921e-0x2e941e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e941e-0x2e961e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e961e-0x2e981e rank=- name=- kind=- bytes=- uncovered=-
 *   0x141d13-0x141f13 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g1;
extern int g2;
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
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt();
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_wait(void);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
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

int64_t function_141cb6();
int64_t function_141d13(int64_t a1, int64_t a2, int64_t a3);
int64_t function_141d1e(void);
int64_t function_141d28(void);
int64_t function_141d57(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_141d91(void);
int64_t function_141de3(int64_t a1);
int64_t function_141df5(int64_t a1);
int64_t function_141e11(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_141e2f(void);
int64_t function_141e38(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_141eb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_141edd(void);
int64_t function_141ee7(int64_t a1);
int64_t function_141f09(void);
int64_t function_1551930();
int64_t function_181485(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18154c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1815ec(int64_t a1);
int64_t function_1815fd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_181885(void);
int64_t function_1818c8(void);
int64_t function_181913(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_181944(void);
int64_t function_18194d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18197c(void);
int64_t function_181982(int64_t a1);
int64_t function_181a41(int64_t a1);
int64_t function_181a71(int64_t a1);
int64_t function_181ac3(void);
int64_t function_181af3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_181b42(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_181b6d(void);
int64_t function_181b74(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_181b7e(void);
int64_t function_181b9a(int64_t a1);
int64_t function_181bc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_181bda(int64_t a1);
int64_t function_181bf1(void);
int64_t function_181bf8(int64_t a1);
int64_t function_181c10(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_181c40(int64_t a1);
int64_t function_181c55(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_181d09(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_181d7e(int64_t a1);
int64_t function_181d81(int64_t a1, int64_t a2, int32_t a3);
int64_t function_181d96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_181dc2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_181e27(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_181e71(void);
int64_t function_2e91d4();
int64_t function_2e921e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e92d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e92f9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_2e9397(int64_t a1);
int64_t function_2e93d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e93fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e941c(int64_t a1);
int64_t function_2e943c(void);
int64_t function_2e9457(void);
int64_t function_2e9469(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e94a9(void);
int64_t function_2e94b8(void);
int64_t function_2e959f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e9682(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e96cc(int64_t a1);
int64_t function_2e96d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e96ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e97df(void);
int64_t function_3b521d00();
int64_t function_c2f86();
int64_t function_ffffffff8c12d9db();
int64_t function_ffffffffc3a2e7a7();
int64_t function_ffffffffd67f9609();
int64_t function_ffffffffd80df4dc();
int64_t function_ffffffffe8698ce9();
int64_t unknown_1100de5f();
int64_t unknown_241e4020();
int64_t unknown_2d0eeffe();
int64_t unknown_3503eb4();
int64_t unknown_3a8b20ab();
int64_t unknown_3a938aff();
int64_t unknown_4e7d570e();
int64_t unknown_512f3e63();
int64_t unknown_5999daff();
int64_t unknown_619d670f();
int64_t unknown_68e5b7b0();
int64_t unknown_7d02308();
int64_t unknown_8b51029();
int64_t unknown_93319c7();
int64_t unknown_ffffffff80b8d392();
int64_t unknown_ffffffff8b293cdd();
int64_t unknown_ffffffff8fb8de1f();
int64_t unknown_ffffffff97195f59();
int64_t unknown_ffffffffa34f7279();
int64_t unknown_ffffffffb3daa5b5();
int64_t unknown_ffffffffcb62dba3();
int64_t unknown_ffffffffccaf9d15();
int64_t unknown_ffffffffd62ef044();
int64_t unknown_ffffffffd6e1e0f1();
int64_t unknown_ffffffffdb8c7c97();
int64_t unknown_ffffffffe4290c2f();
int64_t unknown_ffffffffe7fd6d55();
int64_t unknown_ffffffffe90ede59();

// Address range: 0x141d13 - 0x141d15
int64_t function_141d13(int64_t a1, int64_t a2, int64_t a3) {
    // 0x141d13
    int64_t v1; // 0x141d13
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x141d1e - 0x141d20
int64_t function_141d1e(void) {
    // 0x141d1e
    return function_141cb6();
}

// Address range: 0x141d28 - 0x141d29
int64_t function_141d28(void) {
    // 0x141d28
    int64_t result; // 0x141d28
    return result;
}

// Address range: 0x141d57 - 0x141d72
int64_t function_141d57(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x141d57
    int64_t v1; // 0x141d57
    uint64_t v2 = v1;
    int64_t result = v1 & -256 | (int64_t)__asm_in(-60); // 0x141d57
    __asm_out((int16_t)a3, (int32_t)result);
    int32_t * v3 = (int32_t *)(a4 + 16); // 0x141d5a
    bool v4; // 0x141d57
    *v3 = (int32_t)v4 - (int32_t)v1 + *v3;
    *(int64_t *)v2 = v2 | a2;
    *(int32_t *)(a5 + 35) = 0x330068f0;
    *(char *)0x205d7070 = *(char *)0x205d7070 + (char)(v2 / 256);
    return result;
}

// Address range: 0x141d91 - 0x141d93
int64_t function_141d91(void) {
    // 0x141d91
    return function_141d28();
}

// Address range: 0x141de3 - 0x141de6
int64_t function_141de3(int64_t a1) {
    // 0x141de3
    int64_t result; // 0x141de3
    return result;
}

// Address range: 0x141df5 - 0x141df6
int64_t function_141df5(int64_t a1) {
    // 0x141df5
    int64_t result; // 0x141df5
    return result;
}

// Address range: 0x141e11 - 0x141e22
int64_t function_141e11(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x141e11
    int64_t v1; // 0x141e11
    char * v2 = (char *)(v1 + 0xcd34357); // 0x141e11
    *v2 = *v2 | (char)a3;
    return unknown_241e4020(a1, a2, a3, a4);
}

// Address range: 0x141e2f - 0x141e30
int64_t function_141e2f(void) {
    // 0x141e2f
    int64_t result; // 0x141e2f
    return result;
}

// Address range: 0x141e38 - 0x141e93
int64_t function_141e38(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    char * v2 = (char *)(a1 + 0x3e01e8ea); // 0x141e38
    char v3 = *v2 + (char)a3; // 0x141e38
    *v2 = v3;
    int64_t v4 = *(int64_t *)(a3 - 0x7585f141) & 0xffffffff; // 0x141e45
    if (v3 != 0) {
        v4 = function_141e2f();
    }
    // 0x141e47
    int64_t v5; // 0x141e38
    int32_t v6 = v5; // 0x141e47
    int32_t v7 = *(int32_t *)&v1 + v6; // 0x141e47
    *(int32_t *)v1 = v7;
    if (v7 != 0) {
        int64_t v8 = v4 & 0xffffffff ^ 0xf201e8af; // 0x141e4d
        return (v8 + 183) % 256 | v8 & 0xffffff00;
    }
    char * v9 = (char *)(v1 + 110); // 0x141e65
    *v9 = *v9 + (char)a4;
    int64_t v10; // 0x141e38
    unsigned char v11 = *(char *)&v10; // 0x141e6d
    *(char *)v10 = v11 / 2 | 128 * v11;
    uint64_t v12 = unknown_ffffffffa34f7279(); // 0x141e73
    char v13 = *(char *)(a4 + 0x4e00564a); // 0x141e78
    char * v14 = (char *)(256 * (int64_t)(v13 | (char)(v12 / 256)) | v12 & -0xff01); // 0x141e7e
    *v14 = *v14 - 1;
    function_c2f86();
    int64_t result = v5 + 8 & 0xffffffff; // 0x141e8c
    *(int32_t *)(a4 - 24) = (int32_t)v1;
    int32_t * v15 = (int32_t *)result; // 0x141e90
    *v15 = *v15 + v6;
    return result;
}

// Address range: 0x141eb5 - 0x141ec3
int64_t function_141eb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x141eb5
    int64_t v1; // 0x141eb5
    return v1 + a3 & 0xffffffff;
}

// Address range: 0x141edd - 0x141ede
int64_t function_141edd(void) {
    // 0x141edd
    int64_t result; // 0x141edd
    return result;
}

// Address range: 0x141ee7 - 0x141f02
int64_t function_141ee7(int64_t a1) {
    int64_t v1 = a1;
    int64_t v2; // 0x141ee7
    int32_t * v3 = (int32_t *)(v2 - 87); // 0x141ee7
    *v3 = *v3 ^ -0xcfe17ba;
    unknown_ffffffff80b8d392();
    while (true) {
        // 0x141ef3
        unknown_2d0eeffe();
        *(int32_t *)v1 = *(int32_t *)&v1 + 1;
    }
}

// Address range: 0x141f09 - 0x141f11
int64_t function_141f09(void) {
    // 0x141f09
    unknown_619d670f();
    return function_141edd();
}

// Address range: 0x181485 - 0x1814b5
int64_t function_181485(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x181485
    int64_t v1; // 0x181485
    int64_t v2 = v1 ^ 17; // 0x181491
    char * v3 = (char *)v2; // 0x181493
    *v3 = *v3 - (char)v2;
    unknown_3a8b20ab();
    int64_t v4 = unknown_3503eb4(); // 0x1814ae
    return 256 * v4 & 0xff00 | v4 & -0xff01;
}

// Address range: 0x18154c - 0x1815b8
int64_t function_18154c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x18154c
    int64_t v1; // 0x18154c
    uint64_t v2 = v1;
    *(int32_t *)(a1 + 127) = 0x646fd25;
    unknown_ffffffffe90ede59();
    int32_t * v3 = (int32_t *)(a2 - 40); // 0x18155d
    uint32_t v4 = *v3; // 0x18155d
    int32_t v5 = a4; // 0x18155d
    uint32_t v6 = v4 + v5; // 0x18155d
    *v3 = v6;
    int32_t v7 = *(int32_t *)(v2 - 24); // 0x181560
    uint64_t v8 = a4 / 256 | a4;
    uint64_t v9 = a4 & 0xffffff00; // 0x181563
    int64_t v10 = v8 % 256 | v9; // 0x181563
    int32_t * v11 = (int32_t *)(v2 + 0x420107f8); // 0x181565
    *v11 = *v11 + (int32_t)v10;
    int32_t * v12 = (int32_t *)(a3 - 119); // 0x181572
    int64_t v13; // 0x18154c
    *v12 = *v12 + (int32_t)(int64_t)&v13;
    __asm_out_133((int16_t)a3, (char)v8);
    int64_t v14 = (a5 & (int64_t)&g1) == 0 ? 4 : -4; // 0x181577
    int64_t v15 = (2 * v10 + 0xe8188800 + (int64_t)((int32_t)a2 - v7 + (int32_t)(v6 < v4)) & 0xffffffff) + v14; // 0x181577
    char v16 = *(char *)(v15 - 111); // 0x181578
    char * v17 = (char *)(2 * v2 - 48 + v15); // 0x18157b
    *v17 = *v17 + (char)(v2 / 256);
    int32_t v18 = *(int32_t *)(256 * (int64_t)((char)(v9 / 256) - v16) | v10 & 0xffff00ff); // 0x181586
    uint64_t v19 = unknown_ffffffffdb8c7c97(v14 + a1, v15, 0x9d9d01e8, v18 ^ v5); // 0x181591
    char * v20 = (char *)v19; // 0x181596
    *v20 = *v20 + (char)v19;
    unsigned char v21 = (char)(v19 / 256); // 0x181598
    unsigned char v22 = *(char *)(v15 + 76) + v21; // 0x181598
    if (v22 < v21 || v22 == 0) {
        unsigned char v23 = *(char *)-0x6468fe1761029439; // 0x18159b
        return 256 * (int64_t)v22 | v19 & -0x10000 | (int64_t)v23;
    }
    int64_t result = unknown_ffffffffb3daa5b5(); // 0x1815af
    char * v24 = (char *)(result + 5); // 0x1815b4
    *v24 = *v24 + (char)result;
    return result;
}

// Address range: 0x1815ec - 0x1815f2
int64_t function_1815ec(int64_t a1) {
    // 0x1815ec
    int64_t v1; // 0x1815ec
    int64_t result = v1 & 0xffffffff; // 0x1815ee
    bool v2; // 0x1815ec
    if (v2) {
        result = function_1815fd(v1 & 0xffffffff, v1, v1);
    }
    // 0x1815f0
    return result;
}

// Address range: 0x1815fd - 0x18165e
int64_t function_1815fd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1815fd
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int64_t v1 = 0x770c5501; // bp-8, 0x1815fe
    int64_t v2 = a3; // 0x181603
    int64_t v3; // 0x1815fd
    uint64_t v4 = v3;
    char v5 = *(char *)(v2 - 42); // 0x181605
    int64_t v6 = 256 * (int64_t)(v5 + (char)(v4 / 256)) | v4 & -0xff01; // 0x181605
    unknown_4e7d570e();
    v2 = v2 & -0xff01 | 256 * v4 & 0xff00;
    while ((int32_t)(v4 & (int64_t)&v1) < 0) {
        // 0x181605
        v4 = v6;
        v5 = *(char *)(v2 - 42);
        v6 = 256 * (int64_t)(v5 + (char)(v4 / 256)) | v4 & -0xff01;
        unknown_4e7d570e();
        v2 = v2 & -0xff01 | 256 * v4 & 0xff00;
    }
    // 0x18161d
    int64_t v7; // 0x1815fd
    int32_t * v8 = (int32_t *)(v7 - 0x36bc4578); // 0x18161d
    *v8 = *v8 + (int32_t)v7;
    int64_t v9 = unknown_ffffffffe4290c2f(); // 0x181629
    uint32_t v10 = (int32_t)v9 >> 31; // 0x18162e
    int64_t v11 = v10; // 0x18162e
    int64_t v12; // 0x1815fd
    uint32_t v13 = *(int32_t *)&v12 & (int32_t)v7; // 0x181636
    float80_t v14; // 0x1815fd
    *(int16_t *)(v6 + v11) = (int16_t)v14;
    int32_t * v15 = (int32_t *)(int64_t)v13; // 0x181640
    uint32_t v16 = *v15; // 0x181640
    uint32_t v17 = v16 + (int32_t)(v9 ^ v7); // 0x181640
    *v15 = v17;
    uint32_t result = *(int32_t *)-0x48fe17c63924c313; // 0x181644
    __asm_out_133((int16_t)v10, (char)result);
    if (*(char *)v11 + (char)(v17 < v16) == (char)(v13 / 256)) {
        // 0x1816a0
        return result;
    }
    int64_t result2 = unknown_ffffffff97195f59(); // 0x181653
    *(int16_t *)(result2 + 0x36b34ba7) = (int16_t)v14;
    return result2;
}

// Address range: 0x181885 - 0x18188f
int64_t function_181885(void) {
    // 0x181885
    unknown_93319c7();
    return 0x7b34fe02;
}

// Address range: 0x1818c8 - 0x1818cd
int64_t function_1818c8(void) {
    // 0x1818c8
    return function_1551930();
}

// Address range: 0x181913 - 0x181931
int64_t function_181913(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x181913
    int64_t v1; // 0x181913
    uint64_t v2 = v1 + a3 / 256; // 0x181913
    __asm_outsd((int16_t)a3, (int32_t)v1);
    *(char *)0x261316ec6d272639 = (char)v2;
    return v2 % 256 | v1 & -256;
}

// Address range: 0x181944 - 0x181945
int64_t function_181944(void) {
    // 0x181944
    int64_t result; // 0x181944
    return result;
}

// Address range: 0x18194d - 0x181956
int64_t function_18194d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18194d
    int64_t result; // 0x18194d
    return result;
}

// Address range: 0x18197c - 0x18197e
int64_t function_18197c(void) {
    // 0x18197c
    return function_181944();
}

// Address range: 0x181982 - 0x181985
int64_t function_181982(int64_t a1) {
    // 0x181982
    int64_t result; // 0x181982
    return result;
}

// Address range: 0x181a41 - 0x181a47
int64_t function_181a41(int64_t a1) {
    // 0x181a41
    int64_t result; // 0x181a41
    return result;
}

// Address range: 0x181a71 - 0x181a73
int64_t function_181a71(int64_t a1) {
    // 0x181a71
    int64_t v1; // 0x181a71
    return __asm_iretd(v1, v1);
}

// Address range: 0x181ac3 - 0x181ac9
int64_t function_181ac3(void) {
    // 0x181ac3
    int64_t v1; // 0x181ac3
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x181af3 - 0x181afa
int64_t function_181af3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x181af3
    int64_t v1; // 0x181af3
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)v1;
    int32_t * v2 = (int32_t *)(4 * result + a3); // 0x181af5
    *v2 = *v2 - (int32_t)a2;
    return result;
}

// Address range: 0x181b42 - 0x181b5b
int64_t function_181b42(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x181b42
    int64_t v1; // 0x181b42
    *(int64_t *)((v1 & 0xffffffff) - 8) = a4;
    bool v2; // 0x181b42
    return function_181b74(a1, (v2 ? -4 : 4) + a2, a3, a4);
}

// Address range: 0x181b6d - 0x181b74
int64_t function_181b6d(void) {
    // 0x181b6d
    int64_t result; // 0x181b6d
    return result;
}

// Address range: 0x181b74 - 0x181b7b
int64_t function_181b74(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x181b74
    int64_t v1; // 0x181b74
    *(int32_t *)a2 = (int32_t)(v1 & v1);
    return v1 & 0xffffffff;
}

// Address range: 0x181b7e - 0x181b7f
int64_t function_181b7e(void) {
    // 0x181b7e
    int64_t result; // 0x181b7e
    return result;
}

// Address range: 0x181b9a - 0x181bbd
int64_t function_181b9a(int64_t a1) {
    int64_t v1 = unknown_ffffffffcb62dba3(); // 0x181b9a
    int64_t v2 = v1 & -121; // 0x181ba4
    int64_t v3; // 0x181b9a
    *(int32_t *)a1 = (int32_t)v3 - 24;
    int32_t * v4 = (int32_t *)v2; // 0x181bac
    *v4 = *v4 + (int32_t)v2;
    return v1 & -256 | (int64_t)__asm_in(-89);
}

// Address range: 0x181bc9 - 0x181bd1
int64_t function_181bc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x181bc9
    int64_t result; // 0x181bc9
    unsigned char v1 = llvm_ctpop_i8((char)result + (char)a2); // 0x181bc9
    *(char *)a4 = (char)(v1 % 2 != 0);
    return result;
}

// Address range: 0x181bda - 0x181bdb
int64_t function_181bda(int64_t a1) {
    // 0x181bda
    int64_t result; // 0x181bda
    return result;
}

// Address range: 0x181bf1 - 0x181bf3
int64_t function_181bf1(void) {
    // 0x181bf1
    int64_t v1; // 0x181bf1
    return function_181c10(v1, v1, v1, v1, (int64_t)&g4);
}

// Address range: 0x181bf8 - 0x181bf9
int64_t function_181bf8(int64_t a1) {
    // 0x181bf8
    int64_t result; // 0x181bf8
    return result;
}

// Address range: 0x181c10 - 0x181c30
int64_t function_181c10(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x181c10
    int64_t v1; // 0x181c10
    uint64_t v2 = v1;
    int32_t v3 = v2;
    *(int32_t *)v2 = 2 * v3 | (int32_t)(v3 < 0);
    unknown_ffffffffd6e1e0f1();
    int64_t v4 = unknown_ffffffff8fb8de1f(); // 0x181c18
    unsigned char v5 = (char)(a4 / 256); // 0x181c1e
    unsigned char v6 = (char)a3; // 0x181c1e
    char v7 = v5 - v6; // 0x181c1e
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x181c1e
    *(char *)0x44b65b2d = *(char *)0x44b65b2d + (char)(v2 / 256);
    return (v4 & 0xffff00ff | 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v5 < v6) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v5 % 16 - v6 % 16 > 15) | 4 * (int64_t)(v8 % 2 == 0)) & 0xfffffd00) ^ 0x719082b;
}

// Address range: 0x181c40 - 0x181c4d
int64_t function_181c40(int64_t a1) {
    // 0x181c40
    return function_3b521d00();
}

// Address range: 0x181c55 - 0x181ce9
int64_t function_181c55(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x181c55
    int64_t v1; // 0x181c55
    uint64_t v2 = v1;
    if ((char)v2 >= 171) {
        // 0x181c9f
        return v2 & 0xffffffff;
    }
    unsigned char v3 = *(char *)(v1 + v2 % 256); // 0x181c65
    *(char *)v1 = 0;
    if (v3 >= 225) {
        // 0x181cdf
        return function_ffffffffd80df4dc();
    }
    int64_t result = v2 & 0xffffff00 | (int64_t)(v3 + 31); // 0x181c6f
    char * v4 = (char *)(result - 34); // 0x181c77
    *v4 = *v4 + (char)a4;
    int32_t * v5 = (int32_t *)(a1 + (int64_t)&g2); // 0x181c7a
    *v5 = *v5 ^ (int32_t)v1;
    *(char *)(v1 - 113) = (char)((int32_t)v2 / 256);
    return result;
}

// Address range: 0x181d09 - 0x181d76
int64_t function_181d09(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x181d09
    bool v1; // 0x181d09
    if (v1) {
        // 0x181d75
        return a2 & 0xffffffff;
    }
    // 0x181d0b
    int64_t result; // 0x181d09
    return result;
}

// Address range: 0x181d7e - 0x181d7f
int64_t function_181d7e(int64_t a1) {
    // 0x181d7e
    int64_t result; // 0x181d7e
    return result;
}

// Address range: 0x181d81 - 0x181d95
int64_t function_181d81(int64_t a1, int64_t a2, int32_t a3) {
    // 0x181d81
    int64_t v1; // 0x181d81
    int64_t result = v1 & -256 | (int64_t)__asm_in_136((int16_t)a3); // 0x181d90
    char * v2 = (char *)(result + 98); // 0x181d92
    *v2 = -1 - *v2;
    return result;
}

// Address range: 0x181d96 - 0x181dc2
int64_t function_181d96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x181d96
    int64_t v1; // 0x181d96
    *(char *)0xf7020a4 = *(char *)0xf7020a4 + (char)(v1 / 256);
    *(int32_t *)a4 = 2 * (int32_t)v1;
    unknown_68e5b7b0();
    return a5 & 0xd6d3e8fc;
}

// Address range: 0x181dc2 - 0x181df3
int64_t function_181dc2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x181dc2
    int64_t v1; // 0x181dc2
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 + 0x37808901); // 0x181dc3
    bool v4; // 0x181dc2
    *v3 = (int32_t)v4 + (int32_t)v1 + *v3;
    int64_t v5; // 0x181dc2
    char v6 = *(char *)&v5; // 0x181dc9
    int64_t v7 = v5; // 0x181dc9
    char v8 = *(char *)0x931bd5; // 0x181dce
    int64_t v9 = 256 * (int64_t)(v8 & (char)(v2 / 256)) | v2 & -0xff01; // 0x181dce
    float80_t v10; // 0x181dc2
    *(int16_t *)(a3 - 0x1a0e3fc6) = (int16_t)v10;
    *(int32_t *)a1 = (int32_t)(v7 & 0xffff0000 | (int64_t)((256 * (int16_t)v7 >> 8) * (int16_t)v6));
    *(int64_t *)0x1bc45f72 = (int64_t)(*(int32_t *)v9 | 0x59013d00);
    int64_t result = a3 & -256 | (int64_t)*(char *)(v9 + a3 % 256); // 0x181dee
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x181e27 - 0x181e39
int64_t function_181e27(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x181e27
    int64_t v1; // 0x181e27
    int32_t * v2 = (int32_t *)(v1 - 126); // 0x181e27
    bool v3; // 0x181e27
    *v2 = *v2 + (int32_t)a3 + (int32_t)v3;
    __asm_iretd(a1, a2);
    char v4 = *(char *)-0x86e2aca; // 0x181e2f
    *(char *)-0x86e2aca = v4 + (char)((uint64_t)v1 / 256);
    return a2 & 0xffffffff;
}

// Address range: 0x181e71 - 0x181e77
int64_t function_181e71(void) {
    // 0x181e71
    int64_t result; // 0x181e71
    return result;
}

// Address range: 0x2e921e - 0x2e9237
int64_t function_2e921e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e921e
    int64_t v1; // 0x2e921e
    int32_t * v2 = (int32_t *)(v1 - 51); // 0x2e921e
    *v2 = *v2 + (int32_t)a3;
    int32_t * v3 = (int32_t *)(a3 + 0x684a4bdf); // 0x2e9226
    *v3 = *v3 + (int32_t)v1;
    char * v4 = (char *)(a2 - 0x293f103e); // 0x2e922c
    char v5 = *v4 + (char)v1; // 0x2e922c
    *v4 = v5;
    __asm_int(-36);
    int64_t result; // 0x2e921e
    if (v5 == 0) {
        result = function_2e91d4();
    }
    // 0x2e9236
    return result;
}

// Address range: 0x2e92d7 - 0x2e92e2
int64_t function_2e92d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x57c16ed0); // 0x2e92d7
    *v1 = *v1 + (int32_t)a4;
    return function_ffffffffe8698ce9();
}

// Address range: 0x2e92f9 - 0x2e9394
int64_t function_2e92f9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a3;
    unknown_3a938aff();
    bool v2; // 0x2e92f9
    int64_t v3 = v2 ? -4 : 4; // 0x2e930c
    int64_t v4 = v3 + a1; // 0x2e930c
    int64_t v5 = v3 + a2; // 0x2e930c
    __asm_iretd(v4, v5);
    *(int32_t *)v4 = __asm_insd((int16_t)a3);
    uint64_t v6 = unknown_ffffffffccaf9d15(); // 0x2e930f
    *(char *)a3 = *(char *)&v1 | (char)(v6 / 256);
    int64_t v7; // 0x2e92f9
    char * v8 = (char *)(v6 + 8 * v7); // 0x2e9316
    *v8 = *v8 | (char)(a3 / 256);
    int32_t * v9 = (int32_t *)v6; // 0x2e9319
    int32_t v10 = *v9; // 0x2e9319
    int32_t v11 = v6; // 0x2e9319
    int32_t v12 = v10 + v11; // 0x2e9319
    *v9 = v12;
    uint32_t result = 0x10000 * v11 >> 16; // 0x2e931b
    if (v12 < 0 != ((v12 ^ v10) & (v12 ^ v11)) < 0) {
        // 0x2e9359
        __asm_out_133((int16_t)v1, (char)result);
        return result;
    }
    // 0x2e931f
    unknown_8b51029(a6);
    uint32_t v13 = (int32_t)a6; // 0x2e9328
    uint32_t v14 = *(int32_t *)&v1; // 0x2e9328
    uint32_t v15 = v13 - v14; // 0x2e9328
    int64_t v16 = v15; // 0x2e9328
    if (v14 <= v13) {
        char * v17 = (char *)(v16 - 0x4f9536fb); // 0x2e9334
        *v17 = *v17 & (char)result;
        int32_t * v18 = (int32_t *)(v7 - 0x3e01d42f); // 0x2e933c
        *v18 = *v18 + (int32_t)v7;
        uint32_t v19 = result % 32; // 0x2e9342
        if (v19 != 0) {
            int32_t * v20 = (int32_t *)(v16 + 0x3601e844); // 0x2e9342
            *v20 = *v20 << v19;
        }
        __asm_hlt(v15);
        *(int32_t *)v16 = *(int32_t *)v5;
        return unknown_ffffffffe7fd6d55(v3 + v16, v5 + v3);
    }
    int64_t v21 = unknown_512f3e63(); // 0x2e935d
    int32_t * v22 = (int32_t *)v21; // 0x2e9362
    *v22 = *v22 + (int32_t)v7;
    int32_t v23 = 0x10000 * (int32_t)v21;
    v1 = v23 >> 31;
    char * v24 = (char *)(v16 - 0x4161ca6f); // 0x2e9366
    *v24 = *v24 + (char)v7;
    uint32_t v25 = v23 >> 16 >> result % 32;
    int64_t result2 = v25;
    int32_t * v26 = (int32_t *)result2; // 0x2e9380
    *v26 = *v26 + (int32_t)v1;
    char * v27 = (char *)(result2 + 83); // 0x2e9382
    *v27 = *v27 | (char)v25;
    *v26 = (int32_t)a5;
    int32_t * v28 = (int32_t *)v1; // 0x2e938f
    *v28 = *v28 + result;
    return result2;
}

// Address range: 0x2e9397 - 0x2e9398
int64_t function_2e9397(int64_t a1) {
    // 0x2e9397
    int64_t result; // 0x2e9397
    return result;
}

// Address range: 0x2e93d7 - 0x2e93ed
int64_t function_2e93d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e93d7
    unknown_ffffffff8b293cdd(a1, a2, a3, a4);
    return unknown_1100de5f();
}

// Address range: 0x2e93fb - 0x2e9411
int64_t function_2e93fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e93fb
    int64_t v1; // 0x2e93fb
    int64_t v2 = v1;
    int64_t v3 = a2;
    __asm_outsb((int16_t)a3, (char)a2);
    uint32_t v4 = (int32_t)a4 % 32; // 0x2e9403
    int64_t v5 = v4 == 0 ? v2 : (int64_t)((int32_t)v2 >> v4);
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a2;
    *(char *)v3 = *(char *)&v3 & (char)v5;
    return v5 & -0xff01;
}

// Address range: 0x2e941c - 0x2e9426
int64_t function_2e941c(int64_t a1) {
    // 0x2e941c
    int64_t result; // 0x2e941c
    return result;
}

// Address range: 0x2e943c - 0x2e9441
int64_t function_2e943c(void) {
    // 0x2e943c
    return function_ffffffff8c12d9db();
}

// Address range: 0x2e9457 - 0x2e945e
int64_t function_2e9457(void) {
    // 0x2e9457
    return unknown_1100de5f();
}

// Address range: 0x2e9469 - 0x2e947e
int64_t function_2e9469(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 9); // 0x2e9469
    *v1 = *v1 & (int32_t)a3;
    int64_t result = a4 & 0xffffffff; // 0x2e946c
    *(int32_t *)a1 = (int32_t)a4;
    int64_t v2; // 0x2e9469
    *(char *)result = *(char *)&v2 + (char)a4;
    int64_t v3; // 0x2e9469
    *(char *)0x3d2e947b = *(char *)0x3d2e947b + (char)(v3 / 256);
    int64_t v4; // 0x2e9469
    *(int32_t *)a3 = *(int32_t *)&v4 + (int32_t)v3;
    return result;
}

// Address range: 0x2e94a9 - 0x2e94ae
int64_t function_2e94a9(void) {
    // 0x2e94a9
    return function_ffffffffc3a2e7a7();
}

// Address range: 0x2e94b8 - 0x2e94bd
int64_t function_2e94b8(void) {
    // 0x2e94b8
    return function_ffffffffd67f9609();
}

// Address range: 0x2e959f - 0x2e9679
int64_t function_2e959f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x2e959f
    int64_t result = v2 & -0xff01 | (int64_t)&g3; // 0x2e959f
    int32_t v3 = result; // 0x2e95a1
    *(int32_t *)0x443a694f1601e86f = v3;
    char * v4 = (char *)(a1 - 0x4d06bb31); // 0x2e961d
    *v4 = *v4 | (char)result;
    char v5 = *(char *)(v1 - 24); // 0x2e9623
    uint32_t v6 = (int32_t)v1;
    uint32_t v7 = v6 + (int32_t)v2; // 0x2e9626
    *(int32_t *)v1 = v7;
    if (v7 < v6 || v7 == 0) {
        int64_t v8 = 0x100000000 * result >> 32; // 0x2e962d
        int64_t v9 = v1;
        *(int32_t *)v9 = *(int32_t *)&v1 + (int32_t)v9;
        return v8 * v8 & 0xffffffff;
    }
    uint32_t v10 = v3 >> 31; // 0x2e95a1
    int32_t * v11 = (int32_t *)result; // 0x2e95fe
    *v11 = *v11 | 23;
    int64_t v12; // 0x2e959f
    char v13 = *(char *)&v12; // 0x2e9601
    __asm_outsb(256 * (int16_t)(v5 + (char)(v10 / 256)) | (int16_t)v10 % 256, v13);
    return result;
}

// Address range: 0x2e9682 - 0x2e9686
int64_t function_2e9682(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e9682
    int64_t v1; // 0x2e9682
    return function_2e96d4(a1, a2, a3 & -256, v1);
}

// Address range: 0x2e96cc - 0x2e96cf
int64_t function_2e96cc(int64_t a1) {
    // 0x2e96cc
    int64_t result; // 0x2e96cc
    return result;
}

// Address range: 0x2e96d4 - 0x2e96e5
int64_t function_2e96d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e96d4
    int64_t result; // 0x2e96d4
    int32_t * v1 = (int32_t *)(result - 78); // 0x2e96d4
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2e96ec - 0x2e9743
int64_t function_2e96ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x936fe18); // 0x2e96ef
    int32_t v2 = *v1 + 1; // 0x2e96ef
    *v1 = v2;
    int64_t v3; // 0x2e96ec
    unknown_5999daff(v3 & 0xffffffff);
    if (v2 == 0) {
        // 0x2e973b
        __asm_in(5);
        return unknown_ffffffffd62ef044();
    }
    int64_t result = 0x10000 * (int32_t)unknown_7d02308() >> 16; // 0x2e9709
    char * v4 = (char *)result; // 0x2e970c
    unsigned char v5 = *v4; // 0x2e970c
    *v4 = v5 / 128 | 2 * v5;
    return result;
}

// Address range: 0x2e97df - 0x2e97e4
int64_t function_2e97df(void) {
    // 0x2e97df
    int64_t v1; // 0x2e97df
    uint64_t result = v1;
    *(char *)result = (char)(result / 256) + (char)result;
    return result;
}
