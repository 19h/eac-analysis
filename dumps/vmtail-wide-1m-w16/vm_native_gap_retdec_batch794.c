/*
 * Targeted RetDec C for native executable gap queue batch 794.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x29151f-0x29171f rank=- name=- kind=- bytes=- uncovered=-
 *   0x29171f-0x29191f rank=- name=- kind=- bytes=- uncovered=-
 *   0x29191f-0x291b1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x291b1f-0x291d1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x418840-0x418a40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x418a40-0x418c40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x418c40-0x418e40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x418e40-0x419040 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
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

int64_t function_2901ee4b();
int64_t function_29151f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_291635(void);
int64_t function_29163a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2916d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29174c(int64_t a1);
int64_t function_291770(void);
int64_t function_291785(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29185c(int64_t a1, int64_t a2);
int64_t function_291885(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2918e1(void);
int64_t function_29199e(int64_t a1);
int64_t function_2919af(int64_t a1);
int64_t function_2919cb(void);
int64_t function_291a1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_291ab7(void);
int64_t function_291b04(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_291b26(void);
int64_t function_291b66(int64_t a1);
int64_t function_291bd9(int64_t a1);
int64_t function_291c34(void);
int64_t function_291c4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_291cc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_291cfa(void);
int64_t function_2fbf8e94();
int64_t function_418840(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4188aa(void);
int64_t function_418956(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4189b9(int64_t a1);
int64_t function_4189ec(void);
int64_t function_4189f6(void);
int64_t function_418a64(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_418af4(void);
int64_t function_418afd(int64_t a1);
int64_t function_418b54(int64_t a1);
int64_t function_418b95(void);
int64_t function_418bf0(int64_t a1);
int64_t function_418c42(void);
int64_t function_418c72(int64_t a1);
int64_t function_418c7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_418c9a(int64_t a1);
int64_t function_418cbe(void);
int64_t function_418cc5(void);
int64_t function_418ccc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_418d2c(void);
int64_t function_418d38(int64_t a1, int64_t a2, int64_t a3);
int64_t function_418d97(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_418db7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_418e02(void);
int64_t function_418e32(int64_t a1);
int64_t function_418e38(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_418e6e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_418ecc(int64_t a1);
int64_t function_418ef5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_418f46(void);
int64_t function_418f5d(void);
int64_t function_418fb4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_419038(int64_t a1);
int64_t function_cc59c();
int64_t function_ffffffff97919281();
int64_t function_ffffffffdd5ca1b8();
int64_t unknown_17b25ed4();
int64_t unknown_645be3b8();
int64_t unknown_ffffffff82af5bde();
int64_t unknown_ffffffffa1a650e7();
int64_t unknown_ffffffffb82a55d2();
int64_t unknown_ffffffffcba0c3a9();
int64_t unknown_ffffffffeb2b1ec5();

// Address range: 0x29151f - 0x291635
int64_t function_29151f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x29151f
    return function_cc59c();
}

// Address range: 0x291635 - 0x29163a
int64_t function_291635(void) {
    // 0x291635
    int64_t result; // 0x291635
    return result;
}

// Address range: 0x29163a - 0x29165a
int64_t function_29163a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x29163a
    int64_t v1; // 0x29163a
    int64_t v2 = v1;
    *(int32_t *)v2 = *(int32_t *)(int32_t *)&g3 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(v1 + 0x75004000); // 0x29163f
    *v3 = *v3 + (int32_t)v1;
    *(int32_t *)0x759f9f08714d0099 = (int32_t)((v2 + a4 / 256) % 256 | v2 & 0xffffff00);
    *(char *)a1 = __asm_insb(-0x6dd3);
    return 0x1e8922d;
}

// Address range: 0x2916d6 - 0x2916f8
int64_t function_2916d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x2916d6
    *(int32_t *)a3 = (int32_t)(v2 ^ a4);
    int64_t v3 = unknown_ffffffff82af5bde(); // 0x2916d8
    *(char *)v1 = *(char *)&v1 | (char)v3;
    int32_t * v4 = (int32_t *)(a4 - 0x6eb5700c); // 0x2916e6
    *v4 = *v4 + (int32_t)v2;
    char * v5 = (char *)(v2 + 61); // 0x2916ec
    *v5 = *v5 + (char)(v2 / 256);
    return v3 + v2 & 0xffffffff;
}

// Address range: 0x29174c - 0x29174f
int64_t function_29174c(int64_t a1) {
    // 0x29174c
    int64_t v1; // 0x29174c
    int64_t v2 = v1;
    return (v2 + 127) % 256 | v2 & -256;
}

// Address range: 0x291770 - 0x291778
int64_t function_291770(void) {
    // 0x291770
    int64_t result; // 0x291770
    return result;
}

// Address range: 0x291785 - 0x2917a6
int64_t function_291785(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x291785
    int64_t v1; // 0x291785
    int64_t v2 = a4 + 0xb81a0870 + v1; // 0x29178d
    *(int32_t *)0x3d79e400477b321f = (int32_t)v2;
    int32_t * v3 = (int32_t *)(a3 - 88); // 0x29179b
    *v3 = *v3 + (int32_t)v1;
    int64_t v4; // 0x291785
    unsigned char v5 = *(char *)&v4; // 0x2917a0
    *(char *)a4 = v5 / 2 | 128 * v5;
    *(int32_t *)a1 = *(int32_t *)(v2 & 0xffffffff);
    return a2 & 0xffffffff;
}

// Address range: 0x29185c - 0x291865
int64_t function_29185c(int64_t a1, int64_t a2) {
    // 0x29185c
    unknown_ffffffffb82a55d2(a1, a2);
    return a1 & 0xffffffff;
}

// Address range: 0x291885 - 0x29188c
int64_t function_291885(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x291885
    int64_t result; // 0x291885
    return result;
}

// Address range: 0x2918e1 - 0x2918e4
int64_t function_2918e1(void) {
    // 0x2918e1
    int64_t result; // 0x2918e1
    return result;
}

// Address range: 0x29199e - 0x29199f
int64_t function_29199e(int64_t a1) {
    // 0x29199e
    int64_t result; // 0x29199e
    return result;
}

// Address range: 0x2919af - 0x2919b0
int64_t function_2919af(int64_t a1) {
    // 0x2919af
    int64_t result; // 0x2919af
    return result;
}

// Address range: 0x2919cb - 0x2919cd
int64_t function_2919cb(void) {
    // 0x2919cb
    int64_t result; // 0x2919cb
    return result;
}

// Address range: 0x291a1a - 0x291aaa
int64_t function_291a1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x291a1a
    int64_t v1; // 0x291a1a
    int32_t * v2 = (int32_t *)(v1 - 69); // 0x291a1a
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x291a1a
    *(int32_t *)a1 = *(int32_t *)&v3;
    v3 = a5;
    if (a4 != 1) {
        // 0x291a8f
        return 0x149f2b53;
    }
    uint64_t v4 = v1 & 0xf3ecfe17 | 0xc1301e8; // 0x291a20
    int64_t v5; // 0x291a1a
    char v6 = *(char *)&v5; // 0x291a27
    return 256 * (int64_t)(v6 + (char)(v4 / 256)) | v4 & 0xffff00ff;
}

// Address range: 0x291ab7 - 0x291ab8
int64_t function_291ab7(void) {
    // 0x291ab7
    int64_t result; // 0x291ab7
    return result;
}

// Address range: 0x291b04 - 0x291b10
int64_t function_291b04(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x291b04
    return function_291ab7();
}

// Address range: 0x291b26 - 0x291b29
int64_t function_291b26(void) {
    // 0x291b26
    int64_t result; // 0x291b26
    return result;
}

// Address range: 0x291b66 - 0x291b67
int64_t function_291b66(int64_t a1) {
    // 0x291b66
    int64_t result; // 0x291b66
    return result;
}

// Address range: 0x291bd9 - 0x291be7
int64_t function_291bd9(int64_t a1) {
    // 0x291bd9
    return unknown_ffffffffa1a650e7(a1);
}

// Address range: 0x291c34 - 0x291c35
int64_t function_291c34(void) {
    // 0x291c34
    int64_t result; // 0x291c34
    return result;
}

// Address range: 0x291c4f - 0x291cc6
int64_t function_291c4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a3 - 0x75ae8656); // 0x291c4f
    int64_t v2; // 0x291c4f
    bool v3; // 0x291c4f
    *v1 = (int32_t)v3 + (int32_t)v2 + *v1;
    int64_t v4; // 0x291c4f
    *(int32_t *)v4 = *(int32_t *)&v4 + (int32_t)v2;
    uint64_t v5 = unknown_ffffffffcba0c3a9(); // 0x291ca3
    char * v6 = (char *)(a4 & -256 | 235); // 0x291ca8
    char v7 = *v6 + (char)(v5 / 256); // 0x291ca8
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x291ca8
    *v6 = v7;
    *(int32_t *)a1 = (int32_t)v5;
    if (v8 % 2 == 0) {
        function_291c34();
    }
    // 0x291caf
    __asm_wait();
    __asm_out((int16_t)a3, (int32_t)unknown_645be3b8());
    return unknown_ffffffffeb2b1ec5();
}

// Address range: 0x291cc8 - 0x291ced
int64_t function_291cc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x291cc8
    return unknown_17b25ed4() & -0xff01 | (int64_t)&g2;
}

// Address range: 0x291cfa - 0x291cfc
int64_t function_291cfa(void) {
    // 0x291cfa
    int64_t result; // 0x291cfa
    return result;
}

// Address range: 0x418840 - 0x41884d
int64_t function_418840(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x418840
    int64_t v1; // 0x418840
    uint64_t v2 = v1;
    char * v3 = (char *)(a2 - 99); // 0x418840
    unsigned char v4 = *v3; // 0x418840
    unsigned char v5 = v4 + (char)(v2 / 256); // 0x418840
    *v3 = v5;
    return (v2 + 181 + (int64_t)(v5 < v4)) % 256 | v2 & -256;
}

// Address range: 0x4188aa - 0x4188ab
int64_t function_4188aa(void) {
    // 0x4188aa
    int64_t result; // 0x4188aa
    return result;
}

// Address range: 0x418956 - 0x41895e
int64_t function_418956(int64_t a1, int64_t a2, int64_t a3) {
    // 0x418956
    int64_t v1; // 0x418956
    *(char *)(a3 - 44) = (char)v1;
    return function_2901ee4b();
}

// Address range: 0x4189b9 - 0x4189ba
int64_t function_4189b9(int64_t a1) {
    // 0x4189b9
    int64_t result; // 0x4189b9
    return result;
}

// Address range: 0x4189ec - 0x4189ed
int64_t function_4189ec(void) {
    // 0x4189ec
    int64_t result; // 0x4189ec
    return result;
}

// Address range: 0x4189f6 - 0x4189ff
int64_t function_4189f6(void) {
    // 0x4189f6
    int64_t v1; // 0x4189f6
    bool v2; // 0x4189f6
    return v1 - (v2 ? 0x1ead425 : 0x1ead424) & 0xffffffff;
}

// Address range: 0x418a64 - 0x418ae0
int64_t function_418a64(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x418a64
    int64_t v1; // 0x418a64
    bool v2; // 0x418a64
    char v3 = (char)v1 - (v2 ? 57 : 56); // 0x418a64
    int64_t result = v1 & -256 | (int64_t)v3; // 0x418a64
    *(char *)a1 = __asm_insb((int16_t)a3);
    if (v3 == 0) {
        // 0x418a6d
        return result;
    }
    int64_t v4 = a4 - 1; // 0x418a69
    int64_t v5 = result; // 0x418a69
    if (v4 != 0) {
        v5 = function_4189ec();
    }
    int64_t result2 = v5; // 0x418a6b
    if (v3 >= 0) {
        // 0x418ace
        *(int64_t *)0x53550c95 = a5;
        uint64_t v6 = (v5 & 0xffffffff) * (a1 & 0xffffffff); // 0x418ad4
        int32_t v7 = *(int32_t *)(a1 - 102); // 0x418ad6
        char * v8 = (char *)((int64_t)((int32_t)(v6 / 0x100000000) - v7) + 97); // 0x418ad9
        *v8 = *v8 ^ (char)v4;
        result2 = v6 & 0xffffffff;
    }
    // 0x418a6d
    return result2;
}

// Address range: 0x418af4 - 0x418af5
int64_t function_418af4(void) {
    // 0x418af4
    int64_t result; // 0x418af4
    return result;
}

// Address range: 0x418afd - 0x418b1b
int64_t function_418afd(int64_t a1) {
    // 0x418afd
    int64_t v1; // 0x418afd
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x418afd
    int64_t v3 = 35 * v2; // 0x418afd
    int64_t v4 = v3 & 0xffffffff; // 0x418afd
    int32_t * v5 = (int32_t *)(a1 + 104 & 0xffffffff); // 0x418b06
    *v5 = *v5 + (int32_t)v1 + (int32_t)(v3 != 0x2300000000 * v2 >> 32);
    char * v6 = (char *)(a1 + 65); // 0x418b0a
    int64_t result; // 0x418afd
    char v7 = *v6 | (char)result; // 0x418b0a
    *v6 = v7;
    *(int64_t *)v4 = -106;
    if (v7 < 1) {
        result = function_418af4();
    }
    int64_t v8 = v4 - 8; // 0x418b11
    *(int64_t *)v8 = -0x74eec4bf;
    *(int32_t *)result = *(int32_t *)&result | (int32_t)v8;
    return result;
}

// Address range: 0x418b54 - 0x418b5a
int64_t function_418b54(int64_t a1) {
    // 0x418b54
    int64_t v1; // 0x418b54
    *(char *)a1 = (char)v1;
    bool v2; // 0x418b54
    return function_2fbf8e94((v2 ? -1 : 1) + a1);
}

// Address range: 0x418b95 - 0x418b9a
int64_t function_418b95(void) {
    // 0x418b95
    return function_ffffffff97919281();
}

// Address range: 0x418bf0 - 0x418bf3
int64_t function_418bf0(int64_t a1) {
    // 0x418bf0
    int64_t result; // 0x418bf0
    return result;
}

// Address range: 0x418c42 - 0x418c45
int64_t function_418c42(void) {
    // 0x418c42
    int64_t result; // 0x418c42
    return result;
}

// Address range: 0x418c72 - 0x418c78
int64_t function_418c72(int64_t a1) {
    // 0x418c72
    int64_t v1; // 0x418c72
    uint64_t result = v1;
    char * v2 = (char *)(result - 15); // 0x418c72
    *v2 = *v2 | (char)(result / 256);
    return result;
}

// Address range: 0x418c7c - 0x418c87
int64_t function_418c7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x418c7c
    int64_t result; // 0x418c7c
    *(char *)(result + 17 + result) = (char)a4;
    return result;
}

// Address range: 0x418c9a - 0x418c9b
int64_t function_418c9a(int64_t a1) {
    // 0x418c9a
    int64_t result; // 0x418c9a
    return result;
}

// Address range: 0x418cbe - 0x418cbf
int64_t function_418cbe(void) {
    // 0x418cbe
    int64_t result; // 0x418cbe
    return result;
}

// Address range: 0x418cc5 - 0x418cc8
int64_t function_418cc5(void) {
    // 0x418cc5
    int64_t result; // 0x418cc5
    return result;
}

// Address range: 0x418ccc - 0x418d29
int64_t function_418ccc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int64_t v2 = a6;
    int16_t v3 = a3; // 0x418ccd
    *(int32_t *)a1 = __asm_insd(v3);
    unsigned char v4 = __asm_in(v3); // 0x418cd6
    int64_t v5; // 0x418ccc
    uint32_t v6 = *(int32_t *)&v5 ^ (int32_t)a3; // 0x418cd9
    v5 = v6;
    if (v6 == 0) {
        int32_t v7 = *(int32_t *)0x1a7cfb27; // 0x418ce6
        *(int32_t *)0x1a7cfb27 = v7 - (int32_t)(int64_t)&v2;
        __asm_out_133(-1241, (char)v2);
        return v2 & 0xf0ce300f | 0xf31cff0;
    }
    int32_t v8 = __asm_in_134((int16_t)v6); // 0x418d22
    int32_t v9 = *(int32_t *)&v1 & v6; // 0x418d23
    *(int32_t *)v1 = v9;
    int64_t result = v8; // 0x418d25
    if (v9 != 0) {
        result = function_418cbe();
    }
    char * v10 = (char *)((256 * (int64_t)v4 | -0xff01) & a4); // 0x418d27
    *v10 = *v10 + (char)result;
    return result;
}

// Address range: 0x418d2c - 0x418d31
int64_t function_418d2c(void) {
    // 0x418d2c
    return function_ffffffffdd5ca1b8();
}

// Address range: 0x418d38 - 0x418d3d
int64_t function_418d38(int64_t a1, int64_t a2, int64_t a3) {
    // 0x418d38
    float80_t v1; // 0x418d38
    *(float32_t *)a2 = (float32_t)v1;
    int64_t result; // 0x418d38
    return result;
}

// Address range: 0x418d97 - 0x418d9c
int64_t function_418d97(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x418d97
    int64_t result; // 0x418d97
    *(int32_t *)a2 = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0x418db7 - 0x418db9
int64_t function_418db7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x418db7
    int64_t result; // 0x418db7
    return result;
}

// Address range: 0x418e02 - 0x418e04
int64_t function_418e02(void) {
    // 0x418e02
    int64_t v1; // 0x418e02
    return function_418e38(v1, v1, v1, v1);
}

// Address range: 0x418e32 - 0x418e33
int64_t function_418e32(int64_t a1) {
    // 0x418e32
    int64_t result; // 0x418e32
    return result;
}

// Address range: 0x418e38 - 0x418e42
int64_t function_418e38(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_int1(); // 0x418e3a
    __asm_int(-72);
    return result;
}

// Address range: 0x418e6e - 0x418e72
int64_t function_418e6e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x418e6e
    int64_t result; // 0x418e6e
    *(char *)(result - 11) = (char)(a4 / 256);
    return result;
}

// Address range: 0x418ecc - 0x418ecd
int64_t function_418ecc(int64_t a1) {
    // 0x418ecc
    int64_t result; // 0x418ecc
    return result;
}

// Address range: 0x418ef5 - 0x418f43
int64_t function_418ef5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x418ef5
    *(char *)-0x14b4ecaa = (char)(a3 / 256);
    int64_t result; // 0x418ef5
    return result;
}

// Address range: 0x418f46 - 0x418f47
int64_t function_418f46(void) {
    // 0x418f46
    int64_t result; // 0x418f46
    return result;
}

// Address range: 0x418f5d - 0x418f61
int64_t function_418f5d(void) {
    // 0x418f5d
    int64_t v1; // 0x418f5d
    return (int64_t)&v1;
}

// Address range: 0x418fb4 - 0x418fc8
int64_t function_418fb4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x418fb4
    int64_t v1; // 0x418fb4
    unsigned char v2 = (char)v1;
    unsigned char v3 = (char)v1 + v2; // 0x418fb8
    *(char *)a2 = v3;
    uint32_t v4 = 0x10000 * (int32_t)v1 >> 16; // 0x418fba
    char * v5 = (char *)(v1 - 84); // 0x418fbb
    *v5 = *v5 - (char)v1 + (char)(v3 < v2);
    int64_t v6; // 0x418fb4
    uint32_t v7 = *(int32_t *)&v6; // 0x418fc0
    uint32_t v8 = v7 + v4; // 0x418fc0
    *(int32_t *)a3 = v8;
    int64_t result = v4; // 0x418fc2
    if (v8 < v7 || v8 == 0) {
        result = function_418f46();
    }
    // 0x418fc5
    return result;
}

// Address range: 0x419038 - 0x41903b
int64_t function_419038(int64_t a1) {
    // 0x419038
    int64_t result; // 0x419038
    return result;
}
