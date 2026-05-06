/*
 * Targeted RetDec C for native executable gap queue batch 245.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x21a666-0x21a866 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21a866-0x21aa66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21aa66-0x21ac66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21ac66-0x21ae66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21ae66-0x21b066 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f021e-0x2f041e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f041e-0x2f061e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f061e-0x2f081e rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
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

int64_t function_209a91a();
int64_t function_21a63f();
int64_t function_21a653();
int64_t function_21a666(void);
int64_t function_21a668(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_21a6af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21a6f4(int64_t a1);
int64_t function_21a70b(void);
int64_t function_21a70c(void);
int64_t function_21a711(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21a732(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21a75b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21a7e7(void);
int64_t function_21a83e(int64_t a1);
int64_t function_21a86a(int64_t a1);
int64_t function_21a8e3(void);
int64_t function_21a923(void);
int64_t function_21a966(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_21a9b0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21a9b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21a9b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21a9e8(void);
int64_t function_21aa62(void);
int64_t function_21aa6b(void);
int64_t function_21aa7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21aaf2(void);
int64_t function_21ab04(int64_t a1);
int64_t function_21ab19(void);
int64_t function_21ab29(void);
int64_t function_21ab63(void);
int64_t function_21ab76(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21abb8(void);
int64_t function_21abf3(void);
int64_t function_21ac07(void);
int64_t function_21ac0c(int64_t a1);
int64_t function_21ac1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21acd1(void);
int64_t function_21acd7(int64_t a1);
int64_t function_21aced(void);
int64_t function_21acf9(void);
int64_t function_21ad26(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21ad9a(void);
int64_t function_21adc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_21ae60(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_21aeb5(void);
int64_t function_21aec9(void);
int64_t function_21aecb(void);
int64_t function_21af23(int64_t a1);
int64_t function_21af45(void);
int64_t function_21af85(void);
int64_t function_21af9f(void);
int64_t function_21afa9(void);
int64_t function_2f021e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6);
int64_t function_2f02ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2f0454(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2f05c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2f072f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f0766(void);
int64_t function_2f0770(void);
int64_t function_2f07b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_42dc9bf5();
int64_t function_4bdca035();
int64_t function_c4258();
int64_t function_ffffffffe8f9b546();
int64_t unknown_1d887e22();
int64_t unknown_3a278f50();
int64_t unknown_3ab9a8b3();
int64_t unknown_3bef1e9f();
int64_t unknown_3d23918c();
int64_t unknown_4291a72d();
int64_t unknown_4622a9ed();
int64_t unknown_ffffffff88a17359();
int64_t unknown_ffffffff8b3974dd();
int64_t unknown_ffffffffa8f3eaa6();
int64_t unknown_ffffffffad1ccc62();
int64_t unknown_ffffffffcf411670();
int64_t unknown_ffffffffd8c9ea53();
int64_t unknown_ffffffffdb44c248();
int64_t unknown_ffffffffead8c4cd();
int64_t unknown_fffffffff6cbebbc();

// Address range: 0x21a666 - 0x21a667
int64_t function_21a666(void) {
    // 0x21a666
    int64_t result; // 0x21a666
    return result;
}

// Address range: 0x21a668 - 0x21a690
int64_t function_21a668(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x21a668
    __asm_hlt();
    bool v1; // 0x21a668
    if (!v1) {
        function_21a653();
    }
    int32_t * v2 = (int32_t *)(a4 - 0x37a5590b); // 0x21a66b
    int64_t v3; // 0x21a668
    *v2 = *v2 + (int32_t)v3;
    int32_t * v4 = (int32_t *)a1; // 0x21a67c
    *v4 = (int32_t)v3 + (int32_t)a1;
    *(char *)a3 = (char)a4;
    int64_t v5 = 4 * a3; // 0x21a683
    uint32_t v6 = -51 * *(int32_t *)(v5 + a1); // 0x21a683
    __asm_hlt();
    *v4 = __asm_insd((int16_t)a3);
    int32_t * v7 = (int32_t *)(v5 + (int64_t)v6); // 0x21a68b
    *v7 = *v7 + v6;
    return function_21a63f();
}

// Address range: 0x21a6af - 0x21a6e2
int64_t function_21a6af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21a6af
    int64_t v1; // 0x21a6af
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x21a6af
    char v4 = *(char *)&v3; // 0x21a6c2
    *(char *)a3 = v4 + (char)a3 + (char)(((int32_t)v2 ^ 202) < 0x6e2dfd3a);
    bool v5; // 0x21a6af
    int64_t v6 = v5 ? -1 : 1; // 0x21a6c4
    int64_t v7 = unknown_ffffffffead8c4cd(v6 + a1, v6 + a2, a4); // 0x21a6c6
    char * v8 = (char *)v7; // 0x21a6ce
    *v8 = *v8 + (char)v7;
    int64_t v9; // 0x21a6af
    *(int32_t *)v9 = *(int32_t *)&v9 + (int32_t)v1;
    return 0x96449be7;
}

// Address range: 0x21a6f4 - 0x21a6f8
int64_t function_21a6f4(int64_t a1) {
    // 0x21a6f4
    int64_t result; // 0x21a6f4
    *(int32_t *)(result - 40) = (int32_t)result;
    return result;
}

// Address range: 0x21a70b - 0x21a70c
int64_t function_21a70b(void) {
    // 0x21a70b
    int64_t result; // 0x21a70b
    return result;
}

// Address range: 0x21a70c - 0x21a711
int64_t function_21a70c(void) {
    // 0x21a70c
    int64_t result; // 0x21a70c
    return result;
}

// Address range: 0x21a711 - 0x21a732
int64_t function_21a711(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + (int64_t)&g1 + 4 * a3); // 0x21a711
    uint32_t v2 = *v1; // 0x21a711
    int64_t v3; // 0x21a711
    uint32_t v4 = (int32_t)v3; // 0x21a711
    bool v5; // 0x21a711
    int32_t v6 = v5; // 0x21a711
    uint32_t v7 = v2 + v4; // 0x21a711
    int32_t v8 = v7 + v6; // 0x21a711
    unsigned char v9 = llvm_ctpop_i8((char)v8); // 0x21a711
    bool v10 = v5 ? v8 <= v2 : v7 < v2; // 0x21a711
    *v1 = v8;
    int32_t v11; // 0x21a711
    *(int32_t *)(a2 + 0x52267801 + (8 * (256 * (64 * (int64_t)(v8 == 0) | (int64_t)v10 | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v4 % 16 + v6 + v2 % 16 > 15) | 4 * (int64_t)(v9 % 2 == 0)) | v3 & 0x1fffffffffff00ff) | 0x1000)) = (int32_t)(int64_t)&v11;
    int64_t v12; // 0x21a711
    *(int32_t *)a4 = *(int32_t *)&v12 + (int32_t)a1;
    return function_209a91a();
}

// Address range: 0x21a732 - 0x21a75a
int64_t function_21a732(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 63); // 0x21a737
    *v1 = *v1 & 0x1baea8ff;
    __asm_in(98);
    unknown_3a278f50();
    return unknown_ffffffff88a17359();
}

// Address range: 0x21a75b - 0x21a76c
int64_t function_21a75b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_hlt(); // 0x21a75b
    int64_t v2; // 0x21a75b
    *(int32_t *)a1 = (int32_t)v2;
    uint64_t v3 = a4 - 1; // 0x21a75d
    int64_t v4 = v1; // 0x21a75d
    bool v5; // 0x21a75b
    if (v3 != 0 == v5) {
        v4 = function_21a70b();
    }
    int64_t v6 = v4;
    int64_t v7 = ((int64_t)v5 - v3 / 256 + v6) % 256 | v6 & -256; // 0x21a75f
    int32_t * v8 = (int32_t *)v7; // 0x21a761
    *v8 = *v8 + (int32_t)a3;
    char * v9 = (char *)v7; // 0x21a763
    *v9 = *v9 | (char)v3;
    return __asm_sti();
}

// Address range: 0x21a7e7 - 0x21a7ef
int64_t function_21a7e7(void) {
    // 0x21a7e7
    return unknown_4622a9ed();
}

// Address range: 0x21a83e - 0x21a83f
int64_t function_21a83e(int64_t a1) {
    // 0x21a83e
    int64_t result; // 0x21a83e
    return result;
}

// Address range: 0x21a86a - 0x21a86d
int64_t function_21a86a(int64_t a1) {
    // 0x21a86a
    int64_t result; // 0x21a86a
    return result;
}

// Address range: 0x21a8e3 - 0x21a8e6
int64_t function_21a8e3(void) {
    // 0x21a8e3
    int64_t result; // 0x21a8e3
    return result;
}

// Address range: 0x21a923 - 0x21a92e
int64_t function_21a923(void) {
    // 0x21a923
    int64_t result; // 0x21a923
    return result;
}

// Address range: 0x21a966 - 0x21a9af
int64_t function_21a966(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    *(char *)a2 = (char)(a3 / 256 | a2);
    *(int32_t *)0x70cb1d48 = 0x52fb01e8;
    char * v2 = (char *)(a2 - 0xa13ccf5 + a4); // 0x21a97f
    *v2 = *v2 - (char)a3;
    unknown_3d23918c();
    int64_t v3; // 0x21a966
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a4;
    int32_t * v4 = (int32_t *)(v3 - 103); // 0x21a998
    *v4 = *v4 + (int32_t)a1;
    uint64_t v5 = __asm_int3(); // 0x21a99b
    *(char *)a1 = *(char *)&v1;
    bool v6; // 0x21a966
    int64_t v7 = v6 ? -1 : 1; // 0x21a99c
    unsigned char v8 = *(char *)-0x177e01ec; // 0x21a99d
    *(char *)-0x177e01ec = v8 / 128 | 2 * v8;
    char * v9 = (char *)(v5 + 0x1e81600); // 0x21a9a7
    *v9 = *v9 + (char)(v5 / 256);
    return function_21a9b2(v7 + a1, v1 + v7, a3 % 256 & v3 | a3 & -256, v5);
}

// Address range: 0x21a9b0 - 0x21a9b2
int64_t function_21a9b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x21a9b0
    int64_t result; // 0x21a9b0
    *(char *)a3 = (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x21a9b2 - 0x21a9b6
int64_t function_21a9b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21a9b2
    int64_t v1; // 0x21a9b2
    uint64_t v2 = v1;
    char v3 = *(char *)(a3 - 87); // 0x21a9b2
    bool v4; // 0x21a9b2
    return 256 * (int64_t)(v3 + (char)(v2 / 256) + (char)v4) | v2 & -0xff01;
}

// Address range: 0x21a9b6 - 0x21a9e1
int64_t function_21a9b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_fffffffff6cbebbc(); // 0x21a9b6
    char * v2 = (char *)(v1 - 0x508a7f9f); // 0x21a9bb
    *v2 = *v2 + (char)a4;
    int32_t * v3 = (int32_t *)((v1 & 0xe8577080) + 0x7285c0a); // 0x21a9cf
    int64_t v4; // 0x21a9b6
    *v3 = *v3 + (int32_t)v4;
    return unknown_ffffffff8b3974dd();
}

// Address range: 0x21a9e8 - 0x21a9e9
int64_t function_21a9e8(void) {
    // 0x21a9e8
    int64_t result; // 0x21a9e8
    return result;
}

// Address range: 0x21aa62 - 0x21aa6a
int64_t function_21aa62(void) {
    // 0x21aa62
    int64_t v1; // 0x21aa62
    int64_t v2 = v1;
    return 2 * v2 & 168 | v2 & 0x23b12000;
}

// Address range: 0x21aa6b - 0x21aa6c
int64_t function_21aa6b(void) {
    // 0x21aa6b
    int64_t result; // 0x21aa6b
    return result;
}

// Address range: 0x21aa7c - 0x21aaa7
int64_t function_21aa7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21aa7c
    unknown_ffffffffcf411670();
    unknown_3bef1e9f();
    int64_t v1; // 0x21aa7c
    if ((int32_t)v1 < 0) {
        function_21aa6b();
    }
    // 0x21aaa0
    return __asm_in_133((int16_t)a3);
}

// Address range: 0x21aaf2 - 0x21aaf4
int64_t function_21aaf2(void) {
    // 0x21aaf2
    return function_21ab29();
}

// Address range: 0x21ab04 - 0x21ab06
int64_t function_21ab04(int64_t a1) {
    // 0x21ab04
    int64_t result; // 0x21ab04
    return result;
}

// Address range: 0x21ab19 - 0x21ab1d
int64_t function_21ab19(void) {
    // 0x21ab19
    int64_t result; // 0x21ab19
    return result;
}

// Address range: 0x21ab29 - 0x21ab2a
int64_t function_21ab29(void) {
    // 0x21ab29
    int64_t result; // 0x21ab29
    return result;
}

// Address range: 0x21ab63 - 0x21ab76
int64_t function_21ab63(void) {
    // 0x21ab63
    int64_t v1; // 0x21ab63
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_42dc9bf5();
}

// Address range: 0x21ab76 - 0x21ab9f
int64_t function_21ab76(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21ab76
    *(int32_t *)a2 = 0;
    char * v1 = (char *)(a1 - 114); // 0x21ab83
    int64_t v2; // 0x21ab76
    *v1 = *v1 + (char)v2;
    *(char *)0x46cef49d = *(char *)0x46cef49d + (char)(v2 / 256);
    __asm_int3();
    bool v3; // 0x21ab76
    return function_21ac1b(a1, (v3 ? -8 : 8) + a2, (a4 | a3) & 0xffffffff, a4);
}

// Address range: 0x21abb8 - 0x21abba
int64_t function_21abb8(void) {
    // 0x21abb8
    int64_t result; // 0x21abb8
    return result;
}

// Address range: 0x21abf3 - 0x21ac07
int64_t function_21abf3(void) {
    // 0x21abf3
    *(int32_t *)0x642299661201e84b = *(int32_t *)0x7ae28e2940efa01c;
    int64_t v1; // 0x21abf3
    return function_21ac0c(v1);
}

// Address range: 0x21ac07 - 0x21ac0c
int64_t function_21ac07(void) {
    // 0x21ac07
    int64_t result; // 0x21ac07
    return result;
}

// Address range: 0x21ac0c - 0x21ac19
int64_t function_21ac0c(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 0x34fec293); // 0x21ac0e
    int64_t result; // 0x21ac0c
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x21ac1b - 0x21ac2d
int64_t function_21ac1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    unknown_1d887e22();
    uint32_t v2 = (int32_t)a4 % 32; // 0x21ac21
    char v3; // 0x21ac1b
    if (v2 == 0) {
        // 0x21ac1b
        v3 = a2;
    } else {
        int64_t v4; // 0x21ac1b
        int32_t * v5 = (int32_t *)(v4 + 0x7735d84c); // 0x21ac21
        uint32_t v6 = *v5; // 0x21ac21
        *v5 = v6 << v2 | (int32_t)((v4 & 256) != 0) << v2 - 1 | (int32_t)((int64_t)v6 >> (int64_t)(33 - v2));
        v3 = *(char *)&v1;
    }
    int64_t result = unknown_4291a72d(); // 0x21ac27
    *(char *)a1 = v3;
    return result;
}

// Address range: 0x21acd1 - 0x21acd2
int64_t function_21acd1(void) {
    // 0x21acd1
    int64_t result; // 0x21acd1
    return result;
}

// Address range: 0x21acd7 - 0x21acd8
int64_t function_21acd7(int64_t a1) {
    // 0x21acd7
    int64_t result; // 0x21acd7
    return result;
}

// Address range: 0x21aced - 0x21acee
int64_t function_21aced(void) {
    // 0x21aced
    int64_t result; // 0x21aced
    return result;
}

// Address range: 0x21acf9 - 0x21acfd
int64_t function_21acf9(void) {
    // 0x21acf9
    return function_21acd1();
}

// Address range: 0x21ad26 - 0x21ad66
int64_t function_21ad26(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21ad26
    int64_t v1; // 0x21ad26
    uint64_t v2 = v1;
    int64_t v3 = a2;
    *(char *)a1 = (char)v1 + 4;
    unsigned char v4 = (char)a4 % 32; // 0x21ad3c
    if (v4 != 0) {
        char v5 = *(char *)(8 * v1 + 0x1e89ad5); // 0x21ad2a
        char * v6 = (char *)((v2 & -256 | (int64_t)(v5 + (char)v2)) - 0x5a69fe18); // 0x21ad3c
        unsigned char v7 = *v6; // 0x21ad3c
        *v6 = v7 >> v4 | v7 << 8 - v4;
    }
    bool v8; // 0x21ad26
    unknown_ffffffffd8c9ea53((v8 ? -1 : 1) + a1);
    uint16_t v9 = (int16_t)*(int32_t *)&v3 % 256; // 0x21ad54
    if (v9 * v9 <= 255) {
        function_21aced();
    }
    char * v10 = (char *)(v1 - 99); // 0x21ad59
    *v10 = *v10 | (char)(v2 / 256);
    unknown_ffffffffad1ccc62();
    return function_4bdca035();
}

// Address range: 0x21ad9a - 0x21ad9f
int64_t function_21ad9a(void) {
    // 0x21ad9a
    int64_t v1; // 0x21ad9a
    return v1 & -256 | 8;
}

// Address range: 0x21adc2 - 0x21ae4a
int64_t function_21adc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = __asm_int3(); // 0x21ae18
    int64_t v2; // bp+16, 0x21adc2
    int64_t v3 = (int64_t)&v2 + a5; // 0x21ae1b
    unsigned char v4 = *(char *)0xce22b25; // 0x21ae1e
    int64_t v5; // 0x21adc2
    char v6 = (uint64_t)v5 / 256; // 0x21ae1e
    unsigned char v7 = v4 + v6; // 0x21ae1e
    *(char *)0xce22b25 = v7;
    if (v7 < v4 || v7 == 0) {
        // 0x21ae39
        *(char *)a3 = (char)v3;
        int64_t v8 = unknown_ffffffffdb44c248(*(int32_t *)(a2 - 50) | (int32_t)a1); // 0x21ae42
        return v8 & -256 | (int64_t)__asm_in(118);
    }
    char * v9 = (char *)(a1 + 0x60daef9e); // 0x21ae26
    *v9 = *v9 + v6;
    char v10 = *(char *)((v3 & 0xffffffff) + 0x978d14); // 0x21ae2c
    return v1 & -256 | (int64_t)(v10 | (char)v1);
}

// Address range: 0x21ae60 - 0x21aeb5
int64_t function_21ae60(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x21aeb3
    int64_t v1; // 0x21ae60
    int64_t v2 = v1;
    bool v3; // 0x21ae60
    __asm_out(117, (int32_t)((v2 - a3 / 256 + (int64_t)v3) % 256 | v2 & 0xffffff00));
    unknown_ffffffffa8f3eaa6();
    return (int64_t)(*(int32_t *)0x1b01e8fafa95e682 ^ 125);
}

// Address range: 0x21aeb5 - 0x21aeb6
int64_t function_21aeb5(void) {
    // 0x21aeb5
    int64_t result; // 0x21aeb5
    return result;
}

// Address range: 0x21aec9 - 0x21aecb
int64_t function_21aec9(void) {
    // 0x21aec9
    return function_21af45();
}

// Address range: 0x21aecb - 0x21aed8
int64_t function_21aecb(void) {
    // 0x21aecb
    int64_t v1; // 0x21aecb
    bool v2; // 0x21aecb
    if (!v2) {
        v1 = function_21aeb5();
    }
    int32_t * v3 = (int32_t *)(v1 - 0x4c5e314c); // 0x21aecd
    *v3 = *v3 + (int32_t)v1;
    return function_ffffffffe8f9b546();
}

// Address range: 0x21af23 - 0x21af24
int64_t function_21af23(int64_t a1) {
    // 0x21af23
    int64_t result; // 0x21af23
    return result;
}

// Address range: 0x21af45 - 0x21af49
int64_t function_21af45(void) {
    // 0x21af45
    int64_t result; // 0x21af45
    return result;
}

// Address range: 0x21af85 - 0x21af86
int64_t function_21af85(void) {
    // 0x21af85
    int64_t result; // 0x21af85
    return result;
}

// Address range: 0x21af9f - 0x21afa2
int64_t function_21af9f(void) {
    // 0x21af9f
    int64_t result; // 0x21af9f
    return result;
}

// Address range: 0x21afa9 - 0x21afb4
int64_t function_21afa9(void) {
    // 0x21afa9
    int64_t v1; // 0x21afa9
    float80_t v2; // 0x21afa9
    *(int32_t *)(int64_t)(0x10000 * (int32_t)v1 >> 16) = (int32_t)v2;
    unknown_3ab9a8b3();
    return function_21af85();
}

// Address range: 0x2f021e - 0x2f02ad
int64_t function_2f021e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6) {
    // 0x2f021e
    int64_t v1; // bp+16, 0x2f021e
    int64_t v2 = (int64_t)&v1; // 0x2f0279
    int64_t v3 = 0x100000000 * v2 >> 32; // 0x2f027d
    int64_t * v4 = (int64_t *)(v3 - 8); // 0x2f0289
    *v4 = a3;
    *(int64_t *)(v3 - 16) = v3 + 8;
    int64_t v5 = *v4; // 0x2f029c
    *(int64_t *)(v3 - 24) = v5;
    int64_t v6; // 0x2f021e
    return function_c4258((int32_t)a1 ^ a5, a2, v5, a5, v6, v6, v6, (int64_t *)(v2 & 0xfffffff8));
}

// Address range: 0x2f02ad - 0x2f0454
int64_t function_2f02ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7; // bp-40, 0x2f034b
    int64_t v2 = (int64_t)&v1; // 0x2f03c0
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2f03c8
    int64_t v4 = v2 - 16; // 0x2f03cd
    int64_t * v5 = (int64_t *)v4; // 0x2f03cd
    *v5 = 0x2eb233;
    *(int64_t *)(v2 - 24) = a7;
    *v3 = a7;
    int64_t * v6 = (int64_t *)(v2 + 8); // 0x2f03de
    *v6 = a7;
    *v5 = v4;
    *v3 = *v5;
    *(int64_t *)(v2 + 32) = v1;
    v1 = *v6;
    *v3 = a1;
    *v5 = a3;
    int64_t v7 = *v3; // 0x2f042a
    v1 = a6;
    *v3 = v2;
    int64_t v8 = v1; // 0x2f0447
    v1 = v2 + 16;
    int64_t v9; // 0x2f02ad
    int64_t result = function_c4258((int32_t)v7, a2, a3, (int32_t)a4, a5, v8, v9, (int64_t *)&g2); // 0x2f044f
    return result;
}

// Address range: 0x2f0454 - 0x2f05c3
int64_t function_2f0454(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2f0454
    bool v1; // 0x2f0454
    return function_c4258((int32_t)a1, a2, a3, (int32_t)a4, a5, a6, 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2, (int64_t *)169);
}

// Address range: 0x2f05c3 - 0x2f0707
int64_t function_2f05c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2f05c3
    int64_t v1; // bp-56, 0x2f05c3
    int64_t v2 = (int64_t)&v1; // 0x2f0661
    int64_t v3 = *(int64_t *)(v2 + 40); // 0x2f0670
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x2f0674
    *v4 = v3;
    v1 = 0x89dc510;
    *v4 = 0x417d0713;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x2f069a
    *v5 = v3;
    int64_t v6 = v2 + 16; // 0x2f06a0
    *(int64_t *)v6 = v1;
    v1 = 0x6d4acf1a;
    *v4 = 0x7eaf4bc2;
    *v5 = *(int64_t *)(v2 + 24);
    *(int64_t *)(v2 + 32) = v1;
    *v4 = v6;
    *v5 = v1;
    *v4 = *(int64_t *)(v2 + 8);
    v1 = v6;
    int64_t v7; // 0x2f05c3
    return function_c4258((int32_t)a1, a2, a3, (int32_t)a4, a5, a6, v7, (int64_t *)0x2eb6e5);
}

// Address range: 0x2f072f - 0x2f0732
int64_t function_2f072f(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x2f072f
    int32_t result = __asm_in_133(v1); // 0x2f072f
    int64_t v2; // 0x2f072f
    __asm_outsd(v1, (int32_t)v2);
    return result;
}

// Address range: 0x2f0766 - 0x2f076b
int64_t function_2f0766(void) {
    // 0x2f0766
    int64_t v1; // 0x2f0766
    return v1 & -38;
}

// Address range: 0x2f0770 - 0x2f0773
int64_t function_2f0770(void) {
    // 0x2f0770
    int64_t v1; // 0x2f0770
    return function_2f07b2(v1, v1, v1, v1, v1, v1, (int64_t)&g2);
}

// Address range: 0x2f07b2 - 0x2f081a
int64_t function_2f07b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2f07b2
    int64_t result; // 0x2f07b2
    char * v1 = (char *)(result - 121); // 0x2f07b2
    *v1 = *v1 + (char)a4;
    return result;
}
