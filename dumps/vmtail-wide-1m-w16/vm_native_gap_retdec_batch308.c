/*
 * Targeted RetDec C for native executable gap queue batch 308.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x437867-0x437a67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x437a67-0x437c67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x437c67-0x437e67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x437e67-0x438067 rank=- name=- kind=- bytes=- uncovered=-
 *   0x438067-0x438267 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45c434-0x45c634 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45c634-0x45c834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45c834-0x45ca34 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_437867(void);
int64_t function_43787a(void);
int64_t function_4378bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_437922(int64_t a1);
int64_t function_437941(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_437977(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_437985(int64_t a1);
int64_t function_43798e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_437994(int64_t a1, int64_t a2, int64_t a3);
int64_t function_437a65(void);
int64_t function_437a7b(int64_t a1);
int64_t function_437a8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_437acb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_437b5a(void);
int64_t function_437b88(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_437cad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_437ccd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_437cf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_437d39(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_437d46(int64_t a1);
int64_t function_437d51(int64_t a1);
int64_t function_437dc7(int64_t a1);
int64_t function_437e11(void);
int64_t function_437e88(int64_t a1);
int64_t function_437eff(void);
int64_t function_438024(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_438075(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4380d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4381b4(void);
int64_t function_4381c6(void);
int64_t function_4381eb(void);
int64_t function_438217(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_43823c(void);
int64_t function_438247(int64_t a1);
int64_t function_45c434(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45c478(int64_t a1);
int64_t function_45c483(void);
int64_t function_45c496(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_45c4e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45c528(void);
int64_t function_45c53a(int64_t a1);
int64_t function_45c543(void);
int64_t function_45c568(void);
int64_t function_45c597(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45c5c2(int64_t a1);
int64_t function_45c611(int64_t a1);
int64_t function_45c637(void);
int64_t function_45c694(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45c6b1(void);
int64_t function_45c6c1(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_45c70c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45c7de(void);
int64_t function_45c8fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45c99d(void);
int64_t function_45c9e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45ca20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4b98203d();
int64_t function_ffffffff92f6e68f();
int64_t function_ffffffff9704cfeb();
int64_t function_ffffffffd528b65e();
int64_t function_ffffffffd776d25e();
int64_t unknown_74305127();

// Address range: 0x437867 - 0x437868
int64_t function_437867(void) {
    // 0x437867
    int64_t result; // 0x437867
    return result;
}

// Address range: 0x43787a - 0x43787b
int64_t function_43787a(void) {
    // 0x43787a
    int64_t result; // 0x43787a
    return result;
}

// Address range: 0x4378bf - 0x437921
int64_t function_4378bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t * v1 = (int32_t *)(a4 - 0x4ef7f70); // 0x4378bf
    int64_t v2; // 0x4378bf
    *v1 = *v1 + (int32_t)v2;
    char v3 = __asm_in(10); // 0x4378c5
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v4 = (int64_t)*(int32_t *)(a3 - 114); // 0x4378cb
    if (46 * v4 != 0x2e00000000 * v4 >> 32) {
        // 0x4378d4
        return __asm_in_133(26);
    }
    uint64_t v5 = v2 & 0xffffff00 | 0x100000000 * a3 | (int64_t)v3 & 0xffffffff; // 0x4378cf
    uint64_t v6 = a3 & 0xffffffff; // 0x4378cf
    uint64_t v7 = v5 / v6; // 0x4378cf
    int64_t result = v7 & 0xffffffff; // 0x4378cf
    char * v8 = (char *)result; // 0x437913
    *v8 = *v8 ^ (char)v7;
    int32_t * v9 = (int32_t *)(v5 % v6); // 0x43791e
    *v9 = 0x200000 * *v9;
    return result;
}

// Address range: 0x437922 - 0x437937
int64_t function_437922(int64_t a1) {
    // 0x437922
    int64_t v1; // 0x437922
    return v1 + 0xde4d80c4 & 0xffffffcc | 51;
}

// Address range: 0x437941 - 0x437953
int64_t function_437941(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x437941
    int64_t v1; // 0x437941
    *(int32_t *)a1 = (int32_t)v1;
    int16_t v2 = a3; // 0x43794d
    return (v1 | (int64_t)__asm_in_134(v2)) & -256 | (int64_t)__asm_in_134(v2);
}

// Address range: 0x437977 - 0x437984
int64_t function_437977(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x7b67fac6; // 0x437977
    bool v2; // 0x437977
    *(char *)0x7b67fac6 = v1 + (char)a4 + (char)v2;
    int64_t result; // 0x437977
    return result;
}

// Address range: 0x437985 - 0x43798e
int64_t function_437985(int64_t a1) {
    // 0x437985
    int64_t v1; // 0x437985
    return function_437994(a1, a1, v1);
}

// Address range: 0x43798e - 0x437994
int64_t function_43798e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_wait(a1, a2, a3, a4); // 0x43798e
    int64_t v1; // 0x43798e
    __asm_outsb((int16_t)a3, (char)v1);
    int32_t * v2 = (int32_t *)(a4 - 36); // 0x437990
    uint32_t v3 = *v2; // 0x437990
    bool v4; // 0x43798e
    *v2 = v3 / 0x2000 | 0x80000 * (int32_t)v4 | 0x100000 * v3;
    return result;
}

// Address range: 0x437994 - 0x4379ab
int64_t function_437994(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x437994
    __asm_in_135(v1);
    __asm_in(-90);
    *(int32_t *)a1 = __asm_insd(v1);
    int64_t v2; // 0x437994
    *(char *)0x3ab1d480 = *(char *)0x3ab1d480 ^ (char)v2;
    uint32_t result = *(int32_t *)0x1c0928f62a0fc1b0; // 0x4379a0
    __asm_out(4, result);
    return result;
}

// Address range: 0x437a65 - 0x437a66
int64_t function_437a65(void) {
    // 0x437a65
    int64_t result; // 0x437a65
    return result;
}

// Address range: 0x437a7b - 0x437a81
int64_t function_437a7b(int64_t a1) {
    // 0x437a7b
    int64_t result; // 0x437a7b
    bool v1; // 0x437a7b
    if (v1) {
        result = function_437a65();
    }
    // 0x437a7d
    return result;
}

// Address range: 0x437a8e - 0x437ab2
int64_t function_437a8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x437a8e
    bool v1; // 0x437a8e
    if (a4 == 1 || v1) {
        char * v2 = (char *)(a1 + 104); // 0x437a90
        unsigned char v3 = *v2; // 0x437a90
        int64_t v4; // 0x437a8e
        unsigned char v5 = v3 + (char)v4; // 0x437a90
        *v2 = v5;
        return v4 + 0x68b3b6d0 + (int64_t)(v5 < v3) & 0xffffffff;
    }
    // 0x437a99
    return function_ffffffff9704cfeb();
}

// Address range: 0x437acb - 0x437ada
int64_t function_437acb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x437acb
    int64_t v1; // 0x437acb
    bool v2; // 0x437acb
    *(int32_t *)a4 = (int32_t)v1 - (int32_t)a2 + (int32_t)v2;
    return function_ffffffffd528b65e();
}

// Address range: 0x437b5a - 0x437b5f
int64_t function_437b5a(void) {
    // 0x437b5a
    return function_ffffffff92f6e68f();
}

// Address range: 0x437b88 - 0x437c9a
int64_t function_437b88(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x437b88
    int64_t v1; // 0x437b88
    int64_t v2 = v1;
    *(int16_t *)(v1 + 76) = (int16_t)v1;
    return 0x10000 * (int32_t)((v2 + 179) % 256 | v2 & 0xff00) >> 16 ^ 0x3e8c;
}

// Address range: 0x437cad - 0x437cc7
int64_t function_437cad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x437cad
    return (int64_t)*(int32_t *)0x7524de51c9879148;
}

// Address range: 0x437ccd - 0x437cef
int64_t function_437ccd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x437ccd
    int64_t result; // 0x437ccd
    bool v1; // 0x437ccd
    if (v1 || v1) {
        // 0x437ccf
        return result;
    }
    char v2 = *(char *)(a1 - 125); // 0x437ce6
    int32_t * v3 = (int32_t *)(a3 + 0x6ff78f51); // 0x437ce9
    int32_t v4 = *v3; // 0x437ce9
    *v3 = v4 ^ (int32_t)(a4 & 0xffffff00 | (int64_t)(v2 + (char)a4));
    return result;
}

// Address range: 0x437cf2 - 0x437d00
int64_t function_437cf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x437cf2
    return (int64_t)*(int32_t *)0x202e5329825686ee;
}

// Address range: 0x437d39 - 0x437d3f
int64_t function_437d39(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x437d39
    int64_t result; // 0x437d39
    return result;
}

// Address range: 0x437d46 - 0x437d49
int64_t function_437d46(int64_t a1) {
    // 0x437d46
    int64_t result; // 0x437d46
    return result;
}

// Address range: 0x437d51 - 0x437d55
int64_t function_437d51(int64_t a1) {
    // 0x437d51
    int64_t result; // 0x437d51
    return result;
}

// Address range: 0x437dc7 - 0x437dcb
int64_t function_437dc7(int64_t a1) {
    // 0x437dc7
    int64_t result; // 0x437dc7
    return result;
}

// Address range: 0x437e11 - 0x437e15
int64_t function_437e11(void) {
    // 0x437e11
    int64_t result; // 0x437e11
    return result;
}

// Address range: 0x437e88 - 0x437e89
int64_t function_437e88(int64_t a1) {
    // 0x437e88
    int64_t result; // 0x437e88
    return result;
}

// Address range: 0x437eff - 0x437f09
int64_t function_437eff(void) {
    // 0x437eff
    return function_ffffffffd776d25e();
}

// Address range: 0x438024 - 0x438027
int64_t function_438024(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x438024
    __asm_sti(a1, a2, a3, a4);
    return a4 & 0xffffffff;
}

// Address range: 0x438075 - 0x4380aa
int64_t function_438075(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x438075
    int64_t v1; // 0x438075
    int64_t v2 = v1;
    uint64_t v3 = (0x100000000 * v2 >> 32) * (int64_t)*(int32_t *)(v2 + 0x5316386f); // 0x438075
    uint64_t v4 = v3 / 0x100000000; // 0x438075
    int32_t v5 = v4; // 0x438075
    bool v6; // 0x438075
    if (v6 == v5 != 0 == (v5 != -1)) {
        // 0x43807d
        *(int64_t *)(v4 - 31) = a6;
        return __asm_sti(a5, (v6 ? -1 : 1) + a2, v4, a4);
    }
    // 0x4380a0
    *(char *)a1 = __asm_insb((int16_t)v4);
    unsigned char v7 = (char)v3; // 0x4380a2
    unsigned char v8 = v7 + 50 + (char)(v5 != 0 == (v5 != -1)); // 0x4380a2
    char v9 = v5 != 0 == (v5 != -1) ? v8 <= v7 : v7 > 205 ? -76 : -77; // 0x4380a7
    return v3 & 0xffffff00 | (int64_t)(v8 - v9);
}

// Address range: 0x4380d5 - 0x438174
int64_t function_4380d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4380d5
    int64_t v1; // 0x4380d5
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int64_t result = v1 ^ 231; // 0x4380f1
    int32_t * v4 = (int32_t *)result; // 0x4380f3
    int32_t v5 = *v4 + (int32_t)a3; // 0x4380f3
    *v4 = v5;
    if (v5 != 0) {
        // 0x4380e4
        return result;
    }
    char v6 = *(char *)(v2 + 100); // 0x438157
    int32_t * v7 = (int32_t *)(256 * (int64_t)(v6 | (char)(v2 / 256)) | v2 & -0xff01); // 0x43815c
    *v7 = *v7 & (int32_t)v3;
    int32_t * v8 = (int32_t *)(a1 + 76 + 4 * a3); // 0x43816b
    *v8 = *v8 - (int32_t)a1;
    return (int64_t)(*(int32_t *)&v3 | (int32_t)result | -0x8d0b5be);
}

// Address range: 0x4381b4 - 0x4381b7
int64_t function_4381b4(void) {
    // 0x4381b4
    int64_t result; // 0x4381b4
    return result;
}

// Address range: 0x4381c6 - 0x4381c7
int64_t function_4381c6(void) {
    // 0x4381c6
    int64_t result; // 0x4381c6
    return result;
}

// Address range: 0x4381eb - 0x4381ec
int64_t function_4381eb(void) {
    // 0x4381eb
    int64_t result; // 0x4381eb
    return result;
}

// Address range: 0x438217 - 0x43822b
int64_t function_438217(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x438217
    int64_t result; // 0x438217
    __asm_out_136(-0x5139 * (int16_t)result, (int32_t)result);
    if ((*(char *)(result - 0x54cdbfde) || (char)a5) == 0) {
        // 0x43829a
        return result;
    }
    // 0x438229
    return function_4381c6();
}

// Address range: 0x43823c - 0x43823e
int64_t function_43823c(void) {
    // 0x43823c
    int64_t result; // 0x43823c
    return result;
}

// Address range: 0x438247 - 0x43824c
int64_t function_438247(int64_t a1) {
    // 0x438247
    int64_t result; // 0x438247
    result = function_4381eb();
    // 0x438249
    return result;
}

// Address range: 0x45c434 - 0x45c43c
int64_t function_45c434(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45c434
    int64_t result; // 0x45c434
    return result;
}

// Address range: 0x45c478 - 0x45c47f
int64_t function_45c478(int64_t a1) {
    // 0x45c478
    int64_t result; // 0x45c478
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x45c483 - 0x45c484
int64_t function_45c483(void) {
    // 0x45c483
    int64_t result; // 0x45c483
    return result;
}

// Address range: 0x45c496 - 0x45c4ba
int64_t function_45c496(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x45c496
    int64_t v1; // 0x45c496
    int64_t v2 = v1;
    int32_t v3 = *(int32_t *)(a3 + 0x7e0fb846); // 0x45c49b
    *(char *)a1 = __asm_insb((int16_t)a3);
    if (((int32_t)(a5 % 2 != 0) - v3 + (int32_t)((v2 + 27) % 256 | v2 & 0x7f00) & 0x4000) == 0) {
        function_45c483();
    }
    int32_t * v4 = (int32_t *)(a3 - 0x7de1f164); // 0x45c4af
    *v4 = *v4 | (int32_t)a2;
    return function_4b98203d();
}

// Address range: 0x45c4e0 - 0x45c4ea
int64_t function_45c4e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45c4e0
    int64_t v1; // 0x45c4e0
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_45c568();
}

// Address range: 0x45c528 - 0x45c529
int64_t function_45c528(void) {
    // 0x45c528
    int64_t result; // 0x45c528
    return result;
}

// Address range: 0x45c53a - 0x45c53b
int64_t function_45c53a(int64_t a1) {
    // 0x45c53a
    int64_t result; // 0x45c53a
    return result;
}

// Address range: 0x45c543 - 0x45c544
int64_t function_45c543(void) {
    // 0x45c543
    int64_t result; // 0x45c543
    return result;
}

// Address range: 0x45c568 - 0x45c56a
int64_t function_45c568(void) {
    // 0x45c568
    int64_t result; // 0x45c568
    return result;
}

// Address range: 0x45c597 - 0x45c5be
int64_t function_45c597(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)a4; // 0x45c59f
    int64_t v2; // 0x45c597
    int32_t v3 = *v1 ^ (int32_t)v2; // 0x45c59f
    *v1 = v3;
    int64_t v4 = a1 & 0xffffffff; // 0x45c5a1
    if (a4 != 1 == v3 == 0) {
        v4 = function_45c543();
    }
    unsigned char v5 = (char)v4; // 0x45c5a4
    char v6 = v5 + 22; // 0x45c5a4
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x45c5a4
    int64_t v8 = v6 != 0 ? -1 : 0;
    float80_t v9; // 0x45c597
    *(float32_t *)((v8 & 0x100000000 * v2 >> 32) + 4 * a3) = (float32_t)v9;
    return v4 & -0xff01 | 256 * (64 * (int64_t)(v6 == 0) | (int64_t)(v5 < 234) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v5 % 16 > 25) | 4 * (int64_t)(v7 % 2 == 0)) | 512;
}

// Address range: 0x45c5c2 - 0x45c5c5
int64_t function_45c5c2(int64_t a1) {
    // 0x45c5c2
    int64_t result; // 0x45c5c2
    return result;
}

// Address range: 0x45c611 - 0x45c614
int64_t function_45c611(int64_t a1) {
    // 0x45c611
    int64_t result; // 0x45c611
    return result;
}

// Address range: 0x45c637 - 0x45c638
int64_t function_45c637(void) {
    // 0x45c637
    int64_t result; // 0x45c637
    return result;
}

// Address range: 0x45c694 - 0x45c6ae
int64_t function_45c694(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45c694
    int64_t v1; // 0x45c694
    bool v2; // 0x45c694
    if (v2 || false) {
        v1 = function_45c637();
    }
    unsigned char v3 = (char)v1;
    char v4 = v2; // 0x45c69b
    unsigned char v5 = v3 + v4; // 0x45c69b
    char v6 = v2; // 0x45c69b
    bool v7 = v2 ? v6 - v4 > v3 | v5 != -1 : v5 > v3; // 0x45c69b
    bool v8 = llvm_ctpop_i8(v6) % 2 != 0 | v7;
    int64_t result = __asm_hlt(); // 0x45c69d
    *(int32_t *)-0x7e14cd9685e6eecb = (int32_t)result;
    while (!v8) {
        // 0x45c69d
        result = __asm_hlt();
        *(int32_t *)-0x7e14cd9685e6eecb = (int32_t)result;
    }
    // 0x45c6ad
    return result;
}

// Address range: 0x45c6b1 - 0x45c6bf
int64_t function_45c6b1(void) {
    // 0x45c6b1
    int64_t result; // 0x45c6b1
    return result;
}

// Address range: 0x45c6c1 - 0x45c6d9
int64_t function_45c6c1(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x45c6c1
    int64_t v1; // 0x45c6c1
    uint64_t v2 = v1;
    char * v3 = (char *)(a1 + 114); // 0x45c6c1
    bool v4; // 0x45c6c1
    *v3 = (char)v4 + (char)(a3 / 256) + *v3;
    int64_t v5 = (int64_t)(*(int32_t *)(a2 - 0x7a28a53b) ^ (int32_t)v1); // 0x45c6c4
    int32_t * v6 = (int32_t *)(v2 + 70); // 0x45c6cc
    int32_t v7; // 0x45c6c1
    *v6 = (int32_t)(int64_t)&v7;
    *(int64_t *)((int64_t)*v6 - 8) = v5;
    int64_t v8; // 0x45c6c1
    *(char *)a4 = *(char *)&v8 + (char)(a4 / 256);
    char * v9 = (char *)v5; // 0x45c6d4
    *v9 = *v9 | (char)a4;
    return v2 / 256 % 256 ^ v2;
}

// Address range: 0x45c70c - 0x45c70f
int64_t function_45c70c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45c70c
    int64_t result; // 0x45c70c
    return result;
}

// Address range: 0x45c7de - 0x45c7df
int64_t function_45c7de(void) {
    // 0x45c7de
    int64_t result; // 0x45c7de
    return result;
}

// Address range: 0x45c8fa - 0x45c976
int64_t function_45c8fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45c8fa
    bool v1; // 0x45c8fa
    if (v1) {
        uint32_t result = *(int32_t *)-0x32b0b46a0916a6d0; // 0x45c955
        *(int32_t *)0x44ce21d3579b0e9a = result;
        return result;
    }
    int64_t result2 = unknown_74305127(); // 0x45c8fe
    *(int32_t *)a2 = (int32_t)a2 | 0x6c5f77b8;
    return result2;
}

// Address range: 0x45c99d - 0x45c99e
int64_t function_45c99d(void) {
    // 0x45c99d
    int64_t result; // 0x45c99d
    return result;
}

// Address range: 0x45c9e8 - 0x45ca19
int64_t function_45c9e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45c9e8
    int64_t v1; // 0x45c9e8
    uint32_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0x45c9e8
    int64_t v3 = v2; // 0x45c9e8
    *(char *)a1 = (char)a3;
    unsigned char v4 = (char)a4; // 0x45c9ec
    unsigned char v5 = v4 % 32; // 0x45c9ec
    bool v6; // 0x45c9e8
    int64_t result2; // 0x45c9e8
    bool v7; // 0x45c9e8
    if (v5 == 0) {
        result2 = v3;
        if (v7) {
            goto lab_0x45ca09;
        } else {
            goto lab_0x45c9f4;
        }
    } else {
        char * v8 = (char *)(a3 + 0x3bbd1f2c); // 0x45c9ec
        unsigned char v9 = *v8; // 0x45c9ec
        unsigned char v10 = v9 >> 8 - v5 | v9 << v5; // 0x45c9ec
        *v8 = v10;
        unsigned char v11 = v10 % 2; // 0x45c9ec
        result2 = v3;
        v6 = v5 == 1 ? v10 / 128 != v11 : v7;
        if (v11 == 0) {
            goto lab_0x45c9f4;
        } else {
            goto lab_0x45ca09;
        }
    }
  lab_0x45ca09:
    // 0x45ca09
    *(char *)0x23782d16c3957edd = (char)v2;
    int64_t result = v3 & 0xffffff00 | 83; // 0x45ca15
    result2 = result;
    int64_t v12 = v1 + 8; // 0x45ca17
    if (!v7 && v7 == v6) {
        // 0x45ca19
        return result;
    }
    goto lab_0x45c9f4;
  lab_0x45c9f4:
    // 0x45c9f4
    *(int64_t *)(v12 - 8) = a4;
    char * v13 = (char *)(a4 + a1 + (v7 ? -1 : 1)); // 0x45ca01
    *v13 = *v13 + v4;
    return result2;
}

// Address range: 0x45ca20 - 0x45ca25
int64_t function_45ca20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45ca20
    int64_t result; // 0x45ca20
    *(char *)a4 = (char)(result & a3);
    return result;
}
