/*
 * Targeted RetDec C for native executable gap queue batch 168.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x49120a-0x491976 rank=25 name=fcn.0049120a kind=r2_discovered bytes=1900 uncovered=1900
 *   0x45b82-0x462e6 rank=26 name=fcn.00045b82 kind=r2_discovered bytes=1892 uncovered=1892
 *   0x4b9690-0x4b9dd5 rank=27 name=fcn.004b9690 kind=r2_discovered bytes=1861 uncovered=1861
 *   0x424fb-0x42c3c rank=28 name=fcn.000424fb kind=r2_discovered bytes=1857 uncovered=1857
 *   0x5174fc-0x517bec rank=29 name=fcn.005174fc kind=r2_discovered bytes=1776 uncovered=1771
 *   0x27281-0x27958 rank=30 name=fcn.00027281 kind=r2_discovered bytes=1751 uncovered=1751
 *   0x49dd10-0x49e3d4 rank=31 name=fcn.0049dd10 kind=r2_discovered bytes=1732 uncovered=1732
 *   0x535b00-0x5361c1 rank=32 name=fcn.00535b00 kind=r2_discovered bytes=1729 uncovered=1729
 *   0x4b1fc0-0x4b2674 rank=33 name=fcn.004b1fc0 kind=r2_discovered bytes=1716 uncovered=1716
 *   0x4ba880-0x4baf31 rank=34 name=fcn.004ba880 kind=r2_discovered bytes=1713 uncovered=1713
 *   0x4a8d50-0x4a93d7 rank=35 name=fcn.004a8d50 kind=r2_discovered bytes=1671 uncovered=1671
 *   0x4bf0f0-0x4bf758 rank=36 name=fcn.004bf0f0 kind=r2_discovered bytes=1640 uncovered=1640
 *   0x57ac30-0x57b298 rank=37 name=fcn.0057ac30 kind=r2_discovered bytes=1640 uncovered=1640
 *   0x4ef3e0-0x4efa3b rank=38 name=sym.__gxx_personality_v0 kind=symbol_named bytes=1627 uncovered=1627
 *   0x3c371-0x3c99e rank=39 name=fcn.0003c371 kind=r2_discovered bytes=1581 uncovered=1581
 *   0x536200-0x5367fe rank=40 name=fcn.00536200 kind=r2_discovered bytes=1534 uncovered=1534
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
extern int g80;
extern int g81;
extern int g82;
extern int g83;
extern int g84;
extern int g85;
extern int g87;
extern int g88;
extern int g89;
extern int g90;
extern int g91;
extern int g92;
extern int g93;
extern int g94;
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

int64_t function_1fea0();
int64_t function_1ff80();
int64_t function_20030();
int64_t function_20850();
int64_t function_20c63();
int64_t function_24dff();
int64_t function_2588a();
int64_t function_26bbf();
int64_t function_27281(int64_t a1, uint64_t a2, int64_t a3, int64_t * a4, int32_t a5);
int64_t function_27296(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_27855(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_27a2a();
int64_t function_27e1a();
int64_t function_281fa();
int64_t function_3c371(uint64_t a1, int64_t a2);
int64_t function_3c99e();
int64_t function_3dffc();
int64_t function_40abf();
int64_t function_40adf();
int64_t function_40e1f();
int64_t function_424fb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, uint64_t a6, uint32_t a7, uint64_t a8, int32_t a9);
int64_t function_45b82(int64_t a1, int64_t a2, int64_t a3);
int64_t function_491024();
int64_t function_491098();
int64_t function_4910d4();
int64_t function_49120a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_491e50();
int64_t function_498bd0();
int64_t function_498c50();
int64_t function_49d220();
int64_t function_49dd10(int64_t a1);
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49ecc0();
int64_t function_4a8bb0();
int64_t function_4a8c40();
int64_t function_4a8d50(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4aaf50();
int64_t function_4ab2f0();
int64_t function_4ab380();
int64_t function_4ab520();
int64_t function_4ac570();
int64_t function_4ac610();
int64_t function_4ac9e0();
int64_t function_4acba0();
int64_t function_4ad070();
int64_t function_4ad100();
int64_t function_4ad200();
int64_t function_4afe70();
int64_t function_4aff10();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b08f0();
int64_t function_4b0ac0();
int64_t function_4b0d80();
int64_t function_4b0f10();
int64_t function_4b1100();
int64_t function_4b1220();
int64_t function_4b1300();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b1820();
int64_t function_4b1900();
int64_t function_4b19a0();
int64_t function_4b1a80();
int64_t function_4b1ac0();
int64_t function_4b1c60();
int64_t function_4b1ca0();
int64_t function_4b1fc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4b95a0();
int64_t function_4b9690(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ba6e0();
int64_t function_4ba7d0();
int64_t function_4ba840();
int64_t function_4ba880(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4bd480();
int64_t function_4bf0f0(int64_t a1, int64_t a2);
int64_t function_4bf130(void);
int64_t function_4bf1b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4bf238(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4bf2b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4bf338(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4bf3b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4bf438(void);
int64_t function_4bf4b0(void);
int64_t function_4bf528(void);
int64_t function_4bf5a0(void);
int64_t function_4c4450();
int64_t function_4eeb50();
int64_t function_4eef80();
int64_t function_4ef000();
int64_t function_4ef140();
int64_t function_4ef1f0();
int64_t function_4ef280();
int64_t function_4ef2e0();
int64_t function_4efa3a(void);
int64_t function_4efcc0();
int64_t function_4efd30();
int64_t function_4fbd10();
int64_t function_50ab00();
int64_t function_50f7d0();
int64_t function_517200();
int64_t function_517320();
int64_t function_51732f();
int64_t function_5174fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);
int64_t function_517bad(void);
int64_t function_517bd5(void);
int64_t function_517be0(void);
int64_t function_535b00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10);
int64_t function_536200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8, int64_t a9, int64_t a10);
int64_t function_5423b0();
int64_t function_5797e0();
int64_t function_579b00();
int64_t function_579b50();
int64_t function_57a3c0();
int64_t function_57ac30(int64_t a1);
int64_t function_57b2f0();
int64_t function_57ba10();
int64_t function_57c4c0();
int64_t function_57caa0();
int64_t function_57d580();

// Address range: 0x27281 - 0x27296
int64_t function_27281(int64_t a1, uint64_t a2, int64_t a3, int64_t * a4, int32_t a5) {
    if (a2 < 0x2000001) {
        // 0x2728a
        return function_26bbf();
    }
    // 0x27293
    return 0;
}

// Address range: 0x27296 - 0x27855
int64_t function_27296(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x272a7
    int64_t v2 = 0x6c6c642e;
    int64_t v3 = (int64_t)&v2; // 0x272fe
    int32_t v4 = 0x677f5234; // bp-170, 0x27316
    char * v5 = (char *)(v3 | 4); // 0x27338
    *v5 = *v5 ^ -93;
    v4 ^= 0x51b221a;
    int32_t v6 = -0x50c88702; // bp-183, 0x2739b
    int32_t v7 = -0x5cabd749; // bp-165, 0x273ae
    char * v8 = (char *)((int64_t)&v4 + 4); // 0x273b9
    int32_t v9 = 0xa7b1853; // bp-155, 0x273bc
    *v8 = *v8 ^ -119;
    v6 ^= -0x5098d445;
    v7 ^= -0x37c8b601;
    char * v10 = (char *)((int64_t)&v7 + 4); // 0x27452
    *v10 = *v10 ^ 58;
    int64_t v11 = (int64_t)&v9; // 0x2748b
    int32_t v12 = -0x43d1d2e2; // bp-143, 0x274a3
    v9 ^= 0x6b1e7010;
    char * v13 = (char *)(v11 + 4); // 0x274ca
    *v13 = *v13 ^ -62;
    char * v14 = (char *)(v11 + 5); // 0x274eb
    *v14 = *v14 ^ -79;
    int64_t v15 = (int64_t)&v12; // 0x2751c
    v12 ^= -0x2cb2b7b4;
    int64_t v16 = 4; // 0x2753b
    int64_t v17 = 0xa9c815e; // 0x2753b
    char * v18 = (char *)(v16 + v15); // 0x27550
    *v18 = *v18 ^ (char)v17;
    v16++;
    v17 /= 256;
    while (v16 != 7) {
        // 0x27540
        v18 = (char *)(v16 + v15);
        *v18 = *v18 ^ (char)v17;
        v16++;
        v17 /= 256;
    }
    int64_t v19 = -0x9e9b9eae;
    int64_t v20 = 0x6ac4a11e; // bp-179, 0x27589
    int64_t v21 = (int64_t)&v19; // 0x275cc
    int64_t v22 = 0x7498c529; // bp-160, 0x275f8
    char * v23 = (char *)(v21 | 4); // 0x2762f
    *v23 = *v23 ^ 33;
    char * v24 = (char *)(v21 | 5); // 0x27655
    *v24 = *v24 ^ -60;
    *(int32_t *)&v20 = *(int32_t *)&v20 ^ 0x6aa9c85f;
    int64_t v25 = v3; // bp-136, 0x276ae
    *(int32_t *)&v22 = *(int32_t *)&v22 ^ 0x10f9a061;
    int64_t v26 = 0; // bp-208, 0x276ef
    char * v27 = (char *)((int64_t)&v22 | 4); // 0x276fb
    *v27 = *v27 ^ -93;
    int64_t v28 = function_4efd30(72, v15); // 0x27731
    __asm_rep_movsd_memcpy((char *)v28, (char *)&v25, 18);
    v26 = v28;
    int64_t v29 = function_27281(a1, a2, a3, &v26, 0x1000000 * (int32_t)a4 >> 24); // 0x27791
    function_27a2a((int64_t)&v26);
    function_24dff(&v22, 5);
    function_24dff(&v20, 4);
    function_24dff(&v19, 6);
    function_24dff((int64_t *)&v12, 7);
    function_24dff((int64_t *)&v9, 6);
    function_24dff((int64_t *)&v7, 5);
    function_24dff((int64_t *)&v6, 4);
    function_24dff((int64_t *)&v4, 5);
    function_24dff(&v2, 5);
    int64_t result = v29; // 0x2783c
    if (v1 != __readfsqword(40)) {
        // 0x2783e
        __stack_chk_fail();
        result = (int64_t)&g94;
    }
    // 0x27843
    return result;
}

// Address range: 0x27855 - 0x27956
int64_t function_27855(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x27855
    __readfsqword(40);
    if (a2 < 2) {
        // 0x27967
        return 0;
    }
    // 0x27882
    if (*(int64_t *)(a6 + 16) == a6) {
        // 0x2789a
        function_27e1a(a6, a2 / 50, (int128_t)(a2 % 50), 50);
    }
    int64_t v1 = 0; // 0x27855
    int64_t v2 = 0;
    int64_t v3; // 0x27855
    uint64_t v4; // 0x27855
    int64_t v5; // 0x27855
    int64_t v6; // 0x27855
    unsigned char v7; // 0x278e7
    while (true) {
      lab_0x278d9:
        // 0x278d9
        v5 = v2;
        v4 = v1;
        v6 = v5 + a1;
        v7 = *(char *)v6;
        if (*(char *)(v6 + 1) != 0) {
            goto lab_0x27910;
        } else {
            // 0x278ec
            if (*(char *)((int64_t)v7 + (int64_t)&g35) == 0) {
                goto lab_0x27910;
            } else {
                if (v4 == 0 == v7 < 33) {
                    goto lab_0x27910;
                } else {
                    // 0x27903
                    v3 = v5 + 4;
                    v1 = v4 + 4;
                    goto lab_0x2790b;
                }
            }
        }
    }
  lab_0x27920:;
    int64_t * v8 = (int64_t *)(a6 + 8); // 0x27925
    function_2588a(a6, *v8, v6 - v4, v6);
    int64_t v9 = 4; // bp-65, 0x2794c
    return function_281fa(a6, *v8, 0x100000000 * a5 >> 32, &v9);
  lab_0x27910:
    // 0x27910
    v3 = v5 + 1;
    v1 = 0;
    if (4 * a3 <= v4 && v7 == 0) {
        // break -> 0x27920
        goto lab_0x27920;
    }
    goto lab_0x2790b;
  lab_0x2790b:
    // 0x2790b
    v2 = v3;
    if (a2 - 1 <= v2) {
        // 0x27967
        return 0;
    }
    goto lab_0x278d9;
}

// Address range: 0x3c371 - 0x3c99e
int64_t function_3c371(uint64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x3c385
    if (a1 >= 22) {
        int64_t v2 = a1 - (int64_t)&g1; // 0x3c3a2
        int64_t v3 = v2 < 0 == ((v2 ^ a1) & (a1 ^ (int64_t)&g1)) < 0 ? a1 : (int64_t)&g1; // 0x3c3b1
        int64_t v4 = v3 - (int64_t)&g1; // 0x3c3bd
        int64_t v5 = a1 - v4; // 0x3c3d6
        if (v5 >= (int64_t)&g1) {
            int64_t v6 = *(int64_t *)(a1 + 80);
            int64_t v7 = v4;
            uint64_t v8 = v5;
            int64_t v9 = v8 < (int64_t)&g1 ? v8 : (int64_t)&g1; // 0x3c3e0
            int64_t v10 = 0x100000000 * v9 - 0x400000000 >> 32;
            int64_t v11; // bp-4159, 0x3c371
            int64_t v12; // 0x3c400
            while (v10 >= 0) {
                // 0x3c400
                v12 = v10 - 1;
                if (*(int32_t *)(v12 + (int64_t)&v11) == 0x6054b50) {
                    // break (via goto) -> 0x3c974
                    goto lab_0x3c974;
                }
                v10 = v12;
            }
            while (v7 != 0 && v6 - v7 <= (int64_t)&g2) {
                int64_t v13 = v7 != (int64_t)&g92 ? v7 - (int64_t)&g92 : 0;
                int64_t v14 = v6 - v13; // 0x3c3d6
                if (v14 < (int64_t)&g1) {
                    // break -> 0x3c974
                    break;
                }
                v7 = v13;
                v8 = v14;
                v9 = v8 < (int64_t)&g1 ? v8 : (int64_t)&g1;
                v10 = 0x100000000 * v9 - 0x400000000 >> 32;
                while (v10 >= 0) {
                    // 0x3c400
                    v12 = v10 - 1;
                    if (*(int32_t *)(v12 + (int64_t)&v11) == 0x6054b50) {
                        // break (via goto) -> 0x3c974
                        goto lab_0x3c974;
                    }
                    v10 = v12;
                }
            }
        }
    }
  lab_0x3c974:;
    int64_t result = 0; // 0x3c985
    if (v1 != __readfsqword(40)) {
        // 0x3c987
        __stack_chk_fail();
        result = (int64_t)&g94;
    }
    // 0x3c98c
    return result;
}

// Address range: 0x424fb - 0x42c3c
int64_t function_424fb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, uint64_t a6, uint32_t a7, uint64_t a8, int32_t a9) {
    // 0x424fb
    int64_t v1; // 0x424fb
    int64_t v2 = v1;
    int64_t v3 = __readfsqword(40); // 0x42521
    int64_t * v4 = (int64_t *)(a1 + 88); // 0x42564
    int64_t v5 = *v4; // 0x42564
    int64_t v6 = 0; // 0x4256b
    if (v5 == 0) {
        goto lab_0x42c12;
    } else {
        // 0x42571
        v6 = 0;
        if (*(int32_t *)(a1 + 20) != 2) {
            goto lab_0x42c12;
        } else {
            // 0x4257c
            v6 = 0;
            if (a2 == 0 || a3 == 0 == (a4 != 0)) {
                goto lab_0x42c12;
            } else {
                if (a5 != 0) {
                    goto lab_0x425b1;
                } else {
                    // 0x425a5
                    v6 = 0;
                    if ((int16_t)a6 != 0) {
                        goto lab_0x42c12;
                    } else {
                        goto lab_0x425b1;
                    }
                }
            }
        }
    }
  lab_0x42c12:;
    int64_t result = v6; // 0x42c23
    if (v3 != __readfsqword(40)) {
        // 0x42c25
        __stack_chk_fail();
        result = (int64_t)&g94;
    }
    // 0x42c2a
    return result;
  lab_0x425b1:;
    int64_t v7 = a7 >= 0 ? (int64_t)a7 : 6;
    uint32_t v8 = (int32_t)v7; // 0x4254b
    uint32_t v9 = v8 % 16; // 0x42550
    int32_t * v10 = (int32_t *)(a1 + 16); // 0x425b1
    v6 = 0;
    int64_t v11; // 0x424fb
    int64_t v12; // 0x424fb
    int64_t v13; // 0x424fb
    uint64_t v14; // 0x42632
    int64_t v15; // 0x42662
    uint64_t v16; // 0x42671
    int64_t v17; // 0x42679
    if (v9 < 11 == (*v10 != (int32_t)&g93)) {
        int64_t v18 = a2; // 0x425d3
        v6 = 0;
        if ((char)a6 == 47 || a4 > 0xffffffff || a8 > 0xffffffff || a8 != 0 == (v8 & (int32_t)&g30) == 0) {
            goto lab_0x42c12;
        } else {
            while (true) {
              lab_0x42611:
                // 0x42611
                v6 = 0;
                int64_t v19; // 0x424fb
                switch (*(char *)v19) {
                    case 0: {
                        goto lab_0x42624;
                    }
                    case 58: {
                        goto lab_0x42c12;
                    }
                    case 92: {
                        goto lab_0x42c12;
                    }
                    default: {
                        // 0x4261f
                        v18++;
                        goto lab_0x42611;
                    }
                }
            }
          lab_0x42624:;
            int64_t v20 = -1; // 0x4262d
            int64_t v21 = a2;
            int64_t v22 = 0; // 0x4262d
            v12 = v21;
            while (v20 != 0) {
                // 0x42624
                bool v23; // 0x424fb
                int64_t v24 = v21 + (v23 ? -1 : 1); // 0x4262d
                v20--;
                v22 = v20;
                v12 = v24;
                if (*(char *)v21 == 0) {
                    // break -> 
                    break;
                }
                v21 = v24;
                v22 = 0;
                v12 = v21;
            }
            v14 = -2 - v22;
            v6 = 0;
            if (v14 > (int64_t)&g93) {
                goto lab_0x42c12;
            } else {
                uint32_t v25 = *(int32_t *)(a1 + 24); // 0x42643
                v11 = 0;
                if (v25 != 0) {
                    int64_t v26 = v25; // 0x42643
                    v11 = v26 - (v26 + 0xffffffff & v12) & (int64_t)(v25 - 1);
                }
                // 0x42660
                v15 = v11 + v12;
                v16 = a6 % 0x10000;
                v17 = 0x100000000 * v14 / 0x100000000;
                v6 = 0;
                if (v16 + 76 + v17 + v15 < 0x100000000) {
                    // 0x42699
                    v13 = 0;
                    if ((int32_t)v14 == 0) {
                        goto lab_0x426cf;
                    } else {
                        // 0x426a9
                        v13 = 0;
                        if (*(char *)(a2 - 1 + v17) != 47) {
                            goto lab_0x426cf;
                        } else {
                            // 0x426ba
                            v13 = 16;
                            v6 = 0;
                            if ((a8 || a4) != 0) {
                                goto lab_0x42c12;
                            } else {
                                goto lab_0x426cf;
                            }
                        }
                    }
                } else {
                    goto lab_0x42c12;
                }
            }
        }
    } else {
        goto lab_0x42c12;
    }
  lab_0x426cf:;
    int64_t v27 = v16 + 46; // 0x426d8
    uint64_t v28 = v17 + v27 + *(int64_t *)(v5 + 8); // 0x426df
    if (*(int64_t *)(v5 + 16) < v28) {
        // 0x426ff
        v6 = 0;
        if ((int32_t)entry_point(a1, v5, v28, 1, v5, a6) != 0) {
            goto lab_0x426ef;
        } else {
            goto lab_0x42c12;
        }
    } else {
        goto lab_0x426ef;
    }
  lab_0x426ef:;
    int64_t v29 = *(int64_t *)(v5 + 40); // 0x426ef
    uint64_t v30 = v29 + 1; // 0x426f3
    int64_t v31 = v29; // 0x426fb
    if (v30 > *(int64_t *)(v5 + 48)) {
        int64_t v32 = entry_point(a1, v5 + 32, v30, 1, v5, a6); // 0x4272e
        v31 = v32;
        v6 = 0;
        if ((int32_t)v32 == 0) {
            goto lab_0x42c12;
        } else {
            goto lab_0x4273b;
        }
    } else {
        goto lab_0x4273b;
    }
  lab_0x4273b:;
    int64_t v33 = 0; // 0x4273e
    if (a4 != 0 == (v7 & 1024) == 0 == (v9 != 0)) {
        // 0x4274a
        v33 = v31;
        v6 = 0;
        if (v31 == 0) {
            goto lab_0x42c12;
        } else {
            goto lab_0x42768;
        }
    } else {
        goto lab_0x42768;
    }
  lab_0x42768:;
    int64_t v34 = function_20c63(a1, v12, v11 + 30 & 0xffffffff); // 0x42773
    int64_t v35; // 0x424fb
    int64_t v36; // 0x424fb
    int64_t v37; // bp-140, 0x424fb
    uint64_t v38; // 0x42794
    int64_t v39; // 0x427ce
    int64_t v40; // 0x427e2
    int32_t v41; // 0x427eb
    if ((int32_t)v34 != 0) {
        // 0x42794
        __asm_rep_stosb_memset((char *)&v37, 0, 30);
        v6 = 0;
        if ((int32_t)v14 != 0) {
            goto lab_0x42c12;
        } else {
            // 0x427ce
            v38 = 0x100000000 * v15 >> 32;
            v39 = v17 + 30 + v38;
            v35 = a8;
            v41 = a9;
            v40 = 0;
            if ((v8 & (int32_t)&g30) != 0) {
                goto lab_0x427fc;
            } else {
                // 0x427da
                v40 = function_3dffc(0, a3, a4, v17);
                v41 = v40;
                v35 = a4;
                v36 = a4;
                if (a4 < 4) {
                    goto lab_0x42801;
                } else {
                    goto lab_0x427fc;
                }
            }
        }
    } else {
        // 0x42780
        v6 = v34 & 0xffffffff;
        goto lab_0x42c12;
    }
  lab_0x427fc:
    // 0x427fc
    v36 = v35;
    int64_t v42; // 0x424fb
    int64_t v43; // 0x424fb
    int64_t v44; // 0x424fb
    int64_t v45; // 0x424fb
    int32_t v46; // 0x424fb
    int64_t v47; // bp-168, 0x424fb
    if ((v7 & 1024) == 0 == (v9 != 0)) {
        // 0x4282f
        v42 = 0;
        v43 = v39;
        v44 = 0;
        v46 = v41;
        v45 = v35;
        if (a4 == 0) {
            goto lab_0x428cc;
        } else {
            // 0x42837
            v47 = a1;
            int64_t v48 = function_40adf(v33, 0x3c9b4, &v47, function_40e1f(v9, 0xfffffff1, 0) & 0xffffffff); // 0x4286b
            v6 = 0;
            if ((int32_t)v48 != 0) {
                goto lab_0x42c12;
            } else {
                // 0x42874
                v42 = 8;
                v43 = v39;
                v44 = 0;
                v46 = v41;
                v45 = v35;
                v6 = 0;
                if ((int32_t)function_40abf(v33, a3, a4, 4) != 1) {
                    goto lab_0x42c12;
                } else {
                    goto lab_0x428cc;
                }
            }
        }
    } else {
        goto lab_0x42801;
    }
  lab_0x42801:
    // 0x42801
    v6 = 0;
    if (v40 != a4) {
        goto lab_0x42c12;
    } else {
        // 0x428ad
        v42 = (a6 ^ 15) + a6 + (int64_t)((v8 & (int32_t)&g30) == 0) & 8;
        v43 = v39 + a4;
        v44 = a4;
        v46 = v41;
        v45 = v36;
        v6 = 0;
        if (a4 < 0x100000000) {
            goto lab_0x428cc;
        } else {
            goto lab_0x42c12;
        }
    }
  lab_0x428cc:
    // 0x428cc
    v6 = 0;
    int64_t v49; // bp-110, 0x424fb
    int64_t v50; // 0x4299a
    int64_t * v51; // 0x429a8
    uint64_t v52; // 0x429a8
    uint64_t v53; // 0x429c4
    int64_t v54; // 0x42a90
    uint64_t v55; // 0x42a94
    int64_t * v56; // 0x42a98
    if (v43 > 0xffffffff) {
        goto lab_0x42c12;
    } else {
        // 0x428da
        v37 = 0x4034b50;
        int64_t v57 = v46; // 0x4290a
        int64_t v58; // bp-136, 0x424fb
        __asm_rep_stosb_memset((char *)&v58, 0, 26);
        v58 = (v2 ^ 31) + v2 + (int64_t)(v42 == 0) & 20;
        int64_t v59; // bp-126, 0x424fb
        function_3c99e(&v59, v57);
        int64_t v60 = v44 & 0xffffffff; // 0x42940
        int64_t v61; // bp-122, 0x424fb
        function_3c99e(&v61, v60);
        int64_t v62 = v45 & 0xffffffff; // 0x42947
        int64_t v63; // bp-118, 0x424fb
        int64_t v64 = function_3c99e(&v63, v62); // 0x42952
        v6 = 0;
        if ((v64 & -256 || v14 % 256) != 30) {
            goto lab_0x42c12;
        } else {
            // 0x4299a
            v50 = *v4;
            v51 = (int64_t *)(v50 + 8);
            v52 = *v51;
            v47 = 0x100000000 * v52 / 0x100000000;
            v6 = 0;
            if (v38 > 0xffffffff) {
                goto lab_0x42c12;
            } else {
                // 0x429bf
                v53 = v14 % 0x10000;
                v6 = 0;
                if (v53 + v27 + v52 > 0xffffffff) {
                    goto lab_0x42c12;
                } else {
                    // 0x429e1
                    v49 = 0x2014b50;
                    int64_t v65; // bp-106, 0x424fb
                    __asm_rep_stosb_memset((char *)&v65, 0, 42);
                    int64_t v66; // bp-94, 0x424fb
                    function_3c99e(&v66, v57);
                    int64_t v67; // bp-90, 0x424fb
                    function_3c99e(&v67, v60);
                    int64_t v68; // bp-86, 0x424fb
                    function_3c99e(&v68, v62);
                    int64_t v69; // bp-72, 0x424fb
                    function_3c99e(&v69, v13);
                    int64_t v70; // bp-68, 0x424fb
                    function_3c99e(&v70, v15 & 0xffffffff);
                    v54 = *v51;
                    v55 = v54 + 46;
                    v56 = (int64_t *)(v50 + 16);
                    if (v55 > *v56) {
                        // 0x42ace
                        if ((int32_t)entry_point(a1, v50, v55, 1, v5, v42) == 0) {
                            goto lab_0x42be1;
                        } else {
                            goto lab_0x42a9e;
                        }
                    } else {
                        goto lab_0x42a9e;
                    }
                }
            }
        }
    }
  lab_0x42a9e:;
    int32_t * v71 = (int32_t *)(v50 + 24); // 0x42a9e
    *v51 = v55;
    int64_t v72 = (int64_t)*v71; // 0x42aae
    int64_t * v73 = (int64_t *)v50; // 0x42ab2
    int64_t v74 = *v73; // 0x42ab2
    __asm_rep_movsb_memcpy((char *)(v54 * v72 + v74), (char *)&v49, 46 * v72);
    int64_t v75 = *v51; // 0x42abe
    uint64_t v76 = v75 + v53; // 0x42ac2
    if (v76 > *v56) {
        // 0x42aeb
        if ((int32_t)entry_point(a1, v50, v76, 1, v5, v42) == 0) {
            goto lab_0x42be1;
        } else {
            goto lab_0x42b06;
        }
    } else {
        goto lab_0x42b06;
    }
  lab_0x42be1:
    // 0x42be1
    if (v52 > *v56) {
        // 0x42bec
        v6 = 0;
        if ((int32_t)entry_point(a1, v50, v52, 0, v5, v42) == 0) {
            goto lab_0x42c12;
        } else {
            // 0x42c04
            *v51 = v52;
            v6 = 0;
            goto lab_0x42c12;
        }
    } else {
        // 0x42c04
        *v51 = v52;
        v6 = 0;
        goto lab_0x42c12;
    }
  lab_0x42b06:
    // 0x42b06
    *v51 = v76;
    int64_t v77 = (int64_t)*v71; // 0x42b13
    int64_t v78 = *v73; // 0x42b17
    __asm_rep_movsb_memcpy((char *)(v75 * v77 + v78), (char *)a2, v53 * v77);
    uint64_t v79 = *v51; // 0x42b25
    if (v79 > *v56) {
        // 0x42b2f
        if ((int32_t)entry_point(a1, v50, v79, 1, v5, v42) == 0) {
            goto lab_0x42be1;
        } else {
            goto lab_0x42b4a;
        }
    } else {
        goto lab_0x42b4a;
    }
  lab_0x42b4a:
    // 0x42b4a
    *v51 = v79;
    uint64_t v80 = v79 + v16; // 0x42b53
    if (v80 > *v56) {
        // 0x42b5d
        if ((int32_t)entry_point(a1, v50, v80, 1, v5, v42) == 0) {
            goto lab_0x42be1;
        } else {
            goto lab_0x42b74;
        }
    } else {
        goto lab_0x42b74;
    }
  lab_0x42b74:
    // 0x42b74
    *v51 = v80;
    int64_t v81 = (int64_t)*v71; // 0x42b81
    int64_t v82 = *v73; // 0x42b85
    __asm_rep_movsb_memcpy((char *)(v79 * v81 + v82), (char *)a5, v16 * v81);
    int64_t v83 = v50 + 32; // 0x42b93
    int64_t * v84 = (int64_t *)(v50 + 40); // 0x42b97
    int64_t v85 = *v84; // 0x42b97
    uint64_t v86 = v85 + 1; // 0x42b9b
    if (v86 > *(int64_t *)(v50 + 48)) {
        // 0x42ba5
        if ((int32_t)entry_point(a1, v83, v86, 1, v5, v42) == 0) {
            goto lab_0x42be1;
        } else {
            goto lab_0x42bb9;
        }
    } else {
        goto lab_0x42bb9;
    }
  lab_0x42bb9:;
    int64_t v87 = (int64_t)*(int32_t *)(v50 + 56); // 0x42bb9
    *v84 = v86;
    int64_t v88 = *(int64_t *)v83; // 0x42bcf
    __asm_rep_movsb_memcpy((char *)(v85 * v87 + v88), (char *)&v47, v87);
    *(int64_t *)a1 = v43;
    *v10 = *v10 + 1;
    v6 = 1;
    goto lab_0x42c12;
}

// Address range: 0x45b82 - 0x462e6
int64_t function_45b82(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 8); // 0x45b84
    int32_t * v2 = (int32_t *)(a1 + 12); // 0x45b8d
    int32_t * v3 = (int32_t *)(a1 + 16); // 0x45b93
    int32_t * v4 = (int32_t *)(a1 + 20); // 0x45b99
    int64_t result = a2; // 0x45ba2
    int32_t v5 = *v1; // 0x45ba2
    int32_t v6 = *v4;
    int32_t v7 = *v3;
    int32_t v8 = *v2;
    int32_t v9 = *(int32_t *)result; // 0x45ba6
    int32_t v10 = *(int32_t *)(result + 16); // 0x45bb4
    int32_t v11 = *(int32_t *)(result + 28); // 0x45bbb
    int32_t v12 = *(int32_t *)(result + 52); // 0x45bbf
    int32_t v13 = *(int32_t *)(result + 4); // 0x45bce
    uint32_t v14 = v5 - 0x28955b88 + v9 + ((v6 ^ v7) & v8 ^ v6); // 0x45bd1
    int32_t v15 = (v14 / 0x2000000 | 128 * v14) + v8; // 0x45bde
    uint32_t v16 = v6 - 0x173848aa + v13 + (v15 & (v7 ^ v8) ^ v7); // 0x45bed
    int32_t v17 = *(int32_t *)(result + 8); // 0x45bef
    int32_t v18 = (v16 / 0x100000 | 0x1000 * v16) + v15; // 0x45bf5
    uint32_t v19 = v7 + 0x242070db + v17 + (v18 & (v15 ^ v8) ^ v8); // 0x45c06
    int32_t v20 = *(int32_t *)(result + 12); // 0x45c08
    int32_t v21 = (v19 / 0x8000 | 0x20000 * v19) + v18; // 0x45c0e
    int32_t v22 = *(int32_t *)(result + 20); // 0x45c24
    uint32_t v23 = v8 - 0x3e423112 + v20 + (v21 & (v18 ^ v15) ^ v15); // 0x45c28
    int32_t v24 = (v23 / 1024 | 0x400000 * v23) + v21; // 0x45c31
    int32_t v25 = *(int32_t *)(result + 24); // 0x45c3f
    uint32_t v26 = v10 - 0xa83f051 + v15 + (v24 & (v21 ^ v18) ^ v18); // 0x45c43
    int32_t v27 = (v26 / 0x2000000 | 128 * v26) + v24; // 0x45c4c
    int32_t v28 = *(int32_t *)(result + 32); // 0x45c5a
    uint32_t v29 = v22 + 0x4787c62a + v18 + (v27 & (v24 ^ v21) ^ v21); // 0x45c5e
    int32_t v30 = (v29 / 0x100000 | 0x1000 * v29) + v27; // 0x45c67
    uint32_t v31 = v25 - 0x57cfb9ed + v21 + (v30 & (v27 ^ v24) ^ v24); // 0x45c75
    int32_t v32 = (v31 / 0x8000 | 0x20000 * v31) + v30; // 0x45c7e
    int32_t v33 = *(int32_t *)(result + 36); // 0x45c8c
    uint32_t v34 = v11 - 0x2b96aff + v24 + (v32 & (v30 ^ v27) ^ v27); // 0x45c90
    int32_t v35 = (v34 / 1024 | 0x400000 * v34) + v32; // 0x45c99
    int32_t v36 = *(int32_t *)(result + 40); // 0x45ca7
    uint32_t v37 = v28 + 0x698098d8 + v27 + (v35 & (v32 ^ v30) ^ v30); // 0x45cab
    int32_t v38 = (v37 / 0x2000000 | 128 * v37) + v35; // 0x45cb4
    int32_t v39 = *(int32_t *)(result + 44); // 0x45cc2
    uint32_t v40 = v33 - 0x74bb0851 + v30 + (v38 & (v35 ^ v32) ^ v32); // 0x45cc6
    int32_t v41 = (v40 / 0x100000 | 0x1000 * v40) + v38; // 0x45ccf
    uint32_t v42 = v36 - 0xa44f + v32 + (v41 & (v38 ^ v35) ^ v35); // 0x45ce0
    int32_t v43 = (v42 / 0x8000 | 0x20000 * v42) + v41; // 0x45ce9
    uint32_t v44 = v39 - 0x76a32842 + v35 + (v43 & (v41 ^ v38) ^ v38); // 0x45cf5
    int32_t v45 = *(int32_t *)(result + 48); // 0x45cf7
    int32_t v46 = (v44 / 1024 | 0x400000 * v44) + v43; // 0x45cfd
    int32_t v47 = *(int32_t *)(result + 60); // 0x45d17
    uint32_t v48 = v45 + 0x6b901122 + v38 + (v46 & (v43 ^ v41) ^ v41); // 0x45d1b
    int32_t v49 = *(int32_t *)(result + 56); // 0x45d1e
    int32_t v50 = (v48 / 0x2000000 | 128 * v48) + v46; // 0x45d25
    uint32_t v51 = v12 - 0x2678e6d + v41 + (v50 & (v46 ^ v43) ^ v43); // 0x45d35
    int32_t v52 = (v51 / 0x100000 | 0x1000 * v51) + v50; // 0x45d41
    uint32_t v53 = v49 - 0x5986bc72 + v43 + (v52 & (v50 ^ v46) ^ v46); // 0x45d55
    int32_t v54 = (v53 / 0x8000 | 0x20000 * v53) + v52; // 0x45d60
    uint32_t v55 = v47 + 0x49b40821 + v46 + (v54 & (v52 ^ v50) ^ v50); // 0x45d70
    int32_t v56 = (v55 / 1024 | 0x400000 * v55) + v54; // 0x45d77
    uint32_t v57 = v13 - 0x9e1da9e + v50 + ((v56 ^ v54) & v52 ^ v54); // 0x45d83
    int32_t v58 = (v57 / 0x8000000 | 32 * v57) + v56; // 0x45d8d
    uint32_t v59 = v25 - 0x3fbf4cc0 + v52 + ((v58 ^ v56) & v54 ^ v56); // 0x45da4
    int32_t v60 = (v59 / 0x800000 | 512 * v59) + v58; // 0x45db9
    uint32_t v61 = v39 + 0x265e5a51 + v54 + ((v60 ^ v58) & v56 ^ v58); // 0x45dd1
    int32_t v62 = (v61 / 0x40000 | 0x4000 * v61) + v60; // 0x45ddb
    uint32_t v63 = v9 - 0x16493856 + v56 + ((v62 ^ v60) & v58 ^ v60); // 0x45df2
    int32_t v64 = (v63 / 0x1000 | 0x100000 * v63) + v62; // 0x45dfa
    uint32_t v65 = v22 - 0x29d0efa3 + v58 + ((v64 ^ v62) & v60 ^ v62); // 0x45e11
    int32_t v66 = (v65 / 0x8000000 | 32 * v65) + v64; // 0x45e18
    uint32_t v67 = v36 + 0x2441453 + v60 + ((v66 ^ v64) & v62 ^ v64); // 0x45e2d
    int32_t v68 = (v67 / 0x800000 | 512 * v67) + v66; // 0x45e36
    uint32_t v69 = v47 - 0x275e197f + v62 + ((v68 ^ v66) & v64 ^ v66); // 0x45e4d
    int32_t v70 = (v69 / 0x40000 | 0x4000 * v69) + v68; // 0x45e57
    uint32_t v71 = v10 - 0x182c0438 + v64 + ((v70 ^ v68) & v66 ^ v68); // 0x45e6f
    int32_t v72 = (v71 / 0x1000 | 0x100000 * v71) + v70; // 0x45e79
    uint32_t v73 = v33 + 0x21e1cde6 + v66 + ((v72 ^ v70) & v68 ^ v70); // 0x45e8b
    int32_t v74 = (v73 / 0x8000000 | 32 * v73) + v72; // 0x45e93
    uint32_t v75 = v49 - 0x3cc8f82a + v68 + ((v74 ^ v72) & v70 ^ v72); // 0x45eaa
    int32_t v76 = (v75 / 0x800000 | 512 * v75) + v74; // 0x45eb1
    uint32_t v77 = v20 - 0xb2af279 + v70 + ((v76 ^ v74) & v72 ^ v74); // 0x45ec6
    int32_t v78 = (v77 / 0x40000 | 0x4000 * v77) + v76; // 0x45ecf
    uint32_t v79 = v28 + 0x455a14ed + v72 + ((v78 ^ v76) & v74 ^ v76); // 0x45ee6
    int32_t v80 = (v79 / 0x1000 | 0x100000 * v79) + v78; // 0x45ef0
    uint32_t v81 = v12 - 0x561c16fb + v74 + ((v80 ^ v78) & v76 ^ v78); // 0x45f08
    int32_t v82 = (v81 / 0x8000000 | 32 * v81) + v80; // 0x45f12
    uint32_t v83 = v17 - 0x3105c08 + v76 + ((v82 ^ v80) & v78 ^ v80); // 0x45f2d
    int32_t v84 = (v83 / 0x800000 | 512 * v83) + v82; // 0x45f35
    uint32_t v85 = v11 + 0x676f02d9 + v78 + ((v84 ^ v82) & v80 ^ v82); // 0x45f48
    int32_t v86 = (v85 / 0x40000 | 0x4000 * v85) + v84; // 0x45f4f
    uint32_t v87 = v45 - 0x72d5b376 + v80 + ((v86 ^ v84) & v82 ^ v84); // 0x45f5b
    int32_t v88 = (v87 / 0x1000 | 0x100000 * v87) + v86; // 0x45f64
    int32_t v89 = v88 ^ v86; // 0x45f66
    uint32_t v90 = v22 - 0x5c6be + v82 + (v89 ^ v84); // 0x45f6c
    int32_t v91 = (v90 / 0x10000000 | 16 * v90) + v88; // 0x45f77
    uint32_t v92 = v28 - 0x788e097f + v84 + (v91 ^ v89); // 0x45f89
    int32_t v93 = (v92 / 0x200000 | 2048 * v92) + v91; // 0x45f9d
    int32_t v94 = v93 ^ v91; // 0x45fa0
    uint32_t v95 = v39 + 0x6d9d6122 + v86 + (v94 ^ v88); // 0x45fa5
    int32_t v96 = (v95 / 0x10000 | 0x10000 * v95) + v93; // 0x45fb3
    uint32_t v97 = v49 - 0x21ac7f4 + v88 + (v96 ^ v94); // 0x45fb9
    int32_t v98 = (v97 / 512 | 0x800000 * v97) + v96; // 0x45fc1
    int32_t v99 = v98 ^ v96; // 0x45fd3
    uint32_t v100 = v13 - 0x5b4115bc + v91 + (v99 ^ v93); // 0x45fd8
    int32_t v101 = (v100 / 0x10000000 | 16 * v100) + v98; // 0x45fe2
    uint32_t v102 = v10 + 0x4bdecfa9 + v93 + (v101 ^ v99); // 0x45ff1
    int32_t v103 = (v102 / 0x200000 | 2048 * v102) + v101; // 0x46002
    int32_t v104 = v103 ^ v101; // 0x46004
    uint32_t v105 = v11 - 0x944b4a0 + v96 + (v104 ^ v98); // 0x4600a
    int32_t v106 = (v105 / 0x10000 | 0x10000 * v105) + v103; // 0x46015
    uint32_t v107 = v36 - 0x41404390 + v98 + (v106 ^ v104); // 0x46023
    int32_t v108 = (v107 / 512 | 0x800000 * v107) + v106; // 0x4602e
    int32_t v109 = v108 ^ v106; // 0x4603f
    uint32_t v110 = v12 + 0x289b7ec6 + v101 + (v109 ^ v103); // 0x46045
    int32_t v111 = (v110 / 0x10000000 | 16 * v110) + v108; // 0x4604e
    uint32_t v112 = v9 - 0x155ed806 + v103 + (v111 ^ v109); // 0x4605e
    int32_t v113 = (v112 / 0x200000 | 2048 * v112) + v111; // 0x46068
    int32_t v114 = v113 ^ v111; // 0x4606b
    uint32_t v115 = v20 - 0x2b10cf7b + v106 + (v114 ^ v108); // 0x4607c
    int32_t v116 = (v115 / 0x10000 | 0x10000 * v115) + v113; // 0x46086
    uint32_t v117 = v25 + 0x4881d05 + v108 + (v116 ^ v114); // 0x46097
    int32_t v118 = (v117 / 512 | 0x800000 * v117) + v116; // 0x460a9
    int32_t v119 = v118 ^ v116; // 0x460ab
    uint32_t v120 = v33 - 0x262b2fc7 + v111 + (v119 ^ v113); // 0x460b0
    int32_t v121 = (v120 / 0x10000000 | 16 * v120) + v118; // 0x460c3
    uint32_t v122 = v45 - 0x1924661b + v113 + (v121 ^ v119); // 0x460d4
    int32_t v123 = (v122 / 0x200000 | 2048 * v122) + v121; // 0x460dd
    int32_t v124 = v123 ^ v121; // 0x460e0
    uint32_t v125 = v47 + 0x1fa27cf8 + v116 + (v124 ^ v118); // 0x460e6
    int32_t v126 = (v125 / 0x10000 | 0x10000 * v125) + v123; // 0x460f0
    uint32_t v127 = v17 - 0x3b53a99b + v118 + (v126 ^ v124); // 0x46100
    int32_t v128 = (v127 / 512 | 0x800000 * v127) + v126; // 0x4611b
    uint32_t v129 = v9 - 0xbd6ddbc + v121 + ((v128 | -1 - v123) ^ v126); // 0x46127
    int32_t v130 = (v129 / 0x4000000 | 64 * v129) + v128; // 0x46141
    uint32_t v131 = v11 + 0x432aff97 + v123 + ((v130 | -1 - v126) ^ v128); // 0x46156
    int32_t v132 = (v131 / 0x400000 | 1024 * v131) + v130; // 0x46160
    uint32_t v133 = v49 - 0x546bdc59 + v126 + ((v132 | -1 - v128) ^ v130); // 0x46168
    int32_t v134 = (v133 / 0x20000 | 0x8000 * v133) + v132; // 0x46172
    uint32_t v135 = v22 - 0x36c5fc7 + v128 + ((v134 | -1 - v130) ^ v132); // 0x46178
    int32_t v136 = (v135 / 2048 | 0x200000 * v135) + v134; // 0x4618d
    uint32_t v137 = v45 + 0x655b59c3 + v130 + ((v136 | -1 - v132) ^ v134); // 0x46193
    int32_t v138 = (v137 / 0x4000000 | 64 * v137) + v136; // 0x461a8
    uint32_t v139 = v20 - 0x70f3336e + v132 + ((v138 | -1 - v134) ^ v136); // 0x461ae
    int32_t v140 = (v139 / 0x400000 | 1024 * v139) + v138; // 0x461c3
    uint32_t v141 = v36 - 0x100b83 + v134 + ((v140 | -1 - v136) ^ v138); // 0x461c9
    int32_t v142 = (v141 / 0x20000 | 0x8000 * v141) + v140; // 0x461de
    uint32_t v143 = v13 - 0x7a7ba22f + v136 + ((v142 | -1 - v138) ^ v140); // 0x461e4
    int32_t v144 = (v143 / 2048 | 0x200000 * v143) + v142; // 0x461f9
    uint32_t v145 = v28 + 0x6fa87e4f + v138 + ((v144 | -1 - v140) ^ v142); // 0x461ff
    int32_t v146 = (v145 / 0x4000000 | 64 * v145) + v144; // 0x46214
    uint32_t v147 = v47 - 0x1d31920 + v140 + ((v146 | -1 - v142) ^ v144); // 0x4621a
    int32_t v148 = (v147 / 0x400000 | 1024 * v147) + v146; // 0x4622f
    uint32_t v149 = v25 - 0x5cfebcec + v142 + ((v148 | -1 - v144) ^ v146); // 0x46235
    int32_t v150 = (v149 / 0x20000 | 0x8000 * v149) + v148; // 0x4624a
    uint32_t v151 = v12 + 0x4e0811a1 + v144 + ((v150 | -1 - v146) ^ v148); // 0x46250
    int32_t v152 = (v151 / 2048 | 0x200000 * v151) + v150; // 0x46265
    result += 64;
    uint32_t v153 = v10 - 0x8ac817e + v146 + ((v152 | -1 - v148) ^ v150); // 0x4626f
    int32_t v154 = (v153 / 0x4000000 | 64 * v153) + v152; // 0x46280
    v5 += v154;
    uint32_t v155 = v39 - 0x42c50dcb + v148 + ((v154 | -1 - v150) ^ v152); // 0x46289
    int32_t v156 = (v155 / 0x400000 | 1024 * v155) + v154; // 0x46292
    int32_t v157 = v156 + v6; // 0x46296
    uint32_t v158 = v17 + 0x2ad7d2bb + v150 + ((v156 | -1 - v152) ^ v154); // 0x4629d
    int32_t v159 = (v158 / 0x20000 | 0x8000 * v158) + v156; // 0x462a7
    int32_t v160 = v159 + v7; // 0x462b2
    uint32_t v161 = v33 - 0x14792c6f + v152 + ((v159 | -1 - v154) ^ v156); // 0x462b7
    int32_t v162 = v159 + v8 + (v161 / 2048 | 0x200000 * v161); // 0x462be
    while ((int32_t)(a3 + a2) != (int32_t)result) {
        // 0x45ba6
        v6 = v157;
        v7 = v160;
        v8 = v162;
        v9 = *(int32_t *)result;
        v10 = *(int32_t *)(result + 16);
        v11 = *(int32_t *)(result + 28);
        v12 = *(int32_t *)(result + 52);
        v13 = *(int32_t *)(result + 4);
        v14 = v5 - 0x28955b88 + v9 + ((v6 ^ v7) & v8 ^ v6);
        v15 = (v14 / 0x2000000 | 128 * v14) + v8;
        v16 = v6 - 0x173848aa + v13 + (v15 & (v7 ^ v8) ^ v7);
        v17 = *(int32_t *)(result + 8);
        v18 = (v16 / 0x100000 | 0x1000 * v16) + v15;
        v19 = v7 + 0x242070db + v17 + (v18 & (v15 ^ v8) ^ v8);
        v20 = *(int32_t *)(result + 12);
        v21 = (v19 / 0x8000 | 0x20000 * v19) + v18;
        v22 = *(int32_t *)(result + 20);
        v23 = v8 - 0x3e423112 + v20 + (v21 & (v18 ^ v15) ^ v15);
        v24 = (v23 / 1024 | 0x400000 * v23) + v21;
        v25 = *(int32_t *)(result + 24);
        v26 = v10 - 0xa83f051 + v15 + (v24 & (v21 ^ v18) ^ v18);
        v27 = (v26 / 0x2000000 | 128 * v26) + v24;
        v28 = *(int32_t *)(result + 32);
        v29 = v22 + 0x4787c62a + v18 + (v27 & (v24 ^ v21) ^ v21);
        v30 = (v29 / 0x100000 | 0x1000 * v29) + v27;
        v31 = v25 - 0x57cfb9ed + v21 + (v30 & (v27 ^ v24) ^ v24);
        v32 = (v31 / 0x8000 | 0x20000 * v31) + v30;
        v33 = *(int32_t *)(result + 36);
        v34 = v11 - 0x2b96aff + v24 + (v32 & (v30 ^ v27) ^ v27);
        v35 = (v34 / 1024 | 0x400000 * v34) + v32;
        v36 = *(int32_t *)(result + 40);
        v37 = v28 + 0x698098d8 + v27 + (v35 & (v32 ^ v30) ^ v30);
        v38 = (v37 / 0x2000000 | 128 * v37) + v35;
        v39 = *(int32_t *)(result + 44);
        v40 = v33 - 0x74bb0851 + v30 + (v38 & (v35 ^ v32) ^ v32);
        v41 = (v40 / 0x100000 | 0x1000 * v40) + v38;
        v42 = v36 - 0xa44f + v32 + (v41 & (v38 ^ v35) ^ v35);
        v43 = (v42 / 0x8000 | 0x20000 * v42) + v41;
        v44 = v39 - 0x76a32842 + v35 + (v43 & (v41 ^ v38) ^ v38);
        v45 = *(int32_t *)(result + 48);
        v46 = (v44 / 1024 | 0x400000 * v44) + v43;
        v47 = *(int32_t *)(result + 60);
        v48 = v45 + 0x6b901122 + v38 + (v46 & (v43 ^ v41) ^ v41);
        v49 = *(int32_t *)(result + 56);
        v50 = (v48 / 0x2000000 | 128 * v48) + v46;
        v51 = v12 - 0x2678e6d + v41 + (v50 & (v46 ^ v43) ^ v43);
        v52 = (v51 / 0x100000 | 0x1000 * v51) + v50;
        v53 = v49 - 0x5986bc72 + v43 + (v52 & (v50 ^ v46) ^ v46);
        v54 = (v53 / 0x8000 | 0x20000 * v53) + v52;
        v55 = v47 + 0x49b40821 + v46 + (v54 & (v52 ^ v50) ^ v50);
        v56 = (v55 / 1024 | 0x400000 * v55) + v54;
        v57 = v13 - 0x9e1da9e + v50 + ((v56 ^ v54) & v52 ^ v54);
        v58 = (v57 / 0x8000000 | 32 * v57) + v56;
        v59 = v25 - 0x3fbf4cc0 + v52 + ((v58 ^ v56) & v54 ^ v56);
        v60 = (v59 / 0x800000 | 512 * v59) + v58;
        v61 = v39 + 0x265e5a51 + v54 + ((v60 ^ v58) & v56 ^ v58);
        v62 = (v61 / 0x40000 | 0x4000 * v61) + v60;
        v63 = v9 - 0x16493856 + v56 + ((v62 ^ v60) & v58 ^ v60);
        v64 = (v63 / 0x1000 | 0x100000 * v63) + v62;
        v65 = v22 - 0x29d0efa3 + v58 + ((v64 ^ v62) & v60 ^ v62);
        v66 = (v65 / 0x8000000 | 32 * v65) + v64;
        v67 = v36 + 0x2441453 + v60 + ((v66 ^ v64) & v62 ^ v64);
        v68 = (v67 / 0x800000 | 512 * v67) + v66;
        v69 = v47 - 0x275e197f + v62 + ((v68 ^ v66) & v64 ^ v66);
        v70 = (v69 / 0x40000 | 0x4000 * v69) + v68;
        v71 = v10 - 0x182c0438 + v64 + ((v70 ^ v68) & v66 ^ v68);
        v72 = (v71 / 0x1000 | 0x100000 * v71) + v70;
        v73 = v33 + 0x21e1cde6 + v66 + ((v72 ^ v70) & v68 ^ v70);
        v74 = (v73 / 0x8000000 | 32 * v73) + v72;
        v75 = v49 - 0x3cc8f82a + v68 + ((v74 ^ v72) & v70 ^ v72);
        v76 = (v75 / 0x800000 | 512 * v75) + v74;
        v77 = v20 - 0xb2af279 + v70 + ((v76 ^ v74) & v72 ^ v74);
        v78 = (v77 / 0x40000 | 0x4000 * v77) + v76;
        v79 = v28 + 0x455a14ed + v72 + ((v78 ^ v76) & v74 ^ v76);
        v80 = (v79 / 0x1000 | 0x100000 * v79) + v78;
        v81 = v12 - 0x561c16fb + v74 + ((v80 ^ v78) & v76 ^ v78);
        v82 = (v81 / 0x8000000 | 32 * v81) + v80;
        v83 = v17 - 0x3105c08 + v76 + ((v82 ^ v80) & v78 ^ v80);
        v84 = (v83 / 0x800000 | 512 * v83) + v82;
        v85 = v11 + 0x676f02d9 + v78 + ((v84 ^ v82) & v80 ^ v82);
        v86 = (v85 / 0x40000 | 0x4000 * v85) + v84;
        v87 = v45 - 0x72d5b376 + v80 + ((v86 ^ v84) & v82 ^ v84);
        v88 = (v87 / 0x1000 | 0x100000 * v87) + v86;
        v89 = v88 ^ v86;
        v90 = v22 - 0x5c6be + v82 + (v89 ^ v84);
        v91 = (v90 / 0x10000000 | 16 * v90) + v88;
        v92 = v28 - 0x788e097f + v84 + (v91 ^ v89);
        v93 = (v92 / 0x200000 | 2048 * v92) + v91;
        v94 = v93 ^ v91;
        v95 = v39 + 0x6d9d6122 + v86 + (v94 ^ v88);
        v96 = (v95 / 0x10000 | 0x10000 * v95) + v93;
        v97 = v49 - 0x21ac7f4 + v88 + (v96 ^ v94);
        v98 = (v97 / 512 | 0x800000 * v97) + v96;
        v99 = v98 ^ v96;
        v100 = v13 - 0x5b4115bc + v91 + (v99 ^ v93);
        v101 = (v100 / 0x10000000 | 16 * v100) + v98;
        v102 = v10 + 0x4bdecfa9 + v93 + (v101 ^ v99);
        v103 = (v102 / 0x200000 | 2048 * v102) + v101;
        v104 = v103 ^ v101;
        v105 = v11 - 0x944b4a0 + v96 + (v104 ^ v98);
        v106 = (v105 / 0x10000 | 0x10000 * v105) + v103;
        v107 = v36 - 0x41404390 + v98 + (v106 ^ v104);
        v108 = (v107 / 512 | 0x800000 * v107) + v106;
        v109 = v108 ^ v106;
        v110 = v12 + 0x289b7ec6 + v101 + (v109 ^ v103);
        v111 = (v110 / 0x10000000 | 16 * v110) + v108;
        v112 = v9 - 0x155ed806 + v103 + (v111 ^ v109);
        v113 = (v112 / 0x200000 | 2048 * v112) + v111;
        v114 = v113 ^ v111;
        v115 = v20 - 0x2b10cf7b + v106 + (v114 ^ v108);
        v116 = (v115 / 0x10000 | 0x10000 * v115) + v113;
        v117 = v25 + 0x4881d05 + v108 + (v116 ^ v114);
        v118 = (v117 / 512 | 0x800000 * v117) + v116;
        v119 = v118 ^ v116;
        v120 = v33 - 0x262b2fc7 + v111 + (v119 ^ v113);
        v121 = (v120 / 0x10000000 | 16 * v120) + v118;
        v122 = v45 - 0x1924661b + v113 + (v121 ^ v119);
        v123 = (v122 / 0x200000 | 2048 * v122) + v121;
        v124 = v123 ^ v121;
        v125 = v47 + 0x1fa27cf8 + v116 + (v124 ^ v118);
        v126 = (v125 / 0x10000 | 0x10000 * v125) + v123;
        v127 = v17 - 0x3b53a99b + v118 + (v126 ^ v124);
        v128 = (v127 / 512 | 0x800000 * v127) + v126;
        v129 = v9 - 0xbd6ddbc + v121 + ((v128 | -1 - v123) ^ v126);
        v130 = (v129 / 0x4000000 | 64 * v129) + v128;
        v131 = v11 + 0x432aff97 + v123 + ((v130 | -1 - v126) ^ v128);
        v132 = (v131 / 0x400000 | 1024 * v131) + v130;
        v133 = v49 - 0x546bdc59 + v126 + ((v132 | -1 - v128) ^ v130);
        v134 = (v133 / 0x20000 | 0x8000 * v133) + v132;
        v135 = v22 - 0x36c5fc7 + v128 + ((v134 | -1 - v130) ^ v132);
        v136 = (v135 / 2048 | 0x200000 * v135) + v134;
        v137 = v45 + 0x655b59c3 + v130 + ((v136 | -1 - v132) ^ v134);
        v138 = (v137 / 0x4000000 | 64 * v137) + v136;
        v139 = v20 - 0x70f3336e + v132 + ((v138 | -1 - v134) ^ v136);
        v140 = (v139 / 0x400000 | 1024 * v139) + v138;
        v141 = v36 - 0x100b83 + v134 + ((v140 | -1 - v136) ^ v138);
        v142 = (v141 / 0x20000 | 0x8000 * v141) + v140;
        v143 = v13 - 0x7a7ba22f + v136 + ((v142 | -1 - v138) ^ v140);
        v144 = (v143 / 2048 | 0x200000 * v143) + v142;
        v145 = v28 + 0x6fa87e4f + v138 + ((v144 | -1 - v140) ^ v142);
        v146 = (v145 / 0x4000000 | 64 * v145) + v144;
        v147 = v47 - 0x1d31920 + v140 + ((v146 | -1 - v142) ^ v144);
        v148 = (v147 / 0x400000 | 1024 * v147) + v146;
        v149 = v25 - 0x5cfebcec + v142 + ((v148 | -1 - v144) ^ v146);
        v150 = (v149 / 0x20000 | 0x8000 * v149) + v148;
        v151 = v12 + 0x4e0811a1 + v144 + ((v150 | -1 - v146) ^ v148);
        v152 = (v151 / 2048 | 0x200000 * v151) + v150;
        result += 64;
        v153 = v10 - 0x8ac817e + v146 + ((v152 | -1 - v148) ^ v150);
        v154 = (v153 / 0x4000000 | 64 * v153) + v152;
        v5 += v154;
        v155 = v39 - 0x42c50dcb + v148 + ((v154 | -1 - v150) ^ v152);
        v156 = (v155 / 0x400000 | 1024 * v155) + v154;
        v157 = v156 + v6;
        v158 = v17 + 0x2ad7d2bb + v150 + ((v156 | -1 - v152) ^ v154);
        v159 = (v158 / 0x20000 | 0x8000 * v158) + v156;
        v160 = v159 + v7;
        v161 = v33 - 0x14792c6f + v152 + ((v159 | -1 - v154) ^ v156);
        v162 = v159 + v8 + (v161 / 2048 | 0x200000 * v161);
    }
    // 0x462cb
    *v1 = v5;
    *v2 = v162;
    *v3 = v160;
    *v4 = v157;
    return result;
}

// Address range: 0x49120a - 0x491976
int64_t function_49120a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = __readfsqword(40); // 0x491221
    int64_t v2 = 0; // bp-904, 0x491255
    int64_t v3; // bp-800, 0x49120a
    char * v4 = (char *)&v3; // bp-848, 0x491270
    int64_t v5 = 0; // bp-832, 0x491284
    int32_t v6 = 0x3f800000; // bp-816, 0x49129c
    v3 = 0;
    int64_t v7 = (int64_t)&v3;
    int64_t v8 = (int64_t)&v5;
    int64_t v9 = 1; // 0x4912bf
    int64_t v10 = 0; // 0x4912bf
    int64_t v11 = 0; // 0x4912bf
    int64_t v12 = 0; // 0x4912bf
    int64_t v13; // 0x49120a
    int64_t v14; // 0x49120a
    int64_t v15; // bp-464, 0x49120a
    int64_t v16; // bp-792, 0x49120a
    uint64_t v17; // 0x49120a
    int64_t v18; // 0x49120a
    int64_t v19; // 0x49120a
    int64_t v20; // 0x49120a
    int128_t v21; // bp-880, 0x49120a
    uint64_t v22; // 0x491361
    int64_t v23; // 0x491378
    int64_t * v24; // 0x491388
    int64_t v25; // 0x49120a
    while (true) {
      lab_0x4912c7:
        // 0x4912c7
        v13 = v12;
        v18 = v9;
        int64_t v26 = function_1ff80(a1, (int64_t *)&v21, v13 + a4, a6 - v13, &v16); // 0x4912ed
        v20 = v18;
        v14 = 0;
        if ((int32_t)v26 < 0) {
            // break -> 0x4918d3
            break;
        }
        // 0x491361
        v17 = v10;
        int128_t v27 = __asm_movups(0x8000000000000000 * v21 >> 64); // 0x49130c
        int128_t v28; // 0x49120a
        int128_t v29 = __asm_movups(v28); // 0x491319
        __asm_rep_movsd_memcpy((char *)&v15, (char *)&v16, 82);
        __asm_movups_133(v28, v27);
        __asm_movups_133(v28, v29);
        function_491e50(&v2, 0, &v15);
        v22 = v13 + a5;
        v23 = function_4efd30(24, 0);
        v24 = (int64_t *)v23;
        *v24 = 0;
        *(int64_t *)(v23 + 16) = v11 + a3;
        int64_t v30 = v23 + 8; // 0x4913a1
        *(int64_t *)v30 = v22;
        v25 = v22 % v18;
        int64_t v31 = function_491098((int64_t *)&v4, v25, v30); // 0x4913b5
        if (v31 == 0) {
            goto lab_0x4913d2;
        } else {
            // 0x4913bf
            if (*(int64_t *)v31 == 0) {
                goto lab_0x4913d2;
            } else {
                // 0x4913c5
                function_4eeb50(v23);
                v19 = v18;
                v10 = v17;
                goto lab_0x49154f;
            }
        }
    }
    goto lab_0x4918d3;
  lab_0x4913d2:;
    int64_t v89 = function_4fbd10(&v6, v18, v17, 1); // 0x4913e6
    char * v90; // 0x49120a
    int64_t v91; // 0x49120a
    int64_t v92; // 0x49120a
    if ((char)v89 == 0) {
        // 0x4913d2
        v90 = v4;
        v92 = v18;
        v91 = v25;
    } else {
        if (v17 != 1) {
            if (v17 >= 0x2000000000000000) {
                // 0x49141d
                function_5423b0();
            }
            int64_t v93 = 8 * v17; // 0x491422
            int64_t v94 = function_4efd30(v93, v18); // 0x49142d
            __asm_rep_stosb_memset((char *)v94, 0, v93);
            int64_t v95 = v94; // 0x49143d
        } else {
            // 0x4913fc
            v3 = 0;
        }
        int64_t v96 = v5; // 0x491447
        v5 = 0;
        int64_t v97 = v96; // 0x491460
        if (v96 != 0) {
            int64_t v98 = v97;
            int64_t v99 = 0;
            int64_t * v100 = (int64_t *)v98; // 0x491468
            int64_t v101 = *v100; // 0x491468
            int64_t v102 = *(int64_t *)(v98 + 8) % v17;
            int64_t * v103 = (int64_t *)(8 * v102 + v7); // 0x491473
            int64_t v104 = *v103; // 0x491473
            int64_t v105; // 0x49120a
            if (v104 != 0) {
                // 0x4914a6
                *v100 = *(int64_t *)v104;
                *(int64_t *)*v103 = v98;
                v105 = v99;
            } else {
                // 0x49147b
                *v100 = v5;
                v5 = v98;
                *v103 = v8;
                v105 = v102;
                if (*v100 != 0) {
                    // 0x49149f
                    *(int64_t *)(8 * v99 + v7) = v98;
                    v105 = v102;
                }
            }
            // 0x491497
            while (v101 != 0) {
                // 0x491462
                v98 = v101;
                v99 = v105;
                v100 = (int64_t *)v98;
                v101 = *v100;
                v102 = *(int64_t *)(v98 + 8) % v17;
                v103 = (int64_t *)(8 * v102 + v7);
                v104 = *v103;
                if (v104 != 0) {
                    // 0x4914a6
                    *v100 = *(int64_t *)v104;
                    *(int64_t *)*v103 = v98;
                    v105 = v99;
                } else {
                    // 0x49147b
                    *v100 = v5;
                    v5 = v98;
                    *v103 = v8;
                    v105 = v102;
                    if (*v100 != 0) {
                        // 0x49149f
                        *(int64_t *)(8 * v99 + v7) = v98;
                        v105 = v102;
                    }
                }
            }
        }
        char * v106 = v4; // 0x4914b7
        if (v106 != (char *)&v3) {
            // 0x4914cc
            function_4eeb50((int64_t)v106);
        }
        char * v107 = (char *)v7; // 0x4914e0
        v4 = v107;
        v90 = v107;
        v92 = v17;
        v91 = v22 % v17;
    }
    int64_t v108 = v92;
    int64_t v109 = (int64_t)v90; // 0x4914ee
    int64_t * v110 = (int64_t *)(8 * v91 + v109); // 0x4914fa
    int64_t v111 = *v110; // 0x4914fa
    if (v111 == 0) {
        int64_t v112 = v5; // 0x491511
        v5 = v23;
        *v24 = v112;
        if (v112 != 0) {
            uint64_t v113 = *(int64_t *)(v112 + 8); // 0x49152a
            *(int64_t *)(8 * (v113 % v108) + v109) = v23;
        }
        // 0x49153c
        *v110 = v8;
    } else {
        // 0x491502
        *v24 = *(int64_t *)v111;
        *(int64_t *)*v110 = v23;
    }
    // 0x491547
    v19 = v108;
    v10 = v17 + 1;
    goto lab_0x49154f;
  lab_0x49154f:
    // 0x49154f
    v9 = v19;
    int64_t v114 = function_491024(&v16); // 0x491557
    char v115; // 0x49120a
    v12 = v13 + (int64_t)(unsigned char)v115;
    v11 += v114;
    int64_t v39; // 0x49120a
    int64_t v47; // 0x49120a
    int64_t v43; // 0x49120a
    int64_t v38; // 0x49120a
    int64_t v45; // 0x49120a
    int64_t v41; // 0x49120a
    int64_t v37; // 0x49120a
    if (v12 >= 5) {
        // 0x491575
        v37 = 0;
        v38 = 0;
        v39 = a2;
        if (v2 == 0) {
            goto lab_0x4918a5;
        } else {
            // 0x49159d
            v47 = a2;
            v45 = v2;
            v43 = 0;
            v41 = 0;
            goto lab_0x49159d_2;
        }
    }
    goto lab_0x4912c7;
  lab_0x4918d3:;
    int64_t v32 = v5; // 0x4918de
    if (v5 != 0) {
        int64_t v33 = *(int64_t *)v32; // 0x4918e0
        function_4eeb50(v32);
        v32 = v33;
        while (v33 != 0) {
            // 0x4918e0
            v33 = *(int64_t *)v32;
            function_4eeb50(v32);
            v32 = v33;
        }
    }
    // 0x4918ed
    __asm_rep_stosb_memset(v4, 0, 8 * v20);
    v5 = 0;
    int64_t v34 = v7; // 0x491934
    if (v4 != (char *)&v3) {
        // 0x491936
        v34 = function_4eeb50((int64_t)v4);
    }
    int64_t v35 = v34; // 0x491943
    if (v2 != 0) {
        // 0x491945
        v35 = function_4eeb50(v2);
    }
    int64_t result = v35 & -256 | v14; // 0x49195d
    if (v1 != __readfsqword(40)) {
        // 0x49195f
        __stack_chk_fail();
        result = (int64_t)&g94;
    }
    // 0x491964
    return result;
  lab_0x4918a5:;
    int64_t v36 = a5 - a3 + v37 + v38; // 0x4918b4
    v20 = v9;
    v14 = 0;
    if (v36 < 0x80000005) {
        // 0x4918c4
        *(char *)v39 = -23;
        *(int32_t *)(v39 + 1) = (int32_t)v36 - 5;
        v20 = v9;
        v14 = 1;
        goto lab_0x4918d3;
    } else {
        goto lab_0x4918d3;
    }
  lab_0x49159d_2:;
    int64_t v40 = v41;
    int64_t v42 = v43;
    int64_t v44 = v45;
    int64_t v46 = v47;
    int64_t v48 = v42 + a4; // 0x4915a2
    char * v49 = (char *)v48; // 0x4915aa
    int64_t v50; // bp-912, 0x49120a
    int64_t v51; // 0x4915fa
    int64_t v52; // 0x491603
    if (*(char *)(v44 + 32) <= -1) {
        int64_t v53 = function_20850(a1, v44 + 328, v44, &v15, 5); // 0x4915e8
        v20 = v9;
        v14 = 0;
        if ((int32_t)v53 < 0) {
            goto lab_0x4918d3;
        } else {
            // 0x4915f5
            v51 = v42 + a5;
            v52 = v40 + a3;
            v50 = (int64_t)&v4;
            uint32_t v54 = *(int32_t *)(v44 + 4); // 0x491617
            if (v54 == 311) {
                char v55 = *(char *)(v44 + 20) & -3;
                if (v55 != -23) {
                    goto lab_0x4917ba;
                } else {
                    int64_t v56 = function_20030(v44, &v15, v51, (int64_t *)&v21); // 0x491702
                    v20 = v9;
                    v14 = 0;
                    if ((int32_t)v56 < 0) {
                        goto lab_0x4918d3;
                    } else {
                        int64_t v57 = function_4910d4(&v50, (int64_t)v21) - v52; // 0x49171e
                        v20 = v9;
                        v14 = 0;
                        if (v57 < 0x80000005) {
                            // 0x491737
                            *(char *)v46 = v55;
                            *(int32_t *)(v46 + 1) = (int32_t)v57 - 5;
                            goto lab_0x491883;
                        } else {
                            goto lab_0x4918d3;
                        }
                    }
                }
            } else {
                if (v54 < 312) {
                    if (v54 < 307) {
                        if (v54 >= 305) {
                            goto lab_0x491748;
                        } else {
                            if (v54 < 303) {
                                goto lab_0x4917ba;
                            } else {
                                goto lab_0x49167c;
                            }
                        }
                    } else {
                        if (v54 < 309) {
                            goto lab_0x4917ba;
                        } else {
                            goto lab_0x49167c;
                        }
                    }
                } else {
                    if (v54 < 325) {
                        if (v54 < 322 || v54 >= 323) {
                            goto lab_0x49167c;
                        } else {
                            goto lab_0x491748;
                        }
                    } else {
                        if (v54 < 415) {
                            goto lab_0x491748;
                        } else {
                            goto lab_0x4917ba;
                        }
                    }
                }
            }
        }
    } else {
        unsigned char v58 = *(char *)(v44 + 8); // 0x4915b1
        __asm_rep_movsb_memcpy((char *)v46, v49, (int64_t)v58);
        goto lab_0x491883;
    }
  lab_0x491883:;
    int64_t v59 = v44 + 360; // 0x491886
    int64_t v60 = function_491024((int64_t *)v44) + v40; // 0x491892
    int64_t v61 = v42 + (int64_t)*(char *)(v44 + 8); // 0x49189d
    int64_t v62 = v60 + a2; // 0x491593
    v47 = v62;
    v45 = v59;
    v43 = v61;
    v41 = v60;
    if (v59 == 0) {
        // 0x491589
        v37 = -v60;
        v38 = v61;
        v39 = v62;
        goto lab_0x4918a5;
    } else {
        goto lab_0x49159d_2;
    }
  lab_0x4917ba:;
    unsigned char v63 = *(char *)(v44 + 8); // 0x4917ba
    __asm_rep_movsb_memcpy((char *)v46, v49, (int64_t)v63);
    unsigned char v64 = *(char *)(v44 + 25); // 0x4917db
    int64_t v65; // 0x49120a
    int64_t v66; // 0x49120a
    char * v67; // 0x49120a
    int64_t v68; // 0x49120a
    int64_t v69; // 0x49120a
    if (v64 == 0) {
        goto lab_0x491883;
    } else {
        // 0x4917e9
        v67 = (char *)(v44 + 272);
        v68 = v44 + 273;
        v69 = v51 - v52;
        v66 = 0;
        v65 = 0;
        goto lab_0x4917e9_2;
    }
  lab_0x4917e9_2:;
    int64_t v70 = v65;
    int64_t v71 = 80 * v66; // 0x4917e9
    int64_t v72; // bp-432, 0x49120a
    int32_t v73 = *(int32_t *)(v71 + (int64_t)&v72); // 0x4917ed
    int64_t v74; // 0x49120a
    int64_t v75; // 0x49120a
    int64_t v76; // 0x49120a
    if (v73 != 4) {
        // 0x49181d
        v75 = v70;
        if (v73 != 2) {
            goto lab_0x491877;
        } else {
            // 0x491822
            v75 = v70;
            int64_t v77; // bp-416, 0x49120a
            if (*(int32_t *)(v71 + (int64_t)&v77) != 197) {
                goto lab_0x491877;
            } else {
                // 0x49182c
                v76 = v70;
                v74 = v68;
                v20 = v9;
                v14 = 0;
                if (*v67 != 32) {
                    goto lab_0x4918d3;
                } else {
                    goto lab_0x491841;
                }
            }
        }
    } else {
        int64_t v78 = v70 + 1; // 0x4917f6
        int64_t v79 = 24 * v70 + v44; // 0x4917fe
        v75 = v78;
        if (*(char *)(v79 + 281) == 0) {
            goto lab_0x491877;
        } else {
            // 0x49180a
            v20 = v9;
            v14 = 0;
            if (*(char *)(v79 + 296) != 32) {
                goto lab_0x4918d3;
            } else {
                // 0x491813
                v76 = v78;
                v74 = v79 + 297;
                goto lab_0x491841;
            }
        }
    }
  lab_0x491748:;
    int64_t v80 = function_20030(v44, &v15, v51, (int64_t *)&v21); // 0x491758
    v20 = v9;
    v14 = 0;
    if ((int32_t)v80 < 0) {
        goto lab_0x4918d3;
    } else {
        // 0x491765
        *(char *)(v46 + 1) = 2;
        *(char *)(v46 + 2) = -21;
        *(char *)(v46 + 3) = 5;
        *(char *)v46 = *(char *)(v44 + 20);
        int64_t v81 = function_4910d4(&v50, (int64_t)v21) - v52; // 0x49178b
        v20 = v9;
        v14 = 0;
        if (v81 < 0x80000009) {
            // 0x4917a8
            *(char *)(v46 + 4) = -23;
            *(int32_t *)(v46 + 5) = (int32_t)v81 - 9;
            goto lab_0x491883;
        } else {
            goto lab_0x4918d3;
        }
    }
  lab_0x49167c:;
    int64_t v82 = function_20030(v44, &v15, v51, (int64_t *)&v21); // 0x49168c
    v20 = v9;
    v14 = 0;
    if ((int32_t)v82 < 0) {
        goto lab_0x4918d3;
    } else {
        int32_t v83 = *(int32_t *)(v44 + 16); // 0x491699
        char v84 = *(char *)(v44 + 20); // 0x49169e
        *(char *)v46 = 15;
        *(char *)(v46 + 1) = v83 == 1 ? v84 : v84 + 16;
        int64_t v85 = function_4910d4(&v50, (int64_t)v21) - v52; // 0x4916bf
        v20 = v9;
        v14 = 0;
        if (v85 < 0x80000006) {
            // 0x4916d8
            *(int32_t *)(v46 + 2) = (int32_t)v85 - 6;
            goto lab_0x491883;
        } else {
            goto lab_0x4918d3;
        }
    }
  lab_0x491877:;
    int64_t v86 = v66 + 1; // 0x491877
    v66 = v86;
    v65 = v75;
    if (v86 < (int64_t)v64) {
        goto lab_0x4917e9_2;
    } else {
        goto lab_0x491883;
    }
  lab_0x491841:;
    int64_t v87 = (int64_t)*(char *)v74;
    int64_t v88 = v69 + (int64_t)*(int32_t *)(v48 + v87); // 0x491860
    v20 = v9;
    v14 = 0;
    if (v88 < 0x80000000) {
        // 0x491870
        *(int32_t *)(v46 + v87) = (int32_t)v88;
        v75 = v76;
        goto lab_0x491877;
    } else {
        goto lab_0x4918d3;
    }
}

// Address range: 0x49dd10 - 0x49e3d4
int64_t function_49dd10(int64_t a1) {
    int64_t v1 = *(int64_t *)*(int64_t *)(a1 + 128); // 0x49dd40
    char * v2 = (char *)(a1 + 372);
    int64_t v3; // 0x49dd10
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g3, "=> parse certificate", v3);
    int32_t v4 = *(int32_t *)(v1 + 24); // 0x49dd54
    int64_t v5 = (int64_t)&g4; // 0x49dd10
    int64_t v6; // 0x49dd10
    int64_t v7; // 0x49dd10
    int64_t v8; // 0x49dd10
    int64_t v9; // 0x49dd10
    int64_t v10; // 0x49dd10
    int64_t v11; // 0x49dd10
    int64_t * v12; // 0x49dd95
    int32_t v13; // 0x49dda8
    int64_t v14; // 0x49ddd0
    switch (v4) {
        case 11: {
            goto lab_0x49df3c;
        }
        case 8: {
            goto lab_0x49df3c;
        }
        case 6: {
            goto lab_0x49df3c;
        }
        case 5: {
            goto lab_0x49df3c;
        }
        default: {
            unsigned char v15 = *v2; // 0x49dd80
            v5 = (int64_t)&g5;
            if (v4 == 7 == (v15 % 2 != 0)) {
                goto lab_0x49df3c;
            } else {
                // 0x49dd95
                v12 = (int64_t *)(a1 + 96);
                int32_t v16 = *(int32_t *)(*v12 + (int64_t)&g27); // 0x49dd9d
                v13 = v16 == 3 ? (int32_t)(*v2 / 4 % 4) : v16;
                if (v15 % 2 != 0 == v13 == 0) {
                    // 0x49e000
                    *(int32_t *)(*(int64_t *)(a1 + 88) + 112) = 128;
                    v5 = (int64_t)&g6;
                    goto lab_0x49df3c;
                } else {
                    int64_t v17 = function_49d220(a1); // 0x49ddbc
                    if ((int32_t)v17 != 0) {
                        int64_t v18 = v17 & 0xffffffff; // 0x49df7e
                        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g7, "mbedtls_ssl_read_record", v18);
                        // 0x49df59
                        return v18 & 0xffffffff;
                    }
                    int32_t * v19 = (int32_t *)(a1 + 8); // 0x49ddcc
                    *v19 = *v19 + 1;
                    unsigned char v20 = *v2; // 0x49ddd0
                    v14 = v20;
                    if (v20 % 2 == 0) {
                        goto lab_0x49dde9;
                    } else {
                        // 0x49ddde
                        if (*(int32_t *)(a1 + 24) != 0) {
                            int64_t v21 = *(int64_t *)(a1 + 272); // 0x49dfa3
                            int64_t v22 = v14 & 2;
                            if (v21 != (v22 == 0 ? 7 : 15)) {
                                goto lab_0x49dde9;
                            } else {
                                // 0x49dfc4
                                if (*(int32_t *)(a1 + 216) != 22) {
                                    // 0x49dfd1
                                    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g9, "bad certificate message", v3);
                                    // 0x49df59
                                    return 0xffff8900;
                                }
                                int64_t v23 = *(int64_t *)(a1 + 200); // 0x49e1e1
                                v11 = (int64_t)&g10;
                                v8 = (int64_t)"bad certificate message";
                                if (*(char *)v23 != 11) {
                                    goto lab_0x49e06c;
                                } else {
                                    uint32_t memcmp_rc = memcmp((int64_t *)(v23 + (v22 == 0 ? 4 : 12)), &g36, 3); // 0x49e20d
                                    int64_t v24 = memcmp_rc; // 0x49e214
                                    v6 = v22;
                                    v10 = v23;
                                    v9 = v24;
                                    v7 = v21;
                                    if (memcmp_rc == 0) {
                                        // 0x49e21d
                                        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g8, "TLSv1 client has no certificate", v24);
                                        *(int32_t *)(*(int64_t *)(a1 + 88) + 112) = 64;
                                        // 0x49df59
                                        return (int64_t)(v13 == 1 ? memcmp_rc : -0x7480) & 0xffffffff;
                                    }
                                    goto lab_0x49de0e;
                                }
                            }
                        } else {
                            goto lab_0x49dde9;
                        }
                    }
                }
            }
        }
    }
  lab_0x49dea0_2:;
    // 0x49dea0
    int64_t * v25; // 0x49dea0
    uint64_t v26 = *v25; // 0x49dea0
    int64_t v27 = v26; // 0x49deaa
    uint64_t v28; // 0x49dede
    int64_t v29 = v28; // 0x49deaa
    int64_t v30; // 0x49dd10
    int64_t v31; // 0x49def6
    if (v28 >= v26) {
        // 0x49dea0
        v30 = v31 & 0xffffffff;
        goto lab_0x49e0b0;
    }
    goto lab_0x49deb0;
  lab_0x49df3c:
    // 0x49df3c
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v5, "<= skip parse certificate", v3);
    int32_t * v41 = (int32_t *)(a1 + 8); // 0x49df55
    *v41 = *v41 + 1;
    // 0x49df59
    return 0;
  lab_0x49dde9:
    // 0x49dde9
    if (*(int32_t *)(a1 + 216) != 22) {
        // 0x49dfd1
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g9, "bad certificate message", v3);
        // 0x49df59
        return 0xffff8900;
    }
    int64_t v42 = *(int64_t *)(a1 + 200); // 0x49ddf6
    v11 = (int64_t)&g10;
    v8 = (int64_t)"bad certificate message";
    if (*(char *)v42 != 11) {
        goto lab_0x49e06c;
    } else {
        // 0x49de07
        v6 = v14 & 2;
        v10 = v42;
        v7 = *(int64_t *)(a1 + 272);
        goto lab_0x49de0e;
    }
  lab_0x49e06c:;
    // 0x49e06c
    int64_t v34; // 0x49dd10
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v11, (char *)v8, v34);
    // 0x49df59
    return 0xffff8600;
  lab_0x49de0e:;
    // 0x49de0e
    int64_t v43; // 0x49dd10
    int64_t v44; // 0x49dd10
    if (v6 != 0) {
        // 0x49e01c
        v11 = (int64_t)&g10;
        v8 = (int64_t)"bad certificate message";
        v34 = v9;
        if (v7 < 18) {
            goto lab_0x49e06c;
        } else {
            unsigned char v45 = *(char *)(v10 + 14); // 0x49e026
            v43 = 256 * (int64_t)*(char *)(v10 + 13) | (int64_t)v45;
            v44 = 12;
            v11 = (int64_t)&g11;
            v8 = (int64_t)"bad certificate message";
            v34 = v9;
            if (*(char *)(v10 + 12) != 0) {
                goto lab_0x49e06c;
            } else {
                goto lab_0x49de40;
            }
        }
    } else {
        // 0x49de18
        v11 = (int64_t)&g10;
        v8 = (int64_t)"bad certificate message";
        v34 = v9;
        if (v7 < 10) {
            goto lab_0x49e06c;
        } else {
            unsigned char v46 = *(char *)(v10 + 6); // 0x49de26
            v43 = 256 * (int64_t)*(char *)(v10 + 5) | (int64_t)v46;
            v44 = 4;
            v11 = (int64_t)&g11;
            v8 = (int64_t)"bad certificate message";
            v34 = v9;
            if (*(char *)(v10 + 4) != 0) {
                goto lab_0x49e06c;
            } else {
                goto lab_0x49de40;
            }
        }
    }
  lab_0x49de40:
    // 0x49de40
    v11 = (int64_t)&g11;
    v8 = (int64_t)"bad certificate message";
    v34 = v9;
    int64_t * v39; // 0x49de4e
    if (v7 != v43 + 3 + v44) {
        goto lab_0x49e06c;
    } else {
        // 0x49de4e
        v39 = (int64_t *)(a1 + 88);
        int64_t * v47 = (int64_t *)(*v39 + 104);
        int64_t v48 = *v47; // 0x49de52
        int64_t * v49 = v47; // 0x49de59
        if (v48 != 0) {
            // 0x49de5b
            function_4ab380(v48);
            free((int64_t *)*(int64_t *)(*v39 + 104));
            v49 = (int64_t *)(*v39 + 104);
        }
        int64_t * mem = calloc(1, (int32_t)&g25); // 0x49de7b
        int64_t v50 = (int64_t)mem; // 0x49de7b
        *v49 = v50;
        if (mem == NULL) {
            int64_t result = function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g12, "alloc(%d bytes) failed", (int64_t)&g25); // 0x49e3c9
            return result;
        }
        int64_t v51 = v44 | 3; // 0x49de90
        function_4ab2f0(v50);
        v25 = (int64_t *)(a1 + 272);
        uint64_t v52 = *v25; // 0x49dea0
        v30 = 0;
        if (v51 >= v52) {
            goto lab_0x49e0b0;
        } else {
            // 0x49deb0
            v27 = v52;
            v29 = v51;
            while (true) {
              lab_0x49deb0:;
                int64_t v32 = *(int64_t *)(a1 + 200); // 0x49deb0
                int64_t v33 = v32 + v29;
                v11 = (int64_t)&g13;
                v8 = (int64_t)"bad certificate message";
                v34 = v9;
                if (*(char *)v33 != 0) {
                    // break -> 0x49e06c
                    break;
                }
                unsigned char v35 = *(char *)(v33 + 2); // 0x49dec6
                uint64_t v36 = 256 * (int64_t)*(char *)(v33 + 1) | (int64_t)v35; // 0x49dece
                v11 = (int64_t)&g14;
                v8 = (int64_t)"bad certificate message";
                v34 = v9;
                if (v36 < 128) {
                    // break -> 0x49e06c
                    break;
                }
                int64_t v37 = v29 + 3; // 0x49ded0
                v28 = v36 + v37;
                v11 = (int64_t)&g14;
                v8 = (int64_t)"bad certificate message";
                v34 = v9;
                if (v27 < v28) {
                    // break -> 0x49e06c
                    break;
                }
                int64_t v38 = *(int64_t *)(*v39 + 104); // 0x49def2
                v31 = function_4ab520(v38, v32 + v37, (int32_t)v36, v27);
                switch ((int32_t)v31) {
                    case -0x262e: {
                        goto lab_0x49dea0_2;
                    }
                    case 0: {
                        goto lab_0x49dea0_2;
                    }
                    default: {
                        int64_t v40 = v31 & 0xffffffff; // 0x49df00
                        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g15, " mbedtls_x509_crt_parse_der", v40);
                        // 0x49df59
                        return v40 & 0xffffffff;
                    }
                }
            }
            goto lab_0x49e06c;
        }
    }
  lab_0x49e0b0:;
    int64_t v53 = *(int64_t *)(*v39 + 104); // 0x49e0cf
    function_49ecc0(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g16, "peer certificate", v53);
    if (*v2 % 2 != 0) {
        goto lab_0x49e0ee;
    } else {
        // 0x49e0e4
        if (*(int32_t *)(a1 + 12) == 1) {
            int64_t v54 = *(int64_t *)(*(int64_t *)(a1 + 80) + 104); // 0x49e312
            if (v54 == 0) {
                // 0x49e3d9
                return 0;
            }
            int64_t n = *(int64_t *)(v54 + 8); // 0x49e323
            int64_t v55 = *(int64_t *)(*v39 + 104); // 0x49e327
            v11 = (int64_t)&g17;
            v8 = (int64_t)"server cert changed during renegotiation";
            v34 = v53;
            if (n != *(int64_t *)(v55 + 8)) {
                goto lab_0x49e06c;
            } else {
                int64_t str2 = *(int64_t *)(v55 + 16); // 0x49e331
                int64_t str = *(int64_t *)(v54 + 16); // 0x49e335
                int32_t memcmp_rc2 = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n); // 0x49e339
                v11 = (int64_t)&g17;
                v8 = (int64_t)"server cert changed during renegotiation";
                v34 = v53;
                if (memcmp_rc2 == 0) {
                    goto lab_0x49e0ee;
                } else {
                    goto lab_0x49e06c;
                }
            }
        } else {
            goto lab_0x49e0ee;
        }
    }
  lab_0x49e0ee:;
    int64_t v56 = v53; // 0x49e0f1
    int64_t v57 = v30; // 0x49e0f1
    if (v13 != 0) {
        int64_t v58 = *v12; // 0x49e0f7
        int64_t v59 = *(int64_t *)(v58 + (int64_t)&g28); // 0x49e0fb
        int64_t v60; // 0x49dd10
        int64_t v61; // 0x49dd10
        if (v59 == 0) {
            int64_t v62 = *(int64_t *)(a1 + 216); // 0x49e360
            v60 = a1 + 224;
            v61 = v62;
            if (v62 == 0) {
                // 0x49e377
                function_49e770(a1, v62 & -256 | 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g18, "got no CA chain", v53);
                // 0x49df59
                return 0xffff8980;
            }
        } else {
            // 0x49e10b
            v60 = v58 + (int64_t)&g29;
            v61 = v59;
        }
        int64_t v63 = *(int64_t *)v60;
        int64_t v64 = *v39; // 0x49e116
        int64_t v65 = *(int64_t *)(a1 + 200); // 0x49e11a
        int64_t v66 = *(int64_t *)(v64 + 104); // 0x49e121
        int64_t v67 = v64 + 112; // 0x49e12a
        int64_t v68 = *(int64_t *)(a1 + 104); // 0x49e12e
        int64_t v69 = *(int64_t *)(a1 + 368); // 0x49e136
        int64_t v70 = function_4aaf50(v66, v61, v63, v65, v69, v67, v68, *(int64_t *)(a1 + 112)); // 0x49e13d
        int64_t v71 = v70 & 0xffffffff; // 0x49e144
        int64_t v72 = v67; // 0x49e147
        if ((int32_t)v70 != 0) {
            // 0x49e2e6
            function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g19, "x509_verify_cert", v71);
            v72 = v71;
        }
        int64_t v73 = *(int64_t *)(*v39 + 104); // 0x49e156
        char * v74; // 0x49dd10
        int64_t v75; // 0x49dd10
        if ((int32_t)function_4c4450(v73 + 328, 2) != 0) {
            int32_t v76 = *(int32_t *)*(int64_t *)(v73 + 336); // 0x49e2a4
            v74 = v2;
            v75 = v71;
            if ((int32_t)function_498bd0(a1, v76) != 0) {
                // 0x49e2b3
                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g20, "bad certificate (EC key curve)", v72);
                v74 = v2;
                v75 = (int32_t)v70 == 0 ? 0xffff8600 : v71;
            }
        } else {
            // 0x49e14d
            v74 = (char *)(v73 + 700);
            v75 = v71;
        }
        int64_t v77 = v75;
        int64_t v78 = *v39; // 0x49e171
        unsigned char v79 = *v74; // 0x49e178
        int64_t v80 = *(int64_t *)(v78 + 104); // 0x49e17f
        int64_t v81 = v77; // 0x49e193
        if ((int32_t)function_498c50(v80, v1, (int32_t)(v79 % 2 ^ 1), v78 + 112) != 0) {
            // 0x49e267
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g21, "bad certificate (usage extensions)", v72);
            v81 = (int32_t)v77 == 0 ? 0xffff8600 : v77 & 0xffffffff;
        }
        // 0x49e199
        v56 = v72;
        v57 = v13 == 1 ? 0 : v81 & 0xffffffff;
    }
    // 0x49e1a6
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g22, "<= parse certificate", v56);
    // 0x49df59
    return v57 & 0xffffffff;
}

// Address range: 0x4a8d50 - 0x4a93d3
int64_t function_4a8d50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4a8d50
    if (a1 == 0 || a2 == 0) {
        // 0x4a8f1e
        return 0xffffd800;
    }
    int64_t v1 = 0; // bp-136, 0x4a8d77
    int64_t v2 = 0; // bp-104, 0x4a8d92
    int64_t v3 = 0; // bp-72, 0x4a8db0
    int64_t v4 = a1; // 0x4a8dd4
    int64_t v5 = v4; // 0x4a8de8
    int64_t result; // 0x4a8d50
    while (*(int32_t *)(v4 + 48) != 0) {
        int64_t * v6 = (int64_t *)(v4 + 408);
        v4 = *v6;
        if (v4 == 0) {
            int64_t * mem = calloc(1, 416); // 0x4a8e00
            int64_t v7 = (int64_t)mem; // 0x4a8e00
            *v6 = v7;
            result = v7;
            if (mem == NULL) {
                return result;
            } else {
                // 0x4a8e15
                function_4a8bb0(v7);
                v5 = *v6;
                goto lab_0x4a8e28;
            }
        }
        v5 = v4;
    }
    goto lab_0x4a8e28;
  lab_0x4a92e6:;
    // 0x4a92e6
    int64_t v57; // 0x4a8d50
    uint64_t v55; // 0x4a929d
    if (v55 != v57) {
        // break -> 0x4a8eeb
        goto lab_0x4a8eeb_3;
    }
    // 0x4a928e
    char * v56; // 0x4a8d50
    int64_t v49 = (int64_t)v56; // 0x4a9293
    goto lab_0x4a921f;
  lab_0x4a921f:;
    // 0x4a921f
    uint64_t v38; // 0x4a9186
    if (v38 <= v49) {
        goto lab_0x4a9060;
    }
    int64_t * mem3 = calloc(1, 104); // 0x4a9232
    int64_t v69 = (int64_t)mem3; // 0x4a9232
    int64_t v42; // 0x4a8d50
    *(int64_t *)(v42 + 96) = v69;
    result = 0;
    int64_t v39 = v69; // 0x4a923f
    if (mem3 == NULL) {
      lab_0x4a8f1e:
        // 0x4a8f1e
        return result;
    }
    goto lab_0x4a919b;
  lab_0x4a9286:;
    // 0x4a9286
    int64_t v61; // 0x4a8d50
    int64_t v70 = v61;
    int64_t v23; // 0x4a8d50
    if ((int32_t)v70 != 0) {
        // 0x4a8eeb
        v23 = v70 & 0xffffffff;
        goto lab_0x4a8eeb_3;
    }
    // 0x4a928e
    char * v8; // bp-168, 0x4a8d50
    v49 = (int64_t)v8;
    goto lab_0x4a921f;
  lab_0x4a8e28:;
    int32_t size = a3; // 0x4a8e30
    int64_t * mem2 = calloc(1, size); // 0x4a8e30
    v8 = (char *)mem2;
    if (mem2 == NULL) {
        // 0x4a8f1e
        return 0xffffd780;
    }
    int64_t v9 = v5;
    int64_t v10 = (int64_t)mem2; // 0x4a8e30
    memcpy(mem2, (int64_t *)a2, size);
    int64_t * v11 = (int64_t *)(v9 + 16); // 0x4a8e54
    *v11 = v10;
    int64_t v12 = v10 + a3; // 0x4a8e5d
    int64_t * v13 = (int64_t *)(v9 + 8); // 0x4a8e65
    *v13 = a3;
    int64_t v14; // bp-176, 0x4a8d50
    if ((int32_t)function_4afe70((int64_t *)&v8, v12, &v14, 48) != 0) {
        // 0x4a916c
        function_4a8c40(v9);
        // 0x4a8f1e
        return 0xffffde80;
    }
    int64_t v15 = (int64_t)v8; // 0x4a8e7e
    if (v12 - v15 != v14) {
        // 0x4a9120
        function_4a8c40(v9);
        // 0x4a8f1e
        return 0xffffde1a;
    }
    int64_t * v16 = (int64_t *)(v9 + 40); // 0x4a8ea1
    *v16 = v15;
    int64_t v17 = function_4afe70((int64_t *)&v8, v12, &v14, 48); // 0x4a8eaa
    if ((int32_t)v17 != 0) {
        // 0x4a8f10
        function_4a8c40(v9);
        // 0x4a8f1e
        return v17 + 0xffffde80 & 0xffffffff;
    }
    uint64_t v18 = v14 + (int64_t)v8; // 0x4a8eba
    int64_t v19 = v9 + 48; // 0x4a8ebf
    *(int64_t *)(v9 + 32) = v18 - *v16;
    int32_t v20 = function_4aff10((int64_t *)&v8, v18, v19); // 0x4a8edb
    int64_t v21; // 0x4a8f40
    switch (v20) {
        case -98: {
            // 0x4a8f30
            *(int32_t *)v19 = 0;
        }
        case 0: {
          lab_0x4a8f40:
            // 0x4a8f40
            v21 = v9 + 56;
            int64_t v22 = function_4ac610((int64_t *)&v8, v18, v21, &v1); // 0x4a8f54
            v23 = v22;
            if ((int32_t)v22 != 0) {
                // 0x4a8eeb
                function_4a8c40(v9);
                return v23 & 0xffffffff;
            }
            // break -> 0x4a8f5d
            break;
        }
        default: {
            uint32_t v24 = v20 - (int32_t)&g24; // 0x4a8ee4
            v23 = v24;
            if (v24 != 0) {
                // 0x4a8eeb
                function_4a8c40(v9);
                return v23 & 0xffffffff;
            }
            // branch (via goto) -> 0x4a8f40
            goto lab_0x4a8f40;
        }
    }
    int32_t * v25 = (int32_t *)v19; // 0x4a8f5d
    int32_t v26 = *v25 + 1; // 0x4a8f60
    *v25 = v26;
    if (v26 > 2) {
        // 0x4a9307
        function_4a8c40(v9);
        // 0x4a8f1e
        return 0xffffda80;
    }
    int64_t v27 = function_4ad100(v21, &v1, v9 + 392, v9 + 396, v9 + 400); // 0x4a8f8c
    if ((int32_t)v27 != 0) {
        // 0x4a92f5
        function_4a8c40(v9);
        // 0x4a8f1e
        return 0xffffda00;
    }
    int64_t * v28 = (int64_t *)(v9 + 96); // 0x4a8fb0
    *v28 = (int64_t)v8;
    int64_t v29 = function_4afe70((int64_t *)&v8, v18, &v14, 48); // 0x4a8fb4
    if ((int32_t)v29 != 0) {
        // 0x4a9148
        function_4a8c40(v9);
        // 0x4a8f1e
        return v29 - (int64_t)(int32_t)&g23 & 0xffffffff;
    }
    int64_t v30 = function_4ac9e0((int64_t *)&v8, v14 + (int64_t)v8, v9 + 104); // 0x4a8fd4
    v23 = v30;
    if ((int32_t)v30 != 0) {
        // 0x4a8eeb
        function_4a8c40(v9);
        return v23 & 0xffffffff;
    }
    // 0x4a8fe1
    *(int64_t *)(v9 + 88) = (int64_t)v8 - *v28;
    int64_t v31 = function_4acba0((int64_t *)&v8, v18, v9 + 168); // 0x4a8ffd
    v23 = v31;
    if ((int32_t)v31 != 0) {
        // 0x4a8eeb
        function_4a8c40(v9);
        return v23 & 0xffffffff;
    }
    int64_t v32 = function_4acba0((int64_t *)&v8, v18, v9 + 192); // 0x4a9019
    v23 = v32;
    switch ((int32_t)v32) {
        case -0x2460: {
        }
        case -0x2462: {
        }
        case 0: {
            // 0x4a902d
            int64_t v33; // bp-144, 0x4a8d50
            if (v18 != (int64_t)v8) {
                // 0x4a9034
                int64_t v34; // bp-160, 0x4a8d50
                int64_t v35 = function_4afe70((int64_t *)&v8, v18, &v34, 48); // 0x4a9046
                int32_t v36 = v35; // 0x4a904b
                if (v36 == 0) {
                    uint64_t v37 = (int64_t)v8; // 0x4a917e
                    v38 = v34 + v37;
                    if (v38 > v37) {
                        // 0x4a9194
                        v39 = v9 + 216;
                        while (true) {
                          lab_0x4a919b:;
                            // 0x4a919b
                            int64_t v40; // bp-152, 0x4a8d50
                            int64_t v41 = function_4afe70((int64_t *)&v8, v38, &v40, 48); // 0x4a91ad
                            v23 = v41;
                            if ((int32_t)v41 != 0) {
                                // break -> 0x4a8eeb
                                break;
                            }
                            // 0x4a91ba
                            v42 = v39;
                            int64_t v43 = (int64_t)v8; // 0x4a91ba
                            *(int64_t *)(v42 + 8) = v40;
                            uint64_t v44 = v40 + v43; // 0x4a91d1
                            *(int64_t *)(v42 + 16) = v43;
                            *(int32_t *)v42 = (int32_t)*v8;
                            int64_t v45 = function_4ac570((int64_t *)&v8, v44, v42 + 24); // 0x4a91e5
                            v23 = v45;
                            if ((int32_t)v45 != 0) {
                                // break -> 0x4a8eeb
                                break;
                            }
                            int64_t v46 = function_4acba0((int64_t *)&v8, v44, v42 + 48); // 0x4a91ff
                            v23 = v46;
                            if ((int32_t)v46 != 0) {
                                // break -> 0x4a8eeb
                                break;
                            }
                            char * v47 = v8; // 0x4a920c
                            int64_t v48 = (int64_t)v47; // 0x4a920c
                            v33 = 0;
                            v49 = v48;
                            if (v44 > v48) {
                                int64_t * v50 = (int64_t *)(v42 + 88); // 0x4a9255
                                *v50 = v48;
                                *(int32_t *)(v42 + 72) = (int32_t)*v47;
                                int64_t * v51 = (int64_t *)(v42 + 80); // 0x4a926c
                                int64_t v52 = function_4afe70((int64_t *)&v8, v44, v51, 48); // 0x4a926c
                                int32_t v53 = v52; // 0x4a9271
                                if (v53 == 0) {
                                    int64_t v54 = (int64_t)v8; // 0x4a9295
                                    v55 = *v51 + v54;
                                    v56 = v8;
                                    v57 = v54;
                                    if (v55 > v54) {
                                        int64_t v58 = function_4afe70((int64_t *)&v8, v55, &v33, 48); // 0x4a92d6
                                        while ((int32_t)v58 == 0) {
                                            int64_t v59 = v33 + (int64_t)v8; // 0x4a92b5
                                            char * v60 = (char *)v59;
                                            v8 = v60;
                                            v56 = v60;
                                            v57 = v59;
                                            if (v55 <= v59) {
                                                goto lab_0x4a92e6;
                                            }
                                            v58 = function_4afe70((int64_t *)&v8, v55, &v33, 48);
                                        }
                                        // 0x4a92df
                                        v61 = v58 - (int64_t)(int32_t)&g26;
                                        goto lab_0x4a9286;
                                    } else {
                                        goto lab_0x4a92e6;
                                    }
                                } else {
                                    // 0x4a9277
                                    v61 = v52 + 0xffffdb00;
                                    if (v53 == -98) {
                                        // 0x4a9319
                                        *v50 = 0;
                                        v49 = (int64_t)v8;
                                        goto lab_0x4a921f;
                                    } else {
                                        goto lab_0x4a9286;
                                    }
                                }
                            } else {
                                goto lab_0x4a921f;
                            }
                        }
                        // 0x4a8eeb
                        function_4a8c40(v9);
                        return v23 & 0xffffffff;
                    }
                } else {
                    // 0x4a9053
                    if (v36 != -98) {
                        // 0x4a8eeb
                        function_4a8c40(v9);
                        return v35 & 0xffffffff;
                    }
                }
            }
          lab_0x4a9060:
            // 0x4a9060
            if (*v25 == 2) {
                // 0x4a933c
                v33 = 0;
                int64_t v62 = function_4ad200((int64_t *)&v8, v18, v9 + 320, 0); // 0x4a9356
                int32_t v63 = v62; // 0x4a935b
                if (v63 != 0) {
                    // 0x4a93c2
                    if (v63 != -98) {
                        // 0x4a8eeb
                        function_4a8c40(v9);
                        return v62 & 0xffffffff;
                    }
                } else {
                    int64_t result2 = (int64_t)v8; // 0x4a935f
                    if (v18 <= result2) {
                        // 0x4a8f1e
                        return result2;
                    }
                    int32_t v64 = function_4afe70((int64_t *)&v8, v18, &v33, 48);
                    while (v64 == 0) {
                        int64_t v65 = v33 + (int64_t)v8; // 0x4a9375
                        v8 = (char *)v65;
                        result = v65;
                        if (v18 <= v65) {
                            // 0x4a8f1e
                            return result;
                        }
                        v64 = function_4afe70((int64_t *)&v8, v18, &v33, 48);
                    }
                    uint32_t v66 = v64 - (int32_t)&g26; // 0x4a939f
                    if (v66 != 0) {
                        // 0x4a8eeb
                        function_4a8c40(v9);
                        return (int64_t)v66 & 0xffffffff;
                    }
                }
            }
            // 0x4a906a
            if (v18 != (int64_t)v8) {
                // 0x4a9120
                function_4a8c40(v9);
                // 0x4a8f1e
                return 0xffffde1a;
            }
            int64_t v67 = *v13 + *v11; // 0x4a9079
            int64_t v68 = function_4ac610((int64_t *)&v8, v67, (int64_t)&v3, &v2); // 0x4a9092
            if ((int32_t)v68 != 0) {
                // 0x4a8eeb
                function_4a8c40(v9);
                return v68 & 0xffffffff;
            }
            int64_t n = *(int64_t *)(v9 + 64); // 0x4a909f
            if (n != 0) {
                // 0x4a93b0
                function_4a8c40(v9);
                // 0x4a8f1e
                return 0xffffd980;
            }
            int64_t str = *(int64_t *)(v9 + 72); // 0x4a90b1
            if (memcmp((int64_t *)str, NULL, (int32_t)n) != 0) {
                // 0x4a93b0
                function_4a8c40(v9);
                // 0x4a8f1e
                return 0xffffd980;
            }
            int64_t result3 = function_4ad070((int64_t *)&v8, v67, v9 + 368); // 0x4a9105
            if ((int32_t)result3 != 0) {
                // 0x4a8eeb
                function_4a8c40(v9);
                return result3 & 0xffffffff;
            }
            // 0x4a9112
            if (v67 == (int64_t)v8) {
                // 0x4a8f1e
                return result3;
            }
            // 0x4a9120
            function_4a8c40(v9);
            // 0x4a8f1e
            return 0xffffde1a;
        }
    }
  lab_0x4a8eeb_3:
    // 0x4a8eeb
    function_4a8c40(v9);
    return v23 & 0xffffffff;
}

// Address range: 0x4b1fc0 - 0x4b266e
int64_t function_4b1fc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4b1fc0
    if ((int32_t)function_4b1680(a4, 0) == 0) {
        // 0x4b20b0
        return 0xfffffff4;
    }
    // 0x4b2009
    int64_t v1; // bp-216, 0x4b1fc0
    function_4b0870(&v1);
    int64_t v2; // bp-184, 0x4b1fc0
    function_4b0870(&v2);
    int64_t v3; // bp-152, 0x4b1fc0
    function_4b0870(&v3);
    int64_t v4; // bp-120, 0x4b1fc0
    function_4b0870(&v4);
    int64_t v5; // bp-88, 0x4b1fc0
    function_4b0870(&v5);
    int64_t v6; // 0x4b1fc0
    int64_t v7; // 0x4b1fc0
    int64_t v8; // 0x4b217e
    if ((int32_t)function_4b1300(a3, a4) < 0) {
        if (a1 == 0) {
            goto lab_0x4b210a;
        } else {
            int64_t v9 = function_4b0d80(a1, 0); // 0x4b20fa
            v6 = v9 & 0xffffffff;
            if ((int32_t)v9 != 0) {
                goto lab_0x4b2072;
            } else {
                goto lab_0x4b210a;
            }
        }
    } else {
        int64_t v10 = function_4b0ac0(&v1, a3); // 0x4b2062
        v6 = v10 & 0xffffffff;
        if ((int32_t)v10 == 0) {
            int64_t v11 = function_4b0ac0(&v2, a4); // 0x4b213b
            v6 = v11 & 0xffffffff;
            if ((int32_t)v11 != 0) {
                goto lab_0x4b2072;
            } else {
                // 0x4b214b
                v2 = 1;
                v1 = 1;
                int64_t v12 = function_4b08f0(&v3, *(int64_t *)(a3 + 8) + 2); // 0x4b216e
                v6 = v12 & 0xffffffff;
                if ((int32_t)v12 != 0) {
                    goto lab_0x4b2072;
                } else {
                    // 0x4b217e
                    v8 = (int64_t)&v3;
                    int64_t v13 = function_4b0d80(v8, 0); // 0x4b2188
                    v6 = v13 & 0xffffffff;
                    if ((int32_t)v13 != 0) {
                        goto lab_0x4b2072;
                    } else {
                        int64_t v14 = function_4b08f0(&v4, 2); // 0x4b21a5
                        v6 = v14 & 0xffffffff;
                        if ((int32_t)v14 != 0) {
                            goto lab_0x4b2072;
                        } else {
                            int64_t v15 = function_4b08f0(&v5, 3); // 0x4b21c2
                            v6 = v15 & 0xffffffff;
                            if ((int32_t)v15 != 0) {
                                goto lab_0x4b2072;
                            } else {
                                uint64_t v16 = function_4b0f10(&v2) % 64; // 0x4b21df
                                v7 = 0;
                                if (v16 == 63) {
                                    goto lab_0x4b2231;
                                } else {
                                    int64_t v17 = v16 ^ 63; // 0x4b21f5
                                    int64_t v18 = function_4b1100(&v1, v17); // 0x4b2204
                                    v6 = v18 & 0xffffffff;
                                    if ((int32_t)v18 != 0) {
                                        goto lab_0x4b2072;
                                    } else {
                                        int64_t v19 = function_4b1100(&v2, v17); // 0x4b2221
                                        v6 = v19 & 0xffffffff;
                                        v7 = v17;
                                        if ((int32_t)v19 != 0) {
                                            goto lab_0x4b2072;
                                        } else {
                                            goto lab_0x4b2231;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            goto lab_0x4b2072;
        }
    }
  lab_0x4b22e5:;
    // 0x4b22e5
    int64_t v20; // 0x4b226b
    int64_t v21 = function_4b1220(&v2, v20); // 0x4b22f2
    int64_t v22 = v21 & 0xffffffff; // 0x4b22f9
    v6 = v22;
    int64_t v23; // 0x4b1fc0
    int64_t v24; // 0x4b1fc0
    int64_t v25; // 0x4b1fc0
    int64_t v26; // 0x4b1fc0
    int64_t v27; // 0x4b1fc0
    int64_t v28; // 0x4b1fc0
    uint64_t v29; // 0x4b2246
    int64_t v30; // 0x4b224f
    int64_t v31; // 0x4b1fc0
    if ((int32_t)v21 != 0) {
        goto lab_0x4b2072;
    } else {
        // 0x4b2302
        v24 = v30;
        v25 = v23;
        if (v30 > v29) {
            int64_t v32 = 0x100000000 * v27;
            int64_t v33 = 8 * (int32_t)v29; // 0x4b2372
            int64_t * v34 = (int64_t *)(v27 + v33); // 0x4b237b
            int64_t v35 = (v32 >> 29) - 8; // 0x4b23b2
            int64_t v36 = v30; // 0x4b25fa
            int64_t v37 = v35 + v27;
            int64_t * v38 = (int64_t *)v37; // 0x4b2377
            uint64_t v39 = *v38; // 0x4b2377
            uint64_t v40 = *v34; // 0x4b237b
            v26 = v40;
            int64_t v41 = (-0x800000000 * v28 >> 32) + v27 + v35;
            int64_t * v42; // 0x4b1fc0
            int64_t * v43; // 0x4b1fc0
            int64_t * v44; // 0x4b1fc0
            if (v39 < v40) {
                // 0x4b24f2
                __udivti3(*(int64_t *)(v37 - 8), v39);
                v43 = (int64_t *)v41;
                *v43 = -1;
                v42 = v43;
            } else {
                // 0x4b2388
                v44 = (int64_t *)v41;
                *v44 = -1;
                v42 = v44;
            }
            int64_t v45 = 64 * ((v32 >> 32) - v28) - 64;
            *v42 = 0;
            v35 -= 8;
            int64_t * v46 = (int64_t *)(v37 - 16);
            *v42 = -1;
            int64_t v47 = function_4b0d80((int64_t)&v4, 0); // 0x4b2485
            int64_t v48 = v47; // 0x4b248c
            if ((int32_t)v47 != 0) {
                // 0x4b22cf
                v6 = v48 & 0xffffffff;
                goto lab_0x4b2072;
            }
            int64_t v49 = 0; // 0x4b24a0
            if (v29 != 0) {
                // 0x4b23c0
                v49 = *(int64_t *)(v27 - 16 + 8 * v28);
            }
            // 0x4b23d1
            *(int64_t *)v27 = v49;
            *(int64_t *)(v26 + 8) = *v34;
            int64_t v50 = function_4b1c60(&v4, &v4, *v42, v33); // 0x4b23f8
            v48 = v50;
            if ((int32_t)v50 != 0) {
                // 0x4b22cf
                v6 = v48 & 0xffffffff;
                goto lab_0x4b2072;
            }
            int64_t v51 = function_4b0d80((int64_t)&v5, 0); // 0x4b240f
            v48 = v51;
            if ((int32_t)v51 != 0) {
                // 0x4b22cf
                v6 = v48 & 0xffffffff;
                goto lab_0x4b2072;
            }
            int64_t v52 = 0; // 0x4b242a
            if (v36 != 1) {
                // 0x4b2430
                v52 = *v46;
            }
            // 0x4b243e
            *(int64_t *)v27 = v52;
            int64_t v53 = *(int64_t *)(v35 + v27); // 0x4b2441
            *(int64_t *)(v26 + 8) = v53;
            *(int64_t *)(v26 + 16) = *v38;
            int64_t v54 = function_4b1590(&v4, &v5, v26, v53); // 0x4b2461
            int64_t v55 = *v42;
            while ((int32_t)v54 >= 1) {
                // 0x4b2476
                *v42 = v55 - 1;
                v47 = function_4b0d80((int64_t)&v4, 0);
                v48 = v47;
                if ((int32_t)v47 != 0) {
                    // 0x4b22cf
                    v6 = v48 & 0xffffffff;
                    goto lab_0x4b2072;
                }
                // 0x4b2492
                v49 = 0;
                if (v29 != 0) {
                    // 0x4b23c0
                    v49 = *(int64_t *)(v27 - 16 + 8 * v28);
                }
                // 0x4b23d1
                *(int64_t *)v27 = v49;
                *(int64_t *)(v26 + 8) = *v34;
                v50 = function_4b1c60(&v4, &v4, *v42, v33);
                v48 = v50;
                if ((int32_t)v50 != 0) {
                    // 0x4b22cf
                    v6 = v48 & 0xffffffff;
                    goto lab_0x4b2072;
                }
                // 0x4b2405
                v51 = function_4b0d80((int64_t)&v5, 0);
                v48 = v51;
                if ((int32_t)v51 != 0) {
                    // 0x4b22cf
                    v6 = v48 & 0xffffffff;
                    goto lab_0x4b2072;
                }
                // 0x4b241c
                v52 = 0;
                if (v36 != 1) {
                    // 0x4b2430
                    v52 = *v46;
                }
                // 0x4b243e
                *(int64_t *)v27 = v52;
                v53 = *(int64_t *)(v35 + v27);
                *(int64_t *)(v26 + 8) = v53;
                *(int64_t *)(v26 + 16) = *v38;
                v54 = function_4b1590(&v4, &v5, v26, v53);
                v55 = *v42;
            }
            int64_t v56 = function_4b1c60(&v4, &v2, v55, v53); // 0x4b25a6
            v48 = v56;
            while ((int32_t)v56 == 0) {
                int64_t v57 = function_4b1100(&v4, v45); // 0x4b25c0
                v48 = v57;
                if ((int32_t)v57 != 0) {
                    // break -> 0x4b22cf
                    break;
                }
                int64_t v58 = function_4b19a0(&v1, &v1, &v4); // 0x4b25dd
                v48 = v58;
                if ((int32_t)v58 != 0) {
                    // break -> 0x4b22cf
                    break;
                }
                // 0x4b25ea
                if ((int32_t)function_4b1680((int64_t)&v1, 0) < 0) {
                    int64_t v59 = function_4b0ac0(&v4, v31); // 0x4b262a
                    if ((int32_t)v59 != 0) {
                        // 0x4b22cf
                        v6 = v59 & 0xffffffff;
                        goto lab_0x4b2072;
                    } else {
                        int64_t v60 = function_4b1100(&v4, v45); // 0x4b2644
                        if ((int32_t)v60 != 0) {
                            // 0x4b22cf
                            v6 = v60 & 0xffffffff;
                            goto lab_0x4b2072;
                        } else {
                            int64_t result = function_4b1900(&v1, &v1, &v4); // 0x4b2661
                            if ((int32_t)result == 0) {
                                // 0x4b266e
                                return result;
                            }
                            // 0x4b22cf
                            v6 = result & 0xffffffff;
                            goto lab_0x4b2072;
                        }
                    }
                }
                // 0x4b2355
                v36--;
                v24 = v53;
                v25 = v26;
                if (v36 <= v29) {
                    goto lab_0x4b24fb;
                }
                v37 = v35 + v27;
                v38 = (int64_t *)v37;
                v39 = *v38;
                v40 = *v34;
                v26 = v40;
                v41 = (-0x800000000 * v28 >> 32) + v27 + v35;
                if (v39 < v40) {
                    // 0x4b24f2
                    __udivti3(*(int64_t *)(v37 - 8), v39);
                    v43 = (int64_t *)v41;
                    *v43 = -1;
                    v42 = v43;
                } else {
                    // 0x4b2388
                    v44 = (int64_t *)v41;
                    *v44 = -1;
                    v42 = v44;
                }
                // 0x4b23a9
                v45 -= 64;
                *v42 = 0;
                v35 -= 8;
                v46 = (int64_t *)(v37 - 16);
                *v42 = -1;
                v47 = function_4b0d80((int64_t)&v4, 0);
                v48 = v47;
                if ((int32_t)v47 != 0) {
                    // 0x4b22cf
                    v6 = v48 & 0xffffffff;
                    goto lab_0x4b2072;
                }
                // 0x4b2492
                v49 = 0;
                if (v29 != 0) {
                    // 0x4b23c0
                    v49 = *(int64_t *)(v27 - 16 + 8 * v28);
                }
                // 0x4b23d1
                *(int64_t *)v27 = v49;
                *(int64_t *)(v26 + 8) = *v34;
                v50 = function_4b1c60(&v4, &v4, *v42, v33);
                v48 = v50;
                if ((int32_t)v50 != 0) {
                    // 0x4b22cf
                    v6 = v48 & 0xffffffff;
                    goto lab_0x4b2072;
                }
                // 0x4b2405
                v51 = function_4b0d80((int64_t)&v5, 0);
                v48 = v51;
                if ((int32_t)v51 != 0) {
                    // 0x4b22cf
                    v6 = v48 & 0xffffffff;
                    goto lab_0x4b2072;
                }
                // 0x4b241c
                v52 = 0;
                if (v36 != 1) {
                    // 0x4b2430
                    v52 = *v46;
                }
                // 0x4b243e
                *(int64_t *)v27 = v52;
                v53 = *(int64_t *)(v35 + v27);
                *(int64_t *)(v26 + 8) = v53;
                *(int64_t *)(v26 + 16) = *v38;
                v54 = function_4b1590(&v4, &v5, v26, v53);
                v55 = *v42;
                while ((int32_t)v54 >= 1) {
                    // 0x4b2476
                    *v42 = v55 - 1;
                    v47 = function_4b0d80((int64_t)&v4, 0);
                    v48 = v47;
                    if ((int32_t)v47 != 0) {
                        // 0x4b22cf
                        v6 = v48 & 0xffffffff;
                        goto lab_0x4b2072;
                    }
                    // 0x4b2492
                    v49 = 0;
                    if (v29 != 0) {
                        // 0x4b23c0
                        v49 = *(int64_t *)(v27 - 16 + 8 * v28);
                    }
                    // 0x4b23d1
                    *(int64_t *)v27 = v49;
                    *(int64_t *)(v26 + 8) = *v34;
                    v50 = function_4b1c60(&v4, &v4, *v42, v33);
                    v48 = v50;
                    if ((int32_t)v50 != 0) {
                        // 0x4b22cf
                        v6 = v48 & 0xffffffff;
                        goto lab_0x4b2072;
                    }
                    // 0x4b2405
                    v51 = function_4b0d80((int64_t)&v5, 0);
                    v48 = v51;
                    if ((int32_t)v51 != 0) {
                        // 0x4b22cf
                        v6 = v48 & 0xffffffff;
                        goto lab_0x4b2072;
                    }
                    // 0x4b241c
                    v52 = 0;
                    if (v36 != 1) {
                        // 0x4b2430
                        v52 = *v46;
                    }
                    // 0x4b243e
                    *(int64_t *)v27 = v52;
                    v53 = *(int64_t *)(v35 + v27);
                    *(int64_t *)(v26 + 8) = v53;
                    *(int64_t *)(v26 + 16) = *v38;
                    v54 = function_4b1590(&v4, &v5, v26, v53);
                    v55 = *v42;
                }
                // 0x4b258a
                v56 = function_4b1c60(&v4, &v2, v55, v53);
                v48 = v56;
            }
            // 0x4b22cf
            v6 = v48 & 0xffffffff;
            goto lab_0x4b2072;
        } else {
            goto lab_0x4b24fb;
        }
    }
  lab_0x4b24fb:
    if (a1 == 0) {
        goto lab_0x4b252c;
    } else {
        int64_t v61 = function_4b0ac0((int64_t *)a1, v8); // 0x4b2515
        if ((int32_t)v61 != 0) {
            // 0x4b22cf
            v6 = v61 & 0xffffffff;
            goto lab_0x4b2072;
        } else {
            // 0x4b2522
            *(int32_t *)a1 = (int32_t)v25 * (int32_t)v24;
            goto lab_0x4b252c;
        }
    }
  lab_0x4b210a:
    // 0x4b210a
    if (a2 == 0) {
        // 0x4b20b0
        return 0;
    }
    int64_t v62 = function_4b0ac0((int64_t *)a2, a3); // 0x4b2115
    v6 = v62 & 0xffffffff;
    if ((int32_t)v62 == 0) {
        // 0x4b20b0
        return 0;
    }
    goto lab_0x4b2072;
  lab_0x4b2072:
    // 0x4b2072
    function_4b0890(&v1);
    function_4b0890(&v2);
    function_4b0890(&v3);
    function_4b0890(&v4);
    function_4b0890(&v5);
    // 0x4b20b0
    return v6 & 0xffffffff;
  lab_0x4b2231:;
    // 0x4b2231
    int128_t v63; // 0x4b1fc0
    v28 = v63;
    v29 = v28 - 1;
    v30 = v27 - 1;
    int64_t v64 = v30 - v29; // 0x4b225b
    v20 = 64 * v64;
    int64_t v65 = function_4b1100(&v2, v20); // 0x4b2274
    v26 = v64;
    v6 = v65 & 0xffffffff;
    if ((int32_t)v65 != 0) {
        goto lab_0x4b2072;
    } else {
        // 0x4b2289
        v31 = (int64_t)&v2;
        int64_t * v66 = (int64_t *)(8 * v64 + v27);
        int64_t v67 = function_4b1590(&v1, &v2, v64, v30); // 0x4b229e
        v23 = v64;
        if ((int32_t)v67 < 0) {
            goto lab_0x4b22e5;
        } else {
            v26 = v31;
            *v66 = *v66 + 1;
            int64_t v68 = function_4b19a0(&v1, &v1, &v2); // 0x4b22c6
            while ((int32_t)v68 == 0) {
                int64_t v69 = function_4b1590(&v1, &v2, v26, v30); // 0x4b229e
                v23 = v26;
                if ((int32_t)v69 < 0) {
                    goto lab_0x4b22e5;
                }
                v26 = v31;
                *v66 = *v66 + 1;
                v68 = function_4b19a0(&v1, &v1, &v2);
            }
            // 0x4b22cf
            v6 = v68 & 0xffffffff;
            goto lab_0x4b2072;
        }
    }
  lab_0x4b252c:
    // 0x4b252c
    v6 = v22;
    if (a2 == 0) {
        goto lab_0x4b2072;
    } else {
        int64_t v70 = function_4b1220(&v1, v7); // 0x4b253f
        if ((int32_t)v70 != 0) {
            // 0x4b22cf
            v6 = v70 & 0xffffffff;
            goto lab_0x4b2072;
        } else {
            // 0x4b254c
            v1 = (int64_t)*(int32_t *)&v26;
            int64_t v71 = function_4b0ac0((int64_t *)a2, (int64_t)&v1); // 0x4b255b
            if ((int32_t)v71 != 0) {
                // 0x4b22cf
                v6 = v71 & 0xffffffff;
                goto lab_0x4b2072;
            } else {
                // 0x4b2568
                v6 = v22;
                if ((int32_t)function_4b1680(a2, 0) == 0) {
                    // 0x4b257a
                    *(int32_t *)a2 = 1;
                    v6 = 0;
                }
                goto lab_0x4b2072;
            }
        }
    }
}

// Address range: 0x4b9690 - 0x4b9dd5
int64_t function_4b9690(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b9690
    g89++;
    int64_t v1; // bp-168, 0x4b9690
    function_4b0870(&v1);
    int32_t v2; // bp-136, 0x4b9690
    function_4b0870((int64_t *)&v2);
    int32_t v3; // bp-104, 0x4b9690
    function_4b0870((int64_t *)&v3);
    int32_t v4; // bp-72, 0x4b9690
    function_4b0870((int64_t *)&v4);
    int64_t v5; // 0x4b9690
    int64_t v6; // 0x4b9690
    int64_t v7; // 0x4b9690
    int64_t v8; // 0x4b9690
    if (*(int64_t *)(a1 + 48) == 0) {
        int64_t v9 = a3 + 48; // 0x4b98e8
        int64_t v10 = function_4b1ac0((int64_t *)&v2, v9, v9); // 0x4b98f4
        v6 = v10;
        if ((int32_t)v10 != 0) {
            goto lab_0x4b9708_13;
        } else {
            int64_t v11 = function_4b95a0((int64_t *)&v2, a1); // 0x4b9909
            v6 = v11;
            if ((int32_t)v11 != 0) {
                goto lab_0x4b9708_13;
            } else {
                // 0x4b9916
                g90++;
                int64_t * v12 = (int64_t *)a3; // 0x4b992b
                int64_t v13 = function_4b1900((int64_t *)&v3, v12, (int64_t *)&v2); // 0x4b992b
                v6 = v13;
                if ((int32_t)v13 != 0) {
                    goto lab_0x4b9708_13;
                } else {
                    int64_t v14 = a1 + 8; // 0x4b9938
                    int64_t * v15 = (int64_t *)v14;
                    int64_t v16 = (int64_t)&v2; // 0x4b993c
                    while ((int32_t)function_4b1590((int64_t *)&v3, v15, v16, v8) >= 0) {
                        int64_t v17 = function_4b1820((int64_t *)&v3, (int64_t *)&v3, v14); // 0x4b994b
                        v6 = v17;
                        v16 = v14;
                        if ((int32_t)v17 != 0) {
                            goto lab_0x4b9708_13;
                        }
                    }
                    int64_t v18 = function_4b19a0((int64_t *)&v4, v12, (int64_t *)&v2); // 0x4b9976
                    v6 = v18;
                    if ((int32_t)v18 == 0) {
                        int64_t v19 = (int64_t)&v4;
                        while (v4 < 0) {
                            // 0x4b9988
                            if ((int32_t)function_4b1680(v19, 0) == 0) {
                                // break -> 0x4b99b8
                                break;
                            }
                            int64_t v20 = function_4b1900((int64_t *)&v4, (int64_t *)&v4, v15); // 0x4b99a3
                            v6 = v20;
                            if ((int32_t)v20 != 0) {
                                goto lab_0x4b9708_13;
                            }
                        }
                        int64_t v21 = function_4b1ac0((int64_t *)&v2, (int64_t)&v3, v19); // 0x4b99c7
                        v6 = v21;
                        if ((int32_t)v21 != 0) {
                            goto lab_0x4b9708_13;
                        } else {
                            int64_t v22 = function_4b95a0((int64_t *)&v2, a1); // 0x4b99dc
                            v6 = v22;
                            if ((int32_t)v22 != 0) {
                                goto lab_0x4b9708_13;
                            } else {
                                int64_t v23 = v4; // 0x4b99b0
                                g90++;
                                int64_t v24 = function_4b1c60(&v1, (int64_t *)&v2, 3, v23); // 0x4b9a00
                                v6 = v24;
                                if ((int32_t)v24 != 0) {
                                    goto lab_0x4b9708_13;
                                } else {
                                    int64_t v25 = function_4b1590(&v1, v15, 3, v23); // 0x4b9a15
                                    v7 = v23;
                                    v5 = v14;
                                    while ((int32_t)v25 >= 0) {
                                        int64_t v26 = function_4b1820(&v1, &v1, v14); // 0x4b9a2d
                                        v6 = v26;
                                        if ((int32_t)v26 != 0) {
                                            goto lab_0x4b9708_13;
                                        }
                                        v25 = function_4b1590(&v1, v15, v14, v23);
                                        v7 = v23;
                                        v5 = v14;
                                    }
                                    goto lab_0x4b97ef;
                                }
                            }
                        }
                    } else {
                        goto lab_0x4b9708_13;
                    }
                }
            }
        }
    } else {
        int64_t v27 = function_4b1ac0((int64_t *)&v2, a3, a3); // 0x4b96ff
        v6 = v27;
        if ((int32_t)v27 == 0) {
            int64_t v28 = function_4b95a0((int64_t *)&v2, a1); // 0x4b9778
            v6 = v28;
            if ((int32_t)v28 != 0) {
                goto lab_0x4b9708_13;
            } else {
                // 0x4b9781
                g90++;
                int64_t v29 = function_4b1c60(&v1, (int64_t *)&v2, 3, v8); // 0x4b9798
                v6 = v29;
                if ((int32_t)v29 != 0) {
                    goto lab_0x4b9708_13;
                } else {
                    int64_t v30 = a1 + 8; // 0x4b97a5
                    int64_t * v31 = (int64_t *)v30;
                    int64_t v32 = 3; // 0x4b97a9
                    while ((int32_t)function_4b1590(&v1, v31, v32, v8) >= 0) {
                        int64_t v33 = function_4b1820(&v1, &v1, v30); // 0x4b97bb
                        v6 = v33;
                        v32 = v30;
                        if ((int32_t)v33 != 0) {
                            goto lab_0x4b9708_13;
                        }
                    }
                    int64_t v34 = a1 + 32; // 0x4b97d9
                    v5 = v30;
                    if ((int32_t)function_4b1680(v34, 0) != 0) {
                        int64_t v35 = a3 + 48; // 0x4b9a40
                        int64_t v36 = function_4b1ac0((int64_t *)&v2, v35, v35); // 0x4b9a4c
                        v6 = v36;
                        if ((int32_t)v36 != 0) {
                            goto lab_0x4b9708_13;
                        } else {
                            int64_t v37 = function_4b95a0((int64_t *)&v2, a1); // 0x4b9a61
                            v6 = v37;
                            if ((int32_t)v37 != 0) {
                                goto lab_0x4b9708_13;
                            } else {
                                int64_t v38 = (int64_t)&v2; // 0x4b9a6e
                                g90++;
                                int64_t v39 = function_4b1ac0((int64_t *)&v3, v38, v38); // 0x4b9a83
                                v6 = v39;
                                if ((int32_t)v39 != 0) {
                                    goto lab_0x4b9708_13;
                                } else {
                                    int64_t v40 = function_4b95a0((int64_t *)&v3, a1); // 0x4b9a98
                                    v6 = v40;
                                    if ((int32_t)v40 != 0) {
                                        goto lab_0x4b9708_13;
                                    } else {
                                        // 0x4b9aa5
                                        g90++;
                                        int64_t v41 = function_4b1ac0((int64_t *)&v2, (int64_t)&v3, v34); // 0x4b9aba
                                        v6 = v41;
                                        if ((int32_t)v41 != 0) {
                                            goto lab_0x4b9708_13;
                                        } else {
                                            int64_t v42 = function_4b95a0((int64_t *)&v2, a1); // 0x4b9acf
                                            v6 = v42;
                                            if ((int32_t)v42 != 0) {
                                                goto lab_0x4b9708_13;
                                            } else {
                                                // 0x4b9adc
                                                g90++;
                                                int64_t v43 = function_4b1900(&v1, &v1, (int64_t *)&v2); // 0x4b9af1
                                                v6 = v43;
                                                if ((int32_t)v43 == 0) {
                                                    int64_t v44 = function_4b1590(&v1, v31, v38, v8); // 0x4b9b1f
                                                    v5 = v30;
                                                    while ((int32_t)v44 >= 0) {
                                                        int64_t v45 = function_4b1820(&v1, &v1, v30); // 0x4b9b0a
                                                        v6 = v45;
                                                        if ((int32_t)v45 != 0) {
                                                            goto lab_0x4b9708_13;
                                                        }
                                                        v44 = function_4b1590(&v1, v31, v30, v8);
                                                        v5 = v30;
                                                    }
                                                    goto lab_0x4b97ef;
                                                } else {
                                                    goto lab_0x4b9708_13;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        goto lab_0x4b97ef;
                    }
                }
            }
        } else {
            goto lab_0x4b9708_13;
        }
    }
  lab_0x4b9708_13:
    // 0x4b9708
    function_4b0890(&v1);
    function_4b0890((int64_t *)&v2);
    function_4b0890((int64_t *)&v3);
    function_4b0890((int64_t *)&v4);
    return v6 & 0xffffffff;
  lab_0x4b97ef:;
    int64_t v46 = a3 + 24; // 0x4b97ef
    int64_t v47 = function_4b1ac0((int64_t *)&v3, v46, v46); // 0x4b97fe
    v6 = v47;
    if ((int32_t)v47 == 0) {
        int64_t v48 = function_4b95a0((int64_t *)&v3, a1); // 0x4b9813
        v6 = v48;
        if ((int32_t)v48 == 0) {
            // 0x4b9820
            g90++;
            int64_t v49 = function_4b1100((int64_t *)&v3, 1); // 0x4b9832
            v6 = v49;
            if ((int32_t)v49 == 0) {
                int64_t * v50 = (int64_t *)v5;
                int64_t v51 = v46; // 0x4b9690
                while ((int32_t)function_4b1590((int64_t *)&v3, v50, v51, v7) >= 0) {
                    int64_t v52 = function_4b1820((int64_t *)&v3, (int64_t *)&v3, v5); // 0x4b984b
                    v6 = v52;
                    v51 = v5;
                    if ((int32_t)v52 != 0) {
                        goto lab_0x4b9708_13;
                    }
                }
                int64_t v53 = (int64_t)&v3; // 0x4b9869
                int64_t v54 = function_4b1ac0((int64_t *)&v2, a3, v53); // 0x4b9876
                v6 = v54;
                if ((int32_t)v54 == 0) {
                    int64_t v55 = function_4b95a0((int64_t *)&v2, a1); // 0x4b988b
                    v6 = v55;
                    if ((int32_t)v55 == 0) {
                        // 0x4b9898
                        g90++;
                        int64_t v56 = function_4b1100((int64_t *)&v2, 1); // 0x4b98aa
                        v6 = v56;
                        int64_t v57 = v53; // 0x4b98b1
                        if ((int32_t)v56 == 0) {
                            while ((int32_t)function_4b1590((int64_t *)&v2, v50, v57, v7) >= 0) {
                                int64_t v58 = function_4b1820((int64_t *)&v2, (int64_t *)&v2, v5); // 0x4b98d7
                                v6 = v58;
                                v57 = v5;
                                if ((int32_t)v58 != 0) {
                                    goto lab_0x4b9708_13;
                                }
                            }
                            int64_t v59 = function_4b1ac0((int64_t *)&v4, v53, v53); // 0x4b9b3a
                            v6 = v59;
                            if ((int32_t)v59 == 0) {
                                int64_t v60 = function_4b95a0((int64_t *)&v4, a1); // 0x4b9b4f
                                v6 = v60;
                                if ((int32_t)v60 == 0) {
                                    // 0x4b9b5c
                                    g90++;
                                    int64_t v61 = function_4b1100((int64_t *)&v4, 1); // 0x4b9b6e
                                    v6 = v61;
                                    int64_t v62 = v53; // 0x4b9b75
                                    if ((int32_t)v61 == 0) {
                                        while ((int32_t)function_4b1590((int64_t *)&v4, v50, v62, v7) >= 0) {
                                            int64_t v63 = function_4b1820((int64_t *)&v4, (int64_t *)&v4, v5); // 0x4b9b97
                                            v6 = v63;
                                            v62 = v5;
                                            if ((int32_t)v63 != 0) {
                                                goto lab_0x4b9708_13;
                                            }
                                        }
                                        int64_t v64 = (int64_t)&v1; // 0x4b9ba5
                                        int64_t v65 = function_4b1ac0((int64_t *)&v3, v64, v64); // 0x4b9bb2
                                        v6 = v65;
                                        if ((int32_t)v65 == 0) {
                                            int64_t v66 = function_4b95a0((int64_t *)&v3, a1); // 0x4b9bc7
                                            v6 = v66;
                                            if ((int32_t)v66 == 0) {
                                                // 0x4b9bd4
                                                g90++;
                                                int64_t v67 = function_4b19a0((int64_t *)&v3, (int64_t *)&v3, (int64_t *)&v2); // 0x4b9be9
                                                v6 = v67;
                                                if ((int32_t)v67 == 0) {
                                                    while (v3 < 0) {
                                                        // 0x4b9bfd
                                                        if ((int32_t)function_4b1680(v53, 0) == 0) {
                                                            // break -> 0x4b9c26
                                                            break;
                                                        }
                                                        int64_t v68 = function_4b1900((int64_t *)&v3, (int64_t *)&v3, v50); // 0x4b9c18
                                                        v6 = v68;
                                                        if ((int32_t)v68 != 0) {
                                                            goto lab_0x4b9708_13;
                                                        }
                                                    }
                                                    int64_t v69 = function_4b19a0((int64_t *)&v3, (int64_t *)&v3, (int64_t *)&v2); // 0x4b9c33
                                                    v6 = v69;
                                                    if ((int32_t)v69 == 0) {
                                                        while (v3 < 0) {
                                                            // 0x4b9c47
                                                            if ((int32_t)function_4b1680(v53, 0) == 0) {
                                                                // break -> 0x4b9c70
                                                                break;
                                                            }
                                                            int64_t v70 = function_4b1900((int64_t *)&v3, (int64_t *)&v3, v50); // 0x4b9c62
                                                            v6 = v70;
                                                            if ((int32_t)v70 != 0) {
                                                                goto lab_0x4b9708_13;
                                                            }
                                                        }
                                                        int64_t v71 = function_4b19a0((int64_t *)&v2, (int64_t *)&v2, (int64_t *)&v3); // 0x4b9c7d
                                                        v6 = v71;
                                                        if ((int32_t)v71 == 0) {
                                                            int64_t v72 = (int64_t)&v2;
                                                            while (v2 < 0) {
                                                                // 0x4b9c91
                                                                if ((int32_t)function_4b1680(v72, 0) == 0) {
                                                                    // break -> 0x4b9cba
                                                                    break;
                                                                }
                                                                int64_t v73 = function_4b1900((int64_t *)&v2, (int64_t *)&v2, v50); // 0x4b9cac
                                                                v6 = v73;
                                                                if ((int32_t)v73 != 0) {
                                                                    goto lab_0x4b9708_13;
                                                                }
                                                            }
                                                            int64_t v74 = function_4b1ac0((int64_t *)&v2, v72, v64); // 0x4b9cc7
                                                            v6 = v74;
                                                            if ((int32_t)v74 == 0) {
                                                                int64_t v75 = function_4b95a0((int64_t *)&v2, a1); // 0x4b9cdc
                                                                v6 = v75;
                                                                if ((int32_t)v75 == 0) {
                                                                    // 0x4b9ce9
                                                                    g90++;
                                                                    int64_t v76 = function_4b19a0((int64_t *)&v2, (int64_t *)&v2, (int64_t *)&v4); // 0x4b9cfe
                                                                    v6 = v76;
                                                                    if ((int32_t)v76 == 0) {
                                                                        while (v2 < 0) {
                                                                            // 0x4b9d12
                                                                            if ((int32_t)function_4b1680(v72, 0) == 0) {
                                                                                // break -> 0x4b9d3b
                                                                                break;
                                                                            }
                                                                            int64_t v77 = function_4b1900((int64_t *)&v2, (int64_t *)&v2, v50); // 0x4b9d2d
                                                                            v6 = v77;
                                                                            if ((int32_t)v77 != 0) {
                                                                                goto lab_0x4b9708_13;
                                                                            }
                                                                        }
                                                                        int64_t v78 = a3 + 48; // 0x4b9d3b
                                                                        int64_t v79 = function_4b1ac0((int64_t *)&v4, v46, v78); // 0x4b9d47
                                                                        v6 = v79;
                                                                        if ((int32_t)v79 == 0) {
                                                                            int64_t v80 = function_4b95a0((int64_t *)&v4, a1); // 0x4b9d5c
                                                                            v6 = v80;
                                                                            if ((int32_t)v80 == 0) {
                                                                                // 0x4b9d69
                                                                                g90++;
                                                                                int64_t v81 = function_4b1100((int64_t *)&v4, 1); // 0x4b9d7b
                                                                                v6 = v81;
                                                                                int64_t v82 = v78; // 0x4b9d82
                                                                                if ((int32_t)v81 == 0) {
                                                                                    while ((int32_t)function_4b1590((int64_t *)&v4, v50, v82, v7) >= 0) {
                                                                                        int64_t v83 = function_4b1820((int64_t *)&v4, (int64_t *)&v4, v5); // 0x4b9da4
                                                                                        v6 = v83;
                                                                                        v82 = v5;
                                                                                        if ((int32_t)v83 != 0) {
                                                                                            goto lab_0x4b9708_13;
                                                                                        }
                                                                                    }
                                                                                    int64_t v84 = function_4b0ac0((int64_t *)a2, v53); // 0x4b9dba
                                                                                    v6 = v84;
                                                                                    if ((int32_t)v84 == 0) {
                                                                                        // 0x4b9dc7
                                                                                        return function_4b0ac0((int64_t *)(a2 + 24), v72);
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
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    goto lab_0x4b9708_13;
}

// Address range: 0x4ba880 - 0x4baf2b
int64_t function_4ba880(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3 + 48; // 0x4ba885
    g91++;
    if ((int32_t)function_4b1680(v1, 0) == 0) {
        // 0x4ba9c6
        return function_4ba7d0(a2, a4);
    }
    int64_t * v2 = (int64_t *)(a4 + 64); // 0x4ba8cf
    if (*v2 != 0) {
        int64_t v3 = a4 + 48; // 0x4ba8d6
        if ((int32_t)function_4b1680(v3, 0) == 0) {
            // 0x4ba9c6
            return function_4ba7d0(a2, a3);
        }
        // 0x4ba8ec
        if (*v2 != 0) {
            // 0x4ba8f3
            if ((int32_t)function_4b1680(v3, 1) != 0) {
                // 0x4ba9c6
                return 0xffffb080;
            }
        }
    }
    // 0x4ba908
    int32_t v4; // bp-280, 0x4ba880
    function_4b0870((int64_t *)&v4);
    int32_t v5; // bp-248, 0x4ba880
    function_4b0870((int64_t *)&v5);
    int32_t v6; // bp-216, 0x4ba880
    function_4b0870((int64_t *)&v6);
    int64_t v7; // bp-184, 0x4ba880
    function_4b0870(&v7);
    int32_t v8; // bp-152, 0x4ba880
    function_4b0870((int64_t *)&v8);
    int32_t v9; // bp-120, 0x4ba880
    function_4b0870((int64_t *)&v9);
    int64_t v10; // bp-88, 0x4ba880
    function_4b0870(&v10);
    int64_t v11 = function_4b1ac0((int64_t *)&v4, v1, v1); // 0x4ba962
    int64_t v12 = v11; // 0x4ba969
    if ((int32_t)v11 == 0) {
        int64_t v13 = function_4b95a0((int64_t *)&v4, a1); // 0x4baa28
        v12 = v13;
        if ((int32_t)v13 == 0) {
            int64_t v14 = (int64_t)&v4; // 0x4baa35
            g90++;
            int64_t v15 = function_4b1ac0((int64_t *)&v5, v14, v1); // 0x4baa4a
            v12 = v15;
            if ((int32_t)v15 == 0) {
                int64_t v16 = function_4b95a0((int64_t *)&v5, a1); // 0x4baa5f
                v12 = v16;
                if ((int32_t)v16 == 0) {
                    // 0x4baa6c
                    g90++;
                    int64_t v17 = function_4b1ac0((int64_t *)&v4, v14, a4); // 0x4baa7f
                    v12 = v17;
                    if ((int32_t)v17 == 0) {
                        int64_t v18 = function_4b95a0((int64_t *)&v4, a1); // 0x4baa94
                        v12 = v18;
                        if ((int32_t)v18 == 0) {
                            int64_t v19 = (int64_t)&v5; // 0x4baaa1
                            g90++;
                            int64_t v20 = function_4b1ac0((int64_t *)&v5, v19, a4 + 24); // 0x4baab5
                            v12 = v20;
                            if ((int32_t)v20 == 0) {
                                int64_t v21 = function_4b95a0((int64_t *)&v5, a1); // 0x4baaca
                                v12 = v21;
                                if ((int32_t)v21 == 0) {
                                    // 0x4baad7
                                    g90++;
                                    int64_t v22 = function_4b19a0((int64_t *)&v4, (int64_t *)&v4, (int64_t *)a3); // 0x4baaea
                                    v12 = v22;
                                    if ((int32_t)v22 == 0) {
                                        int64_t v23 = a1 + 8; // 0x4baaf7
                                        int64_t * v24 = (int64_t *)v23;
                                        while (v4 < 0) {
                                            // 0x4baafd
                                            if ((int32_t)function_4b1680(v14, 0) == 0) {
                                                // break -> 0x4bab2c
                                                break;
                                            }
                                            int64_t v25 = function_4b1900((int64_t *)&v4, (int64_t *)&v4, v24); // 0x4bab18
                                            v12 = v25;
                                            if ((int32_t)v25 != 0) {
                                                goto lab_0x4ba96f_7;
                                            }
                                        }
                                        int64_t v26 = a3 + 24; // 0x4bab31
                                        int64_t v27 = function_4b19a0((int64_t *)&v5, (int64_t *)&v5, (int64_t *)v26); // 0x4bab3b
                                        v12 = v27;
                                        if ((int32_t)v27 == 0) {
                                            while (v5 < 0) {
                                                // 0x4bab53
                                                if ((int32_t)function_4b1680(v19, 0) == 0) {
                                                    // break -> 0x4bab8a
                                                    break;
                                                }
                                                int64_t v28 = function_4b1900((int64_t *)&v5, (int64_t *)&v5, v24); // 0x4bab6e
                                                v12 = v28;
                                                if ((int32_t)v28 != 0) {
                                                    goto lab_0x4ba96f_7;
                                                }
                                            }
                                            // 0x4bab8a
                                            if ((int32_t)function_4b1680(v14, 0) != 0) {
                                                int64_t v29 = function_4b1ac0(&v10, v1, v14); // 0x4babd1
                                                v12 = v29;
                                                if ((int32_t)v29 == 0) {
                                                    int64_t v30 = function_4b95a0(&v10, a1); // 0x4babe9
                                                    v12 = v30;
                                                    if ((int32_t)v30 == 0) {
                                                        // 0x4babf6
                                                        g90++;
                                                        int64_t v31 = function_4b1ac0((int64_t *)&v6, v14, v14); // 0x4bac0b
                                                        v12 = v31;
                                                        if ((int32_t)v31 == 0) {
                                                            int64_t v32 = function_4b95a0((int64_t *)&v6, a1); // 0x4bac20
                                                            v12 = v32;
                                                            if ((int32_t)v32 == 0) {
                                                                int64_t v33 = (int64_t)&v6; // 0x4bac32
                                                                g90++;
                                                                int64_t v34 = function_4b1ac0(&v7, v33, v14); // 0x4bac44
                                                                v12 = v34;
                                                                if ((int32_t)v34 == 0) {
                                                                    int64_t v35 = function_4b95a0(&v7, a1); // 0x4bac59
                                                                    v12 = v35;
                                                                    if ((int32_t)v35 == 0) {
                                                                        // 0x4bac66
                                                                        g90++;
                                                                        int64_t v36 = function_4b1ac0((int64_t *)&v6, v33, a3); // 0x4bac79
                                                                        v12 = v36;
                                                                        if ((int32_t)v36 == 0) {
                                                                            int64_t v37 = function_4b95a0((int64_t *)&v6, a1); // 0x4bac8e
                                                                            v12 = v37;
                                                                            if ((int32_t)v37 == 0) {
                                                                                // 0x4bac9b
                                                                                g90++;
                                                                                int64_t v38 = function_4b1c60((int64_t *)&v4, (int64_t *)&v6, 2, a4); // 0x4bacb2
                                                                                v12 = v38;
                                                                                int64_t v39 = 2; // 0x4bacb9
                                                                                if ((int32_t)v38 == 0) {
                                                                                    while ((int32_t)function_4b1590((int64_t *)&v4, v24, v39, a4) >= 0) {
                                                                                        int64_t v40 = function_4b1820((int64_t *)&v4, (int64_t *)&v4, v23); // 0x4bacdf
                                                                                        v12 = v40;
                                                                                        v39 = v23;
                                                                                        if ((int32_t)v40 != 0) {
                                                                                            goto lab_0x4ba96f_7;
                                                                                        }
                                                                                    }
                                                                                    int64_t v41 = function_4b1ac0((int64_t *)&v8, v19, v19); // 0x4bad0a
                                                                                    v12 = v41;
                                                                                    if ((int32_t)v41 == 0) {
                                                                                        int64_t v42 = function_4b95a0((int64_t *)&v8, a1); // 0x4bad22
                                                                                        v12 = v42;
                                                                                        if ((int32_t)v42 == 0) {
                                                                                            // 0x4bad2f
                                                                                            g90++;
                                                                                            int64_t v43 = function_4b19a0((int64_t *)&v8, (int64_t *)&v8, (int64_t *)&v4); // 0x4bad47
                                                                                            v12 = v43;
                                                                                            if ((int32_t)v43 == 0) {
                                                                                                int64_t v44 = (int64_t)&v8;
                                                                                                while (v8 < 0) {
                                                                                                    // 0x4bad5e
                                                                                                    if ((int32_t)function_4b1680(v44, 0) == 0) {
                                                                                                        // break -> 0x4bad8d
                                                                                                        break;
                                                                                                    }
                                                                                                    int64_t v45 = function_4b1900((int64_t *)&v8, (int64_t *)&v8, v24); // 0x4bad7f
                                                                                                    v12 = v45;
                                                                                                    if ((int32_t)v45 != 0) {
                                                                                                        goto lab_0x4ba96f_7;
                                                                                                    }
                                                                                                }
                                                                                                int64_t v46 = function_4b19a0((int64_t *)&v8, (int64_t *)&v8, &v7); // 0x4bad9d
                                                                                                v12 = v46;
                                                                                                if ((int32_t)v46 == 0) {
                                                                                                    while (v8 < 0) {
                                                                                                        // 0x4badb4
                                                                                                        if ((int32_t)function_4b1680(v44, 0) == 0) {
                                                                                                            // break -> 0x4bade3
                                                                                                            break;
                                                                                                        }
                                                                                                        int64_t v47 = function_4b1900((int64_t *)&v8, (int64_t *)&v8, v24); // 0x4badd5
                                                                                                        v12 = v47;
                                                                                                        if ((int32_t)v47 != 0) {
                                                                                                            goto lab_0x4ba96f_7;
                                                                                                        }
                                                                                                    }
                                                                                                    int64_t v48 = function_4b19a0((int64_t *)&v6, (int64_t *)&v6, (int64_t *)&v8); // 0x4badf3
                                                                                                    v12 = v48;
                                                                                                    if ((int32_t)v48 == 0) {
                                                                                                        while (v6 < 0) {
                                                                                                            // 0x4bae07
                                                                                                            if ((int32_t)function_4b1680(v33, 0) == 0) {
                                                                                                                // break -> 0x4bae30
                                                                                                                break;
                                                                                                            }
                                                                                                            int64_t v49 = function_4b1900((int64_t *)&v6, (int64_t *)&v6, v24); // 0x4bae22
                                                                                                            v12 = v49;
                                                                                                            if ((int32_t)v49 != 0) {
                                                                                                                goto lab_0x4ba96f_7;
                                                                                                            }
                                                                                                        }
                                                                                                        int64_t v50 = function_4b1ac0((int64_t *)&v6, v33, v19); // 0x4bae3d
                                                                                                        v12 = v50;
                                                                                                        if ((int32_t)v50 == 0) {
                                                                                                            int64_t v51 = function_4b95a0((int64_t *)&v6, a1); // 0x4bae52
                                                                                                            v12 = v51;
                                                                                                            if ((int32_t)v51 == 0) {
                                                                                                                // 0x4bae5f
                                                                                                                g90++;
                                                                                                                int64_t v52 = function_4b1ac0(&v7, (int64_t)&v7, v26); // 0x4bae72
                                                                                                                v12 = v52;
                                                                                                                if ((int32_t)v52 == 0) {
                                                                                                                    int64_t v53 = function_4b95a0(&v7, a1); // 0x4bae87
                                                                                                                    v12 = v53;
                                                                                                                    if ((int32_t)v53 == 0) {
                                                                                                                        // 0x4bae94
                                                                                                                        g90++;
                                                                                                                        int64_t v54 = function_4b19a0((int64_t *)&v9, (int64_t *)&v6, &v7); // 0x4baeae
                                                                                                                        v12 = v54;
                                                                                                                        if ((int32_t)v54 == 0) {
                                                                                                                            int64_t v55 = (int64_t)&v9;
                                                                                                                            while (v9 < 0) {
                                                                                                                                // 0x4baec5
                                                                                                                                if ((int32_t)function_4b1680(v55, 0) == 0) {
                                                                                                                                    // break -> 0x4baef4
                                                                                                                                    break;
                                                                                                                                }
                                                                                                                                int64_t v56 = function_4b1900((int64_t *)&v9, (int64_t *)&v9, v24); // 0x4baee6
                                                                                                                                v12 = v56;
                                                                                                                                if ((int32_t)v56 != 0) {
                                                                                                                                    goto lab_0x4ba96f_7;
                                                                                                                                }
                                                                                                                            }
                                                                                                                            int64_t v57 = function_4b0ac0((int64_t *)a2, v44); // 0x4baeff
                                                                                                                            v12 = v57;
                                                                                                                            if ((int32_t)v57 == 0) {
                                                                                                                                int64_t result = function_4b0ac0((int64_t *)(a2 + 24), v55); // 0x4baf19
                                                                                                                                v12 = result;
                                                                                                                                if ((int32_t)result == 0) {
                                                                                                                                    // 0x4ba9c6
                                                                                                                                    return result;
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
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                // 0x4bab9a
                                                if ((int32_t)function_4b1680(v19, 0) != 0) {
                                                    // 0x4baced
                                                    v12 = function_4ba840(a2);
                                                } else {
                                                    // 0x4babae
                                                    v12 = function_4b9690(a1, a2, a3);
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
  lab_0x4ba96f_7:
    // 0x4ba96f
    function_4b0890((int64_t *)&v4);
    function_4b0890((int64_t *)&v5);
    function_4b0890((int64_t *)&v6);
    function_4b0890(&v7);
    function_4b0890((int64_t *)&v8);
    function_4b0890((int64_t *)&v9);
    function_4b0890(&v10);
    // 0x4ba9c6
    return v12 & 0xffffffff;
}

// Address range: 0x4bf0f0 - 0x4bf130
int64_t function_4bf0f0(int64_t a1, int64_t a2) {
    // 0x4bf0f0
    function_4ba6e0(a1);
    uint32_t v1 = (int32_t)a2; // 0x4bf100
    *(int32_t *)a1 = v1;
    if (v1 < 13) {
        int32_t v2 = *(int32_t *)((4 * a2 & 0x3fffffffc) + (int64_t)&g37); // 0x4bf127
        return (int64_t)v2 + (int64_t)&g37;
    }
    // 0x4bf107
    function_4ba6e0(a1);
    return 0xffffb180;
}

// Address range: 0x4bf130 - 0x4bf1b2
int64_t function_4bf130(void) {
    // 0x4bf130
    int64_t v1; // 0x4bf130
    *(int64_t *)(v1 + 200) = (int64_t)&g34;
    int64_t result = function_4bd480(v1, &g62, 32, &g63, 8, &g64, 8, (int64_t)&g65, 32, (int64_t)&g66, 32, (int64_t)&g67, 32); // 0x4bf1a8
    return result;
}

// Address range: 0x4bf1b8 - 0x4bf232
int64_t function_4bf1b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4bf1b8
    int64_t v1; // 0x4bf1b8
    *(int64_t *)(v1 + 200) = (int64_t)&g32;
    int64_t result = function_4bd480(v1, &g38, 24, NULL, 0, &g39, 24, (int64_t)&g40, 24, (int64_t)&g41, 24, (int64_t)&g42, 24); // 0x4bf228
    return result;
}

// Address range: 0x4bf238 - 0x4bf2b2
int64_t function_4bf238(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4bf238
    int64_t v1; // 0x4bf238
    *(int64_t *)(v1 + 200) = 0x4be0c0;
    int64_t result = function_4bd480(v1, &g43, 32, NULL, 0, &g44, 32, (int64_t)&g45, 32, (int64_t)"4~", 32, (int64_t)&g46, 32); // 0x4bf2a8
    return result;
}

// Address range: 0x4bf2b8 - 0x4bf332
int64_t function_4bf2b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4bf2b8
    int64_t v1; // 0x4bf2b8
    *(int64_t *)(v1 + 200) = (int64_t)&g31;
    int64_t result = function_4bd480(v1, &g47, 32, NULL, 0, &g48, 32, (int64_t)&g49, 32, (int64_t)&g50, 32, (int64_t)&g51, 32); // 0x4bf328
    return result;
}

// Address range: 0x4bf338 - 0x4bf3b2
int64_t function_4bf338(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4bf338
    int64_t v1; // 0x4bf338
    *(int64_t *)(v1 + 200) = (int64_t)&g33;
    int64_t result = function_4bd480(v1, &g52, 48, NULL, 0, &g53, 48, (int64_t)&g54, 48, (int64_t)&g55, 48, (int64_t)&g56, 48); // 0x4bf3a8
    return result;
}

// Address range: 0x4bf3b8 - 0x4bf432
int64_t function_4bf3b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4bf3b8
    int64_t v1; // 0x4bf3b8
    *(int64_t *)(v1 + 200) = 0x4bd660;
    int64_t result = function_4bd480(v1, &g57, 72, NULL, 0, &g58, 72, (int64_t)&g59, 72, (int64_t)&g60, 72, (int64_t)&g61, 72); // 0x4bf428
    return result;
}

// Address range: 0x4bf438 - 0x4bf4ac
int64_t function_4bf438(void) {
    // 0x4bf438
    int64_t v1; // 0x4bf438
    int64_t result = function_4bd480(v1, &g68, 32, &g69, 32, &g70, 32, (int64_t)&g71, 32, (int64_t)&g72, 32, (int64_t)&g73, 32); // 0x4bf4a2
    return result;
}

// Address range: 0x4bf4b0 - 0x4bf524
int64_t function_4bf4b0(void) {
    // 0x4bf4b0
    int64_t v1; // 0x4bf4b0
    int64_t result = function_4bd480(v1, &g74, 48, &g75, 48, &g76, 48, (int64_t)&g77, 48, (int64_t)&g78, 48, (int64_t)&g79, 48); // 0x4bf51a
    return result;
}

// Address range: 0x4bf528 - 0x4bf59c
int64_t function_4bf528(void) {
    // 0x4bf528
    int64_t v1; // 0x4bf528
    int64_t result = function_4bd480(v1, &g80, 64, &g81, 64, &g82, 64, (int64_t)&g83, 64, (int64_t)&g84, 64, (int64_t)&g85, 64); // 0x4bf592
    return result;
}

// Address range: 0x4bf5a0 - 0x4bf755
int64_t function_4bf5a0(void) {
    // 0x4bf5a0
    int64_t v1; // 0x4bf5a0
    *(int64_t *)(v1 + 200) = 0x4bd580;
    int64_t v2 = function_4b1ca0(v1 + 32, 16, "01DB42"); // 0x4bf5be
    if ((int32_t)v2 != 0) {
        // 0x4bf5cb
        function_4ba6e0(v1);
        return v2 & 0xffffffff;
    }
    int64_t v3 = v1 + 8; // 0x4bf6f0
    int64_t v4 = function_4b0d80(v3, 1); // 0x4bf6fc
    if ((int32_t)v4 != 0) {
        // 0x4bf5cb
        function_4ba6e0(v1);
        return v4 & 0xffffffff;
    }
    int64_t * v5 = (int64_t *)v3; // 0x4bf711
    int64_t v6 = function_4b1100(v5, 255); // 0x4bf711
    if ((int32_t)v6 != 0) {
        // 0x4bf5cb
        function_4ba6e0(v1);
        return v6 & 0xffffffff;
    }
    int64_t v7 = function_4b1a80(v3, v3, 19); // 0x4bf729
    if ((int32_t)v7 != 0) {
        // 0x4bf5cb
        function_4ba6e0(v1);
        return v7 & 0xffffffff;
    }
    // 0x4bf736
    *(int64_t *)(v1 + 176) = function_4b0f10(v5);
    return function_4b0d80(v1 + 80, 9);
}

// Address range: 0x4ef3e0 - 0x4efa39
int64_t __gxx_personality_v0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4ef3e0
    __readfsqword(40);
    int64_t v1 = 0; // bp-152, 0x4ef407
    int32_t v2 = 0; // bp-156, 0x4ef410
    if ((int32_t)a1 != 1) {
        // 0x4ef41f
        __readfsqword(40);
        return 3;
    }
    int64_t v3 = a2 & 0xffffffff; // 0x4ef45a
    uint64_t v4 = a3 - 0x474e5543432b2b00; // 0x4ef460
    bool v5 = a3 == 0x474e5543432b2b01 | v4 == 0; // 0x4ef46f
    int64_t v6; // 0x4ef3e0
    int64_t v7; // 0x4ef3e0
    int64_t v8; // 0x4ef3e0
    int64_t v9; // 0x4ef3e0
    int64_t v10; // 0x4ef3e0
    int64_t v11; // 0x4ef3e0
    int64_t v12; // 0x4ef3e0
    int64_t v13; // 0x4ef3e0
    int64_t v14; // 0x4ef3e0
    int64_t v15; // 0x4ef3e0
    int64_t v16; // 0x4ef3e0
    int64_t v17; // 0x4ef3e0
    int64_t v18; // 0x4ef3e0
    int64_t v19; // 0x4ef3e0
    int64_t v20; // 0x4ef3e0
    int64_t v21; // 0x4ef3e0
    int64_t v22; // 0x4ef3e0
    int64_t v23; // 0x4ef3e0
    int64_t v24; // bp-120, 0x4ef3e0
    int64_t v25; // 0x4ef3e0
    int64_t v26; // 0x4ef3e0
    int64_t v27; // 0x4ef3e0
    int64_t v28; // 0x4ef3e0
    if ((int32_t)a2 == 6 != v5) {
        int64_t v29 = _Unwind_GetLanguageSpecificData(a5); // 0x4ef4f3
        if (v29 == 0) {
            // 0x4ef41f
            __readfsqword(40);
            return 8;
        }
        int64_t v30 = function_4ef2e0(a5, v29, &v24); // 0x4ef51e
        char v31; // 0x4ef3e0
        if (v31 != -1) {
            int64_t v32 = v31; // 0x4ef523
            function_4ef280(v32, (int32_t)a5, v30, v32);
        }
        int64_t v33 = (int64_t)&v24; // 0x4ef519
        int64_t v34 = _Unwind_GetIPInfo(a5, &v2, v30); // 0x4ef54e
        v18 = v2;
        v25 = v33;
        v27 = v29;
        v21 = v30;
        v15 = a5;
        v6 = v34;
        v9 = v3;
        v20 = 0;
        v26 = v33;
        v28 = v29;
        v23 = v30;
        v17 = a5;
        v7 = v34;
        v11 = v3;
        if (v2 == 0) {
            goto lab_0x4ef708;
        } else {
            goto lab_0x4ef567;
        }
    } else {
        int64_t v35 = *(int64_t *)(a4 - 16); // 0x4ef486
        v19 = a4;
        v22 = a3;
        v16 = a5;
        v13 = 0;
        v10 = v3;
        if (v35 == 0) {
            goto lab_0x4ef700;
        } else {
            // 0x4ef493
            v14 = a5;
            v12 = v35;
            v8 = (int64_t)*(int32_t *)(a4 - 36);
            goto lab_0x4ef4a0;
        }
    }
  lab_0x4ef708:
    // 0x4ef708
    v18 = v20;
    v25 = v26;
    v27 = v28;
    v21 = v23;
    v15 = v17;
    int64_t v36; // 0x4ef3e0
    int64_t v37 = v36; // 0x4ef70c
    v6 = v7 - 1;
    v9 = v11;
    goto lab_0x4ef567;
  lab_0x4ef567:;
    int64_t v38 = v9;
    uint64_t v39 = v6;
    int64_t v40 = v37;
    int64_t v41 = v15;
    int64_t v42 = v21;
    int64_t v43 = v27;
    int64_t v44 = v25;
    int64_t v45 = v18;
    int64_t v46 = v45; // 0x4ef56f
    int64_t v47 = v42; // 0x4ef56f
    int64_t v48 = v41; // 0x4ef56f
    int64_t v49; // 0x4ef3e0
    int64_t v50; // 0x4ef3e0
    int64_t v51; // 0x4ef3e0
    int64_t v52; // 0x4ef3e0
    int64_t v53; // 0x4ef3e0
    int64_t v54; // 0x4ef3e0
    int64_t v55; // 0x4ef3e0
    int64_t v56; // 0x4ef3e0
    int64_t v57; // 0x4ef3e0
    int64_t v58; // 0x4ef7a8
    int64_t v59; // 0x4ef7c7
    int32_t v60; // 0x4ef7db
    uint32_t result; // 0x4ef7de
    int64_t v61; // 0x4efa29
    if (v42 < v57) {
        // 0x4ef575
        int32_t v62; // 0x4ef3e0
        int64_t v63 = v62 % 256; // 0x4ef590
        int64_t v64; // bp-144, 0x4ef3e0
        int64_t v65 = 0x100000000 * (int64_t)&v64 >> 32;
        int64_t v66; // bp-136, 0x4ef3e0
        int64_t v67 = (int64_t)&v66;
        int64_t v68 = v45; // 0x4ef58e
        int64_t v69 = v42;
        int64_t v70; // 0x4ef3e0
        int64_t v71; // 0x4ef3e0
        int64_t v72; // 0x4ef5ba
        int64_t v73; // 0x4ef5ea
        int64_t v74; // 0x4ef608
        if ((char)v62 == -1) {
            // 0x4ef5e5
            v70 = function_4ef000(v63, 0, function_4ef000(v63, 0, v69, v65), v67);
            v71 = 0;
        } else {
            // 0x4ef601
            v72 = function_4ef000(v63, function_4ef280(v63, 0, v69, v68), v69, v65);
            v73 = function_4ef000(v63, function_4ef280(v63, 0, v72, v65), v72, v67);
            v74 = function_4ef280(v63, 0, v73, v67);
            v70 = v73;
            v71 = v74;
        }
        int64_t v75 = 0; // 0x4ef626
        int64_t v76; // bp-128, 0x4ef3e0
        int64_t v77 = function_4ef000(v63, v71, v70, (int64_t)&v76); // 0x4ef626
        int64_t v78 = v77 + 1; // 0x4ef630
        unsigned char v79 = *(char *)v77; // 0x4ef634
        uint64_t v80 = v75 + 7; // 0x4ef641
        int64_t v81 = v80 & 0xffffffff; // 0x4ef641
        int64_t v82 = (int64_t)(v79 % 128) << v75 % 64; // 0x4ef644
        v75 = v81;
        v77 = v78;
        int64_t v83 = v82; // 0x4ef64a
        while (v79 < 0) {
            // 0x4ef630
            v78 = v77 + 1;
            v79 = *(char *)v77;
            v80 = v75 + 7;
            v81 = v80 & 0xffffffff;
            v82 = (int64_t)(v79 % 128) << v75 % 64 | v83;
            v75 = v81;
            v77 = v78;
            v83 = v82;
        }
        uint64_t v84 = v24 + v64; // 0x4ef651
        v46 = v81;
        v47 = v78;
        v48 = v63;
        while (v84 <= v39) {
            // 0x4ef6a8
            if (v66 + v84 > v39) {
                // 0x4ef795
                if (v76 == 0) {
                    goto lab_0x4ef41f;
                } else {
                    // 0x4ef7a8
                    v58 = v76 + v57;
                    v53 = v58;
                    v54 = v41;
                    v51 = v58;
                    v49 = v38;
                    if (v82 == 0) {
                        goto lab_0x4ef9b0;
                    } else {
                        // 0x4ef7bc
                        if (v58 == 0) {
                            goto lab_0x4ef41f;
                        } else {
                            // 0x4ef7d2
                            v59 = v57 - 1 + v82;
                            v55 = v41;
                            v52 = v58;
                            v50 = v38;
                            if (v59 == 0) {
                                goto lab_0x4ef9b9;
                            } else {
                                // 0x4ef7db
                                v60 = v38;
                                result = v60 & 8;
                                v56 = (int64_t)&g87;
                                if (result != 0) {
                                    goto lab_0x4ef801;
                                } else {
                                    // 0x4ef7eb
                                    v56 = (int64_t)&g88;
                                    if (v4 < 2) {
                                        // 0x4efa1f
                                        v61 = a4 + 32;
                                        if (v80 % 2 == 0) {
                                            goto lab_0x4efa2d;
                                        } else {
                                            // 0x4efa29
                                            v61 = *(int64_t *)(a4 - 80);
                                            goto lab_0x4efa2d;
                                        }
                                    } else {
                                        goto lab_0x4ef801;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            // 0x4ef6b6
            v68 = v81;
            int64_t v85 = v78; // 0x4ef6be
            v46 = v81;
            v47 = v78;
            v48 = v63;
            if (v57 <= v78) {
                // break -> 0x4ef65e
                break;
            }
            v69 = v85;
            if ((char)v62 == -1) {
                // 0x4ef5e5
                v70 = function_4ef000(v63, 0, function_4ef000(v63, 0, v69, v65), v67);
                v71 = 0;
            } else {
                // 0x4ef601
                v72 = function_4ef000(v63, function_4ef280(v63, 0, v69, v68), v69, v65);
                v73 = function_4ef000(v63, function_4ef280(v63, 0, v72, v65), v72, v67);
                v74 = function_4ef280(v63, 0, v73, v67);
                v70 = v73;
                v71 = v74;
            }
            // 0x4ef615
            v75 = 0;
            v77 = function_4ef000(v63, v71, v70, (int64_t)&v76);
            v78 = v77 + 1;
            v79 = *(char *)v77;
            v80 = v75 + 7;
            v81 = v80 & 0xffffffff;
            v82 = (int64_t)(v79 % 128) << v75 % 64;
            v75 = v81;
            v77 = v78;
            v83 = v82;
            while (v79 < 0) {
                // 0x4ef630
                v78 = v77 + 1;
                v79 = *(char *)v77;
                v80 = v75 + 7;
                v81 = v80 & 0xffffffff;
                v82 = (int64_t)(v79 % 128) << v75 % 64 | v83;
                v75 = v81;
                v77 = v78;
                v83 = v82;
            }
            // 0x4ef64c
            v84 = v24 + v64;
            v46 = v81;
            v47 = v78;
            v48 = v63;
        }
    }
    int64_t v86 = 0; // 0x4ef662
    int64_t v87 = 0; // 0x4ef662
    int64_t v88 = 0; // 0x4ef662
    int64_t v89; // 0x4ef3e0
    int64_t v90; // 0x4ef3e0
    int64_t v91; // 0x4ef3e0
    if (v38 % 2 == 0) {
        int64_t v92 = v48;
        uint32_t v93 = (int32_t)v38 & 8; // 0x4ef999
        v19 = v46;
        v90 = v44;
        v91 = v43;
        v22 = v47;
        v16 = v92;
        v13 = v40;
        v89 = v39;
        v10 = 0;
        if (v4 < 2 == v93 == 0) {
            goto lab_0x4ef700;
        } else {
            // 0x4ef9ab
            v53 = function_4efcc0();
            v54 = v92;
            v51 = v40;
            v49 = v93;
            goto lab_0x4ef9b0;
        }
    } else {
        goto lab_0x4ef671;
    }
  lab_0x4ef700:
    // 0x4ef700
    function_1fea0(a4);
    v20 = v19;
    v26 = v90;
    v28 = v91;
    v23 = v22;
    v17 = v16;
    v36 = v13;
    v7 = v89;
    v11 = v10;
    goto lab_0x4ef708;
  lab_0x4ef671:
    // 0x4ef671
    if (v4 < 2) {
        // 0x4ef682
        *(int32_t *)(a4 - 36) = (int32_t)v88;
        *(int64_t *)(a4 - 32) = v86;
        *(int64_t *)(a4 - 16) = v87;
        *(int64_t *)(a4 - 24) = v43;
        *(int64_t *)(a4 - 8) = v1;
    }
    // 0x4ef41f
    __readfsqword(40);
    return 6;
  lab_0x4ef4a0:;
    int64_t v94 = v14; // 0x4ef4a6
    int64_t v95 = v12; // 0x4ef4a6
    int64_t v96 = 0x100000000 * v8 >> 32; // 0x4ef4a6
    if ((int32_t)v8 < 0) {
        // 0x4ef72b
        int64_t v97; // 0x4ef3e0
        int64_t v98 = v97;
        int64_t v99; // 0x4ef3e0
        function_4ef2e0(v99, v98, &v24);
        int64_t v100 = 0; // 0x4ef754
        unsigned char v101; // 0x4ef3e0
        if (v101 != -1) {
            // 0x4ef75a
            int64_t v102; // 0x4ef3e0
            int64_t v103 = v102;
            int64_t v104 = (int64_t)&v24; // 0x4ef730
            int64_t v105 = v101; // 0x4ef744
            int32_t v106 = v99; // 0x4ef75d
            function_4ef280(v105, v106, v104, v103);
            v100 = function_4ef280(v105, v106, v104, v103);
        }
        int64_t v107 = v100;
        *(int64_t *)(a4 - 16) = v107;
        v94 = v99;
        int64_t v108; // 0x4ef3e0
        v95 = 0x100000000000000 * v108 >> 56;
        int64_t v109; // 0x4ef4a3
        v96 = v109;
    }
    goto lab_0x4ef4b0;
  lab_0x4ef4b0:
    // 0x4ef4b0
    _Unwind_SetGR(v94, 0, a4);
    _Unwind_SetGR(v94, 1, v96);
    _Unwind_SetIP(v94, 0x100000000000000 * v95 >> 56);
    // 0x4ef41f
    __readfsqword(40);
    return 7;
  lab_0x4ef9b0:
    // 0x4ef9b0
    v55 = v54;
    v52 = v51;
    v50 = v49;
    if (v53 == 0) {
        // 0x4ef41f
        __readfsqword(40);
        return 8;
    }
    goto lab_0x4ef9b9;
  lab_0x4ef9b9:
    // 0x4ef9b9
    if (v50 % 2 != 0) {
      lab_0x4ef41f:
        // 0x4ef41f
        __readfsqword(40);
        return 8;
    }
    // 0x4ef9c3
    v94 = v55;
    v95 = v52;
    v96 = 0;
    int64_t v110 = v55; // 0x4ef9ca
    int64_t v111 = v52; // 0x4ef9ca
    int64_t v112 = 0; // 0x4ef9ca
    if (v4 < 2 || (v50 & 8) != 0) {
        goto lab_0x4ef4b0;
    } else {
        goto lab_0x4ef991;
    }
  lab_0x4ef991:
    // 0x4ef991
    v94 = v110;
    v95 = v111;
    v96 = 0x100000000 * v112 >> 32;
    goto lab_0x4ef4b0;
  lab_0x4ef801:;
    int64_t v113 = (int64_t)&v1; // 0x4ef81e
    int64_t v114 = v59; // 0x4ef82b
    int64_t v115 = (int32_t)a2 == 6 == v5; // 0x4ef82b
    goto lab_0x4ef830;
  lab_0x4ef830:;
    int64_t v116 = v115;
    int64_t v117 = v114;
    int64_t v118 = 0; // 0x4ef838
    int64_t v119 = v117; // 0x4ef838
    int64_t v120 = 0; // 0x4ef838
    goto lab_0x4ef840;
  lab_0x4ef840:;
    int64_t v121 = v119 + 1; // 0x4ef840
    unsigned char v122 = *(char *)v119; // 0x4ef844
    uint64_t v123 = v118 + 7; // 0x4ef851
    int64_t v124 = (int64_t)(v122 % 128) << v118 % 64 | v120; // 0x4ef854
    v118 = v123 & 0xffffffff;
    v119 = v121;
    v120 = v124;
    int64_t v125; // 0x4ef3e0
    if (v122 < 0) {
        goto lab_0x4ef840;
    } else {
        // 0x4ef85b
        v125 = v124;
        if ((int32_t)v123 > 63 || (v122 & 64) == 0) {
            goto lab_0x4ef872;
        } else {
            // 0x4ef865
            v125 = v124 | -1 << v123 % 64;
            goto lab_0x4ef872;
        }
    }
  lab_0x4efa2d:
    // 0x4efa2d
    v1 = v61;
    return *(int64_t *)(v61 - 112);
  lab_0x4ef872:;
    int64_t v126 = v125;
    int64_t v127 = 0; // 0x4ef87a
    int64_t v128 = v121; // 0x4ef87a
    int64_t v129 = 0; // 0x4ef87a
    goto lab_0x4ef880;
  lab_0x4ef880:;
    unsigned char v130 = *(char *)v128; // 0x4ef880
    int64_t v131 = v128 + 1; // 0x4ef883
    uint64_t v132 = v127 + 7; // 0x4ef890
    int64_t v133 = (int64_t)(v130 % 128) << v127 % 64 | v129; // 0x4ef893
    v127 = v132 & 0xffffffff;
    v128 = v131;
    v129 = v133;
    int64_t v134; // 0x4ef3e0
    uint32_t v135; // 0x4ef89b
    if (v130 < 0) {
        goto lab_0x4ef880;
    } else {
        // 0x4ef89b
        v135 = (int32_t)v132;
        v134 = v133;
        if (v135 > 63 || (v130 & 64) == 0) {
            goto lab_0x4ef8b2;
        } else {
            // 0x4ef8a5
            v134 = v133 | -1 << v132 % 64;
            goto lab_0x4ef8b2;
        }
    }
  lab_0x4ef8b2:;
    int64_t v136 = 1; // 0x4ef8b6
    int64_t v137; // 0x4ef3e0
    int64_t v138; // 0x4ef3e0
    int64_t v139; // 0x4ef3e0
    int64_t v140; // 0x4ef3e0
    if (v126 == 0) {
        goto lab_0x4ef90e;
    } else {
        if (v126 >= 0) {
            int64_t v141 = function_4ef140(v44, v126, v131, v135); // 0x4ef930
            if (v141 == 0) {
                goto lab_0x4ef953;
            } else {
                // 0x4ef93f
                v136 = v116;
                if ((char)function_4eef80(v141, v56, v113) == 0) {
                    goto lab_0x4ef90e;
                } else {
                    goto lab_0x4ef953;
                }
            }
        } else {
            if (v5 != (result == 0)) {
                // 0x4ef8d1
                v137 = 0;
                v139 = v57 + -1 - v126;
                v138 = 0;
                goto lab_0x4ef8e8;
            } else {
                // 0x4ef9e0
                v140 = function_4ef1f0(v44, v56, v1, v126) & 0xffffffff ^ 1;
                goto lab_0x4ef90a;
            }
        }
    }
  lab_0x4ef90e:;
    int64_t v142 = v136;
    v114 = v134 + v121;
    v115 = v142;
    if (v134 == 0) {
        // 0x4ef6d0
        v55 = v41;
        v52 = 0x100000000000000 * v58 >> 56;
        v50 = 0x1000000 * v60 >> 24;
        if ((char)v142 != 0) {
            goto lab_0x4ef9b9;
        } else {
            goto lab_0x4ef41f;
        }
    } else {
        goto lab_0x4ef830;
    }
  lab_0x4ef953:;
    int64_t v143 = 0x100000000000000 * v58 >> 56; // 0x4ef95b
    v86 = v117;
    v87 = v143;
    v88 = v126;
    if (v38 % 2 != 0) {
        goto lab_0x4ef671;
    } else {
        // 0x4ef974
        v14 = v41;
        v12 = v143;
        v8 = v126;
        if (v4 < 2 == result == 0) {
            goto lab_0x4ef4a0;
        } else {
            // 0x4ef988
            v110 = v41;
            v111 = v143;
            v112 = v126;
            if ((int32_t)v126 < 0) {
                // 0x4efa4a
                return result;
            }
            goto lab_0x4ef991;
        }
    }
  lab_0x4ef8e8:;
    unsigned char v144 = *(char *)v139; // 0x4ef8ec
    int64_t v145 = (int64_t)(v144 % 128) << v137 % 64 | v138; // 0x4ef8fc
    v137 = v137 + 7 & 0xffffffff;
    v139++;
    v138 = v145;
    if (v144 < 0) {
        goto lab_0x4ef8e8;
    } else {
        // 0x4ef904
        v140 = v145 == 0;
        goto lab_0x4ef90a;
    }
  lab_0x4ef90a:
    // 0x4ef90a
    v136 = v116;
    if ((char)v140 != 0) {
        goto lab_0x4ef953;
    } else {
        goto lab_0x4ef90e;
    }
}

// Address range: 0x4efa3a - 0x4efa3b
int64_t function_4efa3a(void) {
    // 0x4efa3a
    int64_t result; // 0x4efa3a
    return result;
}

// Address range: 0x5174fc - 0x517bab
int64_t function_5174fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t v1 = unknown_74517502(); // 0x5174fd
    char v2 = __asm_in((int16_t)a3); // 0x517505
    char * v3 = (char *)(v1 & -256 | (int64_t)v2); // 0x517506
    *v3 = *v3 + v2;
    int64_t v4; // 0x5174fc
    *(char *)a1 = *(char *)&v4 + (char)a4;
    int64_t v5; // 0x5174fc
    if ((int32_t)v5 != 0 && (int32_t)v5 != 16) {
        // 0x517b06
        return function_51732f();
    }
    char v6; // 0x5174fc
    int32_t v7; // 0x5174fc
    if (v5 == 0) {
        goto lab_0x5175f1;
    } else {
        int64_t * v8 = (int64_t *)(v5 + 16);
        uint64_t v9 = *v8; // 0x51753e
        int64_t * v10 = (int64_t *)(v5 + 24);
        int64_t * v11; // 0x5174fc
        int64_t * v12; // 0x5174fc
        int64_t v13; // 0x5174fc
        if (v9 >= *v10) {
            // 0x5175d0
            v11 = v10;
            v12 = v8;
        } else {
            // 0x51754c
            *v8 = v9 + 4;
            v11 = (int64_t *)(v4 + 24);
            v12 = (int64_t *)(v4 + 16);
            v13 = v4;
        }
        uint64_t v14 = *v12; // 0x51755c
        int64_t v15; // 0x5174fc
        if (v14 >= *v11) {
            // 0x517a20
            v15 = *(int64_t *)v13;
        } else {
            // 0x51756a
            v15 = (int64_t)*(int32_t *)v14;
        }
        // 0x51756c
        if ((int32_t)v15 == -1) {
            goto lab_0x5175f1;
        } else {
            if (v5 == 0) {
                // 0x517602
                function_50f7d0(a7);
                return function_517320(a7);
            }
            // 0x517583
            v6 = 0;
            if (v7 != -1) {
                // 0x51758e
                return function_517320(v5);
            }
            goto lab_0x517662;
        }
    }
  lab_0x5175f1:
    if (v5 == 0) {
        // 0x51758e
        return function_517320(v5);
    }
    // 0x5175f6
    v6 = 1;
    if (v7 != -1) {
        // 0x517602
        function_50f7d0(a7);
        return function_517320(a7);
    }
    goto lab_0x517662;
  lab_0x517662:;
    uint64_t v16 = *(int64_t *)(v5 + 16); // 0x517662
    int64_t v17; // 0x5174fc
    if (v16 >= *(int64_t *)(v5 + 24)) {
        // 0x517a30
        v17 = *(int64_t *)v5;
    } else {
        // 0x517670
        v17 = (int64_t)*(int32_t *)v16;
    }
    // 0x517672
    if (v6 == (char)((int32_t)v17 == -1)) {
        // 0x51758e
        return function_517320(v5);
    }
    // 0x517602
    function_50f7d0(a7);
    return function_517320(a7);
}

// Address range: 0x517bad - 0x517bae
int64_t function_517bad(void) {
    // 0x517bad
    int64_t result; // 0x517bad
    return result;
}

// Address range: 0x517bd5 - 0x517bd8
int64_t function_517bd5(void) {
    // 0x517bd5
    int64_t result; // 0x517bd5
    return result;
}

// Address range: 0x517be0 - 0x517be5
// From class:    std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_517be0(void) {
    // 0x517be0
    return function_517200();
}

// Address range: 0x535b00 - 0x5361c1
int64_t function_535b00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t v1 = 0x100000000 * a5 >> 32; // 0x535b1b
    int64_t v2 = 0x100000000 * a3 >> 32; // 0x535b36
    int64_t v3 = __readfsqword(40); // 0x535b39
    int64_t v4 = function_50ab00(a9 + 208); // 0x535b57
    int64_t v5; // bp-152, 0x535b00
    int64_t v6 = 15 - (4 * a8 + 30 & -16) + (int64_t)&v5 & -16; // 0x535b7b
    int64_t v7; // 0x535b00
    int64_t v8; // 0x535b00
    int64_t v9; // 0x535b00
    int64_t v10; // 0x535b00
    int64_t v11; // 0x535bf4
    if (a2 == 0) {
        goto lab_0x535c01;
    } else {
        if ((int32_t)a3 == -1) {
            uint64_t v12 = *(int64_t *)(a2 + 16); // 0x535bdc
            int64_t v13 = a2; // 0x535be4
            if (v12 < *(int64_t *)(a2 + 24)) {
                // 0x535bea
                v13 = (int64_t)*(int32_t *)v12;
            }
            // 0x535bec
            if ((int32_t)v13 == -1) {
                goto lab_0x535c01;
            } else {
                // 0x535bf1
                v11 = 0x100000000 * v13 >> 32;
                v9 = v11;
                v10 = a4;
                v8 = v1;
                v7 = a2;
                if (a4 != 0) {
                    goto lab_0x535b92;
                } else {
                    goto lab_0x535bf9;
                }
            }
        } else {
            // 0x535b8d
            v11 = v2;
            v9 = v2;
            v10 = 0;
            v8 = v1;
            v7 = a2;
            if (a4 == 0) {
                goto lab_0x535bf9;
            } else {
                goto lab_0x535b92;
            }
        }
    }
  lab_0x535feb_2:;
    int64_t v14 = -1; // 0x535ff2
    int64_t v15; // 0x535b00
    int64_t v16 = v15; // 0x535ff2
    int64_t v17; // 0x535b00
    int64_t v18 = v17; // 0x535ff2
    int64_t v19; // 0x535b00
    int64_t v20 = v19; // 0x535ff2
    int64_t v21; // 0x535b00
    int64_t v22 = v21; // 0x535ff2
    int64_t v23; // 0x535b00
    int64_t v24 = v23; // 0x535ff2
    int64_t v25; // 0x535b00
    int64_t v26 = v25; // 0x535ff2
    goto lab_0x535b9c;
  lab_0x535e1b:;
    // 0x535e1b
    int64_t v64; // 0x535b00
    int64_t v250 = v64;
    int64_t v61; // 0x535b00
    int64_t v133 = v61;
    int64_t v60; // 0x535b00
    int64_t v251 = v60;
    int64_t v59; // 0x535b00
    int64_t v252 = v59;
    v14 = v252;
    v16 = v251;
    v18 = v133;
    v20 = v19;
    int64_t v63; // 0x535b00
    v22 = v63;
    v24 = v21;
    v26 = v250;
    int64_t result; // 0x535b00
    int64_t v137; // 0x535b00
    int64_t v170; // 0x535b00
    int64_t v141; // 0x535b00
    int64_t v168; // 0x535b00
    int64_t v128; // 0x535b00
    int64_t v126; // 0x535b00
    int64_t v166; // 0x535b00
    int64_t v124; // 0x535b00
    int64_t v139; // 0x535b00
    int64_t v145; // 0x535b00
    int64_t v62; // 0x535b00
    int64_t v174; // 0x535b00
    int64_t v147; // 0x535b00
    int64_t v176; // 0x535b00
    int64_t v172; // 0x535b00
    int64_t v143; // 0x535b00
    int64_t v132; // 0x535b00
    int32_t * v58; // 0x535b00
    int64_t v130; // 0x535b00
    int64_t v149; // 0x535b00
    int64_t v178; // 0x535b00
    int32_t v135; // 0x535e47
    int64_t v134; // 0x535e60
    if (v62 != 1) {
        goto lab_0x535b9c;
    } else {
        int64_t v253 = v252; // 0x535e28
        if (v250 != 0) {
            int64_t * v254 = (int64_t *)(v250 + 16); // 0x535e2a
            uint64_t v255 = *v254; // 0x535e2a
            result = v255;
            if (v255 >= *(int64_t *)(v250 + 24)) {
                // 0x535bcd
                return result;
            }
            // 0x535e38
            *v254 = v255 + 4;
            v253 = -1;
        }
        int64_t v256 = v253;
        v135 = *(int32_t *)v21;
        int64_t v257 = (int64_t)v58 + 1; // 0x535e4e
        int64_t wstr2 = *(int64_t *)(8 * (int64_t)v135 + v19); // 0x535e52
        v134 = wcslen((int32_t *)wstr2);
        v132 = v256;
        v130 = v251;
        v128 = v257;
        v126 = v21;
        v124 = v250;
        if (v257 >= v134) {
            goto lab_0x535eb1;
        } else {
            int64_t v258 = v256 & 0xffffffff; // 0x535e76
            int64_t v259 = v133 & 0xffffffff; // 0x535e80
            v178 = v251;
            v176 = wstr2;
            v174 = v258;
            v172 = v259;
            v170 = v251;
            v168 = v257;
            v166 = v250;
            v149 = v251;
            v139 = v134;
            v147 = wstr2;
            v145 = v258;
            v143 = v259;
            v137 = v251;
            v141 = v257;
            if (v250 == 0) {
                goto lab_0x536102;
            } else {
                goto lab_0x535e90;
            }
        }
    }
  lab_0x535ed2:;
    // 0x535ed2
    int64_t v94; // 0x535b00
    v14 = v94;
    int64_t v95; // 0x535b00
    v16 = v95;
    int64_t v96; // 0x535b00
    v18 = v96;
    int64_t v97; // 0x535b00
    v20 = v97;
    int64_t v98; // 0x535b00
    v22 = v98;
    int64_t v99; // 0x535b00
    v24 = v99;
    v26 = 0;
    goto lab_0x535b9c;
  lab_0x535f25:;
    // 0x535f25
    int64_t v83; // 0x535b00
    int64_t v260 = v83;
    int64_t v100 = v260; // 0x535f31
    int64_t v101 = v15; // 0x535f31
    int64_t v102 = v17; // 0x535f31
    int64_t v103 = 0; // 0x535f31
    int64_t v108; // 0x535b00
    int64_t v111; // 0x535b00
    int64_t v106; // 0x535b00
    char v110; // 0x535b00
    char v107; // 0x535b00
    int64_t v105; // 0x535b00
    int64_t v109; // 0x535b00
    if ((int32_t)v17 != -1) {
        goto lab_0x535db0;
    } else {
        uint64_t v261 = *(int64_t *)(v15 + 16); // 0x535f3b
        v105 = v260;
        v106 = v261;
        v107 = 1;
        v108 = 0;
        v109 = v260;
        v110 = 1;
        v111 = 0;
        if (v261 >= *(int64_t *)(v15 + 24)) {
            goto lab_0x535fba;
        } else {
            goto lab_0x535f45;
        }
    }
  lab_0x535db0:;
    // 0x535db0
    uint64_t v78; // 0x535d55
    int32_t * v262 = (int32_t *)v78;
    int64_t v263 = v100 & 0xffffffff; // 0x535dc1
    int64_t v264 = 0; // 0x535dc1
    int64_t v72; // 0x535d10
    int64_t v265 = v72; // 0x535dc1
    int64_t v266 = v23; // 0x535dc1
    int64_t v267 = v103; // 0x535dc1
    int64_t v268; // 0x535b00
    int64_t v269; // 0x535b00
    int64_t v270; // 0x535b00
    while (true) {
        int64_t v271 = v267;
        int64_t v272 = v266;
        int64_t v273 = v263;
        int32_t v274 = *(int32_t *)(*(int64_t *)(8 * v265 + v19) + 4 * v78); // 0x535de7
        int64_t v275 = v273; // 0x535def
        int64_t v276 = 0xffffffff; // 0x535def
        int64_t v277 = 0; // 0x535def
        if (v271 != 0) {
            if ((int32_t)v273 == -1) {
                uint64_t v278 = *(int64_t *)(v271 + 16); // 0x535ee0
                if (v278 >= *(int64_t *)(v271 + 24)) {
                    // branch -> 0x535ef0
                }
                int64_t v279 = (int64_t)*(int32_t *)v278;
                v275 = v279;
                v276 = (int32_t)v279 != -1 ? v279 & 0xffffffff : 0xffffffff;
                v277 = (int32_t)v279 == -1 ? 0 : v271;
            } else {
                // 0x535df9
                v275 = v273;
                v276 = v273 & 0xffffffff;
                v277 = v271;
            }
        }
        // 0x535dfb
        v269 = v277;
        int64_t v280 = v264;
        v270 = v275;
        int32_t v281; // 0x535b00
        int64_t v282; // 0x535b00
        int64_t v283; // 0x535b00
        if (v274 != (int32_t)v276) {
            int64_t v284 = v272 - 1; // 0x535dc8
            int32_t v285 = *(int32_t *)(4 * v284 + v21); // 0x535dcc
            *(int32_t *)(4 * v280 + v21) = v285;
            v281 = v285;
            v283 = v280;
            v282 = v284;
            v268 = v284;
            if (v284 <= v280) {
                // break -> 0x535e08
                break;
            }
        } else {
            int64_t v286 = v280 + 1; // 0x535dff
            v268 = v272;
            if (v272 <= v286) {
                // break -> 0x535e08
                break;
            }
            // 0x535dff
            v281 = *(int32_t *)(4 * v286 + v21);
            v283 = v286;
            v282 = v272;
        }
        // 0x535ddb
        v263 = v270;
        v264 = v283;
        v265 = v281;
        v266 = v282;
        v267 = v269;
    }
    int64_t v287 = 0x100000000 * v270 >> 32; // 0x535e0c
    int32_t * v65 = v262; // 0x535e0f
    int64_t v66 = v287; // 0x535e0f
    int64_t v67 = v101; // 0x535e0f
    int64_t v68 = v102; // 0x535e0f
    int64_t v69 = v268; // 0x535e0f
    int64_t v70 = v269; // 0x535e0f
    v58 = v262;
    v59 = v287;
    v60 = v101;
    v61 = v102;
    v62 = v268;
    v63 = v21;
    v64 = v269;
    if (v268 < 2) {
        goto lab_0x535e1b;
    }
    goto lab_0x535d10;
  lab_0x535fba:;
    int64_t v288 = v109; // 0x535fcb
    int64_t v289 = *(int64_t *)v15; // 0x535fcb
    char v290 = v110; // 0x535fcb
    int64_t v291 = v111; // 0x535fcb
    goto lab_0x535f47;
  lab_0x535f45:
    // 0x535f45
    v288 = v105;
    v289 = (int64_t)*(int32_t *)v106;
    v290 = v107;
    v291 = v108;
    goto lab_0x535f47;
  lab_0x535f47:;
    int64_t v292 = v289;
    int64_t v293 = (int32_t)v292 != -1 ? 0x100000000 * v292 >> 32 : -1; // 0x535f55
    int64_t v294 = (int32_t)v292 != -1 ? v15 : 0; // 0x535f5d
    int64_t v79 = v288; // 0x535f68
    int64_t v80 = v294; // 0x535f68
    int64_t v81 = v293; // 0x535f68
    int64_t v82 = v291; // 0x535f68
    v100 = v288;
    v101 = v294;
    v102 = v293;
    v103 = v291;
    if (v290 == (char)((int32_t)v292 == -1)) {
        // break -> 0x535b9c
        goto lab_0x535b9c_2;
    }
    goto lab_0x535db0;
  lab_0x535c01:
    // 0x535c01
    v94 = v2;
    v95 = 0;
    v96 = v1;
    v97 = a7;
    v98 = v4;
    v99 = v6;
    int64_t v39; // 0x535b00
    int64_t v40; // 0x535b00
    int64_t v41; // 0x535b00
    int64_t v113; // 0x535b00
    int64_t v42; // 0x535b00
    char v120; // 0x535b00
    int64_t v38; // 0x535b00
    int64_t v37; // 0x535b00
    int64_t v115; // 0x535b00
    int64_t v35; // 0x535b00
    int64_t v36; // 0x535b00
    if (a4 == 0) {
        goto lab_0x535ed2;
    } else {
        // 0x535c0a
        v115 = v2;
        v120 = 1;
        v113 = 0;
        v35 = v2;
        v36 = a4;
        v37 = v1;
        v38 = 0xffffffff;
        v39 = a7;
        v40 = v4;
        v41 = v6;
        v42 = 0;
        if ((int32_t)a5 != -1) {
            goto lab_0x535c84;
        } else {
            goto lab_0x535c20;
        }
    }
  lab_0x535b9c:;
    int32_t * v27 = (int32_t *)a10; // 0x535ba0
    *v27 = *v27 | 4;
    int64_t v28 = v14; // 0x535ba0
    int64_t v29 = v16; // 0x535ba0
    int64_t v30 = v18; // 0x535ba0
    int64_t v31 = v20; // 0x535ba0
    int64_t v32 = v22; // 0x535ba0
    int64_t v33 = v24; // 0x535ba0
    int64_t v34 = v26; // 0x535ba0
    goto lab_0x535ba3;
  lab_0x535c84:;
    int64_t v43 = v42;
    v21 = v41;
    int64_t v44 = v40;
    v19 = v39;
    int64_t v45 = v37;
    int64_t v46 = v36;
    int64_t v47 = v35;
    v14 = v47;
    v16 = v46;
    v18 = v45;
    v20 = v19;
    v22 = v44;
    v24 = v21;
    v26 = v43;
    if (a8 == 0) {
        goto lab_0x535b9c;
    } else {
        int32_t v48 = v38; // 0x535ccd
        int64_t * v49 = (int64_t *)v44;
        int64_t v50 = 0;
        int64_t v51 = 0;
        int64_t v52; // 0x535b00
        int64_t v53; // 0x535b00
        int64_t v54; // 0x535cbd
        while (*(int32_t *)*(int64_t *)(8 * v51 + v19) != v48) {
            // 0x535cb0
            if ((int32_t)*v49 == v48) {
                // break -> 0x535cd1
                break;
            }
            // 0x535cbd
            v54 = v51 + 1;
            v52 = v50;
            v53 = a8;
            if (v54 == a8) {
                // break (via goto) -> 0x535ce7
                goto lab_0x535ce7;
            }
            v51 = v54;
        }
        // 0x535cd1
        *(int32_t *)(4 * v50 + v21) = (int32_t)v51;
        int64_t v55 = v50 + 1; // 0x535cd9
        int64_t v56 = v51 + 1; // 0x535cdd
        v52 = v55;
        v53 = v56;
        while (v56 != a8) {
            // 0x535cc7
            v50 = v55;
            v51 = v56;
            while (*(int32_t *)*(int64_t *)(8 * v51 + v19) != v48) {
                // 0x535cb0
                if ((int32_t)*v49 == v48) {
                    // break -> 0x535cd1
                    break;
                }
                // 0x535cbd
                v54 = v51 + 1;
                v52 = v50;
                v53 = a8;
                if (v54 == a8) {
                    // break (via goto) -> 0x535ce7
                    goto lab_0x535ce7;
                }
                v51 = v54;
            }
            // 0x535cd1
            *(int32_t *)(4 * v50 + v21) = (int32_t)v51;
            v55 = v50 + 1;
            v56 = v51 + 1;
            v52 = v55;
            v53 = v56;
        }
      lab_0x535ce7:;
        int64_t v57 = v52;
        v58 = NULL;
        v59 = v47;
        v60 = v46;
        v61 = v45;
        v62 = v57;
        v63 = v53;
        v64 = v43;
        if (v57 < 2) {
            goto lab_0x535e1b;
        } else {
            // 0x535d10
            v65 = NULL;
            v66 = v47;
            v67 = v46;
            v68 = v45;
            v69 = v57;
            v70 = v43;
            while (true) {
              lab_0x535d10:
                // 0x535d10
                v25 = v70;
                v23 = v69;
                v17 = v68;
                v15 = v67;
                int64_t v71 = v66;
                v72 = (int64_t)*(int32_t *)v21;
                int64_t v73 = 1; // 0x535d2d
                uint64_t v74 = (int64_t)wcslen((int32_t *)*(int64_t *)(8 * v72 + v19));
                int32_t v75 = *(int32_t *)(4 * v73 + v21); // 0x535d30
                int64_t wstr = *(int64_t *)(8 * (int64_t)v75 + v19); // 0x535d35
                uint64_t v76 = (int64_t)wcslen((int32_t *)wstr); // 0x535d39
                uint64_t v77 = v74 > v76 ? v76 : v74; // 0x535d41
                v73++;
                while (v23 > v73) {
                    // 0x535d30
                    v74 = v77;
                    v75 = *(int32_t *)(4 * v73 + v21);
                    wstr = *(int64_t *)(8 * (int64_t)v75 + v19);
                    v76 = (int64_t)wcslen((int32_t *)wstr);
                    v77 = v74 > v76 ? v76 : v74;
                    v73++;
                }
                // 0x535d4e
                v78 = (int64_t)v65 + 1;
                if (v25 == 0) {
                    // 0x535f10
                    v79 = v71;
                    v80 = v15;
                    v81 = v17;
                    v82 = 0;
                    v83 = v71;
                    if (v15 == 0 || v77 <= v78) {
                        // break -> 0x535b9c
                        break;
                    }
                    goto lab_0x535f25;
                } else {
                    int64_t * v84 = (int64_t *)(v25 + 16); // 0x535d67
                    uint64_t v85 = *v84; // 0x535d67
                    int64_t * v86 = (int64_t *)(v25 + 24); // 0x535d6b
                    uint64_t v87 = *v86; // 0x535d6b
                    int64_t v88; // 0x535b00
                    int64_t v89; // 0x535b00
                    if (v85 >= v87) {
                        // 0x535fd0
                        v88 = v87;
                        v89 = v85;
                        if (0x100000000 * v77 / 0x100000000 <= v78) {
                            goto lab_0x535feb_2;
                        }
                    } else {
                        int64_t v90 = v85 + 4; // 0x535d75
                        *v84 = v90;
                        if (v77 <= v78) {
                            goto lab_0x535feb_2;
                        }
                        // 0x535d75
                        v88 = *v86;
                        v89 = v90;
                    }
                    uint64_t v91 = v89; // 0x535d87
                    int64_t v92; // 0x535b00
                    if (v91 >= v88) {
                        // 0x536000
                        v92 = 0x100000000 * *(int64_t *)v25 >> 32;
                    } else {
                        // 0x535d95
                        v92 = (int64_t)*(int32_t *)v91;
                    }
                    int64_t v93 = v92;
                    if ((int32_t)v93 == -1) {
                        // 0x535ecb
                        v94 = v93;
                        v95 = v15;
                        v96 = v17;
                        v97 = v19;
                        v98 = v21;
                        v99 = v23;
                        v83 = v93;
                        if (v15 == 0) {
                            goto lab_0x535ed2;
                        }
                        goto lab_0x535f25;
                    } else {
                        // 0x535da4
                        v100 = v93;
                        v101 = v15;
                        v102 = v17;
                        v103 = v25;
                        if (v15 != 0) {
                            // 0x535fa0
                            v79 = v93;
                            v80 = v15;
                            v81 = v17;
                            v82 = v25;
                            if ((int32_t)v17 != -1) {
                                // break -> 0x535b9c
                                break;
                            }
                            uint64_t v104 = *(int64_t *)(v15 + 16); // 0x535fb0
                            v105 = v93;
                            v106 = v104;
                            v107 = 0;
                            v108 = v25;
                            v109 = v93;
                            v110 = 0;
                            v111 = v25;
                            if (v104 < *(int64_t *)(v15 + 24)) {
                                goto lab_0x535f45;
                            } else {
                                goto lab_0x535fba;
                            }
                        } else {
                            goto lab_0x535db0;
                        }
                    }
                }
            }
          lab_0x535b9c_2:
            // 0x535b9c
            v14 = v79;
            v16 = v80;
            v18 = v81;
            v20 = v19;
            v22 = v21;
            v24 = v23;
            v26 = v82;
            goto lab_0x535b9c;
        }
    }
  lab_0x535c20:;
    int64_t v112 = v113;
    int64_t v114 = v115;
    uint64_t v116 = *(int64_t *)(a4 + 16); // 0x535c20
    int64_t v117; // 0x535b00
    if (v116 >= *(int64_t *)(a4 + 24)) {
        // 0x53601e
        v117 = 0x100000000 * a4 >> 32;
    } else {
        // 0x535c2e
        v117 = (int64_t)*(int32_t *)v116;
    }
    int64_t v118 = v117;
    int64_t v119 = (int32_t)v118 != -1 ? a4 : 0; // 0x535c3e
    v14 = v114;
    v16 = v119;
    v18 = v118;
    v20 = a7;
    v22 = v4;
    v24 = v6;
    v26 = v112;
    if (v120 == (char)((int32_t)v118 == -1)) {
        goto lab_0x535b9c;
    } else {
        // 0x535c51
        v35 = v114;
        v36 = v119;
        v37 = v118;
        v38 = 0xffffffff;
        v39 = a7;
        v40 = v4;
        v41 = v6;
        v42 = 0;
        if (v112 == 0) {
            goto lab_0x535c84;
        } else {
            // 0x535c5a
            v9 = v114;
            v10 = v119;
            v8 = v118;
            v7 = v112;
            if ((int32_t)v114 != -1) {
                goto lab_0x535bf9;
            } else {
                uint64_t v121 = *(int64_t *)(v112 + 16); // 0x535c60
                int64_t v122; // 0x535b00
                if (v121 >= *(int64_t *)(v112 + 24)) {
                    // 0x53604c
                    v122 = 0x100000000 * *(int64_t *)v112 >> 32;
                } else {
                    // 0x535c6e
                    v122 = (int64_t)*(int32_t *)v121;
                }
                // 0x535c73
                v35 = v122;
                v36 = v119;
                v37 = v118;
                v38 = v122 & 0xffffffff;
                v39 = a7;
                v40 = v4;
                v41 = v6;
                v42 = (int32_t)v122 == -1 ? 0 : v112;
                goto lab_0x535c84;
            }
        }
    }
  lab_0x535bf9:
    // 0x535bf9
    v35 = v9;
    v36 = v10;
    v37 = v8;
    v38 = v9 & 0xffffffff;
    v39 = a7;
    v40 = v4;
    v41 = v6;
    v42 = v7;
    goto lab_0x535c84;
  lab_0x535b92:
    // 0x535b92
    v14 = v11;
    v16 = a4;
    v18 = v1;
    v20 = a7;
    v22 = v4;
    v24 = v6;
    v26 = a2;
    v115 = v11;
    v120 = 0;
    v113 = a2;
    if ((int32_t)a5 == -1) {
        goto lab_0x535c20;
    } else {
        goto lab_0x535b9c;
    }
  lab_0x535ba3:
    // 0x535ba3
    result = v34;
    if (v3 == __readfsqword(40)) {
        // 0x535bcd
        return result;
    }
    // 0x53605d
    __stack_chk_fail();
    v35 = v28;
    v36 = v29;
    v37 = v30;
    v38 = 0xffffffff;
    v39 = v31;
    v40 = v32;
    v41 = v33;
    v42 = v34;
    goto lab_0x535c84;
  lab_0x535eb1:;
    int64_t v123 = v124;
    int64_t v125 = v126;
    int64_t v127 = v128;
    int64_t v129 = v130;
    int64_t v131 = v132;
    v14 = v131;
    v16 = v129;
    v18 = v133;
    v20 = v134;
    v22 = v127;
    v24 = v125;
    v26 = v123;
    if (v127 != v134) {
        goto lab_0x535b9c;
    } else {
        // 0x535eba
        *(int32_t *)a6 = v135;
        v28 = v131;
        v29 = v129;
        v30 = v133;
        v31 = v134;
        v32 = v127;
        v33 = v125;
        v34 = v123;
        goto lab_0x535ba3;
    }
  lab_0x536102:;
    int64_t v136 = v137;
    int64_t v138 = v139;
    result = v138;
    if (v136 == 0) {
        // 0x535bcd
        return result;
    }
    int64_t v140 = v141;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = v148; // 0x536116
    char v151 = 1; // 0x536116
    int64_t v152 = v146; // 0x536116
    int64_t v153 = v144; // 0x536116
    int64_t v154 = v136; // 0x536116
    int64_t v155 = v140; // 0x536116
    int64_t v156 = 0; // 0x536116
    int64_t v157; // 0x535b00
    int64_t v158; // 0x535b00
    int64_t v159; // 0x535b00
    int64_t v160; // 0x535b00
    int32_t v161; // 0x535b00
    int64_t v162; // 0x535b00
    int64_t v163; // 0x535b00
    int64_t v164; // 0x535b00
    if ((int32_t)v142 == -1) {
        goto lab_0x536098;
    } else {
        // 0x536118
        v164 = v148;
        v159 = v138;
        v161 = *(int32_t *)(4 * v140 + v146);
        v162 = v146;
        v160 = v144;
        v163 = v142;
        v157 = v136;
        v158 = v140;
        goto lab_0x536135;
    }
  lab_0x535e90:;
    int64_t v165 = v166;
    int64_t v167 = v168;
    int64_t v169 = v170;
    int64_t v171 = v172;
    int64_t v173 = v174;
    int64_t v175 = v176;
    int64_t v177 = v178;
    int64_t v179; // 0x535b00
    int64_t v180; // 0x535b00
    int64_t v181; // 0x535b00
    int64_t v182; // 0x535b00
    int64_t v183; // 0x535b00
    int64_t v184; // 0x535b00
    int64_t v185; // 0x535b00
    int64_t v186; // 0x535b00
    if ((int32_t)v173 == -1) {
        uint64_t v187 = *(int64_t *)(v165 + 16); // 0x536070
        int64_t v188; // 0x535b00
        int64_t v189; // 0x535b00
        int64_t v190; // 0x535b00
        int64_t v191; // 0x535b00
        if (v187 >= *(int64_t *)(v165 + 24)) {
            int64_t v192 = 0x100000000 * v171 >> 32; // 0x53618f
            v191 = v192;
            v188 = *(int64_t *)v165;
            v189 = 0x100000000 * v175 >> 32;
            v190 = v192 & 0xffffffff;
        } else {
            // 0x53607e
            v191 = v177;
            v188 = (int64_t)*(int32_t *)v187;
            v189 = v175;
            v190 = v171;
        }
        int64_t v193 = v190;
        int64_t v194 = v189;
        int64_t v195 = v188;
        int64_t v196 = v191;
        v149 = v196;
        v139 = v195;
        v147 = v194;
        v145 = v173;
        v143 = v193;
        v137 = v169;
        v141 = v167;
        if ((int32_t)v195 == -1) {
            goto lab_0x536102;
        } else {
            int64_t v197 = v195 & 0xffffffff; // 0x536088
            v186 = v196;
            v182 = v194;
            v179 = v197;
            v183 = v193;
            v185 = v196;
            v181 = v194;
            v180 = v197;
            v184 = v193;
            if (v169 != 0) {
                goto lab_0x535ea2;
            } else {
                goto lab_0x536090;
            }
        }
    } else {
        // 0x535e99
        v186 = v177;
        v182 = v175;
        v179 = v173;
        v183 = v171;
        v185 = v177;
        v181 = v175;
        v180 = v173;
        v184 = v171;
        if (v169 == 0) {
            goto lab_0x536090;
        } else {
            goto lab_0x535ea2;
        }
    }
  lab_0x536098:;
    int64_t v198 = v156;
    int64_t v199 = v155;
    int64_t v200 = v154;
    int64_t v201 = v153;
    int64_t v202 = v152;
    uint64_t v203 = *(int64_t *)(v200 + 16); // 0x536098
    int64_t v204; // 0x535b00
    int64_t v205; // 0x535b00
    if (v203 >= *(int64_t *)(v200 + 24)) {
        // 0x536164
        v205 = v134;
        v204 = *(int64_t *)v200 & 0xffffffff;
    } else {
        // 0x5360a8
        v205 = v150;
        v204 = (int64_t)*(int32_t *)v203;
    }
    int64_t v206 = v204;
    int64_t v207 = v205;
    int64_t v208 = v207; // 0x5360bb
    int64_t v209 = v201; // 0x5360bb
    int64_t v210 = v199; // 0x5360bb
    int64_t v211 = v198; // 0x5360bb
    int64_t v212; // 0x535b00
    int64_t v213; // 0x535b00
    int64_t v214; // 0x535b00
    int64_t v215; // 0x535b00
    int32_t v216; // 0x535b00
    int64_t v217; // 0x535b00
    int64_t v218; // 0x535b00
    int64_t v219; // 0x535b00
    if (v151 == (char)(v206 == 0xffffffff)) {
        goto lab_0x535eab;
    } else {
        int64_t v220 = v206 == 0xffffffff ? 0 : v200; // 0x5360b2
        int32_t v221 = *(int32_t *)(4 * v199 + v202); // 0x5360c4
        v164 = v207;
        v159 = v206 == 0xffffffff;
        v161 = v221;
        v162 = v202;
        v160 = v201;
        v163 = v206;
        v157 = v220;
        v158 = v199;
        if (v198 == 0) {
            goto lab_0x536135;
        } else {
            // 0x5360ca
            v219 = v207;
            v216 = v221;
            v217 = v202;
            v215 = v201;
            v218 = v206;
            v212 = v220;
            v213 = v199;
            v214 = v198;
            if ((int32_t)v201 == -1) {
                uint64_t v222 = *(int64_t *)(v198 + 16); // 0x536120
                if (v222 >= *(int64_t *)(v198 + 24)) {
                    // 0x5361b0
                    return *(int64_t *)v198;
                }
                uint32_t v223 = *(int32_t *)v222; // 0x53612e
                int64_t v224 = v223; // 0x53612e
                v219 = v207;
                v216 = v221;
                v217 = v202;
                v215 = v224;
                v218 = v206;
                v212 = v220;
                v213 = v199;
                v214 = v198;
                v164 = v207;
                v159 = v222;
                v161 = v221;
                v162 = v202;
                v160 = v224;
                v163 = v206;
                v157 = v220;
                v158 = v199;
                if (v223 != -1) {
                    goto lab_0x5360cf;
                } else {
                    goto lab_0x536135;
                }
            } else {
                goto lab_0x5360cf;
            }
        }
    }
  lab_0x535eab:
    // 0x535eab
    v132 = 0x100000000 * v209 >> 32;
    v130 = v208;
    v128 = v210;
    v126 = 0xffffffff;
    v124 = v211;
    goto lab_0x535eb1;
  lab_0x536135:
    // 0x536135
    result = v159;
    int64_t v225 = v164; // 0x536138
    int64_t v226 = v159; // 0x536138
    int64_t v227 = v162; // 0x536138
    int64_t v228 = v160; // 0x536138
    int64_t v229 = v163; // 0x536138
    int64_t v230 = v157; // 0x536138
    int64_t v231 = v158; // 0x536138
    int64_t v232 = 0; // 0x536138
    if (v161 != -1) {
        // 0x535bcd
        return result;
    }
    goto lab_0x5360ec;
  lab_0x536090:
    // 0x536090
    v219 = v185;
    v216 = *(int32_t *)(v181 + 4 * v167);
    v217 = v181;
    v215 = v180;
    v218 = v184;
    v212 = v169;
    v213 = v167;
    v214 = v165;
    goto lab_0x5360cf;
  lab_0x535ea2:
    // 0x535ea2
    v208 = v186;
    v209 = v179;
    v210 = v167;
    v211 = v165;
    v150 = v186;
    v151 = 0;
    v152 = v182;
    v153 = v179;
    v154 = v169;
    v155 = v167;
    v156 = v165;
    if ((int32_t)v183 == -1) {
        goto lab_0x536098;
    } else {
        goto lab_0x535eab;
    }
  lab_0x5360ec:;
    int64_t v233 = v232;
    int64_t v234 = v228;
    int64_t v235 = v225;
    int64_t v236 = v231 + 1; // 0x5360ec
    v208 = v235;
    v209 = v234;
    v210 = v236;
    v211 = v233;
    if (v236 >= v134) {
        goto lab_0x535eab;
    } else {
        // 0x5360f9
        v178 = v235;
        v176 = v227;
        v174 = v234;
        v172 = v229;
        v170 = v230;
        v168 = v236;
        v166 = v233;
        v149 = v235;
        v139 = v226;
        v147 = v227;
        v145 = v234;
        v143 = v229;
        v137 = v230;
        v141 = v236;
        if (v233 != 0) {
            goto lab_0x535e90;
        } else {
            goto lab_0x536102;
        }
    }
  lab_0x5360cf:;
    int64_t v237 = v214;
    int64_t v238 = v213;
    int64_t v239 = v219;
    v208 = v239;
    v209 = v215;
    v210 = v238;
    v211 = v237;
    if (v216 != (int32_t)v215) {
        goto lab_0x535eab;
    } else {
        int64_t v240 = v218;
        int64_t v241 = v217;
        int64_t * v242 = (int64_t *)(v237 + 16); // 0x5360d7
        uint64_t v243 = *v242; // 0x5360d7
        int64_t v244; // 0x535b00
        int64_t v245; // 0x535b00
        int64_t v246; // 0x535b00
        int64_t v247; // 0x535b00
        if (v243 >= *(int64_t *)(v237 + 24)) {
            int64_t v248 = 0x100000000 * v240 >> 32; // 0x536146
            v247 = v248;
            v244 = *(int64_t *)v237;
            v245 = 0x100000000 * v241 >> 32;
            v246 = v248 & 0xffffffff;
        } else {
            int64_t v249 = v243 + 4; // 0x5360e1
            *v242 = v249;
            v247 = v239;
            v244 = v249;
            v245 = v241;
            v246 = v240;
        }
        // 0x5360e9
        v225 = v247;
        v226 = v244;
        v227 = v245;
        v228 = 0xffffffff;
        v229 = v246;
        v230 = v212;
        v231 = v238;
        v232 = v237;
        goto lab_0x5360ec;
    }
}

// Address range: 0x536200 - 0x5367fd
int64_t function_536200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8, int64_t a9, int64_t a10) {
    // 0x536200
    __readfsqword(40);
    int64_t v1 = 0x100000000 * a5 >> 32; // 0x53624f
    int64_t v2 = function_50ab00(a9 + 208); // 0x53625a
    int64_t v3 = a3 & 0xffffffff; // 0x536266
    int64_t v4 = 8 * a8 + 30 & -16; // 0x536276
    int64_t v5; // bp-152, 0x536200
    int64_t v6 = (int64_t)&v5 - v4; // 0x53627a
    int64_t v7 = v6 + 15 & -16; // 0x536282
    int64_t result = v4; // 0x536289
    int64_t v8 = v2; // 0x536289
    int64_t v9; // 0x536200
    int64_t v10; // 0x536200
    int64_t v11; // 0x536200
    int64_t v12; // 0x536200
    int64_t v13; // 0x536200
    int64_t v14; // 0x536200
    int64_t v15; // 0x5364c9
    if (a2 == 0) {
        goto lab_0x5364da;
    } else {
        if ((int32_t)a3 == -1) {
            uint64_t v16 = *(int64_t *)(a2 + 16); // 0x5364af
            int64_t v17; // 0x536200
            int64_t v18; // 0x536200
            if (v16 >= *(int64_t *)(a2 + 24)) {
                // 0x536797
                v18 = a2;
                v17 = 0x100000000 * v2 >> 32;
            } else {
                // 0x5364bf
                v18 = (int64_t)*(int32_t *)v16;
                v17 = v2;
            }
            // 0x5364c1
            v8 = v17;
            result = v18;
            if ((int32_t)result == -1) {
                goto lab_0x5364da;
            } else {
                // 0x5364c6
                v15 = result & 0xffffffff;
                v9 = v8;
                v14 = a4;
                v13 = v1;
                v12 = v15;
                v10 = v8;
                v11 = a2;
                if (a4 != 0) {
                    goto lab_0x5362a2;
                } else {
                    goto lab_0x5364d2;
                }
            }
        } else {
            // 0x536299
            v15 = v3;
            v9 = v2;
            v14 = 0;
            v13 = v1;
            v12 = v3;
            v10 = v2;
            v11 = a2;
            if (a4 == 0) {
                goto lab_0x5364d2;
            } else {
                goto lab_0x5362a2;
            }
        }
    }
  lab_0x5364da:
    // 0x5364da
    if (a4 == 0) {
        // 0x5367f7
        return result;
    }
    int64_t v19 = v3; // 0x5364e7
    int64_t v20 = v8; // 0x5364e7
    int64_t v21 = 0; // 0x5364e7
    char v22 = 1; // 0x5364e7
    int64_t v23 = a4; // 0x5364e7
    int64_t v24 = v1; // 0x5364e7
    int64_t v25 = 0xffffffff; // 0x5364e7
    int64_t v26 = v3; // 0x5364e7
    int64_t v27 = v8; // 0x5364e7
    int64_t v28 = 0; // 0x5364e7
    if ((int32_t)a5 != -1) {
        goto lab_0x53655a;
    } else {
        goto lab_0x5364f6;
    }
  lab_0x53655a:;
    int64_t v29 = v23; // 0x536561
    int64_t v30 = v24; // 0x536561
    int64_t v31 = 0; // 0x536561
    int64_t v32 = v26; // 0x536561
    int64_t v33 = a7; // 0x536561
    int64_t v34 = v28; // 0x536561
    int64_t v35 = 0; // 0x536561
    int64_t v36 = 0; // 0x536561
    if ((a8 & 0x7fffffffffffffff) != 0) {
        int64_t v37 = v26 & 0xffffffff;
        int32_t v38 = v25; // 0x5365af
        int64_t v39 = 0x200000000 * a8 / 0x100000000;
        int64_t v40 = 0;
        int64_t v41 = 0;
        int64_t v42; // 0x536200
        int64_t v43; // 0x53659e
        while (*(int32_t *)*(int64_t *)(8 * v41 + a7) != v38) {
            // 0x536590
            if (v38 == (int32_t)*(int64_t *)v27) {
                // break -> 0x5365b3
                break;
            }
            // 0x53659e
            v43 = v41 + 1;
            v42 = v40;
            if (v43 == v39) {
                // break (via goto) -> 0x5365c9
                goto lab_0x5365c9;
            }
            v41 = v43;
        }
        // 0x5365b3
        *(int32_t *)(4 * v40 + v7) = (int32_t)v41;
        int64_t v44 = v40 + 1; // 0x5365bb
        int64_t v45 = v41 + 1; // 0x5365bf
        v42 = v44;
        while (v45 != v39) {
            // 0x5365a8
            v40 = v44;
            v41 = v45;
            while (*(int32_t *)*(int64_t *)(8 * v41 + a7) != v38) {
                // 0x536590
                if (v38 == (int32_t)*(int64_t *)v27) {
                    // break -> 0x5365b3
                    break;
                }
                // 0x53659e
                v43 = v41 + 1;
                v42 = v40;
                if (v43 == v39) {
                    // break (via goto) -> 0x5365c9
                    goto lab_0x5365c9;
                }
                v41 = v43;
            }
            // 0x5365b3
            *(int32_t *)(4 * v40 + v7) = (int32_t)v41;
            v44 = v40 + 1;
            v45 = v41 + 1;
            v42 = v44;
        }
      lab_0x5365c9:
        // 0x5365c9
        v29 = v23;
        v30 = v24;
        v31 = 0;
        v32 = v37;
        v33 = a7;
        v34 = v28;
        v35 = 0;
        v36 = 0;
        if (v42 != 0) {
            int64_t v46 = v37; // 0x5365f0
            int64_t v47 = a7; // 0x5365f0
            if (v28 != 0) {
                int64_t * v48 = (int64_t *)(v28 + 16); // 0x5365f2
                uint64_t v49 = *v48; // 0x5365f2
                if (v49 >= *(int64_t *)(v28 + 24)) {
                    // 0x5367be
                    v46 = 0xffffffff;
                    v47 = 0x100000000 * a7 >> 32;
                } else {
                    // 0x536602
                    *v48 = v49 + 4;
                    v46 = 0xffffffff;
                    v47 = a7;
                }
            }
            int64_t v50 = v6 - (8 * v42 + 30 & -16) + 15; // 0x53662b
            int64_t v51 = 0; // 0x536644
            int32_t v52 = *(int32_t *)(4 * v51 + v7); // 0x536648
            int32_t v53 = wcslen((int32_t *)*(int64_t *)(8 * (int64_t)v52 + v47)); // 0x536650
            *(int64_t *)(8 * v51 + (v50 & -16)) = (int64_t)v53;
            v51++;
            while (v42 != v51) {
                // 0x536648
                v52 = *(int32_t *)(4 * v51 + v7);
                v53 = wcslen((int32_t *)*(int64_t *)(8 * (int64_t)v52 + v47));
                *(int64_t *)(8 * v51 + (v50 & -16)) = (int64_t)v53;
                v51++;
            }
            // 0x536663
            v29 = v23;
            v30 = v24;
            v31 = v42;
            v32 = v46;
            v33 = v47;
            v34 = v28;
            v35 = 1;
            v36 = 0x100000000 * v50 >> 32 & -16;
        }
    }
    goto lab_0x5362b4;
  lab_0x5364f6:;
    uint64_t v220 = *(int64_t *)(a4 + 16); // 0x5364f6
    int64_t v221; // 0x536200
    int64_t v222; // 0x536200
    if (v220 >= *(int64_t *)(a4 + 24)) {
        // 0x53676e
        v222 = 0x100000000 * a4 >> 32;
        v221 = v19 & 0xffffffff;
    } else {
        // 0x536504
        v222 = (int64_t)*(int32_t *)v220;
        v221 = v19;
    }
    int64_t v223 = (int32_t)v222 != -1 ? a4 : 0; // 0x536514
    v29 = v223;
    v30 = v222;
    v31 = 0;
    v32 = v221;
    v33 = a7;
    v34 = v21;
    v35 = 0;
    v36 = 0;
    if (v22 == (char)((int32_t)v222 == -1)) {
        goto lab_0x5362b4;
    } else {
        // 0x536528
        if (v21 == 0) {
            // 0x5367f7
            return v223 & -256 | (int64_t)((int32_t)v222 == -1);
        }
        // 0x536531
        v14 = v223;
        v13 = v222;
        v12 = v221;
        v10 = v20;
        v11 = v21;
        if ((int32_t)v221 != -1) {
            goto lab_0x5364d2;
        } else {
            uint64_t v224 = *(int64_t *)(v21 + 16); // 0x536537
            int64_t v225; // 0x536200
            int64_t v226; // 0x536200
            if (v224 >= *(int64_t *)(v21 + 24)) {
                // 0x5367d5
                v226 = *(int64_t *)v21 & 0xffffffff;
                v225 = 0x100000000 * v20 >> 32;
            } else {
                // 0x536547
                v226 = (int64_t)*(int32_t *)v224;
                v225 = v20;
            }
            // 0x53654a
            v23 = v223;
            v24 = v222;
            v25 = v226;
            v26 = v226;
            v27 = v225;
            v28 = v226 == 0xffffffff ? 0 : v21;
            goto lab_0x53655a;
        }
    }
  lab_0x5362b4:;
    int64_t v54 = 4 * v35; // 0x5362b7
    int64_t v55 = v36; // 0x5362bf
    int64_t v56 = v29; // 0x5362bf
    int64_t v57 = v30; // 0x5362bf
    int64_t v58 = v31; // 0x5362bf
    int64_t v59 = v54; // 0x5362bf
    int64_t v60 = v32; // 0x5362bf
    int64_t v61 = v33; // 0x5362bf
    int64_t v62 = v34; // 0x5362bf
    int64_t v63 = v35; // 0x5362bf
    int64_t v64 = v36; // 0x5362bf
    int64_t v65 = v29; // 0x5362bf
    int64_t v66 = v30; // 0x5362bf
    int64_t v67 = v31; // 0x5362bf
    int64_t v68 = v54; // 0x5362bf
    int64_t v69 = v32; // 0x5362bf
    int64_t v70 = v33; // 0x5362bf
    int64_t v71 = v35; // 0x5362bf
    if (v34 == 0) {
        goto lab_0x53639f;
    } else {
        goto lab_0x5362c8;
    }
  lab_0x5364d2:
    // 0x5364d2
    v23 = v14;
    v24 = v13;
    v25 = v12 & 0xffffffff;
    v26 = v12;
    v27 = v10;
    v28 = v11;
    goto lab_0x53655a;
  lab_0x5362a2:
    // 0x5362a2
    v55 = 0;
    v56 = a4;
    v57 = v1;
    v58 = 0;
    v59 = 0;
    v60 = v15;
    v61 = a7;
    v62 = a2;
    v63 = 0;
    v19 = v15;
    v20 = v9;
    v21 = a2;
    v22 = 0;
    if ((int32_t)a5 == -1) {
        goto lab_0x5364f6;
    } else {
        goto lab_0x5362c8;
    }
  lab_0x53639f:;
    int64_t v72 = v71;
    int64_t v73 = v67;
    int64_t v74 = v65;
    int64_t v75 = v64;
    int64_t v76 = v75; // 0x5363a4
    int64_t v77 = 0; // 0x5363a4
    int64_t v78 = v73; // 0x5363a4
    int64_t v79 = v72; // 0x5363a4
    int64_t v80; // 0x536200
    int64_t v81; // 0x536200
    int64_t v82; // 0x536200
    int64_t v83; // 0x536200
    int64_t v84; // 0x536200
    int64_t v85; // 0x536200
    int64_t v86; // 0x536200
    int64_t v87; // 0x536200
    int64_t v88; // 0x536200
    int64_t v89; // 0x536200
    int64_t v90; // 0x536200
    int64_t v91; // 0x536200
    int64_t v92; // 0x536200
    int64_t v93; // 0x536200
    char v94; // 0x536200
    char v95; // 0x536200
    int64_t v96; // 0x536200
    int64_t v97; // 0x536200
    int64_t v98; // 0x536200
    if (v74 == 0) {
        goto lab_0x536720;
    } else {
        // 0x5363aa
        v86 = v75;
        v97 = v74;
        v96 = v66;
        v94 = 1;
        v92 = v73;
        v88 = v68;
        v91 = v69;
        v80 = v70;
        v82 = 0;
        v84 = v72;
        v87 = v75;
        v98 = v74;
        v95 = 1;
        v93 = v73;
        v89 = v68;
        v90 = v69;
        v81 = v70;
        v83 = 0;
        v85 = v72;
        if ((int32_t)v66 != -1) {
            goto lab_0x5362e5;
        } else {
            goto lab_0x5363c0;
        }
    }
  lab_0x5362c8:;
    int64_t v99 = v63; // 0x5362cc
    int64_t v100 = v62; // 0x5362cc
    int64_t v101 = v61; // 0x5362cc
    int64_t v102 = v59; // 0x5362cc
    int64_t v103 = v58; // 0x5362cc
    int64_t v104 = v57; // 0x5362cc
    int64_t v105 = v56; // 0x5362cc
    int64_t v106 = v55; // 0x5362cc
    int64_t v107 = v60; // 0x5362cc
    int64_t * v108; // 0x536200
    int64_t v109; // 0x536200
    int64_t v110; // 0x536200
    int64_t v111; // 0x536200
    int64_t v112; // 0x536200
    int64_t v113; // 0x536200
    int64_t v114; // 0x536200
    int64_t v115; // 0x536200
    int64_t v116; // 0x536200
    int64_t v117; // 0x536200
    int64_t v118; // 0x536200
    if ((int32_t)v60 == -1) {
        // 0x5362c8
        v109 = *(int64_t *)(v62 + 16);
        v108 = (int64_t *)(v62 + 24);
        v112 = v63;
        v111 = v62;
        v110 = v61;
        v115 = v60;
        v114 = v59;
        v116 = v58;
        v117 = v57;
        v118 = v56;
        v113 = v55;
        goto lab_0x536400;
    } else {
        goto lab_0x5362d2;
    }
  lab_0x536720:;
    int64_t v119 = v79;
    int64_t v120 = v78;
    int64_t result3 = v77;
    int64_t v121 = v76;
    int64_t result2; // 0x536200
    if (v120 != 1) {
        // 0x536734
        result2 = result3;
        if (v120 != 2) {
            goto lab_0x536453;
        } else {
            // 0x53673a
            if (*(int64_t *)v121 == v119) {
                goto lab_0x53674d;
            } else {
                // 0x53673f
                result2 = result3;
                if (*(int64_t *)(v121 || 8) != v119) {
                    goto lab_0x536453;
                } else {
                    goto lab_0x53674d;
                }
            }
        }
    } else {
        // 0x536726
        result2 = result3;
        if (*(int64_t *)v121 == v119) {
            goto lab_0x53674d;
        } else {
            goto lab_0x536453;
        }
    }
  lab_0x5362d2:;
    int64_t v122 = v107;
    int64_t v123 = v106;
    int64_t v124 = v105;
    int64_t v125 = v104;
    int64_t v126 = v103;
    int64_t v127 = v102;
    int64_t v128 = v101;
    int64_t v129 = v100;
    int64_t v130 = v99;
    int64_t v131 = v123; // 0x5362d9
    int64_t v132 = 0; // 0x5362d9
    int64_t v133 = v125; // 0x5362d9
    int64_t v134 = v126; // 0x5362d9
    int64_t v135 = v127; // 0x5362d9
    int64_t v136 = v122; // 0x5362d9
    int64_t v137 = v128; // 0x5362d9
    int64_t v138 = v129; // 0x5362d9
    int64_t v139 = v130; // 0x5362d9
    if (v124 == 0) {
        goto lab_0x536308;
    } else {
        // 0x5362db
        v86 = v123;
        v97 = v124;
        v96 = v125;
        v94 = 0;
        v92 = v126;
        v88 = v127;
        v91 = v122;
        v80 = v128;
        v82 = v129;
        v84 = v130;
        v87 = v123;
        v98 = v124;
        v95 = 0;
        v93 = v126;
        v89 = v127;
        v90 = v122;
        v81 = v128;
        v83 = v129;
        v85 = v130;
        if ((int32_t)v125 == -1) {
            goto lab_0x5363c0;
        } else {
            goto lab_0x5362e5;
        }
    }
  lab_0x5362e5:;
    int64_t v140 = v84;
    int64_t v141 = v82;
    int64_t v142 = v92;
    int64_t v143 = v96;
    int64_t v144 = v86;
    v76 = v144;
    v77 = v141;
    v78 = v142;
    v79 = v140;
    int64_t v145; // 0x536200
    int64_t v146; // 0x536200
    int64_t v147; // 0x536200
    int64_t v148; // 0x536200
    int64_t v149; // 0x536200
    int64_t v150; // 0x536200
    int64_t v151; // 0x536200
    int64_t v152; // 0x536200
    int64_t v153; // 0x536200
    int64_t v154; // 0x536200
    if (v94 == (char)((int32_t)v143 == -1)) {
        goto lab_0x536720;
    } else {
        int64_t v155 = v80;
        int64_t v156 = v91;
        int64_t v157 = v88;
        int64_t v158 = v97;
        v149 = v144;
        v154 = v158;
        v153 = v143;
        v152 = v142;
        v150 = v157;
        v151 = v156;
        v145 = v155;
        v146 = 0xffffffff;
        v147 = 0;
        v148 = v140;
        if (v141 == 0) {
            goto lab_0x53630b;
        } else {
            // 0x5362ff
            v131 = v144;
            v132 = v158;
            v133 = v143;
            v134 = v142;
            v135 = v157;
            v136 = v156;
            v137 = v155;
            v138 = v141;
            v139 = v140;
            if ((int32_t)v156 == -1) {
                uint64_t v159 = *(int64_t *)(v141 + 16); // 0x536420
                uint64_t v160 = *(int64_t *)(v141 + 24); // 0x536425
                int64_t v161; // 0x536200
                if (v159 >= v160) {
                    int64_t v162 = *(int64_t *)v141; // 0x5366db
                    v161 = v162 & 0xffffffff;
                } else {
                    uint32_t v163 = *(int32_t *)v159; // 0x536430
                    v161 = v163;
                }
                int64_t v164 = v161;
                int64_t v165 = v164 == 0xffffffff ? 0 : v141; // 0x536446
                result2 = v165;
                if (v142 != 0) {
                    goto lab_0x536314;
                } else {
                    goto lab_0x536453;
                }
            } else {
                goto lab_0x536308;
            }
        }
    }
  lab_0x5363c0:;
    int64_t v166 = v81;
    int64_t v167 = v90;
    int64_t v168 = v98;
    uint64_t v169 = *(int64_t *)(v168 + 16); // 0x5363c4
    int64_t v170; // 0x536200
    int64_t v171; // 0x536200
    int64_t v172; // 0x536200
    if (v169 >= *(int64_t *)(v168 + 24)) {
        // 0x53667d
        v172 = 0x100000000 * *(int64_t *)v168 >> 32;
        v171 = v167 & 0xffffffff;
        v170 = 0x100000000 * v166 >> 32;
    } else {
        // 0x5363d2
        v172 = (int64_t)*(int32_t *)v169;
        v171 = v167;
        v170 = v166;
    }
    int64_t v173 = (int32_t)v172 != -1 ? v168 : 0; // 0x5363e0
    v86 = v87;
    v97 = v173;
    v96 = v172;
    v94 = v95;
    v92 = v93;
    v88 = v89;
    v91 = v171;
    v80 = v170;
    v82 = v83;
    v84 = v85;
    goto lab_0x5362e5;
  lab_0x536400:;
    int64_t v174 = v113;
    int64_t v175 = v118;
    int64_t v176 = v117;
    int64_t v177 = v116;
    int64_t v178 = v114;
    int64_t v179 = v115;
    int64_t v180 = v110;
    int64_t v181 = v111;
    int64_t v182 = v112;
    uint64_t v183 = v109; // 0x536400
    int64_t v184; // 0x536200
    int64_t v185; // 0x536200
    if (v183 >= *v108) {
        // 0x5366b4
        v185 = *(int64_t *)v181;
        v184 = v179 & 0xffffffff;
    } else {
        // 0x536410
        v185 = (int64_t)*(int32_t *)v183;
        v184 = v179;
    }
    int64_t v186 = v185;
    v64 = v174;
    v65 = v175;
    v66 = v176;
    v67 = v177;
    v68 = v178;
    v69 = v184;
    v70 = v180;
    v71 = v182;
    if ((int32_t)v186 == -1) {
        goto lab_0x53639f;
    } else {
        // 0x536417
        v99 = v182;
        v100 = v181;
        v101 = v180;
        v102 = v178;
        v103 = v177;
        v104 = v176;
        v105 = v175;
        v106 = v174;
        v107 = v186 & 0xffffffff;
        goto lab_0x5362d2;
    }
  lab_0x536308:
    // 0x536308
    v149 = v131;
    v154 = v132;
    v153 = v133;
    v152 = v134;
    v150 = v135;
    v151 = v136;
    v145 = v137;
    v146 = v136 & 0xffffffff;
    v147 = v138;
    v148 = v139;
    goto lab_0x53630b;
  lab_0x536453:;
    int32_t * v218 = (int32_t *)a10; // 0x536457
    *v218 = *v218 | 4;
    // 0x53645a
    __readfsqword(40);
    return result2;
  lab_0x53674d:;
    int32_t v219 = *(int32_t *)v7; // 0x53674d
    *(int32_t *)a6 = v219 - ((int64_t)v219 >= a8 ? (int32_t)a8 : 0);
    // 0x53645a
    __readfsqword(40);
    return result3;
  lab_0x53630b:
    // 0x53630b
    result2 = v147;
    if (v152 == 0) {
        goto lab_0x536453;
    } else {
        goto lab_0x536314;
    }
  lab_0x536314:;
    int64_t v187 = v148;
    int64_t v188 = v147;
    int64_t v189 = v145;
    int64_t v190 = v151;
    int64_t v191 = v150;
    int64_t v192 = v153;
    int64_t v193 = v154;
    int64_t v194 = v149;
    int32_t v195 = v146;
    int64_t v196 = 0; // 0x536318
    int64_t v197 = v152; // 0x536318
    int64_t v198 = 0; // 0x536318
    int64_t v199; // 0x536200
    int64_t v200; // 0x536200
    while (true) {
        int64_t v201 = v198;
        uint64_t v202 = v196;
        int64_t * v203 = (int64_t *)(8 * v202 + v194); // 0x536331
        int32_t * v204 = (int32_t *)(4 * v202 + v7);
        int64_t v205 = *v203; // 0x536358
        int64_t v206 = v197;
        int64_t v207; // 0x536200
        while (v205 > v187) {
            int64_t v208 = *(int64_t *)(8 * (int64_t)*v204 + v189); // 0x53633d
            v207 = v201;
            if (*(int32_t *)(v208 + v191) == v195) {
                goto lab_0x536328;
            }
            int64_t v209 = v206 - 1; // 0x53634b
            *v204 = *(int32_t *)(4 * v209 + v7);
            v205 = *(int64_t *)(8 * v209 + v194);
            *v203 = v205;
            v199 = v209;
            v200 = v201;
            if (v202 >= v209) {
                // break (via goto) -> 0x536361
                goto lab_0x536361;
            }
            v206 = v209;
        }
        // 0x536320
        v207 = v201 + 1;
      lab_0x536328:;
        int64_t v210 = v202 + 1;
        v196 = v210;
        v197 = v206;
        v198 = v207;
        v199 = v206;
        v200 = v207;
        if (v210 >= v206) {
            // break -> 0x536361
            break;
        }
    }
  lab_0x536361:;
    int64_t v211 = v199;
    v76 = v194;
    v77 = v188;
    v78 = v211;
    v79 = v187;
    if (v200 == v211) {
        goto lab_0x536720;
    } else {
        if (v188 == 0) {
            // 0x53638e
            v64 = v194;
            v65 = v193;
            v66 = v192;
            v67 = v211;
            v68 = v191 + 4;
            v69 = v190;
            v70 = v189;
            v71 = v187 + 1;
            goto lab_0x53639f;
        } else {
            int64_t * v212 = (int64_t *)(v188 + 16);
            uint64_t v213 = *v212; // 0x53636f
            int64_t * v214 = (int64_t *)(v188 + 24);
            int64_t v215; // 0x536200
            int64_t v216; // 0x536200
            if (v213 >= *v214) {
                // 0x536490
                v215 = v213;
                v216 = 0x100000000 * v191 >> 32;
            } else {
                int64_t v217 = v213 + 4; // 0x53637f
                *v212 = v217;
                v215 = v217;
                v216 = v191;
            }
            // 0x5362c8
            v109 = v215;
            v108 = v214;
            v112 = v187 + 1;
            v111 = v188;
            v110 = v189;
            v115 = 0xffffffff;
            v114 = v216 + 4;
            v116 = v211;
            v117 = v192;
            v118 = v193;
            v113 = v194;
            goto lab_0x536400;
        }
    }
}

// Address range: 0x57ac30 - 0x57b297
int64_t function_57ac30(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x57ac30
    int64_t v2 = *v1; // 0x57ac30
    unsigned char v3 = *(char *)v2; // 0x57ac34
    int64_t v4; // 0x57ac30
    int64_t v5; // 0x57ac30
    int64_t v6; // 0x57ad30
    int64_t v7; // 0x57ac30
    switch (v3) {
        case 76: {
            // 0x57ada0
            return function_57d580();
        }
        case 84: {
            // 0x57ada8
            return function_579b50();
        }
        case 115: {
            // 0x57acc0
            switch (*(char *)(v2 + 1)) {
                case 114: {
                    int64_t v8 = v2 + 2; // 0x57af20
                    *v1 = v8;
                    int64_t v9 = function_57ba10(a1, v7, v7, v8); // 0x57af28
                    int64_t v10 = function_57caa0(a1, v7, v7, v8); // 0x57af33
                    int64_t v11 = *v1; // 0x57af3b
                    v5 = v10;
                    if (*(char *)v11 == 73) {
                        // 0x57b060
                        *v1 = v11 + 1;
                        v5 = function_5797e0(a1, 4, v10, function_57b2f0(a1, v7));
                    }
                    // 0x57aeeb
                    return function_5797e0(a1, 1, v9, v5);
                }
                case 112: {
                    // 0x57b098
                    *v1 = v2 + 2;
                    // 0x57aeeb
                    return function_5797e0(a1, 74, function_57ac30(a1), 0);
                }
            }
            goto lab_0x57acd4;
        }
        default: {
            if (v3 != 102) {
                int64_t result = v3; // 0x57ac34
                v6 = result + 0xffffffd0;
                v4 = v2;
                if ((char)v6 < 10) {
                    goto lab_0x57ad3c;
                } else {
                    // 0x57aefd
                    if (v3 != 111) {
                        // 0x57ad59
                        return result;
                    }
                    // 0x57af05
                    if (*(char *)(v2 + 1) != 110) {
                        goto lab_0x57acd4;
                    } else {
                        int64_t v12 = v2 + 2; // 0x57af0f
                        *v1 = v12;
                        v4 = v12;
                        goto lab_0x57ad3c;
                    }
                }
            } else {
                // 0x57ac60
                if (*(char *)(v2 + 1) == 112) {
                    int64_t v13 = v2 + 2; // 0x57ac66
                    *v1 = v13;
                    int64_t v14; // 0x57ac30
                    if (*(char *)v13 != 84) {
                        uint64_t v15 = function_579b00(); // 0x57af58
                        v14 = v15 + 1 & 0xffffffff;
                        if (v15 % 0x80000000 == 0x7fffffff) {
                            // 0x57ad59
                            return 0;
                        }
                    } else {
                        // 0x57ac78
                        *v1 = v2 + 3;
                        v14 = 0;
                    }
                    int32_t * v16 = (int32_t *)(a1 + 40); // 0x57ac82
                    int32_t v17 = *v16; // 0x57ac82
                    int64_t result2 = 0; // 0x57ac88
                    if (v17 < *(int32_t *)(a1 + 44)) {
                        int64_t v18 = *(int64_t *)(a1 + 32); // 0x57ac9a
                        result2 = v18 + 8 * ((0x100000000 * (int64_t)v17 >> 31) + (int64_t)v17);
                        *(int32_t *)(result2 + 4) = 0;
                        *v16 = v17 + 1;
                        *(int32_t *)result2 = 6;
                        *(int64_t *)(result2 + 8) = 0x100000000 * v14 >> 32;
                    }
                    // 0x57ad59
                    return result2;
                }
                goto lab_0x57acd4;
            }
        }
    }
  lab_0x57acd4:;
    int64_t v19 = function_57c4c0(a1, v7); // 0x57acd7
    if (v19 == 0) {
        // 0x57ad59
        return 0;
    }
    int32_t v20 = *(int32_t *)v19; // 0x57ace8
    int64_t v21; // 0x57ac30
    int64_t v22; // 0x57ac30
    int64_t v23; // 0x57ac30
    int64_t v24; // 0x57ac30
    int64_t v25; // 0x57ac30
    int64_t v26; // 0x57ac30
    int64_t v27; // 0x57ac30
    int64_t v28; // 0x57adc3
    int64_t v29; // 0x57ac30
    int64_t v30; // 0x57adcf
    switch (v20) {
        case 49: {
            int64_t * v31 = (int64_t *)(v19 + 8); // 0x57adb0
            int64_t v32 = *v31; // 0x57adb0
            v28 = *(int64_t *)v32;
            int32_t * v33 = (int32_t *)(a1 + 80); // 0x57adc9
            *v33 = *(int32_t *)(v32 + 16) - 2 + *v33;
            bool v34; // 0x57ac30
            v29 = v34 ? -1 : 1;
            int64_t v35 = (int64_t)"st"; // 0x57ac30
            unsigned char v36 = *(char *)v28; // 0x57adcf
            char v37 = *(char *)v35; // 0x57adcf
            v30 = v28 + v29;
            int64_t v38 = 2; // 0x57adcf
            char v39 = v37; // 0x57adcf
            bool v40 = false; // 0x57adcf
            while (v36 == v37) {
                v35 += v29;
                v39 = v36;
                v40 = true;
                if (v38 == 0) {
                    // break -> 
                    break;
                }
                v36 = *(char *)v30;
                v37 = *(char *)v35;
                v30 += v29;
                v38--;
                v39 = v37;
                v40 = false;
            }
            unsigned char v41 = v39;
            if ((v36 >= v41 && !v40) == v36 < v41) {
                // 0x57aeeb
                return function_5797e0(a1, 54, v19, function_57ba10(a1, v30, v32, v38));
            }
            uint32_t v42 = *(int32_t *)(v32 + 20); // 0x57adde
            if (v42 == 1) {
                char v43 = *(char *)v28; // 0x57afd0
                int32_t v44 = 0; // 0x57ac30
                switch (v43) {
                    case 112: {
                    }
                    case 109: {
                        // 0x57b040
                        v44 = 0;
                        if (*(char *)(v28 + 1) == v43) {
                            int64_t v45 = *v1; // 0x57b047
                            v44 = 1;
                            if (*(char *)v45 == 95) {
                                // 0x57b050
                                *v1 = v45 + 1;
                                v44 = 0;
                            }
                        }
                        // break -> 0x57afe0
                        break;
                    }
                }
                int64_t v46 = (int64_t)"sP"; // 0x57ac30
                int64_t v47 = 3; // 0x57afef
                unsigned char v48 = *(char *)v28; // 0x57afef
                char v49 = *(char *)v46; // 0x57afef
                int64_t v50 = v28 + v29; // 0x57afef
                char v51 = v49; // 0x57afef
                bool v52 = false; // 0x57afef
                while (v48 == v49) {
                    v47--;
                    v46 += v29;
                    v51 = v48;
                    v52 = true;
                    if (v47 == 0) {
                        // break -> 
                        break;
                    }
                    v48 = *(char *)v50;
                    v49 = *(char *)v46;
                    v50 += v29;
                    v51 = v49;
                    v52 = false;
                }
                unsigned char v53 = v51;
                int64_t v54; // 0x57ac30
                if ((v48 >= v53 && !v52) != v48 < v53) {
                    // 0x57b030
                    v54 = function_57ac30(a1);
                } else {
                    // 0x57affd
                    v54 = function_57b2f0(a1, v50);
                }
                int64_t v55 = v54;
                v5 = v55;
                if (v44 != 0) {
                    // 0x57b00b
                    v5 = function_5797e0(a1, 56, v55, v55);
                }
                // 0x57aeeb
                return function_5797e0(a1, 54, v19, v5);
            }
            if (v42 <= 1) {
                // 0x57b0b7
                if (v42 == 0) {
                    // 0x57aeeb
                    return function_5797e0(a1, 53, v19, 0);
                }
                // 0x57ad59
                return 0;
            }
            if (v42 == 2) {
                // 0x57b0c7
                if (v28 == 0) {
                    // 0x57ad59
                    return 0;
                }
                int64_t v56 = *(int64_t *)*v31; // 0x57b0d4
                v25 = v32;
                if (*(char *)(v56 + 1) == 99) {
                    unsigned char v57 = *(char *)v56; // 0x57b188
                    int64_t v58 = (int64_t)v57 + 0xffffff8e; // 0x57b18b
                    int64_t v59 = v58 & 0xffffffff; // 0x57b18b
                    v25 = v59;
                    if (v57 < 101 || (char)v58 < 2) {
                        int64_t v60 = function_57ba10(a1, v30, v59, v38); // 0x57b1a1
                        v26 = v59;
                        v23 = v60;
                        goto lab_0x57b0f7;
                    } else {
                        goto lab_0x57b0e1;
                    }
                } else {
                    goto lab_0x57b0e1;
                }
            } else {
                int64_t v61 = (int64_t)"qu"; // 0x57ae00
                if (v28 == 0 || v42 != 3) {
                    // 0x57ad59
                    return 0;
                }
                unsigned char v62 = *(char *)v28; // 0x57ae16
                char v63 = *(char *)v61; // 0x57ae16
                int64_t v64 = v28 + v29; // 0x57ae16
                int64_t v65 = 2; // 0x57ae16
                char v66 = v63; // 0x57ae16
                bool v67 = false; // 0x57ae16
                while (v62 == v63) {
                    // 0x57ae07
                    v61 += v29;
                    v66 = v62;
                    v67 = true;
                    if (v65 == 0) {
                        // break -> 
                        break;
                    }
                    v62 = *(char *)v64;
                    v63 = *(char *)v61;
                    v64 += v29;
                    v65--;
                    v66 = v63;
                    v67 = false;
                }
                unsigned char v68 = v66;
                if ((v62 >= v68 && !v67) == v62 < v68) {
                    // 0x57b1f9
                    v27 = function_57ac30(a1);
                    goto lab_0x57b201;
                } else {
                    char v69 = *(char *)v28; // 0x57ae25
                    if (v69 == 102) {
                        // 0x57b282
                        v27 = function_57c4c0(a1, v64);
                        goto lab_0x57b201;
                    } else {
                        // 0x57ae32
                        if (v69 != 110) {
                            // 0x57ad59
                            return 0;
                        }
                        char v70 = *(char *)(v28 + 1); // 0x57ae3a
                        if (v70 != 119 == (v70 != 97)) {
                            // 0x57ad59
                            return 0;
                        }
                        int64_t v71 = function_57a3c0(a1, 95); // 0x57ae54
                        int64_t v72 = function_57ba10(a1, 95, v32, v65); // 0x57ae5f
                        int64_t v73 = *v1; // 0x57ae67
                        char v74 = *(char *)v73; // 0x57ae6b
                        switch (v74) {
                            case 69: {
                                // 0x57b1d0
                                *v1 = v73 + 1;
                                v24 = 0;
                                v21 = v71;
                                v22 = v72;
                                // break -> 0x57ae9e
                                break;
                            }
                            case 112: {
                                // 0x57b25b
                                if (*(char *)(v73 + 1) != 105) {
                                    // 0x57ad59
                                    return 0;
                                }
                                // 0x57b265
                                *v1 = v73 + 2;
                                v24 = function_57a3c0(a1, 69);
                                v21 = v71;
                                v22 = v72;
                                // break -> 0x57ae9e
                                break;
                            }
                            default: {
                                // 0x57ae80
                                if (v74 != 105 || *(char *)(v73 + 1) != 108) {
                                    // 0x57ad59
                                    return 0;
                                }
                                // 0x57ae93
                                v24 = function_57ac30(a1);
                                v21 = v71;
                                v22 = v72;
                                // break -> 0x57ae9e
                                break;
                            }
                        }
                        goto lab_0x57ae9e;
                    }
                }
            }
        }
        case 50: {
            int32_t v75 = *(int32_t *)(v19 + 8); // 0x57afa0
            if (v75 != 1) {
                // 0x57afac
                if (v75 > 1 || v75 != 0) {
                    // 0x57ad59
                    return 0;
                }
                // 0x57aeeb
                return function_5797e0(a1, 53, v19, 0);
            }
            return function_5797e0(a1, 54, v19, function_57ac30(a1));
        }
        default: {
            // 0x57acfc
            if (v20 != 51) {
                // 0x57ad59
                return 0;
            }
            int64_t v76 = *v1; // 0x57ad05
            if (*(char *)v76 == 95) {
                // 0x57b1df
                *v1 = v76 + 1;
                // 0x57aeeb
                return function_5797e0(a1, 54, v19, function_57a3c0(a1, 69));
            }
            return function_5797e0(a1, 54, v19, function_57ac30(a1));
        }
    }
  lab_0x57ad3c:;
    int64_t result3 = function_57caa0(a1, v7, v6 & 0xffffffff, v4); // 0x57ad3f
    if (result3 == 0) {
        // 0x57ad59
        return 0;
    }
    int64_t v77 = *v1; // 0x57ad4c
    if (*(char *)v77 != 73) {
        // 0x57ad59
        return result3;
    }
    // 0x57aed0
    *v1 = v77 + 1;
    // 0x57aeeb
    return function_5797e0(a1, 4, result3, function_57b2f0(a1, v7));
    // 0x57aeeb
    return function_5797e0(a1, 54, v19, function_57ac30(a1));
  lab_0x57b0e1:
    // 0x57b0e1
    if (*(char *)v28 != 102) {
        // 0x57b1c0
        int64_t v78; // 0x57ac30
        v26 = v78;
        v23 = function_57ac30(a1);
    } else {
        // 0x57b0ec
        v26 = v25;
        v23 = function_57c4c0(a1, v30);
    }
    goto lab_0x57b0f7;
  lab_0x57b0f7:;
    int64_t v79 = (int64_t)"cl"; // 0x57ac30
    int64_t v80 = v28; // 0x57ac30
    int64_t v81 = 3; // 0x57ac30
    unsigned char v82 = *(char *)v80; // 0x57b106
    char v83 = *(char *)v79; // 0x57b106
    char v84 = v83; // 0x57b106
    bool v85 = false; // 0x57b106
    while (v82 == v83) {
        int64_t v86 = v81 - 1; // 0x57b106
        v79 += v29;
        v80 += v29;
        v81 = v86;
        v84 = v82;
        v85 = true;
        if (v86 == 0) {
            // break -> 
            break;
        }
        v82 = *(char *)v80;
        v83 = *(char *)v79;
        v84 = v83;
        v85 = false;
    }
    unsigned char v87 = v84;
    int64_t v88 = (int64_t)"dt"; // 0x57b10f
    int64_t v89; // 0x57ac30
    if ((v82 >= v87 && !v85) == v82 < v87) {
        // 0x57b1ae
        v89 = function_57a3c0(a1, 69);
    } else {
        unsigned char v90 = *(char *)v28; // 0x57b124
        char v91 = *(char *)v88; // 0x57b124
        int64_t v92 = v28 + v29; // 0x57b124
        int64_t v93 = 2; // 0x57b124
        char v94 = v91; // 0x57b124
        bool v95 = false; // 0x57b124
        while (v90 == v91) {
            // 0x57b115
            v88 += v29;
            v94 = v90;
            v95 = true;
            if (v93 == 0) {
                // break -> 
                break;
            }
            v90 = *(char *)v92;
            v91 = *(char *)v88;
            v92 += v29;
            v93--;
            v94 = v91;
            v95 = false;
        }
        unsigned char v96 = v94;
        int64_t v97 = (int64_t)"pt"; // 0x57b12d
        int64_t v98 = v93; // 0x57b12d
        int64_t v99 = v92; // 0x57b12d
        if ((v90 >= v96 && !v95) != v90 < v96) {
            unsigned char v100 = *(char *)v28; // 0x57b13e
            char v101 = *(char *)v97; // 0x57b13e
            int64_t v102 = v28 + v29; // 0x57b13e
            int64_t v103 = 2; // 0x57b13e
            char v104 = v101; // 0x57b13e
            bool v105 = false; // 0x57b13e
            while (v100 == v101) {
                // 0x57b12f
                v97 += v29;
                v104 = v100;
                v105 = true;
                if (v103 == 0) {
                    // break -> 
                    break;
                }
                v100 = *(char *)v102;
                v101 = *(char *)v97;
                v102 += v29;
                v103--;
                v104 = v101;
                v105 = false;
            }
            unsigned char v106 = v104;
            v98 = v103;
            v99 = v102;
            if ((v100 >= v106 && !v105) != v100 < v106) {
                // 0x57b28f
                return function_57ac30(a1);
            }
        }
        int64_t v107 = function_57caa0(a1, v99, v26, v98); // 0x57b150
        int64_t v108 = *v1; // 0x57b158
        v89 = v107;
        if (*(char *)v108 == 73) {
            // 0x57b230
            *v1 = v108 + 1;
            v89 = function_5797e0(a1, 4, v107, function_57b2f0(a1, v99));
        }
    }
    // 0x57aeeb
    return function_5797e0(a1, 55, v19, function_5797e0(a1, 56, v23, v89));
  lab_0x57b201:;
    int64_t v109 = function_57ac30(a1); // 0x57b207
    int64_t v110 = function_57ac30(a1); // 0x57b212
    v24 = v110;
    v21 = v27;
    v22 = v109;
    if (v110 == 0) {
        // 0x57ad59
        return 0;
    }
    goto lab_0x57ae9e;
  lab_0x57ae9e:
    // 0x57ae9e
    v5 = function_5797e0(a1, 58, v21, function_5797e0(a1, 59, v22, v24));
    // 0x57aeeb
    return function_5797e0(a1, 57, v19, v5);
}
