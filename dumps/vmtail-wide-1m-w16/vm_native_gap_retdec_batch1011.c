/*
 * Targeted RetDec C for native executable gap queue batch 1011.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x205234-0x205434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x205434-0x205634 rank=- name=- kind=- bytes=- uncovered=-
 *   0x205634-0x205834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x205834-0x205a34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x205a34-0x205c34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x205e34-0x206034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x206034-0x206234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3486d8-0x3488d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3488d8-0x348ad8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38a3a8-0x38a5a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38a5a8-0x38a7a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38a7a8-0x38a9a8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38a9a8-0x38aba8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38aba8-0x38ada8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38ada8-0x38afa8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38afa8-0x38b1a8 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
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

int64_t function_1ce95bca();
int64_t function_205234(void);
int64_t function_20523c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_205399(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2054da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_205620(void);
int64_t function_20563e(void);
int64_t function_20564b(int64_t a1);
int64_t function_20566b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_205691(int64_t a1);
int64_t function_2056f2(void);
int64_t function_205701(int64_t a1);
int64_t function_2057ab(void);
int64_t function_20582d(int64_t a1);
int64_t function_205835(int64_t a1);
int64_t function_205856(void);
int64_t function_20588d(void);
int64_t function_205892(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20589b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2058a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20590b(int64_t a1);
int64_t function_205917(void);
int64_t function_2059bf(void);
int64_t function_2059c1(void);
int64_t function_2059da(void);
int64_t function_2059e4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_205aba(void);
int64_t function_205ac7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_205ae4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_205b31(int64_t a1);
int64_t function_205b4b(int64_t a1);
int64_t function_205b60(void);
int64_t function_205b9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_205bbd(void);
int64_t function_205bd2(void);
int64_t function_205e34(void);
int64_t function_205e57(void);
int64_t function_205e61(int64_t a1, int64_t a2, int64_t a3);
int64_t function_205f11(int64_t a1);
int64_t function_205f3f(void);
int64_t function_205f5d(void);
int64_t function_205f79(int64_t a1, int64_t a2);
int64_t function_205fe1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20601a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_206035(int64_t a1);
int64_t function_206036(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_206054(int64_t a1);
int64_t function_20605a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2060eb(int64_t a1);
int64_t function_2060fc(void);
int64_t function_206108(void);
int64_t function_20613d(int64_t a1);
int64_t function_206143(int64_t a1);
int64_t function_206149(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2061fc(int64_t a1);
int64_t function_2088dd1();
int64_t function_2091acb();
int64_t function_209491();
int64_t function_3095bee3();
int64_t function_3486d8(void);
int64_t function_348788(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3487c2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3487df(int64_t a1);
int64_t function_348807(int64_t a1);
int64_t function_348815(void);
int64_t function_348819(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34881b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_348890(void);
int64_t function_348897(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3488ea(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_34890b(void);
int64_t function_34891f(int64_t a1);
int64_t function_348924(int64_t a1);
int64_t function_348a1f(void);
int64_t function_348a93(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_348abf(void);
int64_t function_38a360();
int64_t function_38a376();
int64_t function_38a3a8(int64_t a1, int64_t a2);
int64_t function_38a3c8(int64_t a1);
int64_t function_38a430(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int16_t a5);
int64_t function_38a4c8(void);
int64_t function_38a4c9(void);
int64_t function_38a4e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38a4f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38a52b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38a585(int64_t a1);
int64_t function_38a5e7(void);
int64_t function_38a62e(int64_t a1);
int64_t function_38a65d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38a66b(int64_t a1);
int64_t function_38a67c(void);
int64_t function_38a69b(int64_t a1);
int64_t function_38a6de(void);
int64_t function_38a720(void);
int64_t function_38a753(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38a79c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38a7e7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38a816(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38a840(int64_t a1);
int64_t function_38a85a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38a884(void);
int64_t function_38a8b6(int64_t a1);
int64_t function_38a94b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38aa21(int64_t a1);
int64_t function_38aa9e(void);
int64_t function_38ac19(int64_t a1);
int64_t function_38ac1d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_38ac87(void);
int64_t function_38ac97(int64_t a1, int64_t a2);
int64_t function_38accd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38ad46(int64_t a1);
int64_t function_38ad96(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38adf8(int64_t a1);
int64_t function_38ae00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_38ae8b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38ae91(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38ae93(void);
int64_t function_38aebe(int64_t a1);
int64_t function_38aedf(void);
int64_t function_38af08(int64_t a1);
int64_t function_38af11(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38afaf(int64_t a1, int64_t a2);
int64_t function_38afd6(void);
int64_t function_38aff2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38b042(int64_t a1);
int64_t function_38b0f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38b139(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38b147(int64_t a1);
int64_t function_7ffc85c();
int64_t function_9c05cba();
int64_t function_caf2a();
int64_t function_ffffffff8260bf51();
int64_t function_ffffffffa40ca917();
int64_t function_ffffffffb07da91c();
int64_t unknown_136e67e4();
int64_t unknown_143cbea();
int64_t unknown_15d5ebd();
int64_t unknown_1a1870e7();
int64_t unknown_2565232();
int64_t unknown_333f545a();
int64_t unknown_393e8fad();
int64_t unknown_3aa50207();
int64_t unknown_3acae065();
int64_t unknown_3db41dac();
int64_t unknown_47e570b();
int64_t unknown_480ad1d6();
int64_t unknown_55eff7b0();
int64_t unknown_79a5b8b8();
int64_t unknown_7f34fad();
int64_t unknown_807ad39();
int64_t unknown_8259fcb();
int64_t unknown_ffffffff8038ea13();
int64_t unknown_ffffffff82c02239();
int64_t unknown_ffffffff83e32421();
int64_t unknown_ffffffffaf35d2bc();
int64_t unknown_ffffffffafbd9f9e();
int64_t unknown_ffffffffbf9b6124();
int64_t unknown_ffffffffc4582866();
int64_t unknown_ffffffffc8359688();
int64_t unknown_fffffffff6199133();

// Address range: 0x205234 - 0x20523c
int64_t function_205234(void) {
    // 0x205234
    int64_t v1; // 0x205234
    return function_caf2a(v1, v1, v1, v1, v1, v1);
}

// Address range: 0x20523c - 0x205399
int64_t function_20523c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x20523c
    int64_t v1; // 0x20523c
    return function_caf2a(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x205399 - 0x2054da
int64_t function_205399(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x205399
    int64_t v1; // 0x205399
    return function_caf2a(a1, a2, a3, a4, a5, v1);
}

// Address range: 0x2054da - 0x205620
int64_t function_2054da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2054da
    int64_t v1; // bp-32, 0x2054da
    int64_t v2 = (int64_t)&v1; // 0x20559c
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2055a4
    *v3 = 0x55f310c6;
    *(int64_t *)(v2 - 24) = a7;
    *(int64_t *)(v2 + 8) = *v3;
    *v3 = a5;
    *(int64_t *)(v2 + 32) = v1;
    *(int64_t *)(v2 - 16) = v2;
    *v3 = v2;
    v1 = v2 + 16;
    return function_caf2a(a1, 323, a3, a4, a5, a6);
}

// Address range: 0x205620 - 0x205625
int64_t function_205620(void) {
    // 0x205620
    return function_209491();
}

// Address range: 0x20563e - 0x205641
int64_t function_20563e(void) {
    // 0x20563e
    int64_t result; // 0x20563e
    return result;
}

// Address range: 0x20564b - 0x20564e
int64_t function_20564b(int64_t a1) {
    // 0x20564b
    int64_t result; // 0x20564b
    return result;
}

// Address range: 0x20566b - 0x205691
int64_t function_20566b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20566b
    int64_t result; // 0x20566b
    *(char *)0x4e0a2201e8947066 = (char)result;
    return result;
}

// Address range: 0x205691 - 0x205693
int64_t function_205691(int64_t a1) {
    // 0x205691
    int64_t result; // 0x205691
    return result;
}

// Address range: 0x2056f2 - 0x2056f6
int64_t function_2056f2(void) {
    // 0x2056f2
    int64_t result; // 0x2056f2
    return result;
}

// Address range: 0x205701 - 0x205702
int64_t function_205701(int64_t a1) {
    // 0x205701
    int64_t result; // 0x205701
    return result;
}

// Address range: 0x2057ab - 0x2057ac
int64_t function_2057ab(void) {
    // 0x2057ab
    int64_t result; // 0x2057ab
    return result;
}

// Address range: 0x20582d - 0x205835
int64_t function_20582d(int64_t a1) {
    // 0x20582d
    return unknown_fffffffff6199133(a1);
}

// Address range: 0x205835 - 0x20583d
int64_t function_205835(int64_t a1) {
    // 0x205835
    int64_t result; // 0x205835
    return result;
}

// Address range: 0x205856 - 0x205857
int64_t function_205856(void) {
    // 0x205856
    int64_t result; // 0x205856
    return result;
}

// Address range: 0x20588d - 0x20588e
int64_t function_20588d(void) {
    // 0x20588d
    int64_t result; // 0x20588d
    return result;
}

// Address range: 0x205892 - 0x20589b
int64_t function_205892(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x205892
    float80_t v1; // 0x205892
    *(int16_t *)(a4 + 0x1e8b5af) = (int16_t)v1;
    int64_t result; // 0x205892
    bool v2; // 0x205892
    if (a4 != 1 == v2) {
        result = function_20588d();
    }
    // 0x20589a
    return result;
}

// Address range: 0x20589b - 0x2058a3
int64_t function_20589b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20589b
    return function_205856();
}

// Address range: 0x2058a3 - 0x2058c1
int64_t function_2058a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 100); // 0x2058a4
    int32_t v2 = a4; // 0x2058a4
    *v1 = *v1 + v2;
    unknown_7f34fad();
    int32_t * v3 = (int32_t *)(a3 + 2); // 0x2058ac
    *v3 = *v3 + v2;
    *(int32_t *)(a1 - 0x6e82131e) = v2;
    return unknown_ffffffffaf35d2bc() ^ 128;
}

// Address range: 0x20590b - 0x20590e
int64_t function_20590b(int64_t a1) {
    // 0x20590b
    int64_t result; // 0x20590b
    return result;
}

// Address range: 0x205917 - 0x20591c
int64_t function_205917(void) {
    // 0x205917
    return function_2091acb();
}

// Address range: 0x2059bf - 0x2059c0
int64_t function_2059bf(void) {
    // 0x2059bf
    int64_t result; // 0x2059bf
    return result;
}

// Address range: 0x2059c1 - 0x2059c6
int64_t function_2059c1(void) {
    // 0x2059c1
    return function_7ffc85c();
}

// Address range: 0x2059da - 0x2059db
int64_t function_2059da(void) {
    // 0x2059da
    int64_t result; // 0x2059da
    return result;
}

// Address range: 0x2059e4 - 0x205a5c
int64_t function_2059e4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2059e4
    unknown_143cbea();
    int64_t v1; // 0x2059e4
    bool v2; // 0x2059e4
    if (v2) {
        // 0x205a21
        __asm_wait();
        *(int32_t *)0xbaf96ac4 = *(int32_t *)0xbaf96ac4 + (int32_t)a4;
        __asm_int(78);
        unknown_807ad39();
        char v3 = *(char *)(v1 - 0x17d1b953); // 0x205a39
        int32_t * v4 = (int32_t *)(a2 - 0x3318077f); // 0x205a3f
        int32_t v5 = *v4; // 0x205a3f
        *v4 = v5 + (int32_t)(a4 & 0xffffff00 | (int64_t)((char)a4 - v3));
        *(int32_t *)-0x32aac63 = *(int32_t *)-0x32aac63 - 0x17985f15;
        *(int32_t *)0xe867a0d7 = -0x17985f29;
        *(char *)0xe867a0d7 = *(char *)0xe867a0d7 - (char)(a4 / 256);
        return 0xe867a0d7;
    }
    if (!v2) {
        function_2059da();
    }
    int32_t * v6 = (int32_t *)(4 * v1 + 0x76f60923); // 0x2059f2
    *v6 = *v6 + (int32_t)v1;
    int64_t v7 = (int64_t)(*(int32_t *)(a3 - 0x1750ca7a) ^ 0x76f60923); // 0x2059f5
    int32_t * v8 = (int32_t *)(a3 + 0x2d9f0026); // 0x2059fb
    *v8 = *v8 + (int32_t)v1;
    int32_t * v9 = (int32_t *)((int64_t)__asm_in(-105) - 0x5c24fffd); // 0x205a08
    *v9 = *v9 + (int32_t)a3;
    *(int64_t *)(v7 - 8) = v7;
    return function_2059bf();
}

// Address range: 0x205aba - 0x205ac4
int64_t function_205aba(void) {
    // 0x205aba
    int64_t result; // 0x205aba
    *(int32_t *)-0x506fe17ffd75dc9 = (int32_t)result;
    return result;
}

// Address range: 0x205ac7 - 0x205ae4
int64_t function_205ac7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x205ac7
    int64_t v1; // 0x205ac7
    *(char *)a1 = (char)(v1 ^ a4);
    unknown_480ad1d6();
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x205ad5
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x205ac7
    __asm_rcl(*(char *)&v3);
    return __asm_hlt(a1);
}

// Address range: 0x205ae4 - 0x205aeb
int64_t function_205ae4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 0x748b4bab); // 0x205ae4
    int64_t result; // 0x205ae4
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x205b31 - 0x205b39
int64_t function_205b31(int64_t a1) {
    // 0x205b31
    return function_1ce95bca();
}

// Address range: 0x205b4b - 0x205b4e
int64_t function_205b4b(int64_t a1) {
    // 0x205b4b
    int64_t result; // 0x205b4b
    return result;
}

// Address range: 0x205b60 - 0x205b62
int64_t function_205b60(void) {
    // 0x205b60
    int64_t result; // 0x205b60
    return result;
}

// Address range: 0x205b9f - 0x205ba6
int64_t function_205b9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x205b9f
    if (v1 != 0) {
        char * v2 = (char *)(a3 + 0x2ebf0026); // 0x205b9f
        unsigned char v3 = *v2; // 0x205b9f
        *v2 = v3 >> 8 - v1 | v3 << v1;
    }
    int64_t result; // 0x205b9f
    return result;
}

// Address range: 0x205bbd - 0x205bc0
int64_t function_205bbd(void) {
    // 0x205bbd
    int64_t result; // 0x205bbd
    return result;
}

// Address range: 0x205bd2 - 0x205bd5
int64_t function_205bd2(void) {
    // 0x205bd2
    int64_t result; // 0x205bd2
    return result;
}

// Address range: 0x205e34 - 0x205e35
int64_t function_205e34(void) {
    // 0x205e34
    int64_t result; // 0x205e34
    return result;
}

// Address range: 0x205e57 - 0x205e58
int64_t function_205e57(void) {
    // 0x205e57
    int64_t result; // 0x205e57
    return result;
}

// Address range: 0x205e61 - 0x205ecf
int64_t function_205e61(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    char * v2 = (char *)(a2 + 0x2e01e838); // 0x205e61
    *v2 = *v2 - 118;
    int64_t v3 = 0x3b0f9500; // bp-8, 0x205eaf
    int64_t v4; // 0x205e61
    int32_t * v5 = (int32_t *)(v4 + 14); // 0x205eb4
    uint32_t v6 = *v5; // 0x205eb4
    uint32_t v7 = v6 + (int32_t)(int64_t)&v3; // 0x205eb4
    *v5 = v7;
    uint64_t v8 = 0x100000000 * v1 | unknown_15d5ebd() & 0xffffffff; // 0x205ebc
    uint64_t v9 = (int64_t)*(int32_t *)&v1; // 0x205ebc
    uint64_t v10 = v8 / v9; // 0x205ebc
    int64_t v11 = v8 % v9; // 0x205ebc
    v1 = v11;
    char * v12 = (char *)v11; // 0x205ebe
    char v13 = *v12; // 0x205ebe
    char v14 = v7 < v6; // 0x205ebe
    char v15 = (char)(v10 / 256) + v14; // 0x205ebe
    char v16 = v13 - v15; // 0x205ebe
    *v12 = v16;
    int64_t result = v10 & 0xffffffff; // 0x205ec0
    if (((v16 - v14 ^ v13) & (v13 ^ v15)) < 0) {
        result = function_205e57();
    }
    // 0x205ec2
    float80_t v17; // 0x205e61
    *(float80_t *)(result + (8 * v4 | 3)) = __asm_fbstp(v17);
    int32_t * v18 = (int32_t *)(v4 - 0x7a443b39); // 0x205ec9
    *v18 = *v18 + (int32_t)result;
    return result;
}

// Address range: 0x205f11 - 0x205f1a
int64_t function_205f11(int64_t a1) {
    // 0x205f11
    int64_t result; // 0x205f11
    char * v1 = (char *)(result + 0x4c01e87d); // 0x205f11
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x205f3f - 0x205f40
int64_t function_205f3f(void) {
    // 0x205f3f
    int64_t result; // 0x205f3f
    return result;
}

// Address range: 0x205f5d - 0x205f63
int64_t function_205f5d(void) {
    // 0x205f5d
    return function_2088dd1();
}

// Address range: 0x205f79 - 0x205fcb
int64_t function_205f79(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffc8359688(); // 0x205f88
    bool v3; // 0x205f79
    if (v3) {
        v2 = function_205f3f();
    }
    if (!v3) {
        int16_t v4 = 0x4000 * (int16_t)(bool)v3 | 2048 * (int16_t)v3 | 1024 * (int16_t)v3 | 512 * (int16_t)v3 | 256 * (int16_t)v3 | 128 * (int16_t)v3 | 64 * (int16_t)v3 | 16 * (int16_t)v3 | (int16_t)v3 | 4 * (int16_t)v3 | 2; // 0x205f87
        __asm_out(-125, (int32_t)v2);
        char * v5 = (char *)v2; // 0x205fae
        *v5 = (*v5 & (char)v2) - 24;
        int32_t * v6 = (int32_t *)((int64_t)v4 + 1); // 0x205fb3
        int64_t v7; // 0x205f79
        *v6 = *v6 + (int32_t)(int64_t)&v7;
        *(int32_t *)a1 = __asm_insd(v4);
        int64_t result = unknown_8259fcb(); // 0x205fc5
        __asm_outsb(v4, *(char *)&v1);
        return result;
    }
    // 0x205f91
    *(int32_t *)a1 = (int32_t)a2;
    int64_t v8 = v3 ? -4 : 4; // 0x205f91
    unknown_ffffffffafbd9f9e(v8 + a1, v1 + v8);
    while (true) {
        // continue -> 0x205f9d
    }
}

// Address range: 0x205fe1 - 0x205fe8
int64_t function_205fe1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x205fe1
    return unknown_1a1870e7(a1, a2, a3);
}

// Address range: 0x20601a - 0x206034
int64_t function_20601a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20601a
    int64_t v1; // 0x20601a
    int32_t * v2 = (int32_t *)(v1 - 60); // 0x20601c
    *v2 = *v2 + 0xf7c01e8 + (int32_t)(-1 - (char)a3 < (char)v1);
    return unknown_2565232();
}

// Address range: 0x206035 - 0x206036
int64_t function_206035(int64_t a1) {
    // 0x206035
    int64_t result; // 0x206035
    return result;
}

// Address range: 0x206036 - 0x206053
int64_t function_206036(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 + a1; // 0x20603c
    uint32_t v2 = (int32_t)v1 % 32; // 0x206041
    int64_t v3; // 0x206036
    if (v2 != 0) {
        int32_t * v4 = (int32_t *)(v3 - 116); // 0x206041
        *v4 = *v4 << v2;
    }
    __asm_in_133((int16_t)v3);
    *(int32_t *)(a5 + 0x7a01e87a) = (int32_t)v3;
    bool v5; // 0x206036
    return function_20605a(a1, (v5 ? -1 : 1) + a2, v3 & 0xffffffff, v1 & 0xffffffff);
}

// Address range: 0x206054 - 0x20605a
int64_t function_206054(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 0x6e0a82cf); // 0x206054
    int64_t result; // 0x206054
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x20605a - 0x2060b9
int64_t function_20605a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffc4582866(); // 0x20605d
    int64_t v2 = a4 & 0xffffffff; // 0x206062
    char * v3 = (char *)(a3 + 54 + v2); // 0x206063
    int64_t v4; // 0x20605a
    *v3 = *v3 + (char)(v4 / 256);
    int32_t * v5 = (int32_t *)(v2 - 81); // 0x206067
    *v5 = *v5 ^ 0x78fe01e8;
    int32_t * v6 = (int32_t *)(v4 + 0x1e81855); // 0x206083
    *v6 = *v6 | 104;
    int64_t result = __asm_in(121); // 0x20608e
    char * v7 = (char *)(a2 + 0x26a4449b); // 0x206090
    char v8 = *v7 + (char)v1; // 0x206090
    *v7 = v8;
    if ((v1 & 0xffffffff) == 1 || v8 == 0) {
        int32_t * v9 = (int32_t *)(v4 - 108); // 0x206098
        *v9 = *v9 + (int32_t)v4;
        uint64_t v10 = unknown_3db41dac() + 2 * v4; // 0x2060ad
        int32_t * v11 = (int32_t *)(a3 - 47); // 0x2060af
        uint32_t v12 = *v11; // 0x2060af
        uint32_t v13 = v12 + (int32_t)a3; // 0x2060af
        *v11 = v13;
        char * v14 = (char *)((result & 0xffffffb8) + 0x1e09d36c); // 0x2060b2
        *v14 = *v14 + (char)(v10 / 256) + (char)(v13 < v12);
        return v10 & 0xffffffff;
    }
    // 0x206080
    return result;
}

// Address range: 0x2060eb - 0x2060f9
int64_t function_2060eb(int64_t a1) {
    // 0x2060eb
    return (int64_t)*(int32_t *)-0x178382f4fa17a0ee;
}

// Address range: 0x2060fc - 0x206101
int64_t function_2060fc(void) {
    // 0x2060fc
    return function_ffffffff8260bf51();
}

// Address range: 0x206108 - 0x206109
int64_t function_206108(void) {
    // 0x206108
    int64_t result; // 0x206108
    return result;
}

// Address range: 0x20613d - 0x20613f
int64_t function_20613d(int64_t a1) {
    // 0x20613d
    int64_t result; // 0x20613d
    return result;
}

// Address range: 0x206143 - 0x206144
int64_t function_206143(int64_t a1) {
    // 0x206143
    int64_t result; // 0x206143
    return result;
}

// Address range: 0x206149 - 0x2061f9
int64_t function_206149(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x206149
    int64_t v1; // 0x206149
    uint64_t v2 = v1;
    uint64_t v3 = v1;
    int64_t v4 = v3 & -256 | (int64_t)*(char *)(v3 % 256 + v2); // 0x206149
    __asm_out_134((int16_t)a3, (int32_t)v4);
    int64_t v5 = v4; // 0x20614b
    bool v6; // 0x206149
    if (!v6) {
        v5 = function_206108();
    }
    int64_t v7 = v5;
    int64_t v8 = 256 * (int64_t)*(char *)(4 * v7 + v2) | v7 & -0xff01; // 0x20614d
    uint32_t v9 = *(int32_t *)(v8 - 1) + (int32_t)a3; // 0x206150
    if (v9 != 0) {
        // 0x2061ad
        __asm_in_133((int16_t)v9);
        int64_t v10 = __asm_int3(); // 0x2061ae
        char * v11 = (char *)(v10 + 0x9f8c71f); // 0x2061af
        *v11 = *v11 + (char)(v2 / 256);
        return (v10 + a4) % 256 | v10 & -256;
    }
    // 0x206156
    *(char *)-0x671c22a3 = *(char *)-0x671c22a3 + (char)(v2 / 256);
    unsigned char v12 = (char)(v9 / 256); // 0x206162
    char v13 = *(char *)v8; // 0x206162
    unsigned char v14 = v13 + (char)(-1 - (char)(a4 / 256) < (char)v2); // 0x206162
    bool v15 = -1 - (char)(a4 / 256) < (char)v2 ? v14 != -1 | v12 + (char)(-1 - (char)(a4 / 256) < (char)v2) - v14 > v12 : v14 > v12; // 0x206162
    uint32_t v16 = __asm_in(-11); // 0x206164
    return ((int64_t)v16 + 252 + (int64_t)v15) % 256 | (int64_t)(v16 & -256);
}

// Address range: 0x2061fc - 0x20620b
int64_t function_2061fc(int64_t a1) {
    // 0x2061fc
    int64_t v1; // 0x2061fc
    return v1 & 0x38af3b98 | 0xc750c467;
}

// Address range: 0x3486d8 - 0x3486d9
int64_t function_3486d8(void) {
    // 0x3486d8
    int64_t result; // 0x3486d8
    return result;
}

// Address range: 0x348788 - 0x34879f
int64_t function_348788(int64_t a1, int64_t a2, int64_t a3) {
    // 0x348788
    int64_t result; // 0x348788
    return result;
}

// Address range: 0x3487c2 - 0x3487c9
int64_t function_3487c2(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x3cf6a5f8); // 0x3487c2
    int64_t result; // 0x3487c2
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3487df - 0x3487e0
int64_t function_3487df(int64_t a1) {
    // 0x3487df
    int64_t result; // 0x3487df
    return result;
}

// Address range: 0x348807 - 0x348808
int64_t function_348807(int64_t a1) {
    // 0x348807
    int64_t result; // 0x348807
    return result;
}

// Address range: 0x348815 - 0x348817
int64_t function_348815(void) {
    // 0x348815
    int64_t v1; // 0x348815
    return function_34881b(v1, v1, v1);
}

// Address range: 0x348819 - 0x34881b
int64_t function_348819(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x348819
    int64_t result; // 0x348819
    return result;
}

// Address range: 0x34881b - 0x34882b
int64_t function_34881b(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a3 - 0x9ff97de); // 0x34881b
    *(char *)-0x693e1ed6 = 37 * (char)v1 + *(char *)-0x693e1ed6;
    int64_t result; // 0x34881b
    return result;
}

// Address range: 0x348890 - 0x348891
int64_t function_348890(void) {
    // 0x348890
    int64_t result; // 0x348890
    return result;
}

// Address range: 0x348897 - 0x3488b5
int64_t function_348897(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x348897
    int64_t v1; // 0x348897
    uint32_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0x348897
    int64_t result = v2; // 0x348897
    bool v3; // 0x348897
    if (a4 == 1 || v3) {
        // 0x34889c
        return result;
    }
    char * v4 = (char *)(v1 + 0x5d000000); // 0x3488a0
    *v4 = *v4 & 5;
    char * v5 = (char *)(result + 0x88800d7); // 0x3488a8
    *v5 = *v5 + (char)v2;
    return function_9c05cba();
}

// Address range: 0x3488ea - 0x3488f8
int64_t function_3488ea(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3488ea
    int64_t result; // 0x3488ea
    char * v1 = (char *)(result + 35); // 0x3488ea
    *v1 = *v1 ^ (char)(a4 / 256);
    __asm_out_135(49, (char)result);
    uint32_t v2 = (int32_t)result;
    *(int32_t *)result = v2 / 8 | 0x20000000 * v2;
    int64_t v3; // 0x3488ea
    *(int32_t *)a1 = *(int32_t *)&v3 + v2;
    return result;
}

// Address range: 0x34890b - 0x34890d
int64_t function_34890b(void) {
    // 0x34890b
    return function_348890();
}

// Address range: 0x34891f - 0x348920
int64_t function_34891f(int64_t a1) {
    // 0x34891f
    int64_t result; // 0x34891f
    return result;
}

// Address range: 0x348924 - 0x348925
int64_t function_348924(int64_t a1) {
    // 0x348924
    int64_t result; // 0x348924
    return result;
}

// Address range: 0x348a1f - 0x348a20
int64_t function_348a1f(void) {
    // 0x348a1f
    int64_t result; // 0x348a1f
    return result;
}

// Address range: 0x348a93 - 0x348a9b
int64_t function_348a93(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x348a93
    return unknown_ffffffffbf9b6124(a1, a2, a3, a4);
}

// Address range: 0x348abf - 0x348ac0
int64_t function_348abf(void) {
    // 0x348abf
    int64_t result; // 0x348abf
    return result;
}

// Address range: 0x38a3a8 - 0x38a3bf
int64_t function_38a3a8(int64_t a1, int64_t a2) {
    // 0x38a3a8
    unknown_55eff7b0();
    int32_t * v1 = (int32_t *)(a1 + 2); // 0x38a3af
    *v1 = *v1 - 0x6a0eafe1;
    char v2 = *(char *)0x30150fbd; // 0x38a3b6
    int64_t v3; // 0x38a3a8
    *(char *)0x30150fbd = v2 + (char)((uint64_t)v3 / 256);
    return function_38a376();
}

// Address range: 0x38a3c8 - 0x38a3db
int64_t function_38a3c8(int64_t a1) {
    // 0x38a3c8
    int64_t v1; // 0x38a3c8
    return function_38a360((int32_t)v1 + (int32_t)a1);
}

// Address range: 0x38a430 - 0x38a4c8
int64_t function_38a430(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int16_t a5) {
    // 0x38a430
    int64_t v1; // 0x38a430
    int64_t v2 = v1;
    uint64_t v3 = v1;
    int64_t v4 = a2 + a1 & 0xffffffff; // 0x38a430
    bool v5; // 0x38a430
    int64_t v6 = (v5 ? -1 : 1) + v4; // 0x38a432
    if ((char)v1 - *(char *)v4 >= 0) {
        // 0x38a435
        __asm_hlt(v6);
        *(int32_t *)v3 = (int32_t)v3 + 0x68f7df;
        return (v2 | a4 / 256) % 256 | v2 & 0xffffff00;
    }
    char * v7 = (char *)(v6 - 106); // 0x38a464
    unsigned char v8 = *v7; // 0x38a464
    unsigned char v9 = (char)v3; // 0x38a464
    char v10 = v8 + v9; // 0x38a464
    *v7 = v10;
    if (llvm_ctpop_i8((char)a4 - (char)(a3 / 256)) % 2 != 0) {
        // 0x38a471
        return v1 & -256 | (int64_t)*(char *)0x13d00347f821aa1;
    }
    char v11 = *(char *)(8 * v1 + a2); // 0x38a468
    int32_t v12 = 0x4000 * (int32_t)v5 | 1024 * (int32_t)v5 | 512 * (int32_t)v5 | 256 * (int32_t)v5 | (int32_t)(v10 < v8) | 64 * (int32_t)(v10 == 0) | 128 * (int32_t)(v10 < 0) | 16 * (int32_t)(v8 % 16 + v9 % 16 > 15) | 4 * (int32_t)(llvm_ctpop_i8(v10) % 2 == 0) | 2048 * (int32_t)(((v10 ^ v8) & (v10 ^ v9)) < 0) | 2; // 0x38a467
    char * v13 = (char *)((a3 & -256 | (int64_t)(v11 ^ (char)a3)) - 0x56b0fbe); // 0x38a4ac
    *v13 = *v13 | (char)(v3 / 256);
    int64_t result = unknown_79a5b8b8(); // 0x38a4b2
    if (a4 == 1 || (int32_t)result == -0x648a934c) {
        int32_t * v14 = (int32_t *)((int64_t)v12 + 0x3d01e8f8); // 0x38a4be
        *v14 = *v14 + (int32_t)v3;
        return result;
    }
    int32_t * v15 = (int32_t *)v6; // 0x38a4a6
    *v15 = *v15 + v12;
    return result;
}

// Address range: 0x38a4c8 - 0x38a4c9
int64_t function_38a4c8(void) {
    // 0x38a4c8
    int64_t result; // 0x38a4c8
    return result;
}

// Address range: 0x38a4c9 - 0x38a4dc
int64_t function_38a4c9(void) {
    // 0x38a4c9
    int64_t result; // 0x38a4c9
    *(int32_t *)0x1e8e8995c03d83b = (int32_t)result;
    *(char *)0x160328d3 = *(char *)0x160328d3 | 69;
    return result;
}

// Address range: 0x38a4e1 - 0x38a4e8
int64_t function_38a4e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38a4e1
    int64_t result; // 0x38a4e1
    return result;
}

// Address range: 0x38a4f9 - 0x38a52b
int64_t function_38a4f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38a4f9
    int64_t v1; // 0x38a4f9
    int32_t * v2 = (int32_t *)(v1 + 118); // 0x38a4fb
    *v2 = *v2 + (int32_t)v1;
    __asm_in_136((int16_t)a3);
    unknown_47e570b();
    unknown_ffffffff83e32421();
    int32_t * v3 = (int32_t *)(v1 + 0x1e889a7); // 0x38a522
    *v3 = (int32_t)a3 & -0xff01 | (int32_t)&g6 | *v3;
    int64_t v4; // 0x38a4f9
    return (int64_t)&v4;
}

// Address range: 0x38a52b - 0x38a576
int64_t function_38a52b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38a52b
    int64_t v1; // 0x38a52b
    bool v2; // 0x38a52b
    if (true != !v2) {
        if (v2) {
            // 0x38a533
            return unknown_ffffffff82c02239();
        }
        // 0x38a551
        __asm_in_137(-8);
        int64_t v3 = unknown_333f545a(); // 0x38a553
        __asm_hlt(a1);
        int64_t v4 = unknown_3acae065(); // 0x38a55f
        int64_t v5 = v4 & 139 | 116; // 0x38a564
        int64_t v6 = v5 | v4 & -256; // 0x38a564
        __asm_out_135(-24, (char)v5);
        int32_t * v7 = (int32_t *)v6; // 0x38a569
        *v7 = (int32_t)v3 - (int32_t)a5 + *v7;
        v1 = v6;
    }
    // 0x38a56b
    __asm_out_135(-14, (char)v1);
    int64_t v8 = __asm_iretd(); // 0x38a56d
    char * v9 = (char *)v8; // 0x38a570
    *v9 = *v9 + 24;
    return __readfsdword(v8) + (int32_t)v8;
}

// Address range: 0x38a585 - 0x38a586
int64_t function_38a585(int64_t a1) {
    // 0x38a585
    int64_t result; // 0x38a585
    return result;
}

// Address range: 0x38a5e7 - 0x38a5e8
int64_t function_38a5e7(void) {
    // 0x38a5e7
    int64_t result; // 0x38a5e7
    return result;
}

// Address range: 0x38a62e - 0x38a631
int64_t function_38a62e(int64_t a1) {
    // 0x38a62e
    int64_t result; // 0x38a62e
    return result;
}

// Address range: 0x38a65d - 0x38a668
int64_t function_38a65d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38a65d
    bool v1; // 0x38a65d
    if (!v1) {
        function_38a5e7();
    }
    // 0x38a65f
    return function_38a6de();
}

// Address range: 0x38a66b - 0x38a66c
int64_t function_38a66b(int64_t a1) {
    // 0x38a66b
    int64_t result; // 0x38a66b
    return result;
}

// Address range: 0x38a67c - 0x38a67e
int64_t function_38a67c(void) {
    // 0x38a67c
    return function_38a67c();
}

// Address range: 0x38a69b - 0x38a6a0
int64_t function_38a69b(int64_t a1) {
    // 0x38a69b
    int64_t result; // 0x38a69b
    *(int32_t *)a1 = (int32_t)(result & result);
    return result;
}

// Address range: 0x38a6de - 0x38a6eb
int64_t function_38a6de(void) {
    // 0x38a6de
    int64_t v1; // bp-8, 0x38a6de
    return (int64_t)&v1;
}

// Address range: 0x38a720 - 0x38a721
int64_t function_38a720(void) {
    // 0x38a720
    int64_t result; // 0x38a720
    return result;
}

// Address range: 0x38a753 - 0x38a78d
int64_t function_38a753(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int32_t * v2 = (int32_t *)(a2 + 0x270c9a8f); // 0x38a755
    int32_t v3 = *v2; // 0x38a755
    *v2 = -v3;
    *(char *)a1 = *(char *)&v1 >> 1;
    int64_t v4 = a4 & 0xffffff00;
    int64_t v5 = v4 | 165; // 0x38a765
    int32_t * v6 = (int32_t *)v5; // 0x38a766
    *v6 = *v6 & (int32_t)v5;
    uint64_t v7 = v4 | (int64_t)__asm_in_137(0); // 0x38a772
    int32_t v8 = v7; // 0x38a776
    int32_t v9 = *(int32_t *)v7; // 0x38a776
    int32_t v10 = *(char *)v7 < (char)(v7 / 256); // 0x38a776
    int32_t v11 = v9 + v8 + v10; // 0x38a776
    int32_t v12 = v11 + v10; // 0x38a776
    int64_t v13 = v11; // 0x38a778
    if (v11 < 0 != ((v12 ^ v8) & (v12 ^ v9)) < 0) {
        v13 = function_38a720();
    }
    // 0x38a77a
    int64_t v14; // 0x38a753
    uint32_t v15 = (int32_t)(v14 - (v3 == 0 ? 4 : 5)) % 32; // 0x38a785
    if (v15 != 0) {
        int32_t * v16 = (int32_t *)(v13 ^ 157); // 0x38a785
        *v16 = *v16 << v15;
    }
    return v13 ^ 113;
}

// Address range: 0x38a79c - 0x38a7e6
int64_t function_38a79c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = unknown_393e8fad(); // 0x38a7a7
    char v3 = (char)a2 - (char)a1; // 0x38a7ac
    bool v4; // 0x38a79c
    int64_t v5 = v4 ? -1 : 1; // 0x38a7ac
    int64_t v6 = v5 + a1; // 0x38a7ac
    int64_t result; // 0x38a79c
    int64_t v7; // 0x38a79c
    if (v3 >= 0) {
        // 0x38a7db
        result = v2;
        if (a4 != 1 != (v3 == 0)) {
            int64_t v8 = unknown_136e67e4(v6, v5 + a2); // 0x38a7de
            return (v8 & 0xff00) + v7 & 0xff00 | v8 & -0xff01;
        }
    } else {
        int32_t v9 = __asm_in(110); // 0x38a7af
        int64_t v10 = v9; // 0x38a7af
        int32_t * v11 = (int32_t *)v10; // 0x38a7b3
        uint32_t v12 = *v11; // 0x38a7b3
        uint32_t v13 = v12 + v9; // 0x38a7b3
        *v11 = v13;
        result = v10;
        if (v13 >= v12 && v13 != 0) {
            uint64_t v14 = 256 * (int64_t)v9 & 0xff00 ^ a4; // 0x38a7b1
            char * v15 = (char *)(v10 + 0x392701e8); // 0x38a7b9
            *v15 = *v15 + (char)(v14 / 256);
            int64_t v16 = v14 & 0xffffffff; // 0x38a7c1
            char * v17 = (char *)(v16 + 0x1e83a72); // 0x38a7c2
            *v17 = *v17 + (char)a4;
            int32_t * v18 = (int32_t *)(v7 + 10); // 0x38a7c8
            uint32_t v19 = *v18; // 0x38a7c8
            uint32_t v20 = v19 + (int32_t)v6; // 0x38a7c8
            *v18 = v20;
            int32_t v21 = *(int32_t *)&v1; // 0x38a7cb
            *(int32_t *)v1 = v21 + (int32_t)v7 + (int32_t)(v20 < v19);
            result = v16;
        }
    }
    // 0x38a7cf
    return result;
}

// Address range: 0x38a7e7 - 0x38a7ef
int64_t function_38a7e7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38a7e7
    int64_t v1; // 0x38a7e7
    int32_t * v2 = (int32_t *)(v1 + 0x56b301e8); // 0x38a7e7
    *v2 = *v2 & (int32_t)a3;
    return v1 & -0xff01 | (int64_t)&g5;
}

// Address range: 0x38a816 - 0x38a827
int64_t function_38a816(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38a816
    int64_t result; // 0x38a816
    *(char *)result = 0;
    int32_t * v1 = (int32_t *)(result + 0x1801e8bc); // 0x38a81b
    *v1 = *v1 - (int32_t)result;
    return result;
}

// Address range: 0x38a840 - 0x38a84b
int64_t function_38a840(int64_t a1) {
    // 0x38a840
    int64_t v1; // 0x38a840
    int32_t * v2 = (int32_t *)(4 * v1 + 0x38d189 + v1); // 0x38a840
    *v2 = *v2 + (int32_t)a1;
    int64_t result; // 0x38a840
    *(char *)result = *(char *)&result - 52;
    return result;
}

// Address range: 0x38a85a - 0x38a86c
int64_t function_38a85a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38a85a
    *(int32_t *)0x241c646d = *(int32_t *)0x241c646d + (int32_t)a4;
    return function_ffffffffa40ca917();
}

// Address range: 0x38a884 - 0x38a889
int64_t function_38a884(void) {
    // 0x38a884
    return function_ffffffffb07da91c();
}

// Address range: 0x38a8b6 - 0x38a8b7
int64_t function_38a8b6(int64_t a1) {
    // 0x38a8b6
    int64_t result; // 0x38a8b6
    return result;
}

// Address range: 0x38a94b - 0x38a956
int64_t function_38a94b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38a94b
    int64_t result; // 0x38a94b
    unsigned char v1 = (char)result;
    unsigned char v2 = (char)((uint64_t)result / 256); // 0x38a94b
    *(char *)a4 = v1 - v2;
    char * v3 = (char *)(a2 - 0x612969a1); // 0x38a94d
    *v3 = *v3 + (char)result + (char)(v1 < v2);
    return result;
}

// Address range: 0x38aa21 - 0x38aa22
int64_t function_38aa21(int64_t a1) {
    // 0x38aa21
    int64_t result; // 0x38aa21
    return result;
}

// Address range: 0x38aa9e - 0x38aaaa
int64_t function_38aa9e(void) {
    char v1 = *(char *)0x4c3fbeaa; // 0x38aaa3
    int64_t v2; // 0x38aa9e
    *(char *)0x4c3fbeaa = v1 + (char)((uint64_t)v2 / 256);
    return v2 & -256 | 102;
}

// Address range: 0x38ac19 - 0x38ac1d
int64_t function_38ac19(int64_t a1) {
    // 0x38ac19
    int64_t v1; // 0x38ac19
    uint64_t v2 = v1;
    char v3 = *(char *)(v1 + 11); // 0x38ac19
    return 256 * (int64_t)((char)(v2 / 256) - v3) | v2 & -0xff01;
}

// Address range: 0x38ac1d - 0x38ac23
int64_t function_38ac1d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x38ac1d
    int64_t result; // 0x38ac1d
    char * v1 = (char *)(result - 99); // 0x38ac1d
    *v1 = *v1 + (char)(a4 / 256);
    return result;
}

// Address range: 0x38ac87 - 0x38ac88
int64_t function_38ac87(void) {
    // 0x38ac87
    int64_t result; // 0x38ac87
    return result;
}

// Address range: 0x38ac97 - 0x38ac9b
int64_t function_38ac97(int64_t a1, int64_t a2) {
    // 0x38ac97
    return function_38ac87();
}

// Address range: 0x38accd - 0x38ace2
int64_t function_38accd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38accd
    int64_t v1; // 0x38accd
    return function_3095bee3((int32_t)v1 + (int32_t)a1);
}

// Address range: 0x38ad46 - 0x38ad4b
int64_t function_38ad46(int64_t a1) {
    // 0x38ad46
    int64_t v1; // 0x38ad46
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x38ad96 - 0x38ada0
int64_t function_38ad96(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38ad96
    int64_t result; // 0x38ad96
    return result;
}

// Address range: 0x38adf8 - 0x38adf9
int64_t function_38adf8(int64_t a1) {
    // 0x38adf8
    int64_t result; // 0x38adf8
    return result;
}

// Address range: 0x38ae00 - 0x38ae0a
int64_t function_38ae00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x38ae00
    return unknown_3aa50207(a1, a2, a3, a4, a5) & -0xff01 | (int64_t)&g2;
}

// Address range: 0x38ae8b - 0x38ae90
int64_t function_38ae8b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38ae8b
    int64_t v1; // 0x38ae8b
    __asm_outsb((int16_t)a3, (char)v1);
    return function_38ae93();
}

// Address range: 0x38ae91 - 0x38ae93
int64_t function_38ae91(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38ae91
    int64_t result; // 0x38ae91
    *(int32_t *)a4 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x38ae93 - 0x38ae96
int64_t function_38ae93(void) {
    // 0x38ae93
    int64_t result; // 0x38ae93
    return result;
}

// Address range: 0x38aebe - 0x38aec1
int64_t function_38aebe(int64_t a1) {
    // 0x38aebe
    int64_t result; // 0x38aebe
    return result;
}

// Address range: 0x38aedf - 0x38aee2
int64_t function_38aedf(void) {
    // 0x38aedf
    int64_t result; // 0x38aedf
    return result;
}

// Address range: 0x38af08 - 0x38af0b
int64_t function_38af08(int64_t a1) {
    // 0x38af08
    int64_t result; // 0x38af08
    return result;
}

// Address range: 0x38af11 - 0x38af15
int64_t function_38af11(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38af11
    int64_t result; // 0x38af11
    __asm_out_138((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x38afaf - 0x38afb1
int64_t function_38afaf(int64_t a1, int64_t a2) {
    // 0x38afaf
    int64_t result; // 0x38afaf
    return result;
}

// Address range: 0x38afd6 - 0x38afd7
int64_t function_38afd6(void) {
    // 0x38afd6
    int64_t result; // 0x38afd6
    return result;
}

// Address range: 0x38aff2 - 0x38b03d
int64_t function_38aff2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38aff2
    int64_t v1; // 0x38aff2
    int64_t v2 = v1 & -256 | (int64_t)*(char *)0x144cb455fe03ab0b; // 0x38aff2
    uint32_t v3 = (int32_t)a4 % 32; // 0x38affb
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)v2; // 0x38affb
        uint32_t v5 = *v4; // 0x38affb
        *v4 = v5 >> 32 - v3 | v5 << v3;
    }
    char v6 = v1 / 256; // 0x38affd
    *(char *)-0x4bcf5afc = *(char *)-0x4bcf5afc + v6;
    uint32_t v7 = 0x1e8e8dc * *(int32_t *)(a1 + 0x1dec12e9) | (int32_t)a2; // 0x38b012
    unsigned char v8 = (char)v7; // 0x38b01d
    char v9 = *(char *)((int64_t)v7 - 120); // 0x38b01d
    unsigned char v10 = v9 + v8; // 0x38b01d
    if (((v10 ^ v8) & (v10 ^ v9)) < 0) {
        // 0x38b022
        return function_38afd6();
    }
    int32_t v11 = 0x10000 * (int32_t)v2; // 0x38b003
    int32_t v12 = a1; // 0x38b02f
    *(int32_t *)a1 = (int32_t)v1 + v12 + (int32_t)(v10 < v8);
    *(char *)-0x1943ccc8 = *(char *)-0x1943ccc8 + v6;
    int32_t * v13 = (int32_t *)((int64_t)(v11 >> 31) - 0x4fe273fc); // 0x38b037
    *v13 = *v13 + v12;
    return v11 >> 16 | 0x4733;
}

// Address range: 0x38b042 - 0x38b045
int64_t function_38b042(int64_t a1) {
    // 0x38b042
    int64_t result; // 0x38b042
    bool v1; // 0x38b042
    *(char *)result = (char)v1;
    return result;
}

// Address range: 0x38b0f3 - 0x38b0fc
int64_t function_38b0f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38b0f3
    int64_t result; // 0x38b0f3
    return result;
}

// Address range: 0x38b139 - 0x38b141
int64_t function_38b139(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38b139
    return unknown_ffffffff8038ea13(a1, a2, a3);
}

// Address range: 0x38b147 - 0x38b148
int64_t function_38b147(int64_t a1) {
    // 0x38b147
    int64_t result; // 0x38b147
    return result;
}
