/*
 * Targeted RetDec C for native executable gap queue batch 631.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1da85a-0x1daa5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1daa5a-0x1dab5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1dac5a-0x1dae5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x264ac2-0x264cc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x264cc2-0x264ec2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x264ec2-0x2650c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2650c2-0x2652c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2652c2-0x2654c2 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
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
void __asm_frstor(int864_t value);
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

int64_t function_18dc5c77();
int64_t function_1da85a(void);
int64_t function_1da85d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1da8f3(int64_t a1);
int64_t function_1da925(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1da93c(void);
int64_t function_1da99c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1daa58(void);
int64_t function_1daa99(void);
int64_t function_1daaed(int64_t a1);
int64_t function_1dac5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dac9a(void);
int64_t function_1dacd0(void);
int64_t function_1dacf4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1dae44(int64_t a1);
int64_t function_264ac2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_264ad3(void);
int64_t function_264af2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_264b10(void);
int64_t function_264b4b(void);
int64_t function_264b5a(void);
int64_t function_264b67(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_264c75(int64_t a1);
int64_t function_264c8a(void);
int64_t function_264cd1(int64_t a1);
int64_t function_264dab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_264e2f(void);
int64_t function_264e38(void);
int64_t function_264e80(int64_t a1);
int64_t function_264ef4(int64_t a1, int64_t a2);
int64_t function_264f82(void);
int64_t function_26504e(void);
int64_t function_2650cf(void);
int64_t function_26510b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26512e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_265154(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2651df(void);
int64_t function_265237(int64_t a1);
int64_t function_26524e(int64_t a1, int64_t a2);
int64_t function_26531b(void);
int64_t function_26531c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26548a(void);
int64_t function_289075bd();
int64_t function_2db709();
int64_t function_3d2711cf();
int64_t function_4228d71a();
int64_t function_5b8b5091();
int64_t function_caf2a();
int64_t function_ffffffff9a99361a();
int64_t function_ffffffffb1137ecb();
int64_t function_ffffffffde2a3660();
int64_t unknown_1313fad7();
int64_t unknown_28747522();
int64_t unknown_3d1f9233();
int64_t unknown_447ebdac();
int64_t unknown_5179ff3();
int64_t unknown_53c4017c();
int64_t unknown_5d9e1424();
int64_t unknown_60c4ca92();
int64_t unknown_62f91518();
int64_t unknown_62ff381e();
int64_t unknown_76a9f334();
int64_t unknown_ffffffff98384685();
int64_t unknown_ffffffffac32ad6f();
int64_t unknown_ffffffffafb640bb();
int64_t unknown_ffffffffcdd2b2f7();
int64_t unknown_ffffffffd3dbf906();
int64_t unknown_ffffffffdc43c6fa();

// Address range: 0x1da85a - 0x1da85c
int64_t function_1da85a(void) {
    // 0x1da85a
    int64_t result; // 0x1da85a
    return result;
}

// Address range: 0x1da85d - 0x1da888
int64_t function_1da85d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1da85d
    int64_t v1; // 0x1da85d
    uint64_t v2 = v1;
    char * v3 = (char *)(a3 - 77 + v1); // 0x1da85d
    *v3 = *v3 + (char)v2;
    char * v4 = (char *)(a1 - 85); // 0x1da861
    *v4 = -*v4;
    unsigned char v5 = *(char *)-0x76f04be9291922e6 | 90; // 0x1da875
    char v6 = *(char *)((v1 & -256) - 69); // 0x1da877
    *(char *)-0x170e3664 = *(char *)-0x170e3664 | v5;
    *(int32_t *)0x631f9087 = *(int32_t *)0x631f9087 + (int32_t)a1;
    return v2 & -0x10000 | (int64_t)v5 | 256 * (int64_t)(v6 + (char)(v2 / 256));
}

// Address range: 0x1da8f3 - 0x1da8f6
int64_t function_1da8f3(int64_t a1) {
    // 0x1da8f3
    int64_t result; // 0x1da8f3
    return result;
}

// Address range: 0x1da925 - 0x1da92b
int64_t function_1da925(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1da925
    int64_t v1; // 0x1da925
    uint64_t v2 = v1;
    char v3 = *(char *)(a4 + 33); // 0x1da925
    return 256 * (int64_t)(v3 | (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x1da93c - 0x1da93d
int64_t function_1da93c(void) {
    // 0x1da93c
    int64_t result; // 0x1da93c
    return result;
}

// Address range: 0x1da99c - 0x1daa46
int64_t function_1da99c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x1da99c
    *(char *)a1 = (char)v2;
    bool v3; // 0x1da99c
    int64_t v4 = v3 ? -1 : 1; // 0x1da99c
    int64_t v5 = v4 + a1; // 0x1da99c
    *(int32_t *)-0x43f130c17c4e264c = (int32_t)v2;
    int64_t v6 = unknown_447ebdac(v5); // 0x1da9a6
    __asm_out((int16_t)a3, (char)v6);
    char * v7 = (char *)(a4 - 45); // 0x1da9ac
    char v8 = v2 / 256; // 0x1da9ac
    *v7 = (char)v3 + v8 + *v7;
    unsigned char v9 = *(char *)(v6 - 0x1933d3f7) | (char)a4; // 0x1da9af
    int64_t v10 = unknown_ffffffffafb640bb(); // 0x1da9ba
    if (v9 < 1) {
        v10 = function_1da93c();
    }
    int64_t v11 = a4 & -256 | (int64_t)v9; // 0x1da9af
    char v12 = *(char *)&v1; // 0x1da9bc
    int32_t * v13 = (int32_t *)(v11 - 0x6267f00c); // 0x1da9c3
    *v13 = *v13 + (int32_t)(256 * (int64_t)(v12 ^ v8) | v2 & 0xffff00ff);
    int64_t v14 = v2 + 0x5cb0bb04 + v10 & 0xffffffff; // 0x1da9d0
    v1 = v14;
    int64_t v15 = unknown_1313fad7(); // 0x1da9d1
    int64_t v16 = v5 + v4; // 0x1da9d9
    int32_t * v17 = (int32_t *)(v15 - 0x2f5ac555); // 0x1da9e3
    *v17 = *v17 + (int32_t)v11;
    *(int64_t *)v16 = v15;
    unsigned char v18 = v9 % 32;
    if (v18 != 0) {
        *(int32_t *)v1 = *(int32_t *)v14 >> (int32_t)v18;
    }
    uint32_t v19 = 39 * *(int32_t *)(v16 - 19); // 0x1da9da
    int64_t v20 = v16 + (v3 ? -8 : 8); // 0x1da9e9
    unknown_ffffffffcdd2b2f7(v20);
    char * v21 = (char *)(v20 + 94); // 0x1da9f6
    char v22 = a4 / 256; // 0x1da9f6
    *v21 = *v21 & v22;
    if (v18 != 0) {
        char * v23 = (char *)((int64_t)v19 + 0x5c4b6488); // 0x1da9f9
        *v23 = *v23 << v18;
    }
    uint64_t v24 = unknown_ffffffffd3dbf906(); // 0x1daa00
    char * v25 = (char *)(v24 + 23); // 0x1daa05
    *v25 = *v25 + (char)(v24 / 256);
    *(int32_t *)0x73dd30d1 = *(int32_t *)0x73dd30d1 + (int32_t)v1;
    *(char *)(v20 - 0x4af5ff1d) = v22;
    int64_t v26 = unknown_5d9e1424(); // 0x1daa1e
    *(int32_t *)-0x3eff4cec0b26921a = (int32_t)v26;
    unknown_3d1f9233();
    uint32_t v27 = *(int32_t *)-0x45e06d99; // 0x1daa32
    uint32_t v28 = v27 + v19; // 0x1daa32
    *(int32_t *)-0x45e06d99 = v28;
    int64_t result = __asm_iretd(); // 0x1daa38
    char * v29 = (char *)result; // 0x1daa39
    *v29 = *v29 + (char)v26 + (char)(v28 < v27);
    *(int64_t *)0xe8188a59 = result;
    return result;
}

// Address range: 0x1daa58 - 0x1daa5a
int64_t function_1daa58(void) {
    // 0x1daa58
    int64_t v1; // 0x1daa58
    bool v2; // 0x1daa58
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x1daa99 - 0x1daaa0
int64_t function_1daa99(void) {
    // 0x1daa99
    int64_t v1; // 0x1daa99
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_ffffffffb1137ecb();
}

// Address range: 0x1daaed - 0x1daaf8
int64_t function_1daaed(int64_t a1) {
    // 0x1daaed
    *(int32_t *)0x491f92f4 = *(int32_t *)0x491f92f4 + (int32_t)a1;
    return function_5b8b5091();
}

// Address range: 0x1dac5a - 0x1dac7b
int64_t function_1dac5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x29713b06); // 0x1dac5d
    int64_t v2; // 0x1dac5a
    *v1 = *v1 + (int32_t)v2;
    bool v3; // 0x1dac5a
    *(char *)((v3 ? -1 : 1) + a1) = -20;
    int32_t * v4 = (int32_t *)(v2 + 23); // 0x1dac6e
    *v4 = *v4 + ((int32_t)v2 & -0xff01 | (int32_t)&g7);
    return 0x10000 * (int32_t)(v2 + 256 * v2) >> 16 & -256 | 236;
}

// Address range: 0x1dac9a - 0x1dac9b
int64_t function_1dac9a(void) {
    // 0x1dac9a
    int64_t result; // 0x1dac9a
    return result;
}

// Address range: 0x1dacd0 - 0x1dacd9
int64_t function_1dacd0(void) {
    // 0x1dacd0
    int64_t v1; // 0x1dacd0
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_1dac9a();
}

// Address range: 0x1dacf4 - 0x1dadf9
int64_t function_1dacf4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffdc43c6fa(); // 0x1dacf4
    char v3 = *(char *)(v2 + 0x68056074); // 0x1dacf9
    uint32_t v4 = (int32_t)a4 % 32; // 0x1dad01
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)(2 * v2); // 0x1dad01
        uint32_t v6 = *v5; // 0x1dad01
        *v5 = v6 >> v4 | v6 << 32 - v4;
    }
    if ((256 * (int64_t)(v3 & (char)(a4 / 256)) || a4 & -0xff01) != 0) {
        // 0x1dad0c
        __asm_out_133(-39, (char)v2);
        int64_t result = v2 & -256 | 63; // 0x1dad10
        *(int32_t *)a1 = (int32_t)result;
        return result;
    }
    bool v7 = (v2 & 256) != 0; // 0x1dad6c
    int64_t v8 = 0;
    while (!v7) {
        // 0x1dad6f
        __asm_in(-83);
        int32_t v9 = *(int32_t *)&v1; // 0x1dad71
        *(int32_t *)v1 = v9 >> 31;
        int64_t v10 = unknown_53c4017c(); // 0x1dad75
        int64_t v11 = v8 - 1; // 0x1dad7b
        v7 = (v9 & 0x40000000) != 0;
        if (v11 == 0) {
            char * v12 = (char *)(a3 - 0xafbfa90 + unknown_ffffffff98384685()); // 0x1dad84
            *v12 = *v12 + (((char)v10 ^ -8) < 200 ? 82 : 81);
            return unknown_60c4ca92();
        }
        v8 = v11;
    }
    // 0x1dadda
    *(int32_t *)(v1 + 0x20d80812) = 0x1e86a06;
    int64_t v13 = v1;
    *(int32_t *)(v13 + 113) = (int32_t)v13;
    int64_t result2 = unknown_5179ff3(); // 0x1daded
    int64_t v14; // 0x1dacf4
    char * v15 = (char *)(v14 - 81 + v14); // 0x1dadf4
    *v15 = *v15 + ((char)v8 | (char)&g5);
    return result2;
}

// Address range: 0x1dae44 - 0x1dae4d
int64_t function_1dae44(int64_t a1) {
    // 0x1dae44
    int64_t v1; // 0x1dae44
    return v1 & 0xbb2301e8;
}

// Address range: 0x264ac2 - 0x264ac8
int64_t function_264ac2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x264ac2
    int64_t result; // 0x264ac2
    return result;
}

// Address range: 0x264ad3 - 0x264ad4
int64_t function_264ad3(void) {
    // 0x264ad3
    int64_t result; // 0x264ad3
    return result;
}

// Address range: 0x264af2 - 0x264b06
int64_t function_264af2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x264af2
    return function_3d2711cf(((a5 & (int64_t)&g1) == 0 ? 4 : -4) + a1);
}

// Address range: 0x264b10 - 0x264b12
int64_t function_264b10(void) {
    // 0x264b10
    int64_t result; // 0x264b10
    return result;
}

// Address range: 0x264b4b - 0x264b4d
int64_t function_264b4b(void) {
    // 0x264b4b
    return function_264ad3();
}

// Address range: 0x264b5a - 0x264b5b
int64_t function_264b5a(void) {
    // 0x264b5a
    int64_t result; // 0x264b5a
    return result;
}

// Address range: 0x264b67 - 0x264c6d
int64_t function_264b67(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x264b67
    int64_t v1; // 0x264b67
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a1;
    *(char *)a3 = (char)a4;
    int64_t result2; // 0x264b67
    int64_t v5; // bp-8, 0x264b67
    bool v6; // 0x264b67
    if (!v6 && !v6) {
        char v7 = *(char *)(result2 + 21); // 0x264b6b
        // 0x264b70
        v5 = v4;
        int32_t * v8 = (int32_t *)(a4 + 0x3d764d0b); // 0x264b73
        *v8 = *v8 + (int32_t)v2;
        int32_t * v9 = (int32_t *)(v3 + 121); // 0x264b79
        *v9 = *v9 + (int32_t)v4;
        *(char *)result2 = *(char *)&result2 + v7;
        return function_289075bd();
    }
    // 0x264bbb
    *(int32_t *)-0x78d8773e = *(int32_t *)-0x78d8773e | (int32_t)v1;
    char v10 = *(char *)&v3; // 0x264bc2
    unsigned char v11 = *(char *)(result2 + 9); // 0x264bc6
    *(char *)v4 = (char)v2;
    uint32_t v12 = 0x10000 * (int32_t)(256 * (int64_t)v11 | result2 % 256) >> 16 ^ 140; // 0x264bcf
    result2 = v12;
    int32_t v13 = *(int32_t *)&v4; // 0x264bd0
    v4 += (v6 ? -4 : 4);
    if (v12 == v13) {
        // 0x264bd3
        return v12 - 0x40fec300;
    }
    int64_t v14 = 256 * (int64_t)(v10 | (char)(v2 / 256)) | v2 & -0xff01; // 0x264bc2
    int32_t * v15 = (int32_t *)(v3 - 85); // 0x264c34
    uint32_t v16 = *v15; // 0x264c34
    int32_t v17 = v14; // 0x264c34
    uint32_t v18 = v16 + v17; // 0x264c34
    *v15 = v18;
    *(int32_t *)v4 = __asm_insd((int16_t)a3);
    if (((v18 ^ v16) & (v18 ^ v17)) >= 0) {
        int32_t * v19 = (int32_t *)(a4 - 118); // 0x264c3f
        *v19 = *v19 + (int32_t)v1;
        return 0x1e85839;
    }
    int64_t result = result2 & -256 | (int64_t)*(char *)0x1e800b3404cc80a; // 0x264be4
    result2 = result;
    if (v18 < v16 || v18 == 0) {
        // 0x264bd8
        return result;
    }
    // 0x264bf0
    *(int32_t *)0x3c28dbf7 = *(int32_t *)0x3c28dbf7 + (int32_t)v4;
    int32_t * v20 = (int32_t *)(a3 + 0x720ad825); // 0x264bfd
    int32_t v21 = (int64_t)&v5; // 0x264bfd
    *v20 = *v20 + v21;
    int64_t v22; // 0x264b67
    v4 = v22;
    result2 = (a4 / 256 + 147) % 256 | 0x1c7ffe00;
    int32_t v23 = v22;
    int32_t v24 = v1; // 0x264c08
    int32_t v25 = v23 + v24; // 0x264c08
    *(int32_t *)v22 = v25;
    if (v25 < 0 == ((v25 ^ v23) & (v25 ^ v24)) < 0 != v25 != 0) {
        // 0x264c0d
        __asm_psrlq(v1, *(int64_t *)(result2 & -0xff01 | 0xec00));
        return unknown_62f91518();
    }
    char * v26 = (char *)((4 * (v4 + a3) & 0x3fffffffc) + v14); // 0x264c64
    *v26 = *v26 + (char)(result2 / 256);
    *(int32_t *)v4 = *(int32_t *)&v22 + v21;
    return result2;
}

// Address range: 0x264c75 - 0x264c78
int64_t function_264c75(int64_t a1) {
    // 0x264c75
    int64_t result; // 0x264c75
    return result;
}

// Address range: 0x264c8a - 0x264c8d
int64_t function_264c8a(void) {
    // 0x264c8a
    int64_t result; // 0x264c8a
    return result;
}

// Address range: 0x264cd1 - 0x264cd2
int64_t function_264cd1(int64_t a1) {
    // 0x264cd1
    int64_t result; // 0x264cd1
    return result;
}

// Address range: 0x264dab - 0x264e28
int64_t function_264dab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_2db709(); // 0x264e03
    uint32_t v2 = (int32_t)a4 % 32; // 0x264e0d
    bool v3 = (int32_t)v1 == 0x44c07f01; // 0x264e0d
    int64_t v4 = a3; // 0x264e0d
    if (v2 != 0) {
        uint32_t v5 = (int32_t)a3 >> v2; // 0x264e0d
        v3 = v5 == 0;
        v4 = v5;
    }
    int64_t result = 256 * a4 & 0xff00 ^ a4 & 0xffffffff; // 0x264e0f
    if ((v1 & 0xffffffff) != 1 == v3) {
        // 0x264e24
        *(int32_t *)a1 = __asm_insd((int16_t)v4);
        return a4 & 151 | result & 0xffffff00 | 104;
    }
    char * v6 = (char *)v4; // 0x264e13
    *v6 = *v6 + (char)a4;
    return result;
}

// Address range: 0x264e2f - 0x264e31
int64_t function_264e2f(void) {
    // 0x264e2f
    int64_t result; // 0x264e2f
    return result;
}

// Address range: 0x264e38 - 0x264e3b
int64_t function_264e38(void) {
    // 0x264e38
    int64_t result; // 0x264e38
    return result;
}

// Address range: 0x264e80 - 0x264e83
int64_t function_264e80(int64_t a1) {
    // 0x264e80
    int64_t result; // 0x264e80
    return result;
}

// Address range: 0x264ef4 - 0x264ef9
int64_t function_264ef4(int64_t a1, int64_t a2) {
    // 0x264ef4
    int64_t result; // 0x264ef4
    return result;
}

// Address range: 0x264f82 - 0x264f87
int64_t function_264f82(void) {
    // 0x264f82
    return function_18dc5c77();
}

// Address range: 0x26504e - 0x265053
int64_t function_26504e(void) {
    // 0x26504e
    return function_4228d71a();
}

// Address range: 0x2650cf - 0x2650d4
int64_t function_2650cf(void) {
    // 0x2650cf
    return function_ffffffffde2a3660();
}

// Address range: 0x26510b - 0x26511e
int64_t function_26510b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26510b
    int64_t v1; // 0x26510b
    char * v2 = (char *)(v1 + 0x4f01e894); // 0x26510b
    char v3 = *v2; // 0x26510b
    *v2 = v3 - (char)v1;
    int32_t result = __asm_in_136((int16_t)a3); // 0x265112
    if (v1 < (int64_t)v3) {
        // 0x265176
        return result;
    }
    // 0x265115
    return unknown_62ff381e(a2 & 0xffffffff, a1 & 0xffffffff);
}

// Address range: 0x26512e - 0x265154
int64_t function_26512e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_76a9f334(); // 0x26512e
    int64_t * v2 = (int64_t *)(a1 - 0x17515ac2); // 0x265133
    *v2 = *v2 - a4;
    char * v3 = (char *)v1; // 0x265141
    *v3 = *v3 - 50;
    int64_t v4; // 0x26512e
    *(int32_t *)a1 = *(int32_t *)&v4 - (int32_t)v1;
    int32_t * v5 = (int32_t *)(a3 + 1); // 0x265148
    int64_t v6; // 0x26512e
    *v5 = *v5 + (int32_t)v6;
    int64_t v7; // 0x26512e
    int32_t v8 = *(int32_t *)&v7; // 0x26514b
    *(int32_t *)a4 = v8 - (int32_t)((v1 + a4 / 256) % 256 | v1 & 0xffffff00);
    return function_ffffffff9a99361a();
}

// Address range: 0x265154 - 0x265176
int64_t function_265154(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x265154
    int64_t v1; // 0x265154
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a3;
    bool v2; // 0x265154
    int64_t v3 = v2 ? -1 : 1; // 0x265163
    int64_t v4 = v3 + a2; // 0x265163
    *(int64_t *)0xe802a87b = 0x2398c400;
    int32_t * v5 = (int32_t *)v4; // 0x265165
    *v5 = *v5 - (int32_t)v1;
    int64_t result = unknown_ffffffffac32ad6f(v3 + a1, v4, a3 & -0xff01 | (int64_t)&g6); // 0x265169
    *(int32_t *)0x2398c400 = *(int32_t *)0x2398c400 ^ 0x7a7e5608;
    return result;
}

// Address range: 0x2651df - 0x2651e0
int64_t function_2651df(void) {
    // 0x2651df
    int64_t result; // 0x2651df
    return result;
}

// Address range: 0x265237 - 0x265238
int64_t function_265237(int64_t a1) {
    // 0x265237
    int64_t result; // 0x265237
    return result;
}

// Address range: 0x26524e - 0x265265
int64_t function_26524e(int64_t a1, int64_t a2) {
    // 0x26524e
    int64_t v1; // 0x26524e
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a1;
    int64_t v3 = 0x100000000 * v2 >> 32; // 0x265255
    int32_t * v4 = (int32_t *)(v1 + 46); // 0x265257
    *v4 = *v4 + (int32_t)a2;
    __asm_int(-118);
    return v3 * v3 & 0xffffffff;
}

// Address range: 0x26531b - 0x26531c
int64_t function_26531b(void) {
    // 0x26531b
    int64_t result; // 0x26531b
    return result;
}

// Address range: 0x26531c - 0x26547b
int64_t function_26531c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3 = unknown_28747522(); // 0x26531c
    int64_t v4; // 0x26531c
    int64_t v5 = (v3 + v4) % 256 | v3 & -256; // 0x265321
    int32_t * v6 = (int32_t *)(2 * a2 + 0x5089ae5 + (v5 + v4 & 0xffffffff)); // 0x265328
    uint32_t v7 = *v6; // 0x265328
    uint32_t v8 = v7 + (int32_t)v4; // 0x265328
    *v6 = v8;
    __asm_outsb((int16_t)a3, *(char *)&v2);
    int64_t v9 = v5; // 0x265330
    if (v8 >= v7 && v8 != 0) {
        v9 = function_26531b();
    }
    int32_t * v10 = (int32_t *)(v9 - 0xaff5451); // 0x265333
    int32_t v11 = v9; // 0x265333
    *v10 = *v10 + v11;
    int64_t v12; // 0x26531c
    uint32_t v13 = v11 + (int32_t)(int64_t)&v12; // 0x26533c
    unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x26533c
    int64_t result = v13; // 0x26533c
    if (v14 % 2 != 0) {
        int32_t v15 = a1; // 0x265340
        *(int32_t *)v1 = *(int32_t *)&v1 + v15;
        __asm_out_134(-22, v13);
        int32_t * v16 = (int32_t *)(v2 - 0x7ffff9b1); // 0x265349
        *v16 = *v16 + v15;
        return result;
    }
    int64_t v17 = v9 & 0xffffffff; // 0x265339
    char v18 = __asm_in_137((int16_t)v1); // 0x265353
    char * v19 = (char *)(a4 + 82); // 0x265354
    *v19 = *v19 | v18;
    int64_t * v20 = (int64_t *)v17; // 0x26535d
    *(int64_t *)(v17 + 8) = 169;
    int64_t v21 = v17 - 8; // 0x26537a
    int64_t * v22 = (int64_t *)v21; // 0x26537e
    *v22 = a1;
    int64_t * v23 = (int64_t *)(v17 - 16); // 0x26538f
    *v23 = result & 0xffffff00 | (int64_t)v18;
    *v20 = 0x2622f6;
    *v22 = 0x59412410;
    int64_t v24 = v17 - 24; // 0x2653b1
    int64_t * v25 = (int64_t *)v24; // 0x2653b2
    int64_t v26 = *(int64_t *)(v17 + 24); // 0x2653d6
    *v23 = v26;
    int64_t * v27 = (int64_t *)(v17 - 32); // 0x2653e0
    *v27 = v24;
    *v25 = v21;
    *v25 = 0x64c5cdfc;
    *v27 = v26;
    *v22 = *v25;
    *v25 = *v20;
    *(int64_t *)(v17 + 16) = *v23;
    *v23 = v1;
    *v25 = v17;
    int64_t v28 = *v23; // 0x265454
    *v27 = v28;
    int64_t v29 = *v23; // 0x26545c
    int64_t v30 = *(int64_t *)v29; // 0x265460
    *(int64_t *)(v29 - 8) = v30;
    *(int64_t *)(v29 - 16) = v30;
    return function_caf2a(*v22, v4, v28);
}

// Address range: 0x26548a - 0x26548b
int64_t function_26548a(void) {
    // 0x26548a
    int64_t result; // 0x26548a
    return result;
}
