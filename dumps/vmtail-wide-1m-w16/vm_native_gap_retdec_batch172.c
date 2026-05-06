/*
 * Targeted RetDec C for native executable gap queue batch 172.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4d91a0-0x4d9612 rank=91 name=fcn.004d91a0 kind=r2_discovered bytes=1138 uncovered=1053
 *   0x4d3f90-0x4d43a9 rank=92 name=fcn.004d3f90 kind=r2_discovered bytes=1049 uncovered=1049
 *   0x50f2d0-0x50f6c8 rank=93 name=method.std::num_put_wchar_t__std::ostreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_56 kind=native_discovered bytes=1016 uncovered=1016
 *   0x5822c0-0x5826b4 rank=94 name=fcn.005822c0 kind=r2_discovered bytes=1012 uncovered=1012
 *   0x5594e0-0x5598cf rank=95 name=method.std::num_put_char__std::ostreambuf_iterator_char__std::char_traits_char_____.virtual_56 kind=native_discovered bytes=1007 uncovered=1007
 *   0x29432-0x2981e rank=96 name=fcn.00029432 kind=r2_discovered bytes=1004 uncovered=1004
 *   0x4c9080-0x4c946a rank=97 name=fcn.004c9080 kind=r2_discovered bytes=1002 uncovered=1002
 *   0x5598e0-0x559cca rank=98 name=method.std::num_put_char__std::ostreambuf_iterator_char__std::char_traits_char_____.virtual_64 kind=native_discovered bytes=1002 uncovered=1002
 *   0x49212c-0x492512 rank=99 name=fcn.0049212c kind=r2_discovered bytes=998 uncovered=998
 *   0x4d3530-0x4d3916 rank=100 name=fcn.004d3530 kind=r2_discovered bytes=998 uncovered=998
 *   0x5b7ba-0x5bb9c rank=101 name=fcn.0005b7ba kind=r2_discovered bytes=994 uncovered=994
 *   0x522120-0x5224f9 rank=102 name=fcn.00522120 kind=r2_discovered bytes=985 uncovered=985
 *   0x554e20-0x5551f9 rank=103 name=fcn.00554e20 kind=r2_discovered bytes=985 uncovered=985
 *   0x555a00-0x555dcb rank=104 name=fcn.00555a00 kind=r2_discovered bytes=971 uncovered=971
 *   0x555fe0-0x5563ab rank=105 name=fcn.00555fe0 kind=r2_discovered bytes=971 uncovered=971
 *   0x4aab80-0x4aaf42 rank=106 name=fcn.004aab80 kind=r2_discovered bytes=962 uncovered=962
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
extern int g34;
extern int g35;
extern int g36;
extern int g37;
extern int g38;
extern int g39;
extern int g40;
extern int g41;
extern int g42;
extern int g43;
extern int g44;
extern int g45;
extern int g46;
extern int g47;
extern int g48;
extern int g49;
extern int g50;
extern int g51;
extern int g52;
extern int g53;
extern int g54;
extern int g55;
extern int g56;
extern int g57;
extern int g58;
extern int g59;
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

int64_t function_203c0();
int64_t function_20520();
int64_t function_20880();
int64_t function_20a60();
int64_t function_22e2e();
int64_t function_24ded();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_250b0();
int64_t function_251e8();
int64_t function_259ce();
int64_t function_25cec();
int64_t function_28e50();
int64_t function_29432(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29c46();
int64_t function_29d94();
int64_t function_36622();
int64_t function_36712();
int64_t function_380a0();
int64_t function_48d707();
int64_t function_48e723();
int64_t function_49212c(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_4927ac();
int64_t function_4927ce();
int64_t function_492898();
int64_t function_4a8c6();
int64_t function_4a9620();
int64_t function_4a9850();
int64_t function_4aa470();
int64_t function_4aa650();
int64_t function_4aa830();
int64_t function_4aab80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t a8, int64_t a9, int64_t a10);
int64_t function_4ad720();
int64_t function_4ad750();
int64_t function_4afe70();
int64_t function_4aff10();
int64_t function_4b01d0();
int64_t function_4b02e0();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b0fc0();
int64_t function_4b1080();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1900();
int64_t function_4b19a0();
int64_t function_4b1ac0();
int64_t function_4b26c0();
int64_t function_4b2d10();
int64_t function_4b36d0();
int64_t function_4b38b0();
int64_t function_4b3cf0();
int64_t function_4b4d90();
int64_t function_4b4e60();
int64_t function_4b4ef0();
int64_t function_4b4f20();
int64_t function_4b5690();
int64_t function_4c14d0();
int64_t function_4c1690();
int64_t function_4c16b0();
int64_t function_4c1770();
int64_t function_4c1820();
int64_t function_4c1850();
int64_t function_4c1880();
int64_t function_4c18b0();
int64_t function_4c1d00();
int64_t function_4c3490();
int64_t function_4c4730();
int64_t function_4c9080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4d3530(int64_t a1, uint64_t a2, int64_t a3, uint64_t a4, int64_t a5, uint64_t a6, int32_t a7, unsigned char a8, uint32_t a9);
int64_t function_4d3da0();
int64_t function_4d3f90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4d8e90();
int64_t function_4d91a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int32_t a8, int32_t a9, int64_t a10);
int64_t function_4d92b0(void);
int64_t function_4d9427(void);
int64_t function_4d9489(int64_t a1);
int64_t function_4d948e(int64_t a1);
int64_t function_4d94b0(int64_t a1);
int64_t function_4d94b3(void);
int64_t function_4d94c6(void);
int64_t function_4d9512(void);
int64_t function_4d9515(int64_t a1);
int64_t function_4d9536(void);
int64_t function_4d953b(int64_t a1);
int64_t function_4d9561(int64_t a1);
int64_t function_4d9574(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4d9579(int64_t a1);
int64_t function_4d958b(void);
int64_t function_4d958d(int64_t a1);
int64_t function_4d959b(void);
int64_t function_4d959d(int64_t a1);
int64_t function_4d95dd(void);
int64_t function_4d95f0(int64_t a1);
int64_t function_4d95f3(void);
int64_t function_4d95f8(int64_t a1);
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_504cb();
int64_t function_5088b0();
int64_t function_50ab00();
int64_t function_50cc40();
int64_t function_50cf10();
int64_t function_50e0e0();
int64_t function_50eec0();
int64_t function_50f2d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_50f2e0(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_519810();
int64_t function_522120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint32_t a7, int32_t a8, uint64_t a9, int64_t a10, int64_t a11);
int64_t function_5245c0();
int64_t function_524600();
int64_t function_5246d0();
int64_t function_5423b0();
int64_t function_547670();
int64_t function_552550();
int64_t function_554b00();
int64_t function_554e20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint32_t a7, int32_t a8, uint64_t a9, int64_t a10, int64_t a11);
int64_t function_5559b0();
int64_t function_555a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_555f90();
int64_t function_555fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_556e50();
int64_t function_5571e0();
int64_t function_558300();
int64_t function_5590e0();
int64_t function_5594e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5594f0(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_5598e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5598f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10);
int64_t function_565f30();
int64_t function_568f00();
int64_t function_579a10();
int64_t function_581610();
int64_t function_5816a0();
int64_t function_581fa0();
int64_t function_5822c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_582662(void);
int64_t function_5826d0();
int64_t function_5b444();
int64_t function_5b7ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5bfa4();
int64_t function_5bfb2();
int64_t function_5c3b0();
int64_t function_5c4c0();
int64_t function_67701();
int64_t function_729a0();
int64_t function_729b0();
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x29432 - 0x2981e
int64_t function_29432(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x29446
    int64_t v2 = (int64_t)&g57; // bp-584, 0x2947b
    int64_t v3 = a1 + (int64_t)&g3; // 0x29480
    int64_t v4 = function_729a0(v3); // 0x2948a
    int64_t v5; // 0x29432
    int64_t v6; // 0x29432
    int64_t v7; // 0x29432
    int64_t v8; // 0x29432
    int64_t v9; // 0x29432
    int64_t v10; // 0x29432
    int64_t v11; // 0x29432
    int64_t v12; // 0x29432
    int64_t v13; // 0x29432
    int64_t v14; // bp-600, 0x29432
    int64_t * v15; // 0x29432
    int64_t * v16; // 0x29432
    uint32_t v17; // 0x294e9
    int64_t * v18; // 0x295e0
    int64_t v19; // 0x29618
    int64_t * v20; // 0x2961f
    int64_t * v21; // 0x29626
    int64_t v22; // 0x29647
    int64_t v23; // 0x29658
    int64_t v24; // 0x2965c
    uint64_t v25; // 0x29660
    int64_t v26; // 0x2966f
    int64_t * v27; // 0x29432
    int64_t v28; // 0x2967a
    int64_t v29; // 0x296b5
    uint64_t v30; // 0x296b9
    int64_t * v31; // 0x29432
    int64_t * v32; // 0x29432
    int64_t * v33; // 0x29432
    if ((char)v4 != 0) {
        // 0x2949a
        v27 = (int64_t *)(a1 + (int64_t)&g13);
        v31 = (int64_t *)(a1 + (int64_t)&g9);
        int64_t * v34 = (int64_t *)(a1 + (int64_t)&g6); // 0x294a8
        v32 = (int64_t *)(a1 + (int64_t)&g10);
        v33 = (int64_t *)(a1 + (int64_t)&g11);
        v15 = (int64_t *)(a1 + (int64_t)&g8);
        v16 = (int64_t *)(a1 + (int64_t)&g7);
        int64_t v35 = v4; // 0x2948a
        int64_t v36 = *v34; // 0x294a8
        int64_t v37 = *v15 - v36 >> 4; // 0x294dc
        while (32 * (*v27 - *v31) / 8 - 32 + (*v32 - *v33 >> 4) != -v37) {
            // 0x294e9
            v17 = *(int32_t *)v36;
            function_29d94(&v2, v36 + 8, v37);
            int64_t v38 = *v34; // 0x29504
            function_2508e(v38 + 8);
            if (v38 == *v15 - 16) {
                // 0x29527
                function_4eeb50(*v16);
                int64_t v39 = *v31 + 8; // 0x2953f
                int64_t v40 = *(int64_t *)v39; // 0x29543
                *v31 = v39;
                *v16 = v40;
                *v34 = v40;
                *v15 = v40 + (int64_t)&g14;
            } else {
                // 0x29518
                *v34 = *v34 + 16;
            }
            // 0x2956e
            function_729b0(v3);
            if ((char)v35 == 0) {
                goto lab_0x297d7_2;
            }
            if (v17 != 0) {
                // 0x2958b
                int64_t v41; // bp-576, 0x29432
                function_28e50(a1, (int64_t)v17, v2, &v41, &g14);
                if ((char)a2 == 0) {
                    // 0x295c6
                    function_729b6(&v14, v3, &v41, a3);
                    v18 = (int64_t *)(a1 + (int64_t)&g12);
                    int64_t v42 = *v32; // 0x295e7
                    if (v42 == *v18 - 16) {
                        // 0x29618
                        v19 = *v27;
                        v20 = (int64_t *)(a1 + (int64_t)&g4);
                        int64_t v43 = *v20; // 0x2961f
                        v21 = (int64_t *)(a1 + (int64_t)&g5);
                        uint64_t v44 = *v21; // 0x29626
                        int64_t v45 = v19 - v43 >> 3; // 0x29636
                        v5 = v19;
                        v8 = v19;
                        v11 = v45;
                        v13 = v3;
                        if (v44 - v45 < 2) {
                            // 0x29647
                            v22 = *v31;
                            int64_t v46 = v19 - v22 >> 3; // 0x29654
                            v23 = v46 + 2;
                            v24 = v46 + 1;
                            v25 = 2 * v23;
                            if (v44 > v25) {
                                // 0x29669
                                v26 = 8 * (v44 - v23) / 2 + v43;
                                int64_t v47 = v19 + 8; // 0x29673
                                v28 = v47 - v22;
                                if (v22 > v26) {
                                    // 0x29682
                                    v9 = v26;
                                    v7 = v19;
                                    v10 = v28;
                                    v6 = v26;
                                    v12 = v22;
                                    if (v47 != v22) {
                                        goto lab_0x296a6;
                                    } else {
                                        goto lab_0x2972b;
                                    }
                                } else {
                                    // 0x2968f
                                    v7 = v19;
                                    v10 = v28;
                                    v6 = v26;
                                    v12 = v22;
                                    if (v47 == v22) {
                                        goto lab_0x2972b;
                                    } else {
                                        // 0x296a0
                                        v9 = 8 * v24 - v28 + v26;
                                        goto lab_0x296a6;
                                    }
                                }
                            } else {
                                // 0x296ad
                                v29 = v44 != 0 ? v44 : 1;
                                v30 = v44 + 2 + v29;
                                if (v30 < 0x2000000000000000) {
                                    goto lab_0x296d2;
                                } else {
                                    // 0x296cd
                                    function_5423b0(v43, v22, v25, v29);
                                    goto lab_0x296d2;
                                }
                            }
                        } else {
                            goto lab_0x2976c;
                        }
                    } else {
                        // 0x295f7
                        *(int32_t *)v42 = v17;
                        function_2509a(v42 + 8, &v2);
                        *v32 = *v32 + 16;
                        // 0x297cd
                        function_729ce((int64_t)&v14);
                        goto lab_0x297d7_2;
                    }
                }
            }
            // 0x29480
            v35 = function_729a0(v3);
            if ((char)v35 == 0) {
                goto lab_0x297d7_2;
            }
            v36 = *v34;
            v37 = *v15 - v36 >> 4;
        }
        // 0x2956e
        function_729b0(v3);
    }
    goto lab_0x297d7_2;
  lab_0x297d7_2:
    // 0x297d7
    function_22e2e(a1 + 8, a2, a3);
    function_2508e((int64_t)&v2);
    int64_t result = 0; // 0x29805
    if (v1 != __readfsqword(40)) {
        // 0x29807
        __stack_chk_fail();
        result = (int64_t)&g59;
    }
    // 0x2980c
    return result;
  lab_0x2976c:;
    int64_t v48 = function_4efd30((int64_t)&g14, v13, v11, v8); // 0x29778
    *(int64_t *)(v5 + 8) = v48;
    int64_t v49 = *v32; // 0x29789
    *(int32_t *)v49 = v17;
    function_2509a(v49 + 8, &v2);
    int64_t v50 = *v27 + 8; // 0x297a2
    int64_t v51 = *(int64_t *)v50; // 0x297a6
    *v27 = v50;
    *v33 = v51;
    *v32 = v51;
    *v18 = v51 + (int64_t)&g14;
    // 0x297cd
    function_729ce((int64_t)&v14);
    goto lab_0x297d7_2;
  lab_0x296d2:;
    int64_t v52 = function_4efd30(8 * v30, v22, v25, v29); // 0x296da
    int64_t v53 = *v31; // 0x296e5
    int64_t v54 = v52 + 8 * (v30 - v23) / 2; // 0x296f2
    int64_t v55 = *v27 + 8; // 0x296fd
    int64_t v56 = v53; // 0x29704
    if (v55 == v53) {
        goto lab_0x29711;
    } else {
        int64_t v57 = v55 - v53; // 0x29706
        memmove((int64_t *)v54, (int64_t *)v53, (int32_t)v57);
        v56 = v57;
        goto lab_0x29711;
    }
  lab_0x296a6:
    // 0x296a6
    memmove((int64_t *)v9, (int64_t *)v22, (int32_t)v28);
    v7 = v19;
    v10 = v28;
    v6 = v26;
    v12 = v22;
    goto lab_0x2972b;
  lab_0x2972b:;
    int64_t v58 = *(int64_t *)v6; // 0x2972b
    *v31 = v6;
    *v16 = v58;
    *v15 = v58 + (int64_t)&g14;
    int64_t v59 = 8 * v24 - 8 + v6; // 0x29749
    *v27 = v59;
    int64_t v60 = *(int64_t *)v59; // 0x29755
    *v33 = v60;
    *v18 = v60 + (int64_t)&g14;
    v5 = *v27;
    v8 = v7;
    v11 = v10;
    v13 = v12;
    goto lab_0x2976c;
  lab_0x29711:
    // 0x29711
    function_4eeb50(*v20);
    *v20 = v52;
    *v21 = v30;
    v7 = v29;
    v10 = v56;
    v6 = v54;
    v12 = v53;
    goto lab_0x2972b;
}

// Address range: 0x5b7ba - 0x5bb9c
int64_t function_5b7ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x5b7df
    int64_t v2 = function_24ded((int64_t)" \t\r\n"); // 0x5b7f2
    int64_t v3 = function_5bfb2(a2, " \t\r\n", 0, v2); // 0x5b809
    int64_t v4 = -1; // 0x5b812
    int64_t v5 = 1; // 0x5b812
    char v6; // 0x5b81f
    uint64_t v7; // 0x5b82d
    if (v3 == -1) {
        goto lab_0x5bb70;
    } else {
        // 0x5b818
        v6 = *(char *)(v3 + (int64_t)" \t\r\n");
        v4 = v3;
        v5 = 1;
        if (v6 == 35) {
            goto lab_0x5bb70;
        } else {
            // 0x5b82d
            v7 = *(int64_t *)((int64_t)" \t\r\n" - 24);
            int64_t v8 = v3 + 1; // 0x5b831
            if (v6 == 47 == v8 < v7) {
                // 0x5b840
                v4 = v8;
                v5 = 1;
                if (*(char *)(v3 + (int64_t)" \t\r\n" + 1) == 47) {
                    goto lab_0x5bb70;
                } else {
                    goto lab_0x5b84d;
                }
            } else {
                // 0x5b848
                v4 = v8;
                v5 = 1;
                if (v7 == 0) {
                    goto lab_0x5bb70;
                } else {
                    goto lab_0x5b84d;
                }
            }
        }
    }
  lab_0x5bb70:;
    int64_t result = v5 | v4 & -256; // 0x5bb83
    if (v1 != __readfsqword(40)) {
        // 0x5bb85
        __stack_chk_fail();
        result = (int64_t)&g59;
    }
    // 0x5bb8a
    return result;
  lab_0x5b84d:;
    int64_t v9 = v7 - 1;
    int64_t v10 = v7 + (int64_t)" \t\r\n" - 1; // 0x5b850
    int64_t v11 = function_504cb(" \t\r\n", v2, v10, v9); // 0x5b870
    while (v11 != 0) {
        int64_t v12 = v9; // 0x5b890
        v4 = v11;
        v5 = 1;
        if (v9 == 0) {
            goto lab_0x5bb70;
        }
        v9 = v12 - 1;
        v10 = v12 + (int64_t)" \t\r\n" - 1;
        v11 = function_504cb(" \t\r\n", v2, v10, v9);
    }
    int64_t v13 = a1 + 8; // 0x5b894
    int64_t * v14 = (int64_t *)v13; // 0x5b894
    int64_t v15 = *v14; // 0x5b894
    int64_t v16; // 0x5b7ba
    int64_t v17; // 0x5b7ba
    int64_t v18; // bp-320, 0x5b7ba
    int64_t v19; // bp-344, 0x5b7ba
    if (*(int64_t *)(v15 - 24) == 0) {
        // 0x5bb18
        v4 = v15;
        v5 = 1;
        if (*(char *)v10 == 58) {
            // 0x5bb22
            function_36712(&v19, a2, v3, v9);
            int64_t v20 = *v14; // 0x5bb35
            int32_t * v21 = (int32_t *)(v20 - 8); // 0x5bb39
            if (*v21 < 0) {
                // 0x5bb40
                *v21 = 0;
            }
            int32_t * v22 = (int32_t *)(v19 - 8); // 0x5bb4c
            if (*v22 < 0) {
                // 0x5bb53
                *v22 = 0;
            }
            // 0x5bb5a
            *v14 = v19;
            v19 = v20;
            v4 = function_2508e((int64_t)&v19);
            v5 = 1;
        }
        goto lab_0x5bb70;
    } else {
        int64_t * v23 = (int64_t *)(a1 + 24); // 0x5b8a3
        if (*v23 == -1) {
            int64_t v24 = v3 + a3; // 0x5b8d0
            *v23 = v24;
            v4 = v2;
            v5 = 1;
            if (*(char *)(v3 + v2) != 123) {
                // 0x5b8e2
                function_48d707(&v18, 64, L"Expected '{' at position %i", v24);
                v4 = function_36622(a5, &v18);
                v5 = 0;
            }
            goto lab_0x5bb70;
        } else {
            if (v6 != 125) {
                int64_t v25 = function_5b444(" ;\"", function_24ded((int64_t)" ;\"") + (int64_t)" ;\""); // bp-352, 0x5b943
                int64_t v26; // bp-360, 0x5b7ba
                function_36712(&v26, a2, v3, v9);
                function_48e723(&v19, &v26, &v25);
                function_2508e((int64_t)&v26);
                int64_t v27 = (int64_t)&v25; // 0x5b972
                function_2508e(v27);
                v17 = (int64_t)L"Expected an expression at position %i";
                int64_t v28; // 0x5b7ba
                if (v28 - v19 < 24) {
                    goto lab_0x5ba14;
                } else {
                    int64_t v29 = *(int64_t *)(v19 + 8); // 0x5b9a2
                    uint64_t v30 = *(int64_t *)(v29 - 24); // 0x5b9ad
                    uint64_t v31 = function_24ded((int64_t)&g29); // 0x5b9b6
                    int64_t v32 = function_5bfa4(0x100000000000000 * v29 >> 56, &g29, v30 > v31 ? v31 : v30); // 0x5b9d9
                    v17 = (int64_t)L"Expected '=' at position %i";
                    if ((int32_t)v32 != 0) {
                        goto lab_0x5ba14;
                    } else {
                        int64_t v33 = v30 - v31; // 0x5b9e7
                        v17 = (int64_t)L"Expected '=' at position %i";
                        if (v33 < 0x80000000 == (int32_t)v33 == 0) {
                            int64_t v34 = a1 + 72; // 0x5ba35
                            function_380a0(function_5c3b0(function_5c4c0(v34, v13), v19), v19 + 16);
                            int64_t v35 = 3; // 0x5ba82
                            v16 = 1;
                            if (v28 - v19 >> 3 > 3) {
                                int64_t v36 = 8 * v35 + v19; // 0x5ba8b
                                int64_t v37 = v35 + 1; // 0x5ba8f
                                int64_t v38 = function_24ded((int64_t)&g23); // 0x5ba92
                                v25 = (int64_t)&g57;
                                int64_t v39 = *(int64_t *)v36; // 0x5bab1
                                function_259ce(&v25, *(int64_t *)(v39 - 24) + v38, v39);
                                function_25cec(&v25, (int64_t)&g23, v38);
                                function_4a8c6(&v25, v36);
                                function_4a8c6((int64_t *)function_5c3b0(function_5c4c0(v34, v13), v19), v27);
                                function_2508e(v27);
                                v35 = v37;
                                v16 = 1;
                                while (v37 < v28 - v19 >> 3) {
                                    // 0x5ba88
                                    v36 = 8 * v35 + v19;
                                    v37 = v35 + 1;
                                    v38 = function_24ded((int64_t)&g23);
                                    v25 = (int64_t)&g57;
                                    v39 = *(int64_t *)v36;
                                    function_259ce(&v25, *(int64_t *)(v39 - 24) + v38, v39);
                                    function_25cec(&v25, (int64_t)&g23, v38);
                                    function_4a8c6(&v25, v36);
                                    function_4a8c6((int64_t *)function_5c3b0(function_5c4c0(v34, v13), v19), v27);
                                    function_2508e(v27);
                                    v35 = v37;
                                    v16 = 1;
                                }
                            }
                            goto lab_0x5bb0c;
                        } else {
                            goto lab_0x5ba14;
                        }
                    }
                }
            } else {
                // 0x5b8b0
                function_251e8(v13);
                *v23 = -1;
                *(int64_t *)(a1 + 16) = -1;
                v4 = -1;
                v5 = 1;
                goto lab_0x5bb70;
            }
        }
    }
  lab_0x5ba14:
    // 0x5ba14
    function_48d707(&v18, 64, (int32_t *)v17, v3 + a3);
    function_36622(a5, &v18);
    v16 = 0;
    goto lab_0x5bb0c;
  lab_0x5bb0c:
    // 0x5bb0c
    v4 = function_29c46((int64_t)&v19);
    v5 = v16;
    goto lab_0x5bb70;
}

// Address range: 0x49212c - 0x492512
int64_t function_49212c(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x49213d
    int64_t v2; // 0x49212c
    int64_t v3; // bp-96, 0x49212c
    int32_t fd; // 0x49231b
    if (a4 < 64) {
        // 0x492153
        *(int64_t *)a1 = 0;
        *(int64_t *)(a1 + 8) = 0;
        goto lab_0x4924eb;
    } else {
        uint64_t v4 = a3 - 64 + a4; // 0x49216a
        function_729b6(&v3, a2 + 8, (int64_t *)a3, a4);
        if (*(int64_t *)(a2 + 64) != 0) {
            while (true) {
                // continue -> 0x4921ce
            }
        }
        // 0x49230a
        fd = memfd_create(&g24, 1);
        if (fd < 0) {
            // 0x4923f3
            *(int64_t *)a1 = 0;
            *(int64_t *)(a1 + 8) = 0;
            // 0x4924e1
            function_729ce((int64_t)&v3);
            goto lab_0x4924eb;
        } else {
            // 0x492326
            if (ftruncate(fd, (int32_t)&g1) < 0) {
                goto lab_0x4923eb;
            } else {
                uint64_t v5 = (v4 < a3 ? -1 : v4) & -0x1000; // 0x492341
                int64_t v6 = (a3 < a4 ? a4 : a3) - a4 + (int64_t)&g58 & -0x1000; // 0x49234c
                if (v5 > v6) {
                    int64_t * v7 = mmap((int64_t *)v6, (int32_t)&g1, 5, 0x100001, fd, 0); // 0x492374
                    int64_t v8 = (int64_t)v7;
                    int64_t v9 = v8; // 0x492380
                    int64_t v10; // 0x492391
                    if (v7 != (int64_t *)-1) {
                        // 0x492382
                        v10 = function_67701(v8, 64, v6, v5);
                        v2 = v8;
                        if ((char)v10 != 0) {
                            goto lab_0x4923b9;
                        }
                        // 0x49239a
                        munmap(v7, (int32_t)&g1);
                        v9 = 0;
                    }
                    int64_t v11 = v6 + (int64_t)&g2; // 0x4923aa
                    int64_t v12 = v11; // 0x49235a
                    while (v5 > v11) {
                        // 0x49235c
                        v7 = mmap((int64_t *)v12, (int32_t)&g1, 5, 0x100001, fd, 0);
                        v8 = (int64_t)v7;
                        v9 = v8;
                        if (v7 != (int64_t *)-1) {
                            // 0x492382
                            v10 = function_67701(v8, 64, v6, v5);
                            v2 = v8;
                            if ((char)v10 != 0) {
                                goto lab_0x4923b9;
                            }
                            // 0x49239a
                            munmap(v7, (int32_t)&g1);
                            v9 = 0;
                        }
                        // 0x4923aa
                        v11 = v12 + (int64_t)&g2;
                        v12 = v11;
                    }
                    // 0x4923b3
                    v2 = v9;
                    if (v9 == -1) {
                        goto lab_0x4923eb;
                    } else {
                        goto lab_0x4923b9;
                    }
                } else {
                    goto lab_0x4923eb;
                }
            }
        }
    }
  lab_0x4923b9:;
    int64_t * v13 = mmap(NULL, (int32_t)&g1, 3, 1, fd, 0); // 0x4923d0
    int64_t v14; // 0x49212c
    if (v13 != (int64_t *)-1) {
        int64_t v15 = (int64_t)v13; // 0x4923d0
        int64_t v16 = function_4efd30(32, (int64_t)&g1, 3, 1); // 0x492411
        *(int32_t *)v16 = fd;
        *(int64_t *)(v16 + 24) = 1;
        int64_t v17 = 0; // bp-88, 0x49244a
        int64_t v18 = v16; // bp-72, 0x492453
        *(int64_t *)(v16 + 8) = (-0x13c772a311d2c06b * v2 ^ -0x716204840bfb3545) - 0x5e0a76393bfeda2b;
        *(int64_t *)(v16 + 16) = (-0x13c772a311d2c06b * v15 ^ -0x716204840bfb3545) - 0x5e0a76393bfeda2b;
        int64_t v19 = -0x6b2800abb2db126b * v2 - 0x71cf18fadd0407 ^ 0x1d8fd4b0f55dfcbb; // 0x492498
        int64_t v20 = v19; // bp-80, 0x49249b
        function_492898(a2 + 48, &v20);
        function_4927ac(&v18);
        function_4927ac(&v17);
        int64_t v21 = function_4efd30(32, (int64_t)&v20, v19, 0x1d8fd4b0f55dfcbb); // 0x4924be
        *(int64_t *)v21 = v2;
        *(int64_t *)(v21 + 8) = 0;
        *(int64_t *)(v21 + 16) = v2;
        *(int64_t *)(v21 + 24) = v15;
        v14 = v21;
        goto lab_0x4924d6;
    } else {
        // 0x4923de
        munmap((int64_t *)v2, (int32_t)&g1);
        goto lab_0x4923eb;
    }
  lab_0x4924eb:;
    int64_t result = a1; // 0x4924fc
    if (v1 != __readfsqword(40)) {
        // 0x4924fe
        __stack_chk_fail();
        result = (int64_t)&g59;
    }
    // 0x492503
    return result;
  lab_0x4923eb:
    // 0x4923eb
    close(fd);
    // 0x4923f3
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    // 0x4924e1
    function_729ce((int64_t)&v3);
    goto lab_0x4924eb;
  lab_0x4924d6:
    // 0x4924d6
    function_4927ce(a1, v14);
    // 0x4924e1
    function_729ce((int64_t)&v3);
    goto lab_0x4924eb;
}

// Address range: 0x4aab80 - 0x4aaf3e
int64_t function_4aab80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int64_t a8, int64_t a9, int64_t a10) {
    uint32_t v1 = (int32_t)a6; // 0x4aab9a
    int32_t v2 = 0; // bp-124, 0x4aabb4
    int32_t v3 = a7; // 0x4aabbc
    if (v1 != 0) {
        // 0x4aaec0
        v3 = (int32_t)((int32_t)function_4a9620(a1 + 152, a1 + 216) == 0) + a7;
        if (v1 >= 8) {
            int32_t * v4 = (int32_t *)a8; // 0x4aaee8
            *v4 = *v4 | 8;
            // 0x4aadb1
            return 0xffffd900;
        }
    }
    // 0x4aabc2
    if ((int32_t)function_4ad720(a1 + 304) != 0) {
        int32_t * v5 = (int32_t *)a8; // 0x4aabd2
        *v5 = *v5 | 1;
    }
    // 0x4aabd7
    if ((int32_t)function_4ad750(a1 + 280) != 0) {
        int32_t * v6 = (int32_t *)a8; // 0x4aabe7
        *v6 = *v6 | (int32_t)&g14;
    }
    int32_t * v7 = (int32_t *)(a1 + (int64_t)&g16); // 0x4aabef
    int32_t v8 = *v7; // 0x4aabef
    int64_t v9; // 0x4aab80
    if ((1 << (v8 + 31) % 32 & *(int32_t *)&v9) == 0) {
        int32_t * v10 = (int32_t *)a8; // 0x4aadf0
        *v10 = *v10 | (int32_t)"le";
    }
    int32_t * v11 = (int32_t *)(a1 + (int64_t)&g17); // 0x4aac0c
    v9 = a5;
    int32_t * v12; // 0x4aab80
    int32_t * v13; // 0x4aab80
    int64_t v14; // 0x4aab80
    if ((1 << (*v11 + 31) % 32 & *(int32_t *)(a5 + 4)) == 0) {
        int32_t * v15 = (int32_t *)a8;
        *v15 = *v15 | (int32_t)&g30;
        int64_t v16 = function_4c14d0(v8); // 0x4aadd0
        v12 = v15;
        v14 = v16;
        v13 = v15;
        if (v16 != 0) {
            goto lab_0x4aac39;
        } else {
            goto lab_0x4aadde;
        }
    } else {
        int64_t v17 = function_4c14d0(v8); // 0x4aac2b
        int32_t * v18 = (int32_t *)a8;
        v12 = v18;
        v14 = v17;
        v13 = v18;
        if (v17 == 0) {
            goto lab_0x4aadde;
        } else {
            goto lab_0x4aac39;
        }
    }
  lab_0x4aac39:;
    int32_t * v19 = v12;
    int64_t v20 = *(int64_t *)(a1 + 40); // 0x4aac3d
    int64_t v21 = a2 + 328; // 0x4aac4e
    int64_t v22; // bp-120, 0x4aab80
    function_4c18b0(v14, v20, *(int64_t *)(a1 + 32), &v22);
    v9 = v14;
    int64_t v23 = v14; // 0x4aac74
    if ((int32_t)function_4a9850(a5, *v11, v21) != 0) {
        // 0x4aac76
        *v19 = *v19 | (int32_t)&g2;
        v23 = v9;
    }
    int64_t v24 = *(int64_t *)(a1 + (int64_t)&g14); // 0x4aac7e
    int64_t v25 = *(int64_t *)(a1 + (int64_t)&g15); // 0x4aac88
    uint64_t v26 = function_4c1d00(v23); // 0x4aac94
    int32_t v27 = *v7; // 0x4aac9e
    int64_t v28 = *(int64_t *)(a1 + (int64_t)&g18); // 0x4aaca9
    int32_t v29 = *v11; // 0x4aacb0
    int64_t v30 = function_4c4730(v29, v28, v21, v27, &v22, v26 % 256, 0x100000000 * v25 >> 32, v24); // 0x4aacc6
    int64_t v31 = (int64_t)*v19; // 0x4aaccd
    int32_t * v32 = v19; // 0x4aacd1
    int64_t v33 = v31; // 0x4aacd1
    if ((int32_t)v30 != 0) {
        int64_t v34 = v31 | 8; // 0x4aae00
        *v19 = (int32_t)v34;
        v32 = v19;
        v33 = v34;
    }
    goto lab_0x4aacd7;
  lab_0x4aadde:;
    uint32_t v46 = *v13 | 8; // 0x4aade2
    *v13 = v46;
    v32 = v13;
    v33 = v46;
    goto lab_0x4aacd7;
  lab_0x4aacd7:;
    int32_t * v35 = v32;
    *v35 = (int32_t)(function_4aa650(a1, a2, a4, a5) | v33);
    int64_t result3; // 0x4aab80
    if (a3 == 0) {
      lab_0x4aae10:
        // 0x4aae10
        if (*(int64_t *)(a2 + (int64_t)&g20) != 0) {
            // 0x4aae30
            int32_t v36; // 0x4aab80
            uint32_t v37 = v1 + 2 - v36; // 0x4aae1b
            int64_t v38 = v1 == 0;
            int64_t v39; // 0x4aae10
            int64_t v40 = v39; // 0x4aab80
            int64_t v41 = v40;
            uint32_t v42 = *(int32_t *)(v41 + 456); // 0x4aae30
            if (v42 > 0 != v42 < v37) {
                // 0x4aae41
                if ((int32_t)function_4aa470(a2, v41, 0, v38) == 0) {
                    // 0x4aaef7
                    return (int64_t)&v2;
                }
            }
            int64_t v43 = *(int64_t *)(v41 + (int64_t)&g20); // 0x4aae5e
            v40 = v43;
            while (v43 != 0) {
                // 0x4aae30
                v41 = v40;
                v42 = *(int32_t *)(v41 + 456);
                if (v42 > 0 != v42 < v37) {
                    // 0x4aae41
                    if ((int32_t)function_4aa470(a2, v41, 0, v38) == 0) {
                        // 0x4aaef7
                        return (int64_t)&v2;
                    }
                }
                // 0x4aae5e
                v43 = *(int64_t *)(v41 + (int64_t)&g20);
                v40 = v43;
            }
        }
        int64_t result = function_4aa830(a2, a3, a4, a5, a6 + 1 & 0xffffffff, v3, (int32_t *)(0x100000000 * (int64_t)&v2 >> 32), a9, a10); // 0x4aaeac
        result3 = result;
        if ((int32_t)result != 0) {
            // 0x4aadb1
            return result;
        }
    } else {
        int64_t v44 = a3;
        while ((int32_t)function_4aa470(a2, v44, 0, (int64_t)(v1 == 0)) != 0) {
            int64_t v45 = *(int64_t *)(v44 + (int64_t)&g20); // 0x4aad10
            if (v45 == 0) {
                goto lab_0x4aae10;
            }
            v44 = v45;
        }
        int64_t result2 = function_4aa830(a2, v44, a4, a5, a6 + 1 & 0xffffffff, v3, (int32_t *)(0x100000000 * (int64_t)&v2 >> 32), a9, a10); // 0x4aad73
        result3 = result2;
        if ((int32_t)result2 != 0) {
            // 0x4aadb1
            return result2;
        }
    }
    if (a9 != 0) {
        // 0x4aad87
        if ((int32_t)result3 != 0) {
            // 0x4aadb1
            return result3;
        }
    }
    // 0x4aada7
    *v35 = *v35 | v2;
    // 0x4aadb1
    return 0;
}

// Address range: 0x4c9080 - 0x4c9464
int64_t function_4c9080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4c9080
    if (*(int64_t *)(a1 + 104) == 0 || *(int64_t *)(a1 + 128) == 0 || *(int64_t *)(a1 + 80) == 0) {
        // 0x4c9130
        return 0xffffbf80;
    }
    // 0x4c90cc
    int64_t v1; // bp-152, 0x4c9080
    function_4b0870(&v1);
    int64_t v2; // bp-120, 0x4c9080
    function_4b0870(&v2);
    int64_t v3; // bp-88, 0x4c9080
    function_4b0870(&v3);
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x4c90f6
    int64_t v5 = function_4b0fc0(&v1, a4, *v4); // 0x4c9102
    int64_t v6; // 0x4c9080
    int64_t v7; // 0x4c9170
    if ((int32_t)v5 == 0) {
        // 0x4c9170
        v7 = a1 + 16;
        int64_t v8 = function_4b1590(&v1, v7); // 0x4c9182
        v6 = 0xffffbcfc;
        if ((int32_t)v8 >= 0) {
            goto lab_0x4c9112;
        } else {
            if (a2 == 0) {
                goto lab_0x4c9248;
            } else {
                // 0x4c9194
                if (*(int64_t *)(a1 + 320) == 0) {
                    int64_t v9 = a1 + 304; // 0x4c93b8
                    int64_t v10 = a1 + 280; // 0x4c93bf
                    int32_t v11 = 11; // 0x4c93ce
                    int64_t v12 = function_4b38b0(v9, *v4 - 1, a2, a3); // 0x4c93e6
                    int64_t v13 = v12; // 0x4c93ed
                    while ((int32_t)v12 == 0) {
                        int64_t v14 = function_4b36d0(v10, v9, v7); // 0x4c9403
                        v13 = v14;
                        if ((int32_t)v14 != 0) {
                            // break -> 0x4c910b
                            break;
                        }
                        // 0x4c9410
                        if ((int32_t)function_4b1680(v10, 1) == 0) {
                            int64_t result = function_4b3cf0(v10, v9, v7); // 0x4c944e
                            if ((int32_t)result == 0) {
                                // 0x4c945b
                                return result;
                            }
                            // 0x4c910b
                            v6 = result + 0xffffbd00 & 0xffffffff;
                            goto lab_0x4c9112;
                        }
                        // 0x4c9421
                        v11--;
                        v6 = 0xffff7880;
                        if (v11 == 0) {
                            goto lab_0x4c9112;
                        }
                        v12 = function_4b38b0(v9, *v4 - 1, a2, a3);
                        v13 = v12;
                    }
                    // 0x4c910b
                    v6 = v13 + 0xffffbd00 & 0xffffffff;
                    goto lab_0x4c9112;
                } else {
                    int64_t v15 = a1 + 280; // 0x4c91a2
                    int64_t v16 = function_4b1ac0(v15, v15, v15); // 0x4c91b7
                    v6 = v16 + 0xffffbd00 & 0xffffffff;
                    if ((int32_t)v16 != 0) {
                        goto lab_0x4c9112;
                    } else {
                        int64_t v17 = function_4b26c0(v15, v15, v7); // 0x4c91d6
                        if ((int32_t)v17 != 0) {
                            // 0x4c910b
                            v6 = v17 + 0xffffbd00 & 0xffffffff;
                            goto lab_0x4c9112;
                        } else {
                            int64_t v18 = a1 + 304; // 0x4c91e3
                            int64_t v19 = function_4b1ac0(v18, v18, v18); // 0x4c91f3
                            if ((int32_t)v19 != 0) {
                                // 0x4c910b
                                v6 = v19 + 0xffffbd00 & 0xffffffff;
                                goto lab_0x4c9112;
                            } else {
                                int64_t v20 = function_4b26c0(v18, v18, v7); // 0x4c9209
                                if ((int32_t)v20 != 0) {
                                    // 0x4c910b
                                    v6 = v20 + 0xffffbd00 & 0xffffffff;
                                    goto lab_0x4c9112;
                                } else {
                                    int64_t v21 = (int64_t)&v1; // 0x4c9216
                                    int64_t v22 = function_4b1ac0(v21, v21, v15); // 0x4c9223
                                    if ((int32_t)v22 != 0) {
                                        // 0x4c910b
                                        v6 = v22 + 0xffffbd00 & 0xffffffff;
                                        goto lab_0x4c9112;
                                    } else {
                                        int64_t v23 = function_4b26c0(v21, v21, v7); // 0x4c923b
                                        if ((int32_t)v23 != 0) {
                                            // 0x4c910b
                                            v6 = v23 + 0xffffbd00 & 0xffffffff;
                                            goto lab_0x4c9112;
                                        } else {
                                            goto lab_0x4c9248;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        // 0x4c910b
        v6 = v5 + 0xffffbd00 & 0xffffffff;
        goto lab_0x4c9112;
    }
  lab_0x4c9112:
    // 0x4c9112
    function_4b0890(&v1);
    function_4b0890(&v2);
    function_4b0890(&v3);
    // 0x4c9130
    return v6 & 0xffffffff;
  lab_0x4c9248:;
    int64_t v24 = a1 + 88; // 0x4c9248
    int64_t v25 = function_4b2d10(&v2, &v1, a1 + 136, v24, a1 + 232); // 0x4c9267
    v6 = v25 + 0xffffbd00 & 0xffffffff;
    if ((int32_t)v25 != 0) {
        goto lab_0x4c9112;
    } else {
        int64_t v26 = a1 + 112; // 0x4c927b
        int64_t v27 = function_4b2d10(&v3, &v1, a1 + 160, v26, a1 + 256); // 0x4c929a
        if ((int32_t)v27 != 0) {
            // 0x4c910b
            v6 = v27 + 0xffffbd00 & 0xffffffff;
            goto lab_0x4c9112;
        } else {
            int64_t v28 = function_4b19a0(&v1, &v2, &v3); // 0x4c92b6
            if ((int32_t)v28 != 0) {
                // 0x4c910b
                v6 = v28 + 0xffffbd00 & 0xffffffff;
                goto lab_0x4c9112;
            } else {
                int64_t v29 = (int64_t)&v1; // 0x4c92ca
                int64_t v30 = (int64_t)&v2; // 0x4c92cf
                int64_t v31 = function_4b1ac0(v30, v29, a1 + 184); // 0x4c92d4
                if ((int32_t)v31 != 0) {
                    // 0x4c910b
                    v6 = v31 + 0xffffbd00 & 0xffffffff;
                    goto lab_0x4c9112;
                } else {
                    int64_t v32 = function_4b26c0(v29, v30, v24); // 0x4c92ee
                    if ((int32_t)v32 != 0) {
                        // 0x4c910b
                        v6 = v32 + 0xffffbd00 & 0xffffffff;
                        goto lab_0x4c9112;
                    } else {
                        int64_t v33 = function_4b1ac0(v30, v29, v26); // 0x4c9308
                        if ((int32_t)v33 != 0) {
                            // 0x4c910b
                            v6 = v33 + 0xffffbd00 & 0xffffffff;
                            goto lab_0x4c9112;
                        } else {
                            int64_t v34 = function_4b1900(&v1, &v3, &v2); // 0x4c9324
                            if ((int32_t)v34 != 0) {
                                // 0x4c910b
                                v6 = v34 + 0xffffbd00 & 0xffffffff;
                                goto lab_0x4c9112;
                            } else {
                                if (a2 == 0) {
                                    goto lab_0x4c936a;
                                } else {
                                    int64_t v35 = function_4b1ac0(v29, v29, a1 + 304); // 0x4c9345
                                    if ((int32_t)v35 != 0) {
                                        // 0x4c910b
                                        v6 = v35 + 0xffffbd00 & 0xffffffff;
                                        goto lab_0x4c9112;
                                    } else {
                                        int64_t v36 = function_4b26c0(v29, v29, v7); // 0x4c935d
                                        if ((int32_t)v36 != 0) {
                                            // 0x4c910b
                                            v6 = v36 + 0xffffbd00 & 0xffffffff;
                                            goto lab_0x4c9112;
                                        } else {
                                            goto lab_0x4c936a;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x4c936a:;
    int64_t v37 = function_4b1080(&v1, a5, *v4); // 0x4c9376
    function_4b0890(&v1);
    function_4b0890(&v2);
    function_4b0890(&v3);
    int64_t v38 = v37 & 0xffffffff; // 0x4c939f
    if ((int32_t)v37 != 0) {
        // 0x4c93a5
        v38 = v37 - (int64_t)(int32_t)&g22 & 0xffffffff;
    }
    // 0x4c9130
    return v38 & 0xffffffff;
}

// Address range: 0x4d3530 - 0x4d3913
int64_t function_4d3530(int64_t a1, uint64_t a2, int64_t a3, uint64_t a4, int64_t a5, uint64_t a6, int32_t a7, unsigned char a8, uint32_t a9) {
    int64_t v1 = a5; // bp-728, 0x4d3557
    if (a2 < 129 == a4 < 65 != a6 < 65) {
        // 0x4d35b5
        return 0xffffe080;
    }
    int64_t v2 = function_4c14d0(a7); // 0x4d3584
    if (v2 == 0) {
        // 0x4d3913
        return 0;
    }
    // 0x4d3595
    int64_t v3; // bp-664, 0x4d3530
    function_4c1690(&v3);
    int64_t v4 = function_4c1770(&v3, v2, 0); // 0x4d35a9
    int64_t v5 = v4 & 0xffffffff; // 0x4d35b0
    if ((int32_t)v4 != 0) {
        // 0x4d35b5
        return v5 & 0xffffffff;
    }
    int64_t v6 = (int64_t)&v1; // 0x4d353d
    uint64_t v7 = function_4c1d00(v2) % 256; // 0x4d35e0
    int64_t v8 = v7 < 33 ? 64 : 128; // 0x4d35fe
    int64_t v9; // bp-568, 0x4d3530
    memset((void *)(int64_t)(&v9), (int32_t)a8, (int32_t)v8);
    int64_t v10; // bp-440, 0x4d3530
    int64_t v11 = (int64_t)&v10; // 0x4d3619
    int64_t v12 = v11; // 0x4d362d
    uint64_t v13 = v8;
    int64_t v14 = v13 > a6 ? a6 : v13; // 0x4d3639
    memcpy((int64_t *)v12, (int64_t *)v1, (int32_t)v14);
    int64_t v15 = v13 - v14; // 0x4d364b
    v12 += v14;
    while (v15 != 0) {
        // 0x4d3630
        v13 = v15;
        v14 = v13 > a6 ? a6 : v13;
        memcpy((int64_t *)v12, (int64_t *)v1, (int32_t)v14);
        v15 = v13 - v14;
        v12 += v14;
    }
    // 0x4d3650
    v1 = 0x100000000 * v2 >> 32;
    int64_t v16; // bp-312, 0x4d3530
    int64_t v17 = (int64_t)&v16; // 0x4d367a
    int64_t v18 = v17; // 0x4d367d
    uint64_t v19 = v8;
    int64_t v20 = v19 > a4 ? a4 : v19; // 0x4d3689
    memcpy((int64_t *)v18, (int64_t *)a3, (int32_t)v20);
    int64_t v21 = v19 - v20; // 0x4d369b
    v18 += v20;
    while (v21 != 0) {
        // 0x4d3680
        v19 = v21;
        v20 = v19 > a4 ? a4 : v19;
        memcpy((int64_t *)v18, (int64_t *)a3, (int32_t)v20);
        v21 = v19 - v20;
        v18 += v20;
    }
    // 0x4d36a0
    int64_t v22; // bp-632, 0x4d3530
    int64_t v23 = (int64_t)&v22; // 0x4d36b7
    int64_t v24; // bp-184, 0x4d3530
    int64_t v25 = (int64_t)&v24; // 0x4d36bc
    int64_t v26 = v5; // 0x4d36c1
    int64_t v27; // 0x4d3530
    int64_t v28; // 0x4d3530
    int64_t v29; // 0x4d3530
    int64_t v30; // 0x4d3530
    int64_t v31; // 0x4d3530
    int64_t v32; // 0x4d382e
    int64_t v33; // 0x4d383f
    if (a2 != 0) {
        int64_t v34 = function_4c1820(&v3); // 0x4d36e2
        v27 = v34;
        if ((int32_t)v34 == 0) {
            // 0x4d36ef
            v31 = v6 + (int64_t)&g19;
            v29 = a1;
            v30 = a2;
            while (true) {
              lab_0x4d36ef:;
                int64_t v35 = function_4c1850(&v3, &v9, v8); // 0x4d3701
                v27 = v35;
                if ((int32_t)v35 != 0) {
                    // break -> 0x4d3794
                    break;
                }
                int64_t v36 = function_4c1850(&v3, &v10, v8); // 0x4d3720
                v27 = v36;
                if ((int32_t)v36 != 0) {
                    // break -> 0x4d3794
                    break;
                }
                int64_t v37 = function_4c1850(&v3, &v16, v8); // 0x4d373b
                v27 = v37;
                if ((int32_t)v37 != 0) {
                    // break -> 0x4d3794
                    break;
                }
                int64_t v38 = function_4c1880(&v3, &v22); // 0x4d374c
                v27 = v38;
                if ((int32_t)v38 != 0) {
                    // break -> 0x4d3794
                    break;
                }
                uint64_t v39 = v30;
                if (a9 >= 2) {
                    int64_t v40 = function_4c18b0(v1, v23, v7, &v22); // 0x4d378b
                    v27 = v40;
                    if ((int32_t)v40 != 0) {
                        // break (via goto) -> 0x4d3794
                        goto lab_0x4d3794_2;
                    }
                    int64_t v41 = 1; // 0x4d3770
                    int64_t v42 = v41; // 0x4d3779
                    while (v41 != (int64_t)a9 - 1) {
                        // 0x4d377f
                        v40 = function_4c18b0(v1, v23, v7, &v22);
                        v27 = v40;
                        if ((int32_t)v40 != 0) {
                            // break (via goto) -> 0x4d3794
                            goto lab_0x4d3794_2;
                        }
                        // 0x4d3770
                        v41 = v42 + 1;
                        v42 = v41;
                    }
                }
                // 0x4d381c
                v32 = v39 > v7 ? v7 : v39;
                int64_t * dest_mem = memcpy((int64_t *)v29, &v22, (int32_t)v32); // 0x4d3835
                v33 = v39 - v32;
                int64_t v43 = v25; // 0x4d3844
                if (v33 == 0) {
                    // 0x4d391e
                    return (int64_t)dest_mem;
                }
                int64_t v44 = v8; // 0x4d3844
                while (true) {
                    uint64_t v45 = v44;
                    int64_t v46 = v45 > v7 ? v7 : v45; // 0x4d3861
                    memcpy((int64_t *)v43, &v22, (int32_t)v46);
                    v44 = v45 - v46;
                    v43 += v46;
                    v28 = v8;
                    if (v44 == 0) {
                        goto lab_0x4d3880;
                    }
                }
                goto lab_0x4d3896;
            }
        }
      lab_0x4d3794_2:
        // 0x4d3794
        v26 = v27 & 0xffffffff;
    }
    int64_t v47 = v11; // 0x4d37a7
    *(char *)v47 = 0;
    v47++;
    int64_t v48 = v17; // 0x4d37ba
    while (v47 != v17) {
        // 0x4d37b0
        *(char *)v47 = 0;
        v47++;
        v48 = v17;
    }
    *(char *)v48 = 0;
    int64_t v49 = v48 + 1; // 0x4d37d3
    v48 = v49;
    while (v49 != v25) {
        // 0x4d37d0
        *(char *)v48 = 0;
        v49 = v48 + 1;
        v48 = v49;
    }
    int64_t v50 = v25; // 0x4d37f3
    *(char *)v50 = 0;
    v50++;
    int64_t v51; // bp-56, 0x4d3530
    while (v50 != (int64_t)&v51) {
        // 0x4d37e8
        *(char *)v50 = 0;
        v50++;
    }
    int64_t v52 = v23; // 0x4d37fc
    *(char *)v52 = 0;
    v52++;
    while (v52 != (int64_t)&v9) {
        // 0x4d3800
        *(char *)v52 = 0;
        v52++;
    }
    // 0x4d380d
    function_4c16b0(&v3);
    // 0x4d35b5
    return v26 & 0xffffffff;
  lab_0x4d3880:;
    int64_t v53 = v28;
    int64_t v54; // bp-185, 0x4d3530
    char * v55 = (char *)(v53 + (int64_t)&v54); // 0x4d388b
    char v56 = *v55 + 1; // 0x4d388b
    *v55 = v56;
    if (v56 != 0) {
        goto lab_0x4d3896;
    } else {
        int64_t v57 = v53 - 1; // 0x4d3890
        v28 = v57;
        if (v57 != 0) {
            goto lab_0x4d3880;
        } else {
            goto lab_0x4d3896;
        }
    }
  lab_0x4d38d8:;
    // 0x4d38d8
    int64_t v58; // 0x4d3530
    unsigned char v59 = *(char *)(v58 + v31); // 0x4d38e0
    int64_t v60; // bp-313, 0x4d3530
    char * v61 = (char *)(v58 + (int64_t)&v60); // 0x4d38ef
    int64_t v62; // 0x4d3530
    uint64_t v63 = v62 % 256 + (int64_t)v59 + (int64_t)*v61; // 0x4d38f4
    *v61 = (char)v63;
    int64_t v64 = v58 - 1; // 0x4d38fd
    v58 = v64;
    v62 = v63 / 256;
    if (v64 != 0) {
        goto lab_0x4d38d8;
    } else {
        goto lab_0x4d36dd;
    }
  lab_0x4d3896:;
    int64_t v65 = v8; // 0x4d38a5
    int64_t v66 = 0; // 0x4d38a5
    while (true) {
        unsigned char v67 = *(char *)(v65 + v31); // 0x4d38ac
        int64_t v68; // bp-441, 0x4d3530
        char * v69 = (char *)(v65 + (int64_t)&v68); // 0x4d38b8
        uint64_t v70 = v66 % 256 + (int64_t)v67 + (int64_t)*v69; // 0x4d38bd
        *v69 = (char)v70;
        int64_t v71 = v65 - 1; // 0x4d38c6
        v65 = v71;
        v66 = v70 / 256;
        v58 = v8;
        v62 = 0;
        if (v71 == 0) {
            goto lab_0x4d38d8;
        }
    }
    goto lab_0x4d36dd;
  lab_0x4d36dd:;
    int64_t v72 = function_4c1820(&v3); // 0x4d36e2
    v29 += v32;
    v30 = v33;
    v27 = v72;
    if ((int32_t)v72 != 0) {
        // break -> 0x4d3794
        goto lab_0x4d3794_2;
    }
    goto lab_0x4d36ef;
}

// Address range: 0x4d3f90 - 0x4d43a7
int64_t function_4d3f90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x4d3fbb
    int32_t v2 = 0; // bp-444, 0x4d3fc3
    int32_t v3 = 0; // bp-440, 0x4d3fcb
    int64_t v4 = 0; // bp-424, 0x4d3fd3
    int64_t v5 = v1; // bp-432, 0x4d3fdc
    int64_t str; // 0x4d3f90
    if ((int32_t)str != 48) {
        // 0x4d4022
        return 0xffffd09e;
    }
    int64_t v6 = *(int64_t *)(a1 + 8) + v1; // 0x4d3fe1
    int32_t v7; // bp-344, 0x4d3f90
    int64_t v8; // bp-408, 0x4d3f90
    int64_t v9 = function_4b01d0(&v5, v6, &v8, (int64_t *)&v7); // 0x4d400b
    if ((int32_t)v9 != 0) {
        // 0x4d4022
        return v9 + 0xffffd100 & 0xffffffff;
    }
    // 0x4d4014
    if (str != 9 || memcmp(&g25, (int64_t *)str, 9) != 0) {
        // 0x4d4022
        return 0xffffd180;
    }
    // 0x4d408a
    if (v7 != 48) {
        // 0x4d4022
        return 0xffffd09e;
    }
    int64_t v10 = 2 * str; // 0x4d4097
    int64_t v11; // bp-272, 0x4d3f90
    int64_t v12; // bp-416, 0x4d3f90
    int64_t v13 = function_4afe70(&v12, v10, &v11, 4); // 0x4d40c9
    int64_t v14 = v13; // 0x4d40d0
    int64_t v15; // bp-184, 0x4d3f90
    int64_t v16; // 0x4d3f90
    int64_t v17; // 0x4d3f90
    if ((int32_t)v13 == 0) {
        int64_t v18 = v12; // 0x4d41f8
        v12 = v11 + v18;
        int64_t v19 = function_4aff10(&v12, v10, &v2); // 0x4d4221
        v16 = v18;
        v14 = v19;
        if ((int32_t)v19 != 0) {
            goto lab_0x4d40d6;
        } else {
            // 0x4d422e
            v17 = v18;
            if (v10 == v12) {
                goto lab_0x4d40e6;
            } else {
                int64_t v20 = function_4aff10(&v12, v10, &v3); // 0x4d424b
                int32_t v21 = v20; // 0x4d4250
                v16 = v18;
                v14 = v20;
                if (v21 != 0 && v21 != -98) {
                    goto lab_0x4d40d6;
                } else {
                    // 0x4d4258
                    v17 = v18;
                    if (v10 == v12) {
                        goto lab_0x4d40e6;
                    } else {
                        int64_t v22 = function_4b02e0(&v12, v10, &v15); // 0x4d4278
                        v16 = v18;
                        v14 = v22;
                        if ((int32_t)v22 != 0) {
                            goto lab_0x4d40d6;
                        } else {
                            // 0x4d4285
                            if (str != 8 || memcmp(&g26, (int64_t *)str, 8) != 0) {
                                // 0x4d4022
                                return 0xffffd180;
                            }
                            // 0x4d42bb
                            v17 = v18;
                            if (v10 != v12) {
                                // 0x4d4022
                                return 0xffffd09a;
                            }
                            goto lab_0x4d40e6;
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4d40d6;
    }
  lab_0x4d40d6:;
    int64_t v23 = v14 + 0xffffd100; // 0x4d40d6
    v17 = v16;
    if ((int32_t)v23 != 0) {
        // 0x4d4022
        return v23 & 0xffffffff;
    }
    goto lab_0x4d40e6;
  lab_0x4d40e6:;
    int64_t v24 = function_4c14d0(4); // 0x4d40eb
    if (v24 == 0) {
        // 0x4d4022
        return 0xffffd180;
    }
    // 0x4d40fe
    int32_t v25; // bp-312, 0x4d3f90
    int64_t v26; // bp-376, 0x4d3f90
    int64_t v27 = function_4b01d0(&v5, v6, &v26, (int64_t *)&v25); // 0x4d4113
    if ((int32_t)v27 != 0) {
        // 0x4d4022
        return v27 + 0xffffd100 & 0xffffffff;
    }
    // 0x4d4120
    int32_t v28; // bp-436, 0x4d3f90
    if ((int32_t)function_4c3490(&v26, (int64_t *)&v28) != 0) {
        // 0x4d4022
        return 0xffffd180;
    }
    int64_t v29 = function_4b4d90((int64_t)v28); // 0x4d413b
    if (v29 == 0) {
        // 0x4d4022
        return 0xffffd180;
    }
    // 0x4d414c
    v3 = *(int32_t *)(v29 + 8) / 8;
    int32_t v30; // 0x4d3f90
    if (v25 != 4 || (int64_t)v30 != (int64_t)*(int32_t *)(v29 + 24)) {
        // 0x4d4022
        return 0xffffd100;
    }
    // 0x4d417b
    int64_t v31; // bp-248, 0x4d3f90
    function_4c1690(&v31);
    int64_t v32; // bp-152, 0x4d3f90
    function_4b4e60(&v32);
    memcpy(&v15, (int64_t *)str, v30);
    int64_t v33 = function_4c1770(&v31, v24, 1); // 0x4d41c4
    int64_t v34 = v33; // 0x4d41ce
    if ((int32_t)v33 == 0) {
        // 0x4d42ee
        int64_t v35; // bp-216, 0x4d3f90
        int64_t v36 = function_4d3da0(&v31, a3, a4, v17, v11, v2, (int64_t)v3, &v35); // 0x4d4325
        v34 = v36;
        if ((int32_t)v36 == 0) {
            int64_t v37 = function_4b5690(&v32, v29); // 0x4d4340
            v34 = v37;
            if ((int32_t)v37 == 0) {
                int64_t v38 = function_4b4f20(&v32, &v35, 8 * v3, (int32_t)a2); // 0x4d436b
                v34 = v38;
                if ((int32_t)v38 == 0) {
                    // 0x4d437b
                    return (int64_t)&v4;
                }
            }
        }
    }
    // 0x4d41d4
    function_4c16b0(&v31);
    function_4b4ef0(&v32);
    // 0x4d4022
    return v34 & 0xffffffff;
}

// Address range: 0x4d91a0 - 0x4d92ab
int64_t function_4d91a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7, int32_t a8, int32_t a9, int64_t a10) {
    uint32_t v1 = g53; // 0x4d91d0
    int64_t result = v1; // 0x4d91db
    if (v1 == 0x40000000) {
        // 0x4d91dd
        result = function_4d8e90();
    }
    // 0x4d91fe
    if ((result & 96) == 96) {
        // 0x4d9298
        return function_20520();
    }
    if ((result & 16) != 0) {
        // 0x4d9268
        return function_20880();
    }
    if ((result & 4) != 0) {
        // 0x4d9280
        return function_20a60();
    }
    if (result % 2 != 0) {
        // 0x4d9250
        return function_203c0();
    }
    // 0x4daa70
    return result;
}

// Address range: 0x4d92b0 - 0x4d930e
int64_t function_4d92b0(void) {
    uint32_t v1 = g53; // 0x4d92b8
    int64_t v2 = v1; // 0x4d92c3
    if (v1 == 0x40000000) {
        // 0x4d92c5
        v2 = function_4d8e90();
    }
    // 0x4d92ca
    if ((v2 & 96) == 96) {
        // 0x4d92ef
        return 16;
    }
    int64_t result = 8; // 0x4d92dc
    if ((v2 & 16) == 0) {
        // 0x4d92de
        result = (v2 & 5) == 0 ? 1 : 4;
    }
    // 0x4d92ef
    return result;
}

// Address range: 0x4d9427 - 0x4d9428
int64_t function_4d9427(void) {
    // 0x4d9427
    int64_t result; // 0x4d9427
    return result;
}

// Address range: 0x4d9489 - 0x4d948c
int64_t function_4d9489(int64_t a1) {
    // 0x4d9489
    int64_t result; // 0x4d9489
    return result;
}

// Address range: 0x4d948e - 0x4d9491
int64_t function_4d948e(int64_t a1) {
    // 0x4d948e
    int64_t result; // 0x4d948e
    return result;
}

// Address range: 0x4d94b0 - 0x4d94b3
int64_t function_4d94b0(int64_t a1) {
    // 0x4d94b0
    int64_t result; // 0x4d94b0
    return result;
}

// Address range: 0x4d94b3 - 0x4d94b6
int64_t function_4d94b3(void) {
    // 0x4d94b3
    int64_t result; // 0x4d94b3
    return result;
}

// Address range: 0x4d94c6 - 0x4d94cd
int64_t function_4d94c6(void) {
    // 0x4d94c6
    int64_t result; // 0x4d94c6
    return result;
}

// Address range: 0x4d9512 - 0x4d9515
int64_t function_4d9512(void) {
    // 0x4d9512
    int64_t result; // 0x4d9512
    return result;
}

// Address range: 0x4d9515 - 0x4d951a
int64_t function_4d9515(int64_t a1) {
    // 0x4d9515
    int64_t v1; // 0x4d9515
    return v1 | 193;
}

// Address range: 0x4d9536 - 0x4d9539
int64_t function_4d9536(void) {
    // 0x4d9536
    int64_t result; // 0x4d9536
    return result;
}

// Address range: 0x4d953b - 0x4d953e
int64_t function_4d953b(int64_t a1) {
    // 0x4d953b
    int64_t result; // 0x4d953b
    return result;
}

// Address range: 0x4d9561 - 0x4d9562
int64_t function_4d9561(int64_t a1) {
    // 0x4d9561
    int64_t result; // 0x4d9561
    return result;
}

// Address range: 0x4d9574 - 0x4d9578
int64_t function_4d9574(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4d9574
    int64_t result; // 0x4d9574
    return result;
}

// Address range: 0x4d9579 - 0x4d957a
int64_t function_4d9579(int64_t a1) {
    // 0x4d9579
    int64_t result; // 0x4d9579
    return result;
}

// Address range: 0x4d958b - 0x4d958c
int64_t function_4d958b(void) {
    // 0x4d958b
    int64_t result; // 0x4d958b
    return result;
}

// Address range: 0x4d958d - 0x4d958e
int64_t function_4d958d(int64_t a1) {
    // 0x4d958d
    int64_t result; // 0x4d958d
    return result;
}

// Address range: 0x4d959b - 0x4d959c
int64_t function_4d959b(void) {
    // 0x4d959b
    int64_t result; // 0x4d959b
    return result;
}

// Address range: 0x4d959d - 0x4d959e
int64_t function_4d959d(int64_t a1) {
    // 0x4d959d
    int64_t result; // 0x4d959d
    return result;
}

// Address range: 0x4d95dd - 0x4d95de
int64_t function_4d95dd(void) {
    // 0x4d95dd
    int64_t result; // 0x4d95dd
    return result;
}

// Address range: 0x4d95f0 - 0x4d95f3
int64_t function_4d95f0(int64_t a1) {
    // 0x4d95f0
    int64_t result; // 0x4d95f0
    return result;
}

// Address range: 0x4d95f3 - 0x4d95f4
int64_t function_4d95f3(void) {
    // 0x4d95f3
    int64_t result; // 0x4d95f3
    return result;
}

// Address range: 0x4d95f8 - 0x4d95fb
int64_t function_4d95f8(int64_t a1) {
    // 0x4d95f8
    int64_t result; // 0x4d95f8
    return result;
}

// Address range: 0x50f2d0 - 0x50f2d8
// From class:    std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_50f2d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x50f2d0
    return function_50eec0();
}

// Address range: 0x50f2e0 - 0x50f6c8
int64_t function_50f2e0(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x50f2e0
    __readfsqword(40);
    int64_t v1 = function_50e0e0(); // 0x50f32a
    int64_t v2 = *(int64_t *)(a4 + 8); // 0x50f32f
    int64_t v3; // bp-88, 0x50f2e0
    int64_t v4 = (int64_t)&v3; // 0x50f350
    function_568f00(a4, &v3, 0x100000000000000 * a6 >> 56);
    int64_t v5; // bp-224, 0x50f2e0
    int64_t v6 = (int64_t)&v5; // 0x50f36d
    int64_t v7 = function_565f30();
    int32_t n; // 0x50f2e0
    int64_t str; // 0x50f2e0
    int64_t v8; // 0x50f2e0
    int32_t v9; // bp-100, 0x50f2e0
    int64_t v10; // bp-232, 0x50f2e0
    if ((*(int32_t *)(a4 + 24) & 260) == 260) {
        int64_t v11 = function_5088b0(&v7, &v5, 54, v4, a5); // 0x50f664
        int32_t v12 = v11; // 0x50f66c
        v9 = v12;
        int64_t v13 = (int64_t)&v10; // 0x50f671
        n = v12;
        str = v6;
        v8 = v13;
        if (v12 >= 54) {
            int64_t v14 = 0x100000000 * v11 + 0x100000000 >> 32; // 0x50f67b
            int64_t v15 = v13 - (v14 + 30 & -16); // 0x50f68c
            int64_t v16 = function_565f30(); // 0x50f694
            int64_t v17 = v15 + 15 & -16; // 0x50f6a3
            *(int64_t *)(v15 - 8) = a8;
            *(int64_t *)(v15 - 16) = a7;
            v7 = v16;
            int64_t v18 = function_5088b0(&v7, (int64_t *)v17, v14 & 0xffffffff, v4, a5); // 0x50f6b9
            int32_t v19 = v18; // 0x50f6be
            v9 = v19;
            n = v19;
            str = v17;
            v8 = v15;
        }
    } else {
        int64_t v20 = v2 < 0 ? 6 : v2; // 0x50f345
        int64_t v21 = function_5088b0(&v7, &v5, 54, v4, v20); // 0x50f3ab
        int32_t v22 = v21; // 0x50f3b3
        v9 = v22;
        int64_t v23 = (int64_t)&v10; // 0x50f3b7
        n = v22;
        str = v6;
        v8 = v23;
        if (v22 > 53) {
            int64_t v24 = v21 + 1; // 0x50f4d8
            int64_t v25 = v23 - ((0x100000000 * v24 >> 32) + 30 & -16); // 0x50f4ec
            int64_t v26 = function_565f30(); // 0x50f4f4
            int64_t v27 = v25 + 15 & -16; // 0x50f503
            *(int64_t *)(v25 - 8) = a8;
            *(int64_t *)(v25 - 16) = a7;
            v7 = v26;
            int64_t v28 = function_5088b0(&v7, (int64_t *)v27, v24 & 0xffffffff, v4, v20); // 0x50f520
            int32_t v29 = v28; // 0x50f526
            v9 = v29;
            n = v29;
            str = v27;
            v8 = v25;
        }
    }
    // 0x50f3be
    function_50ab00(a4 + 208);
    int64_t v30 = n; // 0x50f3c7
    int64_t v31 = v8 - (4 * v30 + 30 & -16); // 0x50f3e3
    int64_t v32 = v31 + 15 & -16; // 0x50f3eb
    int64_t v33; // 0x50f2e0
    int64_t v34; // 0x50f2e0
    if (n != 0) {
        int64_t * found_byte_pos = memchr((int64_t *)str, 46, n); // 0x50f499
        char v35 = *(char *)(v1 + 32); // 0x50f4a1
        int64_t v36 = v30 & 0xffffffff; // 0x50f4aa
        if (found_byte_pos == NULL) {
            if (v35 == 0) {
                goto lab_0x50f415;
            } else {
                // 0x50f538
                if (n < 3) {
                    goto lab_0x50f56b;
                } else {
                    char v37 = *(char *)(str + 1); // 0x50f53e
                    if (v37 > 57) {
                        goto lab_0x50f415;
                    } else {
                        // 0x50f54a
                        v33 = 0;
                        v34 = v36;
                        if (v37 < 48 | *(char *)(str + 2) > 57) {
                            goto lab_0x50f415;
                        } else {
                            goto lab_0x50f56b;
                        }
                    }
                }
            }
        } else {
            int64_t v38 = 4 * ((int64_t)found_byte_pos - str) + v32; // 0x50f4bc
            *(int32_t *)v38 = *(int32_t *)(v1 + 72);
            v33 = v38;
            v34 = v36;
            if (v35 != 0) {
                goto lab_0x50f56b;
            } else {
                goto lab_0x50f415;
            }
        }
    } else {
        // 0x50f40a
        v33 = 0;
        v34 = v30;
        if (*(char *)(v1 + 32) != 0) {
            goto lab_0x50f56b;
        } else {
            goto lab_0x50f415;
        }
    }
  lab_0x50f56b:;
    int64_t v39 = v31 - (8 * v30 + 30 & -16); // 0x50f57a
    int64_t result = v39 + 15 & -16; // 0x50f585
    if ((*(char *)str - 43 & -3) != 0) {
        // 0x50f6d0
        return result;
    }
    // 0x50f595
    v9 = (int32_t)v34 - 1;
    *(int32_t *)result = *(int32_t *)v32;
    int32_t v40 = *(int32_t *)(v1 + 76); // 0x50f5b3
    int64_t v41 = *(int64_t *)(v1 + 24); // 0x50f5b7
    int64_t v42 = *(int64_t *)(v1 + 16); // 0x50f5bb
    int64_t v43 = (int64_t)&v9;
    *(int64_t *)(v39 - 8) = v43;
    int64_t v44 = v39 - 16;
    *(int64_t *)v44 = v32 | 4;
    function_50cc40(a1, v42, v41, v40, (int32_t)v33, result | 4, result);
    int32_t v45 = v9 + 1; // 0x50f5cf
    int64_t * v46 = (int64_t *)(a4 + 16);
    uint64_t v47 = *v46; // 0x50f5d2
    v9 = v45;
    int64_t * v48 = v46; // 0x50f5ee
    int64_t v49 = v43; // 0x50f5ee
    int64_t v50 = v44; // 0x50f5ee
    int64_t v51 = v47; // 0x50f5ee
    if (v47 <= (int64_t)v45) {
        // 0x50f426
        *v46 = 0;
        __readfsqword(40);
        return result2;
    }
    goto lab_0x50f5f4;
  lab_0x50f415:;
    int64_t * v52 = (int64_t *)(a4 + 16);
    uint64_t v53 = *v52; // 0x50f415
    if (v53 <= v30) {
        // 0x50f426
        *v52 = 0;
        __readfsqword(40);
        return result2;
    }
    // 0x50f415
    v48 = v52;
    v49 = (int64_t)&v9;
    v50 = v31 - 16;
    v51 = v53;
    goto lab_0x50f5f4;
  lab_0x50f5f4:
    // 0x50f5f4
    *(int64_t *)(v50 - (4 * v51 + 30 & -16)) = v49;
    function_50cf10(a1, (int32_t)a5);
    // 0x50f426
    *v48 = 0;
    __readfsqword(40);
    return result2;
}

// Address range: 0x522120 - 0x5224f9
int64_t function_522120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint32_t a7, int32_t a8, uint64_t a9, int64_t a10, int64_t a11) {
    int64_t v1 = function_554b00(a10 + 208); // 0x52215c
    int64_t v2 = a9 == 2 ? v1 : (int64_t)&g21;
    int64_t v3 = a4; // 0x522212
    int64_t v4 = 0; // 0x522212
    int64_t v5 = 0; // 0x522212
    int64_t result = v2; // 0x522212
    int64_t v6; // 0x522120
    int64_t v7; // 0x522120
    int64_t v8; // 0x522120
    int64_t v9; // 0x522120
    int64_t v10; // 0x522120
    int64_t result2; // 0x522120
    if (a2 == 0) {
      lab_0x522310:
        // 0x522310
        v6 = v4;
        v9 = v5;
        v10 = 0;
        if (v3 != 0) {
            // 0x522349
            return result;
        }
      lab_0x52231b_3:
        // 0x52231b
        v8 = v9;
        result2 = v10;
        v7 = v6;
        int64_t result3 = v10; // 0x522323
        int64_t v11 = v6; // 0x522323
        if (v9 != a9) {
          lab_0x522328_4:
            // 0x522328
            if (a9 == 4 != (v8 == 2)) {
                int32_t * v12 = (int32_t *)a11; // 0x5223c0
                *v12 = *v12 | 4;
                // 0x522349
                return result2;
            }
            // 0x52233d
            result3 = result2;
            v11 = v7 + 0xffffff9c & 0xffffffff;
        }
        // 0x522341
        *(int32_t *)a6 = (int32_t)v11;
        // 0x522349
        return result3;
    }
    int64_t v13 = a9 == 4 ? (int64_t)(int32_t)&g21 : 1;
    int64_t * v14 = (int64_t *)(a2 + 16);
    int64_t * v15 = (int64_t *)(a2 + 24);
    int64_t v16 = a9 == 2 ? 10 : v13; // 0x522120
    int64_t v17 = a5; // 0x522410
    int64_t v18 = a4;
    int64_t v19 = a2;
    int64_t v20 = 0;
    int64_t v21 = 0;
    int64_t v22 = v2; // 0x52221b
    int64_t v23 = a3 & 0xffffffff; // 0x52221b
    int64_t v24 = v1; // 0x52221b
    uint64_t v25; // 0x5222d0
    if ((int32_t)a3 == -1) {
        // 0x5222d0
        v25 = *v14;
        if (v25 >= *v15) {
            // 0x522460
            v3 = v18;
            v4 = v20;
            v5 = v21;
            result = v19;
            if ((int32_t)v19 == -1) {
                goto lab_0x522310;
            }
            // 0x5224a4
            v22 = v19;
            v23 = v19 & 0xffffffff;
            v24 = 0x100000000 * v1 >> 32;
        } else {
            // 0x5222de
            v22 = v25;
            v23 = (int64_t)*(char *)v25;
            v24 = v1;
        }
    }
    int64_t result4 = v22; // 0x522224
    while (v18 != 0) {
        // 0x52222a
        v6 = v20;
        v9 = v21;
        v10 = a2;
        if ((int32_t)v17 != -1) {
            goto lab_0x52231b_3;
        }
        // 0x5222b0
        v6 = v20;
        v9 = v21;
        v10 = a2;
        if (*(int64_t *)(v18 + 16) < *(int64_t *)(v18 + 24)) {
            goto lab_0x52231b_3;
        }
        // 0x522235
        v17 = *(int64_t *)v18;
        v6 = v20;
        v9 = v21;
        v10 = a2;
        if (v21 < a9 != ((int32_t)v17 == -1)) {
            goto lab_0x52231b_3;
        }
        int64_t v26 = v23; // 0x522258
        if (v23 == 0xffffffff) {
            uint64_t v27 = *v14; // 0x5222f0
            if (v27 >= *v15) {
                // 0x5224b0
                v26 = v19 & 0xffffffff;
                result4 = v19;
                if ((int32_t)v19 == -1) {
                    // break -> 0x522349
                    break;
                }
            } else {
                // 0x5222fe
                v26 = (int64_t)*(char *)v27;
            }
        }
        int64_t v28 = 0x100000000 * v24 >> 32;
        uint64_t v29 = v26;
        char * v30 = (char *)(v28 + 313 + v29 % 256);
        char v31 = *v30; // 0x522268
        int64_t v32 = v31; // 0x522273
        if (v31 == 0) {
            int64_t v33 = *(int64_t *)(*(int64_t *)v28 + 64); // 0x52227c
            int64_t v34 = v33 != g45 ? v33 : v29;
            char v35 = v34; // 0x52228d
            v8 = v21;
            result2 = a2;
            v7 = v20;
            if (v35 == 42) {
                goto lab_0x522328_4;
            }
            // 0x522297
            *v30 = v35;
            v32 = 0x100000000000000 * v34 >> 56;
        }
        // 0x5221a8
        v8 = v21;
        result2 = a2;
        v7 = v20;
        if ((char)v32 >= 58) {
            goto lab_0x522328_4;
        }
        int64_t v36 = 10 * v20 + 0xffffffd0 + v32; // 0x5221b7
        int64_t v37 = v36 & 0xffffffff; // 0x5221b7
        int32_t v38 = (0x100000000 * v36 >> 32) * (0x100000000 * v16 >> 32); // 0x5221ca
        v8 = v21;
        result2 = a2;
        v7 = v37;
        if (v38 > a8) {
            goto lab_0x522328_4;
        }
        // 0x5221d0
        v8 = v21;
        result2 = a2;
        v7 = v37;
        if (v38 + (int32_t)v16 <= a7) {
            goto lab_0x522328_4;
        }
        int64_t v39 = 0x100000000000000 * v29 / 0x100000000000000; // 0x522260
        uint64_t v40 = *v14; // 0x5221f2
        int64_t v41 = v39; // 0x5221fa
        if (v40 < *v15) {
            // 0x522200
            v41 = v40 + 1;
            *v14 = v41;
        }
        // 0x52220b
        v16 = 0xcccccccd * (v16 & 0xffffffff) / 0x800000000;
        int64_t v42 = 0xffffffff; // 0x522120
        v18 = (int32_t)v17 != -1 ? 0x100000000 * v18 >> 32 : 0;
        v19 = v39;
        int64_t v43 = v28;
        v20 = v37;
        v21++;
        v22 = v41;
        v23 = v42 & 0xffffffff;
        v24 = v43;
        if ((int32_t)v42 == -1) {
            // 0x5222d0
            v25 = *v14;
            if (v25 >= *v15) {
                // 0x522460
                v3 = v18;
                v4 = v20;
                v5 = v21;
                result = v19;
                if ((int32_t)v19 == -1) {
                    goto lab_0x522310;
                }
                // 0x5224a4
                v22 = v19;
                v23 = v19 & 0xffffffff;
                v24 = 0x100000000 * v43 >> 32;
            } else {
                // 0x5222de
                v22 = v25;
                v23 = (int64_t)*(char *)v25;
                v24 = v43;
            }
        }
        // 0x522221
        result4 = v22;
    }
    // 0x522349
    return result4;
}

// Address range: 0x554e20 - 0x5551f9
int64_t function_554e20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint32_t a7, int32_t a8, uint64_t a9, int64_t a10, int64_t a11) {
    int64_t v1 = function_554b00(a10 + 208); // 0x554e5c
    int64_t v2 = a9 == 2 ? v1 : (int64_t)&g21;
    int64_t v3 = a4; // 0x554f12
    int64_t v4 = 0; // 0x554f12
    int64_t v5 = 0; // 0x554f12
    int64_t result = v2; // 0x554f12
    int64_t v6; // 0x554e20
    int64_t v7; // 0x554e20
    int64_t v8; // 0x554e20
    int64_t v9; // 0x554e20
    int64_t v10; // 0x554e20
    int64_t result2; // 0x554e20
    if (a2 == 0) {
      lab_0x555010:
        // 0x555010
        v6 = v4;
        v9 = v5;
        v10 = 0;
        if (v3 != 0) {
            // 0x555049
            return result;
        }
      lab_0x55501b_3:
        // 0x55501b
        v8 = v9;
        result2 = v10;
        v7 = v6;
        int64_t result3 = v10; // 0x555023
        int64_t v11 = v6; // 0x555023
        if (v9 != a9) {
          lab_0x555028_4:
            // 0x555028
            if (a9 == 4 != (v8 == 2)) {
                int32_t * v12 = (int32_t *)a11; // 0x5550c0
                *v12 = *v12 | 4;
                // 0x555049
                return result2;
            }
            // 0x55503d
            result3 = result2;
            v11 = v7 + 0xffffff9c & 0xffffffff;
        }
        // 0x555041
        *(int32_t *)a6 = (int32_t)v11;
        // 0x555049
        return result3;
    }
    int64_t v13 = a9 == 4 ? (int64_t)(int32_t)&g21 : 1;
    int64_t * v14 = (int64_t *)(a2 + 16);
    int64_t * v15 = (int64_t *)(a2 + 24);
    int64_t v16 = a9 == 2 ? 10 : v13; // 0x554e20
    int64_t v17 = a5; // 0x555110
    int64_t v18 = a4;
    int64_t v19 = a2;
    int64_t v20 = 0;
    int64_t v21 = 0;
    int64_t v22 = v2; // 0x554f1b
    int64_t v23 = a3 & 0xffffffff; // 0x554f1b
    int64_t v24 = v1; // 0x554f1b
    uint64_t v25; // 0x554fd0
    if ((int32_t)a3 == -1) {
        // 0x554fd0
        v25 = *v14;
        if (v25 >= *v15) {
            // 0x555160
            v3 = v18;
            v4 = v20;
            v5 = v21;
            result = v19;
            if ((int32_t)v19 == -1) {
                goto lab_0x555010;
            }
            // 0x5551a4
            v22 = v19;
            v23 = v19 & 0xffffffff;
            v24 = 0x100000000 * v1 >> 32;
        } else {
            // 0x554fde
            v22 = v25;
            v23 = (int64_t)*(char *)v25;
            v24 = v1;
        }
    }
    int64_t result4 = v22; // 0x554f24
    while (v18 != 0) {
        // 0x554f2a
        v6 = v20;
        v9 = v21;
        v10 = a2;
        if ((int32_t)v17 != -1) {
            goto lab_0x55501b_3;
        }
        // 0x554fb0
        v6 = v20;
        v9 = v21;
        v10 = a2;
        if (*(int64_t *)(v18 + 16) < *(int64_t *)(v18 + 24)) {
            goto lab_0x55501b_3;
        }
        // 0x554f35
        v17 = *(int64_t *)v18;
        v6 = v20;
        v9 = v21;
        v10 = a2;
        if (v21 < a9 != ((int32_t)v17 == -1)) {
            goto lab_0x55501b_3;
        }
        int64_t v26 = v23; // 0x554f58
        if (v23 == 0xffffffff) {
            uint64_t v27 = *v14; // 0x554ff0
            if (v27 >= *v15) {
                // 0x5551b0
                v26 = v19 & 0xffffffff;
                result4 = v19;
                if ((int32_t)v19 == -1) {
                    // break -> 0x555049
                    break;
                }
            } else {
                // 0x554ffe
                v26 = (int64_t)*(char *)v27;
            }
        }
        int64_t v28 = 0x100000000 * v24 >> 32;
        uint64_t v29 = v26;
        char * v30 = (char *)(v28 + 313 + v29 % 256);
        char v31 = *v30; // 0x554f68
        int64_t v32 = v31; // 0x554f73
        if (v31 == 0) {
            int64_t v33 = *(int64_t *)(*(int64_t *)v28 + 64); // 0x554f7c
            int64_t v34 = v33 != g45 ? v33 : v29;
            char v35 = v34; // 0x554f8d
            v8 = v21;
            result2 = a2;
            v7 = v20;
            if (v35 == 42) {
                goto lab_0x555028_4;
            }
            // 0x554f97
            *v30 = v35;
            v32 = 0x100000000000000 * v34 >> 56;
        }
        // 0x554ea8
        v8 = v21;
        result2 = a2;
        v7 = v20;
        if ((char)v32 >= 58) {
            goto lab_0x555028_4;
        }
        int64_t v36 = 10 * v20 + 0xffffffd0 + v32; // 0x554eb7
        int64_t v37 = v36 & 0xffffffff; // 0x554eb7
        int32_t v38 = (0x100000000 * v36 >> 32) * (0x100000000 * v16 >> 32); // 0x554eca
        v8 = v21;
        result2 = a2;
        v7 = v37;
        if (v38 > a8) {
            goto lab_0x555028_4;
        }
        // 0x554ed0
        v8 = v21;
        result2 = a2;
        v7 = v37;
        if (v38 + (int32_t)v16 <= a7) {
            goto lab_0x555028_4;
        }
        int64_t v39 = 0x100000000000000 * v29 / 0x100000000000000; // 0x554f60
        uint64_t v40 = *v14; // 0x554ef2
        int64_t v41 = v39; // 0x554efa
        if (v40 < *v15) {
            // 0x554f00
            v41 = v40 + 1;
            *v14 = v41;
        }
        // 0x554f0b
        v16 = 0xcccccccd * (v16 & 0xffffffff) / 0x800000000;
        int64_t v42 = 0xffffffff; // 0x554e20
        v18 = (int32_t)v17 != -1 ? 0x100000000 * v18 >> 32 : 0;
        v19 = v39;
        int64_t v43 = v28;
        v20 = v37;
        v21++;
        v22 = v41;
        v23 = v42 & 0xffffffff;
        v24 = v43;
        if ((int32_t)v42 == -1) {
            // 0x554fd0
            v25 = *v14;
            if (v25 >= *v15) {
                // 0x555160
                v3 = v18;
                v4 = v20;
                v5 = v21;
                result = v19;
                if ((int32_t)v19 == -1) {
                    goto lab_0x555010;
                }
                // 0x5551a4
                v22 = v19;
                v23 = v19 & 0xffffffff;
                v24 = 0x100000000 * v43 >> 32;
            } else {
                // 0x554fde
                v22 = v25;
                v23 = (int64_t)*(char *)v25;
                v24 = v43;
            }
        }
        // 0x554f21
        result4 = v22;
    }
    // 0x555049
    return result4;
}

// Address range: 0x555a00 - 0x555dca
int64_t function_555a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x555a14
    int64_t v2 = function_5559b0(); // 0x555a28
    int64_t * v3 = (int64_t *)v2; // 0x555a30
    int64_t v4 = *(int64_t *)(*v3 + 16); // 0x555a33
    int64_t v5 = v4; // 0x555a3e
    if (v4 == g51) {
        // 0x555a44
        v5 = (int64_t)*(char *)(*(int64_t *)(v2 + 16) + 33);
    }
    // 0x555a4c
    *(char *)(a1 + 33) = (char)v5;
    int64_t v6 = *(int64_t *)(*v3 + 24); // 0x555a53
    int64_t v7 = v6; // 0x555a5e
    if (v6 == g43) {
        // 0x555a64
        v7 = (int64_t)*(char *)(*(int64_t *)(v2 + 16) + 34);
    }
    // 0x555a6c
    *(char *)(a1 + 34) = (char)v7;
    int64_t v8 = *(int64_t *)(*v3 + 64); // 0x555a73
    int64_t v9 = v8; // 0x555a7e
    if (v8 == g38) {
        // 0x555a84
        v9 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 88);
    }
    // 0x555a8b
    *(int32_t *)(a1 + 88) = (int32_t)v9;
    int64_t v10; // bp-72, 0x555a00
    int64_t v11; // bp-96, 0x555a00
    if (*(int64_t *)(*v3 + 32) == g47) {
        int64_t v12 = *(int64_t *)(*(int64_t *)(v2 + 16) + 16); // 0x555ab4
        function_250b0(&v11, v12, &v10);
    }
    int64_t * v13 = (int64_t *)(a1 + 24); // 0x555ac6
    *v13 = *(int64_t *)(v11 - 24);
    int64_t v14 = function_4eec00(); // 0x555aca
    function_547670(&v11, v14, *v13, 0);
    char v15 = 0; // 0x555aea
    if (*v13 != 0) {
        // 0x555aec
        v15 = *(char *)v14 < 127;
    }
    // 0x555af9
    *(char *)(a1 + 32) = v15;
    int64_t result2; // bp-88, 0x555a00
    if (*(int64_t *)(*v3 + 40) == g50) {
        int64_t v16 = *(int64_t *)(*(int64_t *)(v2 + 16) + 40); // 0x555b22
        int64_t v17; // bp-99, 0x555a00
        function_250b0(&result2, v16, &v17);
    }
    int64_t * v18 = (int64_t *)(a1 + 48); // 0x555b34
    *v18 = *(int64_t *)(result2 - 24);
    int64_t v19 = function_4eec00(); // 0x555b38
    function_547670(&result2, v19, *v18, 0);
    int64_t result; // bp-80, 0x555a00
    if (*(int64_t *)(*v3 + 48) == g48) {
        int64_t v20 = *(int64_t *)(*(int64_t *)(v2 + 16) + 56); // 0x555b77
        int64_t v21; // bp-98, 0x555a00
        function_250b0(&result, v20, &v21);
    }
    int64_t * v22 = (int64_t *)(a1 + 64); // 0x555b89
    *v22 = *(int64_t *)(result - 24);
    int64_t v23 = function_4eec00(); // 0x555b8d
    function_547670(&result, v23, *v22, 0);
    int64_t v24; // bp-97, 0x555a00
    if (*(int64_t *)(*v3 + 56) == g36) {
        int64_t v25 = *(int64_t *)(*(int64_t *)(v2 + 16) + 72); // 0x555bc4
        function_250b0(&v10, v25, &v24);
    }
    int64_t * v26 = (int64_t *)(a1 + 80); // 0x555be3
    *v26 = *(int64_t *)(v10 - 24);
    int64_t v27 = function_4eec00(); // 0x555be7
    function_547670(&v10, v27, *v26, 0);
    int64_t v28 = *(int64_t *)(*v3 + 72); // 0x555c06
    int64_t v29 = v28; // 0x555c11
    if (v28 == g46) {
        // 0x555c17
        v29 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 92);
    }
    // 0x555c1e
    *(int32_t *)(a1 + 92) = (int32_t)v29;
    int64_t v30 = *(int64_t *)(*v3 + 80); // 0x555c25
    int64_t v31 = v30; // 0x555c30
    if (v30 == g42) {
        // 0x555c36
        v31 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 96);
    }
    // 0x555c3d
    *(int32_t *)(a1 + 96) = (int32_t)v31;
    function_519810(function_554b00(a2), *(int64_t *)&g54, &g55, a1 + 100);
    *(int64_t *)(a1 + 16) = v14;
    *(int64_t *)(a1 + 40) = v19;
    *(int64_t *)(a1 + 56) = v23;
    *(int64_t *)(a1 + 72) = v27;
    *(char *)(a1 + 111) = 1;
    int64_t v32 = v10 - 24; // 0x555c83
    if (v32 != (int64_t)&g56) {
        // 0x555dc0
        return function_552550(v32, &v24);
    }
    // 0x555c90
    if (result - 24 != (int64_t)&g56) {
        // 0x555de0
        return result;
    }
    // 0x555ca2
    if (result2 - 24 != (int64_t)&g56) {
        // 0x555de0
        return result2;
    }
    int64_t v33 = v11 - 24; // 0x555cb9
    if (v33 != (int64_t)&g56) {
        // 0x555da8
        function_552550(v33, &v24);
    }
    // 0x555cc6
    return __readfsqword(40) ^ v1;
}

// Address range: 0x555fe0 - 0x5563aa
int64_t function_555fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x555ff4
    int64_t v2 = function_555f90(); // 0x556008
    int64_t * v3 = (int64_t *)v2; // 0x556010
    int64_t v4 = *(int64_t *)(*v3 + 16); // 0x556013
    int64_t v5 = v4; // 0x55601e
    if (v4 == g37) {
        // 0x556024
        v5 = (int64_t)*(char *)(*(int64_t *)(v2 + 16) + 33);
    }
    // 0x55602c
    *(char *)(a1 + 33) = (char)v5;
    int64_t v6 = *(int64_t *)(*v3 + 24); // 0x556033
    int64_t v7 = v6; // 0x55603e
    if (v6 == g41) {
        // 0x556044
        v7 = (int64_t)*(char *)(*(int64_t *)(v2 + 16) + 34);
    }
    // 0x55604c
    *(char *)(a1 + 34) = (char)v7;
    int64_t v8 = *(int64_t *)(*v3 + 64); // 0x556053
    int64_t v9 = v8; // 0x55605e
    if (v8 == g40) {
        // 0x556064
        v9 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 88);
    }
    // 0x55606b
    *(int32_t *)(a1 + 88) = (int32_t)v9;
    int64_t v10; // bp-72, 0x555fe0
    int64_t v11; // bp-96, 0x555fe0
    if (*(int64_t *)(*v3 + 32) == g49) {
        int64_t v12 = *(int64_t *)(*(int64_t *)(v2 + 16) + 16); // 0x556094
        function_250b0(&v11, v12, &v10);
    }
    int64_t * v13 = (int64_t *)(a1 + 24); // 0x5560a6
    *v13 = *(int64_t *)(v11 - 24);
    int64_t v14 = function_4eec00(); // 0x5560aa
    function_547670(&v11, v14, *v13, 0);
    char v15 = 0; // 0x5560ca
    if (*v13 != 0) {
        // 0x5560cc
        v15 = *(char *)v14 < 127;
    }
    // 0x5560d9
    *(char *)(a1 + 32) = v15;
    int64_t result2; // bp-88, 0x555fe0
    if (*(int64_t *)(*v3 + 40) == g39) {
        int64_t v16 = *(int64_t *)(*(int64_t *)(v2 + 16) + 40); // 0x556102
        int64_t v17; // bp-99, 0x555fe0
        function_250b0(&result2, v16, &v17);
    }
    int64_t * v18 = (int64_t *)(a1 + 48); // 0x556114
    *v18 = *(int64_t *)(result2 - 24);
    int64_t v19 = function_4eec00(); // 0x556118
    function_547670(&result2, v19, *v18, 0);
    int64_t result; // bp-80, 0x555fe0
    if (*(int64_t *)(*v3 + 48) == g52) {
        int64_t v20 = *(int64_t *)(*(int64_t *)(v2 + 16) + 56); // 0x556157
        int64_t v21; // bp-98, 0x555fe0
        function_250b0(&result, v20, &v21);
    }
    int64_t * v22 = (int64_t *)(a1 + 64); // 0x556169
    *v22 = *(int64_t *)(result - 24);
    int64_t v23 = function_4eec00(); // 0x55616d
    function_547670(&result, v23, *v22, 0);
    int64_t v24; // bp-97, 0x555fe0
    if (*(int64_t *)(*v3 + 56) == g35) {
        int64_t v25 = *(int64_t *)(*(int64_t *)(v2 + 16) + 72); // 0x5561a4
        function_250b0(&v10, v25, &v24);
    }
    int64_t * v26 = (int64_t *)(a1 + 80); // 0x5561c3
    *v26 = *(int64_t *)(v10 - 24);
    int64_t v27 = function_4eec00(); // 0x5561c7
    function_547670(&v10, v27, *v26, 0);
    int64_t v28 = *(int64_t *)(*v3 + 72); // 0x5561e6
    int64_t v29 = v28; // 0x5561f1
    if (v28 == g34) {
        // 0x5561f7
        v29 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 92);
    }
    // 0x5561fe
    *(int32_t *)(a1 + 92) = (int32_t)v29;
    int64_t v30 = *(int64_t *)(*v3 + 80); // 0x556205
    int64_t v31 = v30; // 0x556210
    if (v30 == g44) {
        // 0x556216
        v31 = (int64_t)*(int32_t *)(*(int64_t *)(v2 + 16) + 96);
    }
    // 0x55621d
    *(int32_t *)(a1 + 96) = (int32_t)v31;
    function_519810(function_554b00(a2), *(int64_t *)&g54, &g55, a1 + 100);
    *(int64_t *)(a1 + 16) = v14;
    *(int64_t *)(a1 + 40) = v19;
    *(int64_t *)(a1 + 56) = v23;
    *(int64_t *)(a1 + 72) = v27;
    *(char *)(a1 + 111) = 1;
    int64_t v32 = v10 - 24; // 0x556263
    if (v32 != (int64_t)&g56) {
        // 0x5563a0
        return function_552550(v32, &v24);
    }
    // 0x556270
    if (result - 24 != (int64_t)&g56) {
        // 0x5563c0
        return result;
    }
    // 0x556282
    if (result2 - 24 != (int64_t)&g56) {
        // 0x5563c0
        return result2;
    }
    int64_t v33 = v11 - 24; // 0x556299
    if (v33 != (int64_t)&g56) {
        // 0x556388
        function_552550(v33, &v24);
    }
    // 0x5562a6
    return __readfsqword(40) ^ v1;
}

// Address range: 0x5594e0 - 0x5594ec
// From class:    std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_5594e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x5594e0
    return function_5590e0();
}

// Address range: 0x5594f0 - 0x5598cb
int64_t function_5594f0(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x5594f0
    __readfsqword(40);
    int64_t v1 = function_558300(); // 0x55953a
    int64_t v2 = *(int64_t *)(a4 + 8); // 0x55953f
    int64_t v3; // bp-88, 0x5594f0
    int64_t v4 = (int64_t)&v3; // 0x559560
    function_568f00(a4, &v3, 0x100000000000000 * a6 >> 56);
    int64_t v5; // bp-224, 0x5594f0
    int64_t v6 = (int64_t)&v5; // 0x55957d
    int64_t v7 = function_565f30();
    int32_t n; // 0x5594f0
    int64_t v8; // 0x5594f0
    int64_t v9; // 0x5594f0
    int32_t v10; // bp-100, 0x5594f0
    int64_t v11; // bp-232, 0x5594f0
    if ((*(int32_t *)(a4 + 24) & 260) == 260) {
        int64_t v12 = function_5088b0(&v7, &v5, 54, v4, a5); // 0x55986c
        int32_t v13 = v12; // 0x559874
        v10 = v13;
        int64_t v14 = (int64_t)&v11; // 0x559879
        n = v13;
        v8 = v6;
        v9 = v14;
        if (v13 >= 54) {
            int64_t v15 = 0x100000000 * v12 + 0x100000000 >> 32; // 0x559883
            int64_t v16 = v14 - (v15 + 30 & -16); // 0x559894
            int64_t v17 = function_565f30(); // 0x55989c
            *(int64_t *)(v16 - 8) = a8;
            int64_t * v18 = (int64_t *)(v16 - 16); // 0x5598b2
            *v18 = a7;
            v7 = v17;
            function_5088b0(&v7, (int64_t *)(v16 + 15 & -16), v15 & 0xffffffff, v4, a5);
            return *v18;
        }
    } else {
        int64_t v19 = v2 < 0 ? 6 : v2; // 0x559555
        int64_t v20 = function_5088b0(&v7, &v5, 54, v4, v19); // 0x5595b8
        int32_t v21 = v20; // 0x5595c0
        v10 = v21;
        int64_t v22 = (int64_t)&v11; // 0x5595c4
        n = v21;
        v8 = v6;
        v9 = v22;
        if (v21 > 53) {
            int64_t v23 = v20 + 1; // 0x5596e8
            int64_t v24 = v22 - ((0x100000000 * v23 >> 32) + 30 & -16); // 0x5596fc
            int64_t v25 = function_565f30(); // 0x559704
            int64_t v26 = v24 + 15 & -16; // 0x559713
            *(int64_t *)(v24 - 8) = a8;
            *(int64_t *)(v24 - 16) = a7;
            v7 = v25;
            int64_t v27 = function_5088b0(&v7, (int64_t *)v26, v23 & 0xffffffff, v4, v19); // 0x559730
            int32_t v28 = v27; // 0x559736
            v10 = v28;
            n = v28;
            v8 = v26;
            v9 = v24;
        }
    }
    int64_t str = v8;
    int64_t v29 = n;
    int64_t v30 = v9 - (v29 + 30 & -16); // 0x5595e9
    int64_t v31 = v30 + 15 & -16; // 0x5595f1
    function_519810(function_554b00(a4 + 208), str, (int64_t *)(str + v29), v31);
    int64_t v32; // 0x5594f0
    int64_t v33; // 0x5594f0
    if (n != 0) {
        int64_t * found_byte_pos = memchr((int64_t *)str, 46, n); // 0x5596a9
        int64_t v34 = v29 & 0xffffffff; // 0x5596b5
        if (found_byte_pos == NULL) {
            // 0x559740
            if (*(char *)(v1 + 32) == 0) {
                goto lab_0x55961c;
            } else {
                // 0x55974b
                if (n < 3) {
                    goto lab_0x55977b;
                } else {
                    char v35 = *(char *)(str + 1); // 0x559751
                    if (v35 > 57) {
                        goto lab_0x55961c;
                    } else {
                        // 0x55975d
                        v32 = 0;
                        v33 = v34;
                        if (v35 < 48 | *(char *)(str + 2) > 57) {
                            goto lab_0x55961c;
                        } else {
                            goto lab_0x55977b;
                        }
                    }
                }
            }
        } else {
            int64_t v36 = (int64_t)found_byte_pos - str + v31; // 0x5596c5
            *(char *)v36 = *(char *)(v1 + 72);
            v32 = v36;
            v33 = v34;
            if (*(char *)(v1 + 32) != 0) {
                goto lab_0x55977b;
            } else {
                goto lab_0x55961c;
            }
        }
    } else {
        // 0x559611
        v32 = 0;
        v33 = v29;
        if (*(char *)(v1 + 32) != 0) {
            goto lab_0x55977b;
        } else {
            goto lab_0x55961c;
        }
    }
  lab_0x55977b:;
    unsigned char v37 = *(char *)str; // 0x559787
    if ((v37 - 43 & -3) != 0) {
        // 0x5598d0
        return (int64_t)v37 + 0xffffffd5 & 0xffffffff;
    }
    int64_t v38 = v30 - (2 * v29 + 30 & -16); // 0x559784
    int64_t v39 = v38 + 15 & -16; // 0x55978f
    v10 = (int32_t)v33 - 1;
    *(char *)v39 = *(char *)v31;
    char v40 = *(char *)(v1 + 73); // 0x5597ba
    int64_t v41 = *(int64_t *)(v1 + 24); // 0x5597c3
    int64_t v42 = *(int64_t *)(v1 + 16); // 0x5597c7
    int64_t v43 = (int64_t)&v10;
    *(int64_t *)(v38 - 8) = v43;
    int64_t v44 = v38 - 16;
    *(int64_t *)v44 = v31 | 1;
    function_556e50(a1, v42, v41, v40, (int32_t)v32, v39 | 1, v39);
    int32_t v45 = v10 + 1; // 0x5597db
    int64_t * v46 = (int64_t *)(a4 + 16);
    uint64_t v47 = *v46; // 0x5597de
    v10 = v45;
    int64_t * v48 = v46; // 0x5597fa
    int64_t v49 = v43; // 0x5597fa
    int64_t v50 = v44; // 0x5597fa
    int64_t v51 = v47; // 0x5597fa
    if (v47 <= (int64_t)v45) {
        // 0x55962d
        *v46 = 0;
        __readfsqword(40);
        return result;
    }
    goto lab_0x559800;
  lab_0x55961c:;
    int64_t * v52 = (int64_t *)(a4 + 16);
    uint64_t v53 = *v52; // 0x55961c
    if (v53 <= v29) {
        // 0x55962d
        *v52 = 0;
        __readfsqword(40);
        return result;
    }
    // 0x55961c
    v48 = v52;
    v49 = (int64_t)&v10;
    v50 = v30 - 16;
    v51 = v53;
    goto lab_0x559800;
  lab_0x559800:
    // 0x559800
    *(int64_t *)(v50 - (v51 + 30 & -16)) = v49;
    function_5571e0(a1, (int32_t)(0x100000000000000 * a5 >> 56));
    // 0x55962d
    *v48 = 0;
    __readfsqword(40);
    return result;
}

// Address range: 0x5598e0 - 0x5598ef
// From class:    std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_5598e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = function_5594f0(a1, a2, a3, a4, 0x100000000000000 * a5 >> 56, 76, (int64_t)&g59, (int64_t)&g59); // 0x5598ea
    return result;
}

// Address range: 0x5598f0 - 0x559cc7
int64_t function_5598f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t result = a2; // bp-88, 0x559905
    int64_t v1 = a4; // bp-104, 0x55990d
    int64_t v2 = a6; // bp-152, 0x559915
    __readfsqword(40);
    int64_t v3 = function_554b00(a9 + 208); // 0x55993e
    int64_t v4; // 0x5598f0
    int64_t v5; // 0x5598f0
    int64_t v6; // 0x5598f0
    int32_t v7; // 0x5598f0
    int32_t v8; // 0x5598f0
    int32_t v9; // 0x5598f0
    int64_t v10; // 0x5598f0
    int64_t v11; // 0x5598f0
    int64_t v12; // 0x5598f0
    int64_t v13; // 0x5598f0
    int32_t v14; // 0x559a88
    int64_t v15; // 0x559aa1
    int64_t v16; // 0x559971
    if ((char)function_524600(&result, &v1) == 0) {
        int64_t v17 = (int64_t)&result; // 0x55996d
        int64_t v18 = function_5246d0(v17); // 0x5599b6
        if (a8 != 0) {
            // 0x5599c5
            v16 = 15 - (4 * a8 + 30 & -16) + (int64_t)&v2 & -16;
            int64_t v19 = 0;
            int64_t v20 = v18 & 0xffffffff;
            int64_t v21 = 0;
            char v22 = v20; // 0x559a06
            int64_t v23 = v20; // 0x559a09
            int64_t v24; // 0x5598f0
            int64_t v25; // 0x5599e4
            int64_t v26; // 0x5599f5
            while (*(char *)*(int64_t *)(8 * v21 + a7) != v22) {
                // 0x5599d0
                v25 = v20 % 256;
                v23 = v25;
                if (v22 == (char)*(int64_t *)v3) {
                    // break -> 0x559a0b
                    break;
                }
                // 0x5599f5
                v26 = v21 + 1;
                v24 = v19;
                if (v26 == a8) {
                    // break (via goto) -> 0x559a1d
                    goto lab_0x559a1d;
                }
                v20 = v25;
                v21 = v26;
                v22 = v20;
                v23 = v20;
            }
            // 0x559a0b
            *(int32_t *)(4 * v19 + v16) = (int32_t)v21;
            int64_t v27 = v19 + 1; // 0x559a0f
            int64_t v28 = v21 + 1; // 0x559a13
            v24 = v27;
            while (v28 != a8) {
                // 0x5599ff
                v19 = v27;
                v20 = v23;
                v21 = v28;
                v22 = v20;
                v23 = v20;
                while (*(char *)*(int64_t *)(8 * v21 + a7) != v22) {
                    // 0x5599d0
                    v25 = v20 % 256;
                    v23 = v25;
                    if (v22 == (char)*(int64_t *)v3) {
                        // break -> 0x559a0b
                        break;
                    }
                    // 0x5599f5
                    v26 = v21 + 1;
                    v24 = v19;
                    if (v26 == a8) {
                        // break (via goto) -> 0x559a1d
                        goto lab_0x559a1d;
                    }
                    v20 = v25;
                    v21 = v26;
                    v22 = v20;
                    v23 = v20;
                }
                // 0x559a0b
                *(int32_t *)(4 * v19 + v16) = (int32_t)v21;
                v27 = v19 + 1;
                v28 = v21 + 1;
                v24 = v27;
            }
          lab_0x559a1d:
            // 0x559a1d
            v8 = 0;
            v5 = v24;
            if (v24 < 2) {
              lab_0x559b70:
                // 0x559b70
                if (v5 == 1) {
                    // 0x559b7a
                    function_5245c0(v17);
                    int32_t v29 = *(int32_t *)v16; // 0x559b83
                    int64_t v30 = (0x100000000000000 * (int64_t)v8 >> 56) + 1; // 0x559b8a
                    int64_t str = *(int64_t *)(8 * (int64_t)v29 + a7); // 0x559b91
                    uint64_t len = (int64_t)strlen((char *)str); // 0x559b9b
                    int64_t v31 = v30; // 0x559ba6
                    int64_t v32 = v30; // 0x559ba6
                    if (v30 < len) {
                        int64_t v33 = function_524600(&result, &v1); // 0x559bde
                        v32 = v31;
                        while ((char)v33 == 0) {
                            // 0x559bb0
                            v32 = v31;
                            if (*(char *)(v31 + str) != (char)function_5246d0(v17)) {
                                // break -> 0x559be7
                                break;
                            }
                            int64_t v34 = v31 + 1; // 0x559bc5
                            function_5245c0(v17);
                            v31 = v34;
                            if (v34 == len) {
                                goto lab_0x559bf0;
                            }
                            v33 = function_524600(&result, &v1);
                            v32 = v31;
                        }
                    }
                    // 0x559be7
                    if (v32 == len) {
                      lab_0x559bf0:
                        // 0x559bf0
                        *(int32_t *)v2 = 0x1000000 * v29 >> 24;
                        // 0x559988
                        __readfsqword(40);
                        return result;
                    }
                }
            } else {
                // 0x559a30
                v12 = a5;
                v10 = a3;
                v7 = 0;
                v4 = v24;
                while (true) {
                  lab_0x559a30:;
                    int32_t v35 = v7;
                    int64_t v36 = v10;
                    v13 = v12;
                    int64_t str2 = *(int64_t *)(8 * (int64_t)*(int32_t *)v16 + a7); // 0x559a39
                    int64_t len2 = strlen((char *)str2); // 0x559a45
                    int64_t v37 = 1; // 0x559a45
                    uint64_t v38 = len2;
                    int64_t str3 = *(int64_t *)(8 * (int64_t)*(int32_t *)(4 * v37 + v16) + a7); // 0x559a4c
                    uint64_t len3 = (int64_t)strlen((char *)str3); // 0x559a50
                    uint64_t v39 = v38 > len3 ? len3 : v38; // 0x559a58
                    v37++;
                    while (v4 > v37) {
                        // 0x559a48
                        v38 = v39;
                        str3 = *(int64_t *)(8 * (int64_t)*(int32_t *)(4 * v37 + v16) + a7);
                        len3 = (int64_t)strlen((char *)str3);
                        v39 = v38 > len3 ? len3 : v38;
                        v37++;
                    }
                    int64_t v40 = result; // 0x559a65
                    if (v40 == 0) {
                        char v41 = (char)v35 + 1; // 0x559c08
                        v11 = v36;
                        v9 = v41;
                        if (v39 <= (int64_t)v41) {
                            // break -> 0x559981
                            break;
                        }
                        goto lab_0x559c1a;
                    } else {
                        int64_t * v42 = (int64_t *)(v40 + 16); // 0x559a72
                        uint64_t v43 = *v42; // 0x559a72
                        if (v43 < *(int64_t *)(v40 + 24)) {
                            // 0x559a80
                            *v42 = v43 + 1;
                        }
                        char v44 = (char)v35 + 1; // 0x559a88
                        if (v39 <= (int64_t)v44) {
                            // break -> 0x559981
                            break;
                        }
                        // 0x559aa1
                        v14 = v44;
                        v15 = result;
                        v11 = -1;
                        v9 = v14;
                        if (v15 == 0) {
                            goto lab_0x559c1a;
                        } else {
                            uint64_t v45 = *(int64_t *)(v15 + 16); // 0x559aae
                            if (v45 >= *(int64_t *)(v15 + 24)) {
                                int64_t v46 = *(int64_t *)v15; // 0x559c80
                                v6 = v46;
                                if ((int32_t)v46 != -1) {
                                    goto lab_0x559abf;
                                } else {
                                    // 0x559c8f
                                    result = 0;
                                    v11 = -1;
                                    v9 = v14;
                                    goto lab_0x559c1a;
                                }
                            } else {
                                // 0x559abc
                                v6 = (int64_t)*(char *)v45;
                                goto lab_0x559abf;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x559981_3:;
    int32_t * v47 = (int32_t *)a10; // 0x559985
    *v47 = *v47 | 4;
    // 0x559988
    __readfsqword(40);
    return result;
  lab_0x559b08:;
    // 0x559b08
    int64_t v48; // 0x5598f0
    int64_t v49 = v48; // 0x559b0b
    int64_t v50; // 0x5598f0
    int64_t v51 = v50; // 0x559b0b
    int64_t v52 = v48; // 0x559b0b
    int64_t v53; // 0x5598f0
    char v54; // 0x559b31
    if (v54 == (char)v53) {
        goto lab_0x559b5d;
    } else {
        goto lab_0x559b0d;
    }
  lab_0x559b5d:;
    int64_t v55 = v52;
    int64_t v56; // 0x5598f0
    int64_t v57 = v56 + 1; // 0x559b5d
    int64_t v58 = v55; // 0x559b64
    int64_t v59; // 0x5598f0
    int64_t v60 = v59; // 0x559b64
    if (v59 <= v57) {
        // break -> 0x559b66
        goto lab_0x559b66_2;
    }
    int64_t v61 = 4 * v57 + v16; // 0x5598f0
    int64_t v62 = v51; // 0x5598f0
    int64_t v63 = v55; // 0x5598f0
    int64_t v64 = v57; // 0x5598f0
    int64_t v65 = v59; // 0x5598f0
    goto lab_0x559b1e;
  lab_0x559b0d:;
    int64_t v93 = v49;
    int64_t v94 = v59 - 1; // 0x559b0d
    int64_t v95 = 4 * v56 + v16;
    *(int32_t *)v95 = *(int32_t *)(4 * v94 + v16);
    v58 = v93;
    v60 = v94;
    if (v94 <= v56) {
        // break -> 0x559b66
        goto lab_0x559b66_2;
    }
    // 0x559b0d
    v61 = v95;
    v62 = result;
    v63 = v93;
    v64 = v56;
    v65 = v94;
    goto lab_0x559b1e;
  lab_0x559b1e:;
    int64_t v66 = v62; // 0x559b22
    int64_t v67 = v63; // 0x559b22
    int64_t v68 = v61; // 0x559b22
    int64_t v69 = v64; // 0x559b22
    int64_t v70 = v65; // 0x559b22
    goto lab_0x559b26;
  lab_0x559b55:;
    // 0x559b55
    uint64_t v74; // 0x559b44
    int64_t v75 = (int64_t)*(char *)v74;
    int64_t v76 = 0x100000000 * v75 >> 32; // 0x559b58
    v49 = v76;
    int64_t v71; // 0x5598f0
    v51 = v71;
    v52 = v76;
    if (v54 != (char)v75) {
        goto lab_0x559b0d;
    } else {
        goto lab_0x559b5d;
    }
  lab_0x559c1a:
    // 0x559c1a
    if (v1 == 0) {
        // break -> 0x559981
        goto lab_0x559981_3;
    }
    int64_t v77 = 0; // 0x559c2b
    int64_t v78 = v11; // 0x559c2b
    int32_t v79 = v9; // 0x559c2b
    int64_t v80 = v1; // 0x559c2b
    char v81 = 1; // 0x559c2b
    int64_t v82 = 0; // 0x559c2b
    int64_t v83 = v13; // 0x559c2b
    int64_t v84 = v11; // 0x559c2b
    int32_t v73 = v9; // 0x559c2b
    if ((int32_t)v13 != -1) {
        goto lab_0x559af5;
    } else {
        goto lab_0x559ad7;
    }
  lab_0x559af5:
    // 0x559af5
    v66 = v82;
    v67 = v84;
    v68 = v16;
    v69 = 0;
    v70 = v4;
    while (true) {
      lab_0x559b26:
        // 0x559b26
        v59 = v70;
        v56 = v69;
        v48 = v67;
        v71 = v66;
        int64_t v72 = *(int64_t *)(8 * (int64_t)*(int32_t *)v68 + a7); // 0x559b26
        v54 = *(char *)(v72 + (0x100000000000000 * (int64_t)v73 >> 56));
        v50 = 0;
        v53 = 0xffffffff;
        if (v71 == 0) {
            goto lab_0x559b08;
        } else {
            // 0x559b3c
            v50 = v71;
            v53 = v48 & 0xffffffff;
            if ((int32_t)v48 != -1) {
                goto lab_0x559b08;
            } else {
                // 0x559b44
                v74 = *(int64_t *)(v71 + 16);
                if (v74 >= *(int64_t *)(v71 + 24)) {
                    // 0x559c40
                    if ((int32_t)*(int64_t *)v71 != -1) {
                        goto lab_0x559b55;
                    } else {
                        // 0x559c4f
                        result = 0;
                        v50 = 0;
                        v53 = 0xffffffff;
                        goto lab_0x559b08;
                    }
                } else {
                    // 0x559b52
                    goto lab_0x559b55;
                }
            }
        }
    }
  lab_0x559b66_2:
    // 0x559b66
    v12 = v83;
    v10 = v58;
    v7 = v73;
    v4 = v60;
    v8 = v73;
    v5 = v60;
    if (v60 < 2) {
        goto lab_0x559b70;
    }
    goto lab_0x559a30;
  lab_0x559ad7:;
    int64_t v85 = v80;
    uint64_t v86 = *(int64_t *)(v85 + 16); // 0x559ad7
    int64_t v87; // 0x5598f0
    int64_t v88; // 0x5598f0
    char v89; // 0x5598f0
    if (v86 >= *(int64_t *)(v85 + 24)) {
        int64_t v90 = *(int64_t *)v85; // 0x559c99
        v87 = v90;
        if ((int32_t)v90 != -1) {
            goto lab_0x559ae8;
        } else {
            // 0x559cb5
            v1 = 0;
            v88 = v13;
            v89 = 1;
            goto lab_0x559aed;
        }
    } else {
        // 0x559ae5
        v87 = (int64_t)*(char *)v86;
        goto lab_0x559ae8;
    }
  lab_0x559abf:;
    int64_t v91 = v1; // 0x559abf
    int64_t v92 = 0x100000000 * v6 >> 32; // 0x559ac3
    v82 = v15;
    v83 = v13;
    v84 = v92;
    v73 = v14;
    if (v91 == 0) {
        goto lab_0x559af5;
    } else {
        // 0x559acb
        v77 = v15;
        v78 = v92;
        v79 = v14;
        v80 = v91;
        v81 = 0;
        if ((int32_t)v13 != -1) {
            // break -> 0x559981
            goto lab_0x559981_3;
        }
        goto lab_0x559ad7;
    }
  lab_0x559ae8:
    // 0x559ae8
    v88 = 0x100000000 * v87 >> 32;
    v89 = 0;
    goto lab_0x559aed;
  lab_0x559aed:
    // 0x559aed
    v82 = v77;
    v83 = v88;
    v84 = v78;
    v73 = v79;
    if (v89 == v81) {
        // break -> 0x559981
        goto lab_0x559981_3;
    }
    goto lab_0x559af5;
}

// Address range: 0x5822c0 - 0x582662
int64_t function_5822c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x5822ce
    if (a3 == 0) {
        // 0x58236d
        return __readfsqword(40) ^ v1;
    }
    int32_t * v2 = (int32_t *)(a1 + 304); // 0x5822ea
    if (*v2 != 0) {
        // 0x58236d
        return __readfsqword(40) ^ v1;
    }
    int64_t v3 = a2 & 0xffffffff; // 0x5822f3
    int64_t * v4 = (int64_t *)(a1 + 288);
    int64_t v5 = a3; // 0x582365
    int64_t v6; // 0x5822c0
    int64_t * v7; // 0x5822c0
    int64_t v8; // 0x582311
    uint32_t v9; // 0x582318
    int32_t * v10; // 0x58230a
    while (true) {
      lab_0x58230a:
        // 0x58230a
        v6 = v5;
        v10 = (int32_t *)(v6 + 16);
        if (*v10 != 0) {
            goto lab_0x582365;
        } else {
            // 0x582311
            v7 = (int64_t *)(v6 + 8);
            v8 = *v7;
            v9 = *(int32_t *)v8;
            if ((int32_t)a4 != 0) {
                goto lab_0x582327;
            } else {
                // 0x58231c
                if ((int32_t)function_579a10((int64_t)v9, v9, v8) != 0) {
                    goto lab_0x582365;
                } else {
                    goto lab_0x582327;
                }
            }
        }
    }
    // 0x58236d
    return __readfsqword(40) ^ v1;
  lab_0x582365:
    // 0x582365
    v5 = *(int64_t *)v6;
    if (v5 == 0) {
        return __readfsqword(40) ^ v1;
    }
    // 0x582300
    if (*v2 != 0) {
        return __readfsqword(40) ^ v1;
    }
    goto lab_0x58230a;
  lab_0x582327:
    // 0x582327
    *v10 = 1;
    int64_t v11 = *v4; // 0x582335
    *v4 = *(int64_t *)(v6 + 24);
    switch (v9) {
        case 41: {
            // 0x582390
            function_581fa0(a1, v3, v8 + 16, *(int64_t *)v6);
            *v4 = v11;
            // 0x58236d
            return __readfsqword(40) ^ v1;
        }
        case 42: {
            // 0x5823b0
            function_5826d0(a1, v3, v8 + 8, *(int64_t *)v6);
            *v4 = v11;
            // 0x58236d
            return __readfsqword(40) ^ v1;
        }
        case 2: {
            int64_t * v12 = (int64_t *)(a1 + 296); // 0x5823d4
            *v12 = 0;
            function_581610(a1, v3, *(int64_t *)(v8 + 8));
            int64_t * v13 = (int64_t *)(a1 + 256); // 0x5823fc
            int64_t v14 = *v13; // 0x5823fc
            int64_t v15; // 0x5822c0
            int64_t v16; // 0x5822c0
            if ((a2 & 4) == 0) {
                int64_t * v17 = (int64_t *)(a1 + 320);
                int64_t v18 = (int64_t)"::";
                char v19 = *(char *)v18; // 0x582500
                int64_t v20; // 0x5822c0
                int64_t v21; // 0x5822c0
                int64_t v22; // 0x5822c0
                if (v14 == 255) {
                    // 0x5824a8
                    *(char *)(a1 + 255) = 0;
                    *v17 = *v17 + 1;
                    v20 = 1;
                    v21 = 0;
                    v22 = 255;
                } else {
                    // 0x582507
                    v20 = v14 + 1;
                    v21 = v14;
                    v22 = v3;
                }
                int64_t v23 = v20;
                *v13 = v23;
                *(char *)(v21 + a1) = v19;
                *(char *)(a1 + 264) = v19;
                v15 = v21;
                v16 = v22;
                int64_t v24 = v22; // 0x5824f4
                int64_t v25 = v18 + 1; // 0x5824f4
                while (v18 != (int64_t)&g28 - 1) {
                    // 0x5824fa
                    v18 = v25;
                    int64_t v26 = v23;
                    v19 = *(char *)v18;
                    if (v26 == 255) {
                        // 0x5824a8
                        *(char *)(a1 + 255) = 0;
                        *v17 = *v17 + 1;
                        v20 = 1;
                        v21 = 0;
                        v22 = 255;
                    } else {
                        // 0x582507
                        v20 = v26 + 1;
                        v21 = v26;
                        v22 = v24;
                    }
                    // 0x5824d3
                    v23 = v20;
                    *v13 = v23;
                    *(char *)(v21 + a1) = v19;
                    *(char *)(a1 + 264) = v19;
                    v15 = v21;
                    v16 = v22;
                    v24 = v22;
                    v25 = v18 + 1;
                }
            } else {
                int64_t v27 = v14; // 0x582413
                int64_t v28 = v14 + 1; // 0x582413
                int64_t v29 = v3; // 0x582413
                if (v14 == 255) {
                    // 0x582415
                    *(char *)(a1 + 255) = 0;
                    int64_t * v30 = (int64_t *)(a1 + 320); // 0x582431
                    *v30 = *v30 + 1;
                    v27 = 0;
                    v28 = 1;
                    v29 = 255;
                }
                // 0x582440
                *v13 = v28;
                *(char *)(v27 + a1) = 46;
                *(char *)(a1 + 264) = 46;
                v15 = v28;
                v16 = v29;
            }
            int64_t v31 = *(int64_t *)(*v7 + 16); // 0x582457
            uint32_t v32 = *(int32_t *)v31; // 0x58245b
            if (v32 != 70) {
                int32_t v33 = v16; // 0x582476
                int64_t v34 = v31; // 0x58247d
                if ((int32_t)function_579a10((int64_t)v32, v33, v15) != 0) {
                    int64_t v35 = *(int64_t *)(v31 + 8); // 0x582470
                    uint32_t v36 = *(int32_t *)v35; // 0x582474
                    int64_t v37 = v35; // 0x58247d
                    v34 = v35;
                    while ((int32_t)function_579a10((int64_t)v36, v33, v15) != 0) {
                        // 0x582470
                        v35 = *(int64_t *)(v37 + 8);
                        v36 = *(int32_t *)v35;
                        v37 = v35;
                        v34 = v35;
                    }
                }
                // 0x58247f
                function_581610(a1, v3, v34);
                *v4 = v11;
                // 0x58236d
                return __readfsqword(40) ^ v1;
            }
            char * v38 = (char *)(a1 + 255);
            int64_t * v39 = (int64_t *)(a1 + 320);
            char * v40 = (char *)(a1 + 264);
            int64_t v41 = (int64_t)"{default arg#";
            int64_t v42 = *v13;
            char v43 = *(char *)v41; // 0x582574
            int64_t v44; // 0x5822c0
            int64_t v45; // 0x5822c0
            if (v42 == 255) {
                // 0x582520
                *v38 = 0;
                *v39 = *v39 + 1;
                v44 = 1;
                v45 = 0;
            } else {
                // 0x58257b
                v44 = v42 + 1;
                v45 = v42;
            }
            int64_t v46 = v44;
            *v13 = v46;
            *(char *)(v45 + a1) = v43;
            *v40 = v43;
            int64_t v47 = v41 + 1; // 0x58256c
            while (v41 != (int64_t)&g27 - 1) {
                // 0x58256e
                v41 = v47;
                v42 = v46;
                v43 = *(char *)v41;
                if (v42 == 255) {
                    // 0x582520
                    *v38 = 0;
                    *v39 = *v39 + 1;
                    v44 = 1;
                    v45 = 0;
                } else {
                    // 0x58257b
                    v44 = v42 + 1;
                    v45 = v42;
                }
                // 0x58254b
                v46 = v44;
                *v13 = v46;
                *(char *)(v45 + a1) = v43;
                *v40 = v43;
                v47 = v41 + 1;
            }
            int32_t v48 = *(int32_t *)(v31 + 16); // 0x582584
            int64_t v49; // bp-104, 0x5822c0
            int64_t v50 = (int64_t)&v49; // 0x582587
            __sprintf_chk((char *)&v49, 1, 25, "%d", (int64_t)(v48 + 1));
            int64_t v51 = v50;
            int32_t v52 = *(int32_t *)v51; // 0x5825ae
            int64_t v53 = v51 + 4; // 0x5825b2
            int32_t v54 = v52 - 0x1010101 & (v52 ^ -0x7f7f7f80); // 0x5825be
            uint32_t v55 = v54 & -0x7f7f7f80; // 0x5825c0
            while (v55 == 0) {
                // 0x5825ae
                v51 = v53;
                v52 = *(int32_t *)v51;
                v53 = v51 + 4;
                v54 = v52 - 0x1010101 & (v52 ^ -0x7f7f7f80);
                v55 = v54 & -0x7f7f7f80;
            }
            int32_t v56 = (v54 & (int32_t)&g31 & -0x7f7f7f80) == 0 ? v55 / 0x10000 : v55; // 0x5825d1
            int64_t v57 = (v54 & (int32_t)&g31 & -0x7f7f7f80) == 0 ? v51 + 6 : v53; // 0x5825da
            unsigned char v58 = (char)v56; // 0x5825de
            int64_t result = *v13; // 0x5825e0
            int64_t v59 = v57 - (-1 - v58 < v58 ? 4 : 3); // 0x5825e7
            if (v59 == v50) {
                // 0x5826b4
                return result;
            }
            int64_t v60 = v50; // 0x5825ee
            char v61 = *(char *)v60; // 0x58264a
            int64_t v62; // 0x5822c0
            int64_t v63; // 0x5822c0
            if (result == 255) {
                // 0x5825fb
                *v38 = 0;
                *v39 = *v39 + 1;
                v62 = 1;
                v63 = 0;
            } else {
                // 0x582650
                v62 = result + 1;
                v63 = result;
            }
            int64_t result2 = v62;
            v60++;
            *v13 = result2;
            *(char *)(v63 + a1) = v61;
            *v40 = v61;
            while (v60 != v59) {
                int64_t v64 = result2;
                v61 = *(char *)v60;
                if (v64 == 255) {
                    // 0x5825fb
                    *v38 = 0;
                    *v39 = *v39 + 1;
                    v62 = 1;
                    v63 = 0;
                } else {
                    // 0x582650
                    v62 = v64 + 1;
                    v63 = v64;
                }
                // 0x582626
                result2 = v62;
                v60++;
                *v13 = result2;
                *(char *)(v63 + a1) = v61;
                *v40 = v61;
            }
            // 0x5826b4
            return result2;
        }
    }
    // 0x582353
    function_5816a0(a1, v3);
    *v4 = v11;
    goto lab_0x582365;
}

// Address range: 0x582662 - 0x5826b4
int64_t function_582662(void) {
    // 0x582662
    int64_t v1; // 0x582662
    *(char *)(v1 + 255) = 0;
    int64_t * v2 = (int64_t *)(v1 + 320); // 0x58267e
    *v2 = *v2 + 1;
    *(int64_t *)(v1 + 256) = 1;
    char v3 = v1; // 0x58269f
    *(char *)v1 = v3;
    *(char *)(v1 + 264) = v3;
    return 1;
}
