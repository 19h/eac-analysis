/*
 * Targeted RetDec C for native executable gap queue batch 263.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x18dc85-0x18de85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18e085-0x18e285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f2e1e-0x2f301e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f301e-0x2f321e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f321e-0x2f341e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f341e-0x2f361e rank=- name=- kind=- bytes=- uncovered=-
 *   0x458434-0x458634 rank=- name=- kind=- bytes=- uncovered=-
 *   0x458634-0x458834 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_16c3066();
int64_t function_18dc77();
int64_t function_18dc85(void);
int64_t function_18dca2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18dcd7(void);
int64_t function_18dce6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18dd01(void);
int64_t function_18dd54(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18dd7a(int64_t a1);
int64_t function_18ddfe(void);
int64_t function_18de05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18e085(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18e145(void);
int64_t function_18e15d(int64_t a1);
int64_t function_18e191(int64_t a1);
int64_t function_18e1ca(int64_t a1);
int64_t function_18e1ef(int64_t a1);
int64_t function_18e220(void);
int64_t function_18e23e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20190a7();
int64_t function_21749d9();
int64_t function_2f2e1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f2e62(int64_t a1);
int64_t function_2f2ea3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f2f7b(void);
int64_t function_2f2fa2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f2fca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f2fd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f3017(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f3035(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2f30d1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f30e3(void);
int64_t function_2f312d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f313e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f3156(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_2f31d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f31eb(void);
int64_t function_2f31f1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f3226(void);
int64_t function_2f3279(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f32cd(int64_t a1, int64_t a2);
int64_t function_2f32e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f3308(void);
int64_t function_2f3360(void);
int64_t function_2f337d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2f341a(void);
int64_t function_2f341d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f341f(void);
int64_t function_2f345f(void);
int64_t function_2f3483(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2f3576(void);
int64_t function_2f358b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_369f7be();
int64_t function_37c3e0b();
int64_t function_380d34f5();
int64_t function_458434(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4584ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45850b(void);
int64_t function_458559(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45858c(void);
int64_t function_458599(void);
int64_t function_4585a7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4585c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45863b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4586ad(int64_t a1, int64_t a2, int64_t a3);
int64_t function_458714(int64_t a1);
int64_t function_542ab6e();
int64_t function_73249e4c();
int64_t function_ffffffffcfc026a0();
int64_t function_ffffffffd8fd3011();
int64_t function_ffffffffe693fb00();
int64_t unknown_155de46();
int64_t unknown_15812ea8();
int64_t unknown_3ab1c396();
int64_t unknown_3d311adf();
int64_t unknown_3d311c8d();
int64_t unknown_4bdb4575();
int64_t unknown_68e8006b();
int64_t unknown_7217adf7();
int64_t unknown_ffffffff85a46c88();
int64_t unknown_ffffffff93d6bdbb();
int64_t unknown_ffffffffa7fc0198();
int64_t unknown_ffffffffe529b4ac();
int64_t unknown_ffffffffe842b0ad();

// Address range: 0x18dc85 - 0x18dc86
int64_t function_18dc85(void) {
    // 0x18dc85
    int64_t result; // 0x18dc85
    return result;
}

// Address range: 0x18dca2 - 0x18dcb2
int64_t function_18dca2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18dca2
    int64_t result; // 0x18dca2
    bool v1; // 0x18dca2
    if (v1) {
        result = function_18dc77();
    }
    // 0x18dca4
    int64_t v2; // 0x18dca2
    int32_t * v3 = (int32_t *)(v2 + 0x13de8a6); // 0x18dca4
    *v3 = *v3 + (int32_t)a4;
    char * v4 = (char *)(v2 - 102 + 8 * result); // 0x18dcaa
    *v4 = *v4 & (char)a2;
    return result;
}

// Address range: 0x18dcd7 - 0x18dce2
int64_t function_18dcd7(void) {
    char v1 = *(char *)-0x17230d22; // 0x18dcd7
    int64_t v2; // 0x18dcd7
    *(char *)-0x17230d22 = v1 + (char)((uint64_t)v2 / 256);
    return function_20190a7();
}

// Address range: 0x18dce6 - 0x18dcef
int64_t function_18dce6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18dce6
    int64_t result; // 0x18dce6
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x18dd01 - 0x18dd02
int64_t function_18dd01(void) {
    // 0x18dd01
    int64_t result; // 0x18dd01
    return result;
}

// Address range: 0x18dd54 - 0x18dd58
int64_t function_18dd54(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 101); // 0x18dd54
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x18dd54
    return result;
}

// Address range: 0x18dd7a - 0x18dd7d
int64_t function_18dd7a(int64_t a1) {
    // 0x18dd7a
    int64_t result; // 0x18dd7a
    bool v1; // 0x18dd7a
    if (!v1 && !v1) {
        result = function_18dd01();
    }
    // 0x18dd7c
    return result;
}

// Address range: 0x18ddfe - 0x18de01
int64_t function_18ddfe(void) {
    // 0x18ddfe
    int64_t result; // 0x18ddfe
    return result;
}

// Address range: 0x18de05 - 0x18de84
int64_t function_18de05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3 = a5;
    uint32_t v4 = (int32_t)a4;
    int64_t v5; // 0x18de05
    *(int32_t *)a4 = v4 - (int32_t)v5;
    uint32_t v6 = v4 % 32; // 0x18de0a
    if (v6 != 0) {
        uint32_t v7 = *(int32_t *)(a3 - 103); // 0x18de0a
        *(int32_t *)(v1 - 103) = v7 >> 32 - v6 | v7 << v6;
    }
    int64_t v8 = v5 & -256 | 252; // 0x18de0d
    char * v9 = (char *)v8; // 0x18de11
    unsigned char v10 = *v9; // 0x18de11
    unsigned char v11 = v10 + (char)(v5 / 256); // 0x18de11
    unsigned char v12 = llvm_ctpop_i8(v11); // 0x18de11
    *v9 = v11;
    if (v12 % 2 != 0) {
        uint32_t v13 = *(int32_t *)&v1; // 0x18de15
        uint32_t v14 = v13 + (int32_t)v1; // 0x18de15
        *(int32_t *)v1 = v14;
        __asm_in(55);
        int64_t v15 = (int64_t)&v3; // bp-8, 0x18de19
        int32_t * v16 = (int32_t *)(v8 + 15); // 0x18de3d
        int32_t v17 = *v16; // 0x18de3d
        *v16 = v17 + (int32_t)(int64_t)&v15 + (int32_t)(v14 < v13);
        return unknown_155de46();
    }
    char v18 = v11 < v10 ? -3 : -4; // 0x18de52
    uint64_t v19 = (v5 & 0xffffff00 | (int64_t)(*(char *)(a1 + 88) + v18)) + v5; // 0x18de55
    uint64_t v20 = v19 / 256; // 0x18de57
    *(char *)a1 = (char)(v20 & a1);
    int64_t v21 = v3; // 0x18de59
    *(char *)0x40e64a61 = *(char *)0x40e64a61 + (char)v20;
    int64_t v22 = a4; // 0x18de60
    int64_t v23 = a1;
    int64_t v24 = v23; // 0x18de60
    int64_t result; // 0x18de05
    while (v22 != 0) {
        bool v25; // 0x18de05
        int64_t v26 = v23 + (v25 ? -4 : 4); // 0x18de60
        v22--;
        v24 = v26;
        if (*(int32_t *)v23 == (int32_t)result) {
            // break -> ._crit_edge
            break;
        }
        v23 = v26;
        v24 = v23;
    }
    // ._crit_edge
    v3 = result;
    char * v27 = (char *)((v19 & 0xffff00ff | (int64_t)&g1) - 0x3bd70d6d); // 0x18de6d
    *v27 = *v27 + (char)((int64_t)&g1 >> 8);
    *(int32_t *)v24 = *(int32_t *)&v2;
    int64_t v28 = result;
    *(char *)v28 = *(char *)&result + (char)v28;
    char * v29 = (char *)(v21 + 0x408000 + result); // 0x18de7b
    *v29 = *v29 + (char)result;
    __asm_out(-94, (char)result);
    return result;
}

// Address range: 0x18e085 - 0x18e09b
int64_t function_18e085(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_3ab1c396(); // 0x18e090
    int64_t v1; // 0x18e085
    __asm_outsb((int16_t)a3, (char)v1);
    return result;
}

// Address range: 0x18e145 - 0x18e148
int64_t function_18e145(void) {
    // 0x18e145
    int64_t v1; // 0x18e145
    return v1 | 2;
}

// Address range: 0x18e15d - 0x18e160
int64_t function_18e15d(int64_t a1) {
    // 0x18e15d
    int64_t result; // 0x18e15d
    return result;
}

// Address range: 0x18e191 - 0x18e192
int64_t function_18e191(int64_t a1) {
    // 0x18e191
    int64_t result; // 0x18e191
    return result;
}

// Address range: 0x18e1ca - 0x18e1cd
int64_t function_18e1ca(int64_t a1) {
    // 0x18e1ca
    int64_t result; // 0x18e1ca
    return result;
}

// Address range: 0x18e1ef - 0x18e1f0
int64_t function_18e1ef(int64_t a1) {
    // 0x18e1ef
    int64_t result; // 0x18e1ef
    return result;
}

// Address range: 0x18e220 - 0x18e221
int64_t function_18e220(void) {
    // 0x18e220
    int64_t result; // 0x18e220
    return result;
}

// Address range: 0x18e23e - 0x18e25c
int64_t function_18e23e(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x18e243
    int64_t v2; // 0x18e23e
    char v3 = v2;
    __asm_out_133(v1, v3);
    uint32_t v4 = (int32_t)v2 & -256 | 76; // 0x18e246
    int32_t v5 = a2;
    uint32_t v6 = v4 + v5; // 0x18e246
    __asm_outsd(v1, v5);
    __asm_outsb(v1, (char)a2);
    char v7 = v3; // 0x18e24e
    int64_t v8; // 0x18e23e
    if (v6 < v4 || v6 == 0) {
        int64_t v9 = function_18e220(); // 0x18e24e
        v8 = v9;
        v7 = v9;
    }
    char * v10 = (char *)(4 * a2 + (int64_t)v6); // 0x18e250
    *v10 = *v10 + v7;
    *(int32_t *)v8 = *(int32_t *)&v8 + v6;
    return function_542ab6e();
}

// Address range: 0x2f2e1e - 0x2f2e60
int64_t function_2f2e1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f2e1e
    int64_t v1; // 0x2f2e1e
    int32_t * v2 = (int32_t *)(v1 - 0x3588fc5a); // 0x2f2e2b
    *v2 = *v2 + (int32_t)v1;
    int64_t v3 = unknown_15812ea8(); // 0x2f2e3b
    bool v4; // 0x2f2e1e
    char * v5 = (char *)((v4 ? -1 : 1) + a1); // 0x2f2e47
    *v5 = -1 - *v5;
    int32_t * v6 = (int32_t *)v3; // 0x2f2e58
    *v6 = *v6 & (int32_t)v3;
    return v3 & 0xffffffff ^ 0xf0ae89f;
}

// Address range: 0x2f2e62 - 0x2f2e79
int64_t function_2f2e62(int64_t a1) {
    // 0x2f2e62
    int64_t v1; // 0x2f2e62
    unsigned char v2 = (char)v1;
    bool v3; // 0x2f2e62
    char v4 = v3; // 0x2f2e62
    unsigned char v5 = v4 + v2; // 0x2f2e62
    char v6 = v3; // 0x2f2e62
    bool v7 = v3 ? v5 != -1 | v6 - v4 > v2 : v5 > v2; // 0x2f2e62
    *(char *)v1 = v6;
    int32_t * v8 = (int32_t *)(2 * v1); // 0x2f2e64
    *v8 = *v8 - (int32_t)v1 + (int32_t)v7;
    unknown_4bdb4575();
    return __asm_sti();
}

// Address range: 0x2f2ea3 - 0x2f2ebd
int64_t function_2f2ea3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f2ea3
    return function_ffffffffe693fb00(a4);
}

// Address range: 0x2f2f7b - 0x2f2f7c
int64_t function_2f2f7b(void) {
    // 0x2f2f7b
    int64_t result; // 0x2f2f7b
    return result;
}

// Address range: 0x2f2fa2 - 0x2f2fa9
int64_t function_2f2fa2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f2fa2
    int64_t v1; // 0x2f2fa2
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a3;
    return function_ffffffffd8fd3011();
}

// Address range: 0x2f2fca - 0x2f2fd1
int64_t function_2f2fca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = __asm_in(-32); // 0x2f2fca
    int64_t v2; // 0x2f2fca
    int64_t v3 = v2 | (int64_t)v1; // 0x2f2fca
    return v3 & -0x10000 | (int64_t)(v1 + (char)a4) | (v3 | 256 * v2) & 0xff00;
}

// Address range: 0x2f2fd3 - 0x2f2ff3
int64_t function_2f2fd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 101); // 0x2f2fd5
    int64_t v2; // 0x2f2fd3
    int32_t v3 = *v1 + (int32_t)v2; // 0x2f2fd5
    *v1 = v3;
    if (a4 == 1 || v3 == 0) {
        int32_t * v4 = (int32_t *)(a2 - 0x5476e274); // 0x2f2fe7
        *v4 = *v4 + (int32_t)a2;
        return function_2f2f7b();
    }
    // 0x2f301b
    return v2 & 0xffffffff;
}

// Address range: 0x2f3017 - 0x2f301b
int64_t function_2f3017(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f3017
    int64_t v1; // 0x2f3017
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return v1 | 190;
}

// Address range: 0x2f3035 - 0x2f30d1
int64_t function_2f3035(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a2 - 66); // 0x2f3035
    uint32_t v2 = *v1; // 0x2f3035
    int64_t v3; // 0x2f3035
    uint32_t v4 = v2 + (int32_t)v3; // 0x2f3035
    *v1 = v4;
    if (v4 >= v2 && v4 != 0) {
        // 0x2f303a
        return function_16c3066();
    }
    int64_t v5 = v3 & -256; // 0x2f3058
    *(char *)0x4e5a7461 = *(char *)0x4e5a7461 + (char)(v3 / 256);
    if (a4 == 0) {
        // 0x2f30c9
        return (v3 + 11) % 256 | v5;
    }
    // 0x2f3069
    return (v3 + 91) % 256 | v5;
}

// Address range: 0x2f30d1 - 0x2f30d3
int64_t function_2f30d1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f30d1
    int64_t result; // 0x2f30d1
    return result;
}

// Address range: 0x2f30e3 - 0x2f30e4
int64_t function_2f30e3(void) {
    // 0x2f30e3
    int64_t result; // 0x2f30e3
    return result;
}

// Address range: 0x2f312d - 0x2f313e
int64_t function_2f312d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f312d
    int64_t result; // 0x2f312d
    char v1 = result; // 0x2f3139
    *(char *)a1 = v1;
    __asm_out(-57, v1);
    return result;
}

// Address range: 0x2f313e - 0x2f3156
int64_t function_2f313e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f313e
    int64_t v1; // 0x2f313e
    char * v2 = (char *)(4 * a2 - 0x2643fc6 + v1); // 0x2f313e
    *v2 = *v2 & (char)((uint64_t)v1 / 256);
    function_2f30e3();
    return function_37c3e0b();
}

// Address range: 0x2f3156 - 0x2f318c
int64_t function_2f3156(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 13); // 0x2f3159
    *v1 = *v1 + (int32_t)a2;
    int64_t v2 = unknown_68e8006b(); // 0x2f315c
    char * v3 = (char *)(v2 + 0x2da09646); // 0x2f3161
    *v3 = *v3 + ((char)(a4 / 256) ^ -24);
    int64_t v4; // 0x2f3156
    int32_t * v5 = (int32_t *)(v4 + 0x298e21ab); // 0x2f316c
    *v5 = *v5 | (int32_t)v2;
    int64_t result = v2 & 0xe4cd31c5 | 0x1b32ce3a; // 0x2f3177
    char v6 = *(char *)(result + 0xfffffff5 & 0xffffffff); // 0x2f3182
    int64_t v7; // 0x2f3156
    char v8 = *(char *)&v7; // 0x2f3189
    __asm_outsb((int16_t)(256 * (int64_t)(v6 | (char)(a3 / 256)) | a3 % 256), v8);
    return result;
}

// Address range: 0x2f31d9 - 0x2f31e1
int64_t function_2f31d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f31d9
    int64_t v1; // 0x2f31d9
    bool v2; // 0x2f31d9
    *(char *)(v1 & 0xffffffff) = (char)v2;
    return a4 & 0xffffffff;
}

// Address range: 0x2f31eb - 0x2f31ef
int64_t function_2f31eb(void) {
    // 0x2f31eb
    int64_t result; // 0x2f31eb
    return result;
}

// Address range: 0x2f31f1 - 0x2f3202
int64_t function_2f31f1(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_7217adf7(); // 0x2f31f1
    return (int64_t)((int32_t)v1 - *(int32_t *)v1);
}

// Address range: 0x2f3226 - 0x2f3227
int64_t function_2f3226(void) {
    // 0x2f3226
    int64_t result; // 0x2f3226
    return result;
}

// Address range: 0x2f3279 - 0x2f32b0
int64_t function_2f3279(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2;
    int64_t v2; // 0x2f3279
    int32_t * v3 = (int32_t *)(v2 + 0x41000000); // 0x2f3279
    *v3 = *v3 + (int32_t)v2;
    char * v4 = (char *)(a3 - 0x1dc4f91); // 0x2f3284
    *v4 = *v4 + (char)(v2 / 256);
    int64_t v5 = unknown_ffffffffa7fc0198(); // 0x2f3292
    int32_t * v6 = (int32_t *)(a1 - 79); // 0x2f329c
    int32_t v7 = *v6; // 0x2f329c
    int32_t v8 = v7 + 0x3d000068; // 0x2f329c
    *v6 = v8;
    int64_t v9 = v5; // 0x2f32a4
    if (v8 < 0 == (v8 & (v7 ^ -0x80000000)) < 0 == (v8 != 0)) {
        v9 = function_2f3226();
    }
    // 0x2f32a6
    *(int32_t *)v1 = *(int32_t *)&v1 | (int32_t)v2;
    int32_t * v10 = (int32_t *)(v1 + 66); // 0x2f32aa
    *v10 = *v10 & 0x3d000068;
    return v9 ^ 122;
}

// Address range: 0x2f32cd - 0x2f32e1
int64_t function_2f32cd(int64_t a1, int64_t a2) {
    // 0x2f32cd
    int64_t v1; // 0x2f32cd
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a2;
    __asm_sti();
    return unknown_3d311adf();
}

// Address range: 0x2f32e1 - 0x2f32fb
int64_t function_2f32e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f32e1
    int64_t v1; // 0x2f32e1
    *(int32_t *)-0x173535508ac56f08 = (int32_t)v1;
    int32_t * v2 = (int32_t *)(a1 + 0x70a20c82); // 0x2f32eb
    *v2 = *v2 + (int32_t)a1;
    int64_t v3; // 0x2f32e1
    *(int32_t *)a4 = *(int32_t *)&v3 + (int32_t)a3;
    return v1 + 0xe8de9548 & 0xffffffff;
}

// Address range: 0x2f3308 - 0x2f330d
int64_t function_2f3308(void) {
    // 0x2f3308
    return function_380d34f5();
}

// Address range: 0x2f3360 - 0x2f3365
int64_t function_2f3360(void) {
    // 0x2f3360
    return function_21749d9();
}

// Address range: 0x2f337d - 0x2f340c
int64_t function_2f337d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_ffffffff85a46c88(); // 0x2f3382
    int64_t v2; // 0x2f337d
    if ((__readgsdword(a3) & (int32_t)v2) == 0) {
        int64_t result = (v1 + 92) % 256 | v1 & -256; // 0x2f3402
        *(int32_t *)a1 = (int32_t)result;
        return result;
    }
    char * v3 = (char *)(v1 - 0x17ff5500); // 0x2f3390
    *v3 = *v3 + (char)v1;
    int32_t * v4 = (int32_t *)(a4 + 1); // 0x2f3396
    uint32_t v5 = *v4; // 0x2f3396
    uint32_t v6 = v5 + (int32_t)a3; // 0x2f3396
    *v4 = v6;
    char * v7 = (char *)(a4 + 0x3ae70099); // 0x2f3399
    *v7 = *v7 - (char)v2 + (char)(v6 < v5);
    *(int32_t *)a1 = (int32_t)v1;
    bool v8; // 0x2f337d
    __asm_out(-32, (char)unknown_ffffffffe529b4ac((v8 ? -4 : 4) + a1));
    int64_t result2 = unknown_ffffffff93d6bdbb(); // 0x2f33b5
    char * v9 = (char *)(result2 - 3); // 0x2f33ba
    *v9 = *v9 + (char)a3;
    *(int32_t *)result2 = (int32_t)result2;
    return result2;
}

// Address range: 0x2f341a - 0x2f341c
int64_t function_2f341a(void) {
    // 0x2f341a
    return function_2f341f();
}

// Address range: 0x2f341d - 0x2f341f
int64_t function_2f341d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f341d
    int64_t result; // 0x2f341d
    *(int32_t *)a4 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x2f341f - 0x2f3420
int64_t function_2f341f(void) {
    // 0x2f341f
    int64_t result; // 0x2f341f
    return result;
}

// Address range: 0x2f345f - 0x2f3460
int64_t function_2f345f(void) {
    // 0x2f345f
    int64_t result; // 0x2f345f
    return result;
}

// Address range: 0x2f3483 - 0x2f34ed
int64_t function_2f3483(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x2f3483
    char v3 = *(char *)(a2 - 98 + 8 * v2); // 0x2f3483
    unknown_3d311c8d();
    int32_t * v4 = (int32_t *)(a3 + 0x32ef01e8 + v2); // 0x2f348c
    uint32_t v5 = *v4; // 0x2f348c
    uint32_t v6 = v5 + (int32_t)a3; // 0x2f348c
    *v4 = v6;
    char * v7 = (char *)(a2 - 0x19049580); // 0x2f3493
    *v7 = *v7 + (char)(a4 / 256) + (char)(v6 < v5);
    uint64_t v8 = __asm_int3(); // 0x2f349e
    bool v9; // 0x2f3483
    int64_t v10 = a4 & -256 | (int64_t)((char)v9 + (char)a4 + v3 - (char)v8); // 0x2f34a4
    *(int64_t *)0x5cbbd9a4 = -31;
    unsigned char v11 = *(char *)&v1; // 0x2f34ad
    char v12 = v2 / 256; // 0x2f34ad
    unsigned char v13 = v11 + v12; // 0x2f34ad
    *(char *)a3 = v13;
    if (v13 < v11 || v13 == 0) {
        int64_t v14 = unknown_ffffffffe842b0ad(); // 0x2f34b1
        int32_t * v15 = (int32_t *)(a1 + 0x63fa2492); // 0x2f34b6
        uint32_t v16 = *v15; // 0x2f34b6
        uint32_t v17 = v16 + (int32_t)v10; // 0x2f34b6
        *v15 = v17;
        return v14 + 0x83069 + (int64_t)(v17 < v16) & 0xffffffff;
    }
    // 0x2f34c6
    *(int64_t *)v1 = a1;
    char * v18 = (char *)v10; // 0x2f34cb
    *v18 = *v18 + (char)(v8 / 256);
    *(int32_t *)a1 = (int32_t)v8 & -189;
    *(int64_t *)0x5cbbd99c = 0x550b1300;
    *(char *)-0x19236720 = *(char *)-0x19236720 + v12;
    int64_t * v19 = (int64_t *)((a2 & 0xffffffff) - 35); // 0x2f34df
    *v19 = -1 - *v19;
    return a2 & 0xef3bdc28 | 0x10c423d7;
}

// Address range: 0x2f3576 - 0x2f357c
int64_t function_2f3576(void) {
    // 0x2f3576
    return function_369f7be();
}

// Address range: 0x2f358b - 0x2f361b
int64_t function_2f358b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __asm_wait(0xe8590cd7); // 0x2f3599
    int64_t result = v1 & -0xff01 | (int64_t)"lock"; // 0x2f35a5
    char * v2 = (char *)result; // 0x2f35a7
    char v3 = (int32_t)v1 < 0x73ade001 ? (char)((int64_t)&g3 >> 8) + 1 : (char)((int64_t)&g3 >> 8); // 0x2f35a7
    *v2 = *v2 - v3;
    int32_t * v4 = (int32_t *)(a2 + 0x6a25eb1); // 0x2f35aa
    int64_t v5; // 0x2f358b
    *v4 = *v4 + (int32_t)v5;
    int64_t v6; // bp-16, 0x2f358b
    if ((a4 & -0xff01 || (int64_t)&g3) != 0) {
        // 0x2f35b2
        v6 = 0x7b460000;
        // 0x2f35b7
        return result;
    }
    int32_t * v7 = (int32_t *)(8 * v5 + 85 + result); // 0x2f35f6
    uint32_t v8 = (int32_t)result; // 0x2f35f6
    *v7 = *v7 | v8;
    int32_t v9 = v8 - 0x374ab701; // 0x2f35fa
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x2f35fa
    *(int32_t *)0xe8590cd7 = v8;
    *(int32_t *)0xe8590cd3 = v8;
    bool v11; // 0x2f358b
    v6 = 0x4000 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | (int64_t)(v8 < 0x374ab701) | 64 * (int64_t)(v9 == 0) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(v8 % 16 > 16) | 2048 * (int64_t)((0x374ab700 - v8 & v8) < 0) | 4 * (int64_t)(v10 % 2 == 0) | 1026;
    if (llvm_ctpop_i8((char)*(int32_t *)0x510fe375 + 49) % 2 != 0) {
        // 0x2f35b7
        return result;
    }
    int64_t v12 = v5 & 0xffff00ff | (int64_t)&g1; // 0x2f3608
    int32_t v13 = *(int32_t *)(8 * v12 + 57 + (int64_t)&v6); // 0x2f3616
    *(int32_t *)(int64_t)(v13 & -0x17a6f331) = __asm_insd((int16_t)v12);
    return result;
}

// Address range: 0x458434 - 0x4584ed
int64_t function_458434(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x458434
    int64_t v1; // 0x458434
    // 0x4584b3
    *(int64_t *)(v1 - 8) = a3;
    bool v2; // 0x458434
    return v1 - (v2 ? 0x3a4a3149 : 0x3a4a3148) & 0xffffffff;
    int64_t v3 = v1 | a2;
    int32_t v4 = v3; // 0x45843c
    return v1 & -0xff01 | 0x4000 * (int64_t)(v4 == 0) | 0x8000 * (int64_t)(v4 < 0) | 1024 * (int64_t)(llvm_ctpop_i8((char)v3) % 2 == 0) | 512;
}

// Address range: 0x4584ee - 0x4584fb
int64_t function_4584ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4584ee
    return __asm_hlt();
}

// Address range: 0x45850b - 0x45850c
int64_t function_45850b(void) {
    // 0x45850b
    int64_t result; // 0x45850b
    return result;
}

// Address range: 0x458559 - 0x45855f
int64_t function_458559(int64_t a1, int64_t a2, int64_t a3) {
    // 0x458559
    return function_45850b();
}

// Address range: 0x45858c - 0x458591
int64_t function_45858c(void) {
    // 0x45858c
    return function_ffffffffcfc026a0();
}

// Address range: 0x458599 - 0x45859e
int64_t function_458599(void) {
    // 0x458599
    return function_73249e4c();
}

// Address range: 0x4585a7 - 0x4585ae
int64_t function_4585a7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4585a7
    int64_t result; // 0x4585a7
    int32_t * v1 = (int32_t *)(result - 0x77b1b114); // 0x4585a7
    *v1 = *v1 - (int32_t)a3;
    return result;
}

// Address range: 0x4585c5 - 0x4585e5
int64_t function_4585c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4; // 0x4585cc
    int64_t v2; // 0x4585c5
    uint32_t v3 = *(int32_t *)((v2 + 0x98a9f446 & 0xffffffff) + 0x64f7757b); // 0x4585cc
    int32_t * v4 = (int32_t *)(v2 + 2 * a1); // 0x4585d2
    *v4 = v1 - v3 + *v4 + (int32_t)(v3 > v1);
    int64_t v5; // 0x4585c5
    __asm_outsd((int16_t)a3, *(int32_t *)&v5);
    return 0x49efb75b;
}

// Address range: 0x45863b - 0x458667
int64_t function_45863b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45863b
    int64_t v1; // 0x45863b
    uint64_t result = v1;
    bool v2; // 0x45863b
    if (v2) {
        // 0x45863d
        return v1 & 0xffffffff;
    }
    char v3 = *(char *)(a2 - 0x57725ba8 + 4 * a2); // 0x458658
    char * v4 = (char *)(a4 & -256 | (int64_t)(v3 | (char)a4)); // 0x458663
    *v4 = (char)((result & 256) != 0) + (char)(result / 256) + *v4;
    return result;
}

// Address range: 0x4586ad - 0x4586b1
int64_t function_4586ad(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4586ad
    int64_t result; // 0x4586ad
    return result;
}

// Address range: 0x458714 - 0x458717
int64_t function_458714(int64_t a1) {
    // 0x458714
    int64_t result; // 0x458714
    return result;
}
