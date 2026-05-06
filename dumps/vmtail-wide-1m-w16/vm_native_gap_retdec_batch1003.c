/*
 * Targeted RetDec C for native executable gap queue batch 1003.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x28a2cb-0x28a4cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x28a6cb-0x28a8cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x403cd1-0x403ed1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x403ed1-0x4040d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4040d1-0x4042d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4042d1-0x4044d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4044d1-0x4046d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4046d1-0x4048d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4048d1-0x404ad1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x404ad1-0x404cd1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4551e3-0x4553e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4553e3-0x4555e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4555e3-0x4557e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4557e3-0x4559e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x455de3-0x455fe3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x455fe3-0x4561e3 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
extern int g9;
extern int g10;
extern int g11;
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

int64_t function_14b1f499();
int64_t function_19ccd354();
int64_t function_24af8ca0();
int64_t function_28a2cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_28a30b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_28a425(int64_t a1);
int64_t function_28a42a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28a4c3(void);
int64_t function_28a4c7(void);
int64_t function_28a6cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_28a716(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_28a885(void);
int64_t function_28a8b9(int64_t a1);
int64_t function_2eb2a648();
int64_t function_403cd1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_403d28(int64_t a1, int64_t a2, int64_t a3);
int64_t function_403e00(void);
int64_t function_403e7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_403ec4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_40404b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_404056(void);
int64_t function_40407f(int64_t a1, int64_t a2);
int64_t function_404103(void);
int64_t function_40410e(void);
int64_t function_404125(int64_t a1);
int64_t function_40412e(void);
int64_t function_404140(int64_t a1);
int64_t function_404148(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40415c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40416c(void);
int64_t function_404183(void);
int64_t function_404196(void);
int64_t function_40419d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_404252(void);
int64_t function_404264(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4042d8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_4045b0(int64_t a1);
int64_t function_4045c2(void);
int64_t function_404630(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_404679(void);
int64_t function_40467c(void);
int64_t function_40467e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_404696(void);
int64_t function_4046bf(int64_t a1);
int64_t function_4046cb(int64_t a1);
int64_t function_4046eb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_4047b9(void);
int64_t function_4047dd(void);
int64_t function_404856(int64_t a1);
int64_t function_404888(int64_t a1);
int64_t function_40488f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4048aa(void);
int64_t function_4048b8(void);
int64_t function_4048e4(void);
int64_t function_40491a(void);
int64_t function_404969(int64_t a1, int64_t a2, int64_t a3);
int64_t function_404990(int64_t a1);
int64_t function_404992(void);
int64_t function_4049bd(int64_t a1);
int64_t function_4049c8(void);
int64_t function_404aa1(void);
int64_t function_404aa8(int64_t a1);
int64_t function_404ba1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_404ba7(int64_t a1, int64_t a2);
int64_t function_404bc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_404be8(void);
int64_t function_404c20(int64_t a1, int64_t a2, int64_t a3);
int64_t function_404c38(void);
int64_t function_404c4d(void);
int64_t function_404c56(void);
int64_t function_404c62(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_404c76(void);
int64_t function_404c79(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_404ca6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_449a0d16();
int64_t function_4551e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4552b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4552ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_455376(void);
int64_t function_455395(void);
int64_t function_4553bd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4554cd(void);
int64_t function_4554dc(void);
int64_t function_455508(int64_t a1);
int64_t function_455523(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_455549(void);
int64_t function_45556a(void);
int64_t function_4555aa(void);
int64_t function_455629(int64_t a1, int64_t a2);
int64_t function_45562d(int64_t a1);
int64_t function_455691(void);
int64_t function_45569a(int64_t a1);
int64_t function_4556b8(void);
int64_t function_4556bc(void);
int64_t function_4556de(void);
int64_t function_45570c(int64_t a1, int64_t a2);
int64_t function_45571b(void);
int64_t function_455726(int64_t a1, int64_t a2, int64_t a3);
int64_t function_455738(int64_t a1);
int64_t function_45574c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45580c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_455878(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45588e(void);
int64_t function_4558d8(void);
int64_t function_45590a(void);
int64_t function_45590f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45598a(void);
int64_t function_4559b2(void);
int64_t function_4559c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_455de3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_455dfa(int64_t a1, int64_t a2);
int64_t function_455e57(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_455e64(void);
int64_t function_455e89(void);
int64_t function_455eca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_455ef3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_455f0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_455f3d(void);
int64_t function_455f3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_455faa(int64_t a1);
int64_t function_455fad(int64_t a1);
int64_t function_455fd6(void);
int64_t function_456003(void);
int64_t function_456008(void);
int64_t function_45607d(void);
int64_t function_4560de(void);
int64_t function_456102(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_456114(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4561c8(int64_t a1);
int64_t function_4a54c352();
int64_t function_637d2cdd();
int64_t function_693060ce();
int64_t function_80426d74();
int64_t function_caf2a();
int64_t function_ffffffff9e731913();
int64_t function_ffffffffb14e72fa();
int64_t function_ffffffffda961e0a();
int64_t function_ffffffffeb4cf0d2();
int64_t unknown_5b4cb355();
int64_t unknown_ffffffff94ad9a64();

// Address range: 0x28a2cb - 0x28a30b
int64_t function_28a2cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x28a2cb
    return function_caf2a(a1, a2, a3, a4);
}

// Address range: 0x28a30b - 0x28a416
int64_t function_28a30b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x28a30b
    int64_t v1; // bp-56, 0x28a30b
    int64_t v2 = (int64_t)&v1; // 0x28a380
    int64_t v3 = v2 + 16; // 0x28a386
    v1 = v3;
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x28a395
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x28a395
    *v5 = v4;
    bool v6; // 0x28a30b
    v1 = 0x4000 * (int64_t)v6 | 2048 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 128 * (int64_t)v6 | 64 * (int64_t)v6 | 16 * (int64_t)v6 | (int64_t)v6 | 4 * (int64_t)v6 | 2;
    int64_t v7 = v2 + 24; // 0x28a3b8
    int64_t * v8 = (int64_t *)v7; // 0x28a3b8
    *v8 = *v5;
    *v5 = 0x7b764f22;
    v1 = a3;
    *(int64_t *)(v2 + 48) = v4;
    int64_t v9 = *v5; // 0x28a3cd
    v1 = v9;
    *v5 = v7;
    int64_t v10 = *v8; // 0x28a3fb
    *(int64_t *)v3 = v10;
    *v5 = v10;
    int64_t v11; // 0x28a30b
    return function_caf2a(a1, a2, v9, v11);
}

// Address range: 0x28a425 - 0x28a428
int64_t function_28a425(int64_t a1) {
    // 0x28a425
    int64_t result; // 0x28a425
    return result;
}

// Address range: 0x28a42a - 0x28a432
int64_t function_28a42a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28a42a
    int64_t v1; // 0x28a42a
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result - 127); // 0x28a42c
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x28a4c3 - 0x28a4c6
int64_t function_28a4c3(void) {
    // 0x28a4c3
    int64_t result; // 0x28a4c3
    return result;
}

// Address range: 0x28a4c7 - 0x28a4ca
int64_t function_28a4c7(void) {
    // 0x28a4c7
    int64_t result; // 0x28a4c7
    return result;
}

// Address range: 0x28a6cb - 0x28a716
int64_t function_28a6cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x28a6cb
    return function_caf2a(a1, a2, a3, a4);
}

// Address range: 0x28a716 - 0x28a84b
int64_t function_28a716(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x28a716
    return function_caf2a(a1, a2, a3, a4);
}

// Address range: 0x28a885 - 0x28a88a
int64_t function_28a885(void) {
    // 0x28a885
    return function_14b1f499();
}

// Address range: 0x28a8b9 - 0x28a8bd
int64_t function_28a8b9(int64_t a1) {
    // 0x28a8b9
    int64_t v1; // 0x28a8b9
    return __asm_int1(v1, v1);
}

// Address range: 0x403cd1 - 0x403ce2
int64_t function_403cd1(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_ffffffff94ad9a64(); // 0x403cd4
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x403d28 - 0x403d2d
int64_t function_403d28(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403d28
    int64_t result; // 0x403d28
    __asm_out_133((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x403e00 - 0x403e05
int64_t function_403e00(void) {
    // 0x403e00
    return function_449a0d16();
}

// Address range: 0x403e7c - 0x403ea4
int64_t function_403e7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x403e7c
    *(int32_t *)(a1 - 0x265e9ab9) = (int32_t)a1;
    int16_t v1 = a3; // 0x403e90
    *(char *)a1 = __asm_insb(v1);
    int64_t v2 = a4; // bp-8, 0x403e94
    int16_t v3 = v1 & -256 | 94; // 0x403e95
    __asm_in(v3);
    int64_t result = __asm_in_134(v3); // 0x403e96
    uint32_t v4 = *(int32_t *)(a1 + 0x3a7f724c); // 0x403e97
    char * v5 = (char *)(result + 81); // 0x403e9d
    char v6 = *v5; // 0x403e9d
    *v5 = v6 + (char)a4 + (char)(v4 < (int32_t)(int64_t)&v2);
    return result;
}

// Address range: 0x403ec4 - 0x404018
int64_t function_403ec4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    bool v2; // 0x403ec4
    if (v2) {
        int64_t result = __asm_int1(a1, a2); // 0x403f0a
        char * v3 = (char *)(a1 + 56); // 0x403f0e
        *v3 = -*v3;
        return result;
    }
    // 0x403f24
    int64_t v4; // 0x403ec4
    __asm_out_135(-58, (int32_t)v4);
    unsigned char v5 = *(char *)(v4 + 61) + (char)v4; // 0x403f2c
    int64_t v6 = v5; // 0x403f2c
    int64_t v7 = v4 & -256; // 0x403f2c
    char * v8 = (char *)(v7 | v6); // 0x403f2f
    char v9 = v4 / 256;
    *v8 = *v8 + v9;
    if (a5 != 1) {
        int32_t v10 = __asm_in_134((int16_t)a3); // 0x403f5e
        return (int64_t)((v10 + 22) % 256) | (int64_t)(v10 & -256);
    }
    // 0x403f37
    *(int32_t *)v1 = *(int32_t *)&v1 / 0x100000;
    int64_t result2 = v4 & 0x8ae154dc ^ 0x75feff6b; // 0x403f3b
    if ((-v9 & v9) >= 0) {
        // 0x403f45
        return result2;
    }
    uint64_t v11 = a3 / 256; // 0x403fbd
    if (v11 % 32 == 0) {
        // 0x404008
        return result2 - 256 * (v6 + (int64_t)((a3 & 0x2000) != 0)) & 0xff00 | result2 & 0xffff00ff;
    }
    *(int32_t *)a1 = *(int32_t *)&v1;
    float80_t v12; // 0x403ec4
    *(float32_t *)(result2 - 0x2b62ec20) = (float32_t)v12;
    char * v13 = (char *)(5 * (2048 * v11 & 0xf800 | a3 & -0xff01)); // 0x403f8a
    *v13 = v5;
    uint32_t v14 = *(int32_t *)((v7 | (int64_t)*v13) + 90); // 0x403f8d
    int32_t v15 = __asm_in_136(112); // 0x403f90
    int32_t * v16 = (int32_t *)((v2 ? -4 : 4) + a1); // 0x403f92
    *v16 = *v16 << 31;
    __asm_out_133((int16_t)(result2 * (int64_t)v14 / 0x100000000), v15);
    return __asm_hlt();
}

// Address range: 0x40404b - 0x404052
int64_t function_40404b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 113); // 0x40404b
    uint32_t v2 = *v1; // 0x40404b
    int64_t result; // 0x40404b
    uint32_t v3 = v2 + (int32_t)result; // 0x40404b
    bool v4; // 0x40404b
    uint32_t v5 = v3 + (int32_t)v4; // 0x40404b
    bool v6 = v4 ? v5 <= v2 : v3 < v2; // 0x40404b
    *v1 = v5;
    int64_t v7; // 0x40404b
    *(int32_t *)a5 = *(int32_t *)&v7 + (int32_t)a5 + (int32_t)v6;
    return result;
}

// Address range: 0x404056 - 0x404057
int64_t function_404056(void) {
    // 0x404056
    int64_t result; // 0x404056
    return result;
}

// Address range: 0x40407f - 0x404087
int64_t function_40407f(int64_t a1, int64_t a2) {
    // 0x40407f
    int64_t v1; // 0x40407f
    *(char *)a1 = (char)v1;
    return __asm_in_136(1);
}

// Address range: 0x404103 - 0x404104
int64_t function_404103(void) {
    // 0x404103
    int64_t result; // 0x404103
    return result;
}

// Address range: 0x40410e - 0x40410f
int64_t function_40410e(void) {
    // 0x40410e
    int64_t result; // 0x40410e
    return result;
}

// Address range: 0x404125 - 0x404128
int64_t function_404125(int64_t a1) {
    // 0x404125
    int64_t result; // 0x404125
    return result;
}

// Address range: 0x40412e - 0x404136
int64_t function_40412e(void) {
    // 0x40412e
    bool v1; // 0x40412e
    if (v1) {
        function_40410e();
    }
    // 0x404131
    return function_24af8ca0();
}

// Address range: 0x404140 - 0x404141
int64_t function_404140(int64_t a1) {
    // 0x404140
    int64_t result; // 0x404140
    return result;
}

// Address range: 0x404148 - 0x40415b
int64_t function_404148(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a4 - 0x6cc0eab9); // 0x404148
    uint32_t v3 = *v2; // 0x404148
    int64_t v4; // 0x404148
    uint32_t v5 = v3 + (int32_t)v4; // 0x404148
    bool v6; // 0x404148
    uint32_t v7 = v5 + (int32_t)v6; // 0x404148
    *v2 = v7;
    int64_t result; // 0x404148
    if (v7 != 0) {
        result = function_404103();
    }
    // 0x404151
    *(int32_t *)a1 = *(int32_t *)&v1;
    int32_t * v8 = (int32_t *)(v1 + (v6 ? -31 : -23)); // 0x404152
    *v8 = (int32_t)(v6 ? v7 <= v3 : v5 < v3) + (int32_t)v4 + *v8;
    char * v9 = (char *)(v4 + 63 + 2 * v4); // 0x404155
    *v9 = *v9 & (char)a3;
    return result;
}

// Address range: 0x40415c - 0x404166
int64_t function_40415c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40415c
    int64_t result; // 0x40415c
    __asm_outsb((int16_t)a3, (char)result);
    char * v1 = (char *)(a1 - 0x4cd12418); // 0x40415e
    bool v2; // 0x40415c
    *v1 = (char)v2 - (char)result + *v1;
    return result;
}

// Address range: 0x40416c - 0x40416e
int64_t function_40416c(void) {
    // 0x40416c
    int64_t result; // 0x40416c
    return result;
}

// Address range: 0x404183 - 0x404184
int64_t function_404183(void) {
    // 0x404183
    int64_t result; // 0x404183
    return result;
}

// Address range: 0x404196 - 0x404197
int64_t function_404196(void) {
    // 0x404196
    int64_t result; // 0x404196
    return result;
}

// Address range: 0x40419d - 0x404215
int64_t function_40419d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40419d
    int64_t v1; // 0x40419d
    int64_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0x40419d
    bool v3; // 0x40419d
    if (!v3) {
        // 0x404204
        return v2 & 0xffffff00 | (int64_t)*(char *)(a3 - 14);
    }
    int32_t v4 = 0x40000000 * (int32_t)a2; // 0x4041a0
    *(int32_t *)a2 = v4;
    int64_t result = v2; // 0x4041a3
    if (v4 == 0) {
        result = function_404196();
    }
    // 0x4041a5
    return result;
}

// Address range: 0x404252 - 0x404255
int64_t function_404252(void) {
    // 0x404252
    int64_t result; // 0x404252
    return result;
}

// Address range: 0x404264 - 0x4042d6
int64_t function_404264(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404264
    int64_t v1; // 0x404264
    uint64_t v2 = v1;
    int64_t v3 = a3;
    unsigned char v4 = *(char *)(a4 - 122) ^ (char)(v2 / 256); // 0x404266
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x404266
    int64_t result = 256 * (int64_t)v4 | v2 & -0xff01; // 0x404266
    if (v5 % 2 != 0) {
        // 0x404275
        return result;
    }
    int32_t * v6 = (int32_t *)result; // 0x4042ce
    *v6 = *v6 + 1;
    int64_t v7 = v3;
    *(int32_t *)v7 = *(int32_t *)&v3 + (int32_t)v7;
    return result;
}

// Address range: 0x4042d8 - 0x4045aa
int64_t function_4042d8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x4042d8
    int64_t result; // 0x4042d8
    int32_t * v1 = (int32_t *)(result - 17); // 0x4042d8
    int32_t v2 = *v1 ^ (int32_t)a3; // 0x4042d8
    unsigned char v3 = llvm_ctpop_i8((char)v2); // 0x4042d8
    *v1 = v2;
    if (v3 % 2 == 0) {
        // 0x4042dd
        return result;
    }
    char * v4 = (char *)(result + 0x48227747); // 0x404354
    *v4 = *v4 + (char)(a4 / 256);
    unsigned char v5 = (char)result; // 0x40435a
    unsigned char v6 = v5 - 68; // 0x40435a
    int64_t v7 = result & -256; // 0x40435a
    if (a4 == 1 || v6 == 0) {
        char v8 = __asm_in((int16_t)a3); // 0x40435f
        int32_t * v9 = (int32_t *)(a2 + 90); // 0x404361
        int32_t v10 = *v9; // 0x404361
        int64_t v11; // bp+22514, 0x4042d8
        *v9 = v10 + ((int32_t)(int64_t)&v11 | (int32_t)(v5 < 68));
        return v7 | (int64_t)v8;
    }
    // 0x4043d1
    return v7 | (int64_t)v6;
}

// Address range: 0x4045b0 - 0x4045b1
int64_t function_4045b0(int64_t a1) {
    // 0x4045b0
    int64_t result; // 0x4045b0
    return result;
}

// Address range: 0x4045c2 - 0x4045c5
int64_t function_4045c2(void) {
    // 0x4045c2
    int64_t result; // 0x4045c2
    return result;
}

// Address range: 0x404630 - 0x40466b
int64_t function_404630(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)-0x27bdaeba; // 0x404630
    unsigned char v2 = v1 + (char)(a3 / 256); // 0x404630
    *(char *)-0x27bdaeba = v2;
    int64_t v3; // 0x404630
    if (v2 >= v1) {
        unsigned char v4 = *(char *)(a2 - 122); // 0x40463b
        int32_t * v5 = (int32_t *)(a3 - 0x5cdf322); // 0x40463f
        int64_t v6; // 0x404630
        *v5 = *v5 + (int32_t)a2 + (int32_t)(v4 > (char)v6);
        __asm_in_134((int16_t)a3);
        v3 = (int64_t)*(int32_t *)-0x2b5c84d59aeadae0;
    }
    uint64_t v7 = v3;
    char * v8 = (char *)(a4 + 0x19d93151); // 0x404650
    *v8 = *v8 ^ (char)(v7 / 256);
    return (v7 + 222) % 256 | v7 & -256;
}

// Address range: 0x404679 - 0x40467b
int64_t function_404679(void) {
    // 0x404679
    int64_t v1; // 0x404679
    return function_4046eb(v1, v1, v1, v1, (int64_t)&g11);
}

// Address range: 0x40467c - 0x40467d
int64_t function_40467c(void) {
    // 0x40467c
    int64_t result; // 0x40467c
    return result;
}

// Address range: 0x40467e - 0x404681
int64_t function_40467e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40467e
    int64_t result; // 0x40467e
    *(char *)a1 = (char)result;
    int64_t v1; // 0x40467e
    *(char *)v1 = *(char *)&v1 + (char)a3;
    return result;
}

// Address range: 0x404696 - 0x404697
int64_t function_404696(void) {
    // 0x404696
    int64_t result; // 0x404696
    return result;
}

// Address range: 0x4046bf - 0x4046c2
int64_t function_4046bf(int64_t a1) {
    // 0x4046bf
    int64_t v1; // 0x4046bf
    return v1 ^ 229;
}

// Address range: 0x4046cb - 0x4046e9
int64_t function_4046cb(int64_t a1) {
    // 0x4046cb
    function_404696();
    return function_ffffffffda961e0a();
}

// Address range: 0x4046eb - 0x4047a9
int64_t function_4046eb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x4046eb
    int64_t v1; // 0x4046eb
    int64_t v2 = v1;
    bool v3; // 0x4046eb
    if (-1 - (char)(a4 / 256) < (char)v1) {
        // 0x4046f1
        return (v2 + 136 + (int64_t)v3) % 256 | v2 & -256;
    }
    // 0x404748
    *(char *)a1 = (char)a2;
    int64_t v4 = v3 ? -1 : 1; // 0x404748
    return __asm_wait(v4 + a1, v4 + a2);
}

// Address range: 0x4047b9 - 0x4047bb
int64_t function_4047b9(void) {
    // 0x4047b9
    int64_t result; // 0x4047b9
    return result;
}

// Address range: 0x4047dd - 0x4047de
int64_t function_4047dd(void) {
    // 0x4047dd
    int64_t result; // 0x4047dd
    return result;
}

// Address range: 0x404856 - 0x404857
int64_t function_404856(int64_t a1) {
    // 0x404856
    int64_t result; // 0x404856
    return result;
}

// Address range: 0x404888 - 0x40488b
int64_t function_404888(int64_t a1) {
    // 0x404888
    int64_t result; // 0x404888
    return result;
}

// Address range: 0x40488f - 0x404895
int64_t function_40488f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40488f
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x40488f
    return result;
}

// Address range: 0x4048aa - 0x4048ab
int64_t function_4048aa(void) {
    // 0x4048aa
    int64_t result; // 0x4048aa
    return result;
}

// Address range: 0x4048b8 - 0x4048bb
int64_t function_4048b8(void) {
    // 0x4048b8
    int64_t result; // 0x4048b8
    return result;
}

// Address range: 0x4048e4 - 0x4048ee
int64_t function_4048e4(void) {
    // 0x4048e4
    int64_t v1; // 0x4048e4
    return function_404969(v1, v1, v1);
}

// Address range: 0x40491a - 0x404926
int64_t function_40491a(void) {
    // 0x40491a
    return function_4048aa();
}

// Address range: 0x404969 - 0x40496b
int64_t function_404969(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404969
    int64_t result; // 0x404969
    return result;
}

// Address range: 0x404990 - 0x404991
int64_t function_404990(int64_t a1) {
    // 0x404990
    int64_t result; // 0x404990
    return result;
}

// Address range: 0x404992 - 0x404997
int64_t function_404992(void) {
    // 0x404992
    return function_637d2cdd();
}

// Address range: 0x4049bd - 0x4049be
int64_t function_4049bd(int64_t a1) {
    // 0x4049bd
    int64_t result; // 0x4049bd
    return result;
}

// Address range: 0x4049c8 - 0x4049cb
int64_t function_4049c8(void) {
    // 0x4049c8
    int64_t result; // 0x4049c8
    return result;
}

// Address range: 0x404aa1 - 0x404aa7
int64_t function_404aa1(void) {
    // 0x404aa1
    __asm_hlt();
    return function_ffffffff9e731913();
}

// Address range: 0x404aa8 - 0x404aad
int64_t function_404aa8(int64_t a1) {
    // 0x404aa8
    int64_t v1; // 0x404aa8
    return v1 & -0xff01 | (int64_t)&g6;
}

// Address range: 0x404ba1 - 0x404ba7
int64_t function_404ba1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404ba1
    *(char *)a1 = (char)a3;
    int64_t result; // 0x404ba1
    return result;
}

// Address range: 0x404ba7 - 0x404bac
int64_t function_404ba7(int64_t a1, int64_t a2) {
    // 0x404ba7
    int64_t result; // 0x404ba7
    *(int16_t *)a1 = (int16_t)result;
    return result;
}

// Address range: 0x404bc0 - 0x404bcc
int64_t function_404bc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404bc0
    int64_t v1; // 0x404bc0
    int16_t v2 = (int32_t)v1 >> 31; // 0x404bc3
    __asm_outsb(v2, (char)v1);
    __asm_in_134(v2);
    return function_404c38();
}

// Address range: 0x404be8 - 0x404bed
int64_t function_404be8(void) {
    // 0x404be8
    int64_t v1; // 0x404be8
    return v1 & -256 | 168;
}

// Address range: 0x404c20 - 0x404c27
int64_t function_404c20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404c20
    int64_t v1; // 0x404c20
    uint64_t result = v1;
    char * v2 = (char *)(a3 + 88); // 0x404c20
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x404c38 - 0x404c3d
int64_t function_404c38(void) {
    // 0x404c38
    int64_t v1; // 0x404c38
    bool v2; // 0x404c38
    return v1 - (v2 ? 0xc76cc937 : 0xc76cc936) & 0xffffffff;
}

// Address range: 0x404c4d - 0x404c4e
int64_t function_404c4d(void) {
    // 0x404c4d
    int64_t result; // 0x404c4d
    return result;
}

// Address range: 0x404c56 - 0x404c59
int64_t function_404c56(void) {
    // 0x404c56
    int64_t result; // 0x404c56
    return result;
}

// Address range: 0x404c62 - 0x404c75
int64_t function_404c62(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404c62
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    float80_t v1; // 0x404c62
    *(int64_t *)(a4 + 75) = (int64_t)v1;
    int64_t result; // 0x404c62
    return result;
}

// Address range: 0x404c76 - 0x404c79
int64_t function_404c76(void) {
    // 0x404c76
    int64_t result; // 0x404c76
    return result;
}

// Address range: 0x404c79 - 0x404ca6
int64_t function_404c79(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404c79
    int64_t v1; // 0x404c79
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 ^ v1);
    int16_t v3 = (int16_t)v1 | 0x1f76; // 0x404c92
    __asm_in_134(v3);
    *(char *)a1 = __asm_insb(v3);
    return function_404c4d();
}

// Address range: 0x404ca6 - 0x404cb7
int64_t function_404ca6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x404ca6
    int64_t v1; // 0x404ca6
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result;
    return result;
}

// Address range: 0x4551e3 - 0x4552a0
int64_t function_4551e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x4551e3
    int64_t v1; // 0x4551e3
    bool v2; // 0x4551e3
    uint32_t v3 = (int32_t)v1 - (v2 ? 0x345a4a45 : 0x345a4a44); // 0x4551e3
    int64_t result2 = v3; // 0x4551e3
    int64_t v4 = a4 - 1; // 0x4551e8
    if (v4 != 0 != (v3 == 0)) {
        int64_t v5 = (v3 + 31) % 256; // 0x4551eb
        int64_t v6 = result2 & 0xffffff00; // 0x4551eb
        if (a4 != 2) {
            // 0x455211
            return v6 | v5;
        }
        // 0x4551f0
        *(char *)0x41dc858d = *(char *)0x41dc858d + (char)(v1 / 256);
        int64_t v7 = v6 | (int64_t)*(char *)(v1 + v5); // 0x4551fa
        uint32_t v8 = *(int32_t *)v7; // 0x4551fb
        int32_t v9 = *(int32_t *)0x1f85a152; // 0x4551fe
        uint32_t result = (int32_t)a7 - v9 + (int32_t)(v8 < (int32_t)v7); // 0x4551fe
        *(char *)-0x7aa3def5cbaafffc = (char)result;
        return result;
    }
    char * v10 = (char *)(a6 + 0x4a747569); // 0x45524b
    unsigned char v11 = *v10; // 0x45524b
    char v12 = a5; // 0x45524b
    unsigned char v13 = v11 + v12; // 0x45524b
    *v10 = v13;
    if (v13 < v11 || v13 == 0) {
        if (((v13 ^ v11) & (v13 ^ v12)) < 0) {
            // 0x45529b
            return v3 + 0x6b12a818;
        }
        unsigned char v14 = *(char *)(a3 - 0x118b3ed7) | (char)v3; // 0x45528d
        *(int32_t *)-0x6e4316d7 = *(int32_t *)-0x6e4316d7 + (int32_t)v1;
        __asm_out((int16_t)a3, v14);
        return result2 & 0xffffff00 | (int64_t)v14;
    }
    if ((256 * (int64_t)*(char *)(v1 - 102) || v4 & -0xff01) == 1) {
        // 0x455256
        return v3 - 0x6f91bf99;
    }
    // 0x45522e
    return result2;
}

// Address range: 0x4552b8 - 0x4552bc
int64_t function_4552b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4552b8
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x4552b8
    return result;
}

// Address range: 0x4552ca - 0x455350
int64_t function_4552ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3 = a1;
    int64_t v4; // 0x4552ca
    *(char *)-0x583cac1f526f4ce = (char)v4;
    int32_t v5 = (int32_t)v4 & -0x797f0600 | 0x797f059f; // 0x4552d7
    int3_t v6; // 0x4552ca
    float80_t v7 = __frontend_reg_load_fpr(v6); // 0x4552dc
    __frontend_reg_store_fpr(v6, v7 * (float80_t)*(int32_t *)0x3526c2ff);
    if (v5 >= 0) {
        int64_t v8 = v5; // 0x4552d7
        uint16_t v9 = (int16_t)a4 % 32; // 0x45534c
        int64_t result = v8; // 0x45534c
        if (v9 != 0) {
            result = v8 & 0xffff0000 | (int64_t)((int16_t)v5 >> v9);
        }
        __asm_outsb((int16_t)a3, (char)a2);
        return result;
    }
    // 0x4552ec
    *(char *)(a1 + 127) = 0;
    unsigned char v10 = *(char *)&v3; // 0x4552f6
    bool v11; // 0x4552ca
    int64_t v12 = v11 ? -1 : 1; // 0x4552f6
    int64_t v13 = v3 + v12; // 0x4552f6
    v3 = v13;
    *(int64_t *)0x8af72bc0 = 0x2e5ab1c6;
    int64_t v14 = v13; // 0x4552fc
    int32_t result2 = v5 - (*(char *)&v2 < v10 ? 0x450ba6 : 0x450ba5); // 0x4552fc
    uint64_t v15 = 0x8af72bc0;
    v14 += v12;
    uint32_t v16 = result2 + *(int32_t *)&v1; // 0x455303
    int3_t v17; // 0x4552ca
    __frontend_reg_load_fpr(v17);
    int64_t v18 = v15 / 0x40000 % 0x4000 | 0x8000 * v15 & 0xffff8000 | 0x4000 * (int64_t)(v16 < result2); // 0x455310
    result2 = ((v15 & 0x20000) != 0 ? 0x18287cc9 : 0x18287cc8) + v16;
    v17++;
    while (result2 < 0 == (result2 + (int32_t)((v15 & 0x20000) != 0) & (v16 ^ -0x80000000)) < 0) {
        // 0x455301
        v15 = v18;
        v14 += v12;
        v16 = result2 + *(int32_t *)&v1;
        __frontend_reg_load_fpr(v17);
        v18 = v15 / 0x40000 % 0x4000 | 0x8000 * v15 & 0xffff8000 | 0x4000 * (int64_t)(v16 < result2);
        result2 = ((v15 & 0x20000) != 0 ? 0x18287cc9 : 0x18287cc8) + v16;
        v17++;
    }
    // 0x45531a
    v3 = v14;
    if (!(((v15 & 0x20000) != 0 ? result2 <= v16 : v16 > 0xe7d78337))) {
        // 0x455351
        return result2;
    }
    uint32_t v19 = *(int32_t *)-0x4ead6137 ^ (int32_t)a3; // 0x4552f0
    int64_t v20 = v19; // 0x4552f0
    char * v21 = (char *)v20; // 0x455322
    *v21 = (char)v19;
    *(int64_t *)(v18 - 8) = v1;
    return __asm_in_134((int16_t)(v20 & 0xff00 | (int64_t)*v21));
}

// Address range: 0x455376 - 0x455383
int64_t function_455376(void) {
    // 0x455376
    int64_t v1; // 0x455376
    __asm_out_137(30, (char)v1);
    return v1 + 0x6dc4034f;
}

// Address range: 0x455395 - 0x455396
int64_t function_455395(void) {
    // 0x455395
    int64_t result; // 0x455395
    return result;
}

// Address range: 0x4553bd - 0x455495
int64_t function_4553bd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4553bd
    int64_t v1; // 0x4553bd
    int64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = a4;
    int64_t v5 = a6;
    int64_t v6 = a1; // 0x4553bd
    int64_t v7; // 0x4553bd
    bool v8; // 0x4553bd
    if (!v8) {
        int64_t result; // 0x4553bd
        result = function_455395();
        // 0x4553c2
        if (v8) {
            // 0x4553c4
            *(char *)0x46540c0a742e88c0 = (char)result;
            int32_t * v9 = (int32_t *)((a4 + 0xffff + (v3 & 0xff00) & 0xff00 | v3 & -0xff01) - 22); // 0x4553d4
            *v9 = *v9 + 0x34d13d18;
            int64_t v10 = result & 58 | 197; // 0x4553db
            char * v11 = (char *)(v10 | result & -256); // 0x4553e0
            *v11 = *v11 + (char)v10;
            char v12 = *(char *)(v2 + 33 + 2 * v2 & 0xffffffff); // 0x4553e2
            int64_t v13 = a3 & -256 | (int64_t)(v12 & (char)a3); // 0x4553e2
            *(int32_t *)(a4 + 0x748f2c22 + v13) = (int32_t)v13;
            return a5 & 0xffffffff;
        }
        // 0x45540f
        v6 = a5;
        v7 = (int64_t)&v5;
        if (!v8) {
            // 0x455411
            *(int32_t *)a5 = (int32_t)a2;
            *(char *)((v8 ? -4 : 4) + a2) = (char)(result / 256);
            return result;
        }
    }
    // 0x455462
    float80_t v14; // 0x4553bd
    *(int32_t *)a3 = (int32_t)v14;
    uint32_t result2 = *(int32_t *)-0x7165ab4e10d38090; // 0x455471
    if (*(int32_t *)(v6 + 53) + ((int32_t)v3 & -256 || 127) < 0) {
        // 0x4554cc
        return result2;
    }
    int64_t v15 = (int64_t)*(int32_t *)&v4; // 0x455469
    char * v16 = (char *)(v15 - 0x2a72d2fd); // 0x45547d
    *v16 = *v16 | (char)(a3 / 256);
    int64_t v17 = __asm_sti(); // 0x455486
    int32_t * v18 = (int32_t *)(v2 - 0x1eba4b3f); // 0x455487
    *v18 = (int32_t)((char)result2 < 226) - (int32_t)v7 + *v18;
    int64_t v19 = v8 ? -1 : 1; // 0x45548e
    int64_t v20; // bp+16, 0x4553bd
    v5 = (int64_t)&v20;
    unsigned char v21 = (char)v17 + 50; // 0x455490
    int64_t v22 = v19 + v15; // 0x455490
    int64_t v23 = v6; // 0x455490
    v23 += v19;
    *(char *)v23 = *(char *)v22;
    v22 += v19;
    while (v21 == 0) {
        // 0x455492
        v23 += v19;
        *(char *)v23 = *(char *)v22;
        v22 += v19;
    }
    // 0x455495
    return v17 & -256 | (int64_t)v21;
}

// Address range: 0x4554cd - 0x4554cf
int64_t function_4554cd(void) {
    // 0x4554cd
    int64_t result; // 0x4554cd
    return result;
}

// Address range: 0x4554dc - 0x4554f9
int64_t function_4554dc(void) {
    // 0x4554dc
    int64_t v1; // 0x4554dc
    char * v2 = (char *)(v1 + 111); // 0x4554dc
    *v2 = *v2 + (char)(v1 / 256);
    *(char *)0x451c6a751d723d50 = (char)v1;
    return v1 & 0xffff00ff | (int64_t)&g5;
}

// Address range: 0x455508 - 0x45550d
int64_t function_455508(int64_t a1) {
    // 0x455508
    int64_t v1; // 0x455508
    bool v2; // 0x455508
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x455523 - 0x45553d
int64_t function_455523(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x455523
    return __asm_int3();
}

// Address range: 0x455549 - 0x45554a
int64_t function_455549(void) {
    // 0x455549
    int64_t result; // 0x455549
    return result;
}

// Address range: 0x45556a - 0x455571
int64_t function_45556a(void) {
    // 0x45556a
    return function_ffffffffeb4cf0d2();
}

// Address range: 0x4555aa - 0x4555b0
int64_t function_4555aa(void) {
    // 0x4555aa
    int64_t result; // 0x4555aa
    return result;
}

// Address range: 0x455629 - 0x45562d
int64_t function_455629(int64_t a1, int64_t a2) {
    // 0x455629
    int64_t result; // 0x455629
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x45562d - 0x455630
int64_t function_45562d(int64_t a1) {
    // 0x45562d
    int64_t result; // 0x45562d
    return result;
}

// Address range: 0x455691 - 0x455696
int64_t function_455691(void) {
    // 0x455691
    return function_ffffffffb14e72fa();
}

// Address range: 0x45569a - 0x45569b
int64_t function_45569a(int64_t a1) {
    // 0x45569a
    int64_t result; // 0x45569a
    return result;
}

// Address range: 0x4556b8 - 0x4556b9
int64_t function_4556b8(void) {
    // 0x4556b8
    int64_t result; // 0x4556b8
    return result;
}

// Address range: 0x4556bc - 0x4556bf
int64_t function_4556bc(void) {
    // 0x4556bc
    int64_t v1; // 0x4556bc
    return function_45570c(v1, v1);
}

// Address range: 0x4556de - 0x4556e0
int64_t function_4556de(void) {
    // 0x4556de
    int64_t v1; // 0x4556de
    return function_455738(v1);
}

// Address range: 0x45570c - 0x45571b
int64_t function_45570c(int64_t a1, int64_t a2) {
    // 0x45570c
    int64_t v1; // 0x45570c
    bool v2; // 0x45570c
    if (true == !v2) {
        v1 = function_4556b8();
    }
    // 0x455715
    int64_t v3; // 0x45570c
    *(int64_t *)((int64_t)*(int32_t *)(2 * v3 - 0x6607778d) - 8) = a1;
    int32_t v4 = *(int32_t *)(v3 - 4); // 0x455716
    int64_t v5 = v2 ? -4 : 4; // 0x455719
    *(int32_t *)(v5 + a1) = *(int32_t *)(v5 + a2);
    return (int32_t)v1 + (int32_t)v2 + v4;
}

// Address range: 0x45571b - 0x45571c
int64_t function_45571b(void) {
    // 0x45571b
    int64_t result; // 0x45571b
    return result;
}

// Address range: 0x455726 - 0x45572f
int64_t function_455726(int64_t a1, int64_t a2, int64_t a3) {
    // 0x455726
    *(char *)0x6ea0014e = *(char *)0x6ea0014e | 127;
    return a3 & 0xffffffff;
}

// Address range: 0x455738 - 0x455746
int64_t function_455738(int64_t a1) {
    // 0x455738
    int64_t v1; // 0x455738
    int64_t v2 = v1;
    int64_t v3 = v1;
    unsigned char v4 = (char)v1; // 0x45573b
    char v5 = *(char *)(v1 - 54); // 0x45573b
    unsigned char v6 = v5 + (char)((char)v2 > (char)v3); // 0x45573b
    bool v7 = (char)v2 > (char)v3 ? v6 != -1 | (char)((char)v2 > (char)v3) + v4 - v6 > v4 : v6 > v4; // 0x45573b
    uint32_t v8 = (int32_t)v3 - (v7 ? 0x76395edc : 0x76395edb); // 0x45573f
    unsigned char v9 = llvm_ctpop_i8((char)v8); // 0x45573f
    int64_t result = v8; // 0x455744
    if (v9 % 2 == 0) {
        bool v10; // 0x455738
        result = function_455726((v10 ? -1 : 1) + a1, v1, v1);
    }
    // 0x455746
    return result;
}

// Address range: 0x45574c - 0x4557bf
int64_t function_45574c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3 + 97 & 0xffffffff; // 0x45574e
    *(int64_t *)(v1 - 8) = a1;
    *(int64_t *)(v1 - 16) = 9;
    int64_t v2; // 0x45574c
    unsigned char v3 = *(char *)&v2; // 0x45575a
    int64_t v4; // 0x45574c
    unsigned char v5 = *(char *)&v4; // 0x45575a
    bool v6; // 0x45574c
    int64_t v7 = v6 ? -1 : 1; // 0x45575a
    int64_t v8 = v7 + a2; // 0x45575a
    v4 = v7 + a1;
    v2 = v8;
    int64_t result; // 0x45574c
    if (v3 < v5) {
        // 0x4557b9
        return result;
    }
    char v9 = v3 - v5; // 0x45575a
    int64_t result2 = result & -0xff01 | (int64_t)&g10; // 0x45575d
    if (v9 < 0) {
        // 0x455786
        __asm_outsb((int16_t)a3, *(char *)v8);
        return result2;
    }
    if (((v9 ^ v3) & (v5 ^ v3)) >= 0) {
        // 0x455764
        return function_45571b();
    }
    int32_t * v10 = (int32_t *)(a4 & -0x10000 | (int64_t)">\r" | (result + a4) % 256); // 0x45578e
    *v10 = *v10 - 65;
    return result2;
}

// Address range: 0x45580c - 0x45581c
int64_t function_45580c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45580c
    int64_t result; // 0x45580c
    return result;
}

// Address range: 0x455878 - 0x455882
int64_t function_455878(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x455878
    int64_t v1; // 0x455878
    float80_t v2; // 0x455878
    *(int32_t *)(v1 - 121) = (int32_t)v2;
    return function_19ccd354();
}

// Address range: 0x45588e - 0x455891
int64_t function_45588e(void) {
    // 0x45588e
    int64_t result; // 0x45588e
    return result;
}

// Address range: 0x4558d8 - 0x4558d9
int64_t function_4558d8(void) {
    // 0x4558d8
    int64_t result; // 0x4558d8
    return result;
}

// Address range: 0x45590a - 0x45590b
int64_t function_45590a(void) {
    // 0x45590a
    int64_t result; // 0x45590a
    return result;
}

// Address range: 0x45590f - 0x45598a
int64_t function_45590f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45590f
    int64_t v1; // 0x45590f
    bool v2; // 0x45590f
    if (!v2) {
        v1 = function_45590a();
    }
    int64_t v3 = v1; // 0x45591b
    if (a4 == 0) {
        v3 = function_4558d8();
    }
    if (v2) {
        // 0x455980
        return function_80426d74();
    }
    // 0x455921
    *(int64_t *)0x987a88fa = a1;
    int32_t * v4 = (int32_t *)((v3 & 0xffffffff) + 17); // 0x455922
    *v4 = *v4 | -15;
    int64_t v5; // 0x45590f
    return v5 & 0xffffffff;
}

// Address range: 0x45598a - 0x455991
int64_t function_45598a(void) {
    // 0x45598a
    return function_4a54c352();
}

// Address range: 0x4559b2 - 0x4559b5
int64_t function_4559b2(void) {
    // 0x4559b2
    int64_t result; // 0x4559b2
    return result;
}

// Address range: 0x4559c2 - 0x4559e1
int64_t function_4559c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4559c2
    bool v1; // 0x4559c2
    uint32_t v2 = (int32_t)((v1 ? 0xffffffff : 1) + a1); // 0x4559c6
    int64_t v3; // 0x4559c2
    uint32_t v4 = *(int32_t *)(v3 - 7); // 0x4559c6
    uint32_t v5 = v2 - v4; // 0x4559c6
    int64_t v6 = v5; // 0x4559c9
    uint32_t v7 = *(int32_t *)(4 * a3 + v6); // 0x4559ca
    unsigned char v8 = (char)v5; // 0x4559cf
    bool v9 = v4 > v2 ? v8 + 65 + (char)(v4 > v2) <= v8 : v8 > 190; // 0x4559cf
    int32_t * v10 = (int32_t *)(v3 + 102); // 0x4559d7
    *v10 = *v10 + 1;
    char v11 = (char)a4 | (char)&g2; // 0x4559db
    int64_t v12; // 0x4559c2
    char v13 = *(char *)&v12; // 0x4559db
    char v14 = v9; // 0x4559db
    char v15 = v13 + v11 + v14; // 0x4559db
    char v16 = v15 + v14; // 0x4559db
    *(char *)(int64_t)v7 = (char)(v15 < 0 != ((v16 ^ v11) & (v16 ^ v13)) < 0);
    return v6 & 0xffff0000 | (int64_t)&g9;
}

// Address range: 0x455de3 - 0x455df9
int64_t function_455de3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x455de3
    int64_t v1; // 0x455de3
    __asm_out_133((int16_t)a3, (int32_t)v1);
    *(int32_t *)(a2 - 0x3bb48fd1) = (int32_t)a2;
    return v1 + 0xa8cb7c77 & 0xffffff1e | 225;
}

// Address range: 0x455dfa - 0x455e12
int64_t function_455dfa(int64_t a1, int64_t a2) {
    // 0x455dfa
    return function_2eb2a648();
}

// Address range: 0x455e57 - 0x455e5f
int64_t function_455e57(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x455e57
    return function_693060ce();
}

// Address range: 0x455e64 - 0x455e65
int64_t function_455e64(void) {
    // 0x455e64
    int64_t result; // 0x455e64
    return result;
}

// Address range: 0x455e89 - 0x455ec7
int64_t function_455e89(void) {
    // 0x455e89
    bool v1; // 0x455e89
    if (!v1) {
        // 0x455e9c
        return __asm_sti();
    }
    // 0x455ebe
    int64_t v2; // 0x455e89
    return (v2 | 87) + 0x7bb917c5 & 0xfffffffc;
}

// Address range: 0x455eca - 0x455ede
int64_t function_455eca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x455eca
    int64_t v1; // 0x455eca
    unsigned char v2 = (char)v1;
    *(char *)v1 = v2 / 2 | 128 * v2;
    float80_t v3; // 0x455eca
    *(int32_t *)v1 = (int32_t)v3;
    return a4 & 0x15430010 | (int64_t)((int32_t)&g1 & 0x15436f10);
}

// Address range: 0x455ef3 - 0x455efb
int64_t function_455ef3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x455ef3
    int64_t result; // 0x455ef3
    *(char *)(a3 + 0x324351ab) = (char)result;
    return result;
}

// Address range: 0x455f0c - 0x455f1f
int64_t function_455f0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x455f0c
    int64_t v1; // 0x455f0c
    bool v2; // 0x455f0c
    return v1 - (v2 ? 0x2150d0a2 : 0x2150d0a1) & 0xf6087d82 | 0x9f7827d;
}

// Address range: 0x455f3d - 0x455f3e
int64_t function_455f3d(void) {
    // 0x455f3d
    int64_t result; // 0x455f3d
    return result;
}

// Address range: 0x455f3e - 0x455f90
int64_t function_455f3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x455f3e
    bool v1; // 0x455f3e
    if (true == !v1) {
        // 0x455f52
        int64_t v2; // 0x455f3e
        return v2 & -256 | (int64_t)__asm_in_138(26);
    }
    // 0x455f40
    return function_455fad(a1);
}

// Address range: 0x455faa - 0x455fad
int64_t function_455faa(int64_t a1) {
    // 0x455faa
    int64_t result; // 0x455faa
    return result;
}

// Address range: 0x455fad - 0x455fb5
int64_t function_455fad(int64_t a1) {
    int32_t v1 = (int32_t)a1 ^ 43; // 0x455fad
    *(int32_t *)a1 = v1;
    int64_t v2; // 0x455fad
    if (v1 != 0) {
        v2 = function_455f3d();
    }
    // 0x455fb3
    return a1 & 0xffffffff & v2;
}

// Address range: 0x455fd6 - 0x455fd7
int64_t function_455fd6(void) {
    // 0x455fd6
    int64_t result; // 0x455fd6
    return result;
}

// Address range: 0x456003 - 0x456004
int64_t function_456003(void) {
    // 0x456003
    int64_t result; // 0x456003
    return result;
}

// Address range: 0x456008 - 0x45600a
int64_t function_456008(void) {
    // 0x456008
    return function_456003();
}

// Address range: 0x45607d - 0x456080
int64_t function_45607d(void) {
    // 0x45607d
    int64_t result; // 0x45607d
    return result;
}

// Address range: 0x4560de - 0x4560e1
int64_t function_4560de(void) {
    // 0x4560de
    int64_t result; // 0x4560de
    return result;
}

// Address range: 0x456102 - 0x456111
int64_t function_456102(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x456102
    return a3 & 0xffffffff;
}

// Address range: 0x456114 - 0x4561b7
int64_t function_456114(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x456114
    bool v1; // 0x456114
    int64_t v2 = v1 ? -1 : 1; // 0x456114
    int64_t v3 = v2 + a2; // 0x456114
    unknown_5b4cb355(v2 + a1, v3);
    uint64_t v4 = a3 + 92; // 0x456191
    *(char *)a4 = (char)(v4 / 256) + (char)a4;
    int32_t * v5 = (int32_t *)((v4 & 0xffffffff) + 0x36a58a40); // 0x45619d
    *v5 = *v5 | (int32_t)v3;
    int64_t v6; // 0x456114
    int64_t v7 = v6 & 0xee18a045 | 0x11e75fba; // 0x4561a7
    return v7 + 234 & 193 | v7 & 0xffffff00;
}

// Address range: 0x4561c8 - 0x4561cd
int64_t function_4561c8(int64_t a1) {
    // 0x4561c8
    int64_t result; // 0x4561c8
    return result;
}
