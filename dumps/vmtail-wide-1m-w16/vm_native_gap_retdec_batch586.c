/*
 * Targeted RetDec C for native executable gap queue batch 586.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x201034-0x201234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x201234-0x201434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x201434-0x201634 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e8096-0x3e8296 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e8296-0x3e8496 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e8496-0x3e8696 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e8696-0x3e8896 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e8896-0x3e8a96 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_201034(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_201157(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_201272(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2012df(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2012e9(void);
int64_t function_201306(void);
int64_t function_201330(void);
int64_t function_201336(void);
int64_t function_201361(void);
int64_t function_201370(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_201376(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2013bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_201500(int64_t a1);
int64_t function_201505(void);
int64_t function_201529(void);
int64_t function_201592(void);
int64_t function_2015a5(void);
int64_t function_2015b5(int64_t a1, int64_t a2);
int64_t function_2015ff(int64_t a1);
int64_t function_201615(void);
int64_t function_3e8096(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3e80c5(void);
int64_t function_3e80d7(int64_t a1);
int64_t function_3e80d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e80f8(void);
int64_t function_3e80fa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e8125(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e82d8(void);
int64_t function_3e82ea(void);
int64_t function_3e8300(void);
int64_t function_3e8335(void);
int64_t function_3e833f(void);
int64_t function_3e8344(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e83d0(int64_t a1);
int64_t function_3e8406(void);
int64_t function_3e8443(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3e845b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_3e8508(void);
int64_t function_3e850b(void);
int64_t function_3e8519(void);
int64_t function_3e8543(void);
int64_t function_3e8572(int64_t a1);
int64_t function_3e85c3(void);
int64_t function_3e8627(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e8654(int64_t a1);
int64_t function_3e86ae(int64_t a1);
int64_t function_3e86b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e873c(void);
int64_t function_3e876e(void);
int64_t function_3e8773(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e878b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e87b5(int64_t a1);
int64_t function_3e87bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e87e5(void);
int64_t function_3e87f8(void);
int64_t function_3e8802(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3e8940(void);
int64_t function_3e8978(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e8995(void);
int64_t function_3e89d9(int64_t a1);
int64_t function_3e8a40(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e8a79(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43b55500();
int64_t function_ffffffff97632965();
int64_t function_ffffffffced245d6();
int64_t function_ffffffffd8ba1a00();
int64_t function_fffffffffe8e5c83();
int64_t unknown_1b8830b5();
int64_t unknown_4020babd();
int64_t unknown_7b15aece();
int64_t unknown_9b9ba1b();
int64_t unknown_a5dcc17();
int64_t unknown_ffffffff82858f2a();
int64_t unknown_ffffffff8a12e31b();
int64_t unknown_ffffffff945e4ddd();
int64_t unknown_ffffffffc4fccb24();
int64_t unknown_ffffffffccd83685();
int64_t unknown_ffffffffda727c39();
int64_t unknown_ffffffffe89a2c2f();

// Address range: 0x201034 - 0x201149
int64_t function_201034(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x201034
    int64_t v1; // 0x201034
    uint32_t v2 = (int32_t)v1; // 0x201034
    uint32_t v3 = v2 + 0x765e3a7f; // 0x201034
    int64_t result = v3; // 0x201034
    char * v4 = (char *)(result + 94); // 0x201039
    unsigned char v5 = *v4; // 0x201039
    unsigned char v6 = (char)a4 % 32; // 0x201039
    bool v7 = v2 > 0x89a1c580; // 0x201039
    if (v6 != 0) {
        *v4 = v5 >> v6 | (char)(v2 > 0x89a1c580) << 8 - v6 | (char)((int16_t)v5 << (int16_t)(9 - v6));
        v7 = (v5 & 1 << v6 - 1) != 0;
    }
    if (v7) {
        char v8 = *(char *)-0x544bacb7; // 0x201042
        *(char *)-0x544bacb7 = v8 + (char)((uint64_t)v1 / 256);
        return result;
    }
    int64_t result2 = __asm_int3(); // 0x2010a0
    uint64_t v9 = a4 - 1; // 0x2010a1
    if (v9 == 0 || v3 == 0 || v3 != 0) {
        // 0x2010a5
        return result2;
    }
    // 0x201113
    __asm_out((int16_t)a3, (int32_t)result2);
    int64_t v10 = unknown_ffffffff8a12e31b(); // 0x201115
    char * v11 = (char *)(a1 + 98); // 0x20111a
    uint64_t v12 = v9 / 256; // 0x20111a
    *v11 = *v11 + (char)v12;
    *(char *)a1 = (char)v10;
    bool v13; // 0x201034
    int64_t v14 = (v13 ? -1 : 1) + a1; // 0x20111d
    uint64_t v15 = unknown_ffffffffc4fccb24(v14); // 0x20111e
    int64_t v16 = v14; // bp-8, 0x201123
    *(int32_t *)v14 = (int32_t)v15;
    int64_t v17 = v14 + (v13 ? -4 : 4); // 0x201124
    char * v18 = (char *)(v17 + 3 + 2 * v15); // 0x201125
    *v18 = *v18 + (char)(v15 / 256);
    int64_t v19 = unknown_ffffffffe89a2c2f(v17) + 0x419928e; // 0x201134
    char * v20 = (char *)((v19 & 0xffffffff) + 0x3af2e00); // 0x20113b
    *v20 = *v20 + (char)v19;
    int32_t * v21 = (int32_t *)(a3 + 1); // 0x201143
    *v21 = *v21 + (int32_t)(int64_t)&v16;
    return (v19 + v12) % 256 | v19 & 0xffffff00;
}

// Address range: 0x201157 - 0x201163
int64_t function_201157(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x201157
    int64_t v1; // 0x201157
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return v1 | 12;
}

// Address range: 0x201272 - 0x201276
int64_t function_201272(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 47); // 0x201272
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x201272
    return result;
}

// Address range: 0x2012df - 0x2012e8
int64_t function_2012df(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2012df
    int64_t result; // 0x2012df
    return result;
}

// Address range: 0x2012e9 - 0x2012ec
int64_t function_2012e9(void) {
    // 0x2012e9
    int64_t result; // 0x2012e9
    return result;
}

// Address range: 0x201306 - 0x201307
int64_t function_201306(void) {
    // 0x201306
    int64_t result; // 0x201306
    return result;
}

// Address range: 0x201330 - 0x201331
int64_t function_201330(void) {
    // 0x201330
    int64_t result; // 0x201330
    return result;
}

// Address range: 0x201336 - 0x201339
int64_t function_201336(void) {
    // 0x201336
    int64_t result; // 0x201336
    return result;
}

// Address range: 0x201361 - 0x201363
int64_t function_201361(void) {
    // 0x201361
    return function_201306();
}

// Address range: 0x201370 - 0x201376
int64_t function_201370(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x201370
    *(int32_t *)a4 = 0;
    int64_t v1; // 0x201370
    *(int32_t *)a2 = *(int32_t *)&v1 ^ (int32_t)a4;
    return function_201330();
}

// Address range: 0x201376 - 0x2013a9
int64_t function_201376(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x201376
    int64_t v1; // 0x201376
    uint64_t v2 = v1;
    unsigned char v3 = (char)v2; // 0x201379
    unsigned char v4 = *(char *)(v2 + 0x2356efb6); // 0x201379
    int64_t v5 = unknown_ffffffffccd83685(); // 0x20137f
    *(int32_t *)0x1e8003a545020fc = (int32_t)v5;
    char * v6 = (char *)(a3 - 0x456ee1b); // 0x201392
    *v6 = *v6 - (v4 > v3 ? -28 : -29);
    int64_t v7; // 0x201376
    char v8 = *(char *)&v7; // 0x20139a
    int32_t * v9 = (int32_t *)(a4 + 0x30973dee); // 0x20139e
    int32_t v10 = *v9; // 0x20139e
    *v9 = v10 + (int32_t)(v2 & 0xffff0000 | (int64_t)(v3 - v4) | 256 * (int64_t)(v8 | (char)(v2 / 256)));
    return (v5 ^ v1) & 0xffffffff;
}

// Address range: 0x2013bd - 0x201438
int64_t function_2013bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4; // 0x2013bd
    int64_t v2; // 0x2013bd
    uint32_t v3 = *(int32_t *)(v2 + 0x1cf6a83a) + v1; // 0x2013bd
    bool v4; // 0x2013bd
    uint32_t v5 = v3 + (int32_t)v4; // 0x2013bd
    *(char *)(a3 - 0x1dfa3172) = (char)a3;
    int64_t v6 = unknown_ffffffff945e4ddd(); // 0x2013d7
    int64_t v7; // 0x2013bd
    if ((int32_t)v2 - 0x2d5f9bca + (int32_t)(v4 ? v5 <= v1 : v3 < v1) >= 0) {
        // 0x2013de
        *(int32_t *)v7 = *(int32_t *)&v7 + (int32_t)a3;
        int32_t * v8 = (int32_t *)(a1 - 0x5cff4406); // 0x2013e9
        int64_t v9; // bp-496, 0x2013bd
        *v8 = *v8 + (int32_t)(int64_t)&v9;
        return v6 & -256 | (int64_t)*(char *)-0x179759ffc7fc7cc6;
    }
    unsigned char v10 = (char)v5 % 32; // 0x20140e
    if (v10 != 0) {
        char * v11 = (char *)(v7 + 0x4cce0ad0); // 0x20140e
        *v11 = *v11 >> v10;
    }
    int64_t v12 = v6 & -256 | (int64_t)(v5 / 256 % 256); // 0x201414
    int32_t * v13 = (int32_t *)v12; // 0x201416
    *v13 = *v13 + (int32_t)v12;
    unknown_ffffffff82858f2a();
    return unknown_ffffffffda727c39();
}

// Address range: 0x201500 - 0x201503
int64_t function_201500(int64_t a1) {
    // 0x201500
    int64_t result; // 0x201500
    return result;
}

// Address range: 0x201505 - 0x201519
int64_t function_201505(void) {
    // 0x201505
    int64_t v1; // 0x201505
    *(int32_t *)0x632ba7b8063a1010 = (int32_t)v1;
    return unknown_a5dcc17();
}

// Address range: 0x201529 - 0x20152e
int64_t function_201529(void) {
    // 0x201529
    return function_ffffffffd8ba1a00();
}

// Address range: 0x201592 - 0x201593
int64_t function_201592(void) {
    // 0x201592
    int64_t result; // 0x201592
    return result;
}

// Address range: 0x2015a5 - 0x2015b5
int64_t function_2015a5(void) {
    unsigned char v1 = *(char *)0x41551af801e8ae07; // 0x2015a5
    int64_t v2; // 0x2015a5
    int64_t result = v2 & -256 | (int64_t)v1; // 0x2015a5
    char * v3 = (char *)result; // 0x2015af
    *v3 = (*v3 & v1) + 60;
    return result;
}

// Address range: 0x2015b5 - 0x2015e6
int64_t function_2015b5(int64_t a1, int64_t a2) {
    int64_t v1 = unknown_4020babd(); // 0x2015b7
    int64_t v2; // 0x2015b5
    char * v3 = (char *)(v2 - 0x18ff6659); // 0x2015bc
    *v3 = *v3 + (char)(v2 / 256);
    int32_t v4 = 0x10000 * (int32_t)v1 >> 16 & -0x3f627c5; // 0x2015c3
    bool v5; // 0x2015b5
    int64_t v6 = 0x4000 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 64 * (int64_t)(v4 == 0) | 128 * (int64_t)(v4 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v4) % 2 == 0) | 2; // bp-8, 0x2015cd
    int64_t v7 = unknown_7b15aece() + 0x71bc092e; // 0x2015d0
    int32_t * v8 = (int32_t *)(a2 + 0xcf04475); // 0x2015da
    *v8 = *v8 + (int32_t)(int64_t)&v6;
    *(int32_t *)a1 = (int32_t)v7;
    return v7 & 0xffff00ff | 0x2500;
}

// Address range: 0x2015ff - 0x201602
int64_t function_2015ff(int64_t a1) {
    // 0x2015ff
    int64_t result; // 0x2015ff
    return result;
}

// Address range: 0x201615 - 0x20161f
int64_t function_201615(void) {
    // 0x201615
    unknown_9b9ba1b();
    return function_43b55500();
}

// Address range: 0x3e8096 - 0x3e80ae
int64_t function_3e8096(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t result = __asm_wait(); // 0x3e8096
    int32_t * v1 = (int32_t *)(a4 % 256 ^ a3); // 0x3e80a6
    *v1 = *v1 + 0x5f2d6990;
    return result;
}

// Address range: 0x3e80c5 - 0x3e80c7
int64_t function_3e80c5(void) {
    // 0x3e80c5
    int64_t v1; // 0x3e80c5
    return function_3e80d8(v1, v1, v1, v1);
}

// Address range: 0x3e80d7 - 0x3e80d8
int64_t function_3e80d7(int64_t a1) {
    // 0x3e80d7
    int64_t result; // 0x3e80d7
    return result;
}

// Address range: 0x3e80d8 - 0x3e80e6
int64_t function_3e80d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e80d8
    int64_t result; // 0x3e80d8
    int32_t * v1 = (int32_t *)(result + 75 + 2 * result); // 0x3e80d8
    *v1 = *v1 | (int32_t)a3;
    int64_t v2; // 0x3e80d8
    __asm_outsb((int16_t)a3, *(char *)&v2);
    return result;
}

// Address range: 0x3e80f8 - 0x3e80f9
int64_t function_3e80f8(void) {
    // 0x3e80f8
    int64_t result; // 0x3e80f8
    return result;
}

// Address range: 0x3e80fa - 0x3e80fe
int64_t function_3e80fa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e80fa
    int64_t result; // 0x3e80fa
    return result;
}

// Address range: 0x3e8125 - 0x3e8242
int64_t function_3e8125(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e8125
    int64_t v1; // 0x3e8125
    char v2 = *(char *)(2 * v1 + 0x426018b3 + v1); // 0x3e8131
    if (llvm_ctpop_i8(v2 | (char)a3) % 2 == 0) {
        int16_t v3 = (int16_t)v1 ^ 169; // 0x3e8128
        int16_t v4 = (int16_t)*(char *)(v1 + 0x158d50b8); // 0x3e8128
        return v1 & -0x10000 | (int64_t)(v3 / v4 % 256) | (int64_t)(256 * (v3 % v4));
    }
    // 0x3e81ad
    bool v5; // 0x3e8125
    uint64_t result = __asm_hlt((v5 ? -1 : 1) + a1); // 0x3e81ae
    char * v6 = (char *)(v1 - 89); // 0x3e81af
    *v6 = *v6 & (char)(result / 256);
    return result;
}

// Address range: 0x3e82d8 - 0x3e82d9
int64_t function_3e82d8(void) {
    // 0x3e82d8
    int64_t result; // 0x3e82d8
    return result;
}

// Address range: 0x3e82ea - 0x3e82ec
int64_t function_3e82ea(void) {
    // 0x3e82ea
    int64_t result; // 0x3e82ea
    return result;
}

// Address range: 0x3e8300 - 0x3e8303
int64_t function_3e8300(void) {
    // 0x3e8300
    int64_t result; // 0x3e8300
    return result;
}

// Address range: 0x3e8335 - 0x3e8336
int64_t function_3e8335(void) {
    // 0x3e8335
    int64_t result; // 0x3e8335
    return result;
}

// Address range: 0x3e833f - 0x3e8342
int64_t function_3e833f(void) {
    // 0x3e833f
    int64_t result; // 0x3e833f
    return result;
}

// Address range: 0x3e8344 - 0x3e834e
int64_t function_3e8344(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e8344
    int64_t result; // 0x3e8344
    return result;
}

// Address range: 0x3e83d0 - 0x3e83d3
int64_t function_3e83d0(int64_t a1) {
    // 0x3e83d0
    int64_t result; // 0x3e83d0
    return result;
}

// Address range: 0x3e8406 - 0x3e840b
int64_t function_3e8406(void) {
    // 0x3e8406
    return function_ffffffff97632965();
}

// Address range: 0x3e8443 - 0x3e845a
int64_t function_3e8443(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3e8443
    int64_t v1; // 0x3e8443
    int64_t v2 = v1;
    *(char *)-0xc89da75 = *(char *)-0xc89da75 | (char)(a4 / 256);
    uint32_t result = (int32_t)v1 & -121;
    *(char *)v2 = (char)result + (char)v2;
    return result;
}

// Address range: 0x3e845b - 0x3e84df
int64_t function_3e845b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x3e845b
    __asm_int(82);
    *(int32_t *)a1 = __asm_insd((int16_t)a8);
    int64_t v1; // 0x3e845b
    char * v2 = (char *)(v1 - 99); // 0x3e8466
    char v3 = *v2 + (char)v1; // 0x3e8466
    *v2 = v3;
    int64_t v4 = a4 - 1; // 0x3e846a
    if (v4 != 0 == v3 == 0) {
        int32_t * v5 = (int32_t *)(8 * a8 + 0x137a0c6a); // 0x3e8487
        *v5 = *v5 & (int32_t)a8;
        int32_t v6 = 0x10000 * (int32_t)a1 >> 16; // 0x3e8492
        uint32_t v7 = v6 + 20;
        *(char *)(v1 & 0xffffffff) = (char)v7;
        return v6 - 0x75091801 & -256 | v7 % 256;
    }
    // 0x3e846c
    *(char *)v1 = 0;
    int64_t result = (a2 & 0xffffffff) + 0x7e440f73; // 0x3e8476
    if (v4 != 1) {
        // 0x3e84dc
        return result;
    }
    char * v8 = (char *)(4 * v1 + 0xf6b1a99); // 0x3e847e
    *v8 = *v8 - 88;
    return result;
}

// Address range: 0x3e8508 - 0x3e850b
int64_t function_3e8508(void) {
    // 0x3e8508
    int64_t result; // 0x3e8508
    return result;
}

// Address range: 0x3e850b - 0x3e850c
int64_t function_3e850b(void) {
    // 0x3e850b
    int64_t result; // 0x3e850b
    return result;
}

// Address range: 0x3e8519 - 0x3e851a
int64_t function_3e8519(void) {
    // 0x3e8519
    int64_t result; // 0x3e8519
    return result;
}

// Address range: 0x3e8543 - 0x3e8547
int64_t function_3e8543(void) {
    // 0x3e8545
    return function_3e8519();
}

// Address range: 0x3e8572 - 0x3e8573
int64_t function_3e8572(int64_t a1) {
    // 0x3e8572
    int64_t result; // 0x3e8572
    return result;
}

// Address range: 0x3e85c3 - 0x3e85cb
int64_t function_3e85c3(void) {
    // 0x3e85c3
    int64_t v1; // 0x3e85c3
    int32_t * v2 = (int32_t *)(v1 - 46); // 0x3e85c3
    *v2 = *v2 & (int32_t)v1;
    return function_ffffffffced245d6();
}

// Address range: 0x3e8627 - 0x3e8653
int64_t function_3e8627(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(a4 - 0x70bb36fe); // 0x3e8636
    *v1 = *v1 - a5 + (int64_t)(*(int32_t *)(a1 - 6) < 0xafc53762);
    __asm_in_133(0x6d31);
    bool v2; // 0x3e8627
    int64_t v3 = v2 ? -4 : 4; // 0x3e864a
    char * v4 = (char *)0x7444d7c9; // 0x3e863d
    int64_t v5 = a2; // 0x3e863d
    int64_t v6 = a1; // 0x3e863d
    while (true) {
        char * v7 = v4;
        *v7 = *v7 + (char)a4;
        *(int32_t *)v6 = *(int32_t *)v5;
        v4 = (char *)0x1e4a4f7b;
        v5 += v3;
        v6 += v3;
    }
}

// Address range: 0x3e8654 - 0x3e8655
int64_t function_3e8654(int64_t a1) {
    // 0x3e8654
    int64_t result; // 0x3e8654
    return result;
}

// Address range: 0x3e86ae - 0x3e86af
int64_t function_3e86ae(int64_t a1) {
    // 0x3e86ae
    int64_t result; // 0x3e86ae
    return result;
}

// Address range: 0x3e86b2 - 0x3e86b7
int64_t function_3e86b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e86b2
    int64_t result; // 0x3e86b2
    return result;
}

// Address range: 0x3e873c - 0x3e873d
int64_t function_3e873c(void) {
    // 0x3e873c
    int64_t result; // 0x3e873c
    return result;
}

// Address range: 0x3e876e - 0x3e876f
int64_t function_3e876e(void) {
    // 0x3e876e
    int64_t result; // 0x3e876e
    return result;
}

// Address range: 0x3e8773 - 0x3e8788
int64_t function_3e8773(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e8773
    unknown_1b8830b5(a4);
    int64_t v1; // 0x3e8773
    return function_3e87bb(a4, a2, a3, v1);
}

// Address range: 0x3e878b - 0x3e87b3
int64_t function_3e878b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e878b
    int64_t v1; // 0x3e878b
    uint64_t v2 = v1;
    int64_t v3 = v1 & (v2 | -0xff01); // 0x3e878b
    int32_t * v4 = (int32_t *)(a4 + a3); // 0x3e878f
    *v4 = *v4 | (int32_t)a4;
    int32_t * v5 = (int32_t *)(v3 - 42); // 0x3e8792
    *v5 = (int32_t)v3;
    *(char *)((int64_t)*v5 + 39) = (char)(v2 / 256);
    uint64_t result = function_3e873c(); // 0x3e8798
    if (a4 == 0) {
        // 0x3e87b6
        return result;
    }
    char * v6 = (char *)(4 * a2 + a4); // 0x3e87a0
    unsigned char v7 = *v6; // 0x3e87a0
    unsigned char v8 = v7 + (char)(result / 256); // 0x3e87a0
    *v6 = v8;
    unsigned char v9 = (char)result + 33 + (char)(v8 < v7); // 0x3e87a3
    unsigned char v10 = llvm_ctpop_i8(v9); // 0x3e87a3
    int64_t result2 = result & -256 | (int64_t)v9; // 0x3e87a6
    if (v10 % 2 == 0) {
        result2 = function_3e8802(a1, a2, a3, a4, (int64_t)&g1, (int64_t)&g1);
    }
    // 0x3e87a8
    __asm_out_134(102, (int32_t)result2);
    return result2;
}

// Address range: 0x3e87b5 - 0x3e87b6
int64_t function_3e87b5(int64_t a1) {
    // 0x3e87b5
    int64_t result; // 0x3e87b5
    return result;
}

// Address range: 0x3e87bb - 0x3e87d5
int64_t function_3e87bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(5 * a4); // 0x3e87bb
    *v1 = *v1 + (int32_t)a2;
    __asm_wait();
    int32_t v2 = __readfsdword(0x6266aeb4e12e9940); // 0x3e87bf
    int64_t v3; // 0x3e87bb
    return (int64_t)((*(int32_t *)(v3 - 0x57e261b5) | v2) & -256 | 17);
}

// Address range: 0x3e87e5 - 0x3e87ed
int64_t function_3e87e5(void) {
    // 0x3e87e5
    int64_t result; // 0x3e87e5
    return result;
}

// Address range: 0x3e87f8 - 0x3e87f9
int64_t function_3e87f8(void) {
    // 0x3e87f8
    int64_t result; // 0x3e87f8
    return result;
}

// Address range: 0x3e8802 - 0x3e88f8
int64_t function_3e8802(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3e8802
    int64_t v1; // 0x3e8802
    int64_t v2 = v1;
    *(int32_t *)0x72952bfccf320d54 = (int32_t)(v2 - (256 * (int64_t)((int32_t)v2 < 0x517eb291) + a4 & 0xff00) & 0xff00 | v2 & 0xffff00ff);
    int32_t * v3 = (int32_t *)(9 * a3); // 0x3e881a
    *v3 = *v3 | (int32_t)a2;
    char v4 = a4; // 0x3e881d
    char v5 = *(char *)-0x51b2f16f; // 0x3e881d
    if (v5 < v4) {
        // 0x3e8826
        return a5 & 0x7deec06c;
    }
    char * v6 = (char *)(v1 - 120); // 0x3e8899
    *v6 = *v6 & (char)a3;
    int32_t v7 = __asm_in_135(-27); // 0x3e889d
    int64_t v8 = v7; // 0x3e889d
    uint32_t v9 = (int32_t)a3; // 0x3e889f
    uint32_t v10 = *(int32_t *)-0x2068a1a9; // 0x3e889f
    int32_t * v11 = (int32_t *)((a4 & -256 | (int64_t)(v4 - v5)) - 0x2708edc3); // 0x3e88a5
    *v11 = *v11 + (int32_t)a1 + (int32_t)(v10 > v9);
    unsigned char v12 = (char)v7; // 0x3e88ab
    unsigned char v13 = *(char *)v8; // 0x3e88ab
    int64_t result = v8 & -256 | (int64_t)(v12 - v13); // 0x3e88ab
    if (v13 <= v12) {
        // 0x3e88af
        return result;
    }
    char * v14 = (char *)(v1 - 0x610cfbcf); // 0x3e88eb
    *v14 = *v14 + (char)((v9 - v10) / 256);
    *(int32_t *)a1 = (int32_t)result;
    bool v15; // 0x3e8802
    char * v16 = (char *)(a1 - 47 + (v15 ? -4 : 4)); // 0x3e88f4
    *v16 = *v16 - 115;
    return result;
}

// Address range: 0x3e8940 - 0x3e8941
int64_t function_3e8940(void) {
    // 0x3e8940
    int64_t result; // 0x3e8940
    return result;
}

// Address range: 0x3e8978 - 0x3e8981
int64_t function_3e8978(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e8978
    *(char *)(a1 + 0x60c66f21) = (char)a3;
    int64_t result; // 0x3e8978
    return result;
}

// Address range: 0x3e8995 - 0x3e89a1
int64_t function_3e8995(void) {
    // 0x3e8995
    int64_t v1; // 0x3e8995
    int32_t * v2 = (int32_t *)(v1 + 7); // 0x3e8995
    bool v3; // 0x3e8995
    *v2 = *v2 - (v3 ? 0x69d43fe8 : 0x69d43fe7);
    return function_fffffffffe8e5c83();
}

// Address range: 0x3e89d9 - 0x3e89dc
int64_t function_3e89d9(int64_t a1) {
    // 0x3e89d9
    int64_t result; // 0x3e89d9
    return result;
}

// Address range: 0x3e8a40 - 0x3e8a4d
int64_t function_3e8a40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e8a40
    return (int64_t)*(int32_t *)-0x5f059ccb6ff330fa;
}

// Address range: 0x3e8a79 - 0x3e8a93
int64_t function_3e8a79(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e8a79
    int64_t v1; // 0x3e8a79
    char v2 = v1; // 0x3e8a79
    *(char *)a1 = (char)v1 - v2;
    __asm_out_137((int16_t)(256 * v1 | a3), v2);
    uint64_t v3 = 0; // 0x3e8a80
    int64_t v4 = v1 - 0x2a989b2e; // 0x3e8a82
    __writegsbyte(v4, (char)((int32_t)v1 < (int32_t)v1) + (char)(v3 / 256) + __readgsbyte(v4));
    int64_t v5; // 0x3e8a79
    return v3 & 0xffffff00 | (int64_t)*(char *)&v5;
}
