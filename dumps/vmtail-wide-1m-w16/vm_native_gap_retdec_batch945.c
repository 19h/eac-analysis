/*
 * Targeted RetDec C for native executable gap queue batch 945.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x340273-0x340473 rank=- name=- kind=- bytes=- uncovered=-
 *   0x340473-0x340673 rank=- name=- kind=- bytes=- uncovered=-
 *   0x340673-0x340873 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a5939-0x3a5b39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a5b39-0x3a5d39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a5d39-0x3a5f39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a5f39-0x3a6139 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a6139-0x3a6339 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_31b469f1();
int64_t function_340273(void);
int64_t function_340274(int64_t a1, int64_t a2);
int64_t function_34028f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3402bc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_34032b(void);
int64_t function_34033d(void);
int64_t function_34034e(void);
int64_t function_340354(void);
int64_t function_340359(int64_t a1);
int64_t function_340367(void);
int64_t function_340398(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3403a6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3403b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_3404c5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_340509(void);
int64_t function_34051c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_3406bb(void);
int64_t function_3406e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34075e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3407a7(int64_t a1, int64_t a2);
int64_t function_3407fa(void);
int64_t function_3a5939(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a5990(void);
int64_t function_3a5995(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a599c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a59e9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a5a16(int64_t a1);
int64_t function_3a5a2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a5a7a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a5a8b(void);
int64_t function_3a5a8d(int64_t a1);
int64_t function_3a5a93(int64_t a1);
int64_t function_3a5ab9(void);
int64_t function_3a5af9(void);
int64_t function_3a5afb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3a5b4c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3a5bed(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a5c1a(int64_t a1);
int64_t function_3a5c36(int64_t a1);
int64_t function_3a5c8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a5d0a(void);
int64_t function_3a5d43(void);
int64_t function_3a5d9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a5eb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a5ed7(void);
int64_t function_3a5ef3(int64_t a1, int64_t a2);
int64_t function_3a5f05(void);
int64_t function_3a5f09(void);
int64_t function_3a5f10(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a5f56(void);
int64_t function_3a5f7a(void);
int64_t function_3a5f86(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a6017(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3a606b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a613e(int64_t a1);
int64_t function_3a6161(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a628d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a62ac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a6321(int64_t a1, int64_t a2);
int64_t function_7fbefba3();
int64_t unknown_12bad420();
int64_t unknown_1ed40669();
int64_t unknown_2564d748();
int64_t unknown_2f2852cc();
int64_t unknown_3494d0b6();
int64_t unknown_39018b93();
int64_t unknown_3ab7816d();
int64_t unknown_3ad6e4b8();
int64_t unknown_3ddf9005();
int64_t unknown_4abda45e();
int64_t unknown_55c95532();
int64_t unknown_5ca91c5c();
int64_t unknown_5fc554a2();
int64_t unknown_63bce9af();
int64_t unknown_6d2cd00f();
int64_t unknown_6d4f4425();
int64_t unknown_ffffffffa6eab17c();
int64_t unknown_ffffffffaa2d8313();
int64_t unknown_ffffffffb3d8f8c0();
int64_t unknown_ffffffffba2b8887();
int64_t unknown_ffffffffbea4911c();
int64_t unknown_ffffffffc2301d0a();
int64_t unknown_ffffffffc748eb31();
int64_t unknown_ffffffffd04880a9();
int64_t unknown_ffffffffd8e05fde();
int64_t unknown_ffffffffd92ace55();
int64_t unknown_ffffffffdd28d498();

// Address range: 0x340273 - 0x340274
int64_t function_340273(void) {
    // 0x340273
    int64_t result; // 0x340273
    return result;
}

// Address range: 0x340274 - 0x34027d
int64_t function_340274(int64_t a1, int64_t a2) {
    // 0x340274
    return __asm_hlt(a1, a2);
}

// Address range: 0x34028f - 0x3402bc
int64_t function_34028f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34028f
    bool v1; // 0x34028f
    if (a4 == 1 || v1) {
        // 0x340291
        int64_t result; // 0x34028f
        return result;
    }
    // 0x340293
    *(int32_t *)a3 = (int32_t)a3 >> 1;
    *(char *)0x42330068 = (char)__asm_wait() - 20 | *(char *)0x42330068;
    unknown_3494d0b6();
    return __asm_hlt(a1, 0x42013d00);
}

// Address range: 0x3402bc - 0x3402d1
int64_t function_3402bc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3402bc
    int64_t v1; // 0x3402bc
    uint64_t v2 = v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result = v2 & -256 | (int64_t)*(char *)-0x296939abc5ea482c; // 0x3402bd
    char * v3 = (char *)(result + 8 + 2 * result); // 0x3402c6
    *v3 = *v3 & (char)(v2 / 256);
    *(char *)(a3 + 0x3c013d00) = (char)(a4 / 256);
    return result;
}

// Address range: 0x34032b - 0x34032c
int64_t function_34032b(void) {
    // 0x34032b
    int64_t result; // 0x34032b
    return result;
}

// Address range: 0x34033d - 0x34033e
int64_t function_34033d(void) {
    // 0x34033d
    int64_t result; // 0x34033d
    return result;
}

// Address range: 0x34034e - 0x340351
int64_t function_34034e(void) {
    // 0x34034e
    int64_t result; // 0x34034e
    return result;
}

// Address range: 0x340354 - 0x340355
int64_t function_340354(void) {
    // 0x340354
    int64_t result; // 0x340354
    return result;
}

// Address range: 0x340359 - 0x340361
int64_t function_340359(int64_t a1) {
    // 0x340359
    return __asm_in((char)a1);
}

// Address range: 0x340367 - 0x340369
int64_t function_340367(void) {
    // 0x340367
    return function_34033d();
}

// Address range: 0x340398 - 0x3403a6
int64_t function_340398(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x340398
    return function_7fbefba3();
}

// Address range: 0x3403a6 - 0x3403b6
int64_t function_3403a6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3403a6
    int64_t v1; // 0x3403a6
    char * v2 = (char *)(v1 - 28); // 0x3403ab
    char v3 = v1; // 0x3403ab
    *v2 = *v2 + v3;
    __asm_out((int16_t)a3, v3);
    return __asm_wait();
}

// Address range: 0x3403b6 - 0x3403da
int64_t function_3403b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x3403b6
    int64_t result; // 0x3403b6
    if (a4 == 1 || (a5 & 64) != 0) {
        // 0x3403bb
        return result;
    }
    // 0x3403bd
    __asm_out_133((int16_t)a3, (int32_t)result);
    int64_t v1; // 0x3403b6
    if (a4 != 2) {
        v1 = function_340354();
    }
    int64_t v2 = v1;
    return v2 & -256 | v2 + (a5 % 2 | 118) & 196 | 59;
}

// Address range: 0x3404c5 - 0x3404fb
int64_t function_3404c5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = unknown_2f2852cc(); // 0x3404c5
    int64_t v2 = a3 & -256; // 0x3404cb
    int32_t v3 = a4; // 0x3404cd
    bool v4; // 0x3404c5
    *(int32_t *)0x685a45 = (int32_t)v4 + v3 + *(int32_t *)0x685a45;
    char * v5 = (char *)v1; // 0x3404d3
    *v5 = *v5 - 24;
    int32_t * v6 = (int32_t *)(v2 | 205); // 0x3404d6
    int64_t v7; // 0x3404c5
    *v6 = *v6 + (int32_t)v7;
    uint32_t v8 = (int32_t)v1 - *(int32_t *)v1; // 0x3404d9
    int32_t * v9 = (int32_t *)(a2 - 59); // 0x3404e9
    *v9 = *v9 + v3;
    int32_t * v10 = (int32_t *)((int64_t)(v8 + (int32_t)v7) + 7); // 0x3404ef
    int64_t v11; // 0x3404c5
    *v10 = *v10 - (int32_t)(int64_t)&v11;
    int32_t * v12 = (int32_t *)(v2 | 204); // 0x3404f6
    *v12 = *v12 + (int32_t)a1;
    return (a4 / 256 + (int64_t)v8) % 256 | (int64_t)(v8 & -256);
}

// Address range: 0x340509 - 0x34050a
int64_t function_340509(void) {
    // 0x340509
    int64_t result; // 0x340509
    return result;
}

// Address range: 0x34051c - 0x3406b7
int64_t function_34051c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3 = a7;
    float80_t v4; // 0x34051c
    int16_t v5 = v4; // 0x34051e
    *(int16_t *)(a4 + 0x1e8d5ef) = v5;
    int64_t v6 = __asm_hlt((int64_t)&g3, (int64_t)&g3); // 0x340525
    int64_t v7; // 0x34051c
    __asm_out_134(-120, (char)v7);
    int32_t v8 = v6 | a4; // 0x34052f
    *(int32_t *)(v7 & 0xffffffff) = v8;
    int64_t v9 = unknown_2564d748(); // 0x340542
    *(int16_t *)((int64_t)((int32_t)v7 >> 31) - 0x7d526a3b) = v5;
    if (v8 < 0) {
        uint64_t v10 = unknown_ffffffffd92ace55(); // 0x34054f
        char v11 = *(char *)&v1; // 0x340557
        *(int32_t *)v2 = ((int32_t)v1 & -0x6894ad54) + *(int32_t *)&v2;
        return 256 * (int64_t)(v11 + (char)(v10 / 256)) | v10 & -0xff01;
    }
    int64_t v12 = v9 & 0xffffffff; // 0x340591
    char * v13 = (char *)v12; // 0x340592
    *v13 = *v13 + (char)v9;
    bool v14; // 0x34051c
    int64_t v15 = v14 ? -4 : 4; // 0x340599
    int64_t v16 = v1 + v15; // 0x340599
    int64_t v17 = v3; // 0x34059a
    int32_t v18 = *(int32_t *)&v2; // 0x34059b
    int64_t v19 = v2 + v15; // 0x34059b
    v2 = v19;
    int64_t v20 = unknown_5fc554a2(v19, v16 + v15, 0xc83b008d, v12); // 0x34059c
    v1 = 0x3291a65d;
    if (*(int32_t *)v16 == v18) {
        int64_t v21 = v12 - 1; // 0x340624
        char * v22 = (char *)v21; // 0x340626
        unsigned char v23 = *v22; // 0x340626
        unsigned char v24 = (char)v21; // 0x340626
        *v22 = v23 - v24;
        v3 = v20;
        unsigned char v25 = (char)v20 + 59 + (char)(v23 < v24); // 0x340629
        int64_t result = v20 & -256 | (int64_t)v25; // 0x340629
        if (v21 != 1 == v25 == 0) {
            // 0x34066f
            return 0x10000 * (int32_t)result >> 16;
        }
        // 0x34062e
        return result;
    }
    int64_t v26 = v14 ? -1 : 1; // 0x3405a8
    int64_t v27 = v19 + v26; // 0x3405a8
    v2 = v27;
    unknown_63bce9af(v27, v26 + 0x3291a65d);
    if (*(char *)0x3291a65d != *(char *)v19) {
        // 0x3405e5
        v3 = -((0x100000000000000 * (int64_t)&v3)) >> 56;
        int64_t result2 = unknown_3ddf9005(); // 0x3405ff
        int32_t * v28 = (int32_t *)result2; // 0x340604
        *v28 = *v28 + (int32_t)result2;
        return result2;
    }
    char * v29 = (char *)((int64_t)(-35 * *(int32_t *)0xc83b00b8) - 104); // 0x3405b4
    *v29 = *v29 - 115;
    uint64_t v30 = unknown_ffffffffb3d8f8c0(); // 0x3405ba
    char * v31 = (char *)(v17 - 125); // 0x3405bf
    *v31 = *v31 + (char)(v30 / 256);
    return v2 & 0xffffffff;
}

// Address range: 0x3406bb - 0x3406bf
int64_t function_3406bb(void) {
    // 0x3406bb
    int64_t result; // 0x3406bb
    return result;
}

// Address range: 0x3406e1 - 0x3406fd
int64_t function_3406e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3406e1
    return function_31b469f1();
}

// Address range: 0x34075e - 0x340762
int64_t function_34075e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34075e
    return __asm_in_135((int16_t)a3);
}

// Address range: 0x3407a7 - 0x3407ac
int64_t function_3407a7(int64_t a1, int64_t a2) {
    // 0x3407a7
    int64_t result; // 0x3407a7
    return result;
}

// Address range: 0x3407fa - 0x3407fb
int64_t function_3407fa(void) {
    // 0x3407fa
    int64_t result; // 0x3407fa
    return result;
}

// Address range: 0x3a5939 - 0x3a594a
int64_t function_3a5939(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a5939
    int64_t result; // 0x3a5939
    return result;
}

// Address range: 0x3a5990 - 0x3a5992
int64_t function_3a5990(void) {
    // 0x3a5990
    int64_t v1; // 0x3a5990
    return function_3a59e9(v1, (int64_t)&g3, (int64_t)&g3);
}

// Address range: 0x3a5995 - 0x3a599c
int64_t function_3a5995(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a5995
    int64_t result; // 0x3a5995
    return result;
}

// Address range: 0x3a599c - 0x3a59b2
int64_t function_3a599c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a599c
    int64_t result; // 0x3a599c
    int32_t * v1 = (int32_t *)(8 * a4 + 19 + result); // 0x3a599c
    *v1 = *v1 - 98;
    return result;
}

// Address range: 0x3a59e9 - 0x3a5a10
int64_t function_3a59e9(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 & 0xffffffff; // 0x3a59ea
    unsigned char v2 = *(char *)0x56cb5ff2; // 0x3a59eb
    int64_t v3; // 0x3a59e9
    unsigned char v4 = v2 + (char)(v3 / 256); // 0x3a59eb
    *(char *)0x56cb5ff2 = v4;
    uint32_t v5 = (int32_t)v3 % 32; // 0x3a59f2
    char v6; // 0x3a59e9
    bool v7; // 0x3a59e9
    if (v5 == 0) {
        // 0x3a59e9
        v6 = a2;
        v7 = v4 < v2;
    } else {
        int32_t * v8 = (int32_t *)(a1 - 44); // 0x3a59f2
        uint32_t v9 = *v8; // 0x3a59f2
        uint32_t v10 = v5 - 1; // 0x3a59f2
        *v8 = (int32_t)(v4 < v2) << v10 | v9 << v5 | (int32_t)((int64_t)v9 >> (int64_t)(33 - v5));
        v6 = *(char *)&v1;
        v7 = (v9 & 0x80000000 >> v10) != 0;
    }
    int64_t v11 = v3 & 0xffffffff; // 0x3a59ea
    *(char *)v11 = v6 - (char)(v3 / 256) + (char)v7;
    return function_3a599c(a1, v3, v3, v11);
}

// Address range: 0x3a5a16 - 0x3a5a23
int64_t function_3a5a16(int64_t a1) {
    // 0x3a5a16
    return unknown_ffffffffbea4911c(a1);
}

// Address range: 0x3a5a2c - 0x3a5a74
int64_t function_3a5a2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a5a2c
    int64_t v1; // 0x3a5a2c
    *(char *)a1 = (char)v1;
    *(int32_t *)-0x18b9fffec2df3bb6 = (int32_t)v1;
    return v1 & 0xaf6f00e0 | (int64_t)&g2;
}

// Address range: 0x3a5a7a - 0x3a5a80
int64_t function_3a5a7a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a5a7a
    float80_t v1; // 0x3a5a7a
    *(int16_t *)(a3 - 0x78e12169) = (int16_t)v1;
    int64_t result; // 0x3a5a7a
    return result;
}

// Address range: 0x3a5a8b - 0x3a5a8c
int64_t function_3a5a8b(void) {
    // 0x3a5a8b
    int64_t result; // 0x3a5a8b
    return result;
}

// Address range: 0x3a5a8d - 0x3a5a93
int64_t function_3a5a8d(int64_t a1) {
    // 0x3a5a8d
    int64_t v1; // 0x3a5a8d
    return v1 + a1 & 0xffffffff;
}

// Address range: 0x3a5a93 - 0x3a5a96
int64_t function_3a5a93(int64_t a1) {
    // 0x3a5a93
    return __asm_in((char)a1);
}

// Address range: 0x3a5ab9 - 0x3a5aba
int64_t function_3a5ab9(void) {
    // 0x3a5ab9
    int64_t result; // 0x3a5ab9
    return result;
}

// Address range: 0x3a5af9 - 0x3a5afb
int64_t function_3a5af9(void) {
    // 0x3a5af9
    int64_t v1; // 0x3a5af9
    return function_3a5b4c(v1, v1, v1, v1);
}

// Address range: 0x3a5afb - 0x3a5b4c
int64_t function_3a5afb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3a5afb
    int64_t v1; // 0x3a5afb
    uint64_t v2 = v1;
    int64_t v3 = a3;
    bool v4; // 0x3a5afb
    if (!v4) {
        function_3a5a8b();
    }
    int64_t v5 = unknown_ffffffffc2301d0a(); // 0x3a5b09
    if (!v4) {
        // 0x3a5b0b
        v5 = unknown_ffffffffaa2d8313();
        int32_t * v6 = (int32_t *)(v2 - 24); // 0x3a5b18
        *v6 = -1 - *v6;
    }
    int32_t * v7 = (int32_t *)(a2 + 0x7a835202); // 0x3a5b1b
    *v7 = *v7 + (int32_t)a1;
    int64_t v8 = v5 & 0xffffffff ^ 0x3a01e8af; // 0x3a5b21
    char * v9 = (char *)(v3 + 7); // 0x3a5b27
    *v9 = *v9 + (char)(v2 / 256);
    char * v10 = (char *)(v8 + 0x1e81a15); // 0x3a5b2a
    unsigned char v11 = *v10; // 0x3a5b2a
    char v12 = v11 / 128; // 0x3a5b2a
    *v10 = v12 | 2 * v11;
    int64_t v13 = (v8 + 53 + (int64_t)(v12 != 0)) % 256 | v8 & 0xffffff00; // 0x3a5b35
    if ((*(char *)&v3 || (char)(a4 / 256)) == 0) {
        v13 = function_3a5ab9();
    }
    int64_t v14 = v4 ? -1 : 1; // 0x3a5b32
    int32_t * v15 = (int32_t *)(a2 + 0x285e0a + 8 * v2 + v14); // 0x3a5b3a
    *v15 = *v15 + (int32_t)v2;
    *(int32_t *)(v14 + a1) = __asm_insd((int16_t)v13);
    *(char *)0x203c68ab01e8e540 = (char)v3;
    return v3 & 0xffffffff;
}

// Address range: 0x3a5b4c - 0x3a5b7a
int64_t function_3a5b4c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3a5b4c
    int64_t v1; // 0x3a5b4c
    int64_t v2 = v1;
    *(char *)-0x16f0f6c6 = *(char *)-0x16f0f6c6 | (char)v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    bool v3; // 0x3a5b4c
    int64_t v4 = unknown_3ab7816d(0x66a53a90, v3 ? 0x286201e8ebd03a3e : 0x286201e8ebd03a40); // 0x3a5b67
    char * v5 = (char *)(v4 - 0x54ff4d00); // 0x3a5b6c
    *v5 = *v5 + (char)v4;
    uint64_t v6 = v4 + a4 / 256; // 0x3a5b72
    int64_t v7 = v4 & -256; // 0x3a5b72
    int32_t * v8 = (int32_t *)((v6 % 256 | v7) + a4); // 0x3a5b74
    uint32_t v9 = *v8; // 0x3a5b74
    uint32_t v10 = v9 + (int32_t)a4; // 0x3a5b74
    *v8 = v10;
    return (v6 - (v10 < v9 ? 247 : 246)) % 256 | v7;
}

// Address range: 0x3a5bed - 0x3a5bf0
int64_t function_3a5bed(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a5bed
    return a2 & 0xffffffff;
}

// Address range: 0x3a5c1a - 0x3a5c26
int64_t function_3a5c1a(int64_t a1) {
    int64_t result = unknown_12bad420(a1); // 0x3a5c1a
    int32_t * v1 = (int32_t *)(result + 0xffaaf15); // 0x3a5c1f
    *v1 = *v1 & (int32_t)result;
    return result;
}

// Address range: 0x3a5c36 - 0x3a5c37
int64_t function_3a5c36(int64_t a1) {
    // 0x3a5c36
    int64_t result; // 0x3a5c36
    return result;
}

// Address range: 0x3a5c8b - 0x3a5cbd
int64_t function_3a5c8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a5c8b
    unknown_39018b93();
    *(int32_t *)0x4cd3caf = *(int32_t *)0x4cd3caf + 0x1b00;
    return 0x1b00;
}

// Address range: 0x3a5d0a - 0x3a5d0b
int64_t function_3a5d0a(void) {
    // 0x3a5d0a
    int64_t result; // 0x3a5d0a
    return result;
}

// Address range: 0x3a5d43 - 0x3a5d45
int64_t function_3a5d43(void) {
    // 0x3a5d43
    return function_3a5d0a();
}

// Address range: 0x3a5d9d - 0x3a5e90
int64_t function_3a5d9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a5d9d
    bool v1; // 0x3a5d9d
    if (a4 == 1 || v1) {
        // 0x3a5e1d
        unknown_6d4f4425();
        __asm_in(28);
        return unknown_55c95532();
    }
    // 0x3a5db2
    int64_t result; // 0x3a5d9d
    return result;
}

// Address range: 0x3a5eb1 - 0x3a5ebb
int64_t function_3a5eb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 126); // 0x3a5eb1
    int64_t v2; // 0x3a5eb1
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x3a5eb1
    *(char *)v3 = *(char *)&v3 + 64;
    return unknown_6d2cd00f();
}

// Address range: 0x3a5ed7 - 0x3a5ed8
int64_t function_3a5ed7(void) {
    // 0x3a5ed7
    int64_t result; // 0x3a5ed7
    return result;
}

// Address range: 0x3a5ef3 - 0x3a5f01
int64_t function_3a5ef3(int64_t a1, int64_t a2) {
    // 0x3a5ef3
    int64_t v1; // 0x3a5ef3
    int64_t v2 = v1;
    bool v3; // 0x3a5ef3
    return ((v2 - (v3 ? 231 : 230)) % 256 | v2 & -256) ^ 178;
}

// Address range: 0x3a5f05 - 0x3a5f06
int64_t function_3a5f05(void) {
    // 0x3a5f05
    int64_t result; // 0x3a5f05
    return result;
}

// Address range: 0x3a5f09 - 0x3a5f10
int64_t function_3a5f09(void) {
    // 0x3a5f09
    unknown_6d2cd00f();
    int64_t v1; // 0x3a5f09
    return function_3a5ef3(v1, v1);
}

// Address range: 0x3a5f10 - 0x3a5f22
int64_t function_3a5f10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a5f10
    __asm_in_136((int16_t)a3);
    return function_3a5ed7();
}

// Address range: 0x3a5f56 - 0x3a5f5e
int64_t function_3a5f56(void) {
    // 0x3a5f56
    unknown_5ca91c5c();
    __asm_hlt((int64_t)&g3, (int64_t)&g3);
    int64_t v1; // 0x3a5f56
    return function_3a5f86(v1, v1, v1, v1);
}

// Address range: 0x3a5f7a - 0x3a5f86
int64_t function_3a5f7a(void) {
    // 0x3a5f7a
    bool v1; // 0x3a5f7a
    if (!v1) {
        function_3a5f05();
    }
    // 0x3a5f7c
    unknown_ffffffffd8e05fde();
    return unknown_ffffffffba2b8887();
}

// Address range: 0x3a5f86 - 0x3a5f97
int64_t function_3a5f86(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x1642c8a7); // 0x3a5f8a
    uint32_t v2 = *v1; // 0x3a5f8a
    *v1 = v2 / 2 | 0x80000000 * v2;
    return unknown_ffffffffdd28d498();
}

// Address range: 0x3a6017 - 0x3a604e
int64_t function_3a6017(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)(a1 - 0x3cb8758f); // 0x3a6017
    int64_t v2; // 0x3a6017
    bool v3; // 0x3a6017
    return v1 + (char)v3 > (char)(a3 / 256) ? a5 : v2;
}

// Address range: 0x3a606b - 0x3a613d
int64_t function_3a606b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a606b
    int64_t v1; // 0x3a606b
    int64_t v2 = v1;
    int64_t v3 = a2;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t v4 = __asm_wait(); // 0x3a60a2
    int64_t v5 = v4 & 0xffffffff; // 0x3a60ac
    int32_t v6 = *(int32_t *)&v3; // 0x3a60ad
    uint16_t v7 = (int16_t)v6; // 0x3a60bc
    uint16_t v8 = (int16_t)*(char *)(v5 + 63); // 0x3a60bc
    int32_t v9 = (v6 & -0x10000 | (int32_t)(v7 / v8 % 256) | (int32_t)(256 * (v7 % v8))) + 0x3a7b9b3a; // 0x3a60c8
    if (v9 < 0 == (v9 & (v6 ^ -0x80000000)) < 0 != v9 != 0) {
        int64_t result = a3 & 0xffff00ff | (int64_t)&g1 & 0xffffffff; // 0x3a60df
        int32_t * v10 = (int32_t *)(result + 0x689ddf); // 0x3a60e0
        *v10 = *v10 - (int32_t)v4;
        return result;
    }
    int32_t * v11 = (int32_t *)((4 * v1 & -0x3fc04) + 0xc2ad7aef); // 0x3a610e
    uint32_t v12 = *v11; // 0x3a610e
    uint32_t v13 = v12 + (int32_t)v4; // 0x3a610e
    *v11 = v13;
    int64_t v14 = (int64_t)v9 - (v13 < v12 ? 0xe72c3e74 : 0xe72c3e73); // 0x3a6115
    int32_t * v15 = (int32_t *)(v5 - 0x422abec6); // 0x3a611a
    uint32_t v16 = *v15; // 0x3a611a
    *v15 = v16 - 8;
    *(int32_t *)-0x63e560b0fec2ff7a = (int32_t)v14;
    int64_t result2 = v14 & 0xffffff00 | (int64_t)*(char *)-0x19522c67200ef025; // 0x3a612d
    int32_t * v17 = (int32_t *)result2; // 0x3a6136
    *v17 = *v17 + (int32_t)(v16 > 7) - (int32_t)result2;
    return result2;
}

// Address range: 0x3a613e - 0x3a6143
int64_t function_3a613e(int64_t a1) {
    // 0x3a613e
    __asm_int((char)a1);
    int64_t result; // 0x3a613e
    return result;
}

// Address range: 0x3a6161 - 0x3a628a
int64_t function_3a6161(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    uint64_t v3 = unknown_1ed40669(); // 0x3a6163
    uint64_t v4 = v3 + 149; // 0x3a6169
    int64_t result = v4 % 256 | v3 & -256; // 0x3a6169
    int64_t v5; // 0x3a6161
    int32_t * v6 = (int32_t *)(v5 - 32); // 0x3a61dd
    int32_t v7 = *v6 + (int32_t)a1; // 0x3a61dd
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x3a61dd
    *v6 = v7;
    float80_t v9; // 0x3a6161
    if (v8 % 2 != 0) {
        // 0x3a61e2
        *(int16_t *)(v5 - 0x1dfe17d6) = (int16_t)v9;
        return result;
    }
    char * v10 = (char *)(a4 - 0x1753d000); // 0x3a6235
    unsigned char v11 = *v10; // 0x3a6235
    *v10 = v11 / 2 | 128 * v11;
    int32_t * v12 = (int32_t *)(v5 - 0x5b262990); // 0x3a623b
    uint32_t v13 = *v12; // 0x3a623b
    int32_t v14 = v5; // 0x3a623b
    uint32_t v15 = v13 + v14; // 0x3a623b
    *v12 = v15;
    *(char *)v1 = *(char *)&v1 + (char)(v3 / 256);
    int64_t v16 = (int64_t)(0x80000 * (*(int32_t *)result + v14 + (int32_t)(v15 < v13))); // 0x3a6245
    int64_t v17 = a4 - 256 * v4 & 0xff00 | a4 & -0xff01; // 0x3a6248
    int64_t result2 = result; // 0x3a6248
    int64_t v18; // 0x3a6161
    int64_t v19 = (int64_t)&v18; // 0x3a6248
    int32_t v20 = result2; // 0x3a624c
    int32_t result3 = v20 - 0x67dc8459; // 0x3a624c
    int64_t v21; // 0x3a624a
    int64_t v22; // 0x3a6258
    int64_t v23; // 0x3a626d
    bool v24; // 0x3a6161
    while (result3 < 0 == ((result3 ^ v20) & v20 + 0x18237ba7) < 0) {
        // 0x3a6253
        int64_t v25; // 0x3a6161
        v21 = v25 + result2 & 0xffffffff;
        v22 = unknown_4abda45e();
        int32_t v26 = *(int32_t *)(2 * v22 + a1); // 0x3a625d
        int32_t v27 = v26 + (int32_t)(v1 & 0xffffff00 | (int64_t)*(char *)&v2); // 0x3a625d
        v1 = v27;
        result2 = v19 & 0xffffffff;
        v25 = v21;
        v19 = v22 & 0xffffffff;
        if (v27 < 0) {
            // 0x3a6263
            v23 = 0;
            v24 = v27 == 0;
            if (v17 == 0) {
                goto lab_0x3a626f;
            } else {
                int32_t * v28 = (int32_t *)(v2 - 0x19a4fe18); // 0x3a6265
                int32_t v29 = *v28 >> 21; // 0x3a6265
                *v28 = v29;
                v23 = v17 - 1;
                v24 = v29 == 0;
                if (v23 != 0 == v29 == 0) {
                    // 0x3a6203
                    return result2;
                }
                goto lab_0x3a626f;
            }
        }
        v20 = result2;
        result3 = v20 - 0x67dc8459;
    }
    // 0x3a61d8
    return result3;
  lab_0x3a626f:
    // 0x3a626f
    *(float32_t *)(result2 - 0x6f4a7ff9) = (float32_t)v9;
    int64_t v30 = unknown_ffffffffa6eab17c(); // 0x3a6276
    if (v24) {
        uint32_t v31 = __asm_in(56); // 0x3a627d
        uint64_t v32 = v21 / 256 + (int64_t)v31; // 0x3a627f
        int64_t v33 = v31 & -256; // 0x3a627f
        char * v34 = (char *)(v32 % 256 | v33); // 0x3a6281
        *v34 = *v34 | (char)v32;
        int32_t * v35 = (int32_t *)v23; // 0x3a6286
        *v35 = (int32_t)v22 + 8 + *v35;
        return (v32 ^ v23 / 256) % 256 | v33;
    }
    char * v36 = (char *)(v30 - 21); // 0x3a6204
    *v36 = *v36 + (char)v30;
    int32_t * v37 = (int32_t *)(v16 - 0x66ff4300); // 0x3a620a
    *v37 = *v37 + (int32_t)v22;
    char * v38 = (char *)(v23 + 8 * v16); // 0x3a6210
    *v38 = *v38 + (char)v1;
    char * v39 = (char *)((v30 + v5) % 256 | v30 & -256); // 0x3a6213
    *v39 = *v39 & (char)(v23 / 256);
    return unknown_ffffffffc748eb31();
}

// Address range: 0x3a628d - 0x3a62ac
int64_t function_3a628d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x4b7fe18); // 0x3a6292
    uint32_t v2 = *v1; // 0x3a6292
    *v1 = 32 * v2 | v2 / 0x10000000;
    __asm_hlt((int64_t)&g3, (int64_t)&g3);
    return unknown_ffffffffd04880a9();
}

// Address range: 0x3a62ac - 0x3a62b9
int64_t function_3a62ac(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a62ac
    return unknown_3ad6e4b8(a1, a2, a3);
}

// Address range: 0x3a6321 - 0x3a6324
int64_t function_3a6321(int64_t a1, int64_t a2) {
    // 0x3a6321
    int64_t result; // 0x3a6321
    return result;
}
