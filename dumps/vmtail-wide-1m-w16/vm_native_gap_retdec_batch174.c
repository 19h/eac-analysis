/*
 * Targeted RetDec C for native executable gap queue batch 174.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x517e6-0x51b65 rank=121 name=fcn.000517e6 kind=r2_discovered bytes=895 uncovered=895
 *   0x4b9ff0-0x4ba368 rank=122 name=fcn.004b9ff0 kind=r2_discovered bytes=888 uncovered=888
 *   0x595d4-0x5993b rank=123 name=fcn.000595d4 kind=r2_discovered bytes=871 uncovered=871
 *   0x4b87a0-0x4b8b03 rank=124 name=fcn.004b87a0 kind=r2_discovered bytes=867 uncovered=867
 *   0x49a390-0x49a6f1 rank=125 name=fcn.0049a390 kind=r2_discovered bytes=865 uncovered=865
 *   0x4ce580-0x4ce8e1 rank=126 name=fcn.004ce580 kind=r2_discovered bytes=865 uncovered=865
 *   0x3d42c-0x3d788 rank=127 name=fcn.0003d42c kind=r2_discovered bytes=860 uncovered=860
 *   0x51116-0x5146d rank=128 name=fcn.00051116 kind=r2_discovered bytes=855 uncovered=855
 *   0x582b20-0x582e74 rank=129 name=fcn.00582b20 kind=r2_discovered bytes=852 uncovered=852
 *   0x4add30-0x4ae1d2 rank=130 name=fcn.004add30 kind=r2_discovered bytes=1186 uncovered=848
 *   0x4b7e73-0x4b81d6 rank=131 name=fcn.004b7e73 kind=r2_discovered bytes=867 uncovered=845
 *   0x5663d0-0x56671b rank=132 name=fcn.005663d0 kind=r2_discovered bytes=843 uncovered=843
 *   0x4b5070-0x4b53b8 rank=133 name=fcn.004b5070 kind=r2_discovered bytes=840 uncovered=840
 *   0x4ee230-0x4ee571 rank=134 name=sym.ZydisDecoderTreeGetChildNode kind=symbol_named bytes=833 uncovered=833
 *   0x4ca3d0-0x4ca70b rank=135 name=fcn.004ca3d0 kind=r2_discovered bytes=827 uncovered=827
 *   0x418c6-0x41bfb rank=136 name=fcn.000418c6 kind=r2_discovered bytes=821 uncovered=821
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
extern int g32;
extern int g33;
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
extern int g60;
extern int g61;
extern int g62;
extern int g63;
extern int g64;
extern int g65;
extern int g66;
extern int g67;
extern int g68;
extern int g69;
extern int g70;
extern int g71;
extern int g72;
extern int g73;
extern int g74;
extern int g75;
extern int g76;
extern int g77;
extern int g78;
extern int g79;
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
int writev(int fd, const struct iovec *iov, int iovcnt);
int epoll_create(int size);
int epoll_ctl(int epfd, int op, int fd, struct epoll_event *event);
int epoll_wait(int epfd, struct epoll_event *events, int maxevents, int timeout);
int close(int fd);
int64_t blake3_hasher_finalize_seek();
int ioctl(int fd, unsigned long request, ...);
int poll(struct pollfd *fds, unsigned long nfds, int timeout);
int gettimeofday(struct timeval *tv, void *tz);
int clock_gettime(int clk_id, struct timespec *tp);
int64_t sysconf(int name);
int64_t syscall(int64_t number, ...);
int mprotect(void *addr, size_t len, int prot);
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

int64_t function_1ff50();
int64_t function_20550();
int64_t function_24ded();
int64_t function_2508e();
int64_t function_250b0();
int64_t function_25622();
int64_t function_2562c();
int64_t function_25c34();
int64_t function_29c3a();
int64_t function_29cea();
int64_t function_29ef7();
int64_t function_35c52();
int64_t function_35fcc();
int64_t function_360a0();
int64_t function_3629a();
int64_t function_36b3c();
int64_t function_36ff8();
int64_t function_3c9ec();
int64_t function_3ce78();
int64_t function_3d42c(int64_t a1, int64_t a2);
int64_t function_3dffc();
int64_t function_3e19c();
int64_t function_413fd();
int64_t function_41448();
int64_t function_418c6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_48bde0();
int64_t function_48d90f();
int64_t function_48d92a();
int64_t function_48e347();
int64_t function_48e641();
int64_t function_48eb2b();
int64_t function_498d40();
int64_t function_49a390(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49ecc0();
int64_t function_4a8c6();
int64_t function_4ad930();
int64_t function_4adc80();
int64_t function_4add10();
int64_t function_4add30(int64_t * a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_4ae080(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4af830();
int64_t function_4afac0();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b09d0();
int64_t function_4b0ac0();
int64_t function_4b0d80();
int64_t function_4b0f10();
int64_t function_4b0fa0();
int64_t function_4b1080();
int64_t function_4b1220();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1ac0();
int64_t function_4b26c0();
int64_t function_4b2d10();
int64_t function_4b38b0();
int64_t function_4b3cf0();
int64_t function_4b5070(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_4b6ba0();
int64_t function_4b6c50();
int64_t function_4b7490();
int64_t function_4b7810();
int64_t function_4b7de8();
int64_t function_4b7e70();
int64_t function_4b7e73(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4b81c0(int64_t a1, int64_t a2);
int64_t function_4b87a0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4b95a0();
int64_t function_4b9df0();
int64_t function_4b9ff0(int64_t a1, int64_t a2, uint64_t nmemb);
int64_t function_4c0830();
int64_t function_4c14d0();
int64_t function_4c1690();
int64_t function_4c16b0();
int64_t function_4c1770();
int64_t function_4c1820();
int64_t function_4c1850();
int64_t function_4c1880();
int64_t function_4c1d00();
int64_t function_4c8790();
int64_t function_4c8fa0();
int64_t function_4c9080();
int64_t function_4ca3d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint32_t a8, int32_t a9, int64_t a10);
int64_t function_4ce440();
int64_t function_4ce580(uint64_t a1, int64_t a2);
int64_t function_4ee250(int64_t a1, uint64_t a2);
int64_t function_4ee270(int64_t a1, uint64_t a2);
int64_t function_4ee290(int64_t a1, uint64_t a2);
int64_t function_4ee2b0(int64_t a1, uint64_t a2);
int64_t function_4ee2d0(int64_t a1, uint64_t a2);
int64_t function_4ee2f0(int64_t a1, uint64_t a2);
int64_t function_4ee310(int64_t a1, uint64_t a2);
int64_t function_4ee330(int64_t a1, uint64_t a2);
int64_t function_4ee350(int64_t a1, uint64_t a2);
int64_t function_4ee370(int64_t a1, uint64_t a2);
int64_t function_4ee390(int64_t a1, uint64_t a2);
int64_t function_4ee3b0(int64_t a1, uint64_t a2);
int64_t function_4ee3d0(int64_t a1, uint64_t a2);
int64_t function_4ee3f0(int64_t a1, uint64_t a2);
int64_t function_4ee410(int64_t a1, uint64_t a2);
int64_t function_4ee430(int64_t a1, uint64_t a2);
int64_t function_4ee450(int64_t a1, uint64_t a2);
int64_t function_4ee470(int64_t a1, uint64_t a2);
int64_t function_4ee490(int64_t a1, uint64_t a2);
int64_t function_4ee4b0(int64_t a1, uint64_t a2);
int64_t function_4ee4d0(int64_t a1, uint64_t a2);
int64_t function_4ee4f0(int64_t a1, uint64_t a2);
int64_t function_4ee510(int64_t a1, uint64_t a2);
int64_t function_4ee530(int64_t a1, uint64_t a2);
int64_t function_4ee550(int64_t a1, uint64_t a2);
int64_t function_4eea40();
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f0a80();
int64_t function_4f0bc0();
int64_t function_507cc();
int64_t function_50906();
int64_t function_50d5a();
int64_t function_51116(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_517e6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5236c();
int64_t function_52392();
int64_t function_52586();
int64_t function_525f0();
int64_t function_52768();
int64_t function_52876();
int64_t function_5289c();
int64_t function_52a5a();
int64_t function_52d3e();
int64_t function_52f2a();
int64_t function_52fbc();
int64_t function_566390();
int64_t function_5663d0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_573920();
int64_t function_5784e0();
int64_t function_582980();
int64_t function_582a30();
int64_t function_582b20(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_592ee();
int64_t function_593ce();
int64_t function_594b8();
int64_t function_595d4(int64_t a1, int64_t * a2);
int64_t function_59a64();
int64_t function_59b19();
int64_t function_59c58();
int64_t function_59cd2();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_78364();

// Address range: 0x3d42c - 0x3d788
// Used cryptographic patterns:
//  - unlzx_table_three (32-bit, little endian)
int64_t function_3d42c(int64_t a1, int64_t a2) {
    int32_t * v1; // 0x3d42c
    int32_t * v2; // 0x3d42c
    int32_t v3; // 0x3d42c
    if ((int32_t)a2 == 0) {
        // 0x3d51c
        function_3ce78();
        int32_t * v4 = (int32_t *)(a1 + 92); // 0x3d54d
        v2 = (int32_t *)(a1 + 96);
        v3 = *v4;
        v1 = v4;
    } else {
        int64_t v5 = 0;
        *(char *)(a1 + (int64_t)&g74 + v5) = 8;
        int64_t v6 = v5 + 1; // 0x3d45b
        while (v5 != 143) {
            // 0x3d44e
            v5 = v6;
            *(char *)(a1 + (int64_t)&g74 + v5) = 8;
            v6 = v5 + 1;
        }
        int64_t v7 = 0;
        *(char *)(a1 + (int64_t)&g74 + 144 + v7) = 9;
        int64_t v8 = v7 + 1; // 0x3d46e
        while (v7 != 111) {
            // 0x3d45f
            v7 = v8;
            *(char *)(a1 + (int64_t)&g74 + 144 + v7) = 9;
            v8 = v7 + 1;
        }
        for (int64_t i = 0; i < 24; i++) {
            // 0x3d472
            *(char *)(a1 + (int64_t)&g74 + 256 + i) = 7;
        }
        for (int64_t i = 0; i < 8; i++) {
            // 0x3d485
            *(char *)(a1 + (int64_t)&g74 + 280 + i) = 8;
        }
        int128_t v9 = __asm_movaps(g23); // 0x3d496
        __asm_movups(*(int128_t *)(a1 + (int64_t)&g76), v9);
        __asm_movups(*(int128_t *)(a1 + (int64_t)&g77), v9);
        function_3c9ec(a1, 0, 288, 15, 1);
        function_3c9ec(a1, 1, 32, 15, 1);
        int32_t * v10 = (int32_t *)(a1 + 92);
        uint32_t v11 = *v10; // 0x3d4e2
        int32_t * v12 = (int32_t *)(a1 + 96);
        *v12 = 1 << v11 % 32 | *v12;
        int32_t v13 = v11 + 2; // 0x3d4ef
        *v10 = v13;
        v2 = v12;
        v3 = v13;
        v1 = v10;
        if (v13 >= 8) {
            int64_t * v14 = (int64_t *)(a1 + 64); // 0x3d4fb
            uint64_t v15 = *v14; // 0x3d4fb
            if (v15 < *(int64_t *)(a1 + 72)) {
                // 0x3d505
                *v14 = v15 + 1;
                *(char *)v15 = (char)*v12;
            }
            // 0x3d512
            *v12 = *v12 / 256;
            int32_t v16 = *v10 - 8; // 0x3d516
            *v10 = v16;
            v2 = v12;
            v3 = v16;
            v1 = v10;
            while (v16 >= 8) {
                // 0x3d4fb
                v15 = *v14;
                if (v15 < *(int64_t *)(a1 + 72)) {
                    // 0x3d505
                    *v14 = v15 + 1;
                    *(char *)v15 = (char)*v12;
                }
                // 0x3d512
                *v12 = *v12 / 256;
                v16 = *v10 - 8;
                *v10 = v16;
                v2 = v12;
                v3 = v16;
                v1 = v10;
            }
        }
    }
    int32_t * v17 = v2;
    int64_t v18 = a1 + (int64_t)&g78; // 0x3d521
    int64_t * v19 = (int64_t *)(a1 + 48); // 0x3d549
    int32_t v20; // 0x3d42c
    int64_t * v21; // 0x3d42c
    int64_t * v22; // 0x3d42c
    if (*v19 > v18) {
        int64_t v23 = a1 + (int64_t)&g74;
        int64_t v24 = a1 + (int64_t)&g71;
        int64_t * v25 = (int64_t *)(a1 + 64);
        int64_t * v26 = (int64_t *)(a1 + 72);
        int64_t v27 = a1 + (int64_t)&g76;
        int64_t v28 = 1;
        unsigned char v29 = *(char *)v18; // 0x3d559
        int64_t v30 = v18 + (int64_t)(v28 == 1);
        uint64_t v31 = v28 != 1 ? v28 : (int64_t)v29 | 256;
        unsigned char v32 = *(char *)v30; // 0x3d569
        int64_t v33 = v32; // 0x3d569
        int32_t v34 = *v17; // 0x3d571
        int32_t v35; // 0x3d42c
        int32_t v36; // 0x3d42c
        int32_t v37; // 0x3d42c
        int32_t v38; // 0x3d42c
        int32_t v39; // 0x3d42c
        int32_t v40; // 0x3d42c
        uint32_t v41; // 0x3d42c
        uint32_t v42; // 0x3d42c
        uint32_t v43; // 0x3d42c
        uint32_t v44; // 0x3d42c
        uint32_t v45; // 0x3d42c
        int32_t v46; // 0x3d42c
        int32_t v47; // 0x3d42c
        int32_t v48; // 0x3d42c
        int32_t v49; // 0x3d42c
        int32_t v50; // 0x3d42c
        int32_t v51; // 0x3d42c
        int32_t v52; // 0x3d42c
        int32_t v53; // 0x3d42c
        int32_t v54; // 0x3d42c
        int32_t v55; // 0x3d42c
        int64_t v56; // 0x3d42c
        int64_t v57; // 0x3d42c
        int64_t v58; // 0x3d42c
        unsigned char v59; // 0x3d42c
        int64_t v60; // 0x3d42c
        uint16_t v61; // 0x3d6dd
        int64_t v62; // 0x3d6ef
        uint16_t v63; // 0x3d584
        int64_t v64; // 0x3d58c
        int32_t v65; // 0x3d42c
        uint64_t v66; // 0x3d707
        unsigned char v67; // 0x3d5e8
        int32_t v68; // 0x3d5ed
        int32_t v69; // 0x3d42c
        uint64_t v70; // 0x3d5c2
        int32_t v71; // 0x3d722
        uint64_t v72; // 0x3d584
        uint64_t v73; // 0x3d60b
        int32_t v74; // 0x3d5db
        int32_t v75; // 0x3d5b9
        uint64_t v76; // 0x3d641
        int32_t v77; // 0x3d624
        int32_t v78; // 0x3d602
        uint16_t v79; // 0x3d662
        int32_t v80; // 0x3d42c
        int64_t v81; // 0x3d588
        int32_t v82; // 0x3d6a5
        uint64_t v83; // 0x3d683
        uint64_t v84; // 0x3d6bc
        int32_t v85; // 0x3d69c
        int32_t v86; // 0x3d67b
        int32_t v87; // 0x3d6d7
        if (v31 % 2 == 0) {
            // 0x3d6dd
            v61 = *(int16_t *)(2 * v33 + v24);
            v62 = v30 + 1;
            *v1 = v3 + (int32_t)*(char *)(v23 + v33);
            *v17 = (int32_t)v61 << v3 % 32 | v34;
            v45 = *v1;
            v46 = v45;
            v56 = v62;
            if (v45 >= 8) {
                v66 = *v25;
                if (v66 < *v26) {
                    // 0x3d711
                    *v25 = v66 + 1;
                    *(char *)v66 = (char)*v17;
                }
                // 0x3d71e
                *v17 = *v17 / 256;
                v71 = *v1 - 8;
                *v1 = v71;
                v46 = v71;
                v56 = v62;
                while (v71 >= 8) {
                    // 0x3d707
                    v66 = *v25;
                    if (v66 < *v26) {
                        // 0x3d711
                        *v25 = v66 + 1;
                        *(char *)v66 = (char)*v17;
                    }
                    // 0x3d71e
                    *v17 = *v17 / 256;
                    v71 = *v1 - 8;
                    *v1 = v71;
                    v46 = v71;
                    v56 = v62;
                }
            }
        } else {
            // 0x3d57d
            v63 = *(int16_t *)(v30 + 1);
            v64 = (int64_t)*(int16_t *)(2 * v33 + (int64_t)&g22);
            v65 = (int32_t)*(int16_t *)(2 * v64 + v24) << v3 % 32 | v34;
            *v1 = v3 + (int32_t)*(char *)(v23 + v64);
            *v17 = v65;
            v41 = *v1;
            v47 = v65;
            v36 = v41;
            v35 = v65;
            if (v41 >= 8) {
                v53 = v47;
                v70 = *v25;
                v48 = v53;
                if (v70 < *v26) {
                    // 0x3d5cc
                    *v25 = v70 + 1;
                    *(char *)v70 = (char)v53;
                    v48 = *v17;
                }
                // 0x3d5d7
                *v17 = v48 / 256;
                v74 = *v1 - 8;
                *v1 = v74;
                v75 = *v17;
                v36 = v74;
                v35 = v75;
                while (v74 >= 8) {
                    // 0x3d5c2
                    v53 = v75;
                    v70 = *v25;
                    v48 = v53;
                    if (v70 < *v26) {
                        // 0x3d5cc
                        *v25 = v70 + 1;
                        *(char *)v70 = (char)v53;
                        v48 = *v17;
                    }
                    // 0x3d5d7
                    *v17 = v48 / 256;
                    v74 = *v1 - 8;
                    *v1 = v74;
                    v75 = *v17;
                    v36 = v74;
                    v35 = v75;
                }
            }
            // 0x3d5e1
            v67 = *(char *)(v33 + (int64_t)&g21);
            v68 = *(int32_t *)(4 * (int64_t)v67 + (int64_t)&unlzx_table_three_at_584640);
            v69 = (v68 & (int32_t)v32) << v36 % 32 | v35;
            *v1 = v36 + (int32_t)v67;
            *v17 = v69;
            v42 = *v1;
            v49 = v69;
            v38 = v42;
            v37 = v69;
            if (v42 >= 8) {
                v54 = v49;
                v73 = *v25;
                v50 = v54;
                if (v73 < *v26) {
                    // 0x3d615
                    *v25 = v73 + 1;
                    *(char *)v73 = (char)v54;
                    v50 = *v17;
                }
                // 0x3d620
                *v17 = v50 / 256;
                v77 = *v1 - 8;
                *v1 = v77;
                v78 = *v17;
                v38 = v77;
                v37 = v78;
                while (v77 >= 8) {
                    // 0x3d60b
                    v54 = v78;
                    v73 = *v25;
                    v50 = v54;
                    if (v73 < *v26) {
                        // 0x3d615
                        *v25 = v73 + 1;
                        *(char *)v73 = (char)v54;
                        v50 = *v17;
                    }
                    // 0x3d620
                    *v17 = v50 / 256;
                    v77 = *v1 - 8;
                    *v1 = v77;
                    v78 = *v17;
                    v38 = v77;
                    v37 = v78;
                }
            }
            // 0x3d62a
            v72 = (int64_t)v63;
            if (v63 < 512) {
                // 0x3d632
                v58 = v72 + (int64_t)&g20;
                v60 = v72 + (int64_t)&g19;
            } else {
                // 0x3d641
                v76 = v72 / 256;
                v58 = v76 + (int64_t)&g18;
                v60 = v76 + (int64_t)&g17;
            }
            // 0x3d659
            v57 = (int64_t)*(char *)v58;
            v59 = *(char *)v60;
            v79 = *(int16_t *)(a1 + (int64_t)&g73 + 2 * v57);
            v80 = (int32_t)v79 << v38 % 32 | v37;
            *v1 = v38 + (int32_t)*(char *)(v27 + v57);
            *v17 = v80;
            v43 = *v1;
            v51 = v80;
            v40 = v43;
            v39 = v80;
            if (v43 >= 8) {
                v55 = v51;
                v83 = *v25;
                v52 = v55;
                if (v83 < *v26) {
                    // 0x3d68d
                    *v25 = v83 + 1;
                    *(char *)v83 = (char)v55;
                    v52 = *v17;
                }
                // 0x3d698
                *v17 = v52 / 256;
                v85 = *v1 - 8;
                *v1 = v85;
                v86 = *v17;
                v40 = v85;
                v39 = v86;
                while (v85 >= 8) {
                    // 0x3d683
                    v55 = v86;
                    v83 = *v25;
                    v52 = v55;
                    if (v83 < *v26) {
                        // 0x3d68d
                        *v25 = v83 + 1;
                        *(char *)v83 = (char)v55;
                        v52 = *v17;
                    }
                    // 0x3d698
                    *v17 = v52 / 256;
                    v85 = *v1 - 8;
                    *v1 = v85;
                    v86 = *v17;
                    v40 = v85;
                    v39 = v86;
                }
            }
            // 0x3d6a2
            v81 = v30 + 3;
            v82 = *(int32_t *)(4 * (int64_t)v59 + (int64_t)&unlzx_table_three_at_584640);
            *v1 = v40 + (int32_t)v59;
            *v17 = (v82 & (int32_t)v63) << v40 % 32 | v39;
            v44 = *v1;
            v46 = v44;
            v56 = v81;
            if (v44 >= 8) {
                v84 = *v25;
                if (v84 < *v26) {
                    // 0x3d6c6
                    *v25 = v84 + 1;
                    *(char *)v84 = (char)*v17;
                }
                // 0x3d6d3
                *v17 = *v17 / 256;
                v87 = *v1 - 8;
                *v1 = v87;
                v46 = v87;
                v56 = v81;
                while (v87 >= 8) {
                    // 0x3d6bc
                    v84 = *v25;
                    if (v84 < *v26) {
                        // 0x3d6c6
                        *v25 = v84 + 1;
                        *(char *)v84 = (char)*v17;
                    }
                    // 0x3d6d3
                    *v17 = *v17 / 256;
                    v87 = *v1 - 8;
                    *v1 = v87;
                    v46 = v87;
                    v56 = v81;
                }
            }
        }
        int64_t v88 = v56;
        int32_t v89 = v46; // 0x3d54d
        v22 = v26;
        v21 = v25;
        v20 = v89;
        while (*v19 > v88) {
            // 0x3d556
            v28 = v31 / 2;
            uint32_t v90 = v89;
            v29 = *(char *)v88;
            v30 = v88 + (int64_t)(v28 == 1);
            v31 = v28 != 1 ? v28 : (int64_t)v29 | 256;
            v32 = *(char *)v30;
            v33 = v32;
            v34 = *v17;
            if (v31 % 2 == 0) {
                // 0x3d6dd
                v61 = *(int16_t *)(2 * v33 + v24);
                v62 = v30 + 1;
                *v1 = v90 + (int32_t)*(char *)(v23 + v33);
                *v17 = (int32_t)v61 << v90 % 32 | v34;
                v45 = *v1;
                v46 = v45;
                v56 = v62;
                if (v45 >= 8) {
                    v66 = *v25;
                    if (v66 < *v26) {
                        // 0x3d711
                        *v25 = v66 + 1;
                        *(char *)v66 = (char)*v17;
                    }
                    // 0x3d71e
                    *v17 = *v17 / 256;
                    v71 = *v1 - 8;
                    *v1 = v71;
                    v46 = v71;
                    v56 = v62;
                    while (v71 >= 8) {
                        // 0x3d707
                        v66 = *v25;
                        if (v66 < *v26) {
                            // 0x3d711
                            *v25 = v66 + 1;
                            *(char *)v66 = (char)*v17;
                        }
                        // 0x3d71e
                        *v17 = *v17 / 256;
                        v71 = *v1 - 8;
                        *v1 = v71;
                        v46 = v71;
                        v56 = v62;
                    }
                }
            } else {
                // 0x3d57d
                v63 = *(int16_t *)(v30 + 1);
                v64 = (int64_t)*(int16_t *)(2 * v33 + (int64_t)&g22);
                v65 = (int32_t)*(int16_t *)(2 * v64 + v24) << v90 % 32 | v34;
                *v1 = v90 + (int32_t)*(char *)(v23 + v64);
                *v17 = v65;
                v41 = *v1;
                v47 = v65;
                v36 = v41;
                v35 = v65;
                if (v41 >= 8) {
                    v53 = v47;
                    v70 = *v25;
                    v48 = v53;
                    if (v70 < *v26) {
                        // 0x3d5cc
                        *v25 = v70 + 1;
                        *(char *)v70 = (char)v53;
                        v48 = *v17;
                    }
                    // 0x3d5d7
                    *v17 = v48 / 256;
                    v74 = *v1 - 8;
                    *v1 = v74;
                    v75 = *v17;
                    v36 = v74;
                    v35 = v75;
                    while (v74 >= 8) {
                        // 0x3d5c2
                        v53 = v75;
                        v70 = *v25;
                        v48 = v53;
                        if (v70 < *v26) {
                            // 0x3d5cc
                            *v25 = v70 + 1;
                            *(char *)v70 = (char)v53;
                            v48 = *v17;
                        }
                        // 0x3d5d7
                        *v17 = v48 / 256;
                        v74 = *v1 - 8;
                        *v1 = v74;
                        v75 = *v17;
                        v36 = v74;
                        v35 = v75;
                    }
                }
                // 0x3d5e1
                v67 = *(char *)(v33 + (int64_t)&g21);
                v68 = *(int32_t *)(4 * (int64_t)v67 + (int64_t)&unlzx_table_three_at_584640);
                v69 = (v68 & (int32_t)v32) << v36 % 32 | v35;
                *v1 = v36 + (int32_t)v67;
                *v17 = v69;
                v42 = *v1;
                v49 = v69;
                v38 = v42;
                v37 = v69;
                if (v42 >= 8) {
                    v54 = v49;
                    v73 = *v25;
                    v50 = v54;
                    if (v73 < *v26) {
                        // 0x3d615
                        *v25 = v73 + 1;
                        *(char *)v73 = (char)v54;
                        v50 = *v17;
                    }
                    // 0x3d620
                    *v17 = v50 / 256;
                    v77 = *v1 - 8;
                    *v1 = v77;
                    v78 = *v17;
                    v38 = v77;
                    v37 = v78;
                    while (v77 >= 8) {
                        // 0x3d60b
                        v54 = v78;
                        v73 = *v25;
                        v50 = v54;
                        if (v73 < *v26) {
                            // 0x3d615
                            *v25 = v73 + 1;
                            *(char *)v73 = (char)v54;
                            v50 = *v17;
                        }
                        // 0x3d620
                        *v17 = v50 / 256;
                        v77 = *v1 - 8;
                        *v1 = v77;
                        v78 = *v17;
                        v38 = v77;
                        v37 = v78;
                    }
                }
                // 0x3d62a
                v72 = (int64_t)v63;
                if (v63 < 512) {
                    // 0x3d632
                    v58 = v72 + (int64_t)&g20;
                    v60 = v72 + (int64_t)&g19;
                } else {
                    // 0x3d641
                    v76 = v72 / 256;
                    v58 = v76 + (int64_t)&g18;
                    v60 = v76 + (int64_t)&g17;
                }
                // 0x3d659
                v57 = (int64_t)*(char *)v58;
                v59 = *(char *)v60;
                v79 = *(int16_t *)(a1 + (int64_t)&g73 + 2 * v57);
                v80 = (int32_t)v79 << v38 % 32 | v37;
                *v1 = v38 + (int32_t)*(char *)(v27 + v57);
                *v17 = v80;
                v43 = *v1;
                v51 = v80;
                v40 = v43;
                v39 = v80;
                if (v43 >= 8) {
                    v55 = v51;
                    v83 = *v25;
                    v52 = v55;
                    if (v83 < *v26) {
                        // 0x3d68d
                        *v25 = v83 + 1;
                        *(char *)v83 = (char)v55;
                        v52 = *v17;
                    }
                    // 0x3d698
                    *v17 = v52 / 256;
                    v85 = *v1 - 8;
                    *v1 = v85;
                    v86 = *v17;
                    v40 = v85;
                    v39 = v86;
                    while (v85 >= 8) {
                        // 0x3d683
                        v55 = v86;
                        v83 = *v25;
                        v52 = v55;
                        if (v83 < *v26) {
                            // 0x3d68d
                            *v25 = v83 + 1;
                            *(char *)v83 = (char)v55;
                            v52 = *v17;
                        }
                        // 0x3d698
                        *v17 = v52 / 256;
                        v85 = *v1 - 8;
                        *v1 = v85;
                        v86 = *v17;
                        v40 = v85;
                        v39 = v86;
                    }
                }
                // 0x3d6a2
                v81 = v30 + 3;
                v82 = *(int32_t *)(4 * (int64_t)v59 + (int64_t)&unlzx_table_three_at_584640);
                *v1 = v40 + (int32_t)v59;
                *v17 = (v82 & (int32_t)v63) << v40 % 32 | v39;
                v44 = *v1;
                v46 = v44;
                v56 = v81;
                if (v44 >= 8) {
                    v84 = *v25;
                    if (v84 < *v26) {
                        // 0x3d6c6
                        *v25 = v84 + 1;
                        *(char *)v84 = (char)*v17;
                    }
                    // 0x3d6d3
                    *v17 = *v17 / 256;
                    v87 = *v1 - 8;
                    *v1 = v87;
                    v46 = v87;
                    v56 = v81;
                    while (v87 >= 8) {
                        // 0x3d6bc
                        v84 = *v25;
                        if (v84 < *v26) {
                            // 0x3d6c6
                            *v25 = v84 + 1;
                            *(char *)v84 = (char)*v17;
                        }
                        // 0x3d6d3
                        *v17 = *v17 / 256;
                        v87 = *v1 - 8;
                        *v1 = v87;
                        v46 = v87;
                        v56 = v81;
                    }
                }
            }
            // 0x3d728
            v88 = v56;
            v89 = v46;
            v22 = v26;
            v21 = v25;
            v20 = v89;
        }
    } else {
        // 0x3d521
        v22 = (int64_t *)(a1 + 72);
        v21 = (int64_t *)(a1 + 64);
        v20 = v3;
    }
    uint16_t v91 = *(int16_t *)(a1 + (int64_t)&g72); // 0x3d72f
    unsigned char v92 = *(char *)(a1 + (int64_t)&g75); // 0x3d736
    *v17 = *v17 | (int32_t)v91 << v20 % 32;
    uint32_t v93 = v20 + (int32_t)v92; // 0x3d743
    *v1 = v93;
    uint64_t v94 = *v21; // 0x3d74d
    uint64_t v95 = *v22; // 0x3d751
    if (v93 < 8) {
        // 0x3d773
        return v94 < v95;
    }
    if (v94 < v95) {
        // 0x3d75c
        *v21 = v94 + 1;
        *(char *)v94 = (char)*v17;
    }
    // 0x3d769
    *v17 = *v17 / 256;
    uint32_t v96 = *v1 - 8; // 0x3d76d
    *v1 = v96;
    uint64_t v97 = *v21; // 0x3d74d
    uint64_t v98 = *v22; // 0x3d751
    int64_t v99 = v97; // 0x3d755
    while (v96 >= 8) {
        // 0x3d757
        if (v97 < v98) {
            // 0x3d75c
            *v21 = v99 + 1;
            *(char *)v99 = (char)*v17;
        }
        // 0x3d769
        *v17 = *v17 / 256;
        v96 = *v1 - 8;
        *v1 = v96;
        v97 = *v21;
        v98 = *v22;
        v99 = v97;
    }
    // 0x3d773
    return v97 < v98;
}

// Address range: 0x418c6 - 0x41bfb
int64_t function_418c6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x418c6
    int64_t v1; // bp-11736, 0x418c6
    int64_t v2 = (int64_t)&v1; // 0x418df
    __readfsqword(40);
    bool v3 = false; // 0x41909
    int64_t v4; // 0x41946
    int32_t v5; // 0x418c6
    int16_t v6; // 0x418c6
    if (a4 == 0 || a3 != 0) {
        int64_t v7 = a2 & 0xffffffff; // 0x418ca
        int64_t v8; // bp-11640, 0x418c6
        int64_t v9 = function_41448(a1, v7, &v8); // 0x41923
        v3 = false;
        if ((int32_t)v9 == 0) {
            goto lab_0x41bce;
        } else {
            // 0x4192c
            v3 = true;
            if (v5 == 0) {
                goto lab_0x41bce;
            } else {
                // 0x41940
                v4 = function_413fd(a1, v7);
                v3 = true;
                if ((int32_t)v4 != 0) {
                    goto lab_0x41bce;
                } else {
                    // 0x41953
                    v3 = false;
                    char v10; // 0x418c6
                    if ((v10 & 33) != 0) {
                        goto lab_0x41bce;
                    } else {
                        if (((int32_t)a5 & (int32_t)&g16) != 0) {
                            goto lab_0x41974;
                        } else {
                            // 0x41963
                            v3 = false;
                            if ((v6 & -9) != 0) {
                                goto lab_0x41bce;
                            } else {
                                goto lab_0x41974;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x41bce;
    }
  lab_0x41bce:;
    int64_t result = v3; // 0x41be2
    if (*(int64_t *)(v2 + (int64_t)&g12) != __readfsqword(40)) {
        // 0x41be4
        __stack_chk_fail();
        result = (int64_t)&g79;
    }
    // 0x41be9
    return result;
  lab_0x41974:;
    // 0x41974
    int32_t v11; // 0x418c6
    uint64_t v12 = (int64_t)v11;
    v3 = false;
    int64_t v13; // 0x418c6
    int64_t v14; // 0x418c6
    int64_t v15; // 0x418c6
    int64_t v16; // 0x418c6
    int64_t * v17; // 0x41a26
    if (v12 > a4) {
        goto lab_0x41bce;
    } else {
        // 0x41979
        v3 = false;
        if (v5 == 0x4034b50 == v4 == 30) {
            int64_t v18 = v5; // 0x419b7
            int64_t v19 = (int64_t)v6 + 30 + (int64_t)v6 + (int64_t)v5; // 0x419c0
            uint64_t v20 = v19 + v18; // 0x419c8
            v3 = false;
            if (v20 > *(int64_t *)(a1 + 80)) {
                goto lab_0x41bce;
            } else {
                if (((int32_t)a5 & (int32_t)&g16) == 0 == (v6 != 0)) {
                    // 0x41a26
                    v17 = (int64_t *)(a1 + 88);
                    int64_t v21 = *v17; // 0x41a26
                    int64_t v22 = *(int64_t *)(v21 + 104); // 0x41a35
                    if (v22 == 0) {
                        if (a6 == 0) {
                            // 0x41a66
                            v3 = false;
                            if (v21 == 0) {
                                goto lab_0x41bce;
                            } else {
                                int64_t v23 = v5 < 0x10000 | v18 == (int64_t)&g1 ? v18 : (int64_t)&g1; // 0x41a76
                                v16 = v23;
                                v13 = v18;
                                v14 = v21;
                                v15 = 0;
                                goto lab_0x41a99;
                            }
                        } else {
                            // 0x41a56
                            v16 = a7;
                            v13 = v18;
                            v14 = a6;
                            v15 = 0;
                            v3 = false;
                            if (a7 == 0) {
                                goto lab_0x41bce;
                            } else {
                                goto lab_0x41a99;
                            }
                        }
                    } else {
                        // 0x41a3e
                        v16 = v18;
                        v13 = 0;
                        v14 = v22 + v19;
                        v15 = v18;
                        goto lab_0x41a99;
                    }
                } else {
                    // 0x419e1
                    v3 = v20 == v12;
                    if (((int32_t)a5 & (int32_t)&g16) == 0 == v20 == v12) {
                        // 0x41a08
                        v3 = function_3dffc(0, a3, (int64_t)v5, v12, 1) == (int64_t)(uint32_t)v5;
                    }
                    goto lab_0x41bce;
                }
            }
        } else {
            goto lab_0x41bce;
        }
    }
  lab_0x41a99:;
    uint64_t v24 = v16;
    int64_t * v25 = (int64_t *)(v2 + 128);
    int64_t * v26 = (int64_t *)(v2 + 56); // 0x41ab7
    int64_t * v27 = (int64_t *)(v2 + 32);
    int64_t v28 = v2 + 8;
    int64_t * v29 = (int64_t *)v28;
    int64_t v30 = v2 + 48;
    int64_t * v31 = (int64_t *)v30;
    int64_t * v32 = (int64_t *)(v2 + 40);
    int64_t v33 = v2 + (int64_t)&g11;
    int64_t v34 = 0; // 0x41aa4
    int64_t v35 = 0;
    int64_t v36 = v13;
    *v26 = *v25 - v34;
    int64_t v37 = v36; // 0x41abc
    int64_t v38 = v35; // 0x41abc
    int64_t v39 = v15; // 0x41abc
    int64_t v40; // 0x418c6
    int64_t v41; // 0x41abe
    if (v15 == 0) {
        // 0x41abe
        v41 = *v17;
        v37 = v36;
        v38 = v35;
        v39 = v15;
        if (*(int64_t *)(v41 + 104) == 0) {
            // 0x41ac9
            *v27 = v36;
            v40 = 0xffffffff;
            if (v41 != (v36 > v24 ? v24 : v36)) {
                goto lab_0x41b9f;
            }
            // 0x41afc
            *v29 = *v29 + v41;
            v37 = v36 - v41;
            v38 = 0;
            v39 = v41;
        }
    }
    // 0x41b0a
    *v31 = v39;
    *v32 = v37;
    *v27 = v38;
    int64_t v42 = v34 + a3; // 0x41b3b
    *(int64_t *)(v2 - 16) = (int64_t)(v37 == 0) + 6 & 0xfffffffe;
    int64_t v43 = *(int64_t *)(v2 + 24); // 0x41b40
    int64_t v44 = function_3e19c(v33, v38 + v14, v30, a3, v42, v43); // 0x41b48
    int64_t v45 = *v31; // 0x41b4d
    int64_t v46 = *v26 + v34; // 0x41b57
    int32_t v47 = v44;
    v34 = v46;
    while (v47 == 1) {
        int64_t v48 = v39 - v45;
        v35 = *v27 + v45;
        v36 = *v32;
        *v26 = *v25 - v34;
        v37 = v36;
        v38 = v35;
        v39 = v48;
        if (v48 == 0) {
            // 0x41abe
            v41 = *v17;
            v37 = v36;
            v38 = v35;
            v39 = v48;
            if (*(int64_t *)(v41 + 104) == 0) {
                // 0x41ac9
                *v27 = v36;
                v40 = 0xffffffff;
                if (v41 != (v36 > v24 ? v24 : v36)) {
                    goto lab_0x41b9f;
                }
                // 0x41afc
                *v29 = *v29 + v41;
                v37 = v36 - v41;
                v38 = 0;
                v39 = v41;
            }
        }
        // 0x41b0a
        *v31 = v39;
        *v32 = v37;
        *v27 = v38;
        v42 = v34 + a3;
        *(int64_t *)(v2 - 16) = (int64_t)(v37 == 0) + 6 & 0xfffffffe;
        v43 = *(int64_t *)(v2 + 24);
        v44 = function_3e19c(v33, v38 + v14, v30, a3, v42, v43);
        v45 = *v31;
        v46 = *v26 + v34;
        v47 = v44;
        v34 = v46;
    }
    // 0x41b72
    v40 = v44;
    if (v47 == 0) {
        // 0x41b76
        v40 = 0xffffffff;
        if (*v25 == v46) {
            int64_t v49 = function_3dffc(0, a3, v46, *(int64_t *)(v2 - 8), v42); // 0x41b8b
            v40 = v49 != (int64_t)*(int32_t *)(v2 + 112) ? 0xffffffff : 0;
        }
    }
  lab_0x41b9f:;
    int64_t v50 = v40; // 0x41ba8
    if (*(int64_t *)(*v17 + 104) == 0) {
        // 0x41baa
        v50 = v40;
        if (*(int64_t *)(v2 + 16) == 0) {
            // 0x41bb2
            *(int32_t *)v28 = (int32_t)v40;
            v50 = v40 & 0xffffffff;
        }
    }
    // 0x41bc4
    v3 = (int32_t)v50 == 0;
    goto lab_0x41bce;
}

// Address range: 0x51116 - 0x5146d
int64_t function_51116(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x51130
    int64_t v2 = 0x100000000 * a3 >> 32; // bp-4204, 0x51143
    if (*(char *)&g57 == 0) {
        // 0x51151
        if ((int32_t)function_20550(&g57) != 0) {
            // 0x51161
            g58 = function_48bde0(0);
            function_1ff50(&g57);
        }
    }
    int64_t v3 = 0; // 0x51182
    int64_t v4; // 0x51116
    int64_t v5; // 0x51116
    int64_t v6; // 0x51116
    int64_t v7; // 0x51116
    int64_t v8; // bp-4176, 0x51116
    int64_t v9; // bp-4184, 0x51116
    int64_t v10; // bp-4192, 0x51116
    int64_t v11; // bp-4200, 0x51116
    int64_t v12; // 0x51116
    int64_t v13; // 0x51287
    if (*(int64_t *)(a2 - 24) == 0) {
        goto lab_0x51440;
    } else {
        int64_t v14 = a4 - 24; // 0x5118c
        char * path; // 0x51116
        if ((char)function_25622(v14) == 0) {
            // 0x511b7
            function_2562c(v14, 0);
            path = NULL;
        } else {
            // 0x5119d
            function_507cc(v14);
            *(int64_t *)a4 = (int64_t)&g69;
            path = (char *)a2;
        }
        // 0x511c2
        int64_t resolved_path; // bp-4160, 0x51116
        __asm_rep_stosd_memset((char *)&resolved_path, 0, (int64_t)&g16);
        char * v15 = realpath(path, (char *)&resolved_path); // 0x511db
        v3 = 0;
        if (v15 == NULL) {
            goto lab_0x51440;
        } else {
            int64_t v16 = function_24ded(&resolved_path); // 0x511ec
            function_25c34(a4, &resolved_path, v16);
            v5 = 0;
            v7 = v16;
            if (g58 == 0) {
                goto lab_0x51319;
            } else {
                // 0x51211
                v11 = (int64_t)&g70;
                int64_t v17 = function_3629a(); // 0x51226
                function_48e347(&v8, a4);
                int64_t v18 = function_594b8(v17, &v8, &v11); // 0x51242
                function_29c3a(&v8);
                v4 = 0;
                v6 = (int64_t)&v11;
                if ((char)v18 == 0) {
                    goto lab_0x51311;
                } else {
                    // 0x51259
                    function_48eb2b(&v9, &v11);
                    function_48eb2b(&v10, (int64_t *)(a1 + 192));
                    int64_t v19 = v9; // 0x51282
                    v13 = *(int64_t *)(v10 - 24);
                    uint64_t v20 = *(int64_t *)(v19 - 24) + v13; // 0x5128f
                    if (v20 > *(int64_t *)(v10 - 16)) {
                        // 0x51298
                        if (v20 > *(int64_t *)(v19 - 16)) {
                            // 0x512aa
                            v12 = function_4a8c6(&v10, &v9, v10, v13);
                            goto lab_0x512b5;
                        } else {
                            // 0x5129e
                            v12 = function_52a5a(&v9, 0, v10, v13);
                            goto lab_0x512b5;
                        }
                    } else {
                        // 0x512aa
                        v12 = function_4a8c6(&v10, &v9, v10, v13);
                        goto lab_0x512b5;
                    }
                }
            }
        }
    }
  lab_0x513fc:
    // 0x513fc
    if ((char)function_48d92a(v5, v9) != 0) {
        // break -> 0x513dc
        goto lab_0x513dc;
    }
    goto lab_0x5140e;
  lab_0x5140e:
    // 0x5140e
    function_2508e(&v9);
    function_2508e(&v10);
    int64_t v21; // 0x51116
    int64_t v22 = function_4f0a80(v21); // 0x51423
    int64_t v23 = (int64_t)&g69; // 0x51430
    int64_t v24 = v22; // 0x51430
    if (v7 == v22) {
        goto lab_0x51436;
    }
    goto lab_0x51349;
  lab_0x51440:;
    int64_t result = v3; // 0x51454
    if (v1 != __readfsqword(40)) {
        // 0x51456
        __stack_chk_fail();
        result = (int64_t)&g79;
    }
    // 0x5145b
    return result;
  lab_0x51319:
    // 0x51319
    function_729b6(&v11, a1 + 56);
    int64_t v27 = function_52586(a1 + 8, (int32_t *)&v2); // 0x5132e
    if (v7 == v27) {
      lab_0x51436:
        // 0x51436
        function_729ce(&v11);
        v3 = 0;
    } else {
        // 0x51349
        v23 = v7;
        v24 = v27;
        while (true) {
          lab_0x51349:
            // 0x51349
            v21 = v24;
            function_5236c(&v8, v21 + 112);
            function_48eb2b(&v10, (int64_t *)(v8 + 8));
            int64_t v25; // bp-4168, 0x51116
            function_35fcc(&v25);
            function_48eb2b(&v8, (int64_t *)(a1 + 192));
            int64_t * v26 = (int64_t *)function_4a8c6(&v8, &v10, v23, v5); // 0x5138e
            v9 = *v26;
            *v26 = (int64_t)&g69;
            function_2508e(&v8);
            if (g58 == 0) {
                // 0x513ca
                if ((char)function_48d90f(v5, v9) != 0) {
                    // break -> 0x513dc
                    break;
                }
                // 0x513bf
                if (g58 != 0) {
                    goto lab_0x513fc;
                } else {
                    goto lab_0x5140e;
                }
            } else {
                goto lab_0x513fc;
            }
        }
      lab_0x513dc:
        // 0x513dc
        function_2508e(&v9);
        function_2508e(&v10);
        function_729ce(&v11);
        v3 = v21 + 40;
    }
    goto lab_0x51440;
  lab_0x51311:
    // 0x51311
    function_29c3a(&v11);
    v5 = v4;
    v7 = v6;
    goto lab_0x51319;
  lab_0x512b5:;
    int64_t * v28 = (int64_t *)v12; // 0x512b5
    v8 = *v28;
    *v28 = (int64_t)&g69;
    int32_t * v29 = (int32_t *)(v13 - 8); // 0x512cf
    if (*v29 < 0) {
        // 0x512d6
        *v29 = 0;
    }
    int64_t v30 = v8; // 0x512dd
    int32_t * v31 = (int32_t *)(v30 - 8); // 0x512e2
    uint32_t v32 = *v31; // 0x512e2
    if (v32 < 0) {
        // 0x512e9
        *v31 = 0;
    }
    // 0x512f0
    *(int64_t *)a4 = v30;
    v8 = v13;
    function_2508e(&v8);
    function_2508e(&v10);
    function_2508e(&v9);
    v4 = v32;
    v6 = v30;
    goto lab_0x51311;
}

// Address range: 0x517e6 - 0x51b65
int64_t function_517e6(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 56; // 0x517f9
    int64_t v2 = __readfsqword(40); // 0x51804
    int64_t v3; // bp-256, 0x517e6
    function_729b6(&v3, v1);
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x51831
    int64_t v5; // 0x517e6
    int64_t v6; // 0x517e6
    int64_t v7; // 0x517e6
    int64_t v8; // 0x517e6
    int64_t v9; // 0x517e6
    int64_t v10; // 0x517e6
    int64_t v11; // 0x517e6
    int64_t v12; // 0x517e6
    int64_t v13; // 0x517e6
    int64_t v14; // bp-152, 0x517e6
    int32_t v15; // bp-160, 0x517e6
    int64_t v16; // bp-248, 0x517e6
    int64_t v17; // 0x518d2
    int64_t v18; // 0x5190c
    int64_t v19; // 0x51924
    uint64_t v20; // 0x5192a
    int64_t * v21; // 0x5194c
    int64_t v22; // 0x517e6
    int64_t v23; // 0x517e6
    int64_t * v24; // 0x517e6
    if (v4 != v1) {
        // 0x51848
        int64_t v25; // bp-176, 0x517e6
        v22 = (int64_t)&v25;
        v23 = a1 + 16;
        v24 = (int64_t *)(a1 + 48);
        v5 = v1;
        while (true) {
          lab_0x51848:
            // 0x51848
            v7 = v6;
            function_5236c((int64_t *)&v15, v5);
            function_52fbc(&v16, (int64_t *)&v15);
            function_35fcc(&v14);
            int64_t * v26 = (int64_t *)v5; // 0x5186c
            int64_t v27 = *v26 + 8; // 0x51870
            function_52d3e(v27);
            int64_t v28 = *(int64_t *)v27; // 0x51879
            int64_t v29 = *v26 + 8; // 0x51885
            int64_t v30 = 4 * *(int64_t *)(v28 - 24) + v28; // 0x51889
            function_52d3e(v29);
            int64_t v31 = *(int64_t *)v29; // 0x51896
            int64_t v32 = v31; // 0x5189e
            if (v30 != v31) {
                int32_t * v33 = (int32_t *)v32; // 0x518a0
                if (*v33 == 92) {
                    // 0x518a5
                    *v33 = 47;
                }
                int64_t v34 = v32 + 4; // 0x518ab
                v32 = v34;
                while (v30 != v34) {
                    // 0x518a0
                    v33 = (int32_t *)v32;
                    if (*v33 == 92) {
                        // 0x518a5
                        *v33 = 47;
                    }
                    // 0x518ab
                    v34 = v32 + 4;
                    v32 = v34;
                }
            }
            int64_t v35 = *v26; // 0x518b1
            int64_t v36 = *(int64_t *)(v35 + 24); // 0x518b5
            int64_t v37 = v35 + 8; // 0x518b9
            function_52d3e(v37);
            v17 = function_50906(*(int64_t *)v37 + 4 * v36);
            int64_t * v38 = (int64_t *)(v36 - 24); // 0x518de
            v9 = v7;
            if (*v38 == 0) {
                goto lab_0x51a5b;
            } else {
                // 0x518e9
                function_5236c((int64_t *)&v15, v22);
                v18 = *v38;
                v19 = (int64_t)v15 + 8;
                v20 = 4 * function_36b3c(a3, 0, "basic_string::insert", v36) + v36;
                function_36b3c(v19, 0, "basic_string::insert", v36);
                function_52876(v19, 0, v18, "basic_string::insert");
                v21 = (int64_t *)v19;
                uint64_t v39 = *v21; // 0x5194c
                if (v20 >= v39) {
                    int64_t v40 = v39 - 24; // 0x5197f
                    if (v20 > 4 * *(int64_t *)v40 + v39) {
                        goto lab_0x51956;
                    } else {
                        // 0x5198d
                        if ((char)function_29cea(v40) != 0) {
                            goto lab_0x51956;
                        } else {
                            int64_t v41 = v20 - *v21; // 0x5199e
                            function_36ff8(v19, 0, 0, v18);
                            uint64_t v42 = *v21; // 0x519b6
                            int64_t v43 = 4 * v18; // 0x519be
                            int64_t v44 = v42 + v41; // 0x519c9
                            int64_t v45 = v44 + v43; // 0x519cd
                            v10 = v43;
                            v12 = v18;
                            v13 = v44;
                            v11 = v42;
                            v8 = v41;
                            if (v42 < v45) {
                                // 0x519d6
                                v10 = v43;
                                v12 = v18;
                                v13 = v45;
                                v11 = v42;
                                v8 = v41;
                                if (v42 > v44) {
                                    int64_t v46 = -v41; // 0x519e3
                                    int64_t v47 = v46 >> 2; // 0x519f5
                                    function_29ef7(v42, v44, v47, v43, v46);
                                    v10 = v43;
                                    v12 = v18 - v47;
                                    v13 = v42 + v43;
                                    v11 = v42 - v41;
                                    v8 = v46;
                                }
                            }
                            goto lab_0x51a1f;
                        }
                    }
                } else {
                    goto lab_0x51956;
                }
            }
        }
    }
  lab_0x51b31:
    // 0x51b31
    function_729ce(&v3);
    int64_t result = 0; // 0x51b4c
    if (v2 != __readfsqword(40)) {
        // 0x51b4e
        __stack_chk_fail();
        result = (int64_t)&g79;
    }
    // 0x51b53
    return result;
  lab_0x51a5b:;
    int32_t v48 = v17; // 0x518d7
    if ((char)function_52f2a(&v16) != 0) {
        goto lab_0x51a83;
    } else {
        // 0x51a6c
        if ((char)function_50d5a(a1, v48, &v16) != 0) {
            goto lab_0x51b20;
        } else {
            goto lab_0x51a83;
        }
    }
  lab_0x51a83:
    // 0x51a83
    v15 = v48;
    function_525f0(&v14, &v16, &v14);
    int64_t v49 = function_4efd30(128); // 0x51aa6
    int32_t * v50 = (int32_t *)(v49 + 32); // 0x51ac0
    *v50 = v15;
    function_525f0((int64_t *)(v49 + 40), &v14, &v14);
    int64_t v51 = *(int64_t *)(a1 + 24);
    int64_t v52 = v23; // 0x51ad7
    int64_t v53 = 1; // 0x51ad7
    if (v51 != 0) {
        uint32_t v54 = *v50; // 0x51adc
        int64_t v55 = v51;
        uint32_t v56 = *(int32_t *)(v55 + 32); // 0x51ad9
        int64_t v57 = *(int64_t *)((v54 >= v56 ? 24 : 16) + v55);
        while (v57 != 0) {
            // 0x51ad9
            v55 = v57;
            v56 = *(int32_t *)(v55 + 32);
            v57 = *(int64_t *)((v54 >= v56 ? 24 : 16) + v55);
        }
        // 0x51af4
        v52 = v55;
        v53 = v23 == v55 | v54 < v56;
    }
    // 0x51b07
    function_4f0bc0(v53, v49, v52);
    *v24 = *v24 + 1;
    function_52392(&v14);
    goto lab_0x51b20;
  lab_0x51956:
    // 0x51956
    function_36ff8(v19, 0, 0, v18);
    int64_t v60 = 0; // 0x51969
    int64_t v61 = v7; // 0x51969
    if (v18 == 0) {
        goto lab_0x51a24;
    } else {
        // 0x5196f
        v10 = v18;
        v12 = v18;
        v13 = v20;
        v11 = *v21;
        v8 = v7;
        goto lab_0x51a1f;
    }
  lab_0x51b20:;
    int64_t v58 = v5 + 16; // 0x51b23
    function_52392(&v16);
    v5 = v58;
    v6 = v9;
    if (v4 == v58) {
        // break -> 0x51b31
        goto lab_0x51b31;
    }
    goto lab_0x51848;
  lab_0x51a24:
    // 0x51a24
    function_35fcc(&v14);
    function_5236c((int64_t *)&v15, v22);
    int64_t * v59 = (int64_t *)((int64_t)v15 + 24); // 0x51a52
    *v59 = *v59 + *(int64_t *)(v60 - 24);
    function_35fcc(&v14);
    v9 = v61;
    goto lab_0x51a5b;
  lab_0x51a1f:
    // 0x51a1f
    function_29ef7(v11, v13, v12, v10, v8);
    v60 = v12;
    v61 = v8;
    goto lab_0x51a24;
}

// Address range: 0x595d4 - 0x5993b
int64_t function_595d4(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = __readfsqword(40); // 0x595e2
    int64_t v3 = 0; // 0x595fa
    struct dirent * v4; // 0x595d4
    struct __dirstream * dirp; // 0x59626
    if (*(int64_t *)(v1 - 24) != 0) {
        // 0x59603
        function_48e641(v1);
        char * name; // bp-72, 0x595d4
        function_48eb2b((int64_t *)&name, a2);
        dirp = opendir(name);
        function_2508e((int64_t *)&name);
        v3 = 0;
        if (dirp != NULL) {
            struct dirent * v5 = readdir(dirp); // 0x5964f
            if (v5 != NULL) {
                int64_t v6 = (int64_t)&name;
                int64_t v7 = a1 + 8;
                v4 = v5;
                int64_t v8; // bp-80, 0x595d4
                int64_t v9; // bp-88, 0x595d4
                int64_t v10; // bp-96, 0x595d4
                int64_t v11; // 0x59783
                int64_t * v12; // 0x595d4
                int64_t * v13; // 0x595d4
                while (true) {
                  lab_0x59660:;
                    int64_t v14 = (int64_t)v4;
                    int64_t v15 = v14 + 19; // 0x59663
                    if ((char)function_78364(v14) == 0) {
                        // 0x59703
                        int64_t v16; // bp-97, 0x595d4
                        function_250b0((int64_t *)&name, v15, &v16);
                        function_48e347(&v8, v6);
                        function_59b19(&v9, v1, &v8);
                        function_593ce(&v10, a1, &v9);
                        function_29c3a(&v9);
                        function_29c3a(&v8);
                        function_2508e((int64_t *)&name);
                        function_592ee(&v9, a1, &v10);
                        v11 = function_4efd30(32);
                        *(int64_t *)v11 = 0;
                        int64_t v17 = v11 + 8; // 0x59792
                        v12 = (int64_t *)v17;
                        function_360a0(v12, &v9);
                        v13 = (int64_t *)(v11 + 16);
                        function_360a0(v13, &v10);
                        int64_t v18 = *v12; // 0x597ba
                        uint64_t v19 = function_4eea40(v18, 4 * *(int64_t *)(v18 - 24), 0xc70f6907); // 0x597cf
                        uint64_t v20 = v19 % *(int64_t *)(a1 + 16);
                        int64_t v21 = function_59c58(v7, v20, v17, v19); // 0x597f7
                        if (v21 != 0) {
                            // 0x5980a
                            if (*(int64_t *)v21 != 0) {
                                // break -> 0x59814
                                break;
                            }
                        }
                        // 0x59896
                        function_59cd2(v7, v20, v19, v11, v19);
                        function_29c3a(&v9);
                        // 0x598b5
                        function_29c3a(&v10);
                        goto lab_0x5964a;
                    } else {
                        char * str = (char *)v15; // 0x5967e
                        if (strcmp(str, ".") == 0) {
                            goto lab_0x5964a;
                        } else {
                            // 0x59687
                            if (strcmp(str, "..") == 0) {
                                goto lab_0x5964a;
                            } else {
                                // 0x5969a
                                function_250b0((int64_t *)&name, v15, &v10);
                                function_48e347(&v8, v6);
                                function_59b19(&v9, v1, &v8);
                                function_29c3a(&v8);
                                function_2508e((int64_t *)&name);
                                function_360a0((int64_t *)&name, &v9);
                                function_595d4(a1, (int64_t *)&name);
                                function_29c3a((int64_t *)&name);
                                // 0x598b5
                                function_29c3a(&v9);
                                goto lab_0x5964a;
                            }
                        }
                    }
                }
                // 0x59814
                function_29c3a(v13);
                function_29c3a(v12);
                function_4eeb50(v11);
                function_59a64((int64_t *)&name, L"Two versions of the same file exist: ", &v10);
                int64_t v22 = function_35c52(&g24); // 0x5984b
                int64_t * v23 = (int64_t *)function_5289c((int64_t *)&name, &g24, v22); // 0x59862
                v8 = *v23;
                *v23 = (int64_t)&g70;
                int64_t * v24 = (int64_t *)(a1 + 64); // 0x59878
                if ((char)function_52768(*v24 - 24) != 0) {
                    // 0x59889
                    *(int32_t *)(*v24 - 8) = 0;
                }
                int64_t v25 = v8; // 0x598cf
                if ((char)function_52768(v8 - 24) != 0) {
                    // 0x598d6
                    *(int32_t *)(v25 - 8) = 0;
                }
                // 0x598dd
                *v24 = v25;
                v8 = *v24;
                function_29c3a(&v8);
                function_29c3a((int64_t *)&name);
                function_29c3a(&v9);
                function_29c3a(&v10);
            }
          lab_0x5990b:
            // 0x5990b
            v3 = closedir(dirp) & -256 | 1;
        }
    }
    int64_t result = v3; // 0x59925
    if (v2 != __readfsqword(40)) {
        // 0x59927
        __stack_chk_fail();
        result = (int64_t)&g79;
    }
    // 0x5992c
    return result;
  lab_0x5964a:;
    struct dirent * v26 = readdir(dirp); // 0x5964f
    v4 = v26;
    if (v26 == NULL) {
        goto lab_0x5990b;
    }
    goto lab_0x59660;
}

// Address range: 0x49a390 - 0x49a6ed
int64_t function_49a390(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x49a390
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g2, "=> write certificate", a6);
    uint32_t result2 = *(int32_t *)(*(int64_t *)*(int64_t *)(a1 + 128) + 24); // 0x49a3c8
    switch (result2) {
        case 11: {
        }
        case 8: {
        }
        case 6: {
        }
        case 5: {
            // 0x49a600
            function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g3, "<= skip write certificate", a6);
            int32_t * v1 = (int32_t *)(a1 + 8); // 0x49a624
            *v1 = *v1 + 1;
            // 0x49a628
            return 0;
        }
    }
    // 0x49a3e9
    int64_t v2; // 0x49a390
    if (*(char *)(a1 + 372) % 2 != 0) {
        int64_t result = *(int64_t *)(a1 + 96); // 0x49a5a8
        if (result == 0) {
            // 0x49a628
            return 0;
        }
        int64_t v3 = *(int64_t *)(result + (int64_t)&g13); // 0x49a5b5
        if (v3 == 0) {
            // 0x49a628
            return result;
        }
        // 0x49a5c5
        v2 = v3;
        if (*(int64_t *)v3 == 0) {
            // 0x49a5cf
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g4, "got no certificate to send", a6);
            // 0x49a628
            return 0xffff8a80;
        }
    } else {
        // 0x49a3fa
        if (*(int32_t *)(a1 + 364) == 0) {
            // 0x49a628
            return result2;
        }
        int64_t v4 = *(int64_t *)(a1 + 96); // 0x49a40a
        if (v4 == 0) {
            // 0x49a6e0
            return *(int64_t *)(a1 + 208);
        }
        int64_t v5 = *(int64_t *)(v4 + (int64_t)&g13);
        v2 = v5;
        if (v5 == 0) {
            // 0x49a6e0
            return *(int64_t *)(a1 + 208);
        }
    }
    int64_t v6 = *(int64_t *)v2; // 0x49a427
    function_49ecc0(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g5, "own certificate", v6);
    int64_t v7 = *(int64_t *)(a1 + 96); // 0x49a44a
    int64_t v8; // 0x49a390
    if (v7 == 0) {
        goto lab_0x49a6c0;
    } else {
        int64_t v9 = *(int64_t *)(v7 + (int64_t)&g13); // 0x49a45b
        v8 = v9;
        if (v9 == 0) {
            goto lab_0x49a6c0;
        } else {
            goto lab_0x49a46b;
        }
    }
  lab_0x49a6c0:;
    int64_t v10 = *(int64_t *)(a1 + 208); // 0x49a6c0
    v8 = v10;
    int64_t v11 = 7; // 0x49a6ca
    int64_t v12 = 0; // 0x49a6ca
    char v13 = 0; // 0x49a6ca
    char v14 = 0; // 0x49a6ca
    if (v10 != 0) {
        goto lab_0x49a46b;
    } else {
        goto lab_0x49a521;
    }
  lab_0x49a46b:;
    int64_t v15 = *(int64_t *)v8; // 0x49a46b
    v11 = 7;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    if (v15 != 0) {
        int64_t v16 = *(int64_t *)(v15 + 8); // 0x49a477
        int64_t v17 = 10; // 0x49a488
        int64_t v18 = v16; // 0x49a488
        if (v16 > (int64_t)&g15) {
          lab_0x49a640_2:
            // 0x49a640
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g6, "certificate too large, %d > %d", v18 + v17);
            return 0xffff8b00;
        }
        int64_t * v19 = (int64_t *)(a1 + 328); // 0x49a4b4
        int64_t v20 = 7; // 0x49a390
        int64_t v21 = v15; // 0x49a4fd
        int64_t v22 = v20 + 3; // 0x49a4be
        *(char *)(*v19 + v20) = (char)(v16 / 0x10000);
        *(char *)(v20 + 1 + *v19) = (char)(v16 / 256);
        *(char *)(v20 + 2 + *v19) = (char)v16;
        int64_t v23 = *(int64_t *)(v21 + 16); // 0x49a4f0
        memcpy((int64_t *)(*v19 + v22), (int64_t *)v23, (int32_t)v16);
        v21 += (int64_t)&g10;
        int64_t v24 = v22 + v16; // 0x49a505
        while (v21 != 0) {
            int64_t v25 = *(int64_t *)(v21 + 8); // 0x49a4a0
            if (v25 > (int64_t)"ocale" - v24) {
                // 0x49a640
                v17 = v24 + 3;
                v18 = v25;
                goto lab_0x49a640_2;
            }
            v22 = v24 + 3;
            *(char *)(*v19 + v24) = (char)(v25 / 0x10000);
            *(char *)(v24 + 1 + *v19) = (char)(v25 / 256);
            *(char *)(v24 + 2 + *v19) = (char)v25;
            v23 = *(int64_t *)(v21 + 16);
            memcpy((int64_t *)(*v19 + v22), (int64_t *)v23, (int32_t)v25);
            v21 += (int64_t)&g10;
            v24 = v22 + v25;
        }
        uint64_t v26 = v24 - 7; // 0x49a50f
        v11 = v24;
        v12 = v24 + 0xfffffff9 & 0xffffffff;
        v13 = v26 / 256;
        v14 = v26 / 0x10000;
    }
    goto lab_0x49a521;
  lab_0x49a521:;
    int64_t * v27 = (int64_t *)(a1 + 328); // 0x49a521
    *(char *)(*v27 + 4) = v14;
    int64_t v28 = *v27; // 0x49a52c
    *(char *)(v28 + 5) = v13;
    int64_t v29 = *v27; // 0x49a539
    *(char *)(v29 + 6) = (char)v12;
    *(int64_t *)(a1 + 344) = v11;
    *(int32_t *)(a1 + 336) = 22;
    *(char *)*v27 = 11;
    int32_t * v30 = (int32_t *)(a1 + 8); // 0x49a55e
    *v30 = *v30 + 1;
    int64_t v31 = function_498d40(a1, v28, v29, (int32_t)v12); // 0x49a562
    int64_t result3 = v31 & 0xffffffff; // 0x49a569
    if ((int32_t)v31 != 0) {
        // 0x49a688
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g7, "mbedtls_ssl_write_record", result3);
        return result3;
    }
    // 0x49a571
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)&g8, "<= write certificate", v6);
    return result3;
}

// Address range: 0x4add30 - 0x4ae078
int64_t function_4add30(int64_t * a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x4add30
    int32_t v1; // 0x4add30
    if (g59 == 0) {
        // 0x4ade38
        function_4ad930();
        int32_t v2 = a3;
        g59 = 1;
        v1 = v2;
        if (v2 != 192) {
            goto lab_0x4add5e;
        } else {
            // 0x4ade54
            *(int32_t *)a1 = 12;
            goto lab_0x4add90;
        }
    } else {
        int32_t v3 = a3;
        v1 = v3;
        if (v3 == 192) {
            // 0x4ade54
            *(int32_t *)a1 = 12;
            goto lab_0x4add90;
        } else {
            goto lab_0x4add5e;
        }
    }
  lab_0x4add5e:
    // 0x4add5e
    switch (v1) {
        case 256: {
            // 0x4ade68
            *(int32_t *)a1 = 14;
            // break -> 0x4add90
            break;
        }
        case 128: {
            // 0x4add88
            *(int32_t *)a1 = 10;
            // break -> 0x4add90
            break;
        }
        default: {
            // 0x4add79
            return 0xffffffe0;
        }
    }
    goto lab_0x4add90;
  lab_0x4add90:;
    int64_t v4 = (int64_t)a1;
    int64_t v5 = v4 + 16; // 0x4add90
    int64_t * v6 = (int64_t *)(v4 + 8); // 0x4add9a
    *v6 = v5;
    if ((int32_t)function_4af830(0x2000000) != 0) {
        // 0x4adef8
        return function_4afac0(*v6, a2, a3 & 0xffffffff);
    }
    uint64_t v7 = a3 / 32 % 0x8000000; // 0x4addac
    if (v7 != 0) {
        int64_t v8 = 0;
        int64_t v9 = 4 * v8; // 0x4addc0
        int64_t v10 = v9 & 0xfffffffc; // 0x4addc8
        unsigned char v11 = *(char *)((v10 | 1) + a2); // 0x4addd0
        unsigned char v12 = *(char *)((v10 | 2) + a2); // 0x4addd5
        unsigned char v13 = *(char *)(v10 + a2); // 0x4adde9
        unsigned char v14 = *(char *)((v10 | 3) + a2); // 0x4addf0
        *(int32_t *)(v9 + v5) = 0x10000 * (int32_t)v12 | 256 * (int32_t)v11 | (int32_t)v13 | 0x1000000 * (int32_t)v14;
        int64_t v15 = v8 + 1; // 0x4ade07
        while (v8 != (v7 + 0xffffffff & 0xffffffff)) {
            // 0x4addc0
            v8 = v15;
            v9 = 4 * v8;
            v10 = v9 & 0xfffffffc;
            v11 = *(char *)((v10 | 1) + a2);
            v12 = *(char *)((v10 | 2) + a2);
            v13 = *(char *)(v10 + a2);
            v14 = *(char *)((v10 | 3) + a2);
            *(int32_t *)(v9 + v5) = 0x10000 * (int32_t)v12 | 256 * (int32_t)v11 | (int32_t)v13 | 0x1000000 * (int32_t)v14;
            v15 = v8 + 1;
        }
    }
    int64_t v16 = (int64_t)&g60; // 0x4add30
    int64_t v17; // 0x4add30
    switch (*(int32_t *)&v17) {
        case 12: {
            // 0x4adff0
            v17 = (int64_t)&g60;
            int64_t v18 = (int64_t)&g60; // 0x4ae005
            int64_t v19 = v5;
            uint32_t v20 = *(int32_t *)(v19 + 20); // 0x4ae008
            int32_t v21 = *(int32_t *)v18; // 0x4ae00b
            v17 = v18 + 4;
            int32_t v22 = *(int32_t *)v19; // 0x4ae011
            unsigned char v23 = *(char *)((int64_t)(v20 / 256 % 256) + (int64_t)&g63); // 0x4ae016
            unsigned char v24 = *(char *)((int64_t)(v20 / 0x1000000) + (int64_t)&g63); // 0x4ae021
            unsigned char v25 = *(char *)((int64_t)(v20 % 256) + (int64_t)&g63); // 0x4ae02d
            unsigned char v26 = *(char *)((int64_t)(v20 / 0x10000 % 256) + (int64_t)&g63); // 0x4ae03f
            int32_t v27 = v22 ^ v21 ^ (int32_t)v23 ^ 0x10000 * (int32_t)v24 ^ 0x1000000 * (int32_t)v25 ^ 256 * (int32_t)v26; // 0x4ae046
            int64_t v28 = v19 + 24; // 0x4ae048
            *(int32_t *)v28 = v27;
            int32_t v29 = v27 ^ *(int32_t *)(v19 + 4); // 0x4ae04b
            *(int32_t *)(v19 + 28) = v29;
            int32_t v30 = v29 ^ *(int32_t *)(v19 + 8); // 0x4ae051
            *(int32_t *)(v19 + 32) = v30;
            int32_t v31 = *(int32_t *)(v19 + 12) ^ v30; // 0x4ae057
            *(int32_t *)(v19 + 36) = v31;
            int32_t v32 = *(int32_t *)(v19 + 16) ^ v31; // 0x4ae05d
            *(int32_t *)(v19 + 40) = v32;
            *(int32_t *)(v19 + 44) = v32 ^ v20;
            while (v19 != v4 + 184) {
                // 0x4ae008
                v19 = v28;
                v20 = *(int32_t *)(v19 + 20);
                v21 = *(int32_t *)v17;
                v17 += 4;
                v22 = *(int32_t *)v19;
                v23 = *(char *)((int64_t)(v20 / 256 % 256) + (int64_t)&g63);
                v24 = *(char *)((int64_t)(v20 / 0x1000000) + (int64_t)&g63);
                v25 = *(char *)((int64_t)(v20 % 256) + (int64_t)&g63);
                v26 = *(char *)((int64_t)(v20 / 0x10000 % 256) + (int64_t)&g63);
                v27 = v22 ^ v21 ^ (int32_t)v23 ^ 0x10000 * (int32_t)v24 ^ 0x1000000 * (int32_t)v25 ^ 256 * (int32_t)v26;
                v28 = v19 + 24;
                *(int32_t *)v28 = v27;
                v29 = v27 ^ *(int32_t *)(v19 + 4);
                *(int32_t *)(v19 + 28) = v29;
                v30 = v29 ^ *(int32_t *)(v19 + 8);
                *(int32_t *)(v19 + 32) = v30;
                v31 = *(int32_t *)(v19 + 12) ^ v30;
                *(int32_t *)(v19 + 36) = v31;
                v32 = *(int32_t *)(v19 + 16) ^ v31;
                *(int32_t *)(v19 + 40) = v32;
                *(int32_t *)(v19 + 44) = v32 ^ v20;
            }
            // break -> 0x4add79
            break;
        }
        case 14: {
            // 0x4adf18
            v17 = (int64_t)&g60;
            int64_t v33 = (int64_t)&g60; // 0x4adf2d
            uint32_t v34 = *(int32_t *)(v5 + 28); // 0x4adf30
            int32_t v35 = *(int32_t *)v33; // 0x4adf33
            int64_t v36 = v33 + 4; // 0x4adf35
            v17 = v36;
            int32_t v37 = *(int32_t *)v5; // 0x4adf39
            unsigned char v38 = *(char *)((int64_t)(v34 / 256 % 256) + (int64_t)&g63); // 0x4adf41
            unsigned char v39 = *(char *)((int64_t)(v34 / 0x1000000) + (int64_t)&g63); // 0x4adf4c
            unsigned char v40 = *(char *)((int64_t)(v34 % 256) + (int64_t)&g63); // 0x4adf59
            unsigned char v41 = *(char *)((int64_t)(v34 / 0x10000 % 256) + (int64_t)&g63); // 0x4adf6a
            int32_t v42 = v37 ^ v35 ^ (int32_t)v38 ^ 0x10000 * (int32_t)v39 ^ 0x1000000 * (int32_t)v40 ^ 256 * (int32_t)v41; // 0x4adf71
            int64_t v43 = v5 + 32; // 0x4adf73
            *(int32_t *)v43 = v42;
            int32_t v44 = v42 ^ *(int32_t *)(v5 + 4); // 0x4adf76
            *(int32_t *)(v5 + 36) = v44;
            int32_t v45 = v44 ^ *(int32_t *)(v5 + 8); // 0x4adf7c
            *(int32_t *)(v5 + 40) = v45;
            uint32_t v46 = *(int32_t *)(v5 + 12) ^ v45; // 0x4adf82
            *(int32_t *)(v5 + 44) = v46;
            unsigned char v47 = *(char *)((int64_t)(v46 % 256) + (int64_t)&g63); // 0x4adf92
            unsigned char v48 = *(char *)((int64_t)(v46 / 0x1000000) + (int64_t)&g63); // 0x4adf99
            int32_t v49 = *(int32_t *)(v5 + 16); // 0x4adf9e
            unsigned char v50 = *(char *)((int64_t)(v46 / 0x10000 % 256) + (int64_t)&g63); // 0x4adfa7
            unsigned char v51 = *(char *)((int64_t)(v46 / 256 % 256) + (int64_t)&g63); // 0x4adfb2
            int32_t v52 = v49 ^ (int32_t)v47 ^ 0x1000000 * (int32_t)v48 ^ 0x10000 * (int32_t)v50 ^ 256 * (int32_t)v51; // 0x4adfc1
            *(int32_t *)(v5 + 48) = v52;
            int32_t v53 = v52 ^ *(int32_t *)(v5 + 20); // 0x4adfc6
            *(int32_t *)(v5 + 52) = v53;
            int32_t v54 = v53 ^ *(int32_t *)(v5 + 24); // 0x4adfcc
            *(int32_t *)(v5 + 56) = v54;
            *(int32_t *)(v5 + 60) = v54 ^ v34;
            while (v36 != (int64_t)&g61) {
                int64_t v55 = v43;
                v34 = *(int32_t *)(v55 + 28);
                v35 = *(int32_t *)v17;
                v36 = v17 + 4;
                v17 = v36;
                v37 = *(int32_t *)v55;
                v38 = *(char *)((int64_t)(v34 / 256 % 256) + (int64_t)&g63);
                v39 = *(char *)((int64_t)(v34 / 0x1000000) + (int64_t)&g63);
                v40 = *(char *)((int64_t)(v34 % 256) + (int64_t)&g63);
                v41 = *(char *)((int64_t)(v34 / 0x10000 % 256) + (int64_t)&g63);
                v42 = v37 ^ v35 ^ (int32_t)v38 ^ 0x10000 * (int32_t)v39 ^ 0x1000000 * (int32_t)v40 ^ 256 * (int32_t)v41;
                v43 = v55 + 32;
                *(int32_t *)v43 = v42;
                v44 = v42 ^ *(int32_t *)(v55 + 4);
                *(int32_t *)(v55 + 36) = v44;
                v45 = v44 ^ *(int32_t *)(v55 + 8);
                *(int32_t *)(v55 + 40) = v45;
                v46 = *(int32_t *)(v55 + 12) ^ v45;
                *(int32_t *)(v55 + 44) = v46;
                v47 = *(char *)((int64_t)(v46 % 256) + (int64_t)&g63);
                v48 = *(char *)((int64_t)(v46 / 0x1000000) + (int64_t)&g63);
                v49 = *(int32_t *)(v55 + 16);
                v50 = *(char *)((int64_t)(v46 / 0x10000 % 256) + (int64_t)&g63);
                v51 = *(char *)((int64_t)(v46 / 256 % 256) + (int64_t)&g63);
                v52 = v49 ^ (int32_t)v47 ^ 0x1000000 * (int32_t)v48 ^ 0x10000 * (int32_t)v50 ^ 256 * (int32_t)v51;
                *(int32_t *)(v55 + 48) = v52;
                v53 = v52 ^ *(int32_t *)(v55 + 20);
                *(int32_t *)(v55 + 52) = v53;
                v54 = v53 ^ *(int32_t *)(v55 + 24);
                *(int32_t *)(v55 + 56) = v54;
                *(int32_t *)(v55 + 60) = v54 ^ v34;
            }
            // break -> 0x4add79
            break;
        }
        case 10: {
            uint32_t v56 = *(int32_t *)(v5 + 12); // 0x4ade90
            int32_t v57 = *(int32_t *)v16; // 0x4ade93
            int64_t v58 = v16 + 4; // 0x4ade95
            int32_t v59 = *(int32_t *)v5; // 0x4ade99
            unsigned char v60 = *(char *)((int64_t)(v56 / 256 % 256) + (int64_t)&g63); // 0x4ade9e
            unsigned char v61 = *(char *)((int64_t)(v56 / 0x1000000) + (int64_t)&g63); // 0x4adea9
            unsigned char v62 = *(char *)((int64_t)(v56 % 256) + (int64_t)&g63); // 0x4adeb5
            unsigned char v63 = *(char *)((int64_t)(v56 / 0x10000 % 256) + (int64_t)&g63); // 0x4adec7
            int32_t v64 = v59 ^ v57 ^ (int32_t)v60 ^ 0x10000 * (int32_t)v61 ^ 0x1000000 * (int32_t)v62 ^ 256 * (int32_t)v63; // 0x4adece
            int64_t v65 = v5 + 16; // 0x4aded0
            *(int32_t *)v65 = v64;
            int32_t v66 = v64 ^ *(int32_t *)(v5 + 4); // 0x4aded3
            *(int32_t *)(v5 + 20) = v66;
            int32_t v67 = v66 ^ *(int32_t *)(v5 + 8); // 0x4aded9
            *(int32_t *)(v5 + 24) = v67;
            *(int32_t *)(v5 + 28) = v67 ^ v56;
            int64_t v68 = v65; // 0x4adeeb
            v16 = v58;
            while (v58 != (int64_t)&g62) {
                // 0x4ade90
                v56 = *(int32_t *)(v68 + 12);
                v57 = *(int32_t *)v16;
                v58 = v16 + 4;
                v59 = *(int32_t *)v68;
                v60 = *(char *)((int64_t)(v56 / 256 % 256) + (int64_t)&g63);
                v61 = *(char *)((int64_t)(v56 / 0x1000000) + (int64_t)&g63);
                v62 = *(char *)((int64_t)(v56 % 256) + (int64_t)&g63);
                v63 = *(char *)((int64_t)(v56 / 0x10000 % 256) + (int64_t)&g63);
                v64 = v59 ^ v57 ^ (int32_t)v60 ^ 0x10000 * (int32_t)v61 ^ 0x1000000 * (int32_t)v62 ^ 256 * (int32_t)v63;
                v65 = v68 + 16;
                *(int32_t *)v65 = v64;
                v66 = v64 ^ *(int32_t *)(v68 + 4);
                *(int32_t *)(v68 + 20) = v66;
                v67 = v66 ^ *(int32_t *)(v68 + 8);
                *(int32_t *)(v68 + 24) = v67;
                *(int32_t *)(v68 + 28) = v67 ^ v56;
                v68 = v65;
                v16 = v58;
            }
            // 0x4add79
            return 0;
        }
    }
    // 0x4add79
    return 0;
}

// Address range: 0x4ae080 - 0x4ae1d0
int64_t function_4ae080(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ae080
    int32_t v1; // bp-344, 0x4ae080
    function_4adc80((int64_t *)&v1);
    int64_t v2 = a1 + 16; // 0x4ae0a4
    *(int64_t *)(a1 + 8) = v2;
    int64_t v3; // 0x4ae080
    int64_t v4 = function_4add30((int64_t *)&v1, a2, a3 & 0xffffffff, v3); // 0x4ae0b7
    if ((int32_t)v4 != 0) {
        // 0x4ae0c2
        function_4add10((int64_t *)&v1);
        return v4 & 0xffffffff;
    }
    // 0x4ae0e0
    *(int32_t *)a1 = v1;
    int64_t result = function_4af830(0x2000000); // 0x4ae0eb
    if ((int32_t)result != 0) {
        // 0x4ae203
        return result;
    }
    int64_t v5 = 4 * (int64_t)(4 * v1) + v3; // 0x4ae10b
    *(int32_t *)v2 = *(int32_t *)v5;
    *(int32_t *)(a1 + 20) = *(int32_t *)(v5 + 4);
    *(int32_t *)(a1 + 24) = *(int32_t *)(v5 + 8);
    uint32_t result2 = *(int32_t *)(v5 + 12); // 0x4ae123
    *(int32_t *)(a1 + 28) = result2;
    int64_t v6; // 0x4ae080
    int32_t v7 = *(int32_t *)&v6; // 0x4ae12e
    int32_t v8 = v7 - 1; // 0x4ae137
    if (v8 < 1) {
        // 0x4ae1e0
        return result2;
    }
    int64_t v9 = a1 + 32; // 0x4ae16d
    int64_t v10 = v5; // 0x4ae16d
    int32_t v11 = v8; // 0x4ae16d
    v10 -= 16;
    int64_t v12 = 0;
    uint32_t v13 = *(int32_t *)(v12 + v10); // 0x4ae172
    unsigned char v14 = *(char *)((int64_t)(v13 % 256) + (int64_t)&g63); // 0x4ae17e
    unsigned char v15 = *(char *)((int64_t)(v13 / 0x1000000) + (int64_t)&g63); // 0x4ae182
    int32_t v16 = *(int32_t *)(4 * (int64_t)v15 + (int64_t)&g67); // 0x4ae186
    int32_t v17 = *(int32_t *)(4 * (int64_t)v14 + (int64_t)&g64); // 0x4ae18a
    unsigned char v18 = *(char *)((int64_t)(v13 / 256 % 256) + (int64_t)&g63); // 0x4ae191
    int32_t v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g65); // 0x4ae19b
    unsigned char v20 = *(char *)((int64_t)(v13 / 0x10000 % 256) + (int64_t)&g63); // 0x4ae19f
    int32_t v21 = *(int32_t *)(4 * (int64_t)v20 + (int64_t)&g66); // 0x4ae1a3
    *(int32_t *)(v12 + v9) = v17 ^ v16 ^ v19 ^ v21;
    int64_t v22 = v12 + 4; // 0x4ae1b2
    while (v12 != 12) {
        // 0x4ae172
        v12 = v22;
        v13 = *(int32_t *)(v12 + v10);
        v14 = *(char *)((int64_t)(v13 % 256) + (int64_t)&g63);
        v15 = *(char *)((int64_t)(v13 / 0x1000000) + (int64_t)&g63);
        v16 = *(int32_t *)(4 * (int64_t)v15 + (int64_t)&g67);
        v17 = *(int32_t *)(4 * (int64_t)v14 + (int64_t)&g64);
        v18 = *(char *)((int64_t)(v13 / 256 % 256) + (int64_t)&g63);
        v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g65);
        v20 = *(char *)((int64_t)(v13 / 0x10000 % 256) + (int64_t)&g63);
        v21 = *(int32_t *)(4 * (int64_t)v20 + (int64_t)&g66);
        *(int32_t *)(v12 + v9) = v17 ^ v16 ^ v19 ^ v21;
        v22 = v12 + 4;
    }
    // 0x4ae1b4
    v11--;
    v9 += 16;
    while (v11 != 0) {
        // 0x4ae170
        v10 -= 16;
        v12 = 0;
        v13 = *(int32_t *)(v12 + v10);
        v14 = *(char *)((int64_t)(v13 % 256) + (int64_t)&g63);
        v15 = *(char *)((int64_t)(v13 / 0x1000000) + (int64_t)&g63);
        v16 = *(int32_t *)(4 * (int64_t)v15 + (int64_t)&g67);
        v17 = *(int32_t *)(4 * (int64_t)v14 + (int64_t)&g64);
        v18 = *(char *)((int64_t)(v13 / 256 % 256) + (int64_t)&g63);
        v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g65);
        v20 = *(char *)((int64_t)(v13 / 0x10000 % 256) + (int64_t)&g63);
        v21 = *(int32_t *)(4 * (int64_t)v20 + (int64_t)&g66);
        *(int32_t *)(v12 + v9) = v17 ^ v16 ^ v19 ^ v21;
        v22 = v12 + 4;
        while (v12 != 12) {
            // 0x4ae172
            v12 = v22;
            v13 = *(int32_t *)(v12 + v10);
            v14 = *(char *)((int64_t)(v13 % 256) + (int64_t)&g63);
            v15 = *(char *)((int64_t)(v13 / 0x1000000) + (int64_t)&g63);
            v16 = *(int32_t *)(4 * (int64_t)v15 + (int64_t)&g67);
            v17 = *(int32_t *)(4 * (int64_t)v14 + (int64_t)&g64);
            v18 = *(char *)((int64_t)(v13 / 256 % 256) + (int64_t)&g63);
            v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g65);
            v20 = *(char *)((int64_t)(v13 / 0x10000 % 256) + (int64_t)&g63);
            v21 = *(int32_t *)(4 * (int64_t)v20 + (int64_t)&g66);
            *(int32_t *)(v12 + v9) = v17 ^ v16 ^ v19 ^ v21;
            v22 = v12 + 4;
        }
        // 0x4ae1b4
        v11--;
        v9 += 16;
    }
    // 0x4ae1c2
    return -(int64_t)(v7 - 2);
}

// Address range: 0x4b5070 - 0x4b53b4
int64_t function_4b5070(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t result = 0xffff9f00; // 0x4b5098
    if (a1 == 0 || a5 == 0) {
        // 0x4b5139
        return result;
    }
    int32_t v1 = *(int32_t *)(a1 + 4); // 0x4b50b6
    int64_t * v2 = (int64_t *)a5; // 0x4b50c3
    *v2 = 0;
    int64_t v3 = a1 + 32; // 0x4b50ca
    uint32_t v4 = *(int32_t *)v3; // 0x4b50ca
    uint64_t v5 = (int64_t)v4; // 0x4b50ca
    switch (v1) {
        case 1: {
            // 0x4b5160
            if (v5 != a3) {
                // 0x4b5139
                return 0xffff9d80;
            }
            // 0x4b5169
            *v2 = a3;
            return *(int64_t *)(*(int64_t *)(a1 + 40) + 8);
        }
        case 6: {
            // 0x4b52b8
            *v2 = a3;
            return function_4c0830(*(int64_t *)(a1 + 80), a3, a2);
        }
    }
    if (v4 == 0) {
        // 0x4b5139
        return result;
    }
    if (a2 == a4) {
        // 0x4b5250
        if (*(int64_t *)(a1 + 48) != 0 || a3 % v5 != 0) {
            // 0x4b5139
            return 0xffff9f00;
        }
    }
    int64_t * v6; // 0x4b5070
    int64_t v7; // 0x4b5070
    int64_t v8; // 0x4b5070
    int32_t v9; // 0x4b51a8
    switch (v1) {
        case 2: {
            // 0x4b51a8
            v9 = *(int32_t *)(a1 + 12);
            if (v9 != 0) {
                int64_t * v10 = (int64_t *)(a1 + 48);
                int64_t v11 = *v10; // 0x4b5283
                v7 = v11;
                v6 = v10;
                v8 = v11;
                if (v9 == 1 == v11 + a3 < v5) {
                    goto lab_0x4b529a;
                } else {
                    goto lab_0x4b51c4;
                }
            } else {
                int64_t * v12 = (int64_t *)(a1 + 48);
                int64_t v13 = *v12; // 0x4b51b3
                v7 = v13;
                v6 = v12;
                v8 = v13;
                if (v13 + a3 <= v5) {
                    goto lab_0x4b529a;
                } else {
                    goto lab_0x4b51c4;
                }
            }
        }
        case 3: {
            int64_t result2 = *(int64_t *)(a1 + 40); // 0x4b52f0
            if ((int32_t)result2 != 0) {
                // 0x4b5139
                return result2;
            }
            // 0x4b5135
            *v2 = a3;
            // 0x4b5139
            return result2;
        }
        case 5: {
            int64_t result3 = *(int64_t *)(a1 + 40); // 0x4b5330
            if ((int32_t)result3 != 0) {
                // 0x4b5139
                return result3;
            }
            // 0x4b5135
            *v2 = a3;
            // 0x4b5139
            return result3;
        }
        default: {
            // 0x4b5112
            if (v1 != 7) {
                // 0x4b5139
                return 0xffff9f80;
            }
            int64_t result4 = *(int64_t *)(a1 + 40); // 0x4b511d
            if ((int32_t)result4 != 0) {
                // 0x4b5139
                return result4;
            }
            // 0x4b5135
            *v2 = a3;
            // 0x4b5139
            return result4;
        }
    }
  lab_0x4b529a:;
    int64_t * v14 = v6;
    memcpy((int64_t *)(v8 + v3), (int64_t *)a2, (int32_t)a3);
    *v14 = *v14 + a3;
    // 0x4b5139
    return 0;
  lab_0x4b51c4:
    // 0x4b51c4
    if (v7 != 0) {
        int64_t v15 = v7 + v3; // 0x4b537b
        memcpy((int64_t *)v15, (int64_t *)a2, v4 - (int32_t)v7);
        return *(int64_t *)(v15 + 40);
    }
    // 0x4b51cd
    if (a3 == 0) {
        // 0x4b5139
        return 0;
    }
    uint64_t v16 = a3 % v5;
    int64_t v17 = a1; // 0x4b51e6
    int64_t v18 = a3; // 0x4b51e6
    if (v16 != 0 || v9 == 0) {
        int64_t v19 = v16 != 0 ? v16 : v5;
        int64_t v20 = a3 - v19; // 0x4b51ec
        memcpy((int64_t *)v3, (int64_t *)(v20 + a2), (int32_t)v19);
        int64_t * v21 = (int64_t *)(a1 + 48); // 0x4b520c
        *v21 = *v21 + v19;
        v17 = v3;
        v18 = v20;
        if (v20 == 0) {
            // 0x4b5139
            return 0;
        }
    }
    int64_t result5 = *(int64_t *)(v17 + 40); // 0x4b5230
    if ((int32_t)result5 == 0) {
        // 0x4b523f
        *v2 = v18 + a2;
    }
    // 0x4b5139
    return result5;
}

// Address range: 0x4b7e73 - 0x4b81b9
int64_t function_4b7e73(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4b7e73
    function_4b7490();
    int64_t v1; // 0x4b7e73
    int32_t v2 = (int32_t)v1 - 1; // 0x4b7e7a
    int64_t v3; // bp+176, 0x4b7e73
    if (v2 != 0) {
        int32_t v4 = v2; // 0x4b7e98
        if ((int32_t)v1 == 0) {
            function_4b7e70();
        }
        // 0x4b7e8b
        function_4b7810(&v3);
        while (v4 != 1) {
            // 0x4b7e7f
            v4--;
            if ((int32_t)v1 == 0) {
                function_4b7e70();
            }
            // 0x4b7e8b
            function_4b7810(&v3);
        }
    }
    int64_t v5 = (int32_t)v1 == 0 ? (int64_t)&g26 : (int64_t)&g27;
    int64_t str; // bp+16, 0x4b7e73
    if (memcmp(&str, (int64_t *)((0x100000000 * v1 >> 29) + v5), 8) != 0) {
        if ((int32_t)v1 != 0) {
            // 0x4b81a7
            puts("failed");
        }
        // 0x4b8172
        int64_t v6; // bp+48, 0x4b7e73
        function_4b6ba0(&v6);
        function_4b6c50(&v3);
        return 1;
    }
    if ((int32_t)v1 == 0) {
        if ((int32_t)v1 != 6) {
            // 0x4b7ed9
            return function_4b7de8();
        }
        // 0x4b802a
        return (int64_t)&g25 - 0xdc829;
    }
    // 0x4b7eeb
    puts("passed");
    if ((int32_t)v1 != 6) {
        // 0x4b7ed9
        return function_4b7de8();
    }
    // 0x4b7f28
    putchar(10);
    printf("  DES%c-CBC-%3d (%s): ", 32, 56, "dec");
    // 0x4b802a
    return (int64_t)&g25 - 0xdc829;
}

// Address range: 0x4b81c0 - 0x4b81d6
int64_t function_4b81c0(int64_t a1, int64_t a2) {
    // 0x4b81c0
    int64_t result; // 0x4b81c0
    return result;
}

// Address range: 0x4b87a0 - 0x4b8b03
int64_t function_4b87a0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4b87a0
    if (a1 - 1 >= a3) {
        // 0x4b87fe
        return 0xffffcf80;
    }
    int64_t v1 = a1 + 8; // 0x4b87e1
    int64_t v2 = a1 + 104; // 0x4b87e5
    int64_t result = function_4b81c0(v2, v1); // 0x4b87f5
    if ((int32_t)result != 0) {
        // 0x4b87fe
        return result;
    }
    // 0x4b8830
    int64_t v3; // bp-88, 0x4b87a0
    function_4b0870(&v3);
    int64_t v4; // 0x4b87a0
    int64_t v5; // 0x4b87a0
    int64_t v6; // 0x4b87a0
    int64_t v7; // 0x4b87a0
    int64_t v8; // 0x4b8843
    if (a5 == 0) {
        int64_t v9 = function_4b0ac0((int64_t)&v3, v2); // 0x4b8910
        v7 = v9;
        if ((int32_t)v9 != 0) {
            goto lab_0x4b88c4;
        } else {
            int64_t v10 = a1 + 128; // 0x4b8919
            int64_t v11 = function_4b2d10(v10, &v3, a1 + 56, v1, a1 + 152); // 0x4b8936
            v7 = v11;
            v4 = v10;
            if ((int32_t)v11 != 0) {
                goto lab_0x4b88c4;
            } else {
                goto lab_0x4b893f;
            }
        }
    } else {
        // 0x4b8843
        v8 = a1 + 56;
        int64_t v12 = a1 + 224; // 0x4b8847
        if ((int32_t)function_4b1590(v8, v12) != 0) {
            int64_t v13 = function_4b0ac0(v12, v8); // 0x4b88d8
            if ((int32_t)v13 != 0) {
                // 0x4b88ed
                function_4b0890(&v3);
                // 0x4b87fe
                return v13 + 0xffffcd00 & 0xffffffff;
            }
            int64_t v14 = v13 & 0xffffffff; // 0x4b88dd
            int64_t v15 = a1 + 176; // 0x4b8988
            int64_t v16 = function_4b0d80(v15, 1, v14); // 0x4b8997
            v7 = v16;
            if ((int32_t)v16 != 0) {
                goto lab_0x4b88c4;
            } else {
                int64_t v17 = a1 + 200; // 0x4b89a4
                int64_t v18 = function_4b0d80(v17, 1, v14); // 0x4b89b3
                v7 = v18;
                v5 = v15;
                v6 = v17;
                if ((int32_t)v18 != 0) {
                    goto lab_0x4b88c4;
                } else {
                    goto lab_0x4b89c0;
                }
            }
        } else {
            int64_t v19 = a1 + 176; // 0x4b8862
            if ((int32_t)function_4b1680(v19, 1) == 0) {
                function_4b38b0(v19, function_4b0fa0(v1), a5, a6);
                int64_t v20 = function_4b1590(v19, v1); // 0x4b88a6
                int64_t v21; // 0x4b88bb
                while ((int32_t)v20 >= 0) {
                    // 0x4b88b3
                    v21 = function_4b1220(v19, 1);
                    v7 = v21;
                    if ((int32_t)v21 != 0) {
                        goto lab_0x4b88c4;
                    }
                    v20 = function_4b1590(v19, v1);
                }
                int32_t v22 = 11; // 0x4b8ab8
                int64_t result2 = v20; // 0x4b8abd
                while (v22 != 0) {
                    // 0x4b8abf
                    if ((int32_t)function_4b1680(v19, 1) >= 1) {
                        // 0x4b8ad4
                        result2 = function_4b3cf0(a1 + 200, v19, v1, a6);
                        v7 = result2;
                        if ((int32_t)result2 != 0) {
                            goto lab_0x4b88c4;
                        } else {
                            return result2;
                        }
                    }
                    function_4b38b0(v19, function_4b0fa0(v1), a5, a6);
                    v20 = function_4b1590(v19, v1);
                    while ((int32_t)v20 >= 0) {
                        // 0x4b88b3
                        v21 = function_4b1220(v19, 1);
                        v7 = v21;
                        if ((int32_t)v21 != 0) {
                            goto lab_0x4b88c4;
                        }
                        v20 = function_4b1590(v19, v1);
                    }
                    // 0x4b8ab8
                    v22--;
                    result2 = v20;
                }
              lab_0x4b87fe:
                // 0x4b87fe
                return result2;
            }
            int64_t * v23 = (int64_t *)v19; // 0x4b8a59
            int64_t v24 = function_4b1ac0(v23, v19, v19); // 0x4b8a59
            v7 = v24;
            if ((int32_t)v24 != 0) {
                goto lab_0x4b88c4;
            } else {
                int64_t v25 = function_4b26c0(v23, v23, v1); // 0x4b8a6f
                v7 = v25;
                if ((int32_t)v25 != 0) {
                    goto lab_0x4b88c4;
                } else {
                    int64_t v26 = a1 + 200; // 0x4b8a7c
                    int64_t * v27 = (int64_t *)v26; // 0x4b8a8c
                    int64_t v28 = function_4b1ac0(v27, v26, v26); // 0x4b8a8c
                    v7 = v28;
                    if ((int32_t)v28 != 0) {
                        goto lab_0x4b88c4;
                    } else {
                        int64_t v29 = function_4b26c0(v27, v27, v1); // 0x4b8aa2
                        v7 = v29;
                        v5 = v19;
                        v6 = v26;
                        if ((int32_t)v29 != 0) {
                            goto lab_0x4b88c4;
                        } else {
                            goto lab_0x4b89c0;
                        }
                    }
                }
            }
        }
    }
  lab_0x4b88c4:
    // 0x4b88ed
    function_4b0890(&v3);
    // 0x4b87fe
    return v7 - (int64_t)(int32_t)"addrinfo" & 0xffffffff;
  lab_0x4b893f:;
    int64_t v30 = function_4b0fa0(v4); // 0x4b8942
    *(int64_t *)a4 = v30;
    int64_t v31 = function_4b1080(v4, a2, v30); // 0x4b895a
    function_4b0890(&v3);
    int64_t result3 = v31 & 0xffffffff; // 0x4b8973
    if ((int32_t)v31 != 0) {
        // 0x4b8979
        result3 = v31 - (int64_t)(int32_t)"addrinfo" & 0xffffffff;
    }
    // 0x4b87fe
    return result3;
  lab_0x4b89c0:;
    int64_t v32 = function_4b1ac0(&v3, v2, v5); // 0x4b89cb
    v7 = v32;
    if ((int32_t)v32 != 0) {
        goto lab_0x4b88c4;
    } else {
        int64_t v33 = function_4b26c0(&v3, &v3, v1); // 0x4b89e3
        v7 = v33;
        if ((int32_t)v33 != 0) {
            goto lab_0x4b88c4;
        } else {
            int64_t v34 = a1 + 128; // 0x4b89f0
            int64_t v35 = function_4b2d10(v34, &v3, v8, v1, a1 + 152); // 0x4b8a0e
            v7 = v35;
            if ((int32_t)v35 != 0) {
                goto lab_0x4b88c4;
            } else {
                int64_t * v36 = (int64_t *)v34; // 0x4b8a24
                int64_t v37 = function_4b1ac0(v36, v34, v6); // 0x4b8a24
                v7 = v37;
                if ((int32_t)v37 != 0) {
                    goto lab_0x4b88c4;
                } else {
                    int64_t v38 = function_4b26c0(v36, v36, v1); // 0x4b8a3a
                    v7 = v38;
                    v4 = v34;
                    if ((int32_t)v38 == 0) {
                        goto lab_0x4b893f;
                    } else {
                        goto lab_0x4b88c4;
                    }
                }
            }
        }
    }
}

// Address range: 0x4b9ff0 - 0x4ba368
int64_t function_4b9ff0(int64_t a1, int64_t a2, uint64_t nmemb) {
    if (nmemb < 2) {
        // 0x4ba360
        return function_4b9df0();
    }
    int64_t * mem = calloc((int32_t)nmemb, 24); // 0x4ba019
    int64_t result = (int64_t)mem; // 0x4ba019
    if (mem == NULL) {
        // 0x4ba36d
        return result;
    }
    // 0x4ba02c
    int64_t v1; // bp-152, 0x4b9ff0
    function_4b0870(&v1);
    int64_t v2; // bp-120, 0x4b9ff0
    function_4b0870(&v2);
    int64_t v3; // bp-88, 0x4b9ff0
    function_4b0870(&v3);
    int64_t v4 = function_4b0ac0(result, 72); // 0x4ba057
    int64_t v5 = 1; // 0x4ba061
    int64_t result2 = v4 & 0xffffffff; // 0x4ba061
    int64_t v6; // 0x4b9ff0
    int64_t v7; // 0x4b9ff0
    int64_t v8; // 0x4b9ff0
    int64_t v9; // 0x4b9ff0
    int64_t v10; // 0x4b9ff0
    int64_t v11; // 0x4b9ff0
    int64_t v12; // 0x4b9ff0
    int64_t v13; // 0x4ba0d8
    if ((int32_t)v4 == 0) {
        int64_t v14 = result + 24;
        int64_t v15 = function_4b1ac0((int64_t *)v14, result, *(int64_t *)(8 * v5 + a2) + 48); // 0x4ba090
        int64_t v16 = v15; // 0x4ba09a
        while ((int32_t)v15 == 0) {
            int64_t v17 = function_4b95a0(v14, a1); // 0x4ba0a6
            v16 = v17;
            if ((int32_t)v17 != 0) {
                // break -> 0x4ba300
                break;
            }
            // 0x4ba0b6
            v5++;
            g68++;
            if (v5 == nmemb) {
                int64_t v18 = nmemb - 1; // 0x4ba0cb
                v13 = (int64_t)&v1;
                int64_t v19 = function_4b3cf0(v13, 24 * v18 + result, a1 + 8, result); // 0x4ba0e5
                result2 = v19 & 0xffffffff;
                if ((int32_t)v19 != 0) {
                    goto lab_0x4ba300;
                } else {
                    int64_t v20 = a2 - 8 + 8 * nmemb; // 0x4ba101
                    int64_t v21 = 24 * nmemb - 48 + result; // 0x4ba106
                    v8 = v20;
                    v10 = v18;
                    v12 = v21;
                    if (v18 != 0) {
                        goto lab_0x4ba288;
                    } else {
                        // 0x4ba0f5
                        v6 = (int64_t)&v2;
                        v7 = v20;
                        v9 = v18;
                        v11 = v21;
                        goto lab_0x4ba111;
                    }
                }
            }
            int64_t v22 = v14;
            v14 = v22 + 24;
            int64_t v23 = *(int64_t *)(8 * v5 + a2); // 0x4ba080
            v15 = function_4b1ac0((int64_t *)v14, v22, v23 + 48);
            v16 = v15;
        }
        // 0x4ba300
        result2 = v16 & 0xffffffff;
    }
    goto lab_0x4ba300;
  lab_0x4ba300:
    // 0x4ba300
    function_4b0890(&v1);
    function_4b0890(&v2);
    function_4b0890(&v3);
    int64_t v24 = result; // 0x4ba325
    int64_t v25 = 1; // 0x4ba32b
    function_4b0890((int64_t *)v24);
    int64_t v26 = v25; // 0x4ba33b
    v24 += 24;
    while (v25 != nmemb) {
        // 0x4ba328
        v25 = v26 + 1;
        function_4b0890((int64_t *)v24);
        v26 = v25;
        v24 += 24;
    }
    // 0x4ba33d
    free(mem);
    return result2;
  lab_0x4ba288:;
    int64_t v27 = function_4b1ac0(&v2, v13, v12); // 0x4ba295
    result2 = v27 & 0xffffffff;
    int64_t v28; // 0x4b9ff0
    int64_t v29; // 0x4b9ff0
    int64_t v30; // 0x4b9ff0
    int64_t v31; // 0x4b9ff0
    if ((int32_t)v27 != 0) {
        goto lab_0x4ba300;
    } else {
        int64_t v32 = (int64_t)&v2;
        int64_t v33 = function_4b95a0(v32, a1); // 0x4ba2a9
        result2 = v33 & 0xffffffff;
        if ((int32_t)v33 != 0) {
            goto lab_0x4ba300;
        } else {
            // 0x4ba2b5
            g68++;
            int64_t v34 = function_4b1ac0(&v1, v13, *(int64_t *)v8 + 48); // 0x4ba2cd
            result2 = v34 & 0xffffffff;
            if ((int32_t)v34 != 0) {
                goto lab_0x4ba300;
            } else {
                int64_t v35 = function_4b95a0(v13, a1); // 0x4ba2e1
                result2 = v35 & 0xffffffff;
                if ((int32_t)v35 != 0) {
                    goto lab_0x4ba300;
                } else {
                    // 0x4ba2ed
                    g68++;
                    v28 = v32;
                    v29 = v8;
                    v30 = v10;
                    v31 = v12;
                    goto lab_0x4ba12b;
                }
            }
        }
    }
  lab_0x4ba111:;
    int64_t v36 = function_4b0ac0(v6, v13); // 0x4ba11b
    v28 = v6;
    v29 = v7;
    v30 = v9;
    v31 = v11;
    result2 = v36 & 0xffffffff;
    if ((int32_t)v36 != 0) {
        goto lab_0x4ba300;
    } else {
        goto lab_0x4ba12b;
    }
  lab_0x4ba12b:;
    int64_t v37 = v28;
    int64_t v38 = function_4b1ac0(&v3, v37, v37); // 0x4ba138
    result2 = v38 & 0xffffffff;
    if ((int32_t)v38 != 0) {
        goto lab_0x4ba300;
    } else {
        int64_t v39 = (int64_t)&v3; // 0x4ba148
        int64_t v40 = function_4b95a0(v39, a1); // 0x4ba150
        result2 = v40 & 0xffffffff;
        if ((int32_t)v40 != 0) {
            goto lab_0x4ba300;
        } else {
            int64_t * v41 = (int64_t *)v29; // 0x4ba160
            int64_t v42 = *v41; // 0x4ba160
            g68++;
            int64_t v43 = function_4b1ac0((int64_t *)v42, v42, v39); // 0x4ba174
            result2 = v43 & 0xffffffff;
            if ((int32_t)v43 != 0) {
                goto lab_0x4ba300;
            } else {
                int64_t v44 = function_4b95a0(*v41, a1); // 0x4ba18b
                result2 = v44 & 0xffffffff;
                if ((int32_t)v44 != 0) {
                    goto lab_0x4ba300;
                } else {
                    // 0x4ba19b
                    g68++;
                    int64_t v45 = *v41 + 24; // 0x4ba1ac
                    int64_t v46 = function_4b1ac0((int64_t *)v45, v45, v39); // 0x4ba1b3
                    result2 = v46 & 0xffffffff;
                    if ((int32_t)v46 != 0) {
                        goto lab_0x4ba300;
                    } else {
                        int64_t v47 = function_4b95a0(*v41 + 24, a1); // 0x4ba1ce
                        result2 = v47 & 0xffffffff;
                        if ((int32_t)v47 != 0) {
                            goto lab_0x4ba300;
                        } else {
                            // 0x4ba1de
                            g68++;
                            int64_t v48 = *v41 + 24; // 0x4ba1ef
                            int64_t v49 = function_4b1ac0((int64_t *)v48, v48, v37); // 0x4ba1f6
                            result2 = v49 & 0xffffffff;
                            if ((int32_t)v49 != 0) {
                                goto lab_0x4ba300;
                            } else {
                                int64_t v50 = function_4b95a0(*v41 + 24, a1); // 0x4ba211
                                result2 = v50 & 0xffffffff;
                                if ((int32_t)v50 != 0) {
                                    goto lab_0x4ba300;
                                } else {
                                    int64_t * v51 = (int64_t *)(a1 + 16); // 0x4ba221
                                    g68++;
                                    int64_t v52 = function_4b09d0(*v41, *v51); // 0x4ba231
                                    result2 = v52 & 0xffffffff;
                                    if ((int32_t)v52 != 0) {
                                        goto lab_0x4ba300;
                                    } else {
                                        int64_t v53 = function_4b09d0(*v41 + 24, *v51); // 0x4ba24d
                                        int64_t v54 = v53 & 0xffffffff; // 0x4ba254
                                        result2 = v54;
                                        if ((int32_t)v53 != 0) {
                                            goto lab_0x4ba300;
                                        } else {
                                            // 0x4ba25d
                                            function_4b0890((int64_t *)(*v41 + 48));
                                            result2 = v54;
                                            if (v30 == 0) {
                                                goto lab_0x4ba300;
                                            } else {
                                                int64_t v55 = v31 - 24; // 0x4ba261
                                                int64_t v56 = v29 - 8; // 0x4ba265
                                                int64_t v57 = v30 - 1; // 0x4ba27b
                                                v6 = v37;
                                                v7 = v56;
                                                v9 = 0;
                                                v11 = v55;
                                                v8 = v56;
                                                v10 = v57;
                                                v12 = v55;
                                                if (v57 == 0) {
                                                    goto lab_0x4ba111;
                                                } else {
                                                    goto lab_0x4ba288;
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
        }
    }
}

// Address range: 0x4ca3d0 - 0x4ca70a
int64_t function_4ca3d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint32_t a8, int32_t a9, int64_t a10) {
    int32_t v1 = a4; // 0x4ca3fb
    int64_t v2; // 0x4ca3d0
    int64_t v3; // 0x4ca3d0
    int64_t v4; // 0x4ca3d0
    if (v1 == 1) {
        // 0x4ca610
        if (*(int32_t *)(a1 + 328) != 1) {
            // 0x4ca5a8
            return 0xffffbf80;
        }
        int64_t v5 = *(int64_t *)(a1 + 8); // 0x4ca619
        v2 = v5;
        if (v5 - 16 > (int64_t)&g14) {
            // 0x4ca5a8
            return 0xffffbf80;
        }
        goto lab_0x4ca425;
    } else {
        int64_t v6 = *(int64_t *)(a1 + 8); // 0x4ca409
        if (v6 - 16 > (int64_t)&g14) {
            // 0x4ca5a8
            return 0xffffbf80;
        }
        // 0x4ca41d
        v2 = v6;
        if (v1 == 0) {
            // 0x4ca5e8
            v3 = v6;
            v4 = function_4c8fa0();
            goto lab_0x4ca443;
        } else {
            goto lab_0x4ca425;
        }
    }
  lab_0x4ca425:
    // 0x4ca425
    v3 = v2;
    v4 = function_4c9080(a1);
    goto lab_0x4ca443;
  lab_0x4ca443:
    // 0x4ca443
    if ((int32_t)v4 != 0) {
        // 0x4ca5a8
        return v4 & 0xffffffff & 0xffffffff;
    }
    int64_t v7 = v3 - 1; // 0x4ca44c
    int32_t v8; // bp-1224, 0x4ca3d0
    if (*(char *)((int64_t)&v8 + 144 + v7) != -68) {
        // 0x4ca5a8
        return 0xffffbf00;
    }
    int64_t v9 = 0x100000000 * a6 >> 32; // 0x4ca468
    if ((int32_t)a5 != 0) {
        int64_t v10 = function_4c14d0(a5 & 0xffffffff); // 0x4ca46d
        if (v10 == 0) {
            // 0x4ca5a8
            return 0xffffbf80;
        }
        // 0x4ca47b
        v9 = function_4c1d00(v10) % 256;
    }
    int64_t v11 = function_4c14d0((int64_t)a8); // 0x4ca491
    if (v11 == 0) {
        // 0x4ca5a8
        return 0xffffbf80;
    }
    uint64_t v12 = function_4c1d00(v11); // 0x4ca4a8
    int64_t v13 = 0; // bp-1192, 0x4ca4b5
    int64_t v14 = function_4b0f10(a1 + 16); // 0x4ca4be
    uint64_t v15 = v14 - 1; // 0x4ca4c3
    int64_t v16 = v15 % 8 != 0 ? v3 : v7;
    int32_t v17; // bp-1080, 0x4ca3d0
    if (v17 % 256 >> (int32_t)(v14 + 7 - 8 * v16) % 32 != 0) {
        // 0x4ca5a8
        return 0xffffbf80;
    }
    // 0x4ca4f3
    int64_t v18; // bp-1176, 0x4ca3d0
    function_4c1690(&v18);
    int64_t result = function_4c1770(&v18, v11, 0); // 0x4ca507
    int32_t v19 = result; // 0x4ca50c
    if (v19 != 0) {
        // 0x4ca710
        return result;
    }
    int64_t v20 = (int64_t)&v17;
    uint64_t n = v12 % 256;
    int64_t v21; // bp-1079, 0x4ca3d0
    int64_t v22 = v15 % 8 != 0 ? v20 : (int64_t)&v21;
    v8 = v19;
    uint64_t v23 = v16 + v20; // 0x4ca528
    int64_t v24 = v16 + -1 - n; // 0x4ca536
    function_4c8790(v22, v24, v24 + v22, n, &v18);
    v17 = 0x1000000 * (v17 & 255 >> (8 * (int32_t)v16 - (int32_t)v15) % 32) / 0x1000000;
    char v25; // 0x4ca3d0
    int64_t v26; // 0x4ca3d0
    if (v22 < v23) {
        // 0x4ca56d
        if (*(char *)v22 == 0) {
            int64_t v27 = v22 + 1; // 0x4ca58a
            while (v27 != v23) {
                char v28 = *(char *)v27; // 0x4ca580
                v25 = v28;
                v26 = v27;
                if (v28 != 0) {
                    goto lab_0x4ca648;
                }
                v27++;
            }
            // 0x4ca593
            function_4c16b0(&v18);
            // 0x4ca5a8
            return 0xffffbf00;
        }
    }
    if (v22 == v23) {
        // 0x4ca593
        function_4c16b0(&v18);
        // 0x4ca5a8
        return 0xffffbf00;
    }
    // 0x4ca63b
    v25 = *(char *)v22;
    v26 = v22;
  lab_0x4ca648:
    // 0x4ca648
    if (v25 != 1) {
        // 0x4ca593
        function_4c16b0(&v18);
        // 0x4ca5a8
        return 0xffffbf00;
    }
    int64_t v29 = v26 + 1; // 0x4ca64c
    int64_t v30 = v7 - n; // 0x4ca656
    int64_t v31 = v20 - v29 + v30; // 0x4ca65c
    if (a9 != -1) {
        if (v31 != (int64_t)a9) {
            // 0x4ca593
            function_4c16b0(&v18);
            // 0x4ca5a8
            return 0xffffbf00;
        }
    }
    // 0x4ca67a
    function_4c1820(&v18);
    function_4c1850(&v18, &v13, 8);
    function_4c1850(&v18, (int64_t *)a7, v9 & 0xffffffff);
    function_4c1850(&v18, (int64_t *)v29, v31);
    int64_t str; // bp-1144, 0x4ca3d0
    function_4c1880(&v18, &str);
    function_4c16b0(&v18);
    int32_t memcmp_rc = memcmp((int64_t *)(v30 + v20), &str, (int32_t)n); // 0x4ca6f1
    // 0x4ca5a8
    return (memcmp_rc != 0 ? 0xffffbc80 : (int64_t)v8) & 0xffffffff;
}

// Address range: 0x4ce580 - 0x4ce8e0
// Used cryptographic patterns:
//  - padding_used_in_hashing_algorithms__0x80_0_____0_ (8-bit)
int64_t function_4ce580(uint64_t a1, int64_t a2) {
    uint64_t v1 = a1 % 128; // 0x4ce5a9
    int64_t v2 = 0x100000000000000 * *(int64_t *)(a1 + 8) / 0x20000000000000 >> 56; // bp-40, 0x4ce5bb
    if (v1 >= 112) {
        // 0x4ce8d8
        return a1 / 32 & 0xffffffffffffff;
    }
    int32_t v3 = v1; // 0x4ce670
    function_4ce440(a1, "\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 112 - v1, v3);
    function_4ce440(a1, (char *)&v2, 16, v3);
    *(char *)a2 = *(char *)(a1 + 23);
    *(char *)(a2 + 1) = (char)*(int16_t *)(a1 + 22);
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x4ce693
    *(char *)(a2 + 2) = (char)(*v4 / 0x10000000000);
    *(char *)(a2 + 3) = (char)*(int32_t *)(a1 + 20);
    *(char *)(a2 + 4) = (char)(*v4 / 0x1000000);
    *(char *)(a2 + 5) = (char)(*v4 / 0x10000);
    *(char *)(a2 + 6) = (char)(*v4 / 256);
    *(char *)(a2 + 7) = (char)*v4;
    *(char *)(a2 + 8) = *(char *)(a1 + 31);
    *(char *)(a2 + 9) = (char)*(int16_t *)(a1 + 30);
    int64_t * v5 = (int64_t *)(a1 + 24); // 0x4ce6da
    *(char *)(a2 + 10) = (char)(*v5 / 0x10000000000);
    *(char *)(a2 + 11) = (char)*(int32_t *)(a1 + 28);
    *(char *)(a2 + 12) = (char)(*v5 / 0x1000000);
    *(char *)(a2 + 13) = (char)(*v5 / 0x10000);
    *(char *)(a2 + 14) = (char)(*v5 / 256);
    *(char *)(a2 + 15) = (char)*v5;
    *(char *)(a2 + 16) = *(char *)(a1 + 39);
    *(char *)(a2 + 17) = (char)*(int16_t *)(a1 + 38);
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x4ce721
    *(char *)(a2 + 18) = (char)(*v6 / 0x10000000000);
    *(char *)(a2 + 19) = (char)*(int32_t *)(a1 + 36);
    *(char *)(a2 + 20) = (char)(*v6 / 0x1000000);
    *(char *)(a2 + 21) = (char)(*v6 / 0x10000);
    *(char *)(a2 + 22) = (char)(*v6 / 256);
    *(char *)(a2 + 23) = (char)*v6;
    *(char *)(a2 + 24) = *(char *)(a1 + 47);
    *(char *)(a2 + 25) = (char)*(int16_t *)(a1 + 46);
    int64_t * v7 = (int64_t *)(a1 + 40); // 0x4ce768
    *(char *)(a2 + 26) = (char)(*v7 / 0x10000000000);
    *(char *)(a2 + 27) = (char)*(int32_t *)(a1 + 44);
    *(char *)(a2 + 28) = (char)(*v7 / 0x1000000);
    *(char *)(a2 + 29) = (char)(*v7 / 0x10000);
    *(char *)(a2 + 30) = (char)(*v7 / 256);
    *(char *)(a2 + 31) = (char)*v7;
    *(char *)(a2 + 32) = *(char *)(a1 + 55);
    *(char *)(a2 + 33) = (char)*(int16_t *)(a1 + 54);
    int64_t * v8 = (int64_t *)(a1 + 48); // 0x4ce7af
    *(char *)(a2 + 34) = (char)(*v8 / 0x10000000000);
    *(char *)(a2 + 35) = (char)*(int32_t *)(a1 + 52);
    *(char *)(a2 + 36) = (char)(*v8 / 0x1000000);
    *(char *)(a2 + 37) = (char)(*v8 / 0x10000);
    *(char *)(a2 + 38) = (char)(*v8 / 256);
    *(char *)(a2 + 39) = (char)*v8;
    *(char *)(a2 + 40) = *(char *)(a1 + 63);
    *(char *)(a2 + 41) = (char)*(int16_t *)(a1 + 62);
    int64_t * v9 = (int64_t *)(a1 + 56); // 0x4ce7f6
    *(char *)(a2 + 42) = (char)(*v9 / 0x10000000000);
    *(char *)(a2 + 43) = (char)*(int32_t *)(a1 + 60);
    *(char *)(a2 + 44) = (char)(*v9 / 0x1000000);
    *(char *)(a2 + 45) = (char)(*v9 / 0x10000);
    *(char *)(a2 + 46) = (char)(*v9 / 256);
    int64_t v10 = *v9; // 0x4ce828
    *(char *)(a2 + 47) = (char)v10;
    int64_t result = v10; // 0x4ce839
    if (*(int32_t *)(a1 + 208) == 0) {
        // 0x4ce83f
        *(char *)(a2 + 48) = *(char *)(a1 + 71);
        *(char *)(a2 + 49) = (char)*(int16_t *)(a1 + 70);
        int64_t * v11 = (int64_t *)(a1 + 64); // 0x4ce84d
        *(char *)(a2 + 50) = (char)(*v11 / 0x10000000000);
        *(char *)(a2 + 51) = (char)*(int32_t *)(a1 + 68);
        *(char *)(a2 + 52) = (char)(*v11 / 0x1000000);
        *(char *)(a2 + 53) = (char)(*v11 / 0x10000);
        *(char *)(a2 + 54) = (char)(*v11 / 256);
        *(char *)(a2 + 55) = (char)*v11;
        *(char *)(a2 + 56) = *(char *)(a1 + 79);
        *(char *)(a2 + 57) = (char)*(int16_t *)(a1 + 78);
        int64_t * v12 = (int64_t *)(a1 + 72); // 0x4ce894
        *(char *)(a2 + 58) = (char)(*v12 / 0x10000000000);
        *(char *)(a2 + 59) = (char)*(int32_t *)(a1 + 76);
        *(char *)(a2 + 60) = (char)(*v12 / 0x1000000);
        *(char *)(a2 + 61) = (char)(*v12 / 0x10000);
        *(char *)(a2 + 62) = (char)(*v12 / 256);
        result = *v12;
        *(char *)(a2 + 63) = (char)result;
    }
    // 0x4ce8cd
    return result;
}

// Address range: 0x4ee230 - 0x4ee248
int64_t ZydisDecoderTreeGetChildNode(void) {
    // 0x4ee230
    int64_t result; // 0x4ee230
    return result;
}

// Address range: 0x4ee250 - 0x4ee26b
int64_t function_4ee250(int64_t a1, uint64_t a2) {
    // 0x4ee250
    return g33 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee270 - 0x4ee28b
int64_t function_4ee270(int64_t a1, uint64_t a2) {
    // 0x4ee270
    return g40 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee290 - 0x4ee2ab
int64_t function_4ee290(int64_t a1, uint64_t a2) {
    // 0x4ee290
    return g37 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee2b0 - 0x4ee2cb
int64_t function_4ee2b0(int64_t a1, uint64_t a2) {
    // 0x4ee2b0
    return g49 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee2d0 - 0x4ee2eb
int64_t function_4ee2d0(int64_t a1, uint64_t a2) {
    // 0x4ee2d0
    return g54 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee2f0 - 0x4ee30b
int64_t function_4ee2f0(int64_t a1, uint64_t a2) {
    // 0x4ee2f0
    return g31 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee310 - 0x4ee32b
int64_t function_4ee310(int64_t a1, uint64_t a2) {
    // 0x4ee310
    return g56 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee330 - 0x4ee34b
int64_t function_4ee330(int64_t a1, uint64_t a2) {
    // 0x4ee330
    return g52 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee350 - 0x4ee36b
int64_t function_4ee350(int64_t a1, uint64_t a2) {
    // 0x4ee350
    return g44 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee370 - 0x4ee38b
int64_t function_4ee370(int64_t a1, uint64_t a2) {
    // 0x4ee370
    return g45 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee390 - 0x4ee3ab
int64_t function_4ee390(int64_t a1, uint64_t a2) {
    // 0x4ee390
    return g55 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee3b0 - 0x4ee3cb
int64_t function_4ee3b0(int64_t a1, uint64_t a2) {
    // 0x4ee3b0
    return g50 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee3d0 - 0x4ee3eb
int64_t function_4ee3d0(int64_t a1, uint64_t a2) {
    // 0x4ee3d0
    return g47 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee3f0 - 0x4ee40a
int64_t function_4ee3f0(int64_t a1, uint64_t a2) {
    // 0x4ee3f0
    return g35 + 3 * (a2 % 0x10000) + 9 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee410 - 0x4ee42a
int64_t function_4ee410(int64_t a1, uint64_t a2) {
    // 0x4ee410
    return g42 + 3 * (a2 % 0x10000) + 9 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee430 - 0x4ee44a
int64_t function_4ee430(int64_t a1, uint64_t a2) {
    // 0x4ee430
    return g46 + 3 * (a2 % 0x10000) + 9 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee450 - 0x4ee470
int64_t function_4ee450(int64_t a1, uint64_t a2) {
    // 0x4ee450
    return g48 + 3 * (a2 % 0x10000) + 15 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee470 - 0x4ee48b
int64_t function_4ee470(int64_t a1, uint64_t a2) {
    // 0x4ee470
    return g38 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee490 - 0x4ee4ab
int64_t function_4ee490(int64_t a1, uint64_t a2) {
    // 0x4ee490
    return g51 + 3 * (a2 % 0x10000) + 24 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee4b0 - 0x4ee4cb
int64_t function_4ee4b0(int64_t a1, uint64_t a2) {
    // 0x4ee4b0
    return g36 + 3 * (a2 % 0x10000) + 24 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee4d0 - 0x4ee4eb
int64_t function_4ee4d0(int64_t a1, uint64_t a2) {
    // 0x4ee4d0
    return g41 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee4f0 - 0x4ee50b
int64_t function_4ee4f0(int64_t a1, uint64_t a2) {
    // 0x4ee4f0
    return g32 + 3 * (a2 % 0x10000) + 12 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee510 - 0x4ee52b
int64_t function_4ee510(int64_t a1, uint64_t a2) {
    // 0x4ee510
    return g34 + 3 * (a2 % 0x10000) + 6 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee530 - 0x4ee54a
int64_t function_4ee530(int64_t a1, uint64_t a2) {
    // 0x4ee530
    return g39 + 3 * (a2 % 0x10000) + 9 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x4ee550 - 0x4ee56e
int64_t function_4ee550(int64_t a1, uint64_t a2) {
    // 0x4ee550
    return g43 + 3 * (a2 % 0x10000) + 768 * (int64_t)*(int16_t *)(a1 + 1);
}

// Address range: 0x5663d0 - 0x56671b
int64_t function_5663d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result; // 0x5663d0
    if (a3 == 0) {
        // 0x566670
        return result;
    }
    uint64_t v1 = function_566390(a2); // 0x5663f0
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x5663f8
    int64_t * v3; // 0x5663d0
    if (*v2 - 1 >= v1) {
        // 0x5663d9
        v3 = (int64_t *)(a1 + 8);
    } else {
        uint64_t v4 = v1 + 4; // 0x566409
        int64_t * v5 = (int64_t *)(a1 + 8);
        int64_t v6 = *v5; // 0x566417
        int64_t v7 = v4 < 0x1000000000000000 ? 8 * v4 : -1; // 0x56642d
        int64_t v8 = function_4eec00(v7); // 0x566439
        uint64_t v9 = *v2; // 0x56643e
        if (v9 != 0) {
            int64_t v10 = 0; // 0x566455
            int64_t v11 = 8 * v10; // 0x566458
            *(int64_t *)(v11 + v8) = *(int64_t *)(v11 + *v5);
            v10++;
            while (v10 != v9) {
                // 0x566458
                v11 = 8 * v10;
                *(int64_t *)(v11 + v8) = *(int64_t *)(v11 + *v5);
                v10++;
            }
        }
        if (v4 > v9) {
            int64_t v12 = 8 * v9 + v8; // 0x566479
            *(int64_t *)v12 = 0;
            v12 += 8;
            while (8 * v1 + 32 + v8 != v12) {
                // 0x566480
                *(int64_t *)v12 = 0;
                v12 += 8;
            }
        }
        int64_t * v13 = (int64_t *)(a1 + 24); // 0x566490
        int64_t v14 = *v13; // 0x566490
        int64_t v15 = function_4eec00(v7); // 0x56649c
        uint64_t v16 = *v2; // 0x5664a1
        if (v16 != 0) {
            int64_t v17 = 0; // 0x5664ae
            int64_t v18 = 8 * v17; // 0x5664b0
            *(int64_t *)(v18 + v15) = *(int64_t *)(v18 + *v13);
            v17++;
            while (v17 != v16) {
                // 0x5664b0
                v18 = 8 * v17;
                *(int64_t *)(v18 + v15) = *(int64_t *)(v18 + *v13);
                v17++;
            }
        }
        if (v4 > v16) {
            int64_t v19 = 8 * v16 + v15; // 0x5664cf
            *(int64_t *)v19 = 0;
            v19 += 8;
            while (8 * v1 + 32 + v15 != v19) {
                // 0x5664d0
                *(int64_t *)v19 = 0;
                v19 += 8;
            }
        }
        // 0x5664e0
        *v2 = v4;
        *v5 = v8;
        *v13 = v15;
        if (v6 != 0) {
            // 0x5664f1
            function_4eeb40(v6);
        }
        // 0x5664f9
        v3 = v5;
        if (v14 != 0) {
            // 0x566503
            function_4eeb40(v14);
            v3 = v5;
        }
    }
    int32_t * v20 = (int32_t *)(a3 + 8);
    *v20 = *v20 + 1;
    int64_t * v21 = (int64_t *)(*v3 + 8 * v1); // 0x56652a
    int64_t v22 = *v21; // 0x56652a
    int64_t result2 = 0; // 0x566530
    int64_t * v23; // 0x5663d0
    int64_t v24; // 0x5663d0
    int64_t v25; // 0x5663d0
    int64_t v26; // 0x5663d0
    if (v22 == 0) {
        goto lab_0x5665f0;
    } else {
        int64_t v27 = g30; // 0x566543
        if (g30 != 0) {
            int64_t v28 = (int64_t)&g30;
            while (function_566390(v27) != v1) {
                // 0x566550
                if (function_566390(*(int64_t *)(v28 + 8)) == v1) {
                    int64_t * v29 = (int64_t *)v28; // 0x5666bc
                    int64_t * v30 = (int64_t *)(8 * function_566390(*v29) + *v3);
                    if (*v30 == 0) {
                        goto lab_0x566688;
                    } else {
                        int64_t v31 = function_5784e0(a3, *v29); // 0x5666d6
                        result = v31;
                        if (g53 == 0) {
                            return result;
                        } else {
                            int32_t * v32 = (int32_t *)(v31 + 8); // 0x5666e3
                            *v32 = *v32 + 1;
                            int32_t * v33 = (int32_t *)(*v30 + 8); // 0x5666f1
                            *v33 = *v33 - 1;
                            v23 = v30;
                            v24 = v31;
                            goto lab_0x5665d4_2;
                        }
                    }
                }
                int64_t v34 = v28 + 16; // 0x566562
                int64_t v35 = *(int64_t *)v34; // 0x566566
                v27 = v35;
                if (v35 == 0) {
                    goto lab_0x566688;
                }
                v28 = v34;
            }
            int64_t * v36 = (int64_t *)(v28 + 8); // 0x566580
            int64_t * v37 = (int64_t *)(8 * function_566390(*v36) + *v3);
            if (*v37 == 0) {
                goto lab_0x566688;
            } else {
                int64_t v38 = function_573920(a3, *v36); // 0x5665a0
                if (g53 == 0) {
                    int32_t * v39 = (int32_t *)(v38 + 8); // 0x566714
                    *v39 = *v39 + 1;
                    return (int64_t)*(int32_t *)(*v37 + 8);
                }
                int32_t * v40 = (int32_t *)(v38 + 8); // 0x5665b1
                *v40 = *v40 + 1;
                int32_t * v41 = (int32_t *)(*v37 + 8); // 0x5665bf
                int32_t v42 = *v41; // 0x5665bf
                *v41 = v42 - 1;
                v23 = v37;
                v24 = v38;
                if (v42 == 1) {
                    // 0x566670
                    return 1;
                }
                goto lab_0x5665d4_2;
            }
        } else {
            // 0x5665d4
            v25 = v22;
            v26 = v22;
            if (g53 == 0) {
                goto lab_0x566694;
            } else {
                goto lab_0x5665dd;
            }
        }
    }
  lab_0x566688:;
    int64_t v43 = *v21; // 0x56668b
    v25 = v43;
    v26 = v43;
    if (g53 != 0) {
        goto lab_0x5665dd;
    } else {
        goto lab_0x566694;
    }
  lab_0x5665f0:
    // 0x5665f0
    *v21 = a3;
    if (*v2 == 0) {
        // 0x566670
        return result2;
    }
    int64_t v44 = 0; // 0x566600
    int64_t v45 = *(int64_t *)(a1 + 24);
    int64_t * v46; // 0x5665fc
    int64_t v47; // 0x56662d
    int64_t v48; // 0x56662d
    int32_t * v49; // 0x5663d0
    if (*(int64_t *)(8 * v44 + v45) != 0) {
        // 0x56663e
        v49 = (int32_t *)(v48 + 8);
        *v49 = *v49 - 1;
        *(int64_t *)(*v46 + v47) = 0;
    }
    int64_t v50 = v44 + 1; // 0x566623
    int64_t v51 = v45; // 0x56662b
    v44 = v50;
    result = v45;
    while (*v2 > v50) {
        // 0x56662d
        v45 = v51;
        if (*(int64_t *)(8 * v44 + v45) != 0) {
            // 0x56663e
            v49 = (int32_t *)(v48 + 8);
            int32_t v52 = *v49;
            *v49 = v52 - 1;
            int64_t v53 = *v46; // 0x566617
            *(int64_t *)(v53 + v47) = 0;
        }
        // 0x566623
        v50 = v44 + 1;
        v51 = v45;
        v44 = v50;
        result = v45;
    }
  lab_0x566670:
    // 0x566670
    return result;
  lab_0x566694:;
    int32_t * v54 = (int32_t *)(v26 + 8); // 0x566694
    *v54 = *v54 - 1;
    result2 = v26;
    goto lab_0x5665f0;
  lab_0x5665dd:;
    int32_t * v55 = (int32_t *)(v25 + 8); // 0x5665e2
    *v55 = *v55 - 1;
    result2 = v25;
    goto lab_0x5665f0;
  lab_0x5665d4_2:
    // 0x5665d4
    *v23 = v24;
    v25 = *v21;
    goto lab_0x5665dd;
}

// Address range: 0x582b20 - 0x582e74
int64_t function_582b20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)*(int64_t *)(a3 + 8); // 0x582b24
    if (*(char *)v1 != 102) {
        // 0x582b2c
        return 0;
    }
    int64_t v2 = *(int64_t *)(a4 + 16); // 0x582b4a
    int64_t v3 = *(int64_t *)(a4 + 8); // 0x582b4e
    int64_t v4 = v2; // 0x582b5a
    if (*(int32_t *)v2 == 59) {
        // 0x582b5c
        v4 = *(int64_t *)(v2 + 8);
    }
    int32_t * v5 = (int32_t *)(a1 + 312); // 0x582b69
    int32_t v6 = *v5; // 0x582b69
    *v5 = -1;
    int64_t v7 = a2 & 0xffffffff; // 0x582b7a
    char v8 = *(char *)(v1 + 1); // 0x582b7c
    if (v8 != 82) {
        if (v8 > 82) {
            if (v8 == 108) {
                int64_t * v9 = (int64_t *)(a1 + 256); // 0x582c80
                char * v10 = (char *)(a1 + 255);
                int64_t * v11 = (int64_t *)(a1 + 320);
                char * v12 = (char *)(a1 + 264);
                int64_t v13 = (int64_t)"(...";
                int64_t v14 = *v9;
                char v15 = *(char *)v13; // 0x582ce3
                int64_t v16; // 0x582b20
                int64_t v17; // 0x582b20
                if (v14 == 255) {
                    // 0x582c90
                    *v10 = 0;
                    *v11 = *v11 + 1;
                    v16 = 1;
                    v17 = 0;
                } else {
                    // 0x582ce9
                    v16 = v14 + 1;
                    v17 = v14;
                }
                int64_t v18 = v16;
                *v9 = v18;
                *(char *)(v17 + a1) = v15;
                *v12 = v15;
                int64_t v19 = v13 + 1; // 0x582cdb
                while (v13 != (int64_t)&g28 - 1) {
                    // 0x582cdd
                    v13 = v19;
                    v14 = v18;
                    v15 = *(char *)v13;
                    if (v14 == 255) {
                        // 0x582c90
                        *v10 = 0;
                        *v11 = *v11 + 1;
                        v16 = 1;
                        v17 = 0;
                    } else {
                        // 0x582ce9
                        v16 = v14 + 1;
                        v17 = v14;
                    }
                    // 0x582cbb
                    v18 = v16;
                    *v9 = v18;
                    *(char *)(v17 + a1) = v15;
                    *v12 = v15;
                    v19 = v13 + 1;
                }
                // 0x582cf8
                function_582980(a1, v7, v3, (int64_t)&g28);
                function_582a30(a1, v7, v4);
                int64_t v20 = *v9; // 0x582d13
                int64_t v21 = v20; // 0x582d24
                int64_t v22 = v20 + 1; // 0x582d24
                if (v20 == 255) {
                    // 0x582d26
                    *v10 = 0;
                    *v11 = *v11 + 1;
                    v21 = 0;
                    v22 = 1;
                }
                // 0x582d51
                *v9 = v22;
                *(char *)(v21 + a1) = 41;
                *v12 = 41;
                // 0x582d63
                *v5 = v6;
                return 1;
            }
            if (v8 != 114) {
                // 0x582d63
                *v5 = v6;
                return 1;
            }
            int64_t * v23 = (int64_t *)(a1 + 256); // 0x582ba1
            int64_t v24 = *v23; // 0x582ba1
            char * v25; // 0x582b20
            int64_t * v26; // 0x582b20
            int64_t v27; // 0x582b20
            int64_t v28; // 0x582b20
            if (v24 != 255) {
                // 0x582ba1
                v26 = (int64_t *)(a1 + 320);
                v25 = (char *)(a1 + 255);
                v27 = v24;
                v28 = v24 + 1;
            } else {
                char * v29 = (char *)(a1 + 255);
                *v29 = 0;
                int64_t * v30 = (int64_t *)(a1 + 320);
                *v30 = *v30 + 1;
                v26 = v30;
                v25 = v29;
                v27 = 0;
                v28 = 1;
            }
            int64_t * v31 = v26;
            *v23 = v28;
            *(char *)(v27 + a1) = 40;
            char * v32 = (char *)(a1 + 264); // 0x582bef
            *v32 = 40;
            function_582a30(a1, v7, v4);
            function_582980(a1, v7, v3, v3);
            int64_t v33 = (int64_t)"...)"; // 0x582c1b
            int64_t v34 = *v23;
            char v35 = *(char *)v33; // 0x582c70
            int64_t v36; // 0x582b20
            int64_t v37; // 0x582b20
            if (v34 == 255) {
                // 0x582c20
                *v25 = 0;
                *v31 = *v31 + 1;
                v36 = 1;
                v37 = 0;
            } else {
                // 0x582c77
                v36 = v34 + 1;
                v37 = v34;
            }
            int64_t v38 = v36;
            v33++;
            *v23 = v38;
            *(char *)(v37 + a1) = v35;
            *v32 = v35;
            while (v33 != (int64_t)&g29) {
                // 0x582c6a
                v34 = v38;
                v35 = *(char *)v33;
                if (v34 == 255) {
                    // 0x582c20
                    *v25 = 0;
                    *v31 = *v31 + 1;
                    v36 = 1;
                    v37 = 0;
                } else {
                    // 0x582c77
                    v36 = v34 + 1;
                    v37 = v34;
                }
                // 0x582c4b
                v38 = v36;
                v33++;
                *v23 = v38;
                *(char *)(v37 + a1) = v35;
                *v32 = v35;
            }
            // 0x582d63
            *v5 = v6;
            return 1;
        }
        if (v8 != 76) {
            // 0x582d63
            *v5 = v6;
            return 1;
        }
    }
    int64_t * v39 = (int64_t *)(a1 + 256); // 0x582d84
    int64_t v40 = *v39; // 0x582d84
    char * v41 = (char *)(a1 + 255);
    int64_t * v42; // 0x582b20
    int64_t v43; // 0x582b20
    if (v40 != 255) {
        // 0x582d84
        v42 = (int64_t *)(a1 + 320);
        v43 = v40;
    } else {
        // 0x582d91
        *v41 = 0;
        int64_t * v44 = (int64_t *)(a1 + 320);
        *v44 = *v44 + 1;
        *v39 = 0;
        v42 = v44;
        v43 = 0;
    }
    int64_t * v45 = v42;
    *v39 = v43 + 1;
    *(char *)(v43 + a1) = 40;
    char * v46 = (char *)(a1 + 264); // 0x582dde
    *v46 = 40;
    function_582a30(a1, v7, v4);
    int64_t result = function_582980(a1, v7, v3, v3); // 0x582dfe
    int64_t v47 = (int64_t)"..."; // 0x582e0a
    int64_t v48 = *v39;
    char v49 = *(char *)v47; // 0x582e5d
    int64_t v50; // 0x582b20
    int64_t v51; // 0x582b20
    if (v48 == 255) {
        // 0x582e10
        *v41 = 0;
        *v45 = *v45 + 1;
        v50 = 1;
        v51 = 0;
    } else {
        // 0x582e63
        v50 = v48 + 1;
        v51 = v48;
    }
    int64_t v52 = v50;
    v47++;
    *v39 = v52;
    *(char *)(v51 + a1) = v49;
    *v46 = v49;
    while (v47 != (int64_t)&g28) {
        // 0x582e56
        v48 = v52;
        v49 = *(char *)v47;
        if (v48 == 255) {
            // 0x582e10
            *v41 = 0;
            *v45 = *v45 + 1;
            v50 = 1;
            v51 = 0;
        } else {
            // 0x582e63
            v50 = v48 + 1;
            v51 = v48;
        }
        // 0x582e3b
        v52 = v50;
        v47++;
        *v39 = v52;
        *(char *)(v51 + a1) = v49;
        *v46 = v49;
    }
    // 0x582b2c
    return result;
}
