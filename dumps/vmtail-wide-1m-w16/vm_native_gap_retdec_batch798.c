/*
 * Targeted RetDec C for native executable gap queue batch 798.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x122546-0x122746 rank=- name=- kind=- bytes=- uncovered=-
 *   0x122846-0x122946 rank=- name=- kind=- bytes=- uncovered=-
 *   0x122946-0x122b46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x122b46-0x122d46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44af25-0x44b125 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44b225-0x44b325 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44b325-0x44b525 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44b525-0x44b725 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_122546(int64_t a1);
int64_t function_122549(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12256a(int64_t a1, int64_t a2);
int64_t function_1225b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1225d4(void);
int64_t function_1225fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_122610(void);
int64_t function_122633(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_12263f(int64_t a1);
int64_t function_122674(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12268f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_12269a(void);
int64_t function_12269f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1226fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_122846(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1228b9(void);
int64_t function_1228d8(void);
int64_t function_1228de(void);
int64_t function_1228e9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_12294a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1229bd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_122a10(void);
int64_t function_122a18(int64_t a1);
int64_t function_122a22(int64_t a1);
int64_t function_122a62(void);
int64_t function_122aba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_122b1c(int64_t a1);
int64_t function_122b21(void);
int64_t function_122b82(int64_t a1);
int64_t function_122b90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_122c27(int64_t a1);
int64_t function_122c32(void);
int64_t function_122c92(int64_t a1);
int64_t function_122ca6(void);
int64_t function_122cc7(void);
int64_t function_122cd2(void);
int64_t function_122cd8(void);
int64_t function_122ce4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_122ce9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_122cf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_122d03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1fab69e();
int64_t function_44af25(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_44af7e(int64_t a1);
int64_t function_44afa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44affc(void);
int64_t function_44b001(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_44b0e5(void);
int64_t function_44b225(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44b24a(int64_t a1);
int64_t function_44b2cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44b2ee(int64_t a1);
int64_t function_44b332(void);
int64_t function_44b337(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_44b368(int64_t a1);
int64_t function_44b3fa(void);
int64_t function_44b405(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_44b4cc(void);
int64_t function_44b4ec(void);
int64_t function_44b526(void);
int64_t function_44b530(int64_t a1, int64_t a2, int64_t a3);
int64_t function_44b559(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44b5aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44b5cf(void);
int64_t function_44b5ec(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_44b6b6(int64_t a1);
int64_t function_44b705(void);
int64_t function_ffffffff89b82752();
int64_t function_ffffffff8baf88c3();
int64_t function_ffffffff90519456();
int64_t function_ffffffffb2dfd1c4();
int64_t function_ffffffffdf15c3f3();
int64_t function_ffffffffdf37bd59();
int64_t function_ffffffffe3ecd09e();
int64_t unknown_108e4f1();
int64_t unknown_1fa3570();
int64_t unknown_3aaffc16();
int64_t unknown_3d124718();
int64_t unknown_46a6e765();
int64_t unknown_480cebf7();
int64_t unknown_4a2008ca();
int64_t unknown_5612ca5a();
int64_t unknown_687bbddc();
int64_t unknown_7a874d4d();
int64_t unknown_ffffffffb44f8406();
int64_t unknown_ffffffffc020ee8d();

// Address range: 0x122546 - 0x122548
int64_t function_122546(int64_t a1) {
    // 0x122546
    int64_t v1; // 0x122546
    bool v2; // 0x122546
    return v1 + a1 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x122549 - 0x122555
int64_t function_122549(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x122549
    int64_t v1; // 0x122549
    char * v2 = (char *)(int64_t)(*(int32_t *)(a2 + 99) | (int32_t)v1); // 0x12254c
    *v2 = *v2 + (char)a4;
    return function_ffffffffe3ecd09e();
}

// Address range: 0x12256a - 0x122576
int64_t function_12256a(int64_t a1, int64_t a2) {
    // 0x12256a
    unknown_1fa3570(a1, a2);
    int64_t v1; // 0x12256a
    *(char *)a1 = (char)v1;
    bool v2; // 0x12256a
    int64_t v3 = v2 ? -1 : 1; // 0x12256f
    return function_ffffffff90519456(v3 + a1, v3 + a2);
}

// Address range: 0x1225b2 - 0x1225c9
int64_t function_1225b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_3d124718(); // 0x1225b2
    int64_t v2; // 0x1225b2
    *(int32_t *)a1 = (int32_t)v2 + (int32_t)a2;
    return v1 + 0xd4c665e3 & 0xffffffff;
}

// Address range: 0x1225d4 - 0x1225d5
int64_t function_1225d4(void) {
    // 0x1225d4
    int64_t result; // 0x1225d4
    return result;
}

// Address range: 0x1225fd - 0x122602
int64_t function_1225fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1225fd
    int64_t result; // 0x1225fd
    bool v1; // 0x1225fd
    if (a4 != 1 && !v1) {
        result = function_1225d4();
    }
    // 0x1225ff
    return result;
}

// Address range: 0x122610 - 0x122611
int64_t function_122610(void) {
    // 0x122610
    int64_t result; // 0x122610
    return result;
}

// Address range: 0x122633 - 0x12263f
int64_t function_122633(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 + 0x3d00c119); // 0x122633
    *v1 = *v1 ^ (char)a4;
    int32_t * v2 = (int32_t *)(a1 - 107); // 0x122639
    *v2 = *v2 + (int32_t)a1;
    int64_t result; // 0x122633
    return result;
}

// Address range: 0x12263f - 0x122642
int64_t function_12263f(int64_t a1) {
    // 0x12263f
    int64_t result; // 0x12263f
    bool v1; // 0x12263f
    if (!v1) {
        result = function_122610();
    }
    // 0x122641
    return result;
}

// Address range: 0x122674 - 0x12268f
int64_t function_122674(int64_t a1, int64_t a2, int64_t a3) {
    // 0x122674
    __asm_in(-37);
    __asm_int(-59);
    unknown_ffffffffc020ee8d();
    return __asm_int3();
}

// Address range: 0x12268f - 0x12269a
int64_t function_12268f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12268f
    int64_t v1; // 0x12268f
    int64_t v2 = v1;
    char v3 = __asm_in(104); // 0x12268f
    *(char *)v2 = (char)v2 + (char)a3;
    return v1 & -256 | (int64_t)v3;
}

// Address range: 0x12269a - 0x12269f
int64_t function_12269a(void) {
    // 0x12269a
    return function_ffffffff89b82752();
}

// Address range: 0x12269f - 0x1226c5
int64_t function_12269f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12269f
    int64_t v1; // 0x12269f
    char * v2 = (char *)(4 * a2 - 0x7a86af53 + v1); // 0x12269f
    *v2 = *v2 | (char)a3;
    unsigned char v3 = *(char *)0x57af85b0; // 0x1226a9
    unsigned char v4 = v3 + (char)((int64_t)&g1 >> 8); // 0x1226a9
    *(char *)0x57af85b0 = v4;
    char * v5 = (char *)(v1 + 0x710158c7 + v1); // 0x1226b1
    *v5 = *v5 + (char)a2 + (char)(v4 < v3);
    __asm_int(-77);
    return v1 & 0xffffffff;
}

// Address range: 0x1226fd - 0x122715
int64_t function_1226fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1226fd
    int64_t v1; // 0x1226fd
    *(char *)a2 = 2 * (char)v1;
    *(char *)-0x79ced8f8 = (char)(v1 / 256);
    return function_ffffffffdf15c3f3();
}

// Address range: 0x122846 - 0x12286d
int64_t function_122846(int64_t a1, int64_t a2, int64_t a3) {
    // 0x122846
    unknown_7a874d4d();
    int64_t v1; // 0x122846
    unsigned char v2 = *(char *)(v1 - 0xe5d8bb2); // 0x12284e
    unknown_5612ca5a();
    int32_t * v3 = (int32_t *)(256 * (int64_t)v2 | a3 & -0xff01); // 0x122859
    *v3 = *v3 + 0x3e86ad8d;
    *(int32_t *)0x1fa3120 = (int32_t)unknown_46a6e765();
    char * v4 = (char *)(v1 - 46); // 0x12286a
    *v4 = *v4 | v2;
    return (int64_t)*(int32_t *)0x1fa3120;
}

// Address range: 0x1228b9 - 0x1228cb
int64_t function_1228b9(void) {
    // 0x1228b9
    int64_t v1; // 0x1228b9
    char * v2 = (char *)((v1 | 171) - 0x6d82e9f9); // 0x1228be
    *v2 = *v2 + (char)v1;
    int64_t result = unknown_4a2008ca(); // 0x1228c4
    int64_t v3; // 0x1228b9
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)v1;
    return result;
}

// Address range: 0x1228d8 - 0x1228da
int64_t function_1228d8(void) {
    // 0x1228d8
    int64_t v1; // 0x1228d8
    return function_12294a(v1, v1, v1, v1);
}

// Address range: 0x1228de - 0x1228e4
int64_t function_1228de(void) {
    // 0x1228de
    return function_1fab69e();
}

// Address range: 0x1228e9 - 0x122908
int64_t function_1228e9(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 0x6400d082); // 0x1228e9
    int64_t v2; // 0x1228e9
    int32_t v3 = v2; // 0x1228e9
    int32_t v4 = *v1 & v3; // 0x1228e9
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x1228e9
    *v1 = v4;
    *(int32_t *)a1 = (int32_t)v2;
    bool v6; // 0x1228e9
    int64_t v7 = 0x4000 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 64 * (int64_t)(v4 == 0) | 128 * (int64_t)(v4 < 0) | 4 * (int64_t)(v5 % 2 == 0) | 2; // bp-8, 0x1228f0
    int64_t v8 = unknown_480cebf7((v6 ? -4 : 4) + a1); // 0x1228f1
    *(int32_t *)a3 = v3;
    unknown_ffffffffb44f8406((v8 + 172) % 256 | v8 & 0xffffff00);
    __asm_in_133((int16_t)a3);
    return (int64_t)&v7;
}

// Address range: 0x12294a - 0x122952
int64_t function_12294a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x12294a
    *(int32_t *)0x78929aee = *(int32_t *)0x78929aee + (int32_t)a1;
    int64_t result; // 0x12294a
    return result;
}

// Address range: 0x1229bd - 0x122a07
int64_t function_1229bd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1229bd
    int64_t v1; // 0x1229bd
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x1229bd
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x1229cf
    int64_t v4; // 0x1229bd
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    char * v6 = (char *)v3; // 0x1229d2
    *v6 = *v6 + (char)(a3 / 256);
    int64_t v7 = v4;
    *(char *)v7 = *(char *)&v4 + (char)v7;
    int32_t * v8 = (int32_t *)((v1 & -256) + 0x1947938); // 0x1229e1
    *v8 = *v8 + (int32_t)a3;
    int64_t v9 = unknown_108e4f1(v3); // 0x1229eb
    int64_t v10 = (int32_t)v9 < 0x7abb4b01 ? 74 : 73; // 0x1229f5
    int32_t * v11 = (int32_t *)(a2 + 0x7bd405e2 + 8 * a2); // 0x1229fb
    *v11 = *v11 + (int32_t)a2 + (int32_t)((v9 - v10 & 256) != 0);
    return v3 + (v2 ? 0xffffffff : 1) & 0xffffffff;
}

// Address range: 0x122a10 - 0x122a13
int64_t function_122a10(void) {
    // 0x122a10
    int64_t result; // 0x122a10
    return result;
}

// Address range: 0x122a18 - 0x122a1b
int64_t function_122a18(int64_t a1) {
    // 0x122a18
    int64_t v1; // 0x122a18
    int64_t v2 = v1;
    bool v3; // 0x122a18
    return (v2 - (v3 ? 143 : 142)) % 256 | v2 & -256;
}

// Address range: 0x122a22 - 0x122a27
int64_t function_122a22(int64_t a1) {
    // 0x122a22
    int64_t result; // 0x122a22
    return result;
}

// Address range: 0x122a62 - 0x122a6a
int64_t function_122a62(void) {
    // 0x122a62
    int64_t v1; // 0x122a62
    return v1 & 0xffffffff ^ 0xc56e4910;
}

// Address range: 0x122aba - 0x122aee
int64_t function_122aba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x122aba
    int64_t v1; // 0x122aba
    int64_t v2 = v1;
    *(char *)v2 = (char)(v2 & a4);
    int32_t * v3 = (int32_t *)(a2 + 0x13d0000); // 0x122ac0
    *v3 = *v3 + (int32_t)a4;
    __asm_in_134(20);
    int64_t result = __asm_iretd(); // 0x122ac9
    if (a4 != 0) {
        // 0x122ad6
        return unknown_687bbddc();
    }
    // 0x122ae0
    int64_t v4; // bp-8, 0x122aba
    int64_t v5 = (int64_t)&v4; // 0x122ac6
    int32_t v6 = *(int32_t *)(v1 & -256); // 0x122ae5
    *(int64_t *)((int64_t)(v6 + ((int32_t)((int32_t)result < 0xa3fcbf01) | (int32_t)v5)) - 8) = (v5 + a2) % 256 | a2 & -256;
    return result;
}

// Address range: 0x122b1c - 0x122b1d
int64_t function_122b1c(int64_t a1) {
    // 0x122b1c
    int64_t result; // 0x122b1c
    return result;
}

// Address range: 0x122b21 - 0x122b22
int64_t function_122b21(void) {
    // 0x122b21
    int64_t result; // 0x122b21
    return result;
}

// Address range: 0x122b82 - 0x122b8f
int64_t function_122b82(int64_t a1) {
    // 0x122b82
    int64_t result; // 0x122b82
    return result;
}

// Address range: 0x122b90 - 0x122bdc
int64_t function_122b90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x122b90
    int64_t v1; // 0x122b90
    uint64_t v2 = v1;
    int64_t v3 = a6;
    int64_t v4; // 0x122b90
    bool v5; // 0x122b90
    if (v5) {
        v4 = function_122b21();
    }
    int64_t v6 = v4;
    float80_t v7; // 0x122b90
    *(int16_t *)(v6 - 48) = (int16_t)v7;
    *(char *)0x1803baa4 = *(char *)0x1803baa4 + (char)(v2 / 256);
    int64_t v8 = v2 & -256 | a4;
    int64_t * v9 = &v3; // 0x122ba5
    if ((v8 & 0xffffffff) == 1 || (int32_t)v8 == 0) {
        uint64_t v10 = v6 - ((char)v6 == 0 ? 131 : 130); // 0x122b99
        char * v11 = (char *)(v10 % 256 | v6 & -256); // 0x122ba7
        *v11 = *v11 + (char)v10;
        int64_t v12; // bp+16, 0x122b90
        v9 = &v12;
    }
    // 0x122bba
    return *v9;
}

// Address range: 0x122c27 - 0x122c2a
int64_t function_122c27(int64_t a1) {
    // 0x122c27
    int64_t v1; // 0x122c27
    int64_t v2 = v1;
    return (v2 + 244) % 256 | v2 & -256;
}

// Address range: 0x122c32 - 0x122c35
int64_t function_122c32(void) {
    // 0x122c32
    int64_t result; // 0x122c32
    return result;
}

// Address range: 0x122c92 - 0x122c93
int64_t function_122c92(int64_t a1) {
    // 0x122c92
    int64_t result; // 0x122c92
    return result;
}

// Address range: 0x122ca6 - 0x122ca7
int64_t function_122ca6(void) {
    // 0x122ca6
    int64_t result; // 0x122ca6
    return result;
}

// Address range: 0x122cc7 - 0x122cc9
int64_t function_122cc7(void) {
    // 0x122cc7
    int64_t v1; // 0x122cc7
    return function_122cf3(v1, v1, v1, v1);
}

// Address range: 0x122cd2 - 0x122cd3
int64_t function_122cd2(void) {
    // 0x122cd2
    int64_t result; // 0x122cd2
    return result;
}

// Address range: 0x122cd8 - 0x122cd9
int64_t function_122cd8(void) {
    // 0x122cd8
    int64_t result; // 0x122cd8
    return result;
}

// Address range: 0x122ce4 - 0x122ce8
int64_t function_122ce4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x122ce4
    int64_t result; // 0x122ce4
    int32_t * v1 = (int32_t *)(result - 6); // 0x122ce4
    *v1 = *v1 + (int32_t)a2;
    return result;
}

// Address range: 0x122ce9 - 0x122cec
int64_t function_122ce9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x122ce9
    int64_t result; // 0x122ce9
    bool v1; // 0x122ce9
    *(char *)a4 = (char)result + (char)a4 + (char)v1;
    return result;
}

// Address range: 0x122cf3 - 0x122d03
int64_t function_122cf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x1003889); // 0x122cf3
    int32_t v2 = *v1 + (int32_t)a3; // 0x122cf3
    *v1 = v2;
    int64_t v3; // 0x122cf3
    if (a4 != 1 == v2 == 0) {
        v3 = function_122ca6();
    }
    // 0x122cfb
    int64_t v4; // 0x122cf3
    return (int64_t)(*(int32_t *)&v4 + (int32_t)v3);
}

// Address range: 0x122d03 - 0x122d1f
int64_t function_122d03(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a5 - 93); // 0x122d04
    int32_t v2 = *v1 + (int32_t)a2; // 0x122d04
    *v1 = v2;
    int64_t v3 = a5; // 0x122d07
    if (v2 < 1) {
        v3 = function_122cd8();
    }
    // 0x122d09
    int64_t v4; // 0x122d03
    int32_t * v5 = (int32_t *)(2 * v4 - 77 + v3); // 0x122d09
    int32_t v6 = *v5 | (int32_t)a4; // 0x122d09
    *v5 = v6;
    char v7 = v3; // 0x122d0d
    *(char *)a1 = v7;
    __asm_out(72, v7);
    int64_t v8 = unknown_3aaffc16(); // 0x122d15
    if (v6 == 0) {
        v8 = function_122cd2();
    }
    int64_t v9 = v8;
    return (v9 + 58) % 256 | v9 & -256;
}

// Address range: 0x44af25 - 0x44af52
int64_t function_44af25(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x44af25
    int64_t result; // 0x44af25
    char * v1 = (char *)(result + 0x529e134f); // 0x44af25
    char v2 = *v1 + (char)(a4 / 256); // 0x44af25
    *v1 = v2;
    if (v2 >= 1) {
        // 0x44af2d
        return result;
    }
    int32_t * v3 = (int32_t *)(a4 + 96); // 0x44af4e
    uint32_t v4 = *v3; // 0x44af4e
    *v3 = v4 / 2 | 0x80000000 * v4;
    return result;
}

// Address range: 0x44af7e - 0x44af83
int64_t function_44af7e(int64_t a1) {
    // 0x44af7e
    int64_t result; // 0x44af7e
    return result;
}

// Address range: 0x44afa3 - 0x44aff7
int64_t function_44afa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44afa3
    bool v1; // 0x44afa3
    if (true != !v1) {
        // 0x44afa5
        __asm_outsb((int16_t)a3, (char)a2);
        int64_t v2 = v1 ? -1 : 1; // 0x44afb0
        return function_ffffffffb2dfd1c4(v2 + a1, v2 + a2);
    }
    char * v3 = (char *)(a2 + 65); // 0x44afea
    *v3 = *v3 & -19;
    int64_t result; // 0x44afa3
    char * v4 = (char *)(result + 104); // 0x44aff4
    *v4 = *v4 + (char)a4;
    return result;
}

// Address range: 0x44affc - 0x44affd
int64_t function_44affc(void) {
    // 0x44affc
    int64_t result; // 0x44affc
    return result;
}

// Address range: 0x44b001 - 0x44b0db
int64_t function_44b001(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x44b001
    int64_t * v3 = (int64_t *)v2; // 0x44b00f
    int64_t v4 = v2 + 0xada84407 & 0xffff00ff | 0x1300; // 0x44b015
    *(char *)a1 = 25;
    bool v5; // 0x44b001
    int64_t v6 = (v5 ? -1 : 1) + a1; // 0x44b019
    int64_t v7 = (int64_t)*(int32_t *)0x32888d385a6f986f; // 0x44b01a
    char * v8 = (char *)(v6 + 0x3f24a323); // 0x44b023
    *v8 = *v8 ^ (char)a4;
    char * v9 = (char *)(a3 + 0x1b7d460a + v2); // 0x44b029
    unsigned char v10 = *v9; // 0x44b029
    char v11 = v10 + 19; // 0x44b029
    *v9 = v11;
    char * v12 = (char *)(v6 + 121 + 2 * v7); // 0x44b030
    *v12 = (char)(a4 / 256);
    int64_t result = v7 & 0xffffff00 | (int64_t)*(char *)&v1; // 0x44b039
    if (v10 <= 236 && v11 != 0) {
        // 0x44b05c
        *(int64_t *)(v2 - 8) = v4;
        return result;
    }
    int32_t * v13 = (int32_t *)(5 * a3); // 0x44b03c
    int32_t v14 = *v13 + (int32_t)result; // 0x44b03c
    *v13 = v14;
    int64_t result2 = result; // 0x44b03f
    if (v14 < 0) {
        result2 = function_44affc();
    }
    int64_t v15 = 256 * (int64_t)*v12 | a4 & -0xff01; // 0x44b030
    v1 = *v3;
    *v3 = v15;
    if (v14 == 0) {
        // 0x44b045
        __asm_outsb((int16_t)a3, *(char *)v1);
        char * v16 = (char *)v4; // 0x44b047
        *v16 = *v16 - (char)(a3 / 256);
        __asm_hlt();
        *(int64_t *)(v2 - 8) = 0x5bbb50c8;
        return v15 & 0xffffffff;
    }
    int32_t v17 = v2; // 0x44b053
    int32_t v18 = 2 * v17; // 0x44b053
    if (v18 < 0 == (v18 ^ v17) < 0 != v18 != 0) {
        // 0x44b057
        return result2;
    }
    // 0x44b0cf
    __asm_out_135(65, (int32_t)result2);
    int64_t result3 = (int64_t)(*(int32_t *)v1 | 83); // 0x44b0d3
    *(int64_t *)(v2 - 8) = result3;
    return result3;
}

// Address range: 0x44b0e5 - 0x44b0e6
int64_t function_44b0e5(void) {
    // 0x44b0e5
    int64_t result; // 0x44b0e5
    return result;
}

// Address range: 0x44b225 - 0x44b226
int64_t function_44b225(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44b225
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x44b225
    return result;
}

// Address range: 0x44b24a - 0x44b24b
int64_t function_44b24a(int64_t a1) {
    // 0x44b24a
    int64_t result; // 0x44b24a
    return result;
}

// Address range: 0x44b2cf - 0x44b2e7
int64_t function_44b2cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44b2cf
    *(int32_t *)a3 = 0;
    int32_t result = __asm_in_136((int16_t)a3); // 0x44b2d4
    char * v1 = (char *)(a3 - 38); // 0x44b2d6
    *v1 = 2 * *v1;
    *(char *)0x384b1f0a375d3c54 = (char)result;
    return result;
}

// Address range: 0x44b2ee - 0x44b2f1
int64_t function_44b2ee(int64_t a1) {
    // 0x44b2ee
    int64_t result; // 0x44b2ee
    return result;
}

// Address range: 0x44b332 - 0x44b333
int64_t function_44b332(void) {
    // 0x44b332
    int64_t result; // 0x44b332
    return result;
}

// Address range: 0x44b337 - 0x44b34a
int64_t function_44b337(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x44b337
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    char * v1 = (char *)(a3 - 0x2a0dffd7); // 0x44b338
    *v1 = *v1 + (char)(a3 / 256);
    int32_t v2 = __asm_in_134(12); // 0x44b342
    unsigned char v3 = (char)v2 ^ 111; // 0x44b345
    int64_t result = (int64_t)v3 | (int64_t)(v2 & -256); // 0x44b347
    if (v3 != 0) {
        result = function_44b332();
    }
    // 0x44b349
    return result;
}

// Address range: 0x44b368 - 0x44b36b
int64_t function_44b368(int64_t a1) {
    // 0x44b368
    int64_t result; // 0x44b368
    return result;
}

// Address range: 0x44b3fa - 0x44b3fb
int64_t function_44b3fa(void) {
    // 0x44b3fa
    int64_t result; // 0x44b3fa
    return result;
}

// Address range: 0x44b405 - 0x44b4b1
int64_t function_44b405(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2; // 0x44b405
    __asm_out_135(-77, (int32_t)v2);
    char v3 = a3; // 0x44b407
    bool v4; // 0x44b405
    *(char *)a2 = v3 + (char)a2 + (char)v4;
    unsigned char v5 = *(char *)(v2 % 256 + v2); // 0x44b409
    __asm_int(-89);
    int32_t v6 = (int32_t)(v2 & 0xffffff00 | (int64_t)v5) ^ 0xacb9521; // 0x44b40f
    int64_t v7 = a4 - 1; // 0x44b414
    if (v7 == 0 || v6 == 0) {
        // 0x44b416
        return __asm_int1(a1, v1);
    }
    // 0x44b458
    __asm_out_137((int16_t)a3, v6);
    char * v8 = (char *)(int64_t)((v6 + 166) % 256 | v6 & -256); // 0x44b45e
    *v8 = *v8 - (char)v7;
    char * v9 = (char *)(v1 - 0x553e8de8); // 0x44b460
    *v9 = *v9 + v3;
    *(int32_t *)a1 = *(int32_t *)&v1;
    return 0xf2803238;
}

// Address range: 0x44b4cc - 0x44b4cd
int64_t function_44b4cc(void) {
    // 0x44b4cc
    int64_t result; // 0x44b4cc
    return result;
}

// Address range: 0x44b4ec - 0x44b4f2
int64_t function_44b4ec(void) {
    // 0x44b4ec
    int64_t result; // 0x44b4ec
    return result;
}

// Address range: 0x44b526 - 0x44b527
int64_t function_44b526(void) {
    // 0x44b526
    int64_t result; // 0x44b526
    return result;
}

// Address range: 0x44b530 - 0x44b533
int64_t function_44b530(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44b530
    int64_t v1; // 0x44b530
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_44b4cc();
}

// Address range: 0x44b559 - 0x44b598
int64_t function_44b559(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44b559
    int64_t result; // 0x44b559
    int32_t * v1 = (int32_t *)(4 * result + a2); // 0x44b563
    *v1 = *v1 | (int32_t)a3;
    *(int64_t *)0x1b6e7b79 = a4;
    return result;
}

// Address range: 0x44b5aa - 0x44b5b8
int64_t function_44b5aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)(a2 + a1); // 0x44b5b3
    int64_t v2; // 0x44b5aa
    int64_t result = function_44b5ec(a1, a2, a5, a4 & -256 | (int64_t)((char)a4 - v1), v2, v2, (int64_t)&g2); // 0x44b5b6
    return result;
}

// Address range: 0x44b5cf - 0x44b5d5
int64_t function_44b5cf(void) {
    // 0x44b5cf
    return function_ffffffff8baf88c3();
}

// Address range: 0x44b5ec - 0x44b64a
int64_t function_44b5ec(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x44b5ec
    int64_t result; // 0x44b5ec
    bool v1; // 0x44b5ec
    if (v1) {
        int128_t v2 = a5; // 0x44b636
        int128_t v3 = 29 * v2; // 0x44b636
        int64_t v4 = v3; // 0x44b636
        int32_t * v5 = (int32_t *)(v4 - 2); // 0x44b63a
        int32_t v6 = *v5; // 0x44b63a
        *v5 = (int32_t)(v3 != 0x1d0000000000000000 * v2 >> 64) - (int32_t)a1 + v6;
        __asm_outsb((int16_t)a3, *(char *)v4);
        return result;
    }
    if (v1) {
        // 0x44b613
        return result;
    }
    int64_t * v7 = (int64_t *)((v1 ? -1 : 1) + a2); // 0x44b5fa
    *v7 = *v7 + a6;
    return (int64_t)(74 * *(int32_t *)(result & -256 | a2 % 256));
}

// Address range: 0x44b6b6 - 0x44b6b7
int64_t function_44b6b6(int64_t a1) {
    // 0x44b6b6
    int64_t result; // 0x44b6b6
    return result;
}

// Address range: 0x44b705 - 0x44b70a
int64_t function_44b705(void) {
    // 0x44b705
    return function_ffffffffdf37bd59();
}
