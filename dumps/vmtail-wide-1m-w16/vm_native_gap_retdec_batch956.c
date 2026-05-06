/*
 * Targeted RetDec C for native executable gap queue batch 956.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x204c34-0x204e34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x204e34-0x205034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x205034-0x205234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ebc96-0x3ebe96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ebe96-0x3ec096 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ec096-0x3ec296 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ec296-0x3ec496 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ec496-0x3ec696 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_204c34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_204d05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_204e6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_204fa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2051ca(void);
int64_t function_2051dc(void);
int64_t function_2051dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2051ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b4740aa();
int64_t function_3958c7fd();
int64_t function_3ebc96(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ebca5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ebcb5(void);
int64_t function_3ebcbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3ebcff(int64_t a1, int64_t a2);
int64_t function_3ebd15(void);
int64_t function_3ebd78(void);
int64_t function_3ebd7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ebd9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ebda9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ebdbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3ebe74(int64_t a1);
int64_t function_3ebe79(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ebf27(int64_t a1, int64_t a2);
int64_t function_3ebf5c(int64_t a1);
int64_t function_3ebfa5(void);
int64_t function_3ebfb6(void);
int64_t function_3ec04b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ec05d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ec071(void);
int64_t function_3ec0bc(void);
int64_t function_3ec0de(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ec0ec(int64_t a1);
int64_t function_3ec0ff(void);
int64_t function_3ec123(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ec133(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ec13e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3ec1d6(int64_t a1, int64_t a2);
int64_t function_3ec1e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ec290(void);
int64_t function_3ec2c1(int32_t a1, int64_t a2, int64_t a3);
int64_t function_3ec2dc(int64_t a1);
int64_t function_3ec336(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ec35a(int64_t a1);
int64_t function_3ec378(void);
int64_t function_3ec3b8(int64_t a1);
int64_t function_3ec3e9(void);
int64_t function_3ec418(void);
int64_t function_3ec41a(int64_t a1);
int64_t function_3ec427(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ec42f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ec45b(void);
int64_t function_3ec45f(void);
int64_t function_3ec465(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ec476(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ec47d(int64_t a1);
int64_t function_3ec491(int64_t a1);
int64_t function_3ec49e(void);
int64_t function_3ec4ca(void);
int64_t function_3ec4f1(void);
int64_t function_3ec507(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_3ec5a2(void);
int64_t function_3ec5f1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ec626(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ec636(void);
int64_t function_3ec654(int64_t a1);
int64_t function_3ec669(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ec67c(int64_t a1);
int64_t function_5d4583ce();
int64_t function_668b3a09();
int64_t function_caf2a();
int64_t function_ffffffff9f3f3283();
int64_t function_ffffffffa19845d3();
int64_t function_ffffffffb544339d();
int64_t function_ffffffffb59de5f1();
int64_t unknown_68aafff();

// Address range: 0x204c34 - 0x204d05
int64_t function_204c34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x204c34
    int64_t v1; // bp-2111165273, 0x204c34
    int64_t v2 = (int64_t)&v1; // 0x204cc7
    int64_t v3 = v2 + 0x7dd5d359; // 0x204ce2
    int64_t * v4 = (int64_t *)v3; // 0x204ce2
    *v4 = a3;
    *(int64_t *)(v2 + 0x7dd5d351) = v3;
    *v4 = v2 + 0x7dd5d369;
    int64_t v5; // 0x204c34
    return function_caf2a(a1, a2, *v4, 0x2f3e9d0e, v5, v5, a5);
}

// Address range: 0x204d05 - 0x204e6a
int64_t function_204d05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x45e83c3f; // bp-40, 0x204e04
    int64_t v2 = (int64_t)&v1; // 0x204e47
    *(int64_t *)(v2 - 8) = 0x45e83c3f;
    *(int64_t *)(v2 - 16) = 0x45e83c3f;
    int64_t v3; // 0x204d05
    return function_caf2a(a1, a2, a3, a4, v3, v3, v1);
}

// Address range: 0x204e6a - 0x204fa6
int64_t function_204e6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x204e6a
    bool v1; // 0x204e6a
    return function_caf2a(a1, a2, 0x2030e0, a4, a5, a6, 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2);
}

// Address range: 0x204fa6 - 0x20511c
int64_t function_204fa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x204fa6
    int64_t v1; // 0x204fa6
    bool v2; // 0x204fa6
    return function_caf2a(a1, a2, a3, a4, a5, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x2051ca - 0x2051cb
int64_t function_2051ca(void) {
    // 0x2051ca
    int64_t result; // 0x2051ca
    return result;
}

// Address range: 0x2051dc - 0x2051dd
int64_t function_2051dc(void) {
    // 0x2051dc
    int64_t result; // 0x2051dc
    return result;
}

// Address range: 0x2051dd - 0x2051e1
int64_t function_2051dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2051dd
    int64_t result; // 0x2051dd
    char * v1 = (char *)(result - 127); // 0x2051dd
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x2051ed - 0x2051f2
int64_t function_2051ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2051ed
    return function_2051ca();
}

// Address range: 0x3ebc96 - 0x3ebca4
int64_t function_3ebc96(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ebc96
    int64_t v1; // 0x3ebc96
    return v1 & -256 | (int64_t)*(char *)0x2835b30f3f75770b;
}

// Address range: 0x3ebca5 - 0x3ebcb5
int64_t function_3ebca5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ebca5
    int64_t result; // 0x3ebca5
    int64_t * v1 = (int64_t *)(2 * a2 + 21 + (a4 & 0xff00 & 256 * result | a4 & -0xff01)); // 0x3ebca7
    *v1 = *v1 - a3;
    return result;
}

// Address range: 0x3ebcb5 - 0x3ebcb8
int64_t function_3ebcb5(void) {
    // 0x3ebcb5
    int64_t result; // 0x3ebcb5
    return result;
}

// Address range: 0x3ebcbf - 0x3ebcd6
int64_t function_3ebcbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3ebcbf
    __readfsbyte(a1 + 0x4854dc2b);
    int16_t v1 = a3; // 0x3ebcc8
    int32_t * v2 = (int32_t *)a5; // 0x3ebcc8
    __asm_outsd(v1, *v2);
    __asm_outsd(v1, *v2);
    int64_t result; // 0x3ebcbf
    return result;
}

// Address range: 0x3ebcff - 0x3ebd08
int64_t function_3ebcff(int64_t a1, int64_t a2) {
    // 0x3ebcff
    int64_t result; // 0x3ebcff
    return result;
}

// Address range: 0x3ebd15 - 0x3ebd16
int64_t function_3ebd15(void) {
    // 0x3ebd15
    int64_t result; // 0x3ebd15
    return result;
}

// Address range: 0x3ebd78 - 0x3ebd7a
int64_t function_3ebd78(void) {
    // 0x3ebd78
    int64_t v1; // 0x3ebd78
    return function_3ebd9f(v1, v1, v1, v1);
}

// Address range: 0x3ebd7a - 0x3ebd9a
int64_t function_3ebd7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ebd7a
    int64_t v1; // 0x3ebd7a
    int64_t v2 = v1 + 0xb1a1c454 & 0xffffffff ^ 0x2dbdf2b8; // 0x3ebd7f
    __asm_out(-87, (int32_t)v2);
    uint64_t v3 = v2 + 0xf1c68082; // 0x3ebd87
    *(char *)((v3 & 0xffffffff) + 6) = (char)a4;
    unsigned char v4 = *(char *)(v1 - 5); // 0x3ebd8f
    int64_t v5; // 0x3ebd7a
    uint32_t v6 = *(int32_t *)&v5; // 0x3ebd93
    int64_t v7; // 0x3ebd7a
    uint32_t v8 = *(int32_t *)&v7; // 0x3ebd93
    bool v9; // 0x3ebd7a
    int64_t v10 = v9 ? -4 : 4; // 0x3ebd93
    int64_t v11 = v10 + a1; // 0x3ebd93
    int64_t v12 = v10 + a2; // 0x3ebd93
    v7 = v11;
    *(int32_t *)v11 = __asm_insd((int16_t)a3);
    unsigned char v13 = *(char *)v12; // 0x3ebd96
    int64_t v14 = v12 + (v9 ? -1 : 1); // 0x3ebd96
    v5 = v14;
    int64_t result = v3 % 256 * (int64_t)v4 & 0xff00 | v3 & 0xffff0000 | (int64_t)v13; // 0x3ebd97
    if (v6 > v8) {
        result = function_3ebd7a(v7, v14, a3, a4, (int64_t)&g1);
    }
    // 0x3ebd99
    return result;
}

// Address range: 0x3ebd9f - 0x3ebda7
int64_t function_3ebd9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ebd9f
    int64_t result; // 0x3ebd9f
    return result;
}

// Address range: 0x3ebda9 - 0x3ebdb3
int64_t function_3ebda9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ebda9
    int64_t v1; // 0x3ebda9
    __asm_out_133((int16_t)a3, (char)v1);
    float80_t v2; // 0x3ebda9
    *(float32_t *)a2 = (float32_t)v2;
    return function_668b3a09();
}

// Address range: 0x3ebdbc - 0x3ebe00
int64_t function_3ebdbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3ebdbc
    int64_t result; // 0x3ebdbc
    bool v1; // 0x3ebdbc
    if (!v1) {
        // 0x3ebe01
        return result;
    }
    if (v1) {
        char * v2 = (char *)(a5 - 20); // 0x3ebdf3
        *v2 = *v2 + (char)a6;
        return result;
    }
    // 0x3ebdc3
    return function_ffffffffb59de5f1();
}

// Address range: 0x3ebe74 - 0x3ebe79
int64_t function_3ebe74(int64_t a1) {
    // 0x3ebe74
    int64_t result; // 0x3ebe74
    *(char *)a1 = (char)(result / 256) + (char)result;
    return result;
}

// Address range: 0x3ebe79 - 0x3ebe99
int64_t function_3ebe79(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t result = a3 & 0xffffffff; // 0x3ebe7e
    int64_t v2; // 0x3ebe79
    int16_t v3 = v2; // 0x3ebe7f
    *(int32_t *)a1 = __asm_insd(v3);
    bool v4; // 0x3ebe79
    if (!v4) {
        uint32_t v5 = *(int32_t *)&result; // 0x3ebe92
        *(int32_t *)(v2 & 0xffffffff) = v5 / 0x8000 | 0x20000 * v5;
        *(char *)v1 = *(char *)&v1 + 1;
        return result;
    }
    // 0x3ebe82
    *(char *)a1 = __asm_insb(v3);
    char * v6 = (char *)(a1 + 21); // 0x3ebe8c
    *v6 = *v6 + 89;
    return result & 0xc85d4f6a;
}

// Address range: 0x3ebf27 - 0x3ebf2b
int64_t function_3ebf27(int64_t a1, int64_t a2) {
    // 0x3ebf27
    int64_t result; // 0x3ebf27
    return result;
}

// Address range: 0x3ebf5c - 0x3ebf5d
int64_t function_3ebf5c(int64_t a1) {
    // 0x3ebf5c
    int64_t result; // 0x3ebf5c
    return result;
}

// Address range: 0x3ebfa5 - 0x3ebfa6
int64_t function_3ebfa5(void) {
    // 0x3ebfa5
    int64_t result; // 0x3ebfa5
    return result;
}

// Address range: 0x3ebfb6 - 0x3ebfc5
int64_t function_3ebfb6(void) {
    // 0x3ebfb6
    int64_t result; // 0x3ebfb6
    char * v1 = (char *)(result - 0x731fa544); // 0x3ebfb8
    *v1 = *v1 + (char)(result / 256);
    int32_t * v2 = (int32_t *)(result - 113); // 0x3ebfbe
    *v2 = *v2 - 126;
    return result;
}

// Address range: 0x3ec04b - 0x3ec050
int64_t function_3ec04b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ec04b
    int64_t result; // 0x3ec04b
    return result;
}

// Address range: 0x3ec05d - 0x3ec071
int64_t function_3ec05d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ec05d
    int64_t v1; // 0x3ec05d
    *(int32_t *)(a4 + 34 + 4 * v1) = (int32_t)v1;
    __asm_out_134(50, (char)a2);
    return a2 & 0xffffffff;
}

// Address range: 0x3ec071 - 0x3ec082
int64_t function_3ec071(void) {
    // 0x3ec071
    int64_t v1; // 0x3ec071
    float80_t v2; // 0x3ec071
    *(float80_t *)(v1 + 88) = __asm_fbstp(v2);
    return function_ffffffffb544339d();
}

// Address range: 0x3ec0bc - 0x3ec0be
int64_t function_3ec0bc(void) {
    // 0x3ec0bc
    int64_t v1; // 0x3ec0bc
    return function_3ec123(v1, v1, v1, v1);
}

// Address range: 0x3ec0de - 0x3ec0e4
int64_t function_3ec0de(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ec0de
    int64_t result; // 0x3ec0de
    return result;
}

// Address range: 0x3ec0ec - 0x3ec0fe
int64_t function_3ec0ec(int64_t a1) {
    // 0x3ec0ec
    return unknown_68aafff();
}

// Address range: 0x3ec0ff - 0x3ec10b
int64_t function_3ec0ff(void) {
    // 0x3ec0ff
    int64_t v1; // 0x3ec0ff
    int32_t * v2 = (int32_t *)(v1 + 114); // 0x3ec101
    *v2 = *v2 & 0x550b2d11;
    return v1 | 133;
}

// Address range: 0x3ec123 - 0x3ec12f
int64_t function_3ec123(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ec123
    return (int64_t)*(int32_t *)0x222a197eedca1dcd;
}

// Address range: 0x3ec133 - 0x3ec139
int64_t function_3ec133(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ec133
    int64_t v1; // 0x3ec133
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result - (int32_t)v1;
    return result;
}

// Address range: 0x3ec13e - 0x3ec17b
int64_t function_3ec13e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t v1 = *(int32_t *)0x46b73693; // 0x3ec13e
    *(int32_t *)0x46b73693 = 128 * v1;
    int64_t v2; // 0x3ec13e
    uint32_t v3 = 0x10000 * (int32_t)v2 >> 16; // 0x3ec145
    int32_t * v4 = (int32_t *)(a4 + 19); // 0x3ec146
    *v4 = *v4 + 0x21747ab2 + (int32_t)((v1 & 0x2000000) != 0);
    char * v5 = (char *)(a6 - 0x7eb77c89); // 0x3ec156
    *v5 = *v5 & (char)a2;
    int32_t * v6 = (int32_t *)((int64_t)(v3 / 256 & 205 | -0x3119ad00) + 72); // 0x3ec175
    *v6 = *v6 - (int32_t)a4;
    return ((v3 + 6) % 256 | v3 & -256) ^ 213;
}

// Address range: 0x3ec1d6 - 0x3ec1e0
int64_t function_3ec1d6(int64_t a1, int64_t a2) {
    // 0x3ec1d6
    int64_t v1; // 0x3ec1d6
    return v1 + 0xeb0fb8fe + (int64_t)((int32_t)v1 < (int32_t)v1) & 0xffffffff;
}

// Address range: 0x3ec1e2 - 0x3ec277
int64_t function_3ec1e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ec1e2
    int64_t v1; // 0x3ec1e2
    int64_t result = v1;
    bool v2; // 0x3ec1e2
    if (v2) {
        // 0x3ec1e4
        *(int32_t *)a2 = (int32_t)(v1 ^ a2);
        *(int32_t *)(result - 66) = (int32_t)a2;
        char * v3 = (char *)(a3 - 0x180f55a7); // 0x3ec1e9
        char v4 = *v3; // 0x3ec1e9
        *v3 = 2 * v4;
        return result + 0x52ab7fe1 + (int64_t)(v4 < 0) & 0xffffffff;
    }
    if (v2) {
        // 0x3ec272
        return (result + 27) % 256 | result & -256;
    }
    // 0x3ec229
    return result;
}

// Address range: 0x3ec290 - 0x3ec29f
int64_t function_3ec290(void) {
    // 0x3ec290
    int64_t v1; // 0x3ec290
    *(int32_t *)0x253b32fca11004cc = (int32_t)v1;
    return function_3958c7fd();
}

// Address range: 0x3ec2c1 - 0x3ec2c8
int64_t function_3ec2c1(int32_t a1, int64_t a2, int64_t a3) {
    // 0x3ec2c1
    int64_t result; // 0x3ec2c1
    int64_t v1 = result;
    *(char *)(a3 + 0x2cc95c95 + v1) = (char)v1;
    return result;
}

// Address range: 0x3ec2dc - 0x3ec2dd
int64_t function_3ec2dc(int64_t a1) {
    // 0x3ec2dc
    int64_t result; // 0x3ec2dc
    return result;
}

// Address range: 0x3ec336 - 0x3ec33d
int64_t function_3ec336(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ec336
    return function_5d4583ce();
}

// Address range: 0x3ec35a - 0x3ec35b
int64_t function_3ec35a(int64_t a1) {
    // 0x3ec35a
    int64_t result; // 0x3ec35a
    return result;
}

// Address range: 0x3ec378 - 0x3ec37b
int64_t function_3ec378(void) {
    // 0x3ec378
    int64_t result; // 0x3ec378
    return result;
}

// Address range: 0x3ec3b8 - 0x3ec3bf
int64_t function_3ec3b8(int64_t a1) {
    // 0x3ec3b8
    int64_t result; // 0x3ec3b8
    int32_t * v1 = (int32_t *)(result - 0x73d0d6f0); // 0x3ec3b8
    bool v2; // 0x3ec3b8
    *v1 = *v1 + (int32_t)result + (int32_t)v2;
    return result;
}

// Address range: 0x3ec3e9 - 0x3ec3ea
int64_t function_3ec3e9(void) {
    // 0x3ec3e9
    int64_t result; // 0x3ec3e9
    return result;
}

// Address range: 0x3ec418 - 0x3ec419
int64_t function_3ec418(void) {
    // 0x3ec418
    int64_t result; // 0x3ec418
    return result;
}

// Address range: 0x3ec41a - 0x3ec41d
int64_t function_3ec41a(int64_t a1) {
    // 0x3ec41a
    int64_t result; // 0x3ec41a
    return result;
}

// Address range: 0x3ec427 - 0x3ec42f
int64_t function_3ec427(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3ec427
    return function_3ec45b();
}

// Address range: 0x3ec42f - 0x3ec438
int64_t function_3ec42f(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 126); // 0x3ec42f
    *v1 = *v1 - (int32_t)a2;
    int64_t v2; // 0x3ec42f
    bool v3; // 0x3ec42f
    *(char *)((v3 ? -1 : 1) + a1) = (char)v2 + 119;
    return function_3ec47d((int64_t)&g1);
}

// Address range: 0x3ec45b - 0x3ec45e
int64_t function_3ec45b(void) {
    // 0x3ec45b
    int64_t result; // 0x3ec45b
    bool v1; // 0x3ec45b
    if (true == !v1) {
        result = function_3ec3e9();
    }
    // 0x3ec45d
    return result;
}

// Address range: 0x3ec45f - 0x3ec465
int64_t function_3ec45f(void) {
    // 0x3ec45f
    int64_t v1; // 0x3ec45f
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x3ec465 - 0x3ec474
int64_t function_3ec465(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ec465
    int64_t v1; // 0x3ec465
    bool v2; // 0x3ec465
    return (v2 ? 73 : 74) | v1 & -256;
}

// Address range: 0x3ec476 - 0x3ec47c
int64_t function_3ec476(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 - 113); // 0x3ec476
    bool v2; // 0x3ec476
    *v1 = (char)v2 - (char)a4 + *v1;
    int64_t result; // 0x3ec476
    return result;
}

// Address range: 0x3ec47d - 0x3ec491
int64_t function_3ec47d(int64_t a1) {
    // 0x3ec47d
    int64_t v1; // 0x3ec47d
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 + 66); // 0x3ec47e
    unsigned char v4 = *v3; // 0x3ec47e
    unsigned char v5 = v4 + (char)(v2 / 256); // 0x3ec47e
    *v3 = v5;
    int64_t v6; // 0x3ec47d
    if (v5 < v4 || v5 == 0) {
        v6 = function_3ec418();
    }
    int64_t v7 = v6;
    return ((v7 | 7) + 127 & 126) + 51 | v7 & -256;
}

// Address range: 0x3ec491 - 0x3ec49b
int64_t function_3ec491(int64_t a1) {
    // 0x3ec491
    return function_2b4740aa();
}

// Address range: 0x3ec49e - 0x3ec4a1
int64_t function_3ec49e(void) {
    // 0x3ec49e
    int64_t result; // 0x3ec49e
    return result;
}

// Address range: 0x3ec4ca - 0x3ec4cf
int64_t function_3ec4ca(void) {
    // 0x3ec4ca
    return function_ffffffffa19845d3();
}

// Address range: 0x3ec4f1 - 0x3ec4f2
int64_t function_3ec4f1(void) {
    // 0x3ec4f1
    int64_t result; // 0x3ec4f1
    return result;
}

// Address range: 0x3ec507 - 0x3ec586
int64_t function_3ec507(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t result; // 0x3ec507
    bool v2; // 0x3ec507
    if (v2) {
        // 0x3ec509
        return result;
    }
    uint64_t v3 = a4 / 256; // 0x3ec569
    if (v3 >= a3) {
        // 0x3ec509
        return result;
    }
    // 0x3ec56d
    int64_t v4; // 0x3ec507
    char v5 = v4; // 0x3ec56d
    if ((30 - v5 & v5) < 0) {
        // 0x3ec509
        return result;
    }
    unsigned char v6 = v5 | -62; // 0x3ec579
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x3ec579
    *(int32_t *)a1 = __asm_insd((int16_t)((a3 - v3) % 256 | a3 & 0xff00));
    int64_t result2 = (int64_t)&v1; // 0x3ec57c
    if (v7 % 2 != 0) {
        // 0x3ec509
        return result2;
    }
    int64_t v8 = v4 & 0xffffff00 | (int64_t)v6; // 0x3ec579
    *(int64_t *)(v8 - 8) = v8;
    return result2;
}

// Address range: 0x3ec5a2 - 0x3ec5a3
int64_t function_3ec5a2(void) {
    // 0x3ec5a2
    int64_t result; // 0x3ec5a2
    return result;
}

// Address range: 0x3ec5f1 - 0x3ec611
int64_t function_3ec5f1(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    *(int864_t *)(a1 + 0x3763b532) = (int864_t)__asm_fnsave();
    int64_t result; // 0x3ec5f1
    char v2 = (char)result + (char)a3; // 0x3ec5f7
    int64_t v3 = result - 8; // 0x3ec5f9
    *(int64_t *)v3 = a2;
    __asm_iretd();
    char v4 = v2; // 0x3ec5fb
    int64_t v5; // 0x3ec5f1
    if (v2 >= 0) {
        v4 += *(char *)&v1;
        int64_t v6 = v3 - 8; // 0x3ec5f9
        *(int64_t *)v6 = a2;
        __asm_iretd();
        v5 = v3;
        while (v4 >= 0) {
            int64_t v7 = v6;
            v4 += *(char *)&v1;
            v6 = v7 - 8;
            *(int64_t *)v6 = a2;
            __asm_iretd();
            v5 = v7;
        }
    }
    int16_t v8 = v1; // 0x3ec5fd
    __asm_in(v8);
    __asm_out_133(v8, (char)result);
    *(int64_t *)(v5 - 16) = -0x24c93d67;
    return result;
}

// Address range: 0x3ec626 - 0x3ec62c
int64_t function_3ec626(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 47); // 0x3ec626
    *v1 = *v1 - (int32_t)a2;
    int64_t result; // 0x3ec626
    return result;
}

// Address range: 0x3ec636 - 0x3ec637
int64_t function_3ec636(void) {
    // 0x3ec636
    int64_t result; // 0x3ec636
    return result;
}

// Address range: 0x3ec654 - 0x3ec655
int64_t function_3ec654(int64_t a1) {
    // 0x3ec654
    int64_t result; // 0x3ec654
    return result;
}

// Address range: 0x3ec669 - 0x3ec67b
int64_t function_3ec669(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ec669
    __asm_iretd();
    bool v1; // 0x3ec669
    if (!v1) {
        function_3ec636();
    }
    int32_t * v2 = (int32_t *)(a1 - 95); // 0x3ec676
    *v2 = *v2 + (int32_t)a3;
    return (int64_t)*(int32_t *)0x48b925089fdd674d;
}

// Address range: 0x3ec67c - 0x3ec682
int64_t function_3ec67c(int64_t a1) {
    // 0x3ec67c
    return function_ffffffff9f3f3283();
}
