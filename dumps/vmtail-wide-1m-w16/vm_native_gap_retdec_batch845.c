/*
 * Targeted RetDec C for native executable gap queue batch 845.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x249f7d-0x24a07d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24a17d-0x24a37d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24a37d-0x24a47d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24a77d-0x24a97d rank=- name=- kind=- bytes=- uncovered=-
 *   0x402ad1-0x402cd1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x402cd1-0x402ed1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x402ed1-0x4030d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4030d1-0x4032d1 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_249f6a();
int64_t function_249f7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24a020(void);
int64_t function_24a045(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24a17d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_24a194(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24a1ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24a291(void);
int64_t function_24a295(void);
int64_t function_24a2af(int64_t a1);
int64_t function_24a2c5(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24a2d4(void);
int64_t function_24a2e3(void);
int64_t function_24a2ea(void);
int64_t function_24a2f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24a361(void);
int64_t function_24a365(void);
int64_t function_24a400(void);
int64_t function_24a41d(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_24a77d(int64_t a1);
int64_t function_24a789(void);
int64_t function_24a7aa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_24a86c(int64_t a1);
int64_t function_24a935(int64_t a1);
int64_t function_402ad1(void);
int64_t function_402ad2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_402be4(void);
int64_t function_402c24(int64_t a1);
int64_t function_402c3a(void);
int64_t function_402c4e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_402d00(void);
int64_t function_402d05(void);
int64_t function_402d1c(int64_t a1, int64_t a2);
int64_t function_402d40(void);
int64_t function_402d67(int64_t a1, int64_t a2);
int64_t function_402d6c(void);
int64_t function_402d6d(int64_t a1);
int64_t function_402db1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_402dcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_402ded(void);
int64_t function_402e04(void);
int64_t function_402e45(void);
int64_t function_402e4f(void);
int64_t function_402e53(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_402e7f(int64_t a1);
int64_t function_402e92(void);
int64_t function_402ea7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_402ee6(int64_t a1);
int64_t function_402f05(void);
int64_t function_402f12(void);
int64_t function_402f1a(int64_t a1);
int64_t function_403046(int64_t a1, int64_t a2);
int64_t function_403080(void);
int64_t function_4030a1(void);
int64_t function_4030da(int64_t a1);
int64_t function_403124(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_403134(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_403150(void);
int64_t function_403168(int64_t a1, int64_t a2, int64_t a3);
int64_t function_403178(void);
int64_t function_40317e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_403258(void);
int64_t function_403286(void);
int64_t function_69d9c7ba();
int64_t function_d575aba();
int64_t function_ffffffff99268cf9();
int64_t function_ffffffffad9ba151();
int64_t unknown_3c71cb00();
int64_t unknown_3cbee651();
int64_t unknown_3d268c2e();
int64_t unknown_6126a44a();
int64_t unknown_612a8c3f();
int64_t unknown_ffffffffb3315c23();
int64_t unknown_ffffffffc8cf2f94();

// Address range: 0x249f7d - 0x249f93
int64_t function_249f7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x249f7d
    __asm_wait();
    if (a4 != 1) {
        function_249f6a();
    }
    // 0x249f82
    bool v1; // 0x249f7d
    int64_t v2 = v1 ? -1 : 1; // 0x249f84
    return unknown_ffffffffc8cf2f94(v2 + a1, v2 + a5, 2 * (int32_t)a3);
}

// Address range: 0x24a020 - 0x24a023
int64_t function_24a020(void) {
    // 0x24a020
    int64_t result; // 0x24a020
    return result;
}

// Address range: 0x24a045 - 0x24a052
int64_t function_24a045(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24a045
    int64_t v1; // 0x24a045
    char * v2 = (char *)(v1 + 0x4f91e809); // 0x24a045
    *v2 = *v2 + (char)a4;
    return unknown_3cbee651(a1, a2, a3, a4);
}

// Address range: 0x24a17d - 0x24a193
int64_t function_24a17d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    int64_t v1 = __asm_int1(); // 0x24a17d
    int64_t v2 = v1; // 0x24a17d
    int64_t v3; // 0x24a17d
    int32_t * v4 = (int32_t *)(v3 - 0x67fed756); // 0x24a17e
    *v4 = *v4 - (int32_t)a1;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    uint32_t v5 = (int32_t)a4 % 32; // 0x24a18d
    if (v5 != 0) {
        uint32_t v6 = *(int32_t *)&v2; // 0x24a18d
        *(int32_t *)v2 = v6 >> 32 - v5 | v6 << v5;
    }
    int32_t * v7 = (int32_t *)(result - 33); // 0x24a190
    *v7 = *v7 & (int32_t)v1 >> 31;
    return result;
}

// Address range: 0x24a194 - 0x24a1c6
int64_t function_24a194(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24a194
    bool v1; // 0x24a194
    if (v1) {
        // 0x24a196
        __asm_iretd();
        return function_ffffffffad9ba151();
    }
    // 0x24a1b4
    int64_t v2; // 0x24a194
    __asm_out(-38, (int32_t)v2);
    char v3 = *(char *)0x2d4503bd; // 0x24a1b6
    *(char *)0x2d4503bd = v3 + (char)((uint64_t)v2 / 256);
    int64_t result = __asm_int1(); // 0x24a1bc
    *(int32_t *)-0x65ed0bffec328100 = (int32_t)result;
    return result;
}

// Address range: 0x24a1ce - 0x24a1d7
int64_t function_24a1ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24a1ce
    int64_t result; // 0x24a1ce
    return result;
}

// Address range: 0x24a291 - 0x24a294
int64_t function_24a291(void) {
    // 0x24a291
    int64_t result; // 0x24a291
    return result;
}

// Address range: 0x24a295 - 0x24a296
int64_t function_24a295(void) {
    // 0x24a295
    int64_t result; // 0x24a295
    return result;
}

// Address range: 0x24a2af - 0x24a2b1
int64_t function_24a2af(int64_t a1) {
    // 0x24a2af
    int64_t result; // 0x24a2af
    return result;
}

// Address range: 0x24a2c5 - 0x24a2ca
int64_t function_24a2c5(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)(a4 - 67); // 0x24a2c6
    return 256 * (int64_t)(v1 | (char)(a1 / 256)) | a1 & 0xffff00ff;
}

// Address range: 0x24a2d4 - 0x24a2d5
int64_t function_24a2d4(void) {
    // 0x24a2d4
    int64_t result; // 0x24a2d4
    return result;
}

// Address range: 0x24a2e3 - 0x24a2e6
int64_t function_24a2e3(void) {
    // 0x24a2e3
    int64_t result; // 0x24a2e3
    return result;
}

// Address range: 0x24a2ea - 0x24a2ec
int64_t function_24a2ea(void) {
    // 0x24a2ea
    return function_24a2d4();
}

// Address range: 0x24a2f5 - 0x24a303
int64_t function_24a2f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24a2f5
    int64_t v1; // 0x24a2f5
    bool v2; // 0x24a2f5
    if (llvm_ctpop_i8((char)((uint64_t)v1 / 256) + (char)a3 + (char)v2) % 2 == 0) {
        function_24a295();
    }
    int64_t result = unknown_3c71cb00(); // 0x24a2fa
    *(char *)a1 = (char)a2;
    return result;
}

// Address range: 0x24a361 - 0x24a362
int64_t function_24a361(void) {
    // 0x24a361
    int64_t result; // 0x24a361
    return result;
}

// Address range: 0x24a365 - 0x24a367
int64_t function_24a365(void) {
    // 0x24a365
    return function_24a361();
}

// Address range: 0x24a400 - 0x24a41d
int64_t function_24a400(void) {
    // 0x24a400
    int64_t result; // 0x24a400
    int32_t v1 = result; // 0x24a400
    __asm_out(-22, v1);
    *(int32_t *)0x1de7e400f00013cf = v1;
    __asm_out_133(-73, (char)result);
    char v2 = *(char *)-0x6b1c04ec; // 0x24a40d
    *(char *)-0x6b1c04ec = v2 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x24a41d - 0x24a452
int64_t function_24a41d(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffb3315c23(); // 0x24a41d
    char * v3 = (char *)(2 * a1); // 0x24a422
    *v3 = *v3 + (char)(a3 / 256);
    *(char *)a1 = (char)v2;
    bool v4; // 0x24a41d
    int64_t v5 = (v4 ? -1 : 1) + a1; // 0x24a425
    unknown_3d268c2e(v5);
    int32_t * v6 = (int32_t *)(v5 - 35); // 0x24a42d
    uint32_t v7 = *v6; // 0x24a42d
    uint32_t v8 = v7 + (int32_t)a3; // 0x24a42d
    *v6 = v8;
    int64_t v9; // 0x24a41d
    int64_t * v10 = (int64_t *)(v9 + 0x74050800); // 0x24a430
    bool v11 = v8 < v7; // 0x24a42d
    uint64_t v12 = *v10; // 0x24a430
    uint64_t v13 = v12 + v9; // 0x24a430
    uint64_t v14 = v13 + (int64_t)v11; // 0x24a430
    unsigned char v15 = llvm_ctpop_i8((char)v14); // 0x24a430
    v11 = v11 ? v14 <= v12 : v13 < v12;
    *v10 = v14;
    __asm_int(110);
    unknown_612a8c3f();
    while (v15 % 2 == 0) {
        // 0x24a430
        v12 = *v10;
        v13 = v12 + v9;
        v14 = v13 + (int64_t)v11;
        v15 = llvm_ctpop_i8((char)v14);
        v11 = v11 ? v14 <= v12 : v13 < v12;
        *v10 = v14;
        __asm_int(110);
        unknown_612a8c3f();
    }
    // 0x24a440
    __asm_in(-82);
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    unknown_6126a44a();
    return function_ffffffff99268cf9();
}

// Address range: 0x24a77d - 0x24a77e
int64_t function_24a77d(int64_t a1) {
    // 0x24a77d
    int64_t result; // 0x24a77d
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x24a789 - 0x24a798
int64_t function_24a789(void) {
    // 0x24a789
    int64_t result; // 0x24a789
    *(int32_t *)-0x5e6778fa9feb1527 = (int32_t)result;
    return result;
}

// Address range: 0x24a7aa - 0x24a7c4
int64_t function_24a7aa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    *(char *)a2 = (char)(a3 | a2);
    char v2 = *(char *)-0x65ea7744; // 0x24a7b5
    int64_t v3; // 0x24a7aa
    *(char *)-0x65ea7744 = v2 + (char)((uint64_t)v3 / 256);
    unsigned char v4 = (char)(a4 / 256); // 0x24a7bb
    unsigned char v5 = (char)a3; // 0x24a7bb
    unsigned char v6 = v5 - v4; // 0x24a7bb
    while (v5 >= v4 && v6 != 0) {
        // 0x24a7bb
        v5 = (char)(int64_t)v6;
        v6 = v5 - v4;
    }
    // 0x24a7c1
    *(int32_t *)a1 = *(int32_t *)&v1;
    return (int64_t)*(int32_t *)0x774f0a0b00680f44;
}

// Address range: 0x24a86c - 0x24a87e
int64_t function_24a86c(int64_t a1) {
    // 0x24a86c
    int64_t v1; // 0x24a86c
    return v1 & -256 | (int64_t)*(char *)-0x70540506fe17f800;
}

// Address range: 0x24a935 - 0x24a936
int64_t function_24a935(int64_t a1) {
    // 0x24a935
    int64_t result; // 0x24a935
    return result;
}

// Address range: 0x402ad1 - 0x402ad2
int64_t function_402ad1(void) {
    // 0x402ad1
    int64_t result; // 0x402ad1
    return result;
}

// Address range: 0x402ad2 - 0x402bab
int64_t function_402ad2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x402ad2
    int64_t v1; // 0x402ad2
    int64_t v2 = v1;
    int32_t v3 = v1; // 0x402ad3
    uint32_t v4 = v3 - 0x5ccdc013; // 0x402ad3
    int64_t result = v4; // 0x402ad3
    char v5 = v4 / 256; // 0x402ad8
    __asm_outsd((int16_t)a3, (int32_t)a2);
    if ((v5 & 64) != 0) {
        // 0x402add
        return result;
    }
    if (v5 < 0 == (0x5ccdc012 - v3 & v3) < 0) {
        // 0x402ae1
        *(int32_t *)(v2 + 0x50fd7d9b + 2 * v2) = (int32_t)a1;
        return result;
    }
    // 0x402b41
    __asm_out(93, v4);
    return result;
}

// Address range: 0x402be4 - 0x402be6
int64_t function_402be4(void) {
    // 0x402be4
    int64_t result; // 0x402be4
    return result;
}

// Address range: 0x402c24 - 0x402c27
int64_t function_402c24(int64_t a1) {
    // 0x402c24
    int64_t result; // 0x402c24
    return result;
}

// Address range: 0x402c3a - 0x402c3f
int64_t function_402c3a(void) {
    // 0x402c3a
    return function_69d9c7ba();
}

// Address range: 0x402c4e - 0x402ccb
int64_t function_402c4e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x402c4e
    bool v3; // 0x402c4e
    if (v3 || false) {
        // 0x402cc6
        *(int16_t *)a2 = (int16_t)v2;
        int64_t v4; // 0x402c4e
        return (int64_t)&v4;
    }
    // 0x402c55
    *(char *)a1 = __asm_insb((int16_t)a3);
    unsigned char v5 = (char)a4 % 32; // 0x402c66
    if (v5 != 0) {
        char * v6 = (char *)(v2 + 116); // 0x402c66
        *v6 = *v6 << v5;
    }
    int64_t v7 = v2 + 0x4e1c86; // 0x402c5b
    char * v8 = (char *)v7; // 0x402c69
    *v8 = *v8 & (char)(v2 / 0x200000);
    int64_t * v9 = (int64_t *)(v2 + 8); // 0x402c6b
    unsigned char v10 = (char)v7; // 0x402c6c
    unsigned char v11 = v10 - 45; // 0x402c6f
    unsigned char v12 = v10 + 21 + (char)(v10 > 44); // 0x402c6f
    bool v13 = v10 > 44 ? v12 <= v11 : v11 > 189; // 0x402c6f
    int64_t v14 = v7 & -256 | (int64_t)v12; // 0x402c6f
    __asm_out_133(-72, v12);
    char * v15 = (char *)v14; // 0x402c73
    *v15 = (char)v13 - (char)(a4 / 256) + *v15;
    int64_t v16 = v14; // 0x402c75
    if (a4 != 0) {
        int64_t v17 = __asm_int1(); // 0x402c7c
        v16 = v17 + 256 * a4 & 0xff00 | v17 & -0xff01;
    }
    int64_t v18 = v16;
    *(int32_t *)v1 = *(int32_t *)&v1 - 0x1b5ea8e1;
    int64_t v19; // 0x402c4e
    *(int32_t *)v19 = 2 * *(int32_t *)&v19;
    return (v18 + 150) % 256 | v18 & -256;
}

// Address range: 0x402d00 - 0x402d04
int64_t function_402d00(void) {
    // 0x402d00
    int64_t v1; // 0x402d00
    return function_402d67(v1, v1);
}

// Address range: 0x402d05 - 0x402d06
int64_t function_402d05(void) {
    // 0x402d05
    int64_t result; // 0x402d05
    return result;
}

// Address range: 0x402d1c - 0x402d2d
int64_t function_402d1c(int64_t a1, int64_t a2) {
    // 0x402d1c
    bool v1; // 0x402d1c
    if (!v1) {
        function_402d05();
    }
    // 0x402d1e
    float80_t v2; // 0x402d1c
    *(float32_t *)a1 = (float32_t)v2;
    return (int64_t)*(int32_t *)0x72565297496e7a72;
}

// Address range: 0x402d40 - 0x402d42
int64_t function_402d40(void) {
    // 0x402d40
    int64_t v1; // 0x402d40
    return function_402db1(v1, v1, v1, v1);
}

// Address range: 0x402d67 - 0x402d6b
int64_t function_402d67(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 + 92 & 0xffffffff); // 0x402d67
    int64_t result; // 0x402d67
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x402d6c - 0x402d6d
int64_t function_402d6c(void) {
    // 0x402d6c
    int64_t result; // 0x402d6c
    return result;
}

// Address range: 0x402d6d - 0x402d70
int64_t function_402d6d(int64_t a1) {
    // 0x402d6d
    int64_t result; // 0x402d6d
    return result;
}

// Address range: 0x402db1 - 0x402dcc
int64_t function_402db1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402db1
    int64_t v1; // 0x402db1
    __asm_out_134((int16_t)a3, (int32_t)__asm_int3() - (int32_t)v1);
    uint64_t v2 = __asm_int1(); // 0x402dbe
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x402dcd - 0x402de3
int64_t function_402dcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x402dcd
    int64_t v1; // 0x402dcd
    __asm_out(-61, (int32_t)v1);
    int64_t v2; // 0x402dcd
    bool v3; // 0x402dcd
    if (!v3 && !v3) {
        v2 = function_402d6c();
    }
    int32_t * v4 = (int32_t *)(a3 + 0x704ccde1 + 2 * v1); // 0x402dd1
    *v4 = *v4 + 38;
    return v2 + 0x3ca483f7 & 0xffffffff;
}

// Address range: 0x402ded - 0x402dee
int64_t function_402ded(void) {
    // 0x402ded
    int64_t result; // 0x402ded
    return result;
}

// Address range: 0x402e04 - 0x402e09
int64_t function_402e04(void) {
    // 0x402e04
    int64_t result; // 0x402e04
    return result;
}

// Address range: 0x402e45 - 0x402e46
int64_t function_402e45(void) {
    // 0x402e45
    int64_t result; // 0x402e45
    return result;
}

// Address range: 0x402e4f - 0x402e51
int64_t function_402e4f(void) {
    // 0x402e4f
    int64_t result; // 0x402e4f
    return result;
}

// Address range: 0x402e53 - 0x402e7e
int64_t function_402e53(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    bool v3; // 0x402e53
    if (!v3) {
        function_402ded();
    }
    int64_t v4 = __asm_wait(); // 0x402e55
    uint32_t v5 = (int32_t)a4 % 32; // 0x402e56
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)(a1 + 44); // 0x402e56
        *v6 = *v6 >> v5;
    }
    int64_t v7; // 0x402e53
    char * v8 = (char *)(v7 - 12); // 0x402e5e
    char v9 = *v8; // 0x402e5e
    *v8 = 4 * v9;
    *(char *)a1 = (char)v4;
    int64_t v10 = (v3 ? -1 : 1) + a1; // 0x402e62
    int32_t v11 = *(int32_t *)&v1; // 0x402e63
    *(int32_t *)v1 = v11 + (int32_t)v4 + (int32_t)((v9 & 64) != 0);
    char * v12 = (char *)(v1 + 53); // 0x402e65
    *v12 = 2 * *v12;
    unsigned char v13 = *(char *)(v10 - 44); // 0x402e6f
    *(char *)v10 = __asm_insb((int16_t)a3);
    char * v14 = (char *)(a5 - 52); // 0x402e73
    *v14 = (char)(v13 < (char)(v7 / 256)) - (char)a3 + *v14;
    *(int32_t *)v10 = *(int32_t *)&v2;
    return function_402e45();
}

// Address range: 0x402e7f - 0x402e84
int64_t function_402e7f(int64_t a1) {
    // 0x402e7f
    int64_t result; // 0x402e7f
    return result;
}

// Address range: 0x402e92 - 0x402e93
int64_t function_402e92(void) {
    // 0x402e92
    int64_t result; // 0x402e92
    return result;
}

// Address range: 0x402ea7 - 0x402eb7
int64_t function_402ea7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x402ea7
    int64_t v1; // 0x402ea7
    int32_t v2 = *(int32_t *)(v1 - 57); // 0x402ea7
    bool v3; // 0x402ea7
    int64_t v4 = v3 ? -1 : 1; // 0x402eb0
    int32_t v5 = __asm_insd((int16_t)a3); // 0x402eb1
    *(int32_t *)(v4 + (int64_t)((int32_t)v3 + (int32_t)a1 - v2)) = v5;
    return v1 + 0x7f80c1b & 0xffff00ff | 0x1400;
}

// Address range: 0x402ee6 - 0x402ee9
int64_t function_402ee6(int64_t a1) {
    // 0x402ee6
    int64_t result; // 0x402ee6
    return result;
}

// Address range: 0x402f05 - 0x402f07
int64_t function_402f05(void) {
    // 0x402f05
    return function_402e92();
}

// Address range: 0x402f12 - 0x402f15
int64_t function_402f12(void) {
    // 0x402f12
    int64_t result; // 0x402f12
    return result;
}

// Address range: 0x402f1a - 0x402f20
int64_t function_402f1a(int64_t a1) {
    // 0x402f1a
    int64_t v1; // 0x402f1a
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x403046 - 0x40304b
int64_t function_403046(int64_t a1, int64_t a2) {
    // 0x403046
    int64_t result; // 0x403046
    char * v1 = (char *)(a1 - 43 + 8 * result); // 0x403046
    bool v2; // 0x403046
    *v1 = *v1 + (char)result + (char)v2;
    return result;
}

// Address range: 0x403080 - 0x403083
int64_t function_403080(void) {
    // 0x403080
    int64_t result; // 0x403080
    return result;
}

// Address range: 0x4030a1 - 0x4030a2
int64_t function_4030a1(void) {
    // 0x4030a1
    int64_t result; // 0x4030a1
    return result;
}

// Address range: 0x4030da - 0x4030e7
int64_t function_4030da(int64_t a1) {
    // 0x4030da
    int64_t v1; // 0x4030da
    char * v2 = (char *)(v1 - 0x2d3ba29d); // 0x4030dc
    char v3 = (char)v1 | 31; // 0x4030dc
    *v2 = *v2 + v3;
    *(char *)a1 = v3;
    bool v4; // 0x4030da
    return function_403134((v4 ? -1 : 1) + a1, v1, v1, v1);
}

// Address range: 0x403124 - 0x403134
int64_t function_403124(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x403124
    int64_t v1; // 0x403124
    int64_t v2 = v1;
    unsigned char v3 = (char)((uint64_t)v1 / 256); // 0x40312c
    unsigned char v4 = v3 + (char)a4; // 0x40312c
    bool v5 = (int32_t)a4 < (int32_t)a2 ? v4 + (char)((int32_t)a4 < (int32_t)a2) <= v3 : v4 < v3; // 0x40312c
    return (v2 + 72 + (int64_t)v5) % 256 | v2 & -256;
}

// Address range: 0x403134 - 0x40313f
int64_t function_403134(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403134
    int64_t v1; // 0x403134
    int16_t v2 = v1; // 0x403137
    __asm_outsd(v2, (int32_t)v1);
    __asm_out_135(v2, (char)a3);
    int64_t result = __asm_sti(); // 0x403139
    char * v3 = (char *)(a1 - 67); // 0x40313c
    *v3 = *v3 + (char)v1;
    return result;
}

// Address range: 0x403150 - 0x403151
int64_t function_403150(void) {
    // 0x403150
    int64_t result; // 0x403150
    return result;
}

// Address range: 0x403168 - 0x403178
int64_t function_403168(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403168
    int64_t v1; // 0x403168
    *(int32_t *)(a2 + 95) = (int32_t)v1;
    return __asm_in_136((int16_t)a3);
}

// Address range: 0x403178 - 0x403179
int64_t function_403178(void) {
    // 0x403178
    int64_t result; // 0x403178
    return result;
}

// Address range: 0x40317e - 0x403209
int64_t function_40317e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 30); // 0x403185
    int32_t v2 = *v1 - 1; // 0x403185
    *v1 = v2;
    int64_t v3; // 0x40317e
    if (v2 == 0) {
        v3 = function_403150();
    }
    // 0x40318d
    float80_t v4; // 0x40317e
    float80_t v5 = v2 != 0 ? v4 : v4; // 0x403188
    __asm_out(19, (int32_t)v3);
    bool v6; // 0x40317e
    *(int16_t *)((a4 + a3 + (int64_t)v6) % 256 | a4 & -256) = (int16_t)v5;
    __asm_in_137((int16_t)a3);
    uint64_t v7 = *(int64_t *)0x6c74ba4e0137e4fe; // 0x403196
    char * v8 = (char *)(v7 - 24); // 0x4031a4
    unsigned char v9 = *v8; // 0x4031a4
    unsigned char v10 = (char)(v7 / 256); // 0x4031a4
    *v8 = v9 - v10;
    int64_t v11; // 0x40317e
    char v12 = v11 / 256; // 0x4031a9
    char v13 = *(char *)(v11 + 80); // 0x4031a9
    char v14 = v9 < v10; // 0x4031a9
    char v15 = v13 + v12 + v14; // 0x4031a9
    char v16 = v15 + v14; // 0x4031a9
    if (v15 < 0 == ((v16 ^ v12) & (v16 ^ v13)) < 0 == (v15 != 0)) {
        // 0x403205
        return __asm_int1();
    }
    // 0x4031b5
    *(int64_t *)v11 = (v6 ? -4 : 4) + a1;
    int64_t result = a3 & 0xffffffff; // 0x4031c0
    int32_t * v17 = (int32_t *)(result - 29); // 0x4031c3
    *v17 = *v17 & (int32_t)v11;
    return result;
}

// Address range: 0x403258 - 0x40325d
int64_t function_403258(void) {
    // 0x403258
    return function_d575aba();
}

// Address range: 0x403286 - 0x403289
int64_t function_403286(void) {
    // 0x403286
    int64_t result; // 0x403286
    return result;
}
