/*
 * Targeted RetDec C for native executable gap queue batch 182.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
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
 *   0x4c69e0-0x4c8246 rank=142 name=fcn.004c69e0 kind=r2_discovered bytes=6246 uncovered=6242
 *   0x3e19c-0x3f89f rank=143 name=fcn.0003e19c kind=r2_discovered bytes=5891 uncovered=5684
 *   0x39110-0x3a750 rank=144 name=fcn.00039110 kind=r2_discovered bytes=5696 uncovered=5664
 *   0xcc5a1-0xcdac9 rank=145 name=fcn.000cc5a1 kind=r2_discovered bytes=5416 uncovered=5416
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
extern int g84;
extern int g85;
extern int g86;
extern int g87;
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
extern int g158;
extern int g159;
extern int g160;
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
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
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
int128_t __asm_cmpnlesd(int128_t left, int128_t right);
int128_t __asm_cvtsi2sd(int64_t value);
int128_t __asm_cvtss2sd(int32_t value);
int128_t __asm_subsd(int128_t left, int128_t right);
int64_t __asm_cvttsd2si(int128_t value);
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

int64_t function_1188106();
int64_t function_1c38db62();
int64_t function_1ff50();
int64_t function_2054da();
int64_t function_20550();
int64_t function_209338();
int64_t function_20bac7();
int64_t function_215434();
int64_t function_218f2e();
int64_t function_22286b();
int64_t function_2263e();
int64_t function_2293e();
int64_t function_22aea();
int64_t function_22fceb();
int64_t function_23344();
int64_t function_2508e();
int64_t function_2509a();
int64_t function_250b0();
int64_t function_25194();
int64_t function_254fe();
int64_t function_255da();
int64_t function_256ba();
int64_t function_2601b();
int64_t function_286ac();
int64_t function_289b2();
int64_t function_28a8a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29dd0();
int64_t function_2a521(int64_t a1);
int64_t function_2a56d(void);
int64_t function_2a5d3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a672(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a711(int64_t a1, int64_t a2);
int64_t function_2a73a(void);
int64_t function_2a78b(void);
int64_t function_2ce9a();
int64_t function_39110(int64_t a1);
int64_t function_3915c(int64_t a1);
int64_t function_39168(void);
int64_t function_39193(int64_t a1);
int64_t function_391bc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_39237(void);
int64_t function_39266(void);
int64_t function_39274(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_392a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_392ba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3930b(int64_t a1);
int64_t function_39400(int64_t a1);
int64_t function_3946b(void);
int64_t function_39485(int64_t a1);
int64_t function_394cb(void);
int64_t function_394f0(void);
int64_t function_39504(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3953c(void);
int64_t function_39556(void);
int64_t function_39560(int64_t a1, int64_t a2);
int64_t function_39582(void);
int64_t function_3958d(int64_t a1);
int64_t function_395ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_395ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3962f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39655(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3966a(int64_t a1);
int64_t function_396b3(void);
int64_t function_396bd(int64_t a1, int64_t a2);
int64_t function_39708(void);
int64_t function_3971c(void);
int64_t function_39730(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3977a(int64_t a1);
int64_t function_39785(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39795(int64_t a1);
int64_t function_397a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39800(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39842(void);
int64_t function_3989e(int64_t a1);
int64_t function_398a6(int64_t a1);
int64_t function_398d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_398e4(int64_t a1);
int64_t function_398f6(void);
int64_t function_39913(void);
int64_t function_39920(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_399b4(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_39a03(void);
int64_t function_39a06(int64_t a1, int64_t a2);
int64_t function_39a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39a2d(void);
int64_t function_39a5d(int64_t a1);
int64_t function_39a7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_39a99(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39aa1(int64_t a1);
int64_t function_39ac3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39ad4(void);
int64_t function_39b20(int64_t a1);
int64_t function_39b41(void);
int64_t function_39b66(void);
int64_t function_39b69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_39c30(int64_t a1, int64_t a2);
int64_t function_39c78(int64_t a1);
int64_t function_39c7a(void);
int64_t function_39c9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39d2f(void);
int64_t function_39d4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39d65(void);
int64_t function_39d73(void);
int64_t function_39d8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39e2e(void);
int64_t function_39e45(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int32_t a5);
int64_t function_39ed6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39ef5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_3a079(void);
int64_t function_3a08d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3a121(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a162(void);
int64_t function_3a18d(void);
int64_t function_3a1ac(void);
int64_t function_3a1ae(void);
int64_t function_3a1b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a262(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a327(int64_t a1);
int64_t function_3a382(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a3f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a440(int64_t a1, int64_t a2);
int64_t function_3a48c(void);
int64_t function_3a495(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a4e9(int64_t a1);
int64_t function_3a571(void);
int64_t function_3a609(void);
int64_t function_3a629(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a673(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a6db(void);
int64_t function_3a6dd(void);
int64_t function_3a6e5(void);
int64_t function_3a6f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a714(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a71c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a720(int64_t a1);
int64_t function_3ae18();
int64_t function_3ae24();
int64_t function_3e19c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, uint32_t a7);
int64_t function_4452a();
int64_t function_48bde0();
int64_t function_48d50f();
int64_t function_48de04();
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
int64_t function_4c69e0(int64_t a1, int64_t a2);
int64_t function_4c8790();
int64_t function_4c8fa0();
int64_t function_4c9080();
int64_t function_4c9900(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, uint64_t a10);
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_4fbd10();
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
int64_t function_5f0f4();
int64_t function_615054ed();
int64_t function_6150e();
int64_t function_61792();
int64_t function_619f2();
int64_t function_695adba2();
int64_t function_7293a();
int64_t function_729b6();
int64_t function_737a2822();
int64_t function_7e8360c0();
int64_t function_cc5a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ffffffff8904a36b();
int64_t unknown_3d2b543e();

// Address range: 0x28a8a - 0x28c8c
int64_t function_28a8a(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x28a9b
    if (a2 != 0) {
        // 0x28ab7
        if (g130 == 0) {
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
            int64_t v11 = (int64_t)&g152; // bp-112, 0x28b80
            int64_t v12; // bp-96, 0x28a8a
            function_48d50f(&v12, 32, "%lu", v8);
            int64_t v13; // bp-200, 0x28a8a
            function_250b0(&v6, (char *)&v12, &v13, (int32_t)v8);
            function_256ba(&v11, &v6, (int64_t)&v13);
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
            g130 = 1;
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
        result = (int64_t)&g172;
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
    if (v3 == 0 || ((int32_t)&g137 < 1 || (int32_t)&g137 == 1) ^ true) {
        // 0x2a56c
        return v3 == 0 ? 10 : (int64_t)&g29;
    }
    // 0x2a546
    return function_22aea(function_286ac(function_2ce9a()), *v1, *v2);
}

// Address range: 0x2a56d - 0x2a5d3
int64_t function_2a56d(void) {
    // 0x2a56d
    if (*(char *)&g131 != 0) {
        // 0x2a5c2
        return (int64_t)&g132;
    }
    // 0x2a577
    if ((int32_t)function_20550(&g131) != 0) {
        // 0x2a58b
        function_6150e(&g132, 1);
        function_1ff50(&g131);
        __cxa_atexit((void (*)(int64_t *))0x2aeea, &g132, (int64_t *)0x849800);
    }
    // 0x2a5c2
    return (int64_t)&g132;
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
    if (g138 != 1) {
        // 0x2a66e
        return (int64_t)&g29 & 0xffffffff;
    }
    // 0x2a613
    *(int32_t *)a3 = v3;
    int64_t v4 = function_61792(function_2a56d(), *v1, *v2, a2, a3); // 0x2a63d
    int64_t result = 0x7fffffff; // 0x2a64b
    if ((int32_t)v4 < 7) {
        uint32_t v5 = *(int32_t *)((4 * v4 & 0x3fffffffc) + (int64_t)&g75); // 0x2a656
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
    if (g138 != 1) {
        // 0x2a70d
        return (int64_t)&g29 & 0xffffffff;
    }
    // 0x2a6b2
    *(int32_t *)a3 = v3;
    int64_t v4 = function_619f2(function_2a56d(), *v1, *v2, a2, a3); // 0x2a6dc
    int64_t result = 0x7fffffff; // 0x2a6ea
    if ((int32_t)v4 < 7) {
        uint32_t v5 = *(int32_t *)((4 * v4 & 0x3fffffffc) + (int64_t)&g75); // 0x2a6f5
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
    if (g138 != 1) {
        // 0x2a739
        return (int64_t)&g29;
    }
    // 0x2a729
    *(int32_t *)a2 = *(int32_t *)(a1 + 4) + 22;
    return 0;
}

// Address range: 0x2a73a - 0x2a78b
int64_t function_2a73a(void) {
    if (((uint32_t)(int32_t)&g137 < 1 || (int32_t)&g137 == 1) ^ true) {
        // 0x2a785
        return (int64_t)&g29;
    }
    // 0x2a748
    function_2263e(function_286ac(function_2ce9a()));
    g138 = 0;
    g136 = 0;
    g133 = 0;
    return 0;
}

// Address range: 0x2a78b - 0x2a98d
int64_t function_2a78b(void) {
    // 0x2a78b
    int64_t v1; // bp-72, 0x2a78b
    int64_t v2 = (int64_t)&v1; // 0x2a78c
    __readfsqword(40);
    int64_t v3; // bp-68, 0x2a78b
    if (g138 != 1) {
        if (g138 == 2) {
            // 0x2a849
            if (g135 != 0) {
                // 0x2a853
                v3 = 0;
                int64_t v4 = function_286ac(function_2ce9a()); // 0x2a871
                int64_t v5 = v2 + 8; // 0x2a876
                if ((char)function_2293e(v4, v5, &v3) != 0) {
                    *(int64_t *)(v2 + 32) = g133;
                    *(int64_t *)(v2 + 40) = *(int64_t *)v5;
                    *(int32_t *)(v2 + 48) = *(int32_t *)(v2 | 4);
                    function_48bde0(0);
                    // 0x2a88a
                    while ((char)function_2293e(function_286ac(function_2ce9a()), v5, &v3) != 0) {
                        // 0x2a88a
                        *(int64_t *)(v2 + 32) = g133;
                        *(int64_t *)(v2 + 40) = *(int64_t *)v5;
                        *(int32_t *)(v2 + 48) = *(int32_t *)(v2 | 4);
                        function_48bde0(0);
                    }
                }
            }
            // 0x2a8d2
            if (g134 != 0) {
                int64_t v6 = v2 + 8; // 0x2a8e0
                int64_t * v7 = (int64_t *)v6; // 0x2a8e0
                *v7 = 0;
                int64_t * v8 = (int64_t *)(v2 + 16); // 0x2a8e9
                *v8 = 0;
                *(int64_t *)(v2 + 24) = 0;
                if ((char)function_23344(function_286ac(function_2ce9a()), v6) != 0) {
                    // 0x2a919
                    *(int64_t *)(v2 + 32) = g133;
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
        if (g136 != 0) {
            // 0x2a7bd
            v3 = 0;
            int64_t v11 = function_286ac(function_2ce9a()); // 0x2a7db
            int64_t v12 = v2 + 8; // 0x2a7e0
            if ((char)function_2293e(v11, v12, &v3) != 0) {
                *(int64_t *)(v2 + 32) = g133;
                *(int64_t *)(v2 + 40) = *(int64_t *)v12;
                *(int32_t *)(v2 + 48) = *(int32_t *)(v2 | 4);
                function_48bde0(0);
                // 0x2a7f8
                while ((char)function_2293e(function_286ac(function_2ce9a()), v12, &v3) != 0) {
                    // 0x2a7f8
                    *(int64_t *)(v2 + 32) = g133;
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
        result = (int64_t)&g172;
    }
    // 0x2a987
    return result;
}

// Address range: 0x39110 - 0x3913d
int64_t function_39110(int64_t a1) {
    // 0x39110
    __readfsqword(40);
    return function_2054da();
}

// Address range: 0x3915c - 0x3915f
int64_t function_3915c(int64_t a1) {
    // 0x3915c
    int64_t result; // 0x3915c
    return result;
}

// Address range: 0x39168 - 0x39169
int64_t function_39168(void) {
    // 0x39168
    int64_t result; // 0x39168
    return result;
}

// Address range: 0x39193 - 0x39194
int64_t function_39193(int64_t a1) {
    // 0x39193
    int64_t result; // 0x39193
    return result;
}

// Address range: 0x391bc - 0x39235
int64_t function_391bc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a4 + 18); // 0x391c8
    *v2 = *v2 >> 1;
    int32_t * v3 = (int32_t *)(a4 - 86); // 0x391cb
    *v3 = 2 * *v3;
    int32_t * v4 = (int32_t *)(a4 - 111); // 0x391ce
    uint32_t v5 = *v4; // 0x391ce
    *v4 = v5 - 0x2352ed41;
    int64_t v6 = (int64_t)*(int32_t *)0x5ca59e24d28f1c3b; // 0x391d7
    int64_t v7; // 0x391bc
    if (v5 > 0x2352ed40) {
        char * v8 = (char *)(v7 + 0x5ac41a0); // 0x3922b
        *v8 = *v8 + (char)(a4 / 256);
        unsigned char v9 = *(char *)&v1 - 22; // 0x39231
        __asm_out((int16_t)a3 % 256 | (int16_t)&g164, v9);
        return v6 & 0xffffff00 | (int64_t)v9;
    }
    int64_t v10 = (int64_t)*(int32_t *)(v6 - 0x26f9f76c); // 0x391e4
    int64_t v11 = -0x1f8d3c98 * v10; // 0x391e4
    uint32_t v12 = (int32_t)a4 % 32; // 0x391ee
    if (v12 != 0) {
        int32_t * v13 = (int32_t *)(v7 + 91); // 0x391ee
        uint32_t v14 = *v13; // 0x391ee
        *v13 = v14 << v12 | (int32_t)((int64_t)v14 >> (int64_t)(33 - v12)) | (int32_t)(v11 != -0x1f8d3c9800000000 * v10 >> 32) << v12 - 1;
    }
    return v11 & 0xfffffff8;
}

// Address range: 0x39237 - 0x39245
int64_t function_39237(void) {
    // 0x39237
    unknown_3d2b543e();
    return __asm_int1();
}

// Address range: 0x39266 - 0x39267
int64_t function_39266(void) {
    // 0x39266
    int64_t result; // 0x39266
    return result;
}

// Address range: 0x39274 - 0x392a6
int64_t function_39274(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    bool v2; // 0x39274
    if (a4 != 1 && !v2) {
        function_39266();
    }
    // 0x39279
    int64_t v3; // 0x39274
    int64_t result = v3 & 0xffffffff; // 0x39275
    if (!v2) {
        // 0x39287
        return result;
    }
    // 0x3927f
    float80_t v4; // 0x39274
    *(float64_t *)(a4 + 0x14887ff) = (float64_t)v4;
    int64_t result2 = result; // 0x39285
    if (v2) {
        // 0x392a1
        result2 = (int64_t)*(int32_t *)&v1;
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        *(char *)(result2 + 33) = 93;
    }
    // 0x39287
    return result2;
}

// Address range: 0x392a9 - 0x392b2
int64_t function_392a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x392a9
    return function_1c38db62();
}

// Address range: 0x392ba - 0x3930b
int64_t function_392ba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int64_t v3; // 0x392ba
    __asm_out_134(47, (int32_t)v3);
    unsigned char v4 = (char)v3;
    unsigned char v5 = 2 * v4; // 0x392bc
    bool v6; // 0x392ba
    unsigned char v7 = v5 | (char)v6; // 0x392bc
    *(char *)v3 = v7;
    unsigned char v8 = (char)a4 % 32; // 0x392be
    int64_t v9; // 0x392ba
    if (v8 != 0) {
        unsigned char v10 = *(char *)&v9; // 0x392be
        bool v11 = v6 ? v7 <= v4 : v5 < v4; // 0x392bc
        *(char *)v9 = v10 << v8 | (char)v11 << v8 - 1 | (char)((int16_t)v10 >> (int16_t)(9 - v8));
    }
    __asm_int1();
    *(char *)v2 = *(char *)&v2 + (char)(a4 / 256);
    int64_t v12 = v1;
    *(char *)v12 = *(char *)&v1 + (char)v12;
    int32_t * v13 = (int32_t *)(v1 + 22); // 0x392c6
    *v13 = 0x800000 * *v13;
    int64_t v14 = v3 & 0xffffffff; // 0x392e8
    v9 = v14;
    int64_t result = v14; // 0x392fb
    if (v3 != __readfsqword(40)) {
        // 0x392fd
        __stack_chk_fail();
        v9 = (int64_t)&g172;
        result = (int64_t)&g172;
    }
    // 0x39302
    return result;
}

// Address range: 0x3930b - 0x393fc
int64_t function_3930b(int64_t a1) {
    int64_t v1 = 0; // bp-72, 0x3931f
    int64_t v2 = __readfsqword(40); // 0x39331
    uint64_t v3 = function_39110((int64_t)&v1); // 0x3934a
    if ((char)v3 != 0) {
        int64_t v4 = (int64_t)&g152; // bp-80, 0x39378
        function_3ae24(&v4, -((2 * v1)));
        int64_t v5 = 0; // 0x39392
        int64_t v6 = 0; // 0x39392
        if (v1 != 0) {
            int64_t v7 = function_48de04(*(char *)(v5 + v1)); // 0x39398
            function_255da(&v4);
            *(int16_t *)(v4 + 2 * v5) = *(int16_t *)v7;
            int64_t v8 = v5 + 1; // 0x393b5
            v5 = v8;
            v6 = v1;
            while (v8 < -v1) {
                // 0x39394
                v7 = function_48de04(*(char *)(v5 + v1));
                function_255da(&v4);
                *(int16_t *)(v4 + 2 * v5) = *(int16_t *)v7;
                v8 = v5 + 1;
                v5 = v8;
                v6 = v1;
            }
        }
        // 0x393ba
        function_256ba((int64_t *)a1, &v4, v6);
        function_2508e(&v4);
    }
    int64_t result = function_3ae18(v1) & -256 | v3 % 256; // 0x393e8
    if (v2 != __readfsqword(40)) {
        // 0x393ea
        __stack_chk_fail();
        result = (int64_t)&g172;
    }
    // 0x393ef
    return result;
}

// Address range: 0x39400 - 0x3942d
int64_t function_39400(int64_t a1) {
    // 0x39400
    __readfsqword(40);
    return function_209338();
}

// Address range: 0x3946b - 0x39470
int64_t function_3946b(void) {
    // 0x3946b
    int64_t result; // 0x3946b
    return result;
}

// Address range: 0x39485 - 0x39486
int64_t function_39485(int64_t a1) {
    // 0x39485
    int64_t result; // 0x39485
    return result;
}

// Address range: 0x394cb - 0x394d1
int64_t function_394cb(void) {
    // 0x394cb
    int64_t result; // 0x394cb
    return result;
}

// Address range: 0x394f0 - 0x394f1
int64_t function_394f0(void) {
    // 0x394f0
    int64_t result; // 0x394f0
    return result;
}

// Address range: 0x39504 - 0x3950c
int64_t function_39504(int64_t a1, int64_t a2, int64_t a3) {
    // 0x39504
    int64_t v1; // 0x39504
    int64_t v2 = v1;
    return v2 & -256 | (int64_t)(*(char *)(a3 + 0x1ac27c8f) & (char)v2);
}

// Address range: 0x3953c - 0x3953d
int64_t function_3953c(void) {
    // 0x3953c
    int64_t result; // 0x3953c
    return result;
}

// Address range: 0x39556 - 0x39558
int64_t function_39556(void) {
    // 0x39556
    return function_394f0();
}

// Address range: 0x39560 - 0x3956d
int64_t function_39560(int64_t a1, int64_t a2) {
    // 0x39560
    int64_t v1; // 0x39560
    *(char *)a1 = (char)v1;
    bool v2; // 0x39560
    return function_695adba2((v2 ? -1 : 1) + a1);
}

// Address range: 0x39582 - 0x39584
int64_t function_39582(void) {
    // 0x39582
    int64_t v1; // 0x39582
    return function_395ac(v1, v1, v1, v1);
}

// Address range: 0x3958d - 0x3958e
int64_t function_3958d(int64_t a1) {
    // 0x3958d
    int64_t result; // 0x3958d
    return result;
}

// Address range: 0x395ac - 0x395c8
int64_t function_395ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x395ac
    int64_t v1; // 0x395ac
    bool v2; // 0x395ac
    if (!v2) {
        v1 = function_3953c();
    }
    // 0x395ae
    int64_t v3; // 0x395ac
    __asm_outsd((int16_t)a3, (int32_t)v3);
    char * v4 = (char *)(a4 + 78); // 0x395bd
    *v4 = *v4 + (char)v3;
    return v1 & -162;
}

// Address range: 0x395ca - 0x39601
int64_t function_395ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x395ca
    *(int32_t *)(a2 - 0x22ce48b4) = -0x6b32a9e5;
    int64_t v1; // 0x395ca
    char v2; // 0x395ca
    return (int64_t)&v1 & -256 | (int64_t)(unsigned char)v2;
}

// Address range: 0x3962f - 0x39639
int64_t function_3962f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3962f
    int64_t v1; // 0x3962f
    *(int32_t *)a4 = (int32_t)(v1 | a4);
    return a4 + 0x5076b94d & 0xffffffff;
}

// Address range: 0x39655 - 0x39665
int64_t function_39655(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39655
    int64_t v1; // 0x39655
    uint64_t result = v1;
    *(int32_t *)a1 = (int32_t)result;
    char * v2 = (char *)(a4 + 0x52b1d6cd); // 0x3965c
    *v2 = *v2 - (char)(result / 256);
    return result;
}

// Address range: 0x3966a - 0x3966b
int64_t function_3966a(int64_t a1) {
    // 0x3966a
    int64_t result; // 0x3966a
    return result;
}

// Address range: 0x396b3 - 0x396bb
int64_t function_396b3(void) {
    // 0x396b3
    int64_t v1; // 0x396b3
    int64_t result = v1 + 0xfe7007e8 & 0xffffffff; // 0x396b3
    int32_t * v2 = (int32_t *)(result - 127); // 0x396b8
    *v2 = *v2 - 1;
    return result;
}

// Address range: 0x396bd - 0x39701
int64_t function_396bd(int64_t a1, int64_t a2) {
    // 0x396bd
    int64_t v1; // 0x396bd
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v1 - 61); // 0x396bf
    *v3 = *v3 + (char)v1;
    __readfsqword(40);
    return function_20bac7();
}

// Address range: 0x39708 - 0x39709
int64_t function_39708(void) {
    // 0x39708
    int64_t result; // 0x39708
    return result;
}

// Address range: 0x3971c - 0x3971e
int64_t function_3971c(void) {
    // 0x3971c
    return function_39708();
}

// Address range: 0x39730 - 0x39774
int64_t function_39730(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39730
    int64_t v1; // 0x39730
    uint64_t v2 = v1;
    char * v3 = (char *)(v1 + 8); // 0x39732
    *v3 = *v3 ^ (char)(v2 / 256);
    int64_t v4; // 0x39730
    bool v5; // 0x39730
    uint32_t v6 = (int32_t)((v5 ? 0xfffffffc : 4) + a1) - *(int32_t *)&v4; // 0x39736
    unsigned char v7 = *(char *)(v1 % 256 + v2); // 0x39738
    int64_t v8 = v1 & -256 | (int64_t)v7; // 0x39738
    char * v9 = (char *)v8; // 0x3973b
    *v9 = *v9 + v7;
    int64_t v10; // 0x39730
    *(int32_t *)a3 = *(int32_t *)&v10 & (-1 << v6 % 32) - 1;
    *(int32_t *)(int64_t)v6 = __asm_insd((int16_t)a3);
    __asm_out_135(80, v7);
    *(char *)0x21a111f5 = *(char *)0x21a111f5 >> 1;
    *(int32_t *)-0x1f4340ed659a4e00 = (int32_t)v8;
    return function_1188106();
}

// Address range: 0x3977a - 0x3977b
int64_t function_3977a(int64_t a1) {
    // 0x3977a
    int64_t result; // 0x3977a
    return result;
}

// Address range: 0x39785 - 0x3978b
int64_t function_39785(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39785
    int64_t result; // 0x39785
    return result;
}

// Address range: 0x39795 - 0x397a4
int64_t function_39795(int64_t a1) {
    // 0x39795
    int64_t v1; // 0x39795
    int32_t * v2 = (int32_t *)(v1 - 0x33e9d531); // 0x3979a
    *v2 = 2 * *v2;
    return __asm_int3(a1);
}

// Address range: 0x397a9 - 0x397fd
int64_t function_397a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x397a9
    int64_t v1; // 0x397a9
    uint32_t v2 = (int32_t)v1; // 0x397b1
    bool v3; // 0x397a9
    int32_t v4 = v3; // 0x397b1
    uint32_t v5 = v4 + v2; // 0x397b1
    int32_t v6 = v3; // 0x397b1
    bool v7 = v3 ? v6 - v4 > v2 | v5 != -1 : v5 > v2; // 0x397b1
    int64_t v8; // 0x397a9
    *(char *)a1 = *(char *)&v8;
    int64_t result; // 0x397a9
    if (v6 - (int32_t)a3 + (int32_t)v7 >= 0) {
        // 0x397b8
        return result;
    }
    int64_t v9 = result;
    *(char *)v9 = *(char *)&result + (char)v9;
    char * v10 = (char *)(2 * a5 + 51 + result); // 0x397e3
    *v10 = *v10 + (char)(result / 256);
    int64_t v11 = result | 37; // 0x397e7
    result = v11;
    int64_t result2 = v11; // 0x397ed
    if (*(char *)v11 != 0) {
        // 0x397ef
        __stack_chk_fail();
        result = (int64_t)&g172;
        result2 = (int64_t)&g172;
    }
    // 0x397f4
    return result2;
}

// Address range: 0x39800 - 0x3983c
int64_t function_39800(int64_t a1, int64_t a2, int64_t a3) {
    // 0x39800
    __readfsqword(40);
    return function_215434();
}

// Address range: 0x39842 - 0x39849
int64_t function_39842(void) {
    // 0x39842
    int64_t v1; // 0x39842
    return v1 & 0x8213a8e7;
}

// Address range: 0x3989e - 0x398a1
int64_t function_3989e(int64_t a1) {
    // 0x3989e
    int64_t result; // 0x3989e
    return result;
}

// Address range: 0x398a6 - 0x398a9
int64_t function_398a6(int64_t a1) {
    // 0x398a6
    int64_t result; // 0x398a6
    return result;
}

// Address range: 0x398d6 - 0x398e4
int64_t function_398d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x398d6
    int64_t result; // 0x398d6
    bool v1; // 0x398d6
    if (a4 != 1 == v1) {
        // 0x398ff
        return result;
    }
    // 0x398db
    __asm_int(18);
    return result;
}

// Address range: 0x398e4 - 0x398e7
int64_t function_398e4(int64_t a1) {
    // 0x398e4
    int64_t result; // 0x398e4
    return result;
}

// Address range: 0x398f6 - 0x398f7
int64_t function_398f6(void) {
    // 0x398f6
    int64_t result; // 0x398f6
    return result;
}

// Address range: 0x39913 - 0x39914
int64_t function_39913(void) {
    // 0x39913
    int64_t result; // 0x39913
    return result;
}

// Address range: 0x39920 - 0x399a9
int64_t function_39920(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x39920
    int64_t v1; // 0x39920
    int64_t v2 = v1 & -256; // 0x39958
    int32_t * v3 = (int32_t *)(a1 + 62); // 0x3995b
    *v3 = *v3 + (int32_t)a6;
    uint64_t v4 = (v1 | 128) + 138; // 0x39960
    if ((char)v4 == -62) {
        // 0x39970
        return v2 | 145;
    }
    int16_t v5 = a3 - (v4 % 256 | v2); // 0x399a4
    int64_t v6; // 0x39920
    __asm_outsd(v5, *(int32_t *)&v6);
    int32_t * v7 = (int32_t *)((a4 & -256 | 11) - 3); // 0x399a5
    *v7 = *v7 | (int32_t)a7;
    __asm_out(v5, (char)a7);
    return a7 & 0xffffffff;
}

// Address range: 0x399b4 - 0x399c7
int64_t function_399b4(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x399b4
    *(char *)(a2 + 85) = (char)(a4 / 256);
    int64_t v1; // 0x399b4
    char v2 = *(char *)&v1; // 0x399b7
    int64_t v3; // 0x399b4
    *(char *)v3 = -1 - *(char *)&v3;
    bool v4; // 0x399b4
    int64_t v5 = v4 ? -4 : 4; // 0x399c1
    return function_7e8360c0(v5 + a1, v5 + a2, 256 * (int64_t)(v2 & (char)(a3 / 256)) | a3 & -0xff01);
}

// Address range: 0x39a03 - 0x39a06
int64_t function_39a03(void) {
    // 0x39a03
    int64_t result; // 0x39a03
    return result;
}

// Address range: 0x39a06 - 0x39a15
int64_t function_39a06(int64_t a1, int64_t a2) {
    // 0x39a06
    return function_615054ed();
}

// Address range: 0x39a20 - 0x39a2b
int64_t function_39a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39a20
    int64_t v1; // 0x39a20
    int64_t v2 = v1;
    char * v3 = (char *)(a3 + 29); // 0x39a20
    unsigned char v4 = *v3; // 0x39a20
    *v3 = v4 / 8 | 32 * v4;
    return v2 & -256 | (int64_t)__asm_in((int16_t)((int32_t)v2 >> 31));
}

// Address range: 0x39a2d - 0x39a2e
int64_t function_39a2d(void) {
    // 0x39a2d
    int64_t result; // 0x39a2d
    return result;
}

// Address range: 0x39a5d - 0x39a60
int64_t function_39a5d(int64_t a1) {
    // 0x39a5d
    int64_t result; // 0x39a5d
    return result;
}

// Address range: 0x39a7b - 0x39a99
int64_t function_39a7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x39a7b
    int64_t v1; // 0x39a7b
    *(int32_t *)0x6377bd4ef4700492 = (int32_t)v1;
    char * v2 = (char *)(v1 + 0xb1903f3); // 0x39a8b
    *v2 = *v2 + (char)v1;
    return function_39ac3(a1, a2, a3 & -256 | 113, a4);
}

// Address range: 0x39a99 - 0x39aa1
int64_t function_39a99(int64_t a1, int64_t a2, int64_t a3) {
    // 0x39a99
    __asm_in_136((int16_t)a3);
    return function_39a2d();
}

// Address range: 0x39aa1 - 0x39aa4
int64_t function_39aa1(int64_t a1) {
    // 0x39aa1
    int64_t result; // 0x39aa1
    return result;
}

// Address range: 0x39ac3 - 0x39ad0
int64_t function_39ac3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39ac3
    int64_t v1; // 0x39ac3
    return v1 & -256 | (int64_t)*(char *)-0x525e038959a8a1f0;
}

// Address range: 0x39ad4 - 0x39ad7
int64_t function_39ad4(void) {
    // 0x39ad4
    int64_t result; // 0x39ad4
    return result;
}

// Address range: 0x39b20 - 0x39b23
int64_t function_39b20(int64_t a1) {
    // 0x39b20
    int64_t result; // 0x39b20
    return result;
}

// Address range: 0x39b41 - 0x39b44
int64_t function_39b41(void) {
    // 0x39b41
    int64_t result; // 0x39b41
    return result;
}

// Address range: 0x39b66 - 0x39b69
int64_t function_39b66(void) {
    // 0x39b66
    int64_t result; // 0x39b66
    return result;
}

// Address range: 0x39b69 - 0x39c23
int64_t function_39b69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x39b69
    int64_t v1; // 0x39b69
    int64_t v2 = v1;
    *(int32_t *)(a2 - 0x2961636f) = (int32_t)a2;
    bool v3; // 0x39b69
    uint64_t v4 = v1 + 0x55ed0aab + (int64_t)v3; // 0x39b73
    unsigned char v5 = llvm_ctpop_i8((char)(v4 / 256 ^ v1)); // 0x39b78
    int64_t result = v4 & 0xffffff00 | (int64_t)__asm_in_137(-14); // 0x39b7b
    if (v5 % 2 == 0) {
        // 0x39be4
        return result;
    }
    unsigned char v6 = (char)a4 % 32; // 0x39be8
    if (v6 != 0) {
        char * v7 = (char *)(result - 0x74247740); // 0x39be8
        unsigned char v8 = *v7; // 0x39be8
        *v7 = v8 >> v6 | v8 << 8 - v6;
    }
    *(int64_t *)v2 = v2 + 8;
    *(int32_t *)(v2 + 44) = 0;
    int64_t result2 = 0; // 0x39c0e
    if (*(int64_t *)(v2 + 168) != __readfsqword(40)) {
        // 0x39c10
        __stack_chk_fail();
        result2 = (int64_t)&g172;
    }
    // 0x39be4
    return result2;
}

// Address range: 0x39c30 - 0x39c62
int64_t function_39c30(int64_t a1, int64_t a2) {
    // 0x39c30
    __readfsqword(40);
    return function_218f2e();
}

// Address range: 0x39c78 - 0x39c79
int64_t function_39c78(int64_t a1) {
    // 0x39c78
    int64_t result; // 0x39c78
    return result;
}

// Address range: 0x39c7a - 0x39c7f
int64_t function_39c7a(void) {
    // 0x39c7a
    int64_t result; // 0x39c7a
    return result;
}

// Address range: 0x39c9d - 0x39d19
int64_t function_39c9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (uint32_t)(int32_t)a4 % 32; // 0x39c9f
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(4 * a3 + 0x23a6bc5); // 0x39c9f
        *v2 = *v2 << v1;
    }
    char * v3 = (char *)(a1 - 42); // 0x39d04
    int64_t v4; // 0x39c9d
    int64_t v5 = v4;
    int64_t v6 = a2 & 0xffffffff ^ 0xedc108aa; // 0x39cfb
    int64_t v7; // 0x39c9d
    int64_t v8 = v7 - 8; // 0x39d00
    int64_t v9; // 0x39c9d
    *(int64_t *)v8 = v9;
    unsigned char v10 = *v3; // 0x39d04
    unsigned char v11 = v10 + (char)(v6 / 256); // 0x39d04
    *v3 = v11;
    uint32_t v12 = (int32_t)v8 + (int32_t)a3 + (int32_t)(v11 < v10); // 0x39d09
    unsigned char v13 = llvm_ctpop_i8((char)v12); // 0x39d09
    int32_t result = __asm_in_138(-6); // 0x39d0b
    while (v13 % 2 == 0) {
        // 0x39cf7
        v4 = __asm_int3(a1);
        v9 = v8 & 0xffffffff;
        v7 = v6;
        int64_t v14 = v5 & 0xffffffff; // 0x39cf7
        v5 = v4;
        v6 = v14 & 0xffffffff ^ 0xedc108aa;
        v8 = v7 - 8;
        *(int64_t *)v8 = v9;
        v10 = *v3;
        v11 = v10 + (char)(v6 / 256);
        *v3 = v11;
        v12 = (int32_t)v8 + (int32_t)(int64_t)v12 + (int32_t)(v11 < v10);
        v13 = llvm_ctpop_i8((char)v12);
        result = __asm_in_138(-6);
    }
    // 0x39d0f
    __asm_out_139((int16_t)v12, result);
    return result;
}

// Address range: 0x39d2f - 0x39d30
int64_t function_39d2f(void) {
    // 0x39d2f
    int64_t result; // 0x39d2f
    return result;
}

// Address range: 0x39d4f - 0x39d58
int64_t function_39d4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39d4f
    return function_39d8c(a1, a2, a3, a4, (int64_t)&g172);
}

// Address range: 0x39d65 - 0x39d73
int64_t function_39d65(void) {
    // 0x39d65
    int64_t v1; // 0x39d65
    *(int32_t *)-0x7b473f3af1fee10a = (int32_t)v1;
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x39d73 - 0x39d7e
int64_t function_39d73(void) {
    // 0x39d73
    return function_39d2f();
}

// Address range: 0x39d8c - 0x39db5
int64_t function_39d8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39d8c
    int64_t result; // 0x39d8c
    if ((a5 & 65) == 0) {
        // 0x39dab
        return (result & 0xffff00ff | (int64_t)(int32_t)&g162) ^ 0xae84a131;
    }
    // 0x39d91
    int128_t v1; // 0x39d8c
    __asm_vcvttsd2si(v1);
    char * v2 = (char *)(a4 + 73); // 0x39d95
    *v2 = 2 * *v2;
    return result;
}

// Address range: 0x39e2e - 0x39e31
int64_t function_39e2e(void) {
    // 0x39e2e
    int64_t result; // 0x39e2e
    return result;
}

// Address range: 0x39e45 - 0x39ed2
int64_t function_39e45(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int32_t a5) {
    // 0x39e45
    int64_t v1; // 0x39e45
    uint64_t v2 = v1;
    char * v3 = (char *)(a4 - 77); // 0x39e45
    *v3 = *v3 + (char)(v2 / 256);
    if (a4 != 1 && (char)(a3 / 256) != -(char)v2) {
        int64_t v4 = v2 & -232; // 0x39ec7
        char * v5 = (char *)v4; // 0x39ec9
        *v5 = *v5 + 2 * (char)v4;
        return function_22286b();
    }
    // 0x39e4c
    __asm_in_137(-39);
    int64_t result = 0; // 0x39e81
    if (v1 != __readfsqword(40)) {
        // 0x39e83
        __stack_chk_fail();
        result = (int64_t)&g172;
    }
    // 0x39e88
    return result;
}

// Address range: 0x39ed6 - 0x39ed8
int64_t function_39ed6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39ed6
    int64_t result; // 0x39ed6
    __asm_out_139((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x39ef5 - 0x3a026
int64_t function_39ef5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x39ef5
    int64_t result; // 0x39ef5
    bool v1; // 0x39ef5
    char v2 = 2 * (char)result + (char)v1; // 0x39ef5
    *(char *)result = v2;
    if (a4 != 1 == v2 == 0) {
        // 0x39f57
        return result & 0xffffffff;
    }
    // 0x39ef9
    return result;
}

// Address range: 0x3a079 - 0x3a07a
int64_t function_3a079(void) {
    // 0x3a079
    int64_t result; // 0x3a079
    return result;
}

// Address range: 0x3a08d - 0x3a110
int64_t function_3a08d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3a08d
    int64_t v1; // 0x3a08d
    int64_t v2 = v1;
    int64_t v3 = a1;
    __asm_int(69);
    *(int32_t *)-0xeffdd66a1475eee = (int32_t)a2;
    __asm_out_135(31, (char)a2);
    int64_t v4 = __asm_in_138(-96); // 0x3a0cc
    if ((*(int32_t *)(v4 + 0x2edf61a3) & (int32_t)a1) >= 0) {
        // 0x3a101
        return v4 & -256 | 230;
    }
    int64_t * v5 = (int64_t *)(v1 + 8); // 0x3a0df
    uint64_t v6 = *v5; // 0x3a0df
    unsigned char v7 = *(char *)(v6 % 256 + ((v2 + a4 / 256) % 256 | v2 & -256)); // 0x3a0e6
    int64_t v8 = v6 & -256 | (int64_t)v7; // 0x3a0e6
    *v5 = v8;
    *(int64_t *)v1 = v3;
    int32_t v9 = *(int32_t *)&v3; // 0x3a0f2
    bool v10; // 0x3a08d
    int64_t v11 = v3 + (v10 ? -4 : 4); // 0x3a0f2
    v3 = v11;
    int64_t v12 = v8; // 0x3a0f3
    if ((int32_t)v8 - v9 < 0) {
        v12 = function_3a079();
    }
    char * v13 = (char *)v11; // 0x3a0fd
    *v13 = *v13 - 119;
    // 0x3a101
    return v12 & -256 | 230;
}

// Address range: 0x3a121 - 0x3a156
int64_t function_3a121(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a121
    int64_t result; // 0x3a121
    bool v1; // 0x3a121
    if (v1 || v1) {
        // 0x3a123
        *(char *)0x512b6d76fcab814b = (char)result;
        return result;
    }
    // 0x3a13b
    return result;
}

// Address range: 0x3a162 - 0x3a165
int64_t function_3a162(void) {
    // 0x3a162
    int64_t result; // 0x3a162
    return result;
}

// Address range: 0x3a18d - 0x3a18f
int64_t function_3a18d(void) {
    // 0x3a18d
    int64_t result; // 0x3a18d
    return result;
}

// Address range: 0x3a1ac - 0x3a1ad
int64_t function_3a1ac(void) {
    // 0x3a1ac
    int64_t result; // 0x3a1ac
    return result;
}

// Address range: 0x3a1ae - 0x3a1b1
int64_t function_3a1ae(void) {
    // 0x3a1ae
    int64_t result; // 0x3a1ae
    return result;
}

// Address range: 0x3a1b9 - 0x3a1cb
int64_t function_3a1b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_iretd(); // 0x3a1c3
    uint64_t v2 = v1 + 92; // 0x3a1c4
    __asm_out_135(-22, (char)v2);
    int64_t result = v2 % 256 | v1 & -256; // 0x3a1c8
    if (((char)v1 ^ -4) < 92) {
        result = function_3a1ac();
    }
    // 0x3a1ca
    return result;
}

// Address range: 0x3a262 - 0x3a2c1
int64_t function_3a262(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t result; // 0x3a262
    *(char *)(result + 0x4a303f41) = (char)a4 - 1;
    int16_t v2 = a3; // 0x3a26c
    *(char *)a1 = __asm_insb(v2);
    bool v3; // 0x3a262
    if (v3) {
        // 0x3a275
        return result;
    }
    int32_t * v4 = (int32_t *)(v1 - 0x710e4a73); // 0x3a297
    uint32_t v5 = *v4; // 0x3a297
    *v4 = v5 / 2 | 0x80000000 * v5;
    __asm_int(74);
    *(int32_t *)a1 = *(int32_t *)&v1;
    v1 += (v3 ? -4 : 4);
    int32_t v6 = (int32_t)result ^ 0x14a6ebb7; // 0x3a2a7
    char v7 = llvm_ctpop_i8((char)v6); // 0x3a2a7
    int64_t v8 = v6; // 0x3a2a7
    __asm_out_139(v2, v6);
    int64_t v9 = 0; // 0x3a2ae
    bool v10 = v6 == 0; // 0x3a2ae
    bool v11 = v6 < 0; // 0x3a2ae
    char v12 = v7; // 0x3a2ae
    int64_t v13 = v8; // 0x3a2ae
    int64_t v14 = 0; // 0x3a2ae
    if (v6 >= 0 != v6 != 0) {
        // 0x3a2b0
        *(char *)a3 = 0;
        unsigned char v15 = *(char *)v1; // 0x3a2bd
        unsigned char v16 = *(char *)0x60c1c62100751562; // 0x3a2bd
        char v17 = v15 - v16; // 0x3a2bd
        v12 = llvm_ctpop_i8(v17);
        v9 = 16 * (int64_t)(v15 % 16 - v16 % 16 > 15);
        v10 = v17 == 0;
        v11 = v17 < 0;
        v13 = v8 & 0xffffff00 | 230;
        v14 = v15 < v16;
    }
    // 0x3a2c0
    return v13 & -0xff01 | 256 * (64 * (int64_t)v10 | v9 | 128 * (int64_t)v11 | v14 | 4 * (int64_t)(v12 % 2 == 0)) | 512;
}

// Address range: 0x3a327 - 0x3a32a
int64_t function_3a327(int64_t a1) {
    // 0x3a327
    int64_t result; // 0x3a327
    return result;
}

// Address range: 0x3a382 - 0x3a3f5
int64_t function_3a382(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a382
    int64_t v1; // 0x3a382
    uint32_t result = (int32_t)v1 ^ 0x5b8fb14c; // 0x3a382
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    if (result == 0) {
        // 0x3a3ec
        *(char *)0x6b0bfaa1ad5c7f07 = 0;
        return 0;
    }
    // 0x3a38a
    *(char *)0x6455b2d8 = *(char *)0x6455b2d8 - (char)result;
    return result;
}

// Address range: 0x3a3f8 - 0x3a43e
int64_t function_3a3f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a3f8
    int64_t v1; // 0x3a3f8
    *(int32_t *)(v1 + 32) = 0;
    int64_t result = 0; // 0x3a42d
    if (*(int64_t *)(v1 + 224) != __readfsqword(40)) {
        // 0x3a42f
        __stack_chk_fail();
        result = (int64_t)&g172;
    }
    // 0x3a434
    return result;
}

// Address range: 0x3a440 - 0x3a472
int64_t function_3a440(int64_t a1, int64_t a2) {
    // 0x3a440
    __readfsqword(40);
    return function_22fceb();
}

// Address range: 0x3a48c - 0x3a48d
int64_t function_3a48c(void) {
    // 0x3a48c
    int64_t result; // 0x3a48c
    return result;
}

// Address range: 0x3a495 - 0x3a4a5
int64_t function_3a495(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a495
    int64_t v1; // 0x3a495
    *(char *)a1 = (char)(v1 & a1);
    int64_t v2; // 0x3a495
    return (int64_t)(*(int32_t *)&v2 & -0xff01) | (int64_t)"many_avx512";
}

// Address range: 0x3a4e9 - 0x3a4ee
int64_t function_3a4e9(int64_t a1) {
    // 0x3a4e9
    int64_t result; // 0x3a4e9
    bool v1; // 0x3a4e9
    if (!v1) {
        result = function_3a48c();
    }
    // 0x3a4eb
    return result;
}

// Address range: 0x3a571 - 0x3a577
int64_t function_3a571(void) {
    // 0x3a571
    int64_t result; // 0x3a571
    return result;
}

// Address range: 0x3a609 - 0x3a60c
int64_t function_3a609(void) {
    // 0x3a609
    int64_t result; // 0x3a609
    return result;
}

// Address range: 0x3a629 - 0x3a62e
int64_t function_3a629(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a629
    int64_t result; // 0x3a629
    return result;
}

// Address range: 0x3a673 - 0x3a69c
int64_t function_3a673(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a1; // 0x3a674
    bool v3; // 0x3a673
    if (!v3) {
        v2 = function_ffffffff8904a36b();
    }
    // 0x3a67a
    int64_t v4; // 0x3a673
    int64_t v5 = v4 & 0xffffffff; // 0x3a673
    *(int32_t *)v5 = (int32_t)v2 & 0x5c06b924;
    *(int32_t *)v1 = *(int32_t *)&v1 - (int32_t)a2;
    int64_t result = v2 & -0xff01 | (int64_t)&g163; // 0x3a683
    int32_t * v6 = (int32_t *)(result - 7); // 0x3a68a
    *v6 = *v6 ^ (int32_t)v4;
    unsigned char v7 = (char)a4 % 32; // 0x3a68d
    if (v7 != 0) {
        unsigned char v8 = *(char *)0x42311f0c; // 0x3a68d
        *(char *)0x42311f0c = v8 << v7 | (char)((int16_t)v8 >> (int16_t)(9 - v7));
    }
    *(char *)v5 = *(char *)0x1ef29ee4;
    int32_t v9 = *((v3 ? (int32_t *)0x1ef29ee3 : (int32_t *)0x1ef29ee5)); // 0x3a696
    __asm_outsd((int16_t)v1, v9);
    __asm_int(-111);
    return result;
}

// Address range: 0x3a6db - 0x3a6dc
int64_t function_3a6db(void) {
    // 0x3a6db
    int64_t result; // 0x3a6db
    return result;
}

// Address range: 0x3a6dd - 0x3a6e2
int64_t function_3a6dd(void) {
    // 0x3a6dd
    return function_737a2822();
}

// Address range: 0x3a6e5 - 0x3a6e6
int64_t function_3a6e5(void) {
    // 0x3a6e5
    int64_t result; // 0x3a6e5
    return result;
}

// Address range: 0x3a6f9 - 0x3a714
int64_t function_3a6f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3a6f9
    bool v1; // 0x3a6f9
    int64_t v2 = v1 ? -1 : 1; // 0x3a70d
    int64_t v3 = a2; // 0x3a6f9
    int64_t v4 = a1; // 0x3a6f9
    *(char *)v4 = *(char *)v3;
    v3 += v2;
    v4 += v2;
    while ((int32_t)(a4 & a3) >= 0) {
        // 0x3a706
        *(char *)v4 = *(char *)v3;
        v3 += v2;
        v4 += v2;
    }
    // 0x3a710
    int64_t v5; // 0x3a6f9
    __asm_out_139((int16_t)a3, (int32_t)(v5 ^ v5));
    return function_3a6db();
}

// Address range: 0x3a714 - 0x3a718
int64_t function_3a714(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a714
    int64_t result; // 0x3a714
    uint32_t v1 = (int32_t)result;
    *(int32_t *)a4 = v1 / 64 | 0x4000000 * v1;
    return result;
}

// Address range: 0x3a71c - 0x3a71f
int64_t function_3a71c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a71c
    int64_t result; // 0x3a71c
    return result;
}

// Address range: 0x3a720 - 0x3a727
int64_t function_3a720(int64_t a1) {
    // 0x3a720
    bool v1; // 0x3a720
    if (!v1) {
        function_3a6e5();
    }
    // 0x3a722
    int64_t v2; // 0x3a720
    return v2 & 0xffffffff;
}

// Address range: 0x3e19c - 0x3f89f
// Used cryptographic patterns:
//  - zinflate_distanceExtraBits (32-bit, little endian)
//  - zinflate_distanceStarts (32-bit, little endian)
//  - zinflate_lengthExtraBits (32-bit, little endian)
//  - zinflate_lengthStarts (32-bit, little endian)
int64_t function_3e19c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, uint32_t a7) {
    int64_t v1 = __readfsqword(40); // 0x3e1c5
    uint64_t v2 = a3 + a2; // 0x3e1dd
    uint64_t v3 = v2 + a5;
    int64_t v4 = (a7 & 4) != 0 ? -1 : v3 + -1 - a4;
    int64_t v5 = v4 + 1; // 0x3e224
    int64_t v6 = v5; // 0x3e224
    int32_t * v7; // 0x3e19c
    int32_t v8; // 0x3e19c
    int64_t v9; // 0x3e19c
    int64_t v10; // 0x3e19c
    int64_t v11; // 0x3e19c
    int64_t v12; // 0x3e19c
    int64_t v13; // 0x3e19c
    int64_t v14; // 0x3e19c
    int64_t v15; // 0x3e19c
    int64_t v16; // 0x3e19c
    int64_t v17; // 0x3e19c
    int64_t v18; // 0x3e19c
    int32_t v19; // 0x3e19c
    int64_t * v20; // 0x3e263
    int32_t * v21; // 0x3e267
    int32_t * v22; // 0x3e26f
    int64_t * v23; // 0x3e276
    int64_t v24; // 0x3e276
    int64_t v25; // 0x3e3f0
    int64_t * v26; // 0x3e3f0
    int32_t * v27; // 0x3e3f8
    int32_t * v28; // 0x3e19c
    int32_t * v29; // 0x3e25b
    int32_t * v30; // 0x3e25f
    if (a5 >= a4 == (v5 & v4) == 0) {
        // 0x3e2a5
        v29 = (int32_t *)(a1 + 32);
        v30 = (int32_t *)(a1 + 4);
        v20 = (int64_t *)(a1 + 56);
        v21 = (int32_t *)(a1 + 36);
        v22 = (int32_t *)(a1 + 40);
        v23 = (int64_t *)(a1 + 64);
        v24 = *v23;
        v19 = *v29;
        v18 = v24;
        v15 = 0xffffffff;
        v17 = a5;
        v14 = (int64_t)*v21;
        v13 = (int64_t)*v22;
        v10 = a2;
        v11 = (int64_t)*v30;
        v12 = *v20;
        if ((a7 & 4) == 0) {
            // 0x3e3e0
            *(int32_t *)(a1 + 28) = 1;
            v25 = a1 + 8;
            v26 = (int64_t *)v25;
            *v26 = 0;
            v27 = (int32_t *)(a1 + 16);
            *v27 = 1;
            if (a7 % 2 == 0) {
                goto lab_generated_0;
            } else {
                if (v2 > a2) {
                    int32_t * v31 = (int32_t *)v25;
                    *v31 = (int32_t)*(char *)&v6;
                    int64_t v32 = a2 + 1;
                    if (v2 > v32) {
                        int32_t v33 = (int32_t)*(char *)v32; // 0x3e4d1
                        *(int32_t *)(a1 + 12) = v33;
                        v7 = v31;
                        v8 = v33;
                        v9 = a2 + 2;
                        goto lab_0x3e4d5;
                    } else {
                        // 0x3e490
                        if ((a7 & 2) == 0) {
                            goto lab_0x3e4c0;
                        } else {
                            // 0x3e49a
                            *(int32_t *)a1 = 2;
                            v19 = 0;
                            v18 = v24;
                            v15 = 1;
                            v17 = a5;
                            v14 = 0;
                            v13 = 0;
                            v10 = v32;
                            v11 = 0;
                            v12 = 0;
                            goto lab_0x3f72a;
                        }
                    }
                } else {
                    if ((a7 & 2) == 0) {
                        // 0x3e44e
                        v28 = (int32_t *)v25;
                        *v28 = 0;
                        goto lab_0x3e4c0;
                    } else {
                        // 0x3e428
                        *(int32_t *)a1 = 1;
                        v19 = 0;
                        v18 = v24;
                        v15 = 1;
                        v17 = a5;
                        v14 = 0;
                        v13 = 0;
                        v10 = a2;
                        v11 = 0;
                        v12 = 0;
                        goto lab_0x3f72a;
                    }
                }
            }
        } else {
            goto lab_0x3f72a;
        }
    } else {
        // 0x3e239
        *(int64_t *)a6 = 0;
        *(int64_t *)a3 = 0;
        v16 = 0xfffffffd;
        goto lab_0x3f873;
    }
  lab_0x3e56d:;
    // 0x3e56d
    int64_t v34; // 0x3e19c
    int64_t v35 = v34;
    int64_t v36; // 0x3e19c
    int64_t v37 = v36;
    int64_t v38; // 0x3e19c
    int64_t v39 = v38;
    int64_t v40; // 0x3e19c
    int64_t v41 = v40;
    int64_t v42; // 0x3e19c
    int64_t v43 = v42;
    int64_t v44; // 0x3e19c
    int64_t v45 = v44;
    int64_t v46; // 0x3e19c
    int64_t v47 = v46;
    int32_t v48; // 0x3e19c
    int32_t v49 = v48;
    int64_t v50; // 0x3e19c
    char v51; // 0x3e19c
    if (v2 > v39) {
        // 0x3e5a8
        v51 = *(char *)v39;
        v50 = v39 + 1;
        goto lab_0x3e5b3;
    } else {
        // 0x3e581
        v51 = 0;
        v50 = v39;
        if ((a7 & 2) == 0) {
            goto lab_0x3e5b3;
        } else {
            // 0x3e58b
            *(int32_t *)a1 = 3;
            v19 = v49;
            v18 = v47;
            v15 = 1;
            v17 = v45;
            v14 = v43;
            v13 = v41;
            v10 = v39;
            v11 = v37;
            v12 = v35;
            goto lab_0x3f72a;
        }
    }
  lab_0x3e80b:;
    // 0x3e80b
    int64_t v52; // 0x3e19c
    int64_t v53 = v52;
    int64_t v54; // 0x3e19c
    int64_t v55 = v54;
    int64_t v56; // 0x3e19c
    int64_t v57 = v56;
    int64_t v58; // 0x3e19c
    int64_t v59; // 0x3e19c
    int64_t v60; // 0x3e19c
    int64_t v61; // 0x3e19c
    int64_t v62; // 0x3e19c
    int64_t v63; // 0x3e19c
    int64_t v64; // 0x3e19c
    int64_t v65; // 0x3e19c
    int64_t v66; // 0x3e19c
    int64_t v67; // 0x3e19c
    int64_t v68; // 0x3e19c
    int32_t v69; // 0x3e19c
    int32_t v70; // 0x3e19c
    int64_t v71; // 0x3e19c
    if (v3 > v57) {
        if (v2 > v53) {
            uint64_t v72 = v2 - v53; // 0x3e858
            uint64_t v73 = v3 - v57; // 0x3e85e
            uint64_t v74 = v72 > v73 ? v73 : v72; // 0x3e864
            uint64_t v75 = v55 & 0xffffffff; // 0x3e868
            int64_t v76 = v74 > v75 ? v75 : v74; // 0x3e86d
            uint32_t v77 = (int32_t)v55 - (int32_t)v76; // 0x3e874
            int64_t v78 = v77; // 0x3e874
            __asm_rep_movsb_memcpy((char *)v57, (char *)v53, v76);
            int64_t v79 = v76 * v71 + v57; // 0x3e876
            v56 = v79;
            v54 = v78;
            v52 = v79;
            v70 = v69;
            v68 = v67;
            v66 = v79;
            v65 = v78;
            v64 = v63;
            v58 = v79;
            v60 = v59;
            v62 = v61;
            if (v77 != 0) {
                goto lab_0x3e80b;
            } else {
                goto lab_0x3f5b7_2;
            }
        }
    } else {
        // 0x3e812
        *(int32_t *)a1 = 9;
        v19 = v69;
        v18 = v67;
        v15 = 2;
        v17 = v57;
        v14 = v55;
        v13 = v63;
        v10 = v53;
        v11 = v59;
        v12 = v61;
    }
  lab_0x3f0ac:;
    // 0x3f0ac
    int64_t v80; // 0x3e19c
    int64_t v81; // 0x3e19c
    int16_t v82 = *(int16_t *)(v81 + 2 * (v80 & (int64_t)(int32_t)&g39)); // 0x3f0b4
    int64_t v83 = v82; // 0x3f0b4
    int64_t v84 = 10; // 0x3f0bf
    int64_t v85 = v83; // 0x3f0bf
    int64_t v86; // 0x3e19c
    int64_t v87; // 0x3e19c
    if (v82 < 0) {
        int64_t v88 = v84 + 1 & 0xffffffff; // 0x3f0d6
        uint16_t v89 = *(int16_t *)(2 * (((v80 >> v84 % 64) % 2 | (int64_t)&g57) + ((0x100000000 * v85 ^ -0x100000000) >> 32)) + v25); // 0x3f0ef
        int64_t v90 = v89; // 0x3f0ef
        v84 = v88;
        v86 = v88;
        v87 = v90;
        while (v89 < 0) {
            // 0x3f0d3
            v88 = v84 + 1 & 0xffffffff;
            v89 = *(int16_t *)(2 * (((v80 >> v84 % 64) % 2 | (int64_t)&g57) + ((0x100000000 * v90 ^ -0x100000000) >> 32)) + v25);
            v90 = v89;
            v84 = v88;
            v86 = v88;
            v87 = v90;
        }
    } else {
        // 0x3f0c1
        v86 = v82 / 512;
        v87 = v83 % 512;
    }
    int64_t v91 = v87;
    int64_t v92; // 0x3e19c
    int64_t v93 = v92 - v86 & 0xffffffff; // 0x3f0fd
    int64_t v94 = v80 >> v86 % 64;
    if ((int32_t)v91 > 255) {
        // break -> 0x3f210
        goto lab_0x3f210_3;
    }
    int64_t v95; // 0x3e19c
    int64_t v96; // 0x3e19c
    int64_t v97; // 0x3e19c
    int64_t v98; // 0x3e19c
    int32_t v99; // 0x3e19c
    if (v3 <= v97) {
        // 0x3f124
        *(int32_t *)a1 = 24;
        v19 = v99;
        v18 = v98;
        v15 = 2;
        v17 = v97;
        v14 = v91;
        v13 = v96;
        v10 = v95;
        v11 = v93;
        v12 = v94;
        goto lab_0x3f72a;
    }
    // 0x3ef89
    *(char *)v97 = (char)v91;
    goto lab_0x3ef8e_2;
  lab_0x3efb0:;
    // 0x3efb0
    int64_t v119; // 0x3e19c
    int64_t v170 = v119;
    int64_t v118; // 0x3e19c
    int64_t v171 = v118;
    int64_t v117; // 0x3e19c
    int64_t v172 = v117;
    int64_t v115; // 0x3e19c
    int64_t v173 = v115;
    v97 = v173;
    v95 = v172;
    v92 = v171;
    v80 = v170;
    int64_t v120; // 0x3e19c
    int64_t v167; // 0x3e19c
    int64_t v168; // 0x3e19c
    int64_t v169; // 0x3e19c
    int64_t v116; // 0x3e19c
    int64_t v166; // 0x3e19c
    if ((int32_t)v171 < 15) {
        int64_t v174 = v120;
        int64_t v175 = v116;
        int64_t v176 = v172; // 0x3efbd
        int64_t v177 = v171; // 0x3efbd
        int64_t v178 = v170; // 0x3efbd
        v166 = v173;
        v167 = v172;
        v168 = v171;
        v169 = v170;
        if (v174 > 1) {
            goto lab_0x3f088;
        } else {
            int64_t v179 = v178;
            int64_t v180 = v177;
            int64_t v181 = v176;
            uint16_t v182 = *(int16_t *)(v81 + 2 * (v179 & (int64_t)(int32_t)&g39)); // 0x3efcb
            int16_t v183; // 0x3e19c
            int16_t v184; // 0x3e19c
            int64_t v185; // 0x3e19c
            uint64_t v186; // 0x3e19c
            uint32_t v187; // 0x3efe9
            int64_t v188; // 0x3eff9
            int16_t v189; // 0x3f00c
            if (v182 < 0) {
                // 0x3efe9
                v187 = (int32_t)v180;
                v183 = v182;
                v185 = 10;
                if (v187 >= 11) {
                    v186 = v185;
                    v184 = v183;
                    v188 = v186 + 1 & 0xffffffff;
                    v6 = v188;
                    v189 = *(int16_t *)(2 * (((v179 >> v186 % 64) % 2 | (int64_t)&g57) + ((0x100000000 * (int64_t)v184 ^ -0x100000000) >> 32)) + v25);
                    v97 = v173;
                    v95 = v181;
                    v92 = v180;
                    v80 = v179;
                    if (v189 >= 0) {
                        // break (via goto) -> 0x3f0ac
                        goto lab_0x3f0ac;
                    }
                    // 0x3f01a
                    v183 = v189;
                    v185 = v188;
                    while ((int32_t)v186 + 2 <= v187) {
                        // 0x3eff4
                        v186 = v185;
                        v184 = v183;
                        v188 = v186 + 1 & 0xffffffff;
                        v6 = v188;
                        v189 = *(int16_t *)(2 * (((v179 >> v186 % 64) % 2 | (int64_t)&g57) + ((0x100000000 * (int64_t)v184 ^ -0x100000000) >> 32)) + v25);
                        v97 = v173;
                        v95 = v181;
                        v92 = v180;
                        v80 = v179;
                        if (v189 >= 0) {
                            // break (via goto) -> 0x3f0ac
                            goto lab_0x3f0ac;
                        }
                        // 0x3f01a
                        v183 = v189;
                        v185 = v188;
                    }
                }
            } else {
                // 0x3efd8
                v97 = v173;
                v95 = v181;
                v92 = v180;
                v80 = v179;
                if (v182 >= 512 && (int32_t)(v182 / 512) <= (int32_t)v180) {
                    // break -> 0x3f0ac
                    break;
                }
            }
            int64_t v190; // 0x3e19c
            char v191; // 0x3e19c
            char v192; // 0x3f05f
            if (v2 > v181) {
                // 0x3f05f
                v192 = *(char *)v181;
                v191 = v192;
                v190 = v181 + 1;
            } else {
                // 0x3f038
                v191 = 0;
                v190 = v181;
                if ((a7 & 2) != 0) {
                    // 0x3f042
                    *(int32_t *)a1 = 23;
                    v19 = v99;
                    v18 = v98;
                    v15 = 1;
                    v17 = v173;
                    v14 = v175;
                    v13 = v96;
                    v10 = v181;
                    v11 = v180;
                    v12 = v179;
                    goto lab_0x3f72a;
                }
            }
            int64_t v193 = v190;
            unsigned char v194 = v191;
            int64_t v195 = v180 + 8; // 0x3f06d
            int64_t v196 = v195 & 0xffffffff; // 0x3f06d
            int64_t v197 = (int64_t)v194 << v180 % 64 | v179; // 0x3f074
            v176 = v193;
            v177 = v196;
            v178 = v197;
            v97 = v173;
            v95 = v193;
            v92 = v196;
            v80 = v197;
            while ((int32_t)v195 < 15) {
                // 0x3efc3
                v179 = v178;
                v180 = v177;
                v181 = v176;
                v182 = *(int16_t *)(v81 + 2 * (v179 & (int64_t)(int32_t)&g39));
                if (v182 < 0) {
                    // 0x3efe9
                    v187 = (int32_t)v180;
                    v183 = v182;
                    v185 = 10;
                    if (v187 >= 11) {
                        v186 = v185;
                        v184 = v183;
                        v188 = v186 + 1 & 0xffffffff;
                        v6 = v188;
                        v189 = *(int16_t *)(2 * (((v179 >> v186 % 64) % 2 | (int64_t)&g57) + ((0x100000000 * (int64_t)v184 ^ -0x100000000) >> 32)) + v25);
                        v97 = v173;
                        v95 = v181;
                        v92 = v180;
                        v80 = v179;
                        if (v189 >= 0) {
                            // break (via goto) -> 0x3f0ac
                            goto lab_0x3f0ac;
                        }
                        // 0x3f01a
                        v183 = v189;
                        v185 = v188;
                        while ((int32_t)v186 + 2 <= v187) {
                            // 0x3eff4
                            v186 = v185;
                            v184 = v183;
                            v188 = v186 + 1 & 0xffffffff;
                            v6 = v188;
                            v189 = *(int16_t *)(2 * (((v179 >> v186 % 64) % 2 | (int64_t)&g57) + ((0x100000000 * (int64_t)v184 ^ -0x100000000) >> 32)) + v25);
                            v97 = v173;
                            v95 = v181;
                            v92 = v180;
                            v80 = v179;
                            if (v189 >= 0) {
                                // break (via goto) -> 0x3f0ac
                                goto lab_0x3f0ac;
                            }
                            // 0x3f01a
                            v183 = v189;
                            v185 = v188;
                        }
                    }
                } else {
                    // 0x3efd8
                    v97 = v173;
                    v95 = v181;
                    v92 = v180;
                    v80 = v179;
                    if (v182 >= 512 && (int32_t)(v182 / 512) <= (int32_t)v180) {
                        // break -> 0x3f0ac
                        break;
                    }
                }
                if (v2 > v181) {
                    // 0x3f05f
                    v192 = *(char *)v181;
                    v191 = v192;
                    v190 = v181 + 1;
                } else {
                    // 0x3f038
                    v191 = 0;
                    v190 = v181;
                    if ((a7 & 2) != 0) {
                        // 0x3f042
                        *(int32_t *)a1 = 23;
                        v19 = v99;
                        v18 = v98;
                        v15 = 1;
                        v17 = v173;
                        v14 = v175;
                        v13 = v96;
                        v10 = v181;
                        v11 = v180;
                        v12 = v179;
                        goto lab_0x3f72a;
                    }
                }
                // 0x3f06a
                v193 = v190;
                v194 = v191;
                v195 = v180 + 8;
                v196 = v195 & 0xffffffff;
                v197 = (int64_t)v194 << v180 % 64 | v179;
                v176 = v193;
                v177 = v196;
                v178 = v197;
                v97 = v173;
                v95 = v193;
                v92 = v196;
                v80 = v197;
            }
            goto lab_0x3f0ac;
        }
    } else {
        goto lab_0x3f0ac;
    }
  lab_0x3f088:;
    int64_t v198 = v169;
    uint64_t v199 = v168;
    int64_t v200 = v167;
    int64_t v201 = v166;
    unsigned char v202 = *(char *)(v200 + 1); // 0x3f088
    unsigned char v203 = *(char *)v200; // 0x3f08d
    int64_t v204 = (int64_t)v203 << v199 % 64;
    v6 = v204;
    v97 = v201;
    v95 = v200 + 2;
    v92 = v199 + 16 & 0xffffffff;
    v80 = (int64_t)v202 << (v199 + 8) % 64 | v198 | v204;
    goto lab_0x3f0ac;
  lab_0x3f210_3:;
    int64_t v205 = v94;
    int64_t v206 = v93;
    int64_t v207 = v97;
    uint64_t v208 = v91 % 512; // 0x3f210
    v70 = v99;
    v68 = v98;
    v66 = v207;
    v65 = 256;
    v64 = v96;
    v58 = v95;
    v60 = v206;
    v62 = v205;
    if (v208 == 256) {
        // break -> 0x3f5b7
        goto lab_0x3f5b7_2;
    }
    int64_t v209 = 4 * v208 + 0x3fffffbfc & 0x3fffffffc; // 0x3f22f
    uint32_t v210 = *(int32_t *)(v209 + (int64_t)&zinflate_lengthExtraBits_at_584fe0); // 0x3f22f
    int64_t v211 = v210; // 0x3f239
    uint32_t v212 = *(int32_t *)(v209 + (int64_t)&zinflate_lengthStarts_at_585060); // 0x3f23c
    int64_t v213 = v212; // 0x3f23c
    int64_t v214 = v213; // 0x3f242
    int64_t v215 = v95; // 0x3f242
    int64_t v216 = v206; // 0x3f242
    int64_t v217 = v205; // 0x3f242
    if (v210 != 0) {
        int64_t v218 = v95; // 0x3f247
        int64_t v219 = v206; // 0x3f247
        int64_t v220 = v205; // 0x3f247
        if (v210 > (int32_t)v206) {
            int64_t v221; // 0x3e19c
            char v222; // 0x3e19c
            if (v2 > v95) {
                // 0x3f284
                v222 = *(char *)v95;
                v221 = v95 + 1;
            } else {
                // 0x3f25d
                v222 = 0;
                v221 = v95;
                if ((a7 & 2) != 0) {
                    // 0x3f267
                    *(int32_t *)a1 = 25;
                    v19 = v99;
                    v18 = v98;
                    v15 = 1;
                    v17 = v207;
                    v14 = v213;
                    v13 = v211;
                    v10 = v95;
                    v11 = v206;
                    v12 = v205;
                    goto lab_0x3f72a;
                }
            }
            int64_t v223 = v206 + 8; // 0x3f292
            int64_t v224 = v223 & 0xffffffff; // 0x3f292
            int64_t v225 = (int64_t)v222 << v206 % 64 | v205; // 0x3f299
            v218 = v221;
            v219 = v224;
            v220 = v225;
            while (v210 > (int32_t)v223) {
                int64_t v226 = v225;
                int64_t v227 = v224;
                int64_t v228 = v221;
                if (v2 > v228) {
                    // 0x3f284
                    v222 = *(char *)v228;
                    v221 = v228 + 1;
                } else {
                    // 0x3f25d
                    v222 = 0;
                    v221 = v228;
                    if ((a7 & 2) != 0) {
                        // 0x3f267
                        *(int32_t *)a1 = 25;
                        v19 = v99;
                        v18 = v98;
                        v15 = 1;
                        v17 = v207;
                        v14 = v213;
                        v13 = v211;
                        v10 = v228;
                        v11 = v227;
                        v12 = v226;
                        goto lab_0x3f72a;
                    }
                }
                // 0x3f28f
                v223 = v227 + 8;
                v224 = v223 & 0xffffffff;
                v225 = (int64_t)v222 << v227 % 64 | v226;
                v218 = v221;
                v219 = v224;
                v220 = v225;
            }
        }
        // 0x3f2a1
        v214 = (v220 & (int64_t)(1 << v210 % 32) + 0xffffffff) + v213 & 0xffffffff;
        v215 = v218;
        v216 = v219 - v211 & 0xffffffff;
        v217 = v220 >> v211 % 64;
    }
    int64_t v229 = v215; // 0x3f2bf
    int64_t v230 = v216; // 0x3f2bf
    int64_t v231 = v217; // 0x3f2bf
    int64_t v232; // 0x3e19c
    if ((int32_t)v216 < 15) {
        // 0x3f2c5
        if (v2 - v215 > 1) {
            unsigned char v233 = *(char *)(v215 + 1); // 0x3f393
            int64_t v234 = (int64_t)*(char *)v215 << v216 % 64;
            v6 = v234;
            v229 = v215 + 2;
            v230 = v216 + 16 & 0xffffffff;
            v231 = (int64_t)v233 << (v216 + 8) % 64 | v217 | v234;
        } else {
            uint16_t v235 = *(int16_t *)(v232 + 2 * (v217 & (int64_t)(int32_t)&g39)); // 0x3f2dc
            int16_t v236; // 0x3e19c
            uint64_t v237; // 0x3e19c
            uint32_t v238; // 0x3f2fa
            int64_t v239; // 0x3f30a
            int16_t v240; // 0x3f31d
            if (v235 < 0) {
                // 0x3f2fa
                v238 = (int32_t)v216;
                v236 = v235;
                if (v238 >= 11) {
                    v237 = 10;
                    v239 = v237 + 1 & 0xffffffff;
                    v6 = v239;
                    v240 = *(int16_t *)(2 * (((v217 >> v237 % 64) % 2 | (int64_t)&g160) + ((0x100000000 * (int64_t)v236 ^ -0x100000000) >> 32)) + v25);
                    v229 = v215;
                    v230 = v216;
                    v231 = v217;
                    if (v240 >= 0) {
                        // break (via goto) -> 0x3f3b7
                        goto lab_0x3f3b7;
                    }
                    // 0x3f32b
                    v236 = v240;
                    while ((int32_t)v237 + 2 <= v238) {
                        // 0x3f305
                        v237 = v239;
                        v239 = v237 + 1 & 0xffffffff;
                        v6 = v239;
                        v240 = *(int16_t *)(2 * (((v217 >> v237 % 64) % 2 | (int64_t)&g160) + ((0x100000000 * (int64_t)v236 ^ -0x100000000) >> 32)) + v25);
                        v229 = v215;
                        v230 = v216;
                        v231 = v217;
                        if (v240 >= 0) {
                            // break (via goto) -> 0x3f3b7
                            goto lab_0x3f3b7;
                        }
                        // 0x3f32b
                        v236 = v240;
                    }
                }
            } else {
                // 0x3f2e9
                if (v235 >= 512 && (int32_t)(v235 / 512) <= (int32_t)v216) {
                    // break -> 0x3f3b7
                    break;
                }
            }
            int64_t v241; // 0x3e19c
            char v242; // 0x3e19c
            if (v2 > v215) {
                // 0x3f370
                v242 = *(char *)v215;
                v241 = v215 + 1;
            } else {
                // 0x3f349
                v242 = 0;
                v241 = v215;
                if ((a7 & 2) != 0) {
                    // 0x3f353
                    *(int32_t *)a1 = 26;
                    v19 = v99;
                    v18 = v98;
                    v15 = 1;
                    v17 = v207;
                    v14 = v214;
                    v13 = v211;
                    v10 = v215;
                    v11 = v216;
                    v12 = v217;
                    goto lab_0x3f72a;
                }
            }
            int64_t v243 = v216 + 8; // 0x3f37e
            int64_t v244 = v243 & 0xffffffff; // 0x3f37e
            int64_t v245 = (int64_t)v242 << v216 % 64 | v217; // 0x3f385
            v229 = v241;
            v230 = v244;
            v231 = v245;
            while ((int32_t)v243 < 15) {
                int64_t v246 = v245;
                int64_t v247 = v244;
                int64_t v248 = v241;
                v235 = *(int16_t *)(v232 + 2 * (v246 & (int64_t)(int32_t)&g39));
                if (v235 < 0) {
                    // 0x3f2fa
                    v238 = (int32_t)v247;
                    v236 = v235;
                    if (v238 >= 11) {
                        v237 = 10;
                        v239 = v237 + 1 & 0xffffffff;
                        v6 = v239;
                        v240 = *(int16_t *)(2 * (((v246 >> v237 % 64) % 2 | (int64_t)&g160) + ((0x100000000 * (int64_t)v236 ^ -0x100000000) >> 32)) + v25);
                        v229 = v248;
                        v230 = v247;
                        v231 = v246;
                        if (v240 >= 0) {
                            // break (via goto) -> 0x3f3b7
                            goto lab_0x3f3b7;
                        }
                        // 0x3f32b
                        v236 = v240;
                        while ((int32_t)v237 + 2 <= v238) {
                            // 0x3f305
                            v237 = v239;
                            v239 = v237 + 1 & 0xffffffff;
                            v6 = v239;
                            v240 = *(int16_t *)(2 * (((v246 >> v237 % 64) % 2 | (int64_t)&g160) + ((0x100000000 * (int64_t)v236 ^ -0x100000000) >> 32)) + v25);
                            v229 = v248;
                            v230 = v247;
                            v231 = v246;
                            if (v240 >= 0) {
                                // break (via goto) -> 0x3f3b7
                                goto lab_0x3f3b7;
                            }
                            // 0x3f32b
                            v236 = v240;
                        }
                    }
                } else {
                    // 0x3f2e9
                    v229 = v248;
                    v230 = v247;
                    v231 = v246;
                    if (v235 >= 512 && (int32_t)(v235 / 512) <= (int32_t)v247) {
                        // break -> 0x3f3b7
                        break;
                    }
                }
                if (v2 > v248) {
                    // 0x3f370
                    v242 = *(char *)v248;
                    v241 = v248 + 1;
                } else {
                    // 0x3f349
                    v242 = 0;
                    v241 = v248;
                    if ((a7 & 2) != 0) {
                        // 0x3f353
                        *(int32_t *)a1 = 26;
                        v19 = v99;
                        v18 = v98;
                        v15 = 1;
                        v17 = v207;
                        v14 = v214;
                        v13 = v211;
                        v10 = v248;
                        v11 = v247;
                        v12 = v246;
                        goto lab_0x3f72a;
                    }
                }
                // 0x3f37b
                v243 = v247 + 8;
                v244 = v243 & 0xffffffff;
                v245 = (int64_t)v242 << v247 % 64 | v246;
                v229 = v241;
                v230 = v244;
                v231 = v245;
            }
        }
    }
  lab_0x3f3b7:;
    int16_t v249 = *(int16_t *)(v232 + 2 * (v231 & (int64_t)(int32_t)&g39)); // 0x3f3bf
    int64_t v250 = v249; // 0x3f3bf
    int64_t v251 = 10; // 0x3f3cc
    int64_t v252; // 0x3e19c
    int64_t v253; // 0x3e19c
    if (v249 < 0) {
        int64_t v254 = v251 + 1 & 0xffffffff; // 0x3f3e4
        v6 = v254;
        uint16_t v255 = *(int16_t *)(2 * (((v231 >> v251 % 64) % 2 | (int64_t)&g160) + ((0x100000000 * v250 ^ -0x100000000) >> 32)) + v25); // 0x3f3fe
        int64_t v256 = v255; // 0x3f3fe
        v251 = v254;
        v252 = v254;
        v253 = v256;
        while (v255 < 0) {
            // 0x3f3e1
            v254 = v251 + 1 & 0xffffffff;
            v6 = v254;
            v255 = *(int16_t *)(2 * (((v231 >> v251 % 64) % 2 | (int64_t)&g160) + ((0x100000000 * v256 ^ -0x100000000) >> 32)) + v25);
            v256 = v255;
            v251 = v254;
            v252 = v254;
            v253 = v256;
        }
    } else {
        int64_t v257 = v249 / 512;
        v6 = v257;
        v252 = v257;
        v253 = v250 % 512;
    }
    int64_t v258 = v230 - v252; // 0x3f40b
    int64_t v259 = v258 & 0xffffffff; // 0x3f40b
    int64_t v260 = v231 >> v252 % 64;
    int64_t v261 = 4 * v253; // 0x3f418
    uint32_t v262 = *(int32_t *)(v261 + (int64_t)&zinflate_distanceExtraBits_at_584ee0); // 0x3f418
    int32_t v263 = *(int32_t *)(v261 + (int64_t)&zinflate_distanceStarts_at_584f60); // 0x3f422
    int64_t v264 = v262; // 0x3f427
    int32_t v265 = v263; // 0x3f430
    int64_t v266 = v229; // 0x3f430
    int64_t v267 = v259; // 0x3f430
    int64_t v268 = v260; // 0x3f430
    if (v262 != 0) {
        int64_t v269 = v229; // 0x3f435
        int64_t v270 = v259; // 0x3f435
        int64_t v271 = v260; // 0x3f435
        if (v262 > (int32_t)v258) {
            int64_t v272; // 0x3e19c
            char v273; // 0x3e19c
            if (v2 > v229) {
                // 0x3f472
                v273 = *(char *)v229;
                v272 = v229 + 1;
            } else {
                // 0x3f44b
                v273 = 0;
                v272 = v229;
                if ((a7 & 2) != 0) {
                    // 0x3f455
                    *(int32_t *)a1 = 27;
                    v19 = v263;
                    v18 = v98;
                    v15 = 1;
                    v17 = v207;
                    v14 = v214;
                    v13 = v264;
                    v10 = v229;
                    v11 = v259;
                    v12 = v260;
                    goto lab_0x3f72a;
                }
            }
            int64_t v274 = v259 + 8; // 0x3f480
            int64_t v275 = v274 & 0xffffffff; // 0x3f480
            int64_t v276 = (int64_t)v273 << v259 % 64 | v260; // 0x3f487
            v269 = v272;
            v270 = v275;
            v271 = v276;
            while (v262 > (int32_t)v274) {
                int64_t v277 = v272;
                int64_t v278 = v275;
                int64_t v279 = v276;
                if (v2 > v277) {
                    // 0x3f472
                    v273 = *(char *)v277;
                    v272 = v277 + 1;
                } else {
                    // 0x3f44b
                    v273 = 0;
                    v272 = v277;
                    if ((a7 & 2) != 0) {
                        // 0x3f455
                        *(int32_t *)a1 = 27;
                        v19 = v263;
                        v18 = v98;
                        v15 = 1;
                        v17 = v207;
                        v14 = v214;
                        v13 = v264;
                        v10 = v277;
                        v11 = v278;
                        v12 = v279;
                        goto lab_0x3f72a;
                    }
                }
                // 0x3f47d
                v274 = v278 + 8;
                v275 = v274 & 0xffffffff;
                v276 = (int64_t)v273 << v278 % 64 | v279;
                v269 = v272;
                v270 = v275;
                v271 = v276;
            }
        }
        // 0x3f48f
        v265 = ((int32_t)v271 & -1 - (-1 << v262 % 32)) + v263;
        v266 = v269;
        v267 = v270 - v264 & 0xffffffff;
        v268 = v271 >> v264 % 64;
    }
    int64_t v280 = v207 - a4; // 0x3f4ae
    int64_t v281 = v265; // 0x3f4b8
    v6 = v214;
    int64_t v282 = (v280 - v281 & v4) + a4; // 0x3f4f5
    if (v3 >= (v282 >= v207 ? v282 : v207) + v214) {
        int64_t v283 = v207;
        int64_t v284 = v282;
        int64_t v285 = v214 + 0xfffffffd; // 0x3f566
        int64_t v286 = v283 + 3; // 0x3f56c
        *(char *)v283 = *(char *)v284;
        *(char *)(v283 + 1) = *(char *)(v284 + 1);
        *(char *)(v283 + 2) = *(char *)(v284 + 2);
        int64_t v287 = v284 + 3; // 0x3f587
        v6 = v287;
        int32_t v288 = v285;
        int64_t v289 = v285 & 0xffffffff; // 0x3f58b
        while (v288 >= 3) {
            // 0x3f563
            v283 = v286;
            v284 = v287;
            v285 = v289 + 0xfffffffd;
            v286 = v283 + 3;
            *(char *)v283 = *(char *)v284;
            *(char *)(v283 + 1) = *(char *)(v284 + 1);
            *(char *)(v283 + 2) = *(char *)(v284 + 2);
            v287 = v284 + 3;
            v6 = v287;
            v288 = v285;
            v289 = v285 & 0xffffffff;
        }
        // 0x3f592
        if (v288 >= 1) {
            // 0x3f59a
            *(char *)v286 = *(char *)v287;
            if (v288 == 2) {
                // 0x3f5a7
                *(char *)(v283 + 4) = *(char *)(v284 + 4);
            }
        }
    } else {
        // 0x3f50d
        if (v214 != 0) {
            int64_t v290 = v214 + 0xffffffff & 0xffffffff;
            if (v3 <= v207) {
                // 0x3f51e
                *(int32_t *)a1 = 53;
                v19 = v265;
                v18 = v280;
                v15 = 2;
                v17 = v207;
                v14 = v290;
                v13 = v264;
                v10 = v266;
                v11 = v267;
                v12 = v268;
                goto lab_0x3f72a;
            }
            // 0x3f52f
            *(char *)v207 = *(char *)((v280 - v281 & v4) + a4);
            int64_t v291 = v290 + 0xffffffff & 0xffffffff; // 0x3f511
            int64_t v292 = v207 + 1; // 0x3f511
            int64_t v293 = v280 + 1; // 0x3f511
            while (v290 != 0) {
                int64_t v294 = v293;
                int64_t v295 = v292;
                v290 = v291;
                if (v3 <= v295) {
                    // 0x3f51e
                    *(int32_t *)a1 = 53;
                    v19 = v265;
                    v18 = v294;
                    v15 = 2;
                    v17 = v295;
                    v14 = v290;
                    v13 = v264;
                    v10 = v266;
                    v11 = v267;
                    v12 = v268;
                    goto lab_0x3f72a;
                }
                char v296 = *(char *)((v294 - v281 & v4) + a4); // 0x3f550
                *(char *)v295 = v296;
                v291 = v290 + 0xffffffff & 0xffffffff;
                v292 = v295 + 1;
                v293 = v294 + 1;
            }
        }
    }
    // 0x3ef8e
    goto lab_0x3ef8e_3;
  lab_0x3e8e0:;
    // 0x3e8e0
    int64_t v310; // 0x3e19c
    int64_t v311 = v310;
    *(char *)(a1 + 216 + v311) = 9;
    v310 = v311 + 1;
    if (v311 != 111) {
        goto lab_0x3e8e0;
    } else {
        // 0x3e8f3
        *(char *)(328 + a1) = 7;
    }
  lab_0x3f5b7_2:;
    int64_t v312 = v62;
    int64_t v313 = v60;
    int64_t v314 = v58;
    int64_t v315 = v64;
    int64_t v316 = v65;
    int64_t v317 = v66;
    int64_t v318 = v68;
    int32_t v319 = v70;
    int32_t v320 = v319; // 0x3f5bc
    int64_t v321 = v318; // 0x3f5bc
    int64_t v322 = v317; // 0x3f5bc
    int64_t v323 = v316; // 0x3f5bc
    int64_t v324 = v315; // 0x3f5bc
    int64_t v325 = v314; // 0x3f5bc
    int64_t v326 = v313; // 0x3f5bc
    int64_t v327 = v312; // 0x3f5bc
    int64_t v328; // 0x3e19c
    int64_t v329; // 0x3e19c
    int64_t v330; // 0x3e19c
    int64_t v331; // 0x3e19c
    int64_t v332; // 0x3e19c
    int64_t v333; // 0x3e19c
    int64_t v334; // 0x3e19c
    int64_t v335; // 0x3e19c
    char * v336; // 0x3e19c
    if (*v336 % 2 != 0) {
        // 0x3f5c2
        v335 = v316;
        v329 = v314;
        v331 = v313;
        v333 = v312;
        if (a7 % 2 == 0) {
            goto lab_0x3f714;
        } else {
            // 0x3f639
            v334 = 0;
            v328 = v314;
            v330 = v313 & 0xfffffff8;
            v332 = v312 >> v313 % 8;
            goto lab_0x3f648;
        }
    }
    goto lab_0x3e5c0;
  lab_0x3f72a:
    // 0x3f72a
    *v22 = (int32_t)v13;
    int64_t v671 = v17 - a5; // 0x3f73b
    *v30 = (int32_t)v11;
    *v29 = v19;
    *v20 = v12;
    *v21 = (int32_t)v14;
    *v23 = v18;
    *(int64_t *)a3 = v10 - a2;
    *(int64_t *)a6 = v671;
    v16 = v15;
    if ((a7 & 9) != 0 && v15 != 0xffffffff) {
        int32_t * v672 = (int32_t *)(a1 + 28); // 0x3f78d
        uint32_t v673 = *v672; // 0x3f78d
        int64_t v674 = v673 % 0x10000; // 0x3f79c
        int64_t v675 = v673 / 0x10000; // 0x3f79f
        v6 = v675;
        int64_t v676 = v675; // 0x3f7a8
        int64_t v677 = v674; // 0x3f7a8
        if (v671 != 0) {
            int64_t v678 = v671;
            uint64_t v679 = v671 % (int64_t)&g5;
            int64_t v680 = v675; // 0x3f7c3
            int64_t v681 = v674; // 0x3f7c3
            int64_t v682 = a5; // 0x3f7c3
            int64_t v683; // 0x3e19c
            int64_t v684; // 0x3e19c
            int64_t v685; // 0x3f7c9
            int64_t v686; // 0x3f7cd
            int64_t v687; // 0x3f7d4
            int64_t v688; // 0x3f7df
            int64_t v689; // 0x3f7e8
            int64_t v690; // 0x3f7f1
            int64_t v691; // 0x3f7fa
            int64_t v692; // 0x3f803
            int64_t v693; // 0x3f80c
            int64_t v694; // 0x3f80c
            int64_t v695; // 0x3f80e
            if (v679 > 7) {
                v685 = a5 + 8;
                v686 = v674 + (int64_t)*(char *)a5;
                v687 = v686 + (int64_t)*(char *)(a5 + 1);
                v688 = v687 + (int64_t)*(char *)(a5 + 2);
                v689 = v688 + (int64_t)*(char *)(a5 + 3);
                v690 = v689 + (int64_t)*(char *)(a5 + 4);
                v691 = v690 + (int64_t)*(char *)(a5 + 5);
                v692 = v691 + (int64_t)*(char *)(a5 + 6);
                v693 = v692 + (int64_t)*(char *)(a5 + 7);
                v694 = v693 & 0xffffffff;
                v695 = v686 + v675 + v687 + v688 + v689 + v690 + v691 + v692 + v693 & 0xffffffff;
                v6 = v695;
                v680 = v695;
                v681 = v694;
                v682 = v685;
                v683 = v695;
                v684 = v685;
                while ((7 - a5 + v685 & 0xffffffff) < v679) {
                    // 0x3f7c5
                    v685 = v684 + 8;
                    v686 = v694 + (int64_t)*(char *)v684;
                    v687 = v686 + (int64_t)*(char *)(v684 + 1);
                    v688 = v687 + (int64_t)*(char *)(v684 + 2);
                    v689 = v688 + (int64_t)*(char *)(v684 + 3);
                    v690 = v689 + (int64_t)*(char *)(v684 + 4);
                    v691 = v690 + (int64_t)*(char *)(v684 + 5);
                    v692 = v691 + (int64_t)*(char *)(v684 + 6);
                    v693 = v692 + (int64_t)*(char *)(v684 + 7);
                    v694 = v693 & 0xffffffff;
                    v695 = v686 + v683 + v687 + v688 + v689 + v690 + v691 + v692 + v693 & 0xffffffff;
                    v6 = v695;
                    v680 = v695;
                    v681 = v694;
                    v682 = v685;
                    v683 = v695;
                    v684 = v685;
                }
            }
            int64_t v696 = v680; // 0x3f81a
            int64_t v697 = v682; // 0x3f81a
            int64_t v698 = v681; // 0x3f81a
            int64_t v699 = v680; // 0x3f81a
            int64_t v700 = v681; // 0x3f81a
            int64_t v701 = v682; // 0x3f81a
            int64_t v702; // 0x3f81c
            int64_t v703; // 0x3f824
            int64_t v704; // 0x3f824
            int64_t v705; // 0x3f826
            if ((v682 - a5 & 0xffffffff) < v679) {
                v702 = v697 + 1;
                v703 = v698 + (int64_t)*(char *)v697;
                v704 = v703 & 0xffffffff;
                v705 = v703 + v696 & 0xffffffff;
                v6 = v705;
                v696 = v705;
                v697 = v702;
                v699 = v705;
                v700 = v704;
                v701 = v702;
                while ((v702 - a5 & 0xffffffff) < v679) {
                    // 0x3f81c
                    v702 = v697 + 1;
                    v703 = v704 + (int64_t)*(char *)v697;
                    v704 = v703 & 0xffffffff;
                    v705 = v703 + v696 & 0xffffffff;
                    v6 = v705;
                    v696 = v705;
                    v697 = v702;
                    v699 = v705;
                    v700 = v704;
                    v701 = v702;
                }
            }
            // 0x3f82a
            v678 -= v679;
            int64_t v706 = (v700 & 0xffffffff) % ((int64_t)&g171 & 0xffffffff); // 0x3f831
            int64_t v707 = (v699 & 0xffffffff) % ((int64_t)&g171 & 0xffffffff); // 0x3f845
            v6 = v707;
            v676 = v707;
            v677 = v706;
            while (v678 != 0) {
                int64_t v708 = v701;
                v679 = (int64_t)&g5;
                int64_t v709 = 7 - v708; // 0x3f7b9
                v680 = v707;
                v681 = v706;
                v682 = v708;
                v683 = v707;
                v684 = v708;
                int64_t v710 = v706; // 0x3f7c3
                if (v679 > 7) {
                    v685 = v684 + 8;
                    v686 = v710 + (int64_t)*(char *)v684;
                    v687 = v686 + (int64_t)*(char *)(v684 + 1);
                    v688 = v687 + (int64_t)*(char *)(v684 + 2);
                    v689 = v688 + (int64_t)*(char *)(v684 + 3);
                    v690 = v689 + (int64_t)*(char *)(v684 + 4);
                    v691 = v690 + (int64_t)*(char *)(v684 + 5);
                    v692 = v691 + (int64_t)*(char *)(v684 + 6);
                    v693 = v692 + (int64_t)*(char *)(v684 + 7);
                    v694 = v693 & 0xffffffff;
                    v695 = v686 + v683 + v687 + v688 + v689 + v690 + v691 + v692 + v693 & 0xffffffff;
                    v6 = v695;
                    v680 = v695;
                    v681 = v694;
                    v682 = v685;
                    v683 = v695;
                    v684 = v685;
                    while ((v709 + v685 & 0xffffffff) < v679) {
                        // 0x3f7c5
                        v685 = v684 + 8;
                        v686 = v694 + (int64_t)*(char *)v684;
                        v687 = v686 + (int64_t)*(char *)(v684 + 1);
                        v688 = v687 + (int64_t)*(char *)(v684 + 2);
                        v689 = v688 + (int64_t)*(char *)(v684 + 3);
                        v690 = v689 + (int64_t)*(char *)(v684 + 4);
                        v691 = v690 + (int64_t)*(char *)(v684 + 5);
                        v692 = v691 + (int64_t)*(char *)(v684 + 6);
                        v693 = v692 + (int64_t)*(char *)(v684 + 7);
                        v694 = v693 & 0xffffffff;
                        v695 = v686 + v683 + v687 + v688 + v689 + v690 + v691 + v692 + v693 & 0xffffffff;
                        v6 = v695;
                        v680 = v695;
                        v681 = v694;
                        v682 = v685;
                        v683 = v695;
                        v684 = v685;
                    }
                }
                // 0x3f812
                v696 = v680;
                v697 = v682;
                v698 = v681;
                v699 = v680;
                v700 = v681;
                v701 = v682;
                if ((v682 - v708 & 0xffffffff) < v679) {
                    v702 = v697 + 1;
                    v703 = v698 + (int64_t)*(char *)v697;
                    v704 = v703 & 0xffffffff;
                    v705 = v703 + v696 & 0xffffffff;
                    v6 = v705;
                    v696 = v705;
                    v697 = v702;
                    v699 = v705;
                    v700 = v704;
                    v701 = v702;
                    while ((v702 - v708 & 0xffffffff) < v679) {
                        // 0x3f81c
                        v702 = v697 + 1;
                        v703 = v704 + (int64_t)*(char *)v697;
                        v704 = v703 & 0xffffffff;
                        v705 = v703 + v696 & 0xffffffff;
                        v6 = v705;
                        v696 = v705;
                        v697 = v702;
                        v699 = v705;
                        v700 = v704;
                        v701 = v702;
                    }
                }
                // 0x3f82a
                v678 -= v679;
                v706 = (v700 & 0xffffffff) % ((int64_t)&g171 & 0xffffffff);
                v707 = (v699 & 0xffffffff) % ((int64_t)&g171 & 0xffffffff);
                v6 = v707;
                v676 = v707;
                v677 = v706;
            }
        }
        int32_t v711 = v677 + 0x10000 * v676; // 0x3f857
        *v672 = v711;
        v16 = v15;
        if (a7 % 2 != 0 && v15 == 0) {
            // 0x3f867
            v16 = *(int32_t *)(a1 + 16) != v711 ? 0xfffffffe : v15;
        }
    }
    goto lab_0x3f873;
  lab_0x3f873:;
    int64_t result = v16 & 0xffffffff; // 0x3f886
    if (v1 != __readfsqword(40)) {
        // 0x3f888
        __stack_chk_fail();
        result = (int64_t)&g172;
    }
    // 0x3f88d
    return result;
  lab_0x3e5b3:;
    int32_t v712 = v49; // 0x3e5bd
    int64_t v713 = v47; // 0x3e5bd
    int64_t v714 = v45; // 0x3e5bd
    int64_t v715 = v43; // 0x3e5bd
    int64_t v716 = v41; // 0x3e5bd
    int64_t v717 = v50; // 0x3e5bd
    int64_t v718 = v37 + 8 & 0xffffffff; // 0x3e5bd
    int64_t v719 = (int64_t)v51 << v37 % 64 | v35; // 0x3e5bd
    goto lab_0x3e5c0_2;
  lab_0x3e5c0_2:;
    // 0x3e5c0
    int64_t v720; // bp-328, 0x3e19c
    int64_t v721 = (int64_t)&v720; // 0x3e1af
    int64_t v722 = a1 + 20;
    int32_t * v346 = (int32_t *)v722;
    int32_t * v348 = (int32_t *)(a1 + 24);
    int64_t v633 = a1 + (int64_t)&g19;
    int16_t * v639 = (int16_t *)v633;
    bool v723; // 0x3e19c
    v71 = v723 ? -1 : 1;
    int64_t v416 = a1 + 72;
    int64_t v384 = a1 + 44;
    int64_t * v412 = (int64_t *)v384;
    int64_t v724 = a1 + (int64_t)&g166;
    int128_t * v413 = (int128_t *)v724;
    int64_t v404 = a1 + (int64_t)&g10;
    char * v385 = (char *)v404;
    int32_t * v386 = (int32_t *)(a1 + 52);
    v81 = a1 + 360;
    int64_t v427 = v721 + 132;
    int64_t v725; // bp-124, 0x3e19c
    int64_t v433 = 0x100000000 * (int64_t)&v725 >> 32;
    int64_t v476 = v721 + 196;
    int32_t * v592 = (int32_t *)v384;
    int32_t * v593 = (int32_t *)(a1 + 48);
    int64_t v594 = a1 + (int64_t)&g11;
    int64_t v595 = a1 + (int64_t)&g21;
    char * v597 = (char *)v595;
    char * v596 = (char *)v416;
    char * v598 = (char *)v724;
    v232 = a1 + (int64_t)&g168;
    v336 = (char *)v722;
    v320 = v712;
    v321 = v713;
    v322 = v714;
    v323 = v715;
    v324 = v716;
    v325 = v717;
    v326 = v718;
    v327 = v719;
    int64_t v339; // 0x3e19c
    int64_t v340; // 0x3e19c
    int64_t v341; // 0x3e19c
    int32_t v342; // 0x3e19c
    int64_t v344; // 0x3e5cd
    int64_t v349; // 0x3e5c9
    while (true) {
      lab_0x3e5c0:;
        uint64_t v337 = v327;
        int64_t v338 = v326;
        v339 = v325;
        v63 = v324;
        v340 = v323;
        v341 = v322;
        v67 = v321;
        v342 = v320;
        v48 = v342;
        v46 = v67;
        v44 = v341;
        v42 = v340;
        v40 = v63;
        v38 = v339;
        v36 = v338;
        v34 = v337;
        if ((int32_t)v338 < 3) {
            goto lab_0x3e56d;
        }
        uint64_t v343 = v338 + 0xfffffffd; // 0x3e5c9
        v344 = v337 / 8;
        uint64_t v345 = v337 % 8; // 0x3e5d1
        *v346 = (int32_t)v345;
        int32_t v347 = v345 / 2; // 0x3e5dc
        *v348 = v347;
        if (v345 >= 2) {
            // 0x3e885
            v349 = v343 & 0xffffffff;
            if (v347 == 3) {
                // break -> 0x3e894
                break;
            }
            int64_t v350 = v339; // 0x3e8a2
            int64_t v351 = v349; // 0x3e8a2
            int64_t v352 = v344; // 0x3e8a2
            int64_t v353; // 0x3e19c
            int64_t v354; // 0x3e19c
            int64_t v355; // 0x3e19c
            int64_t v356; // 0x3e19c
            if (v347 != 1) {
                int64_t v357 = 0;
                char * v358 = (char *)(v357 + (int64_t)&g77); // 0x3e927
                uint32_t v359 = (int32_t)*v358;
                int64_t v360 = v350; // 0x3e92e
                int64_t v361 = v351; // 0x3e92e
                int64_t v362 = v352; // 0x3e92e
                int64_t v363 = v350; // 0x3e92e
                int64_t v364 = v351; // 0x3e92e
                int64_t v365 = v352; // 0x3e92e
                int64_t v366; // 0x3e19c
                int64_t v367; // 0x3e19c
                int64_t v368; // 0x3e19c
                int64_t v369; // 0x3e19c
                char v370; // 0x3e19c
                int64_t v371; // 0x3e979
                int64_t v372; // 0x3e979
                int64_t v373; // 0x3e987
                if (v359 > (int32_t)v351) {
                    v369 = v362;
                    v368 = v361;
                    v366 = v360;
                    if (v2 > v366) {
                        // 0x3e96b
                        v370 = *(char *)v366;
                        v367 = v366 + 1;
                    } else {
                        // 0x3e944
                        v370 = 0;
                        v367 = v366;
                        if ((a7 & 2) != 0) {
                            // 0x3e94e
                            *(int32_t *)a1 = 11;
                            v19 = v342;
                            v18 = v67;
                            v15 = 1;
                            v17 = v341;
                            v14 = v357;
                            v13 = v63;
                            v10 = v366;
                            v11 = v368;
                            v12 = v369;
                            goto lab_0x3f72a;
                        }
                    }
                    // 0x3e976
                    v371 = v368 + 8;
                    v372 = v371 & 0xffffffff;
                    v373 = (int64_t)v370 << v368 % 64 | v369;
                    v363 = v367;
                    v364 = v372;
                    v365 = v373;
                    while ((int32_t)v371 < v359) {
                        // 0x3e930
                        v369 = v373;
                        v368 = v372;
                        v366 = v367;
                        if (v2 > v366) {
                            // 0x3e96b
                            v370 = *(char *)v366;
                            v367 = v366 + 1;
                        } else {
                            // 0x3e944
                            v370 = 0;
                            v367 = v366;
                            if ((a7 & 2) != 0) {
                                // 0x3e94e
                                *(int32_t *)a1 = 11;
                                v19 = v342;
                                v18 = v67;
                                v15 = 1;
                                v17 = v341;
                                v14 = v357;
                                v13 = v63;
                                v10 = v366;
                                v11 = v368;
                                v12 = v369;
                                goto lab_0x3f72a;
                            }
                        }
                        // 0x3e976
                        v371 = v368 + 8;
                        v372 = v371 & 0xffffffff;
                        v373 = (int64_t)v370 << v368 % 64 | v369;
                        v363 = v367;
                        v364 = v372;
                        v365 = v373;
                    }
                }
                int64_t v374 = v363;
                v6 = v357;
                unsigned char v375 = *v358; // 0x3e9a0
                unsigned char v376 = v375 % 32;
                int64_t v377 = 1; // 0x3e9ae
                if (v376 != 0) {
                    v377 = 1 << (int32_t)v376;
                }
                int64_t v378 = v357 + 1; // 0x3e99e
                uint64_t v379 = (int64_t)v375; // 0x3e9a9
                int64_t v380 = v364 - v379 & 0xffffffff; // 0x3e9ab
                int64_t v381 = v365 >> v379 % 64;
                int64_t v382 = 4 * v357; // 0x3e9bf
                int32_t v383 = *(int32_t *)(v382 + (int64_t)&g79); // 0x3e9bf
                *(int32_t *)(v384 + v382) = v383 + (int32_t)(v377 + 0xffffffff & v365);
                v350 = v374;
                v351 = v380;
                v352 = v381;
                while ((int32_t)v378 < 3) {
                    // 0x3e91e
                    v357 = v378 & 0xffffffff;
                    v358 = (char *)(v357 + (int64_t)&g77);
                    v359 = (int32_t)*v358;
                    v360 = v350;
                    v361 = v351;
                    v362 = v352;
                    v363 = v350;
                    v364 = v351;
                    v365 = v352;
                    if (v359 > (int32_t)v351) {
                        v369 = v362;
                        v368 = v361;
                        v366 = v360;
                        if (v2 > v366) {
                            // 0x3e96b
                            v370 = *(char *)v366;
                            v367 = v366 + 1;
                        } else {
                            // 0x3e944
                            v370 = 0;
                            v367 = v366;
                            if ((a7 & 2) != 0) {
                                // 0x3e94e
                                *(int32_t *)a1 = 11;
                                v19 = v342;
                                v18 = v67;
                                v15 = 1;
                                v17 = v341;
                                v14 = v357;
                                v13 = v63;
                                v10 = v366;
                                v11 = v368;
                                v12 = v369;
                                goto lab_0x3f72a;
                            }
                        }
                        // 0x3e976
                        v371 = v368 + 8;
                        v372 = v371 & 0xffffffff;
                        v373 = (int64_t)v370 << v368 % 64 | v369;
                        v363 = v367;
                        v364 = v372;
                        v365 = v373;
                        while ((int32_t)v371 < v359) {
                            // 0x3e930
                            v369 = v373;
                            v368 = v372;
                            v366 = v367;
                            if (v2 > v366) {
                                // 0x3e96b
                                v370 = *(char *)v366;
                                v367 = v366 + 1;
                            } else {
                                // 0x3e944
                                v370 = 0;
                                v367 = v366;
                                if ((a7 & 2) != 0) {
                                    // 0x3e94e
                                    *(int32_t *)a1 = 11;
                                    v19 = v342;
                                    v18 = v67;
                                    v15 = 1;
                                    v17 = v341;
                                    v14 = v357;
                                    v13 = v63;
                                    v10 = v366;
                                    v11 = v368;
                                    v12 = v369;
                                    goto lab_0x3f72a;
                                }
                            }
                            // 0x3e976
                            v371 = v368 + 8;
                            v372 = v371 & 0xffffffff;
                            v373 = (int64_t)v370 << v368 % 64 | v369;
                            v363 = v367;
                            v364 = v372;
                            v365 = v373;
                        }
                    }
                    // 0x3e995
                    v374 = v363;
                    v6 = v357;
                    v375 = *v358;
                    v376 = v375 % 32;
                    v377 = 1;
                    if (v376 != 0) {
                        v377 = 1 << (int32_t)v376;
                    }
                    v378 = v357 + 1;
                    v379 = (int64_t)v375;
                    v380 = v364 - v379 & 0xffffffff;
                    v381 = v365 >> v379 % 64;
                    v382 = 4 * v357;
                    v383 = *(int32_t *)(v382 + (int64_t)&g79);
                    *(int32_t *)(v384 + v382) = v383 + (int32_t)(v377 + 0xffffffff & v365);
                    v350 = v374;
                    v351 = v380;
                    v352 = v381;
                }
                // 0x3e9d0
                __asm_rep_stosd_memset(v385, 0, 72);
                v356 = 0;
                v353 = v374;
                v354 = v380;
                v355 = v381;
                if (*v386 != 0) {
                    int64_t v387 = 0;
                    int64_t v388 = v374; // 0x3e9f3
                    int64_t v389 = v380; // 0x3e9f3
                    int64_t v390 = v381; // 0x3e9f3
                    int64_t v391; // 0x3e19c
                    int64_t v392; // 0x3e19c
                    int64_t v393; // 0x3e19c
                    int64_t v394; // 0x3e19c
                    char v395; // 0x3e19c
                    int64_t v396; // 0x3ea3e
                    int64_t v397; // 0x3ea3e
                    int64_t v398; // 0x3ea45
                    if (v380 < 3) {
                        if (v2 > v374) {
                            // 0x3ea30
                            v395 = *(char *)v374;
                            v392 = v374 + 1;
                        } else {
                            // 0x3ea09
                            v395 = 0;
                            v392 = v374;
                            if ((a7 & 2) != 0) {
                                // 0x3ea13
                                *(int32_t *)a1 = 14;
                                v19 = v342;
                                v18 = v67;
                                v15 = 1;
                                v17 = v341;
                                v14 = v387;
                                v13 = v63;
                                v10 = v374;
                                v11 = v380;
                                v12 = v381;
                                goto lab_0x3f72a;
                            }
                        }
                        // 0x3ea3b
                        v396 = v380 + 8;
                        v397 = v396 & 0xffffffff;
                        v398 = (int64_t)v395 << v380 % 64 | v381;
                        v388 = v392;
                        v389 = v397;
                        v390 = v398;
                        while ((int32_t)v396 < 3) {
                            // 0x3e9f5
                            v391 = v392;
                            v393 = v397;
                            v394 = v398;
                            if (v2 > v391) {
                                // 0x3ea30
                                v395 = *(char *)v391;
                                v392 = v391 + 1;
                            } else {
                                // 0x3ea09
                                v395 = 0;
                                v392 = v391;
                                if ((a7 & 2) != 0) {
                                    // 0x3ea13
                                    *(int32_t *)a1 = 14;
                                    v19 = v342;
                                    v18 = v67;
                                    v15 = 1;
                                    v17 = v341;
                                    v14 = v387;
                                    v13 = v63;
                                    v10 = v391;
                                    v11 = v393;
                                    v12 = v394;
                                    goto lab_0x3f72a;
                                }
                            }
                            // 0x3ea3b
                            v396 = v393 + 8;
                            v397 = v396 & 0xffffffff;
                            v398 = (int64_t)v395 << v393 % 64 | v394;
                            v388 = v392;
                            v389 = v397;
                            v390 = v398;
                        }
                    }
                    int64_t v399 = v390 / 8; // 0x3ea59
                    int64_t v400 = v389 + 0xfffffffd & 0xffffffff; // 0x3ea5d
                    unsigned char v401 = *(char *)(v387 + (int64_t)&g80); // 0x3ea61
                    int64_t v402 = v387 + 1; // 0x3ea65
                    int64_t v403 = v402 & 0xffffffff; // 0x3ea65
                    *(char *)(v404 + (int64_t)v401) = (char)v390 % 8;
                    int64_t v405 = v399; // 0x3e9e9
                    int64_t v406 = v400; // 0x3e9e9
                    int64_t v407 = v388; // 0x3e9e9
                    v356 = v403;
                    v353 = v388;
                    v354 = v400;
                    v355 = v399;
                    while (*v386 > (int32_t)v402) {
                        // 0x3e9ef
                        v387 = v403;
                        int64_t v408 = v405; // 0x3e9f3
                        int64_t v409 = v406; // 0x3e9f3
                        int64_t v410 = v407; // 0x3e9f3
                        v388 = v407;
                        v389 = v406;
                        v390 = v405;
                        if (v406 < 3) {
                            v391 = v410;
                            v393 = v409;
                            v394 = v408;
                            if (v2 > v391) {
                                // 0x3ea30
                                v395 = *(char *)v391;
                                v392 = v391 + 1;
                            } else {
                                // 0x3ea09
                                v395 = 0;
                                v392 = v391;
                                if ((a7 & 2) != 0) {
                                    // 0x3ea13
                                    *(int32_t *)a1 = 14;
                                    v19 = v342;
                                    v18 = v67;
                                    v15 = 1;
                                    v17 = v341;
                                    v14 = v387;
                                    v13 = v63;
                                    v10 = v391;
                                    v11 = v393;
                                    v12 = v394;
                                    goto lab_0x3f72a;
                                }
                            }
                            // 0x3ea3b
                            v396 = v393 + 8;
                            v397 = v396 & 0xffffffff;
                            v398 = (int64_t)v395 << v393 % 64 | v394;
                            v388 = v392;
                            v389 = v397;
                            v390 = v398;
                            while ((int32_t)v396 < 3) {
                                // 0x3e9f5
                                v391 = v392;
                                v393 = v397;
                                v394 = v398;
                                if (v2 > v391) {
                                    // 0x3ea30
                                    v395 = *(char *)v391;
                                    v392 = v391 + 1;
                                } else {
                                    // 0x3ea09
                                    v395 = 0;
                                    v392 = v391;
                                    if ((a7 & 2) != 0) {
                                        // 0x3ea13
                                        *(int32_t *)a1 = 14;
                                        v19 = v342;
                                        v18 = v67;
                                        v15 = 1;
                                        v17 = v341;
                                        v14 = v387;
                                        v13 = v63;
                                        v10 = v391;
                                        v11 = v393;
                                        v12 = v394;
                                        goto lab_0x3f72a;
                                    }
                                }
                                // 0x3ea3b
                                v396 = v393 + 8;
                                v397 = v396 & 0xffffffff;
                                v398 = (int64_t)v395 << v393 % 64 | v394;
                                v388 = v392;
                                v389 = v397;
                                v390 = v398;
                            }
                        }
                        // 0x3ea4a
                        v399 = v390 / 8;
                        v400 = v389 + 0xfffffffd & 0xffffffff;
                        v401 = *(char *)(v387 + (int64_t)&g80);
                        v402 = v387 + 1;
                        v403 = v402 & 0xffffffff;
                        *(char *)(v404 + (int64_t)v401) = (char)v390 % 8;
                        v405 = v399;
                        v406 = v400;
                        v407 = v388;
                        v356 = v403;
                        v353 = v388;
                        v354 = v400;
                        v355 = v399;
                    }
                }
                // 0x3ea74
                *v386 = 19;
            } else {
                int128_t v411 = __asm_movaps(g82); // 0x3e8a4
                *v412 = 0x2000000120;
                __asm_movups(*v413, v411);
                __asm_movups(*(int128_t *)(a1 + (int64_t)&g167), v411);
                int64_t v414 = 0; // 0x3e8c7
                while (true) {
                    int64_t v415 = v414;
                    *(char *)(v416 + v415) = 8;
                    v414 = v415 + 1;
                    v310 = 0;
                    if (v415 == 143) {
                        goto lab_0x3e8e0;
                    }
                }
            }
            uint32_t v417 = *v348;
            if (v417 >= 0) {
                int64_t v418 = v417;
                int64_t v419 = v418 * (int64_t)&g165; // 0x3ea9d
                int64_t v420; // bp-196, 0x3e19c
                __asm_rep_stosd_memset((char *)&v420, 0, 16);
                __asm_rep_stosd_memset((char *)(v419 + v81), 0, (int64_t)&g12);
                int64_t v421 = v419 + a1;
                __asm_rep_stosd_memset((char *)(v421 + (int64_t)&g153), 0, 288);
                uint32_t v422 = *v348; // 0x3eac4
                uint32_t v423 = *(int32_t *)(4 * (int64_t)v422 + v384); // 0x3eacc
                unsigned char v424; // 0x3eaeb
                int64_t v425; // 0x3eaf0
                int32_t * v426; // 0x3eaf3
                if (v423 != 0) {
                    // 0x3eae6
                    v425 = 0;
                    v424 = *(char *)(v421 + 72 + v425);
                    v425++;
                    v426 = (int32_t *)(v427 + 4 * (int64_t)v424);
                    *v426 = *v426 + 1;
                    while (v425 != (int64_t)v423) {
                        // 0x3eae6
                        v424 = *(char *)(v421 + 72 + v425);
                        v425++;
                        v426 = (int32_t *)(v427 + 4 * (int64_t)v424);
                        *v426 = *v426 + 1;
                    }
                }
                int64_t v428 = 0;
                int64_t v429; // bp-192, 0x3e19c
                int32_t v430 = *(int32_t *)(v428 + (int64_t)&v429); // 0x3eb29
                int32_t v431 = v430; // 0x3eb2c
                int32_t v432 = 2 * v430; // 0x3eb37
                *(int32_t *)(v428 + v433) = v432;
                int32_t v434 = v431; // 0x3eb44
                int32_t v435 = v432; // 0x3eb44
                int64_t v436 = v428 + 4; // 0x3eb44
                while (v428 != 56) {
                    // 0x3eb29
                    v428 = v436;
                    v430 = *(int32_t *)(v428 + (int64_t)&v429);
                    v431 = v430 + v434;
                    v432 = 2 * (v430 + v435);
                    *(int32_t *)(v428 + v433) = v432;
                    v434 = v431;
                    v435 = v432;
                    v436 = v428 + 4;
                }
                if (v431 >= 2 && v432 != (int32_t)&g2) {
                    // 0x3eb5e
                    *(int32_t *)a1 = 35;
                    v19 = v342;
                    v18 = v67;
                    v15 = 0xffffffff;
                    v17 = v341;
                    v14 = v356;
                    v13 = v63;
                    v10 = v353;
                    v11 = v354;
                    v12 = v355;
                    goto lab_0x3f72a;
                }
                int64_t v437; // 0x3e19c
                int64_t v438; // 0x3e19c
                int64_t v439; // 0x3e19c
                int64_t v440; // 0x3e19c
                int64_t v441; // 0x3e19c
                int64_t v442; // 0x3e19c
                int64_t v443; // 0x3e19c
                int64_t v444; // 0x3e19c
                int64_t v445; // 0x3e19c
                int64_t v446; // 0x3e19c
                int64_t v447; // 0x3e19c
                int64_t v448; // 0x3e19c
                int64_t v449; // 0x3e19c
                int64_t v450; // bp-1, 0x3e19c
                int32_t v451; // 0x3e19c
                int64_t v452; // 0x3eb6a
                int64_t v453; // 0x3e19c
                int64_t v454; // 0x3e19c
                int64_t v455; // 0x3eba3
                unsigned char v456; // 0x3eba8
                int32_t v457; // 0x3ecb9
                int64_t v458; // 0x3eba8
                uint32_t v459; // 0x3ebaf
                int32_t * v460; // 0x3ebc2
                uint32_t v461; // 0x3ebc2
                int64_t v462; // 0x3ebd5
                int64_t v463; // 0x3ebe1
                int32_t v464; // 0x3ebe3
                int16_t * v465; // 0x3ec3f
                int16_t v466; // 0x3ec3f
                int16_t v467; // 0x3ec24
                uint64_t v468; // 0x3ec5b
                int64_t v469; // 0x3ec6e
                int64_t v470; // 0x3ec06
                int16_t * v471; // 0x3ec7f
                int16_t v472; // 0x3ec7f
                int64_t v473; // 0x3ec9e
                uint64_t v474; // 0x3ec5e
                int64_t v475; // 0x3ec6e
                if (v423 != 0) {
                    // 0x3eb9e
                    v452 = v418 * (int64_t)&g116;
                    v453 = v452 + 176;
                    v454 = v452 + (int64_t)&g57;
                    v451 = 0;
                    v442 = (int64_t)&v450;
                    v455 = v451;
                    v6 = v455;
                    v456 = *(char *)(v421 + 72 + v455);
                    v449 = v442;
                    if (v456 != 0) {
                        // 0x3ebba
                        v458 = v456;
                        v459 = (int32_t)v456;
                        v6 = 0;
                        v460 = (int32_t *)(v476 + 4 * v458);
                        v461 = *v460;
                        *v460 = v461 + 1;
                        v464 = v456;
                        v439 = v461;
                        v462 = 2 * v6;
                        v463 = v439 % 2 | v462 & 0xfffffffe;
                        v464--;
                        v439 /= 2;
                        while (v464 != 0) {
                            // 0x3ebd5
                            v462 = 2 * v463;
                            v463 = v439 % 2 | v462 & 0xfffffffe;
                            v464--;
                            v439 /= 2;
                        }
                        // 0x3ebeb
                        v6 = v463;
                        if (v456 < 11) {
                            // 0x3ebf0
                            v449 = v442;
                            if ((int32_t)v463 <= (int32_t)&g39) {
                                // 0x3ec12
                                v467 = 512 * v459 | v451;
                                v6 = v463 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                *(int16_t *)(2 * (v453 + (v463 & 0xffffffff)) + v25) = v467;
                                v470 = v6;
                                v449 = v442;
                                while ((int32_t)v470 <= (int32_t)&g39) {
                                    // 0x3ec12
                                    v6 = v470 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                    *(int16_t *)(2 * (v453 + (v470 & 0xffffffff)) + v25) = v467;
                                    v470 = v6;
                                    v449 = v442;
                                }
                            }
                        } else {
                            // 0x3ec2c
                            v465 = (int16_t *)(2 * ((v462 & (int64_t)(int32_t)&g39) + v452) + v81);
                            v466 = *v465;
                            v443 = v442;
                            v438 = v463;
                            v440 = v466;
                            if (v466 == 0) {
                                // 0x3ec4c
                                *v465 = (int16_t)v442;
                                v443 = v442 + 0xfffffffe & 0xffffffff;
                                v438 = v6;
                                v440 = v442 & 0xffffffff;
                            }
                            // 0x3ec59
                            v444 = v443;
                            v468 = v438 / 1024;
                            v469 = 0x100000000 * ((v440 ^ 0xffffffff) + v468 % 2) / 0x100000000;
                            v448 = v444;
                            v437 = v469;
                            if (v456 != 11) {
                                // 0x3ec73
                                v474 = v468 % 0x400000;
                                v473 = v458;
                                v445 = v444;
                                v471 = (int16_t *)(a1 + (int64_t)&g153 + 2 * (v469 + v452));
                                v472 = *v471;
                                v446 = v445;
                                v441 = v472;
                                if (v472 == 0) {
                                    // 0x3ec91
                                    *v471 = (int16_t)v445;
                                    v446 = v445 + 0xfffffffe & 0xffffffff;
                                    v441 = v445 & 0xffffffff;
                                }
                                // 0x3ec9e
                                v447 = v446;
                                v473 = v473 + 0xffffffff & 0xffffffff;
                                v474 /= 2;
                                v475 = 0x100000000 * ((v441 ^ 0xffffffff) + v474 % 2) / 0x100000000;
                                v448 = v447;
                                v437 = v475;
                                while (v473 != 11) {
                                    // 0x3ec73
                                    v445 = v447;
                                    v471 = (int16_t *)(a1 + (int64_t)&g153 + 2 * (v475 + v452));
                                    v472 = *v471;
                                    v446 = v445;
                                    v441 = v472;
                                    if (v472 == 0) {
                                        // 0x3ec91
                                        *v471 = (int16_t)v445;
                                        v446 = v445 + 0xfffffffe & 0xffffffff;
                                        v441 = v445 & 0xffffffff;
                                    }
                                    // 0x3ec9e
                                    v447 = v446;
                                    v473 = v473 + 0xffffffff & 0xffffffff;
                                    v474 /= 2;
                                    v475 = 0x100000000 * ((v441 ^ 0xffffffff) + v474 % 2) / 0x100000000;
                                    v448 = v447;
                                    v437 = v475;
                                }
                            }
                            // 0x3eca2
                            *(int16_t *)(2 * (v454 + v437) + v25) = (int16_t)v451;
                            v449 = v448;
                        }
                    }
                    // 0x3ecb9
                    v457 = v451 + 1;
                    while (v457 != v423) {
                        // 0x3eb9e
                        v451 = v457;
                        v442 = v449;
                        v455 = v451;
                        v6 = v455;
                        v456 = *(char *)(v421 + 72 + v455);
                        v449 = v442;
                        if (v456 != 0) {
                            // 0x3ebba
                            v458 = v456;
                            v459 = (int32_t)v456;
                            v6 = 0;
                            v460 = (int32_t *)(v476 + 4 * v458);
                            v461 = *v460;
                            *v460 = v461 + 1;
                            v464 = v456;
                            v439 = v461;
                            v462 = 2 * v6;
                            v463 = v439 % 2 | v462 & 0xfffffffe;
                            v464--;
                            v439 /= 2;
                            while (v464 != 0) {
                                // 0x3ebd5
                                v462 = 2 * v463;
                                v463 = v439 % 2 | v462 & 0xfffffffe;
                                v464--;
                                v439 /= 2;
                            }
                            // 0x3ebeb
                            v6 = v463;
                            if (v456 < 11) {
                                // 0x3ebf0
                                v449 = v442;
                                if ((int32_t)v463 <= (int32_t)&g39) {
                                    // 0x3ec12
                                    v467 = 512 * v459 | v451;
                                    v6 = v463 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                    *(int16_t *)(2 * (v453 + (v463 & 0xffffffff)) + v25) = v467;
                                    v470 = v6;
                                    v449 = v442;
                                    while ((int32_t)v470 <= (int32_t)&g39) {
                                        // 0x3ec12
                                        v6 = v470 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                        *(int16_t *)(2 * (v453 + (v470 & 0xffffffff)) + v25) = v467;
                                        v470 = v6;
                                        v449 = v442;
                                    }
                                }
                            } else {
                                // 0x3ec2c
                                v465 = (int16_t *)(2 * ((v462 & (int64_t)(int32_t)&g39) + v452) + v81);
                                v466 = *v465;
                                v443 = v442;
                                v438 = v463;
                                v440 = v466;
                                if (v466 == 0) {
                                    // 0x3ec4c
                                    *v465 = (int16_t)v442;
                                    v443 = v442 + 0xfffffffe & 0xffffffff;
                                    v438 = v6;
                                    v440 = v442 & 0xffffffff;
                                }
                                // 0x3ec59
                                v444 = v443;
                                v468 = v438 / 1024;
                                v469 = 0x100000000 * ((v440 ^ 0xffffffff) + v468 % 2) / 0x100000000;
                                v448 = v444;
                                v437 = v469;
                                if (v456 != 11) {
                                    // 0x3ec73
                                    v474 = v468 % 0x400000;
                                    v473 = v458;
                                    v445 = v444;
                                    v471 = (int16_t *)(a1 + (int64_t)&g153 + 2 * (v469 + v452));
                                    v472 = *v471;
                                    v446 = v445;
                                    v441 = v472;
                                    if (v472 == 0) {
                                        // 0x3ec91
                                        *v471 = (int16_t)v445;
                                        v446 = v445 + 0xfffffffe & 0xffffffff;
                                        v441 = v445 & 0xffffffff;
                                    }
                                    // 0x3ec9e
                                    v447 = v446;
                                    v473 = v473 + 0xffffffff & 0xffffffff;
                                    v474 /= 2;
                                    v475 = 0x100000000 * ((v441 ^ 0xffffffff) + v474 % 2) / 0x100000000;
                                    v448 = v447;
                                    v437 = v475;
                                    while (v473 != 11) {
                                        // 0x3ec73
                                        v445 = v447;
                                        v471 = (int16_t *)(a1 + (int64_t)&g153 + 2 * (v475 + v452));
                                        v472 = *v471;
                                        v446 = v445;
                                        v441 = v472;
                                        if (v472 == 0) {
                                            // 0x3ec91
                                            *v471 = (int16_t)v445;
                                            v446 = v445 + 0xfffffffe & 0xffffffff;
                                            v441 = v445 & 0xffffffff;
                                        }
                                        // 0x3ec9e
                                        v447 = v446;
                                        v473 = v473 + 0xffffffff & 0xffffffff;
                                        v474 /= 2;
                                        v475 = 0x100000000 * ((v441 ^ 0xffffffff) + v474 % 2) / 0x100000000;
                                        v448 = v447;
                                        v437 = v475;
                                    }
                                }
                                // 0x3eca2
                                *(int16_t *)(2 * (v454 + v437) + v25) = (int16_t)v451;
                                v449 = v448;
                            }
                        }
                        // 0x3ecb9
                        v457 = v451 + 1;
                    }
                }
                int32_t v477 = v342; // 0x3ecc8
                int64_t v478 = v356; // 0x3ecc8
                int64_t v479 = v63; // 0x3ecc8
                int64_t v480 = v353; // 0x3ecc8
                int64_t v481 = v354; // 0x3ecc8
                int64_t v482 = v355; // 0x3ecc8
                int32_t v483; // 0x3e19c
                int32_t v484; // 0x3e19c
                int32_t v485; // 0x3e19c
                int64_t v486; // 0x3e19c
                int32_t v487; // 0x3e19c
                int64_t v488; // 0x3e19c
                int64_t v489; // 0x3e19c
                int64_t v490; // 0x3e19c
                int64_t v491; // 0x3e19c
                int64_t v492; // 0x3e19c
                int64_t v493; // 0x3e19c
                int64_t v494; // 0x3e19c
                int64_t v495; // 0x3e19c
                int64_t v496; // 0x3e19c
                int64_t v497; // 0x3e19c
                int64_t v498; // 0x3e19c
                int64_t v499; // 0x3e19c
                int64_t v500; // 0x3e19c
                int64_t v501; // 0x3e19c
                int64_t v502; // 0x3e19c
                int64_t v503; // 0x3e19c
                int64_t v504; // 0x3e19c
                int64_t v505; // 0x3e19c
                int64_t v506; // 0x3e19c
                int64_t v507; // 0x3e19c
                int64_t v508; // 0x3e19c
                int64_t v509; // 0x3e19c
                int64_t v510; // 0x3e19c
                int64_t v511; // 0x3e19c
                int64_t v512; // 0x3e19c
                int64_t v513; // 0x3e19c
                int64_t v514; // 0x3e19c
                int64_t v515; // 0x3e19c
                int64_t v516; // 0x3e19c
                int64_t v517; // 0x3e19c
                int64_t v518; // 0x3e19c
                int64_t v519; // 0x3e19c
                int64_t v520; // 0x3e19c
                int64_t v521; // 0x3e19c
                uint64_t v522; // 0x3e19c
                int64_t v523; // 0x3e19c
                int64_t v524; // 0x3e19c
                int64_t v525; // 0x3e19c
                int64_t v526; // 0x3e19c
                int64_t v527; // 0x3e19c
                int64_t v528; // 0x3e19c
                int64_t v529; // 0x3e19c
                int16_t v530; // 0x3e19c
                char v531; // 0x3e19c
                int64_t v532; // 0x3e19c
                int64_t v533; // 0x3e19c
                int64_t v534; // 0x3e19c
                char v535; // 0x3e19c
                int64_t v536; // 0x3e19c
                int64_t v537; // 0x3e19c
                int64_t v538; // 0x3e19c
                int64_t v539; // 0x3e19c
                int64_t v540; // 0x3e19c
                uint64_t v541; // 0x3e19c
                int64_t v542; // 0x3e19c
                int32_t v543; // 0x3e19c
                int32_t v544; // 0x3e19c
                int32_t v545; // 0x3e19c
                int32_t v546; // 0x3ecd0
                int32_t v547; // 0x3ecd4
                int16_t v548; // 0x3ede7
                int64_t v549; // 0x3ede7
                unsigned char v550; // 0x3edbb
                int64_t v551; // 0x3e19c
                uint16_t v552; // 0x3ed04
                int64_t v553; // 0x3ee0c
                uint16_t v554; // 0x3ee26
                int64_t v555; // 0x3ee26
                int64_t v556; // 0x3e19c
                uint32_t v557; // 0x3ed22
                int64_t v558; // 0x3ee33
                int64_t v559; // 0x3ee33
                int32_t v560; // 0x3e19c
                int64_t v561; // 0x3e19c
                int64_t v562; // 0x3ed32
                int16_t v563; // 0x3ed45
                int64_t v564; // 0x3ee49
                int64_t v565; // 0x3ee49
                int32_t v566; // 0x3ecd8
                int32_t v567; // 0x3e19c
                int64_t v568; // 0x3ee88
                char v569; // 0x3ee8b
                uint64_t v570; // 0x3ee8b
                int64_t v571; // 0x3ee8f
                uint32_t v572; // 0x3e19c
                int64_t v573; // 0x3eda6
                int64_t v574; // 0x3eda6
                int64_t v575; // 0x3edad
                int64_t v576; // 0x3ef05
                char v577; // 0x3ef15
                int64_t v578; // 0x3ef19
                int64_t v579; // 0x3ef19
                int64_t v580; // 0x3eefc
                int64_t v581; // 0x3e19c
                int64_t v582; // 0x3ef36
                int64_t v583; // 0x3ef36
                int32_t v584; // 0x3ecd0
                int32_t v585; // 0x3ecd4
                int32_t v586; // 0x3ecd8
                int32_t v587; // 0x3e19c
                char v588; // 0x3ef2b
                int64_t v589; // 0x3eee0
                int64_t v590; // 0x3eee0
                int64_t v591; // 0x3eee7
                if (v422 == 2) {
                    // 0x3ecd0
                    v546 = *v592;
                    v547 = *v593;
                    if (v547 == -v546) {
                        // 0x3ef4a
                        v487 = v546;
                        v485 = v547;
                        v516 = v355;
                        v505 = v354;
                        v491 = v353;
                        v537 = 0;
                        v545 = v342;
                        v527 = v63;
                    } else {
                        v526 = v63;
                        v514 = v355;
                        v503 = v354;
                        v489 = v353;
                        v565 = 0;
                        v543 = v342;
                        while (true) {
                            // 0x3ece3
                            v536 = v565;
                            v490 = v489;
                            v504 = v503;
                            v515 = v514;
                            v497 = v490;
                            v510 = v504;
                            v521 = v515;
                            if ((int32_t)v504 < 15) {
                                // 0x3eced
                                v544 = v543;
                                v494 = v490;
                                v508 = v504;
                                v519 = v515;
                                if (v2 - v490 > 1) {
                                    // 0x3edbb
                                    v550 = *(char *)(v490 + 1);
                                    v551 = (int64_t)*(char *)v490 << v504 % 64;
                                    v6 = v551;
                                    v497 = v490 + 2;
                                    v510 = v504 + 16 & 0xffffffff;
                                    v521 = (int64_t)v550 << (v504 + 8) % 64 | v515 | v551;
                                } else {
                                    v520 = v519;
                                    v509 = v508;
                                    v495 = v494;
                                    v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g39));
                                    if (v552 < 0) {
                                        // 0x3ed22
                                        v557 = (int32_t)v509;
                                        v530 = v552;
                                        v540 = 10;
                                        if (v557 >= 11) {
                                            v541 = v540;
                                            v562 = v541 + 1 & 0xffffffff;
                                            v6 = v562;
                                            v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                            v497 = v495;
                                            v510 = v509;
                                            v521 = v520;
                                            if (v563 >= 0) {
                                                // break (via goto) -> 0x3eddf
                                                goto lab_0x3eddf;
                                            }
                                            // 0x3ed53
                                            v530 = v563;
                                            v540 = v562;
                                            while ((int32_t)v541 + 2 <= v557) {
                                                // 0x3ed2d
                                                v541 = v540;
                                                v562 = v541 + 1 & 0xffffffff;
                                                v6 = v562;
                                                v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                                v497 = v495;
                                                v510 = v509;
                                                v521 = v520;
                                                if (v563 >= 0) {
                                                    // break (via goto) -> 0x3eddf
                                                    goto lab_0x3eddf;
                                                }
                                                // 0x3ed53
                                                v530 = v563;
                                                v540 = v562;
                                            }
                                        }
                                    } else {
                                        // 0x3ed11
                                        v497 = v495;
                                        v510 = v509;
                                        v521 = v520;
                                        if (v552 >= 512 && (int32_t)(v552 / 512) <= (int32_t)v509) {
                                            // break -> 0x3eddf
                                            break;
                                        }
                                    }
                                    if (v2 > v495) {
                                        // 0x3ed98
                                        v531 = *(char *)v495;
                                        v496 = v495 + 1;
                                    } else {
                                        // 0x3ed71
                                        v531 = 0;
                                        v496 = v495;
                                        if ((a7 & 2) != 0) {
                                            // 0x3ed7b
                                            *(int32_t *)a1 = 16;
                                            v19 = v544;
                                            v18 = v67;
                                            v15 = 1;
                                            v17 = v341;
                                            v14 = v536;
                                            v13 = v526;
                                            v10 = v495;
                                            v11 = v509;
                                            v12 = v520;
                                            goto lab_0x3f72a;
                                        }
                                    }
                                    // 0x3eda3
                                    v573 = v509 + 8;
                                    v574 = v573 & 0xffffffff;
                                    v575 = (int64_t)v531 << v509 % 64 | v520;
                                    v494 = v496;
                                    v508 = v574;
                                    v519 = v575;
                                    v497 = v496;
                                    v510 = v574;
                                    v521 = v575;
                                    while ((int32_t)v573 < 15) {
                                        // 0x3ecfc
                                        v520 = v519;
                                        v509 = v508;
                                        v495 = v494;
                                        v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g39));
                                        if (v552 < 0) {
                                            // 0x3ed22
                                            v557 = (int32_t)v509;
                                            v530 = v552;
                                            v540 = 10;
                                            if (v557 >= 11) {
                                                v541 = v540;
                                                v562 = v541 + 1 & 0xffffffff;
                                                v6 = v562;
                                                v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                                v497 = v495;
                                                v510 = v509;
                                                v521 = v520;
                                                if (v563 >= 0) {
                                                    // break (via goto) -> 0x3eddf
                                                    goto lab_0x3eddf;
                                                }
                                                // 0x3ed53
                                                v530 = v563;
                                                v540 = v562;
                                                while ((int32_t)v541 + 2 <= v557) {
                                                    // 0x3ed2d
                                                    v541 = v540;
                                                    v562 = v541 + 1 & 0xffffffff;
                                                    v6 = v562;
                                                    v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                                    v497 = v495;
                                                    v510 = v509;
                                                    v521 = v520;
                                                    if (v563 >= 0) {
                                                        // break (via goto) -> 0x3eddf
                                                        goto lab_0x3eddf;
                                                    }
                                                    // 0x3ed53
                                                    v530 = v563;
                                                    v540 = v562;
                                                }
                                            }
                                        } else {
                                            // 0x3ed11
                                            v497 = v495;
                                            v510 = v509;
                                            v521 = v520;
                                            if (v552 >= 512 && (int32_t)(v552 / 512) <= (int32_t)v509) {
                                                // break -> 0x3eddf
                                                break;
                                            }
                                        }
                                        if (v2 > v495) {
                                            // 0x3ed98
                                            v531 = *(char *)v495;
                                            v496 = v495 + 1;
                                        } else {
                                            // 0x3ed71
                                            v531 = 0;
                                            v496 = v495;
                                            if ((a7 & 2) != 0) {
                                                // 0x3ed7b
                                                *(int32_t *)a1 = 16;
                                                v19 = v544;
                                                v18 = v67;
                                                v15 = 1;
                                                v17 = v341;
                                                v14 = v536;
                                                v13 = v526;
                                                v10 = v495;
                                                v11 = v509;
                                                v12 = v520;
                                                goto lab_0x3f72a;
                                            }
                                        }
                                        // 0x3eda3
                                        v573 = v509 + 8;
                                        v574 = v573 & 0xffffffff;
                                        v575 = (int64_t)v531 << v509 % 64 | v520;
                                        v494 = v496;
                                        v508 = v574;
                                        v519 = v575;
                                        v497 = v496;
                                        v510 = v574;
                                        v521 = v575;
                                    }
                                }
                            }
                            // 0x3eddf
                            v522 = v521;
                            v498 = v497;
                            v548 = *(int16_t *)(v594 + 2 * (v522 & (int64_t)(int32_t)&g39));
                            v549 = v548;
                            v532 = v549;
                            v542 = 10;
                            if (v548 < 0) {
                                v553 = v542 + 1 & 0xffffffff;
                                v6 = v553;
                                v554 = *(int16_t *)(2 * (((v522 >> v542 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * v532 ^ -0x100000000) >> 32)) + v25);
                                v555 = v554;
                                v532 = v555;
                                v542 = v553;
                                v488 = v553;
                                v533 = v555;
                                while (v554 < 0) {
                                    // 0x3ee09
                                    v553 = v542 + 1 & 0xffffffff;
                                    v6 = v553;
                                    v554 = *(int16_t *)(2 * (((v522 >> v542 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * v532 ^ -0x100000000) >> 32)) + v25);
                                    v555 = v554;
                                    v532 = v555;
                                    v542 = v553;
                                    v488 = v553;
                                    v533 = v555;
                                }
                            } else {
                                // 0x3edf6
                                v556 = v548 / 512;
                                v6 = v556;
                                v488 = v556;
                                v533 = v549 % 512;
                            }
                            // 0x3ee30
                            v534 = v533;
                            v558 = v510 - v488;
                            v559 = v558 & 0xffffffff;
                            v560 = v534;
                            v561 = v522 >> v488 % 64;
                            if (v560 > 15) {
                                // break -> 0x3ee58
                                break;
                            }
                            // 0x3ee42
                            v564 = v536 + 1;
                            v565 = v564 & 0xffffffff;
                            *(char *)(v595 + v536) = (char)v534;
                            v566 = *v593 + *v592;
                            v567 = v564;
                            v514 = v561;
                            v503 = v559;
                            v489 = v498;
                            v543 = v560;
                            v528 = v526;
                            v538 = v565;
                            v492 = v498;
                            v506 = v559;
                            v517 = v561;
                            v484 = v566;
                            v483 = v567;
                            if (v566 <= v567) {
                                // break (via goto) -> 0x3ef4a
                                goto lab_0x3ef4a;
                            }
                        }
                        if (v536 == 0 == v560 == 16) {
                            // 0x3ee75
                            *(int32_t *)a1 = 17;
                            v19 = 16;
                            v18 = v67;
                            v15 = 0xffffffff;
                            v17 = v341;
                            v14 = 0;
                            v13 = v526;
                            v10 = v498;
                            v11 = v559;
                            v12 = v561;
                            goto lab_0x3f72a;
                        }
                        // 0x3ee81
                        v568 = v534 + 0xfffffff0 & 0xffffffff;
                        v569 = *(char *)(v568 + (int64_t)&g76);
                        v570 = (int64_t)v569;
                        v571 = v570 & 0xffffffff;
                        v572 = (int32_t)v569;
                        v523 = v561;
                        v511 = v559;
                        v499 = v498;
                        v501 = v498;
                        v513 = v559;
                        v525 = v561;
                        if ((int32_t)v558 < v572) {
                            v500 = v499;
                            v512 = v511;
                            v524 = v523;
                            if (v2 > v500) {
                                // 0x3eed2
                                v535 = *(char *)v500;
                                v502 = v500 + 1;
                            } else {
                                // 0x3eeab
                                v535 = 0;
                                v502 = v500;
                                if ((a7 & 2) != 0) {
                                    // 0x3eeb5
                                    *(int32_t *)a1 = 18;
                                    v19 = v560;
                                    v18 = v67;
                                    v15 = 1;
                                    v17 = v341;
                                    v14 = v536;
                                    v13 = v571;
                                    v10 = v500;
                                    v11 = v512;
                                    v12 = v524;
                                    goto lab_0x3f72a;
                                }
                            }
                            // 0x3eedd
                            v589 = v512 + 8;
                            v590 = v589 & 0xffffffff;
                            v591 = (int64_t)v535 << v512 % 64 | v524;
                            v523 = v591;
                            v511 = v590;
                            v499 = v502;
                            v501 = v502;
                            v513 = v590;
                            v525 = v591;
                            while ((int32_t)v589 < v572) {
                                // 0x3ee97
                                v500 = v499;
                                v512 = v511;
                                v524 = v523;
                                if (v2 > v500) {
                                    // 0x3eed2
                                    v535 = *(char *)v500;
                                    v502 = v500 + 1;
                                } else {
                                    // 0x3eeab
                                    v535 = 0;
                                    v502 = v500;
                                    if ((a7 & 2) != 0) {
                                        // 0x3eeb5
                                        *(int32_t *)a1 = 18;
                                        v19 = v560;
                                        v18 = v67;
                                        v15 = 1;
                                        v17 = v341;
                                        v14 = v536;
                                        v13 = v571;
                                        v10 = v500;
                                        v11 = v512;
                                        v12 = v524;
                                        goto lab_0x3f72a;
                                    }
                                }
                                // 0x3eedd
                                v589 = v512 + 8;
                                v590 = v589 & 0xffffffff;
                                v591 = (int64_t)v535 << v512 % 64 | v524;
                                v523 = v591;
                                v511 = v590;
                                v499 = v502;
                                v501 = v502;
                                v513 = v590;
                                v525 = v591;
                            }
                        }
                        // 0x3eeef
                        v576 = v525 & (int64_t)(1 << (int32_t)(v569 % 32)) + 0xffffffff;
                        v6 = v576 & 0xffffffff;
                        v577 = *(char *)(v568 + (int64_t)&g78);
                        v578 = v576 + (int64_t)v577;
                        v579 = v578 & 0xffffffff;
                        v6 = v579;
                        v588 = 0;
                        if (v560 == 16) {
                            // 0x3ef28
                            v588 = *(char *)((v536 + 0xffffffff & 0xffffffff) + v595);
                        }
                        // 0x3ef34
                        v580 = v513 - v570 & 0xffffffff;
                        v581 = v525 >> v570 % 64;
                        v582 = v578 + v536;
                        v583 = v582 & 0xffffffff;
                        __asm_rep_stosb_memset((char *)(v595 + v536), v588, v579);
                        v584 = *v592;
                        v585 = *v593;
                        v586 = v585 + v584;
                        v587 = v582;
                        v528 = v571;
                        v538 = v583;
                        v492 = v501;
                        v506 = v580;
                        v517 = v581;
                        v484 = v586;
                        v483 = v587;
                        while (v586 > v587) {
                            // 0x3ece3
                            v526 = v571;
                            v514 = v581;
                            v503 = v580;
                            v489 = v501;
                            v565 = v583;
                            v543 = v560;
                            while (true) {
                                // 0x3ece3
                                v536 = v565;
                                v490 = v489;
                                v504 = v503;
                                v515 = v514;
                                v497 = v490;
                                v510 = v504;
                                v521 = v515;
                                if ((int32_t)v504 < 15) {
                                    // 0x3eced
                                    v544 = v543;
                                    v494 = v490;
                                    v508 = v504;
                                    v519 = v515;
                                    if (v2 - v490 > 1) {
                                        // 0x3edbb
                                        v550 = *(char *)(v490 + 1);
                                        v551 = (int64_t)*(char *)v490 << v504 % 64;
                                        v6 = v551;
                                        v497 = v490 + 2;
                                        v510 = v504 + 16 & 0xffffffff;
                                        v521 = (int64_t)v550 << (v504 + 8) % 64 | v515 | v551;
                                    } else {
                                        v520 = v519;
                                        v509 = v508;
                                        v495 = v494;
                                        v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g39));
                                        if (v552 < 0) {
                                            // 0x3ed22
                                            v557 = (int32_t)v509;
                                            v530 = v552;
                                            v540 = 10;
                                            if (v557 >= 11) {
                                                v541 = v540;
                                                v562 = v541 + 1 & 0xffffffff;
                                                v6 = v562;
                                                v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                                v497 = v495;
                                                v510 = v509;
                                                v521 = v520;
                                                if (v563 >= 0) {
                                                    // break (via goto) -> 0x3eddf
                                                    goto lab_0x3eddf;
                                                }
                                                // 0x3ed53
                                                v530 = v563;
                                                v540 = v562;
                                                while ((int32_t)v541 + 2 <= v557) {
                                                    // 0x3ed2d
                                                    v541 = v540;
                                                    v562 = v541 + 1 & 0xffffffff;
                                                    v6 = v562;
                                                    v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                                    v497 = v495;
                                                    v510 = v509;
                                                    v521 = v520;
                                                    if (v563 >= 0) {
                                                        // break (via goto) -> 0x3eddf
                                                        goto lab_0x3eddf;
                                                    }
                                                    // 0x3ed53
                                                    v530 = v563;
                                                    v540 = v562;
                                                }
                                            }
                                        } else {
                                            // 0x3ed11
                                            v497 = v495;
                                            v510 = v509;
                                            v521 = v520;
                                            if (v552 >= 512 && (int32_t)(v552 / 512) <= (int32_t)v509) {
                                                // break -> 0x3eddf
                                                break;
                                            }
                                        }
                                        if (v2 > v495) {
                                            // 0x3ed98
                                            v531 = *(char *)v495;
                                            v496 = v495 + 1;
                                        } else {
                                            // 0x3ed71
                                            v531 = 0;
                                            v496 = v495;
                                            if ((a7 & 2) != 0) {
                                                // 0x3ed7b
                                                *(int32_t *)a1 = 16;
                                                v19 = v544;
                                                v18 = v67;
                                                v15 = 1;
                                                v17 = v341;
                                                v14 = v536;
                                                v13 = v526;
                                                v10 = v495;
                                                v11 = v509;
                                                v12 = v520;
                                                goto lab_0x3f72a;
                                            }
                                        }
                                        // 0x3eda3
                                        v573 = v509 + 8;
                                        v574 = v573 & 0xffffffff;
                                        v575 = (int64_t)v531 << v509 % 64 | v520;
                                        v494 = v496;
                                        v508 = v574;
                                        v519 = v575;
                                        v497 = v496;
                                        v510 = v574;
                                        v521 = v575;
                                        while ((int32_t)v573 < 15) {
                                            // 0x3ecfc
                                            v520 = v519;
                                            v509 = v508;
                                            v495 = v494;
                                            v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g39));
                                            if (v552 < 0) {
                                                // 0x3ed22
                                                v557 = (int32_t)v509;
                                                v530 = v552;
                                                v540 = 10;
                                                if (v557 >= 11) {
                                                    v541 = v540;
                                                    v562 = v541 + 1 & 0xffffffff;
                                                    v6 = v562;
                                                    v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                                    v497 = v495;
                                                    v510 = v509;
                                                    v521 = v520;
                                                    if (v563 >= 0) {
                                                        // break (via goto) -> 0x3eddf
                                                        goto lab_0x3eddf;
                                                    }
                                                    // 0x3ed53
                                                    v530 = v563;
                                                    v540 = v562;
                                                    while ((int32_t)v541 + 2 <= v557) {
                                                        // 0x3ed2d
                                                        v541 = v540;
                                                        v562 = v541 + 1 & 0xffffffff;
                                                        v6 = v562;
                                                        v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                                        v497 = v495;
                                                        v510 = v509;
                                                        v521 = v520;
                                                        if (v563 >= 0) {
                                                            // break (via goto) -> 0x3eddf
                                                            goto lab_0x3eddf;
                                                        }
                                                        // 0x3ed53
                                                        v530 = v563;
                                                        v540 = v562;
                                                    }
                                                }
                                            } else {
                                                // 0x3ed11
                                                v497 = v495;
                                                v510 = v509;
                                                v521 = v520;
                                                if (v552 >= 512 && (int32_t)(v552 / 512) <= (int32_t)v509) {
                                                    // break -> 0x3eddf
                                                    break;
                                                }
                                            }
                                            if (v2 > v495) {
                                                // 0x3ed98
                                                v531 = *(char *)v495;
                                                v496 = v495 + 1;
                                            } else {
                                                // 0x3ed71
                                                v531 = 0;
                                                v496 = v495;
                                                if ((a7 & 2) != 0) {
                                                    // 0x3ed7b
                                                    *(int32_t *)a1 = 16;
                                                    v19 = v544;
                                                    v18 = v67;
                                                    v15 = 1;
                                                    v17 = v341;
                                                    v14 = v536;
                                                    v13 = v526;
                                                    v10 = v495;
                                                    v11 = v509;
                                                    v12 = v520;
                                                    goto lab_0x3f72a;
                                                }
                                            }
                                            // 0x3eda3
                                            v573 = v509 + 8;
                                            v574 = v573 & 0xffffffff;
                                            v575 = (int64_t)v531 << v509 % 64 | v520;
                                            v494 = v496;
                                            v508 = v574;
                                            v519 = v575;
                                            v497 = v496;
                                            v510 = v574;
                                            v521 = v575;
                                        }
                                    }
                                }
                                // 0x3eddf
                                v522 = v521;
                                v498 = v497;
                                v548 = *(int16_t *)(v594 + 2 * (v522 & (int64_t)(int32_t)&g39));
                                v549 = v548;
                                v532 = v549;
                                v542 = 10;
                                if (v548 < 0) {
                                    v553 = v542 + 1 & 0xffffffff;
                                    v6 = v553;
                                    v554 = *(int16_t *)(2 * (((v522 >> v542 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * v532 ^ -0x100000000) >> 32)) + v25);
                                    v555 = v554;
                                    v532 = v555;
                                    v542 = v553;
                                    v488 = v553;
                                    v533 = v555;
                                    while (v554 < 0) {
                                        // 0x3ee09
                                        v553 = v542 + 1 & 0xffffffff;
                                        v6 = v553;
                                        v554 = *(int16_t *)(2 * (((v522 >> v542 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * v532 ^ -0x100000000) >> 32)) + v25);
                                        v555 = v554;
                                        v532 = v555;
                                        v542 = v553;
                                        v488 = v553;
                                        v533 = v555;
                                    }
                                } else {
                                    // 0x3edf6
                                    v556 = v548 / 512;
                                    v6 = v556;
                                    v488 = v556;
                                    v533 = v549 % 512;
                                }
                                // 0x3ee30
                                v534 = v533;
                                v558 = v510 - v488;
                                v559 = v558 & 0xffffffff;
                                v560 = v534;
                                v561 = v522 >> v488 % 64;
                                if (v560 > 15) {
                                    // break -> 0x3ee58
                                    break;
                                }
                                // 0x3ee42
                                v564 = v536 + 1;
                                v565 = v564 & 0xffffffff;
                                *(char *)(v595 + v536) = (char)v534;
                                v566 = *v593 + *v592;
                                v567 = v564;
                                v514 = v561;
                                v503 = v559;
                                v489 = v498;
                                v543 = v560;
                                v528 = v526;
                                v538 = v565;
                                v492 = v498;
                                v506 = v559;
                                v517 = v561;
                                v484 = v566;
                                v483 = v567;
                                if (v566 <= v567) {
                                    // break (via goto) -> 0x3ef4a
                                    goto lab_0x3ef4a;
                                }
                            }
                            if (v536 == 0 == v560 == 16) {
                                // 0x3ee75
                                *(int32_t *)a1 = 17;
                                v19 = 16;
                                v18 = v67;
                                v15 = 0xffffffff;
                                v17 = v341;
                                v14 = 0;
                                v13 = v526;
                                v10 = v498;
                                v11 = v559;
                                v12 = v561;
                                goto lab_0x3f72a;
                            }
                            // 0x3ee81
                            v568 = v534 + 0xfffffff0 & 0xffffffff;
                            v569 = *(char *)(v568 + (int64_t)&g76);
                            v570 = (int64_t)v569;
                            v571 = v570 & 0xffffffff;
                            v572 = (int32_t)v569;
                            v523 = v561;
                            v511 = v559;
                            v499 = v498;
                            v501 = v498;
                            v513 = v559;
                            v525 = v561;
                            if ((int32_t)v558 < v572) {
                                v500 = v499;
                                v512 = v511;
                                v524 = v523;
                                if (v2 > v500) {
                                    // 0x3eed2
                                    v535 = *(char *)v500;
                                    v502 = v500 + 1;
                                } else {
                                    // 0x3eeab
                                    v535 = 0;
                                    v502 = v500;
                                    if ((a7 & 2) != 0) {
                                        // 0x3eeb5
                                        *(int32_t *)a1 = 18;
                                        v19 = v560;
                                        v18 = v67;
                                        v15 = 1;
                                        v17 = v341;
                                        v14 = v536;
                                        v13 = v571;
                                        v10 = v500;
                                        v11 = v512;
                                        v12 = v524;
                                        goto lab_0x3f72a;
                                    }
                                }
                                // 0x3eedd
                                v589 = v512 + 8;
                                v590 = v589 & 0xffffffff;
                                v591 = (int64_t)v535 << v512 % 64 | v524;
                                v523 = v591;
                                v511 = v590;
                                v499 = v502;
                                v501 = v502;
                                v513 = v590;
                                v525 = v591;
                                while ((int32_t)v589 < v572) {
                                    // 0x3ee97
                                    v500 = v499;
                                    v512 = v511;
                                    v524 = v523;
                                    if (v2 > v500) {
                                        // 0x3eed2
                                        v535 = *(char *)v500;
                                        v502 = v500 + 1;
                                    } else {
                                        // 0x3eeab
                                        v535 = 0;
                                        v502 = v500;
                                        if ((a7 & 2) != 0) {
                                            // 0x3eeb5
                                            *(int32_t *)a1 = 18;
                                            v19 = v560;
                                            v18 = v67;
                                            v15 = 1;
                                            v17 = v341;
                                            v14 = v536;
                                            v13 = v571;
                                            v10 = v500;
                                            v11 = v512;
                                            v12 = v524;
                                            goto lab_0x3f72a;
                                        }
                                    }
                                    // 0x3eedd
                                    v589 = v512 + 8;
                                    v590 = v589 & 0xffffffff;
                                    v591 = (int64_t)v535 << v512 % 64 | v524;
                                    v523 = v591;
                                    v511 = v590;
                                    v499 = v502;
                                    v501 = v502;
                                    v513 = v590;
                                    v525 = v591;
                                }
                            }
                            // 0x3eeef
                            v576 = v525 & (int64_t)(1 << (int32_t)(v569 % 32)) + 0xffffffff;
                            v6 = v576 & 0xffffffff;
                            v577 = *(char *)(v568 + (int64_t)&g78);
                            v578 = v576 + (int64_t)v577;
                            v579 = v578 & 0xffffffff;
                            v6 = v579;
                            v588 = 0;
                            if (v560 == 16) {
                                // 0x3ef28
                                v588 = *(char *)((v536 + 0xffffffff & 0xffffffff) + v595);
                            }
                            // 0x3ef34
                            v580 = v513 - v570 & 0xffffffff;
                            v581 = v525 >> v570 % 64;
                            v582 = v578 + v536;
                            v583 = v582 & 0xffffffff;
                            __asm_rep_stosb_memset((char *)(v595 + v536), v588, v579);
                            v584 = *v592;
                            v585 = *v593;
                            v586 = v585 + v584;
                            v587 = v582;
                            v528 = v571;
                            v538 = v583;
                            v492 = v501;
                            v506 = v580;
                            v517 = v581;
                            v484 = v586;
                            v483 = v587;
                        }
                        // 0x3ef4a
                        v518 = v517;
                        v507 = v506;
                        v493 = v492;
                        v539 = v538;
                        v529 = v528;
                        v487 = v584;
                        v485 = v585;
                        v516 = v518;
                        v505 = v507;
                        v491 = v493;
                        v537 = v539;
                        v545 = v560;
                        v527 = v529;
                        if (v484 != v483) {
                            // 0x3ef56
                            *(int32_t *)a1 = 21;
                            v19 = v560;
                            v18 = v67;
                            v15 = 0xffffffff;
                            v17 = v341;
                            v14 = v539;
                            v13 = v529;
                            v10 = v493;
                            v11 = v507;
                            v12 = v518;
                            goto lab_0x3f72a;
                        }
                    }
                    // 0x3ef62
                    v486 = v487;
                    __asm_rep_movsb_memcpy(v596, v597, v486);
                    __asm_rep_movsb_memcpy(v598, (char *)(v71 * v486 + v416), (int64_t)v485);
                    v477 = v545;
                    v478 = v537;
                    v479 = v527;
                    v480 = v491;
                    v481 = v505;
                    v482 = v516;
                }
                int32_t v599 = *v348 - 1; // 0x3ef80
                *v348 = v599;
                while (v599 >= 0) {
                    int32_t v600 = v477;
                    int64_t v601 = v478;
                    int64_t v602 = v479;
                    int64_t v603 = v480;
                    int64_t v604 = v481;
                    int64_t v605 = v482;
                    v418 = v599;
                    v419 = v418 * (int64_t)&g165;
                    __asm_rep_stosd_memset((char *)&v420, 0, 16);
                    __asm_rep_stosd_memset((char *)(v419 + v81), 0, (int64_t)&g12);
                    v421 = v419 + a1;
                    __asm_rep_stosd_memset((char *)(v421 + (int64_t)&g153), 0, 288);
                    v422 = *v348;
                    v423 = *(int32_t *)(4 * (int64_t)v422 + v384);
                    if (v423 != 0) {
                        // 0x3eae6
                        v425 = 0;
                        v424 = *(char *)(v421 + 72 + v425);
                        v425++;
                        v426 = (int32_t *)(v427 + 4 * (int64_t)v424);
                        *v426 = *v426 + 1;
                        while (v425 != (int64_t)v423) {
                            // 0x3eae6
                            v424 = *(char *)(v421 + 72 + v425);
                            v425++;
                            v426 = (int32_t *)(v427 + 4 * (int64_t)v424);
                            *v426 = *v426 + 1;
                        }
                    }
                    // 0x3eafc
                    v428 = 0;
                    v430 = *(int32_t *)(v428 + (int64_t)&v429);
                    v431 = v430;
                    v432 = 2 * v430;
                    *(int32_t *)(v428 + v433) = v432;
                    v434 = v431;
                    v435 = v432;
                    v436 = v428 + 4;
                    while (v428 != 56) {
                        // 0x3eb29
                        v428 = v436;
                        v430 = *(int32_t *)(v428 + (int64_t)&v429);
                        v431 = v430 + v434;
                        v432 = 2 * (v430 + v435);
                        *(int32_t *)(v428 + v433) = v432;
                        v434 = v431;
                        v435 = v432;
                        v436 = v428 + 4;
                    }
                    if (v431 >= 2 && v432 != (int32_t)&g2) {
                        // 0x3eb5e
                        *(int32_t *)a1 = 35;
                        v19 = v600;
                        v18 = v67;
                        v15 = 0xffffffff;
                        v17 = v341;
                        v14 = v601;
                        v13 = v602;
                        v10 = v603;
                        v11 = v604;
                        v12 = v605;
                        goto lab_0x3f72a;
                    }
                    if (v423 != 0) {
                        // 0x3eb9e
                        v452 = v418 * (int64_t)&g116;
                        v453 = v452 + 176;
                        v454 = v452 + (int64_t)&g57;
                        v451 = 0;
                        v442 = (int64_t)&v450;
                        v455 = v451;
                        v6 = v455;
                        v456 = *(char *)(v421 + 72 + v455);
                        v449 = v442;
                        if (v456 != 0) {
                            // 0x3ebba
                            v458 = v456;
                            v459 = (int32_t)v456;
                            v6 = 0;
                            v460 = (int32_t *)(v476 + 4 * v458);
                            v461 = *v460;
                            *v460 = v461 + 1;
                            v464 = v456;
                            v439 = v461;
                            v462 = 2 * v6;
                            v463 = v439 % 2 | v462 & 0xfffffffe;
                            v464--;
                            v439 /= 2;
                            while (v464 != 0) {
                                // 0x3ebd5
                                v462 = 2 * v463;
                                v463 = v439 % 2 | v462 & 0xfffffffe;
                                v464--;
                                v439 /= 2;
                            }
                            // 0x3ebeb
                            v6 = v463;
                            if (v456 < 11) {
                                // 0x3ebf0
                                v449 = v442;
                                if ((int32_t)v463 <= (int32_t)&g39) {
                                    // 0x3ec12
                                    v467 = 512 * v459 | v451;
                                    v6 = v463 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                    *(int16_t *)(2 * (v453 + (v463 & 0xffffffff)) + v25) = v467;
                                    v470 = v6;
                                    v449 = v442;
                                    while ((int32_t)v470 <= (int32_t)&g39) {
                                        // 0x3ec12
                                        v6 = v470 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                        *(int16_t *)(2 * (v453 + (v470 & 0xffffffff)) + v25) = v467;
                                        v470 = v6;
                                        v449 = v442;
                                    }
                                }
                            } else {
                                // 0x3ec2c
                                v465 = (int16_t *)(2 * ((v462 & (int64_t)(int32_t)&g39) + v452) + v81);
                                v466 = *v465;
                                v443 = v442;
                                v438 = v463;
                                v440 = v466;
                                if (v466 == 0) {
                                    // 0x3ec4c
                                    *v465 = (int16_t)v442;
                                    v443 = v442 + 0xfffffffe & 0xffffffff;
                                    v438 = v6;
                                    v440 = v442 & 0xffffffff;
                                }
                                // 0x3ec59
                                v444 = v443;
                                v468 = v438 / 1024;
                                v469 = 0x100000000 * ((v440 ^ 0xffffffff) + v468 % 2) / 0x100000000;
                                v448 = v444;
                                v437 = v469;
                                if (v456 != 11) {
                                    // 0x3ec73
                                    v474 = v468 % 0x400000;
                                    v473 = v458;
                                    v445 = v444;
                                    v471 = (int16_t *)(a1 + (int64_t)&g153 + 2 * (v469 + v452));
                                    v472 = *v471;
                                    v446 = v445;
                                    v441 = v472;
                                    if (v472 == 0) {
                                        // 0x3ec91
                                        *v471 = (int16_t)v445;
                                        v446 = v445 + 0xfffffffe & 0xffffffff;
                                        v441 = v445 & 0xffffffff;
                                    }
                                    // 0x3ec9e
                                    v447 = v446;
                                    v473 = v473 + 0xffffffff & 0xffffffff;
                                    v474 /= 2;
                                    v475 = 0x100000000 * ((v441 ^ 0xffffffff) + v474 % 2) / 0x100000000;
                                    v448 = v447;
                                    v437 = v475;
                                    while (v473 != 11) {
                                        // 0x3ec73
                                        v445 = v447;
                                        v471 = (int16_t *)(a1 + (int64_t)&g153 + 2 * (v475 + v452));
                                        v472 = *v471;
                                        v446 = v445;
                                        v441 = v472;
                                        if (v472 == 0) {
                                            // 0x3ec91
                                            *v471 = (int16_t)v445;
                                            v446 = v445 + 0xfffffffe & 0xffffffff;
                                            v441 = v445 & 0xffffffff;
                                        }
                                        // 0x3ec9e
                                        v447 = v446;
                                        v473 = v473 + 0xffffffff & 0xffffffff;
                                        v474 /= 2;
                                        v475 = 0x100000000 * ((v441 ^ 0xffffffff) + v474 % 2) / 0x100000000;
                                        v448 = v447;
                                        v437 = v475;
                                    }
                                }
                                // 0x3eca2
                                *(int16_t *)(2 * (v454 + v437) + v25) = (int16_t)v451;
                                v449 = v448;
                            }
                        }
                        // 0x3ecb9
                        v457 = v451 + 1;
                        while (v457 != v423) {
                            // 0x3eb9e
                            v451 = v457;
                            v442 = v449;
                            v455 = v451;
                            v6 = v455;
                            v456 = *(char *)(v421 + 72 + v455);
                            v449 = v442;
                            if (v456 != 0) {
                                // 0x3ebba
                                v458 = v456;
                                v459 = (int32_t)v456;
                                v6 = 0;
                                v460 = (int32_t *)(v476 + 4 * v458);
                                v461 = *v460;
                                *v460 = v461 + 1;
                                v464 = v456;
                                v439 = v461;
                                v462 = 2 * v6;
                                v463 = v439 % 2 | v462 & 0xfffffffe;
                                v464--;
                                v439 /= 2;
                                while (v464 != 0) {
                                    // 0x3ebd5
                                    v462 = 2 * v463;
                                    v463 = v439 % 2 | v462 & 0xfffffffe;
                                    v464--;
                                    v439 /= 2;
                                }
                                // 0x3ebeb
                                v6 = v463;
                                if (v456 < 11) {
                                    // 0x3ebf0
                                    v449 = v442;
                                    if ((int32_t)v463 <= (int32_t)&g39) {
                                        // 0x3ec12
                                        v467 = 512 * v459 | v451;
                                        v6 = v463 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                        *(int16_t *)(2 * (v453 + (v463 & 0xffffffff)) + v25) = v467;
                                        v470 = v6;
                                        v449 = v442;
                                        while ((int32_t)v470 <= (int32_t)&g39) {
                                            // 0x3ec12
                                            v6 = v470 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                            *(int16_t *)(2 * (v453 + (v470 & 0xffffffff)) + v25) = v467;
                                            v470 = v6;
                                            v449 = v442;
                                        }
                                    }
                                } else {
                                    // 0x3ec2c
                                    v465 = (int16_t *)(2 * ((v462 & (int64_t)(int32_t)&g39) + v452) + v81);
                                    v466 = *v465;
                                    v443 = v442;
                                    v438 = v463;
                                    v440 = v466;
                                    if (v466 == 0) {
                                        // 0x3ec4c
                                        *v465 = (int16_t)v442;
                                        v443 = v442 + 0xfffffffe & 0xffffffff;
                                        v438 = v6;
                                        v440 = v442 & 0xffffffff;
                                    }
                                    // 0x3ec59
                                    v444 = v443;
                                    v468 = v438 / 1024;
                                    v469 = 0x100000000 * ((v440 ^ 0xffffffff) + v468 % 2) / 0x100000000;
                                    v448 = v444;
                                    v437 = v469;
                                    if (v456 != 11) {
                                        // 0x3ec73
                                        v474 = v468 % 0x400000;
                                        v473 = v458;
                                        v445 = v444;
                                        v471 = (int16_t *)(a1 + (int64_t)&g153 + 2 * (v469 + v452));
                                        v472 = *v471;
                                        v446 = v445;
                                        v441 = v472;
                                        if (v472 == 0) {
                                            // 0x3ec91
                                            *v471 = (int16_t)v445;
                                            v446 = v445 + 0xfffffffe & 0xffffffff;
                                            v441 = v445 & 0xffffffff;
                                        }
                                        // 0x3ec9e
                                        v447 = v446;
                                        v473 = v473 + 0xffffffff & 0xffffffff;
                                        v474 /= 2;
                                        v475 = 0x100000000 * ((v441 ^ 0xffffffff) + v474 % 2) / 0x100000000;
                                        v448 = v447;
                                        v437 = v475;
                                        while (v473 != 11) {
                                            // 0x3ec73
                                            v445 = v447;
                                            v471 = (int16_t *)(a1 + (int64_t)&g153 + 2 * (v475 + v452));
                                            v472 = *v471;
                                            v446 = v445;
                                            v441 = v472;
                                            if (v472 == 0) {
                                                // 0x3ec91
                                                *v471 = (int16_t)v445;
                                                v446 = v445 + 0xfffffffe & 0xffffffff;
                                                v441 = v445 & 0xffffffff;
                                            }
                                            // 0x3ec9e
                                            v447 = v446;
                                            v473 = v473 + 0xffffffff & 0xffffffff;
                                            v474 /= 2;
                                            v475 = 0x100000000 * ((v441 ^ 0xffffffff) + v474 % 2) / 0x100000000;
                                            v448 = v447;
                                            v437 = v475;
                                        }
                                    }
                                    // 0x3eca2
                                    *(int16_t *)(2 * (v454 + v437) + v25) = (int16_t)v451;
                                    v449 = v448;
                                }
                            }
                            // 0x3ecb9
                            v457 = v451 + 1;
                        }
                    }
                    // 0x3ecc3
                    v477 = v600;
                    v478 = v601;
                    v479 = v602;
                    v480 = v603;
                    v481 = v604;
                    v482 = v605;
                    if (v422 == 2) {
                        // 0x3ecd0
                        v546 = *v592;
                        v547 = *v593;
                        int64_t v606 = v605; // 0x3ecdd
                        int64_t v607 = v604; // 0x3ecdd
                        int64_t v608 = v603; // 0x3ecdd
                        int64_t v609 = v602; // 0x3ecdd
                        int32_t v610 = v600; // 0x3ecdd
                        if (v547 == -v546) {
                            // 0x3ef4a
                            v487 = v546;
                            v485 = v547;
                            v516 = v605;
                            v505 = v604;
                            v491 = v603;
                            v537 = 0;
                            v545 = v600;
                            v527 = v602;
                        } else {
                            v526 = v609;
                            v514 = v606;
                            v503 = v607;
                            v489 = v608;
                            v565 = 0;
                            v543 = v610;
                            while (true) {
                                // 0x3ece3
                                v536 = v565;
                                v490 = v489;
                                v504 = v503;
                                v515 = v514;
                                v497 = v490;
                                v510 = v504;
                                v521 = v515;
                                if ((int32_t)v504 < 15) {
                                    // 0x3eced
                                    v544 = v543;
                                    v494 = v490;
                                    v508 = v504;
                                    v519 = v515;
                                    if (v2 - v490 > 1) {
                                        // 0x3edbb
                                        v550 = *(char *)(v490 + 1);
                                        v551 = (int64_t)*(char *)v490 << v504 % 64;
                                        v6 = v551;
                                        v497 = v490 + 2;
                                        v510 = v504 + 16 & 0xffffffff;
                                        v521 = (int64_t)v550 << (v504 + 8) % 64 | v515 | v551;
                                    } else {
                                        v520 = v519;
                                        v509 = v508;
                                        v495 = v494;
                                        v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g39));
                                        if (v552 < 0) {
                                            // 0x3ed22
                                            v557 = (int32_t)v509;
                                            v530 = v552;
                                            v540 = 10;
                                            if (v557 >= 11) {
                                                v541 = v540;
                                                v562 = v541 + 1 & 0xffffffff;
                                                v6 = v562;
                                                v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                                v497 = v495;
                                                v510 = v509;
                                                v521 = v520;
                                                if (v563 >= 0) {
                                                    // break (via goto) -> 0x3eddf
                                                    goto lab_0x3eddf;
                                                }
                                                // 0x3ed53
                                                v530 = v563;
                                                v540 = v562;
                                                while ((int32_t)v541 + 2 <= v557) {
                                                    // 0x3ed2d
                                                    v541 = v540;
                                                    v562 = v541 + 1 & 0xffffffff;
                                                    v6 = v562;
                                                    v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                                    v497 = v495;
                                                    v510 = v509;
                                                    v521 = v520;
                                                    if (v563 >= 0) {
                                                        // break (via goto) -> 0x3eddf
                                                        goto lab_0x3eddf;
                                                    }
                                                    // 0x3ed53
                                                    v530 = v563;
                                                    v540 = v562;
                                                }
                                            }
                                        } else {
                                            // 0x3ed11
                                            v497 = v495;
                                            v510 = v509;
                                            v521 = v520;
                                            if (v552 >= 512 && (int32_t)(v552 / 512) <= (int32_t)v509) {
                                                // break -> 0x3eddf
                                                break;
                                            }
                                        }
                                        if (v2 > v495) {
                                            // 0x3ed98
                                            v531 = *(char *)v495;
                                            v496 = v495 + 1;
                                        } else {
                                            // 0x3ed71
                                            v531 = 0;
                                            v496 = v495;
                                            if ((a7 & 2) != 0) {
                                                // 0x3ed7b
                                                *(int32_t *)a1 = 16;
                                                v19 = v544;
                                                v18 = v67;
                                                v15 = 1;
                                                v17 = v341;
                                                v14 = v536;
                                                v13 = v526;
                                                v10 = v495;
                                                v11 = v509;
                                                v12 = v520;
                                                goto lab_0x3f72a;
                                            }
                                        }
                                        // 0x3eda3
                                        v573 = v509 + 8;
                                        v574 = v573 & 0xffffffff;
                                        v575 = (int64_t)v531 << v509 % 64 | v520;
                                        v494 = v496;
                                        v508 = v574;
                                        v519 = v575;
                                        v497 = v496;
                                        v510 = v574;
                                        v521 = v575;
                                        while ((int32_t)v573 < 15) {
                                            // 0x3ecfc
                                            v520 = v519;
                                            v509 = v508;
                                            v495 = v494;
                                            v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g39));
                                            if (v552 < 0) {
                                                // 0x3ed22
                                                v557 = (int32_t)v509;
                                                v530 = v552;
                                                v540 = 10;
                                                if (v557 >= 11) {
                                                    v541 = v540;
                                                    v562 = v541 + 1 & 0xffffffff;
                                                    v6 = v562;
                                                    v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                                    v497 = v495;
                                                    v510 = v509;
                                                    v521 = v520;
                                                    if (v563 >= 0) {
                                                        // break (via goto) -> 0x3eddf
                                                        goto lab_0x3eddf;
                                                    }
                                                    // 0x3ed53
                                                    v530 = v563;
                                                    v540 = v562;
                                                    while ((int32_t)v541 + 2 <= v557) {
                                                        // 0x3ed2d
                                                        v541 = v540;
                                                        v562 = v541 + 1 & 0xffffffff;
                                                        v6 = v562;
                                                        v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                                        v497 = v495;
                                                        v510 = v509;
                                                        v521 = v520;
                                                        if (v563 >= 0) {
                                                            // break (via goto) -> 0x3eddf
                                                            goto lab_0x3eddf;
                                                        }
                                                        // 0x3ed53
                                                        v530 = v563;
                                                        v540 = v562;
                                                    }
                                                }
                                            } else {
                                                // 0x3ed11
                                                v497 = v495;
                                                v510 = v509;
                                                v521 = v520;
                                                if (v552 >= 512 && (int32_t)(v552 / 512) <= (int32_t)v509) {
                                                    // break -> 0x3eddf
                                                    break;
                                                }
                                            }
                                            if (v2 > v495) {
                                                // 0x3ed98
                                                v531 = *(char *)v495;
                                                v496 = v495 + 1;
                                            } else {
                                                // 0x3ed71
                                                v531 = 0;
                                                v496 = v495;
                                                if ((a7 & 2) != 0) {
                                                    // 0x3ed7b
                                                    *(int32_t *)a1 = 16;
                                                    v19 = v544;
                                                    v18 = v67;
                                                    v15 = 1;
                                                    v17 = v341;
                                                    v14 = v536;
                                                    v13 = v526;
                                                    v10 = v495;
                                                    v11 = v509;
                                                    v12 = v520;
                                                    goto lab_0x3f72a;
                                                }
                                            }
                                            // 0x3eda3
                                            v573 = v509 + 8;
                                            v574 = v573 & 0xffffffff;
                                            v575 = (int64_t)v531 << v509 % 64 | v520;
                                            v494 = v496;
                                            v508 = v574;
                                            v519 = v575;
                                            v497 = v496;
                                            v510 = v574;
                                            v521 = v575;
                                        }
                                    }
                                }
                                // 0x3eddf
                                v522 = v521;
                                v498 = v497;
                                v548 = *(int16_t *)(v594 + 2 * (v522 & (int64_t)(int32_t)&g39));
                                v549 = v548;
                                v532 = v549;
                                v542 = 10;
                                if (v548 < 0) {
                                    v553 = v542 + 1 & 0xffffffff;
                                    v6 = v553;
                                    v554 = *(int16_t *)(2 * (((v522 >> v542 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * v532 ^ -0x100000000) >> 32)) + v25);
                                    v555 = v554;
                                    v532 = v555;
                                    v542 = v553;
                                    v488 = v553;
                                    v533 = v555;
                                    while (v554 < 0) {
                                        // 0x3ee09
                                        v553 = v542 + 1 & 0xffffffff;
                                        v6 = v553;
                                        v554 = *(int16_t *)(2 * (((v522 >> v542 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * v532 ^ -0x100000000) >> 32)) + v25);
                                        v555 = v554;
                                        v532 = v555;
                                        v542 = v553;
                                        v488 = v553;
                                        v533 = v555;
                                    }
                                } else {
                                    // 0x3edf6
                                    v556 = v548 / 512;
                                    v6 = v556;
                                    v488 = v556;
                                    v533 = v549 % 512;
                                }
                                // 0x3ee30
                                v534 = v533;
                                v558 = v510 - v488;
                                v559 = v558 & 0xffffffff;
                                v560 = v534;
                                v561 = v522 >> v488 % 64;
                                if (v560 > 15) {
                                    // break -> 0x3ee58
                                    break;
                                }
                                // 0x3ee42
                                v564 = v536 + 1;
                                v565 = v564 & 0xffffffff;
                                *(char *)(v595 + v536) = (char)v534;
                                v566 = *v593 + *v592;
                                v567 = v564;
                                v514 = v561;
                                v503 = v559;
                                v489 = v498;
                                v543 = v560;
                                v528 = v526;
                                v538 = v565;
                                v492 = v498;
                                v506 = v559;
                                v517 = v561;
                                v484 = v566;
                                v483 = v567;
                                if (v566 <= v567) {
                                    // break (via goto) -> 0x3ef4a
                                    goto lab_0x3ef4a;
                                }
                            }
                            if (v536 == 0 == v560 == 16) {
                                // 0x3ee75
                                *(int32_t *)a1 = 17;
                                v19 = 16;
                                v18 = v67;
                                v15 = 0xffffffff;
                                v17 = v341;
                                v14 = 0;
                                v13 = v526;
                                v10 = v498;
                                v11 = v559;
                                v12 = v561;
                                goto lab_0x3f72a;
                            }
                            // 0x3ee81
                            v568 = v534 + 0xfffffff0 & 0xffffffff;
                            v569 = *(char *)(v568 + (int64_t)&g76);
                            v570 = (int64_t)v569;
                            v571 = v570 & 0xffffffff;
                            v572 = (int32_t)v569;
                            v523 = v561;
                            v511 = v559;
                            v499 = v498;
                            v501 = v498;
                            v513 = v559;
                            v525 = v561;
                            if ((int32_t)v558 < v572) {
                                v500 = v499;
                                v512 = v511;
                                v524 = v523;
                                if (v2 > v500) {
                                    // 0x3eed2
                                    v535 = *(char *)v500;
                                    v502 = v500 + 1;
                                } else {
                                    // 0x3eeab
                                    v535 = 0;
                                    v502 = v500;
                                    if ((a7 & 2) != 0) {
                                        // 0x3eeb5
                                        *(int32_t *)a1 = 18;
                                        v19 = v560;
                                        v18 = v67;
                                        v15 = 1;
                                        v17 = v341;
                                        v14 = v536;
                                        v13 = v571;
                                        v10 = v500;
                                        v11 = v512;
                                        v12 = v524;
                                        goto lab_0x3f72a;
                                    }
                                }
                                // 0x3eedd
                                v589 = v512 + 8;
                                v590 = v589 & 0xffffffff;
                                v591 = (int64_t)v535 << v512 % 64 | v524;
                                v523 = v591;
                                v511 = v590;
                                v499 = v502;
                                v501 = v502;
                                v513 = v590;
                                v525 = v591;
                                while ((int32_t)v589 < v572) {
                                    // 0x3ee97
                                    v500 = v499;
                                    v512 = v511;
                                    v524 = v523;
                                    if (v2 > v500) {
                                        // 0x3eed2
                                        v535 = *(char *)v500;
                                        v502 = v500 + 1;
                                    } else {
                                        // 0x3eeab
                                        v535 = 0;
                                        v502 = v500;
                                        if ((a7 & 2) != 0) {
                                            // 0x3eeb5
                                            *(int32_t *)a1 = 18;
                                            v19 = v560;
                                            v18 = v67;
                                            v15 = 1;
                                            v17 = v341;
                                            v14 = v536;
                                            v13 = v571;
                                            v10 = v500;
                                            v11 = v512;
                                            v12 = v524;
                                            goto lab_0x3f72a;
                                        }
                                    }
                                    // 0x3eedd
                                    v589 = v512 + 8;
                                    v590 = v589 & 0xffffffff;
                                    v591 = (int64_t)v535 << v512 % 64 | v524;
                                    v523 = v591;
                                    v511 = v590;
                                    v499 = v502;
                                    v501 = v502;
                                    v513 = v590;
                                    v525 = v591;
                                }
                            }
                            // 0x3eeef
                            v576 = v525 & (int64_t)(1 << (int32_t)(v569 % 32)) + 0xffffffff;
                            v6 = v576 & 0xffffffff;
                            v577 = *(char *)(v568 + (int64_t)&g78);
                            v578 = v576 + (int64_t)v577;
                            v579 = v578 & 0xffffffff;
                            v6 = v579;
                            v588 = 0;
                            if (v560 == 16) {
                                // 0x3ef28
                                v588 = *(char *)((v536 + 0xffffffff & 0xffffffff) + v595);
                            }
                            // 0x3ef34
                            v580 = v513 - v570 & 0xffffffff;
                            v581 = v525 >> v570 % 64;
                            v582 = v578 + v536;
                            v583 = v582 & 0xffffffff;
                            __asm_rep_stosb_memset((char *)(v595 + v536), v588, v579);
                            v584 = *v592;
                            v585 = *v593;
                            v586 = v585 + v584;
                            v587 = v582;
                            v528 = v571;
                            v538 = v583;
                            v492 = v501;
                            v506 = v580;
                            v517 = v581;
                            v484 = v586;
                            v483 = v587;
                            while (v586 > v587) {
                                // 0x3ece3
                                v526 = v571;
                                v514 = v581;
                                v503 = v580;
                                v489 = v501;
                                v565 = v583;
                                v543 = v560;
                                while (true) {
                                    // 0x3ece3
                                    v536 = v565;
                                    v490 = v489;
                                    v504 = v503;
                                    v515 = v514;
                                    v497 = v490;
                                    v510 = v504;
                                    v521 = v515;
                                    if ((int32_t)v504 < 15) {
                                        // 0x3eced
                                        v544 = v543;
                                        v494 = v490;
                                        v508 = v504;
                                        v519 = v515;
                                        if (v2 - v490 > 1) {
                                            // 0x3edbb
                                            v550 = *(char *)(v490 + 1);
                                            v551 = (int64_t)*(char *)v490 << v504 % 64;
                                            v6 = v551;
                                            v497 = v490 + 2;
                                            v510 = v504 + 16 & 0xffffffff;
                                            v521 = (int64_t)v550 << (v504 + 8) % 64 | v515 | v551;
                                        } else {
                                            v520 = v519;
                                            v509 = v508;
                                            v495 = v494;
                                            v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g39));
                                            if (v552 < 0) {
                                                // 0x3ed22
                                                v557 = (int32_t)v509;
                                                v530 = v552;
                                                v540 = 10;
                                                if (v557 >= 11) {
                                                    v541 = v540;
                                                    v562 = v541 + 1 & 0xffffffff;
                                                    v6 = v562;
                                                    v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                                    v497 = v495;
                                                    v510 = v509;
                                                    v521 = v520;
                                                    if (v563 >= 0) {
                                                        // break (via goto) -> 0x3eddf
                                                        goto lab_0x3eddf;
                                                    }
                                                    // 0x3ed53
                                                    v530 = v563;
                                                    v540 = v562;
                                                    while ((int32_t)v541 + 2 <= v557) {
                                                        // 0x3ed2d
                                                        v541 = v540;
                                                        v562 = v541 + 1 & 0xffffffff;
                                                        v6 = v562;
                                                        v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                                        v497 = v495;
                                                        v510 = v509;
                                                        v521 = v520;
                                                        if (v563 >= 0) {
                                                            // break (via goto) -> 0x3eddf
                                                            goto lab_0x3eddf;
                                                        }
                                                        // 0x3ed53
                                                        v530 = v563;
                                                        v540 = v562;
                                                    }
                                                }
                                            } else {
                                                // 0x3ed11
                                                v497 = v495;
                                                v510 = v509;
                                                v521 = v520;
                                                if (v552 >= 512 && (int32_t)(v552 / 512) <= (int32_t)v509) {
                                                    // break -> 0x3eddf
                                                    break;
                                                }
                                            }
                                            if (v2 > v495) {
                                                // 0x3ed98
                                                v531 = *(char *)v495;
                                                v496 = v495 + 1;
                                            } else {
                                                // 0x3ed71
                                                v531 = 0;
                                                v496 = v495;
                                                if ((a7 & 2) != 0) {
                                                    // 0x3ed7b
                                                    *(int32_t *)a1 = 16;
                                                    v19 = v544;
                                                    v18 = v67;
                                                    v15 = 1;
                                                    v17 = v341;
                                                    v14 = v536;
                                                    v13 = v526;
                                                    v10 = v495;
                                                    v11 = v509;
                                                    v12 = v520;
                                                    goto lab_0x3f72a;
                                                }
                                            }
                                            // 0x3eda3
                                            v573 = v509 + 8;
                                            v574 = v573 & 0xffffffff;
                                            v575 = (int64_t)v531 << v509 % 64 | v520;
                                            v494 = v496;
                                            v508 = v574;
                                            v519 = v575;
                                            v497 = v496;
                                            v510 = v574;
                                            v521 = v575;
                                            while ((int32_t)v573 < 15) {
                                                // 0x3ecfc
                                                v520 = v519;
                                                v509 = v508;
                                                v495 = v494;
                                                v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g39));
                                                if (v552 < 0) {
                                                    // 0x3ed22
                                                    v557 = (int32_t)v509;
                                                    v530 = v552;
                                                    v540 = 10;
                                                    if (v557 >= 11) {
                                                        v541 = v540;
                                                        v562 = v541 + 1 & 0xffffffff;
                                                        v6 = v562;
                                                        v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                                        v497 = v495;
                                                        v510 = v509;
                                                        v521 = v520;
                                                        if (v563 >= 0) {
                                                            // break (via goto) -> 0x3eddf
                                                            goto lab_0x3eddf;
                                                        }
                                                        // 0x3ed53
                                                        v530 = v563;
                                                        v540 = v562;
                                                        while ((int32_t)v541 + 2 <= v557) {
                                                            // 0x3ed2d
                                                            v541 = v540;
                                                            v562 = v541 + 1 & 0xffffffff;
                                                            v6 = v562;
                                                            v563 = *(int16_t *)(2 * (((v520 >> v541 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * (int64_t)v530 ^ -0x100000000) >> 32)) + v25);
                                                            v497 = v495;
                                                            v510 = v509;
                                                            v521 = v520;
                                                            if (v563 >= 0) {
                                                                // break (via goto) -> 0x3eddf
                                                                goto lab_0x3eddf;
                                                            }
                                                            // 0x3ed53
                                                            v530 = v563;
                                                            v540 = v562;
                                                        }
                                                    }
                                                } else {
                                                    // 0x3ed11
                                                    v497 = v495;
                                                    v510 = v509;
                                                    v521 = v520;
                                                    if (v552 >= 512 && (int32_t)(v552 / 512) <= (int32_t)v509) {
                                                        // break -> 0x3eddf
                                                        break;
                                                    }
                                                }
                                                if (v2 > v495) {
                                                    // 0x3ed98
                                                    v531 = *(char *)v495;
                                                    v496 = v495 + 1;
                                                } else {
                                                    // 0x3ed71
                                                    v531 = 0;
                                                    v496 = v495;
                                                    if ((a7 & 2) != 0) {
                                                        // 0x3ed7b
                                                        *(int32_t *)a1 = 16;
                                                        v19 = v544;
                                                        v18 = v67;
                                                        v15 = 1;
                                                        v17 = v341;
                                                        v14 = v536;
                                                        v13 = v526;
                                                        v10 = v495;
                                                        v11 = v509;
                                                        v12 = v520;
                                                        goto lab_0x3f72a;
                                                    }
                                                }
                                                // 0x3eda3
                                                v573 = v509 + 8;
                                                v574 = v573 & 0xffffffff;
                                                v575 = (int64_t)v531 << v509 % 64 | v520;
                                                v494 = v496;
                                                v508 = v574;
                                                v519 = v575;
                                                v497 = v496;
                                                v510 = v574;
                                                v521 = v575;
                                            }
                                        }
                                    }
                                    // 0x3eddf
                                    v522 = v521;
                                    v498 = v497;
                                    v548 = *(int16_t *)(v594 + 2 * (v522 & (int64_t)(int32_t)&g39));
                                    v549 = v548;
                                    v532 = v549;
                                    v542 = 10;
                                    if (v548 < 0) {
                                        v553 = v542 + 1 & 0xffffffff;
                                        v6 = v553;
                                        v554 = *(int16_t *)(2 * (((v522 >> v542 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * v532 ^ -0x100000000) >> 32)) + v25);
                                        v555 = v554;
                                        v532 = v555;
                                        v542 = v553;
                                        v488 = v553;
                                        v533 = v555;
                                        while (v554 < 0) {
                                            // 0x3ee09
                                            v553 = v542 + 1 & 0xffffffff;
                                            v6 = v553;
                                            v554 = *(int16_t *)(2 * (((v522 >> v542 % 64) % 2 | (int64_t)&g3) + ((0x100000000 * v532 ^ -0x100000000) >> 32)) + v25);
                                            v555 = v554;
                                            v532 = v555;
                                            v542 = v553;
                                            v488 = v553;
                                            v533 = v555;
                                        }
                                    } else {
                                        // 0x3edf6
                                        v556 = v548 / 512;
                                        v6 = v556;
                                        v488 = v556;
                                        v533 = v549 % 512;
                                    }
                                    // 0x3ee30
                                    v534 = v533;
                                    v558 = v510 - v488;
                                    v559 = v558 & 0xffffffff;
                                    v560 = v534;
                                    v561 = v522 >> v488 % 64;
                                    if (v560 > 15) {
                                        // break -> 0x3ee58
                                        break;
                                    }
                                    // 0x3ee42
                                    v564 = v536 + 1;
                                    v565 = v564 & 0xffffffff;
                                    *(char *)(v595 + v536) = (char)v534;
                                    v566 = *v593 + *v592;
                                    v567 = v564;
                                    v514 = v561;
                                    v503 = v559;
                                    v489 = v498;
                                    v543 = v560;
                                    v528 = v526;
                                    v538 = v565;
                                    v492 = v498;
                                    v506 = v559;
                                    v517 = v561;
                                    v484 = v566;
                                    v483 = v567;
                                    if (v566 <= v567) {
                                        // break (via goto) -> 0x3ef4a
                                        goto lab_0x3ef4a;
                                    }
                                }
                                if (v536 == 0 == v560 == 16) {
                                    // 0x3ee75
                                    *(int32_t *)a1 = 17;
                                    v19 = 16;
                                    v18 = v67;
                                    v15 = 0xffffffff;
                                    v17 = v341;
                                    v14 = 0;
                                    v13 = v526;
                                    v10 = v498;
                                    v11 = v559;
                                    v12 = v561;
                                    goto lab_0x3f72a;
                                }
                                // 0x3ee81
                                v568 = v534 + 0xfffffff0 & 0xffffffff;
                                v569 = *(char *)(v568 + (int64_t)&g76);
                                v570 = (int64_t)v569;
                                v571 = v570 & 0xffffffff;
                                v572 = (int32_t)v569;
                                v523 = v561;
                                v511 = v559;
                                v499 = v498;
                                v501 = v498;
                                v513 = v559;
                                v525 = v561;
                                if ((int32_t)v558 < v572) {
                                    v500 = v499;
                                    v512 = v511;
                                    v524 = v523;
                                    if (v2 > v500) {
                                        // 0x3eed2
                                        v535 = *(char *)v500;
                                        v502 = v500 + 1;
                                    } else {
                                        // 0x3eeab
                                        v535 = 0;
                                        v502 = v500;
                                        if ((a7 & 2) != 0) {
                                            // 0x3eeb5
                                            *(int32_t *)a1 = 18;
                                            v19 = v560;
                                            v18 = v67;
                                            v15 = 1;
                                            v17 = v341;
                                            v14 = v536;
                                            v13 = v571;
                                            v10 = v500;
                                            v11 = v512;
                                            v12 = v524;
                                            goto lab_0x3f72a;
                                        }
                                    }
                                    // 0x3eedd
                                    v589 = v512 + 8;
                                    v590 = v589 & 0xffffffff;
                                    v591 = (int64_t)v535 << v512 % 64 | v524;
                                    v523 = v591;
                                    v511 = v590;
                                    v499 = v502;
                                    v501 = v502;
                                    v513 = v590;
                                    v525 = v591;
                                    while ((int32_t)v589 < v572) {
                                        // 0x3ee97
                                        v500 = v499;
                                        v512 = v511;
                                        v524 = v523;
                                        if (v2 > v500) {
                                            // 0x3eed2
                                            v535 = *(char *)v500;
                                            v502 = v500 + 1;
                                        } else {
                                            // 0x3eeab
                                            v535 = 0;
                                            v502 = v500;
                                            if ((a7 & 2) != 0) {
                                                // 0x3eeb5
                                                *(int32_t *)a1 = 18;
                                                v19 = v560;
                                                v18 = v67;
                                                v15 = 1;
                                                v17 = v341;
                                                v14 = v536;
                                                v13 = v571;
                                                v10 = v500;
                                                v11 = v512;
                                                v12 = v524;
                                                goto lab_0x3f72a;
                                            }
                                        }
                                        // 0x3eedd
                                        v589 = v512 + 8;
                                        v590 = v589 & 0xffffffff;
                                        v591 = (int64_t)v535 << v512 % 64 | v524;
                                        v523 = v591;
                                        v511 = v590;
                                        v499 = v502;
                                        v501 = v502;
                                        v513 = v590;
                                        v525 = v591;
                                    }
                                }
                                // 0x3eeef
                                v576 = v525 & (int64_t)(1 << (int32_t)(v569 % 32)) + 0xffffffff;
                                v6 = v576 & 0xffffffff;
                                v577 = *(char *)(v568 + (int64_t)&g78);
                                v578 = v576 + (int64_t)v577;
                                v579 = v578 & 0xffffffff;
                                v6 = v579;
                                v588 = 0;
                                if (v560 == 16) {
                                    // 0x3ef28
                                    v588 = *(char *)((v536 + 0xffffffff & 0xffffffff) + v595);
                                }
                                // 0x3ef34
                                v580 = v513 - v570 & 0xffffffff;
                                v581 = v525 >> v570 % 64;
                                v582 = v578 + v536;
                                v583 = v582 & 0xffffffff;
                                __asm_rep_stosb_memset((char *)(v595 + v536), v588, v579);
                                v584 = *v592;
                                v585 = *v593;
                                v586 = v585 + v584;
                                v587 = v582;
                                v528 = v571;
                                v538 = v583;
                                v492 = v501;
                                v506 = v580;
                                v517 = v581;
                                v484 = v586;
                                v483 = v587;
                            }
                            // 0x3ef4a
                            v518 = v517;
                            v507 = v506;
                            v493 = v492;
                            v539 = v538;
                            v529 = v528;
                            v487 = v584;
                            v485 = v585;
                            v516 = v518;
                            v505 = v507;
                            v491 = v493;
                            v537 = v539;
                            v545 = v560;
                            v527 = v529;
                            if (v484 != v483) {
                                // 0x3ef56
                                *(int32_t *)a1 = 21;
                                v19 = v560;
                                v18 = v67;
                                v15 = 0xffffffff;
                                v17 = v341;
                                v14 = v539;
                                v13 = v529;
                                v10 = v493;
                                v11 = v507;
                                v12 = v518;
                                goto lab_0x3f72a;
                            }
                        }
                        // 0x3ef62
                        v486 = v487;
                        __asm_rep_movsb_memcpy(v596, v597, v486);
                        __asm_rep_movsb_memcpy(v598, (char *)(v71 * v486 + v416), (int64_t)v485);
                        v477 = v545;
                        v478 = v537;
                        v479 = v527;
                        v480 = v491;
                        v481 = v505;
                        v482 = v516;
                    }
                    // 0x3ef80
                    v599 = *v348 - 1;
                    *v348 = v599;
                }
            }
            // 0x3ef8e
            while (true) {
              lab_0x3ef8e_3:;
                // 0x3ef8e
                int64_t v297; // 0x3e19c
                int64_t v298 = v297;
                int64_t v299; // 0x3e19c
                int64_t v300 = v299;
                int64_t v301; // 0x3e19c
                int64_t v302 = v301;
                int64_t v303; // 0x3e19c
                v96 = v303;
                int64_t v304; // 0x3e19c
                int64_t v305 = v304;
                int64_t v306; // 0x3e19c
                int64_t v307 = v306;
                int64_t v308; // 0x3e19c
                v98 = v308;
                int32_t v309; // 0x3e19c
                v99 = v309;
                int64_t v109 = v307; // 0x3e19c
                int64_t v107 = v305; // 0x3e19c
                int64_t v105 = v302; // 0x3e19c
                int64_t v103 = v300; // 0x3e19c
                int64_t v101 = v298; // 0x3e19c
                while (true) {
                  lab_0x3ef8e_2:;
                    int64_t v100 = v101;
                    int64_t v102 = v103;
                    int64_t v104 = v105;
                    int64_t v106 = v107;
                    int64_t v108 = v109;
                    int64_t v110 = v2 - v104; // 0x3ef91
                    int64_t v111 = v100; // 0x3ef98
                    int64_t v112 = v102; // 0x3ef98
                    int64_t v113 = v104; // 0x3ef98
                    int64_t v114 = v108; // 0x3ef98
                    v115 = v108;
                    v116 = v106;
                    v117 = v104;
                    v118 = v102;
                    v119 = v100;
                    v120 = v110;
                    if (v110 < 4) {
                        goto lab_0x3efb0;
                    } else {
                        int64_t v121 = v114;
                        int64_t v122 = v113;
                        int64_t v123 = v112;
                        int64_t v124 = v111;
                        uint32_t v125 = (int32_t)v123;
                        while (v3 - v121 > 1) {
                            int64_t v126 = v122; // 0x3f134
                            int64_t v127 = v123; // 0x3f134
                            int64_t v128 = v124; // 0x3f134
                            if (v125 < 30) {
                                uint32_t v129 = *(int32_t *)v122; // 0x3f136
                                v126 = v122 + 4;
                                v127 = v123 + 32 & 0xffffffff;
                                v128 = (int64_t)v129 << v123 % 64 | v124;
                            }
                            uint64_t v130 = v128;
                            int64_t v131 = v127;
                            int64_t v132 = v126;
                            int16_t v133 = *(int16_t *)(2 * (v130 & (int64_t)(int32_t)&g39) + v81); // 0x3f152
                            int64_t v134 = v133; // 0x3f152
                            v6 = v134;
                            int64_t v135 = v134; // 0x3f15d
                            int64_t v136 = 10; // 0x3f15d
                            int64_t v137; // 0x3e19c
                            int64_t v138; // 0x3e19c
                            if (v133 < 0) {
                                uint64_t v139 = v136;
                                int64_t v140 = v135; // 0x3f171
                                int64_t v141 = v139 + 1 & 0xffffffff; // 0x3f16e
                                int64_t v142 = v140 & 0xffffffff ^ 0xffffffff; // 0x3f171
                                v6 = v142;
                                uint16_t v143 = *(int16_t *)(2 * (((v130 >> v139 % 64) % 2 | (int64_t)&g57) + (0x100000000 * v142 >> 32)) + v25); // 0x3f187
                                int64_t v144 = v143; // 0x3f187
                                v6 = v144;
                                v135 = v144;
                                v136 = v141;
                                v137 = v144;
                                v138 = v141;
                                while (v143 < 0) {
                                    // 0x3f16b
                                    v139 = v136;
                                    v140 = v135;
                                    v141 = v139 + 1 & 0xffffffff;
                                    v142 = v140 & 0xffffffff ^ 0xffffffff;
                                    v6 = v142;
                                    v143 = *(int16_t *)(2 * (((v130 >> v139 % 64) % 2 | (int64_t)&g57) + (0x100000000 * v142 >> 32)) + v25);
                                    v144 = v143;
                                    v6 = v144;
                                    v135 = v144;
                                    v136 = v141;
                                    v137 = v144;
                                    v138 = v141;
                                }
                            } else {
                                // 0x3f15f
                                v137 = v134;
                                v138 = v133 / 512;
                            }
                            uint64_t v145 = v138;
                            int64_t v146 = v137; // 0x3f1f1
                            int64_t v147 = v131 - v145; // 0x3f195
                            uint64_t v148 = v130 >> v145 % 64;
                            if ((v146 & 256) != 0) {
                                // 0x3f210
                                goto lab_0x3f210_3;
                            }
                            int16_t v149 = *(int16_t *)(2 * (v148 & (int64_t)(int32_t)&g39) + v81); // 0x3f1ab
                            int64_t v150 = v149; // 0x3f1ab
                            int64_t v151 = v150; // 0x3f1b6
                            int64_t v152 = 10; // 0x3f1b6
                            int64_t v153; // 0x3e19c
                            int64_t v154; // 0x3e19c
                            if (v149 < 0) {
                                uint64_t v155 = v152;
                                int64_t v156 = v151;
                                int64_t v157 = v155 + 1 & 0xffffffff; // 0x3f1c7
                                uint16_t v158 = *(int16_t *)(2 * (((v148 >> v155 % 64) % 2 | (int64_t)&g57) + ((0x100000000 * v156 ^ -0x100000000) >> 32)) + v25); // 0x3f1e1
                                int64_t v159 = v158; // 0x3f1e1
                                v151 = v159;
                                v152 = v157;
                                v153 = v157;
                                v154 = v159;
                                while (v158 < 0) {
                                    // 0x3f1c4
                                    v155 = v152;
                                    v156 = v151;
                                    v157 = v155 + 1 & 0xffffffff;
                                    v158 = *(int16_t *)(2 * (((v148 >> v155 % 64) % 2 | (int64_t)&g57) + ((0x100000000 * v156 ^ -0x100000000) >> 32)) + v25);
                                    v159 = v158;
                                    v151 = v159;
                                    v152 = v157;
                                    v153 = v157;
                                    v154 = v159;
                                }
                            } else {
                                // 0x3f1b8
                                v153 = v149 / 512;
                                v154 = v150;
                            }
                            int64_t v160 = v154;
                            uint64_t v161 = v153;
                            int64_t v162 = v147 - v161 & 0xffffffff; // 0x3f1ee
                            *(char *)v121 = (char)v146;
                            int64_t v163 = v148 >> v161 % 64;
                            if ((v160 & 256) != 0) {
                                // 0x3f1fd
                                goto lab_0x3f210_3;
                            }
                            // 0x3f204
                            *(char *)(v121 + 1) = (char)v160;
                            int64_t v164 = v121 + 2; // 0x3f207
                            int64_t v165 = v2 - v132; // 0x3ef91
                            v111 = v163;
                            v112 = v162;
                            v113 = v132;
                            v114 = v164;
                            if (v165 < 4) {
                                // 0x3ef8e
                                v115 = v164;
                                v116 = v146 & 0xffffffff;
                                v117 = v132;
                                v118 = v162;
                                v119 = v163;
                                v120 = v165;
                                goto lab_0x3efb0;
                            }
                            v121 = v114;
                            v122 = v113;
                            v123 = v112;
                            v124 = v111;
                            v125 = (int32_t)v123;
                        }
                        // 0x3f082
                        v166 = v121;
                        v167 = v122;
                        v168 = v123;
                        v169 = v124;
                        v97 = v121;
                        v95 = v122;
                        v92 = v123;
                        v80 = v124;
                        if (v125 < 15) {
                            goto lab_0x3f088;
                        } else {
                            goto lab_0x3f0ac;
                        }
                    }
                }
                goto lab_0x3f210_3;
            }
            goto lab_0x3f5b7_2;
        } else {
            int64_t v611 = v344 >> v343 % 8;
            int64_t v612 = v343 & 0xfffffff8;
            int64_t v613 = v339;
            int64_t v614 = 0;
            uint32_t v615 = (int32_t)v612;
            int64_t v616; // 0x3e19c
            int64_t v617; // 0x3e19c
            int64_t v618; // 0x3e19c
            int64_t v619; // 0x3e19c
            int64_t v620; // 0x3e19c
            int64_t v621; // 0x3e19c
            int64_t v622; // 0x3e19c
            int64_t v623; // 0x3e19c
            int64_t v624; // 0x3e19c
            int64_t v625; // 0x3e19c
            int64_t v626; // 0x3e19c
            int64_t v627; // 0x3e19c
            int64_t v628; // 0x3e19c
            char v629; // 0x3e19c
            int64_t v630; // 0x3e6a9
            int64_t v631; // 0x3e6a9
            int64_t v632; // 0x3e6b0
            if (v615 == 0) {
                if (v2 > v613) {
                    // 0x3e71a
                    *(char *)(v633 + v614) = *(char *)v613;
                    v620 = v613 + 1;
                    v624 = v612;
                    v628 = v611;
                } else {
                    if ((a7 & 2) != 0) {
                        // 0x3e6e7
                        *(int32_t *)a1 = 7;
                        v19 = v342;
                        v18 = v67;
                        v15 = 1;
                        v17 = v341;
                        v14 = v614;
                        v13 = v63;
                        v10 = v613;
                        v11 = v612;
                        v12 = v611;
                        goto lab_0x3f72a;
                    }
                    // 0x3e70d
                    *(char *)(v633 + v614) = 0;
                    v620 = v613;
                    v624 = v612;
                    v628 = v611;
                }
            } else {
                // 0x3e65a
                v625 = v611;
                v621 = v612;
                v616 = v613;
                v618 = v613;
                v623 = v612;
                v627 = v611;
                if (v615 < 8) {
                    v617 = v616;
                    v622 = v621;
                    v626 = v625;
                    if (v2 > v617) {
                        // 0x3e69b
                        v629 = *(char *)v617;
                        v619 = v617 + 1;
                    } else {
                        // 0x3e674
                        v629 = 0;
                        v619 = v617;
                        if ((a7 & 2) != 0) {
                            // 0x3e67e
                            *(int32_t *)a1 = 6;
                            v19 = v342;
                            v18 = v67;
                            v15 = 1;
                            v17 = v341;
                            v14 = v614;
                            v13 = v63;
                            v10 = v617;
                            v11 = v622;
                            v12 = v626;
                            goto lab_0x3f72a;
                        }
                    }
                    // 0x3e6a6
                    v630 = v622 + 8;
                    v631 = v630 & 0xffffffff;
                    v632 = (int64_t)v629 << v622 % 64 | v626;
                    v618 = v619;
                    v623 = v631;
                    v627 = v632;
                    while ((int32_t)v630 < 8) {
                        // 0x3e660
                        v617 = v619;
                        v622 = v631;
                        v626 = v632;
                        if (v2 > v617) {
                            // 0x3e69b
                            v629 = *(char *)v617;
                            v619 = v617 + 1;
                        } else {
                            // 0x3e674
                            v629 = 0;
                            v619 = v617;
                            if ((a7 & 2) != 0) {
                                // 0x3e67e
                                *(int32_t *)a1 = 6;
                                v19 = v342;
                                v18 = v67;
                                v15 = 1;
                                v17 = v341;
                                v14 = v614;
                                v13 = v63;
                                v10 = v617;
                                v11 = v622;
                                v12 = v626;
                                goto lab_0x3f72a;
                            }
                        }
                        // 0x3e6a6
                        v630 = v622 + 8;
                        v631 = v630 & 0xffffffff;
                        v632 = (int64_t)v629 << v622 % 64 | v626;
                        v618 = v619;
                        v623 = v631;
                        v627 = v632;
                    }
                }
                // 0x3e6b5
                *(char *)(v633 + v614) = (char)v627;
                v620 = v618;
                v624 = v623 + 0xfffffff8 & 0xffffffff;
                v628 = v627 / 256;
            }
            int64_t v634 = v628;
            int64_t v635 = v624;
            int64_t v636 = v620;
            int64_t v637 = v614 + 1; // 0x3e72a
            while ((int32_t)v637 < 4) {
                // 0x3e655
                v611 = v634;
                v612 = v635;
                v613 = v636;
                v614 = v637 & 0xffffffff;
                v615 = (int32_t)v612;
                if (v615 == 0) {
                    if (v2 > v613) {
                        // 0x3e71a
                        *(char *)(v633 + v614) = *(char *)v613;
                        v620 = v613 + 1;
                        v624 = v612;
                        v628 = v611;
                    } else {
                        if ((a7 & 2) != 0) {
                            // 0x3e6e7
                            *(int32_t *)a1 = 7;
                            v19 = v342;
                            v18 = v67;
                            v15 = 1;
                            v17 = v341;
                            v14 = v614;
                            v13 = v63;
                            v10 = v613;
                            v11 = v612;
                            v12 = v611;
                            goto lab_0x3f72a;
                        }
                        // 0x3e70d
                        *(char *)(v633 + v614) = 0;
                        v620 = v613;
                        v624 = v612;
                        v628 = v611;
                    }
                } else {
                    // 0x3e65a
                    v625 = v611;
                    v621 = v612;
                    v616 = v613;
                    v618 = v613;
                    v623 = v612;
                    v627 = v611;
                    if (v615 < 8) {
                        v617 = v616;
                        v622 = v621;
                        v626 = v625;
                        if (v2 > v617) {
                            // 0x3e69b
                            v629 = *(char *)v617;
                            v619 = v617 + 1;
                        } else {
                            // 0x3e674
                            v629 = 0;
                            v619 = v617;
                            if ((a7 & 2) != 0) {
                                // 0x3e67e
                                *(int32_t *)a1 = 6;
                                v19 = v342;
                                v18 = v67;
                                v15 = 1;
                                v17 = v341;
                                v14 = v614;
                                v13 = v63;
                                v10 = v617;
                                v11 = v622;
                                v12 = v626;
                                goto lab_0x3f72a;
                            }
                        }
                        // 0x3e6a6
                        v630 = v622 + 8;
                        v631 = v630 & 0xffffffff;
                        v632 = (int64_t)v629 << v622 % 64 | v626;
                        v618 = v619;
                        v623 = v631;
                        v627 = v632;
                        while ((int32_t)v630 < 8) {
                            // 0x3e660
                            v617 = v619;
                            v622 = v631;
                            v626 = v632;
                            if (v2 > v617) {
                                // 0x3e69b
                                v629 = *(char *)v617;
                                v619 = v617 + 1;
                            } else {
                                // 0x3e674
                                v629 = 0;
                                v619 = v617;
                                if ((a7 & 2) != 0) {
                                    // 0x3e67e
                                    *(int32_t *)a1 = 6;
                                    v19 = v342;
                                    v18 = v67;
                                    v15 = 1;
                                    v17 = v341;
                                    v14 = v614;
                                    v13 = v63;
                                    v10 = v617;
                                    v11 = v622;
                                    v12 = v626;
                                    goto lab_0x3f72a;
                                }
                            }
                            // 0x3e6a6
                            v630 = v622 + 8;
                            v631 = v630 & 0xffffffff;
                            v632 = (int64_t)v629 << v622 % 64 | v626;
                            v618 = v619;
                            v623 = v631;
                            v627 = v632;
                        }
                    }
                    // 0x3e6b5
                    *(char *)(v633 + v614) = (char)v627;
                    v620 = v618;
                    v624 = v623 + 0xfffffff8 & 0xffffffff;
                    v628 = v627 / 256;
                }
                // 0x3e72a
                v634 = v628;
                v635 = v624;
                v636 = v620;
                v637 = v614 + 1;
            }
            uint16_t v638 = *v639; // 0x3e73d
            int64_t v640 = v638; // 0x3e73d
            if (v638 != -1 - *(int16_t *)(a1 + (int64_t)&g20)) {
                // 0x3e758
                *(int32_t *)a1 = 39;
                v19 = v342;
                v18 = v67;
                v15 = 0xffffffff;
                v17 = v341;
                v14 = v640;
                v13 = v63;
                v10 = v636;
                v11 = v635;
                v12 = v634;
                goto lab_0x3f72a;
            }
            int64_t v641 = v634; // 0x3e772
            int64_t v642 = v635; // 0x3e772
            int64_t v643 = v636; // 0x3e772
            int64_t v644 = v640; // 0x3e772
            int64_t v645 = v341; // 0x3e772
            int32_t v646 = v342; // 0x3e772
            v70 = v342;
            v68 = v67;
            v66 = v341;
            v65 = 0;
            v64 = v63;
            v58 = v636;
            v60 = v635;
            v62 = v634;
            if (v638 != 0) {
                v69 = v646;
                int64_t v647 = v645;
                int64_t v648 = v644;
                int64_t v649 = v643;
                v59 = v642;
                v61 = v641;
                uint32_t v650 = (int32_t)v59;
                v56 = v647;
                v54 = v648;
                v52 = v649;
                if (v650 == 0) {
                    goto lab_0x3e80b;
                }
                int64_t v651 = v61; // 0x3e785
                int64_t v652 = v59; // 0x3e785
                int64_t v653 = v649; // 0x3e785
                int64_t v654 = v649; // 0x3e785
                int64_t v655 = v59; // 0x3e785
                int64_t v656 = v61; // 0x3e785
                int64_t v657; // 0x3e19c
                int64_t v658; // 0x3e19c
                int64_t v659; // 0x3e19c
                int64_t v660; // 0x3e19c
                char v661; // 0x3e19c
                int64_t v662; // 0x3e7d0
                int64_t v663; // 0x3e7d0
                int64_t v664; // 0x3e7d7
                if (v650 < 8) {
                    v657 = v653;
                    v659 = v652;
                    v660 = v651;
                    if (v2 > v657) {
                        // 0x3e7c2
                        v661 = *(char *)v657;
                        v658 = v657 + 1;
                    } else {
                        // 0x3e79b
                        v661 = 0;
                        v658 = v657;
                        if ((a7 & 2) != 0) {
                            // 0x3e7a5
                            *(int32_t *)a1 = 51;
                            v19 = v69;
                            v18 = v67;
                            v15 = 1;
                            v17 = v647;
                            v14 = v648;
                            v13 = v63;
                            v10 = v657;
                            v11 = v659;
                            v12 = v660;
                            goto lab_0x3f72a;
                        }
                    }
                    // 0x3e7cd
                    v662 = v659 + 8;
                    v663 = v662 & 0xffffffff;
                    v664 = (int64_t)v661 << v659 % 64 | v660;
                    v654 = v658;
                    v655 = v663;
                    v656 = v664;
                    while ((int32_t)v662 < 8) {
                        // 0x3e787
                        v657 = v658;
                        v659 = v663;
                        v660 = v664;
                        if (v2 > v657) {
                            // 0x3e7c2
                            v661 = *(char *)v657;
                            v658 = v657 + 1;
                        } else {
                            // 0x3e79b
                            v661 = 0;
                            v658 = v657;
                            if ((a7 & 2) != 0) {
                                // 0x3e7a5
                                *(int32_t *)a1 = 51;
                                v19 = v69;
                                v18 = v67;
                                v15 = 1;
                                v17 = v647;
                                v14 = v648;
                                v13 = v63;
                                v10 = v657;
                                v11 = v659;
                                v12 = v660;
                                goto lab_0x3f72a;
                            }
                        }
                        // 0x3e7cd
                        v662 = v659 + 8;
                        v663 = v662 & 0xffffffff;
                        v664 = (int64_t)v661 << v659 % 64 | v660;
                        v654 = v658;
                        v655 = v663;
                        v656 = v664;
                    }
                }
                int64_t v665 = v654;
                int64_t v666 = v655 + 0xfffffff8 & 0xffffffff; // 0x3e7e0
                int64_t v667 = v656 / 256; // 0x3e7e4
                int32_t v668 = (int32_t)v656 % 256; // 0x3e7e8
                if (v3 <= v647) {
                    // 0x3e7f7
                    *(int32_t *)a1 = 52;
                    v19 = v668;
                    v18 = v67;
                    v15 = 2;
                    v17 = v647;
                    v14 = v648;
                    v13 = v63;
                    v10 = v665;
                    v11 = v666;
                    v12 = v667;
                    goto lab_0x3f72a;
                }
                int64_t v669 = v648 + 0xffffffff & 0xffffffff; // 0x3e768
                int64_t v670 = v647 + 1; // 0x3e76a
                *(char *)v647 = (char)v656;
                v70 = v668;
                v68 = v67;
                v66 = v670;
                v65 = 0;
                v64 = v63;
                v58 = v665;
                v60 = v666;
                v62 = v667;
                while (v669 != 0) {
                    // 0x3e778
                    v69 = v668;
                    v647 = v670;
                    v648 = v669;
                    v649 = v665;
                    v59 = v666;
                    v61 = v667;
                    v650 = (int32_t)v59;
                    v56 = v647;
                    v54 = v648;
                    v52 = v649;
                    if (v650 == 0) {
                        goto lab_0x3e80b;
                    }
                    // 0x3e781
                    v651 = v61;
                    v652 = v59;
                    v653 = v649;
                    v654 = v649;
                    v655 = v59;
                    v656 = v61;
                    if (v650 < 8) {
                        v657 = v653;
                        v659 = v652;
                        v660 = v651;
                        if (v2 > v657) {
                            // 0x3e7c2
                            v661 = *(char *)v657;
                            v658 = v657 + 1;
                        } else {
                            // 0x3e79b
                            v661 = 0;
                            v658 = v657;
                            if ((a7 & 2) != 0) {
                                // 0x3e7a5
                                *(int32_t *)a1 = 51;
                                v19 = v69;
                                v18 = v67;
                                v15 = 1;
                                v17 = v647;
                                v14 = v648;
                                v13 = v63;
                                v10 = v657;
                                v11 = v659;
                                v12 = v660;
                                goto lab_0x3f72a;
                            }
                        }
                        // 0x3e7cd
                        v662 = v659 + 8;
                        v663 = v662 & 0xffffffff;
                        v664 = (int64_t)v661 << v659 % 64 | v660;
                        v654 = v658;
                        v655 = v663;
                        v656 = v664;
                        while ((int32_t)v662 < 8) {
                            // 0x3e787
                            v657 = v658;
                            v659 = v663;
                            v660 = v664;
                            if (v2 > v657) {
                                // 0x3e7c2
                                v661 = *(char *)v657;
                                v658 = v657 + 1;
                            } else {
                                // 0x3e79b
                                v661 = 0;
                                v658 = v657;
                                if ((a7 & 2) != 0) {
                                    // 0x3e7a5
                                    *(int32_t *)a1 = 51;
                                    v19 = v69;
                                    v18 = v67;
                                    v15 = 1;
                                    v17 = v647;
                                    v14 = v648;
                                    v13 = v63;
                                    v10 = v657;
                                    v11 = v659;
                                    v12 = v660;
                                    goto lab_0x3f72a;
                                }
                            }
                            // 0x3e7cd
                            v662 = v659 + 8;
                            v663 = v662 & 0xffffffff;
                            v664 = (int64_t)v661 << v659 % 64 | v660;
                            v654 = v658;
                            v655 = v663;
                            v656 = v664;
                        }
                    }
                    // 0x3e7ec
                    v665 = v654;
                    v666 = v655 + 0xfffffff8 & 0xffffffff;
                    v667 = v656 / 256;
                    v668 = (int32_t)v656 % 256;
                    if (v3 <= v647) {
                        // 0x3e7f7
                        *(int32_t *)a1 = 52;
                        v19 = v668;
                        v18 = v67;
                        v15 = 2;
                        v17 = v647;
                        v14 = v648;
                        v13 = v63;
                        v10 = v665;
                        v11 = v666;
                        v12 = v667;
                        goto lab_0x3f72a;
                    }
                    // 0x3e764
                    v669 = v648 + 0xffffffff & 0xffffffff;
                    v670 = v647 + 1;
                    *(char *)v647 = (char)v656;
                    v70 = v668;
                    v68 = v67;
                    v66 = v670;
                    v65 = 0;
                    v64 = v63;
                    v58 = v665;
                    v60 = v666;
                    v62 = v667;
                }
            }
            goto lab_0x3f5b7_2;
        }
    }
    // 0x3e894
    *(int32_t *)a1 = 10;
    v19 = v342;
    v18 = v67;
    v15 = 0xffffffff;
    v17 = v341;
    v14 = v340;
    v13 = v63;
    v10 = v339;
    v11 = v349;
    v12 = v344;
    goto lab_0x3f72a;
  lab_0x3e4d5:;
    uint32_t v726 = *v7; // 0x3e4d5
    int64_t v727 = 1; // 0x3e4ef
    if ((256 * v726 | v8) % 31 == 0) {
        // 0x3e4f1
        v727 = *v26 % 0x2000000010 != 8;
    }
    uint32_t v728 = v726 / 16 + 8; // 0x3e517
    uint32_t v729 = v728 % 32; // 0x3e51a
    int64_t v730 = 1; // 0x3e521
    if (v729 < 15 || 1 << v729 == (int32_t)&g124) {
        uint32_t v731 = v728 % 64;
        int64_t v732 = v6;
        int64_t v733 = v732; // 0x3e523
        if (v731 != 0) {
            v733 = v732 >> (int64_t)v731;
            v6 = v733;
        }
        // 0x3e523
        v730 = v733 == 0;
    }
    int64_t v734 = v730 | v727; // 0x3e52c
    v712 = 0;
    v713 = v24;
    v714 = a5;
    v715 = 0;
    v716 = 0;
    v717 = v9;
    v718 = 0;
    v719 = 0;
    if (v734 == 0) {
        goto lab_0x3e5c0_2;
    } else {
        // 0x3e53a
        *(int32_t *)a1 = 36;
        v19 = 0;
        v18 = v24;
        v15 = 0xffffffff;
        v17 = a5;
        v14 = v734;
        v13 = 0;
        v10 = v9;
        v11 = 0;
        v12 = 0;
        goto lab_0x3f72a;
    }
  lab_0x3e4c0:
    // 0x3e4c0
    *(int32_t *)(a1 + 12) = 0;
    v7 = v28;
    v8 = 0;
    v9 = a2;
    goto lab_0x3e4d5;
  lab_0x3f714:
    // 0x3f714
    *(int32_t *)a1 = 34;
    v19 = v319;
    v18 = v318;
    v15 = 0;
    v17 = v317;
    v14 = v335;
    v13 = v315;
    v10 = v329;
    v11 = v331;
    v12 = v333;
    goto lab_0x3f72a;
  lab_0x3f648:;
    int64_t v735 = v332;
    int64_t v736 = v330;
    int64_t v737 = v328;
    int64_t v738 = v334;
    uint32_t v739 = (int32_t)v736;
    int64_t v740; // 0x3e19c
    int64_t v741; // 0x3e19c
    int64_t v742; // 0x3e19c
    int64_t v743; // 0x3e19c
    int64_t v744; // 0x3e19c
    int64_t v745; // 0x3e19c
    int64_t v746; // 0x3e19c
    int64_t v747; // 0x3e19c
    int64_t v748; // 0x3e19c
    int64_t v749; // 0x3e19c
    if (v739 == 0) {
        if (v2 > v737) {
            // 0x3f6f1
            v749 = (int64_t)*(char *)v737;
            v742 = v737 + 1;
            v745 = v736;
            v748 = v735;
            goto lab_0x3f6fc;
        } else {
            // 0x3f6ca
            v749 = 0;
            v742 = v737;
            v745 = v736;
            v748 = v735;
            if ((a7 & 2) == 0) {
                goto lab_0x3f6fc;
            } else {
                // 0x3f6d4
                *(int32_t *)a1 = 42;
                v19 = v319;
                v18 = v318;
                v15 = 1;
                v17 = v317;
                v14 = v738;
                v13 = v315;
                v10 = v737;
                v11 = v736;
                v12 = v735;
                goto lab_0x3f72a;
            }
        }
    } else {
        // 0x3f64d
        v746 = v735;
        v743 = v736;
        v740 = v737;
        v741 = v737;
        v744 = v736;
        v747 = v735;
        if (v739 < 8) {
            goto lab_0x3f653;
        } else {
            goto lab_0x3f6a8;
        }
    }
  lab_0x3f653:;
    int64_t v750 = v740;
    int64_t v751 = v743;
    int64_t v752 = v746;
    int64_t v753; // 0x3e19c
    char v754; // 0x3e19c
    if (v2 > v750) {
        // 0x3f68e
        v754 = *(char *)v750;
        v753 = v750 + 1;
        goto lab_0x3f699;
    } else {
        // 0x3f667
        v754 = 0;
        v753 = v750;
        if ((a7 & 2) == 0) {
            goto lab_0x3f699;
        } else {
            // 0x3f671
            *(int32_t *)a1 = 41;
            v19 = v319;
            v18 = v318;
            v15 = 1;
            v17 = v317;
            v14 = v738;
            v13 = v315;
            v10 = v750;
            v11 = v751;
            v12 = v752;
            goto lab_0x3f72a;
        }
    }
  lab_0x3f6a8:
    // 0x3f6a8
    v749 = v747 % 256;
    v742 = v741;
    v745 = v744 + 0xfffffff8 & 0xffffffff;
    v748 = v747 / 256;
    goto lab_0x3f6fc;
  lab_0x3f6fc:;
    int64_t v755 = v738 + 1; // 0x3f700
    int64_t v756 = v755 & 0xffffffff; // 0x3f700
    *v27 = 256 * *v27 | (int32_t)v749;
    v334 = v756;
    v328 = v742;
    v330 = v745;
    v332 = v748;
    v335 = v756;
    v329 = v742;
    v331 = v745;
    v333 = v748;
    if ((int32_t)v755 < 4) {
        goto lab_0x3f648;
    } else {
        goto lab_0x3f714;
    }
  lab_0x3f699:;
    int64_t v757 = v751 + 8; // 0x3f69c
    int64_t v758 = v757 & 0xffffffff; // 0x3f69c
    int64_t v759 = (int64_t)v754 << v751 % 64 | v752; // 0x3f6a3
    v746 = v759;
    v743 = v758;
    v740 = v753;
    v741 = v753;
    v744 = v758;
    v747 = v759;
    if ((int32_t)v757 < 8) {
        goto lab_0x3f653;
    } else {
        goto lab_0x3f6a8;
    }
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
    if (v6 > (int64_t)&g45) {
        int32_t memcmp_rc = memcmp((int64_t *)str, &g84, 4); // 0x5576a
        v7 = 9;
        if (memcmp_rc == 0) {
            // 0x5577e
            v7 = 9;
            if (*(int16_t *)(str + 4) == g139) {
                int32_t * v8 = (int32_t *)(str + (int64_t)&g42); // 0x5578f
                int32_t * v9 = (int32_t *)(str + (int64_t)&g43); // 0x55795
                uint32_t v10 = *v9; // 0x55795
                int64_t v11 = v6 - 1052; // 0x5579b
                int64_t v12 = (int64_t)v10 + (int64_t)*v8; // 0x557a2
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
                    if (*(int16_t *)(str + 6) != g140) {
                        // 0x55872
                        v18 = v17 - 1036;
                        v19 = v14 + (int64_t)&g42;
                    } else {
                        // 0x5584e
                        *(int32_t *)(v13 + (int64_t)&g41) = 0;
                        memset((void *)(int64_t)(v13 + 8), 0, &g40, 0);
                        v18 = v15 - v13;
                        v19 = v13;
                    }
                    int32_t v20 = *(int32_t *)(str + (int64_t)&g41); // 0x55898
                    int64_t v21 = function_55620(a1, a2, v19, v18, v4, v20, a5, a6, a8); // 0x558a9
                    function_254fe((int64_t *)&v16);
                    if ((int32_t)v21 == 0) {
                        int64_t v22 = v19 + (int64_t)&g46; // 0x558e7
                        int64_t v23 = v22 + (int64_t)*v8; // 0x558ee
                        function_54be6(a9, v22, v23, v18);
                        uint32_t v24 = *(int32_t *)(str + (int64_t)&g44); // 0x558f6
                        int64_t v25 = *v2; // 0x558fd
                        int64_t * v26 = (int64_t *)(a7 + 16); // 0x55901
                        uint64_t v27 = (int64_t)v24 + (int64_t)&g46; // 0x55907
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
                        function_54be6(a7, v30, v30 + (int64_t)&g46, v27);
                        uint32_t v31 = *v8; // 0x55972
                        int32_t v32 = *v9; // 0x5597c
                        function_4452a(v30 + 2 * (int64_t)&g46 + (int64_t)v31, v32, a7);
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
        result = (int64_t)&g172;
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
        result = (int64_t)&g172;
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
        int64_t v10 = v6 & (int64_t)(int32_t)&g170; // 0x57ca8
        uint64_t v11 = ((int64_t)&g1 - v10) / 4 + v3; // 0x57cbc
        v7 = v11 < 0xffffffffffffffe ? v11 : 0xffffffffffffffe;
        v9 = v10;
        v8 = 4 * v7;
    }
    // 0x57cd8
    int64_t v12; // 0x57c60
    int64_t result = function_4efd30(v8 + 28, (int32_t)a2, v9, v12); // 0x57cd8
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

// Address range: 0xcc5a1 - 0xcdac9
int64_t function_cc5a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xcc5a1
    int64_t v1; // bp-48, 0xcc5a1
    int64_t v2 = (int64_t)&v1; // 0xcc6f6
    int64_t * v3 = (int64_t *)(v2 - 16); // 0xcc71d
    v1 = 0x2879a3a0;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0xcc73d
    v1 = 0x2c2ecc99;
    *v4 = 0x6342dc77;
    *v3 = 0x36655b42;
    int64_t v5 = v2 - 24; // 0xcc782
    int64_t * v6 = (int64_t *)v5; // 0xcc782
    *v6 = a1;
    int64_t v7 = v2 - 32; // 0xcc78a
    int64_t * v8 = (int64_t *)v7; // 0xcc78a
    *v8 = v5;
    int64_t v9 = *v6; // 0xcc79c
    int64_t * v10 = (int64_t *)(v2 - 40); // 0xcc79c
    *v10 = v9;
    v1 = 0x3d136d1d;
    *v8 = v5;
    *v4 = 0x2ffdd6ad;
    *v6 = 0x66826004;
    *v10 = v7;
    *v8 = *v6;
    int64_t v11 = v2 - 48; // 0xcc859
    int64_t * v12 = (int64_t *)v11; // 0xcc859
    *v12 = v9;
    int64_t * v13 = (int64_t *)(v2 - 56); // 0xcc875
    *v13 = *v8;
    *v10 = a2;
    int64_t v14 = *v6; // 0xcc924
    *v6 = v5;
    *v8 = 0x53b1c129;
    *v10 = 0x3b3cad36;
    *v12 = 0x5ac00fa2;
    int64_t v15 = v2 - 72; // 0xcc958
    int64_t * v16 = (int64_t *)v15; // 0xcc958
    *v16 = *v12;
    int64_t * v17 = (int64_t *)(v2 - 64); // 0xcc95c
    *v12 = 0x5e1a4adb;
    *v13 = 0x1141d099;
    *v16 = *v8;
    *v17 = *v16;
    int64_t v18 = *v16; // 0xcc9e1
    *v16 = 0x67983371;
    int64_t * v19 = (int64_t *)(v2 - 80); // 0xcc9f4
    *v19 = v18;
    *v13 = 0xe389888;
    *v17 = *v3;
    *v16 = a2;
    *v19 = v15;
    int64_t v20 = *v16; // 0xcca25
    *v16 = v15;
    *v10 = a6;
    *v17 = -0x7fd7ffcc;
    int64_t v21 = *v13; // 0xcca9a
    *v13 = v11;
    int64_t v22 = *v12; // 0xcca9e
    *v17 = v22;
    *v16 = v22;
    int64_t v23 = *v12; // 0xccab1
    int64_t * v24 = (int64_t *)(v23 - 16); // 0xccac4
    *v24 = v14;
    int64_t v25 = *(int64_t *)(v23 + 120); // 0xccaca
    *(int64_t *)(v23 - 8) = v25;
    *v24 = *v10;
    int64_t * v26 = (int64_t *)(v23 - 24); // 0xccad3
    int64_t * v27 = (int64_t *)(v23 - 32); // 0xccae8
    *v27 = v14;
    *v26 = v23;
    int64_t v28 = *v24; // 0xccb08
    *v27 = v28;
    int64_t v29 = *v24; // 0xccb1a
    int64_t v30 = v29 - 8; // 0xccb1e
    int64_t * v31 = (int64_t *)v30; // 0xccb1e
    int64_t v32 = v29 - 16; // 0xccb20
    int64_t * v33 = (int64_t *)v32; // 0xccb20
    int64_t v34 = v29 - 24; // 0xccb3f
    int64_t * v35 = (int64_t *)v34; // 0xccb3f
    *v35 = a3;
    *v31 = v30;
    *v33 = a6;
    *v35 = *v16;
    int64_t * v36 = (int64_t *)(v29 - 32); // 0xccb5b
    *v36 = v28;
    int64_t * v37 = (int64_t *)(v29 - 40); // 0xccb5c
    *v37 = *v26;
    int64_t v38 = *v36; // 0xccb67
    *v36 = v38 ^ 0x5b3f2500;
    int64_t v39 = *v35; // 0xccb78
    *v31 = v38;
    *(int64_t *)(v29 + 112) = v38;
    *v31 = v18;
    *v33 = v25;
    *v35 = a3;
    *v36 = v39;
    int64_t v40 = *v35; // 0xccbe5
    *v33 = v39;
    *v35 = v40;
    int64_t v41 = *v31; // 0xccc93
    *v31 = *v33;
    *v33 = *v31;
    *v35 = 0xcc59c;
    int64_t v42 = *v33; // 0xccce1
    *v35 = v42;
    *v36 = v42;
    *v31 = v22;
    *v35 = 0x3bdab6c0;
    int32_t * v43 = (int32_t *)v34; // 0xccd2d
    *v43 = *v43 + 0x3a7cc2f3;
    *v33 = *v31;
    *v35 = v20;
    *v33 = *v37;
    int64_t v44 = *v31; // 0xccd9a
    int64_t v45 = *v33 - 0xcc5a1 + (0x8636f - (*v35 + 0x12c36f97 & 0x2685e037) & 0xff8fe37f); // 0xcce38
    *v31 = v40;
    *v33 = v30;
    *v31 = 0x3b005ec9;
    *v33 = v28;
    *v35 = v42;
    *v36 = v44;
    *v31 = *v35;
    *v33 = 0x33fd9b41;
    int64_t v46 = *v33; // 0xccebe
    *v33 = 1;
    int32_t * v47 = (int32_t *)v32; // 0xcced2
    *v47 = *v47 + 0x6c58415d;
    *v33 = v41;
    int64_t v48 = *v31; // 0xccf1a
    *v31 = v44;
    *v33 = v20;
    *v35 = v48;
    *v33 = v45;
    int64_t v49 = *v31; // 0xccf8d
    *v33 = v49;
    int32_t * v50 = (int32_t *)(v45 + 476); // 0xccf98
    int32_t v51 = *v50; // 0xccf98
    int32_t v52 = (int32_t)*v33 - 0x6c58415d; // 0xccf98
    *v50 = v51 == 0 ? v52 : v51;
    if (v51 != 0) {
        __asm_pause();
        int32_t v53 = *v50; // 0xccf98
        *v50 = v53 == 0 ? v52 : v53;
        while (v53 != 0) {
            // 0xccfa3
            __asm_pause();
            v53 = *v50;
            *v50 = v53 == 0 ? v52 : v53;
        }
    }
    int64_t v54 = *(int64_t *)v29; // 0xccfaa
    *v31 = v54;
    *v35 = 0;
    *v33 = v48;
    *v35 = *v33;
    *v36 = 0x6e7c446f;
    *v35 = 0x75fed0f1;
    *v43 = *v43 + 0x6b7761e5;
    *v33 = 0x141dc190;
    *v33 = v54;
    *v35 = v49;
    *v37 = 0;
    int64_t v55 = *v33 - 0x3eff1277; // 0xcd0d4
    *v33 = v55;
    int64_t v56 = *v35; // 0xcd0dd
    int64_t * v57 = (int64_t *)((0xe1763391 - *v35 & 0xffffffff) + v45); // 0xcd0df
    *v57 = v55;
    *v33 = v14;
    *v35 = *v33;
    *v57 = *v57 + 0x3eff1277;
    *v36 = v54;
    *v35 = 231;
    *v43 = *v43 - 0x6fef3c97;
    int64_t v58 = *(int64_t *)(v29 + 72); // 0xcd18d
    *v33 = v58;
    *v35 = v58;
    *v36 = v58;
    *v37 = v56;
    int64_t v59 = v56 ^ v34; // 0xcd1ab
    int64_t * v60 = (int64_t *)(v29 - 48); // 0xcd1af
    *v60 = v58;
    *(int64_t *)(v29 - 56) = v59;
    int64_t v61 = *v37; // 0xcd1b3
    int64_t v62 = v61 ^ v59; // 0xcd1b3
    *v37 = v62;
    int64_t v63 = *v60; // 0xcd1b8
    int64_t * v64 = (int64_t *)(v62 + 8); // 0xcd1cc
    *v64 = 0x7c50c90e;
    int64_t * v65 = (int64_t *)v62; // 0xcd1d1
    *v65 = 0x4a2b8ebc;
    int64_t v66 = v62 - 16; // 0xcd1da
    int64_t * v67 = (int64_t *)v66; // 0xcd1da
    int64_t v68 = v62 - 24; // 0xcd1df
    int64_t * v69 = (int64_t *)v68; // 0xcd1e0
    *v69 = v54;
    *v67 = v63;
    int64_t * v70 = (int64_t *)(v62 - 8); // 0xcd1f8
    *v70 = v63;
    *(int64_t *)((*v35 + 0x6fef3c97 & 0xffffffff) + v45) = *v64;
    *v65 = 10;
    *v70 = v63;
    *v67 = 10;
    int32_t * v71 = (int32_t *)v62; // 0xcd251
    *v71 = *v71 ^ 0x65ef43fb;
    *v65 = *v33;
    *v70 = *v31;
    *v67 = v21;
    int64_t v72 = *(int64_t *)(v62 + 160); // 0xcd28d
    *v64 = v72;
    *v65 = *v33;
    *v69 = *v70;
    *v67 = v61;
    int64_t v73 = *v69; // 0xcd2bf
    *v65 = 0x5087c1b0;
    *v70 = 0x2cab8920;
    *v67 = 0xa84a2e8;
    int64_t * v74 = (int64_t *)(v62 - 32); // 0xcd38e
    *v74 = v73;
    *v69 = v73 + v72;
    int64_t v75 = *v74; // 0xcd397
    *(int64_t *)((*v65 & 0xffffffff ^ 0x65ef43fb) + v45) = *v64;
    *v64 = *v33;
    *v65 = 0xc3718;
    *v71 = *v71 - 0x3fe730a8;
    *v65 = v41;
    *v70 = 0xc3718;
    *v67 = v21;
    *v67 = v46;
    int64_t v76 = (*v65 + 0x3fe730a8 & 0xffffffff) + v75; // 0xcd514
    *v64 = *v33;
    *v65 = *v64;
    *v70 = v45;
    int64_t v77 = *v65; // 0xcd58a
    int64_t v78 = v62 + 16; // 0xcd59c
    *v65 = v78;
    *v64 = *(int64_t *)(v45 + 271);
    *v70 = *v64;
    int64_t v79 = *v64; // 0xcd5e0
    *v64 = v79 - 0x7fdebb0f;
    *v65 = v78;
    int64_t v80 = v76; // 0xcd636
    int64_t v81 = v78; // 0xcd636
    if (v79 != v76) {
        // 0xcd63c
        *v65 = *v33;
        *v70 = v46;
        *v65 = v21;
        *v70 = v75;
        int64_t v82 = *v65; // 0xcd6eb
        *v65 = 2880;
        *v70 = 2880;
        *v67 = v75;
        *v69 = 0x7feef894;
        int32_t * v83 = (int32_t *)v68; // 0xcd71f
        *v83 = *v83 - 0x3bcd8e26;
        int64_t v84 = *v67; // 0xcd72f
        *v71 = *v71 ^ (int32_t)*v69 + 0x3bcd8e26;
        int64_t v85 = *v65 / 8 % 0x20000000 ^ 0xffddf12; // 0xcd74a
        *v64 = 0x77a3b900;
        *v65 = 0x102380de;
        *v70 = 0x1aa9d291;
        *v67 = *v65;
        *v69 = v66;
        *v74 = *v67;
        int64_t v86 = *v67; // 0xcd787
        *(int64_t *)v86 = v76;
        int64_t v87 = v86 + 24; // 0xcd795
        int64_t v88 = v76; // 0xcd79b
        int64_t * v89; // 0xcc5a1
        int64_t v90; // 0xcc5a1
        int64_t v91; // 0xcc5a1
        int64_t v92; // 0xcc5a1
        if (v85 == 0) {
            // 0xcd63c
            v89 = (int64_t *)v87;
            v92 = v87;
            v91 = v45;
            v90 = v77;
        } else {
            int64_t * v93 = (int64_t *)v88; // 0xcd7a1
            *v93 = *v93 - 0xfd6205d6;
            int64_t v94 = v87 - 8; // 0xcd7b6
            int64_t * v95 = (int64_t *)v94;
            *v95 = v77;
            int64_t * v96 = (int64_t *)(v87 - 16); // 0xcd7b8
            *v96 = *v65;
            int64_t * v97 = (int64_t *)(v87 - 24); // 0xcd7c1
            *v97 = v45;
            int64_t * v98 = (int64_t *)(v87 - 32); // 0xcd7dc
            *v98 = -0x577f38b3;
            int64_t v99 = *v97; // 0xcd7df
            int64_t v100 = *v93 + v84; // 0xcd800
            *v93 = v100;
            int64_t v101 = *v95; // 0xcd807
            *v93 = v100 + 0xfd6205d6;
            *v95 = v85;
            *v96 = v46;
            *v97 = *v64;
            *v98 = v79;
            *v97 = v82;
            *v96 = *v64;
            *v96 = v87;
            int64_t v102 = *v95 + 0xffffffff & 0xffffffff; // 0xcd900
            int64_t v103 = *v96; // 0xcd79b
            int64_t v104 = *v96; // 0xcd79b
            int64_t v105 = *v97; // 0xcd79b
            int64_t v106 = v94; // 0xcd79b
            v88 += 8;
            v89 = v95;
            v92 = v94;
            v91 = v99;
            v90 = v101;
            while (v102 != 0) {
                // 0xcd7a1
                v93 = (int64_t *)v88;
                *v93 = *v93 - 0xfd6205d6;
                v94 = v106 - 8;
                v95 = (int64_t *)v94;
                *v95 = v101;
                v96 = (int64_t *)(v106 - 16);
                *v96 = v104;
                v97 = (int64_t *)(v106 - 24);
                *v97 = v99;
                v98 = (int64_t *)(v106 - 32);
                *v98 = -0x577f38b3;
                v99 = *v97;
                v100 = *v93 + v84;
                *v93 = v100;
                v101 = *v95;
                *v93 = v100 + 0xfd6205d6;
                *v95 = v102;
                *v96 = v103;
                *v97 = v105;
                *v98 = v79;
                *v97 = v82;
                *v96 = *v64;
                *v96 = v106;
                v102 = *v95 + 0xffffffff & 0xffffffff;
                v103 = *v96;
                v104 = *v96;
                v105 = *v97;
                v106 = v94;
                v88 += 8;
                v89 = v95;
                v92 = v94;
                v91 = v99;
                v90 = v101;
            }
        }
        int64_t v107 = v92;
        v80 = *v89;
        *(int64_t *)(v107 - 8) = v80;
        int64_t * v108 = (int64_t *)(v107 - 16); // 0xcd916
        *v108 = v82;
        int64_t * v109 = (int64_t *)(v107 - 32); // 0xcd923
        *v109 = v90;
        *(int64_t *)(v107 - 40) = v79;
        *(int64_t *)(v107 - 24) = v107;
        *v109 = *v108;
        int64_t v110 = *v108; // 0xcd965
        int64_t * v111 = (int64_t *)(v110 - 8); // 0xcd970
        int64_t * v112 = (int64_t *)(v110 - 16); // 0xcd973
        *(int64_t *)v110 = 0x38fe5a77;
        *v111 = 0x69be2abf;
        *v112 = v84;
        *(int64_t *)(v110 - 24) = v80;
        *v111 = *v112;
        int64_t v113 = *(int64_t *)(v110 + 16); // 0xcd9f1
        *(int64_t *)(*(int64_t *)(v110 + 8) + v91) = v113;
        v81 = v110 + 24;
    }
    int64_t v114 = *(int64_t *)(v81 + 136); // 0xcd9f4
    int64_t v115 = v81 - 8; // 0xcd9f4
    *(int64_t *)v115 = v114;
    *(int64_t *)(v81 - 16) = v114;
    int64_t * v116 = (int64_t *)(v81 - 24); // 0xcd9fe
    *v116 = *v65;
    *(int64_t *)(v81 - 32) = v115;
    *(int64_t *)(v81 - 40) = *v116;
    return 8 * v114 + v80;
}

// Address range: 0x4926da - 0x492795
int64_t function_4926da(int64_t a1) {
    // 0x4926da
    if (*(char *)&g141 != 0) {
        // 0x492781
        return function_492512(&g142, a1, *(int64_t *)(a1 + 8));
    }
    int64_t v1 = function_20550(&g141); // 0x4926f3
    int64_t v2 = (int64_t)&g141; // 0x4926fa
    if ((int32_t)v1 != 0) {
        // 0x492700
        function_7293a(&g143);
        g145 = 1;
        g146 = 0;
        g147 = 0;
        g144 = (int64_t)&g150;
        *(int32_t *)&g148 = 0x3f800000;
        g149 = 0;
        g150 = 0;
        function_1ff50(&g141);
        __cxa_atexit((void (*)(int64_t *))0x491d7a, &g142, &g129);
        v2 = 0x491d7a;
    }
    // 0x492781
    return function_492512(&g142, v2, *(int64_t *)(a1 + 8));
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
    int64_t v2 = function_4efd30(24, (int32_t)a2, result, result); // 0x4927ea
    *(int64_t *)(v2 + 16) = a2;
    *(int64_t *)(v2 + 8) = 0x100000001;
    *v1 = v2;
    *(int64_t *)v2 = (int64_t)&g125;
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
    int64_t v2 = function_4efd30(32, (int32_t)a2, a3, v1); // 0x4928b1
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
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g6, "record counter limit reached: renegotiate", v1);
        return function_499cf0(a1);
    }
    int32_t memcmp_rc = memcmp((int64_t *)*(int64_t *)(a1 + 296), str, 8); // 0x499e7f
    if (memcmp_rc >= 0 != memcmp_rc != 0) {
        // 0x499de7
        return 0;
    }
    // 0x499e31
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g6, "record counter limit reached: renegotiate", v1);
    return function_499cf0(a1);
}

// Address range: 0x499e90 - 0x499fef
int64_t function_499e90(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x499e90
    int64_t v1; // 0x499e90
    int64_t result = function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g7, "=> write", v1); // 0x499ecb
    if (a1 == 0) {
        // 0x499f53
        return result;
    }
    int64_t v2 = function_499dd0(a1); // 0x499ee6
    if ((int32_t)v2 != 0) {
        int64_t result2 = v2 & 0xffffffff;
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g8, "ssl_check_ctr_renegotiate", result2);
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
                            function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g9, "<= write", v1);
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
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g9, "<= write", v1);
    // 0x499f53
    return v5 & 0xffffffff;
}

// Address range: 0x49eba0 - 0x49ebc5
int64_t function_49eba0(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    if (result == 0 || a6 == 0 | *(int64_t *)(result + 32) == 0 || (int64_t)g151 < a2) {
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
    if ((int64_t)g151 >= a2) {
        int64_t v1 = a2 & 0xffffffff; // 0x49ec0d
        char * v2 = (char *)a5; // 0x49ec70
        int64_t str; // bp-568, 0x49ebd0
        snprintf((char *)&str, (int32_t)&g12, "%s(X)", v2);
        int64_t v3 = a4 & 0xffffffff; // 0x49ec7b
        function_49eba0(result, v1, a3, v3, &str, a6);
        snprintf((char *)&str, (int32_t)&g12, "%s(Y)", v2);
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
    if (a6 == 0 | *(int64_t *)(result + 32) == 0 || (int64_t)g151 < a2) {
        // 0x49eeba
        return result;
    }
    // 0x49ed13
    int64_t str; // bp-2104, 0x49ecc0
    snprintf((char *)&str, (int32_t)&g12, "%s #%d:\n", a5, 1);
    int32_t v2; // bp-1080, 0x49ecc0
    function_4a98b0((int64_t *)&v2, &g39, &g87, a6, &str);
    char v3 = v2; // 0x49ed8e
    int64_t v4; // bp-1592, 0x49ecc0
    if (v3 != 0) {
        int64_t v5 = (int64_t)&v1 + (int64_t)&g14;
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
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g47, "=> parse client hello", v1);
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
        v10 = (int64_t)&g48;
        if ((int32_t)v11 != 0) {
            goto lab_0x4a4df5;
        }
    }
    int64_t v12 = *(int64_t *)(a1 + 176); // 0x4a4c23
    unsigned char v13 = *v3 & 2;
    int64_t v14 = v13; // 0x4a4c4f
    function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_srv.c", &g49, "record header", v12, (v14 - ((int64_t)(v13 == 0) | v14) & -8) + 13);
    char * v15 = (char *)v12; // 0x4a4c68
    int64_t v16 = (int64_t)*v15; // 0x4a4c68
    function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)&g50, "client hello v3, message type: %d", v16);
    int64_t v17 = (int64_t)&g51; // 0x4a4c93
    int64_t v18 = v16; // 0x4a4c93
    int64_t v19; // 0x4a4be0
    int64_t v20; // 0x4a4be0
    int64_t v21; // 0x4a4cd4
    while (*v15 == 22) {
        int64_t v22 = *v4; // 0x4a4c99
        unsigned char v23 = *(char *)v22; // 0x4a4cb4
        unsigned char v24 = *(char *)(v22 + 1); // 0x4a4cb7
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g52, "client hello v3, message len.: %d", 256 * (int64_t)v23 | (int64_t)v24);
        int64_t v25 = v12 + 1; // 0x4a4cd4
        v21 = (int64_t)*(char *)v25;
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g53, "client hello v3, protocol version: [%d:%d]", v21);
        unsigned char v26 = *v3; // 0x4a4d15
        int64_t v27; // bp-224, 0x4a4be0
        function_49bab0((int64_t *)&v5, &v27, (int32_t)(v26 / 2 % 2), v25);
        v17 = (int64_t)&g54;
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
        v17 = (int64_t)&g55;
        v18 = v21;
        if (*(char *)v28 != 0) {
            // break -> 0x4a4eb4
            break;
        }
        // 0x4a4d5f
        v17 = (int64_t)&g55;
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
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g56, "replayed record, discarding", v21);
        *v7 = 0;
        *v8 = 0;
        if (*v2 == 0) {
            // 0x4a4dd1
            v11 = function_49b4a0(a1, 5);
            v9 = v11;
            v10 = (int64_t)&g48;
            if ((int32_t)v11 != 0) {
                goto lab_0x4a4df5;
            }
        }
        // 0x4a4c20
        v12 = *(int64_t *)(a1 + 176);
        v13 = *v3 & 2;
        v14 = v13;
        function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_srv.c", &g49, "record header", v12, (v14 - ((int64_t)(v13 == 0) | v14) & -8) + 13);
        v15 = (char *)v12;
        v16 = (int64_t)*v15;
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)&g50, "client hello v3, message type: %d", v16);
        v17 = (int64_t)&g51;
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
        v17 = (int64_t)&g58;
        v18 = v21;
        if (v360 > (int64_t)"le") {
            goto lab_0x4a4eb4;
        } else {
            unsigned char v361 = *(char *)(v20 + 372) & 2;
            int64_t v362 = v361; // 0x4a4e66
            int64_t v363 = v360 + 13; // 0x4a4e72
            int64_t v364 = function_49b4a0(a1, (v362 - ((int64_t)(v361 == 0) | v362) & -8) + v363); // 0x4a4e77
            v9 = v364;
            v10 = (int64_t)&g59;
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
    function_49e960(a1, 4, "/home/richard/code/mbedtls/library/ssl_srv.c", &g60, "record contents", v31, v19);
    unsigned char v32 = *v3 & 2;
    int64_t v33 = v32; // 0x4a4f46
    v17 = (int64_t)&g61;
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
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g62, "client hello v3, handshake type: %d", v42);
        v17 = (int64_t)&g63;
        v18 = v42;
        if (*v41 != 1) {
            goto lab_0x4a4eb4;
        } else {
            char * v43 = (char *)(v31 + 1); // 0x4a4f9d
            char * v44 = (char *)(v31 + 2); // 0x4a4fa3
            char * v45 = (char *)(v31 + 3); // 0x4a4fb0
            int64_t v46 = 256 * (int64_t)*v44 | 0x10000 * (int64_t)*v43 | (int64_t)*v45; // 0x4a4fd2
            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g64, "client hello v3, handshake len.: %d", v46);
            v17 = (int64_t)&g65;
            v18 = v46;
            if (*v43 != 0) {
                goto lab_0x4a4eb4;
            } else {
                int64_t v47 = 256 * (int64_t)*v44 | (int64_t)*v45;
                if ((*v3 & 2) != 0) {
                    // 0x4a55e8
                    v39 = v47 + 12;
                    v17 = (int64_t)&g65;
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
                            int32_t * v51 = (int32_t *)(*(int64_t *)(a1 + 96) + (int64_t)&g36);
                            int32_t v52 = *v51; // 0x4a6236
                            v35 = v52;
                            v34 = v51;
                            v37 = v50;
                            if (v52 == (int32_t)v50) {
                                goto lab_0x4a5630;
                            } else {
                                // 0x4a6245
                                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g66, "bad client hello message_seq: %d (expected %d)", v50);
                                result = 0xffff8700;
                                goto lab_0x4a4ecf;
                            }
                        } else {
                            int32_t v53 = 256 * (int32_t)v48 | (int32_t)v49; // 0x4a5624
                            int64_t v54 = *(int64_t *)(a1 + 96); // 0x4a5626
                            *(int32_t *)(v54 + (int64_t)&g35) = v53;
                            v35 = v53;
                            v34 = (int32_t *)(v54 + (int64_t)&g36);
                            v37 = v46;
                            goto lab_0x4a5630;
                        }
                    }
                } else {
                    int64_t v55 = v47 + 4; // 0x4a500b
                    v17 = (int64_t)&g65;
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
    v17 = (int64_t)&g68;
    v18 = v57;
    int64_t * v61; // 0x4a508d
    uint64_t v62; // 0x4a5091
    int32_t * v63; // 0x4a5095
    if (v60 < 38) {
        goto lab_0x4a4eb4;
    } else {
        // 0x4a503f
        function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g69, "client hello, version", v59, 2);
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
        *(int32_t *)(v67 + (int64_t)&g155) = v69;
        *(int32_t *)(v67 + (int64_t)&g156) = v70;
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
        function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g67, "ClientHello fragmentation not supported", v37);
        result = 0xffff8f80;
        goto lab_0x4a4ecf;
    } else {
        // 0x4a5643
        if (*(char *)(v40 + 7) != 0) {
            // 0x4a63d1
            function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g67, "ClientHello fragmentation not supported", v37);
            result = 0xffff8f80;
            goto lab_0x4a4ecf;
        } else {
            // 0x4a564d
            if (*(char *)(v40 + 8) != 0) {
                // 0x4a63d1
                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g67, "ClientHello fragmentation not supported", v37);
                result = 0xffff8f80;
                goto lab_0x4a4ecf;
            } else {
                // 0x4a5657
                if (memcmp((int64_t *)(v40 + 1), (int64_t *)(v40 + 9), 3) != 0) {
                    // 0x4a63d1
                    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g67, "ClientHello fragmentation not supported", v37);
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
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g70, "client only supports ssl smaller than minimum [%d:%d] < [%d:%d]", v62);
    function_49a730(a1, 2, 70, (int64_t)&g70);
    result = 0xffff9180;
    goto lab_0x4a4ecf;
  lab_0x4a50e4:;
    int64_t v74 = v59 + 2; // 0x4a510c
    function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g71, "client hello, random bytes", v74, 32);
    int64_t v75 = *v61; // 0x4a511d
    *(int64_t *)(v75 + (int64_t)&g100) = *(int64_t *)v74;
    int64_t v76 = *(int64_t *)(v59 + 10); // 0x4a5133
    *(int64_t *)(v75 + (int64_t)&g100 + 8) = v76;
    int64_t v77 = *(int64_t *)(v59 + 18); // 0x4a513c
    *(int64_t *)(v75 + (int64_t)&g100 + 16) = v77;
    int64_t v78 = *(int64_t *)(v59 + 26); // 0x4a5145
    *(int64_t *)(v75 + (int64_t)&g100 + 24) = v78;
    unsigned char v79 = *(char *)(v59 + 34); // 0x4a514e
    v17 = (int64_t)&g72;
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
        v17 = (int64_t)&g72;
        v18 = v74;
        if (v60 < v87) {
            goto lab_0x4a4eb4;
        } else {
            int64_t v88 = v59 + 35; // 0x4a5196
            function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g73, "client hello, session id", v88, v82);
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
                v17 = (int64_t)&g74;
                v18 = v88;
                if (v60 < v85 + 3) {
                    goto lab_0x4a4eb4;
                } else {
                    // 0x4a5226
                    v86 = v87 + v59;
                    function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g81, "client hello, cookie", v86, v92);
                    if (*(int64_t *)(a1 + 144) == 0) {
                        goto lab_0x4a526e;
                    } else {
                        // 0x4a5261
                        if (*v2 == 0) {
                            int64_t v93; // 0x4a5255
                            if ((int32_t)v93 == 0) {
                                // 0x4a6658
                                function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g86, "cookie verification passed", v86);
                                int64_t v94 = *v61; // 0x4a667a
                                *(char *)(v94 + (int64_t)&g37) = 0;
                                // 0x4a52a5
                                v80 = v86;
                                v81 = v85 + 1;
                                goto lab_0x4a52aa;
                            } else {
                                // 0x4a6334
                                function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g85, "cookie verification failed", v86);
                                int64_t v95 = *v61; // 0x4a6356
                                *(char *)(v95 + (int64_t)&g37) = 1;
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
    v17 = (int64_t)&g91;
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
        v17 = (int64_t)&g91;
        v18 = v80;
        if (v60 < v112) {
            goto lab_0x4a4eb4;
        } else {
            // 0x4a52db
            v17 = (int64_t)&g91;
            v18 = v80;
            if (v97 % 2 != 0) {
                goto lab_0x4a4eb4;
            } else {
                // 0x4a52e3
                v108 = v81 + v74;
                function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g92, "client hello, ciphersuitelist", v108, v98);
                unsigned char v113 = *(char *)(v111 + v74); // 0x4a5327
                int64_t v114 = v113; // 0x4a5327
                v17 = (int64_t)&g93;
                v18 = v108;
                if (v113 == 16 || v114 < 16) {
                    int64_t v115 = v111 + 2 + v114; // 0x4a533b
                    uint64_t v116 = v115 + 1; // 0x4a533f
                    v17 = (int64_t)&g93;
                    v18 = v108;
                    if (v60 < v116) {
                        goto lab_0x4a4eb4;
                    } else {
                        int64_t v117 = v112 + v59; // 0x4a5370
                        function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g94, "client hello, compression", v117, v114);
                        *(int32_t *)(*v83 + 12) = 0;
                        uint64_t v118 = v115 + 3;
                        if (v60 > v116) {
                            // 0x4a538d
                            v17 = (int64_t)&g95;
                            v18 = v117;
                            if (v60 < v118) {
                                goto lab_0x4a4eb4;
                            } else {
                                unsigned char v119 = *(char *)(v115 + v74); // 0x4a53a5
                                int64_t v120 = 256 * (int64_t)*(char *)(v115 + v96) | (int64_t)v119; // 0x4a53ae
                                v17 = (int64_t)&g96;
                                v18 = v117;
                                if (v120 < 4) {
                                    goto lab_0x4a4eb4;
                                } else {
                                    // 0x4a53c1
                                    v17 = (int64_t)&g96;
                                    v18 = v117;
                                    if (v120 + v118 != v60) {
                                        goto lab_0x4a4eb4;
                                    } else {
                                        int64_t v121 = v118 + v59; // 0x4a53f3
                                        int64_t v122 = function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g97, "client hello extensions", v121, v120); // 0x4a53f9
                                        result = v122;
                                        if (v120 == 0) {
                                            goto lab_0x4a4ecf;
                                        } else {
                                            unsigned char v123 = *(char *)(v121 + 1); // 0x4a540b
                                            int64_t v124 = 256 * (int64_t)*(char *)v121 | (int64_t)v123; // 0x4a5419
                                            unsigned char v125 = *(char *)(v121 + 3); // 0x4a541c
                                            int64_t v126 = 256 * (int64_t)*(char *)(v121 + 2) | (int64_t)v125; // 0x4a5424
                                            int64_t v127 = v126 + 4; // 0x4a5426
                                            v17 = (int64_t)&g98;
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
                            function_49e960(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g97, "client hello extensions", v128, 0);
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
    v17 = (int64_t)&g89;
    v18 = v86;
    if (v84 != 0) {
        goto lab_0x4a4eb4;
    } else {
        // 0x4a5283
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g90, "cookie verification skipped", v86);
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
            function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g113, "received FALLBACK_SCSV", v102);
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
            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g114, "received TLS_EMPTY_RENEGOTIATION_INFO ", v102);
            v139 = (int64_t)&g115;
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
        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g102, "found signature_algorithms extension", v141);
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
                function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g106, "found truncated hmac extension", v141);
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
                    v163 = (int64_t)&g111;
                    v150 = (int64_t)"unknown extension found: %d (ignoring)";
                    v153 = v141;
                    switch (v144) {
                        case 0: {
                            // 0x4a5abf
                            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g99, "found ServerName extension", v141);
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
                            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g105, "found max fragment length extension", v141);
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
                        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g103, "found supported elliptic curves extension", v141);
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
                                int64_t * v197 = (int64_t *)(*v61 + (int64_t)&g32); // 0x4a59b6
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
                        v163 = (int64_t)&g111;
                        v150 = (int64_t)"unknown extension found: %d (ignoring)";
                        v153 = v141;
                        if (v144 != 11) {
                            goto lab_0x4a54ac;
                        } else {
                            // 0x4a56fc
                            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g104, "found supported point formats extension", v141);
                            v179 = *v61;
                            int32_t * v200 = (int32_t *)(v179 + (int64_t)&g157); // 0x4a5722
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
                function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g108, "found extended master secret extension", v141);
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
                            *(int32_t *)(*v61 + (int64_t)&g159) = 1;
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
                        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g110, "found alpn extension", v141);
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
                        v163 = (int64_t)&g111;
                        v150 = (int64_t)"unknown extension found: %d (ignoring)";
                        v153 = v141;
                        if (v144 != 22) {
                            goto lab_0x4a54ac;
                        } else {
                            // 0x4a554a
                            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g107, "found encrypt then mac extension", v141);
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
                        function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g109, "found session ticket extension", v141);
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
                                *(int32_t *)(*v61 + (int64_t)&g158) = 1;
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
                        v163 = (int64_t)&g111;
                        v150 = (int64_t)"unknown extension found: %d (ignoring)";
                        v153 = v141;
                        if (v144 != (int32_t)&g169) {
                            goto lab_0x4a54ac;
                        } else {
                            // 0x4a57b7
                            function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g101, "found renegotiation extension", v141);
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
            v139 = (int64_t)&g117;
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
                    v139 = (int64_t)(v223 & -0x10000) | (int64_t)&g118;
                    v136 = (int64_t)"legacy renegotiation not allowed";
                    v137 = v102;
                    if (v225 == 0) {
                        goto lab_0x4a5810;
                    } else {
                        // 0x4a68b4
                        v139 = (int64_t)&g119;
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
    v17 = (int64_t)&g112;
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
            v17 = (int64_t)&g98;
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
    function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g121, "got no ciphersuites in common", v236);
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
                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g25, "should never happen", v247);
                result = 0xffff9400;
                goto lab_0x4a4ecf;
            } else {
                // 0x4a5ff7
                v256 = (int64_t *)(v255 + 8);
                v257 = *v256;
                function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g26, "trying ciphersuite: %s", v257);
                uint32_t v259 = *v63; // 0x4a601d
                v254 = (int64_t)&g27;
                v253 = (int64_t)"ciphersuite mismatch: version";
                if ((int64_t)*(int32_t *)(v255 + 32) > (int64_t)v259) {
                    goto lab_0x4a61e0;
                } else {
                    // 0x4a602a
                    v254 = (int64_t)&g27;
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
                function_49e770(a1, 1, "/home/richard/code/mbedtls/library/ssl_srv.c", &g120, "got ciphersuites in common, but none of them usable", v263);
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
    *(int32_t *)(v179 + (int64_t)&g24) = (int32_t)v164;
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
        v254 = (int64_t)&g28;
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
        int64_t v356 = *(int64_t *)(*v61 + (int64_t)&g32); // 0x4a6078
        v254 = (int64_t)&g30;
        v253 = (int64_t)"ciphersuite mismatch: no common elliptic curve";
        if (v356 == 0) {
            goto lab_0x4a61e0;
        } else {
            // 0x4a6088
            v254 = (int64_t)&g30;
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
        *(int32_t *)(v315 + (int64_t)&g154) = 1;
        *(int32_t *)(v315 + (int64_t)&g158) = 0;
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
            v254 = (int64_t)&g31;
            v253 = (int64_t)"ciphersuite mismatch: no pre-shared key";
            if (*(int64_t *)(v316 + 296) == 0) {
                goto lab_0x4a61e0;
            } else {
                // 0x4a61b1
                v254 = (int64_t)&g31;
                v253 = (int64_t)"ciphersuite mismatch: no pre-shared key";
                if (*(int64_t *)(v316 + 312) == 0) {
                    goto lab_0x4a61e0;
                } else {
                    // 0x4a61bb
                    v254 = (int64_t)&g31;
                    v253 = (int64_t)"ciphersuite mismatch: no pre-shared key";
                    if (*(int64_t *)(v316 + 320) == 0) {
                        goto lab_0x4a61e0;
                    } else {
                        // 0x4a61c5
                        v254 = (int64_t)&g31;
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
    int64_t v321 = *(int64_t *)(*v61 + (int64_t)&g34); // 0x4a60bb
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
        int64_t v326 = function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g15, "ciphersuite requires certificate", v257); // 0x4a6424
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
    function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g122, "selected ciphersuite: %s", v328);
    *(int32_t *)(*v83 + 8) = *v242;
    *(int64_t *)*(int64_t *)(a1 + 128) = v255;
    int32_t * v329 = (int32_t *)(a1 + 8); // 0x4a6111
    *v329 = *v329 + 1;
    if ((*(char *)(*v241 + 372) & 2) != 0) {
        // 0x4a6976
        function_496760(a1);
        // 0x4a6122
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g123, "<= parse client hello", v328);
        result = 0;
        goto lab_0x4a4ecf;
    } else {
        // 0x4a6122
        function_49e770(a1, 2, "/home/richard/code/mbedtls/library/ssl_srv.c", &g123, "<= parse client hello", v328);
        result = 0;
        goto lab_0x4a4ecf;
    }
  lab_0x4a648c:;
    int64_t v330 = v324;
    int64_t v331 = v325;
    int64_t * v332 = (int64_t *)v331; // 0x4a648c
    int64_t v333 = *v332; // 0x4a648c
    function_49ecc0(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g16, "candidate certificate chain, certificate", v333);
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
        int64_t v344 = function_49e770(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", &g17, "certificate mismatch: key type", v333); // 0x4a647a
        v335 = v330;
        v342 = v344;
        goto lab_0x4a647f;
    } else {
        // 0x4a64c0
        int64_t v345; // bp-220, 0x4a4be0
        int64_t v346 = function_498c50(*v332, v255, 1, &v345); // 0x4a64d4
        v340 = (int64_t)&g18;
        v337 = (int64_t)"certificate mismatch: (extended) key usage extension";
        v338 = v333;
        v336 = v330;
        if ((int32_t)v346 != 0) {
            goto lab_0x4a6522;
        } else {
            if (v323 == 4) {
                int64_t v347 = *(int64_t *)(*v61 + (int64_t)&g32); // 0x4a659f
                v343 = *(int32_t *)*(int64_t *)(*v334 + 8);
                int64_t v348 = *(int64_t *)v347; // 0x4a65ac
                v340 = (int64_t)&g22;
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
        if (*(int32_t *)(v353 + (int64_t)&g13) == 4) {
            goto lab_0x4a668d;
        } else {
            // 0x4a650f
            v340 = (int64_t)&g23;
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
        v340 = (int64_t)&g22;
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
    *(int64_t *)(*v61 + (int64_t)&g33) = v351;
    function_49ecc0(a1, 3, "/home/richard/code/mbedtls/library/ssl_srv.c", (int64_t *)&g24, "selected certificate chain, certificate", v352);
    goto lab_0x4a60d4;
}

// Address range: 0x4c69e0 - 0x4c8246
int64_t function_4c69e0(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)(a2 + 1); // 0x4c69ea
    unsigned char v2 = *(char *)(a2 + 5); // 0x4c69ee
    unsigned char v3 = *(char *)(a2 + 9); // 0x4c69f2
    unsigned char v4 = *(char *)(a2 + 13); // 0x4c69f6
    unsigned char v5 = *(char *)(a2 + 21); // 0x4c69fb
    unsigned char v6 = *(char *)(a2 + 2); // 0x4c6a0b
    unsigned char v7 = *(char *)(a2 + 3); // 0x4c6a2a
    int64_t v8; // 0x4c69e0
    int32_t v9 = 256 * (int32_t)v1 | (int32_t)v8 % 256 | 0x10000 * (int32_t)v6 | 0x1000000 * (int32_t)v7; // 0x4c6a31
    unsigned char v10 = *(char *)(a2 + 6); // 0x4c6a35
    unsigned char v11 = *(char *)(a2 + 4); // 0x4c6a3e
    unsigned char v12 = *(char *)(a2 + 7); // 0x4c6a44
    int32_t v13 = 0x10000 * (int32_t)v10 | 256 * (int32_t)v2 | (int32_t)v11 | 0x1000000 * (int32_t)v12; // 0x4c6a4b
    unsigned char v14 = *(char *)(a2 + 10); // 0x4c6a4d
    unsigned char v15 = *(char *)(a2 + 17); // 0x4c6a55
    unsigned char v16 = *(char *)(a2 + 8); // 0x4c6a5e
    unsigned char v17 = *(char *)(a2 + 11); // 0x4c6a67
    int32_t v18 = 0x10000 * (int32_t)v14 | 256 * (int32_t)v3 | (int32_t)v16 | 0x1000000 * (int32_t)v17; // 0x4c6a6e
    unsigned char v19 = *(char *)(a2 + 14); // 0x4c6a70
    unsigned char v20 = *(char *)(a2 + 12); // 0x4c6a7e
    unsigned char v21 = *(char *)(a2 + 15); // 0x4c6a85
    int32_t v22 = 0x10000 * (int32_t)v19 | 256 * (int32_t)v4 | (int32_t)v20 | 0x1000000 * (int32_t)v21; // 0x4c6a8c
    unsigned char v23 = *(char *)(a2 + 18); // 0x4c6a8f
    unsigned char v24 = *(char *)(a2 + 16); // 0x4c6a98
    unsigned char v25 = *(char *)(a2 + 19); // 0x4c6a9e
    int32_t v26 = 0x10000 * (int32_t)v23 | 256 * (int32_t)v15 | (int32_t)v24 | 0x1000000 * (int32_t)v25; // 0x4c6aa5
    unsigned char v27 = *(char *)(a2 + 22); // 0x4c6aa7
    unsigned char v28 = *(char *)(a2 + 20); // 0x4c6ab0
    unsigned char v29 = *(char *)(a2 + 23); // 0x4c6ab6
    int32_t v30 = 0x10000 * (int32_t)v27 | 256 * (int32_t)v5 | (int32_t)v28 | 0x1000000 * (int32_t)v29; // 0x4c6abd
    unsigned char v31 = *(char *)(a2 + 25); // 0x4c6ac3
    unsigned char v32 = *(char *)(a2 + 26); // 0x4c6ac7
    unsigned char v33 = *(char *)(a2 + 29); // 0x4c6acb
    unsigned char v34 = *(char *)(a2 + 33); // 0x4c6acf
    unsigned char v35 = *(char *)(a2 + 37); // 0x4c6ad4
    unsigned char v36 = *(char *)(a2 + 41); // 0x4c6ad9
    unsigned char v37 = *(char *)(a2 + 45); // 0x4c6ade
    unsigned char v38 = *(char *)(a2 + 50); // 0x4c6ae6
    unsigned char v39 = *(char *)(a2 + 53); // 0x4c6aea
    unsigned char v40 = *(char *)(a2 + 24); // 0x4c6af7
    unsigned char v41 = *(char *)(a2 + 27); // 0x4c6b09
    int32_t v42 = 0x10000 * (int32_t)v32 | 256 * (int32_t)v31 | (int32_t)v40 | 0x1000000 * (int32_t)v41; // 0x4c6b10
    unsigned char v43 = *(char *)(a2 + 30); // 0x4c6b12
    unsigned char v44 = *(char *)(a2 + 28); // 0x4c6b1f
    unsigned char v45 = *(char *)(a2 + 31); // 0x4c6b25
    int32_t v46 = 0x10000 * (int32_t)v43 | 256 * (int32_t)v33 | (int32_t)v44 | 0x1000000 * (int32_t)v45; // 0x4c6b2c
    unsigned char v47 = *(char *)(a2 + 34); // 0x4c6b2e
    unsigned char v48 = *(char *)(a2 + 32); // 0x4c6b3c
    unsigned char v49 = *(char *)(a2 + 35); // 0x4c6b43
    int32_t v50 = 0x10000 * (int32_t)v47 | 256 * (int32_t)v34 | (int32_t)v48 | 0x1000000 * (int32_t)v49; // 0x4c6b4a
    unsigned char v51 = *(char *)(a2 + 38); // 0x4c6b4d
    unsigned char v52 = *(char *)(a2 + 36); // 0x4c6b5c
    unsigned char v53 = *(char *)(a2 + 39); // 0x4c6b63
    int32_t v54 = 0x10000 * (int32_t)v51 | 256 * (int32_t)v35 | (int32_t)v52 | 0x1000000 * (int32_t)v53; // 0x4c6b6a
    unsigned char v55 = *(char *)(a2 + 42); // 0x4c6b6d
    unsigned char v56 = *(char *)(a2 + 40); // 0x4c6b7c
    unsigned char v57 = *(char *)(a2 + 43); // 0x4c6b83
    int32_t v58 = 0x10000 * (int32_t)v55 | 256 * (int32_t)v36 | (int32_t)v56 | 0x1000000 * (int32_t)v57; // 0x4c6b8a
    unsigned char v59 = *(char *)(a2 + 46); // 0x4c6b8d
    unsigned char v60 = *(char *)(a2 + 44); // 0x4c6ba7
    unsigned char v61 = *(char *)(a2 + 47); // 0x4c6bae
    int32_t v62 = 0x10000 * (int32_t)v59 | 256 * (int32_t)v37 | (int32_t)v60 | 0x1000000 * (int32_t)v61; // 0x4c6bb5
    unsigned char v63 = *(char *)(a2 + 49); // 0x4c6bb8
    unsigned char v64 = *(char *)(a2 + 48); // 0x4c6bc6
    unsigned char v65 = *(char *)(a2 + 51); // 0x4c6bcc
    int32_t v66 = 256 * (int32_t)v63 | 0x10000 * (int32_t)v38 | (int32_t)v64 | 0x1000000 * (int32_t)v65; // 0x4c6bd3
    unsigned char v67 = *(char *)(a2 + 54); // 0x4c6bd5
    unsigned char v68 = *(char *)(a2 + 52); // 0x4c6bdf
    unsigned char v69 = *(char *)(a2 + 55); // 0x4c6be6
    int32_t v70 = 0x10000 * (int32_t)v67 | 256 * (int32_t)v39 | (int32_t)v68 | 0x1000000 * (int32_t)v69; // 0x4c6bed
    unsigned char v71 = *(char *)(a2 + 57); // 0x4c6bf5
    unsigned char v72 = *(char *)(a2 + 58); // 0x4c6bfa
    unsigned char v73 = *(char *)(a2 + 61); // 0x4c6c03
    unsigned char v74 = *(char *)(a2 + 56); // 0x4c6c15
    unsigned char v75 = *(char *)(a2 + 59); // 0x4c6c2d
    uint32_t v76 = *(int32_t *)(a1 + 12); // 0x4c6c31
    int32_t v77 = 0x10000 * (int32_t)v72 | 256 * (int32_t)v71 | (int32_t)v74 | 0x1000000 * (int32_t)v75; // 0x4c6c40
    unsigned char v78 = *(char *)(a2 + 62); // 0x4c6c43
    uint32_t v79 = *(int32_t *)(a1 + 16); // 0x4c6c47
    unsigned char v80 = *(char *)(a2 + 60); // 0x4c6c68
    int32_t v81 = *(int32_t *)(a1 + 20); // 0x4c6c7b
    unsigned char v82 = *(char *)(a2 + 63); // 0x4c6c81
    int32_t v83 = 0x10000 * (int32_t)v78 | 256 * (int32_t)v73 | (int32_t)v80 | 0x1000000 * (int32_t)v82; // 0x4c6c9b
    uint32_t v84 = *(int32_t *)(a1 + 8) + v9 + (v79 ^ v76 ^ v81); // 0x4c6ca2
    int32_t v85 = *(int32_t *)(a1 + 24); // 0x4c6ca7
    int32_t v86 = v79 / 0x400000 | 1024 * v79; // 0x4c6caa
    uint32_t v87 = (v84 / 0x200000 | 2048 * v84) + v85; // 0x4c6ccf
    uint32_t v88 = v85 + v13 + (v86 ^ v76 ^ v87); // 0x4c6d0e
    uint32_t v89 = (v88 / 0x40000 | 0x4000 * v88) + v81; // 0x4c6d21
    int32_t v90 = v76 / 0x400000 | 1024 * v76; // 0x4c6d31
    int32_t v91 = v87 / 0x400000 | 1024 * v87; // 0x4c6d47
    uint32_t v92 = v81 + v18 + (v87 ^ v90 ^ v89); // 0x4c6d53
    uint32_t v93 = (v92 / 0x20000 | 0x8000 * v92) + v86; // 0x4c6d67
    int32_t v94 = v89 / 0x400000 | 1024 * v89; // 0x4c6d86
    uint32_t v95 = v86 + v22 + (v89 ^ v91 ^ v93); // 0x4c6d8d
    uint32_t v96 = (v95 / 0x100000 | 0x1000 * v95) + v90; // 0x4c6da0
    int32_t v97 = v93 / 0x400000 | 1024 * v93; // 0x4c6da9
    uint32_t v98 = v90 + v26 + (v93 ^ v94 ^ v96); // 0x4c6db9
    uint32_t v99 = (v98 / 0x8000000 | 32 * v98) + v91; // 0x4c6dd4
    int32_t v100 = v96 / 0x400000 | 1024 * v96; // 0x4c6df5
    uint32_t v101 = v91 + v30 + (v96 ^ v97 ^ v99); // 0x4c6df9
    uint32_t v102 = (v101 / 0x1000000 | 256 * v101) + v94; // 0x4c6e14
    int32_t v103 = v99 / 0x400000 | 1024 * v99; // 0x4c6e28
    uint32_t v104 = v94 + v42 + (v99 ^ v100 ^ v102); // 0x4c6e39
    uint32_t v105 = (v104 / 0x2000000 | 128 * v104) + v97; // 0x4c6e54
    int32_t v106 = v102 / 0x400000 | 1024 * v102; // 0x4c6e66
    uint32_t v107 = v97 + v46 + (v102 ^ v103 ^ v105); // 0x4c6e75
    uint32_t v108 = (v107 / 0x800000 | 512 * v107) + v100; // 0x4c6e88
    int32_t v109 = v105 / 0x400000 | 1024 * v105; // 0x4c6ea6
    uint32_t v110 = v100 + v50 + (v105 ^ v106 ^ v108); // 0x4c6eaa
    uint32_t v111 = (v110 / 0x200000 | 2048 * v110) + v103; // 0x4c6eb5
    int32_t v112 = v108 / 0x400000 | 1024 * v108; // 0x4c6ed6
    uint32_t v113 = v103 + v54 + (v108 ^ v109 ^ v111); // 0x4c6eee
    uint32_t v114 = (v113 / 0x80000 | 0x2000 * v113) + v106; // 0x4c6f00
    int32_t v115 = v111 / 0x400000 | 1024 * v111; // 0x4c6f13
    uint32_t v116 = v106 + v58 + (v111 ^ v112 ^ v114); // 0x4c6f22
    uint32_t v117 = (v116 / 0x40000 | 0x4000 * v116) + v109; // 0x4c6f2d
    int32_t v118 = v114 / 0x400000 | 1024 * v114; // 0x4c6f65
    uint32_t v119 = v109 + v62 + (v114 ^ v115 ^ v117); // 0x4c6f6e
    uint32_t v120 = (v119 / 0x20000 | 0x8000 * v119) + v112; // 0x4c6f7c
    int32_t v121 = v117 / 0x400000 | 1024 * v117; // 0x4c6f8c
    uint32_t v122 = v112 + v66 + (v117 ^ v118 ^ v120); // 0x4c6f9b
    uint32_t v123 = (v122 / 0x4000000 | 64 * v122) + v115; // 0x4c6fa4
    uint32_t v124 = v115 + v70 + (v120 ^ v121 ^ v123); // 0x4c6fd8
    int32_t v125 = v120 / 0x400000 | 1024 * v120; // 0x4c6fde
    uint32_t v126 = (v124 / 0x2000000 | 128 * v124) + v118; // 0x4c6fea
    int32_t v127 = v123 / 0x400000 | 1024 * v123; // 0x4c6ffc
    uint32_t v128 = v118 + v77 + (v123 ^ v125 ^ v126); // 0x4c7014
    uint32_t v129 = (v128 / 0x800000 | 512 * v128) + v121; // 0x4c7021
    int32_t v130 = v126 / 0x400000 | 1024 * v126; // 0x4c7034
    uint32_t v131 = v121 + v83 + (v126 ^ v127 ^ v129); // 0x4c704b
    uint32_t v132 = (v131 / 0x1000000 | 256 * v131) + v125; // 0x4c7059
    int32_t v133 = v129 / 0x400000 | 1024 * v129; // 0x4c7076
    uint32_t v134 = v46 + 0x5a827999 + v125 + (v130 & -1 - v132 | v132 & v129); // 0x4c7092
    uint32_t v135 = (v134 / 0x2000000 | 128 * v134) + v127; // 0x4c70aa
    int32_t v136 = v132 / 0x400000 | 1024 * v132; // 0x4c70d0
    uint32_t v137 = v26 + 0x5a827999 + v127 + (v133 & -1 - v135 | v135 & v132); // 0x4c70df
    uint32_t v138 = (v137 / 0x4000000 | 64 * v137) + v130; // 0x4c70f2
    int32_t v139 = v135 / 0x400000 | 1024 * v135; // 0x4c7133
    uint32_t v140 = v70 + 0x5a827999 + v130 + (v136 & -1 - v138 | v138 & v135); // 0x4c7137
    uint32_t v141 = (v140 / 0x1000000 | 256 * v140) + v133; // 0x4c714c
    int32_t v142 = v138 / 0x400000 | 1024 * v138; // 0x4c7163
    uint32_t v143 = v13 + 0x5a827999 + v133 + (v139 & -1 - v141 | v141 & v138); // 0x4c7181
    uint32_t v144 = (v143 / 0x80000 | 0x2000 * v143) + v136; // 0x4c7198
    int32_t v145 = v141 / 0x400000 | 1024 * v141; // 0x4c71b6
    uint32_t v146 = v58 + 0x5a827999 + v136 + (v142 & -1 - v144 | v144 & v141); // 0x4c71d4
    uint32_t v147 = (v146 / 0x200000 | 2048 * v146) + v139; // 0x4c71e8
    int32_t v148 = v144 / 0x400000 | 1024 * v144; // 0x4c720b
    uint32_t v149 = v42 + 0x5a827999 + v139 + (v145 & -1 - v147 | v147 & v144); // 0x4c722a
    uint32_t v150 = (v149 / 0x800000 | 512 * v149) + v142; // 0x4c7242
    int32_t v151 = v147 / 0x400000 | 1024 * v147; // 0x4c7260
    uint32_t v152 = v83 + 0x5a827999 + v142 + (v148 & -1 - v150 | v150 & v147); // 0x4c727d
    uint32_t v153 = (v152 / 0x2000000 | 128 * v152) + v145; // 0x4c7291
    int32_t v154 = v150 / 0x400000 | 1024 * v150; // 0x4c72c1
    uint32_t v155 = v22 + 0x5a827999 + v145 + (v151 & -1 - v153 | v153 & v150); // 0x4c72c5
    uint32_t v156 = (v155 / 0x20000 | 0x8000 * v155) + v148; // 0x4c72d9
    int32_t v157 = v153 / 0x400000 | 1024 * v153; // 0x4c7309
    uint32_t v158 = v66 + 0x5a827999 + v148 + (v154 & -1 - v156 | v156 & v153); // 0x4c731a
    uint32_t v159 = (v158 / 0x2000000 | 128 * v158) + v151; // 0x4c7331
    uint32_t v160 = v9 + 0x5a827999 + v151 + (v157 & -1 - v159 | v159 & v156); // 0x4c7369
    int32_t v161 = v156 / 0x400000 | 1024 * v156; // 0x4c736e
    uint32_t v162 = (v160 / 0x100000 | 0x1000 * v160) + v154; // 0x4c7383
    int32_t v163 = v159 / 0x400000 | 1024 * v159; // 0x4c73b4
    uint32_t v164 = v54 + 0x5a827999 + v154 + (v161 & -1 - v162 | v162 & v159); // 0x4c73c3
    uint32_t v165 = (v164 / 0x20000 | 0x8000 * v164) + v157; // 0x4c73db
    int32_t v166 = v162 / 0x400000 | 1024 * v162; // 0x4c73f9
    uint32_t v167 = v30 + 0x5a827999 + v157 + (v163 & -1 - v165 | v165 & v162); // 0x4c741b
    uint32_t v168 = (v167 / 0x800000 | 512 * v167) + v161; // 0x4c7427
    int32_t v169 = v165 / 0x400000 | 1024 * v165; // 0x4c7456
    uint32_t v170 = v18 + 0x5a827999 + v161 + (v166 & -1 - v168 | v168 & v165); // 0x4c7468
    uint32_t v171 = (v170 / 0x200000 | 2048 * v170) + v163; // 0x4c747d
    int32_t v172 = v168 / 0x400000 | 1024 * v168; // 0x4c74a4
    uint32_t v173 = v77 + 0x5a827999 + v163 + (v169 & -1 - v171 | v171 & v168); // 0x4c74b2
    uint32_t v174 = (v173 / 0x2000000 | 128 * v173) + v166; // 0x4c74cb
    int32_t v175 = v171 / 0x400000 | 1024 * v171; // 0x4c74fd
    uint32_t v176 = v62 + 0x5a827999 + v166 + (v172 & -1 - v174 | v174 & v171); // 0x4c7507
    uint32_t v177 = (v176 / 0x80000 | 0x2000 * v176) + v169; // 0x4c751b
    int32_t v178 = -1 - v177;
    int32_t v179 = v174 / 0x400000 | 1024 * v174; // 0x4c755d
    uint32_t v180 = v50 + 0x5a827999 + v169 + (v175 & v178 | v177 & v174); // 0x4c7569
    uint32_t v181 = (v180 / 0x100000 | 0x1000 * v180) + v172; // 0x4c758c
    uint32_t v182 = v22 + 0x6ed9eba1 + v172 + ((v181 | v178) ^ v179); // 0x4c75ad
    uint32_t v183 = (v182 / 0x200000 | 2048 * v182) + v175; // 0x4c75c9
    int32_t v184 = v177 / 0x400000 | 1024 * v177; // 0x4c75ce
    int32_t v185 = v181 / 0x400000 | 1024 * v181; // 0x4c75f7
    uint32_t v186 = v58 + 0x6ed9eba1 + v175 + ((v183 | -1 - v181) ^ v184); // 0x4c75fe
    uint32_t v187 = (v186 / 0x80000 | 0x2000 * v186) + v179; // 0x4c7613
    int32_t v188 = v183 / 0x400000 | 1024 * v183; // 0x4c7643
    uint32_t v189 = v77 + 0x6ed9eba1 + v179 + ((v187 | -1 - v183) ^ v185); // 0x4c764a
    uint32_t v190 = (v189 / 0x4000000 | 64 * v189) + v184; // 0x4c7667
    uint32_t v191 = v26 + 0x6ed9eba1 + v184 + ((v190 | -1 - v187) ^ v188); // 0x4c7694
    int32_t v192 = v187 / 0x400000 | 1024 * v187; // 0x4c769a
    uint32_t v193 = (v191 / 0x2000000 | 128 * v191) + v185; // 0x4c76a5
    int32_t v194 = v190 / 0x400000 | 1024 * v190; // 0x4c76c8
    uint32_t v195 = v54 + 0x6ed9eba1 + v185 + ((v193 | -1 - v190) ^ v192); // 0x4c76d3
    uint32_t v196 = (v195 / 0x40000 | 0x4000 * v195) + v188; // 0x4c76dc
    int32_t v197 = v193 / 0x400000 | 1024 * v193; // 0x4c7713
    uint32_t v198 = v83 + 0x6ed9eba1 + v188 + ((v196 | -1 - v193) ^ v194); // 0x4c771b
    uint32_t v199 = (v198 / 0x800000 | 512 * v198) + v192; // 0x4c7724
    int32_t v200 = v196 / 0x400000 | 1024 * v196; // 0x4c775f
    uint32_t v201 = v50 + 0x6ed9eba1 + v192 + ((v199 | -1 - v196) ^ v197); // 0x4c7762
    uint32_t v202 = (v201 / 0x80000 | 0x2000 * v201) + v194; // 0x4c777e
    int32_t v203 = v199 / 0x400000 | 1024 * v199; // 0x4c77a6
    uint32_t v204 = v13 + 0x6ed9eba1 + v194 + ((v202 | -1 - v199) ^ v200); // 0x4c77af
    uint32_t v205 = (v204 / 0x20000 | 0x8000 * v204) + v197; // 0x4c77ca
    int32_t v206 = v202 / 0x400000 | 1024 * v202; // 0x4c77f1
    uint32_t v207 = v18 + 0x6ed9eba1 + v197 + ((v205 | -1 - v202) ^ v203); // 0x4c77f7
    uint32_t v208 = (v207 / 0x40000 | 0x4000 * v207) + v200; // 0x4c7813
    int32_t v209 = v205 / 0x400000 | 1024 * v205; // 0x4c783a
    uint32_t v210 = v46 + 0x6ed9eba1 + v200 + ((v208 | -1 - v205) ^ v206); // 0x4c7841
    uint32_t v211 = (v210 / 0x1000000 | 256 * v210) + v203; // 0x4c785d
    int32_t v212 = v208 / 0x400000 | 1024 * v208; // 0x4c7882
    uint32_t v213 = v9 + 0x6ed9eba1 + v203 + ((v211 | -1 - v208) ^ v209); // 0x4c7888
    uint32_t v214 = (v213 / 0x80000 | 0x2000 * v213) + v206; // 0x4c78a2
    uint32_t v215 = v42 + 0x6ed9eba1 + v206 + ((v214 | -1 - v211) ^ v212); // 0x4c78c9
    uint32_t v216 = (v215 / 0x4000000 | 64 * v215) + v209; // 0x4c78e3
    int32_t v217 = v211 / 0x400000 | 1024 * v211; // 0x4c78e9
    int32_t v218 = v214 / 0x400000 | 1024 * v214; // 0x4c7913
    uint32_t v219 = v70 + 0x6ed9eba1 + v209 + ((v216 | -1 - v214) ^ v217); // 0x4c7919
    uint32_t v220 = (v219 / 0x8000000 | 32 * v219) + v212; // 0x4c7934
    int32_t v221 = v216 / 0x400000 | 1024 * v216; // 0x4c795b
    uint32_t v222 = v62 + 0x6ed9eba1 + v212 + ((v220 | -1 - v216) ^ v218); // 0x4c7961
    uint32_t v223 = (v222 / 0x100000 | 0x1000 * v222) + v217; // 0x4c797d
    int32_t v224 = v220 / 0x400000 | 1024 * v220; // 0x4c79a7
    uint32_t v225 = v30 + 0x6ed9eba1 + v217 + ((v223 | -1 - v220) ^ v221); // 0x4c79ab
    uint32_t v226 = (v225 / 0x2000000 | 128 * v225) + v218; // 0x4c79c5
    int32_t v227 = v223 / 0x400000 | 1024 * v223; // 0x4c79dd
    uint32_t v228 = v66 + 0x6ed9eba1 + v218 + ((v226 | -1 - v223) ^ v224); // 0x4c79e8
    uint32_t v229 = (v228 / 0x8000000 | 32 * v228) + v221; // 0x4c7a02
    int32_t v230 = v226 / 0x400000 | 1024 * v226; // 0x4c7a2c
    uint32_t v231 = v13 - 0x70e44324 + v221 + (v229 & v227 | v226 & -1 - v227); // 0x4c7a32
    uint32_t v232 = (v231 / 0x200000 | 2048 * v231) + v224; // 0x4c7a3e
    int32_t v233 = v229 / 0x400000 | 1024 * v229; // 0x4c7a85
    uint32_t v234 = v54 - 0x70e44324 + v224 + (v232 & v230 | v229 & -1 - v230); // 0x4c7a8b
    uint32_t v235 = (v234 / 0x100000 | 0x1000 * v234) + v227; // 0x4c7a97
    int32_t v236 = v232 / 0x400000 | 1024 * v232; // 0x4c7ad8
    uint32_t v237 = v62 - 0x70e44324 + v227 + (v235 & v233 | v232 & -1 - v233); // 0x4c7ae9
    uint32_t v238 = (v237 / 0x40000 | 0x4000 * v237) + v230; // 0x4c7b03
    int32_t v239 = v235 / 0x400000 | 1024 * v235; // 0x4c7b29
    uint32_t v240 = v58 - 0x70e44324 + v230 + (v238 & v236 | v235 & -1 - v236); // 0x4c7b33
    uint32_t v241 = (v240 / 0x20000 | 0x8000 * v240) + v233; // 0x4c7b43
    int32_t v242 = v238 / 0x400000 | 1024 * v238; // 0x4c7b85
    uint32_t v243 = v9 - 0x70e44324 + v233 + (v241 & v239 | v238 & -1 - v239); // 0x4c7b8e
    uint32_t v244 = (v243 / 0x40000 | 0x4000 * v243) + v236; // 0x4c7ba2
    uint32_t v245 = v50 - 0x70e44324 + v236 + (v244 & v242 | v241 & -1 - v242); // 0x4c7bd1
    uint32_t v246 = (v245 / 0x20000 | 0x8000 * v245) + v239; // 0x4c7be5
    int32_t v247 = v241 / 0x400000 | 1024 * v241; // 0x4c7beb
    int32_t v248 = v244 / 0x400000 | 1024 * v244; // 0x4c7c1c
    uint32_t v249 = v66 - 0x70e44324 + v239 + (v246 & v247 | v244 & -1 - v247); // 0x4c7c27
    uint32_t v250 = (v249 / 0x800000 | 512 * v249) + v242; // 0x4c7c45
    int32_t v251 = v246 / 0x400000 | 1024 * v246; // 0x4c7c6e
    uint32_t v252 = v26 - 0x70e44324 + v242 + (v250 & v248 | v246 & -1 - v248); // 0x4c7c77
    uint32_t v253 = (v252 / 0x1000000 | 256 * v252) + v247; // 0x4c7c85
    int32_t v254 = v250 / 0x400000 | 1024 * v250; // 0x4c7cc0
    uint32_t v255 = v70 - 0x70e44324 + v247 + (v253 & v251 | v250 & -1 - v251); // 0x4c7cc6
    uint32_t v256 = (v255 / 0x800000 | 512 * v255) + v248; // 0x4c7cd1
    int32_t v257 = v253 / 0x400000 | 1024 * v253; // 0x4c7d1e
    uint32_t v258 = v22 - 0x70e44324 + v248 + (v256 & v254 | v253 & -1 - v254); // 0x4c7d22
    uint32_t v259 = (v258 / 0x40000 | 0x4000 * v258) + v251; // 0x4c7d36
    int32_t v260 = v256 / 0x400000 | 1024 * v256; // 0x4c7d64
    uint32_t v261 = v46 - 0x70e44324 + v251 + (v259 & v257 | v256 & -1 - v257); // 0x4c7d67
    uint32_t v262 = (v261 / 0x8000000 | 32 * v261) + v254; // 0x4c7d77
    int32_t v263 = v259 / 0x400000 | 1024 * v259; // 0x4c7daf
    uint32_t v264 = v83 - 0x70e44324 + v254 + (v262 & v260 | v259 & -1 - v260); // 0x4c7db5
    uint32_t v265 = (v264 / 0x4000000 | 64 * v264) + v257; // 0x4c7dc0
    int32_t v266 = v262 / 0x400000 | 1024 * v262; // 0x4c7e06
    uint32_t v267 = v77 - 0x70e44324 + v257 + (v265 & v263 | v262 & -1 - v263); // 0x4c7e0c
    uint32_t v268 = (v267 / 0x1000000 | 256 * v267) + v260; // 0x4c7e18
    int32_t v269 = v265 / 0x400000 | 1024 * v265; // 0x4c7e5e
    uint32_t v270 = v30 - 0x70e44324 + v260 + (v268 & v266 | v265 & -1 - v266); // 0x4c7e67
    uint32_t v271 = (v270 / 0x4000000 | 64 * v270) + v263; // 0x4c7e79
    int32_t v272 = v268 / 0x400000 | 1024 * v268; // 0x4c7eb4
    uint32_t v273 = v42 - 0x70e44324 + v263 + (v271 & v269 | v268 & -1 - v269); // 0x4c7ebe
    uint32_t v274 = (v273 / 0x8000000 | 32 * v273) + v266; // 0x4c7eca
    int32_t v275 = v271 / 0x400000 | 1024 * v271; // 0x4c7f05
    uint32_t v276 = v18 - 0x70e44324 + v266 + (v274 & v272 | v271 & -1 - v272); // 0x4c7f0f
    uint32_t v277 = (v276 / 0x100000 | 0x1000 * v276) + v269; // 0x4c7f1f
    int32_t v278 = v274 / 0x400000 | 1024 * v274; // 0x4c7f50
    uint32_t v279 = v26 - 0x56ac02b2 + v269 + (v277 ^ (v274 | -1 - v275)); // 0x4c7f58
    uint32_t v280 = (v279 / 0x800000 | 512 * v279) + v272; // 0x4c7f68
    uint32_t v281 = v9 - 0x56ac02b2 + v272 + (v280 ^ (v277 | -1 - v278)); // 0x4c7f8a
    uint32_t v282 = (v281 / 0x20000 | 0x8000 * v281) + v275; // 0x4c7f94
    int32_t v283 = v277 / 0x400000 | 1024 * v277; // 0x4c7fa1
    uint32_t v284 = v30 - 0x56ac02b2 + v275 + (v282 ^ (v280 | -1 - v283)); // 0x4c7fcc
    int32_t v285 = v280 / 0x400000 | 1024 * v280; // 0x4c7fd8
    uint32_t v286 = (v284 / 0x8000000 | 32 * v284) + v278; // 0x4c7fe2
    int32_t v287 = v282 / 0x400000 | 1024 * v282; // 0x4c800f
    uint32_t v288 = v54 - 0x56ac02b2 + v278 + (v286 ^ (v282 | -1 - v285)); // 0x4c8015
    uint32_t v289 = (v288 / 0x200000 | 2048 * v288) + v283; // 0x4c8023
    int32_t v290 = v286 / 0x400000 | 1024 * v286; // 0x4c8043
    uint32_t v291 = v46 - 0x56ac02b2 + v283 + (v289 ^ (v286 | -1 - v287)); // 0x4c8046
    uint32_t v292 = (v291 / 0x4000000 | 64 * v291) + v285; // 0x4c8057
    int32_t v293 = v289 / 0x400000 | 1024 * v289; // 0x4c807e
    uint32_t v294 = v66 - 0x56ac02b2 + v285 + (v292 ^ (v289 | -1 - v290)); // 0x4c8081
    uint32_t v295 = (v294 / 0x1000000 | 256 * v294) + v287; // 0x4c8091
    uint32_t v296 = v18 - 0x56ac02b2 + v287 + (v295 ^ (v292 | -1 - v293)); // 0x4c80b2
    uint32_t v297 = (v296 / 0x80000 | 0x2000 * v296) + v290; // 0x4c80bc
    int32_t v298 = v292 / 0x400000 | 1024 * v292; // 0x4c80bf
    int32_t v299 = v295 / 0x400000 | 1024 * v295; // 0x4c80ed
    uint32_t v300 = v58 - 0x56ac02b2 + v290 + (v297 ^ (v295 | -1 - v298)); // 0x4c80fb
    uint32_t v301 = (v300 / 0x100000 | 0x1000 * v300) + v293; // 0x4c810d
    int32_t v302 = v297 / 0x400000 | 1024 * v297; // 0x4c812e
    uint32_t v303 = v77 - 0x56ac02b2 + v293 + (v301 ^ (v297 | -1 - v299)); // 0x4c8132
    int32_t v304 = (v303 / 0x8000000 | 32 * v303) + v298; // 0x4c8140
    uint32_t v305 = v13 - 0x56ac02b2 + v298 + (v304 ^ (v301 | -1 - v302)); // 0x4c817b
    uint32_t v306 = v22 - 0x56ac02b2 + v299 + ((v305 / 0x100000 | 0x1000 * v305) + v299 ^ (v304 | -1 - (v301 / 0x400000 | 1024 * v301))); // 0x4c81a1
    uint32_t v307 = (v306 / 0x80000 | 0x2000 * v306) + v302; // 0x4c81b1
    return v307 / 0x400000 | 1024 * v307;
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
    if (v2 - 16 > (int64_t)&g38) {
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
        v15 = __asm_movaps_133(__asm_movdqu(*(int128_t *)v13));
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
        v23 = __asm_movaps_133(__asm_movdqu(*(int128_t *)v21));
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
    *(int64_t *)a1 = (int64_t)&g128;
    return __readfsqword(40) ^ v2;
}
