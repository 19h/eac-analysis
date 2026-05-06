/*
 * Targeted RetDec C for native executable gap queue batch 1386.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3b28f-0x3b48f rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b48f-0x3b68f rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b68f-0x3b88f rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b88f-0x3ba8f rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ba8f-0x3bc8f rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bc8f-0x3be8f rank=- name=- kind=- bytes=- uncovered=-
 *   0x3be8f-0x3c08f rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c08f-0x3c28f rank=- name=- kind=- bytes=- uncovered=-
 *   0x5034d6-0x5036d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5036d6-0x5038d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5038d6-0x503ad6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x503ad6-0x503cd6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x503cd6-0x503ed6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x503ed6-0x5040d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5040d6-0x5042d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5042d6-0x5044d6 rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
typedef struct { uint8_t bytes[108]; } int864_t;
typedef struct { uint8_t bytes[32]; } int256_t;
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
int64_t entry_point();
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
uint32_t llvm_bswap_i32(uint32_t value);
uint64_t llvm_ctlz_i64(uint64_t value, bool is_zero_undef);
int __popcountdi2(uint64_t value);
void __asm_int(int32_t interrupt);
int64_t __asm_int1();
int64_t __asm_int3();
int32_t __asm_in(uint16_t port);
int32_t __asm_in_133(uint16_t port);
int32_t __asm_in_134(uint16_t port);
int32_t __asm_in_135(uint16_t port);
char __asm_in_136(uint16_t port);
char __asm_in_137(uint16_t port);
int32_t __asm_in_138(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_134(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_out_136(uint16_t port, int32_t value);
void __asm_out_137(uint16_t port, char value);
void __asm_out_138(uint16_t port, char value);
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint32_t __readfsdword(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
void __writefsbyte(int64_t offset, uint8_t value);
void __writegsbyte(int64_t offset, uint8_t value);
void __writegsdword(int64_t offset, uint32_t value);
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
int64_t unknown_b6ccb9(void);
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
void __asm_rcl_133(int32_t value);
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt();
void __asm_clts(void);
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_emms(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
void __asm_fldenv(int224_t value);
int64_t __asm_fnstenv();
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
int128_t __asm_movq();
int128_t __asm_aesimc(int128_t value);
int128_t __asm_aeskeygenassist(int128_t value, int imm);
int128_t __asm_movdqu(int128_t value);
int128_t __asm_movdqu_133(int128_t value);
int128_t __asm_movapd(int128_t value);
int128_t __asm_movaps_133(int128_t value);
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
int128_t __asm_orpd(int128_t left, int128_t right);
int128_t __asm_vdivpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int256_t __asm_vpcmpeqw(int256_t left, int256_t right);
int256_t __asm_vprord(int256_t value, int count);
int256_t __asm_vpaddd(int256_t left, int256_t right);
int256_t __asm_vpxord(int256_t left, int256_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psadbw(int128_t left, int128_t right);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_vpunpckhdq(int128_t left, int128_t right);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
int128_t __asm_pmaxub(int128_t left, int128_t right);
int128_t __asm_pmaxsw(int128_t left, int128_t right);
int128_t __asm_packsswb(int128_t left, int128_t right);
int128_t __asm_pmulhw(int128_t left, int128_t right);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_addps(int128_t left, int128_t right);
int128_t __asm_maxps(int128_t left, int128_t right);
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
int128_t __asm_movups_133();
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
struct _IO_FILE *popen(const char *command, const char *type);
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
void *__memcpy_chk(void *dest, const void *src, size_t len, size_t destlen);
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

int64_t function_2a2f4();
int64_t function_2a2fa();
int64_t function_2a320();
int64_t function_2a421();
int64_t function_2a521();
int64_t function_2a5d3();
int64_t function_2a672();
int64_t function_2a711();
int64_t function_2a73a();
int64_t function_2a78b();
int64_t function_2a98d();
int64_t function_2a98e();
int64_t function_2a9bb();
int64_t function_2a9c1();
int64_t function_2a9c7();
int64_t function_2a9cd();
int64_t function_2a9d3();
int64_t function_2a9d4();
int64_t function_2a9d5();
int64_t function_2a9d6();
int64_t function_2a9d7();
int64_t function_2a9d8();
int64_t function_2a9d9();
int64_t function_2a9da();
int64_t function_3b092();
int64_t function_3b28f(int64_t a1);
int64_t function_3b299(int64_t a1, int64_t a2);
int64_t function_3b32f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b3cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b464(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b503(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b59c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b635(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b6d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b80f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b8a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b941(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b9da(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ba73(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bb0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bba5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bc3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bcd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bd70(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3be09(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bea2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bf3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bfd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c06d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4fc010();
int64_t function_4fc7e0();
int64_t function_4feb80();
int64_t function_5029a0();
int64_t function_5033d0();
int64_t function_5034d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5034f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_503540(int64_t a1, int64_t a2, int64_t a3);
int64_t function_503590(int64_t a1, int64_t a2);
int64_t function_5035e0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_503630(int64_t a1, int64_t a2, int64_t a3);
int64_t function_503680(int64_t a1, int64_t a2);
int64_t function_5036c0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_503802(void);
int64_t function_503846(void);
int64_t function_503848(void);
int64_t function_503850(int64_t a1, int64_t a2, int64_t a3);
int64_t function_50398a(void);
int64_t function_5039ce(void);
int64_t function_5039d0(void);
int64_t function_5039e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_503ad4(void);
int64_t function_503b37(void);
int64_t function_503b40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_503c4a(void);
int64_t function_503c82(void);
int64_t function_503c90(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_503d3c(void);
int64_t function_503d70(int64_t a1, int64_t a2, int64_t a3);
int64_t function_503e8a(void);
int64_t function_503eca(void);
int64_t function_503ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_503fc4(void);
int64_t function_504027(void);
int64_t function_504030(int64_t a1, int64_t a2, int64_t a3);
int64_t function_50413a(void);
int64_t function_504172(void);
int64_t function_504180(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_504234(void);
int64_t function_504270(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_50431c(void);
int64_t function_504350(int64_t a1, int64_t a2, int64_t a3);
int64_t function_50446a(void);
int64_t function_5044aa(void);
int64_t function_54cb80();
int64_t function_54cf10();

// Address range: 0x3b28f - 0x3b299
int64_t function_3b28f(int64_t a1) {
    // 0x3b28f
    return function_3b092();
}

// Address range: 0x3b299 - 0x3b32f
int64_t function_3b299(int64_t a1, int64_t a2) {
    // 0x3b299
    int128_t v1; // 0x3b299
    int64_t v2 = __asm_movaps(v1); // 0x3b2a2
    int64_t v3 = __asm_movaps(v1); // 0x3b2a6
    int64_t v4 = __asm_movaps(v1); // 0x3b2ab
    int64_t v5 = __asm_movaps(v1); // 0x3b2b1
    int64_t v6 = __asm_movaps(v1); // 0x3b2b7
    int64_t v7 = __asm_movaps(v1); // 0x3b2bd
    int64_t v8 = __asm_movaps(v1); // 0x3b2c3
    int64_t v9 = __asm_movaps(v1); // 0x3b2c9
    int64_t v10 = __asm_movaps(v1); // 0x3b2cf
    int64_t v11 = __asm_movaps(v1); // 0x3b2d8
    int64_t result = function_2a78b(); // 0x3b2e1
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3b32f - 0x3b3cb
int64_t function_3b32f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b32f
    int128_t v1; // 0x3b32f
    int64_t v2 = __asm_movaps(v1); // 0x3b33e
    int64_t v3 = __asm_movaps(v1); // 0x3b342
    int64_t v4 = __asm_movaps(v1); // 0x3b347
    int64_t v5 = __asm_movaps(v1); // 0x3b34d
    int64_t v6 = __asm_movaps(v1); // 0x3b353
    int64_t v7 = __asm_movaps(v1); // 0x3b359
    int64_t v8 = __asm_movaps(v1); // 0x3b35f
    int64_t v9 = __asm_movaps(v1); // 0x3b365
    int64_t v10 = __asm_movaps(v1); // 0x3b36b
    int64_t v11 = __asm_movaps(v1); // 0x3b374
    int64_t result = function_2a320(); // 0x3b37d
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3b3cb - 0x3b464
int64_t function_3b3cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b3cb
    int128_t v1; // 0x3b3cb
    int64_t v2 = __asm_movaps(v1); // 0x3b3d7
    int64_t v3 = __asm_movaps(v1); // 0x3b3db
    int64_t v4 = __asm_movaps(v1); // 0x3b3e0
    int64_t v5 = __asm_movaps(v1); // 0x3b3e6
    int64_t v6 = __asm_movaps(v1); // 0x3b3ec
    int64_t v7 = __asm_movaps(v1); // 0x3b3f2
    int64_t v8 = __asm_movaps(v1); // 0x3b3f8
    int64_t v9 = __asm_movaps(v1); // 0x3b3fe
    int64_t v10 = __asm_movaps(v1); // 0x3b404
    int64_t v11 = __asm_movaps(v1); // 0x3b40d
    int64_t result = function_2a73a(); // 0x3b416
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3b464 - 0x3b503
int64_t function_3b464(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b464
    int128_t v1; // 0x3b464
    int64_t v2 = __asm_movaps(v1); // 0x3b476
    int64_t v3 = __asm_movaps(v1); // 0x3b47a
    int64_t v4 = __asm_movaps(v1); // 0x3b47f
    int64_t v5 = __asm_movaps(v1); // 0x3b485
    int64_t v6 = __asm_movaps(v1); // 0x3b48b
    int64_t v7 = __asm_movaps(v1); // 0x3b491
    int64_t v8 = __asm_movaps(v1); // 0x3b497
    int64_t v9 = __asm_movaps(v1); // 0x3b49d
    int64_t v10 = __asm_movaps(v1); // 0x3b4a3
    int64_t v11 = __asm_movaps(v1); // 0x3b4ac
    int64_t result = function_2a421(); // 0x3b4b5
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3b503 - 0x3b59c
int64_t function_3b503(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b503
    int128_t v1; // 0x3b503
    int64_t v2 = __asm_movaps(v1); // 0x3b50f
    int64_t v3 = __asm_movaps(v1); // 0x3b513
    int64_t v4 = __asm_movaps(v1); // 0x3b518
    int64_t v5 = __asm_movaps(v1); // 0x3b51e
    int64_t v6 = __asm_movaps(v1); // 0x3b524
    int64_t v7 = __asm_movaps(v1); // 0x3b52a
    int64_t v8 = __asm_movaps(v1); // 0x3b530
    int64_t v9 = __asm_movaps(v1); // 0x3b536
    int64_t v10 = __asm_movaps(v1); // 0x3b53c
    int64_t v11 = __asm_movaps(v1); // 0x3b545
    int64_t result = function_2a2f4(); // 0x3b54e
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3b59c - 0x3b635
int64_t function_3b59c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b59c
    int128_t v1; // 0x3b59c
    int64_t v2 = __asm_movaps(v1); // 0x3b5a8
    int64_t v3 = __asm_movaps(v1); // 0x3b5ac
    int64_t v4 = __asm_movaps(v1); // 0x3b5b1
    int64_t v5 = __asm_movaps(v1); // 0x3b5b7
    int64_t v6 = __asm_movaps(v1); // 0x3b5bd
    int64_t v7 = __asm_movaps(v1); // 0x3b5c3
    int64_t v8 = __asm_movaps(v1); // 0x3b5c9
    int64_t v9 = __asm_movaps(v1); // 0x3b5cf
    int64_t v10 = __asm_movaps(v1); // 0x3b5d5
    int64_t v11 = __asm_movaps(v1); // 0x3b5de
    int64_t result = function_2a521(); // 0x3b5e7
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3b635 - 0x3b6d1
int64_t function_3b635(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b635
    int128_t v1; // 0x3b635
    int64_t v2 = __asm_movaps(v1); // 0x3b644
    int64_t v3 = __asm_movaps(v1); // 0x3b648
    int64_t v4 = __asm_movaps(v1); // 0x3b64d
    int64_t v5 = __asm_movaps(v1); // 0x3b653
    int64_t v6 = __asm_movaps(v1); // 0x3b659
    int64_t v7 = __asm_movaps(v1); // 0x3b65f
    int64_t v8 = __asm_movaps(v1); // 0x3b665
    int64_t v9 = __asm_movaps(v1); // 0x3b66b
    int64_t v10 = __asm_movaps(v1); // 0x3b671
    int64_t v11 = __asm_movaps(v1); // 0x3b67a
    int64_t result = function_2a711(); // 0x3b683
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3b6d1 - 0x3b770
int64_t function_3b6d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b6d1
    int128_t v1; // 0x3b6d1
    int64_t v2 = __asm_movaps(v1); // 0x3b6e3
    int64_t v3 = __asm_movaps(v1); // 0x3b6e7
    int64_t v4 = __asm_movaps(v1); // 0x3b6ec
    int64_t v5 = __asm_movaps(v1); // 0x3b6f2
    int64_t v6 = __asm_movaps(v1); // 0x3b6f8
    int64_t v7 = __asm_movaps(v1); // 0x3b6fe
    int64_t v8 = __asm_movaps(v1); // 0x3b704
    int64_t v9 = __asm_movaps(v1); // 0x3b70a
    int64_t v10 = __asm_movaps(v1); // 0x3b710
    int64_t v11 = __asm_movaps(v1); // 0x3b719
    int64_t result = function_2a5d3(); // 0x3b722
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3b770 - 0x3b80f
int64_t function_3b770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b770
    int128_t v1; // 0x3b770
    int64_t v2 = __asm_movaps(v1); // 0x3b782
    int64_t v3 = __asm_movaps(v1); // 0x3b786
    int64_t v4 = __asm_movaps(v1); // 0x3b78b
    int64_t v5 = __asm_movaps(v1); // 0x3b791
    int64_t v6 = __asm_movaps(v1); // 0x3b797
    int64_t v7 = __asm_movaps(v1); // 0x3b79d
    int64_t v8 = __asm_movaps(v1); // 0x3b7a3
    int64_t v9 = __asm_movaps(v1); // 0x3b7a9
    int64_t v10 = __asm_movaps(v1); // 0x3b7af
    int64_t v11 = __asm_movaps(v1); // 0x3b7b8
    int64_t result = function_2a672(); // 0x3b7c1
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3b80f - 0x3b8a8
int64_t function_3b80f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b80f
    int128_t v1; // 0x3b80f
    int64_t v2 = __asm_movaps(v1); // 0x3b81b
    int64_t v3 = __asm_movaps(v1); // 0x3b81f
    int64_t v4 = __asm_movaps(v1); // 0x3b824
    int64_t v5 = __asm_movaps(v1); // 0x3b82a
    int64_t v6 = __asm_movaps(v1); // 0x3b830
    int64_t v7 = __asm_movaps(v1); // 0x3b836
    int64_t v8 = __asm_movaps(v1); // 0x3b83c
    int64_t v9 = __asm_movaps(v1); // 0x3b842
    int64_t v10 = __asm_movaps(v1); // 0x3b848
    int64_t v11 = __asm_movaps(v1); // 0x3b851
    int64_t result = function_2a9c1(); // 0x3b85a
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3b8a8 - 0x3b941
int64_t function_3b8a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b8a8
    int128_t v1; // 0x3b8a8
    int64_t v2 = __asm_movaps(v1); // 0x3b8b4
    int64_t v3 = __asm_movaps(v1); // 0x3b8b8
    int64_t v4 = __asm_movaps(v1); // 0x3b8bd
    int64_t v5 = __asm_movaps(v1); // 0x3b8c3
    int64_t v6 = __asm_movaps(v1); // 0x3b8c9
    int64_t v7 = __asm_movaps(v1); // 0x3b8cf
    int64_t v8 = __asm_movaps(v1); // 0x3b8d5
    int64_t v9 = __asm_movaps(v1); // 0x3b8db
    int64_t v10 = __asm_movaps(v1); // 0x3b8e1
    int64_t v11 = __asm_movaps(v1); // 0x3b8ea
    int64_t result = function_2a9c7(); // 0x3b8f3
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3b941 - 0x3b9da
int64_t function_3b941(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b941
    int128_t v1; // 0x3b941
    int64_t v2 = __asm_movaps(v1); // 0x3b94d
    int64_t v3 = __asm_movaps(v1); // 0x3b951
    int64_t v4 = __asm_movaps(v1); // 0x3b956
    int64_t v5 = __asm_movaps(v1); // 0x3b95c
    int64_t v6 = __asm_movaps(v1); // 0x3b962
    int64_t v7 = __asm_movaps(v1); // 0x3b968
    int64_t v8 = __asm_movaps(v1); // 0x3b96e
    int64_t v9 = __asm_movaps(v1); // 0x3b974
    int64_t v10 = __asm_movaps(v1); // 0x3b97a
    int64_t v11 = __asm_movaps(v1); // 0x3b983
    int64_t result = function_2a9cd(); // 0x3b98c
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3b9da - 0x3ba73
int64_t function_3b9da(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b9da
    int128_t v1; // 0x3b9da
    int64_t v2 = __asm_movaps(v1); // 0x3b9e6
    int64_t v3 = __asm_movaps(v1); // 0x3b9ea
    int64_t v4 = __asm_movaps(v1); // 0x3b9ef
    int64_t v5 = __asm_movaps(v1); // 0x3b9f5
    int64_t v6 = __asm_movaps(v1); // 0x3b9fb
    int64_t v7 = __asm_movaps(v1); // 0x3ba01
    int64_t v8 = __asm_movaps(v1); // 0x3ba07
    int64_t v9 = __asm_movaps(v1); // 0x3ba0d
    int64_t v10 = __asm_movaps(v1); // 0x3ba13
    int64_t v11 = __asm_movaps(v1); // 0x3ba1c
    int64_t result = function_2a98e(); // 0x3ba25
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3ba73 - 0x3bb0c
int64_t function_3ba73(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ba73
    int128_t v1; // 0x3ba73
    int64_t v2 = __asm_movaps(v1); // 0x3ba7f
    int64_t v3 = __asm_movaps(v1); // 0x3ba83
    int64_t v4 = __asm_movaps(v1); // 0x3ba88
    int64_t v5 = __asm_movaps(v1); // 0x3ba8e
    int64_t v6 = __asm_movaps(v1); // 0x3ba94
    int64_t v7 = __asm_movaps(v1); // 0x3ba9a
    int64_t v8 = __asm_movaps(v1); // 0x3baa0
    int64_t v9 = __asm_movaps(v1); // 0x3baa6
    int64_t v10 = __asm_movaps(v1); // 0x3baac
    int64_t v11 = __asm_movaps(v1); // 0x3bab5
    int64_t result = function_2a9bb(); // 0x3babe
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3bb0c - 0x3bba5
int64_t function_3bb0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bb0c
    int128_t v1; // 0x3bb0c
    int64_t v2 = __asm_movaps(v1); // 0x3bb18
    int64_t v3 = __asm_movaps(v1); // 0x3bb1c
    int64_t v4 = __asm_movaps(v1); // 0x3bb21
    int64_t v5 = __asm_movaps(v1); // 0x3bb27
    int64_t v6 = __asm_movaps(v1); // 0x3bb2d
    int64_t v7 = __asm_movaps(v1); // 0x3bb33
    int64_t v8 = __asm_movaps(v1); // 0x3bb39
    int64_t v9 = __asm_movaps(v1); // 0x3bb3f
    int64_t v10 = __asm_movaps(v1); // 0x3bb45
    int64_t v11 = __asm_movaps(v1); // 0x3bb4e
    int64_t result = function_2a2fa(); // 0x3bb57
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3bba5 - 0x3bc3e
int64_t function_3bba5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bba5
    int128_t v1; // 0x3bba5
    int64_t v2 = __asm_movaps(v1); // 0x3bbb1
    int64_t v3 = __asm_movaps(v1); // 0x3bbb5
    int64_t v4 = __asm_movaps(v1); // 0x3bbba
    int64_t v5 = __asm_movaps(v1); // 0x3bbc0
    int64_t v6 = __asm_movaps(v1); // 0x3bbc6
    int64_t v7 = __asm_movaps(v1); // 0x3bbcc
    int64_t v8 = __asm_movaps(v1); // 0x3bbd2
    int64_t v9 = __asm_movaps(v1); // 0x3bbd8
    int64_t v10 = __asm_movaps(v1); // 0x3bbde
    int64_t v11 = __asm_movaps(v1); // 0x3bbe7
    int64_t result = function_2a9d3(); // 0x3bbf0
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3bc3e - 0x3bcd7
int64_t function_3bc3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bc3e
    int128_t v1; // 0x3bc3e
    int64_t v2 = __asm_movaps(v1); // 0x3bc4a
    int64_t v3 = __asm_movaps(v1); // 0x3bc4e
    int64_t v4 = __asm_movaps(v1); // 0x3bc53
    int64_t v5 = __asm_movaps(v1); // 0x3bc59
    int64_t v6 = __asm_movaps(v1); // 0x3bc5f
    int64_t v7 = __asm_movaps(v1); // 0x3bc65
    int64_t v8 = __asm_movaps(v1); // 0x3bc6b
    int64_t v9 = __asm_movaps(v1); // 0x3bc71
    int64_t v10 = __asm_movaps(v1); // 0x3bc77
    int64_t v11 = __asm_movaps(v1); // 0x3bc80
    int64_t result = function_2a9d4(); // 0x3bc89
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3bcd7 - 0x3bd70
int64_t function_3bcd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bcd7
    int128_t v1; // 0x3bcd7
    int64_t v2 = __asm_movaps(v1); // 0x3bce3
    int64_t v3 = __asm_movaps(v1); // 0x3bce7
    int64_t v4 = __asm_movaps(v1); // 0x3bcec
    int64_t v5 = __asm_movaps(v1); // 0x3bcf2
    int64_t v6 = __asm_movaps(v1); // 0x3bcf8
    int64_t v7 = __asm_movaps(v1); // 0x3bcfe
    int64_t v8 = __asm_movaps(v1); // 0x3bd04
    int64_t v9 = __asm_movaps(v1); // 0x3bd0a
    int64_t v10 = __asm_movaps(v1); // 0x3bd10
    int64_t v11 = __asm_movaps(v1); // 0x3bd19
    int64_t result = function_2a9d5(); // 0x3bd22
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3bd70 - 0x3be09
int64_t function_3bd70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bd70
    int128_t v1; // 0x3bd70
    int64_t v2 = __asm_movaps(v1); // 0x3bd7c
    int64_t v3 = __asm_movaps(v1); // 0x3bd80
    int64_t v4 = __asm_movaps(v1); // 0x3bd85
    int64_t v5 = __asm_movaps(v1); // 0x3bd8b
    int64_t v6 = __asm_movaps(v1); // 0x3bd91
    int64_t v7 = __asm_movaps(v1); // 0x3bd97
    int64_t v8 = __asm_movaps(v1); // 0x3bd9d
    int64_t v9 = __asm_movaps(v1); // 0x3bda3
    int64_t v10 = __asm_movaps(v1); // 0x3bda9
    int64_t v11 = __asm_movaps(v1); // 0x3bdb2
    int64_t result = function_2a9d8(); // 0x3bdbb
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3be09 - 0x3bea2
int64_t function_3be09(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3be09
    int128_t v1; // 0x3be09
    int64_t v2 = __asm_movaps(v1); // 0x3be15
    int64_t v3 = __asm_movaps(v1); // 0x3be19
    int64_t v4 = __asm_movaps(v1); // 0x3be1e
    int64_t v5 = __asm_movaps(v1); // 0x3be24
    int64_t v6 = __asm_movaps(v1); // 0x3be2a
    int64_t v7 = __asm_movaps(v1); // 0x3be30
    int64_t v8 = __asm_movaps(v1); // 0x3be36
    int64_t v9 = __asm_movaps(v1); // 0x3be3c
    int64_t v10 = __asm_movaps(v1); // 0x3be42
    int64_t v11 = __asm_movaps(v1); // 0x3be4b
    int64_t result = function_2a9d9(); // 0x3be54
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3bea2 - 0x3bf3b
int64_t function_3bea2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bea2
    int128_t v1; // 0x3bea2
    int64_t v2 = __asm_movaps(v1); // 0x3beae
    int64_t v3 = __asm_movaps(v1); // 0x3beb2
    int64_t v4 = __asm_movaps(v1); // 0x3beb7
    int64_t v5 = __asm_movaps(v1); // 0x3bebd
    int64_t v6 = __asm_movaps(v1); // 0x3bec3
    int64_t v7 = __asm_movaps(v1); // 0x3bec9
    int64_t v8 = __asm_movaps(v1); // 0x3becf
    int64_t v9 = __asm_movaps(v1); // 0x3bed5
    int64_t v10 = __asm_movaps(v1); // 0x3bedb
    int64_t v11 = __asm_movaps(v1); // 0x3bee4
    int64_t result = function_2a9da(); // 0x3beed
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3bf3b - 0x3bfd4
int64_t function_3bf3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bf3b
    int128_t v1; // 0x3bf3b
    int64_t v2 = __asm_movaps(v1); // 0x3bf47
    int64_t v3 = __asm_movaps(v1); // 0x3bf4b
    int64_t v4 = __asm_movaps(v1); // 0x3bf50
    int64_t v5 = __asm_movaps(v1); // 0x3bf56
    int64_t v6 = __asm_movaps(v1); // 0x3bf5c
    int64_t v7 = __asm_movaps(v1); // 0x3bf62
    int64_t v8 = __asm_movaps(v1); // 0x3bf68
    int64_t v9 = __asm_movaps(v1); // 0x3bf6e
    int64_t v10 = __asm_movaps(v1); // 0x3bf74
    int64_t v11 = __asm_movaps(v1); // 0x3bf7d
    int64_t result = function_2a98d(); // 0x3bf86
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3bfd4 - 0x3c06d
int64_t function_3bfd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bfd4
    int128_t v1; // 0x3bfd4
    int64_t v2 = __asm_movaps(v1); // 0x3bfe0
    int64_t v3 = __asm_movaps(v1); // 0x3bfe4
    int64_t v4 = __asm_movaps(v1); // 0x3bfe9
    int64_t v5 = __asm_movaps(v1); // 0x3bfef
    int64_t v6 = __asm_movaps(v1); // 0x3bff5
    int64_t v7 = __asm_movaps(v1); // 0x3bffb
    int64_t v8 = __asm_movaps(v1); // 0x3c001
    int64_t v9 = __asm_movaps(v1); // 0x3c007
    int64_t v10 = __asm_movaps(v1); // 0x3c00d
    int64_t v11 = __asm_movaps(v1); // 0x3c016
    int64_t result = function_2a9d6(); // 0x3c01f
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x3c06d - 0x3c106
int64_t function_3c06d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c06d
    int128_t v1; // 0x3c06d
    int64_t v2 = __asm_movaps(v1); // 0x3c079
    int64_t v3 = __asm_movaps(v1); // 0x3c07d
    int64_t v4 = __asm_movaps(v1); // 0x3c082
    int64_t v5 = __asm_movaps(v1); // 0x3c088
    int64_t v6 = __asm_movaps(v1); // 0x3c08e
    int64_t v7 = __asm_movaps(v1); // 0x3c094
    int64_t v8 = __asm_movaps(v1); // 0x3c09a
    int64_t v9 = __asm_movaps(v1); // 0x3c0a0
    int64_t v10 = __asm_movaps(v1); // 0x3c0a6
    int64_t v11 = __asm_movaps(v1); // 0x3c0af
    int64_t result = function_2a9d7(); // 0x3c0b8
    __asm_movaps_133((int128_t)v2);
    __asm_movaps_133((int128_t)v3);
    __asm_movaps_133((int128_t)v4);
    __asm_movaps_133((int128_t)v5);
    __asm_movaps_133((int128_t)v6);
    __asm_movaps_133((int128_t)v7);
    __asm_movaps_133((int128_t)v8);
    __asm_movaps_133((int128_t)v9);
    __asm_movaps_133((int128_t)v10);
    __asm_movaps_133((int128_t)v11);
    return result;
}

// Address range: 0x5034d6 - 0x5034e8
int64_t function_5034d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x7fe0f001); // 0x5034d6
    *v1 = 2 * *v1;
    int64_t v2; // 0x5034d6
    int64_t v3 = v2;
    *(char *)v3 = *(char *)&v2 + (char)v3;
    int64_t v4 = v2;
    *(char *)v4 = *(char *)&v2 + (char)v4;
    return function_5033d0(a1, a2, a3);
}

// Address range: 0x5034f0 - 0x503533
int64_t function_5034f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & 0xfffffff7 | 8; // 0x5034f7
    int64_t v2 = function_5033d0(a1 + 16, a2, v1); // 0x5034fe
    int64_t v3 = *(int64_t *)(a1 - 8) + a1;
    if (v2 == 0) {
        // 0x503520
        return function_4fc010(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x50350b
    return function_4fc010(v3, 0, v1);
}

// Address range: 0x503540 - 0x503583
int64_t function_503540(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & 0xffffffef | 16; // 0x503547
    int64_t v2 = function_5033d0(a1 + 8, a2, v1); // 0x50354e
    int64_t v3 = *(int64_t *)(a1 - 16) + a1;
    if (v2 == 0) {
        // 0x503570
        return function_4fc010(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x50355b
    return function_4fc010(v3, 0, v1);
}

// Address range: 0x503590 - 0x5035d3
int64_t function_503590(int64_t a1, int64_t a2) {
    // 0x503590
    int64_t v1; // 0x503590
    int64_t v2 = function_5033d0(a1 + 24, a2, v1); // 0x50359b
    int64_t v3 = *(int64_t *)a1 + a1;
    if (v2 == 0) {
        // 0x5035c0
        return function_4fc010(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x5035a8
    return function_4fc010(v3, 0, v1);
}

// Address range: 0x5035e0 - 0x503623
int64_t function_5035e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & 0xfffffff7 | 8; // 0x5035e1
    int64_t v2 = function_5033d0(a1 + 16, a2, v1); // 0x5035eb
    int64_t v3 = *(int64_t *)(a1 - 8) + a1;
    if (v2 == 0) {
        // 0x503610
        return function_4fc010(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x5035f8
    return function_4fc010(v3, 0, v1);
}

// Address range: 0x503630 - 0x503673
int64_t function_503630(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & 0xffffffef | 16; // 0x503631
    int64_t v2 = function_5033d0(a1 + 8, a2, v1); // 0x50363b
    int64_t v3 = *(int64_t *)(a1 - 16) + a1;
    if (v2 == 0) {
        // 0x503660
        return function_4fc010(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x503648
    return function_4fc010(v3, 0, v1);
}

// Address range: 0x503680 - 0x5036bb
int64_t function_503680(int64_t a1, int64_t a2) {
    // 0x503680
    int64_t v1; // 0x503680
    int64_t v2 = function_5033d0(a1 + 24, a2, v1); // 0x503688
    int64_t v3 = *(int64_t *)a1 + a1;
    if (v2 == 0) {
        // 0x5036a8
        return function_4fc010(v3, *(int32_t *)(v3 + 32) | 4, v1);
    }
    // 0x503695
    return function_4fc010(v3, 0, v1);
}

// Address range: 0x5036c0 - 0x503802
// From class:    std::basic_fstream<char, std::char_traits<char> >
// Type:          constructor
int64_t function_5036c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 264; // 0x5036d3
    function_54cb80(v1);
    *(int64_t *)(a1 + 480) = 0;
    *(char *)(a1 + 488) = 0;
    *(char *)(a1 + 489) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    *(int64_t *)(a1 + (int64_t)&g1) = 0;
    *(int64_t *)(a1 + (int64_t)&g2) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x50373d
    *v2 = (int64_t)&g14;
    int64_t * v3 = (int64_t *)v1; // 0x503740
    *v3 = (int64_t)&g15;
    *(int64_t *)(a1 + 8) = 0;
    function_4fc7e0(v1, 0, a3);
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x503764
    *v4 = (int64_t)&g12;
    *v3 = (int64_t)&g13;
    function_4fc7e0(v1, 0, a3);
    int64_t v5 = a1 + 24; // 0x50377b
    *v2 = (int64_t)&g16;
    *v4 = (int64_t)&g17;
    *v3 = (int64_t)&g18;
    function_4feb80(v5);
    function_4fc7e0(v1, (int32_t)v5, (int64_t)&g18);
    int64_t v6 = function_5033d0(v5, a2, a3 & 0xffffffff); // 0x5037b7
    int64_t v7 = *v2 + a1; // 0x5037c3
    if (v6 == 0) {
        // 0x5037e8
        return function_4fc010(v7, *(int32_t *)(v7 + 32) | 4, v5);
    }
    // 0x5037cb
    return function_4fc010(v7, 0, v5);
}

// Address range: 0x503802 - 0x503846
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_503802(void) {
    // 0x503802
    int64_t v1; // 0x503802
    function_5029a0(v1);
    while (true) {
        // 0x503810
        *(int64_t *)(v1 + 8) = 0;
        *(int64_t *)(v1 + 264) = (int64_t)&g3;
        function_54cf10(v1);
        int64_t v2; // 0x503802
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g19;
    }
}

// Address range: 0x503846 - 0x503848
int64_t function_503846(void) {
    // 0x503846
    int64_t result; // 0x503846
    return result;
}

// Address range: 0x503848 - 0x50384d
int64_t function_503848(void) {
    // 0x503848
    int64_t result; // 0x503848
    return result;
}

// Address range: 0x503850 - 0x50398a
// From class:    std::basic_fstream<char, std::char_traits<char> >
// Type:          constructor
int64_t function_503850(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 264; // 0x503863
    function_54cb80(v1);
    *(int64_t *)(a1 + 480) = 0;
    *(char *)(a1 + 488) = 0;
    *(char *)(a1 + 489) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    *(int64_t *)(a1 + (int64_t)&g1) = 0;
    *(int64_t *)(a1 + (int64_t)&g2) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x5038cc
    *v2 = (int64_t)&g14;
    int64_t * v3 = (int64_t *)v1; // 0x5038cf
    *v3 = (int64_t)&g15;
    *(int64_t *)(a1 + 8) = 0;
    function_4fc7e0(v1, 0, a3);
    int64_t * v4 = (int64_t *)(a1 + 16); // 0x5038f3
    *v4 = (int64_t)&g12;
    *v3 = (int64_t)&g13;
    function_4fc7e0(v1, 0, a3);
    int64_t v5 = a1 + 24; // 0x50390a
    *v2 = (int64_t)&g16;
    *v4 = (int64_t)&g17;
    *v3 = (int64_t)&g18;
    function_4feb80(v5);
    function_4fc7e0(v1, (int32_t)v5, (int64_t)&g18);
    int64_t v6 = function_5033d0(v5, v5, a3 & 0xffffffff); // 0x503945
    int64_t v7 = *v2 + a1; // 0x503951
    if (v6 == 0) {
        // 0x503970
        return function_4fc010(v7, *(int32_t *)(v7 + 32) | 4, v5);
    }
    // 0x503959
    return function_4fc010(v7, 0, v5);
}

// Address range: 0x50398a - 0x5039ce
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_50398a(void) {
    // 0x50398a
    int64_t v1; // 0x50398a
    function_5029a0(v1);
    while (true) {
        // 0x503998
        *(int64_t *)(v1 + 8) = 0;
        *(int64_t *)(v1 + 264) = (int64_t)&g3;
        function_54cf10(v1);
        int64_t v2; // 0x50398a
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g19;
    }
}

// Address range: 0x5039ce - 0x5039d0
int64_t function_5039ce(void) {
    // 0x5039ce
    int64_t result; // 0x5039ce
    return result;
}

// Address range: 0x5039d0 - 0x5039d5
int64_t function_5039d0(void) {
    // 0x5039d0
    int64_t result; // 0x5039d0
    return result;
}

// Address range: 0x5039e0 - 0x503ad4
int64_t function_5039e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x5039ee
    int64_t * v2 = (int64_t *)a1; // 0x5039f8
    *v2 = v1;
    int64_t * v3 = (int64_t *)(v1 - 24); // 0x5039fb
    int64_t v4 = *v3; // 0x5039fb
    *(int64_t *)(v4 + a1) = *(int64_t *)(a2 + 24);
    *(int64_t *)(a1 + 8) = 0;
    function_4fc7e0(*v3 + a1, 0, v4);
    int64_t v5 = *(int64_t *)(a2 + 32); // 0x503a1d
    int64_t v6 = a1 + 16; // 0x503a23
    int64_t * v7 = (int64_t *)v6; // 0x503a23
    *v7 = v5;
    int64_t v8 = *(int64_t *)(v5 - 24) + v6; // 0x503a2b
    *(int64_t *)v8 = *(int64_t *)(a2 + 40);
    function_4fc7e0(v8, 0, v4);
    int64_t v9 = *(int64_t *)(a2 + 8); // 0x503a3c
    int64_t v10 = a1 + 24; // 0x503a40
    *v2 = v9;
    *(int64_t *)(*(int64_t *)(v9 - 24) + a1) = *(int64_t *)(a2 + 48);
    *v7 = *(int64_t *)(a2 + 56);
    *v2 = 0;
    int64_t v11 = *(int64_t *)(a2 + 64); // 0x503a69
    *(int64_t *)(*(int64_t *)-24 + a1) = v11;
    *v7 = *(int64_t *)(a2 + 72);
    function_4feb80(v10);
    function_4fc7e0(*v2 + a1, (int32_t)v10, v11);
    int64_t v12 = function_5033d0(v10, a3, a4 & 0xffffffff); // 0x503a99
    int64_t v13 = *v2 + a1; // 0x503aa5
    if (v12 == 0) {
        // 0x503ac0
        return function_4fc010(v13, *(int32_t *)(v13 + 32) | 4, v10);
    }
    // 0x503aad
    return function_4fc010(v13, 0, v10);
}

// Address range: 0x503ad4 - 0x503b37
int64_t function_503ad4(void) {
    // 0x503ad4
    int64_t v1; // 0x503ad4
    function_5029a0(v1);
    int64_t * v2 = (int64_t *)v1; // 0x503ae6
    int64_t v3 = v1 + 16; // 0x503af9
    int64_t * v4 = (int64_t *)v3; // 0x503af9
    while (true) {
        int64_t v5 = *(int64_t *)(v1 + 8); // 0x503ae2
        *v2 = v5;
        *(int64_t *)(*(int64_t *)(v5 - 24) + v1) = *(int64_t *)(v1 + 48);
        *v4 = *(int64_t *)(v1 + 56);
        int64_t v6 = *(int64_t *)(v1 + 32); // 0x503afd
        *v4 = v6;
        *(int64_t *)(*(int64_t *)(v6 - 24) + v3) = *(int64_t *)(v1 + 40);
        int64_t v7 = *(int64_t *)(v1 + 16); // 0x503b12
        *v2 = v7;
        *(int64_t *)(*(int64_t *)(v7 - 24) + v1) = *(int64_t *)(v1 + 24);
        *(int64_t *)(v1 + 8) = 0;
        int64_t v8; // 0x503ad4
        _Unwind_Resume((struct _Unwind_Exception *)v8);
        v8 = (int64_t)&g19;
    }
}

// Address range: 0x503b37 - 0x503b39
int64_t function_503b37(void) {
    // 0x503b37
    int64_t result; // 0x503b37
    return result;
}

// Address range: 0x503b40 - 0x503c4a
// From class:    std::basic_ofstream<char, std::char_traits<char> >
// Type:          constructor
int64_t function_503b40(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 248; // 0x503b53
    function_54cb80(v1);
    *(int64_t *)(a1 + 464) = 0;
    *(char *)(a1 + 472) = 0;
    *(char *)(a1 + 473) = 0;
    *(int64_t *)(a1 + 480) = 0;
    *(int64_t *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x503bbb
    *v2 = (int64_t)&g8;
    int64_t * v3 = (int64_t *)v1; // 0x503bbe
    *v3 = (int64_t)&g9;
    function_4fc7e0(v1, 0, a3);
    int64_t v4 = a1 + 8; // 0x503bd1
    *v3 = (int64_t)&g11;
    *v2 = (int64_t)&g10;
    function_4feb80(v4);
    function_4fc7e0(v1, (int32_t)v4, (int64_t)&g10);
    int64_t v5 = function_5033d0(v4, a2, a3 & 0xffffffef | 16); // 0x503c06
    int64_t v6 = *(int64_t *)(a1 - 16) + a1; // 0x503c12
    if (v5 == 0) {
        // 0x503c30
        return function_4fc010(v6, *(int32_t *)(v6 + 32) | 4, v4);
    }
    // 0x503c1a
    return function_4fc010(v6, 0, v4);
}

// Address range: 0x503c4a - 0x503c82
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_503c4a(void) {
    // 0x503c4a
    int64_t v1; // 0x503c4a
    function_5029a0(v1);
    while (true) {
        // 0x503c58
        *(int64_t *)(v1 + 248) = (int64_t)&g3;
        function_54cf10(v1);
        int64_t v2; // 0x503c4a
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g19;
    }
}

// Address range: 0x503c82 - 0x503c87
int64_t function_503c82(void) {
    // 0x503c82
    int64_t result; // 0x503c82
    return result;
}

// Address range: 0x503c90 - 0x503d3c
int64_t function_503c90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x503c9e
    int64_t v2 = a1 + 8; // 0x503ca8
    int64_t * v3 = (int64_t *)a1; // 0x503cac
    *v3 = v1;
    int64_t v4 = *(int64_t *)(v1 - 24) + a1; // 0x503cb9
    *(int64_t *)v4 = *(int64_t *)(a2 + 16);
    function_4fc7e0(v4, 0, a3);
    *v3 = 0;
    int64_t v5 = *(int64_t *)(a2 + 24); // 0x503cce
    *(int64_t *)(*(int64_t *)-24 + a1) = v5;
    function_4feb80(v2);
    int64_t * v6 = (int64_t *)(a1 - 16); // 0x503ce5
    function_4fc7e0(*v6 + a1, (int32_t)v2, v5);
    int64_t v7 = function_5033d0(v2, a3, a4 & 0xffffffef | 16); // 0x503cfd
    int64_t v8 = *v6 + a1; // 0x503d09
    if (v7 == 0) {
        // 0x503d28
        return function_4fc010(v8, *(int32_t *)(v8 + 32) | 4, v2);
    }
    // 0x503d11
    return function_4fc010(v8, 0, v2);
}

// Address range: 0x503d3c - 0x503d67
int64_t function_503d3c(void) {
    // 0x503d3c
    int64_t v1; // 0x503d3c
    function_5029a0(v1);
    while (true) {
        int64_t v2 = *(int64_t *)(v1 + 8); // 0x503d4a
        *(int64_t *)v1 = v2;
        *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 16);
        int64_t v3; // 0x503d3c
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        v3 = (int64_t)&g19;
    }
}

// Address range: 0x503d70 - 0x503e8a
// From class:    std::basic_ifstream<char, std::char_traits<char> >
// Type:          constructor
int64_t function_503d70(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 256; // 0x503d83
    function_54cb80(v1);
    *(int64_t *)(a1 + 472) = 0;
    *(char *)(a1 + 480) = 0;
    *(char *)(a1 + 481) = 0;
    *(int64_t *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    *(int64_t *)(a1 + (int64_t)&g1) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x503deb
    *v2 = (int64_t)&g4;
    int64_t * v3 = (int64_t *)v1; // 0x503dee
    *v3 = (int64_t)&g5;
    *(int64_t *)(a1 + 8) = 0;
    function_4fc7e0(v1, 0, a3);
    int64_t v4 = a1 + 16; // 0x503e09
    *v3 = (int64_t)&g7;
    *v2 = (int64_t)&g6;
    function_4feb80(v4);
    function_4fc7e0(v1, (int32_t)v4, (int64_t)&g6);
    int64_t v5 = function_5033d0(v4, a2, a3 & 0xfffffff7 | 8); // 0x503e3e
    int64_t v6 = *(int64_t *)(a1 - 8) + a1; // 0x503e4a
    if (v5 == 0) {
        // 0x503e70
        return function_4fc010(v6, *(int32_t *)(v6 + 32) | 4, v4);
    }
    // 0x503e52
    return function_4fc010(v6, 0, v4);
}

// Address range: 0x503e8a - 0x503eca
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_503e8a(void) {
    // 0x503e8a
    int64_t v1; // 0x503e8a
    function_5029a0(v1);
    while (true) {
        // 0x503e98
        *(int64_t *)(v1 + 8) = 0;
        *(int64_t *)(v1 + 256) = (int64_t)&g3;
        function_54cf10(v1);
        int64_t v2; // 0x503e8a
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g19;
    }
}

// Address range: 0x503eca - 0x503ecf
int64_t function_503eca(void) {
    // 0x503eca
    int64_t result; // 0x503eca
    return result;
}

// Address range: 0x503ed0 - 0x503fc4
int64_t function_503ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x503ede
    int64_t * v2 = (int64_t *)a1; // 0x503ee8
    *v2 = v1;
    int64_t * v3 = (int64_t *)(v1 - 24); // 0x503eeb
    int64_t v4 = *v3; // 0x503eeb
    *(int64_t *)(v4 + a1) = *(int64_t *)(a2 + 24);
    *(int64_t *)(a1 + 8) = 0;
    function_4fc7e0(*v3 + a1, 0, v4);
    int64_t v5 = *(int64_t *)(a2 + 32); // 0x503f0d
    int64_t v6 = a1 + 16; // 0x503f13
    int64_t * v7 = (int64_t *)v6; // 0x503f13
    *v7 = v5;
    int64_t v8 = *(int64_t *)(v5 - 24) + v6; // 0x503f1b
    *(int64_t *)v8 = *(int64_t *)(a2 + 40);
    function_4fc7e0(v8, 0, v4);
    int64_t v9 = *(int64_t *)(a2 + 8); // 0x503f2c
    int64_t v10 = a1 + 24; // 0x503f30
    *v2 = v9;
    *(int64_t *)(*(int64_t *)(v9 - 24) + a1) = *(int64_t *)(a2 + 48);
    *v7 = *(int64_t *)(a2 + 56);
    *v2 = 0;
    int64_t v11 = *(int64_t *)(a2 + 64); // 0x503f59
    *(int64_t *)(*(int64_t *)-24 + a1) = v11;
    *v7 = *(int64_t *)(a2 + 72);
    function_4feb80(v10);
    function_4fc7e0(*v2 + a1, (int32_t)v10, v11);
    int64_t v12 = function_5033d0(v10, v11, a4 & 0xffffffff); // 0x503f8a
    int64_t v13 = *v2 + a1; // 0x503f96
    if (v12 == 0) {
        // 0x503fb0
        return function_4fc010(v13, *(int32_t *)(v13 + 32) | 4, v10);
    }
    // 0x503f9e
    return function_4fc010(v13, 0, v10);
}

// Address range: 0x503fc4 - 0x504027
int64_t function_503fc4(void) {
    // 0x503fc4
    int64_t v1; // 0x503fc4
    function_5029a0(v1);
    int64_t * v2 = (int64_t *)v1; // 0x503fd6
    int64_t v3 = v1 + 16; // 0x503fe9
    int64_t * v4 = (int64_t *)v3; // 0x503fe9
    while (true) {
        int64_t v5 = *(int64_t *)(v1 + 8); // 0x503fd2
        *v2 = v5;
        *(int64_t *)(*(int64_t *)(v5 - 24) + v1) = *(int64_t *)(v1 + 48);
        *v4 = *(int64_t *)(v1 + 56);
        int64_t v6 = *(int64_t *)(v1 + 32); // 0x503fed
        *v4 = v6;
        *(int64_t *)(*(int64_t *)(v6 - 24) + v3) = *(int64_t *)(v1 + 40);
        int64_t v7 = *(int64_t *)(v1 + 16); // 0x504002
        *v2 = v7;
        *(int64_t *)(*(int64_t *)(v7 - 24) + v1) = *(int64_t *)(v1 + 24);
        *(int64_t *)(v1 + 8) = 0;
        int64_t v8; // 0x503fc4
        _Unwind_Resume((struct _Unwind_Exception *)v8);
        v8 = (int64_t)&g19;
    }
}

// Address range: 0x504027 - 0x504029
int64_t function_504027(void) {
    // 0x504027
    int64_t result; // 0x504027
    return result;
}

// Address range: 0x504030 - 0x50413a
// From class:    std::basic_ofstream<char, std::char_traits<char> >
// Type:          constructor
int64_t function_504030(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 248; // 0x504043
    function_54cb80(v1);
    *(int64_t *)(a1 + 464) = 0;
    *(char *)(a1 + 472) = 0;
    *(char *)(a1 + 473) = 0;
    *(int64_t *)(a1 + 480) = 0;
    *(int64_t *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x5040ab
    *v2 = (int64_t)&g8;
    int64_t * v3 = (int64_t *)v1; // 0x5040ae
    *v3 = (int64_t)&g9;
    function_4fc7e0(v1, 0, a3);
    int64_t v4 = a1 + 8; // 0x5040c1
    *v3 = (int64_t)&g11;
    *v2 = (int64_t)&g10;
    function_4feb80(v4);
    function_4fc7e0(v1, (int32_t)v4, (int64_t)&g10);
    int64_t v5 = function_5033d0(v4, v4, a3 & 0xffffffef | 16); // 0x5040f6
    int64_t v6 = *(int64_t *)(a1 - 16) + a1; // 0x504102
    if (v5 == 0) {
        // 0x504120
        return function_4fc010(v6, *(int32_t *)(v6 + 32) | 4, v4);
    }
    // 0x50410a
    return function_4fc010(v6, 0, v4);
}

// Address range: 0x50413a - 0x504172
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_50413a(void) {
    // 0x50413a
    int64_t v1; // 0x50413a
    function_5029a0(v1);
    while (true) {
        // 0x504148
        *(int64_t *)(v1 + 248) = (int64_t)&g3;
        function_54cf10(v1);
        int64_t v2; // 0x50413a
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g19;
    }
}

// Address range: 0x504172 - 0x504177
int64_t function_504172(void) {
    // 0x504172
    int64_t result; // 0x504172
    return result;
}

// Address range: 0x504180 - 0x504234
int64_t function_504180(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x50418e
    int64_t v2 = a1 + 16; // 0x504198
    int64_t * v3 = (int64_t *)a1; // 0x50419c
    *v3 = v1;
    int64_t * v4 = (int64_t *)(v1 - 24); // 0x50419f
    int64_t v5 = *v4; // 0x50419f
    *(int64_t *)(v5 + a1) = *(int64_t *)(a2 + 16);
    *(int64_t *)(a1 + 8) = 0;
    function_4fc7e0(*v4 + a1, 0, v5);
    *v3 = 0;
    int64_t v6 = *(int64_t *)(a2 + 24); // 0x5041cb
    *(int64_t *)(*(int64_t *)-24 + a1) = v6;
    function_4feb80(v2);
    int64_t * v7 = (int64_t *)(a1 - 8); // 0x5041e2
    function_4fc7e0(*v7 + a1, (int32_t)v2, v6);
    int64_t v8 = function_5033d0(v2, a3, a4 & 0xfffffff7 | 8); // 0x5041fa
    int64_t v9 = *v7 + a1; // 0x504206
    if (v8 == 0) {
        // 0x504220
        return function_4fc010(v9, *(int32_t *)(v9 + 32) | 4, v2);
    }
    // 0x50420e
    return function_4fc010(v9, 0, v2);
}

// Address range: 0x504234 - 0x504267
int64_t function_504234(void) {
    // 0x504234
    int64_t v1; // 0x504234
    function_5029a0(v1);
    while (true) {
        int64_t v2 = *(int64_t *)(v1 + 8); // 0x504242
        *(int64_t *)v1 = v2;
        *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 16);
        *(int64_t *)(v1 + 8) = 0;
        int64_t v3; // 0x504234
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        v3 = (int64_t)&g19;
    }
}

// Address range: 0x504270 - 0x50431c
int64_t function_504270(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x50427e
    int64_t v2 = a1 + 8; // 0x504288
    int64_t * v3 = (int64_t *)a1; // 0x50428c
    *v3 = v1;
    int64_t v4 = *(int64_t *)(v1 - 24) + a1; // 0x504299
    *(int64_t *)v4 = *(int64_t *)(a2 + 16);
    function_4fc7e0(v4, 0, a3);
    *v3 = 0;
    int64_t v5 = *(int64_t *)(a2 + 24); // 0x5042ae
    *(int64_t *)(*(int64_t *)-24 + a1) = v5;
    function_4feb80(v2);
    int64_t * v6 = (int64_t *)(a1 - 16); // 0x5042c5
    function_4fc7e0(*v6 + a1, (int32_t)v2, v5);
    int64_t v7 = function_5033d0(v2, v5, a4 & 0xffffffef | 16); // 0x5042dd
    int64_t v8 = *v6 + a1; // 0x5042e9
    if (v7 == 0) {
        // 0x504308
        return function_4fc010(v8, *(int32_t *)(v8 + 32) | 4, v2);
    }
    // 0x5042f1
    return function_4fc010(v8, 0, v2);
}

// Address range: 0x50431c - 0x504347
int64_t function_50431c(void) {
    // 0x50431c
    int64_t v1; // 0x50431c
    function_5029a0(v1);
    while (true) {
        int64_t v2 = *(int64_t *)(v1 + 8); // 0x50432a
        *(int64_t *)v1 = v2;
        *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 16);
        int64_t v3; // 0x50431c
        _Unwind_Resume((struct _Unwind_Exception *)v3);
        v3 = (int64_t)&g19;
    }
}

// Address range: 0x504350 - 0x50446a
// From class:    std::basic_ifstream<char, std::char_traits<char> >
// Type:          constructor
int64_t function_504350(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 + 256; // 0x504363
    function_54cb80(v1);
    *(int64_t *)(a1 + 472) = 0;
    *(char *)(a1 + 480) = 0;
    *(char *)(a1 + 481) = 0;
    *(int64_t *)(a1 + 488) = 0;
    *(int64_t *)(a1 + 496) = 0;
    *(int64_t *)(a1 + 504) = 0;
    *(int64_t *)(a1 + (int64_t)&g1) = 0;
    int64_t * v2 = (int64_t *)a1; // 0x5043cb
    *v2 = (int64_t)&g4;
    int64_t * v3 = (int64_t *)v1; // 0x5043ce
    *v3 = (int64_t)&g5;
    *(int64_t *)(a1 + 8) = 0;
    function_4fc7e0(v1, 0, a3);
    int64_t v4 = a1 + 16; // 0x5043e9
    *v3 = (int64_t)&g7;
    *v2 = (int64_t)&g6;
    function_4feb80(v4);
    function_4fc7e0(v1, (int32_t)v4, (int64_t)&g6);
    int64_t v5 = function_5033d0(v4, v4, a3 & 0xfffffff7 | 8); // 0x50441e
    int64_t v6 = *(int64_t *)(a1 - 8) + a1; // 0x50442a
    if (v5 == 0) {
        // 0x504450
        return function_4fc010(v6, *(int32_t *)(v6 + 32) | 4, v4);
    }
    // 0x504432
    return function_4fc010(v6, 0, v4);
}

// Address range: 0x50446a - 0x5044aa
// From class:    std::basic_ios<char, std::char_traits<char> >
// Type:          constructor
int64_t function_50446a(void) {
    // 0x50446a
    int64_t v1; // 0x50446a
    function_5029a0(v1);
    while (true) {
        // 0x504478
        *(int64_t *)(v1 + 8) = 0;
        *(int64_t *)(v1 + 256) = (int64_t)&g3;
        function_54cf10(v1);
        int64_t v2; // 0x50446a
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g19;
    }
}

// Address range: 0x5044aa - 0x5044af
int64_t function_5044aa(void) {
    // 0x5044aa
    int64_t result; // 0x5044aa
    return result;
}
