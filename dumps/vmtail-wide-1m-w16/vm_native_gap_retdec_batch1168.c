/*
 * Targeted RetDec C for native executable gap queue batch 1168.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xfd39c-0xfd59c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfd79c-0xfd99c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfd99c-0xfdb9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfdb9c-0xfdd9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfdd9c-0xfdf9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfdf9c-0xfe19c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfe19c-0xfe39c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a0485-0x1a0685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a0685-0x1a0885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fab9e-0x3fad9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fad9e-0x3faf9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3faf9e-0x3fb19e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fb19e-0x3fb39e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fb59e-0x3fb79e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fb79e-0x3fb99e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fb99e-0x3fbb9e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
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

int64_t function_14cd9c8();
int64_t function_1a0485(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_1a04d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a0616(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1f86d61();
int64_t function_22d72295();
int64_t function_3fab9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_3fac90(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int32_t a5, int64_t a6);
int64_t function_3fadb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fae43(int64_t a1, int64_t a2);
int64_t function_3fae4b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fae5a(void);
int64_t function_3fae5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fae6b(void);
int64_t function_3fae76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3faec8(void);
int64_t function_3faf17(int64_t a1, int64_t a2);
int64_t function_3faf50(int64_t a1);
int64_t function_3faf56(int64_t a1, int64_t a2);
int64_t function_3faff6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fb039(void);
int64_t function_3fb068(void);
int64_t function_3fb06d(int64_t a1);
int64_t function_3fb078(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fb0f0(void);
int64_t function_3fb0fd(void);
int64_t function_3fb114(void);
int64_t function_3fb125(void);
int64_t function_3fb147(void);
int64_t function_3fb14c(void);
int64_t function_3fb150(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fb1a6(int64_t a1);
int64_t function_3fb22d(int64_t a1);
int64_t function_3fb319(void);
int64_t function_3fb369(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fb58d();
int64_t function_3fb59e(void);
int64_t function_3fb5a8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fb5b8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3fb5c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fb5ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fb621(void);
int64_t function_3fb65c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fb6dd(int64_t a1);
int64_t function_3fb73e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fb799(void);
int64_t function_3fb7a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3fb8d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fb925(void);
int64_t function_3fb948(int64_t a1);
int64_t function_3fb963(void);
int64_t function_3fb987(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fb99c(void);
int64_t function_3fb9a1(void);
int64_t function_3fb9bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fb9f8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fba60(int64_t a1);
int64_t function_3fba61(void);
int64_t function_3fba99(void);
int64_t function_3fba9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fbab4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3fbb45(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fbb69(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fbb88(int64_t a1, int64_t a2, int64_t a3);
int64_t function_464a9a5d();
int64_t function_4a33d914();
int64_t function_53192c0f();
int64_t function_604a069a();
int64_t function_682fb91a();
int64_t function_c57b8();
int64_t function_caf2a();
int64_t function_fd39c(int64_t a1);
int64_t function_fd3a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_fd527(void);
int64_t function_fd52c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_fd548(void);
int64_t function_fd55e(void);
int64_t function_fd73e();
int64_t function_fd750();
int64_t function_fd79c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fd8a7(void);
int64_t function_fd8b2(int64_t a1);
int64_t function_fd8d6(int64_t a1);
int64_t function_fd919(void);
int64_t function_fd91a(int64_t a1);
int64_t function_fd959(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fd974(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fd9dd(int64_t a1);
int64_t function_fdb1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fdb37(void);
int64_t function_fdb3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fdb90(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fdc44(int64_t a1);
int64_t function_fdd91(int64_t a1);
int64_t function_fddf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_fdf74(void);
int64_t function_fdfb0(void);
int64_t function_fdfc6(void);
int64_t function_fdfc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_fe02c(void);
int64_t function_fe060(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_fe0f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fe185(void);
int64_t function_fe198(void);
int64_t function_fe1ae(int64_t a1);
int64_t function_fe1d1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_fe1d6(void);
int64_t function_fe1dc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_fe1fe(int64_t a1);
int64_t function_fe248(void);
int64_t function_fe24f(void);
int64_t function_fe2ab(void);
int64_t function_fe36a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_fe39b(int64_t a1);
int64_t function_ffaa1();
int64_t function_ffffffff8cdb875a();
int64_t function_ffffffffaf05ca83();
int64_t function_ffffffffbc8e48ff();
int64_t function_ffffffffc311c951();
int64_t function_ffffffffc53037cd();
int64_t function_ffffffffd71f6ff3();
int64_t function_ffffffffe84e0d58();
int64_t function_fffffffff4d81e77();
int64_t unknown_11111587();
int64_t unknown_281537c2();
int64_t unknown_30162fa4();
int64_t unknown_47e31222();
int64_t unknown_ffffffff840cd34d();
int64_t unknown_ffffffff8c7dd06d();
int64_t unknown_ffffffff91b0ce7c();
int64_t unknown_ffffffff95083ca7();
int64_t unknown_ffffffff9f9847d1();
int64_t unknown_ffffffffb1d5ca76();
int64_t unknown_ffffffffd0add278();
int64_t unknown_ffffffffd3d7069a();
int64_t unknown_ffffffffe403c26b();

// Address range: 0xfd39c - 0xfd39f
int64_t function_fd39c(int64_t a1) {
    // 0xfd39c
    int64_t result; // 0xfd39c
    return result;
}

// Address range: 0xfd3a3 - 0xfd527
int64_t function_fd3a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0xfd3a3
    return function_caf2a();
}

// Address range: 0xfd527 - 0xfd52c
int64_t function_fd527(void) {
    // 0xfd527
    return function_ffaa1();
}

// Address range: 0xfd52c - 0xfd541
int64_t function_fd52c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xfd52c
    int64_t v1; // 0xfd52c
    uint64_t v2 = 2 * v1; // 0xfd531
    int64_t result = v2 & 0xffffffff; // 0xfd531
    char * v3 = (char *)(result + 0x482e880a); // 0xfd535
    *v3 = *v3 + (char)(v2 / 256);
    return result;
}

// Address range: 0xfd548 - 0xfd549
int64_t function_fd548(void) {
    // 0xfd548
    int64_t result; // 0xfd548
    return result;
}

// Address range: 0xfd55e - 0xfd560
int64_t function_fd55e(void) {
    // 0xfd55e
    return function_fd548();
}

// Address range: 0xfd79c - 0xfd886
int64_t function_fd79c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfd79c
    int64_t v1; // 0xfd79c
    uint64_t v2 = v1;
    int64_t v3 = unknown_30162fa4(); // 0xfd79e
    int3_t v4; // 0xfd79c
    *(int16_t *)(a3 + 0x21e7fb7) = (int16_t)__frontend_reg_load_fpr(v4);
    char * v5 = (char *)(v1 - 109); // 0xfd7a9
    bool v6; // 0xfd79c
    *v5 = *v5 - (v6 ? -23 : -24);
    int32_t * v7 = (int32_t *)(a3 + 13); // 0xfd7ae
    int32_t v8 = v2; // 0xfd7ae
    int32_t v9 = *v7 + v8; // 0xfd7ae
    *v7 = v9;
    int32_t v10 = v3;
    *(int32_t *)a1 = v10;
    int32_t v11 = v10; // 0xfd7b3
    int64_t v12 = v3; // 0xfd7b3
    if (v9 < 1) {
        v12 = function_fd73e();
        v11 = v12;
    }
    char * v13 = (char *)(v1 + a3); // 0xfd7b5
    char v14 = *v13; // 0xfd7b5
    char v15 = v12 / 256; // 0xfd7b5
    char v16 = v14 + v15; // 0xfd7b5
    *v13 = v16;
    *(int32_t *)v12 = v11;
    if (((v16 ^ v14) & (v16 ^ v15)) >= 0) {
        function_fd750();
    }
    int64_t v17 = (v6 ? -4 : 4) + a1; // 0xfd7b1
    uint64_t v18 = unknown_281537c2(); // 0xfd7bc
    *(int32_t *)v17 = (int32_t)__frontend_reg_load_fpr(v4);
    uint64_t v19 = a4 - 1; // 0xfd7c5
    if (v19 == 0) {
        // 0xfd7c7
        int64_t v20; // 0xfd79c
        __asm_out(46, (char)(int64_t)&v20);
        return unknown_ffffffff9f9847d1();
    }
    // 0xfd837
    __frontend_reg_load_fpr(v4 + 1);
    if ((char)v2 != (char)(v2 / 256)) {
        // 0xfd82c
        return v19 & 0xffffffff;
    }
    int32_t * v21 = (int32_t *)(a4 + 0x59c3c8ff); // 0xfd844
    *v21 = *v21 + v8;
    int32_t * v22 = (int32_t *)(2 * a3 + 3 + v2); // 0xfd84a
    *v22 = *v22 / 0x20000;
    uint64_t v23 = v18 / 256; // 0xfd84f
    uint64_t v24 = v18 - (2 * (char)v23 < (char)v23 ? 233 : 232); // 0xfd851
    int32_t * v25 = (int32_t *)(a4 - 117); // 0xfd853
    uint32_t v26 = *v25; // 0xfd853
    uint32_t v27 = v26 + (int32_t)v1; // 0xfd853
    *v25 = v27;
    uint32_t v28 = (int32_t)v19 % 32; // 0xfd85d
    if (v28 != 0) {
        int32_t * v29 = (int32_t *)(512 * v23 & 0xfe00 | v18 & -0x10000 | v24 % 256); // 0xfd85d
        uint32_t v30 = *v29; // 0xfd85d
        *v29 = v30 >> 32 - v28 | v30 << v28;
    }
    int64_t v31 = 256 * (v24 + v19 / 256 + (int64_t)(v27 < v26)) & 0xff00 | v19 & -0xff01; // 0xfd856
    *(char *)0x6ce83a9ff401e83d = (char)v24;
    __asm_in(8);
    unknown_ffffffffb1d5ca76();
    *(char *)v17 = __asm_insb((int16_t)a3);
    int32_t * v32 = (int32_t *)(v31 - 11); // 0xfd87e
    *v32 = *v32 + (int32_t)v31;
    return unknown_11111587();
}

// Address range: 0xfd8a7 - 0xfd8ac
int64_t function_fd8a7(void) {
    // 0xfd8a7
    return function_4a33d914();
}

// Address range: 0xfd8b2 - 0xfd8b5
int64_t function_fd8b2(int64_t a1) {
    // 0xfd8b2
    int64_t result; // 0xfd8b2
    return result;
}

// Address range: 0xfd8d6 - 0xfd8df
int64_t function_fd8d6(int64_t a1) {
    // 0xfd8d6
    return function_fd91a((int64_t)&g5);
}

// Address range: 0xfd919 - 0xfd91a
int64_t function_fd919(void) {
    // 0xfd919
    int64_t v1; // 0xfd919
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0xfd91a - 0xfd91b
int64_t function_fd91a(int64_t a1) {
    // 0xfd91a
    int64_t result; // 0xfd91a
    return result;
}

// Address range: 0xfd959 - 0xfd961
int64_t function_fd959(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfd959
    return function_14cd9c8();
}

// Address range: 0xfd974 - 0xfd9dd
int64_t function_fd974(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0xfd974
    bool v3; // 0xfd974
    if (v3) {
        int32_t * v4 = (int32_t *)(v2 + (int64_t)&g2); // 0xfd976
        *v4 = *v4 + (int32_t)v2;
        int32_t * v5 = (int32_t *)(v1 - 95); // 0xfd97c
        *v5 = *v5 & (int32_t)v2;
        int32_t * v6 = (int32_t *)(a4 - 24); // 0xfd980
        *v6 = *v6 + (int32_t)a1;
        int64_t v7; // 0xfd974
        return (int64_t)&v7 ^ 225;
    }
    uint64_t v8 = a3 - v2; // 0xfd9b3
    *(char *)0x80ee42ba = *(char *)0x80ee42ba | (char)v2;
    char * v9 = (char *)(v2 - 114); // 0xfd9c9
    *v9 = *v9 - (char)v8;
    char * v10 = (char *)(v2 + 8 * v2); // 0xfd9cc
    *v10 = *v10 & (char)(v8 / 256);
    *(int32_t *)a1 = *(int32_t *)&v1;
    int64_t v11 = v1 + (v3 ? -4 : 4); // 0xfd9cf
    return function_464a9a5d(v11 + 0xffffff9d & 0xffffffff, v11, (int32_t)v8, 0x805e003a);
}

// Address range: 0xfd9dd - 0xfd9de
int64_t function_fd9dd(int64_t a1) {
    // 0xfd9dd
    int64_t result; // 0xfd9dd
    return result;
}

// Address range: 0xfdb1c - 0xfdb37
int64_t function_fdb1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_47e31222(); // 0xfdb1c
    int64_t v2; // 0xfdb1c
    *(int32_t *)a3 = (int32_t)v2 + (int32_t)a1;
    int32_t * v3 = (int32_t *)(a2 + 65); // 0xfdb27
    *v3 = *v3 | (int32_t)v1;
    bool v4; // 0xfdb1c
    int64_t v5 = v4 ? -4 : 4; // 0xfdb32
    int64_t v6 = a2; // 0xfdb2e
    int64_t v7 = v1 & 0xffff00ff | (int64_t)(int32_t)&g4; // 0xfdb2e
    while (true) {
        // 0xfdb2f
        *(int32_t *)v7 = *(int32_t *)v6;
        v6 += v5;
        v7 += v5;
    }
}

// Address range: 0xfdb37 - 0xfdb3c
int64_t function_fdb37(void) {
    // 0xfdb37
    return function_1f86d61();
}

// Address range: 0xfdb3c - 0xfdb87
int64_t function_fdb3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfdb3c
    int64_t v1; // 0xfdb3c
    uint64_t v2 = v1;
    int64_t v3 = a2;
    bool v4; // 0xfdb3c
    *(int64_t *)0xaf003812 = 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    __asm_int3();
    int64_t v5 = unknown_ffffffff840cd34d(); // 0xfdb47
    *(int32_t *)v2 = (int32_t)v2 - (int32_t)a3;
    *(char *)v3 = *(char *)&v3 | (char)a4;
    __asm_out_134((int16_t)a3, (char)(v2 / 256 + a3 + v5));
    int32_t * v6 = (int32_t *)(unknown_ffffffff8c7dd06d() + 60); // 0xfdb73
    *v6 = *v6 - 0x50ffc7ee;
    int64_t result = unknown_ffffffff91b0ce7c(); // 0xfdb76
    char * v7 = (char *)(a4 + 0x3c76b1c5); // 0xfdb7b
    *v7 = *v7 + (char)result;
    return result;
}

// Address range: 0xfdb90 - 0xfdc21
int64_t function_fdb90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 28); // 0xfdb91
    *v1 = *v1 + (char)a3;
    int64_t v2 = unknown_ffffffffd3d7069a(); // 0xfdb94
    char * v3 = (char *)v2; // 0xfdb99
    *v3 = *v3 + (char)v2;
    int64_t v4; // 0xfdb90
    int64_t v5 = 256 * (int64_t)(*(char *)(v4 + 0x4b129270) + (char)(v4 / 256)); // 0xfdb9b
    int64_t v6 = unknown_ffffffff95083ca7(); // 0xfdba1
    int64_t v7; // 0xfdb90
    int64_t v8 = (int64_t)&v7; // bp-8, 0xfdbac
    __asm_int(-85);
    uint32_t v9 = (int32_t)v4 % 32;
    uint64_t v10 = (int64_t)(33 - v9);
    uint32_t v11 = v9 - 1;
    bool v12; // 0xfdb90
    int64_t v13 = 0x4000 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12;
    int64_t result = v6 & 0xfe175ba2 | 0x1e8a45d; // 0xfdbaf
    int64_t v14 = (int64_t)&v8; // 0xfdbaf
    char * v15 = (char *)a3; // 0xfdbb4
    *v15 = *v15 + (char)result;
    int64_t v16; // 0xfdb90
    int64_t v17 = v16 & -0xff01 | v5; // 0xfdbb6
    __asm_outsb((int16_t)a3, *(char *)a2);
    int64_t v18 = *(int64_t *)v14; // 0xfdbba
    int64_t v19 = v14 + 8; // 0xfdbba
    *(int32_t *)(4 * a1 - 0x17b319fd + v17) = (int32_t)v19;
    int64_t v20 = v19 + result; // 0xfdbc2
    result = __asm_iretd();
    uint32_t v21 = (int32_t)a3; // 0xfdbca
    uint32_t v22 = (int32_t)v20; // 0xfdbca
    uint32_t v23 = v22 + v21; // 0xfdbca
    bool v24 = ((v23 ^ v21) & (v23 ^ v22)) < 0; // 0xfdbcc
    bool v25 = v23 < v21; // 0xfdbcc
    int32_t * v26; // 0xfdbcc
    uint32_t v27; // 0xfdbcc
    int32_t v28; // 0xfdbcc
    if (v9 != 0) {
        v26 = (int32_t *)result;
        v27 = *v26;
        v28 = v27 << v9 | (int32_t)(v23 < v21) << v11 | (int32_t)((int64_t)v27 >> v10);
        *v26 = v28;
        v24 = v9 == 1 ? v28 < 0 != v27 << v11 < 0 : ((v23 ^ v21) & (v23 ^ v22)) < 0;
        v25 = v27 << v11 < 0;
    }
    unsigned char v29 = llvm_ctpop_i8((char)v23); // 0xfdbca
    int64_t v30 = v23; // 0xfdbca
    bool v31 = v25;
    int64_t v32 = v31; // 0xfdbcf
    int64_t v33 = v13 | 64 * (int64_t)(v23 == 0) | 128 * (int64_t)(v23 < 0) | 16 * (int64_t)(v22 % 16 + v21 % 16 > 15) | 4 * (int64_t)(v29 % 2 == 0) | v32 | 2048 * (int64_t)v24 | 2; // 0xfdbcf
    v14 = (v20 & 0xffffffff) - 8;
    int64_t * v34 = (int64_t *)v14;
    *v34 = v33;
    while (v29 % 2 == 0) {
        // 0xfdc16
        if (!v24) {
            int32_t * v35 = (int32_t *)(v5 | v4 & 0xffff00ff); // 0xfdc19
            *v35 = *v35 / 2 | 0x80000000 * (int32_t)v31;
            *v34 = v33;
            return result;
        }
        v15 = (char *)v30;
        *v15 = *v15 + (char)result;
        v17 = v17 & -0xff01 | v5;
        __asm_outsb((int16_t)v30, *(char *)v18);
        v18 = *(int64_t *)v14;
        v19 = v14 + 8;
        *(int32_t *)(4 * a1 - 0x17b319fd + v17) = (int32_t)v19;
        v20 = v19 + result;
        result = __asm_iretd();
        v21 = (int32_t)v30;
        v22 = (int32_t)v20;
        v23 = v22 + v21;
        v24 = ((v23 ^ v21) & (v23 ^ v22)) < 0;
        v25 = v23 < v21;
        if (v9 != 0) {
            v26 = (int32_t *)result;
            v27 = *v26;
            v28 = v27 << v9 | (int32_t)(v23 < v21) << v11 | (int32_t)((int64_t)v27 >> v10);
            *v26 = v28;
            v24 = v9 == 1 ? v28 < 0 != v27 << v11 < 0 : ((v23 ^ v21) & (v23 ^ v22)) < 0;
            v25 = v27 << v11 < 0;
        }
        v29 = llvm_ctpop_i8((char)v23);
        v30 = v23;
        v31 = v25;
        v32 = v31;
        v33 = v13 | 64 * (int64_t)(v23 == 0) | 128 * (int64_t)(v23 < 0) | 16 * (int64_t)(v22 % 16 + v21 % 16 > 15) | 4 * (int64_t)(v29 % 2 == 0) | v32 | 2048 * (int64_t)v24 | 2;
        v14 = (v20 & 0xffffffff) - 8;
        v34 = (int64_t *)v14;
        *v34 = v33;
    }
    int32_t * v36 = (int32_t *)(v30 + 26); // 0xfdbd5
    *v36 = *v36 + (int32_t)a1;
    return result + v4 + v32;
}

// Address range: 0xfdc44 - 0xfdc4c
int64_t function_fdc44(int64_t a1) {
    // 0xfdc44
    int64_t v1; // 0xfdc44
    *(int32_t *)a1 = 2 * (int32_t)v1;
    return function_604a069a(v1 & 0xffffffff);
}

// Address range: 0xfdd91 - 0xfdd92
int64_t function_fdd91(int64_t a1) {
    // 0xfdd91
    int64_t result; // 0xfdd91
    return result;
}

// Address range: 0xfddf3 - 0xfde0d
int64_t function_fddf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xfddf3
    int64_t v1; // 0xfddf3
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0xfddf3
    if (v3 != 0) {
        *(int32_t *)v1 = v2 >> 32 - v3 | v2 << v3;
    }
    *(int32_t *)0xae04078 = v2;
    return v1 & 0xffffffff;
}

// Address range: 0xfdf74 - 0xfdf75
int64_t function_fdf74(void) {
    // 0xfdf74
    int64_t result; // 0xfdf74
    return result;
}

// Address range: 0xfdfb0 - 0xfdfb1
int64_t function_fdfb0(void) {
    // 0xfdfb0
    int64_t result; // 0xfdfb0
    return result;
}

// Address range: 0xfdfc6 - 0xfdfc8
int64_t function_fdfc6(void) {
    // 0xfdfc6
    return function_fdfb0();
}

// Address range: 0xfdfc8 - 0xfdfe3
int64_t function_fdfc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xfdfc8
    int64_t v1; // 0xfdfc8
    uint64_t v2 = v1;
    int32_t v3 = (int32_t)v1 + (int32_t)a1; // 0xfdfc8
    *(int32_t *)a4 = v3;
    if (v3 < 1) {
        char v4 = (char)v2 & -79; // 0xfdfdf
        return v2 & -0xff01 | 0x4000 * (int64_t)(v4 == 0) | 0x8000 * (int64_t)(v4 < 0) | 1024 * (int64_t)(llvm_ctpop_i8(v4) % 2 == 0) | 512;
    }
    int32_t * v5 = (int32_t *)(4 * v1 - 38 + v1); // 0xfdfcd
    *v5 = *v5 & (int32_t)v1;
    __asm_out_134((int16_t)a3, (char)v2);
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0xfe02c - 0xfe02d
int64_t function_fe02c(void) {
    // 0xfe02c
    int64_t result; // 0xfe02c
    return result;
}

// Address range: 0xfe060 - 0xfe0ef
int64_t function_fe060(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = a1; // 0xfe062
    *(int32_t *)-0x17053097 = *(int32_t *)-0x17053097 + v1;
    uint32_t v2 = (int32_t)a2; // 0xfe068
    uint32_t v3 = 2 * v2; // 0xfe068
    if (v3 >= v2 && v3 != 0) {
        // 0xfe06c
        return function_fe02c();
    }
    // 0xfe07c
    int64_t v4; // 0xfe060
    int64_t result = 2 * v4 & 0xffffffff; // 0xfe060
    if (llvm_ctpop_i8((char)v3) % 2 == 0) {
        // 0xfe0ed
        return result;
    }
    int32_t v5 = *(int32_t *)0x5917f086; // 0xfe07f
    *(int32_t *)0x5917f086 = (int32_t)(v3 < v2) + v1 + v5;
    return result;
}

// Address range: 0xfe0f0 - 0xfe16a
int64_t function_fe0f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = a2;
    char v2 = v1 + (char)((int64_t)&g1 >> 8); // 0xfe0f7
    if (((v2 ^ (char)((int64_t)&g1 >> 8)) & (v2 ^ v1)) >= 0) {
        // 0xfe0fc
        bool v3; // 0xfe0f0
        return function_ffffffffc311c951((v3 ? -1 : 1) + a1);
    }
    // 0xfe146
    int64_t v4; // 0xfe0f0
    int64_t v5 = 2 * v4; // 0xfe146
    int32_t * v6 = (int32_t *)(v5 & 0xffffffff); // 0xfe148
    *v6 = *v6 + (int32_t)v5;
    __asm_hlt();
    return unknown_ffffffffe403c26b();
}

// Address range: 0xfe185 - 0xfe18a
int64_t function_fe185(void) {
    // 0xfe185
    return function_ffffffffaf05ca83();
}

// Address range: 0xfe198 - 0xfe19b
int64_t function_fe198(void) {
    // 0xfe198
    int16_t v1; // 0xfe198
    return (uint16_t)v1;
}

// Address range: 0xfe1ae - 0xfe1af
int64_t function_fe1ae(int64_t a1) {
    // 0xfe1ae
    int64_t result; // 0xfe1ae
    return result;
}

// Address range: 0xfe1d1 - 0xfe1d6
int64_t function_fe1d1(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 78); // 0xfe1d1
    *v1 = *v1 + (int32_t)a2;
    return function_fe248();
}

// Address range: 0xfe1d6 - 0xfe1d7
int64_t function_fe1d6(void) {
    // 0xfe1d6
    int64_t result; // 0xfe1d6
    return result;
}

// Address range: 0xfe1dc - 0xfe1fa
int64_t function_fe1dc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0xfe1dc
    int64_t v1; // 0xfe1dc
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)a1; // 0xfe1e0
    uint32_t v4 = (int32_t)v2; // 0xfe1e0
    int32_t v5 = v4 + v3; // 0xfe1e0
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0xfe1e0
    *(int32_t *)((v2 & -0xff01 | 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v5 < v3) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v4 % 16 + v3 % 16 > 15) | 4 * (int64_t)(v6 % 2 == 0)) | 512) + 0x107c8df) = -0x17a9b1a8;
    int32_t * v7 = (int32_t *)((a4 - 256 * (v2 + (int64_t)((char)(v2 / 256) < (char)(a4 / 256))) & 0xff00 | a4 & -0xff01) - 0x6e399d0c); // 0xfe1ed
    *v7 = *v7 + (int32_t)v1;
    return function_ffffffff8cdb875a(v5);
}

// Address range: 0xfe1fe - 0xfe201
int64_t function_fe1fe(int64_t a1) {
    // 0xfe1fe
    int64_t result; // 0xfe1fe
    return result;
}

// Address range: 0xfe248 - 0xfe24d
int64_t function_fe248(void) {
    // 0xfe248
    int64_t result; // 0xfe248
    return result;
}

// Address range: 0xfe24f - 0xfe252
int64_t function_fe24f(void) {
    // 0xfe24f
    int64_t result; // 0xfe24f
    return result;
}

// Address range: 0xfe2ab - 0xfe2b7
int64_t function_fe2ab(void) {
    // 0xfe2ab
    int64_t v1; // 0xfe2ab
    char * v2 = (char *)(v1 + 0x39001e8); // 0xfe2ab
    *v2 = *v2 & 96;
    return function_ffffffffbc8e48ff();
}

// Address range: 0xfe36a - 0xfe39b
int64_t function_fe36a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xfe36a
    int64_t v1; // 0xfe36a
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 | v1);
    char * v3 = (char *)(v2 + 0x28e654d7); // 0xfe36c
    char v4 = *v3 + (char)(v1 / 256); // 0xfe36c
    *v3 = v4;
    int64_t result = unknown_ffffffffd0add278(); // 0xfe372
    if (v4 < 1) {
        // 0xfe3f0
        return result;
    }
    // 0xfe37b
    return function_ffffffffe84e0d58();
}

// Address range: 0xfe39b - 0xfe39c
int64_t function_fe39b(int64_t a1) {
    // 0xfe39b
    int64_t result; // 0xfe39b
    return result;
}

// Address range: 0x1a0485 - 0x1a04d5
int64_t function_1a0485(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x1a0485
    int64_t v1; // bp-8, 0x1a0485
    v1 = (int64_t)&v1;
    return function_c57b8(a1);
}

// Address range: 0x1a04d5 - 0x1a0616
int64_t function_1a04d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a04d5
    return function_c57b8(a1);
}

// Address range: 0x1a0616 - 0x1a077e
int64_t function_1a0616(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a0616
    int64_t v1; // bp-48, 0x1a0616
    v1 = (int64_t)&v1 + 16;
    return function_c57b8(a1);
}

// Address range: 0x3fab9e - 0x3fac81
int64_t function_3fab9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x3fab9e
    int64_t result; // 0x3fab9e
    return result;
}

// Address range: 0x3fac90 - 0x3fad6a
int64_t function_3fac90(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int32_t a5, int64_t a6) {
    char v1 = *(char *)(a1 + 0x120f2fd5); // 0x3fac90
    int64_t v2; // 0x3fac90
    unsigned char v3 = *(char *)(8 * v2 + v2) & (char)a3; // 0x3fac96
    int64_t v4 = a3 & -256 | (int64_t)v3; // 0x3fac96
    int32_t v5 = v2; // 0x3fac99
    *(int32_t *)a1 = v5;
    int64_t result; // 0x3fac90
    bool v6; // 0x3fac90
    if ((a4 & -256 || (int64_t)((char)v6 + (char)a4 - v1)) == 0) {
        if ((char)v2 >= 0) {
            int64_t v7 = v6 ? -1 : 1; // 0x3fad09
            int64_t v8 = v7 + a2; // 0x3fad0c
            int64_t v9 = v6 ? -4 : 4; // 0x3fac99
            *(int32_t *)v2 = v5 - (int32_t)v2;
            return __asm_sti(v9 + a1 + 2 * v7, v8, (int32_t)v4 - (int32_t)v8, 0);
        }
    } else {
        // 0x3fac9e
        result = v2 & 0xffffffff;
        if (v3 != 0) {
            char * v10 = (char *)(a2 - 0x59b78189); // 0x3facbb
            *v10 = *v10 + (char)(a3 / 256);
            char * v11 = (char *)(8 * v2 - 108 + (v2 & 0xffffff00 | (int64_t)__asm_in_135((int16_t)v4))); // 0x3facc2
            *v11 = *v11 - 123;
            return __asm_int3();
        }
    }
    // 0x3faca1
    return result;
}

// Address range: 0x3fadb5 - 0x3fadff
int64_t function_3fadb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3fadb5
    int64_t v1; // 0x3fadb5
    int64_t v2 = v1;
    int64_t v3 = (256 * v1 ^ v2) & 0xff00 | v2 & 0xffff00ff; // 0x3fadb8
    char * v4 = (char *)v3; // 0x3fadba
    *v4 = *v4 & 79;
    int64_t v5 = v1 | 0xba885a5a;
    int64_t v6 = v5 & 0xffffffff ^ 0x45112500; // 0x3fadc2
    int64_t v7 = (v6 | 256 * a4) & 0xff00 | v6 & 0xffff00ff; // 0x3fadc7
    __asm_out_134((int16_t)a3, (char)v5);
    bool v8; // 0x3fadb5
    int64_t v9 = (v8 ? -1 : 1) + a1; // 0x3fadce
    char * v10 = (char *)(v7 - 0x32ad88e5); // 0x3fadd9
    *v10 = *v10 - 16;
    unsigned char v11 = *(char *)(v9 - 78); // 0x3fade0
    int32_t v12 = *(int32_t *)(v9 - 0x7c3ca96); // 0x3fade3
    unsigned char v13 = *(char *)(v7 + 0x4ca21e90); // 0x3fadec
    int32_t * v14 = (int32_t *)(v9 - 0x6b538278); // 0x3fadf4
    int32_t v15 = *v14; // 0x3fadf4
    *v14 = v15 - (int32_t)v9 + (int32_t)(v13 > (char)(((int32_t)v3 - v12 + (int32_t)(v11 < (char)v2)) / 256));
    return (a4 + 87) % 256 | a4 & 0xffffff00;
}

// Address range: 0x3fae43 - 0x3fae48
int64_t function_3fae43(int64_t a1, int64_t a2) {
    // 0x3fae43
    int64_t result; // 0x3fae43
    return result;
}

// Address range: 0x3fae4b - 0x3fae59
int64_t function_3fae4b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3fae4b
    int64_t v1; // 0x3fae4b
    uint64_t v2 = v1;
    char v3 = *(char *)(v2 + 0x5327312); // 0x3fae4b
    bool v4; // 0x3fae4b
    return 256 * (int64_t)((char)v4 - v3 + (char)(v2 / 256)) | v2 & -0xff01;
}

// Address range: 0x3fae5a - 0x3fae5d
int64_t function_3fae5a(void) {
    // 0x3fae5a
    int64_t result; // 0x3fae5a
    return result;
}

// Address range: 0x3fae5d - 0x3fae6b
int64_t function_3fae5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3fae5d
    __asm_wait(a1, a2, a3, a4);
    int32_t * v1 = (int32_t *)(a2 + 0x422069d); // 0x3fae60
    *v1 = *v1 + (int32_t)a2;
    return function_22d72295();
}

// Address range: 0x3fae6b - 0x3fae6d
int64_t function_3fae6b(void) {
    // 0x3fae6b
    int64_t result; // 0x3fae6b
    return result;
}

// Address range: 0x3fae76 - 0x3faec8
int64_t function_3fae76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3fae76
    int64_t v1; // 0x3fae76
    uint32_t v2 = (int32_t)v1; // 0x3fae80
    uint32_t v3 = *(int32_t *)(v1 - 0x46ffbb6c); // 0x3fae80
    int64_t v4; // 0x3fae76
    if (v3 >= v2) {
        v4 = function_3fae43(a1, (int64_t)&g5);
    }
    int64_t v5 = v4 & -256 | (int64_t)*(char *)0x407f656a3d100059; // 0x3fae9b
    if (((v2 - v3 ^ v2) & (v3 ^ v2)) < 0) {
        v5 = __asm_wait(a1, a2, a3, a4);
    }
    // 0x3fae9d
    bool v6; // 0x3fae76
    int64_t v7 = v6 ? -4 : 4; // 0x3fae9d
    int64_t v8 = (int64_t)*(int32_t *)(a2 - 79 + v7); // 0x3fae9e
    int64_t v9 = -0x61ea37b5 * v8; // 0x3fae9e
    int16_t v10 = a3; // 0x3faea5
    int32_t v11 = __asm_insd(v10); // 0x3faea5
    int32_t * v12 = (int32_t *)(v7 + a1); // 0x3faea5
    *v12 = v11;
    int32_t * v13 = (int32_t *)(4 * v1 + a4); // 0x3faea6
    uint32_t v14 = *v13; // 0x3faea6
    uint32_t v15 = v14 + 0x2f2a8410 + (int32_t)(v9 != -0x61ea37b500000000 * v8 >> 32); // 0x3faea6
    bool v16 = v9 != -0x61ea37b500000000 * v8 >> 32 ? v15 <= v14 : v14 > 0xd0d57bef; // 0x3faea6
    *v13 = v15;
    uint64_t v17 = v5 + 40 + (int64_t)v16; // 0x3faeae
    int64_t v18 = v17 % 256 | v5 & -256; // 0x3faeae
    *(char *)0x61413e4359114a9f = (char)v17;
    char * v19 = (char *)(v18 + 0xffffff99 & 0xffffffff); // 0x3faebe
    unsigned char v20 = *v19; // 0x3faebe
    unsigned char v21 = v20 + (char)v9; // 0x3faebe
    *v19 = v21;
    *v12 = __asm_insd(v10);
    return (int64_t)(v21 < v20) + a3 + v18 & 0xffffffff;
}

// Address range: 0x3faec8 - 0x3faec9
int64_t function_3faec8(void) {
    // 0x3faec8
    int64_t result; // 0x3faec8
    return result;
}

// Address range: 0x3faf17 - 0x3faf27
int64_t function_3faf17(int64_t a1, int64_t a2) {
    // 0x3faf17
    return function_fffffffff4d81e77();
}

// Address range: 0x3faf50 - 0x3faf53
int64_t function_3faf50(int64_t a1) {
    // 0x3faf50
    int64_t result; // 0x3faf50
    return result;
}

// Address range: 0x3faf56 - 0x3faf5b
int64_t function_3faf56(int64_t a1, int64_t a2) {
    // 0x3faf56
    int64_t result; // 0x3faf56
    return result;
}

// Address range: 0x3faff6 - 0x3fafff
int64_t function_3faff6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3faff6
    int64_t result; // 0x3faff6
    return result;
}

// Address range: 0x3fb039 - 0x3fb03c
int64_t function_3fb039(void) {
    // 0x3fb039
    int64_t result; // 0x3fb039
    return result;
}

// Address range: 0x3fb068 - 0x3fb06b
int64_t function_3fb068(void) {
    // 0x3fb068
    int64_t result; // 0x3fb068
    return result;
}

// Address range: 0x3fb06d - 0x3fb073
int64_t function_3fb06d(int64_t a1) {
    // 0x3fb06d
    int64_t result; // 0x3fb06d
    return result;
}

// Address range: 0x3fb078 - 0x3fb086
int64_t function_3fb078(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(8 * a2 + a3); // 0x3fb078
    bool v2; // 0x3fb078
    *v1 = *v1 + 0x2197022d + (int32_t)v2;
    int64_t result; // 0x3fb078
    return result;
}

// Address range: 0x3fb0f0 - 0x3fb0f3
int64_t function_3fb0f0(void) {
    // 0x3fb0f0
    int64_t result; // 0x3fb0f0
    return result;
}

// Address range: 0x3fb0fd - 0x3fb0fe
int64_t function_3fb0fd(void) {
    // 0x3fb0fd
    int64_t result; // 0x3fb0fd
    return result;
}

// Address range: 0x3fb114 - 0x3fb117
int64_t function_3fb114(void) {
    // 0x3fb114
    int64_t result; // 0x3fb114
    return result;
}

// Address range: 0x3fb125 - 0x3fb128
int64_t function_3fb125(void) {
    // 0x3fb125
    int64_t result; // 0x3fb125
    return result;
}

// Address range: 0x3fb147 - 0x3fb148
int64_t function_3fb147(void) {
    // 0x3fb147
    int64_t result; // 0x3fb147
    return result;
}

// Address range: 0x3fb14c - 0x3fb14d
int64_t function_3fb14c(void) {
    // 0x3fb14c
    int64_t result; // 0x3fb14c
    return result;
}

// Address range: 0x3fb150 - 0x3fb176
int64_t function_3fb150(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x3fb150
    __asm_out_137(83, (int32_t)v2);
    int32_t * v3 = (int32_t *)(a4 + 0xdc1ca05); // 0x3fb159
    int32_t v4 = *v3 & 0x3f4d7109; // 0x3fb159
    *v3 = v4;
    int64_t v5; // 0x3fb150
    if (v4 != 0) {
        v5 = function_3fb14c();
    }
    // 0x3fb167
    *(char *)v1 = *(char *)&v1 & (char)v5;
    return function_3fb147();
}

// Address range: 0x3fb1a6 - 0x3fb1a9
int64_t function_3fb1a6(int64_t a1) {
    // 0x3fb1a6
    int64_t result; // 0x3fb1a6
    return result;
}

// Address range: 0x3fb22d - 0x3fb22e
int64_t function_3fb22d(int64_t a1) {
    // 0x3fb22d
    int64_t result; // 0x3fb22d
    return result;
}

// Address range: 0x3fb319 - 0x3fb31a
int64_t function_3fb319(void) {
    // 0x3fb319
    int64_t result; // 0x3fb319
    return result;
}

// Address range: 0x3fb369 - 0x3fb377
int64_t function_3fb369(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x3fb369
    if (v1 != 0) {
        int64_t v2; // 0x3fb369
        char * v3 = (char *)(v2 + 62); // 0x3fb369
        *v3 = *v3 >> v1;
    }
    return function_3fb319();
}

// Address range: 0x3fb59e - 0x3fb59f
int64_t function_3fb59e(void) {
    int64_t result = __asm_wait((int64_t)&g5, (int64_t)&g5, (int64_t)&g5, (int64_t)&g5); // 0x3fb59e
    return result;
}

// Address range: 0x3fb5a8 - 0x3fb5b8
int64_t function_3fb5a8(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 94); // 0x3fb5a8
    bool v2; // 0x3fb5a8
    *v1 = (int32_t)v2 - (int32_t)a2 + *v1;
    int64_t v3; // 0x3fb5a8
    int64_t v4 = -1 - (char)v3 < (char)v3 ? 0xd342fd19 : 0xd342fd18; // 0x3fb5af
    return (v3 & 0xffffff00 | 211) - v4 & 0xffffffbb;
}

// Address range: 0x3fb5b8 - 0x3fb5c3
int64_t function_3fb5b8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3fb5b8
    *(char *)(a4 - 0x5ff7f178) = (char)(a4 / 256);
    return function_ffffffffd71f6ff3();
}

// Address range: 0x3fb5c3 - 0x3fb5ce
int64_t function_3fb5c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3fb5c3
    int64_t result; // 0x3fb5c3
    bool v1; // 0x3fb5c3
    if (!v1) {
        result = function_3fb58d();
    }
    // 0x3fb5c5
    return result;
}

// Address range: 0x3fb5ce - 0x3fb621
int64_t function_3fb5ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3fb5ce
    int64_t v1; // 0x3fb5ce
    int64_t v2 = v1;
    int32_t v3 = *(int32_t *)(v1 + 116 + 2 * v1) | (int32_t)v1; // 0x3fb5ce
    if (v3 < 0) {
        int64_t v4 = __asm_int3(); // 0x3fb618
        return 2 * v4 & 254 | v4 & -256;
    }
    if (v3 == 0) {
        // 0x3fb5d6
        return v2 & 0xffffffff ^ 0x662ab61e;
    }
    // 0x3fb5f1
    *(char *)a1 = (char)a3 + (char)a1 - (char)v3;
    return (v2 + v1 / 256) % 256 | v2 & -256;
}

// Address range: 0x3fb621 - 0x3fb624
int64_t function_3fb621(void) {
    // 0x3fb621
    int64_t result; // 0x3fb621
    return result;
}

// Address range: 0x3fb65c - 0x3fb65f
int64_t function_3fb65c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3fb65c
    int64_t result; // 0x3fb65c
    return result;
}

// Address range: 0x3fb6dd - 0x3fb6e0
int64_t function_3fb6dd(int64_t a1) {
    // 0x3fb6dd
    int64_t result; // 0x3fb6dd
    return result;
}

// Address range: 0x3fb73e - 0x3fb74f
int64_t function_3fb73e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3fb73e
    int64_t v1; // 0x3fb73e
    __asm_out_137(63, (int32_t)v1);
    float80_t v2; // 0x3fb73e
    *(int32_t *)(a4 - 0x155cf09) = (int32_t)v2;
    return v1 + 0x17655507 & 0xffffffff;
}

// Address range: 0x3fb799 - 0x3fb79f
int64_t function_3fb799(void) {
    // 0x3fb799
    return function_682fb91a();
}

// Address range: 0x3fb7a0 - 0x3fb8d1
int64_t function_3fb7a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3fb7a0
    int64_t v1; // 0x3fb7a0
    int64_t v2 = v1;
    int64_t v3 = a3;
    float80_t v4; // 0x3fb7a0
    __asm_fbld(v4);
    int32_t v5 = a2; // 0x3fb7bc
    bool v6; // 0x3fb7a0
    int64_t v7 = (v6 ? -4 : 4) + a1; // 0x3fb7be
    uint32_t v8 = *(int32_t *)(v7 + 0x7443df62); // 0x3fb7bf
    uint32_t v9 = v8 + v5; // 0x3fb7bf
    if (v9 < 0 != ((v9 ^ v5) & (v9 ^ v8)) < 0) {
        // 0x3fb7fe
        __asm_out_137(46, v9);
        *(int64_t *)v2 = v2 | v1;
        char * v10 = (char *)(v7 - 105); // 0x3fb808
        *v10 = *v10 + (char)(v3 / 256);
        return v1 + 8 & 0xffffffff;
    }
    int64_t result = v9; // 0x3fb7bf
    if (v8 <= -1 - v5) {
        // 0x3fb7cd
        return result & 0xffffff00 | (int64_t)((v9 + 90) % 256);
    }
    if (a4 != 1 != (v9 == 0)) {
        // 0x3fb820
        return result;
    }
    // 0x3fb856
    int32_t v11; // 0x3fb7a0
    *(char *)(v3 + 8 * v1) = 126 * (char)v11;
    *(int32_t *)v3 = v11 + 1 + *(int32_t *)&v3;
    char * v12 = (char *)(v3 + 117); // 0x3fb85b
    *v12 = *v12 | (char)(v9 / 256);
    *(char *)v7 = __asm_insb((int16_t)v3);
    int32_t * v13 = (int32_t *)(v7 - 0x218db7e7); // 0x3fb864
    *v13 = *v13 ^ -0x55d1df24;
    return result & 0x67303ed9;
}

// Address range: 0x3fb8d2 - 0x3fb8db
int64_t function_3fb8d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3fb8d2
    int64_t v1; // 0x3fb8d2
    int64_t v2 = v1;
    __asm_out_137(80, (int32_t)v2);
    *(int32_t *)a1 = (int32_t)(v1 & a4);
    return (v2 + 156) % 256 | v2 & -256;
}

// Address range: 0x3fb925 - 0x3fb926
int64_t function_3fb925(void) {
    // 0x3fb925
    int64_t result; // 0x3fb925
    return result;
}

// Address range: 0x3fb948 - 0x3fb94b
int64_t function_3fb948(int64_t a1) {
    // 0x3fb948
    int64_t result; // 0x3fb948
    return result;
}

// Address range: 0x3fb963 - 0x3fb968
int64_t function_3fb963(void) {
    // 0x3fb963
    int64_t v1; // 0x3fb963
    int64_t v2 = v1;
    bool v3; // 0x3fb963
    return (v2 + 234 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x3fb987 - 0x3fb995
int64_t function_3fb987(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3fb987
    return a1 & 0xffffffff;
}

// Address range: 0x3fb99c - 0x3fb99d
int64_t function_3fb99c(void) {
    // 0x3fb99c
    int64_t result; // 0x3fb99c
    return result;
}

// Address range: 0x3fb9a1 - 0x3fb9a3
int64_t function_3fb9a1(void) {
    // 0x3fb9a1
    int64_t v1; // 0x3fb9a1
    return function_3fb9f8(v1, v1, v1);
}

// Address range: 0x3fb9bf - 0x3fb9c5
int64_t function_3fb9bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3fb9bf
    int64_t result; // 0x3fb9bf
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x3fb9f8 - 0x3fb9f9
int64_t function_3fb9f8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3fb9f8
    return __asm_in_133((int16_t)a3);
}

// Address range: 0x3fba60 - 0x3fba61
int64_t function_3fba60(int64_t a1) {
    // 0x3fba60
    int64_t result; // 0x3fba60
    return result;
}

// Address range: 0x3fba61 - 0x3fba63
int64_t function_3fba61(void) {
    // 0x3fba61
    int64_t result; // 0x3fba61
    return result;
}

// Address range: 0x3fba99 - 0x3fba9a
int64_t function_3fba99(void) {
    // 0x3fba99
    int64_t result; // 0x3fba99
    return result;
}

// Address range: 0x3fba9a - 0x3fbaa1
int64_t function_3fba9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 47); // 0x3fba9a
    *v1 = *v1 & (int32_t)a4;
    int64_t v2; // 0x3fba9a
    return v2 & -232;
}

// Address range: 0x3fbab4 - 0x3fbb2a
int64_t function_3fbab4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3fbab4
    int64_t v1; // 0x3fbab4
    int64_t v2 = v1;
    int16_t v3 = a3; // 0x3fbabe
    __asm_outsd(v3, (int32_t)v1);
    *(int32_t *)a4 = (int32_t)(v1 ^ a2);
    char v4 = (char)a2 - 48; // 0x3fbad1
    *(char *)a3 = v4;
    char v5 = *(char *)(8 * v1 + a4); // 0x3fbad6
    int64_t v6 = a4 & -256 | (int64_t)(v5 ^ (char)a4); // 0x3fbad6
    char v7 = v4 ^ -20; // 0x3fbadb
    if (v6 != 1 == v7 == 0) {
        function_3fba99();
    }
    uint64_t v8 = v1 + 103; // 0x3fbabc
    int64_t v9; // 0x3fbab4
    if (v7 < 0) {
        int64_t v10 = v8 % 256 | v1 & 0xffffff00; // 0x3fbabc
        __asm_outsb(v3, *(char *)v10);
        int64_t v11 = (int64_t)(*(int32_t *)v10 | (int32_t)v9); // 0x3fbb00
        v9 = v11;
        char * v12 = (char *)(2 * v1 - 0x1aa81fe8 + v11); // 0x3fbb04
        *v12 = 2 * *v12;
        return (v2 + 196) % 256 | v2 & 0xffffff00;
    }
    unsigned char v13 = (char)v8; // 0x3fbae1
    bool v14 = v13 > 238; // 0x3fbae5
    if (v13 >= 238) {
        int32_t v15 = *(int32_t *)&v9; // 0x3fbae9
        *(int32_t *)v9 = (int32_t)(v13 > 238) - (int32_t)a1 + v15;
        *(char *)a1 = __asm_insb(v3);
        v14 = false;
    }
    char * v16 = (char *)(v6 + 104); // 0x3fbaee
    *v16 = (char)v14 + (char)a3 + *v16;
    return function_ffffffffc53037cd();
}

// Address range: 0x3fbb45 - 0x3fbb52
int64_t function_3fbb45(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3fbb45
    int64_t result; // 0x3fbb45
    int32_t * v1 = (int32_t *)(result + 0x1cb37c10); // 0x3fbb45
    bool v2; // 0x3fbb45
    *v1 = *v1 + (int32_t)result + (int32_t)v2;
    return result;
}

// Address range: 0x3fbb69 - 0x3fbb71
int64_t function_3fbb69(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3fbb69
    int64_t result; // 0x3fbb69
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3fbb88 - 0x3fbb8e
int64_t function_3fbb88(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3fbb88
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_53192c0f();
}
