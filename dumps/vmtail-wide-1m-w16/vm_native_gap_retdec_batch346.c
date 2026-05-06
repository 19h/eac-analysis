/*
 * Targeted RetDec C for native executable gap queue batch 346.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd2dc7-0xd2fc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd2fc7-0xd31c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd31c7-0xd33c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xf1b9c-0xf1d9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf1d9c-0xf1f9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf1f9c-0xf219c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf219c-0xf239c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dedf9-0x4deff9 rank=- name=- kind=- bytes=- uncovered=-
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
void __asm_out_138(uint16_t port, char value);
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

int64_t function_10c63072();
int64_t function_10c630de();
int64_t function_10c6314a();
int64_t function_10c631b6();
int64_t function_1cd74efd();
int64_t function_1f5331a();
int64_t function_1f72d69();
int64_t function_4dedf9(void);
int64_t function_4dee6b(void);
int64_t function_4dee6e(void);
int64_t function_4dee72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4deea9(void);
int64_t function_4def15(void);
int64_t function_4def81(void);
int64_t function_4defed(void);
int64_t function_d2db4();
int64_t function_d2dc7(void);
int64_t function_d2e02(int64_t a1);
int64_t function_d2e0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d2e73(void);
int64_t function_d2ec9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d2f87(void);
int64_t function_d2fba(int64_t a1);
int64_t function_d2fe8(void);
int64_t function_d3004(int64_t a1);
int64_t function_d305f(void);
int64_t function_d3064(void);
int64_t function_d3073(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d3090(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d3167(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d31ef(int64_t a1);
int64_t function_d3216(int64_t a1);
int64_t function_d323a(void);
int64_t function_d32b3(int64_t a1);
int64_t function_d3330(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d3391(void);
int64_t function_d33a5(void);
int64_t function_d33a7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_d33c5(int64_t a1);
int64_t function_f1b60();
int64_t function_f1b90();
int64_t function_f1b9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f1c3c(void);
int64_t function_f1c42(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f1caa(void);
int64_t function_f1cb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f1d47(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f1d72(int64_t a1);
int64_t function_f1d7a(int64_t a1);
int64_t function_f1df0(void);
int64_t function_f1df6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f1dfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_f1ee4(void);
int64_t function_f1f21(int64_t a1);
int64_t function_f1f34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f1f93(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_f1fa2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f1fc5(int64_t a1);
int64_t function_f2018(void);
int64_t function_f202e(int64_t a1, int64_t a2);
int64_t function_f204b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f2083(void);
int64_t function_f20a6(void);
int64_t function_f20c5(int64_t a1);
int64_t function_f20f4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f2101(void);
int64_t function_f2110(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_f2159(void);
int64_t function_f21f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f22a3(void);
int64_t function_f2327(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f2344(void);
int64_t function_f239a(void);
int64_t function_ffffffff95d225f3();
int64_t function_ffffffffb9155677();
int64_t function_fffffffff2f2b930();
int64_t unknown_12c4f474();
int64_t unknown_1461a9e7();
int64_t unknown_22f7b23e();
int64_t unknown_3018087a();
int64_t unknown_3aa85285();
int64_t unknown_3d613346();
int64_t unknown_441b9db9();
int64_t unknown_57d2f990();
int64_t unknown_64f1c87();
int64_t unknown_6c6f6228();
int64_t unknown_6f1dae2c();
int64_t unknown_7a771b32();
int64_t unknown_7c0fa9c1();
int64_t unknown_d47a4dd();
int64_t unknown_ffffffff8d0119ff();
int64_t unknown_ffffffff8eb5713d();
int64_t unknown_ffffffff90aa0bba();
int64_t unknown_ffffffff91325da1();
int64_t unknown_ffffffff99162cd2();
int64_t unknown_ffffffff9a162f1d();
int64_t unknown_ffffffffa3bf141a();
int64_t unknown_ffffffffa4040d2d();
int64_t unknown_ffffffffcbdc29db();
int64_t unknown_ffffffffd119a627();
int64_t unknown_fffffffffacd6572();
int64_t unknown_fffffffffb023fd6();
int64_t unknown_fffffffffff92440();

// Address range: 0xd2dc7 - 0xd2dd7
int64_t function_d2dc7(void) {
    // 0xd2dc7
    int64_t v1; // 0xd2dc7
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char v2 = *(char *)0xa1d4fd8; // 0xd2dd1
    *(char *)0xa1d4fd8 = v2 + (char)((uint64_t)v1 / 256);
    return result;
}

// Address range: 0xd2e02 - 0xd2e08
int64_t function_d2e02(int64_t a1) {
    // 0xd2e02
    int64_t result; // 0xd2e02
    bool v1; // 0xd2e02
    if (!v1) {
        result = function_d2db4();
    }
    // 0xd2e05
    return result;
}

// Address range: 0xd2e0f - 0xd2e38
int64_t function_d2e0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xd2e0f
    unknown_6f1dae2c();
    int32_t result = __asm_in(-0x27e6); // 0xd2e2b
    int32_t * v1 = (int32_t *)((a2 + a1 & 0xffffffff) + 0x1a01e8ce); // 0xd2e2e
    *v1 = *v1 & 88;
    return result;
}

// Address range: 0xd2e73 - 0xd2e74
int64_t function_d2e73(void) {
    // 0xd2e73
    int64_t result; // 0xd2e73
    return result;
}

// Address range: 0xd2ec9 - 0xd2eeb
int64_t function_d2ec9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd2ec9
    unknown_fffffffffb023fd6();
    int16_t v1 = a3; // 0xd2ed5
    int32_t v2 = __asm_in(v1); // 0xd2ed5
    int32_t * v3 = (int32_t *)a1; // 0xd2ed6
    float80_t v4; // 0xd2ec9
    *v3 = (int32_t)v4;
    *v3 = __asm_insd(v1);
    char * v5 = (char *)(8 * a1 + 0x2d306c08 + (int64_t)(0x10000 * v2 >> 16)); // 0xd2eda
    int64_t v6; // 0xd2ec9
    *v5 = *v5 ^ (char)v6;
    int64_t result = unknown_1461a9e7(); // 0xd2ee1
    *v3 = __asm_insd(v1);
    __asm_int(-114);
    return result;
}

// Address range: 0xd2f87 - 0xd2f90
int64_t function_d2f87(void) {
    // 0xd2f87
    int64_t result; // 0xd2f87
    int32_t * v1 = (int32_t *)(result + 0x764d342e); // 0xd2f87
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0xd2fba - 0xd2fbd
int64_t function_d2fba(int64_t a1) {
    // 0xd2fba
    int64_t result; // 0xd2fba
    return result;
}

// Address range: 0xd2fe8 - 0xd2fee
int64_t function_d2fe8(void) {
    // 0xd2fe8
    return __asm_sti();
}

// Address range: 0xd3004 - 0xd3005
int64_t function_d3004(int64_t a1) {
    // 0xd3004
    int64_t result; // 0xd3004
    return result;
}

// Address range: 0xd305f - 0xd3060
int64_t function_d305f(void) {
    // 0xd305f
    int64_t result; // 0xd305f
    return result;
}

// Address range: 0xd3064 - 0xd3065
int64_t function_d3064(void) {
    // 0xd3064
    int64_t result; // 0xd3064
    return result;
}

// Address range: 0xd3073 - 0xd3090
int64_t function_d3073(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd3073
    __asm_outsb((int16_t)a3, (char)a2);
    unknown_3018087a();
    __asm_sti();
    unknown_3aa85285();
    __asm_sti();
    int64_t v1 = __asm_wait(); // 0xd3085
    int64_t result = (v1 + 154) % 256 | v1 & -256; // 0xd3089
    if ((char)v1 < 102) {
        result = function_d3073(a1, a2, a3, (int64_t)&g2);
    }
    int32_t * v2 = (int32_t *)result; // 0xd308b
    int64_t v3; // 0xd3073
    *v2 = *v2 + (int32_t)v3;
    *(char *)a1 = (char)v3;
    return result;
}

// Address range: 0xd3090 - 0xd311d
int64_t function_d3090(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xd3090
    int64_t v1; // 0xd3090
    uint64_t v2 = v1;
    int64_t v3 = a1; // bp-8, 0xd3091
    bool v4; // 0xd3090
    int64_t v5 = v4 ? -4 : 4; // 0xd3092
    int64_t v6 = v5 + a1; // 0xd3092
    int64_t v7 = v5 + a2; // 0xd3092
    uint32_t v8 = (0x10000 * (int32_t)v1 >> 16) - 0x178e8c05; // 0xd309a
    int32_t * v9 = (int32_t *)(v1 + 0x16244077); // 0xd309f
    *v9 = *v9 + v8;
    int64_t v10 = a4 - 1; // 0xd30b0
    int64_t v11 = __asm_int3(v6, v7); // 0xd30b0
    if (v10 != 0 && (v8 < 0x1e85066 ? 71 : 70) != (char)v8) {
        v11 = function_d305f();
    }
    // 0xd30b2
    unknown_ffffffff90aa0bba();
    int64_t v12 = __asm_sti(); // 0xd30bc
    if ((int32_t)v11 == 0) {
        v12 = function_d3064();
    }
    int64_t v13 = a3 & -0xff01 | (int64_t)&g1; // 0xd30b9
    int32_t * v14 = (int32_t *)(a4 - 0x4bc28e0b); // 0xd30c0
    int32_t v15 = v1; // 0xd30c0
    *v14 = *v14 + v15;
    unsigned char v16 = llvm_ctpop_i8((char)v12 | -107); // 0xd30c6
    __asm_wait();
    if (v16 % 2 != 0) {
        unsigned char v17 = (char)v10 % 32; // 0xd310e
        if (v17 != 0) {
            char v18 = *(char *)v7; // 0xd310a
            char * v19 = (char *)((256 * (int64_t)(v18 + (char)(v2 / 256)) | v2 & -0xff01) - 0x623aff77); // 0xd310e
            *v19 = *v19 << v17;
        }
        int64_t result = unknown_ffffffffa3bf141a(); // 0xd3114
        int32_t * v20 = (int32_t *)(v13 - 91); // 0xd3119
        *v20 = *v20 | (int32_t)v13;
        return result;
    }
    // 0xd30cc
    unknown_ffffffff99162cd2();
    unsigned char v21 = (char)v13; // 0xd30d1
    char v22 = v2; // 0xd30d1
    unsigned char v23 = v22 + v21; // 0xd30d1
    int64_t v24 = unknown_d47a4dd(); // 0xd30d7
    char * v25 = (char *)(v24 + 0x2180e00); // 0xd30dc
    *v25 = *v25 + (char)v24;
    int32_t * v26 = (int32_t *)(v1 - 0x66ff4300); // 0xd30e4
    int32_t v27 = *v26; // 0xd30e4
    *v26 = (int32_t)(v13 & 0xffffff00 | (int64_t)v23) + (int32_t)(v23 < v21) + (int32_t)(int64_t)&v3 + v27;
    char * v28 = (char *)(a4 - 0x7bf53001); // 0xd30ee
    *v28 = *v28 + v22;
    int64_t result2 = (int64_t)(*(int32_t *)-0x9df15cffcfe1797 & -0x4401); // 0xd30fd
    int32_t * v29 = (int32_t *)(8 * v6 + 0x1e8eda6 + result2); // 0xd3100
    *v29 = *v29 - v15;
    uint32_t v30 = (int32_t)v10 % 32; // 0xd3107
    if (v30 != 0) {
        int32_t * v31 = (int32_t *)v10; // 0xd3107
        *v31 = *v31 << v30;
    }
    return result2;
}

// Address range: 0xd3167 - 0xd31ac
int64_t function_d3167(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd3167
    bool v1; // 0xd3167
    if (v1) {
        // 0xd317f
        *(char *)unknown_57d2f990() = 1;
        int64_t v2; // 0xd3167
        char v3 = *(char *)(v2 + 0x45e0439f); // 0xd3194
        int64_t result = unknown_ffffffff91325da1(); // 0xd319b
        char v4 = result; // 0xd31a0
        __asm_out_133((int16_t)(256 * v2 | (int64_t)((char)a3 - v3 + v4)), v4);
        return result;
    }
    int32_t * v5 = (int32_t *)(8 * unknown_fffffffffacd6572() + a2); // 0xd3171
    *v5 = *v5 & -0x34edc761;
    return function_1f5331a();
}

// Address range: 0xd31ef - 0xd31f2
int64_t function_d31ef(int64_t a1) {
    // 0xd31ef
    int64_t result; // 0xd31ef
    return result;
}

// Address range: 0xd3216 - 0xd3221
int64_t function_d3216(int64_t a1) {
    // 0xd3216
    int64_t result; // 0xd3216
    return result;
}

// Address range: 0xd323a - 0xd323d
int64_t function_d323a(void) {
    // 0xd323a
    int64_t result; // 0xd323a
    return result;
}

// Address range: 0xd32b3 - 0xd32b7
int64_t function_d32b3(int64_t a1) {
    // 0xd32b3
    int64_t result; // 0xd32b3
    return result;
}

// Address range: 0xd3330 - 0xd3338
int64_t function_d3330(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd3330
    return function_ffffffffb9155677();
}

// Address range: 0xd3391 - 0xd3392
int64_t function_d3391(void) {
    // 0xd3391
    int64_t result; // 0xd3391
    return result;
}

// Address range: 0xd33a5 - 0xd33a6
int64_t function_d33a5(void) {
    // 0xd33a5
    int64_t result; // 0xd33a5
    return result;
}

// Address range: 0xd33a7 - 0xd33bd
int64_t function_d33a7(int64_t a1, int64_t a2, int64_t a3) {
    // 0xd33a7
    int64_t v1; // 0xd33a7
    bool v2; // 0xd33a7
    if (v2) {
        v1 = function_d3391();
    }
    int32_t * v3 = (int32_t *)(a2 + 0x1c82960f); // 0xd33a9
    *v3 = *v3 + (int32_t)a2;
    unsigned char v4 = llvm_ctpop_i8((char)v1 | 58); // 0xd33af
    int64_t result = unknown_441b9db9(); // 0xd33b3
    if (v4 % 2 == 0) {
        // 0xd341f
        return result;
    }
    // 0xd33bb
    return function_d33a5();
}

// Address range: 0xd33c5 - 0xd33c6
int64_t function_d33c5(int64_t a1) {
    // 0xd33c5
    int64_t result; // 0xd33c5
    return result;
}

// Address range: 0xf1b9c - 0xf1c3a
int64_t function_f1b9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0xf1b9c
    int64_t v3 = 0x100000000 * v2 >> 32; // 0xf1b9d
    int64_t v4 = v2 & 0xffffffff; // 0xf1ba3
    if (-0x5dfabfff * v3 == -0x5dfabfff00000000 * v3 >> 32) {
        v4 = function_f1b90();
    }
    uint64_t v5 = v4;
    if ((v5 & 0x4000) != 0) {
        // 0xf1c11
        *(int32_t *)v5 = (int32_t)v5 + (int32_t)v2;
        *(char *)v1 = *(char *)&v1 + (char)unknown_64f1c87();
        int64_t result = __asm_hlt(); // 0xf1c27
        __asm_out(-24, (int32_t)result);
        return result;
    }
    int32_t v6 = a1; // 0xf1bb0
    *(int32_t *)-0x1708f649 = *(int32_t *)-0x1708f649 + v6;
    int32_t * v7 = (int32_t *)(a3 - 42); // 0xf1bb6
    uint32_t v8 = *v7; // 0xf1bb6
    uint32_t v9 = v8 + v6; // 0xf1bb6
    *v7 = v9;
    char * v10 = (char *)(2 * a2 - 35 + v2); // 0xf1bb9
    unsigned char v11 = *v10; // 0xf1bb9
    unsigned char v12 = (char)(v5 / 256); // 0xf1bb9
    char v13 = v9 < v8; // 0xf1bb9
    unsigned char v14 = v11 + v12; // 0xf1bb9
    char v15 = v14 + v13; // 0xf1bb9
    unsigned char v16 = llvm_ctpop_i8(v15); // 0xf1bb9
    bool v17 = v9 < v8 ? v15 <= v11 : v14 < v11; // 0xf1bb9
    *v10 = v15;
    int64_t result2 = v5 & -0xff01 | 256 * (64 * (int64_t)(v15 == 0) | (int64_t)v17 | 128 * (int64_t)(v15 < 0) | 16 * (int64_t)(v11 % 16 + v12 % 16 + v13 > 15) | 4 * (int64_t)(v16 % 2 == 0)) | 512; // 0xf1bc5
    if (v16 % 2 == 0) {
        result2 = function_f1b60();
    }
    // 0xf1bc7
    *(char *)a1 = __asm_insb((int16_t)v1);
    *(char *)0x5a3184d2 = *(char *)0x5a3184d2 + (char)(v2 / 256);
    int32_t * v18 = (int32_t *)(result2 - 28 + (v1 & -256 | 152)); // 0xf1bd1
    *v18 = *v18 + 0x17468e51;
    return result2;
}

// Address range: 0xf1c3c - 0xf1c3e
int64_t function_f1c3c(void) {
    // 0xf1c3c
    int64_t result; // 0xf1c3c
    return result;
}

// Address range: 0xf1c42 - 0xf1c50
int64_t function_f1c42(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf1c42
    return function_ffffffff95d225f3();
}

// Address range: 0xf1caa - 0xf1cac
int64_t function_f1caa(void) {
    // 0xf1caa
    int64_t result; // 0xf1caa
    return result;
}

// Address range: 0xf1cb6 - 0xf1cbf
int64_t function_f1cb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf1cb6
    int64_t v1; // 0xf1cb6
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0xf1d47 - 0xf1d61
int64_t function_f1d47(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 122); // 0xf1d47
    int64_t v2; // 0xf1d47
    *v1 = *v1 | (int32_t)v2;
    bool v3; // 0xf1d47
    __asm_outsd((int16_t)a3, *(int32_t *)((v3 ? -1 : 1) + a2));
    int64_t v4; // 0xf1d47
    return (int64_t)*(char *)&v4 | 0x9601700;
}

// Address range: 0xf1d72 - 0xf1d79
int64_t function_f1d72(int64_t a1) {
    // 0xf1d72
    int64_t result; // 0xf1d72
    return result;
}

// Address range: 0xf1d7a - 0xf1d7d
int64_t function_f1d7a(int64_t a1) {
    // 0xf1d7a
    int64_t result; // 0xf1d7a
    return result;
}

// Address range: 0xf1df0 - 0xf1df6
int64_t function_f1df0(void) {
    // 0xf1df0
    int64_t result; // 0xf1df0
    return result;
}

// Address range: 0xf1df6 - 0xf1dfa
int64_t function_f1df6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf1df6
    int64_t v1; // 0xf1df6
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0xf1dfa - 0xf1e93
int64_t function_f1dfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xf1dfa
    int64_t v1; // 0xf1dfa
    int64_t v2 = v1;
    int64_t v3 = a3;
    *(char *)v2 = (char)v2 + (char)a4;
    int64_t v4 = v2 + 0xe8f8c916; // 0xf1dfc
    int64_t v5 = v4 & 0xffffffff; // 0xf1dfc
    int32_t * v6 = (int32_t *)(a3 + 3); // 0xf1e01
    uint32_t v7 = *v6; // 0xf1e01
    uint32_t v8 = v7 + (int32_t)v4; // 0xf1e01
    *v6 = v8;
    int64_t * v9 = (int64_t *)v5; // 0xf1e04
    uint64_t v10 = *v9; // 0xf1e04
    uint64_t v11 = v8 < v7 ? -88 : -89; // 0xf1e04
    bool v12 = v8 < v7 | v10 < v11; // 0xf1e04
    *v9 = v10 - v11;
    uint32_t v13 = (int32_t)a4; // 0xf1e08
    uint32_t v14 = *(int32_t *)v5 + v13; // 0xf1e08
    uint32_t v15 = v14 + (int32_t)v12; // 0xf1e08
    int64_t v16 = v15; // 0xf1e08
    int64_t v17 = v12 ? v15 <= v13 : v14 < v13 ? 0x7e3901e9 : 0x7e3901e8; // 0xf1e0a
    char * v18 = (char *)((v4 - v17 & 0xffffffff) + 0x1e80f70); // 0xf1e0f
    *v18 = *v18 & (char)a1;
    unknown_ffffffffd119a627();
    char v19 = *(char *)-0x1a0bebe3; // 0xf1e26
    *(char *)-0x1a0bebe3 = (char)((v1 & 0xffffffff) < 0x6e5288bf) + (char)a3 + v19;
    unknown_7a771b32();
    uint32_t v20 = *(int32_t *)(v16 + 0x1a17089b) & (int32_t)a1; // 0xf1e31
    int64_t result = unknown_ffffffff8eb5713d(v20); // 0xf1e37
    if ((uint64_t)v1 >= *(int64_t *)(v16 + 0x4d01e800)) {
        // 0xf1eb1
        return result;
    }
    int64_t v21 = __asm_sldt(); // 0xf1e45
    *(int16_t *)(v21 - 0x54ff9800) = (int16_t)v21;
    int32_t * v22 = (int32_t *)(v1 + 1); // 0xf1e4f
    *v22 = *v22 + (int32_t)v1;
    int64_t v23 = __asm_iretd(); // 0xf1e59
    char v24 = v15; // 0xf1e5a
    *(char *)v1 = v24;
    char v25 = *(char *)&v3; // 0xf1e61
    unsigned char v26 = *(char *)0x1e81260; // 0xf1e63
    int32_t * v27 = (int32_t *)(v1 - 0x2fff540b); // 0xf1e64
    *v27 = (int32_t)v3;
    char * v28 = (char *)(v23 & -256 | (int64_t)v26); // 0xf1e6a
    *v28 = *v28 + v26;
    bool v29; // 0xf1dfa
    int64_t v30 = (v29 ? -4 : 4) + (int64_t)v20; // 0xf1e6c
    int64_t v31 = v29 ? 0x1e8125b : 0x1e81265; // 0xf1e6c
    unknown_12c4f474(v30, v31, *v27, v16 & 0xffffff00 | (int64_t)(v25 + v24));
    int64_t v32 = __asm_int3(v30, v31) & 0xffffffff ^ 188; // 0xf1e77
    char * v33 = (char *)v31; // 0xf1e79
    *v33 = *v33 - 1;
    *(int64_t *)(v32 - 8) = 0x55bad8f6;
    int64_t result2 = a6 + 8 & 0x8fe00ba | (int64_t)"OW" | 0xf7010045; // 0xf1e85
    char * v34 = (char *)result2; // 0xf1e88
    *v34 = *v34 - (char)result2;
    *(int64_t *)(v32 - 16) = v31;
    int32_t * v35 = (int32_t *)(v30 + 33); // 0xf1e8d
    *v35 = *v35 + (int32_t)*(int64_t *)a6;
    return result2;
}

// Address range: 0xf1ee4 - 0xf1eed
int64_t function_f1ee4(void) {
    // 0xf1ee4
    int64_t result; // 0xf1ee4
    return result;
}

// Address range: 0xf1f21 - 0xf1f33
int64_t function_f1f21(int64_t a1) {
    int64_t v1 = unknown_6c6f6228(); // 0xf1f22
    *(char *)a1 = (char)v1;
    return v1 & 0xffffffff ^ 0xe99ddea8;
}

// Address range: 0xf1f34 - 0xf1f8a
int64_t function_f1f34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf1f34
    int64_t v1; // 0xf1f34
    bool v2; // 0xf1f34
    if (!v2) {
        char * v3 = (char *)(v1 - 0x72eebf5c); // 0xf1f71
        *v3 = *v3 + (char)v1;
        int64_t result = __asm_int1(); // 0xf1f7d
        *(char *)-0x7e22707a = *(char *)-0x7e22707a + (char)(v1 / 256);
        return result;
    }
    // 0xf1f36
    __asm_int3(a1, a2);
    uint64_t v4 = unknown_fffffffffff92440(); // 0xf1f37
    if (!v2) {
        // 0xf1f52
        return v4 / 256 % 256 | v4;
    }
    int64_t v5 = unknown_3d613346(); // 0xf1f40
    int32_t * v6 = (int32_t *)(a3 - 44); // 0xf1f49
    *v6 = *v6 + (int32_t)a1;
    return v5 + 2 * v1 & 0xffffffff;
}

// Address range: 0xf1f93 - 0xf1fa1
int64_t function_f1f93(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0xf1f93
    int64_t v1; // 0xf1f93
    char * v2 = (char *)(a4 + 0x2be8013d + 2 * v1); // 0xf1f95
    *v2 = *v2 + (char)(v1 / 256);
    uint16_t v3 = (int16_t)v1; // 0xf1f9c
    uint16_t v4 = (int16_t)(a4 / 256) % 256; // 0xf1f9c
    return v1 & 0xffff0000 | (int64_t)(v3 / v4 % 256) | (int64_t)(256 * (v3 % v4));
}

// Address range: 0xf1fa2 - 0xf1fc5
int64_t function_f1fa2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf1fa2
    int64_t v1; // 0xf1fa2
    __asm_out_134((int16_t)a3, (int32_t)v1);
    __asm_sti();
    int64_t v2 = (a4 - v1) % 256 | a4 & -256; // 0xf1fb1
    int32_t * v3 = (int32_t *)(v2 - 118); // 0xf1fb6
    *v3 = -*v3;
    int64_t result = unknown_7c0fa9c1(); // 0xf1fb9
    int32_t * v4 = (int32_t *)(result + 37); // 0xf1fc0
    *v4 = *v4 + (int32_t)v2;
    return result;
}

// Address range: 0xf1fc5 - 0xf1fde
int64_t function_f1fc5(int64_t a1) {
    // 0xf1fc5
    *(int32_t *)0x79ac71d0 = *(int32_t *)0x79ac71d0 + (int32_t)a1;
    __asm_sti();
    __asm_int(122);
    return unknown_ffffffffcbdc29db();
}

// Address range: 0xf2018 - 0xf2019
int64_t function_f2018(void) {
    // 0xf2018
    int64_t result; // 0xf2018
    return result;
}

// Address range: 0xf202e - 0xf2043
int64_t function_f202e(int64_t a1, int64_t a2) {
    // 0xf202e
    int64_t result; // 0xf202e
    bool v1; // 0xf202e
    if (v1) {
        result = function_f2018();
    }
    int32_t * v2 = (int32_t *)(result + 0x359d84bf); // 0xf2030
    int64_t v3; // 0xf202e
    *v2 = *v2 + (int32_t)v3;
    int32_t * v4 = (int32_t *)(8 * a1 - 0xe44fbd + v3); // 0xf2039
    int64_t v5; // 0xf202e
    *v4 = *v4 + (int32_t)(int64_t)&v5;
    return result;
}

// Address range: 0xf204b - 0xf2051
int64_t function_f204b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf204b
    int64_t result; // 0xf204b
    return result;
}

// Address range: 0xf2083 - 0xf2084
int64_t function_f2083(void) {
    // 0xf2083
    int64_t result; // 0xf2083
    return result;
}

// Address range: 0xf20a6 - 0xf20a7
int64_t function_f20a6(void) {
    // 0xf20a6
    int64_t result; // 0xf20a6
    return result;
}

// Address range: 0xf20c5 - 0xf20c8
int64_t function_f20c5(int64_t a1) {
    // 0xf20c5
    int64_t result; // 0xf20c5
    return result;
}

// Address range: 0xf20f4 - 0xf2100
int64_t function_f20f4(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf20f4
    int64_t v1; // 0xf20f4
    unsigned char v2 = (char)v1;
    *(char *)v1 = v2 / 128 | 2 * v2;
    char v3 = v2 & 42; // 0xf20f6
    unsigned char v4 = llvm_ctpop_i8(v3); // 0xf20f6
    int64_t v5; // 0xf20f4
    __asm_outsb((int16_t)a3, *(char *)&v5);
    return 0x4000 * (int64_t)(v3 == 0) | unknown_ffffffff8d0119ff() & -0xff01 | 1024 * (int64_t)(v4 % 2 == 0) | 512;
}

// Address range: 0xf2101 - 0xf2106
int64_t function_f2101(void) {
    // 0xf2101
    return function_fffffffff2f2b930();
}

// Address range: 0xf2110 - 0xf212c
int64_t function_f2110(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xf2110
    int64_t v1; // 0xf2110
    int32_t * v2 = (int32_t *)(v1 - 0x5e0fc9f5); // 0xf2111
    int32_t v3 = *v2; // 0xf2111
    int32_t v4 = v1; // 0xf2111
    int32_t v5 = v3 + v4; // 0xf2111
    *v2 = v5;
    unknown_ffffffff9a162f1d();
    if (v5 < 0 == ((v5 ^ v3) & (v5 ^ v4)) < 0) {
        function_f20a6();
    }
    // 0xf211e
    return 0xd20b9079;
}

// Address range: 0xf2159 - 0xf215c
int64_t function_f2159(void) {
    // 0xf2159
    int64_t result; // 0xf2159
    return result;
}

// Address range: 0xf21f8 - 0xf2209
int64_t function_f21f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf21f8
    int64_t v1; // 0xf21f8
    unsigned char v2 = (char)v1;
    char v3 = v2 / 128; // 0xf21f8
    *(char *)v1 = v3 | 2 * v2;
    int32_t * v4 = (int32_t *)(a3 - 0x65f0fec3); // 0xf21fa
    *v4 = (int32_t)(v3 != 0) - (int32_t)a1 + *v4;
    *(char *)a3 = (char)a4;
    __asm_in_135((int16_t)a3);
    return function_1f72d69();
}

// Address range: 0xf22a3 - 0xf22ae
int64_t function_f22a3(void) {
    // 0xf22a3
    return function_1cd74efd();
}

// Address range: 0xf2327 - 0xf2344
int64_t function_f2327(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf2327
    float80_t v1; // 0xf2327
    *(int16_t *)(unknown_ffffffffa4040d2d() + 0x7c07a11) = (int16_t)v1;
    unknown_22f7b23e();
    unsigned char v2 = (char)a4 % 32; // 0xf233d
    if (v2 != 0) {
        char * v3 = (char *)(a1 - 76); // 0xf233d
        *v3 = *v3 << v2;
    }
    return a4 & 0xffffffff;
}

// Address range: 0xf2344 - 0xf2347
int64_t function_f2344(void) {
    // 0xf2344
    __asm_int(-4);
    int64_t result; // 0xf2344
    return result;
}

// Address range: 0xf239a - 0xf239b
int64_t function_f239a(void) {
    // 0xf239a
    int64_t result; // 0xf239a
    return result;
}

// Address range: 0x4dedf9 - 0x4dedfa
int64_t function_4dedf9(void) {
    // 0x4dedf9
    int64_t result; // 0x4dedf9
    return result;
}

// Address range: 0x4dee6b - 0x4dee6c
int64_t function_4dee6b(void) {
    // 0x4dee6b
    int64_t result; // 0x4dee6b
    return result;
}

// Address range: 0x4dee6e - 0x4dee71
int64_t function_4dee6e(void) {
    // 0x4dee6e
    int64_t result; // 0x4dee6e
    return result;
}

// Address range: 0x4dee72 - 0x4dee7b
int64_t function_4dee72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4dee72
    int64_t v1; // 0x4dee72
    *(char *)a1 = (char)v1 + (char)a4;
    int64_t v2; // 0x4dee72
    return (int64_t)&v2;
}

// Address range: 0x4deea9 - 0x4deeae
int64_t function_4deea9(void) {
    // 0x4deea9
    return function_10c63072();
}

// Address range: 0x4def15 - 0x4def1a
int64_t function_4def15(void) {
    // 0x4def15
    return function_10c630de();
}

// Address range: 0x4def81 - 0x4def86
int64_t function_4def81(void) {
    // 0x4def81
    return function_10c6314a();
}

// Address range: 0x4defed - 0x4deff2
int64_t function_4defed(void) {
    // 0x4defed
    return function_10c631b6();
}
