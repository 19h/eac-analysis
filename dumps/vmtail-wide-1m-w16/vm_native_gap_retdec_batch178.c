/*
 * Targeted RetDec C for native executable gap queue batch 178.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x47a80-0x47d04 rank=62 name=fcn.00047a80 kind=r2_discovered bytes=644 uncovered=644
 *   0x4c5930-0x4c5bb3 rank=63 name=fcn.004c5930 kind=r2_discovered bytes=643 uncovered=643
 *   0x4ee38-0x4f0b5 rank=64 name=fcn.0004ee38 kind=r2_discovered bytes=637 uncovered=637
 *   0x556f40-0x5571b9 rank=65 name=fcn.00556f40 kind=r2_discovered bytes=633 uncovered=633
 *   0x5729d0-0x572c48 rank=66 name=fcn.005729d0 kind=r2_discovered bytes=632 uncovered=632
 *   0x572c50-0x572ec8 rank=67 name=fcn.00572c50 kind=r2_discovered bytes=632 uncovered=632
 *   0x53c6e-0x53ee5 rank=68 name=fcn.00053c6e kind=r2_discovered bytes=631 uncovered=631
 *   0x5c79a-0x5ca10 rank=69 name=fcn.0005c79a kind=r2_discovered bytes=630 uncovered=630
 *   0x49ecc0-0x49ef31 rank=70 name=fcn.0049ecc0 kind=r2_discovered bytes=625 uncovered=625
 *   0x5234b0-0x523721 rank=71 name=method.std::__cxx11::time_get_char__std::istreambuf_iterator_char__std::char_traits_char_____.virtual_40 kind=native_discovered bytes=625 uncovered=625
 *   0x4cf86-0x4d1ed rank=72 name=fcn.0004cf86 kind=r2_discovered bytes=615 uncovered=615
 *   0x48ec68-0x48eec5 rank=73 name=fcn.0048ec68 kind=r2_discovered bytes=605 uncovered=605
 *   0x4c03a0-0x4c05fd rank=74 name=fcn.004c03a0 kind=r2_discovered bytes=605 uncovered=605
 *   0x490ad8-0x490d34 rank=75 name=fcn.00490ad8 kind=r2_discovered bytes=604 uncovered=604
 *   0x536820-0x536a7c rank=76 name=method.std::__cxx11::time_get_wchar_t__std::istreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_40 kind=native_discovered bytes=604 uncovered=604
 *   0x4987d0-0x498a27 rank=77 name=fcn.004987d0 kind=r2_discovered bytes=599 uncovered=599
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
extern int g28;
extern int g29;
extern int g30;
extern int g31;
extern int g32;
extern int g33;
extern int g34;
extern int g35;
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

int64_t function_208a0();
int64_t function_221a8();
int64_t function_2508e();
int64_t function_250b0();
int64_t function_251e8();
int64_t function_254fe();
int64_t function_255da();
int64_t function_29c3a();
int64_t function_35c52();
int64_t function_35ef6();
int64_t function_35fcc();
int64_t function_36966();
int64_t function_36a32();
int64_t function_380a0();
int64_t function_47156();
int64_t function_479a0();
int64_t function_47a80(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47c75(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_48d2d2();
int64_t function_48d385();
int64_t function_48d50f();
int64_t function_48daa2();
int64_t function_48e14d();
int64_t function_48e2d8();
int64_t function_48ec68(int64_t * a1, int64_t * a2);
int64_t function_48f5c8();
int64_t function_490a46();
int64_t function_490ad8(int64_t a1);
int64_t function_496bd0();
int64_t function_496bf0();
int64_t function_496ff0();
int64_t function_4987d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_49ebd0();
int64_t function_49ecc0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_49eff0();
int64_t function_4a578();
int64_t function_4a6e6();
int64_t function_4a98b0();
int64_t function_4af830();
int64_t function_4afe70();
int64_t function_4aff10();
int64_t function_4b0080();
int64_t function_4b0fc0();
int64_t function_4b466();
int64_t function_4b4e10();
int64_t function_4b4ef0();
int64_t function_4b4f20();
int64_t function_4b5070();
int64_t function_4b5690();
int64_t function_4ba450();
int64_t function_4ba790();
int64_t function_4bbf40();
int64_t function_4bbff0();
int64_t function_4c03a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c48b0();
int64_t function_4c52c0();
int64_t function_4c53c0();
int64_t function_4c5930(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4c7e4();
int64_t function_4cbdc();
int64_t function_4cee6();
int64_t function_4cf86(int64_t a1);
int64_t function_4d974();
int64_t function_4e9c8();
int64_t function_4e9fa();
int64_t function_4e9fe();
int64_t function_4ea04();
int64_t function_4eaea();
int64_t function_4ee38(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f20e();
int64_t function_50ab00();
int64_t function_50c440();
int64_t function_522e70();
int64_t function_5234b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_52cbf0();
int64_t function_536200();
int64_t function_536820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_53c6e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5423b0();
int64_t function_542470();
int64_t function_542590();
int64_t function_54878();
int64_t function_548b0();
int64_t function_549ac();
int64_t function_54b780();
int64_t function_54d560();
int64_t function_552720();
int64_t function_554b00();
int64_t function_556610();
int64_t function_556f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_56df8();
int64_t function_5729d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_572c50(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5b0cc();
int64_t function_5c5e2();
int64_t function_5c79a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5f302();
int64_t function_7214c();
int64_t function_729b6();
int64_t function_729ce();

// Address range: 0x47a80 - 0x47c24
int64_t function_47a80(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2;
    int64_t v2 = __readfsqword(40); // 0x47a97
    int64_t v3; // 0x47b13
    int64_t * v4; // 0x47abc
    int64_t v5; // 0x47acd
    if ((char)function_4eaea() == 0) {
        goto lab_0x47c00;
    } else {
        int64_t v6 = function_4e9fa(a2); // 0x47ab7
        v4 = (int64_t *)(a1 + (int64_t)&g18);
        uint64_t v7 = *v4; // 0x47abc
        uint64_t v8 = (v6 & 0xffffffff) % v7;
        v5 = a1 + (int64_t)&g17;
        int64_t v9 = *(int64_t *)(*(int64_t *)v5 + 8 * v8); // 0x47ad4
        if (v9 == 0) {
            goto lab_0x47b1c;
        } else {
            int64_t v10 = *(int64_t *)v9; // 0x47ae0
            if (v10 == 0) {
                goto lab_0x47b1c;
            } else {
                // 0x47ae8
                v1 = 0;
                int64_t v11 = 0; // 0x47ae8
                int64_t v12 = v10; // 0x47ae8
                while (true) {
                    int64_t v13 = v11;
                    int64_t v14; // 0x47a80
                    if (*(int32_t *)(v12 + 8) != (int32_t)v6) {
                        // 0x47af5
                        v14 = v13;
                        if (v13 != 0) {
                            // break -> 0x47c00
                            break;
                        }
                    } else {
                        int64_t v15 = v13 + 1; // 0x47af0
                        v1 = v15;
                        v14 = v15;
                    }
                    // 0x47afe
                    v3 = v14;
                    v12 = *(int64_t *)v12;
                    if (v12 == 0) {
                        goto lab_0x47b13_2;
                    }
                    // 0x47b06
                    v11 = v3;
                    if (v8 != (int64_t)*(int32_t *)(v12 + 8) % v7) {
                        goto lab_0x47b13_2;
                    }
                }
                goto lab_0x47c00;
            }
        }
    }
  lab_0x47b13_2:
    if (v3 != 0) {
        goto lab_0x47c00;
    } else {
        goto lab_0x47b1c;
    }
  lab_0x47c00:
    // 0x47c00
    if (v2 == __readfsqword(40)) {
        // 0x47c15
        return 0;
    }
    // 0x47c10
    __stack_chk_fail();
    // 0x47c15
    return (int64_t)&g35;
  lab_0x47b1c:;
    int64_t v16 = function_4e9fa(a2); // 0x47b26
    uint64_t v17 = v16 & 0xffffffff; // 0x47b2b
    int32_t v18 = v16; // 0x47b36
    int32_t v19 = v18; // bp-68, 0x47b36
    int64_t v20 = v17 % *v4;
    v1 = v20;
    int64_t v21 = function_47156(v5, v20, &v19); // 0x47b54
    int32_t v22; // 0x47a80
    int64_t v23; // 0x47a80
    if (v21 == 0) {
        goto lab_0x47b6a;
    } else {
        int64_t v24 = *(int64_t *)v21; // 0x47b5e
        v22 = v20;
        v23 = v24;
        if (v24 != 0) {
            goto lab_0x47ba4;
        } else {
            goto lab_0x47b6a;
        }
    }
  lab_0x47b6a:;
    int64_t v25 = function_4efd30(64); // 0x47b6f
    *(int64_t *)v25 = 0;
    *(int32_t *)(v25 + 8) = v18;
    function_4e9c8(v25 + 16, 0);
    int64_t v26 = function_4a578(v5, v20, v17, v25); // 0x47b9b
    v22 = *(int32_t *)&v1;
    v23 = v26;
    goto lab_0x47ba4;
  lab_0x47ba4:
    // 0x47ba4
    *(int32_t *)(v23 + 16) = v22;
    function_380a0(v23 + 24, a2 + 8);
    function_4a6e6(v23 + 32, a2 + 16);
    *(int64_t *)(v23 + 56) = *(int64_t *)(a2 + 40);
    function_4b466(a1 + 40, a2);
    if (v2 == __readfsqword(40)) {
        // 0x47be7
        return function_479a0(a1, a2);
    }
    // 0x47c10
    __stack_chk_fail();
    // 0x47c15
    return (int64_t)&g35;
}

// Address range: 0x47c75 - 0x47c7d
int64_t function_47c75(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47c75
    int64_t v1; // 0x47c75
    unsigned char v2 = (char)v1;
    unsigned char v3 = 2 * v2; // 0x47c75
    *(char *)v1 = v3;
    int64_t v4; // 0x47c75
    char v5 = *(char *)&v4; // 0x47c77
    *(char *)a1 = v5 + (char)a4 + (char)(v3 < v2);
    return a2 & 0xffffffff;
}

// Address range: 0x4cf86 - 0x4d1ed
int64_t function_4cf86(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x4cf9b
    int64_t v2 = 0; // bp-112, 0x4cfb0
    int64_t v3 = 0; // bp-88, 0x4cfcb
    int64_t v4; // bp-120, 0x4cf86
    int64_t v5 = (int64_t)&v4; // 0x4cfdc
    function_729b6(&v4);
    function_4cee6(&v2, 12, 0);
    int64_t v6 = *(int64_t *)(a1 + 248); // 0x4d03b
    *(int64_t *)v2 = 0x400000011;
    int64_t v7 = *(int64_t *)(a1 + 256); // 0x4d050
    *(int32_t *)(v2 + 8) = -0x55555555 * (int32_t)((v7 - v6) / 16);
    if (v7 != v6) {
        // 0x4d07e
        int64_t v8; // bp-128, 0x4cf86
        int64_t v9 = (int64_t)&v8; // 0x4d06f
        int16_t v10; // bp-130, 0x4cf86
        int64_t v11 = (int64_t)&v10;
        int32_t v12; // bp-124, 0x4cf86
        int64_t v13 = (int64_t)&v12;
        int64_t v14 = v6; // 0x4d187
        v8 = 0x100000000 * function_4e9fa(v14) >> 32;
        int64_t v15 = function_4e9fe(v14); // 0x4d092
        int64_t v16 = function_4ea04(v14); // 0x4d09d
        int64_t * v17 = (int64_t *)(v16 + 8); // 0x4d0a5
        int64_t * v18 = (int64_t *)v16; // 0x4d0ae
        v12 = (int32_t)((*v17 - *v18) / 16);
        function_4d974(&v2, 0, v9, v9 | 4);
        int64_t * v19 = (int64_t *)v15; // 0x4d0cd
        v10 = (int16_t)*(int64_t *)(*v19 - 24);
        function_4d974(&v2, 0, v11, v9);
        int64_t v20 = *v19; // 0x4d0fa
        function_4d974(&v2, 0, v20, v20 + (int64_t)v10);
        function_4d974(&v2, 0, v13, v5);
        int64_t v21 = *v17; // 0x4d123
        int64_t v22 = *v18; // 0x4d127
        int64_t v23 = v22; // 0x4d130
        int64_t v24; // 0x4cf86
        int64_t v25; // 0x4d141
        int64_t * v26; // 0x4d14a
        int64_t v27; // 0x4d171
        if (v21 != v22) {
            v24 = v23;
            v25 = v24 + 16;
            function_4d974(&v2, 0, v24, v24 + 1);
            v26 = (int64_t *)(v24 + 8);
            v10 = (int16_t)*(int64_t *)(*v26 - 24);
            function_4d974(&v2, 0, v11, v9);
            v27 = *v26;
            function_4d974(&v2, 0, v27, v27 + (int64_t)v10);
            while (v21 != v25) {
                // 0x4d132
                v24 = v25;
                v25 = v24 + 16;
                function_4d974(&v2, 0, v24, v24 + 1);
                v26 = (int64_t *)(v24 + 8);
                v10 = (int16_t)*(int64_t *)(*v26 - 24);
                function_4d974(&v2, 0, v11, v9);
                v27 = *v26;
                function_4d974(&v2, 0, v27, v27 + (int64_t)v10);
            }
        }
        // 0x4d187
        v14 += 48;
        while (v14 != v7) {
            // 0x4d07e
            v8 = 0x100000000 * function_4e9fa(v14) >> 32;
            v15 = function_4e9fe(v14);
            v16 = function_4ea04(v14);
            v17 = (int64_t *)(v16 + 8);
            v18 = (int64_t *)v16;
            v12 = (int32_t)((*v17 - *v18) / 16);
            function_4d974(&v2, 0, v9, v9 | 4);
            v19 = (int64_t *)v15;
            v10 = (int16_t)*(int64_t *)(*v19 - 24);
            function_4d974(&v2, 0, v11, v9);
            v20 = *v19;
            function_4d974(&v2, 0, v20, v20 + (int64_t)v10);
            function_4d974(&v2, 0, v13, v5);
            v21 = *v17;
            v22 = *v18;
            v23 = v22;
            if (v21 != v22) {
                v24 = v23;
                v25 = v24 + 16;
                function_4d974(&v2, 0, v24, v24 + 1);
                v26 = (int64_t *)(v24 + 8);
                v10 = (int16_t)*(int64_t *)(*v26 - 24);
                function_4d974(&v2, 0, v11, v9);
                v27 = *v26;
                function_4d974(&v2, 0, v27, v27 + (int64_t)v10);
                while (v21 != v25) {
                    // 0x4d132
                    v24 = v25;
                    v25 = v24 + 16;
                    function_4d974(&v2, 0, v24, v24 + 1);
                    v26 = (int64_t *)(v24 + 8);
                    v10 = (int16_t)*(int64_t *)(*v26 - 24);
                    function_4d974(&v2, 0, v11, v9);
                    v27 = *v26;
                    function_4d974(&v2, 0, v27, v27 + (int64_t)v10);
                }
            }
            // 0x4d187
            v14 += 48;
        }
    }
    int64_t v28 = v2; // 0x4d190
    function_4cbdc(a1, v28, -v28);
    function_4c7e4(a1);
    function_729ce(v5);
    function_254fe(&v3);
    function_254fe(&v2);
    int64_t result = 0; // 0x4d1d7
    if (v1 != __readfsqword(40)) {
        // 0x4d1d9
        __stack_chk_fail();
        result = (int64_t)&g35;
    }
    // 0x4d1de
    return result;
}

// Address range: 0x4ee38 - 0x4f0b5
int64_t function_4ee38(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x4ee38
    int64_t v1; // 0x4ee38
    uint64_t v2 = v1;
    function_251e8(a3);
    char v3 = v2;
    int32_t v4 = a2;
    if (v3 == 113) {
        // 0x4f012
        function_36a32(a3, 128, 0);
        int128_t v5 = __asm_cvtss2sd(v4); // 0x4f021
        int128_t v6 = __asm_cvtss2sd(*(int32_t *)(a2 + 12)); // 0x4f02c
        int128_t v7 = __asm_cvtss2sd(*(int32_t *)(a2 + 8)); // 0x4f031
        int128_t v8 = __asm_cvtss2sd(*(int32_t *)(a2 + 4)); // 0x4f036
        int64_t v9 = *(int64_t *)-24; // 0x4f03b
        int64_t v10 = __asm_movsd(v5); // 0x4f03f
        int64_t v11 = __asm_movsd(v6); // 0x4f045
        int64_t v12 = __asm_movsd(v7); // 0x4f04b
        int64_t v13 = __asm_movsd(v8); // 0x4f051
        function_255da(a3);
        __asm_movsd_133(v10);
        __asm_movsd_133(v11);
        __asm_movsd_133(v12);
        int64_t v14 = function_48d50f(0, v9, (int64_t)"(%.2f, %.2f, %.2f, %.2f)", v1, __asm_movsd_133(v13)); // 0x4f081
        if ((int32_t)v14 >= 1) {
            // 0x4f08a
            function_36a32(a3, 0x100000000 * v14 >> 32, 0);
            // 0x4f0a8
            return 16;
        }
      lab_0x4f09e:
        // 0x4f09e
        function_251e8(a3);
        // 0x4f0a8
        return 0;
    }
    bool v15; // 0x4ee38
    int64_t v16; // 0x4ee38
    int64_t v17; // 0x4ee38
    if (v3 > 113) {
        // 0x4ee85
        v17 = (int64_t)"%u";
        if (v3 == 117) {
            goto lab_0x4ef2b;
        } else {
            if (v3 <= 117) {
                if (v3 != 115) {
                    // 0x4f09e
                    function_251e8(a3);
                    // 0x4f0a8
                    return 0;
                }
                int64_t result = 2; // 0x4eeb7
                if ((int16_t)a2 != 0) {
                    uint64_t v18 = a2 % 0x10000; // 0x4eea9
                    function_4f20e(a3, 0, *(int64_t *)((v2 % 256 | a3 & -256) - 24), a2 + 2, v18);
                    result = v18 + 2;
                }
                // 0x4f0a8
                return result;
            }
            // 0x4ee96
            v17 = (int64_t)"%lu";
            switch (v3) {
                case 118: {
                    // 0x4ef90
                    function_36a32(a3, 128, 0);
                    int128_t v19 = __asm_cvtss2sd(*(int32_t *)(a2 + 8)); // 0x4ef9f
                    int128_t v20 = __asm_cvtss2sd(*(int32_t *)(a2 + 4)); // 0x4efaa
                    int128_t v21 = __asm_cvtss2sd(v4); // 0x4efaf
                    int64_t v22 = *(int64_t *)-24; // 0x4efb4
                    int64_t v23 = __asm_movsd(v19); // 0x4efb8
                    int64_t v24 = __asm_movsd(v20); // 0x4efbe
                    int64_t v25 = __asm_movsd(v21); // 0x4efc4
                    function_255da(a3);
                    __asm_movsd_133(v23);
                    __asm_movsd_133(v24);
                    int64_t v26 = function_48d50f(0, v22, (int64_t)"(%.2f, %.2f, %.2f)", v1, __asm_movsd_133(v25)); // 0x4efee
                    if ((int32_t)v26 < 1) {
                        // 0x4f09e
                        function_251e8(a3);
                        // 0x4f0a8
                        return 0;
                    }
                    // 0x4effb
                    function_36a32(a3, 0x100000000 * v26 >> 32, 0);
                    // 0x4f0a8
                    return 12;
                }
                case 121: {
                    goto lab_0x4ef2b;
                }
                default: {
                    goto lab_0x4f09e;
                }
            }
        }
    } else {
        if (v3 < 105) {
            // 0x4f09e
            function_251e8(a3);
            // 0x4f0a8
            return 0;
        }
        if (v3 >= 107) {
            // 0x4ee72
            if (v3 == 112) {
                // 0x4f0a8
                return 2;
            }
            // 0x4f09e
            function_251e8(a3);
            // 0x4f0a8
            return 0;
        }
        // 0x4ef0e
        function_36a32(a3, 64, 0);
        v15 = v3 != 105;
        v16 = v3 == 105 ? (int64_t)"%i" : (int64_t)"%li";
        goto lab_0x4ef38;
    }
  lab_0x4ef2b:
    // 0x4ef2b
    function_36a32(a3, 64, 0);
    v15 = true;
    v16 = v17;
    goto lab_0x4ef38;
  lab_0x4ef38:
    // 0x4ef38
    function_255da(a3);
    int128_t v27; // 0x4ee38
    int64_t v28 = function_48d50f(0, *(int64_t *)-24, v16, 64, v27); // 0x4ef55
    if ((int32_t)v28 >= 1) {
        // 0x4ef62
        function_36a32(a3, 0x100000000 * v28 >> 32, 0);
        return v3 != 117 == v15 ? 8 : 4;
    }
    // 0x4f09e
    function_251e8(a3);
    // 0x4f0a8
    return 0;
}

// Address range: 0x53c6e - 0x53ee5
int64_t function_53c6e(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x53c7f
    int64_t v2 = 7; // 0x53c9a
    if (a2 != 0) {
        int32_t * v3 = (int32_t *)(a2 + (int64_t)&g10); // 0x53ca0
        v2 = 7;
        if (*v3 != 0) {
            // 0x53cb0
            function_54878(a3);
            v2 = 0;
            if (*v3 != 0) {
                int64_t * v4 = (int64_t *)(a3 + 8);
                int64_t v5 = a2 + (int64_t)&g11; // 0x53c6e
                int64_t v6 = 0; // 0x53eae
                int64_t v7; // bp-616, 0x53c6e
                __asm_rep_stosd_memset((char *)&v7, 0, 138);
                v7 = *(int64_t *)v5;
                int64_t v8; // bp-604, 0x53c6e
                __asm_rep_movsd_memcpy((char *)&v8, (char *)(v5 + 12), 128);
                int64_t v9 = v5 + (int64_t)&g3; // 0x53d1c
                int32_t * v10 = (int32_t *)(v5 + (int64_t)"GNU"); // 0x53d34
                int64_t v11 = v9; // 0x53d3e
                char * v12; // 0x53c6e
                char * v13 = v12; // 0x53d3e
                char * v14 = v12; // 0x53d3e
                int64_t v15 = 0; // 0x53d3e
                int64_t v16; // 0x53c6e
                int64_t v17; // 0x53c6e
                int64_t v18; // bp-648, 0x53c6e
                char * v19; // 0x53c6e
                char * v20; // 0x53c6e
                int64_t v21; // bp-88, 0x53c6e
                int64_t v22; // 0x53c6e
                int64_t v23; // 0x53c6e
                int64_t v24; // 0x53d6e
                int64_t v25; // 0x53da6
                int128_t v26; // 0x53dad
                int128_t v27; // 0x53db6
                int64_t v28; // 0x53d34
                if (*v10 != 0) {
                    v19 = v13;
                    v22 = (int64_t)v19;
                    __asm_rep_stosd_memset((char *)&v18, 0, 8);
                    if (v23 == v22) {
                        // 0x53d79
                        function_548b0(&v21);
                        v20 = v19;
                    } else {
                        // 0x53d64
                        __asm_rep_stosd_memset(v19, 0, 8);
                        v24 = v22 + 32;
                        v16 = v24;
                        v20 = (char *)v24;
                    }
                    // 0x53d9e
                    v25 = 1;
                    v26 = __asm_movups(*(int128_t *)v11);
                    __asm_movups_134(*(int128_t *)(v16 - 32), v26);
                    v27 = __asm_movups(*(int128_t *)(v11 + 16));
                    __asm_movups_134(*(int128_t *)(v16 - 16), v27);
                    v28 = (int64_t)*v10;
                    v17 = v25;
                    v11 += 32;
                    v14 = v20;
                    v15 = v28;
                    while (v25 < v28) {
                        // 0x53d44
                        v19 = v20;
                        v22 = (int64_t)v19;
                        __asm_rep_stosd_memset((char *)&v18, 0, 8);
                        if (v23 == v22) {
                            // 0x53d79
                            function_548b0(&v21);
                            v20 = v19;
                        } else {
                            // 0x53d64
                            __asm_rep_stosd_memset(v19, 0, 8);
                            v24 = v22 + 32;
                            v16 = v24;
                            v20 = (char *)v24;
                        }
                        // 0x53d9e
                        v25 = v17 + 1;
                        v26 = __asm_movups(*(int128_t *)v11);
                        __asm_movups_134(*(int128_t *)(v16 - 32), v26);
                        v27 = __asm_movups(*(int128_t *)(v11 + 16));
                        __asm_movups_134(*(int128_t *)(v16 - 16), v27);
                        v28 = (int64_t)*v10;
                        v17 = v25;
                        v11 += 32;
                        v14 = v20;
                        v15 = v28;
                    }
                }
                int64_t v29 = 0; // bp-664, 0x53dc9
                int64_t v30 = 0; // bp-656, 0x53dd2
                int64_t v31 = function_4efd30((int64_t)&g6); // 0x53ddb
                function_56df8(v31, &v7);
                int64_t v32 = 0; // bp-672, 0x53df3
                int64_t v33 = function_4efd30(32); // 0x53e01
                int64_t v34 = v30; // 0x53e10
                *(int64_t *)(v33 + 8) = 0x100000001;
                *(int64_t *)(v33 + 24) = v31;
                v30 = v33;
                v29 = v31;
                *(int64_t *)v33 = (int64_t)&g19;
                v32 = v34;
                function_35fcc(&v32);
                int64_t v35 = *v4; // 0x53e40
                int64_t * v36; // 0x53e4f
                int64_t v37; // 0x53e5f
                if (v35 == *(int64_t *)(a3 + 16)) {
                    // 0x53e80
                    function_549ac(a3, v35, &v29);
                } else {
                    // 0x53e4a
                    v36 = (int64_t *)(v35 + 8);
                    *v36 = 0;
                    *(int64_t *)v35 = v29;
                    v37 = v30;
                    v30 = 0;
                    v29 = 0;
                    *v36 = v37;
                    *v4 = v35 + 16;
                }
                // 0x53e8b
                function_35fcc(&v30);
                if (v21 != 0) {
                    // 0x53ea1
                    function_4eeb50(v21);
                }
                // 0x53ea6
                v6++;
                v5 = 32 * v15 + v9;
                v12 = v14;
                v2 = 0;
                while (v6 < (int64_t)*v3) {
                    // 0x53cd6
                    __asm_rep_stosd_memset((char *)&v7, 0, 138);
                    v7 = *(int64_t *)v5;
                    __asm_rep_movsd_memcpy((char *)&v8, (char *)(v5 + 12), 128);
                    v9 = v5 + (int64_t)&g3;
                    v10 = (int32_t *)(v5 + (int64_t)"GNU");
                    v11 = v9;
                    v13 = v12;
                    v14 = v12;
                    v15 = 0;
                    if (*v10 != 0) {
                        v19 = v13;
                        v22 = (int64_t)v19;
                        __asm_rep_stosd_memset((char *)&v18, 0, 8);
                        if (v23 == v22) {
                            // 0x53d79
                            function_548b0(&v21);
                            v20 = v19;
                        } else {
                            // 0x53d64
                            __asm_rep_stosd_memset(v19, 0, 8);
                            v24 = v22 + 32;
                            v16 = v24;
                            v20 = (char *)v24;
                        }
                        // 0x53d9e
                        v25 = 1;
                        v26 = __asm_movups(*(int128_t *)v11);
                        __asm_movups_134(*(int128_t *)(v16 - 32), v26);
                        v27 = __asm_movups(*(int128_t *)(v11 + 16));
                        __asm_movups_134(*(int128_t *)(v16 - 16), v27);
                        v28 = (int64_t)*v10;
                        v17 = v25;
                        v11 += 32;
                        v14 = v20;
                        v15 = v28;
                        while (v25 < v28) {
                            // 0x53d44
                            v19 = v20;
                            v22 = (int64_t)v19;
                            __asm_rep_stosd_memset((char *)&v18, 0, 8);
                            if (v23 == v22) {
                                // 0x53d79
                                function_548b0(&v21);
                                v20 = v19;
                            } else {
                                // 0x53d64
                                __asm_rep_stosd_memset(v19, 0, 8);
                                v24 = v22 + 32;
                                v16 = v24;
                                v20 = (char *)v24;
                            }
                            // 0x53d9e
                            v25 = v17 + 1;
                            v26 = __asm_movups(*(int128_t *)v11);
                            __asm_movups_134(*(int128_t *)(v16 - 32), v26);
                            v27 = __asm_movups(*(int128_t *)(v11 + 16));
                            __asm_movups_134(*(int128_t *)(v16 - 16), v27);
                            v28 = (int64_t)*v10;
                            v17 = v25;
                            v11 += 32;
                            v14 = v20;
                            v15 = v28;
                        }
                    }
                    // 0x53dc4
                    v29 = 0;
                    v30 = 0;
                    v31 = function_4efd30((int64_t)&g6);
                    function_56df8(v31, &v7);
                    v32 = 0;
                    v33 = function_4efd30(32);
                    v34 = v30;
                    *(int64_t *)(v33 + 8) = 0x100000001;
                    *(int64_t *)(v33 + 24) = v31;
                    v30 = v33;
                    v29 = v31;
                    *(int64_t *)v33 = (int64_t)&g19;
                    v32 = v34;
                    function_35fcc(&v32);
                    v35 = *v4;
                    if (v35 == *(int64_t *)(a3 + 16)) {
                        // 0x53e80
                        function_549ac(a3, v35, &v29);
                    } else {
                        // 0x53e4a
                        v36 = (int64_t *)(v35 + 8);
                        *v36 = 0;
                        *(int64_t *)v35 = v29;
                        v37 = v30;
                        v30 = 0;
                        v29 = 0;
                        *v36 = v37;
                        *v4 = v35 + 16;
                    }
                    // 0x53e8b
                    function_35fcc(&v30);
                    if (v21 != 0) {
                        // 0x53ea1
                        function_4eeb50(v21);
                    }
                    // 0x53ea6
                    v6++;
                    v5 = 32 * v15 + v9;
                    v12 = v14;
                    v2 = 0;
                }
            }
        }
    }
    int64_t result = v2; // 0x53ecc
    if (v1 != __readfsqword(40)) {
        // 0x53ece
        __stack_chk_fail();
        result = (int64_t)&g35;
    }
    // 0x53ed3
    return result;
}

// Address range: 0x5c79a - 0x5ca10
int64_t function_5c79a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x5c7c3
    int64_t v2 = 0; // bp-224, 0x5c7d6
    int64_t v3 = function_4efd30(32); // 0x5c7df
    int64_t * v4 = (int64_t *)(a3 + 8); // 0x5c7e4
    int64_t v5 = *v4 - a3; // 0x5c7e8
    *(int32_t *)v3 = (int32_t)a2;
    int64_t * v6 = (int64_t *)(v3 + 8); // 0x5c7f0
    *v6 = 0;
    int64_t * v7 = (int64_t *)(v3 + 16); // 0x5c7f8
    *v7 = 0;
    int64_t * v8 = (int64_t *)(v3 + 24); // 0x5c800
    *v8 = 0;
    int64_t v9 = v5 >> 5; // 0x5c80b
    int64_t v10 = 0; // 0x5c80f
    if (v9 != 0) {
        if (v9 >= 0x800000000000000) {
            // 0x5c820
            function_5423b0();
        }
        // 0x5c825
        v10 = function_4efd30(v5);
    }
    // 0x5c834
    *v6 = v10;
    *v8 = v10 + v5;
    *v7 = v10;
    int64_t v11 = *v4; // 0x5c849
    int64_t v12 = v10; // 0x5c853
    if (v11 != v9) {
        int64_t v13 = v9 + 32; // 0x5c85b
        function_5f302(v12, v9);
        v12 += 32;
        while (v11 != v13) {
            int64_t v14 = v13;
            v13 = v14 + 32;
            function_5f302(v12, v14);
            v12 += 32;
        }
    }
    int64_t v15 = 0; // bp-216, 0x5c872
    *v7 = v10 - v9 + v11;
    int64_t v16 = function_4efd30(32); // 0x5c88c
    int64_t v17 = v2; // 0x5c89b
    *(int64_t *)(v16 + 24) = v3;
    *(int64_t *)(v16 + 8) = 0x100000001;
    v2 = v16;
    *(int64_t *)v16 = (int64_t)&g20;
    v15 = v17;
    function_35fcc(&v15);
    v15 = v3;
    int64_t v18 = v2;
    v2 = 0;
    int64_t v19; // bp-168, 0x5c79a
    int64_t v20; // bp-200, 0x5c79a
    function_5c5e2(&v19, &v20, 2);
    v15 = 0;
    int64_t v21 = 0; // bp-208, 0x5c9a7
    int64_t v22 = v18; // bp-128, 0x5c9b0
    function_7214c(a1, &v19);
    function_35fcc(&v22);
    function_221a8(&v19);
    function_221a8(&v20);
    function_35fcc(&v21);
    function_35fcc(&v2);
    int64_t result = 0; // 0x5c9f7
    if (v1 != __readfsqword(40)) {
        // 0x5c9f9
        __stack_chk_fail();
        result = (int64_t)&g35;
    }
    // 0x5c9fe
    return result;
}

// Address range: 0x48ec68 - 0x48eec5
int64_t function_48ec68(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t v3 = __readfsqword(40); // 0x48ec7c
    int64_t v4 = *(int64_t *)(v1 - 24); // 0x48ec91
    int64_t v5; // bp-72, 0x48ec68
    if (v4 != 0) {
        int64_t v6 = 4 * v4; // 0x48ecb5
        int64_t outbytesleft = v6; // bp-128, 0x48ecb9
        int64_t inbytesleft = 2 * v4; // bp-136, 0x48ecbe
        int64_t v7 = function_4eec00(v6, v1); // 0x48ecc3
        int64_t outbuf = v7; // bp-112, 0x48ecc8
        int64_t inbuf = v1; // bp-120, 0x48ece5
        int64_t v8 = (int64_t)&g31; // bp-104, 0x48ecee
        int64_t * cd = iconv_open("UTF-32LE", "UTF-16LE"); // 0x48ecf3
        int64_t v9 = (int64_t)&v8; // 0x48ed04
        int64_t v10; // bp-80, 0x48ec68
        int64_t v11; // bp-88, 0x48ec68
        int64_t v12; // bp-96, 0x48ec68
        if (cd == (int64_t *)-1) {
            // 0x48edec
            int64_t v13; // bp-137, 0x48ec68
            function_250b0(&v11, (int64_t)strerror(*__errno_location()), &v13);
            function_48e14d(&v10, &v11);
            int64_t v14; // bp-138, 0x48ec68
            function_35ef6((int64_t)&v12, (int64_t *)L"utf16_to_wchar iconv_open ERROR ", &v14);
            function_48f5c8(&v5, &v12, &v10);
            function_36966(v9, &v5);
            function_29c3a(&v5);
            function_29c3a(&v12);
            function_29c3a(&v10);
            function_2508e(&v11);
        } else {
            int32_t v15 = iconv(cd, (char **)&inbuf, (int32_t *)&inbytesleft, (char **)&outbuf, (int32_t *)&outbytesleft); // 0x48ed27
            if (v15 == -1) {
                // 0x48ed5d
                function_250b0(&v11, (int64_t)strerror(*__errno_location()), &v12);
                function_48e14d(&v10, &v11);
                int64_t v16 = function_35c52(L"utf16_to_wchar iconv ERROR "); // 0x48ed95
                int64_t * v17 = (int64_t *)function_5b0cc(&v10, 0, L"utf16_to_wchar iconv ERROR ", v16); // 0x48edae
                v5 = *v17;
                *v17 = (int64_t)&g31;
                function_36966(v9, &v5);
                function_29c3a(&v5);
                function_29c3a(&v10);
                function_2508e(&v11);
            } else {
                // 0x48ed31
                v5 = function_48e2d8(v7, outbuf);
                function_36966(v9, &v5);
                function_29c3a(&v5);
            }
            // 0x48edde
            iconv_close(cd);
        }
        // 0x48ee71
        function_4eeb40(v7);
        *a1 = v8;
        v8 = (int64_t)&g31;
        function_48d2d2(&g30);
    } else {
        // 0x48ec9a
        function_35ef6(v2, &g14, &v5);
    }
    int64_t result = v2; // 0x48eeaf
    if (v3 != __readfsqword(40)) {
        // 0x48eeb1
        __stack_chk_fail();
        result = (int64_t)&g35;
    }
    // 0x48eeb6
    return result;
}

// Address range: 0x490ad8 - 0x490d34
int64_t function_490ad8(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x490ae6
    int64_t v2 = function_490a46(); // 0x490af6
    int64_t v3 = 0; // 0x490afe
    if (v2 != 0) {
        int64_t v4 = *(int64_t *)(v2 + 24); // 0x490b04
        v3 = 0;
        if (v4 != 0) {
            int64_t v5 = *(int64_t *)(v4 + 16); // 0x490b11
            v3 = 0;
            if (v5 != 0) {
                int64_t * v6; // 0x490ad8
                if (a1 == 0) {
                    // 0x490b1e
                    v6 = (int64_t *)(v5 + 48);
                  lab_0x490c32:
                    // 0x490c32
                    v3 = *v6;
                } else {
                    int64_t v7 = function_48d385(); // 0x490b2a
                    int64_t v8 = v5;
                    int64_t * v9 = (int64_t *)(v8 + 48);
                    v3 = 0;
                    while (*v9 != 0) {
                        // 0x490b50
                        if (2 * v7 == (int64_t)*(int16_t *)(v8 + 88)) {
                            int64_t v10 = *(int64_t *)(v8 + 96); // 0x490b60
                            if (v10 == 0) {
                                // 0x490d04
                                v3 = function_542470("basic_string::_S_construct null not valid", 0);
                                goto lab_0x490d10;
                            }
                            int64_t v11 = v10;
                            int64_t v12 = v11 + 2; // 0x490b82
                            while (*(int16_t *)v11 != 0) {
                                // 0x490b70
                                v11 = v12;
                                v12 = v11 + 2;
                            }
                            int64_t v13 = (int64_t)&g28; // 0x490b87
                            if (v11 != v10) {
                                int64_t v14 = v11 - v10; // 0x490b7a
                                int64_t v15 = v14 >> 1; // 0x490c51
                                if (v15 > 0x1ffffffffffffffc) {
                                    // 0x490c59
                                    function_542590("basic_string::_S_create");
                                }
                                int64_t v16 = v14 & -2; // 0x490c65
                                uint64_t v17 = v16 + 58; // 0x490c6c
                                int64_t v18 = v15; // 0x490c76
                                int64_t v19 = v16; // 0x490c76
                                if (v15 != 0 && v17 > (int64_t)&g1) {
                                    uint64_t v20 = ((int64_t)&g1 - (v17 & (int64_t)(int32_t)&g33)) / 2 + v15; // 0x490c8d
                                    v18 = v20 < 0x1ffffffffffffffc ? v20 : 0x1ffffffffffffffc;
                                    v19 = 2 * v18;
                                }
                                int64_t v21 = function_4efd30(v19 + 26); // 0x490cad
                                *(int64_t *)(v21 + 8) = v18;
                                *(int32_t *)(v21 + 16) = 0;
                                int64_t v22 = v21 + 24; // 0x490cc1
                                if (v15 != 1) {
                                    if (v15 != 0) {
                                        // 0x490cdf
                                        __asm_rep_movsb_memcpy((char *)v22, (char *)v10, v14);
                                    }
                                } else {
                                    // 0x490cd1
                                    *(int16_t *)v22 = *(int16_t *)v10;
                                }
                                // 0x490ce7
                                v13 = v22;
                                if (v21 != (int64_t)g21) {
                                    // 0x490cf4
                                    *(int64_t *)v21 = v15;
                                    *(int16_t *)(v22 + v14) = 0;
                                    v13 = v22;
                                }
                            }
                            int32_t v23 = v13; // bp-80, 0x490ba2
                            int64_t v24; // bp-72, 0x490ad8
                            function_48ec68(&v24, (int64_t *)&v23);
                            int64_t v25 = function_48daa2(a1, v24, v7); // 0x490bb7
                            int64_t v26 = v24 - 24; // 0x490bc3
                            if (v26 != *(int64_t *)0x848c20) {
                                int32_t * v27 = (int32_t *)(v24 - 8);
                                int32_t v28 = *v27;
                                *v27 = v28 - 1;
                                if (v28 >= 0 != v28 != 0) {
                                    // 0x490bf1
                                    function_4eeb50(v26);
                                }
                            }
                            int64_t v29 = v23; // 0x490bf6
                            int64_t v30 = v29 - 24; // 0x490bfb
                            if (v30 != (int64_t)g21) {
                                int32_t * v31 = (int32_t *)(v29 - 8);
                                int32_t v32 = *v31;
                                *v31 = v32 - 1;
                                if (v32 >= 0 != v32 != 0) {
                                    // 0x490c29
                                    function_4eeb50(v30);
                                }
                            }
                            // 0x490c2e
                            v6 = v9;
                            if ((char)v25 != 0) {
                                goto lab_0x490c32;
                            }
                        }
                        int64_t v33 = *(int64_t *)v8; // 0x490c3b
                        v3 = 0;
                        if (v33 == 0) {
                            // break -> 0x490d10
                            break;
                        }
                        v8 = v33;
                        v9 = (int64_t *)(v8 + 48);
                        v3 = 0;
                    }
                }
            }
        }
    }
    goto lab_0x490d10;
  lab_0x490d10:;
    int64_t result = v3; // 0x490d1e
    if (v1 != __readfsqword(40)) {
        // 0x490d20
        __stack_chk_fail();
        result = (int64_t)&g35;
    }
    // 0x490d25
    return result;
}

// Address range: 0x4987d0 - 0x498a27
int64_t function_4987d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4987d0
    function_496bd0();
    function_496bf0(a1, a3 & 0xffffffff);
    int32_t v1 = a2; // 0x498803
    int64_t v2; // 0x4987d0
    if (v1 != 0) {
        char * v3 = (char *)(a1 + 373); // 0x498928
        char * v4 = (char *)(a1 + 372); // 0x498936
        *v4 = *v4 | 64;
        *(int32_t *)(a1 + 340) = (int32_t)&g7;
        *(int32_t *)(a1 + 344) = (int32_t)&g32;
        *(int64_t *)(a1 + 136) = (int64_t)&g12;
        *(int32_t *)(a1 + 348) = 16;
        *(int32_t *)(a1 + 352) = -1;
        unsigned char v5 = *v3 | 60;
        *(int64_t *)(a1 + 144) = (int64_t)&g13;
        *v3 = v5;
        *(int16_t *)(a1 + 356) = (int16_t)&g34;
        *(char *)(a1 + 358) = -1;
        *(char *)(a1 + 359) = 0;
        v2 = v5;
        if (v1 == 1) {
            int64_t result = function_496ff0(a1, "AD107E1E9123A9D0D660FAA79559C51FA20D64E5683B9FD1B54B1597B61D0A75E6FA141DF95A56DBAF9A3C407BA1DF15EB3D688A309C180E1DE6B85A1274A0A66D3F8152AD6AC2129037C9EDEFDA4DF8D91E8FEF55B7394B7AD5B7D0B6C12207C9F98D11ED34DBF6C6BA0B2C8BBC27BE6A00E0A0B9C49708B3BF8A317091883681286130BC8985DB1602E714415D9330278273C7DE31EFDC7310F7121FD5A07415987D9ADC0A486DCDF93ACC44328387315D75E198C641A480CD86A1B9E587E8BE60E69CC928B2B9C52172E413042E9B23F10B0E16E79763C9B53DCF4BA80A29E3FB73C16B8E75B97EF363E2FFA31F71CF9DE5384E71B81C0AC4DFFE0C10E64F", "AC4032EF4F2D9AE39DF30B5C8FFDAC506CDEBE7B89998CAF74866A08CFE4FFE3A6824A4E10B9A6F0DD921F01A70C4AFAAB739D7700C29F52C57DB17C620A8652BE5E9001A8D66AD7C17669101999024AF4D027275AC1348BB8A762D0521BC98AE247150422EA1ED409939D54DA7460CDB5F6C6B250717CBEF180EB34118E98D119529A45D6F834566E3025E316A330EFBB77A86F0C1AB15B051AE3D428C8F8ACB70A8137150B8EEB10E183EDD19963DDD9E263E4770589EF6AA21E7F5F2FF381B539CCE3409D13CD566AFBB48D6C019181E1BCFE94B30269EDFE72FE9B6AA4BD7B5A0F1C71CFFF4C19C418E1F6EC017981BC087F2A7065B384B890D3191F2BFA"); // 0x4989b4
            v2 = result;
            if ((int32_t)result != 0) {
                // 0x498908
                return result;
            }
        }
    } else {
        char * v6 = (char *)(a1 + 372); // 0x49880b
        char * v7 = (char *)(a1 + 374); // 0x498819
        *v7 = *v7 | 1;
        *(int32_t *)(a1 + 340) = (int32_t)&g7;
        *(int32_t *)(a1 + 344) = (int32_t)&g32;
        *(int64_t *)(a1 + 136) = (int64_t)&g12;
        *(int32_t *)(a1 + 348) = 16;
        *(int32_t *)(a1 + 352) = -1;
        *(int64_t *)(a1 + 144) = (int64_t)&g13;
        *(int16_t *)(a1 + 356) = (int16_t)&g34;
        *(char *)(a1 + 358) = -1;
        *v6 = *v6 & -77 | 72;
        char * v8 = (char *)(a1 + 373); // 0x498879
        *(char *)(a1 + 359) = 0;
        unsigned char v9 = *v8 | 60;
        *v8 = v9;
        v2 = v9;
    }
    // 0x498890
    *(char *)(a1 + 370) = 3;
    if ((int32_t)a4 == 2) {
        // 0x4989d0
        *(char *)(a1 + 371) = 3;
        *(char *)(a1 + 368) = 3;
        *(char *)(a1 + 369) = 3;
        *(int64_t *)(a1 + 24) = (int64_t)&g23;
        *(int64_t *)(a1 + 16) = (int64_t)&g23;
        *(int64_t *)(a1 + 8) = (int64_t)&g23;
        *(int64_t *)a1 = (int64_t)&g23;
        *(int64_t *)(a1 + 232) = (int64_t)&g24;
        *(int64_t *)(a1 + 200) = (int64_t)L"`\b\f";
        *(int64_t *)(a1 + 240) = (int64_t)&g25;
        return (int32_t)&g25 ^ (int32_t)&g25;
    }
    // 0x4988a1
    *(char *)(a1 + 371) = 1;
    *(char *)(a1 + 368) = 3;
    *(char *)(a1 + 369) = 3;
    int64_t result2 = v2; // 0x4988ba
    if ((int32_t)a3 != 1) {
        int64_t v10 = function_49eff0(); // 0x4988c0
        *(int64_t *)(a1 + 24) = v10;
        *(int64_t *)(a1 + 16) = v10;
        *(int64_t *)(a1 + 8) = v10;
        *(int64_t *)a1 = v10;
        *(int64_t *)(a1 + 232) = (int64_t)&g26;
        *(int64_t *)(a1 + 200) = (int64_t)&g15;
        int64_t v11 = function_4ba450(); // 0x4988f0
        *(int32_t *)(a1 + 364) = (int32_t)&g9;
        *(int64_t *)(a1 + 240) = v11;
        result2 = 0;
    }
    // 0x498908
    return result2;
}

// Address range: 0x49ecc0 - 0x49ef31
int64_t function_49ecc0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3; // bp-2152, 0x49ecd7
    if (result == 0) {
        // 0x49eeba
        return 0;
    }
    // 0x49eced
    if (a6 == 0 | *(int64_t *)(result + 32) == 0) {
        // 0x49eeba
        return result;
    }
    int64_t result2 = result; // 0x49ed0d
    if ((int64_t)g29 < a2) {
        // 0x49eeba
        return result2;
    }
    int64_t v2 = (int64_t)&v1 + (int64_t)&g5;
    int32_t v3 = 0; // 0x49ed2c
    int64_t v4 = a6; // 0x49ed2c
    int64_t v5; // 0x49ecc0
    int64_t v6; // 0x49ecc0
    int64_t v7; // 0x49ecc0
    int64_t v8; // 0x49eee7
    while (true) {
        int64_t v9 = v4;
        v3++;
        int64_t str; // bp-2104, 0x49ecc0
        snprintf((char *)&str, (int32_t)&g2, "%s #%d:\n", (char *)a5, (int64_t)v3);
        int32_t v10; // bp-1080, 0x49ecc0
        function_4a98b0((int64_t *)&v10, &g8, &g16, v9, &str);
        char v11 = v10; // 0x49ed8e
        char v12 = v11; // 0x49eda3
        int64_t v13; // bp-1592, 0x49ecc0
        if (v11 != 0) {
            int64_t v14 = (int64_t)&v10;
            char v15 = v12; // 0x49edb4
            int64_t v16 = v14;
            int64_t v17; // 0x49edb0
            while (v15 != 10) {
                // 0x49edb0
                v17 = v16 + 1;
                v15 = *(char *)v17;
                if (v15 == 0) {
                    // break (via goto) -> 0x49ee19
                    goto lab_0x49ee19;
                }
                v16 = v17;
            }
            uint64_t v18 = v16 - v14 + 1; // 0x49edd0
            int64_t v19 = v18 < 511 ? v18 : 511; // 0x49eddb
            memcpy(&v13, (int64_t *)v14, (int32_t)v19);
            *(char *)(v2 + v19) = 0;
            int64_t v20 = v16 + 1; // 0x49ee09
            char v21 = *(char *)v20; // 0x49ee10
            while (v21 != 0) {
                // 0x49edbd
                v14 = v20;
                v15 = v21;
                v16 = v14;
                while (v15 != 10) {
                    // 0x49edb0
                    v17 = v16 + 1;
                    v15 = *(char *)v17;
                    if (v15 == 0) {
                        // break (via goto) -> 0x49ee19
                        goto lab_0x49ee19;
                    }
                    v16 = v17;
                }
                // 0x49edc1
                v18 = v16 - v14 + 1;
                v19 = v18 < 511 ? v18 : 511;
                memcpy(&v13, (int64_t *)v14, (int32_t)v19);
                *(char *)(v2 + v19) = 0;
                v20 = v16 + 1;
                v21 = *(char *)v20;
            }
        }
      lab_0x49ee19:
        // 0x49ee19
        __asm_rep_stosq_memset((char *)&v13, 0, 9);
        int64_t v22 = v9 + 328; // 0x49ee26
        int64_t v23 = function_4c48b0(v22, &v13); // 0x49ee33
        v5 = (int64_t)&v13;
        if ((int32_t)v23 != 0) {
            int64_t v24 = *(int64_t *)(v9 + (int64_t)&g4); // 0x49ef0d
            v4 = v24;
            result2 = v22;
            if (v24 == 0) {
                // break -> 0x49eeba
                break;
            }
        } else {
            while (true) {
              lab_0x49ee40:
                // 0x49ee40
                v6 = v5;
                int32_t * v25 = (int32_t *)v6; // 0x49ee40
                v7 = 0;
                if (*v25 == 0) {
                    // break -> 0x49eeaa
                    break;
                }
                int64_t v26 = *(int64_t *)(v6 + 8); // 0x49ee48
                int64_t str2; // bp-2120, 0x49ecc0
                snprintf((char *)&str2, 16, "%s%s", "crt->", (char *)v26);
                v8 = &str2;
                result2 = 1;
                switch (*v25) {
                    case 1: {
                        return result2;
                    }
                    case 2: {
                        int64_t v27 = *(int64_t *)(v6 + 16); // 0x49eed0
                        v8 = function_49ebd0(result, a2 & 0xffffffff, v1, (int32_t)a4, &str2, v27, 0);
                        goto lab_0x49ee9f;
                    }
                    default: {
                        goto lab_0x49ee9f;
                    }
                }
            }
          lab_0x49eeaa:;
            int64_t v28 = *(int64_t *)(v9 + (int64_t)&g4); // 0x49eeaa
            v4 = v28;
            result2 = v7;
            if (v28 == 0) {
                // break -> 0x49eeba
                break;
            }
        }
    }
    // 0x49eeba
    return result2;
  lab_0x49ee9f:;
    int64_t v29 = v6 + 24; // 0x49ee9f
    v5 = v29;
    v7 = v8;
    int64_t v30; // bp-1520, 0x49ecc0
    if (v29 == (int64_t)&v30) {
        // break -> 0x49eeaa
        goto lab_0x49eeaa;
    }
    goto lab_0x49ee40;
}

// Address range: 0x4c03a0 - 0x4c05fd
int64_t function_4c03a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 & 0xffffffff; // 0x4c03be
    int64_t v2 = function_4b4e10(a2 & 0xffffffff, v1, 1); // 0x4c03cf
    if (v2 == 0 || *(int32_t *)(v2 + 32) != 16) {
        // 0x4c0400
        return 0xffffffec;
    }
    // 0x4c03e7
    function_4b4ef0(a1);
    int64_t v3 = function_4b5690(a1, v2); // 0x4c03f5
    if ((int32_t)v3 != 0) {
        // 0x4c0400
        return v3 & 0xffffffff;
    }
    int64_t v4 = function_4b4f20(a1, a3, v1, 1); // 0x4c042e
    if ((int32_t)v4 != 0) {
        // 0x4c0400
        return v4 & 0xffffffff;
    }
    int64_t v5 = 0; // bp-64, 0x4c044b
    int32_t v6 = 0; // bp-56, 0x4c0454
    int64_t v7 = function_4b5070(a1, (int64_t *)&v6, 16, (int64_t *)&v6, &v5); // 0x4c0469
    int64_t result = v7 & 0xffffffff; // 0x4c0470
    if ((int32_t)v7 != 0) {
        // 0x4c0400
        return result;
    }
    // 0x4c0474
    int32_t v8; // 0x4c03a0
    int64_t v9 = 0x100000000 * (int64_t)(256 * v8 & 0xff00 | v8 % 256 | 0x10000 * v8 & 0xff0000 | 0x1000000 * v6) | (int64_t)(v8 % 256 | 256 * v8 & 0xff00 | 0x1000000 * v8 | 0x10000 * v8 & 0xff0000); // 0x4c04d5
    *(int64_t *)(a1 + 280) = v9;
    int64_t v10 = 0x100000000 * (int64_t)(0x10000 * v8 & 0xff0000 | v8 % 256 | 256 * v8 & 0xff00) | (int64_t)(v8 % 256 | 256 * v8 & 0xff00 | 0x1000000 * v8 | 0x10000 * v8 & 0xff0000); // 0x4c051d
    *(int64_t *)(a1 + 152) = v10;
    int64_t v11 = function_4af830(2); // 0x4c0527
    if ((int32_t)v11 != 0) {
        // 0x4c0400
        return result;
    }
    int64_t v12 = a1 + 216; // 0x4c0534
    *(int64_t *)v12 = 0;
    int64_t v13 = a1 + 88; // 0x4c053f
    *(int64_t *)v13 = 0;
    int64_t v14 = v11 & -256 | 4; // 0x4c054c
    int32_t v15 = 3; // 0x4c054c
    int64_t v16 = v9; // 0x4c054c
    int64_t v17 = 0x8000000000000000 * v16 | v10 / 2; // 0x4c0564
    v16 = -0x1f00000000000000 * (v10 % 2) ^ v16 / 2;
    v15--;
    int64_t v18 = 0x100000000 * v14 >> 29; // 0x4c057f
    *(int64_t *)(v18 + v13) = v17;
    *(int64_t *)(v18 + v12) = v16;
    v14 = (int32_t)v14 >> 1;
    int64_t v19 = 2; // 0x4c058c
    while (v15 != 0) {
        uint64_t v20 = v17;
        v17 = 0x8000000000000000 * v16 | v20 / 2;
        v16 = -0x1f00000000000000 * (v20 % 2) ^ v16 / 2;
        v15--;
        v18 = 0x100000000 * v14 >> 29;
        *(int64_t *)(v18 + v13) = v17;
        *(int64_t *)(v18 + v12) = v16;
        v14 = (int32_t)v14 >> 1;
        v19 = 2;
    }
    int64_t v21 = (0x100000000 * v19 >> 29) + a1;
    int64_t v22 = 0;
    int64_t v23 = 8 * v22; // 0x4c05cb
    int64_t v24 = v23 + a1;
    int64_t v25 = *(int64_t *)(v24 + 224); // 0x4c05cb
    int64_t v26 = v23 + v21;
    *(int64_t *)(v26 + 224) = v25 ^ *(int64_t *)(v21 + 216);
    int64_t v27 = *(int64_t *)(v24 + 96); // 0x4c05db
    *(int64_t *)(v26 + 96) = v27 ^ *(int64_t *)(v21 + 88);
    int64_t v28 = v22 + 1; // 0x4c05ee
    while (v19 > (v22 + 2 & 0xffffffff)) {
        // 0x4c05c8
        v22 = v28;
        v23 = 8 * v22;
        v24 = v23 + a1;
        v25 = *(int64_t *)(v24 + 224);
        v26 = v23 + v21;
        *(int64_t *)(v26 + 224) = v25 ^ *(int64_t *)(v21 + 216);
        v27 = *(int64_t *)(v24 + 96);
        *(int64_t *)(v26 + 96) = v27 ^ *(int64_t *)(v21 + 88);
        v28 = v22 + 1;
    }
    int32_t v29 = 2; // 0x4c05f2
    v19 = 2 * v19 & 0xfffffffc;
    int32_t v30 = v29; // 0x4c05f6
    while (v29 != 0) {
        // 0x4c05a0
        v21 = (0x100000000 * v19 >> 29) + a1;
        v22 = 0;
        v23 = 8 * v22;
        v24 = v23 + a1;
        v25 = *(int64_t *)(v24 + 224);
        v26 = v23 + v21;
        *(int64_t *)(v26 + 224) = v25 ^ *(int64_t *)(v21 + 216);
        v27 = *(int64_t *)(v24 + 96);
        *(int64_t *)(v26 + 96) = v27 ^ *(int64_t *)(v21 + 88);
        v28 = v22 + 1;
        while (v19 > (v22 + 2 & 0xffffffff)) {
            // 0x4c05c8
            v22 = v28;
            v23 = 8 * v22;
            v24 = v23 + a1;
            v25 = *(int64_t *)(v24 + 224);
            v26 = v23 + v21;
            *(int64_t *)(v26 + 224) = v25 ^ *(int64_t *)(v21 + 216);
            v27 = *(int64_t *)(v24 + 96);
            *(int64_t *)(v26 + 96) = v27 ^ *(int64_t *)(v21 + 88);
            v28 = v22 + 1;
        }
        // 0x4c05f0
        v29 = v30 - 1;
        v19 = 2 * v19 & 0xfffffffc;
        v30 = v29;
    }
    // 0x4c0400
    return result;
}

// Address range: 0x4c5930 - 0x4c5bb2
int64_t function_4c5930(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2; // bp-80, 0x4c594b
    int64_t v2; // bp-88, 0x4c5930
    int64_t v3 = function_4afe70(&v1, a3 + a2, &v2, 48); // 0x4c5962
    if ((int32_t)v3 != 0) {
        // 0x4c5970
        return v3 - (int64_t)(int32_t)"cxa_get_globals_fast" & 0xffffffff;
    }
    int64_t v4 = v2 + v1; // 0x4c5995
    int32_t v5; // bp-92, 0x4c5930
    int64_t v6 = function_4aff10(&v1, v4, (int64_t *)&v5); // 0x4c59a7
    if ((int32_t)v6 != 0) {
        // 0x4c5970
        return v6 - (int64_t)(int32_t)"cxa_get_globals_fast" & 0xffffffff;
    }
    // 0x4c59b0
    if (v5 != 1) {
        // 0x4c5970
        return 0xffffc280;
    }
    int64_t v7 = function_4afe70(&v1, v4, &v2, 4); // 0x4c59ce
    if ((int32_t)v7 != 0) {
        // 0x4c5970
        return v7 - (int64_t)(int32_t)"cxa_get_globals_fast" & 0xffffffff;
    }
    int64_t v8 = a1 + 248; // 0x4c59d7
    int64_t v9 = function_4b0fc0(v8, v1, v2); // 0x4c59eb
    int64_t v10 = v9; // 0x4c59f2
    if ((int32_t)v9 != 0) {
        goto lab_0x4c5aa0;
    } else {
        int64_t v11 = v2 + v1; // 0x4c59fd
        v1 = v11;
        if (v4 == v11) {
            goto lab_0x4c5a54;
        } else {
            int64_t v12 = function_4afe70(&v1, v4, &v2, 160); // 0x4c5a1e
            int32_t v13 = v12; // 0x4c5a23
            if (v13 == 0) {
                int64_t result = v1; // 0x4c5ab5
                unsigned char v14 = *(char *)result; // 0x4c5aba
                int32_t v15 = v14; // bp-72, 0x4c5ac8
                if (v14 != 48) {
                    // 0x4c5970
                    return result;
                }
                int64_t v16 = v2 + result; // 0x4c5ac0
                int64_t v17; // bp-64, 0x4c5930
                int64_t v18 = function_4afe70(&v1, v16, &v17, (int64_t)v14); // 0x4c5adf
                int32_t v19 = v18; // 0x4c5ae4
                if (v19 != 0) {
                    uint32_t v20 = v19 - (int32_t)"cxa_get_globals_fast"; // 0x4c5b90
                    if (v20 != 0) {
                        // 0x4c5a87
                        function_4ba790(a1);
                        // 0x4c5970
                        return (int64_t)v20 & 0xffffffff;
                    }
                } else {
                    int64_t v21 = v17 + v1; // 0x4c5af6
                    v1 = v21;
                    if (v16 != v21) {
                        // 0x4c5a87
                        function_4ba790(a1);
                        // 0x4c5970
                        return 0xffffc29a;
                    }
                }
                int64_t v22 = function_4c53c0(&v15, a1); // 0x4c5b11
                if ((int32_t)v22 != 0) {
                    // 0x4c5a87
                    function_4ba790(a1);
                    // 0x4c5970
                    return v22 & 0xffffffff;
                }
                goto lab_0x4c5a30;
            } else {
                // 0x4c5a2b
                v10 = v12;
                if (v13 != -98) {
                    goto lab_0x4c5aa0;
                } else {
                    goto lab_0x4c5a30;
                }
            }
        }
    }
  lab_0x4c5aa0:
    // 0x4c5aa0
    function_4ba790(a1);
    int64_t v23 = v10 & 0xffffffff;
    // 0x4c5970
    return v23 - (int64_t)(int32_t)"cxa_get_globals_fast" & 0xffffffff;
  lab_0x4c5a54:;
    int64_t v24 = function_4bbff0(a1, a1 + 272, v8, a1 + 80, 0, 0); // 0x4c5a6b
    v10 = v24;
    if ((int32_t)v24 != 0) {
        goto lab_0x4c5aa0;
    } else {
        goto lab_0x4c5a74;
    }
  lab_0x4c5a74:;
    int64_t result2 = function_4bbf40(a1, v8); // 0x4c5a7a
    if ((int32_t)result2 == 0) {
        // 0x4c5970
        return result2;
    }
    // 0x4c5a87
    function_4ba790(a1);
    // 0x4c5970
    return result2 & 0xffffffff;
  lab_0x4c5a30:;
    int64_t v25 = function_4afe70(&v1, v4, &v2, 161); // 0x4c5a42
    int32_t v26 = v25; // 0x4c5a47
    if (v26 == 0) {
        int64_t v27 = v2 + v1; // 0x4c5b28
        int64_t v28 = function_4b0080(&v1, v27, &v2); // 0x4c5b3a
        if ((int32_t)v28 != 0) {
            // 0x4c5970
            return v28 - (int64_t)(int32_t)"cxa_get_globals_fast" & 0xffffffff;
        }
        int64_t v29 = v2 + v1; // 0x4c5b4c
        int64_t result3 = 0xffffc29a; // 0x4c5b59
        if (v29 != v27) {
            // 0x4c5970
            return result3;
        }
        int64_t v30 = function_4c52c0(&v1, v29, a1); // 0x4c5b67
        result3 = 0xffffc300;
        switch ((int32_t)v30) {
            case 0: {
                goto lab_0x4c5a74;
            }
            case -0x4e80: {
                goto lab_0x4c5a54;
            }
            default: {
                return result3;
            }
        }
    } else {
        // 0x4c5a4f
        v10 = v25;
        if (v26 != -98) {
            goto lab_0x4c5aa0;
        } else {
            goto lab_0x4c5a54;
        }
    }
}

// Address range: 0x5234b0 - 0x523720
// From class:    std::__cxx11::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_5234b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x5234b0
    __readfsqword(40);
    int64_t v1 = function_556610(); // 0x52350a
    function_554b00(a6 + 208);
    int32_t v2 = 0; // bp-188, 0x52351e
    int64_t v3 = *(int64_t *)(*(int64_t *)(v1 + 16) + 144); // bp-184, 0x523533
    int32_t v4; // bp-192, 0x5234b0
    int64_t result = function_522e70(a1, a2, a3, a4, a5, (int64_t *)&v4, &v3, 7, a6, &v2); // 0x5235fe
    int32_t v5; // 0x5234b0
    if (v2 != 0) {
        int32_t * v6 = (int32_t *)a7; // 0x5236a0
        *v6 = *v6 | 4;
        v5 = v2;
    } else {
        // 0x523631
        *(int32_t *)(a8 + 24) = v4;
        v5 = v4;
    }
    if (result == 0) {
        goto lab_0x523710;
    } else {
        // 0x523646
        if ((int32_t)a3 == -1) {
            uint64_t v7 = *(int64_t *)(result + 24); // 0x5236b4
            if ((int32_t)result == -1 == *(int64_t *)(result + 16) >= v7) {
                goto lab_0x523710;
            } else {
                goto lab_0x52364b;
            }
        } else {
            goto lab_0x52364b;
        }
    }
  lab_0x523710:;
    int64_t result2 = 0; // 0x523716
    if (a4 != 0) {
        // 0x52371c
        return result;
    }
    goto lab_0x523656;
  lab_0x523656:;
    int32_t * v8 = (int32_t *)a7; // 0x523656
    *v8 = *v8 | 2;
    // 0x52365a
    __readfsqword(40);
    return result2;
  lab_0x52364b:
    // 0x52364b
    if (a4 == 0) {
        // 0x52365a
        __readfsqword(40);
        return result;
    }
    // 0x523650
    result2 = result;
    if ((int32_t)a5 == -1) {
        // 0x5236c0
        result2 = result;
        if (*(int64_t *)(a4 + 16) >= *(int64_t *)(a4 + 24)) {
            // 0x5236cd
            result2 = result;
            if (v5 == -1) {
                // 0x52365a
                __readfsqword(40);
                return result;
            }
        }
    }
    goto lab_0x523656;
}

// Address range: 0x536820 - 0x536a7b
// From class:    std::__cxx11::time_get_byname<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_536820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x536820
    __readfsqword(40);
    int64_t v1 = function_50c440(); // 0x53687a
    function_50ab00(a6 + 208);
    int32_t v2 = 0; // bp-188, 0x53688e
    int64_t v3 = *(int64_t *)(*(int64_t *)(v1 + 16) + 144); // bp-184, 0x5368a3
    int32_t v4; // bp-192, 0x536820
    int64_t result = function_536200(a1, a2, a3, a4, a5, (int64_t *)&v4, &v3, 7, a6, &v2); // 0x53696e
    if (v2 != 0) {
        int32_t * v5 = (int32_t *)a7; // 0x536a10
        *v5 = *v5 | 4;
        if (result != 0) {
            goto lab_0x5369b2;
        } else {
            goto lab_0x536a19;
        }
    } else {
        // 0x5369a1
        *(int32_t *)(a8 + 24) = v4;
        if (result == 0) {
            goto lab_0x536a19;
        } else {
            goto lab_0x5369b2;
        }
    }
  lab_0x5369b2:
    if ((int32_t)a3 == -1) {
        uint64_t v6 = *(int64_t *)(result + 16); // 0x536a50
        int64_t v7 = result; // 0x536a58
        if (v6 < *(int64_t *)(result + 24)) {
            // 0x536a5a
            v7 = (int64_t)*(int32_t *)v6;
        }
        // 0x536a5c
        if ((int32_t)v7 == -1) {
            goto lab_0x536a19;
        } else {
            goto lab_0x5369bb;
        }
    } else {
        goto lab_0x5369bb;
    }
  lab_0x536a19:;
    int64_t result2 = 0; // 0x536a1f
    int64_t result4; // 0x536820
    char v8; // 0x536820
    if (a4 == 0) {
        goto lab_0x5369c6;
    } else {
        // 0x536a21
        result4 = 0;
        v8 = 1;
        if ((int32_t)a5 != -1) {
            // 0x5369ca
            __readfsqword(40);
            return 0;
        }
        goto lab_0x536a33;
    }
  lab_0x5369bb:
    // 0x5369bb
    if (a4 == 0) {
        // 0x5369ca
        __readfsqword(40);
        return result;
    }
    // 0x5369c0
    result2 = result;
    result4 = result;
    v8 = 0;
    if ((int32_t)a5 == -1) {
        goto lab_0x536a33;
    } else {
        goto lab_0x5369c6;
    }
  lab_0x5369c6:;
    int32_t * v9 = (int32_t *)a7; // 0x5369c6
    *v9 = *v9 | 2;
    // 0x5369ca
    __readfsqword(40);
    return result2;
  lab_0x536a33:;
    uint64_t result3 = *(int64_t *)(a4 + 16); // 0x536a33
    if (result3 >= *(int64_t *)(a4 + 24)) {
        // 0x536a80
        return result3;
    }
    // 0x536a3d
    result2 = result4;
    if (v8 != (char)(*(int32_t *)result3 == -1)) {
        // 0x5369ca
        __readfsqword(40);
        return result4;
    }
    goto lab_0x5369c6;
}

// Address range: 0x556f40 - 0x5571b9
int64_t function_556f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5 - a6; // 0x556f50
    uint32_t v2 = *(int32_t *)(a1 + 24) & 176; // 0x556f60
    int64_t result2 = v2; // 0x556f40
    int64_t v3 = a3; // 0x556f40
    int64_t v4 = a4; // 0x556f40
    int64_t v5 = a6; // 0x556f40
    char * v6; // 0x556f40
    char v7; // 0x556f40
    char v8; // 0x556f40
    char v9; // 0x556f40
    int64_t v10; // 0x556f40
    int64_t v11; // 0x556f40
    int64_t v12; // 0x55700b
    switch ((char)v2) {
        case 32: {
            int64_t dest_mem = 32; // 0x556fd3
            if (a6 != 0) {
                // 0x5570a0
                dest_mem = (int64_t)memcpy((int64_t *)a3, (int64_t *)a4, (int32_t)a6);
            }
            // 0x556fd9
            if (v1 != 0) {
                // 0x556fde
                return (int64_t)memset((void *)(int64_t)((int64_t *)(a6 + a3)), 0x1000000 * (int32_t)a2 >> 24, (int32_t)v1);
            }
            // 0x556f80
            return dest_mem;
        }
        case 16: {
            char v13 = a4;
            v12 = function_554b00(a1 + 208);
            char * v14 = (char *)(v12 + 56); // 0x557010
            if (*v14 == 0) {
                // 0x5570c0
                function_54d560(v12);
                if (*(int64_t *)(*(int64_t *)v12 + 48) != g22) {
                    // 0x556f80
                    return 45;
                }
                // 0x5570e9
                v11 = 45;
                if (v13 == 45) {
                    goto lab_0x557088;
                } else {
                    // 0x5570f2
                    if (*v14 != 0) {
                        // 0x556f80
                        return 45;
                    }
                    int64_t result = function_552720(v12, 43); // 0x557109
                    v11 = result;
                    if (v13 == (char)result) {
                        goto lab_0x557088;
                    } else {
                        // 0x55711f
                        if (*v14 != 0) {
                            // 0x556f80
                            return result;
                        }
                        int64_t v15 = a6 - 1; // 0x55711f
                        int64_t v16 = function_552720(v12, 48); // 0x55713f
                        result2 = v16;
                        v3 = a3;
                        v4 = a4;
                        v5 = a6;
                        if (v15 < 0 == (-a6 & a6) < 0 == (v15 != 0) == v13 == (char)v16) {
                            // 0x55715d
                            if (*v14 != 0) {
                                goto lab_0x557046;
                            } else {
                                int64_t v17 = function_552720(v12, 120); // 0x557174
                                char * v18 = (char *)(a4 + 1);
                                char v19 = *v18; // 0x557179
                                v6 = v18;
                                v9 = v19;
                                if (v19 == (char)v17) {
                                    goto lab_0x557064;
                                } else {
                                    // 0x55718a
                                    v7 = v19;
                                    if (*v14 != 0) {
                                        goto lab_0x557054;
                                    } else {
                                        int64_t v20 = function_552720(v12, 88); // 0x5571a1
                                        v8 = *v18;
                                        v10 = v20;
                                        goto lab_0x55705c;
                                    }
                                }
                            }
                        } else {
                            goto lab_0x556f76;
                        }
                    }
                }
            } else {
                int64_t v21 = a4 % 256; // 0x557021
                v11 = v21;
                if (*(char *)(v12 + 102) == v13) {
                    goto lab_0x557088;
                } else {
                    // 0x55702c
                    v11 = v21;
                    if (*(char *)(v12 + 100) == v13) {
                        goto lab_0x557088;
                    } else {
                        // 0x557032
                        result2 = v21;
                        v3 = a3;
                        v4 = a4;
                        v5 = a6;
                        if (a6 < 2 | *(char *)(v12 + 105) != v13) {
                            goto lab_0x556f76;
                        } else {
                            goto lab_0x557046;
                        }
                    }
                }
            }
        }
        default: {
            goto lab_0x556f76;
        }
    }
  lab_0x556f76:;
    // 0x556f76
    int64_t * dest_mem2; // 0x556fa9
    if (v1 != 0) {
        int64_t set_mem = (int64_t)memset((void *)(int64_t)((int64_t *)v3), 0x1000000 * (int32_t)a2 >> 24, (int32_t)v1); // 0x556fc2
        if (v5 == 0) {
            // 0x556f80
            return set_mem;
        }
        // 0x556f90
        dest_mem2 = memcpy((int64_t *)(v3 + v1), (int64_t *)v4, (int32_t)v5);
        return (int64_t)dest_mem2;
    }
    // 0x556f7b
    if (v5 != 0) {
        // 0x556f90
        dest_mem2 = memcpy((int64_t *)(v3 + v1), (int64_t *)v4, (int32_t)v5);
        return (int64_t)dest_mem2;
    }
    // 0x556f80
    return result2;
  lab_0x557088:
    // 0x557088
    *(char *)a3 = (char)v11;
    result2 = v11;
    v3 = a3 + 1;
    v4 = a4 + 1;
    v5 = a6 - 1;
    goto lab_0x556f76;
  lab_0x557046:;
    char * v22 = (char *)(a4 + 1);
    char v23 = *v22; // 0x557046
    v7 = v23;
    v6 = v22;
    v9 = v23;
    if (*(char *)(v12 + 177) == v23) {
        goto lab_0x557064;
    } else {
        goto lab_0x557054;
    }
  lab_0x557064:
    // 0x557064
    *(char *)a3 = v9;
    unsigned char v24 = *v6; // 0x557078
    *(char *)(a3 + 1) = v24;
    result2 = v24;
    v3 = a3 + 2;
    v4 = a4 + 2;
    v5 = a6 - 2;
    goto lab_0x556f76;
  lab_0x557054:
    // 0x557054
    v8 = v7;
    v10 = (int64_t)*(char *)(v12 + 145);
    goto lab_0x55705c;
  lab_0x55705c:
    // 0x55705c
    result2 = v10;
    v3 = a3;
    v4 = a4;
    v5 = a6;
    if (v8 != (char)v10) {
        goto lab_0x556f76;
    } else {
        // 0x55705c
        v6 = (char *)(a4 + 1);
        v9 = v8;
        goto lab_0x557064;
    }
}

// Address range: 0x5729d0 - 0x572c48
int64_t function_5729d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x5729e4
    int32_t v2 = a1; // 0x5729fd
    *(int32_t *)(a2 + 36) = v2;
    *(int32_t *)(a2 + 40) = v2;
    int64_t * v3 = (int64_t *)(a2 + 16); // 0x572a17
    *v3 = 0;
    *(int32_t *)(a2 + 96) = v2;
    int64_t * v4 = (int64_t *)(a2 + 48); // 0x572a25
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a2 + 64); // 0x572a2d
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a2 + 80); // 0x572a38
    *v6 = 0;
    *(char *)(a2 + 152) = 1;
    int64_t v7; // 0x5729d0
    uint64_t v8 = v7 + 1; // 0x572a53
    int64_t v9 = function_4eec00(v8, a1); // 0x572a57
    int32_t v10; // bp-104, 0x5729d0
    function_52cbf0((int64_t *)&v10, v9, v7, 0);
    int64_t v11 = v10; // 0x572a6f
    int64_t v12; // bp-88, 0x5729d0
    int64_t v13 = (int64_t)&v12; // 0x572a73
    *(char *)(v9 + v7) = 0;
    *v3 = v9;
    if (v11 != v13) {
        // 0x572a8a
        function_4eeb50(v11);
    }
    int64_t v14; // 0x5729d0
    int64_t v15; // 0x5729d0
    int64_t v16; // 0x5729d0
    int64_t v17; // 0x5729d0
    int64_t v18; // 0x5729d0
    int64_t v19; // 0x5729d0
    if (v8 < 0x1fffffffffffffff) {
        int64_t v20 = 4 * v8; // 0x572ab8
        int64_t v21 = function_4eec00(v20, a1); // 0x572ac3
        function_54b780((int64_t *)&v10, v21, v7, 0);
        int64_t v22 = v10; // 0x572adb
        int64_t v23 = v20 - 4;
        *(int32_t *)(v21 + v23) = 0;
        *v4 = v21;
        if (v22 != v13) {
            // 0x572afa
            function_4eeb50(v22);
        }
        int64_t v24 = function_4eec00(v20, a1); // 0x572b2f
        function_54b780((int64_t *)&v10, v24, v7, 0);
        int64_t v25 = v10; // 0x572b47
        *(int32_t *)(v24 + v23) = 0;
        *v5 = v24;
        if (v25 != v13) {
            // 0x572b66
            function_4eeb50(v25);
        }
        int64_t v26 = function_4eec00(v20, a1); // 0x572b9f
        function_54b780((int64_t *)&v10, v26, v7, 0);
        int64_t v27 = v10; // 0x572bb7
        *(int32_t *)(v26 + v23) = 0;
        *v6 = v26;
        if (v27 != v13) {
            // 0x572bd5
            function_4eeb50(v27);
        }
        // 0x572bda
        *(int32_t *)(a2 + 100) = v10;
        *(int32_t *)(a2 + 104) = v2;
        int64_t result = __readfsqword(40) ^ v1; // 0x572bf9
        v19 = v26;
        v17 = a1;
        v15 = v13;
        if (result == 0) {
            // 0x572c04
            return result;
        }
        goto lab_0x572c3a;
    } else {
        // 0x572c13
        v16 = function_208a0(v8, a1);
        v18 = a1;
        v14 = (int64_t)&v10;
        goto lab_0x572c18;
    }
  lab_0x572c3a:
    // 0x572c3a
    __stack_chk_fail();
    v16 = function_208a0(v17, v19);
    v18 = v19;
    v14 = v15;
    goto lab_0x572c18;
  lab_0x572c18:;
    int64_t v28 = v10; // 0x572c18
    int64_t v29 = v14 + 16; // 0x572c1c
    if (v29 != v28) {
        // 0x572c28
        function_4eeb50(v28);
    }
    // 0x572c2d
    _Unwind_Resume((struct _Unwind_Exception *)v16);
    v19 = v18;
    v17 = v16;
    v15 = v29;
    goto lab_0x572c3a;
}

// Address range: 0x572c50 - 0x572ec8
int64_t function_572c50(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x572c64
    int32_t v2 = a1; // 0x572c7d
    *(int32_t *)(a2 + 36) = v2;
    *(int32_t *)(a2 + 40) = v2;
    int64_t * v3 = (int64_t *)(a2 + 16); // 0x572c97
    *v3 = 0;
    *(int32_t *)(a2 + 96) = v2;
    int64_t * v4 = (int64_t *)(a2 + 48); // 0x572ca5
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a2 + 64); // 0x572cad
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a2 + 80); // 0x572cb8
    *v6 = 0;
    *(char *)(a2 + 152) = 1;
    int64_t v7; // 0x572c50
    uint64_t v8 = v7 + 1; // 0x572cd3
    int64_t v9 = function_4eec00(v8, a1); // 0x572cd7
    int32_t v10; // bp-104, 0x572c50
    function_52cbf0((int64_t *)&v10, v9, v7, 0);
    int64_t v11 = v10; // 0x572cef
    int64_t v12; // bp-88, 0x572c50
    int64_t v13 = (int64_t)&v12; // 0x572cf3
    *(char *)(v9 + v7) = 0;
    *v3 = v9;
    if (v11 != v13) {
        // 0x572d0a
        function_4eeb50(v11);
    }
    int64_t v14; // 0x572c50
    int64_t v15; // 0x572c50
    int64_t v16; // 0x572c50
    int64_t v17; // 0x572c50
    int64_t v18; // 0x572c50
    int64_t v19; // 0x572c50
    if (v8 < 0x1fffffffffffffff) {
        int64_t v20 = 4 * v8; // 0x572d38
        int64_t v21 = function_4eec00(v20, a1); // 0x572d43
        function_54b780((int64_t *)&v10, v21, v7, 0);
        int64_t v22 = v10; // 0x572d5b
        int64_t v23 = v20 - 4;
        *(int32_t *)(v21 + v23) = 0;
        *v4 = v21;
        if (v22 != v13) {
            // 0x572d7a
            function_4eeb50(v22);
        }
        int64_t v24 = function_4eec00(v20, a1); // 0x572daf
        function_54b780((int64_t *)&v10, v24, v7, 0);
        int64_t v25 = v10; // 0x572dc7
        *(int32_t *)(v24 + v23) = 0;
        *v5 = v24;
        if (v25 != v13) {
            // 0x572de6
            function_4eeb50(v25);
        }
        int64_t v26 = function_4eec00(v20, a1); // 0x572e1f
        function_54b780((int64_t *)&v10, v26, v7, 0);
        int64_t v27 = v10; // 0x572e37
        *(int32_t *)(v26 + v23) = 0;
        *v6 = v26;
        if (v27 != v13) {
            // 0x572e55
            function_4eeb50(v27);
        }
        // 0x572e5a
        *(int32_t *)(a2 + 100) = v10;
        *(int32_t *)(a2 + 104) = v2;
        int64_t result = __readfsqword(40) ^ v1; // 0x572e79
        v19 = v26;
        v17 = a1;
        v15 = v13;
        if (result == 0) {
            // 0x572e84
            return result;
        }
        goto lab_0x572eba;
    } else {
        // 0x572e93
        v16 = function_208a0(v8, a1);
        v18 = a1;
        v14 = (int64_t)&v10;
        goto lab_0x572e98;
    }
  lab_0x572eba:
    // 0x572eba
    __stack_chk_fail();
    v16 = function_208a0(v17, v19);
    v18 = v19;
    v14 = v15;
    goto lab_0x572e98;
  lab_0x572e98:;
    int64_t v28 = v10; // 0x572e98
    int64_t v29 = v14 + 16; // 0x572e9c
    if (v29 != v28) {
        // 0x572ea8
        function_4eeb50(v28);
    }
    // 0x572ead
    _Unwind_Resume((struct _Unwind_Exception *)v16);
    v19 = v18;
    v17 = v16;
    v15 = v29;
    goto lab_0x572eba;
}
