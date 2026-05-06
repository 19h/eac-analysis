/*
 * Targeted RetDec C for native executable gap queue batch 867.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x332e23-0x333023 rank=- name=- kind=- bytes=- uncovered=-
 *   0x333023-0x333223 rank=- name=- kind=- bytes=- uncovered=-
 *   0x333223-0x333423 rank=- name=- kind=- bytes=- uncovered=-
 *   0x333423-0x333623 rank=- name=- kind=- bytes=- uncovered=-
 *   0x333623-0x333823 rank=- name=- kind=- bytes=- uncovered=-
 *   0x408de5-0x408fe5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x408fe5-0x4091e5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4095e5-0x4097e5 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
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

int64_t function_15804232();
int64_t function_17033d3();
int64_t function_332e23(void);
int64_t function_332e24(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_332e36(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3330a0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_333143(void);
int64_t function_333157(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_333199(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3331e4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_333235(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33327a(void);
int64_t function_333289(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_333297(int64_t a1, int64_t a2, int64_t a3);
int64_t function_333310(int64_t a1);
int64_t function_33331b(int64_t a1, int64_t a2);
int64_t function_33334e(void);
int64_t function_33335c(void);
int64_t function_333361(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3333a7(int64_t a1);
int64_t function_3333c4(void);
int64_t function_3333cc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3333d3(int64_t a1);
int64_t function_33345f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3334c0(void);
int64_t function_3334cd(void);
int64_t function_3334d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3334f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_333583(int64_t a1, int64_t a2);
int64_t function_333585(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3335cd(void);
int64_t function_33366f(void);
int64_t function_333685(int64_t a1, int64_t a2, int64_t a3);
int64_t function_333699(void);
int64_t function_3336a2(int64_t a1);
int64_t function_3336a8(void);
int64_t function_3336d5(void);
int64_t function_3336e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3336f1(void);
int64_t function_3336f3(void);
int64_t function_3336fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_333755(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33378a(int64_t a1);
int64_t function_33379d(int64_t a1);
int64_t function_3337af(void);
int64_t function_3337d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_408dde();
int64_t function_408de5(void);
int64_t function_408e05(void);
int64_t function_408e1a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_408e3c(void);
int64_t function_408e67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_408e76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_408e8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_408ed6(int64_t a1);
int64_t function_408f20(void);
int64_t function_408f2e(int64_t a1);
int64_t function_408f49(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_408f81(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_408ff6(void);
int64_t function_408ff8(int64_t a1, int64_t a2, int32_t a3, int64_t a4, int64_t a5);
int64_t function_409041(int64_t a1);
int64_t function_409049(void);
int64_t function_409097(int64_t a1);
int64_t function_40909f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4090db(void);
int64_t function_4090e2(void);
int64_t function_4090ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40912a(void);
int64_t function_40914d(void);
int64_t function_409158(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_409175(void);
int64_t function_4091bd(void);
int64_t function_4091ca(int64_t a1);
int64_t function_4095e5(void);
int64_t function_409628(void);
int64_t function_40965d(int64_t a1);
int64_t function_40973c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_58f23821();
int64_t function_71756df2();
int64_t function_ffffffff8419adfc();
int64_t function_ffffffff8420312e();
int64_t function_ffffffff8908bae7();
int64_t function_ffffffffc3baf4c8();
int64_t function_ffffffffd3fd3515();
int64_t function_fffffffffd23b8c0();
int64_t unknown_2a444592();
int64_t unknown_5caeb03d();
int64_t unknown_5fc83d56();
int64_t unknown_6882a76c();
int64_t unknown_ffffffff9c284627();
int64_t unknown_ffffffffb0089119();
int64_t unknown_ffffffffb0aed721();
int64_t unknown_ffffffffb340f017();
int64_t unknown_ffffffffbbad36f9();
int64_t unknown_ffffffffcfba5b18();

// Address range: 0x332e23 - 0x332e24
int64_t function_332e23(void) {
    // 0x332e23
    int64_t result; // 0x332e23
    return result;
}

// Address range: 0x332e24 - 0x332e35
int64_t function_332e24(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t result; // 0x332e24
    if ((*(int32_t *)(a1 - 0x59f71302) & (int32_t)a4) < 0) {
        // 0x332e2c
        return result;
    }
    int32_t * v2 = (int32_t *)(a1 - 54); // 0x332e2e
    *v2 = *v2 + (int32_t)a1;
    int64_t result2 = (int64_t)(*(int32_t *)&v1 & (int32_t)result); // 0x332e31
    char * v3 = (char *)result2; // 0x332e33
    *v3 = *v3 + (char)v1;
    return result2;
}

// Address range: 0x332e36 - 0x33309f
int64_t function_332e36(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3; // 0x332e36
    __asm_out((int16_t)a3, (int32_t)v3);
    v2 = a1;
    bool v4; // 0x332e36
    if (v4) {
        // branch -> 0x332e77
    }
    // 0x332e77
    int3_t v5; // 0x332e36
    __frontend_reg_store_fpr(v5 - 1, 1.0L);
    int32_t * v6 = (int32_t *)(v2 + 0x101a299e); // 0x332e79
    *v6 = *v6 + (int32_t)v2;
    char * v7 = (char *)(v2 + 8 * v3); // 0x332e7f
    *v7 = *v7 | (char)v3;
    char v8 = *(char *)(v3 - 0x7bfe1784); // 0x332e82
    int64_t v9 = a4 & -256 | (int64_t)(v8 | (char)a4); // 0x332e82
    __asm_int(108);
    int64_t v10 = v3 + 0x1580107; // 0x332e8a
    int64_t v11 = a3; // bp-8, 0x332e8f
    uint64_t v12 = a4 / 256; // 0x332e93
    int32_t * v13 = (int32_t *)v9; // 0x332e95
    *v13 = *v13 + (int32_t)a3;
    uint64_t v14 = v10 & 0x56f7dc00 | (v10 ^ v12) & 102 | 0xa9082399; // 0x332e98
    int32_t * v15 = (int32_t *)(v1 + 102); // 0x332e9d
    *v15 = *v15 ^ (int32_t)v9;
    int64_t result2 = v9 & 0xffffffff; // 0x332ea1
    char * v16 = (char *)(v14 - 0xddcfe18 + 2 * v1); // 0x332ea2
    *v16 = *v16 + (char)a3;
    if (*(char *)result2 != (char)v12) {
        // 0x332ef9
        *(char *)v2 = *(char *)&v1;
        int64_t result = v3 & 0xffffffff; // 0x332f01
        *(char *)result = (char)v3;
        char v17 = *(char *)(v1 - 1); // 0x332f09
        *(char *)(v9 + (a3 & 0xff00) & 0xff00 | a3 & 0xffff00ff) = v17;
        return result;
    }
    unsigned char v18 = *(char *)&v1; // 0x332ead
    int64_t v19 = v1; // 0x332ead
    v1 = v19 - 1;
    int32_t * v20 = (int32_t *)(v14 + 0xe8163800 & 0xffffffff); // 0x332eae
    *v20 = 2 * *v20 | (int32_t)(v18 < *(char *)&v2);
    char * v21 = (char *)(v19 + 12); // 0x332eb7
    *v21 = *v21 / 2;
    if ((int32_t)(v2 + 0xffffffff || (int64_t)&v11) != 0) {
        // 0x332ebe
        return result2;
    }
    unsigned char v22 = *(char *)-0xf3381c7; // 0x332f31
    char v23 = v3 / 256; // 0x332f31
    char v24 = v22 + v23; // 0x332f31
    *(char *)-0xf3381c7 = v24;
    int64_t v25 = __asm_wait(); // 0x332f38
    if (v24 < 0 == ((v24 ^ v22) & (v24 ^ v23)) < 0 == (v24 != 0)) {
        int64_t result3 = (v25 - v14 / 256 + (int64_t)(v24 < v22)) % 256 | v25 & -256; // 0x332f9b
        int32_t * v26 = (int32_t *)((v3 & -256 | 122) + 0x13d005d); // 0x332f9d
        *v26 = *v26 + (int32_t)result3;
        return result3;
    }
    int32_t * v27 = (int32_t *)(v1 + 126); // 0x332f40
    *v27 = *v27 + (int32_t)v3;
    int64_t result4 = v25 | 0x68020ffb; // 0x332f43
    char * v28 = (char *)result4; // 0x332f49
    *v28 = *v28 + (char)result4;
    return result4;
}

// Address range: 0x3330a0 - 0x33313d
int64_t function_3330a0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a2;
    bool v2; // 0x3330a0
    if (v2) {
        // 0x3330e4
        *(char *)a3 = (char)a3 + 14;
        int64_t v3; // 0x3330a0
        char * v4 = (char *)(v3 - 45 + v3); // 0x3330ee
        *v4 = *v4 | (char)(a3 / 256);
        return (int64_t)*(int32_t *)&v1;
    }
    // 0x3330a2
    return function_ffffffff8419adfc();
}

// Address range: 0x333143 - 0x33314b
int64_t function_333143(void) {
    // 0x333143
    int64_t v1; // 0x333143
    return function_333199(v1, v1 + 0xb20c36 & 0xffffffff, v1, v1);
}

// Address range: 0x333157 - 0x33315f
int64_t function_333157(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x333157
    int64_t v1; // 0x333157
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)(v1 ^ a1);
    return result;
}

// Address range: 0x333199 - 0x3331b5
int64_t function_333199(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x333199
    int64_t v1; // 0x333199
    int32_t * v2 = (int32_t *)(4 * a2 - 0xb6008cc + v1); // 0x33319b
    *v2 = *v2 + (int32_t)v1;
    return __asm_wait();
}

// Address range: 0x3331e4 - 0x33320d
int64_t function_3331e4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3331e4
    int64_t v1; // 0x3331e4
    int32_t * v2 = (int32_t *)(8 * a4 - 0x7e506232 + v1); // 0x3331e4
    *v2 = *v2 + (int32_t)v1;
    char * v3 = (char *)(v1 - 105 + 8 * v1); // 0x3331eb
    *v3 = *v3 | (char)(a4 / 256);
    char v4 = *(char *)(a4 - 0x17d90000); // 0x3331ef
    int32_t * v5 = (int32_t *)(v1 + 0x23b90444); // 0x3331f8
    int32_t v6 = *v5; // 0x3331f8
    *v5 = v6 & (int32_t)(a3 & 0xffffff00 | (int64_t)((char)a3 - v4));
    int64_t v7; // 0x3331e4
    *(int32_t *)a1 = *(int32_t *)&v7;
    int64_t result = v1 & -24; // 0x333202
    bool v8; // 0x3331e4
    int32_t * v9 = (int32_t *)(a1 - 0x59e4d9ef + (v8 ? -4 : 4)); // 0x333204
    *v9 = *v9 + (int32_t)result;
    return result;
}

// Address range: 0x333235 - 0x33324f
int64_t function_333235(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x333235
    int64_t v1; // 0x333235
    uint64_t v2 = v1;
    uint64_t v3 = unknown_5caeb03d(); // 0x333237
    unsigned char v4 = *(char *)(v3 % 256 + v2); // 0x333240
    *(char *)0x602f1948 = *(char *)0x602f1948 + (char)(v2 / 256);
    return (v3 & 0xffffff00 | (int64_t)v4) + 0x863af5b6 & 0xffffffff;
}

// Address range: 0x33327a - 0x33327b
int64_t function_33327a(void) {
    // 0x33327a
    int64_t result; // 0x33327a
    return result;
}

// Address range: 0x333289 - 0x333297
int64_t function_333289(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x54f3b993; // 0x33328c
    int64_t v2; // 0x333289
    *(char *)0x54f3b993 = v1 + (char)((uint64_t)v2 / 256);
    return function_58f23821();
}

// Address range: 0x333297 - 0x3332aa
int64_t function_333297(int64_t a1, int64_t a2, int64_t a3) {
    // 0x333297
    int64_t v1; // 0x333297
    __asm_rcl(*(char *)(v1 + 0x13d003a));
    return function_33327a();
}

// Address range: 0x333310 - 0x333314
int64_t function_333310(int64_t a1) {
    // 0x333310
    int64_t result; // 0x333310
    return result;
}

// Address range: 0x33331b - 0x333337
int64_t function_33331b(int64_t a1, int64_t a2) {
    int64_t v1 = unknown_ffffffffb0aed721(); // 0x33331b
    int32_t * v2 = (int32_t *)(a2 - 52); // 0x333320
    *v2 = *v2 + (int32_t)a1;
    __writefsbyte(v1, 44);
    int64_t v3 = (int64_t)(-64 * *(int32_t *)0xeeaf232); // 0x33332a
    int64_t v4; // 0x33331b
    *(char *)v3 = *(char *)&v4;
    bool v5; // 0x33331b
    int64_t v6 = v5 ? -1 : 1; // 0x333331
    return function_ffffffff8420312e(v6 + v3, v6 + a2);
}

// Address range: 0x33334e - 0x333355
int64_t function_33334e(void) {
    // 0x33334e
    return function_71756df2();
}

// Address range: 0x33335c - 0x333361
int64_t function_33335c(void) {
    // 0x33335c
    return function_15804232();
}

// Address range: 0x333361 - 0x333388
int64_t function_333361(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    __asm_int1();
    int64_t result = __asm_hlt(); // 0x333375
    int64_t v2; // 0x333361
    *(char *)(v2 & -256 | 18) = (char)((int64_t)&g2 >> 8);
    unsigned char v3 = (char)(a4 / 256) & 98; // 0x333379
    int64_t v4 = 256 * (int64_t)v3 | a4 & -0xff01; // 0x333379
    uint64_t v5 = v4 - 1; // 0x33337d
    if (v3 == 0 || v5 == 0) {
        // 0x33337f
        *(char *)a1 = *(char *)&v1;
        return result;
    }
    char * v6 = (char *)(v4 + 0x700c02e); // 0x333382
    *v6 = *v6 + (char)(v5 / 256);
    return result;
}

// Address range: 0x3333a7 - 0x3333a8
int64_t function_3333a7(int64_t a1) {
    // 0x3333a7
    int64_t result; // 0x3333a7
    return result;
}

// Address range: 0x3333c4 - 0x3333c5
int64_t function_3333c4(void) {
    // 0x3333c4
    int64_t result; // 0x3333c4
    return result;
}

// Address range: 0x3333cc - 0x3333d3
int64_t function_3333cc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3333cc
    int64_t v1; // 0x3333cc
    *(char *)a3 = (char)v1 - (char)((uint64_t)v1 / 256);
    return function_17033d3();
}

// Address range: 0x3333d3 - 0x3333d7
int64_t function_3333d3(int64_t a1) {
    // 0x3333d3
    int64_t result; // 0x3333d3
    return result;
}

// Address range: 0x33345f - 0x333470
int64_t function_33345f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 0x5cf44898); // 0x33345f
    *v1 = *v1 - 2;
    return unknown_6882a76c(a1, a2, a3, a4, a5);
}

// Address range: 0x3334c0 - 0x3334c5
int64_t function_3334c0(void) {
    // 0x3334c0
    return function_ffffffff8908bae7();
}

// Address range: 0x3334cd - 0x3334ce
int64_t function_3334cd(void) {
    // 0x3334cd
    int64_t result; // 0x3334cd
    return result;
}

// Address range: 0x3334d7 - 0x3334f8
int64_t function_3334d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3334d7
    __asm_in(488);
    int64_t v1 = a1 + 0x5215ff77 & 0xffffffff ^ 0x1e826a3; // 0x3334e4
    char * v2 = (char *)v1; // 0x3334e9
    char v3 = *v2; // 0x3334e9
    unsigned char v4 = (char)a4; // 0x3334e9
    *v2 = v3 + v4;
    *(char *)0x701017f = 1;
    return (v1 - (-1 - v3 < v4 ? 4 : 3)) / 2 % 128 | v1 & 0xffffff00;
}

// Address range: 0x3334f8 - 0x33355c
int64_t function_3334f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3334f8
    *(int32_t *)(a2 - 0x6efe17b6) = (int32_t)a3;
    int64_t v1; // 0x3334f8
    int64_t v2; // 0x3334f8
    *(char *)a2 = *(char *)&v1 & (char)v2 - 58;
    __asm_int3();
    uint64_t v3 = unknown_ffffffffcfba5b18(); // 0x333512
    if ((char)a5 < 0 == ((a5 & (int64_t)L"\n2") != 0) != ((a5 & 64) == 0)) {
        // 0x33351b
        int64_t v4; // 0x3334f8
        unknown_ffffffff9c284627(*(int32_t *)&v4 + (int32_t)a1);
        return function_3334cd();
    }
    // 0x33353e
    *(char *)0x15a522365b04019d = *(char *)(v3 % 256 + v2);
    int64_t v5 = unknown_5fc83d56(); // 0x333550
    uint16_t v6 = (int16_t)v5; // 0x333555
    uint16_t v7 = (int16_t)*(char *)(v2 + 0x32b93a0d); // 0x333555
    return v5 & -0x10000 | (int64_t)(v6 / v7 % 256) | (int64_t)(256 * (v6 % v7));
}

// Address range: 0x333583 - 0x333585
int64_t function_333583(int64_t a1, int64_t a2) {
    // 0x333583
    int64_t v1; // 0x333583
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x333585 - 0x3335c7
int64_t function_333585(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t result = __asm_in_133((int16_t)a3); // 0x333585
    uint32_t v1 = (int32_t)a4 % 32; // 0x333586
    bool v2; // 0x333585
    if (v1 == 0) {
        if (v2) {
            // 0x3335c4
            *(int32_t *)a4 = 0;
            return result;
        }
    } else {
        int64_t v3; // 0x333585
        uint32_t v4 = (int32_t)v3; // 0x333586
        int32_t v5 = v4 >> 32 - v1 | v4 << v1; // 0x333586
        if (v1 == 1 ? v5 % 2 != (int32_t)(v5 < 0) : v2) {
            // 0x3335c4
            *(int32_t *)a4 = 0;
            return result;
        }
    }
    // 0x33358a
    return unknown_2a444592();
}

// Address range: 0x3335cd - 0x3335d2
int64_t function_3335cd(void) {
    // 0x3335cd
    return function_ffffffffd3fd3515();
}

// Address range: 0x33366f - 0x333670
int64_t function_33366f(void) {
    // 0x33366f
    int64_t result; // 0x33366f
    return result;
}

// Address range: 0x333685 - 0x33368f
int64_t function_333685(int64_t a1, int64_t a2, int64_t a3) {
    // 0x333685
    int64_t result; // 0x333685
    bool v1; // 0x333685
    if (!v1 && !v1) {
        result = function_33366f();
    }
    // 0x333687
    int64_t v2; // 0x333685
    int32_t * v3 = (int32_t *)(v2 + 0x6478355f); // 0x333687
    *v3 = *v3 + (int32_t)v2;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x333699 - 0x33369a
int64_t function_333699(void) {
    // 0x333699
    int64_t result; // 0x333699
    return result;
}

// Address range: 0x3336a2 - 0x3336a5
int64_t function_3336a2(int64_t a1) {
    // 0x3336a2
    int64_t result; // 0x3336a2
    return result;
}

// Address range: 0x3336a8 - 0x3336b1
int64_t function_3336a8(void) {
    // 0x3336a8
    int64_t v1; // 0x3336a8
    int32_t * v2 = (int32_t *)(v1 + 0x1597a80e); // 0x3336a8
    *v2 = *v2 + (int32_t)v1;
    return function_333699();
}

// Address range: 0x3336d5 - 0x3336d6
int64_t function_3336d5(void) {
    // 0x3336d5
    int64_t result; // 0x3336d5
    return result;
}

// Address range: 0x3336e8 - 0x3336ee
int64_t function_3336e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 42); // 0x3336e8
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x3336e8
    return result;
}

// Address range: 0x3336f1 - 0x3336f3
int64_t function_3336f1(void) {
    // 0x3336f1
    return function_3336d5();
}

// Address range: 0x3336f3 - 0x3336f4
int64_t function_3336f3(void) {
    // 0x3336f3
    int64_t result; // 0x3336f3
    return result;
}

// Address range: 0x3336fb - 0x33371b
int64_t function_3336fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3336fb
    __asm_in_134(-2);
    int64_t v1; // 0x3336fb
    if ((int32_t)v1 - 0x175b6752 + (int32_t)v1 != -0x78b78248) {
        function_3336f3();
    }
    int32_t * v2 = (int32_t *)(a4 - 0x3c770989); // 0x33370b
    *v2 = *v2 + (int32_t)a3;
    return unknown_ffffffffb0089119();
}

// Address range: 0x333755 - 0x333777
int64_t function_333755(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x333755
    int64_t v1; // 0x333755
    int64_t result = v1 & 0x549a9df; // 0x333755
    int32_t * v2 = (int32_t *)(a2 + 21); // 0x33375e
    *v2 = *v2 + (int32_t)(result & v1);
    return result;
}

// Address range: 0x33378a - 0x33378d
int64_t function_33378a(int64_t a1) {
    // 0x33378a
    int64_t result; // 0x33378a
    return result;
}

// Address range: 0x33379d - 0x33379e
int64_t function_33379d(int64_t a1) {
    // 0x33379d
    int64_t result; // 0x33379d
    return result;
}

// Address range: 0x3337af - 0x3337b0
int64_t function_3337af(void) {
    // 0x3337af
    int64_t result; // 0x3337af
    return result;
}

// Address range: 0x3337d8 - 0x33381c
int64_t function_3337d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3337d8
    int64_t v1; // 0x3337d8
    int64_t v2 = v1;
    int64_t v3 = a2;
    char v4 = *(char *)(v2 + 0x91f0fb); // 0x3337d8
    int64_t v5 = (int64_t)(-0xa46fe18 * *(int32_t *)(a4 + 79)); // 0x3337df
    char * v6 = (char *)(unknown_ffffffffbbad36f9(v5) - 0x41f2871); // 0x3337f8
    *v6 = *v6 + ((char)v1 | (char)&g1);
    char * v7 = (char *)(v1 - 0xffe17a9); // 0x3337ff
    *v7 = *v7 - (char)((int64_t)&g1 >> 8);
    *(char *)a5 = (char)((int64_t)&g1 >> 8);
    if ((v2 & 0xffffff00 || (int64_t)(v4 || (char)v2)) != 1) {
        function_3337af();
    }
    int64_t result = unknown_ffffffffb340f017(); // 0x333811
    __asm_out_135(120, (char)result);
    __asm_outsb((int16_t)(v5 | a5), *(char *)&v3);
    return result;
}

// Address range: 0x408de5 - 0x408de6
int64_t function_408de5(void) {
    // 0x408de5
    int64_t result; // 0x408de5
    return result;
}

// Address range: 0x408e05 - 0x408e07
int64_t function_408e05(void) {
    // 0x408e05
    int64_t v1; // 0x408e05
    return function_408e67(v1, v1, v1, v1, v1, (int64_t)&g5);
}

// Address range: 0x408e1a - 0x408e2e
int64_t function_408e1a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408e1a
    int64_t v1; // 0x408e1a
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_408dde();
}

// Address range: 0x408e3c - 0x408e3d
int64_t function_408e3c(void) {
    // 0x408e3c
    int64_t result; // 0x408e3c
    return result;
}

// Address range: 0x408e67 - 0x408e76
int64_t function_408e67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408e67
    int64_t v1; // 0x408e67
    return v1 & -256 | (int64_t)__asm_in_134(126);
}

// Address range: 0x408e76 - 0x408e8f
int64_t function_408e76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x408e76
    int64_t result; // 0x408e76
    *(int32_t *)-0x7005b5ec6ee915d8 = (int32_t)result;
    *(int32_t *)(a1 + 111) = (int32_t)a2;
    *(char *)(4 * a3 + 0xffffffea + result & 0xffffffff) = (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x408e8f - 0x408eca
int64_t function_408e8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x408e8f
    int64_t v1; // 0x408e8f
    int32_t * v2 = (int32_t *)(v1 + 44); // 0x408e95
    *v2 = *v2 - (int32_t)v1;
    int32_t v3 = 2 * *(int32_t *)-0x6c465535; // 0x408e98
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x408e98
    *(int32_t *)-0x6c465535 = v3;
    int64_t result; // 0x408e8f
    if (v4 % 2 == 0) {
        result = function_408e3c();
    }
    // 0x408ea1
    if (v3 >= 0) {
        // 0x408ec6
        return result;
    }
    // 0x408ea3
    int64_t v5; // 0x408e8f
    char v6 = *(char *)&v5 ^ (char)(result / 256); // 0x408ea3
    int64_t v7 = result & -0xff01; // 0x408ea3
    if (a4 == 0) {
        // 0x408ec8
        return v7 | 0x4000 * (int64_t)(v6 == 0) | 0x8000 * (int64_t)(v6 < 0) | 1024 * (int64_t)(llvm_ctpop_i8(v6) % 2 == 0) | 512;
    }
    uint64_t v8 = (256 * (int64_t)v6 | v7) + 0x112605882; // 0x408ead
    char * v9 = (char *)((v8 & 0xffffffff) + 87); // 0x408eb3
    *v9 = *v9 & (char)(v8 / 256);
    __asm_int(38);
    return 0xecc10def;
}

// Address range: 0x408ed6 - 0x408ed7
int64_t function_408ed6(int64_t a1) {
    // 0x408ed6
    int64_t result; // 0x408ed6
    return result;
}

// Address range: 0x408f20 - 0x408f21
int64_t function_408f20(void) {
    // 0x408f20
    int64_t result; // 0x408f20
    return result;
}

// Address range: 0x408f2e - 0x408f2f
int64_t function_408f2e(int64_t a1) {
    // 0x408f2e
    int64_t result; // 0x408f2e
    return result;
}

// Address range: 0x408f49 - 0x408f4d
int64_t function_408f49(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x408f49
    int64_t result; // 0x408f49
    return result;
}

// Address range: 0x408f81 - 0x408fd8
int64_t function_408f81(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x408f81
    int64_t v1; // 0x408f81
    int32_t v2 = (int32_t)v1 >> 31; // 0x408f86
    *(char *)a1 = (char)(a4 / 256 & a1);
    int64_t v3 = a4 - 1; // 0x408f89
    if (v3 != 0) {
        // 0x408fd6
        return function_408ff8(a1, a2, v2, v3, v1);
    }
    int32_t * v4 = (int32_t *)0x920d4864; // 0x408f91
    if ((v1 + 0x77c66e60 & 0xffffffff) != 1) {
        v4 = (int32_t *)((function_408f20() & 0xc24bf418 ^ 0x3db40b4a) + 0x54593d1a);
    }
    int32_t * v5 = v4;
    int64_t v6 = v2 ^ 0xb2216a6; // 0x408fad
    bool v7 = false; // 0x408fad
    unsigned char v8 = (char)(v6 / 256); // 0x408faf
    unsigned char v9 = *(char *)0x6051e285 + v8; // 0x408faf
    unsigned char v10 = v9 + (char)v7; // 0x408faf
    v7 = v7 ? v10 <= v8 : v9 < v8;
    v6 = 256 * (int64_t)v10 | v6 & -0xff01;
    while (v10 < 0) {
        // 0x408faf
        v8 = (char)(v6 / 256);
        v9 = *(char *)0x6051e285 + v8;
        v10 = v9 + (char)v7;
        v7 = v7 ? v10 <= v8 : v9 < v8;
        v6 = 256 * (int64_t)v10 | v6 & -0xff01;
    }
    int64_t result = (v6 & 0x879b2d0) + 0x31046fa5; // 0x408fbd
    *(int32_t *)(a1 & -256 | 174) = (int32_t)result;
    *v5 = *v5 | (int32_t)a2;
    return result;
}

// Address range: 0x408ff6 - 0x408ff8
int64_t function_408ff6(void) {
    // 0x408ff6
    int64_t result; // 0x408ff6
    __asm_out_135(19, (char)result);
    return result;
}

// Address range: 0x408ff8 - 0x40903f
int64_t function_408ff8(int64_t a1, int64_t a2, int32_t a3, int64_t a4, int64_t a5) {
    // 0x408ff8
    int64_t v1; // 0x408ff8
    if (*(char *)0x7b094ebf9b65676e != 5) {
        // 0x409029
        return v1 & -256 | (int64_t)*(char *)-0x31bf94d84486e67d;
    }
    int64_t result = __asm_hlt(); // 0x409008
    int32_t * v2 = (int32_t *)(v1 + 45); // 0x40900a
    *v2 = *v2 + a3;
    return result;
}

// Address range: 0x409041 - 0x409049
int64_t function_409041(int64_t a1) {
    // 0x409041
    int64_t v1; // 0x409041
    return v1 & 0xffffffff ^ 0x23801ab9;
}

// Address range: 0x409049 - 0x40904a
int64_t function_409049(void) {
    // 0x409049
    int64_t result; // 0x409049
    return result;
}

// Address range: 0x409097 - 0x40909b
int64_t function_409097(int64_t a1) {
    // 0x409097
    int64_t result; // 0x409097
    return result;
}

// Address range: 0x40909f - 0x4090ad
int64_t function_40909f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40909f
    int64_t v1; // 0x40909f
    return v1 + 0xacc8d796 & 0xffffffff;
}

// Address range: 0x4090db - 0x4090dd
int64_t function_4090db(void) {
    // 0x4090db
    int64_t result; // 0x4090db
    return result;
}

// Address range: 0x4090e2 - 0x4090e5
int64_t function_4090e2(void) {
    // 0x4090e2
    int64_t result; // 0x4090e2
    return result;
}

// Address range: 0x4090ea - 0x40910f
int64_t function_4090ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4090ea
    *(char *)a1 = __asm_insb((int16_t)a3);
    int32_t * v1 = (int32_t *)(a3 + 34); // 0x4090fb
    int64_t v2; // 0x4090ea
    *v1 = *v1 + (int32_t)v2;
    uint32_t v3 = (int32_t)a4 % 32; // 0x409101
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(v2 + 67); // 0x409101
        *v4 = *v4 << v3;
    }
    bool v5; // 0x4090ea
    int32_t * v6 = (int32_t *)(a2 + 0x3d27552b + (v5 ? -2 : 2)); // 0x409104
    uint32_t v7 = *v6; // 0x409104
    *v6 = v7 / 2 | 0x80000000 * v7;
    return v2 & -256 | (uint64_t)v2 % 256;
}

// Address range: 0x40912a - 0x40912d
int64_t function_40912a(void) {
    // 0x40912a
    int64_t result; // 0x40912a
    return result;
}

// Address range: 0x40914d - 0x40914f
int64_t function_40914d(void) {
    // 0x40914d
    int64_t result; // 0x40914d
    return result;
}

// Address range: 0x409158 - 0x409166
int64_t function_409158(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x409158
    __asm_int(29);
    int64_t result; // 0x409158
    int32_t * v1 = (int32_t *)(result + 67); // 0x40915c
    *v1 = *v1 - 0x21e8420;
    return result;
}

// Address range: 0x409175 - 0x409178
int64_t function_409175(void) {
    // 0x409175
    int64_t result; // 0x409175
    return result;
}

// Address range: 0x4091bd - 0x4091be
int64_t function_4091bd(void) {
    // 0x4091bd
    int64_t result; // 0x4091bd
    return result;
}

// Address range: 0x4091ca - 0x4091cd
int64_t function_4091ca(int64_t a1) {
    // 0x4091ca
    int64_t result; // 0x4091ca
    return result;
}

// Address range: 0x4095e5 - 0x4095e6
int64_t function_4095e5(void) {
    // 0x4095e5
    int64_t result; // 0x4095e5
    return result;
}

// Address range: 0x409628 - 0x409632
int64_t function_409628(void) {
    // 0x409628
    return function_fffffffffd23b8c0();
}

// Address range: 0x40965d - 0x40965e
int64_t function_40965d(int64_t a1) {
    // 0x40965d
    int64_t result; // 0x40965d
    return result;
}

// Address range: 0x40973c - 0x4097c1
int64_t function_40973c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a4;
    int64_t v2; // 0x40973c
    *(int32_t *)a1 = (int32_t)(v2 ^ a1);
    int64_t v3 = a2 & 0x640d907e; // 0x40974a
    int32_t * v4 = (int32_t *)(a1 - 15); // 0x40974f
    uint32_t v5 = *v4; // 0x40974f
    uint32_t v6 = (int32_t)v3; // 0x40974f
    int32_t v7 = v5 - v6; // 0x40974f
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x40974f
    *v4 = v7;
    if (v8 % 2 == 0) {
        unsigned char v9 = (char)v1 % 32; // 0x4097aa
        if (v9 != 0) {
            unsigned char v10 = *(char *)&v1; // 0x4097aa
            *(char *)v1 = v10 << v9 | (char)((int16_t)v10 >> (int16_t)(9 - v9));
        }
        *(int64_t *)0x3439f41d = v2 & -0xff01 | (int64_t)&g4;
        return v3 + 0x9dc3f534 & 0xfddff5fe;
    }
    int64_t v11 = *(int64_t *)0x3439f40d; // 0x409752
    int32_t * v12 = (int32_t *)(a1 - 0x2330fbf5); // 0x409755
    *v12 = *v12 + ((int32_t)(v5 < v6) | v6);
    bool v13; // 0x40973c
    int64_t v14 = v13 ? -5 : 5;
    int64_t v15 = v14 + (v2 & 0xffffffff); // 0x409766
    int64_t v16; // 0x40973c
    *(char *)v16 = *(char *)&v16 + 21;
    uint16_t v17 = *(int16_t *)0x3439f415; // 0x40976a
    *(int32_t *)v1 = -*(int32_t *)&v1;
    int64_t v18 = v1;
    char v19 = *(char *)(v18 + 6); // 0x409770
    char * v20 = (char *)(v2 - 120 + v15); // 0x409773
    *v20 = *v20 ^ (char)v2;
    return function_ffffffffc3baf4c8(v14 + a1 & -0x10000 | (int64_t)v17, v15, v11, v18 & -256 | (int64_t)(v19 ^ (char)v18));
}
