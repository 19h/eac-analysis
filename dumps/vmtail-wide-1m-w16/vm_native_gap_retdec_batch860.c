/*
 * Targeted RetDec C for native executable gap queue batch 860.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x6d690-0x6d890 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6d890-0x6da90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6da90-0x6dc90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6dc90-0x6de90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6de90-0x6e090 rank=- name=- kind=- bytes=- uncovered=-
 *   0x29ccbf-0x29cebf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29cebf-0x29d0bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29d0bf-0x29d2bf rank=- name=- kind=- bytes=- uncovered=-
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
typedef struct { uint8_t bytes[32]; } int256_t;
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
void __writefsbyte(int64_t offset, uint8_t value);
void __writegsbyte(int64_t offset, uint8_t value);
void __writegsdword(int64_t offset, uint32_t value);
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
int64_t unknown_b6ccb9(void);
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
void __asm_clts(void);
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_emms(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
void __asm_fldenv(int224_t value);
int64_t __asm_fnstenv();
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int256_t __asm_vpcmpeqw(int256_t left, int256_t right);
int256_t __asm_vprord(int256_t value, int count);
int256_t __asm_vpaddd(int256_t left, int256_t right);
int256_t __asm_vpxord(int256_t left, int256_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psadbw(int128_t left, int128_t right);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_vpunpckhdq(int128_t left, int128_t right);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
int128_t __asm_pmaxub(int128_t left, int128_t right);
int128_t __asm_pmaxsw(int128_t left, int128_t right);
int128_t __asm_pmulhw(int128_t left, int128_t right);
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

int64_t function_10dffbcb();
int64_t function_29ccbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29cd49(int64_t a1);
int64_t function_29cd55(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29cd5b(void);
int64_t function_29cd8c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_29cddd(void);
int64_t function_29cddf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29cdf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_29ce59(void);
int64_t function_29ce5d(void);
int64_t function_29ce5e(int64_t a1);
int64_t function_29ce89(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29ced3(void);
int64_t function_29cef3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_29cf0e(void);
int64_t function_29cf13(int64_t a1);
int64_t function_29cf27(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29cf40(void);
int64_t function_29cf6f(int64_t a1);
int64_t function_29cf7a(void);
int64_t function_29cfa8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29cfc7(void);
int64_t function_29d09c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29d0ac(void);
int64_t function_29d0c2(void);
int64_t function_29d0e5(void);
int64_t function_29d0ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29d142(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29d1d5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29d1f9(void);
int64_t function_29d1fc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_29d29c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3bffd045();
int64_t function_428f005();
int64_t function_6d67a();
int64_t function_6d690(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6d69d(void);
int64_t function_6d6a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_6d7e7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_6d80c(void);
int64_t function_6d82d(int64_t a1);
int64_t function_6d832(int64_t a1, int64_t a2);
int64_t function_6d83f(int64_t a1);
int64_t function_6d84c(void);
int64_t function_6d88f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6d894(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6d907(void);
int64_t function_6d9a7(void);
int64_t function_6d9c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6daac(int64_t a1);
int64_t function_6dae1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6);
int64_t function_6dcb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6dd2d(void);
int64_t function_6dd6b(void);
int64_t function_6dd93(void);
int64_t function_6ddb7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6ddd7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_6de08(void);
int64_t function_6de2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6de36(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_6de4c(void);
int64_t function_6de52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6de6c(void);
int64_t function_6de94(void);
int64_t function_6df02(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6df0c(void);
int64_t function_6df46(void);
int64_t function_6df58(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6df76(void);
int64_t function_6df86(int64_t a1);
int64_t function_6df89(void);
int64_t function_6df8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6dfca(void);
int64_t function_6dfe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6dff7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6e029(void);
int64_t function_6e067(void);
int64_t function_ffffffff8f4c4658();
int64_t function_ffffffffaf85d811();
int64_t function_ffffffffd6f7b0fc();
int64_t function_ffffffffea55b581();
int64_t unknown_10fe2135();
int64_t unknown_22ee7bdf();
int64_t unknown_3ac66ccb();
int64_t unknown_3d2bb72d();
int64_t unknown_74e470a4();
int64_t unknown_ffffffff88345601();
int64_t unknown_ffffffff911a5fb3();
int64_t unknown_ffffffff9dfee1c4();
int64_t unknown_ffffffffa953444a();
int64_t unknown_ffffffffabdfc89e();
int64_t unknown_ffffffffc74adfb4();
int64_t unknown_ffffffffe6235661();
int64_t unknown_fffffffff3f33895();

// Address range: 0x6d690 - 0x6d692
int64_t function_6d690(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6d690
    int64_t result; // 0x6d690
    return result;
}

// Address range: 0x6d69d - 0x6d69e
int64_t function_6d69d(void) {
    // 0x6d69d
    int64_t result; // 0x6d69d
    return result;
}

// Address range: 0x6d6a2 - 0x6d7bf
int64_t function_6d6a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x6d6a2
    int64_t v1; // 0x6d6a2
    int64_t v2 = v1;
    int64_t v3 = a5;
    *(char *)v2 = 2 * (char)v2;
    int64_t result = unknown_ffffffffe6235661(); // 0x6d6b8
    int32_t * v4 = (int32_t *)(a2 - 115); // 0x6d6bd
    *v4 = *v4 & (int32_t)result;
    if ((*(int32_t *)(a1 - 37) ^ (int32_t)a1) >= 1) {
        // 0x6d6cc
        return result;
    }
    // 0x6d6e3
    v3 = a2;
    if (((int64_t)&v3 & 0x7fffff8) == 0) {
        // 0x6d6fd
        return function_6d67a();
    }
    // 0x6d76d
    function_6d69d();
    return __asm_sti(0x71f201c0, a2);
}

// Address range: 0x6d7e7 - 0x6d807
int64_t function_6d7e7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    char v1 = __asm_in_133(87); // 0x6d7ec
    int32_t v2 = *(int32_t *)0x58012ab4 | 1; // 0x6d7ee
    unsigned char v3 = llvm_ctpop_i8((char)v2); // 0x6d7ee
    *(int32_t *)0x58012ab4 = v2;
    *(char *)(a4 + 0x14fc72aa) = (char)(a3 / 256);
    int64_t v4; // 0x6d7e7
    int64_t v5 = v4 & -0x10000 | (int64_t)v1 & -0xff01 | 0x8000 * (int64_t)(v2 < 0) | 1024 * (int64_t)(v3 % 2 == 0) | 512; // 0x6d7fb
    return (int64_t)(*(int32_t *)v5 | (int32_t)v5);
}

// Address range: 0x6d80c - 0x6d811
int64_t function_6d80c(void) {
    // 0x6d80c
    return function_ffffffffaf85d811();
}

// Address range: 0x6d82d - 0x6d830
int64_t function_6d82d(int64_t a1) {
    // 0x6d82d
    int64_t v1; // 0x6d82d
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x6d832 - 0x6d83f
int64_t function_6d832(int64_t a1, int64_t a2) {
    // 0x6d832
    return (int64_t)*(int32_t *)0x302552b293339c31;
}

// Address range: 0x6d83f - 0x6d846
int64_t function_6d83f(int64_t a1) {
    // 0x6d83f
    int64_t v1; // 0x6d83f
    uint64_t result = v1;
    char * v2 = (char *)(a1 + 42); // 0x6d83f
    bool v3; // 0x6d83f
    *v2 = (char)v3 - (char)(result / 256) + *v2;
    return result;
}

// Address range: 0x6d84c - 0x6d854
int64_t function_6d84c(void) {
    // 0x6d84c
    return function_428f005();
}

// Address range: 0x6d88f - 0x6d893
int64_t function_6d88f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6d88f
    int64_t result; // 0x6d88f
    return result;
}

// Address range: 0x6d894 - 0x6d899
int64_t function_6d894(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6d894
    int64_t result; // 0x6d894
    char * v1 = (char *)(a3 + 9 + result); // 0x6d894
    *v1 = *v1 / 2;
    return result;
}

// Address range: 0x6d907 - 0x6d90c
int64_t function_6d907(void) {
    // 0x6d907
    int64_t result; // 0x6d907
    return result;
}

// Address range: 0x6d9a7 - 0x6d9a8
int64_t function_6d9a7(void) {
    // 0x6d9a7
    int64_t result; // 0x6d9a7
    return result;
}

// Address range: 0x6d9c7 - 0x6da65
int64_t function_6d9c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6d9c7
    int64_t v1; // 0x6d9c7
    int64_t result = v1 & 0xffffffff; // 0x6d9c8
    bool v2; // 0x6d9c7
    if (a4 == 1 || v2 || !v2) {
        // 0x6d9cb
        return result;
    }
    // 0x6da63
    return result | 199;
}

// Address range: 0x6daac - 0x6daad
int64_t function_6daac(int64_t a1) {
    // 0x6daac
    int64_t result; // 0x6daac
    return result;
}

// Address range: 0x6dae1 - 0x6dcb5
int64_t function_6dae1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6) {
    // 0x6dae1
    int64_t v1; // 0x6dae1
    uint64_t v2 = v1;
    int3_t v3; // 0x6dae1
    int3_t v4 = v3;
    uint64_t v5 = a3 - v2 / 256; // 0x6dae1
    char v6 = v5; // 0x6db4a
    unsigned char v7 = (char)a4 - v6; // 0x6db4a
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x6db4a
    int64_t v9 = a4 & -256 | (int64_t)v7; // 0x6db4a
    if (v8 % 2 != 0) {
        unsigned char v10 = llvm_ctpop_i8((char)v2 + 31); // 0x6dbb0
        uint32_t v11 = __asm_in_134(101); // 0x6dbb5
        if (v10 % 2 != 0) {
            int64_t v12 = (int32_t)v2 > 0xf61516e0 ? 0x60265c44 : 0x60265c43; // 0x6dbb9
            return (int64_t)v11 - v12 & 0xffffffff;
        }
        // 0x6dc16
        *(char *)a1 = (char)a1 & -54;
        __frontend_reg_store_fpr(v4, (float80_t)*(float64_t *)v9 / __frontend_reg_load_fpr(v4));
        int64_t result = __asm_hlt(); // 0x6dc2a
        *(int32_t *)0x39a900fcaa54beb4 = (int32_t)result;
        return result;
    }
    int64_t v13 = v5 % 256 | a3 & -256; // 0x6dae1
    char * v14 = (char *)(v13 - 0x6858b59f); // 0x6db4f
    *v14 = *v14 + v6;
    __asm_int(-95);
    char v15 = (char)v2 - 4; // 0x6db57
    if (v15 < 0) {
        // 0x6db0c
        *(char *)(v13 + 79) = (char)(*(int32_t *)(a2 + 8) / 256);
        int32_t v16 = *(int32_t *)(v13 + 0x56cf33d9); // 0x6db20
        char v17 = *(char *)(a2 + 12); // 0x6db27
        *(char *)(int64_t)(v16 & (int32_t)a1 + 4) = v17;
        return a6 + 0xdb3cf5ab & 0xffffffff;
    }
    unsigned char v18 = v15 ^ -96; // 0x6db5c
    unsigned char v19 = llvm_ctpop_i8(v18); // 0x6db5c
    int64_t result2 = v2 & -256 | (int64_t)v18; // 0x6db5c
    *(int32_t *)a1 = (int32_t)result2;
    if (v19 % 2 != 0) {
        // 0x6db43
        return result2;
    }
    char * v20 = (char *)v9; // 0x6db61
    *v20 = *v20 + (char)(a5 / 256);
    return result2;
}

// Address range: 0x6dcb6 - 0x6dcee
int64_t function_6dcb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6dcb6
    int64_t v1; // 0x6dcb6
    uint32_t v2 = *(int32_t *)(2 * v1 + 0x1738eb23 + v1); // 0x6dcb6
    char v3 = *(char *)(v1 - 95); // 0x6dcbd
    int64_t result = a4 == 1 | v3 + (char)(v2 > (int32_t)a2) == (char)v1 ? 0x1f1e8ab5 : v1;
    return result;
}

// Address range: 0x6dd2d - 0x6dd2e
int64_t function_6dd2d(void) {
    // 0x6dd2d
    int64_t result; // 0x6dd2d
    return result;
}

// Address range: 0x6dd6b - 0x6dd6d
int64_t function_6dd6b(void) {
    // 0x6dd6b
    return function_6dd2d();
}

// Address range: 0x6dd93 - 0x6dd94
int64_t function_6dd93(void) {
    // 0x6dd93
    int64_t result; // 0x6dd93
    return result;
}

// Address range: 0x6ddb7 - 0x6ddd3
int64_t function_6ddb7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6ddb7
    int64_t v1; // 0x6ddb7
    int64_t v2 = (int64_t)((int32_t)v1 - *(int32_t *)(v1 + 33)); // 0x6ddb7
    int64_t result = unknown_22ee7bdf(); // 0x6ddba
    float80_t v3; // 0x6ddb7
    *(int64_t *)(result + 0x14922756) = (int64_t)v3;
    int32_t * v4 = (int32_t *)(a3 - 0x1fea1c59); // 0x6ddc5
    *v4 = *v4 | 0x3a949845;
    *(int64_t *)(v2 - 8) = v2;
    return result;
}

// Address range: 0x6ddd7 - 0x6ddde
int64_t function_6ddd7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    if ((char)a4 - (char)(a3 / 256) < 0) {
        function_6dd93();
    }
    // 0x6dddc
    return function_6de52(a1, a2, a3, (int64_t)&g1, (int64_t)&g1);
}

// Address range: 0x6de08 - 0x6de09
int64_t function_6de08(void) {
    // 0x6de08
    int64_t result; // 0x6de08
    return result;
}

// Address range: 0x6de2c - 0x6de35
int64_t function_6de2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6de2c
    int64_t result; // 0x6de2c
    char * v1 = (char *)(result - 0x7d65d59b); // 0x6de2c
    *v1 = *v1 + (char)a3;
    return result;
}

// Address range: 0x6de36 - 0x6de39
int64_t function_6de36(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x6de36
    int64_t result; // 0x6de36
    *(char *)a1 = (char)result + (char)(a3 / 256);
    return result;
}

// Address range: 0x6de4c - 0x6de4e
int64_t function_6de4c(void) {
    // 0x6de4c
    return function_6de94();
}

// Address range: 0x6de52 - 0x6de5d
int64_t function_6de52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6de52
    int64_t v1; // 0x6de52
    int64_t v2 = v1;
    __asm_outsb((int16_t)a3 + 0x4d88, (char)v1);
    return (v2 - ((int32_t)a3 < 0x6501b278 ? 135 : 134)) % 256 | v2 & -256;
}

// Address range: 0x6de6c - 0x6de6d
int64_t function_6de6c(void) {
    // 0x6de6c
    int64_t result; // 0x6de6c
    return result;
}

// Address range: 0x6de94 - 0x6de98
int64_t function_6de94(void) {
    // 0x6de94
    int64_t v1; // 0x6de94
    uint64_t v2 = v1;
    int64_t result; // 0x6de94
    bool v3; // 0x6de94
    if ((char)v3 + (char)v2 >= (char)(v2 / 256)) {
        result = function_6de6c();
    }
    // 0x6de98
    return result;
}

// Address range: 0x6df02 - 0x6df05
int64_t function_6df02(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6df02
    int64_t result; // 0x6df02
    return result;
}

// Address range: 0x6df0c - 0x6df0d
int64_t function_6df0c(void) {
    // 0x6df0c
    int64_t result; // 0x6df0c
    return result;
}

// Address range: 0x6df46 - 0x6df4d
int64_t function_6df46(void) {
    // 0x6df46
    int64_t v1; // 0x6df46
    int64_t v2 = v1;
    bool v3; // 0x6df46
    int64_t result = (v2 + 159 + (int64_t)v3) % 256 | v2 & -256; // 0x6df46
    __asm_out_135(-116, (int32_t)result);
    return result;
}

// Address range: 0x6df58 - 0x6df70
int64_t function_6df58(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6df58
    int64_t v1; // 0x6df58
    char v2 = v1; // 0x6df58
    *(char *)a1 = v2;
    __asm_out_136((int16_t)a3, v2);
    *(int64_t *)v1 = -0x51334800;
    return function_ffffffffd6f7b0fc();
}

// Address range: 0x6df76 - 0x6df77
int64_t function_6df76(void) {
    // 0x6df76
    int64_t result; // 0x6df76
    return result;
}

// Address range: 0x6df86 - 0x6df89
int64_t function_6df86(int64_t a1) {
    // 0x6df86
    int64_t result; // 0x6df86
    return result;
}

// Address range: 0x6df89 - 0x6df8c
int64_t function_6df89(void) {
    // 0x6df89
    int64_t result; // 0x6df89
    return result;
}

// Address range: 0x6df8e - 0x6dfa8
int64_t function_6df8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6df8e
    int64_t v1; // 0x6df8e
    uint32_t v2 = (int32_t)v1 ^ 0x2011795a; // 0x6df8e
    int64_t v3 = v2; // 0x6df93
    if (a4 != 1 && v2 != 0) {
        v3 = function_6df76();
    }
    uint64_t v4 = v3 & 0xffffffff | 0x100000000 * a3; // 0x6df95
    uint64_t v5 = (int64_t)*(int32_t *)(a2 - 10); // 0x6df95
    int16_t v6 = v4 % v5; // 0x6df9d
    __asm_outsb(v6, (char)a2);
    int32_t * v7 = (int32_t *)(a2 + 0x333c0e2); // 0x6df9e
    *v7 = *v7 + (int32_t)v1;
    return v4 / v5 & 0xffffff00 | (int64_t)__asm_in_137(v6);
}

// Address range: 0x6dfca - 0x6dfcf
int64_t function_6dfca(void) {
    // 0x6dfca
    return function_ffffffff8f4c4658();
}

// Address range: 0x6dfe0 - 0x6dfea
int64_t function_6dfe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6dfe0
    int64_t result; // 0x6dfe0
    *(int64_t *)(result - 0x703e60d4) = a5;
    int32_t * v1 = (int32_t *)(a1 + 39); // 0x6dfe6
    *v1 = *v1 - (int32_t)a4;
    return result;
}

// Address range: 0x6dff7 - 0x6dffa
int64_t function_6dff7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6dff7
    int64_t result; // 0x6dff7
    return result;
}

// Address range: 0x6e029 - 0x6e02a
int64_t function_6e029(void) {
    // 0x6e029
    int64_t result; // 0x6e029
    return result;
}

// Address range: 0x6e067 - 0x6e08f
int64_t function_6e067(void) {
    // 0x6e067
    int64_t v1; // 0x6e067
    int64_t v2 = v1;
    bool v3; // 0x6e067
    if (v3) {
        // 0x6e08d
        return (v2 + 188) % 256 | v2 & -256;
    }
    int64_t v4; // 0x6e067
    if (!v3) {
        v4 = function_6e029();
    }
    // 0x6e070
    return v4 | 220;
}

// Address range: 0x29ccbf - 0x29ccdd
int64_t function_29ccbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29ccbf
    int64_t v1; // 0x29ccbf
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x29ccbf
    int64_t v3 = v2 ? -4 : 4; // 0x29ccc4
    int64_t v4 = v3 + a1; // 0x29ccc4
    int64_t v5 = unknown_3ac66ccb(v4, v3 + a2); // 0x29ccc5
    unsigned char v6 = (char)a4 % 32; // 0x29ccca
    if (v6 != 0) {
        char * v7 = (char *)(v1 + 0x51ee0223); // 0x29ccca
        *v7 = *v7 << v6;
    }
    if (v6 != 0) {
        char * v8 = (char *)((v4 + a4 & 0xffffffff) + a3); // 0x29ccda
        unsigned char v9 = *v8; // 0x29ccda
        *v8 = v9 >> v6 | v9 << 8 - v6;
    }
    return v5 & 0xb3fe173b | 0x4c01e8c4;
}

// Address range: 0x29cd49 - 0x29cd4a
int64_t function_29cd49(int64_t a1) {
    // 0x29cd49
    int64_t result; // 0x29cd49
    return result;
}

// Address range: 0x29cd55 - 0x29cd5a
int64_t function_29cd55(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 - 36); // 0x29cd55
    int64_t result; // 0x29cd55
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x29cd5b - 0x29cd5c
int64_t function_29cd5b(void) {
    // 0x29cd5b
    int64_t result; // 0x29cd5b
    return result;
}

// Address range: 0x29cd8c - 0x29cdd9
int64_t function_29cd8c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x32d1d488 + 2 * a1); // 0x29cd8c
    uint32_t v2 = *v1; // 0x29cd8c
    uint32_t v3 = v2 + (int32_t)a1; // 0x29cd8c
    *v1 = v3;
    int64_t v4 = unknown_ffffffffabdfc89e(0x7fe488d); // 0x29cd98
    int64_t v5; // 0x29cd8c
    int32_t * v6 = (int32_t *)(v5 - 0x7459086d); // 0x29cd9d
    *v6 = *v6 - 24 + (int32_t)(v3 < v2);
    int32_t * v7 = (int32_t *)v4; // 0x29cda4
    *v7 = *v7 + (int32_t)a3;
    unknown_ffffffffc74adfb4();
    *(char *)0x7fe488d = *(char *)0x7fe488d + (char)(a3 / 256);
    if (llvm_ctpop_i8((char)a2 - 115) % 2 == 0) {
        function_29cd5b();
    }
    int32_t * v8 = (int32_t *)(v5 - 124); // 0x29cdce
    *v8 = *v8 + 0x7fe488d;
    *(char *)(a3 & -256 | 162) = (char)a4;
    return __asm_int1();
}

// Address range: 0x29cddd - 0x29cddf
int64_t function_29cddd(void) {
    // 0x29cddd
    int64_t v1; // 0x29cddd
    return function_29cdf4(v1, v1, v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x29cddf - 0x29cdf4
int64_t function_29cddf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29cddf
    int64_t v1; // 0x29cddf
    int64_t v2 = v1;
    *(char *)-0x17085e6a = 2 * *(char *)-0x17085e6a;
    *(int64_t *)v2 = v2 | 0x34086209;
    int64_t result = v2 ^ 232; // 0x29cdef
    int32_t * v3 = (int32_t *)(a3 + 81); // 0x29cdf1
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x29cdf4 - 0x29ce0b
int64_t function_29cdf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = unknown_ffffffff88345601(); // 0x29cdfa
    int32_t * v1 = (int32_t *)(a3 - 0x18606933); // 0x29ce05
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x29ce59 - 0x29ce5a
int64_t function_29ce59(void) {
    // 0x29ce59
    int64_t result; // 0x29ce59
    return result;
}

// Address range: 0x29ce5d - 0x29ce5e
int64_t function_29ce5d(void) {
    // 0x29ce5d
    int64_t result; // 0x29ce5d
    return result;
}

// Address range: 0x29ce5e - 0x29ce5f
int64_t function_29ce5e(int64_t a1) {
    // 0x29ce5e
    int64_t result; // 0x29ce5e
    return result;
}

// Address range: 0x29ce89 - 0x29ced0
int64_t function_29ce89(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29ce89
    int64_t v1; // 0x29ce89
    unsigned char v2 = llvm_ctpop_i8((char)v1 + 58); // 0x29ce8d
    unknown_fffffffff3f33895();
    if (v2 % 2 == 0) {
        function_29ce59();
    }
    int16_t v3 = a3; // 0x29ce97
    __asm_in_137(v3);
    int64_t v4; // 0x29ce89
    unsigned char v5 = (char)(int64_t)&v4; // 0x29ce99
    unsigned char v6 = (char)a4 % 32; // 0x29ce9b
    bool v7 = (53 - v5 & v5) < 0; // 0x29ce9b
    if (v6 != 0) {
        char v8 = v1;
        unsigned char v9 = v6 - 1; // 0x29ce9b
        char v10 = v8 << v6 | (char)((int16_t)v1 % 256 >> (int16_t)(9 - v6)) | (char)(v5 < 54) << v9; // 0x29ce9b
        *(char *)(v1 & 0xffffffff) = v10;
        v7 = v6 == 1 ? (v10 ^ v8 << v9) < 0 : (53 - v5 & v5) < 0;
    }
    unknown_74e470a4();
    if (v5 < 54 != v7) {
        function_29ce5d();
    }
    // 0x29cea5
    unknown_ffffffff911a5fb3();
    int64_t v11 = a2 + a1 & 0xffffffff; // 0x29ceb2
    *(int32_t *)v11 = __asm_insd(v3);
    int64_t v12 = unknown_ffffffff9dfee1c4(); // 0x29cebe
    int32_t * v13 = (int32_t *)v12; // 0x29cec3
    *v13 = *v13 + (int32_t)a3;
    int64_t v14; // 0x29ce89
    *(char *)v14 = *(char *)&v14 | (char)v12;
    *(int64_t *)v11 = v12;
    return (v12 + 255) % 256 | v12 & -256;
}

// Address range: 0x29ced3 - 0x29cedb
int64_t function_29ced3(void) {
    // 0x29ced3
    int64_t v1; // 0x29ced3
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 | v1);
    return function_10dffbcb();
}

// Address range: 0x29cef3 - 0x29cf0d
int64_t function_29cef3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x29cef3
    int64_t v1; // 0x29cef3
    int32_t v2 = v1; // 0x29cef3
    *(int32_t *)0x1e8205c61fd05d1 = v2;
    *(int32_t *)a1 = v2;
    *(char *)0x1e8b4f6b485bb6b = (char)result;
    return result;
}

// Address range: 0x29cf0e - 0x29cf0f
int64_t function_29cf0e(void) {
    // 0x29cf0e
    int64_t result; // 0x29cf0e
    return result;
}

// Address range: 0x29cf13 - 0x29cf21
int64_t function_29cf13(int64_t a1) {
    // 0x29cf13
    return unknown_ffffffffa953444a();
}

// Address range: 0x29cf27 - 0x29cf39
int64_t function_29cf27(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29cf27
    unknown_3d2bb72d(a1, a2, a3);
    int64_t v1; // 0x29cf27
    int32_t * v2 = (int32_t *)(v1 + 8 * v1); // 0x29cf2c
    *v2 = *v2 + (int32_t)a3;
    unknown_10fe2135();
    return function_ffffffffea55b581();
}

// Address range: 0x29cf40 - 0x29cf4c
int64_t function_29cf40(void) {
    int64_t result = unknown_ffffffffa953444a(); // 0x29cf4a
    bool v1; // 0x29cf40
    if (true == !v1) {
        result = function_29cf0e();
    }
    // 0x29cf4c
    return result;
}

// Address range: 0x29cf6f - 0x29cf72
int64_t function_29cf6f(int64_t a1) {
    // 0x29cf6f
    int64_t result; // 0x29cf6f
    return result;
}

// Address range: 0x29cf7a - 0x29cf7b
int64_t function_29cf7a(void) {
    // 0x29cf7a
    int64_t result; // 0x29cf7a
    return result;
}

// Address range: 0x29cfa8 - 0x29cfb5
int64_t function_29cfa8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29cfa8
    int64_t v1; // 0x29cfa8
    char v2 = *(char *)(v1 % 256 + v1); // 0x29cfaa
    return v1 & -256 | (int64_t)(v2 & (char)a3);
}

// Address range: 0x29cfc7 - 0x29cfcc
int64_t function_29cfc7(void) {
    // 0x29cfc7
    return function_3bffd045();
}

// Address range: 0x29d09c - 0x29d0a5
int64_t function_29d09c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29d09c
    int64_t v1; // 0x29d09c
    *(int32_t *)a2 = 2 * (int32_t)v1;
    int64_t v2; // 0x29d09c
    return v1 & -256 | (int64_t)*(char *)&v2;
}

// Address range: 0x29d0ac - 0x29d0ae
int64_t function_29d0ac(void) {
    // 0x29d0ac
    int64_t result; // 0x29d0ac
    return result;
}

// Address range: 0x29d0c2 - 0x29d0c5
int64_t function_29d0c2(void) {
    // 0x29d0c2
    int64_t result; // 0x29d0c2
    return result;
}

// Address range: 0x29d0e5 - 0x29d0e7
int64_t function_29d0e5(void) {
    // 0x29d0e5
    int64_t v1; // 0x29d0e5
    return function_29d142(v1, v1, v1);
}

// Address range: 0x29d0ea - 0x29d142
int64_t function_29d0ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    bool v2; // 0x29d0ea
    if (v2) {
        // 0x29d140
        int64_t result; // 0x29d0ea
        return result;
    }
    int32_t * v3 = (int32_t *)(a2 + 0x191efc88); // 0x29d0f3
    uint32_t v4 = *v3; // 0x29d0f3
    uint32_t v5 = v4 + (int32_t)a1; // 0x29d0f3
    *v3 = v5;
    int64_t result2 = a1 & 0xffffffff; // 0x29d100
    if (v5 < v4 || v5 == 0) {
        // 0x29d140
        return result2;
    }
    int32_t * v6 = (int32_t *)(a3 + 0x36a9eb67); // 0x29d104
    int64_t v7; // 0x29d0ea
    *v6 = *v6 + (int32_t)v7;
    float80_t v8; // 0x29d0ea
    *(int32_t *)result2 = (int32_t)v8;
    int64_t v9 = v2 ? -1 : 1; // 0x29d11a
    int64_t v10 = v9 + (v7 + 0x1979fed3 & 0xffffffff); // 0x29d11a
    int32_t v11 = *(int32_t *)(v10 + 0xaea0e413); // 0x29d131
    int64_t result3 = __asm_sti((int64_t)(v11 & (int32_t)v10), v9 + (int64_t)&v1); // 0x29d138
    return result3;
}

// Address range: 0x29d142 - 0x29d14a
int64_t function_29d142(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 64); // 0x29d142
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x29d142
    return result;
}

// Address range: 0x29d1d5 - 0x29d1e2
int64_t function_29d1d5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29d1d5
    int64_t v1; // 0x29d1d5
    *(char *)-0x7000c822 = *(char *)-0x7000c822 + (char)(v1 / 256);
    bool v2; // 0x29d1d5
    int64_t result = function_29d1fc(a1, a2, 2 * v1 & 0xfffffffe | (int64_t)v2, v1, v1, (int64_t)&g1); // 0x29d1e0
    return result;
}

// Address range: 0x29d1f9 - 0x29d1fc
int64_t function_29d1f9(void) {
    // 0x29d1f9
    int64_t v1; // 0x29d1f9
    return v1 ^ 53;
}

// Address range: 0x29d1fc - 0x29d288
int64_t function_29d1fc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x29d1fc
    int64_t v1; // 0x29d1fc
    uint64_t v2 = v1;
    uint64_t v3 = v1;
    int64_t v4 = a6;
    char v5 = *(char *)(a1 + 0x3d004067); // 0x29d200
    int32_t * v6 = (int32_t *)(2 * a4 + 111 + v2); // 0x29d206
    uint32_t v7 = *v6; // 0x29d206
    uint32_t v8 = (int32_t)v2; // 0x29d206
    int32_t v9 = v7 + v8; // 0x29d206
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x29d206
    *v6 = v9;
    uint32_t v11 = (int32_t)v3 >> 31; // 0x29d20a
    int64_t v12; // 0x29d1fc
    unsigned char v13 = *(char *)&v12; // 0x29d20b
    int64_t v14 = 256 * (int64_t)(v5 + (char)(v3 / 256)) | v3 & -0x10000 | (int64_t)v13; // 0x29d20b
    bool v15; // 0x29d1fc
    int64_t v16 = (v15 ? -1 : 1) + a2; // 0x29d20b
    v12 = v16;
    __asm_outsb((int16_t)v11, *(char *)v16);
    v4 = 0x4000 * (int64_t)v15 | 1024 * (int64_t)v15 | 512 * (int64_t)v15 | 256 * (int64_t)v15 | (int64_t)(v9 < v7) | 64 * (int64_t)(v9 == 0) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(v7 % 16 + v8 % 16 > 15) | 2048 * (int64_t)(((v9 ^ v7) & (v9 ^ v8)) < 0) | 4 * (int64_t)(v10 % 2 == 0) | 2;
    if (v9 < 0 == ((v9 ^ v7) & (v9 ^ v8)) < 0) {
        // 0x29d282
        return (int64_t)(0x13d1b5a * *(int32_t *)v14);
    }
    int64_t v17 = v11; // 0x29d20a
    char * v18 = (char *)(v17 - 0x176693f7); // 0x29d212
    *v18 = *v18 + (char)(a4 / 256);
    v12 = 2 * v12 & 0xfffffffe;
    *(char *)v14 = (char)v2;
    uint64_t v19 = v2 / 256; // 0x29d21c
    int64_t v20 = (v19 + v2) % 256 | v2 & -256; // 0x29d21c
    int32_t * v21 = (int32_t *)(a4 - 69); // 0x29d222
    int64_t result = v14; // 0x29d21c
    *(char *)a5 = 61;
    uint32_t v22 = *v21; // 0x29d222
    uint32_t v23 = v22 + (int32_t)v20; // 0x29d222
    *v21 = v23;
    result = result & -256 | v19 % 256;
    __asm_int(12);
    while (v23 < 0) {
        // 0x29d21e
        *(char *)a5 = 61;
        v22 = *v21;
        v23 = v22 + (int32_t)v20;
        *v21 = v23;
        result = result & -256 | v19 % 256;
        __asm_int(12);
    }
    if (v23 < v22 || v23 == 0) {
        // 0x29d277
        return result;
    }
    char * v24 = (char *)(8 * v20 + 0x5f12c5b9 + (int64_t)&v4); // 0x29d22d
    char v25 = v19; // 0x29d22d
    *v24 = *v24 | v25;
    char * v26 = (char *)v17; // 0x29d234
    *v26 = *v26 ^ v25;
    *(char *)0xeef913f = *(char *)0xeef913f + v25;
    return result;
}

// Address range: 0x29d29c - 0x29d2a5
int64_t function_29d29c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29d29c
    int64_t result; // 0x29d29c
    return result;
}
