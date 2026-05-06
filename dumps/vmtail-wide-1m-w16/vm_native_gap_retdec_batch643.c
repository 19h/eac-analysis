/*
 * Targeted RetDec C for native executable gap queue batch 643.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2b4575-0x2b4775 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b4775-0x2b4975 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b4975-0x2b4b75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b4d75-0x2b4f75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47e030-0x47e230 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47e230-0x47e430 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47e430-0x47e630 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47e830-0x47ea30 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
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
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
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

int64_t function_168478a();
int64_t function_1cf0835f();
int64_t function_2b4575(int64_t a1, int64_t a2);
int64_t function_2b45e3(int64_t a1);
int64_t function_2b4620(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2b46cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2b4736(void);
int64_t function_2b475a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b47e3(void);
int64_t function_2b4816(void);
int64_t function_2b481f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b48c3(void);
int64_t function_2b48c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b48e8(void);
int64_t function_2b4909(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b4914(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b4996(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_2b4b27(int64_t a1);
int64_t function_2b4b34(int64_t a1);
int64_t function_2b4b5e(void);
int64_t function_2b4d75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_2b4ed6(int64_t a1, int64_t a2);
int64_t function_2b4ee7(void);
int64_t function_2b4f08(void);
int64_t function_3f8ec9a0();
int64_t function_47e030(int64_t a1);
int64_t function_47e0c6(void);
int64_t function_47e0d4(void);
int64_t function_47e123(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_47e1f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_47e20d(void);
int64_t function_47e218(void);
int64_t function_47e22c(int64_t a1);
int64_t function_47e272(void);
int64_t function_47e2da(void);
int64_t function_47e30c(int64_t a1);
int64_t function_47e347(int64_t a1);
int64_t function_47e350(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47e377(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_47e3f2(void);
int64_t function_47e3fc(uint64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47e4a1(int64_t a1);
int64_t function_47e4a2(void);
int64_t function_47e4b9(void);
int64_t function_47e517(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47e5c5(int64_t a1);
int64_t function_47e830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_47e88b(void);
int64_t function_47e891(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_47e967(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47e9d6(int32_t a1);
int64_t function_47e9e0(void);
int64_t function_47ea2a(void);
int64_t function_ffffffffcf2053f7();
int64_t function_ffffffffd15a59c2();
int64_t unknown_1d25efd1();
int64_t unknown_228b0d2c();
int64_t unknown_2c8b5316();
int64_t unknown_3a764a06();
int64_t unknown_3c4c8e3b();
int64_t unknown_3d67920d();
int64_t unknown_411db7fc();
int64_t unknown_476e1e69();
int64_t unknown_6075f988();
int64_t unknown_7138cd96();
int64_t unknown_73a72d59();
int64_t unknown_7ea3af58();
int64_t unknown_8ea2c85();
int64_t unknown_ffffffff882d46b3();
int64_t unknown_ffffffff89d44a47();
int64_t unknown_ffffffff9504035c();
int64_t unknown_ffffffffa235105d();
int64_t unknown_ffffffffaa832d68();
int64_t unknown_ffffffffc82edaa0();
int64_t unknown_ffffffffd2cc79f0();
int64_t unknown_ffffffffd67f98d2();
int64_t unknown_ffffffffdaecd31b();
int64_t unknown_ffffffffdeaa0b15();
int64_t unknown_ffffffffece674c0();
int64_t unknown_ffffffffee302eef();
int64_t unknown_fffffffff16c5c56();

// Address range: 0x2b4575 - 0x2b459c
int64_t function_2b4575(int64_t a1, int64_t a2) {
    // 0x2b4575
    int64_t v1; // 0x2b4575
    int32_t * v2 = (int32_t *)(v1 + 80); // 0x2b4577
    *v2 = *v2 + (int32_t)a2;
    *(int32_t *)0x99ec0fc5 = *(int32_t *)0x99ec0fc5 - 0x6613f03b;
    *(int32_t *)(v1 & 0xffffffff) = __asm_insd((int16_t)v1 + 4037);
    int64_t result = a1 & 0x7210a7a3; // 0x2b4592
    int32_t * v3 = (int32_t *)result; // 0x2b459a
    *v3 = *v3 + (int32_t)(v1 - 8);
    return result;
}

// Address range: 0x2b45e3 - 0x2b45e6
int64_t function_2b45e3(int64_t a1) {
    // 0x2b45e3
    int64_t result; // 0x2b45e3
    return result;
}

// Address range: 0x2b4620 - 0x2b46ca
int64_t function_2b4620(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2b4620
    int64_t v1; // 0x2b4620
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a3 & -256 | 154; // 0x2b4624
    int64_t v5 = unknown_228b0d2c(); // 0x2b4626
    char * v6 = (char *)(a1 - 0x17f8d71f); // 0x2b462e
    *v6 = *v6 + (char)(a3 / 256);
    int32_t * v7 = (int32_t *)v4; // 0x2b4634
    int64_t v8; // bp+20993, 0x2b4620
    *v7 = *v7 + (int32_t)(int64_t)&v8;
    char * v9 = (char *)(a4 + 119); // 0x2b4636
    *v9 = -1 - *v9;
    int16_t v10 = v4; // 0x2b4639
    char v11 = v5; // 0x2b4639
    __asm_out_134(v10, v11);
    char * v12 = (char *)(v4 - 0x6da6c5c6); // 0x2b463a
    *v12 = *v12 >> 1;
    bool v13; // 0x2b4620
    int64_t v14 = (v13 ? -4 : 4) + a1; // 0x2b4646
    char * v15 = (char *)v5; // 0x2b4648
    char v16 = *v15 - v11; // 0x2b4648
    *v15 = v16;
    int64_t v17 = v8; // 0x2b464a
    char * v18 = (char *)(v14 + 0x48098801); // 0x2b464b
    *v18 = (char)(v2 / 256);
    if (a4 != 1 != (v16 == 0)) {
        int64_t v19 = unknown_73a72d59(v14); // 0x2b4653
        int32_t * v20 = (int32_t *)v19; // 0x2b4658
        *v20 = *v20 + (int32_t)v19;
        __asm_hlt();
        int64_t result = unknown_ffffffffaa832d68(); // 0x2b4662
        int32_t * v21 = (int32_t *)(v17 - 0x2fbe4d77); // 0x2b4667
        *v21 = *v21 / 2;
        return result;
    }
    int32_t * v22 = (int32_t *)(v5 + 5); // 0x2b469f
    int64_t v23; // bp+21001, 0x2b4620
    *v22 = *v22 + (int32_t)(int64_t)&v23;
    int32_t * v24 = (int32_t *)((256 * (int64_t)*v18 | v2 & -0xff01) - 70); // 0x2b46a9
    *v24 = 2 * *v24;
    __asm_outsb(v10, *(char *)&v3);
    unknown_ffffffff882d46b3();
    __asm_in(v10);
    int64_t v25 = unknown_ffffffffece674c0(); // 0x2b46ba
    v8 = v3;
    *(int32_t *)v14 = __asm_insd(v10);
    return v25 | 235;
}

// Address range: 0x2b46cb - 0x2b472d
int64_t function_2b46cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2b46cb
    int64_t v1; // 0x2b46cb
    uint64_t v2 = v1;
    unknown_1d25efd1();
    uint32_t v3 = (int32_t)a4;
    uint32_t v4 = v3 % 32;
    if (v4 == 0) {
        // .thread
        unknown_ffffffffee302eef();
    } else {
        int32_t * v5 = (int32_t *)a4; // 0x2b46e5
        *v5 = v3 >> 32 - v4 | v3 << v4;
        unknown_ffffffffee302eef();
        *v5 = v3 >> v4;
    }
    bool v6; // 0x2b46cb
    int64_t v7 = v6 ? -1 : 1; // 0x2b46d6
    int64_t v8 = v7 + a2; // 0x2b46d6
    unknown_411db7fc();
    int64_t v9 = v7 + a1; // 0x2b46fb
    uint64_t v10 = __asm_sti(v9, v8); // 0x2b46fc
    *(char *)-0x397c4af2 = (char)a4;
    int32_t * v11 = (int32_t *)(unknown_3d67920d() + a6 & 0xffffffff); // 0x2b470e
    *v11 = *v11 + (int32_t)a3;
    unknown_2c8b5316();
    int32_t * v12 = (int32_t *)(v2 - 0x19feb300); // 0x2b4715
    *v12 = *v12 + (int32_t)v8;
    *(char *)v9 = *(char *)(v8 + (v6 ? -4 : 4));
    *(char *)0x57346a2c = *(char *)0x57346a2c + (char)(v2 / 256);
    return v10 & 0xffffff00 | (int64_t)*(char *)(v10 % 256 + v2);
}

// Address range: 0x2b4736 - 0x2b4742
int64_t function_2b4736(void) {
    // 0x2b4736
    int64_t v1; // 0x2b4736
    __asm_out_136(42, (char)v1);
    unknown_7ea3af58();
    return function_168478a();
}

// Address range: 0x2b475a - 0x2b475f
int64_t function_2b475a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2b475a
    int64_t result; // 0x2b475a
    return result;
}

// Address range: 0x2b47e3 - 0x2b47e6
int64_t function_2b47e3(void) {
    // 0x2b47e3
    __asm_int(-1);
    int64_t result; // 0x2b47e3
    return result;
}

// Address range: 0x2b4816 - 0x2b4819
int64_t function_2b4816(void) {
    // 0x2b4816
    int64_t result; // 0x2b4816
    return result;
}

// Address range: 0x2b481f - 0x2b48c3
int64_t function_2b481f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x2b481f
    int32_t * v3 = (int32_t *)(v2 + 0x162698f7); // 0x2b481f
    *v3 = *v3 + (int32_t)v2;
    int64_t v4; // 0x2b481f
    int64_t v5 = (int64_t)&v4; // bp-8, 0x2b4825
    int64_t v6 = (int64_t)&v5 & 0xfffffff8 ^ 0xe8ea29e2; // 0x2b4826
    int32_t * v7 = (int32_t *)(a3 - 0x5b9a7aff); // 0x2b482c
    *v7 = *v7 + (int32_t)a2;
    *(char *)a3 = (char)a4;
    uint32_t v8 = __asm_in_137(-52); // 0x2b483e
    int64_t v9 = unknown_ffffffff89d44a47(); // 0x2b4841
    char * v10 = (char *)(a1 - 78 + a3); // 0x2b4847
    *v10 = 2 * *v10;
    int32_t * v11 = (int32_t *)(a1 + 0x58e2f4d9); // 0x2b484d
    *v11 = *v11 + (int32_t)a3;
    char * v12 = (char *)(v6 + 0x201e7f8);
    int64_t v13 = v6 - 8 - (int64_t)&g3; // 0x2b484d
    int64_t v14 = v8; // 0x2b484d
    int64_t v15; // 0x2b481f
    uint64_t v16 = v15;
    int64_t v17 = a3;
    uint64_t v18 = a4;
    *(int64_t *)(v13 - 8) = v16;
    uint64_t v19 = unknown_ffffffffa235105d(); // 0x2b4857
    int32_t * v20 = (int32_t *)v19; // 0x2b485c
    *v20 = *v20 + ((char)v9 < 86 ? 0x1e82e12 : 0x1e82e11);
    v13 -= 16;
    *(int64_t *)v13 = 0x2cdc87da;
    char * v21 = (char *)(v19 + 0x24dff00); // 0x2b4867
    *v21 = *v21 + (char)v19;
    *v12 = *v12 + (char)(v19 / 256);
    int32_t * v22 = (int32_t *)(v14 - 0x4489f83d); // 0x2b4873
    uint32_t v23 = *v22; // 0x2b4873
    uint32_t v24 = v23 + (int32_t)v16; // 0x2b4873
    *v22 = v24;
    char v25 = *(char *)(v18 + 0x7b312800); // 0x2b4879
    unknown_8ea2c85();
    bool v26; // 0x2b481f
    v14 += (v26 ? -4 : 4);
    int64_t v27 = v17 - (v16 & 0xff00) & 0xff00 | v17 & -0xff01; // 0x2b4885
    char v28 = __asm_in_138(-85); // 0x2b4887
    char * v29 = (char *)(v14 - 118); // 0x2b4889
    *v29 = *v29 + (char)(v18 / 256);
    unsigned char v30 = v28 ^ (char)(v16 / 256); // 0x2b488c
    __asm_int(39);
    int64_t result = unknown_7138cd96(); // 0x2b4890
    int64_t v31 = v18 - 1; // 0x2b4897
    while (v31 != 0 && v30 != 0) {
        int64_t v32 = v16 & -0x10000 | (int64_t)(v25 + (char)v16 + (char)(v24 < v23)) | 256 * (int64_t)v30; // 0x2b488c
        char * v33 = (char *)(v32 - 0x1713bffd); // 0x2b48a9
        *v33 = *v33 ^ v30;
        int32_t v34 = *(int32_t *)&v1 + (int32_t)v31; // 0x2b48af
        unsigned char v35 = llvm_ctpop_i8((char)v34); // 0x2b48af
        *(int32_t *)v1 = v34;
        if (v35 % 2 != 0) {
            int32_t * v36 = (int32_t *)(result - 0x17fedcf5); // 0x2b48b6
            *v36 = *v36 + (int32_t)v1;
            int32_t * v37 = (int32_t *)v27; // 0x2b48bc
            uint32_t v38 = *v37; // 0x2b48bc
            uint32_t v39 = v38 + (int32_t)v27; // 0x2b48bc
            *v37 = v39;
            if (v39 < v38 || v39 == 0) {
                // 0x2b48c0
                return (result + 252) % 256 | result & -256;
            }
            // 0x2b48a8
            return result;
        }
        v16 = v32;
        v17 = v27;
        v18 = v31;
        *(int64_t *)(v13 - 8) = v16;
        v19 = unknown_ffffffffa235105d();
        v20 = (int32_t *)v19;
        *v20 = *v20 + ((char)result < 86 ? 0x1e82e12 : 0x1e82e11);
        v13 -= 16;
        *(int64_t *)v13 = 0x2cdc87da;
        v21 = (char *)(v19 + 0x24dff00);
        *v21 = *v21 + (char)v19;
        *v12 = *v12 + (char)(v19 / 256);
        v22 = (int32_t *)(v14 - 0x4489f83d);
        v23 = *v22;
        v24 = v23 + (int32_t)v16;
        *v22 = v24;
        v25 = *(char *)(v18 + 0x7b312800);
        unknown_8ea2c85();
        v14 += (v26 ? -4 : 4);
        v27 = v17 - (v16 & 0xff00) & 0xff00 | v17 & -0xff01;
        v28 = __asm_in_138(-85);
        v29 = (char *)(v14 - 118);
        *v29 = *v29 + (char)(v18 / 256);
        v30 = v28 ^ (char)(v16 / 256);
        __asm_int(39);
        result = unknown_7138cd96();
        v31 = v18 - 1;
    }
    int32_t * v40 = (int32_t *)(v18 - 0x17683a01); // 0x2b489a
    uint32_t v41 = *v40; // 0x2b489a
    *v40 = v41 / 2 | 0x80000000 * v41;
    int32_t * v42 = (int32_t *)(result + 0x53ca5c03); // 0x2b48a0
    *v42 = *v42 + (int32_t)v27;
    return result;
}

// Address range: 0x2b48c3 - 0x2b48c6
int64_t function_2b48c3(void) {
    // 0x2b48c3
    int64_t result; // 0x2b48c3
    return result;
}

// Address range: 0x2b48c6 - 0x2b48d5
int64_t function_2b48c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2b48c6
    int64_t v1; // 0x2b48c6
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v1 & -114;
    int64_t result = unknown_ffffffffd67f98d2(); // 0x2b48cc
    *(char *)(v2 - 35) = (char)v2;
    return result;
}

// Address range: 0x2b48e8 - 0x2b48f1
int64_t function_2b48e8(void) {
    // 0x2b48e8
    int64_t v1; // 0x2b48e8
    __asm_out_136(-102, (char)v1);
    return unknown_ffffffffd2cc79f0();
}

// Address range: 0x2b4909 - 0x2b4914
int64_t function_2b4909(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2b4909
    int64_t result; // 0x2b4909
    int32_t * v1 = (int32_t *)(result - 0x629d89d4); // 0x2b4909
    *v1 = *v1 + (int32_t)a1;
    return result;
}

// Address range: 0x2b4914 - 0x2b4924
int64_t function_2b4914(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2b4914
    __asm_sti(a1, a2);
    return unknown_ffffffffdaecd31b();
}

// Address range: 0x2b4996 - 0x2b4b14
int64_t function_2b4996(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a1;
    int64_t v2 = a8;
    bool v3; // 0x2b4996
    if (v3) {
        // 0x2b49ff
        *(char *)a1 = __asm_insb((int16_t)a3);
        return __asm_wait(v1);
    }
    // 0x2b4a17
    int64_t v4; // 0x2b4996
    *(int32_t *)a1 = (int32_t)v4 + (int32_t)a1;
    int32_t * v5 = (int32_t *)(a3 - 115); // 0x2b4a1b
    *v5 = *v5 + ((int32_t)v4 | 151);
    int64_t v6 = v1; // bp-8, 0x2b4a23
    int3_t v7; // 0x2b4996
    __frontend_reg_store_fpr(v7, 0.0);
    int32_t v8 = (int32_t)(int64_t)&v6 + (int32_t)a6; // 0x2b4a2d
    int64_t result = v8; // 0x2b4a2f
    if (v8 < 0) {
        int64_t v9 = unknown_3c4c8e3b(); // 0x2b4a35
        int32_t * v10 = (int32_t *)(v9 + 0x1e87ac0); // 0x2b4a3c
        *v10 = *v10 + (int32_t)v4;
        int32_t * v11 = (int32_t *)(v1 - 24); // 0x2b4a42
        *v11 = *v11 >> 1;
        int64_t v12 = v9 + 0x689574fd; // 0x2b4a45
        __asm_out(94, (int32_t)v12);
        uint32_t v13 = *(int32_t *)&v1; // 0x2b4a4e
        uint32_t v14 = v13 + (int32_t)v1; // 0x2b4a4e
        unsigned char v15 = llvm_ctpop_i8((char)v14); // 0x2b4a4e
        *(int32_t *)v1 = v14;
        __frontend_reg_store_fpr(v7 - 1, (float80_t)*(int16_t *)((v12 & 0xffffffff) + 25));
        result = unknown_ffffffff9504035c();
        if (v15 % 2 == 0) {
            // 0x2b4a69
            if (v14 < v13 || v14 == 0) {
                // 0x2b4a9f
                return result;
            }
            int32_t * v16 = (int32_t *)a7; // 0x2b4a78
            *v16 = *v16 + (int32_t)(int64_t)&v2;
            int64_t v17 = unknown_6075f988(); // 0x2b4a82
            int32_t v18 = ((int32_t)a3 & -0xff01 | (int32_t)&g5) + (int32_t)v1; // 0x2b4a90
            int64_t v19 = v18; // 0x2b4a90
            v1 = v19;
            if (v18 >= 0) {
                // 0x2b4a9f
                return unknown_ffffffffc82edaa0(v18);
            }
            uint64_t v20 = (v17 & 0xffffff00 | v17 + 198 & 196 | 59) + 0x17c6ec25; // 0x2b4a8b
            int64_t v21 = v2; // 0x2b4afe
            char v22 = v20 / 256; // 0x2b4aff
            unknown_3a764a06(v19);
            v2 = 128 * (int64_t)(v22 < 0) | (int64_t)((v20 & 256) != 0) | 4 * (int64_t)((v22 & 4) != 0) | 16 * (int64_t)((v22 & 16) != 0) | 64 * (int64_t)((v22 & 64) != 0) | 256 * (int64_t)((v21 & 256) != 0) | 512 * (int64_t)((v21 & (int64_t)&g1) != 0) | 1024 * (int64_t)((v21 & (int64_t)&g2) != 0) | 2048 * (int64_t)((v21 & (int64_t)L"\n2") != 0) | 0x4000 * (int64_t)((v21 & (int64_t)"le") != 0) | 2;
            return unknown_ffffffffdeaa0b15();
        }
        // 0x2b4a5d
        *(char *)(v4 - 112) = -1;
    }
    // 0x2b4a61
    if (a4 == 1) {
        // 0x2b4a63
        return unknown_476e1e69();
    }
    // 0x2b4a9f
    return result;
}

// Address range: 0x2b4b27 - 0x2b4b2a
int64_t function_2b4b27(int64_t a1) {
    // 0x2b4b27
    int64_t result; // 0x2b4b27
    return result;
}

// Address range: 0x2b4b34 - 0x2b4b39
int64_t function_2b4b34(int64_t a1) {
    // 0x2b4b34
    int64_t result; // 0x2b4b34
    return result;
}

// Address range: 0x2b4b5e - 0x2b4b64
int64_t function_2b4b5e(void) {
    // 0x2b4b5e
    int64_t result; // 0x2b4b5e
    return result;
}

// Address range: 0x2b4d75 - 0x2b4ebd
int64_t function_2b4d75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x2b4d75
    int64_t v1; // 0x2b4d75
    char v2 = (uint64_t)v1 / 256; // 0x2b4d76
    *(char *)0x3235847e = *(char *)0x3235847e + v2;
    int64_t v3 = v1 + 184 & 169 | 86; // 0x2b4d7f
    int64_t result = v3 | v1 & -256; // 0x2b4d7f
    if (a4 == 1) {
        // 0x2b4d83
        return result;
    }
    // 0x2b4ddf
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int64_t v4 = a3 - 256 * v3 & 0xff00 | a3 & -0xff01; // 0x2b4de5
    __asm_outsb((int16_t)v4, (char)a2);
    __asm_out(76, (int32_t)result);
    *(char *)a1 = (char)v3;
    *(char *)0x29f7c9fb = *(char *)0x29f7c9fb + v2;
    char * v5 = (char *)(v4 - 105); // 0x2b4dff
    *v5 = *v5 | (char)((int64_t)&g6 >> 8);
    return result & -0xff8a | (int64_t)&g6;
}

// Address range: 0x2b4ed6 - 0x2b4edf
int64_t function_2b4ed6(int64_t a1, int64_t a2) {
    // 0x2b4ed6
    __asm_out_136((char)a1, (char)a2);
    int64_t result; // 0x2b4ed6
    return result;
}

// Address range: 0x2b4ee7 - 0x2b4eec
int64_t function_2b4ee7(void) {
    // 0x2b4ee7
    int64_t v1; // 0x2b4ee7
    return v1 & -256 | 111;
}

// Address range: 0x2b4f08 - 0x2b4f13
int64_t function_2b4f08(void) {
    // 0x2b4f08
    int64_t v1; // 0x2b4f08
    int64_t v2 = v1;
    char v3 = *(char *)(v2 & 0xf900013d); // 0x2b4f10
    return (v2 & 61) * (int64_t)v3 % 0x10000 | v2 & 0xf9000000;
}

// Address range: 0x47e030 - 0x47e031
int64_t function_47e030(int64_t a1) {
    // 0x47e030
    int64_t result; // 0x47e030
    return result;
}

// Address range: 0x47e0c6 - 0x47e0ca
int64_t function_47e0c6(void) {
    // 0x47e0c6
    int64_t result; // 0x47e0c6
    int32_t * v1 = (int32_t *)(result + 73); // 0x47e0c6
    int32_t v2 = *v1; // 0x47e0c6
    *v1 = 2 * v2 | (int32_t)(v2 < 0);
    return result;
}

// Address range: 0x47e0d4 - 0x47e0d5
int64_t function_47e0d4(void) {
    // 0x47e0d4
    int64_t result; // 0x47e0d4
    return result;
}

// Address range: 0x47e123 - 0x47e1ef
int64_t function_47e123(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)*(int32_t *)(3 * a4); // 0x47e123
    int64_t v2 = 5 * v1; // 0x47e123
    int64_t v3; // 0x47e123
    uint32_t v4 = (int32_t)v3; // 0x47e127
    uint32_t v5 = (int32_t)a1; // 0x47e127
    int32_t v6 = v2 != 0x500000000 * v1 >> 32; // 0x47e127
    uint32_t v7 = v4 + v5; // 0x47e127
    uint32_t v8 = v7 + v6; // 0x47e127
    *(char *)-0x42de32f6b34ebea1 = (char)v2;
    int64_t v9 = *(int64_t *)(int64_t)v8; // 0x47e135
    char * v10 = (char *)(a1 + 102); // 0x47e13c
    char v11 = (char)a4 + 14; // 0x47e13c
    *v10 = *v10 + v11;
    uint32_t v12 = *(int32_t *)(2 * a2 + 0x7aa95a15) + (int32_t)a2; // 0x47e13f
    unsigned char v13 = llvm_ctpop_i8((char)v12); // 0x47e13f
    __asm_out_136(113, v11);
    if (v13 % 2 != 0) {
        function_47e0d4();
    }
    unsigned char v14 = llvm_ctpop_i8((char)v8); // 0x47e127
    bool v15 = v2 != 0x500000000 * v1 >> 32 ? v8 <= v4 : v7 < v4; // 0x47e127
    int64_t v16 = v12; // 0x47e13f
    int16_t v17 = a3; // 0x47e159
    __asm_outsb(v17, *(char *)v16);
    int64_t v18 = v2 & (a3 / 256 % 256 | 0xffff0000) | 256 * (16 * (int64_t)(v4 % 16 + v5 % 16 + v6 > 15) | (int64_t)v15 | 64 * (int64_t)(v8 == 0) | 128 * (int64_t)(v8 < 0) | 4 * (int64_t)(v14 % 2 == 0)) & 0xfffffd00 | 512; // 0x47e15f
    unsigned char v19 = *(char *)(v18 - 90); // 0x47e1d7
    __asm_sti(a1, ((v9 & (int64_t)&g2) == 0 ? 4 : -4) + v16);
    int32_t * v20 = (int32_t *)(v3 + 0x12954b5b + v18); // 0x47e1db
    *v20 = (int32_t)(v19 > (char)*(int32_t *)v16) - v5 + *v20;
    return __asm_in_135(v17);
}

// Address range: 0x47e1f0 - 0x47e1f7
int64_t function_47e1f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x47e1f0
    return function_ffffffffcf2053f7();
}

// Address range: 0x47e20d - 0x47e212
int64_t function_47e20d(void) {
    // 0x47e20d
    return function_ffffffffd15a59c2();
}

// Address range: 0x47e218 - 0x47e219
int64_t function_47e218(void) {
    // 0x47e218
    int64_t result; // 0x47e218
    return result;
}

// Address range: 0x47e22c - 0x47e22d
int64_t function_47e22c(int64_t a1) {
    // 0x47e22c
    int64_t result; // 0x47e22c
    return result;
}

// Address range: 0x47e272 - 0x47e277
int64_t function_47e272(void) {
    // 0x47e272
    return function_3f8ec9a0();
}

// Address range: 0x47e2da - 0x47e2db
int64_t function_47e2da(void) {
    // 0x47e2da
    int64_t result; // 0x47e2da
    return result;
}

// Address range: 0x47e30c - 0x47e30d
int64_t function_47e30c(int64_t a1) {
    // 0x47e30c
    int64_t result; // 0x47e30c
    return result;
}

// Address range: 0x47e347 - 0x47e34a
int64_t function_47e347(int64_t a1) {
    // 0x47e347
    int64_t result; // 0x47e347
    bool v1; // 0x47e347
    if (!v1) {
        result = function_47e2da();
    }
    // 0x47e349
    return result;
}

// Address range: 0x47e350 - 0x47e372
int64_t function_47e350(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47e350
    int64_t v1; // 0x47e350
    uint64_t v2 = v1 + 0x15d42cf7; // 0x47e350
    char v3 = *(char *)(a1 + 56); // 0x47e356
    int32_t v4 = *(int32_t *)(a2 + 118); // 0x47e359
    *(char *)a1 = __asm_insb((int16_t)a3);
    return (v4 & (int32_t)(256 * (int64_t)(v3 & (char)(v2 / 256)) | v2 & 0x3fff00ff)) + 0x26cb36a4 & 0x28f4366b;
}

// Address range: 0x47e377 - 0x47e3e0
int64_t function_47e377(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a5;
    int64_t result; // 0x47e377
    int32_t * v2 = (int32_t *)(result - 116); // 0x47e377
    bool v3; // 0x47e377
    *v2 = (int32_t)v3 + (int32_t)result + *v2;
    int64_t v4; // 0x47e377
    int64_t v5; // 0x47e377
    if (*(char *)&v5 != *(char *)&v4) {
        // 0x47e3de
        return (int64_t)&v1;
    }
    // 0x47e37d
    return result;
}

// Address range: 0x47e3f2 - 0x47e3f3
int64_t function_47e3f2(void) {
    // 0x47e3f2
    int64_t result; // 0x47e3f2
    return result;
}

// Address range: 0x47e3fc - 0x47e49a
int64_t function_47e3fc(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 2 * a3; // 0x47e3fc
    int64_t v2 = v1 & 0xfffffffe; // 0x47e3fc
    int32_t * v3 = (int32_t *)(v2 + 106); // 0x47e3fe
    int32_t v4 = v1; // 0x47e3fe
    *v3 = *v3 ^ v4;
    int64_t v5 = (int64_t)*(int32_t *)(v2 + 83); // 0x47e401
    uint64_t v6 = 0x50cb439a * v5; // 0x47e401
    uint32_t v7 = (int32_t)a4; // 0x47e408
    uint32_t v8 = v7 % 32; // 0x47e408
    if (v8 != 0) {
        int32_t * v9 = (int32_t *)(v2 - 0x1ee8bde8); // 0x47e408
        uint32_t v10 = *v9; // 0x47e408
        *v9 = v10 << v8 | (int32_t)((int64_t)v10 >> (int64_t)(33 - v8)) | (int32_t)(v6 != 0x50cb439a00000000 * v5 >> 32) << v8 - 1;
    }
    int64_t v11 = (v6 & 0xfffffffe) + 30; // 0x47e411
    int64_t v12 = v11 & 254 | v6 & 0xffffff00; // 0x47e411
    int64_t v13 = (int64_t)(*(int32_t *)(a2 - 0x7939c25a + 4 * a1) & v4); // 0x47e413
    __asm_out_136(88, (char)v11);
    __asm_out(19, (int32_t)v12);
    int32_t * v14 = (int32_t *)(((v13 - v6 / 256) % 256 | v13 & 0xffffff00) - 34); // 0x47e426
    *v14 = *v14 / 0x100000;
    __asm_int(8);
    int64_t v15 = v12; // 0x47e433
    if (v12 != a1) {
        v15 = function_47e3f2();
    }
    uint64_t v16 = v15;
    int64_t v17 = v12 < a1 ? 35 : 34; // 0x47e43b
    int64_t v18; // 0x47e3fc
    int32_t v19 = *(int32_t *)(v18 - 0x572abea8); // 0x47e43d
    char v20 = *(char *)((int64_t)(v7 - v19) + 0x6a0df15f); // 0x47e443
    return (v16 - v17) % 256 | v16 & -0x10000 | 256 * (int64_t)(v20 | (char)(v16 / 256));
}

// Address range: 0x47e4a1 - 0x47e4a2
int64_t function_47e4a1(int64_t a1) {
    // 0x47e4a1
    int64_t result; // 0x47e4a1
    return result;
}

// Address range: 0x47e4a2 - 0x47e4a4
int64_t function_47e4a2(void) {
    // 0x47e4a2
    int64_t result; // 0x47e4a2
    return result;
}

// Address range: 0x47e4b9 - 0x47e4c5
int64_t function_47e4b9(void) {
    // 0x47e4b9
    int64_t result; // 0x47e4b9
    *(int32_t *)-0x61c4d73daa65d395 = (int32_t)result;
    return result;
}

// Address range: 0x47e517 - 0x47e524
int64_t function_47e517(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47e517
    int64_t result; // 0x47e517
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x47e5c5 - 0x47e5c6
int64_t function_47e5c5(int64_t a1) {
    // 0x47e5c5
    int64_t result; // 0x47e5c5
    return result;
}

// Address range: 0x47e830 - 0x47e87d
int64_t function_47e830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a3; // 0x47e830
    int64_t v2; // 0x47e830
    __asm_out_133(v1, (int32_t)v2);
    char v3 = v2; // 0x47e831
    __asm_out_134(v1, v3);
    int64_t v4 = a4 - 1; // 0x47e832
    if (v4 == 0) {
        int32_t * v5 = (int32_t *)(a2 + 0x5de200bf); // 0x47e844
        *v5 = *v5 >> 7;
        return function_47e891(a1, a2, a3 & -256 | 123, 0, v2);
    }
    // 0x47e868
    *(char *)a1 = v3;
    char * v6 = (char *)(v2 + v4); // 0x47e86f
    *v6 = *v6 + (char)(v2 / 256);
    int32_t * v7 = (int32_t *)(a2 - 88); // 0x47e872
    *v7 = *v7 & (int32_t)v2;
    return v2 & 0xffffffff;
}

// Address range: 0x47e88b - 0x47e891
int64_t function_47e88b(void) {
    // 0x47e88b
    return unknown_fffffffff16c5c56();
}

// Address range: 0x47e891 - 0x47e910
int64_t function_47e891(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x47e891
    int64_t v1; // 0x47e891
    int64_t v2 = v1 & 0xff00 | a4 & -0xff01; // 0x47e891
    int64_t result = v1 | 108; // 0x47e893
    uint32_t v3 = *(int32_t *)(result + 1); // 0x47e895
    uint32_t v4 = (int32_t)(v1 & 0xffff00ff | a4 & 0xff00); // 0x47e895
    int64_t v5 = v2 - 1; // 0x47e898
    if (v5 != 0 != (v3 == v4)) {
        // 0x47e89a
        return result;
    }
    unsigned char v6 = *(char *)0x5f805c374e6c1913; // 0x47e8a1
    int64_t result2 = v1 & -256 | (int64_t)v6; // 0x47e8a1
    if (v5 == 0) {
        // 0x47e901
        *(char *)-0x3b04fcd6461c3dc7 = v6;
        return result2;
    }
    char v7 = *(char *)(v2 - 33); // 0x47e8ac
    return 256 * (int64_t)((char)(v3 < v4) + (char)(v1 / 256) + v7) | result2 & -0xff01;
}

// Address range: 0x47e967 - 0x47e97f
int64_t function_47e967(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47e967
    int64_t result; // 0x47e967
    char * v1 = (char *)(result + 84); // 0x47e977
    *v1 = *v1 ^ (char)(*(int32_t *)0xd3391edd ^ (int32_t)a4);
    __asm_int(18);
    return result;
}

// Address range: 0x47e9d6 - 0x47e9de
int64_t function_47e9d6(int32_t a1) {
    // 0x47e9d6
    int64_t result; // 0x47e9d6
    return result;
}

// Address range: 0x47e9e0 - 0x47e9e4
int64_t function_47e9e0(void) {
    // 0x47e9e0
    int64_t v1; // 0x47e9e0
    return __asm_wait(v1);
}

// Address range: 0x47ea2a - 0x47ea2f
int64_t function_47ea2a(void) {
    // 0x47ea2a
    return function_1cf0835f();
}
