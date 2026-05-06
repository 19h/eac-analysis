/*
 * Targeted RetDec C for native executable gap queue batch 491.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x152b13-0x152d13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x152f13-0x153113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x153313-0x153513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x36c31b-0x36c51b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36c71b-0x36c91b rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fdcd1-0x3fded1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fe0d1-0x3fe2d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3fe2d1-0x3fe4d1 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_152a95();
int64_t function_152b13(void);
int64_t function_152c08(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_152c18(void);
int64_t function_152c32(void);
int64_t function_152f13(int64_t a1);
int64_t function_152f91(void);
int64_t function_152f93(void);
int64_t function_152fd2(void);
int64_t function_152fec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1530c6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1530f2(void);
int64_t function_153313(int64_t a1, int64_t a2, int64_t a3);
int64_t function_153320(void);
int64_t function_153356(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1533dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_153445(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1534ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1534c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1fda36e();
int64_t function_36c31b(void);
int64_t function_36c329(void);
int64_t function_36c34a(int64_t a1);
int64_t function_36c37c(void);
int64_t function_36c392(void);
int64_t function_36c3cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36c443(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36c46e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_36c47d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_36c4e0(int64_t a1, int64_t a2);
int64_t function_36c502(void);
int64_t function_36c6bc();
int64_t function_36c6fe();
int64_t function_36c71b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36c738(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36c76a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_36c7e3(void);
int64_t function_36c8dd(void);
int64_t function_3fdcd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fdd5e(void);
int64_t function_3fddb4(void);
int64_t function_3fddbc(void);
int64_t function_3fddbe(void);
int64_t function_3fddc2(void);
int64_t function_3fddc5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3fe0d1(int64_t a1, int64_t a2);
int64_t function_3fe125(void);
int64_t function_3fe141(void);
int64_t function_3fe164(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3fe2ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3fe36d(void);
int64_t function_3fe375(void);
int64_t function_3fe38d(int64_t a1);
int64_t function_3fe3cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3fe41d(void);
int64_t function_3fe430(int64_t a1);
int64_t function_3fe488(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fe4a6(int64_t a1);
int64_t function_77825dc0();
int64_t function_d245d2f();
int64_t function_f666f1();
int64_t function_ffffffffc43d244d();
int64_t function_ffffffffc6f4eb74();
int64_t function_ffffffffdf91634a();
int64_t function_ffffffffe3ca1de5();
int64_t unknown_129ee18a();
int64_t unknown_3aadc921();
int64_t unknown_3d38ac99();
int64_t unknown_473c0727();
int64_t unknown_521718cc();
int64_t unknown_63e63332();
int64_t unknown_6a7edf26();
int64_t unknown_6adf5329();
int64_t unknown_ffffffff981fd460();
int64_t unknown_ffffffff9e0dbb5d();
int64_t unknown_ffffffffc2d50bf4();
int64_t unknown_ffffffffc67eda7e();
int64_t unknown_ffffffffc7488d5d();
int64_t unknown_ffffffffea774aeb();
int64_t unknown_fffffffff394c351();
int64_t unknown_fffffffffde3af45();

// Address range: 0x152b13 - 0x152b1a
int64_t function_152b13(void) {
    // 0x152b13
    int64_t v1; // 0x152b13
    bool v2; // 0x152b13
    if (v2) {
        v1 = function_152a95();
    }
    // 0x152b15
    int64_t v3; // 0x152b13
    return v1 & v3;
}

// Address range: 0x152c08 - 0x152c15
int64_t function_152c08(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x152c08
    int64_t v1; // 0x152c08
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x152c18 - 0x152c1b
int64_t function_152c18(void) {
    // 0x152c18
    int64_t result; // 0x152c18
    return result;
}

// Address range: 0x152c32 - 0x152c33
int64_t function_152c32(void) {
    // 0x152c32
    int64_t result; // 0x152c32
    return result;
}

// Address range: 0x152f13 - 0x152f31
int64_t function_152f13(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 108); // 0x152f15
    int64_t v2; // 0x152f13
    *v1 = *v1 + (int32_t)v2;
    unknown_6adf5329();
    __asm_int(65);
    return unknown_63e63332();
}

// Address range: 0x152f91 - 0x152f92
int64_t function_152f91(void) {
    // 0x152f91
    int64_t result; // 0x152f91
    return result;
}

// Address range: 0x152f93 - 0x152f94
int64_t function_152f93(void) {
    // 0x152f93
    int64_t result; // 0x152f93
    return result;
}

// Address range: 0x152fd2 - 0x152fd3
int64_t function_152fd2(void) {
    // 0x152fd2
    int64_t result; // 0x152fd2
    return result;
}

// Address range: 0x152fec - 0x153068
int64_t function_152fec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x152fec
    int64_t v1; // 0x152fec
    uint64_t v2 = v1;
    if (a4 == 1) {
        // 0x152fee
        unknown_ffffffffc2d50bf4();
        abort();
        // UNREACHABLE
    }
    // 0x15304e
    __asm_out_133(-38, (char)v1);
    bool v3; // 0x152fec
    int64_t v4 = v3 ? -1 : 1; // 0x153050
    int64_t v5 = v4 + a1; // 0x153050
    int64_t v6 = v1 & 0xffffffff; // 0x153056
    int64_t v7 = unknown_ffffffff9e0dbb5d(v5, v4 + a2, v6); // 0x153057
    int32_t * v8 = (int32_t *)(v6 - 99); // 0x15305c
    *v8 = *v8 + (int32_t)v1;
    if (*(int32_t *)v5 > (int32_t)v7) {
        // 0x153062
        return function_1fda36e(v5 + (v3 ? -4 : 4));
    }
    char * v9 = (char *)(v2 - 0x776af3fc); // 0x153014
    *v9 = *v9 - (char)(v2 / 256);
    unknown_3aadc921();
    return function_152fd2();
}

// Address range: 0x1530c6 - 0x1530d2
int64_t function_1530c6(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_521718cc(a1, a2, a3); // 0x1530c6
    __asm_rcl(*(char *)result);
    int64_t v1; // 0x1530c6
    *(char *)a2 = (char)(v1 ^ v1);
    return result;
}

// Address range: 0x1530f2 - 0x1530f5
int64_t function_1530f2(void) {
    // 0x1530f2
    int64_t result; // 0x1530f2
    return result;
}

// Address range: 0x153313 - 0x153320
int64_t function_153313(int64_t a1, int64_t a2, int64_t a3) {
    // 0x153313
    int64_t result; // 0x153313
    __asm_out(109, (int32_t)result);
    return result;
}

// Address range: 0x153320 - 0x153321
int64_t function_153320(void) {
    // 0x153320
    int64_t result; // 0x153320
    return result;
}

// Address range: 0x153356 - 0x153398
int64_t function_153356(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x153356
    int64_t v1; // 0x153356
    char v2 = *(char *)0x34376360 | (char)v1; // 0x153358
    unsigned char v3 = llvm_ctpop_i8(v2); // 0x153358
    *(char *)0x34376360 = v2;
    int64_t v4 = 0x8000 * (int64_t)(v2 < 0) | 0x4000 * (int64_t)(v2 == 0) | 1024 * (int64_t)(v3 % 2 == 0) | 512; // 0x15335f
    int64_t v5 = v4 | a1 & 0xffff00ff; // bp-24, 0x153369
    int64_t v6 = a4 - 1; // 0x15336a
    __asm_in(95);
    *(char *)0x2a12a875 = *(char *)0x2a12a875 + (char)(v1 / 256);
    if (*(int32_t *)v6 == (int32_t)v6) {
        function_153320();
    }
    int32_t v7 = *(int32_t *)0x34031e88; // 0x153381
    *(int32_t *)0x34031e88 = v7 + (int32_t)(v4 | v1 & 0xffff0000);
    char * v8 = (char *)((int64_t)&v5 + 0x1c807a18c); // 0x153387
    *v8 = *v8 + 1;
    uint32_t v9 = (int32_t)a2 - 0x17b151f0; // 0x15338b
    int64_t result = v9; // 0x15338b
    int32_t * v10 = (int32_t *)result; // 0x153390
    *v10 = *v10 + v9;
    return result;
}

// Address range: 0x1533dc - 0x1533ee
int64_t function_1533dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffea774aeb(); // 0x1533e5
    return (v1 + 37) % 256 | v1 & -256;
}

// Address range: 0x153445 - 0x15349b
int64_t function_153445(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_fffffffff394c351(); // 0x15344b
    int32_t * v2 = (int32_t *)(v1 + 12); // 0x153450
    int64_t v3; // 0x153445
    *v2 = *v2 + (int32_t)v3;
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v4 = a1 - 4; // 0x153453
    char * v5 = (char *)(v1 - 0x78aae9f7); // 0x153454
    *v5 = *v5 + (char)a4;
    unknown_ffffffff981fd460(v4);
    *(int32_t *)0x9300891d = -0x6cff76e3;
    *(char *)v4 = 29;
    __asm_out_134((int16_t)((int32_t)v3 >> 31), -0x60b8fe18);
    *(char *)0x9f4701e8 = *(char *)0x9f4701e8 + 24;
    int64_t v6; // 0x153445
    uint32_t v7 = *(int32_t *)&v6 & (int32_t)unknown_ffffffffc67eda7e(); // 0x153480
    char * v8 = (char *)(int64_t)v7; // 0x153482
    unsigned char v9 = *v8; // 0x153482
    *v8 = v9 / 128 | 2 * v9;
    int64_t v10 = a4 - 1; // 0x153486
    int64_t v11 = (v7 & -256 | (int32_t)__asm_in(11)) + (int32_t)v10; // 0x15348f
    int32_t result = __asm_in_135(23); // 0x153490
    *(int64_t *)(v11 - 8) = v10;
    *(int64_t *)(v11 - 16) = -24;
    return result;
}

// Address range: 0x1534ab - 0x1534c2
int64_t function_1534ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1534ab
    int64_t v1; // 0x1534ab
    int64_t v2 = v1;
    __asm_out_133(-2, (char)v2);
    float80_t v3; // 0x1534ab
    *(float32_t *)(a2 + 3) = (float32_t)v3;
    int32_t * v4 = (int32_t *)(v2 - 15); // 0x1534b5
    *v4 = *v4 + (int32_t)a1;
    *(float64_t *)v1 = (float64_t)v3;
    return (v2 + 22) % 256 | v2 & -256;
}

// Address range: 0x1534c2 - 0x1534cd
int64_t function_1534c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x3a7762f5); // 0x1534c2
    *v1 = *v1 + (int32_t)a1;
    return function_ffffffffdf91634a();
}

// Address range: 0x36c31b - 0x36c321
int64_t function_36c31b(void) {
    // 0x36c31b
    return unknown_6a7edf26();
}

// Address range: 0x36c329 - 0x36c337
int64_t function_36c329(void) {
    // 0x36c329
    int64_t v1; // 0x36c329
    *(char *)0x1e830d63a033807 = (char)v1;
    return function_ffffffffc43d244d();
}

// Address range: 0x36c34a - 0x36c34b
int64_t function_36c34a(int64_t a1) {
    // 0x36c34a
    int64_t result; // 0x36c34a
    return result;
}

// Address range: 0x36c37c - 0x36c37d
int64_t function_36c37c(void) {
    // 0x36c37c
    int64_t result; // 0x36c37c
    return result;
}

// Address range: 0x36c392 - 0x36c394
int64_t function_36c392(void) {
    // 0x36c392
    return function_36c37c();
}

// Address range: 0x36c3cd - 0x36c3d7
int64_t function_36c3cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36c3cd
    int64_t result; // 0x36c3cd
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)a3;
    return result;
}

// Address range: 0x36c443 - 0x36c462
int64_t function_36c443(int64_t a1, int64_t a2, int64_t a3) {
    // 0x36c443
    int64_t v1; // 0x36c443
    bool v2; // 0x36c443
    __asm_out(-24, *(int32_t *)(v1 + 14) + (int32_t)v1 + (int32_t)v2);
    float80_t v3; // 0x36c443
    *(float80_t *)(v1 + 0x48baceca) = __asm_fbstp(v3);
    return unknown_ffffffffc7488d5d();
}

// Address range: 0x36c46e - 0x36c477
int64_t function_36c46e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x36c46e
    int64_t result; // 0x36c46e
    char * v1 = (char *)(result + 35); // 0x36c46e
    *v1 = *v1 & (char)(a3 / 256);
    float80_t v2; // 0x36c46e
    *(float32_t *)(result - 73) = (float32_t)v2;
    return result;
}

// Address range: 0x36c47d - 0x36c49d
int64_t function_36c47d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x36c47d
    *(int32_t *)a1 = (int32_t)unknown_129ee18a();
    *(char *)-0x1c1b2ac1 = (char)a3;
    char * v1 = (char *)(4 * a2 + a4); // 0x36c490
    *v1 = *v1 + (char)(a3 / 256);
    bool v2; // 0x36c47d
    return unknown_3d38ac99((v2 ? -4 : 4) + a1);
}

// Address range: 0x36c4e0 - 0x36c4e4
int64_t function_36c4e0(int64_t a1, int64_t a2) {
    // 0x36c4e0
    int64_t result; // 0x36c4e0
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x36c502 - 0x36c504
int64_t function_36c502(void) {
    // 0x36c502
    int64_t result; // 0x36c502
    return result;
}

// Address range: 0x36c71b - 0x36c733
int64_t function_36c71b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36c71b
    int64_t v1; // 0x36c71b
    __asm_out_133(32, (char)v1);
    if (a4 == 0) {
        function_36c6fe();
    }
    int64_t v2 = unknown_473c0727(); // 0x36c721
    bool v3; // 0x36c71b
    if (v3) {
        // 0x36c728
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        return (v2 + 29) % 256 | v2 & -256;
    }
    char v4 = *(char *)(v2 + 8 * v1); // 0x36c72e
    int64_t result = v2 & -256 | (int64_t)((char)v2 + (char)v3 + v4); // 0x36c72e
    *(int32_t *)a1 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x36c738 - 0x36c757
int64_t function_36c738(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36c738
    bool v1; // 0x36c738
    if (!v1) {
        function_36c6bc();
    }
    int64_t v2 = unknown_fffffffffde3af45(); // 0x36c73f
    *(char *)a3 = (char)v2 + (char)a3;
    unsigned char v3 = *(char *)0x1e83bb552a46201; // 0x36c747
    int64_t v4; // 0x36c738
    int32_t v5 = *(int32_t *)&v4; // 0x36c754
    __asm_outsd((int16_t)a3 % 256 | (int16_t)&g2, v5);
    return 0x10000 * (int32_t)(v2 & 0xff00 | (int64_t)v3) >> 16;
}

// Address range: 0x36c76a - 0x36c7ce
int64_t function_36c76a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    uint32_t v1 = (int32_t)a4; // 0x36c76f
    int64_t v2; // 0x36c76a
    uint32_t v3 = *(int32_t *)(v2 - 0x4974c69); // 0x36c76f
    uint32_t v4 = v3 + v1; // 0x36c76f
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x36c76f
    int64_t v6 = v4 < v1 ? 0xe894c577 : 0xe894c576; // 0x36c777
    return (v2 & 0xffff00ff | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v4 < v1) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v3 % 16 + v1 % 16 > 15) | 4 * (int64_t)(v5 % 2 == 0)) | 512) + v6 & 0xffffffff;
}

// Address range: 0x36c7e3 - 0x36c7ea
int64_t function_36c7e3(void) {
    // 0x36c7e3
    int64_t result; // 0x36c7e3
    return result;
}

// Address range: 0x36c8dd - 0x36c8e8
int64_t function_36c8dd(void) {
    // 0x36c8dd
    return function_f666f1();
}

// Address range: 0x3fdcd1 - 0x3fdcf9
int64_t function_3fdcd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 34 + 2 * a3); // 0x3fdcd1
    unsigned char v2 = *v1; // 0x3fdcd1
    *v1 = v2 / 128 | 2 * v2;
    int32_t * v3 = (int32_t *)((a1 & 0xffffffff) + 0xa9bd578); // 0x3fdced
    bool v4; // 0x3fdcd1
    *v3 = *v3 & (int32_t)((v4 ? 0xfffffffc : 4) + a2);
    return a1 & 0xec930a9e | 0x136cf561;
}

// Address range: 0x3fdd5e - 0x3fdd5f
int64_t function_3fdd5e(void) {
    // 0x3fdd5e
    int64_t result; // 0x3fdd5e
    return result;
}

// Address range: 0x3fddb4 - 0x3fddb5
int64_t function_3fddb4(void) {
    // 0x3fddb4
    int64_t result; // 0x3fddb4
    return result;
}

// Address range: 0x3fddbc - 0x3fddbe
int64_t function_3fddbc(void) {
    // 0x3fddbc
    return function_3fdd5e();
}

// Address range: 0x3fddbe - 0x3fddbf
int64_t function_3fddbe(void) {
    // 0x3fddbe
    int64_t result; // 0x3fddbe
    return result;
}

// Address range: 0x3fddc2 - 0x3fddc3
int64_t function_3fddc2(void) {
    // 0x3fddc2
    int64_t result; // 0x3fddc2
    return result;
}

// Address range: 0x3fddc5 - 0x3fdeca
int64_t function_3fddc5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = *(char *)-0x575f9886175deff2; // 0x3fddc5
    int64_t v2 = 0x65d699; // bp-8, 0x3fddce
    int64_t v3; // 0x3fddc5
    *(int32_t *)a1 = (int32_t)v3;
    bool v4; // 0x3fddc5
    int64_t v5 = v4 ? -4 : 4; // 0x3fddd6
    unsigned char v6 = v1 + (char)v4; // 0x3fddd7
    unsigned char v7 = (char)a4;
    int32_t v8 = a3;
    int32_t * v9 = (int32_t *)(v5 + a2); // 0x3fdddf
    bool v10 = !v4 ? v6 <= v1 : v1 != 0; // 0x3fddd7
    int64_t v11 = v3 & -256 | (int64_t)v6;
    int64_t v12 = (v11 + 122 + (int64_t)v10) % 256 | v11 & -256; // 0x3fddda
    uint32_t v13 = (int32_t)(int64_t)&v2; // 0x3fdddf
    *v9 = *v9 + v13 + (int32_t)(*(char *)(v3 + 86) < v7);
    int64_t v14; // 0x3fddc5
    uint32_t v15 = (int32_t)v14; // 0x3fdde1
    uint32_t v16 = *(int32_t *)(v12 + 62) + v15; // 0x3fdde1
    *(int32_t *)(v3 - 117) = v16;
    int64_t v17 = v12; // 0x3fdded
    if (v16 >= 0) {
        v17 = function_3fddb4();
    }
    int32_t v18 = v16 < v15; // 0x3fddef
    uint32_t v19 = v18 + v13; // 0x3fddef
    uint32_t v20 = (int32_t)(v16 < v15);
    uint32_t v21 = v20 - v18; // 0x3fddef
    int64_t v22 = v17; // 0x3fddf1
    if (((v19 ^ v13) & (v21 ^ v13)) >= 0) {
        v22 = function_3fddc2();
    }
    int64_t v23 = v16; // 0x3fdde1
    int64_t v24 = v20; // 0x3fddef
    uint32_t v25 = *(int32_t *)0x290426f6; // 0x3fddf8
    uint32_t v26 = v25 + v8; // 0x3fddf8
    *(int32_t *)0x290426f6 = v26;
    while (((v26 ^ v25) & (v26 ^ v8)) < 0) {
        int64_t v27 = v16 < v15 ? v21 > v13 | v19 != -1 : v19 > v13 ? 0x40f1e873 : 0x40f1e872; // 0x3fddf3
        v11 = v22 + v27 & 0xffffffff;
        v12 = (v11 + 122 + (int64_t)(v26 < v25)) % 256 | v11 & -256;
        v13 = (int32_t)v24;
        *v9 = *v9 + v13 + (int32_t)(*(char *)0x2904274d < v7);
        v15 = (int32_t)v23;
        v16 = *(int32_t *)(v12 + 62) + v15;
        *(int32_t *)(v3 - 117) = v16;
        v17 = v12;
        if (v16 >= 0) {
            v17 = function_3fddb4();
        }
        // 0x3fddef
        v18 = v16 < v15;
        v19 = v18 + v13;
        v20 = (int32_t)(v16 < v15);
        v21 = v20 - v18;
        v22 = v17;
        if (((v19 ^ v13) & (v21 ^ v13)) >= 0) {
            v22 = function_3fddc2();
        }
        // 0x3fddf3
        v23 = v16;
        v24 = v20;
        v25 = *(int32_t *)0x290426f6;
        v26 = v25 + v8;
        *(int32_t *)0x290426f6 = v26;
    }
    int64_t v28 = v5 + a1; // 0x3fddd6
    int64_t v29 = (int64_t)*(int32_t *)v28; // 0x3fddfd
    if (0xd960018 * v29 != 0xd96001800000000 * v29 >> 32) {
        // 0x3fde05
        return function_d245d2f((int32_t)(v28 | a3));
    }
    int64_t v30 = *(int64_t *)v24; // 0x3fde7b
    int64_t result = v30 & -146; // 0x3fde7c
    int32_t * v31 = (int32_t *)(a3 - 84 + 2 * result); // 0x3fde7e
    *v31 = *v31 + 0x290426f7;
    __asm_out_136((int16_t)a3, (char)result);
    if (llvm_ctpop_i8((char)(a3 / 256) - v7) % 2 != 0) {
        // 0x3fdec6
        __asm_out(-56, (int32_t)result);
        return result;
    }
    int32_t v32 = *(int32_t *)(2 * v3 - 0x452f75b2); // 0x3fde84
    *(int64_t *)((int64_t)(v20 + 16 - v32) - 8) = v23;
    return v30 & -220;
}

// Address range: 0x3fe0d1 - 0x3fe0db
int64_t function_3fe0d1(int64_t a1, int64_t a2) {
    // 0x3fe0d1
    int64_t v1; // 0x3fe0d1
    int64_t v2 = v1 & -0xff01 | (int64_t)&g1; // 0x3fe0d1
    int32_t * v3 = (int32_t *)(a2 - 0x5dc4d201); // 0x3fe0d3
    bool v4; // 0x3fe0d1
    *v3 = *v3 + (int32_t)v2 + (int32_t)v4;
    return 256 * v2 & 0xff00 | v1;
}

// Address range: 0x3fe125 - 0x3fe12a
int64_t function_3fe125(void) {
    // 0x3fe125
    return function_ffffffffc6f4eb74();
}

// Address range: 0x3fe141 - 0x3fe144
int64_t function_3fe141(void) {
    // 0x3fe141
    int64_t result; // 0x3fe141
    return result;
}

// Address range: 0x3fe164 - 0x3fe29b
int64_t function_3fe164(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2; // 0x3fe164
    unsigned char v3 = (char)v2 + 113; // 0x3fe164
    int64_t v4 = v3; // 0x3fe164
    if (v3 != 0) {
        // 0x3fe168
        return v2 & -256 | v4;
    }
    // 0x3fe1cf
    *(char *)a1 = __asm_insb((int16_t)a3);
    uint32_t v5 = *(int32_t *)&v1; // 0x3fe1d6
    int32_t v6 = v5 + 87; // 0x3fe1d6
    *(int32_t *)v1 = v6;
    if (v5 > 0xffffffa8 || v6 == 0) {
        // 0x3fe22b
        *(int64_t *)(v2 + 8) = -8;
        return (int64_t)__asm_in(72) & -0xffffff3e | (int64_t)"OW" | 0xffff003d;
    }
    // 0x3fe1db
    return v4 | 0xffffffe1;
}

// Address range: 0x3fe2ee - 0x3fe302
int64_t function_3fe2ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3fe2ee
    int64_t v1; // 0x3fe2ee
    char * v2 = (char *)(v1 + 12); // 0x3fe2f3
    *v2 = *v2 ^ (char)v1;
    *(int32_t *)(v1 + 99) = (int32_t)v1;
    char * v3 = (char *)(a5 - 58); // 0x3fe2f9
    *v3 = *v3 - (char)v1;
    return v1 & (256 * a3 | -0xff01);
}

// Address range: 0x3fe36d - 0x3fe36e
int64_t function_3fe36d(void) {
    // 0x3fe36d
    int64_t result; // 0x3fe36d
    return result;
}

// Address range: 0x3fe375 - 0x3fe37a
int64_t function_3fe375(void) {
    // 0x3fe375
    return function_77825dc0();
}

// Address range: 0x3fe38d - 0x3fe38e
int64_t function_3fe38d(int64_t a1) {
    // 0x3fe38d
    int64_t result; // 0x3fe38d
    return result;
}

// Address range: 0x3fe3cd - 0x3fe3ee
int64_t function_3fe3cd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3fe3cd
    int64_t v1; // 0x3fe3cd
    int32_t * v2 = (int32_t *)(v1 + 56 + (2 * v1 ^ 438)); // 0x3fe3d0
    *v2 = *v2 + (int32_t)a2;
    int32_t v3 = *(int32_t *)(a3 + 0x203071c2); // 0x3fe3d7
    char * v4 = (char *)(a2 + 27); // 0x3fe3e4
    *v4 = *v4 & (char)((v3 & (int32_t)v1) / 256);
    function_3fe36d();
    return function_ffffffffe3ca1de5();
}

// Address range: 0x3fe41d - 0x3fe420
int64_t function_3fe41d(void) {
    // 0x3fe41d
    int64_t result; // 0x3fe41d
    return result;
}

// Address range: 0x3fe430 - 0x3fe432
int64_t function_3fe430(int64_t a1) {
    // 0x3fe430
    int64_t result; // 0x3fe430
    return result;
}

// Address range: 0x3fe488 - 0x3fe48b
int64_t function_3fe488(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3fe488
    int64_t v1; // 0x3fe488
    bool v2; // 0x3fe488
    return v1 + a3 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x3fe4a6 - 0x3fe4ab
int64_t function_3fe4a6(int64_t a1) {
    // 0x3fe4a6
    int64_t result; // 0x3fe4a6
    return result;
}
