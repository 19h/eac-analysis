/*
 * Targeted RetDec C for native executable gap queue batch 813.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2398b6-0x239ab6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x239ab6-0x239cb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x239eb6-0x23a0b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x250abc-0x250cbc rank=- name=- kind=- bytes=- uncovered=-
 *   0x370d1b-0x370f1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37111b-0x37131b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37131b-0x37151b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37151b-0x37171b rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2398b6(void);
int64_t function_2398ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_239956(int64_t a1);
int64_t function_239978(void);
int64_t function_23998b(int64_t a1);
int64_t function_2399c3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_239a02(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_239a50(void);
int64_t function_239a5f(int32_t a1);
int64_t function_239a75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_239b3b(int64_t a1);
int64_t function_239bb7(int64_t a1);
int64_t function_239bf0(void);
int64_t function_239c59(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_239eb6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_239f09(void);
int64_t function_239f83(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_239fe3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23a035(void);
int64_t function_250abc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_250b81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_250b8c(int64_t a1);
int64_t function_250b8f(void);
int64_t function_250b99(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_370d1b(void);
int64_t function_370d1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_370d8d(void);
int64_t function_370dcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_370e69(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37111b(void);
int64_t function_371145(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37114d(void);
int64_t function_371160(void);
int64_t function_37119a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_371200(int64_t a1, int64_t a2);
int64_t function_371218(void);
int64_t function_371238(void);
int64_t function_371239(void);
int64_t function_37123f(int64_t a1);
int64_t function_371275(void);
int64_t function_371281(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3712a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3713bb(void);
int64_t function_371478(void);
int64_t function_371486(int64_t a1);
int64_t function_3714cf(void);
int64_t function_3714d7(void);
int64_t function_3714e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3714e9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_371615(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_c4258();
int64_t function_eb5a0a5();
int64_t function_ffffffffaf38d176();
int64_t function_fffffffff4049ddd();
int64_t unknown_1609cab();
int64_t unknown_162e3a85();
int64_t unknown_33833ac0();
int64_t unknown_33ff9c0();
int64_t unknown_39ec6fc9();
int64_t unknown_3d300923();
int64_t unknown_572464a8();
int64_t unknown_5c3a5a45();
int64_t unknown_f82a55();
int64_t unknown_ffffffff8fcb23bd();
int64_t unknown_ffffffffd1ba7427();

// Address range: 0x2398b6 - 0x2398b7
int64_t function_2398b6(void) {
    // 0x2398b6
    int64_t result; // 0x2398b6
    return result;
}

// Address range: 0x2398ba - 0x2398c8
int64_t function_2398ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_33ff9c0(); // 0x2398ba
    char * v1 = (char *)(a1 - 91); // 0x2398bf
    int64_t v2; // 0x2398ba
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    int64_t v3; // 0x2398ba
    *(int32_t *)a4 = *(int32_t *)&v3 + (int32_t)a4;
    return result;
}

// Address range: 0x239956 - 0x239959
int64_t function_239956(int64_t a1) {
    // 0x239956
    int64_t result; // 0x239956
    return result;
}

// Address range: 0x239978 - 0x23997d
int64_t function_239978(void) {
    // 0x239978
    return function_ffffffffaf38d176();
}

// Address range: 0x23998b - 0x239993
int64_t function_23998b(int64_t a1) {
    // 0x23998b
    return unknown_572464a8(a1);
}

// Address range: 0x2399c3 - 0x239a02
int64_t function_2399c3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2399c3
    int64_t v1; // 0x2399c3
    int64_t v2 = v1;
    int64_t v3 = a2;
    unknown_39ec6fc9();
    int64_t v4 = a4 - 256 * __asm_int3() & 0xff00 | a4 & 0xffff0000; // 0x2399cb
    char * v5 = (char *)(a2 - 0x4bfe176e + 2 * v1); // 0x2399cd
    char v6 = -*v5; // 0x2399cd
    *v5 = v6;
    *(char *)a3 = (char)(v6 < 0);
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    *(int32_t *)(v2 & 0xffffffff) = (int32_t)v3 + (int32_t)v2;
    unsigned char v7 = *(char *)0x38b9988cbae9e22; // 0x2399e2
    uint64_t v8 = v2 & 0xffffff00; // 0x2399e2
    uint64_t v9 = v8 / 256 + a4; // 0x2399ed
    char * v10 = (char *)(8 * v1 - 45 + (v4 | v9 % 256)); // 0x2399f8
    *v10 = *v10 + (char)(a3 / 256);
    int64_t v11 = v3;
    *(int32_t *)v11 = *(int32_t *)&v3 + (int32_t)v11;
    return (((v8 | (int64_t)v7) + v2) / 256 + v9) % 256 | v4;
}

// Address range: 0x239a02 - 0x239a50
int64_t function_239a02(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x239a02
    bool v1; // 0x239a02
    bool v2 = v1;
    int64_t v3 = a3 + a1; // 0x239a06
    char * v4 = (char *)(v3 & 0xffffffff); // 0x239a17
    *v4 = *v4 ^ (char)(a5 / 256);
    int64_t v5; // 0x239a02
    int64_t v6 = v5 & -256 | 46; // 0x239a19
    int64_t v7 = unknown_3d300923(); // 0x239a1d
    int32_t v8 = v5; // 0x239a22
    *(int32_t *)-0x502d54d7 = *(int32_t *)-0x502d54d7 + (int32_t)v6;
    int64_t v9 = v3 & 0xffff00ff; // 0x239a2c
    int64_t v10 = (v2 ? -1 : 1) + a1 + (v2 ? -4 : 4); // 0x239a2f
    char v11 = __asm_insb((int16_t)v9 | (int16_t)((int64_t)&g1 & -0xff01 | (int64_t)&g1)); // 0x239a32
    *(char *)v10 = v11;
    uint32_t v12 = *(int32_t *)(a2 + 0x46bd0380) + (int32_t)v10; // 0x239a35
    int32_t * v13 = (int32_t *)(v9 | ((int64_t)&g1 & -0xff01 | (int64_t)&g1) & 0xffffffff); // 0x239a3b
    int64_t v14; // 0x239a02
    *v13 = *v13 & (int32_t)(int64_t)&v14;
    char v15 = *(char *)0x3d24437a; // 0x239a3d
    int32_t * v16 = (int32_t *)((int64_t)v12 - 0x5c8b8069); // 0x239a43
    *v16 = *v16 + v8;
    int32_t * v17 = (int32_t *)((256 * (int64_t)(v15 & (char)(v5 / 256)) | v6 & 0xffff002e) - 87); // 0x239a49
    *v17 = 2 * v8 + (int32_t)v7 + *v17;
    return function_239a5f(v12);
}

// Address range: 0x239a50 - 0x239a5f
int64_t function_239a50(void) {
    // 0x239a50
    int64_t v1; // 0x239a50
    int64_t v2 = v1;
    return v2 & -256 | 2 * v2 & 36 | 218;
}

// Address range: 0x239a5f - 0x239a6a
int64_t function_239a5f(int32_t a1) {
    // 0x239a5f
    *(int32_t *)0x2425826b = *(int32_t *)0x2425826b + a1;
    int64_t v1; // 0x239a5f
    return v1 + 0xe8886c06 & 0xffffffff;
}

// Address range: 0x239a75 - 0x239a89
int64_t function_239a75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 0x2096b1c5); // 0x239a75
    int64_t v2; // 0x239a75
    *v1 = *v1 | (char)(v2 / 256);
    __asm_out(-44, (int32_t)v2);
    int64_t v3; // 0x239a75
    *(int32_t *)a4 = *(int32_t *)&v3 - (int32_t)v2;
    int64_t result = unknown_162e3a85(); // 0x239a7f
    uint32_t v4 = (int32_t)a4 % 32; // 0x239a86
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)result; // 0x239a86
        uint32_t v6 = *v5; // 0x239a86
        *v5 = v6 >> 32 - v4 | v6 << v4;
    }
    return result;
}

// Address range: 0x239b3b - 0x239b3c
int64_t function_239b3b(int64_t a1) {
    // 0x239b3b
    int64_t result; // 0x239b3b
    return result;
}

// Address range: 0x239bb7 - 0x239bc0
int64_t function_239bb7(int64_t a1) {
    // 0x239bb7
    return unknown_ffffffff8fcb23bd(a1) ^ 255;
}

// Address range: 0x239bf0 - 0x239bf5
int64_t function_239bf0(void) {
    // 0x239bf0
    return function_fffffffff4049ddd();
}

// Address range: 0x239c59 - 0x239caa
int64_t function_239c59(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = __asm_sti(); // 0x239c5b
    *(int32_t *)-0x667d3b91aaffdaa6 = (int32_t)v1;
    char v2 = v1; // 0x239c6d
    if (v2 >= 0 == (v2 != 0)) {
        // 0x239c99
        *(char *)0x3f4177b804d0c7bc = v2;
        return unknown_1609cab();
    }
    char * v3 = (char *)(v1 + 126); // 0x239c7a
    *v3 = *v3 - (char)(a3 / 256);
    int64_t result = v1 & -240; // 0x239c7e
    char * v4 = (char *)(result - 0x62fffffa); // 0x239c8d
    *v4 = *v4 + 119;
    char * v5 = (char *)(a1 - 39); // 0x239c93
    *v5 = *v5 + (char)a1;
    return result;
}

// Address range: 0x239eb6 - 0x239ec9
int64_t function_239eb6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x239eb6
    int64_t v1; // 0x239eb6
    int32_t * v2 = (int32_t *)(2 * v1 & 0xffffffff); // 0x239eb8
    *v2 = *v2 + (int32_t)a3;
    unknown_33833ac0();
    int64_t v3; // bp-195, 0x239eb6
    return (int64_t)&v3;
}

// Address range: 0x239f09 - 0x239f0a
int64_t function_239f09(void) {
    // 0x239f09
    int64_t result; // 0x239f09
    return result;
}

// Address range: 0x239f83 - 0x239fa9
int64_t function_239f83(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x239f83
    int64_t v1; // 0x239f83
    int32_t * v2 = (int32_t *)(v1 - 0x2b921d7b); // 0x239f83
    *v2 = *v2 + (int32_t)a4;
    __asm_out_133((int16_t)a3, (char)v1);
    *(char *)-0x27ff68fec2ffd89e = 88;
    return 0x49526b58;
}

// Address range: 0x239fe3 - 0x239fe7
int64_t function_239fe3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x239fe3
    int64_t result; // 0x239fe3
    *(int32_t *)a2 = (int32_t)(result | a3);
    return result;
}

// Address range: 0x23a035 - 0x23a036
int64_t function_23a035(void) {
    // 0x23a035
    int64_t result; // 0x23a035
    return result;
}

// Address range: 0x250abc - 0x250b6e
int64_t function_250abc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x250abc
    int64_t v1; // 0x250abc
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 121); // 0x250abe
    *v3 = *v3 + (char)a4;
    int64_t v4; // bp+16, 0x250abc
    v4 = (int64_t)&v4;
    return function_c4258();
}

// Address range: 0x250b81 - 0x250b8a
int64_t function_250b81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x250b81
    int64_t v1; // 0x250b81
    int64_t result = v1;
    __asm_out_134((int16_t)a3, (int32_t)result);
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(a4 - 1); // 0x250b86
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x250b8c - 0x250b8d
int64_t function_250b8c(int64_t a1) {
    // 0x250b8c
    int64_t result; // 0x250b8c
    return result;
}

// Address range: 0x250b8f - 0x250b90
int64_t function_250b8f(void) {
    // 0x250b8f
    int64_t result; // 0x250b8f
    return result;
}

// Address range: 0x250b99 - 0x250cb8
int64_t function_250b99(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x250b99
    int64_t v1; // bp-32, 0x250b99
    int64_t v2 = (int64_t)&v1; // 0x250c68
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x250c74
    *v3 = a6;
    v1 = 0x5e9e332a;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x250c7d
    *v4 = 0x7f014727;
    *(int64_t *)(v2 - 16) = 0x24f728;
    *(int64_t *)(v2 + 32) = v1;
    int64_t v5 = *(int64_t *)(v2 + 8); // 0x250c8d
    v1 = v5;
    *v4 = v5;
    return *v3;
}

// Address range: 0x370d1b - 0x370d1c
int64_t function_370d1b(void) {
    // 0x370d1b
    int64_t result; // 0x370d1b
    return result;
}

// Address range: 0x370d1c - 0x370d7e
int64_t function_370d1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x370d1c
    int64_t result; // 0x370d1c
    bool v1; // 0x370d1c
    if (v1) {
        int32_t * v2 = (int32_t *)(a1 - 126); // 0x370d1f
        *v2 = *v2 & (int32_t)result;
        return result;
    }
    unsigned char v3 = (char)a4 % 32; // 0x370d70
    if (v3 != 0) {
        char * v4 = (char *)(result + 8 * result); // 0x370d70
        *v4 = *v4 >> v3;
    }
    return result + 0x2f47bb88 & 0xffffffff;
}

// Address range: 0x370d8d - 0x370d93
int64_t function_370d8d(void) {
    // 0x370d8d
    int64_t result; // 0x370d8d
    return result;
}

// Address range: 0x370dcd - 0x370dd7
int64_t function_370dcd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x370dcd
    return 0xbd013d00;
}

// Address range: 0x370e69 - 0x370e72
int64_t function_370e69(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x370e69
    int64_t result; // 0x370e69
    int32_t * v1 = (int32_t *)(result + 0x4001e84b); // 0x370e6b
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x37111b - 0x37111c
int64_t function_37111b(void) {
    // 0x37111b
    int64_t result; // 0x37111b
    return result;
}

// Address range: 0x371145 - 0x37114d
int64_t function_371145(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x371145
    return a2 & 0xffffffff;
}

// Address range: 0x37114d - 0x37115c
int64_t function_37114d(void) {
    // 0x37114d
    return unknown_f82a55();
}

// Address range: 0x371160 - 0x371165
int64_t function_371160(void) {
    // 0x371160
    return function_eb5a0a5();
}

// Address range: 0x37119a - 0x3711fd
int64_t function_37119a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x37119a
    bool v1; // 0x37119a
    bool v2 = v1;
    int64_t v3; // 0x37119a
    uint32_t v4 = (int32_t)v3; // 0x37119a
    uint32_t v5 = *(int32_t *)(a1 - 0x8fec300) + (int32_t)v2; // 0x37119a
    bool v6 = v2 ? v5 != -1 | (int32_t)v2 + v4 - v5 > v4 : v5 > v4; // 0x37119a
    char v7 = a4; // 0x3711a5
    *(char *)a3 = (char)v3 - v7 + (char)v6;
    int64_t v8 = v1 ? -1 : 1; // 0x3711a8
    int64_t v9 = v8 + a1; // 0x3711a8
    int64_t v10; // 0x37119a
    __asm_out_134((int16_t)a3, (int32_t)v10);
    *(int32_t *)(v3 + 0x689a5f00) = (int32_t)a3;
    char v11 = a3 / 256; // 0x3711b0
    *(char *)v10 = *(char *)&v10 + v11;
    unsigned char v12 = (char)a3; // 0x3711b2
    unsigned char v13 = *(char *)(v8 + 0x2a822d11) + v12; // 0x3711b2
    int64_t v14 = v13; // 0x3711b2
    int64_t v15 = unknown_5c3a5a45(); // 0x3711bf
    int64_t v16; // 0x37119a
    int64_t v17 = (int64_t)&v16; // bp-8, 0x3711c4
    int64_t v18 = (int64_t)&v17; // 0x3711c4
    int64_t v19 = v15 - ((int64_t)(v13 < v12) | v18) & 0xffffffff; // 0x3711c5
    v10 = v19;
    char v20 = *(char *)(a3 & -256 | v14); // 0x3711c7
    char v21 = __asm_insb((int16_t)(256 * (int64_t)(v20 + v11) | v14)); // 0x3711c9
    *(char *)v9 = v21;
    *(int32_t *)v9 = *(int32_t *)0x6e013d00;
    char * v22 = (char *)(v19 + 38); // 0x3711cd
    *v22 = *v22 + v7;
    return 0x10000 * (int32_t)(v10 | v18) >> 16;
}

// Address range: 0x371200 - 0x371205
int64_t function_371200(int64_t a1, int64_t a2) {
    // 0x371200
    int64_t result; // 0x371200
    *(int32_t *)a2 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x371218 - 0x371221
int64_t function_371218(void) {
    char v1 = *(char *)0x64eff21f; // 0x371218
    int64_t v2; // 0x371218
    *(char *)0x64eff21f = v1 + (char)((uint64_t)v2 / 256);
    return v2 & -256 | 254;
}

// Address range: 0x371238 - 0x371239
int64_t function_371238(void) {
    // 0x371238
    int64_t result; // 0x371238
    return result;
}

// Address range: 0x371239 - 0x37123d
int64_t function_371239(void) {
    // 0x371239
    int64_t result; // 0x371239
    return result;
}

// Address range: 0x37123f - 0x371240
int64_t function_37123f(int64_t a1) {
    // 0x37123f
    int64_t result; // 0x37123f
    return result;
}

// Address range: 0x371275 - 0x371276
int64_t function_371275(void) {
    // 0x371275
    int64_t result; // 0x371275
    return result;
}

// Address range: 0x371281 - 0x3712a0
int64_t function_371281(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x371281
    int64_t v1; // 0x371281
    int64_t v2 = v1;
    int64_t v3 = a4;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    int32_t * v4 = (int32_t *)(a3 - 0x46c71580); // 0x371283
    *v4 = *v4 - (int32_t)v1;
    uint32_t v5 = __asm_in((int16_t)a3) ^ 0x881607c; // 0x37128b
    int64_t v6 = v5; // 0x371290
    if (v5 == 0) {
        v6 = function_371238();
    }
    // 0x371292
    *(int32_t *)v3 = *(int32_t *)&v3 - 58;
    return v6 & -204;
}

// Address range: 0x3712a0 - 0x371334
int64_t function_3712a0(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = *(int32_t *)(a2 - 0x7e50dde7); // 0x371319
    int64_t v2; // 0x3712a0
    uint32_t v3 = (int32_t)v2; // 0x371319
    char * v4 = (char *)(a1 - 24); // 0x37131f
    *v4 = *v4 + (char)v2 + (char)(v1 < v3);
    uint32_t v5 = v3 - 0x5a97da94; // 0x371322
    int64_t result = v5; // 0x371327
    if (v3 <= 0x5a97da93 == (v3 > 0x5a97da93 || v5 == 0)) {
        result = function_371275();
    }
    // 0x3712d7
    return result;
}

// Address range: 0x3713bb - 0x3713be
int64_t function_3713bb(void) {
    // 0x3713bb
    int64_t result; // 0x3713bb
    return result;
}

// Address range: 0x371478 - 0x371483
int64_t function_371478(void) {
    // 0x371478
    int64_t v1; // 0x371478
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    char * v3 = (char *)(v1 + 0x3d000002); // 0x37147a
    int64_t result; // 0x371478
    *v3 = *v3 + (char)(result / 256);
    int64_t v4 = result;
    *(int32_t *)v4 = *(int32_t *)&result + (int32_t)v4;
    return result;
}

// Address range: 0x371486 - 0x37148a
int64_t function_371486(int64_t a1) {
    // 0x371486
    int64_t result; // 0x371486
    return result;
}

// Address range: 0x3714cf - 0x3714d0
int64_t function_3714cf(void) {
    // 0x3714cf
    int64_t result; // 0x3714cf
    return result;
}

// Address range: 0x3714d7 - 0x3714da
int64_t function_3714d7(void) {
    // 0x3714d7
    int64_t result; // 0x3714d7
    return result;
}

// Address range: 0x3714e0 - 0x3714e9
int64_t function_3714e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 0xf11d60d); // 0x3714e0
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x3714e0
    return result;
}

// Address range: 0x3714e9 - 0x3714f7
int64_t function_3714e9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3714e9
    int64_t v1; // 0x3714e9
    int64_t v2 = v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x371615 - 0x371652
int64_t function_371615(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x371615
    char * v3 = (char *)(v2 - 0x2c5eb3fd); // 0x371615
    unsigned char v4 = *v3; // 0x371615
    unsigned char v5 = (char)v2;
    *v3 = v4 - v5;
    uint32_t v6 = (int32_t)a1; // 0x37161b
    uint32_t v7 = *(int32_t *)&v1 + v6; // 0x37161b
    uint32_t v8 = v7 + (int32_t)(v4 < v5); // 0x37161b
    int64_t v9 = v8; // 0x37161b
    if (v8 == 0 || (v4 < v5 ? v8 <= v6 : v7 < v6)) {
        // 0x37161f
        bool v10; // 0x371615
        int64_t v11 = v10 ? -8 : 8; // 0x37161f
        return unknown_ffffffffd1ba7427(v11 + v9, v11 + a2);
    }
    uint64_t v12 = a4 - 1; // 0x37162c
    char v13 = v5; // 0x37162c
    int64_t v14; // 0x371615
    if (v12 == 0) {
        uint64_t v15 = v2 + 179; // 0x37162e
        v13 = v15;
        __asm_out_133((int16_t)v1, v13);
        v14 = v15 % 256 | v2 & -256;
    }
    char * v16 = (char *)(v9 - 121); // 0x371631
    *v16 = *v16 + (char)(v12 / 256);
    int16_t v17 = v1; // 0x371635
    __asm_out_133(v17, v13);
    __asm_out_134(v17, (int32_t)v14);
    return v14 & -256 | 73;
}
