/*
 * Targeted RetDec C for native executable gap queue batch 848.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1784aa-0x1786aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1786aa-0x1788aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1788aa-0x178aaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x178aaa-0x178caa rank=- name=- kind=- bytes=- uncovered=-
 *   0x178caa-0x178eaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x2dd70e-0x2dd90e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2dd90e-0x2ddb0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ddb0e-0x2ddd0e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1548aa0();
int64_t function_1784aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1784fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_178524(void);
int64_t function_1785a7(void);
int64_t function_178607(int64_t a1, int64_t a2, int64_t a3);
int64_t function_178624(void);
int64_t function_178630(void);
int64_t function_178634(int64_t a1);
int64_t function_17864d(void);
int64_t function_178650(void);
int64_t function_17865f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_178673(int64_t a1);
int64_t function_1786cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_178724(int64_t a1, int64_t a2, int64_t a3);
int64_t function_178753(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_178778(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_17878c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1787e4(void);
int64_t function_1787ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17886f(void);
int64_t function_1788d3(int64_t a1);
int64_t function_178932(void);
int64_t function_178957(void);
int64_t function_1789a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1789ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_178a25(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_178a3e(void);
int64_t function_178a44(void);
int64_t function_178a4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_178b11(void);
int64_t function_178b42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_178c1b(int64_t a1);
int64_t function_178c3c(void);
int64_t function_178c85(void);
int64_t function_178d1e(void);
int64_t function_178d69(int64_t a1);
int64_t function_178e19(int64_t a1);
int64_t function_178e70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_178e94(void);
int64_t function_178e97(void);
int64_t function_178e9c(int64_t a1, int64_t a2);
int64_t function_2dd70e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2dd7e1(int64_t a1, int64_t a2);
int64_t function_2dd944(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2dda4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_caf2a();
int64_t function_ffffffffb4a4d022();
int64_t function_ffffffffdbd281ee();
int64_t function_ffffffffe0bcdf0a();
int64_t function_ffffffffe84d92a0();
int64_t unknown_17c96ccf();
int64_t unknown_505d287e();
int64_t unknown_5518c732();
int64_t unknown_6e182fee();
int64_t unknown_ea91bd3();
int64_t unknown_ffffffffae601d1a();
int64_t unknown_ffffffffb0ddb780();
int64_t unknown_ffffffffbd11dd8b();
int64_t unknown_ffffffffda73e95e();
int64_t unknown_ffffffffdc1cee9d();
int64_t unknown_ffffffffe9125ce4();

// Address range: 0x1784aa - 0x1784fd
int64_t function_1784aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1784aa
    int64_t v1; // 0x1784aa
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a2;
    bool v5; // 0x1784aa
    if (!v5) {
        // 0x1784cf
        *(char *)v2 = (char)v2 + 112;
        int64_t v6 = v2 + 0x1e80002; // 0x1784d2
        *(int32_t *)a1 = *(int32_t *)&v4;
        int64_t v7 = v5 ? -4 : 4; // 0x1784d7
        uint64_t v8 = v7 + a1; // 0x1784d7
        *(char *)v3 = *(char *)&v3 + (char)v6;
        char v9 = *(char *)(v8 % 256 + v1); // 0x1784df
        __asm_hlt(v6 & 0xffffffff, v4 + v7, (int32_t)v8 >> 31, a4 & -256 | (int64_t)(v9 + (char)a4));
        __asm_in(-99);
        unknown_6e182fee();
        return __asm_iretd();
    }
    if (v5 || false) {
        while ((v2 & 254) != 0) {
            // continue -> 0x1784fb
        }
        // 0x1784fd
        return a4 & 0xffffffff;
    }
    int32_t * v10 = (int32_t *)(v2 - 0x4dc3b8f6); // 0x1784b4
    int32_t v11 = v1;
    *v10 = v11 + 8 + *v10;
    *(int32_t *)a1 = (int32_t)v2;
    *(int32_t *)v3 = *(int32_t *)&v3 + v11;
    *(int64_t *)v1 = -31;
    return unknown_17c96ccf((v5 ? -4 : 4) + a1);
}

// Address range: 0x1784fe - 0x178507
int64_t function_1784fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1784fe
    int64_t result; // 0x1784fe
    return result;
}

// Address range: 0x178524 - 0x178529
int64_t function_178524(void) {
    // 0x178524
    return function_ffffffffb4a4d022();
}

// Address range: 0x1785a7 - 0x1785a8
int64_t function_1785a7(void) {
    // 0x1785a7
    int64_t result; // 0x1785a7
    return result;
}

// Address range: 0x178607 - 0x178617
int64_t function_178607(int64_t a1, int64_t a2, int64_t a3) {
    // 0x178607
    int64_t v1; // 0x178607
    unsigned char v2 = (char)v1;
    unsigned char v3 = (char)v1 + v2; // 0x178607
    *(char *)a1 = v3;
    int64_t v4; // 0x178607
    *(int32_t *)v4 = *(int32_t *)&v4 + 0x1204e85d + (int32_t)(v3 < v2);
    return function_1785a7();
}

// Address range: 0x178624 - 0x178627
int64_t function_178624(void) {
    // 0x178624
    int64_t result; // 0x178624
    return result;
}

// Address range: 0x178630 - 0x178631
int64_t function_178630(void) {
    // 0x178630
    int64_t result; // 0x178630
    return result;
}

// Address range: 0x178634 - 0x17863f
int64_t function_178634(int64_t a1) {
    // 0x178634
    int64_t v1; // 0x178634
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x17864d - 0x17864f
int64_t function_17864d(void) {
    // 0x17864d
    int64_t result; // 0x17864d
    return result;
}

// Address range: 0x178650 - 0x178655
int64_t function_178650(void) {
    // 0x178650
    return function_ffffffffe0bcdf0a();
}

// Address range: 0x17865f - 0x178668
int64_t function_17865f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17865f
    int64_t v1; // 0x17865f
    int64_t result = v1;
    *(char *)result = (char)(result & a4);
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x178673 - 0x1786af
int64_t function_178673(int64_t a1) {
    // 0x178673
    int64_t v1; // 0x178673
    uint32_t v2 = -0x6dc7403f - (int32_t)v1; // 0x17867d
    int32_t * v3 = (int32_t *)((int64_t)v2 - 119);
    int64_t v4 = unknown_505d287e(); // 0x17867d
    int64_t v5; // 0x178673
    uint64_t v6 = v5;
    int64_t v7 = v4;
    char v8 = __asm_in_133((int16_t)v2); // 0x17867f
    *v3 = *v3 + (int32_t)v1;
    int64_t v9 = v6 - 1; // 0x178692
    int64_t v10 = __asm_sti(); // 0x178692
    if (v9 != 0) {
        v10 = function_178630();
    }
    // 0x178694
    v4 = v10;
    while ((int32_t)((v7 | (int64_t)v8) & 0xffffff00 || (int64_t)((v8 & -77) + (char)(v6 / 256))) >= 0x2001e802) {
        // 0x17867f
        v6 = v9;
        v7 = v4;
        v8 = __asm_in_133((int16_t)v2);
        *v3 = *v3 + (int32_t)v1;
        v9 = v6 - 1;
        v10 = __asm_sti();
        if (v9 != 0) {
            v10 = function_178630();
        }
        // 0x178694
        v4 = v10;
    }
    int32_t * v11 = (int32_t *)(a1 - 0x47994e3b); // 0x178697
    *v11 = *v11 + (int32_t)v1;
    *(char *)0x52c2888d = *(char *)0x52c2888d - (char)v9;
    return v4 | 160;
}

// Address range: 0x1786cc - 0x1786e0
int64_t function_1786cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ea91bd3(); // 0x1786cd
    char * v1 = (char *)(result + 0x4a227e0e); // 0x1786d9
    *v1 = *v1 - (char)a3;
    return result;
}

// Address range: 0x178724 - 0x178729
int64_t function_178724(int64_t a1, int64_t a2, int64_t a3) {
    // 0x178724
    int64_t result; // 0x178724
    return result;
}

// Address range: 0x178753 - 0x178758
int64_t function_178753(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x178753
    int64_t result; // 0x178753
    return result;
}

// Address range: 0x178778 - 0x17878b
int64_t function_178778(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x178778
    int64_t v1; // 0x178778
    int64_t v2 = v1;
    int64_t v3; // 0x178778
    bool v4; // 0x178778
    if (!v4) {
        // 0x17877a
        v3 = unknown_ffffffffb0ddb780();
    }
    // 0x178781
    *(char *)v2 = (char)(v3 / 256) + (char)v2;
    int32_t * v5 = (int32_t *)(a4 + 0x1a218672); // 0x178784
    *v5 = *v5 + (int32_t)a3;
    return v3 & -0xff01 | 256 * v2 & 0xff00;
}

// Address range: 0x17878c - 0x1787a8
int64_t function_17878c(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 + 0x149f44d4); // 0x17879d
    *v1 = *v1 + (char)*(int32_t *)(a3 + 0x6f91113d);
    return function_ffffffffe84d92a0(0xcb01e8f5);
}

// Address range: 0x1787e4 - 0x1787e5
int64_t function_1787e4(void) {
    // 0x1787e4
    int64_t result; // 0x1787e4
    return result;
}

// Address range: 0x1787ec - 0x178869
int64_t function_1787ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1787ec
    int64_t v1; // 0x1787ec
    int64_t v2 = v1 & 0xffffffff; // 0x1787ec
    unsigned char v3 = (char)a4;
    unsigned char v4 = (char)v1; // 0x1787ed
    unsigned char v5 = v4 + v3; // 0x1787ed
    *(char *)v2 = v5;
    int32_t * v6 = (int32_t *)(v1 + 7); // 0x1787ef
    *v6 = (v5 < v3 ? -23 : -24) + *v6;
    int32_t * v7 = (int32_t *)((a4 & 0xffffffff) + 0x5e49f807); // 0x1787f3
    uint32_t v8 = (int32_t)a3; // 0x1787f3
    *v7 = *v7 + v8;
    unsigned char v9 = v4 % 32; // 0x1787f9
    if (v9 != 0) {
        char * v10 = (char *)(v1 + 0x772a3465); // 0x1787f9
        *v10 = *v10 << v9;
    }
    uint32_t v11 = 0x10000 * (int32_t)a4 >> 16; // 0x1787ff
    int32_t * v12 = (int32_t *)(v1 - 8); // 0x178806
    *v12 = *v12 | (int32_t)v1;
    int64_t v13 = 0x100000000 * a2 >> 32; // 0x17880c
    int64_t v14 = 0x1e89ffc * v13; // 0x17880c
    int32_t v15 = v14; // 0x178812
    uint32_t v16 = (int32_t)(v14 != 0x1e89ffc00000000 * v13 >> 32) | v15; // 0x178812
    uint32_t v17 = v8 - v16; // 0x178812
    bool v18 = v14 != 0x1e89ffc00000000 * v13 >> 32 | v16 > v8; // 0x178812
    int64_t v19 = v17; // 0x178812
    *(int32_t *)-0x76e8fffa17ff862b = v11;
    char * v20 = (char *)(8 * v19 - 0x6bfe17ee + v1); // 0x17881d
    unsigned char v21 = *v20; // 0x17881d
    char v22 = v18; // 0x17881d
    unsigned char v23 = v22 + (char)(v11 / 256); // 0x17881d
    char v24 = v21 - v23; // 0x17881d
    bool v25 = v18 ? v23 != -1 | v21 < v24 - v22 : v21 < v23; // 0x17881d
    *v20 = v24;
    int32_t * v26 = (int32_t *)(3 * v1); // 0x178829
    *v26 = *v26 + v15 + (int32_t)v25;
    int32_t * v27 = (int32_t *)(v1 - 0x17fec274); // 0x178831
    int32_t v28 = a2; // 0x178831
    *v27 = *v27 + v28;
    uint32_t v29 = v11 + (int32_t)v1; // 0x178837
    int64_t v30 = v29; // 0x178837
    int32_t * v31 = (int32_t *)(v19 + 0xa510d5); // 0x178839
    *v31 = *v31 + v17;
    char * v32 = (char *)v30; // 0x17883f
    unsigned char v33 = (char)v29; // 0x17883f
    *v32 = *v32 + v33;
    char * v34 = (char *)(v30 + 0x79bc880a); // 0x178846
    *v34 = *v34 + v4;
    int64_t v35 = v2 - 1; // 0x17884e
    int64_t result = v30; // 0x17884e
    if (v35 != 0) {
        result = function_1787e4();
    }
    // 0x178850
    *(int64_t *)0xe5a6f7f9 = 54;
    char * v36 = (char *)(v1 + 0x3d596ef0); // 0x178853
    *v36 = (char)(v33 < 11) + (char)(v17 / 256) + *v36;
    int32_t * v37 = (int32_t *)v35; // 0x178859
    *v37 = *v37 + v28;
    __asm_int(127);
    return result;
}

// Address range: 0x17886f - 0x178872
int64_t function_17886f(void) {
    // 0x17886f
    int64_t result; // 0x17886f
    float80_t v1; // 0x17886f
    *(int16_t *)result = (int16_t)v1;
    return result;
}

// Address range: 0x1788d3 - 0x1788d6
int64_t function_1788d3(int64_t a1) {
    // 0x1788d3
    int64_t result; // 0x1788d3
    return result;
}

// Address range: 0x178932 - 0x178933
int64_t function_178932(void) {
    // 0x178932
    int64_t result; // 0x178932
    return result;
}

// Address range: 0x178957 - 0x178966
int64_t function_178957(void) {
    // 0x178957
    int64_t v1; // 0x178957
    *(char *)(v1 + 0x61a3d864) = (char)(unknown_ffffffffda73e95e() / 256);
    return function_1789ac(v1, v1, v1, v1);
}

// Address range: 0x1789a2 - 0x1789ac
int64_t function_1789a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = (int32_t)a4 + (int32_t)a3; // 0x1789a2
    *(int32_t *)a4 = v1;
    int64_t result; // 0x1789a2
    if (v1 == 0) {
        result = function_178a25(a1, a2, a3, a4);
    }
    // 0x1789a7
    return result;
}

// Address range: 0x1789ac - 0x1789af
int64_t function_1789ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = a4 & 0xffffffff; // 0x1789ad
    bool v1; // 0x1789ac
    if (!v1) {
        result = function_178932();
    }
    // 0x1789af
    return result;
}

// Address range: 0x178a25 - 0x178a38
int64_t function_178a25(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_5518c732(); // 0x178a2c
    int32_t * v1 = (int32_t *)(a3 - 44); // 0x178a33
    *v1 = *v1 + (int32_t)a1;
    return result;
}

// Address range: 0x178a3e - 0x178a40
int64_t function_178a3e(void) {
    // 0x178a3e
    int64_t result; // 0x178a3e
    return result;
}

// Address range: 0x178a44 - 0x178a49
int64_t function_178a44(void) {
    // 0x178a44
    return function_1548aa0();
}

// Address range: 0x178a4d - 0x178ac9
int64_t function_178a4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = __asm_in_134((int16_t)a3); // 0x178a4d
    bool v1; // 0x178a4d
    if (v1) {
        int64_t v2 = (result - (v1 ? 171 : 170)) % 256 | result & -256; // 0x178ab8
        return (int64_t)((int32_t)v2 - 0x3cc4d081 + *(int32_t *)v2);
    }
    // 0x178a50
    return result;
}

// Address range: 0x178b11 - 0x178b20
int64_t function_178b11(void) {
    // 0x178b11
    int64_t v1; // 0x178b11
    char * v2 = (char *)(v1 - 42); // 0x178b11
    *v2 = *v2 | (char)(v1 / 256);
    return unknown_ffffffffae601d1a();
}

// Address range: 0x178b42 - 0x178be3
int64_t function_178b42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t result; // 0x178b42
    float80_t v2; // 0x178b42
    *(int32_t *)(result + 0x440af76c) = (int32_t)v2;
    if (a4 != 0) {
        // 0x178b4a
        return result;
    }
    char * v3 = (char *)(v1 + 0x7bd50600); // 0x178bb4
    char v4 = *v3; // 0x178bb4
    char v5 = result; // 0x178bb4
    char v6 = v4 + v5; // 0x178bb4
    *v3 = v6;
    if (v6 < 0 != ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x178b8a
        return result & -256 | (int64_t)__asm_in_133((int16_t)a3 & -256 | 135);
    }
    if (((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x178b4a
        return result;
    }
    unsigned char v7 = *(char *)&v1; // 0x178bd6
    unsigned char v8 = v7 + (char)(v1 / 256); // 0x178bd6
    *(char *)v1 = v8;
    unsigned char v9 = (char)v1 % 32; // 0x178bd8
    if (v9 != 0) {
        char * v10 = (char *)(result + 0x3a8023d4); // 0x178bd8
        unsigned char v11 = *v10; // 0x178bd8
        *v10 = (char)(v8 < v7) << 8 - v9 | v11 >> v9 | (char)((int16_t)v11 << (int16_t)(9 - v9));
    }
    return unknown_ffffffffe9125ce4();
}

// Address range: 0x178c1b - 0x178c1e
int64_t function_178c1b(int64_t a1) {
    // 0x178c1b
    int64_t result; // 0x178c1b
    return result;
}

// Address range: 0x178c3c - 0x178c3f
int64_t function_178c3c(void) {
    // 0x178c3c
    int64_t result; // 0x178c3c
    return result;
}

// Address range: 0x178c85 - 0x178c8f
int64_t function_178c85(void) {
    // 0x178c85
    unknown_ffffffffbd11dd8b();
    return function_ffffffffdbd281ee();
}

// Address range: 0x178d1e - 0x178d1f
int64_t function_178d1e(void) {
    // 0x178d1e
    int64_t result; // 0x178d1e
    return result;
}

// Address range: 0x178d69 - 0x178d70
int64_t function_178d69(int64_t a1) {
    // 0x178d69
    int64_t result; // 0x178d69
    int32_t * v1 = (int32_t *)(result + 0x2c54450a); // 0x178d69
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x178e19 - 0x178e1a
int64_t function_178e19(int64_t a1) {
    // 0x178e19
    int64_t result; // 0x178e19
    return result;
}

// Address range: 0x178e70 - 0x178e8b
int64_t function_178e70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 - 0x17fe1768); // 0x178e76
    *v1 = *v1 + (char)a4;
    int64_t v2 = a4 + 0xbc1d36af; // 0x178e7c
    int32_t * v3 = (int32_t *)((v2 & 0xffffffff) - 10); // 0x178e87
    *v3 = *v3 + (int32_t)v2;
    int64_t v4; // 0x178e70
    return v4 & 0xffffffff;
}

// Address range: 0x178e94 - 0x178e96
int64_t function_178e94(void) {
    // 0x178e94
    int64_t v1; // 0x178e94
    return function_178e9c(v1, v1);
}

// Address range: 0x178e97 - 0x178e9c
int64_t function_178e97(void) {
    // 0x178e97
    return unknown_ffffffffdc1cee9d();
}

// Address range: 0x178e9c - 0x178e9f
int64_t function_178e9c(int64_t a1, int64_t a2) {
    // 0x178e9c
    int64_t result; // 0x178e9c
    return result;
}

// Address range: 0x2dd70e - 0x2dd7e1
int64_t function_2dd70e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2dd70e
    int64_t v1; // 0x2dd70e
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x2dd70e
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return function_caf2a(a1, a2, a3, a4, a5, v1, 0x2da959);
}

// Address range: 0x2dd7e1 - 0x2dd944
int64_t function_2dd7e1(int64_t a1, int64_t a2) {
    // 0x2dd7e1
    int64_t v1; // bp-32, 0x2dd7e1
    int64_t v2 = (int64_t)&v1; // 0x2dd846
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x2dd84e
    *(int64_t *)v3 = v3;
    int64_t v4 = *(int64_t *)(v2 + 24); // 0x2dd876
    *(int64_t *)(v2 - 16) = v4;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x2dd87e
    *v5 = a2;
    *(int64_t *)(v2 - 32) = v3;
    int64_t v6 = *v5; // 0x2dd88e
    *(int64_t *)(v2 - 40) = v6;
    int64_t v7 = *v5; // 0x2dd896
    int64_t v8 = v7 + 16; // 0x2dd89a
    int64_t * v9 = (int64_t *)v8; // 0x2dd89a
    int64_t v10 = *v9; // 0x2dd89a
    int64_t * v11 = (int64_t *)(v7 - 8); // 0x2dd89a
    int64_t * v12 = (int64_t *)(v7 - 16); // 0x2dd89e
    *(int64_t *)(v7 - 24) = v10;
    *v9 = v4;
    *v12 = v10;
    *(int64_t *)(v7 + 24) = *v11;
    int64_t * v13 = (int64_t *)v7; // 0x2dd8e3
    int64_t v14 = *v13; // 0x2dd8e3
    *v11 = v14;
    *v12 = v14;
    *v13 = *(int64_t *)(v7 + 8);
    *v11 = v6;
    *v13 = v8;
    int64_t v15; // 0x2dd7e1
    return function_caf2a(a1, *v11, v15, v15, v15, v15, 0x2dac91);
}

// Address range: 0x2dd944 - 0x2dda4a
int64_t function_2dd944(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2dd944
    int64_t v1; // 0x2dd944
    return function_caf2a(a1, 0x1cbe945d, a3, a4, a5, v1, 0x2daf1a);
}

// Address range: 0x2dda4a - 0x2ddb96
int64_t function_2dda4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2dda4a
    int64_t v1; // 0x2dda4a
    return function_caf2a(169, a2, a3, a4, v1, v1, a5);
}
