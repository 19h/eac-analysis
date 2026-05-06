/*
 * Targeted RetDec C for native executable gap queue batch 775.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3c13dd-0x3c15dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c15dd-0x3c17dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c17dd-0x3c19dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d93b9-0x3d95b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d95b9-0x3d96b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d97b9-0x3d98b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d99b9-0x3d9bb9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d9bb9-0x3d9db9 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_3c13dd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c14af(int64_t a1);
int64_t function_3c15d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c1740(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c192d(void);
int64_t function_3c193e(void);
int64_t function_3c19a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c3d9c8e();
int64_t function_3d93b9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3d93fc(int64_t a1);
int64_t function_3d9448(int64_t a1, int64_t a2);
int64_t function_3d94a7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d9515(void);
int64_t function_3d952b(void);
int64_t function_3d9586(int64_t a1, int64_t a2);
int64_t function_3d95d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d9611(int64_t a1);
int64_t function_3d9628(void);
int64_t function_3d962f(int64_t a1);
int64_t function_3d97ab();
int64_t function_3d97b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d981c(void);
int64_t function_3d9868(int64_t a1);
int64_t function_3d9871(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d99b9(void);
int64_t function_3d99db(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d9a18(int64_t a1);
int64_t function_3d9a3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d9a84(void);
int64_t function_3d9a85(void);
int64_t function_3d9abc(int64_t a1);
int64_t function_3d9acb(int64_t a1);
int64_t function_3d9ae9(int64_t a1, int64_t a2);
int64_t function_3d9b61(void);
int64_t function_3d9b7f(int64_t a1);
int64_t function_3d9b86(int64_t a1);
int64_t function_3d9b9b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d9ba9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d9c11(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d9c31(int64_t a1);
int64_t function_3d9c8b(void);
int64_t function_3d9caa(int64_t a1);
int64_t function_3d9cd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d9d29(void);
int64_t function_3d9d34(int64_t a1);
int64_t function_3d9d44(void);
int64_t function_3d9d5f(void);
int64_t function_3d9d62(void);
int64_t function_3d9d68(void);
int64_t function_3d9d8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d9db3(void);
int64_t function_caf2a();
int64_t function_ffffffff91f34392();
int64_t unknown_1fc94c93();
int64_t unknown_234ee7ca();
int64_t unknown_4896f2f4();
int64_t unknown_73f7bc7();
int64_t unknown_75ea33c0();
int64_t unknown_7ac649af();
int64_t unknown_ffffffff95300af7();
int64_t unknown_ffffffff96a03823();
int64_t unknown_ffffffffb4caecd5();
int64_t unknown_ffffffffbc4127bf();
int64_t unknown_ffffffffc25db898();
int64_t unknown_ffffffffe8811f6d();
int64_t unknown_ffffffffee335c80();
int64_t unknown_fffffffff2b52aeb();

// Address range: 0x3c13dd - 0x3c14af
int64_t function_3c13dd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c13dd
    int64_t v1; // 0x3c13dd
    return function_caf2a(a1, a2, v1, v1, v1);
}

// Address range: 0x3c14af - 0x3c15d6
int64_t function_3c14af(int64_t a1) {
    // 0x3c14af
    int64_t v1; // 0x3c14af
    return function_caf2a(v1, v1, v1, v1, v1);
}

// Address range: 0x3c15d6 - 0x3c1740
int64_t function_3c15d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c15d6
    int64_t v1; // bp-40, 0x3c15d6
    int64_t v2 = (int64_t)&v1; // 0x3c1662
    v1 = 0x623c9f98;
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x3c1685
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x3c168b
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x3c168b
    *v5 = v4;
    *v3 = v2;
    int64_t v6 = *(int64_t *)(v2 + 8); // 0x3c16a7
    *v3 = v6;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x3c16ab
    *v7 = 0xe35f56b;
    *(int64_t *)(v2 - 32) = 0x424f27b;
    *(int64_t *)(v2 - 40) = v4;
    *v5 = *v7;
    *v7 = v6;
    *(int64_t *)(v2 + 16) = *v3;
    int64_t v8 = *v5; // 0x3c16fd
    *v3 = v8;
    *v7 = v8;
    *v5 = v1;
    *v3 = v2;
    int64_t v9; // 0x3c15d6
    return function_caf2a(a1, a2, a3, a4, v9);
}

// Address range: 0x3c1740 - 0x3c18b7
int64_t function_3c1740(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c1740
    int64_t v1; // bp-48, 0x3c1740
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x3c1740
    return function_caf2a(a1, a2, a3, a4, v2);
}

// Address range: 0x3c192d - 0x3c1930
int64_t function_3c192d(void) {
    // 0x3c192d
    int64_t result; // 0x3c192d
    return result;
}

// Address range: 0x3c193e - 0x3c1941
int64_t function_3c193e(void) {
    // 0x3c193e
    int64_t result; // 0x3c193e
    return result;
}

// Address range: 0x3c19a8 - 0x3c19db
int64_t function_3c19a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c19a8
    int64_t v1; // 0x3c19a8
    char * v2 = (char *)(v1 - 127); // 0x3c19a8
    *v2 = *v2 | (char)a4;
    return v1 & -256;
}

// Address range: 0x3d93b9 - 0x3d93ea
int64_t function_3d93b9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3d93b9
    int64_t v1; // 0x3d93b9
    int32_t * v2 = (int32_t *)(a1 - 77 + v1); // 0x3d93b9
    *v2 = *v2 + (int32_t)a2;
    unknown_73f7bc7();
    int32_t * v3 = (int32_t *)(v1 - 0x7cd5c0df + 8 * v1); // 0x3d93c2
    *v3 = *v3 + (int32_t)a3;
    int32_t v4 = *(int32_t *)-0x617e83cdfe1770d4; // 0x3d93c9
    uint64_t v5 = a4 / 256; // 0x3d93d4
    *(char *)-0x6dd2945a = (char)v5;
    uint64_t v6 = v5 + 74; // 0x3d93da
    int32_t * v7 = (int32_t *)(a2 + 6); // 0x3d93dc
    *v7 = *v7 + (int32_t)a1;
    char * v8 = (char *)((v6 % 256 | (int64_t)(v4 & -256)) - 0x370af89a); // 0x3d93e2
    *v8 = (char)v1 + (char)v6 + *v8;
    int64_t v9; // 0x3d93b9
    *(char *)a2 = *(char *)&v9 - (char)a3;
    return a4 & 0xffffffff;
}

// Address range: 0x3d93fc - 0x3d93fe
int64_t function_3d93fc(int64_t a1) {
    // 0x3d93fc
    int64_t result; // 0x3d93fc
    return result;
}

// Address range: 0x3d9448 - 0x3d9467
int64_t function_3d9448(int64_t a1, int64_t a2) {
    // 0x3d9448
    int64_t v1; // 0x3d9448
    int64_t result = v1;
    *(char *)a2 = (char)v1 - (char)result + (char)((int32_t)result < 0xb34da401);
    return result;
}

// Address range: 0x3d94a7 - 0x3d94b6
int64_t function_3d94a7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d94a7
    *(char *)0x13da670 = *(char *)0x13da670 + (char)a3;
    int64_t v1; // 0x3d94a7
    return 0x13da670 - v1 & 0xffffffff;
}

// Address range: 0x3d9515 - 0x3d9516
int64_t function_3d9515(void) {
    // 0x3d9515
    int64_t result; // 0x3d9515
    return result;
}

// Address range: 0x3d952b - 0x3d952d
int64_t function_3d952b(void) {
    // 0x3d952b
    return function_3d9515();
}

// Address range: 0x3d9586 - 0x3d959c
int64_t function_3d9586(int64_t a1, int64_t a2) {
    // 0x3d9586
    int64_t v1; // 0x3d9586
    char * v2 = (char *)(v1 - 0xf1efe18); // 0x3d958b
    *v2 = *v2 + 1;
    return a2 & 0xffffffff;
}

// Address range: 0x3d95d5 - 0x3d95df
int64_t function_3d95d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d95d5
    return a1 & 0xffffffff;
}

// Address range: 0x3d9611 - 0x3d9612
int64_t function_3d9611(int64_t a1) {
    // 0x3d9611
    int64_t result; // 0x3d9611
    return result;
}

// Address range: 0x3d9628 - 0x3d9629
int64_t function_3d9628(void) {
    // 0x3d9628
    int64_t result; // 0x3d9628
    return result;
}

// Address range: 0x3d962f - 0x3d9644
int64_t function_3d962f(int64_t a1) {
    // 0x3d962f
    int64_t v1; // 0x3d962f
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 | v1);
    int32_t * v3 = (int32_t *)(2 * v1 - 24 + v2); // 0x3d9631
    uint32_t v4 = *v3; // 0x3d9631
    *v3 = v4 + 0x16dd7901;
    int64_t result = __asm_sti(); // 0x3d963a
    if (v4 > 0xe92286fe) {
        result = function_3d9628();
    }
    // 0x3d963c
    return result;
}

// Address range: 0x3d97b9 - 0x3d97fa
int64_t function_3d97b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d97b9
    unknown_ffffffffbc4127bf();
    unknown_234ee7ca();
    int32_t * v1 = (int32_t *)(a3 + 0x56ea1449); // 0x3d97c9
    int32_t v2 = a1; // 0x3d97c9
    *v1 = *v1 + v2;
    unknown_ffffffffb4caecd5();
    int32_t * v3 = (int32_t *)(a1 + 0x1e8e510); // 0x3d97d6
    int64_t v4; // 0x3d97b9
    int32_t v5 = *v3 - (int32_t)(int64_t)&v4; // 0x3d97d6
    *v3 = v5;
    *(int32_t *)(a3 + 28) = v2;
    unknown_fffffffff2b52aeb();
    while (v5 != 0) {
        // 0x3d97dc
        *(int32_t *)(a3 + 28) = v2;
        unknown_fffffffff2b52aeb();
    }
    int64_t result = 0x10000 * (int32_t)unknown_4896f2f4() >> 16; // 0x3d97f3
    *(char *)(result - 0x50f53a29) = (char)a3;
    return result;
}

// Address range: 0x3d981c - 0x3d981e
int64_t function_3d981c(void) {
    // 0x3d981c
    return function_3d97ab();
}

// Address range: 0x3d9868 - 0x3d986a
int64_t function_3d9868(int64_t a1) {
    // 0x3d9868
    return __asm_hlt(a1);
}

// Address range: 0x3d9871 - 0x3d98a7
int64_t function_3d9871(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d9871
    int64_t v1; // 0x3d9871
    float80_t v2; // 0x3d9871
    *(int32_t *)v1 = (int32_t)v2;
    int32_t * v3 = (int32_t *)(a3 - 0x57e1544b); // 0x3d9875
    *v3 = *v3 + (int32_t)a1;
    int32_t * v4 = (int32_t *)(a3 + 107 + 4 * a3); // 0x3d9884
    int32_t v5 = v1; // 0x3d9884
    *v4 = *v4 + v5;
    unknown_ffffffffc25db898();
    __asm_iretd();
    uint32_t v6 = __asm_in((int16_t)a3); // 0x3d9898
    int64_t v7; // 0x3d9871
    *(int32_t *)a1 = *(int32_t *)&v7;
    bool v8; // 0x3d9871
    int64_t v9 = v8 ? -4 : 4; // 0x3d9899
    int64_t v10 = (v1 + (int64_t)v6) % 256 | (int64_t)(v6 & -256); // 0x3d989b
    int32_t * v11 = (int32_t *)(v10 + 8 * v1); // 0x3d989d
    *v11 = *v11 | (int32_t)v10;
    int64_t v12; // 0x3d9871
    *(int32_t *)a4 = *(int32_t *)&v12 + v5;
    return __asm_int1(v9 + a1, v9 + a2);
}

// Address range: 0x3d99b9 - 0x3d99bb
int64_t function_3d99b9(void) {
    // 0x3d99b9
    int64_t v1; // 0x3d99b9
    return v1 & -256 | 166;
}

// Address range: 0x3d99db - 0x3d9a00
int64_t function_3d99db(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x3d99db
    int64_t result = v2 & 0xffffffff; // 0x3d99dd
    *(char *)a3 = (char)(v2 / 256 | a3);
    int64_t v3; // 0x3d99db
    *(int32_t *)result = *(int32_t *)&v3 & 26;
    char v4 = *(char *)&v1; // 0x3d99fe
    *(char *)v1 = v4 + (char)((int64_t)&g3 >> 8);
    return result;
}

// Address range: 0x3d9a18 - 0x3d9a19
int64_t function_3d9a18(int64_t a1) {
    // 0x3d9a18
    int64_t result; // 0x3d9a18
    return result;
}

// Address range: 0x3d9a3f - 0x3d9a82
int64_t function_3d9a3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d9a3f
    int64_t v1; // 0x3d9a3f
    uint32_t v2 = *(int32_t *)(a1 - 98) | (int32_t)v1; // 0x3d9a40
    char * v3 = (char *)((a3 & 0xffffffff) + 10); // 0x3d9a46
    char v4 = *(char *)(v1 + (int64_t)v2) > (char)a4 ? 59 : 58; // 0x3d9a46
    *v3 = *v3 - v4;
    __asm_emms();
    unknown_ffffffffe8811f6d();
    int32_t * v5 = (int32_t *)(a1 + 99); // 0x3d9a6c
    *v5 = *v5 + v2;
    char * v6 = (char *)(a2 - 106); // 0x3d9a74
    *v6 = *v6 | -31;
    return unknown_ffffffffee335c80((int32_t)a2 + (int32_t)a1);
}

// Address range: 0x3d9a84 - 0x3d9a85
int64_t function_3d9a84(void) {
    // 0x3d9a84
    int64_t result; // 0x3d9a84
    return result;
}

// Address range: 0x3d9a85 - 0x3d9a86
int64_t function_3d9a85(void) {
    // 0x3d9a85
    int64_t result; // 0x3d9a85
    return result;
}

// Address range: 0x3d9abc - 0x3d9abf
int64_t function_3d9abc(int64_t a1) {
    // 0x3d9abc
    int64_t result; // 0x3d9abc
    return result;
}

// Address range: 0x3d9acb - 0x3d9acc
int64_t function_3d9acb(int64_t a1) {
    // 0x3d9acb
    int64_t result; // 0x3d9acb
    return result;
}

// Address range: 0x3d9ae9 - 0x3d9b05
int64_t function_3d9ae9(int64_t a1, int64_t a2) {
    // 0x3d9ae9
    int64_t v1; // 0x3d9ae9
    int32_t * v2 = (int32_t *)(v1 - 0xf2bc0b2); // 0x3d9ae9
    *v2 = *v2 + (int32_t)a1;
    int64_t v3 = unknown_ffffffff95300af7(); // 0x3d9af7
    if ((char)v1 >= -95) {
        v3 = function_3d9a84();
    }
    int32_t * v4 = (int32_t *)(a1 + 86); // 0x3d9afe
    int32_t v5 = *v4; // 0x3d9afe
    *v4 = v5 - (int32_t)a2 + (int32_t)(((int32_t)v3 ^ -2) < 0x1e8abae);
    return function_3d9a85();
}

// Address range: 0x3d9b61 - 0x3d9b6b
int64_t function_3d9b61(void) {
    // 0x3d9b61
    int64_t v1; // 0x3d9b61
    int32_t * v2 = (int32_t *)(v1 + 28); // 0x3d9b61
    *v2 = *v2 + (int32_t)v1;
    return function_3c3d9c8e();
}

// Address range: 0x3d9b7f - 0x3d9b82
int64_t function_3d9b7f(int64_t a1) {
    // 0x3d9b7f
    int64_t result; // 0x3d9b7f
    return result;
}

// Address range: 0x3d9b86 - 0x3d9b87
int64_t function_3d9b86(int64_t a1) {
    // 0x3d9b86
    int64_t result; // 0x3d9b86
    return result;
}

// Address range: 0x3d9b9b - 0x3d9ba1
int64_t function_3d9b9b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d9b9b
    int64_t result; // 0x3d9b9b
    int32_t * v1 = (int32_t *)(result + 2 * a2); // 0x3d9b9b
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x3d9ba9 - 0x3d9bc6
int64_t function_3d9ba9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_7ac649af(); // 0x3d9ba9
    int16_t v1 = (int16_t)a3 & -256 | 211; // 0x3d9bb0
    *(int32_t *)a1 = __asm_insd(v1);
    bool v2; // 0x3d9ba9
    if (!v2) {
        // 0x3d9c2e
        return result;
    }
    // 0x3d9bb3
    int64_t v3; // 0x3d9ba9
    __asm_outsb(v1, *(char *)&v3);
    int64_t v4 = unknown_75ea33c0(); // 0x3d9bba
    char v5 = *(char *)-0x408a380d; // 0x3d9bbf
    return v4 & -0x10000 | (int64_t)((256 * (int16_t)v4 >> 8) * (int16_t)v5);
}

// Address range: 0x3d9c11 - 0x3d9c2e
int64_t function_3d9c11(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 61 + 8 * a4); // 0x3d9c15
    *v1 = *v1 + (int32_t)a2;
    int64_t v2; // 0x3d9c11
    int32_t * v3 = (int32_t *)((v2 | 254) + v2 & 0xffffffff); // 0x3d9c1b
    *v3 = *v3 + ((int32_t)a3 & -256 | 232);
    int64_t v4 = unknown_ffffffff96a03823(); // 0x3d9c1d
    int32_t * v5 = (int32_t *)(a4 + 0x3a088043); // 0x3d9c22
    uint32_t v6 = *v5; // 0x3d9c22
    *v5 = v6 / 2048 | 0x200000 * v6;
    int64_t result = v4 & -0xff01 | (int64_t)&g2; // 0x3d9c29
    int32_t * v7 = (int32_t *)result; // 0x3d9c2b
    *v7 = *v7 & (-1 << (int32_t)result % 32) - 1;
    return result;
}

// Address range: 0x3d9c31 - 0x3d9c3d
int64_t function_3d9c31(int64_t a1) {
    // 0x3d9c31
    int64_t result; // 0x3d9c31
    char * v1 = (char *)(result + 8); // 0x3d9c31
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x3d9c8b - 0x3d9c8e
int64_t function_3d9c8b(void) {
    // 0x3d9c8b
    int64_t result; // 0x3d9c8b
    return result;
}

// Address range: 0x3d9caa - 0x3d9caf
int64_t function_3d9caa(int64_t a1) {
    // 0x3d9caa
    int64_t result; // 0x3d9caa
    return result;
}

// Address range: 0x3d9cd3 - 0x3d9d29
int64_t function_3d9cd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d9cd3
    int64_t v1; // 0x3d9cd3
    uint64_t v2 = v1;
    __asm_out(-28, (char)v1);
    char * v3 = (char *)(v2 + 73); // 0x3d9cda
    *v3 = *v3 ^ (char)(v2 / 256);
    int64_t v4 = *(int64_t *)(a2 - 0x2afd596c); // 0x3d9cdd
    int32_t v5 = v4;
    int32_t v6 = v5; // bp-8, 0x3d9cdd
    uint32_t v7 = (int32_t)v2 - *(int32_t *)(a1 + 16); // 0x3d9ce3
    *(char *)0x3ef870f1 = *(char *)0x3ef870f1 + (char)(v7 / 256);
    int64_t v8 = v7; // 0x3d9cf1
    float80_t v9; // 0x3d9cd3
    *(int32_t *)v8 = (int32_t)v9;
    int32_t * v10 = (int32_t *)(v8 + 82); // 0x3d9cf8
    *v10 = *v10 | v5;
    int64_t result = v8 & 0xffffff00 | (int64_t)((v7 + 31) % 256); // 0x3d9cfb
    if (a4 != 1) {
        // 0x3d9d67
        return result;
    }
    char v11 = *(char *)-0x10c125fb; // 0x3d9cff
    *(char *)-0x10c125fb = v11 | (char)(v1 / 256) | 121;
    v6 = result;
    int32_t * v12 = (int32_t *)((int64_t)&v6 + 83 + (0x100000000 * v4 >> 29)); // 0x3d9d11
    *v12 = *v12 + v5;
    int64_t result2 = v8 & 0x97f8a000 | (int64_t)*(char *)-0x17fdd718effeeedf | 0x68075fa6; // 0x3d9d16
    char * v13 = (char *)result2; // 0x3d9d1c
    *v13 = *v13 + (char)result2;
    __asm_out_133(-79, (int32_t)result2);
    *(char *)a1 = __asm_insb((int16_t)v4);
    *(int32_t *)a1 = (int32_t)v9;
    return result2;
}

// Address range: 0x3d9d29 - 0x3d9d2e
int64_t function_3d9d29(void) {
    // 0x3d9d29
    return function_ffffffff91f34392();
}

// Address range: 0x3d9d34 - 0x3d9d35
int64_t function_3d9d34(int64_t a1) {
    // 0x3d9d34
    int64_t result; // 0x3d9d34
    return result;
}

// Address range: 0x3d9d44 - 0x3d9d45
int64_t function_3d9d44(void) {
    // 0x3d9d44
    int64_t result; // 0x3d9d44
    return result;
}

// Address range: 0x3d9d5f - 0x3d9d60
int64_t function_3d9d5f(void) {
    // 0x3d9d5f
    int64_t result; // 0x3d9d5f
    return result;
}

// Address range: 0x3d9d62 - 0x3d9d67
int64_t function_3d9d62(void) {
    // 0x3d9d62
    int64_t result; // 0x3d9d62
    return result;
}

// Address range: 0x3d9d68 - 0x3d9d6b
int64_t function_3d9d68(void) {
    // 0x3d9d68
    int64_t v1; // 0x3d9d68
    int64_t v2 = v1;
    bool v3; // 0x3d9d68
    return (v2 - (v3 ? 168 : 167)) % 256 | v2 & -256;
}

// Address range: 0x3d9d8d - 0x3d9db3
int64_t function_3d9d8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d9d8d
    unknown_1fc94c93();
    float80_t v1; // 0x3d9d8d
    *(int32_t *)0x2264281 = (int32_t)v1;
    int32_t * v2 = (int32_t *)(a4 + 16); // 0x3d9da8
    int64_t v3; // 0x3d9d8d
    int32_t v4 = v3; // 0x3d9da8
    *v2 = *v2 + v4;
    bool v5; // 0x3d9d8d
    int32_t * v6 = (int32_t *)((v5 ? -1 : 1) + a2); // 0x3d9daf
    *v6 = *v6 + v4;
    return function_3d9d5f();
}

// Address range: 0x3d9db3 - 0x3d9db8
int64_t function_3d9db3(void) {
    // 0x3d9db3
    int64_t result; // 0x3d9db3
    bool v1; // 0x3d9db3
    if (!v1) {
        result = function_3d9d44();
    }
    // 0x3d9db6
    return result;
}
