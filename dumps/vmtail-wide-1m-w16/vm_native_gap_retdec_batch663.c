/*
 * Targeted RetDec C for native executable gap queue batch 663.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1f06e8-0x1f08e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f08e8-0x1f0ae8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f0ce8-0x1f0ee8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f0ee8-0x1f10e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3455d8-0x3457d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3457d8-0x3459d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3459d8-0x345bd8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x345bd8-0x345dd8 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1f06e8(void);
int64_t function_1f0731(void);
int64_t function_1f0740(int64_t a1);
int64_t function_1f0771(void);
int64_t function_1f0777(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f07a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f087b(void);
int64_t function_1f089d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_1f098f(int64_t a1);
int64_t function_1f09aa(int64_t a1);
int64_t function_1f09b7(void);
int64_t function_1f0a29(void);
int64_t function_1f0a82(int64_t a1);
int64_t function_1f0ab3(int64_t a1);
int64_t function_1f0ab4(int64_t a1);
int64_t function_1f0ce8(void);
int64_t function_1f0d0f(void);
int64_t function_1f0d14(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1f0d3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f0dd0(void);
int64_t function_1f0ddd(void);
int64_t function_1f0e5f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1f0eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f0f44(void);
int64_t function_1f0f79(void);
int64_t function_1f0f7c(int64_t a1);
int64_t function_1f0f85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1f0f8e(int64_t a1);
int64_t function_1f0f97(void);
int64_t function_1f0fae(void);
int64_t function_1f0fb9(void);
int64_t function_3455d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3456e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_34582b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_345983(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_345ae9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_345c3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_cc59c();
int64_t function_ffffffffbdb10a97();
int64_t function_ffffffffe3f30e61();
int64_t unknown_207aa5b();
int64_t unknown_28d810a0();
int64_t unknown_2cd6fc9c();
int64_t unknown_394fd296();
int64_t unknown_3a24f94b();
int64_t unknown_3fc53846();
int64_t unknown_4ccf5eee();
int64_t unknown_64fb85eb();
int64_t unknown_747ec8b4();
int64_t unknown_793caa7d();
int64_t unknown_7e284d5a();
int64_t unknown_a496edf();
int64_t unknown_ffffffff808a4068();
int64_t unknown_ffffffff9060b57d();
int64_t unknown_ffffffff91afe2a5();
int64_t unknown_ffffffffa06542bd();
int64_t unknown_ffffffffad100a1e();
int64_t unknown_ffffffffb3f603de();
int64_t unknown_ffffffffb77d84f6();
int64_t unknown_ffffffffd39c14c3();
int64_t unknown_ffffffffd400f3c0();
int64_t unknown_ffffffffd6244fb6();
int64_t unknown_ffffffffee9e0a8a();
int64_t unknown_fffffffff6adbd90();

// Address range: 0x1f06e8 - 0x1f06f1
int64_t function_1f06e8(void) {
    int64_t result = unknown_2cd6fc9c(); // 0x1f06e8
    int64_t v1; // 0x1f06e8
    char * v2 = (char *)(v1 - 16 + result); // 0x1f06ed
    *v2 = *v2 - (char)v1;
    return result;
}

// Address range: 0x1f0731 - 0x1f0732
int64_t function_1f0731(void) {
    // 0x1f0731
    int64_t result; // 0x1f0731
    return result;
}

// Address range: 0x1f0740 - 0x1f0749
int64_t function_1f0740(int64_t a1) {
    // 0x1f0740
    return unknown_3fc53846(a1);
}

// Address range: 0x1f0771 - 0x1f0772
int64_t function_1f0771(void) {
    // 0x1f0771
    int64_t result; // 0x1f0771
    return result;
}

// Address range: 0x1f0777 - 0x1f07a2
int64_t function_1f0777(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffff9060b57d(); // 0x1f0777
    *(int32_t *)v1 = (int32_t)a4;
    int64_t result = unknown_ffffffffee9e0a8a(*(int32_t *)(v1 + a1) + (int32_t)a1); // 0x1f0784
    int64_t v2; // 0x1f0777
    int32_t * v3 = (int32_t *)(8 * v2 + 0x1c0aa001 + result); // 0x1f0798
    *v3 = *v3 - 120;
    return result;
}

// Address range: 0x1f07a2 - 0x1f0854
int64_t function_1f07a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f07a2
    int64_t v1; // 0x1f07a2
    uint64_t v2 = (uint64_t)v1 / 256; // 0x1f07a2
    int32_t * v3 = (int32_t *)(a3 + 0x16170147 + 4 * a2); // 0x1f07a6
    *v3 = *v3 + (int32_t)a2;
    if (((v2 + a4) % 256 || a4 & -256) != 1) {
        // 0x1f07e5
        return unknown_64fb85eb();
    }
    int64_t v4 = a3 & 0xffffffff; // 0x1f07b4
    char * v5 = (char *)(v4 + 0x1e8ba05); // 0x1f07b5
    *v5 = *v5 + 40;
    char * v6 = (char *)v4; // 0x1f07bc
    *v6 = *v6 + (char)v2;
    __asm_out(-128, (char)a3);
    int32_t v7 = (int32_t)a3 - 0x6dfe1758; // 0x1f07c2
    int64_t result = v7; // 0x1f07c8
    if (v7 < 0) {
        result = function_1f0771();
    }
    // 0x1f07ca
    __asm_out_133((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x1f087b - 0x1f087e
int64_t function_1f087b(void) {
    // 0x1f087b
    int64_t result; // 0x1f087b
    return result;
}

// Address range: 0x1f089d - 0x1f090d
int64_t function_1f089d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x1f089d
    int64_t v1; // 0x1f089d
    uint64_t v2 = v1;
    int64_t v3 = a4 + a3; // 0x1f089d
    int64_t v4 = a3 & -0xff01 | (int64_t)&g2; // 0x1f08a0
    int32_t * v5 = (int32_t *)((2 * v3 & 0x1fffffffe) + 52); // 0x1f08ac
    *v5 = *v5 + (int32_t)a1;
    int64_t v6 = a1 - 1; // 0x1f08b8
    *(char *)v6 = __asm_insb((int16_t)v4);
    int64_t v7 = unknown_ffffffffd400f3c0(); // 0x1f08ba
    char * v8 = (char *)v7; // 0x1f08bf
    *v8 = *v8 + (char)v3;
    int64_t v9 = (int64_t)(*(int32_t *)(v2 - 0x3ff52f81) + (int32_t)v6); // 0x1f08c1
    int32_t * v10 = (int32_t *)(v4 - 0x7212435a); // 0x1f08ca
    *v10 = *v10 + (int32_t)v1;
    *(char *)v9 = (char)v7;
    int64_t v11 = v9 - 1; // 0x1f08d0
    uint64_t v12 = unknown_ffffffffb3f603de(v11, 0x9edc458d); // 0x1f08d8
    char * v13 = (char *)(v12 + 50); // 0x1f08dd
    *v13 = *v13 + (char)(v12 / 256);
    *(int32_t *)0x101ffcf1 = *(int32_t *)0x101ffcf1 + (int32_t)v11;
    unknown_ffffffffb77d84f6();
    *(char *)-0x4fe105f2 = *(char *)-0x4fe105f2 + (char)(v2 / 256);
    return v4 & 0xffffffff;
}

// Address range: 0x1f098f - 0x1f0992
int64_t function_1f098f(int64_t a1) {
    // 0x1f098f
    int64_t result; // 0x1f098f
    return result;
}

// Address range: 0x1f09aa - 0x1f09ab
int64_t function_1f09aa(int64_t a1) {
    // 0x1f09aa
    int64_t result; // 0x1f09aa
    return result;
}

// Address range: 0x1f09b7 - 0x1f09cc
int64_t function_1f09b7(void) {
    // 0x1f09b7
    unknown_ffffffffa06542bd();
    return function_ffffffffbdb10a97();
}

// Address range: 0x1f0a29 - 0x1f0a2b
int64_t function_1f0a29(void) {
    // 0x1f0a29
    int64_t result; // 0x1f0a29
    return result;
}

// Address range: 0x1f0a82 - 0x1f0a91
int64_t function_1f0a82(int64_t a1) {
    // 0x1f0a82
    return unknown_fffffffff6adbd90(a1);
}

// Address range: 0x1f0ab3 - 0x1f0ab4
int64_t function_1f0ab3(int64_t a1) {
    // 0x1f0ab3
    int64_t result; // 0x1f0ab3
    return result;
}

// Address range: 0x1f0ab4 - 0x1f0ab5
int64_t function_1f0ab4(int64_t a1) {
    // 0x1f0ab4
    int64_t result; // 0x1f0ab4
    return result;
}

// Address range: 0x1f0ce8 - 0x1f0ced
int64_t function_1f0ce8(void) {
    // 0x1f0ce8
    return unknown_4ccf5eee();
}

// Address range: 0x1f0d0f - 0x1f0d10
int64_t function_1f0d0f(void) {
    // 0x1f0d0f
    int64_t result; // 0x1f0d0f
    return result;
}

// Address range: 0x1f0d14 - 0x1f0d3e
int64_t function_1f0d14(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1f0d14
    int64_t v1; // 0x1f0d14
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x1f0d14
    int64_t v3 = v2 ? -4 : 4; // 0x1f0d14
    int64_t v4 = v3 + a1; // 0x1f0d14
    char * v5 = (char *)(unknown_ffffffffad100a1e(v4) - 102); // 0x1f0d1d
    *v5 = *v5 << 7;
    int64_t v6 = v4 + v3; // 0x1f0d21
    unknown_28d810a0(v6);
    int64_t v7; // 0x1f0d14
    *(int32_t *)v7 = *(int32_t *)&v7 + (int32_t)v6;
    return function_ffffffffe3f30e61();
}

// Address range: 0x1f0d3e - 0x1f0dce
int64_t function_1f0d3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f0d3e
    int64_t v1; // bp-8, 0x1f0d3e
    int64_t v2; // 0x1f0d3e
    bool v3; // 0x1f0d3e
    if (true == !v3) {
        int64_t v4 = __asm_sti(); // 0x1f0d84
        *(char *)a1 = (char)a2;
        if (a4 == 1) {
            // 0x1f0d88
            v1 = (v3 ? -1 : 1) + a2;
            int64_t v5 = v4; // 0x1f0d8b
            if (v3) {
                v5 = function_1f0d0f();
            }
            unsigned char v6 = *(char *)10; // 0x1f0d8d
            unknown_394fd296();
            char v7 = *(char *)-0x55df18a2; // 0x1f0d95
            *(char *)-0x55df18a2 = v7 + (char)(v6 > (char)v5);
            return unknown_ffffffff91afe2a5();
        }
        // 0x1f0da5
        __asm_in_134(-27);
        unknown_747ec8b4();
    } else {
        // 0x1f0d40
        v1 = 3;
        *(int32_t *)a1 = (int32_t)v2;
        unknown_3a24f94b((v3 ? -4 : 4) + a1);
        int32_t * v8 = (int32_t *)(v2 + 30); // 0x1f0d4c
        uint32_t v9 = *v8; // 0x1f0d4c
        uint32_t v10 = v9 + (int32_t)v2; // 0x1f0d4c
        *v8 = v10;
        *(int64_t *)((((int64_t)&v1 ^ a3) & 0xffffffff) - 8) = a3;
        if (v10 < v9 || v10 == 0) {
            // 0x1f0d53
            return unknown_7e284d5a() + 0x2343fea8 & 0xffffffff;
        }
    }
    int32_t * v11 = (int32_t *)(v2 - 34); // 0x1f0db9
    *v11 = *v11 ^ (int32_t)v2;
    unknown_ffffffffd39c14c3();
    return unknown_207aa5b();
}

// Address range: 0x1f0dd0 - 0x1f0dd1
int64_t function_1f0dd0(void) {
    // 0x1f0dd0
    int64_t result; // 0x1f0dd0
    return result;
}

// Address range: 0x1f0ddd - 0x1f0de1
int64_t function_1f0ddd(void) {
    // 0x1f0ddd
    return function_1f0dd0();
}

// Address range: 0x1f0e5f - 0x1f0eb8
int64_t function_1f0e5f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = unknown_ffffffff808a4068(); // 0x1f0e5f
    bool v3; // 0x1f0e5f
    if (v3) {
        char * v4 = (char *)(v2 + 46); // 0x1f0e70
        *v4 = *v4 + (char)a4;
        unknown_793caa7d(0x13d8898);
        int64_t v5; // 0x1f0e5f
        int32_t * v6 = (int32_t *)(v5 + 74); // 0x1f0e7b
        *v6 = *v6 ^ (int32_t)v5;
        return __asm_in_135(9);
    }
    char * v7 = (char *)(a3 - 92); // 0x1f0ea4
    *v7 = *v7 + (char)(a4 / 256);
    uint32_t v8 = (int32_t)a4 % 32; // 0x1f0ea7
    if (v8 != 0) {
        uint32_t v9 = *(int32_t *)&v1; // 0x1f0ea7
        *(int32_t *)v1 = v9 >> v8 | v9 << 32 - v8;
    }
    return v2 & -256 | (int64_t)*(char *)-0x1c861a00ddfec300;
}

// Address range: 0x1f0eb8 - 0x1f0ece
int64_t function_1f0eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1f0eb8
    int64_t result; // 0x1f0eb8
    *(char *)a1 = (char)result;
    bool v1; // 0x1f0eb8
    char * v2 = (char *)(a1 - 0x69a66fd9 + (v1 ? -1 : 1)); // 0x1f0ebb
    char v3 = *v2; // 0x1f0ebb
    *v2 = v3 + (char)a4 + (char)((char)(result / 256) < (char)(result / 256));
    return result;
}

// Address range: 0x1f0f44 - 0x1f0f49
int64_t function_1f0f44(void) {
    // 0x1f0f44
    int64_t result; // 0x1f0f44
    return result;
}

// Address range: 0x1f0f79 - 0x1f0f7a
int64_t function_1f0f79(void) {
    // 0x1f0f79
    int64_t result; // 0x1f0f79
    return result;
}

// Address range: 0x1f0f7c - 0x1f0f7f
int64_t function_1f0f7c(int64_t a1) {
    // 0x1f0f7c
    int64_t result; // 0x1f0f7c
    return result;
}

// Address range: 0x1f0f85 - 0x1f0f89
int64_t function_1f0f85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x1f0f85
    if (v1 != 0) {
        char * v2 = (char *)(a3 + 104); // 0x1f0f85
        unsigned char v3 = *v2; // 0x1f0f85
        bool v4; // 0x1f0f85
        *v2 = v3 << v1 | (char)v4 << v1 - 1 | (char)((int16_t)v3 >> (int16_t)(9 - v1));
    }
    int64_t result; // 0x1f0f85
    return result;
}

// Address range: 0x1f0f8e - 0x1f0f91
int64_t function_1f0f8e(int64_t a1) {
    // 0x1f0f8e
    int64_t result; // 0x1f0f8e
    return result;
}

// Address range: 0x1f0f97 - 0x1f0f99
int64_t function_1f0f97(void) {
    // 0x1f0f97
    return function_1f0f79();
}

// Address range: 0x1f0fae - 0x1f0fb8
int64_t function_1f0fae(void) {
    // 0x1f0fae
    return unknown_ffffffffd6244fb6();
}

// Address range: 0x1f0fb9 - 0x1f0fdf
int64_t function_1f0fb9(void) {
    char v1 = *(char *)-0x44e5e13c; // 0x1f0fbd
    int64_t v2; // 0x1f0fb9
    *(char *)-0x44e5e13c = v1 + (char)((uint64_t)v2 / 256);
    return unknown_a496edf();
}

// Address range: 0x3455d8 - 0x3456e4
int64_t function_3455d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = __asm_in((int16_t)a3); // 0x3455d8
    int64_t v2; // 0x3455d8
    char * v3 = (char *)(v2 & -256 | (int64_t)v1); // 0x3455d9
    *v3 = (*v3 | v1) + v1;
    return function_cc59c(a1, a2, v2, v2, v2, v2, a5);
}

// Address range: 0x3456e4 - 0x34582b
int64_t function_3456e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3456e4
    int64_t v1; // 0x3456e4
    return function_cc59c(a1, v1, 0x41c64e6d * (0x100000000 * a3 >> 32) & 0xffffffff, a4, a5, v1, 169);
}

// Address range: 0x34582b - 0x345983
int64_t function_34582b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x34582b
    int64_t v1; // bp-40, 0x34582b
    v1 = (int64_t)&v1;
    int64_t v2; // 0x34582b
    bool v3; // 0x34582b
    return function_cc59c(a1, a2, a3, a4, a5, v2, 0x4000 * (int64_t)v3 | 2048 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3 | 2);
}

// Address range: 0x345983 - 0x345ae9
int64_t function_345983(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x345983
    int64_t v1; // bp-40, 0x345983
    int64_t v2 = (int64_t)&v1; // 0x345a34
    int64_t v3 = v2 + 16; // 0x345a51
    v1 = v3;
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x345a60
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x345a60
    *v5 = v4;
    v1 = a1;
    int64_t * v6 = (int64_t *)(v2 - 8); // 0x345a69
    *v6 = v2;
    int64_t v7 = v1; // 0x345a76
    v1 = 0x7159a6be;
    *v6 = a6;
    int64_t v8 = v2 + 24; // 0x345a91
    int64_t * v9 = (int64_t *)v8; // 0x345a91
    *v9 = *v5;
    *v5 = 0x63ea1faa;
    v1 = v4;
    *(int64_t *)(v2 + 40) = *v5;
    int64_t * v10 = (int64_t *)v3; // 0x345aac
    int64_t v11 = *v10; // 0x345aac
    *v5 = v11;
    v1 = v11;
    *v10 = *v9;
    *v5 = v8;
    int64_t v12; // 0x345983
    return function_cc59c(v7, a2, a3, a4, a5, v12, 0x343569);
}

// Address range: 0x345ae9 - 0x345c3d
int64_t function_345ae9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x345ae9
    int64_t v1; // bp-56, 0x345ae9
    v1 = (int64_t)&v1;
    int64_t v2; // bp-32, 0x345ae9
    int64_t v3 = (int64_t)&v2; // 0x345bee
    *(int64_t *)(v3 - 8) = *(int64_t *)(v3 + 8);
    v2 = v3 + 16;
    int64_t v4; // 0x345ae9
    return function_cc59c(a1, a2, a3, a4, a5, v4, a6);
}

// Address range: 0x345c3d - 0x345dba
int64_t function_345c3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x345c3d
    return function_cc59c(a1, a2, a3, a4, a5, a6, a7);
}
