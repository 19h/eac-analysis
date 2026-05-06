/*
 * Targeted RetDec C for native executable gap queue batch 958.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x30911d-0x30931d rank=- name=- kind=- bytes=- uncovered=-
 *   0x30931d-0x30951d rank=- name=- kind=- bytes=- uncovered=-
 *   0x30961d-0x30971d rank=- name=- kind=- bytes=- uncovered=-
 *   0x333823-0x333a23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x333a23-0x333c23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x333c23-0x333e23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x333e23-0x334023 rank=- name=- kind=- bytes=- uncovered=-
 *   0x334023-0x334223 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_160fd1a1();
int64_t function_30911d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_309182(int64_t a1);
int64_t function_3091ec(int64_t a1);
int64_t function_3091f8(int64_t a1, int64_t a2);
int64_t function_309229(void);
int64_t function_309246(void);
int64_t function_309259(void);
int64_t function_309270(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30930c(void);
int64_t function_30931d(void);
int64_t function_309320(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3093f7(int64_t a1);
int64_t function_3093fe(int64_t a1);
int64_t function_30940b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3094e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3095ee();
int64_t function_30961d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3096a8(void);
int64_t function_3096d0(int64_t a1);
int64_t function_3096e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3096f3(void);
int64_t function_333823(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_333859(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3338c9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_33393c(void);
int64_t function_33397f(int64_t a1, int64_t a2);
int64_t function_3339ad(int64_t a1, int64_t a2);
int64_t function_333a8a(int64_t a1);
int64_t function_333aa2(void);
int64_t function_333aba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_333ae2(void);
int64_t function_333b1c(void);
int64_t function_333b4e(int64_t a1, int64_t a2);
int64_t function_333ba1(void);
int64_t function_333bbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_333d31(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_333e48(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_333fb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_334160(void);
int64_t function_3341a2(void);
int64_t function_3341a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3341bf(void);
int64_t function_3341c3(void);
int64_t function_3341d3(void);
int64_t function_3341dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3341e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3341ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_7ec134e7();
int64_t function_b163ab2();
int64_t function_caf2a();
int64_t function_ffffffff8a42c80b();
int64_t function_ffffffffff789a61();
int64_t unknown_1d2ae405();
int64_t unknown_1dc9783c();
int64_t unknown_284647dc();
int64_t unknown_3ad4ec14();
int64_t unknown_3ce8aa26();
int64_t unknown_3f02c335();
int64_t unknown_65674b37();
int64_t unknown_77c13cd();
int64_t unknown_ffffffff91f28750();
int64_t unknown_ffffffff920c11d0();
int64_t unknown_ffffffffb1f60e41();
int64_t unknown_ffffffffc728a57b();

// Address range: 0x30911d - 0x30913b
int64_t function_30911d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x30911d
    int64_t v1; // 0x30911d
    int32_t * v2 = (int32_t *)(v1 + a1); // 0x30911d
    bool v3; // 0x30911d
    *v2 = *v2 + (v3 ? 25 : 24);
    __asm_out((int16_t)a3, (int32_t)v1);
    int32_t * v4 = (int32_t *)(v1 + 97); // 0x309128
    int64_t v5; // bp-14658, 0x30911d
    *v4 = *v4 + (int32_t)(int64_t)&v5;
    __asm_iretd();
    unknown_65674b37();
    return unknown_1dc9783c();
}

// Address range: 0x309182 - 0x30918a
int64_t function_309182(int64_t a1) {
    // 0x309182
    int64_t result; // 0x309182
    return result;
}

// Address range: 0x3091ec - 0x3091f3
int64_t function_3091ec(int64_t a1) {
    // 0x3091ec
    int64_t result; // 0x3091ec
    return result;
}

// Address range: 0x3091f8 - 0x30920d
int64_t function_3091f8(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)0x1beebd4aa5e712a; // 0x3091f8
    int64_t v2; // 0x3091f8
    int64_t v3 = v2 & -256; // 0x3091f8
    return v3 | (int64_t)(*(char *)((v3 | (int64_t)v1) + 0x7ffda203) + v1);
}

// Address range: 0x309229 - 0x30922a
int64_t function_309229(void) {
    // 0x309229
    int64_t result; // 0x309229
    return result;
}

// Address range: 0x309246 - 0x309259
int64_t function_309246(void) {
    // 0x309246
    int64_t v1; // 0x309246
    int32_t * v2 = (int32_t *)(2 * v1 - 16 + v1); // 0x30924f
    int32_t v3 = *v2 + 0x3d655f00; // 0x30924f
    *v2 = v3;
    int64_t v4; // 0x309246
    if (v3 < 1) {
        v4 = function_309229();
    }
    // 0x309255
    return v4 & -256 | (int64_t)__asm_in_133(0x5f00);
}

// Address range: 0x309259 - 0x30925e
int64_t function_309259(void) {
    // 0x309259
    return function_ffffffff8a42c80b();
}

// Address range: 0x309270 - 0x309279
int64_t function_309270(int64_t a1, int64_t a2, int64_t a3) {
    // 0x309270
    int64_t v1; // 0x309270
    uint64_t result = v1;
    char * v2 = (char *)(a2 + 0x50083a85); // 0x309270
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x30930c - 0x30930d
int64_t function_30930c(void) {
    // 0x30930c
    int64_t result; // 0x30930c
    return result;
}

// Address range: 0x30931d - 0x30931e
int64_t function_30931d(void) {
    // 0x30931d
    int64_t result; // 0x30931d
    return result;
}

// Address range: 0x309320 - 0x30939c
int64_t function_309320(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x309320
    if (a4 != 1) {
        // 0x30939c
        int64_t result; // 0x309320
        return result;
    }
    int64_t v1; // 0x309320
    bool v2; // 0x309320
    if (v2) {
        v1 = function_30930c();
    }
    // 0x309324
    int64_t v3; // 0x309320
    int32_t v4 = v3;
    int64_t v5 = v1;
    *(int32_t *)v3 = (int32_t)v5 + v4;
    int32_t * v6 = (int32_t *)(v3 + 1); // 0x309395
    *v6 = *v6 + v4;
    // 0x30939c
    return (v5 + 47) % 256 | v5 & -256;
}

// Address range: 0x3093f7 - 0x3093f8
int64_t function_3093f7(int64_t a1) {
    // 0x3093f7
    int64_t result; // 0x3093f7
    return result;
}

// Address range: 0x3093fe - 0x309409
int64_t function_3093fe(int64_t a1) {
    // 0x3093fe
    unknown_1d2ae405(a1);
    return function_ffffffffff789a61();
}

// Address range: 0x30940b - 0x3094be
int64_t function_30940b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    bool v2; // 0x30940b
    if (v2 || false) {
        // 0x30943b
        unknown_ffffffffb1f60e41();
        *(char *)a1 = (char)a2;
        int64_t v3 = v2 ? -1 : 1; // 0x309441
        int64_t v4 = 2 * v3 + a2; // 0x309448
        uint64_t v5 = unknown_ffffffff91f28750(v3 + 0x1ea6ec44, v4); // 0x30944a
        char * v6 = (char *)(a4 + 0x14f6b1c5); // 0x30944f
        *v6 = *v6 + (char)(v5 / 256);
        *(int32_t *)v1 = *(int32_t *)&v1 - 0x17f6672b;
        char * v7 = (char *)(a4 + 62); // 0x309461
        char v8 = a4 / 256; // 0x309461
        *v7 = *v7 + v8;
        int32_t * v9 = (int32_t *)(a4 - 1); // 0x309469
        *v9 = *v9 + (int32_t)v4;
        *(int32_t *)0xe80998d5 = (int32_t)v5 | -0x173d24bd;
        int64_t result = unknown_ffffffffc728a57b(v2 ? 0xe80998d1 : 0xe80998d9); // 0x309475
        *(int64_t *)0xbaf55fe6 = a4;
        int64_t v10; // 0x30940b
        *(char *)(4 * v10 - 55 + result) = v8;
        v1 = v1 & -0xff01 | (int64_t)&g3;
        float80_t v11; // 0x30940b
        *(float64_t *)(v10 + 0x1e801e8) = (float64_t)v11;
        int32_t * v12 = (int32_t *)(v1 - 44); // 0x30948f
        *v12 = *v12 + (int32_t)v10;
        char * v13 = (char *)(v4 + (v2 ? -4 : 4)); // 0x309495
        char v14 = v1; // 0x309495
        *v13 = *v13 - v14;
        __asm_int(-89);
        *v13 = *v13 - v14;
        return result;
    }
    // 0x30940e
    return unknown_3ad4ec14() & -0xff01 | (int64_t)&g4;
}

// Address range: 0x3094e2 - 0x3094e9
int64_t function_3094e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x3094e2
    int64_t result; // 0x3094e2
    if (v1 != 0) {
        char * v2 = (char *)(result + 0x1e83b26); // 0x3094e2
        unsigned char v3 = *v2; // 0x3094e2
        *v2 = v3 >> 8 - v1 | v3 << v1;
    }
    return result;
}

// Address range: 0x30961d - 0x30964c
int64_t function_30961d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30961d
    unknown_3ce8aa26();
    int64_t v1; // 0x30961d
    *(char *)a1 = (char)v1;
    bool v2; // 0x30961d
    int64_t v3 = v2 ? -1 : 1; // 0x309625
    int64_t v4 = v3 + a1; // 0x309625
    int32_t v5 = (int32_t)v2 + (int32_t)a3 + *(int32_t *)(v1 + 7); // 0x309626
    int32_t * v6 = (int32_t *)(v1 - 0x75599ee); // 0x309629
    uint32_t v7 = *v6; // 0x309629
    uint32_t v8 = v7 + (int32_t)v1; // 0x309629
    *v6 = v8;
    unknown_3f02c335(v4, v3 + a2, v5);
    if (v8 >= v7) {
        function_3095ee();
    }
    int32_t result = __asm_in(13); // 0x30963b
    int32_t * v9 = (int32_t *)((v1 & -256 | 129) - 0x54ff6e0d); // 0x30963f
    *v9 = *v9 + result;
    *(char *)v4 = __asm_insb((int16_t)v5);
    return result;
}

// Address range: 0x3096a8 - 0x3096a9
int64_t function_3096a8(void) {
    // 0x3096a8
    int64_t result; // 0x3096a8
    return result;
}

// Address range: 0x3096d0 - 0x3096d1
int64_t function_3096d0(int64_t a1) {
    // 0x3096d0
    int64_t result; // 0x3096d0
    return result;
}

// Address range: 0x3096e3 - 0x3096e7
int64_t function_3096e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x3096e3
    if (v1 != 0) {
        int64_t v2; // 0x3096e3
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    return function_3096a8();
}

// Address range: 0x3096f3 - 0x3096f8
int64_t function_3096f3(void) {
    // 0x3096f3
    return function_7ec134e7();
}

// Address range: 0x333823 - 0x333838
int64_t function_333823(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    int32_t v1 = a1; // 0x333823
    *(int32_t *)-0x1711f3d6 = *(int32_t *)-0x1711f3d6 + v1;
    int32_t * v2 = (int32_t *)(a3 - 43); // 0x333829
    uint32_t v3 = *v2; // 0x333829
    int64_t v4; // 0x333823
    uint32_t v5 = v3 + (int32_t)v4; // 0x333829
    *v2 = v5;
    int64_t v6; // 0x333823
    char * v7 = (char *)(v6 + 0x55000000); // 0x33382c
    *v7 = *v7 + (char)(a4 / 256) + (char)(v5 < v3);
    int64_t result; // 0x333823
    int64_t v8 = result;
    *(char *)v8 = *(char *)&result + (char)v8;
    *(char *)v6 = *(char *)&v6 + (char)(a3 / 256);
    int64_t v9; // 0x333823
    *(int32_t *)a3 = *(int32_t *)&v9 + v1;
    return result;
}

// Address range: 0x333859 - 0x33388a
int64_t function_333859(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x333859
    int64_t v1; // 0x333859
    bool v2; // 0x333859
    *(int32_t *)a2 = (v2 ? 41 : 40) + (int32_t)v1;
    __asm_out((int16_t)a3, (int32_t)v1 + 0x1a173a06);
    *(char *)-0x1ef57b95 = *(char *)-0x1ef57b95 + (char)(v1 / 256);
    char * v3 = (char *)(v1 - 0x5b93691); // 0x33386e
    *v3 = *v3 ^ (char)a4;
    int64_t v4 = __asm_sti(); // 0x333875
    char * v5 = (char *)(a3 + 104); // 0x333876
    *v5 = *v5 - (char)v1;
    int64_t v6; // 0x333859
    int32_t v7 = *(int32_t *)&v6; // 0x333879
    int64_t v8; // bp-8, 0x333859
    *(int32_t *)a3 = v7 | (int32_t)(int64_t)&v8;
    __asm_out_134(17, (char)v4);
    return function_b163ab2();
}

// Address range: 0x3338c9 - 0x333904
int64_t function_3338c9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)0x6f3475dd; // 0x3338c9
    unsigned char v2 = v1 + (char)(a3 / 256); // 0x3338c9
    *(char *)0x6f3475dd = v2;
    if (a4 != 0) {
        // 0x3338d6
        return unknown_284647dc();
    }
    int64_t v3 = v2 < v1 ? (int64_t)((int32_t)&g1 + 1) : (int64_t)(int32_t)&g1; // 0x3338e1
    int64_t v4; // 0x3338c9
    int64_t v5 = v4 - v3; // 0x3338e1
    int64_t v6 = v5 & 0xffffffff; // 0x3338e1
    int32_t * v7 = (int32_t *)v6; // 0x3338f0
    *v7 = *v7 + (int32_t)v4;
    int64_t v8 = v6; // bp-8, 0x3338f2
    bool v9; // 0x3338c9
    int64_t v10 = v9 ? 0x7fffffffffffffff : 1; // 0x3338f6
    char * v11 = (char *)(2 * (v10 + a2) + 0xc6b9d8 + (int64_t)&v8); // 0x3338f7
    *v11 = (char)v5;
    return v5 & 0xffffff00 | (int64_t)*v11;
}

// Address range: 0x33393c - 0x33393e
int64_t function_33393c(void) {
    // 0x33393c
    int64_t result; // 0x33393c
    return result;
}

// Address range: 0x33397f - 0x333986
int64_t function_33397f(int64_t a1, int64_t a2) {
    // 0x33397f
    int64_t v1; // 0x33397f
    int64_t v2 = v1;
    return (v2 + 255) % 256 | v2 & -256;
}

// Address range: 0x3339ad - 0x3339b0
int64_t function_3339ad(int64_t a1, int64_t a2) {
    // 0x3339ad
    int64_t result; // 0x3339ad
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x333a8a - 0x333a8b
int64_t function_333a8a(int64_t a1) {
    // 0x333a8a
    int64_t result; // 0x333a8a
    return result;
}

// Address range: 0x333aa2 - 0x333aac
int64_t function_333aa2(void) {
    // 0x333aa2
    return function_160fd1a1();
}

// Address range: 0x333aba - 0x333add
int64_t function_333aba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x333aba
    int64_t v1; // 0x333aba
    int64_t v2 = v1 & v1;
    int32_t * v3 = (int32_t *)(v1 + 26); // 0x333abc
    *v3 = *v3 + (int32_t)v2;
    float80_t v4; // 0x333aba
    *(float32_t *)(a4 + 0x188b4400) = (float32_t)v4;
    char * v5 = (char *)((v2 & 0xffffffff) - 100); // 0x333ac7
    *v5 = *v5 | (char)a4;
    int64_t v6 = unknown_ffffffff920c11d0(); // 0x333aca
    int64_t result = ((v6 + a4 / 256) % 256 | v6 & 0xffffff00) + 0x6851a61f & 0xffffffff; // 0x333ad1
    int32_t * v7 = (int32_t *)result; // 0x333ad8
    *v7 = *v7 + (int32_t)a1;
    return result;
}

// Address range: 0x333ae2 - 0x333ae4
int64_t function_333ae2(void) {
    // 0x333ae2
    int64_t result; // 0x333ae2
    return result;
}

// Address range: 0x333b1c - 0x333b1d
int64_t function_333b1c(void) {
    // 0x333b1c
    int64_t result; // 0x333b1c
    return result;
}

// Address range: 0x333b4e - 0x333b58
int64_t function_333b4e(int64_t a1, int64_t a2) {
    // 0x333b4e
    int64_t result; // 0x333b4e
    *(int32_t *)a1 = (int32_t)result;
    float80_t v1; // 0x333b4e
    bool v2; // 0x333b4e
    *(int64_t *)(a1 - 0x2ae8bf68 + (v2 ? -4 : 4)) = (int64_t)v1;
    return result;
}

// Address range: 0x333ba1 - 0x333ba2
int64_t function_333ba1(void) {
    // 0x333ba1
    int64_t result; // 0x333ba1
    return result;
}

// Address range: 0x333bbb - 0x333d31
int64_t function_333bbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a4 - 7); // 0x333bbb
    *v1 = *v1 + (int32_t)a4;
    int64_t v2 = unknown_77c13cd(); // 0x333bc7
    char * v3 = (char *)(v2 - 0x22d9700); // 0x333bcc
    *v3 = *v3 + (char)v2;
    int64_t v4; // 0x333bbb
    return function_caf2a(a1, a2, v4, a4);
}

// Address range: 0x333d31 - 0x333e48
int64_t function_333d31(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x333d31
    int64_t v1; // bp-32, 0x333d31
    int64_t v2 = (int64_t)&v1; // 0x333d8d
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x333d95
    int64_t * v4 = (int64_t *)v3; // 0x333d96
    *v4 = 0x33f743f0;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x333d9e
    *v5 = 0x3917282e;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x333da4
    int64_t v7 = *(int64_t *)(v2 + 24); // 0x333daa
    *v5 = v7;
    *v6 = v3;
    *v6 = v1;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x333dd0
    *v8 = v1;
    *(int64_t *)(v2 - 40) = v7;
    *v4 = *v6;
    *v6 = 0x7ffb066b;
    *v8 = v1;
    *(int64_t *)(v2 + 8) = *v6;
    int64_t v9 = *v5; // 0x333e17
    *v6 = v9;
    *v8 = v9;
    int64_t v10 = *v4; // 0x333e2d
    *v5 = v10;
    *v6 = v10;
    return function_caf2a(a1, a2, a3, a4);
}

// Address range: 0x333e48 - 0x333fb4
int64_t function_333e48(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x333e48
    return function_caf2a(a1, a2, a3, 0x5347085);
}

// Address range: 0x333fb4 - 0x33410f
int64_t function_333fb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x333fb4
    return function_caf2a(0x332939, a2, a3, a4);
}

// Address range: 0x334160 - 0x334163
int64_t function_334160(void) {
    // 0x334160
    int64_t result; // 0x334160
    return result;
}

// Address range: 0x3341a2 - 0x3341a3
int64_t function_3341a2(void) {
    // 0x3341a2
    int64_t result; // 0x3341a2
    return result;
}

// Address range: 0x3341a3 - 0x3341a7
int64_t function_3341a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3341a3
    int64_t result; // 0x3341a3
    char * v1 = (char *)(result - 127); // 0x3341a3
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x3341bf - 0x3341c2
int64_t function_3341bf(void) {
    // 0x3341bf
    int64_t result; // 0x3341bf
    return result;
}

// Address range: 0x3341c3 - 0x3341c6
int64_t function_3341c3(void) {
    // 0x3341c3
    int64_t result; // 0x3341c3
    return result;
}

// Address range: 0x3341d3 - 0x3341dd
int64_t function_3341d3(void) {
    // 0x3341d3
    int64_t result; // 0x3341d3
    *(int32_t *)-0x7cb61c76b6acbee8 = (int32_t)result;
    return result;
}

// Address range: 0x3341dd - 0x3341e2
int64_t function_3341dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x3341dd
    *v1 = *v1 | (char)a4;
    return function_3341ea(a1, a2, a3, a4, (int64_t)&g5, (int64_t)&g5);
}

// Address range: 0x3341e2 - 0x3341ea
int64_t function_3341e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3341e2
    int64_t v1; // 0x3341e2
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 + 28 + 4 * v2); // 0x3341e4
    *v3 = *v3 + (char)a4;
    return v2 & -164;
}

// Address range: 0x3341ea - 0x334220
int64_t function_3341ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3341ea
    int64_t result; // 0x3341ea
    return result;
}
