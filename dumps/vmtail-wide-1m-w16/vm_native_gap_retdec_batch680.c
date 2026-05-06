/*
 * Targeted RetDec C for native executable gap queue batch 680.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x202634-0x202834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x202834-0x202a34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x202a34-0x202c34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x202c34-0x202d34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x202e34-0x203034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c7679-0x3c7879 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c7879-0x3c7a79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c7b79-0x3c7c79 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g4;
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

int64_t function_20262f();
int64_t function_202634(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20266b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_202692(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_202701(int64_t a1);
int64_t function_20270f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_202917(void);
int64_t function_2029c8(void);
int64_t function_2029f2(void);
int64_t function_2029f5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_202b60(int64_t a1);
int64_t function_202b74(void);
int64_t function_202bf9(int64_t a1);
int64_t function_202c22(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_202c3f(void);
int64_t function_202c40(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_202c66(int64_t a1);
int64_t function_202cae(void);
int64_t function_202cd2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_202cd7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_202d13(int64_t a1);
int64_t function_202d24(void);
int64_t function_202dff();
int64_t function_202e34(int64_t a1, int64_t a2, int64_t a3);
int64_t function_202e3d(void);
int64_t function_202e60(void);
int64_t function_202ea8(int64_t a1);
int64_t function_202f2f(void);
int64_t function_202f8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_203011(void);
int64_t function_3c7679(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c76a1(int64_t a1);
int64_t function_3c7721(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c7864(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c7875(void);
int64_t function_3c788c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c78c9(void);
int64_t function_3c78e9(int64_t a1, int64_t a2);
int64_t function_3c78eb(void);
int64_t function_3c78ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c78f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_3c78f7(void);
int64_t function_3c7965(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c7985(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c7998(void);
int64_t function_3c799e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c79b3(void);
int64_t function_3c79ce(int64_t a1);
int64_t function_3c79d6(void);
int64_t function_3c7a2c(void);
int64_t function_3c7a3a(int64_t a1);
int64_t function_3c7a3e(void);
int64_t function_3c7b47();
int64_t function_3c7b79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c7bea(void);
int64_t function_3c7c22(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c7c67(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4db741b();
int64_t function_54c378a9();
int64_t function_ffffffffb43e242d();
int64_t function_ffffffffe8a16355();
int64_t function_fffffffff8221474();
int64_t function_fffffffff83277f9();
int64_t unknown_1433478c();
int64_t unknown_1f196015();
int64_t unknown_3d221048();
int64_t unknown_6e2ac681();
int64_t unknown_ffffffff8141d98b();
int64_t unknown_ffffffff84b76d89();
int64_t unknown_ffffffff91b1f66d();
int64_t unknown_ffffffffb23ad958();
int64_t unknown_ffffffffc02e7011();
int64_t unknown_ffffffffc32a8f26();
int64_t unknown_ffffffffdc4e076c();
int64_t unknown_ffffffffe864e03c();

// Address range: 0x202634 - 0x20266a
int64_t function_202634(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int32_t * v2 = (int32_t *)(a3 + a1); // 0x20263f
    *v2 = *v2 - 24;
    int32_t v3 = a4; // 0x202643
    int32_t v4 = a2; // 0x202643
    int32_t v5 = v3 + v4; // 0x202643
    int64_t v6; // 0x202634
    int64_t v7 = v6 & -256 | (int64_t)(*(char *)-0x5230d26fe174b00 + 25); // 0x202645
    if (v5 < 0 == ((v5 ^ v3) & (v5 ^ v4)) < 0 == (v5 != 0)) {
        v7 = function_20262f();
    }
    // 0x202647
    __asm_out(86, (int32_t)v7 + 0x6894a81d);
    int32_t * v8 = (int32_t *)(v1 - 0x7f5d5a56); // 0x202650
    *v8 = *v8 + (int32_t)v6;
    int64_t v9 = v7 + 0xd69690ce; // 0x202656
    char * v10 = (char *)(v6 + 40); // 0x20265c
    unsigned char v11 = *v10; // 0x20265c
    *v10 = v11 / 128 | 2 * v11;
    *(int32_t *)v1 = *(int32_t *)&v1 + v4;
    return (2 * v9 & 254 | v9 & 0xffffff00) + 0xe8c4048a & 0xfffffffe;
}

// Address range: 0x20266b - 0x202692
int64_t function_20266b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 99); // 0x202670
    *v1 = *v1 - (int32_t)a2;
    unsigned char v2 = (char)a4 % 32; // 0x202673
    if (v2 != 0) {
        char * v3 = (char *)(a2 + 0x640f74e0); // 0x202673
        *v3 = *v3 << v2;
    }
    __asm_wait();
    unknown_1433478c(unknown_6e2ac681() & 0xffffffff);
    int64_t v4; // 0x20266b
    return v4 & 0xffffffff;
}

// Address range: 0x202692 - 0x20269c
int64_t function_202692(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x202692
    int64_t result; // 0x202692
    char * v1 = (char *)(result + 0x6201e800); // 0x202692
    *v1 = *v1 + (char)result;
    int32_t * v2 = (int32_t *)(result + 1); // 0x202698
    *v2 = *v2 + (int32_t)a4;
    return result;
}

// Address range: 0x202701 - 0x202706
int64_t function_202701(int64_t a1) {
    // 0x202701
    int64_t result; // 0x202701
    return result;
}

// Address range: 0x20270f - 0x20284d
int64_t function_20270f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    unknown_1f196015();
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    __asm_in(-29);
    int32_t * v2 = (int32_t *)(8 * a2 + a4); // 0x202717
    uint32_t v3 = *v2; // 0x202717
    int64_t v4; // 0x20270f
    uint32_t v5 = (int32_t)v4; // 0x202717
    *v2 = v3 - v5;
    char v6 = *(char *)(a2 + 0x383224fa); // 0x20271a
    int64_t v7 = unknown_ffffffffc32a8f26(); // 0x202720
    __asm_out(-9, (int32_t)v7);
    *(char *)-0x6fddf030 = -*(char *)-0x6fddf030;
    int32_t v8 = *(int32_t *)v7; // 0x202732
    uint32_t v9 = (int32_t)(256 * (int64_t)(v6 + (char)(a4 / 256) + (char)(v3 < v5)) | a4 & 0xffff00ff) + (int32_t)v4 + v8; // 0x202732
    if (v9 >= 1) {
        // 0x202745
        return __asm_in_134(83);
    }
    // 0x2027c3
    int64_t v10; // 0x20270f
    uint32_t v11 = *(int32_t *)&v10; // 0x20272a
    uint32_t v12 = v9 & -256 | 116;
    int16_t v13 = v7; // 0x202736
    int16_t v14 = (int16_t)*(char *)(v10 - 0x4733d277); // 0x202736
    char * v15 = (char *)(a1 - 62); // 0x2027c4
    *v15 = *v15 - 104;
    int32_t * v16 = (int32_t *)(v7 & -0x10000 | (int64_t)(v13 / v14 % 256) | (int64_t)(256 * (v13 % v14))); // 0x2027c8
    *v16 = *v16 | v12;
    *(int32_t *)v1 = *(int32_t *)&v1 & v11;
    int64_t v17 = (int64_t)*(int32_t *)((int64_t)v12 - 83); // 0x2027d2
    int64_t v18 = -0x1eff978b * v17; // 0x2027d2
    int32_t v19 = *(int32_t *)&v10; // 0x2027d9
    *(int32_t *)(int64_t)v11 = v19 - 0x3ff9dfa3 + (int32_t)(v18 != -0x1eff978b00000000 * v17 >> 32);
    char * v20 = (char *)(v4 - 100);
    uint32_t v21 = __asm_in_134(61); // 0x2027e4
    int32_t * v22 = (int32_t *)v1; // 0x2027e6
    *v22 = *v22 + (int32_t)v18;
    *v20 = *v20 | (char)(v21 / 256);
    __asm_int(-128);
    int32_t v23 = __asm_in_134(-44); // 0x2027f3
    int64_t v24 = v1 + a1; // 0x2027fb
    int64_t v25 = v24 & 0xffffffff; // 0x2027fb
    int32_t v26 = v23 + 0x19d0083; // 0x2027ff
    int64_t result = unknown_ffffffffc02e7011((int32_t)v24); // 0x202804
    while (v26 < 0 == (v26 & (v23 ^ -0x80000000)) < 0 == (v26 != 0)) {
        uint32_t v27 = *(int32_t *)v1; // 0x20282f
        uint32_t v28 = *(int32_t *)v25; // 0x20282f
        int64_t v29 = v25 - 4; // 0x20282f
        int64_t v30 = v1 - 4; // 0x20282f
        v1 = v30;
        if (v27 >= v28) {
            if (v27 <= v28) {
                // 0x202836
                return result;
            }
            uint32_t v31 = *(int32_t *)0xd600b6ad; // 0x20283e
            int64_t result2 = unknown_3d221048((int32_t)(v29 ^ v18), v30, (result & 0xffffffff | -0x29ff495300000000) % (int64_t)v31 & 0xffffffff); // 0x202842
            int32_t * v32 = (int32_t *)(v10 - 0x43fcad06); // 0x202847
            *v32 = *v32 + (int32_t)v30;
            return result2;
        }
        v21 = __asm_in_134(61);
        v22 = (int32_t *)v30;
        *v22 = *v22 + (int32_t)v18;
        *v20 = *v20 | (char)(v21 / 256);
        __asm_int(-128);
        v23 = __asm_in_134(-44);
        v24 = v1 + v29;
        v25 = v24 & 0xffffffff;
        v26 = v23 + 0x19d0083;
        result = unknown_ffffffffc02e7011((int32_t)v24);
    }
    int64_t result3 = __asm_sti(); // 0x20280c
    *(char *)v25 = (char)result3;
    return result3;
}

// Address range: 0x202917 - 0x20291a
int64_t function_202917(void) {
    // 0x202917
    int64_t result; // 0x202917
    return result;
}

// Address range: 0x2029c8 - 0x2029c9
int64_t function_2029c8(void) {
    // 0x2029c8
    int64_t result; // 0x2029c8
    return result;
}

// Address range: 0x2029f2 - 0x2029f3
int64_t function_2029f2(void) {
    // 0x2029f2
    int64_t result; // 0x2029f2
    return result;
}

// Address range: 0x2029f5 - 0x202aa1
int64_t function_2029f5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x2029f5
    int64_t v3 = v2 & -256; // 0x2029f5
    bool v4; // 0x2029f5
    int64_t * v5 = (int64_t *)((((v2 + a4 / 256 + (int64_t)v4) % 256 | v3) + v2 & 0xffffffff) + 8); // 0x2029fc
    int64_t v6 = *v5; // 0x2029fc
    char * v7 = (char *)(v6 + 0x56b82d44); // 0x202a12
    int32_t v8 = a2;
    int64_t v9 = (v3 | 30) - v2 & 0xffffffff; // 0x2029fd
    char * v10 = (char *)(v2 + 0x35030002); // 0x2029fd
    *v5 = 0x1dd2d803;
    char v11 = *v7; // 0x202a12
    *v7 = v11 + (char)((int32_t)v9 < 0x5ff42a01) + (char)(v1 / 256);
    int16_t v12 = 256 * (int16_t)v9 >> 8; // 0x202a1d
    uint16_t v13 = v12 * v12; // 0x202a1d
    v9 = v9 & -0x10000 | (int64_t)v13;
    uint32_t v14 = *(int32_t *)0x58b13ab2; // 0x202a1f
    uint32_t v15 = v14 + v8; // 0x202a1f
    *(int32_t *)0x58b13ab2 = v15;
    *(char *)v9 = 96;
    int64_t result2; // 0x2029f5
    while (v15 != 0) {
        // 0x202a64
        if (v1 != 0) {
            // 0x202a66
            unknown_ffffffffdc4e076c();
            __asm_in_136((int16_t)v6);
            return __asm_sti();
        }
        // 0x202a71
        int64_t v16; // 0x2029f5
        int64_t v17 = 256 * (int64_t)*v10 | v16 & -0xff01; // 0x202a06
        v16 = v17;
        v10 = (char *)0x8db43b0e;
        if (v15 < v14) {
            // 0x202a73
            *v5 = v17;
            int32_t v18 = v9; // 0x202a74
            *(int32_t *)0x1dd2d803 = v18;
            int32_t v19 = *(char *)(v6 + 0xd8a5b42) > (char)(v13 / 256) ? 0x5eca12d : 0x5eca12c; // 0x202a7b
            int32_t v20 = v18 - v19; // 0x202a7b
            int64_t result = v20; // 0x202a7b
            *(char *)-0x3883fec2ff7a8108 = (char)v20;
            result2 = result;
            if (v20 < 0) {
                int32_t * v21 = (int32_t *)(a2 + 59); // 0x202a9e
                *v21 = *v21 + 0x58b13b0c;
                return result;
            }
            return result2;
        }
        *v5 = 0x1dd2d803;
        v11 = *v7;
        *v7 = v11 + (char)((int32_t)v9 < 0x5ff42a01) + (char)(v1 / 256);
        v12 = 256 * (int16_t)v9 >> 8;
        v13 = v12 * v12;
        v9 = v9 & -0x10000 | (int64_t)v13;
        v14 = *(int32_t *)0x58b13ab2;
        v15 = v14 + v8;
        *(int32_t *)0x58b13ab2 = v15;
        *(char *)v9 = 96;
    }
    int32_t * v22 = (int32_t *)(v9 + 41); // 0x202a27
    uint32_t v23 = *v22; // 0x202a27
    uint32_t v24 = v23 + v8; // 0x202a27
    *v22 = v24;
    unsigned char v25 = (char)v1 % 32; // 0x202a2a
    result2 = v9;
    if (v25 != 0) {
        unsigned char v26 = *(char *)&v1; // 0x202a2a
        *(char *)v1 = (char)(v24 < v23) << 8 - v25 | v26 >> v25 | (char)((int16_t)v26 << (int16_t)(9 - v25));
        result2 = v9;
    }
  lab_0x202a8b:
    // 0x202a8b
    return result2;
}

// Address range: 0x202b60 - 0x202b63
int64_t function_202b60(int64_t a1) {
    // 0x202b60
    int64_t result; // 0x202b60
    return result;
}

// Address range: 0x202b74 - 0x202b77
int64_t function_202b74(void) {
    // 0x202b74
    int64_t result; // 0x202b74
    return result;
}

// Address range: 0x202bf9 - 0x202bfb
int64_t function_202bf9(int64_t a1) {
    // 0x202bf9
    int64_t result; // 0x202bf9
    return result;
}

// Address range: 0x202c22 - 0x202c3e
int64_t function_202c22(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x202c22
    __asm_int(-24);
    *(char *)a1 = (char)a2;
    bool v1; // 0x202c22
    int32_t * v2 = (int32_t *)((v1 ? -1 : 1) + a2); // 0x202c2c
    uint32_t v3 = *v2; // 0x202c2c
    int64_t v4; // 0x202c22
    uint32_t v5 = (char)v4 < (char)v4 ? -38 : -39; // 0x202c2c
    int32_t v6 = v3 - v5; // 0x202c2c
    *v2 = v6;
    int32_t v7 = v6; // 0x202c2f
    int64_t result; // 0x202c22
    if ((char)v4 < (char)v4 || v3 < v5) {
        int64_t v8 = function_fffffffff8221474(); // 0x202c2f
        v7 = *v2;
        result = v8;
    }
    // 0x202c35
    *v2 = v7 + (int32_t)v4;
    return result;
}

// Address range: 0x202c3f - 0x202c40
int64_t function_202c3f(void) {
    // 0x202c3f
    int64_t result; // 0x202c3f
    return result;
}

// Address range: 0x202c40 - 0x202c48
int64_t function_202c40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x3a1f63f5); // 0x202c40
    *v1 = *v1 + (int32_t)a1;
    return function_202c3f();
}

// Address range: 0x202c66 - 0x202c67
int64_t function_202c66(int64_t a1) {
    // 0x202c66
    int64_t result; // 0x202c66
    return result;
}

// Address range: 0x202cae - 0x202cbc
int64_t function_202cae(void) {
    char v1 = *(char *)-0x198ad4b; // 0x202cae
    int64_t result; // 0x202cae
    *(char *)-0x198ad4b = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x202cd2 - 0x202cd6
int64_t function_202cd2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x202cd2
    int64_t result; // 0x202cd2
    return result;
}

// Address range: 0x202cd7 - 0x202cf3
int64_t function_202cd7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x202cd7
    int64_t v1; // 0x202cd7
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x202cd7
    char * v4 = (char *)(v3 - 0x427ffff2); // 0x202ce7
    *v4 = *v4 + (char)v1;
    *(char *)v3 = *(char *)&v3 + (char)(a4 / 256);
    int64_t v5; // 0x202cd7
    return (int64_t)&v5;
}

// Address range: 0x202d13 - 0x202d14
int64_t function_202d13(int64_t a1) {
    // 0x202d13
    int64_t result; // 0x202d13
    return result;
}

// Address range: 0x202d24 - 0x202d2a
int64_t function_202d24(void) {
    // 0x202d24
    return function_4db741b();
}

// Address range: 0x202e34 - 0x202e3c
int64_t function_202e34(int64_t a1, int64_t a2, int64_t a3) {
    // 0x202e34
    bool v1; // 0x202e34
    return unknown_ffffffffe864e03c(a1, a2, a3) & -0xff01 | 256 * (64 * (int64_t)v1 | 128 * (int64_t)(bool)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1) | 512;
}

// Address range: 0x202e3d - 0x202e3f
int64_t function_202e3d(void) {
    // 0x202e3d
    return function_202dff();
}

// Address range: 0x202e60 - 0x202e65
int64_t function_202e60(void) {
    // 0x202e60
    return function_ffffffffe8a16355();
}

// Address range: 0x202ea8 - 0x202eab
int64_t function_202ea8(int64_t a1) {
    // 0x202ea8
    int64_t result; // 0x202ea8
    return result;
}

// Address range: 0x202f2f - 0x202f34
int64_t function_202f2f(void) {
    // 0x202f2f
    return function_ffffffffb43e242d();
}

// Address range: 0x202f8e - 0x202fb4
int64_t function_202f8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x202f8e
    int64_t v1; // 0x202f8e
    int32_t * v2 = (int32_t *)(v1 + 0x3d00f6cd); // 0x202f96
    int32_t v3 = v1; // 0x202f96
    *v2 = *v2 + v3;
    int32_t * v4 = (int32_t *)(a1 - 65); // 0x202f9c
    *v4 = *v4 + v3;
    return __asm_wait();
}

// Address range: 0x203011 - 0x203017
int64_t function_203011(void) {
    // 0x203011
    int64_t result; // 0x203011
    return result;
}

// Address range: 0x3c7679 - 0x3c76a0
int64_t function_3c7679(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c7679
    return (int64_t)*(int32_t *)0x323edf013d0091bc;
}

// Address range: 0x3c76a1 - 0x3c76a7
int64_t function_3c76a1(int64_t a1) {
    // 0x3c76a1
    bool v1; // 0x3c76a1
    return function_54c378a9((v1 ? -4 : 4) + a1);
}

// Address range: 0x3c7721 - 0x3c7724
int64_t function_3c7721(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c7721
    int64_t result; // 0x3c7721
    return result;
}

// Address range: 0x3c7864 - 0x3c786a
int64_t function_3c7864(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c7864
    int64_t result; // 0x3c7864
    return result;
}

// Address range: 0x3c7875 - 0x3c7876
int64_t function_3c7875(void) {
    // 0x3c7875
    int64_t result; // 0x3c7875
    return result;
}

// Address range: 0x3c788c - 0x3c788f
int64_t function_3c788c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c788c
    int64_t result; // 0x3c788c
    return result;
}

// Address range: 0x3c78c9 - 0x3c78cc
int64_t function_3c78c9(void) {
    // 0x3c78c9
    int64_t v1; // 0x3c78c9
    int64_t result = v1;
    *(int32_t *)result = (int32_t)(result | v1);
    return result;
}

// Address range: 0x3c78e9 - 0x3c78eb
int64_t function_3c78e9(int64_t a1, int64_t a2) {
    // 0x3c78e9
    int64_t result; // 0x3c78e9
    return result;
}

// Address range: 0x3c78eb - 0x3c78ed
int64_t function_3c78eb(void) {
    // 0x3c78eb
    int64_t v1; // 0x3c78eb
    return function_3c78f0(v1, v1, v1, v1, (int64_t)&g4);
}

// Address range: 0x3c78ee - 0x3c78f0
int64_t function_3c78ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c78ee
    int64_t result; // 0x3c78ee
    return result;
}

// Address range: 0x3c78f0 - 0x3c78f6
int64_t function_3c78f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x3c78f0
    bool v1; // 0x3c78f0
    if (a4 != 1 == v1) {
        function_3c7875();
    }
    // 0x3c78f3
    return result;
}

// Address range: 0x3c78f7 - 0x3c78fa
int64_t function_3c78f7(void) {
    // 0x3c78f7
    int64_t result; // 0x3c78f7
    return result;
}

// Address range: 0x3c7965 - 0x3c7985
int64_t function_3c7965(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)unknown_ffffffff91b1f66d() | (char)&g3; // 0x3c7970
    int64_t v2; // 0x3c7965
    char * v3 = (char *)(v2 + 0x1e8393c); // 0x3c7972
    *v3 = *v3 - v1 + (char)(v1 < 8);
    int64_t v4 = __asm_int1(); // 0x3c797b
    uint32_t v5 = (int32_t)(v2 + a4) % 32; // 0x3c7981
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)v4; // 0x3c7981
        uint32_t v7 = *v6; // 0x3c7981
        *v6 = v7 >> 32 - v5 | v7 << v5;
    }
    return v2 & 0xffffffff;
}

// Address range: 0x3c7985 - 0x3c7998
int64_t function_3c7985(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffff8141d98b(); // 0x3c7985
    char * v1 = (char *)(a2 - 0x17531780); // 0x3c798f
    int64_t v2; // 0x3c7985
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    int64_t v3; // 0x3c7985
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a4;
    return result;
}

// Address range: 0x3c7998 - 0x3c799d
int64_t function_3c7998(void) {
    // 0x3c7998
    int64_t result; // 0x3c7998
    return result;
}

// Address range: 0x3c799e - 0x3c79a4
int64_t function_3c799e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c799e
    int64_t result; // 0x3c799e
    __asm_out(58, (int32_t)result);
    return result;
}

// Address range: 0x3c79b3 - 0x3c79b8
int64_t function_3c79b3(void) {
    // 0x3c79b3
    return function_fffffffff83277f9();
}

// Address range: 0x3c79ce - 0x3c79d5
int64_t function_3c79ce(int64_t a1) {
    // 0x3c79ce
    int64_t result; // 0x3c79ce
    *(int32_t *)0x12bf17ac = *(int32_t *)0x12bf17ac + (int32_t)result;
    return result;
}

// Address range: 0x3c79d6 - 0x3c79d7
int64_t function_3c79d6(void) {
    // 0x3c79d6
    int64_t result; // 0x3c79d6
    return result;
}

// Address range: 0x3c7a2c - 0x3c7a2d
int64_t function_3c7a2c(void) {
    // 0x3c7a2c
    int64_t result; // 0x3c7a2c
    return result;
}

// Address range: 0x3c7a3a - 0x3c7a3d
int64_t function_3c7a3a(int64_t a1) {
    // 0x3c7a3a
    int64_t result; // 0x3c7a3a
    return result;
}

// Address range: 0x3c7a3e - 0x3c7a44
int64_t function_3c7a3e(void) {
    // 0x3c7a3e
    int64_t result; // 0x3c7a3e
    bool v1; // 0x3c7a3e
    if (v1) {
        result = function_3c79d6();
    }
    // 0x3c7a7e
    return result;
    // 0x3c7a42
    return function_3c7a2c();
}

// Address range: 0x3c7b79 - 0x3c7bb3
int64_t function_3c7b79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    bool v3; // 0x3c7b79
    if (!v3) {
        function_3c7b47();
    }
    int64_t v4 = unknown_ffffffff84b76d89(); // 0x3c7b83
    uint32_t v5 = (int32_t)a4 % 32; // 0x3c7b88
    if (v5 != 0) {
        *(int32_t *)-0x17c19c71 = *(int32_t *)-0x17c19c71 >> v5;
    }
    int32_t * v6 = (int32_t *)v4; // 0x3c7b8e
    uint32_t v7 = *v6; // 0x3c7b8e
    int64_t v8; // 0x3c7b79
    int32_t v9 = v8; // 0x3c7b8e
    uint32_t v10 = v7 + v9; // 0x3c7b8e
    *v6 = v10;
    int64_t v11 = 2 * v4 & 254 | (int64_t)(v10 < v7); // 0x3c7b90
    *(char *)v2 = *(char *)&v2 - (char)v11;
    int32_t v12 = *(int32_t *)(4 * v2 + v8) & (int32_t)(v11 | v4 & 0xffffff00); // 0x3c7b9d
    *(int32_t *)v1 = *(int32_t *)&v1 + v9;
    __asm_out_133(-59, (char)v12 + 98);
    return v12 - 0x3cfffe9e;
}

// Address range: 0x3c7bea - 0x3c7beb
int64_t function_3c7bea(void) {
    // 0x3c7bea
    int64_t result; // 0x3c7bea
    return result;
}

// Address range: 0x3c7c22 - 0x3c7c44
int64_t function_3c7c22(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 0x13d0003); // 0x3c7c22
    int64_t v2; // 0x3c7c22
    *v1 = *v1 + (char)v2;
    int64_t result = unknown_ffffffffb23ad958(); // 0x3c7c28
    char * v3 = (char *)(a4 - 7); // 0x3c7c31
    *v3 = *v3 + 118;
    int32_t * v4 = (int32_t *)(v2 + (int64_t)&g2); // 0x3c7c36
    *v4 = *v4 >> 29;
    *(int32_t *)-54 = *(int32_t *)-54 + (int32_t)a2;
    return result;
}

// Address range: 0x3c7c67 - 0x3c7c6a
int64_t function_3c7c67(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c7c67
    int64_t v1; // 0x3c7c67
    __asm_outsb((int16_t)a3, (char)v1);
    return v1 & 0xffffffff;
}
