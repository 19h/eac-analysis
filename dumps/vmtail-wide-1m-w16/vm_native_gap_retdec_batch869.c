/*
 * Targeted RetDec C for native executable gap queue batch 869.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2812ee-0x2814ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2814ee-0x2816ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2816ee-0x2818ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2818ee-0x281aee rank=- name=- kind=- bytes=- uncovered=-
 *   0x281aee-0x281cee rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bfe00-0x2c0000 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c0000-0x2c0200 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c0200-0x2c0400 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1651470();
int64_t function_1690143();
int64_t function_21047c1();
int64_t function_281287();
int64_t function_2812ee(void);
int64_t function_2812f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_281342(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_281399(void);
int64_t function_2813f1(int64_t a1);
int64_t function_2813f7(void);
int64_t function_281442(void);
int64_t function_28144d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2814a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2814bd(int64_t a1);
int64_t function_2814ed(void);
int64_t function_281500(void);
int64_t function_281505(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_28156c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2815ae(int64_t a1);
int64_t function_2815c2(void);
int64_t function_281627(void);
int64_t function_281634(void);
int64_t function_28164a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28167a(void);
int64_t function_281695(void);
int64_t function_28169c(void);
int64_t function_281710(int64_t a1, int64_t a2);
int64_t function_28180b(int64_t a1);
int64_t function_281816(void);
int64_t function_281878(int64_t a1);
int64_t function_281881(void);
int64_t function_2818f2(int64_t a1);
int64_t function_2819c3(int64_t a1);
int64_t function_2819cf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2819d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_281aa5(int64_t a1);
int64_t function_281b11(int64_t a1);
int64_t function_281b61(int64_t a1);
int64_t function_281bf0(void);
int64_t function_281c87(void);
int64_t function_281c94(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bfd91();
int64_t function_2bfe00(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bfe1e(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_2bff45(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2bff5a(void);
int64_t function_2bff69(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2bffa7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c0036(void);
int64_t function_2c00b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c00f0(int64_t a1, int64_t a2);
int64_t function_2c0108(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2c0133(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c01aa(int64_t a1);
int64_t function_2c01d2(int64_t a1, int64_t a2);
int64_t function_2c01d6(void);
int64_t function_2c01e8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2c0238(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2c0245(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c0369(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_2c03f7(int64_t a1);
int64_t function_31f32c85();
int64_t function_73c73cd3();
int64_t function_e1a1bbe();
int64_t function_ffffffff83ebdaf6();
int64_t function_ffffffff972d3e2b();
int64_t function_ffffffff9f10a73c();
int64_t function_ffffffffb3d91863();
int64_t function_ffffffffe098217f();
int64_t unknown_136718a9();
int64_t unknown_18d138dc();
int64_t unknown_19bbfeb0();
int64_t unknown_29f31624();
int64_t unknown_40297bfa();
int64_t unknown_4a1a850();
int64_t unknown_7a2e6e76();
int64_t unknown_7d93fd5b();
int64_t unknown_9781f9();
int64_t unknown_abd889f();
int64_t unknown_ffffffffa5902269();
int64_t unknown_ffffffffaac079b2();
int64_t unknown_ffffffffab692d85();
int64_t unknown_ffffffffb47de5e3();
int64_t unknown_ffffffffc4bedd06();
int64_t unknown_ffffffffca9a884e();
int64_t unknown_ffffffffd4099b0e();
int64_t unknown_ffffffffdb44b7fb();

// Address range: 0x2812ee - 0x2812f6
int64_t function_2812ee(void) {
    // 0x2812ee
    return function_281287();
}

// Address range: 0x2812f6 - 0x281342
int64_t function_2812f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)-0x63d604ec; // 0x2812f6
    int64_t v2; // 0x2812f6
    unsigned char v3 = (char)v2; // 0x2812f6
    char v4 = v1 + v3; // 0x2812f6
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x2812f6
    *(char *)-0x63d604ec = v4;
    bool v6; // 0x2812f6
    int64_t v7 = 0x4000 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | (int64_t)(v4 < v1) | 64 * (int64_t)(v4 == 0) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v1 % 16 + v3 % 16 > 15) | 4 * (int64_t)(v5 % 2 == 0) | 2048 * (int64_t)(((v4 ^ v1) & (v4 ^ v3)) < 0) | 2; // bp-8, 0x2812fc
    char v8 = v2; // 0x2812fe
    *(char *)a1 = v8 + (char)a1;
    char * v9 = (char *)(v2 - 114);
    int64_t v10 = v2 & 0xffffffff; // 0x2812fe
    int64_t v11 = (int64_t)&v7; // 0x2812fe
    v11 = 0x344298bd * v11 & 0xffffffff;
    unknown_ffffffffd4099b0e();
    *v9 = *v9 + v8;
    v10--;
    while (v10 != 0) {
        // 0x281300
        v11 = 0x344298bd * v11 & 0xffffffff;
        unknown_ffffffffd4099b0e();
        *v9 = *v9 + v8;
        v10--;
    }
    int32_t * v12 = (int32_t *)(8 * a2 - 82 + v2); // 0x281318
    *v12 = *v12 + (int32_t)a1;
    int64_t result = __asm_fnstenv(); // 0x28131f
    *(int224_t *)(a2 + 121) = (int224_t)result;
    uint32_t v13 = (int32_t)a2; // 0x281325
    uint32_t v14 = (int32_t)v2 + v13; // 0x281325
    if (v14 < v13 || v14 == 0) {
        // 0x28133f
        return result;
    }
    char * v15 = (char *)(v11 + 0x6f718b3a + result); // 0x28132b
    *v15 = *v15 + v8;
    return __asm_iretd(result & 0xffffffff, v14);
}

// Address range: 0x281342 - 0x281382
int64_t function_281342(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x281342
    int64_t v1; // 0x281342
    uint32_t v2 = (int32_t)(v1 | a4); // 0x281346
    int64_t v3 = unknown_ffffffffca9a884e(); // 0x281348
    uint32_t v4 = v2 % 32; // 0x28134f
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)(v3 + 111); // 0x28134f
        *v5 = *v5 >> v4;
    }
    uint32_t v6 = (v2 + 186) % 256 | v2 & -256;
    char * v7 = (char *)((v1 & -0xff01) + 6); // 0x28135b
    *v7 = *v7 - (char)(a3 / 256);
    int32_t * v8 = (int32_t *)((int64_t)v6 + 0x13dcf2a); // 0x28136b
    *v8 = *v8 - v6;
    char * v9 = (char *)(a3 + 0x2e8c2bc3); // 0x281371
    *v9 = *v9 + (char)v1;
    return function_ffffffff83ebdaf6();
}

// Address range: 0x281399 - 0x2813a3
int64_t function_281399(void) {
    // 0x281399
    unknown_abd889f();
    return function_1651470();
}

// Address range: 0x2813f1 - 0x2813f4
int64_t function_2813f1(int64_t a1) {
    // 0x2813f1
    int64_t result; // 0x2813f1
    return result;
}

// Address range: 0x2813f7 - 0x2813f9
int64_t function_2813f7(void) {
    // 0x2813f7
    int64_t result; // 0x2813f7
    return result;
}

// Address range: 0x281442 - 0x281443
int64_t function_281442(void) {
    // 0x281442
    int64_t result; // 0x281442
    return result;
}

// Address range: 0x28144d - 0x28145a
int64_t function_28144d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28144d
    int64_t v1; // 0x28144d
    int32_t * v2 = (int32_t *)(v1 + 118); // 0x28144f
    *v2 = *v2 + (int32_t)a1;
    return function_281442();
}

// Address range: 0x2814a3 - 0x2814bb
int64_t function_2814a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2814a3
    unknown_136718a9();
    uint64_t v1 = unknown_ffffffffaac079b2(); // 0x2814ac
    char * v2 = (char *)v1; // 0x2814b3
    *v2 = *v2 - (char)(v1 / 256);
    return function_21047c1(((a4 & (int64_t)&g1) == 0 ? 4 : -4) + a1);
}

// Address range: 0x2814bd - 0x2814be
int64_t function_2814bd(int64_t a1) {
    // 0x2814bd
    int64_t result; // 0x2814bd
    return result;
}

// Address range: 0x2814ed - 0x2814ef
int64_t function_2814ed(void) {
    // 0x2814ed
    int64_t v1; // 0x2814ed
    return function_281505(v1, v1, v1, v1);
}

// Address range: 0x281500 - 0x281501
int64_t function_281500(void) {
    // 0x281500
    int64_t result; // 0x281500
    return result;
}

// Address range: 0x281505 - 0x281528
int64_t function_281505(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 52); // 0x281505
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x281505
    char * v2 = (char *)(result + 0x360e600); // 0x28150b
    *v2 = *v2 + (char)result;
    int64_t v3; // 0x281505
    char * v4 = (char *)(v3 + 0x5101e800); // 0x281511
    *v4 = *v4 + (char)(result / 256);
    *(int32_t *)result = *(int32_t *)&result + (int32_t)v3;
    char * v5 = (char *)(a1 - 0x12bcbcca); // 0x28151b
    *v5 = *v5 + (char)(a4 / 256);
    return result;
}

// Address range: 0x28156c - 0x281594
int64_t function_28156c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28156c
    unknown_7a2e6e76();
    int64_t result = a3 & 0xffffffff; // 0x281577
    int64_t v1; // 0x28156c
    if ((int32_t)v1 > (int32_t)v1) {
        result = function_281500();
    }
    // 0x281579
    return result;
}

// Address range: 0x2815ae - 0x2815af
int64_t function_2815ae(int64_t a1) {
    // 0x2815ae
    int64_t result; // 0x2815ae
    return result;
}

// Address range: 0x2815c2 - 0x2815c7
int64_t function_2815c2(void) {
    // 0x2815c2
    return function_ffffffff9f10a73c();
}

// Address range: 0x281627 - 0x281628
int64_t function_281627(void) {
    // 0x281627
    int64_t result; // 0x281627
    return result;
}

// Address range: 0x281634 - 0x281637
int64_t function_281634(void) {
    // 0x281634
    int64_t result; // 0x281634
    return result;
}

// Address range: 0x28164a - 0x28165a
int64_t function_28164a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28164a
    int64_t v1; // 0x28164a
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a1;
    return (int64_t)(0x3d00019d * *(int32_t *)(v1 + 0x72b1097));
}

// Address range: 0x28167a - 0x28167d
int64_t function_28167a(void) {
    // 0x28167a
    int64_t result; // 0x28167a
    return result;
}

// Address range: 0x281695 - 0x28169c
int64_t function_281695(void) {
    // 0x281695
    int64_t v1; // 0x281695
    return function_281710(v1, v1);
}

// Address range: 0x28169c - 0x2816a6
int64_t function_28169c(void) {
    // 0x28169c
    int64_t v1; // 0x28169c
    int64_t v2 = v1 + 0xc2546154; // 0x28169c
    int32_t * v3 = (int32_t *)(v2 & 0xffffffff); // 0x2816a1
    *v3 = *v3 + (int32_t)v2;
    return function_281627();
}

// Address range: 0x281710 - 0x281715
int64_t function_281710(int64_t a1, int64_t a2) {
    // 0x281710
    return __asm_in(-13);
}

// Address range: 0x28180b - 0x281815
int64_t function_28180b(int64_t a1) {
    // 0x28180b
    return (int64_t)*(int32_t *)0x4f37c79401e8aabd;
}

// Address range: 0x281816 - 0x281817
int64_t function_281816(void) {
    // 0x281816
    int64_t result; // 0x281816
    return result;
}

// Address range: 0x281878 - 0x28187b
int64_t function_281878(int64_t a1) {
    // 0x281878
    int64_t result; // 0x281878
    return result;
}

// Address range: 0x281881 - 0x281887
int64_t function_281881(void) {
    // 0x281881
    return function_ffffffffe098217f();
}

// Address range: 0x2818f2 - 0x2818f3
int64_t function_2818f2(int64_t a1) {
    // 0x2818f2
    int64_t result; // 0x2818f2
    return result;
}

// Address range: 0x2819c3 - 0x2819c7
int64_t function_2819c3(int64_t a1) {
    // 0x2819c3
    int64_t result; // 0x2819c3
    return result;
}

// Address range: 0x2819cf - 0x2819d6
int64_t function_2819cf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2819cf
    return function_e1a1bbe();
}

// Address range: 0x2819d6 - 0x281a12
int64_t function_2819d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 - 16); // 0x2819d6
    int64_t v2; // 0x2819d6
    *v1 = *v1 - (int32_t)v2;
    char * v3 = (char *)(unknown_ffffffffb47de5e3() & 0xffd754f9 | 0x28ab06); // 0x2819ee
    *v3 = *v3 + 64;
    int64_t v4 = unknown_40297bfa(); // 0x2819f4
    int64_t result = (v4 - a3) % 256 | v4 & -256; // 0x281a01
    *(int32_t *)0xe2dcaa3900301e8 = (int32_t)result;
    return result;
}

// Address range: 0x281aa5 - 0x281aa6
int64_t function_281aa5(int64_t a1) {
    // 0x281aa5
    int64_t result; // 0x281aa5
    return result;
}

// Address range: 0x281b11 - 0x281b15
int64_t function_281b11(int64_t a1) {
    // 0x281b11
    int64_t result; // 0x281b11
    return result;
}

// Address range: 0x281b61 - 0x281be6
int64_t function_281b61(int64_t a1) {
    // 0x281b61
    int64_t v1; // 0x281b61
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 + 0x2f6c16ec); // 0x281b61
    char v4 = v2 / 256; // 0x281b61
    *v3 = *v3 + v4;
    int32_t v5 = __asm_in(-85); // 0x281b67
    *(char *)0x38010172 = *(char *)0x38010172 + v4;
    uint16_t v6 = (int16_t)v5 % 256 * (int16_t)*(char *)(a1 - 93); // 0x281b71
    int64_t result = (int64_t)v6 | (int64_t)(v5 & -0x10000); // 0x281b71
    if (v6 <= 255) {
        // 0x281b76
        return result + 0xfa82a203 + ((int32_t)result < 0x57d5dfd ? 0xfffca486 : 0xfffca487) & 0xffffffff;
    }
    // 0x281bde
    *(char *)-0x2f98ed19 = *(char *)-0x2f98ed19 + v4;
    return result;
}

// Address range: 0x281bf0 - 0x281bf1
int64_t function_281bf0(void) {
    // 0x281bf0
    int64_t result; // 0x281bf0
    return result;
}

// Address range: 0x281c87 - 0x281c8a
int64_t function_281c87(void) {
    // 0x281c87
    int64_t result; // 0x281c87
    return result;
}

// Address range: 0x281c94 - 0x281caf
int64_t function_281c94(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x281c94
    *(char *)(a2 + 0x1e85956 + 8 * a4) = (char)a3;
    __readfsdword(a2);
    bool v1; // 0x281c94
    int64_t v2 = v1 ? -4 : 4; // 0x281c9d
    __asm_int1(v2 + a1, v2 + a2);
    return a4 & 0xffffffff;
}

// Address range: 0x2bfe00 - 0x2bfe0e
int64_t function_2bfe00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffc4bedd06(a1, a2, a3, a4); // 0x2bfe05
    bool v1; // 0x2bfe00
    if (v1 || v1) {
        result = function_2bfd91();
    }
    // 0x2bfe07
    int64_t v2; // 0x2bfe00
    char * v3 = (char *)(v2 - 14 + 4 * result); // 0x2bfe07
    *v3 = *v3 | (char)a4;
    return result;
}

// Address range: 0x2bfe1e - 0x2bff20
int64_t function_2bfe1e(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x2bfe1e
    int64_t v1; // 0x2bfe1e
    uint64_t v2 = v1;
    int64_t v3 = unknown_29f31624(); // 0x2bfe1e
    int16_t v4 = a3; // 0x2bfe23
    __asm_out(v4, (int32_t)v3);
    *(char *)a2 = (char)(v2 / 256) + (char)a2;
    uint64_t v5 = a4 / 256; // 0x2bfe2c
    int64_t v6 = v3 & (v5 | -256); // 0x2bfe2c
    int32_t * v7 = (int32_t *)(a4 - 104); // 0x2bfe2e
    *v7 = *v7 + (int32_t)v6;
    int64_t v8 = v6 & -0xff01 | (int64_t)&g5; // 0x2bfe31
    int64_t v9 = ((v8 + 169) % 256 | v8 & 0xffffff00) - (int64_t)((int32_t)(((int64_t)&g5 >> 8)&1) - 0x213da42b); // 0x2bfe40
    bool v10; // 0x2bfe1e
    int64_t v11 = v10 ? -4 : 4; // 0x2bfe45
    int64_t v12 = v11 + a1; // 0x2bfe45
    unsigned char v13 = *(char *)(v9 & 0xffffffff) & (char)a4; // 0x2bfe46
    __asm_out_133(-24, (int32_t)v9);
    int32_t * v14 = (int32_t *)(a4 & -256 | (int64_t)v13); // 0x2bfe4a
    *v14 = *v14 + (int32_t)v2;
    *(int32_t *)0x105bf364 = *(int32_t *)0x105bf364 + (int32_t)v12;
    int64_t v15 = unknown_ffffffffa5902269(); // 0x2bfe63
    char * v16 = (char *)v15; // 0x2bfe68
    *v16 = *v16 + (char)v15;
    int64_t v17 = (v15 + a3) % 256 | v15 & -256; // 0x2bfe6a
    char * v18 = (char *)(int64_t)(*(int32_t *)v17 | (int32_t)v17); // 0x2bfe6e
    *v18 = *v18 + 94;
    int64_t v19 = v10 ? -1 : 1; // 0x2bfe72
    int64_t v20 = (v10 ? -5 : 5) + a2; // 0x2bfe72
    *(int64_t *)0xe801e8f1 = 0x68f49f00;
    char * v21 = (char *)v12; // 0x2bfe78
    *v21 = *v21 + (char)v5;
    int64_t v22 = unknown_ffffffffab692d85(); // 0x2bfe7f
    uint64_t v23 = (v22 + a3 / 256) % 256; // 0x2bfe84
    int64_t v24 = v22 & -256; // 0x2bfe84
    char v25 = *(char *)(v12 - 53); // 0x2bfe91
    *(int32_t *)v12 = (int32_t)(v23 | v24);
    int64_t v26 = v12 + v11; // 0x2bfe94
    *(int64_t *)0xe801e8e9 = -0x1ee435f6;
    *(int64_t *)0xe801e8e1 = 0x42fb00;
    unsigned char v27 = *(char *)v26; // 0x2bfea9
    unsigned char v28 = *(char *)(((int64_t)(v25 & -48) | 0xecf4ea00) + v23); // 0x2bfeab
    int64_t v29 = v24 | (int64_t)v28; // 0x2bfeab
    __asm_outsd(v4, *(int32_t *)(v20 + v19));
    int64_t v30 = *(int64_t *)0xe801e8e9; // 0x2bfead
    char * v31 = (char *)(a3 + 0x740022e7); // 0x2bfeae
    *v31 = (char)v30 + (char)(*(char *)v20 < v27) + *v31;
    *(int64_t *)0xe801e8e9 = v26 + v19;
    uint32_t v32 = (int32_t)v29; // 0x2bfeb5
    *(int64_t *)0xe801e8e1 = a3;
    int64_t result = (int64_t)((int32_t)(v32 < 0x16947f01) + v32 + *(int32_t *)v29); // 0x2bfebb
    char * v33 = (char *)result; // 0x2bfebd
    char v34 = *v33 & v13; // 0x2bfebd
    *v33 = v34;
    if (v34 != 0) {
        // 0x2bfec2
        return result;
    }
    int64_t v35 = *(int64_t *)0xe801e8e1; // 0x2bfed0
    return (v35 + 20) % 256 | v35 & -256;
}

// Address range: 0x2bff45 - 0x2bff5a
int64_t function_2bff45(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2bff45
    unknown_4a1a850();
    int64_t v1; // 0x2bff45
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x2bff45
    int64_t v3 = v2 ? -4 : 4; // 0x2bff53
    int64_t v4 = v2 ? -1 : 1; // 0x2bff54
    return unknown_7d93fd5b(v3 + a1 + v4, v3 + a2, (int32_t)v1 + (int32_t)a3);
}

// Address range: 0x2bff5a - 0x2bff64
int64_t function_2bff5a(void) {
    int64_t v1 = __asm_sti(); // 0x2bff5c
    return (v1 + 121) % 256 | v1 & -256;
}

// Address range: 0x2bff69 - 0x2bff7f
int64_t function_2bff69(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2bff69
    __asm_int(67);
    *(char *)0x38660164 = *(char *)0x38660164 & (char)(a4 / 256);
    int64_t result; // 0x2bff69
    return result;
}

// Address range: 0x2bffa7 - 0x2bffbc
int64_t function_2bffa7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bffa7
    float80_t v1; // 0x2bffa7
    *(int16_t *)(a4 + 0x1e87a36) = (int16_t)v1;
    return (int64_t)*(int32_t *)0x2d0b0da3273a8af1;
}

// Address range: 0x2c0036 - 0x2c0039
int64_t function_2c0036(void) {
    // 0x2c0036
    int64_t result; // 0x2c0036
    return result;
}

// Address range: 0x2c00b7 - 0x2c00e2
int64_t function_2c00b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2c00b7
    *(int32_t *)a4 = 0;
    return function_1690143();
}

// Address range: 0x2c00f0 - 0x2c0103
int64_t function_2c00f0(int64_t a1, int64_t a2) {
    // 0x2c00f0
    int64_t v1; // 0x2c00f0
    *(char *)a2 = 64 * (char)v1;
    unknown_9781f9(a1, a2);
    return function_31f32c85();
}

// Address range: 0x2c0108 - 0x2c012b
int64_t function_2c0108(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2c0108
    int64_t v1; // 0x2c0108
    unsigned char v2 = (char)v1;
    unsigned char v3 = v2 + (char)(a4 / 256); // 0x2c0108
    *(char *)a2 = v3;
    int64_t v4; // 0x2c0108
    *(int32_t *)v4 = (v3 < v2 ? -0x76c8fec2 : -0x76c8fec3) + *(int32_t *)&v4;
    char * v5 = (char *)(a4 - 0xa88c3ec); // 0x2c011d
    *v5 = *v5 + (char)a4;
    return function_ffffffff972d3e2b();
}

// Address range: 0x2c0133 - 0x2c0149
int64_t function_2c0133(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2c0133
    *(int32_t *)a2 = 0;
    char * v1 = (char *)(a1 + 61); // 0x2c013c
    *v1 = *v1 + (char)a4;
    int64_t result; // 0x2c0133
    int64_t v2 = result;
    *(int32_t *)v2 = *(int32_t *)&result + (int32_t)v2;
    int64_t v3; // 0x2c0133
    char * v4 = (char *)(v3 + 0xaa37f22); // 0x2c0141
    *v4 = *v4 & (char)a3;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x2c01aa - 0x2c01b4
int64_t function_2c01aa(int64_t a1) {
    int64_t result = unknown_19bbfeb0(a1); // 0x2c01aa
    int32_t * v1 = (int32_t *)(result + 71); // 0x2c01af
    int64_t v2; // 0x2c01aa
    bool v3; // 0x2c01aa
    *v1 = (int32_t)v3 + (int32_t)v2 + *v1;
    return result;
}

// Address range: 0x2c01d2 - 0x2c01d6
int64_t function_2c01d2(int64_t a1, int64_t a2) {
    // 0x2c01d2
    int64_t result; // 0x2c01d2
    return result;
}

// Address range: 0x2c01d6 - 0x2c01dd
int64_t function_2c01d6(void) {
    // 0x2c01d6
    unknown_18d138dc();
    int64_t v1; // 0x2c01d6
    return function_2c0238(v1, v1, v1, v1);
}

// Address range: 0x2c01e8 - 0x2c0201
int64_t function_2c01e8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2c01e8
    __asm_wait();
    int64_t v1; // 0x2c01e8
    char * v2 = (char *)((__asm_wait() + v1 & 0xffffffff) + 105); // 0x2c01ef
    *v2 = *v2 + (char)(a4 / 256);
    unknown_ffffffffdb44b7fb();
    return function_ffffffffb3d91863();
}

// Address range: 0x2c0238 - 0x2c0245
int64_t function_2c0238(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2c0238
    int64_t v1; // 0x2c0238
    int32_t v2 = 2 * (int32_t)v1; // 0x2c0238
    *(int32_t *)a1 = (int32_t)v1;
    bool v3; // 0x2c0238
    int64_t v4 = v3 ? -4 : 4; // 0x2c023a
    int64_t v5; // 0x2c0238
    int32_t v6 = *(int32_t *)&v5; // 0x2c023d
    *(int32_t *)a3 = ((v2 + (int32_t)(a4 / 256)) % 256 | v2 & -256) + v6;
    return function_73c73cd3(v4 + a1, v4 + a2);
}

// Address range: 0x2c0245 - 0x2c024d
int64_t function_2c0245(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2c0245
    *(int32_t *)-0xd395ae5 = *(int32_t *)-0xd395ae5 - 1;
    int64_t v1; // 0x2c0245
    return v1 & -256 | (int64_t)__asm_in_134((int16_t)a3);
}

// Address range: 0x2c0369 - 0x2c0372
int64_t function_2c0369(int64_t a1, int64_t a2, uint64_t a3) {
    char * v1 = (char *)(a1 + 0xdae9e6f); // 0x2c0369
    bool v2; // 0x2c0369
    *v1 = (char)v2 - (char)(a3 / 256) + *v1;
    int64_t result; // 0x2c0369
    return result;
}

// Address range: 0x2c03f7 - 0x2c03fa
int64_t function_2c03f7(int64_t a1) {
    // 0x2c03f7
    int64_t result; // 0x2c03f7
    return result;
}
