/*
 * Targeted RetDec C for native executable gap queue batch 1554.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2e070e-0x2e090e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e0b0e-0x2e0d0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x39229e-0x39249e rank=- name=- kind=- bytes=- uncovered=-
 *   0x39249e-0x39269e rank=- name=- kind=- bytes=- uncovered=-
 *   0x39269e-0x39289e rank=- name=- kind=- bytes=- uncovered=-
 *   0x39289e-0x392a9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x392a9e-0x392b45 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b1a15-0x3b1c15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b1c15-0x3b1e15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b1e15-0x3b2015 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b2015-0x3b2215 rank=- name=- kind=- bytes=- uncovered=-
 *   0x523d0b-0x523f0b rank=- name=- kind=- bytes=- uncovered=-
 *   0x523f0b-0x52410b rank=- name=- kind=- bytes=- uncovered=-
 *   0x52410b-0x52430b rank=- name=- kind=- bytes=- uncovered=-
 *   0x52430b-0x52450b rank=- name=- kind=- bytes=- uncovered=-
 *   0x52450b-0x5245c0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g21;
extern int g22;
extern int g23;
extern int g24;
extern int g25;
extern int g26;
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
int128_t __asm_packsswb(int128_t left, int128_t right);
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

int64_t function_1762760();
int64_t function_20110();
int64_t function_20730();
int64_t function_22135f2();
int64_t function_2b929e9();
int64_t function_2e0705();
int64_t function_2e070e(void);
int64_t function_2e0710(int64_t a1);
int64_t function_2e072e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e0750(void);
int64_t function_2e078a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e07ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e0820(void);
int64_t function_2e0864(void);
int64_t function_2e086c(void);
int64_t function_2e0893(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e08d5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e0b0e(void);
int64_t function_2e0b79(void);
int64_t function_2e0be7(int64_t a1);
int64_t function_2e0bee(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2e0c57(void);
int64_t function_2e0cba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39229e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3922ce(void);
int64_t function_39239b(int64_t a1);
int64_t function_3923ac(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3923c1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3923e1(void);
int64_t function_3923e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_392412(int64_t a1);
int64_t function_39249e(void);
int64_t function_392511(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t result);
int64_t function_392683(void);
int64_t function_3926d7(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_392738(int64_t a1);
int64_t function_3927ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_392832(int64_t a1);
int64_t function_39284b(void);
int64_t function_3928bf(int64_t a1);
int64_t function_3928d1(int64_t a1);
int64_t function_392936(void);
int64_t function_392944(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39298f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3929d7(int64_t a1);
int64_t function_3929df(int64_t a1);
int64_t function_3929e7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_392a05(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_392a7e(void);
int64_t function_392aa1(int64_t a1);
int64_t function_392ab5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_392adc(void);
int64_t function_392af1(int64_t a1);
int64_t function_392b19(void);
int64_t function_3b1a15(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b1a27(void);
int64_t function_3b1a71(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b1aa3(void);
int64_t function_3b1ab2(int64_t a1, int64_t a2);
int64_t function_3b1ab7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b1ac8(int64_t a1);
int64_t function_3b1acf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b1b45(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b1b8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3b1bfd(int64_t a1);
int64_t function_3b1ca4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b1d3d(void);
int64_t function_3b1d53(int64_t a1);
int64_t function_3b1d57(void);
int64_t function_3b1d59(void);
int64_t function_3b1d75(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b1dac(int64_t a1);
int64_t function_3b1ddd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3b2000(int64_t a1, int64_t a2);
int64_t function_3b2066(void);
int64_t function_3b208e(int64_t a1, int64_t a2);
int64_t function_3b20ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b210e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b2134(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b2172(void);
int64_t function_3b2174(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3b21a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4f50c0();
int64_t function_4f51e0();
int64_t function_518fa0();
int64_t function_523c90();
int64_t function_523d0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_523d84(int64_t a1, int64_t a2);
int64_t function_523db0(int64_t a1, int64_t a2);
int64_t function_523dc0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_523e3e(int64_t a1, int64_t a2);
int64_t function_523e92(int64_t a1, int64_t a2, int64_t a3);
int64_t function_523ef0(int64_t result);
int64_t function_523f00(int64_t result, int64_t a2);
int64_t function_523f50(int64_t a1, int64_t a2, int64_t a3);
int64_t function_523ff4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5240d4(void);
int64_t function_5243e0(int64_t a1);
int64_t function_524430(int64_t a1);
int64_t function_524480(int64_t a1);
int64_t function_5244d0(int64_t a1);
int64_t function_524520(int64_t a1);
int64_t function_524570(int64_t a1);
int64_t function_5423f0();
int64_t function_565970();
int64_t function_565f30();
int64_t function_566390();
int64_t function_5679b0();
int64_t function_5679e0();
int64_t function_567a10();
int64_t function_56fa00();
int64_t function_ffffffff891d271e();
int64_t function_ffffffff9b292ada();
int64_t function_ffffffff9bd25c12();
int64_t function_ffffffffad7e315c();
int64_t function_ffffffffdd16720e();
int64_t function_fffffffffe58411e();
int64_t unknown_14c34406();
int64_t unknown_1927fb6();
int64_t unknown_1a985901();
int64_t unknown_1ceb0cc2();
int64_t unknown_1fa5b0ef();
int64_t unknown_24204690();
int64_t unknown_253b22a8();
int64_t unknown_27449dea();
int64_t unknown_2a47da51();
int64_t unknown_2b11bd42();
int64_t unknown_329e315f();
int64_t unknown_3444c3c4();
int64_t unknown_3992efc4();
int64_t unknown_3a3ba6ae();
int64_t unknown_3a4bfda3();
int64_t unknown_3a63ad8d();
int64_t unknown_3ab3f54d();
int64_t unknown_3d2ff0a8();
int64_t unknown_3d3d0699();
int64_t unknown_3da0e517();
int64_t unknown_476dce20();
int64_t unknown_4ebedab9();
int64_t unknown_514f532e();
int64_t unknown_5890b0fa();
int64_t unknown_58bfa9b4();
int64_t unknown_7a96d004();
int64_t unknown_7ac003bd();
int64_t unknown_7e48d4e5();
int64_t unknown_83198c4();
int64_t unknown_c40cdcb();
int64_t unknown_ffffffff83375309();
int64_t unknown_ffffffff843cbad8();
int64_t unknown_ffffffff8bf4816f();
int64_t unknown_ffffffff923eaaae();
int64_t unknown_ffffffffa097ad16();
int64_t unknown_ffffffffa09a6cdf();
int64_t unknown_ffffffffab3d6714();
int64_t unknown_ffffffffb8c96b61();
int64_t unknown_ffffffffc5b1fbc9();
int64_t unknown_ffffffffd4cfcaf0();
int64_t unknown_ffffffffe3a5e0d1();
int64_t unknown_ffffffffe43f7bff();
int64_t unknown_ffffffffeeb074e7();
int64_t unknown_fffffffff2413aea();

// Address range: 0x2e070e - 0x2e070f
int64_t function_2e070e(void) {
    // 0x2e070e
    int64_t result; // 0x2e070e
    return result;
}

// Address range: 0x2e0710 - 0x2e0712
int64_t function_2e0710(int64_t a1) {
    // 0x2e0710
    int64_t result; // 0x2e0710
    return result;
}

// Address range: 0x2e072e - 0x2e073a
int64_t function_2e072e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e072e
    bool v1; // 0x2e072e
    if (v1) {
        function_2e0705();
    }
    char * v2 = (char *)(8 * a1 - 0x4a0afe18 + a3); // 0x2e0730
    int64_t v3; // 0x2e072e
    *v2 = *v2 + (char)((uint64_t)v3 / 256);
    return a1 & 0xffffffff;
}

// Address range: 0x2e0750 - 0x2e0751
int64_t function_2e0750(void) {
    // 0x2e0750
    int64_t result; // 0x2e0750
    return result;
}

// Address range: 0x2e078a - 0x2e078d
int64_t function_2e078a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e078a
    int64_t v1; // 0x2e078a
    int64_t v2 = v1;
    bool v3; // 0x2e078a
    return v2 - 256 * ((int64_t)v3 + a3) & 0xff00 | v2 & -0xff01;
}

// Address range: 0x2e07ed - 0x2e0804
int64_t function_2e07ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e07ed
    int64_t v1; // 0x2e07ed
    int64_t v2 = v1;
    *(char *)v2 = 3 * (char)v2;
    int32_t * v3 = (int32_t *)(a2 - 77 + a4); // 0x2e07f4
    *v3 = *v3 + (int32_t)a4;
    char * v4 = (char *)(v2 + 7); // 0x2e07f8
    *v4 = *v4 + (char)((uint64_t)v1 / 256);
    return (int64_t)(((int32_t)v2 & -236) - *(int32_t *)(a4 - 0x4c5a1200));
}

// Address range: 0x2e0820 - 0x2e0821
int64_t function_2e0820(void) {
    // 0x2e0820
    int64_t result; // 0x2e0820
    return result;
}

// Address range: 0x2e0864 - 0x2e0868
int64_t function_2e0864(void) {
    // 0x2e0864
    int64_t result; // 0x2e0864
    return result;
}

// Address range: 0x2e086c - 0x2e086d
int64_t function_2e086c(void) {
    // 0x2e086c
    int64_t result; // 0x2e086c
    return result;
}

// Address range: 0x2e0893 - 0x2e08c8
int64_t function_2e0893(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e0893
    *(int32_t *)0xe85fb951 = *(int32_t *)0xe85fb951 - 0x17a046c6;
    int32_t v1 = unknown_3d2ff0a8(); // 0x2e08a7
    int64_t v2 = 0x10000 * v1 >> 16; // 0x2e08aa
    if (v1 < 0x17a046c6) {
        v2 = function_2e086c();
    }
    int32_t * v3 = (int32_t *)((256 * v2 & 0xff00 | 0x4dec00d8) - 57); // 0x2e08b4
    *v3 = *v3 + (int32_t)a2;
    __asm_in((int16_t)a3);
    int32_t * v4 = (int32_t *)(a3 - 0x534c50db); // 0x2e08b8
    *v4 = *v4 >> 24;
    return unknown_83198c4();
}

// Address range: 0x2e08d5 - 0x2e08db
int64_t function_2e08d5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e08d5
    int64_t v1; // 0x2e08d5
    return v1 + a2 & 0xffffffff;
}

// Address range: 0x2e0b0e - 0x2e0b14
int64_t function_2e0b0e(void) {
    // 0x2e0b0e
    int64_t result; // 0x2e0b0e
    char * v1 = (char *)(result + (int64_t)&g1); // 0x2e0b0e
    *v1 = *v1 / 2;
    return result;
}

// Address range: 0x2e0b79 - 0x2e0b7b
int64_t function_2e0b79(void) {
    // 0x2e0b79
    int64_t v1; // 0x2e0b79
    return function_2e0bee(v1, v1, v1, v1);
}

// Address range: 0x2e0be7 - 0x2e0bee
int64_t function_2e0be7(int64_t a1) {
    // 0x2e0be7
    int64_t v1; // 0x2e0be7
    *(char *)a1 = (char)(v1 / 256) + (char)v1;
    return unknown_1fa5b0ef(a1);
}

// Address range: 0x2e0bee - 0x2e0c02
int64_t function_2e0bee(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2e0bee
    int64_t result; // 0x2e0bee
    char * v1 = (char *)(result + 0x250b000); // 0x2e0bee
    *v1 = *v1 + (char)result;
    char * v2 = (char *)(result - 0x42fe1800); // 0x2e0bf6
    *v2 = *v2 + (char)(a4 / 256);
    char * v3 = (char *)(a4 + 0x40e91400); // 0x2e0bfc
    *v3 = *v3 + (char)result;
    return result;
}

// Address range: 0x2e0c57 - 0x2e0c58
int64_t function_2e0c57(void) {
    // 0x2e0c57
    int64_t result; // 0x2e0c57
    return result;
}

// Address range: 0x2e0cba - 0x2e0cfd
int64_t function_2e0cba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a2; // 0x2e0cba
    int64_t v2 = unknown_1ceb0cc2(); // 0x2e0cbc
    int64_t v3; // 0x2e0cba
    int64_t v4 = v3 + a3 + (int64_t)(-1 - (int32_t)v3 < v1); // 0x2e0cc1
    char * v5 = (char *)(v2 + 0x33f8baa5); // 0x2e0cc3
    *v5 = *v5 + (char)v2;
    int64_t v6; // 0x2e0cba
    int64_t v7 = (int64_t)&v6; // bp-8, 0x2e0ccb
    int64_t v8 = v3 - v2; // 0x2e0ccc
    int64_t v9 = v8 & 0xffffffff; // 0x2e0ccc
    int32_t * v10 = (int32_t *)(a2 - 119); // 0x2e0cce
    *v10 = *v10 + v1;
    int64_t v11 = a4 & -0xff01 | (int64_t)&g3; // 0x2e0cd1
    int32_t * v12 = (int32_t *)(2 * v9 + 0x4701e814); // 0x2e0cd8
    int32_t v13 = v2; // 0x2e0cd8
    *v12 = *v12 | v13;
    *(int32_t *)0x88da069e = *(int32_t *)0x88da069e | v13;
    int32_t * v14 = (int32_t *)(v9 + 31); // 0x2e0ce1
    int32_t v15 = *v14; // 0x2e0ce1
    *v14 = v15 - 0x7725f962;
    int32_t * v16 = (int32_t *)(v3 - 104); // 0x2e0ce4
    *v16 = *v16 + (int32_t)v8 + (int32_t)((v15 ^ -2) < 0x88da069e);
    int32_t * v17 = (int32_t *)(v4 & 0xffffffff); // 0x2e0ce7
    *v17 = *v17 | (int32_t)v3;
    char * v18 = (char *)(8 * v9 + v2); // 0x2e0ce9
    *v18 = *v18 | (char)v4;
    int32_t * v19 = (int32_t *)(v11 + 61 + 8 * v11); // 0x2e0cec
    *v19 = *v19 + (int32_t)(int64_t)&v7;
    int32_t * v20 = (int32_t *)(v3 & 0xffffffff); // 0x2e0cf2
    *v20 = *v20 + (int32_t)v4;
    return unknown_5890b0fa(0x88da069e);
}

// Address range: 0x39229e - 0x3922ad
int64_t function_39229e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(__asm_sti() - 112); // 0x39229f
    *v1 = *v1 & (char)a3;
    int64_t result = unknown_253b22a8(); // 0x3922a2
    int64_t v2; // 0x39229e
    *(char *)a1 = *(char *)&v2;
    return result;
}

// Address range: 0x3922ce - 0x3922d3
int64_t function_3922ce(void) {
    // 0x3922ce
    return function_ffffffffad7e315c();
}

// Address range: 0x39239b - 0x39239c
int64_t function_39239b(int64_t a1) {
    // 0x39239b
    int64_t result; // 0x39239b
    return result;
}

// Address range: 0x3923ac - 0x3923bf
int64_t function_3923ac(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = unknown_58bfa9b4(); // 0x3923ac
    int64_t v2; // 0x3923ac
    int32_t * v3 = (int32_t *)(a4 + 0x1374f7ab + v2); // 0x3923b3
    int32_t v4 = a1; // 0x3923b3
    *v3 = *v3 + v4;
    int64_t v5; // 0x3923ac
    *(int32_t *)a3 = *(int32_t *)&v5 + v4;
    return (v1 + a4 / 256) % 256 | v1 & -256;
}

// Address range: 0x3923c1 - 0x3923d9
int64_t function_3923c1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3923c1
    int64_t v1; // 0x3923c1
    int64_t v2 = v1;
    int64_t result = (v2 - a4 / 256) % 256 | v2 & -256; // 0x3923c9
    int32_t * v3 = (int32_t *)(result + 15 + (int64_t)(-82 * *(int32_t *)(a1 - 0x7fa34b73))); // 0x3923cb
    *v3 = *v3 + (int32_t)result;
    uint32_t v4 = (int32_t)a4 % 32; // 0x3923d2
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)result; // 0x3923d2
        uint32_t v6 = *v5; // 0x3923d2
        *v5 = v6 >> v4 | v6 << 32 - v4;
    }
    return result;
}

// Address range: 0x3923e1 - 0x3923e2
int64_t function_3923e1(void) {
    // 0x3923e1
    int64_t result; // 0x3923e1
    return result;
}

// Address range: 0x3923e6 - 0x392402
int64_t function_3923e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 + 0x76458001); // 0x3923eb
    int64_t v2; // 0x3923e6
    *v1 = *v1 + (int32_t)v2;
    int64_t v3 = a4 - 1; // 0x3923f1
    char * v4 = (char *)v3; // 0x3923f5
    *v4 = *v4 | (char)v3;
    int64_t result = unknown_ffffffffe43f7bff(); // 0x3923f9
    __asm_out((int16_t)((v2 | v2) % 256 | a3 & 0xff00), (int32_t)result);
    return result;
}

// Address range: 0x392412 - 0x392413
int64_t function_392412(int64_t a1) {
    // 0x392412
    int64_t result; // 0x392412
    return result;
}

// Address range: 0x39249e - 0x3924a3
int64_t function_39249e(void) {
    // 0x39249e
    int64_t result; // 0x39249e
    return result;
}

// Address range: 0x392511 - 0x392670
int64_t function_392511(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t result) {
    int64_t v1 = a3;
    int64_t v2; // 0x392511
    int64_t v3 = unknown_3da0e517() + v2; // 0x392516
    int32_t * v4 = (int32_t *)(2 * a3 - 0x47c6fe00 + (v3 & 0xffffffff)); // 0x392518
    uint32_t v5 = *v4; // 0x392518
    uint32_t v6 = (int32_t)a4; // 0x392518
    int32_t v7 = v5 + v6; // 0x392518
    *v4 = v7;
    uint32_t v8 = v6 % 32; // 0x39251f
    int32_t v9 = v7; // 0x39251f
    bool v10 = v7 < v5; // 0x39251f
    if (v8 != 0) {
        int32_t v11 = *(int32_t *)&v1; // 0x39251f
        v9 = v11 << v8;
        *(int32_t *)v1 = v9;
        v10 = (v11 & 0x80000000 >> v8 - 1) != 0;
    }
    if (!v10 && v9 != 0) {
        // 0x39253e
        *(char *)0x1e847d0 = (char)v2;
        return unknown_ffffffffb8c96b61(0x820a5bbb);
    }
    int32_t v12 = v2; // 0x392530
    uint32_t v13 = (int32_t)v3 + v12; // 0x392530
    if (v13 <= 0x93f79bdb) {
        int32_t v14 = v13 + 0x6c086424; // 0x392532
        return 0x1000 * (int64_t)((v13 & 12) == 12) | (int64_t)(v14 & -0xff01 | 512) | 0x4000 * (int64_t)(v14 == 0) | 0x8000 * (int64_t)(v14 < 0) | 1024 * (int64_t)(llvm_ctpop_i8((char)v14) % 2 == 0);
    }
    // 0x3925b3
    bool v15; // 0x392511
    int64_t v16 = v15 ? -4 : 4;
    int64_t v17 = a4; // 0x3925b8
    int64_t v18 = (unknown_4ebedab9() ^ 0xffffffff) + a2 & 0xffffffff; // 0x3925b8
    int64_t v19 = a1;
    int64_t v20 = unknown_3992efc4(); // 0x3925be
    char * v21 = (char *)(v20 + 0x2020000); // 0x3925c3
    *v21 = *v21 + (char)v20;
    uint64_t v22 = v20 + v17 / 256; // 0x3925c9
    int64_t v23 = v20 & -256; // 0x3925c9
    int32_t v24 = *(int32_t *)-0x19178d18 + v12; // 0x3925cb
    *(int32_t *)-0x19178d18 = v24;
    while (v24 >= 1) {
        unsigned char v25 = (char)v17 - *(char *)(v1 + 59); // 0x3925ba
        v17 = v17 & -256 | (int64_t)v25;
        char * v26 = (char *)(v17 - 103 + v1); // 0x3925d3
        *v26 = *v26 + (char)v22;
        char * v27 = (char *)(((v1 + v22) % 256 | v23) - 24); // 0x3925d9
        *v27 = *v27 + v25;
        char v28 = __asm_in_133(-24); // 0x3925dc
        int64_t v29 = v23 | (int64_t)v28; // 0x3925dc
        *(int32_t *)0x732c6227 = *(int32_t *)0x732c6227 + v12;
        int32_t v30 = v29; // 0x3925e4
        v1 = v30 >> 31;
        *(int32_t *)v19 = v30;
        int64_t v31 = v19 + v16; // 0x3925e5
        char * v32 = (char *)(v17 + 0x1e8aabd); // 0x3925e6
        *v32 = *v32 + v28;
        unsigned char v33 = v28 - 60; // 0x3925ec
        *(int32_t *)v31 = *(int32_t *)v18;
        int64_t v34 = v31 + v16; // 0x3925ee
        v18 += v16;
        if (v33 == 0) {
            int64_t v35 = v29 & -256 | (int64_t)v33; // 0x3925ec
            int32_t * v36 = (int32_t *)v35; // 0x3925f1
            *v36 = *v36 + (int32_t)v35;
            int32_t * v37 = (int32_t *)(4 * a6 + 22 + v34); // 0x3925f6
            int32_t v38 = v34; // 0x3925f6
            *v37 = *v37 ^ v38;
            int64_t v39 = unknown_1a985901(v34, v18, a6); // 0x3925fa
            uint32_t v40 = 0x2ad392bc * *(int32_t *)v17; // 0x392600
            v1 = v40;
            int32_t * v41 = (int32_t *)v34; // 0x39260b
            uint32_t v42 = *v41; // 0x39260b
            int32_t v43 = v42 + v12; // 0x39260b
            *v41 = v43;
            char v44 = v39; // 0x39260d
            __asm_out_134(106, v44);
            *(char *)v34 = __asm_insb((int16_t)v40);
            if (v43 >= v42) {
                if (v43 < 0 != ((v43 ^ v42) & (v43 ^ v12)) < 0) {
                    // 0x392616
                    return result;
                }
                int64_t result2 = unknown_514f532e(); // 0x392628
                int32_t * v45 = (int32_t *)(v1 - 85); // 0x392638
                *v45 = *v45 + v38;
                return result2;
            }
            int32_t * v46 = (int32_t *)(v2 - 95); // 0x392665
            uint32_t v47 = *v46; // 0x392665
            uint32_t v48 = v47 + (int32_t)v18; // 0x392665
            *v46 = v48;
            __asm_out_134(0, v44);
            char * v49 = (char *)v1; // 0x39266e
            *v49 = *v49 - (v48 < v47 ? 94 : 93);
            return 0x10000 * v38 >> 16;
        }
        v19 = v34;
        v20 = unknown_3992efc4();
        v21 = (char *)(v20 + 0x2020000);
        *v21 = *v21 + (char)v20;
        v22 = v20 + v17 / 256;
        v23 = v20 & -256;
        v24 = *(int32_t *)-0x19178d18 + v12;
        *(int32_t *)-0x19178d18 = v24;
    }
    uint64_t v50 = 2 * (v22 % 256 | v23) + 82; // 0x39256c
    int32_t * v51 = (int32_t *)(((v50 / 256 ^ v22) % 256 | v23) + 0x7b1d8989); // 0x392572
    *v51 = *v51 + 0x1e847e8;
    int32_t * v52 = (int32_t *)(v19 - 24); // 0x39257a
    *v52 = *v52 / 2;
    *(int32_t *)v19 = (int32_t)unknown_3a63ad8d() | 141;
    unknown_3a4bfda3();
    int32_t * v53 = (int32_t *)((v50 & 0xfffffffe) + 0x10d201dd); // 0x3925a2
    *v53 = *v53 + (int32_t)v50;
    int64_t v54 = unknown_3a3ba6ae(); // 0x3925a8
    return (v54 + 210) % 256 | v54 & -256;
}

// Address range: 0x392683 - 0x39268d
int64_t function_392683(void) {
    // 0x392683
    int64_t v1; // 0x392683
    int32_t * v2 = (int32_t *)(v1 - 118); // 0x392683
    *v2 = *v2 + (int32_t)v1;
    return function_ffffffff891d271e();
}

// Address range: 0x3926d7 - 0x3926f8
int64_t function_3926d7(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x3926d7
    int64_t v1; // 0x3926d7
    int64_t v2 = v1;
    int16_t v3 = a3; // 0x3926dc
    __asm_outsd(v3, (int32_t)v1);
    *(char *)v2 = 2 * (char)v2;
    __asm_out(v3, (int32_t)v2);
    int64_t v4; // 0x3926d7
    *(char *)a4 = *(char *)&v4 & (char)(a4 / 256);
    char * v5 = (char *)(a4 - 0x24df3c89); // 0x3926eb
    *v5 = *v5 ^ (char)(a3 / 256);
    return function_1762760();
}

// Address range: 0x392738 - 0x392739
int64_t function_392738(int64_t a1) {
    // 0x392738
    int64_t result; // 0x392738
    return result;
}

// Address range: 0x3927ae - 0x392801
int64_t function_3927ae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    unknown_1927fb6();
    int32_t * v2 = (int32_t *)(a2 + 0x76e88d55); // 0x3927f1
    *v2 = *v2 + (int32_t)a4;
    __asm_int3();
    int64_t v3; // 0x3927ae
    __asm_outsd((int16_t)(v3 & a3), *(int32_t *)&v1);
    return function_2b929e9();
}

// Address range: 0x392832 - 0x392833
int64_t function_392832(int64_t a1) {
    // 0x392832
    int64_t result; // 0x392832
    return result;
}

// Address range: 0x39284b - 0x392854
int64_t function_39284b(void) {
    // 0x39284b
    int64_t v1; // 0x39284b
    int32_t * v2 = (int32_t *)(3 * v1); // 0x39284b
    *v2 = *v2 + (int32_t)v1;
    int64_t result; // 0x39284b
    *(char *)result = *(char *)&result + 60;
    return result;
}

// Address range: 0x3928bf - 0x3928c0
int64_t function_3928bf(int64_t a1) {
    // 0x3928bf
    int64_t result; // 0x3928bf
    return result;
}

// Address range: 0x3928d1 - 0x3928de
int64_t function_3928d1(int64_t a1) {
    // 0x3928d1
    int64_t v1; // 0x3928d1
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a1;
    return 0x6155a6c8;
}

// Address range: 0x392936 - 0x392937
int64_t function_392936(void) {
    // 0x392936
    int64_t result; // 0x392936
    return result;
}

// Address range: 0x392944 - 0x39295c
int64_t function_392944(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 116); // 0x392944
    *v1 = *v1 & (char)a3;
    *(int32_t *)-0x17c4eeac = *(int32_t *)-0x17c4eeac >> 1;
    int64_t result; // 0x392944
    int32_t * v2 = (int32_t *)(result + 58); // 0x392953
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x39298f - 0x3929d7
int64_t function_39298f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x39298f
    int64_t v1; // 0x39298f
    int32_t * v2 = (int32_t *)(v1 - 0x4e3a8e8a); // 0x392991
    int32_t v3 = v1; // 0x392991
    *v2 = *v2 + v3;
    bool v4; // 0x39298f
    int64_t v5 = v4 ? -1 : 1; // 0x392997
    int64_t v6 = v5 + a1; // 0x392997
    __asm_outsb((int16_t)a3, *(char *)(v5 + a2));
    char * v7 = (char *)(v6 - 0x1750cab4); // 0x3929a1
    int64_t v8; // 0x39298f
    *v7 = *v7 | (char)v8;
    int32_t * v9 = (int32_t *)(a3 + 0x2c0071a1); // 0x3929a7
    *v9 = *v9 + v3;
    __asm_out_134(-128, (char)v1);
    int64_t v10 = v1 + 0x9501e848 & 0xffffffff; // 0x3929af
    char * v11 = (char *)(v10 + (8 * a4 | 7)); // 0x3929b4
    char v12 = *v11; // 0x3929b4
    *v11 = (char)((int32_t)v1 > 0x6afe17b7) + (char)(a3 / 256) + v12;
    int32_t * v13 = (int32_t *)(v10 + 0x6de23a0b); // 0x3929b8
    uint32_t v14 = *v13; // 0x3929b8
    uint32_t v15 = v14 + v3; // 0x3929b8
    *v13 = v15;
    unknown_3444c3c4();
    int64_t result = __asm_int3(); // 0x3929c3
    char v16 = *(char *)&v8; // 0x3929c4
    *(char *)v8 = (char)(v15 < v14) + (char)a3 + v16;
    __asm_frstor(*(int864_t *)v6);
    int32_t * v17 = (int32_t *)(v6 - 51); // 0x3929d3
    *v17 = *v17 + (int32_t)v8;
    return result;
}

// Address range: 0x3929d7 - 0x3929df
int64_t function_3929d7(int64_t a1) {
    // 0x3929d7
    int64_t result; // 0x3929d7
    return result;
}

// Address range: 0x3929df - 0x3929e7
int64_t function_3929df(int64_t a1) {
    // 0x3929df
    return unknown_7e48d4e5(a1);
}

// Address range: 0x3929e7 - 0x392a04
int64_t function_3929e7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3929e7
    int64_t v1; // 0x3929e7
    *(char *)a4 = (char)v1 + (char)(a4 / 256);
    unknown_ffffffffd4cfcaf0();
    int32_t * v2 = (int32_t *)(a1 + 0x4e9d3a19); // 0x3929f6
    *v2 = *v2 + (int32_t)v1;
    return unknown_7a96d004();
}

// Address range: 0x392a05 - 0x392a6e
int64_t function_392a05(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x392a05
    int64_t result; // 0x392a05
    bool v1; // 0x392a05
    if (v1) {
        // 0x392a09
        *(char *)0x254c0089310801e8 = (char)result;
        return result;
    }
    int64_t v2 = unknown_2a47da51(); // 0x392a4b
    *(int32_t *)a1 = (int32_t)(v2 & 0xffffff00 | a1 | (v2 + 148) % 256);
    *(char *)-0x156e1c26 = *(char *)-0x156e1c26 >> 1;
    return unknown_ffffffff8bf4816f((v1 ? -4 : 4) + a1, (int32_t)result + (int32_t)a2);
}

// Address range: 0x392a7e - 0x392a87
int64_t function_392a7e(void) {
    // 0x392a7e
    return function_22135f2();
}

// Address range: 0x392aa1 - 0x392aa2
int64_t function_392aa1(int64_t a1) {
    // 0x392aa1
    int64_t result; // 0x392aa1
    return result;
}

// Address range: 0x392ab5 - 0x392adc
int64_t function_392ab5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 0x1f821603); // 0x392ab5
    int64_t v2; // 0x392ab5
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x392ab5
    *(char *)v3 = *(char *)&v3 | (char)a3;
    char * v4 = (char *)(v2 - 0x6402a409); // 0x392abd
    *v4 = *v4 + (char)(v3 / 256);
    unknown_ffffffffc5b1fbc9();
    return unknown_ffffffff843cbad8();
}

// Address range: 0x392adc - 0x392ade
int64_t function_392adc(void) {
    // 0x392adc
    int64_t v1; // 0x392adc
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x392af1 - 0x392af8
int64_t function_392af1(int64_t a1) {
    // 0x392af1
    int64_t result; // 0x392af1
    int32_t * v1 = (int32_t *)(result - 0x6cff6e18); // 0x392af1
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x392b19 - 0x392b1a
int64_t function_392b19(void) {
    // 0x392b19
    int64_t result; // 0x392b19
    return result;
}

// Address range: 0x3b1a15 - 0x3b1a22
int64_t function_3b1a15(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_476dce20(); // 0x3b1a1a
    int64_t v1; // 0x3b1a15
    int32_t * v2 = (int32_t *)(v1 - 25); // 0x3b1a1f
    *v2 = *v2 + (int32_t)v1;
    return result;
}

// Address range: 0x3b1a27 - 0x3b1a2a
int64_t function_3b1a27(void) {
    // 0x3b1a27
    int64_t result; // 0x3b1a27
    return result;
}

// Address range: 0x3b1a71 - 0x3b1a76
int64_t function_3b1a71(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b1a71
    int64_t result; // 0x3b1a71
    return result;
}

// Address range: 0x3b1aa3 - 0x3b1ab2
int64_t function_3b1aa3(void) {
    // 0x3b1aa3
    unknown_ffffffff923eaaae();
    return function_fffffffffe58411e();
}

// Address range: 0x3b1ab2 - 0x3b1ab6
int64_t function_3b1ab2(int64_t a1, int64_t a2) {
    // 0x3b1ab2
    int64_t v1; // 0x3b1ab2
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x3b1ab7 - 0x3b1ac8
int64_t function_3b1ab7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b1ab7
    return unknown_7ac003bd(a1, a2, a3, a4);
}

// Address range: 0x3b1ac8 - 0x3b1ace
int64_t function_3b1ac8(int64_t a1) {
    // 0x3b1ac8
    return unknown_ffffffffe3a5e0d1(a1);
}

// Address range: 0x3b1acf - 0x3b1af0
int64_t function_3b1acf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b1acf
    int64_t v1; // 0x3b1acf
    int32_t * v2 = (int32_t *)(v1 - 24); // 0x3b1ad2
    bool v3; // 0x3b1acf
    *v2 = 0x80000000 * (int32_t)v3 | *v2 / 2;
    int32_t * v4 = (int32_t *)(a1 - 0x1b6d70d6); // 0x3b1ad7
    *v4 = *v4 + (int32_t)v1;
    int64_t v5 = v3 ? -1 : 1; // 0x3b1add
    return unknown_fffffffff2413aea(v5 + a1, v5 + a2);
}

// Address range: 0x3b1b45 - 0x3b1b75
int64_t function_3b1b45(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)(a4 + 0x788c01e8) + (char)a3; // 0x3b1b4b
    int64_t v2 = a3 & -256 | (int64_t)v1; // 0x3b1b4b
    int64_t v3; // 0x3b1b45
    int64_t v4 = v3 & -256 | (int64_t)__asm_in((int16_t)v2); // 0x3b1b5a
    if (v1 != 0) {
        v4 = function_3b1b45(a1, a2, v2, a4);
    }
    int32_t v5 = v2; // 0x3b1b5d
    *(int32_t *)a2 = v5 + (int32_t)a2;
    int32_t * v6 = (int32_t *)((v4 & 0xffffffff) + 113); // 0x3b1b65
    uint32_t v7 = *v6; // 0x3b1b65
    uint32_t v8 = v7 + v5; // 0x3b1b65
    *v6 = v8;
    char * v9 = (char *)(a1 - 0x311d606f); // 0x3b1b68
    *v9 = *v9 + (char)(v8 < v7);
    return function_ffffffffdd16720e();
}

// Address range: 0x3b1b8c - 0x3b1be1
int64_t function_3b1b8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int64_t v2; // 0x3b1b8c
    bool v3; // 0x3b1b8c
    if (!v3 && !v3) {
        // 0x3b1b8e
        *(int32_t *)a1 = (int32_t)a1 - 24;
        int64_t v4; // 0x3b1b8c
        int64_t v5 = v4;
        *(int32_t *)v5 = *(int32_t *)&v4 + (int32_t)v5;
        int32_t v6; // 0x3b1b8c
        int32_t v7; // 0x3b1b8c
        if (a4 == 1) {
            function_3b1b8c(v1, a2, a5, 0, (int64_t)&g26, (int64_t)&g26);
            int32_t v8 = v1;
            v6 = v8;
            v7 = v8;
        } else {
            // 0x3b1b8e
            v6 = v1;
            v7 = *(int32_t *)&v1;
        }
        // 0x3b1b9c
        *(int32_t *)v1 = v6;
        v1 = v7;
        int64_t v9 = (int64_t)(*(int32_t *)-0x7f72ff97063c36ca >> 31); // 0x3b1bbe
        v4 = v9;
        char v10 = *(char *)-0x2370c838; // 0x3b1bbf
        *(char *)-0x2370c838 = v10 + (char)((int64_t)&g25 >> 8);
        v2 = v9;
    }
    int64_t result = v2 + 0x19d01ee & 0xd9e07a68 | 0x261f8597; // 0x3b1bcc
    char * v11 = (char *)result; // 0x3b1bd6
    *v11 = *v11 + (char)result;
    return result;
}

// Address range: 0x3b1bfd - 0x3b1c00
int64_t function_3b1bfd(int64_t a1) {
    // 0x3b1bfd
    int64_t result; // 0x3b1bfd
    return result;
}

// Address range: 0x3b1ca4 - 0x3b1cab
int64_t function_3b1ca4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x3b1ca4
    int64_t result; // 0x3b1ca4
    if (v1 != 0) {
        char * v2 = (char *)(result + 0x1e8741a); // 0x3b1ca4
        unsigned char v3 = *v2; // 0x3b1ca4
        *v2 = v3 >> v1 | v3 << 8 - v1;
    }
    return result;
}

// Address range: 0x3b1d3d - 0x3b1d3e
int64_t function_3b1d3d(void) {
    // 0x3b1d3d
    int64_t result; // 0x3b1d3d
    return result;
}

// Address range: 0x3b1d53 - 0x3b1d55
int64_t function_3b1d53(int64_t a1) {
    // 0x3b1d53
    int64_t result; // 0x3b1d53
    return result;
}

// Address range: 0x3b1d57 - 0x3b1d59
int64_t function_3b1d57(void) {
    // 0x3b1d57
    return function_3b1d3d();
}

// Address range: 0x3b1d59 - 0x3b1d67
int64_t function_3b1d59(void) {
    // 0x3b1d59
    int64_t v1; // 0x3b1d59
    int64_t v2 = v1;
    int64_t result = unknown_329e315f(); // 0x3b1d59
    *(int64_t *)v2 = v2 | -115;
    return result;
}

// Address range: 0x3b1d75 - 0x3b1d99
int64_t function_3b1d75(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 0xa44301e8; // 0x3b1d75
    char * v2 = (char *)(a3 - 85); // 0x3b1d7f
    *v2 = *v2 | (char)v1;
    __asm_int(114);
    uint32_t v3 = *(int32_t *)0x4cd92e95bf01e895; // 0x3b1d84
    int64_t result = (v1 + (int64_t)v3) % 256 | (int64_t)(v3 & -256); // 0x3b1d8f
    int64_t v4; // 0x3b1d75
    int32_t * v5 = (int32_t *)(result + (8 * v4 | 1)); // 0x3b1d91
    *v5 = *v5 | (int32_t)(v1 | a3);
    return result;
}

// Address range: 0x3b1dac - 0x3b1dad
int64_t function_3b1dac(int64_t a1) {
    // 0x3b1dac
    int64_t result; // 0x3b1dac
    return result;
}

// Address range: 0x3b1ddd - 0x3b1fff
int64_t function_3b1ddd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3 = __asm_sti(); // 0x3b1ddd
    char v4 = a2;
    bool v5; // 0x3b1ddd
    if (!v5) {
        // 0x3b1de0
        __asm_out_135(-20, (int32_t)v3);
        *(char *)a1 = v4;
        int64_t v6 = v5 ? -1 : 1; // 0x3b1de4
        return __asm_iretd(v6 + a1, v2 + v6);
    }
    int64_t v7; // 0x3b1ddd
    int64_t v8; // 0x3b1ddd
    if (!v5) {
        char * v9 = (char *)(v8 + 0x3d00bdca); // 0x3b1e32
        unsigned char v10 = *v9; // 0x3b1e32
        *v9 = v10 / 2 | 128 * v10;
        int32_t * v11 = (int32_t *)(v7 + 0x4f9e3fa0); // 0x3b1e38
        *v11 = *v11 + (int32_t)a4;
        return __asm_int1(0x68b64e0b, *(int32_t *)(a1 + 64) + (int32_t)a2);
    }
    uint32_t v12 = (int32_t)a3;
    int64_t v13 = a3; // bp-8, 0x3b1e81
    int64_t v14 = __asm_int1(a1, (int32_t)a2); // 0x3b1e82
    __asm_outsb((int16_t)a3, v4);
    int32_t v15 = (int64_t)&v13; // 0x3b1e87
    uint32_t v16 = v15 + v12; // 0x3b1e87
    *(int32_t *)a3 = v16;
    char * v17 = (char *)(v14 + 0x750c3e12); // 0x3b1e89
    *v17 = (char)(v16 < v12) - (char)a4 + *v17;
    int64_t v18 = __asm_hlt((int32_t)unknown_3d3d0699() + (int32_t)a1); // 0x3b1e9a
    char v19 = v18; // 0x3b1e9b
    *(char *)v1 = *(char *)&v1 + v19;
    int64_t v20 = v13; // 0x3b1ea8
    v13 = -0x17f80380;
    *(int32_t *)v7 = *(int32_t *)&v7 + (int32_t)v20;
    int64_t * v21 = (int64_t *)(v18 - 66); // 0x3b1eb0
    uint64_t v22 = *v21; // 0x3b1eb0
    *v21 = v22 / 256 | 0x100000000000000 * v22;
    unsigned char v23 = *(char *)-0x17764ee2; // 0x3b1eb5
    *(char *)-0x17764ee2 = v23 / 128 | 2 * v23;
    char * v24 = (char *)(8 * v8 + 99 + v7); // 0x3b1ebd
    *v24 = *v24 | v19;
    unknown_c40cdcb(v20);
    int32_t v25 = v8; // 0x3b1ed3
    *(int32_t *)((int64_t)*(int32_t *)-0x39fe17cea5b7fa40 - 0x55aae537) = v25;
    unknown_ffffffffa09a6cdf();
    int16_t v26 = (int16_t)*(char *)(v2 - 80) | -0x172d; // 0x3b1ede
    int32_t v27 = __asm_insd(v26); // 0x3b1ee1
    int32_t * v28 = (int32_t *)v20; // 0x3b1ee1
    *v28 = v27;
    unknown_27449dea();
    uint32_t v29 = __asm_in_136(-128); // 0x3b1eea
    char * v30 = (char *)(v8 - 76); // 0x3b1ef2
    unsigned char v31 = *v30; // 0x3b1ef2
    char v32 = v29 > 0x37fe178d; // 0x3b1ef2
    unsigned char v33 = v32 + (char)v8; // 0x3b1ef2
    char v34 = v31 - v33; // 0x3b1ef2
    bool v35 = v29 > 0x37fe178d ? v33 != -1 | v31 < v34 - v32 : v31 < v33; // 0x3b1ef2
    *v30 = v34;
    uint64_t v36 = v18 & 0xffffff00; // 0x3b1ef7
    char v37 = v36 / 256; // 0x3b1ef9
    *(char *)-0x27c2f8ad = *(char *)-0x27c2f8ad + v37;
    char v38; // 0x3b1ddd
    unsigned char v39 = v38 | (char)(v7 + v18 + (int64_t)v35); // 0x3b1eff
    int64_t v40 = v36 | (int64_t)v39; // 0x3b1eff
    *(int32_t *)-0x456713b695fe17b7 = v15;
    *v28 = *(int32_t *)&v2;
    int64_t v41 = v2; // 0x3b1f0e
    int64_t v42 = v41 + 4; // 0x3b1f0e
    v2 = v42;
    int64_t v43 = v20 + 5; // 0x3b1f0f
    int64_t v44 = unknown_ffffffffa097ad16(v43, v42); // 0x3b1f10
    int64_t v45 = v7; // 0x3b1f15
    v7 = v45 & -256 | (int64_t)(*(char *)(v41 - 120) | (char)v45);
    int32_t v46 = __asm_insd(v26); // 0x3b1f18
    int32_t * v47 = (int32_t *)v43; // 0x3b1f18
    *v47 = v46;
    char * v48 = (char *)v44; // 0x3b1f19
    *v48 = *v48 - (char)v44;
    char * v49 = (char *)(v40 + 0x507f4f35); // 0x3b1f20
    *v49 = *v49 | v39;
    v1 = v44 & 0xffffffff ^ 0x1001e86f;
    int32_t * v50 = (int32_t *)(v8 + 0x74008ab4 + 4 * v40); // 0x3b1f29
    *v50 = *v50 + (int32_t)v43;
    int32_t * v51 = (int32_t *)(v40 + 0x7c45ab74); // 0x3b1f32
    int32_t v52 = v29 - 0x37fe178e + *v51; // 0x3b1f32
    *v51 = v52;
    *v47 = *(int32_t *)v2;
    int64_t v53 = v2 + 4;
    if (v52 == 0) {
        // 0x3b1f80
        *(char *)(v20 + 9) = *(char *)v53;
        int64_t result = unknown_24204690(v20 + 10, v2 + 5); // 0x3b1f8a
        int32_t * v54 = (int32_t *)(v20 - 115); // 0x3b1f8f
        *v54 = *v54 + v25;
        return result;
    }
    int64_t v55 = v20 + 10; // 0x3b1f3b
    unknown_2b11bd42(v55, v53, v1);
    int32_t * v56 = (int32_t *)(v8 + 2); // 0x3b1f46
    *v56 = *v56 - 1;
    char * v57 = (char *)(v7 + 0x3301e800); // 0x3b1f49
    *v57 = *v57 + v37;
    int32_t * v58 = (int32_t *)v1; // 0x3b1f4f
    *v58 = *v58 + (int32_t)v55;
    return __asm_sti();
}

// Address range: 0x3b2000 - 0x3b2011
int64_t function_3b2000(int64_t a1, int64_t a2) {
    // 0x3b2000
    unknown_14c34406();
    int64_t v1; // 0x3b2000
    __asm_iretd(v1, a2);
    return function_ffffffff9b292ada();
}

// Address range: 0x3b2066 - 0x3b2067
int64_t function_3b2066(void) {
    // 0x3b2066
    int64_t result; // 0x3b2066
    return result;
}

// Address range: 0x3b208e - 0x3b20ac
int64_t function_3b208e(int64_t a1, int64_t a2) {
    // 0x3b208e
    int64_t v1; // 0x3b208e
    int32_t v2 = (int32_t)v1 + (int32_t)a1; // 0x3b208e
    *(int32_t *)a1 = v2;
    if (v2 > 0) {
        // 0x3b2099
        return 0x6fb7d587;
    }
    int32_t * v3 = (int32_t *)(a1 - 16); // 0x3b20a4
    *v3 = *v3 + (int32_t)v1;
    return 0x6fb7d587;
}

// Address range: 0x3b20ad - 0x3b210d
int64_t function_3b20ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 70); // 0x3b20b1
    *v1 = *v1 + (int32_t)a2;
    int64_t v2; // 0x3b20ad
    char v3 = *(char *)&v2; // 0x3b20b4
    int64_t v4; // 0x3b20ad
    char v5 = *(char *)&v4; // 0x3b20b4
    bool v6; // 0x3b20ad
    int64_t v7 = v6 ? -1 : 1; // 0x3b20b4
    int64_t v8 = v7 + a1; // 0x3b20b4
    int64_t v9 = v7 + a2; // 0x3b20b4
    v4 = v8;
    v2 = v9;
    if (v3 - v5 >= 0) {
        // 0x3b2103
        return unknown_ffffffff83375309(v8, v9);
    }
    // 0x3b20b7
    return function_3b2134(v8, v9, a3, a4);
}

// Address range: 0x3b210e - 0x3b2134
int64_t function_3b210e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b210e
    int64_t v1; // 0x3b210e
    uint64_t v2 = v1;
    int64_t v3 = unknown_ffffffffab3d6714(); // 0x3b210e
    int32_t * v4 = (int32_t *)(v3 - 0x5db2f7fd); // 0x3b211c
    *v4 = ((int32_t)v3 >> 31) + *v4;
    bool v5; // 0x3b210e
    int32_t * v6 = (int32_t *)((256 * (v1 + v2 / 256 + (int64_t)v5) & 0xff00 | v2 & -0xff01) - 0x3ffeb823); // 0x3b2127
    *v6 = *v6 + (int32_t)v1;
    int64_t result = v3 + 0xe8d85a68 & 0xffffffff; // 0x3b212d
    int32_t * v7 = (int32_t *)result; // 0x3b2132
    *v7 = *v7 + (int32_t)(256 * v3 & 0xff00 ^ a4);
    return result;
}

// Address range: 0x3b2134 - 0x3b214c
int64_t function_3b2134(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b2134
    int64_t v1; // 0x3b2134
    int32_t * v2 = (int32_t *)(((v1 ^ 0x4768f65e) & a4) / 2 % 0x80000000 - 0x6e6f57f6); // 0x3b213d
    *v2 = *v2 + (int32_t)a4;
    int32_t * v3 = (int32_t *)(a3 - 29); // 0x3b2143
    uint32_t v4 = *v3; // 0x3b2143
    *v3 = v4 / 2 | 0x80000000 * v4;
    __asm_int1(a1, (int32_t)a2);
    return unknown_3ab3f54d();
}

// Address range: 0x3b2172 - 0x3b2173
int64_t function_3b2172(void) {
    // 0x3b2172
    int64_t result; // 0x3b2172
    return result;
}

// Address range: 0x3b2174 - 0x3b217f
int64_t function_3b2174(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3b2174
    int64_t v1; // 0x3b2174
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v2;
    int64_t v3; // 0x3b2174
    int32_t v4 = *(int32_t *)&v3; // 0x3b2177
    *(int32_t *)a3 = v4 + (int32_t)((v2 + a4 / 256) % 256 | v2 & 0xffffff00);
    bool v5; // 0x3b2174
    return function_ffffffff9bd25c12((v5 ? -4 : 4) + a1);
}

// Address range: 0x3b21a1 - 0x3b220d
int64_t function_3b21a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3b21a1
    int64_t v1; // 0x3b21a1
    int64_t v2 = v1;
    int64_t v3 = a4;
    int64_t v4 = a1;
    int64_t result; // 0x3b21a1
    bool v5; // 0x3b21a1
    if (!v5) {
        result = function_3b2172();
    }
    int32_t * v6 = (int32_t *)(a1 - 0x7c3907f2); // 0x3b21a6
    *v6 = *v6 + (int32_t)a1;
    char v7 = result; // 0x3b21ac
    if (llvm_ctpop_i8(v7 - 107) % 2 != 0) {
        // 0x3b21b2
        return result;
    }
    // 0x3b21dd
    int3_t v8; // 0x3b21a1
    int3_t v9 = v8 - 1; // 0x3b21dd
    __frontend_reg_store_fpr(v9, (float80_t)*(int32_t *)(a2 + 54));
    __asm_out_137((int16_t)a3 & -256 | 232, v7);
    unknown_ffffffffeeb074e7();
    int32_t v10 = *(int32_t *)((v5 ? -1 : 1) + a2); // 0x3b21f5
    unsigned char v11 = llvm_ctpop_i8((char)(v10 - *(int32_t *)&v4)); // 0x3b21f5
    v4 = a5;
    __frontend_reg_load_fpr(v9);
    if (v11 % 2 != 0) {
        char v12 = *(char *)0x169323af; // 0x3b21c1
        return __asm_wait(v2 & 0xffffff00 | (int64_t)(v12 + (char)v2));
    }
    int32_t v13 = *(int32_t *)&v3; // 0x3b2207
    int64_t v14; // bp+16, 0x3b21a1
    *(int32_t *)v3 = v13 + (int32_t)(int64_t)&v14;
    return v2 & 0xffffffff;
}

// Address range: 0x523d0b - 0x523d84
int64_t function_523d0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x523d0b
    int64_t v1; // 0x523d0b
    unsigned char v2 = (char)v1;
    unsigned char v3 = 2 * v2; // 0x523d0b
    *(char *)v1 = v3;
    bool v4 = v3 == 0; // 0x523d10
    bool v5 = v3 < v2; // 0x523d10
    int64_t v6; // 0x523d0b
    if (v1 != 0) {
        // .lr.ph
        bool v7; // 0x523d0b
        int64_t v8 = v7 ? -1 : 1; // 0x523d10
        int64_t v9 = a1; // 0x523d0b
        int64_t v10; // 0x523d0b
        unsigned char v11 = *(char *)v10; // 0x523d10
        char v12 = *(char *)v9; // 0x523d10
        int64_t v13 = v10 + v8; // 0x523d10
        char v14 = v12; // 0x523d10
        v4 = false;
        while (v11 == v12) {
            int64_t v15; // 0x523d0b
            int64_t v16 = v15 - 1; // 0x523d10
            v9 += v8;
            v15 = v16;
            v14 = v11;
            v4 = true;
            if (v16 == 0) {
                // break -> ._crit_edge.loopexit
                break;
            }
            v11 = *(char *)v13;
            v12 = *(char *)v9;
            v13 += v8;
            v14 = v12;
            v4 = false;
        }
        // ._crit_edge.loopexit
        v5 = v11 < v14;
        v6 = v13;
    }
    bool v17 = v5;
    uint64_t v18 = (int64_t)!((v4 | v17)) - (int64_t)v17; // 0x523d15
    if ((char)v18 == 0) {
        // 0x523d1b
        return v18 % 256 | v1 & -256;
    }
    int64_t v19 = v1 + 16; // 0x523d60
    function_5679e0(v19, v6);
    return function_5679b0(v19, v1, 0);
}

// Address range: 0x523d84 - 0x523da8
int64_t function_523d84(int64_t a1, int64_t a2) {
    // 0x523d84
    int64_t v1; // 0x523d84
    function_518fa0(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return function_523c90();
}

// Address range: 0x523db0 - 0x523db8
int64_t function_523db0(int64_t a1, int64_t a2) {
    // 0x523db0
    return function_56fa00();
}

// Address range: 0x523dc0 - 0x523e3e
int64_t function_523dc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x523dc0
    function_4f51e0();
    *(int64_t *)a1 = (int64_t)&g15;
    bool v1; // 0x523dc0
    int64_t v2 = v1 ? -1 : 1;
    int64_t v3 = (int64_t)&g2; // 0x523dc0
    int64_t v4 = a2; // 0x523dc0
    int64_t v5 = 2; // 0x523def
    unsigned char v6 = *(char *)v4; // 0x523def
    char v7 = *(char *)v3; // 0x523def
    char v8 = v7; // 0x523def
    bool v9 = false; // 0x523def
    while (v6 == v7) {
        v5--;
        v3 += v2;
        v4 += v2;
        v8 = v6;
        v9 = true;
        if (v5 == 0) {
            // break -> 
            break;
        }
        v6 = *(char *)v4;
        v7 = *(char *)v3;
        v8 = v7;
        v9 = false;
    }
    unsigned char v10 = v8;
    int64_t v11 = (int64_t)!((v6 < v10 | v9)) - (int64_t)(v6 < v10); // 0x523df4
    int64_t v12 = (int64_t)"POSIX"; // 0x523df8
    int64_t v13 = a2; // 0x523df8
    if ((char)v11 == 0) {
        // 0x523e14
        return v11 % 256 | (int64_t)&g15 & -256;
    }
    int64_t v14 = 6; // 0x523df8
    unsigned char v15 = *(char *)v13; // 0x523e09
    char v16 = *(char *)v12; // 0x523e09
    v13 += v2;
    char v17 = v16; // 0x523e09
    bool v18 = false; // 0x523e09
    while (v15 == v16) {
        // 0x523dfa
        v14--;
        v12 += v2;
        v17 = v15;
        v18 = true;
        if (v14 == 0) {
            // break -> 
            break;
        }
        v15 = *(char *)v13;
        v16 = *(char *)v12;
        v13 += v2;
        v17 = v16;
        v18 = false;
    }
    unsigned char v19 = v17;
    int64_t v20 = (int64_t)!((v15 < v19 | v18)) - (int64_t)(v15 < v19); // 0x523e0e
    if ((char)v20 == 0) {
        // 0x523e14
        return v20 % 256 | (int64_t)&g15 & -256;
    }
    int64_t v21 = a1 + 16; // 0x523e20
    function_5679e0(v21, v13);
    return function_5679b0(v21, a2, 0);
}

// Address range: 0x523e3e - 0x523e92
// From class:    std::__cxx11::collate<char>
// Type:          constructor
int64_t function_523e3e(int64_t a1, int64_t a2) {
    // 0x523e3e
    int64_t v1; // 0x523e3e
    function_4f50c0(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int32_t *)(v1 + 8) = (int32_t)(a2 != 0) | ((int32_t)&g26 ^ (int32_t)&g26) & -256;
    *(int64_t *)v1 = (int64_t)&g13;
    int64_t result = function_565f30(); // 0x523e82
    *(int64_t *)(v1 + 16) = result;
    return result;
}

// Address range: 0x523e92 - 0x523eea
// From class:    std::__cxx11::collate<char>
// Type:          constructor
int64_t function_523e92(int64_t a1, int64_t a2, int64_t a3) {
    // 0x523e92
    int64_t v1; // 0x523e92
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t v2 = a2; // bp-16, 0x523ec0
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g26 ^ (int32_t)&g26) & -256;
    *(int64_t *)v1 = (int64_t)&g13;
    int64_t result = function_567a10(&v2); // 0x523edb
    *(int64_t *)(v1 + 16) = result;
    return result;
}

// Address range: 0x523ef0 - 0x523ef6
int64_t function_523ef0(int64_t result) {
    // 0x523ef0
    return result;
}

// Address range: 0x523f00 - 0x523f46
int64_t function_523f00(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40) ^ __readfsqword(40); // 0x523f23
    if (v1 == 0) {
        // 0x523f2e
        return result;
    }
    // 0x523f37
    __stack_chk_fail();
    return *(int64_t *)v1;
}

// Address range: 0x523f50 - 0x523ff4
// From class:    std::__cxx11::collate_byname<char>
// Type:          constructor
int64_t function_523f50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x523f50
    *(int32_t *)(a1 + 8) = (int32_t)(a3 != 0);
    int64_t * v1 = (int64_t *)a1; // 0x523f76
    *v1 = (int64_t)&g13;
    int64_t v2 = function_565f30(); // 0x523f79
    int64_t v3 = a1 + 16; // 0x523f7e
    *(int64_t *)v3 = v2;
    *v1 = (int64_t)&g14;
    bool v4; // 0x523f50
    int64_t v5 = v4 ? -1 : 1;
    int64_t v6 = (int64_t)&g2; // 0x523f50
    int64_t v7 = a2; // 0x523f50
    int64_t v8 = 2; // 0x523f9f
    unsigned char v9 = *(char *)v7; // 0x523f9f
    char v10 = *(char *)v6; // 0x523f9f
    char v11 = v10; // 0x523f9f
    bool v12 = false; // 0x523f9f
    while (v9 == v10) {
        v8--;
        v6 += v5;
        v7 += v5;
        v11 = v9;
        v12 = true;
        if (v8 == 0) {
            // break -> 
            break;
        }
        v9 = *(char *)v7;
        v10 = *(char *)v6;
        v11 = v10;
        v12 = false;
    }
    unsigned char v13 = v11;
    int64_t v14 = (int64_t)!((v9 < v13 | v12)) - (int64_t)(v9 < v13); // 0x523fa4
    int64_t v15 = (int64_t)"POSIX"; // 0x523fa8
    int64_t v16 = a2; // 0x523fa8
    if ((char)v14 == 0) {
        // 0x523fc4
        return v14 % 256 | (int64_t)&g14 & -256;
    }
    int64_t v17 = 6; // 0x523fa8
    unsigned char v18 = *(char *)v16; // 0x523fb9
    char v19 = *(char *)v15; // 0x523fb9
    v16 += v5;
    char v20 = v19; // 0x523fb9
    bool v21 = false; // 0x523fb9
    while (v18 == v19) {
        // 0x523faa
        v17--;
        v15 += v5;
        v20 = v18;
        v21 = true;
        if (v17 == 0) {
            // break -> 
            break;
        }
        v18 = *(char *)v16;
        v19 = *(char *)v15;
        v16 += v5;
        v20 = v19;
        v21 = false;
    }
    unsigned char v22 = v20;
    int64_t v23 = (int64_t)!((v18 < v22 | v21)) - (int64_t)(v18 < v22); // 0x523fbe
    if ((char)v23 == 0) {
        // 0x523fc4
        return v23 % 256 | (int64_t)&g14 & -256;
    }
    // 0x523fd0
    function_5679e0(v3, v16);
    return function_5679b0(v3, a2, 0);
}

// Address range: 0x523ff4 - 0x5240d4
// From class:    std::__cxx11::collate_byname<char>
// Type:          constructor
int64_t function_523ff4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x523ff4
    int64_t v1; // 0x523ff4
    *(int64_t *)v1 = v1 + 16;
    function_5679e0(v1, a2);
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)&g26);
    *(int32_t *)((int64_t)&g26 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g26 ^ (int32_t)&g26) & -256;
    *(int64_t *)&g26 = (int64_t)&g13;
    *(int64_t *)((int64_t)&g26 + 16) = function_565f30();
    *(int64_t *)&g26 = (int64_t)&g14;
    bool v2; // 0x523ff4
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g2; // 0x523ff4
    int64_t v5 = a2; // 0x523ff4
    int64_t v6 = 2; // 0x52407f
    unsigned char v7 = *(char *)v5; // 0x52407f
    char v8 = *(char *)v4; // 0x52407f
    char v9 = v8; // 0x52407f
    bool v10 = false; // 0x52407f
    while (v7 == v8) {
        v6--;
        v4 += v3;
        v5 += v3;
        v9 = v7;
        v10 = true;
        if (v6 == 0) {
            // break -> 
            break;
        }
        v7 = *(char *)v5;
        v8 = *(char *)v4;
        v9 = v8;
        v10 = false;
    }
    unsigned char v11 = v9;
    int64_t v12 = (int64_t)!((v7 < v11 | v10)) - (int64_t)(v7 < v11); // 0x524084
    int64_t v13 = (int64_t)"POSIX"; // 0x524088
    int64_t v14 = a2; // 0x524088
    if ((char)v12 == 0) {
        // 0x5240a4
        return v12 % 256 | (int64_t)&g14 & -256;
    }
    int64_t v15 = 6; // 0x524088
    unsigned char v16 = *(char *)v14; // 0x524099
    char v17 = *(char *)v13; // 0x524099
    v14 += v3;
    char v18 = v17; // 0x524099
    bool v19 = false; // 0x524099
    while (v16 == v17) {
        // 0x52408a
        v15--;
        v13 += v3;
        v18 = v16;
        v19 = true;
        if (v15 == 0) {
            // break -> 
            break;
        }
        v16 = *(char *)v14;
        v17 = *(char *)v13;
        v14 += v3;
        v18 = v17;
        v19 = false;
    }
    unsigned char v20 = v18;
    int64_t v21 = (int64_t)!((v16 < v20 | v19)) - (int64_t)(v16 < v20); // 0x52409e
    if ((char)v21 == 0) {
        // 0x5240a4
        return v21 % 256 | (int64_t)&g14 & -256;
    }
    // 0x5240b0
    function_5679e0((int64_t)&g26 + 16, v14);
    return function_5679b0((int64_t)&g26 + 16, a2, 0);
}

// Address range: 0x5240d4 - 0x5243d8
int64_t function_5240d4(void) {
    // 0x5240d4
    int64_t v1; // 0x5240d4
    *(int64_t *)v1 = v1 + 16;
    function_5679e0(v1, v1);
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)&g26);
    uint64_t v2 = function_566390(&g17); // 0x52411b
    int64_t v3 = *(int64_t *)&g26; // 0x524120
    int64_t v4 = (int64_t)&g17; // 0x52412b
    int64_t v5; // 0x5240d4
    if (*(int64_t *)(v3 + 16) > v2) {
        int64_t v6 = *(int64_t *)(*(int64_t *)(v3 + 8) + 8 * v2); // 0x52412d
        v4 = 0;
        if (v6 == 0) {
            goto lab_0x524152;
        } else {
            int64_t result = function_20730(v6, &g16, 0x844b70, 0); // 0x524146
            v5 = v6;
            if (result != 0) {
                // 0x524150
                return result;
            }
            goto lab_0x524157;
        }
    } else {
        goto lab_0x524152;
    }
  lab_0x524152:
    // 0x524152
    function_5423f0();
    v5 = v4;
    goto lab_0x524157;
  lab_0x524157:
    // 0x524157
    function_20110();
    uint64_t v7 = function_566390(&g20); // 0x52416b
    int64_t v8 = *(int64_t *)v5; // 0x524170
    int64_t v9 = (int64_t)&g20; // 0x52417b
    int64_t v10; // 0x5240d4
    if (*(int64_t *)(v8 + 16) > v7) {
        int64_t v11 = *(int64_t *)(*(int64_t *)(v8 + 8) + 8 * v7); // 0x52417d
        v9 = 0;
        if (v11 == 0) {
            goto lab_0x5241a2;
        } else {
            int64_t result2 = function_20730(v11, &g16, 0x844ba0, 0); // 0x524196
            v10 = v11;
            if (result2 != 0) {
                // 0x524150
                return result2;
            }
            goto lab_0x5241a7;
        }
    } else {
        goto lab_0x5241a2;
    }
  lab_0x5241a2:
    // 0x5241a2
    function_5423f0();
    v10 = v9;
    goto lab_0x5241a7;
  lab_0x5241a7:
    // 0x5241a7
    function_20110();
    uint64_t v12 = function_566390(&g23); // 0x5241bb
    int64_t v13 = *(int64_t *)v10; // 0x5241c0
    int64_t v14 = (int64_t)&g23; // 0x5241cb
    int64_t v15; // 0x5240d4
    if (*(int64_t *)(v13 + 16) > v12) {
        int64_t v16 = *(int64_t *)(*(int64_t *)(v13 + 8) + 8 * v12); // 0x5241cd
        v14 = 0;
        if (v16 == 0) {
            goto lab_0x5241f2;
        } else {
            int64_t result3 = function_20730(v16, &g16, 0x844bd0, 0); // 0x5241e6
            v15 = v16;
            if (result3 != 0) {
                // 0x524150
                return result3;
            }
            goto lab_0x5241f7;
        }
    } else {
        goto lab_0x5241f2;
    }
  lab_0x5241f2:
    // 0x5241f2
    function_5423f0();
    v15 = v14;
    goto lab_0x5241f7;
  lab_0x5241f7:
    // 0x5241f7
    function_20110();
    uint64_t v17 = function_566390(&g24); // 0x52420b
    int64_t v18 = *(int64_t *)v15; // 0x524210
    int64_t v19 = (int64_t)&g24; // 0x52421b
    int64_t v20; // 0x5240d4
    if (*(int64_t *)(v18 + 16) > v17) {
        int64_t v21 = *(int64_t *)(*(int64_t *)(v18 + 8) + 8 * v17); // 0x52421d
        v19 = 0;
        if (v21 == 0) {
            goto lab_0x524242;
        } else {
            int64_t result4 = function_20730(v21, &g16, 0x844c08, 0); // 0x524236
            v20 = v21;
            if (result4 != 0) {
                // 0x524150
                return result4;
            }
            goto lab_0x524247;
        }
    } else {
        goto lab_0x524242;
    }
  lab_0x524242:
    // 0x524242
    function_5423f0();
    v20 = v19;
    goto lab_0x524247;
  lab_0x524247:
    // 0x524247
    function_20110();
    uint64_t v22 = function_566390(&g21); // 0x52425b
    int64_t v23 = *(int64_t *)v20; // 0x524260
    int64_t v24 = (int64_t)&g21; // 0x52426b
    int64_t v25; // 0x5240d4
    if (*(int64_t *)(v23 + 16) > v22) {
        int64_t v26 = *(int64_t *)(*(int64_t *)(v23 + 8) + 8 * v22); // 0x52426d
        v24 = 0;
        if (v26 == 0) {
            goto lab_0x524292;
        } else {
            int64_t result5 = function_20730(v26, &g16, 0x844cc0, 0); // 0x524286
            v25 = v26;
            if (result5 != 0) {
                // 0x524150
                return result5;
            }
            goto lab_0x524297;
        }
    } else {
        goto lab_0x524292;
    }
  lab_0x524292:
    // 0x524292
    function_5423f0();
    v25 = v24;
    goto lab_0x524297;
  lab_0x524297:
    // 0x524297
    function_20110();
    uint64_t v27 = function_566390(&g22); // 0x5242ab
    int64_t v28 = *(int64_t *)v25; // 0x5242b0
    int64_t v29 = (int64_t)&g22; // 0x5242bb
    int64_t v30; // 0x5240d4
    if (*(int64_t *)(v28 + 16) > v27) {
        int64_t v31 = *(int64_t *)(*(int64_t *)(v28 + 8) + 8 * v27); // 0x5242bd
        v29 = 0;
        if (v31 == 0) {
            goto lab_0x5242e2;
        } else {
            int64_t result6 = function_20730(v31, &g16, 0x844ca8, 0); // 0x5242d6
            v30 = v31;
            if (result6 != 0) {
                // 0x524150
                return result6;
            }
            goto lab_0x5242e7;
        }
    } else {
        goto lab_0x5242e2;
    }
  lab_0x5242e2:
    // 0x5242e2
    function_5423f0();
    v30 = v29;
    goto lab_0x5242e7;
  lab_0x5242e7:
    // 0x5242e7
    function_20110();
    uint64_t v32 = function_566390(&g19); // 0x5242fb
    int64_t v33 = *(int64_t *)v30; // 0x524300
    int64_t v34 = (int64_t)&g19; // 0x52430b
    int64_t v35; // 0x5240d4
    if (*(int64_t *)(v33 + 16) > v32) {
        int64_t v36 = *(int64_t *)(*(int64_t *)(v33 + 8) + 8 * v32); // 0x52430d
        v34 = 0;
        if (v36 == 0) {
            goto lab_0x524332;
        } else {
            int64_t result7 = function_20730(v36, &g16, 0x844cd8, 0); // 0x524326
            v35 = v36;
            if (result7 != 0) {
                // 0x524150
                return result7;
            }
            goto lab_0x524337;
        }
    } else {
        goto lab_0x524332;
    }
  lab_0x524332:
    // 0x524332
    function_5423f0();
    v35 = v34;
    goto lab_0x524337;
  lab_0x524337:
    // 0x524337
    function_20110();
    uint64_t v37 = function_566390(&g18); // 0x52434b
    int64_t v38 = *(int64_t *)v35; // 0x524350
    int64_t v39 = (int64_t)&g18; // 0x52435b
    int64_t v40; // 0x5240d4
    if (*(int64_t *)(v38 + 16) > v37) {
        int64_t v41 = *(int64_t *)(*(int64_t *)(v38 + 8) + 8 * v37); // 0x52435d
        v39 = 0;
        if (v41 == 0) {
            goto lab_0x524382;
        } else {
            int64_t result8 = function_20730(v41, &g16, 0x844c40, 0); // 0x524376
            v40 = v41;
            if (result8 != 0) {
                // 0x524150
                return result8;
            }
            goto lab_0x524387;
        }
    } else {
        goto lab_0x524382;
    }
  lab_0x524382:
    // 0x524382
    function_5423f0();
    v40 = v39;
    goto lab_0x524387;
  lab_0x524387:
    // 0x524387
    function_20110();
    uint64_t v42 = function_566390(&g17); // 0x52439b
    int64_t v43 = *(int64_t *)v40; // 0x5243a0
    if (*(int64_t *)(v43 + 16) <= v42) {
        // 0x524150
        return 0;
    }
    int64_t v44 = *(int64_t *)(*(int64_t *)(v43 + 8) + 8 * v42); // 0x5243b2
    int64_t result9 = 0; // 0x5243b9
    if (v44 != 0) {
        int64_t v45 = function_20730(v44, &g16, (int64_t)&g6, 0); // 0x5243cb
        result9 = v45 & -256 | (int64_t)(v45 != 0);
    }
    // 0x524150
    return result9;
}

// Address range: 0x5243e0 - 0x524428
int64_t function_5243e0(int64_t a1) {
    uint64_t v1 = function_566390(&g20); // 0x5243eb
    if (*(int64_t *)((int64_t)&g20 + 16) <= v1) {
        // 0x524426
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g20 + 8); // 0x5243fe
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x524402
    int64_t result = 0; // 0x524409
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, &g16, (int64_t)&g7, 0); // 0x52441b
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x524426
    return result;
}

// Address range: 0x524430 - 0x524478
int64_t function_524430(int64_t a1) {
    uint64_t v1 = function_566390(&g24); // 0x52443b
    if (*(int64_t *)((int64_t)&g24 + 16) <= v1) {
        // 0x524476
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g24 + 8); // 0x52444e
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x524452
    int64_t result = 0; // 0x524459
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, &g16, (int64_t)&g8, 0); // 0x52446b
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x524476
    return result;
}

// Address range: 0x524480 - 0x5244c8
int64_t function_524480(int64_t a1) {
    uint64_t v1 = function_566390(&g21); // 0x52448b
    if (*(int64_t *)((int64_t)&g21 + 16) <= v1) {
        // 0x5244c6
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g21 + 8); // 0x52449e
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x5244a2
    int64_t result = 0; // 0x5244a9
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, &g16, (int64_t)&g11, 0); // 0x5244bb
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x5244c6
    return result;
}

// Address range: 0x5244d0 - 0x524518
int64_t function_5244d0(int64_t a1) {
    uint64_t v1 = function_566390(&g22); // 0x5244db
    if (*(int64_t *)((int64_t)&g22 + 16) <= v1) {
        // 0x524516
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g22 + 8); // 0x5244ee
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x5244f2
    int64_t result = 0; // 0x5244f9
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, &g16, (int64_t)&g10, 0); // 0x52450b
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x524516
    return result;
}

// Address range: 0x524520 - 0x524568
int64_t function_524520(int64_t a1) {
    uint64_t v1 = function_566390(&g19); // 0x52452b
    if (*(int64_t *)((int64_t)&g19 + 16) <= v1) {
        // 0x524566
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g19 + 8); // 0x52453e
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x524542
    int64_t result = 0; // 0x524549
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, &g16, (int64_t)&g12, 0); // 0x52455b
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x524566
    return result;
}

// Address range: 0x524570 - 0x5245b8
int64_t function_524570(int64_t a1) {
    uint64_t v1 = function_566390(&g18); // 0x52457b
    if (*(int64_t *)((int64_t)&g18 + 16) <= v1) {
        // 0x5245b6
        return 0;
    }
    int64_t v2 = *(int64_t *)((int64_t)&g18 + 8); // 0x52458e
    int64_t v3 = *(int64_t *)(v2 + 8 * v1); // 0x524592
    int64_t result = 0; // 0x524599
    if (v3 != 0) {
        int64_t v4 = function_20730(v3, &g16, (int64_t)&g9, 0); // 0x5245ab
        result = v4 & -256 | (int64_t)(v4 != 0);
    }
    // 0x5245b6
    return result;
}
