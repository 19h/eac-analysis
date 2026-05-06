/*
 * Targeted RetDec C for native executable gap queue batch 181.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x5588d0-0x558af2 rank=111 name=fcn.005588d0 kind=r2_discovered bytes=546 uncovered=546
 *   0x4f3da-0x4f5fb rank=112 name=fcn.0004f3da kind=r2_discovered bytes=545 uncovered=545
 *   0x542da-0x545c4 rank=113 name=fcn.000542da kind=r2_discovered bytes=746 uncovered=542
 *   0x579370-0x57958d rank=114 name=fcn.00579370 kind=r2_discovered bytes=541 uncovered=541
 *   0x501780-0x501998 rank=115 name=method.std::basic_filebuf_wchar_t__std::char_traits_wchar_t___.virtual_32 kind=native_discovered bytes=536 uncovered=536
 *   0x57c770-0x57c987 rank=116 name=fcn.0057c770 kind=r2_discovered bytes=535 uncovered=535
 *   0x56bca0-0x56beb3 rank=117 name=method.std::codecvt_wchar_t__char____mbstate_t_.virtual_32 kind=native_discovered bytes=531 uncovered=531
 *   0x5790b0-0x5792c3 rank=118 name=fcn.005790b0 kind=r2_discovered bytes=531 uncovered=531
 *   0x515d4-0x517e6 rank=119 name=fcn.000515d4 kind=r2_discovered bytes=530 uncovered=530
 *   0x4ff8f0-0x4ffb01 rank=120 name=method.std::basic_filebuf_char__std::char_traits_char___.virtual_32 kind=native_discovered bytes=529 uncovered=529
 *   0x49daf0-0x49dcfd rank=121 name=fcn.0049daf0 kind=r2_discovered bytes=525 uncovered=525
 *   0x54b780-0x54b98c rank=122 name=fcn.0054b780 kind=r2_discovered bytes=524 uncovered=524
 *   0x51b750-0x51b95b rank=123 name=method.std::__cxx11::money_put_char__std::ostreambuf_iterator_char__std::char_traits_char_____.virtual_16 kind=native_discovered bytes=523 uncovered=523
 *   0x22e2e-0x23038 rank=124 name=fcn.00022e2e kind=r2_discovered bytes=522 uncovered=522
 *   0x4c9d40-0x4c9f4a rank=125 name=fcn.004c9d40 kind=r2_discovered bytes=522 uncovered=522
 *   0x496540-0x496748 rank=126 name=fcn.00496540 kind=r2_discovered bytes=520 uncovered=520
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
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
extern int g3;
extern int g4;
extern int g5;
extern int g6;
extern int g7;
extern int g8;
extern int g9;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
extern int g15;
extern int g16;
extern int g17;
extern int g18;
extern int g19;
extern int g20;
extern int g21;
extern int g22;
extern int g23;
extern int g24;
extern int g25;
extern int g26;
extern int g27;
extern int g28;
extern int g29;
extern int g30;
extern int g31;
int64_t entry_point();
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3(void);
int32_t __asm_in(uint16_t port);
int32_t __asm_in_133(uint16_t port);
int32_t __asm_in_134(uint16_t port);
char __asm_in_136(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
int64_t __asm_iretd();
int64_t __asm_sti(int64_t value, ...);
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
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt(void);
int64_t __asm_mfence();
void __asm_wait(void);
float80_t __asm_fbstp(float80_t value);
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
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
void __asm_movq(int64_t value, int128_t dst);
int128_t __asm_aesimc(int128_t value);
int128_t __asm_aeskeygenassist(int128_t value, int imm);
int128_t __asm_movdqu(int128_t value);
int128_t __asm_movdqu_133(int128_t value);
int128_t __asm_movapd(int128_t value);
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_cmpnlesd(int128_t left, int128_t right);
int128_t __asm_cvtsi2sd(int64_t value);
int128_t __asm_subsd(int128_t left, int128_t right);
int64_t __asm_cvttsd2si(int128_t value);
void __asm_ucomisd(int128_t left, int128_t right);
void __asm_ucomiss(int128_t left, int64_t right);
void __asm_ucomiss_134(int128_t left, int128_t right);
int128_t __asm_movups();
void __asm_movups_133();
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
int64_t memset2(void *s, int c, size_t n);
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

int64_t function_14310fab();
int64_t function_22e2e(int64_t a1, int64_t a2);
int64_t function_22e3a(int64_t a1, int64_t a2);
int64_t function_22ea0(int64_t a1, int64_t a2);
int64_t function_22edc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22f0f(int64_t a1);
int64_t function_22f39(void);
int64_t function_22f64(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_22fc6(void);
int64_t function_22fd0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22ff8(int64_t a1);
int64_t function_23007(int64_t a1);
int64_t function_2300d(void);
int64_t function_2302d(int64_t a1);
int64_t function_254fe();
int64_t function_2601b();
int64_t function_29c3a();
int64_t function_29cea();
int64_t function_29cf4();
int64_t function_35ef6();
int64_t function_3629a();
int64_t function_36966();
int64_t function_4452a();
int64_t function_48bde0();
int64_t function_496540(int64_t a1);
int64_t function_49d220();
int64_t function_49daf0(int64_t a1);
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_4b0f10();
int64_t function_4c14d0();
int64_t function_4c1690();
int64_t function_4c1770();
int64_t function_4c1820();
int64_t function_4c1d00();
int64_t function_4c9900();
int64_t function_4c9b80();
int64_t function_4c9d40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_4c9db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4f15a0();
int64_t function_4f18e0();
int64_t function_4f3da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4f5b50();
int64_t function_4f69b0();
int64_t function_4f8cc0();
int64_t function_4f9b30();
int64_t function_4fc010();
int64_t function_4fca70();
int64_t function_4ff3f0();
int64_t function_4ff5b0();
int64_t function_4ff8f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_501260();
int64_t function_501420();
int64_t function_501780(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_507a2();
int64_t function_5088b0();
int64_t function_515d4(int64_t a1, int64_t a2);
int64_t function_51a610();
int64_t function_51aeb0();
int64_t function_51b750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_52770();
int64_t function_527fe();
int64_t function_5294a();
int64_t function_52982();
int64_t function_52b0c0();
int64_t function_52c62();
int64_t function_53a3e();
int64_t function_53a4c();
int64_t function_5422a();
int64_t function_542650();
int64_t function_542da(int64_t a1, int64_t a2, int64_t str, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_54b780(int64_t a1, int64_t wstr, uint64_t a3, uint64_t a4);
int64_t function_54be6();
int64_t function_54d560();
int64_t function_554b00();
int64_t function_556f00();
int64_t function_5571e0();
int64_t function_557210();
int64_t function_558300();
int64_t function_5588d0(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5659d0();
int64_t function_565f30();
int64_t function_566180();
int64_t function_56bca0(int64_t a1, int64_t ps, uint64_t a3, uint64_t a4, int64_t wstr2, int64_t a6, uint64_t a7, int64_t a8);
int64_t function_5790b0(int64_t result2, uint64_t a2);
int64_t function_579370(int64_t result2, uint64_t a2);
int64_t function_5797e0();
int64_t function_57a000();
int64_t function_57ac30();
int64_t function_57c670();
int64_t function_57c770(int64_t a1, int64_t result2, uint64_t a3);
int64_t function_58165();
int64_t function_594b8();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_dd0e3();

// Address range: 0x22e2e - 0x22e39
int64_t function_22e2e(int64_t a1, int64_t a2) {
    // 0x22e2e
    int64_t result; // 0x22e2e
    return result;
}

// Address range: 0x22e3a - 0x22e9b
int64_t function_22e3a(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x22e55
    int64_t v2; // bp-40, 0x22e3a
    function_729b6((int64_t)&v2, a1 + (int64_t)&g7);
    function_22ea0(a1, a2);
    function_729ce(&v2);
    int64_t result = 0; // 0x22e8b
    if (v1 != __readfsqword(40)) {
        // 0x22e8d
        __stack_chk_fail();
        result = (int64_t)&g31;
    }
    // 0x22e92
    return result;
}

// Address range: 0x22ea0 - 0x22ed0
int64_t function_22ea0(int64_t a1, int64_t a2) {
    // 0x22ea0
    __readfsqword(40);
    return function_dd0e3();
}

// Address range: 0x22edc - 0x22eea
int64_t function_22edc(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 101 + a3); // 0x22edc
    bool v2; // 0x22edc
    *v1 = *v1 - (v2 ? 0x21644894 : 0x21644893);
    return function_14310fab();
}

// Address range: 0x22f0f - 0x22f10
int64_t function_22f0f(int64_t a1) {
    // 0x22f0f
    int64_t result; // 0x22f0f
    return result;
}

// Address range: 0x22f39 - 0x22f3a
int64_t function_22f39(void) {
    // 0x22f39
    int64_t result; // 0x22f39
    return result;
}

// Address range: 0x22f64 - 0x22fb4
int64_t function_22f64(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x22f64
    int64_t v1; // 0x22f64
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x22f64
    if (llvm_ctpop_i8((char)(v2 & a3 / 256)) % 2 != 0) {
        int64_t v3 = unknown_6002c438(); // 0x22fa5
        float80_t v4; // 0x22f64
        return (v3 + (v4 < v4 ? 236 : 235)) % 256 | v3 & -256;
    }
    char * v5 = (char *)(v1 + 0x7f84f580); // 0x22f6a
    char v6 = *v5 + (char)v2; // 0x22f6a
    *v5 = v6;
    int64_t v7 = v2; // 0x22f70
    if (v6 != 0) {
        v7 = function_22f39();
    }
    int64_t v8 = a3 & -0xff01 | (int64_t)&g18; // 0x22f72
    *(int32_t *)0x31e877000021cd53 = (int32_t)v7;
    int32_t * v9 = (int32_t *)(a4 - 0x240c8fef); // 0x22f80
    uint32_t v10 = *v9; // 0x22f80
    *v9 = v10 / 0x1000000 | 256 * v10;
    unsigned char v11 = *(char *)(((v7 / 256 + v8) % 256 | v8 & -256) + 0x74003106); // 0x22f87
    int16_t v12 = v7; // 0x22f87
    int16_t v13 = v11; // 0x22f87
    return v7 & -0x10000 | (int64_t)(v12 / v13 % 256) | (int64_t)(256 * (v12 % v13));
}

// Address range: 0x22fc6 - 0x22fc7
int64_t function_22fc6(void) {
    // 0x22fc6
    int64_t result; // 0x22fc6
    return result;
}

// Address range: 0x22fd0 - 0x22fd4
int64_t function_22fd0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 22); // 0x22fd0
    int64_t result; // 0x22fd0
    *v1 = *v1 - (int32_t)result;
    return result;
}

// Address range: 0x22ff8 - 0x23007
int64_t function_22ff8(int64_t a1) {
    // 0x22ff8
    int64_t v1; // 0x22ff8
    return v1 & -256 | 234;
}

// Address range: 0x23007 - 0x2300a
int64_t function_23007(int64_t a1) {
    // 0x23007
    int64_t result; // 0x23007
    return result;
}

// Address range: 0x2300d - 0x2300f
int64_t function_2300d(void) {
    // 0x2300d
    return function_22fc6();
}

// Address range: 0x2302d - 0x23031
int64_t function_2302d(int64_t a1) {
    // 0x2302d
    int64_t result; // 0x2302d
    return result;
}

// Address range: 0x4f3da - 0x4f5fb
int64_t function_4f3da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x4f3e7
    int64_t v2 = a3; // 0x4f3fa
    int64_t v3 = a5; // 0x4f3fa
    int64_t * v4; // 0x4f3da
    int64_t v5; // 0x4f3da
    int64_t v6; // 0x4f3da
    int64_t v7; // 0x4f3da
    int64_t v8; // 0x4f3da
    int64_t v9; // 0x4f3da
    int64_t v10; // 0x4f3da
    int64_t v11; // 0x4f3da
    int64_t v12; // 0x4f3da
    int64_t v13; // 0x4f3da
    int64_t v14; // 0x4f3da
    int64_t v15; // 0x4f3da
    int64_t v16; // 0x4f3da
    int64_t v17; // 0x4f3da
    int64_t v18; // bp-56, 0x4f3da
    if (a2 == 0) {
        goto lab_0x4f564;
    } else {
        int64_t * v19 = (int64_t *)(a1 + 192);
        v2 = a3;
        v3 = a5;
        v9 = a2;
        if (*v19 == a2) {
            goto lab_0x4f564;
        } else {
            // 0x4f410
            function_729b6((int64_t)&v18, a1 + 208);
            int64_t * v20 = (int64_t *)(a1 + 184); // 0x4f425
            int64_t v21 = *v20; // 0x4f425
            int64_t v22 = *(int64_t *)(a1 + 32); // 0x4f42c
            int64_t v23 = 126 * v21 + v22; // 0x4f434
            int64_t v24 = v23 + 18;
            v5 = v24;
            v4 = v19;
            v13 = v21;
            v15 = a3;
            v17 = v24;
            v12 = v23;
            v7 = a3;
            v10 = a2;
            if (*v19 == 0) {
                goto lab_0x4f585;
            } else {
                int64_t v25 = v21 + 1; // 0x4f457
                *v20 = v25;
                int64_t v26 = -0x1041041041041041 * (*(int64_t *)(a1 + 40) - v22 >> 1); // 0x4f467
                int64_t v27; // 0x4f3da
                if (v25 != v26) {
                    // 0x4f5da
                    *v19 = a2;
                    int64_t v28 = 126 * v25 + v22; // 0x4f5e5
                    *(int64_t *)v28 = v25;
                    v27 = v28;
                } else {
                    // 0x4f474
                    *v20 = 0;
                    *v19 = a2;
                    *(int64_t *)v22 = 0;
                    v27 = v22;
                }
                // 0x4f490
                *(int64_t *)(v27 + 8) = *v19;
                int64_t v29 = v26 - *(int64_t *)(a1 + 200); // 0x4f4a4
                uint128_t v30 = 0x8000000000000000 * (int128_t)(v29 >> 63) | (int128_t)v29; // 0x4f4ad
                uint128_t v31 = v30 / 0xf4240; // 0x4f4ad
                int64_t v32 = v31; // 0x4f4ad
                if (v32 < 1) {
                    // 0x4f4cb
                    *(int16_t *)(v27 + 16) = 0;
                    v14 = v30 % 0xf4240;
                    v16 = v24;
                    v11 = v27;
                    v6 = a3;
                    v8 = a2;
                } else {
                    int64_t v33 = v32 - 0xffff; // 0x4f4b5
                    int16_t v34 = v33 < 0 == (0xfffe - v32 & v32) < 0 == (v33 != 0) ? (int16_t)&g30 : (int16_t)v31; // 0x4f4c4
                    *(int16_t *)(v27 + 16) = v34;
                    v14 = (int64_t)&g30;
                    v16 = v24;
                    v11 = v27;
                    v6 = a3;
                    v8 = a2;
                }
                goto lab_0x4f4d2;
            }
        }
    }
  lab_0x4f564:;
    int64_t v35 = __readfsqword(40) ^ v1; // 0x4f575
    if (v35 == 0) {
        // 0x4f5f0
        return 126 * *(int64_t *)(a1 + 184) + *(int64_t *)(a1 + 32);
    }
    // 0x4f580
    __stack_chk_fail();
    v5 = v3 + 18;
    v4 = (int64_t *)(a1 + 192);
    v13 = (int64_t)&g31;
    v15 = v2;
    v17 = v35;
    v12 = v3;
    int64_t v36; // 0x4f3da
    v7 = v36;
    v10 = v9;
    goto lab_0x4f585;
  lab_0x4f585:
    // 0x4f585
    *v4 = v10;
    *(int64_t *)v12 = v13;
    *(int16_t *)(v12 + 16) = 0;
    *(int64_t *)(v12 + 8) = *v4;
    __asm_rep_stosd_memset((char *)v17, 0, 27);
    *(int64_t *)(v12 + 36) = 0;
    *(int64_t *)(v12 + 44) = 0;
    *(int64_t *)(v12 + 52) = 0;
    *(int32_t *)(v12 + 60) = 0;
    *(int16_t *)v5 = (int16_t)*(int32_t *)(a1 + 24);
    v14 = v15;
    v16 = v17;
    v11 = v12;
    v6 = v7;
    v8 = v10;
    goto lab_0x4f4d2;
  lab_0x4f4d2:;
    int64_t v37 = v14;
    __asm_rep_movsd_memcpy((char *)(v11 + 18), (char *)v16, 27);
    *(int16_t *)(v11 + 76) = 0;
    int32_t * v38 = (int32_t *)(v11 + 32); // 0x4f4eb
    *v38 = *v38 & -191;
    int64_t v39 = v11 + 78; // 0x4f4f3
    __asm_rep_stosd_memset((char *)v39, 0, 12);
    int64_t * v40 = (int64_t *)(a1 + 96); // 0x4f4fc
    uint64_t v41 = *v40 + 1; // 0x4f500
    *v40 = v41;
    if (v41 >= 8) {
        // 0x4f50d
        *(int64_t *)(a1 + 88) = 0;
        *v40 = 0;
    }
    if (v6 != 0) {
        // 0x4f522
        *(int64_t *)(a1 + 200) = v37;
    }
    int64_t v42 = *(int64_t *)(a1 + 32); // 0x4f531
    int64_t * v43 = (int64_t *)(a1 + 176); // 0x4f53f
    uint64_t v44 = *v43; // 0x4f53f
    int64_t v45 = v44; // 0x4f550
    if (v44 < -0x1041041041041041 * (*(int64_t *)(a1 + 40) - v42 >> 1)) {
        int64_t v46 = v44 + 1; // 0x4f552
        *v43 = v46;
        v45 = v46;
    }
    // 0x4f55c
    function_729ce(&v18);
    v2 = v45;
    v3 = v39;
    v36 = v6;
    v9 = v8;
    goto lab_0x4f564;
}

// Address range: 0x515d4 - 0x517e6
int64_t function_515d4(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x515e4
    int32_t v2 = (int64_t)&g23; // bp-96, 0x51602
    int64_t v3 = 0; // 0x51616
    int64_t v4; // 0x515d4
    int64_t v5; // 0x515d4
    int64_t v6; // 0x515d4
    int32_t v7; // bp-72, 0x515d4
    int32_t v8; // bp-88, 0x515d4
    int64_t v9; // 0x51758
    if (*(int64_t *)(a1 - 24) == 0) {
        goto lab_0x517b5;
    } else {
        // 0x5161c
        int64_t v10; // bp-80, 0x515d4
        int64_t v11 = (int64_t)&v10; // 0x51624
        function_52770(a2, a1);
        function_35ef6((int64_t *)&v7, L"EasyAntiCheat/Certificates/", &v10);
        function_527fe(a2, (int64_t *)&v7);
        function_29c3a((int64_t *)&v7);
        function_5294a(&v10, a2, L"base");
        function_52982((int64_t *)&v7, &v10, L".bin");
        function_36966((int64_t)&v2, (int64_t *)&v7);
        function_29c3a((int64_t *)&v7);
        function_29c3a(&v10);
        v8 = (int64_t)&g23;
        function_5294a((int64_t *)&v7, a2, L"base");
        function_52982(&v10, (int64_t *)&v7, L".bin");
        int64_t v12 = (int64_t)&v8; // 0x516cb
        function_36966(v12, &v10);
        function_29c3a(&v10);
        function_29c3a((int64_t *)&v7);
        uint64_t v13 = function_58165((int64_t)v8); // 0x516e8
        int64_t v14 = v13 % 256; // 0x516ef
        v4 = v14;
        v6 = v11;
        if ((char)v13 != 0) {
            goto lab_0x5176e;
        } else {
            uint64_t v15 = function_48bde0(0); // 0x516f9
            v4 = v15 % 256;
            v6 = v11;
            if ((char)v15 == 0) {
                goto lab_0x5176e;
            } else {
                // 0x51705
                v7 = (int64_t)&g23;
                uint64_t v16 = function_594b8(function_3629a(), (int64_t *)&v8, (int64_t *)&v7); // 0x51718
                int64_t v17 = v16 % 256; // 0x5171f
                if ((char)v16 == 0) {
                    // 0x51741
                    function_29c3a((int64_t *)&v7);
                    v4 = v17;
                    v6 = v12;
                    goto lab_0x5176e;
                } else {
                    int64_t v18 = g22;
                    v9 = 0;
                    v5 = v14;
                    while (v18 != 0) {
                        int64_t v19 = v18 - 1; // 0x51732
                        if (*(int32_t *)(4 * v19 + (int64_t)v7) == 47) {
                            // 0x5174b
                            function_52c62((int64_t *)&v7, v18, 0);
                            v9 = (int64_t)&v7;
                            function_52770(a2, v9);
                            v5 = v17;
                            goto lab_0x51763;
                        }
                        v18 = v19;
                        v9 = 0;
                        v5 = v14;
                    }
                    goto lab_0x51763;
                }
            }
        }
    }
  lab_0x517b5:;
    int64_t result = function_29c3a((int64_t *)&v2) & -256 | v3 % 256; // 0x517d0
    if (v1 != __readfsqword(40)) {
        // 0x517d2
        __stack_chk_fail();
        result = (int64_t)&g31;
    }
    // 0x517d7
    return result;
  lab_0x5176e:
    // 0x5176e
    function_29c3a((int64_t *)&v8);
    v3 = v4;
    if ((char)v4 == 0) {
        int64_t v20 = v6 - 24; // 0x5177f
        if ((char)function_29cea(v20) == 0) {
            // 0x517aa
            function_29cf4(v20, 0);
            v3 = v4;
        } else {
            // 0x51790
            function_507a2(v20);
            *(int64_t *)a2 = (int64_t)&g23;
            v3 = v4;
        }
    }
    goto lab_0x517b5;
  lab_0x51763:
    // 0x51763
    function_29c3a((int64_t *)&v7);
    v4 = v5;
    v6 = v9;
    goto lab_0x5176e;
}

// Address range: 0x542da - 0x545c4
int64_t function_542da(int64_t a1, int64_t a2, int64_t str, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = __readfsqword(40); // 0x54317
    int64_t * v2 = (int64_t *)a7; // 0x54327
    int64_t * v3 = (int64_t *)(a7 + 8); // 0x54330
    *v3 = *v2;
    *(int64_t *)(a8 + 8) = *(int64_t *)a8;
    *(int64_t *)(a9 + 8) = *(int64_t *)a9;
    int64_t v4 = str + 8; // 0x5434e
    int64_t * v5 = (int64_t *)v4; // 0x5434e
    uint64_t v6 = *v5 - str; // 0x54352
    int64_t v7 = 9; // 0x5435c
    if (v6 > (int64_t)&g14) {
        int32_t memcmp_rc = memcmp((int64_t *)str, &g17, 4); // 0x54374
        v7 = 9;
        if (memcmp_rc == 0) {
            // 0x54388
            v7 = 9;
            if (*(int16_t *)(str + 4) == g20) {
                int32_t * v8 = (int32_t *)(str + (int64_t)&g11); // 0x54399
                int32_t * v9 = (int32_t *)(str + (int64_t)&g12); // 0x5439f
                uint32_t v10 = *v9; // 0x5439f
                int64_t v11 = v6 - 1052; // 0x543a5
                int64_t v12 = (int64_t)v10 + (int64_t)*v8; // 0x543ac
                v7 = 9;
                if (v11 == v12) {
                    int64_t v13 = function_4efd30(v6, v10, v12, v11); // 0x543d6
                    function_53a3e(v13, v13 + v6, 0);
                    int64_t v14 = function_2601b(0, 0, v13) + v6; // 0x54408
                    int64_t v15 = function_2601b(0, 0, v14); // 0x5440e
                    function_53a4c(0);
                    int32_t v16 = v13; // bp-88, 0x54431
                    int64_t v17 = *v5 - v14; // 0x54442
                    __asm_rep_movsb_memcpy((char *)v13, (char *)v14, v17);
                    int64_t v18; // 0x542da
                    int64_t v19; // 0x542da
                    if (*(int16_t *)(str + 6) != g21) {
                        // 0x5447c
                        v18 = v17 - 1036;
                        v19 = v14 + (int64_t)&g11;
                    } else {
                        // 0x54458
                        *(int32_t *)(v13 + (int64_t)&g10) = 0;
                        memset2(v13 + 8, 0, &g9, 0);
                        v18 = v15 - v13;
                        v19 = v13;
                    }
                    int32_t v20 = *(int32_t *)(str + (int64_t)&g10); // 0x544a2
                    int64_t v21 = function_5422a(a1, a2, v19, v18, v4, v20, a5, a6, a8); // 0x544b3
                    function_254fe((int64_t *)&v16);
                    if ((int32_t)v21 == 0) {
                        int64_t v22 = v19 + (int64_t)&g15; // 0x544f1
                        int64_t v23 = v22 + (int64_t)*v8; // 0x544f8
                        function_54be6(a9, v22, v23, v18);
                        uint32_t v24 = *(int32_t *)(str + (int64_t)&g13); // 0x54500
                        int64_t v25 = *v2; // 0x54507
                        int64_t * v26 = (int64_t *)(a7 + 16); // 0x5450b
                        uint64_t v27 = (int64_t)v24 + (int64_t)&g15; // 0x54511
                        int64_t v28 = v23; // 0x5451e
                        if (v27 > *v26 - v25) {
                            int64_t v29 = *v3; // 0x54520
                            v28 = function_4efd30(v27, 0, v23, v27);
                            function_2601b(v25, (int32_t)v29, v28);
                            function_53a4c(*v2);
                            *v2 = v28;
                            *v3 = v29 - v25 + v28;
                            *v26 = v28 + v27;
                        }
                        int64_t v30 = v28;
                        function_54be6(a7, v30, v30 + (int64_t)&g15, v27);
                        uint32_t v31 = *v8; // 0x5457c
                        int32_t v32 = *v9; // 0x54586
                        function_4452a(v30 + 2 * (int64_t)&g15 + (int64_t)v31, v32, a7);
                        v7 = 0;
                    } else {
                        // 0x544c9
                        v7 = v21 & 0xffffffff;
                    }
                }
            }
        }
    }
    int64_t result = v7; // 0x545ae
    if (v1 != __readfsqword(40)) {
        // 0x545b0
        __stack_chk_fail();
        result = (int64_t)&g31;
    }
    // 0x545b5
    return result;
}

// Address range: 0x496540 - 0x496744
int64_t function_496540(int64_t a1) {
    // 0x496540
    int64_t v1; // 0x496540
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g24, "=> flush output", v1);
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x49665a
        return 0;
    }
    int64_t * v2 = (int64_t *)(a1 + 352); // 0x496573
    int64_t v3 = (int64_t)&g25; // 0x496589
    int64_t v4; // 0x496540
    if (*v2 == 0) {
      lab_0x496692:
        // 0x496692
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v3, "<= flush output", v4);
        return 0;
    }
    int64_t * v5 = (int64_t *)(a1 + 344); // 0x4965ad
    char * v6 = (char *)(a1 + 372);
    int64_t v7 = *v5; // 0x4965ad
    unsigned char v8 = *v6 & 2;
    int64_t v9 = v8; // 0x4965d5
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g26, "message length: %d, out_left: %d", v7 + 13 + (v9 - ((int64_t)(v8 == 0) | v9) & -8));
    int64_t v10 = 0x100000000 * (*v5 - *v2) >> 32; // 0x496633
    int64_t v11 = v10 & 0xffffffff;
    function_49e8b0(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g27, "ssl->f_send", v11);
    int32_t v12 = v10; // 0x496652
    int64_t result = v11; // 0x496654
    int64_t v13; // 0x496540
    int64_t v14; // 0x496540
    while (v12 >= 0 == (v12 != 0)) {
        int64_t v15 = *v2 - v10; // 0x496597
        *v2 = v15;
        if (v15 == 0) {
            // 0x4966d4
            v13 = 8;
            v14 = 8;
            goto lab_0x4966c0;
        }
        v7 = *v5;
        v8 = *v6 & 2;
        v9 = v8;
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g26, "message length: %d, out_left: %d", v7 + 13 + (v9 - ((int64_t)(v8 == 0) | v9) & -8));
        v10 = 0x100000000 * (*v5 - *v2) >> 32;
        v11 = v10 & 0xffffffff;
        function_49e8b0(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g27, "ssl->f_send", v11);
        v12 = v10;
        result = v11;
    }
    // 0x49665a
    return result;
  lab_0x4966c0:;
    int64_t v16 = v13;
    char * v17 = (char *)(v16 - 1 + *(int64_t *)(a1 + 296)); // 0x4966cc
    char v18 = *v17 + 1; // 0x4966cc
    *v17 = v18;
    int64_t v19; // 0x496540
    char v20; // 0x496540
    if (v18 != 0) {
        // 0x496668
        v19 = v16;
        v20 = *v6 & 2;
        goto lab_0x496675;
    } else {
        uint64_t v21 = v14 + 0xffffffff; // 0x4966d1
        int64_t v22 = v21 % 256; // 0x4966d7
        char v23 = *v6 & 2;
        v19 = v22;
        v20 = v23;
        v13 = v22;
        v14 = v21 & 0xffffffff;
        if (v22 > (int64_t)v23) {
            goto lab_0x4966c0;
        } else {
            goto lab_0x496675;
        }
    }
  lab_0x496675:
    // 0x496675
    v3 = (int64_t)&g29;
    v4 = v11;
    if (v19 == (v20 == 0 ? 0 : 2)) {
        // 0x4966fb
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g28, "outgoing message counter would wrap", v11);
        result = 0xffff9480;
        return result;
    } else {
        goto lab_0x496692;
    }
}

// Address range: 0x49daf0 - 0x49dcfc
int64_t function_49daf0(int64_t a1) {
    // 0x49daf0
    int64_t v1; // 0x49daf0
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g1, "=> parse change cipher spec", v1);
    int64_t v2 = function_49d220(a1); // 0x49db1b
    int64_t result = v2 & 0xffffffff; // 0x49db22
    if ((int32_t)v2 != 0) {
        // 0x49dc20
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g2, "mbedtls_ssl_read_record", result);
        return result;
    }
    // 0x49db2a
    if (*(int32_t *)(a1 + 216) != 20) {
        // 0x49dcb0
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g3, "bad change cipher spec message", v1);
        // 0x49dc17
        return 0xffff8900;
    }
    // 0x49db37
    if (*(int64_t *)(a1 + 224) != 1) {
        // 0x49dc80
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g4, "bad change cipher spec message", v1);
        return 0xffff8200;
    }
    int64_t * v3 = (int64_t *)(a1 + 200); // 0x49db45
    if (*(char *)*v3 != 1) {
        // 0x49dc80
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g4, "bad change cipher spec message", v1);
        return 0xffff8200;
    }
    // 0x49db55
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g5, "switching to new transform spec for inbound data", v1);
    int64_t * v4 = (int64_t *)(a1 + 128); // 0x49db77
    *(int64_t *)(a1 + 104) = *v4;
    *(int64_t *)(a1 + 64) = *(int64_t *)(a1 + 88);
    int64_t v5; // 0x49daf0
    if ((*(char *)(a1 + 372) & 2) == 0) {
        // 0x49dc50
        *(int64_t *)*(int64_t *)(a1 + 168) = 0;
        if (*(int32_t *)(a1 + 24) > 1) {
            goto lab_0x49dbd4;
        } else {
            // 0x49dc68
            v5 = *(int64_t *)(a1 + 192);
            goto lab_0x49dbf1;
        }
    } else {
        int16_t * v6 = (int16_t *)(a1 + 240); // 0x49db9a
        *(int64_t *)(a1 + 256) = 0;
        *(int64_t *)(a1 + 264) = 0;
        int64_t result2 = (int64_t)*v6 + 1; // 0x49dbb7
        int16_t v7 = result2; // 0x49dbba
        *v6 = v7;
        if (v7 == 0) {
            // 0x49dc17
            return result2;
        }
        // 0x49dbca
        if (*(int32_t *)(a1 + 24) < 2) {
            // 0x49dc68
            v5 = *(int64_t *)(a1 + 192);
            goto lab_0x49dbf1;
        } else {
            goto lab_0x49dbd4;
        }
    }
  lab_0x49dbd4:;
    int64_t v8 = *v4; // 0x49dbd4
    int64_t v9 = *(int64_t *)(a1 + 192); // 0x49dbe3
    v5 = *(int64_t *)(v8 + 24) - *(int64_t *)(v8 + 32) + v9;
    goto lab_0x49dbf1;
  lab_0x49dbf1:
    // 0x49dbf1
    *v3 = v5;
    int32_t * v10 = (int32_t *)(a1 + 8); // 0x49dbf1
    *v10 = *v10 + 1;
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g6, "<= parse change cipher spec", v1);
    // 0x49dc17
    return result;
}

// Address range: 0x4c9d40 - 0x4c9da3
int64_t function_4c9d40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int32_t v1 = *(int32_t *)(a1 + 328); // 0x4c9d44
    if (v1 == 0) {
        // 0x4c9d58
        return function_4c9b80();
    }
    if (v1 == 1) {
        // 0x4c9d80
        return function_4c9900();
    }
    // 0x4c9d75
    return 0xffffbf00;
}

// Address range: 0x4c9db0 - 0x4c9f48
int64_t function_4c9db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    if (a2 == 0 || (int32_t)a4 == 1) {
        // 0x4ca018
        int64_t result; // 0x4c9db0
        return result;
    }
    int32_t v1 = a5; // 0x4c9dfa
    uint64_t v2 = *(int64_t *)(a1 + 8); // 0x4c9dfd
    if (v1 != 0) {
        int64_t v3 = function_4c14d0(v1); // 0x4c9eab
        if (v3 == 0) {
            // 0x4ca018
            return 0;
        }
        // 0x4c9eb9
        function_4c1d00(v3);
    }
    int64_t v4 = function_4c14d0(*(int32_t *)(a1 + 332)); // 0x4c9e0d
    if (v4 == 0) {
        // 0x4ca018
        return 0;
    }
    uint64_t v5 = function_4c1d00(v4); // 0x4c9e21
    int64_t v6 = 2 * v5 & 510; // 0x4c9e2e
    int64_t result2 = v6 + 2; // 0x4c9e34
    if (v2 < result2) {
        // 0x4ca018
        return result2;
    }
    int64_t set_mem = (int64_t)memset((void *)(int64_t)((int64_t *)a7), 0, (int32_t)v2); // 0x4c9e4d
    if ((int32_t)set_mem != 0) {
        // 0x4c9e66
        return set_mem - (int64_t)(int32_t)&g16 & 0xffffffff;
    }
    uint64_t v7 = v5 % 256; // 0x4c9e26
    int64_t v8; // bp-120, 0x4c9db0
    function_4b0f10(a1 + 16, &v8, v7);
    int64_t v9 = a7 - 2 + v2 - v6; // 0x4c9ef6
    *(char *)v9 = 1;
    memcpy((int64_t *)(v9 + 1), &v8, (int32_t)v7);
    int64_t v10; // bp-152, 0x4c9db0
    function_4c1690(&v10);
    int64_t result3 = function_4c1770(&v10, v4, 0); // 0x4c9f29
    if ((int32_t)result3 != 0) {
        // 0x4ca018
        return result3;
    }
    // 0x4c9f36
    return function_4c1820(&v10);
}

// Address range: 0x4ff8f0 - 0x4ffafc
// From class:    __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_4ff8f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)(a1 + 200); // 0x4ff907
    int64_t v2 = *v1; // 0x4ff907
    __readfsqword(40);
    int64_t v3 = 1; // 0x4ff921
    int64_t v4 = 0; // 0x4ff921
    if (v2 != 0) {
        int64_t v5 = *(int64_t *)v2; // 0x4ff927
        int32_t v6 = v5; // 0x4ff932
        v3 = v6 < 1;
        v4 = v6 >= 0 ? 0x100000000 * v5 >> 32 : 0;
    }
    int64_t v7 = a1 + 104; // 0x4ff93c
    if ((char)function_4f15a0(v7) != 1 || (v3 & (int64_t)(a2 != 0)) != 0) {
        // 0x4ff966
        __readfsqword(40);
        return -1;
    }
    int64_t v8 = v4 * a2; // 0x4ff99b
    int32_t v9; // bp-72, 0x4ff8f0
    if (a2 == 0 == (int32_t)a3 == 1) {
        // 0x4ff9aa
        if (*(char *)(a1 + 170) != 0) {
            // 0x4ffa00
            if ((char)*(int64_t *)*v1 != 0) {
                int64_t result = *(int64_t *)(a1 + 124); // 0x4ffad7
                v9 = result;
                if (*(char *)(a1 + 169) == 0) {
                    // 0x4ffafc
                    return result;
                }
                goto lab_0x4ffae1;
            } else {
                goto lab_0x4ffa18;
            }
        } else {
            // 0x4ff9b3
            v9 = (int32_t)*(int64_t *)(a1 + 124);
            if (*(char *)(a1 + 169) == 0) {
                int64_t v10 = function_4f18e0(v7, 0, 1); // 0x4ff9d2
                // 0x4ff966
                __readfsqword(40);
                return v10 == -1 ? -1 : v10 + v8;
            }
            goto lab_0x4ffae1;
        }
    } else {
        goto lab_0x4ffa18;
    }
  lab_0x4ffa18:;
    char * v11 = (char *)(a1 + 192); // 0x4ffa18
    if (*v11 != 0) {
        int64_t * v12 = (int64_t *)(a1 + 8); // 0x4ffa88
        int64_t * v13 = (int64_t *)(a1 + 16); // 0x4ffa8c
        *v11 = 0;
        *v12 = *(int64_t *)(a1 + 152);
        *(int64_t *)(a1 + 24) = *(int64_t *)(a1 + 184);
        int64_t * v14 = (int64_t *)(a1 + 176); // 0x4ffab3
        int64_t v15 = *v14 + (int64_t)(*v13 != *v12); // 0x4ffab3
        *v14 = v15;
        *v13 = v15;
    }
    int32_t v16 = (int32_t)*(int64_t *)(a1 + 124); // 0x4ffa2c
    v9 = v16;
    int32_t v17 = v16; // 0x4ffa30
    int64_t v18 = v8; // 0x4ffa30
    if (!(((int32_t)a3 != 1 | *(char *)(a1 + 169) == 0))) {
        // 0x4ffa56
        v9 = (int32_t)*(int64_t *)(a1 + 140);
        int64_t v19 = function_4ff3f0(a1, (int64_t *)&v9); // 0x4ffa67
        v17 = v9;
        v18 = (0x100000000 * v19 >> 32) + v8;
    }
    int64_t result2 = function_4ff5b0(a1, v18, a3 & 0xffffffff, (int64_t)v17); // 0x4ffa4a
    // 0x4ff966
    __readfsqword(40);
    return result2;
  lab_0x4ffae1:
    // 0x4ffae1
    v9 = (int32_t)*(int64_t *)(a1 + 140);
    // 0x4ffafc
    return 0x100000000 * function_4ff3f0(a1, (int64_t *)&v9) >> 32;
}

// Address range: 0x501780 - 0x501993
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_501780(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)(a1 + 200); // 0x501797
    int64_t v2 = *v1; // 0x501797
    __readfsqword(40);
    int64_t v3 = 1; // 0x5017b1
    int64_t v4 = 0; // 0x5017b1
    if (v2 != 0) {
        int64_t v5 = *(int64_t *)v2; // 0x5017b7
        int32_t v6 = v5; // 0x5017c2
        v3 = v6 < 1;
        v4 = v6 >= 0 ? 0x100000000 * v5 >> 32 : 0;
    }
    int64_t v7 = a1 + 104; // 0x5017cc
    if ((char)function_4f15a0(v7) != 1 || (v3 & (int64_t)(a2 != 0)) != 0) {
        // 0x5017f6
        __readfsqword(40);
        return -1;
    }
    int64_t v8 = v4 * a2; // 0x50182b
    int32_t v9; // bp-72, 0x501780
    if (a2 == 0 == (int32_t)a3 == 1) {
        // 0x50183a
        if (*(char *)(a1 + 170) != 0) {
            // 0x501890
            if ((char)*(int64_t *)*v1 != 0) {
                int64_t result = *(int64_t *)(a1 + 124); // 0x501967
                v9 = result;
                if (*(char *)(a1 + 169) == 0) {
                    // 0x50198c
                    return result;
                }
                goto lab_0x501971;
            } else {
                goto lab_0x5018a8;
            }
        } else {
            // 0x501843
            v9 = (int32_t)*(int64_t *)(a1 + 124);
            if (*(char *)(a1 + 169) == 0) {
                int64_t v10 = function_4f18e0(v7, 0, 1); // 0x501862
                // 0x5017f6
                __readfsqword(40);
                return v10 == -1 ? -1 : v10 + v8;
            }
            goto lab_0x501971;
        }
    } else {
        goto lab_0x5018a8;
    }
  lab_0x5018a8:;
    char * v11 = (char *)(a1 + 192); // 0x5018a8
    if (*v11 != 0) {
        int64_t * v12 = (int64_t *)(a1 + 8); // 0x501918
        int64_t * v13 = (int64_t *)(a1 + 16); // 0x50191e
        int64_t * v14 = (int64_t *)(a1 + 176); // 0x501922
        *v11 = 0;
        *v12 = *(int64_t *)(a1 + 152);
        int64_t v15 = 4 * (int64_t)(*v13 != *v12) + *v14; // 0x50193e
        *v14 = v15;
        *v13 = v15;
        *(int64_t *)(a1 + 24) = *(int64_t *)(a1 + 184);
    }
    int32_t v16 = (int32_t)*(int64_t *)(a1 + 124); // 0x5018bc
    v9 = v16;
    int32_t v17 = v16; // 0x5018c0
    int64_t v18 = v8; // 0x5018c0
    if (!(((int32_t)a3 != 1 | *(char *)(a1 + 169) == 0))) {
        // 0x5018e6
        v9 = (int32_t)*(int64_t *)(a1 + 140);
        int64_t v19 = function_501260(a1, (int64_t *)&v9); // 0x5018f7
        v17 = v9;
        v18 = (0x100000000 * v19 >> 32) + v8;
    }
    int64_t result2 = function_501420(a1, v18, a3 & 0xffffffff, (int64_t)v17); // 0x5018da
    // 0x5017f6
    __readfsqword(40);
    return result2;
  lab_0x501971:
    // 0x501971
    v9 = (int32_t)*(int64_t *)(a1 + 140);
    // 0x50198c
    return 0x100000000 * function_501260(a1, (int64_t *)&v9) >> 32;
}

// Address range: 0x51b750 - 0x51b95a
// From class:    std::__cxx11::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_51b750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x51b750
    __readfsqword(40);
    function_5659d0();
    int64_t v1; // bp-120, 0x51b750
    int64_t v2 = function_554b00(&v1); // 0x51b7b2
    int64_t v3 = function_565f30((int64_t)&v1, a5 + 208); // bp-112, 0x51b7e1
    int64_t v4; // bp-256, 0x51b750
    int64_t v5 = function_5088b0(&v3, &v4, 64, "%.*Lf", 0); // 0x51b7f5
    int64_t v6 = (int64_t)&v4; // 0x51b7ff
    int64_t v7 = v5; // 0x51b7ff
    if ((int32_t)v5 >= 64) {
        int64_t v8 = v5 + 1; // 0x51b801
        int64_t v9; // bp-264, 0x51b750
        int64_t v10 = (int64_t)&v9 - ((0x100000000 * v8 >> 32) + 30 & -16); // 0x51b80f
        v6 = v10 + 15 & -16;
        int64_t v11 = function_565f30(a8, a7); // 0x51b81f
        *(int64_t *)(v10 - 8) = a8;
        *(int64_t *)(v10 - 16) = a7;
        v3 = v11;
        v7 = function_5088b0(&v3, (int64_t *)v6, v8 & 0xffffffff, "%.*Lf", 0);
    }
    int64_t v12 = 0x100000000 * v7 >> 32; // 0x51b84d
    int64_t v13; // bp-88, 0x51b750
    int64_t v14 = (int64_t)&v13; // 0x51b85d
    int64_t v15 = v14; // bp-104, 0x51b85d
    function_52b0c0(&v15, v12, 0);
    int64_t result2; // 0x51b750
    switch (*(char *)(v2 + 56)) {
        case 0: {
            // 0x51b940
            function_54d560(v2);
        }
        default: {
            int64_t result = *(int64_t *)v2; // 0x51b87b
            if (*(int64_t *)(result + 56) != g19) {
                // 0x51b950
                return result;
            }
        }
        case 1: {
            // 0x51b890
            memcpy((int64_t *)v15, (int64_t *)v6, (int32_t)v12);
            int32_t v16 = 0x100000000000000 * a6 >> 56;
            if ((char)a4 == 0) {
                // 0x51b930
                result2 = function_51aeb0(a1, a2, a3, a5, v16, &v15);
            } else {
                // 0x51b8cf
                result2 = function_51a610(a1, a2, a3, a5, v16, &v15);
            }
            // 0x51b8d4
            if (v15 != v14) {
                // 0x51b8e1
                function_4eeb50(v15);
            }
            // break -> 0x51b8f6
            break;
        }
    }
    // 0x51b8f6
    function_566180(&v1);
    __readfsqword(40);
    return result2;
}

// Address range: 0x54b780 - 0x54b98b
int64_t function_54b780(int64_t a1, int64_t wstr, uint64_t a3, uint64_t a4) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x54b781
    if (v1 >= a4) {
        uint64_t v2 = v1 - a4; // 0x54b78d
        int64_t n = v2 > a3 ? a3 : v2; // 0x54b793
        if (n == 0) {
            // 0x54b7b7
            return n;
        }
        int64_t wstr2 = 4 * a4 + a1; // 0x54b7a6
        if (n == 1) {
            // 0x54b7c0
            *(int32_t *)wstr = *(int32_t *)wstr2;
            return 1;
        }
        // 0x54b7ac
        wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
        // 0x54b7b7
        return n;
    }
    // 0x54b7ca
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::copy", a4, v1);
    int64_t v3 = __readfsqword(40); // 0x54b7fe
    if ((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)" - (int64_t)"basic_string::copy" == 0) {
        // 0x54b85b
        return __readfsqword(40) ^ v3;
    }
    if ((int64_t)" is %zu) > this->size() (which is %zu)" == 0x6f705f5f203a7325) {
        if ((int64_t)"py" == 0x74735f6369736162) {
            // 0x54b960
            int64_t wstr3; // bp-96, 0x54b780
            wmemcpy((int32_t *)&wstr3, (int32_t *)0x74735f6369736162, 4);
            return (int64_t)wmemcpy((int32_t *)0x74735f6369736162, (int32_t *)" is %zu) > this->size() (which is %zu)", 4);
        }
        // 0x54b885
        wmemcpy((int32_t *)"py", (int32_t *)" is %zu) > this->size() (which is %zu)", 4);
        *(int64_t *)"%s: __pos (which is %zu) > this->size() (which is %zu)" = 0x74735f6369736162;
        *(int64_t *)"basic_string::copy" = (int64_t)"py";
        *(int64_t *)" is %zu) > this->size() (which is %zu)" = 0x7970;
    } else {
        if ((int64_t)"py" == 0x74735f6369736162) {
            // 0x54b900
            wmemcpy((int32_t *)" is %zu) > this->size() (which is %zu)", (int32_t *)0x74735f6369736162, 4);
            *(int64_t *)"basic_string::copy" = 0x6f705f5f203a7325;
            *(int64_t *)"%s: __pos (which is %zu) > this->size() (which is %zu)" = (int64_t)" is %zu) > this->size() (which is %zu)";
        } else {
            // 0x54b839
            *(int64_t *)"%s: __pos (which is %zu) > this->size() (which is %zu)" = 0x74735f6369736162;
            *(int64_t *)"basic_string::copy" = 0x6f705f5f203a7325;
            *(int64_t *)" is %zu) > this->size() (which is %zu)" = 0x7970;
        }
        // 0x54b847
        *(int64_t *)"py" = 0x29757a2520736920;
    }
    // 0x54b853
    *(int64_t *)"s (which is %zu) > this->size() (which is %zu)" = 0x6f633a3a676e6972;
    *(int64_t *)"ring::copy" = 0x6863696877282073;
    // 0x54b85b
    return __readfsqword(40) ^ v3;
}

// Address range: 0x5588d0 - 0x558af0
int64_t function_5588d0(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x5588d0
    __readfsqword(40);
    int64_t v1 = function_558300(); // 0x558910
    uint32_t v2 = *(int32_t *)(a4 + 24); // 0x558915
    uint64_t v3 = (int64_t)v2; // 0x558915
    int64_t v4; // bp-184, 0x5588d0
    int64_t v5 = (int64_t)&v4; // 0x558919
    int64_t v6 = v1 + 74; // 0x55891d
    uint32_t v7 = v2 & 74; // 0x558938
    int64_t v8; // bp-136, 0x5588d0
    int64_t v9; // bp-176, 0x5588d0
    int64_t v10 = function_557210(&v8, a6, v6, v3, (int32_t)!((v7 == 64 | v7 == 8)), &v9, (int64_t)v7); // 0x55895b
    int32_t v11 = v10; // bp-68, 0x55896f
    int64_t v12 = 0x100000000 * v10; // 0x55896d
    int64_t v13 = (0x2800000000 - v12 >> 32) + (int64_t)&v9; // 0x558975
    int64_t v14; // 0x5588d0
    int64_t v15; // 0x5588d0
    int64_t v16; // 0x5588d0
    int64_t v17; // 0x5588d0
    int64_t v18; // 0x5588d0
    if (*(char *)(v1 + 32) != 0) {
        int64_t v19 = *(int64_t *)(v1 + 16); // 0x5589f8
        int64_t v20 = *(int64_t *)(v1 + 24); // 0x5589fe
        int64_t v21 = v5 - ((v12 + 0x100000000 >> 31) + 30 & -16); // 0x558a12
        int64_t v22 = v21 + 15 & -16 | 2; // 0x558a1e
        *(int64_t *)(v21 - 8) = (int64_t)&v11;
        *(int64_t *)(v21 - 16) = v13;
        function_556f00(a1, v19, v20, *(char *)(v1 + 73), a4, v22, v22);
        int64_t v23 = v11; // 0x558a3b
        v15 = v23;
        v17 = v21;
        v16 = v23;
        v18 = v21;
        v14 = v22;
        if (v7 != 64 && v7 != 8) {
            goto lab_0x558987;
        } else {
            goto lab_0x558a4d;
        }
    } else {
        // 0x55897f
        v15 = v10;
        v17 = v5;
        v16 = v10;
        v18 = v5;
        v14 = v13;
        if (v7 == 64 || v7 == 8) {
            goto lab_0x558a4d;
        } else {
            goto lab_0x558987;
        }
    }
  lab_0x558987:;
    int64_t * v24 = (int64_t *)(a4 + 16); // 0x558987
    int64_t v25 = *v24; // 0x558987
    if (0x100000000 * v15 >> 32 < v25) {
        // 0x558aa0
        *(int64_t *)(v17 - 16 - (v25 + 30 & -16)) = (int64_t)&v11;
        function_5571e0(a1, (int32_t)(0x100000000000000 * a5 >> 56));
    }
    // 0x558997
    *v24 = 0;
    __readfsqword(40);
    return result;
  lab_0x558a4d:
    // 0x558a4d
    v15 = v16;
    v17 = v18;
    if (a6 != 0 && (v2 & (int32_t)&g8) != 0) {
        // 0x558a65
        if (v7 == 64) {
            // 0x558ade
            *(char *)(v14 - 1) = *(char *)(v1 + 78);
            return v16 + 1 & 0xffffffff;
        }
        int64_t v26 = v16 + 2; // 0x558a6f
        v11 = v26;
        *(char *)(v14 - 1) = *(char *)((v3 / 0x4000 % 2 | 2) + v6);
        *(char *)(v14 - 2) = *(char *)(v1 + 78);
        v15 = v26 & 0xffffffff;
        v17 = v18;
    }
    goto lab_0x558987;
}

// Address range: 0x56bca0 - 0x56beb2
// From class:    std::codecvt_byname<wchar_t, char, __mbstate_t>
// Type:          virtual member function
int64_t function_56bca0(int64_t a1, int64_t ps, uint64_t a3, uint64_t a4, int64_t wstr2, int64_t a6, uint64_t a7, int64_t a8) {
    // 0x56bca0
    __readfsqword(40);
    int64_t ps2 = ps; // bp-72, 0x56bced
    struct __locale_struct * v1 = __uselocale((struct __locale_struct *)*(int64_t *)(a1 + 16)); // 0x56bcf2
    int64_t * v2 = (int64_t *)wstr2; // 0x56bd06
    *v2 = a3;
    int64_t * v3 = (int64_t *)a8; // 0x56bd11
    *v3 = a6;
    if (a3 >= a4) {
      lab_0x56bdb8_2:
        // 0x56bdb8
        __uselocale(v1);
        __readfsqword(40);
        return 0;
    }
    int64_t result = a6; // 0x56bd98
    int64_t v4 = 0; // 0x56bca0
    int64_t v5 = a3; // 0x56bd24
    int64_t v6 = v4; // 0x56bd24
    int32_t v7; // 0x56bca0
    int64_t v8; // 0x56bca0
    int64_t v9; // 0x56bca0
    while (result < a7 == v4 == 0) {
        int64_t wstr = result;
        int64_t str = v5;
        int64_t v10 = a4 - str;
        int32_t n = v10;
        int64_t * found_byte_pos = memchr((int64_t *)str, 0, n); // 0x56bd48
        int64_t v11 = (int64_t)found_byte_pos; // 0x56bd48
        int64_t nms = found_byte_pos == NULL ? v10 : v11 - str;
        int32_t v12 = mbsnrtowcs((int32_t *)wstr, (char **)wstr2, (int32_t)nms, (int32_t)((a7 - wstr) / 4), (struct _TYPEDEF___mbstate_t *)ps); // 0x56bd7e
        int64_t pwc; // 0x56be60
        int32_t v13; // 0x56be8d
        if (v12 == -1) {
            // 0x56be60
            pwc = *v3;
            v13 = mbrtowc((int32_t *)pwc, (char *)str, n, (struct _TYPEDEF___mbstate_t *)&ps2);
            v7 = v13;
            v8 = str;
            v9 = str;
            if (v13 > 0xfffffffd) {
                goto lab_0x56be9c;
            } else {
                goto lab_0x56be70;
            }
        }
        uint64_t v14 = found_byte_pos == NULL ? a4 : v11;
        result = *v3 + 4 * (int64_t)v12;
        while (ps == 0 || v14 <= ps) {
            // 0x56bdf0
            *v2 = v14;
            *v3 = result;
            if (v14 >= a4) {
                // break (via goto) -> 0x56bdb8
                goto lab_0x56bdb8_2;
            }
            if (result >= a7) {
                // 0x56bec0
                return result;
            }
            // 0x56be08
            v5 = v14 + 1;
            int64_t v15 = result + 4; // 0x56be11
            *v2 = v5;
            *v3 = v15;
            ps2 = ps;
            *(int32_t *)result = 0;
            if (v5 < a4 != v15 < a7) {
                // break (via goto) -> 0x56bdb8
                goto lab_0x56bdb8_2;
            }
            wstr = v15;
            str = v5;
            v10 = a4 - str;
            n = v10;
            found_byte_pos = memchr((int64_t *)str, 0, n);
            v11 = (int64_t)found_byte_pos;
            nms = found_byte_pos == NULL ? v10 : v11 - str;
            v12 = mbsnrtowcs((int32_t *)wstr, (char **)wstr2, (int32_t)nms, (int32_t)((a7 - wstr) / 4), (struct _TYPEDEF___mbstate_t *)ps);
            if (v12 == -1) {
                // 0x56be60
                pwc = *v3;
                v13 = mbrtowc((int32_t *)pwc, (char *)str, n, (struct _TYPEDEF___mbstate_t *)&ps2);
                v7 = v13;
                v8 = str;
                v9 = str;
                if (v13 > 0xfffffffd) {
                    goto lab_0x56be9c;
                } else {
                    goto lab_0x56be70;
                }
            }
            // 0x56bd8d
            v14 = found_byte_pos == NULL ? a4 : v11;
            result = *v3 + 4 * (int64_t)v12;
        }
        // 0x56bda3
        *v3 = result;
        v4 = 1;
        v6 = 1;
        if (a4 <= ps) {
            // break -> 0x56bdb8
            break;
        }
        v5 = ps;
        v6 = v4;
    }
    // 0x56bdb8
    __uselocale(v1);
    __readfsqword(40);
    return v6 & 0xffffffff;
  lab_0x56be9c:
    // 0x56be9c
    *v2 = v9;
    *(int64_t *)ps = ps2;
    return ps2;
  lab_0x56be70:;
    int64_t wstr3 = v8 + (int64_t)v7; // 0x56be74
    int64_t pwc2 = *v3 + 4; // 0x56be77
    *v3 = pwc2;
    int32_t v16 = mbrtowc((int32_t *)pwc2, (char *)wstr3, (int32_t)(a4 - wstr3), (struct _TYPEDEF___mbstate_t *)&ps2); // 0x56be8d
    v7 = v16;
    v8 = wstr3;
    v9 = wstr3;
    if (v16 > 0xfffffffd) {
        goto lab_0x56be9c;
    } else {
        goto lab_0x56be70;
    }
}

// Address range: 0x5790b0 - 0x5792c3
int64_t function_5790b0(int64_t result2, uint64_t a2) {
    // 0x5790b0
    __readfsqword(40);
    if (a2 == 1) {
        int64_t result = function_4f69b0();
        __readfsqword(40);
        return result;
    }
    int64_t * v1 = (int64_t *)(result2 + 8); // 0x5790db
    *v1 = 0;
    int32_t v2; // bp-65, 0x5790b0
    function_4f5b50((int64_t *)&v2, result2, 1);
    if (a2 < 1 || (char)v2 == 0) {
        // 0x5791e3
        __readfsqword(40);
        return result2;
    }
    int64_t v3 = (int64_t)&v2; // 0x5790e3
    int64_t v4 = *(int64_t *)(result2 + 232 + *(int64_t *)(v3 - 24)); // 0x579117
    int64_t * v5 = (int64_t *)(v4 + 16); // 0x57911f
    uint64_t result3 = *v5; // 0x57911f
    int64_t * v6 = (int64_t *)(v4 + 24); // 0x579124
    if (result3 >= *v6) {
        // 0x5792c8
        return result3;
    }
    int64_t v7 = (int64_t)*(char *)result3; // 0x579143
    int64_t v8 = *v1; // 0x579143
    int64_t v9 = v3; // 0x579143
    char v10; // 0x5790b0
    int64_t v11; // 0x5790b0
    int64_t v12; // 0x5790b0
    while (true) {
        // 0x579148
        v10 = 0;
        int64_t v13 = v9;
        int64_t v14 = v8;
        int64_t v15 = v7;
        int64_t v16 = v15; // 0x57914b
        int64_t v17 = v13; // 0x57914b
        if (v14 < a2) {
            // 0x57914d
            v11 = v13;
            if ((int32_t)v15 == -1) {
                // break -> 0x579210
                break;
            }
            int64_t v18 = v14;
            uint64_t v19 = *v6; // 0x579156
            uint64_t result4 = *v5; // 0x57915b
            int64_t v20 = a2 - v18; // 0x579163
            int64_t v21 = v19 - result4; // 0x579169
            int64_t v22 = v20 - v21; // 0x57916c
            int64_t v23 = v22 < 0 == ((v22 ^ v20) & (v21 ^ v20)) < 0 == (v22 != 0) ? v21 : v20; // 0x57916f
            uint64_t v24; // 0x57917d
            int64_t v25; // 0x579180
            while (v23 >= 2) {
                // 0x57917d
                v24 = v23 + result4;
                v25 = v23 + v18;
                *v5 = v24;
                *v1 = v25;
                if (v19 <= v24) {
                    goto lab_0x5792b0;
                }
                // 0x579195
                if (v25 >= a2) {
                    // break (via goto) -> 0x57919d
                    goto lab_0x57919d;
                }
                v18 = v25;
                v19 = *v6;
                result4 = *v5;
                v20 = a2 - v18;
                v21 = v19 - result4;
                v22 = v20 - v21;
                v23 = v22 < 0 == ((v22 ^ v20) & (v21 ^ v20)) < 0 == (v22 != 0) ? v21 : v20;
            }
            // 0x579260
            *v1 = v18 + 1;
            while (v19 > result4) {
                uint64_t v26 = result4 + 1; // 0x57926d
                *v5 = v26;
                int64_t v27; // 0x5790b0
                int64_t v28; // 0x5790b0
                if (v19 > v26) {
                    // 0x57927b
                    v27 = (int64_t)*(char *)v26;
                    v28 = v21;
                } else {
                    // 0x5792b0
                    v27 = *(int64_t *)v4;
                    v28 = v4;
                }
                int64_t v29 = v28;
                int64_t v30 = v27;
                uint64_t v31 = *v1;
                v16 = v30;
                v17 = v29;
                if (v31 >= a2) {
                    goto lab_0x57919d_2;
                }
                // 0x57914d
                v11 = v29;
                if ((int32_t)v30 == -1) {
                    // break (via goto) -> 0x579210
                    goto lab_0x579210;
                }
                v18 = v31;
                v19 = *v6;
                result4 = *v5;
                v20 = a2 - v18;
                v21 = v19 - result4;
                v22 = v20 - v21;
                v23 = v22 < 0 == ((v22 ^ v20) & (v21 ^ v20)) < 0 == (v22 != 0) ? v21 : v20;
                while (v23 >= 2) {
                    // 0x57917d
                    v24 = v23 + result4;
                    v25 = v23 + v18;
                    *v5 = v24;
                    *v1 = v25;
                    if (v19 <= v24) {
                        goto lab_0x5792b0;
                    }
                    // 0x579195
                    if (v25 >= a2) {
                        // break (via goto) -> 0x57919d
                        goto lab_0x57919d;
                    }
                    v18 = v25;
                    v19 = *v6;
                    result4 = *v5;
                    v20 = a2 - v18;
                    v21 = v19 - result4;
                    v22 = v20 - v21;
                    v23 = v22 < 0 == ((v22 ^ v20) & (v21 ^ v20)) < 0 == (v22 != 0) ? v21 : v20;
                }
                // 0x579260
                *v1 = v18 + 1;
            }
            // 0x5792c8
            return result4;
          lab_0x57919d:
            // 0x57919d
            v16 = (int64_t)*(char *)v24;
            v17 = v21;
        }
      lab_0x57919d_2:
        // 0x57919d
        v9 = v17;
        v7 = v16;
        if (a2 != 0x7fffffffffffffff) {
            if (v10 == 0) {
                goto lab_0x5791db;
            } else {
                // 0x5791cd
                *v1 = 0x7fffffffffffffff;
                goto lab_0x5791db;
            }
        }
        // 0x5791ac
        v12 = v9;
        if ((int32_t)v7 == -1) {
            goto lab_0x579290;
        }
        // 0x5791b5
        *v1 = -0x8000000000000000;
        v8 = -0x8000000000000000;
    }
  lab_0x579210:
    // 0x579210
    v12 = v11;
    int64_t v32; // 0x5790b0
    if (a2 == 0x7fffffffffffffff) {
      lab_0x579290:
        // 0x579290
        v32 = v12;
        if (v10 != 0) {
            // 0x579295
            *v1 = 0x7fffffffffffffff;
            v32 = v12;
        }
    } else {
        // 0x57921f
        v32 = v11;
        if (v10 != 0) {
            // 0x579250
            *v1 = 0x7fffffffffffffff;
            v32 = v11;
        }
    }
    goto lab_0x579224;
  lab_0x579224:;
    int64_t v33 = *(int64_t *)(v32 - 24) + result2; // 0x57922b
    function_4fc010(v33, *(int32_t *)(v33 + 32) | 2);
  lab_0x5791e3:
    // 0x5791e3
    __readfsqword(40);
    return result2;
  lab_0x5791db:
    // 0x5791db
    v32 = v9;
    if ((int32_t)v7 == -1) {
        goto lab_0x579224;
    } else {
        goto lab_0x5791e3;
    }
}

// Address range: 0x579370 - 0x57958a
int64_t function_579370(int64_t result2, uint64_t a2) {
    // 0x579370
    __readfsqword(40);
    if (a2 == 1) {
        int64_t result = function_4f9b30();
        __readfsqword(40);
        return result;
    }
    int64_t * v1 = (int64_t *)(result2 + 8); // 0x57939b
    *v1 = 0;
    int32_t v2; // bp-65, 0x579370
    function_4f8cc0((int64_t *)&v2, result2, 1);
    if (a2 < 1 || (char)v2 == 0) {
        // 0x5794b3
        __readfsqword(40);
        return result2;
    }
    int64_t v3 = (int64_t)&v2; // 0x5793a3
    int64_t v4 = *(int64_t *)(result2 + 232 + *(int64_t *)(v3 - 24)); // 0x5793d7
    int64_t * v5 = (int64_t *)(v4 + 16); // 0x5793df
    uint64_t result3 = *v5; // 0x5793df
    int64_t * v6 = (int64_t *)(v4 + 24); // 0x5793e4
    if (result3 >= *v6) {
        // 0x579598
        return result3;
    }
    int64_t v7 = (int64_t)*(int32_t *)result3; // 0x579402
    int64_t v8 = *v1; // 0x579402
    int64_t v9 = v3; // 0x579402
    char v10; // 0x579370
    int64_t v11; // 0x579370
    int64_t v12; // 0x579370
    int64_t v13; // 0x579370
    while (true) {
      lab_0x579408:
        // 0x579408
        v10 = 0;
        int64_t v14 = v9;
        int64_t v15 = v8;
        int64_t v16 = v7;
        v11 = v16;
        v12 = v14;
        if (v15 < a2) {
            // 0x57940d
            v13 = v14;
            if ((int32_t)v16 == -1) {
                // break -> 0x5794e0
                break;
            }
            int64_t v17 = v15;
            int64_t v18 = *v6; // 0x579416
            uint64_t v19 = *v5; // 0x57941b
            int64_t v20 = a2 - v17; // 0x579423
            int64_t v21 = (v18 - v19) / 4; // 0x57942c
            int64_t v22 = v21 - v20; // 0x579430
            int64_t result4 = v22 < 0 == ((v22 ^ v21) & (v21 ^ v20)) < 0 == (v22 != 0) ? v20 : v21; // 0x579433
            uint64_t v23; // 0x579441
            int64_t v24; // 0x579445
            uint32_t v25; // 0x57945d
            while (result4 >= 2) {
                // 0x579441
                v23 = 4 * result4 + v19;
                v24 = result4 + v17;
                *v5 = v23;
                *v1 = v24;
                if (v18 <= v23) {
                    // 0x579580
                    return *(int64_t *)v4;
                }
                // 0x57945a
                v25 = *(int32_t *)v23;
                if (v24 >= a2) {
                    // break (via goto) -> 0x579461
                    goto lab_0x579461;
                }
                // 0x57940d
                v13 = v18;
                if (v25 == -1) {
                    // break (via goto) -> 0x5794e0
                    goto lab_0x5794e0_3;
                }
                v17 = v24;
                v18 = *v6;
                v19 = *v5;
                v20 = a2 - v17;
                v21 = (v18 - v19) / 4;
                v22 = v21 - v20;
                result4 = v22 < 0 == ((v22 ^ v21) & (v21 ^ v20)) < 0 == (v22 != 0) ? v20 : v21;
            }
            // 0x579530
            *v1 = v17 + 1;
            while (v18 > v19) {
                uint64_t v26 = v19 + 4; // 0x57953f
                *v5 = v26;
                v13 = v18;
                if (*(int32_t *)v19 == -1) {
                    // break (via goto) -> 0x5794e0
                    goto lab_0x5794e0_3;
                }
                // 0x57954d
                if (v26 >= *v6) {
                    // 0x579580
                    return *(int64_t *)v4;
                }
                uint32_t v27 = *(int32_t *)v26; // 0x579559
                uint64_t v28 = *v1; // 0x57955b
                if (v28 >= a2) {
                    // 0x579461
                    v11 = v27;
                    v12 = v18;
                    goto lab_0x579461_3;
                }
                // 0x57940d
                v13 = v18;
                if (v27 == -1) {
                    // break (via goto) -> 0x5794e0
                    goto lab_0x5794e0_3;
                }
                v17 = v28;
                v18 = *v6;
                v19 = *v5;
                v20 = a2 - v17;
                v21 = (v18 - v19) / 4;
                v22 = v21 - v20;
                result4 = v22 < 0 == ((v22 ^ v21) & (v21 ^ v20)) < 0 == (v22 != 0) ? v20 : v21;
                while (result4 >= 2) {
                    // 0x579441
                    v23 = 4 * result4 + v19;
                    v24 = result4 + v17;
                    *v5 = v23;
                    *v1 = v24;
                    if (v18 <= v23) {
                        // 0x579580
                        return *(int64_t *)v4;
                    }
                    // 0x57945a
                    v25 = *(int32_t *)v23;
                    if (v24 >= a2) {
                        // break (via goto) -> 0x579461
                        goto lab_0x579461;
                    }
                    // 0x57940d
                    v13 = v18;
                    if (v25 == -1) {
                        // break (via goto) -> 0x5794e0
                        goto lab_0x5794e0_3;
                    }
                    v17 = v24;
                    v18 = *v6;
                    v19 = *v5;
                    v20 = a2 - v17;
                    v21 = (v18 - v19) / 4;
                    v22 = v21 - v20;
                    result4 = v22 < 0 == ((v22 ^ v21) & (v21 ^ v20)) < 0 == (v22 != 0) ? v20 : v21;
                }
                // 0x579530
                *v1 = v17 + 1;
            }
            // 0x579598
            return result4;
          lab_0x579461:
            // 0x579461
            v11 = v25;
            v12 = v18;
        }
        goto lab_0x579461_3;
    }
  lab_0x5794e0_3:;
    int64_t v29 = v13; // 0x5794ed
    int64_t v30; // 0x579370
    if (a2 == 0x7fffffffffffffff) {
      lab_0x579568:
        // 0x579568
        v30 = v29;
        if (v10 != 0) {
            // 0x57956d
            *v1 = 0x7fffffffffffffff;
            int64_t v31; // 0x579370
            v30 = v31;
        }
    } else {
        // 0x5794ef
        v30 = v13;
        if (v10 != 0) {
            // 0x579520
            *v1 = 0x7fffffffffffffff;
            v30 = v13;
        }
    }
    goto lab_0x5794f4;
  lab_0x579461_3:
    // 0x579461
    v9 = v12;
    v7 = v11;
    int64_t v33; // 0x579370
    if (a2 != 0x7fffffffffffffff) {
        // 0x57948f
        v33 = v9;
        if (v10 == 0) {
            goto lab_0x5794a2;
        } else {
            // 0x579494
            *v1 = 0x7fffffffffffffff;
            v33 = 0x7fffffffffffffff;
            goto lab_0x5794a2;
        }
    }
    // 0x579470
    v29 = v9;
    if ((int32_t)v7 == -1) {
        goto lab_0x579568;
    }
    // 0x579479
    *v1 = -0x8000000000000000;
    v8 = -0x8000000000000000;
    goto lab_0x579408;
  lab_0x5794f4:;
    int64_t v32 = *(int64_t *)(v30 - 24) + result2; // 0x5794fb
    function_4fca70(v32, *(int32_t *)(v32 + 32) | 2);
  lab_0x5794b3:
    // 0x5794b3
    __readfsqword(40);
    return result2;
  lab_0x5794a2:
    // 0x5794a2
    v30 = v33;
    if ((int32_t)v7 == -1) {
        goto lab_0x5794f4;
    } else {
        goto lab_0x5794b3;
    }
}

// Address range: 0x57c770 - 0x57c985
int64_t function_57c770(int64_t a1, int64_t result2, uint64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x57c78a
    int64_t v2 = *v1; // 0x57c78a
    char v3 = *(char *)v2; // 0x57c7a6
    int64_t result = result2; // 0x57c7c4
    char v4 = v3; // 0x57c7c4
    int64_t result3; // 0x57c770
    if ((int32_t)function_57a000(v2) == 0) {
      lab_0x57c8bb:
        // 0x57c8bb
        if (a3 % 2 == 0 != (v4 == 70)) {
            // 0x57c922
            return result;
        }
        // 0x57c8ea
        if (result == result2) {
            // 0x57c922
            return result2;
        }
        int64_t v5 = *(int64_t *)result2; // 0x57c8ef
        int32_t * v6 = (int32_t *)v5; // 0x57c8f3
        int32_t v7 = *v6; // 0x57c8f3
        if (v7 != 26) {
            // 0x57c8d0
            if (v7 == 27) {
                // break -> 0x57c922
                break;
            }
            if (v7 == 25) {
                // 0x57c8de
                *v6 = 28;
            }
        } else {
            // 0x57c8fc
            *v6 = 29;
        }
        int64_t v8 = v5 + 8; // 0x57c8e6
        result3 = result;
        while (result != v8) {
            // 0x57c8ef
            v5 = *(int64_t *)v8;
            v6 = (int32_t *)v5;
            v7 = *v6;
            if (v7 != 26) {
                // 0x57c8d0
                result3 = 27;
                if (v7 == 27) {
                    // break -> 0x57c922
                    break;
                }
                if (v7 == 25) {
                    // 0x57c8de
                    *v6 = 28;
                }
            } else {
                // 0x57c8fc
                *v6 = 29;
            }
            // 0x57c8e6
            v8 = v5 + 8;
            result3 = result;
        }
        // 0x57c922
        return result3;
    }
    int32_t * v9 = (int32_t *)(a1 + 80);
    int32_t * v10 = (int32_t *)(a1 + 84);
    int64_t v11 = v2 + 1; // 0x57c7d0
    *v1 = v11;
    int64_t v12; // 0x57c770
    int64_t v13; // 0x57c770
    char * v14; // 0x57c7f6
    unsigned char v15; // 0x57c808
    int64_t v16; // 0x57c842
    int64_t v17; // 0x57c85b
    switch (v3) {
        case 114: {
            // 0x57c880
            *v9 = *v9 + 9;
            v12 = 0;
            v13 = (int64_t)((int32_t)a3 == 0) + 28 & 0xfffffffd;
            // break -> 0x57c889
            break;
        }
        case 86: {
            // 0x57c910
            *v9 = *v9 + 9;
            v12 = 0;
            v13 = (int32_t)a3 == 0 ? 26 : 29;
            // break -> 0x57c889
            break;
        }
        case 75: {
            // 0x57c938
            *v9 = *v9 + 6;
            v12 = 0;
            v13 = (int32_t)a3 == 0 ? 27 : 30;
            // break -> 0x57c889
            break;
        }
        default: {
            // 0x57c7f6
            v14 = (char *)v11;
            if (*v14 == 0) {
                // break -> 0x57c922
                break;
            }
            // 0x57c800
            *v1 = v2 + 2;
            v15 = *v14;
            if (v15 == 120) {
                // 0x57c950
                *v9 = *v9 + 17;
                v12 = 0;
                v13 = 76;
            } else {
                // 0x57c814
                if (((int64_t)v15 & 223) != 79) {
                    // 0x57c968
                    result3 = 0;
                    if (v15 != 119) {
                        return result3;
                    } else {
                        // 0x57c96c
                        *v9 = *v9 + 6;
                        result3 = 0;
                        if (function_57c670(a1) != 0) {
                            // 0x57c981
                            return *v1;
                        }
                        return result3;
                    }
                }
                // 0x57c822
                *v9 = *v9 + 9;
                if (v15 != 79) {
                    // break -> 0x57c922
                    break;
                }
                // 0x57c82f
                *v10 = 1;
                v16 = function_57ac30(a1);
                if (v16 == 0) {
                    // break -> 0x57c922
                    break;
                }
                // 0x57c85b
                v17 = *v1;
                if (*(char *)v17 != 69) {
                    // break -> 0x57c922
                    break;
                }
                // 0x57c868
                *v1 = v17 + 1;
                v12 = v16;
                v13 = 78;
            }
            // break -> 0x57c889
            break;
        }
    }
    int64_t v18 = function_5797e0(a1, v13, 0, (int32_t)v12); // 0x57c88e
    *(int64_t *)result2 = v18;
    result3 = 0;
    while (v18 != 0) {
        int64_t v19 = *v1; // 0x57c89f
        int64_t v20 = v18 + 8; // 0x57c8a3
        char v21 = *(char *)v19; // 0x57c8aa
        result = v20;
        v4 = v21;
        if ((int32_t)function_57a000(v19) == 0) {
            goto lab_0x57c8bb;
        }
        int64_t v22 = v19;
        v11 = v22 + 1;
        *v1 = v11;
        switch (v21) {
            case 114: {
                // 0x57c880
                *v9 = *v9 + 9;
                v12 = 0;
                v13 = (int64_t)((int32_t)a3 == 0) + 28 & 0xfffffffd;
                // break -> 0x57c889
                break;
            }
            case 86: {
                // 0x57c910
                *v9 = *v9 + 9;
                v12 = 0;
                v13 = (int32_t)a3 == 0 ? 26 : 29;
                // break -> 0x57c889
                break;
            }
            case 75: {
                // 0x57c938
                *v9 = *v9 + 6;
                v12 = 0;
                v13 = (int32_t)a3 == 0 ? 27 : 30;
                // break -> 0x57c889
                break;
            }
            default: {
                // 0x57c7f6
                v14 = (char *)v11;
                if (*v14 == 0) {
                    // break -> 0x57c922
                    break;
                }
                // 0x57c800
                *v1 = v22 + 2;
                v15 = *v14;
                if (v15 == 120) {
                    // 0x57c950
                    *v9 = *v9 + 17;
                    v12 = 0;
                    v13 = 76;
                } else {
                    // 0x57c814
                    if (((int64_t)v15 & 223) != 79) {
                        // 0x57c968
                        result3 = 0;
                        if (v15 != 119) {
                            return result3;
                        } else {
                            // 0x57c96c
                            *v9 = *v9 + 6;
                            result3 = 0;
                            if (function_57c670(a1) != 0) {
                                // 0x57c981
                                return *v1;
                            }
                            return result3;
                        }
                    }
                    // 0x57c822
                    *v9 = *v9 + 9;
                    if (v15 != 79) {
                        // break -> 0x57c922
                        break;
                    }
                    // 0x57c82f
                    *v10 = 1;
                    v16 = function_57ac30(a1);
                    if (v16 == 0) {
                        // break -> 0x57c922
                        break;
                    }
                    // 0x57c85b
                    v17 = *v1;
                    if (*(char *)v17 != 69) {
                        // break -> 0x57c922
                        break;
                    }
                    // 0x57c868
                    *v1 = v17 + 1;
                    v12 = v16;
                    v13 = 78;
                }
                // break -> 0x57c889
                break;
            }
        }
        // 0x57c889
        v18 = function_5797e0(a1, v13, 0, (int32_t)v12);
        *(int64_t *)v20 = v18;
        result3 = 0;
    }
  lab_0x57c922:
    // 0x57c922
    return result3;
}
