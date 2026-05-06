/*
 * Targeted RetDec C for native executable gap queue batch 783.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1ccc01-0x1cce01 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cce01-0x1cd001 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cd001-0x1cd201 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cd201-0x1cd401 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cd401-0x1cd601 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37071b-0x37091b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37091b-0x370b1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x370b1b-0x370d1b rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1ccc01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ccd0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1cce5d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1ccfaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1cd0f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1cd23c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1cd38d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cd56d(void);
int64_t function_1cd5ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37071b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_370813(int64_t a1);
int64_t function_370815(void);
int64_t function_370816(void);
int64_t function_370889(int64_t a1);
int64_t function_3708b5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3708d3(void);
int64_t function_37092c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3709e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_370a1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_370a65(int64_t a1);
int64_t function_370a83(int64_t a1);
int64_t function_370a8f(void);
int64_t function_370abd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_370ac3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_370aee(int64_t a1, int64_t a2, int64_t result);
int64_t function_370af9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_370b87(void);
int64_t function_370b8d(int64_t a1);
int64_t function_370bb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_370bea(void);
int64_t function_370bed(int64_t a1, int64_t a2, int64_t a3);
int64_t function_370c90(void);
int64_t function_370cff(void);
int64_t function_370d02(int64_t a1);
int64_t function_3d37e888();
int64_t function_cc59c();
int64_t function_ffffffffec9e1e66();
int64_t unknown_1740a06();
int64_t unknown_2b2d5a32();
int64_t unknown_302d5241();
int64_t unknown_3a6354bb();
int64_t unknown_3e3205e8();
int64_t unknown_573bf152();
int64_t unknown_6fea2049();
int64_t unknown_7a598961();

// Address range: 0x1ccc01 - 0x1ccd0a
int64_t function_1ccc01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ccc01
    int64_t v1; // 0x1ccc01
    int64_t v2 = v1;
    __asm_out((int16_t)a3, (int32_t)v2);
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x1ccc01
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t v5; // 0x1ccc01
    int64_t v6 = (int64_t)&v5; // 0x1ccc56
    int64_t * v7 = (int64_t *)(v6 - 8); // 0x1ccc5e
    int64_t * v8 = (int64_t *)(v6 - 16); // 0x1ccc7a
    *v7 = 0x1d8661cc;
    int64_t v9 = v6 + 8; // 0x1ccc95
    *(int64_t *)v9 = *v7;
    *v7 = 0x690dc16d;
    *(int64_t *)(v6 - 24) = *(int64_t *)(v6 + 16);
    *(int64_t *)(v6 + 24) = *v7;
    *v8 = a2;
    *v7 = v9;
    *v7 = v5;
    *v8 = v6;
    return function_cc59c(a1, a2, v1, v1, v1, v1, v5);
}

// Address range: 0x1ccd0a - 0x1cce5d
int64_t function_1ccd0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ccd0a
    int64_t v1; // 0x1ccd0a
    return function_cc59c(a1, a2, a3, a4, v1, v1, a5);
}

// Address range: 0x1cce5d - 0x1ccfaa
int64_t function_1cce5d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1cce5d
    int64_t v1; // 0x1cce5d
    return function_cc59c(a1, a2, a3, v1, v1, v1, 0x1c5522);
}

// Address range: 0x1ccfaa - 0x1cd0f1
int64_t function_1ccfaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1ccfaa
    return function_cc59c(a1, a2, a3, a4, a5, a6, 169);
}

// Address range: 0x1cd0f1 - 0x1cd23c
int64_t function_1cd0f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1cd0f1
    return function_cc59c(a1, a2, a3, a4, a5, 310, 0x1c6316);
}

// Address range: 0x1cd23c - 0x1cd38d
int64_t function_1cd23c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x63a3870a; // bp-40, 0x1cd2bf
    int64_t v2 = (int64_t)&v1; // 0x1cd2f6
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x1cd2fe
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x1cd2fe
    bool v5; // 0x1cd23c
    *v3 = 0x4000 * (int64_t)(bool)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2;
    v1 = 0x2d4c2cd1;
    *v4 = 0x5840ca70;
    *(int64_t *)(v2 - 16) = *v3;
    *(int64_t *)(v2 + 32) = v1;
    int64_t v6 = v2 + 8; // 0x1cd352
    int64_t * v7 = (int64_t *)v6; // 0x1cd356
    *v4 = *v7;
    v1 = v6;
    *v7 = v2 + 24;
    return function_cc59c(a1, a2, a3, a4, *v7, a6, v1);
}

// Address range: 0x1cd38d - 0x1cd4f8
int64_t function_1cd38d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x537bff93; // bp-32, 0x1cd3de
    int64_t v2; // 0x1cd38d
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x1cd44c
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x1cd44c
    *v4 = v3;
    int64_t v5 = v2 - 16; // 0x1cd454
    int64_t * v6 = (int64_t *)v5; // 0x1cd454
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x1cd464
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x1cd466
    *v8 = *v6;
    int64_t v9 = v2 + 8; // 0x1cd479
    int64_t v10 = *(int64_t *)v9; // 0x1cd479
    *v7 = v10;
    *v6 = 0x139e16a8;
    *v8 = v3;
    *(int64_t *)v2 = *v6;
    *v6 = a4;
    *v7 = v5;
    *v6 = v10;
    *(int64_t *)(v2 + 16) = v10;
    *v7 = *v4;
    *v4 = a3;
    *v6 = v9;
    int64_t v11 = *v4; // 0x1cd4ea
    *v7 = v11;
    return function_cc59c(a1, a2, v11, *v6, v2, v2, (int64_t)&v1 - 8);
}

// Address range: 0x1cd56d - 0x1cd56e
int64_t function_1cd56d(void) {
    // 0x1cd56d
    int64_t result; // 0x1cd56d
    return result;
}

// Address range: 0x1cd5ef - 0x1cd5f6
int64_t function_1cd5ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1cd5ef
    bool v1; // 0x1cd5ef
    if (a4 != 1 == v1) {
        // 0x1cd65a
        int64_t result; // 0x1cd5ef
        return result;
    }
    // 0x1cd5f1
    return function_ffffffffec9e1e66();
}

// Address range: 0x37071b - 0x3707f6
int64_t function_37071b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x37071b
    int64_t v1; // 0x37071b
    int64_t v2 = v1;
    int64_t v3 = a4 - 1; // 0x37071b
    bool v4; // 0x37071b
    if (v3 == 0 || v4) {
        int64_t result = v1 & 0xffffffff; // 0x370721
        int32_t * v5 = (int32_t *)((v2 + a2 & 0xffffffff) + 91); // 0x37072b
        uint32_t v6 = *v5; // 0x37072b
        uint32_t v7 = v6 + (int32_t)v3; // 0x37072b
        *v5 = v7;
        int64_t v8; // 0x37071b
        char v9 = *(char *)&v8; // 0x37072e
        *(char *)result = v9 + (char)v1 + (char)(v7 < v6);
        return result;
    }
    // 0x37076e
    *(char *)v2 = 2 * (char)v2;
    *(int32_t *)v2 = 0x6a5048d7;
    uint32_t v10 = 9 * *(int32_t *)v3; // 0x370779
    int32_t v11 = __readgsdword(a2); // 0x37077c
    int64_t v12 = (a5 & (int64_t)&g1) == 0 ? 4 : -4; // 0x37077c
    int32_t v13 = v11 >> 31; // 0x37077e
    return __asm_iretd(a1, v12 + a2, ((int64_t)(v10 / 256) - v1) % 256 | (int64_t)(v13 & -256), (int64_t)(256 * v13 & 0xff00 | v10 & -0xff01));
}

// Address range: 0x370813 - 0x370815
int64_t function_370813(int64_t a1) {
    // 0x370813
    int64_t result; // 0x370813
    return result;
}

// Address range: 0x370815 - 0x370816
int64_t function_370815(void) {
    // 0x370815
    int64_t result; // 0x370815
    return result;
}

// Address range: 0x370816 - 0x370818
int64_t function_370816(void) {
    // 0x370816
    int64_t result; // 0x370816
    return result;
}

// Address range: 0x370889 - 0x37088c
int64_t function_370889(int64_t a1) {
    // 0x370889
    int64_t result; // 0x370889
    return result;
}

// Address range: 0x3708b5 - 0x3708b9
int64_t function_3708b5(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 35); // 0x3708b5
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x3708b5
    return result;
}

// Address range: 0x3708d3 - 0x3708d6
int64_t function_3708d3(void) {
    // 0x3708d3
    int64_t result; // 0x3708d3
    return result;
}

// Address range: 0x37092c - 0x3709c3
int64_t function_37092c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37092c
    unknown_2b2d5a32();
    int64_t v1 = unknown_302d5241(); // 0x37093b
    unsigned char v2 = (v1 & 256) != 0 ? 62 : 61; // 0x37094a
    char v3 = unknown_573bf152(); // 0x370956
    unsigned char v4 = (char)v1; // 0x370956
    char v5 = v3 + v4 + 2 * (char)((v1 & 256) != 0 | v2 > (char)a4); // 0x370956
    __asm_in(80);
    int64_t v6 = unknown_7a598961(); // 0x37095b
    if (((v5 ^ v3) & (v5 ^ v4)) < 0) {
        // 0x370962
        return v6 & -256 | (int64_t)__asm_in(49);
    }
    // 0x3709b1
    *(char *)0x3500cb5d = *(char *)0x3500cb5d & (char)v6;
    int64_t result = unknown_3a6354bb(); // 0x3709b5
    unsigned char v7 = v4 % 32; // 0x3709bd
    if (v7 != 0) {
        char * v8 = (char *)(a1 - 8); // 0x3709bd
        unsigned char v9 = *v8; // 0x3709bd
        *v8 = v9 >> v7 | (char)((int16_t)v9 << (int16_t)(9 - v7));
    }
    uint32_t v10 = (int32_t)v1 % 32; // 0x3709c0
    if (v10 != 0) {
        int32_t * v11 = (int32_t *)result; // 0x3709c0
        uint32_t v12 = *v11; // 0x3709c0
        *v11 = v12 >> 32 - v10 | v12 << v10;
    }
    return result;
}

// Address range: 0x3709e0 - 0x370a06
int64_t function_3709e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3709e0
    int64_t v1; // 0x3709e0
    int32_t * v2 = (int32_t *)((unknown_3e3205e8() + 2 * v1 & 0xffffffff) + 0x24371009); // 0x3709eb
    *v2 = *v2 + (int32_t)v1;
    bool v3; // 0x3709e0
    int64_t v4 = v3 ? -4 : 4; // 0x3709f1
    int32_t * v5 = (int32_t *)a5; // 0x3709f4
    *v5 = *v5 + (int32_t)a4;
    __asm_iretd(v4 + a1, v4 + a2, a3, a4);
    return unknown_1740a06();
}

// Address range: 0x370a1e - 0x370a65
int64_t function_370a1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x370a1e
    int64_t v1; // 0x370a1e
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = v2 + (int32_t)a1; // 0x370a1e
    *(int32_t *)a1 = v3;
    *(int32_t *)-0x1a94c124c3e95fa0 = (int32_t)v1;
    int64_t v4; // 0x370a1e
    char v5 = *(char *)&v4; // 0x370a2a
    *(char *)a4 = (char)(v3 < v2) - (char)a4 + v5;
    *(char *)0x6fd40d38 = *(char *)0x6fd40d38 + (char)a1;
    __asm_sti();
    unknown_6fea2049();
    *(char *)-0x5fd096ae = *(char *)-0x5fd096ae + (char)(v1 / 256);
    float80_t v6; // 0x370a1e
    *(int16_t *)(a5 + 0xb95b614) = (int16_t)v6;
    int64_t v7; // 0x370a1e
    return (int64_t)*(int32_t *)&v7;
}

// Address range: 0x370a65 - 0x370a68
int64_t function_370a65(int64_t a1) {
    // 0x370a65
    int64_t result; // 0x370a65
    return result;
}

// Address range: 0x370a83 - 0x370a88
int64_t function_370a83(int64_t a1) {
    // 0x370a83
    int64_t v1; // 0x370a83
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x370a8f - 0x370a90
int64_t function_370a8f(void) {
    // 0x370a8f
    int64_t result; // 0x370a8f
    return result;
}

// Address range: 0x370abd - 0x370ac2
int64_t function_370abd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 103); // 0x370abd
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x370abd
    return result;
}

// Address range: 0x370ac3 - 0x370aee
int64_t function_370ac3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x370ac3
    int64_t v1; // 0x370ac3
    if (llvm_ctpop_i8((char)(v1 / 256) - (char)a3) % 2 != 0) {
        function_370a8f();
    }
    int32_t * v2 = (int32_t *)(a2 + 0x23f2ea18); // 0x370aca
    *v2 = *v2 & (int32_t)a3;
    char * v3 = (char *)(a2 - 87); // 0x370ad0
    *v3 = *v3 + (char)a4;
    if (a4 == 0) {
        // 0x370aec
        return function_370af9(a1, a2, a3, 0);
    }
    // 0x370ade
    return v1 + a1 & 0xffffffff;
}

// Address range: 0x370aee - 0x370af2
int64_t function_370aee(int64_t a1, int64_t a2, int64_t result) {
    // 0x370aee
    return result;
}

// Address range: 0x370af9 - 0x370b06
int64_t function_370af9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x370af9
    *(int32_t *)a4 = 0;
    int32_t * v1 = (int32_t *)(a2 + 0xe013daa); // 0x370afb
    int64_t v2; // 0x370af9
    *v1 = *v1 + (int32_t)v2;
    return v2 & 0xffffffff;
}

// Address range: 0x370b87 - 0x370b89
int64_t function_370b87(void) {
    // 0x370b87
    int64_t result; // 0x370b87
    return result;
}

// Address range: 0x370b8d - 0x370b8e
int64_t function_370b8d(int64_t a1) {
    // 0x370b8d
    int64_t result; // 0x370b8d
    return result;
}

// Address range: 0x370bb0 - 0x370bbc
int64_t function_370bb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x370bb0
    *(int32_t *)a4 = 0;
    return function_3d37e888();
}

// Address range: 0x370bea - 0x370beb
int64_t function_370bea(void) {
    // 0x370bea
    int64_t result; // 0x370bea
    return result;
}

// Address range: 0x370bed - 0x370bf1
int64_t function_370bed(int64_t a1, int64_t a2, int64_t a3) {
    // 0x370bed
    int64_t v1; // 0x370bed
    bool v2; // 0x370bed
    *(char *)a3 = (char)v1 - (char)(v1 / 256) + (char)v2;
    return function_370bea();
}

// Address range: 0x370c90 - 0x370c91
int64_t function_370c90(void) {
    // 0x370c90
    int64_t result; // 0x370c90
    return result;
}

// Address range: 0x370cff - 0x370d02
int64_t function_370cff(void) {
    // 0x370cff
    int64_t result; // 0x370cff
    return result;
}

// Address range: 0x370d02 - 0x370d05
int64_t function_370d02(int64_t a1) {
    // 0x370d02
    int64_t result; // 0x370d02
    return result;
}
