/*
 * Targeted RetDec C for native executable gap queue batch 350.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1faa34-0x1fac34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fac34-0x1fae34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fae34-0x1fb034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fb034-0x1fb234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1fb234-0x1fb434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fa21e-0x2fa41e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fa41e-0x2fa61e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fa61e-0x2fa81e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1faa00();
int64_t function_1faa34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1faab4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1faae2(int64_t a1, int64_t a2);
int64_t function_1faaf9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1fab2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fab3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_1fac67(int64_t a1);
int64_t function_1fac6b(void);
int64_t function_1facba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, char a6);
int64_t function_1fad5f(void);
int64_t function_1fadcc(void);
int64_t function_1fadcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fae8c(void);
int64_t function_1faec5(int64_t a1);
int64_t function_1faeea(void);
int64_t function_1faeee(void);
int64_t function_1faf2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fafcb(int64_t a1);
int64_t function_1fafdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fb04a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fb069(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fb139(void);
int64_t function_1fb13e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1fb141(void);
int64_t function_1fb177(int64_t a1, int64_t a2);
int64_t function_1fb1d0(void);
int64_t function_1fb1d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fb24c(void);
int64_t function_1fb306(void);
int64_t function_1fb312(void);
int64_t function_1fb31c(void);
int64_t function_1fb342(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6);
int64_t function_1fb3ae(void);
int64_t function_1fb405(void);
int64_t function_20807e2();
int64_t function_2c219881();
int64_t function_2fa21e(void);
int64_t function_2fa220(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_2fa2aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2fa41b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2fa565(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2fa6e4(void);
int64_t function_2fa7fb(int64_t a1);
int64_t function_caf2a();
int64_t function_ffffffff8177f846();
int64_t function_ffffffff9dad4a6a();
int64_t function_ffffffffab2d6e31();
int64_t function_ffffffffb905a737();
int64_t function_ffffffffd459b011();
int64_t function_ffffffffe8219788();
int64_t function_fffffffffc1311fe();
int64_t unknown_1291031c();
int64_t unknown_201302cb();
int64_t unknown_28ed9b08();
int64_t unknown_29211275();
int64_t unknown_31c0501e();
int64_t unknown_444b4553();
int64_t unknown_482a8331();
int64_t unknown_698270d4();
int64_t unknown_6ea5a445();
int64_t unknown_769f436a();
int64_t unknown_e5bcf3c();
int64_t unknown_ffffffff8b6afee6();
int64_t unknown_ffffffff9e5cd7de();
int64_t unknown_ffffffffad9bd155();
int64_t unknown_ffffffffb1a27b71();
int64_t unknown_ffffffffb419cc4e();
int64_t unknown_ffffffffb45cb1e5();
int64_t unknown_ffffffffc31a8dc9();
int64_t unknown_ffffffffd8e32f6c();
int64_t unknown_ffffffffd8e531ee();
int64_t unknown_fffffffff6aa0ef4();

// Address range: 0x1faa34 - 0x1faa9e
int64_t function_1faa34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    if ((a5 & 64) == 0) {
        // 0x1faa38
        return function_1faa00();
    }
    int64_t v2 = (a5 & (int64_t)&g1) == 0 ? 4 : -4; // 0x1faa6e
    uint32_t v3 = (int32_t)a4 % 32;
    int32_t * v4 = (int32_t *)(a4 - 0x40fa9f10);
    int64_t v5 = (int64_t)&v1; // 0x1faa34
    int64_t v6 = a2; // 0x1faa34
    int64_t v7 = a1; // 0x1faa34
    *(int32_t *)v7 = *(int32_t *)v6;
    __asm_int(105);
    *(int64_t *)(v5 - 8) = -0x7f45fe18;
    uint64_t v8 = v5 - 16; // 0x1faa7b
    int64_t v9; // 0x1faa34
    *(int64_t *)v8 = v9;
    int64_t v10 = __asm_hlt(); // 0x1faa87
    int64_t v11; // 0x1faa34
    int64_t v12 = ((int64_t)(((char)v11 ^ -8) < 248) + a4 + v10) % 256 | v10 & -256; // 0x1faa88
    int32_t * v13; // 0x1faa8a
    uint32_t v14; // 0x1faa8a
    if (v3 != 0) {
        v13 = (int32_t *)v12;
        v14 = *v13;
        *v13 = v14 >> 32 - v3 | v14 << v3;
    }
    uint32_t v15 = (int32_t)v11 >> 31; // 0x1faa86
    int64_t v16; // 0x1faa34
    uint32_t v17 = *(int32_t *)(v16 + 0x770b0397) | (int32_t)v12; // 0x1faa8c
    uint32_t v18 = *v4; // 0x1faa94
    uint32_t v19 = v18 + v15; // 0x1faa94
    *v4 = v19;
    while (v19 < v18) {
        uint32_t v20 = (int32_t)v9; // 0x1faa69
        uint32_t v21 = v17 + v20; // 0x1faa69
        v11 = v17;
        v5 = 0x80000000 * (int64_t)(v21 < v20) | v8 / 2 % 0x80000000;
        v9 = v21;
        v6 += v2;
        v7 += v2;
        *(int32_t *)v7 = *(int32_t *)v6;
        __asm_int(105);
        *(int64_t *)(v5 - 8) = -0x7f45fe18;
        v8 = v5 - 16;
        *(int64_t *)v8 = v9;
        v10 = __asm_hlt();
        v12 = ((int64_t)(((char)v11 ^ -8) < 248) + a4 + v10) % 256 | v10 & -256;
        if (v3 != 0) {
            v13 = (int32_t *)v12;
            v14 = *v13;
            *v13 = v14 >> 32 - v3 | v14 << v3;
        }
        v15 = (int32_t)v11 >> 31;
        v17 = *(int32_t *)(v16 + 0x770b0397) | (int32_t)v12;
        v18 = *v4;
        v19 = v18 + v15;
        *v4 = v19;
    }
    // 0x1faa9c
    return (int64_t)(*(int32_t *)(int64_t)v15 & v17);
}

// Address range: 0x1faab4 - 0x1faac5
int64_t function_1faab4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1faab4
    *(int32_t *)-0x17b61343 = *(int32_t *)-0x17b61343 + (int32_t)a1;
    int32_t * v1 = (int32_t *)(a3 - 48); // 0x1faabc
    uint32_t v2 = *v1; // 0x1faabc
    uint32_t v3 = v2 + (int32_t)a3; // 0x1faabc
    *v1 = v3;
    int64_t v4; // 0x1faab4
    char v5 = *(char *)&v4; // 0x1faabf
    int64_t v6; // 0x1faab4
    *(char *)a3 = v5 + (char)(v6 / 256) + (char)(v3 < v2);
    return __asm_int1(a1, a2, 2 * v6 & 0xffffffff);
}

// Address range: 0x1faae2 - 0x1faaec
int64_t function_1faae2(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x43030b9); // 0x1faae2
    int64_t v2; // 0x1faae2
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x1faae2
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return unknown_482a8331(a1, a2, v2, v2);
}

// Address range: 0x1faaf9 - 0x1fab2b
int64_t function_1faaf9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x1faaf9
    int64_t v3 = v2 + 0x4bd91842; // 0x1faaf9
    int64_t result = v3 & 0xffffffff; // 0x1faaf9
    *(char *)a2 = (char)(a4 / 256 | a2);
    unsigned char v4 = llvm_ctpop_i8((char)v3 - 1); // 0x1fab00
    __asm_outsd((int16_t)a3, *(int32_t *)&v1);
    if (v4 % 2 == 0) {
        // 0x1fab29
        return result;
    }
    if ((int32_t)v3 >= 0x320c0001) {
        // 0x1fab23
        return a1 & 0xffffffff;
    }
    int64_t v5 = result + 0xe8d87a1a; // 0x1fab0b
    int32_t * v6 = (int32_t *)((v5 & 0xffffffff) + 0x7b015991); // 0x1fab10
    int32_t v7 = v2; // 0x1fab10
    *v6 = *v6 + v7;
    int32_t * v8 = (int32_t *)(v2 - 0x17fec20e); // 0x1fab19
    *v8 = *v8 + v7;
    return v5 + a1 & 0xffffffff;
}

// Address range: 0x1fab2b - 0x1fab3b
int64_t function_1fab2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fab2b
    unknown_482a8331(a1, a2, a3, a4);
    return unknown_e5bcf3c();
}

// Address range: 0x1fab3d - 0x1fac66
int64_t function_1fab3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a1;
    int32_t v2 = a3;
    bool v3; // 0x1fab3d
    *(int32_t *)a3 = v2 - (int32_t)a1 + (int32_t)v3;
    unknown_6ea5a445();
    uint64_t v4 = (2 * a6 & 254 | a6 & 0xffffff00) + 0xe804ac5c; // 0x1fab48
    int64_t v5 = v4 & 0xfffffffe; // 0x1fab48
    unsigned char v6 = *(char *)-0x17a831df; // 0x1fab52
    *(char *)-0x17a831df = v6 / 128 | 2 * v6;
    char * v7 = (char *)(v5 + a2); // 0x1fab59
    int64_t v8; // 0x1fab3d
    *v7 = (char)v8;
    *(char *)(a4 + 0x7401e86a) = (char)v8 + (char)a1;
    unsigned char v9 = (char)a4 % 32; // 0x1fab63
    int64_t result = v5; // 0x1fab63
    if (v9 != 0) {
        unsigned char v10 = (char)(v4 / 256); // 0x1fab63
        result = 256 * (int64_t)(v10 >> 8 - v9 | v10 << v9) | v4 & 0xffff00fe;
    }
    uint32_t v11 = *(int32_t *)&v1; // 0x1fab66
    int64_t v12 = (a7 & (int64_t)&g1) != 0 ? -4 : 4; // 0x1fab66
    int64_t v13 = v1 + v12; // 0x1fab66
    int32_t v14 = *(int32_t *)result; // 0x1fab67
    *(char *)v13 = (char)result;
    v1 = v13 + ((a7 & (int64_t)&g1) != 0 ? -1 : 1);
    int32_t * v15 = (int32_t *)(result - 0x6e83d8f6); // 0x1fab6e
    int32_t v16 = *v15 + (int32_t)a4; // 0x1fab6e
    *v15 = v16;
    int64_t v17 = a4 - 1; // 0x1fab74
    if (v17 != 0 != (v16 == 0)) {
        // 0x1fab76
        return result;
    }
    uint64_t v18 = unknown_201302cb(); // 0x1fabc5
    char * v19 = (char *)(v18 + 0x48de1400); // 0x1fabca
    *v19 = *v19 + (char)v18;
    char * v20 = (char *)((v8 & -256 | (int64_t)*v7) + 0xc01e800); // 0x1fabd0
    *v20 = *v20 + (char)(v18 / 256);
    int32_t * v21 = (int32_t *)(a3 + 28); // 0x1fabd6
    int32_t v22 = *v21 + (int32_t)v17; // 0x1fabd6
    *v21 = v22;
    if (v22 >= 1) {
        // 0x1fabdb
        return v1 & 0xffffffff;
    }
    uint32_t v23 = v14 + (int32_t)a2 + (int32_t)(v11 > (int32_t)result); // 0x1fab67
    if (v22 >= 0) {
        if (v17 != 0) {
            // 0x1fac4b
            return unknown_444b4553();
        }
        uint32_t v24 = v2 >> 1; // 0x1fac5c
        uint64_t v25 = v18 - (v2 % 2 == 0 ? 61 : 62); // 0x1fac5e
        int64_t v26 = v18 & -256; // 0x1fac5e
        int32_t * v27 = (int32_t *)(int64_t)v24; // 0x1fac61
        *v27 = *v27 + (int32_t)(v25 % 256 | v26);
        __asm_outsb((int16_t)v24, *(char *)(int64_t)v23);
        return v25 & 116 | v26;
    }
    int64_t v28 = v18 & 0xe6aa8503; // 0x1fabed
    *(int32_t *)v28 = (int32_t)v28;
    char v29 = v17; // 0x1fabfd
    *(char *)v17 = v29;
    __asm_in(45);
    uint64_t v30 = unknown_28ed9b08(); // 0x1fac01
    char * v31 = (char *)(v17 + 8 * a3); // 0x1fac07
    *v31 = *v31 + v29;
    char * v32 = (char *)v30; // 0x1fac0a
    *v32 = *v32 - (char)v30;
    uint32_t v33 = v23 + (int32_t)v30; // 0x1fac12
    return __asm_int1(v1 + v12, (int64_t)v33, (v30 / 256 + a3 + (int64_t)(v33 < v23)) % 256 | a3 & -256);
}

// Address range: 0x1fac67 - 0x1fac68
int64_t function_1fac67(int64_t a1) {
    // 0x1fac67
    int64_t result; // 0x1fac67
    return result;
}

// Address range: 0x1fac6b - 0x1fac75
int64_t function_1fac6b(void) {
    // 0x1fac6b
    unknown_ffffffffb1a27b71();
    return function_ffffffffb905a737();
}

// Address range: 0x1facba - 0x1fad44
int64_t function_1facba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, char a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x1facba
    uint32_t v3 = (int32_t)v2 >> 31; // 0x1facbd
    int64_t v4 = unknown_ffffffffc31a8dc9(); // 0x1facc2
    uint64_t v5 = a4 - 1; // 0x1facc8
    bool v6; // 0x1facba
    if (v5 != 0 != v6) {
        // 0x1facca
        int64_t v7; // bp-8, 0x1facba
        int64_t result = (int64_t)&v7; // 0x1facbe
        int32_t * v8 = (int32_t *)(v4 + result & 0xffffffff); // 0x1faccc
        *v8 = *v8 + v3;
        int64_t v9 = unknown_698270d4(); // 0x1facce
        *(char *)a1 = *(char *)&v1;
        int64_t v10 = v6 ? -1 : 1; // 0x1facdb
        int64_t v11 = v9 | v5 / 256 % 256; // 0x1face2
        int32_t * v12 = (int32_t *)v11; // 0x1face4
        *v12 = *v12 + (int32_t)v11;
        *(char *)(v10 + a1) = *(char *)(v1 + v10);
        return result;
    }
    int64_t v13 = v3; // 0x1facbd
    if (true != !v6) {
        int64_t v14 = a2 - a1; // 0x1fad0f
        int32_t v15 = *(int32_t *)v13; // 0x1fad12
        char * v16 = (char *)((v14 & 0xffffffff) + 0x52013ded); // 0x1fad14
        *v16 = *v16 + (char)v4;
        *(char *)a5 = (char)v5;
        return function_20807e2(v15 ^ (int32_t)a1 + 4, (int32_t)v14, v13 & 0xffffff00 | v5 / 256 % 256, v5);
    }
    char * v17 = (char *)v13; // 0x1fad3c
    int64_t v18 = v4 + 0xef9eee46 & 0xffffffff; // 0x1fad3b
    while (true) {
        int64_t v19 = v18;
        *v17 = *v17 + (char)v19;
        v18 = (v19 + 248) % 256 | v19 & -256;
        __asm_out(-56, (int32_t)v18);
    }
}

// Address range: 0x1fad5f - 0x1fad60
int64_t function_1fad5f(void) {
    // 0x1fad5f
    int64_t result; // 0x1fad5f
    return result;
}

// Address range: 0x1fadcc - 0x1fadcd
int64_t function_1fadcc(void) {
    // 0x1fadcc
    int64_t result; // 0x1fadcc
    return result;
}

// Address range: 0x1fadcf - 0x1fae8b
int64_t function_1fadcf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fadcf
    if (a4 == 0) {
        function_1fad5f();
    }
    int64_t v1 = unknown_ffffffff9e5cd7de(); // 0x1fadd8
    int64_t v2 = a4 + 0xfe177328; // 0x1faddd
    int64_t v3; // 0x1fadcf
    *(int16_t *)(v2 & 0xffffffff) = (int16_t)v3;
    *(int32_t *)a1 = (int32_t)v1;
    bool v4; // 0x1fadcf
    int64_t v5 = v4 ? -4 : 4; // 0x1fade5
    int64_t v6 = v5 + a1; // 0x1fade5
    int64_t v7 = 4 * a3 + 0x5828a605 + v3 & 0xffffffff; // 0x1fade6
    int64_t v8 = unknown_fffffffff6aa0ef4(v6, v7); // 0x1faded
    __asm_int(-64);
    int64_t v9 = a3 + 0xe83cd200 + v8; // 0x1fadfa
    int64_t v10 = v9 & 0xffffffff ^ 0x7a01e8af; // 0x1fae00
    unsigned char v11 = (char)v10; // 0x1fae06
    unsigned char v12 = (v9 & 256) == 0 ? -61 : -60; // 0x1fae06
    if (v12 <= v11) {
        // 0x1fae7b
        return v10 & 0xffffff00 | (int64_t)(v11 - v12);
    }
    int32_t * v13 = (int32_t *)(a3 + 0x359c0147 + v7); // 0x1fae10
    *v13 = *v13 + (int32_t)v3;
    int64_t v14 = v6 + v5; // 0x1fae17
    char v15 = (char)unknown_31c0501e(v14) - *(char *)v14; // 0x1fae1d
    if (llvm_ctpop_i8(v15) % 2 == 0) {
        function_1fadcc();
    }
    if (v15 >= 0) {
        // 0x1fae22
        return function_ffffffffd459b011();
    }
    int64_t v16 = v2 & 0xffffff00 | 118; // 0x1fadfc
    int32_t * v17 = (int32_t *)v16; // 0x1fae45
    *v17 = *v17 + (int32_t)v16;
    int32_t * v18 = (int32_t *)(v7 + 0x415a0aa8); // 0x1fae49
    *v18 = 0x400000 * *v18;
    unknown_ffffffffad9bd155();
    return __asm_hlt();
}

// Address range: 0x1fae8c - 0x1fae91
int64_t function_1fae8c(void) {
    // 0x1fae8c
    return function_ffffffffe8219788();
}

// Address range: 0x1faec5 - 0x1faec8
int64_t function_1faec5(int64_t a1) {
    // 0x1faec5
    int64_t result; // 0x1faec5
    return result;
}

// Address range: 0x1faeea - 0x1faeeb
int64_t function_1faeea(void) {
    // 0x1faeea
    int64_t result; // 0x1faeea
    return result;
}

// Address range: 0x1faeee - 0x1faef1
int64_t function_1faeee(void) {
    // 0x1faeee
    int64_t result; // 0x1faeee
    return result;
}

// Address range: 0x1faf2d - 0x1faf38
int64_t function_1faf2d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1faf2d
    float80_t v1; // 0x1faf2d
    *(int16_t *)(a4 + 0x1e8766f) = (int16_t)v1;
    return function_ffffffffab2d6e31();
}

// Address range: 0x1fafcb - 0x1fafcc
int64_t function_1fafcb(int64_t a1) {
    // 0x1fafcb
    int64_t result; // 0x1fafcb
    return result;
}

// Address range: 0x1fafdc - 0x1fb029
int64_t function_1fafdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    char * v3 = (char *)(a4 - 59); // 0x1fafdc
    int64_t v4; // 0x1fafdc
    *v3 = *v3 + (char)v4;
    int64_t v5 = unknown_ffffffffb45cb1e5(); // 0x1fafdf
    int64_t * v6 = (int64_t *)((v5 & 0xffffffff) - 8); // 0x1fafe6
    *v6 = a4;
    int64_t result = unknown_ffffffffd8e531ee(); // 0x1fafe8
    *(int32_t *)0x2501e8a804f04655 = (int32_t)result;
    *(char *)(a3 - 0x1750ca06 + a4) = (char)v5;
    int32_t v7 = *(int32_t *)&v1 + (int32_t)*v6; // 0x1fafff
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x1fafff
    *(int32_t *)a3 = v7;
    if (v8 % 2 == 0) {
        // 0x1fb049
        return result;
    }
    // 0x1fb004
    bool v9; // 0x1fafdc
    int64_t v10 = v2 + (v9 ? -4 : 4); // 0x1fb004
    *(char *)v10 = (char)*(int32_t *)&v2;
    __asm_sti(a1, v10);
    int64_t v11 = unknown_1291031c(); // 0x1fb015
    int32_t * v12 = (int32_t *)(v1 - 97); // 0x1fb020
    *v12 = *v12 + (int32_t)v10;
    return v11 & 0xffffffff ^ 0xe8af355e;
}

// Address range: 0x1fb04a - 0x1fb059
int64_t function_1fb04a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a1; // 0x1fb04c
    uint32_t v2 = (int32_t)a4 + v1; // 0x1fb04c
    int64_t v3 = __asm_int1((int64_t)v2, a2, a3); // 0x1fb04e
    int64_t v4; // 0x1fb04a
    *(char *)v3 = (char)(v2 < v1) + (char)a4 + (char)v4;
    return function_2c219881(a5);
}

// Address range: 0x1fb069 - 0x1fb0c5
int64_t function_1fb069(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1fb069
    int64_t v1; // 0x1fb069
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + 20;
    int64_t v3 = unknown_29211275(); // 0x1fb06f
    int64_t v4; // 0x1fb069
    *(int32_t *)a4 = *(int32_t *)&v4 + (int32_t)a2;
    char v5 = v3; // 0x1fb076
    __asm_out_133(-30, v5);
    char v6 = v5 - 44; // 0x1fb087
    int64_t result = v3 & -256 | (int64_t)v6; // 0x1fb087
    if (v6 < 0 == ((v6 ^ v5) & v5 + 84) < 0) {
        // 0x1fb08b
        return result;
    }
    int64_t result2 = result + 0xe2d09fb4 & 0xffffffff;
    int32_t * v7 = (int32_t *)((result2 & v1) - 0x1a0e4b92); // 0x1fb0bf
    *v7 = *v7 + (int32_t)a1;
    return result2;
}

// Address range: 0x1fb139 - 0x1fb13c
int64_t function_1fb139(void) {
    // 0x1fb139
    int64_t result; // 0x1fb139
    return result;
}

// Address range: 0x1fb13e - 0x1fb141
int64_t function_1fb13e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1fb13e
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x1fb13e
    return result;
}

// Address range: 0x1fb141 - 0x1fb142
int64_t function_1fb141(void) {
    // 0x1fb141
    int64_t result; // 0x1fb141
    return result;
}

// Address range: 0x1fb177 - 0x1fb182
int64_t function_1fb177(int64_t a1, int64_t a2) {
    // 0x1fb177
    int64_t v1; // 0x1fb177
    *(char *)a2 = (char)v1 % 2;
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x1fb1d0 - 0x1fb1d1
int64_t function_1fb1d0(void) {
    // 0x1fb1d0
    int64_t result; // 0x1fb1d0
    return result;
}

// Address range: 0x1fb1d1 - 0x1fb237
int64_t function_1fb1d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1fb1d1
    int64_t v1; // 0x1fb1d1
    uint64_t v2 = v1;
    *(char *)(a1 + 81 + (4 * a1 & 0x3fffffffc)) = (char)v1;
    int64_t v3 = a4 - 1; // 0x1fb1df
    if (!((v3 == 0 | *(char *)(v2 + 4) == -(char)(v2 / 256)))) {
        function_1fb1d0();
    }
    int64_t v4 = a3 - v1; // 0x1fb1d1
    char v5 = v1 / 256; // 0x1fb1e4
    *(char *)0x20e7d0eb = *(char *)0x20e7d0eb + v5;
    char * v6 = (char *)(v4 & 0xffffffff); // 0x1fb1ea
    *v6 = *v6 - v5;
    int64_t v7 = (int64_t)*(int32_t *)(a4 + 24); // 0x1fb1ee
    int64_t v8 = unknown_769f436a(); // 0x1fb1f6
    *(char *)-0x47e7eefe = *(char *)-0x47e7eefe + v5;
    int64_t v9 = v8 & -256 | (int64_t)(*(char *)v7 & 68); // 0x1fb209
    int32_t * v10 = (int32_t *)(v9 | 10); // 0x1fb20b
    *v10 = *v10 / 2;
    int64_t v11 = v9 & 0xffffff44; // 0x1fb20f
    int32_t * v12 = (int32_t *)v11; // 0x1fb212
    *v12 = *v12 + (int32_t)v1;
    bool v13; // 0x1fb1d1
    *v12 = *(int32_t *)((v13 ? -1 : 1) + v7);
    unsigned char v14 = *(char *)0x242ac91c; // 0x1fb215
    unsigned char v15 = v14 + v5; // 0x1fb215
    *(char *)0x242ac91c = v15;
    uint64_t v16 = a1 & 0xffffff00; // 0x1fb21b
    int64_t v17 = (v4 & (int64_t)&g1 & 0xffffffff) == 0 ? -0x43ffec28 : -0x43ffec30; // 0x1fb214
    char * v18 = (char *)(v11 + v17); // 0x1fb21d
    unsigned char v19 = *v18; // 0x1fb21d
    unsigned char v20 = v19 + (char)(v16 / 256); // 0x1fb21d
    *v18 = v20;
    unsigned char v21 = (char)(a1 + 19 + (int64_t)(v15 < v14)) - 44 + (char)(v20 < v19); // 0x1fb224
    if (v3 == 1 || v21 == 0) {
        // 0x1fb228
        return v16 | (int64_t)v21;
    }
    // 0x1fb22e
    return unknown_ffffffff8b6afee6();
}

// Address range: 0x1fb24c - 0x1fb24f
int64_t function_1fb24c(void) {
    // 0x1fb24c
    int64_t result; // 0x1fb24c
    return result;
}

// Address range: 0x1fb306 - 0x1fb307
int64_t function_1fb306(void) {
    // 0x1fb306
    int64_t result; // 0x1fb306
    return result;
}

// Address range: 0x1fb312 - 0x1fb317
int64_t function_1fb312(void) {
    // 0x1fb312
    return function_fffffffffc1311fe();
}

// Address range: 0x1fb31c - 0x1fb31e
int64_t function_1fb31c(void) {
    // 0x1fb31c
    return function_1fb306();
}

// Address range: 0x1fb342 - 0x1fb39c
int64_t function_1fb342(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6) {
    // 0x1fb342
    int64_t v1; // 0x1fb342
    uint64_t v2 = v1;
    int64_t v3 = a5;
    int64_t v4 = a2;
    char v5 = *(char *)(v2 + 0x32b8117); // 0x1fb342
    int64_t v6 = unknown_ffffffffb419cc4e(); // 0x1fb348
    int32_t * v7 = (int32_t *)(a5 + 0x78ede403); // 0x1fb34d
    *v7 = *v7 + (int32_t)v1;
    *(char *)a1 = (char)v6;
    bool v8; // 0x1fb342
    int64_t v9 = (v8 ? -1 : 1) + a1; // 0x1fb355
    unsigned char v10 = (char)(a6 / 256); // 0x1fb35d
    if (*(char *)(v9 + 0xff8d5b0) < v10) {
        function_1fb306();
    }
    int64_t result = unknown_ffffffffd8e32f6c(); // 0x1fb366
    char v11 = *(char *)&v3; // 0x1fb36e
    unsigned char v12 = (char)v4; // 0x1fb36e
    char v13 = v11 + v12; // 0x1fb36e
    *(char *)v3 = v13;
    if (-1 - v11 < v12 || v13 == 0) {
        // 0x1fb396
        return result;
    }
    int64_t v14 = 256 * (int64_t)(*(char *)&v4 ^ v10) | a6 & -0xff01; // 0x1fb36b
    int64_t v15 = result + 0x1efe172d & 0xffffffff; // 0x1fb373
    int64_t result2 = v15; // 0x1fb378
    if (v14 != 0) {
        int64_t v16 = v4; // 0x1fb378
        int64_t v17 = v14; // 0x1fb378
        int64_t v18 = v15; // 0x1fb378
        v18 = v18 & -256 | (int64_t)*(char *)v16;
        v16++;
        v4 = v16;
        v17--;
        result2 = v18;
        while (v17 != 0) {
            v18 = v18 & -256 | (int64_t)*(char *)v16;
            v16++;
            v4 = v16;
            v17--;
            result2 = v18;
        }
    }
    uint32_t v19 = (int32_t)v6 >> 31; // 0x1fb363
    char v20 = __asm_insb((int16_t)v19); // 0x1fb37a
    *(char *)v9 = v20;
    int32_t * v21 = (int32_t *)((int64_t)v19 + 68); // 0x1fb37e
    int32_t v22 = *v21; // 0x1fb37e
    *v21 = v22 + (int32_t)(v2 & 0xffff0000 | (int64_t)(v5 | (char)v2) | 256 * (int64_t)(v20 & (char)(v2 / 256)));
    return result2;
}

// Address range: 0x1fb3ae - 0x1fb3b3
int64_t function_1fb3ae(void) {
    // 0x1fb3ae
    return function_ffffffff9dad4a6a();
}

// Address range: 0x1fb405 - 0x1fb406
int64_t function_1fb405(void) {
    // 0x1fb405
    int64_t result; // 0x1fb405
    return result;
}

// Address range: 0x2fa21e - 0x2fa21f
int64_t function_2fa21e(void) {
    // 0x2fa21e
    int64_t v1; // 0x2fa21e
    return __asm_sti(v1, v1);
}

// Address range: 0x2fa220 - 0x2fa2aa
int64_t function_2fa220(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x2fa220
    int64_t v1; // 0x2fa220
    return function_caf2a(a1, a2, a3, a4, a7, v1, v1);
}

// Address range: 0x2fa2aa - 0x2fa41b
int64_t function_2fa2aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2fa2aa
    int64_t v1; // bp-48, 0x2fa2aa
    v1 = (int64_t)&v1 + 16;
    return function_caf2a(a1, a2, a3, a4, a5, a6, 0x2f636e);
}

// Address range: 0x2fa41b - 0x2fa565
int64_t function_2fa41b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2fa41b
    int64_t v1; // bp-40, 0x2fa41b
    int64_t v2 = (int64_t)&v1; // 0x2fa525
    v1 = v2 + 16;
    *(int64_t *)(v2 + 8) = v2 + 24;
    int64_t v3; // 0x2fa41b
    return function_caf2a(a1, a2, a3, v3, a5, a6, a7);
}

// Address range: 0x2fa565 - 0x2fa6db
int64_t function_2fa565(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x2f68b4; // bp-16, 0x2fa5a7
    int64_t v2 = (int64_t)&v1; // 0x2fa5e7
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2fa622
    int64_t * v4 = (int64_t *)(v2 + 24); // 0x2fa626
    int64_t v5 = *v4; // 0x2fa626
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x2fa626
    *v6 = v5;
    int64_t v7 = v2 - 24; // 0x2fa62a
    int64_t * v8 = (int64_t *)v7; // 0x2fa62a
    *v8 = v5;
    int64_t v9 = v2 + 8; // 0x2fa63c
    *v6 = 0x5c81e724;
    *v8 = v5;
    v1 = *v6;
    *v8 = v7;
    *v6 = *(int64_t *)v9;
    *v4 = *v3;
    *v3 = a1;
    *v6 = v9;
    int64_t v10 = *v3; // 0x2fa6a3
    *v8 = v10;
    int64_t v11 = *v3; // 0x2fa6ab
    *(int64_t *)(v11 - 8) = *(int64_t *)v11;
    *(int64_t *)(v11 - 24) = a4;
    *(int64_t *)(v11 - 16) = v11;
    return function_caf2a(v10, a2, a3, a4, a5, a6, v1);
}

// Address range: 0x2fa6e4 - 0x2fa6e9
int64_t function_2fa6e4(void) {
    // 0x2fa6e4
    return function_ffffffff8177f846();
}

// Address range: 0x2fa7fb - 0x2fa7fc
int64_t function_2fa7fb(int64_t a1) {
    // 0x2fa7fb
    int64_t result; // 0x2fa7fb
    return result;
}
