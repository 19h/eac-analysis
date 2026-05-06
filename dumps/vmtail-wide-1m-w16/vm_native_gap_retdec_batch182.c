/*
 * Targeted RetDec C for native executable gap queue batch 182.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x496540-0x496748 rank=126 name=fcn.00496540 kind=r2_discovered bytes=520 uncovered=520
 *   0x28496-0x2869b rank=127 name=fcn.00028496 kind=r2_discovered bytes=517 uncovered=517
 *   0x5bb9c-0x5bda0 rank=128 name=fcn.0005bb9c kind=r2_discovered bytes=516 uncovered=516
 *   0x4fbd10-0x4fbf14 rank=129 name=fcn.004fbd10 kind=r2_discovered bytes=516 uncovered=516
 *   0x549690-0x549894 rank=130 name=fcn.00549690 kind=r2_discovered bytes=516 uncovered=516
 *   0x28a8a-0x28c8c rank=131 name=fcn.00028a8a kind=r2_discovered bytes=514 uncovered=514
 *   0x2a78b-0x2a98d rank=132 name=fcn.0002a78b kind=r2_discovered bytes=514 uncovered=514
 *   0x556d0-0x559ba rank=133 name=fcn.000556d0 kind=r2_discovered bytes=746 uncovered=513
 *   0x49eba0-0x49ee6e rank=134 name=fcn.0049eba0 kind=r2_discovered bytes=718 uncovered=485
 *   0x4affd-0x4b261 rank=135 name=fcn.0004affd kind=r2_discovered bytes=612 uncovered=395
 *   0x2a521-0x2a8b0 rank=136 name=fcn.0002a521 kind=r2_discovered bytes=911 uncovered=369
 *   0x4926da-0x49295c rank=137 name=fcn.004926da kind=r2_discovered bytes=642 uncovered=344
 *   0x57b50-0x57d58 rank=138 name=fcn.00057b50 kind=r2_discovered bytes=520 uncovered=272
 *   0x4c9900-0x4c9b79 rank=139 name=fcn.004c9900 kind=r2_discovered bytes=633 uncovered=232
 *   0x499dd0-0x499fef rank=140 name=fcn.00499dd0 kind=r2_discovered bytes=543 uncovered=192
 *   0x4a4be0-0x4a6a5e rank=141 name=fcn.004a4be0 kind=r2_discovered bytes=7806 uncovered=7806
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
extern int g158;
extern int g159;
extern int g160;
extern int g161;
extern int g162;
extern int g163;
extern int g164;
extern int g165;
extern int g166;
extern int g167;
extern int g168;
extern int g169;
extern int g170;
extern int g171;
extern int g172;
extern int g173;
extern int g174;
extern int g175;
extern int g176;
extern int g178;
extern int g179;
extern int g180;
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

int64_t function_1ff50();
int64_t function_20550();
int64_t function_221c0();
int64_t function_2263e();
int64_t function_2293e();
int64_t function_22aea();
int64_t function_23344();
int64_t function_24ded();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_250b0();
int64_t function_25194();
int64_t function_251e8();
int64_t function_254fe();
int64_t function_256ba();
int64_t function_2601b();
int64_t function_28496(int64_t a1);
int64_t function_286ac();
int64_t function_289b2();
int64_t function_28a8a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29cea();
int64_t function_29cf4();
int64_t function_29dd0();
int64_t function_2a521(int64_t a1);
int64_t function_2a56d(void);
int64_t function_2a5d3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a672(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a711(int64_t a1, int64_t a2);
int64_t function_2a73a(void);
int64_t function_2a78b(void);
int64_t function_2a9dc();
int64_t function_2ce9a();
int64_t function_36622();
int64_t function_36712();
int64_t function_4452a();
int64_t function_48bde0();
int64_t function_48d50f();
int64_t function_491fda();
int64_t function_492512();
int64_t function_4926da(int64_t a1);
int64_t function_492796(void);
int64_t function_492798(void);
int64_t function_49279c(void);
int64_t function_4927a6(void);
int64_t function_4927ac(int64_t a1);
int64_t function_4927ce(int64_t a1, int64_t a2);
int64_t function_492814(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_492898(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_496540(int64_t a1);
int64_t function_496760();
int64_t function_4968b0();
int64_t function_496940();
int64_t function_496ab0();
int64_t function_4976c0();
int64_t function_497930();
int64_t function_498b90();
int64_t function_498c50();
int64_t function_499ab0();
int64_t function_499cf0();
int64_t function_499dd0(int64_t a1);
int64_t function_499e90(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_49a730();
int64_t function_49a900();
int64_t function_49b4a0();
int64_t function_49bab0();
int64_t function_49e490();
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49e960();
int64_t function_49eba0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6);
int64_t function_49ebd0(int64_t result, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_49ecc0(int64_t result, int64_t a2, char * a3, int64_t * a4, char * a5, int64_t a6);
int64_t function_49efb0();
int64_t function_49f0c0();
int64_t function_49f0e0();
int64_t function_49f110();
int64_t function_4a4be0(int64_t a1);
int64_t function_4a98b0();
int64_t function_4aa26();
int64_t function_4aa62();
int64_t function_4abec();
int64_t function_4aefa();
int64_t function_4afd4();
int64_t function_4affd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4b188(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ba4e0();
int64_t function_4bf94();
int64_t function_4bfb4();
int64_t function_4c14d0();
int64_t function_4c1690();
int64_t function_4c16b0();
int64_t function_4c1770();
int64_t function_4c18b0();
int64_t function_4c1d00();
int64_t function_4c21c();
int64_t function_4c4450();
int64_t function_4c48b0();
int64_t function_4c8790();
int64_t function_4c8fa0();
int64_t function_4c9080();
int64_t function_4c9900(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, uint64_t a10);
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4fbb00();
int64_t function_4fbd10(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_504cb();
int64_t function_52c050();
int64_t function_542590();
int64_t function_5473b0();
int64_t function_549690(int64_t a1, int64_t a2, int64_t a3);
int64_t function_54be6();
int64_t function_54cea();
int64_t function_54cf8();
int64_t function_55620();
int64_t function_556d0(int64_t a1, int64_t a2, int64_t str, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_56066();
int64_t function_56188();
int64_t function_561d2();
int64_t function_5646c();
int64_t function_57650();
int64_t function_579c2();
int64_t function_57b50(int64_t a1, int64_t * a2, int64_t a3, int64_t a4);
int64_t function_57bca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57c60(uint64_t a1, uint64_t a2);
int64_t function_57d2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57d33(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_57d45(void);
int64_t function_5a3ea();
int64_t function_5b3e6();
int64_t function_5b7ba();
int64_t function_5bb9c(int64_t a1, int64_t a2);
int64_t function_5bfa4();
int64_t function_5bfb2();
int64_t function_5f0f4();
int64_t function_6150e();
int64_t function_61792();
int64_t function_619f2();
int64_t function_7293a();
int64_t function_729b6();

// Address range: 0x28496 - 0x2869b
int64_t function_28496(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x284a6
    *(int64_t *)a1 = (int64_t)&g137;
    function_221c0();
    function_7293a(a1 + (int64_t)&g3);
    int64_t * v2 = (int64_t *)(a1 + (int64_t)&g4); // 0x284d7
    *v2 = 0;
    int64_t * v3 = (int64_t *)(a1 + (int64_t)&g6); // 0x284e2
    *v3 = 0;
    int64_t * v4 = (int64_t *)(a1 + (int64_t)&g7); // 0x284ed
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a1 + (int64_t)&g8); // 0x284f8
    *v5 = 0;
    int64_t * v6 = (int64_t *)(a1 + (int64_t)&g9); // 0x28503
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a1 + (int64_t)&g10); // 0x2850e
    *v7 = 0;
    int64_t * v8 = (int64_t *)(a1 + (int64_t)&g11); // 0x28519
    *v8 = 0;
    int64_t * v9 = (int64_t *)(a1 + (int64_t)&g12); // 0x28524
    *v9 = 0;
    int64_t * v10 = (int64_t *)(a1 + (int64_t)&g13); // 0x2852f
    *v10 = 0;
    int64_t * v11 = (int64_t *)(a1 + (int64_t)&g5); // 0x2853a
    *v11 = 8;
    int64_t v12; // 0x28496
    int64_t v13 = function_4efd30(64, a1, v12, v12); // 0x28545
    int64_t v14 = *v11; // 0x2854a
    *v2 = v13;
    int64_t v15 = (4 * v14 - 4 & -8) + v13; // 0x28569
    int64_t v16 = function_4efd30((int64_t)&g35, a1, v14, v12); // 0x2856c
    int64_t v17 = v16 + (int64_t)&g35; // 0x28571
    *(int64_t *)v15 = v16;
    *v4 = v16;
    *v8 = v16;
    *v5 = v17;
    *v9 = v17;
    *v3 = v16;
    *v7 = v16;
    *v6 = v15;
    *v10 = v15;
    function_5a3ea(a1 + (int64_t)&g14);
    int64_t v18 = a1 + (int64_t)&g19; // 0x285ce
    *(int32_t *)v18 = 0;
    *(int64_t *)(a1 + (int64_t)&g20) = 0;
    *(int64_t *)(a1 + (int64_t)&g23) = 0;
    *(int64_t *)(a1 + (int64_t)&g16) = (int64_t)&g164;
    *(int64_t *)(a1 + (int64_t)&g21) = v18;
    *(int64_t *)(a1 + (int64_t)&g22) = v18;
    *(int64_t *)(a1 + (int64_t)&g24) = (int64_t)&g162;
    *(int64_t *)(a1 + (int64_t)&g25) = (int64_t)&g162;
    *(int64_t *)(a1 + (int64_t)&g26) = (int64_t)&g162;
    *(int64_t *)(a1 + (int64_t)&g27) = (int64_t)&g162;
    *(int64_t *)(a1 + (int64_t)&g28) = (int64_t)&g162;
    *(int64_t *)(a1 + (int64_t)&g29) = (int64_t)&g162;
    function_7293a(a1 + (int64_t)&g30);
    int128_t tp; // bp-48, 0x28496
    clock_gettime(1, (struct timespec *)&tp);
    *(char *)(a1 + (int64_t)&g17) = 0;
    *(char *)(a1 + (int64_t)&g18) = 0;
    *(int64_t *)(a1 + (int64_t)&g31) = 0x3b9aca00 * (int64_t)tp + v12;
    function_2a9dc();
    int64_t result = 0; // 0x2868d
    if (v1 != __readfsqword(40)) {
        // 0x2868f
        __stack_chk_fail();
        result = (int64_t)&g180;
    }
    // 0x28694
    return result;
}

// Address range: 0x28a8a - 0x28c8c
int64_t function_28a8a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x28a9b
    if (a2 != 0) {
        // 0x28ab7
        if (g140 == 0) {
            // 0x28ac4
            int64_t v2; // bp-216, 0x28a8a
            int64_t v3; // bp-218, 0x28a8a
            function_250b0(&v2, "S1", &v3, 0);
            int64_t v4; // bp-144, 0x28a8a
            function_2509a(&v4, &v2);
            int64_t v5; // bp-136, 0x28a8a
            int64_t v6; // bp-176, 0x28a8a
            function_250b0(&v5, (char *)a2, &v6, 0);
            int64_t v7; // bp-217, 0x28a8a
            int64_t v8 = (int64_t)&v7; // 0x28b10
            int64_t v9; // bp-208, 0x28a8a
            function_250b0(&v9, "N1", &v7, 0);
            int64_t v10; // bp-120, 0x28a8a
            function_2509a(&v10, &v9);
            int64_t v11 = (int64_t)&g162; // bp-112, 0x28b80
            int64_t v12; // bp-96, 0x28a8a
            function_48d50f(&v12, 32, "%lu", v8);
            int64_t v13; // bp-200, 0x28a8a
            function_250b0(&v6, (char *)&v12, &v13, (int32_t)v8);
            function_256ba(&v11, &v6);
            function_2508e(&v6);
            v13 = 0;
            function_289b2(&v13, &v4, &v12);
            function_2508e(&v11);
            function_2508e(&v10);
            function_2508e(&v5);
            function_2508e(&v4);
            function_2508e(&v9);
            function_2508e(&v2);
            v9 = 6;
            function_29dd0(&v6, &v9, &v13);
            function_5f0f4(2, &v6);
            g140 = 1;
            int64_t v14; // bp-168, 0x28a8a
            function_25194(&v14);
            function_2508e(&v6);
            function_25194(&v13);
        }
    }
    int64_t result = 0; // 0x28c73
    if (v1 != __readfsqword(40)) {
        // 0x28c75
        __stack_chk_fail();
        result = (int64_t)&g180;
    }
    // 0x28c7a
    return result;
}

// Address range: 0x2a521 - 0x2a56d
int64_t function_2a521(int64_t a1) {
    // 0x2a521
    if (a1 == 0) {
        // 0x2a56c
        return 10;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x2a526
    if (*v1 == 0) {
        // 0x2a56c
        return 10;
    }
    int32_t * v2 = (int32_t *)(a1 + 4); // 0x2a52d
    int32_t v3 = *v2; // 0x2a52d
    if (v3 == 0 || ((int32_t)&g147 < 1 || (int32_t)&g147 == 1) ^ true) {
        // 0x2a56c
        return v3 == 0 ? 10 : (int64_t)&g49;
    }
    // 0x2a546
    return function_22aea(function_286ac(function_2ce9a()), *v1, *v2);
}

// Address range: 0x2a56d - 0x2a5d3
int64_t function_2a56d(void) {
    // 0x2a56d
    if (*(char *)&g141 != 0) {
        // 0x2a5c2
        return (int64_t)&g142;
    }
    // 0x2a577
    if ((int32_t)function_20550(&g141) != 0) {
        // 0x2a58b
        function_6150e(&g142, 1);
        function_1ff50(&g141);
        __cxa_atexit((void (*)(int64_t *))0x2aeea, &g142, (int64_t *)0x849800);
    }
    // 0x2a5c2
    return (int64_t)&g142;
}

// Address range: 0x2a5d3 - 0x2a672
int64_t function_2a5d3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a5d3
    if (a1 == 0) {
        // 0x2a66e
        return 10;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x2a5e2
    if (*v1 == 0) {
        // 0x2a66e
        return 10;
    }
    int32_t * v2 = (int32_t *)(a1 + 4); // 0x2a5ed
    if (*v2 == 0) {
        // 0x2a66e
        return 10;
    }
    int32_t v3 = *(int32_t *)(a1 + 16); // 0x2a5f3
    if (v3 == 0 || a2 == 0 || a3 == 0) {
        // 0x2a66e
        return 10;
    }
    // 0x2a604
    if (g148 != 1) {
        // 0x2a66e
        return (int64_t)&g49 & 0xffffffff;
    }
    // 0x2a613
    *(int32_t *)a3 = v3;
    int64_t v4 = function_61792(function_2a56d(), *v1, *v2, a2, a3); // 0x2a63d
    int64_t result = 0x7fffffff; // 0x2a64b
    if ((int32_t)v4 < 7) {
        uint32_t v5 = *(int32_t *)((4 * v4 & 0x3fffffffc) + (int64_t)&g94); // 0x2a656
        result = v5;
    }
    // 0x2a664
    return result;
}

// Address range: 0x2a672 - 0x2a711
int64_t function_2a672(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a672
    if (a1 == 0) {
        // 0x2a70d
        return 10;
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x2a681
    if (*v1 == 0) {
        // 0x2a70d
        return 10;
    }
    int32_t * v2 = (int32_t *)(a1 + 4); // 0x2a68c
    if (*v2 == 0) {
        // 0x2a70d
        return 10;
    }
    int32_t v3 = *(int32_t *)(a1 + 16); // 0x2a692
    if (v3 == 0 || a2 == 0 || a3 == 0) {
        // 0x2a70d
        return 10;
    }
    // 0x2a6a3
    if (g148 != 1) {
        // 0x2a70d
        return (int64_t)&g49 & 0xffffffff;
    }
    // 0x2a6b2
    *(int32_t *)a3 = v3;
    int64_t v4 = function_619f2(function_2a56d(), *v1, *v2, a2, a3); // 0x2a6dc
    int64_t result = 0x7fffffff; // 0x2a6ea
    if ((int32_t)v4 < 7) {
        uint32_t v5 = *(int32_t *)((4 * v4 & 0x3fffffffc) + (int64_t)&g94); // 0x2a6f5
        result = v5;
    }
    // 0x2a703
    return result;
}

// Address range: 0x2a711 - 0x2a73a
int64_t function_2a711(int64_t a1, int64_t a2) {
    // 0x2a711
    if (a1 == 0 || a2 == 0) {
        // 0x2a739
        return 10;
    }
    // 0x2a71b
    if (g148 != 1) {
        // 0x2a739
        return (int64_t)&g49;
    }
    // 0x2a729
    *(int32_t *)a2 = *(int32_t *)(a1 + 4) + 22;
    return 0;
}

// Address range: 0x2a73a - 0x2a78b
int64_t function_2a73a(void) {
    if (((uint32_t)(int32_t)&g147 < 1 || (int32_t)&g147 == 1) ^ true) {
        // 0x2a785
        return (int64_t)&g49;
    }
    // 0x2a748
    function_2263e(function_286ac(function_2ce9a()));
    g148 = 0;
    g146 = 0;
    g143 = 0;
    return 0;
}

// Address range: 0x2a78b - 0x2a98d
int64_t function_2a78b(void) {
    // 0x2a78b
    int64_t v1; // bp-72, 0x2a78b
    int64_t v2 = (int64_t)&v1; // 0x2a78c
    __readfsqword(40);
    int64_t v3; // bp-68, 0x2a78b
    if (g148 != 1) {
        if (g148 == 2) {
            // 0x2a849
            if (g145 != 0) {
                // 0x2a853
                v3 = 0;
                int64_t v4 = function_286ac(function_2ce9a()); // 0x2a871
                int64_t v5 = v2 + 8; // 0x2a876
                if ((char)function_2293e(v4, v5, &v3) != 0) {
                    *(int64_t *)(v2 + 32) = g143;
                    *(int64_t *)(v2 + 40) = *(int64_t *)v5;
                    *(int32_t *)(v2 + 48) = *(int32_t *)(v2 | 4);
                    function_48bde0(0);
                    // 0x2a88a
                    while ((char)function_2293e(function_286ac(function_2ce9a()), v5, &v3) != 0) {
                        // 0x2a88a
                        *(int64_t *)(v2 + 32) = g143;
                        *(int64_t *)(v2 + 40) = *(int64_t *)v5;
                        *(int32_t *)(v2 + 48) = *(int32_t *)(v2 | 4);
                        function_48bde0(0);
                    }
                }
            }
            // 0x2a8d2
            if (g144 != 0) {
                int64_t v6 = v2 + 8; // 0x2a8e0
                int64_t * v7 = (int64_t *)v6; // 0x2a8e0
                *v7 = 0;
                int64_t * v8 = (int64_t *)(v2 + 16); // 0x2a8e9
                *v8 = 0;
                *(int64_t *)(v2 + 24) = 0;
                if ((char)function_23344(function_286ac(function_2ce9a()), v6) != 0) {
                    // 0x2a919
                    *(int64_t *)(v2 + 32) = g143;
                    int64_t v9 = *v7; // 0x2a92c
                    *(int64_t *)(v2 + 40) = v9;
                    *(int32_t *)(v2 + 48) = (int32_t)(*v8 - v9);
                    function_48bde0(0);
                }
                int64_t v10 = *v7; // 0x2a963
                if (v10 != 0) {
                    // 0x2a96d
                    function_4eeb50(v10);
                }
            }
        }
    } else {
        // 0x2a7af
        if (g146 != 0) {
            // 0x2a7bd
            v3 = 0;
            int64_t v11 = function_286ac(function_2ce9a()); // 0x2a7db
            int64_t v12 = v2 + 8; // 0x2a7e0
            if ((char)function_2293e(v11, v12, &v3) != 0) {
                *(int64_t *)(v2 + 32) = g143;
                *(int64_t *)(v2 + 40) = *(int64_t *)v12;
                *(int32_t *)(v2 + 48) = *(int32_t *)(v2 | 4);
                function_48bde0(0);
                // 0x2a7f8
                while ((char)function_2293e(function_286ac(function_2ce9a()), v12, &v3) != 0) {
                    // 0x2a7f8
                    *(int64_t *)(v2 + 32) = g143;
                    *(int64_t *)(v2 + 40) = *(int64_t *)v12;
                    *(int32_t *)(v2 + 48) = *(int32_t *)(v2 | 4);
                    function_48bde0(0);
                }
            }
        }
    }
    int64_t result = 0; // 0x2a980
    if (*(int64_t *)(v2 + 56) != __readfsqword(40)) {
        // 0x2a982
        __stack_chk_fail();
        result = (int64_t)&g180;
    }
    // 0x2a987
    return result;
}

// Address range: 0x4affd - 0x4b188
int64_t function_4affd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4affd
    int64_t v1; // 0x4affd
    int64_t v2 = v1;
    int32_t v3 = v1;
    int64_t v4; // 0x4affd
    int64_t v5; // 0x4affd
    int64_t result; // 0x4affd
    int64_t v6; // 0x4affd
    bool v7; // 0x4affd
    int64_t v8; // 0x4b0d9
    int64_t * v9; // 0x4b0f1
    int64_t v10; // 0x4b0f1
    int64_t * v11; // 0x4b0f8
    int64_t v12; // 0x4b0f8
    int64_t * v13; // 0x4b0fc
    bool v14; // 0x4affd
    switch (v3) {
        case 1: {
            uint64_t v15 = *(int64_t *)(v1 + 280); // 0x4b0bd
            int64_t v16 = v1 + 272; // 0x4b0c6
            uint64_t v17 = (int64_t)*(int16_t *)(v1 + 16) % v15; // 0x4b0cd
            v8 = function_4aa62(v16, v17, v2);
            if (v8 == 0) {
                // 0x4b09d
                v5 = *(int64_t *)(v1 + 296);
                v6 = 0;
                goto lab_0x4b176;
            } else {
                int64_t v18 = *(int64_t *)v16; // 0x4b0ea
                v9 = (int64_t *)v8;
                v10 = *v9;
                v11 = (int64_t *)v10;
                v12 = *v11;
                v13 = (int64_t *)(v18 + 8 * v17);
                int64_t v19 = *v13; // 0x4b0fc
                if (v8 != v19) {
                    if (v12 != 0) {
                        uint64_t v20 = (int64_t)*(int16_t *)(v12 + 8) % v15; // 0x4b14b
                        if (v17 != v20) {
                            // 0x4b153
                            *(int64_t *)(8 * v20 + v18) = v8;
                        }
                    }
                    goto lab_0x4b157;
                } else {
                    // 0x4b101
                    v4 = v19;
                    if (v12 == 0) {
                        goto lab_0x4b124;
                    } else {
                        uint64_t v21 = (int64_t)*(int16_t *)(v12 + 8) % v15; // 0x4b10e
                        if (v17 == v21) {
                            goto lab_0x4b157;
                        } else {
                            // 0x4b120
                            *(int64_t *)(8 * v21 + v18) = v8;
                            v4 = *v13;
                            goto lab_0x4b124;
                        }
                    }
                }
            }
        }
        case 2: {
            int64_t v22 = 2; // 0x4b067
            if (v14) {
                // 0x4b069
                v22 = *(int64_t *)(v1 + 8);
            }
            // 0x4b07f
            return function_4bfb4(function_4c21c(v1 + 272, v2, v22), v2);
        }
        default: {
            // 0x4b012
            if (v3 != 0) {
                // 0x4b183
                return v1 & -256 | (int64_t)v14;
            }
            int64_t v23 = v1 & 0xffffffff; // 0x4b01c
            if (v14) {
                // 0x4b01e
                v23 = *(int64_t *)(v1 + 8);
            }
            // 0x4b031
            result = function_4bfb4(function_4c21c(v1 + 272, v2, v23), v2);
            v7 = *(int64_t *)(v1 + 296) == 1;
            goto lab_0x4b053;
        }
    }
  lab_0x4b053:
    // 0x4b053
    if (!v7) {
        // 0x4b183
        return result;
    }
    // 0x4b059
    return function_4aefa(v1);
  lab_0x4b176:
    // 0x4b176
    result = v6;
    v7 = v5 == 0;
    goto lab_0x4b053;
  lab_0x4b157:
    // 0x4b157
    *v9 = *v11;
    function_4bf94(v10 + 16, v8);
    int64_t v24 = function_4eeb50(v10); // 0x4b16a
    int64_t * v25 = (int64_t *)(v1 + 296);
    int64_t v26 = *v25 - 1; // 0x4b16f
    *v25 = v26;
    v5 = v26;
    v6 = v24;
    goto lab_0x4b176;
  lab_0x4b124:;
    int64_t v27 = v1 + 288; // 0x4b124
    if (v4 == v27) {
        // 0x4b130
        *(int64_t *)v27 = v12;
    }
    // 0x4b137
    *v13 = 0;
    goto lab_0x4b157;
}

// Address range: 0x4b188 - 0x4b25c
int64_t function_4b188(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b188
    int64_t v1; // 0x4b188
    int32_t v2 = v1;
    __readfsqword(40);
    int64_t v3 = a2; // bp-48, 0x4b1a0
    if (v2 >= 0) {
        if (v2 < 3) {
            // 0x4b1ba
            function_4afd4();
        } else {
            if (v2 == 3) {
                // 0x4b1b3
                function_4abec();
            }
        }
    }
    int64_t * v4 = (int64_t *)(v3 + 56);
    int64_t v5; // bp-40, 0x4b188
    function_729b6(&v5, *v4 + 384);
    int64_t v6 = *v4; // 0x4b1e3
    uint64_t v7 = *(int64_t *)(v6 + 336); // 0x4b1e7
    int64_t v8 = v6 + 328; // 0x4b1ee
    uint64_t v9 = v3 % v7;
    int64_t result = function_4aa26(v8, v9, &v3); // 0x4b203
    if (result == 0) {
        // 0x4b25c
        return 0;
    }
    int64_t v10 = *(int64_t *)v8; // 0x4b210
    int64_t v11 = *(int64_t *)*(int64_t *)result; // 0x4b21e
    int64_t * v12 = (int64_t *)(v10 + 8 * v9); // 0x4b221
    int64_t v13 = *v12; // 0x4b221
    if (result != v13) {
        // 0x4b25c
        return result;
    }
    int64_t v14 = v13; // 0x4b22b
    if (v11 != 0) {
        uint64_t v15 = *(int64_t *)(v11 + 8); // 0x4b22d
        uint64_t v16 = v15 % v7;
        if (v9 == v16) {
            // 0x4b25c
            return v15 / v7;
        }
        // 0x4b245
        *(int64_t *)(8 * v16 + v10) = result;
        v14 = *v12;
    }
    int64_t result2 = v6 + 344; // 0x4b249
    if (v14 == result2) {
        // 0x4b255
        *(int64_t *)result2 = v11;
    }
    // 0x4b25c
    return result2;
}

// Address range: 0x556d0 - 0x559ba
int64_t function_556d0(int64_t a1, int64_t a2, int64_t str, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = __readfsqword(40); // 0x5570d
    int64_t * v2 = (int64_t *)a7; // 0x5571d
    int64_t * v3 = (int64_t *)(a7 + 8); // 0x55726
    *v3 = *v2;
    *(int64_t *)(a8 + 8) = *(int64_t *)a8;
    *(int64_t *)(a9 + 8) = *(int64_t *)a9;
    int64_t v4 = str + 8; // 0x55744
    int64_t * v5 = (int64_t *)v4; // 0x55744
    uint64_t v6 = *v5 - str; // 0x55748
    int64_t v7 = 9; // 0x55752
    if (v6 > (int64_t)&g65) {
        int32_t memcmp_rc = memcmp((int64_t *)str, &g96, 4); // 0x5576a
        v7 = 9;
        if (memcmp_rc == 0) {
            // 0x5577e
            v7 = 9;
            if (*(int16_t *)(str + 4) == g149) {
                int32_t * v8 = (int32_t *)(str + (int64_t)&g62); // 0x5578f
                int32_t * v9 = (int32_t *)(str + (int64_t)&g63); // 0x55795
                int64_t v10 = (int64_t)*v9; // 0x55795
                int64_t v11 = v6 - 1052; // 0x5579b
                int64_t v12 = v10 + (int64_t)*v8; // 0x557a2
                v7 = 9;
                if (v11 == v12) {
                    int64_t v13 = function_4efd30(v6, v10, v12, v11); // 0x557cc
                    function_54cea(v13, v13 + v6, 0);
                    int64_t v14 = function_2601b(0, 0, v13) + v6; // 0x557fe
                    int64_t v15 = function_2601b(0, 0, v14); // 0x55804
                    function_54cf8(0);
                    int32_t v16 = v13; // bp-88, 0x55827
                    int64_t v17 = *v5 - v14; // 0x55838
                    __asm_rep_movsb_memcpy((char *)v13, (char *)v14, v17);
                    int64_t v18; // 0x556d0
                    int64_t v19; // 0x556d0
                    if (*(int16_t *)(str + 6) != g150) {
                        // 0x55872
                        v18 = v17 - 1036;
                        v19 = v14 + (int64_t)&g62;
                    } else {
                        // 0x5584e
                        *(int32_t *)(v13 + (int64_t)&g61) = 0;
                        memset((void *)(int64_t)(v13 + 8), 0, &g60, 0);
                        v18 = v15 - v13;
                        v19 = v13;
                    }
                    int32_t v20 = *(int32_t *)(str + (int64_t)&g61); // 0x55898
                    int64_t v21 = function_55620(a1, a2, v19, v18, v4, v20, a5, a6, a8); // 0x558a9
                    function_254fe((int64_t *)&v16);
                    if ((int32_t)v21 == 0) {
                        int64_t v22 = v19 + (int64_t)&g66; // 0x558e7
                        int64_t v23 = v22 + (int64_t)*v8; // 0x558ee
                        function_54be6(a9, v22, v23, v18);
                        uint32_t v24 = *(int32_t *)(str + (int64_t)&g64); // 0x558f6
                        int64_t v25 = *v2; // 0x558fd
                        int64_t * v26 = (int64_t *)(a7 + 16); // 0x55901
                        uint64_t v27 = (int64_t)v24 + (int64_t)&g66; // 0x55907
                        int64_t v28 = v23; // 0x55914
                        if (v27 > *v26 - v25) {
                            int64_t v29 = *v3; // 0x55916
                            v28 = function_4efd30(v27, 0, v23, v27);
                            function_2601b(v25, (int32_t)v29, v28);
                            function_54cf8(*v2);
                            *v2 = v28;
                            *v3 = v29 - v25 + v28;
                            *v26 = v28 + v27;
                        }
                        int64_t v30 = v28;
                        function_54be6(a7, v30, v30 + (int64_t)&g66, v27);
                        uint32_t v31 = *v8; // 0x55972
                        int32_t v32 = *v9; // 0x5597c
                        function_4452a(v30 + 2 * (int64_t)&g66 + (int64_t)v31, v32, a7);
                        v7 = 0;
                    } else {
                        // 0x558bf
                        v7 = v21 & 0xffffffff;
                    }
                }
            }
        }
    }
    int64_t result = v7; // 0x559a4
    if (v1 != __readfsqword(40)) {
        // 0x559a6
        __stack_chk_fail();
        result = (int64_t)&g180;
    }
    // 0x559ab
    return result;
}

// Address range: 0x57b50 - 0x57bca
int64_t function_57b50(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a2;
    if ((char)function_5646c(v1) == 0) {
        // 0x57bbe
        return 23;
    }
    int64_t * v2 = (int64_t *)(a1 + 33); // 0x57b70
    int64_t v3 = function_56066(v1, *v2); // 0x57b77
    if ((int32_t)v3 != 0 || *v2 == 0 || *(char *)(a1 + 32) != 0 || (int32_t)function_57650(a1, v1) == 0) {
        // 0x57bbe
        return v3 & 0xffffffff;
    }
    // 0x57b9f
    return function_579c2(a1, v1, a3, a4);
}

// Address range: 0x57bca - 0x57c5f
int64_t function_57bca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x57bf1
    int64_t v2; // bp-632, 0x57bca
    function_561d2(&v2);
    int64_t v3 = 23; // 0x57c14
    if (a2 != 0) {
        // 0x57c16
        v3 = function_57b50(a1, &v2, a3, a4) & 0xffffffff;
    }
    // 0x57c29
    function_56188(&v2);
    int64_t result = v3; // 0x57c4a
    if (v1 != __readfsqword(40)) {
        // 0x57c4c
        __stack_chk_fail();
        result = (int64_t)&g180;
    }
    // 0x57c51
    return result;
}

// Address range: 0x57c60 - 0x57cea
int64_t function_57c60(uint64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x57c6e
    if (a1 >= 0xfffffffffffffff) {
        // 0x57c70
        function_542590("basic_string::_S_create");
        v1 = (int64_t)"basic_string::_S_create";
    }
    uint64_t v2 = v1;
    int64_t v3 = v2; // 0x57c82
    if (v2 > a2) {
        uint64_t v4 = 2 * a2; // 0x57c84
        v3 = v2 < v4 ? v4 : v2;
    }
    int64_t v5 = 4 * v3; // 0x57c8f
    uint64_t v6 = v5 + 60; // 0x57c97
    int64_t v7 = v3; // 0x57ca1
    int64_t v8 = v5; // 0x57ca1
    int64_t v9; // 0x57c60
    if (v3 > a2 && v6 > (int64_t)&g1) {
        int64_t v10 = v6 & (int64_t)(int32_t)&g179; // 0x57ca8
        uint64_t v11 = ((int64_t)&g1 - v10) / 4 + v3; // 0x57cbc
        v7 = v11 < 0xffffffffffffffe ? v11 : 0xffffffffffffffe;
        v9 = v10;
        v8 = 4 * v7;
    }
    // 0x57cd8
    int64_t v12; // 0x57c60
    int64_t result = function_4efd30(v8 + 28, a2, v9, v12); // 0x57cd8
    *(int64_t *)(result + 8) = v7;
    *(int32_t *)(result + 16) = 0;
    return result;
}

// Address range: 0x57d2e - 0x57d32
int64_t function_57d2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57d2e
    int64_t result; // 0x57d2e
    char * v1 = (char *)(result - 127); // 0x57d2e
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x57d33 - 0x57d39
int64_t function_57d33(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x57d33
    int64_t v1; // 0x57d33
    int64_t result = v1;
    bool v2; // 0x57d33
    *(char *)result = 2 * (char)result | (char)v2;
    char * v3 = (char *)(result + 41); // 0x57d35
    *v3 = *v3 + (char)a4;
    return result;
}

// Address range: 0x57d45 - 0x57d46
int64_t function_57d45(void) {
    // 0x57d45
    int64_t result; // 0x57d45
    return result;
}

// Address range: 0x5bb9c - 0x5bda0
int64_t function_5bb9c(int64_t a1, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x5bbb0
    int64_t v2 = a2 - 24; // 0x5bbc3
    if ((char)function_29cea(v2) == 0) {
        // 0x5bbf4
        function_29cf4(v2, 0);
    } else {
        if (v2 != (int64_t)&g163) {
            // 0x5bbe4
            function_5b3e6(v2);
        }
        // 0x5bbe9
        *(int64_t *)a2 = (int64_t)&g164;
    }
    // 0x5bbff
    function_251e8(a1 + 8);
    *(int64_t *)(a1 + 16) = -1;
    *(int64_t *)(a1 + 24) = -1;
    int64_t v3; // 0x5bb9c
    int64_t v4; // 0x5bb9c
    int64_t v5; // 0x5bb9c
    int64_t v6; // bp-80, 0x5bb9c
    if (*(int64_t *)(a1 - 16) != 0) {
        // 0x5bc35
        v6 = 0;
        int64_t v7; // bp-72, 0x5bb9c
        int64_t v8 = (int64_t)&v7; // 0x5bc46
        int64_t v9 = 0;
        int64_t v10 = 0; // 0x5bc4b
        uint64_t v11 = v10 + 1; // 0x5bc57
        int64_t v12 = function_24ded(&g100); // 0x5bc5b
        uint64_t v13 = *(int64_t *)((int64_t)&g100 - 24); // 0x5bc69
        int64_t v14; // 0x5bb9c
        int64_t v15; // 0x5bb9c
        int64_t v16; // 0x5bc91
        int64_t v17; // 0x5bc9e
        int64_t v18; // 0x5bc82
        int64_t v19; // 0x5bcb5
        int64_t v20; // 0x5bccf
        int64_t v21; // 0x5bce6
        if (v12 != 0) {
            // 0x5bc79
            if (v13 <= v11) {
                // break -> 0x5bd79
                break;
            }
            // 0x5bc82
            v7 = 10;
            v16 = v13 - v11;
            v17 = 1 - v12;
            v4 = v17;
            if (v12 > v16) {
                goto lab_0x5bcef_3;
            }
            // 0x5bcab
            v18 = v13 + (int64_t)&g100;
            v19 = function_504cb(v10 + (int64_t)&g100 + 1, v16 + v17, v8);
            if (v19 == 0) {
                goto lab_0x5bcef_3;
            }
            // 0x5bcc2
            v20 = function_5bfa4(v19, &g100, v12);
            while ((int32_t)v20 != 0) {
                // 0x5bcdd
                v21 = v18 + -1 - v19;
                v4 = v20;
                if (v12 > v21) {
                    goto lab_0x5bcef_3;
                }
                v19++;
                if (v19 == 0) {
                    goto lab_0x5bcef_3;
                }
                // 0x5bcc2
                v20 = function_5bfa4(v19, &g100, v12);
            }
            // 0x5bcd8
            v15 = v20;
            v14 = v19 - (int64_t)&g100;
        } else {
            // 0x5bc6f
            v15 = v12;
            v14 = v11;
            if (v13 < v11) {
                // break -> 0x5bd79
                break;
            }
        }
        // 0x5bcef
        v6 = v14;
        v5 = v15;
        v3 = 1;
        while (v14 != -1) {
            // 0x5bcfa
            function_36712(v8, a1, v9, v14 - v9);
            uint64_t v22 = function_5b7ba(a1, v8, v9, &v6, a2); // 0x5bd23
            function_2508e(&v7);
            if ((char)v22 == 0) {
                // 0x5bd3a
                v5 = function_36622(a2, L"Config parsing error");
                v3 = v22 % 256;
                goto lab_0x5bd79;
            }
            // 0x5bd4b
            v9 = function_5bfb2(a1, "\r\n", v6, function_24ded((int64_t *)"\r\n"));
            v10 = v6;
            v11 = v10 + 1;
            v12 = function_24ded(&g100);
            v13 = *(int64_t *)((int64_t)&g100 - 24);
            if (v12 != 0) {
                // 0x5bc79
                v5 = v12;
                v3 = 1;
                if (v13 <= v11) {
                    // break -> 0x5bd79
                    break;
                }
                // 0x5bc82
                v7 = 10;
                v16 = v13 - v11;
                v17 = 1 - v12;
                v4 = v17;
                if (v12 > v16) {
                    goto lab_0x5bcef_3;
                }
                // 0x5bcab
                v18 = v13 + (int64_t)&g100;
                v19 = function_504cb(v10 + (int64_t)&g100 + 1, v16 + v17, v8);
                if (v19 == 0) {
                    goto lab_0x5bcef_3;
                }
                // 0x5bcc2
                v20 = function_5bfa4(v19, &g100, v12);
                while ((int32_t)v20 != 0) {
                    // 0x5bcdd
                    v21 = v18 + -1 - v19;
                    v4 = v20;
                    if (v12 > v21) {
                        goto lab_0x5bcef_3;
                    }
                    v19++;
                    if (v19 == 0) {
                        goto lab_0x5bcef_3;
                    }
                    // 0x5bcc2
                    v20 = function_5bfa4(v19, &g100, v12);
                }
                // 0x5bcd8
                v15 = v20;
                v14 = v19 - (int64_t)&g100;
            } else {
                // 0x5bc6f
                v15 = v12;
                v14 = v11;
                v5 = v12;
                v3 = 1;
                if (v13 < v11) {
                    // break -> 0x5bd79
                    break;
                }
            }
            // 0x5bcef
            v6 = v14;
            v5 = v15;
            v3 = 1;
        }
    } else {
        // 0x5bc1e
        v5 = function_36622(a2, L"Config file data empty");
        v3 = 0;
    }
    goto lab_0x5bd79;
  lab_0x5bcef_3:
    // 0x5bcef
    v6 = -1;
    v5 = v4;
    v3 = 1;
    goto lab_0x5bd79;
  lab_0x5bd79:;
    int64_t result = v3 | v5 & -256; // 0x5bd8a
    if (v1 != __readfsqword(40)) {
        // 0x5bd8c
        __stack_chk_fail();
        result = (int64_t)&g180;
    }
    // 0x5bd91
    return result;
}

// Address range: 0x4926da - 0x492795
int64_t function_4926da(int64_t a1) {
    // 0x4926da
    if (*(char *)&g151 != 0) {
        // 0x492781
        return function_492512(&g152, a1, *(int64_t *)(a1 + 8));
    }
    int64_t v1 = function_20550(&g151); // 0x4926f3
    int64_t v2 = (int64_t)&g151; // 0x4926fa
    if ((int32_t)v1 != 0) {
        // 0x492700
        function_7293a((int64_t)&g153);
        g155 = 1;
        g156 = 0;
        g157 = 0;
        g154 = (int64_t)&g160;
        *(int32_t *)&g158 = 0x3f800000;
        g159 = 0;
        g160 = 0;
        function_1ff50(&g151);
        __cxa_atexit((void (*)(int64_t *))0x491d7a, &g152, &g139);
        v2 = 0x491d7a;
    }
    // 0x492781
    return function_492512(&g152, v2, *(int64_t *)(a1 + 8));
}

// Address range: 0x492796 - 0x492797
int64_t function_492796(void) {
    // 0x492796
    int64_t result; // 0x492796
    return result;
}

// Address range: 0x492798 - 0x49279b
int64_t function_492798(void) {
    // 0x492798
    return 0;
}

// Address range: 0x49279c - 0x4927a6
int64_t function_49279c(void) {
    // 0x49279c
    int64_t v1; // 0x49279c
    return function_4eeb30(v1, 24);
}

// Address range: 0x4927a6 - 0x4927ab
int64_t function_4927a6(void) {
    // 0x4927a6
    return function_49279c();
}

// Address range: 0x4927ac - 0x4927cd
int64_t function_4927ac(int64_t a1) {
    // 0x4927ac
    if (a1 == 0) {
        // 0x4927cb
        int64_t result; // 0x4927ac
        return result;
    }
    // 0x4927b5
    function_491fda(a1);
    return function_4eeb30(a1, 32);
}

// Address range: 0x4927ce - 0x492813
int64_t function_4927ce(int64_t a1, int64_t a2) {
    // 0x4927ce
    *(int64_t *)a1 = a2;
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4927dd
    *v1 = 0;
    int64_t result; // 0x4927ce
    int64_t v2 = function_4efd30(24, a2, result, result); // 0x4927ea
    *(int64_t *)(v2 + 16) = a2;
    *(int64_t *)(v2 + 8) = 0x100000001;
    *v1 = v2;
    *(int64_t *)v2 = (int64_t)&g135;
    return result;
}

// Address range: 0x492814 - 0x492897
int64_t function_492814(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(8 * a2 + a1); // 0x492817
    if (v1 == 0) {
        // 0x49288d
        return 0;
    }
    int64_t v2 = *(int64_t *)v1;
    if (*(int64_t *)(v2 + 24) == a4) {
        // 0x49284c
        if (a3 == *(int64_t *)(v2 + 8)) {
            // break -> 0x49288d
            break;
        }
    }
    int64_t v3 = *(int64_t *)v2; // 0x49286d
    int64_t result = 0; // 0x492873
    while (v3 != 0) {
        int64_t v4 = v2; // 0x492888
        result = 0;
        if (*(int64_t *)(v3 + 24) % *(int64_t *)(a1 + 8) != a2) {
            // break -> 0x49288d
            break;
        }
        v2 = v3;
        if (*(int64_t *)(v2 + 24) == a4) {
            // 0x49284c
            result = v4;
            if (a2 == *(int64_t *)(v2 + 8)) {
                // break -> 0x49288d
                break;
            }
        }
        // 0x49286d
        v3 = *(int64_t *)v2;
        result = 0;
    }
    // 0x49288d
    return result;
}

// Address range: 0x492898 - 0x492954
int64_t function_492898(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x492898
    int64_t v1; // 0x492898
    int64_t v2 = function_4efd30(32, a2, a3, v1); // 0x4928b1
    *(int64_t *)v2 = 0;
    uint64_t v3 = *(int64_t *)(a1 + 8); // 0x4928c4
    int64_t v4 = v2 + 8; // 0x4928cd
    *(int64_t *)v4 = a2;
    int64_t * v5 = (int64_t *)(a2 + 8); // 0x4928d1
    *v5 = 0;
    int64_t v6 = v2 + 16; // 0x4928e2
    *(int64_t *)v6 = *v5;
    int64_t v7 = function_492814(a1, a2 % v3, v4, a2); // 0x4928f6
    if (v7 != 0) {
        // 0x492900
        if (*(int64_t *)v7 != 0) {
            // 0x492908
            function_4927ac(v6);
            function_4eeb50(v2);
            return 0;
        }
    }
    int64_t v8 = *(int64_t *)(a1 + 24); // 0x492920
    int64_t result = function_4fbd10(a1 + 32, v3, v8, 1); // 0x492930
    if (v8 != 1 || (char)result == 0) {
        // 0x492954
        return result;
    }
    // 0x492946
    *(int64_t *)(a1 + 48) = 0;
    return result;
}

// Address range: 0x496540 - 0x496744
int64_t function_496540(int64_t a1) {
    // 0x496540
    int64_t v1; // 0x496540
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g165, "=> flush output", v1);
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x49665a
        return 0;
    }
    int64_t * v2 = (int64_t *)(a1 + 352); // 0x496573
    int64_t v3 = (int64_t)&g166; // 0x496589
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
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g167, "message length: %d, out_left: %d", v7 + 13 + (v9 - ((int64_t)(v8 == 0) | v9) & -8));
    int64_t v10 = 0x100000000 * (*v5 - *v2) >> 32; // 0x496633
    int64_t v11 = v10 & 0xffffffff;
    function_49e8b0(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g168, "ssl->f_send", v11);
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
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g167, "message length: %d, out_left: %d", v7 + 13 + (v9 - ((int64_t)(v8 == 0) | v9) & -8));
        v10 = 0x100000000 * (*v5 - *v2) >> 32;
        v11 = v10 & 0xffffffff;
        function_49e8b0(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g168, "ssl->f_send", v11);
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
    v3 = (int64_t)&g170;
    v4 = v11;
    if (v19 == (v20 == 0 ? 0 : 2)) {
        // 0x4966fb
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g169, "outgoing message counter would wrap", v11);
        result = 0xffff9480;
        return result;
    } else {
        goto lab_0x496692;
    }
}

// Address range: 0x499dd0 - 0x499e8d
int64_t function_499dd0(int64_t a1) {
    // 0x499dd0
    if (*(int32_t *)(a1 + 8) != 16 || *(int32_t *)(a1 + 12) == 3 || (*(char *)(a1 + 373) & 64) == 0) {
        // 0x499de7
        return 0;
    }
    int64_t * str = (int64_t *)(a1 + 352); // 0x499e28
    int64_t v1; // 0x499dd0
    if (memcmp((int64_t *)*(int64_t *)(a1 + 168), str, 8) >= 1) {
        // 0x499e31
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g15, "record counter limit reached: renegotiate", v1);
        return function_499cf0(a1);
    }
    int32_t memcmp_rc = memcmp((int64_t *)*(int64_t *)(a1 + 296), str, 8); // 0x499e7f
    if (memcmp_rc >= 0 != memcmp_rc != 0) {
        // 0x499de7
        return 0;
    }
    // 0x499e31
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g15, "record counter limit reached: renegotiate", v1);
    return function_499cf0(a1);
}

// Address range: 0x499e90 - 0x499fef
int64_t function_499e90(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x499e90
    int64_t v1; // 0x499e90
    int64_t result = function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g32, "=> write", v1); // 0x499ecb
    if (a1 == 0) {
        // 0x499f53
        return result;
    }
    int64_t v2 = function_499dd0(a1); // 0x499ee6
    if ((int32_t)v2 != 0) {
        int64_t result2 = v2 & 0xffffffff;
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g33, "ssl_check_ctr_renegotiate", result2);
        // 0x499f53
        return result2;
    }
    // 0x499ef1
    if (*(int32_t *)(a1 + 8) != 16) {
        int64_t result3 = function_4976c0(a1); // 0x499efa
        if ((int32_t)result3 != 0) {
            // 0x499f53
            return result3;
        }
    }
    // 0x499f09
    if (!((a3 < 2 | (*(char *)(a1 + 373) & 32) == 0))) {
        // 0x499f1b
        if (*(int32_t *)(a1 + 24) < 2) {
            int64_t v3 = *(int64_t *)(a1 + 112); // 0x499f98
            if (v3 != -128) {
                int64_t result4 = *(int64_t *)(v3 + 128); // 0x499fa6
                if (result4 != 0) {
                    // 0x499fb6
                    if (*(int32_t *)(result4 + 4) == 2) {
                        char * v4 = (char *)(a1 + 360); // 0x499fc0
                        if (*v4 != 0) {
                            // 0x499f53
                            return result4;
                        }
                        int64_t result5 = function_499ab0(a1, a2, 1); // 0x499fd4
                        if ((int32_t)result5 < 1) {
                            // 0x499f31
                            function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g34, "<= write", v1);
                            // 0x499f53
                            return result5 & 0xffffffff;
                        }
                        // 0x499fe3
                        *v4 = 1;
                        // 0x499f53
                        return result5;
                    }
                }
            }
        }
    }
    int64_t v5 = function_499ab0(a1, a2, a3);
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g34, "<= write", v1);
    // 0x499f53
    return v5 & 0xffffffff;
}

// Address range: 0x49eba0 - 0x49ebc5
int64_t function_49eba0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    if (result == 0 || a6 == 0 | *(int64_t *)(result + 32) == 0 || (int64_t)g161 < a2) {
        // 0x49ebbc
        return result;
    }
    // 0x49ebc0
    return function_49e490();
}

// Address range: 0x49ebd0 - 0x49ecc0
int64_t function_49ebd0(int64_t result, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x49ebd0
    if (result == 0) {
        // 0x49ec11
        return 0;
    }
    // 0x49ec00
    if (*(int64_t *)(result + 32) == 0) {
        // 0x49ec11
        return result;
    }
    int64_t result2 = result; // 0x49ec0f
    if ((int64_t)g161 >= a2) {
        int64_t v1 = a2 & 0xffffffff; // 0x49ec0d
        char * v2 = (char *)a5; // 0x49ec70
        int64_t str; // bp-568, 0x49ebd0
        snprintf((char *)&str, (int32_t)&g35, "%s(X)", v2);
        int64_t v3 = a4 & 0xffffffff; // 0x49ec7b
        function_49eba0(result, v1, a3, v3, &str, a6);
        snprintf((char *)&str, (int32_t)&g35, "%s(Y)", v2);
        result2 = function_49eba0(result, v1, a3, v3, &str, a6 + 24);
    }
    // 0x49ec11
    return result2;
}

// Address range: 0x49ecc0 - 0x49ee6b
int64_t function_49ecc0(int64_t result, int64_t a2, char * a3, int64_t * a4, char * a5, int64_t a6) {
    char * v1 = a3; // bp-2152, 0x49ecd7
    if (result == 0) {
        // 0x49eeba
        return 0;
    }
    // 0x49eced
    if (a6 == 0 | *(int64_t *)(result + 32) == 0 || (int64_t)g161 < a2) {
        // 0x49eeba
        return result;
    }
    // 0x49ed13
    int64_t str; // bp-2104, 0x49ecc0
    snprintf((char *)&str, (int32_t)&g35, "%s #%d:\n", a5, 1);
    int32_t v2; // bp-1080, 0x49ecc0
    function_4a98b0((int64_t *)&v2, &g59, &g99, a6, &str);
    char v3 = v2; // 0x49ed8e
    int64_t v4; // bp-1592, 0x49ecc0
    if (v3 != 0) {
        int64_t v5 = (int64_t)&v1 + (int64_t)&g37;
        int64_t v6 = (int64_t)&v2; // 0x49ee09
        char v7 = v3; // 0x49edb4
        int64_t v8 = v6;
        int64_t v9; // 0x49edb0
        while (v7 != 10) {
            // 0x49edb0
            v9 = v8 + 1;
            v7 = *(char *)v9;
            if (v7 == 0) {
                // break (via goto) -> 0x49ee19
                goto lab_0x49ee19;
            }
            v8 = v9;
        }
        uint64_t v10 = v8 - v6 + 1; // 0x49edd0
        int64_t v11 = v10 < 511 ? v10 : 511; // 0x49eddb
        memcpy(&v4, (int64_t *)v6, (int32_t)v11);
        *(char *)(v5 + v11) = 0;
        v6 = v8 + 1;
        char v12 = *(char *)v6; // 0x49ee10
        while (v12 != 0) {
            // 0x49edbd
            v7 = v12;
            v8 = v6;
            while (v7 != 10) {
                // 0x49edb0
                v9 = v8 + 1;
                v7 = *(char *)v9;
                if (v7 == 0) {
                    // break (via goto) -> 0x49ee19
                    goto lab_0x49ee19;
                }
                v8 = v9;
            }
            // 0x49edc1
            v10 = v8 - v6 + 1;
            v11 = v10 < 511 ? v10 : 511;
            memcpy(&v4, (int64_t *)v6, (int32_t)v11);
            *(char *)(v5 + v11) = 0;
            v6 = v8 + 1;
            v12 = *(char *)v6;
        }
    }
  lab_0x49ee19:
    // 0x49ee19
    __asm_rep_stosq_memset((char *)&v4, 0, 9);
    int64_t result2 = function_4c48b0(a6 + 328, &v4); // 0x49ee33
    if ((int32_t)result2 != 0) {
        // 0x49eeba
        return result2;
    }
    // 0x49ee40
    if ((int32_t)v4 == 0) {
        // 0x49eeaa
        return v4 & 0xffffffff;
    }
    // 0x49ee48
    int64_t str2; // bp-2120, 0x49ecc0
    char * v13; // 0x49ecc0
    return snprintf((char *)&str2, 16, "%s%s", "crt->", v13);
}

// Address range: 0x4a4be0 - 0x4a6a5e
int64_t function_4a4be0(int64_t a1) {
    // 0x4a4be0
    int64_t v1; // 0x4a4be0
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g67, "=> parse client hello", v1);
    int32_t * v2 = (int32_t *)(a1 + 12);
    char * v3 = (char *)(a1 + 372);
    int64_t * v4 = (int64_t *)(a1 + 184);
    int32_t v5; // bp-228, 0x4a4be0
    int64_t v6 = (int64_t)&v5;
    int64_t * v7 = (int64_t *)(a1 + 248);
    int64_t * v8 = (int64_t *)(a1 + 232);
    int64_t v9; // 0x4a4be0
    int64_t v10; // 0x4a4be0
    int64_t v11; // 0x4a4dd9
    if (*v2 == 0) {
        // 0x4a4dd1
        v11 = function_49b4a0(a1, 5);
        v9 = v11;
        v10 = (int64_t)&g68;
        if ((int32_t)v11 != 0) {
            goto lab_0x4a4df5;
        }
    }
    int64_t v12 = *(int64_t *)(a1 + 176); // 0x4a4c23
    unsigned char v13 = *v3 & 2;
    int64_t v14 = v13; // 0x4a4c4f
    function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_srv.c", &g69, "record header", v12, (v14 - ((int64_t)(v13 == 0) | v14) & -8) + 13);
    char * v15 = (char *)v12; // 0x4a4c68
    int64_t v16 = (int64_t)*v15; // 0x4a4c68
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)&g70, "client hello v3, message type: %d", v16);
    int64_t v17 = (int64_t)&g71; // 0x4a4c93
    int64_t v18 = v16; // 0x4a4c93
    int64_t v19; // 0x4a4be0
    int64_t v20; // 0x4a4be0
    int64_t v21; // 0x4a4cd4
    while (*v15 == 22) {
        int64_t v22 = *v4; // 0x4a4c99
        unsigned char v23 = *(char *)v22; // 0x4a4cb4
        unsigned char v24 = *(char *)(v22 + 1); // 0x4a4cb7
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g72, "client hello v3, message len.: %d", 256 * (int64_t)v23 | (int64_t)v24);
        int64_t v25 = v12 + 1; // 0x4a4cd4
        v21 = (int64_t)*(char *)v25;
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g73, "client hello v3, protocol version: [%d:%d]", v21);
        unsigned char v26 = *v3; // 0x4a4d15
        int64_t v27; // bp-224, 0x4a4be0
        function_49bab0((int64_t *)&v5, &v27, (int32_t)(v26 / 2 % 2), v25);
        v17 = (int64_t)&g74;
        v18 = v21;
        if (v5 < 3) {
            // break -> 0x4a4eb4
            break;
        }
        // 0x4a4d34
        v20 = v6;
        if ((*(char *)(v6 + 372) & 2) == 0) {
            goto lab_0x4a4e28;
        }
        // 0x4a4d44
        if (*v2 != 0) {
            // 0x4a4ee8
            v19 = *(int64_t *)(a1 + 272);
            goto lab_0x4a4eef;
        }
        int64_t v28 = *(int64_t *)(a1 + 168); // 0x4a4d4f
        v17 = (int64_t)&g75;
        v18 = v21;
        if (*(char *)v28 != 0) {
            // break -> 0x4a4eb4
            break;
        }
        // 0x4a4d5f
        v17 = (int64_t)&g75;
        v18 = v21;
        if (*(char *)(v28 + 1) != 0) {
            // break -> 0x4a4eb4
            break;
        }
        int64_t v29 = *(int64_t *)(a1 + 296); // 0x4a4d6c
        *(int32_t *)(v29 + 2) = *(int32_t *)(v28 + 2);
        *(int16_t *)(v29 + 6) = *(int16_t *)(v28 + 6);
        if ((int32_t)function_4968b0(a1) == 0) {
            // 0x4a4e20
            function_496940(a1);
            v20 = a1;
            goto lab_0x4a4e28;
        }
        // 0x4a4d8e
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g76, "replayed record, discarding", v21);
        *v7 = 0;
        *v8 = 0;
        if (*v2 == 0) {
            // 0x4a4dd1
            v11 = function_49b4a0(a1, 5);
            v9 = v11;
            v10 = (int64_t)&g68;
            if ((int32_t)v11 != 0) {
                goto lab_0x4a4df5;
            }
        }
        // 0x4a4c20
        v12 = *(int64_t *)(a1 + 176);
        v13 = *v3 & 2;
        v14 = v13;
        function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_srv.c", &g69, "record header", v12, (v14 - ((int64_t)(v13 == 0) | v14) & -8) + 13);
        v15 = (char *)v12;
        v16 = (int64_t)*v15;
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)&g70, "client hello v3, message type: %d", v16);
        v17 = (int64_t)&g71;
        v18 = v16;
    }
    goto lab_0x4a4eb4;
  lab_0x4a4df5:;
    int64_t v357 = v9 & 0xffffffff;
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)v10, "mbedtls_ssl_fetch_input", v357);
    int64_t result = v357; // 0x4a4e11
    goto lab_0x4a4ecf;
  lab_0x4a4e28:
    // 0x4a4e28
    if (*v2 != 0) {
        // 0x4a4ee8
        v19 = *(int64_t *)(a1 + 272);
        goto lab_0x4a4eef;
    } else {
        int64_t v358 = *v4; // 0x4a4e28
        unsigned char v359 = *(char *)(v358 + 1); // 0x4a4e33
        int64_t v360 = 256 * (int64_t)*(char *)v358 | (int64_t)v359; // 0x4a4e3b
        v17 = (int64_t)&g77;
        v18 = v21;
        if (v360 > (int64_t)"le") {
            goto lab_0x4a4eb4;
        } else {
            unsigned char v361 = *(char *)(v20 + 372) & 2;
            int64_t v362 = v361; // 0x4a4e66
            int64_t v363 = v360 + 13; // 0x4a4e72
            int64_t v364 = function_49b4a0(a1, (v362 - ((int64_t)(v361 == 0) | v362) & -8) + v363); // 0x4a4e77
            v9 = v364;
            v10 = (int64_t)&g78;
            if ((int32_t)v364 != 0) {
                goto lab_0x4a4df5;
            } else {
                // 0x4a4e84
                if ((*v3 & 2) == 0) {
                    // 0x4a55d8
                    *v8 = 0;
                    v19 = v360;
                    goto lab_0x4a4eef;
                } else {
                    // 0x4a4e94
                    *v7 = v363;
                    v19 = v360;
                    goto lab_0x4a4eef;
                }
            }
        }
    }
  lab_0x4a4eb4:
    // 0x4a4eb4
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)v17, "bad client hello message", v18);
  lab_0x4a4eca:
    // 0x4a4ecf
    return 0xffff8700;
  lab_0x4a4eef:;
    int64_t * v30 = (int64_t *)(a1 + 200); // 0x4a4eef
    int64_t v31 = *v30; // 0x4a4eef
    function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_srv.c", &g79, "record contents", v31, v19);
    unsigned char v32 = *v3 & 2;
    int64_t v33 = v32; // 0x4a4f46
    v17 = (int64_t)&g80;
    v18 = v31;
    int32_t * v34; // 0x4a4be0
    int32_t v35; // 0x4a4be0
    int64_t v36; // 0x4a4be0
    int64_t v37; // 0x4a4be0
    int64_t v38; // 0x4a4be0
    int64_t v39; // 0x4a55fb
    int64_t v40; // 0x4a560c
    if (v19 < (v33 - ((int64_t)(v32 == 0) | v33) & -8) + 12) {
        goto lab_0x4a4eb4;
    } else {
        char * v41 = (char *)v31; // 0x4a4f5f
        int64_t v42 = (int64_t)*v41; // 0x4a4f5f
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g81, "client hello v3, handshake type: %d", v42);
        v17 = (int64_t)&g82;
        v18 = v42;
        if (*v41 != 1) {
            goto lab_0x4a4eb4;
        } else {
            char * v43 = (char *)(v31 + 1); // 0x4a4f9d
            char * v44 = (char *)(v31 + 2); // 0x4a4fa3
            char * v45 = (char *)(v31 + 3); // 0x4a4fb0
            int64_t v46 = 256 * (int64_t)*v44 | 0x10000 * (int64_t)*v43 | (int64_t)*v45; // 0x4a4fd2
            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g83, "client hello v3, handshake len.: %d", v46);
            v17 = (int64_t)&g84;
            v18 = v46;
            if (*v43 != 0) {
                goto lab_0x4a4eb4;
            } else {
                int64_t v47 = 256 * (int64_t)*v44 | (int64_t)*v45;
                if ((*v3 & 2) != 0) {
                    // 0x4a55e8
                    v39 = v47 + 12;
                    v17 = (int64_t)&g84;
                    v18 = v46;
                    if (v39 != v19) {
                        goto lab_0x4a4eb4;
                    } else {
                        // 0x4a5608
                        v40 = *v30;
                        unsigned char v48 = *(char *)(v40 + 4);
                        unsigned char v49 = *(char *)(v40 + 5);
                        if (*v2 == 1) {
                            int64_t v50 = 256 * (int64_t)v48 | (int64_t)v49; // 0x4a6233
                            int32_t * v51 = (int32_t *)(*(int64_t *)(a1 + 96) + (int64_t)&g56);
                            int32_t v52 = *v51; // 0x4a6236
                            v35 = v52;
                            v34 = v51;
                            v37 = v50;
                            if (v52 == (int32_t)v50) {
                                goto lab_0x4a5630;
                            } else {
                                // 0x4a6245
                                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g85, "bad client hello message_seq: %d (expected %d)", v50);
                                result = 0xffff8700;
                                goto lab_0x4a4ecf;
                            }
                        } else {
                            int32_t v53 = 256 * (int32_t)v48 | (int32_t)v49; // 0x4a5624
                            int64_t v54 = *(int64_t *)(a1 + 96); // 0x4a5626
                            *(int32_t *)(v54 + (int64_t)&g55) = v53;
                            v35 = v53;
                            v34 = (int32_t *)(v54 + (int64_t)&g56);
                            v37 = v46;
                            goto lab_0x4a5630;
                        }
                    }
                } else {
                    int64_t v55 = v47 + 4; // 0x4a500b
                    v17 = (int64_t)&g84;
                    v18 = v46;
                    v38 = v55;
                    v36 = v46;
                    if (v55 != v19) {
                        goto lab_0x4a4eb4;
                    } else {
                        goto lab_0x4a5018;
                    }
                }
            }
        }
    }
  lab_0x4a5018:;
    int64_t v56 = v38; // 0x4a5021
    int64_t v57 = v36; // 0x4a5021
    int64_t v58 = 4; // 0x4a5021
    int64_t v59 = v31 + 4; // 0x4a5021
    goto lab_0x4a5026;
  lab_0x4a5026:;
    uint64_t v60 = v56 - v58; // 0x4a5026
    v17 = (int64_t)&g87;
    v18 = v57;
    int64_t * v61; // 0x4a508d
    uint64_t v62; // 0x4a5091
    int32_t * v63; // 0x4a5095
    if (v60 < 38) {
        goto lab_0x4a4eb4;
    } else {
        // 0x4a503f
        function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g88, "client hello, version", v59, 2);
        int64_t v64 = a1 + 24; // 0x4a5074
        int64_t v65 = a1 + 20; // 0x4a5078
        unsigned char v66 = *v3; // 0x4a507c
        function_49bab0((int64_t *)v65, (int64_t *)v64, (int32_t)(v66 / 2 % 2), v59);
        v61 = (int64_t *)(a1 + 96);
        int64_t v67 = *v61; // 0x4a508d
        int32_t * v68 = (int32_t *)v65; // 0x4a5091
        uint32_t v69 = *v68; // 0x4a5091
        v62 = (int64_t)v69;
        v63 = (int32_t *)v64;
        uint32_t v70 = *v63; // 0x4a5095
        *(int32_t *)(v67 + (int64_t)&g172) = v69;
        *(int32_t *)(v67 + (int64_t)&g173) = v70;
        if (v62 < (int64_t)*(char *)(a1 + 390)) {
            goto lab_0x4a654e;
        } else {
            uint64_t v71 = (int64_t)v70; // 0x4a5095
            if (v71 < (int64_t)*(char *)(a1 + 391)) {
                goto lab_0x4a654e;
            } else {
                unsigned char v72 = *(char *)(a1 + 388); // 0x4a50c7
                if (v62 > (int64_t)v72) {
                    // 0x4a50d7
                    *v68 = (int32_t)v72;
                    *v63 = (int32_t)*(char *)(a1 + 389);
                    goto lab_0x4a50e4;
                } else {
                    unsigned char v73 = *(char *)(a1 + 389); // 0x4a56a8
                    if (v71 > (int64_t)v73) {
                        // 0x4a56b7
                        *v63 = (int32_t)v73;
                        goto lab_0x4a50e4;
                    } else {
                        goto lab_0x4a50e4;
                    }
                }
            }
        }
    }
  lab_0x4a5630:
    // 0x4a5630
    *v34 = v35 + 1;
    if (*(char *)(v40 + 6) != 0) {
        // 0x4a63d1
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g86, "ClientHello fragmentation not supported", v37);
        result = 0xffff8f80;
        goto lab_0x4a4ecf;
    } else {
        // 0x4a5643
        if (*(char *)(v40 + 7) != 0) {
            // 0x4a63d1
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g86, "ClientHello fragmentation not supported", v37);
            result = 0xffff8f80;
            goto lab_0x4a4ecf;
        } else {
            // 0x4a564d
            if (*(char *)(v40 + 8) != 0) {
                // 0x4a63d1
                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g86, "ClientHello fragmentation not supported", v37);
                result = 0xffff8f80;
                goto lab_0x4a4ecf;
            } else {
                // 0x4a5657
                if (memcmp((int64_t *)(v40 + 1), (int64_t *)(v40 + 9), 3) != 0) {
                    // 0x4a63d1
                    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g86, "ClientHello fragmentation not supported", v37);
                    result = 0xffff8f80;
                    goto lab_0x4a4ecf;
                } else {
                    // 0x4a5671
                    v38 = v39;
                    v36 = v37;
                    if ((*(char *)(v40 + 373) & 2) == 0) {
                        goto lab_0x4a5018;
                    } else {
                        // 0x4a5681
                        v56 = v39;
                        v57 = v37;
                        v58 = 12;
                        v59 = v31 + 12;
                        goto lab_0x4a5026;
                    }
                }
            }
        }
    }
  lab_0x4a654e:
    // 0x4a654e
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g89, "client only supports ssl smaller than minimum [%d:%d] < [%d:%d]", v62);
    function_49a730(a1, 2, 70, (int64_t)&g89);
    result = 0xffff9180;
    goto lab_0x4a4ecf;
  lab_0x4a50e4:;
    int64_t v74 = v59 + 2; // 0x4a510c
    function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g90, "client hello, random bytes", v74, 32);
    int64_t v75 = *v61; // 0x4a511d
    *(int64_t *)(v75 + (int64_t)&g112) = *(int64_t *)v74;
    int64_t v76 = *(int64_t *)(v59 + 10); // 0x4a5133
    *(int64_t *)(v75 + (int64_t)&g112 + 8) = v76;
    int64_t v77 = *(int64_t *)(v59 + 18); // 0x4a513c
    *(int64_t *)(v75 + (int64_t)&g112 + 16) = v77;
    int64_t v78 = *(int64_t *)(v59 + 26); // 0x4a5145
    *(int64_t *)(v75 + (int64_t)&g112 + 24) = v78;
    unsigned char v79 = *(char *)(v59 + 34); // 0x4a514e
    v17 = (int64_t)&g91;
    v18 = v74;
    int64_t v80; // 0x4a4be0
    int64_t v81; // 0x4a4be0
    int64_t v82; // 0x4a514e
    int64_t * v83; // 0x4a51a6
    unsigned char v84; // 0x4a520d
    int64_t v85; // 0x4a5213
    int64_t v86; // 0x4a5226
    if (v79 < 33) {
        // 0x4a5161
        v82 = v79;
        uint64_t v87 = v82 + 36; // 0x4a5164
        v17 = (int64_t)&g91;
        v18 = v74;
        if (v60 < v87) {
            goto lab_0x4a4eb4;
        } else {
            int64_t v88 = v59 + 35; // 0x4a5196
            function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g92, "client hello, session id", v88, v82);
            v83 = (int64_t *)(a1 + 88);
            int64_t v89 = *v83; // 0x4a51a6
            *(int64_t *)(v89 + 24) = 0;
            *(int64_t *)(v89 + 32) = 0;
            *(int64_t *)(v89 + 40) = 0;
            *(int64_t *)(v89 + 48) = 0;
            int64_t v90 = *v83; // 0x4a51d2
            *(int64_t *)(v89 + 16) = v82;
            int64_t v91 = *(int64_t *)(v90 + 16); // 0x4a51da
            memcpy((int64_t *)(v90 + 24), (int64_t *)v88, (int32_t)v91);
            if ((*(char *)(v90 + 396) & 2) == 0) {
                // 0x4a56c0
                v80 = v88;
                v81 = v82 + 35;
                goto lab_0x4a52aa;
            } else {
                // 0x4a51f7
                v84 = *(char *)(v88 + v82);
                int64_t v92 = v84; // 0x4a520d
                v85 = v82 + 35 + v92;
                v17 = (int64_t)&g93;
                v18 = v88;
                if (v60 < v85 + 3) {
                    goto lab_0x4a4eb4;
                } else {
                    // 0x4a5226
                    v86 = v87 + v59;
                    function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g95, "client hello, cookie", v86, v92);
                    if (*(int64_t *)(a1 + 144) == 0) {
                        goto lab_0x4a526e;
                    } else {
                        // 0x4a5261
                        if (*v2 == 0) {
                            int64_t v93; // 0x4a5255
                            if ((int32_t)v93 == 0) {
                                // 0x4a6658
                                function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g98, "cookie verification passed", v86);
                                int64_t v94 = *v61; // 0x4a667a
                                *(char *)(v94 + (int64_t)&g57) = 0;
                                // 0x4a52a5
                                v80 = v86;
                                v81 = v85 + 1;
                                goto lab_0x4a52aa;
                            } else {
                                // 0x4a6334
                                function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g97, "cookie verification failed", v86);
                                int64_t v95 = *v61; // 0x4a6356
                                *(char *)(v95 + (int64_t)&g57) = 1;
                                // 0x4a52a5
                                v80 = v86;
                                v81 = v85 + 1;
                                goto lab_0x4a52aa;
                            }
                        } else {
                            goto lab_0x4a526e;
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4a4eb4;
    }
  lab_0x4a52aa:;
    int64_t v96 = v59 + 1; // 0x4a52af
    uint64_t v97 = (int64_t)*(char *)(v81 + v96); // 0x4a52bb
    uint64_t v98 = 256 * (int64_t)*(char *)(v81 + v59) | v97; // 0x4a52bb
    v17 = (int64_t)&g103;
    v18 = v80;
    int64_t v99; // 0x4a4be0
    int64_t v100; // 0x4a4be0
    int64_t v101; // 0x4a4be0
    int64_t v102; // 0x4a4be0
    int64_t v103; // 0x4a4be0
    int64_t v104; // 0x4a4be0
    char v105; // bp-216, 0x4a4be0
    int32_t v106; // 0x4a4be0
    int32_t v107; // 0x4a4be0
    int64_t v108; // 0x4a5300
    int64_t * v109; // 0x4a4be0
    int64_t v110; // 0x4a4be0
    if (v98 < 2) {
        goto lab_0x4a4eb4;
    } else {
        int64_t v111 = v98 + v81; // 0x4a52ca
        uint64_t v112 = v111 + 3; // 0x4a52ce
        v17 = (int64_t)&g103;
        v18 = v80;
        if (v60 < v112) {
            goto lab_0x4a4eb4;
        } else {
            // 0x4a52db
            v17 = (int64_t)&g103;
            v18 = v80;
            if (v97 % 2 != 0) {
                goto lab_0x4a4eb4;
            } else {
                // 0x4a52e3
                v108 = v81 + v74;
                function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g104, "client hello, ciphersuitelist", v108, v98);
                unsigned char v113 = *(char *)(v111 + v74); // 0x4a5327
                int64_t v114 = v113; // 0x4a5327
                v17 = (int64_t)&g105;
                v18 = v108;
                if (v113 == 16 || v114 < 16) {
                    int64_t v115 = v111 + 2 + v114; // 0x4a533b
                    uint64_t v116 = v115 + 1; // 0x4a533f
                    v17 = (int64_t)&g105;
                    v18 = v108;
                    if (v60 < v116) {
                        goto lab_0x4a4eb4;
                    } else {
                        int64_t v117 = v112 + v59; // 0x4a5370
                        function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g106, "client hello, compression", v117, v114);
                        *(int32_t *)(*v83 + 12) = 0;
                        uint64_t v118 = v115 + 3;
                        if (v60 > v116) {
                            // 0x4a538d
                            v17 = (int64_t)&g107;
                            v18 = v117;
                            if (v60 < v118) {
                                goto lab_0x4a4eb4;
                            } else {
                                unsigned char v119 = *(char *)(v115 + v74); // 0x4a53a5
                                int64_t v120 = 256 * (int64_t)*(char *)(v115 + v96) | (int64_t)v119; // 0x4a53ae
                                v17 = (int64_t)&g108;
                                v18 = v117;
                                if (v120 < 4) {
                                    goto lab_0x4a4eb4;
                                } else {
                                    // 0x4a53c1
                                    v17 = (int64_t)&g108;
                                    v18 = v117;
                                    if (v120 + v118 != v60) {
                                        goto lab_0x4a4eb4;
                                    } else {
                                        int64_t v121 = v118 + v59; // 0x4a53f3
                                        int64_t v122 = function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g109, "client hello extensions", v121, v120); // 0x4a53f9
                                        result = v122;
                                        if (v120 == 0) {
                                            goto lab_0x4a4ecf;
                                        } else {
                                            unsigned char v123 = *(char *)(v121 + 1); // 0x4a540b
                                            int64_t v124 = 256 * (int64_t)*(char *)v121 | (int64_t)v123; // 0x4a5419
                                            unsigned char v125 = *(char *)(v121 + 3); // 0x4a541c
                                            int64_t v126 = 256 * (int64_t)*(char *)(v121 + 2) | (int64_t)v125; // 0x4a5424
                                            int64_t v127 = v126 + 4; // 0x4a5426
                                            v17 = (int64_t)&g110;
                                            v18 = v124;
                                            if (v120 < v127) {
                                                goto lab_0x4a4eb4;
                                            } else {
                                                // 0x4a5435
                                                v109 = (int64_t *)a1;
                                                v110 = (int64_t)&v105;
                                                v106 = 0;
                                                v104 = v126;
                                                v103 = v124;
                                                v99 = v120;
                                                v100 = v121;
                                                v101 = v127;
                                                goto lab_0x4a5513;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            int64_t v128 = v118 + v59; // 0x4a5ebd
                            function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g109, "client hello extensions", v128, 0);
                            v107 = 0;
                            v102 = v128;
                            goto lab_0x4a5ed4;
                        }
                    }
                } else {
                    goto lab_0x4a4eb4;
                }
            }
        }
    }
  lab_0x4a526e:
    // 0x4a526e
    v17 = (int64_t)&g101;
    v18 = v86;
    if (v84 != 0) {
        goto lab_0x4a4eb4;
    } else {
        // 0x4a5283
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g102, "cookie verification skipped", v86);
        // 0x4a52a5
        v80 = v86;
        v81 = v85 + 1;
        goto lab_0x4a52aa;
    }
  lab_0x4a5ed4:;
    int64_t v129 = v59 + 41 + v82; // 0x4a5ede
    int64_t v130 = v129; // 0x4a5ee6
    goto lab_0x4a5eff;
  lab_0x4a5eff:;
    int64_t v131 = v130;
    int64_t v132; // 0x4a4be0
    if (*(char *)v131 != 86) {
        goto lab_0x4a5ef0;
    } else {
        // 0x4a5f04
        if (*(char *)(v131 + 1) != 0) {
            goto lab_0x4a5ef0;
        } else {
            // 0x4a5f0a
            function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g125, "received FALLBACK_SCSV", v102);
            int64_t v133 = (int64_t)*(char *)(*(int64_t *)a1 + 369); // 0x4a5f2f
            result = v133;
            if ((int64_t)*v63 < v133) {
                goto lab_0x4a4ecf;
            } else {
                // 0x4a5f3f
                v132 = v108;
                goto lab_0x4a5f48;
            }
        }
    }
  lab_0x4a5ef0:;
    int64_t v134 = v131 + 2; // 0x4a5ef0
    v130 = v134;
    if (v98 > v134 - v129) {
        goto lab_0x4a5eff;
    } else {
        // 0x4a5f3f
        v132 = v108;
        goto lab_0x4a5f48;
    }
  lab_0x4a5f48:;
    int64_t v135 = v132;
    int64_t v136; // 0x4a4be0
    int64_t v137; // 0x4a4be0
    int64_t v138; // 0x4a4be0
    int64_t v139; // 0x4a4be0
    if (*(char *)v135 != 0) {
        goto lab_0x4a5f57;
    } else {
        // 0x4a5f4d
        if (*(char *)(v135 + 1) == -1) {
            // 0x4a67b2
            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g126, "received TLS_EMPTY_RENEGOTIATION_INFO ", v102);
            v139 = (int64_t)&g127;
            v136 = (int64_t)"received RENEGOTIATION SCSV during renegotiation";
            v137 = v102;
            if (*v2 == 1) {
                goto lab_0x4a5810;
            } else {
                // 0x4a67de
                *(int32_t *)(a1 + 400) = 1;
                v138 = *(int64_t *)a1;
                goto lab_0x4a5f95;
            }
        } else {
            goto lab_0x4a5f57;
        }
    }
  lab_0x4a5513:;
    int64_t v140 = v100;
    int64_t v141 = v103;
    int64_t v142 = v104;
    int32_t v143 = v106;
    uint32_t v144 = (int32_t)v141; // 0x4a5513
    char * v145; // 0x4a4be0
    int32_t v146; // 0x4a4be0
    int64_t v147; // 0x4a4be0
    int64_t v148; // 0x4a4be0
    int64_t v149; // 0x4a4be0
    int64_t v150; // 0x4a4be0
    int64_t v151; // 0x4a4be0
    int64_t v152; // 0x4a4be0
    int64_t v153; // 0x4a4be0
    int64_t v154; // 0x4a4be0
    int64_t v155; // 0x4a4be0
    int64_t v156; // 0x4a4be0
    int64_t v157; // 0x4a4be0
    int64_t v158; // 0x4a4be0
    int64_t v159; // 0x4a4be0
    int64_t v160; // 0x4a4be0
    int64_t v161; // 0x4a4be0
    int64_t v162; // 0x4a4be0
    int64_t v163; // 0x4a4be0
    char v164; // 0x4a4be0
    int64_t v165; // 0x4a4be0
    int64_t * v166; // 0x4a4be0
    int64_t v167; // 0x4a4be0
    int64_t v168; // 0x4a4be0
    int64_t v169; // 0x4a4be0
    int64_t v170; // 0x4a4be0
    int64_t v171; // 0x4a4be0
    int64_t v172; // 0x4a4be0
    int64_t v173; // 0x4a4be0
    int32_t v174; // 0x4a4be0
    int64_t v175; // 0x4a4be0
    uint64_t v176; // 0x4a5c96
    int64_t v177; // 0x4a5cbb
    char * v178; // 0x4a4be0
    int64_t v179; // 0x4a571e
    int64_t v180; // 0x4a57e6
    uint64_t v181; // 0x4a5dbe
    uint64_t v182; // 0x4a5dce
    int64_t v183; // 0x4a6837
    if (v144 == 13) {
        // 0x4a5c60
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g114, "found signature_algorithms extension", v141);
        v174 = v143;
        v154 = v141;
        if (*v2 == 1) {
            goto lab_0x4a54c8;
        } else {
            int64_t v184 = v140 + 4; // 0x4a5c8c
            uint64_t v185 = (int64_t)*(char *)(v140 + 5); // 0x4a5c9e
            v17 = 203;
            v18 = v141;
            if (v142 != (256 * (int64_t)*(char *)v184 || v185) + 2) {
                goto lab_0x4a4eb4;
            } else {
                // 0x4a5cb0
                v17 = 203;
                v18 = v141;
                if (v185 % 2 != 0) {
                    goto lab_0x4a4eb4;
                } else {
                    int64_t v186 = *(int64_t *)(*v109 + 232); // 0x4a5cbf
                    int32_t v187 = *(int32_t *)v186; // 0x4a5cc6
                    v166 = (int64_t *)223;
                    v151 = (int64_t)"no signature_algorithm in common";
                    v152 = v141;
                    if (v187 == 0) {
                        goto lab_0x4a62e3;
                    } else {
                        // 0x4a5cea
                        v176 = v184 + v142;
                        v177 = v140 + 6;
                        v178 = (char *)v177;
                        v146 = v187;
                        v149 = v186;
                        goto lab_0x4a5cea_2;
                    }
                }
            }
        }
    } else {
        if (v144 < 14) {
            if (v144 == 4) {
                // 0x4a5bb0
                function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g118, "found truncated hmac extension", v141);
                v17 = 379;
                v18 = v141;
                if (v142 != 0) {
                    goto lab_0x4a4eb4;
                } else {
                    // 0x4a5bda
                    v174 = v143;
                    v154 = v141;
                    if (*(char *)(*v109 + 373) >= 0) {
                        goto lab_0x4a54c8;
                    } else {
                        // 0x4a5bea
                        *(int32_t *)(*v83 + 144) = 1;
                        v174 = v143;
                        v154 = v141;
                        goto lab_0x4a54c8;
                    }
                }
            } else {
                if (v144 < 5) {
                    // 0x4a5480
                    v163 = (int64_t)&g123;
                    v150 = (int64_t)"unknown extension found: %d (ignoring)";
                    v153 = v141;
                    switch (v144) {
                        case 0: {
                            // 0x4a5abf
                            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g111, "found ServerName extension", v141);
                            v174 = v143;
                            v154 = v141;
                            if (*(int64_t *)(*v109 + 88) == 0) {
                                goto lab_0x4a54c8;
                            } else {
                                // 0x4a5aef
                                function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)98, "parse ServerName extension", v141);
                                unsigned char v188 = *(char *)(v140 + 5); // 0x4a5b16
                                int64_t v189 = 256 * (int64_t)*(char *)(v140 + 4) | (int64_t)v188; // 0x4a5b1e
                                v17 = 103;
                                v18 = v141;
                                if (v142 != v189 + 2) {
                                    goto lab_0x4a4eb4;
                                } else {
                                    // 0x4a5b30
                                    v174 = v143;
                                    v154 = v141;
                                    if (v189 == 0) {
                                        goto lab_0x4a54c8;
                                    } else {
                                        unsigned char v190 = *(char *)(v140 + 8); // 0x4a5b42
                                        int64_t v191 = 256 * (int64_t)*(char *)(v140 + 7) | (int64_t)v190; // 0x4a5b4a
                                        int64_t v192 = v191 + 3; // 0x4a5b4e
                                        v17 = 113;
                                        v18 = v141;
                                        if (v189 < v192) {
                                            goto lab_0x4a4eb4;
                                        } else {
                                            int64_t v193 = v140 + 6; // 0x4a5b33
                                            v158 = v191;
                                            v165 = v192;
                                            v170 = v193;
                                            v171 = v189;
                                            v159 = v191;
                                            if (*(char *)v193 != 0) {
                                                goto lab_0x4a5b71;
                                            } else {
                                                goto lab_0x4a65dd;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        case 1: {
                            // 0x4a5a78
                            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g117, "found max fragment length extension", v141);
                            v17 = 362;
                            v18 = v141;
                            if (v142 != 1) {
                                goto lab_0x4a4eb4;
                            } else {
                                unsigned char v194 = *(char *)(v140 + 4); // 0x4a5aa3
                                v17 = 362;
                                v18 = v141;
                                if (v194 < 5) {
                                    // 0x4a5ab0
                                    *(char *)(*v83 + 140) = v194;
                                    v174 = v143;
                                    v154 = v141;
                                    goto lab_0x4a54c8;
                                } else {
                                    goto lab_0x4a4eb4;
                                }
                            }
                        }
                        default: {
                            goto lab_0x4a54ac;
                        }
                    }
                } else {
                    if (v144 == 10) {
                        // 0x4a5968
                        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g115, "found supported elliptic curves extension", v141);
                        uint64_t v195 = (int64_t)*(char *)(v140 + 5); // 0x4a5997
                        int64_t v196 = 256 * (int64_t)*(char *)(v140 + 4) | v195; // 0x4a5997
                        v17 = 249;
                        v18 = v141;
                        if (v142 != v196 + 2) {
                            goto lab_0x4a4eb4;
                        } else {
                            // 0x4a59aa
                            v17 = 249;
                            v18 = v141;
                            if (v195 % 2 != 0) {
                                goto lab_0x4a4eb4;
                            } else {
                                int64_t * v197 = (int64_t *)(*v61 + (int64_t)&g52); // 0x4a59b6
                                v17 = 256;
                                v18 = v141;
                                if (*v197 != 0) {
                                    goto lab_0x4a4eb4;
                                } else {
                                    uint64_t v198 = v196 / 2 + 1; // 0x4a59d5
                                    int64_t nmemb = v198 < 12 ? v198 : 12; // 0x4a59dd
                                    int64_t * mem = calloc((int32_t)nmemb, 8); // 0x4a59e9
                                    result = 0xffff8100;
                                    if (mem == NULL) {
                                        goto lab_0x4a4ecf;
                                    } else {
                                        int64_t v199 = (int64_t)mem; // 0x4a59e9
                                        *v197 = v199;
                                        v174 = v143;
                                        v154 = v141;
                                        if (v196 == 0 || nmemb < 2) {
                                            goto lab_0x4a54c8;
                                        } else {
                                            // 0x4a5a1a
                                            v162 = nmemb;
                                            v160 = v140 + 6;
                                            v147 = v196;
                                            v148 = v199;
                                            goto lab_0x4a5a35;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        // 0x4a56f2
                        v163 = (int64_t)&g123;
                        v150 = (int64_t)"unknown extension found: %d (ignoring)";
                        v153 = v141;
                        if (v144 != 11) {
                            goto lab_0x4a54ac;
                        } else {
                            // 0x4a56fc
                            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g116, "found supported point formats extension", v141);
                            v179 = *v61;
                            int32_t * v200 = (int32_t *)(v179 + (int64_t)&g174); // 0x4a5722
                            *v200 = *v200 | 1;
                            unsigned char v201 = *(char *)(v140 + 4); // 0x4a5729
                            int64_t v202 = v201; // 0x4a5729
                            v17 = 299;
                            v18 = v141;
                            if (v142 != v202 + 1) {
                                goto lab_0x4a4eb4;
                            } else {
                                // 0x4a573b
                                v174 = v143;
                                v154 = v141;
                                if (v201 == 0) {
                                    goto lab_0x4a54c8;
                                } else {
                                    int64_t v203 = v140 + 5; // 0x4a573e
                                    char * v204 = (char *)v203;
                                    unsigned char v205 = *v204; // 0x4a5748
                                    v157 = v202;
                                    v169 = v203;
                                    v145 = v204;
                                    v164 = v205;
                                    if (v205 < 2) {
                                        goto lab_0x4a576e;
                                    } else {
                                        goto lab_0x4a5758;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (v144 == 23) {
                // 0x4a5c00
                function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g120, "found extended master secret extension", v141);
                v17 = 422;
                v18 = v141;
                if (v142 != 0) {
                    goto lab_0x4a4eb4;
                } else {
                    // 0x4a5c2a
                    v174 = v143;
                    v154 = v141;
                    if ((*(char *)(*v109 + 373) & 8) == 0) {
                        goto lab_0x4a54c8;
                    } else {
                        // 0x4a5c3a
                        v174 = v143;
                        v154 = v141;
                        if (*v63 == 0) {
                            goto lab_0x4a54c8;
                        } else {
                            // 0x4a5c47
                            *(int32_t *)(*v61 + (int64_t)&g176) = 1;
                            v174 = v143;
                            v154 = v141;
                            goto lab_0x4a54c8;
                        }
                    }
                }
            } else {
                if (v144 < 24) {
                    if (v144 == 16) {
                        // 0x4a5d50
                        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g122, "found alpn extension", v141);
                        int64_t v206 = *(int64_t *)(*v109 + 328); // 0x4a5d7c
                        v174 = v143;
                        v154 = v141;
                        if (v206 == 0) {
                            goto lab_0x4a54c8;
                        } else {
                            if (v142 < 4) {
                                goto lab_0x4a4eca;
                            } else {
                                int64_t v207 = v140 + 4; // 0x4a5d78
                                unsigned char v208 = *(char *)v207; // 0x4a5d9b
                                unsigned char v209 = *(char *)(v140 + 5); // 0x4a5da0
                                if ((256 * (int64_t)v208 || (int64_t)v209) != v142 - 2) {
                                    goto lab_0x4a4eca;
                                } else {
                                    int64_t v210 = *(int64_t *)v206; // 0x4a5dc2
                                    v167 = v207;
                                    if (v210 == 0) {
                                        // 0x4a63a7
                                        function_49a730(a1, 2, 120, v167);
                                        goto lab_0x4a4eca;
                                    } else {
                                        // 0x4a5dce
                                        v181 = v207 + v142;
                                        v182 = v140 + 6;
                                        v175 = v206;
                                        v161 = v210;
                                        goto lab_0x4a5dfd;
                                    }
                                }
                            }
                        }
                    } else {
                        // 0x4a5540
                        v163 = (int64_t)&g123;
                        v150 = (int64_t)"unknown extension found: %d (ignoring)";
                        v153 = v141;
                        if (v144 != 22) {
                            goto lab_0x4a54ac;
                        } else {
                            // 0x4a554a
                            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g119, "found encrypt then mac extension", v141);
                            v17 = 399;
                            v18 = v141;
                            if (v142 != 0) {
                                goto lab_0x4a4eb4;
                            } else {
                                // 0x4a5574
                                v174 = v143;
                                v154 = v141;
                                if ((*(char *)(*v109 + 373) & 4) == 0) {
                                    goto lab_0x4a54c8;
                                } else {
                                    uint32_t v211 = *v63; // 0x4a5584
                                    v174 = v143;
                                    v154 = 0;
                                    if (v211 == 0) {
                                        goto lab_0x4a54c8;
                                    } else {
                                        // 0x4a5591
                                        *(int32_t *)(*v83 + 148) = 1;
                                        v174 = v143;
                                        v154 = v211;
                                        goto lab_0x4a54c8;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (v144 == 35) {
                        // 0x4a5840
                        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g121, "found session ticket extension", v141);
                        function_496ab0((int64_t *)&v105);
                        int64_t v212 = *v109; // 0x4a586f
                        v174 = v143;
                        v154 = v141;
                        if (*(int64_t *)(v212 + 168) == 0) {
                            goto lab_0x4a54c8;
                        } else {
                            // 0x4a5880
                            v174 = v143;
                            v154 = v141;
                            if (*(int64_t *)(v212 + 160) == 0) {
                                goto lab_0x4a54c8;
                            } else {
                                // 0x4a588e
                                *(int32_t *)(*v61 + (int64_t)&g175) = 1;
                                function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)457, "ticket length: %d", v142);
                                v174 = v143;
                                v154 = 0;
                                if (v142 == 0) {
                                    goto lab_0x4a54c8;
                                } else {
                                    // 0x4a58ca
                                    v166 = (int64_t *)465;
                                    v151 = (int64_t)"ticket rejected: renegotiating";
                                    v152 = v142;
                                    if (*v2 != 0) {
                                        goto lab_0x4a62e3;
                                    } else {
                                        int64_t v213 = *v109; // 0x4a58e1
                                        int32_t v214 = v213; // 0x4a5900
                                        if (v214 == 0) {
                                            int64_t v215 = *v83; // 0x4a66bd
                                            int64_t v216 = *(int64_t *)(v215 + 16); // 0x4a66c6
                                            int64_t * v217 = (int64_t *)(v215 + 24); // 0x4a66d6
                                            int64_t v218; // bp-192, 0x4a4be0
                                            memcpy(&v218, v217, (int32_t)v216);
                                            function_497930((int64_t *)v215, v217, v216, v142, "ticket rejected: renegotiating");
                                            uint64_t v219 = *v83; // 0x4a66e3
                                            v155 = 152;
                                            v172 = v110;
                                            v168 = v219;
                                            if (v219 % 2 != 0) {
                                                // 0x4a6999
                                                *(char *)v219 = v105;
                                                v155 = 151;
                                                int64_t v220; // bp-215, 0x4a4be0
                                                v172 = (int64_t)&v220;
                                                v168 = v219 + 1;
                                                goto lab_0x4a66fe;
                                            } else {
                                                goto lab_0x4a66fe;
                                            }
                                        } else {
                                            // 0x4a590a
                                            function_497930((int64_t *)&v105, (int64_t *)&v105, v140 + 4, v142, "ticket rejected: renegotiating");
                                            v166 = (int64_t *)479;
                                            v151 = (int64_t)"ticket is not authentic";
                                            v152 = v142;
                                            switch (v214) {
                                                case -0x7180: {
                                                    goto lab_0x4a62e3;
                                                }
                                                case -0x6d80: {
                                                    // 0x4a62e3
                                                    v166 = (int64_t *)481;
                                                    v151 = (int64_t)"ticket is expired";
                                                    v152 = v142;
                                                    goto lab_0x4a62e3;
                                                }
                                                default: {
                                                    int64_t v221 = v213 & 0xffffffff; // 0x4a5902
                                                    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)483, "mbedtls_ssl_ticket_parse", v221);
                                                    v174 = v143;
                                                    v154 = v221;
                                                    goto lab_0x4a54c8;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        // 0x4a57aa
                        v163 = (int64_t)&g123;
                        v150 = (int64_t)"unknown extension found: %d (ignoring)";
                        v153 = v141;
                        if (v144 != (int32_t)&g178) {
                            goto lab_0x4a54ac;
                        } else {
                            // 0x4a57b7
                            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g113, "found renegotiation extension", v141);
                            if (*v2 == 0) {
                                // 0x4a6289
                                v139 = 173;
                                v136 = (int64_t)"non-zero length renegotiation info";
                                v137 = v141;
                                if (v142 != 1) {
                                    goto lab_0x4a5810;
                                } else {
                                    // 0x4a6293
                                    v139 = 173;
                                    v136 = (int64_t)"non-zero length renegotiation info";
                                    v137 = v141;
                                    if (*(char *)(v140 + 4) != 0) {
                                        goto lab_0x4a5810;
                                    } else {
                                        // 0x4a629e
                                        *(int32_t *)(a1 + 400) = 1;
                                        v174 = 1;
                                        v154 = v141;
                                        goto lab_0x4a54c8;
                                    }
                                }
                            } else {
                                // 0x4a57e6
                                v180 = *(int64_t *)(a1 + 408);
                                v139 = 160;
                                v136 = (int64_t)"non-matching renegotiation info";
                                v137 = v141;
                                if (v142 != v180 + 1) {
                                    goto lab_0x4a5810;
                                } else {
                                    // 0x4a57f6
                                    v139 = 160;
                                    v136 = (int64_t)"non-matching renegotiation info";
                                    v137 = v141;
                                    if (v180 == (int64_t)*(char *)(v140 + 4)) {
                                        // 0x4a6834
                                        v183 = v140 + 5;
                                        v174 = 1;
                                        v154 = v141;
                                        v156 = 0;
                                        v173 = 0;
                                        if (v180 == 0) {
                                            goto lab_0x4a54c8;
                                        } else {
                                            goto lab_0x4a6845;
                                        }
                                    } else {
                                        goto lab_0x4a5810;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x4a5f57:;
    int64_t v222 = v135 + 2; // 0x4a5f57
    v132 = v222;
    if (v98 > v222 - v108) {
        goto lab_0x4a5f48;
    } else {
        int32_t v223 = *(int32_t *)(a1 + 400); // 0x4a5f66
        result = v222;
        if (v223 == 1) {
            goto lab_0x4a4ecf;
        } else {
            int64_t v224 = *(int64_t *)a1; // 0x4a5f75
            char v225 = *(char *)(v224 + 372) & 48;
            v139 = (int64_t)&g128;
            v136 = (int64_t)"legacy renegotiation, breaking off handshake";
            v137 = v102;
            if (v225 == 32) {
                goto lab_0x4a5810;
            } else {
                // 0x4a5f8b
                v138 = v224;
                if (v223 != 0 | *v2 != 1) {
                    goto lab_0x4a5f95;
                } else {
                    // 0x4a68a1
                    v139 = (int64_t)(v223 & -0x10000) | (int64_t)&g129;
                    v136 = (int64_t)"legacy renegotiation not allowed";
                    v137 = v102;
                    if (v225 == 0) {
                        goto lab_0x4a5810;
                    } else {
                        // 0x4a68b4
                        v139 = (int64_t)&g130;
                        v136 = (int64_t)"renegotiation_info extension present (legacy)";
                        v137 = v102;
                        v138 = v224;
                        if (v107 != 1) {
                            goto lab_0x4a5f95;
                        } else {
                            goto lab_0x4a5810;
                        }
                    }
                }
            }
        }
    }
  lab_0x4a54c8:;
    int64_t v226 = v99 - v101; // 0x4a54c8
    v17 = (int64_t)&g124;
    v18 = v154;
    if (v226 < 4) {
        goto lab_0x4a4eb4;
    } else {
        // 0x4a54dc
        v107 = v174;
        v102 = v154;
        if (v226 == 0) {
            goto lab_0x4a5ed4;
        } else {
            int64_t v227 = v101 + v140; // 0x4a54cb
            unsigned char v228 = *(char *)(v227 + 1); // 0x4a54e9
            int64_t v229 = 256 * (int64_t)*(char *)v227 | (int64_t)v228; // 0x4a54f7
            unsigned char v230 = *(char *)(v227 + 3); // 0x4a54fa
            int64_t v231 = 256 * (int64_t)*(char *)(v227 + 2) | (int64_t)v230; // 0x4a5502
            int64_t v232 = v231 + 4; // 0x4a5504
            v17 = (int64_t)&g110;
            v18 = v229;
            v106 = v174;
            v104 = v231;
            v103 = v229;
            v99 = v226;
            v100 = v227;
            v101 = v232;
            if (v232 > v226) {
                goto lab_0x4a4eb4;
            } else {
                goto lab_0x4a5513;
            }
        }
    }
  lab_0x4a5810:
    // 0x4a5810
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)v139, (char *)v136, v137);
    int64_t v233 = function_49a900(a1); // 0x4a5829
    result = v233;
    if ((int32_t)v233 != 0) {
        goto lab_0x4a4ecf;
    } else {
        goto lab_0x4a4eca;
    }
  lab_0x4a5f95:;
    int64_t v234 = *(int64_t *)(8 * (int64_t)*v63 + v138); // 0x4a5f99
    int32_t v235 = *(int32_t *)v234; // 0x4a5f9d
    int64_t v236 = v102; // 0x4a5fa2
    int32_t v237; // 0x4a4be0
    int64_t v238; // 0x4a4be0
    int64_t v239; // 0x4a4be0
    int64_t v240; // 0x4a4be0
    int64_t * v241; // 0x4a4be0
    if (v235 == 0) {
        goto lab_0x4a68d0;
    } else {
        // 0x4a5fb8
        v241 = (int64_t *)a1;
        v237 = v235;
        v240 = v234;
        v239 = 0;
        v238 = v102;
        goto lab_0x4a5fb8_2;
    }
  lab_0x4a68d0:
    // 0x4a68d0
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g132, "got no ciphersuites in common", v236);
    function_49a900(a1);
    result = 0xffff8c80;
    goto lab_0x4a4ecf;
  lab_0x4a62e3:
    // 0x4a62e3
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", v166, (char *)v151, v152);
    v174 = v143;
    v154 = v152;
    goto lab_0x4a54c8;
  lab_0x4a54ac:
    // 0x4a54ac
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)v163, (char *)v150, v153);
    v174 = v143;
    v154 = v153;
    goto lab_0x4a54c8;
  lab_0x4a5fb8_2:;
    int32_t * v242 = (int32_t *)v240;
    int32_t v243 = v237; // 0x4a5fbb
    int64_t v244 = v239; // 0x4a5fbb
    int64_t v245 = v108; // 0x4a5fbb
    int64_t v246 = v238; // 0x4a5fbb
    goto lab_0x4a5fd3;
  lab_0x4a5cea_2:;
    int64_t v261 = v149;
    char * v269; // 0x4a4be0
    int64_t v267; // 0x4a4be0
    int32_t * v270; // 0x4a5d12
    if (v176 > v177) {
        // 0x4a5d0d
        v270 = (int32_t *)v261;
        v267 = v177;
        v269 = v178;
        if (v146 != (int32_t)function_498b90(*v178)) {
            goto lab_0x4a5d00;
        } else {
            goto lab_0x4a5d1e;
        }
    } else {
        goto lab_0x4a62b5;
    }
  lab_0x4a5fd3:;
    int64_t v247 = v246;
    int64_t v248 = v245;
    int64_t v249 = v244;
    uint32_t v250 = v243; // 0x4a5fd3
    int64_t v251 = v249; // 0x4a5fde
    int64_t v252 = v247; // 0x4a5fde
    int64_t v253; // 0x4a4be0
    int64_t v254; // 0x4a4be0
    int64_t v255; // 0x4a5fe6
    int64_t * v256; // 0x4a4be0
    int64_t v257; // 0x4a5ff7
    char v258; // 0x4a6037
    if (*(char *)v248 != (char)(v250 / 256)) {
        goto lab_0x4a5fc0;
    } else {
        // 0x4a5fe0
        v251 = v249;
        v252 = v247;
        if (*(char *)(v248 + 1) != (char)v250) {
            goto lab_0x4a5fc0;
        } else {
            // 0x4a5fe6
            v255 = function_49efb0(v250);
            if (v255 == 0) {
                // 0x4a6a06
                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g45, "should never happen", v247);
                result = 0xffff9400;
                goto lab_0x4a4ecf;
            } else {
                // 0x4a5ff7
                v256 = (int64_t *)(v255 + 8);
                v257 = *v256;
                function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g46, "trying ciphersuite: %s", v257);
                uint32_t v259 = *v63; // 0x4a601d
                v254 = (int64_t)&g47;
                v253 = (int64_t)"ciphersuite mismatch: version";
                if ((int64_t)*(int32_t *)(v255 + 32) > (int64_t)v259) {
                    goto lab_0x4a61e0;
                } else {
                    // 0x4a602a
                    v254 = (int64_t)&g47;
                    v253 = (int64_t)"ciphersuite mismatch: version";
                    if (*(int32_t *)(v255 + 40) < v259) {
                        goto lab_0x4a61e0;
                    } else {
                        // 0x4a6034
                        v258 = *(char *)(*v241 + 372);
                        if ((v258 & 2) == 0) {
                            goto lab_0x4a604d;
                        } else {
                            // 0x4a6042
                            v251 = 1;
                            v252 = v257;
                            if ((*(char *)(v255 + 44) & 4) != 0) {
                                goto lab_0x4a5fc0;
                            } else {
                                goto lab_0x4a604d;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x4a62b5:;
    int64_t v260 = v261 + 4; // 0x4a62b5
    int32_t v262 = *(int32_t *)v260; // 0x4a62b9
    v146 = v262;
    v149 = v260;
    v166 = (int64_t *)223;
    v151 = (int64_t)"no signature_algorithm in common";
    v152 = v141;
    if (v262 != 0) {
        goto lab_0x4a5cea_2;
    } else {
        goto lab_0x4a62e3;
    }
  lab_0x4a5fc0:;
    int64_t v263 = v252;
    int64_t v264 = v251;
    int64_t v265 = v248 + 2; // 0x4a5fc0
    if (v98 > v265 - v108) {
        // 0x4a5fc0
        v243 = *v242;
        v244 = v264;
        v245 = v265;
        v246 = v263;
        goto lab_0x4a5fd3;
    } else {
        // 0x4a6150
        if (*(int32_t *)(v240 + 4) != 0) {
            goto lab_0x4a5fb8_2;
        } else {
            // 0x4a616b
            v236 = v263;
            if ((int32_t)v264 == 0) {
                goto lab_0x4a68d0;
            } else {
                // 0x4a6173
                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g131, "got ciphersuites in common, but none of them usable", v263);
                function_49a900(a1);
                result = 0xffff9680;
                goto lab_0x4a4ecf;
            }
        }
    }
  lab_0x4a5d00:;
    int64_t v266 = v267 + 2; // 0x4a5d00
    if (v176 > v266) {
        char * v268 = (char *)v266;
        v267 = v266;
        v269 = v268;
        if (*v270 != (int32_t)function_498b90(*v268)) {
            goto lab_0x4a5d00;
        } else {
            goto lab_0x4a5d1e;
        }
    } else {
        goto lab_0x4a62b5;
    }
  lab_0x4a5d1e:;
    unsigned char v271 = *v269; // 0x4a5d2e
    *(int32_t *)*v61 = (int32_t)v271;
    v163 = 228;
    v150 = (int64_t)"client hello v3, signature_algorithm ext: %d";
    v153 = v271;
    goto lab_0x4a54ac;
  lab_0x4a576e:
    // 0x4a576e
    *(int32_t *)(v179 + (int64_t)&g44) = (int32_t)v164;
    int64_t v272 = (int64_t)*v145; // 0x4a5774
    function_49e770(a1, 4, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)315, "point format selected: %d", v272);
    v174 = v143;
    v154 = v272;
    goto lab_0x4a54c8;
  lab_0x4a5758:;
    int64_t v273 = v157 - 1; // 0x4a575c
    v174 = v143;
    v154 = v141;
    if (v273 == 0) {
        goto lab_0x4a54c8;
    } else {
        int64_t v274 = v169 + 1; // 0x4a5758
        char * v275 = (char *)v274;
        unsigned char v276 = *v275; // 0x4a5766
        v157 = v273;
        v169 = v274;
        v145 = v275;
        v164 = v276;
        if (v276 < 2) {
            goto lab_0x4a576e;
        } else {
            goto lab_0x4a5758;
        }
    }
  lab_0x4a5b71:;
    int64_t v277 = v171 + -3 - v158; // 0x4a5b7e
    v174 = v143;
    v154 = v141;
    if (v277 == 0) {
        goto lab_0x4a54c8;
    } else {
        int64_t v278 = v170 + v165; // 0x4a5b78
        unsigned char v279 = *(char *)(v278 + 2); // 0x4a5b8b
        int64_t v280 = 256 * (int64_t)*(char *)(v278 + 1) | (int64_t)v279; // 0x4a5b92
        int64_t v281 = v280 + 3; // 0x4a5b96
        v17 = 113;
        v18 = v141;
        if (v281 > v277) {
            goto lab_0x4a4eb4;
        } else {
            // 0x4a5b68
            v158 = v280;
            v165 = v281;
            v170 = v278;
            v171 = v277;
            v159 = v280;
            if (*(char *)v278 == 0) {
                goto lab_0x4a65dd;
            } else {
                goto lab_0x4a5b71;
            }
        }
    }
  lab_0x4a65dd:;
    int64_t v282 = v159;
    v174 = v143;
    v154 = v141;
    if ((int32_t)v282 == 0) {
        goto lab_0x4a54c8;
    } else {
        // 0x4a65fa
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)123, "ssl_sni_wrapper", v282 & 0xffffffff);
        function_49a730(a1, 2, 112, 123);
        goto lab_0x4a4eca;
    }
  lab_0x4a5dfd:;
    int64_t str = v161;
    int64_t v283 = v175;
    int32_t len = strlen((char *)str); // 0x4a5e00
    char v284; // 0x4a4be0
    int64_t v285; // 0x4a4be0
    int64_t * str3; // 0x4a4be0
    if (v181 == v182) {
        goto lab_0x4a6388;
    } else {
        if (v181 < v182) {
            goto lab_0x4a4eca;
        } else {
            char v286 = *(char *)v182; // 0x4a5e19
            if (v286 != 0) {
                // 0x4a5e57
                str3 = (int64_t *)str;
                v284 = v286;
                v285 = v140 + 7;
                goto lab_0x4a5e57_2;
            } else {
                goto lab_0x4a4eca;
            }
        }
    }
  lab_0x4a6845:;
    char v287 = *(char *)(a1 + 428 + v156); // 0x4a6849
    int64_t v288 = v156 + 1; // 0x4a6850
    int64_t v289 = v173 | (int64_t)(v287 ^ *(char *)(v183 + v156)); // 0x4a6854
    v156 = v288;
    v173 = v289;
    if (v288 != v180) {
        goto lab_0x4a6845;
    } else {
        // 0x4a685b
        v174 = 1;
        v154 = v141;
        v139 = 160;
        v136 = (int64_t)"non-matching renegotiation info";
        v137 = v141;
        if ((char)v289 != 0) {
            goto lab_0x4a5810;
        } else {
            goto lab_0x4a54c8;
        }
    }
  lab_0x4a61e0:
    // 0x4a61e0
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)v254, (char *)v253, v257);
    v251 = 1;
    v252 = v257;
    goto lab_0x4a5fc0;
  lab_0x4a5a35:;
    int64_t v290 = v148;
    int64_t v291 = v162;
    unsigned char v292 = *(char *)v160; // 0x4a5a35
    unsigned char v293 = *(char *)(v160 + 1); // 0x4a5a39
    int64_t v294 = function_4ba4e0(256 * (int64_t)v292 | (int64_t)v293); // 0x4a5a45
    int64_t v295 = v291; // 0x4a5a4d
    int64_t v296 = v290; // 0x4a5a4d
    if (v294 == 0) {
        goto lab_0x4a5a5b;
    } else {
        // 0x4a5a4f
        *(int64_t *)v290 = v294;
        v295 = v291 - 1;
        v296 = v290 + 8;
        goto lab_0x4a5a5b;
    }
  lab_0x4a6388:;
    int64_t v297 = v283 + 8; // 0x4a6388
    int64_t v298 = *(int64_t *)v297; // 0x4a6393
    v175 = v297;
    v161 = v298;
    v167 = v297;
    if (v298 != 0) {
        goto lab_0x4a5dfd;
    } else {
        // 0x4a63a7
        function_49a730(a1, 2, 120, v167);
        goto lab_0x4a4eca;
    }
  lab_0x4a66fe:;
    int64_t v299 = v168;
    int64_t v300 = v172;
    int64_t v301 = v155;
    int64_t v302 = v301; // 0x4a6702
    int64_t v303 = v300; // 0x4a6702
    int64_t v304 = v299; // 0x4a6702
    if ((v299 & 2) != 0) {
        // 0x4a6983
        *(int16_t *)v299 = *(int16_t *)v300;
        v302 = v301 + 254 & 159;
        v303 = v300 + 2;
        v304 = v299 + 2;
        goto lab_0x4a6708;
    } else {
        goto lab_0x4a6708;
    }
  lab_0x4a5a5b:;
    int64_t v305 = v147 - 2; // 0x4a5a5b
    v174 = v143;
    v154 = v141;
    v162 = v295;
    v160 += 2;
    v147 = v305;
    v148 = v296;
    if (v305 == 0 || v295 < 2) {
        goto lab_0x4a54c8;
    } else {
        goto lab_0x4a5a35;
    }
  lab_0x4a6708:;
    int64_t v306 = v304;
    int64_t v307 = v303;
    int64_t v308 = v302;
    int64_t v309 = v308; // 0x4a670c
    int64_t v310 = v307; // 0x4a670c
    int64_t v311 = v306; // 0x4a670c
    if ((v306 & 4) != 0) {
        // 0x4a69d7
        *(int32_t *)v306 = *(int32_t *)v307;
        v309 = v308 + 0xfffffffc & 0xffffffff;
        v310 = v307 + 4;
        v311 = v306 + 4;
        goto lab_0x4a6712;
    } else {
        goto lab_0x4a6712;
    }
  lab_0x4a604d:
    if ((v258 & 64) == 0) {
        goto lab_0x4a6068;
    } else {
        // 0x4a6051
        v254 = (int64_t)&g48;
        v253 = (int64_t)"ciphersuite mismatch: rc4";
        if (*(int32_t *)(v255 + 16) == 42) {
            goto lab_0x4a61e0;
        } else {
            goto lab_0x4a6068;
        }
    }
  lab_0x4a6712:
    // 0x4a6712
    __asm_rep_movsq_memcpy((char *)v311, (char *)v310, v309 / 8 % 0x20000000);
    int64_t v312 = v110; // 0x4a6751
    goto lab_0x4a6758;
  lab_0x4a6068:
    // 0x4a6068
    if ((int32_t)function_49f0e0(v255) == 0) {
        goto lab_0x4a6092;
    } else {
        int64_t v356 = *(int64_t *)(*v61 + (int64_t)&g52); // 0x4a6078
        v254 = (int64_t)&g50;
        v253 = (int64_t)"ciphersuite mismatch: no common elliptic curve";
        if (v356 == 0) {
            goto lab_0x4a61e0;
        } else {
            // 0x4a6088
            v254 = (int64_t)&g50;
            v253 = (int64_t)"ciphersuite mismatch: no common elliptic curve";
            if (*(int64_t *)v356 == 0) {
                goto lab_0x4a61e0;
            } else {
                goto lab_0x4a6092;
            }
        }
    }
  lab_0x4a5e57_2:;
    int64_t str2 = v285;
    int64_t v318 = v284;
    if ((int64_t)len != v318) {
        goto lab_0x4a5e30;
    } else {
        // 0x4a5e5c
        if (memcmp((int64_t *)str2, str3, len) != 0) {
            goto lab_0x4a5e30;
        } else {
            // 0x4a5e6e
            *(int64_t *)(a1 + 376) = str;
            v174 = v143;
            v154 = v141;
            goto lab_0x4a54c8;
        }
    }
  lab_0x4a6758:
    // 0x4a6758
    *(char *)v312 = 0;
    int64_t v313 = v312 + 1; // 0x4a675b
    v312 = v313;
    int64_t v314; // bp-64, 0x4a4be0
    if (v313 != (int64_t)&v314) {
        goto lab_0x4a6758;
    } else {
        // 0x4a6764
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)501, "session successfully restored from ticket", v142);
        int64_t v315 = *v61; // 0x4a6786
        *(int32_t *)(v315 + (int64_t)&g171) = 1;
        *(int32_t *)(v315 + (int64_t)&g175) = 0;
        v174 = v143;
        v154 = v142;
        goto lab_0x4a54c8;
    }
  lab_0x4a6092:
    // 0x4a6092
    if ((int32_t)function_49f110(v255) == 0) {
        goto lab_0x4a60ac;
    } else {
        int64_t v316 = *v241; // 0x4a609e
        if (*(int64_t *)(v316 + 120) == 0) {
            // 0x4a61a7
            v254 = (int64_t)&g51;
            v253 = (int64_t)"ciphersuite mismatch: no pre-shared key";
            if (*(int64_t *)(v316 + 296) == 0) {
                goto lab_0x4a61e0;
            } else {
                // 0x4a61b1
                v254 = (int64_t)&g51;
                v253 = (int64_t)"ciphersuite mismatch: no pre-shared key";
                if (*(int64_t *)(v316 + 312) == 0) {
                    goto lab_0x4a61e0;
                } else {
                    // 0x4a61bb
                    v254 = (int64_t)&g51;
                    v253 = (int64_t)"ciphersuite mismatch: no pre-shared key";
                    if (*(int64_t *)(v316 + 320) == 0) {
                        goto lab_0x4a61e0;
                    } else {
                        // 0x4a61c5
                        v254 = (int64_t)&g51;
                        v253 = (int64_t)"ciphersuite mismatch: no pre-shared key";
                        if (*(int64_t *)(v316 + 304) != 0) {
                            goto lab_0x4a60ac;
                        } else {
                            goto lab_0x4a61e0;
                        }
                    }
                }
            }
        } else {
            goto lab_0x4a60ac;
        }
    }
  lab_0x4a5e30:;
    uint64_t v317 = str2 + v318; // 0x4a5e30
    if (v181 == v317) {
        goto lab_0x4a6388;
    } else {
        if (v181 < v317) {
            goto lab_0x4a4eca;
        } else {
            char v319 = *(char *)v317; // 0x4a5e46
            v284 = v319;
            v285 = v317 + 1;
            if (v319 == 0) {
                goto lab_0x4a4eca;
            } else {
                goto lab_0x4a5e57_2;
            }
        }
    }
  lab_0x4a60ac:;
    int64_t v320 = function_49f0c0(v255); // 0x4a60af
    int64_t v321 = *(int64_t *)(*v61 + (int64_t)&g54); // 0x4a60bb
    int64_t v322 = v321; // 0x4a60c5
    if (v321 == 0) {
        // 0x4a67a3
        v322 = *(int64_t *)(*v241 + 208);
        goto lab_0x4a60cb;
    } else {
        goto lab_0x4a60cb;
    }
  lab_0x4a60cb:;
    int32_t v323 = v320; // 0x4a60cb
    int64_t v324; // 0x4a4be0
    int64_t v325; // 0x4a4be0
    if (v323 != 0) {
        int64_t v326 = function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g38, "ciphersuite requires certificate", v257); // 0x4a6424
        int64_t v327 = 0x100000000 * v322;
        result = v326;
        if (v327 == 0) {
            goto lab_0x4a4ecf;
        } else {
            // 0x4a643c
            v325 = v327 >> 32;
            v324 = 0;
            goto lab_0x4a648c;
        }
    } else {
        goto lab_0x4a60d4;
    }
  lab_0x4a60d4:;
    int64_t v328 = *v256; // 0x4a60d4
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g133, "selected ciphersuite: %s", v328);
    *(int32_t *)(*v83 + 8) = *v242;
    *(int64_t *)*(int64_t *)(a1 + 128) = v255;
    int32_t * v329 = (int32_t *)(a1 + 8); // 0x4a6111
    *v329 = *v329 + 1;
    if ((*(char *)(*v241 + 372) & 2) != 0) {
        // 0x4a6976
        function_496760(a1);
        // 0x4a6122
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g134, "<= parse client hello", v328);
        result = 0;
        goto lab_0x4a4ecf;
    } else {
        // 0x4a6122
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g134, "<= parse client hello", v328);
        result = 0;
        goto lab_0x4a4ecf;
    }
  lab_0x4a648c:;
    int64_t v330 = v324;
    int64_t v331 = v325;
    int64_t * v332 = (int64_t *)v331; // 0x4a648c
    int64_t v333 = *v332; // 0x4a648c
    function_49ecc0(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g39, "candidate certificate chain, certificate", v333);
    int64_t * v334 = (int64_t *)(v331 + 8); // 0x4a64b0
    int64_t v335; // 0x4a4be0
    int64_t v336; // 0x4a4be0
    int64_t v337; // 0x4a4be0
    int64_t v338; // 0x4a4be0
    int64_t v339; // 0x4a4be0
    int64_t v340; // 0x4a4be0
    int64_t v341; // 0x4a4be0
    int64_t v342; // 0x4a4be0
    int32_t v343; // 0x4a65aa
    if ((int32_t)function_4c4450(*v334, v320 & 0xffffffff) == 0) {
        int64_t v344 = function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g40, "certificate mismatch: key type", v333); // 0x4a647a
        v335 = v330;
        v342 = v344;
        goto lab_0x4a647f;
    } else {
        // 0x4a64c0
        int64_t v345; // bp-220, 0x4a4be0
        int64_t v346 = function_498c50(*v332, v255, 1, &v345); // 0x4a64d4
        v340 = (int64_t)&g41;
        v337 = (int64_t)"certificate mismatch: (extended) key usage extension";
        v338 = v333;
        v336 = v330;
        if ((int32_t)v346 != 0) {
            goto lab_0x4a6522;
        } else {
            if (v323 == 4) {
                int64_t v347 = *(int64_t *)(*v61 + (int64_t)&g52); // 0x4a659f
                v343 = *(int32_t *)*(int64_t *)(*v334 + 8);
                int64_t v348 = *(int64_t *)v347; // 0x4a65ac
                v340 = (int64_t)&g42;
                v337 = (int64_t)"certificate mismatch: elliptic curve";
                v338 = v333;
                v336 = v330;
                v339 = v347;
                v341 = v348;
                if (v348 == 0) {
                    goto lab_0x4a6522;
                } else {
                    goto lab_0x4a65b8;
                }
            } else {
                goto lab_0x4a64f3;
            }
        }
    }
  lab_0x4a647f:;
    int64_t v349 = v335;
    int64_t v350 = *(int64_t *)(v331 + 16); // 0x4a647f
    v325 = v350;
    v324 = v349;
    int64_t v351; // 0x4a4be0
    int64_t v352; // 0x4a4be0
    if (v350 == 0) {
        // 0x4a6869
        result = v342;
        if (v349 == 0) {
            goto lab_0x4a4ecf;
        } else {
            // 0x4a6889
            v352 = *(int64_t *)v349;
            v351 = v349;
            goto lab_0x4a668d;
        }
    } else {
        goto lab_0x4a648c;
    }
  lab_0x4a6522:
    // 0x4a6522
    v335 = v336;
    v342 = function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)v340, (char *)v337, v338);
    goto lab_0x4a647f;
  lab_0x4a64f3:;
    int64_t v353 = *v332;
    v352 = v353;
    v351 = v331;
    if (*v63 > 2) {
        goto lab_0x4a668d;
    } else {
        // 0x4a64fd
        v352 = v353;
        v351 = v331;
        if (*(int32_t *)(v353 + (int64_t)&g36) == 4) {
            goto lab_0x4a668d;
        } else {
            // 0x4a650f
            v340 = (int64_t)&g43;
            v337 = (int64_t)"certificate not preferred: sha-2 with pre-TLS 1.2 client";
            v338 = v353;
            v336 = v330 == 0 ? v331 : v330;
            goto lab_0x4a6522;
        }
    }
  lab_0x4a65b8:
    // 0x4a65b8
    if (*(int32_t *)v341 == v343) {
        goto lab_0x4a64f3;
    } else {
        int64_t v354 = v339 + 8; // 0x4a65c0
        int64_t v355 = *(int64_t *)v354; // 0x4a65c4
        v340 = (int64_t)&g42;
        v337 = (int64_t)"certificate mismatch: elliptic curve";
        v338 = v333;
        v336 = v330;
        v339 = v354;
        v341 = v355;
        if (v355 != 0) {
            goto lab_0x4a65b8;
        } else {
            goto lab_0x4a6522;
        }
    }
  lab_0x4a668d:
    // 0x4a668d
    *(int64_t *)(*v61 + (int64_t)&g53) = v351;
    function_49ecc0(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)&g44, "selected certificate chain, certificate", v352);
    goto lab_0x4a60d4;
}

// Address range: 0x4c9900 - 0x4c9b79
int64_t function_4c9900(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, uint64_t a10) {
    int32_t v1 = a4; // 0x4c9917
    if (v1 == 1) {
        // 0x4c9b30
        if (*(int32_t *)(a1 + 328) != 1) {
            // 0x4c99b0
            return 0xffffbf80;
        }
    }
    uint64_t v2 = *(int64_t *)(a1 + 8); // 0x4c9934
    if (v2 - 16 > (int64_t)&g58) {
        // 0x4c99b0
        return 0xffffbf80;
    }
    int64_t v3 = function_4c14d0(*(int32_t *)(a1 + 332)); // 0x4c994f
    if (v3 == 0) {
        // 0x4c99b0
        return 0xffffbf80;
    }
    uint64_t v4 = function_4c1d00(v3) % 256; // 0x4c9968
    int64_t v5 = 2 * v4;
    if (v2 < v5 + 2) {
        // 0x4c99b0
        return 0xffffbf80;
    }
    int32_t v6; // bp-1080, 0x4c9900
    if (v1 == 0) {
        int64_t v7 = function_4c8fa0(a1, a8, (int64_t *)&v6); // 0x4c99d6
        if ((int32_t)v7 != 0) {
            // 0x4c99b0
            return v7 & 0xffffffff;
        }
    } else {
        int64_t v8 = function_4c9080(a1, a2, a3, a8, (int64_t *)&v6); // 0x4c99a3
        if ((int32_t)v8 != 0) {
            // 0x4c99b0
            return v8 & 0xffffffff;
        }
    }
    // 0x4c99e3
    int64_t v9; // bp-1176, 0x4c9900
    function_4c1690(&v9);
    int32_t v10 = function_4c1770(&v9, v3, 0); // 0x4c99fc
    int32_t result; // bp-1224, 0x4c9900
    if (v10 != 0) {
        // 0x4c9b4b
        result = v10;
        function_4c16b0(&v9);
        // 0x4c99b0
        return result;
    }
    int64_t v11 = (int64_t)&v6; // 0x4c9981
    int64_t v12; // bp-1079, 0x4c9900
    int64_t v13 = (int64_t)&v12; // 0x4c9a1a
    result = v10;
    int64_t v14; // bp-1144, 0x4c9900
    function_4c18b0(v3, a5, a6, &v14);
    int64_t v15 = v4 + (v11 | 1); // 0x4c9a27
    int64_t v16 = v2 + -1 - v4; // 0x4c9a2c
    function_4c8790(&v12, v4, v15, v16, &v9);
    function_4c8790((int64_t *)v15, v16, v13, v4, &v9);
    function_4c16b0(&v9);
    int64_t v17 = v6 % 256; // 0x4c9a72
    int64_t v18 = v4 + v13; // 0x4c9a7a
    int64_t result2 = v17; // 0x4c9a83
    int64_t v19 = v18; // 0x4c9a83
    if (v4 != 0) {
        int64_t v20 = 0;
        char v21 = *(char *)((int64_t)&result + 80 + v20); // 0x4c9a95
        int64_t v22 = v20 + 1; // 0x4c9a9a
        result2 = v17 | (int64_t)(v21 ^ *(char *)(v20 + v18));
        int64_t v23 = result2; // 0x4c9aa3
        while (v4 != v22) {
            // 0x4c9a90
            v20 = v22;
            v21 = *(char *)((int64_t)&result + 80 + v20);
            v22 = v20 + 1;
            result2 = v23 | (int64_t)(v21 ^ *(char *)(v20 + v18));
            v23 = result2;
        }
        // 0x4c9aa5
        v19 = v18 + v4;
    }
    int64_t v24 = v2 - v5 - 2; // 0x4c9ab3
    int64_t v25 = 0; // 0x4c9ab7
    char v26 = 0; // 0x4c9ab7
    int64_t v27 = 0; // 0x4c9ab7
    int64_t v28 = 0; // 0x4c9ab7
    if (v24 != 0) {
        v26 |= *(char *)(v25 + v19);
        int64_t v29 = v26; // 0x4c9ac8
        v25++;
        v27 += ((v29 | -v29) / 128 % 2 ^ 1);
        v28 = v27;
        while (v25 != v24) {
            // 0x4c9ac8
            v26 |= *(char *)(v25 + v19);
            v29 = v26;
            v25++;
            v27 += ((v29 | -v29) / 128 % 2 ^ 1);
            v28 = v27;
        }
    }
    int64_t v30 = v28 + v19; // 0x4c9ae7
    if ((*(char *)v30 ^ 1 || (char)result2) != 0) {
        // 0x4c99b0
        return result2;
    }
    int64_t v31 = v30 + 1; // 0x4c9aed
    uint64_t v32 = v11 - v31 + v2; // 0x4c9afb
    if (v32 > a10) {
        // 0x4c99b0
        return 0xffffbc00;
    }
    // 0x4c9b09
    *(int64_t *)a7 = v32;
    memcpy((int64_t *)a9, (int64_t *)v31, (int32_t)v32);
    // 0x4c99b0
    return result;
}

// Address range: 0x4fbd10 - 0x4fbf11
int64_t function_4fbd10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 + a3; // 0x4fbd10
    int64_t * v2 = (int64_t *)(a1 + 8);
    if (v1 < *v2) {
        // 0x4fbde8
        return 0;
    }
    // 0x4fbd1d
    int3_t v3; // 0x4fbd10
    int3_t v4 = v3 - 1; // 0x4fbd24
    __frontend_reg_store_fpr(v4, (float80_t)(float32_t)(int32_t)a1);
    int3_t v5 = v3 - 2; // 0x4fbd2a
    __frontend_reg_store_fpr(v5, (float80_t)v1);
    int3_t v6; // 0x4fbd10
    int3_t v7; // 0x4fbd10
    if (v1 < 0) {
        // 0x4fbe80
        __frontend_reg_store_fpr(v5, __frontend_reg_load_fpr(v5) + 18446744073709551616.0L);
        __frontend_reg_store_fpr(v4, __frontend_reg_load_fpr(v4) / __frontend_reg_load_fpr(v3));
        __frontend_reg_store_fpr(v5, (float80_t)a2);
        v7 = v5;
        if (a2 >= 0) {
            float80_t v8 = __frontend_reg_load_fpr(v5); // 0x4fbd50
            __frontend_reg_store_fpr(v5, __frontend_reg_load_fpr(v4));
            __frontend_reg_store_fpr(v4, v8);
            v6 = v5;
            goto lab_0x4fbd52;
        } else {
            goto lab_0x4fbe60;
        }
    } else {
        // 0x4fbd33
        __frontend_reg_store_fpr(v5, __frontend_reg_load_fpr(v5) / __frontend_reg_load_fpr(v4));
        int3_t v9 = v3 - 3; // 0x4fbd3c
        __frontend_reg_store_fpr(v9, (float80_t)a2);
        v7 = v9;
        if (a2 < 0) {
            goto lab_0x4fbe60;
        } else {
            float80_t v10 = __frontend_reg_load_fpr(v9); // 0x4fbd45
            __frontend_reg_store_fpr(v9, __frontend_reg_load_fpr(v5));
            __frontend_reg_store_fpr(v5, v10);
            v6 = v9;
            goto lab_0x4fbd52;
        }
    }
  lab_0x4fbe60:;
    int3_t v11 = v7;
    __frontend_reg_store_fpr(v11, __frontend_reg_load_fpr(v11) + 18446744073709551616.0L);
    int3_t v12 = v11 + 1; // 0x4fbe60
    int3_t v13 = v11 + 2; // 0x4fbe66
    float80_t v14 = __frontend_reg_load_fpr(v12); // 0x4fbe66
    __frontend_reg_store_fpr(v12, __frontend_reg_load_fpr(v13));
    __frontend_reg_store_fpr(v13, v14);
    float80_t v15 = __frontend_reg_load_fpr(v12); // 0x4fbe68
    float80_t v16 = __frontend_reg_load_fpr(v13); // 0x4fbe68
    float80_t v17; // 0x4fbd10
    float80_t v18; // 0x4fbd10
    bool v19; // 0x4fbd10
    if (v15 > v16) {
        // .thread11
        v18 = __frontend_reg_load_fpr(v12);
        v19 = false;
        goto lab_0x4fbd60;
    } else {
        if (v15 < v16) {
            // .thread14
            v17 = __frontend_reg_load_fpr(v12);
            goto lab_0x4fbe70;
        } else {
            v18 = __frontend_reg_load_fpr(v12);
            v19 = true;
            v17 = v18;
            if (v15 == v16) {
                goto lab_0x4fbd60;
            } else {
                goto lab_0x4fbe70;
            }
        }
    }
  lab_0x4fbd52:;
    int3_t v20 = v6 + 1;
    float80_t v21 = __frontend_reg_load_fpr(v6); // 0x4fbd52
    float80_t v22 = __frontend_reg_load_fpr(v20); // 0x4fbd52
    float80_t v23; // 0x4fbd10
    bool v24; // 0x4fbd10
    if (v21 > v22) {
        // .thread8
        v23 = __frontend_reg_load_fpr(v6);
        v24 = false;
        goto lab_0x4fbd5a;
    } else {
        if (v21 < v22) {
            // .thread
            int3_t v25; // 0x4fbd10
            float80_t v26 = __frontend_reg_load_fpr(v25); // 0x4fbd10
            goto lab_0x4fbdf0;
        } else {
            v23 = __frontend_reg_load_fpr(v6);
            v24 = true;
            if (v21 != v22) {
                goto lab_0x4fbdf0;
            } else {
                goto lab_0x4fbd5a;
            }
        }
    }
  lab_0x4fbd60:
    // 0x4fbd60
    __frontend_reg_store_fpr(v13, v18);
    int3_t v27 = v11 + 3; // 0x4fbd62
    __frontend_reg_store_fpr(v27, __frontend_reg_load_fpr(v13));
    int3_t v28 = v27; // 0x4fbd62
    bool v29 = v19; // 0x4fbd62
    goto lab_0x4fbd64;
  lab_0x4fbd5a:
    // 0x4fbd5a
    __frontend_reg_store_fpr(v20, v23);
    int3_t v54 = v6 + 2;
    __frontend_reg_store_fpr(v54, __frontend_reg_load_fpr(v20));
    v28 = v54;
    v29 = v24;
    goto lab_0x4fbd64;
  lab_0x4fbd64:;
    float80_t v30 = __frontend_reg_load_fpr(v28); // 0x4fbd64
    int128_t v31 = __asm_movsd(0x7fffffffffffffff); // 0x4fbd68
    int128_t v32 = __asm_movsd((int64_t)(float64_t)v30); // 0x4fbd70
    int128_t v33 = __asm_movsd(0x4330000000000000); // 0x4fbd76
    int128_t v34 = __asm_movapd(v32); // 0x4fbd7e
    int128_t v35 = __asm_movapd(v32); // 0x4fbd82
    int128_t v36 = __asm_movsd(0x3ff0000000000000); // 0x4fbd86
    int128_t v37 = __asm_andpd(v34, v31); // 0x4fbd8e
    __asm_ucomisd(v33, v37);
    int128_t v38 = v35; // 0x4fbd96
    if (!v29) {
        int64_t v39 = __asm_cvttsd2si(v32); // 0x4fbea0
        __asm_pxor(v37, v37);
        int128_t v40 = __asm_andnpd(v31, v32); // 0x4fbea9
        int128_t v41 = __asm_cvtsi2sd(v39); // 0x4fbead
        int128_t v42 = __asm_andpd(__asm_movapd(__asm_cmpnlesd(__asm_movapd(v41), v32)), v36); // 0x4fbebf
        v38 = __asm_orpd(__asm_movapd(__asm_subsd(v41, v42)), v40);
    }
    int128_t v43 = __asm_addsd(v38, v36); // 0x4fbd9c
    int128_t v44 = __asm_movsd(0x43e0000000000000); // 0x4fbda0
    __asm_ucomisd(v43, v44);
    __asm_cvttsd2si(__asm_subsd(v43, v44));
    function_4fbb00();
    return 1;
  lab_0x4fbe70:
    // 0x4fbe70
    __frontend_reg_store_fpr(v12, v17);
    int3_t v45 = v13; // 0x4fbe72
    int3_t v46 = v12; // 0x4fbe72
    goto lab_0x4fbee8;
  lab_0x4fbdf0:
    // 0x4fbdf0
    __frontend_reg_store_fpr(v6, v23);
    v45 = v20;
    v46 = v6;
    goto lab_0x4fbee8;
  lab_0x4fbee8:;
    int3_t v47 = v46 + 2; // 0x4fbdf2
    float80_t v48 = __frontend_reg_load_fpr(v45); // 0x4fbdf2
    __frontend_reg_store_fpr(v47, v48 * __frontend_reg_load_fpr(v47));
    int128_t v49 = __asm_movsd(0x7fffffffffffffff); // 0x4fbdf4
    int128_t v50 = __asm_movsd(0x4330000000000000); // 0x4fbdfc
    int128_t v51 = __asm_movsd((int64_t)(float64_t)__frontend_reg_load_fpr(v47)); // 0x4fbe08
    int128_t v52 = __asm_movapd(v51); // 0x4fbe0e
    int128_t v53 = __asm_movapd(v51); // 0x4fbe12
    __asm_ucomisd(v50, __asm_andpd(v52, v49));
    __asm_ucomisd(v53, __asm_movsd(0x43e0000000000000));
    *v2 = __asm_cvttsd2si(v53);
    // 0x4fbde8
    return 0;
}

// Address range: 0x549690 - 0x549893
int64_t function_549690(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a3 + 8); // 0x5496a4
    int64_t v2 = __readfsqword(40); // 0x5496ab
    int64_t result = *(int64_t *)(*(int64_t *)v1 + 32); // 0x5496c8
    if (result != 0x548f00) {
        // 0x549890
        return result;
    }
    // 0x5496d5
    int64_t v3; // 0x549690
    int32_t v4 = v3;
    int64_t v5 = 0; // bp-152, 0x5496e6
    int64_t v6 = (int64_t)&v5; // 0x5496eb
    int64_t v7 = v6; // bp-168, 0x5496eb
    if (v4 == 1) {
        // 0x549848
        function_52c050(&v7, 0, 0, "iostream error", 14);
    } else {
        // 0x5496f5
        function_52c050(&v7, 0, 0, "Unknown error", 13);
    }
    int64_t v8 = function_52c050(&v7, 0, 0, ": ", 2); // 0x549722
    int64_t v9; // bp-120, 0x549690
    int64_t v10 = (int64_t)&v9; // 0x549730
    int64_t v11 = v10; // bp-136, 0x549730
    int64_t * v12 = (int64_t *)v8; // 0x549735
    int64_t v13 = *v12; // 0x549735
    int64_t v14 = v8 + 16; // 0x549738
    int64_t v15; // 0x549690
    if (v13 == v14) {
        // 0x549880
        v15 = __asm_movaps(__asm_movdqu(*(int128_t *)v13));
    } else {
        // 0x549745
        v11 = v13;
        v15 = *(int64_t *)v14;
    }
    // 0x549753
    v9 = v15;
    *(char *)v14 = 0;
    *v12 = v14;
    *(int64_t *)(v8 + 8) = 0;
    char * str = (char *)a2; // 0x54976e
    int64_t v16 = function_52c050(&v11, 0, 0, str, (int64_t)strlen(str)); // 0x549780
    int64_t v17; // bp-88, 0x549690
    int64_t v18 = (int64_t)&v17; // 0x54978f
    int64_t v19 = v18; // bp-104, 0x54978f
    int64_t * v20 = (int64_t *)v16; // 0x549794
    int64_t v21 = *v20; // 0x549794
    int64_t v22 = v16 + 16; // 0x549797
    int64_t v23; // 0x549690
    if (v21 == v22) {
        // 0x549870
        v23 = __asm_movaps(__asm_movdqu(*(int128_t *)v21));
    } else {
        // 0x5497a4
        v19 = v21;
        v23 = *(int64_t *)v22;
    }
    // 0x5497b2
    v17 = v23;
    *(char *)v22 = 0;
    *v20 = v22;
    *(int64_t *)(v16 + 8) = 0;
    function_5473b0(a1, &v19);
    if (v19 != v18) {
        // 0x5497e3
        function_4eeb50(v19);
    }
    // 0x5497e8
    if (v11 != v10) {
        // 0x5497f6
        function_4eeb50(v11);
    }
    // 0x5497fb
    if (v7 != v6) {
        // 0x549808
        function_4eeb50(v7);
    }
    // 0x54980d
    *(int32_t *)(a1 + 16) = v4;
    *(int64_t *)(a1 + 24) = v1;
    *(int64_t *)a1 = (int64_t)&g138;
    return __readfsqword(40) ^ v2;
}
