/*
 * Targeted RetDec C for native executable gap queue batch 287.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x190285-0x190485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x190485-0x190685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x190685-0x190885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a8175-0x2a8375 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a8375-0x2a8575 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a8575-0x2a8775 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a8775-0x2a8975 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a8975-0x2a8b75 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_190285(void);
int64_t function_1902f1(void);
int64_t function_190321(int64_t a1, int64_t a2);
int64_t function_19033e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_190340(void);
int64_t function_19038e(void);
int64_t function_1903b0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1904c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1904e8(void);
int64_t function_190519(void);
int64_t function_190527(void);
int64_t function_190558(void);
int64_t function_190562(void);
int64_t function_190564(void);
int64_t function_19056e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1906d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_190819(void);
int64_t function_19083b(void);
int64_t function_19083c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_190869(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a8175(void);
int64_t function_2a819f(void);
int64_t function_2a81a3(void);
int64_t function_2a81ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a81e4(int64_t a1);
int64_t function_2a8259(void);
int64_t function_2a8266(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a82cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a8368(void);
int64_t function_2a8369(int64_t a1);
int64_t function_2a8385(void);
int64_t function_2a841c(int64_t a1);
int64_t function_2a84cc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a84e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a84f8(int64_t a1);
int64_t function_2a8506(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a860a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a8626(void);
int64_t function_2a866e(int64_t a1);
int64_t function_2a86e9(int64_t a1, int64_t a2);
int64_t function_2a87ad(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2a87c4(int64_t a1);
int64_t function_2a87d8(void);
int64_t function_2a87f1(void);
int64_t function_2a8801(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a88d1(void);
int64_t function_2a88f3(void);
int64_t function_2a8909(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2a89b1(int64_t a1);
int64_t function_2a89ce(int64_t a1);
int64_t function_2a8a27(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a8a63(void);
int64_t function_2a8b42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_72742f7b();
int64_t function_7d583c8();
int64_t function_caf2a();
int64_t function_ffffffff83a0835c();
int64_t function_ffffffffe8f70aac();
int64_t unknown_10897fc6();
int64_t unknown_10f76773();
int64_t unknown_3a70a7a9();
int64_t unknown_3aacec27();
int64_t unknown_3d2c6d6b();
int64_t unknown_75257de2();
int64_t unknown_772bc5b6();
int64_t unknown_ffffffff860f66c9();
int64_t unknown_ffffffff862c6a08();
int64_t unknown_ffffffffc81eecdb();
int64_t unknown_ffffffffe82e9ec8();
int64_t unknown_ffffffffea33766a();

// Address range: 0x190285 - 0x190286
int64_t function_190285(void) {
    // 0x190285
    int64_t result; // 0x190285
    return result;
}

// Address range: 0x1902f1 - 0x1902f2
int64_t function_1902f1(void) {
    // 0x1902f1
    int64_t result; // 0x1902f1
    return result;
}

// Address range: 0x190321 - 0x19033d
int64_t function_190321(int64_t a1, int64_t a2) {
    int64_t v1 = unknown_3aacec27() & 0xffffffff; // 0x190326
    int64_t v2; // 0x190321
    *(int32_t *)(__asm_wait(v1, a2, v2, v2) & 0xffffffff) = *(int32_t *)v1;
    if (*(int32_t *)0x1101e8b9721bc66d < -0x65792ff) {
        function_1902f1();
    }
    // 0x19033b
    return function_190340();
}

// Address range: 0x19033e - 0x190340
int64_t function_19033e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19033e
    int64_t result; // 0x19033e
    return result;
}

// Address range: 0x190340 - 0x190341
int64_t function_190340(void) {
    // 0x190340
    int64_t result; // 0x190340
    return result;
}

// Address range: 0x19038e - 0x19038f
int64_t function_19038e(void) {
    // 0x19038e
    int64_t result; // 0x19038e
    return result;
}

// Address range: 0x1903b0 - 0x190476
int64_t function_1903b0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1903b0
    int64_t v1; // 0x1903b0
    *(char *)a1 = (char)v1;
    bool v2; // 0x1903b0
    __asm_int1((v2 ? -1 : 1) + a1);
    char * v3 = (char *)(a3 + 57); // 0x1903bf
    char v4 = a4 / 256; // 0x1903bf
    char v5 = *v3 + v4; // 0x1903bf
    *v3 = v5;
    if (v5 >= 0) {
        // 0x190443
        return (0x10000 * (int32_t)a4 >> 16) + 0xc74a3d;
    }
    int64_t result = a4 & 0xffffff17 | 232; // 0x1903c5
    int32_t * v6 = (int32_t *)(a3 - 111 + v1); // 0x1903c7
    *v6 = *v6 + (int32_t)v1;
    char * v7 = (char *)result; // 0x1903cb
    *v7 = *v7 + v4;
    return result;
}

// Address range: 0x1904c2 - 0x1904e4
int64_t function_1904c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1904c2
    unknown_ffffffffe82e9ec8();
    int32_t * v1 = (int32_t *)(a4 + 0x3b6b44a7); // 0x1904cb
    int64_t v2; // 0x1904c2
    *v1 = *v1 + (int32_t)v2;
    uint64_t result = unknown_ffffffffc81eecdb((int32_t)v2 + (int32_t)a1); // 0x1904d5
    char * v3 = (char *)(a3 + 0x1e857f8); // 0x1904dc
    *v3 = *v3 ^ (char)(result / 256);
    return result;
}

// Address range: 0x1904e8 - 0x1904e9
int64_t function_1904e8(void) {
    // 0x1904e8
    int64_t result; // 0x1904e8
    return result;
}

// Address range: 0x190519 - 0x19051c
int64_t function_190519(void) {
    // 0x190519
    int64_t result; // 0x190519
    return result;
}

// Address range: 0x190527 - 0x19052c
int64_t function_190527(void) {
    // 0x190527
    return function_ffffffffe8f70aac();
}

// Address range: 0x190558 - 0x190559
int64_t function_190558(void) {
    // 0x190558
    int64_t result; // 0x190558
    return result;
}

// Address range: 0x190562 - 0x190564
int64_t function_190562(void) {
    // 0x190562
    return function_1904e8();
}

// Address range: 0x190564 - 0x19056e
int64_t function_190564(void) {
    // 0x190564
    unknown_ffffffffea33766a();
    return function_72742f7b();
}

// Address range: 0x19056e - 0x1906d9
int64_t function_19056e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19056e
    int64_t v1; // 0x19056e
    bool v2; // 0x19056e
    if (!v2) {
        v1 = function_190558();
    }
    int32_t * v3 = (int32_t *)(a2 + 38); // 0x190570
    *v3 = *v3 + (int32_t)v1;
    char * v4 = (char *)(2 * v1 & 0xfffffffe); // 0x190575
    *v4 = *v4 + 105;
    int64_t v5; // 0x19056e
    char * v6 = (char *)(v5 + 78); // 0x190578
    *v6 = *v6 / 64;
    return function_caf2a(a1);
}

// Address range: 0x1906d9 - 0x190818
int64_t function_1906d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1906d9
    int64_t v1; // bp-48, 0x1906d9
    int64_t v2 = (int64_t)&v1; // 0x190750
    int64_t v3 = *(int64_t *)(v2 + 40); // 0x19075f
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x190763
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x190766
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 + 24); // 0x190775
    int64_t v7 = *v6; // 0x190775
    v1 = v7;
    int64_t v8 = v2 + 8; // 0x190790
    int64_t * v9 = (int64_t *)v8; // 0x1907ba
    *v9 = v3;
    *v4 = 0x4a3e89d1;
    *v5 = v7;
    *v6 = *v4;
    *v4 = v8;
    int64_t v10 = *v9; // 0x1907fa
    v1 = v10;
    *v4 = v10;
    return function_caf2a(a1);
}

// Address range: 0x190819 - 0x19081b
int64_t function_190819(void) {
    // 0x190819
    int64_t v1; // 0x190819
    return v1 & 0xffffffff;
}

// Address range: 0x19083b - 0x19083c
int64_t function_19083b(void) {
    // 0x19083b
    int64_t result; // 0x19083b
    return result;
}

// Address range: 0x19083c - 0x190840
int64_t function_19083c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x19083c
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x19083c
    return result;
}

// Address range: 0x190869 - 0x190870
int64_t function_190869(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x190869
    int64_t v1; // 0x190869
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(a4 - 127); // 0x19086b
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x2a8175 - 0x2a817b
int64_t function_2a8175(void) {
    // 0x2a8175
    int64_t v1; // 0x2a8175
    return v1 - 0x1c0179fe;
}

// Address range: 0x2a819f - 0x2a81a1
int64_t function_2a819f(void) {
    // 0x2a819f
    int64_t v1; // 0x2a819f
    return function_2a81ad(v1, v1, v1, v1);
}

// Address range: 0x2a81a3 - 0x2a81ad
int64_t function_2a81a3(void) {
    // 0x2a81a3
    int64_t v1; // 0x2a81a3
    int32_t * v2 = (int32_t *)(v1 + 1 + 8 * v1); // 0x2a81a8
    int32_t v3 = v1; // 0x2a81a8
    *v2 = *v2 | v3;
    return 0x10000 * v3 >> 16;
}

// Address range: 0x2a81ad - 0x2a81d0
int64_t function_2a81ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t result = __asm_wait(a1, a2, a3, a4); // 0x2a81ad
    char * v2 = (char *)(result + 0x5c01c6d); // 0x2a81ae
    char v3 = *v2; // 0x2a81ae
    char v4 = result; // 0x2a81ae
    char v5 = v3 + v4; // 0x2a81ae
    *v2 = v5;
    if (v5 < 0 == ((v5 ^ v3) & (v5 ^ v4)) < 0) {
        // 0x2a81b6
        return result;
    }
    // 0x2a81b8
    int64_t v6; // 0x2a81ad
    int32_t * v7 = (int32_t *)(v6 + 0x4bdae87e); // 0x2a81b8
    int64_t v8; // 0x2a81ad
    *v7 = *v7 + (int32_t)v8;
    *(char *)a1 = v4;
    bool v9; // 0x2a81ad
    int64_t v10 = (v9 ? -1 : 1) + a1; // 0x2a81bf
    *(char *)v1 = *(char *)&v1 | (char)unknown_10897fc6(v10);
    int64_t result2 = unknown_ffffffff862c6a08(); // 0x2a81c9
    *(int32_t *)v6 = *(int32_t *)&v6 - (int32_t)v10;
    return result2;
}

// Address range: 0x2a81e4 - 0x2a81e7
int64_t function_2a81e4(int64_t a1) {
    // 0x2a81e4
    int64_t result; // 0x2a81e4
    return result;
}

// Address range: 0x2a8259 - 0x2a825a
int64_t function_2a8259(void) {
    // 0x2a8259
    int64_t result; // 0x2a8259
    return result;
}

// Address range: 0x2a8266 - 0x2a8271
int64_t function_2a8266(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // bp-8, 0x2a8266
    int64_t v2; // 0x2a8266
    *(int32_t *)(v2 + 5) = (int32_t)(int64_t)&v1;
    if (a4 == 0) {
        function_2a8259();
    }
    // 0x2a826c
    return function_ffffffff83a0835c();
}

// Address range: 0x2a82cb - 0x2a82f5
int64_t function_2a82cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x2a82cc
    if (v1 != 0) {
        int64_t v2; // 0x2a82cb
        char * v3 = (char *)(v2 - 0x7dfe17fa); // 0x2a82cc
        *v3 = *v3 >> v1;
    }
    uint32_t v4 = *(int32_t *)(a4 - 0x6ef81c1a) + (int32_t)a3; // 0x2a82d5
    int64_t v5 = v4; // 0x2a82d5
    char * v6 = (char *)(v5 + 0x5701e81a); // 0x2a82db
    *v6 = *v6 + (char)(v4 / 256);
    __asm_wait(a1, a2, v5, a4);
    *(int32_t *)a1 = __asm_insd((int16_t)v4);
    return function_7d583c8();
}

// Address range: 0x2a8368 - 0x2a8369
int64_t function_2a8368(void) {
    // 0x2a8368
    int64_t result; // 0x2a8368
    return result;
}

// Address range: 0x2a8369 - 0x2a836e
int64_t function_2a8369(int64_t a1) {
    // 0x2a8369
    return __asm_in((char)a1);
}

// Address range: 0x2a8385 - 0x2a8388
int64_t function_2a8385(void) {
    // 0x2a8385
    int64_t result; // 0x2a8385
    return result;
}

// Address range: 0x2a841c - 0x2a841d
int64_t function_2a841c(int64_t a1) {
    // 0x2a841c
    int64_t result; // 0x2a841c
    return result;
}

// Address range: 0x2a84cc - 0x2a84e5
int64_t function_2a84cc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a84cc
    int64_t v1; // 0x2a84cc
    *(char *)-0x1b26e3969cfe1761 = (char)__asm_wait(a1, a2, a3, v1);
    __asm_hlt();
    unknown_75257de2();
    int64_t v2; // 0x2a84cc
    return (int64_t)&v2;
}

// Address range: 0x2a84e6 - 0x2a84f7
int64_t function_2a84e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a84e6
    *(char *)a4 = (char)a4;
    int64_t result; // 0x2a84e6
    return result;
}

// Address range: 0x2a84f8 - 0x2a84fe
int64_t function_2a84f8(int64_t a1) {
    // 0x2a84f8
    int64_t result; // 0x2a84f8
    return result;
}

// Address range: 0x2a8506 - 0x2a858e
int64_t function_2a8506(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a8506
    int64_t v1; // 0x2a8506
    int32_t * v2 = (int32_t *)(v1 + 0x50ec80a); // 0x2a8575
    *v2 = *v2 + (int32_t)v1;
    if ((char)v1 == -(char)v1) {
        // 0x2a8580
        return a4 & 0xffffffff;
    }
    // 0x2a8565
    unknown_3d2c6d6b();
    return unknown_10f76773();
}

// Address range: 0x2a860a - 0x2a8613
int64_t function_2a860a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a860a
    int64_t result; // 0x2a860a
    int32_t * v1 = (int32_t *)(result - 0x316d777c); // 0x2a860a
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2a8626 - 0x2a8629
int64_t function_2a8626(void) {
    // 0x2a8626
    int64_t result; // 0x2a8626
    return result;
}

// Address range: 0x2a866e - 0x2a8671
int64_t function_2a866e(int64_t a1) {
    // 0x2a866e
    int64_t result; // 0x2a866e
    return result;
}

// Address range: 0x2a86e9 - 0x2a8782
int64_t function_2a86e9(int64_t a1, int64_t a2) {
    int64_t v1 = __asm_hlt(); // 0x2a86e9
    *(char *)-0x9aefe179e6bfb7e = (char)v1;
    int64_t result = (v1 + 88) % 256 | v1 & -256; // 0x2a8773
    int32_t * v2 = (int32_t *)(result + 0x637db5bf); // 0x2a8779
    int64_t v3; // 0x2a86e9
    *v2 = *v2 + (int32_t)v3;
    return result;
}

// Address range: 0x2a87ad - 0x2a87ba
int64_t function_2a87ad(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2a87ad
    int64_t v1; // 0x2a87ad
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 + 0x3484dfd9 + 2 * v1); // 0x2a87af
    *v3 = *v3 + (int32_t)v1;
    bool v4; // 0x2a87ad
    return (v2 + a4 / 256 + (int64_t)v4) % 256 | v2 & -256;
}

// Address range: 0x2a87c4 - 0x2a87d2
int64_t function_2a87c4(int64_t a1) {
    // 0x2a87c4
    int64_t v1; // 0x2a87c4
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x2a87d8 - 0x2a87d9
int64_t function_2a87d8(void) {
    // 0x2a87d8
    int64_t result; // 0x2a87d8
    return result;
}

// Address range: 0x2a87f1 - 0x2a87f2
int64_t function_2a87f1(void) {
    // 0x2a87f1
    int64_t result; // 0x2a87f1
    return result;
}

// Address range: 0x2a8801 - 0x2a88b5
int64_t function_2a8801(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a8801
    int64_t v1; // 0x2a8801
    uint64_t v2 = v1;
    uint32_t v3 = *(int32_t *)(a4 - 0x4603c5dd) & (int32_t)a3; // 0x2a8801
    int64_t v4 = v3; // 0x2a8801
    *(char *)a1 = (char)v1;
    int64_t v5 = a1 + 1; // 0x2a8812
    uint32_t v6 = (int32_t)v1; // 0x2a8815
    uint32_t v7 = (int32_t)v1 + v6; // 0x2a8815
    uint32_t v8 = v7 + 73; // 0x2a8817
    int32_t * v9 = (int32_t *)v5; // 0x2a881a
    *v9 = v8 + (int32_t)(v7 < v6) + *v9;
    char * v10 = (char *)(v4 + 0x188c957); // 0x2a881c
    char v11 = *v10 + (char)a4; // 0x2a881c
    *v10 = v11;
    int64_t v12 = (int64_t)*(int32_t *)0x355c2f20bc013d2a; // 0x2a882e
    if (v11 >= 0) {
        v12 = function_2a87d8();
    }
    char v13 = *(char *)(v12 - 0x104c6ce); // 0x2a8830
    uint32_t v14 = *(int32_t *)-0x4b3677bd ^ (int32_t)v5; // 0x2a883b
    int32_t * v15 = (int32_t *)(int64_t)v8; // 0x2a8842
    int32_t v16 = *v15; // 0x2a8842
    __asm_outsd((int16_t)(v4 & 0xff00 | (int64_t)(-1 - v13 + (char)v3)), v16);
    *(char *)(int64_t)v14 = (char)v12;
    int64_t v17 = v12; // 0x2a8844
    if (v14 != 0) {
        v17 = function_2a87f1();
    }
    // 0x2a8846
    if ((256 * v1 + a4 & 0xff00 || a4 & -0xff01) == 1) {
        char v18 = (char)v17 | 84; // 0x2a884b
        int64_t result = v17 & -0x10000 | (int64_t)v18 | 0x8300; // 0x2a884b
        if (v18 >= 0) {
            // 0x2a8869
            *(int32_t *)-0x494cb043 = *(int32_t *)-0x494cb043 + (int32_t)a5;
            return result;
        }
        int32_t * v19 = (int32_t *)a5; // 0x2a8850
        int64_t v20; // 0x2a8801
        *v19 = *v19 | (int32_t)(int64_t)&v20;
        return result;
    }
    uint32_t v21 = (int32_t)v17; // 0x2a885d
    if (v21 <= 0x4680001) {
        // 0x2a885f
        return a5 & 0xffffffff;
    }
    int64_t v22 = (v2 / 256 + v2) % 256 | v2 & -256; // 0x2a880f
    char v23 = v21 < 0x2f910317 | v21 - 0x2f910317 < (v21 < 0x2f910317 ? 0x5e80014 : 0x5e80013) ? 57 : 56; // 0x2a888f
    int32_t * v24 = (int32_t *)(v22 + 121); // 0x2a8895
    uint32_t v25 = *v24; // 0x2a8895
    uint32_t v26 = v14 + 1 + v25; // 0x2a8895
    *v24 = v26;
    __asm_out(-92, v23 + (char)*v15);
    int32_t * v27 = (int32_t *)(v22 - 0x5d831900); // 0x2a889b
    *v27 = v7 + 77 + *v27 + (int32_t)(v26 < v25);
    int32_t * v28; // 0x2a8801
    unknown_3a70a7a9((int64_t)v28, v1);
    return unknown_772bc5b6();
}

// Address range: 0x2a88d1 - 0x2a88d2
int64_t function_2a88d1(void) {
    // 0x2a88d1
    int64_t result; // 0x2a88d1
    return result;
}

// Address range: 0x2a88f3 - 0x2a88f4
int64_t function_2a88f3(void) {
    // 0x2a88f3
    int64_t result; // 0x2a88f3
    return result;
}

// Address range: 0x2a8909 - 0x2a895b
int64_t function_2a8909(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2a8909
    int64_t result; // 0x2a8909
    int32_t * v1 = (int32_t *)(a2 - 0x3f55f95); // 0x2a890b
    int32_t v2 = *v1; // 0x2a890b
    int64_t v3; // 0x2a8909
    int32_t v4 = v3; // 0x2a890b
    int32_t v5 = v2 + v4; // 0x2a890b
    *v1 = v5;
    if (((v5 ^ v2) & (v5 ^ v4)) >= 0) {
        // 0x2a8913
        return result;
    }
    // 0x2a8934
    *(int32_t *)-0x8da7389 = *(int32_t *)-0x8da7389 + (int32_t)v3;
    __asm_in_133((int16_t)a3);
    int64_t v6 = __asm_hlt(); // 0x2a893e
    *(int32_t *)v6 = (int32_t)v6;
    __asm_wait(a1, a2, a3, v3);
    int64_t v7; // 0x2a8909
    int64_t result2 = (int64_t)&v7; // 0x2a8947
    *(int32_t *)a1 = (int32_t)result2;
    char * v8 = (char *)(v3 + 0x2d01e8b0); // 0x2a894b
    *v8 = *v8 + (char)(a3 / 256);
    char * v9 = (char *)(a1 + 0x1e88bff); // 0x2a8955
    *v9 = *v9 & (char)result2;
    return result2;
}

// Address range: 0x2a89b1 - 0x2a89c9
int64_t function_2a89b1(int64_t a1) {
    // 0x2a89b1
    return unknown_ffffffff860f66c9();
}

// Address range: 0x2a89ce - 0x2a89cf
int64_t function_2a89ce(int64_t a1) {
    // 0x2a89ce
    int64_t result; // 0x2a89ce
    return result;
}

// Address range: 0x2a8a27 - 0x2a8a29
int64_t function_2a8a27(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a8a27
    int64_t result; // 0x2a8a27
    __asm_out_134((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x2a8a63 - 0x2a8a6a
int64_t function_2a8a63(void) {
    // 0x2a8a63
    int64_t result; // 0x2a8a63
    uint64_t v1 = result;
    *(char *)v1 = 2 * (char)v1 | (char)((char)result < (char)(v1 / 256));
    return result;
}

// Address range: 0x2a8b42 - 0x2a8b69
int64_t function_2a8b42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a8b42
    int64_t v1; // 0x2a8b42
    int32_t * v2 = (int32_t *)(v1 + 0x682fbc); // 0x2a8b42
    *v2 = *v2 - (int32_t)v1;
    int64_t v3; // 0x2a8b42
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)v1;
    int64_t v4 = v3;
    bool v5; // 0x2a8b42
    char v6 = *(char *)(a1 + 0xbbf0001 + v1 + (v5 ? -4 : 4)); // 0x2a8b55
    return v4 & -0x10000 | (int64_t)((256 * (int16_t)v4 - 1536 >> 8) * (int16_t)v6);
}
