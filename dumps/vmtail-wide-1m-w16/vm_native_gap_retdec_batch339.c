/*
 * Targeted RetDec C for native executable gap queue batch 339.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1b31ce-0x1b33ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b33ce-0x1b35ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b35ce-0x1b37ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ac575-0x2ac775 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ac775-0x2ac975 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ac975-0x2acb75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2acb75-0x2acd75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2acd75-0x2acf75 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_sldt(void);
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

int64_t function_1b31ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1b326b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b33c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1b3513(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1b363f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ac538();
int64_t function_2ac575(int64_t a1);
int64_t function_2ac57e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ac5ef(int64_t a1);
int64_t function_2ac5fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ac67b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ac68d(void);
int64_t function_2ac693(int64_t a1);
int64_t function_2ac6c5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ac6f8(void);
int64_t function_2ac7a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ac811(int64_t a1);
int64_t function_2ac85d(void);
int64_t function_2ac865(int64_t a1, int64_t a2);
int64_t function_2ac8eb(void);
int64_t function_2ac8f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ac927(void);
int64_t function_2ac998(void);
int64_t function_2ac9a2(void);
int64_t function_2ac9d1(int64_t a1);
int64_t function_2ac9d2(void);
int64_t function_2aca47(void);
int64_t function_2aca63(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2acaf0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2acb84(void);
int64_t function_2acc4f(void);
int64_t function_2acc54(int64_t a1, int64_t a2);
int64_t function_2acc57(void);
int64_t function_2acc6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2acd14(int64_t a1, int64_t a2);
int64_t function_2acd98(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2ace3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2ace67(int64_t a1);
int64_t function_2ace6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ace98(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2aceeb(void);
int64_t function_2acef0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fd4f726();
int64_t function_64eae3();
int64_t function_6a2c60e();
int64_t function_cf3c7();
int64_t function_ffffffffc060d7d4();
int64_t function_ffffffffcb72cce1();
int64_t unknown_195253f1();
int64_t unknown_1aa9bad1();
int64_t unknown_212f24b();
int64_t unknown_25259971();
int64_t unknown_28fe4d39();
int64_t unknown_3003ff95();
int64_t unknown_3ad9b7c3();
int64_t unknown_3d6dd65f();
int64_t unknown_c2c061a();
int64_t unknown_ffffffffa0645d07();
int64_t unknown_ffffffffac8bc305();
int64_t unknown_ffffffffcfc8bd48();
int64_t unknown_ffffffffd6982d8d();

// Address range: 0x1b31ce - 0x1b326b
int64_t function_1b31ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x100000000 * a4 >> 32; // 0x1b3244
    int64_t v2; // 0x1b31ce
    v2 = (0x100000000 * (int64_t)&v2 >> 32) + 16;
    return function_cf3c7(a1, a2, a3, (int32_t)v1, a5, a6, v1);
}

// Address range: 0x1b326b - 0x1b33c3
int64_t function_1b326b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b326b
    int64_t v1; // bp-48, 0x1b326b
    int64_t v2 = (int64_t)&v1; // 0x1b3300
    int64_t v3 = v2 + 8; // 0x1b3304
    v1 = v3;
    int64_t * v4 = (int64_t *)v3; // 0x1b331e
    *v4 = 0x1b14a9;
    int64_t v5 = *(int64_t *)(v2 + 40); // 0x1b3322
    v1 = v5;
    int64_t v6 = v2 - 8; // 0x1b3326
    int64_t * v7 = (int64_t *)v6; // 0x1b3326
    *v7 = v5;
    int64_t * v8 = (int64_t *)(v2 - 16); // 0x1b333d
    *v8 = v2;
    int64_t v9 = v2 + 16; // 0x1b3346
    *v7 = 0x5b4f4997;
    *v8 = 0x15f571da;
    *(int64_t *)(v2 - 24) = v5;
    *v4 = *v7;
    *v7 = v6;
    *v8 = *(int64_t *)v9;
    *(int64_t *)(v2 + 24) = *v7;
    *v8 = v1;
    v1 = a3;
    *v7 = v2;
    int64_t v10 = v1; // 0x1b33b6
    v1 = v9;
    int64_t v11; // 0x1b326b
    return function_cf3c7(a1, a2, v10, (int32_t)a4, v11, v11, 0x5bca9b78);
}

// Address range: 0x1b33c3 - 0x1b3513
int64_t function_1b33c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1b33c3
    int64_t v1; // bp-48, 0x1b33c3
    v1 = (int64_t)&v1 + 16;
    return function_cf3c7(a1, a2, a3, (int32_t)a4, a5, a6, 0x1a9767);
}

// Address range: 0x1b3513 - 0x1b363f
int64_t function_1b3513(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1b3513
    int64_t v1; // 0x1b3513
    return function_cf3c7(a1, a2, a3, (int32_t)a4, a5, v1, 0x1a99f9);
}

// Address range: 0x1b363f - 0x1b3781
int64_t function_1b363f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b363f
    int64_t v1; // 0x1b363f
    bool v2; // 0x1b363f
    return function_cf3c7(a1, a2, a3, (int32_t)a4, v1, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x2ac575 - 0x2ac57d
int64_t function_2ac575(int64_t a1) {
    // 0x2ac575
    int64_t result; // 0x2ac575
    return result;
}

// Address range: 0x2ac57e - 0x2ac5a6
int64_t function_2ac57e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 | a2;
    int64_t v2; // 0x2ac57e
    if ((int32_t)v1 == 0) {
        v2 = function_2ac538();
    }
    // 0x2ac583
    __asm_out((int16_t)a3, (char)v2);
    int64_t v3 = unknown_3003ff95(); // 0x2ac586
    char * v4 = (char *)v3; // 0x2ac58b
    *v4 = *v4 - (char)v3;
    char v5 = *(char *)-0xf84416a; // 0x2ac58e
    int64_t v6; // 0x2ac57e
    *(char *)-0xf84416a = v5 + (char)((uint64_t)v6 / 256);
    int32_t * v7 = (int32_t *)((v1 & 0xffffffff) - 59); // 0x2ac599
    *v7 = *v7 + (int32_t)v3;
    *(int64_t *)(v2 & 0xffffffff) = 0x1b906ec2;
    return function_6a2c60e();
}

// Address range: 0x2ac5ef - 0x2ac5f0
int64_t function_2ac5ef(int64_t a1) {
    // 0x2ac5ef
    int64_t result; // 0x2ac5ef
    return result;
}

// Address range: 0x2ac5fe - 0x2ac632
int64_t function_2ac5fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ac5fe
    int64_t v1; // 0x2ac5fe
    *(char *)a2 = 2 * (char)v1;
    *(char *)0x1f2b7926 = *(char *)0x1f2b7926 + 80;
    return v1 & 0xe6604504 | 251;
}

// Address range: 0x2ac67b - 0x2ac68c
int64_t function_2ac67b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ac67b
    int64_t result; // 0x2ac67b
    *(int32_t *)a2 = (int32_t)result + (int32_t)a2;
    *(char *)-0x7fe3976 = *(char *)-0x7fe3976 | (char)(result / 256);
    return result;
}

// Address range: 0x2ac68d - 0x2ac692
int64_t function_2ac68d(void) {
    // 0x2ac68d
    return function_3fd4f726();
}

// Address range: 0x2ac693 - 0x2ac694
int64_t function_2ac693(int64_t a1) {
    // 0x2ac693
    int64_t result; // 0x2ac693
    return result;
}

// Address range: 0x2ac6c5 - 0x2ac6db
int64_t function_2ac6c5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ac6c5
    unknown_1aa9bad1();
    return a3 & 0xffffffff;
}

// Address range: 0x2ac6f8 - 0x2ac6fb
int64_t function_2ac6f8(void) {
    // 0x2ac6f8
    __asm_sti();
    return __asm_int3();
}

// Address range: 0x2ac7a0 - 0x2ac7b1
int64_t function_2ac7a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 0x3d82df3 + 4 * a4); // 0x2ac7a2
    *v1 = *v1 + (int32_t)a3;
    return unknown_212f24b(a1, a2, a3, a4, a5);
}

// Address range: 0x2ac811 - 0x2ac814
int64_t function_2ac811(int64_t a1) {
    // 0x2ac811
    int64_t result; // 0x2ac811
    return result;
}

// Address range: 0x2ac85d - 0x2ac860
int64_t function_2ac85d(void) {
    // 0x2ac85d
    int64_t result; // 0x2ac85d
    return result;
}

// Address range: 0x2ac865 - 0x2ac871
int64_t function_2ac865(int64_t a1, int64_t a2) {
    // 0x2ac865
    return unknown_25259971(a1, a2);
}

// Address range: 0x2ac8eb - 0x2ac8ec
int64_t function_2ac8eb(void) {
    // 0x2ac8eb
    int64_t result; // 0x2ac8eb
    return result;
}

// Address range: 0x2ac8f8 - 0x2ac91b
int64_t function_2ac8f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ac8f8
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x2ac8f8
    if ((char)v1 < -93) {
        function_2ac8eb();
    }
    uint64_t v2 = unknown_ffffffffa0645d07(); // 0x2ac901
    char * v3 = (char *)((v2 / 256 % 256 | v2) - 77); // 0x2ac908
    char v4 = a4; // 0x2ac908
    *v3 = *v3 + v4;
    char * v5 = (char *)(a2 - 77); // 0x2ac90b
    *v5 = *v5 + v4;
    return unknown_c2c061a();
}

// Address range: 0x2ac927 - 0x2ac928
int64_t function_2ac927(void) {
    // 0x2ac927
    int64_t result; // 0x2ac927
    return result;
}

// Address range: 0x2ac998 - 0x2ac99a
int64_t function_2ac998(void) {
    // 0x2ac998
    return function_2ac927();
}

// Address range: 0x2ac9a2 - 0x2ac9a3
int64_t function_2ac9a2(void) {
    // 0x2ac9a2
    int64_t result; // 0x2ac9a2
    return result;
}

// Address range: 0x2ac9d1 - 0x2ac9d2
int64_t function_2ac9d1(int64_t a1) {
    // 0x2ac9d1
    int64_t result; // 0x2ac9d1
    return result;
}

// Address range: 0x2ac9d2 - 0x2ac9d7
int64_t function_2ac9d2(void) {
    // 0x2ac9d2
    int64_t v1; // 0x2ac9d2
    uint64_t v2 = v1;
    return v2 / 2 % 128 | v2 & -256;
}

// Address range: 0x2aca47 - 0x2aca48
int64_t function_2aca47(void) {
    // 0x2aca47
    int64_t result; // 0x2aca47
    return result;
}

// Address range: 0x2aca63 - 0x2aca9b
int64_t function_2aca63(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = a4;
    *(char *)a4 = v1 - 62;
    int64_t v2 = (int64_t)*(int32_t *)0x4767eb013d320ff0; // 0x2aca79
    if (v1 > 62) {
        v2 = function_2aca47();
    }
    uint32_t v3 = (int32_t)v2 | 63; // 0x2aca87
    int64_t v4; // bp-5874, 0x2aca63
    int32_t * v5 = (int32_t *)(4 * a2 - 0x58f369ef + (int64_t)&v4); // 0x2aca8d
    *v5 = *v5 - 73 + (int32_t)(v3 < 0x50041701);
    return (int64_t)(0x10000 * v3 / 0x10000);
}

// Address range: 0x2acaf0 - 0x2acb26
int64_t function_2acaf0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2acaf0
    int64_t v1; // 0x2acaf0
    __asm_outsd((int16_t)a3, (int32_t)v1);
    *(int32_t *)a1 = 2 * (int32_t)v1;
    char * v2 = (char *)(a2 - 24); // 0x2acb1a
    *v2 = *v2 + (char)(a4 / 256);
    return 0x10000 * (int32_t)v1 >> 31 & 0x783b013d;
}

// Address range: 0x2acb84 - 0x2acb89
int64_t function_2acb84(void) {
    // 0x2acb84
    return function_ffffffffcb72cce1();
}

// Address range: 0x2acc4f - 0x2acc54
int64_t function_2acc4f(void) {
    // 0x2acc4f
    return function_ffffffffc060d7d4();
}

// Address range: 0x2acc54 - 0x2acc57
int64_t function_2acc54(int64_t a1, int64_t a2) {
    // 0x2acc54
    int64_t v1; // 0x2acc54
    return function_2acc6b(a1, v1 & 0xffffffff, v1, v1);
}

// Address range: 0x2acc57 - 0x2acc6b
int64_t function_2acc57(void) {
    // 0x2acc57
    int64_t v1; // 0x2acc57
    bool v2; // 0x2acc57
    if (v2) {
        int64_t v3 = unknown_3d6dd65f(); // 0x2acc59
        int32_t * v4 = (int32_t *)v3; // 0x2acc5e
        *v4 = *v4 + (int32_t)v3;
        v1 = v3;
    }
    return v1 + 0xc5e6cf0f & 0xffffffff;
}

// Address range: 0x2acc6b - 0x2acc7a
int64_t function_2acc6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2acc6b
    int64_t result; // 0x2acc6b
    return result;
}

// Address range: 0x2acd14 - 0x2acd1b
int64_t function_2acd14(int64_t a1, int64_t a2) {
    // 0x2acd14
    float80_t v1; // 0x2acd14
    *(int16_t *)a2 = (int16_t)v1;
    return function_64eae3();
}

// Address range: 0x2acd98 - 0x2ace3a
int64_t function_2acd98(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t result; // 0x2acd98
    int32_t * v2 = (int32_t *)(result - 15); // 0x2acd9d
    int32_t v3 = *v2; // 0x2acd9d
    int32_t v4 = v3 - 0x1793fb10; // 0x2acd9d
    *v2 = v4;
    if (v4 < 0 != ((v4 ^ v3) & v3 + 0x686c04f0) < 0) {
        // 0x2acda7
        return result;
    }
    int32_t * v5 = (int32_t *)(a4 + 0x47bca405); // 0x2acdb3
    *v5 = *v5 - 0x1793fb10;
    uint32_t v6 = (int32_t)result; // 0x2acdb9
    int32_t v7 = a4; // 0x2acdb9
    uint32_t v8 = v6 + v7; // 0x2acdb9
    if (v8 < v6 || v8 == 0) {
        int32_t * v9 = (int32_t *)(result + 0x70d9f4f0); // 0x2acdcb
        *v9 = *v9 + v7;
        char * v10 = (char *)(a1 + 73); // 0x2acde8
        unsigned char v11 = *v10; // 0x2acde8
        unsigned char v12 = v11 + (char)(v8 / 256); // 0x2acde8
        *v10 = v12;
        uint64_t v13 = unknown_195253f1(); // 0x2acdeb
        __asm_out(-0x7be0, (char)v13);
        uint64_t v14 = v13 + 27 + (int64_t)(v12 < v11); // 0x2acdf1
        int64_t v15 = v14 % 256 | v13 & -256; // 0x2acdf1
        char * v16 = (char *)(v15 + 0x7116a00); // 0x2acdfb
        *v16 = *v16 + (char)v14;
        int32_t v17 = *(int32_t *)0x1e88421; // 0x2ace03
        int64_t v18; // bp-8592, 0x2acd98
        *(int32_t *)0x1e88421 = v17 + (int32_t)(int64_t)&v18;
        uint32_t v19 = (int32_t)v13 >> 31; // 0x2ace08
        int64_t v20 = v19; // 0x2ace08
        char * v21 = (char *)(v1 - 0x62f43e27); // 0x2ace09
        *v21 = *v21 + (char)(v13 / 256);
        int32_t * v22 = (int32_t *)((0x2caf4201 * v15 & 0xffffffff) - 0x178f6156); // 0x2ace0f
        *v22 = *v22 + 1;
        int32_t * v23 = (int32_t *)(v20 - 0x18de5176); // 0x2ace16
        *v23 = *v23 + (int32_t)a1;
        __asm_outsd((int16_t)v19, *(int32_t *)&v1);
        bool v24; // 0x2acd98
        int64_t v25 = v24 ? -4 : 4; // 0x2ace26
        uint64_t v26 = (v14 + a4 / 256) % 256 | v13 & 0xffffff00; // 0x2ace27
        uint64_t v27 = v26 | 0x100000000 * v20; // 0x2ace27
        uint64_t v28 = v27 / v26; // 0x2ace27
        char * v29 = (char *)((v28 & 0xffffffff) + 5); // 0x2ace29
        *v29 = *v29 + (char)v28;
        unknown_ffffffffd6982d8d(v25 + a1, v25 + (int64_t)(v8 - 0x506fe18), v27 % v26);
        return unknown_28fe4d39();
    }
    // 0x2acdbd
    return unknown_3ad9b7c3();
}

// Address range: 0x2ace3c - 0x2ace55
int64_t function_2ace3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2ace3c
    unknown_ffffffffcfc8bd48(a5);
    return __asm_int3() & 0xffffffff ^ 0x1e81e85;
}

// Address range: 0x2ace67 - 0x2ace69
int64_t function_2ace67(int64_t a1) {
    // 0x2ace67
    int64_t result; // 0x2ace67
    return result;
}

// Address range: 0x2ace6c - 0x2ace8d
int64_t function_2ace6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ace6c
    int64_t v1; // 0x2ace6c
    int32_t * v2 = (int32_t *)(v1 + 38); // 0x2ace70
    *v2 = *v2 + (int32_t)a3;
    return v1 & 0xe80c02;
}

// Address range: 0x2ace98 - 0x2acea3
int64_t function_2ace98(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 + a2 & 0xffffffff; // 0x2ace9f
    int64_t v2 = a1;
    int64_t v3 = v2; // 0x2ace9f
    while (v1 != 0) {
        bool v4; // 0x2ace98
        int64_t v5 = v2 + (v4 ? -1 : 1); // 0x2ace9f
        v1--;
        v3 = v5;
        if (*(char *)v2 == (char)(a3 + a2)) {
            // break -> 
            break;
        }
        v2 = v5;
        v3 = v2;
    }
    return function_2acef0(v3, a2, a3);
}

// Address range: 0x2aceeb - 0x2acef0
int64_t function_2aceeb(void) {
    // 0x2aceeb
    int64_t v1; // 0x2aceeb
    bool v2; // 0x2aceeb
    return v1 + 0xffffffb3 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x2acef0 - 0x2acf10
int64_t function_2acef0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2acef0
    int32_t v1; // 0x2acef0
    *(int32_t *)a3 = (int32_t)(int64_t)&v1;
    return unknown_ffffffffac8bc305() + 0x8608ab7 & 0xffffffff;
}
