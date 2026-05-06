/*
 * Targeted RetDec C for native executable gap queue batch 1248.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x29411f-0x29431f rank=- name=- kind=- bytes=- uncovered=-
 *   0x29431f-0x29451f rank=- name=- kind=- bytes=- uncovered=-
 *   0x29451f-0x29471f rank=- name=- kind=- bytes=- uncovered=-
 *   0x29471f-0x29491f rank=- name=- kind=- bytes=- uncovered=-
 *   0x29491f-0x294b1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x294b1f-0x294d1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x294d1f-0x294f1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x294f1f-0x29511f rank=- name=- kind=- bytes=- uncovered=-
 *   0x30bdd1-0x30bfd1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30c1d1-0x30c3d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30c3d1-0x30c5d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30c5d1-0x30c7d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30c7d1-0x30c9d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30c9d1-0x30cbd1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x30cbd1-0x30cdd1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x433c93-0x433e93 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_11c45b24();
int64_t function_16650e2();
int64_t function_1e299967();
int64_t function_29411f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_294144(void);
int64_t function_294149(int64_t a1);
int64_t function_2941f2(void);
int64_t function_2941fb(void);
int64_t function_294217(int64_t a1, int64_t a2);
int64_t function_29422f(void);
int64_t function_294256(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2942d7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29430b(void);
int64_t function_294319(void);
int64_t function_29435a(void);
int64_t function_294367(int64_t result);
int64_t function_294386(int64_t a1);
int64_t function_294388(void);
int64_t function_2943bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2943d8(int64_t a1);
int64_t function_2943e3(void);
int64_t function_294412(void);
int64_t function_29442e(int64_t a1, int64_t a2);
int64_t function_294431(void);
int64_t function_29449a(void);
int64_t function_29449f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_294503(void);
int64_t function_29454d(void);
int64_t function_294553(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2945d5(int64_t a1);
int64_t function_294658(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2946f0(void);
int64_t function_29471d(void);
int64_t function_29473e(int64_t a1);
int64_t function_294746(void);
int64_t function_29477e(int64_t a1);
int64_t function_29486f(int64_t a1);
int64_t function_29488b(void);
int64_t function_2948c2(void);
int64_t function_2948d8(void);
int64_t function_2948e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_294961(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_294989(int64_t a1);
int64_t function_2949b9(void);
int64_t function_2949d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2949ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_294a38(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_294a4a(void);
int64_t function_294a69(void);
int64_t function_294a8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_294ac3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_294baf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_294bd4(int64_t a1, int64_t a2);
int64_t function_294c31(int64_t a1);
int64_t function_294c62(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_294c6d(int64_t a1);
int64_t function_294c9d(void);
int64_t function_294c9e(void);
int64_t function_294ca4(void);
int64_t function_294ca6(int64_t a1);
int64_t function_294ca9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_294ccc(void);
int64_t function_294d77(int64_t a1, int64_t a2);
int64_t function_294df2(void);
int64_t function_294e08(void);
int64_t function_294e12(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_294e82(int64_t a1);
int64_t function_294fb3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_294fc0(void);
int64_t function_295006(void);
int64_t function_29500a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_295017(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29506b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30bdd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30bdf2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30be13(int64_t a1);
int64_t function_30be30(int64_t a1);
int64_t function_30beb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30bf64(int64_t a1);
int64_t function_30c1d1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_30c217(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30c22d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30c254(void);
int64_t function_30c2a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30c379(int64_t a1);
int64_t function_30c3a3(void);
int64_t function_30c403(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_30c434(void);
int64_t function_30c45b(int64_t a1);
int64_t function_30c463(void);
int64_t function_30c46b(void);
int64_t function_30c46d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_30c5b0(void);
int64_t function_30c5bf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30c617(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30c62c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30c68f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_30c95d(int64_t a1);
int64_t function_30c96a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_30c9c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30c9f2(void);
int64_t function_30cb04(int64_t a1);
int64_t function_30cb1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30cb3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30cc73(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30cc82(void);
int64_t function_30cd11(void);
int64_t function_30cd4d(void);
int64_t function_398aed1();
int64_t function_433c93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_433ccc(void);
int64_t function_433cda(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_433d09(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_433d89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_433d93(void);
int64_t function_433d98(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_433daa(int64_t a1);
int64_t function_433dc2(void);
int64_t function_433dc9(void);
int64_t function_433ddd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_63a9b4a7();
int64_t function_b31189();
int64_t function_c281ac4();
int64_t function_ffffffff827516b7();
int64_t function_ffffffff90bb78df();
int64_t function_ffffffff953fcec7();
int64_t function_ffffffffafce11f0();
int64_t function_ffffffffafce8361();
int64_t function_ffffffffbfe15c91();
int64_t function_ffffffffc378df9a();
int64_t function_ffffffffd3803d34();
int64_t function_fffffffff62a81b3();
int64_t unknown_19a9370b();
int64_t unknown_24b2134c();
int64_t unknown_24bec834();
int64_t unknown_25219ee9();
int64_t unknown_25bc2d18();
int64_t unknown_29265cf7();
int64_t unknown_2e4fd681();
int64_t unknown_31072170();
int64_t unknown_3d32aaba();
int64_t unknown_3d6c8bfa();
int64_t unknown_3dd3d52c();
int64_t unknown_3e36b18f();
int64_t unknown_4722ff72();
int64_t unknown_482a87e6();
int64_t unknown_4a4c055c();
int64_t unknown_55d60fe8();
int64_t unknown_5761fd9();
int64_t unknown_58319e0e();
int64_t unknown_5a5f7833();
int64_t unknown_6438d487();
int64_t unknown_71be2356();
int64_t unknown_727b4d78();
int64_t unknown_7851e5f3();
int64_t unknown_786e6a63();
int64_t unknown_7c1de2df();
int64_t unknown_ffffffff8495fec3();
int64_t unknown_ffffffff952414ff();
int64_t unknown_ffffffff981f730c();
int64_t unknown_ffffffff9e2a4ff8();
int64_t unknown_ffffffffa5cd41f0();
int64_t unknown_ffffffffb3c5751d();
int64_t unknown_ffffffffbb8a986b();
int64_t unknown_ffffffffcc5bde1f();
int64_t unknown_ffffffffdd244267();
int64_t unknown_ffffffffdd2b9322();
int64_t unknown_ffffffffe82bb1ba();
int64_t unknown_ffffffffed08d5a5();
int64_t unknown_fffffffff92fb5da();

// Address range: 0x29411f - 0x294127
int64_t function_29411f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29411f
    int64_t result; // 0x29411f
    *(int32_t *)a1 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x294144 - 0x294145
int64_t function_294144(void) {
    // 0x294144
    int64_t result; // 0x294144
    return result;
}

// Address range: 0x294149 - 0x29414d
int64_t function_294149(int64_t a1) {
    // 0x294149
    return function_294144();
}

// Address range: 0x2941f2 - 0x2941f3
int64_t function_2941f2(void) {
    // 0x2941f2
    int64_t result; // 0x2941f2
    return result;
}

// Address range: 0x2941fb - 0x2941fd
int64_t function_2941fb(void) {
    // 0x2941fb
    return function_2941f2();
}

// Address range: 0x294217 - 0x29421b
int64_t function_294217(int64_t a1, int64_t a2) {
    // 0x294217
    return a1 & 0xffffffff;
}

// Address range: 0x29422f - 0x294232
int64_t function_29422f(void) {
    // 0x29422f
    int64_t result; // 0x29422f
    return result;
}

// Address range: 0x294256 - 0x294271
int64_t function_294256(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_4a4c055c(); // 0x294256
    int64_t v2 = __asm_hlt((int64_t)&g6); // 0x294265
    char v3 = *(char *)(a2 + 0x6deeffc9); // 0x294266
    return v2 & -256 | (int64_t)((char)v2 - v3 + (char)((int32_t)v1 < 0x1fe84701));
}

// Address range: 0x2942d7 - 0x2942e0
int64_t function_2942d7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2942d7
    int64_t result; // 0x2942d7
    *(char *)a3 = (char)result - (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x29430b - 0x29430c
int64_t function_29430b(void) {
    // 0x29430b
    int64_t result; // 0x29430b
    return result;
}

// Address range: 0x294319 - 0x29431c
int64_t function_294319(void) {
    // 0x294319
    return function_29430b();
}

// Address range: 0x29435a - 0x29435b
int64_t function_29435a(void) {
    // 0x29435a
    int64_t result; // 0x29435a
    return result;
}

// Address range: 0x294367 - 0x294369
int64_t function_294367(int64_t result) {
    // 0x294367
    return result;
}

// Address range: 0x294386 - 0x294387
int64_t function_294386(int64_t a1) {
    // 0x294386
    int64_t result; // 0x294386
    return result;
}

// Address range: 0x294388 - 0x294399
int64_t function_294388(void) {
    // 0x294388
    bool v1; // 0x294388
    if (!v1) {
        function_29435a();
    }
    // 0x29438a
    return function_c281ac4();
}

// Address range: 0x2943bd - 0x2943c0
int64_t function_2943bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2943bd
    int64_t result; // 0x2943bd
    *(int32_t *)a4 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x2943d8 - 0x2943dc
int64_t function_2943d8(int64_t a1) {
    // 0x2943d8
    int64_t v1; // 0x2943d8
    *(int32_t *)a1 = 2 * (int32_t)v1;
    return __asm_hlt(a1);
}

// Address range: 0x2943e3 - 0x2943e8
int64_t function_2943e3(void) {
    // 0x2943e3
    return function_63a9b4a7();
}

// Address range: 0x294412 - 0x29442e
int64_t function_294412(void) {
    // 0x294412
    unknown_ffffffffcc5bde1f();
    __asm_wait((int64_t)&g6, (int64_t)&g6, (int64_t)&g6, (int64_t)&g6);
    return function_1e299967();
}

// Address range: 0x29442e - 0x294430
int64_t function_29442e(int64_t a1, int64_t a2) {
    // 0x29442e
    int64_t result; // 0x29442e
    return result;
}

// Address range: 0x294431 - 0x294434
int64_t function_294431(void) {
    // 0x294431
    int64_t result; // 0x294431
    return result;
}

// Address range: 0x29449a - 0x29449f
int64_t function_29449a(void) {
    // 0x29449a
    int64_t result; // 0x29449a
    return result;
}

// Address range: 0x29449f - 0x2944d4
int64_t function_29449f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29449f
    int64_t v1; // 0x29449f
    bool v2; // 0x29449f
    int64_t v3 = v1 + 0x3b1b72ae + (int64_t)v2; // 0x2944a1
    if (a4 != 1 != ((int32_t)v3 == -0x6c41c6f3)) {
        // 0x2944ae
        return function_fffffffff62a81b3();
    }
    // 0x2944c4
    *(char *)(v1 - 0x274ffec3 + (4 * v3 & 0x3fffffffc)) = -1;
    return unknown_ffffffffe82bb1ba();
}

// Address range: 0x294503 - 0x294505
int64_t function_294503(void) {
    // 0x294503
    int64_t v1; // 0x294503
    return function_294553(v1, v1, v1, v1);
}

// Address range: 0x29454d - 0x29454e
int64_t function_29454d(void) {
    // 0x29454d
    int64_t result; // 0x29454d
    return result;
}

// Address range: 0x294553 - 0x29458d
int64_t function_294553(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_int3(); // 0x294553
    char v2 = (char)a3 - (char)v1; // 0x294556
    *(char *)a3 = v2;
    if (v2 < 0) {
        // 0x294584
        return __asm_int1();
    }
    char v3 = __asm_in((int16_t)a3); // 0x29455f
    int64_t v4; // 0x294553
    uint32_t v5 = *(int32_t *)&v4; // 0x294560
    uint64_t v6 = (v1 & 0xffffff00 | 0x100000000 * a3 | (int64_t)v3 & 0xffffffff) / (int64_t)v5; // 0x294560
    char * v7 = (char *)(v6 & 0xffffffff); // 0x294562
    *v7 = *v7 + (char)v6;
    return v6 & 0xffffffdd | 34;
}

// Address range: 0x2945d5 - 0x2945db
int64_t function_2945d5(int64_t a1) {
    // 0x2945d5
    return function_ffffffffbfe15c91();
}

// Address range: 0x294658 - 0x294699
int64_t function_294658(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(9 * a2); // 0x294658
    int64_t v2; // 0x294658
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x294658
    unsigned char v4 = llvm_ctpop_i8((char)v2 - *(char *)&v3); // 0x29465b
    uint32_t v5 = v4 % 2 != 0 ? *(int32_t *)(v2 + 0x1e856c2) : (int32_t)v2; // 0x29465d
    int32_t * v6 = (int32_t *)((int64_t)v5 + 111); // 0x294664
    *v6 = *v6 ^ 28;
    unsigned char v7 = (char)v5; // 0x294668
    __asm_out(-119, v7 - 25);
    int64_t v8; // 0x294658
    *(char *)a4 = *(char *)&v8 + 25 - v7 + (char)(v7 < 25);
    *(int32_t *)0x6c4c5f10 = *(int32_t *)0x6c4c5f10 + (int32_t)v2;
    __asm_in_133(-24);
    *(int32_t *)0xbcde01e8 = *(int32_t *)0xbcde01e8 - 0x4321fe18;
    *(char *)0xbcde01e8 = (char)a6;
    return function_ffffffffd3803d34();
}

// Address range: 0x2946f0 - 0x2946f1
int64_t function_2946f0(void) {
    // 0x2946f0
    int64_t result; // 0x2946f0
    return result;
}

// Address range: 0x29471d - 0x29471e
int64_t function_29471d(void) {
    // 0x29471d
    int64_t result; // 0x29471d
    return result;
}

// Address range: 0x29473e - 0x29473f
int64_t function_29473e(int64_t a1) {
    // 0x29473e
    int64_t result; // 0x29473e
    return result;
}

// Address range: 0x294746 - 0x294749
int64_t function_294746(void) {
    // 0x294746
    int64_t result; // 0x294746
    return result;
}

// Address range: 0x29477e - 0x29477f
int64_t function_29477e(int64_t a1) {
    // 0x29477e
    int64_t result; // 0x29477e
    return result;
}

// Address range: 0x29486f - 0x294870
int64_t function_29486f(int64_t a1) {
    // 0x29486f
    int64_t result; // 0x29486f
    return result;
}

// Address range: 0x29488b - 0x29488c
int64_t function_29488b(void) {
    // 0x29488b
    int64_t result; // 0x29488b
    return result;
}

// Address range: 0x2948c2 - 0x2948c3
int64_t function_2948c2(void) {
    // 0x2948c2
    int64_t result; // 0x2948c2
    return result;
}

// Address range: 0x2948d8 - 0x2948da
int64_t function_2948d8(void) {
    // 0x2948d8
    return function_2948c2();
}

// Address range: 0x2948e4 - 0x29490d
int64_t function_2948e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a3;
    int64_t v3; // 0x2948e4
    float80_t v4; // 0x2948e4
    *(float32_t *)(a3 - 119 + 2 * v3) = (float32_t)v4;
    int32_t * v5 = (int32_t *)unknown_7851e5f3(); // 0x2948f2
    *v5 = *v5 - 1;
    int32_t v6 = *(int32_t *)&v2 + (int32_t)v3; // 0x2948f9
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x2948f9
    *(int32_t *)a3 = v6;
    if (v7 % 2 == 0) {
        function_29488b();
    }
    // 0x2948fe
    *(char *)v1 = *(char *)&v1 | (char)(v2 / 256);
    int32_t * v8 = (int32_t *)(v3 - 58); // 0x294902
    *v8 = *v8 + (int32_t)v2;
    return unknown_19a9370b();
}

// Address range: 0x294961 - 0x29496d
int64_t function_294961(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x294961
    return unknown_ffffffffdd244267();
}

// Address range: 0x294989 - 0x29498c
int64_t function_294989(int64_t a1) {
    // 0x294989
    int64_t result; // 0x294989
    return result;
}

// Address range: 0x2949b9 - 0x2949ba
int64_t function_2949b9(void) {
    // 0x2949b9
    int64_t result; // 0x2949b9
    return result;
}

// Address range: 0x2949d9 - 0x2949e9
int64_t function_2949d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_7c1de2df(a1, a2, a3, a4, a5); // 0x2949d9
    int32_t * v1 = (int32_t *)(a4 + 0x257f8800); // 0x2949de
    uint32_t v2 = *v1; // 0x2949de
    bool v3; // 0x2949d9
    *v1 = 2048 * v2 | 1024 * (int32_t)(bool)v3 | v2 / 0x400000;
    int64_t v4; // 0x2949d9
    unsigned char v5 = *(char *)&v4; // 0x2949e5
    *(char *)a3 = v5 / 2 | 128 * v5;
    return result;
}

// Address range: 0x2949ea - 0x294a34
int64_t function_2949ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffa5cd41f0(); // 0x2949ea
    int64_t v2 = a3 & 0xffffffff; // 0x2949f2
    int64_t v3; // 0x2949ea
    char * v4 = (char *)(v3 - 99); // 0x2949f6
    *v4 = *v4 + (char)v3;
    __asm_out_134(83, (int32_t)unknown_ffffffff952414ff(v2));
    int64_t v5; // 0x2949ea
    __asm_outsb((int16_t)a1, *(char *)&v5);
    __asm_iretd();
    unknown_ffffffff981f730c();
    int64_t v6 = __asm_wait((int64_t)&g6, (int64_t)&g6, (int64_t)&g6, (int64_t)&g6); // 0x294a0b
    int32_t * v7 = (int32_t *)(v2 + 0x1aa53a96); // 0x294a11
    uint32_t v8 = *v7; // 0x294a11
    int32_t v9 = ((int32_t)v6 ^ -2) < 0x946493da; // 0x294a11
    uint32_t v10 = v9 + (int32_t)a1; // 0x294a11
    int32_t v11 = v8 - v10; // 0x294a11
    bool v12 = ((int32_t)v6 ^ -2) < 0x946493da ? v10 != -1 | v8 < v11 - v9 : v8 < v10; // 0x294a11
    *v7 = v11;
    char * v13 = (char *)(unknown_ffffffffb3c5751d() + 6); // 0x294a1c
    *v13 = *v13 - (v12 ? -103 : -104);
    int64_t result = unknown_3dd3d52c() + 2 * v3 & 0xffffffff; // 0x294a2d
    int64_t v14; // 0x2949ea
    uint32_t v15 = *(int32_t *)&v14; // 0x294a2f
    uint32_t v16 = v15 + (int32_t)v3; // 0x294a2f
    *(int32_t *)(a1 & 0xffffffff) = v16;
    unsigned char v17 = (char)v1 % 32; // 0x294a31
    if (v17 != 0) {
        char * v18 = (char *)result; // 0x294a31
        unsigned char v19 = *v18; // 0x294a31
        *v18 = (char)(v16 < v15) << v17 - 1 | v19 << v17 | (char)((int16_t)v19 >> (int16_t)(9 - v17));
    }
    return result;
}

// Address range: 0x294a38 - 0x294a3c
int64_t function_294a38(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x294a38
    int64_t result; // 0x294a38
    int64_t v1 = result;
    bool v2; // 0x294a38
    *(char *)v1 = (char)v1 + (char)(a3 / 256) + (char)v2;
    return result;
}

// Address range: 0x294a4a - 0x294a4c
int64_t function_294a4a(void) {
    // 0x294a4a
    int64_t v1; // 0x294a4a
    return function_294ac3(v1, v1, v1, v1);
}

// Address range: 0x294a69 - 0x294a6a
int64_t function_294a69(void) {
    // 0x294a69
    int64_t result; // 0x294a69
    return result;
}

// Address range: 0x294a8a - 0x294aba
int64_t function_294a8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x294a8a
    int64_t v1; // 0x294a8a
    uint64_t v2 = v1;
    unsigned char v3 = *(char *)(a1 - 16 + v2) | (char)v2; // 0x294a91
    uint32_t v4 = *(int32_t *)(v2 & -256 | (int64_t)v3) + (int32_t)a4; // 0x294a9f
    int64_t v5 = 0x68fe73e6; // 0x294aa3
    if (v4 == 0) {
        v5 = function_294a69();
    }
    int64_t v6 = v4; // 0x294a9f
    __asm_int(-77);
    unsigned char v7 = (char)(v2 / 256); // 0x294ab1
    char v8 = v3 + v7; // 0x294ab1
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x294ab1
    int16_t v10 = a3; // 0x294ab4
    *(int32_t *)a1 = __asm_insd(v10);
    *(char *)a1 = __asm_insb(v10);
    *(int64_t *)v1 = 256 * v5 + v6 & 0xff00 | v6 & 0xffff00ff;
    return 256 * (64 * (int64_t)(v8 == 0) | (int64_t)(v8 < v7) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v3 % 16 + v7 % 16 > 15) | 4 * (int64_t)(v9 % 2 == 0)) | v5 & -0xff01 | 512;
}

// Address range: 0x294ac3 - 0x294aeb
int64_t function_294ac3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x294ac3
    int64_t v1; // 0x294ac3
    *(int32_t *)a1 = 2 * (int32_t)v1;
    unsigned char v2 = *(char *)0x3fb18dcc; // 0x294ac5
    unsigned char v3 = v2 + (char)(v1 / 256); // 0x294ac5
    *(char *)0x3fb18dcc = v3;
    char * v4 = (char *)(v1 - 0x170d4800); // 0x294ace
    *v4 = *v4 + (char)(a3 / 256) + (char)(v3 < v2);
    int32_t * v5 = (int32_t *)(a4 + 0x38a05b0b + 4 * a3); // 0x294ad4
    uint32_t v6 = *v5; // 0x294ad4
    uint32_t v7 = v6 + (int32_t)a1; // 0x294ad4
    *v5 = v7;
    int64_t v8 = a4 - 256 * ((v1 | (int64_t)(char)&g1) + (int64_t)(v7 < v6)) & 0xff00 | a4 & -0xff01; // 0x294adb
    int32_t * v9 = (int32_t *)(v8 + 126); // 0x294add
    *v9 = *v9 + (int32_t)a3;
    int64_t result = unknown_482a87e6(); // 0x294ae0
    char * v10 = (char *)(v8 - 0x6faf0922); // 0x294ae5
    *v10 = *v10 | (char)a4;
    return result;
}

// Address range: 0x294baf - 0x294bb4
int64_t function_294baf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x294baf
    int64_t result; // 0x294baf
    return result;
}

// Address range: 0x294bd4 - 0x294be1
int64_t function_294bd4(int64_t a1, int64_t a2) {
    // 0x294bd4
    *(int32_t *)0xd30225b5 = *(int32_t *)0xd30225b5 - 1;
    return a2 & 0xffffffff;
}

// Address range: 0x294c31 - 0x294c35
int64_t function_294c31(int64_t a1) {
    // 0x294c31
    int64_t result; // 0x294c31
    return result;
}

// Address range: 0x294c62 - 0x294c66
int64_t function_294c62(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x294c62
    int64_t v1; // 0x294c62
    int64_t v2 = v1;
    bool v3; // 0x294c62
    *(char *)v2 = (char)v2 + (char)a4 + (char)v3;
    return __asm_wait(a1, a2, a3, a4);
}

// Address range: 0x294c6d - 0x294c6e
int64_t function_294c6d(int64_t a1) {
    // 0x294c6d
    int64_t result; // 0x294c6d
    return result;
}

// Address range: 0x294c9d - 0x294c9e
int64_t function_294c9d(void) {
    // 0x294c9d
    int64_t result; // 0x294c9d
    return result;
}

// Address range: 0x294c9e - 0x294ca3
int64_t function_294c9e(void) {
    // 0x294c9e
    return function_ffffffffc378df9a();
}

// Address range: 0x294ca4 - 0x294ca5
int64_t function_294ca4(void) {
    // 0x294ca4
    int64_t result; // 0x294ca4
    return result;
}

// Address range: 0x294ca6 - 0x294ca9
int64_t function_294ca6(int64_t a1) {
    // 0x294ca6
    int64_t result; // 0x294ca6
    return result;
}

// Address range: 0x294ca9 - 0x294cc2
int64_t function_294ca9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char v1 = *(char *)-0x70864c50; // 0x294ca9
    int64_t v2; // 0x294ca9
    *(char *)-0x70864c50 = v1 + (char)((uint64_t)v2 / 256);
    int64_t v3 = a3 & 0xffffffde; // 0x294cb0
    *(int32_t *)a1 = (int32_t)v3;
    int64_t v4 = v3 + 0xbafdf0f; // 0x294cb6
    return (v4 | a4 / 256) % 256 | v4 & 0xffffff00;
}

// Address range: 0x294ccc - 0x294cd1
int64_t function_294ccc(void) {
    // 0x294ccc
    return function_11c45b24();
}

// Address range: 0x294d77 - 0x294d7b
int64_t function_294d77(int64_t a1, int64_t a2) {
    // 0x294d77
    int64_t result; // 0x294d77
    return result;
}

// Address range: 0x294df2 - 0x294df8
int64_t function_294df2(void) {
    // 0x294df2
    return unknown_ffffffff9e2a4ff8();
}

// Address range: 0x294e08 - 0x294e09
int64_t function_294e08(void) {
    // 0x294e08
    int64_t result; // 0x294e08
    return result;
}

// Address range: 0x294e12 - 0x294e80
int64_t function_294e12(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_25bc2d18(); // 0x294e12
    int64_t v2; // 0x294e12
    bool v3; // 0x294e12
    if (!v3 && !v3) {
        int64_t result = v1 & 0xf5237d31 | 0xadc82ce; // 0x294e19
        int32_t * v4 = (int32_t *)result; // 0x294e20
        *v4 = *v4 + (int32_t)v2;
        return result;
    }
    // 0x294e65
    *(int32_t *)a1 = (int32_t)a2;
    int64_t v5 = a4 - 1; // 0x294e6a
    if (v5 != 0 && (char)(v1 || a3) != 0) {
        function_294e08();
    }
    int64_t v6 = v3 ? -4 : 4; // 0x294e66
    int32_t v7 = unknown_4722ff72();
    int64_t v8 = v5; // 0x294e71
    int64_t v9 = v6 + a1; // 0x294e71
    int64_t v10 = 0; // 0x294e71
    while (v8 != 0) {
        int64_t v11 = v9;
        v8--;
        v9 = v11 + v6;
        v10 = v8;
        if (*(int32_t *)v11 == v7) {
            // break -> 
            break;
        }
        v10 = 0;
    }
    int64_t v12 = v10;
    *(char *)v12 = (char)(v12 | v2);
    return unknown_2e4fd681();
}

// Address range: 0x294e82 - 0x294e87
int64_t function_294e82(int64_t a1) {
    // 0x294e82
    int64_t v1; // 0x294e82
    return v1 & -0xff01 | (int64_t)&g5;
}

// Address range: 0x294fb3 - 0x294fbe
int64_t function_294fb3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x294fb3
    int64_t v1; // 0x294fb3
    unsigned char v2 = (char)v1;
    unsigned char v3 = (char)a3; // 0x294fb3
    char v4 = v2 + v3; // 0x294fb3
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x294fb3
    *(char *)a1 = v4;
    *(char *)-0xc0f5243 = *(char *)-0xc0f5243 + (char)(v1 / 256);
    return v1 & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v4 < v2) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v2 % 16 + v3 % 16 > 15) | 4 * (int64_t)(v5 % 2 == 0)) | 512;
}

// Address range: 0x294fc0 - 0x294fc2
int64_t function_294fc0(void) {
    // 0x294fc0
    int64_t result; // 0x294fc0
    return result;
}

// Address range: 0x295006 - 0x29500a
int64_t function_295006(void) {
    // 0x295006
    int64_t v1; // 0x295006
    return function_295017(v1, v1, v1);
}

// Address range: 0x29500a - 0x295017
int64_t function_29500a(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = __asm_in((int16_t)a3); // 0x29500f
    int64_t v2; // 0x29500a
    int64_t result = v2 & -256 | (int64_t)v1; // 0x29500f
    *(int32_t *)a1 = (int32_t)result;
    char * v3 = (char *)result; // 0x295012
    *v3 = *v3 + 2 * v1;
    return result;
}

// Address range: 0x295017 - 0x295037
int64_t function_295017(int64_t a1, int64_t a2, int64_t a3) {
    // 0x295017
    int64_t v1; // 0x295017
    int64_t v2 = v1;
    char * v3 = (char *)(v2 + 0x60580079); // 0x295017
    unsigned char v4 = *v3; // 0x295017
    unsigned char v5 = v4 + (char)v2; // 0x295017
    *v3 = v5;
    int32_t v6 = 0x10000 * (int32_t)((v2 + 250 + (int64_t)(v5 < v4)) % 256 | v2 & 0xff00) >> 16; // 0x29501f
    *(int32_t *)-0x38b8e9fefc6ffe18 = v6;
    int64_t v7; // 0x295017
    return (int64_t)(v6 & -256) | (int64_t)*(char *)&v7;
}

// Address range: 0x29506b - 0x29507e
int64_t function_29506b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29506b
    int64_t v1; // 0x29506b
    char * v2 = (char *)(v1 + 8 * v1); // 0x29506b
    char v3 = v1; // 0x29506b
    bool v4; // 0x29506b
    *v2 = (char)v4 - v3 + *v2;
    __asm_out_135((int16_t)a3, v3);
    float80_t v5; // 0x29506b
    *(int32_t *)(a2 - 0x12f479c + 2 * a2) = (int32_t)v5;
    return function_16650e2();
}

// Address range: 0x30bdd1 - 0x30bde8
int64_t function_30bdd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30bdd1
    __asm_sti();
    unknown_fffffffff92fb5da();
    int32_t v1 = a4;
    uint32_t v2 = v1 % 32; // 0x30bde0
    if (v2 != 0) {
        *(int32_t *)a4 = v1 >> v2;
    }
    return unknown_25219ee9();
}

// Address range: 0x30bdf2 - 0x30be02
int64_t function_30bdf2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x30bdf2
    __asm_in_136(40);
    int64_t v1; // 0x30bdf2
    return unknown_3d6c8bfa() + 2 * v1 & 0xffffffff;
}

// Address range: 0x30be13 - 0x30be19
int64_t function_30be13(int64_t a1) {
    // 0x30be13
    int64_t result; // 0x30be13
    return result;
}

// Address range: 0x30be30 - 0x30be33
int64_t function_30be30(int64_t a1) {
    // 0x30be30
    int64_t result; // 0x30be30
    return result;
}

// Address range: 0x30beb0 - 0x30beba
int64_t function_30beb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30beb0
    int64_t result; // 0x30beb0
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x30bf64 - 0x30bf67
int64_t function_30bf64(int64_t a1) {
    // 0x30bf64
    int64_t result; // 0x30bf64
    return result;
}

// Address range: 0x30c1d1 - 0x30c1fe
int64_t function_30c1d1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x30c1d1
    unknown_5761fd9();
    bool v1; // 0x30c1d1
    int64_t v2 = v1 ? -1 : 1; // 0x30c1d8
    int64_t v3; // 0x30c1d1
    int64_t v4 = v2 + (v3 & 0xffffffff); // 0x30c1d8
    char * v5 = (char *)v4; // 0x30c1d9
    *v5 = *v5 & 38;
    *(char *)a1 = (char)v3 + (char)(a3 / 256);
    int64_t v6 = v2 + a1; // 0x30c1e1
    unknown_55d60fe8(v6, v4);
    int64_t v7 = unknown_29265cf7(); // 0x30c1f1
    char * v8 = (char *)(8 * v3 + 58 + v6); // 0x30c1f6
    *v8 = *v8 + *v5;
    return v7 & -256 | (int64_t)*(char *)(2 * v2 + v4);
}

// Address range: 0x30c217 - 0x30c22c
int64_t function_30c217(int64_t a1, int64_t a2, int64_t a3) {
    // 0x30c217
    int64_t v1; // 0x30c217
    int16_t * v2 = (int16_t *)(v1 + 55); // 0x30c217
    bool v3; // 0x30c217
    *v2 = *v2 - 57 + (int16_t)v3;
    uint32_t v4 = (int32_t)unknown_ffffffffdd2b9322() | 0x45e400cb; // 0x30c221
    char v5 = v4; // 0x30c221
    int64_t result = v4; // 0x30c221
    if (llvm_ctpop_i8(v5) % 2 == 0) {
        // 0x30c228
        return result;
    }
    // 0x30c22b
    __asm_out_135((int16_t)a3, v5);
    return result;
}

// Address range: 0x30c22d - 0x30c238
int64_t function_30c22d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_5a5f7833(); // 0x30c22d
    __asm_int(-46);
    return result;
}

// Address range: 0x30c254 - 0x30c25a
int64_t function_30c254(void) {
    // 0x30c254
    int64_t result; // 0x30c254
    return result;
}

// Address range: 0x30c2a2 - 0x30c356
int64_t function_30c2a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30c2a2
    int64_t v1; // 0x30c2a2
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a1;
    int32_t v5 = *(int32_t *)unknown_3d32aaba(); // 0x30c2bb
    uint64_t v6 = unknown_ffffffff8495fec3(); // 0x30c2bd
    if ((int32_t)v6 < 0x699e8706) {
        // 0x30c2ca
        *(char *)0x49fe0c6e = *(char *)0x49fe0c6e - 26;
        *(char *)a2 = (char)(v2 / 256) + (char)a2;
        int32_t * v7 = (int32_t *)(2 * v6 & -512 | 470); // 0x30c2e5
        *v7 = *v7 | (int32_t)v4;
        char * v8 = (char *)(v4 + 0x3dfa4e37); // 0x30c2fa
        unsigned char v9 = *v8; // 0x30c2fa
        *v8 = v9 / 128 | 2 * v9;
        int32_t * v10 = (int32_t *)(v3 + 43); // 0x30c300
        *v10 = *v10 + (int32_t)v4;
        return v6 | 255;
    }
    char * v11 = (char *)(int64_t)((int32_t)a3 - v5); // 0x30c305
    char v12 = *v11 - (char)(v2 / 256); // 0x30c305
    *v11 = v12;
    if (v12 >= 0) {
        // 0x30c34e
        __asm_int(-13);
        unknown_71be2356();
        return __asm_int1();
    }
    int64_t v13 = *(int64_t *)0xe301e881; // 0x30c30a
    char v14 = *(char *)&v3; // 0x30c30f
    uint32_t v15 = *(int32_t *)(((v13 & 1024) != 0 ? -1 : 1) + v3); // 0x30c310
    uint32_t v16 = *(int32_t *)&v4; // 0x30c310
    int64_t v17 = v4 + ((v13 & 1024) != 0 ? -4 : 4); // 0x30c310
    char * v18 = (char *)v17; // 0x30c316
    char v19 = *v18; // 0x30c316
    *v18 = v19 + (char)(v6 / 256) + (char)((v14 - 23 + (char)(v15 < v16) ^ -2) < 182);
    *(char *)0x131ed4b455d12b = (char)v17;
    char v20 = *(char *)-0x1b7febcd; // 0x30c32c
    *(char *)-0x1b7febcd = v20 + (char)(*(int64_t *)0xe301e879 / 256);
    return v17 & 0xffffffff;
}

// Address range: 0x30c379 - 0x30c37c
int64_t function_30c379(int64_t a1) {
    // 0x30c379
    int64_t result; // 0x30c379
    return result;
}

// Address range: 0x30c3a3 - 0x30c3a4
int64_t function_30c3a3(void) {
    // 0x30c3a3
    int64_t result; // 0x30c3a3
    return result;
}

// Address range: 0x30c403 - 0x30c427
int64_t function_30c403(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 42); // 0x30c403
    int64_t v2; // 0x30c403
    bool v3; // 0x30c403
    *v1 = (char)v3 - (char)v2 + *v1;
    int64_t v4; // 0x30c403
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 ^ (char)v5;
    *(char *)v4 = *(char *)&v4;
    int64_t v6; // 0x30c403
    *(int32_t *)a4 = *(int32_t *)&v6 + 1;
    char * v7 = (char *)(v2 - 0x34fe1800); // 0x30c413
    *v7 = *v7 + (char)(a4 / 256);
    uint32_t v8 = 0x10000 * (int32_t)v4 >> 16 ^ -0x13f55f8a; // 0x30c41c
    *(char *)a4 = *(char *)&v6 + 103;
    return ((int64_t)(v8 / 256) + (int64_t)v8) % 256 | (int64_t)(v8 & -256);
}

// Address range: 0x30c434 - 0x30c435
int64_t function_30c434(void) {
    // 0x30c434
    int64_t result; // 0x30c434
    return result;
}

// Address range: 0x30c45b - 0x30c460
int64_t function_30c45b(int64_t a1) {
    // 0x30c45b
    int64_t result; // 0x30c45b
    return result;
}

// Address range: 0x30c463 - 0x30c468
int64_t function_30c463(void) {
    // 0x30c463
    return function_ffffffffafce8361();
}

// Address range: 0x30c46b - 0x30c46d
int64_t function_30c46b(void) {
    // 0x30c46b
    return function_30c434();
}

// Address range: 0x30c46d - 0x30c5af
int64_t function_30c46d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x30c46d
    bool v1; // 0x30c46d
    if (!v1) {
        int64_t result = unknown_727b4d78(); // 0x30c472
        int64_t v2; // 0x30c46d
        char * v3 = (char *)(v2 - 0x283434ae); // 0x30c477
        *v3 = *v3 | (char)a4;
        return result;
    }
    int64_t result2 = unknown_6438d487() & -256 | (int64_t)__asm_in((int16_t)a3); // 0x30c486
    if (a4 == 1) {
        // 0x30c489
        return result2;
    }
    // 0x30c4eb
    *(int32_t *)a2 = (int32_t)a3 + (int32_t)a2;
    return result2;
}

// Address range: 0x30c5b0 - 0x30c5b5
int64_t function_30c5b0(void) {
    // 0x30c5b0
    int64_t result; // 0x30c5b0
    return result;
}

// Address range: 0x30c5bf - 0x30c5ca
int64_t function_30c5bf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x30c5bf
    int64_t v1; // 0x30c5bf
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_30c62c(a1, a2, 0xa83225bb, v1, v1);
}

// Address range: 0x30c617 - 0x30c62c
int64_t function_30c617(int64_t a1, int64_t a2, int64_t a3) {
    // 0x30c617
    int64_t v1; // 0x30c617
    int64_t v2 = v1;
    *(int32_t *)a2 = (int32_t)v2 + (int32_t)v1;
    char v3 = *(char *)(a1 - 0x794cffff + v1); // 0x30c619
    int64_t v4; // 0x30c617
    unsigned char v5 = *(char *)&v4; // 0x30c626
    return (int64_t)v5 * (int64_t)((char)v2 - v3) | v2 & -0x10000;
}

// Address range: 0x30c62c - 0x30c644
int64_t function_30c62c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30c62c
    int64_t v1; // 0x30c62c
    int64_t result = v1;
    char v2 = (uint64_t)v1 / 256; // 0x30c632
    *(char *)0xd5e339 = *(char *)0xd5e339 & v2;
    *(char *)result = 2 * (char)result;
    *(char *)0x64bc644 = *(char *)0x64bc644 + v2;
    return result;
}

// Address range: 0x30c68f - 0x30c86c
int64_t function_30c68f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a5;
    int64_t v2; // 0x30c68f
    if ((*(int32_t *)(v2 - 0x4865626a) || (int32_t)v2) < 0) {
        int64_t v3 = unknown_ffffffffed08d5a5(); // 0x30c69f
        int32_t * v4 = (int32_t *)(2 * a1 - 0x17e965ee + a4); // 0x30c6a4
        *v4 = *v4 & (int32_t)a4;
        return v3 + a3 & 0xffffffff;
    }
    // 0x30c6ef
    *(int32_t *)(v2 - 0x514205fc) = (int32_t)(int64_t)&v1;
    unsigned char v5 = *(char *)(v2 - 24); // 0x30c6f5
    int32_t * v6 = (int32_t *)(v2 - 55); // 0x30c6f8
    *v6 = *v6 + (int32_t)a2;
    char * v7 = (char *)((256 * (int64_t)v5 | a3 & -0xff01) + 1); // 0x30c705
    *v7 = *v7 + (char)(v2 / 256);
    return unknown_58319e0e();
}

// Address range: 0x30c95d - 0x30c96a
int64_t function_30c95d(int64_t a1) {
    // 0x30c95d
    unknown_786e6a63(a1);
    bool v1; // 0x30c95d
    return function_ffffffff90bb78df((v1 ? -1 : 1) + a1);
}

// Address range: 0x30c96a - 0x30c9a2
int64_t function_30c96a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = unknown_31072170(); // 0x30c96a
    char * v2 = (char *)(v1 + 0x2b67400); // 0x30c96f
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0x30c96a
    int32_t * v4 = (int32_t *)(v3 + 0x4a010c00); // 0x30c977
    *v4 = *v4 + (int32_t)v3;
    int64_t result = unknown_3e36b18f(); // 0x30c989
    uint64_t v5 = a4 / 256; // 0x30c98e
    *(int32_t *)a1 = (int32_t)result;
    char * v6 = (char *)((v5 % 256 | a4 & -256) + 29); // 0x30c991
    *v6 = *v6 + (char)v5;
    return result;
}

// Address range: 0x30c9c2 - 0x30c9c7
int64_t function_30c9c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x30c9c2
    if (v1 != 0) {
        *(int32_t *)a3 = (int32_t)a3 >> v1;
    }
    int64_t result; // 0x30c9c2
    return result;
}

// Address range: 0x30c9f2 - 0x30c9f7
int64_t function_30c9f2(void) {
    // 0x30c9f2
    return function_ffffffffafce11f0();
}

// Address range: 0x30cb04 - 0x30cb09
int64_t function_30cb04(int64_t a1) {
    // 0x30cb04
    int64_t v1; // 0x30cb04
    int64_t v2 = v1;
    bool v3; // 0x30cb04
    return (v2 + 183 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x30cb1d - 0x30cb3b
int64_t function_30cb1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30cb1d
    int64_t v1; // 0x30cb1d
    int32_t v2 = v1; // 0x30cb1d
    if ((5 - v2 & v2) >= 0) {
        // 0x30cb22
        int64_t result; // 0x30cb1d
        return result;
    }
    // 0x30cb27
    __asm_wait((int64_t)&g6, (int64_t)&g6, (int64_t)&g6, (int64_t)&g6);
    int64_t result2 = unknown_24bec834(); // 0x30cb2e
    int32_t * v3 = (int32_t *)(4 * result2 + v1); // 0x30cb33
    int32_t v4 = *v3; // 0x30cb33
    int32_t v5 = a3; // 0x30cb33
    int32_t v6 = v4 + v5; // 0x30cb33
    *v3 = v6;
    if (((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x30cb22
        return result2;
    }
    // 0x30cb38
    return (result2 + 37) % 256 | result2 & -256;
}

// Address range: 0x30cb3f - 0x30cb7d
int64_t function_30cb3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_24b2134c(); // 0x30cb46
    int64_t v2; // bp+1365311976, 0x30cb3f
    uint32_t v3 = (int32_t)(int64_t)&v2; // 0x30cb60
    int32_t v4 = v3 + 0x24fb0f15; // 0x30cb60
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x30cb60
    int64_t v6 = unknown_ffffffffbb8a986b(); // 0x30cb65
    bool v7; // 0x30cb3f
    *(int64_t *)((v1 + 122 & 98 | v1 & 0x892a6100) - 8) = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v3 < 0xdb04f0eb) | 128 * (int64_t)(v4 < 0) | 2048 * (int64_t)(((v4 ^ v3) & (v3 ^ -0x80000000)) < 0) | 4 * (int64_t)(v5 % 2 == 0) | 18;
    int64_t result = (v6 + 111) % 256 | v6 & -256; // 0x30cb6b
    int64_t v8; // 0x30cb3f
    int32_t * v9 = (int32_t *)(v8 - 0x17177ff4); // 0x30cb6d
    *v9 = *v9 - (int32_t)a1;
    int32_t * v10 = (int32_t *)(result - 0x7b3e37fd); // 0x30cb73
    *v10 = *v10 + (int32_t)a3;
    return result;
}

// Address range: 0x30cc73 - 0x30cc75
int64_t function_30cc73(int64_t a1, int64_t a2, int64_t a3) {
    // 0x30cc73
    int64_t v1; // 0x30cc73
    return v1 & 0xffffffff;
}

// Address range: 0x30cc82 - 0x30cc88
int64_t function_30cc82(void) {
    // 0x30cc82
    int64_t result; // 0x30cc82
    uint64_t v1 = result;
    bool v2; // 0x30cc82
    *(char *)v1 = (char)(v1 / 256) + (char)v1 + (char)v2;
    return result;
}

// Address range: 0x30cd11 - 0x30cd14
int64_t function_30cd11(void) {
    // 0x30cd11
    int64_t result; // 0x30cd11
    return result;
}

// Address range: 0x30cd4d - 0x30cd52
int64_t function_30cd4d(void) {
    // 0x30cd4d
    return function_ffffffff953fcec7();
}

// Address range: 0x433c93 - 0x433cb9
int64_t function_433c93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 + 0x790f8f29); // 0x433c93
    bool v2; // 0x433c93
    *v1 = (int32_t)v2 + (int32_t)a4 + *v1;
    int16_t v3 = a3; // 0x433c9a
    int64_t v4; // 0x433c93
    __asm_outsd(v3, *(int32_t *)&v4);
    int32_t * v5 = (int32_t *)(a1 - 0x4e162d87); // 0x433c9d
    int64_t v6; // 0x433c93
    *v5 = *v5 & (int32_t)v6;
    *(char *)a1 = __asm_insb(v3);
    int64_t v7 = __asm_int1(); // 0x433caa
    int32_t * v8 = (int32_t *)(v6 + 0x1cd46c78); // 0x433cac
    *v8 = *v8 - (int32_t)v7;
    return a2 & 0xffffffff;
}

// Address range: 0x433ccc - 0x433cd1
int64_t function_433ccc(void) {
    // 0x433ccc
    return function_b31189();
}

// Address range: 0x433cda - 0x433ce1
int64_t function_433cda(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x433cda
    int64_t v1; // 0x433cda
    *(int32_t *)a1 = (int32_t)v1 - (int32_t)a4;
    return function_398aed1();
}

// Address range: 0x433d09 - 0x433d7b
int64_t function_433d09(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x433d09
    int64_t result; // 0x433d09
    unsigned char v1 = (char)result;
    bool v2; // 0x433d09
    char v3 = v2; // 0x433d09
    unsigned char v4 = v3 + (char)(result / 256); // 0x433d09
    char v5 = v1 - v4; // 0x433d09
    bool v6 = v2 ? v4 != -1 | v5 - v3 > v1 : v4 > v1; // 0x433d09
    *(char *)a4 = v5;
    int32_t * v7 = (int32_t *)(result - 65); // 0x433d0b
    int32_t v8 = *v7; // 0x433d0b
    int32_t v9 = (int32_t)v6 + (int32_t)a3; // 0x433d0b
    *v7 = v8 - v9;
    if (v8 <= v9) {
        // 0x433d14
        return function_433d93();
    }
    // 0x433d78
    int16_t v10; // 0x433d09
    char * v11 = (char *)((int64_t)v10 + 4); // 0x433d78
    *v11 = *v11 & (char)((int64_t)&g2 >> 8);
    return result;
}

// Address range: 0x433d89 - 0x433d93
int64_t function_433d89(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t result; // 0x433d89
    bool v2; // 0x433d89
    if (!v2) {
        result = function_433d89(a1, a2, a3, a4, (int64_t)&g6);
    }
    // 0x433d8d
    *(int32_t *)a1 = (int32_t)a4;
    *(char *)a1 = *(char *)&v1;
    return result;
}

// Address range: 0x433d93 - 0x433d95
int64_t function_433d93(void) {
    // 0x433d93
    int64_t v1; // 0x433d93
    int64_t v2 = v1;
    bool v3; // 0x433d93
    return (v2 + 46 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x433d98 - 0x433da9
int64_t function_433d98(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x433d98
    return function_ffffffff827516b7();
}

// Address range: 0x433daa - 0x433dad
int64_t function_433daa(int64_t a1) {
    // 0x433daa
    int64_t result; // 0x433daa
    return result;
}

// Address range: 0x433dc2 - 0x433dc3
int64_t function_433dc2(void) {
    // 0x433dc2
    int64_t result; // 0x433dc2
    return result;
}

// Address range: 0x433dc9 - 0x433dcb
int64_t function_433dc9(void) {
    // 0x433dc9
    return function_433dc2();
}

// Address range: 0x433ddd - 0x433df9
int64_t function_433ddd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t result = __asm_wait((int64_t)&g6, (int64_t)&g6, (int64_t)&g6, (int64_t)&g6); // 0x433ddd
    int32_t * v2 = (int32_t *)(a3 - 7); // 0x433dde
    uint32_t v3 = *v2; // 0x433dde
    bool v4; // 0x433ddd
    uint32_t v5 = v4 ? 0x45498f : 0x45498e; // 0x433dde
    *v2 = v3 - v5;
    float80_t v6; // 0x433ddd
    *(int32_t *)(a1 + 112) = (int32_t)v6;
    uint32_t v7 = (int32_t)a4 % 32; // 0x433df4
    if (v7 != 0) {
        uint32_t v8 = *(int32_t *)&v1; // 0x433df4
        *(int32_t *)v1 = (int32_t)(v4 | v3 < v5) << v7 - 1 | v8 << v7 | (int32_t)((int64_t)v8 >> (int64_t)(33 - v7));
    }
    return result;
}
