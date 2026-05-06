/*
 * Targeted RetDec C for native executable gap queue batch 613.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x286ecb-0x2870cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e8a96-0x3e8c96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e8e96-0x3e9096 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e9096-0x3e9296 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e9296-0x3e9496 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4008d1-0x400ad1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x400ad1-0x400cd1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x400cd1-0x400ed1 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
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

int64_t function_114c6d16();
int64_t function_1b07e8e8();
int64_t function_286ecb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_286f6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_28709e(void);
int64_t function_28709f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2870a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2870ac(void);
int64_t function_3522af4c();
int64_t function_3658d3cf();
int64_t function_3e8a3a();
int64_t function_3e8a7f();
int64_t function_3e8a96(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e8aa4(int64_t a1, int64_t a2);
int64_t function_3e8b00(void);
int64_t function_3e8b0e(int64_t a1, int64_t a2);
int64_t function_3e8b23(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e8b35(void);
int64_t function_3e8b3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e8b52(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e8b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e8be6(void);
int64_t function_3e8bf3(int64_t a1);
int64_t function_3e8c14(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e8c2b(int64_t a1, int64_t a2);
int64_t function_3e8c5d(void);
int64_t function_3e8e96(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e8ed4(void);
int64_t function_3e8ed7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e8f4d(void);
int64_t function_3e8f73(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e8f8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e900b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e9052(void);
int64_t function_3e9057(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e9069(int64_t a1);
int64_t function_3e9087(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3e90b0(void);
int64_t function_3e90cc(void);
int64_t function_3e910d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t result, int64_t a7);
int64_t function_3e91b5(void);
int64_t function_3e91f0(void);
int64_t function_3e91fa(void);
int64_t function_3e9212(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e9221(void);
int64_t function_3e9252(int64_t a1);
int64_t function_3e9291(int64_t a1);
int64_t function_3e930b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e9394(void);
int64_t function_3e93c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_3e9421(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e9438(int64_t a1, int64_t a2);
int64_t function_40086e();
int64_t function_4008d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_400918(int64_t a1);
int64_t function_40091e(void);
int64_t function_400943(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40095b(int64_t a1, int64_t a2, int64_t a3, int16_t a4);
int64_t function_400974(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4009f4(void);
int64_t function_400a34(int64_t a1);
int64_t function_400a5c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_400a81(int64_t a1);
int64_t function_400ac4(int64_t a1);
int64_t function_400ae8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_400af9(void);
int64_t function_400b74(int64_t a1, int64_t a2, int64_t a3);
int64_t function_400be9(void);
int64_t function_400bf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_400c23(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_400c5a(void);
int64_t function_400c6e(void);
int64_t function_400c7c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_400cc4(void);
int64_t function_400cc7(void);
int64_t function_400cdc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5, int64_t a6);
int64_t function_400dce(void);
int64_t function_400df9(void);
int64_t function_400dfa(void);
int64_t function_400e03(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_400e70(void);
int64_t function_400eba(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_46898cdc();
int64_t function_472a54eb();
int64_t function_caf2a();
int64_t function_ffffffff806dce9d();
int64_t function_ffffffffbd89bd8b();
int64_t function_ffffffffc3a1bd0c();
int64_t function_ffffffffd87fd10c();
int64_t function_ffffffffe5195763();
int64_t function_fffffffff0d43315();
int64_t unknown_ffffffffb74b5b55();

// Address range: 0x286ecb - 0x286f6d
int64_t function_286ecb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a8;
    int64_t v2 = (int64_t)&v1; // 0x286f43
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x286f52
    v1 = v3;
    *(int64_t *)(v2 - 8) = v3;
    return function_caf2a();
}

// Address range: 0x286f6d - 0x287078
int64_t function_286f6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x286f6d
    int64_t v1; // bp-56, 0x286f6d
    int64_t v2 = (int64_t)&v1; // 0x28703d
    int64_t v3 = v2 + 8; // 0x287041
    v1 = v3;
    int64_t v4 = *(int64_t *)(v2 + 24); // 0x28705a
    *(int64_t *)(v2 + 16) = v4;
    *(int64_t *)v3 = v4;
    return function_caf2a();
}

// Address range: 0x28709e - 0x28709f
int64_t function_28709e(void) {
    // 0x28709e
    int64_t result; // 0x28709e
    return result;
}

// Address range: 0x28709f - 0x2870a4
int64_t function_28709f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x28709f
    *v1 = *v1 | (char)a4;
    return function_2870ac();
}

// Address range: 0x2870a4 - 0x2870ac
int64_t function_2870a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2870a4
    int64_t v1; // 0x2870a4
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 + 28 + 4 * v2); // 0x2870a6
    *v3 = *v3 + (char)a4;
    return v2 & -164;
}

// Address range: 0x2870ac - 0x2870cb
int64_t function_2870ac(void) {
    // 0x2870ac
    int64_t result; // 0x2870ac
    return result;
}

// Address range: 0x3e8a96 - 0x3e8aa3
int64_t function_3e8a96(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e8a96
    int64_t result; // 0x3e8a96
    bool v1; // 0x3e8a96
    if (!v1) {
        // 0x3e8aa1
        return result;
    }
    // 0x3e8a98
    return result & 0xffffffff ^ 0x162217e2;
}

// Address range: 0x3e8aa4 - 0x3e8aff
int64_t function_3e8aa4(int64_t a1, int64_t a2) {
    // 0x3e8aa4
    int64_t v1; // 0x3e8aa4
    uint32_t v2 = *(int32_t *)(v1 + 53); // 0x3e8aa4
    int64_t v3 = a1; // bp-8, 0x3e8aa7
    *(int32_t *)a1 = (int32_t)v1;
    __asm_int(44);
    uint32_t v4 = (int32_t)v1 & -256 | 15; // 0x3e8ab3
    int64_t v5 = v4 - 0x2ca23894; // 0x3e8ab8
    if (v4 < 0x2ca23894) {
        v5 = function_3e8a3a();
    }
    unsigned char v6 = (char)v1; // 0x3e8abf
    char v7 = (char)(v2 / 256) + v6; // 0x3e8abf
    int64_t v8 = v5; // 0x3e8ac1
    if (v7 >= v6 && v7 != 0) {
      lab_0x3e8ac4_2:
        // 0x3e8ac4
        return v8 | 104;
    }
    // 0x3e8aea
    bool v9; // 0x3e8aa4
    int64_t v10 = v9 ? -4 : 4; // 0x3e8aa8
    unsigned char v11 = v7;
    int64_t v12 = v10 + a2 + (v9 ? -1 : 1); // 0x3e8aea
    int32_t * v13 = (int32_t *)v12;
    __asm_outsd((int16_t)v2, *v13);
    if (v7 == 0) {
        function_3e8a7f();
    }
    uint32_t v14 = *v13; // 0x3e8aee
    *v13 = (int32_t)(v10 + a1);
    int64_t v15 = v14; // 0x3e8aee
    int64_t v16 = __asm_int3(v14); // 0x3e8af0
    *(int64_t *)((int64_t)&v3 - 8) = -0x32c59516;
    int32_t v17 = *(int32_t *)((v16 & 0xffffffff) - 75) | (int32_t)v16; // 0x3e8af8
    *(int32_t *)v15 = __asm_insd(0x6aea);
    while (v17 >= 0 == (v17 != 0)) {
        char v18 = v11 + 106; // 0x3e8abf
        if (v11 <= 149 && v18 != 0) {
            // 0x3e8ac4
            v8 = v12 & 0xffffffff;
            return v8 | 104;
        }
        v11 = v18;
        v12 = (int64_t)v17 + (v9 ? -1 : 1);
        v13 = (int32_t *)v12;
        __asm_outsd(0x6aea, *v13);
        if (v18 == 0) {
            function_3e8a7f();
        }
        // 0x3e8aee
        v14 = *v13;
        *v13 = (int32_t)v15;
        v15 = v14;
        v16 = __asm_int3(v14);
        *(int64_t *)((int64_t)&v3 - 8) = -0x32c59516;
        v17 = *(int32_t *)((v16 & 0xffffffff) - 75) | (int32_t)v16;
        *(int32_t *)v15 = __asm_insd(0x6aea);
    }
    // 0x3e8afe
    *(char *)v15 = __asm_insb(0x6aea);
    return v12 & 0xffffffff;
}

// Address range: 0x3e8b00 - 0x3e8b01
int64_t function_3e8b00(void) {
    // 0x3e8b00
    int64_t result; // 0x3e8b00
    return result;
}

// Address range: 0x3e8b0e - 0x3e8b12
int64_t function_3e8b0e(int64_t a1, int64_t a2) {
    // 0x3e8b0e
    int64_t result; // 0x3e8b0e
    return result;
}

// Address range: 0x3e8b23 - 0x3e8b35
int64_t function_3e8b23(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e8b23
    int64_t v1; // 0x3e8b23
    int64_t v2 = (int64_t)&v1; // 0x3e8b23
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    char v3 = *(char *)(a1 + 27); // 0x3e8b25
    *(int64_t *)((v2 & -256 | (int64_t)(v3 + (char)v2)) - 8) = a3;
    return function_3658d3cf();
}

// Address range: 0x3e8b35 - 0x3e8b37
int64_t function_3e8b35(void) {
    // 0x3e8b35
    int64_t v1; // 0x3e8b35
    return function_3e8b52(v1, v1, v1, v1);
}

// Address range: 0x3e8b3c - 0x3e8b52
int64_t function_3e8b3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 42); // 0x3e8b3c
    uint32_t v2 = *v1; // 0x3e8b3c
    bool v3; // 0x3e8b3c
    *v1 = v2 / 64 | 0x4000000 * (int32_t)v3 | 0x8000000 * v2;
    int64_t result; // 0x3e8b3c
    char * v4 = (char *)(result - 0x579ea248); // 0x3e8b44
    *v4 = -*v4;
    char * v5 = (char *)(a3 + 61); // 0x3e8b4a
    char v6 = *v5; // 0x3e8b4a
    *v5 = 128 * v6;
    int64_t v7; // 0x3e8b3c
    int32_t v8 = *(int32_t *)&v7; // 0x3e8b4e
    int64_t v9; // 0x3e8b3c
    *(int32_t *)v7 = v8 - ((int32_t)((v6 & 2) != 0) | (int32_t)(int64_t)&v9);
    return result;
}

// Address range: 0x3e8b52 - 0x3e8b5f
int64_t function_3e8b52(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e8b52
    int64_t v1; // 0x3e8b52
    uint64_t v2 = v1;
    bool v3; // 0x3e8b52
    int64_t v4 = v3; // 0x3e8b52
    int64_t v5 = v2 + 0x667a8857 + v4; // 0x3e8b52
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x3e8b52
    bool v7 = v3 ? v5 <= v2 : v2 > 0xffffffff998577a8; // 0x3e8b52
    return v5 & -0xff01 | 256 * (16 * (int64_t)(v2 % 16 + 7 + v4 > 15) | (int64_t)v7 | 64 * (int64_t)(v5 == 0) | 128 * (int64_t)(v5 < 0) | 4 * (int64_t)(v6 % 2 == 0)) | 512;
}

// Address range: 0x3e8b60 - 0x3e8b7a
int64_t function_3e8b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e8b60
    int64_t v1; // 0x3e8b60
    int32_t * v2 = (int32_t *)(2 * a3 - 97 + v1); // 0x3e8b67
    *v2 = *v2 + (int32_t)a3;
    return function_ffffffffd87fd10c();
}

// Address range: 0x3e8be6 - 0x3e8be9
int64_t function_3e8be6(void) {
    // 0x3e8be6
    int64_t result; // 0x3e8be6
    return result;
}

// Address range: 0x3e8bf3 - 0x3e8bf7
int64_t function_3e8bf3(int64_t a1) {
    // 0x3e8bf3
    int64_t result; // 0x3e8bf3
    return result;
}

// Address range: 0x3e8c14 - 0x3e8c25
int64_t function_3e8c14(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e8c14
    unknown_ffffffffb74b5b55();
    return function_ffffffff806dce9d();
}

// Address range: 0x3e8c2b - 0x3e8c3b
int64_t function_3e8c2b(int64_t a1, int64_t a2) {
    // 0x3e8c2b
    int64_t result; // 0x3e8c2b
    char * v1 = (char *)(2 * result + a1); // 0x3e8c2c
    *v1 = *v1 - 121;
    return result;
}

// Address range: 0x3e8c5d - 0x3e8c63
int64_t function_3e8c5d(void) {
    // 0x3e8c5d
    return function_46898cdc();
}

// Address range: 0x3e8e96 - 0x3e8eb1
int64_t function_3e8e96(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x31cfba); // 0x3e8e97
    int32_t v2 = *v1 - (int32_t)a2; // 0x3e8e97
    unsigned char v3 = llvm_ctpop_i8((char)v2); // 0x3e8e97
    *v1 = v2;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    if (v3 % 2 == 0) {
        // 0x3e8ea8
        int64_t v4; // 0x3e8e96
        return v4 + 0x1ac4213;
    }
    // 0x3e8ea0
    return a4 & 0xffffffff;
}

// Address range: 0x3e8ed4 - 0x3e8ed7
int64_t function_3e8ed4(void) {
    // 0x3e8ed4
    int64_t result; // 0x3e8ed4
    return result;
}

// Address range: 0x3e8ed7 - 0x3e8f36
int64_t function_3e8ed7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e8ed7
    bool v1; // 0x3e8ed7
    if (v1 || v1) {
        // 0x3e8f27
        int64_t v2; // 0x3e8ed7
        float80_t v3; // 0x3e8ed7
        *(int16_t *)(v2 + 18) = (int16_t)v3;
        int64_t result = a4 & 0xffffffff; // 0x3e8f2c
        unsigned char v4 = (char)v2;
        unsigned char v5 = v4 + (char)a4; // 0x3e8f2f
        unsigned char v6 = v5 + (char)((int32_t)v2 < (int32_t)a1); // 0x3e8f2f
        bool v7 = (int32_t)v2 < (int32_t)a1 ? v6 <= v4 : v5 < v4; // 0x3e8f2f
        *(char *)result = v6;
        int64_t v8; // 0x3e8ed7
        char * v9 = (char *)(8 * a2 + 54 + (int64_t)&v8); // 0x3e8f32
        *v9 = (char)v7 - (char)(v2 / 256) + *v9;
        return result;
    }
    // 0x3e8eda
    return function_3522af4c();
}

// Address range: 0x3e8f4d - 0x3e8f56
int64_t function_3e8f4d(void) {
    // 0x3e8f4d
    int64_t v1; // 0x3e8f4d
    int32_t * v2 = (int32_t *)(v1 + 0x5435fb4c); // 0x3e8f4d
    *v2 = 0x10000000 * *v2;
    return function_3e8f8b(v1, v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x3e8f73 - 0x3e8f8b
int64_t function_3e8f73(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e8f73
    return a2 & 0xffffffff;
}

// Address range: 0x3e8f8b - 0x3e8fd4
int64_t function_3e8f8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e8f8b
    int64_t result; // 0x3e8f8b
    unsigned char v1 = (char)result;
    unsigned char v2 = (char)result;
    if (a4 != 1 == v1 == v2) {
        // 0x3e8f98
        return result ^ 227;
    }
    if (v1 >= v2) {
        // 0x3e8fcf
        return result & 0xffffffff ^ 0x178c5a49;
    }
    // 0x3e8f94
    return result;
}

// Address range: 0x3e900b - 0x3e902d
int64_t function_3e900b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e900b
    int64_t v1; // 0x3e900b
    char * v2 = (char *)(v1 + 97); // 0x3e900b
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0x3e900b
    uint32_t v4 = *(int32_t *)&v3; // 0x3e901a
    int64_t result = v4; // 0x3e901a
    bool v5; // 0x3e900b
    char * v6 = (char *)(a2 + 0x1b308766 + (v5 ? -4 : 4)); // 0x3e901b
    unsigned char v7 = *v6; // 0x3e901b
    unsigned char v8 = v7 + (char)(v1 / 256); // 0x3e901b
    *v6 = v8;
    char * v9 = (char *)(result + 2); // 0x3e9021
    *v9 = *v9 - (char)v4 + (char)(v8 < v7);
    return result;
}

// Address range: 0x3e9052 - 0x3e9053
int64_t function_3e9052(void) {
    // 0x3e9052
    int64_t result; // 0x3e9052
    return result;
}

// Address range: 0x3e9057 - 0x3e9065
int64_t function_3e9057(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e9057
    int64_t v1; // 0x3e9057
    int64_t v2 = v1 + 0xde4172bc; // 0x3e9057
    *(int32_t *)a1 = (int32_t)v2;
    return v2 & 0xffffffff;
}

// Address range: 0x3e9069 - 0x3e9072
int64_t function_3e9069(int64_t a1) {
    // 0x3e9069
    int64_t result; // 0x3e9069
    bool v1; // 0x3e9069
    if (!v1) {
        result = function_1b07e8e8();
    }
    // 0x3e90b7
    return result;
}

// Address range: 0x3e9087 - 0x3e90b0
int64_t function_3e9087(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3e9087
    int64_t v1; // 0x3e9087
    unsigned char v2 = (char)v1; // 0x3e9090
    bool v3; // 0x3e9087
    char v4 = v3; // 0x3e9090
    unsigned char v5 = v2 - 14 + v4; // 0x3e9090
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x3e9090
    bool v7 = v3 ? v5 <= v2 : v2 > 13; // 0x3e9090
    *(char *)a1 = (char)a4;
    if (((int32_t)(v1 & 0xffff0000 | (int64_t)v5 || 256 * (64 * (int64_t)(v5 == 0) | (int64_t)v7 | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v2 % 16 + 2 + v4 > 15) | 4 * (int64_t)(v6 % 2 == 0))) || 512) != -0x5582c1a9) {
        function_3e9052();
    }
    // 0x3e909d
    return 0x592d52d7;
}

// Address range: 0x3e90b0 - 0x3e90b7
int64_t function_3e90b0(void) {
    // 0x3e90b0
    bool v1; // 0x3e90b0
    return __asm_in(-10) - (v1 ? 0x390d611b : 0x390d611a);
}

// Address range: 0x3e90cc - 0x3e90d0
int64_t function_3e90cc(void) {
    // 0x3e90cc
    int64_t result; // 0x3e90cc
    return result;
}

// Address range: 0x3e910d - 0x3e9140
int64_t function_3e910d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t result, int64_t a7) {
    // 0x3e910d
    int64_t v1; // 0x3e910d
    char * v2 = (char *)(v1 - 114); // 0x3e910d
    *v2 = *v2 & (char)a5;
    char * v3 = (char *)(a3 + 0x2f73620d); // 0x3e9111
    unsigned char v4 = *v3; // 0x3e9111
    *v3 = (char)v1;
    int64_t v5; // 0x3e910d
    char v6 = *(char *)&v5; // 0x3e9117
    __asm_out((int16_t)(a3 & 0xff00 | (int64_t)(v6 + (char)a3)), (int32_t)(v1 & 0xffffff00 | (int64_t)v4));
    int32_t v7 = *(int32_t *)(a4 - 1); // 0x3e9126
    *(char *)(int64_t)(v7 & (int32_t)v1) = (char)(a4 / 256);
    return result;
}

// Address range: 0x3e91b5 - 0x3e91b7
int64_t function_3e91b5(void) {
    // 0x3e91b5
    int64_t v1; // 0x3e91b5
    return function_3e9212(v1, v1, v1, v1);
}

// Address range: 0x3e91f0 - 0x3e91f7
int64_t function_3e91f0(void) {
    // 0x3e91f0
    return function_ffffffffe5195763();
}

// Address range: 0x3e91fa - 0x3e91fb
int64_t function_3e91fa(void) {
    // 0x3e91fa
    int64_t result; // 0x3e91fa
    return result;
}

// Address range: 0x3e9212 - 0x3e9216
int64_t function_3e9212(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e9212
    int64_t result; // 0x3e9212
    return result;
}

// Address range: 0x3e9221 - 0x3e9226
int64_t function_3e9221(void) {
    // 0x3e9221
    return function_3e91fa();
}

// Address range: 0x3e9252 - 0x3e9255
int64_t function_3e9252(int64_t a1) {
    // 0x3e9252
    int64_t result; // 0x3e9252
    return result;
}

// Address range: 0x3e9291 - 0x3e9297
int64_t function_3e9291(int64_t a1) {
    // 0x3e9291
    int64_t v1; // 0x3e9291
    return function_fffffffff0d43315(v1 & 0xffffffff);
}

// Address range: 0x3e930b - 0x3e9315
int64_t function_3e930b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e930b
    int64_t result; // 0x3e930b
    int32_t * v1 = (int32_t *)(result + 0x1f4e5838); // 0x3e930b
    *v1 = *v1 | (int32_t)a4;
    return result;
}

// Address range: 0x3e9394 - 0x3e9395
int64_t function_3e9394(void) {
    // 0x3e9394
    int64_t result; // 0x3e9394
    return result;
}

// Address range: 0x3e93c7 - 0x3e941e
int64_t function_3e93c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    int64_t v1 = a2;
    bool v2; // 0x3e93c7
    if (v2 || false) {
        // 0x3e940d
        int64_t v3; // 0x3e93c7
        char * v4 = (char *)(v3 + 24); // 0x3e940d
        *v4 = *v4 << 7;
        __asm_outsd((int16_t)a3, *(int32_t *)&v1);
        return result;
    }
    // 0x3e93c9
    return function_3e9438(a1, a2);
}

// Address range: 0x3e9421 - 0x3e9425
int64_t function_3e9421(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e9421
    int64_t result; // 0x3e9421
    *(int32_t *)(a4 + 94) = (int32_t)result;
    return result;
}

// Address range: 0x3e9438 - 0x3e944d
int64_t function_3e9438(int64_t a1, int64_t a2) {
    // 0x3e9438
    float80_t v1; // 0x3e9438
    *(float64_t *)(a1 + 6) = (float64_t)v1;
    int64_t v2; // 0x3e9438
    return v2 & -256 | (int64_t)(*(char *)-0x1390d5587c14fbf6 - 25);
}

// Address range: 0x4008d1 - 0x400915
int64_t function_4008d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4008d1
    int64_t v1; // 0x4008d1
    int64_t v2 = v1;
    char v3 = *(char *)(2 * a1 + 0x2964510 + a4); // 0x4008d1
    int64_t v4 = v2 & -256 | (int64_t)(v3 & (char)v2); // 0x4008d9
    if ((int16_t)v2 >= 0) {
        v4 = function_40086e();
    }
    uint32_t v5 = (int32_t)v4; // 0x4008db
    if (v5 >= 0x255efa7) {
        // 0x4008e2
        return (int64_t)(v5 - 0x255efa7 + *(int32_t *)(a2 + 60) & (int32_t)v1);
    }
    int64_t result = __asm_int3((int32_t)a1); // 0x400901
    __asm_int(103);
    int32_t * v6 = (int32_t *)result; // 0x400908
    *v6 = 2 * *v6;
    int32_t * v7 = (int32_t *)(a3 + 48); // 0x40090a
    int32_t v8 = *v7; // 0x40090a
    *v7 = 0x40000 * v8;
    __readgsbyte(a3 + a1 + (int64_t)((v8 & 0x4000) != 0) & 0xffffffff);
    return result;
}

// Address range: 0x400918 - 0x400919
int64_t function_400918(int64_t a1) {
    // 0x400918
    int64_t result; // 0x400918
    return result;
}

// Address range: 0x40091e - 0x40091f
int64_t function_40091e(void) {
    // 0x40091e
    int64_t result; // 0x40091e
    return result;
}

// Address range: 0x400943 - 0x40094e
int64_t function_400943(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x400943
    int64_t v1; // 0x400943
    char * v2 = (char *)(v1 - 57); // 0x400946
    *v2 = *v2 & (char)a4;
    return (a4 + 73) % 256 | a4 & 0xffffff00;
}

// Address range: 0x40095b - 0x400974
int64_t function_40095b(int64_t a1, int64_t a2, int64_t a3, int16_t a4) {
    // 0x40095b
    int64_t result; // 0x40095b
    bool v1; // 0x40095b
    if (!v1) {
        result = function_40091e();
    }
    // 0x40095d
    *(int32_t *)(result - 0x799a9397) = (int32_t)a3;
    int32_t * v2 = (int32_t *)(result + 0x6edd7039); // 0x400965
    uint32_t v3 = *v2; // 0x400965
    *v2 = 2048 * v3 | 1024 * (int32_t)v1 | v3 / 0x400000;
    return result;
}

// Address range: 0x400974 - 0x400988
int64_t function_400974(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x400974
    int64_t v1; // 0x400974
    int64_t v2 = v1;
    __asm_out_133(-79, (char)v2);
    int64_t v3 = v2 + 256 * a4 & 0xff00 | v2 & -0xff01; // 0x40097b
    *(int64_t *)(v3 + 0x6919352e) = a5;
    uint32_t v4 = *(int32_t *)(2 * v1); // 0x400980
    return (v3 & 0xffffffff | 0x6919352e00000000) / (int64_t)v4 & 0xffffffff;
}

// Address range: 0x4009f4 - 0x4009f5
int64_t function_4009f4(void) {
    // 0x4009f4
    int64_t result; // 0x4009f4
    return result;
}

// Address range: 0x400a34 - 0x400a37
int64_t function_400a34(int64_t a1) {
    // 0x400a34
    int64_t result; // 0x400a34
    return result;
}

// Address range: 0x400a5c - 0x400a6a
int64_t function_400a5c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x400a5c
    int64_t v1; // 0x400a5c
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    char * v3 = (char *)(a2 - 0x47362081); // 0x400a61
    *v3 = *v3 ^ (char)(a4 / 256);
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_4009f4();
}

// Address range: 0x400a81 - 0x400a84
int64_t function_400a81(int64_t a1) {
    // 0x400a81
    int64_t result; // 0x400a81
    return result;
}

// Address range: 0x400ac4 - 0x400ac7
int64_t function_400ac4(int64_t a1) {
    // 0x400ac4
    int64_t result; // 0x400ac4
    return result;
}

// Address range: 0x400ae8 - 0x400af0
int64_t function_400ae8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x400ae8
    int64_t result; // 0x400ae8
    return result;
}

// Address range: 0x400af9 - 0x400afa
int64_t function_400af9(void) {
    // 0x400af9
    int64_t result; // 0x400af9
    return result;
}

// Address range: 0x400b74 - 0x400be3
int64_t function_400b74(int64_t a1, int64_t a2, int64_t a3) {
    // 0x400b74
    return function_472a54eb();
}

// Address range: 0x400be9 - 0x400bea
int64_t function_400be9(void) {
    // 0x400be9
    int64_t result; // 0x400be9
    return result;
}

// Address range: 0x400bf8 - 0x400c23
int64_t function_400bf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x400bf8
    int64_t result; // 0x400bf8
    int64_t v1 = result;
    bool v2; // 0x400bf8
    if (v2) {
        // 0x400c52
        return result;
    }
    unsigned char v3 = (char)a4 % 32; // 0x400c02
    if (v3 != 0) {
        *(char *)v1 = (char)v1 >> v3;
    }
    *(int32_t *)0xb7d0c9e = *(int32_t *)0xb7d0c9e + 0x6044da07;
    return function_ffffffffbd89bd8b();
}

// Address range: 0x400c23 - 0x400c2a
int64_t function_400c23(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x400c23
    return function_400be9();
}

// Address range: 0x400c5a - 0x400c5d
int64_t function_400c5a(void) {
    // 0x400c5a
    int64_t result; // 0x400c5a
    return result;
}

// Address range: 0x400c6e - 0x400c6f
int64_t function_400c6e(void) {
    // 0x400c6e
    int64_t result; // 0x400c6e
    return result;
}

// Address range: 0x400c7c - 0x400cb8
int64_t function_400c7c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x400c7c
    bool v1; // 0x400c7c
    if (v1) {
        function_400c6e();
    }
    unsigned char v2 = (char)(a3 / 256); // 0x400c7e
    char v3 = v1; // 0x400c7e
    unsigned char v4 = *(char *)(a2 + 29 + 2 * a3) + v3; // 0x400c7e
    unsigned char v5 = v2 - v4; // 0x400c7e
    bool v6 = v1 ? v4 != -1 | v5 - v3 > v2 : v4 > v2; // 0x400c7e
    int64_t v7 = 256 * (int64_t)v5 | a3 & -0xff01; // 0x400c7e
    int64_t v8 = __asm_iretd(); // 0x400c82
    int32_t * v9 = (int32_t *)(a1 + 105); // 0x400c83
    int64_t v10; // 0x400c7c
    *v9 = *v9 - (int32_t)v10 + (int32_t)v6;
    *(char *)0x7b108b497250ea67 = (char)v8;
    *(char *)(v8 + 0x72309917 + 2 * v7) = (char)a4;
    char * v11 = (char *)(v10 - 0x5bfab5d1); // 0x400c98
    *v11 = *v11 + (char)v10;
    int64_t v12 = (int64_t)*(int32_t *)(v7 - 0x56b20d0a); // 0x400c9f
    int64_t v13 = -0x1d9750f3 * v12; // 0x400c9f
    return (v8 & 0xffffff00 | (int64_t)__readgsbyte(0x1eecba1ab32f4366)) - v13 + (int64_t)(v13 != -0x1d9750f300000000 * v12 >> 32) & 0xffffffff;
}

// Address range: 0x400cc4 - 0x400cc5
int64_t function_400cc4(void) {
    // 0x400cc4
    int64_t result; // 0x400cc4
    return result;
}

// Address range: 0x400cc7 - 0x400cc8
int64_t function_400cc7(void) {
    // 0x400cc7
    int64_t result; // 0x400cc7
    return result;
}

// Address range: 0x400cdc - 0x400d52
int64_t function_400cdc(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5, int64_t a6) {
    // 0x400cdc
    int64_t v1; // 0x400cdc
    uint64_t v2 = v1;
    char * v3 = (char *)(a1 + 0x49355307); // 0x400cdc
    char v4 = *v3 & (char)(v2 / 256); // 0x400cdc
    *v3 = v4;
    *(char *)a1 = (char)v2;
    bool v5; // 0x400cdc
    int64_t v6 = (int64_t)*(int32_t *)((v5 ? -1 : 1) + a2); // 0x400ce6
    int64_t result = v6; // 0x400ce7
    int64_t v7; // 0x400cdc
    if (v4 >= 0) {
        int32_t * v8 = (int32_t *)(v6 + 0x35d9242); // 0x400d41
        *v8 = *v8 / 2;
        int32_t v9 = v6 & 0xffffff00 | a3 / 256 % 256; // 0x400d4b
        uint32_t v10 = v9 - 0x5f1366f1; // 0x400d4b
        unsigned char v11 = llvm_ctpop_i8((char)v10); // 0x400d4b
        result = v10;
        if (v11 % 2 != 0) {
            // 0x400d52
            return result;
        }
        if (v9 > 0x5f1366f1) {
            // 0x400d0d
            return (result & 0xffffff00 | (int64_t)(v10 % 256)) ^ 33;
        }
        // 0x400ce9
        v7 = a1 & 0xffffffff & a3 + 0xffffffde;
        if (v10 >= 0) {
            // 0x400ceb
            return result ^ 119;
        }
    }
    char * v12 = (char *)(v7 & 0xffffffff); // 0x400d2a
    *v12 = (char)(a5 % 2 != 0) - (char)a3 + *v12;
    return result;
}

// Address range: 0x400dce - 0x400dd1
int64_t function_400dce(void) {
    // 0x400dce
    int64_t result; // 0x400dce
    return result;
}

// Address range: 0x400df9 - 0x400dfa
int64_t function_400df9(void) {
    // 0x400df9
    int64_t result; // 0x400df9
    return result;
}

// Address range: 0x400dfa - 0x400dfd
int64_t function_400dfa(void) {
    // 0x400dfa
    int64_t result; // 0x400dfa
    return result;
}

// Address range: 0x400e03 - 0x400e15
int64_t function_400e03(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x400e03
    bool v1; // 0x400e03
    if (v1) {
        function_400df9();
    }
    // 0x400e0a
    __asm_rcl(*(int32_t *)(a1 + 91));
    return function_114c6d16();
}

// Address range: 0x400e70 - 0x400e75
int64_t function_400e70(void) {
    // 0x400e70
    return function_ffffffffc3a1bd0c();
}

// Address range: 0x400eba - 0x400ecc
int64_t function_400eba(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x400eba
    *(char *)a1 = __asm_insb((int16_t)a3);
    uint32_t v1 = *(int32_t *)(a4 - 45); // 0x400ebc
    int32_t * v2 = (int32_t *)(a3 - 23); // 0x400ebf
    *v2 = *v2 + (int32_t)a4 + (int32_t)(v1 > -1 - (int32_t)a1);
    int64_t v3; // 0x400eba
    return a3 / 256 % 256 | v3 & 0xe27a3100 | 0x1d85ce00;
}
