/*
 * Targeted RetDec C for native executable gap queue batch 183.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3e19c-0x3f89f rank=143 name=fcn.0003e19c kind=r2_discovered bytes=5891 uncovered=5684
 *   0x39110-0x3a750 rank=144 name=fcn.00039110 kind=r2_discovered bytes=5696 uncovered=5664
 *   0xcc5a1-0xcdac9 rank=145 name=fcn.000cc5a1 kind=r2_discovered bytes=5416 uncovered=5416
 *   0x63d20-0x6524a rank=146 name=fcn.00063d20 kind=r2_discovered bytes=5418 uncovered=5392
 *   0x63d80-0x65248 rank=147 name=fcn.00063d80 kind=r2_discovered bytes=5320 uncovered=5320
 *   0x22ea0-0x2452e rank=148 name=fcn.00022ea0 kind=r2_discovered bytes=5774 uncovered=5248
 *   0x524720-0x525b29 rank=149 name=fcn.00524720 kind=r2_discovered bytes=5129 uncovered=5129
 *   0x23122-0x2478a rank=150 name=fcn.00023122 kind=r2_discovered bytes=5736 uncovered=4990
 *   0x5282e0-0x5295e1 rank=151 name=fcn.005282e0 kind=r2_discovered bytes=4865 uncovered=4865
 *   0x5378f0-0x538b82 rank=152 name=fcn.005378f0 kind=r2_discovered bytes=4754 uncovered=4754
 *   0x539b70-0x53ae01 rank=153 name=fcn.00539b70 kind=r2_discovered bytes=4753 uncovered=4753
 *   0x53af80-0x53c211 rank=154 name=fcn.0053af80 kind=r2_discovered bytes=4753 uncovered=4753
 *   0x49f120-0x4a03ad rank=155 name=fcn.0049f120 kind=r2_discovered bytes=4749 uncovered=4749
 *   0x4cb560-0x4cc7cd rank=156 name=fcn.004cb560 kind=r2_discovered bytes=4717 uncovered=4717
 *   0x49bfd1-0x49d5e0 rank=157 name=fcn.0049bfd1 kind=r2_discovered bytes=5647 uncovered=4703
 *   0x2327e-0x247dc rank=158 name=fcn.0002327e kind=r2_discovered bytes=5470 uncovered=4692
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

int64_t function_1188106();
int64_t function_12a8bc();
int64_t function_12f6788d();
int64_t function_14310fab();
int64_t function_1c38db62();
int64_t function_1df0f150();
int64_t function_2054da();
int64_t function_209338();
int64_t function_20bac7();
int64_t function_215434();
int64_t function_218f2e();
int64_t function_21a2d();
int64_t function_22286b();
int64_t function_22ea0(int64_t a1, int64_t a2);
int64_t function_22edc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22f0f(int64_t a1);
int64_t function_22f39(void);
int64_t function_22f64(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_22fc6(void);
int64_t function_22fceb();
int64_t function_22fd0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_22ff8(int64_t a1);
int64_t function_23007(int64_t a1);
int64_t function_2300d(void);
int64_t function_2302d(int64_t a1);
int64_t function_23049(void);
int64_t function_230cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_23114(void);
int64_t function_23122(int64_t a1);
int64_t function_2314f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23171(void);
int64_t function_2317a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23185(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_231ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23220(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23272(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2327e(int64_t a1);
int64_t function_2329a(int64_t a1);
int64_t function_232a4(int64_t a1, int64_t a2);
int64_t function_232c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2330c(int64_t a1);
int64_t function_23344(int64_t a1, int64_t a2);
int64_t function_23372(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23398(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23414(int64_t a1, int64_t a2);
int64_t function_23424(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_235f2(int64_t a1);
int64_t function_23608(int64_t a1);
int64_t function_23620(int64_t a1);
int64_t function_23680(int64_t a1);
int64_t function_236e3(void);
int64_t function_236fd(void);
int64_t function_23727(int64_t a1);
int64_t function_2376a(int64_t a1);
int64_t function_23792(int64_t a1);
int64_t function_237a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_237f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23821(void);
int64_t function_2382b(int64_t a1);
int64_t function_23867(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_23981(void);
int64_t function_23985(void);
int64_t function_239a3(int64_t a1);
int64_t function_239eb(int64_t a1);
int64_t function_23a27(int64_t a1);
int64_t function_23a33(void);
int64_t function_23a53(int64_t a1);
int64_t function_23a89(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23aa6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23aaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23b13(int64_t a1);
int64_t function_23b63(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23b8a(int64_t a1);
int64_t function_23b9f(int64_t a1);
int64_t function_23bb7(int64_t a1);
int64_t function_23bbf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23c58(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23cdf(int64_t a1);
int64_t function_23cec(void);
int64_t function_23d08(void);
int64_t function_23d4e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23d51(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23d7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_23dab(int64_t a1, int64_t a2, int64_t a3);
int64_t function_23de5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_23e24(int64_t a1);
int64_t function_23efd(void);
int64_t function_23f07(int64_t a1);
int64_t function_23f21(void);
int64_t function_23f35(void);
int64_t function_23f64(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23f6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_23fd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2401c(void);
int64_t function_2405a(void);
int64_t function_24090(void);
int64_t function_24099(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_240f4(int64_t a1);
int64_t function_24131(void);
int64_t function_24149(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24155(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_241e5(void);
int64_t function_2421c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2426c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_242b0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_242ed(void);
int64_t function_242f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_24336(void);
int64_t function_24357(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_243c6(int64_t a1);
int64_t function_24460(int64_t a1, int64_t a2, int64_t a3);
int64_t function_246af(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24793(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24ce0();
int64_t function_24cec();
int64_t function_24d05b();
int64_t function_24ded();
int64_t function_24df31();
int64_t function_24dff();
int64_t function_24e0d();
int64_t function_24e1e();
int64_t function_24e74();
int64_t function_24e7c();
int64_t function_24ef4();
int64_t function_2508e();
int64_t function_251d6();
int64_t function_251de();
int64_t function_251e8();
int64_t function_252e0();
int64_t function_2537c();
int64_t function_254332();
int64_t function_254fe();
int64_t function_255da();
int64_t function_25621f();
int64_t function_25622();
int64_t function_2562c();
int64_t function_256ba();
int64_t function_2588a();
int64_t function_258f2d();
int64_t function_259ce();
int64_t function_25a28();
int64_t function_25c34();
int64_t function_25cc91();
int64_t function_261ed2();
int64_t function_2669b9();
int64_t function_26cc29();
int64_t function_29a51ea9();
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
int64_t function_48db2f();
int64_t function_48de04();
int64_t function_496540();
int64_t function_4967e0();
int64_t function_496860();
int64_t function_4976c0();
int64_t function_498bb0();
int64_t function_498d10();
int64_t function_498d40();
int64_t function_499dd0();
int64_t function_49a910();
int64_t function_49b370();
int64_t function_49baf0();
int64_t function_49bdb4();
int64_t function_49bfd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_49d220(int64_t a1);
int64_t function_49d320(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49e960();
int64_t function_49efb0();
int64_t function_49f120(int64_t result);
int64_t function_4ba4b0();
int64_t function_4cb560(int64_t a1, int64_t a2);
int64_t function_4cd810d4();
int64_t function_4eeb30();
int64_t function_4eeb50();
int64_t function_4efd30();
int64_t function_50ab00();
int64_t function_50b7d0();
int64_t function_50bde0();
int64_t function_50c440();
int64_t function_50d7a0();
int64_t function_524720(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * str, int64_t a10, int64_t a11, int64_t a12, int64_t a13);
int64_t function_5282e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13);
int64_t function_52b8e0();
int64_t function_52cc60();
int64_t function_5304f02b();
int64_t function_5378f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8, int64_t wstr, int64_t a10, int64_t a11, int64_t a12, int64_t a13);
int64_t function_539b70(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_53af80(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_554b00();
int64_t function_555fe0();
int64_t function_556610();
int64_t function_566390();
int64_t function_566890();
int64_t function_5a470();
int64_t function_615054ed();
int64_t function_620ac();
int64_t function_62ad8();
int64_t function_63d20(int64_t a1);
int64_t function_63d4c(int64_t a1);
int64_t function_63d66(int64_t a1);
int64_t function_63d80(int64_t a1);
int64_t function_63db5(int64_t a1, int64_t a2);
int64_t function_63e29(int64_t a1);
int64_t function_63e2f(void);
int64_t function_63e3c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_63eae(int64_t a1);
int64_t function_63ef1(int64_t a1);
int64_t function_63efb(int64_t a1);
int64_t function_63f0e(void);
int64_t function_63f36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_63f4b(int64_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_63f90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_63ff2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_64016(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6);
int64_t function_640c8(int64_t a1);
int64_t function_640d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_640f7(int64_t a1);
int64_t function_64146(void);
int64_t function_64169(void);
int64_t function_641bd(void);
int64_t function_641c5(void);
int64_t function_641cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_641df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_64270(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_642a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_642b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_642cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64399(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_643e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_64430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_6448a(void);
int64_t function_64491(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_644ab(void);
int64_t function_644bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_644f6(void);
int64_t function_64505(void);
int64_t function_6455c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_645a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_64601(int64_t a1);
int64_t function_64616(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6466b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64672(int64_t a1);
int64_t function_646cf(int64_t a1);
int64_t function_64730(void);
int64_t function_64739(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_64750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64790(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_647e2(void);
int64_t function_64820(void);
int64_t function_64829(void);
int64_t function_64834(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_64867(int64_t a1, int64_t a2, int64_t a3);
int64_t function_64871(void);
int64_t function_64878(void);
int64_t function_64897(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_648f2(void);
int64_t function_648fe(int64_t a1);
int64_t function_6490b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_649e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_64a9c(void);
int64_t function_64aa7(void);
int64_t function_64ae6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64b85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64caf(int64_t a1, uint64_t a2, int64_t a3);
int64_t function_64ccc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_64cd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64cdb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_64d30(int64_t a1, int64_t a2);
int64_t function_64dae(void);
int64_t function_64db7(void);
int64_t function_64ded(void);
int64_t function_64e00(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_64e1a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_64e21(int64_t a1, int64_t a2, int64_t a3);
int64_t function_64e36(void);
int64_t function_64e3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_64eca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_64ef8(void);
int64_t function_64f36(int64_t a1);
int64_t function_64f47(void);
int64_t function_64f52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_64f6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_64fbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_65000(int64_t a1, int64_t a2, int64_t a3);
int64_t function_65042(void);
int64_t function_650e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_65192(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_695adba2();
int64_t function_7293a();
int64_t function_72994();
int64_t function_729b6();
int64_t function_729ce();
int64_t function_737a2822();
int64_t function_7e8360c0();
int64_t function_cc5a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_dd0e3();
int64_t function_e0017();
int64_t function_e1448();
int64_t function_e298f();
int64_t function_e5cd3();
int64_t function_f1975();
int64_t function_f2be7();
int64_t function_f8eb8();
int64_t function_f9d78();
int64_t function_fb533();
int64_t function_fd3e0();
int64_t function_ffffffff87b8e917();
int64_t function_ffffffff8904a36b();
int64_t function_ffffffff9f19132a();
int64_t function_ffffffffa9adff33();
int64_t function_ffffffffbbe05b21();
int64_t function_ffffffffbf2ede74();
int64_t function_ffffffffcf7e6974();
int64_t function_ffffffffd6bafeaf();
int64_t function_ffffffffdf5a6943();
int64_t function_ffffffffe337f2b9();

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
    int64_t v8 = a3 & -0xff01 | (int64_t)&g83; // 0x22f72
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

// Address range: 0x23049 - 0x2304c
int64_t function_23049(void) {
    // 0x23049
    int64_t result; // 0x23049
    return result;
}

// Address range: 0x230cc - 0x23113
int64_t function_230cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x230cc
    int64_t v1; // 0x230cc
    int32_t v2 = v1; // 0x230cc
    __asm_out((int16_t)(v2 >> 31), v2);
    int64_t result = 0; // 0x23101
    if (v1 != __readfsqword(40)) {
        // 0x23103
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x23108
    return result;
}

// Address range: 0x23114 - 0x23121
int64_t function_23114(void) {
    // 0x23114
    int64_t v1; // 0x23114
    return function_23122(v1) & -256 | 1;
}

// Address range: 0x23122 - 0x2314f
int64_t function_23122(int64_t a1) {
    // 0x23122
    __readfsqword(40);
    return function_e0017();
}

// Address range: 0x2314f - 0x23166
int64_t function_2314f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2314f
    int64_t v1; // 0x2314f
    int64_t v2 = v1;
    char * v3 = (char *)(2 * a2 + 0x362e41bc + a4); // 0x23150
    unsigned char v4 = *v3; // 0x23150
    *v3 = (char)v2;
    char * v5 = (char *)(a4 + 121); // 0x23157
    unsigned char v6 = *v5; // 0x23157
    unsigned char v7 = v6 + (char)a3; // 0x23157
    *v5 = v7;
    int32_t v8 = *(int32_t *)(a2 - 0x5d4d7f3b); // 0x2315a
    return v2 & -0x10000 | (int64_t)v4 | v2 & 0xff00 & (int64_t)((int32_t)v1 - v8 + (int32_t)(v7 < v6));
}

// Address range: 0x23171 - 0x23172
int64_t function_23171(void) {
    // 0x23171
    int64_t result; // 0x23171
    return result;
}

// Address range: 0x2317a - 0x23185
int64_t function_2317a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x6c145363); // 0x2317a
    *v1 = *v1 & (int32_t)a4;
    int64_t v2; // 0x2317a
    __asm_outsd((int16_t)a3, *(int32_t *)&v2);
    return function_23114();
}

// Address range: 0x23185 - 0x231ff
int64_t function_23185(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23185
    int64_t v1; // 0x23185
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = a4 & -256 | (int64_t)((char)a4 - *(char *)(a1 - 0x5e17de3a)); // 0x23186
    *(char *)v3 = 2 * (char)v3;
    char * v5 = (char *)(v4 + 19); // 0x2319b
    unsigned char v6 = *v5; // 0x2319b
    *v5 = v6 + 37;
    int64_t result = v6 > 218 ? 0xb2291119 : 0xb2291118; // 0x2319e
    *(char *)a2 = 17;
    char * v7 = (char *)(v1 - 0x408cbd1c); // 0x231a2
    char v8 = *v7 ^ ((char)a5 | (char)&g82); // 0x231a2
    *v7 = v8;
    if (v4 != 1 == v8 == 0) {
        // 0x2321f
        return result;
    }
    if (v4 != 2) {
        // 0x231fb
        __asm_out_133((int16_t)&g82 & -256, (char)result);
        return __asm_wait();
    }
    unsigned char v9 = *(char *)(v1 + v2 % 256); // 0x231ad
    uint32_t v10 = (int32_t)(v2 & 0xffffff00 | (int64_t)v9); // 0x231ae
    int32_t v11 = v10 + 0x5e0259f5; // 0x231ae
    return 256 * (16 * (int64_t)(v10 % 16 > 10) | (int64_t)(v10 > 0xa1fda60a) | 64 * (int64_t)(v11 == 0) | 128 * (int64_t)(v11 < 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v11) % 2 == 0)) | (int64_t)(v11 & -0xff01 | 512);
}

// Address range: 0x231ff - 0x2321f
int64_t function_231ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x23206
    if (v1 != 0) {
        int64_t v2; // 0x231ff
        char * v3 = (char *)(v2 + 0x237c151c); // 0x23206
        *v3 = *v3 << v1;
    }
    char * v4 = (char *)(a1 + 63 + a3); // 0x2320c
    *v4 = *v4 ^ 88;
    int32_t v5 = __asm_in((int16_t)a3); // 0x23210
    float80_t v6; // 0x231ff
    *(float32_t *)0x3d22e558 = (float32_t)v6;
    return v5 ^ 0x20d70851;
}

// Address range: 0x23220 - 0x23271
int64_t function_23220(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23220
    int64_t v1; // 0x23220
    int32_t * v2 = (int32_t *)(v1 + 0x790be193); // 0x2322c
    *v2 = *v2 & (int32_t)a2;
    int64_t result = v1 + 0xffd451e8 & 0xffffffff; // 0x23269
    int32_t * v3 = (int32_t *)(result - 125); // 0x2326e
    *v3 = *v3 - 1;
    return result;
}

// Address range: 0x23272 - 0x2327e
int64_t function_23272(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23272
    int64_t result; // 0x23272
    return result;
}

// Address range: 0x2327e - 0x23298
int64_t function_2327e(int64_t a1) {
    // 0x2327e
    return function_e1448();
}

// Address range: 0x2329a - 0x2329b
int64_t function_2329a(int64_t a1) {
    // 0x2329a
    int64_t result; // 0x2329a
    return result;
}

// Address range: 0x232a4 - 0x232a9
int64_t function_232a4(int64_t a1, int64_t a2) {
    // 0x232a4
    int64_t result; // 0x232a4
    *(int32_t *)result = (int32_t)a2;
    return result;
}

// Address range: 0x232c1 - 0x2330b
int64_t function_232c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x232c1
    int64_t v1; // 0x232c1
    bool v2; // 0x232c1
    int64_t result = v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512; // 0x232c1
    if (a4 != 1 == v2) {
        // 0x232f5
        return result & -244;
    }
    // 0x232c4
    return result;
}

// Address range: 0x2330c - 0x23344
int64_t function_2330c(int64_t a1) {
    int64_t result = function_24e74(a1 + 8); // 0x23314
    if ((char)result == 0) {
        // 0x23342
        return result;
    }
    // 0x2331d
    function_620ac(a1 + (int64_t)&g18);
    int64_t result2 = function_24e74(a1 + (int64_t)&g4); // 0x23330
    if ((char)result2 == 0) {
        // 0x23342
        return result2;
    }
    // 0x23339
    return function_243c6(a1);
}

// Address range: 0x23344 - 0x2336f
int64_t function_23344(int64_t a1, int64_t a2) {
    // 0x23344
    __readfsqword(40);
    return function_e298f();
}

// Address range: 0x23372 - 0x23398
int64_t function_23372(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_hlt(a1, a2, a3, a4); // 0x23374
    bool v2; // 0x23372
    int64_t v3 = v2 ? -1 : 1; // 0x2338a
    int64_t v4 = v3 + a1; // 0x2338a
    *(char *)v4 = *(char *)(v3 + a2);
    uint32_t v5 = *(int32_t *)(v4 + v3); // 0x2338e
    int64_t v6; // 0x23372
    uint32_t v7 = *(int32_t *)&v6; // 0x2338f
    *(int32_t *)v1 = v7 / 0x2000 | 0x100000 * v7 | 0x80000 * (int32_t)(v5 > (int32_t)v1);
    return v1 + 0xa1d6e52b + (int64_t)((v7 & 0x1000) != 0) & 0xffffffff;
}

// Address range: 0x23398 - 0x23413
int64_t function_23398(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23398
    int64_t v1; // 0x23398
    uint64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x23399
    bool v4; // 0x23398
    bool v5; // 0x23398
    if (v3 != 0) {
        int32_t * v6 = (int32_t *)(v2 - 97); // 0x23399
        uint32_t v7 = *v6; // 0x23399
        *v6 = v7 >> v3 | (int32_t)v5 << 32 - v3 | (int32_t)((int64_t)v7 << (int64_t)(33 - v3));
        v4 = v3 == 1 ? v7 < 0 != v5 : v5;
    }
    int64_t v8 = a4 - 1; // 0x2339c
    if (v8 != 0 != v5) {
        // 0x2339e
        int64_t v9; // 0x23398
        return (int64_t)&v9;
    }
    int64_t v10 = v1 & 0xffffffff; // 0x23398
    int64_t v11 = v5 ? -1 : 1; // 0x233a3
    int64_t v12 = v8; // 0x2339c
    int64_t v13 = a1; // 0x23398
    int64_t v14 = a2; // 0x233a3
    int64_t v15 = v10; // 0x23398
    *(char *)v13 = *(char *)v14;
    v14 += v11;
    int64_t result; // 0x23398
    while (v5 || v5 != v4) {
        // 0x2339c
        v12--;
        result = *(int64_t *)v15;
        v13 += v11;
        v15 += 8;
        if (v12 != 0 != v5) {
            // 0x2339e
            return result;
        }
        *(char *)v13 = *(char *)v14;
        v14 += v11;
    }
    char * v16 = (char *)((v2 % 256 | v8 & -256) + 0x5126528b); // 0x233a9
    unsigned char v17 = *v16; // 0x233a9
    unsigned char v18 = v17 + *(char *)v14; // 0x233a9
    *v16 = v18;
    uint32_t v19 = *(int32_t *)-0x3e4a128125071814; // 0x233af
    *(int64_t *)v10 = 0x383f8e;
    int64_t result2 = (int64_t)v19 - 0x69d5ff8d + (int64_t)(v18 < v17); // 0x233be
    float80_t v20; // 0x23398
    *(int16_t *)(result2 - 0x6c3812ad) = (int16_t)v20;
    if (result2 >= 0) {
        char * v21 = (char *)(a3 - 9); // 0x233cd
        *v21 = *v21 + (char)v2;
        return result2;
    }
    // 0x233d5
    *(int32_t *)(v10 + 12) = 0;
    result = result2;
    if (*(int64_t *)(v10 + 24) != __readfsqword(40)) {
        // 0x23405
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x2339e
    return result;
}

// Address range: 0x23414 - 0x23423
int64_t function_23414(int64_t a1, int64_t a2) {
    uint32_t v1 = (int32_t)a2; // 0x23414
    int64_t result; // 0x23414
    if (v1 >= 25) {
        // 0x23419
        *(int32_t *)(a1 + (int64_t)&g17) = v1;
        result = __asm_mfence(a1, a2);
    }
    // 0x23422
    return result;
}

// Address range: 0x23424 - 0x235f1
int64_t function_23424(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = 0x2eb95ba6; // bp-70, 0x23441
    int64_t v3 = __readfsqword(40); // 0x23449
    int64_t v4 = (int64_t)&v2; // 0x2346d
    *(int32_t *)&v2 = 0x61657473;
    char * v5 = (char *)(v4 | 4); // 0x2348a
    *v5 = *v5 ^ 3;
    char * v6 = (char *)(v4 | 5); // 0x2349d
    *v6 = *v6 ^ 54;
    if (a2 != 0) {
        // 0x234af
        if (!(((int32_t)a4 == 0 | a3 == 0 | *(char *)&v1 == 0))) {
            uint64_t v7 = a4 & 0xffffffff; // 0x234c6
            int64_t v8; // bp-112, 0x23424
            function_729b6(&v8, a1 + (int64_t)&g12, v4);
            int64_t v9 = function_24ded(v1); // 0x234ea
            int64_t v10 = a1 + (int64_t)&g13; // 0x234ef
            int64_t v11 = v7 + a3; // 0x234fc
            function_25c34(v10, v1, v9);
            function_48db2f(*(int64_t *)v10);
            int64_t * v12 = (int64_t *)(a1 + (int64_t)&g14); // 0x23511
            int64_t v13 = *v12; // 0x23511
            int64_t * v14 = (int64_t *)(a1 + (int64_t)&g16); // 0x23518
            if (v7 > *v14 - v13) {
                int64_t v15 = function_24cec(v7); // 0x2352a
                function_21a2d(a3, v11, v15);
                function_24ce0(*v12);
                *v12 = v15;
                int64_t v16 = v15 + v7; // 0x2355a
                *(int64_t *)(a1 + (int64_t)&g15) = v16;
                *v14 = v16;
            } else {
                int64_t * v17 = (int64_t *)(a1 + (int64_t)&g15); // 0x2356d
                uint64_t v18 = *v17 - v13; // 0x23574
                if (v7 > v18) {
                    int64_t v19 = v18 + a3; // 0x23590
                    function_21a2d(a3, v19, v13);
                    *v17 = function_21a2d(v19, v11, *v17);
                } else {
                    // 0x2357c
                    *v17 = function_21a2d(a3, v11, v13);
                }
            }
            // 0x235b8
            function_729ce(&v8);
        }
    }
    // 0x235c0
    function_24dff(&v2, 6);
    int64_t result = 0; // 0x235db
    if (v3 != __readfsqword(40)) {
        // 0x235dd
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x235e2
    return result;
}

// Address range: 0x235f2 - 0x23607
int64_t function_235f2(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + (int64_t)&g11); // 0x235f2
    if (v1 == 0) {
        // 0x23604
        return 0;
    }
    // 0x235fe
    return *(int64_t *)v1;
}

// Address range: 0x23608 - 0x23620
int64_t function_23608(int64_t a1) {
    int64_t v1 = function_252e0(a1 + (int64_t)&g5); // 0x23613
    return v1 & -256 | (int64_t)((int32_t)v1 == 2);
}

// Address range: 0x23620 - 0x2367b
int64_t function_23620(int64_t a1) {
    int64_t v1 = function_24e1e(); // 0x23629
    function_251de(a1 + (int64_t)&g8, v1 + 0x6fc23ac00);
    function_251de(a1 + (int64_t)&g6, v1);
    *(int64_t *)(a1 + (int64_t)&g7) = 0;
    __asm_mfence(a1 + (int64_t)&g5, 1);
    return function_251d6();
}

// Address range: 0x23680 - 0x236a7
int64_t function_23680(int64_t a1) {
    // 0x23680
    __readfsqword(40);
    return function_e5cd3();
}

// Address range: 0x236e3 - 0x236e4
int64_t function_236e3(void) {
    // 0x236e3
    int64_t result; // 0x236e3
    return result;
}

// Address range: 0x236fd - 0x236ff
int64_t function_236fd(void) {
    // 0x236fd
    int64_t result; // 0x236fd
    return result;
}

// Address range: 0x23727 - 0x2372f
int64_t function_23727(int64_t a1) {
    // 0x23727
    return function_236e3();
}

// Address range: 0x2376a - 0x2376d
int64_t function_2376a(int64_t a1) {
    // 0x2376a
    int64_t result; // 0x2376a
    return result;
}

// Address range: 0x23792 - 0x23793
int64_t function_23792(int64_t a1) {
    // 0x23792
    int64_t result; // 0x23792
    return result;
}

// Address range: 0x237a1 - 0x237e1
int64_t function_237a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x237a1
    int64_t v1; // 0x237a1
    __asm_out((int16_t)a3, (int32_t)v1);
    char * v2 = (char *)(v1 + 4 * a4); // 0x237a4
    *v2 = *v2 - (char)a4;
    float80_t v3; // 0x237a1
    *(int32_t *)(v1 - 0x77247740) = (int32_t)v3;
    *(int32_t *)(v1 + 36) = 0;
    int64_t result = v1 & 0xffffffff; // 0x237d4
    if (*(int64_t *)(v1 + 80) != __readfsqword(40)) {
        // 0x237d6
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x237db
    return result;
}

// Address range: 0x237f0 - 0x23820
int64_t function_237f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x237f0
    __readfsqword(40);
    return function_f1975();
}

// Address range: 0x23821 - 0x23822
int64_t function_23821(void) {
    // 0x23821
    int64_t result; // 0x23821
    return result;
}

// Address range: 0x2382b - 0x2382f
int64_t function_2382b(int64_t a1) {
    // 0x2382b
    int64_t result; // 0x2382b
    return result;
}

// Address range: 0x23867 - 0x2394d
int64_t function_23867(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a4;
    int64_t v2; // 0x23867
    if (a4 == 0) {
        v2 = function_23821();
    }
    bool v3; // 0x23867
    if (!v3) {
        // 0x2386b
        *(char *)a1 = (char)v2 & 60;
        *(char *)v1 = *(char *)&v1;
        *(char *)(a3 - 0x246bffe9) = (char)__asm_int1((int64_t)&g119);
        return function_ffffffffcf7e6974();
    }
    uint32_t v4 = __asm_in((int16_t)a3); // 0x238da
    int64_t result = ((int64_t)(v4 % 256) | (int64_t)(v4 & -256)) ^ 52; // 0x238db
    int32_t * v5 = (int32_t *)(a3 + 0x3e282761); // 0x238e2
    *v5 = *v5 / 64;
    int64_t v6; // 0x23867
    int32_t * v7 = (int32_t *)(v6 - 0x57ff635a); // 0x238e9
    uint32_t v8 = *v7; // 0x238e9
    *v7 = v8 / 2 | 0x80000000 * v8;
    int64_t v9 = v1 - 1; // 0x238f1
    v1 = v9;
    if (v9 != 0) {
        // 0x238b4
        return result;
    }
    int32_t * v10 = (int32_t *)(a3 + a1); // 0x238f3
    int32_t v11 = a1; // 0x238f3
    *v10 = *v10 ^ v11;
    char * v12 = (char *)result; // 0x238f8
    *v12 = *v12 + (char)a3;
    int32_t * v13 = (int32_t *)(a1 - 92); // 0x238fb
    *v13 = *v13 | v11;
    char * v14 = (char *)(a1 - 0x309a86ef); // 0x23902
    *v14 = *v14 + (char)result;
    __asm_iretd((int64_t)&g119, (int64_t)&g119, (int64_t)&g119);
    char * v15 = (char *)(a3 + 82 + 8 * a2); // 0x2391a
    *v15 = *v15 + (char)(v1 / 256);
    char * v16 = (char *)(a2 + 0x6661e0ab); // 0x23930
    int32_t * v17 = (int32_t *)(a2 + 0x5017ee2b); // 0x23936
    while (true) {
        // 0x23930
        *v16 = *v16 + (char)v1;
        *v17 = *v17 & (int32_t)v1;
    }
}

// Address range: 0x23981 - 0x23984
int64_t function_23981(void) {
    // 0x23981
    int64_t result; // 0x23981
    return result;
}

// Address range: 0x23985 - 0x2398a
int64_t function_23985(void) {
    // 0x23985
    return function_12f6788d();
}

// Address range: 0x239a3 - 0x239b0
int64_t function_239a3(int64_t a1) {
    // 0x239a3
    int64_t v1; // 0x239a3
    return v1 & -256 | (int64_t)*(char *)0x2f3f2b246ed333b;
}

// Address range: 0x239eb - 0x239ee
int64_t function_239eb(int64_t a1) {
    // 0x239eb
    int64_t result; // 0x239eb
    return result;
}

// Address range: 0x23a27 - 0x23a33
int64_t function_23a27(int64_t a1) {
    // 0x23a27
    return function_ffffffffdf5a6943(a1);
}

// Address range: 0x23a33 - 0x23a3d
int64_t function_23a33(void) {
    // 0x23a33
    return function_ffffffffbbe05b21();
}

// Address range: 0x23a53 - 0x23a56
int64_t function_23a53(int64_t a1) {
    // 0x23a53
    int64_t v1; // 0x23a53
    return v1 & 0xffffffff;
}

// Address range: 0x23a89 - 0x23aa6
int64_t function_23a89(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23a89
    int64_t v1; // 0x23a89
    uint64_t result = v1;
    *(int32_t *)0x1714c06f60d13b44 = (int32_t)result;
    char * v2 = (char *)(8 * a3 + 0x61620013); // 0x23a92
    *v2 = *v2 + (char)(result / 256);
    int32_t * v3 = (int32_t *)(result + 0x1cfffb10); // 0x23a9e
    *v3 = *v3 | (int32_t)a3;
    return result;
}

// Address range: 0x23aa6 - 0x23aaf
int64_t function_23aa6(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 3); // 0x23aa6
    int64_t v2; // 0x23aa6
    *v1 = *v1 ^ (char)v2;
    return function_1df0f150();
}

// Address range: 0x23aaf - 0x23abd
int64_t function_23aaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23aaf
    int64_t result; // 0x23aaf
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x23b13 - 0x23b14
int64_t function_23b13(int64_t a1) {
    // 0x23b13
    int64_t result; // 0x23b13
    return result;
}

// Address range: 0x23b63 - 0x23b6d
int64_t function_23b63(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23b63
    return __asm_in((int16_t)a3);
}

// Address range: 0x23b8a - 0x23b8d
int64_t function_23b8a(int64_t a1) {
    // 0x23b8a
    int64_t result; // 0x23b8a
    return result;
}

// Address range: 0x23b9f - 0x23ba2
int64_t function_23b9f(int64_t a1) {
    // 0x23b9f
    int64_t result; // 0x23b9f
    return result;
}

// Address range: 0x23bb7 - 0x23bbf
int64_t function_23bb7(int64_t a1) {
    // 0x23bb7
    int64_t result; // 0x23bb7
    *(int32_t *)a1 = (int32_t)(result & result);
    return result;
}

// Address range: 0x23bbf - 0x23bed
int64_t function_23bbf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23bbf
    bool v1; // 0x23bbf
    int64_t v2 = v1 ? -4 : 4; // 0x23bcc
    int64_t v3 = v2 + a1; // 0x23bcc
    int32_t * v4 = (int32_t *)(a3 + 0x5463704b); // 0x23bcd
    int32_t v5 = *v4; // 0x23bcd
    *v4 = 2 * v5 | (int32_t)(v5 < 0);
    int64_t v6 = (int64_t)(v5 < 0) & 0xffffffff; // 0x23bd3
    *(int64_t *)(v6 - 8) = v6;
    int32_t * v7 = (int32_t *)(v3 + 63); // 0x23bd8
    *v7 = *v7 >> 28;
    int64_t v8; // 0x23bbf
    return function_ffffffffe337f2b9(v3, v2 + a2, v8 & 0xffffffff, 0xc7311af0);
}

// Address range: 0x23c58 - 0x23c62
int64_t function_23c58(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23c58
    return 2 * a3 & 0xfffffffe;
}

// Address range: 0x23cdf - 0x23ce4
int64_t function_23cdf(int64_t a1) {
    // 0x23cdf
    int64_t v1; // 0x23cdf
    bool v2; // 0x23cdf
    return function_23d4e((v2 ? -1 : 1) + a1, v1, v1);
}

// Address range: 0x23cec - 0x23cef
int64_t function_23cec(void) {
    // 0x23cec
    int64_t result; // 0x23cec
    return result;
}

// Address range: 0x23d08 - 0x23d0d
int64_t function_23d08(void) {
    // 0x23d08
    return function_ffffffffbf2ede74();
}

// Address range: 0x23d4e - 0x23d50
int64_t function_23d4e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23d4e
    int64_t result; // 0x23d4e
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x23d51 - 0x23d7e
int64_t function_23d51(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23d51
    int64_t v1; // 0x23d51
    int32_t * v2 = (int32_t *)(v1 - 125); // 0x23d51
    *v2 = *v2 - 1;
    __asm_in_134((int16_t)a3);
    char * v3 = (char *)(v1 - 61); // 0x23d55
    bool v4; // 0x23d51
    *v3 = *v3 - (v4 ? 86 : 85);
    __readfsqword(40);
    return function_f2be7();
}

// Address range: 0x23d7e - 0x23da2
int64_t function_23d7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23d7e
    int64_t v1; // 0x23d7e
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    *(int32_t *)a3 = (int32_t)a4 & -0x10000 | 458;
    return result;
}

// Address range: 0x23dab - 0x23dae
int64_t function_23dab(int64_t a1, int64_t a2, int64_t a3) {
    // 0x23dab
    int64_t result; // 0x23dab
    return result;
}

// Address range: 0x23de5 - 0x23e24
int64_t function_23de5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    int64_t result = 0; // 0x23e16
    int64_t v1; // 0x23de5
    if (v1 != __readfsqword(40)) {
        // 0x23e18
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x23e1d
    return result;
}

// Address range: 0x23e24 - 0x23e52
int64_t function_23e24(int64_t a1) {
    // 0x23e24
    __readfsqword(40);
    return function_f8eb8();
}

// Address range: 0x23efd - 0x23efe
int64_t function_23efd(void) {
    // 0x23efd
    int64_t result; // 0x23efd
    return result;
}

// Address range: 0x23f07 - 0x23f0a
int64_t function_23f07(int64_t a1) {
    // 0x23f07
    int64_t result; // 0x23f07
    return result;
}

// Address range: 0x23f21 - 0x23f22
int64_t function_23f21(void) {
    // 0x23f21
    int64_t result; // 0x23f21
    return result;
}

// Address range: 0x23f35 - 0x23f38
int64_t function_23f35(void) {
    // 0x23f35
    int64_t result; // 0x23f35
    return result;
}

// Address range: 0x23f64 - 0x23f6f
int64_t function_23f64(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x23f64
    int64_t v1; // 0x23f64
    __asm_out((int16_t)a3, (int32_t)v1);
    int64_t result; // 0x23f64
    if ((int32_t)v1 == (int32_t)v1) {
        result = function_23efd();
    }
    // 0x23f6a
    return result;
}

// Address range: 0x23f6f - 0x23f91
int64_t function_23f6f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a1 - 0x65e50378); // 0x23f6f
    if (llvm_ctpop_i8((char)((int32_t)a4 - v1)) % 2 != 0) {
        function_23f21();
    }
    // 0x23f77
    *(char *)a1 = __asm_insb((int16_t)a3);
    __asm_iretd((int64_t)&g119, (int64_t)&g119, (int64_t)&g119);
    return function_29a51ea9();
}

// Address range: 0x23fd4 - 0x23fe6
int64_t function_23fd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x23fd4
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x23fd4
    int32_t * v1 = (int32_t *)(result + 0x39cf475d); // 0x23fd6
    bool v2; // 0x23fd4
    *v1 = (int32_t)v2 + (int32_t)result + *v1;
    char * v3 = (char *)(3 * a2); // 0x23fe1
    *v3 = *v3 + (char)(result / 256);
    return result;
}

// Address range: 0x2401c - 0x2401d
int64_t function_2401c(void) {
    // 0x2401c
    int64_t result; // 0x2401c
    return result;
}

// Address range: 0x2405a - 0x2405f
int64_t function_2405a(void) {
    // 0x2405a
    return function_ffffffffd6bafeaf();
}

// Address range: 0x24090 - 0x24094
int64_t function_24090(void) {
    // 0x24090
    int64_t v1; // 0x24090
    __asm_out_135(0, (int32_t)v1);
    return function_2401c();
}

// Address range: 0x24099 - 0x240f4
int64_t function_24099(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x24099
    __asm_in_136(-15);
    int64_t v1; // 0x24099
    int32_t * v2 = (int32_t *)(v1 - 27); // 0x240a5
    *v2 = *v2 + (int32_t)v1;
    *(int32_t *)0x90cbe18a = *(int32_t *)0x90cbe18a + 0x140a6800;
    int64_t result = 0; // 0x240de
    if (v1 != __readfsqword(40)) {
        // 0x240e0
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x240e5
    return result;
}

// Address range: 0x240f4 - 0x2411a
int64_t function_240f4(int64_t a1) {
    // 0x240f4
    __readfsqword(40);
    return function_f9d78();
}

// Address range: 0x24131 - 0x24132
int64_t function_24131(void) {
    // 0x24131
    int64_t result; // 0x24131
    return result;
}

// Address range: 0x24149 - 0x2414c
int64_t function_24149(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24149
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x24149
    return result;
}

// Address range: 0x24155 - 0x241df
int64_t function_24155(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24155
    bool v1; // 0x24155
    if (v1 || false) {
        char * v2 = (char *)(a4 + 0x48142474); // 0x241b8
        *v2 = (char)v1 - (char)a4 + *v2;
        __readfsqword(40);
        return function_fb533();
    }
    // 0x24157
    int64_t result; // 0x24155
    return result;
}

// Address range: 0x241e5 - 0x241e6
int64_t function_241e5(void) {
    // 0x241e5
    int64_t result; // 0x241e5
    return result;
}

// Address range: 0x2421c - 0x2426b
int64_t function_2421c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2421c
    int64_t v1; // 0x2421c
    bool v2; // 0x2421c
    if (!v2) {
        v1 = function_241e5();
    }
    // 0x2421e
    __asm_out_133((int16_t)a3, (char)v1);
    int64_t v3 = a3 & a2;
    int64_t v4 = v1; // 0x24226
    int64_t v5 = a1; // 0x24226
    if ((int32_t)v3 == 0) {
        // 0x24228
        *(char *)0x3954e898 = *(char *)0x3954e898 + (char)(v1 / 256);
        if (a4 != 0) {
            // 0x24236
            __asm_fbld(*(float80_t *)(a4 + 0x266818fa));
            return v1 | 177;
        }
        // 0x24250
        int64_t v6; // 0x2421c
        unsigned char v7 = *(char *)((v1 & 4 | 251) + v6); // 0x24252
        v4 = v1 & -256 | (int64_t)v7;
        v5 = (int64_t)((int32_t)a1 - *(int32_t *)(a4 + 18));
    }
    int64_t v8 = v5 + (v2 ? -1 : 1); // 0x2425b
    int64_t result = __asm_hlt(v8, a2, v3 & 0xffffffff, a4); // 0x2425c
    __asm_out_137(-34, (char)result);
    *(int32_t *)v8 = __asm_insd(0x5e3e);
    *(int64_t *)((v4 & 0xffffffff) - 8) = 0xa0e95e3e;
    return result;
}

// Address range: 0x2426c - 0x242b0
int64_t function_2426c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2426c
    int64_t v1; // 0x2426c
    int64_t v2 = v1 & -256 | (int64_t)*(char *)0x7f0078f266e566e7; // 0x2426c
    float80_t v3; // 0x2426c
    *(int32_t *)(v2 - 0x772d772e) = (int32_t)v3;
    unsigned char v4 = (char)a4 % 32; // 0x2427e
    if (v4 != 0) {
        char * v5 = (char *)(v2 - 0x77367740); // 0x2427e
        unsigned char v6 = *v5; // 0x2427e
        *v5 = v6 >> v4 | v6 << 8 - v4;
    }
    *(int32_t *)(v1 + 52) = 0;
    int64_t result = 0; // 0x242a4
    if (*(int64_t *)(v1 + 80) != __readfsqword(40)) {
        // 0x242a6
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x242ab
    return result;
}

// Address range: 0x242b0 - 0x242e1
int64_t function_242b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x242b0
    __readfsqword(40);
    return function_fd3e0();
}

// Address range: 0x242ed - 0x242ee
int64_t function_242ed(void) {
    // 0x242ed
    int64_t result; // 0x242ed
    return result;
}

// Address range: 0x242f4 - 0x24318
int64_t function_242f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x242f4
    int64_t v1; // 0x242f4
    __asm_out((int16_t)a3, (int32_t)v1);
    int64_t v2; // 0x242f4
    bool v3; // 0x242f4
    if (!v3 && !v3) {
        v2 = function_242ed();
    }
    char * v4 = (char *)(a3 - 0x1726d642); // 0x242fb
    char v5 = *v4 + (char)(v2 / 256); // 0x242fb
    *v4 = v5;
    return a4 == 1 | v5 == 0 ? v2 : v1;
}

// Address range: 0x24336 - 0x24339
int64_t function_24336(void) {
    // 0x24336
    int64_t result; // 0x24336
    return result;
}

// Address range: 0x24357 - 0x243c5
int64_t function_24357(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x24357
    int128_t v1; // 0x24357
    int128_t v2 = v1;
    uint32_t v3 = *(int32_t *)0x2e42021a028ed6; // 0x24357
    int64_t v4 = v3; // 0x24357
    char * v5 = (char *)(v4 - 0x1ef2ef29); // 0x24366
    *v5 = *v5 + (char)(v3 / 256);
    char * v6 = (char *)v4; // 0x2436c
    *v6 = *v6 + (char)v3;
    __asm_addps(v2, v2);
    int64_t result = 0; // 0x243b9
    int64_t v7; // 0x24357
    if (v7 != __readfsqword(40)) {
        // 0x243bb
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x243c0
    return result;
}

// Address range: 0x243c6 - 0x24460
int64_t function_243c6(int64_t a1) {
    int64_t v1 = __readfsqword(40); // 0x243d4
    int64_t v2; // bp-56, 0x243c6
    function_24e7c(&v2);
    int64_t v3 = 5; // bp-72, 0x243ec
    int64_t v4; // 0x243c6
    function_2588a(&v2, v4, &v3, &v2);
    function_62ad8(a1 + (int64_t)&g18, function_24ef4(&v2), 1);
    function_254fe(&v2);
    int64_t result = 0; // 0x24452
    if (v1 != __readfsqword(40)) {
        // 0x24454
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x24459
    return result;
}

// Address range: 0x24460 - 0x2465f
int64_t function_24460(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x2448a
    int64_t v2; // bp-112, 0x24460
    function_729b6(&v2, a1 + (int64_t)&g9, a3);
    int64_t v3 = (int64_t)&g100; // bp-104, 0x244b0
    int64_t v4; // 0x2456b
    uint64_t v5; // 0x2457d
    int64_t v6; // 0x244bb
    int64_t * v7; // 0x244bb
    if (a2 == 0) {
        goto lab_0x2462b;
    } else {
        // 0x244bb
        v6 = a1 + (int64_t)&g10;
        v7 = (int64_t *)v6;
        if (*(int64_t *)(*v7 - 24) == 0) {
            goto lab_0x2462b;
        } else {
            int64_t v8 = *(int64_t *)(a1 + (int64_t)&g11); // 0x244cd
            int64_t v9 = 0; // bp-88, 0x244ec
            int64_t v10; // bp-96, 0x24460
            function_5a470(&v10, v8 + (int64_t)&g20, "game_error.error_corrupted_network", "Corrupted packet flow", &v9);
            function_256ba(&v3, &v10, (int64_t)"game_error.error_corrupted_network");
            function_2508e(&v10);
            if (v9 != 0) {
                int64_t v11 = v9 + 8; // 0x2453b
                function_2508e((int64_t *)v9);
                int64_t v12 = v11; // 0x24536
                while (v11 != 0) {
                    // 0x24538
                    v11 = v12 + 8;
                    function_2508e((int64_t *)v12);
                    v12 = v11;
                }
                // 0x24546
                if (v9 != 0) {
                    // 0x24550
                    function_4eeb50(v9);
                }
            }
            // 0x24555
            function_2537c(&v3, " (");
            v4 = *(int64_t *)(*v7 - 24);
            if (v4 == 0) {
                goto lab_0x245c9;
            } else {
                // 0x24574
                v5 = g98 + v4;
                if (v5 > g99) {
                    // 0x24586
                    function_259ce(&v3, v5);
                    goto lab_0x245a0;
                } else {
                    // 0x24593
                    if ((char)function_25622(v3 - 24) != 0) {
                        // 0x24586
                        function_259ce(&v3, v5);
                        goto lab_0x245a0;
                    } else {
                        goto lab_0x245a0;
                    }
                }
            }
        }
    }
  lab_0x2462b:
    // 0x2462b
    function_2508e(&v3);
    function_729ce(&v2);
    int64_t result = 0; // 0x24649
    if (v1 != __readfsqword(40)) {
        // 0x2464b
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x24650
    return result;
  lab_0x245c9:
    // 0x245c9
    if ((char)function_2537c(&v3, ")") != 0) {
        int64_t v13 = *v7; // 0x245d8
        int64_t v14 = *(int64_t *)(v13 - 24); // 0x24603
        if (v14 != 0) {
            // 0x2460c
            function_255da(v6, v13, v3, a3);
            function_24e0d(*v7, v14);
        }
        // 0x24623
        function_251e8(v6);
    }
    goto lab_0x2462b;
  lab_0x245a0:
    // 0x245a0
    function_25a28(&g100, *v7, v4);
    function_2562c(&g98, v5);
    goto lab_0x245c9;
}

// Address range: 0x246af - 0x246b8
int64_t function_246af(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x246af
    int64_t result; // 0x246af
    char * v1 = (char *)(2 * result); // 0x246af
    *v1 = *v1 & (char)a3;
    char * v2 = (char *)(result - 119); // 0x246b2
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x24793 - 0x24799
int64_t function_24793(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24793
    int64_t v1; // 0x24793
    *(char *)a1 = (char)(v1 ^ a4);
    return v1 & 0xffffffff;
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
        __asm_out_133((int16_t)a3 % 256 | (int16_t)&g108, v9);
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
    return __asm_int1((int64_t)&g119);
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
    __asm_out_135(47, (int32_t)v3);
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
    __asm_int1((int64_t)&g119);
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
        v9 = (int64_t)&g119;
        result = (int64_t)&g119;
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
        int64_t v4 = -((2 * v1)); // 0x39375
        int64_t v5 = (int64_t)&g100; // bp-80, 0x39378
        function_3ae24(&v5, v4);
        int64_t v6 = 0; // 0x39392
        if (v1 != 0) {
            int64_t v7 = 0; // 0x393b5
            int64_t v8 = function_48de04(*(char *)(v7 + v1)); // 0x39398
            int64_t v9; // 0x3930b
            function_255da((int64_t)&v5, v4, v1, v9);
            *(int16_t *)(v5 + 2 * v7) = *(int16_t *)v8;
            v7++;
            v6 = v1;
            while (v7 < -v1) {
                // 0x39394
                v8 = function_48de04(*(char *)(v7 + v1));
                function_255da((int64_t)&v5, v4, v1, v9);
                *(int16_t *)(v5 + 2 * v7) = *(int16_t *)v8;
                v7++;
                v6 = v1;
            }
        }
        // 0x393ba
        function_256ba((int64_t *)a1, &v5, v6);
        function_2508e(&v5);
    }
    int64_t result = function_3ae18(v1) & -256 | v3 % 256; // 0x393e8
    if (v2 != __readfsqword(40)) {
        // 0x393ea
        __stack_chk_fail();
        result = (int64_t)&g119;
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
    __asm_out_137(80, v7);
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
        result = (int64_t)&g119;
        result2 = (int64_t)&g119;
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
    __asm_out_133(v5, (char)a7);
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
    return v2 & -256 | (int64_t)__asm_in_134((int16_t)((int32_t)v2 >> 31));
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
    __asm_in((int16_t)a3);
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
    int64_t result = v4 & 0xffffff00 | (int64_t)__asm_in_136(-14); // 0x39b7b
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
        result2 = (int64_t)&g119;
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
    __asm_out((int16_t)v12, result);
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
    return function_39d8c(a1, a2, a3, a4, (int64_t)&g119);
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
        return (result & 0xffff00ff | (int64_t)(int32_t)&g106) ^ 0xae84a131;
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
    __asm_in_136(-39);
    int64_t result = 0; // 0x39e81
    if (v1 != __readfsqword(40)) {
        // 0x39e83
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x39e88
    return result;
}

// Address range: 0x39ed6 - 0x39ed8
int64_t function_39ed6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39ed6
    int64_t result; // 0x39ed6
    __asm_out((int16_t)a3, (int32_t)result);
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
    __asm_out_137(31, (char)a2);
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
    int64_t v1 = __asm_iretd((int64_t)&g119, (int64_t)&g119, (int64_t)&g119); // 0x3a1c3
    uint64_t v2 = v1 + 92; // 0x3a1c4
    __asm_out_137(-22, (char)v2);
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
    __asm_out(v2, v6);
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
        result = (int64_t)&g119;
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
    int64_t result = v2 & -0xff01 | (int64_t)&g107; // 0x3a683
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
    __asm_out((int16_t)a3, (int32_t)(v5 ^ v5));
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
    int16_t v82 = *(int16_t *)(v81 + 2 * (v80 & (int64_t)(int32_t)&g57)); // 0x3f0b4
    int64_t v83 = v82; // 0x3f0b4
    int64_t v84 = 10; // 0x3f0bf
    int64_t v85 = v83; // 0x3f0bf
    int64_t v86; // 0x3e19c
    int64_t v87; // 0x3e19c
    if (v82 < 0) {
        int64_t v88 = v84 + 1 & 0xffffffff; // 0x3f0d6
        uint16_t v89 = *(int16_t *)(2 * (((v80 >> v84 % 64) % 2 | (int64_t)&g60) + ((0x100000000 * v85 ^ -0x100000000) >> 32)) + v25); // 0x3f0ef
        int64_t v90 = v89; // 0x3f0ef
        v84 = v88;
        v86 = v88;
        v87 = v90;
        while (v89 < 0) {
            // 0x3f0d3
            v88 = v84 + 1 & 0xffffffff;
            v89 = *(int16_t *)(2 * (((v80 >> v84 % 64) % 2 | (int64_t)&g60) + ((0x100000000 * v90 ^ -0x100000000) >> 32)) + v25);
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
            uint16_t v182 = *(int16_t *)(v81 + 2 * (v179 & (int64_t)(int32_t)&g57)); // 0x3efcb
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
                    v189 = *(int16_t *)(2 * (((v179 >> v186 % 64) % 2 | (int64_t)&g60) + ((0x100000000 * (int64_t)v184 ^ -0x100000000) >> 32)) + v25);
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
                        v189 = *(int16_t *)(2 * (((v179 >> v186 % 64) % 2 | (int64_t)&g60) + ((0x100000000 * (int64_t)v184 ^ -0x100000000) >> 32)) + v25);
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
                v182 = *(int16_t *)(v81 + 2 * (v179 & (int64_t)(int32_t)&g57));
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
                        v189 = *(int16_t *)(2 * (((v179 >> v186 % 64) % 2 | (int64_t)&g60) + ((0x100000000 * (int64_t)v184 ^ -0x100000000) >> 32)) + v25);
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
                            v189 = *(int16_t *)(2 * (((v179 >> v186 % 64) % 2 | (int64_t)&g60) + ((0x100000000 * (int64_t)v184 ^ -0x100000000) >> 32)) + v25);
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
            uint16_t v235 = *(int16_t *)(v232 + 2 * (v217 & (int64_t)(int32_t)&g57)); // 0x3f2dc
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
                    v240 = *(int16_t *)(2 * (((v217 >> v237 % 64) % 2 | (int64_t)&g105) + ((0x100000000 * (int64_t)v236 ^ -0x100000000) >> 32)) + v25);
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
                        v240 = *(int16_t *)(2 * (((v217 >> v237 % 64) % 2 | (int64_t)&g105) + ((0x100000000 * (int64_t)v236 ^ -0x100000000) >> 32)) + v25);
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
                v235 = *(int16_t *)(v232 + 2 * (v246 & (int64_t)(int32_t)&g57));
                if (v235 < 0) {
                    // 0x3f2fa
                    v238 = (int32_t)v247;
                    v236 = v235;
                    if (v238 >= 11) {
                        v237 = 10;
                        v239 = v237 + 1 & 0xffffffff;
                        v6 = v239;
                        v240 = *(int16_t *)(2 * (((v246 >> v237 % 64) % 2 | (int64_t)&g105) + ((0x100000000 * (int64_t)v236 ^ -0x100000000) >> 32)) + v25);
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
                            v240 = *(int16_t *)(2 * (((v246 >> v237 % 64) % 2 | (int64_t)&g105) + ((0x100000000 * (int64_t)v236 ^ -0x100000000) >> 32)) + v25);
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
    int16_t v249 = *(int16_t *)(v232 + 2 * (v231 & (int64_t)(int32_t)&g57)); // 0x3f3bf
    int64_t v250 = v249; // 0x3f3bf
    int64_t v251 = 10; // 0x3f3cc
    int64_t v252; // 0x3e19c
    int64_t v253; // 0x3e19c
    if (v249 < 0) {
        int64_t v254 = v251 + 1 & 0xffffffff; // 0x3f3e4
        v6 = v254;
        uint16_t v255 = *(int16_t *)(2 * (((v231 >> v251 % 64) % 2 | (int64_t)&g105) + ((0x100000000 * v250 ^ -0x100000000) >> 32)) + v25); // 0x3f3fe
        int64_t v256 = v255; // 0x3f3fe
        v251 = v254;
        v252 = v254;
        v253 = v256;
        while (v255 < 0) {
            // 0x3f3e1
            v254 = v251 + 1 & 0xffffffff;
            v6 = v254;
            v255 = *(int16_t *)(2 * (((v231 >> v251 % 64) % 2 | (int64_t)&g105) + ((0x100000000 * v256 ^ -0x100000000) >> 32)) + v25);
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
            uint64_t v679 = v671 % (int64_t)&g19;
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
            int64_t v706 = (v700 & 0xffffffff) % ((int64_t)&g118 & 0xffffffff); // 0x3f831
            int64_t v707 = (v699 & 0xffffffff) % ((int64_t)&g118 & 0xffffffff); // 0x3f845
            v6 = v707;
            v676 = v707;
            v677 = v706;
            while (v678 != 0) {
                int64_t v708 = v701;
                v679 = (int64_t)&g19;
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
                v706 = (v700 & 0xffffffff) % ((int64_t)&g118 & 0xffffffff);
                v707 = (v699 & 0xffffffff) % ((int64_t)&g118 & 0xffffffff);
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
        result = (int64_t)&g119;
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
    int64_t v633 = a1 + (int64_t)&g35;
    int16_t * v639 = (int16_t *)v633;
    bool v723; // 0x3e19c
    v71 = v723 ? -1 : 1;
    int64_t v416 = a1 + 72;
    int64_t v384 = a1 + 44;
    int64_t * v412 = (int64_t *)v384;
    int64_t v724 = a1 + (int64_t)&g111;
    int128_t * v413 = (int128_t *)v724;
    int64_t v404 = a1 + (int64_t)&g26;
    char * v385 = (char *)v404;
    int32_t * v386 = (int32_t *)(a1 + 52);
    v81 = a1 + 360;
    int64_t v427 = v721 + 132;
    int64_t v725; // bp-124, 0x3e19c
    int64_t v433 = 0x100000000 * (int64_t)&v725 >> 32;
    int64_t v476 = v721 + 196;
    int32_t * v592 = (int32_t *)v384;
    int32_t * v593 = (int32_t *)(a1 + 48);
    int64_t v594 = a1 + (int64_t)&g27;
    int64_t v595 = a1 + (int64_t)&g37;
    char * v597 = (char *)v595;
    char * v596 = (char *)v416;
    char * v598 = (char *)v724;
    v232 = a1 + (int64_t)&g117;
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
                char * v358 = (char *)(v357 + (int64_t)&g62); // 0x3e927
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
                int32_t v383 = *(int32_t *)(v382 + (int64_t)&g64); // 0x3e9bf
                *(int32_t *)(v384 + v382) = v383 + (int32_t)(v377 + 0xffffffff & v365);
                v350 = v374;
                v351 = v380;
                v352 = v381;
                while ((int32_t)v378 < 3) {
                    // 0x3e91e
                    v357 = v378 & 0xffffffff;
                    v358 = (char *)(v357 + (int64_t)&g62);
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
                    v383 = *(int32_t *)(v382 + (int64_t)&g64);
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
                    unsigned char v401 = *(char *)(v387 + (int64_t)&g65); // 0x3ea61
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
                        v401 = *(char *)(v387 + (int64_t)&g65);
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
                int128_t v411 = __asm_movaps(g66); // 0x3e8a4
                *v412 = 0x2000000120;
                __asm_movups(*v413, v411);
                __asm_movups(*(int128_t *)(a1 + (int64_t)&g112), v411);
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
                int64_t v419 = v418 * (int64_t)&g110; // 0x3ea9d
                int64_t v420; // bp-196, 0x3e19c
                __asm_rep_stosd_memset((char *)&v420, 0, 16);
                __asm_rep_stosd_memset((char *)(v419 + v81), 0, (int64_t)&g28);
                int64_t v421 = v419 + a1;
                __asm_rep_stosd_memset((char *)(v421 + (int64_t)&g101), 0, 288);
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
                if (v431 >= 2 && v432 != (int32_t)&g1) {
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
                    v452 = v418 * (int64_t)&g81;
                    v453 = v452 + 176;
                    v454 = v452 + (int64_t)&g60;
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
                            if ((int32_t)v463 <= (int32_t)&g57) {
                                // 0x3ec12
                                v467 = 512 * v459 | v451;
                                v6 = v463 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                *(int16_t *)(2 * (v453 + (v463 & 0xffffffff)) + v25) = v467;
                                v470 = v6;
                                v449 = v442;
                                while ((int32_t)v470 <= (int32_t)&g57) {
                                    // 0x3ec12
                                    v6 = v470 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                    *(int16_t *)(2 * (v453 + (v470 & 0xffffffff)) + v25) = v467;
                                    v470 = v6;
                                    v449 = v442;
                                }
                            }
                        } else {
                            // 0x3ec2c
                            v465 = (int16_t *)(2 * ((v462 & (int64_t)(int32_t)&g57) + v452) + v81);
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
                                v471 = (int16_t *)(a1 + (int64_t)&g101 + 2 * (v469 + v452));
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
                                    v471 = (int16_t *)(a1 + (int64_t)&g101 + 2 * (v475 + v452));
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
                                if ((int32_t)v463 <= (int32_t)&g57) {
                                    // 0x3ec12
                                    v467 = 512 * v459 | v451;
                                    v6 = v463 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                    *(int16_t *)(2 * (v453 + (v463 & 0xffffffff)) + v25) = v467;
                                    v470 = v6;
                                    v449 = v442;
                                    while ((int32_t)v470 <= (int32_t)&g57) {
                                        // 0x3ec12
                                        v6 = v470 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                        *(int16_t *)(2 * (v453 + (v470 & 0xffffffff)) + v25) = v467;
                                        v470 = v6;
                                        v449 = v442;
                                    }
                                }
                            } else {
                                // 0x3ec2c
                                v465 = (int16_t *)(2 * ((v462 & (int64_t)(int32_t)&g57) + v452) + v81);
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
                                    v471 = (int16_t *)(a1 + (int64_t)&g101 + 2 * (v469 + v452));
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
                                        v471 = (int16_t *)(a1 + (int64_t)&g101 + 2 * (v475 + v452));
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
                                    v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g57));
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
                                        v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g57));
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
                            v548 = *(int16_t *)(v594 + 2 * (v522 & (int64_t)(int32_t)&g57));
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
                        v569 = *(char *)(v568 + (int64_t)&g61);
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
                        v577 = *(char *)(v568 + (int64_t)&g63);
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
                                        v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g57));
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
                                            v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g57));
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
                                v548 = *(int16_t *)(v594 + 2 * (v522 & (int64_t)(int32_t)&g57));
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
                            v569 = *(char *)(v568 + (int64_t)&g61);
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
                            v577 = *(char *)(v568 + (int64_t)&g63);
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
                    v419 = v418 * (int64_t)&g110;
                    __asm_rep_stosd_memset((char *)&v420, 0, 16);
                    __asm_rep_stosd_memset((char *)(v419 + v81), 0, (int64_t)&g28);
                    v421 = v419 + a1;
                    __asm_rep_stosd_memset((char *)(v421 + (int64_t)&g101), 0, 288);
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
                    if (v431 >= 2 && v432 != (int32_t)&g1) {
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
                        v452 = v418 * (int64_t)&g81;
                        v453 = v452 + 176;
                        v454 = v452 + (int64_t)&g60;
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
                                if ((int32_t)v463 <= (int32_t)&g57) {
                                    // 0x3ec12
                                    v467 = 512 * v459 | v451;
                                    v6 = v463 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                    *(int16_t *)(2 * (v453 + (v463 & 0xffffffff)) + v25) = v467;
                                    v470 = v6;
                                    v449 = v442;
                                    while ((int32_t)v470 <= (int32_t)&g57) {
                                        // 0x3ec12
                                        v6 = v470 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                        *(int16_t *)(2 * (v453 + (v470 & 0xffffffff)) + v25) = v467;
                                        v470 = v6;
                                        v449 = v442;
                                    }
                                }
                            } else {
                                // 0x3ec2c
                                v465 = (int16_t *)(2 * ((v462 & (int64_t)(int32_t)&g57) + v452) + v81);
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
                                    v471 = (int16_t *)(a1 + (int64_t)&g101 + 2 * (v469 + v452));
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
                                        v471 = (int16_t *)(a1 + (int64_t)&g101 + 2 * (v475 + v452));
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
                                    if ((int32_t)v463 <= (int32_t)&g57) {
                                        // 0x3ec12
                                        v467 = 512 * v459 | v451;
                                        v6 = v463 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                        *(int16_t *)(2 * (v453 + (v463 & 0xffffffff)) + v25) = v467;
                                        v470 = v6;
                                        v449 = v442;
                                        while ((int32_t)v470 <= (int32_t)&g57) {
                                            // 0x3ec12
                                            v6 = v470 + (int64_t)(1 << v459 % 32) & 0xffffffff;
                                            *(int16_t *)(2 * (v453 + (v470 & 0xffffffff)) + v25) = v467;
                                            v470 = v6;
                                            v449 = v442;
                                        }
                                    }
                                } else {
                                    // 0x3ec2c
                                    v465 = (int16_t *)(2 * ((v462 & (int64_t)(int32_t)&g57) + v452) + v81);
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
                                        v471 = (int16_t *)(a1 + (int64_t)&g101 + 2 * (v469 + v452));
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
                                            v471 = (int16_t *)(a1 + (int64_t)&g101 + 2 * (v475 + v452));
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
                                        v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g57));
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
                                            v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g57));
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
                                v548 = *(int16_t *)(v594 + 2 * (v522 & (int64_t)(int32_t)&g57));
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
                            v569 = *(char *)(v568 + (int64_t)&g61);
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
                            v577 = *(char *)(v568 + (int64_t)&g63);
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
                                            v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g57));
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
                                                v552 = *(int16_t *)(v594 + 2 * (v520 & (int64_t)(int32_t)&g57));
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
                                    v548 = *(int16_t *)(v594 + 2 * (v522 & (int64_t)(int32_t)&g57));
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
                                v569 = *(char *)(v568 + (int64_t)&g61);
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
                                v577 = *(char *)(v568 + (int64_t)&g63);
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
                            int16_t v133 = *(int16_t *)(2 * (v130 & (int64_t)(int32_t)&g57) + v81); // 0x3f152
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
                                uint16_t v143 = *(int16_t *)(2 * (((v130 >> v139 % 64) % 2 | (int64_t)&g60) + (0x100000000 * v142 >> 32)) + v25); // 0x3f187
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
                                    v143 = *(int16_t *)(2 * (((v130 >> v139 % 64) % 2 | (int64_t)&g60) + (0x100000000 * v142 >> 32)) + v25);
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
                            int16_t v149 = *(int16_t *)(2 * (v148 & (int64_t)(int32_t)&g57) + v81); // 0x3f1ab
                            int64_t v150 = v149; // 0x3f1ab
                            int64_t v151 = v150; // 0x3f1b6
                            int64_t v152 = 10; // 0x3f1b6
                            int64_t v153; // 0x3e19c
                            int64_t v154; // 0x3e19c
                            if (v149 < 0) {
                                uint64_t v155 = v152;
                                int64_t v156 = v151;
                                int64_t v157 = v155 + 1 & 0xffffffff; // 0x3f1c7
                                uint16_t v158 = *(int16_t *)(2 * (((v148 >> v155 % 64) % 2 | (int64_t)&g60) + ((0x100000000 * v156 ^ -0x100000000) >> 32)) + v25); // 0x3f1e1
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
                                    v158 = *(int16_t *)(2 * (((v148 >> v155 % 64) % 2 | (int64_t)&g60) + ((0x100000000 * v156 ^ -0x100000000) >> 32)) + v25);
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
            if (v638 != -1 - *(int16_t *)(a1 + (int64_t)&g36)) {
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
    if (v729 < 15 || 1 << v729 == (int32_t)&g84) {
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

// Address range: 0x63d20 - 0x63d4b
int64_t function_63d20(int64_t a1) {
    // 0x63d20
    *(int64_t *)(a1 + (int64_t)&g102 - 2456) = (int64_t)&g86;
    int64_t result = function_7293a(a1 + (int64_t)&g102); // 0x63d39
    *(char *)(a1 + 80) = 0;
    return result;
}

// Address range: 0x63d4c - 0x63d66
int64_t function_63d4c(int64_t a1) {
    // 0x63d4c
    *(int64_t *)(a1 + (int64_t)&g102 - 2456) = (int64_t)&g86;
    return function_72994(a1 + (int64_t)&g102);
}

// Address range: 0x63d66 - 0x63d7d
int64_t function_63d66(int64_t a1) {
    // 0x63d66
    function_63d4c(a1);
    return function_4eeb30(a1, &g103);
}

// Address range: 0x63d80 - 0x63da7
int64_t function_63d80(int64_t a1) {
    // 0x63d80
    __readfsqword(40);
    return function_24d05b();
}

// Address range: 0x63db5 - 0x63dc0
int64_t function_63db5(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 0x69cc4e25); // 0x63db5
    int64_t v2; // 0x63db5
    bool v3; // 0x63db5
    *v1 = (int32_t)v3 - (int32_t)v2 + *v1;
    int64_t result; // 0x63db5
    int64_t v4 = result;
    *(char *)v4 = *(char *)&result ^ (char)v4;
    return result;
}

// Address range: 0x63e29 - 0x63e2c
int64_t function_63e29(int64_t a1) {
    // 0x63e29
    int64_t result; // 0x63e29
    return result;
}

// Address range: 0x63e2f - 0x63e30
int64_t function_63e2f(void) {
    // 0x63e2f
    int64_t result; // 0x63e2f
    return result;
}

// Address range: 0x63e3c - 0x63e4f
int64_t function_63e3c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x63e3c
    bool v1; // 0x63e3c
    if (v1) {
        function_63e2f();
    }
    // 0x63e43
    int64_t v2; // 0x63e3c
    int32_t * v3 = (int32_t *)(a1 + 0x65dcc6b7 + 4 * v2); // 0x63e43
    *v3 = (int32_t)v1 + (int32_t)a3 + *v3;
    return function_ffffffffa9adff33();
}

// Address range: 0x63eae - 0x63eb1
int64_t function_63eae(int64_t a1) {
    // 0x63eae
    int64_t result; // 0x63eae
    return result;
}

// Address range: 0x63ef1 - 0x63ef5
int64_t function_63ef1(int64_t a1) {
    // 0x63ef1
    int64_t result; // 0x63ef1
    return result;
}

// Address range: 0x63efb - 0x63efd
int64_t function_63efb(int64_t a1) {
    // 0x63efb
    int64_t result; // 0x63efb
    return result;
}

// Address range: 0x63f0e - 0x63f13
int64_t function_63f0e(void) {
    // 0x63f0e
    return function_ffffffff87b8e917();
}

// Address range: 0x63f36 - 0x63f4b
int64_t function_63f36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x63f36
    int64_t result; // 0x63f36
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)a4;
    __asm_int(7);
    char * v2 = (char *)(a3 - 6); // 0x63f45
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x63f4b - 0x63f8e
int64_t function_63f4b(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x63f4b
    int64_t v1; // 0x63f4b
    int64_t result = v1 & 0xffffffff; // 0x63f81
    if (v1 != __readfsqword(40)) {
        // 0x63f83
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x63f88
    return result;
}

// Address range: 0x63f90 - 0x63ff0
int64_t function_63f90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x63f90
    __readfsqword(40);
    return function_24df31();
}

// Address range: 0x63ff2 - 0x63fff
int64_t function_63ff2(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x4468a55d); // 0x63ff2
    *v1 = *v1 + (int32_t)a2;
    __asm_iretd(a1, a2, a3);
    return function_5304f02b();
}

// Address range: 0x64016 - 0x640b4
int64_t function_64016(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a3 + 0x3015ba52); // 0x64016
    *v1 = -*v1;
    int32_t v2 = __asm_in((int16_t)a3); // 0x64020
    int64_t v3 = v2; // 0x64020
    int32_t * v4 = (int32_t *)(a3 - 34); // 0x64021
    *v4 = *v4 | (int32_t)a4;
    *(char *)-0x1e1ea05b788ede44 = (char)v2;
    *(char *)v3 = 77;
    int64_t v5; // 0x64016
    int64_t v6 = v3 & -256 | (int64_t)*(char *)(v5 + (int64_t)(v2 % 256)); // 0x64031
    char * v7 = (char *)(v6 + 88); // 0x64039
    *v7 = 2 * *v7;
    char * v8 = (char *)(v6 + 121); // 0x6403c
    *v8 = 2 * *v8;
    int64_t result = v6; // 0x64070
    if (__readfsqword(40) != a6) {
        // 0x64072
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x64077
    return result;
}

// Address range: 0x640c8 - 0x640cb
int64_t function_640c8(int64_t a1) {
    // 0x640c8
    int64_t result; // 0x640c8
    return result;
}

// Address range: 0x640d1 - 0x640e5
int64_t function_640d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x640d1
    int64_t v1; // 0x640d1
    uint64_t result = v1 & -256 | (int64_t)__asm_in_134((int16_t)a3); // 0x640d4
    char * v2 = (char *)(a4 + 3); // 0x640d5
    *v2 = *v2 + (char)(result / 256);
    char * v3 = (char *)(a4 - 0x3b844d5c); // 0x640d8
    *v3 = *v3 ^ 27;
    int32_t * v4 = (int32_t *)(a1 + 14); // 0x640df
    *v4 = *v4 - (int32_t)result;
    return result;
}

// Address range: 0x640f7 - 0x640fa
int64_t function_640f7(int64_t a1) {
    // 0x640f7
    int64_t result; // 0x640f7
    return result;
}

// Address range: 0x64146 - 0x64149
int64_t function_64146(void) {
    // 0x64146
    int64_t result; // 0x64146
    return result;
}

// Address range: 0x64169 - 0x6416b
int64_t function_64169(void) {
    // 0x64169
    int64_t result; // 0x64169
    return result;
}

// Address range: 0x641bd - 0x641c0
int64_t function_641bd(void) {
    // 0x641bd
    int64_t result; // 0x641bd
    return result;
}

// Address range: 0x641c5 - 0x641c6
int64_t function_641c5(void) {
    // 0x641c5
    int64_t result; // 0x641c5
    return result;
}

// Address range: 0x641cf - 0x641df
int64_t function_641cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x641cf
    return __asm_int1((int64_t)&g119);
}

// Address range: 0x641df - 0x6426b
int64_t function_641df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x641df
    int64_t v1; // 0x641df
    // 0x641e1
    __asm_sti();
    int32_t v2 = __asm_in_138(109); // 0x641f3
    int32_t * v3 = (int32_t *)(v1 + 11); // 0x641f5
    *v3 = *v3 & -41;
    int64_t v4 = v2 + 0x4a27233e; // 0x641f9
    uint32_t v5 = (int32_t)v1 % 32; // 0x64204
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)v4; // 0x64204
        uint32_t v7 = *v6; // 0x64204
        unsigned char v8 = *(char *)(v1 - 0xf28244c); // 0x641fe
        *v6 = v7 << v5 | (int32_t)((int64_t)v7 >> (int64_t)(33 - v5)) | (int32_t)(v8 > (char)(v1 / 256)) << v5 - 1;
    }
    return v4 & 0xffffff00 | (int64_t)*(char *)-0x108b9e351345cbe2;
}

// Address range: 0x64270 - 0x642a6
int64_t function_64270(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64270
    __readfsqword(40);
    return function_254332();
}

// Address range: 0x642a6 - 0x642b7
int64_t function_642a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x642a6
    __asm_in_134((int16_t)a3);
    __asm_iretd((int64_t)&g119, (int64_t)&g119, (int64_t)&g119);
    int64_t v1; // 0x642a6
    return function_642cf(a1, a2, a3, v1 & 0xffffffff, (int64_t)&g119);
}

// Address range: 0x642b7 - 0x642cf
int64_t function_642b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x642b7
    int64_t v1; // 0x642b7
    __asm_out((int16_t)a3, (int32_t)v1);
    return v1 + 0x32aa9e0e & 0xffffffff;
}

// Address range: 0x642cf - 0x64399
int64_t function_642cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x642cf
    bool v1; // 0x642cf
    char * v2 = (char *)((v1 ? -1 : 1) + a2); // 0x642d2
    int64_t v3; // 0x642cf
    char v4 = *v2 & (char)((uint64_t)v3 / 256); // 0x642d2
    *v2 = v4;
    if (v4 == 0) {
        // 0x642d9
        return function_ffffffff9f19132a();
    }
    // 0x64341
    return (int64_t)*(int32_t *)0x76ae72f7048d8170;
}

// Address range: 0x64399 - 0x643e9
int64_t function_64399(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a3; // 0x6439a
    unsigned char v2 = 2 * v1; // 0x6439a
    *(int32_t *)-0x321f61758ace8a4c = (int32_t)a4;
    __asm_out_137(-15, v2);
    int64_t v3; // 0x64399
    *(char *)(a1 & 0xffffffff) = 2 * (char)v3;
    char v4 = __asm_in_134((int16_t)((a4 + 159 + (int64_t)(v2 < v1)) % 256 | a4 & 0xff00)); // 0x643cd
    unsigned char v5 = *(char *)0x7d9f14acf44d3639; // 0x643d5
    return (int64_t)v4 & -256 | a3 & 0xffffff00 | (int64_t)v5;
}

// Address range: 0x643e9 - 0x64421
int64_t function_643e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x643e9
    int64_t result; // 0x643e9
    int64_t v1; // 0x643e9
    if (v1 != __readfsqword(40)) {
        // 0x64416
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x6441b
    return result;
}

// Address range: 0x64430 - 0x6448a
int64_t function_64430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x64430
    __readfsqword(40);
    return function_25621f();
}

// Address range: 0x6448a - 0x6448e
int64_t function_6448a(void) {
    // 0x6448a
    int64_t v1; // 0x6448a
    return v1 & 0xffffffff;
}

// Address range: 0x64491 - 0x644a5
int64_t function_64491(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64491
    return a3 & 0xffffffff;
}

// Address range: 0x644ab - 0x644ae
int64_t function_644ab(void) {
    // 0x644ab
    int64_t result; // 0x644ab
    return result;
}

// Address range: 0x644bd - 0x644c8
int64_t function_644bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4;
    uint32_t v2 = v1 % 32; // 0x644bd
    int64_t v3; // 0x644bd
    char v4 = v3;
    char v5 = v4; // 0x644bd
    char v6 = v4; // 0x644bd
    int64_t v7; // 0x644bd
    int64_t result; // 0x644bd
    if (v2 != 0) {
        *(int32_t *)a4 = v1 << v2;
        v5 = result;
        v7 = result;
        v6 = *(char *)&result;
    }
    // 0x644bd
    *(char *)v7 = v6 + v5;
    return result;
}

// Address range: 0x644f6 - 0x644f7
int64_t function_644f6(void) {
    // 0x644f6
    int64_t result; // 0x644f6
    return result;
}

// Address range: 0x64505 - 0x6450c
int64_t function_64505(void) {
    // 0x64505
    int64_t v1; // 0x64505
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x6455c - 0x6459d
int64_t function_6455c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6455c
    int64_t v1; // 0x6455c
    int64_t v2 = v1;
    int64_t v3 = (int64_t)(*(int32_t *)(v1 + 0x6589b6c6) | (int32_t)v1); // 0x6455c
    *(int32_t *)v2 = (int32_t)v2 - 120;
    *(int32_t *)(v3 + 76) = 0;
    int64_t result; // 0x6455c
    if (*(int64_t *)(v3 + 128) != __readfsqword(40)) {
        // 0x64592
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x64597
    return result;
}

// Address range: 0x645a0 - 0x645d4
int64_t function_645a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x645a0
    __readfsqword(40);
    return function_258f2d();
}

// Address range: 0x64601 - 0x6460f
int64_t function_64601(int64_t a1) {
    // 0x64601
    int64_t v1; // 0x64601
    bool v2; // 0x64601
    return v1 + 0xc41bcc5 + (int64_t)v2 & 0x782b4ab1;
}

// Address range: 0x64616 - 0x6461f
int64_t function_64616(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64616
    __asm_int(42);
    int64_t v1; // 0x64616
    return v1 & -246;
}

// Address range: 0x6466b - 0x64671
int64_t function_6466b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6466b
    int64_t result; // 0x6466b
    unsigned char v1 = (char)result;
    *(char *)a4 = v1 / 128 | 2 * v1;
    int64_t v2; // 0x6466b
    *(char *)a1 = *(char *)&v2 + (char)result;
    return result;
}

// Address range: 0x64672 - 0x64676
int64_t function_64672(int64_t a1) {
    // 0x64672
    return __asm_int1(a1);
}

// Address range: 0x646cf - 0x646d4
int64_t function_646cf(int64_t a1) {
    // 0x646cf
    int64_t v1; // 0x646cf
    return v1 | 86;
}

// Address range: 0x64730 - 0x64731
int64_t function_64730(void) {
    // 0x64730
    int64_t result; // 0x64730
    return result;
}

// Address range: 0x64739 - 0x64750
int64_t function_64739(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x64739
    int64_t v1; // 0x64739
    uint64_t v2 = v1;
    unsigned char v3 = *(char *)((a2 ^ a1) & 0xffffffff); // 0x64740
    bool v4; // 0x64739
    int64_t v5 = (v4 ? -1 : 1) + a1; // 0x64740
    int64_t v6 = 0x100000000 * v5 >> 32; // 0x64743
    uint64_t v7 = -61 * v6; // 0x64743
    int64_t result = 256 * (v7 / 256 + v2 / 256 + (int64_t)(v7 != -0x3d00000000 * v6 >> 32)) & 0xff00 | v2 & 0xffff00ff; // 0x64746
    int32_t * v8 = (int32_t *)(((v2 - a3 / 256 + (int64_t)(v3 < (char)v1)) % 256 | v2 & -256) + 93); // 0x64749
    *v8 = *v8 / 2;
    int32_t * v9 = (int32_t *)v5; // 0x6474c
    *v9 = *v9 | (int32_t)v1;
    __asm_out((int16_t)v7, (int32_t)result);
    return result;
}

// Address range: 0x64750 - 0x6478d
int64_t function_64750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x64750
    int64_t v1; // 0x64750
    __asm_out_135(-127, (int32_t)v1);
    int64_t result; // 0x64750
    if (v1 != __readfsqword(40)) {
        // 0x64782
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x64787
    return result;
}

// Address range: 0x64790 - 0x647c4
int64_t function_64790(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64790
    __readfsqword(40);
    return function_25cc91();
}

// Address range: 0x647e2 - 0x647e3
int64_t function_647e2(void) {
    // 0x647e2
    int64_t result; // 0x647e2
    return result;
}

// Address range: 0x64820 - 0x64822
int64_t function_64820(void) {
    // 0x64820
    int64_t v1; // 0x64820
    return function_64867(v1, v1, v1);
}

// Address range: 0x64829 - 0x6482a
int64_t function_64829(void) {
    // 0x64829
    int64_t result; // 0x64829
    return result;
}

// Address range: 0x64834 - 0x64867
int64_t function_64834(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64834
    int64_t v1; // 0x64834
    unsigned char v2 = (char)v1 ^ 19; // 0x64834
    unsigned char v3 = llvm_ctpop_i8(v2); // 0x64834
    int64_t v4 = (int64_t)*(int32_t *)(v1 & -256 | (int64_t)v2); // 0x6483c
    if (v3 % 2 != 0) {
        v4 = function_64829();
    }
    int64_t v5 = a4 & -0xff01 | (int64_t)&g109; // 0x64841
    uint32_t v6 = (int32_t)v5; // 0x64848
    uint32_t v7 = v6 % 32; // 0x64848
    if (v7 != 0) {
        int32_t * v8 = (int32_t *)v5; // 0x64848
        uint32_t v9 = *v8; // 0x64848
        *v8 = v9 << v7 | (int32_t)((int64_t)v9 >> (int64_t)(33 - v7));
    }
    char * v10 = (char *)v5; // 0x6484c
    *v10 = *v10 + ((char)(v4 / 256) | 39);
    int64_t v11 = __asm_sti(); // 0x64851
    char * v12 = (char *)(v11 + 0x1c719496); // 0x64856
    unsigned char v13 = (char)a3 | (char)&g85; // 0x64856
    *v12 = *v12 ^ v13;
    int32_t * v14 = (int32_t *)(v1 - 94); // 0x6485c
    uint32_t v15 = *v14; // 0x6485c
    uint32_t v16 = v15 + v6; // 0x6485c
    *v14 = v16;
    int64_t v17 = v11; // 0x6485f
    if (((v16 ^ v15) & (v16 ^ v6)) < 0) {
        v17 = function_647e2();
    }
    int64_t v18 = v17;
    unsigned char v19 = v13 + 115 + (char)(v16 < v15); // 0x64862
    int64_t v20 = v16 < v15 ? v19 <= v13 : v13 > 140 ? 224 : 223; // 0x64864
    int64_t result = (v18 - v20) % 256 | v18 & -256; // 0x64864
    __asm_out((int16_t)v19 | (int16_t)((int64_t)&g85 & 0xff00), (int32_t)result);
    return result;
}

// Address range: 0x64867 - 0x64870
int64_t function_64867(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x64869
    int64_t v2; // 0x64867
    __asm_outsb(v1, (char)v2);
    __asm_out(v1, (int32_t)v2);
    return v2 & 0xffffffff;
}

// Address range: 0x64871 - 0x64872
int64_t function_64871(void) {
    // 0x64871
    int64_t result; // 0x64871
    return result;
}

// Address range: 0x64878 - 0x6487b
int64_t function_64878(void) {
    // 0x64878
    int64_t result; // 0x64878
    return result;
}

// Address range: 0x64897 - 0x648e4
int64_t function_64897(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a3 & -256 | 149; // 0x64899
    int32_t * v3 = (int32_t *)v2; // 0x6489b
    int32_t v4 = *v3 + (int32_t)a1; // 0x6489b
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x6489b
    *v3 = v4;
    int64_t v6; // 0x64897
    if (v5 % 2 != 0) {
        v6 = function_64871();
    }
    int64_t v7 = v6;
    int64_t v8 = (v7 + 209) % 256 | v7 & 0xffffff00; // 0x648b4
    uint32_t v9 = (int32_t)v8; // 0x648b9
    *(int32_t *)0x310431afa37e13fb = v9;
    int32_t v10 = *(int32_t *)&v1; // 0x648c7
    int64_t v11 = v1;
    *(int32_t *)v11 = v10 - (int32_t)v11 + (int32_t)(v9 < 0xf35b1071);
    unsigned char v12 = *(char *)(a2 - 0x5c0eba3b); // 0x648c9
    *(char *)0xfae9cda6 = *(char *)0xfae9cda6 + (char)v1;
    __asm_out_135(-17, (int32_t)(v7 & 0xffff0000 | (int64_t)(256 * ((int16_t)v8 % (int16_t)v12)) | (int64_t)__asm_in_136(-61)));
    return v2 & 0xffffff95;
}

// Address range: 0x648f2 - 0x648f3
int64_t function_648f2(void) {
    // 0x648f2
    int64_t result; // 0x648f2
    return result;
}

// Address range: 0x648fe - 0x648ff
int64_t function_648fe(int64_t a1) {
    // 0x648fe
    int64_t result; // 0x648fe
    return result;
}

// Address range: 0x6490b - 0x649dc
int64_t function_6490b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x6490b
    int64_t v1; // 0x6490b
    int64_t v2 = v1;
    bool v3; // 0x6490b
    *(int32_t *)a1 = *(int32_t *)((v3 ? -4 : 4) + a2);
    if ((char)v2 - *(char *)(v2 - 79) >= 0) {
        // 0x64991
        return v1 & 0xffffffff;
    }
    // 0x64917
    return function_648f2();
}

// Address range: 0x649e0 - 0x64a21
int64_t function_649e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x649e0
    __readfsqword(40);
    return function_261ed2();
}

// Address range: 0x64a9c - 0x64a9d
int64_t function_64a9c(void) {
    // 0x64a9c
    int64_t result; // 0x64a9c
    return result;
}

// Address range: 0x64aa7 - 0x64aaa
int64_t function_64aa7(void) {
    // 0x64aa7
    int64_t result; // 0x64aa7
    return result;
}

// Address range: 0x64ae6 - 0x64b79
int64_t function_64ae6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x64ae6
    int64_t v1; // 0x64ae6
    char v2 = v1; // 0x64ae6
    *(char *)-0xd72aa3ec056eeeb = v2;
    int64_t v3 = __asm_in_138(-60); // 0x64af2
    if (v2 >= 16) {
        // 0x64b73
        return v3 ^ 209;
    }
    // 0x64af6
    return v3 & 0x9af3789e;
}

// Address range: 0x64b85 - 0x64ca5
int64_t function_64b85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4 - 1; // 0x64b85
    int64_t v2; // 0x64b85
    bool v3; // 0x64b85
    if (v1 != 0 != v3) {
        if (v1 != 1 == v3) {
            // 0x64bdc
            return v2 & -243;
        }
        // 0x64b8b
        int64_t result; // 0x64b85
        return result;
    }
    char v4 = v2; // 0x64beb
    char v5 = v2 / 256; // 0x64beb
    char v6 = v5 + v4; // 0x64beb
    if (v6 < 0 != ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x64b95
        return v2 & -256 | (int64_t)v6;
    }
    uint32_t v7 = *(int32_t *)(a1 + 7) & (int32_t)v2; // 0x64be8
    int64_t v8 = v7; // 0x64be8
    int64_t result2 = __asm_hlt(a1, a2, a3, v1); // 0x64bef
    char * v9 = (char *)(v8 + 40); // 0x64bf1
    char v10 = *v9 + (char)v2; // 0x64bf1
    *v9 = v10;
    int64_t v11 = a4 - 2; // 0x64bf5
    if (v11 != 0 != (v10 == 0)) {
        // 0x64b8b
        return result2;
    }
    int64_t v12 = a1 - 68 + v2; // 0x64bcc
    __writegsbyte(v12, __readgsbyte(v12) + (char)result2);
    __asm_hlt(a1, a2, a3, v11);
    int64_t v13; // 0x64b85
    int64_t v14 = (int64_t)&v13; // bp-8, 0x64bd2
    char * v15 = (char *)v8; // 0x64bd3
    *v15 = *v15 & (char)(v7 / 256);
    return (int64_t)&v14;
}

// Address range: 0x64caf - 0x64cb4
int64_t function_64caf(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x64caf
    int64_t v1; // 0x64caf
    return a2 & 0xffffff00 | (int64_t)*(char *)(v1 + a2 % 256);
}

// Address range: 0x64ccc - 0x64cd4
int64_t function_64ccc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x64ccc
    int64_t v1; // 0x64ccc
    return v1 & -256 | (int64_t)__asm_in_136(-40);
}

// Address range: 0x64cd4 - 0x64cdb
int64_t function_64cd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x64cd4
    int64_t result; // 0x64cd4
    return result;
}

// Address range: 0x64cdb - 0x64d27
int64_t function_64cdb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x64cdb
    while (a4 == 0) {
        // continue -> 0x64cdc
    }
    // 0x64cde
    int64_t v1; // 0x64cdb
    int64_t result = v1 & 0xffffffff; // 0x64d10
    if (v1 != __readfsqword(40)) {
        // 0x64d12
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x64d17
    return result;
}

// Address range: 0x64d30 - 0x64d61
int64_t function_64d30(int64_t a1, int64_t a2) {
    // 0x64d30
    __readfsqword(40);
    return function_2669b9();
}

// Address range: 0x64dae - 0x64db0
int64_t function_64dae(void) {
    // 0x64dae
    int64_t v1; // 0x64dae
    return function_64e1a(v1, v1, v1, v1);
}

// Address range: 0x64db7 - 0x64db9
int64_t function_64db7(void) {
    // 0x64db7
    int64_t v1; // 0x64db7
    return function_64e00(v1, v1, v1, v1);
}

// Address range: 0x64ded - 0x64dee
int64_t function_64ded(void) {
    // 0x64ded
    int64_t result; // 0x64ded
    return result;
}

// Address range: 0x64e00 - 0x64e05
int64_t function_64e00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64e00
    int64_t result; // 0x64e00
    int32_t v1 = *(int32_t *)(result - 113); // 0x64e01
    __asm_out((int16_t)(v1 | (int32_t)a3), (int32_t)result);
    return result;
}

// Address range: 0x64e1a - 0x64e20
int64_t function_64e1a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x64e1a
    int64_t v1; // 0x64e1a
    uint64_t v2 = v1;
    *(char *)(v1 - 68) = (char)(a3 / 256);
    char v3 = *(char *)(a4 + 84); // 0x64e1d
    return 256 * (int64_t)((char)(v2 / 256) - v3) | v2 & -0xff01;
}

// Address range: 0x64e21 - 0x64e2c
int64_t function_64e21(int64_t a1, int64_t a2, int64_t a3) {
    // 0x64e21
    int64_t v1; // 0x64e21
    uint64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v2;
    __asm_out_135(-12, (int32_t)(v1 & 0xffffff00 | v2 % 256));
    return function_64ded();
}

// Address range: 0x64e36 - 0x64e38
int64_t function_64e36(void) {
    // 0x64e36
    return __asm_int1((int64_t)&g119);
}

// Address range: 0x64e3d - 0x64eb7
int64_t function_64e3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x64e3d
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x64e3d
    int32_t * v2 = (int32_t *)(v1 + 0x2b7f2d57); // 0x64e3e
    bool v3; // 0x64e3d
    *v2 = *v2 + (v3 ? -0x793bd46c : -0x793bd46d);
    unsigned char v4 = *(char *)(v1 + 85); // 0x64e48
    if ((char)a4 + (char)a3 == (char)(v4 > (char)v1)) {
        // 0x64e8a
        return (int64_t)*(int32_t *)-0x449eff0e42a91d1f;
    }
    // 0x64e51
    return function_12a8bc();
}

// Address range: 0x64eb8 - 0x64ec3
int64_t function_64eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64eb8
    int64_t result; // 0x64eb8
    return result;
}

// Address range: 0x64eca - 0x64ece
int64_t function_64eca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64eca
    int64_t result; // 0x64eca
    return result;
}

// Address range: 0x64ef8 - 0x64efd
int64_t function_64ef8(void) {
    // 0x64ef8
    return function_4cd810d4();
}

// Address range: 0x64f36 - 0x64f39
int64_t function_64f36(int64_t a1) {
    // 0x64f36
    int64_t result; // 0x64f36
    return result;
}

// Address range: 0x64f47 - 0x64f48
int64_t function_64f47(void) {
    // 0x64f47
    int64_t result; // 0x64f47
    return result;
}

// Address range: 0x64f52 - 0x64f6d
int64_t function_64f52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x64f52
    return (int64_t)(*(int32_t *)-0x4703fc7da361f67 ^ 63);
}

// Address range: 0x64f6d - 0x64f75
int64_t function_64f6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64f6d
    int64_t result; // 0x64f6d
    return result;
}

// Address range: 0x64fbb - 0x64ffd
int64_t function_64fbb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x64fbb
    int64_t v1; // 0x64fbb
    bool v2; // 0x64fbb
    if (v2) {
        v1 = function_64fbb(a1, a2, a3, a4);
    }
    int64_t v3 = v1; // 0x64fbd
    if (a4 != 1 && !v2) {
        v3 = function_64f47();
    }
    // 0x64fbf
    int64_t v4; // 0x64fbb
    *(int32_t *)(v4 + 28) = 0;
    int64_t result = v3; // 0x64fed
    if (*(int64_t *)(v4 + 720) != __readfsqword(40)) {
        // 0x64fef
        __stack_chk_fail();
        result = (int64_t)&g119;
    }
    // 0x64ff4
    return result;
}

// Address range: 0x65000 - 0x65036
int64_t function_65000(int64_t a1, int64_t a2, int64_t a3) {
    // 0x65000
    __readfsqword(40);
    return function_26cc29();
}

// Address range: 0x65042 - 0x6504c
int64_t function_65042(void) {
    // 0x65042
    int64_t v1; // 0x65042
    return v1 + 0x2700a9 & 0xffffffff;
}

// Address range: 0x650e0 - 0x65144
int64_t function_650e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x650e0
    int64_t result; // 0x650e0
    bool v1; // 0x650e0
    if (!v1) {
        // 0x65140
        return result;
    }
    // 0x650e6
    *(int64_t *)((int64_t)(72 * *(int32_t *)(result - 102)) - 8) = a1;
    return result;
}

// Address range: 0x65192 - 0x65247
int64_t function_65192(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x65192
    int64_t result; // 0x65192
    bool v1; // 0x65192
    if (v1) {
        // 0x65194
        return result;
    }
    int32_t * v2 = (int32_t *)(4 * result - 0x2e1e7d3c + result); // 0x65195
    uint32_t v3 = *v2 / 2; // 0x65195
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x65195
    *v2 = v3;
    if (v4 % 2 != 0) {
        // 0x65194
        return result;
    }
    int32_t * v5 = (int32_t *)(result - 0x5b0b2344); // 0x6519f
    *v5 = *v5 - (int32_t)result;
    int64_t v6 = result % 256 ^ a4; // 0x651a6
    char * v7 = (char *)(result + 43); // 0x651a9
    char v8 = a4 / 256; // 0x651a9
    *v7 = *v7 | v8;
    int32_t * v9 = (int32_t *)v6; // 0x651ac
    *v9 = *v9 - (int32_t)result;
    char * v10 = (char *)(a3 - 34); // 0x651b5
    *v10 = *v10 + v8;
    __asm_iretd((int64_t)&g119, (int64_t)&g119, (int64_t)&g119);
    char * v11 = (char *)(a3 - 0x4514ecc0); // 0x651dc
    unsigned char v12 = *v11; // 0x651dc
    unsigned char v13 = v12 + ((char)v6 & 83); // 0x651dc
    *v11 = v13;
    uint32_t result2 = *(int32_t *)0x441aa633fe26c3eb; // 0x651e2
    char * v14 = (char *)(result + 39); // 0x651eb
    *v14 = *v14 + (char)(v13 < v12) - (char)(result2 / 256);
    return result2;
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

// Address range: 0x49bfd1 - 0x49d220
int64_t function_49bfd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x49bfd1
    int64_t v1; // 0x49bfd1
    function_49e770(v1, 1, a3, a4, a5, a6);
    if ((*(char *)(v1 + 372) & 2) == 0) {
        // 0x49d1fb
        return 0xffff8e00;
    }
    // 0x49bffa
    *(int64_t *)(v1 + 248) = 0;
    *(int64_t *)(v1 + 232) = 0;
    return function_49bdb4();
}

// Address range: 0x49d220 - 0x49d31d
int64_t function_49d220(int64_t a1) {
    // 0x49d220
    int64_t v1; // 0x49d220
    function_49e770(a1, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t)&g113, (int64_t)"=> read record", v1);
    int64_t v2 = function_49baf0(a1); // 0x49d253
    int32_t v3 = v2;
    while (v3 == 0) {
        int64_t v4 = function_49b370(a1); // 0x49d261
        int32_t v5 = v4;
        if (v5 != -0x6680) {
            int64_t result = v4 & 0xffffffff; // 0x49d26f
            if (v5 != 0) {
                // 0x49d2e0
                function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g115, "mbedtls_ssl_handle_message_type", v5);
                return result;
            }
            // 0x49d273
            if (*(int32_t *)(a1 + 216) != 22) {
                // 0x49d280
                function_49e770(a1, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t)&g116, (int64_t)"<= read record", v1);
                return result;
            }
            // 0x49d310
            function_496860(a1);
            // 0x49d280
            function_49e770(a1, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t)&g116, (int64_t)"<= read record", v1);
            return result;
        }
        v2 = function_49baf0(a1);
        v3 = v2;
    }
    // 0x49d2b0
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g114, "mbedtls_ssl_read_record_layer", v3);
    return v2 & 0xffffffff;
}

// Address range: 0x49d320 - 0x49d5dc
int64_t function_49d320(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x49d320
    if (a1 == 0) {
        // 0x49d610
        int64_t result; // 0x49d320
        return result;
    }
    // 0x49d353
    int64_t v1; // 0x49d320
    function_49e770(a1, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t)&g21, (int64_t)"=> read", v1);
    if ((*(char *)(a1 + 372) & 2) != 0) {
        int64_t v2 = function_496540(a1); // 0x49d387
        if ((int32_t)v2 != 0) {
            // 0x49d450
            return v2 & 0xffffffff & 0xffffffff;
        }
        int64_t v3 = *(int64_t *)(a1 + 96); // 0x49d396
        if (v3 != 0) {
            // 0x49d39f
            if (*(char *)(v3 + (int64_t)&g56) == 1) {
                int64_t v4 = function_49a910(a1); // 0x49d5a3
                if ((int32_t)v4 != 0) {
                    // 0x49d450
                    return v4 & 0xffffffff & 0xffffffff;
                }
            }
        }
    }
    int64_t v5 = function_499dd0(a1); // 0x49d3af
    int32_t v6 = v5; // 0x49d3b4
    int64_t v7 = v5 & 0xffffffff; // 0x49d3b6
    if (v6 != 0) {
        // 0x49d568
        function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g22, "ssl_check_ctr_renegotiate", v6);
        // 0x49d450
        return v7 & 0xffffffff;
    }
    int32_t * v8 = (int32_t *)(a1 + 8); // 0x49d3be
    int32_t v9 = 0; // 0x49d3c2
    int64_t v10; // 0x49d320
    int64_t v11; // 0x49d320
    int64_t v12; // 0x49d320
    int64_t v13; // 0x49d320
    if (*v8 == 16) {
        goto lab_0x49d3f1;
    } else {
        int64_t v14 = function_4976c0(a1); // 0x49d3c7
        int32_t v15 = v14; // 0x49d3cc
        v9 = 1;
        if (v15 == -0x6b00) {
            goto lab_0x49d3f1;
        } else {
            int64_t v16 = v14 & 0xffffffff;
            v12 = v16;
            v9 = 0;
            v10 = v16;
            v13 = (int64_t)&g23;
            v11 = (int64_t)"mbedtls_ssl_handshake";
            if (v15 != 0) {
                goto lab_0x49d4a2;
            } else {
                goto lab_0x49d3f1;
            }
        }
    }
  lab_0x49d3f1:;
    int64_t * v17 = (int64_t *)(a1 + 208); // 0x49d3f1
    int64_t v18 = *v17; // 0x49d3f1
    int64_t * v19; // 0x49d320
    int64_t v20; // 0x49d320
    int64_t result5; // 0x49d320
    int64_t v21; // 0x49d320
    if (v18 == 0) {
        int64_t result2 = *(int64_t *)(a1 + 152); // 0x49d4c8
        int64_t v22 = a1; // 0x49d4d2
        if (result2 != 0) {
            // 0x49d4d4
            v22 = *(int64_t *)(a1 + 136);
            if ((int32_t)result2 == -1) {
                // 0x49d610
                return result2;
            }
        }
        // 0x49d4e6
        result5 = v22;
        if (v9 == 0) {
            int64_t v23 = function_49d220(a1); // 0x49d483
            v20 = v7;
            result5 = a1;
            switch ((int32_t)v23) {
                case 0: {
                    goto lab_0x49d4eb;
                }
                case -0x7280: {
                    return v20 & 0xffffffff;
                }
                default: {
                    // 0x49d493
                    v10 = v23 & 0xffffffff;
                    v13 = (int64_t)&g24;
                    v11 = (int64_t)"mbedtls_ssl_read_record";
                    goto lab_0x49d4a2;
                }
            }
        } else {
            goto lab_0x49d4eb;
        }
    } else {
        // 0x49d3f1
        v19 = (int64_t *)(a1 + 224);
        v21 = v18;
        goto lab_0x49d401;
    }
  lab_0x49d4eb:;
    int64_t * v24 = (int64_t *)(a1 + 224);
    uint32_t v25 = *(int32_t *)(a1 + 216); // 0x49d4f3
    int64_t result3 = v25; // 0x49d4f3
    if (v25 == 22 | *v24 == 0 == v25 == 23) {
        // 0x49d610
        return result3;
    }
    int32_t * v26 = (int32_t *)(a1 + 12); // 0x49d50d
    if (*v26 == 3) {
        // 0x49d5c0
        if (*(int32_t *)(result5 + 348) >= 0) {
            int32_t * v27 = (int32_t *)(a1 + 16); // 0x49d5d1
            *v27 = *v27 + 1;
            return result3;
        }
    }
    // 0x49d517
    if (v25 == 21 || v25 != 23) {
        // 0x49d610
        return result3;
    }
    int64_t result4 = *(int64_t *)(a1 + 200); // 0x49d52d
    *v17 = result4;
    if (*v8 == 16) {
        // 0x49d610
        return result4;
    }
    // 0x49d541
    v19 = v24;
    v21 = result4;
    if (*(char *)(result5 + 372) % 2 != 0) {
        // 0x49d54d
        v19 = v24;
        v21 = result4;
        if (*v26 == 3) {
            // 0x49d610
            return result5;
        }
    }
    goto lab_0x49d401;
  lab_0x49d401:;
    uint64_t v28 = *v19; // 0x49d401
    int64_t v29 = v28 < a3 ? v28 : a3; // 0x49d40e
    memcpy((int64_t *)a2, (int64_t *)v21, (int32_t)v29);
    int64_t v30 = *v19 - v29; // 0x49d41a
    *v19 = v30;
    int64_t v31 = 0; // 0x49d421
    if (v30 != 0) {
        // 0x49d470
        v31 = *v17 + v29;
    }
    // 0x49d42e
    *v17 = v31;
    function_49e770(a1, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t)&g25, (int64_t)"<= read", v12);
    v20 = v29;
    // 0x49d450
    return v20 & 0xffffffff;
  lab_0x49d4a2:
    // 0x49d4a2
    function_49e8b0(a1, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)v13, (char *)v11, (int32_t)v10);
    // 0x49d450
    return v10 & 0xffffffff;
}

// Address range: 0x49f120 - 0x4a03ac
int64_t function_49f120(int64_t result) {
    // 0x49f120
    int64_t v1; // 0x49f120
    function_49e770(result, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g39, (int64_t)"=> write client hello", v1);
    if (*(int64_t *)(result + 48) == 0) {
        // 0x49f953
        return result;
    }
    int32_t * v2 = (int32_t *)(result + 12); // 0x49f15f
    uint32_t v3 = *v2; // 0x49f15f
    if (v3 == 0) {
        // 0x49f169
        *(int32_t *)(result + 20) = (int32_t)*(char *)(result + 370);
        *(int32_t *)(result + 24) = (int32_t)*(char *)(result + 371);
    }
    int64_t v4 = result + 368; // 0x49f181
    unsigned char v5 = *(char *)v4; // 0x49f181
    if (v5 == 0) {
        // 0x4a02cf
        function_49e770(result, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g40, (int64_t)"configured max major version is invalid, consider using mbedtls_ssl_config_defaults()", (int64_t)v3);
        // 0x49f953
        return 0xffff8f00;
    }
    int64_t * v6 = (int64_t *)(result + 328); // 0x49f191
    int64_t v7 = *v6; // 0x49f191
    char * v8 = (char *)(result + 369);
    int64_t v9 = result + 372; // 0x49f1a8
    char * v10 = (char *)v9; // 0x49f1a8
    int64_t v11 = v7 + 4; // 0x49f1af
    function_498d10((int32_t)v5, (int32_t)*v8, (int32_t)(*v10 / 2 % 2), v11);
    unsigned char v12 = *(char *)v11; // 0x49f1dc
    function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g41, (int64_t)"client hello, max version: [%d:%d]", (int64_t)v12);
    int64_t * v13 = (int64_t *)(result + 96); // 0x49f1f4
    int64_t v14 = *v13; // 0x49f1f4
    int64_t v15; // 0x49f120
    if ((*v10 & 2) == 0) {
        goto lab_0x49f998;
    } else {
        // 0x49f206
        v15 = v14;
        if (*(int64_t *)(v14 + (int64_t)&g52) == 0) {
            goto lab_0x49f998;
        } else {
            goto lab_0x49f214;
        }
    }
  lab_0x49fa70:;
    // 0x49fa70
    int32_t v16; // 0x49f60d
    int64_t v17 = v16;
    uint64_t v18; // 0x49f502
    uint64_t v19 = v18 + v17; // 0x49fa75
    char * v20; // 0x49f120
    uint64_t v21 = (int64_t)v20; // 0x49fa7a
    int64_t v22; // 0x49f120
    int64_t v23; // 0x49f120
    int64_t v24; // 0x49f120
    int32_t v25; // 0x49f120
    if (v19 > v21) {
        goto lab_0x49fd6f;
    } else {
        // 0x49fa85
        if (v21 - v19 < v24 + 6) {
            goto lab_0x49fd6f;
        } else {
            int64_t v26 = *(int64_t *)((int64_t)v25 + 240); // 0x49faa1
            int32_t v27 = *(int32_t *)v26; // 0x49faa8
            v22 = v17;
            v23 = 0;
            if (v27 != 0) {
                int64_t v28 = 0;
                int64_t v29 = function_4ba4b0(v27); // 0x49fab8
                int64_t v30 = v28 + v19;
                *(char *)(v30 + 6) = *(char *)(v29 + 5);
                *(char *)(v30 + 7) = (char)*(int16_t *)(v29 + 4);
                int64_t v31 = v28 + 2; // 0x49facf
                int32_t v32 = *(int32_t *)(2 * v31 + v26); // 0x49fad3
                int32_t v33 = v32; // 0x49fada
                while (v32 != 0) {
                    // 0x49fab8
                    v28 = v31;
                    v29 = function_4ba4b0(v33);
                    v30 = v28 + v19;
                    *(char *)(v30 + 6) = *(char *)(v29 + 5);
                    *(char *)(v30 + 7) = (char)*(int16_t *)(v29 + 4);
                    v31 = v28 + 2;
                    v32 = *(int32_t *)(2 * v31 + v26);
                    v33 = v32;
                }
                // 0x49fadc
                v22 = v17;
                v23 = 0;
                if (v31 != 0) {
                    char v34 = v31; // 0x49fae9
                    *(char *)(v19 + 5) = v34;
                    *(char *)v19 = 0;
                    *(char *)(v19 + 1) = 10;
                    *(char *)(v19 + 2) = (char)((v28 + 4) / 256);
                    *(char *)(v19 + 3) = v34 + 2;
                    *(char *)(v19 + 4) = (char)(v31 / 256);
                    v22 = v17;
                    v23 = v28 + 8;
                }
            }
            goto lab_0x49f66e;
        }
    }
  lab_0x49f438:;
    // 0x49f438
    int64_t v35; // 0x49f120
    int64_t v36 = v35 + 4;
    uint32_t v37 = *(int32_t *)v36; // 0x49f43f
    int64_t v38 = v37; // 0x49f43f
    int64_t v39; // 0x49f120
    int64_t v40 = v39; // 0x49f445
    int64_t v41 = v38; // 0x49f445
    int64_t v42; // 0x49f120
    int64_t v43 = v42; // 0x49f445
    int64_t v44 = v36; // 0x49f445
    int64_t v45; // 0x49f120
    int64_t v46 = v45; // 0x49f445
    int64_t v47 = v39; // 0x49f445
    int64_t v48 = v38; // 0x49f445
    int64_t v49 = v42; // 0x49f445
    int64_t v50 = v45; // 0x49f445
    if (v37 == 0) {
        // break -> 0x49f44b
        goto lab_0x49f44b;
    }
    goto lab_0x49f3b0;
  lab_0x49f3e8:;
    int64_t v51; // 0x49f120
    int64_t v52; // 0x49f120
    int64_t v54; // 0x49f120
    int64_t v55; // 0x49f3b0
    char v58; // 0x49f3d6
    if ((v58 & 64) == 0) {
        goto lab_0x49f3f3;
    } else {
        // 0x49f3ed
        v39 = v54;
        v42 = v52;
        v45 = v51;
        if (*(int32_t *)(v55 + 16) == 42) {
            goto lab_0x49f438;
        } else {
            goto lab_0x49f3f3;
        }
    }
  lab_0x49f3f3:;
    int32_t * v59 = (int32_t *)v35; // 0x49f3f3
    int64_t v60 = (int64_t)*v59; // 0x49f3f3
    function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g48, (int64_t)"client hello, add ciphersuite: %04x", v60);
    *(char *)v54 = (char)(*v59 / 256);
    *(char *)(v54 + 1) = (char)*v59;
    v39 = v54 + 2;
    v42 = v60;
    v45 = v51 + 1;
    goto lab_0x49f438;
  lab_0x49f998:;
    int32_t time_val = time(NULL); // 0x49f99a
    uint64_t v61 = (int64_t)time_val; // 0x49f99a
    *(char *)(v14 + (int64_t)&g74) = (char)(v61 / 0x1000000);
    *(char *)(v14 + (int64_t)&g77) = (char)time_val;
    *(char *)(v14 + (int64_t)&g75) = (char)(v61 / 0x10000);
    *(char *)(v14 + (int64_t)&g76) = (char)(v61 / 256);
    function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g38, (int64_t)"client hello, current time: %lu", v61);
    int32_t v62 = result; // 0x49fa06
    if (v62 != 0) {
        // 0x49fa10
        function_49e8b0(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t *)&g42, "ssl_generate_random", v62);
        // 0x49f953
        return result & 0xffffffff;
    }
    // 0x49fe42
    v15 = *v13;
    goto lab_0x49f214;
  lab_0x49f214:;
    int64_t v63 = v7 + 6; // 0x49f234
    *(int64_t *)v63 = *(int64_t *)(v15 + (int64_t)&g74);
    int64_t v64 = *(int64_t *)(v15 + (int64_t)&g78); // 0x49f238
    *(int64_t *)(v7 + 14) = v64;
    int64_t v65 = *(int64_t *)(v15 + (int64_t)&g79); // 0x49f24c
    *(int64_t *)(v7 + 22) = v65;
    int64_t v66 = *(int64_t *)(v15 + (int64_t)&g80); // 0x49f257
    *(int64_t *)(v7 + 30) = v66;
    function_49e960(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g43, "client hello, random bytes", v63, 32);
    int64_t * v67 = (int64_t *)(result + 88); // 0x49f276
    int64_t v68 = *v67; // 0x49f276
    int64_t * v69 = (int64_t *)(v68 + 16);
    int64_t v70 = *v69; // 0x49f27b
    int32_t v71 = *v2;
    int64_t v72; // 0x49f988
    if (v70 == 32 || (v70 & -16) == 16) {
        if (v71 != 0) {
            goto lab_0x49f29a;
        } else {
            // 0x49f976
            v72 = *(int32_t *)(*v13 + (int64_t)&g104) == 0 ? 0 : v70;
            goto lab_0x49fd1d;
        }
    } else {
        // 0x49f28d
        v72 = 0;
        if (v71 == 0) {
            goto lab_0x49fd1d;
        } else {
            goto lab_0x49f29a;
        }
    }
  lab_0x49f29a:
    // 0x49f29a
    *(char *)(v7 + 38) = 0;
    int64_t v73 = v7 + 39; // 0x49f2a8
    int64_t v74 = 0; // 0x49f2ac
    int64_t v75 = v73; // 0x49f2ac
    int64_t v76 = v73; // 0x49f2ac
    goto lab_0x49f2af;
  lab_0x49fd1d:;
    int64_t v112 = v72;
    int64_t v115; // 0x49f120
    int64_t v114; // 0x49f120
    if (*(int64_t *)(v68 + 120) == 0) {
        goto lab_0x49fd32;
    } else {
        // 0x49fd24
        if (*(int64_t *)(v68 + 128) != 0) {
            // 0x4a0175
            if ((int32_t)v68 != 0) {
                // 0x49f953
                int64_t v233; // 0x49f120
                int64_t result2 = v233;
                return result2;
            }
            // 0x4a0193
            *v69 = 32;
            *(char *)(v7 + 38) = 32;
            v114 = 32;
            v115 = v7 + 39;
            goto lab_0x49fd4d;
        } else {
            goto lab_0x49fd32;
        }
    }
  lab_0x49f2af:;
    int64_t v77 = v75;
    function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g44, (int64_t)"client hello, session id len.: %d", v74);
    function_49e960(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g45, "client hello, session id", v76, v74);
    int64_t v78 = result; // 0x49f306
    int64_t v79 = v77; // 0x49f306
    int64_t v80 = v76; // 0x49f306
    if ((*v10 & 2) != 0) {
        int64_t v81 = *v13; // 0x49f30c
        int64_t v82 = *(int64_t *)(v81 + (int64_t)&g52); // 0x49f311
        if (v82 == 0) {
            // 0x4a029c
            function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g46, (int64_t)"no verify cookie to send", 0);
            *(char *)v77 = 0;
            v78 = result;
            v79 = v77 + 1;
            v80 = 0;
        } else {
            unsigned char v83 = *(char *)(v81 + (int64_t)&g55); // 0x49f321
            function_49e960(result, 3, "/home/richard/code/mbedtls/library/ssl_cli.c", &g47, "client hello, cookie", v82, (int64_t)v83);
            char v84 = *(char *)(*v13 + (int64_t)&g55); // 0x49f351
            *(char *)v77 = v84;
            int64_t v85 = *v13; // 0x49f35b
            int64_t v86 = v77 + 1; // 0x49f360
            unsigned char v87 = *(char *)(v85 + (int64_t)&g55); // 0x49f367
            int64_t v88 = *(int64_t *)(v85 + (int64_t)&g52); // 0x49f36e
            memcpy((int64_t *)v86, (int64_t *)v88, (int32_t)v87);
            unsigned char v89 = *(char *)(*v13 + (int64_t)&g55); // 0x49f37f
            v78 = v86;
            v79 = v86 + (int64_t)v89;
            v80 = v82;
        }
    }
    int64_t v90 = v79;
    int64_t v91 = v90 + 2; // 0x49f392
    int64_t v92 = *(int64_t *)(8 * (int64_t)*(int32_t *)(result + 24) + v78); // 0x49f396
    uint32_t v93 = *(int32_t *)v92; // 0x49f39a
    v47 = v91;
    v48 = 0;
    v49 = v80;
    v50 = 0;
    if (v93 != 0) {
        // 0x49f3b0
        v40 = v91;
        v41 = v93;
        v43 = v80;
        v44 = v92;
        v46 = 0;
        while (true) {
          lab_0x49f3b0:
            // 0x49f3b0
            v51 = v46;
            v35 = v44;
            v52 = v43;
            int64_t v53 = v41;
            v54 = v40;
            v55 = function_49efb0((int32_t)v53);
            v39 = v54;
            v42 = v52;
            v45 = v51;
            if (v55 == 0) {
                goto lab_0x49f438;
            } else {
                int32_t v56 = *(int32_t *)(v55 + 32); // 0x49f3c5
                v39 = v54;
                v42 = v52;
                v45 = v51;
                if ((int64_t)v56 > (int64_t)*(char *)(v53 + 369)) {
                    goto lab_0x49f438;
                } else {
                    int32_t v57 = *(int32_t *)(v55 + 40); // 0x49f3d1
                    v39 = v54;
                    v42 = v52;
                    v45 = v51;
                    if ((int64_t)v57 < (int64_t)*(char *)(v53 + 371)) {
                        goto lab_0x49f438;
                    } else {
                        // 0x49f3d6
                        v58 = *(char *)(v53 + 372);
                        if ((v58 & 2) == 0) {
                            goto lab_0x49f3e8;
                        } else {
                            // 0x49f3e2
                            v39 = v54;
                            v42 = v52;
                            v45 = v51;
                            if ((*(char *)(v55 + 44) & 4) != 0) {
                                goto lab_0x49f438;
                            } else {
                                goto lab_0x49f3e8;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x49f44b:;
    int64_t v94 = v47; // 0x49f452
    int64_t v95 = v50; // 0x49f452
    if (*v2 == 0) {
        // 0x49f454
        *(char *)v47 = 0;
        *(char *)(v47 + 1) = -1;
        v94 = v47 + 2;
        v95 = v50 + 1;
    }
    int64_t v96 = v94; // 0x49f46e
    int64_t v97 = v95; // 0x49f46e
    if ((*(char *)(v48 + 374) & 2) != 0) {
        // 0x49fe59
        function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g50, (int64_t)"adding FALLBACK_SCSV", v49);
        *(char *)v94 = 86;
        *(char *)(v94 + 1) = 0;
        v96 = v94 + 2;
        v97 = v95 + 1;
    }
    // 0x49f474
    *(char *)v90 = (char)(v97 / 128);
    int64_t v98 = v96 + 2; // 0x49f4a0
    *(char *)(v90 + 1) = 2 * (char)v97;
    function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g51, (int64_t)"client hello, got %d ciphersuites", v97);
    function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g53, (int64_t)"client hello, compress len.: %d", 1);
    function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g54, (int64_t)"client hello, compress alg.: %d", 0);
    *(char *)v96 = 1;
    *(char *)(v96 + 1) = 0;
    v18 = v96 + 4;
    int64_t * str = (int64_t *)v4; // 0x49f50e
    int64_t v99 = *str; // 0x49f50e
    int64_t v100 = *v6 + (int64_t)"le"; // 0x49f51b
    int64_t v101 = v100; // 0x49f52a
    char * v102; // 0x49f120
    int64_t v103; // 0x49f120
    int64_t v104; // 0x49f120
    int64_t v105; // 0x49f120
    char * v106; // 0x49f120
    char * v107; // 0x49f120
    if (v99 == 0) {
        goto lab_0x49f5c1;
    } else {
        // 0x49f530
        function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 72, (int64_t)"client hello, adding server name extension: %s", v99);
        int32_t len = strlen((char *)*str); // 0x49f55a
        if (v100 < v18) {
            goto lab_0x49f583;
        } else {
            uint64_t v108 = (int64_t)len; // 0x49f55a
            int64_t v109 = v108 + 9; // 0x49f576
            if (v100 - v18 >= v109) {
                char v110 = len; // 0x49fe96
                *(char *)(v96 + 12) = v110;
                *(char *)v18 = 0;
                *(char *)(v96 + 5) = 0;
                *(char *)(v96 + 10) = 0;
                *(char *)(v96 + 6) = (char)((v108 + 5) / 256);
                *(char *)(v96 + 9) = v110 + 3;
                *(char *)(v96 + 7) = v110 + 5;
                *(char *)(v96 + 8) = (char)((v108 + 3) / 256);
                *(char *)(v96 + 11) = (char)(v108 / 256);
                memcpy((int64_t *)(v96 + 13), (int64_t *)*str, len);
                char * v111 = (char *)(*v6 + (int64_t)"le"); // 0x49fefd
                v107 = v111;
                v104 = v109;
                v103 = v108 + 11;
                if (*v2 != 1) {
                    // 0x49fe8f
                    v102 = (char *)(v96 + 382);
                    v106 = v111;
                    v105 = v109;
                    goto lab_0x49f5cf;
                } else {
                    goto lab_0x49ff08;
                }
            } else {
                goto lab_0x49f583;
            }
        }
    }
  lab_0x49fd32:
    // 0x49fd32
    *(char *)(v7 + 38) = (char)v112;
    int64_t v113 = v7 + 39; // 0x49fd3d
    v74 = 0;
    v75 = v113;
    v76 = v113;
    v114 = v112;
    v115 = v113;
    if (v112 == 0) {
        goto lab_0x49f2af;
    } else {
        goto lab_0x49fd4d;
    }
  lab_0x49f5c1:;
    char * v116 = (char *)v101;
    v102 = v8;
    v106 = v116;
    v105 = 0;
    v107 = v116;
    v104 = 0;
    v103 = 2;
    if (*v2 == 1) {
        goto lab_0x49ff08;
    } else {
        goto lab_0x49f5cf;
    }
  lab_0x49fd4d:;
    int64_t v117 = 0; // 0x49fd4f
    int64_t v118 = v117 + 1; // 0x49fd5a
    *(char *)v115 = *(char *)(v117 + 24 + *v67);
    int64_t v119 = v115 + 1; // 0x49fd61
    v74 = v114;
    v75 = v119;
    v76 = v115;
    v117 = v118;
    int64_t v120 = v119; // 0x49fd68
    while (v118 < v114) {
        // 0x49fd50
        v118 = v117 + 1;
        *(char *)v120 = *(char *)(v117 + 24 + *v67);
        v119 = v120 + 1;
        v74 = v114;
        v75 = v119;
        v76 = v115;
        v117 = v118;
        v120 = v119;
    }
    goto lab_0x49f2af;
  lab_0x49ff08:;
    uint64_t v121 = v103 + v98; // 0x49ff23
    function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 132, (int64_t)"client hello, adding renegotiation extension", v99);
    uint64_t v122 = (int64_t)v107; // 0x49ff2b
    if (v121 <= v122) {
        int64_t v123 = result + 408; // 0x49ff37
        int64_t * v124 = (int64_t *)v123; // 0x49ff37
        if (v122 - v121 >= *v124 + 5) {
            // 0x4a034e
            *(char *)v121 = -1;
            *(char *)(v121 + 1) = 1;
            *(char *)(v121 + 2) = 0;
            *(char *)(v121 + 3) = *(char *)v123 + 1;
            *(char *)(v121 + 4) = (char)*v124;
            memcpy((int64_t *)(v121 + 5), (int64_t *)(result + 416), (int32_t)*v124);
            return *v124 + 5;
        }
    }
    // 0x49ff4f
    function_49e770(result, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 136, (int64_t)"buffer too small", v99);
    v102 = v8;
    v106 = (char *)(*v6 + (int64_t)"le");
    v105 = v104;
    goto lab_0x49f5cf;
  lab_0x49f5cf:
    // 0x49f5cf
    v20 = v106;
    int64_t v125 = 0; // 0x49f5e4
    if (*v102 == 3) {
        // 0x4a0078
        function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 178, (int64_t)"client hello, adding signature_algorithms extension", v99);
        int64_t v126 = *(int64_t *)(result + 232); // 0x4a009c
        int32_t v127 = *(int32_t *)v126; // 0x4a00a5
        int64_t v128 = 0; // 0x4a00aa
        if (v127 != 0) {
            int64_t v129 = 4; // 0x4a00b0
            int64_t v130 = v129; // 0x4a00ba
            v128 = v129;
            while (*(int32_t *)(v129 + v126) != 0) {
                // 0x4a00b0
                v129 = v130 + 4;
                v130 = v129;
                v128 = v129;
            }
        }
        uint64_t v131 = (0x100000000 * v105 >> 32) + v18; // 0x4a00c1
        uint64_t v132 = (int64_t)v106; // 0x4a00c6
        if (v131 > v132) {
            goto lab_0x4a023c;
        } else {
            // 0x4a00d1
            if (v132 - v131 < v128 + 6) {
                goto lab_0x4a023c;
            } else {
                int64_t v133 = 6; // 0x4a00eb
                int64_t v134 = 0; // 0x4a00eb
                int64_t v135 = 0; // 0x4a00eb
                int64_t v136 = 2; // 0x4a00eb
                int64_t v137 = 0; // 0x4a00eb
                if (v127 != 0) {
                    int64_t v138 = 0;
                    int64_t v139 = function_498bb0((int64_t)v127); // 0x4a00f8
                    int64_t v140 = v138 + v131;
                    *(char *)(v140 + 7) = 3;
                    *(char *)(v140 + 6) = (char)v139;
                    int64_t v141 = function_498bb0((int64_t)*(int32_t *)(v138 + v126)); // 0x4a010d
                    *(char *)(v140 + 9) = 1;
                    *(char *)(v140 + 8) = (char)v141;
                    int64_t v142 = v138 + 4; // 0x4a011d
                    int32_t v143 = *(int32_t *)(v142 + v126); // 0x4a0121
                    int32_t v144 = v143; // 0x4a0128
                    while (v143 != 0) {
                        // 0x4a00f8
                        v138 = v142;
                        v139 = function_498bb0((int64_t)v144);
                        v140 = v138 + v131;
                        *(char *)(v140 + 7) = 3;
                        *(char *)(v140 + 6) = (char)v139;
                        v141 = function_498bb0((int64_t)*(int32_t *)(v138 + v126));
                        *(char *)(v140 + 9) = 1;
                        *(char *)(v140 + 8) = (char)v141;
                        v142 = v138 + 4;
                        v143 = *(int32_t *)(v142 + v126);
                        v144 = v143;
                    }
                    uint64_t v145 = v138 + 6; // 0x4a012a
                    v133 = v138 + 10;
                    v134 = v142 / 256;
                    v135 = v142 & 0xfffffffc;
                    v136 = v145 & 0xfffffffe;
                    v137 = v145 / 256;
                }
                // 0x4a0143
                *(char *)v131 = 0;
                *(char *)(v131 + 1) = 13;
                *(char *)(v131 + 2) = (char)v137;
                *(char *)(v131 + 3) = (char)v136;
                *(char *)(v131 + 4) = (char)v134;
                *(char *)(v131 + 5) = (char)v135;
                v20 = (char *)(*v6 + (int64_t)"le");
                v125 = v133;
                goto lab_0x49f5ea;
            }
        }
    } else {
        goto lab_0x49f5ea;
    }
  lab_0x49f583:
    // 0x49f583
    function_49e770(result, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 78, (int64_t)"buffer too small", v99);
    v101 = *v6 + (int64_t)"le";
    goto lab_0x49f5c1;
  lab_0x49f5ea:
    // 0x49f5ea
    v16 = (int32_t)v125 + (int32_t)v105;
    function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 263, (int64_t)"client hello, adding supported_elliptic_curves extension", v99);
    int64_t v146 = *(int64_t *)(result + 240); // 0x49f61d
    int32_t v147 = *(int32_t *)v146; // 0x49f624
    int32_t v148 = v147; // 0x49f629
    int64_t v149 = 0; // 0x49f629
    v25 = v147;
    v24 = 0;
    if (v147 != 0) {
        while (function_4ba4b0(v148) != 0) {
            int64_t v150 = v149 + 2; // 0x49f630
            int32_t v151 = *(int32_t *)(2 * v150 + v146); // 0x49f634
            v148 = v151;
            v149 = v150;
            v25 = 0;
            v24 = v150;
            if (v151 == 0) {
                goto lab_0x49fa70;
            }
        }
        // 0x49f64b
        function_49e770(result, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 275, (int64_t)"invalid curve in ssl configuration", v99);
        v22 = v16;
        v23 = 0;
        goto lab_0x49f66e;
    } else {
        goto lab_0x49fa70;
    }
  lab_0x4a023c:
    // 0x4a023c
    function_49e770(result, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 192, (int64_t)"buffer too small", v99);
    v20 = (char *)(*v6 + (int64_t)"le");
    v125 = 0;
    goto lab_0x49f5ea;
  lab_0x49f66e:;
    int64_t v152 = v23 + v22; // 0x49f690
    uint64_t v153 = v152 + v18; // 0x49f69b
    function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 326, (int64_t)"client hello, adding supported_point_formats extension", v99);
    uint64_t v154 = *v6 + (int64_t)"le"; // 0x49f6a5
    int64_t v155; // 0x49f120
    if (v154 < v153 || v154 - v153 < 6) {
        // 0x49fa40
        function_49e770(result, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 330, (int64_t)"buffer too small", v99);
        v155 = 0;
    } else {
        // 0x49f6c5
        *(char *)v153 = 0;
        *(char *)(v153 + 1) = 11;
        *(char *)(v153 + 2) = 0;
        *(char *)(v153 + 3) = 2;
        *(char *)(v153 + 4) = 1;
        *(char *)(v153 + 5) = 0;
        v155 = 6;
    }
    int64_t v156 = v155 + v152; // 0x49f6e2
    int64_t v157 = *v6; // 0x49f6e5
    int64_t v158 = v157 + (int64_t)"le"; // 0x49f6f3
    int16_t * v159 = (int16_t *)v9; // 0x49f6fa
    int64_t v160 = v157; // 0x49f703
    int64_t v161 = 0; // 0x49f703
    int64_t v162 = v158; // 0x49f703
    if ((*v159 & (int16_t)&g49) != 0) {
        uint64_t v163 = v156 + v18; // 0x49fc98
        function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 440, (int64_t)"client hello, adding max_fragment_length extension", v99);
        if (v158 < v163 || v158 - v163 < 5) {
            // 0x49fe06
            function_49e770(result, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 444, (int64_t)"buffer too small", v99);
            int64_t v164 = *v6; // 0x49fe28
            v160 = v164;
            v161 = (int32_t)"/home/richard/code/mbedtls/library/ssl_cli.c" ^ (int32_t)"/home/richard/code/mbedtls/library/ssl_cli.c";
            v162 = v164 + (int64_t)"le";
        } else {
            // 0x49fcd5
            *(char *)v163 = 0;
            *(char *)(v163 + 1) = 1;
            *(char *)(v163 + 2) = 0;
            *(char *)(v163 + 3) = 1;
            *(char *)(v163 + 4) = (char)(*v159 / 128) % 8;
            int64_t v165 = *v6; // 0x49fd03
            v160 = v165;
            v161 = 5;
            v162 = v165 + (int64_t)"le";
        }
    }
    int64_t v166 = v162;
    int64_t v167 = v161 + v156; // 0x49f709
    char * v168 = (char *)(result + 373); // 0x49f70c
    char v169 = *v168; // 0x49f70c
    int64_t v170 = v160; // 0x49f717
    int64_t v171 = 0; // 0x49f717
    char v172 = v169; // 0x49f717
    int64_t v173 = v166; // 0x49f717
    if (v169 < 0) {
        uint64_t v174 = v167 + v18; // 0x49fb90
        function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 474, (int64_t)"client hello, adding truncated_hmac extension", v99);
        if (v166 < v174 || v166 - v174 < 4) {
            // 0x49fdc3
            function_49e770(result, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 478, (int64_t)"buffer too small", v99);
            int64_t v175 = *v6; // 0x49fde5
            v170 = v175;
            v171 = 0;
            v172 = *v168;
            v173 = v175 + (int64_t)"le";
        } else {
            // 0x49fbcc
            *(char *)v174 = 0;
            *(char *)(v174 + 1) = 4;
            *(char *)(v174 + 2) = 0;
            *(char *)(v174 + 3) = 0;
            int64_t v176 = *v6; // 0x49fbe4
            v170 = v176;
            v171 = 4;
            v172 = *v168;
            v173 = v176 + (int64_t)"le";
        }
    }
    int64_t v177 = v173;
    int64_t v178 = v172;
    int64_t v179 = v171 + v167; // 0x49f71d
    int64_t v180 = v170; // 0x49f725
    int64_t v181 = 0; // 0x49f725
    int64_t v182 = v178; // 0x49f725
    int64_t v183 = v177; // 0x49f725
    if ((v178 & 4) != 0) {
        // 0x49f727
        v180 = v170;
        v181 = 0;
        v182 = v178;
        v183 = v177;
        if (*v8 != 0) {
            uint64_t v184 = v179 + v18; // 0x49fff8
            function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 508, (int64_t)"client hello, adding encrypt_then_mac extension", v99);
            if (v177 < v184 || v177 - v184 < 4) {
                // 0x4a01f9
                function_49e770(result, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g28, (int64_t)"buffer too small", v99);
                int64_t v185 = *v6; // 0x4a021b
                v180 = v185;
                v181 = (int32_t)&g28 ^ (int32_t)&g28;
                v182 = (int64_t)*v168;
                v183 = v185 + (int64_t)"le";
            } else {
                // 0x4a0034
                *(char *)v184 = 0;
                *(char *)(v184 + 1) = 22;
                *(char *)(v184 + 2) = 0;
                *(char *)(v184 + 3) = 0;
                int64_t v186 = *v6; // 0x4a004c
                v180 = v186;
                v181 = 4;
                v182 = (int64_t)*v168;
                v183 = v186 + (int64_t)"le";
            }
        }
    }
    int64_t v187 = v183;
    int64_t v188 = v181 + v179; // 0x49f734
    int64_t v189 = v180; // 0x49f73c
    int64_t v190 = 0; // 0x49f73c
    int64_t v191 = v187; // 0x49f73c
    if ((v182 & 8) != 0) {
        // 0x49f73e
        v189 = v180;
        v190 = 0;
        v191 = v187;
        if (*v8 != 0) {
            uint64_t v192 = v188 + v18; // 0x49ff8c
            function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 542, (int64_t)"client hello, adding extended_master_secret extension", v99);
            if (v187 < v192 || v187 - v192 < 4) {
                // 0x4a01bd
                function_49e770(result, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g29, (int64_t)"buffer too small", v99);
                int64_t v193 = *v6;
                v189 = v193;
                v190 = (int32_t)&g29 ^ (int32_t)&g29;
                v191 = v193 + (int64_t)"le";
            } else {
                // 0x49ffc8
                *(char *)v192 = 0;
                *(char *)(v192 + 1) = 23;
                *(char *)(v192 + 2) = 0;
                *(char *)(v192 + 3) = 0;
                int64_t v194 = *v6;
                v189 = v194;
                v190 = 4;
                v191 = v194 + (int64_t)"le";
            }
        }
    }
    int64_t v195 = v191;
    int64_t v196 = v190 + v188; // 0x49f74b
    int64_t v197 = result; // 0x49f767
    int64_t v198 = 0; // 0x49f767
    int64_t v199 = v195; // 0x49f767
    if (v189 != 0) {
        // 0x49f76d
        function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g33, (int64_t)"client hello, adding alpn extension", v99);
        int64_t v200 = *v6; // 0x49f796
        int64_t str2 = *(int64_t *)v200; // 0x49f79d
        int64_t * v201 = (int64_t *)328; // 0x49f7a3
        int64_t v202 = 6; // 0x49f7a3
        if (str2 != 0) {
            int64_t v203 = v200 + 8; // 0x49f7a8
            uint32_t len2 = strlen((char *)str2); // 0x49f7ac
            int64_t v204 = *(int64_t *)v203; // 0x49f7b1
            int64_t v205 = 1 + (int64_t)(len2 % 256); // 0x49f7b7
            int64_t str3 = v204; // 0x49f7bf
            int64_t v206 = v203; // 0x49f7bf
            int64_t v207 = v205; // 0x49f7bf
            while (v204 != 0) {
                // 0x49f7a8
                v203 = v206 + 8;
                len2 = strlen((char *)str3);
                v204 = *(int64_t *)v203;
                v205 = v207 + 1 + (int64_t)(len2 % 256);
                str3 = v204;
                v206 = v203;
                v207 = v205;
            }
            // 0x49f7c1
            v201 = (int64_t *)(v204 + 328);
            v202 = v205 + 6;
        }
        uint64_t v208 = v196 + v18; // 0x49f758
        if (v195 < v208 || v195 - v208 < v202) {
            // 0x49fb20
            function_49e770(result, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g34, (int64_t)"buffer too small", v99);
            v197 = result;
            v198 = (int32_t)"/home/richard/code/mbedtls/library/ssl_cli.c" ^ (int32_t)"/home/richard/code/mbedtls/library/ssl_cli.c";
            v199 = *v6 + (int64_t)"le";
        } else {
            // 0x49f7de
            *(char *)v208 = 0;
            *(char *)(v208 + 1) = 16;
            int64_t v209 = v208 + 6; // 0x49f7f1
            int64_t v210 = *v201; // 0x49f7f5
            int64_t str4 = *(int64_t *)v210; // 0x49f7fc
            int64_t v211 = v209; // 0x49f802
            int64_t v212 = 0; // 0x49f802
            if (str4 != 0) {
                uint32_t len3 = strlen((char *)str4); // 0x49f808
                char * v213 = (char *)v209; // 0x49f80d
                *v213 = (char)len3;
                int64_t v214 = v209 + 1; // 0x49f813
                int64_t v215 = v210 + 8; // 0x49f81a
                memcpy((int64_t *)v214, (int64_t *)*(int64_t *)v210, len3 % 256);
                int64_t v216 = *(int64_t *)v215; // 0x49f827
                int64_t v217 = v214 + (int64_t)*v213; // 0x49f82d
                int64_t v218 = v217; // 0x49f832
                int64_t str5 = v216; // 0x49f832
                int64_t v219 = v215; // 0x49f832
                v211 = v217;
                v212 = v216;
                while (v216 != 0) {
                    // 0x49f808
                    len3 = strlen((char *)str5);
                    v213 = (char *)v218;
                    *v213 = (char)len3;
                    v214 = v218 + 1;
                    v215 = v219 + 8;
                    memcpy((int64_t *)v214, (int64_t *)*(int64_t *)v219, len3 % 256);
                    v216 = *(int64_t *)v215;
                    v217 = v214 + (int64_t)*v213;
                    v218 = v217;
                    str5 = v216;
                    v219 = v215;
                    v211 = v217;
                    v212 = v216;
                }
            }
            int64_t v220 = v211 - v208; // 0x49f837
            *(char *)(v208 + 4) = (char)((v220 + 0xfffa) / 256);
            char v221 = v220;
            *(char *)(v208 + 3) = v221 - 4;
            *(char *)(v208 + 5) = v221 - 6;
            *(char *)(v208 + 2) = (char)((v220 + 0xfffc) / 256);
            v197 = v212;
            v198 = v220;
            v199 = *v6 + (int64_t)"le";
        }
    }
    int64_t v222 = v198 + (0x100000000 * v196 >> 32); // 0x49f885
    uint64_t v223 = *(int64_t *)(*v67 + 128); // 0x49f894
    int64_t v224 = 0; // 0x49f89b
    if (*(char *)(v197 + 374) % 2 != 0) {
        uint64_t v225 = v222 + v18; // 0x49fc08
        function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g30, (int64_t)"client hello, adding session ticket extension", v99);
        if (v199 < v225) {
            // 0x49fd99
            function_49e770(result, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g31, (int64_t)"buffer too small", v99);
            v224 = 0;
            goto lab_0x49f8a1;
        } else {
            int64_t v226 = v223 + 4; // 0x49fc4c
            if (v199 - v225 < v226) {
                // 0x49fd99
                function_49e770(result, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g31, (int64_t)"buffer too small", v99);
                v224 = 0;
                goto lab_0x49f8a1;
            } else {
                // 0x49fc5c
                *(char *)v225 = 0;
                *(char *)(v225 + 1) = 35;
                *(char *)(v225 + 3) = (char)v223;
                *(char *)(v225 + 2) = (char)(v223 / 256);
                v224 = 4;
                if (v223 != 0 == (*(int64_t *)(*v67 + 120) != 0)) {
                    // 0x4a02fb
                    function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g32, (int64_t)"sending session ticket of length %d", v223);
                    int64_t v227 = *(int64_t *)(*v67 + 120); // 0x4a0339
                    memcpy((int64_t *)(v225 + 4), (int64_t *)v227, (int32_t)v223);
                    v224 = v226;
                }
                goto lab_0x49f8a1;
            }
        }
    } else {
        goto lab_0x49f8a1;
    }
  lab_0x49fd6f:
    // 0x49fd6f
    function_49e770(result, 1, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", 284, (int64_t)"buffer too small", v99);
    v22 = v17;
    v23 = 0;
    goto lab_0x49f66e;
  lab_0x49f8a1:;
    uint64_t v228 = v224 + v222; // 0x49f8a1
    function_49e770(result, 3, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g57, (int64_t)"client hello, total extension length: %d", v228);
    int64_t v229 = v98; // 0x49f8cc
    if (v228 != 0) {
        // 0x49f8ce
        *(char *)(v96 + 3) = (char)v228;
        *(char *)v98 = (char)(v228 / 256);
        v229 = v228 + v18;
    }
    // 0x49f8e4
    *(int32_t *)(result + 336) = 22;
    *(int64_t *)(result + 344) = v229 - v7;
    *(char *)*v6 = 1;
    int32_t * v230 = (int32_t *)(result + 8); // 0x49f90c
    *v230 = *v230 + 1;
    if ((*v10 & 2) != 0) {
        // 0x49fe4c
        function_4967e0(result);
    }
    int64_t v231 = function_498d40(result); // 0x49f922
    int32_t v232 = v231; // 0x49f927
    if (v232 != 0) {
        // 0x49fb60
        function_49e8b0(result, 1, "/home/richard/code/mbedtls/library/ssl_cli.c", &g58, "mbedtls_ssl_write_record", v232);
    } else {
        // 0x49f931
        function_49e770(result, 2, (int64_t)"/home/richard/code/mbedtls/library/ssl_cli.c", (int64_t)&g59, (int64_t)"<= write client hello", v228);
    }
    // 0x49f953
    return v231 & 0xffffffff;
}

// Address range: 0x4cb560 - 0x4cc7cd
int64_t function_4cb560(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)(a2 + 1); // 0x4cb56d
    unsigned char v2 = *(char *)(a2 + 4); // 0x4cb571
    unsigned char v3 = *(char *)(a2 + 8); // 0x4cb576
    unsigned char v4 = *(char *)(a2 + 12); // 0x4cb57b
    unsigned char v5 = *(char *)(a2 + 16); // 0x4cb580
    unsigned char v6 = *(char *)(a2 + 20); // 0x4cb58d
    unsigned char v7 = *(char *)(a2 + 24); // 0x4cb591
    unsigned char v8 = *(char *)(a2 + 28); // 0x4cb59c
    unsigned char v9 = *(char *)(a2 + 3); // 0x4cb5a2
    unsigned char v10 = *(char *)(a2 + 33); // 0x4cb5b2
    unsigned char v11 = *(char *)(a2 + 2); // 0x4cb5bb
    int64_t v12; // 0x4cb560
    int64_t v13 = 0x10000 * (int64_t)v1 | 0x1000000 * v12 & 0xff000000 | (int64_t)v9 | 256 * (int64_t)v11; // 0x4cb5c2
    unsigned char v14 = *(char *)(a2 + 5); // 0x4cb5c4
    unsigned char v15 = *(char *)(a2 + 7); // 0x4cb5ce
    unsigned char v16 = *(char *)(a2 + 6); // 0x4cb5d5
    int64_t v17 = 0x10000 * (int64_t)v14 | 0x1000000 * (int64_t)v2 | (int64_t)v15 | 256 * (int64_t)v16; // 0x4cb5dc
    unsigned char v18 = *(char *)(a2 + 9); // 0x4cb5df
    unsigned char v19 = *(char *)(a2 + 11); // 0x4cb5e9
    unsigned char v20 = *(char *)(a2 + 10); // 0x4cb5f0
    int64_t v21 = 0x10000 * (int64_t)v18 | 0x1000000 * (int64_t)v3 | (int64_t)v19 | 256 * (int64_t)v20; // 0x4cb5f7
    unsigned char v22 = *(char *)(a2 + 13); // 0x4cb5fa
    unsigned char v23 = *(char *)(a2 + 15); // 0x4cb604
    unsigned char v24 = *(char *)(a2 + 14); // 0x4cb60b
    int64_t v25 = 0x10000 * (int64_t)v22 | 0x1000000 * (int64_t)v4 | (int64_t)v23 | 256 * (int64_t)v24; // 0x4cb612
    unsigned char v26 = *(char *)(a2 + 17); // 0x4cb615
    unsigned char v27 = *(char *)(a2 + 19); // 0x4cb61f
    unsigned char v28 = *(char *)(a2 + 18); // 0x4cb626
    int64_t v29 = 0x10000 * (int64_t)v26 | 0x1000000 * (int64_t)v5 | (int64_t)v27 | 256 * (int64_t)v28; // 0x4cb62d
    unsigned char v30 = *(char *)(a2 + 21); // 0x4cb630
    unsigned char v31 = *(char *)(a2 + 23); // 0x4cb639
    unsigned char v32 = *(char *)(a2 + 22); // 0x4cb63f
    int64_t v33 = 0x10000 * (int64_t)v30 | 0x1000000 * (int64_t)v6 | (int64_t)v31 | 256 * (int64_t)v32; // 0x4cb64f
    unsigned char v34 = *(char *)(a2 + 25); // 0x4cb651
    unsigned char v35 = *(char *)(a2 + 27); // 0x4cb65a
    unsigned char v36 = *(char *)(a2 + 26); // 0x4cb660
    int64_t v37 = 0x10000 * (int64_t)v34 | 0x1000000 * (int64_t)v7 | (int64_t)v35 | 256 * (int64_t)v36; // 0x4cb667
    unsigned char v38 = *(char *)(a2 + 29); // 0x4cb669
    unsigned char v39 = *(char *)(a2 + 31); // 0x4cb672
    unsigned char v40 = *(char *)(a2 + 30); // 0x4cb678
    int64_t v41 = 0x10000 * (int64_t)v38 | 0x1000000 * (int64_t)v8 | (int64_t)v39 | 256 * (int64_t)v40; // 0x4cb67f
    unsigned char v42 = *(char *)(a2 + 32); // 0x4cb681
    unsigned char v43 = *(char *)(a2 + 35); // 0x4cb68a
    unsigned char v44 = *(char *)(a2 + 34); // 0x4cb690
    int64_t v45 = 0x1000000 * (int64_t)v42 | 0x10000 * (int64_t)v10 | (int64_t)v43 | 256 * (int64_t)v44; // 0x4cb697
    unsigned char v46 = *(char *)(a2 + 36); // 0x4cb699
    unsigned char v47 = *(char *)(a2 + 37); // 0x4cb6a4
    unsigned char v48 = *(char *)(a2 + 40); // 0x4cb6a8
    unsigned char v49 = *(char *)(a2 + 39); // 0x4cb6b4
    unsigned char v50 = *(char *)(a2 + 38); // 0x4cb6bc
    int32_t v51 = 0x10000 * (int32_t)v47 | 0x1000000 * (int32_t)v46 | (int32_t)v49 | 256 * (int32_t)v50; // 0x4cb6c7
    unsigned char v52 = *(char *)(a2 + 41); // 0x4cb6cb
    unsigned char v53 = *(char *)(a2 + 43); // 0x4cb6d5
    unsigned char v54 = *(char *)(a2 + 42); // 0x4cb6dc
    int32_t v55 = 0x10000 * (int32_t)v52 | 0x1000000 * (int32_t)v48 | (int32_t)v53 | 256 * (int32_t)v54; // 0x4cb6e3
    unsigned char v56 = *(char *)(a2 + 44); // 0x4cb6e6
    unsigned char v57 = *(char *)(a2 + 48); // 0x4cb6ef
    unsigned char v58 = *(char *)(a2 + 45); // 0x4cb6fb
    unsigned char v59 = *(char *)(a2 + 47); // 0x4cb70a
    unsigned char v60 = *(char *)(a2 + 46); // 0x4cb712
    int32_t v61 = 0x10000 * (int32_t)v58 | 0x1000000 * (int32_t)v56 | (int32_t)v59 | 256 * (int32_t)v60; // 0x4cb719
    unsigned char v62 = *(char *)(a2 + 49); // 0x4cb71d
    unsigned char v63 = *(char *)(a2 + 51); // 0x4cb727
    unsigned char v64 = *(char *)(a2 + 50); // 0x4cb72e
    int32_t v65 = 0x10000 * (int32_t)v62 | 0x1000000 * (int32_t)v57 | (int32_t)v63 | 256 * (int32_t)v64; // 0x4cb735
    unsigned char v66 = *(char *)(a2 + 52); // 0x4cb738
    unsigned char v67 = *(char *)(a2 + 53); // 0x4cb748
    unsigned char v68 = *(char *)(a2 + 55); // 0x4cb753
    unsigned char v69 = *(char *)(a2 + 54); // 0x4cb75b
    unsigned char v70 = *(char *)(a2 + 56); // 0x4cb75f
    int32_t v71 = 0x10000 * (int32_t)v67 | 0x1000000 * (int32_t)v66 | (int32_t)v68 | 256 * (int32_t)v69; // 0x4cb767
    unsigned char v72 = *(char *)(a2 + 57); // 0x4cb76b
    unsigned char v73 = *(char *)(a2 + 59); // 0x4cb779
    unsigned char v74 = *(char *)(a2 + 58); // 0x4cb780
    int32_t v75 = 0x10000 * (int32_t)v72 | 0x1000000 * (int32_t)v70 | (int32_t)v73 | 256 * (int32_t)v74; // 0x4cb787
    unsigned char v76 = *(char *)(a2 + 60); // 0x4cb78a
    int32_t * v77 = (int32_t *)(a1 + 8); // 0x4cb79b
    uint32_t v78 = *v77; // 0x4cb79b
    unsigned char v79 = *(char *)(a2 + 61); // 0x4cb7a3
    unsigned char v80 = *(char *)(a2 + 63); // 0x4cb7b8
    unsigned char v81 = *(char *)(a2 + 62); // 0x4cb7bc
    int32_t * v82 = (int32_t *)(a1 + 20); // 0x4cb7c9
    int32_t v83 = *v82; // 0x4cb7c9
    int32_t v84 = 0x10000 * (int32_t)v79 | 0x1000000 * (int32_t)v76 | (int32_t)v80 | 256 * (int32_t)v81; // 0x4cb7d0
    int32_t * v85 = (int32_t *)(a1 + 16); // 0x4cb7d9
    int32_t v86 = *v85; // 0x4cb7d9
    int32_t * v87 = (int32_t *)(a1 + 12); // 0x4cb7dc
    uint32_t v88 = *v87; // 0x4cb7dc
    int32_t * v89 = (int32_t *)(a1 + 24); // 0x4cb7fb
    int32_t v90 = *v89; // 0x4cb7fb
    int32_t v91 = v88 / 4 | 0x40000000 * v88; // 0x4cb823
    int32_t v92 = v78 / 4 | 0x40000000 * v78; // 0x4cb827
    uint32_t v93 = (int32_t)v13 + 0x5a827999 + (v78 / 0x8000000 | 32 * v78) + v90 + ((v86 ^ v83) & v88 ^ v83); // 0x4cb832
    uint32_t v94 = (int32_t)v17 + 0x5a827999 + v83 + ((v91 ^ v86) & v78 ^ v86) + (v93 / 0x8000000 | 32 * v93); // 0x4cb851
    int32_t v95 = v93 / 4 | 0x40000000 * v93; // 0x4cb868
    uint32_t v96 = (int32_t)v21 + 0x5a827999 + v86 + (v93 & (v91 ^ v92) ^ v91) + (v94 / 0x8000000 | 32 * v94); // 0x4cb881
    int32_t v97 = v94 / 4 | 0x40000000 * v94; // 0x4cb88c
    uint32_t v98 = (int32_t)v25 + 0x5a827999 + v91 + (v94 & (v95 ^ v92) ^ v92) + (v96 / 0x8000000 | 32 * v96); // 0x4cb8a4
    int32_t v99 = v96 / 4 | 0x40000000 * v96; // 0x4cb8af
    uint32_t v100 = (int32_t)v29 + 0x5a827999 + v92 + ((v97 ^ v95) & v96 ^ v95) + (v98 / 0x8000000 | 32 * v98); // 0x4cb8c8
    int32_t v101 = v98 / 4 | 0x40000000 * v98; // 0x4cb8d3
    uint32_t v102 = (int32_t)v33 + 0x5a827999 + v95 + ((v99 ^ v97) & v98 ^ v97) + (v100 / 0x8000000 | 32 * v100); // 0x4cb8ea
    int32_t v103 = v100 / 4 | 0x40000000 * v100; // 0x4cb8f6
    int32_t v104 = v41;
    uint32_t v105 = (int32_t)v37 + 0x5a827999 + v97 + ((v101 ^ v99) & v100 ^ v99) + (v102 / 0x8000000 | 32 * v102); // 0x4cb90d
    int32_t v106 = v102 / 4 | 0x40000000 * v102; // 0x4cb918
    int32_t v107 = v45;
    uint32_t v108 = v104 + 0x5a827999 + v99 + ((v103 ^ v101) & v102 ^ v101) + (v105 / 0x8000000 | 32 * v105); // 0x4cb931
    int32_t v109 = v105 / 4 | 0x40000000 * v105; // 0x4cb93c
    uint32_t v110 = v107 + 0x5a827999 + v101 + ((v106 ^ v103) & v105 ^ v103) + (v108 / 0x8000000 | 32 * v108); // 0x4cb94c
    uint32_t v111 = v51 + 0x5a827999 + v103 + ((v109 ^ v106) & v108 ^ v106) + (v110 / 0x8000000 | 32 * v110); // 0x4cb970
    int32_t v112 = v108 / 4 | 0x40000000 * v108; // 0x4cb977
    int32_t v113 = v110 / 4 | 0x40000000 * v110; // 0x4cb98b
    uint32_t v114 = v55 + 0x5a827999 + v106 + ((v112 ^ v109) & v110 ^ v109) + (v111 / 0x8000000 | 32 * v111); // 0x4cb99b
    int32_t v115 = v111 / 4 | 0x40000000 * v111; // 0x4cb9b2
    uint32_t v116 = v61 + 0x5a827999 + v109 + ((v113 ^ v112) & v111 ^ v112) + (v114 / 0x8000000 | 32 * v114); // 0x4cb9c1
    int32_t v117 = v114 / 4 | 0x40000000 * v114; // 0x4cb9d8
    uint32_t v118 = v65 + 0x5a827999 + v112 + ((v115 ^ v113) & v114 ^ v113) + (v116 / 0x8000000 | 32 * v116); // 0x4cb9e9
    int32_t v119 = v116 / 4 | 0x40000000 * v116; // 0x4cba00
    uint32_t v120 = v71 + 0x5a827999 + v113 + ((v117 ^ v115) & v116 ^ v115) + (v118 / 0x8000000 | 32 * v118); // 0x4cba10
    int32_t v121 = v118 / 4 | 0x40000000 * v118; // 0x4cba34
    uint32_t v122 = v75 + 0x5a827999 + v115 + ((v119 ^ v117) & v118 ^ v117) + (v120 / 0x8000000 | 32 * v120); // 0x4cba3b
    int32_t v123 = v120 / 4 | 0x40000000 * v120; // 0x4cba54
    uint32_t v124 = v84 + 0x5a827999 + v117 + ((v121 ^ v119) & v120 ^ v119) + (v122 / 0x8000000 | 32 * v122); // 0x4cba64
    int32_t v125 = v71 ^ (int32_t)(v21 ^ v13 ^ v45); // 0x4cba6b
    int32_t v126 = 2 * v125 | (int32_t)(v125 < 0); // 0x4cba70
    int32_t v127 = v51 ^ (int32_t)(v25 ^ v17) ^ v75; // 0x4cba8d
    int32_t v128 = v122 / 4 | 0x40000000 * v122; // 0x4cba94
    uint32_t v129 = v126 + 0x5a827999 + v119 + ((v123 ^ v121) & v122 ^ v121) + (v124 / 0x8000000 | 32 * v124); // 0x4cbaa0
    int32_t v130 = 2 * v127 | (int32_t)(v127 < 0); // 0x4cbaa5
    int32_t v131 = v124 / 4 | 0x40000000 * v124; // 0x4cbabb
    uint32_t v132 = v130 + 0x5a827999 + v121 + ((v128 ^ v123) & v124 ^ v123) + (v129 / 0x8000000 | 32 * v129); // 0x4cbacc
    int32_t v133 = v55 ^ (int32_t)(v29 ^ v21) ^ v84; // 0x4cbad7
    int32_t v134 = v129 / 4 | 0x40000000 * v129; // 0x4cbae1
    int32_t v135 = 2 * v133 | (int32_t)(v133 < 0); // 0x4cbae7
    int32_t v136 = v61 ^ (int32_t)(v33 ^ v25) ^ v126; // 0x4cbafd
    uint32_t v137 = v135 + 0x5a827999 + v123 + ((v131 ^ v128) & v129 ^ v128) + (v132 / 0x8000000 | 32 * v132); // 0x4cbb0c
    int32_t v138 = 2 * v136 | (int32_t)(v136 < 0); // 0x4cbb14
    int32_t v139 = v132 / 4 | 0x40000000 * v132; // 0x4cbb1a
    uint32_t v140 = v138 + 0x5a827999 + v128 + ((v134 ^ v131) & v132 ^ v131) + (v137 / 0x8000000 | 32 * v137); // 0x4cbb3e
    int32_t v141 = v65 ^ (int32_t)(v37 ^ v29) ^ v130; // 0x4cbb44
    int32_t v142 = 2 * v141 | (int32_t)(v141 < 0); // 0x4cbb49
    int32_t v143 = v137 / 4 | 0x40000000 * v137; // 0x4cbb4f
    uint32_t v144 = v142 + 0x6ed9eba1 + v131 + (v139 ^ v134 ^ v137) + (v140 / 0x8000000 | 32 * v140); // 0x4cbb70
    int32_t v145 = v71 ^ (int32_t)(v41 ^ v33) ^ v135; // 0x4cbb76
    int32_t v146 = 2 * v145 | (int32_t)(v145 < 0); // 0x4cbb7c
    int32_t v147 = v140 / 4 | 0x40000000 * v140; // 0x4cbb82
    int32_t v148 = v144 / 4 | 0x40000000 * v144; // 0x4cbba7
    uint32_t v149 = v146 + 0x6ed9eba1 + v134 + (v143 ^ v139 ^ v140) + (v144 / 0x8000000 | 32 * v144); // 0x4cbbab
    int32_t v150 = v75 ^ (int32_t)(v45 ^ v37) ^ v138; // 0x4cbbad
    int32_t v151 = 2 * v150 | (int32_t)(v150 < 0); // 0x4cbbb0
    uint32_t v152 = v151 + 0x6ed9eba1 + v139 + (v147 ^ v143 ^ v144) + (v149 / 0x8000000 | 32 * v149); // 0x4cbbce
    int32_t v153 = v149 / 4 | 0x40000000 * v149; // 0x4cbbd8
    int32_t v154 = v51 ^ v104 ^ v84 ^ v142; // 0x4cbbdb
    int32_t v155 = 2 * v154 | (int32_t)(v154 < 0); // 0x4cbbde
    uint32_t v156 = v155 + 0x6ed9eba1 + v143 + (v148 ^ v147 ^ v149) + (v152 / 0x8000000 | 32 * v152); // 0x4cbc02
    int32_t v157 = v55 ^ v107 ^ v126 ^ v146; // 0x4cbc04
    int32_t v158 = 2 * v157 | (int32_t)(v157 < 0); // 0x4cbc07
    int32_t v159 = v152 / 4 | 0x40000000 * v152; // 0x4cbc0c
    uint32_t v160 = v158 + 0x6ed9eba1 + v147 + (v153 ^ v148 ^ v152) + (v156 / 0x8000000 | 32 * v156); // 0x4cbc2b
    int32_t v161 = v61 ^ v51 ^ v130 ^ v151; // 0x4cbc2f
    int32_t v162 = 2 * v161 | (int32_t)(v161 < 0); // 0x4cbc34
    int32_t v163 = v156 / 4 | 0x40000000 * v156; // 0x4cbc39
    uint32_t v164 = v162 + 0x6ed9eba1 + v148 + (v159 ^ v153 ^ v156) + (v160 / 0x8000000 | 32 * v160); // 0x4cbc5d
    int32_t v165 = v71 ^ v61 ^ v138 ^ v158; // 0x4cbc6b
    int32_t v166 = 2 * v165 | (int32_t)(v165 < 0); // 0x4cbc6e
    int32_t v167 = v65 ^ v55 ^ v135 ^ v155; // 0x4cbc79
    int32_t v168 = 2 * v167 | (int32_t)(v167 < 0); // 0x4cbc7c
    int32_t v169 = v160 / 4 | 0x40000000 * v160; // 0x4cbc8f
    uint32_t v170 = v168 + 0x6ed9eba1 + v153 + (v163 ^ v159 ^ v160) + (v164 / 0x8000000 | 32 * v164); // 0x4cbc9a
    uint32_t v171 = v166 + 0x6ed9eba1 + v159 + (v169 ^ v163 ^ v164) + (v170 / 0x8000000 | 32 * v170); // 0x4cbcb7
    int32_t v172 = v164 / 4 | 0x40000000 * v164; // 0x4cbcc1
    int32_t v173 = v75 ^ v65 ^ v142 ^ v162; // 0x4cbcc8
    int32_t v174 = 2 * v173 | (int32_t)(v173 < 0); // 0x4cbcd0
    int32_t v175 = v170 / 4 | 0x40000000 * v170; // 0x4cbce4
    uint32_t v176 = v174 + 0x6ed9eba1 + v163 + (v172 ^ v169 ^ v170) + (v171 / 0x8000000 | 32 * v171); // 0x4cbcee
    int32_t v177 = v84 ^ v71 ^ v146 ^ v168; // 0x4cbcfb
    int32_t v178 = 2 * v177 | (int32_t)(v177 < 0); // 0x4cbd03
    int32_t v179 = v171 / 4 | 0x40000000 * v171; // 0x4cbd17
    uint32_t v180 = v178 + 0x6ed9eba1 + v169 + (v175 ^ v172 ^ v171) + (v176 / 0x8000000 | 32 * v176); // 0x4cbd21
    int32_t v181 = v75 ^ v126 ^ v151 ^ v166; // 0x4cbd2d
    int32_t v182 = 2 * v181 | (int32_t)(v181 < 0); // 0x4cbd33
    int32_t v183 = v176 / 4 | 0x40000000 * v176; // 0x4cbd4b
    uint32_t v184 = v182 + 0x6ed9eba1 + v172 + (v179 ^ v175 ^ v176) + (v180 / 0x8000000 | 32 * v180); // 0x4cbd53
    int32_t v185 = v84 ^ v130 ^ v155 ^ v174; // 0x4cbd61
    int32_t v186 = v180 / 4 | 0x40000000 * v180; // 0x4cbd6a
    int32_t v187 = v130 ^ v138 ^ v162 ^ v182; // 0x4cbd74
    int32_t v188 = 2 * v185 | (int32_t)(v185 < 0); // 0x4cbd78
    int32_t v189 = 2 * v187 | (int32_t)(v187 < 0); // 0x4cbd88
    uint32_t v190 = v188 + 0x6ed9eba1 + v175 + (v183 ^ v179 ^ v180) + (v184 / 0x8000000 | 32 * v184); // 0x4cbd8d
    int32_t v191 = v135 ^ v126 ^ v158 ^ v178; // 0x4cbda9
    int32_t v192 = 2 * v191 | (int32_t)(v191 < 0); // 0x4cbdad
    int32_t v193 = v135 ^ v142 ^ v168 ^ v188; // 0x4cbdb1
    int32_t v194 = 2 * v193 | (int32_t)(v193 < 0); // 0x4cbdb8
    int32_t v195 = v184 / 4 | 0x40000000 * v184; // 0x4cbdd6
    uint32_t v196 = v192 + 0x6ed9eba1 + v179 + (v186 ^ v183 ^ v184) + (v190 / 0x8000000 | 32 * v190); // 0x4cbdda
    int32_t v197 = v190 / 4 | 0x40000000 * v190; // 0x4cbdea
    uint32_t v198 = v189 + 0x6ed9eba1 + v183 + (v195 ^ v186 ^ v190) + (v196 / 0x8000000 | 32 * v196); // 0x4cbdf4
    int32_t v199 = v146 ^ v138 ^ v166 ^ v192; // 0x4cbe0b
    int32_t v200 = v196 / 4 | 0x40000000 * v196; // 0x4cbe19
    uint32_t v201 = v194 + 0x6ed9eba1 + v186 + (v197 ^ v195 ^ v196) + (v198 / 0x8000000 | 32 * v198); // 0x4cbe27
    int32_t v202 = 2 * v199 | (int32_t)(v199 < 0); // 0x4cbe30
    int32_t v203 = v198 / 4 | 0x40000000 * v198; // 0x4cbe3f
    int32_t v204 = v142 ^ v151 ^ v174 ^ v189; // 0x4cbe42
    int32_t v205 = 2 * v204 | (int32_t)(v204 < 0); // 0x4cbe4b
    int32_t v206 = v146 ^ v155 ^ v178 ^ v194; // 0x4cbe52
    uint32_t v207 = v202 + 0x6ed9eba1 + v195 + (v200 ^ v197 ^ v198) + (v201 / 0x8000000 | 32 * v201); // 0x4cbe55
    int32_t v208 = 2 * v206 | (int32_t)(v206 < 0); // 0x4cbe64
    int32_t v209 = v201 / 4 | 0x40000000 * v201; // 0x4cbe69
    uint32_t v210 = v205 + 0x6ed9eba1 + v197 + (v203 ^ v200 ^ v201) + (v207 / 0x8000000 | 32 * v207); // 0x4cbe74
    int32_t v211 = v207 / 4 | 0x40000000 * v207; // 0x4cbe8f
    uint32_t v212 = v208 + 0x6ed9eba1 + v200 + (v209 ^ v203 ^ v207) + (v210 / 0x8000000 | 32 * v210); // 0x4cbe93
    int32_t v213 = v158 ^ v151 ^ v182 ^ v202; // 0x4cbe9b
    int32_t v214 = 2 * v213 | (int32_t)(v213 < 0); // 0x4cbe9e
    int32_t v215 = v210 / 4 | 0x40000000 * v210; // 0x4cbebc
    int32_t v216 = v155 ^ v162 ^ v188 ^ v205; // 0x4cbecb
    int32_t v217 = 2 * v216 | (int32_t)(v216 < 0); // 0x4cbed2
    uint32_t v218 = v214 + 0x6ed9eba1 + v203 + (v211 ^ v209 ^ v210) + (v212 / 0x8000000 | 32 * v212); // 0x4cbedd
    int32_t v219 = v212 / 4 | 0x40000000 * v212; // 0x4cbef7
    uint32_t v220 = v217 + 0x6ed9eba1 + v209 + (v215 ^ v211 ^ v212) + (v218 / 0x8000000 | 32 * v218); // 0x4cbefd
    int32_t v221 = v158 ^ v168 ^ v192 ^ v208; // 0x4cbf0d
    int32_t v222 = 2 * v221 | (int32_t)(v221 < 0); // 0x4cbf10
    uint32_t v223 = v222 - 0x70e44324 + v211 + ((v218 | v219) & v215 | v218 & v219) + (v220 / 0x8000000 | 32 * v220); // 0x4cbf3b
    int32_t v224 = v218 / 4 | 0x40000000 * v218; // 0x4cbf42
    int32_t v225 = v166 ^ v162 ^ v189 ^ v214; // 0x4cbf4c
    int32_t v226 = 2 * v225 | (int32_t)(v225 < 0); // 0x4cbf57
    int32_t v227 = v220 / 4 | 0x40000000 * v220; // 0x4cbf6f
    uint32_t v228 = v226 - 0x70e44324 + v215 + ((v220 | v224) & v219 | v220 & v224) + (v223 / 0x8000000 | 32 * v223); // 0x4cbf88
    int32_t v229 = v168 ^ v174 ^ v194 ^ v217; // 0x4cbf91
    int32_t v230 = 2 * v229 | (int32_t)(v229 < 0); // 0x4cbf93
    int32_t v231 = v223 / 4 | 0x40000000 * v223; // 0x4cbfad
    uint32_t v232 = v230 - 0x70e44324 + v219 + ((v223 | v227) & v224 | v223 & v227) + (v228 / 0x8000000 | 32 * v228); // 0x4cbfc2
    int32_t v233 = v166 ^ v178 ^ v202 ^ v222; // 0x4cbfc7
    int32_t v234 = 2 * v233 | (int32_t)(v233 < 0); // 0x4cbfcd
    uint32_t v235 = v234 - 0x70e44324 + v224 + ((v228 | v231) & v227 | v228 & v231) + (v232 / 0x8000000 | 32 * v232); // 0x4cbffe
    int32_t v236 = v228 / 4 | 0x40000000 * v228; // 0x4cc001
    int32_t v237 = v182 ^ v174 ^ v205 ^ v226; // 0x4cc00a
    int32_t v238 = 2 * v237 | (int32_t)(v237 < 0); // 0x4cc00e
    int32_t v239 = v232 / 4 | 0x40000000 * v232; // 0x4cc02c
    int32_t v240 = v235 / 4 | 0x40000000 * v235; // 0x4cc032
    uint32_t v241 = v238 - 0x70e44324 + v227 + ((v232 | v236) & v231 | v232 & v236) + (v235 / 0x8000000 | 32 * v235); // 0x4cc041
    int32_t v242 = v178 ^ v188 ^ v208 ^ v230; // 0x4cc04a
    int32_t v243 = 2 * v242 | (int32_t)(v242 < 0); // 0x4cc04f
    uint32_t v244 = v243 - 0x70e44324 + v231 + ((v235 | v239) & v236 | v235 & v239) + (v241 / 0x8000000 | 32 * v241); // 0x4cc083
    int32_t v245 = v182 ^ v192 ^ v214 ^ v234; // 0x4cc08e
    int32_t v246 = 2 * v245 | (int32_t)(v245 < 0); // 0x4cc092
    int32_t v247 = v189 ^ v188 ^ v217 ^ v238; // 0x4cc0aa
    int32_t v248 = v241 / 4 | 0x40000000 * v241; // 0x4cc0c1
    int32_t v249 = 2 * v247 | (int32_t)(v247 < 0); // 0x4cc0d1
    uint32_t v250 = v246 - 0x70e44324 + v236 + ((v241 | v240) & v239 | v241 & v240) + (v244 / 0x8000000 | 32 * v244); // 0x4cc0d5
    int32_t v251 = v244 / 4 | 0x40000000 * v244; // 0x4cc0e7
    uint32_t v252 = v249 - 0x70e44324 + v239 + ((v244 | v248) & v240 | v244 & v248) + (v250 / 0x8000000 | 32 * v250); // 0x4cc0fb
    int32_t v253 = v192 ^ v194 ^ v222 ^ v243; // 0x4cc109
    int32_t v254 = 2 * v253 | (int32_t)(v253 < 0); // 0x4cc10d
    int32_t v255 = v250 / 4 | 0x40000000 * v250; // 0x4cc12a
    uint32_t v256 = v254 - 0x70e44324 + v240 + ((v250 | v251) & v248 | v250 & v251) + (v252 / 0x8000000 | 32 * v252); // 0x4cc135
    int32_t v257 = v189 ^ v202 ^ v226 ^ v246; // 0x4cc156
    int32_t v258 = v202 ^ v208 ^ v234 ^ v254; // 0x4cc15a
    int32_t v259 = 2 * v257 | (int32_t)(v257 < 0); // 0x4cc15f
    int32_t v260 = v205 ^ v194 ^ v230 ^ v249; // 0x4cc174
    int32_t v261 = v252 / 4 | 0x40000000 * v252; // 0x4cc177
    int32_t v262 = 2 * v260 | (int32_t)(v260 < 0); // 0x4cc180
    uint32_t v263 = v259 - 0x70e44324 + v248 + ((v252 | v255) & v251 | v252 & v255) + (v256 / 0x8000000 | 32 * v256); // 0x4cc191
    int32_t v264 = 2 * v258 | (int32_t)(v258 < 0); // 0x4cc197
    int32_t v265 = v256 / 4 | 0x40000000 * v256; // 0x4cc1aa
    uint32_t v266 = v262 - 0x70e44324 + v251 + ((v256 | v261) & v255 | v256 & v261) + (v263 / 0x8000000 | 32 * v263); // 0x4cc1c0
    uint32_t v267 = v264 - 0x70e44324 + v255 + ((v263 | v265) & v261 | v263 & v265) + (v266 / 0x8000000 | 32 * v266); // 0x4cc1d8
    int32_t v268 = v263 / 4 | 0x40000000 * v263; // 0x4cc1eb
    int32_t v269 = v205 ^ v214 ^ v238 ^ v259; // 0x4cc1fe
    int32_t v270 = 2 * v269 | (int32_t)(v269 < 0); // 0x4cc209
    int32_t v271 = v217 ^ v208 ^ v243 ^ v262; // 0x4cc20c
    int32_t v272 = 2 * v271 | (int32_t)(v271 < 0); // 0x4cc219
    int32_t v273 = v266 / 4 | 0x40000000 * v266; // 0x4cc225
    uint32_t v274 = v270 - 0x70e44324 + v261 + ((v266 | v268) & v265 | v266 & v268) + (v267 / 0x8000000 | 32 * v267); // 0x4cc234
    int32_t v275 = v267 / 4 | 0x40000000 * v267; // 0x4cc246
    uint32_t v276 = v272 - 0x70e44324 + v265 + ((v267 | v273) & v268 | v267 & v273) + (v274 / 0x8000000 | 32 * v274); // 0x4cc25d
    int32_t v277 = v214 ^ v222 ^ v246 ^ v264; // 0x4cc266
    int32_t v278 = 2 * v277 | (int32_t)(v277 < 0); // 0x4cc269
    int32_t v279 = v274 / 4 | 0x40000000 * v274; // 0x4cc29b
    uint32_t v280 = v278 - 0x70e44324 + v268 + ((v274 | v275) & v273 | v274 & v275) + (v276 / 0x8000000 | 32 * v276); // 0x4cc29e
    int32_t v281 = v217 ^ v226 ^ v249 ^ v270; // 0x4cc2b8
    int32_t v282 = v226 ^ v234 ^ v259 ^ v278; // 0x4cc2bb
    int32_t v283 = 2 * v281 | (int32_t)(v281 < 0); // 0x4cc2c0
    int32_t v284 = v230 ^ v222 ^ v254 ^ v272; // 0x4cc2c2
    int32_t v285 = 2 * v284 | (int32_t)(v284 < 0); // 0x4cc2cf
    int32_t v286 = v276 / 4 | 0x40000000 * v276; // 0x4cc2d4
    int32_t v287 = 2 * v282 | (int32_t)(v282 < 0); // 0x4cc2d9
    uint32_t v288 = v283 - 0x70e44324 + v273 + ((v276 | v279) & v275 | v276 & v279) + (v280 / 0x8000000 | 32 * v280); // 0x4cc2f1
    int32_t v289 = v280 / 4 | 0x40000000 * v280; // 0x4cc304
    uint32_t v290 = v285 - 0x70e44324 + v275 + ((v280 | v286) & v279 | v280 & v286) + (v288 / 0x8000000 | 32 * v288); // 0x4cc311
    int32_t v291 = v288 / 4 | 0x40000000 * v288; // 0x4cc323
    uint32_t v292 = v287 - 0x70e44324 + v279 + ((v288 | v289) & v286 | v288 & v289) + (v290 / 0x8000000 | 32 * v290); // 0x4cc335
    int32_t v293 = v230 ^ v238 ^ v262 ^ v283; // 0x4cc34a
    int32_t v294 = 2 * v293 | (int32_t)(v293 < 0); // 0x4cc34d
    int32_t v295 = v290 / 4 | 0x40000000 * v290; // 0x4cc367
    uint32_t v296 = v294 - 0x70e44324 + v286 + ((v290 | v291) & v289 | v290 & v291) + (v292 / 0x8000000 | 32 * v292); // 0x4cc375
    int32_t v297 = v243 ^ v234 ^ v264 ^ v285; // 0x4cc385
    int32_t v298 = 2 * v297 | (int32_t)(v297 < 0); // 0x4cc388
    int32_t v299 = v292 / 4 | 0x40000000 * v292; // 0x4cc399
    uint32_t v300 = v298 - 0x70e44324 + v289 + ((v292 | v295) & v291 | v292 & v295) + (v296 / 0x8000000 | 32 * v296); // 0x4cc3ad
    int32_t v301 = v238 ^ v246 ^ v270 ^ v287; // 0x4cc3bf
    int32_t v302 = v296 / 4 | 0x40000000 * v296; // 0x4cc3c4
    int32_t v303 = 2 * v301 | (int32_t)(v301 < 0); // 0x4cc3c7
    uint32_t v304 = v303 - 0x359d3e2a + v291 + (v299 ^ v295 ^ v296) + (v300 / 0x8000000 | 32 * v300); // 0x4cc3e6
    int32_t v305 = v243 ^ v249 ^ v272 ^ v294; // 0x4cc3f8
    int32_t v306 = 2 * v305 | (int32_t)(v305 < 0); // 0x4cc400
    int32_t v307 = v300 / 4 | 0x40000000 * v300; // 0x4cc418
    uint32_t v308 = v306 - 0x359d3e2a + v295 + (v302 ^ v299 ^ v300) + (v304 / 0x8000000 | 32 * v304); // 0x4cc425
    int32_t v309 = v254 ^ v246 ^ v278 ^ v298; // 0x4cc43a
    int32_t v310 = 2 * v309 | (int32_t)(v309 < 0); // 0x4cc442
    int32_t v311 = v304 / 4 | 0x40000000 * v304; // 0x4cc458
    uint32_t v312 = v310 - 0x359d3e2a + v299 + (v307 ^ v302 ^ v304) + (v308 / 0x8000000 | 32 * v308); // 0x4cc465
    int32_t v313 = v249 ^ v259 ^ v283 ^ v303; // 0x4cc46d
    int32_t v314 = 2 * v313 | (int32_t)(v313 < 0); // 0x4cc470
    int32_t v315 = v308 / 4 | 0x40000000 * v308; // 0x4cc48e
    int32_t v316 = v254 ^ v262 ^ v285 ^ v306; // 0x4cc494
    int32_t v317 = 2 * v316 | (int32_t)(v316 < 0); // 0x4cc49a
    uint32_t v318 = v314 - 0x359d3e2a + v302 + (v311 ^ v307 ^ v308) + (v312 / 0x8000000 | 32 * v312); // 0x4cc4a1
    int32_t v319 = v312 / 4 | 0x40000000 * v312; // 0x4cc4bc
    uint32_t v320 = v317 - 0x359d3e2a + v307 + (v315 ^ v311 ^ v312) + (v318 / 0x8000000 | 32 * v318); // 0x4cc4c9
    int32_t v321 = v264 ^ v259 ^ v287 ^ v310; // 0x4cc4d7
    int32_t v322 = 2 * v321 | (int32_t)(v321 < 0); // 0x4cc4dd
    int32_t v323 = v262 ^ v270 ^ v294 ^ v314; // 0x4cc4ed
    int32_t v324 = v318 / 4 | 0x40000000 * v318; // 0x4cc500
    int32_t v325 = 2 * v323 | (int32_t)(v323 < 0); // 0x4cc509
    uint32_t v326 = v322 - 0x359d3e2a + v311 + (v319 ^ v315 ^ v318) + (v320 / 0x8000000 | 32 * v320); // 0x4cc510
    int32_t v327 = v264 ^ v272 ^ v298 ^ v317; // 0x4cc533
    int32_t v328 = v320 / 4 | 0x40000000 * v320; // 0x4cc538
    uint32_t v329 = v325 - 0x359d3e2a + v315 + (v324 ^ v319 ^ v320) + (v326 / 0x8000000 | 32 * v326); // 0x4cc53b
    int32_t v330 = 2 * v327 | (int32_t)(v327 < 0); // 0x4cc53e
    int32_t v331 = v326 / 4 | 0x40000000 * v326; // 0x4cc54f
    uint32_t v332 = v330 - 0x359d3e2a + v319 + (v328 ^ v324 ^ v326) + (v329 / 0x8000000 | 32 * v329); // 0x4cc55c
    int32_t v333 = v278 ^ v270 ^ v303 ^ v322; // 0x4cc571
    int32_t v334 = 2 * v333 | (int32_t)(v333 < 0); // 0x4cc576
    int32_t v335 = v329 / 4 | 0x40000000 * v329; // 0x4cc587
    uint32_t v336 = v334 - 0x359d3e2a + v324 + (v331 ^ v328 ^ v329) + (v332 / 0x8000000 | 32 * v332); // 0x4cc596
    int32_t v337 = v272 ^ v283 ^ v306 ^ v325; // 0x4cc59f
    int32_t v338 = 2 * v337 | (int32_t)(v337 < 0); // 0x4cc5a2
    int32_t v339 = v332 / 4 | 0x40000000 * v332; // 0x4cc5b2
    uint32_t v340 = v338 - 0x359d3e2a + v328 + (v335 ^ v331 ^ v332) + (v336 / 0x8000000 | 32 * v336); // 0x4cc5bc
    int32_t v341 = v278 ^ v285 ^ v310 ^ v330; // 0x4cc5cc
    int32_t v342 = 2 * v341 | (int32_t)(v341 < 0); // 0x4cc5cf
    int32_t v343 = v336 / 4 | 0x40000000 * v336; // 0x4cc5e0
    uint32_t v344 = v342 - 0x359d3e2a + v331 + (v339 ^ v335 ^ v336) + (v340 / 0x8000000 | 32 * v340); // 0x4cc5f0
    int32_t v345 = v287 ^ v283 ^ v314 ^ v334; // 0x4cc5f9
    int32_t v346 = 2 * v345 | (int32_t)(v345 < 0); // 0x4cc5fc
    int32_t v347 = v340 / 4 | 0x40000000 * v340; // 0x4cc60d
    uint32_t v348 = v346 - 0x359d3e2a + v335 + (v343 ^ v339 ^ v340) + (v344 / 0x8000000 | 32 * v344); // 0x4cc617
    int32_t v349 = v285 ^ v294 ^ v317 ^ v338; // 0x4cc620
    int32_t v350 = 2 * v349 | (int32_t)(v349 < 0); // 0x4cc622
    int32_t v351 = v344 / 4 | 0x40000000 * v344; // 0x4cc634
    uint32_t v352 = v350 - 0x359d3e2a + v339 + (v347 ^ v343 ^ v344) + (v348 / 0x8000000 | 32 * v348); // 0x4cc63f
    int32_t v353 = v287 ^ v298 ^ v322 ^ v342; // 0x4cc64f
    int32_t v354 = 2 * v353 | (int32_t)(v353 < 0); // 0x4cc651
    int32_t v355 = v348 / 4 | 0x40000000 * v348; // 0x4cc668
    uint32_t v356 = v354 - 0x359d3e2a + v343 + (v351 ^ v347 ^ v348) + (v352 / 0x8000000 | 32 * v352); // 0x4cc678
    int32_t v357 = v303 ^ v294 ^ v325 ^ v346; // 0x4cc688
    int32_t v358 = 2 * v357 | (int32_t)(v357 < 0); // 0x4cc68e
    int32_t v359 = v352 / 4 | 0x40000000 * v352; // 0x4cc6aa
    uint32_t v360 = v358 - 0x359d3e2a + v347 + (v355 ^ v351 ^ v352) + (v356 / 0x8000000 | 32 * v356); // 0x4cc6ae
    int32_t v361 = v298 ^ v306 ^ v330 ^ v350; // 0x4cc6b4
    int32_t v362 = 2 * v361 | (int32_t)(v361 < 0); // 0x4cc6b9
    int32_t v363 = v356 / 4 | 0x40000000 * v356; // 0x4cc6c8
    uint32_t v364 = v362 - 0x359d3e2a + v351 + (v359 ^ v355 ^ v356) + (v360 / 0x8000000 | 32 * v360); // 0x4cc6de
    int32_t v365 = v303 ^ v310 ^ v334 ^ v354; // 0x4cc6e7
    int32_t v366 = 2 * v365 | (int32_t)(v365 < 0); // 0x4cc6ef
    int32_t v367 = v360 / 4 | 0x40000000 * v360; // 0x4cc70b
    uint32_t v368 = v366 - 0x359d3e2a + v355 + (v363 ^ v359 ^ v360) + (v364 / 0x8000000 | 32 * v364); // 0x4cc70f
    int32_t v369 = v314 ^ v306 ^ v338 ^ v358; // 0x4cc71f
    int32_t v370 = v310 ^ v317 ^ v342 ^ v362; // 0x4cc73f
    int32_t v371 = v364 / 4 | 0x40000000 * v364; // 0x4cc741
    int32_t v372 = v314 ^ v322 ^ v346 ^ v366; // 0x4cc751
    uint32_t v373 = (2 * v369 | (int32_t)(v369 < 0)) - 0x359d3e2a + v359 + (v367 ^ v363 ^ v364) + (v368 / 0x8000000 | 32 * v368); // 0x4cc76c
    int32_t v374 = v368 / 4 | 0x40000000 * v368; // 0x4cc77b
    uint32_t v375 = (2 * v370 | (int32_t)(v370 < 0)) - 0x359d3e2a + v363 + (v371 ^ v367 ^ v368) + (v373 / 0x8000000 | 32 * v373); // 0x4cc78d
    uint32_t result = v78 - 0x359d3e2a + (2 * v372 | (int32_t)(v372 < 0)) + v367 + (v374 ^ v371 ^ v373) + (v375 / 0x8000000 | 32 * v375); // 0x4cc79c
    *v77 = result;
    *v82 = v374 + v83;
    *v87 = v375 + v88;
    *v85 = (v373 / 4 | 0x40000000 * v373) + v86;
    *v89 = v371 + v90;
    return result;
}

// Address range: 0x524720 - 0x525b25
int64_t function_524720(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * str, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    // 0x524720
    __readfsqword(40);
    function_556610();
    int64_t v1 = function_554b00(a6 + 208); // 0x5247a8
    int32_t len = strlen((char *)str); // 0x5247b3
    int32_t v2 = 0; // bp-196, 0x5247cb
    int64_t result = (int64_t)&v2; // 0x5247f8
    if (a2 == 0) {
        // 0x525b2a
        return result;
    }
    int64_t v3 = (int64_t)str;
    uint64_t v4 = (int64_t)len; // 0x5247b3
    int64_t v5 = v1 + 313;
    int64_t v6 = 0; // 0x524720
    int64_t v7 = a2;
    int64_t v8 = a5; // 0x524720
    int64_t v9 = a4; // 0x524720
    int64_t v10 = a3; // 0x524720
    uint64_t v11; // 0x524720
    char v12; // 0x524720
    int64_t v13; // 0x524720
    int64_t v14; // 0x524720
    int64_t v15; // 0x524720
    int64_t v16; // 0x524720
    int64_t v17; // 0x524720
    int64_t v18; // 0x524720
    int64_t v19; // 0x524720
    int64_t v20; // 0x524720
    while (true) {
      lab_0x5247fe:;
        int64_t v21 = v10;
        v20 = v9;
        v19 = v8;
        v16 = v7;
        v11 = v6;
        v13 = v21;
        if ((int32_t)v21 == -1) {
            uint64_t v22 = *(int64_t *)(v16 + 16); // 0x524978
            if (v22 >= *(int64_t *)(v16 + 24)) {
                int64_t v23 = *(int64_t *)v16; // 0x5259e0
                int64_t v24 = v23; // 0x5259e9
                if ((int32_t)v23 != -1) {
                    // 0x524989
                    v13 = 0x100000000 * v24 >> 32;
                    goto lab_0x52480c;
                } else {
                    // 0x524b1b
                    result = v23;
                    if (v20 == 0) {
                        // 0x525b2a
                        return result;
                    }
                    // 0x524b2c
                    v14 = v21;
                    v17 = 0;
                    v12 = 1;
                    v15 = v21;
                    v9 = v20;
                    v8 = v19;
                    v18 = 0;
                    if ((int32_t)v19 != -1) {
                        goto lab_0x524898;
                    } else {
                        goto lab_0x52487a;
                    }
                }
            } else {
                // 0x524989
                v13 = 0x100000000 * (int64_t)*(char *)v22 >> 32;
                goto lab_0x52480c;
            }
        } else {
            goto lab_0x52480c;
        }
    }
  lab_0x524823_2:;
    // 0x524823
    int64_t v25; // 0x524720
    int64_t result2 = v25; // 0x524823
    int32_t v26 = v2; // 0x524823
    goto lab_0x52482a_2;
  lab_0x52480c:;
    int64_t v28 = v13;
    v15 = v28;
    v9 = 0;
    v8 = v19;
    v18 = v16;
    if (v20 == 0) {
        goto lab_0x524898;
    } else {
        // 0x524819
        v25 = v16;
        v14 = v28;
        v17 = v16;
        v12 = 0;
        if ((int32_t)v19 != -1) {
            goto lab_0x524823_2;
        }
        goto lab_0x52487a;
    }
  lab_0x524898:
    // 0x524898
    v7 = v18;
    result2 = v7;
    v26 = v2;
    if (v11 >= v4) {
        // break -> 0x52482a
        goto lab_0x52482a_2;
    }
    int64_t result3 = v7; // 0x5248a6
    if (v2 != 0) {
        goto lab_0x524833;
    }
    int64_t v29 = v15;
    int64_t v30 = v11 + v3;
    int64_t v31 = v11 + 1; // 0x5248ac
    char * v32 = (char *)v30; // 0x5248b0
    unsigned char v33 = *v32; // 0x5248b0
    int64_t v34 = v33; // 0x5248b0
    char * v35 = (char *)(v5 + v34); // 0x5248b4
    char v36 = *v35; // 0x5248b4
    char v37 = v36; // 0x5248c2
    char v38; // 0x524720
    if (v36 == 0) {
        // 0x5249ed
        v38 = 0;
        if (v33 == 0) {
            goto lab_0x524998;
        } else {
            // 0x5249f1
            *v35 = v33;
            v37 = v33;
            goto lab_0x5248c8;
        }
    } else {
        goto lab_0x5248c8;
    }
  lab_0x5248c8:;
    // 0x5248c8
    int64_t v39; // 0x524720
    int64_t v40; // 0x524720
    int64_t v41; // 0x524720
    int64_t v42; // 0x5248d1
    if (v37 != 37) {
        // 0x5248c8
        v38 = *v32;
        goto lab_0x524998;
    } else {
        unsigned char v43 = *(char *)(v31 + v3); // 0x5248d1
        v42 = v43;
        char * v44 = (char *)(v5 + v42); // 0x5248d6
        unsigned char v45 = *v44; // 0x5248d6
        v41 = v45;
        if (v45 == 0) {
            // 0x524a00
            v40 = 0;
            v39 = v31;
            if (v43 == 0) {
                goto lab_0x524957;
            } else {
                // 0x524a1d
                *v44 = v43;
                v41 = v42;
                goto lab_0x5248ea;
            }
        } else {
            goto lab_0x5248ea;
        }
    }
  lab_0x52487a:;
    uint64_t v46 = *(int64_t *)(v20 + 16); // 0x52487a
    int64_t v47; // 0x524720
    int64_t v48; // 0x524720
    int64_t v49; // 0x524720
    char v50; // 0x524720
    if (v46 >= *(int64_t *)(v20 + 24)) {
        int64_t v51 = *(int64_t *)v20; // 0x525a08
        v47 = v51;
        v49 = 0;
        v48 = v19;
        v50 = 1;
        if ((int32_t)v51 != -1) {
            goto lab_0x52488b;
        } else {
            goto lab_0x524894;
        }
    } else {
        // 0x524888
        v47 = (int64_t)*(char *)v46;
        goto lab_0x52488b;
    }
  lab_0x524998:
    // 0x524998
    result = v34;
    if (v7 == 0) {
        // 0x525b2a
        return result;
    }
    char v52 = v38; // 0x5249a0
    int64_t * v53; // 0x524720
    int64_t v54; // 0x524720
    int64_t v55; // 0x524720
    int64_t v56; // 0x524720
    int64_t v57; // 0x524720
    if ((int32_t)v29 == -1) {
        int64_t * v58 = (int64_t *)(v7 + 16);
        int64_t v59 = *v58; // 0x524a30
        int64_t v60 = *(int64_t *)(v7 + 24); // 0x524a34
        if (v59 >= v60) {
            int64_t v61 = *(int64_t *)v7; // 0x524ae8
            result = v61;
            if ((int32_t)v61 == -1) {
                // 0x525b2a
                return result;
            }
            // 0x524af7
            v57 = 0x100000000 * v61 >> 32;
            v56 = v61;
            v54 = v60;
            v55 = v59;
            v53 = v58;
            if (v52 != (char)v61) {
                goto lab_0x5249c5;
            } else {
                goto lab_0x524a58;
            }
        } else {
            unsigned char v62 = *(char *)v59; // 0x524a3e
            v57 = v62;
            v56 = v59;
            v54 = v60;
            v55 = v59;
            v53 = v58;
            if (v62 != v52) {
                goto lab_0x5249c5;
            } else {
                goto lab_0x524a58;
            }
        }
    } else {
        // 0x5249bc
        v57 = v29;
        v56 = v29 & 0xffffffff;
        if (v52 == (char)v29) {
            int64_t * v63 = (int64_t *)(v7 + 16); // 0x524a58
            v54 = *(int64_t *)(v7 + 24);
            v55 = *v63;
            v53 = v63;
            goto lab_0x524a58;
        } else {
            goto lab_0x5249c5;
        }
    }
  lab_0x5248ea:;
    int64_t v64 = v42; // 0x524720
    int64_t v65 = v41; // 0x524720
    int64_t v66 = v31; // 0x524720
    int64_t v67; // 0x524720
    switch ((char)v67) {
        case 69: {
            goto lab_0x524920;
        }
        case 79: {
            goto lab_0x524920;
        }
        default: {
            goto lab_0x5248ff;
        }
    }
  lab_0x52488b:
    // 0x52488b
    v49 = v20;
    v48 = 0x100000000 * v47 >> 32;
    v50 = 0;
    goto lab_0x524894;
  lab_0x524894:
    // 0x524894
    v25 = v17;
    v15 = v14;
    v9 = v49;
    v8 = v48;
    v18 = v17;
    if (v50 == v12) {
        goto lab_0x524823_2;
    }
    goto lab_0x524898;
  lab_0x5249c5:
    // 0x5249c5
    v2 |= 4;
    v10 = v57;
    int64_t v68 = v56; // 0x5249d0
    v6 = v31;
    goto lab_0x5247f5;
  lab_0x524957:
    // 0x524957
    v2 |= 4;
    v10 = v29;
    v68 = v40;
    v6 = v39 + 1;
    goto lab_0x5247f5;
  lab_0x524920:;
    int64_t v69 = v11 + 2; // 0x524920
    unsigned char v70 = *(char *)(v30 + 2); // 0x524924
    int64_t v71 = v70; // 0x524924
    unsigned char v72 = *(char *)(v5 + v71); // 0x52492a
    v64 = v71;
    v65 = v72;
    v66 = v69;
    if (v72 != 0) {
        goto lab_0x5248ff;
    } else {
        // 0x52493a
        v40 = v71;
        v39 = v69;
        if (v70 != 0) {
            // 0x524ab0
            char * v73; // 0x52492a
            *v73 = v70;
            v64 = v71;
            v65 = v71;
            v66 = v69;
            goto lab_0x5248ff;
        } else {
            goto lab_0x524957;
        }
    }
  lab_0x5248ff:;
    int64_t v74 = v65 + 0xffffffbf; // 0x5248ff
    v40 = v64;
    v39 = v66;
    if ((char)v74 < 57) {
        int32_t v75 = *(int32_t *)((4 * v74 & 1020) + (int64_t)&g69); // 0x524911
        return (int64_t)v75 + (int64_t)&g69;
    }
    goto lab_0x524957;
  lab_0x524a58:
    // 0x524a58
    if (v55 >= v54) {
        int64_t result4 = *(int64_t *)v7; // 0x525b14
        return result4;
    }
    int64_t v76 = v55 + 1; // 0x524a66
    *v53 = v76;
    v10 = -1;
    v68 = v76;
    v6 = v31;
    goto lab_0x5247f5;
  lab_0x5247f5:
    // 0x5247f5
    result = v68;
    if (v7 == 0) {
        // 0x525b2a
        return result;
    }
    goto lab_0x5247fe;
  lab_0x52482a_2:
    // 0x52482a
    result3 = result2;
    if (v11 == v4 == v26 == 0) {
        // 0x52483b
        __readfsqword(40);
        return result2;
    }
  lab_0x524833:;
    int32_t * v27 = (int32_t *)a7; // 0x524838
    *v27 = *v27 | 4;
    // 0x52483b
    __readfsqword(40);
    return result3;
}

// Address range: 0x5282e0 - 0x5295d7
int64_t function_5282e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t v1 = a6 + 208; // 0x5282e8
    __readfsqword(40);
    function_554b00(v1);
    int64_t v2 = function_566390(&g95); // 0x52835b
    int64_t * v3 = (int64_t *)v1; // 0x528363
    int64_t * v4 = (int64_t *)(*(int64_t *)(*v3 + 24) + 8 * v2); // 0x528372
    int64_t v5 = *v4; // 0x528372
    int64_t v6 = v5; // 0x528378
    if (v5 == 0) {
        int64_t v7 = function_4efd30(112); // 0x529235
        *(int32_t *)(v7 + 8) = 0;
        *(int64_t *)(v7 + 16) = 0;
        *(int64_t *)(v7 + 24) = 0;
        *(char *)(v7 + 32) = 0;
        *(int16_t *)(v7 + 33) = 0;
        *(int64_t *)(v7 + 40) = 0;
        *(int64_t *)(v7 + 48) = 0;
        *(int64_t *)v7 = (int64_t)&g92;
        *(int64_t *)(v7 + 56) = 0;
        *(int64_t *)(v7 + 64) = 0;
        *(int64_t *)(v7 + 72) = 0;
        *(int64_t *)(v7 + 80) = 0;
        *(int64_t *)(v7 + 88) = 0;
        *(int32_t *)(v7 + 96) = 0;
        *(char *)(v7 + 111) = 0;
        function_555fe0(v7, v1, 0);
        function_566890(*v3, v7, v2);
        v6 = *v4;
    }
    int32_t v8 = 0; // bp-120, 0x5283af
    int64_t v9; // bp-136, 0x5282e0
    int64_t v10 = (int64_t)&v9; // 0x5283b7
    v9 = (int64_t)&v8;
    if (*(char *)(v6 + 32) != 0) {
        // 0x5283ce
        function_52b8e0(v10, 32);
    }
    // 0x5283dd
    char * v11; // bp-104, 0x5282e0
    int64_t v12 = (int64_t)&v11; // 0x5283dd
    char v13 = 0; // bp-88, 0x5283f6
    v11 = (int64_t)&v13;
    function_52b8e0(v12, 32);
    int32_t v14 = *(int32_t *)(v6 + 96); // 0x52842e
    int32_t v15 = v14; // bp-140, 0x52843f
    int64_t v16 = (int64_t)&v15; // 0x52844e
    int64_t v17 = 0; // 0x528467
    unsigned char v18; // 0x52846d
    uint32_t v19; // 0x528479
    if ((char)v14 < 5) {
        // 0x52846d
        v18 = *(char *)v16;
        v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g70);
        return (int64_t)v19 + (int64_t)&g70;
    }
    while ((int32_t)v17 <= 2) {
        // 0x5284ed
        v17++;
        int64_t v20 = v17; // 0x5284fb
        if (*(char *)(v17 + v16) < 5) {
            // 0x52846d
            v18 = *(char *)(v20 + v16);
            v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g70);
            return (int64_t)v19 + (int64_t)&g70;
        }
    }
    // 0x529331
    function_52cc60(a9, v12);
    if (a2 == 0) {
        goto lab_0x529521;
    } else {
        if ((int32_t)a3 == -1) {
            // 0x529070
            if (*(int64_t *)(a2 + 16) >= *(int64_t *)(a2 + 24)) {
                // 0x529506
                if ((int32_t)*(int64_t *)a2 != -1) {
                    goto lab_0x52858c;
                } else {
                    goto lab_0x529521;
                }
            } else {
                goto lab_0x52858c;
            }
        } else {
            goto lab_0x52858c;
        }
    }
  lab_0x529521:;
    int64_t v21 = 0; // 0x529529
    char v22; // 0x5282e0
    int64_t v23; // 0x5282e0
    int64_t result; // 0x5282e0
    if (a4 == 0) {
        goto lab_0x5285a1;
    } else {
        // 0x52952f
        result = 0;
        v23 = 0;
        v22 = 1;
        if ((int32_t)a5 != -1) {
            goto lab_0x5285a9;
        } else {
            goto lab_0x529092;
        }
    }
  lab_0x5285a1:;
    int32_t * v24 = (int32_t *)a8; // 0x5285a6
    *v24 = *v24 | 2;
    result = v21;
    goto lab_0x5285a9;
  lab_0x52858c:
    // 0x52858c
    result = a2;
    if (a4 == 0) {
        goto lab_0x5285a9;
    } else {
        // 0x528596
        v21 = a2;
        v23 = a2;
        v22 = 0;
        if ((int32_t)a5 == -1) {
            goto lab_0x529092;
        } else {
            goto lab_0x5285a1;
        }
    }
  lab_0x5285a9:;
    int64_t v25 = (int64_t)v11; // 0x5285ae
    if (v12 + 16 != v25) {
        // 0x5285cf
        function_4eeb50(v25);
    }
    // 0x5285e6
    if (v9 != v10 + 16) {
        // 0x5285fc
        function_4eeb50(v9);
    }
    // 0x528613
    __readfsqword(40);
    return result;
  lab_0x529092:;
    char v26 = 0; // 0x52909a
    if (*(int64_t *)(a4 + 16) >= *(int64_t *)(a4 + 24)) {
        // 0x529544
        v26 = (int32_t)*(int64_t *)a4 == -1;
    }
    // 0x5290a9
    v21 = v23;
    result = v23;
    if (v26 != v22) {
        goto lab_0x5285a9;
    } else {
        goto lab_0x5285a1;
    }
}

// Address range: 0x5378f0 - 0x538b82
int64_t function_5378f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8, int64_t wstr, int64_t a10, int64_t a11, int64_t a12, int64_t a13) {
    int64_t result = a2; // bp-200, 0x537923
    __readfsqword(40);
    function_50c440();
    int64_t v1 = function_50ab00(a6 + 208); // 0x53797a
    uint64_t v2 = (int64_t)wcslen((int32_t *)wstr); // 0x537985
    int64_t v3 = (int64_t)&result; // 0x5379a1
    int64_t v4 = a2; // 0x5379ae
    int64_t v5 = a3; // 0x5379ae
    int64_t v6 = a4; // 0x5379ae
    int64_t v7 = a5; // 0x5379ae
    int32_t v8 = 0; // 0x5379ae
    int64_t v9 = 0; // 0x5379ae
    int64_t v10; // 0x5378f0
    int64_t v11; // 0x5378f0
    int64_t v12; // 0x5378f0
    int64_t v13; // 0x5378f0
    int64_t v14; // 0x5378f0
    int64_t v15; // 0x5378f0
    int32_t v16; // 0x5378f0
    int32_t v17; // 0x5378f0
    int64_t v18; // 0x5378f0
    int64_t v19; // 0x5378f0
    int64_t v20; // 0x5378f0
    int64_t v21; // 0x5378f0
    while (true) {
      lab_0x5379b3_2:
        // 0x5379b3
        v10 = v4;
        v12 = v4;
        v18 = v5;
        v16 = v8;
        v14 = v9;
        v11 = 0;
        v13 = 0;
        v19 = v5;
        v21 = v6;
        v20 = v7;
        v17 = v8;
        v15 = v9;
        if (v4 == 0) {
            goto lab_0x537af8;
        } else {
            goto lab_0x5379c4;
        }
    }
  lab_0x5379f4_4:;
    // 0x5379f4
    int64_t v22; // 0x5378f0
    int32_t v23; // 0x5378f0
    if (v23 == 0 == v22 == v2) {
        // 0x537a06
        __readfsqword(40);
        return result;
    }
    // 0x5379fe
    *(int32_t *)a7 = *(int32_t *)a7 | 4;
    // 0x537a06
    __readfsqword(40);
    return result;
  lab_0x537af8:;
    int64_t v24 = v15;
    int32_t v25 = v17;
    int64_t v26 = v21;
    v23 = v25;
    v22 = v24;
    if (v26 == 0) {
        // break -> 0x5379f4
        goto lab_0x5379f4_4;
    }
    int64_t v27 = v20;
    int64_t v28 = v19;
    int64_t v29 = v13;
    int64_t v30 = v11;
    int64_t v31 = v30; // 0x537b17
    int64_t v32 = v29; // 0x537b17
    int64_t v33 = v28; // 0x537b17
    int64_t v34 = v26; // 0x537b17
    int64_t v35 = v27; // 0x537b17
    int32_t v36 = v25; // 0x537b17
    int64_t v37 = v24; // 0x537b17
    int64_t v38; // 0x5378f0
    int64_t v39; // 0x5378f0
    int64_t v40; // 0x5378f0
    int64_t v41; // 0x5378f0
    int64_t v42; // 0x5378f0
    int64_t v43; // 0x5378f0
    int64_t v44; // 0x5378f0
    int64_t v45; // 0x5378f0
    int64_t v46; // 0x5378f0
    int32_t v47; // 0x5378f0
    int32_t v48; // 0x5378f0
    int64_t v49; // 0x5378f0
    int64_t v50; // 0x5378f0
    int64_t v51; // 0x5378f0
    int64_t v52; // 0x5378f0
    int64_t v53; // 0x5378f0
    int64_t v54; // 0x5378f0
    if ((int32_t)v27 != -1) {
        goto lab_0x537a6e;
    } else {
        uint64_t v55 = *(int64_t *)(v26 + 16); // 0x537b1d
        v38 = v30;
        v40 = v29;
        v49 = v28;
        v53 = v26;
        v51 = v27;
        v47 = v25;
        v46 = v55;
        v42 = 1;
        v44 = v24;
        v39 = v30;
        v41 = v29;
        v50 = v28;
        v54 = v26;
        v52 = v27;
        v48 = v25;
        v43 = 1;
        v45 = v24;
        if (v55 < *(int64_t *)(v26 + 24)) {
            goto lab_0x537a51;
        } else {
            goto lab_0x537b2b;
        }
    }
  lab_0x5379c4:;
    int64_t v56 = v14;
    int32_t v57 = v16;
    int64_t v58 = v7;
    int64_t v59 = v6;
    int64_t v60 = v18;
    int64_t v61 = v12;
    int64_t v62 = v10;
    int64_t v63 = v60; // 0x5379cc
    if ((int32_t)v60 == -1) {
        uint64_t v64 = *(int64_t *)(v61 + 16); // 0x537b60
        int64_t v65; // 0x5378f0
        if (v64 >= *(int64_t *)(v61 + 24)) {
            // 0x5389c8
            v65 = *(int64_t *)v61;
        } else {
            // 0x537b6e
            v65 = (int64_t)*(int32_t *)v64;
        }
        int64_t v66 = v65;
        if ((int32_t)v66 == -1) {
            // 0x537c30
            result = 0;
            v11 = 0;
            v13 = 0;
            v19 = v60;
            v21 = v59;
            v20 = v58;
            v17 = v57;
            v15 = v56;
            goto lab_0x537af8;
        } else {
            // 0x537b79
            v63 = 0x100000000 * v66 >> 32;
            goto lab_0x5379d2;
        }
    } else {
        goto lab_0x5379d2;
    }
  lab_0x537a6e:;
    int64_t v67 = v37;
    int32_t v68 = v36;
    v23 = v68;
    v22 = v67;
    if (v67 >= v2) {
        // break -> 0x5379f4
        goto lab_0x5379f4_4;
    }
    if (v68 != 0) {
        // 0x5379fe
        *(int32_t *)a7 = *(int32_t *)a7 | 4;
        // 0x537a06
        __readfsqword(40);
        return result;
    }
    // 0x537a87
    v7 = v35;
    v6 = v34;
    int64_t v69 = v33;
    int64_t v70 = v31;
    int64_t v71 = *(int64_t *)v1; // 0x537a8f
    int64_t v72; // 0x5378f0
    int64_t v73; // 0x5378f0
    int64_t v74; // 0x5378f0
    int64_t v75; // 0x5378f0
    int64_t v76; // 0x537a97
    uint32_t v77; // 0x537aa0
    if ((char)v71 == 37) {
        int64_t v78 = v71 + 0xffffffbf; // 0x537bab
        if ((char)v78 < 57) {
            int32_t v79 = *(int32_t *)((4 * v78 & 1020) + (int64_t)&g71); // 0x537bc0
            return (int64_t)v79 + (int64_t)&g71;
        }
        // 0x538522
        v4 = v70;
        v5 = v69;
        v8 = v68 | 4;
        v9 = v67 + 2;
        goto lab_0x5379b3_2;
    } else {
        int64_t v80 = v32;
        v76 = v67 + 1;
        v77 = *(int32_t *)(4 * v67 + wstr);
        v72 = v70;
        v73 = 0;
        v74 = 0xffffffff;
        if (v80 == 0) {
            goto lab_0x537ad3;
        } else {
            // 0x537ac3
            v72 = v70;
            v73 = v80;
            v74 = v69 & 0xffffffff;
            if ((int32_t)v69 == -1) {
                uint64_t v81 = *(int64_t *)(v80 + 16); // 0x537bd0
                int64_t v82; // 0x5378f0
                if (v81 >= *(int64_t *)(v80 + 24)) {
                    // 0x5389b8
                    v82 = *(int64_t *)v80;
                } else {
                    // 0x537bde
                    v82 = (int64_t)*(int32_t *)v81;
                }
                int64_t v83 = v82;
                int32_t v84 = v83; // 0x537be0
                if (v84 == -1) {
                    // 0x5389d8
                    result = 0;
                    v72 = 0;
                    v73 = 0;
                    v74 = 0xffffffff;
                    goto lab_0x537ad3;
                } else {
                    int64_t v85 = 0x100000000 * v83 >> 32; // 0x537bec
                    v75 = v85;
                    if (v77 != v84) {
                        // 0x537adc
                        v10 = v70;
                        v12 = v80;
                        v18 = v85;
                        v16 = v68 | 4;
                        v14 = v76;
                        goto lab_0x5379c4;
                    } else {
                        goto lab_0x537bf9;
                    }
                }
            } else {
                goto lab_0x537ad3;
            }
        }
    }
  lab_0x5379d2:;
    int64_t v86 = v63;
    v31 = v62;
    v32 = v61;
    v33 = v86;
    v34 = 0;
    v35 = v58;
    v36 = v57;
    v37 = v56;
    if (v59 == 0) {
        goto lab_0x537a6e;
    } else {
        // 0x5379e3
        v23 = v57;
        v22 = v56;
        if ((int32_t)v58 != -1) {
            // break -> 0x5379f4
            goto lab_0x5379f4_4;
        }
        uint64_t v87 = *(int64_t *)(v59 + 16); // 0x537a43
        v38 = v62;
        v40 = v61;
        v49 = v86;
        v53 = v59;
        v51 = v58;
        v47 = v57;
        v46 = v87;
        v42 = 0;
        v44 = v56;
        v39 = v62;
        v41 = v61;
        v50 = v86;
        v54 = v59;
        v52 = v58;
        v48 = v57;
        v43 = 0;
        v45 = v56;
        if (v87 >= *(int64_t *)(v59 + 24)) {
            goto lab_0x537b2b;
        } else {
            goto lab_0x537a51;
        }
    }
  lab_0x537a51:;
    uint32_t v88 = *(int32_t *)v46; // 0x537a51
    int64_t v89 = v38; // 0x537a56
    int64_t v90 = v40; // 0x537a56
    int64_t v91 = v49; // 0x537a56
    int64_t v92 = v53; // 0x537a56
    int32_t v93 = v47; // 0x537a56
    int64_t v94 = v88; // 0x537a56
    int64_t v95 = v42; // 0x537a56
    int64_t v96 = v44; // 0x537a56
    int64_t v97 = v38; // 0x537a56
    int64_t v98 = v40; // 0x537a56
    int64_t v99 = v49; // 0x537a56
    int64_t v100 = 0; // 0x537a56
    int64_t v101 = v51; // 0x537a56
    int32_t v102 = v47; // 0x537a56
    int64_t v103 = v42; // 0x537a56
    int64_t v104 = v44; // 0x537a56
    char v105 = 1; // 0x537a56
    if (v88 == -1) {
        goto lab_0x537a65;
    } else {
        goto lab_0x537a5c;
    }
  lab_0x537b2b:;
    int64_t v106 = *(int64_t *)v54; // 0x537b2b
    v89 = v39;
    v90 = v41;
    v91 = v50;
    v92 = v54;
    v93 = v48;
    v94 = v106;
    v95 = v43;
    v96 = v45;
    v97 = v39;
    v98 = v41;
    v99 = v50;
    v100 = 0;
    v101 = v52;
    v102 = v48;
    v103 = v43;
    v104 = v45;
    v105 = 1;
    if ((int32_t)v106 != -1) {
        goto lab_0x537a5c;
    } else {
        goto lab_0x537a65;
    }
  lab_0x5379b3:
    // 0x5379b3
    goto lab_0x5379b3_2;
  lab_0x537ad3:
    // 0x537ad3
    v75 = v69;
    if (v77 == (int32_t)v74) {
        goto lab_0x537bf9;
    } else {
        int32_t v107 = v68 | 4; // 0x537ae4
        v10 = v72;
        v12 = v73;
        v18 = v69;
        v16 = v107;
        v14 = v76;
        v11 = v72;
        v13 = v73;
        v19 = v69;
        v21 = v6;
        v20 = v7;
        v17 = v107;
        v15 = v76;
        if (v73 != 0) {
            goto lab_0x5379c4;
        } else {
            goto lab_0x537af8;
        }
    }
  lab_0x537a65:
    // 0x537a65
    v23 = v102;
    v22 = v104;
    v31 = v97;
    v32 = v98;
    v33 = v99;
    v34 = v100;
    v35 = v101;
    v36 = v102;
    v37 = v104;
    if (v105 == (char)v103) {
        // break -> 0x5379f4
        goto lab_0x5379f4_4;
    }
    goto lab_0x537a6e;
  lab_0x537a5c:
    // 0x537a5c
    v97 = v89;
    v98 = v90;
    v99 = v91;
    v100 = v92;
    v101 = 0x100000000 * v94 >> 32;
    v102 = v93;
    v103 = v95;
    v104 = v96;
    v105 = 0;
    goto lab_0x537a65;
  lab_0x537bf9:
    // 0x537bf9
    function_50d7a0(v3, (int64_t)v77, 0, a4);
    v4 = result;
    v5 = v75;
    v8 = v68;
    v9 = v76;
    goto lab_0x5379b3;
}

// Address range: 0x539b70 - 0x53ae00
int64_t function_539b70(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = a6 + 208; // 0x539b78
    __readfsqword(40);
    function_50ab00(v1);
    int64_t v2 = function_566390(&g96); // 0x539bf1
    int64_t * v3 = (int64_t *)v1; // 0x539bf9
    int64_t * v4 = (int64_t *)(*(int64_t *)(*v3 + 24) + 8 * v2); // 0x539c08
    int64_t v5 = *v4; // 0x539c08
    int64_t v6 = v5; // 0x539c0e
    if (v5 == 0) {
        int64_t v7 = function_4efd30(160); // 0x53ac9d
        *(int32_t *)(v7 + 8) = 0;
        *(int64_t *)(v7 + 16) = 0;
        *(int64_t *)(v7 + 24) = 0;
        *(char *)(v7 + 32) = 0;
        *(int64_t *)(v7 + 36) = 0;
        *(int64_t *)(v7 + 48) = 0;
        *(int64_t *)(v7 + 56) = 0;
        *(int64_t *)v7 = (int64_t)&g93;
        *(int64_t *)(v7 + 64) = 0;
        *(int64_t *)(v7 + 72) = 0;
        *(int64_t *)(v7 + 80) = 0;
        *(int64_t *)(v7 + 88) = 0;
        *(int64_t *)(v7 + 96) = 0;
        *(int32_t *)(v7 + 104) = 0;
        *(char *)(v7 + 152) = 0;
        function_50b7d0(v7, v1);
        function_566890(*v3, v7, v2);
        v6 = *v4;
    }
    char v8 = 0; // bp-120, 0x539c45
    int64_t v9; // bp-136, 0x539b70
    int64_t v10 = (int64_t)&v9; // 0x539c4d
    v9 = (int64_t)&v8;
    if (*(char *)(v6 + 32) != 0) {
        // 0x539c64
        function_52b8e0(v10, 32);
    }
    // 0x539c73
    char * v11; // bp-104, 0x539b70
    int64_t v12 = (int64_t)&v11; // 0x539c73
    char v13 = 0; // bp-88, 0x539c8c
    v11 = (int64_t)&v13;
    function_52b8e0(v12, 32);
    int32_t v14 = *(int32_t *)(v6 + 104); // 0x539cca
    int32_t v15 = v14; // bp-140, 0x539cdb
    int64_t v16 = (int64_t)&v15; // 0x539cea
    int64_t v17 = 0; // 0x539d13
    unsigned char v18; // 0x539d19
    uint32_t v19; // 0x539d25
    if ((char)v14 < 5) {
        // 0x539d19
        v18 = *(char *)v16;
        v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g72);
        return (int64_t)v19 + (int64_t)&g72;
    }
    while ((int32_t)v17 <= 2) {
        // 0x539da4
        v17++;
        int64_t v20 = v17; // 0x539db2
        if (*(char *)(v17 + v16) < 5) {
            // 0x539d19
            v18 = *(char *)(v20 + v16);
            v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g72);
            return (int64_t)v19 + (int64_t)&g72;
        }
    }
    // 0x53ad89
    function_52cc60(a9, v12);
    char v21; // 0x539b70
    if (result2 != 0) {
        if ((int32_t)a3 == -1) {
            uint64_t result = *(int64_t *)(result2 + 16); // 0x53ab00
            if (result >= *(int64_t *)(result2 + 24)) {
                // 0x53ae4f
                return result;
            }
            // 0x53ab0e
            if (*(int32_t *)result == -1) {
                // 0x53ae4f
                return 0xffffffff;
            }
        }
        if (a4 == 0) {
            goto lab_0x539e70;
        } else {
            // 0x539e5a
            v21 = 0;
            if ((int32_t)a5 == -1) {
                goto lab_0x53a71a;
            } else {
                goto lab_0x539e68;
            }
        }
    } else {
        if (a4 == 0) {
            goto lab_0x539e68;
        } else {
            // 0x53a192
            v21 = 1;
            if ((int32_t)a5 != -1) {
                goto lab_0x539e70;
            } else {
                goto lab_0x53a71a;
            }
        }
    }
  lab_0x539e70:;
    int64_t v22 = (int64_t)v11; // 0x539e75
    if (v12 + 16 != v22) {
        // 0x539e96
        function_4eeb50(v22);
    }
    // 0x539ead
    if (v9 != v10 + 16) {
        // 0x539ec3
        function_4eeb50(v9);
    }
    // 0x539eda
    __readfsqword(40);
    return result2;
  lab_0x539e68:;
    int32_t * v23 = (int32_t *)a8; // 0x539e6d
    *v23 = *v23 | 2;
    goto lab_0x539e70;
  lab_0x53a71a:;
    uint64_t result3 = *(int64_t *)(a4 + 16); // 0x53a71a
    if (result3 >= *(int64_t *)(a4 + 24)) {
        // 0x53ae4f
        return result3;
    }
    // 0x53a728
    if (*(int32_t *)result3 == -1) {
        // 0x53ae4f
        return 0xffffffff;
    }
    // 0x53a733
    if (v21 != 0) {
        goto lab_0x539e70;
    } else {
        goto lab_0x539e68;
    }
}

// Address range: 0x53af80 - 0x53c210
int64_t function_53af80(int64_t a1, int64_t result2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = a6 + 208; // 0x53af88
    __readfsqword(40);
    function_50ab00(v1);
    int64_t v2 = function_566390(&g97); // 0x53b001
    int64_t * v3 = (int64_t *)v1; // 0x53b009
    int64_t * v4 = (int64_t *)(*(int64_t *)(*v3 + 24) + 8 * v2); // 0x53b018
    int64_t v5 = *v4; // 0x53b018
    int64_t v6 = v5; // 0x53b01e
    if (v5 == 0) {
        int64_t v7 = function_4efd30(160); // 0x53c0ad
        *(int32_t *)(v7 + 8) = 0;
        *(int64_t *)(v7 + 16) = 0;
        *(int64_t *)(v7 + 24) = 0;
        *(char *)(v7 + 32) = 0;
        *(int64_t *)(v7 + 36) = 0;
        *(int64_t *)(v7 + 48) = 0;
        *(int64_t *)(v7 + 56) = 0;
        *(int64_t *)v7 = (int64_t)&g94;
        *(int64_t *)(v7 + 64) = 0;
        *(int64_t *)(v7 + 72) = 0;
        *(int64_t *)(v7 + 80) = 0;
        *(int64_t *)(v7 + 88) = 0;
        *(int64_t *)(v7 + 96) = 0;
        *(int32_t *)(v7 + 104) = 0;
        *(char *)(v7 + 152) = 0;
        function_50bde0(v7, v1);
        function_566890(*v3, v7, v2);
        v6 = *v4;
    }
    char v8 = 0; // bp-120, 0x53b055
    int64_t v9; // bp-136, 0x53af80
    int64_t v10 = (int64_t)&v9; // 0x53b05d
    v9 = (int64_t)&v8;
    if (*(char *)(v6 + 32) != 0) {
        // 0x53b074
        function_52b8e0(v10, 32);
    }
    // 0x53b083
    char * v11; // bp-104, 0x53af80
    int64_t v12 = (int64_t)&v11; // 0x53b083
    char v13 = 0; // bp-88, 0x53b09c
    v11 = (int64_t)&v13;
    function_52b8e0(v12, 32);
    int32_t v14 = *(int32_t *)(v6 + 104); // 0x53b0da
    int32_t v15 = v14; // bp-140, 0x53b0eb
    int64_t v16 = (int64_t)&v15; // 0x53b0fa
    int64_t v17 = 0; // 0x53b123
    unsigned char v18; // 0x53b129
    uint32_t v19; // 0x53b135
    if ((char)v14 < 5) {
        // 0x53b129
        v18 = *(char *)v16;
        v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g73);
        return (int64_t)v19 + (int64_t)&g73;
    }
    while ((int32_t)v17 <= 2) {
        // 0x53b1b4
        v17++;
        int64_t v20 = v17; // 0x53b1c2
        if (*(char *)(v17 + v16) < 5) {
            // 0x53b129
            v18 = *(char *)(v20 + v16);
            v19 = *(int32_t *)(4 * (int64_t)v18 + (int64_t)&g73);
            return (int64_t)v19 + (int64_t)&g73;
        }
    }
    // 0x53c199
    function_52cc60(a9, v12);
    char v21; // 0x53af80
    if (result2 != 0) {
        if ((int32_t)a3 == -1) {
            uint64_t result = *(int64_t *)(result2 + 16); // 0x53bf10
            if (result >= *(int64_t *)(result2 + 24)) {
                // 0x53c25f
                return result;
            }
            // 0x53bf1e
            if (*(int32_t *)result == -1) {
                // 0x53c25f
                return 0xffffffff;
            }
        }
        if (a4 == 0) {
            goto lab_0x53b280;
        } else {
            // 0x53b26a
            v21 = 0;
            if ((int32_t)a5 == -1) {
                goto lab_0x53bb2a;
            } else {
                goto lab_0x53b278;
            }
        }
    } else {
        if (a4 == 0) {
            goto lab_0x53b278;
        } else {
            // 0x53b5a2
            v21 = 1;
            if ((int32_t)a5 != -1) {
                goto lab_0x53b280;
            } else {
                goto lab_0x53bb2a;
            }
        }
    }
  lab_0x53b280:;
    int64_t v22 = (int64_t)v11; // 0x53b285
    if (v12 + 16 != v22) {
        // 0x53b2a6
        function_4eeb50(v22);
    }
    // 0x53b2bd
    if (v9 != v10 + 16) {
        // 0x53b2d3
        function_4eeb50(v9);
    }
    // 0x53b2ea
    __readfsqword(40);
    return result2;
  lab_0x53b278:;
    int32_t * v23 = (int32_t *)a8; // 0x53b27d
    *v23 = *v23 | 2;
    goto lab_0x53b280;
  lab_0x53bb2a:;
    uint64_t result3 = *(int64_t *)(a4 + 16); // 0x53bb2a
    if (result3 >= *(int64_t *)(a4 + 24)) {
        // 0x53c25f
        return result3;
    }
    // 0x53bb38
    if (*(int32_t *)result3 == -1) {
        // 0x53c25f
        return 0xffffffff;
    }
    // 0x53bb43
    if (v21 != 0) {
        goto lab_0x53b280;
    } else {
        goto lab_0x53b278;
    }
}
