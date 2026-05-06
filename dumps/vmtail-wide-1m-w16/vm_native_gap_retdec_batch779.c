/*
 * Targeted RetDec C for native executable gap queue batch 779.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x331e23-0x332023 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3320a3-0x332123 rank=- name=- kind=- bytes=- uncovered=-
 *   0x332123-0x332223 rank=- name=- kind=- bytes=- uncovered=-
 *   0x332323-0x332423 rank=- name=- kind=- bytes=- uncovered=-
 *   0x332423-0x332623 rank=- name=- kind=- bytes=- uncovered=-
 *   0x332623-0x332823 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e5479-0x4e54f9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e57f9-0x4e59f9 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
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

int64_t function_331df0();
int64_t function_331e23(int64_t a1, int64_t a2, int64_t a3);
int64_t function_331e5a(void);
int64_t function_331ea5(int64_t a1, int64_t a2);
int64_t function_331ec8(int64_t a1);
int64_t function_331ef4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_331f27(void);
int64_t function_331f3b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_331fa8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_331ff0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3320a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3320dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_332147(void);
int64_t function_33214a(void);
int64_t function_3321b9(void);
int64_t function_3321c3(void);
int64_t function_3321cb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33220e(int64_t a1);
int64_t function_332323(void);
int64_t function_332324(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_332346(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_332358(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_332401(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_33251a(void);
int64_t function_332566(int64_t a1);
int64_t function_3325bf(void);
int64_t function_3325e9(void);
int64_t function_3325f1(void);
int64_t function_3325f8(void);
int64_t function_3325ff(int64_t a1);
int64_t function_332608(int64_t a1, int64_t a2, int64_t a3);
int64_t function_332668(void);
int64_t function_33268f(void);
int64_t function_332699(void);
int64_t function_3326ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33272b(void);
int64_t function_33274d(int64_t a1);
int64_t function_332788(int64_t a1);
int64_t function_3327c5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3327f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a397346();
int64_t function_3b52bf();
int64_t function_4e5479(void);
int64_t function_4e549e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e57f9(void);
int64_t function_4e5855(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e5860(void);
int64_t function_4e587d(void);
int64_t function_4e587e(void);
int64_t function_4e5893(void);
int64_t function_4e589a(void);
int64_t function_4e58a8(void);
int64_t function_4e58b7(void);
int64_t function_4e58bd(void);
int64_t function_4e58fb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e5985(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e5990(void);
int64_t function_4e59ad(void);
int64_t function_4e59ae(void);
int64_t function_4e59c3(void);
int64_t function_4e59ca(void);
int64_t function_4e59d8(void);
int64_t function_4e59e7(void);
int64_t function_4e59ed(void);
int64_t function_ffffffffe89c06cc();
int64_t function_ffffffffef5d990a();
int64_t function_ffffffffef5d99c1();
int64_t function_ffffffffef5d9af1();
int64_t function_ffffffffef5d9d67();
int64_t unknown_1702376();
int64_t unknown_2635bf15();
int64_t unknown_3dcd0408();
int64_t unknown_5e40e108();
int64_t unknown_ffffffff8187dcfd();
int64_t unknown_ffffffff90c72911();
int64_t unknown_ffffffffafd03e36();
int64_t unknown_ffffffffeac4fddb();
int64_t unknown_fffffffffd0e4977();

// Address range: 0x331e23 - 0x331e35
int64_t function_331e23(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3; // 0x331e23
    int64_t result; // 0x331e23
    char * v2 = (char *)(a1 + 0x3d9950a4); // 0x331e29
    *v2 = *v2 | (char)(result / 256);
    v1 = (result + a3) % 256 | a3 & -256;
    int32_t * v3 = (int32_t *)(v1 - 97); // 0x331e2f
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x331e5a - 0x331e5d
int64_t function_331e5a(void) {
    // 0x331e5a
    return function_331df0();
}

// Address range: 0x331ea5 - 0x331eb2
int64_t function_331ea5(int64_t a1, int64_t a2) {
    // 0x331ea5
    bool v1; // 0x331ea5
    bool v2 = v1;
    return __asm_iretd((v2 ? -4 : 4) + a1 + (v2 ? -1 : 1));
}

// Address range: 0x331ec8 - 0x331ec9
int64_t function_331ec8(int64_t a1) {
    // 0x331ec8
    int64_t result; // 0x331ec8
    return result;
}

// Address range: 0x331ef4 - 0x331eff
int64_t function_331ef4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x331ef4
    int64_t result; // 0x331ef4
    return result;
}

// Address range: 0x331f27 - 0x331f28
int64_t function_331f27(void) {
    // 0x331f27
    int64_t result; // 0x331f27
    return result;
}

// Address range: 0x331f3b - 0x331f46
int64_t function_331f3b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(8 * a4 + a2); // 0x331f3d
    char v2 = *v1; // 0x331f3d
    char v3 = a3 / 256; // 0x331f3d
    bool v4; // 0x331f3b
    char v5 = v4; // 0x331f3d
    char v6 = v5 + v3 + v2; // 0x331f3d
    char v7 = v6 + v5; // 0x331f3d
    *v1 = v6;
    int64_t v8; // 0x331f3b
    int64_t result = 0x10000 * (int32_t)v8 >> 16; // 0x331f41
    if (v6 < 0 != ((v7 ^ v2) & (v7 ^ v3)) < 0) {
        result = function_331f27();
    }
    // 0x331f43
    return result;
}

// Address range: 0x331fa8 - 0x331fc8
int64_t function_331fa8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x331fa8
    int64_t v1; // 0x331fa8
    *(int32_t *)0x5e942b04d02553a6 = (int32_t)v1;
    int64_t result = function_3b52bf(); // 0x331fb9
    *(char *)(a3 + 0x2d78013d) = (char)result;
    return result;
}

// Address range: 0x331ff0 - 0x331ffe
int64_t function_331ff0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x331ff0
    int64_t v1; // 0x331ff0
    int64_t v2 = v1;
    char * v3 = (char *)(a2 + 0x79ce1e8c); // 0x331ff0
    *v3 = *v3 + (char)a3;
    return (v2 + a3) % 256 | v2 & -256;
}

// Address range: 0x3320a3 - 0x3320db
int64_t function_3320a3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3320a3
    int64_t v1; // 0x3320a3
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 | 28;
    int64_t v3 = a2 & 0xffffffff; // 0x3320ae
    char v4 = *(char *)0x423d9fb6; // 0x3320af
    *(char *)0x423d9fb6 = v4 + (char)((int64_t)&g1 >> 8);
    int64_t v5; // 0x3320a3
    uint32_t v6 = *(int32_t *)&v5; // 0x3320bb
    uint32_t v7 = v6 + (int32_t)a3; // 0x3320bb
    *(int32_t *)v3 = v7;
    int64_t v8 = v3 + 29; // 0x3320c0
    __writefsbyte(v8, __readfsbyte(v8) - (char)(a3 / 256) + (char)(v7 < v6));
    char v9 = *(char *)0x412d32d0; // 0x3320c8
    *(char *)0x412d32d0 = v9 + (char)((int64_t)&g1 >> 8);
    return a4 & 0xffff00ff | (int64_t)(int32_t)&g3;
}

// Address range: 0x3320dc - 0x3320ff
int64_t function_3320dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3320dc
    int64_t v1; // 0x3320dc
    char * v2 = (char *)(v1 + 0x707e013d); // 0x3320dc
    bool v3; // 0x3320dc
    *v2 = (char)v3 - (char)a5 + *v2;
    *(char *)-0x5fb83e20 = *(char *)-0x5fb83e20 + (char)(v1 / 256);
    __asm_hlt();
    int64_t result = __asm_sti(); // 0x3320f4
    *(int32_t *)result = (int32_t)result;
    return result;
}

// Address range: 0x332147 - 0x332148
int64_t function_332147(void) {
    // 0x332147
    int64_t result; // 0x332147
    return result;
}

// Address range: 0x33214a - 0x33214b
int64_t function_33214a(void) {
    // 0x33214a
    int64_t result; // 0x33214a
    return result;
}

// Address range: 0x3321b9 - 0x3321c3
int64_t function_3321b9(void) {
    // 0x3321b9
    return function_33214a();
}

// Address range: 0x3321c3 - 0x3321c4
int64_t function_3321c3(void) {
    // 0x3321c3
    int64_t result; // 0x3321c3
    return result;
}

// Address range: 0x3321cb - 0x3321ea
int64_t function_3321cb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3321cb
    int64_t v1; // 0x3321cb
    int64_t result = v1 & 0xffffffff ^ 0xf0ec512; // 0x3321cb
    int32_t v2 = result; // 0x3321d6
    *(int32_t *)a1 = v2;
    bool v3; // 0x3321cb
    *(int32_t *)(a1 - 13 + (v3 ? -4 : 4)) = (int32_t)a2;
    __asm_out(35, v2);
    return result;
}

// Address range: 0x33220e - 0x332218
int64_t function_33220e(int64_t a1) {
    // 0x33220e
    return (int64_t)*(int32_t *)-0x3a869da5c6e55bd4;
}

// Address range: 0x332323 - 0x332324
int64_t function_332323(void) {
    // 0x332323
    int64_t result; // 0x332323
    return result;
}

// Address range: 0x332324 - 0x332340
int64_t function_332324(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x332324
    int64_t v1; // bp-8, 0x332324
    int64_t v2; // 0x332324
    *(int32_t *)a4 = (int32_t)(int64_t)&v1 + (int32_t)v2;
    int32_t v3 = *(int32_t *)(a3 + 13); // 0x332330
    uint32_t result = v3 & (int32_t)(v2 & 0xffffff00 | (uint64_t)v2 % 256); // 0x332330
    *(int32_t *)a1 = result;
    int32_t * v4 = (int32_t *)(a4 - 0x10ceffed); // 0x332337
    *v4 = *v4 ^ (int32_t)a3;
    return result;
}

// Address range: 0x332346 - 0x332354
int64_t function_332346(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x332346
    int64_t v1; // 0x332346
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a2;
    char * v2 = (char *)(v1 - 20); // 0x33234e
    *v2 = *v2 | (char)(a3 / 256);
    return result;
}

// Address range: 0x332358 - 0x332400
int64_t function_332358(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x332358
    int64_t result2; // 0x332358
    if ((char)result2 >= (char)result2) {
        // 0x3323de
        *(int32_t *)0x2b01e877150d3e95 = (int32_t)result2;
        int64_t result = unknown_ffffffff8187dcfd(result2 & 0xffffffff); // 0x3323f7
        __asm_int(32);
        return result;
    }
    char * v1 = (char *)(2 * a4 & 254 | a4 & -256); // 0x332366
    char v2 = *v1 + (char)(a4 / 256); // 0x332366
    *v1 = v2;
    __asm_out_133(62, (char)result2);
    if (v2 == 0) {
        // 0x332370
        return unknown_1702376();
    }
    char * v3 = (char *)(result2 - 97); // 0x33237d
    *v3 = *v3 + 93;
    return result2;
}

// Address range: 0x332401 - 0x3324bb
int64_t function_332401(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2 = unknown_3dcd0408(); // 0x332402
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v3 = unknown_2635bf15(0x13c310); // 0x33240f
    int64_t v4; // 0x332401
    uint16_t v5 = *(int16_t *)&v4; // 0x332414
    bool v6; // 0x332401
    int64_t v7 = (v6 ? -2 : 2) + a2; // 0x332414
    v4 = v7;
    if ((char)v2 > 206) {
        int64_t v8; // 0x332401
        if (a4 == 1 || (v8 & 0x4000) != 0) {
            // 0x33242d
            return v8 & 0xffffffff;
        }
        // 0x332430
        unknown_ffffffffafd03e36();
        int64_t result = __asm_hlt(); // 0x332437
        int32_t * v9 = (int32_t *)(v7 + 0xc3bf91c); // 0x3324b5
        int32_t v10 = *v9; // 0x3324b5
        *v9 = 2 * v10 | (int32_t)(v10 < 0);
        return result;
    }
    int64_t v11 = a5 & -0xff01 | (int64_t)&g4; // 0x332445
    int32_t v12 = *(int32_t *)&v1; // 0x332447
    int32_t v13 = v11; // 0x332447
    int32_t v14 = v12 + v13; // 0x332447
    *(int32_t *)v1 = v14;
    if (v14 < 0 != ((v14 ^ v12) & (v14 ^ v13)) < 0) {
        // 0x33244b
        return a4 & 0xffffffff;
    }
    // 0x3324ab
    __asm_fbld(*(float80_t *)(v11 - 0x417237f6));
    return v3 & -0x10000 | (int64_t)v5;
}

// Address range: 0x33251a - 0x33251f
int64_t function_33251a(void) {
    // 0x33251a
    int64_t result; // 0x33251a
    int32_t * v1 = (int32_t *)(result + 8 * result); // 0x33251a
    int32_t v2 = *v1; // 0x33251a
    *v1 = 2 * v2 | (int32_t)(v2 < 0);
    return result;
}

// Address range: 0x332566 - 0x332567
int64_t function_332566(int64_t a1) {
    // 0x332566
    int64_t result; // 0x332566
    return result;
}

// Address range: 0x3325bf - 0x3325c1
int64_t function_3325bf(void) {
    // 0x3325bf
    int64_t v1; // 0x3325bf
    return function_3325ff(v1);
}

// Address range: 0x3325e9 - 0x3325ea
int64_t function_3325e9(void) {
    // 0x3325e9
    int64_t result; // 0x3325e9
    return result;
}

// Address range: 0x3325f1 - 0x3325f2
int64_t function_3325f1(void) {
    // 0x3325f1
    int64_t result; // 0x3325f1
    return result;
}

// Address range: 0x3325f8 - 0x3325ff
int64_t function_3325f8(void) {
    // 0x3325f8
    int64_t v1; // 0x3325f8
    return v1 + 0xe8931870 + v1 & 0xffffffff;
}

// Address range: 0x3325ff - 0x332607
int64_t function_3325ff(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 102); // 0x3325ff
    int64_t result; // 0x3325ff
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x332608 - 0x332662
int64_t function_332608(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_ffffffff90c72911(); // 0x33260b
    int64_t v2; // 0x332608
    uint32_t v3 = (int32_t)v2; // 0x332610
    uint32_t v4 = *(int32_t *)(v2 + 19) + v3; // 0x332610
    int64_t v5 = v1; // 0x332613
    if (v4 < v3) {
        v5 = function_3325e9();
    }
    uint32_t v6 = (int32_t)v2 >> 31; // 0x33260a
    unsigned char v7 = (char)v2;
    *(char *)v2 = v7 / 128 | 2 * v7;
    char v8 = *(char *)0x1e868e2; // 0x33261c
    int32_t * v9 = (int32_t *)(256 * (int64_t)(v8 ^ (char)(v6 / 256)) | (int64_t)(v6 & -0xff01)); // 0x332622
    int32_t v10 = *v9; // 0x332622
    int32_t v11 = a1; // 0x332622
    int32_t v12 = v10 + v11; // 0x332622
    *v9 = v12;
    int64_t result = v5; // 0x332624
    if (v12 < 0 == ((v12 ^ v10) & (v12 ^ v11)) < 0 == (v12 != 0)) {
        result = function_3325f1();
    }
    // 0x332626
    *(int64_t *)((int64_t)v4 - 8) = 0x1e8687a;
    return result;
}

// Address range: 0x332668 - 0x33266e
int64_t function_332668(void) {
    // 0x332668
    int64_t v1; // 0x332668
    return v1 + 0x56982987 & 0xffffffff;
}

// Address range: 0x33268f - 0x332690
int64_t function_33268f(void) {
    // 0x33268f
    int64_t result; // 0x33268f
    return result;
}

// Address range: 0x332699 - 0x33269a
int64_t function_332699(void) {
    // 0x332699
    int64_t result; // 0x332699
    return result;
}

// Address range: 0x3326ff - 0x33271a
int64_t function_3326ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3326ff
    int64_t v1; // 0x3326ff
    int32_t * v2 = (int32_t *)(v1 + 43); // 0x3326ff
    int32_t v3 = a3; // 0x3326ff
    *v2 = *v2 + v3;
    int64_t v4 = unknown_5e40e108(); // 0x332702
    int32_t * v5 = (int32_t *)(a1 - 49); // 0x332707
    *v5 = *v5 ^ 0x988cef7;
    uint32_t v6 = (int32_t)v4 + 0x1e8f78c; // 0x33270e
    int64_t result = v6; // 0x332714
    if (v6 == 0) {
        result = function_332699();
    }
    int32_t * v7 = (int32_t *)(result - 113); // 0x332716
    *v7 = *v7 + v3;
    return result;
}

// Address range: 0x33272b - 0x332730
int64_t function_33272b(void) {
    // 0x33272b
    return function_ffffffffe89c06cc();
}

// Address range: 0x33274d - 0x33274f
int64_t function_33274d(int64_t a1) {
    // 0x33274d
    int64_t result; // 0x33274d
    return result;
}

// Address range: 0x332788 - 0x33278b
int64_t function_332788(int64_t a1) {
    // 0x332788
    int64_t result; // 0x332788
    return result;
}

// Address range: 0x3327c5 - 0x3327f3
int64_t function_3327c5(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a1; // 0x3327c5
    int64_t v2; // 0x3327c5
    uint32_t v3 = (int32_t)v2 + v1; // 0x3327c5
    int32_t * v4 = (int32_t *)(v2 + 47); // 0x3327c7
    *v4 = *v4 + (int32_t)v2 + (int32_t)(v3 < v1);
    unknown_ffffffffeac4fddb(v3);
    return unknown_fffffffffd0e4977(0x13d0000);
}

// Address range: 0x3327f3 - 0x332803
int64_t function_3327f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3327f3
    return function_3a397346();
}

// Address range: 0x4e5479 - 0x4e547a
int64_t function_4e5479(void) {
    // 0x4e5479
    int64_t result; // 0x4e5479
    return result;
}

// Address range: 0x4e549e - 0x4e54a4
int64_t function_4e549e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e549e
    int64_t v1; // 0x4e549e
    __asm_out_134((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5d990a();
}

// Address range: 0x4e57f9 - 0x4e57fa
int64_t function_4e57f9(void) {
    // 0x4e57f9
    int64_t result; // 0x4e57f9
    return result;
}

// Address range: 0x4e5855 - 0x4e585b
int64_t function_4e5855(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e5855
    int64_t v1; // 0x4e5855
    __asm_out_134((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5d99c1();
}

// Address range: 0x4e5860 - 0x4e5861
int64_t function_4e5860(void) {
    // 0x4e5860
    int64_t result; // 0x4e5860
    return result;
}

// Address range: 0x4e587d - 0x4e587e
int64_t function_4e587d(void) {
    // 0x4e587d
    int64_t result; // 0x4e587d
    return result;
}

// Address range: 0x4e587e - 0x4e5880
int64_t function_4e587e(void) {
    // 0x4e587e
    return function_4e5860();
}

// Address range: 0x4e5893 - 0x4e5895
int64_t function_4e5893(void) {
    // 0x4e5893
    return function_4e587d();
}

// Address range: 0x4e589a - 0x4e589b
int64_t function_4e589a(void) {
    // 0x4e589a
    int64_t result; // 0x4e589a
    return result;
}

// Address range: 0x4e58a8 - 0x4e58aa
int64_t function_4e58a8(void) {
    // 0x4e58a8
    return function_4e589a();
}

// Address range: 0x4e58b7 - 0x4e58b8
int64_t function_4e58b7(void) {
    // 0x4e58b7
    int64_t result; // 0x4e58b7
    return result;
}

// Address range: 0x4e58bd - 0x4e58bf
int64_t function_4e58bd(void) {
    // 0x4e58bd
    return function_4e58b7();
}

// Address range: 0x4e58fb - 0x4e5901
int64_t function_4e58fb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e58fb
    int64_t v1; // 0x4e58fb
    __asm_out_134((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5d9d67();
}

// Address range: 0x4e5985 - 0x4e598b
int64_t function_4e5985(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e5985
    int64_t v1; // 0x4e5985
    __asm_out_134((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5d9af1();
}

// Address range: 0x4e5990 - 0x4e5991
int64_t function_4e5990(void) {
    // 0x4e5990
    int64_t result; // 0x4e5990
    return result;
}

// Address range: 0x4e59ad - 0x4e59ae
int64_t function_4e59ad(void) {
    // 0x4e59ad
    int64_t result; // 0x4e59ad
    return result;
}

// Address range: 0x4e59ae - 0x4e59b0
int64_t function_4e59ae(void) {
    // 0x4e59ae
    return function_4e5990();
}

// Address range: 0x4e59c3 - 0x4e59c5
int64_t function_4e59c3(void) {
    // 0x4e59c3
    return function_4e59ad();
}

// Address range: 0x4e59ca - 0x4e59cb
int64_t function_4e59ca(void) {
    // 0x4e59ca
    int64_t result; // 0x4e59ca
    return result;
}

// Address range: 0x4e59d8 - 0x4e59da
int64_t function_4e59d8(void) {
    // 0x4e59d8
    return function_4e59ca();
}

// Address range: 0x4e59e7 - 0x4e59e8
int64_t function_4e59e7(void) {
    // 0x4e59e7
    int64_t result; // 0x4e59e7
    return result;
}

// Address range: 0x4e59ed - 0x4e59ef
int64_t function_4e59ed(void) {
    // 0x4e59ed
    return function_4e59e7();
}
