/*
 * Targeted RetDec C for native executable gap queue batch 285.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xed19c-0xed39c rank=- name=- kind=- bytes=- uncovered=-
 *   0xed39c-0xed59c rank=- name=- kind=- bytes=- uncovered=-
 *   0x190085-0x190285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21f666-0x21f866 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21f866-0x21fa66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21fa66-0x21fc66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21fc66-0x21fe66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21fe66-0x220066 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_147e32d();
int64_t function_15602a2();
int64_t function_190060();
int64_t function_190085(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_19009e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19018f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1901f1(void);
int64_t function_190230(void);
int64_t function_19024a(void);
int64_t function_21f63c();
int64_t function_21f666(int64_t a1, int64_t a2);
int64_t function_21f672(void);
int64_t function_21f6bf(void);
int64_t function_21f6c8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21f6ed(int64_t a1);
int64_t function_21f7b3(int64_t a1);
int64_t function_21f7b8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_21f855(void);
int64_t function_21f857(void);
int64_t function_21f86a(void);
int64_t function_21f8dc(void);
int64_t function_21f8f1(int64_t a1, int64_t a2);
int64_t function_21f935(int64_t a1);
int64_t function_21f955(void);
int64_t function_21f960(int64_t a1, int64_t a2);
int64_t function_21f9ab(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21fa4a(void);
int64_t function_21fa5d(int64_t a1);
int64_t function_21fa67(void);
int64_t function_21fa8b(void);
int64_t function_21facb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_21fb91(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21fc55(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6);
int64_t function_21fddf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21fef8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_38d63147();
int64_t function_a976ef4();
int64_t function_cdc60();
int64_t function_ed19c(void);
int64_t function_ed1c0(void);
int64_t function_ed1d0(int64_t a1);
int64_t function_ed211(void);
int64_t function_ed280(void);
int64_t function_ed289(void);
int64_t function_ed2b9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_ed2cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ed337(int64_t a1);
int64_t function_ed34a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ed3f3(int64_t a1);
int64_t function_ed42e(int64_t a1);
int64_t function_ed477(int64_t a1, int64_t a2);
int64_t function_ed48f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_ed4b3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_ed4d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t unknown_1e995b77();
int64_t unknown_39ee4a3e();
int64_t unknown_39fb4e08();
int64_t unknown_3df40faa();
int64_t unknown_3f1a8997();
int64_t unknown_5097cb9();
int64_t unknown_73580a5d();
int64_t unknown_749b303f();
int64_t unknown_b7334d7();
int64_t unknown_f24508d();
int64_t unknown_ffffffff840f499e();
int64_t unknown_ffffffff892334d7();
int64_t unknown_ffffffff8a225e09();
int64_t unknown_ffffffffa006a6c8();
int64_t unknown_ffffffffb2add117();
int64_t unknown_ffffffffb41a369b();
int64_t unknown_ffffffffb75eaa6a();
int64_t unknown_ffffffffbce85536();
int64_t unknown_ffffffffefe6e271();

// Address range: 0xed19c - 0xed19d
int64_t function_ed19c(void) {
    // 0xed19c
    int64_t result; // 0xed19c
    return result;
}

// Address range: 0xed1c0 - 0xed1c3
int64_t function_ed1c0(void) {
    // 0xed1c0
    int64_t result; // 0xed1c0
    return result;
}

// Address range: 0xed1d0 - 0xed1d1
int64_t function_ed1d0(int64_t a1) {
    // 0xed1d0
    int64_t result; // 0xed1d0
    return result;
}

// Address range: 0xed211 - 0xed218
int64_t function_ed211(void) {
    // 0xed211
    int64_t v1; // 0xed211
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_a976ef4();
}

// Address range: 0xed280 - 0xed281
int64_t function_ed280(void) {
    // 0xed280
    int64_t result; // 0xed280
    return result;
}

// Address range: 0xed289 - 0xed28a
int64_t function_ed289(void) {
    // 0xed289
    int64_t result; // 0xed289
    return result;
}

// Address range: 0xed2b9 - 0xed2c2
int64_t function_ed2b9(int64_t a1, int64_t a2, int64_t a3) {
    // 0xed2b9
    return function_ed280();
}

// Address range: 0xed2cd - 0xed2dd
int64_t function_ed2cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xed2cd
    int64_t v1; // 0xed2cd
    unsigned char v2 = (char)v1;
    *(char *)a3 = v2 / 2;
    unknown_b7334d7();
    int64_t result = a3 & 0xffffffff; // 0xed2d8
    if (v2 >= 2) {
        result = function_ed289();
    }
    // 0xed2da
    return result;
}

// Address range: 0xed337 - 0xed343
int64_t function_ed337(int64_t a1) {
    // 0xed337
    int64_t v1; // 0xed337
    return unknown_39ee4a3e(v1 & 0xffffffff);
}

// Address range: 0xed34a - 0xed3bb
int64_t function_ed34a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xed34a
    int64_t v1; // 0xed34a
    uint32_t v2 = (int32_t)a4 - *(int32_t *)(v1 - 0xcfe17fa); // 0xed34d
    int32_t * v3 = (int32_t *)(int64_t)v2; // 0xed35a
    *v3 = *v3 + v2;
    int64_t v4; // 0xed34a
    unknown_ffffffffb75eaa6a(v4 & 0xffffffff);
    char * v5 = (char *)a3; // 0xed369
    *v5 = (char)v2;
    unknown_1e995b77();
    int32_t v6 = *(int32_t *)(v1 + 0x1e80284); // 0xed378
    int64_t v7; // 0xed34a
    uint32_t v8 = v6 ^ (v2 & -256 | (int32_t)*(char *)&v7); // 0xed378
    *v5 = (char)v8;
    __asm_in_133((int16_t)a3);
    *(int32_t *)v1 = *(int32_t *)&v1 & v8;
    int64_t v9 = v1;
    int64_t v10 = (v9 + (int64_t)v8) % 256 | v9 & -256; // 0xed385
    int64_t v11 = unknown_f24508d(); // 0xed387
    char * v12 = (char *)(v11 + 0x2513a00); // 0xed38c
    *v12 = *v12 + (char)v11;
    int32_t * v13 = (int32_t *)(v10 + 0x6b007200); // 0xed394
    uint32_t v14 = *v13; // 0xed394
    uint32_t v15 = v14 + (int32_t)v4; // 0xed394
    *v13 = v15;
    int32_t v16 = *(int32_t *)&v7; // 0xed3a2
    *(int32_t *)a3 = v16 + (int32_t)a5 + (int32_t)(v15 < v14);
    int64_t v17; // 0xed34a
    *(int32_t *)a5 = *(int32_t *)&v17;
    int32_t v18 = *(int32_t *)(8 * v10 + (int64_t)(v8 + (int32_t)a3)); // 0xed3ac
    bool v19; // 0xed34a
    return unknown_5097cb9((int64_t)(0x23f114 * v18), (v19 ? -4 : 4) + a2);
}

// Address range: 0xed3f3 - 0xed3fa
int64_t function_ed3f3(int64_t a1) {
    // 0xed3f3
    int64_t result; // 0xed3f3
    return result;
}

// Address range: 0xed42e - 0xed431
int64_t function_ed42e(int64_t a1) {
    // 0xed42e
    int64_t result; // 0xed42e
    return result;
}

// Address range: 0xed477 - 0xed47a
int64_t function_ed477(int64_t a1, int64_t a2) {
    // 0xed477
    int64_t v1; // 0xed477
    return v1 + a1 & 0xffffffff;
}

// Address range: 0xed48f - 0xed495
int64_t function_ed48f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0xed48f
    int64_t v1; // 0xed48f
    int64_t v2 = v1;
    bool v3; // 0xed48f
    return (v2 + a4 / 256 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0xed4b3 - 0xed4b6
int64_t function_ed4b3(int64_t a1, int64_t a2, int64_t a3) {
    // 0xed4b3
    int64_t result; // 0xed4b3
    *(int32_t *)a3 = (int32_t)result;
    return result;
}

// Address range: 0xed4d0 - 0xed54a
int64_t function_ed4d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xed4d0
    int64_t v1; // 0xed4d0
    char v2 = (uint64_t)v1 / 256; // 0xed4d8
    *(char *)-0x6d2c7421 = *(char *)-0x6d2c7421 + v2;
    *(int32_t *)0x24e108fd = *(int32_t *)0x24e108fd + (int32_t)a1;
    __asm_wait();
    char * v3 = (char *)(a4 - 46); // 0xed525
    *v3 = *v3 + v2;
    int64_t v4; // 0xed4d0
    uint32_t v5 = *(int32_t *)&v4; // 0xed529
    bool v6; // 0xed4d0
    int64_t v7 = v6 ? -4 : 4; // 0xed529
    *(char *)(int64_t)v5 = (char)a4;
    int64_t v8 = a4 & -256 | (int64_t)(v5 % 256); // 0xed52a
    uint64_t v9 = unknown_ffffffffbce85536(0x6d7c2523, v7 + a2, a3 & -0xff01 | (int64_t)&g1, v8); // 0xed530
    int64_t v10 = unknown_749b303f(); // 0xed538
    *(char *)v8 = (char)(v9 / 256);
    unsigned char v11 = (char)v5 % 32; // 0xed544
    if (v11 != 0) {
        char * v12 = (char *)((v10 & 0xffffffff) - 24); // 0xed544
        unsigned char v13 = *v12; // 0xed544
        *v12 = v13 >> v11 | v13 << 8 - v11;
    }
    return 0x6d7c2501;
}

// Address range: 0x190085 - 0x19009d
int64_t function_190085(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 76); // 0x190085
    char v2 = *v1 + (char)(a3 / 256); // 0x190085
    *v1 = v2;
    int64_t result; // 0x190085
    if (a4 == 1 || v2 == 0) {
        // 0x19008a
        return result;
    }
    char v3 = __asm_in((int16_t)a3); // 0x19008e
    *(int32_t *)-0x6ff62764cfb048f7 = (int32_t)(result & 0xffffff00 | (int64_t)v3);
    return unknown_ffffffff840f499e();
}

// Address range: 0x19009e - 0x19018e
int64_t function_19009e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19009e
    int64_t v1; // 0x19009e
    bool v2; // 0x19009e
    if (!v2) {
        v1 = function_190060();
    }
    // 0x1900a1
    *(char *)v1 = 0;
    return unknown_ffffffff8a225e09();
}

// Address range: 0x19018f - 0x1901a5
int64_t function_19018f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19018f
    int64_t v1; // 0x19018f
    *(char *)v1 = 0;
    int64_t result = unknown_3f1a8997(); // 0x190191
    char * v2 = (char *)(v1 - 43); // 0x190196
    *v2 = *v2 + (char)a3;
    return result;
}

// Address range: 0x1901f1 - 0x1901fc
int64_t function_1901f1(void) {
    // 0x1901f1
    return function_15602a2();
}

// Address range: 0x190230 - 0x190235
int64_t function_190230(void) {
    // 0x190230
    int64_t result; // 0x190230
    return result;
}

// Address range: 0x19024a - 0x19024b
int64_t function_19024a(void) {
    // 0x19024a
    int64_t result; // 0x19024a
    return result;
}

// Address range: 0x21f666 - 0x21f671
int64_t function_21f666(int64_t a1, int64_t a2) {
    // 0x21f666
    float80_t v1; // 0x21f666
    *(int32_t *)a1 = (int32_t)v1;
    return unknown_ffffffffefe6e271();
}

// Address range: 0x21f672 - 0x21f675
int64_t function_21f672(void) {
    // 0x21f672
    return function_21f63c();
}

// Address range: 0x21f6bf - 0x21f6c1
int64_t function_21f6bf(void) {
    // 0x21f6bf
    int64_t result; // 0x21f6bf
    return result;
}

// Address range: 0x21f6c8 - 0x21f6cb
int64_t function_21f6c8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x21f6c8
    int64_t result; // 0x21f6c8
    *(int32_t *)a2 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x21f6ed - 0x21f6f3
int64_t function_21f6ed(int64_t a1) {
    // 0x21f6ed
    int64_t v1; // 0x21f6ed
    int64_t v2 = v1;
    return (v2 + 152) % 256 | v2 & -256;
}

// Address range: 0x21f7b3 - 0x21f7b4
int64_t function_21f7b3(int64_t a1) {
    // 0x21f7b3
    int64_t result; // 0x21f7b3
    return result;
}

// Address range: 0x21f7b8 - 0x21f837
int64_t function_21f7b8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x21f7b8
    int64_t v1; // 0x21f7b8
    int32_t * v2 = (int32_t *)(v1 + 0x2cfec8e1); // 0x21f7b8
    int32_t v3 = a4; // 0x21f7b8
    *v2 = *v2 + v3;
    __asm_in((int16_t)a3);
    uint32_t v4 = (int32_t)v1 + v3; // 0x21f7ce
    int64_t result = v4; // 0x21f7ce
    int64_t v5 = unknown_ffffffff892334d7(2 * unknown_ffffffffa006a6c8() & 0xfffffffe); // 0x21f7d1
    int64_t v6; // bp-8, 0x21f7b8
    int64_t v7 = (int64_t)&v6; // 0x21f7d6
    uint32_t v8 = (int32_t)v1; // 0x21f7df
    uint32_t v9 = (int32_t)v7 + v8; // 0x21f7df
    if (v9 < v8 || v9 == 0) {
        // 0x21f7ef
        return result;
    }
    int64_t v10 = v9; // 0x21f7e2
    float80_t v11; // 0x21f7b8
    *(int64_t *)(result - 0x726d311b) = (int64_t)(v4 != 0 ? v11 : v11);
    *(int64_t *)(v10 - 8) = v10;
    *(int32_t *)0x1cb57b63 = *(int32_t *)0x1cb57b63 + (int32_t)v5;
    return (a4 / 256 + v7) % 256 | v7 & -256;
}

// Address range: 0x21f855 - 0x21f856
int64_t function_21f855(void) {
    // 0x21f855
    int64_t result; // 0x21f855
    return result;
}

// Address range: 0x21f857 - 0x21f860
int64_t function_21f857(void) {
    // 0x21f857
    unknown_73580a5d();
    return function_21f855();
}

// Address range: 0x21f86a - 0x21f86f
int64_t function_21f86a(void) {
    // 0x21f86a
    return function_38d63147();
}

// Address range: 0x21f8dc - 0x21f8dd
int64_t function_21f8dc(void) {
    // 0x21f8dc
    int64_t result; // 0x21f8dc
    return result;
}

// Address range: 0x21f8f1 - 0x21f927
int64_t function_21f8f1(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 - 0x6e88fe18); // 0x21f8f1
    *v1 = -*v1;
    unknown_39fb4e08();
    int64_t v2; // 0x21f8f1
    int32_t v3 = *(int32_t *)&v2; // 0x21f907
    bool v4; // 0x21f8f1
    int64_t v5 = (v4 ? -4 : 4) + a2; // 0x21f907
    v2 = v5;
    char * v6 = (char *)v5; // 0x21f90e
    *v6 = *v6 & (char)v3;
    int32_t v7 = v3 >> 31; // 0x21f910
    unknown_ffffffffb2add117();
    char v8 = __asm_insb((int16_t)v7); // 0x21f916
    int64_t v9; // 0x21f8f1
    *(char *)(int64_t)(*(int32_t *)&v9 | (int32_t)a1) = v8;
    int64_t v10; // 0x21f8f1
    int32_t * v11 = (int32_t *)(v10 - 8 + 8 * v10); // 0x21f918
    *v11 = 2 * *v11;
    char * v12 = (char *)(v2 + 0x1e89e54); // 0x21f91c
    *v12 = *v12 | (char)v7;
    return function_147e32d();
}

// Address range: 0x21f935 - 0x21f93a
int64_t function_21f935(int64_t a1) {
    // 0x21f935
    int64_t result; // 0x21f935
    return result;
}

// Address range: 0x21f955 - 0x21f958
int64_t function_21f955(void) {
    // 0x21f955
    int64_t result; // 0x21f955
    return result;
}

// Address range: 0x21f960 - 0x21f971
int64_t function_21f960(int64_t a1, int64_t a2) {
    // 0x21f960
    int64_t v1; // 0x21f960
    int64_t v2 = v1;
    int64_t result = (v2 + v1) % 256 | v2 & -256; // 0x21f965
    int32_t * v3 = (int32_t *)(8 * v1 - 0x7b0f1eff + result); // 0x21f967
    *v3 = *v3 | (int32_t)a1;
    return result;
}

// Address range: 0x21f9ab - 0x21f9d3
int64_t function_21f9ab(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 - 52); // 0x21f9b6
    *v1 = *v1 + (char)a3;
    uint32_t v2 = *(int32_t *)-0x45c72abd42c792b4; // 0x21f9b9
    int64_t v3; // 0x21f9ab
    unsigned char v4 = *(char *)(v3 + (int64_t)(v2 % 256)); // 0x21f9d0
    return (int64_t)(v2 & -256) | (int64_t)v4;
}

// Address range: 0x21fa4a - 0x21fa4b
int64_t function_21fa4a(void) {
    // 0x21fa4a
    int64_t result; // 0x21fa4a
    return result;
}

// Address range: 0x21fa5d - 0x21fa5f
int64_t function_21fa5d(int64_t a1) {
    // 0x21fa5d
    return __asm_hlt(a1);
}

// Address range: 0x21fa67 - 0x21fa68
int64_t function_21fa67(void) {
    // 0x21fa67
    int64_t result; // 0x21fa67
    return result;
}

// Address range: 0x21fa8b - 0x21fa8d
int64_t function_21fa8b(void) {
    // 0x21fa8b
    return function_21fa67();
}

// Address range: 0x21facb - 0x21fb63
int64_t function_21facb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x21facb
    int64_t result; // 0x21facb
    bool v1; // 0x21facb
    if (!v1) {
        // 0x21facd
        return result;
    }
    int16_t v2 = a3;
    if ((*(int32_t *)(a3 + 0x1e8b73e) & (int32_t)a1) < 1) {
        // 0x21fb31
        __asm_outsb(v2, (char)result);
        return __asm_rsm();
    }
    // 0x21faf8
    __asm_out(v2, -0x2f18d302);
    return 0xd0e72cfe;
}

// Address range: 0x21fb91 - 0x21fbdc
int64_t function_21fb91(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21fb91
    int64_t v1; // 0x21fb91
    int64_t v2 = v1;
    bool v3; // 0x21fb91
    int64_t v4 = a4 - v1 + (int64_t)v3; // 0x21fb91
    int64_t v5 = unknown_ffffffffb41a369b(); // 0x21fb95
    char * v6 = (char *)(4 * (v5 + 256 * a3 & 0xff00 | v5 & 0x3fffffffffff00ff) + a1); // 0x21fb9c
    *v6 = (char)v4;
    int64_t v7 = unknown_3df40faa(); // 0x21fba4
    __asm_int(16);
    uint64_t v8 = (v7 + 2 * v2 & 0xffffffff) + v2; // 0x21fbbb
    int64_t result = v8 & 0xffffffff; // 0x21fbbb
    *(int32_t *)0x49f094c4 = *(int32_t *)0x49f094c4 + (int32_t)a1;
    int32_t * v9 = (int32_t *)(result - 0x5f2f2867); // 0x21fbcc
    *v9 = *v9 + (int32_t)v8;
    char * v10 = (char *)(a2 - 24); // 0x21fbd2
    *v10 = *v10 + (char)(v8 / 256);
    int32_t * v11 = (int32_t *)(v4 & -256 | (int64_t)*v6); // 0x21fbd5
    *v11 = *v11 + (int32_t)a2;
    return result;
}

// Address range: 0x21fc55 - 0x21fddf
int64_t function_21fc55(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x21fc55
    int64_t v1; // 0x21fc55
    int64_t v2 = v1 & 0xffffffff; // 0x21fc55
    uint32_t v3 = (int32_t)a3; // 0x21fc56
    uint32_t v4 = v3 + a6; // 0x21fc56
    int64_t v5 = v4; // 0x21fc56
    *(char *)a1 = __asm_insb((int16_t)v4);
    char v6 = *(char *)(v5 - 0x2fe17b8); // 0x21fc61
    int64_t v7; // 0x21fc55
    int64_t v8 = (int64_t)&v7;
    *(int32_t *)-0x633f60f0ff7ffffd = (int32_t)v8;
    int64_t * v9 = (int64_t *)(v2 - 8); // 0x21fc71
    int64_t v10 = v2 - 16; // 0x21fc72
    int64_t * v11 = (int64_t *)v10; // 0x21fc72
    int64_t v12 = v2 - 24; // 0x21fc8e
    int64_t * v13 = (int64_t *)v12; // 0x21fc8e
    *v9 = 169;
    *v13 = 256 * (int64_t)((char)(v4 / 256) + (char)(v4 < v3) - v6) | v5 & 0xffff00ff;
    int64_t * v14 = (int64_t *)(v2 - 32); // 0x21fcab
    *v14 = v1 - 0x7ff893a;
    int64_t v15 = *v13; // 0x21fcbb
    *v13 = a1;
    *v11 = 0x21e212;
    int64_t v16 = *v13; // 0x21fccc
    *v9 = v8;
    *v11 = 0x5f8da99a;
    *v13 = 0x65da045c;
    int64_t v17 = *(int64_t *)(v2 + 16); // 0x21fd0c
    *v13 = v17;
    *v14 = v10;
    int64_t * v18 = (int64_t *)(v2 - 40); // 0x21fd54
    *v14 = 0x37d70e6e;
    *(int64_t *)(v2 - 48) = v17;
    *v18 = v17;
    *v11 = *v14;
    *v14 = 0x21d02047;
    *v18 = *v9;
    *(int64_t *)v2 = *v14;
    *v14 = *v13;
    *v18 = v12;
    *v18 = *v13;
    *v14 = v10;
    return function_cdc60(v16, v17, v15, a4 & -0xff01 | (int64_t)&g3, a5, v1);
}

// Address range: 0x21fddf - 0x21fef8
int64_t function_21fddf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21fddf
    int64_t v1; // bp-32, 0x21fddf
    int64_t v2 = (int64_t)&v1; // 0x21fe56
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x21fe62
    int64_t v4 = v2 - 8; // 0x21fe62
    int64_t * v5 = (int64_t *)v4; // 0x21fe62
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x21fe66
    *v6 = v3;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x21fe69
    *v7 = v3;
    *v5 = 0x3373d431;
    *v6 = 0x51e66229;
    *v7 = v3;
    int64_t v8 = v2 + 8; // 0x21fe9c
    *(int64_t *)v8 = *v5;
    *v7 = *(int64_t *)(v2 + 16);
    *(int64_t *)(v2 + 24) = *v5;
    *v6 = v4;
    *v5 = v8;
    int64_t v9; // 0x21fddf
    return function_cdc60(a1, a2, a3, a4, v9, v9);
}

// Address range: 0x21fef8 - 0x220066
int64_t function_21fef8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x21fef8
    int64_t v1; // bp-24, 0x21fef8
    int64_t v2 = (int64_t)&v1; // 0x220026
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x220052
    v1 = v3;
    *(int64_t *)(v2 - 8) = v3;
    return function_cdc60(a1, a2, a3, 0x560aa900, a1, a6);
}
