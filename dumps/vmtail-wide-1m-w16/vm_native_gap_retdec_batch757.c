/*
 * Targeted RetDec C for native executable gap queue batch 757.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2390b6-0x2392b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2392b6-0x2394b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2394b6-0x2396b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2396b6-0x2398b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27feee-0x2800ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2800ee-0x2802ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2804ee-0x2806ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2806ee-0x2808ee rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_21077ca();
int64_t function_239079();
int64_t function_2390b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23918b(void);
int64_t function_239196(void);
int64_t function_2391a6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2391f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_239224(int64_t a1, int64_t a2, int64_t a3);
int64_t function_239235(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2392dc(int64_t a1);
int64_t function_239309(void);
int64_t function_239370(int64_t a1, int64_t a2);
int64_t function_2393b6(int64_t a1);
int64_t function_2393eb(void);
int64_t function_2393fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2394af(void);
int64_t function_23950c(void);
int64_t function_23951b(void);
int64_t function_239523(void);
int64_t function_239578(void);
int64_t function_23957b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_239675(void);
int64_t function_23971e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23988f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_239897(int64_t a1, int64_t a2);
int64_t function_2398a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27feee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_27ff18(int64_t a1);
int64_t function_27ff86(int64_t a1);
int64_t function_27ffe4(void);
int64_t function_27ffe9(void);
int64_t function_28007b(void);
int64_t function_2800b0(void);
int64_t function_2800c4(int64_t a1);
int64_t function_280122(void);
int64_t function_28014a(void);
int64_t function_280168(int64_t a1);
int64_t function_280178(int64_t a1, int64_t a2);
int64_t function_28018f(void);
int64_t function_2801f9(void);
int64_t function_280234(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28027f(void);
int64_t function_2804ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_28059b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28067d(void);
int64_t function_2806bb(void);
int64_t function_2806de(void);
int64_t function_2806f1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2806fb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2807c0(void);
int64_t function_2807cf(void);
int64_t function_2807ec(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2808d5(void);
int64_t function_6c53e857();
int64_t function_7bc23fc2();
int64_t function_ffffffffabdd8c70();
int64_t unknown_143099f0();
int64_t unknown_20beb8d();
int64_t unknown_2109dbd();
int64_t unknown_23ff1389();
int64_t unknown_28c9c1be();
int64_t unknown_2c3d40b0();
int64_t unknown_3abb8320();
int64_t unknown_42201737();
int64_t unknown_4525db4e();
int64_t unknown_47fee64d();
int64_t unknown_4bc22c93();
int64_t unknown_5318c35a();
int64_t unknown_59619725();
int64_t unknown_5b9cc538();
int64_t unknown_60796d3b();
int64_t unknown_7242f00();
int64_t unknown_ffffffffa51a6275();
int64_t unknown_ffffffffa82dfcb6();
int64_t unknown_ffffffffab2df72f();
int64_t unknown_fffffffface15e5c();
int64_t unknown_ffffffffb22dee66();
int64_t unknown_ffffffffbe2e1c98();
int64_t unknown_ffffffffd8a18b61();
int64_t unknown_ffffffffd9abc9dc();
int64_t unknown_ffffffffdf257ab4();
int64_t unknown_fffffffffc4c75ab();
int64_t unknown_fffffffffc9d9ad5();

// Address range: 0x2390b6 - 0x239148
int64_t function_2390b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2390b6
    bool v1; // 0x2390b6
    *(int32_t *)a3 = (int32_t)v1;
    int64_t result; // 0x2390b6
    if (a4 == 0) {
        // 0x239137
        __asm_rcl(*(int32_t *)-0x26efb49a);
        int64_t v2 = result;
        *(int32_t *)v2 = *(int32_t *)&result + (int32_t)v2;
        return result;
    }
    int64_t v3 = result; // 0x2390ca
    result = a2 & 0xffffffff;
    int32_t * v4 = (int32_t *)((v3 & 0xffffffff) + (int64_t)&g1); // 0x2390cb
    uint32_t v5 = *v4; // 0x2390cb
    *v4 = v5 / 2;
    int64_t v6; // 0x2390b6
    if (v5 > -1) {
        // 0x2390ca
        v6 = result;
    } else {
        int64_t v7 = function_239079(); // 0x2390d7
        result = v7;
        v6 = v7;
    }
    // 0x2390d9
    *(char *)0x1e8c944 = *(char *)0x1e8c944 + (char)v6;
    int64_t v8; // 0x2390b6
    __asm_out(-0x36bc, (char)v8);
    int32_t v9 = *(int32_t *)0x1e8c944; // 0x2390e9
    *(int64_t *)((int64_t)(0x1f78a8f * v9) - 8) = v8 & 0xffffffff;
    return __asm_iretd();
}

// Address range: 0x23918b - 0x23918e
int64_t function_23918b(void) {
    // 0x23918b
    int64_t result; // 0x23918b
    return result;
}

// Address range: 0x239196 - 0x239197
int64_t function_239196(void) {
    // 0x239196
    int64_t result; // 0x239196
    return result;
}

// Address range: 0x2391a6 - 0x2391f6
int64_t function_2391a6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a3; // 0x2391a6
    bool v3; // 0x2391a6
    bool v4; // 0x2391a6
    if (v4) {
        int64_t v5 = __asm_wait(); // 0x2391b1
        unsigned char v6 = (char)a3; // 0x2391b2
        unsigned char v7 = *(char *)v5 + v6; // 0x2391b2
        int64_t v8 = a3 & -256 | (int64_t)v7; // 0x2391b2
        int64_t v9 = a4 - 256 * (v5 + (int64_t)(v7 < v6)) & 0xff00 | a4 & -0xff01; // 0x2391b4
        int32_t * v10 = (int32_t *)(a2 + 94); // 0x2391b6
        uint32_t v11 = *v10; // 0x2391b6
        uint32_t v12 = v11 + (int32_t)v8; // 0x2391b6
        *v10 = v12;
        char v13 = *(char *)(a1 + 101); // 0x2391b9
        uint32_t v14 = *(int32_t *)&v1; // 0x2391c8
        int64_t v15 = v4 ? -4 : 4; // 0x2391c8
        int64_t v16 = v15 + a1; // 0x2391c8
        int64_t v17 = v1 + v15; // 0x2391c8
        v1 = v17;
        unknown_ffffffffdf257ab4(v16, v17, 256 * (int64_t)(v13 + (char)(a3 / 256) + (char)(v12 < v11)) | v8 & -0xff01, v9);
        if (v9 != 1) {
            function_239196();
        }
        // 0x2391d6
        unknown_ffffffffd9abc9dc();
        v2 = 0xe644241d;
        v3 = v14 < (int32_t)a1;
    }
    uint64_t v18 = v2;
    char v19 = *(char *)(v1 - 0x47fe179e); // 0x2391de
    int64_t v20 = 256 * (int64_t)((char)(v18 / 256) + (char)v3 - v19) | v18 & -0xff01; // 0x2391de
    int32_t * v21 = (int32_t *)(v20 - 127); // 0x2391e4
    int64_t v22; // 0x2391a6
    *v21 = *v21 | (int32_t)v22;
    char * v23 = (char *)v20; // 0x2391e7
    *v23 = *v23 + (char)v18;
    int64_t result = unknown_143099f0() & -256; // 0x2391ef
    char * v24 = (char *)result; // 0x2391f2
    *v24 = *v24 + 84;
    return result;
}

// Address range: 0x2391f7 - 0x239224
int64_t function_2391f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 + 1); // 0x2391f7
    int64_t v2; // 0x2391f7
    *v1 = *v1 + (char)(v2 / 256);
    unknown_7242f00();
    uint64_t v3 = __asm_iretd(); // 0x2391ff
    char * v4 = (char *)(8 * a1 - 0x724cccff + a4); // 0x239201
    *v4 = *v4 + (char)(v3 / 256);
    char * v5 = (char *)(v2 - 0x8fe1760); // 0x239208
    *v5 = (char)a4;
    unsigned char v6 = *v5 % 32;
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)(v2 - 0x4e3a7f00); // 0x23920e
        *v7 = *v7 >> (int32_t)v6;
    }
    char * v8 = (char *)(int64_t)((int32_t)v3 >> 31); // 0x239218
    *v8 = *v8 | (char)v3 | 21;
    int64_t result = unknown_3abb8320(); // 0x23921a
    *(int32_t *)result = (int32_t)result;
    return result;
}

// Address range: 0x239224 - 0x239234
int64_t function_239224(int64_t a1, int64_t a2, int64_t a3) {
    // 0x239224
    __asm_wait();
    return unknown_ffffffffab2df72f();
}

// Address range: 0x239235 - 0x2392a4
int64_t function_239235(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3; // 0x239235
    char * v4 = (char *)(4 * a2 + 0xa5601e8 + v3); // 0x239235
    *v4 = *v4 + (char)a4;
    int64_t v5 = a3 & -256 | 129; // 0x23923c
    if ((*(int32_t *)&v1 & (int32_t)v3) == 0) {
        int64_t result = __asm_int1(); // 0x239297
        *(int32_t *)0x262a290 = *(int32_t *)0x262a290 ^ -24;
        int32_t * v6 = (int32_t *)v5; // 0x2392a2
        *v6 = *v6 + (int32_t)v2;
        return result;
    }
    int64_t v7 = unknown_47fee64d(); // 0x239244
    int32_t * v8 = (int32_t *)(v3 - 0x27feb80a); // 0x23924c
    *v8 = *v8 + (int32_t)v3;
    int32_t * v9 = (int32_t *)v7; // 0x239252
    *v9 = *v9 | (int32_t)v7;
    int64_t v10 = unknown_5318c35a(); // 0x239254
    __asm_outsd((int16_t)v5, *(int32_t *)&v2);
    return v10 + 0x4baaf528 & 0xffffffff;
}

// Address range: 0x2392dc - 0x2392dd
int64_t function_2392dc(int64_t a1) {
    // 0x2392dc
    int64_t result; // 0x2392dc
    return result;
}

// Address range: 0x239309 - 0x23930a
int64_t function_239309(void) {
    // 0x239309
    int64_t result; // 0x239309
    return result;
}

// Address range: 0x239370 - 0x239380
int64_t function_239370(int64_t a1, int64_t a2) {
    // 0x239370
    int64_t v1; // 0x239370
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return v2 | 3;
}

// Address range: 0x2393b6 - 0x2393ba
int64_t function_2393b6(int64_t a1) {
    // 0x2393b6
    int64_t result; // 0x2393b6
    return result;
}

// Address range: 0x2393eb - 0x2393ec
int64_t function_2393eb(void) {
    // 0x2393eb
    int64_t result; // 0x2393eb
    return result;
}

// Address range: 0x2393fa - 0x2394ad
int64_t function_2393fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2393fa
    int3_t v1; // 0x2393fa
    int3_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4; // 0x2393fa
    *(char *)a1 = (char)v4;
    bool v5; // 0x2393fa
    int64_t v6 = (v5 ? -1 : 1) + a1; // 0x239404
    int64_t v7 = unknown_20beb8d(v6); // 0x239408
    __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v2) * (float80_t)*(float32_t *)&v3);
    int64_t v8 = a2 + 0xffffffda + v4 & 0xffffffff; // bp-8, 0x23940f
    int64_t v9 = (int64_t)&v8; // 0x23940f
    char * v10 = (char *)(a4 + 0x4101e818); // 0x239413
    unsigned char v11 = *v10; // 0x239413
    char v12 = v11 + 79; // 0x239413
    *v10 = v12;
    int64_t v13; // 0x2393fa
    if (v12 < 0 == (v12 & (v11 ^ -128)) < 0) {
        int64_t v14 = unknown_fffffffface15e5c(); // 0x239456
        *(float80_t *)v6 = __asm_fbstp(__frontend_reg_load_fpr(v2));
        if ((v12 & (v11 ^ -128)) >= 0) {
            int32_t * v15 = (int32_t *)(4 * v6 + 116 + v9); // 0x239464
            uint32_t v16 = *v15; // 0x239464
            uint32_t v17 = v16 + (int32_t)v9; // 0x239464
            *v15 = v17;
            int64_t result = v14; // 0x239468
            if (v17 >= v16 && v17 != 0) {
                result = function_2393eb();
            }
            // 0x23946a
            return result;
        }
        int64_t v18 = 0x4000 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | (int64_t)(v11 > 176) | 16 * (int64_t)(v11 % 16 != 0) | 64 * (int64_t)(v12 == 0) | 4 * (int64_t)(llvm_ctpop_i8(v12) % 2 == 0) | 2178; // bp+28698, 0x239482
        int64_t v19 = (int64_t)&v18; // 0x239482
        unknown_23ff1389();
        int32_t * v20 = (int32_t *)(v3 + 126); // 0x239488
        *v20 = *v20 + (int32_t)v19;
        v13 = v19;
    } else {
        // 0x23941b
        int64_t v21; // bp+28706, 0x2393fa
        int64_t v22 = (int64_t)&v21; // 0x23940f
        v13 = v22;
        if (a4 == 1 || v12 == 0) {
            char * v23 = (char *)v7; // 0x23941d
            *v23 = *v23 >> 1;
            int64_t v24 = unknown_59619725(); // 0x23941f
            char * v25 = (char *)(8 * v4 + 8 + v22); // 0x239424
            *v25 = *v25 + (char)v24;
            int32_t * v26 = (int32_t *)(8 * a2 + 0x4f0a008 + v9); // 0x23942d
            *v26 = *v26 + (int32_t)v6;
            int64_t result2 = unknown_60796d3b() & -256; // 0x23943a
            char * v27 = (char *)result2; // 0x23943d
            *v27 = *v27 + 114;
            return result2;
        }
    }
    // 0x23948d
    unknown_ffffffffbe2e1c98();
    int64_t result3 = __asm_iretd(); // 0x239499
    int64_t v28 = v13 - 8; // 0x2394a3
    *(int64_t *)v28 = result3;
    *(int64_t *)((2 * v28 & 0xfffffffe) - 8) = -0x86899f6;
    return result3;
}

// Address range: 0x2394af - 0x2394b6
int64_t function_2394af(void) {
    // 0x2394af
    return unknown_ffffffffa82dfcb6();
}

// Address range: 0x23950c - 0x23950d
int64_t function_23950c(void) {
    // 0x23950c
    int64_t result; // 0x23950c
    return result;
}

// Address range: 0x23951b - 0x23951c
int64_t function_23951b(void) {
    // 0x23951b
    int64_t result; // 0x23951b
    return result;
}

// Address range: 0x239523 - 0x239525
int64_t function_239523(void) {
    // 0x239523
    int64_t v1; // 0x239523
    return function_23957b(v1, v1, v1, (int64_t)&g3);
}

// Address range: 0x239578 - 0x23957a
int64_t function_239578(void) {
    // 0x239578
    int64_t result; // 0x239578
    return result;
}

// Address range: 0x23957b - 0x2395f6
int64_t function_23957b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23957b
    int64_t v1; // 0x23957b
    uint64_t v2 = v1;
    __asm_hlt();
    bool v3; // 0x23957b
    int32_t v4 = (int32_t)v3 + (int32_t)a2 + *(int32_t *)0x3b1e0185; // 0x23957e
    *(int32_t *)0x3b1e0185 = v4;
    int64_t v5 = a4 & -256 | (int64_t)*(char *)0x3af1a7f3f7013d00; // 0x23958e
    if (v4 != 0) {
        v5 = function_23951b();
    }
    uint64_t result = v5;
    char * v6 = (char *)(result + 1); // 0x239590
    char v7 = *v6; // 0x239590
    char v8 = v2; // 0x239590
    char v9 = v7 + v8; // 0x239590
    *v6 = v9;
    if (((v9 ^ v7) & (v9 ^ v8)) < 0) {
        // 0x239595
        return result;
    }
    char v10 = *(char *)(a3 - 95); // 0x2395c8
    int64_t v11 = 256 * (int64_t)(v10 | (char)(result / 256)) | result & -0xff01; // 0x2395c8
    char * v12 = (char *)(v11 - 0x57f697fa); // 0x2395cb
    char v13 = v2 / 256; // 0x2395cb
    *v12 = *v12 & v13;
    *(char *)0x1874cbd8 = *(char *)0x1874cbd8 + v13;
    float80_t v14; // 0x23957b
    *(float80_t *)(a2 + 31 + a3) = __asm_fbstp(v14);
    return v11 & -256 | (int64_t)(*(char *)(5 * v2) & (char)result);
}

// Address range: 0x239675 - 0x23967a
int64_t function_239675(void) {
    // 0x239675
    return function_ffffffffabdd8c70();
}

// Address range: 0x23971e - 0x2397b2
int64_t function_23971e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23971e
    int64_t v1; // 0x23971e
    __asm_outsd((int16_t)a3, (int32_t)v1);
    unsigned char v2 = *(char *)0x7c2ebc8e; // 0x239787
    char v3 = v1 / 256; // 0x239787
    unsigned char v4 = v2 + v3; // 0x239787
    *(char *)0x7c2ebc8e = v4;
    uint32_t v5 = (int32_t)a5; // 0x23978d
    int32_t v6 = v4 < v2; // 0x23978d
    uint32_t v7 = *(int32_t *)(a3 + 0x3beca4fc) + v6; // 0x23978d
    uint32_t result = v5 - v7; // 0x23978d
    if (result != 0 && !((v4 < v2 ? v7 != -1 || result - v6 > v5 : v7 > v5))) {
        // 0x239741
        return result;
    }
    // 0x23979a
    __asm_in(34);
    char * v8 = (char *)(3 * (v1 & -0xff01 | 256 * a3 & 0xff00)); // 0x2397a7
    unsigned char v9 = *v8; // 0x2397a7
    unsigned char v10 = v9 + v3; // 0x2397a7
    *v8 = v10;
    int64_t result2 = (int64_t)*(int32_t *)0x68f6ff9ef7013d00; // 0x2397ac
    if (v10 >= v9 && v10 != 0) {
        result2 = function_7bc23fc2();
    }
    // 0x2397b2
    return result2;
}

// Address range: 0x23988f - 0x239897
int64_t function_23988f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 59); // 0x23988f
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x23988f
    return result;
}

// Address range: 0x239897 - 0x2398a0
int64_t function_239897(int64_t a1, int64_t a2) {
    // 0x239897
    int64_t v1; // 0x239897
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a2;
    return v1 ^ 232;
}

// Address range: 0x2398a0 - 0x2398b5
int64_t function_2398a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2398a0
    int64_t v1; // 0x2398a0
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return (v2 + (uint64_t)v1 / 256) % 256 | v2 & -256;
}

// Address range: 0x27feee - 0x27ff13
int64_t function_27feee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x27feee
    int64_t v1; // 0x27feee
    while ((char)a4 - *(char *)(v1 + a2 & 0xffffffff) < 0) {
        // continue -> 0x27fef7
    }
    // 0x27fefb
    return unknown_2109dbd();
}

// Address range: 0x27ff18 - 0x27ff19
int64_t function_27ff18(int64_t a1) {
    // 0x27ff18
    int64_t result; // 0x27ff18
    return result;
}

// Address range: 0x27ff86 - 0x27ff93
int64_t function_27ff86(int64_t a1) {
    // 0x27ff86
    int64_t v1; // 0x27ff86
    return v1 & -256 | (int64_t)*(char *)0xe67f8060bba7b2c;
}

// Address range: 0x27ffe4 - 0x27ffe9
int64_t function_27ffe4(void) {
    // 0x27ffe4
    return function_6c53e857();
}

// Address range: 0x27ffe9 - 0x27ffef
int64_t function_27ffe9(void) {
    // 0x27ffe9
    int64_t result; // 0x27ffe9
    return result;
}

// Address range: 0x28007b - 0x28007f
int64_t function_28007b(void) {
    // 0x28007b
    int64_t result; // 0x28007b
    return result;
}

// Address range: 0x2800b0 - 0x2800b3
int64_t function_2800b0(void) {
    // 0x2800b0
    int64_t result; // 0x2800b0
    return result;
}

// Address range: 0x2800c4 - 0x2800c8
int64_t function_2800c4(int64_t a1) {
    // 0x2800c4
    int64_t result; // 0x2800c4
    return result;
}

// Address range: 0x280122 - 0x280123
int64_t function_280122(void) {
    // 0x280122
    int64_t result; // 0x280122
    return result;
}

// Address range: 0x28014a - 0x28014b
int64_t function_28014a(void) {
    // 0x28014a
    int64_t result; // 0x28014a
    return result;
}

// Address range: 0x280168 - 0x280177
int64_t function_280168(int64_t a1) {
    // 0x280168
    bool v1; // 0x280168
    if (v1) {
        function_28014a();
    }
    // 0x28016a
    return unknown_ffffffffa51a6275();
}

// Address range: 0x280178 - 0x28017b
int64_t function_280178(int64_t a1, int64_t a2) {
    // 0x280178
    int64_t v1; // 0x280178
    *(char *)a1 = (char)v1;
    return function_280122();
}

// Address range: 0x28018f - 0x280191
int64_t function_28018f(void) {
    // 0x28018f
    int64_t result; // 0x28018f
    return result;
}

// Address range: 0x2801f9 - 0x2801fa
int64_t function_2801f9(void) {
    // 0x2801f9
    int64_t result; // 0x2801f9
    return result;
}

// Address range: 0x280234 - 0x280275
int64_t function_280234(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x280234
    int64_t v2; // 0x280234
    if (v1 != 0) {
        char * v3 = (char *)(v2 + 0xa51f00); // 0x280234
        *v3 = *v3 << v1;
    }
    int64_t v4 = v2 + 0x70f57410; // 0x28023f
    int64_t v5 = v4 & 0xffffffff; // 0x28023f
    char * v6 = (char *)v5; // 0x28024c
    *v6 = *v6 + (char)v4;
    uint32_t v7 = *(int32_t *)(a1 - 0x754f096e + 4 * v5); // 0x280253
    unknown_ffffffffd8a18b61(v7);
    int32_t * v8 = (int32_t *)((int64_t)v7 + 0x710a885f); // 0x28026d
    *v8 = *v8 + v7;
    return function_2801f9();
}

// Address range: 0x28027f - 0x280280
int64_t function_28027f(void) {
    // 0x28027f
    int64_t result; // 0x28027f
    return result;
}

// Address range: 0x2804ee - 0x28059a
int64_t function_2804ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2804ee
    int64_t v1; // 0x2804ee
    *(int32_t *)a3 = (int32_t)(v1 | a1);
    int64_t result2; // 0x2804ee
    int64_t v2 = result2;
    *(int32_t *)v2 = *(int32_t *)&result2 & (int32_t)v2;
    int64_t v3 = result2;
    int64_t v4; // 0x2804ee
    uint32_t v5 = *(int32_t *)&v4; // 0x2804ff
    int64_t result = v5; // 0x2804ff
    result2 = result;
    int64_t v6; // 0x2804ee
    unsigned char v7 = *(char *)&v6; // 0x280504
    bool v8; // 0x2804ee
    int64_t v9 = (v8 ? -1 : 1) + a1; // 0x280504
    v6 = v9;
    if (v7 < (char)v5) {
        // 0x280507
        return result;
    }
    // 0x280541
    *(int32_t *)v9 = __asm_insd((int16_t)((v3 + 140) % 256 | v3 & 0xff00));
    *(int32_t *)result2 = *(int32_t *)&v4 + (int32_t)v1;
    return result2;
}

// Address range: 0x28059b - 0x28066c
int64_t function_28059b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28059b
    int64_t v1; // 0x28059b
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a2;
    unsigned char v5 = (char)a4; // 0x28059c
    bool v6; // 0x28059b
    *(char *)v2 = (char)v2 + v5 + (char)v6;
    char * v7 = (char *)(a1 + 0x29b1a944); // 0x28059e
    unsigned char v8 = *v7; // 0x28059e
    char v9 = v8 - v5; // 0x28059e
    *v7 = v9;
    __asm_out_133((int16_t)a3, (int32_t)v2);
    int64_t v10 = unknown_fffffffffc4c75ab(); // 0x2805a5
    if (a4 != 0) {
        int32_t * v11 = (int32_t *)(8 * a4 - 0xf8c7d2f + v4); // 0x2805b1
        *v11 = *v11 + (int32_t)v1;
        uint32_t v12 = __asm_in_135(-120) | -0x17a67d52; // 0x2805ba
        int32_t * v13 = (int32_t *)(int64_t)v12; // 0x2805bc
        uint32_t v14 = *v13; // 0x2805bc
        uint32_t v15 = v14 + (int32_t)a4; // 0x2805bc
        *v13 = v15;
        int32_t v16 = *(int32_t *)&v3; // 0x2805be
        *(char *)v3 = (char)(v16 ^ v12);
        int32_t * v17 = (int32_t *)(v1 + 17); // 0x2805c7
        *v17 = *v17 + (int32_t)v3;
        return unknown_fffffffffc9d9ad5(v16 + (int32_t)a1 + (int32_t)(v15 < v14));
    }
    // 0x2805d7
    if (v9 < 0) {
        // 0x2805fe
        return ((v10 + 36 + (int64_t)(v8 < v5)) % 256 | v10 & 0xffffff00) ^ 0xffffffff;
    }
    // 0x2805d9
    if (llvm_ctpop_i8(v9) % 2 != 0) {
        // 0x2805db
        int3_t v18; // 0x28059b
        __frontend_reg_store_fpr(v18 - 1, 1.0L);
        char v19 = v10; // 0x2805e5
        *(char *)a1 = v19;
        int32_t * v20 = (int32_t *)(4 * v1 + 40 + v10); // 0x2805e8
        *v20 = *v20 + (int32_t)((v6 ? 0xffffffff : 1) + a1);
        char * v21 = (char *)(v10 + 0x360e000); // 0x2805ec
        *v21 = *v21 + v19;
        unsigned char v22 = *(char *)-0x50105c00; // 0x2805f8
        unsigned char v23 = v22 + (char)v1; // 0x2805f8
        *(char *)-0x50105c00 = v23;
        // 0x2805fe
        return ((v10 + 36 + (int64_t)(v23 < v22)) % 256 | v10 & 0xffffff00) ^ 0xffffffff;
    }
    char * v24 = (char *)(2 * v1 - 0x3d2303ff + v10); // 0x28060a
    *v24 = *v24 - v5;
    char * v25 = (char *)(v4 + 0x1e81e4e); // 0x280611
    *v25 = *v25 | (char)(v1 / 256);
    int32_t * v26 = (int32_t *)(v1 + 8); // 0x280625
    *v26 = *v26 + (int32_t)v10;
    int64_t v27 = v6 ? -4 : 4; // 0x28062a
    int64_t v28 = v27 + a1; // 0x28062a
    int64_t * v29 = (int64_t *)(v10 & 0xffffffff); // 0x28062e
    int64_t v30 = *v29; // 0x28062e
    uint64_t v31 = unknown_42201737(v28); // 0x280631
    *(int32_t *)0x239bc0a6cdb36855 = (int32_t)v31;
    int32_t * v32 = (int32_t *)(v3 + 0x1601e8f1); // 0x28063f
    *v32 = *v32 + (int32_t)v4;
    *v29 = 0x390d4d1;
    char * v33 = (char *)((256 * v3 & 0xff00) - 1); // 0x28064a
    *v33 = *v33 | (char)(v31 / 256);
    int64_t v34 = __asm_sti(); // 0x28064e
    uint16_t v35 = (256 * (int16_t)v34 >> 8) * (int16_t)*(char *)(v30 - 24); // 0x28064f
    int64_t v36 = -1 - (int32_t)v30 < (int32_t)v1 ? 226 : 225; // 0x280654
    int64_t v37 = v28 + v27; // 0x280656
    char * v38 = (char *)((v34 & -0x10000 | (int64_t)(v35 & -256) | (v36 + (int64_t)v35) % 256) - 0x193e2bf7); // 0x28065a
    *v38 = *v38 - 1;
    unknown_ffffffffb22dee66(v37);
    int64_t v39 = __asm_iretd(); // 0x280665
    *(int32_t *)v37 = *(int32_t *)&v4;
    return v39 & -0xff01 | (int64_t)&g2;
}

// Address range: 0x28067d - 0x28067e
int64_t function_28067d(void) {
    // 0x28067d
    int64_t result; // 0x28067d
    return result;
}

// Address range: 0x2806bb - 0x2806bc
int64_t function_2806bb(void) {
    // 0x2806bb
    int64_t result; // 0x2806bb
    return result;
}

// Address range: 0x2806de - 0x2806e0
int64_t function_2806de(void) {
    // 0x2806de
    return function_2806bb();
}

// Address range: 0x2806f1 - 0x2806fb
int64_t function_2806f1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2806f1
    int64_t result; // 0x2806f1
    *(char *)a1 = (char)result + (char)(a4 / 256);
    return result;
}

// Address range: 0x2806fb - 0x2807bf
int64_t function_2806fb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char v1 = a2;
    __asm_outsb((int16_t)a3, v1);
    uint64_t v2 = a5 + 188; // 0x280705
    int64_t v3 = v2 % 256 | a5 & -256; // 0x280705
    char * v4 = (char *)(a3 + 38); // 0x280707
    *v4 = *v4 + (char)v2;
    if ((int32_t)v3 < 0x7225802) {
        // 0x280779
        return v3 + 0x7b8f9a7f & 0xffffffff;
    }
    int64_t v5 = unknown_2c3d40b0(a6); // 0x280711
    char v6 = *(char *)v5; // 0x280716
    int64_t v7 = v5 + 0xffffffd3 & 0xffffffff; // 0x280718
    *(int32_t *)v7 = (int32_t)v5;
    __asm_int(126);
    uint64_t v8 = a2 & 0xffffff00; // 0x280735
    int32_t v9 = v8 | (int64_t)(v1 - (char)(a3 / 256) + v6); // 0x28073c
    if (((v9 + 0x188b0520 ^ v9) & (v9 ^ -0x80000000)) >= 0) {
        // 0x280782
        int64_t v10; // 0x2806fb
        char * v11 = (char *)(2 * v10 + 0xaf000120); // 0x280782
        *v11 = *v11 + (char)(v8 / 256);
        int64_t v12; // bp+16, 0x2806fb
        __asm_out_133((int16_t)(int64_t)&v12, v9);
        int64_t result = unknown_4bc22c93() | 0x3a8b84a5; // 0x280792
        bool v13; // 0x2806fb
        char * v14 = (char *)(v7 + (v13 ? 57 : 65)); // 0x280798
        *v14 = *v14 ^ (char)result;
        int32_t * v15 = (int32_t *)result; // 0x28079b
        *v15 = *v15 + (int32_t)result;
        return result;
    }
    int64_t v16 = unknown_4525db4e(); // 0x280747
    __asm_rcl(*(int32_t *)v16);
    unsigned char v17 = *(char *)0x7e7c5d00b400013d; // 0x280750
    uint32_t v18 = (int32_t)(v16 & 0xffffff00 | (int64_t)v17) - 0x2ed1a71d; // 0x28075a
    int64_t result2 = v18; // 0x28075a
    if (v18 != 0) {
        // 0x2807c1
        return result2;
    }
    unsigned char v19 = *(char *)result2; // 0x280763
    int64_t result3 = (result2 + 61 + (int64_t)(v19 > (char)a4)) % 256 | result2 & 0xffffff00; // 0x280765
    *(int32_t *)0x50fd01013d721900 = (int32_t)result3;
    *(int64_t *)0x726ea75f = a4;
    return result3;
}

// Address range: 0x2807c0 - 0x2807c1
int64_t function_2807c0(void) {
    // 0x2807c0
    int64_t result; // 0x2807c0
    return result;
}

// Address range: 0x2807cf - 0x2807d0
int64_t function_2807cf(void) {
    // 0x2807cf
    int64_t result; // 0x2807cf
    return result;
}

// Address range: 0x2807ec - 0x2808d1
int64_t function_2807ec(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2807ec
    unknown_5b9cc538();
    int32_t * v1 = (int32_t *)(a4 - 99); // 0x280840
    int64_t v2; // 0x2807ec
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x2807ec
    unsigned char v4 = *(char *)&v3 | (char)a4; // 0x280843
    if ((a4 & -256 || (int64_t)v4) != 1 == v4 == 0) {
        function_2807cf();
    }
    // 0x280847
    return function_21077ca();
    int64_t v5 = a1 & 0xffffffff; // 0x2808ae
    *(char *)v5 = (char)a2;
    bool v6; // 0x2807ec
    int64_t v7 = v6 ? -1 : 1; // 0x2808b0
    int64_t v8 = v7 + a2; // 0x2808b0
    int64_t v9 = unknown_28c9c1be(v7 + v5, v8); // 0x2808b8
    char * v10 = (char *)(v9 + 0x360e600); // 0x2808bd
    *v10 = *v10 + (char)v9;
    int64_t result = (v9 + a4 / 256) % 256 | v9 & -256; // 0x2808c3
    int32_t * v11 = (int32_t *)(a3 + 1); // 0x2808c5
    *v11 = *v11 + 0x77aaaebd;
    int32_t * v12 = (int32_t *)(result + 0x48096230); // 0x2808c9
    *v12 = *v12 + (int32_t)v8;
    return result;
}

// Address range: 0x2808d5 - 0x2808d6
int64_t function_2808d5(void) {
    // 0x2808d5
    int64_t result; // 0x2808d5
    return result;
}
