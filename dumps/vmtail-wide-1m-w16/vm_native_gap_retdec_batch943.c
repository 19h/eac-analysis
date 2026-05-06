/*
 * Targeted RetDec C for native executable gap queue batch 943.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2a1719-0x2a1919 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a1919-0x2a1b19 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a1b19-0x2a1d19 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a1d19-0x2a1f19 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a1f19-0x2a2119 rank=- name=- kind=- bytes=- uncovered=-
 *   0x383430-0x383630 rank=- name=- kind=- bytes=- uncovered=-
 *   0x383630-0x383830 rank=- name=- kind=- bytes=- uncovered=-
 *   0x383830-0x383a30 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
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

int64_t function_134238bd();
int64_t function_2a1719(void);
int64_t function_2a171f(int64_t a1);
int64_t function_2a172a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a1775(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a1819(int64_t a1, int64_t a2);
int64_t function_2a1823(void);
int64_t function_2a1852(void);
int64_t function_2a1871(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a18cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a1919(void);
int64_t function_2a1943(void);
int64_t function_2a1997(void);
int64_t function_2a1a3d(void);
int64_t function_2a1af6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a1b40(void);
int64_t function_2a1b44(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a1b4c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a1b57(void);
int64_t function_2a1c34(void);
int64_t function_2a1c5a(int64_t a1, int64_t a2);
int64_t function_2a1c98(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a1c9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a1cdb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a1cf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a1d41(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a1d68(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a1d98(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2a1e66(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a1ee2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a1f2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a1f6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2a208e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a2095(void);
int64_t function_2a20bb(void);
int64_t function_383430(void);
int64_t function_3834a9(int64_t a1);
int64_t function_3834ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3834cb(int64_t a1);
int64_t function_383508(void);
int64_t function_383522(void);
int64_t function_383527(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38352d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_38354c(void);
int64_t function_3835e1(void);
int64_t function_383616(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38365d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3836cf(int64_t a1);
int64_t function_3836f9(int64_t a1);
int64_t function_38372f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_383780(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38385d(void);
int64_t function_38385f(void);
int64_t function_3838a8(void);
int64_t function_3838bd(void);
int64_t function_3838bf(void);
int64_t function_3838c4(void);
int64_t function_3838ed(int64_t a1);
int64_t function_3838f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_383971(void);
int64_t function_383993(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3839cb(int64_t a1);
int64_t function_3839d0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3839e2(void);
int64_t function_3839e7(void);
int64_t function_3839f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_383a10(void);
int64_t function_383a1e(void);
int64_t function_60c1a08();
int64_t function_a41ac5();
int64_t function_ffffffffa4ea1eb0();
int64_t function_ffffffffaf2b35e2();
int64_t function_ffffffffaf3ffc55();
int64_t function_ffffffffd8910c0f();
int64_t function_ffffffffe4b2283d();
int64_t function_ffffffffe85e3756();
int64_t function_ffffffffe86284bc();
int64_t function_ffffffffe8bcd2aa();
int64_t unknown_282f7dac();
int64_t unknown_669db14c();
int64_t unknown_83e8f3d();
int64_t unknown_ffffffff845c4dca();
int64_t unknown_ffffffff883a3901();
int64_t unknown_ffffffff923a6636();
int64_t unknown_ffffffffb3df5101();
int64_t unknown_ffffffffbd295fff();
int64_t unknown_ffffffffc476404c();
int64_t unknown_ffffffffd2abeec1();
int64_t unknown_ffffffffe22cb7d8();
int64_t unknown_fffffffff7eb1b86();

// Address range: 0x2a1719 - 0x2a171a
int64_t function_2a1719(void) {
    // 0x2a1719
    int64_t v1; // 0x2a1719
    return v1 & 0xffffffff;
}

// Address range: 0x2a171f - 0x2a1720
int64_t function_2a171f(int64_t a1) {
    // 0x2a171f
    int64_t result; // 0x2a171f
    return result;
}

// Address range: 0x2a172a - 0x2a1733
int64_t function_2a172a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a172a
    return function_ffffffffd8910c0f();
}

// Address range: 0x2a1775 - 0x2a177f
int64_t function_2a1775(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a1775
    int64_t result; // 0x2a1775
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x2a1819 - 0x2a1820
int64_t function_2a1819(int64_t a1, int64_t a2) {
    // 0x2a1819
    int64_t v1; // 0x2a1819
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x2a1819
    int64_t v3 = v2 ? -4 : 4; // 0x2a1819
    return function_60c1a08(v3 + a1, v3 + a2);
}

// Address range: 0x2a1823 - 0x2a1828
int64_t function_2a1823(void) {
    // 0x2a1823
    return function_ffffffffe8bcd2aa();
}

// Address range: 0x2a1852 - 0x2a1853
int64_t function_2a1852(void) {
    // 0x2a1852
    int64_t result; // 0x2a1852
    return result;
}

// Address range: 0x2a1871 - 0x2a18b9
int64_t function_2a1871(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2; // 0x2a1871
    *(int32_t *)(a4 - 9 + v2) = (int32_t)v2;
    bool v3; // 0x2a1871
    int64_t v4 = a4 - 256 * (v2 + (int64_t)v3) & 0xff00 | a4 & -0xff01; // 0x2a1875
    int64_t v5; // 0x2a1871
    int32_t v6 = *(int32_t *)&v5 + (int32_t)v2; // 0x2a1877
    *(int32_t *)a3 = v6;
    int64_t result = (int64_t)&v1; // 0x2a1879
    *(char *)(v4 + 108) = (char)(result / 256);
    if (v4 != 1 != (v6 == 0)) {
        // 0x2a1880
        return result;
    }
    // 0x2a18af
    *(char *)(a1 + 0x5f01e885) = (char)result;
    int64_t result2 = result; // 0x2a18b5
    if (v6 < 0) {
        result2 = function_2a1852();
    }
    // 0x2a1880
    return result2;
}

// Address range: 0x2a18cf - 0x2a18e1
int64_t function_2a18cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0xd0810f0); // 0x2a18cf
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x2a18cf
    *(char *)a1 = (char)result;
    *(int32_t *)-0x33fe172fa9c0b886 = (int32_t)result;
    return result;
}

// Address range: 0x2a1919 - 0x2a191c
int64_t function_2a1919(void) {
    // 0x2a1919
    int64_t result; // 0x2a1919
    return result;
}

// Address range: 0x2a1943 - 0x2a1949
int64_t function_2a1943(void) {
    // 0x2a1943
    return function_ffffffffe85e3756();
}

// Address range: 0x2a1997 - 0x2a1998
int64_t function_2a1997(void) {
    // 0x2a1997
    int64_t result; // 0x2a1997
    return result;
}

// Address range: 0x2a1a3d - 0x2a1a42
int64_t function_2a1a3d(void) {
    // 0x2a1a3d
    return function_ffffffffaf2b35e2();
}

// Address range: 0x2a1af6 - 0x2a1b02
int64_t function_2a1af6(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_ffffffffb3df5101(a1, a2, a3); // 0x2a1afb
    int64_t v1; // 0x2a1af6
    *(char *)a1 = (char)v1;
    return result;
}

// Address range: 0x2a1b40 - 0x2a1b44
int64_t function_2a1b40(void) {
    // 0x2a1b40
    int64_t v1; // 0x2a1b40
    return function_2a1b4c(v1, v1, v1);
}

// Address range: 0x2a1b44 - 0x2a1b4c
int64_t function_2a1b44(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a1b44
    int64_t result; // 0x2a1b44
    int32_t * v1 = (int32_t *)(result - 0xea9fe18); // 0x2a1b44
    *v1 = *v1 + (int32_t)a4;
    __asm_int(-114);
    return result;
}

// Address range: 0x2a1b4c - 0x2a1b4e
int64_t function_2a1b4c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a1b4c
    int64_t result; // 0x2a1b4c
    return result;
}

// Address range: 0x2a1b57 - 0x2a1b5c
int64_t function_2a1b57(void) {
    // 0x2a1b57
    return function_ffffffffaf3ffc55();
}

// Address range: 0x2a1c34 - 0x2a1c39
int64_t function_2a1c34(void) {
    // 0x2a1c34
    return function_a41ac5();
}

// Address range: 0x2a1c5a - 0x2a1c5d
int64_t function_2a1c5a(int64_t a1, int64_t a2) {
    // 0x2a1c5a
    int64_t result; // 0x2a1c5a
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x2a1c98 - 0x2a1c9a
int64_t function_2a1c98(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a1c98
    int64_t result; // 0x2a1c98
    return result;
}

// Address range: 0x2a1c9c - 0x2a1cb6
int64_t function_2a1c9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a1c9c
    int64_t result; // 0x2a1c9c
    char * v1 = (char *)(result + 0x3f65013d); // 0x2a1c9c
    *v1 = *v1 + (char)result;
    int32_t * v2 = (int32_t *)(a1 + 0xcf92473); // 0x2a1ca3
    *v2 = *v2 + (int32_t)a3;
    return result;
}

// Address range: 0x2a1cdb - 0x2a1ce9
int64_t function_2a1cdb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a1cdb
    int64_t result; // 0x2a1cdb
    *(int32_t *)0xbbd54b056025dd = (int32_t)result;
    return result;
}

// Address range: 0x2a1cf1 - 0x2a1d0b
int64_t function_2a1cf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a1cf1
    *(char *)(a4 - 0x9f8af67) = (char)a3;
    int64_t result; // 0x2a1cf1
    *(char *)0x6e0e75400a461d2 = (char)result;
    char v1 = *(char *)0x2ff6c40b; // 0x2a1d04
    *(char *)0x2ff6c40b = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x2a1d41 - 0x2a1d57
int64_t function_2a1d41(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a1d41
    int64_t v1; // 0x2a1d41
    return v1 | 12;
}

// Address range: 0x2a1d68 - 0x2a1d75
int64_t function_2a1d68(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a1d68
    int64_t v1; // 0x2a1d68
    int32_t * v2 = (int32_t *)((v1 & -256 | 61) - 0x270338d6); // 0x2a1d6a
    *v2 = *v2 + (int32_t)a3;
    return function_ffffffffe4b2283d();
}

// Address range: 0x2a1d98 - 0x2a1de4
int64_t function_2a1d98(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2a1d98
    int64_t v1; // 0x2a1d98
    *(int32_t *)(2 * v1 + a2) = (int32_t)a4;
    int64_t v2 = v1 & -256; // 0x2a1da4
    int64_t v3 = unknown_282f7dac(); // 0x2a1da6
    uint32_t v4 = *(int32_t *)v3 + (int32_t)v3; // 0x2a1dae
    *(char *)a1 = (char)v4;
    int64_t v5 = a3 & -0xff01 | (int64_t)&g4; // 0x2a1db6
    int64_t v6; // 0x2a1d98
    *(char *)a4 = *(char *)&v6 + 10;
    bool v7; // 0x2a1d98
    int64_t v8 = v7 ? -4 : 4; // 0x2a1dbb
    int64_t v9 = v8 + a2; // 0x2a1dbb
    int64_t v10 = -1 - (char)(a4 / 256) < (char)a4 ? 255 : 0; // 0x2a1dc4
    __asm_outsd((int16_t)v5, *(int32_t *)v9);
    *(char *)0x7072aed0 = *(char *)0x7072aed0 + (char)(v1 / 256);
    *(char *)((v7 ? -1 : 1) + a1 + v8) = *(char *)v9;
    char * v11 = (char *)(v2 | (int64_t)*(char *)(3 * (v2 | 12))); // 0x2a1dd0
    *v11 = *v11 & (char)(v4 / 256);
    unsigned char v12 = *(char *)(a4 & -0x10000 | (int64_t)&g2 | v10); // 0x2a1dd2
    return v12 > (char)v5 ? 0xf35cef17 : 0xf35cef16;
}

// Address range: 0x2a1e66 - 0x2a1e8d
int64_t function_2a1e66(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a1e66
    bool v1; // 0x2a1e66
    *(int64_t *)0x641a8954 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2;
    char v2 = *(char *)-0x1b294a89; // 0x2a1e70
    int64_t v3; // 0x2a1e66
    *(char *)-0x1b294a89 = v2 + (char)((uint64_t)v3 / 256);
    return function_ffffffffa4ea1eb0(0xe8dd74da);
}

// Address range: 0x2a1ee2 - 0x2a1ef0
int64_t function_2a1ee2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a1ee2
    int64_t v1; // 0x2a1ee2
    uint64_t v2 = v1;
    char v3 = *(char *)(v1 + 0x5f02c00a); // 0x2a1ee9
    return 256 * (int64_t)((char)(v2 / 256) - v3) | v2 & -0xff01;
}

// Address range: 0x2a1f2d - 0x2a1f3a
int64_t function_2a1f2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a1f2d
    int64_t v1; // 0x2a1f2d
    uint64_t v2 = v1;
    char * v3 = (char *)(a1 + 61 + 8 * v2); // 0x2a1f2d
    *v3 = *v3 + (char)(v2 / 256);
    return v2 + a1 & 0xffffffff;
}

// Address range: 0x2a1f6d - 0x2a206c
int64_t function_2a1f6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2a1f6d
    int64_t v1; // 0x2a1f6d
    char v2 = v1; // 0x2a1f74
    unsigned char v3 = llvm_ctpop_i8(v2 - 1); // 0x2a1f74
    __asm_out_133(33, v2);
    int32_t v4 = v1;
    if (v3 % 2 == 0) {
        // 0x2a1fe1
        return (int64_t)(*(int32_t *)(v1 + 0x1c1f6293c) + v4);
    }
    // 0x2a1fcb
    __asm_out_134(118, v4);
    int64_t result = unknown_ffffffffe22cb7d8(); // 0x2a1fd2
    int32_t * v5 = (int32_t *)(result - 0x40fec300); // 0x2a1fd7
    *v5 = -*v5;
    return result;
}

// Address range: 0x2a208e - 0x2a2091
int64_t function_2a208e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x2a208e
    if (v1 != 0) {
        unsigned char v2 = (char)a1;
        *(char *)a1 = v2 >> 8 - v1 | v2 << v1;
    }
    int64_t result; // 0x2a208e
    return result;
}

// Address range: 0x2a2095 - 0x2a2098
int64_t function_2a2095(void) {
    // 0x2a2095
    int64_t result; // 0x2a2095
    return result;
}

// Address range: 0x2a20bb - 0x2a20c2
int64_t function_2a20bb(void) {
    // 0x2a20bb
    return unknown_ffffffffd2abeec1();
}

// Address range: 0x383430 - 0x383435
int64_t function_383430(void) {
    // 0x383430
    return unknown_ffffffff923a6636();
}

// Address range: 0x3834a9 - 0x3834aa
int64_t function_3834a9(int64_t a1) {
    // 0x3834a9
    int64_t result; // 0x3834a9
    return result;
}

// Address range: 0x3834ae - 0x3834bd
int64_t function_3834ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3834ae
    int64_t v1; // 0x3834ae
    int64_t v2 = v1;
    *(char *)((v1 & 0xffffffff) - 0x1e52deae) = -24;
    int32_t * v3 = (int32_t *)(a2 - 35); // 0x3834b7
    *v3 = *v3 + (int32_t)a4;
    return (v2 + 24) % 256 | v2 & -256;
}

// Address range: 0x3834cb - 0x3834cc
int64_t function_3834cb(int64_t a1) {
    // 0x3834cb
    int64_t result; // 0x3834cb
    return result;
}

// Address range: 0x383508 - 0x38350c
int64_t function_383508(void) {
    // 0x383508
    int64_t v1; // 0x383508
    return v1 ^ 128;
}

// Address range: 0x383522 - 0x383523
int64_t function_383522(void) {
    // 0x383522
    int64_t result; // 0x383522
    return result;
}

// Address range: 0x383527 - 0x38352d
int64_t function_383527(int64_t a1, int64_t a2, int64_t a3) {
    // 0x383527
    int64_t v1; // 0x383527
    int64_t v2 = v1;
    return (v2 & 0xff00) + v1 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x38352d - 0x38354b
int64_t function_38352d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x38352d
    *(char *)a1 = __asm_insb((int16_t)(2 * a3 & 254 | 512 * a3 / 128));
    *(int32_t *)0x10f8b147 = *(int32_t *)0x10f8b147 + (int32_t)a1;
    return unknown_669db14c();
}

// Address range: 0x38354c - 0x38354e
int64_t function_38354c(void) {
    // 0x38354c
    return function_383522();
}

// Address range: 0x3835e1 - 0x3835e4
int64_t function_3835e1(void) {
    // 0x3835e1
    int64_t result; // 0x3835e1
    return result;
}

// Address range: 0x383616 - 0x383622
int64_t function_383616(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x383616
    int64_t result; // 0x383616
    int32_t * v1 = (int32_t *)(2 * result + 61); // 0x383616
    bool v2; // 0x383616
    *v1 = (int32_t)v2 - (int32_t)result + *v1;
    int32_t * v3 = (int32_t *)(a3 - 15); // 0x38361a
    *v3 = *v3 + (int32_t)a1;
    return result;
}

// Address range: 0x38365d - 0x383674
int64_t function_38365d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38365d
    int64_t v1; // 0x38365d
    int32_t * v2 = (int32_t *)(v1 + 0x1e83a08); // 0x38365d
    *v2 = *v2 + (int32_t)v1;
    __asm_out_133(-115, (char)v1);
    return v1 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x3836cf - 0x3836d5
int64_t function_3836cf(int64_t a1) {
    // 0x3836cf
    return function_134238bd();
}

// Address range: 0x3836f9 - 0x383701
int64_t function_3836f9(int64_t a1) {
    // 0x3836f9
    return unknown_ffffffffbd295fff(a1);
}

// Address range: 0x38372f - 0x383752
int64_t function_38372f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38372f
    int64_t v1; // 0x38372f
    *(char *)a2 = (char)(v1 ^ a2);
    __asm_wait(unknown_83e8f3d() & 0xffffffff);
    int64_t v2 = unknown_ffffffffc476404c(); // 0x383746
    __asm_out_135((int16_t)a3, (char)v2);
    return v2 + 0x47f30552 & 0xffffffff;
}

// Address range: 0x383780 - 0x3837a6
int64_t function_383780(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_fffffffff7eb1b86(); // 0x383780
    int64_t v1 = a3 & -256 | 106; // 0x383794
    char * v2 = (char *)(v1 - 0x17ff6ee7); // 0x383799
    *v2 = *v2 + (char)result;
    int32_t * v3 = (int32_t *)((124 * a3 & 0xfffffffc) - 119 + 4 * result); // 0x38379f
    int64_t v4; // 0x383780
    *v3 = *v3 + (int32_t)v4;
    __asm_out((int16_t)v1, (int32_t)result);
    return result;
}

// Address range: 0x38385d - 0x38385e
int64_t function_38385d(void) {
    // 0x38385d
    int64_t result; // 0x38385d
    return result;
}

// Address range: 0x38385f - 0x383860
int64_t function_38385f(void) {
    // 0x38385f
    int64_t result; // 0x38385f
    return result;
}

// Address range: 0x3838a8 - 0x3838ad
int64_t function_3838a8(void) {
    // 0x3838a8
    return function_ffffffffe86284bc();
}

// Address range: 0x3838bd - 0x3838bf
int64_t function_3838bd(void) {
    // 0x3838bd
    return function_38385f();
}

// Address range: 0x3838bf - 0x3838c2
int64_t function_3838bf(void) {
    // 0x3838bf
    int64_t result; // 0x3838bf
    bool v1; // 0x3838bf
    if (!v1) {
        result = function_38385d();
    }
    // 0x3838c1
    return result;
}

// Address range: 0x3838c4 - 0x3838cb
int64_t function_3838c4(void) {
    // 0x3838c4
    return unknown_ffffffff845c4dca();
}

// Address range: 0x3838ed - 0x3838f1
int64_t function_3838ed(int64_t a1) {
    // 0x3838ed
    int64_t result; // 0x3838ed
    return result;
}

// Address range: 0x3838f4 - 0x383904
int64_t function_3838f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3838f4
    return unknown_ffffffff883a3901(a1, a2, a3, a4, a5);
}

// Address range: 0x383971 - 0x383975
int64_t function_383971(void) {
    // 0x383971
    int64_t result; // 0x383971
    return result;
}

// Address range: 0x383993 - 0x3839bb
int64_t function_383993(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x383993
    int64_t v1; // 0x383993
    uint64_t v2 = v1;
    unsigned char v3 = (char)(v2 / 256) - *(char *)(v2 - 0x2f6a039d); // 0x383995
    int32_t * v4 = (int32_t *)(v1 - 0x5fff3420); // 0x38399d
    *v4 = *v4 + (int32_t)v1;
    int64_t result = 256 * (int64_t)v3 | v2 & -0xff01; // 0x3839a3
    char * v5 = (char *)(result - 53); // 0x3839a5
    *v5 = *v5 - v3;
    int32_t * v6 = (int32_t *)(a2 - 100); // 0x3839ac
    *v6 = *v6 + ((int32_t)a3 & -0xff01 | (int32_t)&g7);
    char * v7 = (char *)(result + 0x1f7a5e48); // 0x3839af
    *v7 = *v7 | (char)v2;
    return result;
}

// Address range: 0x3839cb - 0x3839cc
int64_t function_3839cb(int64_t a1) {
    // 0x3839cb
    int64_t result; // 0x3839cb
    return result;
}

// Address range: 0x3839d0 - 0x3839d7
int64_t function_3839d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3839d0
    int64_t result; // 0x3839d0
    return result;
}

// Address range: 0x3839e2 - 0x3839e3
int64_t function_3839e2(void) {
    // 0x3839e2
    int64_t result; // 0x3839e2
    return result;
}

// Address range: 0x3839e7 - 0x3839e8
int64_t function_3839e7(void) {
    // 0x3839e7
    int64_t result; // 0x3839e7
    return result;
}

// Address range: 0x3839f0 - 0x3839fb
int64_t function_3839f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3839f0
    int64_t v1; // 0x3839f0
    int32_t * v2 = (int32_t *)(v1 + 0x1e8f4f7); // 0x3839f0
    *v2 = *v2 - (int32_t)a3;
    return v1 & -55;
}

// Address range: 0x383a10 - 0x383a12
int64_t function_383a10(void) {
    // 0x383a10
    int64_t result; // 0x383a10
    return result;
}

// Address range: 0x383a1e - 0x383a20
int64_t function_383a1e(void) {
    // 0x383a1e
    return function_3839e7();
}
