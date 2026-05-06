/*
 * Targeted RetDec C for native executable gap queue batch 526.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3431d8-0x3433d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3433d8-0x3435d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3435d8-0x3437d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x36d31b-0x36d51b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36d51b-0x36d71b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36d71b-0x36d91b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36d91b-0x36db1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36db1b-0x36dd1b rank=- name=- kind=- bytes=- uncovered=-
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
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

int64_t function_26d11b8c();
int64_t function_3431d8(void);
int64_t function_3431f3(void);
int64_t function_3432bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34330f(void);
int64_t function_343313(void);
int64_t function_343361(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3433ae(void);
int64_t function_3433e5(int64_t a1);
int64_t function_34341a(int64_t a1);
int64_t function_34344d(int64_t a1);
int64_t function_34345e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34348e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3434d2(void);
int64_t function_3434e3(int64_t a1, int64_t a2);
int64_t function_343505(int64_t a1, int64_t a2);
int64_t function_34352c(int64_t a1);
int64_t function_343592(void);
int64_t function_3435f0(int64_t a1);
int64_t function_343638(uint64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_343654(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3436c7(void);
int64_t function_3436e3(void);
int64_t function_3436ee(void);
int64_t function_343731(void);
int64_t function_343745(void);
int64_t function_3437a9(void);
int64_t function_3513ff();
int64_t function_36d31b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36d432(int64_t a1);
int64_t function_36d44b(void);
int64_t function_36d462(void);
int64_t function_36d495(int64_t a1, int64_t a2);
int64_t function_36d4d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36d510(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_36d529(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36d53a(void);
int64_t function_36d558(int64_t a1);
int64_t function_36d5fe(int64_t a1);
int64_t function_36d64b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36d6cb(void);
int64_t function_36d6f2(void);
int64_t function_36d70a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result);
int64_t function_36d765(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36d779(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36d7ce(int64_t a1);
int64_t function_36d7d7(void);
int64_t function_36d7e1(int64_t a1);
int64_t function_36d7e5(void);
int64_t function_36d806(int64_t a1);
int64_t function_36d80b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36d810(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36d849(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36d879(void);
int64_t function_36d8d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36d998(int64_t a1);
int64_t function_36d99e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_36da86(void);
int64_t function_36daa5(int64_t a1);
int64_t function_36dab1(void);
int64_t function_36dab6(void);
int64_t function_36dae6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36dcf8(void);
int64_t function_83f35dd();
int64_t function_c4258();
int64_t function_ffffffffe8ce0b4a();
int64_t function_ffffffffe902ef00();
int64_t function_ffffffffea3dd75b();
int64_t unknown_15b47fa4();
int64_t unknown_1e96b3a8();
int64_t unknown_2aed55a7();
int64_t unknown_3a4331ea();
int64_t unknown_3acaf4d6();
int64_t unknown_3acf0dc5();
int64_t unknown_40f69be6();
int64_t unknown_4e37d8ad();
int64_t unknown_5b122f34();
int64_t unknown_603975fa();
int64_t unknown_6b82b941();
int64_t unknown_70a5645b();
int64_t unknown_78c35cc0();
int64_t unknown_8357365();
int64_t unknown_ffffffff9bfd537f();
int64_t unknown_ffffffffb1fc2b05();
int64_t unknown_ffffffffbea0ecc8();
int64_t unknown_ffffffffd88fca6c();
int64_t unknown_ffffffffe30542b8();

// Address range: 0x3431d8 - 0x3431d9
int64_t function_3431d8(void) {
    // 0x3431d8
    int64_t result; // 0x3431d8
    return result;
}

// Address range: 0x3431f3 - 0x3431fa
int64_t function_3431f3(void) {
    // 0x3431f3
    return function_ffffffffe8ce0b4a();
}

// Address range: 0x3432bc - 0x3432e9
int64_t function_3432bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3432bc
    int64_t v1; // 0x3432bc
    char * v2 = (char *)(v1 - 40); // 0x3432bc
    bool v3; // 0x3432bc
    *v2 = *v2 + (char)v1 + (char)v3;
    uint32_t v4 = 2 * (int32_t)v1; // 0x3432c5
    int32_t * v5 = (int32_t *)(int64_t)v4; // 0x3432cd
    *v5 = *v5 + 0x73c5793a + (int32_t)(v4 < 0x4c996701);
    function_3513ff();
    return __asm_sti();
}

// Address range: 0x34330f - 0x343310
int64_t function_34330f(void) {
    // 0x34330f
    int64_t result; // 0x34330f
    return result;
}

// Address range: 0x343313 - 0x343314
int64_t function_343313(void) {
    // 0x343313
    int64_t result; // 0x343313
    return result;
}

// Address range: 0x343361 - 0x34336d
int64_t function_343361(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x343361
    int64_t v1; // 0x343361
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = 2 * v2; // 0x343361
    *(int32_t *)v1 = v3;
    int64_t v4; // 0x343361
    if (v3 >= v2 && v3 != 0) {
        v4 = function_34330f();
    }
    int64_t result = v4; // 0x343366
    if (a4 != 1 == v3 == 0) {
        result = function_343313();
    }
    char * v5 = (char *)(a1 - 112); // 0x343368
    *v5 = *v5 - 4;
    return result;
}

// Address range: 0x3433ae - 0x3433b5
int64_t function_3433ae(void) {
    // 0x3433ae
    return function_83f35dd();
}

// Address range: 0x3433e5 - 0x3433e8
int64_t function_3433e5(int64_t a1) {
    // 0x3433e5
    int64_t result; // 0x3433e5
    return result;
}

// Address range: 0x34341a - 0x34341d
int64_t function_34341a(int64_t a1) {
    // 0x34341a
    int64_t result; // 0x34341a
    return result;
}

// Address range: 0x34344d - 0x34344e
int64_t function_34344d(int64_t a1) {
    // 0x34344d
    int64_t result; // 0x34344d
    return result;
}

// Address range: 0x34345e - 0x34348e
int64_t function_34345e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffe30542b8(); // 0x34345e
    bool v1; // 0x34345e
    if (v1 || false) {
        // 0x34349f
        return result;
    }
    // 0x343465
    int64_t v2; // 0x34345e
    int64_t v3 = (int64_t)((int32_t)v1 + (int32_t)v2 - *(int32_t *)result); // 0x34346b
    int32_t * v4 = (int32_t *)(a4 + 0x9029536 + result); // 0x343477
    uint32_t v5 = *v4; // 0x343477
    *v4 = (int32_t)result;
    unsigned char v6 = *(char *)((int64_t)(v5 % 256) + v3); // 0x343489
    unsigned char v7 = *(char *)((int64_t)v6 + v3); // 0x34348a
    return (int64_t)v7 | (int64_t)(v5 & -256);
}

// Address range: 0x34348e - 0x34349f
int64_t function_34348e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x34348e
    int64_t v2; // 0x34348e
    __asm_outsb(v1, (char)v2);
    __asm_outsd(v1, (int32_t)v2);
    char v3 = *(char *)0x3eb97c9e; // 0x343497
    *(char *)0x3eb97c9e = v3 + (char)((int64_t)&g2 >> 8);
    bool v4; // 0x34348e
    return 2 * v2 & 0xfffffffe | (int64_t)v4;
}

// Address range: 0x3434d2 - 0x3434d3
int64_t function_3434d2(void) {
    // 0x3434d2
    int64_t result; // 0x3434d2
    return result;
}

// Address range: 0x3434e3 - 0x3434f5
int64_t function_3434e3(int64_t a1, int64_t a2) {
    // 0x3434e3
    return unknown_3a4331ea();
}

// Address range: 0x343505 - 0x343507
int64_t function_343505(int64_t a1, int64_t a2) {
    // 0x343505
    int64_t result; // 0x343505
    return result;
}

// Address range: 0x34352c - 0x34352f
int64_t function_34352c(int64_t a1) {
    // 0x34352c
    int64_t result; // 0x34352c
    return result;
}

// Address range: 0x343592 - 0x343593
int64_t function_343592(void) {
    // 0x343592
    int64_t result; // 0x343592
    return result;
}

// Address range: 0x3435f0 - 0x3435fe
int64_t function_3435f0(int64_t a1) {
    // 0x3435f0
    int64_t v1; // 0x3435f0
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 10 + 2 * v2); // 0x3435f0
    *v3 = *v3 | (int32_t)a1;
    return unknown_603975fa(a1) & -161;
}

// Address range: 0x343638 - 0x343653
int64_t function_343638(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x343638
    int64_t result; // 0x343638
    if (v1 != 0) {
        uint32_t v2 = (int32_t)result;
        *(int32_t *)result = v2 >> 32 - v1 | v2 << v1;
    }
    __asm_out(121, (char)result);
    char * v3 = (char *)(a1 - 113); // 0x343644
    *v3 = *v3 + (char)(a1 / 256);
    int32_t * v4 = (int32_t *)((a1 & 0xffffffff) - 14); // 0x34364d
    *v4 = *v4 + (int32_t)a2;
    return result;
}

// Address range: 0x343654 - 0x34367e
int64_t function_343654(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_8357365(); // 0x34365f
    int64_t v1; // 0x343654
    if (*(char *)(v1 + 0x1e8bb88) == 0) {
        int32_t * v2 = (int32_t *)(a1 + 0x13d9bcb); // 0x343678
        *v2 = *v2 | (int32_t)v1;
        return result;
    }
    uint64_t v3 = unknown_ffffffffd88fca6c(); // 0x343666
    char v4 = *(char *)(a3 - 0x7dc4fad1); // 0x34366b
    return 256 * (int64_t)(v4 | (char)(v3 / 256)) | v3 & -0xff01;
}

// Address range: 0x3436c7 - 0x3436c8
int64_t function_3436c7(void) {
    // 0x3436c7
    int64_t result; // 0x3436c7
    return result;
}

// Address range: 0x3436e3 - 0x3436e6
int64_t function_3436e3(void) {
    // 0x3436e3
    int64_t result; // 0x3436e3
    return result;
}

// Address range: 0x3436ee - 0x3436f5
int64_t function_3436ee(void) {
    // 0x3436ee
    int64_t result; // 0x3436ee
    return result;
}

// Address range: 0x343731 - 0x343732
int64_t function_343731(void) {
    // 0x343731
    int64_t result; // 0x343731
    return result;
}

// Address range: 0x343745 - 0x343747
int64_t function_343745(void) {
    // 0x343745
    return function_343731();
}

// Address range: 0x3437a9 - 0x3437b6
int64_t function_3437a9(void) {
    // 0x3437a9
    int64_t v1; // 0x3437a9
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x36d31b - 0x36d3c8
int64_t function_36d31b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x36d31b
    int32_t * v3 = (int32_t *)(4 * v2 + a4); // 0x36d31d
    uint32_t v4 = *v3; // 0x36d31d
    uint32_t v5 = v4 + (int32_t)v2; // 0x36d31d
    *v3 = v5;
    int64_t v6; // 0x36d31b
    char v7 = *(char *)&v6; // 0x36d320
    *(char *)v6 = v7 - (char)v2 + (char)(v5 < v4);
    unsigned char v8 = *(char *)-0x72e48d06fe17f800 - 1; // 0x36d331
    char * v9 = (char *)((v2 & -256 | (int64_t)v8) + 85); // 0x36d337
    *v9 = *v9 | v8;
    *(char *)a1 = v8;
    bool v10; // 0x36d31b
    int64_t v11 = v10 ? -1 : 1; // 0x36d33a
    int64_t v12 = v11 + a1; // 0x36d33a
    int64_t v13 = unknown_6b82b941(v12, a5); // 0x36d33b
    *(char *)a3 = (char)(v6 / 256);
    v6 = v6 & -0xff01 | 256 * (int64_t)*(char *)&v1;
    int32_t * v14 = (int32_t *)(v12 - 0x63afc5d4); // 0x36d354
    int32_t * v15 = (int32_t *)(v1 - 0xdd0e845); // 0x36d347
    *v15 = *v15 + (int32_t)v1;
    int32_t v16 = *v14; // 0x36d354
    int32_t v17 = v1; // 0x36d354
    int32_t v18 = v16 + v17; // 0x36d354
    *v14 = v18;
    int64_t v19; // 0x36d31b
    while (((v18 ^ v16) & (v18 ^ v17)) >= 0) {
        // 0x36d35d
        if (llvm_ctpop_i8((char)v18) % 2 != 0) {
            int32_t * v20 = (int32_t *)(8 * a4 - 0x725ffeb9); // 0x36d35f
            *v20 = *v20 + (int32_t)v1;
            unsigned char v21 = (char)a4 % 32; // 0x36d366
            v19 = v13;
            if (v21 == 0) {
                goto lab_dec_label_pc_unknown;
            } else {
                v19 = v13 & -256 | (int64_t)((char)v13 >> v21);
                goto lab_dec_label_pc_unknown;
            }
        }
        v15 = (int32_t *)(v1 - 0xdd0e845);
        *v15 = *v15 + (int32_t)v1;
        v16 = *v14;
        v17 = v1;
        v18 = v16 + v17;
        *v14 = v18;
    }
    goto lab_0x36d39e;
  lab_0x36d39e:;
    int64_t v22 = unknown_15b47fa4(); // 0x36d39e
    char * v23 = (char *)(v22 - 0x54fe1800); // 0x36d3ab
    *v23 = *v23 + (char)v22;
    char * v24 = (char *)(v2 - 0x66287100); // 0x36d3b2
    *v24 = *v24 + (char)(v1 / 256 + v6);
    __asm_wait();
    return unknown_ffffffffbea0ecc8() & -256 | (int64_t)*(char *)a5;
  lab_dec_label_pc_unknown:;
    int32_t * v25 = (int32_t *)(a4 - 0x67418095 + 2 * v6); // 0x36d368
    int32_t v26 = *v25 + (int32_t)a5; // 0x36d368
    unsigned char v27 = llvm_ctpop_i8((char)v26); // 0x36d368
    *v25 = v26;
    if (v27 % 2 == 0) {
        int32_t * v28 = (int32_t *)(v2 + 0x1345b27c); // 0x36d373
        *v28 = *v28 + (int32_t)v6;
        return __asm_hlt(v12);
    }
    // 0x36d394
    *(int32_t *)0x3a74bc07 = *(int32_t *)0x3a74bc07 + (int32_t)v6;
    *(int32_t *)(v12 + v11) = (int32_t)v19;
    goto lab_0x36d39e;
}

// Address range: 0x36d432 - 0x36d43e
int64_t function_36d432(int64_t a1) {
    // 0x36d432
    int64_t v1; // 0x36d432
    bool v2; // 0x36d432
    int32_t v3 = 2 * (int32_t)v1 | (int32_t)v2; // 0x36d432
    int64_t result = v3; // 0x36d432
    *(char *)(result - 0x3fe172b) = (char)(v3 >= 0);
    return result;
}

// Address range: 0x36d44b - 0x36d44e
int64_t function_36d44b(void) {
    // 0x36d44b
    int64_t result; // 0x36d44b
    return result;
}

// Address range: 0x36d462 - 0x36d463
int64_t function_36d462(void) {
    // 0x36d462
    int64_t result; // 0x36d462
    return result;
}

// Address range: 0x36d495 - 0x36d49d
int64_t function_36d495(int64_t a1, int64_t a2) {
    // 0x36d495
    int64_t result; // 0x36d495
    return result;
}

// Address range: 0x36d4d2 - 0x36d4e6
int64_t function_36d4d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t result; // 0x36d4d2
    if ((char)(result / 256) - (char)result < 0) {
        // 0x36d53f
        return result;
    }
    char * v2 = (char *)(a1 + 0x3d635652); // 0x36d4d7
    *v2 = *v2 + (char)(result / 256);
    *(char *)v1 = *(char *)&v1 | (char)a5;
    return unknown_40f69be6();
}

// Address range: 0x36d510 - 0x36d529
int64_t function_36d510(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x36d510
    int64_t v1; // 0x36d510
    char v2 = v1;
    *(char *)0x1629f7f00013dc4 = v2;
    *(char *)v1 = 2 * v2;
    int64_t result; // 0x36d510
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    int64_t v4; // 0x36d510
    *(char *)a3 = *(char *)&v4 + (char)(a3 / 256);
    return result;
}

// Address range: 0x36d529 - 0x36d53a
int64_t function_36d529(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_5b122f34(); // 0x36d52e
    bool v1; // 0x36d529
    char * v2 = (char *)(a2 + 88 + (v1 ? -1 : 1) + 4 * result); // 0x36d533
    *v2 = *v2 - (char)a3;
    return result;
}

// Address range: 0x36d53a - 0x36d53f
int64_t function_36d53a(void) {
    // 0x36d53a
    int64_t result; // 0x36d53a
    return result;
}

// Address range: 0x36d558 - 0x36d55b
int64_t function_36d558(int64_t a1) {
    // 0x36d558
    int64_t result; // 0x36d558
    return result;
}

// Address range: 0x36d5fe - 0x36d608
int64_t function_36d5fe(int64_t a1) {
    // 0x36d5fe
    return unknown_ffffffffb1fc2b05(a1);
}

// Address range: 0x36d64b - 0x36d6ac
int64_t function_36d64b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x36d64b
    int64_t v1; // 0x36d64b
    int32_t * v2 = (int32_t *)(v1 + 0x59c575e5); // 0x36d64b
    *v2 = *v2 + (int32_t)v1;
    int32_t v3 = 2 * (int32_t)a1; // 0x36d653
    unknown_70a5645b(v3);
    if (v3 != 0) {
        // 0x36d6a7
        return unknown_4e37d8ad();
    }
    // 0x36d65e
    int64_t v4; // 0x36d64b
    return (int64_t)*(int32_t *)&v4;
}

// Address range: 0x36d6cb - 0x36d6d2
int64_t function_36d6cb(void) {
    // 0x36d6cb
    return function_ffffffffea3dd75b();
}

// Address range: 0x36d6f2 - 0x36d6f5
int64_t function_36d6f2(void) {
    // 0x36d6f2
    int64_t result; // 0x36d6f2
    return result;
}

// Address range: 0x36d70a - 0x36d764
int64_t function_36d70a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result) {
    // 0x36d70a
    int64_t v1; // 0x36d70a
    uint64_t v2 = v1;
    bool v3; // 0x36d70a
    if (!v3) {
        // 0x36d70d
        *(char *)(a5 - 0xf1efe18 + v2) = (char)(v2 / 256);
        return function_36d779(a1, a5, a3, a4);
    }
    if (!v3) {
        // 0x36d751
        return __asm_sti();
    }
    // 0x36d75f
    *(char *)a4 = (char)v2;
    return result;
}

// Address range: 0x36d765 - 0x36d772
int64_t function_36d765(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x36d765
    int64_t result; // 0x36d765
    *(int32_t *)a4 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x36d779 - 0x36d7a9
int64_t function_36d779(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36d779
    int64_t v1; // 0x36d779
    uint64_t v2 = v1;
    unknown_ffffffff9bfd537f();
    int32_t * v3 = (int32_t *)(v2 - 91); // 0x36d784
    *v3 = *v3 | (int32_t)a1;
    *(char *)a3 = (char)a4;
    char * v4 = (char *)(v2 + 0x344b5cf4); // 0x36d78e
    *v4 = *v4 - (char)(v2 / 256);
    int64_t result = unknown_1e96b3a8(); // 0x36d7a2
    char * v5 = (char *)result; // 0x36d7a7
    *v5 = *v5 + (char)a3;
    return result;
}

// Address range: 0x36d7ce - 0x36d7cf
int64_t function_36d7ce(int64_t a1) {
    // 0x36d7ce
    int64_t result; // 0x36d7ce
    return result;
}

// Address range: 0x36d7d7 - 0x36d7e1
int64_t function_36d7d7(void) {
    // 0x36d7d7
    return function_26d11b8c();
}

// Address range: 0x36d7e1 - 0x36d7e4
int64_t function_36d7e1(int64_t a1) {
    // 0x36d7e1
    int64_t result; // 0x36d7e1
    return result;
}

// Address range: 0x36d7e5 - 0x36d7e7
int64_t function_36d7e5(void) {
    // 0x36d7e5
    int64_t v1; // 0x36d7e5
    return function_36d849(v1, v1, v1, v1);
}

// Address range: 0x36d806 - 0x36d809
int64_t function_36d806(int64_t a1) {
    // 0x36d806
    int64_t result; // 0x36d806
    return result;
}

// Address range: 0x36d80b - 0x36d80f
int64_t function_36d80b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x36d80b
    return __asm_hlt(a2 + a1 & 0xffffffff);
}

// Address range: 0x36d810 - 0x36d81f
int64_t function_36d810(int64_t a1, int64_t a2, int64_t a3) {
    // 0x36d810
    int64_t v1; // 0x36d810
    uint32_t v2 = (int32_t)v1; // 0x36d812
    bool v3; // 0x36d810
    uint32_t v4 = v3 ? 0x7a82ef03 : 0x7a82ef02; // 0x36d812
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return v2 + 0x2facaaae - v4 + (int32_t)(v3 | v4 > v2) | 5;
}

// Address range: 0x36d849 - 0x36d84d
int64_t function_36d849(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36d849
    int64_t result; // 0x36d849
    *(char *)(a4 - 1) = (char)result;
    return result;
}

// Address range: 0x36d879 - 0x36d87e
int64_t function_36d879(void) {
    // 0x36d879
    return function_ffffffffe902ef00();
}

// Address range: 0x36d8d1 - 0x36d8ef
int64_t function_36d8d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36d8d1
    int64_t v1; // 0x36d8d1
    int32_t v2 = *(int32_t *)(v1 - 44) & -0x5431395e; // 0x36d8dd
    return v1 & 0xad800e8 | 0x4000 * (int64_t)(v2 == 0) | 0x8000 * (int64_t)(v2 < 0) | 1024 * (int64_t)(llvm_ctpop_i8((char)v2) % 2 == 0) | 512;
}

// Address range: 0x36d998 - 0x36d999
int64_t function_36d998(int64_t a1) {
    // 0x36d998
    int64_t result; // 0x36d998
    return result;
}

// Address range: 0x36d99e - 0x36d9e8
int64_t function_36d99e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x36d99e
    bool v1; // 0x36d99e
    if (v1 || v1) {
        // 0x36d9cd
        int64_t v2; // 0x36d99e
        char v3 = *(char *)(v2 - 99); // 0x36d9cd
        int64_t result = unknown_3acaf4d6(); // 0x36d9d0
        int32_t * v4 = (int32_t *)(v2 + 67 & 0xffffffff); // 0x36d9d5
        int32_t v5 = *v4; // 0x36d9d5
        *v4 = v5 + (int32_t)(256 * (int64_t)(v3 | (char)(a4 / 256)) | a4 & 0xffff00ff);
        return result;
    }
    // 0x36d9a0
    return unknown_2aed55a7();
}

// Address range: 0x36da86 - 0x36da87
int64_t function_36da86(void) {
    // 0x36da86
    int64_t result; // 0x36da86
    return result;
}

// Address range: 0x36daa5 - 0x36daa6
int64_t function_36daa5(int64_t a1) {
    // 0x36daa5
    int64_t result; // 0x36daa5
    return result;
}

// Address range: 0x36dab1 - 0x36dab4
int64_t function_36dab1(void) {
    // 0x36dab1
    int64_t result; // 0x36dab1
    return result;
}

// Address range: 0x36dab6 - 0x36dac7
int64_t function_36dab6(void) {
    // 0x36dab6
    bool v1; // 0x36dab6
    if ((v1 ? -24 : -25) + (char)unknown_78c35cc0() < 0) {
        function_36da86();
    }
    // 0x36dabf
    return unknown_3acf0dc5();
}

// Address range: 0x36dae6 - 0x36dc4e
int64_t function_36dae6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x36dae6
    __asm_sti();
    int32_t * v1 = (int32_t *)(a1 - 113); // 0x36daea
    int64_t v2; // 0x36dae6
    int32_t v3 = *v1 + (int32_t)v2; // 0x36daea
    *v1 = v3;
    int64_t v4; // 0x36dae6
    uint32_t v5 = *(int32_t *)&v4; // 0x36daed
    v4 = a2 + 4;
    if (v3 >= 1) {
        int64_t result = v5; // 0x36daed
        char * v6 = (char *)(result - 0x22d9700); // 0x36daf0
        *v6 = *v6 + (char)v5;
        return result;
    }
    // 0x36daf7
    int64_t v7; // bp-72, 0x36dae6
    int64_t v8 = (int64_t)&v7; // 0x36dbee
    int64_t v9 = v8 + 8; // 0x36dc19
    v7 = v9;
    int64_t v10 = *(int64_t *)(v8 + 24); // 0x36dc33
    *(int64_t *)(v8 + 16) = v10;
    *(int64_t *)v9 = v10;
    return function_c4258(a1, v4);
}

// Address range: 0x36dcf8 - 0x36dcfb
int64_t function_36dcf8(void) {
    // 0x36dcf8
    int64_t result; // 0x36dcf8
    return result;
}
