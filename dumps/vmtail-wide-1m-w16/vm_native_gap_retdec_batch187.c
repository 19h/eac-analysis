/*
 * Targeted RetDec C for native executable gap queue batch 187.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x5816a0-0x581ef8 rank=79 name=fcn.005816a0 kind=r2_discovered bytes=2136 uncovered=2136
 *   0x49aaf0-0x49b344 rank=80 name=fcn.0049aaf0 kind=r2_discovered bytes=2132 uncovered=2132
 *   0x511c20-0x5124d4 rank=81 name=fcn.00511c20 kind=r2_discovered bytes=2228 uncovered=2121
 *   0x55bec0-0x55c700 rank=82 name=fcn.0055bec0 kind=r2_discovered bytes=2112 uncovered=2112
 *   0x51a610-0x51ae41 rank=83 name=fcn.0051a610 kind=r2_discovered bytes=2097 uncovered=2097
 *   0x51aeb0-0x51b6e1 rank=84 name=fcn.0051aeb0 kind=r2_discovered bytes=2097 uncovered=2097
 *   0x46521-0x46d51 rank=85 name=fcn.00046521 kind=r2_discovered bytes=2096 uncovered=2096
 *   0x52fb30-0x53034a rank=86 name=fcn.0052fb30 kind=r2_discovered bytes=2074 uncovered=2074
 *   0x5303e0-0x530bfa rank=87 name=fcn.005303e0 kind=r2_discovered bytes=2074 uncovered=2074
 *   0x497670-0x49930f rank=88 name=fcn.00497670 kind=r2_discovered bytes=7327 uncovered=583
 *   0x518b00-0x519427 rank=89 name=method.std::num_get_wchar_t__std::istreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_56 kind=native_discovered bytes=2343 uncovered=475
 *   0x57d700-0x581463 rank=90 name=fcn.0057d700 kind=r2_discovered bytes=15715 uncovered=15552
 *   0x4ea390-0x4ed13a rank=91 name=sym.ZydisDecoderDecodeInstruction kind=symbol_named bytes=11690 uncovered=11690
 *   0x4a1270-0x4a3b2e rank=92 name=fcn.004a1270 kind=r2_discovered bytes=10430 uncovered=10430
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
extern int g136;
extern int g137;
int64_t entry_point();
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
uint32_t llvm_bswap_i32(uint32_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3();
int32_t __asm_in(uint16_t port);
int32_t __asm_in_133(uint16_t port);
int32_t __asm_in_134(uint16_t port);
char __asm_in_136(uint16_t port);
char __asm_in_137(uint16_t port);
int32_t __asm_in_138(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_134(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_out_137(uint16_t port, char value);
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
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
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt();
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_wait(void);
void __asm_fbld(float80_t value);
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
int128_t __asm_movd(int32_t value);
int128_t __asm_movss(int32_t value);
int64_t __asm_movss_133(int128_t value);
int128_t __asm_movdqa(int128_t value);
void __asm_movq(int64_t value, int128_t dst);
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
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
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
void __asm_movups_133();
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

int64_t function_1fdf0();
int64_t function_20700();
int64_t function_207b0();
int64_t function_20d68();
int64_t function_259ce();
int64_t function_451f2();
int64_t function_46521(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4945c0();
int64_t function_494d90();
int64_t function_496540();
int64_t function_496ab0();
int64_t function_496bd0();
int64_t function_496bf0();
int64_t function_496ff0();
int64_t function_497670(int64_t a1);
int64_t function_4976c0(int64_t a1);
int64_t function_497750(int64_t a1);
int64_t function_4977a0(int64_t a1);
int64_t function_4978a0(int64_t a1);
int64_t function_497930(int64_t a1);
int64_t function_497970(int64_t a1);
int64_t function_497d70(int64_t a1);
int64_t function_497e60(int64_t a1, int64_t a2);
int64_t function_497ff0(int64_t a1, int64_t a2);
int64_t function_498190(int64_t a1, int64_t a2);
int64_t function_4981d0(int64_t a1, int64_t a2);
int64_t function_498230(int64_t a1, int32_t a2);
int64_t function_498430(int64_t a1, int64_t a2);
int64_t function_498440(int64_t a1);
int64_t function_4985b0(int64_t a1);
int64_t function_498740(int64_t a1);
int64_t function_4987d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_498a40(int64_t a1);
int64_t function_498b30(int32_t a1);
int64_t function_498b70(int64_t a1);
int64_t function_498b90(int64_t a1);
int64_t function_498bb0(int64_t a1);
int64_t function_498bd0(int64_t a1, int64_t a2);
int64_t function_498c10(int64_t a1, int64_t a2);
int64_t function_498c50(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_498d10(int32_t a1, int32_t a2, int32_t a3, int64_t a4);
int64_t function_498d40(int64_t result3);
int64_t function_49a910();
int64_t function_49aaf0(int64_t a1);
int64_t function_49d220();
int64_t function_49daf0();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49e960();
int64_t function_49eff0();
int64_t function_4a1270(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);
int64_t function_4a6ba0();
int64_t function_4aa430();
int64_t function_4aa540();
int64_t function_4ab2f0();
int64_t function_4ab380();
int64_t function_4ab520();
int64_t function_4b0890();
int64_t function_4b4e60();
int64_t function_4b4ef0();
int64_t function_4b82e0();
int64_t function_4b8b30();
int64_t function_4b90b0();
int64_t function_4b9140();
int64_t function_4ba450();
int64_t function_4c1690();
int64_t function_4c16b0();
int64_t function_4c1d60();
int64_t function_4c1df0();
int64_t function_4c1e70();
int64_t function_4c4450();
int64_t function_4cb410();
int64_t function_4cb4a0();
int64_t function_4cb520();
int64_t function_4ccc30();
int64_t function_4cccc0();
int64_t function_4ccd50();
int64_t function_4cdd20();
int64_t function_4cddb0();
int64_t function_4cdde0();
int64_t function_4ea000();
int64_t function_4ea160();
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_50ab00();
int64_t function_50b7d0();
int64_t function_50bde0();
int64_t function_50cac0();
int64_t function_50d7a0();
int64_t function_50e0e0();
int64_t function_50f6f0();
int64_t function_50f7d0();
int64_t function_511c20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_518120();
int64_t function_518b00(void);
int64_t function_518b10(int64_t a1);
int64_t function_518b30(int64_t a1);
int64_t function_518b40(int64_t a1);
int64_t function_518b50(int64_t a1);
int64_t function_518b60(int64_t a1);
int64_t function_518ba0(int64_t a1);
int64_t function_518be0(int64_t a1);
int64_t function_518bf0(int64_t a1);
int64_t function_518c00(int64_t a1);
int64_t function_518c10(int64_t a1);
int64_t function_518c50(int64_t a1);
int64_t function_518c90(int64_t a1);
int64_t function_518cb0(int64_t a1);
int64_t function_518cd0(int64_t a1);
int64_t function_518ce0(int64_t a1);
int64_t function_518cf0(int64_t a1);
int64_t function_518d10(void);
int64_t function_518d20(int64_t a1, uint64_t a2, uint64_t a3);
int64_t function_518d60(int64_t a1);
int64_t function_518d80(int64_t a1);
int64_t function_518da0(int64_t a1);
int64_t function_518dc0(int64_t a1);
int64_t function_518de0(int64_t a1, int64_t a2, int64_t result, int64_t a4);
int64_t function_518e00(int64_t a1);
int64_t function_518e20(int64_t a1);
int64_t function_518e40(int64_t a1);
int64_t function_518e60(int64_t a1);
int64_t function_518e80(int64_t a1);
int64_t function_518ea0(int64_t a1);
int64_t function_518ec0(int64_t a1);
int64_t function_518ee0(int64_t a1);
int64_t function_518f10(int64_t a1);
int64_t function_518f40(int64_t a1);
int64_t function_518f70(int64_t a1);
int64_t function_518fa0(int64_t a1);
int64_t function_518ff0(int64_t a1);
int64_t function_519010(int64_t a1);
int64_t function_519030(int64_t a1);
int64_t function_519050(int64_t a1, int64_t a2, int64_t a3);
int64_t function_519120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_519280(int64_t result, int64_t a2);
int64_t function_5192d0(int64_t result, int64_t a2);
int64_t function_519320(int64_t result, int64_t a2);
int64_t function_519370(int64_t result, int64_t a2);
int64_t function_5193c0(int64_t result, int64_t a2);
int64_t function_519410(int64_t a1, int64_t a2);
int64_t function_51a610(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_51aeb0(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_5245c0();
int64_t function_524600();
int64_t function_5246d0();
int64_t function_52b020();
int64_t function_52b400();
int64_t function_52b8e0();
int64_t function_52bdc0();
int64_t function_52c050();
int64_t function_52c9e0();
int64_t function_52fb30(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_5303e0(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_542470();
int64_t function_549e80();
int64_t function_54a3d0();
int64_t function_54a8d0();
int64_t function_54ab90();
int64_t function_54b560();
int64_t function_552550();
int64_t function_554b00();
int64_t function_555a00();
int64_t function_555fe0();
int64_t function_556cf0();
int64_t function_558300();
int64_t function_55bec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_565970();
int64_t function_565f80();
int64_t function_566390();
int64_t function_566890();
int64_t function_5679e0();
int64_t function_568460();
int64_t function_569070();
int64_t function_569eb0();
int64_t function_569fc0();
int64_t function_56b9a0();
int64_t function_57a0c0();
int64_t function_57a2b0();
int64_t function_57d700(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_581610();
int64_t function_5816a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5816d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_582980();
int64_t function_582a30();

// Address range: 0x46521 - 0x46d51
int64_t function_46521(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 8); // 0x46521
    int32_t * v2 = (int32_t *)(a1 + 12); // 0x4652e
    int32_t * v3 = (int32_t *)(a1 + 16); // 0x46536
    int32_t * v4 = (int32_t *)(a1 + 20); // 0x4653e
    int32_t v5 = *v1; // 0x4654a
    int64_t result = a2; // 0x4654a
    int32_t v6 = *v3;
    int32_t v7 = *v2;
    int32_t v8 = *v4;
    int32_t v9 = (int32_t)*(char *)result; // 0x46552
    int32_t v10 = (int32_t)*(char *)(result + 7); // 0x46564
    int32_t v11 = (int32_t)*(char *)(result + 12); // 0x46569
    int32_t v12 = (int32_t)*(char *)(result + 14); // 0x46570
    uint32_t v13 = v5 - 0x28955b88 + v9 + ((v6 ^ v8) & v7 ^ v8); // 0x46589
    int32_t v14 = (int32_t)*(char *)(result + 1);
    int32_t v15 = (v13 / 0x2000000 | 128 * v13) + v7; // 0x4659b
    int32_t v16 = (int32_t)*(char *)(result + 2); // 0x4659e
    uint32_t v17 = v8 - 0x173848aa + v14 + (v15 & (v6 ^ v7) ^ v6); // 0x465ab
    int32_t v18 = (v17 / 0x100000 | 0x1000 * v17) + v15; // 0x465be
    int32_t v19 = (int32_t)*(char *)(result + 3); // 0x465c5
    uint32_t v20 = v6 + 0x242070db + v16 + (v18 & (v15 ^ v7) ^ v7); // 0x465d1
    int32_t v21 = (v20 / 0x8000 | 0x20000 * v20) + v18; // 0x465e2
    int32_t v22 = (int32_t)*(char *)(result + 4); // 0x465e4
    uint32_t v23 = v7 - 0x3e423112 + v19 + (v21 & (v18 ^ v15) ^ v15); // 0x465ee
    int32_t v24 = (v23 / 1024 | 0x400000 * v23) + v21; // 0x46601
    int32_t v25 = (int32_t)*(char *)(result + 5); // 0x46608
    uint32_t v26 = v15 - 0xa83f051 + v22 + (v24 & (v21 ^ v18) ^ v18); // 0x46611
    int32_t v27 = (v26 / 0x2000000 | 128 * v26) + v24; // 0x46624
    int32_t v28 = (int32_t)*(char *)(result + 6); // 0x4662b
    uint32_t v29 = v25 + 0x4787c62a + v18 + (v27 & (v24 ^ v21) ^ v21); // 0x46635
    int32_t v30 = (v29 / 0x100000 | 0x1000 * v29) + v27; // 0x46648
    int32_t v31 = (int32_t)*(char *)(result + 8); // 0x4664f
    uint32_t v32 = v28 - 0x57cfb9ed + v21 + (v30 & (v27 ^ v24) ^ v24); // 0x46661
    int32_t v33 = (v32 / 0x8000 | 0x20000 * v32) + v30; // 0x4666f
    int32_t v34 = (int32_t)*(char *)(result + 9); // 0x4667d
    uint32_t v35 = v10 - 0x2b96aff + v24 + (v33 & (v30 ^ v27) ^ v27); // 0x46681
    int32_t v36 = (v35 / 1024 | 0x400000 * v35) + v33; // 0x4668d
    int32_t v37 = (int32_t)*(char *)(result + 10); // 0x466a1
    uint32_t v38 = v31 + 0x698098d8 + v27 + (v36 & (v33 ^ v30) ^ v30); // 0x466a5
    int32_t v39 = (v38 / 0x2000000 | 128 * v38) + v36; // 0x466b0
    uint32_t v40 = v34 - 0x74bb0851 + v30 + (v39 & (v36 ^ v33) ^ v33); // 0x466bf
    int32_t v41 = (v40 / 0x100000 | 0x1000 * v40) + v39; // 0x466cb
    uint32_t v42 = v37 - 0xa44f + v33 + (v41 & (v39 ^ v36) ^ v36); // 0x466d4
    int32_t v43 = (v42 / 0x8000 | 0x20000 * v42) + v41; // 0x466df
    int32_t v44 = (int32_t)*(char *)(result + 11); // 0x466e6
    uint32_t v45 = v44 - 0x76a32842 + v36 + (v43 & (v41 ^ v39) ^ v39); // 0x4670b
    int32_t v46 = (v45 / 1024 | 0x400000 * v45) + v43; // 0x46715
    uint32_t v47 = v11 + 0x6b901122 + v39 + (v46 & (v43 ^ v41) ^ v41); // 0x46727
    int32_t v48 = (int32_t)*(char *)(result + 13); // 0x4672a
    int32_t v49 = (v47 / 0x2000000 | 128 * v47) + v46; // 0x46732
    int32_t v50 = (int32_t)*(char *)(result + 15); // 0x4673f
    uint32_t v51 = v48 - 0x2678e6d + v41 + (v49 & (v46 ^ v43) ^ v43); // 0x4674f
    int32_t v52 = (v51 / 0x100000 | 0x1000 * v51) + v49; // 0x4675a
    uint32_t v53 = v12 - 0x5986bc72 + v43 + (v52 & (v49 ^ v46) ^ v46); // 0x4676f
    int32_t v54 = (v53 / 0x8000 | 0x20000 * v53) + v52; // 0x4677b
    uint32_t v55 = v50 + 0x49b40821 + v46 + (v54 & (v52 ^ v49) ^ v49); // 0x46787
    int32_t v56 = (v55 / 1024 | 0x400000 * v55) + v54; // 0x46792
    uint32_t v57 = v14 - 0x9e1da9e + v49 + ((v56 ^ v54) & v52 ^ v54); // 0x467a8
    int32_t v58 = (v57 / 0x8000000 | 32 * v57) + v56; // 0x467b3
    uint32_t v59 = v28 - 0x3fbf4cc0 + v52 + ((v58 ^ v56) & v54 ^ v56); // 0x467cb
    int32_t v60 = (v59 / 0x800000 | 512 * v59) + v58; // 0x467e0
    uint32_t v61 = v44 + 0x265e5a51 + v54 + ((v60 ^ v58) & v56 ^ v58); // 0x467f3
    int32_t v62 = (v61 / 0x40000 | 0x4000 * v61) + v60; // 0x467fa
    uint32_t v63 = v9 - 0x16493856 + v56 + ((v62 ^ v60) & v58 ^ v60); // 0x46810
    int32_t v64 = (v63 / 0x1000 | 0x100000 * v63) + v62; // 0x46819
    uint32_t v65 = v25 - 0x29d0efa3 + v58 + ((v64 ^ v62) & v60 ^ v62); // 0x4682b
    int32_t v66 = (v65 / 0x8000000 | 32 * v65) + v64; // 0x46835
    uint32_t v67 = v37 + 0x2441453 + v60 + ((v66 ^ v64) & v62 ^ v64); // 0x4684e
    int32_t v68 = (v67 / 0x800000 | 512 * v67) + v66; // 0x46858
    uint32_t v69 = v50 - 0x275e197f + v62 + ((v68 ^ v66) & v64 ^ v66); // 0x46870
    int32_t v70 = (v69 / 0x40000 | 0x4000 * v69) + v68; // 0x46878
    uint32_t v71 = v22 - 0x182c0438 + v64 + ((v70 ^ v68) & v66 ^ v68); // 0x46890
    int32_t v72 = (v71 / 0x1000 | 0x100000 * v71) + v70; // 0x46897
    uint32_t v73 = v34 + 0x21e1cde6 + v66 + ((v72 ^ v70) & v68 ^ v70); // 0x468a8
    int32_t v74 = (v73 / 0x8000000 | 32 * v73) + v72; // 0x468b1
    uint32_t v75 = v12 - 0x3cc8f82a + v68 + ((v74 ^ v72) & v70 ^ v72); // 0x468c9
    int32_t v76 = (v75 / 0x800000 | 512 * v75) + v74; // 0x468d3
    uint32_t v77 = v19 - 0xb2af279 + v70 + ((v76 ^ v74) & v72 ^ v74); // 0x468ec
    int32_t v78 = (v77 / 0x40000 | 0x4000 * v77) + v76; // 0x468f6
    uint32_t v79 = v31 + 0x455a14ed + v72 + ((v78 ^ v76) & v74 ^ v76); // 0x4690e
    int32_t v80 = (v79 / 0x1000 | 0x100000 * v79) + v78; // 0x46916
    uint32_t v81 = v48 - 0x561c16fb + v74 + ((v80 ^ v78) & v76 ^ v78); // 0x46929
    int32_t v82 = (v81 / 0x8000000 | 32 * v81) + v80; // 0x46930
    uint32_t v83 = v16 - 0x3105c08 + v76 + ((v82 ^ v80) & v78 ^ v80); // 0x46941
    int32_t v84 = (v83 / 0x800000 | 512 * v83) + v82; // 0x4694a
    uint32_t v85 = v10 + 0x676f02d9 + v78 + ((v84 ^ v82) & v80 ^ v82); // 0x4695f
    int32_t v86 = (v85 / 0x40000 | 0x4000 * v85) + v84; // 0x46969
    int32_t v87 = v86 ^ v84; // 0x4696c
    uint32_t v88 = v11 - 0x72d5b376 + v80 + (v87 & v82 ^ v84); // 0x46975
    int32_t v89 = (v88 / 0x1000 | 0x100000 * v88) + v86; // 0x46980
    uint32_t v90 = v25 - 0x5c6be + v82 + (v89 ^ v87); // 0x46993
    int32_t v91 = (v90 / 0x10000000 | 16 * v90) + v89; // 0x4699e
    int32_t v92 = v91 ^ v89;
    uint32_t v93 = v31 - 0x788e097f + v84 + (v92 ^ v86); // 0x469b1
    int32_t v94 = (v93 / 0x200000 | 2048 * v93) + v91; // 0x469ba
    uint32_t v95 = v44 + 0x6d9d6122 + v86 + (v94 ^ v92); // 0x469d4
    int32_t v96 = (v95 / 0x10000 | 0x10000 * v95) + v94; // 0x469de
    int32_t v97 = v96 ^ v94;
    uint32_t v98 = v12 - 0x21ac7f4 + v89 + (v97 ^ v91); // 0x469ef
    int32_t v99 = (v98 / 512 | 0x800000 * v98) + v96; // 0x46a03
    uint32_t v100 = v14 - 0x5b4115bc + v91 + (v97 ^ v99); // 0x46a0d
    int32_t v101 = (v100 / 0x10000000 | 16 * v100) + v99; // 0x46a22
    uint32_t v102 = v22 + 0x4bdecfa9 + v94 + (v99 ^ v96 ^ v101); // 0x46a28
    int32_t v103 = (v102 / 0x200000 | 2048 * v102) + v101; // 0x46a3b
    uint32_t v104 = v10 - 0x944b4a0 + v96 + (v101 ^ v99 ^ v103); // 0x46a41
    int32_t v105 = (v104 / 0x10000 | 0x10000 * v104) + v103; // 0x46a59
    uint32_t v106 = v37 - 0x41404390 + v99 + (v103 ^ v101 ^ v105); // 0x46a5e
    int32_t v107 = (v106 / 512 | 0x800000 * v106) + v105; // 0x46a70
    uint32_t v108 = v48 + 0x289b7ec6 + v101 + (v105 ^ v103 ^ v107); // 0x46a74
    int32_t v109 = (v108 / 0x10000000 | 16 * v108) + v107; // 0x46a8c
    uint32_t v110 = v9 - 0x155ed806 + v103 + (v107 ^ v105 ^ v109); // 0x46a92
    int32_t v111 = (v110 / 0x200000 | 2048 * v110) + v109; // 0x46aab
    uint32_t v112 = v19 - 0x2b10cf7b + v105 + (v109 ^ v107 ^ v111); // 0x46ab1
    int32_t v113 = (v112 / 0x10000 | 0x10000 * v112) + v111; // 0x46aca
    uint32_t v114 = v28 + 0x4881d05 + v107 + (v111 ^ v109 ^ v113); // 0x46ad0
    int32_t v115 = (v114 / 512 | 0x800000 * v114) + v113; // 0x46ae1
    uint32_t v116 = v34 - 0x262b2fc7 + v109 + (v113 ^ v111 ^ v115); // 0x46ae6
    int32_t v117 = (v116 / 0x10000000 | 16 * v116) + v115; // 0x46afc
    uint32_t v118 = v11 - 0x1924661b + v111 + (v115 ^ v113 ^ v117); // 0x46b04
    int32_t v119 = (v118 / 0x200000 | 2048 * v118) + v117; // 0x46b17
    uint32_t v120 = v50 + 0x1fa27cf8 + v113 + (v117 ^ v115 ^ v119); // 0x46b1d
    int32_t v121 = (v120 / 0x10000 | 0x10000 * v120) + v119; // 0x46b36
    uint32_t v122 = v16 - 0x3b53a99b + v115 + (v119 ^ v117 ^ v121); // 0x46b3c
    int32_t v123 = (v122 / 512 | 0x800000 * v122) + v121; // 0x46b4e
    uint32_t v124 = v9 - 0xbd6ddbc + v117 + ((v123 | -1 - v119) ^ v121); // 0x46b56
    int32_t v125 = (v124 / 0x4000000 | 64 * v124) + v123; // 0x46b68
    uint32_t v126 = v10 + 0x432aff97 + v119 + ((v125 | -1 - v121) ^ v123); // 0x46b6e
    int32_t v127 = (v126 / 0x400000 | 1024 * v126) + v125; // 0x46b87
    uint32_t v128 = v12 - 0x546bdc59 + v121 + ((v127 | -1 - v123) ^ v125); // 0x46b8f
    int32_t v129 = (v128 / 0x20000 | 0x8000 * v128) + v127; // 0x46ba3
    uint32_t v130 = v25 - 0x36c5fc7 + v123 + ((v129 | -1 - v125) ^ v127); // 0x46bac
    int32_t v131 = (v130 / 2048 | 0x200000 * v130) + v129; // 0x46bbf
    uint32_t v132 = v11 + 0x655b59c3 + v125 + ((v131 | -1 - v127) ^ v129); // 0x46bc8
    int32_t v133 = (v132 / 0x4000000 | 64 * v132) + v131; // 0x46bde
    uint32_t v134 = v19 - 0x70f3336e + v127 + ((v133 | -1 - v129) ^ v131); // 0x46be6
    int32_t v135 = (v134 / 0x400000 | 1024 * v134) + v133; // 0x46bfc
    uint32_t v136 = v37 - 0x100b83 + v129 + ((v135 | -1 - v131) ^ v133); // 0x46c02
    int32_t v137 = (v136 / 0x20000 | 0x8000 * v136) + v135; // 0x46c19
    uint32_t v138 = v14 - 0x7a7ba22f + v131 + ((v137 | -1 - v133) ^ v135); // 0x46c21
    int32_t v139 = (v138 / 2048 | 0x200000 * v138) + v137; // 0x46c39
    uint32_t v140 = v31 + 0x6fa87e4f + v133 + ((v139 | -1 - v135) ^ v137); // 0x46c42
    int32_t v141 = (v140 / 0x4000000 | 64 * v140) + v139; // 0x46c58
    uint32_t v142 = v50 - 0x1d31920 + v135 + ((v141 | -1 - v137) ^ v139); // 0x46c61
    int32_t v143 = (v142 / 0x400000 | 1024 * v142) + v141; // 0x46c77
    uint32_t v144 = v28 - 0x5cfebcec + v137 + ((v143 | -1 - v139) ^ v141); // 0x46c7f
    int32_t v145 = (v144 / 0x20000 | 0x8000 * v144) + v143; // 0x46c95
    uint32_t v146 = v48 + 0x4e0811a1 + v139 + ((v145 | -1 - v141) ^ v143); // 0x46c9b
    int32_t v147 = (v146 / 2048 | 0x200000 * v146) + v145; // 0x46cae
    uint32_t v148 = v22 - 0x8ac817e + v141 + ((v147 | -1 - v143) ^ v145); // 0x46cb6
    int32_t v149 = (v148 / 0x4000000 | 64 * v148) + v147; // 0x46ccb
    v5 += v149;
    uint32_t v150 = v44 - 0x42c50dcb + v143 + ((v149 | -1 - v145) ^ v147); // 0x46cdd
    int32_t v151 = (v150 / 0x400000 | 1024 * v150) + v149; // 0x46ce9
    uint32_t v152 = v16 + 0x2ad7d2bb + v145 + ((v151 | -1 - v147) ^ v149); // 0x46cf2
    int32_t v153 = (v152 / 0x20000 | 0x8000 * v152) + v151; // 0x46d06
    uint32_t v154 = v34 - 0x14792c6f + v147 + ((v153 | -1 - v149) ^ v151); // 0x46d0e
    int32_t v155 = v153 + v7 + (v154 / 2048 | 0x200000 * v154); // 0x46d17
    int32_t v156 = v153 + v6; // 0x46d1a
    int32_t v157 = v151 + v8; // 0x46d1d
    result += 64;
    while (result != a3 + a2) {
        // 0x4654d
        v6 = v156;
        v7 = v155;
        v8 = v157;
        v9 = (int32_t)*(char *)result;
        v10 = (int32_t)*(char *)(result + 7);
        v11 = (int32_t)*(char *)(result + 12);
        v12 = (int32_t)*(char *)(result + 14);
        v13 = v5 - 0x28955b88 + v9 + ((v6 ^ v8) & v7 ^ v8);
        v14 = (int32_t)*(char *)(result + 1);
        v15 = (v13 / 0x2000000 | 128 * v13) + v7;
        v16 = (int32_t)*(char *)(result + 2);
        v17 = v8 - 0x173848aa + v14 + (v15 & (v6 ^ v7) ^ v6);
        v18 = (v17 / 0x100000 | 0x1000 * v17) + v15;
        v19 = (int32_t)*(char *)(result + 3);
        v20 = v6 + 0x242070db + v16 + (v18 & (v15 ^ v7) ^ v7);
        v21 = (v20 / 0x8000 | 0x20000 * v20) + v18;
        v22 = (int32_t)*(char *)(result + 4);
        v23 = v7 - 0x3e423112 + v19 + (v21 & (v18 ^ v15) ^ v15);
        v24 = (v23 / 1024 | 0x400000 * v23) + v21;
        v25 = (int32_t)*(char *)(result + 5);
        v26 = v15 - 0xa83f051 + v22 + (v24 & (v21 ^ v18) ^ v18);
        v27 = (v26 / 0x2000000 | 128 * v26) + v24;
        v28 = (int32_t)*(char *)(result + 6);
        v29 = v25 + 0x4787c62a + v18 + (v27 & (v24 ^ v21) ^ v21);
        v30 = (v29 / 0x100000 | 0x1000 * v29) + v27;
        v31 = (int32_t)*(char *)(result + 8);
        v32 = v28 - 0x57cfb9ed + v21 + (v30 & (v27 ^ v24) ^ v24);
        v33 = (v32 / 0x8000 | 0x20000 * v32) + v30;
        v34 = (int32_t)*(char *)(result + 9);
        v35 = v10 - 0x2b96aff + v24 + (v33 & (v30 ^ v27) ^ v27);
        v36 = (v35 / 1024 | 0x400000 * v35) + v33;
        v37 = (int32_t)*(char *)(result + 10);
        v38 = v31 + 0x698098d8 + v27 + (v36 & (v33 ^ v30) ^ v30);
        v39 = (v38 / 0x2000000 | 128 * v38) + v36;
        v40 = v34 - 0x74bb0851 + v30 + (v39 & (v36 ^ v33) ^ v33);
        v41 = (v40 / 0x100000 | 0x1000 * v40) + v39;
        v42 = v37 - 0xa44f + v33 + (v41 & (v39 ^ v36) ^ v36);
        v43 = (v42 / 0x8000 | 0x20000 * v42) + v41;
        v44 = (int32_t)*(char *)(result + 11);
        v45 = v44 - 0x76a32842 + v36 + (v43 & (v41 ^ v39) ^ v39);
        v46 = (v45 / 1024 | 0x400000 * v45) + v43;
        v47 = v11 + 0x6b901122 + v39 + (v46 & (v43 ^ v41) ^ v41);
        v48 = (int32_t)*(char *)(result + 13);
        v49 = (v47 / 0x2000000 | 128 * v47) + v46;
        v50 = (int32_t)*(char *)(result + 15);
        v51 = v48 - 0x2678e6d + v41 + (v49 & (v46 ^ v43) ^ v43);
        v52 = (v51 / 0x100000 | 0x1000 * v51) + v49;
        v53 = v12 - 0x5986bc72 + v43 + (v52 & (v49 ^ v46) ^ v46);
        v54 = (v53 / 0x8000 | 0x20000 * v53) + v52;
        v55 = v50 + 0x49b40821 + v46 + (v54 & (v52 ^ v49) ^ v49);
        v56 = (v55 / 1024 | 0x400000 * v55) + v54;
        v57 = v14 - 0x9e1da9e + v49 + ((v56 ^ v54) & v52 ^ v54);
        v58 = (v57 / 0x8000000 | 32 * v57) + v56;
        v59 = v28 - 0x3fbf4cc0 + v52 + ((v58 ^ v56) & v54 ^ v56);
        v60 = (v59 / 0x800000 | 512 * v59) + v58;
        v61 = v44 + 0x265e5a51 + v54 + ((v60 ^ v58) & v56 ^ v58);
        v62 = (v61 / 0x40000 | 0x4000 * v61) + v60;
        v63 = v9 - 0x16493856 + v56 + ((v62 ^ v60) & v58 ^ v60);
        v64 = (v63 / 0x1000 | 0x100000 * v63) + v62;
        v65 = v25 - 0x29d0efa3 + v58 + ((v64 ^ v62) & v60 ^ v62);
        v66 = (v65 / 0x8000000 | 32 * v65) + v64;
        v67 = v37 + 0x2441453 + v60 + ((v66 ^ v64) & v62 ^ v64);
        v68 = (v67 / 0x800000 | 512 * v67) + v66;
        v69 = v50 - 0x275e197f + v62 + ((v68 ^ v66) & v64 ^ v66);
        v70 = (v69 / 0x40000 | 0x4000 * v69) + v68;
        v71 = v22 - 0x182c0438 + v64 + ((v70 ^ v68) & v66 ^ v68);
        v72 = (v71 / 0x1000 | 0x100000 * v71) + v70;
        v73 = v34 + 0x21e1cde6 + v66 + ((v72 ^ v70) & v68 ^ v70);
        v74 = (v73 / 0x8000000 | 32 * v73) + v72;
        v75 = v12 - 0x3cc8f82a + v68 + ((v74 ^ v72) & v70 ^ v72);
        v76 = (v75 / 0x800000 | 512 * v75) + v74;
        v77 = v19 - 0xb2af279 + v70 + ((v76 ^ v74) & v72 ^ v74);
        v78 = (v77 / 0x40000 | 0x4000 * v77) + v76;
        v79 = v31 + 0x455a14ed + v72 + ((v78 ^ v76) & v74 ^ v76);
        v80 = (v79 / 0x1000 | 0x100000 * v79) + v78;
        v81 = v48 - 0x561c16fb + v74 + ((v80 ^ v78) & v76 ^ v78);
        v82 = (v81 / 0x8000000 | 32 * v81) + v80;
        v83 = v16 - 0x3105c08 + v76 + ((v82 ^ v80) & v78 ^ v80);
        v84 = (v83 / 0x800000 | 512 * v83) + v82;
        v85 = v10 + 0x676f02d9 + v78 + ((v84 ^ v82) & v80 ^ v82);
        v86 = (v85 / 0x40000 | 0x4000 * v85) + v84;
        v87 = v86 ^ v84;
        v88 = v11 - 0x72d5b376 + v80 + (v87 & v82 ^ v84);
        v89 = (v88 / 0x1000 | 0x100000 * v88) + v86;
        v90 = v25 - 0x5c6be + v82 + (v89 ^ v87);
        v91 = (v90 / 0x10000000 | 16 * v90) + v89;
        v92 = v91 ^ v89;
        v93 = v31 - 0x788e097f + v84 + (v92 ^ v86);
        v94 = (v93 / 0x200000 | 2048 * v93) + v91;
        v95 = v44 + 0x6d9d6122 + v86 + (v94 ^ v92);
        v96 = (v95 / 0x10000 | 0x10000 * v95) + v94;
        v97 = v96 ^ v94;
        v98 = v12 - 0x21ac7f4 + v89 + (v97 ^ v91);
        v99 = (v98 / 512 | 0x800000 * v98) + v96;
        v100 = v14 - 0x5b4115bc + v91 + (v97 ^ v99);
        v101 = (v100 / 0x10000000 | 16 * v100) + v99;
        v102 = v22 + 0x4bdecfa9 + v94 + (v99 ^ v96 ^ v101);
        v103 = (v102 / 0x200000 | 2048 * v102) + v101;
        v104 = v10 - 0x944b4a0 + v96 + (v101 ^ v99 ^ v103);
        v105 = (v104 / 0x10000 | 0x10000 * v104) + v103;
        v106 = v37 - 0x41404390 + v99 + (v103 ^ v101 ^ v105);
        v107 = (v106 / 512 | 0x800000 * v106) + v105;
        v108 = v48 + 0x289b7ec6 + v101 + (v105 ^ v103 ^ v107);
        v109 = (v108 / 0x10000000 | 16 * v108) + v107;
        v110 = v9 - 0x155ed806 + v103 + (v107 ^ v105 ^ v109);
        v111 = (v110 / 0x200000 | 2048 * v110) + v109;
        v112 = v19 - 0x2b10cf7b + v105 + (v109 ^ v107 ^ v111);
        v113 = (v112 / 0x10000 | 0x10000 * v112) + v111;
        v114 = v28 + 0x4881d05 + v107 + (v111 ^ v109 ^ v113);
        v115 = (v114 / 512 | 0x800000 * v114) + v113;
        v116 = v34 - 0x262b2fc7 + v109 + (v113 ^ v111 ^ v115);
        v117 = (v116 / 0x10000000 | 16 * v116) + v115;
        v118 = v11 - 0x1924661b + v111 + (v115 ^ v113 ^ v117);
        v119 = (v118 / 0x200000 | 2048 * v118) + v117;
        v120 = v50 + 0x1fa27cf8 + v113 + (v117 ^ v115 ^ v119);
        v121 = (v120 / 0x10000 | 0x10000 * v120) + v119;
        v122 = v16 - 0x3b53a99b + v115 + (v119 ^ v117 ^ v121);
        v123 = (v122 / 512 | 0x800000 * v122) + v121;
        v124 = v9 - 0xbd6ddbc + v117 + ((v123 | -1 - v119) ^ v121);
        v125 = (v124 / 0x4000000 | 64 * v124) + v123;
        v126 = v10 + 0x432aff97 + v119 + ((v125 | -1 - v121) ^ v123);
        v127 = (v126 / 0x400000 | 1024 * v126) + v125;
        v128 = v12 - 0x546bdc59 + v121 + ((v127 | -1 - v123) ^ v125);
        v129 = (v128 / 0x20000 | 0x8000 * v128) + v127;
        v130 = v25 - 0x36c5fc7 + v123 + ((v129 | -1 - v125) ^ v127);
        v131 = (v130 / 2048 | 0x200000 * v130) + v129;
        v132 = v11 + 0x655b59c3 + v125 + ((v131 | -1 - v127) ^ v129);
        v133 = (v132 / 0x4000000 | 64 * v132) + v131;
        v134 = v19 - 0x70f3336e + v127 + ((v133 | -1 - v129) ^ v131);
        v135 = (v134 / 0x400000 | 1024 * v134) + v133;
        v136 = v37 - 0x100b83 + v129 + ((v135 | -1 - v131) ^ v133);
        v137 = (v136 / 0x20000 | 0x8000 * v136) + v135;
        v138 = v14 - 0x7a7ba22f + v131 + ((v137 | -1 - v133) ^ v135);
        v139 = (v138 / 2048 | 0x200000 * v138) + v137;
        v140 = v31 + 0x6fa87e4f + v133 + ((v139 | -1 - v135) ^ v137);
        v141 = (v140 / 0x4000000 | 64 * v140) + v139;
        v142 = v50 - 0x1d31920 + v135 + ((v141 | -1 - v137) ^ v139);
        v143 = (v142 / 0x400000 | 1024 * v142) + v141;
        v144 = v28 - 0x5cfebcec + v137 + ((v143 | -1 - v139) ^ v141);
        v145 = (v144 / 0x20000 | 0x8000 * v144) + v143;
        v146 = v48 + 0x4e0811a1 + v139 + ((v145 | -1 - v141) ^ v143);
        v147 = (v146 / 2048 | 0x200000 * v146) + v145;
        v148 = v22 - 0x8ac817e + v141 + ((v147 | -1 - v143) ^ v145);
        v149 = (v148 / 0x4000000 | 64 * v148) + v147;
        v5 += v149;
        v150 = v44 - 0x42c50dcb + v143 + ((v149 | -1 - v145) ^ v147);
        v151 = (v150 / 0x400000 | 1024 * v150) + v149;
        v152 = v16 + 0x2ad7d2bb + v145 + ((v151 | -1 - v147) ^ v149);
        v153 = (v152 / 0x20000 | 0x8000 * v152) + v151;
        v154 = v34 - 0x14792c6f + v147 + ((v153 | -1 - v149) ^ v151);
        v155 = v153 + v7 + (v154 / 2048 | 0x200000 * v154);
        v156 = v153 + v6;
        v157 = v151 + v8;
        result += 64;
    }
    // 0x46d30
    *v2 = v155;
    *v3 = v156;
    *v1 = v5;
    *v4 = v157;
    return result;
}

// Address range: 0x497670 - 0x4976b7
int64_t function_497670(int64_t a1) {
    // 0x497670
    if (a1 == 0) {
        // 0x4976a9
        return 0xffff8f00;
    }
    char * v1 = (char *)(a1 + 372); // 0x497681
    if (*v1 % 2 != 0) {
        // 0x49768a
        return function_4a6ba0(a1);
    }
    // 0x497698
    int64_t v2; // 0x497670
    int64_t result = function_4a1270(a1, v2, v2, v2, v2, v2, v2, (int64_t)&g137, (int64_t)&g137, (int64_t)&g137, (int64_t)&g137, (int64_t)&g137, (int64_t)&g137); // 0x497698
    if (*v1 % 2 != 0) {
        // 0x49768a
        return function_4a6ba0(a1);
    }
    // 0x4976a9
    return result;
}

// Address range: 0x4976c0 - 0x49774b
int64_t function_4976c0(int64_t a1) {
    // 0x4976c0
    if (a1 == 0) {
        // 0x49772e
        return 0xffff8f00;
    }
    // 0x4976d4
    int64_t v1; // 0x4976c0
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g12, "=> handshake", v1);
    int64_t v2 = 0; // 0x4976fc
    while (*(int32_t *)(a1 + 8) != 16) {
        int64_t v3 = function_497670(a1); // 0x497701
        if ((int32_t)v3 != 0) {
            // 0x49770c
            v2 = v3 & 0xffffffff;
            goto lab_0x49770c_2;
        }
        v2 = 0;
    }
  lab_0x49770c_2:
    // 0x49770c
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g13, "<= handshake", v1);
    // 0x49772e
    return v2 & 0xffffffff;
}

// Address range: 0x497750 - 0x49779e
int64_t function_497750(int64_t a1) {
    if (a1 == 0) {
        // 0x49779c
        int64_t result; // 0x497750
        return result;
    }
    // 0x497759
    function_4b4ef0(a1 + 128);
    function_4b4ef0(a1 + 216);
    function_4c16b0(a1 + 80);
    function_4c16b0(a1 + 104);
    int64_t result2 = a1 + 304; // 0x497783
    int64_t v1 = a1; // 0x49778a
    *(char *)v1 = 0;
    v1++;
    while (v1 != result2) {
        // 0x497790
        *(char *)v1 = 0;
        v1++;
    }
    // 0x49779c
    return result2;
}

// Address range: 0x4977a0 - 0x49789b
int64_t function_4977a0(int64_t a1) {
    if (a1 == 0) {
        // 0x497894
        int64_t result; // 0x4977a0
        return result;
    }
    // 0x4977b2
    function_4c1df0(a1 + (int64_t)&g35);
    function_4cb4a0(a1 + (int64_t)&g39);
    function_4cccc0(a1 + (int64_t)&g42);
    function_4cddb0(a1 + (int64_t)&g45);
    function_4b8b30(a1 + 8);
    function_4b9140(a1 + 256);
    free((int64_t *)*(int64_t *)(a1 + (int64_t)&g22));
    int64_t * v1 = (int64_t *)(a1 + (int64_t)&g23); // 0x497803
    int64_t v2 = *v1; // 0x497803
    if (v2 != 0) {
        int64_t v3 = *(int64_t *)(a1 + (int64_t)&g24); // 0x49780f
        int64_t v4 = v2; // 0x497819
        if (v3 != 0) {
            int64_t v5 = v2; // 0x49781e
            *(char *)v5 = 0;
            v5++;
            while (v5 != v3 + v2) {
                // 0x497820
                *(char *)v5 = 0;
                v5++;
            }
            // 0x49782c
            v4 = *v1;
        }
        // 0x497833
        free((int64_t *)v4);
    }
    int64_t v6 = *(int64_t *)(a1 + (int64_t)&g26); // 0x497838
    if (v6 != 0) {
        int64_t v7 = *(int64_t *)(v6 + 16); // 0x497848
        free((int64_t *)v6);
        while (v7 != 0) {
            int64_t v8 = v7;
            v7 = *(int64_t *)(v8 + 16);
            free((int64_t *)v8);
        }
    }
    // 0x497859
    free((int64_t *)*(int64_t *)(a1 + (int64_t)&g29));
    free((int64_t *)*(int64_t *)(a1 + (int64_t)&g30));
    function_494d90(*(int64_t *)(a1 + (int64_t)&g32));
    int64_t result2 = a1 + (int64_t)&g101; // 0x49787d
    int64_t v9 = a1; // 0x497884
    *(char *)v9 = 0;
    v9++;
    while (v9 != result2) {
        // 0x497888
        *(char *)v9 = 0;
        v9++;
    }
    // 0x497894
    return result2;
}

// Address range: 0x4978a0 - 0x49792d
int64_t function_4978a0(int64_t a1) {
    // 0x4978a0
    int64_t v1; // 0x4978a0
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g4, "=> handshake wrapup: final free", v1);
    int64_t * v2 = (int64_t *)(a1 + 96); // 0x4978c3
    function_4977a0(*v2);
    free((int64_t *)*v2);
    int64_t * v3 = (int64_t *)(a1 + 120); // 0x4978d5
    int64_t v4 = *v3; // 0x4978d5
    *v2 = 0;
    if (v4 != 0) {
        // 0x4978e6
        function_497750(v4);
        free((int64_t *)*v3);
    }
    int64_t * v5 = (int64_t *)(a1 + 128); // 0x4978f4
    *v5 = 0;
    *v3 = *v5;
    int64_t result = function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g5, "<= handshake wrapup: final free", v1); // 0x497928
    return result;
}

// Address range: 0x497930 - 0x49796e
int64_t function_497930(int64_t a1) {
    if (a1 == 0) {
        // 0x49796c
        int64_t result; // 0x497930
        return result;
    }
    int64_t * v1 = (int64_t *)(a1 + 104); // 0x497939
    int64_t v2 = *v1; // 0x497939
    if (v2 != 0) {
        // 0x497942
        function_4ab380(v2);
        free((int64_t *)*v1);
    }
    // 0x497950
    free((int64_t *)*(int64_t *)(a1 + 120));
    int64_t result2 = a1 + 152; // 0x497959
    int64_t v3 = a1; // 0x497959
    *(char *)v3 = 0;
    v3++;
    while (v3 != result2) {
        // 0x497960
        *(char *)v3 = 0;
        v3++;
    }
    // 0x49796c
    return result2;
}

// Address range: 0x497970 - 0x497d70
int64_t function_497970(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 128); // 0x49797d
    int64_t v2 = *v1; // 0x49797d
    if (v2 != 0) {
        // 0x497989
        function_497750(v2);
    }
    int64_t * v3 = (int64_t *)(a1 + 88); // 0x49798e
    int64_t v4 = *v3; // 0x49798e
    if (v4 != 0) {
        // 0x497997
        function_497930(v4);
    }
    int64_t * v5 = (int64_t *)(a1 + 96); // 0x49799c
    int64_t v6 = *v5; // 0x49799c
    int64_t v7 = 0; // 0x4979a5
    if (v6 != 0) {
        // 0x4979a7
        function_4977a0(v6);
        v7 = *v5;
    }
    // 0x4979b0
    if (*v1 == 0) {
        // 0x497d38
        *v1 = (int64_t)calloc(1, 304);
    }
    // 0x4979be
    if (*v3 == 0) {
        // 0x497d58
        *v3 = (int64_t)calloc(1, 152);
    }
    if (v7 == 0) {
        int64_t * mem = calloc(1, (int32_t)&g101); // 0x497cba
        *v5 = (int64_t)mem;
        if (mem != NULL) {
            goto lab_0x4979d2;
        } else {
            goto lab_0x497cd0;
        }
    } else {
        goto lab_0x4979d2;
    }
  lab_0x4979d2:;
    // 0x4979d2
    int64_t v8; // 0x497970
    int64_t v9; // 0x497970
    int64_t v10; // 0x497970
    uint64_t v11; // 0x4979f2
    int64_t v12; // 0x497a29
    if (*v1 == 0) {
        goto lab_0x497cd0;
    } else {
        int64_t v13 = *v3; // 0x4979e0
        if (v13 == 0) {
            goto lab_0x497cd0;
        } else {
            // 0x4979ed
            function_496ab0(v13);
            v11 = *v1;
            int64_t v14 = v11; // 0x497a05
            int64_t v15 = 304; // 0x497a05
            if (v11 % 2 != 0) {
                // 0x497c38
                *(char *)v11 = 0;
                v14 = v11 + 1;
                v15 = 303;
            }
            int64_t v16 = v14; // 0x497a0f
            int64_t v17 = v15; // 0x497a0f
            if ((v14 & 2) != 0) {
                // 0x497c50
                *(int16_t *)v14 = 0;
                v16 = v14 + 2;
                v17 = v15 + 510 & 319;
            }
            int64_t v18 = v16; // 0x497a19
            v10 = v17;
            if ((v16 & 4) != 0) {
                // 0x497c68
                *(int32_t *)v16 = 0;
                v18 = v16 + 4;
                v10 = v17 + 0xfffffffc & 0xffffffff;
            }
            uint64_t v19 = v10 / 8 % 0x20000000; // 0x497a23
            __asm_rep_stosq_memset((char *)v18, 0, v19);
            bool v20; // 0x497970
            v12 = v20 ? -8 : 8;
            int64_t v21 = v19 * v12 + v18; // 0x497a29
            if ((v10 & 4) != 0) {
                // 0x497c08
                *(int32_t *)v21 = 0;
                int64_t v22 = v21 + 4; // 0x497c0e
                v9 = v22;
                v8 = v22;
                if ((v10 & 2) == 0) {
                    goto lab_0x497a3b;
                } else {
                    goto lab_0x497bf0;
                }
            } else {
                // 0x497a32
                v9 = v21;
                v8 = v21;
                if ((v10 & 2) != 0) {
                    goto lab_0x497bf0;
                } else {
                    goto lab_0x497a3b;
                }
            }
        }
    }
  lab_0x497cd0:;
    // 0x497cd0
    int64_t v23; // 0x497970
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g10, "alloc() of ssl sub-contexts failed", v23);
    free((int64_t *)*v5);
    free((int64_t *)*v1);
    free((int64_t *)*v3);
    *v5 = 0;
    *v1 = 0;
    *v3 = 0;
    // 0x497b90
    return 0xffff8100;
  lab_0x497a3b:
    // 0x497a3b
    if (v10 % 2 != 0) {
        // 0x497be0
        *(char *)v9 = 0;
        goto lab_0x497a44;
    } else {
        goto lab_0x497a44;
    }
  lab_0x497bf0:
    // 0x497bf0
    *(int16_t *)v8 = 0;
    if (v10 % 2 == 0) {
        goto lab_0x497a44;
    } else {
        // 0x497be0
        *(char *)(v8 + 2) = 0;
        goto lab_0x497a44;
    }
  lab_0x497a44:
    // 0x497a44
    function_4b4e60(v11 + 128);
    function_4b4e60(v11 + 216);
    function_4c1690(v11 + 80);
    function_4c1690(v11 + 104);
    uint64_t v24 = *v5; // 0x497a6e
    int64_t v25 = v24; // 0x497a7e
    int64_t v26 = (int64_t)&g101; // 0x497a7e
    if (v24 % 2 != 0) {
        // 0x497c98
        *(char *)v24 = 0;
        v25 = v24 + 1;
        v26 = (int64_t)&g101 & -256 | 151;
    }
    int64_t v27 = v25; // 0x497a88
    int64_t v28 = v26; // 0x497a88
    if ((v25 & 2) != 0) {
        // 0x497c20
        *(int16_t *)v25 = 0;
        v27 = v25 + 2;
        v28 = v26 + 0xfffffffe & 0xffffffff;
    }
    int64_t v29 = v27; // 0x497a92
    int64_t v30 = v28; // 0x497a92
    if ((v27 & 4) != 0) {
        // 0x497c80
        *(int32_t *)v27 = 0;
        v29 = v27 + 4;
        v30 = v28 + 0xfffffffc & 0xffffffff;
    }
    uint64_t v31 = v30 / 8 % 0x20000000; // 0x497a9c
    __asm_rep_stosq_memset((char *)v29, 0, v31);
    int64_t v32 = v31 * v12 + v29; // 0x497aa2
    int64_t v33; // 0x497970
    int64_t v34; // 0x497970
    if ((v30 & 4) != 0) {
        // 0x497bc8
        *(int32_t *)v32 = 0;
        int64_t v35 = v32 + 4; // 0x497bce
        v33 = v35;
        v34 = v35;
        if ((v30 & 2) == 0) {
            goto lab_0x497ab4;
        } else {
            goto lab_0x497bb0;
        }
    } else {
        // 0x497aab
        v33 = v32;
        v34 = v32;
        if ((v30 & 2) != 0) {
            goto lab_0x497bb0;
        } else {
            goto lab_0x497ab4;
        }
    }
  lab_0x497ab4:
    // 0x497ab4
    if (v30 % 2 != 0) {
        // 0x497ba0
        *(char *)v33 = 0;
        goto lab_0x497abd;
    } else {
        goto lab_0x497abd;
    }
  lab_0x497bb0:
    // 0x497bb0
    *(int16_t *)v34 = 0;
    if (v30 % 2 == 0) {
        goto lab_0x497abd;
    } else {
        // 0x497ba0
        *(char *)(v34 + 2) = 0;
        goto lab_0x497abd;
    }
  lab_0x497abd:;
    int64_t v36 = v24 + (int64_t)&g35; // 0x497abd
    int64_t v37 = v24 + (int64_t)&g39; // 0x497ac4
    function_4c1d60(v36);
    function_4cb410(v37);
    function_4c1e70(v36);
    int64_t v38 = v24 + (int64_t)&g42; // 0x497ae6
    function_4cb520(v37);
    function_4ccc30(v38);
    int64_t v39 = v24 + (int64_t)&g45; // 0x497afd
    function_4ccd50(v38, 0);
    function_4cdd20(v39);
    function_4cdde0(v39, 1);
    *(int32_t *)v24 = 2;
    *(int64_t *)(v24 + (int64_t)&g65) = 0x494f80;
    function_4b82e0(v24 + 8);
    function_4b90b0(v24 + 256);
    *(int32_t *)(v24 + (int64_t)&g25) = 3;
    char * v40 = (char *)(v24 + 628); // 0x497b59
    if ((*v40 & 2) != 0) {
        int64_t v41 = *v5; // 0x497b62
        *(int64_t *)(v41 + (int64_t)&g34) = *(int64_t *)(a1 + 112);
        unsigned char v42 = -((*v40 % 2)) & 2;
        *(char *)(v41 + (int64_t)&g31) = v42;
        function_4945c0(a1, 0, (int32_t)v42);
    }
    // 0x497b90
    return 0;
}

// Address range: 0x497d70 - 0x497e5f
int64_t function_497d70(int64_t a1) {
    // 0x497d70
    int64_t v1; // 0x497d70
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g14, "=> renegotiate", v1);
    int64_t v2 = function_497970(a1); // 0x497d9b
    if ((int32_t)v2 != 0) {
        // 0x497df8
        return v2 & 0xffffffff;
    }
    unsigned char v3 = *(char *)(a1 + 372); // 0x497da9
    int32_t * v4 = (int32_t *)(a1 + 12);
    if ((v3 & 2) != 0) {
        // 0x497db4
        if (*v4 == 3) {
            int64_t v5 = *(int64_t *)(a1 + 96); // 0x497e3a
            if (v3 % 2 == 0) {
                // 0x497e50
                *(int32_t *)(v5 + (int64_t)&g28) = 1;
            } else {
                // 0x497e40
                *(int32_t *)(v5 + (int64_t)&g27) = 1;
            }
        }
    }
    // 0x497dba
    *(int32_t *)(a1 + 8) = 0;
    *v4 = 1;
    int64_t v6 = function_4976c0(a1); // 0x497dcb
    int64_t result = v6 & 0xffffffff; // 0x497dd2
    if ((int32_t)v6 != 0) {
        // 0x497e08
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g15, "mbedtls_ssl_handshake", result);
        return result;
    }
    // 0x497dd6
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g16, "<= renegotiate", v1);
    // 0x497df8
    return result;
}

// Address range: 0x497e60 - 0x497fe7
int64_t function_497e60(int64_t a1, int64_t a2) {
    // 0x497e60
    *(int64_t *)a1 = a2;
    int64_t * mem = calloc(1, (int32_t)&g38); // 0x497e86
    int64_t v1 = (int64_t)mem; // 0x497e86
    int64_t * v2 = (int64_t *)(a1 + 160); // 0x497e91
    *v2 = v1;
    if (mem == NULL) {
        // 0x497f90
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g11, "alloc(%d bytes) failed", (int64_t)&g38);
        free((int64_t *)*v2);
        *v2 = 0;
        return 0xffff8100;
    }
    int64_t * mem2 = calloc(1, (int32_t)&g38); // 0x497ea8
    int64_t v3 = (int64_t)mem2; // 0x497ea8
    *(int64_t *)(a1 + 288) = v3;
    if (mem2 == NULL) {
        // 0x497f90
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g11, "alloc(%d bytes) failed", (int64_t)&g38);
        free((int64_t *)*v2);
        *v2 = 0;
        return 0xffff8100;
    }
    // 0x497ebd
    if ((*(char *)(a2 + 372) & 2) != 0) {
        // 0x497f40
        *(int64_t *)(a1 + 304) = v3;
        *(int64_t *)(a1 + 176) = v1;
        *(int64_t *)(a1 + 296) = v3 + 3;
        int64_t v4 = v3 + 13; // 0x497f5d
        *(int64_t *)(a1 + 320) = v4;
        *(int64_t *)(a1 + 328) = v4;
        *(int64_t *)(a1 + 312) = v3 + 11;
        *(int64_t *)(a1 + 168) = v1 + 3;
    } else {
        // 0x497ec8
        *(int64_t *)(a1 + 296) = v3;
        *(int64_t *)(a1 + 168) = v1;
        *(int64_t *)(a1 + 304) = v3 + 8;
        int64_t v5 = v3 + 13; // 0x497ee5
        *(int64_t *)(a1 + 320) = v5;
        *(int64_t *)(a1 + 328) = v5;
        *(int64_t *)(a1 + 312) = v3 + 11;
        *(int64_t *)(a1 + 176) = v1 + 8;
    }
    int64_t v6 = v1 + 13; // 0x497f0d
    *(int64_t *)(a1 + 192) = v6;
    *(int64_t *)(a1 + 200) = v6;
    *(int64_t *)(a1 + 184) = v1 + 11;
    return function_497970(a1);
}

// Address range: 0x497ff0 - 0x49818b
int64_t function_497ff0(int64_t a1, int64_t a2) {
    // 0x497ff0
    function_497930(a1);
    int64_t v1; // 0x497ff0
    int64_t v2; // 0x497ff0
    int64_t v3; // 0x497ff0
    int64_t v4; // 0x497ff0
    int64_t v5; // 0x497ff0
    int64_t v6; // 0x497ff0
    if ((uint64_t)a1 % 2 != 0) {
        int64_t v7 = a1 + 1; // 0x49812c
        int64_t v8 = a2 + 1; // 0x498130
        *(char *)a1 = (char)a2;
        v6 = v8;
        v4 = v7;
        v2 = 151;
        v1 = v8;
        v5 = v7;
        v3 = 149;
        if ((v7 & 2) == 0) {
            goto lab_0x498032;
        } else {
            goto lab_0x498148;
        }
    } else {
        // 0x498028
        v6 = a2;
        v4 = a1;
        v2 = 152;
        v1 = a2;
        v5 = a1;
        v3 = 150;
        if ((a1 & 2) != 0) {
            goto lab_0x498148;
        } else {
            goto lab_0x498032;
        }
    }
  lab_0x498032:;
    int64_t v9 = v6; // 0x498036
    int64_t v10 = v4; // 0x498036
    int64_t v11 = v2; // 0x498036
    int64_t v12 = v6; // 0x498036
    int64_t v13 = v4; // 0x498036
    int64_t v14 = v2; // 0x498036
    if ((v4 & 4) != 0) {
        goto lab_0x498168;
    } else {
        goto lab_0x49803c;
    }
  lab_0x498148:;
    int64_t v15 = v1 + 2; // 0x49814f
    *(int16_t *)v5 = *(int16_t *)v1;
    int64_t v16 = v5 + 2; // 0x498156
    v9 = v15;
    v10 = v16;
    v11 = v3;
    v12 = v15;
    v13 = v16;
    v14 = v3;
    if ((v16 & 4) == 0) {
        goto lab_0x49803c;
    } else {
        goto lab_0x498168;
    }
  lab_0x498168:
    // 0x498168
    *(int32_t *)v13 = *(int32_t *)v12;
    v9 = v12 + 4;
    v10 = v13 + 4;
    v11 = v14 + 0xfffffffc & 0xffffffff;
    goto lab_0x49803c;
  lab_0x49803c:
    // 0x49803c
    __asm_rep_movsq_memcpy((char *)v10, (char *)v9, v11 / 8 % 0x20000000);
    int64_t * v17 = (int64_t *)(a2 + 104); // 0x498073
    if (*v17 != 0) {
        int64_t * mem = calloc(1, (int32_t)&g21); // 0x498084
        int64_t v18 = (int64_t)mem; // 0x498084
        int64_t * v19 = (int64_t *)(a1 + 104); // 0x49808c
        *v19 = v18;
        if (mem == NULL) {
            // 0x4980f4
            return 0xffff8100;
        }
        // 0x498096
        function_4ab2f0(v18);
        int64_t v20 = *v17; // 0x49809e
        int64_t v21 = function_4ab520(*v19, *(int64_t *)(v20 + 16), *(int64_t *)(v20 + 8)); // 0x4980ae
        if ((int32_t)v21 != 0) {
            // 0x498110
            free((int64_t *)*v19);
            *v19 = 0;
            // 0x4980f4
            return v21 & 0xffffffff;
        }
    }
    int64_t * v22 = (int64_t *)(a2 + 120); // 0x4980bd
    if (*v22 == 0) {
        // 0x4980f4
        return 0;
    }
    int32_t size = (int32_t)*(int64_t *)(a2 + 128); // 0x4980d3
    int64_t * mem2 = calloc(1, size); // 0x4980d3
    *(int64_t *)(a1 + 120) = (int64_t)mem2;
    int64_t result = 0xffff8100; // 0x4980df
    if (mem2 != NULL) {
        // 0x4980e5
        memcpy(mem2, (int64_t *)*v22, size);
        result = 0;
    }
    // 0x4980f4
    return result;
}

// Address range: 0x498190 - 0x4981c6
int64_t function_498190(int64_t a1, int64_t a2) {
    if (a1 == 0 || a2 == 0) {
        // 0x4981c0
        return 0xffff8f00;
    }
    int64_t v1 = *(int64_t *)(a1 + 80); // 0x49819d
    if (v1 == 0 || *(char *)(a1 + 372) % 2 != 0) {
        // 0x4981c0
        return 0xffff8f00;
    }
    // 0x4981b2
    return function_497ff0(a2, v1);
}

// Address range: 0x4981d0 - 0x498225
int64_t function_4981d0(int64_t a1, int64_t a2) {
    // 0x4981d0
    if (a1 == 0 || a2 == 0) {
        // 0x49820f
        return 0xffff8f00;
    }
    int64_t v1 = *(int64_t *)(a1 + 88); // 0x4981de
    if (v1 == 0 || *(char *)(v1 + 372) % 2 != 0) {
        // 0x49820f
        return 0xffff8f00;
    }
    int64_t result = function_497ff0(v1, a2); // 0x4981f8
    if ((int32_t)result == 0) {
        // 0x498201
        *(int32_t *)(*(int64_t *)(a1 + 96) + (int64_t)&g98) = 1;
    }
    // 0x49820f
    return result;
}

// Address range: 0x498230 - 0x498428
int64_t function_498230(int64_t a1, int32_t a2) {
    // 0x498230
    *(int32_t *)(a1 + 8) = 0;
    int64_t v1; // 0x498230
    function_4945c0(a1, 0, (int32_t)v1);
    int64_t * v2 = (int64_t *)(a1 + 160); // 0x498249
    *(int32_t *)(a1 + 12) = 0;
    *(int32_t *)(a1 + 16) = 0;
    *(int64_t *)(a1 + 408) = 0;
    *(int64_t *)(a1 + 416) = 0;
    *(int32_t *)(a1 + 424) = 0;
    *(int64_t *)(a1 + 428) = 0;
    *(int32_t *)(a1 + 436) = 0;
    *(int32_t *)(a1 + 400) = 0;
    *(int64_t *)(a1 + 208) = 0;
    *(int64_t *)(a1 + 200) = *v2 + 13;
    *(int32_t *)(a1 + 216) = 0;
    *(int64_t *)(a1 + 224) = 0;
    if (a2 == 0) {
        // 0x4982cc
        *(int64_t *)(a1 + 232) = 0;
    }
    int64_t v3 = *(int64_t *)(a1 + 288); // 0x4982d7
    char * v4 = (char *)(a1 + 360); // 0x4982de
    *(int64_t *)(a1 + 248) = 0;
    *(int16_t *)(a1 + 240) = 0;
    *(int64_t *)(a1 + 256) = 0;
    *(int64_t *)(a1 + 264) = 0;
    *(int64_t *)(a1 + 272) = 0;
    *(int32_t *)(a1 + 280) = 0;
    *(int32_t *)(a1 + 284) = 0;
    *(int32_t *)(a1 + 336) = 0;
    *(int64_t *)(a1 + 328) = v3 + 13;
    *(int64_t *)(a1 + 344) = 0;
    *(int64_t *)(a1 + 352) = 0;
    if (*v4 != 0) {
        // 0x49835b
        *v4 = 0;
    }
    // 0x498362
    *(int64_t *)(a1 + 104) = 0;
    *(int64_t *)(a1 + 112) = 0;
    memset2((void *)(int64_t)((int64_t *)v3), 0, (int32_t)&g38);
    if (a2 == 0) {
        // 0x4983e0
        memset2((void *)(int64_t)((int64_t *)*v2), 0, (int32_t)&g38);
    }
    int64_t * v5 = (int64_t *)(a1 + 120); // 0x498382
    int64_t v6 = *v5; // 0x498382
    if (v6 != 0) {
        // 0x49838b
        function_497750(v6);
        free((int64_t *)*v5);
        *v5 = 0;
    }
    int64_t * v7 = (int64_t *)(a1 + 80); // 0x4983a1
    int64_t v8 = *v7; // 0x4983a1
    if (v8 != 0) {
        // 0x4983aa
        function_497930(v8);
        free((int64_t *)*v7);
        *v7 = 0;
    }
    // 0x4983c0
    *(int64_t *)(a1 + 376) = 0;
    if (a2 != 0) {
        // 0x4983cf
        return function_497970(a1);
    }
    int64_t * v9 = (int64_t *)(a1 + 384); // 0x4983f8
    free((int64_t *)*v9);
    *v9 = 0;
    *(int64_t *)(a1 + 392) = 0;
    return function_497970(a1);
}

// Address range: 0x498430 - 0x498437
int64_t function_498430(int64_t a1, int64_t a2) {
    // 0x498430
    return function_498230(a1, 0);
}

// Address range: 0x498440 - 0x4985a4
int64_t function_498440(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 96); // 0x498461
    int32_t v2 = *(int32_t *)(*v1 + (int64_t)&g98); // 0x498465
    int64_t v3; // 0x498440
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g6, "=> handshake wrapup", v3);
    int32_t * v4 = (int32_t *)(a1 + 12); // 0x498472
    if (*v4 == 1) {
        // 0x498568
        *v4 = 2;
        *(int32_t *)(a1 + 16) = 0;
    }
    int64_t * v5 = (int64_t *)(a1 + 80); // 0x49847c
    int64_t v6 = *v5; // 0x49847c
    int64_t * v7; // 0x498440
    int64_t v8; // 0x498440
    if (v6 == 0) {
        // 0x49847c
        v7 = (int64_t *)(a1 + 88);
        v8 = 0;
    } else {
        int64_t * v9 = (int64_t *)(a1 + 88);
        *(int32_t *)(*v9 + 148) = *(int32_t *)(v6 + 148);
        function_497930(v6);
        int64_t v10 = *v5; // 0x49849a
        free((int64_t *)v10);
        v7 = v9;
        v8 = v10;
    }
    int64_t v11 = *v7; // 0x4984a6
    *v7 = 0;
    int64_t v12 = *(int64_t *)(v8 + 72); // 0x4984b2
    *v5 = v11;
    int64_t v13 = 0; // 0x4984bd
    int64_t v14 = v8; // 0x4984bd
    if (v12 != 0) {
        // 0x4984bf
        v13 = v12;
        v14 = v8;
        if (!((v2 != 0 | *(int64_t *)(v11 + 16) == 0))) {
            // 0x498550
            v13 = v12;
            v14 = *(int64_t *)(v8 + 80);
            if ((int32_t)v8 != 0) {
                // 0x498580
                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g7, "cache did not store session", v3);
                v13 = (int64_t)"/home/richard/code/mbedtls/library/ssl_tls.c";
                v14 = a1;
            }
        }
    }
    // 0x4984ca
    int32_t * v15; // 0x498518
    int64_t result; // 0x49853f
    if ((*(char *)(v14 + 372) & 2) != 0) {
        // 0x4984d3
        if (*(int64_t *)(*v1 + (int64_t)&g32) != 0) {
            // 0x4984e1
            function_4945c0(a1, 0, (int32_t)v13);
            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g8, "skip freeing handshake and transform", v3);
            // 0x498518
            v15 = (int32_t *)(a1 + 8);
            *v15 = *v15 + 1;
            result = function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g9, "<= handshake wrapup", v3);
            return result;
        }
    }
    // 0x498510
    function_4978a0(a1);
    // 0x498518
    v15 = (int32_t *)(a1 + 8);
    *v15 = *v15 + 1;
    result = function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g9, "<= handshake wrapup", v3);
    return result;
}

// Address range: 0x4985b0 - 0x49873b
int64_t function_4985b0(int64_t a1) {
    // 0x4985b0
    if (a1 == 0) {
        // 0x498734
        int64_t result; // 0x4985b0
        return result;
    }
    // 0x4985c2
    int64_t v1; // 0x4985b0
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g17, "=> free", v1);
    int64_t * v2 = (int64_t *)(a1 + 288); // 0x4985e1
    int64_t v3 = *v2; // 0x4985e1
    if (v3 != 0) {
        int64_t v4 = v3; // 0x4985f4
        *(char *)v4 = 0;
        v4++;
        while (v4 != v3 + (int64_t)&g38) {
            // 0x4985f8
            *(char *)v4 = 0;
            v4++;
        }
        // 0x498604
        free((int64_t *)*v2);
    }
    int64_t * v5 = (int64_t *)(a1 + 160); // 0x498610
    int64_t v6 = *v5; // 0x498610
    if (v6 != 0) {
        int64_t v7 = v6; // 0x498623
        *(char *)v7 = 0;
        v7++;
        while (v7 != v6 + (int64_t)&g38) {
            // 0x498628
            *(char *)v7 = 0;
            v7++;
        }
        // 0x498634
        free((int64_t *)*v5);
    }
    int64_t * v8 = (int64_t *)(a1 + 120); // 0x498640
    int64_t v9 = *v8; // 0x498640
    if (v9 != 0) {
        // 0x498649
        function_497750(v9);
        free((int64_t *)*v8);
    }
    int64_t * v10 = (int64_t *)(a1 + 96); // 0x498657
    int64_t v11 = *v10; // 0x498657
    if (v11 != 0) {
        // 0x498660
        function_4977a0(v11);
        int64_t * v12 = (int64_t *)(a1 + 128); // 0x498665
        function_497750(*v12);
        int64_t * v13 = (int64_t *)(a1 + 88); // 0x498671
        function_497930(*v13);
        free((int64_t *)*v10);
        free((int64_t *)*v12);
        free((int64_t *)*v13);
    }
    int64_t * v14 = (int64_t *)(a1 + 80); // 0x498698
    int64_t v15 = *v14; // 0x498698
    if (v15 != 0) {
        // 0x4986a1
        function_497930(v15);
        free((int64_t *)*v14);
    }
    int64_t * v16 = (int64_t *)(a1 + 368); // 0x4986af
    int64_t str = *v16; // 0x4986af
    if (str != 0) {
        int32_t len = strlen((char *)str); // 0x4986be
        int64_t v17 = str; // 0x4986c6
        if (len != 0) {
            int64_t v18 = str; // 0x4986cb
            *(char *)v18 = 0;
            v18++;
            while (v18 != str + (int64_t)len) {
                // 0x4986d0
                *(char *)v18 = 0;
                v18++;
            }
            // 0x4986dd
            v17 = *v16;
        }
        // 0x4986e4
        free((int64_t *)v17);
    }
    // 0x4986ec
    free((int64_t *)*(int64_t *)(a1 + 384));
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g18, "<= free", v1);
    int64_t result2 = a1 + 440; // 0x49871a
    int64_t v19 = a1; // 0x498721
    *(char *)v19 = 0;
    v19++;
    while (v19 != result2) {
        // 0x498728
        *(char *)v19 = 0;
        v19++;
    }
    // 0x498734
    return result2;
}

// Address range: 0x498740 - 0x4987c7
int64_t function_498740(int64_t a1) {
    // 0x498740
    int64_t v1; // 0x498740
    int64_t v2; // 0x498740
    int64_t v3; // 0x498740
    int64_t v4; // 0x498740
    if (a1 % 2 != 0) {
        // 0x498790
        *(char *)a1 = 0;
        int64_t v5 = a1 + 1; // 0x498793
        v3 = 375;
        v1 = v5;
        v4 = 373;
        v2 = v5;
        if ((v5 & 2) == 0) {
            goto lab_0x498751;
        } else {
            goto lab_0x4987a0;
        }
    } else {
        // 0x49874b
        v3 = 376;
        v1 = a1;
        v4 = 374;
        v2 = a1;
        if ((a1 & 2) != 0) {
            goto lab_0x4987a0;
        } else {
            goto lab_0x498751;
        }
    }
  lab_0x498751:;
    int64_t v6 = v3; // 0x498755
    int64_t v7 = v1; // 0x498755
    int64_t v8 = v3; // 0x498755
    int64_t v9 = v1; // 0x498755
    if ((v1 & 4) != 0) {
        goto lab_0x4987b8;
    } else {
        goto lab_0x498757;
    }
  lab_0x4987a0:
    // 0x4987a0
    *(int16_t *)v2 = 0;
    int64_t v10 = v2 + 2; // 0x4987a5
    v6 = v4;
    v7 = v10;
    v8 = v4;
    v9 = v10;
    if ((v10 & 4) == 0) {
        goto lab_0x498757;
    } else {
        goto lab_0x4987b8;
    }
  lab_0x4987b8:
    // 0x4987b8
    *(int32_t *)v9 = 0;
    v6 = v8 + 0xfffffffc & 0xffffffff;
    v7 = v9 + 4;
    goto lab_0x498757;
  lab_0x498757:;
    uint64_t v11 = v6 / 8 % 0x20000000; // 0x49875b
    __asm_rep_stosq_memset((char *)v7, 0, v11);
    bool v12; // 0x498740
    int64_t v13 = v11 * (v12 ? -8 : 8) + v7; // 0x498761
    int64_t v14 = v13; // 0x498764
    if ((v6 & 4) != 0) {
        // 0x498766
        *(int32_t *)v13 = 0;
        v14 = v13 + 4;
    }
    int64_t v15 = v14; // 0x498773
    if ((v6 & 2) != 0) {
        // 0x498775
        *(int16_t *)v14 = 0;
        v15 = v14 + 2;
    }
    if (v6 % 2 != 0) {
        // 0x498783
        *(char *)v15 = 0;
    }
    // 0x498786
    return 0;
}

// Address range: 0x4987d0 - 0x498a3c
int64_t function_4987d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4987d0
    function_496bd0();
    function_496bf0(a1, a3 & 0xffffffff);
    int32_t v1 = a2; // 0x498803
    if (v1 != 0) {
        char * v2 = (char *)(a1 + 373); // 0x498928
        char * v3 = (char *)(a1 + 372); // 0x498936
        *v3 = *v3 | 64;
        *(int32_t *)(a1 + 340) = (int32_t)&g34;
        *(int32_t *)(a1 + 344) = (int32_t)&g134;
        *(int64_t *)(a1 + 136) = (int64_t)&g40;
        *(int32_t *)(a1 + 348) = 16;
        *(int32_t *)(a1 + 352) = -1;
        *(int64_t *)(a1 + 144) = (int64_t)&g41;
        *v2 = *v2 | 60;
        *(int16_t *)(a1 + 356) = (int16_t)&g136;
        *(char *)(a1 + 358) = -1;
        *(char *)(a1 + 359) = 0;
        if (v1 == 1) {
            int64_t result = function_496ff0(a1, "AD107E1E9123A9D0D660FAA79559C51FA20D64E5683B9FD1B54B1597B61D0A75E6FA141DF95A56DBAF9A3C407BA1DF15EB3D688A309C180E1DE6B85A1274A0A66D3F8152AD6AC2129037C9EDEFDA4DF8D91E8FEF55B7394B7AD5B7D0B6C12207C9F98D11ED34DBF6C6BA0B2C8BBC27BE6A00E0A0B9C49708B3BF8A317091883681286130BC8985DB1602E714415D9330278273C7DE31EFDC7310F7121FD5A07415987D9ADC0A486DCDF93ACC44328387315D75E198C641A480CD86A1B9E587E8BE60E69CC928B2B9C52172E413042E9B23F10B0E16E79763C9B53DCF4BA80A29E3FB73C16B8E75B97EF363E2FFA31F71CF9DE5384E71B81C0AC4DFFE0C10E64F", "AC4032EF4F2D9AE39DF30B5C8FFDAC506CDEBE7B89998CAF74866A08CFE4FFE3A6824A4E10B9A6F0DD921F01A70C4AFAAB739D7700C29F52C57DB17C620A8652BE5E9001A8D66AD7C17669101999024AF4D027275AC1348BB8A762D0521BC98AE247150422EA1ED409939D54DA7460CDB5F6C6B250717CBEF180EB34118E98D119529A45D6F834566E3025E316A330EFBB77A86F0C1AB15B051AE3D428C8F8ACB70A8137150B8EEB10E183EDD19963DDD9E263E4770589EF6AA21E7F5F2FF381B539CCE3409D13CD566AFBB48D6C019181E1BCFE94B30269EDFE72FE9B6AA4BD7B5A0F1C71CFFF4C19C418E1F6EC017981BC087F2A7065B384B890D3191F2BFA"); // 0x4989b4
            if ((int32_t)result != 0) {
                // 0x498908
                return result;
            }
        }
    } else {
        char * v4 = (char *)(a1 + 372); // 0x49880b
        char * v5 = (char *)(a1 + 374); // 0x498819
        *v5 = *v5 | 1;
        *(int32_t *)(a1 + 340) = (int32_t)&g34;
        *(int32_t *)(a1 + 344) = (int32_t)&g134;
        *(int64_t *)(a1 + 136) = (int64_t)&g40;
        *(int32_t *)(a1 + 348) = 16;
        *(int32_t *)(a1 + 352) = -1;
        *(int64_t *)(a1 + 144) = (int64_t)&g41;
        *(int16_t *)(a1 + 356) = (int16_t)&g136;
        *(char *)(a1 + 358) = -1;
        *v4 = *v4 & -77 | 72;
        char * v6 = (char *)(a1 + 373); // 0x498879
        *(char *)(a1 + 359) = 0;
        *v6 = *v6 | 60;
    }
    // 0x498890
    *(char *)(a1 + 370) = 3;
    if ((int32_t)a4 == 2) {
        // 0x4989d0
        *(char *)(a1 + 371) = 3;
        *(char *)(a1 + 368) = 3;
        *(char *)(a1 + 369) = 3;
        *(int64_t *)(a1 + 24) = (int64_t)&g88;
        *(int64_t *)(a1 + 16) = (int64_t)&g88;
        *(int64_t *)(a1 + 8) = (int64_t)&g88;
        *(int64_t *)a1 = (int64_t)&g88;
        *(int64_t *)(a1 + 232) = (int64_t)&g89;
        *(int64_t *)(a1 + 200) = (int64_t)L"`\b\f";
        *(int64_t *)(a1 + 240) = (int64_t)&g90;
        int64_t result2 = (int32_t)&g90 ^ (int32_t)&g90; // 0x498a27
        // 0x498908
        return result2;
    }
    char * v7 = (char *)(a1 + 371); // 0x4988a5
    *v7 = 1;
    *(char *)(a1 + 368) = 3;
    *(char *)(a1 + 369) = 3;
    if ((int32_t)a3 == 1) {
        // 0x498a30
        *v7 = 2;
    }
    int64_t v8 = function_49eff0(); // 0x4988c0
    *(int64_t *)(a1 + 24) = v8;
    *(int64_t *)(a1 + 16) = v8;
    *(int64_t *)(a1 + 8) = v8;
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 232) = (int64_t)&g91;
    *(int64_t *)(a1 + 200) = (int64_t)&g56;
    int64_t v9 = function_4ba450(); // 0x4988f0
    *(int32_t *)(a1 + 364) = (int32_t)&g36;
    *(int64_t *)(a1 + 240) = v9;
    // 0x498908
    return 0;
}

// Address range: 0x498a40 - 0x498b23
int64_t function_498a40(int64_t a1) {
    // 0x498a40
    function_4b0890(a1 + 248);
    function_4b0890(a1 + 272);
    int64_t * v1 = (int64_t *)(a1 + 296); // 0x498a61
    int64_t v2 = *v1; // 0x498a61
    if (v2 != 0) {
        int64_t * v3 = (int64_t *)(a1 + 304); // 0x498a6d
        int64_t v4 = *v3; // 0x498a6d
        if (v4 != 0) {
            *(char *)v2 = 0;
            int64_t v5 = v2 + 1; // 0x498a83
            int64_t v6 = v5; // 0x498a8a
            while (v5 != v4 + v2) {
                // 0x498a80
                *(char *)v6 = 0;
                v5 = v6 + 1;
                v6 = v5;
            }
        }
        int64_t * v7 = (int64_t *)(a1 + 320); // 0x498a8c
        int64_t v8 = *v7; // 0x498a8c
        int64_t * v9 = (int64_t *)(a1 + 312); // 0x498a93
        int64_t v10 = *v9; // 0x498a93
        if (v8 != 0) {
            *(char *)v10 = 0;
            int64_t v11 = v10 + 1; // 0x498aab
            int64_t v12 = v11; // 0x498ab2
            while (v11 != v10 + v8) {
                // 0x498aa8
                *(char *)v12 = 0;
                v11 = v12 + 1;
                v12 = v11;
            }
        }
        // 0x498ab4
        free((int64_t *)*v1);
        free((int64_t *)*v9);
        *v3 = 0;
        *v7 = 0;
    }
    int64_t v13 = *(int64_t *)(a1 + 208); // 0x498ae2
    if (v13 != 0) {
        int64_t v14 = *(int64_t *)(v13 + 16); // 0x498af0
        free((int64_t *)v13);
        while (v14 != 0) {
            int64_t v15 = v14;
            v14 = *(int64_t *)(v15 + 16);
            free((int64_t *)v15);
        }
    }
    int64_t result = a1 + 376; // 0x498b01
    int64_t v16 = a1; // 0x498b08
    *(char *)v16 = 0;
    v16++;
    while (v16 != result) {
        // 0x498b10
        *(char *)v16 = 0;
        v16++;
    }
    // 0x498b1c
    return result;
}

// Address range: 0x498b30 - 0x498b62
int64_t function_498b30(int32_t a1) {
    int64_t v1 = a1;
    int64_t result = 1; // 0x498b45
    int64_t v2; // 0x498b30
    if ((int32_t)function_4c4450(v1, 1, v2, v2) == 0) {
        // 0x498b47
        result = (int32_t)function_4c4450(v1, 4, 1, v2) == 0 ? 0 : 3;
    }
    // 0x498b5e
    return result;
}

// Address range: 0x498b70 - 0x498b8b
int64_t function_498b70(int64_t a1) {
    int64_t v1 = a1 + 0xffffffff; // 0x498b70
    int64_t result = 0; // 0x498b79
    if ((char)v1 < 3) {
        uint32_t v2 = *(int32_t *)((4 * v1 & 1020) + (int64_t)&g51); // 0x498b86
        result = v2;
    }
    // 0x498b89
    return result;
}

// Address range: 0x498b90 - 0x498bab
int64_t function_498b90(int64_t a1) {
    int64_t v1 = a1 + 0xffffffff; // 0x498b90
    int64_t result = 0; // 0x498b99
    if ((char)v1 < 6) {
        uint32_t v2 = *(int32_t *)((4 * v1 & 1020) + (int64_t)&g52); // 0x498ba6
        result = v2;
    }
    // 0x498ba9
    return result;
}

// Address range: 0x498bb0 - 0x498bc7
int64_t function_498bb0(int64_t a1) {
    int64_t v1 = a1 + 0xfffffffd; // 0x498bb0
    int64_t result = 0; // 0x498bb8
    if ((int32_t)v1 < 6) {
        unsigned char v2 = *(char *)((v1 & 0xffffffff) + (int64_t)&g53); // 0x498bc1
        result = v2;
    }
    // 0x498bc5
    return result;
}

// Address range: 0x498bd0 - 0x498c0c
int64_t function_498bd0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 240); // 0x498bd3
    if (v1 == 0) {
        // 0x498bfe
        return 0xffffffff;
    }
    int32_t v2 = *(int32_t *)v1; // 0x498bdf
    if (v2 == 0) {
        // 0x498bfe
        return 0xffffffff;
    }
    int32_t v3 = a2; // 0x498bea
    if (v2 == v3) {
        // 0x498bfe
        return 0;
    }
    int64_t v4 = v1; // 0x498bec
    v4 += 4;
    int32_t v5 = *(int32_t *)v4; // 0x498bf8
    int64_t result = 0xffffffff; // 0x498bfc
    while (v5 != 0) {
        // 0x498bf0
        result = 0;
        if (v5 == v3) {
            // break -> 0x498bfe
            break;
        }
        v4 += 4;
        v5 = *(int32_t *)v4;
        result = 0xffffffff;
    }
    // 0x498bfe
    return result;
}

// Address range: 0x498c10 - 0x498c4c
int64_t function_498c10(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 232); // 0x498c13
    if (v1 == 0) {
        // 0x498c3e
        return 0xffffffff;
    }
    int32_t v2 = *(int32_t *)v1; // 0x498c1f
    if (v2 == 0) {
        // 0x498c3e
        return 0xffffffff;
    }
    int32_t v3 = a2; // 0x498c2a
    if (v2 == v3) {
        // 0x498c3e
        return 0;
    }
    int64_t v4 = v1; // 0x498c2c
    v4 += 4;
    int32_t v5 = *(int32_t *)v4; // 0x498c38
    int64_t result = 0xffffffff; // 0x498c3c
    while (v5 != 0) {
        // 0x498c30
        result = 0;
        if (v5 == v3) {
            // break -> 0x498c3e
            break;
        }
        v4 += 4;
        v5 = *(int32_t *)v4;
        result = 0xffffffff;
    }
    // 0x498c3e
    return result;
}

// Address range: 0x498c50 - 0x498d10
int64_t function_498c50(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 128; // 0x498c78
    if ((int32_t)a3 == 1) {
        uint32_t v2 = *(int32_t *)(a2 + 24) - 1; // 0x498ce5
        v1 = 0;
        if (v2 < 10) {
            uint32_t v3 = *(int32_t *)(4 * (int64_t)v2 + (int64_t)&g54); // 0x498cf4
            v1 = v3;
        }
    }
    int64_t v4 = 0; // 0x498c89
    if ((int32_t)function_4aa430(a1, v1) != 0) {
        // 0x498c8b
        int64_t v5; // 0x498c50
        *(int32_t *)a4 = (int32_t)v5 | (int32_t)L"\n2";
        v4 = 0xffffffff;
    }
    int64_t v6 = (int32_t)a3 != 1 ? (int64_t)&g49 : (int64_t)&g48; // 0x498cb2
    int64_t v7 = v4; // 0x498cbd
    if ((int32_t)function_4aa540(a1, v6, 8) != 0) {
        // 0x498d00
        int64_t v8; // 0x498c50
        *(int32_t *)a4 = *(int32_t *)&v8 | (int32_t)&g1;
        v7 = 0xffffffff;
    }
    // 0x498cbf
    return v7 & 0xffffffff;
}

// Address range: 0x498d10 - 0x498d3b
int64_t function_498d10(int32_t a1, int32_t a2, int32_t a3, int64_t a4) {
    // 0x498d10
    if (a3 != 1) {
        // 0x498d15
        *(char *)a4 = (char)a1;
        *(char *)(a4 + 1) = (char)a2;
        int64_t result; // 0x498d10
        return result;
    }
    int64_t result2 = a2 != 2 ? (int64_t)-a2 : 0xffffffff; // 0x498d2c
    *(char *)(a4 + 1) = (char)result2;
    *(char *)a4 = 1 - (char)a1;
    return result2;
}

// Address range: 0x498d40 - 0x49930a
int64_t function_498d40(int64_t result3) {
    int64_t * v1 = (int64_t *)(result3 + 344); // 0x498d6b
    uint64_t v2 = *v1; // 0x498d6b
    int64_t v3; // 0x498d40
    function_49e770(result3, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g100, "=> write record", v3);
    char * v4 = (char *)(result3 + 372); // 0x498d7a
    char v5 = *v4; // 0x498d7a
    if ((v5 & 2) != 0) {
        int64_t result = *(int64_t *)(result3 + 96); // 0x498d88
        if (result != 0) {
            // 0x498d91
            if (*(char *)(result + (int64_t)&g31) == 1) {
                // 0x4993a0
                return result;
            }
        }
    }
    uint32_t result2 = *(int32_t *)(result3 + 336); // 0x498d9e
    if (result2 == 22) {
        // 0x4993a0
        return 22;
    }
    if ((v5 & 2) != 0) {
        int64_t v6 = *(int64_t *)(result3 + 96); // 0x498db1
        if (v6 != 0) {
            // 0x498dba
            if (*(char *)(v6 + (int64_t)&g31) != 1) {
                // 0x498dc3
                if ((result2 - 20 & -3) == 0) {
                    // 0x4993a0
                    return result2;
                }
            }
        }
    }
    int64_t * v7 = (int64_t *)(result3 + 304); // 0x498dd1
    *(char *)*v7 = (char)result2;
    int32_t * v8 = (int32_t *)(result3 + 24); // 0x498de4
    int32_t * v9 = (int32_t *)(result3 + 20); // 0x498de7
    uint32_t v10 = *v9; // 0x498de7
    function_498d10(v10, *v8, (int32_t)(*v4 / 2 % 2), *v7 + 1);
    int64_t * v11 = (int64_t *)(result3 + 312); // 0x498e01
    *(char *)*v11 = (char)(v2 / 256);
    *(char *)(*v11 + 1) = (char)v2;
    int64_t * v12 = (int64_t *)(result3 + 112); // 0x498e1c
    if (*v12 == 0) {
        unsigned char v13 = *(char *)((int64_t)v10 + 372) & 2;
        int64_t v14 = v13; // 0x4992b2
        *(int64_t *)(result3 + 352) = *v1 + 13 + (v14 - ((int64_t)(v13 == 0) | v14) & -8);
        unsigned char v15 = *(char *)*v7; // 0x4992d8
        function_49e770(result3, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g103, "output record: msgtype = %d, version = [%d:%d], msglen = %d", (int64_t)v15);
        return result3;
    }
    int64_t result4 = function_49e770(result3, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g43, "=> encrypt buf", v3); // 0x498e44
    if (*(int64_t *)(result3 + 72) == 0) {
        // 0x4993a0
        return result4;
    }
    int64_t v16 = *v12; // 0x498e54
    if (v16 == 0) {
        // 0x4993a0
        return 0;
    }
    int64_t v17 = *(int64_t *)(v16 + 128); // 0x498e61
    if (v17 == 0) {
        // 0x4993a0
        return 0;
    }
    int32_t v18 = *(int32_t *)(v17 + 4); // 0x498e71
    int64_t v19 = *v1; // 0x498e74
    int64_t v20 = *(int64_t *)(result3 + 328); // 0x498e82
    int64_t v21 = function_49e960(result3, 4, "/home/richard/code/mbedtls/library/ssl_tls.c", &g44, "before encrypt: output payload", v20, v19); // 0x498ea1
    int64_t result6 = v21; // 0x498d40
    switch (v18) {
        default: {
            int64_t v22 = (int64_t)(v18 == 8) | (int64_t)"/home/richard/code/mbedtls/library/ssl_tls.c" & 0xffffff00 | (int64_t)(v18 == 6);
            if ((char)v22 == 0) {
                // 0x4993a0
                return v22 | v21 & 0xffffff00;
            }
            uint32_t v23 = *v9; // 0x498edd
            int64_t v24 = *(int64_t *)*(int64_t *)(result3 + 296); // bp-72, 0x498efe
            unsigned char v25 = *(char *)((int64_t)v23 + 372); // 0x498f10
            int64_t v26; // bp-63, 0x498d40
            function_498d10(v23, *v8, (int32_t)(v25 / 2 % 2), (int64_t)&v26);
            int64_t v27 = (int64_t)&v24; // 0x498f28
            function_49e960(result3, 4, "/home/richard/code/mbedtls/library/ssl_tls.c", &g46, "additional data used for AEAD", v27, 13);
            int64_t v28 = *v12; // 0x498f64
            result6 = 8;
            if (*(int64_t *)(v28 + 24) - *(int64_t *)(v28 + 32) != 8) {
                // 0x498fa4
                function_49e770(result3, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)&g47, "should never happen", v27);
                int64_t result5 = function_49e8b0(result3, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g102, "ssl_encrypt_buf", 0xffff9400); // 0x498fc2
                return result5;
            }
        }
        case 7: {
        }
        case 2: {
            // 0x4993a0
            return result6;
        }
    }
}

// Address range: 0x49aaf0 - 0x49b33e
int64_t function_49aaf0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 224); // 0x49ab04
    uint64_t v2 = *v1; // 0x49ab04
    char * v3 = (char *)(a1 + 372); // 0x49ab0b
    int64_t v4; // 0x49aaf0
    if ((*v3 & 2) == 0) {
        // 0x49ab5e
        v4 = 4;
        if (v2 < 4) {
            // 0x49ab28
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g115, "handshake message too short: %d", v2);
            // 0x49ab4f
            return 0xffff8e00;
        }
    } else {
        // 0x49ab14
        v4 = 12;
        if (v2 < 12) {
            // 0x49ab28
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g115, "handshake message too short: %d", v2);
            // 0x49ab4f
            return 0xffff8e00;
        }
    }
    int64_t * v5 = (int64_t *)(a1 + 200); // 0x49ab69
    int64_t v6 = *v5; // 0x49ab69
    unsigned char v7 = *(char *)(v6 + 1); // 0x49ab7a
    unsigned char v8 = *(char *)(v6 + 2); // 0x49ab7e
    unsigned char v9 = *(char *)(v6 + 3); // 0x49ab8a
    int64_t * v10 = (int64_t *)(a1 + 272); // 0x49ab9f
    *v10 = (256 * (int64_t)v8 | 0x10000 * (int64_t)v7 | (int64_t)v9) + v4;
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g116, "handshake message: msglen = %d, type = %d, hslen = %d", v2);
    if ((*v3 & 2) == 0) {
        int64_t result = 0; // 0x49ac9e
        if (*v1 < *v10) {
            // 0x49acb1
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g122, "TLS handshake fragmentation not supported", v2);
            result = 0xffff8f80;
        }
        // 0x49ab4f
        return result;
    }
    int64_t v11 = *v5; // 0x49abcf
    int64_t * v12 = (int64_t *)(a1 + 96); // 0x49abd6
    int64_t v13 = *v12; // 0x49abd6
    int64_t v14; // 0x49aaf0
    int64_t v15; // 0x49aaf0
    int64_t v16; // 0x49aaf0
    if (v13 == 0) {
        goto lab_0x49ace0;
    } else {
        unsigned char v17 = *(char *)(v11 + 5); // 0x49abde
        int64_t v18 = 256 * (int64_t)*(char *)(v11 + 4) | (int64_t)v17; // 0x49abe5
        int32_t v19 = v18; // 0x49abf8
        if (*(int32_t *)(v13 + (int64_t)&g28) == v19) {
            goto lab_0x49ace0;
        } else {
            uint32_t v20 = *(int32_t *)(v13 + (int64_t)&g33) - 1; // 0x49ac08
            if (v20 != v19 || *(char *)v11 == 3) {
                // 0x49b120
                function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g119, "dropping out-of-sequence message: message_seq = %d, expected = %d", v18);
                // 0x49ab4f
                return 0xffff9700;
            }
            // 0x49ac1f
            function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g117, "received message from last flight, message_seq = %d, start_of_flight = %d", (int64_t)v20);
            int64_t v21 = function_49a910(a1); // 0x49ac47
            v15 = v21;
            v14 = (int64_t)"mbedtls_ssl_resend";
            v16 = (int64_t)&g118;
            if ((int32_t)v21 == 0) {
                // 0x49ab4f
                return 0xffff9700;
            }
            goto lab_0x49ac63;
        }
    }
  lab_0x49b048_2:;
    // 0x49b048
    int64_t v22; // 0x49add7
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g110, "message is not complete yet", v22);
    v15 = 0xffff9700;
    v14 = (int64_t)"ssl_reassemble_dtls_handshake";
    v16 = (int64_t)&g121;
    goto lab_0x49ac63;
  lab_0x49ace0:
    // 0x49ace0
    if (*v1 >= *v10) {
        // 0x49acf0
        if (memcmp((int64_t *)(v11 + 6), &g50, 3) == 0) {
            // 0x49ad09
            if (memcmp((int64_t *)(v11 + 9), (int64_t *)(v11 + 1), 3) == 0) {
                // 0x49ad1f
                if (v13 == 0 || *(int64_t *)(v13 + (int64_t)&g30) == 0) {
                    // 0x49ab4f
                    return 0;
                }
            }
        }
    }
    // 0x49ad40
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g120, "found fragmented DTLS handshake message", v2);
    int64_t v79 = *v12; // 0x49ad62
    int64_t v24; // 0x49aaf0
    int64_t v25; // 0x49aaf0
    int64_t v23; // 0x49aaf0
    int64_t v40; // 0x49ad66
    uint64_t v38; // 0x49ad70
    int64_t v27; // 0x49b212
    int64_t v39; // 0x49b219
    if (v79 == 0) {
        // 0x49b314
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g104, "not supported outside handshake (for now)", v2);
        v15 = 0xffff8f80;
        v14 = (int64_t)"ssl_reassemble_dtls_handshake";
        v16 = (int64_t)&g121;
        goto lab_0x49ac63;
    } else {
        // 0x49ad7b
        v40 = *v10;
        v38 = v40 - 12;
        int64_t str = *(int64_t *)(v79 + (int64_t)&g30); // 0x49ad7b
        if (str == 0) {
            // 0x49b152
            function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g105, "initialize reassembly, total length = %d", v38);
            v23 = (int64_t)&g106;
            v24 = (int64_t)"handshake message too large";
            v25 = v38;
            if (*v10 > (int64_t)"le") {
                goto lab_0x49b290;
            } else {
                int64_t * mem = calloc(1, (int32_t)(v38 / 8 + v40 + (int64_t)(v38 % 8 != 0))); // 0x49b1b6
                int64_t result3 = (int64_t)mem; // 0x49b1b6
                *(int64_t *)(*v12 + (int64_t)&g30) = result3;
                if (mem == NULL) {
                    // 0x49ab4f
                    return result3;
                }
                int64_t v80 = *v5; // 0x49b1cc
                *(int32_t *)mem = *(int32_t *)v80;
                *(int16_t *)(result3 + 4) = *(int16_t *)(v80 + 4);
                int64_t v81 = *(int64_t *)(*v12 + (int64_t)&g30); // 0x49b1e3
                *(int16_t *)(v81 + 6) = 0;
                *(char *)(v81 + 8) = 0;
                int64_t v82 = *(int64_t *)(*v12 + (int64_t)&g30); // 0x49b1f8
                *(int16_t *)(v82 + 9) = *(int16_t *)(v82 + 1);
                *(char *)(v82 + 11) = *(char *)(v82 + 3);
                v27 = *v5;
                v39 = *(int64_t *)(*v12 + (int64_t)&g30);
                goto lab_0x49adaa;
            }
        } else {
            int64_t str2 = *v5; // 0x49ad8b
            int32_t memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, 4); // 0x49ad9d
            v39 = str;
            v27 = str2;
            if (memcmp_rc != 0) {
                // 0x49b2e8
                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)2975, "fragment header mismatch", v2);
                v15 = 0xffff8e00;
                v14 = (int64_t)"ssl_reassemble_dtls_handshake";
                v16 = (int64_t)&g121;
                goto lab_0x49ac63;
            } else {
                goto lab_0x49adaa;
            }
        }
    }
  lab_0x49ac63:;
    int64_t result2 = v15 & 0xffffffff;
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v16, (char *)v14, result2);
    return result2;
  lab_0x49b290:
    // 0x49b290
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v23, (char *)v24, v25);
    v15 = 0xffff8f80;
    v14 = (int64_t)"ssl_reassemble_dtls_handshake";
    v16 = (int64_t)&g121;
    goto lab_0x49ac63;
  lab_0x49adaa:;
    unsigned char v26 = *(char *)(v27 + 6); // 0x49adaa
    unsigned char v28 = *(char *)(v27 + 7); // 0x49adb0
    unsigned char v29 = *(char *)(v27 + 9); // 0x49adba
    uint64_t v30 = (int64_t)*(char *)(v27 + 8); // 0x49add7
    v22 = 256 * (int64_t)v28 | 0x10000 * (int64_t)v26 | v30;
    unsigned char v31 = *(char *)(v27 + 10); // 0x49adda
    unsigned char v32 = *(char *)(v27 + 11); // 0x49ade8
    int64_t v33 = 256 * (int64_t)v31 | 0x10000 * (int64_t)v29 | (int64_t)v32; // 0x49adee
    int64_t v34; // 0x49aaf0
    int64_t v35; // 0x49aaf0
    uint64_t v36; // 0x49ae08
    int64_t v37; // 0x49adc0
    if (v38 < v33 + v22) {
        // 0x49b2b0
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g107, "invalid fragment offset/len: %d + %d > %d", v22);
        v15 = 0xffff8e00;
        v14 = (int64_t)"ssl_reassemble_dtls_handshake";
        v16 = (int64_t)&g121;
        goto lab_0x49ac63;
    } else {
        // 0x49ae01
        v36 = v33 + 12;
        if (v36 > *v1) {
            // 0x49b225
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g108, "invalid fragment length: %d + 12 > %d", v33);
            v15 = 0xffff8e00;
            v14 = (int64_t)"ssl_reassemble_dtls_handshake";
            v16 = (int64_t)&g121;
            goto lab_0x49ac63;
        } else {
            // 0x49ae15
            v37 = v39 + v40;
            function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g109, "adding fragment, offset = %d, length = %d", v22);
            int64_t v41 = *v5; // 0x49ae4d
            memcpy((int64_t *)(v22 + (0x100000000 * v39 + 0xc00000000 >> 32)), (int64_t *)(v41 + 12), (int32_t)v33);
            uint64_t v42 = v30 % 8; // 0x49ae6e
            v35 = v33;
            v34 = v22;
            if (v42 == 0) {
                goto lab_0x49b0b4;
            } else {
                int64_t v43 = 8 - v42; // 0x49ae72
                uint64_t v44 = v22 / 8; // 0x49ae83
                if (v33 > v43) {
                    char * v45 = (char *)(v44 + v37); // 0x49b097
                    int64_t v46 = v43 + 0xffffffff; // 0x49b0a0
                    uint32_t v47 = (int32_t)v46; // 0x49b0a8
                    int64_t v48 = (int64_t)*v45 | (int64_t)(1 << v47 % 32); // 0x49b0ab
                    int64_t v49 = v46 & 0xffffffff; // 0x49b0b0
                    int64_t v50 = v48; // 0x49b0b0
                    while (v47 != 0) {
                        // 0x49b0a0
                        v46 = v49 + 0xffffffff;
                        v47 = (int32_t)v46;
                        v48 = v50 | (int64_t)(1 << v47 % 32);
                        v49 = v46 & 0xffffffff;
                        v50 = v48;
                    }
                    // 0x49b0b2
                    *v45 = (char)v48;
                    v35 = v33 - v43;
                    v34 = v43 + v22;
                    goto lab_0x49b0b4;
                } else {
                    if (v33 != 0) {
                        char * v51 = (char *)(v44 + v37); // 0x49ae9e
                        int64_t v52 = (int64_t)*v51; // 0x49aea1
                        int64_t v53 = v33; // 0x49aea1
                        int64_t v54 = v52 | (int64_t)(1 << ((int32_t)v43 - (int32_t)v53) % 32);
                        v53--;
                        v52 = v54;
                        while (v53 != 0) {
                            // 0x49aea8
                            v54 = v52 | (int64_t)(1 << ((int32_t)v43 - (int32_t)v53) % 32);
                            v53--;
                            v52 = v54;
                        }
                        // 0x49aebb
                        *v51 = (char)v54;
                    }
                    goto lab_0x49aebd;
                }
            }
        }
    }
  lab_0x49b0b4:;
    uint64_t v55 = v35 % 8; // 0x49b0b7
    int64_t v56 = v35; // 0x49b0be
    if (v55 != 0) {
        char * v57 = (char *)((v34 + v35) / 8 + v37); // 0x49b0db
        int64_t v58 = 8 - v55; // 0x49b0de
        int64_t v59 = v58 + 1; // 0x49b0e4
        int64_t v60 = (int64_t)*v57 | (int64_t)(1 << (int32_t)v58 % 32);
        int64_t v61 = v60; // 0x49b0ec
        v58 = v59 & 0xffffffff;
        while ((int32_t)v59 != 8) {
            // 0x49b0e0
            v59 = v58 + 1;
            v60 = v61 | (int64_t)(1 << (int32_t)v58 % 32);
            v61 = v60;
            v58 = v59 & 0xffffffff;
        }
        // 0x49b0ee
        *v57 = (char)v60;
        v56 = v35 - v55;
    }
    // 0x49b0f0
    memset2((void *)(int64_t)((int64_t *)(v34 / 8 + v37)), 255, (int32_t)(v56 / 8));
    goto lab_0x49aebd;
  lab_0x49aebd:;
    uint64_t v62 = v38 / 8; // 0x49aec0
    if (v38 < 8) {
        goto lab_0x49aef3;
    } else {
        // 0x49aec9
        if (*(char *)v37 != -1) {
            goto lab_0x49b048_2;
        } else {
            int64_t v63 = v37; // 0x49aedb
            v63++;
            while (v63 != v37 + v62) {
                // 0x49aee0
                if (*(char *)v63 != -1) {
                    goto lab_0x49b048_2;
                }
                v63++;
            }
            goto lab_0x49aef3;
        }
    }
  lab_0x49aef3:;
    uint32_t v64 = (int32_t)v38 % 8; // 0x49aef3
    if (v64 == 0) {
        goto lab_0x49af2e;
    } else {
        unsigned char v65 = *(char *)(v37 + v62); // 0x49aef9
        if (v65 > -1) {
            goto lab_0x49b048_2;
        } else {
            int64_t v66 = 0; // 0x49af25
            v66++;
            while (v66 != (int64_t)v64) {
                // 0x49af18
                if ((1 << (7 - (int32_t)v66) % 32 & (int32_t)v65) == 0) {
                    goto lab_0x49b048_2;
                }
                v66++;
            }
            goto lab_0x49af2e;
        }
    }
  lab_0x49af2e:
    // 0x49af2e
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g111, "handshake message completed", v22);
    v23 = (int64_t)&g112;
    v24 = (int64_t)"last fragment not alone in its record";
    v25 = v22;
    if (v36 < *v1) {
        goto lab_0x49b290;
    } else {
        int64_t * v67 = (int64_t *)(a1 + 232); // 0x49af5d
        uint64_t v68 = *v67; // 0x49af5d
        int64_t * v69 = (int64_t *)(a1 + 248); // 0x49af64
        uint64_t v70 = *v69; // 0x49af64
        if (v68 > v70) {
            int64_t v71 = *(int64_t *)(a1 + 176); // 0x49af70
            int64_t v72 = v68 - v70; // 0x49af7e
            int64_t v73 = *v10 + *v5; // 0x49af81
            int64_t v74 = v73 - v71; // 0x49af96
            *v69 = v74;
            uint64_t v75 = v74 + v72; // 0x49afa9
            *v67 = v75;
            if (v75 > (int64_t)&g38 - v71 + *(int64_t *)(a1 + 160)) {
                // 0x49b258
                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g113, "reassembled message too large for buffer", v22);
                v15 = 0xffff9600;
                v14 = (int64_t)"ssl_reassemble_dtls_handshake";
                v16 = (int64_t)&g121;
                goto lab_0x49ac63;
            } else {
                // 0x49afbc
                memmove((int64_t *)v73, (int64_t *)(v71 + v70), (int32_t)v72);
                goto lab_0x49afc1;
            }
        } else {
            goto lab_0x49afc1;
        }
    }
  lab_0x49afc1:;
    int64_t v76 = *(int64_t *)(*v12 + (int64_t)&g30); // 0x49afd3
    memcpy((int64_t *)*v5, (int64_t *)v76, (int32_t)*v10);
    free((int64_t *)*(int64_t *)(*v12 + (int64_t)&g30));
    int64_t v77 = *v5; // 0x49aff3
    *(int64_t *)(*v12 + (int64_t)&g30) = 0;
    int64_t v78 = *v10; // 0x49b020
    function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_tls.c", &g114, "reassembled handshake message", v77, v78);
    return 0;
}

// Address range: 0x4a1270 - 0x4a3b2e
int64_t function_4a1270(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int32_t * v1 = (int32_t *)(a1 + 8); // 0x4a1298
    uint32_t v2 = *v1; // 0x4a1298
    if (v2 == 16) {
        // 0x4a1340
        return 0xffff8f00;
    }
    int64_t * v3 = (int64_t *)(a1 + 96); // 0x4a12a6
    if (*v3 == 0) {
        // 0x4a1340
        return 0xffff8f00;
    }
    // 0x4a12b1
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_cli.c", &g132, "client state: %d", (int64_t)v2);
    int64_t v4 = function_496540(a1); // 0x4a12d3
    if ((int32_t)v4 != 0) {
        // 0x4a1340
        return v4 & 0xffffffff;
    }
    char * v5 = (char *)(a1 + 372); // 0x4a12e3
    if ((*v5 & 2) != 0) {
        // 0x4a12ec
        if (*(char *)(*v3 + (int64_t)&g31) == 1) {
            int64_t v6 = function_49a910(a1); // 0x4a15d3
            if ((int32_t)v6 != 0) {
                // 0x4a1340
                return v6 & 0xffffffff;
            }
        }
    }
    uint32_t v7 = *v1; // 0x4a12fd
    int64_t v8 = v7; // 0x4a12fd
    if (v7 != 12) {
        if (v7 < 18) {
            int32_t v9 = *(int32_t *)(4 * v8 + (int64_t)&g55); // 0x4a138a
            return (int64_t)v9 + (int64_t)&g55;
        }
        // 0x4a1311
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g133, "invalid state %d", v8);
        // 0x4a1340
        return 0xffff8f00;
    }
    // 0x4a1398
    if (*(int32_t *)(*v3 + (int64_t)&g99) == 0) {
        // 0x4a1340
        return function_49daf0(a1) & 0xffffffff;
    }
    // 0x4a13b8
    *v1 = 17;
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_cli.c", &g123, "=> parse new session ticket", v8);
    int64_t v10 = function_49d220(a1); // 0x4a13e5
    int64_t result = v10 & 0xffffffff; // 0x4a13ec
    if ((int32_t)v10 != 0) {
        // 0x4a1c5f
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g124, "mbedtls_ssl_read_record", result);
        // 0x4a1340
        return result;
    }
    // 0x4a13f5
    if (*(int32_t *)(a1 + 216) != 22) {
        // 0x4a2fc4
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g125, "bad new session ticket message", v8);
        // 0x4a1340
        return 0xffff8900;
    }
    int64_t v11 = *(int64_t *)(a1 + 200); // 0x4a1403
    if (*(char *)v11 != 4) {
        // 0x4a2af4
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g126, "bad new session ticket message", v8);
        // 0x4a1340
        return 0xffff9200;
    }
    uint64_t v12 = *(int64_t *)(a1 + 272); // 0x4a1417
    int64_t v13; // 0x4a1270
    int64_t v14; // 0x4a1270
    int64_t v15; // 0x4a1270
    int64_t v16; // 0x4a1270
    int64_t v17; // 0x4a1270
    int64_t v18; // 0x4a1270
    if ((*v5 & 2) == 0) {
        if (v12 < 10) {
            // 0x4a2af4
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g126, "bad new session ticket message", v8);
            // 0x4a1340
            return 0xffff9200;
        }
        unsigned char v19 = *(char *)(v11 + 9); // 0x4a3aad
        v14 = v11 + 4;
        v15 = v11 + 5;
        v16 = v11 + 7;
        v13 = v11 + 6;
        v17 = 10;
        v18 = 256 * (int64_t)*(char *)(v11 + 8) | (int64_t)v19;
    } else {
        if (v12 < 18) {
            // 0x4a2af4
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g126, "bad new session ticket message", v8);
            // 0x4a1340
            return 0xffff9200;
        }
        unsigned char v20 = *(char *)(v11 + 17); // 0x4a145b
        v14 = v11 + 12;
        v15 = v11 + 13;
        v16 = v11 + 15;
        v13 = v11 + 14;
        v17 = 18;
        v18 = 256 * (int64_t)*(char *)(v11 + 16) | (int64_t)v20;
    }
    // 0x4a146d
    if (v12 != v18 + v17) {
        // 0x4a29d9
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g127, "bad new session ticket message", v8);
        // 0x4a1340
        return 0xffff9200;
    }
    unsigned char v21 = *(char *)v14;
    unsigned char v22 = *(char *)v13;
    unsigned char v23 = *(char *)v16;
    char v24 = *(char *)v15;
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g128, "ticket length: %d", v18);
    *(int32_t *)(*v3 + (int64_t)&g99) = 0;
    *v1 = 12;
    if (v18 == 0) {
        // 0x4a1340
        return result;
    }
    int64_t * v25 = (int64_t *)(a1 + 88); // 0x4a14bf
    int64_t v26 = *v25; // 0x4a14bf
    int64_t v27 = *(int64_t *)(v26 + 128); // 0x4a14c3
    int64_t v28 = *(int64_t *)(v26 + 120); // 0x4a14ca
    int64_t v29 = v28; // 0x4a14d1
    if (v27 != 0) {
        int64_t v30 = v28; // 0x4a14d6
        *(char *)v30 = 0;
        v30++;
        while (v30 != v28 + v27) {
            // 0x4a14e0
            *(char *)v30 = 0;
            v30++;
        }
        // 0x4a14ec
        v29 = *(int64_t *)(*v25 + 120);
    }
    // 0x4a14f4
    free((int64_t *)v29);
    int64_t v31 = *v25; // 0x4a14f9
    *(int64_t *)(v31 + 120) = 0;
    *(int64_t *)(v31 + 128) = 0;
    int32_t size = v18; // 0x4a1518
    int64_t * mem = calloc(1, size); // 0x4a1518
    int64_t result2; // 0x4a1270
    if (mem == NULL) {
        // 0x4a3733
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g129, "ticket alloc failed", v18);
        result2 = 0xffff8100;
    } else {
        // 0x4a1529
        memcpy(mem, (int64_t *)(v14 + 6), size);
        int64_t v32 = *v25; // 0x4a1545
        *(int64_t *)(v32 + 120) = (int64_t)mem;
        *(int64_t *)(v32 + 128) = v18;
        *(int32_t *)(v32 + 136) = 0x1000000 * (int32_t)v21 | (int32_t)v23 | 256 * (int32_t)v22 | 0x10000 * (int32_t)v24 & 0xff0000;
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g130, "ticket in use, discarding session id", v18);
        *(int64_t *)(*v25 + 16) = 0;
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_cli.c", &g131, "<= parse new session ticket", v18);
        result2 = result;
    }
    // 0x4a1340
    return result2;
}

// Address range: 0x4ea390 - 0x4ed138
int64_t ZydisDecoderDecodeInstruction(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, char a7, int64_t a8, char a9, int32_t a10, char a11, char a12, char a13, char a14, char a15, int32_t a16, char a17, char a18, char a19, char a20) {
    // 0x4ea390
    int128_t v1; // 0x4ea390
    int128_t v2 = v1;
    int64_t v3 = a5;
    int64_t v4 = __readfsqword(40); // 0x4ea3ab
    int64_t v5 = a1; // 0x4ea3d8
    int64_t result = 0x80100004; // 0x4ea3d8
    int64_t v6 = 0; // 0x4ea3d8
    int64_t v7 = a4; // 0x4ea3d8
    int64_t v8; // 0x4ea390
    int64_t v9; // 0x4ea390
    int64_t v10; // 0x4ea390
    int64_t v11; // 0x4ea390
    int64_t v12; // 0x4ea390
    int64_t v13; // 0x4ea390
    int64_t v14; // 0x4ea390
    int64_t v15; // 0x4ea390
    int64_t v16; // 0x4ea390
    int64_t v17; // 0x4ea390
    int64_t v18; // 0x4ea390
    int64_t v19; // 0x4ea390
    int64_t v20; // 0x4ea390
    int64_t v21; // 0x4ea390
    int64_t v22; // 0x4ea390
    int64_t v23; // 0x4ea390
    int64_t v24; // 0x4ea390
    int64_t v25; // 0x4ea390
    int64_t v26; // 0x4ea390
    int64_t v27; // bp-120, 0x4ea390
    char v28; // 0x4ea390
    char v29; // 0x4ea390
    char v30; // 0x4ea390
    char v31; // 0x4ea390
    char v32; // 0x4ea390
    char v33; // 0x4ea390
    char v34; // 0x4ea390
    char v35; // 0x4ea390
    char v36; // 0x4ea390
    char v37; // 0x4ea390
    char v38; // 0x4ea390
    char v39; // 0x4ea390
    char v40; // 0x4ea390
    char v41; // 0x4ea390
    char v42; // 0x4ea390
    char v43; // 0x4ea390
    char v44; // 0x4ea390
    char v45; // 0x4ea390
    char v46; // 0x4ea390
    char v47; // 0x4ea390
    char v48; // 0x4ea390
    char v49; // 0x4ea390
    char v50; // 0x4ea390
    char v51; // 0x4ea390
    char v52; // 0x4ea390
    char v53; // 0x4ea390
    char v54; // 0x4ea390
    char v55; // 0x4ea390
    char v56; // 0x4ea390
    char v57; // 0x4ea390
    char v58; // 0x4ea390
    char v59; // 0x4ea390
    char v60; // 0x4ea390
    char v61; // 0x4ea390
    char v62; // 0x4ea390
    char v63; // 0x4ea390
    char v64; // 0x4ea390
    char v65; // 0x4ea390
    char v66; // 0x4ea390
    char v67; // 0x4ea390
    char v68; // 0x4ea390
    char v69; // 0x4ea390
    char v70; // 0x4ea390
    char v71; // 0x4ea390
    char v72; // 0x4ea390
    char v73; // 0x4ea390
    char v74; // 0x4ea390
    char v75; // 0x4ea390
    char v76; // 0x4ea390
    char v77; // 0x4ea390
    int64_t v78; // 0x4ea390
    int64_t v79; // 0x4ea3fb
    int64_t v80; // 0x4ea40c
    int64_t * v81; // 0x4ea390
    char * v82; // 0x4ea390
    char * v83; // 0x4ea390
    char v84; // 0x4ea390
    int64_t * v85; // 0x4ea390
    char * v86; // 0x4ea390
    unsigned char v87; // 0x4ea5eb
    unsigned char v88; // 0x4ea4c0
    int64_t v89; // 0x4ea4c0
    if (a1 != 0 && a3 != 0 && a5 != 0) {
        // 0x4ea3de
        v5 = a1;
        result = 0x80200000;
        v6 = 0;
        v7 = 0;
        if (a4 != 0) {
            // 0x4ea3e7
            v27 = a1;
            int64_t v90; // bp-152, 0x4ea390
            v79 = a2 == 0 ? (int64_t)&v90 : a2;
            int64_t v91 = v3 + 8 & -8; // 0x4ea404
            int128_t v92 = __asm_pxor(v2, v2); // 0x4ea408
            v80 = v3;
            __asm_movups(*(int128_t *)v79, v92);
            __asm_movups(*(int128_t *)(v79 + 16), v92);
            __asm_movaps(v92);
            *(int64_t *)v3 = 0;
            *(int64_t *)(v3 + 320) = 0;
            __asm_rep_stosq_memset((char *)v91, 0, (v3 + 328 - v91) / 8 % 0x20000000);
            v3 = 0;
            uint32_t v93 = *(int32_t *)(a1 + 4) % 32; // 0x4ea470
            *(int32_t *)v80 = 0;
            *(char *)(v80 + 21) = v93 == 0 ? 16 : (char)(16 << v93);
            if ((int32_t)v3 != 0) {
                // 0x4ea5e2
                v81 = (int64_t *)(v80 + 32);
                v82 = (char *)(v80 + 112);
                v17 = 0;
                v13 = 0;
                v21 = a3;
                v25 = a4;
                while (true) {
                  lab_0x4ea5e2:
                    // 0x4ea5e2
                    v26 = v25;
                    v14 = v13;
                    v39 = v38;
                    v68 = v67;
                    v60 = v59;
                    v76 = v75;
                    v18 = v17;
                    v5 = v18;
                    v30 = -1;
                    v72 = v76;
                    v56 = v60;
                    v64 = v68;
                    v35 = v39;
                    result = 0x80200000;
                    v6 = v14;
                    v10 = v80;
                    v7 = 0;
                    if (v26 == 0) {
                        // break -> 0x4ea48e
                        break;
                    }
                    // 0x4ea5eb
                    v22 = v21;
                    v46 = v45;
                    v52 = v51;
                    v87 = *(char *)v22;
                    if (v87 < 104) {
                        if (v87 < 46) {
                            if (v87 != 38) {
                                goto lab_0x4ea790_3;
                            }
                            goto lab_0x4ea70b;
                        } else {
                            if ((1 << (int64_t)((v87 + 18) % 64) & 0xc0000000010101) == 0) {
                                if (v87 == 103) {
                                    // 0x4eba2d
                                    *v81 = *v81 | 0x100000000000;
                                    v77 = v76;
                                    v61 = v60;
                                    v53 = v52;
                                    v69 = v68;
                                    v40 = v39;
                                    v47 = v14;
                                } else {
                                    if (v87 != 102) {
                                        goto lab_0x4ea790_3;
                                    }
                                    // 0x4ea626
                                    *v81 = *v81 | 0x80000000000;
                                    v77 = v76;
                                    v61 = v60;
                                    v53 = v14;
                                    v69 = v68;
                                    v40 = v39;
                                    v47 = v46;
                                }
                                goto lab_0x4ea726;
                            } else {
                                goto lab_0x4ea70b;
                            }
                        }
                    } else {
                        // 0x4ea680
                        v77 = v76;
                        v61 = v60;
                        v53 = v52;
                        v69 = v68;
                        v40 = v39;
                        v47 = v46;
                        if (v87 != -16) {
                            if ((v87 & -2) != -14) {
                                goto lab_0x4ea790_3;
                            }
                            // 0x4ea696
                            v77 = v76;
                            v61 = v60;
                            v53 = v52;
                            v69 = v14;
                            v40 = v39;
                            v47 = v46;
                        }
                        goto lab_0x4ea726;
                    }
                }
            } else {
                // 0x4ea484
                v83 = (char *)(v80 + 244);
                v85 = (int64_t *)(v80 + 32);
                v86 = (char *)(v80 + 112);
                v15 = 0;
                v28 = -1;
                v11 = 0;
                v19 = a3;
                v23 = a4;
                v8 = 0;
                while (true) {
                  lab_0x4ea484:
                    // 0x4ea484
                    v24 = v23;
                    v12 = v11;
                    v34 = v33;
                    v63 = v62;
                    v55 = v54;
                    v71 = v70;
                    v29 = v28;
                    v16 = v15;
                    v5 = v16;
                    v30 = v29;
                    v72 = v71;
                    v56 = v55;
                    v64 = v63;
                    v35 = v34;
                    result = 0x80200000;
                    v6 = v12;
                    v10 = v80;
                    v7 = v24;
                    if (v24 == 0) {
                        // break -> 0x4ea48e
                        break;
                    }
                    // 0x4ea4c0
                    v9 = v8;
                    v20 = v19;
                    v49 = v48;
                    v88 = *(char *)v20;
                    v89 = v88;
                    if (v88 == 103) {
                        // 0x4ea6b8
                        *v85 = *v85 | 0x100000000000;
                        v31 = v29;
                        v73 = v71;
                        v57 = v55;
                        v65 = v63;
                        v36 = v34;
                        v43 = v12;
                        goto lab_0x4ea550;
                    } else {
                        // 0x4ea4cb
                        v42 = v41;
                        if (v88 < 104) {
                            if (v88 == 102) {
                                int64_t v94 = *v85; // 0x4ea545
                                *v85 = v94 | 0x80000000000;
                                v31 = v29;
                                v73 = v71;
                                v57 = v55;
                                v65 = v63;
                                v36 = v34;
                                v43 = v42;
                                goto lab_0x4ea550;
                            } else {
                                if (v88 < 100) {
                                    if (v88 < 63) {
                                        if ((1 << v89 % 64) % 0x4040404000000001 == 0) {
                                            goto lab_0x4ebc2c_3;
                                        }
                                        char v95 = v12;
                                        v31 = (v84 | 1) == 101 | v88 != 62 ? v29 : v95;
                                        v73 = v88;
                                        v57 = v95;
                                        v65 = v63;
                                        v36 = v34;
                                        v43 = v42;
                                        goto lab_0x4ea550;
                                    } else {
                                        if ((v89 & 240) != 64) {
                                            goto lab_0x4ebc2c_3;
                                        }
                                        // 0x4ea6f5
                                        *v83 = (char)v12;
                                        v32 = v29;
                                        v74 = v71;
                                        v58 = v55;
                                        v50 = v49;
                                        v66 = v63;
                                        v37 = v34;
                                        v44 = v42;
                                        v78 = v89;
                                        goto lab_0x4ea558;
                                    }
                                } else {
                                    char v96 = v12; // 0x4ea65b
                                    v31 = -1;
                                    v73 = v88;
                                    v57 = v96;
                                    v65 = v63;
                                    v36 = v96;
                                    v43 = v42;
                                    goto lab_0x4ea550;
                                }
                            }
                        } else {
                            // 0x4ea5a8
                            v31 = v29;
                            v73 = v71;
                            v57 = v55;
                            v65 = v63;
                            v36 = v34;
                            v43 = v42;
                            if (v88 != -16) {
                                if ((v88 || 1) != -13) {
                                    goto lab_0x4ebc2c_3;
                                }
                                // 0x4ea5be
                                v31 = v29;
                                v73 = v71;
                                v57 = v55;
                                v65 = v12;
                                v36 = v34;
                                v43 = v42;
                            }
                            goto lab_0x4ea550;
                        }
                    }
                }
            }
        }
    }
    goto lab_0x4ea48e_3;
  lab_0x4ec1d6:;
    // 0x4ec1d6
    int64_t * v99; // 0x4ea390
    int64_t v237 = *v99; // 0x4ec1d6
    int64_t v106; // 0x4ea390
    uint32_t v238 = (int32_t)v106 & 16; // 0x4ec1e3
    *v99 = v237 | 0x2000000;
    int64_t v239 = v238; // 0x4ec1ea
    int64_t v102; // 0x4ea390
    if (v30 >= 0 && v238 != 0) {
        // 0x4ec1f9
        *v99 = v237 | 0x2000000 * (int64_t)&g69;
        *(int32_t *)(v102 + 8 * (int64_t)v30) = 1;
        v239 = 0x2000000 * (int64_t)&g69;
    }
    int64_t v240 = v239;
    int64_t v110 = v240; // 0x4ec214
    int64_t v111; // 0x4ea390
    int64_t v107; // 0x4ea390
    if ((v107 & 32) == 0) {
        goto lab_0x4ebf4d;
    } else {
        // 0x4ec21a
        v110 = v240;
        v111 = v240;
        if ((char)v3 != 0) {
            goto lab_0x4ebf4d;
        } else {
            goto lab_0x4ec223;
        }
    }
  lab_0x4ebf4d:
    // 0x4ebf4d
    if ((char)function_20700() != 0) {
        // 0x4ebf5b
        *v99 = *v99 | (int64_t)&g19;
    }
    // 0x4ebf63
    int64_t v98; // 0x4ea390
    int64_t v241; // bp-160, 0x4ea390
    *(int64_t *)(v98 + 40) = v241;
    *(int64_t *)(v98 + 48) = v241 + 20;
    *(int32_t *)(v98 + 236) = *(int32_t *)(v98 + 12);
    int64_t v242 = v4 - __readfsqword(40); // 0x4ea496
    int64_t v103 = v242; // 0x4ea49f
    int64_t v104 = (int64_t)&v241; // 0x4ea49f
    int64_t v105 = v110; // 0x4ea49f
    if (v242 == 0) {
        // break -> 0x4ea4a5
        goto lab_0x4ea4a5_2;
    }
    goto lab_0x4ec77d;
  lab_0x4ec223:;
    int64_t v243 = v111;
    uint64_t v244 = *v99; // 0x4ec223
    int64_t v245 = v244 | 0x4000000; // 0x4ec22a
    *v99 = v245;
    int64_t v246 = v245; // 0x4ec23f
    if (v84 != 0 == v244 % 0x1000000001 == 0) {
        if (v84 == 62) {
            int64_t v247 = v244 | 0x4000000 * (int64_t)&g20; // 0x4ed00d
            *v99 = v247;
            v246 = v247;
        } else {
            if (v84 < 63) {
                switch (v84) {
                    case 46: {
                        int64_t v248 = v244 | 0x4000000 * (int64_t)&g69; // 0x4ecfde
                        *v99 = v248;
                        v246 = v248;
                        // break -> 0x4ec279
                        break;
                    }
                    case 54: {
                        int64_t v249 = v244 | 0x4000000 * (int64_t)&g3; // 0x4ecfc9
                        *v99 = v249;
                        v246 = v249;
                        // break -> 0x4ec279
                        break;
                    }
                    default: {
                        int64_t v250 = v244 | 0x4000000 * (int64_t)&g37; // 0x4ec272
                        *v99 = v250;
                        v246 = v250;
                        // break -> 0x4ec279
                        break;
                    }
                }
            } else {
                if (v84 == 100) {
                    int64_t v251 = v244 | 0x4000000 * (int64_t)&g68; // 0x4ed022
                    *v99 = v251;
                    v246 = v251;
                } else {
                    int64_t v252 = v244 | 0x4000000 * (int64_t)&g2; // 0x4ecff8
                    *v99 = v252;
                    v246 = v252;
                }
            }
        }
    }
    // 0x4ec279
    v110 = v243;
    if (v246 % 0x7e000000001 != 0) {
        // 0x4ec28c
        *(int32_t *)(v102 + 8 * (int64_t)v35) = 1;
        v110 = v243;
    }
    goto lab_0x4ebf4d;
  lab_0x4ea790_3:;
    int64_t v253 = v18 == 0 ? a4 : v26;
    int64_t v254 = v18 == 0 ? a3 : v22;
    uint64_t v255 = *v81; // 0x4ea7a5
    int64_t v221; // 0x4ea390
    int64_t v231; // 0x4ea390
    int64_t v230; // 0x4ea390
    int64_t v127; // 0x4ea390
    int64_t v229; // 0x4ea390
    int64_t v167; // 0x4ea390
    char v223; // 0x4ea390
    char v157; // 0x4ea390
    char v115; // 0x4ea390
    char v227; // 0x4ea390
    char v165; // 0x4ea390
    char v125; // 0x4ea390
    char v228; // 0x4ea390
    char v225; // 0x4ea390
    char v161; // 0x4ea390
    char v116; // 0x4ea390
    char v226; // 0x4ea390
    char v163; // 0x4ea390
    char v123; // 0x4ea390
    char v224; // 0x4ea390
    char v159; // 0x4ea390
    char v114; // 0x4ea390
    int64_t v118; // 0x4ea390
    int64_t v222; // 0x4ea390
    int64_t v155; // 0x4ea390
    if (v255 % 0x80000000001 == 0) {
        // 0x4ea7b4
        v118 = v253;
        v115 = -1;
        v114 = v76;
        v116 = v60;
        v123 = v68;
        v125 = v39;
        v127 = v254;
        if (v255 % 0x100000000001 == 0) {
            goto lab_0x4ea7cb;
        } else {
            // 0x4ea7bb
            *(int32_t *)(v80 + 116 + 8 * (int64_t)v46) = 1;
            v118 = v253;
            v115 = -1;
            v114 = v76;
            v116 = v60;
            v123 = v68;
            v125 = v39;
            v127 = v254;
            goto lab_0x4ea7cb;
        }
    } else {
        int64_t v256 = v80 + 116;
        *(int32_t *)(8 * (int64_t)v52 + v256) = 1;
        v221 = v256;
        v222 = v253;
        v223 = -1;
        v224 = v76;
        v225 = v60;
        v226 = v68;
        v227 = v39;
        v228 = v46;
        v229 = v254;
        v230 = v255;
        v231 = 0;
        v155 = v253;
        v157 = -1;
        v159 = v76;
        v161 = v60;
        v163 = v68;
        v165 = v39;
        v167 = v254;
        if (v255 % 0x100000000001 == 0) {
            goto lab_0x4ebcd0;
        } else {
            goto lab_0x4ebc63;
        }
    }
  lab_0x4ea726:;
    unsigned char v257 = *v82; // 0x4ea726
    int64_t v258 = v14 + 1; // 0x4ea72a
    int64_t v259 = v258 & 0xffffffff; // 0x4ea72a
    int64_t v260 = v26 - 1; // 0x4ea72d
    *v82 = v257 + 1;
    *(char *)(v80 + 120 + 8 * (int64_t)v257) = v87;
    char v261 = v258; // 0x4ea746
    *(char *)(v80 + 8) = v261;
    v5 = 1;
    v30 = -1;
    v72 = v77;
    v56 = v61;
    v64 = v69;
    v35 = v40;
    result = 0x80200002;
    v6 = v259;
    v10 = v80;
    v7 = v260;
    v17 = 1;
    v75 = v77;
    v59 = v61;
    v51 = v53;
    v67 = v69;
    v38 = v40;
    v45 = v47;
    v13 = v259;
    v21 = v22 + 1;
    v25 = v260;
    if (v261 == 15) {
        // break -> 0x4ea48e
        goto lab_0x4ea48e_3;
    }
    goto lab_0x4ea5e2;
  lab_0x4ea70b:;
    char v262 = v14; // 0x4ea70e
    v77 = v87;
    v61 = v262;
    v53 = v52;
    v69 = v68;
    v40 = v262;
    v47 = v46;
    goto lab_0x4ea726;
  lab_0x4ebc2c_3:;
    uint64_t v220 = *v85; // 0x4ebc41
    if (v220 % 0x80000000001 == 0) {
        goto lab_0x4ebc5c;
    } else {
        // 0x4ebc4c
        *(int32_t *)(v80 + 116 + 8 * (int64_t)v49) = 1;
        goto lab_0x4ebc5c;
    }
  lab_0x4ea550:;
    char v263 = v43;
    char v264 = v36;
    char v265 = v65;
    char v266 = v49;
    char v267 = v57;
    char v268 = v73;
    char v269 = v31;
    char v270 = v9; // 0x4ea550
    v32 = v269;
    v74 = v268;
    v58 = v267;
    v50 = v266;
    v66 = v265;
    v37 = v264;
    v44 = v263;
    v78 = 0;
    if (v270 != 0) {
        // 0x4ea590
        v32 = v269;
        v74 = v268;
        v58 = v267;
        v50 = v266;
        v66 = v265;
        v37 = v264;
        v44 = v263;
        v78 = v89;
        if (v88 != v270) {
            // 0x4ea599
            *v83 = 0;
            v32 = v269;
            v74 = v268;
            v58 = v267;
            v50 = v266;
            v66 = v265;
            v37 = v264;
            v44 = v263;
            v78 = 0;
        }
    }
    goto lab_0x4ea558;
  lab_0x4ea558:;
    unsigned char v271 = *v86; // 0x4ea558
    int64_t v272 = v12 + 1; // 0x4ea55c
    int64_t v273 = v272 & 0xffffffff; // 0x4ea55c
    int64_t v274 = v24 - 1; // 0x4ea55f
    *v86 = v271 + 1;
    *(char *)(v80 + 120 + 8 * (int64_t)v271) = v88;
    char v275 = v272; // 0x4ea578
    *(char *)(v80 + 8) = v275;
    v15 = 1;
    v28 = v32;
    v70 = v74;
    v54 = v58;
    v48 = v50;
    v62 = v66;
    v33 = v37;
    v41 = v44;
    v11 = v273;
    v19 = v20 + 1;
    v23 = v274;
    v8 = v78;
    v5 = 1;
    v30 = v32;
    v72 = v74;
    v56 = v58;
    v64 = v66;
    v35 = v37;
    result = 0x80200002;
    v6 = v273;
    v10 = v80;
    v7 = v274;
    if (v275 == 15) {
        // break -> 0x4ea48e
        goto lab_0x4ea48e_3;
    }
    goto lab_0x4ea484;
  lab_0x4ea48e_3:;
    int64_t v97 = v4 - __readfsqword(40); // 0x4ea496
    if (v97 == 0) {
        // 0x4ea4a5
        return result;
    }
    // 0x4ec77d
    v98 = v10;
    v99 = (int64_t *)(v98 + 32);
    int64_t v100 = v64;
    int64_t v101 = v100 + 14;
    v102 = v98 + 116;
    v103 = v97;
    v104 = v7;
    v105 = v6;
    while (true) {
      lab_0x4ec77d:
        // 0x4ec77d
        v106 = v105;
        v107 = v104;
        int64_t v108 = v103;
        __stack_chk_fail();
        if ((v108 & 0x400000) != 0) {
            if ((v108 & 0x8000000) != 0 || (char)&g137 < 0) {
                // 0x4ec79e
                *v99 = v108 | 0x200000000;
            }
        }
        // 0x4ec143
        v3 = v101;
        if (*(int32_t *)(v102 + 8 * v100) == 0) {
            // 0x4ec157
            if ((*v99 & 0x3f0000000) != 0) {
                // 0x4ec167
                *(int32_t *)((8 * v101 | 4) + v98) = 1;
            }
        }
        unsigned char v109 = *(char *)(v5 + 13) % 2;
        v3 = v109;
        if (v109 == 0) {
            if ((char)((int64_t)&g137 & 64) != 0) {
                goto lab_0x4ec1d6;
            } else {
                // 0x4ec2cc
                v110 = v106;
                v111 = v106;
                if ((v107 & 32) == 0) {
                    goto lab_0x4ebf4d;
                } else {
                    goto lab_0x4ec223;
                }
            }
        } else {
            int64_t v112 = *v99; // 0x4ec182
            *v99 = v112 | 0x1000000;
            if ((v72 || 16) == 62) {
                // 0x4ec1b7
                *v99 = v112 | (v72 == 46 ? 0x401000000 : 0x801000000);
                *(int32_t *)(v102 + 8 * (int64_t)v56) = 1;
            }
            // 0x4ec1ce
            v110 = v106;
            if ((char)((int64_t)&g137 & 64) == 0) {
                goto lab_0x4ebf4d;
            } else {
                goto lab_0x4ec1d6;
            }
        }
    }
  lab_0x4ea4a5_2:;
    // 0x4ea4a5
    int64_t result2; // 0x4ea390
    return result2;
  lab_0x4ea7cb:;
    char v113 = v114 != 62 ? v115 : v116;
    int64_t v117 = v118; // 0x4ea390
    char v119 = v113; // 0x4ea390
    char v120 = v114; // 0x4ea390
    char v121 = v116; // 0x4ea390
    char v122 = v123; // 0x4ea390
    char v124 = v125; // 0x4ea390
    int64_t v126 = v127; // 0x4ea390
    goto lab_0x4ea7e4;
  lab_0x4ebcd0:
    // 0x4ebcd0
    v118 = v155;
    v115 = v157;
    v114 = v159;
    v116 = v161;
    v123 = v163;
    v125 = v165;
    v127 = v167;
    v117 = v155;
    v119 = v157;
    v120 = v159;
    v121 = v161;
    v122 = v163;
    v124 = v165;
    v126 = v167;
    if ((int32_t)v3 == 0) {
        goto lab_0x4ea7e4;
    } else {
        goto lab_0x4ea7cb;
    }
  lab_0x4ebc63:
    // 0x4ebc63
    *(int32_t *)(8 * (int64_t)v228 + v221) = 1;
    int64_t v156 = v222; // 0x4ebc6b
    char v158 = v223; // 0x4ebc6b
    char v160 = v224; // 0x4ebc6b
    char v162 = v225; // 0x4ebc6b
    char v164 = v226; // 0x4ebc6b
    char v166 = v227; // 0x4ebc6b
    int64_t v168 = v229; // 0x4ebc6b
    int64_t v169 = v230; // 0x4ebc6b
    int64_t v154 = v231; // 0x4ebc6b
    goto lab_0x4ebc73;
  lab_0x4ea7e4:;
    unsigned char v128 = *g87; // 0x4ea800
    if (v128 < 30) {
        int32_t v129 = *(int32_t *)(4 * (int64_t)v128 + (int64_t)&g57); // 0x4ea80c
        return (int64_t)v129 + (int64_t)&g57;
    }
    int64_t v130 = (int64_t)g87; // 0x4ea7ed
    int32_t * v131 = (int32_t *)(v80 + 12); // 0x4eae64
    int64_t v132; // bp-176, 0x4ea390
    function_207b0(*v131, *(int16_t *)(v130 + 1), &v132);
    int64_t * v133 = (int64_t *)(v80 + 32); // 0x4eae74
    uint64_t v134 = *v133; // 0x4eae74
    int32_t v135 = *(int32_t *)&v3; // 0x4eae78
    uint64_t v136 = v134 / 0x80000000000 % 2; // 0x4eae8c
    char * v137 = (char *)(v132 + 4);
    unsigned char v138 = *v137;
    int64_t v139; // 0x4ea390
    int64_t v140; // 0x4ea390
    char v141; // 0x4ea390
    char v142; // 0x4ebce6
    if ((v135 & -3) != 1) {
        int64_t v143 = v134 / 0x100000000000 % 2; // 0x4eb638
        v3 = v138 & 14;
        unsigned char v144 = v138 / 2 % 8;
        if (v135 != 0) {
            unsigned char v145 = *(char *)((int64_t)(8 * v144) + (int64_t)&g59 | v136); // 0x4ebbe0
            char * v146 = (char *)(v80 + 22); // 0x4ebbe4
            *v146 = v145;
            *(char *)(v79 + 8) = v145 / 32;
            v139 = v143;
            if ((char)v3 != 2) {
                goto lab_0x4eb687;
            } else {
                // 0x4ebbf8
                *v146 = 8;
                v140 = v143;
                v141 = *v137;
                goto lab_0x4eaede;
            }
        } else {
            unsigned char v147 = *(char *)(v79 + 10); // 0x4eb650
            unsigned char v148 = *(char *)(v136 | (int64_t)(8 * v144) + (int64_t)&g59 | 2 * (int64_t)v147 & 2 | 4); // 0x4eb66c
            char * v149 = (char *)(v80 + 22); // 0x4eb670
            *v149 = v148;
            *(char *)(v79 + 8) = v148 / 32;
            if ((char)v3 != 2) {
                // 0x4eb684
                v139 = v143 | 4;
                goto lab_0x4eb687;
            } else {
                // 0x4eb680
                *v149 = 8;
                // 0x4eb684
                v139 = v143 | 4;
                goto lab_0x4eb687;
            }
        }
    } else {
        unsigned char v150 = *(char *)(v136 | (int64_t)(4 * v138 & 56) + (int64_t)&g59 | 2); // 0x4eaeb3
        char * v151 = (char *)(v80 + 22); // 0x4eaeb7
        *v151 = v150;
        *(char *)(v79 + 8) = v150 / 32;
        char v152 = *v137; // 0x4eaec1
        v142 = v152;
        if ((v152 & 14) == 2) {
            // 0x4ebcde
            *v151 = 8;
            v142 = *v137;
            goto lab_0x4eaedb;
        } else {
            goto lab_0x4eaedb;
        }
    }
  lab_0x4ebc73:;
    uint64_t v153 = v154;
    v155 = v156;
    v157 = v158;
    v159 = v160;
    v161 = v162;
    v163 = v164;
    v165 = v166;
    v167 = v168;
    if ((char)v153 == 0) {
        goto lab_0x4ebcd0;
    } else {
        // 0x4ebc78
        *(int32_t *)(v80 + 116 + 8 * (int64_t)*(char *)(v80 + 244)) = 1;
        *(int64_t *)(v80 + 32) = v169 | 4;
        int32_t v170 = 256 * (256 * (256 * v153 & 256 | v153 / 2 % 2) | v153 / 4 % 2) | v153 / 8 % 2; // 0x4ebcc6
        *(int32_t *)(v80 + 240) = v170;
        *(int32_t *)(v79 + 10) = v170;
        v155 = v156;
        v157 = v158;
        v159 = v160;
        v161 = v162;
        v163 = v164;
        v165 = v166;
        v167 = v168;
        goto lab_0x4ebcd0;
    }
  lab_0x4eaedb:
    // 0x4eaedb
    v140 = v134 / 0x100000000000 % 2 | 2;
    v141 = v142;
    goto lab_0x4eaede;
  lab_0x4eb687:
    // 0x4eb687
    v140 = v139;
    v141 = *v137;
    goto lab_0x4eaede;
  lab_0x4eaede:;
    int64_t v171 = (int64_t)(v141 / 2 & 24) + (int64_t)&g58; // 0x4eaef6
    unsigned char v172 = *(char *)(v171 + v140 % 256); // 0x4eaefa
    char * v173 = (char *)(v80 + 23); // 0x4eaefe
    *v173 = v172;
    char * v174 = (char *)(v79 + 9); // 0x4eaf04
    *v174 = v172 / 32;
    char * v175; // bp-168, 0x4ea390
    function_1fdf0(v130, (int64_t *)&v175, v171, &g58);
    unsigned char v176 = *v175; // 0x4eaf12
    int64_t v177 = v176; // 0x4eaf12
    int64_t v178 = v177; // 0x4eaf1a
    int64_t v179 = (int64_t)&g58; // 0x4eaf1a
    int64_t v180; // 0x4ea390
    int64_t v181; // 0x4ea390
    int64_t v182; // 0x4ea390
    if (v176 % 2 == 0) {
        goto lab_0x4eafc1;
    } else {
        char * v183 = (char *)(v80 + 258); // 0x4eaf20
        v182 = v117;
        v181 = v126;
        v180 = (int64_t)&g58;
        if (*v183 != 0) {
            goto lab_0x4eaf9e;
        } else {
            char * v184 = (char *)(v80 + 8); // 0x4eaf29
            unsigned char v185 = *v184; // 0x4eaf29
            *v183 = v185;
            v5 = v130;
            v30 = v119;
            v72 = v120;
            v56 = v121;
            v64 = v122;
            v35 = v124;
            result = 0x80200002;
            v6 = v185;
            v10 = v80;
            v7 = (int64_t)&v175;
            if (v185 < 15) {
                // 0x4eaf3c
                if (v117 == 0) {
                    goto lab_0x4ea48e_3;
                } else {
                    int64_t v186 = v126 + 1; // 0x4eaf64
                    v3 = v186;
                    unsigned char v187 = *(char *)v126; // 0x4eaf68
                    *v184 = v185 + 1;
                    *v133 = *v133 | 1;
                    *(char *)(v80 + 255) = v187 / 64;
                    *(char *)(v80 + 257) = v187 % 8;
                    unsigned char v188 = v187 / 8 % 8;
                    *(char *)(v80 + 256) = v188;
                    v182 = v117 - 1;
                    v181 = v186;
                    v180 = v188;
                    goto lab_0x4eaf9e;
                }
            } else {
                goto lab_0x4ea48e_3;
            }
        }
    }
  lab_0x4eafc1:;
    int64_t v189 = (int64_t)v175; // 0x4eaf0d
    int64_t v190 = v178; // 0x4eafc3
    if ((v178 & 2) != 0) {
        char v191 = *(char *)(v189 + 1 + (int64_t)*v174); // 0x4ebc12
        int64_t v192 = function_4ea000(&v27, v80, v191, v179, v3); // 0x4ebc17
        v5 = (int64_t)&v27;
        v30 = v119;
        v72 = v120;
        v56 = v121;
        v64 = v122;
        v35 = v124;
        result = v192;
        v6 = v179;
        v10 = v80;
        v7 = v80;
        if ((int32_t)v192 < 0) {
            goto lab_0x4ea48e_3;
        } else {
            // 0x4ebc24
            v190 = (int64_t)*v175;
            goto lab_0x4eafc9;
        }
    } else {
        goto lab_0x4eafc9;
    }
  lab_0x4eafc9:;
    int64_t v193 = v190; // 0x4eafcb
    char v194; // 0x4eafcd
    if ((v190 & 4) == 0) {
        goto lab_0x4eb008;
    } else {
        // 0x4eafcd
        v194 = *(char *)(v189 + 8);
        if (v194 == 0) {
            goto lab_0x4eafdf;
        } else {
            // 0x4eafd7
            *v133 = *v133 | 128;
            goto lab_0x4eafdf;
        }
    }
  lab_0x4eaf9e:;
    int64_t v195; // 0x4ea390
    int64_t v196; // 0x4ea390
    int64_t v197; // 0x4ea390
    int64_t v198; // 0x4ea390
    int64_t v199; // 0x4ea390
    int64_t v200; // 0x4ea390
    int64_t v201; // 0x4ea390
    int64_t v202; // 0x4ea390
    int64_t v203; // 0x4ea390
    int64_t v204; // 0x4ea390
    char v205; // 0x4ea390
    unsigned char v206; // 0x4ea390
    if ((v176 & 16) == 0) {
        // 0x4ebcf2
        v206 = *(char *)(v80 + 255);
        if ((*v173 - 32 & -33) == 0) {
            // 0x4ebf7c
            v197 = v177;
            v204 = 0;
            v205 = 1;
            if (v206 == 3) {
                goto lab_0x4eafbd;
            } else {
                char v207 = *(char *)(v80 + 257); // 0x4ebf8e
                switch (v206) {
                    case 1: {
                        // 0x4ec341
                        v201 = 0;
                        if (v207 != 4) {
                            goto lab_0x4ec321;
                        } else {
                            // 0x4ec346
                            v3 = 8;
                            v200 = 8;
                            goto lab_0x4ebfbe;
                        }
                    }
                    case 2: {
                        // 0x4ec32c
                        v202 = 0;
                        if (v207 != 4) {
                            goto lab_0x4ec3ad;
                        } else {
                            // 0x4ec331
                            v3 = 32;
                            v200 = 32;
                            goto lab_0x4ebfbe;
                        }
                    }
                    default: {
                        if (v207 == 5) {
                            // 0x4ec39f
                            if (*(int32_t *)&v3 != 0) {
                                goto lab_0x4ec3ad;
                            } else {
                                // 0x4ec3a5
                                *v133 = *v133 | 128;
                                v202 = 0;
                                goto lab_0x4ec3ad;
                            }
                        } else {
                            // 0x4ebfb2
                            v3 = 0;
                            v197 = v177;
                            v204 = 0;
                            v205 = 0;
                            v200 = 0;
                            if (v207 != 4) {
                                goto lab_0x4eafbd;
                            } else {
                                goto lab_0x4ebfbe;
                            }
                        }
                    }
                }
            }
        } else {
            int64_t v208 = v206;
            if (v206 == 2) {
                int64_t v209 = function_4ea000(&v27, v80, 16, v208, v3); // 0x4ec3e5
                v5 = (int64_t)&v27;
                v30 = v119;
                v72 = v120;
                v56 = v121;
                v64 = v122;
                v35 = v124;
                result = v209;
                v6 = 2;
                v10 = v80;
                v7 = v80;
                v199 = 2;
                if ((int32_t)v209 >= 0) {
                    goto lab_0x4ebd4e;
                } else {
                    goto lab_0x4ea48e_3;
                }
            } else {
                // 0x4ebd15
                v197 = v177;
                v204 = v208;
                v205 = 1;
                if (v206 < 3) {
                    // 0x4ebd1b
                    v201 = v208;
                    if (v206 != 0) {
                        goto lab_0x4ec321;
                    } else {
                        // 0x4ebd23
                        v197 = v177;
                        v204 = v208;
                        v205 = 0;
                        if (*(char *)(v80 + 257) != 6) {
                            goto lab_0x4eafbd;
                        } else {
                            // 0x4ebd30
                            v3 = 16;
                            v195 = 16;
                            v198 = v208;
                            goto lab_0x4ebd36;
                        }
                    }
                } else {
                    goto lab_0x4eafbd;
                }
            }
        }
    } else {
        // 0x4eafa9
        v196 = v177;
        v203 = v180;
        v197 = v177;
        v204 = v180;
        v205 = 1;
        if (*(char *)(v80 + 255) == 3) {
            goto lab_0x4eafbd;
        } else {
            goto lab_0x4eafb2;
        }
    }
  lab_0x4eb008:
    // 0x4eb008
    if ((v193 & 8) == 0) {
        goto lab_0x4eb03a;
    } else {
        char v210 = *(char *)(v189 + 12); // 0x4eb01e
        unsigned char v211 = *(char *)(v189 + 9 + (int64_t)*(char *)(v79 + 8)); // 0x4eb028
        int64_t v212 = function_4ea160(&v27, v80, 1, v211, v210, *(char *)(v189 + 13)); // 0x4eb02d
        v5 = (int64_t)&v27;
        v30 = v119;
        v72 = v120;
        v56 = v121;
        v64 = v122;
        v35 = v124;
        result = v212;
        v6 = v211;
        v10 = v80;
        v7 = v80;
        if ((int32_t)v212 < 0) {
            goto lab_0x4ea48e_3;
        } else {
            goto lab_0x4eb03a;
        }
    }
  lab_0x4eb03a:;
    uint32_t v213 = *v131; // 0x4eb05e
    result2 = v213;
    if (v213 < 6) {
        goto lab_0x4ea4a5_2;
    } else {
        result2 = function_20d68();
        goto lab_0x4ea4a5_2;
    }
  lab_0x4eafdf:;
    unsigned char v214 = *(char *)(v189 + 4 + (int64_t)*(char *)(v79 + 8)); // 0x4eaff3
    int64_t v215 = function_4ea160(&v27, v80, 0, v214, *(char *)(v189 + 7), v194); // 0x4eaff8
    v5 = (int64_t)&v27;
    v30 = v119;
    v72 = v120;
    v56 = v121;
    v64 = v122;
    v35 = v124;
    result = v215;
    v6 = v214;
    v10 = v80;
    v7 = v80;
    if ((int32_t)v215 < 0) {
        goto lab_0x4ea48e_3;
    } else {
        // 0x4eb005
        v193 = (int64_t)*v175;
        goto lab_0x4eb008;
    }
  lab_0x4eafbd:
    // 0x4eafbd
    *(char *)(v79 + 20) = v205;
    v178 = v197;
    v179 = v204;
    goto lab_0x4eafc1;
  lab_0x4eafb2:
    // 0x4eafb2
    v197 = v196;
    v204 = v203;
    v205 = (v196 & 16) != 0;
    goto lab_0x4eafbd;
  lab_0x4ebd4e:
    // 0x4ebd4e
    v196 = (int64_t)*v175;
    v203 = v199;
    goto lab_0x4eafb2;
  lab_0x4ec321:
    // 0x4ec321
    v3 = 8;
    v195 = 8;
    v198 = v201;
    goto lab_0x4ebd36;
  lab_0x4ec3ad:
    // 0x4ec3ad
    v3 = 32;
    v195 = 32;
    v198 = v202;
    goto lab_0x4ebd36;
  lab_0x4ebfbe:;
    char * v232 = (char *)(v80 + 8); // 0x4ebfbe
    unsigned char v233 = *v232; // 0x4ebfbe
    int64_t v234 = v233; // 0x4ebfbe
    *(char *)(v80 + 262) = v233;
    v5 = v234;
    v30 = v119;
    v72 = v120;
    v56 = v121;
    v64 = v122;
    v35 = v124;
    result = 0x80200002;
    v6 = v200;
    v10 = v80;
    v7 = 0;
    if (v233 < 15) {
        // 0x4ebfd3
        v5 = v234;
        v30 = v119;
        v72 = v120;
        v56 = v121;
        v64 = v122;
        v35 = v124;
        result = 0x80200000;
        v6 = v200;
        v10 = v80;
        v7 = 0;
        if (v182 == 0) {
            goto lab_0x4ea48e_3;
        } else {
            unsigned char v235 = *(char *)v181; // 0x4ebfff
            *v232 = v233 + 1;
            *v133 = *v133 | 2;
            *(char *)(v80 + 259) = v235 / 64;
            unsigned char v236 = v235 % 8;
            *(char *)(v80 + 261) = v236;
            *(char *)(v80 + 260) = v235 / 8 % 8;
            if (v236 == 5) {
                // 0x4ec317
                v201 = v200;
                v202 = v200;
                if (v206 != 1) {
                    goto lab_0x4ec3ad;
                } else {
                    goto lab_0x4ec321;
                }
            } else {
                // 0x4ec042
                v197 = v177;
                v204 = 0;
                v205 = 0;
                if (v200 == 0) {
                    goto lab_0x4eafbd;
                } else {
                    // 0x4ec042
                    v195 = v3;
                    v198 = v200;
                    goto lab_0x4ebd36;
                }
            }
        }
    } else {
        goto lab_0x4ea48e_3;
    }
  lab_0x4ebd36:;
    int64_t v216 = v195;
    int64_t v217 = function_4ea000(&v27, v80, (char)v216, v198, v216); // 0x4ebd41
    v5 = (int64_t)&v27;
    v30 = v119;
    v72 = v120;
    v56 = v121;
    v64 = v122;
    v35 = v124;
    result = v217;
    v6 = v198;
    v10 = v80;
    v7 = v80;
    v199 = v198;
    if ((int32_t)v217 < 0) {
        goto lab_0x4ea48e_3;
    } else {
        goto lab_0x4ebd4e;
    }
  lab_0x4ebc5c:;
    int64_t v218 = v16 == 0 ? a4 : v24;
    int64_t v219 = v16 == 0 ? a3 : v20;
    v156 = v218;
    v158 = v29;
    v160 = v71;
    v162 = v55;
    v164 = v63;
    v166 = v34;
    v168 = v219;
    v169 = v220;
    v154 = v9;
    if (v220 % 0x100000000001 == 0) {
        goto lab_0x4ebc73;
    } else {
        // 0x4ebc5c
        v221 = v80 + 116;
        v222 = v218;
        v223 = v29;
        v224 = v71;
        v225 = v55;
        v226 = v63;
        v227 = v34;
        v228 = v42;
        v229 = v219;
        v230 = v220;
        v231 = v9;
        goto lab_0x4ebc63;
    }
}

// Address range: 0x511c20 - 0x5124d4
int64_t function_511c20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t result3 = a2; // bp-104, 0x511c39
    int64_t v1 = a4; // bp-120, 0x511c4f
    __readfsqword(40);
    int64_t v2 = function_50e0e0(); // 0x511c7d
    int64_t v3 = (int64_t)&result3; // 0x511c97
    int64_t v4 = function_50f6f0(&result3, &v1); // 0x511c9c
    int64_t v5 = v4 & 0xffffffff; // 0x511ca3
    int64_t v6; // 0x511c20
    int64_t v7; // 0x511c20
    int64_t v8; // 0x511c20
    int64_t v9; // 0x511c20
    int64_t v10; // 0x511c20
    int64_t v11; // 0x511c20
    int64_t v12; // 0x512233
    int32_t v13; // 0x512237
    int64_t v14; // 0x51222a
    int32_t v15; // 0x51222d
    char * v16; // 0x512233
    unsigned char v17; // 0x512233
    if ((char)v4 == 0) {
        int64_t v18 = function_50f7d0(v3); // 0x512225
        v14 = v18 & 0xffffffff;
        v15 = *(int32_t *)(v2 + 228);
        v16 = (char *)(v2 + 32);
        v17 = *v16;
        v12 = v17;
        v13 = v18;
        if (v15 == v13) {
            goto lab_0x5123f0;
        } else {
            // 0x512240
            if (*(int32_t *)(v2 + 224) == v13) {
                goto lab_0x5123f0;
            } else {
                goto lab_0x51224d;
            }
        }
    } else {
        // 0x511cac
        v11 = a5;
        v10 = (int64_t)*(char *)(v2 + 32);
        v9 = 0;
        v6 = 0;
        v7 = 0;
        v8 = v5;
        goto lab_0x511cc0;
    }
  lab_0x512390_2:;
    // 0x512390
    int64_t v19; // 0x511c20
    v11 = v19;
    int64_t v20; // 0x511c20
    v10 = v20;
    int64_t v21; // 0x511c20
    v9 = v21 & 0xffffffff;
    int64_t v22; // 0x511c20
    v6 = v22;
    int64_t v23; // 0x511c20
    v7 = v23;
    v8 = v5;
    goto lab_0x511cc0;
  lab_0x5124a0_2:;
    // 0x5124a0
    int32_t v25; // bp-72, 0x511c20
    int64_t v176 = v25; // 0x5124a0
    int64_t v173 = v176; // 0x5124b5
    int64_t v172 = v176; // 0x5124b5
    if (g96 != 0) {
        goto lab_0x511e18;
    } else {
        goto lab_0x511e37;
    }
  lab_0x512180:;
    int64_t v137; // 0x511c20
    int64_t v138; // 0x511c20
    unsigned char v134; // 0x512135
    int64_t v135; // 0x512135
    int32_t v136; // 0x512139
    int32_t * v91; // 0x511c20
    if (v134 == 0) {
        goto lab_0x51218d;
    } else {
        // 0x512184
        v137 = v135;
        v138 = v135;
        if (*v91 == v136) {
            goto lab_0x511f18;
        } else {
            goto lab_0x51218d;
        }
    }
  lab_0x51218d:;
    // 0x51218d
    int64_t v117; // 0x511c20
    int64_t v102; // 0x511c20
    int64_t v118; // 0x511c20
    int64_t v119; // 0x511c20
    int64_t v101; // 0x511c20
    int64_t v120; // 0x511c20
    int64_t v116; // 0x511c20
    int64_t v130; // 0x5120da
    uint32_t v132; // 0x51212d
    int64_t v133; // 0x51212d
    int64_t v89; // 0x511ef8
    int32_t * v92; // 0x511c20
    if (*v92 != v136) {
        // 0x512192
        function_451f2(a8, (v132 != v136 ? 44 : 43) + (int64_t)(v132 != v136), v133, v89);
        v116 = v133;
        v117 = v130;
        v118 = v102;
        v119 = v130 & 0xffffffff;
        v120 = v101;
        goto lab_0x511f6b;
    }
    // 0x512145
    v137 = v130;
    v138 = v130 & 0xffffffff;
    goto lab_0x511f18;
  lab_0x511f18:;
    int64_t v105 = v135; // 0x511c20
    int64_t v106 = v133; // 0x511c20
    int64_t v131; // 0x512128
    int64_t v107 = v131 & 0xffffffff; // 0x511c20
    int64_t v108 = v137; // 0x511c20
    int64_t v109 = v138; // 0x511c20
    goto lab_0x511f18_2;
  lab_0x511f6b:;
    int64_t v177 = v120;
    int64_t v178 = v119;
    int64_t v179 = v118;
    int64_t v180 = v117;
    int64_t v181 = v116;
    int64_t v182 = result3; // 0x511f6b
    int64_t v123; // 0x511c20
    int64_t v124; // 0x511c20
    int64_t v125; // 0x511c20
    int64_t v183; // 0x511c20
    int64_t v184; // 0x511c20
    int64_t v185; // 0x511c20
    int64_t v121; // 0x511c20
    int64_t v186; // 0x511c20
    int64_t v187; // 0x511c20
    int64_t v122; // 0x511c20
    int64_t v103; // 0x511c20
    int64_t v188; // 0x511c20
    if (v182 == 0) {
        // 0x512024
        v186 = v1;
        goto lab_0x512029;
    } else {
        int64_t * v189 = (int64_t *)(v182 + 16); // 0x511f79
        uint64_t v190 = *v189; // 0x511f79
        int64_t * v191 = (int64_t *)(v182 + 24); // 0x511f7d
        uint64_t v192 = *v191; // 0x511f7d
        int64_t v193 = v192; // 0x511f81
        int64_t v194 = v190; // 0x511f81
        if (v190 < v192) {
            // 0x511f87
            v194 = v190 + 4;
            *v189 = v194;
            v193 = *v191;
        }
        uint64_t v195 = v194; // 0x511f97
        int64_t v196; // 0x511c20
        if (v195 >= v193) {
            // 0x5123c0
            v196 = *(int64_t *)v182;
        } else {
            // 0x511fa5
            v196 = (int64_t)*(int32_t *)v195;
        }
        int64_t v197 = v1; // 0x511faa
        if ((int32_t)v196 == -1) {
            // 0x5121c8
            result3 = 0;
            v186 = v197;
            goto lab_0x512029;
        } else {
            // 0x511fb5
            v188 = v103;
            if (v197 == 0) {
                goto lab_0x511ff0;
            } else {
                // 0x511fbe
                v121 = v89;
                v122 = v181;
                v123 = v179;
                v124 = v178;
                v125 = v177;
                if ((int32_t)v103 != -1) {
                    goto lab_0x511dd2_7;
                }
                uint64_t v198 = *(int64_t *)(v197 + 16); // 0x511fcb
                v183 = v198;
                v185 = 0;
                v184 = 0;
                v187 = v197;
                if (v198 >= *(int64_t *)(v197 + 24)) {
                    goto lab_0x512048;
                } else {
                    goto lab_0x511fd5;
                }
            }
        }
    }
  lab_0x512029:;
    int64_t v199 = v186;
    v121 = v89;
    v122 = v181;
    v123 = v179;
    v124 = v178;
    v125 = v177;
    if (v199 == 0) {
        goto lab_0x511dd2_7;
    }
    // 0x512032
    v188 = v103;
    int64_t v93; // 0x511c20
    if ((int32_t)v103 != -1) {
        goto lab_0x511ff0;
    } else {
        uint64_t v200 = *(int64_t *)(v199 + 16); // 0x51203e
        v183 = v200;
        v185 = v93;
        v184 = v93;
        v187 = v199;
        if (v200 < *(int64_t *)(v199 + 24)) {
            goto lab_0x511fd5;
        } else {
            goto lab_0x512048;
        }
    }
  lab_0x511ff0:;
    int64_t v94 = v188; // 0x512000
    int64_t v95 = v181; // 0x512000
    int64_t v96 = function_50f7d0(v3) & 0xffffffff; // 0x512000
    int64_t v97 = v180; // 0x512000
    int64_t v98 = v179; // 0x512000
    int64_t v99 = v178; // 0x512000
    int64_t v100 = v177; // 0x512000
    goto lab_0x511f18_3;
  lab_0x511fd5:;
    uint32_t v201 = *(int32_t *)v183; // 0x511fd5
    int64_t v202 = v201; // 0x511fda
    int64_t v203 = v185; // 0x511fda
    int64_t v204 = v185; // 0x511fda
    if (v201 == -1) {
        goto lab_0x512058;
    } else {
        goto lab_0x511fdc;
    }
  lab_0x512048:;
    int64_t v205 = *(int64_t *)v187; // 0x512048
    v202 = v205;
    v203 = v184;
    v204 = v184;
    if ((int32_t)v205 != -1) {
        goto lab_0x511fdc;
    } else {
        goto lab_0x512058;
    }
  lab_0x512058:
    // 0x512058
    v1 = 0;
    int64_t v206 = v103; // 0x512066
    int64_t v207 = v204; // 0x512066
    unsigned char v71; // 0x511ce0
    char v208 = v71; // 0x512066
    goto lab_0x511fe2;
  lab_0x511fdc:
    // 0x511fdc
    v206 = 0x100000000 * v202 >> 32;
    v207 = v203;
    v208 = 0;
    goto lab_0x511fe2;
  lab_0x511fe2:
    // 0x511fe2
    v188 = v206;
    if (v208 == (char)v207) {
        goto lab_0x511dd2_7;
    }
    goto lab_0x511ff0;
  lab_0x511e85_2:;
    // 0x511e85
    int64_t v70; // 0x511c20
    int64_t v168; // 0x511c20
    function_451f2(a8, v168, v70, a4);
    int64_t v165; // 0x511d2e
    int64_t v158 = v165; // 0x511e91
    int64_t v159 = v165; // 0x511e91
    int64_t v151; // 0x511c20
    int64_t v160 = v151; // 0x511e91
    goto lab_0x511db3;
  lab_0x511db3:;
    int64_t v209 = function_50f6f0((int64_t *)function_50d7a0(v3), &v1); // 0x511dc5
    v121 = a4;
    v122 = v70;
    int64_t v67; // 0x511c20
    v123 = v67;
    v124 = v159;
    v125 = v160;
    if ((char)v209 != 0) {
        // break -> 0x511dd2
        goto lab_0x511dd2_7;
    }
    int64_t v147 = function_50f7d0(v3) & 0xffffffff; // 0x511edc
    int64_t v148 = v158; // 0x511edc
    int64_t v149 = v159; // 0x511edc
    int64_t v150 = v160; // 0x511edc
    goto lab_0x511cff;
  lab_0x5122e7_3:;
    // 0x5122e7
    int64_t v210; // 0x511c20
    v11 = v210;
    v10 = (int64_t)*v16;
    uint32_t v50; // 0x512276
    v9 = v50;
    v6 = 1;
    int64_t v52; // 0x512292
    v7 = v52;
    v8 = 1;
    goto lab_0x511cc0;
  lab_0x51231d:
    // 0x51231d
    v210 = v19;
    int64_t v53; // 0x511c20
    if (v53 == 0) {
        goto lab_0x5122e7_3;
    }
    int64_t v63 = v19; // 0x51232d
    int64_t v64 = v53; // 0x51232d
    char v65 = 1; // 0x51232d
    if ((int32_t)v19 == -1) {
        goto lab_0x51236b;
    } else {
        goto lab_0x51232f;
    }
  lab_0x51236b:;
    int64_t v211 = v64;
    uint64_t v212 = *(int64_t *)(v211 + 16); // 0x51236b
    int64_t v213; // 0x511c20
    if (v212 >= *(int64_t *)(v211 + 24)) {
        // 0x5123e0
        v213 = *(int64_t *)v211;
    } else {
        // 0x512375
        v213 = (int64_t)*(int32_t *)v212;
    }
    int64_t v214 = v213;
    int64_t v215; // 0x511c20
    char v216; // 0x511c20
    if ((int32_t)v214 == -1) {
        // 0x5123b0
        v1 = 0;
        v215 = v19;
        v216 = 1;
    } else {
        // 0x51237c
        v215 = 0x100000000 * v214 >> 32;
        v216 = 0;
    }
    // 0x512382
    v210 = v215;
    v63 = v215;
    if (v216 == v65) {
        goto lab_0x5122e7_3;
    }
    goto lab_0x51232f;
  lab_0x51232f:;
    int64_t v42 = v63; // 0x512343
    int64_t v43 = function_50f7d0(v3); // 0x512343
    int64_t v44 = (int64_t)*v16; // 0x512343
    int64_t v45 = 1; // 0x512343
    int64_t v46 = v52; // 0x512343
    goto lab_0x512260;
  lab_0x5123f0:
    if (v17 == 0) {
        goto lab_0x5123fe;
    } else {
        // 0x5123f4
        if (*(int32_t *)(v2 + 76) == v13) {
            goto lab_0x51224d;
        } else {
            goto lab_0x5123fe;
        }
    }
  lab_0x511cc0:;
    char v24 = v10;
    v25 = (int64_t)&g97;
    int64_t v26 = v11; // 0x511cda
    int64_t v27 = v10; // 0x511cda
    int64_t v28 = v9; // 0x511cda
    int64_t v29 = v6; // 0x511cda
    int64_t v30 = v7; // 0x511cda
    int64_t v31 = v8; // 0x511cda
    char v32 = v24; // 0x511cda
    int64_t v33 = v11; // 0x511cda
    int64_t v34 = v10; // 0x511cda
    int64_t v35 = v9; // 0x511cda
    int64_t v36 = v6; // 0x511cda
    int64_t v37 = v7; // 0x511cda
    int64_t v38 = v8; // 0x511cda
    if (v24 != 0) {
        goto lab_0x5121fe;
    } else {
        goto lab_0x511ce0;
    }
  lab_0x5123fe:
    // 0x5123fe
    if (*(int32_t *)(v2 + 72) == v13) {
        goto lab_0x51224d;
    } else {
        // 0x512408
        function_451f2(a8, (v15 != v13 ? 44 : 43) + (int64_t)(v15 != v13), v12, a4);
        int64_t result = function_50f6f0((int64_t *)function_50d7a0(v3), &v1); // 0x512430
        if ((char)result == 0) {
            // 0x5124cb
            return result;
        }
        // 0x51243d
        v11 = a5;
        v10 = (int64_t)*v16;
        v9 = v14;
        v6 = 0;
        v7 = 0;
        v8 = result & 0xffffffff;
        goto lab_0x511cc0;
    }
  lab_0x51224d:;
    int32_t * v39 = (int32_t *)(v2 + 76);
    int32_t * v40 = (int32_t *)(v2 + 72);
    int32_t * v41 = (int32_t *)(v2 + 240);
    v42 = a5;
    v43 = v14;
    v44 = v12;
    v45 = 0;
    v46 = 0;
    while (true) {
      lab_0x512260:
        // 0x512260
        v23 = v46;
        v22 = v45;
        v20 = v44;
        v21 = v43;
        v19 = v42;
        int32_t v47; // 0x511c20
        if (v20 == 0) {
            // 0x512260
            v47 = v21;
        } else {
            int32_t v48 = v21;
            v47 = v48;
            if (*v39 == v48) {
                // break -> 0x5121e0
                break;
            }
        }
        int32_t v49 = v47;
        if (*v40 == v49) {
            goto lab_0x512390_2;
        }
        // 0x512276
        v50 = *v41;
        if (v50 != v49) {
            goto lab_0x512390_2;
        }
        if (v22 == 0) {
            // 0x512350
            function_451f2(a8, 48, v20, a4);
        }
        int64_t v51 = result3; // 0x51228d
        v52 = v23 + 1 & 0xffffffff;
        if (v51 == 0) {
            // 0x512318
            v53 = v1;
            goto lab_0x51231d;
        } else {
            int64_t * v54 = (int64_t *)(v51 + 16); // 0x51229b
            uint64_t v55 = *v54; // 0x51229b
            int64_t * v56 = (int64_t *)(v51 + 24); // 0x51229f
            uint64_t v57 = *v56; // 0x51229f
            int64_t v58 = v57; // 0x5122a3
            int64_t v59 = v55; // 0x5122a3
            if (v55 < v57) {
                // 0x5122a5
                v59 = v55 + 4;
                *v54 = v59;
                v58 = *v56;
            }
            uint64_t v60 = v59; // 0x5122b5
            int64_t v61; // 0x511c20
            if (v60 >= v58) {
                // 0x5123d0
                v61 = *(int64_t *)v51;
            } else {
                // 0x5122c3
                v61 = (int64_t)*(int32_t *)v60;
            }
            int64_t v62 = v1; // 0x5122c8
            if ((int32_t)v61 == -1) {
                // 0x5123a0
                result3 = 0;
                v53 = v62;
                goto lab_0x51231d;
            } else {
                // 0x5122d3
                v63 = v19;
                if (v62 == 0) {
                    goto lab_0x51232f;
                } else {
                    // 0x5122dc
                    v64 = v62;
                    v65 = 0;
                    if ((int32_t)v19 != -1) {
                        goto lab_0x5122e7_3;
                    }
                    goto lab_0x51236b;
                }
            }
        }
    }
    // 0x5121e0
    v25 = (int64_t)&g97;
    v32 = v20;
    v33 = v19;
    v34 = v20;
    v35 = v21 & 0xffffffff;
    v36 = v22;
    v37 = v23;
    v38 = v5;
    goto lab_0x5121fe;
  lab_0x5121fe:
    // 0x5121fe
    function_259ce((int64_t *)&v25, 32, v32);
    v26 = v33;
    v27 = v34;
    v28 = v35;
    v29 = v36;
    v30 = v37;
    v31 = v38;
    goto lab_0x511ce0;
  lab_0x511ce0:;
    int64_t v66 = v31;
    v67 = v30;
    int64_t v68 = v29;
    int64_t v69 = v28;
    v70 = v27;
    v71 = *(char *)(v2 + 328);
    int64_t v72; // 0x511c20
    int64_t v73; // 0x511c20
    int64_t v74; // 0x511c20
    int64_t v75; // 0x511c20
    int64_t v76; // 0x511c20
    int64_t v77; // 0x511c20
    int64_t v78; // 0x511c20
    int64_t v79; // 0x511c20
    int64_t v80; // 0x511c20
    int64_t v81; // 0x511c20
    int64_t v82; // 0x511c20
    int64_t v83; // 0x511c20
    int64_t v84; // 0x511c20
    int64_t v85; // 0x511c20
    int64_t v86; // 0x511c20
    int64_t v87; // 0x511c20
    if (v71 != 0) {
        // 0x511ee8
        v83 = a4;
        v87 = v70;
        v75 = v67;
        if ((char)v66 == 0) {
            int64_t v88 = v2 + 240; // 0x511ef1
            v89 = (int64_t)&v25;
            int32_t * wstr = (int32_t *)v88; // 0x511f03
            char * v90 = (char *)(v2 + 32); // 0x511f08
            v91 = (int32_t *)(v2 + 76);
            v92 = (int32_t *)(v2 + 72);
            v93 = v71;
            v94 = v26;
            v95 = v70;
            v96 = v69;
            v97 = v68;
            v98 = v67;
            v99 = v66;
            v100 = 0;
            int64_t result2; // 0x511c20
            while (true) {
              lab_0x511f18_3:
                // 0x511f18
                v101 = v100;
                v102 = v98;
                v103 = v94;
                int64_t v104 = 0x100000000000000 * v102 >> 56;
                v105 = (int64_t)*v90;
                v106 = v95;
                v107 = v96;
                v108 = v97;
                v109 = v99;
                int64_t v110; // 0x511c20
                while (true) {
                  lab_0x511f18_2:
                    // 0x511f18
                    v77 = v109;
                    v72 = v108;
                    int64_t v111 = v107;
                    v86 = v106;
                    v110 = v105;
                    int32_t v112; // 0x511c20
                    if (v110 == 0) {
                        // 0x511f18
                        v112 = v111;
                    } else {
                        int32_t v113 = v111;
                        v112 = v113;
                        if (*v91 == v113) {
                            // break -> 0x512150
                            break;
                        }
                    }
                    int32_t c = v112;
                    if (*v92 == c) {
                        int64_t v114 = *(int64_t *)((int64_t)v25 - 24); // 0x51207b
                        result2 = v114;
                        if ((char)(v77 || v101) != 0) {
                            goto lab_0x5124cb;
                        } else {
                            if (v114 == 0) {
                                goto lab_0x512098;
                            } else {
                                // 0x51208a
                                function_451f2(v89, v104, v86, v89);
                                goto lab_0x512098;
                            }
                        }
                    }
                    int32_t * v115 = wmemchr(wstr, c, 10); // 0x511f3a
                    if (v115 != NULL) {
                        // 0x511f48
                        function_451f2(a8, (0x100000000000000 * ((int64_t)v115 - v88) / 4 + 0x3000000000000000) / 0x100000000000000, 10, v89);
                        v116 = 10;
                        v117 = v93;
                        v118 = v102 + 1 & 0xffffffff;
                        v119 = v77;
                        v120 = v101;
                        goto lab_0x511f6b;
                    }
                    // 0x5120b8
                    if (*(int32_t *)(v2 + 296) != c) {
                        // 0x5120c0
                        v121 = v89;
                        v122 = 10;
                        v123 = v102;
                        v124 = v77;
                        v125 = v101;
                        if (*(int32_t *)(v2 + 320) != c) {
                            goto lab_0x511dd2_7;
                        }
                    }
                    int64_t v126 = v25; // 0x5120cf
                    int64_t v127 = v77 & 0xffffffff ^ 1; // 0x5120d7
                    uint64_t v128 = v127 & v72;
                    int64_t v129 = *(int64_t *)(v126 - 24); // 0x5120dd
                    v79 = v129;
                    v81 = v89;
                    v84 = v127;
                    v80 = v126;
                    v73 = v102;
                    v76 = v77;
                    v78 = v101;
                    if ((char)v128 == 0) {
                        goto lab_0x511dde;
                    }
                    if ((char)v101 == 0 == (v129 != 0)) {
                        // 0x5121b0
                        function_451f2(v89, v104, v127, v89);
                    }
                    // 0x5120f5
                    function_451f2(a8, 101, v127, v89);
                    if ((char)function_50f6f0((int64_t *)function_50d7a0(v3), &v1) != 0) {
                        goto lab_0x5124a0_2;
                    }
                    // 0x512125
                    v130 = v128 % 256 | v72 & -256;
                    v131 = function_50f7d0(v3);
                    v132 = *(int32_t *)(v2 + 228);
                    v133 = v132;
                    v134 = *v90;
                    v135 = v134;
                    v136 = v131;
                    if (v132 == v136) {
                        goto lab_0x512180;
                    } else {
                        // 0x51213d
                        if (*(int32_t *)(v2 + 224) == v136) {
                            goto lab_0x512180;
                        } else {
                            // 0x512145
                            v137 = v130;
                            v138 = v130 & 0xffffffff;
                            goto lab_0x511f18;
                        }
                    }
                }
                // 0x512150
                result2 = v110;
                if ((char)(v77 || v101) != 0) {
                    // break -> 0x5124cb
                    break;
                }
                if ((int32_t)v102 == 0) {
                    int64_t * v139 = (int64_t *)a8; // 0x512456
                    int64_t v140 = *v139; // 0x512456
                    uint32_t v141 = *(int32_t *)(v140 - 8); // 0x512459
                    result2 = v140;
                    if (v141 < 1) {
                        goto lab_0x5124cb;
                    } else {
                        // 0x512464
                        result2 = v140;
                        if (v140 - 24 != (int64_t)&g96) {
                            goto lab_0x5124cb;
                        } else {
                            // 0x512473
                            *v139 = (int64_t)&g97;
                            v83 = a8;
                            v87 = v141;
                            v75 = v102;
                            goto lab_0x512483;
                        }
                    }
                }
                // 0x512162
                function_451f2(v89, v104, v86, v89);
                v116 = v86;
                v117 = v72;
                v118 = 0;
                v119 = 0;
                v120 = v77 % 256 | v101;
                goto lab_0x511f6b;
            }
          lab_0x5124cb:
            // 0x5124cb
            return result2;
        }
        goto lab_0x512483;
    } else {
        // 0x511cf3
        v83 = a4;
        v87 = v70;
        v75 = v67;
        if ((char)v66 != 0) {
            goto lab_0x512483;
        } else {
            int32_t * v142 = (int32_t *)(v2 + 72);
            int32_t * v143 = (int32_t *)(v2 + 296);
            int32_t * v144 = (int32_t *)(v2 + 320);
            int32_t * v145 = (int32_t *)(v2 + 228);
            int32_t * v146 = (int32_t *)(v2 + 224);
            v147 = v69;
            v148 = v68;
            v149 = v66;
            v150 = 0;
            while (true) {
              lab_0x511cff:
                // 0x511cff
                v151 = v150;
                int64_t v152 = v147 + 0xffffffd0; // 0x511cff
                int64_t v153 = v147; // 0x511d05
                int64_t v154 = v148; // 0x511d05
                int64_t v155 = v149; // 0x511d05
                int64_t v156 = v152; // 0x511d05
                int64_t v157 = v149; // 0x511d05
                if ((int32_t)v152 < 10) {
                  lab_0x511d9d:
                    // 0x511d9d
                    function_451f2(a8, (v156 + 48) % 256, v70, a4);
                    v158 = 1;
                    v159 = v157;
                    v160 = v151;
                } else {
                    int64_t v161; // 0x511c20
                    while (true) {
                        int64_t v162 = v155;
                        v161 = v154;
                        int32_t v163 = v153; // 0x511d0b
                        if (*v142 == v163) {
                            if ((char)(v162 || v151) == 0) {
                                // break -> 0x511eac
                                break;
                            }
                        }
                        // 0x511d14
                        if (*v143 != v163) {
                            // 0x511d1c
                            v121 = a4;
                            v122 = v70;
                            v123 = v67;
                            v124 = v162;
                            v125 = v151;
                            if (*v144 != v163) {
                                // break (via goto) -> 0x511dd2
                                goto lab_0x511dd2_7;
                            }
                        }
                        unsigned char v164 = ((char)v162 ^ 1) & (char)v161; // 0x511d2e
                        v121 = a4;
                        v122 = v70;
                        v123 = v67;
                        v124 = v162;
                        v125 = v151;
                        if (v164 == 0) {
                            // break (via goto) -> 0x511dd2
                            goto lab_0x511dd2_7;
                        }
                        // 0x511d37
                        function_451f2(a8, 101, v70, a4);
                        if ((char)function_50f6f0((int64_t *)function_50d7a0(v3), &v1) != 0) {
                            goto lab_0x5124a0_2;
                        }
                        // 0x511d67
                        v165 = v164;
                        int64_t v166 = function_50f7d0(v3); // 0x511d6a
                        int32_t v167 = v166; // 0x511d6f
                        v168 = 43;
                        if (*v145 == v167) {
                            goto lab_0x511e85_2;
                        }
                        // 0x511d7d
                        v168 = 45;
                        if (*v146 == v167) {
                            goto lab_0x511e85_2;
                        }
                        int64_t v169 = v166 & 0xffffffff; // 0x511d75
                        int64_t v170 = v169 + 0xffffffd0; // 0x511d8e
                        v153 = v169;
                        v154 = v165;
                        v155 = v165;
                        v156 = v170;
                        v157 = v165;
                        if ((int32_t)v170 < 10) {
                            goto lab_0x511d9d;
                        }
                    }
                    // 0x511eac
                    function_451f2(a8, 46, v70, a4);
                    v158 = v161;
                    v159 = 0;
                    v160 = 1;
                }
                goto lab_0x511db3;
            }
          lab_0x511dd2_7:;
            int64_t v171 = v25; // 0x511dd2
            v79 = *(int64_t *)(v171 - 24);
            v81 = v121;
            v84 = v122;
            v80 = v171;
            v73 = v123;
            v76 = v124;
            v78 = v125;
          lab_0x511dde:
            // 0x511dde
            v172 = v80;
            if (v79 == 0) {
                goto lab_0x511e37;
            } else {
                // 0x511de3
                if ((char)v78 != 0) {
                    goto lab_0x511e18;
                } else {
                    // 0x511de8
                    v82 = v81;
                    v85 = v84;
                    v74 = v73;
                    v173 = v80;
                    if ((char)v76 != 0) {
                        goto lab_0x511e18;
                    } else {
                        goto lab_0x511ded;
                    }
                }
            }
        }
    }
  lab_0x512483:
    // 0x512483
    v82 = v83;
    v85 = v87;
    v74 = v75;
    v172 = v25;
    if (g96 == 0) {
        goto lab_0x511e37;
    } else {
        goto lab_0x511ded;
    }
  lab_0x511e37:
    // 0x511e37
    if (v172 - 24 == (int64_t)&g96) {
        // 0x511e50
        __readfsqword(40);
        return result3;
    }
    // 0x5124cb
    return result3;
  lab_0x511ded:
    // 0x511ded
    function_451f2((int64_t)&v25, 0x100000000000000 * v74 >> 56, v85, v82);
    v173 = v25;
    goto lab_0x511e18;
  lab_0x511e18:;
    int64_t v174 = *(int64_t *)(v2 + 16); // 0x511e1c
    int64_t v175 = function_569070(v174, *(int64_t *)(v2 + 24), (int64_t *)&v25); // 0x511e23
    v172 = v173;
    if ((char)v175 == 0) {
        // 0x511e2c
        *(int32_t *)a7 = 4;
        v172 = v173;
    }
    goto lab_0x511e37;
  lab_0x512098:
    // 0x512098
    function_451f2(a8, 46, v86, v89);
    v116 = v86;
    v117 = v72;
    v118 = v102;
    v119 = v77 | v101 % 256;
    v120 = v93;
    goto lab_0x511f6b;
}

// Address range: 0x518b00 - 0x518b05
// From class:    std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_518b00(void) {
    // 0x518b00
    return function_518120();
}

// Address range: 0x518b10 - 0x518b2a
int64_t function_518b10(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 56); // 0x518b13
    if (result != g86) {
        // 0x518b28
        return result;
    }
    // 0x518b20
    return function_518120();
}

// Address range: 0x518b30 - 0x518b39
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_518b30(int64_t a1) {
    // 0x518b30
    return (int64_t)*(char *)(*(int64_t *)(a1 + 16) + 33);
}

// Address range: 0x518b40 - 0x518b49
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_518b40(int64_t a1) {
    // 0x518b40
    return (int64_t)*(char *)(*(int64_t *)(a1 + 16) + 34);
}

// Address range: 0x518b50 - 0x518b58
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_518b50(int64_t a1) {
    // 0x518b50
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 88);
}

// Address range: 0x518b60 - 0x518ba0
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_518b60(int64_t a1) {
    // 0x518b60
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x518b8b
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 92);
    }
    // 0x518b90
    __stack_chk_fail();
    return (int64_t)&g137;
}

// Address range: 0x518ba0 - 0x518be0
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_518ba0(int64_t a1) {
    // 0x518ba0
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x518bcb
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 96);
    }
    // 0x518bd0
    __stack_chk_fail();
    return (int64_t)&g137;
}

// Address range: 0x518be0 - 0x518be9
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb1EEE
// Type:          virtual member function
int64_t function_518be0(int64_t a1) {
    // 0x518be0
    return (int64_t)*(char *)(*(int64_t *)(a1 + 16) + 33);
}

// Address range: 0x518bf0 - 0x518bf9
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb1EEE
// Type:          virtual member function
int64_t function_518bf0(int64_t a1) {
    // 0x518bf0
    return (int64_t)*(char *)(*(int64_t *)(a1 + 16) + 34);
}

// Address range: 0x518c00 - 0x518c08
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb1EEE
// Type:          virtual member function
int64_t function_518c00(int64_t a1) {
    // 0x518c00
    return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 88);
}

// Address range: 0x518c10 - 0x518c50
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb1EEE
// Type:          virtual member function
int64_t function_518c10(int64_t a1) {
    // 0x518c10
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x518c3b
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 92);
    }
    // 0x518c40
    __stack_chk_fail();
    return (int64_t)&g137;
}

// Address range: 0x518c50 - 0x518c90
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb1EEE
// Type:          virtual member function
int64_t function_518c50(int64_t a1) {
    // 0x518c50
    if (__readfsqword(40) == __readfsqword(40)) {
        // 0x518c7b
        return (int64_t)*(int32_t *)(*(int64_t *)(a1 + 16) + 96);
    }
    // 0x518c80
    __stack_chk_fail();
    return (int64_t)&g137;
}

// Address range: 0x518c90 - 0x518ca3
// From class:    std::__cxx11::moneypunct_byname<char, false>
// Type:          constructor
int64_t function_518c90(int64_t a1) {
    // 0x518c90
    *(int64_t *)a1 = (int64_t)&g79;
    return function_569fc0();
}

// Address range: 0x518cb0 - 0x518cc3
// From class:    std::__cxx11::moneypunct_byname<char, true>
// Type:          constructor
int64_t function_518cb0(int64_t a1) {
    // 0x518cb0
    *(int64_t *)a1 = (int64_t)&g80;
    return function_569eb0();
}

// Address range: 0x518cd0 - 0x518cd9
// From class:    *NSt13__facet_shims12_GLOBAL__N_113numpunct_shimIcEE
// Type:          virtual member function
int64_t function_518cd0(int64_t a1) {
    // 0x518cd0
    return (int64_t)*(char *)(*(int64_t *)(a1 + 16) + 72);
}

// Address range: 0x518ce0 - 0x518ce9
// From class:    *NSt13__facet_shims12_GLOBAL__N_113numpunct_shimIcEE
// Type:          virtual member function
int64_t function_518ce0(int64_t a1) {
    // 0x518ce0
    return (int64_t)*(char *)(*(int64_t *)(a1 + 16) + 73);
}

// Address range: 0x518cf0 - 0x518d03
// From class:    std::__cxx11::numpunct_byname<char>
// Type:          constructor
int64_t function_518cf0(int64_t a1) {
    // 0x518cf0
    *(int64_t *)a1 = (int64_t)&g77;
    return function_568460();
}

// Address range: 0x518d10 - 0x518d13
// From class:    std::__cxx11::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_518d10(void) {
    // 0x518d10
    return 0;
}

// Address range: 0x518d20 - 0x518d52
// From class:    *NSt13__facet_shims12_GLOBAL__N_112collate_shimIcEE
// Type:          virtual member function
int64_t function_518d20(int64_t a1, uint64_t a2, uint64_t a3) {
    // 0x518d20
    if (a2 >= a3) {
        // 0x518d44
        return 0;
    }
    int64_t v1 = a2; // 0x518d25
    uint64_t v2 = 0;
    char v3 = *(char *)v1; // 0x518d30
    v1++;
    int64_t result = (v2 / 0x200000000000000 | 128 * v2) + (int64_t)v3; // 0x518d3c
    while (v1 != a3) {
        // 0x518d30
        v2 = result;
        v3 = *(char *)v1;
        v1++;
        result = (v2 / 0x200000000000000 | 128 * v2) + (int64_t)v3;
    }
    // 0x518d44
    return result;
}

// Address range: 0x518d60 - 0x518d73
// From class:    std::__cxx11::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_518d60(int64_t a1) {
    // 0x518d60
    *(int64_t *)a1 = (int64_t)&g81;
    return function_565970(a1);
}

// Address range: 0x518d80 - 0x518d93
// From class:    std::__cxx11::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_518d80(int64_t a1) {
    // 0x518d80
    *(int64_t *)a1 = (int64_t)&g82;
    return function_565970(a1);
}

// Address range: 0x518da0 - 0x518db3
// From class:    std::__cxx11::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_518da0(int64_t a1) {
    // 0x518da0
    *(int64_t *)a1 = (int64_t)&g83;
    return function_565970(a1);
}

// Address range: 0x518dc0 - 0x518dd3
// From class:    std::__cxx11::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_518dc0(int64_t a1) {
    // 0x518dc0
    *(int64_t *)a1 = (int64_t)&g83;
    return function_565970(a1);
}

// Address range: 0x518de0 - 0x518df4
// From class:    std::ctype_byname<char>
// Type:          virtual member function
int64_t function_518de0(int64_t a1, int64_t a2, int64_t result, int64_t a4) {
    // 0x518de0
    memcpy((int64_t *)a4, (int64_t *)a2, (int32_t)(result - a2));
    return result;
}

// Address range: 0x518e00 - 0x518e20
// From class:    std::__cxx11::moneypunct_byname<char, false>
// Type:          constructor
int64_t function_518e00(int64_t a1) {
    // 0x518e00
    *(int64_t *)a1 = (int64_t)&g79;
    function_569fc0();
    int64_t v1; // 0x518e00
    return function_4eeb50(a1, v1, v1);
}

// Address range: 0x518e20 - 0x518e40
// From class:    std::__cxx11::moneypunct_byname<char, true>
// Type:          constructor
int64_t function_518e20(int64_t a1) {
    // 0x518e20
    *(int64_t *)a1 = (int64_t)&g80;
    function_569eb0();
    int64_t v1; // 0x518e20
    return function_4eeb50(a1, v1, v1);
}

// Address range: 0x518e40 - 0x518e60
// From class:    std::__cxx11::money_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_518e40(int64_t a1) {
    // 0x518e40
    *(int64_t *)a1 = (int64_t)&g81;
    function_565970(a1);
    int64_t v1; // 0x518e40
    return function_4eeb50(a1, v1, v1);
}

// Address range: 0x518e60 - 0x518e80
// From class:    std::__cxx11::money_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_518e60(int64_t a1) {
    // 0x518e60
    *(int64_t *)a1 = (int64_t)&g82;
    function_565970(a1);
    int64_t v1; // 0x518e60
    return function_4eeb50(a1, v1, v1);
}

// Address range: 0x518e80 - 0x518ea0
// From class:    std::__cxx11::numpunct_byname<char>
// Type:          constructor
int64_t function_518e80(int64_t a1) {
    // 0x518e80
    *(int64_t *)a1 = (int64_t)&g77;
    function_568460();
    int64_t v1; // 0x518e80
    return function_4eeb50(a1, v1, v1);
}

// Address range: 0x518ea0 - 0x518ec0
// From class:    std::__cxx11::time_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_518ea0(int64_t a1) {
    // 0x518ea0
    *(int64_t *)a1 = (int64_t)&g83;
    function_565970(a1);
    int64_t v1; // 0x518ea0
    return function_4eeb50(a1, v1, v1);
}

// Address range: 0x518ec0 - 0x518ee0
// From class:    std::__cxx11::time_get_byname<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          constructor
int64_t function_518ec0(int64_t a1) {
    // 0x518ec0
    *(int64_t *)a1 = (int64_t)&g83;
    function_565970(a1);
    int64_t v1; // 0x518ec0
    return function_4eeb50(a1, v1, v1);
}

// Address range: 0x518ee0 - 0x518f05
// From class:    std::__cxx11::collate<char>
// Type:          constructor
int64_t function_518ee0(int64_t a1) {
    // 0x518ee0
    *(int64_t *)a1 = (int64_t)&g76;
    function_5679e0(a1 + 16);
    return function_565970(a1);
}

// Address range: 0x518f10 - 0x518f3d
// From class:    std::__cxx11::collate<char>
// Type:          constructor
int64_t function_518f10(int64_t a1) {
    // 0x518f10
    *(int64_t *)a1 = (int64_t)&g76;
    function_5679e0(a1 + 16);
    function_565970(a1);
    int64_t v1; // 0x518f10
    return function_4eeb50(a1, v1, v1);
}

// Address range: 0x518f40 - 0x518f65
// From class:    std::__cxx11::collate_byname<char>
// Type:          constructor
int64_t function_518f40(int64_t a1) {
    // 0x518f40
    *(int64_t *)a1 = (int64_t)&g76;
    function_5679e0(a1 + 16);
    return function_565970(a1);
}

// Address range: 0x518f70 - 0x518f9d
// From class:    std::__cxx11::collate_byname<char>
// Type:          constructor
int64_t function_518f70(int64_t a1) {
    // 0x518f70
    *(int64_t *)a1 = (int64_t)&g76;
    function_5679e0(a1 + 16);
    function_565970(a1);
    int64_t v1; // 0x518f70
    return function_4eeb50(a1, v1, v1);
}

// Address range: 0x518fa0 - 0x518fe9
// From class:    std::__cxx11::messages<char>
// Type:          destructor
int64_t function_518fa0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 24); // 0x518fb0
    *(int64_t *)a1 = (int64_t)&g78;
    if (!((v1 == 0 | v1 == function_565f80()))) {
        // 0x518fca
        function_4eeb40(v1);
    }
    // 0x518fd2
    function_5679e0(a1 + 16);
    return function_565970(a1);
}

// Address range: 0x518ff0 - 0x519002
// From class:    std::__cxx11::messages<char>
// Type:          virtual member function
int64_t function_518ff0(int64_t a1) {
    // 0x518ff0
    function_518fa0(a1);
    int64_t v1; // 0x518ff0
    return function_4eeb50(a1, v1, v1);
}

// Address range: 0x519010 - 0x519023
// From class:    std::__cxx11::messages_byname<char>
// Type:          destructor
int64_t function_519010(int64_t a1) {
    // 0x519010
    *(int64_t *)a1 = (int64_t)&g84;
    return function_518fa0(a1);
}

// Address range: 0x519030 - 0x519050
// From class:    std::__cxx11::messages_byname<char>
// Type:          destructor
int64_t function_519030(int64_t a1) {
    // 0x519030
    *(int64_t *)a1 = (int64_t)&g84;
    function_518fa0(a1);
    int64_t v1; // 0x519030
    return function_4eeb50(a1, v1, v1);
}

// Address range: 0x519050 - 0x519120
int64_t function_519050(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x51905e
    if (a2 == 0 == (a3 != 0)) {
        // 0x519107
        function_542470("basic_string::_M_construct null not valid");
        // 0x519113
        __stack_chk_fail();
        return (int64_t)&g137;
    }
    int64_t v2 = a3 - a2; // 0x51907f
    int64_t v3 = v2; // bp-40, 0x519086
    int64_t v4; // 0x519050
    int64_t v5; // 0x519050
    if (v2 < 16) {
        if (v2 != 1) {
            // 0x519100
            v5 = a1;
            v4 = a1;
            if (v2 == 0) {
                goto lab_0x5190a4;
            } else {
                goto lab_0x5190e9;
            }
        } else {
            // 0x519099
            int64_t v6; // 0x519050
            *(char *)a1 = (char)v6;
            v5 = a1;
            goto lab_0x5190a4;
        }
    } else {
        int64_t v7 = function_52b020(a1, &v3, 0); // 0x5190d8
        *(int64_t *)a1 = v7;
        *(int64_t *)(a1 + 16) = v3;
        v4 = v7;
        goto lab_0x5190e9;
    }
  lab_0x5190e9:
    // 0x5190e9
    memcpy((int64_t *)v4, (int64_t *)a2, (int32_t)v2);
    v5 = v4;
    goto lab_0x5190a4;
  lab_0x5190a4:
    // 0x5190a4
    *(int64_t *)(a1 + 8) = v3;
    *(char *)(v3 + v5) = 0;
    int64_t result = __readfsqword(40) ^ v1; // 0x5190b5
    if (result == 0) {
        // 0x5190c0
        return result;
    }
    // 0x519113
    __stack_chk_fail();
    return (int64_t)&g137;
}

// Address range: 0x519120 - 0x519280
// From class:    std::__cxx11::collate_byname<char>
// Type:          virtual member function
int64_t function_519120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x519120
    char * str; // bp-136, 0x519120
    int64_t v1 = (int64_t)&str; // 0x519137
    int64_t v2 = __readfsqword(40); // 0x51913c
    int64_t v3; // bp-120, 0x519120
    str = (char *)&v3;
    function_519050(v1, a2, a3);
    char * str2; // bp-104, 0x519120
    int64_t v4 = (int64_t)&str2; // 0x51915e
    int64_t v5; // bp-88, 0x519120
    str2 = (char *)&v5;
    function_519050(v4, a4, a5);
    int64_t v6 = (int64_t)str; // 0x51917c
    int64_t v7 = (int64_t)str2; // 0x519186
    int64_t v8 = function_56b9a0(a1, v6, v7); // 0x5191df
    int64_t v9 = v8 & 0xffffffff; // 0x5191e6
    int64_t v10 = v7; // 0x5191e9
    int64_t v11 = v6; // 0x5191e9
    int64_t result = v9; // 0x5191e9
    if ((int32_t)v8 == 0) {
        // 0x5191a0
        int64_t v12; // 0x519120
        int64_t v13 = v12 + v6; // 0x519190
        int64_t v14 = v12 + v7; // 0x519193
        int64_t v15 = (int64_t)strlen(str) + v6; // 0x5191ab
        int64_t v16 = (int64_t)strlen(str2) + v7; // 0x5191b3
        int64_t v17 = v9; // 0x5191b9
        int64_t v18 = v6; // 0x5191b9
        int64_t v19 = v7; // 0x5191b9
        bool v20 = v13 == v15; // 0x5191b9
        bool v21 = v14 == v16; // 0x5191b9
        if (v13 == v15 || v14 == v16) {
          lab_0x5191a0:;
            bool v22 = v20;
            v10 = v19;
            v11 = v18;
            result = v22 ? v22 == v21 ? v17 : 0xffffffff : 1;
        } else {
            int64_t str3 = v15 + 1; // 0x5191ce
            int64_t str4 = v16 + 1; // 0x5191d2
            int64_t v23 = function_56b9a0(a1, str3, str4); // 0x5191df
            int64_t v24 = v23 & 0xffffffff; // 0x5191e6
            v10 = str4;
            v11 = str3;
            result = v24;
            while ((int32_t)v23 == 0) {
                int64_t v25 = str3 + (int64_t)strlen((char *)str3); // 0x5191ab
                int64_t v26 = str4 + (int64_t)strlen((char *)str4); // 0x5191b3
                v17 = v24;
                v18 = str3;
                v19 = str4;
                v20 = v13 == v25;
                v21 = v14 == v26;
                if (v13 == v25 || v14 == v26) {
                    goto lab_0x5191a0;
                }
                str3 = v25 + 1;
                str4 = v26 + 1;
                v23 = function_56b9a0(a1, str3, str4);
                v24 = v23 & 0xffffffff;
                v10 = str4;
                v11 = str3;
                result = v24;
            }
        }
    }
    int64_t v27 = (int64_t)str2; // 0x5191f0
    if (v4 + 16 != v27) {
        // 0x5191fe
        function_4eeb50(v27, v11, v10);
    }
    int64_t v28 = (int64_t)str; // 0x519207
    int64_t v29 = v1 + 16; // 0x51920c
    if (v29 != v28) {
        // 0x519215
        function_4eeb50(v28, v11, v10);
    }
    // 0x51921a
    if (v2 == __readfsqword(40)) {
        // 0x51922d
        return result;
    }
    // 0x519258
    __stack_chk_fail();
    int64_t v30 = (int64_t)str; // 0x519261
    if (v29 != v30) {
        // 0x519272
        function_4eeb50(v30, v11, v29);
    }
    // 0x519277
    _Unwind_Resume((struct _Unwind_Exception *)&g137);
    return (int64_t)&g137;
}

// Address range: 0x519280 - 0x5192c6
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_519280(int64_t result, int64_t a2) {
    int64_t str = *(int64_t *)(*(int64_t *)(a2 + 16) + 40); // 0x519294
    *(int64_t *)result = result + 16;
    int64_t v1 = -1; // 0x5192a2
    if (str != 0) {
        // 0x5192a4
        v1 = str + (int64_t)strlen((char *)str);
    }
    // 0x5192b1
    function_519050(result, str, v1);
    return result;
}

// Address range: 0x5192d0 - 0x519316
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_5192d0(int64_t result, int64_t a2) {
    int64_t str = *(int64_t *)(*(int64_t *)(a2 + 16) + 56); // 0x5192e4
    *(int64_t *)result = result + 16;
    int64_t v1 = -1; // 0x5192f2
    if (str != 0) {
        // 0x5192f4
        v1 = str + (int64_t)strlen((char *)str);
    }
    // 0x519301
    function_519050(result, str, v1);
    return result;
}

// Address range: 0x519320 - 0x519366
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_519320(int64_t result, int64_t a2) {
    int64_t str = *(int64_t *)(*(int64_t *)(a2 + 16) + 16); // 0x519334
    *(int64_t *)result = result + 16;
    int64_t v1 = -1; // 0x519342
    if (str != 0) {
        // 0x519344
        v1 = str + (int64_t)strlen((char *)str);
    }
    // 0x519351
    function_519050(result, str, v1);
    return result;
}

// Address range: 0x519370 - 0x5193b6
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb0EEE
// Type:          virtual member function
int64_t function_519370(int64_t result, int64_t a2) {
    int64_t str = *(int64_t *)(*(int64_t *)(a2 + 16) + 72); // 0x519384
    *(int64_t *)result = result + 16;
    int64_t v1 = -1; // 0x519392
    if (str != 0) {
        // 0x519394
        v1 = str + (int64_t)strlen((char *)str);
    }
    // 0x5193a1
    function_519050(result, str, v1);
    return result;
}

// Address range: 0x5193c0 - 0x519406
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb1EEE
// Type:          virtual member function
int64_t function_5193c0(int64_t result, int64_t a2) {
    int64_t str = *(int64_t *)(*(int64_t *)(a2 + 16) + 16); // 0x5193d4
    *(int64_t *)result = result + 16;
    int64_t v1 = -1; // 0x5193e2
    if (str != 0) {
        // 0x5193e4
        v1 = str + (int64_t)strlen((char *)str);
    }
    // 0x5193f1
    function_519050(result, str, v1);
    return result;
}

// Address range: 0x519410 - 0x519424
// From class:    *NSt13__facet_shims12_GLOBAL__N_115moneypunct_shimIcLb1EEE
// Type:          virtual member function
int64_t function_519410(int64_t a1, int64_t a2) {
    // 0x519410
    return *(int64_t *)(a2 + 16);
}

// Address range: 0x51a610 - 0x51ae3e
int64_t function_51a610(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x51a62a
    int64_t v2 = a4 + 208; // 0x51a63d
    int64_t v3 = function_554b00(v2); // 0x51a65f
    int64_t v4 = function_566390(&g92); // 0x51a670
    int64_t * v5 = (int64_t *)v2; // 0x51a678
    int64_t * v6 = (int64_t *)(*(int64_t *)(*v5 + 24) + 8 * v4); // 0x51a687
    int64_t v7 = *v6; // 0x51a687
    int64_t v8 = v7; // 0x51a68e
    if (v7 == 0) {
        int64_t v9 = function_4efd30(112); // 0x51ac85
        *(int32_t *)(v9 + 8) = 0;
        *(int64_t *)(v9 + 16) = 0;
        *(int64_t *)(v9 + 24) = 0;
        *(char *)(v9 + 32) = 0;
        *(int64_t *)(v9 + 40) = 0;
        *(int64_t *)(v9 + 48) = 0;
        *(int64_t *)v9 = (int64_t)&g72;
        *(int64_t *)(v9 + 56) = 0;
        *(int16_t *)(v9 + 33) = (int16_t)((int32_t)&g72 ^ (int32_t)&g72);
        *(int64_t *)(v9 + 64) = 0;
        *(int64_t *)(v9 + 72) = 0;
        *(int64_t *)(v9 + 80) = 0;
        *(int64_t *)(v9 + 88) = 0;
        *(int32_t *)(v9 + 96) = 0;
        *(char *)(v9 + 111) = 0;
        function_555a00(v9, v2);
        function_566890(*v5, v9, v4);
        v8 = *v6;
    }
    int64_t v10 = 0x100000000000000 * a3 >> 56; // 0x51a653
    int64_t v11 = *(int64_t *)(a6 + 8); // 0x51a69c
    int64_t v12; // 0x51a610
    int32_t v13; // bp-140, 0x51a610
    int64_t v14; // 0x51a610
    int64_t v15; // 0x51a610
    int64_t v16; // 0x51a610
    int64_t v17; // 0x51a610
    if (*(char *)(v8 + 100) == (char)a6) {
        // 0x51ab50
        v13 = *(int32_t *)(v8 + 96);
        v14 = v10;
        v16 = v3;
        if (v11 == 0) {
            goto lab_0x51a980;
        } else {
            // 0x51ab72
            v17 = v8 + 80;
            v15 = v8 + 72;
            v12 = a6 + 1;
            goto lab_0x51a6c3;
        }
    } else {
        // 0x51a6aa
        v13 = *(int32_t *)(v8 + 92);
        v17 = v8 + 64;
        v15 = v8 + 56;
        v12 = a6;
        goto lab_0x51a6c3;
    }
  lab_0x51a980:
    // 0x51a980
    *(int64_t *)(a4 + 16) = 0;
    int64_t v18 = __readfsqword(40) ^ v1; // 0x51a995
    if (v18 == 0) {
        // 0x51a9ac
        return result;
    }
    // 0x51adfb
    __stack_chk_fail();
    int64_t v19; // bp-104, 0x51a610
    if (v19 != (0x100000000 * v16 >> 32) + 16) {
        // 0x51ae19
        function_4eeb50(v19, v18, v14 % 256 | a3 & -256);
    }
    // 0x51ae1e
    int64_t v20; // 0x51a610
    int64_t v21 = v20 + 16; // 0x51ae28
    int64_t v22; // bp-136, 0x51a610
    if (v22 != v21) {
        // 0x51ae31
        function_4eeb50(v22, v18, v21);
    }
    // 0x51ae36
    _Unwind_Resume((struct _Unwind_Exception *)&g137);
    int64_t result2 = (int64_t)&g137; // 0x51ae39
  lab_0x51a9ac:
    // 0x51a9ac
    return result2;
  lab_0x51a6c3:;
    int64_t v23 = v12;
    uint64_t v24 = *(int64_t *)v17;
    uint64_t v25 = v23 + v11; // 0x51a6c3
    v14 = v10;
    v16 = v3;
    int64_t v26; // 0x51a610
    if (v11 == 0 || v25 < v23) {
        goto lab_0x51a980;
    } else {
        int64_t v27 = *(int64_t *)((0x100000000 * v3 >> 32) + 48) + 1; // 0x51a6dd
        char v28 = *(char *)(2 * (int64_t)*(char *)v23 + v27); // 0x51a6dd
        v14 = v10;
        v16 = v3;
        if ((v28 & 8) == 0) {
            goto lab_0x51a980;
        } else {
            int64_t v29 = v23 + 1; // 0x51a6fe
            v26 = v11;
            while (v25 != v29) {
                // 0x51a6f0
                if ((*(char *)(2 * (int64_t)*(char *)v29 + v27) & 8) == 0) {
                    // 0x51a9c0
                    v26 = v29 - v23;
                    goto lab_0x51a70a;
                }
                v29++;
                v26 = v11;
            }
            goto lab_0x51a70a;
        }
    }
  lab_0x51a70a:
    // 0x51a70a
    v14 = v10;
    v16 = v3;
    int64_t v30; // 0x51a610
    int64_t v31; // 0x51a610
    int32_t v32; // 0x51a610
    int64_t v33; // 0x51a610
    int64_t v34; // 0x51a610
    int32_t v35; // bp-120, 0x51a610
    int64_t v36; // 0x51a610
    int64_t v37; // 0x51a732
    int32_t * v38; // 0x51a741
    if (v26 == 0) {
        goto lab_0x51a980;
    } else {
        // 0x51a713
        v35 = 0;
        v37 = (int64_t)&v22;
        v22 = (int64_t)&v35;
        function_52b8e0(&v22, 2 * v26);
        v38 = (int32_t *)(v8 + 88);
        int32_t v39 = *v38; // 0x51a741
        int64_t v40 = v39; // 0x51a741
        int64_t v41 = v26 - v40; // 0x51a748
        v32 = v39;
        v33 = v40;
        v30 = v41;
        if (v41 < 1) {
            goto lab_0x51a7ba;
        } else {
            int64_t v42 = v39 < 0 ? v26 : v41; // 0x51a75a
            int64_t * v43 = (int64_t *)(v8 + 24); // 0x51a75e
            if (*v43 == 0) {
                // 0x51ac50
                function_52c050(v37, 0, 0, v23, v42);
                v36 = 0;
                v34 = 0;
                v31 = v42;
                if (*v38 < 1) {
                    goto lab_0x51a7cc;
                } else {
                    goto lab_0x51ab90;
                }
            } else {
                // 0x51a769
                function_52bdc0(v37, 0, 0, 2 * v42, 0);
                char v44 = *(char *)(v8 + 34); // 0x51a77c
                int64_t v45 = *(int64_t *)(v8 + 16); // 0x51a788
                int64_t result3 = function_556cf0(v22, v44, v45, *v43, v23, v42 + v23); // 0x51a794
                if (result3 != v22) {
                    // 0x51a9ac
                    return result3;
                }
                // 0x51a7af
                *(char *)result3 = 0;
                v32 = *v38;
                v33 = 0;
                v30 = v42;
                goto lab_0x51a7ba;
            }
        }
    }
  lab_0x51a7ba:;
    int32_t v46 = v32;
    v36 = 0;
    v34 = v33;
    v31 = v30;
    if (v46 >= 0 == (v46 != 0)) {
        goto lab_0x51ab90;
    } else {
        goto lab_0x51a7cc;
    }
  lab_0x51ab90:
    // 0x51ab90
    if (v22 != v37 + 16) {
        // 0x51abb9
        if (v35 % 256 == 0) {
            // 0x51ad48
            function_52b400(v37, 0, 0, 0, 1);
        }
    }
    // 0x51abcc
    *(char *)v22 = *(char *)(v8 + 33);
    *(char *)(v22 + 1) = 0;
    int64_t v47; // 0x51a610
    int64_t v48; // 0x51a610
    if (v31 < 0) {
        // 0x51ad70
        function_52bdc0(v37, 1, 0, -v31, (int32_t)*(char *)(v8 + 101));
        v47 = v26;
        v48 = v23;
        if (v26 > 0x7ffffffffffffffe) {
            // 0x51a9ac
            return 0x7ffffffffffffffe;
        }
    } else {
        int32_t v49 = *v38; // 0x51abf5
        v47 = v49;
        v48 = v31 + v23;
        if (v49 < 0) {
            // 0x51a9ac
            return 0x7ffffffffffffffe;
        }
    }
    // 0x51ac15
    function_52c9e0(v37, v48, v47);
    v36 = 1;
    v34 = v47;
    goto lab_0x51a7cc;
  lab_0x51a7cc:;
    int32_t v50 = *(int32_t *)(a4 + 24); // 0x51a7cc
    int64_t v51 = v36 + v24; // 0x51a7d5
    int64_t v52 = v51; // 0x51a7e9
    if ((v50 & 512) != 0) {
        // 0x51ab80
        v52 = *(int64_t *)(v8 + 48) + v51;
    }
    char v53 = 0; // bp-88, 0x51a80a
    int64_t v54 = (int64_t)&v19; // 0x51a816
    v19 = (int64_t)&v53;
    int64_t v55 = function_52b8e0(&v19, 2 * v52); // 0x51a823
    uint64_t v56 = *(int64_t *)(a4 + 16); // 0x51a82d
    int64_t v57 = (v55 & 0xffffff00 | (int64_t)(v56 > v52)) & (v34 & 0xffffff00 | (int64_t)((v50 & 176) == 16));
    int64_t v58 = 0;
    unsigned char v59 = *(char *)(v58 + (int64_t)&v13); // 0x51a867
    int64_t v60; // 0x51a610
    while (v59 >= 5) {
        // 0x51a894
        if (v58 == 3) {
            // 0x51a89e
            v60 = v57;
            if (v24 < 2) {
                goto lab_0x51a8e9;
            } else {
                int64_t v61 = v24 - 1; // 0x51a8c3
                result2 = 0x7fffffffffffffff;
                if (v61 < 0) {
                    goto lab_0x51a9ac;
                } else {
                    // 0x51a8d7
                    function_52c9e0(0x100000000 * v54 >> 32, *(int64_t *)v15 + 1, v61);
                    v60 = v61;
                    goto lab_0x51a8e9;
                }
            }
        }
        v58++;
        v59 = *(char *)(v58 + (int64_t)&v13);
    }
    int32_t v62 = *(int32_t *)(4 * (int64_t)v59 + (int64_t)&g60); // 0x51a873
    return (int64_t)v62 + (int64_t)&g60;
  lab_0x51a8e9:;
    int64_t v63 = 0x100000000 * v56;
    int64_t v64; // 0x51a610
    int64_t v65; // 0x51a610
    int64_t v66; // 0x51a610
    if (v63 == 0) {
        // 0x51a8e9
        v64 = 0x100000000 * v54 >> 32;
        v66 = v60;
        v65 = 0;
        goto lab_0x51a91d;
    } else {
        int64_t v67 = v63 >> 32; // 0x51a8e9
        int64_t v68 = 0x100000000 * v54 >> 32;
        function_52bdc0(v68, 0, 0, v67, (int32_t)(0x100000000000000 * a5 >> 56));
        v64 = v68;
        v66 = 0;
        v65 = v67;
        goto lab_0x51a91d;
    }
  lab_0x51a91d:;
    int64_t v69 = v19; // 0x51a922
    int64_t v70 = (char)v10 != 0 ? v66 : v65;
    if (v69 == v64 + 16) {
        goto lab_0x51a963;
    } else {
        // 0x51a95b
        function_4eeb50(v69, v69, v70);
        goto lab_0x51a963;
    }
  lab_0x51a963:;
    int64_t v71 = (char)v10 != 0 ? v10 : (int64_t)(v65 != v69);
    v14 = v71;
    v16 = v54;
    v20 = v37;
    if (v22 == v37 + 16) {
        goto lab_0x51a980;
    } else {
        // 0x51a976
        function_4eeb50(v22, v69, v70);
        v14 = v71;
        v16 = v54;
        v20 = v37;
        goto lab_0x51a980;
    }
}

// Address range: 0x51aeb0 - 0x51b6de
int64_t function_51aeb0(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x51aeca
    int64_t v2 = a4 + 208; // 0x51aedd
    int64_t v3 = function_554b00(v2); // 0x51aeff
    int64_t v4 = function_566390(&g93); // 0x51af10
    int64_t * v5 = (int64_t *)v2; // 0x51af18
    int64_t * v6 = (int64_t *)(*(int64_t *)(*v5 + 24) + 8 * v4); // 0x51af27
    int64_t v7 = *v6; // 0x51af27
    int64_t v8 = v7; // 0x51af2e
    if (v7 == 0) {
        int64_t v9 = function_4efd30(112); // 0x51b525
        *(int32_t *)(v9 + 8) = 0;
        *(int64_t *)(v9 + 16) = 0;
        *(int64_t *)(v9 + 24) = 0;
        *(char *)(v9 + 32) = 0;
        *(int64_t *)(v9 + 40) = 0;
        *(int64_t *)(v9 + 48) = 0;
        *(int64_t *)v9 = (int64_t)&g73;
        *(int64_t *)(v9 + 56) = 0;
        *(int16_t *)(v9 + 33) = (int16_t)((int32_t)&g73 ^ (int32_t)&g73);
        *(int64_t *)(v9 + 64) = 0;
        *(int64_t *)(v9 + 72) = 0;
        *(int64_t *)(v9 + 80) = 0;
        *(int64_t *)(v9 + 88) = 0;
        *(int32_t *)(v9 + 96) = 0;
        *(char *)(v9 + 111) = 0;
        function_555fe0(v9, v2);
        function_566890(*v5, v9, v4);
        v8 = *v6;
    }
    int64_t v10 = 0x100000000000000 * a3 >> 56; // 0x51aef3
    int64_t v11 = *(int64_t *)(a6 + 8); // 0x51af3c
    int64_t v12; // 0x51aeb0
    int32_t v13; // bp-140, 0x51aeb0
    int64_t v14; // 0x51aeb0
    int64_t v15; // 0x51aeb0
    int64_t v16; // 0x51aeb0
    int64_t v17; // 0x51aeb0
    if (*(char *)(v8 + 100) == (char)a6) {
        // 0x51b3f0
        v13 = *(int32_t *)(v8 + 96);
        v14 = v10;
        v16 = v3;
        if (v11 == 0) {
            goto lab_0x51b220;
        } else {
            // 0x51b412
            v17 = v8 + 80;
            v15 = v8 + 72;
            v12 = a6 + 1;
            goto lab_0x51af63;
        }
    } else {
        // 0x51af4a
        v13 = *(int32_t *)(v8 + 92);
        v17 = v8 + 64;
        v15 = v8 + 56;
        v12 = a6;
        goto lab_0x51af63;
    }
  lab_0x51b220:
    // 0x51b220
    *(int64_t *)(a4 + 16) = 0;
    int64_t v18 = __readfsqword(40) ^ v1; // 0x51b235
    if (v18 == 0) {
        // 0x51b24c
        return result;
    }
    // 0x51b69b
    __stack_chk_fail();
    int64_t v19; // bp-104, 0x51aeb0
    if (v19 != (0x100000000 * v16 >> 32) + 16) {
        // 0x51b6b9
        function_4eeb50(v19, v18, v14 % 256 | a3 & -256);
    }
    // 0x51b6be
    int64_t v20; // 0x51aeb0
    int64_t v21 = v20 + 16; // 0x51b6c8
    int64_t v22; // bp-136, 0x51aeb0
    if (v22 != v21) {
        // 0x51b6d1
        function_4eeb50(v22, v18, v21);
    }
    // 0x51b6d6
    _Unwind_Resume((struct _Unwind_Exception *)&g137);
    int64_t result2 = (int64_t)&g137; // 0x51b6d9
  lab_0x51b24c:
    // 0x51b24c
    return result2;
  lab_0x51af63:;
    int64_t v23 = v12;
    uint64_t v24 = *(int64_t *)v17;
    uint64_t v25 = v23 + v11; // 0x51af63
    v14 = v10;
    v16 = v3;
    int64_t v26; // 0x51aeb0
    if (v11 == 0 || v25 < v23) {
        goto lab_0x51b220;
    } else {
        int64_t v27 = *(int64_t *)((0x100000000 * v3 >> 32) + 48) + 1; // 0x51af7d
        char v28 = *(char *)(2 * (int64_t)*(char *)v23 + v27); // 0x51af7d
        v14 = v10;
        v16 = v3;
        if ((v28 & 8) == 0) {
            goto lab_0x51b220;
        } else {
            int64_t v29 = v23 + 1; // 0x51af9e
            v26 = v11;
            while (v25 != v29) {
                // 0x51af90
                if ((*(char *)(2 * (int64_t)*(char *)v29 + v27) & 8) == 0) {
                    // 0x51b260
                    v26 = v29 - v23;
                    goto lab_0x51afaa;
                }
                v29++;
                v26 = v11;
            }
            goto lab_0x51afaa;
        }
    }
  lab_0x51afaa:
    // 0x51afaa
    v14 = v10;
    v16 = v3;
    int64_t v30; // 0x51aeb0
    int64_t v31; // 0x51aeb0
    int32_t v32; // 0x51aeb0
    int64_t v33; // 0x51aeb0
    int64_t v34; // 0x51aeb0
    int32_t v35; // bp-120, 0x51aeb0
    int64_t v36; // 0x51aeb0
    int64_t v37; // 0x51afd2
    int32_t * v38; // 0x51afe1
    if (v26 == 0) {
        goto lab_0x51b220;
    } else {
        // 0x51afb3
        v35 = 0;
        v37 = (int64_t)&v22;
        v22 = (int64_t)&v35;
        function_52b8e0(&v22, 2 * v26);
        v38 = (int32_t *)(v8 + 88);
        int32_t v39 = *v38; // 0x51afe1
        int64_t v40 = v39; // 0x51afe1
        int64_t v41 = v26 - v40; // 0x51afe8
        v32 = v39;
        v33 = v40;
        v30 = v41;
        if (v41 < 1) {
            goto lab_0x51b05a;
        } else {
            int64_t v42 = v39 < 0 ? v26 : v41; // 0x51affa
            int64_t * v43 = (int64_t *)(v8 + 24); // 0x51affe
            if (*v43 == 0) {
                // 0x51b4f0
                function_52c050(v37, 0, 0, v23, v42);
                v36 = 0;
                v34 = 0;
                v31 = v42;
                if (*v38 < 1) {
                    goto lab_0x51b06c;
                } else {
                    goto lab_0x51b430;
                }
            } else {
                // 0x51b009
                function_52bdc0(v37, 0, 0, 2 * v42, 0);
                char v44 = *(char *)(v8 + 34); // 0x51b01c
                int64_t v45 = *(int64_t *)(v8 + 16); // 0x51b028
                int64_t result3 = function_556cf0(v22, v44, v45, *v43, v23, v42 + v23); // 0x51b034
                if (result3 != v22) {
                    // 0x51b24c
                    return result3;
                }
                // 0x51b04f
                *(char *)result3 = 0;
                v32 = *v38;
                v33 = 0;
                v30 = v42;
                goto lab_0x51b05a;
            }
        }
    }
  lab_0x51b05a:;
    int32_t v46 = v32;
    v36 = 0;
    v34 = v33;
    v31 = v30;
    if (v46 >= 0 == (v46 != 0)) {
        goto lab_0x51b430;
    } else {
        goto lab_0x51b06c;
    }
  lab_0x51b430:
    // 0x51b430
    if (v22 != v37 + 16) {
        // 0x51b459
        if (v35 % 256 == 0) {
            // 0x51b5e8
            function_52b400(v37, 0, 0, 0, 1);
        }
    }
    // 0x51b46c
    *(char *)v22 = *(char *)(v8 + 33);
    *(char *)(v22 + 1) = 0;
    int64_t v47; // 0x51aeb0
    int64_t v48; // 0x51aeb0
    if (v31 < 0) {
        // 0x51b610
        function_52bdc0(v37, 1, 0, -v31, (int32_t)*(char *)(v8 + 101));
        v47 = v26;
        v48 = v23;
        if (v26 > 0x7ffffffffffffffe) {
            // 0x51b24c
            return 0x7ffffffffffffffe;
        }
    } else {
        int32_t v49 = *v38; // 0x51b495
        v47 = v49;
        v48 = v31 + v23;
        if (v49 < 0) {
            // 0x51b24c
            return 0x7ffffffffffffffe;
        }
    }
    // 0x51b4b5
    function_52c9e0(v37, v48, v47);
    v36 = 1;
    v34 = v47;
    goto lab_0x51b06c;
  lab_0x51b06c:;
    int32_t v50 = *(int32_t *)(a4 + 24); // 0x51b06c
    int64_t v51 = v36 + v24; // 0x51b075
    int64_t v52 = v51; // 0x51b089
    if ((v50 & 512) != 0) {
        // 0x51b420
        v52 = *(int64_t *)(v8 + 48) + v51;
    }
    char v53 = 0; // bp-88, 0x51b0aa
    int64_t v54 = (int64_t)&v19; // 0x51b0b6
    v19 = (int64_t)&v53;
    int64_t v55 = function_52b8e0(&v19, 2 * v52); // 0x51b0c3
    uint64_t v56 = *(int64_t *)(a4 + 16); // 0x51b0cd
    int64_t v57 = (v55 & 0xffffff00 | (int64_t)(v56 > v52)) & (v34 & 0xffffff00 | (int64_t)((v50 & 176) == 16));
    int64_t v58 = 0;
    unsigned char v59 = *(char *)(v58 + (int64_t)&v13); // 0x51b107
    int64_t v60; // 0x51aeb0
    while (v59 >= 5) {
        // 0x51b134
        if (v58 == 3) {
            // 0x51b13e
            v60 = v57;
            if (v24 < 2) {
                goto lab_0x51b189;
            } else {
                int64_t v61 = v24 - 1; // 0x51b163
                result2 = 0x7fffffffffffffff;
                if (v61 < 0) {
                    goto lab_0x51b24c;
                } else {
                    // 0x51b177
                    function_52c9e0(0x100000000 * v54 >> 32, *(int64_t *)v15 + 1, v61);
                    v60 = v61;
                    goto lab_0x51b189;
                }
            }
        }
        v58++;
        v59 = *(char *)(v58 + (int64_t)&v13);
    }
    int32_t v62 = *(int32_t *)(4 * (int64_t)v59 + (int64_t)&g61); // 0x51b113
    return (int64_t)v62 + (int64_t)&g61;
  lab_0x51b189:;
    int64_t v63 = 0x100000000 * v56;
    int64_t v64; // 0x51aeb0
    int64_t v65; // 0x51aeb0
    int64_t v66; // 0x51aeb0
    if (v63 == 0) {
        // 0x51b189
        v64 = 0x100000000 * v54 >> 32;
        v66 = v60;
        v65 = 0;
        goto lab_0x51b1bd;
    } else {
        int64_t v67 = v63 >> 32; // 0x51b189
        int64_t v68 = 0x100000000 * v54 >> 32;
        function_52bdc0(v68, 0, 0, v67, (int32_t)(0x100000000000000 * a5 >> 56));
        v64 = v68;
        v66 = 0;
        v65 = v67;
        goto lab_0x51b1bd;
    }
  lab_0x51b1bd:;
    int64_t v69 = v19; // 0x51b1c2
    int64_t v70 = (char)v10 != 0 ? v66 : v65;
    if (v69 == v64 + 16) {
        goto lab_0x51b203;
    } else {
        // 0x51b1fb
        function_4eeb50(v69, v69, v70);
        goto lab_0x51b203;
    }
  lab_0x51b203:;
    int64_t v71 = (char)v10 != 0 ? v10 : (int64_t)(v65 != v69);
    v14 = v71;
    v16 = v54;
    v20 = v37;
    if (v22 == v37 + 16) {
        goto lab_0x51b220;
    } else {
        // 0x51b216
        function_4eeb50(v22, v69, v70);
        v14 = v71;
        v16 = v54;
        v20 = v37;
        goto lab_0x51b220;
    }
}

// Address range: 0x52fb30 - 0x530347
int64_t function_52fb30(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x52fb47
    int64_t v2 = a4 + 208; // 0x52fb5a
    int64_t v3 = function_50ab00(v2); // 0x52fb7c
    int64_t v4 = function_566390(&g94); // 0x52fb8b
    int64_t * v5 = (int64_t *)v2; // 0x52fb93
    int64_t * v6 = (int64_t *)(*(int64_t *)(*v5 + 24) + 8 * v4); // 0x52fba2
    int64_t v7 = *v6; // 0x52fba2
    int64_t v8 = v7; // 0x52fba9
    if (v7 == 0) {
        int64_t v9 = function_4efd30(160); // 0x5301a5
        *(int32_t *)(v9 + 8) = 0;
        *(int64_t *)(v9 + 16) = 0;
        *(int64_t *)(v9 + 24) = 0;
        *(char *)(v9 + 32) = 0;
        *(int64_t *)(v9 + 36) = 0;
        *(int64_t *)(v9 + 48) = 0;
        *(int64_t *)v9 = (int64_t)&g74;
        *(int64_t *)(v9 + 56) = 0;
        *(int64_t *)(v9 + 64) = 0;
        *(int64_t *)(v9 + 72) = 0;
        *(int64_t *)(v9 + 80) = 0;
        *(int64_t *)(v9 + 88) = 0;
        *(int64_t *)(v9 + 96) = 0;
        *(int32_t *)(v9 + 104) = 0;
        *(char *)(v9 + 152) = 0;
        function_50b7d0(v9, 0x100000000 * v2 >> 32);
        function_566890(*v5, v9, v4);
        v8 = *v6;
    }
    int64_t v10 = *(int64_t *)(a6 + 8); // 0x52fbb6
    int64_t v11; // 0x52fb30
    int32_t v12; // bp-140, 0x52fb30
    int64_t v13; // 0x52fb30
    int64_t v14; // 0x52fb30
    if (*(int32_t *)(v8 + 108) == (int32_t)a6) {
        // 0x52fff0
        v12 = *(int32_t *)(v8 + 104);
        v13 = *(int64_t *)(v8 + 80);
        v14 = *(int64_t *)(v8 + 88);
        v11 = v10 != 0 ? a6 + 4 : a6;
    } else {
        // 0x52fbc5
        v12 = *(int32_t *)(v8 + 100);
        v13 = *(int64_t *)(v8 + 64);
        v14 = *(int64_t *)(v8 + 72);
        v11 = a6;
    }
    int64_t v15 = 0x100000000000000 * a3 >> 56; // 0x52fb70
    int64_t v16 = v11;
    int64_t v17 = *(int64_t *)v3 - v16 >> 2; // 0x52fbfb
    int64_t * v18; // 0x52fb30
    int64_t v19; // 0x52fb30
    int64_t v20; // 0x52fb30
    int64_t v21; // 0x52fb30
    int32_t v22; // 0x52fb30
    int64_t v23; // 0x52fb30
    int64_t v24; // 0x52fb30
    int64_t v25; // 0x52fb30
    int64_t v26; // 0x52fb30
    int32_t v27; // bp-120, 0x52fb30
    int64_t v28; // bp-136, 0x52fb30
    int64_t v29; // 0x52fb30
    int64_t v30; // 0x52fb30
    int64_t v31; // 0x52fc78
    int32_t * v32; // 0x52fc8a
    if (v17 != 0) {
        int64_t v33 = v16 + 4 * v10; // 0x52fbde
        v27 = 0;
        v31 = (int64_t)&v28;
        v28 = (int64_t)&v27;
        function_54a3d0(&v28, 2 * v17, v16, v33);
        v32 = (int32_t *)(v8 + 96);
        int32_t v34 = *v32; // 0x52fc8a
        int64_t v35 = v34; // 0x52fc8a
        int64_t v36 = v17 - v35; // 0x52fc99
        v22 = v34;
        v23 = v33;
        v25 = v35;
        v20 = v36;
        if (v36 < 1) {
            goto lab_0x52fd1f;
        } else {
            int64_t v37 = v34 < 0 ? v17 : v36; // 0x52fca6
            int64_t * v38 = (int64_t *)(v8 + 24); // 0x52fcaa
            if (*v38 == 0) {
                // 0x530170
                function_54ab90(v31, 0, 0, v16, v37);
                v24 = v16;
                v26 = 0;
                v19 = 0;
                v21 = v37;
                if (*v32 < 1) {
                    goto lab_0x52fd27;
                } else {
                    goto lab_0x5300b0;
                }
            } else {
                // 0x52fcb5
                function_54a8d0(v31, 0, 0, 2 * v37, 0);
                int64_t v39 = *(int64_t *)(v8 + 16); // 0x52fccf
                int32_t v40 = *(int32_t *)(v8 + 40); // 0x52fcd8
                int64_t result = function_50cac0(v28, v40, v39, *v38, v16, 4 * v37 + v16); // 0x52fce6
                if (result - v28 >= 4) {
                    // 0x52fc36
                    return result;
                }
                // 0x52fd0e
                *(int32_t *)result = 0;
                v22 = *v32;
                v23 = 0;
                v25 = 0;
                v20 = v37;
                goto lab_0x52fd1f;
            }
        }
    } else {
        // 0x52fbde
        v18 = (int64_t *)(a4 + 16);
        v29 = v15;
        v30 = v2;
        goto lab_0x52fc04;
    }
  lab_0x52fd1f:;
    int32_t v41 = v22;
    v24 = v23;
    v26 = v25;
    v19 = 0;
    v21 = v20;
    if (v41 >= 0 == (v41 != 0)) {
        goto lab_0x5300b0;
    } else {
        goto lab_0x52fd27;
    }
  lab_0x52fc04:
    // 0x52fc04
    *v18 = 0;
    int64_t v42 = __readfsqword(40) ^ v1; // 0x52fc19
    if (v42 == 0) {
        // 0x52fc36
        return result2;
    }
    // 0x530324
    __stack_chk_fail();
    int64_t result3 = (int64_t)&g137; // 0x530340
    int64_t v43; // bp-104, 0x52fb30
    if (v43 != (0x100000000 * v30 >> 32) + 16) {
        // 0x530342
        result3 = function_4eeb50(v43, v42, v29);
    }
  lab_0x52fc36:
    // 0x52fc36
    return result3;
  lab_0x5300b0:;
    int64_t v44 = v28; // 0x5300e9
    if (v28 != v31 + 16 == v27 == 0) {
        // 0x530250
        function_549e80(v31, 0, 0, 0, 1);
        v44 = v28;
    }
    // 0x5300ef
    *(int32_t *)v44 = *(int32_t *)(v8 + 36);
    *(int32_t *)(v44 + 4) = 0;
    int64_t v45; // 0x52fb30
    int64_t v46; // 0x52fb30
    int64_t v47; // 0x52fb30
    if (v21 < 0) {
        int64_t v48 = -v21; // 0x5302a1
        function_54a8d0(v31, 1, 0, v48, *(int32_t *)(v8 + 112));
        v45 = v48;
        v46 = v17;
        v47 = v16;
        if (v17 > 0x1ffffffffffffffe) {
            // 0x52fc36
            return 0x1ffffffffffffffe;
        }
    } else {
        int32_t v49 = *v32; // 0x530116
        v45 = 1;
        v46 = v49;
        v47 = 4 * v21 + v16;
        if (v49 < 0) {
            // 0x52fc36
            return 0x1ffffffffffffffe;
        }
    }
    // 0x530135
    function_54b560(v31, v47, v46);
    v24 = v45;
    v26 = v46;
    v19 = 1;
    goto lab_0x52fd27;
  lab_0x52fd27:;
    int32_t v50 = *(int32_t *)(a4 + 24); // 0x52fd27
    int64_t v51 = v19 + v14; // 0x52fd2b
    int64_t v52 = v51; // 0x52fd3f
    if ((v50 & 512) != 0) {
        // 0x530050
        v52 = *(int64_t *)(v8 + 56) + v51;
    }
    int32_t v53 = 0; // bp-88, 0x52fd5d
    int64_t v54 = (int64_t)&v43; // 0x52fd6c
    v43 = (int64_t)&v53;
    int64_t v55 = function_54a3d0(&v43, 2 * v52, v26, v24); // 0x52fd79
    int64_t * v56 = (int64_t *)(a4 + 16);
    uint64_t v57 = *v56; // 0x52fd83
    int64_t v58 = (v55 & 0xffffff00 | (int64_t)(v57 > v52)) & (v26 & 0xffffff00 | (int64_t)((v50 & 176) == 16));
    int64_t v59 = 0;
    unsigned char v60 = *(char *)(v59 + (int64_t)&v12); // 0x52fdbf
    int64_t v61; // 0x52fb30
    int64_t v62; // 0x52fb30
    int64_t v63; // 0x52fb30
    int64_t v64; // 0x52fb30
    int64_t v65; // 0x52fb30
    while (v60 >= 5) {
        // 0x52ff4a
        if (v59 == 3) {
            if (v14 < 2) {
                int64_t v66 = 0x100000000 * v57;
                int64_t v67 = 0x100000000 * v54 >> 32;
                v61 = v67;
                v64 = v58;
                v63 = 0;
                v65 = v67;
                v62 = v66;
                if (v66 == 0) {
                    goto lab_0x52ff7d;
                } else {
                    goto lab_0x530020;
                }
            } else {
                int64_t v68 = v14 - 1; // 0x530072
                result3 = 0x1fffffffffffffff;
                if (v68 > 0x1fffffffffffffff) {
                    goto lab_0x52fc36;
                } else {
                    // 0x530086
                    v65 = 0x100000000 * v54 >> 32;
                    function_54b560(v65, v13 + 4, v68);
                    v61 = v65;
                    v64 = v68;
                    v63 = 0;
                    v62 = 0x100000000 * v57;
                    if ((int32_t)v57 == 0) {
                        goto lab_0x52ff7d;
                    } else {
                        goto lab_0x530020;
                    }
                }
            }
        }
        v59++;
        v60 = *(char *)(v59 + (int64_t)&v12);
    }
    int32_t v69 = *(int32_t *)(4 * (int64_t)v60 + (int64_t)&g62); // 0x52fdd1
    return (int64_t)v69 + (int64_t)&g62;
  lab_0x52ff7d:;
    int64_t v70 = v43; // 0x52ff82
    int64_t v71 = (char)v15 != 0 ? v64 : v63;
    if (v70 == v61 + 16) {
        goto lab_0x52ffc3;
    } else {
        // 0x52ffbb
        function_4eeb50(v70, v70, v71);
        goto lab_0x52ffc3;
    }
  lab_0x530020:;
    int64_t v72 = v62 >> 32;
    function_54a8d0(v65, 0, 0, v72, (int32_t)a5);
    v61 = v65;
    v64 = 0;
    v63 = v72;
    goto lab_0x52ff7d;
  lab_0x52ffc3:;
    int64_t v73 = (char)v15 != 0 ? v15 : (int64_t)(v63 != v70);
    v18 = v56;
    v29 = v73;
    v30 = v54;
    if (v28 == v31 + 16) {
        goto lab_0x52fc04;
    } else {
        // 0x52ffdd
        function_4eeb50(v28, v70, v71);
        v18 = v56;
        v29 = v73;
        v30 = v54;
        goto lab_0x52fc04;
    }
}

// Address range: 0x5303e0 - 0x530bf7
int64_t function_5303e0(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x5303f7
    int64_t v2 = a4 + 208; // 0x53040a
    int64_t v3 = function_50ab00(v2); // 0x53042c
    int64_t v4 = function_566390(&g95); // 0x53043b
    int64_t * v5 = (int64_t *)v2; // 0x530443
    int64_t * v6 = (int64_t *)(*(int64_t *)(*v5 + 24) + 8 * v4); // 0x530452
    int64_t v7 = *v6; // 0x530452
    int64_t v8 = v7; // 0x530459
    if (v7 == 0) {
        int64_t v9 = function_4efd30(160); // 0x530a55
        *(int32_t *)(v9 + 8) = 0;
        *(int64_t *)(v9 + 16) = 0;
        *(int64_t *)(v9 + 24) = 0;
        *(char *)(v9 + 32) = 0;
        *(int64_t *)(v9 + 36) = 0;
        *(int64_t *)(v9 + 48) = 0;
        *(int64_t *)v9 = (int64_t)&g75;
        *(int64_t *)(v9 + 56) = 0;
        *(int64_t *)(v9 + 64) = 0;
        *(int64_t *)(v9 + 72) = 0;
        *(int64_t *)(v9 + 80) = 0;
        *(int64_t *)(v9 + 88) = 0;
        *(int64_t *)(v9 + 96) = 0;
        *(int32_t *)(v9 + 104) = 0;
        *(char *)(v9 + 152) = 0;
        function_50bde0(v9, 0x100000000 * v2 >> 32);
        function_566890(*v5, v9, v4);
        v8 = *v6;
    }
    int64_t v10 = *(int64_t *)(a6 + 8); // 0x530466
    int64_t v11; // 0x5303e0
    int32_t v12; // bp-140, 0x5303e0
    int64_t v13; // 0x5303e0
    int64_t v14; // 0x5303e0
    if (*(int32_t *)(v8 + 108) == (int32_t)a6) {
        // 0x5308a0
        v12 = *(int32_t *)(v8 + 104);
        v13 = *(int64_t *)(v8 + 80);
        v14 = *(int64_t *)(v8 + 88);
        v11 = v10 != 0 ? a6 + 4 : a6;
    } else {
        // 0x530475
        v12 = *(int32_t *)(v8 + 100);
        v13 = *(int64_t *)(v8 + 64);
        v14 = *(int64_t *)(v8 + 72);
        v11 = a6;
    }
    int64_t v15 = 0x100000000000000 * a3 >> 56; // 0x530420
    int64_t v16 = v11;
    int64_t v17 = *(int64_t *)v3 - v16 >> 2; // 0x5304ab
    int64_t * v18; // 0x5303e0
    int64_t v19; // 0x5303e0
    int64_t v20; // 0x5303e0
    int64_t v21; // 0x5303e0
    int32_t v22; // 0x5303e0
    int64_t v23; // 0x5303e0
    int64_t v24; // 0x5303e0
    int64_t v25; // 0x5303e0
    int64_t v26; // 0x5303e0
    int32_t v27; // bp-120, 0x5303e0
    int64_t v28; // bp-136, 0x5303e0
    int64_t v29; // 0x5303e0
    int64_t v30; // 0x5303e0
    int64_t v31; // 0x530528
    int32_t * v32; // 0x53053a
    if (v17 != 0) {
        int64_t v33 = v16 + 4 * v10; // 0x53048e
        v27 = 0;
        v31 = (int64_t)&v28;
        v28 = (int64_t)&v27;
        function_54a3d0(&v28, 2 * v17, v16, v33);
        v32 = (int32_t *)(v8 + 96);
        int32_t v34 = *v32; // 0x53053a
        int64_t v35 = v34; // 0x53053a
        int64_t v36 = v17 - v35; // 0x530549
        v22 = v34;
        v23 = v33;
        v25 = v35;
        v20 = v36;
        if (v36 < 1) {
            goto lab_0x5305cf;
        } else {
            int64_t v37 = v34 < 0 ? v17 : v36; // 0x530556
            int64_t * v38 = (int64_t *)(v8 + 24); // 0x53055a
            if (*v38 == 0) {
                // 0x530a20
                function_54ab90(v31, 0, 0, v16, v37);
                v24 = v16;
                v26 = 0;
                v19 = 0;
                v21 = v37;
                if (*v32 < 1) {
                    goto lab_0x5305d7;
                } else {
                    goto lab_0x530960;
                }
            } else {
                // 0x530565
                function_54a8d0(v31, 0, 0, 2 * v37, 0);
                int64_t v39 = *(int64_t *)(v8 + 16); // 0x53057f
                int32_t v40 = *(int32_t *)(v8 + 40); // 0x530588
                int64_t result = function_50cac0(v28, v40, v39, *v38, v16, 4 * v37 + v16); // 0x530596
                if (result - v28 >= 4) {
                    // 0x5304e6
                    return result;
                }
                // 0x5305be
                *(int32_t *)result = 0;
                v22 = *v32;
                v23 = 0;
                v25 = 0;
                v20 = v37;
                goto lab_0x5305cf;
            }
        }
    } else {
        // 0x53048e
        v18 = (int64_t *)(a4 + 16);
        v29 = v15;
        v30 = v2;
        goto lab_0x5304b4;
    }
  lab_0x5305cf:;
    int32_t v41 = v22;
    v24 = v23;
    v26 = v25;
    v19 = 0;
    v21 = v20;
    if (v41 >= 0 == (v41 != 0)) {
        goto lab_0x530960;
    } else {
        goto lab_0x5305d7;
    }
  lab_0x5304b4:
    // 0x5304b4
    *v18 = 0;
    int64_t v42 = __readfsqword(40) ^ v1; // 0x5304c9
    if (v42 == 0) {
        // 0x5304e6
        return result2;
    }
    // 0x530bd4
    __stack_chk_fail();
    int64_t result3 = (int64_t)&g137; // 0x530bf0
    int64_t v43; // bp-104, 0x5303e0
    if (v43 != (0x100000000 * v30 >> 32) + 16) {
        // 0x530bf2
        result3 = function_4eeb50(v43, v42, v29);
    }
  lab_0x5304e6:
    // 0x5304e6
    return result3;
  lab_0x530960:;
    int64_t v44 = v28; // 0x530999
    if (v28 != v31 + 16 == v27 == 0) {
        // 0x530b00
        function_549e80(v31, 0, 0, 0, 1);
        v44 = v28;
    }
    // 0x53099f
    *(int32_t *)v44 = *(int32_t *)(v8 + 36);
    *(int32_t *)(v44 + 4) = 0;
    int64_t v45; // 0x5303e0
    int64_t v46; // 0x5303e0
    int64_t v47; // 0x5303e0
    if (v21 < 0) {
        int64_t v48 = -v21; // 0x530b51
        function_54a8d0(v31, 1, 0, v48, *(int32_t *)(v8 + 112));
        v45 = v48;
        v46 = v17;
        v47 = v16;
        if (v17 > 0x1ffffffffffffffe) {
            // 0x5304e6
            return 0x1ffffffffffffffe;
        }
    } else {
        int32_t v49 = *v32; // 0x5309c6
        v45 = 1;
        v46 = v49;
        v47 = 4 * v21 + v16;
        if (v49 < 0) {
            // 0x5304e6
            return 0x1ffffffffffffffe;
        }
    }
    // 0x5309e5
    function_54b560(v31, v47, v46);
    v24 = v45;
    v26 = v46;
    v19 = 1;
    goto lab_0x5305d7;
  lab_0x5305d7:;
    int32_t v50 = *(int32_t *)(a4 + 24); // 0x5305d7
    int64_t v51 = v19 + v14; // 0x5305db
    int64_t v52 = v51; // 0x5305ef
    if ((v50 & 512) != 0) {
        // 0x530900
        v52 = *(int64_t *)(v8 + 56) + v51;
    }
    int32_t v53 = 0; // bp-88, 0x53060d
    int64_t v54 = (int64_t)&v43; // 0x53061c
    v43 = (int64_t)&v53;
    int64_t v55 = function_54a3d0(&v43, 2 * v52, v26, v24); // 0x530629
    int64_t * v56 = (int64_t *)(a4 + 16);
    uint64_t v57 = *v56; // 0x530633
    int64_t v58 = (v55 & 0xffffff00 | (int64_t)(v57 > v52)) & (v26 & 0xffffff00 | (int64_t)((v50 & 176) == 16));
    int64_t v59 = 0;
    unsigned char v60 = *(char *)(v59 + (int64_t)&v12); // 0x53066f
    int64_t v61; // 0x5303e0
    int64_t v62; // 0x5303e0
    int64_t v63; // 0x5303e0
    int64_t v64; // 0x5303e0
    int64_t v65; // 0x5303e0
    while (v60 >= 5) {
        // 0x5307fa
        if (v59 == 3) {
            if (v14 < 2) {
                int64_t v66 = 0x100000000 * v57;
                int64_t v67 = 0x100000000 * v54 >> 32;
                v61 = v67;
                v64 = v58;
                v63 = 0;
                v65 = v67;
                v62 = v66;
                if (v66 == 0) {
                    goto lab_0x53082d;
                } else {
                    goto lab_0x5308d0;
                }
            } else {
                int64_t v68 = v14 - 1; // 0x530922
                result3 = 0x1fffffffffffffff;
                if (v68 > 0x1fffffffffffffff) {
                    goto lab_0x5304e6;
                } else {
                    // 0x530936
                    v65 = 0x100000000 * v54 >> 32;
                    function_54b560(v65, v13 + 4, v68);
                    v61 = v65;
                    v64 = v68;
                    v63 = 0;
                    v62 = 0x100000000 * v57;
                    if ((int32_t)v57 == 0) {
                        goto lab_0x53082d;
                    } else {
                        goto lab_0x5308d0;
                    }
                }
            }
        }
        v59++;
        v60 = *(char *)(v59 + (int64_t)&v12);
    }
    int32_t v69 = *(int32_t *)(4 * (int64_t)v60 + (int64_t)&g63); // 0x530681
    return (int64_t)v69 + (int64_t)&g63;
  lab_0x53082d:;
    int64_t v70 = v43; // 0x530832
    int64_t v71 = (char)v15 != 0 ? v64 : v63;
    if (v70 == v61 + 16) {
        goto lab_0x530873;
    } else {
        // 0x53086b
        function_4eeb50(v70, v70, v71);
        goto lab_0x530873;
    }
  lab_0x5308d0:;
    int64_t v72 = v62 >> 32;
    function_54a8d0(v65, 0, 0, v72, (int32_t)a5);
    v61 = v65;
    v64 = 0;
    v63 = v72;
    goto lab_0x53082d;
  lab_0x530873:;
    int64_t v73 = (char)v15 != 0 ? v15 : (int64_t)(v63 != v70);
    v18 = v56;
    v29 = v73;
    v30 = v54;
    if (v28 == v31 + 16) {
        goto lab_0x5304b4;
    } else {
        // 0x53088d
        function_4eeb50(v28, v70, v71);
        v18 = v56;
        v29 = v73;
        v30 = v54;
        goto lab_0x5304b4;
    }
}

// Address range: 0x55bec0 - 0x55c6ff
int64_t function_55bec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t result3 = a2; // bp-104, 0x55bed9
    int64_t v1 = a4; // bp-120, 0x55bef4
    __readfsqword(40);
    int64_t v2 = function_558300(); // 0x55bf1f
    int64_t v3 = function_524600(&result3, &v1); // 0x55bf34
    int64_t v4 = v3 & 0xffffffff; // 0x55bf3b
    int64_t v5; // 0x55bec0
    int64_t v6; // 0x55bec0
    int64_t v7; // 0x55bec0
    int64_t v8; // 0x55bec0
    int64_t v9; // 0x55bec0
    int64_t v10; // 0x55bec0
    int64_t v11; // 0x55bec0
    int64_t v12; // 0x55bec0
    char v13; // 0x55c452
    int64_t v14; // 0x55c443
    unsigned char v15; // 0x55c448
    int64_t v16; // 0x55c448
    char * v17; // 0x55c44e
    unsigned char v18; // 0x55c44e
    int64_t v19; // 0x55c44e
    if ((char)v3 == 0) {
        // 0x55c440
        v14 = function_5246d0(&result3);
        v15 = *(char *)(v2 + 111);
        v16 = v15;
        v17 = (char *)(v2 + 32);
        v18 = *v17;
        v19 = v18;
        v13 = v14;
        if (v15 == v13) {
            goto lab_0x55c630;
        } else {
            // 0x55c45a
            if (*(char *)(v2 + 110) == v13) {
                goto lab_0x55c630;
            } else {
                goto lab_0x55c463;
            }
        }
    } else {
        // 0x55bf44
        v12 = a3;
        v11 = a5;
        v9 = a4;
        v10 = (int64_t)*(char *)(v2 + 32);
        v8 = 0;
        v5 = 0;
        v6 = 0;
        v7 = v4;
        goto lab_0x55bf50;
    }
  lab_0x55c558_2:;
    // 0x55c558
    int64_t v20; // 0x55bec0
    v12 = v20;
    int64_t v21; // 0x55bec0
    v11 = v21;
    v9 = v16;
    int64_t v22; // 0x55bec0
    v10 = v22;
    int64_t v23; // 0x55bec0
    v8 = v23 & 0xffffffff;
    int64_t v24; // 0x55bec0
    v5 = v24;
    int64_t v25; // 0x55bec0
    v6 = v25;
    v7 = v4;
    goto lab_0x55bf50;
  lab_0x55c4ee_3:;
    // 0x55c4ee
    int64_t v179; // 0x55bec0
    v12 = v179;
    int64_t v180; // 0x55bec0
    v11 = v180;
    v9 = v16;
    v10 = (int64_t)*v17;
    unsigned char v55; // 0x55c482
    v8 = v55;
    v5 = 1;
    int64_t v57; // 0x55c49d
    v6 = v57;
    v7 = 1;
    goto lab_0x55bf50;
  lab_0x55c090_2:;
    // 0x55c090
    int32_t v26; // bp-72, 0x55bec0
    int64_t v181 = v26; // 0x55c090
    int64_t v154; // 0x55bec0
    int64_t v171 = v154; // 0x55c09a
    int64_t v172 = v181; // 0x55c09a
    int64_t v169 = v154; // 0x55c09a
    int64_t v170 = v181; // 0x55c09a
    if (*(int64_t *)(v181 - 24) == 0) {
        goto lab_0x55c0c3;
    } else {
        goto lab_0x55c0a4;
    }
  lab_0x55c193:;
    // 0x55c193
    int64_t v116; // 0x55bec0
    int64_t v182 = v116;
    int64_t v115; // 0x55bec0
    int64_t v183 = v115;
    int64_t v114; // 0x55bec0
    int64_t v184 = v114;
    int64_t v113; // 0x55bec0
    int64_t v185 = v113;
    int64_t v111; // 0x55bec0
    int64_t v186 = v111;
    char v110; // 0x55bec0
    char v187 = v110;
    int64_t v109; // 0x55bec0
    int64_t v188 = v109;
    int64_t v108; // 0x55bec0
    int64_t v189 = v108;
    char v190 = v185; // 0x55c193
    int64_t v191; // 0x55bec0
    int64_t v192; // 0x55bec0
    int64_t v150; // 0x55bec0
    int64_t v167; // 0x55bec0
    int64_t v193; // 0x55bec0
    int64_t v194; // 0x55bec0
    int64_t v151; // 0x55bec0
    int64_t v168; // 0x55bec0
    int64_t v195; // 0x55bec0
    int64_t v163; // 0x55bec0
    int64_t v166; // 0x55bec0
    int64_t v148; // 0x55bec0
    int64_t v164; // 0x55bec0
    int64_t v196; // 0x55bec0
    int64_t v149; // 0x55bec0
    int64_t v165; // 0x55bec0
    int64_t v112; // 0x55bec0
    int64_t v197; // 0x55bec0
    int64_t v198; // 0x55bec0
    char v147; // 0x55bec0
    char v162; // 0x55bec0
    char v199; // 0x55bec0
    int64_t v200; // 0x55bec0
    int64_t v146; // 0x55bec0
    int64_t v161; // 0x55bec0
    int64_t v201; // 0x55c309
    int64_t v202; // 0x55c354
    unsigned char v203; // 0x55c359
    int64_t v204; // 0x55c359
    unsigned char v205; // 0x55c35f
    int64_t v206; // 0x55c35f
    char v207; // 0x55c363
    char v75; // 0x55bf6d
    int64_t v84; // 0x55c169
    char * v85; // 0x55c16d
    int64_t v86; // 0x55c17b
    char * v88; // 0x55bec0
    int64_t * str; // 0x55bec0
    int64_t v89; // 0x55bec0
    if (*v88 == v190) {
        unsigned char v208 = v187 | (char)v182; // 0x55c2a0
        if (v208 != 0) {
            // break -> 0x55c709
            goto lab_0x55c709_3;
        }
        int64_t v209 = v112;
        if (*(int64_t *)((int64_t)v26 - 24) != 0) {
            // 0x55c2b9
            function_451f2(v86, 0x100000000000000 * v183 >> 56, v209, v186);
        }
        // 0x55c2c7
        function_451f2(a8, 46, v209, v186);
        v200 = v189;
        v198 = v188;
        v199 = v75;
        v196 = v186;
        v197 = v209;
        v192 = v184;
        v193 = v183;
        v194 = v182 & -256 | (int64_t)v208;
        goto lab_0x55c1d8;
    } else {
        int64_t * found_byte_pos = memchr(str, 0x1000000 * (int32_t)v185 >> 24, 10); // 0x55c1ab
        if (found_byte_pos == NULL) {
            // 0x55c2e8
            if (*(char *)(v2 + 128) != v190) {
                // 0x55c2f1
                char * v210; // 0x55bec0
                char v211 = *v210; // 0x55c2f1
                v146 = v189;
                v147 = v187;
                v148 = v186;
                v149 = 10;
                v150 = v183;
                v151 = v182;
                if (v211 != v190) {
                    goto lab_0x55c052_7;
                }
            }
            int64_t v212 = v26; // 0x55c301
            int64_t v213 = v182 & 0xffffffff ^ 1; // 0x55c306
            uint64_t v214 = v213 & v184;
            int64_t v215 = *(int64_t *)(v212 - 24); // 0x55c30c
            v161 = v189;
            v162 = v187;
            v163 = v215;
            v164 = v186;
            v165 = v213;
            v166 = v212;
            v167 = v183;
            v168 = v182;
            if ((char)v214 == 0) {
                goto lab_0x55c05b;
            }
            if (v187 == 0 == (v215 != 0)) {
                // 0x55c3f0
                function_451f2(v86, 0x100000000000000 * v183 >> 56, v213, v186);
            }
            // 0x55c326
            function_451f2(a8, 101, v213, v186);
            int64_t v216 = function_524600((int64_t *)function_5245c0(&result3), &v1); // 0x55c344
            v154 = v189;
            if ((char)v216 != 0) {
                goto lab_0x55c090_2;
            }
            // 0x55c351
            v201 = v214 % 256 | v184 & -256;
            v202 = function_5246d0(&result3);
            v203 = *(char *)(v2 + 111);
            v204 = v203;
            v205 = *v85;
            v206 = v205;
            v207 = v202;
            if (v203 == v207) {
                goto lab_0x55c378;
            } else {
                // 0x55c367
                if (*(char *)(v2 + 110) == v207) {
                    goto lab_0x55c378;
                } else {
                    // 0x55c36c
                    v191 = v201;
                    v195 = v201 & 0xffffffff;
                    goto lab_0x55c185;
                }
            }
        } else {
            // 0x55c1b9
            function_451f2(a8, 0x100000000000000 * ((int64_t)found_byte_pos - v84) + 0x3000000000000000 >> 56, 10, v186);
            v200 = v189;
            v198 = v188;
            v199 = v187;
            v196 = v186;
            v197 = 10;
            v192 = v89;
            v193 = v183 + 1 & 0xffffffff;
            v194 = v182;
            goto lab_0x55c1d8;
        }
    }
  lab_0x55c270:;
    // 0x55c270
    int64_t v124; // 0x55bec0
    char v119; // 0x55bec0
    char v217 = v119 | (char)v124; // 0x55c270
    if (v217 != 0) {
        // break -> 0x55c709
        goto lab_0x55c709_3;
    }
    // 0x55c27b
    int64_t v123; // 0x55bec0
    int64_t v218 = v123;
    int64_t v117; // 0x55bec0
    int64_t v219 = v117;
    int64_t v83; // 0x55bec0
    int64_t v81; // 0x55bec0
    int64_t v82; // 0x55bec0
    int64_t v80; // 0x55bec0
    int64_t result2; // 0x55c691
    if ((int32_t)v218 == 0) {
        int64_t * v220 = (int64_t *)a8; // 0x55c691
        result2 = *v220;
        uint32_t v221 = *(int32_t *)(result2 - 8); // 0x55c694
        if (v221 < 1) {
            goto lab_0x55c709_3;
        } else {
            // 0x55c69f
            if (result2 - 24 != (int64_t)&g96) {
                goto lab_0x55c709_3;
            } else {
                // 0x55c6ae
                *v220 = (int64_t)&g97;
                v80 = v219;
                v81 = a8;
                v82 = v221;
                v83 = v218;
                goto lab_0x55c6be;
            }
        }
    }
    // 0x55c284
    int64_t v120; // 0x55bec0
    int64_t v121; // 0x55bec0
    function_451f2(v86, 0x100000000000000 * v218 >> 56, v121, v120);
    v200 = v219;
    int64_t v118; // 0x55bec0
    v198 = v118;
    v199 = v217;
    v196 = v120;
    v197 = v121;
    int64_t v122; // 0x55bec0
    v192 = v122;
    v193 = 0;
    v194 = 0;
    goto lab_0x55c1d8;
  lab_0x55c1d8:;
    int64_t v222 = v194;
    int64_t v223 = v193;
    int64_t v224 = v192;
    int64_t v225 = v197;
    int64_t v226 = v196;
    char v227 = v199;
    int64_t v228 = v198;
    int64_t v229 = result3; // 0x55c1d8
    int64_t v230 = v200; // 0x55c1e0
    int64_t v231; // 0x55bec0
    if (v229 == 0) {
        goto lab_0x55c3cc;
    } else {
        int64_t * v232 = (int64_t *)(v229 + 16); // 0x55c1e6
        uint64_t v233 = *v232; // 0x55c1e6
        int64_t * v234 = (int64_t *)(v229 + 24); // 0x55c1ea
        uint64_t v235 = *v234; // 0x55c1ea
        int64_t v236 = v235; // 0x55c1ee
        int64_t v237 = v233; // 0x55c1ee
        if (v233 < v235) {
            // 0x55c1f4
            v237 = v233 + 1;
            *v232 = v237;
            v236 = *v234;
        }
        uint64_t v238 = v237; // 0x55c204
        if (v238 >= v236) {
            int64_t v239 = *(int64_t *)v229; // 0x55c5c8
            v231 = v239;
            if ((int32_t)v239 != -1) {
                goto lab_0x55c215;
            } else {
                // 0x55c5d7
                result3 = 0;
                v230 = -1;
                goto lab_0x55c3cc;
            }
        } else {
            // 0x55c212
            v231 = (int64_t)*(char *)v238;
            goto lab_0x55c215;
        }
    }
  lab_0x55c3cc:
    // 0x55c3cc
    v146 = v230;
    v147 = v227;
    v148 = v226;
    v149 = v225;
    v150 = v223;
    v151 = v222;
    if (v1 == 0) {
        goto lab_0x55c052_7;
    }
    int64_t v240 = v230; // 0x55c3e4
    char v241 = v75; // 0x55c3e4
    int64_t v242 = v1; // 0x55c3e4
    int64_t v243 = v230; // 0x55c3e4
    int64_t v244 = v228; // 0x55c3e4
    if ((int32_t)v228 != -1) {
        goto lab_0x55c250;
    } else {
        goto lab_0x55c230;
    }
  lab_0x55c378:;
    char * v87; // 0x55bec0
    if (v205 == 0) {
        goto lab_0x55c385;
    } else {
        // 0x55c37c
        v191 = v206;
        v195 = v206;
        if (*v87 == v207) {
            goto lab_0x55c185;
        } else {
            goto lab_0x55c385;
        }
    }
  lab_0x55c250:;
    int64_t v245 = v244;
    int64_t v246 = v243;
    int64_t v247 = function_5246d0(&result3); // 0x55c253
    unsigned char v248 = *v85; // 0x55c258
    int64_t v249 = v247 & 0xffffffff; // 0x55c25c
    v108 = v246;
    v109 = v245;
    v110 = v227;
    v111 = v226;
    v112 = 0;
    v113 = v249;
    v114 = v224;
    v115 = v223;
    v116 = v222;
    if (v248 == 0) {
        goto lab_0x55c193;
    } else {
        int64_t v250 = v248; // 0x55c258
        v108 = v246;
        v109 = v245;
        v110 = v227;
        v111 = v226;
        v112 = v250;
        v113 = v249;
        v114 = v224;
        v115 = v223;
        v116 = v222;
        v117 = v246;
        v118 = v245;
        v119 = v227;
        v120 = v226;
        v121 = v250;
        v122 = v224;
        v123 = v223;
        v124 = v222;
        if (*v87 != (char)v247) {
            goto lab_0x55c193;
        } else {
            goto lab_0x55c270;
        }
    }
  lab_0x55c230:;
    int64_t v251 = v242;
    uint64_t v252 = *(int64_t *)(v251 + 16); // 0x55c230
    int64_t v253; // 0x55bec0
    int64_t v254; // 0x55bec0
    char v255; // 0x55bec0
    if (v252 >= *(int64_t *)(v251 + 24)) {
        int64_t v256 = *(int64_t *)v251; // 0x55c5a0
        v253 = v256;
        if ((int32_t)v256 != -1) {
            goto lab_0x55c241;
        } else {
            // 0x55c5af
            v1 = 0;
            v254 = v228;
            v255 = v75;
            goto lab_0x55c247;
        }
    } else {
        // 0x55c23e
        v253 = (int64_t)*(char *)v252;
        goto lab_0x55c241;
    }
  lab_0x55c385:
    // 0x55c385
    if (*v88 == v207) {
        // 0x55c36c
        v191 = v201;
        v195 = v201 & 0xffffffff;
        goto lab_0x55c185;
    } else {
        // 0x55c38a
        function_451f2(a8, (v203 != v207 ? 44 : 43) + (int64_t)(v203 != v207), v206, v204);
        v200 = v189;
        v198 = v188;
        v199 = v187;
        v196 = v204;
        v197 = v206;
        v192 = v201;
        v193 = v183;
        v194 = v201 & 0xffffffff;
        goto lab_0x55c1d8;
    }
  lab_0x55c215:;
    int64_t v257 = v1; // 0x55c215
    int64_t v258 = 0x100000000 * v231 >> 32; // 0x55c21a
    v243 = v258;
    v244 = v228;
    if (v257 == 0) {
        goto lab_0x55c250;
    } else {
        // 0x55c223
        v146 = v258;
        v147 = v227;
        v148 = v226;
        v149 = v225;
        v150 = v223;
        v151 = v222;
        v240 = v258;
        v241 = 0;
        v242 = v257;
        if ((int32_t)v228 != -1) {
            goto lab_0x55c052_7;
        }
        goto lab_0x55c230;
    }
  lab_0x55c185:;
    int64_t v90 = v189; // 0x55bec0
    int64_t v91 = v188; // 0x55bec0
    char v92 = v187; // 0x55bec0
    int64_t v93 = v204; // 0x55bec0
    int64_t v94 = v206; // 0x55bec0
    int64_t v95 = v202 & 0xffffffff; // 0x55bec0
    int64_t v96 = v191; // 0x55bec0
    int64_t v97 = v183; // 0x55bec0
    int64_t v98 = v195; // 0x55bec0
    goto lab_0x55c185_2;
  lab_0x55c241:
    // 0x55c241
    v254 = 0x100000000 * v253 >> 32;
    v255 = 0;
    goto lab_0x55c247;
  lab_0x55c247:
    // 0x55c247
    v146 = v240;
    v147 = v227;
    v148 = v226;
    v149 = v225;
    v150 = v223;
    v151 = v222;
    v243 = v240;
    v244 = v254;
    if (v241 == v255) {
        goto lab_0x55c052_7;
    }
    goto lab_0x55c250;
  lab_0x55c10d_2:;
    // 0x55c10d
    int64_t v73; // 0x55bec0
    int64_t v72; // 0x55bec0
    int64_t v158; // 0x55bec0
    function_451f2(a8, v158, v72, v73);
    char v134; // 0x55bec0
    char v140 = v134; // 0x55c119
    int64_t v155; // 0x55bfbf
    int64_t v141 = v155; // 0x55c119
    int64_t v142 = v155; // 0x55c119
    goto lab_0x55c035;
  lab_0x55c035:;
    int64_t v259 = function_524600((int64_t *)function_5245c0(&result3), &v1); // 0x55c045
    int64_t v74; // 0x55bec0
    v146 = v74;
    v147 = v140;
    v148 = v73;
    v149 = v72;
    int64_t v69; // 0x55bec0
    v150 = v69;
    v151 = v142;
    if ((char)v259 != 0) {
        // break -> 0x55c052
        goto lab_0x55c052_7;
    }
    int64_t v260 = function_5246d0(&result3); // 0x55c153
    char v130 = v140; // 0x55c15a
    int64_t v131 = v260 & 0xffffffff; // 0x55c15a
    int64_t v132 = v141; // 0x55c15a
    int64_t v133 = v142; // 0x55c15a
    goto lab_0x55bf8e;
  lab_0x55c57c:;
    int64_t v261 = v1; // 0x55c57c
    int64_t v58; // 0x55bec0
    v179 = v58;
    v180 = v21;
    if (v261 == 0) {
        goto lab_0x55c4ee_3;
    }
    int64_t v262 = v58; // 0x55c595
    int64_t v263 = v261; // 0x55c595
    char v264 = 1; // 0x55c595
    int64_t v265 = v58; // 0x55c595
    int64_t v266 = v21; // 0x55c595
    if ((int32_t)v21 != -1) {
        goto lab_0x55c527;
    } else {
        goto lab_0x55c50b;
    }
  lab_0x55c527:;
    int64_t v267 = function_5246d0(&result3); // 0x55c530
    int64_t v46 = v265; // 0x55c539
    int64_t v47 = v266; // 0x55c539
    int64_t v48 = v267; // 0x55c539
    int64_t v49 = (int64_t)*v17; // 0x55c539
    int64_t v50 = 1; // 0x55c539
    int64_t v51 = v57; // 0x55c539
    goto lab_0x55c470;
  lab_0x55c50b:;
    int64_t v268 = v263;
    uint64_t v269 = *(int64_t *)(v268 + 16); // 0x55c50b
    int64_t v270; // 0x55bec0
    int64_t v271; // 0x55bec0
    char v272; // 0x55bec0
    if (v269 >= *(int64_t *)(v268 + 24)) {
        int64_t v273 = *(int64_t *)v268; // 0x55c608
        v270 = v273;
        if ((int32_t)v273 != -1) {
            goto lab_0x55c51c;
        } else {
            // 0x55c617
            v1 = 0;
            v271 = v21;
            v272 = 1;
            goto lab_0x55c522;
        }
    } else {
        // 0x55c519
        v270 = (int64_t)*(char *)v269;
        goto lab_0x55c51c;
    }
  lab_0x55c4d9:;
    int64_t v274 = v1; // 0x55c4d9
    int64_t v67; // 0x55bec0
    int64_t v275 = 0x100000000 * v67 >> 32; // 0x55c4de
    v265 = v275;
    v266 = v21;
    if (v274 == 0) {
        goto lab_0x55c527;
    } else {
        // 0x55c4e7
        v179 = v275;
        v180 = v21;
        v262 = v275;
        v263 = v274;
        v264 = 0;
        if ((int32_t)v21 != -1) {
            goto lab_0x55c4ee_3;
        }
        goto lab_0x55c50b;
    }
  lab_0x55c51c:
    // 0x55c51c
    v271 = 0x100000000 * v270 >> 32;
    v272 = 0;
    goto lab_0x55c522;
  lab_0x55c522:
    // 0x55c522
    v179 = v262;
    v180 = v271;
    v265 = v262;
    v266 = v271;
    if (v272 == v264) {
        goto lab_0x55c4ee_3;
    }
    goto lab_0x55c527;
  lab_0x55c630:
    if (v18 == 0) {
        goto lab_0x55c63e;
    } else {
        // 0x55c634
        if (*(char *)(v2 + 73) == v13) {
            goto lab_0x55c463;
        } else {
            goto lab_0x55c63e;
        }
    }
  lab_0x55bf50:
    // 0x55bf50
    v26 = (int64_t)&g97;
    int64_t v27 = v12; // 0x55bf67
    int64_t v28 = v11; // 0x55bf67
    int64_t v29 = v9; // 0x55bf67
    int64_t v30 = v10; // 0x55bf67
    int64_t v31 = v8; // 0x55bf67
    int64_t v32 = v5; // 0x55bf67
    int64_t v33 = v6; // 0x55bf67
    int64_t v34 = v7; // 0x55bf67
    int64_t v35 = v12; // 0x55bf67
    int64_t v36 = v11; // 0x55bf67
    int64_t v37 = v9; // 0x55bf67
    int64_t v38 = v10; // 0x55bf67
    int64_t v39 = v8; // 0x55bf67
    int64_t v40 = v5; // 0x55bf67
    int64_t v41 = v6; // 0x55bf67
    int64_t v42 = v7; // 0x55bf67
    if ((char)v10 != 0) {
        goto lab_0x55c41f;
    } else {
        goto lab_0x55bf6d;
    }
  lab_0x55c63e:
    // 0x55c63e
    if (*(char *)(v2 + 72) == v13) {
        goto lab_0x55c463;
    } else {
        // 0x55c648
        function_451f2(a8, (v15 != v13 ? 44 : 43) + (int64_t)(v15 != v13), v19, v16);
        int64_t result = function_524600((int64_t *)function_5245c0(&result3), &v1); // 0x55c66e
        if ((char)result == 0) {
            // 0x55c709
            return result;
        }
        // 0x55c67b
        v12 = a3;
        v11 = a5;
        v9 = v16;
        v10 = (int64_t)*v17;
        v8 = v14 & 0xffffffff;
        v5 = 0;
        v6 = 0;
        v7 = result & 0xffffffff;
        goto lab_0x55bf50;
    }
  lab_0x55c463:;
    char * v43 = (char *)(v2 + 73);
    char * v44 = (char *)(v2 + 72);
    char * v45 = (char *)(v2 + 114);
    v46 = a3;
    v47 = a5;
    v48 = v14;
    v49 = v19;
    v50 = 0;
    v51 = 0;
    while (true) {
      lab_0x55c470:
        // 0x55c470
        v25 = v51;
        v24 = v50;
        v22 = v49;
        v23 = v48;
        v21 = v47;
        v20 = v46;
        char v52; // 0x55bec0
        if (v22 == 0) {
            // 0x55c470
            v52 = v23;
        } else {
            char v53 = v23;
            v52 = v53;
            if (*v43 == v53) {
                // break -> 0x55c408
                break;
            }
        }
        char v54 = v52;
        if (*v44 == v54) {
            goto lab_0x55c558_2;
        }
        // 0x55c482
        v55 = *v45;
        if (v55 != v54) {
            goto lab_0x55c558_2;
        }
        if (v24 == 0) {
            // 0x55c540
            function_451f2(a8, 48, v22, v16);
        }
        int64_t v56 = result3; // 0x55c498
        v57 = v25 + 1 & 0xffffffff;
        v58 = v20;
        if (v56 == 0) {
            goto lab_0x55c57c;
        } else {
            int64_t * v59 = (int64_t *)(v56 + 16); // 0x55c4aa
            uint64_t v60 = *v59; // 0x55c4aa
            int64_t * v61 = (int64_t *)(v56 + 24); // 0x55c4ae
            uint64_t v62 = *v61; // 0x55c4ae
            int64_t v63 = v62; // 0x55c4b2
            int64_t v64 = v60; // 0x55c4b2
            if (v60 < v62) {
                // 0x55c4b8
                v64 = v60 + 1;
                *v59 = v64;
                v63 = *v61;
            }
            uint64_t v65 = v64; // 0x55c4c8
            if (v65 >= v63) {
                int64_t v66 = *(int64_t *)v56; // 0x55c5e8
                v67 = v66;
                if ((int32_t)v66 != -1) {
                    goto lab_0x55c4d9;
                } else {
                    // 0x55c5f7
                    result3 = 0;
                    v58 = -1;
                    goto lab_0x55c57c;
                }
            } else {
                // 0x55c4d6
                v67 = (int64_t)*(char *)v65;
                goto lab_0x55c4d9;
            }
        }
    }
    // 0x55c408
    v26 = (int64_t)&g97;
    v35 = v20;
    v36 = v21;
    v37 = (int64_t)&g96;
    v38 = (int64_t)&g97;
    v39 = v23 & 0xffffffff;
    v40 = v24;
    v41 = v25;
    v42 = v4;
    goto lab_0x55c41f;
  lab_0x55c41f:
    // 0x55c41f
    function_259ce((int64_t *)&v26, 32, (char)v38);
    v27 = v35;
    v28 = v36;
    v29 = v37;
    v30 = v38;
    v31 = v39;
    v32 = v40;
    v33 = v41;
    v34 = v42;
    goto lab_0x55bf6d;
  lab_0x55bf6d:;
    int64_t v68 = v34;
    v69 = v33;
    int64_t v70 = v32;
    int64_t v71 = v31;
    v72 = v30;
    v73 = v29;
    v74 = v27;
    v75 = *(char *)(v2 + 136);
    int64_t v76; // 0x55bec0
    int64_t v77; // 0x55bec0
    int64_t v78; // 0x55bec0
    int64_t v79; // 0x55bec0
    if (v75 != 0) {
        // 0x55c160
        v80 = v74;
        v81 = v73;
        v82 = v72;
        v83 = v69;
        if ((char)v68 == 0) {
            // 0x55c169
            v84 = v2 + 114;
            v85 = (char *)(v2 + 32);
            v86 = (int64_t)&v26;
            v87 = (char *)(v2 + 73);
            v88 = (char *)(v2 + 72);
            str = (int64_t *)v84;
            v89 = v75;
            v90 = v74;
            v91 = v28;
            v92 = 0;
            v93 = v73;
            v94 = (int64_t)*v85;
            v95 = v71;
            v96 = v70;
            v97 = v69;
            v98 = v68;
            while (true) {
              lab_0x55c185_2:;
                int64_t v99 = v98;
                int64_t v100 = v97;
                int64_t v101 = v96;
                int64_t v102 = v95;
                int64_t v103 = v94;
                int64_t v104 = v93;
                char v105 = v92;
                int64_t v106 = v91;
                int64_t v107 = v90;
                v108 = v107;
                v109 = v106;
                v110 = v105;
                v111 = v104;
                v112 = 0;
                v113 = v102;
                v114 = v101;
                v115 = v100;
                v116 = v99;
                if (v103 == 0) {
                    goto lab_0x55c193;
                } else {
                    // 0x55c189
                    v108 = v107;
                    v109 = v106;
                    v110 = v105;
                    v111 = v104;
                    v112 = v103;
                    v113 = v102;
                    v114 = v101;
                    v115 = v100;
                    v116 = v99;
                    v117 = v107;
                    v118 = v106;
                    v119 = v105;
                    v120 = v104;
                    v121 = v103;
                    v122 = v101;
                    v123 = v100;
                    v124 = v99;
                    if (*v87 == (char)v102) {
                        goto lab_0x55c270;
                    } else {
                        goto lab_0x55c193;
                    }
                }
            }
          lab_0x55c709_3:
            // 0x55c709
            return result2;
        }
        goto lab_0x55c6be;
    } else {
        // 0x55bf80
        v80 = v74;
        v81 = v73;
        v82 = v72;
        v83 = v69;
        if ((char)v68 != 0) {
            goto lab_0x55c6be;
        } else {
            char * v125 = (char *)(v2 + 72);
            char * v126 = (char *)(v2 + 128);
            char * v127 = (char *)(v2 + 134);
            char * v128 = (char *)(v2 + 111);
            char * v129 = (char *)(v2 + 110);
            v130 = 0;
            v131 = v71;
            v132 = v70;
            v133 = v68;
            while (true) {
              lab_0x55bf8e:
                // 0x55bf8e
                v134 = v130;
                int64_t v135 = v131; // 0x55bf93
                int64_t v136 = v132; // 0x55bf93
                int64_t v137 = v133; // 0x55bf93
                int64_t v138 = v131; // 0x55bf93
                int64_t v139 = v133; // 0x55bf93
                if ((char)v131 < 58) {
                  lab_0x55c022:
                    // 0x55c022
                    function_451f2(a8, v138 % 256, v72, v73);
                    v140 = v134;
                    v141 = 1;
                    v142 = v139;
                } else {
                    int64_t v143; // 0x55bec0
                    while (true) {
                        int64_t v144 = v137;
                        v143 = v136;
                        char v145 = v135; // 0x55bf99
                        if (*v125 == v145) {
                            if ((v134 || (char)v144) == 0) {
                                // break -> 0x55c12e
                                break;
                            }
                        }
                        // 0x55bfa3
                        if (*v126 != v145) {
                            // 0x55bfac
                            v146 = v74;
                            v147 = v134;
                            v148 = v73;
                            v149 = v72;
                            v150 = v69;
                            v151 = v144;
                            if (*v127 != v145) {
                                // break (via goto) -> 0x55c052
                                goto lab_0x55c052_7;
                            }
                        }
                        unsigned char v152 = ((char)v144 ^ 1) & (char)v143; // 0x55bfbf
                        v146 = v74;
                        v147 = v134;
                        v148 = v73;
                        v149 = v72;
                        v150 = v69;
                        v151 = v144;
                        if (v152 == 0) {
                            // break (via goto) -> 0x55c052
                            goto lab_0x55c052_7;
                        }
                        // 0x55bfc8
                        function_451f2(a8, 101, v72, v73);
                        int64_t v153 = function_524600((int64_t *)function_5245c0(&result3), &v1); // 0x55bfe6
                        v154 = v74;
                        if ((char)v153 != 0) {
                            goto lab_0x55c090_2;
                        }
                        // 0x55bff3
                        v155 = v152;
                        int64_t v156 = function_5246d0(&result3); // 0x55bff6
                        char v157 = v156; // 0x55bffb
                        v158 = 43;
                        if (*v128 == v157) {
                            goto lab_0x55c10d_2;
                        }
                        // 0x55c006
                        v158 = 45;
                        if (*v129 == v157) {
                            goto lab_0x55c10d_2;
                        }
                        int64_t v159 = v156 & 0xffffffff; // 0x55bffe
                        v135 = v159;
                        v136 = v155;
                        v137 = v155;
                        v138 = v159;
                        v139 = v155;
                        if (v157 < 58) {
                            goto lab_0x55c022;
                        }
                    }
                    // 0x55c12e
                    function_451f2(a8, 46, v72, v73);
                    v140 = 1;
                    v141 = v143;
                    v142 = 0;
                }
                goto lab_0x55c035;
            }
          lab_0x55c052_7:;
            int64_t v160 = v26; // 0x55c052
            v161 = v146;
            v162 = v147;
            v163 = *(int64_t *)(v160 - 24);
            v164 = v148;
            v165 = v149;
            v166 = v160;
            v167 = v150;
            v168 = v151;
          lab_0x55c05b:
            // 0x55c05b
            v169 = v161;
            v170 = v166;
            if (v163 == 0) {
                goto lab_0x55c0c3;
            } else {
                // 0x55c060
                if (v162 != 0) {
                    goto lab_0x55c0a4;
                } else {
                    // 0x55c067
                    v79 = v161;
                    v77 = v164;
                    v78 = v165;
                    v76 = v167;
                    v171 = v161;
                    v172 = v166;
                    if ((char)v168 != 0) {
                        goto lab_0x55c0a4;
                    } else {
                        goto lab_0x55c06c;
                    }
                }
            }
        }
    }
  lab_0x55c6be:
    // 0x55c6be
    v79 = v80;
    v77 = v81;
    v78 = v82;
    v76 = v83;
    v169 = v80;
    v170 = v26;
    if (g96 != 0) {
        goto lab_0x55c06c;
    } else {
        goto lab_0x55c0c3;
    }
  lab_0x55c06c:
    // 0x55c06c
    function_451f2((int64_t)&v26, 0x100000000000000 * v76 >> 56, v78, v77);
    v171 = v79;
    v172 = v26;
    goto lab_0x55c0a4;
  lab_0x55c0c3:;
    int64_t v177 = v170 - 24; // 0x55c0c3
    if (v177 != (int64_t)&g96) {
        // 0x55c6e8
        int64_t v178; // bp-73, 0x55bec0
        function_552550(v177, &v178, v169);
        return result3;
    }
    // 0x55c0dc
    __readfsqword(40);
    return result3;
  lab_0x55c0a4:;
    int64_t v173 = *(int64_t *)(v2 + 16); // 0x55c0a8
    int64_t v174 = function_569070(v173, *(int64_t *)(v2 + 24), (int64_t *)&v26); // 0x55c0af
    v169 = v171;
    v170 = v172;
    if ((char)v174 == 0) {
        // 0x55c0b8
        *(int32_t *)a7 = 4;
        int64_t v175; // 0x55bec0
        v169 = v175;
        int64_t v176; // 0x55bec0
        v170 = v176;
    }
    goto lab_0x55c0c3;
}

// Address range: 0x57d700 - 0x581461
int64_t function_57d700(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = __readfsqword(40); // 0x57d714
    int32_t * v2 = (int32_t *)(a1 + 304);
    int64_t v3; // 0x57d700
    int64_t v4; // 0x57d700
    if (a3 == 0) {
        // 0x57d970
        *v2 = 1;
    } else {
        // 0x57d730
        if (*v2 == 0) {
            if ((int32_t)a3 < 80) {
                int32_t v5 = *(int32_t *)((4 * a3 & 0x3fffffffc) + (int64_t)&g64); // 0x57d75a
                return (int64_t)v5 + (int64_t)&g64;
            }
            // 0x57d980
            *v2 = 1;
            v4 = a3;
            v3 = a2 & 0xffffffff;
        }
    }
    int64_t result = __readfsqword(40) ^ v1; // 0x57d928
    if (result == 0) {
        // 0x57d937
        return result;
    }
    // 0x581376
    bool v6; // 0x57d700
    int64_t v7 = v6 ? -1 : 1;
    int64_t v8 = v3 & 0xffffffff;
    int64_t * v9 = (int64_t *)(a1 + 256);
    char * v10 = (char *)(a1 + 255);
    int64_t * v11 = (int64_t *)(a1 + 320);
    char * v12 = (char *)(a1 + 264);
    int64_t v13 = v4;
    __stack_chk_fail();
    int64_t v14 = *(int64_t *)(v13 + 8); // 0x58137b
    int64_t v15 = v13; // 0x581382
    if (*(int32_t *)v14 == 1) {
        // 0x581388
        v15 = *(int32_t *)*(int64_t *)(v13 + 16) == 41 ? v14 : v13;
    }
    int64_t v16 = v15;
    int64_t v17 = (int64_t)"sZ";
    int64_t v18; // 0x57d700
    unsigned char v19 = *(char *)v18; // 0x580747
    char v20 = *(char *)v17; // 0x580747
    int64_t v21 = 2; // 0x580747
    char v22 = v20; // 0x580747
    bool v23 = false; // 0x580747
    int64_t v24; // 0x57d700
    int64_t v25; // 0x57d700
    while (v19 == v20) {
        v25 = v17 + v7;
        v18 += v7;
        v24 = v21;
        v22 = v19;
        v23 = true;
        if (v21 == 0) {
            // break -> 
            break;
        }
        v17 = v25;
        v19 = *(char *)v18;
        v20 = *(char *)v17;
        v21 = v24 - 1;
        v22 = v20;
        v23 = false;
    }
    unsigned char v26 = v22;
    int64_t v27 = (int64_t)!((v19 < v26 | v23)) - (int64_t)(v19 < v26); // 0x58074c
    char v28; // 0x57d700
    unsigned char v29; // 0x57d700
    char v30; // 0x57d700
    unsigned char v31; // 0x57d700
    char v32; // 0x57d700
    unsigned char v33; // 0x57d700
    int64_t v34; // 0x57d700
    int64_t v35; // 0x57d700
    int64_t v36; // 0x57d700
    int64_t v37; // 0x57d700
    int64_t v38; // 0x57d700
    int64_t v39; // 0x57d700
    int64_t v40; // 0x580ddc
    int64_t v41; // 0x58128b
    int64_t v42; // 0x57d700
    int64_t v43; // 0x57d700
    int64_t v44; // 0x57d700
    int64_t v45; // 0x57d700
    int64_t v46; // 0x57d700
    int64_t v47; // 0x57d700
    int64_t v48; // 0x57d700
    int64_t v49; // 0x57d700
    int64_t v50; // 0x57d700
    int64_t v51; // 0x57d700
    int64_t v52; // 0x57d700
    int64_t v53; // 0x57d700
    int64_t v54; // 0x57d700
    int64_t v55; // 0x57d700
    int64_t v56; // 0x57d700
    int64_t v57; // 0x57d700
    int64_t v58; // 0x57d700
    int64_t v59; // 0x57d700
    int64_t v60; // 0x57d700
    int64_t v61; // 0x57d700
    int64_t v62; // 0x57d700
    int64_t v63; // 0x57d700
    int64_t v64; // 0x57d700
    int64_t v65; // 0x57d700
    int64_t v66; // 0x57d700
    int64_t v67; // 0x57d700
    int64_t v68; // 0x57d700
    int64_t v69; // 0x57d700
    int64_t v70; // 0x57d700
    int64_t v71; // 0x57d700
    int64_t v72; // 0x58126c
    unsigned char v73; // 0x580769
    char v74; // 0x580769
    int64_t v75; // 0x580769
    int64_t v76; // 0x581287
    int64_t v77; // 0x58128b
    int64_t v78; // 0x580dee
    unsigned char v79; // 0x580795
    char v80; // 0x580795
    int64_t v81; // 0x580795
    int64_t v82; // 0x580e03
    unsigned char v83; // 0x5807b3
    char v84; // 0x5807b3
    int64_t v85; // 0x5807b3
    int64_t v86; // 0x580ddf
    int64_t v87; // 0x5807c2
    int64_t v88; // 0x580e1f
    int64_t v89; // 0x580e23
    int64_t v90; // 0x580829
    bool v91; // 0x57d700
    bool v92; // 0x57d700
    bool v93; // 0x57d700
    if ((int32_t)v27 == 0) {
        // 0x581266
        v72 = function_57a0c0(a1, v16, v27, v21);
        v38 = v27;
        v45 = v72;
        v39 = v27;
        if (v72 != 0) {
            v46 = v45;
            v41 = v38;
            v39 = v41;
            while (*(int32_t *)v46 == 47) {
                // 0x581280
                v39 = v41;
                if (*(int64_t *)(v46 + 8) == 0) {
                    // break -> 0x581298
                    break;
                }
                // 0x581287
                v76 = *(int64_t *)(v46 + 16);
                v77 = v41 + 1 & 0xffffffff;
                v38 = v77;
                v45 = v76;
                v39 = v77;
                if (v76 == 0) {
                    // break -> 0x581298
                    break;
                }
                v46 = v45;
                v41 = v38;
                v39 = v41;
            }
        }
        // 0x581298
        function_57a2b0(a1, v39 & 0xffffffff);
        v47 = v16;
    } else {
        v61 = (int64_t)"sP";
        v73 = *(char *)v66;
        v74 = *(char *)v61;
        v75 = 2;
        v28 = v74;
        v91 = false;
        while (v73 == v74) {
            // 0x58075a
            v60 = v61 + v7;
            v66 += v7;
            v54 = v75;
            v28 = v73;
            v91 = true;
            if (v75 == 0) {
                // break -> 
                break;
            }
            v61 = v60;
            v73 = *(char *)v66;
            v74 = *(char *)v61;
            v75 = v54 - 1;
            v28 = v74;
            v91 = false;
        }
        v29 = v28;
        v58 = v75;
        v48 = v16;
        if ((v73 >= v29 && !v91) == v73 < v29) {
            v49 = v48;
            v40 = 0;
            v37 = v40;
            v50 = v49;
            while (*(int32_t *)v49 == 47) {
                // 0x580dee
                v78 = *(int64_t *)(v49 + 8);
                v37 = v40;
                v50 = v49;
                if (v78 == 0) {
                    // break -> 0x580e34
                    break;
                }
                // 0x580df7
                v59 = v58;
                if (*(int32_t *)v78 != 74) {
                    // 0x580ddc
                    v57 = v59;
                    v70 = v40 + 1;
                } else {
                    // 0x580dfc
                    v82 = function_57a0c0(a1, *(int64_t *)(v78 + 8), v40, v59);
                    v43 = v82;
                    v53 = 0;
                    if (v82 != 0) {
                        v52 = 0;
                        v44 = v43;
                        v53 = v52;
                        while (*(int32_t *)v44 == 47) {
                            // 0x580e18
                            v53 = v52;
                            if (*(int64_t *)(v44 + 8) == 0) {
                                // break -> 0x580e30
                                break;
                            }
                            // 0x580e1f
                            v88 = *(int64_t *)(v44 + 16);
                            v89 = v52 + 1 & 0xffffffff;
                            v43 = v88;
                            v51 = v89;
                            v53 = v89;
                            if (v88 == 0) {
                                // break -> 0x580e30
                                break;
                            }
                            v52 = v51;
                            v44 = v43;
                            v53 = v52;
                        }
                    }
                    // 0x580e30
                    v57 = v53;
                    v70 = v53 + v40;
                }
                // 0x580ddf
                v69 = v70 & 0xffffffff;
                v86 = *(int64_t *)(v49 + 16);
                v36 = v69;
                v58 = v57;
                v48 = v86;
                v37 = v69;
                v50 = 0;
                if (v86 == 0) {
                    // break -> 0x580e34
                    break;
                }
                v49 = v48;
                v40 = v36;
                v37 = v40;
                v50 = v49;
            }
            // 0x580e34
            function_57a2b0(a1, v37 & 0xffffffff);
            v47 = v50;
        } else {
            // 0x580778
            function_582980(a1, v8, v71, v75);
            v63 = (int64_t)"gs";
            v79 = *(char *)v67;
            v80 = *(char *)v63;
            v81 = 2;
            v30 = v80;
            v92 = false;
            while (v79 == v80) {
                v62 = v63 + v7;
                v67 += v7;
                v55 = v81;
                v30 = v79;
                v92 = true;
                if (v81 == 0) {
                    // break -> 
                    break;
                }
                v63 = v62;
                v79 = *(char *)v67;
                v80 = *(char *)v63;
                v81 = v55 - 1;
                v30 = v80;
                v92 = false;
            }
            v31 = v30;
            if ((v79 >= v31 && !v92) == v79 < v31) {
                // 0x580f6f
                function_581610(a1, v8, v16, v81);
                v47 = v16;
            } else {
                v65 = (int64_t)"st";
                v83 = *(char *)v68;
                v84 = *(char *)v65;
                v85 = 2;
                v32 = v84;
                v93 = false;
                while (v83 == v84) {
                    // 0x5807a4
                    v64 = v65 + v7;
                    v68 += v7;
                    v56 = v85;
                    v32 = v83;
                    v93 = true;
                    if (v85 == 0) {
                        // break -> 
                        break;
                    }
                    v65 = v64;
                    v83 = *(char *)v68;
                    v84 = *(char *)v65;
                    v85 = v56 - 1;
                    v32 = v84;
                    v93 = false;
                }
                v33 = v32;
                if ((v83 >= v33 && !v93) != v83 < v33) {
                    // 0x57f67a
                    function_582a30(a1, v8, v16, v85);
                    v47 = v16;
                } else {
                    // 0x5807c2
                    v87 = *v9;
                    v34 = v87;
                    if (v87 == 255) {
                        // 0x5807cf
                        *v10 = 0;
                        *v11 = *v11 + 1;
                        *v9 = 0;
                        v34 = 0;
                    }
                    // 0x5807fe
                    *v9 = v34 + 1;
                    *(char *)(v34 + a1) = 40;
                    *v12 = 40;
                    function_581610(a1, v8, v16, v85);
                    v90 = *v9;
                    v35 = v90 + 1;
                    v42 = v90;
                    if (v90 == 255) {
                        // 0x58083c
                        *v10 = 0;
                        *v11 = *v11 + 1;
                        v35 = 1;
                        v42 = 0;
                    }
                    // 0x580867
                    *v9 = v35;
                    *(char *)(v42 + a1) = 41;
                    *v12 = 41;
                    v47 = v16;
                }
            }
        }
    }
    int64_t result2 = __readfsqword(40) ^ v1; // 0x57d928
    while (result2 != 0) {
        // 0x581376
        v13 = v47;
        __stack_chk_fail();
        v14 = *(int64_t *)(v13 + 8);
        v15 = v13;
        if (*(int32_t *)v14 == 1) {
            // 0x581388
            v15 = *(int32_t *)*(int64_t *)(v13 + 16) == 41 ? v14 : v13;
        }
        // 0x580738
        v16 = v15;
        v17 = (int64_t)"sZ";
        v19 = *(char *)v18;
        v20 = *(char *)v17;
        v21 = 2;
        v22 = v20;
        v23 = false;
        while (v19 == v20) {
            v25 = v17 + v7;
            v18 += v7;
            v24 = v21;
            v22 = v19;
            v23 = true;
            if (v21 == 0) {
                // break -> 
                break;
            }
            v17 = v25;
            v19 = *(char *)v18;
            v20 = *(char *)v17;
            v21 = v24 - 1;
            v22 = v20;
            v23 = false;
        }
        v26 = v22;
        v27 = (int64_t)!((v19 < v26 | v23)) - (int64_t)(v19 < v26);
        if ((int32_t)v27 == 0) {
            // 0x581266
            v72 = function_57a0c0(a1, v16, v27, v21);
            v38 = v27;
            v45 = v72;
            v39 = v27;
            if (v72 != 0) {
                v46 = v45;
                v41 = v38;
                v39 = v41;
                while (*(int32_t *)v46 == 47) {
                    // 0x581280
                    v39 = v41;
                    if (*(int64_t *)(v46 + 8) == 0) {
                        // break -> 0x581298
                        break;
                    }
                    // 0x581287
                    v76 = *(int64_t *)(v46 + 16);
                    v77 = v41 + 1 & 0xffffffff;
                    v38 = v77;
                    v45 = v76;
                    v39 = v77;
                    if (v76 == 0) {
                        // break -> 0x581298
                        break;
                    }
                    v46 = v45;
                    v41 = v38;
                    v39 = v41;
                }
            }
            // 0x581298
            function_57a2b0(a1, v39 & 0xffffffff);
            v47 = v16;
        } else {
            v61 = (int64_t)"sP";
            v73 = *(char *)v66;
            v74 = *(char *)v61;
            v75 = 2;
            v28 = v74;
            v91 = false;
            while (v73 == v74) {
                // 0x58075a
                v60 = v61 + v7;
                v66 += v7;
                v54 = v75;
                v28 = v73;
                v91 = true;
                if (v75 == 0) {
                    // break -> 
                    break;
                }
                v61 = v60;
                v73 = *(char *)v66;
                v74 = *(char *)v61;
                v75 = v54 - 1;
                v28 = v74;
                v91 = false;
            }
            v29 = v28;
            v58 = v75;
            v48 = v16;
            if ((v73 >= v29 && !v91) == v73 < v29) {
                v49 = v48;
                v40 = 0;
                v37 = v40;
                v50 = v49;
                while (*(int32_t *)v49 == 47) {
                    // 0x580dee
                    v78 = *(int64_t *)(v49 + 8);
                    v37 = v40;
                    v50 = v49;
                    if (v78 == 0) {
                        // break -> 0x580e34
                        break;
                    }
                    // 0x580df7
                    v59 = v58;
                    if (*(int32_t *)v78 != 74) {
                        // 0x580ddc
                        v57 = v59;
                        v70 = v40 + 1;
                    } else {
                        // 0x580dfc
                        v82 = function_57a0c0(a1, *(int64_t *)(v78 + 8), v40, v59);
                        v43 = v82;
                        v53 = 0;
                        if (v82 != 0) {
                            v52 = 0;
                            v44 = v43;
                            v53 = v52;
                            while (*(int32_t *)v44 == 47) {
                                // 0x580e18
                                v53 = v52;
                                if (*(int64_t *)(v44 + 8) == 0) {
                                    // break -> 0x580e30
                                    break;
                                }
                                // 0x580e1f
                                v88 = *(int64_t *)(v44 + 16);
                                v89 = v52 + 1 & 0xffffffff;
                                v43 = v88;
                                v51 = v89;
                                v53 = v89;
                                if (v88 == 0) {
                                    // break -> 0x580e30
                                    break;
                                }
                                v52 = v51;
                                v44 = v43;
                                v53 = v52;
                            }
                        }
                        // 0x580e30
                        v57 = v53;
                        v70 = v53 + v40;
                    }
                    // 0x580ddf
                    v69 = v70 & 0xffffffff;
                    v86 = *(int64_t *)(v49 + 16);
                    v36 = v69;
                    v58 = v57;
                    v48 = v86;
                    v37 = v69;
                    v50 = 0;
                    if (v86 == 0) {
                        // break -> 0x580e34
                        break;
                    }
                    v49 = v48;
                    v40 = v36;
                    v37 = v40;
                    v50 = v49;
                }
                // 0x580e34
                function_57a2b0(a1, v37 & 0xffffffff);
                v47 = v50;
            } else {
                // 0x580778
                function_582980(a1, v8, v71, v75);
                v63 = (int64_t)"gs";
                v79 = *(char *)v67;
                v80 = *(char *)v63;
                v81 = 2;
                v30 = v80;
                v92 = false;
                while (v79 == v80) {
                    v62 = v63 + v7;
                    v67 += v7;
                    v55 = v81;
                    v30 = v79;
                    v92 = true;
                    if (v81 == 0) {
                        // break -> 
                        break;
                    }
                    v63 = v62;
                    v79 = *(char *)v67;
                    v80 = *(char *)v63;
                    v81 = v55 - 1;
                    v30 = v80;
                    v92 = false;
                }
                v31 = v30;
                if ((v79 >= v31 && !v92) == v79 < v31) {
                    // 0x580f6f
                    function_581610(a1, v8, v16, v81);
                    v47 = v16;
                } else {
                    v65 = (int64_t)"st";
                    v83 = *(char *)v68;
                    v84 = *(char *)v65;
                    v85 = 2;
                    v32 = v84;
                    v93 = false;
                    while (v83 == v84) {
                        // 0x5807a4
                        v64 = v65 + v7;
                        v68 += v7;
                        v56 = v85;
                        v32 = v83;
                        v93 = true;
                        if (v85 == 0) {
                            // break -> 
                            break;
                        }
                        v65 = v64;
                        v83 = *(char *)v68;
                        v84 = *(char *)v65;
                        v85 = v56 - 1;
                        v32 = v84;
                        v93 = false;
                    }
                    v33 = v32;
                    if ((v83 >= v33 && !v93) != v83 < v33) {
                        // 0x57f67a
                        function_582a30(a1, v8, v16, v85);
                        v47 = v16;
                    } else {
                        // 0x5807c2
                        v87 = *v9;
                        v34 = v87;
                        if (v87 == 255) {
                            // 0x5807cf
                            *v10 = 0;
                            *v11 = *v11 + 1;
                            *v9 = 0;
                            v34 = 0;
                        }
                        // 0x5807fe
                        *v9 = v34 + 1;
                        *(char *)(v34 + a1) = 40;
                        *v12 = 40;
                        function_581610(a1, v8, v16, v85);
                        v90 = *v9;
                        v35 = v90 + 1;
                        v42 = v90;
                        if (v90 == 255) {
                            // 0x58083c
                            *v10 = 0;
                            *v11 = *v11 + 1;
                            v35 = 1;
                            v42 = 0;
                        }
                        // 0x580867
                        *v9 = v35;
                        *(char *)(v42 + a1) = 41;
                        *v12 = 41;
                        v47 = v16;
                    }
                }
            }
        }
        // 0x57d920
        result2 = __readfsqword(40) ^ v1;
    }
    // 0x57d937
    return result2;
}

// Address range: 0x5816a0 - 0x5816d5
int64_t function_5816a0(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a3 - 3; // 0x5816a2
    int64_t result = v1; // 0x5816a2
    if (v1 >= 77) {
        // 0x581f90
        return result;
    }
    int32_t v2 = *(int32_t *)(4 * result + (int64_t)&g66); // 0x5816cc
    return (int64_t)v2 + (int64_t)&g66;
}

// Address range: 0x5816d8 - 0x581ef5
int64_t function_5816d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x5816d8
    int64_t v1; // 0x5816d8
    char * v2 = (char *)(v1 + 255);
    int64_t * v3 = (int64_t *)(v1 + 320);
    int64_t v4 = (int64_t)" throw"; // 0x5816ea
    int64_t v5 = *(int64_t *)(a1 + 256);
    char v6 = *(char *)v4; // 0x581740
    int64_t v7; // 0x5816d8
    int64_t v8; // 0x5816d8
    if (v5 == 255) {
        // 0x5816f0
        *v2 = 0;
        *v3 = *v3 + 1;
        v8 = 0;
        v7 = 1;
    } else {
        // 0x581747
        v8 = v5;
        v7 = v5 + 1;
    }
    int64_t result = v7;
    v4++;
    *(int64_t *)(v1 + 256) = result;
    *(char *)(v8 + v1) = v6;
    *(char *)(v1 + 264) = v6;
    while (v4 != (int64_t)&g67) {
        // 0x58173a
        v5 = result;
        v6 = *(char *)v4;
        if (v5 == 255) {
            // 0x5816f0
            *v2 = 0;
            *v3 = *v3 + 1;
            v8 = 0;
            v7 = 1;
        } else {
            // 0x581747
            v8 = v5;
            v7 = v5 + 1;
        }
        // 0x58171b
        result = v7;
        v4++;
        *(int64_t *)(v1 + 256) = result;
        *(char *)(v8 + v1) = v6;
        *(char *)(v1 + 264) = v6;
    }
    // 0x581ec0
    if (result != 255 | *(int64_t *)(v1 + 16) == 0) {
        // 0x581ad0
        return result;
    }
    // 0x581ed9
    *v2 = 0;
    return result;
}
