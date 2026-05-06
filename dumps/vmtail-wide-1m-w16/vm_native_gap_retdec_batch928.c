/*
 * Targeted RetDec C for native executable gap queue batch 928.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x24aa7d-0x24ab7d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24ab7d-0x24ad7d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24ad7d-0x24af7d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24af7d-0x24b17d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24b17d-0x24b37d rank=- name=- kind=- bytes=- uncovered=-
 *   0x3245bb-0x3246bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3246bb-0x3248bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x324abb-0x324cbb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_24aa7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24ab2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24ac02(int64_t a1);
int64_t function_24ac23(void);
int64_t function_24ac34(int64_t a1);
int64_t function_24ac43(void);
int64_t function_24ac74(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_24ae54(int64_t a1, int64_t a2);
int64_t function_24aee1(void);
int64_t function_24aeff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24afa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24afcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24afd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24aff6(void);
int64_t function_24affa(void);
int64_t function_24b016(void);
int64_t function_24b047(void);
int64_t function_24b052(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24b068(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24b0e7(void);
int64_t function_24b104(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24b10a(int64_t a1);
int64_t function_24b120(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24b1a3(void);
int64_t function_24b1e1(void);
int64_t function_24b260(void);
int64_t function_24b26a(void);
int64_t function_24b299(void);
int64_t function_24b29e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_24b315(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24b35f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24b3bb();
int64_t function_3245bb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3245ee(void);
int64_t function_32466d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3246be(int64_t a1);
int64_t function_3246e7(void);
int64_t function_324719(int64_t a1);
int64_t function_32475d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3247ac(void);
int64_t function_3247c3(int64_t a1);
int64_t function_3247c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32485e(int64_t a1);
int64_t function_324a75();
int64_t function_324abb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_324adf(int64_t a1);
int64_t function_324ae7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_324ba6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_324be1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_324c66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_52eab1ed();
int64_t function_ffffffffa03511bb();
int64_t function_ffffffffb5185adf();
int64_t function_ffffffffe915b6c9();
int64_t unknown_131aa7d1();
int64_t unknown_15201711();
int64_t unknown_238d3b37();
int64_t unknown_32b0be75();
int64_t unknown_35230f2();
int64_t unknown_3a26ab4d();
int64_t unknown_3ce56b63();
int64_t unknown_3d342dcf();
int64_t unknown_5959038();
int64_t unknown_7e2c3ec6();
int64_t unknown_ffffffffab574f58();
int64_t unknown_ffffffffad8f0b41();
int64_t unknown_ffffffffb1ea761b();
int64_t unknown_ffffffffb3ba455d();
int64_t unknown_ffffffffcddee631();
int64_t unknown_ffffffffce6b8171();
int64_t unknown_ffffffffd4cc6baf();
int64_t unknown_ffffffffd9146a73();
int64_t unknown_ffffffffdb8db3bb();
int64_t unknown_fffffffff97f9903();
int64_t unknown_fffffffffe26afe8();

// Address range: 0x24aa7d - 0x24aa84
int64_t function_24aa7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24aa7d
    int64_t v1; // 0x24aa7d
    uint32_t v2 = (int32_t)v1; // 0x24aa80
    uint32_t v3 = (int32_t)v1;
    int32_t v4 = v2 - v3; // 0x24aa80
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x24aa80
    return __asm_iretd() & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v2 < v3) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v2 % 16 - v3 % 16 > 15) | 4 * (int64_t)(v5 % 2 == 0)) | 512;
}

// Address range: 0x24ab2c - 0x24abf4
int64_t function_24ab2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24ab2c
    int64_t v1; // 0x24ab2c
    int32_t * v2 = (int32_t *)(v1 + 26); // 0x24ab2e
    *v2 = *v2 + (int32_t)v1;
    int64_t v3 = unknown_238d3b37(); // 0x24ab31
    int32_t * v4 = (int32_t *)(2 * a3 - 0x71fe1756 + v1); // 0x24ab36
    *v4 = *v4 + (int32_t)v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    char * v5 = (char *)v3; // 0x24ab44
    char v6 = *v5; // 0x24ab44
    char v7 = v3; // 0x24ab44
    char v8 = v6 + v7; // 0x24ab44
    *v5 = v8;
    int64_t result = unknown_3a26ab4d(); // 0x24ab46
    int64_t v9 = 13; // bp-8, 0x24ab4c
    if (v8 < 0 != ((v8 ^ v6) & (v8 ^ v7)) < 0) {
        // 0x24abc7
        __asm_out(-72, (char)result);
        return result;
    }
    int32_t v10 = *(int32_t *)(a3 + 0x4d0db52a) + (int32_t)a3; // 0x24ab3e
    *(int32_t *)a1 = __asm_insd((int16_t)v10);
    int64_t v11 = (int64_t)&v9;
    int64_t v12; // 0x24ab2c
    uint64_t v13 = v12;
    uint64_t v14 = unknown_ffffffffab574f58(); // 0x24ab52
    unsigned char v15 = (char)(v13 / 256);
    unsigned char v16 = (char)(v14 / 256);
    unsigned char v17 = v16 + v15; // 0x24ab57
    int64_t v18 = 256 * (int64_t)v17 | v13 & -0xff01; // 0x24ab57
    int64_t v19 = v14 & 0xffffffff; // 0x24ab59
    *(char *)-0x2477f7effe17f922 = (char)v11;
    while (((v17 ^ v15) & (v17 ^ v16)) < 0) {
        // 0x24ab51
        v11 = v19;
        v13 = v18;
        v14 = unknown_ffffffffab574f58();
        v15 = (char)(v13 / 256);
        v16 = (char)(v14 / 256);
        v17 = v16 + v15;
        v18 = 256 * (int64_t)v17 | v13 & -0xff01;
        v19 = v14 & 0xffffffff;
        *(char *)-0x2477f7effe17f922 = (char)v11;
    }
    uint64_t v20 = 256 * (64 * (int64_t)(v17 == 0) | (int64_t)(v17 < v15) | 128 * (int64_t)(v17 < 0) | 16 * (int64_t)(v16 % 16 + v15 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v17) % 2 == 0)) | 512; // 0x24ab63
    int64_t v21 = v20 | v11 & 0xffff00ff; // 0x24ab63
    int64_t v22 = v18 & 0xffffffff; // 0x24ab64
    int32_t * v23 = (int32_t *)(a1 - 0x7fffdb39); // 0x24ab69
    *v23 = *v23 + (int32_t)v14;
    char * v24 = (char *)(v21 + 0x62004b1c); // 0x24ab6f
    *v24 = *v24 + (char)(v20 / 256);
    int32_t * v25 = (int32_t *)(v22 - 84 + (v21 + v1 & 0xffffffff)); // 0x24ab77
    *v25 = *v25 + v10;
    int64_t result2 = __asm_iretd(); // 0x24ab81
    *(char *)v22 = (char)v13;
    char * v26 = (char *)(8 * a1 - 24 + v19); // 0x24ab84
    char v27 = *v26 ^ 1; // 0x24ab84
    *v26 = v27;
    if (v27 != 0) {
        // 0x24aba8
        return result2;
    }
    // 0x24ab97
    *(int32_t *)result2 = (int32_t)result2;
    return result2;
}

// Address range: 0x24ac02 - 0x24ac15
int64_t function_24ac02(int64_t a1) {
    // 0x24ac02
    int64_t v1; // 0x24ac02
    char * v2 = (char *)(v1 - 0xd9efe18); // 0x24ac0a
    *v2 = *v2 | (char)(v1 / 256);
    return function_ffffffffb5185adf();
}

// Address range: 0x24ac23 - 0x24ac26
int64_t function_24ac23(void) {
    // 0x24ac23
    int64_t result; // 0x24ac23
    return result;
}

// Address range: 0x24ac34 - 0x24ac35
int64_t function_24ac34(int64_t a1) {
    // 0x24ac34
    int64_t result; // 0x24ac34
    return result;
}

// Address range: 0x24ac43 - 0x24ac44
int64_t function_24ac43(void) {
    // 0x24ac43
    int64_t result; // 0x24ac43
    return result;
}

// Address range: 0x24ac74 - 0x24ae53
int64_t function_24ac74(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x24ac74
    int64_t v1; // 0x24ac74
    int64_t v2 = v1;
    int64_t v3 = v1;
    char v4 = a4; // 0x24ac74
    bool v5; // 0x24ac74
    *(char *)a4 = (char)v1 + v4 + (char)v5;
    int32_t * v6 = (int32_t *)(v1 + 0x7a34bb8f); // 0x24ac76
    *v6 = *v6 & (int32_t)v2;
    int64_t v7 = (v3 + v2) % 256 | v2 & -256; // 0x24ac7c
    uint32_t v8 = (int32_t)a4; // 0x24ac80
    *(int32_t *)v3 = (int32_t)v3 + v8;
    int64_t v9 = v3 & 0x970a54c9 | 0x68f5ab36; // 0x24ac82
    char * v10 = (char *)v9; // 0x24ac87
    *v10 = *v10 + (char)v9;
    char * v11 = (char *)(v7 + 17); // 0x24ac94
    *v11 = *v11 + v4 + (char)(*(int32_t *)(v9 - 0x740a1f51) < v8);
    int64_t v12 = v5 ? -1 : 1; // 0x24ac9e
    int64_t v13 = 2 * v12 + a1; // 0x24ac9f
    int64_t v14; // 0x24ac74
    char v15 = *(char *)&v14; // 0x24aca0
    int64_t v16 = 256 * (int64_t)(v15 | (char)(a3 / 256)) | a3 & -0xff01; // 0x24aca0
    *(char *)0x1005eb873a087c8a = (char)v3 | 62;
    int64_t v17 = a4 - 1; // 0x24acc3
    v14 = v17;
    unsigned char v18 = (char)a6; // 0x24acc5
    unsigned char v19 = (char)a3; // 0x24acc5
    char v20 = v18 + v19; // 0x24acc5
    unsigned char v21 = llvm_ctpop_i8(v20); // 0x24acc5
    uint32_t v22 = *(int32_t *)v16; // 0x24acc7
    unsigned char v23 = *(char *)v17; // 0x24acca
    int32_t * v24 = (int32_t *)((a6 & -0x10000 | 0x4000 * (int64_t)(v20 == 0) | 0x8000 * (int64_t)(v20 < 0) | 0x1000 * (int64_t)(v18 % 16 + v19 % 16 > 15) | 1024 * (int64_t)(v21 % 2 == 0) | (int64_t)v23 | 512) + 0x45a9212c); // 0x24ad4b
    *v24 = *v24 + (int32_t)v1;
    int16_t v25 = v16; // 0x24ad51
    if ((__asm_in(v25) & 46) != 0) {
        int64_t v26 = unknown_ffffffffb3ba455d(); // 0x24ad57
        *(int32_t *)0xd90a46c = *(int32_t *)0xd90a46c + (int32_t)v13;
        return v7 + 0xe8322c7e + (2 * v26 & 254 | v26 & 0xffffff00) & 0xffffffff;
    }
    int64_t v27 = v22; // 0x24acc7
    v14 = v14 & -0xff01 | (int64_t)&g2;
    int3_t v28; // 0x24ac74
    *(float32_t *)(a2 + 0x1e80095 + v12) = (float32_t)__frontend_reg_load_fpr(v28);
    int3_t v29 = v28 + 1; // 0x24ada4
    int64_t v30 = unknown_ffffffffdb8db3bb(); // 0x24adb4
    char * v31 = (char *)(v14 + 2 * v1); // 0x24adbc
    *v31 = *v31 ^ (char)(v22 / 256);
    __asm_out_133(v25, (char)v30);
    unknown_7e2c3ec6();
    float80_t v32 = __frontend_reg_load_fpr(v29); // 0x24adc5
    __frontend_reg_store_fpr(v29, v32 - (float80_t)*(float64_t *)(v7 + 0x7709efb3));
    unknown_131aa7d1();
    char * v33 = (char *)(v27 - 84); // 0x24add0
    *v33 = *v33 | (char)v14;
    int32_t * v34 = (int32_t *)(v13 + 73); // 0x24add5
    *v34 = *v34 + 0x3a8dc325;
    int32_t v35 = v22 + 0x3a8dc325; // 0x24ade2
    if (v35 < 0 == (v35 & (v22 ^ -0x80000000)) < 0) {
        int64_t result = unknown_ffffffffad8f0b41(); // 0x24ae3b
        char * v36 = (char *)(v13 - 111); // 0x24ae40
        *v36 = *v36 + (char)a7;
        return result;
    }
    int64_t result2 = __asm_wait(); // 0x24ade6
    __frontend_reg_store_fpr(v29, __frontend_reg_load_fpr(v29) + (float80_t)*(float32_t *)v27);
    int64_t v37 = v14 - 1; // 0x24ade9
    v14 = v37;
    if (v37 == 0) {
        // 0x24adeb
        __asm_wait();
        return unknown_35230f2();
    }
    char * v38 = (char *)result2; // 0x24ae51
    *v38 = *v38 - (char)(v37 / 256);
    return result2;
}

// Address range: 0x24ae54 - 0x24aed4
int64_t function_24ae54(int64_t a1, int64_t a2) {
    // 0x24ae54
    *(int32_t *)a1 = (int32_t)a2 + (int32_t)a1;
    int64_t result; // 0x24ae54
    return result;
}

// Address range: 0x24aee1 - 0x24aee2
int64_t function_24aee1(void) {
    // 0x24aee1
    int64_t result; // 0x24aee1
    return result;
}

// Address range: 0x24aeff - 0x24af1f
int64_t function_24aeff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 115); // 0x24aeff
    *v1 = *v1 + (int32_t)a1;
    __asm_sti();
    int64_t v2 = unknown_15201711(); // 0x24af0b
    uint32_t v3 = (int32_t)a4 % 32; // 0x24af10
    if (v3 != 0) {
        *(int32_t *)-0x17d968e9 = *(int32_t *)-0x17d968e9 >> v3;
    }
    uint32_t v4 = (int32_t)v2; // 0x24af16
    uint32_t v5 = v4 + (int32_t)a2; // 0x24af16
    int64_t v6; // 0x24aeff
    char * v7 = (char *)(v6 + a1); // 0x24af18
    *v7 = (char)(v5 < v4) + (char)a3 + *v7;
    return 2 * (int64_t)v5 & 254 | (int64_t)(v5 & -256);
}

// Address range: 0x24afa3 - 0x24afb0
int64_t function_24afa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24afa3
    unknown_ffffffffd4cc6baf(a1, a2, a3, a4);
    return function_24afd6(a1, a2, a3, (int64_t)&g3);
}

// Address range: 0x24afcd - 0x24afd6
int64_t function_24afcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24afcd
    return unknown_5959038(a1, a2, a3, a4);
}

// Address range: 0x24afd6 - 0x24afea
int64_t function_24afd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24afd6
    int64_t v1; // 0x24afd6
    __asm_out_135((int16_t)a3, (int32_t)v1);
    return unknown_fffffffffe26afe8();
}

// Address range: 0x24aff6 - 0x24aff7
int64_t function_24aff6(void) {
    // 0x24aff6
    int64_t result; // 0x24aff6
    return result;
}

// Address range: 0x24affa - 0x24b005
int64_t function_24affa(void) {
    // 0x24affa
    int64_t v1; // 0x24affa
    int32_t * v2 = (int32_t *)(v1 + 0x148158af); // 0x24affa
    *v2 = *v2 ^ (int32_t)v1;
    return function_52eab1ed();
}

// Address range: 0x24b016 - 0x24b023
int64_t function_24b016(void) {
    // 0x24b016
    int64_t v1; // 0x24b016
    int32_t * v2 = (int32_t *)(v1 + 0x36bd8197); // 0x24b018
    *v2 = *v2 + (int32_t)v1;
    return function_ffffffffe915b6c9();
}

// Address range: 0x24b047 - 0x24b048
int64_t function_24b047(void) {
    // 0x24b047
    int64_t result; // 0x24b047
    return result;
}

// Address range: 0x24b052 - 0x24b056
int64_t function_24b052(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24b052
    int64_t result; // 0x24b052
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x24b068 - 0x24b079
int64_t function_24b068(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24b068
    bool v1; // 0x24b068
    if (a4 != 1 && !v1) {
        function_24b047();
    }
    // 0x24b06a
    int64_t v2; // 0x24b068
    *(char *)a3 = (char)((uint64_t)v2 / 256) + (char)a3 + (char)v1;
    return unknown_32b0be75();
}

// Address range: 0x24b0e7 - 0x24b0e8
int64_t function_24b0e7(void) {
    // 0x24b0e7
    int64_t result; // 0x24b0e7
    return result;
}

// Address range: 0x24b104 - 0x24b109
int64_t function_24b104(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 10); // 0x24b104
    *v1 = *v1 + (int32_t)a4;
    return function_24b120(a1, a2, a3, a4);
}

// Address range: 0x24b10a - 0x24b10f
int64_t function_24b10a(int64_t a1) {
    // 0x24b10a
    int64_t result; // 0x24b10a
    return result;
}

// Address range: 0x24b120 - 0x24b164
int64_t function_24b120(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24b120
    int64_t result; // 0x24b120
    bool v1; // 0x24b120
    if (v1) {
        char * v2 = (char *)(result + 0xe8d9803); // 0x24b15c
        *v2 = (char)a3 + 1 + *v2;
        return result;
    }
    int32_t * v3 = (int32_t *)(a4 - 53); // 0x24b124
    *v3 = *v3 + (int32_t)a3;
    return result;
}

// Address range: 0x24b1a3 - 0x24b1a4
int64_t function_24b1a3(void) {
    // 0x24b1a3
    int64_t result; // 0x24b1a3
    return result;
}

// Address range: 0x24b1e1 - 0x24b1e3
int64_t function_24b1e1(void) {
    // 0x24b1e1
    int64_t result; // 0x24b1e1
    return result;
}

// Address range: 0x24b260 - 0x24b265
int64_t function_24b260(void) {
    // 0x24b260
    return function_ffffffffa03511bb();
}

// Address range: 0x24b26a - 0x24b26b
int64_t function_24b26a(void) {
    // 0x24b26a
    int64_t result; // 0x24b26a
    return result;
}

// Address range: 0x24b299 - 0x24b29a
int64_t function_24b299(void) {
    // 0x24b299
    int64_t result; // 0x24b299
    return result;
}

// Address range: 0x24b29e - 0x24b315
int64_t function_24b29e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3 = 0; // 0x24b29e
    int64_t v4; // 0x24b29e
    char * v5 = (char *)(2 * v3 + v4); // 0x24b2a0
    *v5 = *v5 ^ (char)a4;
    char * v6 = (char *)(v4 + 0x3d002913); // 0x24b2a3
    *v6 = *v6 + 1;
    int32_t * v7 = (int32_t *)(a4 + 0x740b6bcc); // 0x24b2a9
    uint32_t v8 = *v7; // 0x24b2a9
    uint32_t v9 = v8 + (int32_t)a2; // 0x24b2a9
    *v7 = v9;
    int32_t * v10 = (int32_t *)(v4 - 0x62c23cff); // 0x24b2af
    *v10 = *v10 + (int32_t)v4 + (int32_t)(v9 < v8);
    int32_t * v11 = (int32_t *)(v4 + 0x7fe2b1c2); // 0x24b2b5
    int32_t v12 = a4; // 0x24b2b5
    *v11 = *v11 + v12;
    char v13 = *(char *)0x7333c5c6 + (char)(v4 / 256); // 0x24b2bf
    *(char *)0x7333c5c6 = v13;
    int64_t v14 = v3; // 0x24b2c5
    if (v13 < 1) {
        v14 = function_24b26a();
    }
    uint64_t v15 = v14;
    char v16 = *(char *)(v2 + 4 * v4); // 0x24b2c7
    int64_t v17 = 256 * (int64_t)(v16 | (char)(v15 / 256)) | v15 & -0xff01; // 0x24b2c7
    __asm_int(-76);
    *(char *)0x6bc00013d8b3eff = (char)v15;
    __asm_out_136(-57, (int32_t)v17);
    *(int32_t *)v1 = *(int32_t *)&v1 + v12;
    unsigned char v18 = *(char *)0x13d01e801e851a9; // 0x24b2eb
    uint32_t v19 = *(int32_t *)&v2; // 0x24b2f8
    char * v20 = (char *)(8 * v4 + a4); // 0x24b2fa
    char v21 = *v20; // 0x24b2fa
    *v20 = v21 - (char)a3 + (char)(v19 > (int32_t)(v17 & 0xffffff00 | (int64_t)v18));
    unknown_fffffffff97f9903(v2 + ((a6 & (int64_t)&g1) == 0 ? 4 : -4));
    return function_24b299();
}

// Address range: 0x24b315 - 0x24b336
int64_t function_24b315(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = unknown_ffffffffb1ea761b(); // 0x24b315
    int64_t v3; // 0x24b315
    uint32_t v4 = *(int32_t *)(v3 - 24); // 0x24b31c
    uint64_t v5 = (v3 % 256 | 0x100000000 * a3 | v2 & 0xffffff00) / (int64_t)v4; // 0x24b31c
    int64_t result = v5 & 0xffffffff;
    int32_t * v6 = (int32_t *)(result - 46); // 0x24b31f
    *v6 = *v6 + (int32_t)a4;
    int64_t v7; // 0x24b315
    if (llvm_ctpop_i8((char)v5 - *(char *)&v7) % 2 == 0) {
        // 0x24b37a
        return result;
    }
    int64_t result2 = unknown_ffffffffcddee631(); // 0x24b32b
    *(int32_t *)v1 = *(int32_t *)&v1 - (int32_t)result2;
    return result2;
}

// Address range: 0x24b35f - 0x24b37a
int64_t function_24b35f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24b35f
    bool v1; // 0x24b35f
    if (v1) {
        function_24b3bb();
    }
    // 0x24b361
    int64_t v2; // 0x24b35f
    int32_t * v3 = (int32_t *)(4 * a4 - 0x5ac16ef4 + v2); // 0x24b363
    *v3 = *v3 + (int32_t)a1;
    unknown_ffffffffce6b8171((v1 ? -1 : 1) + a1);
    int64_t result = a4 & 0xffffffff; // 0x24b370
    *(char *)result = 0;
    unsigned char v4 = *(char *)-0x17920a76; // 0x24b373
    *(char *)-0x17920a76 = v4 / 128 | 2 * v4;
    return result;
}

// Address range: 0x3245bb - 0x3245d6
int64_t function_3245bb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3245bb
    int64_t v1; // 0x3245bb
    int64_t v2 = (v1 + a4 & 0xffffffff) - 8; // 0x3245c0
    *(int64_t *)v2 = -0x738a1f6;
    int64_t v3 = unknown_3d342dcf(); // 0x3245c9
    uint32_t v4 = *(int32_t *)-10; // 0x3245ce
    uint32_t v5 = ((int32_t)v1 >> 31 & -256 | 61) + v4; // 0x3245ce
    *(int32_t *)-10 = v5;
    int32_t * v6 = (int32_t *)(v2 + (2 * v1 & -512)); // 0x3245d3
    *v6 = *v6 + (int32_t)a4;
    return (v3 + a4 / 256 + (int64_t)(v5 < v4)) % 256 | v3 & -256;
}

// Address range: 0x3245ee - 0x3245ef
int64_t function_3245ee(void) {
    // 0x3245ee
    int64_t result; // 0x3245ee
    return result;
}

// Address range: 0x32466d - 0x32467b
int64_t function_32466d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffd9146a73(); // 0x32466d
    int64_t v1; // 0x32466d
    __asm_fldenv(*(int224_t *)((uint64_t)v1 % 256 | a3));
    return result;
}

// Address range: 0x3246be - 0x3246bf
int64_t function_3246be(int64_t a1) {
    // 0x3246be
    int64_t result; // 0x3246be
    return result;
}

// Address range: 0x3246e7 - 0x3246e8
int64_t function_3246e7(void) {
    // 0x3246e7
    int64_t result; // 0x3246e7
    return result;
}

// Address range: 0x324719 - 0x32471b
int64_t function_324719(int64_t a1) {
    // 0x324719
    int64_t result; // 0x324719
    return result;
}

// Address range: 0x32475d - 0x324766
int64_t function_32475d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_3ce56b63(a1, a2, a3, a4, a5); // 0x324762
    if (a4 != 1) {
        result = function_3246e7();
    }
    // 0x324764
    return result;
}

// Address range: 0x3247ac - 0x3247ae
int64_t function_3247ac(void) {
    // 0x3247ac
    int64_t result; // 0x3247ac
    return result;
}

// Address range: 0x3247c3 - 0x3247c6
int64_t function_3247c3(int64_t a1) {
    // 0x3247c3
    int64_t result; // 0x3247c3
    return result;
}

// Address range: 0x3247c7 - 0x3247d0
int64_t function_3247c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3247c7
    int64_t v1; // 0x3247c7
    int32_t * v2 = (int32_t *)(v1 - 17); // 0x3247c7
    *v2 = *v2 + (int32_t)a4;
    return v1 ^ 6;
}

// Address range: 0x32485e - 0x324861
int64_t function_32485e(int64_t a1) {
    // 0x32485e
    int64_t result; // 0x32485e
    return result;
}

// Address range: 0x324abb - 0x324ad0
int64_t function_324abb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x324abb
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1; // 0x324abb
    char * v2 = (char *)(v1 + 99); // 0x324ac1
    char v3 = *v2 + (char)(v1 / 256); // 0x324ac1
    *v2 = v3;
    int64_t result; // 0x324abb
    if (a4 != 1 == v3 == 0) {
        result = function_324a75();
    }
    // 0x324ace
    return result;
}

// Address range: 0x324adf - 0x324ae2
int64_t function_324adf(int64_t a1) {
    // 0x324adf
    int64_t result; // 0x324adf
    return result;
}

// Address range: 0x324ae7 - 0x324af5
int64_t function_324ae7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x324ae7
    int64_t result; // 0x324ae7
    uint64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)a4;
    *(char *)-0x7976ca0d = *(char *)-0x7976ca0d + (char)(v1 / 256);
    return result;
}

// Address range: 0x324ba6 - 0x324be0
int64_t function_324ba6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x324ba6
    int64_t v1; // 0x324ba6
    int64_t v2 = v1;
    int64_t v3 = v2 + 0x68e2b33a + (int64_t)((int32_t)v2 < 0x53065701); // 0x324bcf
    __asm_out_135((int16_t)a3, (int32_t)v3);
    return v3 & 0xffffffff;
}

// Address range: 0x324be1 - 0x324bf3
int64_t function_324be1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)0x4b3686e8; // 0x324be1
    int64_t v2; // 0x324be1
    *(char *)0x4b3686e8 = v1 + (char)((uint64_t)v2 / 256);
    int32_t * v3 = (int32_t *)(a3 + 0x67993b1d); // 0x324be7
    *v3 = *v3 - (int32_t)a4;
    return v2 ^ 247;
}

// Address range: 0x324c66 - 0x324c82
int64_t function_324c66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x324c68
    if (v1 != 0) {
        int64_t v2; // 0x324c66
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    __asm_in_134((int16_t)a3);
    return a2 & 0xffffffff;
}
