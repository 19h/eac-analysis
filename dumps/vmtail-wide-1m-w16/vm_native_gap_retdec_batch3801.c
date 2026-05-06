/*
 * Targeted RetDec C for native executable gap queue batch 3801.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2184b-0x21906 rank=- name=- kind=- bytes=- uncovered=-
 *   0x28828-0x288fa rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c226-0x2c2fa rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c372-0x2c438 rank=- name=- kind=- bytes=- uncovered=-
 *   0x361c9-0x3629a rank=- name=- kind=- bytes=- uncovered=-
 *   0x3664c-0x36712 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50189-0x50252 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5415e-0x5422a rank=- name=- kind=- bytes=- uncovered=-
 *   0x55e19-0x55eda rank=- name=- kind=- bytes=- uncovered=-
 *   0x61300-0x613d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6afe9-0x6b0ae rank=- name=- kind=- bytes=- uncovered=-
 *   0x35133e-0x3513ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x4884d9-0x4885ae rank=- name=- kind=- bytes=- uncovered=-
 *   0x497074-0x497140 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4971cf-0x497290 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aeeaf-0x4aef80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b6c6e-0x4b6d30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c1c07-0x4c1cd0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c667b-0x4c6740 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e1919-0x4e1979 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f4d7d-0x4f4e50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fc044-0x4fc100 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5044d6-0x5045a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50bcce-0x50bd90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x517067-0x517130 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52d4ca-0x52d5a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52dafe-0x52dbc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54b48c-0x54b560 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54c790-0x54c860 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55de3e-0x55df10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55e8de-0x55e9b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x569df6-0x569eb0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g15;
extern int g16;
extern int g17;
extern int g18;
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

int64_t function_1fd40();
int64_t function_20540();
int64_t function_208a0();
int64_t function_20a50();
int64_t function_2184b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21850(int64_t a1, int64_t a2);
int64_t function_21884(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_28828(int64_t a1, int64_t a2);
int64_t function_29c3a();
int64_t function_29cea();
int64_t function_29cf4();
int64_t function_29d94();
int64_t function_29ef7();
int64_t function_2c1b0();
int64_t function_2c226(int64_t a1);
int64_t function_2c2a4(int64_t a1);
int64_t function_2c2c8(int64_t a1);
int64_t function_2c2d2(int64_t a1);
int64_t function_2c372(int64_t a1);
int64_t function_2c37a(int64_t a1);
int64_t function_2c386(int64_t a1);
int64_t function_2c3a0(int64_t a1);
int64_t function_2c3cc(int64_t a1);
int64_t function_2c3d7(int64_t a1, int64_t a2);
int64_t function_2c3e2(int64_t result);
int64_t function_2c3ea(int64_t result);
int64_t function_2c3ee(int64_t a1);
int64_t function_2c3fa(int64_t a1);
int64_t function_2c430(int64_t a1);
int64_t function_2c65e();
int64_t function_351317();
int64_t function_35133e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_35a30();
int64_t function_35bf4();
int64_t function_360a0();
int64_t function_361c9(int64_t result, int64_t a2);
int64_t function_361f6(int64_t result);
int64_t function_36204(int64_t a1);
int64_t function_36210(int64_t a1);
int64_t function_3664c(int64_t result, int64_t a2, int64_t a3);
int64_t function_36966();
int64_t function_488414();
int64_t function_488452();
int64_t function_4884d9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_488528(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_49702b();
int64_t function_497043();
int64_t function_497074(int64_t a1, int64_t a2);
int64_t function_497080(int64_t a1, int64_t a2);
int64_t function_497110(int64_t a1, int64_t a2);
int64_t function_497120(int64_t a1, int64_t a2);
int64_t function_497130(int64_t a1, int64_t a2);
int64_t function_4971ae();
int64_t function_4971cf(void);
int64_t function_4971e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4971f0(int64_t a1, int64_t str);
int64_t function_497270(int64_t a1);
int64_t function_497280(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ab380();
int64_t function_4aec20();
int64_t function_4aee70();
int64_t function_4aeeaf(void);
int64_t function_4aeec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4b0890();
int64_t function_4b0ac0();
int64_t function_4b6c6e(int64_t a1);
int64_t function_4b6ca0(int64_t a1);
int64_t function_4b6ce0(int64_t str);
int64_t function_4c1690();
int64_t function_4c16b0();
int64_t function_4c1770();
int64_t function_4c19e0();
int64_t function_4c1af0();
int64_t function_4c1b30();
int64_t function_4c1c07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4c4470();
int64_t function_4c5fc0();
int64_t function_4c62e0();
int64_t function_4c6323();
int64_t function_4c63e8();
int64_t function_4c667b(void);
int64_t function_4c6690(int64_t a1, int64_t a2, int64_t str, int64_t a4, int64_t a5);
int64_t function_4cdaa0();
int64_t function_4e1919(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4eeb30();
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f480f();
int64_t function_4f4d7d(void);
int64_t function_4f4d7f(void);
int64_t function_4f4d9a(int64_t a1);
int64_t function_4f4e10(void);
int64_t function_4f4e37(void);
int64_t function_4f4e3e(void);
int64_t function_4fc010();
int64_t function_4fc044(int64_t a1, int64_t a2);
int64_t function_4fc080(int64_t a1);
int64_t function_4fc090(int64_t a1);
int64_t function_4fc0a0(int64_t a1);
int64_t function_4fc0b0(int64_t a1);
int64_t function_4fc0c0(int64_t a1, int64_t a2);
int64_t function_4fc0d0(int64_t a1);
int64_t function_4fc0e0(int64_t a1, int64_t a2);
int64_t function_4fc0f0(int64_t a1);
int64_t function_4fc7e0();
int64_t function_4feb80();
int64_t function_50189(uint64_t a1, uint64_t a2);
int64_t function_50200(int64_t a1);
int64_t function_50228(int64_t a1);
int64_t function_5029a0();
int64_t function_5033d0();
int64_t function_5044d6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_5044dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_504564(void);
int64_t function_504e1();
int64_t function_508450();
int64_t function_508620();
int64_t function_50bc09();
int64_t function_50bc16();
int64_t function_50bc36();
int64_t function_50bc56();
int64_t function_50bcb6();
int64_t function_50bcbb();
int64_t function_50bcc0();
int64_t function_50bcc3();
int64_t function_50bcce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_50bcf3(void);
int64_t function_50bd0d(void);
int64_t function_50bd1f(void);
int64_t function_50bd34(void);
int64_t function_50bd45(void);
int64_t function_50bd4a(void);
int64_t function_50bd4c(void);
int64_t function_50bd5b(void);
int64_t function_50bd69(void);
int64_t function_50bd76(void);
int64_t function_50bd78(void);
int64_t function_50bd7a(void);
int64_t function_50bd7c(void);
int64_t function_50bd7e(void);
int64_t function_50bd80(void);
int64_t function_50bd85(void);
int64_t function_5168a8();
int64_t function_5168b7();
int64_t function_5168bf();
int64_t function_5169b4();
int64_t function_516a1b();
int64_t function_517067(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_517081(void);
int64_t function_517090(void);
int64_t function_51709e(void);
int64_t function_5170ac(char a1);
int64_t function_5170c2(char a1);
int64_t function_5170db(void);
int64_t function_517107(void);
int64_t function_52c9e0();
int64_t function_52d4ca(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, uint64_t a5, uint64_t a6);
int64_t function_52da40();
int64_t function_52dafe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_52db40(int64_t result, int64_t a2, int64_t a3);
int64_t function_52db83(void);
int64_t function_53f76();
int64_t function_5415e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_542470();
int64_t function_542590();
int64_t function_542650();
int64_t function_54ab90();
int64_t function_54b48c(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6);
int64_t function_54b560();
int64_t function_54c6d0();
int64_t function_54c790(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_54c7e0(int64_t result, int64_t a2, int64_t a3);
int64_t function_54c824(void);
int64_t function_552550();
int64_t function_55d712();
int64_t function_55d718();
int64_t function_55d780();
int64_t function_55d799();
int64_t function_55da74();
int64_t function_55de2();
int64_t function_55de3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_55de5d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_55de81(void);
int64_t function_55de89(char a1);
int64_t function_55de94(void);
int64_t function_55de9c(void);
int64_t function_55dea8(void);
int64_t function_55deb2(int64_t a1, int64_t a2);
int64_t function_55e19(int64_t a1);
int64_t function_55e1b2();
int64_t function_55e1b8();
int64_t function_55e220();
int64_t function_55e239();
int64_t function_55e38(int64_t a1);
int64_t function_55e50(uint64_t a1, uint64_t a2);
int64_t function_55e514();
int64_t function_55e8de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_55e8fd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_55e921(void);
int64_t function_55e929(char a1);
int64_t function_55e934(void);
int64_t function_55e93c(void);
int64_t function_55e948(void);
int64_t function_55e952(int64_t a1, int64_t a2);
int64_t function_56992f();
int64_t function_569df6(void);
int64_t function_569dfc(void);
int64_t function_569e0d(int64_t a1);
int64_t function_569ea3(void);
int64_t function_569ea5(void);
int64_t function_5de9e();
int64_t function_61046();
int64_t function_61222();
int64_t function_6123c();
int64_t function_61266();
int64_t function_6129c();
int64_t function_612ea();
int64_t function_61300(int64_t a1, int64_t a2);
int64_t function_6136e(int64_t a1, int64_t a2);
int64_t function_6139c(int64_t a1);
int64_t function_613b8(void);
int64_t function_613ba(int64_t a1, int64_t a2);
int64_t function_68ae6();
int64_t function_6afe9(int64_t result, int64_t a2);
int64_t function_6b036(int64_t a1);
int64_t function_729b6();
int64_t function_729ce();
int64_t function_d2779();

// Address range: 0x2184b - 0x2184f
int64_t function_2184b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2184b
    int64_t result; // 0x2184b
    return result;
}

// Address range: 0x21850 - 0x2187e
int64_t function_21850(int64_t a1, int64_t a2) {
    // 0x21850
    __readfsqword(40);
    return function_d2779();
}

// Address range: 0x21884 - 0x21906
int64_t function_21884(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x21884
    int64_t v1; // 0x21884
    bool v2; // 0x21884
    if (v2) {
        // 0x218d7
        float80_t v3; // 0x21884
        *(int32_t *)(v1 + 0x24048bc9) = (int32_t)v3;
        int64_t result = 0; // 0x218f5
        if (v1 != __readfsqword(40)) {
            // 0x218f7
            __stack_chk_fail();
            result = (int64_t)&g18;
        }
        // 0x218c2
        return result;
    }
    int64_t v4 = v1 + 0xfbf9404e; // 0x21888
    int64_t v5 = (v1 ^ v1) & 0xffffffff; // 0x2188d
    *(int32_t *)a1 = (int32_t)v4;
    int64_t v6 = (v2 ? -4 : 4) + a1; // 0x2188f
    int64_t result2 = v4 & 0xffffffff; // 0x21892
    int64_t v7 = v5 + 8; // 0x21892
    int32_t v8 = (int32_t)true + (int32_t)v7 + (int32_t)a2; // 0x21894
    __asm_rcl(*(int32_t *)(4 * v6 + 0x4ab97170 + result2));
    char v9; // 0x21884
    int64_t v10; // 0x21884
    char * v11; // 0x218b9
    while (v8 < 0) {
        int64_t v12 = v8; // 0x21894
        uint32_t v13 = __asm_in(49); // 0x218a5
        v7 -= 8;
        *(int64_t *)v7 = v6;
        uint32_t v14 = v13 + (result2 < 0x2d84dfb1 ? 0x16c56752 : 0x16c56751); // 0x218a8
        bool v15 = result2 < 0x2d84dfb1 ? v14 <= v13 : v13 > 0xe93a98ae; // 0x218a8
        result2 = v14;
        char * v16 = (char *)(2 * v6 + 95 + v12); // 0x218ad
        unsigned char v17 = *v16; // 0x218ad
        unsigned char v18 = v17 + (char)(a4 / 256); // 0x218ad
        unsigned char v19 = v18 + (char)v15; // 0x218ad
        unsigned char v20 = llvm_ctpop_i8(v19); // 0x218ad
        bool v21 = v15 ? v19 <= v17 : v18 < v17; // 0x218ad
        *v16 = v19;
        if (v20 % 2 == 0) {
            // 0x218b9
            v11 = (char *)(4 * v1 - 0xa4a4fc4 + v12);
            v9 = *v11;
            v10 = a4;
            goto lab_0x218b9_2;
        }
        v8 = (int32_t)!v21 + (int32_t)v7 + (int32_t)v12;
        __asm_rcl(*(int32_t *)(4 * v6 + 0x4ab97170 + result2));
    }
    // 0x218c2
    return result2;
  lab_0x218b9_2:;
    char v22 = v9 + (char)*(int64_t *)v5; // 0x218b9
    int64_t v23 = v10 - 1; // 0x218c0
    v9 = v22;
    v10 = v23;
    if (v22 == 0 || v23 == 0) {
        // 0x218c2
        *v11 = v22;
        return result2;
    } else {
        goto lab_0x218b9_2;
    }
}

// Address range: 0x28828 - 0x288f9
int64_t function_28828(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x2884b
    function_5de9e();
    int64_t v2; // bp-56, 0x28828
    function_729b6(&v2, a1 + (int64_t)&g8);
    function_29d94(a1 + (int64_t)&g2, a2);
    function_29d94(a1 + (int64_t)&g3, a2 + 8);
    function_29d94(a1 + (int64_t)&g4, a2 + 16);
    function_29d94(a1 + (int64_t)&g5, a2 + 24);
    function_29d94(a1 + (int64_t)&g6, a2 + 32);
    function_29d94(a1 + (int64_t)&g7, a2 + 40);
    function_729ce(&v2);
    int64_t result = 0; // 0x288e5
    if (v1 != __readfsqword(40)) {
        // 0x288e7
        __stack_chk_fail();
        result = (int64_t)&g18;
    }
    // 0x288ec
    return result;
}

// Address range: 0x2c226 - 0x2c2a4
int64_t function_2c226(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16); // 0x2c226
    uint32_t v2 = *v1; // 0x2c226
    if (v2 >= 0) {
        // 0x2c22d
        if ((int64_t)g13 != a1) {
            // 0x2c236
            *v1 = v2 + 1;
        }
        // 0x2c24c
        return a1 + 24;
    }
    int64_t v3 = function_2c1b0(a1, *(int64_t *)(a1 + 8), v2); // 0x2c25c
    int64_t result = v3 + 24; // 0x2c264
    int64_t v4 = 0; // 0x2c26b
    if (a1 != 0) {
        char * v5 = (char *)(a1 + 24);
        if (a1 != 1) {
            // 0x2c27b
            __asm_rep_movsb_memcpy((char *)result, v5, a1);
            bool v6; // 0x2c226
            v4 = result + (v6 ? -1 : 1) * a1;
        } else {
            // 0x2c273
            *(char *)result = *v5;
            v4 = a1;
        }
    }
    // 0x2c284
    if (v3 != (int64_t)g13) {
        // 0x2c28d
        *(int32_t *)(v3 + 16) = 0;
        *(int64_t *)v3 = v4;
        *(char *)(v4 + result) = 0;
    }
    // 0x2c29f
    return result;
}

// Address range: 0x2c2a4 - 0x2c2c8
int64_t function_2c2a4(int64_t a1) {
    int64_t result = a1 + 8; // 0x2c2a4
    *(int32_t *)result = 0;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 24) = result;
    *(int64_t *)(a1 + 32) = result;
    return result;
}

// Address range: 0x2c2c8 - 0x2c2d1
int64_t function_2c2c8(int64_t a1) {
    // 0x2c2c8
    return function_2c65e();
}

// Address range: 0x2c2d2 - 0x2c2f9
int64_t function_2c2d2(int64_t a1) {
    // 0x2c2d2
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)a1 = (int64_t)&g15;
    return (int64_t)&g15;
}

// Address range: 0x2c372 - 0x2c37a
int64_t function_2c372(int64_t a1) {
    // 0x2c372
    return a1 + 32;
}

// Address range: 0x2c37a - 0x2c385
int64_t function_2c37a(int64_t a1) {
    // 0x2c37a
    return a1 & -256 | (int64_t)(*(int64_t *)(a1 + 8) == a1);
}

// Address range: 0x2c386 - 0x2c3a0
int64_t function_2c386(int64_t a1) {
    // 0x2c386
    return -0x5555555555555555 * (*(int64_t *)(a1 + 8) - a1 >> 3);
}

// Address range: 0x2c3a0 - 0x2c3cb
int64_t function_2c3a0(int64_t a1) {
    // 0x2c3a0
    function_2c65e();
    int64_t result = a1 + 8; // 0x2c3ad
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 24) = result;
    *(int64_t *)(a1 + 32) = result;
    return result;
}

// Address range: 0x2c3cc - 0x2c3d7
int64_t function_2c3cc(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x2c3cc
    return v1 & -256 | (int64_t)(v1 == a1);
}

// Address range: 0x2c3d7 - 0x2c3e1
int64_t function_2c3d7(int64_t a1, int64_t a2) {
    // 0x2c3d7
    return a2 & -256 | (int64_t)(bool)(a1 != a2);
}

// Address range: 0x2c3e2 - 0x2c3ea
int64_t function_2c3e2(int64_t result) {
    // 0x2c3e2
    *(int64_t *)result = result + 64;
    return result;
}

// Address range: 0x2c3ea - 0x2c3ee
int64_t function_2c3ea(int64_t result) {
    // 0x2c3ea
    return result;
}

// Address range: 0x2c3ee - 0x2c3fa
int64_t function_2c3ee(int64_t a1) {
    // 0x2c3ee
    return a1 & -256 | (int64_t)(*(int64_t *)(a1 - 24) == 0);
}

// Address range: 0x2c3fa - 0x2c430
int64_t function_2c3fa(int64_t a1) {
    int64_t result = a1 + 8; // 0x2c3fa
    int64_t v1 = *(int64_t *)(a1 + 16);
    int64_t v2; // 0x2c3fa
    uint32_t v3 = (int32_t)v2;
    if (v1 == 0) {
        // 0x2c42f
        return result;
    }
    int64_t v4 = v1;
    int64_t v5; // 0x2c3fa
    int64_t v6; // 0x2c3fa
    while (*(int32_t *)(v4 + 32) < v3) {
        // 0x2c41a
        v6 = *(int64_t *)(v4 + 24);
        v5 = result;
        if (v6 == 0) {
            // break (via goto) -> 0x2c420
            goto lab_0x2c420;
        }
        v4 = v6;
    }
    int64_t v7 = *(int64_t *)(v4 + 16);
    v5 = v4;
    while (v7 != 0) {
        int64_t v8 = v4;
        v4 = v7;
        while (*(int32_t *)(v4 + 32) < v3) {
            // 0x2c41a
            v6 = *(int64_t *)(v4 + 24);
            v5 = v8;
            if (v6 == 0) {
                // break (via goto) -> 0x2c420
                goto lab_0x2c420;
            }
            v4 = v6;
        }
        // 0x2c411
        v7 = *(int64_t *)(v4 + 16);
        v5 = v4;
    }
  lab_0x2c420:;
    int64_t v9 = v5;
    if (result == v9) {
        // 0x2c42f
        return result;
    }
    // 0x2c425
    return *(int32_t *)(v9 + 32) <= v3 ? v9 : result;
}

// Address range: 0x2c430 - 0x2c438
int64_t function_2c430(int64_t a1) {
    // 0x2c430
    return a1 + 32;
}

// Address range: 0x361c9 - 0x361f6
int64_t function_361c9(int64_t result, int64_t a2) {
    int32_t * v1 = (int32_t *)(result - 8); // 0x361d0
    if (*v1 < 0) {
        // 0x361d7
        *v1 = 0;
    }
    int32_t * v2 = (int32_t *)(a2 - 8); // 0x361e1
    if (*v2 < 0) {
        // 0x361e8
        *v2 = 0;
    }
    // 0x361ef
    *(int64_t *)result = a2;
    *(int64_t *)a2 = result;
    return result;
}

// Address range: 0x361f6 - 0x36204
int64_t function_361f6(int64_t result) {
    // 0x361f6
    function_36966();
    return result;
}

// Address range: 0x36204 - 0x36210
int64_t function_36204(int64_t a1) {
    // 0x36204
    return a1 & -256 | (int64_t)(*(int64_t *)(a1 - 24) == 0);
}

// Address range: 0x36210 - 0x3629a
int64_t function_36210(int64_t a1) {
    // 0x36210
    function_29c3a(a1 + 64);
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x36226
    int64_t v2 = *v1; // 0x36226
    if (v2 != 0) {
        int64_t v3 = *(int64_t *)v2; // 0x36237
        function_29c3a(v2 + 16);
        function_29c3a(v2 + 8);
        function_4eeb50(v2);
        while (v3 != 0) {
            int64_t v4 = v3;
            v3 = *(int64_t *)v4;
            function_29c3a(v4 + 16);
            function_29c3a(v4 + 8);
            function_4eeb50(v4);
        }
    }
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x36259
    __asm_rep_stosb_memset((char *)*v5, 0, 8 * *(int64_t *)(a1 + 16));
    *(int64_t *)(a1 + 32) = 0;
    *v1 = 0;
    int64_t v6 = *v5; // 0x3627d
    if (v6 != a1 + 56) {
        // 0x36286
        function_4eeb50(v6);
    }
    // 0x3628b
    return function_29c3a(a1);
}

// Address range: 0x3664c - 0x36711
int64_t function_3664c(int64_t result, int64_t a2, int64_t a3) {
    // 0x3664c
    function_360a0();
    int64_t v1 = *(int64_t *)(a3 - 24); // 0x36663
    if (v1 == 0) {
        // 0x36705
        return result;
    }
    uint64_t v2 = *(int64_t *)(result - 24) + v1; // 0x36677
    uint64_t v3 = *(int64_t *)(result - 16); // 0x3667a
    int64_t v4 = v3; // 0x3667e
    int64_t v5; // 0x3664c
    if (v2 > v3) {
        goto lab_0x36680;
    } else {
        int64_t v6 = function_29cea(result); // 0x3668f
        v5 = result;
        if ((char)v6 != 0) {
            // 0x3668b
            v4 = *(int64_t *)(result - 40);
            goto lab_0x36680;
        } else {
            goto lab_0x366df;
        }
    }
  lab_0x36680:;
    int64_t v7 = result; // 0x36687
    if (v2 != v4) {
        goto lab_0x366a7;
    } else {
        int64_t v8 = result - 24; // 0x3669a
        int64_t v9 = function_29cea(v8); // 0x3669e
        v7 = v8;
        v5 = v8;
        if ((char)v9 == 0) {
            goto lab_0x366df;
        } else {
            goto lab_0x366a7;
        }
    }
  lab_0x366a7:;
    int64_t v10 = v7 - 24; // 0x366aa
    uint64_t v11 = *(int64_t *)v10; // 0x366aa
    int64_t v12 = function_35bf4(v10, (v2 >= v11 ? v2 : v11) - v11); // 0x366bf
    int64_t v13 = v7 - 48; // 0x366ca
    if (v13 != *(int64_t *)0x848c20) {
        // 0x366d7
        function_35a30(v13);
    }
    // 0x366dc
    *(int64_t *)result = v12;
    v5 = v13;
    goto lab_0x366df;
  lab_0x366df:;
    int64_t v14 = v5;
    int64_t v15 = 4 * *(int64_t *)(v14 - 24) + v14; // 0x366ea
    function_29ef7(v15, a3, v1);
    function_29cf4(v15 - 24, v2);
    // 0x36705
    return result;
}

// Address range: 0x50189 - 0x50200
int64_t function_50189(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x50198
    if (a1 >= 0x3ffffffffffffffa) {
        // 0x5019a
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x501ac
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x501ae
        v3 = v2 < v4 ? v4 : v2;
    }
    uint64_t v5 = v3 + 57; // 0x501b9
    int64_t v6 = v3; // 0x501c3
    if (v5 > (int64_t)&g1 && v3 > a2) {
        uint64_t v7 = v3 + (int64_t)&g1 - (v5 & (int64_t)(int32_t)&g16); // 0x501d6
        v6 = v7 < 0x3ffffffffffffff9 ? v7 : 0x3ffffffffffffff9;
    }
    int64_t result = function_4efd30(v6 + 25); // 0x501ee
    *(int64_t *)(result + 8) = v6;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x50200 - 0x50227
int64_t function_50200(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 16);
    uint32_t result = *v1;
    *v1 = result - 1;
    if (result >= 0 == (result != 0)) {
        // 0x50226
        return result;
    }
    // 0x50221
    return function_4eeb50(a1);
}

// Address range: 0x50228 - 0x50251
int64_t function_50228(int64_t a1) {
    uint32_t v1 = (int32_t)a1;
    if (v1 >= 2) {
        // 0x50250
        return 2;
    }
    // 0x50232
    if (v1 != 1) {
        // 0x50250
        return 1;
    }
    uint32_t v2 = *(int32_t *)(a1 + 4); // 0x50239
    if (v2 >= 17) {
        // 0x50250
        return 2;
    }
    // 0x5023f
    if (v2 != 16) {
        // 0x50250
        return 1;
    }
    // 0x50241
    return (int64_t)(*(int32_t *)(a1 + 8) < 2) + 2 & 0xffffffff;
}

// Address range: 0x5415e - 0x5422a
int64_t function_5415e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x54193
    int64_t v2 = function_53f76(); // 0x541a9
    int64_t v3 = v2; // 0x541b0
    if ((int32_t)v2 == 0) {
        // 0x541b2
        int64_t v4; // bp-96, 0x5415e
        function_4cdaa0(a2, a3, &v4, 0);
        int64_t v5; // bp-320, 0x5415e
        int64_t v6 = function_504e1(function_4c4470(&v5, 6, &v4, 32, a4, a5) & 0xffffffff); // 0x541eb
        int64_t v7; // bp-648, 0x5415e
        function_4ab380(&v7);
        v3 = v6 & 0xffffffff;
    }
    int64_t result = v3; // 0x54211
    if (v1 != __readfsqword(40)) {
        // 0x54213
        __stack_chk_fail();
        result = (int64_t)&g18;
    }
    // 0x54218
    return result;
}

// Address range: 0x55e19 - 0x55e37
int64_t function_55e19(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x55e1b
    int64_t result = function_55de2(v1); // 0x55e22
    if (v1 == 0) {
        // 0x55e35
        return result;
    }
    // 0x55e2c
    return function_4eeb50(v1);
}

// Address range: 0x55e38 - 0x55e4f
int64_t function_55e38(int64_t a1) {
    // 0x55e38
    function_55de2(a1);
    return function_4eeb30(a1, &g9);
}

// Address range: 0x55e50 - 0x55eda
int64_t function_55e50(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x55e5e
    if (a1 >= 0xfffffffffffffff) {
        // 0x55e60
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x55e72
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x55e74
        v3 = v2 < v4 ? v4 : v2;
    }
    int64_t v5 = 4 * v3; // 0x55e7f
    uint64_t v6 = v5 + 60; // 0x55e87
    int64_t v7 = v3; // 0x55e91
    int64_t v8 = v5; // 0x55e91
    if (v3 > a2 && v6 > (int64_t)&g1) {
        uint64_t v9 = ((int64_t)&g1 - (v6 & (int64_t)(int32_t)&g16)) / 4 + v3; // 0x55eac
        v7 = v9 < 0xffffffffffffffe ? v9 : 0xffffffffffffffe;
        v8 = 4 * v7;
    }
    int64_t result = function_4efd30(v8 + 28); // 0x55ec8
    *(int64_t *)(result + 8) = v7;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x61300 - 0x6136e
int64_t function_61300(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x61307
    int64_t v2 = *v1; // 0x61307
    if (v2 == 0) {
        // 0x61369
        return 0;
    }
    int64_t result = function_61222(v2, a2); // 0x6131c
    int64_t v3 = 0; // 0x61324
    if (result != 0) {
        // 0x61369
        return result;
    }
    int64_t v4 = v2;
    int64_t result2 = function_61222(v4, a2); // 0x61340
    while (result2 == 0) {
        int64_t v5 = v3;
        int64_t * v6 = (int64_t *)v4; // 0x61328
        int64_t v7 = *v6; // 0x61328
        int64_t v8 = v7; // 0x6132c
        v3 = v5;
        if (v7 == 0) {
            // 0x61350
            if ((char)v5 != 0) {
                // 0x61369
                return 0;
            }
            // 0x61355
            v8 = function_61046(4, 0);
            *v6 = v8;
            v3 = 1;
        }
        // 0x6132e
        if (v8 == 0) {
            // 0x61369
            return 0;
        }
        v4 = v8;
        result2 = function_61222(v4, a2);
    }
    // 0x6134a
    *v1 = v4;
    // 0x61369
    return result2;
}

// Address range: 0x6136e - 0x6139b
int64_t function_6136e(int64_t a1, int64_t a2) {
    // 0x6136e
    *(int64_t *)(a1 + 8) = 0;
    int64_t result; // 0x6136e
    if (a1 == 0) {
        // 0x6139a
        return result;
    }
    int64_t v1 = a1; // 0x6137f
    int64_t v2 = function_612ea(v1, a2); // 0x61387
    while ((char)v2 == 0) {
        // 0x61395
        v1 = *(int64_t *)v1;
        result = v2;
        if (v1 == 0) {
            // 0x6139a
            return result;
        }
        v2 = function_612ea(v1, a2);
    }
    // 0x61390
    return function_6123c();
}

// Address range: 0x6139c - 0x613b8
int64_t function_6139c(int64_t a1) {
    // 0x6139c
    int64_t result; // 0x6139c
    if (a1 == 0) {
        // 0x613a4
        return result;
    }
    int64_t v1 = *(int64_t *)a1; // 0x613a6
    result = function_61266(a1);
    while (v1 != 0) {
        int64_t v2 = v1;
        v1 = *(int64_t *)v2;
        result = function_61266(v2);
    }
    // 0x613a4
    return result;
}

// Address range: 0x613b8 - 0x613ba
int64_t function_613b8(void) {
    // 0x613b8
    int64_t v1; // 0x613b8
    return function_6139c(v1);
}

// Address range: 0x613ba - 0x613d6
int64_t function_613ba(int64_t a1, int64_t a2) {
    // 0x613ba
    if (a1 == 0) {
        // 0x613d5
        int64_t result; // 0x613ba
        return result;
    }
    int64_t v1 = a1; // 0x613c3
    int64_t result2 = function_6129c(v1, a2); // 0x613cb
    v1 = *(int64_t *)v1;
    while (v1 != 0) {
        // 0x613c5
        result2 = function_6129c(v1, a2);
        v1 = *(int64_t *)v1;
    }
    // 0x613d5
    return result2;
}

// Address range: 0x6afe9 - 0x6b036
int64_t function_6afe9(int64_t result, int64_t a2) {
    // 0x6afe9
    function_68ae6();
    *(int32_t *)(result + 160) = *(int32_t *)(a2 + 160);
    *(int16_t *)(result + 248) = (int16_t)*(int32_t *)(a2 + 248);
    *(int16_t *)(result + 250) = *(int16_t *)(a2 + 250);
    *(int16_t *)(result + 252) = (int16_t)*(int32_t *)(a2 + 252);
    return result;
}

// Address range: 0x6b036 - 0x6b0ae
int64_t function_6b036(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x6b048
    int64_t v2; // bp-40, 0x6b036
    function_729b6(&v2, a1 + 8);
    int32_t fd = *(int32_t *)(a1 + 160); // 0x6b060
    int64_t v3 = 0xffffffff; // 0x6b06b
    if (fd != 0) {
        int32_t v4 = ioctl(fd, (int32_t)&g10); // 0x6b07b
        int32_t v5; // 0x6b036
        v3 = v4 != 0 ? 0 : (int64_t)(uint32_t)v5;
    }
    // 0x6b088
    function_729ce(&v2);
    int64_t result = v3; // 0x6b0a0
    if (v1 != __readfsqword(40)) {
        // 0x6b0a2
        __stack_chk_fail();
        result = (int64_t)&g18;
    }
    // 0x6b0a7
    return result;
}

// Address range: 0x35133e - 0x3513ff
int64_t function_35133e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x35133e
    bool v1; // 0x35133e
    if (a4 != 1 && !v1) {
        function_351317();
    }
    // 0x351340
    int64_t v2; // bp-32, 0x35133e
    int64_t v3 = (int64_t)&v2; // 0x3513ed
    *(int64_t *)(v3 - 8) = 0x61687445;
    *(int64_t *)(v3 - 16) = 0x2d7005ee;
    return result;
}

// Address range: 0x4884d9 - 0x488528
int64_t function_4884d9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4884d9
    int64_t v1; // 0x4884d9
    int64_t v2 = v1;
    int64_t v3 = __readfsqword(40); // 0x4884e7
    int64_t v4 = function_488452(); // 0x4884f7
    int64_t v5 = v4; // 0x4884fe
    if ((char)v4 != 0) {
        // 0x488500
        v5 = v2 & -256 | (int64_t)(*(int32_t *)(v2 + 248) != 0);
    }
    int64_t result = v5; // 0x48851c
    if (v3 != __readfsqword(40)) {
        // 0x48851e
        __stack_chk_fail();
        result = (int64_t)&g18;
    }
    // 0x488523
    return result;
}

// Address range: 0x488528 - 0x4885ae
int64_t function_488528(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x488528
    int64_t v1; // 0x488528
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)a3; // 0x48853d
    *v3 = 0;
    int64_t * v4 = (int64_t *)a4; // 0x488544
    *v4 = 0;
    int64_t v5 = __readfsqword(40); // 0x488550
    int64_t v6 = function_488452(); // 0x488560
    int64_t v7 = v6; // 0x48856a
    if ((char)v6 != 0) {
        // 0x48856c
        *v3 = function_488414(*(int32_t *)(v2 + 44), v2, a1);
        v7 = (int64_t)*(int32_t *)(v2 + 28);
        *v4 = v7;
    }
    int64_t result = v7 & -256 | v6 % 256; // 0x48859a
    if (v5 != __readfsqword(40)) {
        // 0x48859c
        __stack_chk_fail();
        result = (int64_t)&g18;
    }
    // 0x4885a1
    return result;
}

// Address range: 0x497074 - 0x49707d
int64_t function_497074(int64_t a1, int64_t a2) {
    // 0x497074
    int64_t v1; // 0x497074
    int64_t v2 = v1 & -256 | (uint64_t)v1 % 256; // 0x497074
    int32_t * v3 = (int32_t *)v2; // 0x497075
    int32_t v4 = v2; // 0x497075
    *v3 = *v3 + v4;
    if (v4 != 0) {
        function_49702b();
    }
    // 0x49707b
    return function_497043();
}

// Address range: 0x497080 - 0x497102
int64_t function_497080(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 248; // 0x497085
    int64_t v2 = function_4b0ac0(v1, a2 + 8); // 0x4970a7
    int64_t v3 = a1 + 272;
    int64_t result = v2; // 0x4970ae
    if ((int32_t)v2 == 0) {
        // 0x4970e8
        result = function_4b0ac0(v3, a2 + 32);
        if ((int32_t)result == 0) {
            // 0x4970cf
            return result;
        }
    }
    // 0x4970b7
    function_4b0890(v1);
    function_4b0890(v3);
    // 0x4970cf
    return result & 0xffffffff;
}

// Address range: 0x497110 - 0x497117
int64_t function_497110(int64_t a1, int64_t a2) {
    // 0x497110
    *(int32_t *)(a1 + 364) = (int32_t)a2;
    int64_t result; // 0x497110
    return result;
}

// Address range: 0x497120 - 0x497128
int64_t function_497120(int64_t a1, int64_t a2) {
    // 0x497120
    *(int64_t *)(a1 + 232) = a2;
    int64_t result; // 0x497120
    return result;
}

// Address range: 0x497130 - 0x497138
int64_t function_497130(int64_t a1, int64_t a2) {
    // 0x497130
    *(int64_t *)(a1 + 240) = a2;
    int64_t result; // 0x497130
    return result;
}

// Address range: 0x4971cf - 0x4971d6
int64_t function_4971cf(void) {
    // 0x4971cf
    return function_4971ae();
}

// Address range: 0x4971e0 - 0x4971e9
int64_t function_4971e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4971e0
    *(int64_t *)(a1 + 88) = a2;
    *(int64_t *)(a1 + 96) = a3;
    int64_t result; // 0x4971e0
    return result;
}

// Address range: 0x4971f0 - 0x497264
int64_t function_4971f0(int64_t a1, int64_t str) {
    int64_t v1 = 0; // 0x497206
    int64_t v2 = str; // 0x497206
    if (str == 0) {
        // 0x497250
        *(int64_t *)(a1 + 328) = str;
        return 0;
    }
    int32_t len = strlen((char *)str); // 0x497226
    int64_t v3 = len; // 0x497226
    v1 += v3;
    while (v1 <= (int64_t)&g17 && len != 255 != v3 > 254) {
        // 0x497219
        v2 += 8;
        int64_t str2 = *(int64_t *)v2; // 0x49721d
        if (str2 == 0) {
            // 0x497250
            *(int64_t *)(a1 + 328) = str;
            return 0;
        }
        len = strlen((char *)str2);
        v3 = len;
        v1 += v3;
    }
    // 0x49723a
    return 0xffff8f00;
}

// Address range: 0x497270 - 0x497278
int64_t function_497270(int64_t a1) {
    // 0x497270
    return *(int64_t *)(a1 + 376);
}

// Address range: 0x497280 - 0x49728e
int64_t function_497280(int64_t a1, int64_t a2, int64_t a3) {
    // 0x497280
    *(char *)(a1 + 368) = (char)a2;
    *(char *)(a1 + 369) = (char)a3;
    int64_t result; // 0x497280
    return result;
}

// Address range: 0x4aeeaf - 0x4aeeb6
int64_t function_4aeeaf(void) {
    // 0x4aeeaf
    int64_t v1; // 0x4aeeaf
    function_4aec20(v1, v1, v1, v1);
    return function_4aee70();
}

// Address range: 0x4aeec0 - 0x4aef71
int64_t function_4aeec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4aeec0
    if (a3 == 0) {
        // 0x4aef60
        return 0;
    }
    int64_t v1 = a3; // 0x4aeeeb
    int64_t v2 = a5; // 0x4aeeeb
    int64_t v3 = a6; // 0x4aeeeb
    function_4aec20(a1, 1, a4, a4);
    *(char *)v3 = *(char *)v2 ^ (char)a4;
    v1--;
    int32_t v4; // 0x4aeec0
    *(int64_t *)(a4 + 8) = (int64_t)v4;
    v2++;
    v3++;
    while (v1 != 0) {
        // 0x4aef19
        function_4aec20(a1, 1, a4, a4);
        *(char *)v3 = *(char *)v2 ^ (char)a4;
        v1--;
        *(int64_t *)(a4 + 8) = (int64_t)v4;
        v2++;
        v3++;
    }
    // 0x4aef60
    return 0;
}

// Address range: 0x4b6c6e - 0x4b6c9c
int64_t function_4b6c6e(int64_t a1) {
    for (int64_t i = 0; i < 8; i++) {
        char * v1 = (char *)(i + a1); // 0x4b6c80
        *v1 = *(char *)((int64_t)(*v1 / 2) + (int64_t)&g11);
    }
    // 0x4b6c9a
    return 8;
}

// Address range: 0x4b6ca0 - 0x4b6cd6
int64_t function_4b6ca0(int64_t a1) {
    int64_t v1 = 0;
    unsigned char v2 = *(char *)(v1 + a1); // 0x4b6cb0
    char v3 = *(char *)((int64_t)(v2 / 2) + (int64_t)&g11); // 0x4b6cbb
    while (v2 == v3) {
        int64_t v4 = v1 + 1; // 0x4b6cc0
        if (v1 == 7) {
            // 0x4b6cca
            return v4 & 0x7fffffffffffff00;
        }
        v1 = v4;
        v2 = *(char *)(v1 + a1);
        v3 = *(char *)((int64_t)(v2 / 2) + (int64_t)&g11);
    }
    // 0x4b6cd0
    return 1;
}

// Address range: 0x4b6ce0 - 0x4b6d2a
int64_t function_4b6ce0(int64_t str) {
    int64_t v1 = 0; // 0x4b6cee
    int32_t memcmp_rc = memcmp((int64_t *)((0x100000000 * v1 >> 29) + (int64_t)&g12), (int64_t *)str, 8); // 0x4b6d00
    int64_t result = 1; // 0x4b6d07
    while (memcmp_rc != 0) {
        int64_t v2 = v1 + 1; // 0x4b6d09
        v1 = v2 & 0xffffffff;
        result = 0;
        if ((int32_t)v2 == 16) {
            // break -> 0x4b6d11
            break;
        }
        memcmp_rc = memcmp((int64_t *)((0x100000000 * v1 >> 29) + (int64_t)&g12), (int64_t *)str, 8);
        result = 1;
    }
    // 0x4b6d11
    return result;
}

// Address range: 0x4c1c07 - 0x4c1cc7
int64_t function_4c1c07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4c1c07
    if (a1 == 0) {
        // 0x4c1c9a
        return 0xffffaf00;
    }
    // 0x4c1c3e
    int64_t v1; // bp-88, 0x4c1c07
    function_4c1690(&v1);
    int64_t v2 = function_4c1770(&v1, a1, 1); // 0x4c1c60
    if ((int32_t)v2 == 0) {
        // 0x4c1c6b
        function_4c19e0(&v1, a2, a3);
        function_4c1af0(&v1, a4, a5);
        function_4c1b30(&v1, a6);
        function_4c16b0(&v1);
    }
    // 0x4c1c9a
    return v2 & 0xffffffff;
}

// Address range: 0x4c667b - 0x4c6686
int64_t function_4c667b(void) {
    // 0x4c667b
    bool v1; // 0x4c667b
    if (!v1) {
        function_4c63e8();
    }
    // 0x4c6681
    return function_4c6323();
}

// Address range: 0x4c6690 - 0x4c6731
int64_t function_4c6690(int64_t a1, int64_t a2, int64_t str, int64_t a4, int64_t a5) {
    // 0x4c6690
    int64_t v1; // bp-32, 0x4c6690
    int64_t v2; // bp-40, 0x4c6690
    int64_t result = function_4c5fc0(a2, &v1, &v2); // 0x4c66a9
    if ((int32_t)result != 0) {
        // 0x4c670e
        return result;
    }
    int64_t v3; // 0x4c6690
    if (str == 0) {
        // 0x4c6718
        v3 = function_4c62e0(a1, v1, v2, 0, 0);
    } else {
        // 0x4c66b7
        v3 = function_4c62e0(a1, v1, v2, str, (int64_t)strlen((char *)str));
    }
    // 0x4c66d7
    if (v2 == 0) {
        // 0x4c6701
        free((int64_t *)v1);
        // 0x4c670e
        return v3 & 0xffffffff;
    }
    int64_t v4 = v1; // 0x4c66e9
    *(char *)v4 = 0;
    v4++;
    while (v4 != v1 + v2) {
        // 0x4c66f0
        *(char *)v4 = 0;
        v4++;
    }
    // 0x4c6701
    free((int64_t *)v1);
    // 0x4c670e
    return v3 & 0xffffffff;
}

// Address range: 0x4e1919 - 0x4e191b
int64_t function_4e1919(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4e1919
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return a4 & 0xffffffff;
}

// Address range: 0x4f4d7d - 0x4f4d7e
int64_t function_4f4d7d(void) {
    // 0x4f4d7d
    int64_t result; // 0x4f4d7d
    return result;
}

// Address range: 0x4f4d7f - 0x4f4d9a
int64_t function_4f4d7f(void) {
    // 0x4f4d7f
    int64_t v1; // 0x4f4d7f
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x4f4d7f
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    *(int32_t *)(v3 + 104) = 0;
    *(char *)(v3 + 152) = 0;
    *(int64_t *)(v1 + 16) = v3;
    return function_4f480f();
}

// Address range: 0x4f4d9a - 0x4f4e10
int64_t function_4f4d9a(int64_t a1) {
    // 0x4f4d9a
    __stack_chk_fail();
    int64_t v1 = (int64_t)&g18; // 0x4f4da7
    while (true) {
        // 0x4f4daa
        function_1fd40(v1);
        int64_t v2; // 0x4f4d9a
        *(int64_t *)(v2 + 16) = 0;
        if (a1 != 0) {
            // 0x4f4dd1
            function_4eeb40(a1);
        }
        // 0x4f4df9
        __uselocale((struct __locale_struct *)v2);
        v1 = function_20a50();
    }
}

// Address range: 0x4f4e10 - 0x4f4e37
int64_t function_4f4e10(void) {
    // 0x4f4e10
    int64_t v1; // 0x4f4e10
    return function_1fd40(v1);
}

// Address range: 0x4f4e37 - 0x4f4e3c
int64_t function_4f4e37(void) {
    // 0x4f4e37
    int64_t result; // 0x4f4e37
    return result;
}

// Address range: 0x4f4e3e - 0x4f4e3f
int64_t function_4f4e3e(void) {
    // 0x4f4e3e
    int64_t result; // 0x4f4e3e
    return result;
}

// Address range: 0x4fc044 - 0x4fc079
int64_t function_4fc044(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 32); // 0x4fc050
    int32_t v2 = a2; // 0x4fc050
    *v1 = *v1 | v2;
    if ((*(int32_t *)(a1 + 28) & v2) == 0) {
        // 0x4fc058
        int64_t result; // 0x4fc044
        return result;
    }
    // 0x4fc05a
    function_20a50();
    int32_t v3 = *v1; // 0x4fc070
    return (int64_t)(v3 & -256) | (int64_t)(v3 == 0);
}

// Address range: 0x4fc080 - 0x4fc089
int64_t function_4fc080(int64_t a1) {
    // 0x4fc080
    return (int64_t)(*(int32_t *)(a1 + 32) / 2 % 2);
}

// Address range: 0x4fc090 - 0x4fc098
int64_t function_4fc090(int64_t a1) {
    // 0x4fc090
    int64_t v1; // 0x4fc090
    return v1 & -256 | (int64_t)((*(char *)(a1 + 32) & 5) != 0);
}

// Address range: 0x4fc0a0 - 0x4fc0a7
int64_t function_4fc0a0(int64_t a1) {
    // 0x4fc0a0
    return (int64_t)(*(int32_t *)(a1 + 32) % 2);
}

// Address range: 0x4fc0b0 - 0x4fc0b4
int64_t function_4fc0b0(int64_t a1) {
    // 0x4fc0b0
    return (int64_t)*(int32_t *)(a1 + 28);
}

// Address range: 0x4fc0c0 - 0x4fc0cb
int64_t function_4fc0c0(int64_t a1, int64_t a2) {
    // 0x4fc0c0
    *(int32_t *)(a1 + 28) = (int32_t)a2;
    int64_t v1; // 0x4fc0c0
    return function_4fc010(a1, *(int32_t *)(a1 + 32), v1);
}

// Address range: 0x4fc0d0 - 0x4fc0d8
int64_t function_4fc0d0(int64_t a1) {
    // 0x4fc0d0
    return *(int64_t *)(a1 + 216);
}

// Address range: 0x4fc0e0 - 0x4fc0ef
int64_t function_4fc0e0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 216); // 0x4fc0e0
    *v1 = a2;
    return *v1;
}

// Address range: 0x4fc0f0 - 0x4fc0f8
int64_t function_4fc0f0(int64_t a1) {
    // 0x4fc0f0
    return *(int64_t *)(a1 + 232);
}

// Address range: 0x5044d6 - 0x5044dc
int64_t function_5044d6(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x5044d6
    int64_t result; // 0x5044d6
    bool v1; // 0x5044d6
    *(char *)a4 = (char)result + (char)(a3 / 256) + (char)v1;
    return result;
}

// Address range: 0x5044dd - 0x504564
int64_t function_5044dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x5044dd
    int64_t v1; // 0x5044dd
    int64_t v2 = v1;
    *(int64_t *)(a1 + 8) = 0;
    function_4fc7e0(*(int64_t *)(v1 - 24) + v1, v1);
    *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v2 + 24);
    function_4feb80(v1);
    int64_t * v3 = (int64_t *)(v1 - 24); // 0x504512
    function_4fc7e0(*v3 + v1, v1);
    int64_t v4 = function_5033d0(v1, v1, (int32_t)v1 | 8); // 0x50452a
    int64_t v5 = *v3 + v1; // 0x504536
    if (v4 == 0) {
        // 0x504550
        return function_4fc010(v5, *(int32_t *)(v5 + 32) | 4, v1);
    }
    // 0x50453e
    return function_4fc010(v5, 0, v1);
}

// Address range: 0x504564 - 0x504597
int64_t function_504564(void) {
    // 0x504564
    int64_t v1; // 0x504564
    function_5029a0(v1);
    while (true) {
        int64_t v2 = *(int64_t *)(v1 + 8); // 0x504572
        *(int64_t *)v1 = v2;
        *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 16);
        *(int64_t *)(v1 + 8) = 0;
        int64_t v3; // 0x504564
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        v3 = (int64_t)&g18;
    }
}

// Address range: 0x50bcce - 0x50bcf3
int64_t function_50bcce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x50bcce
    int64_t v1; // 0x50bcce
    char * v2 = (char *)(v1 - 115); // 0x50bcce
    char v3 = *v2 + (char)a4; // 0x50bcce
    *v2 = v3;
    if (v3 >= 0) {
        function_50bcbb();
    }
    if (v1 == a1) {
        function_50bc16();
    }
    // 0x50bcdc
    function_508450();
    return function_50bc16();
}

// Address range: 0x50bcf3 - 0x50bd0d
int64_t function_50bcf3(void) {
    // 0x50bcf3
    function_208a0();
    return function_50bc36();
}

// Address range: 0x50bd0d - 0x50bd1f
int64_t function_50bd0d(void) {
    // 0x50bd0d
    return function_50bc36();
}

// Address range: 0x50bd1f - 0x50bd34
int64_t function_50bd1f(void) {
    // 0x50bd1f
    function_20540();
    int64_t v1; // 0x50bd1f
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return function_50bc09();
}

// Address range: 0x50bd34 - 0x50bd45
int64_t function_50bd34(void) {
    // 0x50bd34
    return function_50bc56();
}

// Address range: 0x50bd45 - 0x50bd4a
int64_t function_50bd45(void) {
    // 0x50bd45
    return function_50bcc0();
}

// Address range: 0x50bd4a - 0x50bd4c
int64_t function_50bd4a(void) {
    // 0x50bd4a
    return function_50bd0d();
}

// Address range: 0x50bd4c - 0x50bd5b
int64_t function_50bd4c(void) {
    // 0x50bd4c
    return function_50bc16();
}

// Address range: 0x50bd5b - 0x50bd69
int64_t function_50bd5b(void) {
    // 0x50bd5b
    return function_50bc56();
}

// Address range: 0x50bd69 - 0x50bd76
int64_t function_50bd69(void) {
    // 0x50bd69
    int64_t v1; // 0x50bd69
    function_1fd40(v1);
    return function_50bcb6();
}

// Address range: 0x50bd76 - 0x50bd78
int64_t function_50bd76(void) {
    // 0x50bd76
    return function_50bd4c();
}

// Address range: 0x50bd78 - 0x50bd7a
int64_t function_50bd78(void) {
    // 0x50bd78
    return function_50bd5b();
}

// Address range: 0x50bd7a - 0x50bd7c
int64_t function_50bd7a(void) {
    // 0x50bd7a
    return function_50bd4c();
}

// Address range: 0x50bd7c - 0x50bd7e
int64_t function_50bd7c(void) {
    // 0x50bd7c
    return function_50bd5b();
}

// Address range: 0x50bd7e - 0x50bd80
int64_t function_50bd7e(void) {
    // 0x50bd7e
    return function_50bd0d();
}

// Address range: 0x50bd80 - 0x50bd85
int64_t function_50bd80(void) {
    // 0x50bd80
    int64_t result; // 0x50bd80
    return result;
}

// Address range: 0x50bd85 - 0x50bd8a
int64_t function_50bd85(void) {
    // 0x50bd85
    return function_50bcc3();
}

// Address range: 0x517067 - 0x517081
int64_t function_517067(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x517067
    function_508620();
    return function_516a1b();
}

// Address range: 0x517081 - 0x517090
int64_t function_517081(void) {
    // 0x517081
    return function_5168b7();
}

// Address range: 0x517090 - 0x51709e
int64_t function_517090(void) {
    // 0x517090
    return function_5168a8();
}

// Address range: 0x51709e - 0x5170ac
int64_t function_51709e(void) {
    // 0x51709e
    return function_5169b4();
}

// Address range: 0x5170ac - 0x5170c2
int64_t function_5170ac(char a1) {
    // 0x5170ac
    return function_5169b4();
}

// Address range: 0x5170c2 - 0x5170db
int64_t function_5170c2(char a1) {
    // 0x5170c2
    return function_5169b4();
}

// Address range: 0x5170db - 0x517105
int64_t function_5170db(void) {
    // 0x5170db
    __stack_chk_fail();
    return function_5168bf();
}

// Address range: 0x517107 - 0x517108
int64_t function_517107(void) {
    // 0x517107
    int64_t result; // 0x517107
    return result;
}

// Address range: 0x52d4ca - 0x52d5a0
int64_t function_52d4ca(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, uint64_t a5, uint64_t a6) {
    // 0x52d4ca
    int64_t v1; // 0x52d4ca
    char * v2 = (char *)(v1 - 115); // 0x52d4ca
    *v2 = *v2 + (char)a4;
    function_542650(a1, a2, a3, v1);
    uint64_t v3 = *(int64_t *)(a1 + 8); // 0x52d4e6
    int64_t result; // 0x52d595
    if (v3 < a2) {
        // 0x52d57f
        result = function_542650((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::compare", a2, v3);
        return result;
    }
    uint64_t v4 = *(int64_t *)(v1 + 8); // 0x52d4f3
    if (v4 < a5) {
        // 0x52d564
        function_542650((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::compare", a5, v4);
        // 0x52d57f
        result = function_542650((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::compare", (int64_t)"basic_string::compare", v3);
        return result;
    }
    uint64_t v5 = v3 - a2; // 0x52d4fc
    uint64_t v6 = v5 > a3 ? a3 : v5; // 0x52d502
    uint64_t v7 = v4 - a5; // 0x52d506
    uint64_t v8 = v7 > a6 ? a6 : v7; // 0x52d50f
    int64_t n = v6 < v8 ? v6 : v8; // 0x52d516
    if (n != 0) {
        int32_t memcmp_rc = memcmp((int64_t *)(a2 + a1), (int64_t *)(v6 + a5), (int32_t)n); // 0x52d554
        if (memcmp_rc != 0) {
            // 0x52d55d
            return memcmp_rc;
        }
    }
    uint64_t v9 = v6 - v8; // 0x52d51f
    int64_t result2 = 0x7fffffff; // 0x52d52e
    if (v9 <= 0x7fffffff) {
        int64_t v10 = v9 + 0x80000000; // 0x52d533
        result2 = v10 < 0 == ((v10 ^ v9) & (v9 ^ -0x8000000000000000)) < 0 ? v9 & 0xffffffff : 0x80000000;
    }
    // 0x52d53d
    return result2;
}

// Address range: 0x52dafe - 0x52db34
int64_t function_52dafe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x52dafe
    int64_t v1; // 0x52dafe
    *(int64_t *)a5 = v1 + a5;
    __stack_chk_fail();
    *(int64_t *)a1 = a1 + 16;
    return function_52da40();
}

// Address range: 0x52db40 - 0x52db83
int64_t function_52db40(int64_t result, int64_t a2, int64_t a3) {
    // 0x52db40
    *(int64_t *)result = result + 16;
    function_52da40();
    int64_t v1; // 0x52db40
    function_52c9e0(result, v1, *(int64_t *)(a3 + 8));
    return result;
}

// Address range: 0x52db83 - 0x52dbb7
int64_t function_52db83(void) {
    // 0x52db83
    int64_t v1; // 0x52db83
    int64_t v2 = v1;
    // 0x52db93
    _Unwind_Resume((struct _Unwind_Exception *)v2);
    *(int64_t *)v2 = v2 + 16;
    return function_52da40();
}

// Address range: 0x54b48c - 0x54b560
int64_t function_54b48c(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6) {
    // 0x54b48c
    int64_t v1; // 0x54b48c
    int64_t v2; // 0x54b48c
    bool v3; // 0x54b48c
    if (v3 || v3) {
        uint64_t v4 = *(int64_t *)(a1 + 8); // 0x54b494
        v1 = v4;
        v2 = a2;
        if (v4 >= a2) {
            // 0x54b49d
            return function_54ab90();
        }
    } else {
        // 0x54b4a8
        v1 = function_542650((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::insert", a6, a4);
        v2 = (int64_t)"basic_string::insert";
    }
    // 0x54b4c0
    function_542650((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::replace", v2, v1);
    uint64_t v5 = *(int64_t *)(v1 + 8); // 0x54b4e4
    int64_t result; // 0x54b554
    if (v5 < a5) {
        // 0x54b523
        function_542650((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::replace", a5, v5);
        // 0x54b53e
        result = function_542650((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::replace", (int64_t)"basic_string::replace", a6);
        return result;
    }
    // 0x54b4fd
    if ((int64_t)"basic_string::replace" < 0x6863696877282074) {
        // 0x54b517
        return function_54ab90();
    }
    // 0x54b53e
    result = function_542650((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int64_t)"basic_string::replace", (int64_t)"basic_string::replace", 0x6863696877282073);
    return result;
}

// Address range: 0x54c790 - 0x54c7d5
int64_t function_54c790(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x54c790
    function_542470("basic_string::_M_construct null not valid");
    __stack_chk_fail();
    *(int64_t *)"basic_string::_M_construct null not valid" = (int64_t)"_construct null not valid";
    return function_54c6d0();
}

// Address range: 0x54c7e0 - 0x54c824
int64_t function_54c7e0(int64_t result, int64_t a2, int64_t a3) {
    // 0x54c7e0
    *(int64_t *)result = result + 16;
    function_54c6d0();
    int64_t v1; // 0x54c7e0
    function_54b560(result, v1, *(int64_t *)(a3 + 8));
    return result;
}

// Address range: 0x54c824 - 0x54c857
int64_t function_54c824(void) {
    // 0x54c824
    int64_t v1; // 0x54c824
    int64_t v2 = v1;
    // 0x54c834
    _Unwind_Resume((struct _Unwind_Exception *)v2);
    *(int64_t *)v2 = v2 + 16;
    return function_54c6d0();
}

// Address range: 0x55de3e - 0x55de5d
int64_t function_55de3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x55de3e
    int64_t v1; // 0x55de3e
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 119); // 0x55de40
    *v3 = *v3 + (char)a4;
    function_552550(a1, a2);
    return function_55d799();
}

// Address range: 0x55de5d - 0x55de81
int64_t function_55de5d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x55de5d
    int64_t v1; // bp+159, 0x55de5d
    function_552550(a1, (int64_t)&v1);
    return function_55d780();
}

// Address range: 0x55de81 - 0x55de89
int64_t function_55de81(void) {
    // 0x55de81
    return function_55d718();
}

// Address range: 0x55de89 - 0x55de94
int64_t function_55de89(char a1) {
    // 0x55de89
    return function_55d718();
}

// Address range: 0x55de94 - 0x55de9c
int64_t function_55de94(void) {
    // 0x55de94
    return function_55d718();
}

// Address range: 0x55de9c - 0x55dea8
int64_t function_55de9c(void) {
    // 0x55de9c
    return function_55da74();
}

// Address range: 0x55dea8 - 0x55deb2
int64_t function_55dea8(void) {
    // 0x55dea8
    return function_55d712();
}

// Address range: 0x55deb2 - 0x55df0b
int64_t function_55deb2(int64_t a1, int64_t a2) {
    // 0x55deb2
    __stack_chk_fail();
    int64_t v1 = a2 - 24; // 0x55dec2
    int64_t v2; // bp+159, 0x55deb2
    int64_t v3 = (int64_t)&v2;
    if (v1 != (int64_t)g13) {
        // 0x55decf
        function_552550(v1, v3);
    }
    int64_t v4 = a1 - 24; // 0x55dee4
    while (true) {
        // 0x55dedc
        if (v4 != (int64_t)g13) {
            // 0x55def1
            function_552550(v4, v3);
        }
        // 0x55defe
        _Unwind_Resume((struct _Unwind_Exception *)&g18);
    }
}

// Address range: 0x55e8de - 0x55e8fd
int64_t function_55e8de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x55e8de
    int64_t v1; // 0x55e8de
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 119); // 0x55e8e0
    *v3 = *v3 + (char)a4;
    function_552550(a1, a2);
    return function_55e239();
}

// Address range: 0x55e8fd - 0x55e921
int64_t function_55e8fd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x55e8fd
    int64_t v1; // bp+159, 0x55e8fd
    function_552550(a1, (int64_t)&v1);
    return function_55e220();
}

// Address range: 0x55e921 - 0x55e929
int64_t function_55e921(void) {
    // 0x55e921
    return function_55e1b8();
}

// Address range: 0x55e929 - 0x55e934
int64_t function_55e929(char a1) {
    // 0x55e929
    return function_55e1b8();
}

// Address range: 0x55e934 - 0x55e93c
int64_t function_55e934(void) {
    // 0x55e934
    return function_55e1b8();
}

// Address range: 0x55e93c - 0x55e948
int64_t function_55e93c(void) {
    // 0x55e93c
    return function_55e514();
}

// Address range: 0x55e948 - 0x55e952
int64_t function_55e948(void) {
    // 0x55e948
    return function_55e1b2();
}

// Address range: 0x55e952 - 0x55e9ab
int64_t function_55e952(int64_t a1, int64_t a2) {
    // 0x55e952
    __stack_chk_fail();
    int64_t v1 = a2 - 24; // 0x55e962
    int64_t v2; // bp+159, 0x55e952
    int64_t v3 = (int64_t)&v2;
    if (v1 != (int64_t)g13) {
        // 0x55e96f
        function_552550(v1, v3);
    }
    int64_t v4 = a1 - 24; // 0x55e984
    while (true) {
        // 0x55e97c
        if (v4 != (int64_t)g13) {
            // 0x55e991
            function_552550(v4, v3);
        }
        // 0x55e99e
        _Unwind_Resume((struct _Unwind_Exception *)&g18);
    }
}

// Address range: 0x569df6 - 0x569dfa
int64_t function_569df6(void) {
    // 0x569df6
    int64_t v1; // 0x569df6
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x569dfc - 0x569e0d
int64_t function_569dfc(void) {
    // 0x569dfc
    int64_t v1; // 0x569dfc
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x569dfc
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    *(char *)(v3 + 111) = 0;
    *(int64_t *)(v1 + 16) = v3;
    return function_56992f();
}

// Address range: 0x569e0d - 0x569ea3
int64_t function_569e0d(int64_t a1) {
    // 0x569e0d
    int64_t v1; // 0x569e0d
    function_1fd40(v1);
    int64_t * v2 = (int64_t *)(v1 + 16);
    int64_t v3 = a1; // 0x569e1c
    if (*v2 == 0) {
        goto lab_0x569e38;
    } else {
        // 0x569e38
        *v2 = 0;
        // 0x569e62
        v3 = 0;
        goto lab_0x569e38;
    }
  lab_0x569e38:;
    int64_t v4 = v3;
    int64_t v5 = function_20a50(); // 0x569e6f
    function_20540();
    _Unwind_Resume((struct _Unwind_Exception *)v5);
    function_1fd40((int64_t)&g18);
    *(int64_t *)(v5 + 16) = 0;
    int64_t v6 = 0; // 0x569e45
    if (v4 != 0) {
        // 0x569e47
        function_4eeb40(v4);
        v6 = v4;
    }
    // 0x569e62
    v3 = v6;
    goto lab_0x569e38;
}

// Address range: 0x569ea3 - 0x569ea5
int64_t function_569ea3(void) {
    // 0x569ea3
    int64_t result; // 0x569ea3
    return result;
}

// Address range: 0x569ea5 - 0x569eaa
int64_t function_569ea5(void) {
    // 0x569ea5
    int64_t result; // 0x569ea5
    return result;
}
