/*
 * Targeted RetDec C for native executable gap queue batch 222.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x182885-0x182a85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x182a85-0x182c85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x183085-0x183285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ea21e-0x2ea41e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ea41e-0x2ea61e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ea61e-0x2ea81e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ea81e-0x2eaa1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2eaa1e-0x2eac1e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_18282f();
int64_t function_182885(void);
int64_t function_182889(int64_t a1, int64_t a2);
int64_t function_182989(void);
int64_t function_1829b6(int64_t a1);
int64_t function_1829ca(void);
int64_t function_1829dd(int64_t a1);
int64_t function_1829de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_182a38(void);
int64_t function_182a3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_182a48(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_182a92(void);
int64_t function_182af6(int64_t a1);
int64_t function_182b1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_182b41(int64_t a1);
int64_t function_182b63(void);
int64_t function_182b7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_182c14(void);
int64_t function_182c36(void);
int64_t function_183085(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1830c0(void);
int64_t function_183192(int64_t a1);
int64_t function_1831a8(void);
int64_t function_1831ab(int64_t a1);
int64_t function_1831c8(void);
int64_t function_1831df(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_200bfe5();
int64_t function_2177987();
int64_t function_2ea21e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ea24d(int64_t a1);
int64_t function_2ea261(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2ea2fc(int64_t a1);
int64_t function_2ea309(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2ea385(void);
int64_t function_2ea392(void);
int64_t function_2ea3b0(void);
int64_t function_2ea3b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ea3dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ea3ea(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2ea414(void);
int64_t function_2ea468(void);
int64_t function_2ea46d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ea487(void);
int64_t function_2ea491(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ea4ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ea4dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ea5b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ea5f0(void);
int64_t function_2ea613(void);
int64_t function_2ea629(void);
int64_t function_2ea658(void);
int64_t function_2ea68a(void);
int64_t function_2ea692(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ea694(void);
int64_t function_2ea6e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ea6f4(void);
int64_t function_2ea73e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ea7d6(int64_t a1);
int64_t function_2ea7e5(void);
int64_t function_2ea7f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ea80c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ea827(void);
int64_t function_2ea83a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2ea87f(int64_t a1);
int64_t function_2ea8ca(int64_t a1);
int64_t function_2ea8d4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2ea933(void);
int64_t function_2ea949(void);
int64_t function_2ea998(int64_t a1);
int64_t function_2ea9a1(void);
int64_t function_2ea9cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2eaa13(void);
int64_t function_2eaa1d(void);
int64_t function_2eaa46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2eab94(void);
int64_t function_2eabb7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2eac04(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d183a56();
int64_t function_50308c7b();
int64_t function_ffffffff908db522();
int64_t function_ffffffffb4c135e3();
int64_t function_ffffffffe8e33758();
int64_t function_fffffffff18aa763();
int64_t unknown_1103d05b();
int64_t unknown_13a0c53c();
int64_t unknown_1e2a3a50();
int64_t unknown_23cb8cf1();
int64_t unknown_24c1da25();
int64_t unknown_30229a4b();
int64_t unknown_37da460f();
int64_t unknown_3a304ac9();
int64_t unknown_3ac3756e();
int64_t unknown_3aca5e9c();
int64_t unknown_3b17ecf6();
int64_t unknown_3d308a53();
int64_t unknown_3ef7bad3();
int64_t unknown_4024eb33();
int64_t unknown_69f893f7();
int64_t unknown_6c9971bf();
int64_t unknown_6d91e086();
int64_t unknown_74300061();
int64_t unknown_c366802();
int64_t unknown_ffffffff97dd0e5d();
int64_t unknown_ffffffffa0404aab();
int64_t unknown_ffffffffa1c30f14();
int64_t unknown_ffffffffa8646000();
int64_t unknown_ffffffffad5de900();
int64_t unknown_ffffffffb4a467b1();
int64_t unknown_ffffffffc2d614ab();
int64_t unknown_ffffffffcbd2b18d();
int64_t unknown_ffffffffd33a13e8();
int64_t unknown_ffffffffd6ac5941();
int64_t unknown_ffffffffe0c90f39();
int64_t unknown_ffffffffe570d0c9();
int64_t unknown_fffffffff590e505();
int64_t unknown_fffffffff914157e();
int64_t unknown_fffffffff91ba803();

// Address range: 0x182885 - 0x182886
int64_t function_182885(void) {
    // 0x182885
    int64_t result; // 0x182885
    return result;
}

// Address range: 0x182889 - 0x18288e
int64_t function_182889(int64_t a1, int64_t a2) {
    // 0x182889
    int64_t v1; // 0x182889
    *(int32_t *)a1 = -1 - (int32_t)v1;
    return function_18282f();
}

// Address range: 0x182989 - 0x18298a
int64_t function_182989(void) {
    // 0x182989
    int64_t result; // 0x182989
    return result;
}

// Address range: 0x1829b6 - 0x1829b9
int64_t function_1829b6(int64_t a1) {
    // 0x1829b6
    int64_t result; // 0x1829b6
    return result;
}

// Address range: 0x1829ca - 0x1829dd
int64_t function_1829ca(void) {
    // 0x1829ca
    int64_t v1; // 0x1829ca
    char * v2 = (char *)(v1 - 78); // 0x1829ce
    *v2 = *v2 | (char)(v1 / 256);
    return 0x4e8b509;
}

// Address range: 0x1829dd - 0x1829de
int64_t function_1829dd(int64_t a1) {
    // 0x1829dd
    int64_t result; // 0x1829dd
    return result;
}

// Address range: 0x1829de - 0x182a1f
int64_t function_1829de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    int64_t v2; // 0x1829de
    int32_t * v3 = (int32_t *)(((v2 ^ v2) & 0xffffffff) + 109); // 0x1829e2
    *v3 = *v3 + (int32_t)a3;
    bool v4; // 0x1829de
    int64_t v5 = (v4 ? -4 : 4) + a2; // 0x1829eb
    unknown_3b17ecf6();
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v6 = __asm_int3() & 0xffffffff; // 0x1829f8
    __asm_out(-32, (int32_t)(int64_t)&v1);
    int64_t v7 = unknown_fffffffff91ba803(); // 0x1829fd
    char * v8 = (char *)(v5 + 17); // 0x182a04
    unsigned char v9 = *v8; // 0x182a04
    unsigned char v10 = (char)(v2 / 256); // 0x182a04
    char v11 = v9 + v10; // 0x182a04
    unsigned char v12 = llvm_ctpop_i8(v11); // 0x182a04
    *v8 = v11;
    __asm_out_133(94, (char)v7);
    int64_t v13 = v7 & -0xff01 | 256 * (64 * (int64_t)(v11 == 0) | (int64_t)(v11 < v9) | 128 * (int64_t)(v11 < 0) | 16 * (int64_t)(v9 % 16 + v10 % 16 > 15) | 4 * (int64_t)(v12 % 2 == 0)) | 512; // 0x182a09
    int32_t * v14 = (int32_t *)(v13 + v5); // 0x182a0b
    *v14 = *v14 + (int32_t)v13;
    unknown_ffffffffa1c30f14();
    *(int64_t *)v6 = v6 + 8;
    return function_200bfe5();
}

// Address range: 0x182a38 - 0x182a39
int64_t function_182a38(void) {
    // 0x182a38
    int64_t result; // 0x182a38
    return result;
}

// Address range: 0x182a3a - 0x182a48
int64_t function_182a3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x182a3a
    unknown_ffffffffd6ac5941();
    return __asm_sti() & -256 | (int64_t)__asm_in(-98);
}

// Address range: 0x182a48 - 0x182a83
int64_t function_182a48(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x182a48
    unknown_1e2a3a50();
    int64_t v1 = unknown_ffffffff97dd0e5d(); // 0x182a57
    char * v2 = (char *)(a1 - 0x4c588486); // 0x182a5c
    *v2 = *v2 | (char)a4;
    char * v3 = (char *)(v1 + 79); // 0x182a62
    char v4 = a3 / 256; // 0x182a62
    *v3 = *v3 + v4;
    int32_t * v5 = (int32_t *)(a3 - 42); // 0x182a71
    uint32_t v6 = *v5; // 0x182a71
    uint32_t v7 = v6 + (int32_t)a1; // 0x182a71
    *v5 = v7;
    char * v8 = (char *)(v1 + 22); // 0x182a74
    *v8 = *v8 + v4 + (char)(v7 < v6);
    __asm_hlt();
    return 0xac10e395;
}

// Address range: 0x182a92 - 0x182a9f
int64_t function_182a92(void) {
    // 0x182a92
    int64_t v1; // 0x182a92
    int64_t v2 = v1;
    *(int32_t *)-0x17e4d5e5 = *(int32_t *)-0x17e4d5e5 + (int32_t)v1;
    return (v2 + 8) % 256 | v2 & -256;
}

// Address range: 0x182af6 - 0x182af7
int64_t function_182af6(int64_t a1) {
    // 0x182af6
    int64_t result; // 0x182af6
    return result;
}

// Address range: 0x182b1c - 0x182b1f
int64_t function_182b1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x182b1c
    int64_t result; // 0x182b1c
    *(int32_t *)a1 = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0x182b41 - 0x182b56
int64_t function_182b41(int64_t a1) {
    char * v1 = (char *)(a1 + 0x2a91013d); // 0x182b4c
    int64_t v2; // 0x182b41
    *v1 = ((char)((int32_t)v2 / 256) | -122) + *v1;
    __asm_wait(a1);
    return 0x50068f9;
}

// Address range: 0x182b63 - 0x182b64
int64_t function_182b63(void) {
    // 0x182b63
    int64_t result; // 0x182b63
    return result;
}

// Address range: 0x182b7f - 0x182c05
int64_t function_182b7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x182b7f
    int64_t result; // 0x182b7f
    *(char *)0x64097286 = (char)((uint64_t)result / 256);
    // 0x182b8a
    *(char *)a2 = (char)(result / 256) + (char)a2;
    return result;
    int64_t result2; // 0x182b7f
    while (true) {
        uint32_t v1 = (int32_t)result2; // 0x182be6
        if (v1 >= 0x8e9e02) {
            // break (via goto) -> 0x182be8
            goto lab_0x182be8;
        }
        while (v1 != -0x7c09bcff) {
            if (v1 <= 0x83f64301) {
                // break -> 
                break;
            }
            if (v1 >= 0x8e9e02) {
                // break (via goto) -> 0x182be8
                goto lab_0x182be8;
            }
        }
        // 0x182bb4
        return result2;
    }
  lab_0x182be8:;
    int64_t v2 = result2 & 0x9f073354 | 0x60f8ccab; // 0x182be8
    *(char *)(a4 + 0x1e8d8c9) = (char)v2;
    return v2 + 0x9c5882ef & 0xff5fff00 | 164;
}

// Address range: 0x182c14 - 0x182c15
int64_t function_182c14(void) {
    // 0x182c14
    int64_t result; // 0x182c14
    return result;
}

// Address range: 0x182c36 - 0x182c3c
int64_t function_182c36(void) {
    // 0x182c36
    return function_182c14();
}

// Address range: 0x183085 - 0x18308d
int64_t function_183085(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)-0x7adc1072; // 0x183087
    int64_t result; // 0x183085
    *(char *)-0x7adc1072 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x1830c0 - 0x1830c5
int64_t function_1830c0(void) {
    // 0x1830c0
    return function_3d183a56();
}

// Address range: 0x183192 - 0x183193
int64_t function_183192(int64_t a1) {
    // 0x183192
    int64_t result; // 0x183192
    return result;
}

// Address range: 0x1831a8 - 0x1831a9
int64_t function_1831a8(void) {
    // 0x1831a8
    int64_t result; // 0x1831a8
    return result;
}

// Address range: 0x1831ab - 0x1831b1
int64_t function_1831ab(int64_t a1) {
    // 0x1831ab
    return unknown_ffffffffb4a467b1(a1);
}

// Address range: 0x1831c8 - 0x1831c9
int64_t function_1831c8(void) {
    // 0x1831c8
    int64_t result; // 0x1831c8
    return result;
}

// Address range: 0x1831df - 0x183280
int64_t function_1831df(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1831df
    int64_t v1; // 0x1831df
    if (__readfsbyte(v1) > (char)(v1 / 256)) {
        function_1831a8();
    }
    // 0x1831e4
    unknown_23cb8cf1();
    int64_t v2 = a3 - (v1 & 0xff00) & 0xff00 | a3 & -0xff01; // 0x1831f2
    int64_t v3 = __asm_wait(a1); // 0x1831f5
    char * v4 = (char *)v3; // 0x1831f6
    *v4 = *v4 - (char)v3;
    int64_t result = unknown_ffffffffad5de900(); // 0x1831fa
    int32_t * v5 = (int32_t *)v2; // 0x1831ff
    int32_t v6 = a1; // 0x1831ff
    int32_t v7 = *v5 + v6; // 0x1831ff
    *v5 = v7;
    if (v7 < 1) {
        // 0x183281
        return result;
    }
    // 0x183203
    int64_t v8; // 0x1831df
    *(int32_t *)v8 = *(int32_t *)&v8 + (int32_t)v1;
    __asm_out_133(71, -24);
    int32_t v9 = (int32_t)v8 + v6; // 0x18320e
    if (v9 >= 0) {
        // 0x18327f
        return __asm_hlt();
    }
    uint64_t v10 = a4 / 256; // 0x1831f0
    int64_t v11 = v10 % 256 | a4; // 0x1831f0
    int64_t v12 = v9; // 0x18320e
    char * v13 = (char *)(unknown_13a0c53c(v9) - 0x20a87cf6); // 0x18323b
    *v13 = *v13 + (char)v11;
    unknown_30229a4b();
    int32_t * v14 = (int32_t *)(v2 - 0x6961bb66); // 0x18324d
    *v14 = *v14 + (int32_t)a2;
    int32_t * v15 = (int32_t *)(v8 - 0x1afef80e); // 0x183255
    *v15 = *v15 + (int32_t)v11;
    __asm_int(-11);
    return (v10 + v12) % 256 | v12 & 0xffffff00;
}

// Address range: 0x2ea21e - 0x2ea23c
int64_t function_2ea21e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ea21e
    int64_t v1; // 0x2ea21e
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x2ea22b
    if (v3 != 0) {
        char v4 = *(char *)(a3 - 24); // 0x2ea21e
        bool v5; // 0x2ea21e
        int32_t * v6 = (int32_t *)(v2 & -256 | (int64_t)(v4 + (char)v2 + (char)v5)); // 0x2ea22b
        uint32_t v7 = *v6; // 0x2ea22b
        *v6 = v7 >> 32 - v3 | v7 << v3;
    }
    return unknown_4024eb33();
}

// Address range: 0x2ea24d - 0x2ea260
int64_t function_2ea24d(int64_t a1) {
    // 0x2ea24d
    unknown_3d308a53(a1);
    int64_t v1; // 0x2ea24d
    *(int32_t *)a1 = 2 * (int32_t)v1;
    return unknown_1103d05b();
}

// Address range: 0x2ea261 - 0x2ea2a9
int64_t function_2ea261(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2ea261
    int64_t v1; // 0x2ea261
    bool v2; // 0x2ea261
    if (!v2 && !v2) {
        int32_t * v3 = (int32_t *)(a2 + 0x3a959387); // 0x2ea267
        *v3 = *v3 + (int32_t)(256 * v1 + a3 & 0xff00 | a3 & 0xffff00ff);
        *(char *)-0x6fd4038c = *(char *)-0x6fd4038c + (char)(v1 / 256);
        return a1 & 0xffffffff;
    }
    int64_t v4 = a2;
    int64_t v5; // 0x2ea261
    uint64_t result = v5;
    int64_t v6; // 0x2ea261
    uint64_t v7 = v6;
    int64_t v8 = a4;
    int64_t v9 = v7 & -256; // 0x2ea284
    int64_t v10 = v9 | 61; // 0x2ea284
    int32_t * v11 = (int32_t *)(v4 + 0x2c810073); // 0x2ea286
    *v11 = *v11 + (int32_t)v8;
    float80_t v12; // 0x2ea261
    *(int16_t *)v10 = (int16_t)v12;
    unsigned char v13 = *(char *)(4 * v8 - 44 + v10) | (char)v8; // 0x2ea28e
    int64_t v14 = v8 & -256 | (int64_t)v13; // 0x2ea28e
    while (v13 == 0) {
        char * v15 = (char *)(2 * v1 + 32 + v14); // 0x2ea27d
        *v15 = *v15 + (char)(result / 256);
        int64_t v16 = result & 0xffffffff; // 0x2ea281
        __asm_outsb((int16_t)a3, *(char *)v16);
        v4 = v16 + (v2 ? -4 : 4);
        result = (int64_t)*(int32_t *)v16;
        v7 = v9;
        v8 = v14;
        v9 = v7 & -256;
        v10 = v9 | 61;
        v11 = (int32_t *)(v4 + 0x2c810073);
        *v11 = *v11 + (int32_t)v8;
        *(int16_t *)v10 = (int16_t)v12;
        v13 = *(char *)(4 * v8 - 44 + v10) | (char)v8;
        v14 = v8 & -256 | (int64_t)v13;
    }
    // 0x2ea296
    *(char *)0x1a4c79a2 = *(char *)0x1a4c79a2 + (char)(v7 / 256);
    char * v17 = (char *)(4 * v14 + a1); // 0x2ea2a5
    *v17 = *v17 + (char)(a3 / 256);
    *(int32_t *)a1 = *(int32_t *)v4;
    return result;
}

// Address range: 0x2ea2fc - 0x2ea309
int64_t function_2ea2fc(int64_t a1) {
    // 0x2ea2fc
    return unknown_c366802(a1);
}

// Address range: 0x2ea309 - 0x2ea365
int64_t function_2ea309(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2ea309
    unknown_37da460f();
    *(char *)a2 = (char)(a3 / 256) + (char)a2;
    int64_t result = unknown_24c1da25(); // 0x2ea31f
    __asm_out_133(47, (char)result);
    return result;
}

// Address range: 0x2ea385 - 0x2ea386
int64_t function_2ea385(void) {
    // 0x2ea385
    int64_t result; // 0x2ea385
    return result;
}

// Address range: 0x2ea392 - 0x2ea393
int64_t function_2ea392(void) {
    // 0x2ea392
    int64_t result; // 0x2ea392
    return result;
}

// Address range: 0x2ea3b0 - 0x2ea3b7
int64_t function_2ea3b0(void) {
    // 0x2ea3b0
    return function_50308c7b();
}

// Address range: 0x2ea3b7 - 0x2ea3dd
int64_t function_2ea3b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ea3b7
    unknown_ffffffffe570d0c9();
    int64_t v1; // 0x2ea3b7
    if (a4 != 1 == (int32_t)v1 == -0x564ad823) {
        function_2ea385();
    }
    // 0x2ea3ca
    __asm_sti();
    *(int32_t *)0x55b63988 = *(int32_t *)0x55b63988 + (int32_t)v1;
    return 0x40fe8dd3;
}

// Address range: 0x2ea3dd - 0x2ea3ea
int64_t function_2ea3dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ea3dd
    int64_t v1; // 0x2ea3dd
    int32_t * v2 = (int32_t *)(v1 - 24 + 4 * v1); // 0x2ea3dd
    *v2 = *v2 + (int32_t)v1;
    int32_t * v3 = (int32_t *)(v1 - 74); // 0x2ea3e2
    int32_t v4 = *v3 + (int32_t)v1; // 0x2ea3e2
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x2ea3e2
    *v3 = v4;
    int64_t result; // 0x2ea3dd
    if (v5 % 2 == 0) {
        result = function_2ea392();
    }
    // 0x2ea3e7
    return result;
}

// Address range: 0x2ea3ea - 0x2ea3f7
int64_t function_2ea3ea(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2ea3ea
    int64_t v1; // 0x2ea3ea
    char * v2 = (char *)(v1 + 72); // 0x2ea3ea
    *v2 = *v2 + (char)(a3 / 256);
    int32_t * v3 = (int32_t *)(a4 + 0x3af11cf5); // 0x2ea3ef
    *v3 = *v3 + (int32_t)a1;
    return function_2ea46d(a1, a2, (int64_t)&g2);
}

// Address range: 0x2ea414 - 0x2ea415
int64_t function_2ea414(void) {
    // 0x2ea414
    int64_t result; // 0x2ea414
    return result;
}

// Address range: 0x2ea468 - 0x2ea46d
int64_t function_2ea468(void) {
    // 0x2ea468
    return unknown_3ac3756e();
}

// Address range: 0x2ea46d - 0x2ea487
int64_t function_2ea46d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ea46d
    float80_t v1; // 0x2ea46d
    __pseudo_get_significand(v1);
    __pseudo_get_exponent(v1);
    int64_t v2; // 0x2ea46d
    int32_t v3 = *(int32_t *)(v2 - 0x176d3f00); // 0x2ea472
    *(int32_t *)0x105da181 = *(int32_t *)0x105da181 + (int32_t)a1;
    unknown_6d91e086();
    bool v4; // 0x2ea46d
    return function_2ea4dc(a1, (int64_t)((int32_t)v4 + (int32_t)a2 + v3), v2, v2);
}

// Address range: 0x2ea487 - 0x2ea48e
int64_t function_2ea487(void) {
    // 0x2ea487
    return function_2ea414();
}

// Address range: 0x2ea491 - 0x2ea4ac
int64_t function_2ea491(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ea491
    return unknown_ffffffffa0404aab();
}

// Address range: 0x2ea4ac - 0x2ea4c1
int64_t function_2ea4ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ea4ac
    __asm_iretd();
    *(char *)a1 = __asm_insb((int16_t)a3);
    char v1 = *(char *)0x1f274eb6; // 0x2ea4af
    int64_t v2; // 0x2ea4ac
    *(char *)0x1f274eb6 = v1 + (char)((uint64_t)v2 / 256);
    return function_ffffffff908db522();
}

// Address range: 0x2ea4dc - 0x2ea5a2
int64_t function_2ea4dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ea4dc
    __asm_out_134(222, 62);
    int64_t v1; // 0x2ea4dc
    *(int32_t *)a1 = (int32_t)v1;
    return 0xfb68dd8e;
}

// Address range: 0x2ea5b3 - 0x2ea5bf
int64_t function_2ea5b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x2ea5b3
    if (v1 != 0) {
        *(int32_t *)a3 = (int32_t)a3 << v1;
    }
    int64_t v2; // 0x2ea5b3
    __asm_out_135((int16_t)a3, (int32_t)v2);
    return unknown_6c9971bf();
}

// Address range: 0x2ea5f0 - 0x2ea5f4
int64_t function_2ea5f0(void) {
    // 0x2ea5f0
    int64_t result; // 0x2ea5f0
    return result;
}

// Address range: 0x2ea613 - 0x2ea614
int64_t function_2ea613(void) {
    // 0x2ea613
    int64_t result; // 0x2ea613
    return result;
}

// Address range: 0x2ea629 - 0x2ea62b
int64_t function_2ea629(void) {
    // 0x2ea629
    return function_2ea613();
}

// Address range: 0x2ea658 - 0x2ea667
int64_t function_2ea658(void) {
    // 0x2ea658
    int64_t result; // 0x2ea658
    int32_t * v1 = (int32_t *)(result + 75); // 0x2ea658
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2ea68a - 0x2ea691
int64_t function_2ea68a(void) {
    // 0x2ea68a
    return function_2ea694();
}

// Address range: 0x2ea692 - 0x2ea694
int64_t function_2ea692(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ea692
    int64_t result; // 0x2ea692
    *(int32_t *)a4 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x2ea694 - 0x2ea695
int64_t function_2ea694(void) {
    // 0x2ea694
    int64_t result; // 0x2ea694
    return result;
}

// Address range: 0x2ea6e3 - 0x2ea6ec
int64_t function_2ea6e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ea6e3
    int64_t result; // 0x2ea6e3
    char * v1 = (char *)(result - 0x2c0a4496); // 0x2ea6e3
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x2ea6f4 - 0x2ea6fb
int64_t function_2ea6f4(void) {
    // 0x2ea6f4
    return function_fffffffff18aa763();
}

// Address range: 0x2ea73e - 0x2ea752
int64_t function_2ea73e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ea73e
    int64_t result; // 0x2ea73e
    uint64_t v1 = result;
    char * v2 = (char *)(v1 + 0x470013f2); // 0x2ea744
    *v2 = *v2 - (char)result;
    int64_t v3; // 0x2ea73e
    *(int32_t *)a1 = *(int32_t *)&v3;
    *(char *)-0x7b3a51ae = *(char *)-0x7b3a51ae + (char)(v1 / 256);
    return result;
}

// Address range: 0x2ea7d6 - 0x2ea7d7
int64_t function_2ea7d6(int64_t a1) {
    // 0x2ea7d6
    int64_t result; // 0x2ea7d6
    return result;
}

// Address range: 0x2ea7e5 - 0x2ea7e8
int64_t function_2ea7e5(void) {
    // 0x2ea7e5
    int64_t result; // 0x2ea7e5
    return result;
}

// Address range: 0x2ea7f6 - 0x2ea804
int64_t function_2ea7f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ea7f6
    int64_t v1; // 0x2ea7f6
    return v1 + 0x3ae401e8 & 0xffffffff;
}

// Address range: 0x2ea80c - 0x2ea819
int64_t function_2ea80c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ea80c
    int64_t result; // 0x2ea80c
    int64_t v1; // 0x2ea80c
    bool v2; // 0x2ea80c
    if (v2 || v2) {
        result = function_2ea7f6(a1, a2, a3, v1, (int64_t)&g2);
    }
    int32_t * v3 = (int32_t *)(8 * a1 + 0x2efdaf + a3); // 0x2ea80e
    *v3 = *v3 + (int32_t)v1;
    *(char *)result = *(char *)&result + 60;
    return result;
}

// Address range: 0x2ea827 - 0x2ea829
int64_t function_2ea827(void) {
    // 0x2ea827
    int64_t result; // 0x2ea827
    return result;
}

// Address range: 0x2ea83a - 0x2ea866
int64_t function_2ea83a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2ea83a
    int64_t v1; // 0x2ea83a
    int64_t v2 = v1;
    int64_t v3 = (v2 + 232 + (int64_t)((char)(v1 / 256) < (char)(a3 / 256))) % 256 | v2 & -256; // 0x2ea83c
    int32_t * v4 = (int32_t *)(a1 - 48); // 0x2ea83e
    *v4 = *v4 + (int32_t)a2;
    *(int32_t *)v3 = (int32_t)v3;
    int64_t v5 = unknown_3ef7bad3(); // 0x2ea843
    __asm_int(-120);
    *(int32_t *)0x2b2ef3df = *(int32_t *)0x2b2ef3df + (int32_t)v1;
    __asm_out(101, (int32_t)v5 | 58);
    unknown_74300061();
    return __asm_int3() & -0xff01 | (int64_t)&g1;
}

// Address range: 0x2ea87f - 0x2ea882
int64_t function_2ea87f(int64_t a1) {
    // 0x2ea87f
    int64_t result; // 0x2ea87f
    return result;
}

// Address range: 0x2ea8ca - 0x2ea8cc
int64_t function_2ea8ca(int64_t a1) {
    // 0x2ea8ca
    int64_t result; // 0x2ea8ca
    return result;
}

// Address range: 0x2ea8d4 - 0x2ea8fe
int64_t function_2ea8d4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x60385f7e); // 0x2ea8d4
    *v1 = *v1 + (int32_t)a3;
    char * v2 = (char *)(a4 - 51); // 0x2ea8df
    *v2 = *v2 + (char)(a3 / 256);
    int64_t v3 = unknown_ffffffffd33a13e8(); // 0x2ea8e2
    char * v4 = (char *)v3; // 0x2ea8e7
    *v4 = *v4 + (char)a3;
    char * v5 = (char *)(a1 + 0x5bc39706); // 0x2ea8e9
    *v5 = *v5 | (char)v3;
    return unknown_69f893f7();
}

// Address range: 0x2ea933 - 0x2ea939
int64_t function_2ea933(void) {
    // 0x2ea933
    int64_t result; // 0x2ea933
    return result;
}

// Address range: 0x2ea949 - 0x2ea94f
int64_t function_2ea949(void) {
    // 0x2ea949
    int64_t result; // 0x2ea949
    int32_t * v1 = (int32_t *)(result + 47); // 0x2ea94b
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2ea998 - 0x2ea99d
int64_t function_2ea998(int64_t a1) {
    // 0x2ea998
    int64_t result; // 0x2ea998
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x2ea9a1 - 0x2ea9a2
int64_t function_2ea9a1(void) {
    // 0x2ea9a1
    int64_t result; // 0x2ea9a1
    return result;
}

// Address range: 0x2ea9cf - 0x2eaa09
int64_t function_2ea9cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 94); // 0x2ea9cf
    int32_t v2 = *v1 + (int32_t)a3; // 0x2ea9cf
    *v1 = v2;
    if (v2 < 0) {
        // 0x2ea9d4
        return __asm_hlt();
    }
    // 0x2ea9f2
    unknown_ffffffffa8646000();
    __asm_int1();
    __asm_int1();
    return function_2177987();
}

// Address range: 0x2eaa13 - 0x2eaa18
int64_t function_2eaa13(void) {
    // 0x2eaa13
    return function_ffffffffe8e33758();
}

// Address range: 0x2eaa1d - 0x2eaa1f
int64_t function_2eaa1d(void) {
    // 0x2eaa1d
    return function_2ea9a1();
}

// Address range: 0x2eaa46 - 0x2eab8d
int64_t function_2eaa46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2eaa46
    int64_t v1; // 0x2eaa46
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a5;
    bool v5; // 0x2eaa46
    if (v5) {
        // 0x2eaa5c
        *(char *)a4 = (char)(v1 | a4);
        return a2 & 0xffffffff;
    }
    int64_t v6 = (int64_t)&v4; // 0x2eaa46
    *(char *)a2 = (char)(v1 / 256);
    unknown_fffffffff914157e();
    unsigned char v7 = *(char *)&v3; // 0x2eaa82
    *(char *)v3 = v7 / 2 | 128 * v7;
    char * v8 = (char *)(a4 - 38); // 0x2eaa84
    char v9 = a4; // 0x2eaa84
    *v8 = *v8 | v9;
    unknown_ffffffffcbd2b18d();
    char * v10 = (char *)(a1 + 85); // 0x2eaa8c
    unsigned char v11 = *v10; // 0x2eaa8c
    unsigned char v12 = v11 + v9; // 0x2eaa8c
    *v10 = v12;
    uint64_t v13 = v2 - a4 + (int64_t)(v12 < v11); // 0x2eaa91
    char * v14 = (char *)(v6 + 77); // 0x2eaa93
    *v14 = *v14 + (char)v13;
    unknown_3aca5e9c();
    unknown_ffffffffc2d614ab();
    char * v15 = (char *)(v6 + 112); // 0x2eaaaa
    *v15 = *v15 - v9;
    uint64_t v16 = v2 / 256; // 0x2eaab7
    char v17 = v16 | a4; // 0x2eaab7
    uint64_t v18 = (v16 % 256 | a4) - 1; // 0x2eaab9
    if (v17 == 0 || v18 == 0) {
        // 0x2eaabb
        *(int32_t *)a1 = __asm_insd((int16_t)v3);
        int64_t v19 = unknown_3a304ac9(); // 0x2eaac3
        int32_t * v20 = (int32_t *)((v19 + v18 / 256) % 256 | v19 & -256); // 0x2eaad1
        *v20 = *v20 + (int32_t)(v13 % 256 | v2 & 0xffffff00);
        uint32_t v21 = (int32_t)a1; // 0x2eaad8
        __asm_out_135((int16_t)v3, v21);
        uint32_t v22 = (int32_t)v3;
        *(int32_t *)v3 = 0x1000 * v22 | v22 / 0x200000 | 2048;
        uint32_t result = v21 - 0x1d9dcf01; // 0x2eaae0
        if (v21 < 0x1d9dcf01 || result == 0) {
            // 0x2eaafb
            __asm_outsd((int16_t)v3, *(int32_t *)0xe5d1f5cd);
            return unknown_fffffffff590e505();
        }
        // 0x2eaae8
        return result;
    }
    int64_t result2 = __asm_sti(); // 0x2eaaf6
    if (v17 >= 0) {
        // 0x2eab33
        return unknown_ffffffffe0c90f39();
    }
    // 0x2eaaf9
    return result2;
}

// Address range: 0x2eab94 - 0x2eab95
int64_t function_2eab94(void) {
    // 0x2eab94
    int64_t result; // 0x2eab94
    return result;
}

// Address range: 0x2eabb7 - 0x2eabcb
int64_t function_2eabb7(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 + 0x13d0001); // 0x2eabb7
    *v1 = *v1 >> 1;
    int64_t v2; // 0x2eabb7
    *(int32_t *)a3 = *(int32_t *)&v2 | (int32_t)a1;
    int64_t v3; // 0x2eabb7
    return 0x100000000 * v3 >> 32;
}

// Address range: 0x2eac04 - 0x2eac10
int64_t function_2eac04(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 - 1); // 0x2eac06
    *v1 = *v1 + (char)a4;
    int64_t v2; // 0x2eac04
    __asm_out_134((int16_t)a3, (char)v2);
    return function_ffffffffb4c135e3();
}
