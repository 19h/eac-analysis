/*
 * Targeted RetDec C for native executable gap queue batch 785.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x26a824-0x26aa24 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26aa24-0x26ac24 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26ac24-0x26ae24 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26ae24-0x26b024 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26b024-0x26b224 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ce707-0x2ce907 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ce907-0x2ceb07 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ceb07-0x2ced07 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_14aa30b();
int64_t function_1c8fae9e();
int64_t function_26a824(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_26a860(void);
int64_t function_26a898(void);
int64_t function_26a89e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_26a93b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_26a99d(void);
int64_t function_26a9a5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_26aa2b(void);
int64_t function_26aa7e(int64_t a1);
int64_t function_26aa89(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26aab0(void);
int64_t function_26ab0a(void);
int64_t function_26ab29(int64_t a1, int64_t a2, int64_t a3);
int64_t function_26ab49(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26ab83(int64_t a1);
int64_t function_26abd2(int64_t a1, int64_t result, int64_t a3, int64_t a4);
int64_t function_26ac41(int64_t a1);
int64_t function_26ac45(void);
int64_t function_26ac56(void);
int64_t function_26ac5d(void);
int64_t function_26ac82(int64_t a1);
int64_t function_26ac89(int64_t a1);
int64_t function_26ac95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26acb4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_26acee(void);
int64_t function_26acf7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26ad0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26ad3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26ad68(void);
int64_t function_26ad6f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_26ad71(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26ada1(void);
int64_t function_26adb1(void);
int64_t function_26adea(void);
int64_t function_26aded(int64_t a1);
int64_t function_26ae06(int64_t a1);
int64_t function_26ae1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26ae55(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26aebc(int64_t a1);
int64_t function_26aed7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26af25(void);
int64_t function_26af47(void);
int64_t function_26af4f(void);
int64_t function_26af59(void);
int64_t function_26af64(int64_t a1, int64_t a2);
int64_t function_26afbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26afcb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26aff6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26b038(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_26b106(int64_t a1);
int64_t function_26b137(void);
int64_t function_26b16e(void);
int64_t function_26b18c(void);
int64_t function_26b1db(void);
int64_t function_26b223(void);
int64_t function_2ce707(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2ce7ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2ce8fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2cea40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ceb5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2cecb6(void);
int64_t function_3d26b9a3();
int64_t function_cf3c7();
int64_t function_ffffffff81289675();
int64_t function_ffffffff9f5b356d();
int64_t function_ffffffffb2e0d7b6();
int64_t function_ffffffffe859f873();
int64_t function_fffffffffb289819();
int64_t function_fffffffffe73acca();
int64_t unknown_1d9f2835();
int64_t unknown_1e6da2b6();
int64_t unknown_20f4773();
int64_t unknown_26f02742();
int64_t unknown_47cbb926();
int64_t unknown_792c3e30();
int64_t unknown_ffffffff9df33962();
int64_t unknown_ffffffffa6b59771();
int64_t unknown_ffffffffa7864448();
int64_t unknown_ffffffffccdbf3fe();
int64_t unknown_ffffffffdc3187ea();
int64_t unknown_fffffffff3548d53();
int64_t unknown_fffffffffa781013();

// Address range: 0x26a824 - 0x26a847
int64_t function_26a824(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x26a824
    int64_t v1; // 0x26a824
    __asm_outsb((int16_t)a3, (char)v1);
    unknown_792c3e30();
    __asm_in(-110);
    *(char *)a3 = (char)v1 - (char)(a4 / 256);
    *(int32_t *)0x10523d43 = *(int32_t *)0x10523d43 + (int32_t)a1;
    return unknown_ffffffffa7864448();
}

// Address range: 0x26a860 - 0x26a861
int64_t function_26a860(void) {
    // 0x26a860
    int64_t result; // 0x26a860
    return result;
}

// Address range: 0x26a898 - 0x26a899
int64_t function_26a898(void) {
    // 0x26a898
    int64_t result; // 0x26a898
    return result;
}

// Address range: 0x26a89e - 0x26a93a
int64_t function_26a89e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int32_t v3 = a4;
    int64_t result; // 0x26a89e
    bool v4; // 0x26a89e
    *(int32_t *)a4 = (int32_t)result + v3 + (int32_t)v4;
    if ((int32_t)result >= -0x70dda7ff) {
        // 0x26a915
        return result;
    }
    int64_t v5 = __asm_iretd(a1, v2, v1); // 0x26a8a8
    char * v6 = (char *)(v2 - 0x70c2ff15); // 0x26a8ab
    *v6 = *v6 ^ (char)v5;
    uint32_t v7 = *(int32_t *)&v2; // 0x26a8b1
    v2 += (v4 ? -4 : 4);
    *(char *)a1 = (char)v7;
    int64_t v8 = v7; // 0x26a8c6
    if ((char)(v7 < 0x98970001) + (char)(a4 / 256) > (char)((result - (a4 & 0xff00)) / 256)) {
        v8 = function_26a860();
    }
    unsigned char v9 = *(char *)0x4e4518d5; // 0x26a8ce
    unsigned char v10 = v9 + (char)(((int64_t)&g1 | 43) >> 8); // 0x26a8ce
    *(char *)0x4e4518d5 = v10;
    uint32_t v11 = (int32_t)v8 - 0x504006c6 + (int32_t)(v10 < v9); // 0x26a8d4
    char v12 = v11; // 0x26a8d4
    int64_t result2 = v11; // 0x26a8d4
    if (llvm_ctpop_i8(v12) % 2 != 0) {
        // 0x26a919
        *(char *)v1 = *(char *)&v1 + v12;
        *(int32_t *)v1 = v3;
        return result2;
    }
    int16_t v13 = v1;
    char v14 = __asm_in_133(v13); // 0x26a924
    int64_t v15 = v14; // 0x26a924
    __asm_out(v13, v14);
    *(int32_t *)-0x7f4effca = *(int32_t *)-0x7f4effca ^ -0x51db355e;
    int64_t result3 = (v1 / 256 + v15) % 256 | (v15 | result2) & -256; // 0x26a935
    int32_t v16 = result3; // 0x26a938
    __asm_out_134(v13, v16);
    __asm_out_134(v13, v16);
    return result3;
}

// Address range: 0x26a93b - 0x26a967
int64_t function_26a93b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x26a93b
    int64_t v1; // 0x26a93b
    uint64_t v2 = v1;
    int64_t v3 = v1 + 0x93937850; // 0x26a93b
    char * v4 = (char *)(4 * v2 - 0x3b4eff2d + (v3 & 0xffffffff)); // 0x26a940
    *v4 = *v4 + (char)v3;
    *(char *)-0x2d10f2b2 = *(char *)-0x2d10f2b2 + (char)(v2 / 256);
    *(char *)a1 = __asm_insb((int16_t)a3);
    int32_t v5 = __asm_in_135(69); // 0x26a956
    *(int32_t *)v2 = *(int32_t *)(a1 - 79 + 8 * v2) + (int32_t)a4;
    return v5 ^ 11;
}

// Address range: 0x26a99d - 0x26a9a0
int64_t function_26a99d(void) {
    // 0x26a99d
    int64_t result; // 0x26a99d
    return result;
}

// Address range: 0x26a9a5 - 0x26aa29
int64_t function_26a9a5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x26a9a5
    int64_t v1; // 0x26a9a5
    int64_t v2 = v1;
    return (v2 + 45) % 256 | v2 & -256;
}

// Address range: 0x26aa2b - 0x26aa2c
int64_t function_26aa2b(void) {
    // 0x26aa2b
    int64_t result; // 0x26aa2b
    return result;
}

// Address range: 0x26aa7e - 0x26aa88
int64_t function_26aa7e(int64_t a1) {
    // 0x26aa7e
    return unknown_20f4773(a1) & -0xff01 | (int64_t)"many_avx512";
}

// Address range: 0x26aa89 - 0x26aaa3
int64_t function_26aa89(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26aa89
    bool v1; // 0x26aa89
    if (v1) {
        // 0x26aa8b
        return function_14aa30b();
    }
    // 0x26aa9e
    *(int32_t *)a4 = (int32_t)a4 + (int32_t)a3;
    int64_t result; // 0x26aa89
    return result;
}

// Address range: 0x26aab0 - 0x26aab6
int64_t function_26aab0(void) {
    // 0x26aab0
    return unknown_1e6da2b6();
}

// Address range: 0x26ab0a - 0x26ab0b
int64_t function_26ab0a(void) {
    // 0x26ab0a
    int64_t result; // 0x26ab0a
    return result;
}

// Address range: 0x26ab29 - 0x26ab2d
int64_t function_26ab29(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 119); // 0x26ab29
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x26ab29
    return result;
}

// Address range: 0x26ab49 - 0x26ab60
int64_t function_26ab49(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_fffffffff3548d53(); // 0x26ab4d
    char * v1 = (char *)result; // 0x26ab56
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x26ab83 - 0x26ab8c
int64_t function_26ab83(int64_t a1) {
    // 0x26ab83
    bool v1; // 0x26ab83
    if (true == !v1) {
        function_26ab0a();
    }
    int64_t v2 = __asm_wait(); // 0x26ab85
    int64_t v3; // 0x26ab83
    int64_t result = v2 & -256 | (int64_t)((char)v2 - *(char *)(v3 + 61)); // 0x26ab86
    int32_t * v4 = (int32_t *)result; // 0x26ab89
    *v4 = *v4 + (int32_t)result;
    return result;
}

// Address range: 0x26abd2 - 0x26ac12
int64_t function_26abd2(int64_t a1, int64_t result, int64_t a3, int64_t a4) {
    // 0x26abd2
    int64_t result2; // 0x26abd2
    bool v1; // 0x26abd2
    if (v1) {
        char v2 = *(char *)0x30f93208; // 0x26ac01
        *(char *)0x30f93208 = v2 + (char)((uint64_t)result2 / 256);
        return result;
    }
    // 0x26abd4
    return result2;
}

// Address range: 0x26ac41 - 0x26ac42
int64_t function_26ac41(int64_t a1) {
    // 0x26ac41
    int64_t result; // 0x26ac41
    return result;
}

// Address range: 0x26ac45 - 0x26ac51
int64_t function_26ac45(void) {
    // 0x26ac45
    int64_t v1; // 0x26ac45
    int32_t * v2 = (int32_t *)(v1 - 0x45a0ffd2); // 0x26ac45
    *v2 = *v2 + (int32_t)v1;
    return function_fffffffffe73acca();
}

// Address range: 0x26ac56 - 0x26ac57
int64_t function_26ac56(void) {
    // 0x26ac56
    int64_t result; // 0x26ac56
    return result;
}

// Address range: 0x26ac5d - 0x26ac5e
int64_t function_26ac5d(void) {
    // 0x26ac5d
    int64_t result; // 0x26ac5d
    return result;
}

// Address range: 0x26ac82 - 0x26ac87
int64_t function_26ac82(int64_t a1) {
    // 0x26ac82
    int64_t result; // 0x26ac82
    bool v1; // 0x26ac82
    if (v1 || false) {
        result = function_26ac5d();
    }
    // 0x26ac84
    return result;
}

// Address range: 0x26ac89 - 0x26ac8c
int64_t function_26ac89(int64_t a1) {
    // 0x26ac89
    int64_t result; // 0x26ac89
    return result;
}

// Address range: 0x26ac95 - 0x26acb0
int64_t function_26ac95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x26ac95
    int64_t v1; // 0x26ac95
    int64_t v2 = v1;
    int32_t v3 = (v2 + 97) % 256 | v2 & 0xffffff00; // 0x26ac99
    int32_t v4 = v1;
    int32_t v5 = v3 + v4; // 0x26ac99
    if (v5 < 0 == ((v5 ^ v3) & (v5 ^ v4)) < 0 == (v5 != 0)) {
        function_26ac56();
    }
    // 0x26aca6
    return __asm_rsm();
}

// Address range: 0x26acb4 - 0x26ace7
int64_t function_26acb4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x26acb4
    int64_t v1; // 0x26acb4
    int32_t * v2 = (int32_t *)(v1 + 40); // 0x26acbf
    *v2 = *v2 + (int32_t)a1;
    int32_t v3 = *(int32_t *)(a3 + 0x39000d3); // 0x26acc2
    int32_t v4 = a3;
    uint32_t v5 = 16 * v4; // 0x26acce
    *(char *)a4 = (char)v5;
    int64_t v6 = a3 / 256 + (int64_t)v5; // 0x26acd3
    uint32_t v7 = v5 & -256;
    *(int32_t *)(-98 * (int64_t)v3 & 0xfffffffe) = (int32_t)v6 % 256 | v7;
    int32_t * v8 = (int32_t *)(a4 - 40); // 0x26acdb
    uint32_t v9 = *v8; // 0x26acdb
    *v8 = v9 / 16;
    int32_t * v10 = (int32_t *)(a3 - 0x17c04dc3); // 0x26ace1
    *v10 = *v10 + v4;
    return (v6 + 157 + (int64_t)((v9 & 8) != 0)) % 256 | (int64_t)v7;
}

// Address range: 0x26acee - 0x26acf1
int64_t function_26acee(void) {
    // 0x26acee
    int64_t result; // 0x26acee
    return result;
}

// Address range: 0x26acf7 - 0x26ad01
int64_t function_26acf7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26acf7
    int64_t result; // 0x26acf7
    if (a4 == 1) {
        // 0x26acf9
        int3_t v1; // 0x26acf7
        float80_t v2 = __frontend_reg_load_fpr(v1); // 0x26acf9
        __frontend_reg_store_fpr(v1, v2 + (float80_t)*(float64_t *)(result - 0x1574eb87));
    }
    // 0x26ad00
    return result;
}

// Address range: 0x26ad0b - 0x26ad37
int64_t function_26ad0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_fffffffffa781013(); // 0x26ad0d
    int32_t * v2 = (int32_t *)(a3 + 43); // 0x26ad19
    *v2 = *v2 + (int32_t)v1;
    *(int32_t *)0xa6a0787f = *(int32_t *)0xa6a0787f - 0x595f8781;
    return function_ffffffffe859f873();
}

// Address range: 0x26ad3b - 0x26ad3c
int64_t function_26ad3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26ad3b
    int64_t result; // 0x26ad3b
    return result;
}

// Address range: 0x26ad68 - 0x26ad6a
int64_t function_26ad68(void) {
    // 0x26ad68
    int64_t v1; // 0x26ad68
    return function_26ad3b(v1, v1, v1, v1);
}

// Address range: 0x26ad6f - 0x26ad71
int64_t function_26ad6f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x26ad6f
    int64_t result; // 0x26ad6f
    *(char *)a3 = 2 * (char)result;
    return result;
}

// Address range: 0x26ad71 - 0x26ad74
int64_t function_26ad71(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26ad71
    int64_t result; // 0x26ad71
    bool v1; // 0x26ad71
    if (a4 != 1 == v1) {
        result = function_26ad3b(a1, a2, a3, a4);
    }
    // 0x26ad74
    return result;
}

// Address range: 0x26ada1 - 0x26ada7
int64_t function_26ada1(void) {
    // 0x26ada1
    return function_ffffffff81289675();
}

// Address range: 0x26adb1 - 0x26adb3
int64_t function_26adb1(void) {
    // 0x26adb1
    int64_t result; // 0x26adb1
    return result;
}

// Address range: 0x26adea - 0x26adeb
int64_t function_26adea(void) {
    // 0x26adea
    int64_t result; // 0x26adea
    return result;
}

// Address range: 0x26aded - 0x26adf3
int64_t function_26aded(int64_t a1) {
    // 0x26aded
    return function_1c8fae9e(a1);
}

// Address range: 0x26ae06 - 0x26ae10
int64_t function_26ae06(int64_t a1) {
    // 0x26ae06
    int64_t result; // 0x26ae06
    return result;
}

// Address range: 0x26ae1e - 0x26ae37
int64_t function_26ae1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26ae1e
    bool v1; // 0x26ae1e
    if (v1 || v1) {
        function_26adea();
    }
    int64_t v2 = unknown_47cbb926(); // 0x26ae20
    float80_t v3; // 0x26ae1e
    *(int32_t *)a2 = (int32_t)v3;
    return unknown_1d9f2835((int32_t)v2 + (int32_t)a1);
}

// Address range: 0x26ae55 - 0x26ae7b
int64_t function_26ae55(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26ae55
    int64_t v1; // 0x26ae55
    *(char *)(a3 - 120) = (char)(v1 / 256);
    int32_t * v2 = (int32_t *)(v1 - 20); // 0x26ae58
    *v2 = *v2 | (int32_t)v1;
    unknown_ffffffff9df33962();
    int64_t v3; // 0x26ae55
    *(int32_t *)a2 = *(int32_t *)&v3 + (int32_t)a4;
    int64_t * v4 = (int64_t *)(v1 + 8); // 0x26ae66
    int32_t v5 = __asm_insd((int16_t)a3); // 0x26ae6a
    int32_t * v6 = (int32_t *)*v4; // 0x26ae6a
    *v6 = v5;
    int64_t v7 = unknown_ffffffffa6b59771(); // 0x26ae6b
    *v4 = a3;
    int32_t v8 = *v6; // 0x26ae75
    *v6 = 2 * v8 | (int32_t)(v8 < 0);
    return (v7 + 122) % 256 | v7 & -256;
}

// Address range: 0x26aebc - 0x26aebd
int64_t function_26aebc(int64_t a1) {
    // 0x26aebc
    int64_t result; // 0x26aebc
    return result;
}

// Address range: 0x26aed7 - 0x26aedc
int64_t function_26aed7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26aed7
    int64_t result; // 0x26aed7
    return result;
}

// Address range: 0x26af25 - 0x26af2f
int64_t function_26af25(void) {
    // 0x26af25
    return function_fffffffffb289819();
}

// Address range: 0x26af47 - 0x26af48
int64_t function_26af47(void) {
    // 0x26af47
    int64_t result; // 0x26af47
    return result;
}

// Address range: 0x26af4f - 0x26af52
int64_t function_26af4f(void) {
    // 0x26af4f
    int64_t result; // 0x26af4f
    return result;
}

// Address range: 0x26af59 - 0x26af62
int64_t function_26af59(void) {
    // 0x26af59
    function_26af47();
    return function_3d26b9a3();
}

// Address range: 0x26af64 - 0x26af6c
int64_t function_26af64(int64_t a1, int64_t a2) {
    // 0x26af64
    int64_t result; // 0x26af64
    return result;
}

// Address range: 0x26afbc - 0x26afc6
int64_t function_26afbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26afbc
    int64_t result; // 0x26afbc
    char * v1 = (char *)(result - 0x1705fda1); // 0x26afbc
    bool v2; // 0x26afbc
    *v1 = (char)v2 - (char)result + *v1;
    int64_t v3; // 0x26afbc
    *(int32_t *)a3 = *(int32_t *)&v3 + (int32_t)result;
    return result;
}

// Address range: 0x26afcb - 0x26aff4
int64_t function_26afcb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffdc3187ea(); // 0x26afe4
    int64_t v1; // 0x26afcb
    int64_t * v2 = (int64_t *)(v1 + 89); // 0x26afeb
    bool v3; // 0x26afcb
    *v2 = *v2 - (v3 ? -0x4a77fe17 : -0x4a77fe18);
    return result;
}

// Address range: 0x26aff6 - 0x26b038
int64_t function_26aff6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffccdbf3fe(); // 0x26aff8
    *(int32_t *)a3 = (int32_t)a1;
    int64_t v2 = 0x100000000 * ((v1 & 0xffffff47) + a4) >> 32; // 0x26b004
    uint64_t v3 = v2 * v2; // 0x26b004
    uint64_t v4 = v3 / 0x100000000; // 0x26b004
    int32_t * v5 = (int32_t *)((v3 & 0xffffffff) - 0x5adeb694); // 0x26b006
    *v5 = *v5 + (int32_t)a2;
    int64_t v6; // 0x26aff6
    int32_t * v7 = (int32_t *)(v6 - 0x3fffd757); // 0x26b011
    *v7 = *v7 + (int32_t)a4;
    int64_t v8; // 0x26aff6
    *(int32_t *)v8 = *(int32_t *)&v8 + (int32_t)v6;
    int32_t * v9 = (int32_t *)(v4 - 0x55aa05fe); // 0x26b029
    *v9 = *v9 ^ 0x4b4601e8;
    return __asm_iretd(0xe8d8b368, v6 + a2 & 0xffffffff, v4);
}

// Address range: 0x26b038 - 0x26b056
int64_t function_26b038(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x26b038
    *(char *)a4 = (char)(a4 / 256);
    int64_t v1 = unknown_26f02742(); // 0x26b03c
    char * v2 = (char *)(v1 + 0x4add1000); // 0x26b041
    *v2 = *v2 + (char)v1;
    int32_t * v3 = (int32_t *)(a3 + 1); // 0x26b049
    int64_t v4; // 0x26b038
    *v3 = *v3 + (int32_t)v4;
    return function_ffffffffb2e0d7b6();
}

// Address range: 0x26b106 - 0x26b10a
int64_t function_26b106(int64_t a1) {
    // 0x26b106
    int64_t result; // 0x26b106
    return result;
}

// Address range: 0x26b137 - 0x26b13a
int64_t function_26b137(void) {
    // 0x26b137
    int64_t result; // 0x26b137
    return result;
}

// Address range: 0x26b16e - 0x26b16f
int64_t function_26b16e(void) {
    // 0x26b16e
    int64_t result; // 0x26b16e
    return result;
}

// Address range: 0x26b18c - 0x26b197
int64_t function_26b18c(void) {
    char v1 = *(char *)0x14eba893; // 0x26b18c
    int64_t v2; // 0x26b18c
    *(char *)0x14eba893 = v1 + (char)((uint64_t)v2 / 256);
    return function_ffffffff9f5b356d();
}

// Address range: 0x26b1db - 0x26b1dd
int64_t function_26b1db(void) {
    // 0x26b1db
    return function_26b16e();
}

// Address range: 0x26b223 - 0x26b224
int64_t function_26b223(void) {
    // 0x26b223
    int64_t result; // 0x26b223
    return result;
}

// Address range: 0x2ce707 - 0x2ce7ba
int64_t function_2ce707(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2ce707
    int64_t v1; // bp+16, 0x2ce707
    int64_t v2 = (int64_t)&v1; // 0x2ce75d
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x2ce77b
    int64_t v4 = *v3; // 0x2ce77b
    v1 = v4;
    *(int64_t *)(v2 - 8) = v4;
    *v3 = v2 + 24;
    int64_t v5; // 0x2ce707
    return function_cf3c7(v5, v5, v5, v5, v5, v5, a3);
}

// Address range: 0x2ce7ba - 0x2ce8fb
int64_t function_2ce7ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2ce7ba
    int64_t v1; // bp-48, 0x2ce7ba
    int64_t v2 = (int64_t)&v1; // 0x2ce850
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2ce8ad
    *v3 = 0x2b74eb;
    *(int64_t *)(v2 + 32) = v1;
    int64_t v4 = v2 + 8; // 0x2ce8b0
    int64_t * v5 = (int64_t *)v4; // 0x2ce8b4
    *v3 = *v5;
    v1 = v2 + 16;
    v1 = *v5;
    *v3 = v4;
    return function_cf3c7(a1, a2, 0x155ab809, a4, a5, a6, a7);
}

// Address range: 0x2ce8fb - 0x2cea40
int64_t function_2ce8fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0xeed8ef1; // bp-32, 0x2ce95a
    int64_t v2 = (int64_t)&v1; // 0x2ce98b
    int64_t v3 = v2 + 16; // 0x2ce993
    int64_t * v4 = (int64_t *)v3; // 0x2ce993
    int64_t v5 = v2 - 16; // 0x2ce997
    int64_t * v6 = (int64_t *)v5; // 0x2ce997
    *v6 = v5;
    *(int64_t *)(v2 - 8) = a7;
    *v4 = v1;
    *v6 = a2;
    *(int64_t *)(v2 + 32) = *v4;
    v1 = v3;
    int64_t v7 = *v4; // 0x2cea22
    *(int64_t *)(v2 + 8) = v7;
    v1 = v7;
    return function_cf3c7(a1, a2, a3, a4, a5, a6, v7);
}

// Address range: 0x2cea40 - 0x2ceb5c
int64_t function_2cea40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x26ba517e; // bp-40, 0x2ceaf1
    int64_t v2; // 0x2cea40
    return function_cf3c7(a1, a2, a3, a4, a5, v2, (int64_t)&v1);
}

// Address range: 0x2ceb5c - 0x2cec98
int64_t function_2ceb5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ceb5c
    int64_t v1; // 0x2ceb5c
    return function_cf3c7(a1, a2, a3, a4, a5, v1, 0x4c5093d7);
}

// Address range: 0x2cecb6 - 0x2cecb7
int64_t function_2cecb6(void) {
    // 0x2cecb6
    int64_t result; // 0x2cecb6
    return result;
}
