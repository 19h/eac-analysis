/*
 * Targeted RetDec C for native executable gap queue batch 167.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2a9d3-0x2a9d4 rank=137 name=fcn.0002a9d3 kind=r2_discovered bytes=1 uncovered=1
 *   0x2a9d4-0x2a9d5 rank=138 name=fcn.0002a9d4 kind=r2_discovered bytes=1 uncovered=1
 *   0x2a9d5-0x2a9d6 rank=139 name=fcn.0002a9d5 kind=r2_discovered bytes=1 uncovered=1
 *   0x2a9d6-0x2a9d7 rank=140 name=fcn.0002a9d6 kind=r2_discovered bytes=1 uncovered=1
 *   0x2a9d7-0x2a9d8 rank=141 name=fcn.0002a9d7 kind=r2_discovered bytes=1 uncovered=1
 *   0x2a9d8-0x2a9d9 rank=142 name=fcn.0002a9d8 kind=r2_discovered bytes=1 uncovered=1
 *   0x2a9d9-0x2a9da rank=143 name=fcn.0002a9d9 kind=r2_discovered bytes=1 uncovered=1
 *   0x2a9da-0x2a9db rank=144 name=fcn.0002a9da kind=r2_discovered bytes=1 uncovered=1
 *   0x2a9db-0x2a9dc rank=145 name=fcn.0002a9db kind=r2_discovered bytes=1 uncovered=1
 *   0x2a9dc-0x2a9dd rank=146 name=fcn.0002a9dc kind=r2_discovered bytes=1 uncovered=1
 *   0x2a9dd-0x2a9de rank=147 name=fcn.0002a9dd kind=r2_discovered bytes=1 uncovered=1
 *   0x59e46-0x59e47 rank=148 name=fcn.00059e46 kind=r2_discovered bytes=1 uncovered=1
 *   0x67c0c-0x67c0d rank=149 name=fcn.00067c0c kind=r2_discovered bytes=1 uncovered=1
 *   0x48a14c-0x48a14d rank=150 name=fcn.0048a14c kind=r2_discovered bytes=1 uncovered=1
 *   0x4efe30-0x4f05d2 rank=151 name=fcn.004efe30 kind=r2_discovered bytes=1954 uncovered=1954
 *   0x57a488-0x57ac05 rank=152 name=fcn.0057a488 kind=r2_discovered bytes=1917 uncovered=1917
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
extern int g86;
extern int g87;
extern int g88;
extern int g89;
extern int g90;
extern int g91;
extern int g92;
extern int g93;
extern int g94;
extern int g95;
extern int g96;
extern int g97;
extern int g98;
extern int g99;
extern int g100;
extern int g101;
extern int g102;
extern int g103;
extern int g104;
extern int g105;
extern int g106;
extern int g107;
extern int g108;
extern int g109;
extern int g110;
extern int g111;
extern int g112;
extern int g113;
extern int g114;
extern int g115;
extern int g116;
extern int g117;
extern int g118;
extern int g119;
extern int g120;
extern int g121;
extern int g122;
extern int g123;
extern int g124;
extern int g125;
extern int g126;
extern int g127;
extern int g128;
extern int g129;
extern int g130;
extern int g131;
extern int g132;
extern int g133;
extern int g134;
extern int g135;
extern int g136;
extern int g137;
extern int g138;
extern int g139;
extern int g140;
extern int g141;
extern int g142;
extern int g143;
extern int g144;
extern int g145;
extern int g146;
extern int g147;
extern int g148;
extern int g149;
extern int g150;
extern int g151;
extern int g152;
extern int g153;
extern int g154;
extern int g155;
extern int g156;
extern int g157;
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
int64_t _Unwind_GetRegionStart();
int64_t _Unwind_RaiseException(int64_t exception);
void _Unwind_Resume(struct _Unwind_Exception *exception);
void _Unwind_Resume_or_Rethrow(int64_t exception);

int64_t function_2a9d3(void);
int64_t function_2a9d4(void);
int64_t function_2a9d5(void);
int64_t function_2a9d6(void);
int64_t function_2a9d7(void);
int64_t function_2a9d8(void);
int64_t function_2a9d9(void);
int64_t function_2a9da(void);
int64_t function_2a9db(void);
int64_t function_2a9dc(void);
int64_t function_2a9dd(void);
int64_t function_48a14c(void);
int64_t function_4efe30(void);
int64_t function_4f2d50();
int64_t function_4fc7e0();
int64_t function_4fd0d0();
int64_t function_54cb80();
int64_t function_5797e0();
int64_t function_57a3c0();
int64_t function_57a410();
int64_t function_57a449();
int64_t function_57a488(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_57ac30();
int64_t function_57b2f0();
int64_t function_57caa0();
int64_t function_59e46(void);
int64_t function_67c0c(void);

// Address range: 0x2a9d3 - 0x2a9d4
int64_t function_2a9d3(void) {
    // 0x2a9d3
    int64_t result; // 0x2a9d3
    return result;
}

// Address range: 0x2a9d4 - 0x2a9d5
int64_t function_2a9d4(void) {
    // 0x2a9d4
    int64_t result; // 0x2a9d4
    return result;
}

// Address range: 0x2a9d5 - 0x2a9d6
int64_t function_2a9d5(void) {
    // 0x2a9d5
    int64_t result; // 0x2a9d5
    return result;
}

// Address range: 0x2a9d6 - 0x2a9d7
int64_t function_2a9d6(void) {
    // 0x2a9d6
    int64_t result; // 0x2a9d6
    return result;
}

// Address range: 0x2a9d7 - 0x2a9d8
int64_t function_2a9d7(void) {
    // 0x2a9d7
    int64_t result; // 0x2a9d7
    return result;
}

// Address range: 0x2a9d8 - 0x2a9d9
int64_t function_2a9d8(void) {
    // 0x2a9d8
    int64_t result; // 0x2a9d8
    return result;
}

// Address range: 0x2a9d9 - 0x2a9da
int64_t function_2a9d9(void) {
    // 0x2a9d9
    int64_t result; // 0x2a9d9
    return result;
}

// Address range: 0x2a9da - 0x2a9db
int64_t function_2a9da(void) {
    // 0x2a9da
    int64_t result; // 0x2a9da
    return result;
}

// Address range: 0x2a9db - 0x2a9dc
int64_t function_2a9db(void) {
    // 0x2a9db
    int64_t result; // 0x2a9db
    return result;
}

// Address range: 0x2a9dc - 0x2a9dd
int64_t function_2a9dc(void) {
    // 0x2a9dc
    int64_t result; // 0x2a9dc
    return result;
}

// Address range: 0x2a9dd - 0x2a9de
int64_t function_2a9dd(void) {
    // 0x2a9dd
    int64_t result; // 0x2a9dd
    return result;
}

// Address range: 0x59e46 - 0x59e47
int64_t function_59e46(void) {
    // 0x59e46
    int64_t result; // 0x59e46
    return result;
}

// Address range: 0x67c0c - 0x67c0d
int64_t function_67c0c(void) {
    // 0x67c0c
    int64_t result; // 0x67c0c
    return result;
}

// Address range: 0x48a14c - 0x48a14d
int64_t function_48a14c(void) {
    // 0x48a14c
    int64_t result; // 0x48a14c
    return result;
}

// Address range: 0x4efe30 - 0x4f05d2
int64_t function_4efe30(void) {
    uint32_t result = *(int32_t *)&g155;
    if (g16 == 0) {
        // 0x4efe70
        *(int32_t *)&g155 = (int32_t)&g156;
        if (result != 0) {
            // 0x4efe5d
            return result;
        }
    } else {
        // 0x4efe4f
        *(int32_t *)&g155 = (int32_t)&g156;
        if (result != 0) {
            // 0x4efe5d
            return result;
        }
    }
    // 0x4efe7d
    g70 = 0;
    g71 = 0;
    g72 = 0;
    g73 = 0;
    g74 = 0;
    *(char *)&g18 = 1;
    g75 = 0;
    g69 = (int64_t)&g6;
    function_4f2d50(&g76);
    g77 = *(int64_t *)g17;
    g59 = (int64_t)&g6;
    *(int32_t *)&g78 = -1;
    g60 = 0;
    g61 = 0;
    g62 = 0;
    g63 = 0;
    g64 = 0;
    g69 = (int64_t)&g12;
    g65 = 0;
    function_4f2d50(&g66);
    g49 = (int64_t)&g6;
    g67 = *(int64_t *)g14;
    g59 = (int64_t)&g12;
    *(int32_t *)&g68 = -1;
    g50 = 0;
    g51 = 0;
    g52 = 0;
    g53 = 0;
    g54 = 0;
    g55 = 0;
    function_4f2d50(&g56);
    g49 = (int64_t)&g12;
    g57 = *(int64_t *)g15;
    *(int32_t *)&g58 = -1;
    function_54cb80(&g137);
    g138 = 0;
    *(char *)&g139 = 0;
    *(char *)&g140 = 0;
    g141 = 0;
    g142 = 0;
    g143 = 0;
    g144 = 0;
    g136 = (int64_t)&g8;
    g137 = (int64_t)&g9;
    function_4fc7e0(&g137, &g69);
    function_54cb80(&g147);
    g148 = 0;
    *(char *)&g149 = 0;
    *(char *)&g150 = 0;
    g151 = 0;
    g152 = 0;
    g153 = 0;
    g154 = 0;
    g147 = (int64_t)&g3;
    g145 = (int64_t)&g2;
    g146 = 0;
    function_4fc7e0(&g147, &g59);
    function_54cb80(&g127);
    g129 = 0;
    *(char *)&g130 = 0;
    g126 = (int64_t)&g8;
    *(char *)&g131 = 0;
    g132 = 0;
    g133 = 0;
    g134 = 0;
    g135 = 0;
    g127 = (int64_t)&g9;
    function_4fc7e0(&g127, &g49);
    function_54cb80(&g118);
    g119 = 0;
    *(char *)&g120 = 0;
    g117 = (int64_t)&g8;
    *(char *)&g121 = 0;
    g122 = 0;
    g123 = 0;
    g124 = 0;
    g125 = 0;
    g118 = (int64_t)&g9;
    function_4fc7e0(&g118, &g49);
    g148 = (int64_t)&g136;
    g128 |= (int32_t)&g1;
    g129 = (int64_t)&g136;
    g40 = 0;
    g41 = 0;
    g42 = 0;
    g43 = 0;
    g44 = 0;
    g45 = 0;
    g39 = (int64_t)&g7;
    function_4f2d50(&g46);
    g47 = *(int64_t *)g17;
    g29 = (int64_t)&g7;
    *(int32_t *)&g48 = -1;
    g30 = 0;
    g31 = 0;
    g32 = 0;
    g33 = 0;
    g34 = 0;
    g39 = (int64_t)&g13;
    g35 = 0;
    function_4f2d50(&g36);
    g19 = (int64_t)&g7;
    g37 = *(int64_t *)g14;
    g29 = (int64_t)&g13;
    *(int32_t *)&g38 = -1;
    g20 = 0;
    g21 = 0;
    g22 = 0;
    g23 = 0;
    g24 = 0;
    g25 = 0;
    function_4f2d50(&g26);
    g19 = (int64_t)&g13;
    g27 = *(int64_t *)g15;
    *(int32_t *)&g28 = -1;
    function_54cb80(&g99);
    g100 = 0;
    *(int32_t *)&g101 = 0;
    *(char *)&g102 = 0;
    g103 = 0;
    g104 = 0;
    g105 = 0;
    g106 = 0;
    g98 = (int64_t)&g10;
    g99 = (int64_t)&g11;
    function_4fd0d0(&g99, &g39);
    function_54cb80(&g109);
    g110 = 0;
    *(int32_t *)&g111 = 0;
    *(char *)&g112 = 0;
    g113 = 0;
    g114 = 0;
    g115 = 0;
    g116 = 0;
    g109 = (int64_t)&g5;
    g107 = (int64_t)&g4;
    g108 = 0;
    function_4fd0d0(&g109, &g29);
    function_54cb80(&g89);
    g91 = 0;
    *(int32_t *)&g92 = 0;
    g88 = (int64_t)&g10;
    *(char *)&g93 = 0;
    g94 = 0;
    g95 = 0;
    g96 = 0;
    g97 = 0;
    g89 = (int64_t)&g11;
    function_4fd0d0(&g89, &g19);
    function_54cb80(&g80);
    g81 = 0;
    *(int32_t *)&g82 = 0;
    g79 = (int64_t)&g10;
    *(char *)&g83 = 0;
    g84 = 0;
    g85 = 0;
    g86 = 0;
    g87 = 0;
    g80 = (int64_t)&g11;
    int64_t result2 = function_4fd0d0(&g80, &g19); // 0x4f058a
    g90 |= (int32_t)&g1;
    g110 = (int64_t)&g98;
    g91 = (int64_t)&g98;
    *(int32_t *)&g155 = (int32_t)&g156;
    return result2;
}

// Address range: 0x57a488 - 0x57ac01
int64_t function_57a488(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = function_57ac30(a2 & 0xffffffff, a2, a3, a4); // 0x57a48a
    int64_t v2; // 0x57a488
    int64_t v3 = function_5797e0(v2, 54, v2, (int32_t)v1); // 0x57a7d2
    int32_t v4 = v2; // 0x57a57e
    int32_t * v5 = (int32_t *)(v2 + 84); // 0x57a57e
    int64_t * v6 = (int64_t *)(v2 + 24);
    int64_t v7 = 54; // 0x57a7da
    int64_t v8 = v1; // 0x57a7da
    int64_t v9 = v3; // 0x57a7da
    int64_t v10; // 0x57a488
    int64_t v11; // 0x57a488
    int64_t v12; // 0x57a488
    int64_t v13; // 0x57a488
    int64_t v14; // 0x57a488
    int64_t v15; // 0x57a488
    int64_t v16; // 0x57a488
    int64_t v17; // 0x57a488
    while (true) {
      lab_0x57a57b_2:
        // 0x57a57b
        *v5 = v4;
        v12 = v13;
        v10 = v9;
        v15 = v16;
        v17 = v7;
        v14 = v8;
        v11 = 0;
        if (v9 != 0) {
            goto lab_0x57a4c9;
        } else {
            goto lab_0x57a505;
        }
    }
  lab_0x57a51c_3:;
    // 0x57a51c
    int64_t result; // 0x57a488
    return result;
  lab_0x57a4c9:;
    int64_t v18 = v10;
    int64_t v19 = function_5797e0(v2, 46, v18, 0); // 0x57a4d6
    *(int64_t *)v12 = v19;
    v15 = v18;
    v17 = 46;
    v14 = 0;
    v11 = 0;
    if (v19 != 0) {
        int64_t v20 = *v6; // 0x57a4eb
        int64_t v21 = v20; // 0x57a4f2
        if (*(char *)v20 != (char)v2) {
            v21 = function_57a410();
        }
        // 0x57a4f8
        *v6 = v21 + 1;
        v15 = v18;
        v17 = 46;
        v14 = 0;
        int32_t v22; // 0x57a488
        v11 = v22;
    }
    goto lab_0x57a505;
  lab_0x57a505:;
    int64_t v23 = __readfsqword(40) ^ v2; // 0x57a50a
    result = v11;
    if (v23 == 0) {
        // break -> 0x57a51c
        goto lab_0x57a51c_3;
    }
    int64_t v24 = v14;
    int64_t v25 = v17;
    int64_t v26 = v15;
    char v27 = v24;
    int64_t v28 = v23; // 0x57a488
    __stack_chk_fail();
    int64_t v29; // 0x57a488
    int64_t v30; // 0x57a488
    while (v27 == 111) {
        int64_t v31 = v28;
        int64_t v32 = (int64_t)&g157; // 0x57ab9e
        if (*(char *)((int64_t)&g157 + 1) != 110) {
            v32 = function_57a449();
        }
        // 0x57aba4
        *v6 = v32 + 2;
        int64_t v33 = function_57caa0(v2, v25); // 0x57a4a7
        if (v33 != 0) {
            int64_t v34 = *v6; // 0x57a4b8
            if (*(char *)v34 == 73) {
                // 0x57a7e0
                *v6 = v34 + 1;
                int64_t v35 = function_57b2f0(v2, v25, v26, v24); // 0x57a7eb
                int64_t v36 = function_5797e0(v2, 4, v33, (int32_t)v35); // 0x57a7fe
                v29 = v31;
                v30 = v33;
                v7 = 4;
                v8 = v35;
                v9 = v36;
                goto lab_0x57a57b;
            } else {
                // 0x57a4c5
                *v5 = v4;
                v12 = v31;
                v10 = v33;
                goto lab_0x57a4c9;
            }
        }
        // 0x57a940
        *v5 = v4;
        int64_t v37 = __readfsqword(40) ^ v2; // 0x57a50a
        result = 0;
        v28 = v37;
        if (v37 == 0) {
            // break (via goto) -> 0x57a51c
            goto lab_0x57a51c_3;
        }
        __stack_chk_fail();
    }
    int64_t v38 = (int64_t)&g157; // 0x57abb4
    if (v27 != 105 == (v27 != 116)) {
        v38 = function_57a449();
    }
    int64_t v39 = v38; // 0x57abc3
    if (*(char *)(v38 + 1) != 108) {
        v39 = function_57a449();
    }
    // 0x57abc9
    result = v39;
    if (v27 == 116) {
        // break -> 0x57a51c
        goto lab_0x57a51c_3;
    }
    // 0x57abd1
    *v6 = v39 + 2;
    int64_t v40 = function_57a3c0(v2, 69, v26, v24); // 0x57abe1
    int64_t v41 = function_5797e0(v2, 48, 0, (int32_t)v40); // 0x57abf4
    v29 = v23;
    v30 = 0;
    v7 = 48;
    v8 = v40;
    v9 = v41;
    goto lab_0x57a57b;
  lab_0x57a57b:
    // 0x57a57b
    v13 = v29;
    v16 = v30;
    goto lab_0x57a57b_2;
}
