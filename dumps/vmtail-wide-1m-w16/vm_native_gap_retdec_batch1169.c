/*
 * Targeted RetDec C for native executable gap queue batch 1169.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3490d8-0x3492d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3492d8-0x3494d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3496d8-0x3498d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c5b6a-0x3c5d6a rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c5f6a-0x3c616a rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c616a-0x3c636a rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c636a-0x3c656a rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c656a-0x3c676a rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c696a-0x3c6b6a rank=- name=- kind=- bytes=- uncovered=-
 *   0x44d525-0x44d625 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44d725-0x44d925 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44d925-0x44db25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44db25-0x44dd25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44dd25-0x44df25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44df25-0x44e125 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44e125-0x44e225 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1795bba();
int64_t function_3490d8(void);
int64_t function_3491c5(void);
int64_t function_3492c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3492ef(void);
int64_t function_349313(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3493c5(void);
int64_t function_349460(void);
int64_t function_349478(int64_t a1);
int64_t function_3496d8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_349718(void);
int64_t function_34974c(void);
int64_t function_349771(int64_t a1);
int64_t function_349783(void);
int64_t function_3497a8(int64_t a1, int64_t a2);
int64_t function_3497ce(void);
int64_t function_349819(int64_t a1, int64_t a2, int64_t a3);
int64_t function_349840(void);
int64_t function_34987b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_349889(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3498a5(void);
int64_t function_3498be(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c5b32();
int64_t function_3c5b6a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3c5b87(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c5c51(void);
int64_t function_3c5cbf(void);
int64_t function_3c5cd4(void);
int64_t function_3c5cdf(void);
int64_t function_3c5cf2(void);
int64_t function_3c5d1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c5f6a(void);
int64_t function_3c5f8d(void);
int64_t function_3c5fb9(void);
int64_t function_3c5fbc(void);
int64_t function_3c5fc0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3c5fe6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c601d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7);
int64_t function_3c61ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3c6369(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3c64f6(void);
int64_t function_3c6514(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c652f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c655a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_3c6569(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c65e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c661b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c6626(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c66cd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3c66ff(void);
int64_t function_3c6765(void);
int64_t function_3c696a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3c6a79(int64_t a1);
int64_t function_3c6ab4(int64_t a1, int64_t a2);
int64_t function_3c9a9a();
int64_t function_44d525(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_44d576(void);
int64_t function_44d582(void);
int64_t function_44d596(void);
int64_t function_44d5aa(void);
int64_t function_44d5cb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_44d725(void);
int64_t function_44d72c(void);
int64_t function_44d75a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44d764(int64_t a1);
int64_t function_44d7ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44d7da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44d87c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44d922(int64_t a1);
int64_t function_44d95b(void);
int64_t function_44d963(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44d98c(int64_t a1);
int64_t function_44d99e(void);
int64_t function_44d9e4(int64_t a1);
int64_t function_44d9f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44da00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_44dae2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44dbe6(void);
int64_t function_44dbe7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44dbf4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_44dc47(int64_t a1);
int64_t function_44dc67(void);
int64_t function_44dca6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44dcda(void);
int64_t function_44dd01(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44dd52(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44ddb0(void);
int64_t function_44dece(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44def5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44e014(void);
int64_t function_44e020(void);
int64_t function_44e041(void);
int64_t function_44e05b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44e062(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44e1c1(int64_t a1, int64_t a2);
int64_t function_44e1f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_51ea6952();
int64_t function_5ba7f869();
int64_t function_699a1e86();
int64_t function_cdc60();
int64_t function_ffffffffad4a89a8();
int64_t function_ffffffffc4ff6676();
int64_t unknown_1cb1fe80();
int64_t unknown_2d97a81f();
int64_t unknown_2f36a70e();
int64_t unknown_34e9004f();
int64_t unknown_4409356b();
int64_t unknown_60f99ec4();
int64_t unknown_f08e961();
int64_t unknown_fd9a2f();
int64_t unknown_ffffffff9a7db6d5();
int64_t unknown_ffffffffabf26372();
int64_t unknown_ffffffffad375e7f();
int64_t unknown_ffffffffb1b536fb();
int64_t unknown_ffffffffb6046675();
int64_t unknown_ffffffffc19b6564();
int64_t unknown_ffffffffc8d15e26();
int64_t unknown_ffffffffcb56c852();
int64_t unknown_ffffffffd852a671();
int64_t unknown_ffffffffe8ce9335();
int64_t unknown_ffffffffecf2b123();
int64_t unknown_ffffffffeea7ee1b();

// Address range: 0x3490d8 - 0x3490d9
int64_t function_3490d8(void) {
    // 0x3490d8
    int64_t result; // 0x3490d8
    return result;
}

// Address range: 0x3491c5 - 0x349210
int64_t function_3491c5(void) {
    // 0x3491c5
    int64_t v1; // 0x3491c5
    bool v2; // 0x3491c5
    return (v2 ? 43 : 44) | v1 & -256;
}

// Address range: 0x3492c3 - 0x3492ef
int64_t function_3492c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3492c3
    int64_t v1; // 0x3492c3
    uint32_t v2 = -82 * *(int32_t *)(a2 - 89 + v1); // 0x3492c3
    return a4 & 0xff00 & (int64_t)v2 | (int64_t)(v2 & -0xff02);
}

// Address range: 0x3492ef - 0x3492f0
int64_t function_3492ef(void) {
    // 0x3492ef
    int64_t result; // 0x3492ef
    return result;
}

// Address range: 0x349313 - 0x349323
int64_t function_349313(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 - 0x2cd16e61); // 0x349313
    int64_t v2; // 0x349313
    char v3 = *v1 + (char)v2; // 0x349313
    *v1 = v3;
    if (a4 != 1 && v3 != 0) {
        function_3492ef();
    }
    // 0x34931b
    return unknown_ffffffffecf2b123();
}

// Address range: 0x3493c5 - 0x3493c6
int64_t function_3493c5(void) {
    // 0x3493c5
    int64_t result; // 0x3493c5
    return result;
}

// Address range: 0x349460 - 0x349465
int64_t function_349460(void) {
    // 0x349460
    return function_699a1e86();
}

// Address range: 0x349478 - 0x34947b
int64_t function_349478(int64_t a1) {
    // 0x349478
    int64_t v1; // 0x349478
    int64_t v2 = v1;
    return (v2 + 136) % 256 | v2 & -256;
}

// Address range: 0x3496d8 - 0x3496f1
int64_t function_3496d8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3496d8
    int64_t result; // 0x3496d8
    bool v1; // 0x3496d8
    if (v1) {
        int64_t v2 = result & 0xffffffff ^ 0xaf004564; // 0x3496de
        int32_t * v3 = (int32_t *)(v2 - 0x65908f12); // 0x3496e3
        *v3 = (int32_t)v2;
        char v4 = *(char *)-0x70bae210; // 0x3496e9
        *(char *)-0x70bae210 = v4 + (char)((uint64_t)result / 256);
        return (int64_t)*v3;
    }
    // 0x3496da
    return result;
}

// Address range: 0x349718 - 0x349719
int64_t function_349718(void) {
    // 0x349718
    int64_t result; // 0x349718
    return result;
}

// Address range: 0x34974c - 0x349753
int64_t function_34974c(void) {
    // 0x34974c
    return function_349718();
}

// Address range: 0x349771 - 0x349772
int64_t function_349771(int64_t a1) {
    // 0x349771
    int64_t result; // 0x349771
    return result;
}

// Address range: 0x349783 - 0x349784
int64_t function_349783(void) {
    // 0x349783
    int64_t result; // 0x349783
    return result;
}

// Address range: 0x3497a8 - 0x3497bd
int64_t function_3497a8(int64_t a1, int64_t a2) {
    // 0x3497a8
    *(int32_t *)a1 = (int32_t)a2;
    int64_t v1; // 0x3497a8
    int64_t v2; // 0x3497a8
    if ((*(int32_t *)&v1 & (int32_t)v2) != 0) {
        function_349783();
    }
    // 0x3497b6
    __asm_pmulhw(v2, v2);
    return v2 & 0xffffffff;
}

// Address range: 0x3497ce - 0x3497d2
int64_t function_3497ce(void) {
    // 0x3497ce
    int64_t result; // 0x3497ce
    return result;
}

// Address range: 0x349819 - 0x349822
int64_t function_349819(int64_t a1, int64_t a2, int64_t a3) {
    // 0x349819
    return unknown_2d97a81f(a1, a2, a3);
}

// Address range: 0x349840 - 0x349842
int64_t function_349840(void) {
    // 0x349840
    int64_t v1; // 0x349840
    return function_3498be(v1, v1, v1, v1);
}

// Address range: 0x34987b - 0x34987d
int64_t function_34987b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34987b
    int64_t v1; // 0x34987b
    return v1 & 0xffffffff;
}

// Address range: 0x349889 - 0x349894
int64_t function_349889(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 97); // 0x349889
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x349889
    return result;
}

// Address range: 0x3498a5 - 0x3498a8
int64_t function_3498a5(void) {
    // 0x3498a5
    int64_t result; // 0x3498a5
    return result;
}

// Address range: 0x3498be - 0x3498ce
int64_t function_3498be(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 & -256 | 128); // 0x3498c6
    *v1 = *v1 + (char)a4;
    char v2 = *(char *)0x7f97ccf; // 0x3498c8
    int64_t result; // 0x3498be
    *(char *)0x7f97ccf = v2 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x3c5b6a - 0x3c5b85
int64_t function_3c5b6a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 10); // 0x3c5b6a
    int64_t v2; // 0x3c5b6a
    bool v3; // 0x3c5b6a
    char v4 = *v1 + (char)(v2 / 256) + (char)v3; // 0x3c5b6a
    *v1 = v4;
    __asm_out((int16_t)a3, (int32_t)v2);
    int64_t result; // 0x3c5b6a
    if (v4 < 0) {
        result = function_3c5b32();
    }
    // 0x3c5b70
    *(char *)-0x10fb01cf = *(char *)-0x10fb01cf | (char)a1;
    char * v5 = (char *)(4 * result + v2); // 0x3c5b7a
    *v5 = *v5 + (char)(a3 / 256);
    int32_t * v6 = (int32_t *)(a4 + 25); // 0x3c5b82
    *v6 = *v6 + (int32_t)a3;
    return result;
}

// Address range: 0x3c5b87 - 0x3c5b97
int64_t function_3c5b87(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c5b87
    int64_t v1; // 0x3c5b87
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 48 + 4 * v2); // 0x3c5b8c
    *v3 = *v3 + (int32_t)v1;
    return function_1795bba();
}

// Address range: 0x3c5c51 - 0x3c5ca1
int64_t function_3c5c51(void) {
    // 0x3c5c51
    int64_t v1; // 0x3c5c51
    return v1 + 0xb13a99fb & 0xffffff00 | (int64_t)__asm_in(-84);
}

// Address range: 0x3c5cbf - 0x3c5cc4
int64_t function_3c5cbf(void) {
    // 0x3c5cbf
    int64_t result; // 0x3c5cbf
    return result;
}

// Address range: 0x3c5cd4 - 0x3c5cd5
int64_t function_3c5cd4(void) {
    // 0x3c5cd4
    int64_t result; // 0x3c5cd4
    return result;
}

// Address range: 0x3c5cdf - 0x3c5ce3
int64_t function_3c5cdf(void) {
    // 0x3c5cdf
    int64_t v1; // 0x3c5cdf
    return function_3c5d1d(v1, v1, v1, v1, (int64_t)&g3);
}

// Address range: 0x3c5cf2 - 0x3c5d1d
int64_t function_3c5cf2(void) {
    // 0x3c5cf2
    int64_t v1; // 0x3c5cf2
    *(int32_t *)(v1 - 70) = -0x2911236d;
    int64_t v2; // 0x3c5cf2
    if ((int32_t)v1 != -0x4cb41ff) {
        v2 = function_3c5cd4();
    }
    // 0x3c5d0f
    return v2 & -256 | (int64_t)*(char *)0x3d0000680ecc3a12;
}

// Address range: 0x3c5d1d - 0x3c5d2e
int64_t function_3c5d1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)a1; // 0x3c5d1d
    int64_t v2; // 0x3c5d1d
    *v1 = (int32_t)v2 + (int32_t)a4;
    int32_t * v3 = (int32_t *)(2 * v2 + a1); // 0x3c5d20
    *v3 = *v3 & (int32_t)a5;
    *v1 = __asm_insd((int16_t)a3);
    int64_t v4; // 0x3c5d1d
    return (int64_t)(*(int32_t *)&v4 + 0x3f36dca7);
}

// Address range: 0x3c5f6a - 0x3c5f74
int64_t function_3c5f6a(void) {
    // 0x3c5f6a
    return unknown_ffffffffb6046675();
}

// Address range: 0x3c5f8d - 0x3c5f8e
int64_t function_3c5f8d(void) {
    // 0x3c5f8d
    int64_t result; // 0x3c5f8d
    return result;
}

// Address range: 0x3c5fb9 - 0x3c5fba
int64_t function_3c5fb9(void) {
    // 0x3c5fb9
    int64_t result; // 0x3c5fb9
    return result;
}

// Address range: 0x3c5fbc - 0x3c5fbd
int64_t function_3c5fbc(void) {
    // 0x3c5fbc
    int64_t result; // 0x3c5fbc
    return result;
}

// Address range: 0x3c5fc0 - 0x3c5fe6
int64_t function_3c5fc0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = function_3c5f8d(); // 0x3c5fc2
    int64_t v2; // 0x3c5fc0
    char v3 = *(char *)((v2 & -0xff01 | (int64_t)&g2) - 0x4c077900); // 0x3c5fcc
    char * v4 = (char *)((256 * (int64_t)(v3 & (char)(a3 / 256)) | a3 & -0xff01) + 61); // 0x3c5fd2
    *v4 = *v4 + (char)v1;
    int32_t * v5 = (int32_t *)(a1 + 61 + 8 * v1); // 0x3c5fd9
    *v5 = *v5 + (int32_t)v1;
    int64_t result = v1 + 2 * v2 & 0xffffffff; // 0x3c5fdf
    __asm_rcl(*(int32_t *)result);
    return result;
}

// Address range: 0x3c5fe6 - 0x3c601d
int64_t function_3c5fe6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c5fe6
    int64_t v1; // 0x3c5fe6
    char * v2 = (char *)(v1 + 4 * v1); // 0x3c5fe6
    *v2 = *v2 | (char)v1;
    int32_t v3 = *(int32_t *)-0x9c56908; // 0x3c5ff1
    int32_t v4 = a1; // 0x3c5ff1
    int32_t v5 = v3 + v4; // 0x3c5ff1
    *(int32_t *)-0x9c56908 = v5;
    if (((v5 ^ v3) & (v5 ^ v4)) < 0) {
        function_3c5fb9();
    }
    int32_t * v6 = (int32_t *)(a3 + 62); // 0x3c6000
    *v6 = *v6 + (int32_t)a3;
    int64_t v7; // 0x3c5fe6
    int32_t v8 = *(int32_t *)&v7; // 0x3c6004
    int32_t v9 = v8 + 1; // 0x3c6004
    *(int32_t *)v7 = v9;
    if (v9 < 0 != (v9 & (v8 ^ -0x80000000)) < 0) {
        function_3c5fbc();
    }
    // 0x3c6008
    unknown_2f36a70e();
    return unknown_ffffffffeea7ee1b();
}

// Address range: 0x3c601d - 0x3c61ef
int64_t function_3c601d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    // 0x3c601d
    int64_t v1; // 0x3c601d
    int64_t v2 = v1;
    int64_t v3 = a7;
    char * v4 = (char *)(a4 - 49); // 0x3c601d
    *v4 = *v4 + (char)(v1 / 256);
    unknown_ffffffffc8d15e26();
    __asm_sti();
    int64_t v5 = unknown_fd9a2f(); // 0x3c6029
    int64_t v6 = a3 & -256 | (int64_t)(*(char *)(v5 + 0x2fca026) + (char)a3); // 0x3c602e
    int32_t * v7 = (int32_t *)(v1 - 24); // 0x3c6034
    int32_t v8 = v6; // 0x3c6034
    *v7 = *v7 | v8;
    int32_t * v9 = (int32_t *)(v5 + 0x460cc80a); // 0x3c6037
    *v9 = *v9 + (int32_t)v1;
    int64_t v10 = unknown_ffffffffcb56c852(0x539afed4); // 0x3c604c
    int32_t * v11 = (int32_t *)(v10 + 256 * a6 & 0x3a00 | v10 & 0xe84c003a); // 0x3c6058
    uint32_t v12 = *v11; // 0x3c6058
    uint32_t v13 = v12 + v8; // 0x3c6058
    *v11 = v13;
    char v14 = *(char *)(v6 - 0x1733e4df); // 0x3c605a
    int64_t v15; // 0x3c601d
    int32_t v16 = *(int32_t *)&v15; // 0x3c6061
    *(int32_t *)a2 = v16 + (int32_t)(int64_t)&v3;
    int64_t v17; // bp-8, 0x3c601d
    int64_t v18 = (int64_t)&v17 & a2;
    int64_t v19 = unknown_ffffffffd852a671(); // 0x3c606b
    char v20 = *(char *)v19; // 0x3c6070
    int64_t v21 = 256 * (int64_t)(v20 | (char)(a6 / 256)) | a6 & -0xff01; // 0x3c6070
    int64_t v22 = v19 | 108; // 0x3c6072
    char * v23 = (char *)(v21 + 84); // 0x3c6075
    *v23 = *v23 - 24;
    int32_t * v24 = (int32_t *)(v22 + 0x70a10c05); // 0x3c6079
    *v24 = *v24 + 0x539afed4;
    int32_t * v25 = (int32_t *)(v6 + 50); // 0x3c6084
    int32_t v26 = *v25; // 0x3c6084
    *v25 = v26 + (int32_t)(v2 & 0xffffff00 | (int64_t)((char)v2 - v14 + (char)(v13 < v12)));
    __asm_outsd((int16_t)v6, *(int32_t *)(v18 & 0xfffffff8));
    int64_t v27 = v22 + 0xe86eafdc & 0xffffff00 | (int64_t)*(char *)-0x4aaa838ffe17c562; // 0x3c6088
    *(int32_t *)0x539afed4 = (int32_t)v27;
    bool v28; // 0x3c601d
    int64_t v29 = v28 ? 0x539afed0 : 0x539afed8; // 0x3c6092
    int32_t * v30 = (int32_t *)(v27 - 24); // 0x3c6095
    *v30 = *v30 | -0x1175a1ff;
    char * v31 = (char *)v21; // 0x3c609c
    *v31 = *v31 & (char)a6;
    char * v32 = (char *)v27; // 0x3c609f
    *v32 = *v32 - 100;
    int32_t v33; // bp+6047, 0x3c601d
    v33 = (int64_t)&v33;
    return function_cdc60(v29, 0x100000000 * v18 >> 32, v6, 0x100000000 * v21 >> 32, a5, v1, 0x100000000 * v27 >> 32);
}

// Address range: 0x3c61ef - 0x3c6369
int64_t function_3c61ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x620980f2; // bp-32, 0x3c622a
    int64_t v2 = (int64_t)&v1; // 0x3c6261
    int64_t v3 = v2 - 8; // 0x3c6290
    int64_t * v4 = (int64_t *)v3; // 0x3c62a4
    int64_t v5 = *(int64_t *)(v2 + 24); // 0x3c62a8
    int64_t v6 = v2 - 16; // 0x3c62a8
    int64_t * v7 = (int64_t *)v6; // 0x3c62a8
    *v7 = v5;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x3c62ac
    *v8 = v5;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x3c62c2
    *v9 = v6;
    int64_t * v10 = (int64_t *)(v2 - 40); // 0x3c62d5
    *v8 = 0x3d2fbe60;
    *v10 = a4;
    *v9 = v5;
    *v4 = *v8;
    *v8 = 0x56dc1877;
    *v10 = v1;
    *v9 = v1;
    *(int64_t *)(v2 + 8) = *v8;
    int64_t v11 = *v7; // 0x3c6321
    *v8 = v11;
    *v9 = v11;
    *v7 = *v4;
    *v8 = v11;
    *v9 = v3;
    *v10 = *v8;
    return function_cdc60(a1, a2, a3, *v10, v1, 0x620980f2, 0x3c5ee4);
}

// Address range: 0x3c6369 - 0x3c64f6
int64_t function_3c6369(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3c6369
    return function_cdc60(a1, a2, a3, a4, a5, a6, 0x3c57f8);
}

// Address range: 0x3c64f6 - 0x3c64fb
int64_t function_3c64f6(void) {
    // 0x3c64f6
    return function_3c9a9a();
}

// Address range: 0x3c6514 - 0x3c652f
int64_t function_3c6514(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c6514
    bool v1; // 0x3c6514
    int64_t v2 = v1 ? -4 : 4; // 0x3c6515
    int64_t v3 = __asm_fnstenv(v2 + a1, v2 + a2, a3, a4); // 0x3c6518
    *(int224_t *)(a3 - 0x21ca4af9 + 4 * a4) = (int224_t)v3;
    int64_t v4; // 0x3c6514
    int32_t * v5 = (int32_t *)(8 * a3 - 0x21cd8e4 + (int64_t)&v4); // 0x3c6522
    *v5 = *v5 + (int32_t)a3;
    return v3 ^ 0xe800;
}

// Address range: 0x3c652f - 0x3c655a
int64_t function_3c652f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c652f
    int64_t v1; // 0x3c652f
    int32_t * v2 = (int32_t *)(v1 - 0x1827205a); // 0x3c6531
    *v2 = *v2 + (int32_t)v1;
    *(char *)0x62c624d401e87bc0 = (char)unknown_ffffffffc19b6564();
    unknown_34e9004f();
    int64_t result = unknown_ffffffffe8ce9335(); // 0x3c654a
    int32_t * v3 = (int32_t *)(result - 116); // 0x3c654f
    *v3 = *v3 + (int32_t)v1;
    return result;
}

// Address range: 0x3c655a - 0x3c6569
int64_t function_3c655a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x3c655a
    __asm_iretd();
    int64_t v1 = unknown_f08e961(); // 0x3c655b
    char v2 = __asm_in_134((int16_t)a3); // 0x3c6565
    int64_t v3; // 0x3c655a
    *(char *)a3 = (char)v3 + (char)(a5 / 256);
    return v1 & -0x10000 | (int64_t)v2 | (v1 & 0xff00) + v1 & 0xff00;
}

// Address range: 0x3c6569 - 0x3c65de
int64_t function_3c6569(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)(a2 - 55); // 0x3c6569
    int64_t v2 = unknown_ffffffffabf26372(); // 0x3c656c
    int64_t v3 = v2 & 0xffffffff; // 0x3c6572
    int64_t v4; // 0x3c6569
    if ((char)v4 == (char)v2) {
        uint64_t v5 = (v4 & 0xffffffff) * (int64_t)*(int32_t *)(v4 + 61); // 0x3c65ad
        uint64_t v6 = v5 / 0x100000000; // 0x3c65ad
        int32_t * v7 = (int32_t *)((a4 & -256 | (int64_t)(v1 + (char)a4)) - 0x1746d501); // 0x3c65b2
        *v7 = *v7 - 0x4e3aa5ff + (int32_t)(v5 > 0xffffffff);
        int32_t v8 = __asm_in_135((int16_t)v6); // 0x3c65c8
        char * v9 = (char *)(v6 + 0x6c873a2a); // 0x3c65d6
        *v9 = *v9 | -24;
        unsigned char v10 = *(char *)((v3 & -256 | 232) + (int64_t)(v8 & 219 | 36)); // 0x3c65dd
        return (int64_t)v10 | (int64_t)(v8 & -256);
    }
    // 0x3c6576
    bool v11; // 0x3c6569
    int64_t v12 = v11 ? -1 : 1; // 0x3c6571
    int64_t v13 = v12 + a1; // 0x3c6571
    *(char *)v13 = (char)a2;
    unsigned char v14 = *(char *)&v3; // 0x3c6577
    unknown_ffffffffad375e7f(v13 + v12, v12 + a2);
    unsigned char v15 = (char)v3; // 0x3c6582
    unsigned char v16 = v15 + (char)a3; // 0x3c6582
    unsigned char v17 = v16 + (char)(v14 < (char)v4); // 0x3c6582
    bool v18 = v14 < (char)v4 ? v17 <= v15 : v16 < v15; // 0x3c6582
    int64_t v19 = v3 & 0xffffff00 | (int64_t)v17; // 0x3c6582
    uint32_t v20 = *(int32_t *)v19 - 0x5801e8d3 + (int32_t)v19 + (int32_t)v18; // 0x3c6588
    int64_t result = v20; // 0x3c6588
    int32_t * v21 = (int32_t *)(result - 74); // 0x3c658d
    *v21 = v20 + *v21;
    return result;
}

// Address range: 0x3c65e0 - 0x3c65ec
int64_t function_3c65e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c65e0
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1; // 0x3c65e0
    bool v2; // 0x3c65e0
    return v1 - (v2 ? 0x9b8301e9 : 0x9b8301e8) & 0xffffffff;
}

// Address range: 0x3c661b - 0x3c6623
int64_t function_3c661b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c661b
    int64_t result; // 0x3c661b
    return result;
}

// Address range: 0x3c6626 - 0x3c666f
int64_t function_3c6626(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 + 0x3d03cbe0); // 0x3c6626
    int64_t result; // 0x3c6626
    char v2 = result; // 0x3c6626
    *v1 = *v1 + v2;
    int32_t * v3 = (int32_t *)(a2 - 0x7ef9ffd4); // 0x3c662c
    int64_t v4; // 0x3c6626
    *v3 = *v3 + (int32_t)v4;
    char * v5 = (char *)(v4 - 11); // 0x3c6635
    char v6 = *v5 ^ v2; // 0x3c6635
    *v5 = v6;
    __asm_int(58);
    *(char *)result = (char)a3;
    if (v6 < 0) {
        // 0x3c6664
        return result;
    }
    // 0x3c663e
    bool v7; // 0x3c6626
    int64_t v8 = v7 ? -1 : 1; // 0x3c6634
    int64_t v9 = v8 + a2; // 0x3c6634
    float80_t v10; // 0x3c6626
    *(int16_t *)(v9 + 2 * a4) = (int16_t)v10;
    int64_t result2 = v4 & 0xffffffff; // 0x3c6643
    char * v11 = (char *)(a1 + 61 + v8); // 0x3c6644
    char v12 = v4; // 0x3c6644
    *v11 = *v11 | v12;
    int32_t * v13 = (int32_t *)(a4 + 171); // 0x3c6647
    *v13 = *v13 + (int32_t)v9;
    if (a4 != 1) {
        // 0x3c666a
        *(int32_t *)result2 = *(int32_t *)&v4 + (int32_t)v4;
        return result2;
    }
    // 0x3c664f
    *(char *)result2 = *(char *)&v4 + v12;
    __asm_out_136(-68, v12);
    return function_ffffffffc4ff6676();
}

// Address range: 0x3c66cd - 0x3c66f4
int64_t function_3c66cd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3c66cd
    int64_t v1; // 0x3c66cd
    uint32_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0x3c66de
    char v3 = *(char *)-0x5f1caa17; // 0x3c66e0
    *(char *)-0x5f1caa17 = v3 + (char)((uint64_t)v1 / 256);
    *(int32_t *)0xc4fb3a3b = *(int32_t *)0xc4fb3a3b | (int32_t)a2;
    return 256 * ((int64_t)(v2 / 256) - a4 / 256) & 0xff00 | (int64_t)(v2 & -0xff01);
}

// Address range: 0x3c66ff - 0x3c6700
int64_t function_3c66ff(void) {
    // 0x3c66ff
    int64_t result; // 0x3c66ff
    return result;
}

// Address range: 0x3c6765 - 0x3c676a
int64_t function_3c6765(void) {
    // 0x3c6765
    return function_51ea6952();
}

// Address range: 0x3c696a - 0x3c6a09
int64_t function_3c696a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a1;
    int32_t v2 = __asm_insd((int16_t)a3); // 0x3c696c
    int32_t * v3 = (int32_t *)a1; // 0x3c696c
    *v3 = v2;
    uint32_t v4 = *(int32_t *)&v1; // 0x3c6972
    int32_t v5 = a4; // 0x3c6972
    uint32_t v6 = v4 + v5; // 0x3c6972
    *v3 = v6;
    int64_t v7; // 0x3c696a
    if (v6 >= v4 && v6 != 0) {
        // 0x3c69f3
        unknown_ffffffffb1b536fb();
        int32_t * v8 = (int32_t *)(v1 + 116); // 0x3c69ff
        *v8 = *v8 + (int32_t)a2;
        *(char *)a2 = (char)a4;
        return v7 & 0xffffffff;
    }
    // 0x3c6976
    *(int32_t *)(2 * a3 - 22 + v7) = v5;
    uint64_t v9 = unknown_1cb1fe80(); // 0x3c697a
    int64_t v10 = (v9 + (v6 < v4 ? 212 : 211)) % 256 | v9 & -256; // 0x3c697f
    char * v11 = (char *)v10; // 0x3c6981
    *v11 = *v11 + (char)v7;
    int32_t * v12 = (int32_t *)v10; // 0x3c6988
    *v12 = *v12 + (int32_t)v10;
    char v13 = *(char *)(v7 + 58); // 0x3c698a
    int64_t result = 256 * (int64_t)(v13 + (char)(v9 / 256)) | v10 & -0xff01; // 0x3c698a
    unsigned char v14 = (char)a4 % 32; // 0x3c698d
    if (v14 != 0) {
        char * v15 = (char *)(result - 0x170fb295); // 0x3c698d
        *v15 = *v15 << v14;
    }
    int32_t * v16 = (int32_t *)(result - 0x5f95e8e3); // 0x3c6993
    int32_t v17 = v7; // 0x3c6993
    *v16 = *v16 + v17;
    char * v18 = (char *)(result - 24); // 0x3c6999
    *v18 = *v18 + (char)(a4 / 256);
    int32_t * v19 = (int32_t *)(a4 + 0x3c0a88f1); // 0x3c699c
    *v19 = *v19 + v17;
    return result;
}

// Address range: 0x3c6a79 - 0x3c6a7a
int64_t function_3c6a79(int64_t a1) {
    // 0x3c6a79
    int64_t result; // 0x3c6a79
    return result;
}

// Address range: 0x3c6ab4 - 0x3c6b6a
int64_t function_3c6ab4(int64_t a1, int64_t a2) {
    // 0x3c6ab4
    int64_t v1; // 0x3c6ab4
    __asm_out_133(66, (int32_t)v1);
    *(char *)a1 = (char)v1;
    bool v2; // 0x3c6ab4
    int64_t v3 = v2 ? -1 : 1; // 0x3c6abd
    int64_t v4 = v3 + a1; // 0x3c6abd
    uint64_t v5 = unknown_60f99ec4(v4) + 0xebaeaa64; // 0x3c6ac3
    char * v6 = (char *)((2 * v5 & 0x1fffffffe) - 0x2fb16d2a); // 0x3c6ac8
    char v7 = *v6; // 0x3c6ac8
    char v8 = v5 / 256; // 0x3c6ac8
    char v9 = v7 + v8; // 0x3c6ac8
    *v6 = v9;
    int64_t v10 = unknown_ffffffff9a7db6d5(); // 0x3c6acf
    if (v9 < 0 == ((v9 ^ v7) & (v9 ^ v8)) < 0) {
        // 0x3c6ad6
        return (int64_t)*(int32_t *)0x1e8a485906f7758;
    }
    int32_t * v11 = (int32_t *)(v1 + 6); // 0x3c6afe
    *v11 = *v11 / 2;
    int64_t result = (v10 & 0xffff0000 | (int64_t)__asm_in(-24) | 256) + v1 & 0xffffffff; // 0x3c6b0c
    *(int32_t *)-0x1795afeb = *(int32_t *)-0x1795afeb + (int32_t)v4;
    int64_t v12 = 2 * result; // 0x3c6b14
    int64_t v13; // 0x3c6ab4
    int64_t * v14 = (int64_t *)v13;
    int64_t v15 = *v14; // 0x3c6b1b
    int64_t v16 = v13 + 8; // 0x3c6b1b
    char * v17 = (char *)(v15 - 0x17efacc6); // 0x3c6b1c
    char v18 = *v17; // 0x3c6b1c
    int64_t v19; // 0x3c6ab4
    *v17 = (char)((int32_t)v12 < 0x2800f010) + (char)(v19 / 256) + v18;
    int64_t v20; // 0x3c6ab4
    int32_t v21 = (int32_t)v20 + (int32_t)v15; // 0x3c6b22
    int64_t v22 = v21; // 0x3c6b22
    while (v21 >= 1) {
        // 0x3c6b28
        result = v19 & 0xffffffff;
        int64_t v23; // 0x3c6ab4
        unsigned char v24 = (char)(v23 / 256); // 0x3c6b28
        unsigned char v25 = *(char *)(v1 + 0x13d0080) + v24; // 0x3c6b28
        v23 = 256 * (int64_t)v25;
        v19 = v12 & 0xfffffffe;
        if (v25 < v24 || v25 == 0) {
            // 0x3c6b30
            return result;
        }
        *(int32_t *)-0x1795afeb = *(int32_t *)-0x1795afeb + (int32_t)v22;
        v12 = 2 * result;
        v14 = (int64_t *)v16;
        v15 = *v14;
        v16 += 8;
        v17 = (char *)(v15 - 0x17efacc6);
        v18 = *v17;
        *v17 = (char)((int32_t)v12 < 0x2800f010) + (char)(v19 / 256) + v18;
        v21 = (int32_t)v20 + (int32_t)v15;
        v22 = v21;
    }
    // 0x3c6b35
    *v14 = 0x78643d00;
    int64_t v26 = v3 + v22; // 0x3c6b3c
    int64_t * v27 = (int64_t *)v16; // 0x3c6b44
    *(char *)0x7cd8854c = *(char *)0x7cd8854c + (char)(v20 / 256);
    int64_t v28 = v2 ? -4 : 4; // 0x3c6b4b
    int32_t * v29 = (int32_t *)v26; // 0x3c6b5e
    *v29 = (int32_t)v16 + 0x25df + *v29;
    return unknown_4409356b(v26, v28 + (int64_t)(-0x453b9095 * *(int32_t *)&v20), 0x78643d00);
}

// Address range: 0x44d525 - 0x44d551
int64_t function_44d525(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x44d525
    int64_t v1; // 0x44d525
    int32_t v2 = v1; // 0x44d525
    *(int32_t *)0x3e1d5b9a37d468d4 = v2;
    __asm_out((int16_t)a3, v2);
    uint64_t v3 = (v1 & 0xffffffff) * (int64_t)*(int32_t *)(a1 + 44); // 0x44d532
    uint64_t v4 = v3 / 0x100000000; // 0x44d532
    int64_t * v5 = (int64_t *)(v4 - 12); // 0x44d535
    int64_t v6 = *v5; // 0x44d535
    *v5 = a2;
    char v7 = *(char *)(a1 + 0x54f5c771); // 0x44d539
    int64_t v8; // 0x44d525
    char v9 = *(char *)&v8; // 0x44d545
    int64_t v10 = 256 * (int64_t)((char)(a4 / 256) - v9) | a4 & -0xff01; // 0x44d545
    int64_t result = __asm_fnstenv(a1, v6, v4 & 0xffffff00 | (int64_t)(v7 + (char)v4 + (char)(v3 > 0xffffffff)), v10); // 0x44d54c
    *(int224_t *)(v10 + 98) = (int224_t)result;
    return result;
}

// Address range: 0x44d576 - 0x44d577
int64_t function_44d576(void) {
    // 0x44d576
    int64_t result; // 0x44d576
    return result;
}

// Address range: 0x44d582 - 0x44d587
int64_t function_44d582(void) {
    // 0x44d582
    return function_ffffffffad4a89a8();
}

// Address range: 0x44d596 - 0x44d597
int64_t function_44d596(void) {
    // 0x44d596
    int64_t result; // 0x44d596
    return result;
}

// Address range: 0x44d5aa - 0x44d5ab
int64_t function_44d5aa(void) {
    // 0x44d5aa
    int64_t result; // 0x44d5aa
    return result;
}

// Address range: 0x44d5cb - 0x44d5f7
int64_t function_44d5cb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x44d5cb
    int64_t v1; // 0x44d5cb
    __asm_outsd((int16_t)a3, (int32_t)v1);
    *(int64_t *)a1 = a2;
    int64_t v2; // 0x44d5cb
    *(char *)v2 = *(char *)&v2 ^ 80;
    bool v3; // 0x44d5cb
    int32_t * v4 = (int32_t *)(a2 + 0x4049e133 + (v3 ? -8 : 8)); // 0x44d5dd
    *v4 = *v4 ^ (int32_t)v1;
    int64_t v5 = 0; // 0x44d5e9
    if ((v1 & -0x44b6a7bb) != 4) {
        v5 = function_44d576();
    }
    int64_t * v6 = (int64_t *)(a3 + 0x7e7e3404 + v1); // 0x44d5ec
    int64_t v7 = a4 % 256 & v1 | a4 & -256 | *v6; // 0x44d5ec
    *v6 = v7;
    int64_t result = v5; // 0x44d5f4
    if (v7 != 0) {
        result = function_44d5aa();
    }
    // 0x44d5f6
    return result;
}

// Address range: 0x44d725 - 0x44d728
int64_t function_44d725(void) {
    // 0x44d725
    int64_t v1; // 0x44d725
    __asm_out_133(79, (int32_t)v1);
    return v1 & 0xffffffff;
}

// Address range: 0x44d72c - 0x44d72f
int64_t function_44d72c(void) {
    // 0x44d72c
    int64_t result; // 0x44d72c
    return result;
}

// Address range: 0x44d75a - 0x44d764
int64_t function_44d75a(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 68); // 0x44d75c
    int64_t result; // 0x44d75a
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x44d764 - 0x44d765
int64_t function_44d764(int64_t a1) {
    // 0x44d764
    int64_t result; // 0x44d764
    return result;
}

// Address range: 0x44d7ad - 0x44d7b9
int64_t function_44d7ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 - 0x7993f9cf); // 0x44d7af
    *v1 = *v1 + (char)a3;
    int64_t result; // 0x44d7ad
    return result;
}

// Address range: 0x44d7da - 0x44d7e0
int64_t function_44d7da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x44d7da
    int64_t result; // 0x44d7da
    return result;
}

// Address range: 0x44d87c - 0x44d8ff
int64_t function_44d87c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44d87c
    int64_t result; // 0x44d87c
    uint64_t v1 = result;
    bool v2; // 0x44d87c
    if (v2 || v2) {
        // 0x44d8e0
        return result;
    }
    char * v3 = (char *)(v1 - 0x75d8a271); // 0x44d8d8
    *v3 = *v3 + (char)(v1 / 256);
    return result & -256 | (int64_t)*(char *)a2;
}

// Address range: 0x44d922 - 0x44d925
int64_t function_44d922(int64_t a1) {
    // 0x44d922
    int64_t result; // 0x44d922
    return result;
}

// Address range: 0x44d95b - 0x44d95f
int64_t function_44d95b(void) {
    // 0x44d95b
    int64_t result; // 0x44d95b
    return result;
}

// Address range: 0x44d963 - 0x44d96d
int64_t function_44d963(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44d963
    int64_t v1; // 0x44d963
    return (int64_t)*(int32_t *)(a1 - 92) < a1 ? v1 : a2;
}

// Address range: 0x44d98c - 0x44d98f
int64_t function_44d98c(int64_t a1) {
    // 0x44d98c
    __asm_int((char)a1);
    int64_t result; // 0x44d98c
    return result;
}

// Address range: 0x44d99e - 0x44d9a0
int64_t function_44d99e(void) {
    // 0x44d99e
    int64_t v1; // 0x44d99e
    return function_44da00(v1, v1, v1, v1, v1, (int64_t)&g3, (int64_t)&g3);
}

// Address range: 0x44d9e4 - 0x44d9e7
int64_t function_44d9e4(int64_t a1) {
    // 0x44d9e4
    int64_t result; // 0x44d9e4
    return result;
}

// Address range: 0x44d9f8 - 0x44d9ff
int64_t function_44d9f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44d9f8
    int64_t result; // 0x44d9f8
    return result;
}

// Address range: 0x44da00 - 0x44dae1
int64_t function_44da00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x44da00
    int64_t result; // 0x44da00
    uint64_t v1 = result;
    int64_t v2 = a7;
    bool v3; // 0x44da00
    if (!v3) {
        // 0x44da17
        return result;
    }
    unsigned char v4 = (char)(v1 / 256); // 0x44da0a
    unsigned char v5 = *(char *)(result - 89); // 0x44da0a
    int64_t v6 = 256 * (int64_t)(v4 - v5) | v1 & -0xff01; // 0x44da0a
    unsigned char v7 = (char)result; // 0x44da0e
    char v8 = v5 > v4; // 0x44da0e
    char v9 = *(char *)(a3 + 85) + v8; // 0x44da0e
    if (v9 > v7) {
        // 0x44da13
        return v6 & 0xffffffff;
    }
    char v10 = v7 - v9; // 0x44da0e
    unsigned char v11 = v10 - (v5 > v4 ? v9 != -1 | v10 - v8 > v7 : v9 > v7 ? -95 : -96); // 0x44da6f
    unsigned char v12 = llvm_ctpop_i8(v11); // 0x44da6f
    int64_t result2 = result & -256 | (int64_t)v11; // 0x44da6f
    if (v12 % 2 == 0) {
        // 0x44da7b
        *(char *)a1 = (char)a2;
        return result2 ^ 52;
    }
    unsigned char v13 = (char)a3;
    unsigned char v14 = (char)(result / 256) + v13; // 0x44da74
    *(char *)a3 = v14;
    int32_t * v15 = (int32_t *)(v6 + 3); // 0x44da77
    int32_t v16 = *v15; // 0x44da77
    *v15 = v16 - ((int32_t)(int64_t)&v2 | (int32_t)(v14 < v13));
    return result2;
}

// Address range: 0x44dae2 - 0x44dbcc
int64_t function_44dae2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x44dae2
    int64_t v1; // 0x44dae2
    int64_t v2 = v1;
    bool v3; // 0x44dae2
    if (a4 == 1 || v3) {
        // 0x44dae4
        return (v2 + 55 + (int64_t)v3) % 256 | v2 & -256;
    }
    uint32_t v4 = (int32_t)(a2 ^ a1); // 0x44db2b
    int64_t v5 = __asm_iretd(); // 0x44db2d
    int64_t v6 = (v5 + 161) % 256 | v5 & -256; // 0x44db2f
    uint32_t v7 = *(int32_t *)(v1 + 6) + (int32_t)((char)v5 > 94); // 0x44db32
    bool v8 = (char)v5 > 94 ? v7 != -1 | (int32_t)((char)v5 > 94) + v4 - v7 > v4 : v7 > v4; // 0x44db32
    *(int32_t *)0x1cbd15926e922a8e = (int32_t)v6;
    return v6 - (v8 ? 0xd7dfa75d : 0xd7dfa75c) & 0xffffffff;
}

// Address range: 0x44dbe6 - 0x44dbe7
int64_t function_44dbe6(void) {
    // 0x44dbe6
    int64_t result; // 0x44dbe6
    return result;
}

// Address range: 0x44dbe7 - 0x44dbf0
int64_t function_44dbe7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x44dbe7
    *(char *)a1 = __asm_insb(v1);
    int64_t v2; // 0x44dbe7
    int64_t result = v2 & -198; // 0x44dbe8
    __asm_out_137(v1, (char)result);
    return result;
}

// Address range: 0x44dbf4 - 0x44dc3f
int64_t function_44dbf4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x44dbf4
    int64_t v1; // 0x44dbf4
    uint64_t v2 = v1;
    char v3 = *(char *)(a4 - 0x11c1ba8e); // 0x44dbf4
    char v4 = v1;
    char v5 = a4 / 256; // 0x44dbfa
    char v6 = v4 + v5; // 0x44dbfa
    *(char *)a2 = v6;
    int64_t result = a2 & 0xffffffff; // 0x44dbfd
    if (v6 >= 0) {
        if (((v6 ^ v4) & (v6 ^ v5)) < 0) {
            // 0x44dc3d
            return result;
        }
        // 0x44dc1c
        return function_5ba7f869();
    }
    // 0x44dc01
    float80_t v7; // 0x44dbf4
    *(int16_t *)((256 * (int64_t)(v3 & (char)(v2 / 256)) | v2 & 0xffff00ff) - 44) = (int16_t)v7;
    int64_t v8 = result - 0x4a4c7fc7; // 0x44dc10
    __writegsbyte(v8, __readgsbyte(v8) & (char)((a4 + 0xffff) / 256));
    return result;
}

// Address range: 0x44dc47 - 0x44dc4c
int64_t function_44dc47(int64_t a1) {
    // 0x44dc47
    int64_t result; // 0x44dc47
    return result;
}

// Address range: 0x44dc67 - 0x44dc6e
int64_t function_44dc67(void) {
    // 0x44dc67
    int64_t result; // 0x44dc67
    return result;
}

// Address range: 0x44dca6 - 0x44dcc8
int64_t function_44dca6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44dca6
    int64_t v1; // 0x44dca6
    uint32_t result = (int32_t)v1 - 0x43456017; // 0x44dca6
    if (llvm_ctpop_i8((char)result) % 2 != 0) {
        // 0x44dd1a
        return result;
    }
    int64_t v2 = __asm_sti(); // 0x44dcb2
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return ((v2 | a3) & (int64_t)(int32_t)((int64_t)(int16_t)&g1 | 0xffff0000)) + 0xfc23e9 & 0xffffffff ^ 0x320bf717;
}

// Address range: 0x44dcda - 0x44dcdc
int64_t function_44dcda(void) {
    // 0x44dcda
    int64_t v1; // 0x44dcda
    return function_44dd52(v1, v1, v1, v1);
}

// Address range: 0x44dd01 - 0x44dd11
int64_t function_44dd01(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44dd01
    int64_t v1; // 0x44dd01
    return 0x10000 * (int32_t)(v1 & (256 * a4 | 255)) >> 16 ^ 211;
}

// Address range: 0x44dd52 - 0x44dd5d
int64_t function_44dd52(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44dd52
    int64_t v1; // 0x44dd52
    unsigned char v2 = *(char *)(v1 % 256 + v1); // 0x44dd52
    int64_t v3 = v1 & -256 | (int64_t)v2; // 0x44dd52
    uint32_t v4 = (int32_t)a3;
    bool v5; // 0x44dd52
    int32_t v6 = v5; // 0x44dd53
    uint32_t v7 = (int32_t)v3 + v6; // 0x44dd53
    int32_t v8 = v4 - v7; // 0x44dd53
    bool v9 = v5 ? v7 != -1 | v8 - v6 > v4 : v7 > v4; // 0x44dd53
    *(int32_t *)a3 = v8;
    __asm_out_137((int16_t)a3, v2);
    int32_t v10 = *(int32_t *)(v1 - 19) + (int32_t)a4 + (int32_t)v9; // 0x44dd56
    int64_t result = v3; // 0x44dd5b
    if (v10 < 0) {
        result = function_44dd01(a1, a2, a3, (int64_t)v10);
    }
    // 0x44dd5d
    return result;
}

// Address range: 0x44ddb0 - 0x44ddb3
int64_t function_44ddb0(void) {
    // 0x44ddb0
    int64_t result; // 0x44ddb0
    return result;
}

// Address range: 0x44dece - 0x44dedb
int64_t function_44dece(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44dece
    int64_t result; // 0x44dece
    __asm_out_137((int16_t)a3, (char)result);
    uint32_t v1 = *(int32_t *)0x37934fd8; // 0x44ded1
    *(int32_t *)0x37934fd8 = v1 / 2 | 0x80000000 * v1;
    return result;
}

// Address range: 0x44def5 - 0x44e00e
int64_t function_44def5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x44def5
    int64_t result; // 0x44def5
    bool v1; // 0x44def5
    if (v1) {
        // 0x44df18
        *(char *)a4 = (char)result + (char)a4;
        return result;
    }
    // 0x44def7
    __asm_out_136(94, (char)result);
    int64_t v2 = __asm_sti(); // 0x44defa
    *(char *)a1 = __asm_insb((int16_t)a3);
    int32_t * v3 = (int32_t *)(v2 + 124); // 0x44df01
    uint32_t v4 = *v3; // 0x44df01
    int32_t v5 = v2;
    uint32_t v6 = v4 + v5; // 0x44df01
    uint32_t v7 = v6 + (int32_t)v1; // 0x44df01
    *v3 = v7;
    int32_t v8 = v5 | 124; // 0x44dfb2
    int32_t v9 = *(int32_t *)0x7001ce33; // 0x44dfb2
    int64_t result2 = v8 - v9; // 0x44dfb2
    if (v8 <= v9) {
        // 0x44dfb7
        return result2;
    }
    bool v10 = v1 ? v7 <= v4 : v6 < v4; // 0x44df01
    *(char *)0x7001cd94 = (char)(a3 - result + (int64_t)v10);
    return result2 | 0x52db246;
}

// Address range: 0x44e014 - 0x44e015
int64_t function_44e014(void) {
    // 0x44e014
    int64_t result; // 0x44e014
    return result;
}

// Address range: 0x44e020 - 0x44e033
int64_t function_44e020(void) {
    // 0x44e020
    bool v1; // 0x44e020
    bool v2 = v1 | v1; // 0x44e025
    int64_t v3; // 0x44e020
    if (v2) {
        v3 = function_44e014();
    }
    int16_t v4 = v3; // 0x44e02a
    int64_t v5; // 0x44e020
    int16_t v6 = (int16_t)v5 % 256; // 0x44e02a
    int64_t result = v3 & -0x10000 | (int64_t)(v4 / v6 % 256) | (int64_t)(256 * (v4 % v6)); // 0x44e02a
    *(char *)(2 * v5 - 31 + result) = (char)!v2;
    return result;
}

// Address range: 0x44e041 - 0x44e042
int64_t function_44e041(void) {
    // 0x44e041
    int64_t result; // 0x44e041
    return result;
}

// Address range: 0x44e05b - 0x44e060
int64_t function_44e05b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44e05b
    int64_t result; // 0x44e05b
    return result;
}

// Address range: 0x44e062 - 0x44e07a
int64_t function_44e062(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44e062
    int64_t result; // 0x44e062
    if (a4 != 0) {
        // 0x44e064
        return result;
    }
    int32_t v1 = a2;
    __asm_outsd((int16_t)a3 & -256 | 130, v1);
    *(int32_t *)a1 = v1;
    bool v2; // 0x44e062
    unsigned char v3 = *(char *)((v2 ? -4 : 4) + a2); // 0x44e076
    return (int64_t)v3 | (int64_t)(0x10000 * (int32_t)result >> 16 & -256);
}

// Address range: 0x44e1c1 - 0x44e1dc
int64_t function_44e1c1(int64_t a1, int64_t a2) {
    // 0x44e1c1
    __asm_in_138(113);
    abort();
    // UNREACHABLE
}

// Address range: 0x44e1f9 - 0x44e20b
int64_t function_44e1f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x44e1f9
    bool v1; // 0x44e1f9
    int64_t v2 = v1 ? -4 : 4; // 0x44e1f9
    __asm_int3(v2 + a1, v2 + a2);
    int64_t v3; // 0x44e1f9
    return v3 & 0xffffffff;
}
