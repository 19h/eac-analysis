/*
 * Targeted RetDec C for native executable gap queue batch 252.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xe919c-0xe939c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe939c-0xe959c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe959c-0xe979c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe999c-0xe9b9c rank=- name=- kind=- bytes=- uncovered=-
 *   0x145b13-0x145d13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x145d13-0x145f13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x145f13-0x146113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1666aa-0x1668aa rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_145b13(int64_t a1, int64_t a2, int64_t a3);
int64_t function_145b24(void);
int64_t function_145b56(void);
int64_t function_145b83(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_145bbd(int64_t a1);
int64_t function_145bce(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_145c05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_145c84(int64_t a1, int64_t a2);
int64_t function_145c8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_145ca4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_145caa(int64_t a1, int64_t a2);
int64_t function_145cc5(int64_t a1, int64_t a2);
int64_t function_145ce2(void);
int64_t function_145d24(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_145d40(void);
int64_t function_145d7e(void);
int64_t function_145de2(int64_t a1);
int64_t function_145e09(void);
int64_t function_145e12(void);
int64_t function_145e15(int64_t a1, int64_t a2);
int64_t function_145e2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_145ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_145f18(int64_t a1);
int64_t function_145f41(void);
int64_t function_145f46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_145f75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t result, int64_t a7);
int64_t function_146042(int64_t a1);
int64_t function_146068(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_146072(int64_t a1, int64_t a2);
int64_t function_1460ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1666aa(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_166779(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1667da(int64_t a1, int64_t a2);
int64_t function_1667e0(void);
int64_t function_1667e7(int64_t a1);
int64_t function_1667ef(void);
int64_t function_166829(void);
int64_t function_16683a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_166857(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_166867(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1c7f9632();
int64_t function_1fc921b();
int64_t function_1fd3a50();
int64_t function_40216707();
int64_t function_738df2b9();
int64_t function_785027();
int64_t function_e8fb964();
int64_t function_e919c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_e91b1(int64_t a1);
int64_t function_e91ca(void);
int64_t function_e9218(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e9222(int64_t a1);
int64_t function_e9230(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e931b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e932c(void);
int64_t function_e934a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e937d(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e945b(int64_t a1);
int64_t function_e9471(void);
int64_t function_e94a4(void);
int64_t function_e9500(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_e95e8(int64_t a1);
int64_t function_e95f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e9685(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e9687(void);
int64_t function_e9694(int64_t a1);
int64_t function_e9699(void);
int64_t function_e969f(int64_t a1);
int64_t function_e96b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e96c1(void);
int64_t function_e96ee(void);
int64_t function_e9735(void);
int64_t function_e9747(int64_t a1);
int64_t function_e999c(void);
int64_t function_e99ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e9a49(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_e9a7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e9b78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffff80fd6d41();
int64_t function_ffffffffb46c4fde();
int64_t function_ffffffffb49ba6a2();
int64_t unknown_16a5985e();
int64_t unknown_1e06fb8b();
int64_t unknown_1f184ece();
int64_t unknown_23fe5fc8();
int64_t unknown_362527b9();
int64_t unknown_38984218();
int64_t unknown_39ab176d();
int64_t unknown_3a7ba492();
int64_t unknown_3f7eb2c9();
int64_t unknown_4868ecc0();
int64_t unknown_59ef8983();
int64_t unknown_5b87ee6b();
int64_t unknown_5cab0813();
int64_t unknown_5cee59ed();
int64_t unknown_5e3bbfd7();
int64_t unknown_63cca68();
int64_t unknown_6403a66b();
int64_t unknown_68ee811e();
int64_t unknown_77a97fce();
int64_t unknown_7a216e29();
int64_t unknown_e53865c();
int64_t unknown_f7be485();
int64_t unknown_ffffffff89d4e14f();
int64_t unknown_ffffffff9adc3f40();
int64_t unknown_ffffffffa7098cf8();
int64_t unknown_ffffffffad5ba0df();
int64_t unknown_ffffffffad6cd985();
int64_t unknown_ffffffffafac3326();
int64_t unknown_ffffffffcba35c31();
int64_t unknown_ffffffffd3c8864f();
int64_t unknown_ffffffffd7f9d622();
int64_t unknown_ffffffffe80fd0d3();
int64_t unknown_ffffffffed3aece8();

// Address range: 0xe919c - 0xe91a2
int64_t function_e919c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t result = __asm_sti(a1, a2, a3, a4); // 0xe919e
    int64_t v1; // 0xe919c
    *(char *)result = (char)v1 + (char)(a4 / 256);
    return result;
}

// Address range: 0xe91b1 - 0xe91ba
int64_t function_e91b1(int64_t a1) {
    // 0xe91b1
    int64_t v1; // 0xe91b1
    return v1 + 0x50b180f & 0xffffffff;
}

// Address range: 0xe91ca - 0xe91cc
int64_t function_e91ca(void) {
    // 0xe91ca
    int64_t v1; // 0xe91ca
    return function_e9222(v1);
}

// Address range: 0xe9218 - 0xe9220
int64_t function_e9218(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_68ee811e(a1, a2, a3, a4); // 0xe9218
    int64_t v1; // 0xe9218
    *(char *)a4 = (char)v1 + (char)a4;
    return result;
}

// Address range: 0xe9222 - 0xe922d
int64_t function_e9222(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 0x3184610a); // 0xe9222
    int64_t v2; // 0xe9222
    *v1 = *v1 + (int32_t)v2;
    int64_t result; // 0xe9222
    *(int32_t *)result = *(int32_t *)&result + (int32_t)v2;
    *(char *)result = *(char *)&result + (char)a1;
    return result;
}

// Address range: 0xe9230 - 0xe923f
int64_t function_e9230(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe9230
    int64_t v1; // 0xe9230
    int64_t v2 = v1;
    return (v2 + 118 + (int64_t)((v2 & 256) != 0)) % 256 | v2 & -256;
}

// Address range: 0xe931b - 0xe931f
int64_t function_e931b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe931b
    int64_t v1; // 0xe931b
    int64_t result = v1;
    unsigned char v2 = (char)a4 % 32; // 0xe931b
    if (v2 != 0) {
        bool v3; // 0xe931b
        *(char *)result = (char)v3 << 8 - v2 | (char)result >> v2 | (char)((int16_t)result % 256 << (int16_t)(9 - v2));
    }
    return result;
}

// Address range: 0xe932c - 0xe932d
int64_t function_e932c(void) {
    // 0xe932c
    int64_t result; // 0xe932c
    return result;
}

// Address range: 0xe934a - 0xe937c
int64_t function_e934a(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe934a
    int64_t v1; // 0xe934a
    int64_t result = v1 & 0xffffffff; // 0xe934a
    uint32_t v2 = (int32_t)v1; // 0xe9355
    __asm_out((int16_t)a3, v2);
    int32_t * v3 = (int32_t *)(v1 + 16); // 0xe935b
    *v3 = (int32_t)(v2 < 0x509af701) - (int32_t)v1 + *v3;
    int64_t v4; // 0xe934a
    *(char *)a1 = *(char *)&v4;
    *(int32_t *)result = *(int32_t *)&v4 + v2;
    int32_t v5 = *(int32_t *)0x2704c819; // 0xe9370
    bool v6; // 0xe934a
    *(int32_t *)0x2704c819 = v5 & (int32_t)((v6 ? 0xffffffff : 1) + a1);
    return result;
}

// Address range: 0xe937d - 0xe9437
int64_t function_e937d(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2 = a4 - 1; // 0xe9382
    int64_t v3 = unknown_59ef8983() & -256 | a2 % 256; // 0xe9389
    bool v4; // 0xe937d
    int64_t v5 = v4 ? -1 : 1; // 0xe9389
    int64_t v6 = v5 + a2; // 0xe9389
    int64_t v7; // 0xe937d
    if (v2 == 0) {
        int32_t * v8 = (int32_t *)(a4 - 0x62ecb38c); // 0xe9409
        *v8 = *v8 + (int32_t)v6;
        int32_t * v9 = (int32_t *)(v3 + 0x1e89400); // 0xe940f
        *v9 = *v9 + (int32_t)v7;
        int64_t result = unknown_ffffffffafac3326(v1 + v5, v6, v3 & 0xffffffff, 0); // 0xe9420
        if ((char)a2 - *(char *)&v1 >= 0) {
            // 0xe9427
            return result;
        }
        // 0xe9428
        __asm_in((int16_t)v3);
        int64_t v10 = unknown_ffffffffcba35c31(); // 0xe942b
        return (v10 & 0xff00) + v3 & 0xff00 | v10 & -0xff01;
    }
    uint32_t v11 = (int32_t)a3 - *(int32_t *)(v7 + 114); // 0xe9390
    int32_t v12 = v3; // 0xe9393
    *(int32_t *)0x43373873cfc899 = v12;
    int32_t * v13 = (int32_t *)(a4 - 41); // 0xe93a3
    uint32_t v14 = *v13; // 0xe93a3
    *v13 = 0x800000 * v14 | 0x400000 * (int32_t)((v12 & -256 | 116) < 0x3a989e01) | v14 / 1024;
    int64_t v15 = v4 ? -4 : 4; // 0xe93aa
    int64_t v16 = v1 + v15; // 0xe93aa
    int64_t v17 = v6 + v15; // 0xe93aa
    v1 = v16;
    *(int32_t *)v2 = v11;
    int64_t v18 = unknown_38984218(v16, v17, v11, v2) + v7 & 0xffffffff; // 0xe93bf
    int32_t v19 = v7; // 0xe93c1
    int32_t v20 = v17; // 0xe93c1
    int32_t v21 = v20 + v19; // 0xe93c1
    if (v21 < 0 != ((v21 ^ v19) & (v21 ^ v20)) < 0) {
        int32_t * v22 = (int32_t *)(v18 + 43); // 0xe93ca
        *v22 = *v22 & (int32_t)v1;
        return unknown_ffffffffe80fd0d3();
    }
    int16_t v23 = v11; // 0xe93d8
    *(char *)v1 = __asm_insb(v23);
    *(char *)v1 = __asm_insb(v23);
    int32_t * v24 = (int32_t *)((int64_t)v11 + 0x1079af9d); // 0xe93df
    int32_t v25 = *v24 + (int32_t)v1; // 0xe93df
    *v24 = v25;
    if (v25 == 0) {
        // 0xe93d4
        return v18 ^ (uint64_t)v7 % 256;
    }
    int64_t v26 = unknown_5cee59ed(); // 0xe93e7
    int64_t v27 = unknown_ffffffffa7098cf8(); // 0xe93f2
    int64_t v28 = (int32_t)v26 < 0xfa90c017 ? 220 : 219; // 0xe93f8
    uint32_t v29 = *(int32_t *)v1 | (int32_t)((v27 - v28) % 256 | v27 & 0xffffff00); // 0xe9402
    int64_t result2 = v29; // 0xe9402
    int32_t * v30 = (int32_t *)(result2 + 35); // 0xe9404
    *v30 = v29 + *v30;
    return result2;
}

// Address range: 0xe945b - 0xe946d
int64_t function_e945b(int64_t a1) {
    // 0xe945b
    int64_t v1; // 0xe945b
    int64_t v2 = v1;
    *(int32_t *)a1 = 2 * (int32_t)v1;
    __asm_psllq(v2, v2);
    unknown_63cca68();
    return function_738df2b9();
}

// Address range: 0xe9471 - 0xe9472
int64_t function_e9471(void) {
    // 0xe9471
    int64_t result; // 0xe9471
    return result;
}

// Address range: 0xe94a4 - 0xe94a9
int64_t function_e94a4(void) {
    // 0xe94a4
    return function_ffffffffb49ba6a2();
}

// Address range: 0xe9500 - 0xe95e4
int64_t function_e9500(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0xe9500
    int64_t v1; // 0xe9500
    *(int32_t *)(v1 + 0x27ec51f3 + v1) = (int32_t)a3;
    *(int32_t *)a1 = (int32_t)v1;
    char v2 = v1; // 0xe9509
    __asm_out_133(-42, v2);
    __asm_out_133(-102, v2);
    int32_t * v3 = (int32_t *)(unknown_5cab0813() - 0x624bf594); // 0xe9512
    uint32_t v4 = *v3; // 0xe9512
    uint32_t v5 = v4 + (int32_t)a4; // 0xe9512
    *v3 = v5;
    unsigned char v6 = (char)a4; // 0xe9518
    unsigned char v7 = (char)(v5 < v4) + (char)(a4 / 256); // 0xe9518
    bool v8 = v5 < v4 ? v7 != -1 | (char)(v5 < v4) + v6 - v7 > v6 : v7 > v6; // 0xe9518
    if (!v8) {
        // 0xe951c
        unknown_ffffffffd7f9d622();
        unknown_77a97fce();
        return function_1c7f9632();
    }
    // 0xe9552
    unknown_16a5985e();
    int64_t v9 = unknown_6403a66b(); // 0xe9565
    uint32_t v10 = (int32_t)v1 >> 15; // 0xe956a
    int64_t v11 = v10; // 0xe956a
    bool v12; // 0xe9500
    *(char *)((v12 ? -4 : 4) + a1) = __asm_insb((int16_t)a3);
    *(int32_t *)-0x1749a9ae0571aac6 = (int32_t)v9;
    int32_t * v13 = (int32_t *)v11; // 0xe9577
    uint32_t v14 = *v13; // 0xe9577
    uint32_t v15 = v14 + (int32_t)v1; // 0xe9577
    *v13 = v15;
    char v16 = *(char *)0x10107d80; // 0xe9579
    unsigned char v17 = (char)(v10 / 256) - v16 + (char)(v15 < v14); // 0xe9579
    unsigned char v18 = llvm_ctpop_i8(v17); // 0xe9579
    int64_t result = unknown_ffffffffad6cd985(); // 0xe957f
    if (v18 % 2 != 0) {
        // 0xe95e0
        return result;
    }
    // 0xe9586
    float80_t v19; // 0xe9500
    *(float80_t *)((256 * (int64_t)v17 | v11 & 0xffff00ff) + 4 * a2) = __asm_fbstp(v19);
    *(int32_t *)0x3d6d9938 = *(int32_t *)0x3d6d9938 + 0x3d6d9938;
    return result | 61;
}

// Address range: 0xe95e8 - 0xe95f0
int64_t function_e95e8(int64_t a1) {
    // 0xe95e8
    int64_t result; // 0xe95e8
    return result;
}

// Address range: 0xe95f1 - 0xe9684
int64_t function_e95f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int32_t v2 = *(int32_t *)(a4 - 19) | (int32_t)a3; // 0xe95f1
    int64_t v3; // 0xe95f1
    int32_t * v4 = (int32_t *)(8 * a2 + 0x31d1402e + v3); // 0xe95f4
    *v4 = *v4 + (int32_t)v3;
    unsigned char v5 = *(char *)0x20475904; // 0xe95fd
    unsigned char v6 = v5 + (char)(v3 / 256); // 0xe95fd
    *(char *)0x20475904 = v6;
    uint64_t v7 = v3 + 65 + (int64_t)(v6 < v5); // 0xe9603
    int64_t v8 = v3 & -256; // 0xe9603
    int64_t v9 = v7 % 256 | v8; // 0xe9603
    uint32_t v10 = 256 * v2 & 0xff00 | v2;
    int64_t v11 = v10; // 0xe9605
    char * v12 = (char *)v9; // 0xe9612
    *v12 = *v12 + 1;
    int32_t * v13 = (int32_t *)v11; // 0xe961b
    *v13 = *v13 ^ 73;
    int64_t v14 = a4 - 1; // 0xe9620
    if (v14 == 0) {
        // 0xe9622
        bool v15; // 0xe95f1
        return unknown_7a216e29((v15 ? -4 : 4) + a1);
    }
    int64_t v16 = (v7 + 208 + (int64_t)((int32_t)v9 < 0x202fc501)) % 256 | v8; // 0xe9619
    uint32_t v17 = (int32_t)v3; // 0xe961e
    uint32_t v18 = *(int32_t *)&v1; // 0xe961e
    char * v19 = (char *)(v16 - 0x178d74b5); // 0xe9666
    *v19 = (char)(v18 > v17) + (char)(v10 / 256) + *v19;
    uint64_t v20 = v16 + v3; // 0xe966c
    char v21 = *(char *)(a4 - 0x17fe5e74 + 4 * v11); // 0xe966e
    int64_t v22 = 256 * (int64_t)(v21 | (char)(v20 / 256)) | v20 & 0xffff00ff; // 0xe966e
    uint32_t v23 = *v13; // 0xe9675
    uint32_t v24 = v23 + (int32_t)v14; // 0xe9675
    *v13 = v24;
    int32_t v25; // 0xe95f1
    *(int32_t *)v3 = (int32_t)(int64_t)&v25;
    int32_t * v26 = (int32_t *)(int64_t)(v10 + 0x1e3b07c1); // 0xe9679
    *v26 = *v26 + (int32_t)(v24 < v23) + (int32_t)v22;
    return v22 ^ (int64_t)(v17 - v18);
}

// Address range: 0xe9685 - 0xe9687
int64_t function_e9685(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe9685
    int64_t v1; // 0xe9685
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0xe9687 - 0xe9691
int64_t function_e9687(void) {
    // 0xe9687
    return unknown_3a7ba492();
}

// Address range: 0xe9694 - 0xe9697
int64_t function_e9694(int64_t a1) {
    // 0xe9694
    int64_t result; // 0xe9694
    return result;
}

// Address range: 0xe9699 - 0xe969e
int64_t function_e9699(void) {
    // 0xe9699
    return function_ffffffff80fd6d41();
}

// Address range: 0xe969f - 0xe96a2
int64_t function_e969f(int64_t a1) {
    // 0xe969f
    int64_t result; // 0xe969f
    return result;
}

// Address range: 0xe96b2 - 0xe96c1
int64_t function_e96b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe96b2
    int64_t result; // 0xe96b2
    int64_t v1; // 0xe96b2
    if ((char)v1 < -87) {
        result = function_e969f((int64_t)&g1);
    }
    // 0xe96b7
    *(int32_t *)a4 = (int32_t)a4 - (int32_t)result;
    return result;
}

// Address range: 0xe96c1 - 0xe96c2
int64_t function_e96c1(void) {
    // 0xe96c1
    int64_t result; // 0xe96c1
    return result;
}

// Address range: 0xe96ee - 0xe96f0
int64_t function_e96ee(void) {
    // 0xe96ee
    return function_e96c1();
}

// Address range: 0xe9735 - 0xe9738
int64_t function_e9735(void) {
    // 0xe9735
    int64_t result; // 0xe9735
    return result;
}

// Address range: 0xe9747 - 0xe9748
int64_t function_e9747(int64_t a1) {
    // 0xe9747
    int64_t result; // 0xe9747
    return result;
}

// Address range: 0xe999c - 0xe999d
int64_t function_e999c(void) {
    // 0xe999c
    int64_t result; // 0xe999c
    return result;
}

// Address range: 0xe99ab - 0xe9a33
int64_t function_e99ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe99ab
    int64_t v1; // 0xe99ab
    int64_t v2 = (uint64_t)v1 / 256 % 256 | a4 & -256; // 0xe99ab
    if (v2 == 1) {
        // 0xe9a28
        bool v3; // 0xe99ab
        unknown_4868ecc0((v3 ? -4 : 4) + a1, 0xe76cd921);
        unknown_3f7eb2c9();
        return __asm_in_134(56);
    }
    char * v4 = (char *)v2; // 0xe9a2a
    char v5 = a3; // 0xe9a2a
    *v4 = *v4 + v5;
    char * v6 = (char *)(v2 + 0x340b0098); // 0xe9a2d
    *v6 = *v6 | v5;
    int64_t v7; // bp+59392, 0xe99ab
    return (int64_t)&v7;
}

// Address range: 0xe9a49 - 0xe9a7f
int64_t function_e9a49(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2 = unknown_ffffffff89d4e14f(); // 0xe9a49
    char * v3 = (char *)(a4 - 0x424165f4 + 2 * a3); // 0xe9a4e
    *v3 = *v3 + (char)(a4 / 256);
    *(char *)a1 = (char)v2;
    bool v4; // 0xe9a49
    int64_t v5 = (v4 ? -1 : 1) + a1; // 0xe9a55
    int64_t v6; // 0xe9a49
    int32_t v7 = *(int32_t *)unknown_e53865c(v5) | (int32_t)v6; // 0xe9a5b
    int64_t v8; // 0xe9a49
    *(int32_t *)v5 = *(int32_t *)&v8;
    int32_t * v9 = (int32_t *)a3; // 0xe9a63
    int64_t v10; // 0xe9a49
    *v9 = *(int32_t *)&v10 + v7;
    int64_t result = unknown_5b87ee6b(v1, (v4 ? -4 : 4) + a2); // 0xe9a65
    int32_t * v11 = (int32_t *)(v1 - 28); // 0xe9a6c
    *v11 = *v11 + v7;
    *v9 = *(int32_t *)&v10 + (int32_t)(int64_t)&v1;
    return result;
}

// Address range: 0xe9a7f - 0xe9a8e
int64_t function_e9a7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe9a7f
    __asm_in_136((int16_t)a3);
    int64_t v1; // 0xe9a7f
    return 0x10000 * (int32_t)(unknown_1e06fb8b() & 0xff00 | (uint64_t)v1 % 256) >> 16;
}

// Address range: 0xe9b78 - 0xe9b84
int64_t function_e9b78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x5e5e5fd3); // 0xe9b78
    uint32_t v2 = *v1; // 0xe9b78
    int64_t v3; // 0xe9b78
    uint32_t v4 = v2 + (int32_t)v3; // 0xe9b78
    *v1 = v4;
    return v3 + 0x51e2fe3a + (int64_t)(v4 < v2) & 0xffffffff;
}

// Address range: 0x145b13 - 0x145b14
int64_t function_145b13(int64_t a1, int64_t a2, int64_t a3) {
    // 0x145b13
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x145b13
    return result;
}

// Address range: 0x145b24 - 0x145b2a
int64_t function_145b24(void) {
    // 0x145b24
    int64_t result; // 0x145b24
    return result;
}

// Address range: 0x145b56 - 0x145b57
int64_t function_145b56(void) {
    // 0x145b56
    int64_t result; // 0x145b56
    return result;
}

// Address range: 0x145b83 - 0x145ba0
int64_t function_145b83(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x145b83
    int64_t v1; // 0x145b83
    *(char *)a2 = (char)(v1 | a4);
    uint64_t v2 = v1 & -256 | (int64_t)__asm_in((int16_t)a3); // 0x145b8a
    char v3 = *(char *)(v2 + 10); // 0x145b98
    int32_t * v4 = (int32_t *)((256 * (int64_t)*(char *)0x156b7294 | v1 & -0xff01) - 57); // 0x145b9b
    *v4 = *v4 + (int32_t)a2;
    return 256 * (int64_t)(v3 | (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x145bbd - 0x145bc0
int64_t function_145bbd(int64_t a1) {
    // 0x145bbd
    int64_t result; // 0x145bbd
    return result;
}

// Address range: 0x145bce - 0x145be0
int64_t function_145bce(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x145bce
    int64_t v1; // 0x145bce
    char * v2 = (char *)(v1 + 0x201e8c0); // 0x145bce
    *v2 = *v2 & 39;
    int64_t v3; // 0x145bce
    *(char *)v3 = *(char *)&v3 + (char)(a3 / 256);
    return a3 & 0xffffffff;
}

// Address range: 0x145c05 - 0x145c08
int64_t function_145c05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x145c05
    int64_t result; // 0x145c05
    *(int32_t *)a4 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x145c84 - 0x145c8c
int64_t function_145c84(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 116); // 0x145c86
    int64_t v2; // 0x145c84
    *v1 = *v1 + (int32_t)v2;
    return 2 * v2 & 0xffffffff;
}

// Address range: 0x145c8c - 0x145ca3
int64_t function_145c8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x145c8c
    int64_t v1; // 0x145c8c
    *(int32_t *)a3 = (int32_t)(v1 | a1);
    char * v2 = (char *)((v1 + a4) % 256 | a4 & -256); // 0x145c94
    *v2 = *v2 + (char)v1;
    float80_t v3; // 0x145c8c
    *(int64_t *)0x4dfa09d = (int64_t)v3;
    int64_t v4; // 0x145c8c
    *(char *)a3 = *(char *)&v4 + (char)((uint64_t)v1 / 256);
    return function_e8fb964();
}

// Address range: 0x145ca4 - 0x145caa
int64_t function_145ca4(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x145ca4
    char v2 = __asm_in(v1); // 0x145ca4
    __asm_out_137(v1, v2);
    int64_t v3; // 0x145ca4
    return (v3 | (int64_t)v2) & -256 | (int64_t)__asm_in(v1);
}

// Address range: 0x145caa - 0x145cb7
int64_t function_145caa(int64_t a1, int64_t a2) {
    // 0x145caa
    bool v1; // 0x145caa
    int64_t v2 = v1 ? -4 : 4; // 0x145caa
    int64_t v3; // 0x145caa
    *(char *)-0x2f2dfb4d = *(char *)-0x2f2dfb4d + (char)v3;
    return function_40216707(v2 + a1, v2 + a2);
}

// Address range: 0x145cc5 - 0x145cd2
int64_t function_145cc5(int64_t a1, int64_t a2) {
    // 0x145cc5
    return function_1fd3a50();
}

// Address range: 0x145ce2 - 0x145ce3
int64_t function_145ce2(void) {
    // 0x145ce2
    int64_t result; // 0x145ce2
    return result;
}

// Address range: 0x145d24 - 0x145d3f
int64_t function_145d24(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    unsigned char v1 = *(char *)(a4 + 0x77880ce); // 0x145d2b
    int64_t result = __asm_iretd(); // 0x145d31
    int64_t v2; // 0x145d24
    *(char *)a3 = (char)(a4 / 256) + (char)a3 + (char)(v1 < (char)v2);
    int32_t * v3 = (int32_t *)(result - 78); // 0x145d3b
    *v3 = *v3 + (int32_t)a3;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x145d40 - 0x145d41
int64_t function_145d40(void) {
    // 0x145d40
    int64_t result; // 0x145d40
    return result;
}

// Address range: 0x145d7e - 0x145d80
int64_t function_145d7e(void) {
    // 0x145d7e
    return function_145d40();
}

// Address range: 0x145de2 - 0x145dec
int64_t function_145de2(int64_t a1) {
    // 0x145de2
    int64_t result; // 0x145de2
    *(int32_t *)0x582cbc2feae1ce3a = (int32_t)result;
    return result;
}

// Address range: 0x145e09 - 0x145e0e
int64_t function_145e09(void) {
    // 0x145e09
    return function_785027();
}

// Address range: 0x145e12 - 0x145e15
int64_t function_145e12(void) {
    // 0x145e12
    int64_t v1; // 0x145e12
    return function_145e2d(v1, v1, v1, v1);
}

// Address range: 0x145e15 - 0x145e2d
int64_t function_145e15(int64_t a1, int64_t a2) {
    // 0x145e15
    *(int32_t *)a2 = 0;
    return (int64_t)*(int32_t *)-0x71f92f8cf3edf698;
}

// Address range: 0x145e2d - 0x145e3c
int64_t function_145e2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x145e2d
    return __asm_in_136((int16_t)a3);
}

// Address range: 0x145ed0 - 0x145ee4
int64_t function_145ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x145ed0
    int64_t result; // 0x145ed0
    uint64_t v1 = result;
    if (a4 == 1) {
        // 0x145ed4
        return result;
    }
    // 0x145eda
    *(int32_t *)a1 = (int32_t)result;
    char * v2 = (char *)(v1 - 54); // 0x145edb
    *v2 = *v2 | (char)(v1 / 256);
    return result + 0x1cd6f5d6 & 0xffffffff;
}

// Address range: 0x145f18 - 0x145f1c
int64_t function_145f18(int64_t a1) {
    // 0x145f18
    int64_t result; // 0x145f18
    return result;
}

// Address range: 0x145f41 - 0x145f43
int64_t function_145f41(void) {
    // 0x145f41
    int64_t v1; // 0x145f41
    return function_145f75(v1, v1, v1, v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x145f46 - 0x145f4b
int64_t function_145f46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x145f46
    int64_t result; // 0x145f46
    return result;
}

// Address range: 0x145f75 - 0x145fe4
int64_t function_145f75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t result, int64_t a7) {
    // 0x145f75
    int64_t v1; // 0x145f75
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a3 + 33); // 0x145f75
    int32_t v4 = v1; // 0x145f75
    *v3 = *v3 + v4;
    bool v5; // 0x145f75
    int64_t v6 = (v5 ? -4 : 4) + a2; // 0x145f78
    int64_t v7 = v2 & -256 | (int64_t)(*(char *)(v1 - 0x17fec0f1) | (char)v2); // 0x145f79
    int32_t * v8 = (int32_t *)(v6 + 0x68f1f391); // 0x145f80
    *v8 = *v8 + (int32_t)v7;
    uint64_t v9 = v2 / 256; // 0x145f86
    uint64_t v10 = v9 + a4; // 0x145f86
    int64_t v11; // 0x145f75
    *(char *)result = *(char *)&v11 + (char)result;
    int16_t v12 = a3; // 0x145f9a
    __asm_outsd(v12, *(int32_t *)v6);
    char * v13 = (char *)(a3 - 0x578e755e); // 0x145f9c
    *v13 = *v13 | (char)v10;
    int64_t v14 = result; // bp-24, 0x145fa2
    char v15 = *(char *)-0x6fcf1b54 + (char)v9; // 0x145fa5
    *(char *)-0x6fcf1b54 = v15;
    __asm_outsb(v12, *(char *)v6);
    if (v15 >= 0) {
        // 0x145fae
        return result;
    }
    int64_t v16 = v7 & 0xffffffff; // 0x145fa3
    __asm_out_135(-104, (int32_t)result);
    int64_t v17 = result & 0x22000100 | (int64_t)(*(char *)(v7 + result % 256) & 61); // 0x145fba
    int32_t * v18 = (int32_t *)(2 * v16 + (int64_t)&v14); // 0x145fbf
    int32_t v19 = v10 % 256 | a4 & 0xffffff00; // 0x145fbf
    *v18 = *v18 | v19;
    __asm_movq(*(int64_t *)(a3 + 0x3a087b));
    int32_t * v20 = (int32_t *)(v16 - 0x3abb3bd7); // 0x145fda
    *v20 = *v20 - v19;
    return (int64_t)(*(int32_t *)v17 | v4 | (int32_t)v17) | -0x61b8fec3;
}

// Address range: 0x146042 - 0x146053
int64_t function_146042(int64_t a1) {
    char * v1 = (char *)(a1 + 0x7700013d); // 0x14604a
    *v1 = *v1 & -107;
    int64_t v2; // 0x146042
    return function_1460ae(a1, 0x57d7ae9d, v2, (int64_t)&g1);
}

// Address range: 0x146068 - 0x14606f
int64_t function_146068(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x146068
    int64_t result; // 0x146068
    return result;
}

// Address range: 0x146072 - 0x14607d
int64_t function_146072(int64_t a1, int64_t a2) {
    // 0x146072
    return function_1fc921b();
}

// Address range: 0x1460ae - 0x1460b5
int64_t function_1460ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1460ae
    int64_t v1; // 0x1460ae
    int32_t * v2 = (int32_t *)(a3 - 117 + v1); // 0x1460ae
    *v2 = *v2 + (int32_t)v1;
    return v1 + a1 & 0xffffffff;
}

// Address range: 0x1666aa - 0x1666f3
int64_t function_1666aa(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char v1 = *(char *)-0x5031ba41; // 0x1666b8
    int64_t v2; // 0x1666aa
    *(char *)-0x5031ba41 = v1 + (char)((uint64_t)v2 / 256);
    unknown_1f184ece();
    int16_t v3 = a3; // 0x1666cd
    *(char *)a1 = __asm_insb(v3);
    char * v4 = (char *)(a1 + 0x3c7c0017); // 0x1666d3
    *v4 = *v4 - (char)(a3 / 256);
    unknown_ffffffffad5ba0df();
    int64_t v5 = unknown_ffffffffed3aece8(); // 0x1666e2
    *(int32_t *)a1 = __asm_insd(v3);
    return v5 & -256 | (int64_t)*(char *)0x2440ffa101e84800;
}

// Address range: 0x166779 - 0x1667da
int64_t function_166779(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __asm_iretd(); // 0x16677a
    char * v2 = (char *)(v1 - 0x17fe9e00); // 0x16677f
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0x166779
    bool v4; // 0x166779
    int32_t * v5 = (int32_t *)((v3 + a3 + (int64_t)v4 & 0xffffffff) - 0x66280100); // 0x166785
    *v5 = *v5 + (int32_t)v3;
    char * v6 = (char *)(a2 + 5); // 0x16678b
    *v6 = *v6 + (char)v3;
    int64_t v7 = v4 ? -1 : 1; // 0x166798
    *(int32_t *)0xdca01605 = -0x235fe9fb;
    unsigned char v8 = *(char *)0xdca01605; // 0x1667ae
    *(char *)0xdca01605 = v8 / 128 | 2 * v8;
    int64_t v9 = v7 + 0x9e3a519d; // 0x1667b0
    unknown_362527b9(v9, 2 * v7 + (v3 + a2 & 0xffffffff), (int32_t)v3);
    int32_t * v10 = (int32_t *)(unknown_23fe5fc8(v9 + v7) + 8); // 0x1667c7
    *v10 = *v10 + (int32_t)v3;
    return unknown_5e3bbfd7();
}

// Address range: 0x1667da - 0x1667df
int64_t function_1667da(int64_t a1, int64_t a2) {
    // 0x1667da
    return a2 & 0xffffffff;
}

// Address range: 0x1667e0 - 0x1667e5
int64_t function_1667e0(void) {
    // 0x1667e0
    return function_ffffffffb46c4fde();
}

// Address range: 0x1667e7 - 0x1667e8
int64_t function_1667e7(int64_t a1) {
    // 0x1667e7
    int64_t result; // 0x1667e7
    return result;
}

// Address range: 0x1667ef - 0x1667f0
int64_t function_1667ef(void) {
    // 0x1667ef
    int64_t result; // 0x1667ef
    return result;
}

// Address range: 0x166829 - 0x16682a
int64_t function_166829(void) {
    // 0x166829
    int64_t result; // 0x166829
    return result;
}

// Address range: 0x16683a - 0x166857
int64_t function_16683a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16683a
    unknown_ffffffff9adc3f40();
    if ((int32_t)(a3 || a1) >= 0) {
        function_166829();
    }
    // 0x166843
    function_1667ef();
    *(char *)a2 = (char)a4 + (char)a2;
    return unknown_ffffffffd3c8864f();
}

// Address range: 0x166857 - 0x166867
int64_t function_166857(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x166857
    int64_t result; // 0x166857
    return result;
}

// Address range: 0x166867 - 0x166898
int64_t function_166867(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x166867
    unknown_39ab176d();
    __asm_int1();
    int32_t * v1 = (int32_t *)(a3 - 0x1731e300); // 0x166871
    *v1 = (int32_t)a1;
    int32_t * v2 = (int32_t *)a5; // 0x166877
    *v2 = *v2 + (int32_t)a3;
    int64_t v3 = unknown_f7be485(*v1, a5); // 0x16687f
    return (int64_t)((int32_t)v3 - 0x4bd44c56 + *(int32_t *)(5 * a4));
}
