/*
 * Targeted RetDec C for native executable gap queue batch 501.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2354b6-0x2356b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2356b6-0x2358b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2358b6-0x235ab6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x36c91b-0x36cb1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36cb1b-0x36cd1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36cd1b-0x36cf1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36cf1b-0x36d11b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36d11b-0x36d31b rank=- name=- kind=- bytes=- uncovered=-
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
void unknown_b6ccb9(void);
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
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
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

int64_t function_2354b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2354c3(int64_t a1);
int64_t function_2354ef(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2355d8(void);
int64_t function_2355ed(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_23561e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2356dd(void);
int64_t function_2356e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2357f4(void);
int64_t function_235839(int64_t a1);
int64_t function_235875(void);
int64_t function_23587d(void);
int64_t function_2358b0(void);
int64_t function_2358b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2358e7(int64_t a1);
int64_t function_2358f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_235964(int64_t a1, int64_t a2, int64_t a3);
int64_t function_235994(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2359d4(void);
int64_t function_2359de(void);
int64_t function_2359f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_235a33(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_235a61(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_235a80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_235b06();
int64_t function_36c91b(void);
int64_t function_36c92c(int64_t a1);
int64_t function_36c984(int64_t a1, int64_t a2);
int64_t function_36c991(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36c9f5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36ca36(int64_t a1);
int64_t function_36ca94(void);
int64_t function_36cab9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_36cae8(int64_t a1, int64_t a2);
int64_t function_36caf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_36cbc4(void);
int64_t function_36cbd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36cc32(int64_t a1);
int64_t function_36cc39(int64_t a1);
int64_t function_36cc7e(int64_t a1);
int64_t function_36cc84(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36cc9d(void);
int64_t function_36ccab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36cd89(void);
int64_t function_36cd8e(void);
int64_t function_36cdd9(void);
int64_t function_36ce38(int64_t a1, int64_t a2);
int64_t function_36ceb1(int64_t a1);
int64_t function_36ceba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36cee5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_36ceff(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_36cf09(void);
int64_t function_36cf18(void);
int64_t function_36cf71(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36cfd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36d0a1(int64_t a1);
int64_t function_36d1ed(void);
int64_t function_36d20d(void);
int64_t function_36d23f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36d267(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36d2bb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36d2be(int64_t a1);
int64_t function_4a12cd91();
int64_t function_54286269();
int64_t function_ffffffff80380710();
int64_t function_ffffffff87fbab8b();
int64_t function_ffffffff9e1c4676();
int64_t function_ffffffffab441406();
int64_t function_ffffffffe925f6fa();
int64_t function_ffffffffee7f586a();
int64_t unknown_10f768ef();
int64_t unknown_110acdca();
int64_t unknown_1a2dfe51();
int64_t unknown_1badc624();
int64_t unknown_1cbe5239();
int64_t unknown_24574eb1();
int64_t unknown_26b14193();
int64_t unknown_371cf27a();
int64_t unknown_3d254106();
int64_t unknown_671d33ca();
int64_t unknown_68ea83c1();
int64_t unknown_6b422a57();
int64_t unknown_712d9314();
int64_t unknown_7943ee3c();
int64_t unknown_ffffffff9a8e7ff4();
int64_t unknown_ffffffffbe59f4c4();
int64_t unknown_ffffffffc0b5098f();
int64_t unknown_ffffffffc4ad1286();
int64_t unknown_ffffffffc51e0375();
int64_t unknown_ffffffffd02493e9();
int64_t unknown_ffffffffd3ee3eeb();
int64_t unknown_ffffffffebb0b8fa();
int64_t unknown_fffffffff3fd98ee();

// Address range: 0x2354b6 - 0x2354c2
int64_t function_2354b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2354b6
    if (a4 == 0) {
        // 0x2354c5
        int64_t v1; // 0x2354b6
        return 0x100000000000000 * v1 >> 56;
    }
    int64_t result = unknown_68ea83c1(a1, a2, a3, a4); // 0x2354bb
    char * v2 = (char *)result; // 0x2354c0
    *v2 = *v2 + (char)result;
    return result;
}

// Address range: 0x2354c3 - 0x2354c5
int64_t function_2354c3(int64_t a1) {
    // 0x2354c3
    int64_t result; // 0x2354c3
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x2354ef - 0x2354fb
int64_t function_2354ef(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)-0x157d6a0a; // 0x2354ef
    int64_t v2; // 0x2354ef
    *(char *)-0x157d6a0a = v1 + (char)((uint64_t)v2 / 256);
    __asm_out((int16_t)a3, (int32_t)v2);
    return function_54286269();
}

// Address range: 0x2355d8 - 0x2355d9
int64_t function_2355d8(void) {
    // 0x2355d8
    int64_t result; // 0x2355d8
    return result;
}

// Address range: 0x2355ed - 0x2355fb
int64_t function_2355ed(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2355ed
    int64_t v1; // 0x2355ed
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v1;
    int64_t result = (v2 + a4 / 256) % 256 | v2 & -256; // 0x2355ee
    int32_t * v3 = (int32_t *)(a4 - 92 + result); // 0x2355f0
    *v3 = *v3 + (int32_t)a3;
    return result;
}

// Address range: 0x23561e - 0x235653
int64_t function_23561e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23561e
    *(int32_t *)0x5e02bb809d0028fa = (int32_t)unknown_1badc624();
    unsigned char v1 = *(char *)(a3 + 2); // 0x23563f
    int32_t v2 = *(int32_t *)(a3 + 0x470aa776); // 0x235642
    int32_t * v3 = (int32_t *)((int64_t)(v2 + (int32_t)(a4 & 0xffffff00 | (int64_t)v1)) + 21); // 0x235648
    int64_t v4; // 0x23561e
    *v3 = *v3 + (int32_t)v4;
    return unknown_1a2dfe51();
}

// Address range: 0x2356dd - 0x2356e8
int64_t function_2356dd(void) {
    // 0x2356dd
    return unknown_ffffffffd02493e9();
}

// Address range: 0x2356e9 - 0x235732
int64_t function_2356e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = unknown_10f768ef(); // 0x2356e9
    int64_t v3 = v2; // 0x2356ee
    int64_t v4; // 0x2356e9
    int64_t v5; // 0x2356e9
    int64_t v6; // 0x2356e9
    int64_t v7; // 0x2356e9
    bool v8; // 0x2356e9
    if (!v8) {
        goto lab_0x2356fe;
    } else {
        // 0x2356f0
        v4 = v2;
        v7 = a2;
        v5 = a1;
        if (!v8) {
            goto lab_0x235721;
        } else {
            // 0x2356f2
            v6 = v1;
            v3 = unknown_ffffffffebb0b8fa();
            goto lab_0x2356fe;
        }
    }
  lab_0x2356fe:;
    int32_t * v9 = (int32_t *)(a1 + 0x7215fd9f); // 0x235705
    int64_t v10; // 0x2356e9
    *v9 = *v9 + (int32_t)v10;
    int64_t v11 = v8 ? -4 : 4; // 0x23570b
    v1 = 0x459dc900;
    *(char *)-0x1f8425de = *(char *)-0x1f8425de + (char)(23 * v10 / 256);
    int64_t v12 = v3 & 0xffffffff; // 0x23571b
    int64_t v13 = (int64_t)&v1; // 0x23571b
    v4 = v6 & 0xffff009e | (int64_t)&g1;
    v7 = v11 + a2;
    v5 = v11 + a1;
    goto lab_0x235721;
  lab_0x235721:;
    int32_t * v14 = (int32_t *)(2 * v4); // 0x235721
    *v14 = *v14 + (int32_t)v13;
    int32_t * v15 = (int32_t *)(v10 + 125 + v7); // 0x23572b
    *v15 = *v15 ^ (int32_t)v12;
    return v5 & 0xffffffff;
}

// Address range: 0x2357f4 - 0x235802
int64_t function_2357f4(void) {
    // 0x2357f4
    int64_t v1; // 0x2357f4
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v1 + 1); // 0x2357f9
    *v3 = *v3 | 115;
    return function_ffffffffee7f586a();
}

// Address range: 0x235839 - 0x23583c
int64_t function_235839(int64_t a1) {
    // 0x235839
    int64_t result; // 0x235839
    return result;
}

// Address range: 0x235875 - 0x235876
int64_t function_235875(void) {
    // 0x235875
    int64_t result; // 0x235875
    return result;
}

// Address range: 0x23587d - 0x23587f
int64_t function_23587d(void) {
    // 0x23587d
    int64_t v1; // 0x23587d
    return function_2358b3(v1, v1, v1, v1);
}

// Address range: 0x2358b0 - 0x2358b3
int64_t function_2358b0(void) {
    // 0x2358b0
    return __asm_wait();
}

// Address range: 0x2358b3 - 0x2358c5
int64_t function_2358b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2358b3
    int64_t v1; // 0x2358b3
    uint64_t v2 = v1 + 158; // 0x2358b3
    *(char *)0x2cfe013d1bd36e = (char)v2;
    unsigned char v3 = *(char *)(8 * a1 - 0x68f8347f + a4); // 0x2358be
    return v2 % 256 * (int64_t)v3 | v1 & -0x10000;
}

// Address range: 0x2358e7 - 0x2358f2
int64_t function_2358e7(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 0x2e48ad); // 0x2358e7
    int64_t v2; // 0x2358e7
    *v1 = *v1 + (int32_t)v2;
    return function_235875();
}

// Address range: 0x2358f2 - 0x23590a
int64_t function_2358f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2358f2
    int64_t v1; // 0x2358f2
    if ((v1 & 254) == 0) {
        // 0x235966
        return v1 & -256;
    }
    // 0x2358f9
    unknown_712d9314();
    int64_t result = unknown_3d254106(); // 0x235900
    *(int32_t *)a4 = ((int32_t)v1 & -256) + (int32_t)a4;
    return result;
}

// Address range: 0x235964 - 0x235966
int64_t function_235964(int64_t a1, int64_t a2, int64_t a3) {
    // 0x235964
    int64_t result; // 0x235964
    *(int32_t *)a3 = (int32_t)(result | a3);
    return result;
}

// Address range: 0x235994 - 0x2359d4
int64_t function_235994(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 28); // 0x235994
    uint32_t v2 = *v1; // 0x235994
    int64_t v3; // 0x235994
    uint32_t v4 = (int32_t)v3; // 0x235994
    int32_t v5 = v2 + v4; // 0x235994
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x235994
    *v1 = v5;
    bool v7; // 0x235994
    int64_t v8 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v5 < v2) | 64 * (int64_t)(v5 == 0) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v2 % 16 + v4 % 16 > 15) | 2048 * (int64_t)(((v5 ^ v2) & (v5 ^ v4)) < 0) | 4 * (int64_t)(v6 % 2 == 0) | 2; // bp-8, 0x23599d
    *(int64_t *)((v3 + (int64_t)&v8 & 0xffffffff) - 8) = -9;
    uint64_t v9 = unknown_24574eb1(); // 0x2359a9
    char * v10 = (char *)(v9 + 0x250b000); // 0x2359b0
    *v10 = *v10 + (char)v9;
    char * v11 = (char *)(v3 + 0x3301e800); // 0x2359b6
    *v11 = *v11 + (char)(v9 / 256);
    int64_t v12; // 0x235994
    uint32_t v13 = *(int32_t *)&v12; // 0x2359bc
    uint32_t v14 = v13 + (int32_t)a1; // 0x2359bc
    *(int32_t *)a3 = v14;
    int64_t v15 = v9 + 0xbe1c4ab2 + (int64_t)(v14 < v13); // 0x2359be
    *(char *)a1 = __asm_insb((int16_t)a3);
    char v16 = (char)v15 & -10 ^ -10; // 0x2359d0
    return v15 & 0xffff0000 | (int64_t)v16 | 0x4000 * (int64_t)(v16 == 0) | 0x8000 * (int64_t)(v16 < 0) | 1024 * (int64_t)(llvm_ctpop_i8(v16) % 2 == 0) | 512;
}

// Address range: 0x2359d4 - 0x2359d5
int64_t function_2359d4(void) {
    // 0x2359d4
    int64_t result; // 0x2359d4
    return result;
}

// Address range: 0x2359de - 0x2359df
int64_t function_2359de(void) {
    // 0x2359de
    int64_t result; // 0x2359de
    return result;
}

// Address range: 0x2359f2 - 0x235a0b
int64_t function_2359f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2359f2
    int64_t v1; // 0x2359f2
    bool v2; // 0x2359f2
    if (true == !v2) {
        v1 = function_2359de();
    }
    int32_t * v3 = (int32_t *)(a4 - 14); // 0x2359f6
    uint32_t v4 = *v3; // 0x2359f6
    int64_t v5; // 0x2359f2
    uint32_t v6 = v4 + (int32_t)v5; // 0x2359f6
    *v3 = v6;
    int64_t result = v1 + 0xbb2c97e8 + (int64_t)(v6 < v4) & 0xffffffff; // 0x2359fa
    char * v7 = (char *)(result - 0x173aa869); // 0x2359ff
    *v7 = *v7 + (char)v5;
    *v3 = *v3 + (int32_t)a2;
    return result;
}

// Address range: 0x235a33 - 0x235a40
int64_t function_235a33(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    // 0x235a33
    __asm_out_133((int16_t)a3, (char)unknown_1cbe5239());
    int64_t v1; // 0x235a33
    int64_t v2 = (int64_t)&v1 + a1 & 0xffffffff; // 0x235a3a
    *(int64_t *)(v2 - 8) = v2;
    return result;
}

// Address range: 0x235a61 - 0x235a77
int64_t function_235a61(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 13); // 0x235a61
    int32_t v2 = *v1; // 0x235a61
    int32_t v3 = a3; // 0x235a61
    int32_t v4 = v2 + v3; // 0x235a61
    *v1 = v4;
    if (a4 == 1 == (v4 < 0 != ((v4 ^ v2) & (v4 ^ v3)) < 0)) {
        // 0x235a6b
        return unknown_ffffffffc51e0375();
    }
    // 0x235ac0
    int64_t v5; // 0x235a61
    return v5 & -256 | 23;
}

// Address range: 0x235a80 - 0x235a9a
int64_t function_235a80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = a4; // 0x235a80
    int64_t v2; // 0x235a80
    int32_t v3 = *(int32_t *)(v2 - 0x770fb3c6); // 0x235a80
    bool v4; // 0x235a80
    int32_t v5 = v4; // 0x235a80
    int32_t v6 = v3 + v1 + v5; // 0x235a80
    int32_t v7 = v6 + v5; // 0x235a80
    *(int32_t *)(int64_t)v6 = (int32_t)a1;
    if (v6 < 0 == ((v7 ^ v1) & (v7 ^ v3)) < 0 == (v6 != 0)) {
        function_235b06();
    }
    // 0x235a8a
    return unknown_26b14193();
}

// Address range: 0x36c91b - 0x36c921
int64_t function_36c91b(void) {
    char v1 = *(char *)-0x7ef838de; // 0x36c91b
    int64_t result; // 0x36c91b
    *(char *)-0x7ef838de = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x36c92c - 0x36c936
int64_t function_36c92c(int64_t a1) {
    // 0x36c92c
    int64_t result; // 0x36c92c
    *(int32_t *)-0x6778fec2ffff4c1a = (int32_t)result;
    return result;
}

// Address range: 0x36c984 - 0x36c986
int64_t function_36c984(int64_t a1, int64_t a2) {
    // 0x36c984
    return a2 & 0xffffffff;
}

// Address range: 0x36c991 - 0x36c9e6
int64_t function_36c991(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 0x28013dfc); // 0x36c991
    int64_t v2; // 0x36c991
    *v1 = *v1 + (char)v2;
    char * v3 = (char *)(v2 - 19); // 0x36c99d
    *v3 = *v3 + (char)(v2 / 256);
    int32_t v4 = __asm_in((int16_t)a3); // 0x36c9a7
    uint64_t v5 = (int64_t)v4; // 0x36c9a7
    char * v6 = (char *)(a2 + 0x3d0093b3); // 0x36c9a8
    *v6 = *v6 + (char)(v5 / 256);
    float80_t v7; // 0x36c991
    *(float32_t *)(4 * v5 + a3) = (float32_t)v7;
    int64_t v8; // 0x36c991
    int32_t v9 = *(int32_t *)&v8; // 0x36c9be
    char * v10 = (char *)(a3 + 104); // 0x36c9c0
    *v10 = *v10 | (char)v4 & -35;
    char * v11 = (char *)(int64_t)(v9 | (int32_t)a3 - 0x637677c6); // 0x36c9c3
    *v11 = *v11 + (char)a4;
    int32_t * v12 = (int32_t *)(a2 + 0x936b9c2); // 0x36c9ce
    *v12 = *v12 + 1;
    return function_ffffffff80380710();
}

// Address range: 0x36c9f5 - 0x36ca01
int64_t function_36c9f5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x36c9f5
    return function_4a12cd91();
}

// Address range: 0x36ca36 - 0x36ca3d
int64_t function_36ca36(int64_t a1) {
    // 0x36ca36
    return unknown_7943ee3c(a1);
}

// Address range: 0x36ca94 - 0x36ca95
int64_t function_36ca94(void) {
    // 0x36ca94
    int64_t result; // 0x36ca94
    return result;
}

// Address range: 0x36cab9 - 0x36cadb
int64_t function_36cab9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char v1 = *(char *)(a4 - 0x63fe17b5); // 0x36cab9
    char v2 = __asm_in_134(54); // 0x36cabf
    int64_t v3; // 0x36cab9
    char * v4 = (char *)((v3 & -256 | (int64_t)v2) + 0x751b600); // 0x36cac1
    *v4 = *v4 + v2;
    char * v5 = (char *)(v3 + 0x5101e800); // 0x36cac7
    *v5 = *v5 + (char)(a4 / 256);
    bool v6; // 0x36cab9
    char * v7 = (char *)(v3 - 0x25f79bea + 4 * (a4 & 0xffffff00 | (int64_t)((char)v6 + (char)a4 - v1))); // 0x36cad1
    *v7 = *v7 + (char)(((int32_t)a4 >> 31) / 256);
    return function_36ca94();
}

// Address range: 0x36cae8 - 0x36caf8
int64_t function_36cae8(int64_t a1, int64_t a2) {
    // 0x36cae8
    unknown_fffffffff3fd98ee(a1, a2);
    return function_ffffffffe925f6fa();
}

// Address range: 0x36caf8 - 0x36cb9d
int64_t function_36caf8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x36caf8
    int64_t v1; // 0x36caf8
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = a4;
    int64_t v5 = a2;
    int32_t * v6 = (int32_t *)(a3 - 67); // 0x36caf8
    *v6 = *v6 + (int32_t)a2;
    __asm_outsd((int16_t)a3, *(int32_t *)&v5);
    uint64_t v7 = v2 / 256; // 0x36cafd
    unsigned char v8 = (char)v7; // 0x36cafd
    int64_t v9 = (v3 - v7) % 256 | v3 & -256; // 0x36cafd
    if ((char)v3 < v8) {
        int32_t * v10 = (int32_t *)v9; // 0x36cb01
        *v10 = (int32_t)((char)v3 < v8) + (int32_t)a3 + *v10;
        return function_ffffffffab441406(0x1e8c2a4);
    }
    char * v11 = (char *)(v9 - 0x4c9e553c); // 0x36cb78
    *v11 = *v11 | (char)v2;
    int64_t v12 = unknown_ffffffffc4ad1286(); // 0x36cb80
    int64_t result = v4 & 0xffffffff; // 0x36cb88
    char * v13 = (char *)(a3 & 0xff00 & v2 | a3 & -0xff01); // 0x36cb89
    *v13 = *v13 + v8;
    uint32_t v14 = (int32_t)v12 % 32; // 0x36cb93
    if (v14 != 0) {
        uint32_t v15 = *(int32_t *)&v4; // 0x36cb93
        *(int32_t *)result = v15 >> 32 - v14 | v15 << v14;
    }
    return result;
}

// Address range: 0x36cbc4 - 0x36cbd7
int64_t function_36cbc4(void) {
    int64_t result = unknown_110acdca(); // 0x36cbc4
    int64_t v1; // 0x36cbc4
    *(int32_t *)(v1 + 0x75147396) = (int32_t)v1;
    bool v2; // 0x36cbc4
    if (v2) {
        // 0x36cbd2
        return result + 0xff2660d6 & 0xffffffff;
    }
    // 0x36cbd1
    return result;
}

// Address range: 0x36cbd8 - 0x36cc0a
int64_t function_36cbd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x36cbd8
    int64_t v1; // 0x36cbd8
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)((v2 & 0xffffffff) + 45); // 0x36cbdb
    *v3 = *v3 + (int32_t)v2;
    *(char *)0x5b37dae5 = *(char *)0x5b37dae5 + (char)(v2 / 256);
    uint32_t result = *(int32_t *)(a1 + 0x289105fe); // 0x36cbe4
    char v4 = *(char *)0x776d2e9f; // 0x36cbeb
    *(int32_t *)0x2b69cd35 = result;
    int32_t v5 = __asm_insd((int16_t)(a3 & 0xff00 | (int64_t)((char)a3 - v4))); // 0x36cc07
    *(int32_t *)a1 = v5;
    return result;
}

// Address range: 0x36cc32 - 0x36cc34
int64_t function_36cc32(int64_t a1) {
    // 0x36cc32
    int64_t result; // 0x36cc32
    return result;
}

// Address range: 0x36cc39 - 0x36cc3c
int64_t function_36cc39(int64_t a1) {
    // 0x36cc39
    int64_t result; // 0x36cc39
    return result;
}

// Address range: 0x36cc7e - 0x36cc7f
int64_t function_36cc7e(int64_t a1) {
    // 0x36cc7e
    int64_t result; // 0x36cc7e
    return result;
}

// Address range: 0x36cc84 - 0x36cc9d
int64_t function_36cc84(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 8); // 0x36cc92
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x36cc84
    return v2 & -256 | (int64_t)*(char *)0x1e8b1638e74352a;
}

// Address range: 0x36cc9d - 0x36cca3
int64_t function_36cc9d(void) {
    // 0x36cc9d
    return function_ffffffff87fbab8b();
}

// Address range: 0x36ccab - 0x36ccce
int64_t function_36ccab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36ccab
    int64_t v1; // 0x36ccab
    int32_t * v2 = (int32_t *)(v1 + 0x3a9a97de); // 0x36ccad
    *v2 = *v2 + (int32_t)v1;
    *(char *)(a1 + 0x1e802b2) = (char)a4;
    int64_t v3 = unknown_671d33ca(); // 0x36ccc4
    return (v3 + 13) % 256 | v3 & -256;
}

// Address range: 0x36cd89 - 0x36cd8c
int64_t function_36cd89(void) {
    // 0x36cd89
    int64_t result; // 0x36cd89
    return result;
}

// Address range: 0x36cd8e - 0x36cd8f
int64_t function_36cd8e(void) {
    // 0x36cd8e
    int64_t result; // 0x36cd8e
    return result;
}

// Address range: 0x36cdd9 - 0x36cddc
int64_t function_36cdd9(void) {
    // 0x36cdd9
    int64_t result; // 0x36cdd9
    return result;
}

// Address range: 0x36ce38 - 0x36ce44
int64_t function_36ce38(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 0x20392362); // 0x36ce3d
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x36ce38
    return result;
}

// Address range: 0x36ceb1 - 0x36ceb9
int64_t function_36ceb1(int64_t a1) {
    // 0x36ceb1
    *(char *)a1 = 0;
    int64_t v1; // 0x36ceb1
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x36ceba - 0x36ced2
int64_t function_36ceba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36ceba
    unknown_ffffffffbe59f4c4();
    *(int32_t *)-0x38c74894 = *(int32_t *)-0x38c74894 + 0x3d01e81e;
    int64_t v1; // 0x36ceba
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a4;
    return function_36cf09();
}

// Address range: 0x36cee5 - 0x36ceff
int64_t function_36cee5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffd3ee3eeb(); // 0x36cee5
    int64_t v2 = unknown_ffffffff9a8e7ff4(); // 0x36ceee
    int64_t result = (v2 - (((char)(v1 + a3 / 256) ^ -4) < 156 ? 233 : 232)) % 256 | v2 & -256; // 0x36cef8
    int32_t * v3 = (int32_t *)(8 * a4 + 19 + result); // 0x36cefa
    *v3 = *v3 + (int32_t)a1;
    return result;
}

// Address range: 0x36ceff - 0x36cf09
int64_t function_36ceff(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x36ceff
    int64_t v1; // 0x36ceff
    char * v2 = (char *)(2 * a4 + 7 + v1); // 0x36ceff
    *v2 = *v2 - (char)(a4 / 256);
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x36cf09 - 0x36cf0a
int64_t function_36cf09(void) {
    // 0x36cf09
    int64_t result; // 0x36cf09
    return result;
}

// Address range: 0x36cf18 - 0x36cf19
int64_t function_36cf18(void) {
    // 0x36cf18
    int64_t result; // 0x36cf18
    return result;
}

// Address range: 0x36cf71 - 0x36cf93
int64_t function_36cf71(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 2 * a3; // 0x36cf71
    int64_t v2; // 0x36cf71
    __asm_out_133((int16_t)v1, (char)v2);
    int64_t v3 = unknown_371cf27a(); // 0x36cf74
    char * v4 = (char *)(v3 + 0x7823800); // 0x36cf79
    *v4 = *v4 + (char)v3;
    int32_t * v5 = (int32_t *)(v1 & 0xfffffffe | 1); // 0x36cf81
    *v5 = *v5 + (int32_t)v2;
    unknown_ffffffffc0b5098f();
    int64_t v6; // 0x36cf71
    uint64_t v7 = v6;
    *(char *)v7 = *(char *)&v6 + (char)(v7 / 256);
    return function_ffffffff9e1c4676();
}

// Address range: 0x36cfd6 - 0x36cff7
int64_t function_36cfd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x7db7ff32); // 0x36cfd6
    int64_t v2; // 0x36cfd6
    *v1 = *v1 ^ (int32_t)v2;
    int32_t * v3 = (int32_t *)(((a4 & 0xff00) + a4 & 0xff00 | a4 & -0xff01) - 10); // 0x36cfec
    *v3 = *v3 + (int32_t)a3;
    char * v4 = (char *)(a2 - 0x743c1874); // 0x36cfef
    *v4 = *v4 - 1;
    return (int64_t)*(int32_t *)-0x347c1f7a02ddfe18;
}

// Address range: 0x36d0a1 - 0x36d0a4
int64_t function_36d0a1(int64_t a1) {
    // 0x36d0a1
    int64_t result; // 0x36d0a1
    return result;
}

// Address range: 0x36d1ed - 0x36d1ee
int64_t function_36d1ed(void) {
    // 0x36d1ed
    int64_t result; // 0x36d1ed
    return result;
}

// Address range: 0x36d20d - 0x36d217
int64_t function_36d20d(void) {
    // 0x36d20d
    return function_36d1ed();
}

// Address range: 0x36d23f - 0x36d267
int64_t function_36d23f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x36d23f
    int64_t v1; // 0x36d23f
    unsigned char v2 = (char)v1;
    *(char *)v1 = v2 / 128 | 2 * v2;
    int64_t v3 = v1 & 0x457cd657 | 0xba8329a8; // 0x36d248
    unknown_6b422a57();
    if (*(char *)v3 <= (char)v3) {
        // 0x36d258
        return __asm_in_135(70);
    }
    // 0x36d263
    int64_t v4; // 0x36d23f
    *(int32_t *)v4 = *(int32_t *)&v4 + (int32_t)a2;
    return function_36d2bb(a1, a2, a3);
}

// Address range: 0x36d267 - 0x36d27c
int64_t function_36d267(int64_t a1, int64_t a2, int64_t a3) {
    // 0x36d267
    int64_t result; // 0x36d267
    *(char *)0x3d2dc2f401e8e68c = (char)result;
    return result;
}

// Address range: 0x36d2bb - 0x36d2bd
int64_t function_36d2bb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x36d2bb
    int64_t result; // 0x36d2bb
    return result;
}

// Address range: 0x36d2be - 0x36d2c2
int64_t function_36d2be(int64_t a1) {
    // 0x36d2be
    int64_t v1; // 0x36d2be
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}
