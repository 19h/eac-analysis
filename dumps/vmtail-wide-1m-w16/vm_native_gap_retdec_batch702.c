/*
 * Targeted RetDec C for native executable gap queue batch 702.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2d2e69-0x2d3069 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d3069-0x2d3269 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d3469-0x2d3669 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d3669-0x2d3869 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2dc10e-0x2dc30e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2dc30e-0x2dc50e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2dc50e-0x2dc70e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2dc70e-0x2dc90e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2153185();
int64_t function_2d2e69(void);
int64_t function_2d2e6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d2e83(int64_t a1);
int64_t function_2d2edf(int64_t a1);
int64_t function_2d2eec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d2f52(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d2fd1(int64_t a1);
int64_t function_2d2ff3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2d308c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d30ac(int64_t a1);
int64_t function_2d3109(void);
int64_t function_2d3112(void);
int64_t function_2d3125(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_2d315c(void);
int64_t function_2d3163(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d3172(void);
int64_t function_2d31f4(void);
int64_t function_2d31f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d3235(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d3469(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2d3486(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d34cb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2d352b(int64_t a1);
int64_t function_2d3566(int64_t a1);
int64_t function_2d35d9(void);
int64_t function_2d3616(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2d364b(int64_t a1);
int64_t function_2d3669(int64_t a1);
int64_t function_2d36b3(int64_t a1);
int64_t function_2d36de(void);
int64_t function_2d36eb(int64_t a1);
int64_t function_2d370e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2d3740(int64_t a1);
int64_t function_2d3755(void);
int64_t function_2d37de(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d383b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d384f(int64_t a1, int64_t a2);
int64_t function_2d7108();
int64_t function_2dc10e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2dc158(void);
int64_t function_2dc179(void);
int64_t function_2dc183(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2dc19a(void);
int64_t function_2dc1bc(void);
int64_t function_2dc1c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2dc30f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2dc491(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2dc5c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2dc71e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_611b3a5a();
int64_t function_682f1ef1();
int64_t function_caf2a();
int64_t function_ffffffff80a12f17();
int64_t function_ffffffffb0028470();
int64_t function_ffffffffc5eab6bd();
int64_t function_ffffffffe82f20d5();
int64_t function_ffffffffe88f8e54();
int64_t unknown_34391a7e();
int64_t unknown_3d6fb16c();
int64_t unknown_419132fe();
int64_t unknown_6f41309d();
int64_t unknown_7e35d1a2();
int64_t unknown_ffffffff882d31cc();
int64_t unknown_ffffffff889afd2b();
int64_t unknown_ffffffff89c6b123();
int64_t unknown_ffffffffa10d3540();
int64_t unknown_ffffffffb4024114();
int64_t unknown_ffffffffcb30c169();
int64_t unknown_ffffffffde07f703();
int64_t unknown_ffffffffe8f5e521();
int64_t unknown_ffffffffe922e7f2();
int64_t unknown_fffffffffa553b74();
int64_t unknown_fffffffffe636292();

// Address range: 0x2d2e69 - 0x2d2e6e
int64_t function_2d2e69(void) {
    // 0x2d2e69
    return function_2d7108();
}

// Address range: 0x2d2e6e - 0x2d2e7e
int64_t function_2d2e6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d2e6e
    int64_t v1; // 0x2d2e6e
    int64_t v2 = v1;
    *(int32_t *)v2 = *(int32_t *)(int32_t *)&g2 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(a3 + 1); // 0x2d2e73
    *v3 = *v3 + (int32_t)v1;
    return function_ffffffff80a12f17();
}

// Address range: 0x2d2e83 - 0x2d2e86
int64_t function_2d2e83(int64_t a1) {
    // 0x2d2e83
    int64_t result; // 0x2d2e83
    return result;
}

// Address range: 0x2d2edf - 0x2d2ee2
int64_t function_2d2edf(int64_t a1) {
    // 0x2d2edf
    int64_t result; // 0x2d2edf
    return result;
}

// Address range: 0x2d2eec - 0x2d2f05
int64_t function_2d2eec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d2eec
    unknown_ffffffffe922e7f2();
    int16_t v1 = a3; // 0x2d2ef1
    int64_t v2; // 0x2d2eec
    int32_t v3 = v2;
    __asm_outsd(v1, v3);
    __asm_outsd(v1, v3);
    int64_t v4 = unknown_ffffffffde07f703(); // 0x2d2efd
    return (v4 + 101) % 256 | v4 & -256;
}

// Address range: 0x2d2f52 - 0x2d2f74
int64_t function_2d2f52(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d2f52
    __asm_int1((int64_t)(0x1e8930d * *(int32_t *)(a2 - 42)));
    int32_t * v1 = (int32_t *)(a2 - 110); // 0x2d2f62
    *v1 = *v1 ^ (int32_t)a4;
    int64_t v2 = unknown_3d6fb16c(); // 0x2d2f65
    int64_t v3; // 0x2d2f52
    int64_t v4; // 0x2d2f52
    *(int32_t *)a3 = *(int32_t *)&v3 + (int32_t)v4;
    return v2 + 2 * v4 & 0xffffffff;
}

// Address range: 0x2d2fd1 - 0x2d2fd3
int64_t function_2d2fd1(int64_t a1) {
    // 0x2d2fd1
    int64_t result; // 0x2d2fd1
    return result;
}

// Address range: 0x2d2ff3 - 0x2d3087
int64_t function_2d2ff3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2d2ff3
    int64_t v1; // 0x2d2ff3
    char * v2 = (char *)(v1 + 1); // 0x2d2ff3
    unsigned char v3 = *v2; // 0x2d2ff3
    unsigned char v4 = v3 + (char)v1; // 0x2d2ff3
    *v2 = v4;
    char v5 = a4 / 256; // 0x2d2ff6
    *(char *)v1 = v5;
    int32_t * v6 = (int32_t *)(8 * a1 + a2); // 0x2d2ff8
    *v6 = *v6 + 24 + (int32_t)(v4 < v3);
    int64_t v7; // 0x2d2ff3
    *(char *)v7 = *(char *)&v7 + v5;
    int32_t * v8 = (int32_t *)(a3 + 19 + v1); // 0x2d3005
    *v8 = *v8 + (int32_t)v1;
    uint16_t v9 = (int16_t)v1 % 256 * (int16_t)*(char *)(a1 - 48); // 0x2d3009
    int64_t v10 = v1 & -0x10000 | (int64_t)v9; // 0x2d3009
    int32_t v11 = *(int32_t *)v10 + (int32_t)(v9 > 255) + (int32_t)v10; // 0x2d300c
    char * v12 = (char *)(v1 - 0x7c938ade); // 0x2d300e
    unsigned char v13 = *v12; // 0x2d300e
    char v14 = v13 / 128; // 0x2d300e
    *v12 = v14 | 2 * v13;
    if (v11 < 0 == (v13 / 64 % 2 != v14)) {
        // 0x2d3016
        return v11 - 0x30fec300;
    }
    // 0x2d3077
    __asm_in((int16_t)a3);
    int64_t result = unknown_34391a7e(); // 0x2d3078
    float80_t v15; // 0x2d2ff3
    *(int64_t *)(a1 + 0x1e80a57) = (int64_t)v15;
    return result;
}

// Address range: 0x2d308c - 0x2d30a3
int64_t function_2d308c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d308c
    unknown_fffffffffe636292();
    int64_t v1; // 0x2d308c
    *(char *)a2 = (char)(v1 & a5);
    int64_t result = unknown_6f41309d(); // 0x2d3096
    __asm_out(-102, (char)result);
    return result;
}

// Address range: 0x2d30ac - 0x2d30ad
int64_t function_2d30ac(int64_t a1) {
    // 0x2d30ac
    int64_t result; // 0x2d30ac
    return result;
}

// Address range: 0x2d3109 - 0x2d310b
int64_t function_2d3109(void) {
    // 0x2d3109
    int64_t result; // 0x2d3109
    return result;
}

// Address range: 0x2d3112 - 0x2d3113
int64_t function_2d3112(void) {
    // 0x2d3112
    int64_t result; // 0x2d3112
    return result;
}

// Address range: 0x2d3125 - 0x2d3135
int64_t function_2d3125(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x2d3125
    if ((char)(unknown_ffffffff889afd2b() || a3 / 256) != 121) {
        function_2d3112();
    }
    // 0x2d3130
    return function_ffffffffe88f8e54();
}

// Address range: 0x2d315c - 0x2d3162
int64_t function_2d315c(void) {
    // 0x2d315c
    return function_611b3a5a();
}

// Address range: 0x2d3163 - 0x2d3172
int64_t function_2d3163(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d3163
    unknown_ffffffffcb30c169();
    int64_t v1; // 0x2d3163
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x2d3163
    int64_t v3 = v2 ? -4 : 4; // 0x2d3168
    return function_2153185(v3 + a1, v3 + a2);
}

// Address range: 0x2d3172 - 0x2d3177
int64_t function_2d3172(void) {
    // 0x2d3172
    return function_ffffffffb0028470();
}

// Address range: 0x2d31f4 - 0x2d31f5
int64_t function_2d31f4(void) {
    // 0x2d31f4
    int64_t result; // 0x2d31f4
    return result;
}

// Address range: 0x2d31f7 - 0x2d31ff
int64_t function_2d31f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x2d31f7
    if (v1 != 0) {
        char * v2 = (char *)(a1 + 2); // 0x2d31f7
        unsigned char v3 = *v2; // 0x2d31f7
        bool v4; // 0x2d31f7
        *v2 = v3 << v1 | (char)v4 << v1 - 1 | (char)((int16_t)v3 >> (int16_t)(9 - v1));
    }
    int64_t result; // 0x2d31f7
    return result;
}

// Address range: 0x2d3235 - 0x2d3252
int64_t function_2d3235(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 + 61 + 8 * a4); // 0x2d323f
    int64_t result; // 0x2d3235
    *v1 = *v1 + (char)result;
    int32_t * v2 = (int32_t *)((int64_t)(-0x4a206671 * *(int32_t *)(result + 0x1e09d854)) - 118); // 0x2d3243
    int32_t v3 = *v2; // 0x2d3243
    int32_t v4 = a2; // 0x2d3243
    int32_t v5 = v3 + v4; // 0x2d3243
    *v2 = v5;
    if (((v5 ^ v3) & (v5 ^ v4)) >= 0) {
        char * v6 = (char *)(result + (8 * result | 1)); // 0x2d324d
        *v6 = *v6 | (char)((result >> 63) / 256);
    }
    // 0x2d3251
    return result;
}

// Address range: 0x2d3469 - 0x2d3473
int64_t function_2d3469(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d3469
    return unknown_fffffffffa553b74(a1, a2, a3);
}

// Address range: 0x2d3486 - 0x2d34bc
int64_t function_2d3486(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d3486
    int64_t v1; // 0x2d3486
    uint64_t v2 = v1;
    int64_t v3 = a3;
    char v4 = a3;
    v3 = a3;
    char v5 = v4; // 0x2d3486
    // 0x2d3488
    bool v6; // 0x2d3486
    char * v7 = (char *)((v1 - (v6 ? 0xa83807 : 0xa83806) & 0xffffffff) + 0x462ff800); // 0x2d348d
    *v7 = *v7 | v4;
    v5 = *(char *)&v3;
    uint32_t v8 = *(int32_t *)0x6ac23f0347c57e2c; // 0x2d3498
    int64_t v9 = v8; // 0x2d3498
    *(char *)v3 = v5 + (char)(v2 / 256);
    char v10 = *(char *)v9; // 0x2d34a6
    int64_t result = 256 * (int64_t)(v10 ^ (char)(v8 / 256)) | v9 & 0xffff00ff; // 0x2d34a6
    int32_t * v11 = (int32_t *)result; // 0x2d34aa
    *v11 = (int32_t)v2;
    unsigned char v12 = *(char *)0x4bcb9bb3; // 0x2d34ac
    unsigned char v13 = v12 + (char)(*v11 / 256); // 0x2d34ac
    *(char *)0x4bcb9bb3 = v13;
    char * v14 = (char *)(a2 + 0x660d93f); // 0x2d34b2
    unsigned char v15 = *v14; // 0x2d34b2
    *v14 = v15 / 4 | 128 * v15 | 64 * (char)(v13 < v12);
    return result;
}

// Address range: 0x2d34cb - 0x2d3527
int64_t function_2d34cb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2d34cb
    int64_t v1; // 0x2d34cb
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    __asm_sti();
    int64_t result = unknown_ffffffffa10d3540(); // 0x2d34d3
    int64_t v3; // 0x2d34cb
    uint32_t v4 = *(int32_t *)&v3; // 0x2d34d8
    int64_t v5; // 0x2d34cb
    uint32_t v6 = *(int32_t *)&v5; // 0x2d34d8
    bool v7; // 0x2d34cb
    int64_t v8 = v7 ? -4 : 4; // 0x2d34d8
    int64_t v9 = v8 + a2; // 0x2d34d8
    v5 = v8 + a1;
    v3 = v9;
    if (v4 <= v6) {
        // 0x2d3523
        return result;
    }
    int32_t * v10 = (int32_t *)v9; // 0x2d34dd
    *v10 = *v10 + (int32_t)v1;
    int64_t v11 = v5 + v8; // 0x2d34e1
    int64_t v12 = v3 + v8; // 0x2d34e1
    int64_t v13 = v7 ? -1 : 1; // 0x2d34eb
    int64_t v14 = v11 + v13; // 0x2d34eb
    int64_t v15 = v12 + v13; // 0x2d34eb
    v5 = v14;
    v3 = v15;
    char * v16 = (char *)(v14 + 0x22ccf93a);
    unsigned char v17 = *v16; // 0x2d34ec
    unsigned char v18 = (char)a4 % 32; // 0x2d34ec
    v5 = v14;
    v3 = v15;
    bool v19 = *(char *)v12 < *(char *)v11; // 0x2d34ec
    if (v18 != 0) {
        *v16 = v17 >> v18;
        v19 = (v17 & 1 << v18 - 1) != 0;
    }
    char v20 = *(char *)(v1 - 0x75ff9712); // 0x2d34f2
    int32_t v21 = *(int32_t *)v3; // 0x2d34f8
    __asm_outsd((int16_t)(256 * (int64_t)(v20 + (char)(a3 / 256) + (char)v19) | a3 % 256), v21);
    return function_2d3566(v5);
}

// Address range: 0x2d352b - 0x2d352f
int64_t function_2d352b(int64_t a1) {
    // 0x2d352b
    int64_t result; // 0x2d352b
    return result;
}

// Address range: 0x2d3566 - 0x2d3567
int64_t function_2d3566(int64_t a1) {
    // 0x2d3566
    int64_t result; // 0x2d3566
    return result;
}

// Address range: 0x2d35d9 - 0x2d35dc
int64_t function_2d35d9(void) {
    // 0x2d35d9
    int64_t result; // 0x2d35d9
    return result;
}

// Address range: 0x2d3616 - 0x2d3627
int64_t function_2d3616(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2d3616
    int64_t v1; // 0x2d3616
    *(int32_t *)a1 = 0x10000 * (int32_t)v1 >> 16;
    char * v2 = (char *)(v1 + a3); // 0x2d361a
    *v2 = *v2 + (char)(a3 / 256);
    bool v3; // 0x2d3616
    int64_t result = unknown_ffffffff89c6b123((v3 ? -4 : 4) + a1); // 0x2d361d
    char * v4 = (char *)(a4 + 62 + 4 * a4); // 0x2d3622
    *v4 = *v4 + (char)(v1 / 256);
    return result;
}

// Address range: 0x2d364b - 0x2d364e
int64_t function_2d364b(int64_t a1) {
    // 0x2d364b
    int64_t result; // 0x2d364b
    return result;
}

// Address range: 0x2d3669 - 0x2d366d
int64_t function_2d3669(int64_t a1) {
    // 0x2d3669
    int64_t result; // 0x2d3669
    return result;
}

// Address range: 0x2d36b3 - 0x2d36b6
int64_t function_2d36b3(int64_t a1) {
    // 0x2d36b3
    int64_t result; // 0x2d36b3
    return result;
}

// Address range: 0x2d36de - 0x2d36e3
int64_t function_2d36de(void) {
    // 0x2d36de
    return function_682f1ef1();
}

// Address range: 0x2d36eb - 0x2d370e
int64_t function_2d36eb(int64_t a1) {
    // 0x2d36eb
    int64_t v1; // 0x2d36eb
    __asm_fbld(*(float80_t *)(v1 - 0x17fe1705));
    *(int32_t *)0x105d0bf9 = *(int32_t *)0x105d0bf9 + (int32_t)a1;
    return unknown_419132fe();
}

// Address range: 0x2d370e - 0x2d373d
int64_t function_2d370e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2d370e
    int64_t v1; // 0x2d370e
    *(char *)0x71af591e = *(char *)0x71af591e + (char)(v1 / 256);
    *(char *)a2 = (char)v1 + (char)&g1 & (char)v1;
    unsigned char v2 = *(char *)-0x70d273e4; // 0x2d371f
    char v3 = a4 / 256; // 0x2d371f
    unsigned char v4 = v2 + v3; // 0x2d371f
    *(char *)-0x70d273e4 = v4;
    char * v5 = (char *)(a2 - 0x17f5ef5a); // 0x2d3725
    *v5 = *v5 + v3 + (char)(v4 < v2);
    int32_t * v6 = (int32_t *)(4 * v1 + a4); // 0x2d372b
    *v6 = *v6 + (int32_t)a4;
    return __asm_wait();
}

// Address range: 0x2d3740 - 0x2d3741
int64_t function_2d3740(int64_t a1) {
    // 0x2d3740
    int64_t result; // 0x2d3740
    return result;
}

// Address range: 0x2d3755 - 0x2d375a
int64_t function_2d3755(void) {
    // 0x2d3755
    return function_ffffffffc5eab6bd();
}

// Address range: 0x2d37de - 0x2d37e5
int64_t function_2d37de(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d37de
    return function_ffffffffe82f20d5();
}

// Address range: 0x2d383b - 0x2d3844
int64_t function_2d383b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d383b
    int64_t v1; // 0x2d383b
    int32_t * v2 = (int32_t *)(v1 + 93); // 0x2d383b
    *v2 = *v2 + (int32_t)a4;
    return v1 + 0xc3ff8000 & 0xffffffff;
}

// Address range: 0x2d384f - 0x2d3852
int64_t function_2d384f(int64_t a1, int64_t a2) {
    // 0x2d384f
    int64_t v1; // 0x2d384f
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x2dc10e - 0x2dc128
int64_t function_2dc10e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2dc10e
    unknown_ffffffffb4024114();
    int64_t result = unknown_ffffffffe8f5e521(); // 0x2dc11b
    *(int32_t *)-0x17a471d9 = *(int32_t *)-0x17a471d9 + (int32_t)a1;
    int32_t * v1 = (int32_t *)result; // 0x2dc126
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2dc158 - 0x2dc159
int64_t function_2dc158(void) {
    // 0x2dc158
    int64_t result; // 0x2dc158
    return result;
}

// Address range: 0x2dc179 - 0x2dc17c
int64_t function_2dc179(void) {
    // 0x2dc179
    int64_t result; // 0x2dc179
    return result;
}

// Address range: 0x2dc183 - 0x2dc19a
int64_t function_2dc183(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2dc183
    int64_t v1; // 0x2dc183
    int64_t v2 = v1 & 0x600001a8; // 0x2dc18d
    int32_t * v3 = (int32_t *)v2; // 0x2dc192
    int32_t v4 = *v3 + (int32_t)a3; // 0x2dc192
    *v3 = v4;
    *(char *)a3 = (char)((uint64_t)v1 / 256);
    int64_t result = v2; // 0x2dc196
    if (a4 != 1 && v4 != 0) {
        result = function_2dc158();
    }
    // 0x2dc199
    return result;
}

// Address range: 0x2dc19a - 0x2dc1a4
int64_t function_2dc19a(void) {
    // 0x2dc19a
    __asm_wait();
    return unknown_7e35d1a2();
}

// Address range: 0x2dc1bc - 0x2dc1bd
int64_t function_2dc1bc(void) {
    // 0x2dc1bc
    int64_t result; // 0x2dc1bc
    return result;
}

// Address range: 0x2dc1c6 - 0x2dc30f
int64_t function_2dc1c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2dc1c6
    int64_t v1; // 0x2dc1c6
    int64_t v2 = v1;
    int64_t v3 = unknown_ffffffff882d31cc(); // 0x2dc1c6
    unsigned char v4 = (char)v3; // 0x2dc1ce
    int64_t v5 = v3; // 0x2dc1d0
    if ((90 - v4 & v4) >= 0) {
        v5 = function_2dc1c6(a1, a2, a3, a4, a5);
    }
    int64_t v6 = v5; // 0x2dc1d2
    if (v4 >= 91) {
        v6 = function_2dc1bc();
    }
    int32_t * v7 = (int32_t *)(a4 + 62); // 0x2dc1d4
    int32_t v8 = v6; // 0x2dc1d4
    *v7 = *v7 + v8;
    uint32_t v9 = v8 >> 31; // 0x2dc1d7
    uint32_t v10 = 0x6f4cb * *(int32_t *)((int64_t)v9 + 0x1e84c86); // 0x2dc1da
    char * v11 = (char *)v6; // 0x2dc1e4
    *v11 = *v11 + 105;
    int64_t v12; // bp-40, 0x2dc1c6
    int64_t v13 = (int64_t)&v12; // 0x2dc242
    v12 = v13;
    int64_t v14 = v13 - 8; // 0x2dc258
    int64_t * v15 = (int64_t *)v14; // 0x2dc259
    *v15 = (v2 & 0xff00) + v2 & 0xff00 | v2 & -0xff01;
    int64_t v16 = *(int64_t *)(v13 + 32); // 0x2dc25c
    *v15 = v16;
    int64_t * v17 = (int64_t *)(v13 - 16); // 0x2dc260
    *v17 = v16;
    int64_t * v18 = (int64_t *)(v13 + 16); // 0x2dc26f
    int64_t v19 = *v18; // 0x2dc26f
    *(int64_t *)(v13 - 24) = v19;
    *v17 = v14;
    *v18 = v16;
    *v15 = v13;
    v12 = v19;
    int64_t v20 = v13 + 8; // 0x2dc2bd
    int64_t * v21 = (int64_t *)v20; // 0x2dc2c0
    *(int64_t *)(v13 + 40) = *v21;
    v12 = v20;
    *v21 = v13 + 24;
    return function_caf2a(a1, 169, v9, 256 * (int64_t)((char)(v10 / 256) >> 3) | (int64_t)(v10 & -0xff01), a5, v1, 0x2d78fa);
}

// Address range: 0x2dc30f - 0x2dc491
int64_t function_2dc30f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2dc30f
    int64_t v1; // bp-40, 0x2dc30f
    v1 = (int64_t)&v1 + 16;
    return function_caf2a(a1, a2, (int32_t)a3, a4, a5, a6, a7);
}

// Address range: 0x2dc491 - 0x2dc5c8
int64_t function_2dc491(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2dc491
    int64_t v1; // bp-32, 0x2dc491
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x2dc491
    return function_caf2a(a1, a2, (int32_t)a6, a4, a5, v2, 0x45956661);
}

// Address range: 0x2dc5c8 - 0x2dc71e
int64_t function_2dc5c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2dc5c8
    bool v1; // 0x2dc5c8
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x2dc5c8
    int64_t v3 = v2; // bp-48, 0x2dc650
    int64_t v4; // 0x2dc5c8
    int64_t * v5 = (int64_t *)(v4 - 24); // 0x2dc6a8
    *v5 = a1;
    int64_t * v6 = (int64_t *)(v4 - 16); // 0x2dc6ac
    *v6 = v2;
    int64_t v7 = *v5; // 0x2dc6b1
    int64_t * v8 = (int64_t *)(v4 - 8); // 0x2dc6b5
    *(int64_t *)(v4 + 8) = *v8;
    *v5 = a3;
    *v6 = 0x8f49049;
    int64_t v9 = *v5; // 0x2dc6ca
    *(int64_t *)(v4 + 24) = *v8;
    int64_t * v10 = (int64_t *)v4; // 0x2dc6d2
    *v6 = *v10;
    *v8 = v9;
    *v10 = v4 + 16;
    int64_t result = function_caf2a(v7, a2, (int32_t)v9, a4, v4, v4, (int64_t)&v3); // 0x2dc719
    return result;
}

// Address range: 0x2dc71e - 0x2dc86c
int64_t function_2dc71e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2dc71e
    int64_t v1; // bp-40, 0x2dc71e
    int64_t v2 = (int64_t)&v1; // 0x2dc807
    int64_t v3 = v2 + 16; // 0x2dc80e
    v1 = v3;
    v1 = *(int64_t *)v3;
    *(int64_t *)(v2 - 16) = 0x4106ac7f;
    *(int64_t *)(v2 + 8) = v2 + 24;
    return function_caf2a(a1, a2, (int32_t)a3, a4, a5, a6, 0x2d85a6);
}
