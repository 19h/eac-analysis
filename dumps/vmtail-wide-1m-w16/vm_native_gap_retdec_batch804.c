/*
 * Targeted RetDec C for native executable gap queue batch 804.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1f1ae8-0x1f1ce8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f1ce8-0x1f1ee8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f1ee8-0x1f20e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x29c2bf-0x29c4bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29c4bf-0x29c6bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29c6bf-0x29c8bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29c8bf-0x29cabf rank=- name=- kind=- bytes=- uncovered=-
 *   0x29cabf-0x29ccbf rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1f1ae8(void);
int64_t function_1f1aea(void);
int64_t function_1f1b2e(void);
int64_t function_1f1bd5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1f1c9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1f1d9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, int64_t a7);
int64_t function_1f1e77(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f1ebc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f1edf(int64_t a1);
int64_t function_1f1f10(void);
int64_t function_1f1f15(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f1f49(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f1f64(void);
int64_t function_1f1f66(int64_t a1);
int64_t function_1f1f72(void);
int64_t function_1f1f79(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f1fc5(int64_t a1);
int64_t function_1f1ff9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1f2026(int64_t a1);
int64_t function_1f206a(int64_t a1);
int64_t function_1f2077(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f20b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f20d8(int64_t a1, int64_t a2);
int64_t function_29c2bf(int64_t a1);
int64_t function_29c2ea(void);
int64_t function_29c2fb(void);
int64_t function_29c301(int64_t a1);
int64_t function_29c303(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29c30c(int64_t a1);
int64_t function_29c34a(int64_t a1);
int64_t function_29c3d1(void);
int64_t function_29c3d6(void);
int64_t function_29c404(int64_t a1);
int64_t function_29c40c(void);
int64_t function_29c43a(void);
int64_t function_29c4d8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29c50e(void);
int64_t function_29c53e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29c5ce(int64_t a1);
int64_t function_29c5dd(void);
int64_t function_29c60d(void);
int64_t function_29c635(int64_t a1);
int64_t function_29c644(void);
int64_t function_29c67c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29c6d5(void);
int64_t function_29c6e6(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_29c747(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29c74f(void);
int64_t function_29c753(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29c755(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29c7e5(int64_t a1, int64_t a2);
int64_t function_29c82b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29c864(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29ca3e(void);
int64_t function_29ca78(void);
int64_t function_29ca97(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29cacc(void);
int64_t function_29caf5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29cb53(void);
int64_t function_29cb7c(int64_t a1);
int64_t function_29cb9c(int64_t a1, int64_t a2);
int64_t function_29cba6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29cbdf(int64_t a1);
int64_t function_29cc76(void);
int64_t function_29cca8(void);
int64_t function_29ccb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6f97cb09();
int64_t function_73692134();
int64_t function_88dd33();
int64_t function_ffffffff98086473();
int64_t function_ffffffff9c2a61ff();
int64_t function_ffffffffabddc55f();
int64_t function_ffffffffdc2a04cc();
int64_t function_ffffffffe8f5cf0e();
int64_t unknown_1e12be04();
int64_t unknown_2c7e01ac();
int64_t unknown_30bf545d();
int64_t unknown_38b559f8();
int64_t unknown_3a3d36a1();
int64_t unknown_3acf4a03();
int64_t unknown_3d37d16a();
int64_t unknown_4ad96eba();
int64_t unknown_4e41508b();
int64_t unknown_55f6d53();
int64_t unknown_5e8f532a();
int64_t unknown_6b2a3aba();
int64_t unknown_6df872b0();
int64_t unknown_730ae852();
int64_t unknown_ffffffff82a9aa31();
int64_t unknown_ffffffff89ebc135();
int64_t unknown_ffffffff9022ae9e();
int64_t unknown_ffffffff91fa1ae9();
int64_t unknown_ffffffff9a2afff0();
int64_t unknown_ffffffffb02c6dbc();
int64_t unknown_ffffffffbbae61ad();
int64_t unknown_ffffffffc0247ebc();
int64_t unknown_ffffffffc83465d4();
int64_t unknown_ffffffffcb2a2016();
int64_t unknown_ffffffffe1db8b12();
int64_t unknown_ffffffffe46a31a9();
int64_t unknown_ffffffffecc9cc96();
int64_t unknown_fffffffffbdb9af4();

// Address range: 0x1f1ae8 - 0x1f1ae9
int64_t function_1f1ae8(void) {
    // 0x1f1ae8
    int64_t result; // 0x1f1ae8
    return result;
}

// Address range: 0x1f1aea - 0x1f1aeb
int64_t function_1f1aea(void) {
    // 0x1f1aea
    int64_t result; // 0x1f1aea
    return result;
}

// Address range: 0x1f1b2e - 0x1f1b30
int64_t function_1f1b2e(void) {
    // 0x1f1b2e
    return function_1f1aea();
}

// Address range: 0x1f1bd5 - 0x1f1bfa
int64_t function_1f1bd5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x1f1bd5
    int64_t v3 = v2 + a2 & 0xffffffff; // 0x1f1bd5
    int32_t * v4 = (int32_t *)((v2 & 0xf8105cdc | 0x7efa323) - 0x63921bf9); // 0x1f1bdd
    *v4 = *v4 + (int32_t)v2;
    int64_t result = unknown_ffffffff91fa1ae9(); // 0x1f1be3
    char * v5 = (char *)result; // 0x1f1be8
    *v5 = *v5 + (char)a3;
    if (a3 / 256 <= (int64_t)*(char *)&v1) {
        // 0x1f1bf2
        return unknown_38b559f8();
    }
    // 0x1f1bee
    *(char *)v1 = *(char *)&v3;
    bool v6; // 0x1f1bd5
    *(char *)(v1 + (v6 ? -1 : 1)) = (char)result;
    return result;
}

// Address range: 0x1f1c9b - 0x1f1d62
int64_t function_1f1c9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x1f1c9b
    int32_t * v3 = (int32_t *)(v2 + 0x37cf4a2f); // 0x1f1c9b
    uint32_t v4 = *v3; // 0x1f1c9b
    int32_t v5 = v2; // 0x1f1c9b
    int32_t v6 = v4 + v5; // 0x1f1c9b
    *v3 = v6;
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0 == (v6 != 0)) {
        if (v6 < v4 || v6 == 0) {
            // 0x1f1d60
            return a5 & 0xffffffff;
        }
        // 0x1f1d0d
        *(int32_t *)a1 = *(int32_t *)&v1;
        return v2 & 0xffffffff ^ 0x13d00b6;
    }
    // 0x1f1ca3
    int64_t v7; // 0x1f1c9b
    int64_t v8 = v7;
    *(char *)v8 = *(char *)&v7 + (char)v8;
    int64_t v9 = __asm_int3(); // 0x1f1ca5
    char v10 = __asm_in((int16_t)a3); // 0x1f1ca6
    int32_t * v11 = (int32_t *)(2 * v2 + 30 + v2); // 0x1f1ca8
    *v11 = *v11 ^ 0x332f1f32;
    int64_t result = a1 & 0xffffffff; // 0x1f1cb2
    if (llvm_ctpop_i8((char)a1 - 1) % 2 == 0) {
        // 0x1f1cbb
        return result;
    }
    int32_t * v12 = (int32_t *)((v9 | (int64_t)v10) & 0xffffff00 | (int64_t)(v10 | 27)); // 0x1f1cfd
    *v12 = *v12 + (int32_t)v1;
    return result;
}

// Address range: 0x1f1d9d - 0x1f1e52
int64_t function_1f1d9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, int64_t a7) {
    int32_t v1 = a2; // 0x1f1da2
    int64_t v2; // 0x1f1d9d
    int32_t v3 = v2; // 0x1f1da2
    int32_t v4 = v3 + v1; // 0x1f1da2
    int64_t v5 = unknown_ffffffffbbae61ad(); // 0x1f1da7
    if (((v4 ^ v1) & (v4 ^ v3)) >= 0) {
        // 0x1f1dae
        return unknown_4ad96eba();
    }
    int32_t * v6 = (int32_t *)a5; // 0x1f1df7
    *v6 = *v6 + (int32_t)v2;
    int64_t v7 = a4 - 1; // 0x1f1dfa
    if (v7 != 0 != (a6 & 64) != 0) {
        // 0x1f1dfc
        return v5 + 0xe81253c8 & 0xffffffff;
    }
    if ((a6 & 65) != 0) {
        // 0x1f1e4b
        return unknown_55f6d53();
    }
    int64_t v8 = unknown_ffffffff89ebc135(); // 0x1f1e2f
    *(char *)((int64_t)((int32_t)v8 >> 31) + 0x1e8942e) = (char)(a5 / 256 + v7);
    return unknown_1e12be04();
}

// Address range: 0x1f1e77 - 0x1f1ebb
int64_t function_1f1e77(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f1e77
    int64_t v1; // 0x1f1e77
    int32_t v2 = v1; // 0x1f1e77
    *(int32_t *)0x9001e8f9 = v2;
    *(char *)a1 = __asm_insb((int16_t)a3);
    *(int32_t *)a1 = v2;
    __asm_out(-40, (char)v1 | -27);
    int32_t * v3 = (int32_t *)(v1 + 0xc001baf); // 0x1f1e8f
    int32_t v4 = *v3 | (int32_t)v1; // 0x1f1e8f
    *v3 = v4;
    unknown_ffffffff9022ae9e();
    int64_t result = __asm_sti(); // 0x1f1e9d
    if (v4 >= 0) {
        // 0x1f1ea1
        return result;
    }
    // 0x1f1eb6
    return unknown_ffffffffc0247ebc();
}

// Address range: 0x1f1ebc - 0x1f1ed5
int64_t function_1f1ebc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f1ebc
    int64_t v1; // 0x1f1ebc
    *(int32_t *)-0x37fe179b2be17cf7 = (int32_t)v1;
    return function_ffffffffe8f5cf0e();
}

// Address range: 0x1f1edf - 0x1f1ee5
int64_t function_1f1edf(int64_t a1) {
    // 0x1f1edf
    int64_t result; // 0x1f1edf
    return result;
}

// Address range: 0x1f1f10 - 0x1f1f15
int64_t function_1f1f10(void) {
    // 0x1f1f10
    return function_73692134();
}

// Address range: 0x1f1f15 - 0x1f1f39
int64_t function_1f1f15(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f1f15
    int64_t v1; // 0x1f1f15
    *(char *)a1 = (char)(v1 / 256) + (char)v1;
    int64_t result = __asm_iretd(); // 0x1f1f17
    char * v2 = (char *)(v1 - 79); // 0x1f1f1a
    *v2 = *v2 & (char)v1;
    int64_t v3; // 0x1f1f15
    *(char *)result = *(char *)&v3 + (char)result;
    __asm_int(104);
    return result;
}

// Address range: 0x1f1f49 - 0x1f1f4f
int64_t function_1f1f49(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f1f49
    int64_t result; // 0x1f1f49
    *(char *)a3 = (char)(result ^ result);
    return result;
}

// Address range: 0x1f1f64 - 0x1f1f66
int64_t function_1f1f64(void) {
    // 0x1f1f64
    int64_t result; // 0x1f1f64
    return result;
}

// Address range: 0x1f1f66 - 0x1f1f72
int64_t function_1f1f66(int64_t a1) {
    // 0x1f1f66
    int64_t result; // 0x1f1f66
    *(int32_t *)0x75792b2a3a542077 = (int32_t)result;
    return result;
}

// Address range: 0x1f1f72 - 0x1f1f79
int64_t function_1f1f72(void) {
    char v1 = *(char *)-0x371f9187; // 0x1f1f72
    int64_t result; // 0x1f1f72
    *(char *)-0x371f9187 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x1f1f79 - 0x1f1f8c
int64_t function_1f1f79(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f1f79
    int64_t v1; // 0x1f1f79
    unsigned char v2 = (char)v1; // 0x1f1f7e
    unsigned char v3 = v2 + (char)v1; // 0x1f1f7e
    bool v4; // 0x1f1f79
    unsigned char v5 = v3 + (char)v4; // 0x1f1f7e
    bool v6 = v4 ? v5 <= v2 : v3 < v2; // 0x1f1f7e
    char v7 = __asm_in((int16_t)a3); // 0x1f1f82
    int64_t v8 = v6 | v5 < (v6 ? 8 : 7) ? 0x3d0061fd : 0x3d0061fc; // 0x1f1f83
    int32_t * v9 = (int32_t *)(a1 - 65); // 0x1f1f88
    *v9 = *v9 + (int32_t)v1;
    return (v1 & 0xffffff00 | (int64_t)v7) - v8 & 0xffffffff;
}

// Address range: 0x1f1fc5 - 0x1f1fc9
int64_t function_1f1fc5(int64_t a1) {
    // 0x1f1fc5
    int64_t result; // 0x1f1fc5
    return result;
}

// Address range: 0x1f1ff9 - 0x1f1ffc
int64_t function_1f1ff9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1f1ff9
    int64_t result; // 0x1f1ff9
    return result;
}

// Address range: 0x1f2026 - 0x1f2027
int64_t function_1f2026(int64_t a1) {
    // 0x1f2026
    int64_t result; // 0x1f2026
    return result;
}

// Address range: 0x1f206a - 0x1f206d
int64_t function_1f206a(int64_t a1) {
    // 0x1f206a
    int64_t result; // 0x1f206a
    return result;
}

// Address range: 0x1f2077 - 0x1f2080
int64_t function_1f2077(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f2077
    int64_t v1; // 0x1f2077
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 - 8); // 0x1f2079
    *v3 = *v3 + (int32_t)v1;
    return v2 / 256 % 256 | v2 & -256;
}

// Address range: 0x1f20b6 - 0x1f20d7
int64_t function_1f20b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f20b6
    unknown_ffffffffb02c6dbc();
    int64_t result = a3 & 0xffffffff; // 0x1f20bc
    int64_t v1; // 0x1f20b6
    if ((int32_t)v1 != (int32_t)v1) {
        // 0x1f20c1
        return result;
    }
    // 0x1f20d5
    *(int32_t *)result = (int32_t)v1 + (int32_t)a3;
    return result;
}

// Address range: 0x1f20d8 - 0x1f20df
int64_t function_1f20d8(int64_t a1, int64_t a2) {
    // 0x1f20d8
    return __asm_hlt();
}

// Address range: 0x29c2bf - 0x29c2d8
int64_t function_29c2bf(int64_t a1) {
    // 0x29c2bf
    int64_t v1; // 0x29c2bf
    int32_t * v2 = (int32_t *)(v1 - 39); // 0x29c2bf
    *v2 = -*v2;
    unsigned char v3 = *(char *)-0x3abeffecbfbb18f6; // 0x29c2c6
    *(char *)0x5c863fd6 = *(char *)0x5c863fd6 + (char)(v1 / 256);
    return (int64_t)(0x10000 * (int32_t)v1 >> 16 & -256) | (int64_t)v3;
}

// Address range: 0x29c2ea - 0x29c2f2
int64_t function_29c2ea(void) {
    // 0x29c2ea
    return unknown_ffffffff9a2afff0();
}

// Address range: 0x29c2fb - 0x29c2fc
int64_t function_29c2fb(void) {
    // 0x29c2fb
    int64_t result; // 0x29c2fb
    return result;
}

// Address range: 0x29c301 - 0x29c302
int64_t function_29c301(int64_t a1) {
    // 0x29c301
    int64_t result; // 0x29c301
    return result;
}

// Address range: 0x29c303 - 0x29c308
int64_t function_29c303(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29c303
    int64_t result; // 0x29c303
    return result;
}

// Address range: 0x29c30c - 0x29c30f
int64_t function_29c30c(int64_t a1) {
    // 0x29c30c
    int64_t result; // 0x29c30c
    return result;
}

// Address range: 0x29c34a - 0x29c34b
int64_t function_29c34a(int64_t a1) {
    // 0x29c34a
    int64_t result; // 0x29c34a
    return result;
}

// Address range: 0x29c3d1 - 0x29c3d2
int64_t function_29c3d1(void) {
    // 0x29c3d1
    int64_t result; // 0x29c3d1
    return result;
}

// Address range: 0x29c3d6 - 0x29c3d9
int64_t function_29c3d6(void) {
    // 0x29c3d6
    int64_t result; // 0x29c3d6
    return result;
}

// Address range: 0x29c404 - 0x29c405
int64_t function_29c404(int64_t a1) {
    // 0x29c404
    int64_t result; // 0x29c404
    return result;
}

// Address range: 0x29c40c - 0x29c414
int64_t function_29c40c(void) {
    // 0x29c40c
    int64_t result; // 0x29c40c
    return result;
}

// Address range: 0x29c43a - 0x29c447
int64_t function_29c43a(void) {
    // 0x29c43a
    int32_t v1; // 0x29c43a
    int64_t v2; // 0x29c43a
    *(int32_t *)(v2 - 0x4560caf7) = (int32_t)(int64_t)&v1;
    return function_29c3d1();
}

// Address range: 0x29c4d8 - 0x29c4ec
int64_t function_29c4d8(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)(a2 + 3) ^ -31; // 0x29c4da
    *(char *)0x1f9acf013d0032ba = v1;
    int64_t v2; // 0x29c4d8
    return v2 & -256 | (int64_t)v1;
}

// Address range: 0x29c50e - 0x29c511
int64_t function_29c50e(void) {
    // 0x29c50e
    int64_t result; // 0x29c50e
    return result;
}

// Address range: 0x29c53e - 0x29c54c
int64_t function_29c53e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x13f41c48; // 0x29c541
    int64_t v2; // 0x29c53e
    *(char *)0x13f41c48 = v1 + (char)((uint64_t)v2 / 256);
    return function_ffffffffabddc55f();
}

// Address range: 0x29c5ce - 0x29c5d6
int64_t function_29c5ce(int64_t a1) {
    // 0x29c5ce
    return unknown_ffffffffc83465d4(a1) | 69;
}

// Address range: 0x29c5dd - 0x29c5e0
int64_t function_29c5dd(void) {
    // 0x29c5dd
    int64_t result; // 0x29c5dd
    return result;
}

// Address range: 0x29c60d - 0x29c611
int64_t function_29c60d(void) {
    // 0x29c60d
    int64_t result; // 0x29c60d
    return result;
}

// Address range: 0x29c635 - 0x29c638
int64_t function_29c635(int64_t a1) {
    // 0x29c635
    int64_t result; // 0x29c635
    return result;
}

// Address range: 0x29c644 - 0x29c646
int64_t function_29c644(void) {
    // 0x29c644
    int64_t result; // 0x29c644
    return result;
}

// Address range: 0x29c67c - 0x29c68a
int64_t function_29c67c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x29c67c
    int64_t v1; // 0x29c67c
    return a2 + 0x37194839 + 8 * a4 + v1 & 0xffffffff;
}

// Address range: 0x29c6d5 - 0x29c6d8
int64_t function_29c6d5(void) {
    // 0x29c6d5
    int64_t result; // 0x29c6d5
    return result;
}

// Address range: 0x29c6e6 - 0x29c72e
int64_t function_29c6e6(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x29c6e6
    int64_t v1; // 0x29c6e6
    char * v2 = (char *)(v1 + 0x17c314); // 0x29c6e8
    *v2 = *v2 + (char)v1;
    unknown_fffffffffbdb9af4();
    unknown_3acf4a03();
    int64_t result = unknown_ffffffffe1db8b12(); // 0x29c70c
    if (-1 - (char)(a4 / 256) >= (char)(a3 / 256)) {
        // 0x29c71e
        *(int32_t *)0x1058ac25 = *(int32_t *)0x1058ac25 + (int32_t)a1;
        return unknown_5e8f532a();
    }
    int32_t * v3 = (int32_t *)(v1 - 0x69d24800); // 0x29c713
    int32_t v4 = *v3; // 0x29c713
    *v3 = (int32_t)(-1 - (char)(a4 / 256) < (char)(a3 / 256)) - (int32_t)v1 + v4;
    return result;
}

// Address range: 0x29c747 - 0x29c74f
int64_t function_29c747(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29c747
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x29c747
    return v1 & 0xffffffff;
}

// Address range: 0x29c74f - 0x29c751
int64_t function_29c74f(void) {
    // 0x29c74f
    int64_t v1; // 0x29c74f
    return function_29c755(v1, v1, v1, v1);
}

// Address range: 0x29c753 - 0x29c755
int64_t function_29c753(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29c753
    int64_t v1; // 0x29c753
    int64_t result = v1;
    uint32_t v2 = (int32_t)a4 % 32; // 0x29c753
    if (v2 != 0) {
        *(int32_t *)result = (int32_t)result << v2;
    }
    return result;
}

// Address range: 0x29c755 - 0x29c770
int64_t function_29c755(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29c755
    int64_t result; // 0x29c755
    *(int32_t *)0x18893ae2480180e0 = (int32_t)result;
    *(char *)0x4e650a71 = *(char *)0x4e650a71 - 41;
    return result;
}

// Address range: 0x29c7e5 - 0x29c7f0
int64_t function_29c7e5(int64_t a1, int64_t a2) {
    // 0x29c7e5
    int64_t v1; // 0x29c7e5
    return v1 + 0xb83af600 & 0xffffffff;
}

// Address range: 0x29c82b - 0x29c863
int64_t function_29c82b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffff82a9aa31(); // 0x29c82b
    int32_t * v2 = (int32_t *)(a4 - 10); // 0x29c830
    *v2 = *v2 + (int32_t)a2;
    char v3 = __asm_in_133(-24); // 0x29c837
    int64_t v4 = v1 & -256 | (int64_t)v3; // 0x29c837
    int32_t * v5 = (int32_t *)v4; // 0x29c839
    *v5 = *v5 + (int32_t)a3;
    char * v6 = (char *)(v4 + 87); // 0x29c83b
    *v6 = *v6 | v3;
    *(int32_t *)0x5e8d3c601e80c51 = (int32_t)v4;
    unknown_ffffffffe46a31a9();
    int64_t v7 = unknown_730ae852(); // 0x29c84c
    int32_t * v8 = (int32_t *)(v7 + 5); // 0x29c853
    *v8 = *v8 ^ 74;
    unknown_30bf545d((int32_t)v7 + (int32_t)a1);
    return function_ffffffff98086473();
}

// Address range: 0x29c864 - 0x29c9b4
int64_t function_29c864(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_3d37d16a(); // 0x29c864
    int32_t * v2 = (int32_t *)(a2 - 0x277e59f7); // 0x29c870
    int64_t v3; // 0x29c864
    *v2 = *v2 + (int32_t)v3;
    int32_t v4 = a4; // 0x29c876
    int32_t v5 = *(int32_t *)((v1 & 0xaaaf7526) + 0x1e87961); // 0x29c876
    uint32_t v6 = v5 + v4; // 0x29c876
    if (((v6 ^ v4) & (v6 ^ v5)) < 0) {
        uint32_t v7 = __asm_in_134(-64); // 0x29c8c9
        int64_t result = ((int64_t)(v7 % 256) | (int64_t)(v7 & -256)) ^ 96; // 0x29c8cb
        int32_t v8 = result; // 0x29c8cd
        *(int32_t *)a1 = v8;
        char * v9 = (char *)(result - 105); // 0x29c8ce
        *v9 = *v9 + (char)v3;
        *(int32_t *)result = v8;
        return result;
    }
    uint64_t v10 = (int64_t)v6; // 0x29c876
    unsigned char v11 = (char)v6; // 0x29c87f
    unsigned char v12 = v11 % 32; // 0x29c87f
    if (v12 != 0) {
        char * v13 = (char *)(v10 + 0x2c172476); // 0x29c87f
        *v13 = *v13 >> v12;
    }
    unknown_4e41508b();
    int64_t v14 = unknown_ffffffffecc9cc96(); // 0x29c890
    float80_t v15; // 0x29c864
    *(int16_t *)(a1 + 0x5557ba930) = (int16_t)v15;
    unsigned char v16 = (char)v14; // 0x29c898
    unsigned char v17 = *(char *)(v14 - 109) + v16; // 0x29c898
    int64_t v18 = unknown_3a3d36a1(); // 0x29c89b
    if (v17 < v16 || v17 == 0) {
        int64_t v19 = unknown_ffffffffcb2a2016(); // 0x29c910
        int64_t result2 = (v19 + v10 / 256) % 256 | v19 & -256; // 0x29c919
        if ((int32_t)a3 >= 0) {
            result2 = function_6f97cb09();
        }
        // 0x29c921
        return result2;
    }
    // 0x29c8a2
    *(char *)0xaaaf7596 = *(char *)0xaaaf7596 + v11;
    uint64_t v20 = unknown_2c7e01ac(); // 0x29c8a6
    char * v21 = (char *)(v20 + 0x24dff00); // 0x29c8ab
    *v21 = *v21 + (char)v20;
    char * v22 = (char *)((int64_t)((int32_t)v18 >> 31) + 1); // 0x29c8b1
    *v22 = *v22 + (char)(v20 / 256);
    return unknown_6b2a3aba();
}

// Address range: 0x29ca3e - 0x29ca3f
int64_t function_29ca3e(void) {
    // 0x29ca3e
    int64_t result; // 0x29ca3e
    return result;
}

// Address range: 0x29ca78 - 0x29ca7d
int64_t function_29ca78(void) {
    // 0x29ca78
    return function_ffffffffdc2a04cc();
}

// Address range: 0x29ca97 - 0x29cab4
int64_t function_29ca97(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a4 + 41); // 0x29ca97
    uint32_t v3 = *v2; // 0x29ca97
    int64_t v4; // 0x29ca97
    int32_t v5 = v4; // 0x29ca97
    uint32_t v6 = v3 + v5; // 0x29ca97
    *v2 = v6;
    int64_t v7 = v4 & -256 | (int64_t)*(char *)0xf686316073f5cda; // 0x29caa4
    if (((v6 ^ v3) & (v6 ^ v5)) < 0) {
        v7 = function_29ca3e();
    }
    int64_t v8 = v7 - (v6 < v3 ? 0x3d00c8dc : 0x3d00c8db); // 0x29caa6
    int32_t * v9 = (int32_t *)(a4 + 56); // 0x29caab
    *v9 = *v9 + (int32_t)v8;
    *(char *)a1 = *(char *)&v1;
    return v8 & 0xffffffff;
}

// Address range: 0x29cacc - 0x29cad3
int64_t function_29cacc(void) {
    // 0x29cacc
    __asm_hlt();
    return function_88dd33();
}

// Address range: 0x29caf5 - 0x29cafa
int64_t function_29caf5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29caf5
    int64_t result; // 0x29caf5
    *(int32_t *)a1 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x29cb53 - 0x29cb54
int64_t function_29cb53(void) {
    // 0x29cb53
    int64_t result; // 0x29cb53
    return result;
}

// Address range: 0x29cb7c - 0x29cb84
int64_t function_29cb7c(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 24); // 0x29cb7c
    *v1 = *v1 + 0x5ff861ff;
    int64_t result; // 0x29cb7c
    return result;
}

// Address range: 0x29cb9c - 0x29cba3
int64_t function_29cb9c(int64_t a1, int64_t a2) {
    // 0x29cb9c
    int64_t result; // 0x29cb9c
    bool v1; // 0x29cb9c
    *(int32_t *)a1 = (int32_t)result - (v1 ? -0x31fe179d : -0x31fe179e);
    return result;
}

// Address range: 0x29cba6 - 0x29cbb3
int64_t function_29cba6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29cba6
    __asm_wait();
    int64_t v1; // 0x29cba6
    unsigned char v2 = llvm_ctpop_i8((char)(*(int32_t *)(v1 - 126) | (int32_t)a4)); // 0x29cba7
    int64_t result = unknown_6df872b0(); // 0x29cbaf
    if (v2 % 2 == 0) {
        result = function_29cb53();
    }
    // 0x29cbb2
    return result;
}

// Address range: 0x29cbdf - 0x29cbe2
int64_t function_29cbdf(int64_t a1) {
    // 0x29cbdf
    int64_t result; // 0x29cbdf
    return result;
}

// Address range: 0x29cc76 - 0x29cc81
int64_t function_29cc76(void) {
    // 0x29cc76
    int64_t v1; // 0x29cc76
    int32_t * v2 = (int32_t *)(v1 + 0x1e8e7ac); // 0x29cc76
    *v2 = *v2 | (int32_t)v1;
    return function_ffffffff9c2a61ff();
}

// Address range: 0x29cca8 - 0x29ccab
int64_t function_29cca8(void) {
    // 0x29cca8
    int64_t result; // 0x29cca8
    return result;
}

// Address range: 0x29ccb7 - 0x29ccbd
int64_t function_29ccb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x29ccb7
    int64_t v1; // 0x29ccb7
    int64_t v2 = v1;
    return v2 & -256 | (int64_t)(*(char *)(a4 + 2) + (char)v2);
}
