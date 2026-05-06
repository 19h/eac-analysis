/*
 * Targeted RetDec C for native executable gap queue batch 849.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1370a4-0x1371a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1371a4-0x1373a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1373a4-0x1375a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1375a4-0x1377a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2510bc-0x2512bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x2512bc-0x2514bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x2514bc-0x2516bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x2518bc-0x251abc rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g4;
extern int g5;
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

int64_t function_137065();
int64_t function_137070();
int64_t function_1370a4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1370e4(void);
int64_t function_1370eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13711b(int64_t a1, int64_t a2);
int64_t function_13714a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13717b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1371c6(void);
int64_t function_137209(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13724c(int64_t a1);
int64_t function_137278(void);
int64_t function_137346(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_137375(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_137388(void);
int64_t function_1373db(int64_t a1);
int64_t function_1373f0(void);
int64_t function_137489(int64_t a1);
int64_t function_1374f5(int64_t a1);
int64_t function_137513(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_137661(void);
int64_t function_13769f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1376c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2510bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_251120(void);
int64_t function_25118b(int64_t a1);
int64_t function_25119a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2511f8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_251216(int64_t a1);
int64_t function_251223(int64_t a1, int64_t a2);
int64_t function_251234(void);
int64_t function_2512c5(void);
int64_t function_2512db(void);
int64_t function_251326(int64_t a1, int64_t a2);
int64_t function_251337(void);
int64_t function_251354(int64_t a1);
int64_t function_25135b(int64_t a1);
int64_t function_251361(int64_t a1, int64_t a2);
int64_t function_251382(void);
int64_t function_251388(void);
int64_t function_25138f(int64_t a1, int64_t a2);
int64_t function_25139e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2513a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25143b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25147b(int64_t a1);
int64_t function_25149e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25151b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_251572(void);
int64_t function_251587(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25166c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2518a4();
int64_t function_2518bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25191f(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_251940(void);
int64_t function_2519fb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_251a50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_251a6d(void);
int64_t function_251a83(int64_t a1);
int64_t function_251a8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_254473();
int64_t function_38005e70();
int64_t function_47cf1b01();
int64_t function_c237577();
int64_t function_c4258();
int64_t function_ffffffff9a6f5651();
int64_t function_ffffffffaf33891d();
int64_t function_ffffffffafe935ee();
int64_t unknown_1a29fd3b();
int64_t unknown_20f24cdb();
int64_t unknown_46261c11();
int64_t unknown_490d5fb4();
int64_t unknown_4ee26ef1();
int64_t unknown_65ac086e();
int64_t unknown_68b46109();
int64_t unknown_6d2c802c();
int64_t unknown_ffffffff91feac95();
int64_t unknown_ffffffffa715737b();
int64_t unknown_ffffffffb442e08b();
int64_t unknown_ffffffffba26fa29();
int64_t unknown_ffffffffc226fe89();
int64_t unknown_ffffffffc2d8f66c();
int64_t unknown_ffffffffc3893daf();
int64_t unknown_ffffffffc81575d1();
int64_t unknown_ffffffffc8c058d2();
int64_t unknown_ffffffffcef2b895();
int64_t unknown_ffffffffd5ccdd77();
int64_t unknown_ffffffffdc3a369b();
int64_t unknown_ffffffffdd95a9c6();
int64_t unknown_ffffffffe826e9cf();
int64_t unknown_fffffffff0d73cc5();
int64_t unknown_fffffffff4ea4801();
int64_t unknown_fffffffff902db4d();

// Address range: 0x1370a4 - 0x1370db
int64_t function_1370a4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1370a4
    int64_t v1; // 0x1370a4
    char * v2 = (char *)(2 * v1); // 0x1370a4
    *v2 = 2 * *v2;
    __asm_in(44);
    int64_t v3 = unknown_ffffffffc3893daf(); // 0x1370a9
    char * v4 = (char *)(4 * a3 + 123 + v1); // 0x1370b0
    *v4 = *v4 + (char)v1;
    char v5 = *(char *)(8 * v1 - 0xe5149ff + v3); // 0x1370b4
    function_137065();
    int64_t v6 = unknown_fffffffff0d73cc5(); // 0x1370be
    int64_t v7; // 0x1370a4
    int32_t v8 = *(int32_t *)&v7; // 0x1370ca
    __asm_outsd((int16_t)(256 * (int64_t)(v5 | (char)(a3 / 256)) | a3 % 256), v8);
    unknown_ffffffffc8c058d2();
    if ((int32_t)v6 > 0x795d8b3) {
        function_137070();
    }
    // 0x1370d3
    return unknown_20f24cdb();
}

// Address range: 0x1370e4 - 0x1370e6
int64_t function_1370e4(void) {
    // 0x1370e4
    int64_t v1; // 0x1370e4
    return function_13714a(v1, v1, v1, v1, (int64_t)&g5);
}

// Address range: 0x1370eb - 0x13710e
int64_t function_1370eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_4ee26ef1(); // 0x1370eb
    int64_t v2; // 0x1370eb
    int32_t * v3 = (int32_t *)(v2 - 0x42e1e2ed + 4 * v2); // 0x1370f9
    *v3 = *v3 + (int32_t)v2;
    bool v4; // 0x1370eb
    int64_t v5 = v4 ? -1 : 1; // 0x137100
    unknown_68b46109(v5 + a1, a3 + 0xf507d484 + 4 * a3 & 0xffffffff, 128 * v1 & 0x7f00 | a3);
    return v2 & -0xff01 | 256 * a4 & 0xff00;
}

// Address range: 0x13711b - 0x137123
int64_t function_13711b(int64_t a1, int64_t a2) {
    // 0x13711b
    int64_t result; // 0x13711b
    return result;
}

// Address range: 0x13714a - 0x13717a
int64_t function_13714a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = *(int32_t *)(a3 + 9); // 0x13714d
    int64_t v2; // 0x13714a
    char v3 = (char)v2 + (char)a3 & (char)v2; // 0x137150
    unsigned char v4 = llvm_ctpop_i8(v3); // 0x137150
    *(char *)a2 = v3;
    int64_t v5; // 0x13714a
    bool v6; // 0x13714a
    *(int64_t *)((int64_t)(v1 ^ (int32_t)(int64_t)&v5) - 8) = 0x4000 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 64 * (int64_t)(v3 == 0) | 128 * (int64_t)(v3 < 0) | 256 * (int64_t)v6 | 4 * (int64_t)(v4 % 2 == 0) | 2;
    char v7 = *(char *)(a1 + 0x1e8a01d); // 0x137153
    int64_t v8; // 0x13714a
    *(char *)a1 = *(char *)&v8 + (char)(__asm_hlt() / 256);
    int64_t v9 = unknown_65ac086e(); // 0x137168
    char * v10 = (char *)(a5 & -256 | (int64_t)((char)a5 - v7)); // 0x13716e
    *v10 = *v10 + 62 + (char)((v9 & 256) != 0);
    __asm_out(95, (char)v9);
    return v9 & 0x9fe171d | 0xf601e8e2;
}

// Address range: 0x13717b - 0x13719b
int64_t function_13717b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13717b
    int64_t v1; // 0x13717b
    uint32_t v2 = (int32_t)v1; // 0x13717b
    uint32_t v3 = v2 + (int32_t)a1; // 0x13717b
    bool v4; // 0x13717b
    uint32_t v5 = v3 + (int32_t)v4; // 0x13717b
    bool v6 = v4 ? v5 <= v2 : v3 < v2; // 0x13717b
    int32_t * v7 = (int32_t *)(8 * (int64_t)v5 + a2); // 0x13717e
    int64_t v8; // 0x13717b
    *v7 = *v7 + (int32_t)(int64_t)&v8 + (int32_t)v6;
    int32_t * v9 = (int32_t *)(v1 - 0x5b8297fd); // 0x137187
    *v9 = *v9 + (int32_t)a3;
    return unknown_ffffffffdc3a369b(a4);
}

// Address range: 0x1371c6 - 0x1371c9
int64_t function_1371c6(void) {
    // 0x1371c6
    int64_t v1; // 0x1371c6
    bool v2; // 0x1371c6
    return 2 * v1 & 0xfffffffe | (int64_t)v2;
}

// Address range: 0x137209 - 0x137218
int64_t function_137209(int64_t a1, int64_t a2, int64_t a3) {
    // 0x137209
    int64_t v1; // 0x137209
    *(char *)a3 = (char)(v1 / 256);
    char * v2 = (char *)(v1 + 0xe9901e8); // 0x13720b
    bool v3; // 0x137209
    *v2 = *v2 - (v3 ? -103 : -104);
    return v1 & -0xff01 | (int64_t)"tdi2";
}

// Address range: 0x13724c - 0x13724d
int64_t function_13724c(int64_t a1) {
    // 0x13724c
    int64_t result; // 0x13724c
    return result;
}

// Address range: 0x137278 - 0x13727e
int64_t function_137278(void) {
    // 0x137278
    int64_t v1; // 0x137278
    char * v2 = (char *)(v1 + 14); // 0x137278
    *v2 = (char)v1;
    return v1 & -256 | (int64_t)*v2;
}

// Address range: 0x137346 - 0x13734c
int64_t function_137346(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x137346
    int64_t result; // 0x137346
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x137375 - 0x137386
int64_t function_137375(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffa715737b(); // 0x137375
    int64_t v2; // 0x137375
    *(int32_t *)a2 = (int32_t)v2 + (int32_t)a4;
    return (v1 + 207) % 256 | v1 & -256;
}

// Address range: 0x137388 - 0x13738f
int64_t function_137388(void) {
    // 0x137388
    return function_c237577();
}

// Address range: 0x1373db - 0x1373de
int64_t function_1373db(int64_t a1) {
    // 0x1373db
    int64_t result; // 0x1373db
    return result;
}

// Address range: 0x1373f0 - 0x1373f5
int64_t function_1373f0(void) {
    // 0x1373f0
    return function_ffffffffafe935ee();
}

// Address range: 0x137489 - 0x13748e
int64_t function_137489(int64_t a1) {
    // 0x137489
    int64_t v1; // 0x137489
    int64_t v2 = v1;
    return (v2 + 129) % 256 | v2 & -256;
}

// Address range: 0x1374f5 - 0x1374f9
int64_t function_1374f5(int64_t a1) {
    // 0x1374f5
    int64_t result; // 0x1374f5
    return result;
}

// Address range: 0x137513 - 0x13764c
int64_t function_137513(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x137513
    int64_t v1; // 0x137513
    int64_t v2 = v1;
    int64_t v3 = a3;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    uint32_t v4 = *(int32_t *)-0x510a9739fa8527d4; // 0x137515
    uint32_t v5 = v4 | (int32_t)a1; // 0x13751e
    uint64_t v6 = a4 / 256; // 0x137526
    int64_t v7; // 0x137513
    *(char *)v7 = *(char *)&v7 & (char)v6;
    v7 &= -256;
    *(int32_t *)-0x173ccf1a = *(int32_t *)-0x173ccf1a + v4;
    int32_t * v8 = (int32_t *)(a3 + 0x475773e3); // 0x137537
    *v8 = *v8 + v5;
    float80_t v9; // 0x137513
    *(int16_t *)(a3 + 22) = (int16_t)v9;
    int64_t v10; // bp-117, 0x137513
    if ((*(int32_t *)((int64_t)&v10 + 0xf400ee0) & 0x1e88e00) == 0) {
        int64_t result = unknown_ffffffffc81575d1(); // 0x1375d0
        if (a4 != 1) {
            // 0x137635
            return unknown_fffffffff902db4d();
        }
        // 0x1375d2
        return result;
    }
    int64_t v11 = v5; // 0x13751e
    bool v12; // 0x137513
    int64_t v13 = (v12 ? -4 : 4) + a5; // 0x137552
    int64_t v14 = v12 ? 0xfffffffc : 4; // 0x137555
    int64_t * v15 = (int64_t *)((int64_t)v4 - 8); // 0x137557
    *v15 = v7;
    char v16 = (char)*(int32_t *)v13; // 0x13755f
    *(char *)v3 = *(char *)&v3 + v16;
    int64_t v17 = *v15; // 0x137563
    unsigned char v18 = *(char *)v11; // 0x137564
    unknown_ffffffffc2d8f66c(v11 - 1, (int32_t)(v13 + v14) + (int32_t)a4);
    int64_t v19 = v3; // 0x13756b
    char v20 = *(char *)(a4 + 0x50556900); // 0x13756b
    int64_t v21 = v19 & -256 | (int64_t)((char)(v18 > v16 - 1) - v20 + (char)v19); // 0x13756b
    v3 = v21;
    int64_t v22 = unknown_ffffffffd5ccdd77(); // 0x137571
    int64_t result2 = v22; // 0x137576
    int64_t v23 = v21; // 0x137576
    if (a4 != 0) {
        // 0x137579
        *(char *)-0x16f86047 = *(char *)-0x16f86047 | (char)v22;
        int32_t v24 = (int32_t)v17 + 0x34b8ae7c + (int32_t)v22; // 0x137581
        result2 = v24;
        *(char *)-0x2b031b0efe1797ce = (char)v24;
        v3 = 0x1e8aea5;
        v23 = 0x1e8aea5;
        if (v24 < 1) {
            // 0x1375d2
            return result2;
        }
    }
    int64_t v25 = result2;
    __asm_out_133((int16_t)v23, (char)v25);
    unsigned char v26 = (char)a4 % 32; // 0x13759a
    v3 = v23;
    if (v26 != 0) {
        char * v27 = (char *)v25;
        *v27 = *v27 >> v26;
    }
    int32_t * v28 = (int32_t *)(v3 - 94); // 0x13759e
    uint32_t v29 = *v28; // 0x13759e
    uint32_t v30 = v29 + (int32_t)v17; // 0x13759e
    *v28 = v30;
    return (v25 + v6 + (v30 < v29 ? 230 : 231)) % 256 | v25 & -256;
}

// Address range: 0x137661 - 0x137662
int64_t function_137661(void) {
    // 0x137661
    int64_t result; // 0x137661
    return result;
}

// Address range: 0x13769f - 0x1376c1
int64_t function_13769f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    char * v2 = (char *)(a3 + 0x38f301e8); // 0x13769f
    *v2 = -*v2;
    int32_t v3 = *(int32_t *)&v1; // 0x1376a5
    int32_t v4 = a1; // 0x1376a5
    int64_t v5; // 0x13769f
    if (((v3 - v4 ^ v3) & (v3 ^ v4)) >= 0) {
        v5 = function_137661();
    }
    // 0x1376a9
    __asm_in_134((int16_t)v1);
    uint64_t v6 = unknown_490d5fb4() + 0x3387baaf + (int64_t)((v5 & 256) != 0); // 0x1376b3
    *(char *)0x50763c26 = *(char *)0x50763c26 | (char)(v6 / 256);
    return v6 & 0xffffffff;
}

// Address range: 0x1376c1 - 0x13774e
int64_t function_1376c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1376c1
    int64_t v1; // 0x1376c1
    int32_t v2 = v1; // 0x1376c1
    int64_t v3 = v1 + 0xc9fc54c9; // 0x1376c1
    int64_t result = v3 & 0xffffffff; // 0x1376c1
    if ((0x3603ab36 - v2 & v2) >= 0) {
        // 0x1376cb
        return result;
    }
    // 0x137746
    __asm_out(-77, (char)v3);
    char * v4 = (char *)(v1 + 0x25f5198d); // 0x137748
    *v4 = *v4 + ((char)a4 | (char)&g3);
    return result;
}

// Address range: 0x2510bc - 0x251120
int64_t function_2510bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x2510bc
    int64_t v1; // bp-8, 0x2510bc
    v1 = (int64_t)&v1;
    return function_c4258();
}

// Address range: 0x251120 - 0x251125
int64_t function_251120(void) {
    // 0x251120
    return function_254473();
}

// Address range: 0x25118b - 0x25118c
int64_t function_25118b(int64_t a1) {
    // 0x25118b
    int64_t result; // 0x25118b
    return result;
}

// Address range: 0x25119a - 0x2511c1
int64_t function_25119a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2 = unknown_ffffffffdd95a9c6(); // 0x25119a
    int32_t * v3 = (int32_t *)(a4 - 14); // 0x2511a4
    *v3 = *v3 + (int32_t)a2;
    unsigned char v4 = *(char *)&v1; // 0x2511a9
    char v5 = v4 + 98; // 0x2511a9
    unsigned char v6 = llvm_ctpop_i8(v5); // 0x2511a9
    int32_t * v7 = (int32_t *)(a3 - 75); // 0x2511b5
    *v7 = *v7 + 0x7aa6b2eb;
    *(int32_t *)v1 = (int32_t)(256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v4 < 158) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v4 % 16 > 29) | 4 * (int64_t)(v6 % 2 == 0)) | v2 & 0xffff00ff) | 512;
    *(int32_t *)0x7aa6b278 = *(int32_t *)0x7aa6b278 / 2;
    bool v8; // 0x25119a
    return function_38005e70(v1 + (v8 ? -4 : 4));
}

// Address range: 0x2511f8 - 0x251201
int64_t function_2511f8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2511f8
    int64_t result; // 0x2511f8
    *(int32_t *)a1 = __asm_insd((int16_t)(result + (a3 & 0xff00) & 0xff00 | a3 % 256));
    return result;
}

// Address range: 0x251216 - 0x251219
int64_t function_251216(int64_t a1) {
    // 0x251216
    int64_t result; // 0x251216
    return result;
}

// Address range: 0x251223 - 0x251233
int64_t function_251223(int64_t a1, int64_t a2) {
    int64_t v1 = unknown_ffffffffba26fa29(a1, a2); // 0x251223
    __asm_rcl(*(int32_t *)v1);
    return v1 & -256 | (int64_t)(*(char *)(a1 + 0x764c53a) ^ (char)v1);
}

// Address range: 0x251234 - 0x251235
int64_t function_251234(void) {
    // 0x251234
    int64_t result; // 0x251234
    return result;
}

// Address range: 0x2512c5 - 0x2512c6
int64_t function_2512c5(void) {
    // 0x2512c5
    int64_t result; // 0x2512c5
    return result;
}

// Address range: 0x2512db - 0x2512dd
int64_t function_2512db(void) {
    // 0x2512db
    return function_2512c5();
}

// Address range: 0x251326 - 0x251331
int64_t function_251326(int64_t a1, int64_t a2) {
    int64_t v1 = unknown_6d2c802c(a1, a2); // 0x251326
    int64_t v2; // 0x251326
    int32_t * v3 = (int32_t *)(v2 + 14); // 0x25132b
    *v3 = *v3 + (int32_t)v1;
    bool v4; // 0x251326
    return function_25139e(a1, (v4 ? -4 : 4) + a2, v2, v2);
}

// Address range: 0x251337 - 0x251338
int64_t function_251337(void) {
    // 0x251337
    int64_t result; // 0x251337
    return result;
}

// Address range: 0x251354 - 0x251359
int64_t function_251354(int64_t a1) {
    // 0x251354
    int64_t result; // 0x251354
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)result;
    return result;
}

// Address range: 0x25135b - 0x25135c
int64_t function_25135b(int64_t a1) {
    // 0x25135b
    int64_t result; // 0x25135b
    return result;
}

// Address range: 0x251361 - 0x25136e
int64_t function_251361(int64_t a1, int64_t a2) {
    // 0x251361
    int64_t v1; // 0x251361
    __asm_out_135((char)a1, (int32_t)v1);
    int32_t * v2 = (int32_t *)(a1 + 0x6b9124fc); // 0x251363
    *v2 = *v2 + (int32_t)a2;
    return function_ffffffff9a6f5651();
}

// Address range: 0x251382 - 0x251387
int64_t function_251382(void) {
    // 0x251382
    return function_ffffffffaf33891d();
}

// Address range: 0x251388 - 0x251389
int64_t function_251388(void) {
    // 0x251388
    int64_t result; // 0x251388
    return result;
}

// Address range: 0x25138f - 0x25139a
int64_t function_25138f(int64_t a1, int64_t a2) {
    // 0x25138f
    return unknown_ffffffffcef2b895(a1, a2);
}

// Address range: 0x25139e - 0x25139f
int64_t function_25139e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25139e
    return a4 & 0xffffffff;
}

// Address range: 0x2513a2 - 0x2513b2
int64_t function_2513a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t result = __asm_in_134((int16_t)a3); // 0x2513a4
    bool v1; // 0x2513a2
    *(int64_t *)0x810f67f = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2;
    return result;
}

// Address range: 0x25143b - 0x251445
int64_t function_25143b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25143b
    int64_t v1; // 0x25143b
    int32_t * v2 = (int32_t *)(v1 - 59); // 0x25143d
    *v2 = *v2 + (int32_t)a1;
    return 0;
}

// Address range: 0x25147b - 0x251483
int64_t function_25147b(int64_t a1) {
    // 0x25147b
    int64_t result; // 0x25147b
    return result;
}

// Address range: 0x25149e - 0x2514ab
int64_t function_25149e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x25149e
    int64_t v1; // 0x25149e
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a3;
    return v1 & -256 | (int64_t)*(char *)0x1e82203690afa03;
}

// Address range: 0x25151b - 0x25153e
int64_t function_25151b(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_1a29fd3b(); // 0x251535
    int64_t v1; // 0x25151b
    __asm_outsb((int16_t)a3, (char)v1);
    return result;
}

// Address range: 0x251572 - 0x251573
int64_t function_251572(void) {
    // 0x251572
    int64_t result; // 0x251572
    return result;
}

// Address range: 0x251587 - 0x251632
int64_t function_251587(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x251587
    int64_t v1; // 0x251587
    unsigned char v2 = *(char *)(v1 - 0x6391e5f9) | (char)v1; // 0x251589
    int64_t v3 = unknown_ffffffff91feac95(); // 0x25158f
    char * v4 = (char *)((v1 & -256 | (int64_t)v2) + 40); // 0x251594
    char v5 = *v4; // 0x251594
    char v6 = v5 + v2; // 0x251594
    *v4 = v6;
    int64_t v7 = v3; // 0x251597
    if (v6 < 0 == ((v6 ^ v5) & (v6 ^ v2)) < 0) {
        v7 = function_251572();
    }
    uint64_t v8 = a3 - v1; // 0x251587
    char * v9 = (char *)(a2 + 0x1e8bcd4); // 0x25159a
    *v9 = *v9 | v2;
    unsigned char v10 = (char)v7 + 102; // 0x2515a2
    __asm_out_133((int16_t)v8, v10);
    uint64_t v11 = v7 + 134; // 0x2515a3
    int64_t v12 = v11 % 256 | v7 & 0xffffff00; // 0x2515a5
    int64_t v13 = v8 & 0xffffffff; // 0x2515a6
    if (v10 >= 225) {
        // 0x2515a8
        *(char *)(v12 - 66) = (char)a4;
        int64_t v14 = unknown_ffffffffc226fe89(); // 0x2515ab
        v13 = v8 % 256 % 256 | v8 & 0xffffff00;
        int64_t v15 = v14 & -0xff01 | (int64_t)&g1; // 0x2515b5
        int32_t * v16 = (int32_t *)(v13 - 0x175a2fd9); // 0x2515b7
        *v16 = *v16 % 2;
        char * v17 = (char *)v15; // 0x2515be
        *v17 = *v17 + (char)v11;
        __asm_out_136((int16_t)v13, (int32_t)v15);
    }
    // 0x2515c4
    __asm_sti();
    int64_t v18 = unknown_ffffffffe826e9cf(); // 0x2515c9
    *(int32_t *)-0x17b10d2b = *(int32_t *)-0x17b10d2b + (int32_t)a1;
    int32_t * v19 = (int32_t *)(v18 + 0x120c103d); // 0x2515d4
    *v19 = *v19 + (int32_t)v18;
    uint32_t v20 = (int32_t)v11 % 32; // 0x2515da
    if (v20 != 0) {
        int32_t * v21 = (int32_t *)v18; // 0x2515da
        uint32_t v22 = *v21; // 0x2515da
        *v21 = v22 >> 32 - v20 | v22 << v20;
    }
    int32_t * v23 = (int32_t *)v13; // 0x2515e4
    *v23 = *v23 ^ -0x6668109d;
    char * v24 = (char *)(v13 + 0x77013da0); // 0x2515ea
    *v24 = *v24 + v2;
    int64_t v25 = __asm_hlt(); // 0x2515f0
    char * v26 = (char *)(v12 + 0x2201e84b); // 0x2515ff
    *v26 = *v26 ^ (char)v25;
    uint32_t v27 = 0x681690a * *(int32_t *)(v25 - 0x66548dff); // 0x25160c
    bool v28; // 0x251587
    int64_t v29 = (v28 ? -1 : 1) + a1; // 0x251616
    *(int32_t *)v29 = v27;
    int32_t v30 = *(int32_t *)(v29 + (v28 ? -4 : 4)) + (int32_t)a2; // 0x251618
    *(char *)-0x701eeddd = *(char *)-0x701eeddd + *(char *)0x875160c;
    int64_t v31 = __asm_int1((int64_t)v27, v30); // 0x251623
    char * v32 = (char *)((v12 & 0xffff00ff | (int64_t)&g4) - 99 + v13); // 0x251626
    *v32 = *v32 + (char)v31;
    int32_t * v33 = (int32_t *)(v31 - 0x489d61fd); // 0x25162a
    *v33 = *v33 + v30;
    return __asm_sti();
}

// Address range: 0x25166c - 0x251689
int64_t function_25166c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 0x70671866); // 0x25166c
    int64_t v2; // 0x25166c
    int32_t v3 = *v1 + (int32_t)v2; // 0x25166c
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x25166c
    *v1 = v3;
    float80_t v5; // 0x25166c
    *(int32_t *)(a3 + 16) = (int32_t)v5;
    return (v4 % 2 == 0 ? 0 : a4 & 0xff00) | v2;
}

// Address range: 0x2518bc - 0x2518c9
int64_t function_2518bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2518bc
    int64_t v1; // 0x2518bc
    unsigned char v2 = (char)v1;
    *(char *)v1 = v2 / 128 | 2 * v2;
    int64_t result; // 0x2518bc
    if (a4 != 1) {
        result = function_2518a4();
    }
    // 0x2518c8
    return result;
}

// Address range: 0x25191f - 0x25192b
int64_t function_25191f(int64_t a1, int64_t a2, uint64_t a3) {
    char * v1 = (char *)(a2 + 0x29013d52); // 0x25191f
    *v1 = *v1 + (char)(a3 / 256);
    __asm_in_134((int16_t)a3);
    return function_47cf1b01();
}

// Address range: 0x251940 - 0x251948
int64_t function_251940(void) {
    // 0x251940
    return 0x3412e201;
}

// Address range: 0x2519fb - 0x251a13
int64_t function_2519fb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2519fb
    unknown_fffffffff4ea4801();
    __asm_sti();
    char * v1 = (char *)(a3 + 1); // 0x251a07
    int64_t v2; // 0x2519fb
    *v1 = *v1 + (char)v2;
    return unknown_46261c11();
}

// Address range: 0x251a50 - 0x251a6c
int64_t function_251a50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x251a50
    *(char *)a5 = *(char *)0x14e0afa8dc201e8;
    int64_t v1; // 0x251a50
    bool v2; // 0x251a50
    return __asm_int1(v1 + a5 + (v2 ? 0xffffffff : 1) & 0xffffffff, (int32_t)a2);
}

// Address range: 0x251a6d - 0x251a6e
int64_t function_251a6d(void) {
    // 0x251a6d
    int64_t result; // 0x251a6d
    return result;
}

// Address range: 0x251a83 - 0x251a8c
int64_t function_251a83(int64_t a1) {
    // 0x251a83
    int64_t v1; // 0x251a83
    unknown_ffffffffb442e08b(v1 & 0xffffffff);
    return function_251a6d();
}

// Address range: 0x251a8c - 0x251ab2
int64_t function_251a8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x251a8c
    int64_t v1; // 0x251a8c
    uint32_t v2 = *(int32_t *)(a1 + 36) | (int32_t)v1; // 0x251a90
    int32_t * v3 = (int32_t *)((int64_t)v2 - 0x3bfef80b); // 0x251aa4
    *v3 = *v3 + v2;
    __asm_out_133((int16_t)a3, 29);
    return __asm_in(-70);
}
