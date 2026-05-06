/*
 * Targeted RetDec C for native executable gap queue batch 852.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x298ac9-0x298cc9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x298cc9-0x298ec9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x298ec9-0x2990c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a0d19-0x2a0f19 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a0f19-0x2a1119 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a1119-0x2a1319 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a1519-0x2a1719 rank=- name=- kind=- bytes=- uncovered=-
 *   0x431a93-0x431c93 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_212867c();
int64_t function_298ac9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_298ad7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_298af1(void);
int64_t function_298b63(void);
int64_t function_298b9b(int64_t a1);
int64_t function_298bf2(int64_t a1);
int64_t function_298bfd(void);
int64_t function_298c2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_298c58(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_298c96(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_298c9f(int64_t a1);
int64_t function_298ce6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_298d11(int64_t a1);
int64_t function_298d44(int64_t a1);
int64_t function_298dfc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_298eee(void);
int64_t function_298f9a(int64_t a1);
int64_t function_298fba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_298ff9(int64_t a1);
int64_t function_299029(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29903b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a0cd0();
int64_t function_2a0d19(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2a0d85(void);
int64_t function_2a0d93(int64_t a1);
int64_t function_2a0d95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a0dcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a0e35(void);
int64_t function_2a0e37(void);
int64_t function_2a0e96(void);
int64_t function_2a0eab(int64_t a1);
int64_t function_2a0f91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a1019(void);
int64_t function_2a1024(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a1043(void);
int64_t function_2a106f(int64_t a1);
int64_t function_2a1092(void);
int64_t function_2a10be(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_2a1119(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a1132(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a115f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a11cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a11e5(void);
int64_t function_2a122c(int64_t a1);
int64_t function_2a1519(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a1536(void);
int64_t function_2a1544(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2a15dd(void);
int64_t function_2a162b(void);
int64_t function_2a163d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a16a7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a16f5(void);
int64_t function_2a1701(int64_t a1, int64_t a2);
int64_t function_2a1704(int64_t a1, int64_t a2, int64_t a3);
int64_t function_431a93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_431aa7(void);
int64_t function_431ac0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_431aef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_431b8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_431b9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result);
int64_t function_431baf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_431be3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_431c28(void);
int64_t function_431c2a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_431c5d(int64_t a1);
int64_t function_ffffffff91aab5fe();
int64_t function_ffffffff97d8cba9();
int64_t function_ffffffffa30843b3();
int64_t function_ffffffffaac060b3();
int64_t function_ffffffffabdf23e3();
int64_t function_ffffffffb623bfdc();
int64_t function_ffffffffd6c58d07();
int64_t function_fffffffff62d9098();
int64_t function_fffffffffa41ca9a();
int64_t unknown_283417d0();
int64_t unknown_46151141();
int64_t unknown_52259cd8();
int64_t unknown_5a324f1f();
int64_t unknown_611aa097();
int64_t unknown_706e85b4();
int64_t unknown_767176ec();
int64_t unknown_ffffffff9cbd18c1();
int64_t unknown_ffffffffa47eb0f3();
int64_t unknown_ffffffffaf3f2f3d();
int64_t unknown_ffffffffbc2ef592();
int64_t unknown_ffffffffe82ac7dd();
int64_t unknown_ffffffffec33f608();
int64_t unknown_fffffffffad8fa43();

// Address range: 0x298ac9 - 0x298ad5
int64_t function_298ac9(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 43); // 0x298acb
    *v1 = *v1 + (int32_t)a1;
    return unknown_52259cd8(a1, a2, a3);
}

// Address range: 0x298ad7 - 0x298af1
int64_t function_298ad7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x298ad7
    unknown_ffffffffe82ac7dd();
    *(int32_t *)-0x4bd7b45a = *(int32_t *)-0x4bd7b45a + (int32_t)a3;
    int64_t v1; // 0x298ad7
    char * v2 = (char *)(v1 + 49); // 0x298ae2
    *v2 = *v2 + (char)a4;
    unknown_767176ec();
    return function_fffffffffa41ca9a();
}

// Address range: 0x298af1 - 0x298af4
int64_t function_298af1(void) {
    // 0x298af1
    int64_t result; // 0x298af1
    return result;
}

// Address range: 0x298b63 - 0x298b66
int64_t function_298b63(void) {
    // 0x298b63
    int64_t result; // 0x298b63
    return result;
}

// Address range: 0x298b9b - 0x298b9e
int64_t function_298b9b(int64_t a1) {
    // 0x298b9b
    int64_t result; // 0x298b9b
    return result;
}

// Address range: 0x298bf2 - 0x298bf3
int64_t function_298bf2(int64_t a1) {
    // 0x298bf2
    int64_t result; // 0x298bf2
    return result;
}

// Address range: 0x298bfd - 0x298c00
int64_t function_298bfd(void) {
    // 0x298bfd
    int64_t result; // 0x298bfd
    return result;
}

// Address range: 0x298c2a - 0x298c58
int64_t function_298c2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)-0x2ef9fef88e53f9d0; // 0x298c2a
    unsigned char v2 = *(char *)(a3 + 120); // 0x298c33
    int64_t v3; // 0x298c2a
    __asm_out((int16_t)a3, (int32_t)((int64_t)v2 * (int64_t)v1 | v3 & 0xffff0000));
    uint64_t v4 = unknown_ffffffffaf3f2f3d(); // 0x298c37
    int64_t v5 = a1;
    int64_t v6 = 0; // 0x298c3c
    int64_t v7 = v5; // 0x298c3c
    int64_t v8; // 0x298c2a
    while (v8 != 0) {
        bool v9; // 0x298c2a
        int64_t v10 = v5 + (v9 ? -4 : 4); // 0x298c3c
        int64_t v11 = v8 - 1; // 0x298c3c
        v8 = v11;
        v6 = v11;
        v7 = v10;
        if (*(int32_t *)v5 == (int32_t)v4) {
            // break -> 
            break;
        }
        v5 = v10;
        v6 = 0;
        v7 = v5;
    }
    int32_t * v12 = (int32_t *)(v3 + 30); // 0x298c47
    *v12 = *v12 + (int32_t)v7;
    *(char *)0x89dcb3d = *(char *)0x89dcb3d + (char)(v4 / 256);
    int32_t v13 = 0x10000 * (*(int32_t *)v4 ^ (int32_t)v6) >> 16; // 0x298c51
    return (v13 + 125) % 256 | v13 & -256;
}

// Address range: 0x298c58 - 0x298c60
int64_t function_298c58(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x298c58
    return function_ffffffffaac060b3();
}

// Address range: 0x298c96 - 0x298c9f
int64_t function_298c96(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x298c96
    int64_t v1; // 0x298c96
    char * v2 = (char *)(v1 + 1); // 0x298c96
    *v2 = *v2 + (char)a4;
    return function_ffffffffd6c58d07();
}

// Address range: 0x298c9f - 0x298ca3
int64_t function_298c9f(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 44); // 0x298c9f
    *v1 = *v1 - 1;
    int64_t result; // 0x298c9f
    return result;
}

// Address range: 0x298ce6 - 0x298cfe
int64_t function_298ce6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x298ce6
    int64_t v1; // 0x298ce6
    *(char *)a1 = (char)v1;
    __asm_in((int16_t)a3);
    return a4 & 0xffffffff;
}

// Address range: 0x298d11 - 0x298d14
int64_t function_298d11(int64_t a1) {
    // 0x298d11
    int64_t result; // 0x298d11
    return result;
}

// Address range: 0x298d44 - 0x298d4a
int64_t function_298d44(int64_t a1) {
    // 0x298d44
    int64_t v1; // 0x298d44
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x298d44
    return function_212867c((v2 ? -4 : 4) + a1);
}

// Address range: 0x298dfc - 0x298e08
int64_t function_298dfc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x298dfc
    return unknown_ffffffffec33f608();
}

// Address range: 0x298eee - 0x298eef
int64_t function_298eee(void) {
    // 0x298eee
    int64_t result; // 0x298eee
    return result;
}

// Address range: 0x298f9a - 0x298f9b
int64_t function_298f9a(int64_t a1) {
    // 0x298f9a
    int64_t result; // 0x298f9a
    return result;
}

// Address range: 0x298fba - 0x298fd5
int64_t function_298fba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x298fba
    int64_t v1; // 0x298fba
    __asm_out((int16_t)a3, (int32_t)v1);
    return unknown_283417d0();
}

// Address range: 0x298ff9 - 0x298ffc
int64_t function_298ff9(int64_t a1) {
    // 0x298ff9
    int64_t result; // 0x298ff9
    return result;
}

// Address range: 0x299029 - 0x29903b
int64_t function_299029(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 48); // 0x29902f
    *v1 = *v1 | 0x6e3a5412;
    int64_t v2; // 0x299029
    *(char *)a3 = *(char *)&v2 - 1;
    int64_t v3; // 0x299029
    return v3 + 0x301e81e;
}

// Address range: 0x29903b - 0x299044
int64_t function_29903b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29903b
    unknown_46151141(a1, a2, a3);
    return a3 & 0xffffffff;
}

// Address range: 0x2a0d19 - 0x2a0d84
int64_t function_2a0d19(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int32_t * v2 = (int32_t *)(a2 - 45); // 0x2a0d1a
    int64_t v3; // 0x2a0d19
    int32_t * v4 = (int32_t *)(v3 + 0x2c6c725c); // 0x2a0d21
    int32_t * v5 = (int32_t *)(v3 + 0x45002b00); // 0x2a0d2f
    int32_t * v6 = (int32_t *)(a2 - 0x79efe18);
    int64_t v7 = v3 & 0xffffffff; // 0x2a0d19
    bool v8; // 0x2a0d19
    *v2 = (int32_t)v8 - (int32_t)v7 + *v2;
    int64_t v9 = a4 & 0xffffffff & -256; // 0x2a0d1d
    uint64_t v10 = v7 + 0x5500;
    *v4 = *v4 + (int32_t)v3;
    char * v11 = (char *)((v9 | 171) + 0x24dff00); // 0x2a0d27
    *v11 = *v11 - 85;
    int32_t v12 = *v5 + (int32_t)v3; // 0x2a0d2f
    *v5 = v12;
    int64_t v13 = (v10 / 256 + 171) % 256 | v9; // 0x2a0d35
    if (v12 != 0) {
        v13 = function_2a0cd0();
    }
    // 0x2a0d37
    v7 = v10 & 0xff00 | v7 & -0xff01;
    int64_t result = v13;
    char * v14 = (char *)(result - 0x27ff665e); // 0x2a0d37
    *v14 = *v14 + (char)(a3 / 256);
    int32_t v15 = *v6 | (int32_t)v7; // 0x2a0d3d
    *v6 = v15;
    while (v15 >= 0) {
        // 0x2a0d45
        if (v15 == 0) {
            // 0x2a0d47
            return result;
        }
        *v2 = *v2 - (int32_t)v7;
        v9 = result & -256;
        v10 = v7 + 0x5500;
        *v4 = *v4 + (int32_t)v3;
        v11 = (char *)((v9 | 171) + 0x24dff00);
        *v11 = *v11 - 85;
        v12 = *v5 + (int32_t)v3;
        *v5 = v12;
        v13 = (v10 / 256 + 171) % 256 | v9;
        if (v12 != 0) {
            v13 = function_2a0cd0();
        }
        // 0x2a0d37
        v7 = v10 & 0xff00 | v7 & -0xff01;
        result = v13;
        v14 = (char *)(result - 0x27ff665e);
        *v14 = *v14 + (char)(a3 / 256);
        v15 = *v6 | (int32_t)v7;
        *v6 = v15;
    }
    // 0x2a0d82
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a3;
    return result;
}

// Address range: 0x2a0d85 - 0x2a0d93
int64_t function_2a0d85(void) {
    // 0x2a0d85
    return unknown_ffffffffbc2ef592();
}

// Address range: 0x2a0d93 - 0x2a0d94
int64_t function_2a0d93(int64_t a1) {
    // 0x2a0d93
    int64_t result; // 0x2a0d93
    return result;
}

// Address range: 0x2a0d95 - 0x2a0d98
int64_t function_2a0d95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a0d95
    int64_t result; // 0x2a0d95
    return result;
}

// Address range: 0x2a0dcc - 0x2a0dd8
int64_t function_2a0dcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a0dcc
    int64_t v1; // 0x2a0dcc
    return (int64_t)(-102 * *(int32_t *)(v1 - 0x55a7aac6));
}

// Address range: 0x2a0e35 - 0x2a0e37
int64_t function_2a0e35(void) {
    // 0x2a0e35
    int64_t result; // 0x2a0e35
    return result;
}

// Address range: 0x2a0e37 - 0x2a0e39
int64_t function_2a0e37(void) {
    // 0x2a0e37
    int64_t result; // 0x2a0e37
    return result;
}

// Address range: 0x2a0e96 - 0x2a0e97
int64_t function_2a0e96(void) {
    // 0x2a0e96
    int64_t result; // 0x2a0e96
    return result;
}

// Address range: 0x2a0eab - 0x2a0eae
int64_t function_2a0eab(int64_t a1) {
    // 0x2a0eab
    return function_2a0e96();
}

// Address range: 0x2a0f91 - 0x2a0fb5
int64_t function_2a0f91(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a0f91
    unknown_611aa097();
    int64_t v1 = __asm_int3(); // 0x2a0fa6
    unsigned char v2 = *(char *)-0x176ffef7b6bfc204; // 0x2a0fa7
    return (v1 & 0xffffff00 | (int64_t)v2) + a2 & 0xffffffff;
}

// Address range: 0x2a1019 - 0x2a101a
int64_t function_2a1019(void) {
    // 0x2a1019
    int64_t result; // 0x2a1019
    return result;
}

// Address range: 0x2a1024 - 0x2a103a
int64_t function_2a1024(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a1024
    int64_t v1; // 0x2a1024
    int32_t * v2 = (int32_t *)(v1 - 0x17c95bfc); // 0x2a1024
    *v2 = *v2 + (int32_t)v1;
    int32_t * v3 = (int32_t *)(a4 - 0x78fddcc9); // 0x2a102d
    *v3 = *v3 + (int32_t)a3;
    return v1 & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x2a1043 - 0x2a1044
int64_t function_2a1043(void) {
    // 0x2a1043
    int64_t result; // 0x2a1043
    return result;
}

// Address range: 0x2a106f - 0x2a1070
int64_t function_2a106f(int64_t a1) {
    // 0x2a106f
    int64_t result; // 0x2a106f
    return result;
}

// Address range: 0x2a1092 - 0x2a1094
int64_t function_2a1092(void) {
    // 0x2a1092
    return function_2a1019();
}

// Address range: 0x2a10be - 0x2a10fb
int64_t function_2a10be(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    unsigned char v1 = *(char *)(a4 + 116) + (char)(a4 / 256); // 0x2a10c7
    uint64_t v2 = (256 * (int64_t)v1 | a4 & -0xff01) - 1; // 0x2a10ca
    int64_t v3; // 0x2a10be
    if (v1 == 0 || v2 == 0) {
        // 0x2a10cc
        *(char *)-0x50184a2d = *(char *)-0x50184a2d + (char)(v3 / 256);
    }
    char v4 = *(char *)(a1 + 56); // 0x2a10d4
    *(char *)0xd5d41d5a = __asm_insb((int16_t)a3);
    *(int32_t *)0x13d2da0ea068000 = *(int32_t *)-0x43c386671073cece;
    char * v5 = (char *)(v2 & -0x10000 | 256 * (int64_t)(v4 ^ (char)(v2 / 256)) | 20); // 0x2a10e6
    *v5 = *v5 + (char)(a3 / 256);
    int64_t result = unknown_ffffffffa47eb0f3(); // 0x2a10e9
    __asm_out_133(-24, (char)result);
    int32_t * v6 = (int32_t *)(8 * v3 + 0x3c651 + v3); // 0x2a10f1
    *v6 = *v6 + (int32_t)v3;
    return result;
}

// Address range: 0x2a1119 - 0x2a1131
int64_t function_2a1119(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a1119
    return unknown_5a324f1f();
}

// Address range: 0x2a1132 - 0x2a1135
int64_t function_2a1132(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a1132
    int64_t result; // 0x2a1132
    return result;
}

// Address range: 0x2a115f - 0x2a1163
int64_t function_2a115f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a115f
    int64_t result; // 0x2a115f
    return result;
}

// Address range: 0x2a11cd - 0x2a11d8
int64_t function_2a11cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a11cd
    int64_t result; // 0x2a11cd
    unsigned char v1 = (char)result;
    *(char *)result = v1 / 128 | 2 * v1;
    *(int32_t *)(a4 + 43) = (int32_t)a1;
    return result;
}

// Address range: 0x2a11e5 - 0x2a11ea
int64_t function_2a11e5(void) {
    // 0x2a11e5
    return function_ffffffffabdf23e3();
}

// Address range: 0x2a122c - 0x2a122d
int64_t function_2a122c(int64_t a1) {
    // 0x2a122c
    int64_t result; // 0x2a122c
    return result;
}

// Address range: 0x2a1519 - 0x2a1525
int64_t function_2a1519(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = __asm_wait(a5); // 0x2a151a
    uint32_t v1 = (int32_t)a4 % 32; // 0x2a151b
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(result + 0x68faa33a); // 0x2a151b
        *v2 = *v2 >> v1;
    }
    return result;
}

// Address range: 0x2a1536 - 0x2a153b
int64_t function_2a1536(void) {
    // 0x2a1536
    return function_ffffffffb623bfdc();
}

// Address range: 0x2a1544 - 0x2a15ce
int64_t function_2a1544(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x2a1544
    int64_t v1; // 0x2a1544
    int64_t v2 = v1;
    int64_t v3 = a2;
    *(int32_t *)v2 = (int32_t)v1 + (int32_t)v2;
    int32_t * v4 = (int32_t *)(v3 - 126); // 0x2a1599
    uint32_t v5 = *v4; // 0x2a1599
    uint32_t v6 = v5 + (int32_t)a3; // 0x2a1599
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x2a1599
    *v4 = v6;
    *(char *)a1 = *(char *)&v3;
    if (v7 % 2 != 0) {
        uint64_t v8 = v1 + a4 / 256; // 0x2a1597
        int64_t v9 = v1 & -256; // 0x2a1597
        return (v8 + 8 + (int64_t)((int32_t)(v8 % 256 | v9) < 0x2096e101)) % 256 | v9;
    }
    if (v6 < v5 || v6 == 0) {
        // 0x2a15ac
        __asm_int(-86);
        uint64_t v10 = unknown_706e85b4(); // 0x2a15ae
        *(char *)(a4 + 0x78de576d + v10) = (char)(v10 / 256);
        int64_t v11 = unknown_ffffffff9cbd18c1(); // 0x2a15bb
        __asm_out((int16_t)a3, (int32_t)v11);
        bool v12; // 0x2a1544
        int64_t v13 = ((int32_t)((v12 ? 0xffffffff : 1) + a1) ^ -2) < 0xe8d70aae ? 0xfd0c2db3 : 0xfd0c2db2; // 0x2a15c9
        return v11 - v13 & 0xffffffff;
    }
    // 0x2a154d
    return function_fffffffff62d9098();
}

// Address range: 0x2a15dd - 0x2a15de
int64_t function_2a15dd(void) {
    // 0x2a15dd
    int64_t result; // 0x2a15dd
    return result;
}

// Address range: 0x2a162b - 0x2a162c
int64_t function_2a162b(void) {
    // 0x2a162b
    int64_t result; // 0x2a162b
    return result;
}

// Address range: 0x2a163d - 0x2a1661
int64_t function_2a163d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a163d
    int64_t v1; // 0x2a163d
    int64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = unknown_fffffffffad8fa43(); // 0x2a1642
    bool v5; // 0x2a163d
    if (!v5) {
        v4 = function_2a162b();
    }
    uint64_t v6 = v4;
    *(int32_t *)v3 = (int32_t)v3 + (int32_t)v1 + (int32_t)v5;
    int32_t * v7 = (int32_t *)(a3 - 24); // 0x2a1648
    int32_t v8 = a1; // 0x2a1648
    *v7 = *v7 & v8;
    int32_t * v9 = (int32_t *)(v2 + 0x30c60aa0 + 4 * v2); // 0x2a164b
    uint32_t v10 = *v9; // 0x2a164b
    uint32_t v11 = v10 + (int32_t)a4; // 0x2a164b
    *v9 = v11;
    int64_t result = v6 & -256 | (int64_t)*(char *)(v6 % 256 + v3); // 0x2a1652
    if (v11 < v10) {
        result = function_2a15dd();
    }
    int32_t * v12 = (int32_t *)(256 * result + v3 & 0xff00 | v3 & -0xff01); // 0x2a1656
    *v12 = *v12 ^ v8;
    int32_t * v13 = (int32_t *)(a2 + 0x6d168949); // 0x2a165a
    *v13 = *v13 + (int32_t)a3;
    return result;
}

// Address range: 0x2a16a7 - 0x2a16ab
int64_t function_2a16a7(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 105); // 0x2a16a7
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x2a16a7
    return result;
}

// Address range: 0x2a16f5 - 0x2a16fc
int64_t function_2a16f5(void) {
    // 0x2a16f5
    int64_t v1; // 0x2a16f5
    return function_2a1704(v1, v1, v1);
}

// Address range: 0x2a1701 - 0x2a1704
int64_t function_2a1701(int64_t a1, int64_t a2) {
    // 0x2a1701
    int64_t result; // 0x2a1701
    int32_t * v1 = (int32_t *)(result - 38); // 0x2a1701
    *v1 = *v1 + (int32_t)a2;
    return result;
}

// Address range: 0x2a1704 - 0x2a1714
int64_t function_2a1704(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __asm_int1(); // 0x2a170b
    *(int32_t *)a3 = (int32_t)a1;
    return v1 & 0xffffffff ^ 0x6001e81a;
}

// Address range: 0x431a93 - 0x431aa6
int64_t function_431a93(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x431a93
    int64_t v1; // 0x431a93
    char * v2 = (char *)(v1 & 0xffffffff ^ 0xf7f5254); // 0x431aa3
    *v2 = *v2 ^ (char)a3;
    return v1 & 0xffffffff;
}

// Address range: 0x431aa7 - 0x431aac
int64_t function_431aa7(void) {
    // 0x431aa7
    int64_t v1; // 0x431aa7
    int64_t result = v1;
    bool v2; // 0x431aa7
    *(char *)result = 2 * (char)result | (char)v2;
    return result;
}

// Address range: 0x431ac0 - 0x431ac9
int64_t function_431ac0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x431ac0
    int64_t result; // 0x431ac0
    return result;
}

// Address range: 0x431aef - 0x431afd
int64_t function_431aef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x431aef
    int64_t v1; // 0x431aef
    uint64_t v2 = v1;
    int16_t v3 = a3; // 0x431af1
    __asm_out_134(v3, (char)v2);
    int64_t v4 = (v2 + 238) % 256 | v2 & -256; // 0x431af2
    __asm_out_135(v3, (int16_t)v4);
    char * v5 = (char *)v4; // 0x431af6
    *v5 = *v5 + (char)(v2 / 256);
    return function_ffffffff91aab5fe();
}

// Address range: 0x431b8b - 0x431b9b
int64_t function_431b8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x431b8b
    return function_ffffffff97d8cba9();
}

// Address range: 0x431b9b - 0x431baf
int64_t function_431b9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result) {
    // 0x431b9b
    bool v1; // 0x431b9b
    uint32_t v2 = (int32_t)v1 + (int32_t)a3 + *(int32_t *)(a1 + 106); // 0x431b9b
    char * v3 = (char *)(a4 + 27); // 0x431b9e
    unsigned char v4 = *v3; // 0x431b9e
    *v3 = (char)(v2 / 256);
    int64_t v5; // 0x431b9b
    unsigned char v6 = *(char *)(v5 % 256 + v5); // 0x431ba1
    __asm_out((int16_t)v2 % 256 | 256 * (int16_t)v4, (int32_t)(v5 & 0xffffff00 | (int64_t)v6));
    return result;
}

// Address range: 0x431baf - 0x431bce
int64_t function_431baf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x431baf
    *(char *)((a4 & -0xff01) - 0x5ced982) = (char)a4;
    int64_t v1; // 0x431baf
    int64_t v2; // 0x431baf
    *(int32_t *)a2 = *(int32_t *)&v1 - (int32_t)v2;
    return v2 & 0xffffffff;
}

// Address range: 0x431be3 - 0x431beb
int64_t function_431be3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x431be3
    int64_t v1; // 0x431be3
    *(char *)a4 = (char)v1 + (char)a3;
    bool v2; // 0x431be3
    return function_431c2a((v2 ? -1 : 1) + a1, a2, a3, a4, v1, (int64_t)&g1);
}

// Address range: 0x431c28 - 0x431c2a
int64_t function_431c28(void) {
    // 0x431c28
    __asm_rdtsc();
    return 0;
}

// Address range: 0x431c2a - 0x431c4c
int64_t function_431c2a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x431c2a
    int64_t v1; // 0x431c2a
    int64_t v2 = v1;
    int64_t v3 = v1 & -256; // 0x431c2a
    int32_t v4 = a1; // 0x431c33
    int32_t v5 = v1; // 0x431c33
    int32_t v6 = v5 + v4; // 0x431c33
    if (v6 < 0 != ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x431c48
        *(char *)(int64_t)v6 = (char)a2;
        return v3 | 221;
    }
    // 0x431c38
    *(char *)v2 = (char)v2 - (char)v1;
    int64_t v7 = v3 | 189; // 0x431c3f
    char * v8 = (char *)(v7 + 30); // 0x431c42
    *v8 = *v8 | (char)(a4 / 256);
    return v7 & 0x926be35;
}

// Address range: 0x431c5d - 0x431c63
int64_t function_431c5d(int64_t a1) {
    // 0x431c5d
    int64_t v1; // 0x431c5d
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x431c5d
    return function_ffffffffa30843b3((v2 ? -4 : 4) + a1);
}
