/*
 * Targeted RetDec C for native executable gap queue batch 364.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2faa1e-0x2fac1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e2296-0x3e2496 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e2496-0x3e2696 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e2696-0x3e2896 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e2896-0x3e2a96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45fa34-0x45fc34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45fe34-0x460034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x460234-0x460434 rank=- name=- kind=- bytes=- uncovered=-
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
void __writegsbyte(int64_t offset, uint8_t value);
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
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
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

int64_t function_1e16244();
int64_t function_2c7d2675();
int64_t function_2faa1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_2faba4(void);
int64_t function_3e226c();
int64_t function_3e2296(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e22bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e22c7(void);
int64_t function_3e22cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e22d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e231f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e232f(int64_t a1);
int64_t function_3e2360(void);
int64_t function_3e2362(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e236b(int64_t a1);
int64_t function_3e23c1(int64_t a1);
int64_t function_3e23d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e244a(void);
int64_t function_3e2462(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e2472(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e24b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e24bc(void);
int64_t function_3e2558(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3e2596(int64_t a1);
int64_t function_3e25c1(void);
int64_t function_3e25d6(void);
int64_t function_3e25d9(int64_t a1);
int64_t function_3e25e9(void);
int64_t function_3e261e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e2685(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3e26ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e2731(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_3e2767(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_3e27e0(void);
int64_t function_3e2805(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e292c(void);
int64_t function_3e2962(void);
int64_t function_3e2967(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3e2a23(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_45fa34(void);
int64_t function_45fa74(void);
int64_t function_45fa78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45faae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_45fbee(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_45fe34(int64_t a1, int64_t a2);
int64_t function_45fe4c(void);
int64_t function_45fe61(void);
int64_t function_45fe79(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45fed3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45ff66(void);
int64_t function_45ff6c(void);
int64_t function_45ff6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_460234(int64_t a1, int64_t a2, int64_t a3);
int64_t function_460256(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_460274(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4602ac(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_4602fd(void);
int64_t function_460302(void);
int64_t function_460313(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_706e9e6c();
int64_t function_7d9277ff();
int64_t function_caf2a();
int64_t function_ffffffff8b198cff();
int64_t function_ffffffffb77f72dd();
int64_t function_ffffffffbad36e73();
int64_t function_ffffffffcaaa19f6();
int64_t function_ffffffffdf53415c();
int64_t function_ffffffffed4fff81();
int64_t function_ffffffffeeb58d8e();
int64_t unknown_ffffffffabd4a126();

// Address range: 0x2faa1e - 0x2fab51
int64_t function_2faa1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x2faa1e
    int64_t v1; // 0x2faa1e
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x2faa1e
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t v5; // 0x2faa1e
    int64_t v6 = (int64_t)&v5; // 0x2faaaf
    int64_t * v7 = (int64_t *)(v6 - 8); // 0x2faadd
    *(int64_t *)(v6 + 32) = v5;
    *v7 = a1;
    *(int64_t *)(v6 - 16) = a6;
    v5 = v6 + 16;
    *(int64_t *)(v6 + 8) = v6 + 24;
    return function_caf2a(*v7);
}

// Address range: 0x2faba4 - 0x2faba7
int64_t function_2faba4(void) {
    // 0x2faba4
    int64_t result; // 0x2faba4
    return result;
}

// Address range: 0x3e2296 - 0x3e22b7
int64_t function_3e2296(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e2296
    int64_t v1; // 0x3e2296
    int64_t v2 = v1;
    __asm_outsd((int16_t)a3, (int32_t)v1);
    bool v3; // 0x3e2296
    int64_t v4 = ((v2 ^ 128) + (int64_t)v3) % 256 | v2 & -256; // 0x3e2297
    int64_t v5 = v4; // bp-8, 0x3e2299
    int64_t v6 = (int32_t)v1 > (int32_t)v4 ? 0x198c7507 : 0x198c7506; // 0x3e229b
    char * v7 = (char *)((v4 - v6 & 0xffffffff) - 0x1a019764); // 0x3e22a0
    *v7 = *v7 & (char)(v1 / 256);
    char * v8 = (char *)(a2 + 41 + 2 * v1); // 0x3e22ad
    *v8 = *v8 ^ (char)(int64_t)&v5;
    int64_t v9; // bp-3, 0x3e2296
    return (int64_t)&v9;
}

// Address range: 0x3e22bc - 0x3e22c6
int64_t function_3e22bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e22bc
    int64_t v1; // 0x3e22bc
    int64_t v2 = v1;
    return (v2 + 221) % 256 | v2 & -256;
}

// Address range: 0x3e22c7 - 0x3e22cb
int64_t function_3e22c7(void) {
    // 0x3e22c7
    int64_t result; // 0x3e22c7
    bool v1; // 0x3e22c7
    if (!v1) {
        result = function_3e226c();
    }
    // 0x3e231e
    return result;
}

// Address range: 0x3e22cb - 0x3e22ce
int64_t function_3e22cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e22cb
    int64_t result; // 0x3e22cb
    return result;
}

// Address range: 0x3e22d2 - 0x3e2307
int64_t function_3e22d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x3e22d2
    *(int32_t *)a1 = (int32_t)v2;
    bool v3; // 0x3e22d2
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0x3e22d2
    int64_t v5 = v2 & -0xff01 | 0x4000 * (int64_t)v3 | 0x1000 * (int64_t)v3 | 512; // 0x3e22d5
    int32_t * v6 = (int32_t *)(v2 - 99); // 0x3e22dc
    *v6 = (int32_t)v5 | 0x46d28f47;
    *(char *)v4 = *(char *)&v1;
    int32_t v7 = *(int32_t *)(int64_t)(0x10000 * *v6 >> 16); // 0x3e22e6
    uint32_t v8 = *(int32_t *)-0x7d803e6b6d93bfe4; // 0x3e22e8
    *(char *)-0x17299c00 = *(char *)-0x17299c00 - (char)(v8 / 256);
    int32_t v9 = __asm_insd((int16_t)(v7 + (int32_t)a3)); // 0x3e22fe
    *(int32_t *)(v4 + (v3 ? -1 : 1)) = v9;
    return function_706e9e6c();
}

// Address range: 0x3e231f - 0x3e232c
int64_t function_3e231f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e231f
    int64_t v1; // 0x3e231f
    uint64_t v2 = v1;
    __asm_outsb((int16_t)a3, (char)v1);
    char v3 = *(char *)(a3 - 15); // 0x3e2327
    __asm_int(47);
    bool v4; // 0x3e231f
    return 256 * (int64_t)((char)v4 + (char)(v2 / 256) + v3) | v2 & -0xff01;
}

// Address range: 0x3e232f - 0x3e2336
int64_t function_3e232f(int64_t a1) {
    // 0x3e232f
    int64_t result; // 0x3e232f
    int32_t * v1 = (int32_t *)(result - 0x1c8b45ff); // 0x3e232f
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3e2360 - 0x3e2361
int64_t function_3e2360(void) {
    // 0x3e2360
    int64_t result; // 0x3e2360
    return result;
}

// Address range: 0x3e2362 - 0x3e236b
int64_t function_3e2362(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e2362
    int64_t result; // 0x3e2362
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x3e236b - 0x3e2380
int64_t function_3e236b(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 0xe8f503a); // 0x3e236b
    int64_t v2; // 0x3e236b
    *v1 = *v1 & (int32_t)v2;
    char * v3 = (char *)(a1 + 0x4b183a2f); // 0x3e2371
    *v3 = *v3 >> 1;
    return function_3e23d3(a1, v2, v2, v2);
}

// Address range: 0x3e23c1 - 0x3e23c4
int64_t function_3e23c1(int64_t a1) {
    // 0x3e23c1
    int64_t result; // 0x3e23c1
    return result;
}

// Address range: 0x3e23d3 - 0x3e23f3
int64_t function_3e23d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e23d3
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    __asm_iretd();
    int64_t v1; // 0x3e23d3
    int32_t * v2 = (int32_t *)((int64_t)(0x30ff3267 * *(int32_t *)&v1) - 0x2ae14ddc); // 0x3e23ed
    *v2 = *v2 & (int32_t)a4;
    return a4 & 0xffffffff;
}

// Address range: 0x3e244a - 0x3e244b
int64_t function_3e244a(void) {
    // 0x3e244a
    int64_t result; // 0x3e244a
    return result;
}

// Address range: 0x3e2462 - 0x3e2472
int64_t function_3e2462(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e2462
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x3e2462
    char v2 = *(char *)&v1; // 0x3e2463
    int64_t v3; // 0x3e2462
    bool v4; // 0x3e2462
    *(char *)a4 = (char)v4 + (char)((uint64_t)v3 / 256) + v2;
    if ((*(int32_t *)(a1 + 0x75142561) & (int32_t)a1) >= 0) {
        function_3e244a();
    }
    // 0x3e246d
    return function_ffffffffeeb58d8e();
}

// Address range: 0x3e2472 - 0x3e247a
int64_t function_3e2472(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e2472
    int64_t v1; // 0x3e2472
    return v1 ^ 200;
}

// Address range: 0x3e24b4 - 0x3e24bc
int64_t function_3e24b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e24b4
    int64_t v1; // 0x3e24b4
    int64_t result = v1;
    *(char *)result = (char)result + (char)a4;
    int64_t v2; // 0x3e24b4
    *(int32_t *)a1 = *(int32_t *)&v2;
    return result;
}

// Address range: 0x3e24bc - 0x3e24bf
int64_t function_3e24bc(void) {
    // 0x3e24bc
    int64_t result; // 0x3e24bc
    return result;
}

// Address range: 0x3e2558 - 0x3e258b
int64_t function_3e2558(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3e2558
    *(char *)-0x74e7d9e1 = *(char *)-0x74e7d9e1 + (char)(a4 / 256);
    int64_t v1; // 0x3e2558
    char * v2 = (char *)(a2 + 96 + 2 * v1); // 0x3e256e
    *v2 = *v2 / 4;
    unsigned char v3 = (char)a4 % 32; // 0x3e2573
    if (v3 != 0) {
        char * v4 = (char *)(a3 + 3); // 0x3e2573
        *v4 = *v4 >> v3;
    }
    return __asm_in(-68);
}

// Address range: 0x3e2596 - 0x3e2599
int64_t function_3e2596(int64_t a1) {
    // 0x3e2596
    int64_t result; // 0x3e2596
    return result;
}

// Address range: 0x3e25c1 - 0x3e25c2
int64_t function_3e25c1(void) {
    // 0x3e25c1
    int64_t result; // 0x3e25c1
    return result;
}

// Address range: 0x3e25d6 - 0x3e25d8
int64_t function_3e25d6(void) {
    // 0x3e25d6
    int64_t v1; // 0x3e25d6
    return function_3e261e(v1, v1, v1);
}

// Address range: 0x3e25d9 - 0x3e25df
int64_t function_3e25d9(int64_t a1) {
    // 0x3e25d9
    return function_1e16244(a1);
}

// Address range: 0x3e25e9 - 0x3e25ea
int64_t function_3e25e9(void) {
    // 0x3e25e9
    int64_t result; // 0x3e25e9
    return result;
}

// Address range: 0x3e261e - 0x3e2622
int64_t function_3e261e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e261e
    int64_t v1; // 0x3e261e
    __asm_outsb((int16_t)a3, (char)v1);
    int64_t result; // 0x3e261e
    bool v2; // 0x3e261e
    if (v2) {
        result = function_3e25c1();
    }
    // 0x3e2622
    return result;
}

// Address range: 0x3e2685 - 0x3e2696
int64_t function_3e2685(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x3e2685
    int64_t v1; // 0x3e2685
    int64_t v2 = v1;
    *(char *)v2 = (char)(v2 & a3 / 256);
    int64_t v3 = v1 & -256; // 0x3e268c
    unsigned char v4 = *(char *)(a2 - 0x1e0827f8) ^ *(char *)(v1 % 256 + v2); // 0x3e268d
    return v3 | (int64_t)(v4 | *(char *)(v3 | (int64_t)v4));
}

// Address range: 0x3e26ab - 0x3e26ae
int64_t function_3e26ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e26ab
    int64_t result; // 0x3e26ab
    return result;
}

// Address range: 0x3e2731 - 0x3e2748
int64_t function_3e2731(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    char * v1 = (char *)(a4 + 67); // 0x3e2731
    int64_t v2; // 0x3e2731
    *v1 = *v1 | (char)((uint64_t)v2 / 256);
    *(int864_t *)(a3 - 19) = (int864_t)__asm_fnsave();
    int64_t v3 = 126; // bp-8, 0x3e2739
    char * v4 = (char *)(a4 + 0x3ada0f3f + (int64_t)&v3); // 0x3e273b
    *v4 = *v4 & (char)a3;
    int64_t v5; // 0x3e2731
    *(int32_t *)a3 = *(int32_t *)&v5 - (int32_t)a1;
    return result;
}

// Address range: 0x3e2767 - 0x3e276d
int64_t function_3e2767(int64_t a1, int64_t a2, uint64_t a3) {
    char * v1 = (char *)(a3 + 58); // 0x3e2767
    *v1 = *v1 + (char)(a3 / 256);
    int64_t result; // 0x3e2767
    return result;
}

// Address range: 0x3e27e0 - 0x3e27e1
int64_t function_3e27e0(void) {
    // 0x3e27e0
    int64_t result; // 0x3e27e0
    return result;
}

// Address range: 0x3e2805 - 0x3e28e6
int64_t function_3e2805(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e2805
    int64_t result; // 0x3e2805
    __asm_out(90, (int32_t)result);
    if ((result & 0xec77caa) == 0) {
        // 0x3e280e
        return a4 & 0xffffffff;
    }
    uint32_t v1 = (int32_t)a4 + 0x4dc5c8b1; // 0x3e284c
    unsigned char v2 = llvm_ctpop_i8((char)v1); // 0x3e284c
    __asm_out_133(63, (char)result);
    if (v1 == 0) {
        if (v2 % 2 != 0) {
            // 0x3e28a6
            return function_ffffffffcaaa19f6();
        }
        // 0x3e283d
        return result;
    }
    if (v2 % 2 != 0) {
        function_3e27e0();
    }
    int32_t v3 = a1;
    *(int32_t *)a1 = v3;
    char v4 = *(char *)((a1 & 0xffffffff) - 94); // 0x3e285f
    int64_t v5 = *(int64_t *)(result + 8); // 0x3e2867
    return __asm_wait(v5, v3, a3 & -256 | (int64_t)(v4 | (char)a3), (int64_t)v1) + 0x2b99f69f & 0xffffffff;
}

// Address range: 0x3e292c - 0x3e2931
int64_t function_3e292c(void) {
    // 0x3e292c
    return function_ffffffffed4fff81();
}

// Address range: 0x3e2962 - 0x3e2967
int64_t function_3e2962(void) {
    // 0x3e2962
    return function_ffffffffbad36e73();
}

// Address range: 0x3e2967 - 0x3e2a03
int64_t function_3e2967(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t result; // 0x3e2967
    bool v3; // 0x3e2967
    if (v3) {
        int32_t * v4 = (int32_t *)(result + 98); // 0x3e2969
        *v4 = *v4 ^ (int32_t)a6;
        return result;
    }
    uint64_t v5 = a4 - 1; // 0x3e29e9
    int64_t v6; // bp-8, 0x3e2967
    if (v5 != 0 != v3) {
        // 0x3e29eb
        v6 = a2;
        char v7 = a3 / 256; // 0x3e29f4
        char v8 = v5 / 256; // 0x3e29f4
        char v9 = v8 + v7; // 0x3e29f4
        int64_t result2 = unknown_ffffffffabd4a126((v3 ? -8 : 8) + a1); // 0x3e29f6
        if (v9 < 0 == ((v9 ^ v7) & (v9 ^ v8)) < 0) {
            // 0x3e2987
            return result2;
        }
        // 0x3e29df
        return result2 ^ 256 * ((v3 ? 247 : 9) + a2) & 0xff00;
    }
    int64_t result3 = result & 0xffffffff; // 0x3e29e8
    int64_t v10 = a4 - 2; // 0x3e2996
    if (v10 != 0 && !v3) {
        // 0x3e2987
        return result3;
    }
    // 0x3e2998
    v6 = 78;
    char * v11 = (char *)(result3 + 32); // 0x3e299a
    char v12 = result / 256; // 0x3e299a
    *v11 = *v11 ^ v12;
    int64_t v13 = (int64_t)(*(int32_t *)(result - 2) & (int32_t)v10); // 0x3e299e
    int16_t v14 = a3; // 0x3e29a1
    __asm_out_134(v14, (char)result);
    int64_t v15 = (int64_t)&v6;
    *(int64_t *)(v15 - 8) = a3;
    char v16 = 38 * (char)*(int32_t *)(v1 - 18); // 0x3e29a7
    int32_t v17 = __asm_in(96); // 0x3e29a9
    int64_t v18 = v15 - 16; // 0x3e29ab
    *(int64_t *)v18 = v13;
    while (v16 >= 81) {
        if (v16 > 81) {
            // 0x3e2a00
            return __asm_wait(v2, (int32_t)v1, a3, v13);
        }
        uint64_t v19 = (int64_t)v17; // 0x3e29a9
        char * v20 = (char *)v19; // 0x3e29b1
        *v20 = *v20 + (char)v17;
        unsigned char v21 = *(char *)&v2; // 0x3e29b6
        unsigned char v22 = v21 + (char)(v19 / 256); // 0x3e29b6
        *(char *)v2 = v22;
        int64_t v23 = (int64_t)(v22 < v21) - v13 + __asm_sti(); // 0x3e29b9
        if (llvm_ctpop_i8((char)v23 - 18) % 2 != 0) {
            // 0x3e29bf
            return v23 & 0xffffffff;
        }
        v15 = v18;
        *(int64_t *)(v15 - 8) = a3;
        v16 = 38 * (char)*(int32_t *)(v1 - 18);
        v17 = __asm_in(96);
        v18 = v15 - 16;
        *(int64_t *)v18 = v13;
    }
    // 0x3e29c5
    *(int64_t *)(v15 - 24) = 0x1de84ea7;
    char * v24 = (char *)(a3 + 111 + (4 * result & 0x3fffffffc)); // 0x3e29ca
    *v24 = *v24 + -1 - v12;
    __asm_outsb(v14, *(char *)&v1);
    *(int32_t *)v2 = *(int32_t *)&v2 + (int32_t)a3;
    return function_ffffffffb77f72dd();
}

// Address range: 0x3e2a23 - 0x3e2a96
int64_t function_3e2a23(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3e2a23
    int64_t v1; // 0x3e2a23
    bool v2; // 0x3e2a23
    unsigned char v3 = (char)(v1 / 256) - (char)a4 + (char)v2; // 0x3e2a23
    if (a4 != 1 != (v3 == 0)) {
        char * v4 = (char *)(a4 - 0x1e68c5b1); // 0x3e2a2c
        *v4 = *v4 / 2;
        return 256 * (int64_t)v3 | v1 & -0xff01;
    }
    int32_t v5 = *(int32_t *)0x6f11773c; // 0x3e2a77
    unsigned char v6 = *(char *)(v1 + 24) + 54; // 0x3e2a7a
    int64_t result = (int64_t)v6 | 0x2ee1f200; // 0x3e2a7a
    *(int64_t *)(2 * a2 + 0x11d69cfa + (int64_t)(v5 & (int32_t)a1)) = a2;
    if (v6 < 54) {
        // 0x3e2aaa
        return result;
    }
    char * v7 = (char *)(result + 0xa590866); // 0x3e2a87
    *v7 = *v7 & (char)a3;
    return result;
}

// Address range: 0x45fa34 - 0x45fa38
int64_t function_45fa34(void) {
    // 0x45fa34
    int64_t v1; // 0x45fa34
    int64_t v2 = v1;
    return (v2 + 252) % 256 | v2 & -256;
}

// Address range: 0x45fa74 - 0x45fa76
int64_t function_45fa74(void) {
    // 0x45fa74
    int64_t result; // 0x45fa74
    return result;
}

// Address range: 0x45fa78 - 0x45fa7e
int64_t function_45fa78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 6); // 0x45fa78
    int64_t result; // 0x45fa78
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x45faae - 0x45fbec
int64_t function_45faae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2 = a5;
    int64_t v3; // 0x45faae
    bool v4; // 0x45faae
    if (!v4) {
        char v5 = v3; // 0x45fab0
        *(char *)0xe4f8f4f67bd38 = v5;
        char v6 = v3 / 256; // 0x45fab9
        char v7 = v4; // 0x45fab9
        unsigned char v8 = (char)v4; // 0x45fab9
        int64_t result = 256 * (int64_t)v8 | v3 & -0xff01; // 0x45fab9
        if (((v7 + v6 ^ v6) & (v8 - v7 ^ v6)) < 0) {
            // 0x45faf1
            return result;
        }
        char * v9 = (char *)(v3 + 0x5443df10); // 0x45fac2
        *v9 = *v9 | v5;
        int32_t * v10 = (int32_t *)((int64_t)&v2 ^ 113); // 0x45fadb
        *v10 = *v10 + (int32_t)a3;
        return result & 0xffffffff;
    }
    char * v11 = (char *)(a3 - 8 + 2 * a4); // 0x45fb25
    *v11 = *v11 ^ (char)(v3 / 256);
    char * v12 = (char *)((int64_t)*(int32_t *)&v1 + 0x6b961959); // 0x45fb2b
    *v12 = *v12 | (char)v3;
    char v13 = __asm_in_136(30); // 0x45fb32
    int64_t v14 = -0x44eb9680; // bp-24, 0x45fb35
    char v15 = *(char *)(a3 + 110); // 0x45fb3a
    unsigned char v16 = v15 + v13; // 0x45fb3a
    if (v16 < v13) {
        char * v17 = (char *)(a3 + 0x31a767f9); // 0x45fb7c
        *v17 = *v17 - (char)(v3 / 256);
        int16_t v18 = a3; // 0x45fb82
        int32_t result2 = __asm_in_137(v18); // 0x45fb82
        int32_t * v19 = (int32_t *)(a2 - 30); // 0x45fb83
        uint32_t v20 = *v19; // 0x45fb83
        *v19 = v20 / 0x400000 | 1024 * v20;
        *(char *)a1 = __asm_insb(v18);
        return result2;
    }
    char * v21 = (char *)(v3 + 98);
    char v22 = a3;
    bool v23 = v16 < 0; // 0x45faae
    bool v24 = ((v16 ^ v13) & (v16 ^ v15)) < 0;
    bool v25 = v16 == 0; // 0x45faae
    int64_t v26 = (int64_t)&v14; // 0x45faae
    bool v27 = false;
    int64_t v28 = (v3 | (int64_t)v13) & -256 | (int64_t)v16;
    while (v23 == v24 == !v25) {
        char v29 = *(char *)v28; // 0x45fba6
        unsigned char v30 = *v21; // 0x45fba8
        char v31 = v30 + v22; // 0x45fba8
        *v21 = v31;
        int64_t v32 = *(int64_t *)v26; // 0x45fbab
        v1 = v32;
        char * v33 = (char *)(v32 - 20); // 0x45fbac
        char v34 = *v33; // 0x45fbac
        unsigned char v35 = (char)v32 % 32; // 0x45fbac
        char v36 = v31; // 0x45fbac
        bool v37 = ((v31 ^ v30) & (v31 ^ v22)) < 0; // 0x45fbac
        bool v38 = v31 < v30; // 0x45fbac
        if (v35 != 0) {
            v36 = v34 << v35;
            *v33 = v36;
            char v39 = (v34 << v35 - 1) / 128; // 0x45fbac
            v37 = v35 == 1 ? v36 >> 7 != v39 : ((v31 ^ v30) & (v31 ^ v22)) < 0;
            v38 = v39 != 0;
        }
        int64_t v40 = v28 & -256 | (int64_t)((char)v27 + (char)v28 - v29); // 0x45fba6
        v24 = v37;
        char v41 = v36;
        int64_t result3 = v40; // 0x45fbaf
        v23 = v41 < 0;
        v25 = v41 == 0;
        v26 += 8;
        if (v41 < 0 == v24 != v41 != 0) {
            // 0x45faf1
            return result3;
        }
        v27 = v38;
        v28 = v40;
    }
    unsigned char v42 = *(char *)0x78f49c7457e16337; // 0x45fb42
    int64_t v43 = v27 ? 0x11fb0f92 : 0x11fb0f91; // 0x45fb4b
    return (v28 & 0xffffff00 | (int64_t)v42) + v43 & 0xffffffff;
}

// Address range: 0x45fbee - 0x45fc19
int64_t function_45fbee(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x45fbee
    __asm_outsb((int16_t)a3, (char)a2);
    int32_t * v1 = (int32_t *)(a3 - 0x5d854639); // 0x45fbef
    bool v2; // 0x45fbee
    int32_t v3 = (int32_t)v2 - (int32_t)a3 + *v1; // 0x45fbef
    *v1 = v3;
    int64_t v4; // 0x45fbee
    if (v3 != 0) {
        // 0x45fc17
        return v4 & -196;
    }
    int64_t result = v4 & -256 | 57; // 0x45fbfa
    uint32_t v5 = (int32_t)a1; // 0x45fbff
    uint32_t v6 = *(int32_t *)result; // 0x45fbff
    int32_t v7 = v5 - v6; // 0x45fbff
    if (v6 > v5 || v7 == 0) {
        // 0x45fc3c
        return result;
    }
    char * v8 = (char *)(a2 + 0x7b05accc); // 0x45fc03
    char v9 = *v8 | (char)(a4 / 256); // 0x45fc03
    *v8 = v9;
    if (v9 < 1) {
        // 0x45fc3c
        return result;
    }
    // 0x45fc0b
    return function_7d9277ff(v7);
}

// Address range: 0x45fe34 - 0x45fe3c
int64_t function_45fe34(int64_t a1, int64_t a2) {
    // 0x45fe34
    int64_t v1; // 0x45fe34
    int64_t v2 = v1;
    bool v3; // 0x45fe34
    int32_t * v4 = (int32_t *)(8 * v1 + a2 + (v3 ? -4 : 4)); // 0x45fe37
    *v4 = *v4 ^ (int32_t)a1;
    int64_t v5; // 0x45fe34
    *(char *)v5 = *(char *)&v5 / 2;
    return ((v3 ? 91 : 90) + v2) % 256 | v2 & 0xffffff00;
}

// Address range: 0x45fe4c - 0x45fe4d
int64_t function_45fe4c(void) {
    // 0x45fe4c
    int64_t result; // 0x45fe4c
    return result;
}

// Address range: 0x45fe61 - 0x45fe62
int64_t function_45fe61(void) {
    // 0x45fe61
    int64_t result; // 0x45fe61
    return result;
}

// Address range: 0x45fe79 - 0x45fec3
int64_t function_45fe79(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45fe79
    int64_t v1; // 0x45fe79
    unsigned char v2 = (char)v1; // 0x45fe7b
    bool v3; // 0x45fe79
    char v4 = v3; // 0x45fe7b
    unsigned char v5 = v2 - 10 + v4; // 0x45fe7b
    char v6 = v5 + v4; // 0x45fe7b
    if (v5 < 0 == ((v6 ^ v2) & (v6 ^ -128)) < 0) {
        uint16_t v7 = (int16_t)(v1 & 0xff00 | (int64_t)v5); // 0x45fe81
        uint16_t v8 = (int16_t)a2 % 256; // 0x45fe81
        return v1 & 0xffff0000 | (int64_t)(v7 / v8 % 256) | (int64_t)(256 * (v7 % v8));
    }
    // 0x45feb2
    if ((v3 ? v5 <= v2 : v2 > 9 ? 105 : 104) == v5) {
        function_45fe61();
    }
    int64_t v9 = __asm_wait(a1, (int32_t)a2, a3, a4); // 0x45feb6
    *(char *)a1 = (char)a2;
    unsigned char v10 = (char)a4 % 32; // 0x45feba
    if (v10 != 0) {
        char * v11 = (char *)((v3 ? -1 : 1) + a1); // 0x45feba
        unsigned char v12 = *v11; // 0x45feba
        *v11 = v12 >> 8 - v10 | v12 << v10;
    }
    return v9 & -86;
}

// Address range: 0x45fed3 - 0x45fed8
int64_t function_45fed3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45fed3
    int64_t result; // 0x45fed3
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x45ff66 - 0x45ff68
int64_t function_45ff66(void) {
    // 0x45ff66
    int64_t v1; // 0x45ff66
    int64_t result = function_45ff6e(v1, v1, v1, v1, (int64_t)&g6, (int64_t)&g6, (int64_t)&g6); // 0x45ff66
    return result;
}

// Address range: 0x45ff6c - 0x45ff6e
int64_t function_45ff6c(void) {
    // 0x45ff6c
    int64_t v1; // 0x45ff6c
    int64_t v2 = v1;
    bool v3; // 0x45ff6c
    return (v2 - (uint64_t)v1 / 256 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x45ff6e - 0x460034
int64_t function_45ff6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x45ff6e
    __asm_int(86);
    int64_t v1; // 0x45ff6e
    char * v2 = (char *)(8 * v1 + 0x11377143); // 0x45ff74
    *v2 = *v2 ^ (char)v1;
    int64_t v3 = 256 * v1 & 0xff00 | a4 & 0xffffffff; // 0x45ff7e
    int32_t v4 = *(int32_t *)((v1 & 0xffff00ff | (int64_t)(int32_t)&g5) + 55); // 0x45ff7f
    int32_t v5 = v4 & (int32_t)a2; // 0x45ff7f
    int64_t v6 = (int64_t)*(int32_t *)(v3 + 0x250fcd7a); // 0x45ff83
    int64_t v7 = -0x7e927aea * v6; // 0x45ff83
    int64_t result = v3; // 0x45ff8d
    if (v5 < 0 == (v7 != -0x7e927aea00000000 * v6 >> 32)) {
        result = function_ffffffff8b198cff();
    }
    // 0x45ff93
    if (v5 == 0 || v7 != -0x7e927aea00000000 * v6 >> 32) {
        // 0x45ff95
        return result;
    }
    int64_t v8 = v7 & 0xfffffffe; // 0x45ff83
    if (v5 < 0) {
        int32_t * v9 = (int32_t *)(a1 + 88); // 0x45ffdd
        *v9 = 1024 * *v9;
        *(int32_t *)0xf73a298c = __asm_insd((int16_t)*(int64_t *)(v8 + 8));
        return a1 & 0xffffffff;
    }
    char v10 = *(char *)0x17c249f7; // 0x46000b
    char v11 = a3; // 0x46000b
    char v12 = v10 + v11; // 0x46000b
    *(char *)0x17c249f7 = v12;
    *(int64_t *)v8 = v1 & -256 | 52;
    int64_t result2 = __asm_in(-54); // 0x460015
    if (((v12 ^ v10) & (v12 ^ v11)) >= 0) {
        // 0x45ff95
        return result2;
    }
    // 0x46001b
    bool v13; // 0x45ff6e
    int64_t v14 = v13 ? -4 : 4;
    int64_t v15 = v5;
    int64_t v16 = a1; // 0x46002c
    __asm_out_133(45, (char)result2);
    uint32_t v17 = *(int32_t *)v16; // 0x46002c
    v16 += v14;
    int64_t v18 = (int64_t)&g1 | 74; // 0x46002e
    while (*(int32_t *)v15 > v17) {
        // 0x46001b
        v15 += v14;
        __asm_out_133(45, (char)v18);
        v17 = *(int32_t *)v16;
        v16 += v14;
        v18 = (int64_t)&g1 | 74;
    }
    // 0x460031
    return v16 & 0xffffffff;
}

// Address range: 0x460234 - 0x460241
int64_t function_460234(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = __asm_int1(); // 0x46023d
    int64_t v1; // 0x460234
    __asm_outsd(0x5e6f * (int16_t)v1, (int32_t)v1);
    return result;
}

// Address range: 0x460256 - 0x460264
int64_t function_460256(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x460256
    int64_t result; // 0x460256
    return result;
}

// Address range: 0x460274 - 0x460286
int64_t function_460274(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 - 0x42da7b22); // 0x460277
    int64_t v2; // 0x460274
    *v1 = *v1 & (char)((uint64_t)v2 / 256);
    return function_2c7d2675();
}

// Address range: 0x4602ac - 0x4602c4
int64_t function_4602ac(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    // 0x4602ac
    int64_t v1; // 0x4602ac
    *(int32_t *)a1 = (int32_t)(v1 & v1);
    int32_t * v2 = (int32_t *)(a3 - 110); // 0x4602b8
    *v2 = *v2 >> 6;
    return result;
}

// Address range: 0x4602fd - 0x460302
int64_t function_4602fd(void) {
    // 0x4602fd
    return function_2c7d2675();
}

// Address range: 0x460302 - 0x460307
int64_t function_460302(void) {
    // 0x460302
    return function_ffffffffdf53415c();
}

// Address range: 0x460313 - 0x460393
int64_t function_460313(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x460313
    int64_t v1; // 0x460313
    int64_t v2 = (int64_t)*(int32_t *)(v1 - 0x68a191b3); // 0x460313
    int64_t v3 = 0x2b63d4b2 * v2; // 0x460313
    if ((int32_t)(v3 != 0x2b63d4b200000000 * v2 >> 32) + (int32_t)v1 == (int32_t)a4) {
        char * v4 = (char *)(2 * v1 + a3); // 0x460321
        *v4 = *v4 ^ (char)(a3 / 256);
        return v3 & 0xfffffffe;
    }
    char * v5 = (char *)(a1 - 0x26bfceba); // 0x46037b
    *v5 = *v5 ^ (char)a3;
    *(char *)0x5ff0c0ce = *(char *)0x5ff0c0ce - 1;
    int32_t * v6 = (int32_t *)(v1 + 28); // 0x46038c
    *v6 = *v6 >> 12;
    return v3 & 0xffffff92 ^ 0x5972ea83;
}
