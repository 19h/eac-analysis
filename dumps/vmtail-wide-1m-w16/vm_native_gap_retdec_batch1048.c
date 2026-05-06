/*
 * Targeted RetDec C for native executable gap queue batch 1048.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2a2119-0x2a2319 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a2519-0x2a2719 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a2719-0x2a2919 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a2919-0x2a2b19 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a2c19-0x2a2d19 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a2d19-0x2a2f19 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a2f19-0x2a3119 rank=- name=- kind=- bytes=- uncovered=-
 *   0x35658a-0x35668a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35678a-0x35688a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35688a-0x356a8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x356a8a-0x356c8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x356c8a-0x356e8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x356e8a-0x35708a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37816a-0x37836a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37876a-0x37896a rank=- name=- kind=- bytes=- uncovered=-
 *   0x378b6a-0x378d6a rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_110931e1();
int64_t function_1672744();
int64_t function_2a2119(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2a21b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a2227(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2a2284(int64_t a1);
int64_t function_2a228d(void);
int64_t function_2a22c0(void);
int64_t function_2a22cc(void);
int64_t function_2a2300(int64_t a1);
int64_t function_2a2302(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a2519(void);
int64_t function_2a251c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a2546(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a254e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a2577(void);
int64_t function_2a257d(int64_t a1);
int64_t function_2a25cf(void);
int64_t function_2a25db(int64_t a1);
int64_t function_2a2605(void);
int64_t function_2a2627(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a2667(void);
int64_t function_2a26db(void);
int64_t function_2a26f4(void);
int64_t function_2a273b(void);
int64_t function_2a27de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a28bf(void);
int64_t function_2a2916(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a2933(void);
int64_t function_2a2946(int64_t a1);
int64_t function_2a29e2(void);
int64_t function_2a2a9f(void);
int64_t function_2a2ac6(void);
int64_t function_2a2afc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a2b12(void);
int64_t function_2a2c19(int64_t a1, int64_t a2);
int64_t function_2a2c7a(void);
int64_t function_2a2ca2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a2cbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a2d42(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a2e1e(void);
int64_t function_2a2e3e(void);
int64_t function_2a2e67(int64_t a1);
int64_t function_2a2eac(void);
int64_t function_2a2ed1(void);
int64_t function_2a2ed6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a2f0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a2fce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a3018(void);
int64_t function_2a3022(void);
int64_t function_2a3049(void);
int64_t function_2a3069(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a30b9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_35658a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_356612(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35678a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3567e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3567f1(void);
int64_t function_356834(void);
int64_t function_356855(int64_t a1, int64_t a2);
int64_t function_356864(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3568b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3568c6(void);
int64_t function_3568cd(void);
int64_t function_3568f1(void);
int64_t function_356907(void);
int64_t function_356909(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_356912(int64_t a1);
int64_t function_356947(void);
int64_t function_35695a(int64_t a1);
int64_t function_356966(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_356a36(void);
int64_t function_356a61(void);
int64_t function_356a69(int64_t a1);
int64_t function_356a8e(void);
int64_t function_356a93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_356bf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_356c2b(int64_t a1);
int64_t function_356c96(void);
int64_t function_356cb3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_356cd1(void);
int64_t function_356cd6(void);
int64_t function_356cec(void);
int64_t function_356d08(int64_t a1);
int64_t function_356d0c(void);
int64_t function_356d40(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_356e40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_356e7d(void);
int64_t function_356f03(void);
int64_t function_356f28(void);
int64_t function_356f82(void);
int64_t function_356fa0(int64_t a1, int64_t a2);
int64_t function_356fa4(void);
int64_t function_356ff3(int64_t a1);
int64_t function_357007(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35706b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37816a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3782d1(void);
int64_t function_37833c(void);
int64_t function_378340(void);
int64_t function_378360(void);
int64_t function_378364(void);
int64_t function_37876a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3787e2(void);
int64_t function_3787e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3787e7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_378819(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3788bc(int64_t a1);
int64_t function_3788cc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_37894b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_378b6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_378bbd(void);
int64_t function_378c08(void);
int64_t function_378c1d(int64_t a1);
int64_t function_378c5f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_378c71(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_378c8e(void);
int64_t function_378cb7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_378d2f(void);
int64_t function_378d36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3cb1315e();
int64_t function_3d357011();
int64_t function_450e7776();
int64_t function_518b6b34();
int64_t function_5bcf4b4c();
int64_t function_cdc60();
int64_t function_fcfc12b();
int64_t function_ffffffff82207f31();
int64_t function_ffffffff95713248();
int64_t function_ffffffffa0cef57f();
int64_t function_ffffffffb037c231();
int64_t function_ffffffffde0a2b10();
int64_t unknown_11099a6c();
int64_t unknown_1f7f6de2();
int64_t unknown_245efa6b();
int64_t unknown_246f368c();
int64_t unknown_28763e44();
int64_t unknown_29127ef9();
int64_t unknown_38e77183();
int64_t unknown_3a5064c5();
int64_t unknown_3d39737f();
int64_t unknown_3e578b55();
int64_t unknown_45a78959();
int64_t unknown_538c566();
int64_t unknown_5ca51bad();
int64_t unknown_68d19f77();
int64_t unknown_68fd9c24();
int64_t unknown_78178470();
int64_t unknown_7a38dffb();
int64_t unknown_c645124();
int64_t unknown_ffffffff85400aa0();
int64_t unknown_ffffffff882ca72f();
int64_t unknown_ffffffffa8383270();
int64_t unknown_ffffffffb0611c79();
int64_t unknown_ffffffffb4392211();
int64_t unknown_ffffffffb4727819();
int64_t unknown_ffffffffb6346f6d();
int64_t unknown_fffffffffaeb5eba();

// Address range: 0x2a2119 - 0x2a21ab
int64_t function_2a2119(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2a2119
    int64_t result2; // 0x2a2119
    bool v1; // 0x2a2119
    if (v1) {
        int64_t result = unknown_68fd9c24(); // 0x2a211e
        char * v2 = (char *)(result + 0x22623234); // 0x2a2123
        *v2 = *v2 + (char)a3;
        *(char *)0x38214c32 = *(char *)0x38214c32 + (char)(result2 / 256);
        return result;
    }
    // 0x2a2162
    if (a4 == 1 | (*(char *)(result2 + 0x681143) | (char)result2) == 0) {
        // 0x2a216a
        return result2;
    }
    // 0x2a2193
    __asm_outsd((int16_t)a3, (int32_t)result2);
    return 0;
}

// Address range: 0x2a21b2 - 0x2a21c4
int64_t function_2a21b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a21b2
    int64_t result; // 0x2a21b2
    *(int32_t *)a2 = 2 * (int32_t)result;
    *(char *)-0x61cdff3e = *(char *)-0x61cdff3e + (char)(result / 256);
    return result;
}

// Address range: 0x2a2227 - 0x2a223e
int64_t function_2a2227(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2a2227
    int64_t v1; // 0x2a2227
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)a1; // 0x2a2235
    *v3 = (int32_t)v1 + (int32_t)a3;
    *v3 = *(int32_t *)0x3d4ee800;
    return (a4 / 256 + 239 + v2) % 256 | v2 & 0xffffff00;
}

// Address range: 0x2a2284 - 0x2a2285
int64_t function_2a2284(int64_t a1) {
    // 0x2a2284
    int64_t result; // 0x2a2284
    return result;
}

// Address range: 0x2a228d - 0x2a22a2
int64_t function_2a228d(void) {
    // 0x2a228d
    int64_t v1; // 0x2a228d
    int64_t result = v1;
    *(char *)0x17bfe7013d00336e = (char)result;
    *(int32_t *)result = (int32_t)(result & v1);
    return result;
}

// Address range: 0x2a22c0 - 0x2a22c3
int64_t function_2a22c0(void) {
    // 0x2a22c0
    int64_t v1; // 0x2a22c0
    return function_2a2300(v1);
}

// Address range: 0x2a22cc - 0x2a22cd
int64_t function_2a22cc(void) {
    // 0x2a22cc
    int64_t result; // 0x2a22cc
    return result;
}

// Address range: 0x2a2300 - 0x2a2301
int64_t function_2a2300(int64_t a1) {
    // 0x2a2300
    int64_t result; // 0x2a2300
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x2a2302 - 0x2a2309
int64_t function_2a2302(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a2302
    bool v1; // 0x2a2302
    if (true == !v1) {
        // 0x2a234a
        int64_t result; // 0x2a2302
        return result;
    }
    // 0x2a2304
    return a3 & 0xffffffff;
}

// Address range: 0x2a2519 - 0x2a251a
int64_t function_2a2519(void) {
    // 0x2a2519
    int64_t result; // 0x2a2519
    return result;
}

// Address range: 0x2a251c - 0x2a253a
int64_t function_2a251c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x2a251c
    *(int32_t *)(a2 - 0x426d7daa) = (int32_t)v2;
    int64_t result = (int64_t)&v1; // 0x2a2522
    bool v3; // 0x2a251c
    if (!v3) {
        // 0x2a254d
        return result;
    }
    // 0x2a2525
    v1 = 0x100000000 * (v1 + v2) >> 32;
    int32_t * v4 = (int32_t *)(a3 + 0x3d00e53d); // 0x2a2527
    *v4 = *v4 + (int32_t)v2;
    int32_t * v5 = (int32_t *)(a1 - 0x61f18490); // 0x2a252d
    *v5 = *v5 + (int32_t)v2;
    return result;
}

// Address range: 0x2a2546 - 0x2a254d
int64_t function_2a2546(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a2546
    int64_t result; // 0x2a2546
    return result;
}

// Address range: 0x2a254e - 0x2a2568
int64_t function_2a254e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    uint32_t v2 = (int32_t)a4 % 32; // 0x2a255e
    int32_t result; // 0x2a254e
    if (v2 == 0) {
        // 0x2a254e
        result = a2;
    } else {
        int64_t v3; // 0x2a254e
        int32_t * v4 = (int32_t *)(v3 + 0x609fe83a); // 0x2a255e
        *v4 = *v4 >> v2;
        result = *(int32_t *)&v1;
    }
    return result;
}

// Address range: 0x2a2577 - 0x2a2579
int64_t function_2a2577(void) {
    // 0x2a2577
    int64_t result; // 0x2a2577
    return result;
}

// Address range: 0x2a257d - 0x2a2581
int64_t function_2a257d(int64_t a1) {
    // 0x2a257d
    int64_t result; // 0x2a257d
    return result;
}

// Address range: 0x2a25cf - 0x2a25d0
int64_t function_2a25cf(void) {
    // 0x2a25cf
    int64_t result; // 0x2a25cf
    return result;
}

// Address range: 0x2a25db - 0x2a25dc
int64_t function_2a25db(int64_t a1) {
    // 0x2a25db
    int64_t result; // 0x2a25db
    return result;
}

// Address range: 0x2a2605 - 0x2a2607
int64_t function_2a2605(void) {
    // 0x2a2605
    return function_2a25cf();
}

// Address range: 0x2a2627 - 0x2a2666
int64_t function_2a2627(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t result; // 0x2a2627
    int32_t v2 = result;
    *(int32_t *)result = 2 * v2;
    if (((v2 + 0x784840ff ^ v2) & (v2 ^ -0x80000000)) >= 0) {
        // 0x2a263b
        return result;
    }
    // 0x2a2652
    *(int32_t *)v1 = *(int32_t *)&v1 - (int32_t)result;
    int32_t v3 = *(int32_t *)(a1 + 0x3d002761); // 0x2a265e
    int32_t * v4 = (int32_t *)(int64_t)((int32_t)a1 - v3); // 0x2a2664
    *v4 = *v4 + (int32_t)a3;
    return result;
}

// Address range: 0x2a2667 - 0x2a266a
int64_t function_2a2667(void) {
    // 0x2a2667
    int64_t result; // 0x2a2667
    return result;
}

// Address range: 0x2a26db - 0x2a26dc
int64_t function_2a26db(void) {
    // 0x2a26db
    int64_t result; // 0x2a26db
    return result;
}

// Address range: 0x2a26f4 - 0x2a26f9
int64_t function_2a26f4(void) {
    // 0x2a26f4
    int64_t v1; // 0x2a26f4
    int32_t * v2 = (int32_t *)(v1 + 24); // 0x2a26f4
    *v2 = *v2 + (int32_t)v1;
    return function_2a26db();
}

// Address range: 0x2a273b - 0x2a2740
int64_t function_2a273b(void) {
    // 0x2a273b
    return function_1672744();
}

// Address range: 0x2a27de - 0x2a28b4
int64_t function_2a27de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    char v2 = __asm_insb((int16_t)a3); // 0x2a27de
    char * v3 = (char *)a1; // 0x2a27de
    *v3 = v2;
    int64_t v4; // 0x2a27de
    uint32_t v5 = *(int32_t *)(a2 - 0x69e99f47) | (int32_t)v4; // 0x2a285f
    int64_t v6 = unknown_245efa6b(); // 0x2a2865
    int32_t * v7 = (int32_t *)(int64_t)v5; // 0x2a286a
    int32_t v8 = *v7 + (int32_t)v6; // 0x2a286a
    *v7 = v8;
    *(int32_t *)a1 = __asm_insd((int16_t)v1);
    if (v8 < 1) {
        // 0x2a28ab
        return (a4 + 106) % 256 | a4 & 0xffffff00;
    }
    int64_t v9 = unknown_38e77183(); // 0x2a287d
    char * v10 = (char *)(v1 + 85); // 0x2a2882
    *v10 = *v10 + (char)(v5 / 256);
    *v3 = (char)v9;
    bool v11; // 0x2a27de
    int64_t result = unknown_246f368c((v11 ? -1 : 1) + a1); // 0x2a2886
    *(char *)v1 = *(char *)&v1 + (char)v5;
    return result;
}

// Address range: 0x2a28bf - 0x2a28c2
int64_t function_2a28bf(void) {
    // 0x2a28bf
    int64_t result; // 0x2a28bf
    return result;
}

// Address range: 0x2a2916 - 0x2a2928
int64_t function_2a2916(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 100); // 0x2a2916
    *v1 = *v1 + (int32_t)a4;
    int64_t v2 = unknown_c645124(); // 0x2a291b
    char * v3 = (char *)v2; // 0x2a2920
    *v3 = *v3 - (char)v2;
    return function_ffffffffde0a2b10();
}

// Address range: 0x2a2933 - 0x2a2938
int64_t function_2a2933(void) {
    // 0x2a2933
    return function_ffffffffb037c231();
}

// Address range: 0x2a2946 - 0x2a2947
int64_t function_2a2946(int64_t a1) {
    // 0x2a2946
    int64_t result; // 0x2a2946
    return result;
}

// Address range: 0x2a29e2 - 0x2a29e5
int64_t function_2a29e2(void) {
    // 0x2a29e2
    int64_t result; // 0x2a29e2
    return result;
}

// Address range: 0x2a2a9f - 0x2a2aa2
int64_t function_2a2a9f(void) {
    // 0x2a2a9f
    int64_t result; // 0x2a2a9f
    return result;
}

// Address range: 0x2a2ac6 - 0x2a2ac7
int64_t function_2a2ac6(void) {
    // 0x2a2ac6
    int64_t result; // 0x2a2ac6
    return result;
}

// Address range: 0x2a2afc - 0x2a2b11
int64_t function_2a2afc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a2afc
    int64_t result; // 0x2a2afc
    *(int32_t *)0x65b82ef52c00013d = (int32_t)result;
    bool v1; // 0x2a2afc
    *(char *)a4 = (char)result - (char)(result / 256) + (char)v1;
    return result;
}

// Address range: 0x2a2b12 - 0x2a2b15
int64_t function_2a2b12(void) {
    // 0x2a2b12
    int64_t result; // 0x2a2b12
    return result;
}

// Address range: 0x2a2c19 - 0x2a2c1d
int64_t function_2a2c19(int64_t a1, int64_t a2) {
    // 0x2a2c19
    return __asm_in(27);
}

// Address range: 0x2a2c7a - 0x2a2c7b
int64_t function_2a2c7a(void) {
    // 0x2a2c7a
    int64_t result; // 0x2a2c7a
    return result;
}

// Address range: 0x2a2ca2 - 0x2a2cb7
int64_t function_2a2ca2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a2ca2
    int64_t result; // 0x2a2ca2
    bool v1; // 0x2a2ca2
    if (a4 != 1 && !v1) {
        result = function_2a2c7a();
    }
    int32_t * v2 = (int32_t *)(a5 + 8); // 0x2a2cab
    *v2 = *v2 - 1;
    return result;
}

// Address range: 0x2a2cbb - 0x2a2d41
int64_t function_2a2cbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x2a2cbb
    __asm_out((int16_t)a3, (char)v2);
    int32_t v3 = __asm_int1(a1, a2); // 0x2a2cc4
    *(int32_t *)a1 = v3;
    bool v4; // 0x2a2cbb
    int64_t v5 = (v4 ? -4 : 4) + a1; // 0x2a2cc4
    int64_t result; // 0x2a2cbb
    int64_t v6 = (int64_t)(v3 + (int32_t)v4 - *(int32_t *)&result); // 0x2a2cc5
    result = v6;
    if ((a4 & 0x97a42c46) != 0) {
        int32_t * v7 = (int32_t *)(v5 - 8); // 0x2a2d35
        *v7 = *v7 + 0x6fb4f4ef;
        int64_t v8 = result;
        int32_t v9 = v8; // 0x2a2d38
        __asm_out_133(-102, v9);
        __asm_out_134(0x2c46, v9);
        return (v8 + 214) % 256 | v8 & -256;
    }
    // 0x2a2cd5
    *(int32_t *)v5 = *(int32_t *)&v1;
    char * v10 = (char *)result; // 0x2a2ce5
    *v10 = *v10 + (char)result;
    char * v11 = (char *)(result + 0x3d000002); // 0x2a2ce7
    *v11 = *v11 + *(char *)(v6 + 9);
    int32_t * v12 = (int32_t *)result; // 0x2a2ced
    *v12 = *v12 + (int32_t)result;
    return result;
}

// Address range: 0x2a2d42 - 0x2a2e12
int64_t function_2a2d42(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (a4 & -0xff01 | (int64_t)&g1) - 1; // 0x2a2d45
    bool v2; // 0x2a2d42
    if (v1 == 0 || v2) {
        // 0x2a2d48
        int64_t result; // 0x2a2d42
        return result;
    }
    int16_t v3 = a3; // 0x2a2d4c
    __asm_outsb(v3, (char)a2);
    int64_t v4; // 0x2a2d42
    *(char *)0x300c5454 = *(char *)0x300c5454 + (char)(v4 / 256);
    uint32_t v5 = *(int32_t *)(a1 + 92) + (int32_t)v4 | *(int32_t *)(a1 - 59); // 0x2a2d5a
    int64_t v6 = __asm_int1(a1, a2) & 0xffffffff; // 0x2a2d5f
    *(char *)a1 = __asm_insb(v3);
    *(int32_t *)(v6 - 0x297508e6) = v5;
    int32_t * v7 = (int32_t *)((a2 + 0xe8a7f2f & 0xffffff04 | 57) + 0x3aaabc2c); // 0x2a2dae
    uint32_t v8 = *v7; // 0x2a2dae
    int32_t v9 = v8 + v5; // 0x2a2dae
    *v7 = v9;
    int64_t result2 = __asm_hlt(); // 0x2a2db4
    if (v9 >= v8) {
        // 0x2a2d48
        return result2;
    }
    uint32_t v10 = (int32_t)v1 % 32; // 0x2a2db7
    bool v11 = ((v9 ^ v8) & (v9 ^ v5)) < 0; // 0x2a2db7
    if (v10 != 0) {
        int32_t * v12 = (int32_t *)result2; // 0x2a2db7
        uint32_t v13 = *v12; // 0x2a2db7
        int32_t v14 = v13 >> 32 - v10 | v13 << v10; // 0x2a2db7
        *v12 = v14;
        v11 = v10 == 1 ? v14 % 2 != (int32_t)(v14 < 0) : ((v9 ^ v8) & (v9 ^ v5)) < 0;
    }
    int64_t v15 = v5; // 0x2a2d5a
    int64_t v16 = v15 - 8; // 0x2a2db9
    *(int64_t *)v16 = result2;
    uint32_t result3 = *(int32_t *)v6; // 0x2a2dba
    *(int64_t *)(v15 - 16) = v16;
    if (v9 < 0 != v11) {
        // 0x2a2dbe
        return 4 * v4 + v1 & 0xffffffff;
    }
    // 0x2a2e09
    __asm_out_135(-80, (char)result3);
    return result3;
}

// Address range: 0x2a2e1e - 0x2a2e1f
int64_t function_2a2e1e(void) {
    // 0x2a2e1e
    int64_t result; // 0x2a2e1e
    return result;
}

// Address range: 0x2a2e3e - 0x2a2e48
int64_t function_2a2e3e(void) {
    // 0x2a2e3e
    int64_t v1; // 0x2a2e3e
    int32_t * v2 = (int32_t *)(v1 - 0x1abf3743); // 0x2a2e3e
    uint32_t v3 = *v2; // 0x2a2e3e
    uint32_t v4 = v3 + (int32_t)v1; // 0x2a2e3e
    *v2 = v4;
    int64_t result; // 0x2a2e3e
    if (v4 >= v3) {
        result = function_2a2e1e();
    }
    // 0x2a2e46
    return result;
}

// Address range: 0x2a2e67 - 0x2a2e6b
int64_t function_2a2e67(int64_t a1) {
    // 0x2a2e67
    int64_t result; // 0x2a2e67
    return result;
}

// Address range: 0x2a2eac - 0x2a2ead
int64_t function_2a2eac(void) {
    // 0x2a2eac
    int64_t result; // 0x2a2eac
    return result;
}

// Address range: 0x2a2ed1 - 0x2a2ed6
int64_t function_2a2ed1(void) {
    // 0x2a2ed1
    return function_ffffffffa0cef57f();
}

// Address range: 0x2a2ed6 - 0x2a2ef8
int64_t function_2a2ed6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a2ed6
    int64_t v1; // 0x2a2ed6
    uint64_t v2 = v1;
    bool v3; // 0x2a2ed6
    if (a4 != 1 && !v3) {
        function_2a2eac();
    }
    int64_t v4 = v3 ? 0xffffffff : 1; // 0x2a2edb
    int64_t v5 = unknown_1f7f6de2(); // 0x2a2edc
    int32_t v6 = *(int32_t *)(v2 + 0x691116ed); // 0x2a2ee1
    *(char *)0x6b1f58ee = *(char *)0x6b1f58ee + (char)(v2 / 256);
    char v7 = *(char *)(int64_t)((int32_t)(v4 + a2) - v6); // 0x2a2eef
    __asm_outsb((int16_t)(v2 ^ a3), v7);
    return v5 & 0xcbde01e9 | 0x3421fe16;
}

// Address range: 0x2a2f0c - 0x2a2f3b
int64_t function_2a2f0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a2f0c
    int64_t v1; // 0x2a2f0c
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a3 + 0x3e5fe3cf); // 0x2a2f1c
    uint32_t v4 = *v3; // 0x2a2f1c
    uint32_t v5 = v4 + (int32_t)a4; // 0x2a2f1c
    uint32_t v6 = v5 + (int32_t)((v2 & 0x7650e6b0) < 0x3709c601); // 0x2a2f1c
    *v3 = v6;
    if (v6 == 0) {
        // 0x2a2f25
        return unknown_ffffffff882ca72f();
    }
    char * v7 = (char *)(v1 + 71); // 0x2a2f34
    *v7 = *v7 + ((v2 & 0x7650e6b0) < 0x3709c601 ? v6 <= v4 : v5 < v4 ? 49 : 48);
    return v2 & 0x7650e600 | (int64_t)*(char *)((v2 & 176) + v1);
}

// Address range: 0x2a2fce - 0x2a2fd3
int64_t function_2a2fce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a2fce
    int64_t result; // 0x2a2fce
    return result;
}

// Address range: 0x2a3018 - 0x2a3019
int64_t function_2a3018(void) {
    // 0x2a3018
    int64_t result; // 0x2a3018
    return result;
}

// Address range: 0x2a3022 - 0x2a3024
int64_t function_2a3022(void) {
    // 0x2a3022
    return function_2a3018();
}

// Address range: 0x2a3049 - 0x2a304a
int64_t function_2a3049(void) {
    // 0x2a3049
    int64_t result; // 0x2a3049
    return result;
}

// Address range: 0x2a3069 - 0x2a3085
int64_t function_2a3069(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a3069
    int64_t v1; // 0x2a3069
    uint64_t v2 = v1;
    unsigned char v3 = *(char *)0x210069de013d0400; // 0x2a306d
    char v4 = *(char *)(a4 - 0x42f29df3); // 0x2a3076
    int64_t result = v2 & -0x10000 | (int64_t)v3 | 256 * (int64_t)((char)(v2 / 256) - v4); // 0x2a3082
    if ((*(int32_t *)(v1 + 0x62e46193) ^ (int32_t)a1) >= 0) {
        result = function_2a3049();
    }
    // 0x2a3084
    return result;
}

// Address range: 0x2a30b9 - 0x2a30f6
int64_t function_2a30b9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2a30b9
    int64_t v1; // 0x2a30b9
    int64_t v2 = v1;
    uint64_t v3 = v1;
    int64_t v4 = a5;
    *(int32_t *)v2 = (int32_t)v2;
    int16_t v5 = a3; // 0x2a30c1
    __asm_out(v5, (char)v3);
    *(int32_t *)v3 = 2 * (int32_t)v3;
    unsigned char v6 = (char)(v3 / 256); // 0x2a30c4
    unsigned char v7 = v6 + (char)(a4 / 256); // 0x2a30c4
    int64_t v8 = 256 * (int64_t)v7 | v3 & -0xff01; // 0x2a30c4
    int64_t v9; // 0x2a30b9
    int32_t v10 = *(int32_t *)&v9; // 0x2a30ca
    *(int32_t *)a2 = ((int32_t)(v7 < v6) | (int32_t)(int64_t)&v4) + v10;
    char * v11 = (char *)(v8 + 2 * a3); // 0x2a30cc
    *v11 = *v11 ^ (char)v2;
    int64_t v12; // 0x2a30b9
    *(int32_t *)a4 = *(int32_t *)&v12 & 0x39ef864a;
    __asm_out_134(v5, (int32_t)v8);
    int64_t v13 = v8 & 0xffffffff; // 0x2a30e2
    __asm_outsd(v5, *(int32_t *)&v9);
    *(char *)v13 = (char)v4;
    bool v14; // 0x2a30b9
    return function_3cb1315e(v13 + (v14 ? -1 : 1));
}

// Address range: 0x35658a - 0x356592
int64_t function_35658a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35658a
    int64_t v1; // 0x35658a
    int32_t * v2 = (int32_t *)(v1 - 0x62e42b0b); // 0x35658a
    *v2 = *v2 + (int32_t)a3;
    int64_t result; // 0x35658a
    *(int32_t *)result = *(int32_t *)&result + (int32_t)a1;
    return result;
}

// Address range: 0x356612 - 0x35664d
int64_t function_356612(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(9 * a4); // 0x356617
    uint32_t v3 = *v2; // 0x356617
    int32_t v4 = a4; // 0x356617
    uint32_t v5 = v3 + v4; // 0x356617
    *v2 = v5;
    int64_t result; // 0x356612
    if (v5 < v3) {
        // 0x35661c
        return result ^ 240;
    }
    if (v4 + (int32_t)a1 < 1) {
        // 0x3566c5
        return result;
    }
    // 0x35664a
    *(char *)v1 = *(char *)&v1 + (char)result;
    return result;
}

// Address range: 0x35678a - 0x356798
int64_t function_35678a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35678a
    int64_t v1; // 0x35678a
    *(char *)a3 = 2 * (char)v1;
    return v1 & 0x25485c8e;
}

// Address range: 0x3567e9 - 0x3567ee
int64_t function_3567e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3567e9
    return __asm_in(104);
}

// Address range: 0x3567f1 - 0x3567f8
int64_t function_3567f1(void) {
    // 0x3567f1
    int64_t v1; // 0x3567f1
    int64_t v2 = 2 * v1; // 0x3567f1
    int64_t result = v2 & 0xffffffff; // 0x3567f1
    int32_t * v3 = (int32_t *)result; // 0x3567f3
    *v3 = *v3 + (int32_t)v2;
    return result;
}

// Address range: 0x356834 - 0x356839
int64_t function_356834(void) {
    // 0x356834
    return function_110931e1();
}

// Address range: 0x356855 - 0x356864
int64_t function_356855(int64_t a1, int64_t a2) {
    // 0x356855
    int64_t result; // 0x356855
    return result;
}

// Address range: 0x356864 - 0x35686c
int64_t function_356864(int64_t a1, int64_t a2, int64_t a3) {
    // 0x356864
    int64_t v1; // 0x356864
    *(char *)(a1 + 53 + a3) = (char)v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return v1 | 256 * a3 & 0xff00;
}

// Address range: 0x3568b0 - 0x3568b6
int64_t function_3568b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3568b0
    *(char *)a4 = -123;
    return function_356912(a5);
}

// Address range: 0x3568c6 - 0x3568cb
int64_t function_3568c6(void) {
    // 0x3568c6
    return function_ffffffff95713248();
}

// Address range: 0x3568cd - 0x3568cf
int64_t function_3568cd(void) {
    // 0x3568cd
    int64_t v1; // 0x3568cd
    return __asm_sti(v1, v1, v1, v1, v1, v1);
}

// Address range: 0x3568f1 - 0x3568f2
int64_t function_3568f1(void) {
    // 0x3568f1
    int64_t result; // 0x3568f1
    return result;
}

// Address range: 0x356907 - 0x356909
int64_t function_356907(void) {
    // 0x356907
    int64_t result; // 0x356907
    return result;
}

// Address range: 0x356909 - 0x35690f
int64_t function_356909(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = __asm_sti(a1, a2, a3, a4, a5, a6); // 0x35690b
    int64_t v1; // 0x356909
    *(int32_t *)a5 = (int32_t)v1 + (int32_t)a6;
    return result;
}

// Address range: 0x356912 - 0x35691d
int64_t function_356912(int64_t a1) {
    int64_t v1 = unknown_ffffffffb4727819(); // 0x356913
    unsigned char v2 = (char)v1; // 0x356918
    bool v3; // 0x356912
    unsigned char v4 = v3 ? 22 : 21; // 0x356918
    int64_t v5; // 0x356912
    return v5 + (int64_t)(v3 | v4 > v2) + (v1 & 0xffffff00 | (int64_t)(v2 - v4)) & 0xffffffff;
}

// Address range: 0x356947 - 0x35694c
int64_t function_356947(void) {
    // 0x356947
    return function_518b6b34();
}

// Address range: 0x35695a - 0x35695b
int64_t function_35695a(int64_t a1) {
    // 0x35695a
    int64_t result; // 0x35695a
    return result;
}

// Address range: 0x356966 - 0x356a01
int64_t function_356966(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x356966
    int64_t v1; // 0x356966
    int64_t v2 = v1;
    int64_t v3 = a4 - 1; // 0x35696c
    char * v4 = (char *)(a4 - 0x70fa15f); // 0x35696e
    *v4 = *v4 + (char)(v1 / 256);
    char * v5 = (char *)(a2 + 0x1e81d34); // 0x356974
    *v5 = *v5 | (char)(v1 / 256);
    int32_t * v6 = (int32_t *)(v1 + 0xad33ddd); // 0x35697a
    int32_t v7 = a6; // 0x35697a
    *v6 = *v6 & v7;
    char * v8 = (char *)v3; // 0x356982
    int64_t v9; // 0x356966
    *v8 = *v8 | (char)v9;
    int64_t v10 = 256 * v9 + v3 & 0xff00 | v3 & -0xff01; // 0x356984
    int32_t * v11 = (int32_t *)(v9 - 72); // 0x356986
    *v11 = *v11 + (int32_t)v10;
    int64_t v12 = v9;
    *(char *)v12 = *(char *)&v9 - (char)v12;
    char * v13 = (char *)v10; // 0x356991
    *v13 = *v13 | (char)v9;
    int64_t v14 = -0x3737fe18; // bp-8, 0x356993
    int32_t v15 = (int32_t)v9 ^ 0x2fe7bcbc; // 0x356998
    int64_t result = v15; // 0x356998
    v9 = result;
    if (v15 < 1) {
        // 0x3569fa
        return result;
    }
    int32_t * v16 = (int32_t *)(v1 - 22); // 0x3569a6
    *v16 = *v16 + (int32_t)(int64_t)&v14;
    int32_t * v17 = (int32_t *)(v1 - 12); // 0x3569a9
    *v17 = *v17 + v7;
    char v18 = __asm_in_136(22); // 0x3569ad
    int32_t * v19 = (int32_t *)(v2 - 0x76fe17ea + 8 * v2); // 0x3569b0
    *v19 = *v19 ^ (int32_t)(v9 & 0xffffff00 | (int64_t)v18);
    char * v20 = (char *)(a2 - 18); // 0x3569b7
    *v20 = *v20 + 1;
    return v10 & 0xffffffff;
}

// Address range: 0x356a36 - 0x356a44
int64_t function_356a36(void) {
    // 0x356a36
    int64_t v1; // 0x356a36
    unsigned char v2 = (char)v1;
    *(char *)v1 = v2 / 128 | 2 * v2;
    int64_t result = __asm_int3(); // 0x356a38
    *(char *)-0x71ff4c106cfe17e0 = (char)result;
    return result;
}

// Address range: 0x356a61 - 0x356a62
int64_t function_356a61(void) {
    // 0x356a61
    int64_t result; // 0x356a61
    return result;
}

// Address range: 0x356a69 - 0x356a6c
int64_t function_356a69(int64_t a1) {
    // 0x356a69
    int64_t result; // 0x356a69
    return result;
}

// Address range: 0x356a8e - 0x356a8f
int64_t function_356a8e(void) {
    // 0x356a8e
    int64_t result; // 0x356a8e
    return result;
}

// Address range: 0x356a93 - 0x356bef
int64_t function_356a93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x356a93
    bool v1; // 0x356a93
    bool v2 = v1;
    int64_t v3; // 0x356a93
    uint32_t v4 = (int32_t)v3; // 0x356a93
    uint32_t v5 = v4 + (int32_t)a2; // 0x356a93
    bool v6 = v2 ? v5 + (int32_t)v2 <= v4 : v5 < v4; // 0x356a93
    int32_t v7; // 0x356a93
    *(int32_t *)(a4 + 52) = (int32_t)(int64_t)&v7;
    uint64_t v8 = unknown_ffffffff85400aa0(); // 0x356a9a
    char * v9 = (char *)v8; // 0x356a9f
    *v9 = *v9 + (char)v6 - (char)(v8 / 256);
    int64_t result = 0x299f00; // bp-8, 0x356aa1
    int64_t v10; // 0x356a93
    v10 = (int64_t)(*(int32_t *)&v10 | (int32_t)a3);
    char * v11 = (char *)(2 * a1 - 67 + (int64_t)&result); // 0x356ab4
    unsigned char v12 = *v11; // 0x356ab4
    unsigned char v13 = v12 + (((int32_t)v8 & -24) > 0x555fb5f4 ? 4 : 3); // 0x356ab4
    *v11 = v13;
    if (v13 != 0) {
        function_356a61();
    }
    char v14 = ((int32_t)v8 & -24) > 0x555fb5f4 ? v13 <= v12 : v12 > 252 ? 45 : 44; // 0x356abb
    *(char *)-0xec9583e = *(char *)-0xec9583e + v14;
    return result;
}

// Address range: 0x356bf1 - 0x356bfb
int64_t function_356bf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x356bf1
    int64_t v1; // 0x356bf1
    *(int32_t *)a4 = (int32_t)v1 | 98;
    int32_t * v2 = (int32_t *)(a1 + 40); // 0x356bf7
    *v2 = *v2 + (int32_t)v1;
    return v1 & -34;
}

// Address range: 0x356c2b - 0x356c2e
int64_t function_356c2b(int64_t a1) {
    // 0x356c2b
    int64_t result; // 0x356c2b
    return result;
}

// Address range: 0x356c96 - 0x356c99
int64_t function_356c96(void) {
    // 0x356c96
    int64_t result; // 0x356c96
    return result;
}

// Address range: 0x356cb3 - 0x356cc5
int64_t function_356cb3(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 0x17ba9404); // 0x356cb3
    int64_t result; // 0x356cb3
    *v1 = *v1 + (char)result;
    *(char *)-0x569113bc588d8063 = (char)result;
    return result;
}

// Address range: 0x356cd1 - 0x356cd6
int64_t function_356cd1(void) {
    // 0x356cd1
    return function_450e7776();
}

// Address range: 0x356cd6 - 0x356cd8
int64_t function_356cd6(void) {
    // 0x356cd6
    int64_t v1; // 0x356cd6
    return function_356d40(v1, v1, v1, v1, v1, v1, (int64_t)&g3);
}

// Address range: 0x356cec - 0x356cef
int64_t function_356cec(void) {
    // 0x356cec
    int64_t result; // 0x356cec
    return result;
}

// Address range: 0x356d08 - 0x356d09
int64_t function_356d08(int64_t a1) {
    // 0x356d08
    int64_t result; // 0x356d08
    return result;
}

// Address range: 0x356d0c - 0x356d0d
int64_t function_356d0c(void) {
    // 0x356d0c
    int64_t result; // 0x356d0c
    return result;
}

// Address range: 0x356d40 - 0x356dd3
int64_t function_356d40(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    bool v2; // 0x356d40
    if (v2) {
        // 0x356d5e
        return unknown_ffffffffb6346f6d();
    }
    // 0x356d95
    int64_t v3; // 0x356d40
    *(int32_t *)v3 = 0x570e944;
    unsigned char v4 = *(char *)0x2bf58778c401e82d; // 0x356d9c
    int32_t v5 = *(int32_t *)&v1; // 0x356da5
    *(int32_t *)v1 = v5 - (int32_t)(v3 & 0xffffff00 | (int64_t)v4);
    unknown_5ca51bad();
    char * v6 = (char *)(a1 - 0x642fc55e); // 0x356dae
    unsigned char v7 = *v6; // 0x356dae
    unsigned char v8 = v7 + (char)(a4 / 256); // 0x356dae
    *v6 = v8;
    unknown_fffffffffaeb5eba();
    int64_t result = unknown_3a5064c5(); // 0x356dbe
    int64_t v9; // 0x356d40
    if ((char)(v8 < v7) + (char)v3 > (char)(int64_t)&v9) {
        // 0x356d5a
        return result;
    }
    // 0x356dc6
    *(int32_t *)-0x4e3ac5fe1714b354 = (int32_t)result;
    return result;
}

// Address range: 0x356e40 - 0x356e44
int64_t function_356e40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x356e40
    int64_t result; // 0x356e40
    int32_t * v1 = (int32_t *)(result - 100); // 0x356e40
    *v1 = *v1 + (int32_t)a2;
    return result;
}

// Address range: 0x356e7d - 0x356e80
int64_t function_356e7d(void) {
    // 0x356e7d
    int64_t result; // 0x356e7d
    return result;
}

// Address range: 0x356f03 - 0x356f04
int64_t function_356f03(void) {
    // 0x356f03
    int64_t result; // 0x356f03
    return result;
}

// Address range: 0x356f28 - 0x356f2d
int64_t function_356f28(void) {
    // 0x356f28
    return function_5bcf4b4c();
}

// Address range: 0x356f82 - 0x356f88
int64_t function_356f82(void) {
    // 0x356f82
    return function_ffffffff82207f31();
}

// Address range: 0x356fa0 - 0x356fa4
int64_t function_356fa0(int64_t a1, int64_t a2) {
    // 0x356fa0
    return (int64_t)*(int32_t *)(a1 - 53);
}

// Address range: 0x356fa4 - 0x356fa9
int64_t function_356fa4(void) {
    // 0x356fa4
    return function_3d357011();
}

// Address range: 0x356ff3 - 0x356fff
int64_t function_356ff3(int64_t a1) {
    int64_t result = unknown_29127ef9(a1); // 0x356ff3
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x357007 - 0x357014
int64_t function_357007(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x357007
    return unknown_ffffffffb4392211();
}

// Address range: 0x35706b - 0x35706d
int64_t function_35706b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35706b
    int64_t result; // 0x35706b
    return result;
}

// Address range: 0x37816a - 0x3782a8
int64_t function_37816a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x37816a
    return function_cdc60(a1);
}

// Address range: 0x3782d1 - 0x3782d4
int64_t function_3782d1(void) {
    // 0x3782d1
    int64_t result; // 0x3782d1
    return result;
}

// Address range: 0x37833c - 0x37833f
int64_t function_37833c(void) {
    // 0x37833c
    int64_t result; // 0x37833c
    return result;
}

// Address range: 0x378340 - 0x378343
int64_t function_378340(void) {
    // 0x378340
    int64_t result; // 0x378340
    return result;
}

// Address range: 0x378360 - 0x378363
int64_t function_378360(void) {
    // 0x378360
    int64_t result; // 0x378360
    return result;
}

// Address range: 0x378364 - 0x378367
int64_t function_378364(void) {
    // 0x378364
    int64_t result; // 0x378364
    return result;
}

// Address range: 0x37876a - 0x378799
int64_t function_37876a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37876a
    unknown_ffffffffa8383270();
    char * v1 = (char *)(a4 + 0x9d86600); // 0x37876f
    int64_t v2; // 0x37876a
    *v1 = *v1 + (char)v2;
    int32_t * v3 = (int32_t *)(a4 + 0x3a10aff5); // 0x37877c
    int32_t v4 = *v3; // 0x37876f
    int64_t v5 = a3; // 0x37876f
    v4 += (int32_t)a1;
    *v3 = v4;
    unsigned char v6 = (char)v5; // 0x378782
    unsigned char v7 = *(char *)(v2 + 0x3dbe5c6a); // 0x378782
    unsigned char v8 = v6 - v7; // 0x378782
    v5 = v5 & -256 | (int64_t)v8;
    while (v7 > v6 || v8 == 0) {
        // 0x378775
        v4 += (int32_t)a1;
        *v3 = v4;
        v6 = (char)v5;
        v7 = *(char *)(v2 + 0x3dbe5c6a);
        v8 = v6 - v7;
        v5 = v5 & -256 | (int64_t)v8;
    }
    // 0x37878d
    int64_t v9; // 0x37876a
    *(int32_t *)v9 = *(int32_t *)&v9 + (int32_t)v5;
    return v2 & 0xffffffff;
}

// Address range: 0x3787e2 - 0x3787e4
int64_t function_3787e2(void) {
    // 0x3787e2
    int64_t v1; // 0x3787e2
    return function_3787e7(v1, v1, v1, v1);
}

// Address range: 0x3787e5 - 0x3787e7
int64_t function_3787e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3787e5
    int64_t result; // 0x3787e5
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x3787e7 - 0x378817
int64_t function_3787e7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3787e7
    __asm_out_134((int16_t)a3, (int32_t)__asm_int1(a1, a2));
    __asm_wait();
    int64_t v1; // 0x3787e7
    char v2 = *(char *)((v1 + 0xa88b1ed & 0xffffffff) - 98); // 0x3787f2
    unknown_7a38dffb();
    int64_t v3 = __asm_int1(a1, a2); // 0x3787fa
    *(char *)-0x17be1d00 = v2 | (char)(a3 / 256);
    int64_t v4 = v3 + 0x5401e812; // 0x378802
    *(char *)0x7f8cf5d27740107 = (char)v4;
    int32_t * v5 = (int32_t *)(a4 - 23); // 0x378814
    *v5 = *v5 + (int32_t)v1;
    return v4 & 0xffffffff;
}

// Address range: 0x378819 - 0x378885
int64_t function_378819(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    uint32_t v2 = (int32_t)a3;
    int64_t v3; // 0x378819
    uint32_t v4 = (int32_t)v3 + v2; // 0x378819
    *(int32_t *)a3 = v4;
    int64_t v5 = __asm_sti((int64_t)&g3, (int64_t)&g3, (int64_t)&g3, (int64_t)&g3, (int64_t)&g3, (int64_t)&g3); // 0x37881c
    int64_t v6 = 4 * v3; // 0x37881d
    char v7 = *(char *)(v6 + a1); // 0x37881d
    if ((v5 & 0xc23d494a) != 0) {
        unsigned char v8 = *(char *)-0xffcc5f7e8e5de74; // 0x378833
        __asm_out_133(-124, (int32_t)(v5 & 0xc23d4900 | (int64_t)v8));
        unknown_28763e44();
    }
    unsigned char v9 = (char)(v4 < v2) + (char)(v3 / 256) + v7; // 0x37881d
    char * v10 = (char *)(a5 + 0x1227fd79 + v6); // 0x378848
    unsigned char v11 = *v10; // 0x378848
    unsigned char v12 = v11 + v9; // 0x378848
    *v10 = v12;
    int64_t v13 = unknown_3e578b55(); // 0x37884f
    char * v14 = (char *)(v1 + 65); // 0x378854
    unsigned char v15 = *v14; // 0x378854
    char v16 = v1;
    unsigned char v17 = v16 % 32; // 0x378854
    char v18 = v16; // 0x378854
    if (v17 != 0) {
        *v14 = (char)(v12 < v11) << v17 - 1 | v15 << v17 | (char)((int16_t)v15 >> (int16_t)(9 - v17));
        v18 = *(char *)&v1;
    }
    // 0x378843
    bool v19; // 0x378819
    int64_t v20 = v19 ? -4 : 4; // 0x378826
    int64_t v21 = v20 + a1; // 0x378826
    int64_t v22 = v20 + a2; // 0x378826
    *(char *)v1 = v18 | (char)v13;
    unknown_538c566();
    unknown_11099a6c();
    *(char *)v21 = *(char *)v22;
    int64_t v23 = v19 ? -1 : 1; // 0x378871
    int64_t result = unknown_ffffffffb0611c79(v21 + v23, v22 + v23, a3 & -256 | 85); // 0x378873
    int64_t v24; // 0x378819
    *(int64_t *)(((256 * (int64_t)v9 | v3 & 0xffff00ff) + (int64_t)&v24 & 0xffffffff) - 8) = 0x13d0000;
    return result;
}

// Address range: 0x3788bc - 0x3788bd
int64_t function_3788bc(int64_t a1) {
    // 0x3788bc
    int64_t result; // 0x3788bc
    return result;
}

// Address range: 0x3788cc - 0x378949
int64_t function_3788cc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3788cc
    int64_t v1; // 0x3788cc
    int64_t v2 = v1;
    bool v3; // 0x3788cc
    if (!v3) {
        // 0x3788cf
        return v2 & -0xff01 | a4 & 0xff00;
    }
    int64_t v4 = (v2 & 0xff00) + v1 & 0xff00 | v2 & -0xff01; // 0x3788ea
    uint32_t v5 = (int32_t)v4; // 0x3788ed
    uint32_t v6 = v5 + 1 + *(int32_t *)v4; // 0x3788ed
    if (v6 > v5) {
        // 0x3788f1
        *(char *)-0x180e7e07 = *(char *)-0x180e7e07 + (char)v1;
        uint64_t result = __asm_wait(); // 0x3788f8
        *(char *)a1 = (char)(result / 256) + (char)a1;
        return result;
    }
    int64_t v7 = v3 ? -4 : 4; // 0x378909
    int64_t v8 = v7 + a1; // 0x378909
    int64_t v9 = v7 + a2; // 0x378909
    char * v10 = (char *)(a3 + 0x3d01eeba); // 0x37890a
    *v10 = *v10 - ((int32_t)a2 < (int32_t)a1 ? 2 : 1);
    *(int32_t *)v8 = *(int32_t *)v9;
    int64_t v11 = v8 + v7; // 0x378911
    char * v12 = (char *)(int64_t)v6; // 0x378912
    char v13 = v6; // 0x378912
    *v12 = *v12 + v13;
    char * v14 = (char *)v11; // 0x378914
    *v14 = *v14 + (char)(a4 / 256);
    *v12 = *v12 + v13;
    char v15 = v1 / 256; // 0x378918
    *(char *)0x3bd9ab1f = *(char *)0x3bd9ab1f + v15;
    int32_t * v16 = (int32_t *)(v1 - 0x4cffecff + v11); // 0x37891e
    *v16 = *v16 ^ -0x4e8be400;
    int64_t v17 = __asm_int1(v11, v9 + v7); // 0x378929
    int64_t v18; // bp+16, 0x3788cc
    char * v19 = (char *)(8 * v1 + (int64_t)&v18); // 0x37892b
    *v19 = *v19 | (char)a4;
    uint64_t v20 = v17 + 250; // 0x378936
    int64_t result2 = v20 % 256 | v17 & -256; // 0x378936
    *(int32_t *)a5 = (int32_t)result2;
    char * v21 = (char *)result2; // 0x378939
    char v22 = v20; // 0x378939
    *v21 = *v21 + v22;
    char * v23 = (char *)(v7 + a5); // 0x37893b
    *v23 = *v23 + v15;
    unsigned char v24 = *v21; // 0x37893d
    unsigned char v25 = v24 + v22; // 0x37893d
    *v21 = v25;
    char * v26 = (char *)(a4 + 1); // 0x37893f
    *v26 = *v26 - 33 + (char)(v25 < v24);
    return result2;
}

// Address range: 0x37894b - 0x378968
int64_t function_37894b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x37894b
    int64_t v1; // 0x37894b
    int64_t v2 = v1;
    bool v3; // 0x37894b
    int32_t * v4 = (int32_t *)((v2 & -256 | v2 + 30 + (int64_t)v3 & 32 | 223) - 1); // 0x378950
    *v4 = *v4 + (int32_t)a1;
    return unknown_45a78959();
}

// Address range: 0x378b6a - 0x378b88
int64_t function_378b6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x378b6a
    int64_t v1; // 0x378b6a
    int64_t v2 = v1;
    unknown_78178470();
    *(char *)v2 = (char)v2 + 1;
    bool v3; // 0x378b6a
    *(char *)((v3 ? -4 : 4) + a1) = __asm_insb((int16_t)a3);
    int64_t v4 = unknown_3d39737f(); // 0x378b79
    uint64_t v5 = v4 + 24; // 0x378b80
    int64_t v6 = v4 & -256; // 0x378b80
    int64_t v7 = v5 % 256 | v6; // 0x378b80
    int32_t * v8 = (int32_t *)(v7 + 61); // 0x378b82
    uint32_t v9 = *v8; // 0x378b82
    uint32_t v10 = v9 + (int32_t)v7; // 0x378b82
    *v8 = v10;
    return (v5 + (int64_t)(v10 < v9)) % 256 | v6;
}

// Address range: 0x378bbd - 0x378bc0
int64_t function_378bbd(void) {
    // 0x378bbd
    int64_t result; // 0x378bbd
    return result;
}

// Address range: 0x378c08 - 0x378c0b
int64_t function_378c08(void) {
    // 0x378c08
    int64_t result; // 0x378c08
    return result;
}

// Address range: 0x378c1d - 0x378c20
int64_t function_378c1d(int64_t a1) {
    // 0x378c1d
    int64_t result; // 0x378c1d
    return result;
}

// Address range: 0x378c5f - 0x378c6c
int64_t function_378c5f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x378c5f
    int64_t v1; // 0x378c5f
    __asm_outsb((int16_t)a3, (char)v1);
    return function_fcfc12b();
}

// Address range: 0x378c71 - 0x378c8c
int64_t function_378c71(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_68d19f77(); // 0x378c71
    unsigned char v2 = (char)v1; // 0x378c76
    unsigned char v3 = 2 * v2; // 0x378c76
    int32_t v4 = *(int32_t *)(a3 + 0x3d592100); // 0x378c78
    int32_t * v5 = (int32_t *)(a1 - 54); // 0x378c7e
    int64_t v6; // 0x378c71
    *v5 = *v5 + (int32_t)v6;
    int32_t * v7 = (int32_t *)(v6 + 28); // 0x378c83
    *v7 = v4 + (int32_t)a4 + (int32_t)(v3 < v2) + *v7;
    int64_t v8; // 0x378c71
    *(char *)a3 = *(char *)&v8 | (char)a3;
    return v1 & -256 | (int64_t)(v3 ^ -69);
}

// Address range: 0x378c8e - 0x378c90
int64_t function_378c8e(void) {
    // 0x378c8e
    int64_t result; // 0x378c8e
    return result;
}

// Address range: 0x378cb7 - 0x378cc0
int64_t function_378cb7(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x8056088); // 0x378cb7
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x378cb7
    return result;
}

// Address range: 0x378d2f - 0x378d30
int64_t function_378d2f(void) {
    // 0x378d2f
    int64_t result; // 0x378d2f
    return result;
}

// Address range: 0x378d36 - 0x378d57
int64_t function_378d36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 - 121); // 0x378d3d
    int64_t v2; // 0x378d36
    *v1 = ((char)((int32_t)(v2 ^ v2) / 256) | -81) + *v1;
    return a4 & 0xffffffff;
}
