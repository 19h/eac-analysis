/*
 * Targeted RetDec C for native executable gap queue batch 288.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2f561e-0x2f581e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f581e-0x2f5a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f5a1e-0x2f5c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f5c1e-0x2f5e1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x315cbb-0x315ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x315ebb-0x3160bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3160bb-0x3162bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x436067-0x436267 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2f561e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f5646(void);
int64_t function_2f565d(void);
int64_t function_2f5698(int64_t a1);
int64_t function_2f576c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f57f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2f5879(void);
int64_t function_2f5893(int64_t a1);
int64_t function_2f58a0(void);
int64_t function_2f58ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f591e(void);
int64_t function_2f5932(int64_t a1);
int64_t function_2f593c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f596a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f5983(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f5990(void);
int64_t function_2f599c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f59a7(int64_t a1);
int64_t function_2f59ae(int64_t a1);
int64_t function_2f59c2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f59f1(void);
int64_t function_2f5a68(void);
int64_t function_2f5a81(int64_t a1, int64_t a2);
int64_t function_2f5ab6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2f5b2c(void);
int64_t function_2f5bc6(int64_t a1);
int64_t function_2f5c1b(void);
int64_t function_2f5c35(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f5c61(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f5ca6(void);
int64_t function_2f5d05(void);
int64_t function_2f5d06(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f5d29(void);
int64_t function_2f5d2f(int64_t a1);
int64_t function_2f5d3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f5d73(void);
int64_t function_2f5d78(void);
int64_t function_315cbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_315d6c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_315e07(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_315e3e(void);
int64_t function_315e57(int64_t a1);
int64_t function_315e69(int64_t a1);
int64_t function_315e71(void);
int64_t function_315e9d(int64_t a1);
int64_t function_315ea5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_315ffa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_316010(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_316053(void);
int64_t function_3160dc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_31610a(void);
int64_t function_316110(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3161e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_316255(void);
int64_t function_316295(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34cb27c9();
int64_t function_3d2fa420();
int64_t function_436067(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4360b9(int64_t a1);
int64_t function_43614c(void);
int64_t function_4361c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_436216(int64_t a1);
int64_t function_4b2ed958();
int64_t function_559b5b21();
int64_t function_697d17();
int64_t function_c212209();
int64_t function_ffffffffc03809da();
int64_t unknown_1076a835();
int64_t unknown_10e994c1();
int64_t unknown_26bb7679();
int64_t unknown_29d0d7ef();
int64_t unknown_3e2a130d();
int64_t unknown_684eb55b();
int64_t unknown_7309575();
int64_t unknown_ffffffffa03a2372();
int64_t unknown_ffffffffa8d4ec1b();
int64_t unknown_ffffffffb46cb76a();
int64_t unknown_ffffffffb93202f9();
int64_t unknown_ffffffffea837d1a();
int64_t unknown_ffffffffedbc6342();

// Address range: 0x2f561e - 0x2f563e
int64_t function_2f561e(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + (int64_t)"IBC_2.3.4"); // 0x2f5625
    int64_t v2; // 0x2f561e
    *v1 = *v1 ^ (int32_t)v2;
    __asm_int1();
    int64_t v3; // 0x2f561e
    *(char *)a1 = *(char *)&v3;
    int64_t v4; // 0x2f561e
    return (int64_t)&v4 & -256 | (int64_t)__asm_in(0);
}

// Address range: 0x2f5646 - 0x2f5649
int64_t function_2f5646(void) {
    // 0x2f5646
    int64_t result; // 0x2f5646
    return result;
}

// Address range: 0x2f565d - 0x2f565e
int64_t function_2f565d(void) {
    // 0x2f565d
    int64_t result; // 0x2f565d
    return result;
}

// Address range: 0x2f5698 - 0x2f5699
int64_t function_2f5698(int64_t a1) {
    // 0x2f5698
    int64_t result; // 0x2f5698
    return result;
}

// Address range: 0x2f576c - 0x2f5773
int64_t function_2f576c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f576c
    int64_t result; // 0x2f576c
    return result;
}

// Address range: 0x2f57f4 - 0x2f585b
int64_t function_2f57f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2f57f4
    int64_t v1; // 0x2f57f4
    int64_t v2 = v1;
    __asm_outsd((int16_t)a3, (int32_t)v1);
    unknown_ffffffffea837d1a();
    *(char *)0x4125320 = *(char *)0x4125320 + (char)(v1 / 256);
    int64_t v3 = (int64_t)(*(int32_t *)-0x71cdb858 & (int32_t)a1); // 0x2f581f
    *(char *)a6 = -1;
    int64_t v4; // 0x2f57f4
    *(int32_t *)v3 = *(int32_t *)&v4;
    bool v5; // 0x2f57f4
    int64_t v6 = v5 ? -4 : 4; // 0x2f5829
    float80_t v7; // 0x2f57f4
    *(int64_t *)(v2 + 58 + 2 * v2) = (int64_t)v7;
    int32_t * v8 = (int32_t *)(__asm_sti(v6 + v3, v6 + a2) & 0xffffffff ^ 0xeb48340c); // 0x2f5846
    uint32_t v9 = *v8; // 0x2f5846
    uint32_t v10 = v9 + (int32_t)&g2; // 0x2f5846
    *v8 = v10;
    return unknown_7309575() + 0x5302682a + (int64_t)(v10 < v9) & 0xffffff17 | 232;
}

// Address range: 0x2f5879 - 0x2f587b
int64_t function_2f5879(void) {
    // 0x2f5879
    int64_t result; // 0x2f5879
    return result;
}

// Address range: 0x2f5893 - 0x2f589b
int64_t function_2f5893(int64_t a1) {
    // 0x2f5893
    int64_t v1; // 0x2f5893
    *(int32_t *)a1 = 2 * (int32_t)v1;
    return function_34cb27c9();
}

// Address range: 0x2f58a0 - 0x2f58a1
int64_t function_2f58a0(void) {
    // 0x2f58a0
    int64_t result; // 0x2f58a0
    return result;
}

// Address range: 0x2f58ea - 0x2f58f5
int64_t function_2f58ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 0x3d0002ab); // 0x2f58ec
    int64_t result; // 0x2f58ea
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2f591e - 0x2f591f
int64_t function_2f591e(void) {
    // 0x2f591e
    int64_t result; // 0x2f591e
    return result;
}

// Address range: 0x2f5932 - 0x2f593c
int64_t function_2f5932(int64_t a1) {
    // 0x2f5932
    int64_t v1; // 0x2f5932
    return v1 & 0xffffffff;
}

// Address range: 0x2f593c - 0x2f5953
int64_t function_2f593c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x7b217043; // 0x2f593c
    int64_t result; // 0x2f593c
    *(char *)0x7b217043 = v1 + (char)((uint64_t)result / 256);
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    char v2 = result; // 0x2f594c
    int64_t v3; // 0x2f593c
    unsigned char v4 = *(char *)&v3; // 0x2f594c
    if (v4 < v2 || v4 > v2) {
        // 0x2f5961
        return result;
    }
    // 0x2f5951
    return function_2f591e();
}

// Address range: 0x2f596a - 0x2f5982
int64_t function_2f596a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f596a
    return 0xbb0c0b2f;
}

// Address range: 0x2f5983 - 0x2f5990
int64_t function_2f5983(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f5983
    int64_t v1; // 0x2f5983
    uint64_t v2 = v1;
    return v2 / 2 % 128 | v2 & -256;
}

// Address range: 0x2f5990 - 0x2f599c
int64_t function_2f5990(void) {
    // 0x2f5990
    int64_t v1; // 0x2f5990
    float80_t v2; // 0x2f5990
    *(int64_t *)(v1 - 0x6f0bfd11) = (int64_t)v2;
    return function_697d17();
}

// Address range: 0x2f599c - 0x2f59a7
int64_t function_2f599c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 34); // 0x2f59a2
    *v1 = *v1 ^ (int32_t)a4;
    int64_t v2; // 0x2f599c
    return 0x10000 * (int32_t)v2 >> 16;
}

// Address range: 0x2f59a7 - 0x2f59ac
int64_t function_2f59a7(int64_t a1) {
    // 0x2f59a7
    int64_t v1; // 0x2f59a7
    int64_t v2 = v1;
    return (v2 + v1) % 256 | v2 & -256;
}

// Address range: 0x2f59ae - 0x2f59b1
int64_t function_2f59ae(int64_t a1) {
    // 0x2f59ae
    int64_t result; // 0x2f59ae
    return result;
}

// Address range: 0x2f59c2 - 0x2f59d5
int64_t function_2f59c2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f59c2
    int64_t result; // 0x2f59c2
    return result;
}

// Address range: 0x2f59f1 - 0x2f59f9
int64_t function_2f59f1(void) {
    // 0x2f59f1
    return function_559b5b21();
}

// Address range: 0x2f5a68 - 0x2f5a69
int64_t function_2f5a68(void) {
    // 0x2f5a68
    int64_t result; // 0x2f5a68
    return result;
}

// Address range: 0x2f5a81 - 0x2f5a88
int64_t function_2f5a81(int64_t a1, int64_t a2) {
    // 0x2f5a81
    return a1 & 0xffffff00 | (int64_t)__asm_in_133(-96);
}

// Address range: 0x2f5ab6 - 0x2f5ade
int64_t function_2f5ab6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2f5ab6
    int64_t v1; // 0x2f5ab6
    int64_t v2 = v1 & 0xc05fc7f8; // 0x2f5ab6
    int16_t v3 = a3; // 0x2f5abb
    __asm_out_134(v3, (char)v2);
    char * v4 = (char *)v2; // 0x2f5abc
    *v4 = *v4 + (char)(a4 / 256);
    int64_t v5; // 0x2f5ab6
    __asm_outsb(v3, *(char *)&v5);
    int32_t * v6 = (int32_t *)(v1 - 0x58290fa1); // 0x2f5ac9
    *v6 = *v6 | (int32_t)a4;
    if ((a3 & 0x40000000) == 0) {
        function_2f5a68();
    }
    // 0x2f5ad4
    return function_c212209();
}

// Address range: 0x2f5b2c - 0x2f5b35
int64_t function_2f5b2c(void) {
    // 0x2f5b2c
    int64_t result; // 0x2f5b2c
    return result;
}

// Address range: 0x2f5bc6 - 0x2f5bc9
int64_t function_2f5bc6(int64_t a1) {
    // 0x2f5bc6
    int64_t result; // 0x2f5bc6
    return result;
}

// Address range: 0x2f5c1b - 0x2f5c1c
int64_t function_2f5c1b(void) {
    // 0x2f5c1b
    int64_t result; // 0x2f5c1b
    return result;
}

// Address range: 0x2f5c35 - 0x2f5c3b
int64_t function_2f5c35(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f5c35
    int64_t v1; // 0x2f5c35
    *(int32_t *)a1 = (int32_t)v1;
    char * v2 = (char *)(v1 + 1); // 0x2f5c36
    *v2 = *v2 + (char)a4;
    return function_2f5c1b();
}

// Address range: 0x2f5c61 - 0x2f5c7b
int64_t function_2f5c61(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_ffffffffb46cb76a(); // 0x2f5c64
    uint32_t v2 = 0x10000 * (int32_t)a1 >> 16; // 0x2f5c6a
    int64_t v3; // 0x2f5c61
    *(char *)(int64_t)v2 = (char)v3 - (char)v2;
    return unknown_26bb7679(v1 & 0xffffffff);
}

// Address range: 0x2f5ca6 - 0x2f5cab
int64_t function_2f5ca6(void) {
    // 0x2f5ca6
    return function_4b2ed958();
}

// Address range: 0x2f5d05 - 0x2f5d06
int64_t function_2f5d05(void) {
    // 0x2f5d05
    int64_t result; // 0x2f5d05
    return result;
}

// Address range: 0x2f5d06 - 0x2f5d13
int64_t function_2f5d06(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f5d06
    int64_t v1; // 0x2f5d06
    int64_t v2 = v1;
    bool v3; // 0x2f5d06
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a4 + (int32_t)v3;
    return v2 & -256 | 234;
}

// Address range: 0x2f5d29 - 0x2f5d2a
int64_t function_2f5d29(void) {
    // 0x2f5d29
    int64_t result; // 0x2f5d29
    return result;
}

// Address range: 0x2f5d2f - 0x2f5d36
int64_t function_2f5d2f(int64_t a1) {
    // 0x2f5d2f
    return unknown_1076a835(a1);
}

// Address range: 0x2f5d3c - 0x2f5d72
int64_t function_2f5d3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    unknown_ffffffffedbc6342();
    int64_t v2 = __asm_int1(); // 0x2f5d47
    char * v3 = (char *)v2; // 0x2f5d48
    *v3 = *v3 - (char)v2;
    uint32_t v4 = (int32_t)v2; // 0x2f5d54
    if (v4 < 0xcb015176 || (v4 < 0xcb015176 ? 0x2306ac5 : 0x2306ac4) > v4) {
        function_2f5d29();
    }
    // 0x2f5d60
    *(int32_t *)0x6c2692cd = *(int32_t *)0x6c2692cd + (int32_t)a2;
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a1;
    __asm_iretd();
    return function_2f5d05();
}

// Address range: 0x2f5d73 - 0x2f5d78
int64_t function_2f5d73(void) {
    // 0x2f5d73
    return function_3d2fa420();
}

// Address range: 0x2f5d78 - 0x2f5d7f
int64_t function_2f5d78(void) {
    // 0x2f5d78
    int64_t v1; // 0x2f5d78
    int64_t v2 = 2 * v1; // 0x2f5d78
    int32_t * v3 = (int32_t *)(v1 + 49); // 0x2f5d7a
    *v3 = *v3 - (int32_t)v2;
    return v2 & 0xffffffff;
}

// Address range: 0x315cbb - 0x315ce5
int64_t function_315cbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = unknown_10e994c1(); // 0x315cbb
    *(int32_t *)a1 = (int32_t)v1;
    char * v2 = (char *)v1; // 0x315cc1
    *v2 = *v2 + (char)v1;
    char * v3 = (char *)(a4 + 0x1518000 + 2 * a3); // 0x315cc3
    *v3 = *v3 + (char)(v1 / 256);
    __asm_out((int16_t)v1, (int32_t)a3);
    int64_t v4; // 0x315cbb
    __asm_rcl(*(int32_t *)&v4);
    bool v5; // 0x315cbb
    *(int32_t *)(v1 & 0xffffffff) = (int32_t)((v5 ? 0xfffffff8 : 8) + a1);
    int64_t v6; // 0x315cbb
    int32_t v7 = *(int32_t *)&v6; // 0x315cdd
    int64_t v8; // bp+5880, 0x315cbb
    *(int32_t *)v6 = v7 + ((int32_t)(int64_t)&v8 | (int32_t)((char)a3 > 78));
    *(char *)0x71cf6be6 = *(char *)0x71cf6be6 + (char)(v6 / 256);
    return (a3 + 177) % 256 | a3 & 0xffffff00;
}

// Address range: 0x315d6c - 0x315e00
int64_t function_315d6c(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_ffffffffa03a2372(); // 0x315d6c
    bool v2; // 0x315d6c
    if (v2 || v2) {
        // 0x315de3
        *(char *)0x29c4600800031 = 50;
        int64_t result = unknown_ffffffffb93202f9(); // 0x315df3
        int64_t v3; // 0x315d6c
        char * v4 = (char *)(v3 - 94); // 0x315df8
        *v4 = *v4 + (char)a3;
        return result;
    }
    // 0x315d73
    return (v1 + 242) % 256 | v1 & -256;
}

// Address range: 0x315e07 - 0x315e38
int64_t function_315e07(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x172a6b00); // 0x315e07
    int64_t v2; // 0x315e07
    *v1 = *v1 + (int32_t)v2;
    uint32_t v3 = (int32_t)v2; // 0x315e0d
    uint32_t result = v3 + 0x687b7548; // 0x315e0d
    if (v3 > 0x97848ab7 || result == 0) {
        int32_t * v4 = (int32_t *)(a1 + 64 + v2); // 0x315e32
        *v4 = *v4 + (int32_t)a2;
        return result;
    }
    int64_t result2 = unknown_ffffffffa8d4ec1b() & 0x3a8f6b3a; // 0x315e1d
    int32_t * v5 = (int32_t *)(result2 + 8 * v2); // 0x315e22
    *v5 = *v5 - 1;
    return result2;
}

// Address range: 0x315e3e - 0x315e3f
int64_t function_315e3e(void) {
    // 0x315e3e
    int64_t result; // 0x315e3e
    return result;
}

// Address range: 0x315e57 - 0x315e5d
int64_t function_315e57(int64_t a1) {
    // 0x315e57
    int64_t v1; // 0x315e57
    return v1 & 0x4033a35c;
}

// Address range: 0x315e69 - 0x315e6c
int64_t function_315e69(int64_t a1) {
    // 0x315e69
    int64_t result; // 0x315e69
    return result;
}

// Address range: 0x315e71 - 0x315e74
int64_t function_315e71(void) {
    // 0x315e71
    int64_t result; // 0x315e71
    return result;
}

// Address range: 0x315e9d - 0x315ea4
int64_t function_315e9d(int64_t a1) {
    // 0x315e9d
    int64_t result; // 0x315e9d
    int32_t * v1 = (int32_t *)(result + 0x76d6dda3); // 0x315e9d
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x315ea5 - 0x315fc7
int64_t function_315ea5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 - 0x41fdff01);
    char * v2 = (char *)(a3 - 0x2ffe179a);
    char v3 = a3 / 256;
    int64_t result = a1; // 0x315ea5
    int64_t v4 = (int64_t)*(int32_t *)(4 * a4 - 0x56fe174d); // 0x315ead
    bool v5; // 0x315ea5
    if (v5) {
        v4 = function_315e3e();
    }
    // 0x315eaf
    int64_t v6; // 0x315ea5
    int64_t v7 = v6 - 8; // 0x315eaf
    *(int64_t *)v7 = a3;
    result = (int64_t)(*(int32_t *)(v4 - 95) + (int32_t)result);
    int64_t v8 = __asm_sti(result, a2); // 0x315eb3
    int64_t v9; // 0x315ea5
    int64_t v10; // 0x315ea5
    int64_t v11 = __asm_punpckldq(v9, v10); // 0x315eb4
    *v1 = *v1 + (int32_t)v8;
    *(char *)(a4 + 0x40cf4bb2) = 0;
    char v12 = *v2; // 0x315ec6
    char v13 = v12 + v3; // 0x315ec6
    *v2 = v13;
    while (((v13 ^ v12) & (v13 ^ v3)) >= 0) {
        // 0x315f29
        if (llvm_ctpop_i8(v13) % 2 == 0) {
            // 0x315f2b
            return result;
        }
        v4 = v8;
        // 0x315eaf
        v7 -= 8;
        *(int64_t *)v7 = a3;
        result = (int64_t)(*(int32_t *)(v4 - 95) + (int32_t)result);
        v8 = __asm_sti(result, a2);
        v11 = __asm_punpckldq(v11, v10);
        *v1 = *v1 + (int32_t)v8;
        *(char *)(a4 + 0x40cf4bb2) = 0;
        v12 = *v2;
        v13 = v12 + v3;
        *v2 = v13;
    }
    int64_t result2 = unknown_3e2a130d(); // 0x315f08
    int32_t * v14 = (int32_t *)(result + 0x526c08fd); // 0x315f0d
    *v14 = *v14 + (int32_t)a4;
    return result2;
}

// Address range: 0x315ffa - 0x315ffe
int64_t function_315ffa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x315ffa
    int64_t result; // 0x315ffa
    return result;
}

// Address range: 0x316010 - 0x316039
int64_t function_316010(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x316010
    int64_t v1; // 0x316010
    int64_t v2 = v1 & 0xffffffff; // 0x316010
    char * v3 = (char *)(v2 ^ 0xc601e82b); // 0x31601a
    *v3 = *v3 - 30;
    uint64_t v4 = v2 ^ 0xc601e82c; // 0x31601d
    char * v5 = (char *)(v1 + 0x2b01e800); // 0x31601f
    *v5 = *v5 + (char)(v4 / 256);
    char * v6 = (char *)v4; // 0x316029
    *v6 = *v6 + (char)a3;
    int64_t v7; // 0x316010
    *(char *)a3 = *(char *)&v7 | (char)(v1 / 256);
    *(char *)a1 = *(char *)0x31a442;
    bool v8; // 0x316010
    int64_t v9 = v8 ? -1 : 1; // 0x31602d
    float80_t v10; // 0x316010
    *(int32_t *)(v1 + 0x3401e84b) = (int32_t)v10;
    return __asm_int3(v9 + a1, v9 + 0x31a442);
}

// Address range: 0x316053 - 0x316058
int64_t function_316053(void) {
    // 0x316053
    return function_ffffffffc03809da();
}

// Address range: 0x3160dc - 0x3160e3
int64_t function_3160dc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3160dc
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x3160dc
    return result;
}

// Address range: 0x31610a - 0x31610b
int64_t function_31610a(void) {
    // 0x31610a
    int64_t result; // 0x31610a
    return result;
}

// Address range: 0x316110 - 0x316199
int64_t function_316110(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x316110
    int64_t v1; // 0x316110
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(8 * v1 - 0x170ab6ff + v1); // 0x316110
    *v3 = *v3 | (int32_t)a4;
    *(int32_t *)-0x177307e2 = *(int32_t *)-0x177307e2 + (int32_t)a1;
    int32_t * v4 = (int32_t *)(a2 - 53); // 0x31611d
    uint32_t v5 = *v4; // 0x31611d
    uint32_t v6 = v5 + (int32_t)v1; // 0x31611d
    *v4 = v6;
    char * v7 = (char *)(a2 + 0x41013a8c); // 0x316120
    *v7 = *v7 + (char)(a4 / 256) + (char)(v6 < v5);
    char v8 = *(char *)(v2 + 103); // 0x31612a
    int32_t * v9 = (int32_t *)(v1 + 0xda02d39); // 0x316136
    int32_t v10 = *v9; // 0x316136
    *v9 = v10 + (int32_t)(v2 & 0xffffff00 | (int64_t)(v8 + (char)v2));
    int64_t v11; // 0x316110
    int64_t result = __asm_int1() & -256 | (int64_t)*(char *)&v11; // 0x316146
    unsigned char v12 = (char)(v2 / 512) % 128;
    unsigned char v13 = *(char *)0x185de251 + v12; // 0x31614a
    unsigned char v14 = llvm_ctpop_i8(v13); // 0x31614a
    *(char *)0x185de251 = v13;
    if (v14 % 2 == 0) {
        int32_t * v15 = (int32_t *)result; // 0x316197
        *v15 = 0x4000000 * *v15;
        return result;
    }
    int64_t v16 = result; // 0x316153
    if (v13 >= 0) {
        // 0x316155
        unknown_684eb55b();
        v16 = __asm_int1();
    }
    char * v17 = (char *)(v16 - 13); // 0x316162
    *v17 = *v17 + v12;
    return function_31610a();
}

// Address range: 0x3161e5 - 0x3161fb
int64_t function_3161e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3161e5
    unknown_29d0d7ef();
    __asm_out_135(104, (char)a4);
    char * v1 = (char *)(a1 + 0x72b301e8); // 0x3161f2
    *v1 = *v1 / 2;
    return a4 & 0xffffffff;
}

// Address range: 0x316255 - 0x316256
int64_t function_316255(void) {
    // 0x316255
    int64_t result; // 0x316255
    return result;
}

// Address range: 0x316295 - 0x31629b
int64_t function_316295(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x316295
    *(int32_t *)a4 = 0;
    int64_t v1; // 0x316295
    *(int32_t *)a2 = *(int32_t *)&v1 ^ (int32_t)a4;
    return function_316255();
}

// Address range: 0x436067 - 0x436068
int64_t function_436067(int64_t a1, int64_t a2, int64_t a3) {
    // 0x436067
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x436067
    return result;
}

// Address range: 0x4360b9 - 0x4360bb
int64_t function_4360b9(int64_t a1) {
    // 0x4360b9
    int64_t result; // 0x4360b9
    return result;
}

// Address range: 0x43614c - 0x43614f
int64_t function_43614c(void) {
    // 0x43614c
    int64_t result; // 0x43614c
    return result;
}

// Address range: 0x4361c8 - 0x4361d2
int64_t function_4361c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = a4 | a3; // 0x4361cb
    unsigned char v2 = llvm_ctpop_i8(v1); // 0x4361cb
    int64_t v3; // 0x4361c8
    __asm_outsd((int16_t)a3, (int32_t)v3);
    return 0x8000 * (int64_t)(v1 < 0) | 0x4000 * (int64_t)(v1 == 0) | 1024 * (int64_t)(v2 % 2 == 0) | v3 & -0xff01 | 768;
}

// Address range: 0x436216 - 0x436217
int64_t function_436216(int64_t a1) {
    // 0x436216
    int64_t result; // 0x436216
    return result;
}
