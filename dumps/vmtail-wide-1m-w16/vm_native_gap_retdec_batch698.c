/*
 * Targeted RetDec C for native executable gap queue batch 698.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2386b6-0x2388b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2388b6-0x238ab6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x238ab6-0x238cb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x238cb6-0x238eb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2970c9-0x2972c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2972c9-0x2974c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2974c9-0x2976c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2976c9-0x2978c9 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g5;
extern int g6;
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

int64_t function_23637bf4();
int64_t function_238640();
int64_t function_2386b6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2386bd(int64_t a1, int64_t a2);
int64_t function_238761(int64_t a1);
int64_t function_23879f(int64_t a1);
int64_t function_2387c2(int64_t a1);
int64_t function_23883e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_238887(void);
int64_t function_238894(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2388d8(void);
int64_t function_2388eb(void);
int64_t function_2388f1(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_238915(int64_t a1, int64_t a2, int64_t a3);
int64_t function_238957(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_238a00(void);
int64_t function_238a05(void);
int64_t function_238a75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_238adc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_238b5f(void);
int64_t function_238bac(void);
int64_t function_238bdd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_238c0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_238c8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_238cb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_238d19(int64_t a1);
int64_t function_238d6c(void);
int64_t function_238d8c(void);
int64_t function_238d8e(void);
int64_t function_238dbb(void);
int64_t function_238ddb(int64_t a1);
int64_t function_238e28(void);
int64_t function_238e49(void);
int64_t function_238e58(void);
int64_t function_2970c9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2970e7(void);
int64_t function_29710f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2971f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_297233(void);
int64_t function_297235(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_297246(void);
int64_t function_29725c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29727e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_29729b(void);
int64_t function_2972bc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2972d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_297317(void);
int64_t function_297324(void);
int64_t function_297325(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2973a7(void);
int64_t function_2973bd(int64_t a1);
int64_t function_297445(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_29745c(void);
int64_t function_29746d(void);
int64_t function_29747a(void);
int64_t function_2974ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2974dd(void);
int64_t function_2974f1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_29750b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_297512(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29754c(void);
int64_t function_297613(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29768e(int64_t a1);
int64_t function_2976b0(int64_t a1);
int64_t function_2976c9(void);
int64_t function_297740(int64_t a1);
int64_t function_297825(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_297868(void);
int64_t function_29786e(void);
int64_t function_297872(void);
int64_t function_297875(void);
int64_t function_297895(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2978b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d32fc6d();
int64_t function_6817489();
int64_t function_7a2571b6();
int64_t function_ffffffff93f30161();
int64_t function_ffffffffc4b803f6();
int64_t function_ffffffffd3139455();
int64_t function_ffffffffe7c78e2e();
int64_t unknown_16088b5();
int64_t unknown_23a3be16();
int64_t unknown_2c695784();
int64_t unknown_30c88fe();
int64_t unknown_6e1f0bdd();
int64_t unknown_71c18346();
int64_t unknown_7c5d195();
int64_t unknown_ffffffff8a781239();
int64_t unknown_ffffffffa09d1530();
int64_t unknown_ffffffffb228e76e();
int64_t unknown_ffffffffb2b4bf6b();
int64_t unknown_ffffffffbf257400();
int64_t unknown_ffffffffc701bea9();
int64_t unknown_ffffffffe22e2960();
int64_t unknown_fffffffff0864c58();
int64_t unknown_fffffffffd056a3a();

// Address range: 0x2386b6 - 0x2386bb
int64_t function_2386b6(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 - 24); // 0x2386b6
    int64_t result; // 0x2386b6
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x2386bd - 0x2386c0
int64_t function_2386bd(int64_t a1, int64_t a2) {
    // 0x2386bd
    return function_238640();
}

// Address range: 0x238761 - 0x238777
int64_t function_238761(int64_t a1) {
    int64_t result = unknown_ffffffffb228e76e(); // 0x238768
    int64_t v1; // 0x238761
    char * v2 = (char *)(v1 - 0x7a72f65d); // 0x23876d
    *v2 = *v2 - 110;
    return result;
}

// Address range: 0x23879f - 0x2387a2
int64_t function_23879f(int64_t a1) {
    // 0x23879f
    int64_t result; // 0x23879f
    return result;
}

// Address range: 0x2387c2 - 0x2387c4
int64_t function_2387c2(int64_t a1) {
    // 0x2387c2
    int64_t result; // 0x2387c2
    return result;
}

// Address range: 0x23883e - 0x23885f
int64_t function_23883e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_fffffffff0864c58(); // 0x238852
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x238887 - 0x23888c
int64_t function_238887(void) {
    // 0x238887
    return function_ffffffffe7c78e2e();
}

// Address range: 0x238894 - 0x2388c0
int64_t function_238894(int64_t a1, int64_t a2, int64_t a3) {
    // 0x238894
    int64_t v1; // 0x238894
    char v2 = (uint64_t)v1 / 256; // 0x238899
    *(char *)0x60bdb7a0 = *(char *)0x60bdb7a0 + v2;
    char * v3 = (char *)(a2 - 0x589646d6 + 8 * a3); // 0x23889f
    *v3 = *v3 | v2;
    __asm_iretd();
    uint64_t v4 = unknown_16088b5(); // 0x2388af
    char * v5 = (char *)(a3 + 0x55cdfc90); // 0x2388b4
    *v5 = *v5 & (char)(v4 / 256);
    return v4 & -0xff01 | (int64_t)&g5;
}

// Address range: 0x2388d8 - 0x2388dd
int64_t function_2388d8(void) {
    // 0x2388d8
    return function_ffffffff93f30161();
}

// Address range: 0x2388eb - 0x2388f0
int64_t function_2388eb(void) {
    // 0x2388eb
    return function_ffffffffc4b803f6();
}

// Address range: 0x2388f1 - 0x238915
int64_t function_2388f1(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x2388f1
    int64_t v1; // 0x2388f1
    uint64_t v2 = v1;
    bool v3; // 0x2388f1
    if (!v3) {
        int64_t result = (v2 + 122 + (int64_t)v3) % 256 | v2 & -256; // 0x2388f5
        char v4 = a3 / 256; // 0x2388f7
        char v5 = v2 / 256; // 0x2388f7
        unsigned char v6 = v5 + v4; // 0x2388f7
        if (((v6 ^ v4) & (v6 ^ v5)) >= 0) {
            // 0x238938
            return result;
        }
        int32_t * v7 = (int32_t *)(result + 0x39eaab90); // 0x2388fb
        *v7 = *v7 + (int32_t)v1;
        __asm_in((int16_t)(256 * (int64_t)v6 | a3 % 256));
    }
    while (true) {
        // continue -> 0x238905
    }
}

// Address range: 0x238915 - 0x238938
int64_t function_238915(int64_t a1, int64_t a2, int64_t a3) {
    // 0x238915
    int64_t v1; // 0x238915
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x238915
    *(int32_t *)a2 = *(int32_t *)&v2 | -75;
    int32_t * v3 = (int32_t *)(v1 - 0x6dfec300 + v1); // 0x238922
    *v3 = *v3 ^ 0x1c08b68c;
    float80_t v4; // 0x238915
    *(int64_t *)0x75a64e2f = (int64_t)v4;
    bool v5; // 0x238915
    return unknown_ffffffff8a781239((v5 ? -4 : 4) + a1, 0xcf9a9f0a, a3 & -0xff01 | 0xf700);
}

// Address range: 0x238957 - 0x2389d2
int64_t function_238957(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffe22e2960(); // 0x23895a
    bool v3; // 0x238957
    if (v3) {
        int32_t * v4 = (int32_t *)(a4 + 57); // 0x2389c9
        *v4 = *v4 + (int32_t)a2;
        uint32_t v5 = *(int32_t *)&v1; // 0x2389ce
        __asm_outsd((int16_t)a3, v5);
        return (v2 & 0xffffff00 | (int64_t)(v5 % 256)) ^ 0x7dc80500;
    }
    uint32_t v6 = (int32_t)a4 % 32; // 0x238961
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)v2; // 0x238961
        uint32_t v8 = *v7; // 0x238961
        *v7 = v8 >> 32 - v6 | v8 << v6;
    }
    return function_7a2571b6();
}

// Address range: 0x238a00 - 0x238a01
int64_t function_238a00(void) {
    // 0x238a00
    int64_t result; // 0x238a00
    return result;
}

// Address range: 0x238a05 - 0x238a08
int64_t function_238a05(void) {
    // 0x238a05
    int64_t result; // 0x238a05
    return result;
}

// Address range: 0x238a75 - 0x238a9a
int64_t function_238a75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x238a75
    int64_t v1; // 0x238a75
    bool v2; // 0x238a75
    if (v2) {
        int64_t result = unknown_7c5d195(); // 0x238a8f
        int32_t * v3 = (int32_t *)(a4 - 0x3fb3443b); // 0x238a94
        *v3 = *v3 + (int32_t)v1;
        return result;
    }
    // 0x238a77
    *(char *)a3 = (char)a3 - (char)v1;
    return __asm_in_133((int16_t)a3);
}

// Address range: 0x238adc - 0x238b5b
int64_t function_238adc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x238adc
    *(int32_t *)-0x17b2c00d = *(int32_t *)-0x17b2c00d + (int32_t)a1;
    int64_t v1; // 0x238adc
    int32_t * v2 = (int32_t *)(v1 + 61); // 0x238af2
    *v2 = *v2 + (int32_t)v1;
    int64_t v3 = __asm_hlt(a1); // 0x238af7
    unsigned char v4 = *(char *)-0x3a1ce0e; // 0x238af8
    *(char *)-0x3a1ce0e = v4 + 86;
    int32_t v5 = v3; // 0x238aff
    int32_t v6 = v4 > 169; // 0x238aff
    int32_t v7 = v5 - 0x161a2e64 + v6; // 0x238aff
    int32_t v8 = v7 + v6; // 0x238aff
    if (((v8 ^ v5) & (v8 ^ -0x80000000)) >= 0) {
        // 0x238b58
        return __asm_in_133((int16_t)a3);
    }
    uint32_t v9 = v7 | -0x17fe1763;
    int64_t result = v9;
    int32_t * v10 = (int32_t *)result; // 0x238b08
    *v10 = *v10 + v9;
    return result;
}

// Address range: 0x238b5f - 0x238b6d
int64_t function_238b5f(void) {
    // 0x238b5f
    int64_t v1; // 0x238b5f
    __asm_out_134(-67, (char)v1);
    return function_3d32fc6d();
}

// Address range: 0x238bac - 0x238bad
int64_t function_238bac(void) {
    // 0x238bac
    int64_t result; // 0x238bac
    return result;
}

// Address range: 0x238bdd - 0x238c0a
int64_t function_238bdd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x238bdd
    int64_t v1; // 0x238bdd
    bool v2; // 0x238bdd
    uint32_t v3 = 2 * (int32_t)v1 | (int32_t)v2; // 0x238bdd
    *(int32_t *)0x1fc18be7 = *(int32_t *)0x1fc18be7 - (int32_t)a1;
    int32_t * v4 = (int32_t *)((int64_t)v3 - 98); // 0x238bee
    *v4 = *v4 + (int32_t)v1;
    int64_t result = unknown_ffffffffbf257400(); // 0x238c04
    if (v3 == -0xa8527e7) {
        result = function_238bac();
    }
    // 0x238c06
    int64_t v5; // 0x238bdd
    __asm_outsd((int16_t)a3, *(int32_t *)&v5);
    return result;
}

// Address range: 0x238c0c - 0x238c81
int64_t function_238c0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x238c0c
    int64_t v1; // 0x238c0c
    uint64_t v2 = v1;
    int64_t v3 = 0x301199f0; // bp-8, 0x238c0c
    *(char *)0x7425745e = *(char *)0x7425745e - 28;
    int64_t v4 = __asm_wait(); // 0x238c18
    *(char *)(v2 + 0x441b05c0) = (char)v2;
    int64_t v5 = a4 - 256 * v4 & 0xff00 | a4 & -0xff01; // 0x238c20
    int32_t * v6 = (int32_t *)(v5 - 0x5f116e6d); // 0x238c22
    *v6 = *v6 + (int32_t)v4;
    int64_t v7 = unknown_ffffffffa09d1530(); // 0x238c2a
    char v8 = *(char *)(8 * a2 + (int64_t)&v3); // 0x238c2f
    int64_t v9 = 256 * (int64_t)(v8 | (char)(v2 / 256)) | v2 & -0xff01; // 0x238c2f
    int64_t v10; // 0x238c0c
    *(int32_t *)a1 = *(int32_t *)&v10 + (int32_t)v7;
    int32_t * v11 = (int32_t *)(v5 - 0x6276eb8b); // 0x238c36
    *v11 = *v11 + (int32_t)v9;
    unknown_71c18346();
    uint32_t v12 = *(int32_t *)-0x17c5ab18fa3ffa72; // 0x238c45
    int32_t * v13 = (int32_t *)v9; // 0x238c4e
    *v13 = *v13 + (int32_t)v1;
    char * v14 = (char *)(a2 - 0x4471d28b); // 0x238c50
    *v14 = *v14 | (char)(v12 / 256);
    unsigned char v15 = *(char *)-0x630e20fe17938715; // 0x238c5f
    int64_t v16 = (int64_t)v15 | (int64_t)(v12 & -256); // 0x238c5f
    *(char *)-0x4e66a37605fe1746 = v15;
    int32_t * v17 = (int32_t *)(v16 + 0x1e87205); // 0x238c73
    uint32_t v18 = *v17; // 0x238c73
    *v17 = v18 / 0x1000 | 0x100000 * v18;
    return v16 & 0xffff00ff | 0xe800;
}

// Address range: 0x238c8e - 0x238caf
int64_t function_238c8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x238c8e
    int64_t v1; // 0x238c8e
    int32_t * v2 = (int32_t *)(v1 - 0x2365ffdd); // 0x238c90
    *v2 = *v2 + (int32_t)a2;
    int32_t * v3 = (int32_t *)(a4 + 25); // 0x238c9b
    *v3 = (int32_t)v1 + 0x17b2f5c6 + *v3;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result = unknown_ffffffffc701bea9() & -256; // 0x238ca8
    char * v4 = (char *)result; // 0x238cab
    *v4 = *v4 + 72;
    return result;
}

// Address range: 0x238cb0 - 0x238cd7
int64_t function_238cb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x238cb0
    int64_t v1; // 0x238cb0
    int32_t * v2 = (int32_t *)(v1 + 0x78015b00); // 0x238cb2
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x238cb0
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a2;
    int64_t v4; // 0x238cb0
    return __asm_hlt((int64_t)(*(int32_t *)&v4 + (int32_t)a1));
}

// Address range: 0x238d19 - 0x238d1b
int64_t function_238d19(int64_t a1) {
    // 0x238d19
    int64_t result; // 0x238d19
    return result;
}

// Address range: 0x238d6c - 0x238d6d
int64_t function_238d6c(void) {
    // 0x238d6c
    int64_t result; // 0x238d6c
    return result;
}

// Address range: 0x238d8c - 0x238d8d
int64_t function_238d8c(void) {
    // 0x238d8c
    int64_t result; // 0x238d8c
    return result;
}

// Address range: 0x238d8e - 0x238d90
int64_t function_238d8e(void) {
    // 0x238d8e
    return function_238d6c();
}

// Address range: 0x238dbb - 0x238dbd
int64_t function_238dbb(void) {
    // 0x238dbb
    return function_238d8c();
}

// Address range: 0x238ddb - 0x238de0
int64_t function_238ddb(int64_t a1) {
    // 0x238ddb
    int64_t v1; // 0x238ddb
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x238e28 - 0x238e35
int64_t function_238e28(void) {
    // 0x238e28
    return function_ffffffffd3139455();
}

// Address range: 0x238e49 - 0x238e4c
int64_t function_238e49(void) {
    // 0x238e49
    int64_t result; // 0x238e49
    return result;
}

// Address range: 0x238e58 - 0x238e5d
int64_t function_238e58(void) {
    // 0x238e58
    int64_t result; // 0x238e58
    return result;
}

// Address range: 0x2970c9 - 0x2970cc
int64_t function_2970c9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2970c9
    int64_t result; // 0x2970c9
    return result;
}

// Address range: 0x2970e7 - 0x2970e8
int64_t function_2970e7(void) {
    // 0x2970e7
    int64_t result; // 0x2970e7
    return result;
}

// Address range: 0x29710f - 0x2971e3
int64_t function_29710f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = *(char *)-0x4cb38fff4c0684c6; // 0x29710f
    int64_t v2; // 0x29710f
    int64_t v3 = v2 & -256; // 0x29710f
    int64_t v4 = v3 | (int64_t)v1; // 0x29710f
    char * v5 = (char *)(a2 - 0x17fe17c3); // 0x297118
    *v5 = *v5 + (char)a4;
    *(int32_t *)-0x16e23cdb = *(int32_t *)-0x16e23cdb + (int32_t)a1;
    int32_t * v6 = (int32_t *)(a4 + 0x4dab1063); // 0x297124
    uint32_t v7 = *v6 + (int32_t)a2; // 0x297124
    *v6 = v7;
    *(int32_t *)a1 = (int32_t)v4;
    bool v8; // 0x29710f
    int64_t v9 = (v8 ? -4 : 4) + a1; // 0x29712a
    if (v7 >= 1) {
        uint64_t v10 = v4 + 89; // 0x29712d
        *(char *)v9 = (char)v10;
        return v10 % 256 | v3;
    }
    char * v11 = (char *)v9; // 0x297157
    char v12 = a3 / 256; // 0x297157
    *v11 = *v11 + v12;
    char v13 = *(char *)v4; // 0x297159
    char v14 = v2 / 256; // 0x29715b
    *(char *)0x8999362 = *(char *)0x8999362 + v14;
    int32_t v15 = (int32_t)(v2 & 0xffffff00 | (int64_t)(v13 + v1)) + (int32_t)a4; // 0x297161
    __asm_out_134(56, (char)v15);
    int64_t v16 = unknown_ffffffffb2b4bf6b(); // 0x297165
    if (v15 < 1) {
        int64_t v17 = v16 + v2; // 0x2971d4
        __asm_out_135((int16_t)a3, (char)v17);
        char * v18 = (char *)(v2 - 6); // 0x2971df
        *v18 = *v18 ^ 8;
        return v17 & 0xffffffff;
    }
    char * v19 = (char *)(v16 - 0x672a514b); // 0x29716c
    *v19 = *v19 + v12;
    int64_t result = v16 + 0xf6fc62cf & 0xffffffff; // 0x29717a
    char * v20 = (char *)(2 * result - 0x4cfea7fb); // 0x297182
    unsigned char v21 = *v20; // 0x297182
    unsigned char v22 = v21 + (char)a3; // 0x297182
    *v20 = v22;
    __writegsbyte(0x51df92, __readgsbyte(0x51df92) - v14 + (char)(v22 < v21));
    return result;
}

// Address range: 0x2971f5 - 0x29722e
int64_t function_2971f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2971f5
    int64_t v1; // 0x2971f5
    *(char *)0x3af80f13c4521312 = (char)v1;
    int32_t * v2 = (int32_t *)(v1 + 0x795a7a0a); // 0x297209
    bool v3; // 0x2971f5
    *v2 = (int32_t)v3 - (int32_t)a4 + *v2;
    uint64_t result = unknown_23a3be16(); // 0x297210
    *(int32_t *)0x7001e83ac0fa0580 = (int32_t)result;
    char * v4 = (char *)(result + 0x1e88800); // 0x297220
    *v4 = *v4 + (char)(result / 256);
    return result;
}

// Address range: 0x297233 - 0x297235
int64_t function_297233(void) {
    // 0x297233
    int64_t result; // 0x297233
    return result;
}

// Address range: 0x297235 - 0x297239
int64_t function_297235(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x297235
    return __asm_int1(a1, a2, a3, a4);
}

// Address range: 0x297246 - 0x297247
int64_t function_297246(void) {
    // 0x297246
    int64_t result; // 0x297246
    return result;
}

// Address range: 0x29725c - 0x297268
int64_t function_29725c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29725c
    int64_t result; // 0x29725c
    bool v1; // 0x29725c
    if (!v1) {
        result = function_297246();
    }
    // 0x29725e
    int64_t v2; // 0x29725c
    int32_t * v3 = (int32_t *)(8 * a2 + 0x40ee6a3a + v2); // 0x29725e
    *v3 = *v3 + (int32_t)v2;
    return result;
}

// Address range: 0x29727e - 0x29728f
int64_t function_29727e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = unknown_2c695784(); // 0x29727e
    char * v2 = (char *)(v1 + 0x3641800); // 0x297283
    *v2 = *v2 + (char)v1;
    int32_t * v3 = (int32_t *)(a3 + 1); // 0x29728b
    int64_t v4; // 0x29727e
    *v3 = *v3 + (int32_t)v4;
    return (v1 + a4 / 256) % 256 | v1 & -256;
}

// Address range: 0x29729b - 0x2972a1
int64_t function_29729b(void) {
    // 0x29729b
    return function_6817489();
}

// Address range: 0x2972bc - 0x2972c9
int64_t function_2972bc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2972bc
    int64_t v1; // 0x2972bc
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a3;
    return function_23637bf4();
}

// Address range: 0x2972d7 - 0x2972ed
int64_t function_2972d7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_6e1f0bdd(); // 0x2972d7
    *(char *)a4 = (char)a3;
    int32_t * v2 = (int32_t *)(8 * a2 + a3); // 0x2972e9
    *v2 = *v2 + (int32_t)a1;
    return v1 | 232;
}

// Address range: 0x297317 - 0x297322
int64_t function_297317(void) {
    // 0x297317
    int64_t v1; // 0x297317
    return function_297325(v1, v1, v1, v1, (int64_t)&g6);
}

// Address range: 0x297324 - 0x297325
int64_t function_297324(void) {
    // 0x297324
    int64_t result; // 0x297324
    return result;
}

// Address range: 0x297325 - 0x2973a5
int64_t function_297325(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x297325
    bool v1; // 0x297325
    if (a4 != 1 != v1) {
        // 0x297328
        int64_t v2; // bp-8, 0x297325
        return (int64_t)&v2;
    }
    int32_t * v3 = (int32_t *)(a3 + 96); // 0x29737f
    *v3 = *v3 + (int32_t)a1;
    int32_t * v4 = (int32_t *)(a3 + 0x7910ab); // 0x297387
    int64_t v5; // 0x297325
    *v4 = *v4 + (int32_t)v5;
    char * v6 = (char *)(v5 - 0x7081e77); // 0x297393
    *v6 = *v6 & (char)v5;
    int64_t v7 = v5 & -256; // 0x297399
    int64_t v8 = v7 | 210; // 0x297399
    char * v9 = (char *)v8; // 0x29739b
    *v9 = *v9 | -46;
    return ((int32_t)v8 < 0x2107ce01 ? 67 : 66) | v7;
}

// Address range: 0x2973a7 - 0x2973aa
int64_t function_2973a7(void) {
    // 0x2973a7
    int64_t v1; // 0x2973a7
    return (int64_t)&v1;
}

// Address range: 0x2973bd - 0x2973c3
int64_t function_2973bd(int64_t a1) {
    // 0x2973bd
    int64_t result; // 0x2973bd
    return result;
}

// Address range: 0x297445 - 0x29745a
int64_t function_297445(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x297445
    *(char *)-0x17b24005 = *(char *)-0x17b24005 % 2;
    int64_t result; // 0x297445
    unsigned char v1 = (char)result;
    unsigned char v2 = v1 + (char)(a3 / 256); // 0x29744c
    unsigned char v3 = llvm_ctpop_i8(v2); // 0x29744c
    *(char *)a3 = v2;
    if (v3 % 2 == 0) {
        // 0x297458
        return result;
    }
    int32_t * v4 = (int32_t *)(a2 + 0x3901e8d7); // 0x297450
    *v4 = (int32_t)(v2 < v1) - (int32_t)result + *v4;
    return result;
}

// Address range: 0x29745c - 0x297460
int64_t function_29745c(void) {
    // 0x29745c
    int64_t result; // 0x29745c
    return result;
}

// Address range: 0x29746d - 0x297470
int64_t function_29746d(void) {
    // 0x29746d
    int64_t result; // 0x29746d
    return result;
}

// Address range: 0x29747a - 0x29747d
int64_t function_29747a(void) {
    // 0x29747a
    int64_t result; // 0x29747a
    return result;
}

// Address range: 0x2974ab - 0x2974b5
int64_t function_2974ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 - 0x7cc55bfd); // 0x2974ae
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x2974ab
    return result;
}

// Address range: 0x2974dd - 0x2974de
int64_t function_2974dd(void) {
    // 0x2974dd
    int64_t result; // 0x2974dd
    return result;
}

// Address range: 0x2974f1 - 0x297504
int64_t function_2974f1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2974f1
    int64_t v1; // 0x2974f1
    char * v2 = (char *)(2 * v1 - 96); // 0x2974f1
    *v2 = *v2 | (char)(a4 / 256);
    int64_t v3; // 0x2974f1
    *(char *)a3 = *(char *)&v3 + 72;
    unknown_30c88fe();
    return v1 & 0xffff00ff | (int64_t)(int32_t)&g4;
}

// Address range: 0x29750b - 0x297512
int64_t function_29750b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29750b
    int64_t result; // 0x29750b
    return result;
}

// Address range: 0x297512 - 0x29754b
int64_t function_297512(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x297512
    __asm_in_136(-126);
    int64_t result = unknown_fffffffffd056a3a(); // 0x297534
    float80_t v1; // 0x297512
    *(int16_t *)(a3 - 0x7a0d20ed) = (int16_t)v1;
    return result;
}

// Address range: 0x29754c - 0x29754e
int64_t function_29754c(void) {
    // 0x29754c
    return function_2974dd();
}

// Address range: 0x297613 - 0x297617
int64_t function_297613(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 127); // 0x297613
    bool v2; // 0x297613
    *v1 = *v1 + (char)a3 + (char)v2;
    int64_t result; // 0x297613
    return result;
}

// Address range: 0x29768e - 0x29768f
int64_t function_29768e(int64_t a1) {
    // 0x29768e
    int64_t result; // 0x29768e
    return result;
}

// Address range: 0x2976b0 - 0x2976b1
int64_t function_2976b0(int64_t a1) {
    // 0x2976b0
    int64_t result; // 0x2976b0
    return result;
}

// Address range: 0x2976c9 - 0x2976cc
int64_t function_2976c9(void) {
    // 0x2976c9
    int64_t result; // 0x2976c9
    return result;
}

// Address range: 0x297740 - 0x297741
int64_t function_297740(int64_t a1) {
    // 0x297740
    int64_t result; // 0x297740
    return result;
}

// Address range: 0x297825 - 0x29785a
int64_t function_297825(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x297825
    int64_t v1; // 0x297825
    uint64_t v2 = (v1 & 0xffffffff) - 1; // 0x29782d
    char * v3 = (char *)(a3 - 0x17f8acb9 + 2 * v1); // 0x297835
    *v3 = (char)((int32_t)v1 < 0x6ff4f01) - (char)(v2 / 256) + *v3;
    int32_t * v4 = (int32_t *)(v2 + 2 * v1); // 0x29783c
    *v4 = *v4 + (int32_t)v1;
    int64_t result = __asm_hlt(a1); // 0x297848
    *(char *)0x64ca151 = *(char *)0x64ca151 + (char)(a4 / 256);
    return result;
}

// Address range: 0x297868 - 0x297869
int64_t function_297868(void) {
    // 0x297868
    int64_t result; // 0x297868
    return result;
}

// Address range: 0x29786e - 0x297872
int64_t function_29786e(void) {
    // 0x29786e
    return function_297868();
}

// Address range: 0x297872 - 0x297873
int64_t function_297872(void) {
    // 0x297872
    int64_t result; // 0x297872
    return result;
}

// Address range: 0x297875 - 0x29787e
int64_t function_297875(void) {
    // 0x297875
    int64_t v1; // 0x297875
    return 0x7f013d00 * v1 & 0xffffff00;
}

// Address range: 0x297895 - 0x29789d
int64_t function_297895(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 - 0x4a414949); // 0x297895
    *v1 = *v1 + (char)a4;
    return function_297872();
}

// Address range: 0x2978b7 - 0x2978c5
int64_t function_2978b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2978b7
    int64_t result; // 0x2978b7
    return result;
}
