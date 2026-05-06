/*
 * Targeted RetDec C for native executable gap queue batch 641.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x36f31b-0x36f51b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36f61b-0x36f71b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36f71b-0x36f91b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36f91b-0x36fb1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36fb1b-0x36fd1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x466a34-0x466c34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x466c34-0x466e34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x467334-0x467434 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1bf3d32();
int64_t function_2da25b22();
int64_t function_36f31b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36f347(void);
int64_t function_36f3ce(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_36f45d(void);
int64_t function_36f472(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36f4e9(void);
int64_t function_36f61b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36f623(int64_t a1);
int64_t function_36f66c(void);
int64_t function_36f6d6(void);
int64_t function_36f6e1(void);
int64_t function_36f6fe(void);
int64_t function_36f751(void);
int64_t function_36f7e9(void);
int64_t function_36f7ec(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_36f8a4(void);
int64_t function_36f8fd(int64_t a1);
int64_t function_36f905(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36f93d(void);
int64_t function_36f948(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36f9a0(void);
int64_t function_36fa3b(void);
int64_t function_36fa7a(uint64_t a1);
int64_t function_36faa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36fad6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36fb3d(int64_t a1);
int64_t function_36fb84(void);
int64_t function_36fb8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36fb9b(int64_t a1);
int64_t function_36fbac(void);
int64_t function_36fbb8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_36fbc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_466a34(void);
int64_t function_466a87(int64_t a1);
int64_t function_466a93(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_466b17(void);
int64_t function_466b3f(void);
int64_t function_466b52(int64_t a1);
int64_t function_466b6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_466b75(void);
int64_t function_466b89(void);
int64_t function_466ba9(void);
int64_t function_466bc1(void);
int64_t function_466bcf(void);
int64_t function_466bd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_466c0e(int64_t a1);
int64_t function_466c40(int64_t a1, int64_t a2);
int64_t function_466c4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_466c56(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_466c5e(void);
int64_t function_466c98(int64_t a1);
int64_t function_466c9b(void);
int64_t function_466c9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_466ce8(void);
int64_t function_466cf1(int64_t a1);
int64_t function_466d29(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_466d34(void);
int64_t function_466d4a(void);
int64_t function_466d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_466dbd(void);
int64_t function_466dc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_467334(void);
int64_t function_467339(int64_t a1);
int64_t function_467365(int64_t a1);
int64_t function_4e554263();
int64_t function_5bade96c();
int64_t function_bfacb43();
int64_t function_ffffffff9b7d690b();
int64_t function_ffffffffc8cb8c3f();
int64_t function_ffffffffd593551d();
int64_t function_ffffffffe84254bc();
int64_t unknown_3b36004e();
int64_t unknown_69007e08();
int64_t unknown_77261964();
int64_t unknown_ffffffff868d1d21();
int64_t unknown_ffffffff90b0a552();
int64_t unknown_ffffffffb2b95997();
int64_t unknown_ffffffffc77cd1ec();
int64_t unknown_ffffffffdcb83990();

// Address range: 0x36f31b - 0x36f323
int64_t function_36f31b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36f31b
    int64_t result; // 0x36f31b
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x36f347 - 0x36f348
int64_t function_36f347(void) {
    // 0x36f347
    int64_t result; // 0x36f347
    return result;
}

// Address range: 0x36f3ce - 0x36f434
int64_t function_36f3ce(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x36f3ce
    int64_t v1; // 0x36f3ce
    uint64_t v2 = v1;
    int64_t v3 = a3 & -256 | (int64_t)(*(char *)(v1 - 76) | (char)a3); // 0x36f3d1
    __asm_in((int16_t)v3);
    unknown_ffffffffc77cd1ec();
    char * v4 = (char *)(v2 - 8); // 0x36f3f0
    char v5 = a3 / 256; // 0x36f3f0
    *v4 = *v4 | v5;
    *(char *)-0x7f385d06 = *(char *)-0x7f385d06 + (char)(v2 / 256);
    int64_t result = unknown_69007e08(); // 0x36f3ff
    char * v6 = (char *)result; // 0x36f404
    *v6 = *v6 + v5;
    int32_t v7 = *(int32_t *)0xdef6ddb7; // 0x36f406
    *(char *)0x72027010 = *(char *)0x72027010 - 35;
    bool v8; // 0x36f3ce
    int32_t * v9 = (int32_t *)((int64_t)((v8 ? 0x3ab0486e : 0x3ab04870) - v7) - 30); // 0x36f40f
    int32_t v10 = *v9; // 0x36f40f
    int32_t v11 = result; // 0x36f40f
    int32_t v12 = v10 - v11; // 0x36f40f
    *v9 = v12;
    if (((v12 ^ v10) & (v10 ^ v11)) >= 0) {
        // 0x36f414
        return result;
    }
    char v13 = result; // 0x36f429
    *v6 = *v6 + v13;
    *(char *)v3 = v13;
    *v6 = *v6 + v13;
    return result;
}

// Address range: 0x36f45d - 0x36f45e
int64_t function_36f45d(void) {
    // 0x36f45d
    int64_t result; // 0x36f45d
    return result;
}

// Address range: 0x36f472 - 0x36f4ca
int64_t function_36f472(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x4bd16a8); // 0x36f478
    int64_t v2; // 0x36f472
    *v1 = *v1 + (int32_t)v2;
    if (a4 == 0) {
        // 0x36f4f7
        return __asm_sti();
    }
    int64_t result = unknown_ffffffffdcb83990(); // 0x36f48a
    __asm_out(94, (char)result);
    return result;
}

// Address range: 0x36f4e9 - 0x36f4eb
int64_t function_36f4e9(void) {
    // 0x36f4e9
    int64_t result; // 0x36f4e9
    return result;
}

// Address range: 0x36f61b - 0x36f622
int64_t function_36f61b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36f61b
    return unknown_ffffffff868d1d21(a1, a2, a3, a4);
}

// Address range: 0x36f623 - 0x36f624
int64_t function_36f623(int64_t a1) {
    // 0x36f623
    int64_t result; // 0x36f623
    return result;
}

// Address range: 0x36f66c - 0x36f66d
int64_t function_36f66c(void) {
    // 0x36f66c
    int64_t result; // 0x36f66c
    return result;
}

// Address range: 0x36f6d6 - 0x36f6d7
int64_t function_36f6d6(void) {
    // 0x36f6d6
    int64_t result; // 0x36f6d6
    return result;
}

// Address range: 0x36f6e1 - 0x36f6ea
int64_t function_36f6e1(void) {
    // 0x36f6e1
    int64_t v1; // 0x36f6e1
    int32_t * v2 = (int32_t *)(v1 + 0x32a98d54); // 0x36f6e1
    bool v3; // 0x36f6e1
    *v2 = (int32_t)v3 - (int32_t)v1 + *v2;
    __asm_iretd();
    return function_36f66c();
}

// Address range: 0x36f6fe - 0x36f6ff
int64_t function_36f6fe(void) {
    // 0x36f6fe
    int64_t result; // 0x36f6fe
    return result;
}

// Address range: 0x36f751 - 0x36f755
int64_t function_36f751(void) {
    // 0x36f751
    return function_36f6d6();
}

// Address range: 0x36f7e9 - 0x36f7ea
int64_t function_36f7e9(void) {
    // 0x36f7e9
    int64_t result; // 0x36f7e9
    return result;
}

// Address range: 0x36f7ec - 0x36f812
int64_t function_36f7ec(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x36f7ec
    int64_t v1; // 0x36f7ec
    int64_t v2 = v1;
    int64_t result = (v2 + a3 / 256) % 256 | v2 & -256; // 0x36f7ec
    uint32_t v3 = (int32_t)a2; // 0x36f7ee
    uint32_t v4 = (int32_t)a4 + v3; // 0x36f7ee
    if (v4 < v3 || v4 == 0) {
        int32_t * v5 = (int32_t *)(v1 + 8 * v1); // 0x36f804
        *v5 = *v5 + (int32_t)v1;
        return result & 0xffffffff ^ 0x54766d3a;
    }
    // 0x36f7f2
    return result;
}

// Address range: 0x36f8a4 - 0x36f8a5
int64_t function_36f8a4(void) {
    // 0x36f8a4
    int64_t result; // 0x36f8a4
    return result;
}

// Address range: 0x36f8fd - 0x36f900
int64_t function_36f8fd(int64_t a1) {
    // 0x36f8fd
    int64_t result; // 0x36f8fd
    return result;
}

// Address range: 0x36f905 - 0x36f916
int64_t function_36f905(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 71); // 0x36f905
    *v1 = *v1 + (int32_t)a4;
    __asm_wait();
    *(char *)a1 = __asm_insb((int16_t)a3);
    return function_36f8a4();
}

// Address range: 0x36f93d - 0x36f948
int64_t function_36f93d(void) {
    // 0x36f93d
    return function_bfacb43();
}

// Address range: 0x36f948 - 0x36f983
int64_t function_36f948(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    unknown_3b36004e();
    int64_t v2; // 0x36f948
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x36f955
    unknown_77261964();
    int32_t * v4 = (int32_t *)(8 * a4 + 25 + (int64_t)*(int32_t *)(v3 + 0x3d000068)); // 0x36f967
    *v4 = *v4 + (int32_t)a1;
    int32_t * v5 = (int32_t *)(a4 - 0x26e7d9a0); // 0x36f96b
    *v5 = *v5 - (int32_t)v1;
    return (int64_t)*(int32_t *)&v1;
}

// Address range: 0x36f9a0 - 0x36f9a7
int64_t function_36f9a0(void) {
    // 0x36f9a0
    return function_ffffffffe84254bc();
}

// Address range: 0x36fa3b - 0x36fa3d
int64_t function_36fa3b(void) {
    // 0x36fa3b
    int64_t v1; // 0x36fa3b
    return function_36faa6(v1, v1, v1, v1);
}

// Address range: 0x36fa7a - 0x36fa7f
int64_t function_36fa7a(uint64_t a1) {
    // 0x36fa7a
    int64_t v1; // 0x36fa7a
    return v1 + (int64_t)(a1 % 2 != 0) + v1 & 0xffffffff;
}

// Address range: 0x36faa6 - 0x36fabc
int64_t function_36faa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36faa6
    int64_t v1; // 0x36faa6
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 | a4);
    return (int64_t)(0x1e80f93 * *(int32_t *)(a2 + 0x474298d2));
}

// Address range: 0x36fad6 - 0x36fae8
int64_t function_36fad6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36fad6
    int64_t v1; // 0x36fad6
    return v1 & -256 | (v1 + 58) % 256;
}

// Address range: 0x36fb3d - 0x36fb40
int64_t function_36fb3d(int64_t a1) {
    // 0x36fb3d
    int64_t result; // 0x36fb3d
    return result;
}

// Address range: 0x36fb84 - 0x36fb85
int64_t function_36fb84(void) {
    // 0x36fb84
    int64_t result; // 0x36fb84
    return result;
}

// Address range: 0x36fb8f - 0x36fb9b
int64_t function_36fb8f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x36fb8f
    int64_t v1; // 0x36fb8f
    *(char *)v1 = (char)((uint64_t)v1 / 256);
    int64_t v2; // 0x36fb8f
    return unknown_ffffffffb2b95997() & -256 | (int64_t)*(char *)&v2;
}

// Address range: 0x36fb9b - 0x36fb9e
int64_t function_36fb9b(int64_t a1) {
    // 0x36fb9b
    int64_t result; // 0x36fb9b
    return result;
}

// Address range: 0x36fbac - 0x36fbb0
int64_t function_36fbac(void) {
    // 0x36fbac
    bool v1; // 0x36fbac
    if (!v1) {
        function_36fb84();
    }
    // 0x36fbae
    int64_t v2; // 0x36fbac
    return function_36fbc1(v2, v2, v2, v2, v2, (int64_t)&g1);
}

// Address range: 0x36fbb8 - 0x36fbc1
int64_t function_36fbb8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x36fbb8
    int64_t result; // 0x36fbb8
    *(char *)a4 = (char)result + (char)(a3 / 256);
    char * v1 = (char *)(a4 + 49); // 0x36fbbe
    *v1 = *v1 + (char)(result / 256);
    return result;
}

// Address range: 0x36fbc1 - 0x36fc81
int64_t function_36fbc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x36fbc1
    int64_t result; // 0x36fbc1
    char * v1 = (char *)(result - 0x5271e800); // 0x36fbc3
    *v1 = 2 * *v1;
    if (a4 != 0) {
        // 0x36fbd2
        return result;
    }
    char v2 = result;
    char v3 = (char)((int32_t)result < 0x94851f01) + v2; // 0x36fc3a
    *(char *)result = v3;
    if (v3 == 0) {
        int32_t v4 = a2; // 0x36fc44
        return unknown_ffffffff90b0a552(v4 + (int32_t)a1, *(int32_t *)(a3 + 108) | v4);
    }
    // 0x36fc6a
    *(char *)-0x1751ee14 = *(char *)-0x1751ee14 | v2;
    int64_t v5; // 0x36fbc1
    *(int32_t *)v5 = *(int32_t *)&v5 - 1;
    return result;
}

// Address range: 0x466a34 - 0x466a35
int64_t function_466a34(void) {
    // 0x466a34
    int64_t result; // 0x466a34
    return result;
}

// Address range: 0x466a87 - 0x466a8f
int64_t function_466a87(int64_t a1) {
    // 0x466a87
    return function_ffffffff9b7d690b();
}

// Address range: 0x466a93 - 0x466a9c
int64_t function_466a93(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 - 93); // 0x466a93
    int64_t result; // 0x466a93
    bool v2; // 0x466a93
    *v1 = (char)v2 - (char)result + *v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x466b17 - 0x466b18
int64_t function_466b17(void) {
    // 0x466b17
    int64_t result; // 0x466b17
    return result;
}

// Address range: 0x466b3f - 0x466b46
int64_t function_466b3f(void) {
    // 0x466b3f
    bool v1; // 0x466b3f
    if (v1 || false) {
        function_466b17();
    }
    // 0x466b41
    return function_ffffffffc8cb8c3f();
}

// Address range: 0x466b52 - 0x466b59
int64_t function_466b52(int64_t a1) {
    // 0x466b52
    int64_t v1; // 0x466b52
    bool v2; // 0x466b52
    *(char *)a1 = (char)v1 - (char)(v1 / 256) + (char)v2;
    return function_1bf3d32();
}

// Address range: 0x466b6e - 0x466b72
int64_t function_466b6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x466b6e
    int64_t result; // 0x466b6e
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x466b75 - 0x466b7d
int64_t function_466b75(void) {
    // 0x466b75
    int64_t result; // 0x466b75
    return result;
}

// Address range: 0x466b89 - 0x466b8a
int64_t function_466b89(void) {
    // 0x466b89
    int64_t result; // 0x466b89
    return result;
}

// Address range: 0x466ba9 - 0x466baa
int64_t function_466ba9(void) {
    // 0x466ba9
    int64_t result; // 0x466ba9
    return result;
}

// Address range: 0x466bc1 - 0x466bc4
int64_t function_466bc1(void) {
    // 0x466bc1
    int64_t result; // 0x466bc1
    return result;
}

// Address range: 0x466bcf - 0x466bd0
int64_t function_466bcf(void) {
    // 0x466bcf
    int64_t result; // 0x466bcf
    return result;
}

// Address range: 0x466bd2 - 0x466c02
int64_t function_466bd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x466bd2
    char v3 = v2;
    *(int32_t *)a1 = (int32_t)v2;
    char v4 = v3; // 0x466bdf
    if ((*(char *)(a1 + 41) & v3) < 1) {
        v4 = function_466bcf();
    }
    char v5 = v4 + 55; // 0x466be1
    if (v5 < 0 == (v5 & (v4 ^ -128)) < 0 == (v5 != 0)) {
        function_466ba9();
    }
    int32_t * v6 = (int32_t *)(v1 + 0x221f97e); // 0x466be7
    *v6 = *v6 + 0x2ecbff2a;
    int64_t v7 = a5; // bp-8, 0x466bed
    int32_t v8 = *(int32_t *)&v1; // 0x466bee
    bool v9; // 0x466bd2
    int64_t v10 = v9 ? -4 : 4; // 0x466bf0
    int64_t v11 = v1 + v10; // 0x466bf0
    int64_t v12 = v10 + a2; // 0x466bf0
    *(char *)v11 = *(char *)v12;
    int64_t v13 = v9 ? -1 : 1; // 0x466bf1
    int64_t v14 = v11 + v13; // 0x466bf1
    int64_t v15 = v12 + v13; // 0x466bf1
    v1 = v14;
    *(int64_t *)((int64_t)(v8 + (int32_t)(int64_t)&v7) - 8) = v15;
    if (*(int32_t *)(v14 - 57) > (int32_t)v2) {
        function_466b89();
    }
    // 0x466bf9
    return function_5bade96c(v1 + v10, v15 + v10);
}

// Address range: 0x466c0e - 0x466c11
int64_t function_466c0e(int64_t a1) {
    // 0x466c0e
    int64_t result; // 0x466c0e
    return result;
}

// Address range: 0x466c40 - 0x466c4c
int64_t function_466c40(int64_t a1, int64_t a2) {
    // 0x466c40
    int64_t v1; // 0x466c40
    return function_466c56(0x8f4d6f7e, v1 & 0xffffffff, v1, v1);
}

// Address range: 0x466c4c - 0x466c56
int64_t function_466c4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x466c4c
    int64_t v1; // 0x466c4c
    return v1 | 211;
}

// Address range: 0x466c56 - 0x466c64
int64_t function_466c56(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x466c56
    int64_t v1; // 0x466c56
    int64_t v2 = v1;
    __asm_in((int16_t)a3);
    __asm_in_133(52);
    *(char *)v2 = (char)v2 - (char)a4;
    return function_466c9b();
}

// Address range: 0x466c5e - 0x466c5f
int64_t function_466c5e(void) {
    // 0x466c5e
    int64_t result; // 0x466c5e
    return result;
}

// Address range: 0x466c98 - 0x466c9b
int64_t function_466c98(int64_t a1) {
    // 0x466c98
    int64_t result; // 0x466c98
    return result;
}

// Address range: 0x466c9b - 0x466c9c
int64_t function_466c9b(void) {
    // 0x466c9b
    int64_t result; // 0x466c9b
    return result;
}

// Address range: 0x466c9c - 0x466ce5
int64_t function_466c9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x466c9c
    int64_t v1; // 0x466c9c
    int64_t v2 = v1;
    uint64_t result2 = a4 - 1; // 0x466c9c
    bool v3; // 0x466c9c
    if (result2 != 0 && !v3) {
        char v4 = v1;
        uint64_t v5 = result2 / 256; // 0x466cb9
        char v6 = v4 - (char)v5; // 0x466cb9
        *(char *)v1 = v6;
        if (((v6 ^ v4) & (char)(v1 ^ v5)) < 0) {
            // 0x466cce
            return v2 & 0xd9f66360 | 0x26099c9f;
        }
        // 0x466cbd
        return function_2da25b22();
    }
    if (result2 == 0) {
        // 0x466cb1
        int64_t result; // 0x466c9c
        __asm_out_135((int16_t)a3, (char)result);
        return result;
    }
    // 0x466ca3
    __asm_pcmpgtb(v1, *(int64_t *)(a4 + 14));
    if (!v3) {
        // 0x466cd6
        float80_t v7; // 0x466c9c
        *(float64_t *)(a4 + 64) = (float64_t)v7;
        return result2;
    }
    int16_t v8 = a3;
    __asm_out_134(v8, (int32_t)v2);
    int64_t result3 = (v2 + 60 + (int64_t)v3) % 256 | v2 & -256;
    __asm_out_135(v8, (char)result3);
    return result3;
}

// Address range: 0x466ce8 - 0x466ced
int64_t function_466ce8(void) {
    // 0x466ce8
    return function_ffffffffd593551d();
}

// Address range: 0x466cf1 - 0x466cf2
int64_t function_466cf1(int64_t a1) {
    // 0x466cf1
    int64_t result; // 0x466cf1
    return result;
}

// Address range: 0x466d29 - 0x466d2a
int64_t function_466d29(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x466d29
    int64_t result; // 0x466d29
    return result;
}

// Address range: 0x466d34 - 0x466d39
int64_t function_466d34(void) {
    // 0x466d34
    return function_4e554263();
}

// Address range: 0x466d4a - 0x466d4f
int64_t function_466d4a(void) {
    // 0x466d4a
    int64_t v1; // 0x466d4a
    return v1 & -256 | 108;
}

// Address range: 0x466d70 - 0x466d75
int64_t function_466d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result; // 0x466d70
    if (a4 == 0) {
        result = function_466d29(a1, a2, a3, 0);
    }
    // 0x466d72
    return result;
}

// Address range: 0x466dbd - 0x466dbe
int64_t function_466dbd(void) {
    // 0x466dbd
    int64_t result; // 0x466dbd
    return result;
}

// Address range: 0x466dc6 - 0x466ddc
int64_t function_466dc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x6564ccee + a4); // 0x466dcc
    int32_t v2 = *v1 - 0x65136ef9; // 0x466dcc
    *v1 = v2;
    int64_t result = (int64_t)*(int32_t *)0x705e4fa6; // 0x466dd7
    if (v2 != 0) {
        result = function_466dbd();
    }
    // 0x466dd9
    return result;
}

// Address range: 0x467334 - 0x467338
int64_t function_467334(void) {
    // 0x467334
    int64_t v1; // 0x467334
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result - (int32_t)v1;
    return result;
}

// Address range: 0x467339 - 0x467342
int64_t function_467339(int64_t a1) {
    // 0x467339
    int64_t v1; // 0x467339
    bool v2; // 0x467339
    return v1 & -0xff75 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 628;
}

// Address range: 0x467365 - 0x467368
int64_t function_467365(int64_t a1) {
    // 0x467365
    int64_t result; // 0x467365
    return result;
}
