/*
 * Targeted RetDec C for native executable gap queue batch 919.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3c2bdd-0x3c2ddd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c2edd-0x3c2fdd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c2fdd-0x3c31dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c31dd-0x3c33dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x428d17-0x428f17 rank=- name=- kind=- bytes=- uncovered=-
 *   0x428f17-0x429017 rank=- name=- kind=- bytes=- uncovered=-
 *   0x429117-0x429217 rank=- name=- kind=- bytes=- uncovered=-
 *   0x429317-0x429517 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
extern int g6;
extern int g7;
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

int64_t function_2244975();
int64_t function_224ebf3();
int64_t function_307e216d();
int64_t function_3c2bdd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c2c29(void);
int64_t function_3c2c41(void);
int64_t function_3c2c4a(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3c2ccd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c2ce1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c2d4b(int64_t a1);
int64_t function_3c2d57(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3c2dbf(int64_t a1);
int64_t function_3c2edd(int64_t a1);
int64_t function_3c2f09(int64_t a1);
int64_t function_3c2f46(int64_t a1);
int64_t function_3c2f4a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c2fb9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c2fd0(void);
int64_t function_3c2fd2(void);
int64_t function_3c2fe8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3c3075(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c30c3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3c30f3(void);
int64_t function_3c30f9(void);
int64_t function_3c310d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c3153(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c318c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t result);
int64_t function_3c31a1(int64_t a1);
int64_t function_3c31b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c321e(int64_t a1);
int64_t function_3c3235(void);
int64_t function_3c32e9(int64_t a1);
int64_t function_3c32f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c3341(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c334f(void);
int64_t function_3c3363(int64_t a1);
int64_t function_3c33ad(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3c33c7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_428cc9();
int64_t function_428d17(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_428d38(void);
int64_t function_428d64(int64_t a1, int64_t a2, int64_t a3);
int64_t function_428db7(void);
int64_t function_428dd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_428e39(void);
int64_t function_428e56(void);
int64_t function_428e78(void);
int64_t function_428ea5(void);
int64_t function_428ed9(void);
int64_t function_428ef5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_428f32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_428f6a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_429004(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_429117(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_429317(void);
int64_t function_429359(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4293aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_ffffffff981a2662();
int64_t unknown_139c9751();
int64_t unknown_3d3e1469();
int64_t unknown_48f25a0b();
int64_t unknown_4b89bb07();
int64_t unknown_5a4ceb60();
int64_t unknown_6ce5096c();
int64_t unknown_7cb1d072();
int64_t unknown_ffffffff8659abbf();
int64_t unknown_ffffffff88bc1df1();
int64_t unknown_ffffffff8adeff90();
int64_t unknown_ffffffff8bead3fb();
int64_t unknown_ffffffff9524f5a8();
int64_t unknown_ffffffff9539ec03();
int64_t unknown_ffffffffad81a619();
int64_t unknown_ffffffffb4916d69();
int64_t unknown_ffffffffba37ffa4();
int64_t unknown_ffffffffc42e909f();
int64_t unknown_ffffffffded74fb0();
int64_t unknown_ffffffffecc88c7a();
int64_t unknown_ffffffffef8f015c();

// Address range: 0x3c2bdd - 0x3c2c26
int64_t function_3c2bdd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x3c2bdd
    int32_t * v3 = (int32_t *)(v2 + 0xa5013d); // 0x3c2bdf
    int32_t v4 = *v3; // 0x3c2bdf
    *v3 = 2 * v4 | (int32_t)(v4 < 0);
    int64_t v5; // 0x3c2bdd
    int64_t v6 = v5;
    *(char *)v6 = *(char *)&v5 + (char)v6;
    int32_t v7 = *(int32_t *)&v5; // 0x3c2be7
    __asm_rcl(v7);
    int64_t v8 = v5;
    *(char *)v8 = (char)v8 + (char)v7;
    int64_t v9; // 0x3c2bdd
    __asm_outsd((int16_t)a3, *(int32_t *)&v9);
    int64_t v10 = unknown_ffffffff9539ec03(); // 0x3c2bfd
    int32_t v11 = (int32_t)v5 < 0xe5522201 ? -111 : -112; // 0x3c2c08
    *(int32_t *)v1 = *(int32_t *)&v1 + v11;
    int64_t v12 = v10 + 0x52eba35a; // 0x3c2c0c
    *(char *)-0x28ffd2f4fec2d57e = (char)v12;
    return v12 & 0xffffffff;
}

// Address range: 0x3c2c29 - 0x3c2c32
int64_t function_3c2c29(void) {
    // 0x3c2c29
    int64_t v1; // 0x3c2c29
    return (int64_t)(*(int32_t *)(v1 + 0x513a3a0d) * (int32_t)v1);
}

// Address range: 0x3c2c41 - 0x3c2c42
int64_t function_3c2c41(void) {
    // 0x3c2c41
    int64_t result; // 0x3c2c41
    return result;
}

// Address range: 0x3c2c4a - 0x3c2cc1
int64_t function_3c2c4a(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = a2;
    int64_t v2; // 0x3c2c4a
    int64_t v3 = v2 + a1 & 0xffffffff;
    int64_t v4 = 0; // 0x3c2c4f
    int64_t v5 = v3; // 0x3c2c4f
    int64_t v6; // 0x3c2c4a
    while (v6 != 0) {
        bool v7; // 0x3c2c4a
        int64_t v8 = v3 + (v7 ? -4 : 4); // 0x3c2c4f
        int64_t v9 = v6 - 1; // 0x3c2c4f
        v6 = v9;
        v4 = v9;
        v5 = v8;
        if (*(int32_t *)v3 != (int32_t)v2) {
            // break -> 
            break;
        }
        v3 = v8;
        v4 = 0;
        v5 = v3;
    }
    unknown_ffffffffef8f015c(v5);
    int64_t v10 = unknown_3d3e1469(); // 0x3c2c63
    int32_t * v11 = (int32_t *)(v10 - 0x52ba4696); // 0x3c2c68
    uint32_t v12 = *v11; // 0x3c2c68
    uint32_t v13 = v12 + (int32_t)v2; // 0x3c2c68
    *v11 = v13;
    int32_t * v14 = (int32_t *)(v10 - 0x63fc32d2); // 0x3c2c6e
    int32_t v15 = (int32_t)v4 & -256 | 210; // 0x3c2c6e
    int32_t v16 = *v14 + v15 + (int32_t)(v13 < v12); // 0x3c2c6e
    *v14 = v16;
    int64_t v17 = unknown_ffffffffecc88c7a(); // 0x3c2c7f
    if (v16 == 0) {
        v17 = function_3c2c41();
    }
    // 0x3c2c82
    unknown_ffffffff8adeff90();
    int64_t v18 = (0x8000000000000000 * (int128_t)a3 | (int128_t)v17) % (int128_t)(uint64_t)v2; // 0x3c2c8f
    int64_t v19 = v18;
    int32_t v20 = v5; // 0x3c2c94
    *(int32_t *)v1 = *(int32_t *)&v1 + v20;
    v18 = 2 * v19 & 0xfe00 | v19 & -0xff01;
    unknown_ffffffffba37ffa4();
    int32_t v21 = (int32_t)((int16_t)v19 < 0) + v20 + (int32_t)v18; // 0x3c2ca3
    int64_t v22 = v21; // 0x3c2ca3
    *(char *)v22 = __asm_insb((int16_t)v18);
    __asm_in(-86);
    while (v21 >= 0) {
        // 0x3c2c94
        v19 = v18;
        v20 = v22;
        *(int32_t *)v1 = *(int32_t *)&v1 + v20;
        v18 = 2 * v19 & 0xfe00 | v19 & -0xff01;
        unknown_ffffffffba37ffa4();
        v21 = (int32_t)((int16_t)v19 < 0) + v20 + (int32_t)v18;
        v22 = v21;
        *(char *)v22 = __asm_insb((int16_t)v18);
        __asm_in(-86);
    }
    int32_t * v23 = (int32_t *)(v1 + 0x8229a8b); // 0x3c2cac
    *v23 = *v23 + v15;
    int32_t * v24 = (int32_t *)((a3 + 0x1b88a96 & 0xffffffff) + 0x73a9319f); // 0x3c2cb7
    *v24 = *v24 + v15;
    return __asm_int3();
}

// Address range: 0x3c2ccd - 0x3c2cd7
int64_t function_3c2ccd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c2ccd
    int64_t result; // 0x3c2ccd
    int32_t * v1 = (int32_t *)(result - 0x65bf06f6); // 0x3c2ccd
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x3c2ce1 - 0x3c2d18
int64_t function_3c2ce1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c2ce1
    int64_t v1; // 0x3c2ce1
    uint64_t v2 = 256 * v1 & 0xff00 ^ a4; // 0x3c2ce1
    *(int32_t *)(v1 + 0x5e00a092) = (int32_t)a2;
    int64_t v3 = unknown_ffffffff88bc1df1(); // 0x3c2ceb
    *(char *)a1 = __asm_insb((int16_t)a3);
    int32_t * v4 = (int32_t *)(((v3 - v2 / 256) % 256 | v3 & -256) - 0x65e3b7f6); // 0x3c2cf9
    *v4 = *v4 + (int32_t)v2;
    int64_t v5 = unknown_4b89bb07(); // 0x3c2d01
    char * v6 = (char *)(v2 + 0x3f0508fe); // 0x3c2d06
    *v6 = *v6 ^ (*(char *)-0x1de5de2e | (char)v1);
    int64_t result = v5 & 0xf3fe172a | 0xc01e8d5; // 0x3c2d0c
    char * v7 = (char *)result; // 0x3c2d14
    *v7 = *v7 - 120;
    return result;
}

// Address range: 0x3c2d4b - 0x3c2d57
int64_t function_3c2d4b(int64_t a1) {
    int64_t result = unknown_139c9751(a1); // 0x3c2d4b
    int32_t * v1 = (int32_t *)(result + 5); // 0x3c2d50
    int64_t v2; // 0x3c2d4b
    *v1 = *v1 - (int32_t)v2;
    return result;
}

// Address range: 0x3c2d57 - 0x3c2d63
int64_t function_3c2d57(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = unknown_5a4ceb60(); // 0x3c2d5a
    int64_t v2; // 0x3c2d57
    return (v1 + 68 + (int64_t)(-1 - (char)((uint64_t)v2 / 256) < (char)(a3 / 256))) % 256 | v1 & -256;
}

// Address range: 0x3c2dbf - 0x3c2dc0
int64_t function_3c2dbf(int64_t a1) {
    // 0x3c2dbf
    int64_t result; // 0x3c2dbf
    return result;
}

// Address range: 0x3c2edd - 0x3c2f08
int64_t function_3c2edd(int64_t a1) {
    // 0x3c2edd
    int64_t v1; // 0x3c2edd
    __asm_wait(a1, v1, v1);
    int32_t v2 = *(int32_t *)((int64_t)*(int32_t *)-0x5504affe1741da10 + 0x5050812); // 0x3c2efa
    uint32_t v3 = v2 - 0x5ffe170c; // 0x3c2f00
    char v4 = *(char *)(a1 + 92); // 0x3c2f05
    return 256 * (int64_t)(v4 | (char)(v3 / 256)) | (int64_t)(v3 & -0xff01);
}

// Address range: 0x3c2f09 - 0x3c2f0a
int64_t function_3c2f09(int64_t a1) {
    // 0x3c2f09
    int64_t result; // 0x3c2f09
    return result;
}

// Address range: 0x3c2f46 - 0x3c2f48
int64_t function_3c2f46(int64_t a1) {
    // 0x3c2f46
    int64_t result; // 0x3c2f46
    return result;
}

// Address range: 0x3c2f4a - 0x3c2fb7
int64_t function_3c2f4a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c2f4a
    int64_t v1; // 0x3c2f4a
    int64_t result = v1;
    char v2 = *(char *)0x363e17b0; // 0x3c2f4a
    char v3 = v2 - 113; // 0x3c2f4a
    *(char *)0x363e17b0 = v3;
    if (v3 < 0 == ((v3 ^ v2) & v2 + 15) < 0 != v3 != 0) {
        // 0x3c2f53
        *(char *)result = (char)result - 120;
        return result;
    }
    // 0x3c2f99
    unknown_ffffffffc42e909f();
    *(char *)a1 = (char)a2;
    bool v4; // 0x3c2f4a
    int64_t v5 = v4 ? -1 : 1; // 0x3c2fa8
    int64_t v6 = v5 + a1; // 0x3c2fa8
    int64_t v7 = v5 + a2; // 0x3c2fa8
    unknown_ffffffffded74fb0(v6, v7);
    return __asm_wait(v6, v7, a3);
}

// Address range: 0x3c2fb9 - 0x3c2fc2
int64_t function_3c2fb9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffff8659abbf(a1, a2, a3, a4); // 0x3c2fb9
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x3c2fd0 - 0x3c2fd2
int64_t function_3c2fd0(void) {
    // 0x3c2fd0
    int64_t v1; // 0x3c2fd0
    return function_3c2fe8(v1, v1, v1, (int64_t)&g7, (int64_t)&g7);
}

// Address range: 0x3c2fd2 - 0x3c2fe2
int64_t function_3c2fd2(void) {
    // 0x3c2fd2
    int64_t result; // 0x3c2fd2
    int32_t * v1 = (int32_t *)(result - 91); // 0x3c2fd8
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3c2fe8 - 0x3c3074
int64_t function_3c2fe8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3c2fe8
    unknown_ffffffff8bead3fb();
    int64_t v1; // 0x3c2fe8
    char * v2 = (char *)(v1 - 0x18f52fda); // 0x3c300b
    *v2 = *v2 | (char)(a3 / 256);
    int64_t result = unknown_ffffffffad81a619(); // 0x3c3012
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x3c3075 - 0x3c308a
int64_t function_3c3075(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c3075
    int64_t v1; // 0x3c3075
    int64_t v2 = v1;
    int64_t result = (v2 + 68) % 256 | v2 & -256; // 0x3c3075
    int32_t * v3 = (int32_t *)(a2 - 0x1b5c7c92); // 0x3c3077
    *v3 = *v3 ^ -0x4de2e628;
    char v4 = *(char *)-0x63782878; // 0x3c3081
    *(char *)-0x63782878 = v4 + (char)((uint64_t)v1 / 256);
    __asm_out_133(-26, (int32_t)result);
    return result;
}

// Address range: 0x3c30c3 - 0x3c30d5
int64_t function_3c30c3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3c30c3
    int64_t v1; // 0x3c30c3
    int64_t v2 = v1;
    float80_t v3; // 0x3c30c3
    *(float80_t *)(v2 - 0x731234f6 + 8 * v1) = __asm_fbstp(v3);
    int64_t result = (v2 + a4 / 256) % 256 | v2 & -256; // 0x3c30cb
    int32_t * v4 = (int32_t *)(v1 + 0x1aa7694f); // 0x3c30cd
    *v4 = *v4 + (int32_t)result;
    return result;
}

// Address range: 0x3c30f3 - 0x3c30f8
int64_t function_3c30f3(void) {
    // 0x3c30f3
    return function_ffffffff981a2662();
}

// Address range: 0x3c30f9 - 0x3c30fa
int64_t function_3c30f9(void) {
    // 0x3c30f9
    int64_t result; // 0x3c30f9
    return result;
}

// Address range: 0x3c310d - 0x3c3115
int64_t function_3c310d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c310d
    bool v1; // 0x3c310d
    if (v1) {
        function_3c30f9();
    }
    // 0x3c3111
    int64_t v2; // 0x3c310d
    return function_3c318c(a1, a2, a3, v2, v2, v2);
}

// Address range: 0x3c3153 - 0x3c3183
int64_t function_3c3153(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c3153
    int64_t v1; // 0x3c3153
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x3c3153
    int64_t v3 = v2 ? -4 : 4; // 0x3c3153
    int64_t v4 = v3 + a1; // 0x3c3153
    int64_t v5 = v3 + a2; // 0x3c3153
    int32_t * v6 = (int32_t *)(v1 + 1); // 0x3c3156
    *v6 = *v6 + (int32_t)a4;
    int64_t v7 = (int32_t)v1 >> 31; // 0x3c315b
    char * v8 = (char *)(8 * v4 + v5); // 0x3c315c
    *v8 = *v8 + (char)(v1 / 256);
    __asm_wait(v4, v5, v7);
    __asm_wait(v4, v5, v7);
    int64_t v9 = unknown_6ce5096c(); // 0x3c3166
    *(int32_t *)-0x5b9ec94ff54aa69 = (int32_t)v9;
    uint64_t v10 = v9 & -0xff01 | (int64_t)&g6; // 0x3c3174
    int64_t v11 = v10 & -256 | (int64_t)*(char *)(v10 % 256 + (v1 & -256 | 228)); // 0x3c3178
    *(int32_t *)v11 = (int32_t)v11;
    return v11 & 0xa13b10c3 | 0x5ec4ef3c;
}

// Address range: 0x3c318c - 0x3c31a0
int64_t function_3c318c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t result) {
    int32_t * v1 = (int32_t *)(a4 - 0x5760620b); // 0x3c3192
    int64_t v2; // 0x3c318c
    *v1 = *v1 + (int32_t)v2;
    *(char *)a1 = (char)(a4 / 256 + 216 + v2);
    return result;
}

// Address range: 0x3c31a1 - 0x3c31b3
int64_t function_3c31a1(int64_t a1) {
    // 0x3c31a1
    unknown_ffffffff9524f5a8(a1);
    return (int64_t)*(int32_t *)0x7eaef462432a5da1;
}

// Address range: 0x3c31b3 - 0x3c31bd
int64_t function_3c31b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 108); // 0x3c31b7
    *v1 = *v1 - (char)a4;
    int64_t result = __asm_iretd(); // 0x3c31ba
    __asm_out_134((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3c321e - 0x3c3229
int64_t function_3c321e(int64_t a1) {
    // 0x3c321e
    return function_2244975();
}

// Address range: 0x3c3235 - 0x3c3236
int64_t function_3c3235(void) {
    // 0x3c3235
    int64_t result; // 0x3c3235
    return result;
}

// Address range: 0x3c32e9 - 0x3c32ea
int64_t function_3c32e9(int64_t a1) {
    // 0x3c32e9
    int64_t result; // 0x3c32e9
    return result;
}

// Address range: 0x3c32f9 - 0x3c3323
int64_t function_3c32f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c32f9
    int64_t v1; // 0x3c32f9
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a2;
    *(char *)a3 = (char)a4;
    *(char *)-0x17fe17e3a2c58431 = (char)unknown_48f25a0b(v1 & 0xffffffff);
    *(int32_t *)0x4046121a = *(int32_t *)0x4046121a + (int32_t)v1;
    return function_224ebf3();
}

// Address range: 0x3c3341 - 0x3c334b
int64_t function_3c3341(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c3341
    int64_t result; // 0x3c3341
    return result;
}

// Address range: 0x3c334f - 0x3c3350
int64_t function_3c334f(void) {
    // 0x3c334f
    int64_t result; // 0x3c334f
    return result;
}

// Address range: 0x3c3363 - 0x3c3373
int64_t function_3c3363(int64_t a1) {
    // 0x3c3363
    unknown_ffffffffb4916d69();
    return unknown_7cb1d072();
}

// Address range: 0x3c33ad - 0x3c33c5
int64_t function_3c33ad(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 - 0x43fe17ad); // 0x3c33ad
    char v2 = *v1 & (char)(a3 / 256); // 0x3c33ad
    *v1 = v2;
    int64_t result = __asm_iretd(); // 0x3c33b4
    if (a4 != 1 && v2 != 0) {
        result = function_3c334f();
    }
    char v3 = result;
    *(char *)-0x16ed999e = *(char *)-0x16ed999e - v3;
    *(char *)result = v3 - 120;
    return result;
}

// Address range: 0x3c33c7 - 0x3c33cf
int64_t function_3c33c7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3c33c7
    int64_t v1; // 0x3c33c7
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v1;
    int32_t * v3 = (int32_t *)(v1 + 1); // 0x3c33ca
    *v3 = *v3 + (int32_t)a4;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x428d17 - 0x428d21
int64_t function_428d17(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x428d17
    int64_t v1; // 0x428d17
    int32_t v2 = v1; // 0x428d17
    uint32_t result = v2 - 0xcf3cb81; // 0x428d17
    if (a4 != 1 == result == 0) {
        // 0x428d7f
        return result;
    }
    int64_t result2 = a3 & 0xffffffff; // 0x428d1f
    if ((0xcf3cb80 - v2 & v2) < 0) {
        result2 = function_428cc9();
    }
    // 0x428d21
    return result2;
}

// Address range: 0x428d38 - 0x428d39
int64_t function_428d38(void) {
    // 0x428d38
    int64_t result; // 0x428d38
    return result;
}

// Address range: 0x428d64 - 0x428d7f
int64_t function_428d64(int64_t a1, int64_t a2, int64_t a3) {
    // 0x428d64
    int64_t v1; // 0x428d64
    uint32_t v2 = (int32_t)v1 & -0x2af0afe8; // 0x428d65
    int64_t v3 = v2; // 0x428d6a
    if (v2 != 0) {
        v3 = function_428dd8(a1, a2, a3, v1, (int64_t)&g7);
    }
    int64_t v4 = v3;
    char * v5 = (char *)(v1 + 0x13e7d625); // 0x428d71
    *v5 = *v5 | 121;
    return (v4 + 63) % 256 | v4 & -256;
}

// Address range: 0x428db7 - 0x428dbc
int64_t function_428db7(void) {
    // 0x428db7
    int64_t v1; // 0x428db7
    int64_t v2 = v1;
    return (v2 + 215) % 256 | v2 & -256;
}

// Address range: 0x428dd8 - 0x428e36
int64_t function_428dd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x428dd8
    int64_t result; // 0x428dd8
    if (a4 == 1) {
        // 0x428dda
        *(char *)a1 = (char)result;
        return result;
    }
    // 0x428e26
    __asm_out_133(17, (int32_t)result);
    return result & -256 | (int64_t)*(char *)-0x7ff5f6ca046ad094;
}

// Address range: 0x428e39 - 0x428e3a
int64_t function_428e39(void) {
    // 0x428e39
    int64_t result; // 0x428e39
    return result;
}

// Address range: 0x428e56 - 0x428e59
int64_t function_428e56(void) {
    // 0x428e56
    int64_t result; // 0x428e56
    return result;
}

// Address range: 0x428e78 - 0x428e7a
int64_t function_428e78(void) {
    // 0x428e78
    return function_428e39();
}

// Address range: 0x428ea5 - 0x428ea8
int64_t function_428ea5(void) {
    // 0x428ea5
    int64_t result; // 0x428ea5
    return result;
}

// Address range: 0x428ed9 - 0x428edc
int64_t function_428ed9(void) {
    // 0x428ed9
    int64_t result; // 0x428ed9
    return result;
}

// Address range: 0x428ef5 - 0x428f05
int64_t function_428ef5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x428ef5
    int64_t v1; // 0x428ef5
    char * v2 = (char *)(v1 - 0x64c4a697); // 0x428ef5
    *v2 = *v2 | (char)(a4 / 256);
    return function_307e216d();
}

// Address range: 0x428f32 - 0x428f66
int64_t function_428f32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x428f32
    int64_t v1; // 0x428f32
    int64_t v2 = v1;
    // 0x428f45
    *(char *)a1 = __asm_insb((int16_t)a3);
    uint32_t v3 = (int32_t)a3 - (int32_t)v1; // 0x428f48
    if (a4 != 1 == v3 == 0) {
        // 0x428f58
        int64_t v4; // 0x428f32
        int64_t result = (int64_t)&v4; // 0x428f61
        int32_t v5 = *(int32_t *)(v1 + 21); // 0x428f62
        *(int64_t *)((int64_t)(v5 + *(int32_t *)0x172954c57c9030) - 8) = result;
        return result;
    }
    // 0x428f4c
    bool v6; // 0x428f32
    int64_t result2 = (v2 - (v6 ? 202 : 201)) % 256 | v2 & -256; // 0x428f45
    uint64_t v7 = (int64_t)v3; // 0x428f48
    __asm_out_134((int16_t)v3, (int32_t)result2);
    char v8 = *(char *)(v7 + 21); // 0x428f53
    int64_t v9; // 0x428f32
    char v10 = *(char *)&v9; // 0x428f56
    __asm_outsb((int16_t)(256 * (int64_t)(v8 ^ (char)(v3 / 256)) | v7 % 256), v10);
    return result2;
}

// Address range: 0x428f6a - 0x428fd5
int64_t function_428f6a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    bool v2; // 0x428f6a
    int64_t v3 = v2 ? -4 : 4; // 0x428f6a
    int64_t v4 = v3 + a2; // 0x428f6a
    int64_t v5; // 0x428f6a
    if ((int32_t)v5 < (int32_t)v5) {
        // 0x428fc3
        __asm_outsd((int16_t)a3, *(int32_t *)v4);
        int32_t * v6 = (int32_t *)((v5 ^ 0x416e073) + 0x60934e1b); // 0x428fcd
        *v6 = *v6 ^ (int32_t)v4;
        return a4 & 0xffffffff;
    }
    int64_t v7 = v3 + a1; // 0x428f6a
    char * v8 = (char *)(v4 + 0x309d4054); // 0x428f6d
    *v8 = *v8 - (char)(a4 / 256);
    if ((v5 & 0x4100) == 0) {
        // 0x428f96
        *(int32_t *)v1 = *(int32_t *)&v1 & (int32_t)a4;
        return v7 & 0xffffffff;
    }
    // 0x428f8a
    *(int32_t *)(v1 + 5) = (int32_t)v7;
    char v9 = __asm_in_135((int16_t)v1); // 0x428f8d
    char v10 = (v5 & 256) == 0 ? -111 : -110; // 0x428f8f
    return (v5 | (int64_t)v9) & -256 | (int64_t)(v9 + v10);
}

// Address range: 0x429004 - 0x429013
int64_t function_429004(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x429004
    bool v1; // 0x429004
    bool v2 = v1;
    uint32_t v3 = (int32_t)a1; // 0x429004
    uint32_t v4 = (int32_t)a2 + v3; // 0x429004
    bool v5 = v2 ? v4 + (int32_t)v2 <= v3 : v4 < v3; // 0x429004
    char * v6 = (char *)(a3 + 92); // 0x429006
    *v6 = *v6 - (char)a3 + (char)v5;
    int64_t v7; // 0x429004
    return v7 & 0x235f97ef | 0xdca06810;
}

// Address range: 0x429117 - 0x429217
int64_t function_429117(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3 = a7;
    int64_t v4; // 0x429117
    int64_t v5 = (int64_t)&v4; // 0x429119
    int64_t result; // 0x429117
    if ((char)a7 < 0 == ((a7 & (int64_t)L"\n2") != 0) != ((a7 & 64) == 0)) {
        int64_t v6 = (v5 - a4) % 256 | v5 & -256; // 0x42911c
        *(int32_t *)a4 = (int32_t)v6;
        __asm_int(40);
        return (v6 ^ result) & 0xffffffff;
    }
    // 0x42918f
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v7; // 0x429117
    if ((char)a7 < 0 == ((a7 & (int64_t)L"\n2") != 0)) {
        char v8 = *(char *)&v1; // 0x42919d
        char v9 = *(char *)&v2; // 0x42919d
        int64_t v10 = (a7 & (int64_t)&g1) == 0 ? 1 : -1; // 0x42919d
        int64_t v11 = v1 + v10; // 0x42919d
        v2 += v10;
        v1 = v11;
        __asm_out(45, (char)result);
        if (a4 != 1 == v8 == v9) {
            // 0x42918e
            return result;
        }
        int64_t v12 = result & -256 | 32; // 0x4291a4
        *(char *)(a4 - 47 + 2 * v11) = -100;
        v3 = v1;
        int32_t v13 = *(int32_t *)(v12 - 0x4e3dbf22); // 0x4291ac
        char * v14 = (char *)(int64_t)(*(int32_t *)(v7 + 42) & -0x52fab232 | 16); // 0x4291b5
        *v14 = *v14 & 32;
        uint32_t v15 = *(int32_t *)v1; // 0x4291b9
        uint32_t v16 = *(int32_t *)(v12 & 0xffffff20); // 0x4291b9
        int32_t * v17 = (int32_t *)(int64_t)(v13 + (int32_t)v7); // 0x4291ba
        int32_t v18 = *v17; // 0x4291ba
        *v17 = v18 + (int32_t)((int64_t)&v3 & a3) + (int32_t)(v15 < v16);
        return v2 & 0xffffffff;
    }
    int64_t v19 = a4; // 0x4291e8
    int32_t v20 = -0x52fab232; // 0x4291f1
    v19 = v19 & -0xff01 | (int64_t)&g2;
    int64_t v21 = v5 - 8; // 0x4291fb
    *(int64_t *)v21 = a3;
    unsigned char v22 = (char)v19 % 32; // 0x4291fd
    char * v23; // 0x4291fd
    if (v22 != 0) {
        v23 = (char *)(a6 + 22 + 4 * v1);
        *v23 = *v23 >> v22;
    }
    int64_t v24; // 0x429117
    int64_t v25 = v24 & 0xffffff00; // 0x4291ed
    int64_t v26 = (char)v24 > 235 ? 69 : 70; // 0x4291ef
    int64_t v27 = ((v24 + 20 + v26) % 256 | v25) ^ 0x2a3e86e1; // 0x4291f3
    int64_t * v28 = (int64_t *)(v5 - 16); // 0x429202
    *v28 = a6;
    int32_t * v29 = (int32_t *)v27; // 0x42920b
    uint32_t v30 = *v29 & (int32_t)v27; // 0x42920b
    *v29 = v30;
    v2 = *v28;
    while (v30 < 0) {
        // 0x4291e1
        v20 -= *(int32_t *)&v7;
        char * v31 = (char *)((int64_t)v20 + 65); // 0x4291e2
        *v31 = *v31 + (char)(v27 / 256);
        *(int32_t *)(v19 + 24) = (int32_t)v7;
        int64_t v32 = v21;
        v19 = v19 & -0xff01 | (int64_t)&g2;
        v21 = v32 - 8;
        *(int64_t *)v21 = a3;
        v22 = (char)v19 % 32;
        if (v22 != 0) {
            v23 = (char *)(a6 + 22 + 4 * v1);
            *v23 = *v23 >> v22;
        }
        v25 = v27 & 0xffffff00;
        v27 = ((v27 + 20 + ((char)v27 > 235 ? 69 : 70)) % 256 | v25) ^ 0x2a3e86e1;
        v28 = (int64_t *)(v32 - 16);
        *v28 = a6;
        v29 = (int32_t *)v27;
        v30 = *v29 & (int32_t)v27;
        *v29 = v30;
        v2 = *v28;
    }
    // 0x429211
    return ((v27 + 146) % 256 | v25) ^ 0x2a3e8600;
}

// Address range: 0x429317 - 0x429318
int64_t function_429317(void) {
    // 0x429317
    int64_t result; // 0x429317
    return result;
}

// Address range: 0x429359 - 0x42936d
int64_t function_429359(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x429359
    int64_t v1; // 0x429359
    char * v2 = (char *)(v1 - 41); // 0x42935a
    bool v3; // 0x429359
    *v2 = (char)v3 + (char)v1 + *v2;
    *(int32_t *)-0x6109252f8dfa724 = (int32_t)a3;
    return a3 & 0xffffffff;
}

// Address range: 0x4293aa - 0x429515
int64_t function_4293aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4293aa
    int64_t v1; // 0x4293aa
    uint64_t v2 = v1;
    uint64_t v3 = a4 - 1; // 0x4293aa
    int64_t result; // 0x4293aa
    bool v4; // 0x4293aa
    if (v3 != 0 == v4) {
        // 0x429414
        return result;
    }
    unsigned char v5 = (char)(v1 / 256); // 0x4293ac
    if ((char)v4 + v5 <= v5) {
        int64_t v6 = a3 & -256 | 14; // 0x4293ba
        int64_t result2 = v2 & -256 | 233; // 0x4293bc
        __asm_out_134((int16_t)v6, (int32_t)result2);
        *(int64_t *)(a6 - 0x58b5a32a) = a5;
        if (v3 == 0) {
            // 0x4293f6
            return __asm_wait(a1, a2, v6);
        }
        char * v7 = (char *)(v1 - 122); // 0x4293c8
        *v7 = -*v7;
        return result2;
    }
    int64_t v8 = (v4 ? 0xff00 : 0) | v1 & -0xff01; // 0x4293ac
    unsigned char v9 = *(char *)(a1 + 34); // 0x429419
    int64_t v10 = v9 >= (char)(v3 / 256); // 0x42941d
    int64_t result3 = v2 + 0x6b6d004c + v10; // 0x42941d
    int64_t v11 = v8; // bp-8, 0x429423
    if (!((v9 >= (char)(v3 / 256) ? result3 <= v2 : v2 > 0xffffffff9492ffb3))) {
        char v12 = *(char *)(result3 % 256 + (v8 & -256 | 73)); // 0x42942d
        *(int32_t *)(a4 + 62) = (int32_t)v3;
        return result3 & -256 | (int64_t)(*(char *)(a3 - 57) + v12);
    }
    // 0x429477
    if (result3 < 0 == (result3 + v10 & (v2 ^ -0x8000000000000000)) < 0 == (result3 != 0)) {
        // 0x429414
        return result3;
    }
    char * v13 = (char *)(a1 - 0x53c3bf8e + 4 * v1); // 0x42944b
    int64_t v14 = v8; // 0x4293aa
    int64_t * v15 = (int64_t *)((int64_t)&v11 - 8); // 0x429486
    *v15 = a1;
    *v13 = *v13 + (char)a1;
    int64_t v16 = (int64_t)*(int32_t *)(v14 - 0xe4cae25); // 0x429454
    int64_t v17 = -89 * v16; // 0x429454
    int64_t v18 = v17 & 0xffffffff; // 0x429454
    char v19 = v14; // 0x42945b
    char v20 = v17 != -0x5900000000 * v16 >> 32; // 0x42945b
    char v21 = v20 + (char)(v3 / 256); // 0x42945b
    unsigned char v22 = v19 - v21; // 0x42945b
    while (v22 < 0) {
        // 0x429475
        result = __asm_int3();
        v14 = v14 & -256 | (int64_t)v22;
        int64_t v23 = *v15 & 0xffffffff; // 0x42947d
        if (((v22 - v20 ^ v19) & (v21 ^ v19)) < 0) {
            // 0x429414
            return result;
        }
        v15 = (int64_t *)v18;
        *v15 = a1;
        *v13 = *v13 + (char)a1;
        v16 = (int64_t)*(int32_t *)(v14 - 0xe4cae25);
        v17 = -89 * v16;
        v18 = v17 & 0xffffffff;
        v19 = v14;
        v20 = v17 != -0x5900000000 * v16 >> 32;
        v21 = v20 + (char)(v23 / 256);
        v22 = v19 - v21;
    }
    int64_t v24 = *(int64_t *)v18; // 0x42945f
    return (v24 + 23) % 256 | v24 & 0xffffff00;
}
