/*
 * Targeted RetDec C for native executable gap queue batch 818.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x37676a-0x37696a rank=- name=- kind=- bytes=- uncovered=-
 *   0x37696a-0x376b6a rank=- name=- kind=- bytes=- uncovered=-
 *   0x376b6a-0x376d6a rank=- name=- kind=- bytes=- uncovered=-
 *   0x376d6a-0x376f6a rank=- name=- kind=- bytes=- uncovered=-
 *   0x382430-0x382630 rank=- name=- kind=- bytes=- uncovered=-
 *   0x382830-0x382a30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x382a30-0x382c30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x382c30-0x382e30 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_37676a(int64_t a1, int64_t a2);
int64_t function_376775(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3767bc(void);
int64_t function_3767da(int64_t a1);
int64_t function_376878(void);
int64_t function_3768db(void);
int64_t function_376906(void);
int64_t function_376919(void);
int64_t function_37691d(void);
int64_t function_376921(void);
int64_t function_376929(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3769ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3769d3(void);
int64_t function_376a02(void);
int64_t function_376a11(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_376a3c(void);
int64_t function_376a4d(void);
int64_t function_376a4f(int64_t a1);
int64_t function_376a50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_376b1b(void);
int64_t function_376b85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_376bb0(int64_t a1);
int64_t function_376bd8(int64_t a1, int64_t a2);
int64_t function_376c62(int64_t a1);
int64_t function_376c9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_376cb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_376cfd(void);
int64_t function_376d61(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_376dc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_376ed3(int64_t a1);
int64_t function_376ef8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_376f0c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_376f1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_376f2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_382430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_38245c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_382556(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38256c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38258a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3825ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_382603(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_382609(void);
int64_t function_38282e();
int64_t function_382830(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_382892(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3828d6(int64_t a1, int64_t a2);
int64_t function_382900(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_382935(void);
int64_t function_38293a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_382947(int64_t a1, int64_t a2);
int64_t function_3829b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_382a1c(int64_t a1);
int64_t function_382a46(int64_t a1);
int64_t function_382b4e(void);
int64_t function_382b50(int64_t a1, int64_t a2, int64_t a3);
int64_t function_382b6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_382c00(int64_t a1);
int64_t function_382c1f(void);
int64_t function_382c56(void);
int64_t function_382d25(void);
int64_t function_382d5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_382dc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_382de0(void);
int64_t function_382e13(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ef193ad();
int64_t function_57768cb();
int64_t function_627310();
int64_t function_838a78e();
int64_t function_ffffffff80b1c106();
int64_t function_ffffffff9146b8d8();
int64_t unknown_10c28557();
int64_t unknown_1b289828();
int64_t unknown_2ace0c5d();
int64_t unknown_2b975ee9();
int64_t unknown_3a406588();
int64_t unknown_3a42f95c();
int64_t unknown_3a7519da();
int64_t unknown_3d7859e0();
int64_t unknown_3f63e8e4();
int64_t unknown_3f6ff417();
int64_t unknown_642e6d8d();
int64_t unknown_76b69a59();
int64_t unknown_98a6a62();
int64_t unknown_ffffffff883f7edb();
int64_t unknown_ffffffff89370a4f();
int64_t unknown_ffffffff8c4a3f44();
int64_t unknown_ffffffff8ce6d106();
int64_t unknown_ffffffff9423759b();
int64_t unknown_ffffffffc39a7b15();
int64_t unknown_ffffffffc67e2744();
int64_t unknown_ffffffffd4b4eea7();
int64_t unknown_ffffffffd5b0cb67();
int64_t unknown_ffffffffe238a637();
int64_t unknown_ffffffffe8d8187b();
int64_t unknown_fffffffff1fd19c9();
int64_t unknown_fffffffff90d9871();

// Address range: 0x37676a - 0x376774
int64_t function_37676a(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 0x7cd8fee0); // 0x37676e
    int64_t result; // 0x37676a
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x376775 - 0x376784
int64_t function_376775(int64_t a1, int64_t a2, int64_t a3) {
    // 0x376775
    return function_57768cb();
}

// Address range: 0x3767bc - 0x3767bf
int64_t function_3767bc(void) {
    // 0x3767bc
    int64_t result; // 0x3767bc
    return result;
}

// Address range: 0x3767da - 0x3767df
int64_t function_3767da(int64_t a1) {
    // 0x3767da
    int64_t result; // 0x3767da
    return result;
}

// Address range: 0x376878 - 0x37687b
int64_t function_376878(void) {
    // 0x376878
    int64_t result; // 0x376878
    return result;
}

// Address range: 0x3768db - 0x3768de
int64_t function_3768db(void) {
    // 0x3768db
    int64_t result; // 0x3768db
    return result;
}

// Address range: 0x376906 - 0x376907
int64_t function_376906(void) {
    // 0x376906
    int64_t result; // 0x376906
    return result;
}

// Address range: 0x376919 - 0x37691a
int64_t function_376919(void) {
    // 0x376919
    int64_t result; // 0x376919
    return result;
}

// Address range: 0x37691d - 0x37691e
int64_t function_37691d(void) {
    // 0x37691d
    int64_t result; // 0x37691d
    return result;
}

// Address range: 0x376921 - 0x376928
int64_t function_376921(void) {
    // 0x376921
    return function_376919();
}

// Address range: 0x376929 - 0x3769ab
int64_t function_376929(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int32_t v2 = a4; // 0x376929
    *(int32_t *)a2 = (int32_t)a2 - v2;
    int64_t v3; // 0x376929
    if (llvm_ctpop_i8((char)*(int32_t *)(v3 - 24) - 1) % 2 == 0) {
        function_376906();
    }
    // 0x376931
    unknown_ffffffffe238a637();
    int64_t result = unknown_ffffffffc39a7b15(); // 0x376936
    if (a4 == 0) {
        // 0x37698a
        return result;
    }
    int64_t v4 = unknown_ffffffffc67e2744() & 0xffffffff; // 0x376943
    int64_t v5 = a2 - v3; // 0x376944
    int64_t v6 = v5 & 0xffffffff; // 0x376944
    int64_t v7 = (0x100000000 * v1 | a1 & 0xffffffff) % (int64_t)*(int32_t *)&v1; // 0x376946
    unknown_ffffffff89370a4f(v4, (int32_t)v5, v7 & 0xffffffff);
    int32_t * v8 = (int32_t *)v6; // 0x37694e
    int32_t v9 = *v8;
    __asm_outsd((int16_t)((int32_t)v7 - v9), v9);
    unknown_3a42f95c();
    float80_t v10; // 0x376929
    *(int32_t *)(v3 + 76) = (int32_t)v10;
    int32_t v11 = *v8 + (int32_t)v3; // 0x37695e
    *v8 = v11;
    int64_t v12 = unknown_ffffffffd5b0cb67(); // 0x376961
    if (v11 >= 0) {
        // 0x37699c
        unknown_ffffffff9423759b();
        return unknown_ffffffffd4b4eea7() | 27;
    }
    int32_t * v13 = (int32_t *)(v6 - 32); // 0x37696b
    *v13 = *v13 + (int32_t)v12;
    int32_t * v14 = (int32_t *)(v4 + 0x24a9ad45); // 0x376978
    *v14 = *v14 + v2;
    return unknown_3a406588();
}

// Address range: 0x3769ab - 0x3769b2
int64_t function_3769ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3769ab
    int64_t result; // 0x3769ab
    *(int32_t *)a4 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x3769d3 - 0x3769df
int64_t function_3769d3(void) {
    // 0x3769d3
    int64_t v1; // 0x3769d3
    return v1 & -256 | (int64_t)*(char *)0x1e8cbc07a17f082;
}

// Address range: 0x376a02 - 0x376a04
int64_t function_376a02(void) {
    // 0x376a02
    return function_376a4f((int64_t)&g5);
}

// Address range: 0x376a11 - 0x376a22
int64_t function_376a11(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x376a11
    int64_t v1; // 0x376a11
    int64_t result = v1;
    if (a4 == 0) {
        // 0x376a1a
        return result + 0x2a252cc2 & 0xffffffff;
    }
    // 0x376a13
    *(int32_t *)result = (int32_t)result;
    return result;
}

// Address range: 0x376a3c - 0x376a3d
int64_t function_376a3c(void) {
    // 0x376a3c
    int64_t result; // 0x376a3c
    return result;
}

// Address range: 0x376a4d - 0x376a4e
int64_t function_376a4d(void) {
    // 0x376a4d
    int64_t result; // 0x376a4d
    return result;
}

// Address range: 0x376a4f - 0x376a50
int64_t function_376a4f(int64_t a1) {
    // 0x376a4f
    int64_t result; // 0x376a4f
    return result;
}

// Address range: 0x376a50 - 0x376af9
int64_t function_376a50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x376a50
    *(char *)a3 = (char)a4 + (char)a3;
    int64_t result = unknown_76b69a59(); // 0x376a52
    int64_t v1; // 0x376a50
    *(char *)a1 = *(char *)&v1;
    v1 = ((a5 & (int64_t)&g1) == 0 ? 1 : -1) + a2;
    if (a4 == 1) {
        // 0x376a5e
        return result;
    }
    int32_t v2 = result; // 0x376ac8
    *(int32_t *)-0x29fe43c8fe170d80 = v2;
    __asm_out((int16_t)a3, v2);
    int64_t v3; // 0x376a50
    __asm_fldenv(*(int224_t *)(__asm_iretd() + v3));
    int32_t * v4 = (int32_t *)(unknown_3d7859e0() + v3 & 0xffffffff); // 0x376ae1
    *v4 = *v4 + (int32_t)a3;
    unknown_2b975ee9();
    return (int64_t)*(int32_t *)0x4522816e01e8178c;
}

// Address range: 0x376b1b - 0x376b1c
int64_t function_376b1b(void) {
    // 0x376b1b
    int64_t result; // 0x376b1b
    return result;
}

// Address range: 0x376b85 - 0x376bb0
int64_t function_376b85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x376b85
    float80_t v1; // 0x376b85
    float80_t v2 = v1;
    int64_t v3 = a4;
    int64_t v4 = a5;
    bool v5; // 0x376b85
    int64_t v6 = v5 ? -1 : 1; // 0x376b85
    int64_t v7 = v6 + a1; // 0x376b85
    int32_t * v8 = (int32_t *)(a2 + 0x13d0087 + v6); // 0x376b88
    *v8 = *v8 + (int32_t)a4;
    float80_t v9 = (float80_t)*(float64_t *)v7; // 0x376b8e
    int32_t v10 = 0; // 0x376b91
    if (v2 >= v9) {
        v10 = v2 > v9 ? -0x80000000 : v2 == v9 ? 0 : -0x80000000;
    }
    *(int32_t *)v3 = *(int32_t *)&v3 / 2 | v10;
    int64_t v11; // 0x376b85
    int32_t * v12 = (int32_t *)(v11 - 67); // 0x376b9e
    *v12 = *v12 + (int32_t)(int64_t)&v4;
    int64_t v13; // 0x376b85
    v4 = (int64_t)&v13;
    *(char *)v7 = __asm_in(0);
    *(char *)0x2060c4ac = *(char *)0x2060c4ac >> 1;
    return function_ffffffff9146b8d8(v7 + v6);
}

// Address range: 0x376bb0 - 0x376bba
int64_t function_376bb0(int64_t a1) {
    // 0x376bb0
    int64_t result; // 0x376bb0
    return result;
}

// Address range: 0x376bd8 - 0x376bdd
int64_t function_376bd8(int64_t a1, int64_t a2) {
    // 0x376bd8
    int64_t v1; // 0x376bd8
    uint64_t v2 = v1;
    char v3 = *(char *)(a2 + 28); // 0x376bd8
    bool v4; // 0x376bd8
    return 256 * (int64_t)(v3 + (char)(v2 / 256) + (char)v4) | v2 & -0xff01;
}

// Address range: 0x376c62 - 0x376c63
int64_t function_376c62(int64_t a1) {
    // 0x376c62
    int64_t result; // 0x376c62
    return result;
}

// Address range: 0x376c9c - 0x376cb5
int64_t function_376c9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x376c9c
    int64_t v1; // 0x376c9c
    int64_t v2 = v1;
    int64_t result = v2 & -256 | (int64_t)(*(char *)(v1 + 0x1e85959) ^ (char)v2); // 0x376c9c
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a3;
    int64_t v3; // 0x376c9c
    *(char *)a1 = *(char *)&v3;
    char * v4 = (char *)result; // 0x376cb1
    *v4 = *v4 - 41;
    return result;
}

// Address range: 0x376cb6 - 0x376cc5
int64_t function_376cb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 1); // 0x376cb8
    int64_t v2; // 0x376cb6
    *v1 = *v1 + (int32_t)v2;
    return function_3ef193ad();
}

// Address range: 0x376cfd - 0x376cfe
int64_t function_376cfd(void) {
    // 0x376cfd
    int64_t result; // 0x376cfd
    return result;
}

// Address range: 0x376d61 - 0x376d6a
int64_t function_376d61(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x1beb6c6); // 0x376d61
    *v1 = *v1 + (int32_t)a4;
    return function_376cfd();
}

// Address range: 0x376dc3 - 0x376ed3
int64_t function_376dc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x376dc3
    int64_t v1; // 0x376dc3
    int64_t v2 = v1;
    uint64_t v3 = v1;
    *(int32_t *)0x13d1754eed2b6ce = (int32_t)v1;
    *(int32_t *)a1 = (int32_t)v1;
    bool v4; // 0x376dc3
    int64_t v5 = v4 ? -4 : 4; // 0x376dcc
    int64_t v6 = v5 + a1; // 0x376dcc
    int64_t v7 = v5 + a2; // 0x376dcc
    int64_t v8; // 0x376dc3
    int64_t v9 = v8;
    *(char *)v9 = *(char *)&v8 + (char)v9;
    int64_t v10 = (v3 + a4) % 256 | a4 & -256; // 0x376dcf
    *(char *)-0x1b367026 = *(char *)-0x1b367026 + (char)(v3 / 256);
    int64_t v11 = 257 * a3 & 0xff00 | a3 & -0xff01; // 0x376dd9
    *(int32_t *)v6 = (int32_t)v8;
    int64_t v12 = v6 + v5; // 0x376ddb
    int64_t v13 = __asm_int3(v12, v7, v11, v10); // 0x376ddc
    uint32_t v14 = *(int32_t *)(v13 + 8 * v2) ^ (int32_t)v10; // 0x376ddd
    int32_t * v15 = (int32_t *)v11; // 0x376de0
    *v15 = *v15 + (int32_t)v11;
    int32_t v16 = *(int32_t *)((int64_t)v14 - 0x1217ff98); // 0x376de4
    int32_t v17 = v13; // 0x376df0
    *(char *)(8 * v1 + 0x6e0725c + v3) = (char)(v14 / 256);
    *(int32_t *)-0x1d6bd40964e8fec3 = -0x24fa1707;
    __asm_in_133(0);
    int64_t v18 = v2 & 0xffffffff; // 0x376e12
    v8 = v18;
    if (((v17 + 0x43ae0c6a ^ v17) & (v17 ^ -0x80000000)) >= 0) {
        int32_t * v19 = (int32_t *)(v7 + 27); // 0x376e6b
        *v19 = 2 * *v19;
        return (v2 + 215) % 256 | v2 & 0xffffff00;
    }
    int64_t v20 = v2 & 0x3d004b0a; // 0x376e17
    int32_t * v21 = (int32_t *)(2 * v7 + 79 + (int64_t)((int32_t)v12 - v16)); // 0x376e1c
    *v21 = *v21 + (int32_t)(v3 - 256 * v18 & 0xff00 | v3 & 0xffff00ff);
    int32_t v22 = *(int32_t *)v20; // 0x376e21
    return (int32_t)((v2 & 256) != 0) + (int32_t)v20 - v22 | 74;
}

// Address range: 0x376ed3 - 0x376ef5
int64_t function_376ed3(int64_t a1) {
    // 0x376ed3
    int64_t v1; // 0x376ed3
    int64_t v2 = v1 & -256 | 84; // 0x376ed3
    unknown_ffffffff883f7edb();
    int64_t v3 = v2; // bp-8, 0x376eda
    char * v4 = (char *)(v1 + 75); // 0x376edb
    *v4 = *v4 & (char)(v1 / 256);
    uint64_t v5 = unknown_3f63e8e4(); // 0x376ede
    char v6 = *(char *)(v5 % 256 + v2); // 0x376ee3
    char v7 = *(char *)(a1 - 0x1d195816); // 0x376ee4
    int32_t * v8 = (int32_t *)((v5 & -256 | (int64_t)(v7 | v6)) - 28); // 0x376eec
    *v8 = *v8 + (int32_t)(int64_t)&v3;
    return function_ffffffff80b1c106();
}

// Address range: 0x376ef8 - 0x376f00
int64_t function_376ef8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x376ef8
    int64_t result; // 0x376ef8
    *(int32_t *)a1 = (int32_t)result ^ -0x15ff8000;
    return result;
}

// Address range: 0x376f0c - 0x376f18
int64_t function_376f0c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x376f0c
    int64_t result; // 0x376f0c
    *(char *)(result + 0x7980099) = (char)(a4 / 256);
    return result;
}

// Address range: 0x376f1d - 0x376f2f
int64_t function_376f1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x376f1d
    __asm_in_135((int16_t)a3);
    int64_t v1; // 0x376f1d
    *(int32_t *)a3 = (int32_t)(v1 ^ a1);
    return unknown_1b289828();
}

// Address range: 0x376f2f - 0x376f59
int64_t function_376f2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x376f2f
    int64_t v1; // 0x376f2f
    *(int32_t *)0x9395799 = *(int32_t *)0x9395799 + (int32_t)v1;
    bool v2; // 0x376f2f
    return unknown_10c28557((v2 ? -1 : 1) + a1);
}

// Address range: 0x382430 - 0x382446
int64_t function_382430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x382430
    int64_t v1; // 0x382430
    int32_t * v2 = (int32_t *)(v1 - 0x6902a9fd); // 0x382430
    uint32_t v3 = *v2; // 0x382430
    uint32_t v4 = v3 + (int32_t)a3; // 0x382430
    *v2 = v4;
    int64_t * v5 = (int64_t *)(v1 + a5); // 0x382438
    *v5 = *v5 - 46 + (int64_t)(v4 < v3);
    return unknown_ffffffff8c4a3f44();
}

// Address range: 0x38245c - 0x382493
int64_t function_38245c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38245c
    unknown_98a6a62();
    int32_t * v1 = (int32_t *)(a3 + 0x6016c77d); // 0x382461
    bool v2; // 0x38245c
    *v1 = *v1 + (v2 ? -0x312d94dd : -0x312d94de);
    uint64_t v3 = unknown_fffffffff90d9871(); // 0x38246b
    char * v4 = (char *)(a4 + 89); // 0x382470
    *v4 = *v4 & (char)(v3 / 256);
    int32_t * v5 = (int32_t *)(a1 + 0x5e393889); // 0x382473
    *v5 = *v5 / 2;
    int32_t v6 = *(int32_t *)((v3 & -0xff01 | (int64_t)&g4) + 0x3a0564ab); // 0x38247d
    unknown_642e6d8d((int64_t)(0x3ebb2a4 * v6));
    return __asm_hlt();
}

// Address range: 0x382556 - 0x38255c
int64_t function_382556(int64_t a1, int64_t a2, int64_t a3) {
    // 0x382556
    int64_t result; // 0x382556
    *(char *)a3 = 2 * (char)result;
    int64_t v1; // 0x382556
    *(char *)a1 = *(char *)&v1;
    return result;
}

// Address range: 0x38256c - 0x38258a
int64_t function_38256c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38256c
    int64_t v1; // 0x38256c
    return v1 & -0xff01;
}

// Address range: 0x38258a - 0x38259f
int64_t function_38258a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38258a
    int64_t v1; // 0x38258a
    uint64_t v2 = v1;
    *(char *)0x3d0052e90013706b = (char)v2;
    int32_t * v3 = (int32_t *)(v1 + 0x3b0200b5); // 0x382593
    uint32_t v4 = *v3; // 0x382593
    uint32_t v5 = v4 + (int32_t)a2; // 0x382593
    *v3 = v5;
    return 256 * (v2 / 256 + v1 + (int64_t)(v5 < v4)) & 0xff00 | v2 & -0xff01;
}

// Address range: 0x3825ed - 0x382603
int64_t function_3825ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = *(char *)-0x37c5f192; // 0x3825ed
    *(char *)-0x37c5f192 = v1 - 37;
    int64_t result; // 0x3825ed
    int32_t * v2 = (int32_t *)((a4 & -0x10000 | a4 - 256 * (result + (int64_t)(v1 > 36)) & 0xff00 | 188) + 117); // 0x3825f8
    uint32_t v3 = *v2; // 0x3825f8
    *v2 = v3 / 256 | 0x1000000 * v3;
    int32_t * v4 = (int32_t *)(a1 - 0x2224fdd4); // 0x3825fc
    *v4 = *v4 + (int32_t)result;
    return result;
}

// Address range: 0x382603 - 0x382607
int64_t function_382603(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x382603
    int64_t result; // 0x382603
    *(char *)result = (char)(a3 / 256);
    return result;
}

// Address range: 0x382609 - 0x382618
int64_t function_382609(void) {
    // 0x382609
    int64_t v1; // 0x382609
    int32_t * v2 = (int32_t *)(v1 - 84); // 0x382609
    *v2 = *v2 + (int32_t)v1;
    return unknown_3f6ff417();
}

// Address range: 0x382830 - 0x38284f
int64_t function_382830(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x382830
    int64_t v1; // 0x382830
    uint64_t v2 = v1;
    int32_t v3 = *(int32_t *)-0x54fe17ff7fffc7af; // 0x382835
    *(char *)v2 = (char)v2 + (char)(a4 / 256);
    char * v4 = (char *)(v1 + 123); // 0x382840
    *v4 = *v4 + (char)(a3 / 256);
    unsigned char v5 = (char)(v2 / 256); // 0x382844
    unsigned char v6 = (char)(v3 >> 31) + v5; // 0x382844
    int64_t result = (int64_t)(v3 & -0xff01) | (int64_t)&g2; // 0x382848
    if (v6 < v5 || v6 == 0) {
        result = function_38282e();
    }
    // 0x38284a
    return result;
}

// Address range: 0x382892 - 0x3828a1
int64_t function_382892(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x382892
    int64_t result; // 0x382892
    int32_t * v1 = (int32_t *)(result + 8 * result); // 0x382895
    *v1 = *v1 | (int32_t)result;
    int32_t * v2 = (int32_t *)((int64_t)*(int32_t *)(result + 8 * result) - 0x72f59710); // 0x382898
    *v2 = *v2 + (int32_t)a3;
    return result;
}

// Address range: 0x3828d6 - 0x3828df
int64_t function_3828d6(int64_t a1, int64_t a2) {
    // 0x3828d6
    int64_t v1; // 0x3828d6
    int32_t * v2 = (int32_t *)(v1 - 107); // 0x3828d6
    *v2 = *v2 + (int32_t)a2;
    return function_38293a(a1, a2, (int64_t)&g5);
}

// Address range: 0x382900 - 0x382928
int64_t function_382900(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x382900
    unknown_ffffffff8ce6d106();
    int32_t * v1 = (int32_t *)(a2 - 0xaeefe18); // 0x38290d
    int64_t v2; // 0x382900
    *v1 = *v1 | (int32_t)v2;
    *(char *)0x41bfb2718 = *(char *)0x41bfb2718 + (char)a4;
    int32_t * v3 = (int32_t *)(a5 - 0x4ce13bba); // 0x38291f
    *v3 = *v3 + (int32_t)a2;
    return 0x10000 * (int32_t)a5 >> 16;
}

// Address range: 0x382935 - 0x382936
int64_t function_382935(void) {
    // 0x382935
    int64_t result; // 0x382935
    return result;
}

// Address range: 0x38293a - 0x38293d
int64_t function_38293a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38293a
    int64_t v1; // 0x38293a
    *(char *)a1 = (char)v1;
    bool v2; // 0x38293a
    return (v2 ? 0xffffffff : 1) + a1 & 0xffffffff;
}

// Address range: 0x382947 - 0x38294f
int64_t function_382947(int64_t a1, int64_t a2) {
    // 0x382947
    int64_t v1; // 0x382947
    return v1 & 0xffffffff;
}

// Address range: 0x3829b6 - 0x382a0f
int64_t function_3829b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3829b6
    int64_t v1; // 0x3829b6
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x3829b6
    int64_t v3 = v2 ? -4 : 4; // 0x3829c0
    int64_t v4 = v3 + a1; // 0x3829c0
    unsigned char v5 = *(char *)-0x3d4f577d3f829af; // 0x3829c1
    int32_t * v6 = (int32_t *)(v4 + 0x13d0005); // 0x3829ca
    *v6 = (int32_t)(v1 + 0xff013d00 & 0xffffff00 | (int64_t)v5);
    int32_t v7 = *(int32_t *)0x2dd4b5bf; // 0x3829d0
    int32_t * v8 = (int32_t *)(v1 + 0x2568a363 + 4 * (int64_t)(0xcea2f78 * v7)); // 0x3829de
    uint32_t v9 = *v8; // 0x3829de
    uint32_t v10 = v9 + (int32_t)v1; // 0x3829de
    *v8 = v10;
    if (v10 >= v9 && v10 != 0) {
        int64_t v11 = v3 + a2; // 0x3829c0
        int32_t * v12 = (int32_t *)(v4 + 0x66013d68); // 0x3829eb
        *v12 = *v12 + (int32_t)v4;
        __asm_wait(v4, v11);
        *(int32_t *)(v11 - 0x32fe17ca) = (int32_t)v11;
        return function_838a78e();
    }
    int32_t * v13 = (int32_t *)(v1 - 81); // 0x382a05
    int32_t v14 = *v13; // 0x382a05
    v14 += (int32_t)v1;
    while (llvm_ctpop_i8((char)v14) % 2 == 0) {
        // 0x382a05
        v14 += (int32_t)v1;
    }
    // 0x382a0a
    *v13 = v14;
    return (int64_t)(*v6 - 0x178a21f0);
}

// Address range: 0x382a1c - 0x382a1f
int64_t function_382a1c(int64_t a1) {
    // 0x382a1c
    int64_t result; // 0x382a1c
    return result;
}

// Address range: 0x382a46 - 0x382a47
int64_t function_382a46(int64_t a1) {
    // 0x382a46
    int64_t result; // 0x382a46
    return result;
}

// Address range: 0x382b4e - 0x382b50
int64_t function_382b4e(void) {
    // 0x382b4e
    int64_t v1; // 0x382b4e
    return function_382b6a(v1, v1, v1, v1);
}

// Address range: 0x382b50 - 0x382b6a
int64_t function_382b50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x382b50
    float80_t v1; // 0x382b50
    *(float64_t *)(__asm_wait(a1, a2) - 0x654a5ff9) = (float64_t)v1;
    uint64_t v2 = unknown_2ace0c5d(); // 0x382b57
    char * v3 = (char *)(a3 + 0x4404c700); // 0x382b5c
    *v3 = *v3 & (char)(v2 / 256);
    bool v4; // 0x382b50
    int64_t v5 = v4 ? -4 : 4; // 0x382b63
    __asm_out_136((int16_t)a3, (char)v2);
    int64_t result = v2 & -24; // 0x382b65
    int64_t v6; // 0x382b50
    *(int32_t *)v6 = *(int32_t *)&v6 + (int32_t)(v5 + a2);
    *(int32_t *)(v5 + a1) = (int32_t)result;
    return result;
}

// Address range: 0x382b6a - 0x382b7e
int64_t function_382b6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x382b6a
    int64_t v1; // 0x382b6a
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x382b6a
    if (v3 != 0) {
        *(int32_t *)v1 = v2 >> 32 - v3 | v2 << v3;
    }
    __asm_out((int16_t)a3, v2);
    *(char *)a3 = (char)a3 - (char)((uint64_t)v1 / 256);
    function_627310();
    return unknown_ffffffffe8d8187b() & -256 | (int64_t)__asm_in(120);
}

// Address range: 0x382c00 - 0x382c03
int64_t function_382c00(int64_t a1) {
    // 0x382c00
    int64_t result; // 0x382c00
    return result;
}

// Address range: 0x382c1f - 0x382c22
int64_t function_382c1f(void) {
    // 0x382c1f
    int64_t result; // 0x382c1f
    return result;
}

// Address range: 0x382c56 - 0x382c59
int64_t function_382c56(void) {
    // 0x382c56
    int64_t result; // 0x382c56
    return result;
}

// Address range: 0x382d25 - 0x382d26
int64_t function_382d25(void) {
    // 0x382d25
    int64_t result; // 0x382d25
    return result;
}

// Address range: 0x382d5d - 0x382d77
int64_t function_382d5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(4 * a3 + 0x2f1bdb42); // 0x382d5d
    uint32_t v2 = *v1; // 0x382d5d
    uint32_t v3 = v2 + (int32_t)a3; // 0x382d5d
    *v1 = v3;
    int64_t v4; // 0x382d5d
    if (v3 < v2 || v3 == 0) {
        v4 = function_382d25();
    }
    int32_t * v5 = (int32_t *)(a1 + 1); // 0x382d66
    int32_t v6 = v4; // 0x382d66
    *v5 = *v5 | v6;
    int64_t v7; // 0x382d5d
    int32_t * v8 = (int32_t *)(v4 + 8 * v7); // 0x382d69
    *v8 = *v8 ^ (int32_t)v7;
    int32_t * v9 = (int32_t *)(a2 - 0x5ffbad78); // 0x382d6c
    *v9 = *v9 + v6;
    return a1 & 0xffffffff;
}

// Address range: 0x382dc2 - 0x382ddf
int64_t function_382dc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x382dc2
    __asm_iretd();
    int64_t v1 = unknown_fffffffff1fd19c9(); // 0x382dc3
    char * v2 = (char *)(a1 - 56); // 0x382dce
    int64_t v3; // 0x382dc2
    *v2 = *v2 + (char)((uint64_t)v3 / 256);
    int64_t v4; // 0x382dc2
    unsigned char v5 = *(char *)&v4 ^ (char)(a3 / 256); // 0x382dd1
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x382dd1
    int64_t v7; // 0x382dc2
    int64_t v8 = v7 - 8; // 0x382dd3
    *(int64_t *)v8 = a4 & 0xffffffff;
    int64_t result = unknown_3a7519da(); // 0x382dd4
    int64_t v9 = 256 * (int64_t)v5; // 0x382dd9
    while (v6 % 2 == 0) {
        // 0x382dd1
        v5 = *(char *)&v4 ^ (char)(v9 / 256);
        v6 = llvm_ctpop_i8(v5);
        v8 -= 8;
        *(int64_t *)v8 = result;
        result = unknown_3a7519da();
        v9 = 256 * (int64_t)v5;
    }
    int32_t * v10 = (int32_t *)result; // 0x382ddb
    uint32_t v11 = *v10; // 0x382ddb
    uint32_t v12 = (int32_t)v1 & 26 | 5; // 0x382ddb
    *v10 = v11 >> 32 - v12 | v11 << v12;
    return result;
}

// Address range: 0x382de0 - 0x382de2
int64_t function_382de0(void) {
    // 0x382de0
    int64_t result; // 0x382de0
    return result;
}

// Address range: 0x382e13 - 0x382e1f
int64_t function_382e13(int64_t a1, int64_t a2, int64_t a3) {
    // 0x382e13
    int64_t result; // 0x382e13
    int32_t * v1 = (int32_t *)(result - 0x17c6997d); // 0x382e13
    *v1 = *v1 | (int32_t)result;
    int32_t * v2 = (int32_t *)(a2 - 119); // 0x382e19
    *v2 = *v2 + (int32_t)result;
    return result;
}
