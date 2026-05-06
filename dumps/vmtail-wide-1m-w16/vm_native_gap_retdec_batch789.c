/*
 * Targeted RetDec C for native executable gap queue batch 789.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4020d1-0x4022d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4023d1-0x4024d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4024d1-0x4026d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4026d1-0x4028d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4028d1-0x402ad1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4535e3-0x4537e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4537e3-0x4539e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4539e3-0x453be3 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_4020d1(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_4020ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40212b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_402292(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_402298(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4023d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_402427(void);
int64_t function_402430(int64_t a1);
int64_t function_40243e(void);
int64_t function_402467(void);
int64_t function_402491(void);
int64_t function_402498(void);
int64_t function_40249a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4024cf(int64_t a1);
int64_t function_4024dd(void);
int64_t function_4024de(void);
int64_t function_4024df(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4024ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_40257a(void);
int64_t function_40258e(void);
int64_t function_402597(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_4025b6(int64_t a1);
int64_t function_4025b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4025e6(int64_t a1, int64_t result, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_402617(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_402641(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4026af(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4027bb(int64_t a1);
int64_t function_4027e0(void);
int64_t function_4027ff(int64_t a1, int64_t a2, int64_t a3);
int64_t function_402813(int64_t a1, int64_t a2, int64_t a3);
int64_t function_40287c(int64_t a1);
int64_t function_4028da(int64_t a1);
int64_t function_4028f0(void);
int64_t function_40291f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40297f(int64_t a1);
int64_t function_4029ef(int64_t a1);
int64_t function_402a02(int64_t a1);
int64_t function_4535cc();
int64_t function_4535e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_453699(void);
int64_t function_4536a5(void);
int64_t function_4537f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45383e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_453854(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4538b6(int64_t a1, int64_t a2);
int64_t function_4538d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4538f8(void);
int64_t function_453954(int64_t a1);
int64_t function_453971(void);
int64_t function_4539a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_453a3a(int64_t a1);
int64_t function_453ad8(void);
int64_t function_453b0a(void);
int64_t function_453b23(int64_t a1, int64_t a2);
int64_t function_6e6051f4();
int64_t function_79069c6f();
int64_t function_ffffffffac47a7a7();
int64_t function_ffffffffcf70ee20();
int64_t function_fffffffff1b02d08();

// Address range: 0x4020d1 - 0x4020d9
int64_t function_4020d1(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x4020d1
    int64_t v1; // 0x4020d1
    *(char *)a3 = (char)v1 + (char)(a3 / 256);
    bool v2; // 0x4020d1
    return v1 - (v2 ? 0xc9f3161a : 0xc9f31619) & 0xffffffff;
}

// Address range: 0x4020ec - 0x402100
int64_t function_4020ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4020ec
    int64_t v1; // 0x4020ec
    *(char *)0x77322676 = ((char)v1 ^ 88) + *(char *)0x77322676;
    char * v2 = (char *)(a2 - 102); // 0x4020f6
    *v2 = *v2 & (char)v1;
    return __asm_in((int16_t)a3);
}

// Address range: 0x40212b - 0x402244
int64_t function_40212b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x40212b
    int64_t v1; // 0x40212b
    int64_t v2 = (int64_t)((int32_t)v1 - *(int32_t *)(v1 + 38)); // 0x40212b
    int64_t v3 = v1 & 0xffffffff ^ 0x445b147b; // 0x402133
    int32_t * v4 = (int32_t *)(2 * v1 + 41 + v3); // 0x40213a
    uint32_t v5 = *v4; // 0x40213a
    uint32_t v6 = (int32_t)a1 + 1 + v5; // 0x40213a
    *v4 = v6;
    char * v7 = (char *)(v1 - 92); // 0x40213e
    *v7 = *v7 - (char)(a3 / 256) + (char)(v6 <= v5);
    int64_t result = v3 & 0xffffff00 | (int64_t)__asm_in_133(107); // 0x402141
    *(int64_t *)(v2 - 8) = a4;
    if (a4 != 1) {
        // 0x402150
        return result;
    }
    // 0x402147
    *(int64_t *)(v2 - 16) = a1;
    __asm_int(31);
    return result;
}

// Address range: 0x402292 - 0x402297
int64_t function_402292(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402292
    int64_t result; // 0x402292
    return result;
}

// Address range: 0x402298 - 0x4022b6
int64_t function_402298(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 & 0xffffff00 | 227; // 0x4022a5
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x402298
    unsigned char v3 = *(char *)((v2 & 0xffffffff) + 21); // 0x4022a7
    return v1 + 0x9d877f6d & 0xffffff50 | (int64_t)(v3 > (char)v2);
}

// Address range: 0x4023d1 - 0x402420
int64_t function_4023d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4023d1
    int64_t v1; // 0x4023d1
    uint64_t v2 = v1;
    __asm_outsd((int16_t)a3, (int32_t)v1);
    *(int32_t *)-0x26e6aab893c5a76c = (int32_t)v2;
    uint32_t v3 = (int32_t)(v2 & 0xffffff00 | (int64_t)*(char *)(v2 % 256 + v1)); // 0x4023e7
    bool v4; // 0x4023d1
    uint32_t v5 = (v4 ? 0x2f9b3307 : 0x2f9b3306) + v3; // 0x4023e7
    unsigned char v6 = (char)v5 - (v4 ? v5 <= v3 : v3 > 0xd064ccf9 ? -78 : -79); // 0x4023ed
    if (*(int32_t *)(a2 + 11) != 1 == v6 == 0) {
        // 0x40241b
        return (int64_t)v6 | (int64_t)(v5 & -256);
    }
    // 0x4023f2
    __asm_sti();
    return function_6e6051f4();
}

// Address range: 0x402427 - 0x402428
int64_t function_402427(void) {
    // 0x402427
    int64_t result; // 0x402427
    return result;
}

// Address range: 0x402430 - 0x402433
int64_t function_402430(int64_t a1) {
    // 0x402430
    int64_t result; // 0x402430
    return result;
}

// Address range: 0x40243e - 0x40243f
int64_t function_40243e(void) {
    // 0x40243e
    int64_t result; // 0x40243e
    return result;
}

// Address range: 0x402467 - 0x402468
int64_t function_402467(void) {
    // 0x402467
    int64_t result; // 0x402467
    return result;
}

// Address range: 0x402491 - 0x402493
int64_t function_402491(void) {
    // 0x402491
    return function_402467();
}

// Address range: 0x402498 - 0x40249a
int64_t function_402498(void) {
    // 0x402498
    return function_402427();
}

// Address range: 0x40249a - 0x4024c8
int64_t function_40249a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40249a
    int64_t v1; // 0x40249a
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x40249a
    int64_t v3 = v2 ? -4 : 4; // 0x40249a
    int64_t v4 = v3 + a1; // 0x40249a
    int32_t * v5 = (int32_t *)(v4 - 0x65633ef9); // 0x40249d
    *v5 = *v5 - 0xdf086ba;
    function_40243e();
    int32_t * v6 = (int32_t *)(v1 + 31); // 0x4024b5
    *v6 = *v6 + (int32_t)v1;
    *(char *)v4 = *(char *)(v3 + a2);
    int64_t v7; // 0x40249a
    return (int64_t)&v7;
}

// Address range: 0x4024cf - 0x4024d3
int64_t function_4024cf(int64_t a1) {
    // 0x4024cf
    int64_t result; // 0x4024cf
    return result;
}

// Address range: 0x4024dd - 0x4024de
int64_t function_4024dd(void) {
    // 0x4024dd
    int64_t result; // 0x4024dd
    return result;
}

// Address range: 0x4024de - 0x4024df
int64_t function_4024de(void) {
    // 0x4024de
    int64_t result; // 0x4024de
    return result;
}

// Address range: 0x4024df - 0x4024ea
int64_t function_4024df(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 - 0x5acab49e); // 0x4024df
    bool v2; // 0x4024df
    *v1 = *v1 + (char)a4 + (char)(bool)v2;
    return function_79069c6f();
}

// Address range: 0x4024ea - 0x40256f
int64_t function_4024ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    uint64_t v2 = a4 - 1; // 0x4024ea
    int64_t v3; // 0x4024ea
    bool v4; // 0x4024ea
    if (v2 != 0 == v4) {
        // 0x402569
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        return v3 & 0xf8b76841;
    }
    // 0x4024ec
    __asm_outsb((int16_t)a3, (char)a2);
    char v5 = v2 / 256 ^ a1; // 0x4024ed
    int64_t result; // 0x4024ea
    if (v5 < 1) {
        result = function_4024de();
    }
    // 0x4024f2
    if (v5 != 0) {
        // 0x40253a
        return result;
    }
    char v6 = (char)result & -101; // 0x4024f4
    if (v6 >= 0 == (v6 != 0)) {
        // 0x402540
        return function_4025b6((int64_t)&g1);
    }
    int32_t * v7 = (int32_t *)(v3 + 78); // 0x4024fa
    uint32_t v8 = *v7; // 0x4024fa
    uint32_t v9 = (int32_t)v3; // 0x4024fa
    *v7 = v8 - v9;
    char v10 = *(char *)&v1; // 0x4024fe
    return result & -256 | (int64_t)(v10 + 114 + (char)(v8 < v9));
}

// Address range: 0x40257a - 0x40257b
int64_t function_40257a(void) {
    // 0x40257a
    int64_t result; // 0x40257a
    return result;
}

// Address range: 0x40258e - 0x40258f
int64_t function_40258e(void) {
    // 0x40258e
    int64_t result; // 0x40258e
    return result;
}

// Address range: 0x402597 - 0x4025ac
int64_t function_402597(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)*(int32_t *)(a3 + 33); // 0x402597
    int64_t v2 = 0x49b82ddf * v1; // 0x402597
    int64_t v3 = v2 & 0xffffffff; // 0x402597
    int64_t v4 = __asm_int3(); // 0x40259f
    bool v5; // 0x402597
    if (v5 || v2 != 0x49b82ddf00000000 * v1 >> 32) {
        v4 = function_402617(a1, v3, a3, a4);
    }
    int64_t result = v4; // 0x4025a5
    if (llvm_ctpop_i8((char)a4 - (char)(a3 / 256) + (char)(v2 != 0x49b82ddf00000000 * v1 >> 32)) % 2 == 0) {
        result = function_40257a();
    }
    int32_t * v6 = (int32_t *)(v3 - 53); // 0x4025a7
    int64_t v7; // 0x402597
    *v6 = *v6 ^ (int32_t)v7;
    return result;
}

// Address range: 0x4025b6 - 0x4025b8
int64_t function_4025b6(int64_t a1) {
    // 0x4025b6
    int64_t result; // 0x4025b6
    return result;
}

// Address range: 0x4025b9 - 0x4025c3
int64_t function_4025b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4025b9
    int64_t v1; // 0x4025b9
    unsigned char v2 = (char)v1; // 0x4025b9
    char v3 = v2 / 128; // 0x4025b9
    uint32_t v4 = (int32_t)a4 % 32; // 0x4025bb
    bool v5 = v2 / 64 % 2 != v3; // 0x4025bb
    if (v4 != 0) {
        int32_t * v6 = (int32_t *)(v1 - 123); // 0x4025bb
        uint32_t v7 = *v6; // 0x4025bb
        uint32_t v8 = v4 - 1; // 0x4025bb
        int32_t v9 = v7 << v4 | (int32_t)(v3 != 0) << v8 | (int32_t)((int64_t)v7 >> (int64_t)(33 - v4)); // 0x4025bb
        *v6 = v9;
        v5 = v4 == 1 ? (v9 ^ v7 << v8) < 0 : v2 / 64 % 2 != v3;
    }
    if ((v2 & 64) != 0 == v5) {
        function_40258e();
    }
    // 0x4025c1
    return function_402641(a1, a2, a3, a4, (int64_t)&g1, (int64_t)&g1);
}

// Address range: 0x4025e6 - 0x40260e
int64_t function_4025e6(int64_t a1, int64_t result, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x4025e6
    int64_t v1; // 0x4025e6
    int32_t * v2 = (int32_t *)(v1 - 102); // 0x4025e6
    *v2 = *v2 ^ 106;
    int64_t v3; // 0x4025e6
    int32_t v4 = *(int32_t *)&v3; // 0x4025ea
    char v5 = __asm_in_135((int16_t)a3); // 0x4025ec
    char v6 = __asm_in_133(-20); // 0x4025ed
    int32_t * v7 = (int32_t *)(2 * a6 + 75 + v1); // 0x4025ef
    *v7 = *v7 ^ (int32_t)v1;
    char * v8 = (char *)(a4 & -256 | 100); // 0x402604
    *v8 = *v8 + (char)(a4 / 256);
    char * v9 = (char *)(((int64_t)(v4 & (int32_t)v1) | (int64_t)v5) & -256 | (int64_t)v6); // 0x402606
    *v9 = *v9 + (char)a3;
    return result;
}

// Address range: 0x402617 - 0x402640
int64_t function_402617(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402617
    int64_t v1; // 0x402617
    int64_t v2 = v1 & -256 | (int64_t)*(char *)0x256b3cfa050314c6; // 0x402617
    __asm_out_134((int16_t)a3, (int32_t)v2);
    int32_t v3 = *(int32_t *)-0x16bfa70e; // 0x402623
    bool v4; // 0x402617
    *(int32_t *)-0x16bfa70e = (int32_t)v4 - (int32_t)a2 + v3;
    unsigned char v5 = (*(char *)(2 * v1) ^ (char)a4) % 32; // 0x40262e
    if (v5 != 0) {
        *(char *)a2 = (char)a2 << v5 | (char)((int16_t)a2 % 256 >> (int16_t)(9 - v5));
    }
    return v2 + 0xc5684fe4 & 0xffffffff;
}

// Address range: 0x402641 - 0x402678
int64_t function_402641(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = __asm_iretd(); // 0x402641
    int64_t v2 = a4 - 1; // 0x402642
    bool v3; // 0x402641
    if (v2 != 0 != v3) {
        // 0x402644
        int64_t v4; // 0x402641
        return v4 & 0xffffffff;
    }
    unsigned char v5 = (char)v1; // 0x40266b
    unsigned char v6 = v3 ? -101 : -102; // 0x40266b
    int32_t * v7 = (int32_t *)(a4 - 0x516ce6dc); // 0x40266d
    *v7 = (int32_t)(v3 | v6 > v5) + (int32_t)v2 + *v7;
    return v1 & -256 | (int64_t)(v5 - v6);
}

// Address range: 0x4026af - 0x4027a2
int64_t function_4026af(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4026af
    bool v1; // 0x4026af
    if (v1) {
        uint64_t v2 = __asm_int3(); // 0x402722
        if (v1) {
            // 0x402796
            *(char *)(a1 - 114) = 0;
            char * v3 = (char *)(a4 - 119); // 0x402796
            *v3 = *v3 | (char)a4;
            uint32_t v4 = (int32_t)a4; // 0x402799
            int64_t v5; // 0x4026af
            unsigned char v6 = *(char *)&v5; // 0x40279e
            unsigned char v7 = (char)(v2 / 256); // 0x40279e
            *(char *)v5 = v6 - v7;
            char v8 = *(char *)(int64_t)(v4 / 0x40000000 | 4 * v4); // 0x4027a0
            return v2 & -256 | (int64_t)((char)(v6 < v7) + (char)v2 - v8);
        }
        char * v9 = (char *)(a2 - 0x6c231a99); // 0x402725
        *v9 = *v9 - (char)(a3 / 256);
        // 0x40272d
        __asm_outsd((int16_t)a3, *(int32_t *)a2);
        return v2 & -226;
    }
    // 0x4026b1
    *(int32_t *)a1 = (int32_t)a2;
    if (a4 == 1) {
        // 0x4026b8
        int64_t result; // 0x4026af
        return result;
    }
    // 0x40272d
    __asm_outsd((int16_t)a3, *(int32_t *)((v1 ? -4 : 4) + a2));
    int64_t result2; // 0x4026af
    return result2;
}

// Address range: 0x4027bb - 0x4027be
int64_t function_4027bb(int64_t a1) {
    // 0x4027bb
    int64_t v1; // 0x4027bb
    return function_402813(a1, v1, v1);
}

// Address range: 0x4027e0 - 0x4027e1
int64_t function_4027e0(void) {
    // 0x4027e0
    int64_t result; // 0x4027e0
    return result;
}

// Address range: 0x4027ff - 0x402813
int64_t function_4027ff(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __asm_hlt(); // 0x4027ff
    int64_t result = v1; // 0x402803
    bool v2; // 0x4027ff
    if (v2) {
        result = function_4027e0();
    }
    // 0x402806
    int64_t v3; // 0x4027ff
    char * v4 = (char *)((v1 % 256 | v3 & -256) - 0x74ed45b6); // 0x402807
    *v4 = *v4 + (char)a3;
    return result;
}

// Address range: 0x402813 - 0x402843
int64_t function_402813(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x40282d
    char v2 = __asm_insb(v1); // 0x40282d
    char * v3 = (char *)a1; // 0x40282d
    *v3 = v2;
    *v3 = __asm_insb(v1);
    int64_t v4; // 0x402813
    return v4 & 0xffffffff;
}

// Address range: 0x40287c - 0x40287f
int64_t function_40287c(int64_t a1) {
    // 0x40287c
    int64_t result; // 0x40287c
    return result;
}

// Address range: 0x4028da - 0x4028dd
int64_t function_4028da(int64_t a1) {
    // 0x4028da
    int64_t v1; // 0x4028da
    int64_t v2 = v1;
    bool v3; // 0x4028da
    return (v2 - (v3 ? 42 : 41)) % 256 | v2 & -256;
}

// Address range: 0x4028f0 - 0x4028f1
int64_t function_4028f0(void) {
    // 0x4028f0
    int64_t result; // 0x4028f0
    return result;
}

// Address range: 0x40291f - 0x40293a
int64_t function_40291f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40291f
    bool v1; // 0x40291f
    if (v1) {
        // 0x402921
        int64_t result; // 0x40291f
        return result;
    }
    int64_t v2; // 0x40291f
    if (true == !v1) {
        v2 = function_4028f0();
    }
    char * v3 = (char *)(v2 + 51); // 0x402925
    *v3 = (char)(v2 / 256);
    return 256 * (int64_t)*v3 | v2 & -0xff01;
}

// Address range: 0x40297f - 0x40298f
int64_t function_40297f(int64_t a1) {
    // 0x40297f
    int64_t v1; // 0x40297f
    return v1 + 0xac44669 & 0x80a40d86 | 0x7f5bf279;
}

// Address range: 0x4029ef - 0x4029f2
int64_t function_4029ef(int64_t a1) {
    // 0x4029ef
    int64_t result; // 0x4029ef
    return result;
}

// Address range: 0x402a02 - 0x402a05
int64_t function_402a02(int64_t a1) {
    // 0x402a02
    int64_t result; // 0x402a02
    return result;
}

// Address range: 0x4535e3 - 0x453682
int64_t function_4535e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4535e3
    int64_t v1; // 0x4535e3
    int64_t v2; // 0x4535e3
    bool v3; // 0x4535e3
    if (v3 || v3) {
        if (v3) {
            unsigned char v4 = *(char *)(v2 % 256 + v2); // 0x4535e9
            // 0x453615
            return 0x10000 * (int32_t)(v2 & 0xff00 | (int64_t)v4) >> 16;
        }
        // 0x4535e7
        v1 = function_4535cc();
    }
    int64_t result = v1;
    int32_t v5 = (int32_t)result - (int32_t)v2; // 0x453611
    *(int32_t *)result = v5;
    if (v5 != 0) {
        // 0x453679
        return ((result | v2) + 41) % 256 | result & -256;
    }
    // 0x453615
    return result;
}

// Address range: 0x453699 - 0x45369c
int64_t function_453699(void) {
    // 0x453699
    int64_t result; // 0x453699
    return result;
}

// Address range: 0x4536a5 - 0x4536a6
int64_t function_4536a5(void) {
    // 0x4536a5
    int64_t result; // 0x4536a5
    return result;
}

// Address range: 0x4537f0 - 0x4537fd
int64_t function_4537f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4537f0
    return function_fffffffff1b02d08();
}

// Address range: 0x45383e - 0x453846
int64_t function_45383e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45383e
    int64_t result; // 0x45383e
    return result;
}

// Address range: 0x453854 - 0x45388b
int64_t function_453854(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x453854
    int64_t result; // 0x453854
    if ((a3 + 36 & 0xffffffff) == 1 || (result & 0x797d0cb0) == 0) {
        // 0x45385f
        return result;
    }
    // 0x453877
    *(char *)a1 = (char)a2;
    int32_t * v1 = (int32_t *)(a3 + 0x1175a4a1 + result); // 0x453881
    *v1 = *v1 & (int32_t)result;
    return result;
}

// Address range: 0x4538b6 - 0x4538c5
int64_t function_4538b6(int64_t a1, int64_t a2) {
    // 0x4538b6
    int64_t result; // 0x4538b6
    *(char *)a1 = (char)result;
    int32_t * v1 = (int32_t *)(result + 111); // 0x4538b8
    uint32_t v2 = *v1; // 0x4538b8
    *v1 = v2 / 0x10000 | 0x10000 * v2;
    return result;
}

// Address range: 0x4538d0 - 0x4538f6
int64_t function_4538d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4538d0
    return a1 & 0xffffffff;
}

// Address range: 0x4538f8 - 0x4538fb
int64_t function_4538f8(void) {
    // 0x4538f8
    int64_t result; // 0x4538f8
    return result;
}

// Address range: 0x453954 - 0x453957
int64_t function_453954(int64_t a1) {
    // 0x453954
    int64_t result; // 0x453954
    return result;
}

// Address range: 0x453971 - 0x453976
int64_t function_453971(void) {
    // 0x453971
    return function_ffffffffac47a7a7();
}

// Address range: 0x4539a1 - 0x453a19
int64_t function_4539a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4539a1
    int64_t v1; // 0x4539a1
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)v1 | 0x3dbc7b11; // 0x4539a1
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x4539a1
    int64_t result = v3; // 0x4539a1
    if (v4 % 2 == 0) {
        // 0x453a0a
        return result;
    }
    // 0x453a0f
    *(int32_t *)v2 = (int32_t)(v2 & v1);
    return result;
}

// Address range: 0x453a3a - 0x453a3b
int64_t function_453a3a(int64_t a1) {
    // 0x453a3a
    int64_t result; // 0x453a3a
    return result;
}

// Address range: 0x453ad8 - 0x453add
int64_t function_453ad8(void) {
    // 0x453ad8
    return function_ffffffffcf70ee20();
}

// Address range: 0x453b0a - 0x453b0d
int64_t function_453b0a(void) {
    // 0x453b0a
    int64_t result; // 0x453b0a
    return result;
}

// Address range: 0x453b23 - 0x453b2a
int64_t function_453b23(int64_t a1, int64_t a2) {
    // 0x453b23
    int64_t result; // 0x453b23
    int32_t * v1 = (int32_t *)(result + 0x6760970b); // 0x453b23
    *v1 = *v1 - (int32_t)a2;
    return result;
}
