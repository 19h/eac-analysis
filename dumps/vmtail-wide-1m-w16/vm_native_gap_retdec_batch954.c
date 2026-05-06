/*
 * Targeted RetDec C for native executable gap queue batch 954.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x39adb1-0x39afb1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39b1b1-0x39b3b1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39b3b1-0x39b5b1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39b5b1-0x39b7b1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51f3c0-0x51f5c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51f7c0-0x51f9c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51f9c0-0x51fbc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x51fbc0-0x51fdc0 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_221b64b();
int64_t function_2571c64e();
int64_t function_313ade2d();
int64_t function_39adb1(int64_t a1, int64_t a2);
int64_t function_39adb6(int64_t a1);
int64_t function_39adbf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39ae21(void);
int64_t function_39ae3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39ae60(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39aef5(int64_t a1);
int64_t function_39af0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39b1b1(int64_t a1, int64_t a2);
int64_t function_39b1b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39b1ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39b202(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39b252(int64_t a1);
int64_t function_39b259(int64_t a1, int64_t a2);
int64_t function_39b36d(void);
int64_t function_39b386(void);
int64_t function_39b3a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39b3bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39b3dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39b3fd(void);
int64_t function_39b435(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39b440(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39b488(void);
int64_t function_39b4e9(void);
int64_t function_39b4ec(void);
int64_t function_39b4ee(void);
int64_t function_39b523(int64_t a1);
int64_t function_39b52e(void);
int64_t function_39b642(void);
int64_t function_39b683(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39b705(void);
int64_t function_39b76f(int64_t a1);
int64_t function_39b774(int64_t a1);
int64_t function_3d39c886();
int64_t function_4efd30();
int64_t function_51f025();
int64_t function_51f05f();
int64_t function_51f076();
int64_t function_51f091();
int64_t function_51f0e6();
int64_t function_51f0fb();
int64_t function_51f108();
int64_t function_51f159();
int64_t function_51f16d();
int64_t function_51f199();
int64_t function_51f1ce();
int64_t function_51f1d7();
int64_t function_51f208();
int64_t function_51f214();
int64_t function_51f230();
int64_t function_51f240();
int64_t function_51f27b();
int64_t function_51f2cd();
int64_t function_51f2dc();
int64_t function_51f2f5();
int64_t function_51f2f8();
int64_t function_51f301();
int64_t function_51f364();
int64_t function_51f371();
int64_t function_51f380();
int64_t function_51f3c0(int64_t a1, char a2, int32_t a3);
int64_t function_51f458(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_51f4a8(void);
int64_t function_51f4c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6);
int64_t function_51f5fe();
int64_t function_51f6a4();
int64_t function_51f6b1();
int64_t function_51f6c0();
int64_t function_51f70d();
int64_t function_51f7b1();
int64_t function_51f7c0(int64_t a1, int64_t a2, int32_t a3);
int64_t function_51f950(int64_t a1);
int64_t function_51f978(void);
int64_t function_51f990(int64_t a1, uint64_t a2, int64_t a3, int64_t a4);
int64_t function_51f9d0(int64_t a1);
int64_t function_51f9e8(void);
int64_t function_51fa30(void);
int64_t function_51fa50(void);
int64_t function_51fa98(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_51fac0(void);
int64_t function_51fae0(int64_t a1);
int64_t function_51fb08(int64_t result);
int64_t function_51fb18(void);
int64_t function_51fb28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_51fbc0(int64_t a1);
int64_t function_51fbe8(void);
int64_t function_51fc10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_51fc38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_51fc78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_51fc91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_51fca9(char a1);
int64_t function_51fccb(int64_t a1);
int64_t function_51fcf0(void);
int64_t function_51fd07(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_51fd32(unsigned char result);
int64_t function_51fd5d(unsigned char result);
int64_t function_51fd88(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_51fda6(void);
int64_t function_51fdb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_51fde3();
int64_t function_51fe06();
int64_t function_51fe2d();
int64_t function_51fe70();
int64_t function_51fe86();
int64_t function_51fec5();
int64_t function_51ff6f();
int64_t function_51ff8c();
int64_t function_51ffa2();
int64_t function_52b400();
int64_t function_52b8e0();
int64_t function_555500();
int64_t function_566890();
int64_t function_567700();
int64_t function_ffffffff9364efe7();
int64_t unknown_3f50edd1();

// Address range: 0x39adb1 - 0x39adb5
int64_t function_39adb1(int64_t a1, int64_t a2) {
    // 0x39adb1
    return __asm_int1(a1, a2);
}

// Address range: 0x39adb6 - 0x39adb7
int64_t function_39adb6(int64_t a1) {
    // 0x39adb6
    int64_t result; // 0x39adb6
    return result;
}

// Address range: 0x39adbf - 0x39adcd
int64_t function_39adbf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x39adbf
    int64_t v1; // 0x39adbf
    int64_t result = v1 & -256 | (int64_t)__asm_in(61); // 0x39adbf
    int32_t * v2 = (int32_t *)result; // 0x39adc1
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x39ae21 - 0x39ae22
int64_t function_39ae21(void) {
    // 0x39ae21
    int64_t result; // 0x39ae21
    return result;
}

// Address range: 0x39ae3e - 0x39ae59
int64_t function_39ae3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39ae3e
    int64_t v1; // 0x39ae3e
    int32_t * v2 = (int32_t *)(v1 + 0x5ecfa900); // 0x39ae3e
    *v2 = *v2 + (int32_t)a2;
    *(int32_t *)(8 * a2 - 0x56182b0c + v1) = (int32_t)a3;
    uint32_t v3 = (int32_t)a4 % 32; // 0x39ae4e
    if (v3 != 0) {
        *(int32_t *)0x38173f55 = *(int32_t *)0x38173f55 >> v3;
    }
    return function_39ae21();
}

// Address range: 0x39ae60 - 0x39aeab
int64_t function_39ae60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x39ae60
    char v3 = *(char *)(v2 + 0x3d00278c); // 0x39ae61
    int32_t * v4 = (int32_t *)(a1 - 9); // 0x39ae67
    uint32_t v5 = *v4; // 0x39ae67
    uint32_t v6 = v5 + (int32_t)a2; // 0x39ae67
    *v4 = v6;
    int64_t result; // 0x39ae60
    *(int32_t *)a1 = (int32_t)result;
    uint32_t v7 = (int32_t)a4 % 32; // 0x39ae6b
    bool v8 = v6 < v5; // 0x39ae6b
    if (v7 != 0) {
        int32_t * v9 = (int32_t *)(a3 + 71); // 0x39ae6b
        uint32_t v10 = *v9; // 0x39ae6b
        uint32_t v11 = v10 >> 32 - v7 | v10 << v7; // 0x39ae6b
        *v9 = v11;
        v8 = v11 % 2 != 0;
    }
    bool v12; // 0x39ae60
    int64_t v13 = (v12 ? -4 : 4) + a1; // 0x39ae6a
    *(int32_t *)result = *(int32_t *)&result - 24 + (int32_t)v8;
    int32_t * v14 = (int32_t *)(result - 82); // 0x39ae71
    *v14 = *v14 + (int32_t)result;
    char * v15 = (char *)(a4 + 0x13d0002); // 0x39ae7c
    *v15 = (char)v12 + (char)v2 - v3 + *v15;
    __asm_hlt(v13);
    unsigned char v16 = *(char *)&v1; // 0x39ae9f
    unsigned char v17 = v16 + (char)((int64_t)&g3 >> 8); // 0x39ae9f
    *(char *)v1 = v17;
    result = 0x3cbc8d00;
    *(int32_t *)v13 = 0x3cbc8d00;
    unsigned char v18 = ((char)a4 | (char)&g3) % 32; // 0x39aea3
    if (v18 != 0) {
        unsigned char v19 = *(char *)0x3cbc8d79; // 0x39aea3
        *(char *)(result + 121) = v19 << v18 | (char)(v17 < v16) << v18 - 1 | (char)((int16_t)v19 >> (int16_t)(9 - v18));
    }
    return result;
}

// Address range: 0x39aef5 - 0x39af0b
int64_t function_39aef5(int64_t a1) {
    // 0x39aef5
    int64_t v1; // 0x39aef5
    char * v2 = (char *)(v1 + 98); // 0x39aef5
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0x39aef5
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t v5 = v3; // 0x39af01
    char v6 = *(char *)(v1 + 0x700b7ba2 + 4 * v1); // 0x39af01
    return v5 & -256 | (int64_t)(v6 + (char)v5);
}

// Address range: 0x39af0c - 0x39af20
int64_t function_39af0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(2 * a3 + (a2 & 0xffffff37)); // 0x39af16
    unsigned char v2 = *v1; // 0x39af16
    *v1 = v2 / 128 | 2 * v2;
    int64_t v3; // 0x39af0c
    bool v4; // 0x39af0c
    return function_2571c64e(a4, (v4 ? -1 : 1) + (v3 & 0xffffffff));
}

// Address range: 0x39b1b1 - 0x39b1b3
int64_t function_39b1b1(int64_t a1, int64_t a2) {
    // 0x39b1b1
    int64_t result; // 0x39b1b1
    *(int32_t *)a1 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x39b1b5 - 0x39b1ec
int64_t function_39b1b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39b1b5
    int64_t v1; // 0x39b1b5
    int64_t result = v1;
    uint64_t v2 = a4 - 1; // 0x39b1bb
    bool v3; // 0x39b1b5
    if (v2 != 0 == v3) {
        // 0x39b1d3
        *(char *)result = (char)result + (char)(v2 / 256);
        return result;
    }
    if (v3 || v3) {
        // 0x39b1e7
        *(int32_t *)a2 = (int32_t)a2 - (int32_t)result + (int32_t)v3;
        return result;
    }
    // 0x39b1c0
    return function_3d39c886();
}

// Address range: 0x39b1ec - 0x39b1f6
int64_t function_39b1ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39b1ec
    int64_t result; // 0x39b1ec
    *(char *)a3 = (char)result + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x39b202 - 0x39b21e
int64_t function_39b202(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)0x36739c18; // 0x39b211
    int64_t v2; // 0x39b202
    *(char *)0x36739c18 = v1 + (char)((uint64_t)v2 / 256);
    return function_221b64b();
}

// Address range: 0x39b252 - 0x39b259
int64_t function_39b252(int64_t a1) {
    // 0x39b252
    int64_t result; // 0x39b252
    return result;
}

// Address range: 0x39b259 - 0x39b265
int64_t function_39b259(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 114); // 0x39b259
    int64_t result; // 0x39b259
    *v1 = *v1 & (int32_t)result;
    char v2 = *(char *)0x28285963; // 0x39b25c
    *(char *)0x28285963 = v2 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x39b36d - 0x39b36e
int64_t function_39b36d(void) {
    // 0x39b36d
    int64_t result; // 0x39b36d
    return result;
}

// Address range: 0x39b386 - 0x39b387
int64_t function_39b386(void) {
    // 0x39b386
    int64_t result; // 0x39b386
    return result;
}

// Address range: 0x39b3a4 - 0x39b3b1
int64_t function_39b3a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 58 + 8 * a2); // 0x39b3ab
    int64_t v2; // 0x39b3a4
    *v1 = *v1 + (int32_t)v2;
    return function_39b36d();
}

// Address range: 0x39b3bb - 0x39b3cd
int64_t function_39b3bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x4affd043); // 0x39b3bb
    int64_t v2; // 0x39b3bb
    int32_t v3 = *v1 + (int32_t)v2; // 0x39b3bb
    *v1 = v3;
    int64_t result = unknown_3f50edd1(); // 0x39b3c7
    if (a4 != 1 == v3 == 0) {
        result = function_39b386();
    }
    // 0x39b3c9
    return result;
}

// Address range: 0x39b3dc - 0x39b3f4
int64_t function_39b3dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39b3dc
    int64_t v1; // 0x39b3dc
    int64_t result = v1 & 0xa965ca6a ^ 0x1e8a0ec; // 0x39b3e1
    __asm_outsb((int16_t)a3, (char)v1);
    *(char *)result = (char)result;
    return result;
}

// Address range: 0x39b3fd - 0x39b400
int64_t function_39b3fd(void) {
    // 0x39b3fd
    int64_t result; // 0x39b3fd
    return result;
}

// Address range: 0x39b435 - 0x39b43e
int64_t function_39b435(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39b435
    int64_t result; // 0x39b435
    int32_t * v1 = (int32_t *)(result + 0x1e15eea6); // 0x39b435
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x39b440 - 0x39b463
int64_t function_39b440(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39b440
    int64_t v1; // 0x39b440
    int32_t * v2 = (int32_t *)(v1 + 2 * a4); // 0x39b440
    *v2 = *v2 | (int32_t)a3;
    int64_t v3 = v1 + 0x68f7333a; // 0x39b443
    char * v4 = (char *)(v3 & 0xffffffff); // 0x39b448
    *v4 = *v4 + (char)v3;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int32_t * v5 = (int32_t *)(a1 - 81); // 0x39b44d
    *v5 = *v5 + (int32_t)a2;
    unsigned char v6 = (char)a4 % 32; // 0x39b45d
    if (v6 != 0) {
        unsigned char v7 = *(char *)0x176b516; // 0x39b45d
        *(char *)0x176b516 = v7 >> v6 | (char)((int16_t)v7 << (int16_t)(9 - v6));
    }
    return v3 & 0x9cf94108 | 0x6306beb5;
}

// Address range: 0x39b488 - 0x39b48a
int64_t function_39b488(void) {
    // 0x39b488
    int64_t result; // 0x39b488
    return result;
}

// Address range: 0x39b4e9 - 0x39b4ec
int64_t function_39b4e9(void) {
    // 0x39b4e9
    int64_t result; // 0x39b4e9
    return result;
}

// Address range: 0x39b4ec - 0x39b4ed
int64_t function_39b4ec(void) {
    // 0x39b4ec
    int64_t result; // 0x39b4ec
    return result;
}

// Address range: 0x39b4ee - 0x39b4fe
int64_t function_39b4ee(void) {
    // 0x39b4ee
    int64_t v1; // 0x39b4ee
    int64_t v2 = v1 & -256 | (int64_t)*(char *)0x3dcc3e81003c2428; // 0x39b4ee
    int32_t * v3 = (int32_t *)v2; // 0x39b4f7
    *v3 = *v3 + (int32_t)v2;
    return function_313ade2d();
}

// Address range: 0x39b523 - 0x39b526
int64_t function_39b523(int64_t a1) {
    // 0x39b523
    int64_t result; // 0x39b523
    return result;
}

// Address range: 0x39b52e - 0x39b530
int64_t function_39b52e(void) {
    // 0x39b52e
    return function_39b4ec();
}

// Address range: 0x39b642 - 0x39b64e
int64_t function_39b642(void) {
    // 0x39b642
    int64_t v1; // 0x39b642
    __asm_out_133(-98, (int32_t)v1);
    return function_ffffffff9364efe7();
}

// Address range: 0x39b683 - 0x39b693
int64_t function_39b683(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39b683
    int64_t result; // 0x39b683
    *(int32_t *)a2 = (int32_t)(result | a4);
    int32_t * v1 = (int32_t *)(a1 - 0x24657810); // 0x39b68a
    *v1 = *v1 + (int32_t)result;
    __asm_int(84);
    return result;
}

// Address range: 0x39b705 - 0x39b708
int64_t function_39b705(void) {
    // 0x39b705
    int64_t result; // 0x39b705
    return result;
}

// Address range: 0x39b76f - 0x39b770
int64_t function_39b76f(int64_t a1) {
    // 0x39b76f
    int64_t result; // 0x39b76f
    return result;
}

// Address range: 0x39b774 - 0x39b77c
int64_t function_39b774(int64_t a1) {
    // 0x39b774
    int64_t v1; // 0x39b774
    int64_t v2 = v1;
    char v3 = v2;
    __asm_out_134(3, v3);
    return v2 & -0x10000 | (int64_t)((256 * (int16_t)v2 >> 8) * (int16_t)v3);
}

// Address range: 0x51f3c0 - 0x51f452
int64_t function_51f3c0(int64_t a1, char a2, int32_t a3) {
    // 0x51f3c0
    int64_t v1; // 0x51f3c0
    if (v1 > v1) {
        function_51fc10(a1, v1, v1, v1, (int64_t)&g4);
    }
    // 0x51f3d1
    *(char *)(v1 + a1) = a2;
    *(char *)(2 * v1) = 0;
    int64_t v2 = function_567700(*(int64_t *)(v1 + 16), *(int64_t *)(v1 + 24), v1); // 0x51f3f4
    int64_t result = v2; // 0x51f3fb
    if ((char)v2 == 0) {
        result = function_51fb08((int64_t)&g4);
    }
    // 0x51f401
    if (a3 == 0) {
        if ((char)v1 != 1 == v1 == 0) {
            // 0x51f6f6
            return result;
        }
    }
    char v3; // 0x51f3c0
    if (v3 != 0) {
        // 0x51f6f6
        return result;
    }
    if (v3 == 0) {
        function_51fae0((int64_t)&g4);
    }
    // 0x51f436
    *(int64_t *)v1 = -1;
    return function_51f70d();
}

// Address range: 0x51f458 - 0x51f4a3
int64_t function_51f458(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x51f458
    int64_t v1; // 0x51f458
    int64_t v2 = v1;
    if (v2 == 0) {
        function_51fe2d();
    }
    if ((int32_t)v1 == -1) {
        // 0x51f467
        if (*(int64_t *)(v2 + 16) >= *(int64_t *)(v2 + 24)) {
            function_51fc38(a1, a2, a3, a4, a5);
        }
    }
    if ((char)v1 != 0) {
        function_51f16d();
    }
    // 0x51f48a
    return function_51f230();
}

// Address range: 0x51f4a8 - 0x51f4c1
int64_t function_51f4a8(void) {
    // 0x51f4a8
    int64_t v1; // 0x51f4a8
    uint64_t v2 = *(int64_t *)(v1 + 16); // 0x51f4a8
    int64_t v3 = v2; // 0x51f4b0
    if (v2 >= *(int64_t *)(v1 + 24)) {
        v3 = function_51f990(v1, v1, v1, v1);
    }
    // 0x51f4b6
    return function_51f214(v1, v1, v1, v1, *(char *)v3);
}

// Address range: 0x51f4c8 - 0x51f5ad
int64_t function_51f4c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    int32_t v1 = a3; // 0x51f4cc
    int64_t v2; // 0x51f4c8
    if (((char)v2 ^ 1 || (char)(v1 == 10)) == 0) {
        function_51f199();
    }
    if (v1 != 8 && (int32_t)a4 != 0) {
        // 0x51f5a0
        return function_51f1ce(a1 & -256);
    }
    if (v2 != 0) {
        function_51f1d7();
    }
    if (v2 == 0) {
        function_51ff8c();
    }
    // 0x51f519
    return function_51f208();
}

// Address range: 0x51f7c0 - 0x51f948
int64_t function_51f7c0(int64_t a1, int64_t a2, int32_t a3) {
    // 0x51f7c0
    int64_t v1; // 0x51f7c0
    if (v1 == 0) {
        function_51fec5();
    }
    int64_t v2; // 0x51f7c0
    if ((int32_t)v1 == -1) {
        uint64_t v3 = *(int64_t *)(v1 + 16); // 0x51f7cf
        int64_t v4 = v3; // 0x51f7d7
        if (v3 >= *(int64_t *)(v1 + 24)) {
            v4 = function_51fccb((int64_t)&g4);
        }
        // 0x51f7dd
        v2 = (int64_t)*(char *)v4;
    }
    int64_t result = 0x100000000000000 * v2 >> 56; // 0x51f7ed
    if (v1 < 11) {
        result = function_51f2dc();
    }
    char v5 = v2;
    if (v5 < 58) {
        // 0x51f820
        return function_51f2f5();
    }
    if (v5 < 103) {
        // 0x51f940
        return function_51f2f8();
    }
    // 0x51f80b
    if (v5 >= 71) {
        // 0x51f820
        return result;
    }
    int64_t v6 = result + 0xffffffc9; // 0x51f813
    int64_t result2 = v6 & 0xffffffff; // 0x51f819
    if ((int32_t)v6 != -1) {
        result2 = function_51f301();
    }
    // 0x51f820
    return result2;
}

// Address range: 0x51f950 - 0x51f971
int64_t function_51f950(int64_t a1) {
    // 0x51f950
    if (*(int64_t *)(a1 + 16) >= *(int64_t *)(a1 + 24)) {
        int64_t v1; // 0x51f950
        function_51fdb7(a1, v1, v1, v1, (int64_t)&g4);
    }
    // 0x51f963
    return function_51f076();
}

// Address range: 0x51f978 - 0x51f98f
int64_t function_51f978(void) {
    // 0x51f978
    int64_t v1; // 0x51f978
    int64_t v2 = v1;
    if (*(int64_t *)(v2 + 16) >= *(int64_t *)(v2 + 24)) {
        function_51fde3();
    }
    // 0x51f986
    return function_51f05f();
}

// Address range: 0x51f990 - 0x51f9cc
int64_t function_51f990(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    // 0x51f990
    int64_t v1; // 0x51f990
    int64_t v2 = v1;
    return function_51f214(v2, a2 % 256, a3 & 0xffffffff, a4 & 0xffffffff, (char)v2);
}

// Address range: 0x51f9d0 - 0x51f9e4
int64_t function_51f9d0(int64_t a1) {
    // 0x51f9d0
    function_52b8e0(a1, 32);
    return function_51f27b();
}

// Address range: 0x51f9e8 - 0x51fa2b
int64_t function_51f9e8(void) {
    // 0x51f9e8
    int64_t v1; // 0x51f9e8
    int64_t v2 = v1;
    if (*(int64_t *)(v2 + 16) < *(int64_t *)(v2 + 24)) {
        function_51f6a4();
    }
    if ((int32_t)v2 == -1) {
        function_51fe70();
    }
    if (v1 != 0) {
        function_51f6b1();
    }
    // 0x51fa26
    return function_51f7b1();
}

// Address range: 0x51fa30 - 0x51fa47
int64_t function_51fa30(void) {
    // 0x51fa30
    int64_t v1; // 0x51fa30
    int64_t v2 = v1;
    if (*(int64_t *)(v2 + 16) >= *(int64_t *)(v2 + 24)) {
        function_51fe06();
    }
    // 0x51fa3e
    return function_51f091();
}

// Address range: 0x51fa50 - 0x51fa93
int64_t function_51fa50(void) {
    // 0x51fa50
    int64_t v1; // 0x51fa50
    int64_t v2 = v1;
    if (*(int64_t *)(v2 + 24) > *(int64_t *)(v2 + 16)) {
        function_51f364();
    }
    int64_t v3; // 0x51fa50
    if ((int32_t)v2 == -1) {
        v3 = function_51fe86();
    }
    int64_t result = v3; // 0x51fa88
    if (v1 != 0) {
        result = function_51f371();
    }
    // 0x51fa8e
    return result;
}

// Address range: 0x51fa98 - 0x51fab9
int64_t function_51fa98(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x51fa98
    int64_t v1; // 0x51fa98
    return function_52b400(a5, v1, 0, 0, 1);
}

// Address range: 0x51fac0 - 0x51fadc
int64_t function_51fac0(void) {
    // 0x51fac0
    int64_t v1; // 0x51fac0
    int64_t v2 = v1;
    if (*(int64_t *)(v2 + 16) >= *(int64_t *)(v2 + 24)) {
        function_51fd07(v1, v1, v1, v1);
    }
    // 0x51face
    return function_51f108(v1);
}

// Address range: 0x51fae0 - 0x51fb01
int64_t function_51fae0(int64_t a1) {
    // 0x51fae0
    char v1; // 0x51fae0
    int64_t v2; // 0x51fae0
    *(int64_t *)v2 = v1 == 0 ? a1 : -a1;
    return function_51f70d();
}

// Address range: 0x51fb08 - 0x51fb18
int64_t function_51fb08(int64_t result) {
    // 0x51fb08
    *(int32_t *)result = 4;
    return result;
}

// Address range: 0x51fb18 - 0x51fb22
int64_t function_51fb18(void) {
    // 0x51fb18
    return function_51f159();
}

// Address range: 0x51fb28 - 0x51fbbe
// From class:    std::__numpunct_cache<char>
// Type:          constructor
int64_t function_51fb28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = function_4efd30(144); // 0x51fb2d
    *(int32_t *)(v1 + 8) = 0;
    int64_t v2; // 0x51fb28
    int64_t v3 = v2 + 208; // 0x51fb45
    *(int64_t *)(v1 + 16) = 0;
    *(int64_t *)(v1 + 24) = 0;
    *(char *)(v1 + 32) = 0;
    *(int64_t *)(v1 + 40) = 0;
    *(int64_t *)(v1 + 48) = 0;
    *(int64_t *)v1 = (int64_t)&g2;
    *(int64_t *)(v1 + 56) = 0;
    *(int64_t *)(v1 + 64) = 0;
    *(int16_t *)(v1 + 72) = 0;
    *(char *)(v1 + 136) = 0;
    function_555500(v1, v3);
    function_566890(*(int64_t *)v3, v1, a5);
    return function_51f025();
}

// Address range: 0x51fbc0 - 0x51fbe3
int64_t function_51fbc0(int64_t a1) {
    // 0x51fbc0
    int64_t v1; // 0x51fbc0
    return function_51f6c0(v1);
}

// Address range: 0x51fbe8 - 0x51fc0b
int64_t function_51fbe8(void) {
    // 0x51fbe8
    int64_t v1; // 0x51fbe8
    return function_51f380(v1);
}

// Address range: 0x51fc10 - 0x51fc31
int64_t function_51fc10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x51fc10
    int64_t v1; // 0x51fc10
    return function_52b400(a5, v1, 0, 0, 1);
}

// Address range: 0x51fc38 - 0x51fc74
int64_t function_51fc38(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x51fc38
    int64_t result; // 0x51fc38
    return result;
}

// Address range: 0x51fc78 - 0x51fc91
int64_t function_51fc78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x51fc78
    return function_51f230();
}

// Address range: 0x51fc91 - 0x51fca9
int64_t function_51fc91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x51fc91
    return function_51f240();
}

// Address range: 0x51fca9 - 0x51fccb
int64_t function_51fca9(char a1) {
    // 0x51fca9
    int64_t v1; // 0x51fca9
    if ((int32_t)v1 != -1) {
        function_51f7b1();
    }
    // 0x51fcbe
    return function_51f5fe();
}

// Address range: 0x51fccb - 0x51fced
int64_t function_51fccb(int64_t a1) {
    // 0x51fccb
    int64_t v1; // 0x51fccb
    return function_51f2cd(v1);
}

// Address range: 0x51fcf0 - 0x51fd07
int64_t function_51fcf0(void) {
    // 0x51fcf0
    int64_t v1; // 0x51fcf0
    if (v1 == 0) {
        function_51ff6f();
    }
    // 0x51fcf9
    return function_51f0fb();
}

// Address range: 0x51fd07 - 0x51fd32
int64_t function_51fd07(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x51fd07
    int64_t v1; // 0x51fd07
    return function_51f108(v1);
}

// Address range: 0x51fd32 - 0x51fd5d
int64_t function_51fd32(unsigned char result) {
    // 0x51fd32
    return result;
}

// Address range: 0x51fd5d - 0x51fd88
int64_t function_51fd5d(unsigned char result) {
    // 0x51fd5d
    return result;
}

// Address range: 0x51fd88 - 0x51fda6
int64_t function_51fd88(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x51fd88
    int64_t v1; // 0x51fd88
    return function_51f0e6(v1);
}

// Address range: 0x51fda6 - 0x51fdb7
int64_t function_51fda6(void) {
    // 0x51fda6
    int64_t result; // 0x51fda6
    int64_t v1; // 0x51fda6
    if (v1 == 0) {
        result = function_51ffa2();
    }
    // 0x51fdaf
    return result;
}

// Address range: 0x51fdb7 - 0x51fdc0
int64_t function_51fdb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x51fdb7
    int64_t result; // 0x51fdb7
    return result;
}
