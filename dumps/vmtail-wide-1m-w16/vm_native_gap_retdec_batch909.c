/*
 * Targeted RetDec C for native executable gap queue batch 909.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1169bf-0x116bbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x116bbf-0x116dbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x116dbf-0x116fbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c257d-0x1c277d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c277d-0x1c297d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c297d-0x1c2b7d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c2b7d-0x1c2d7d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c2d7d-0x1c2f7d rank=- name=- kind=- bytes=- uncovered=-
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
extern int g8;
extern int g9;
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

int64_t function_1169bf(void);
int64_t function_1169c2(int64_t a1, int64_t a2);
int64_t function_116a1b(void);
int64_t function_116a32(int64_t a1);
int64_t function_116a41(int64_t a1);
int64_t function_116a5c(void);
int64_t function_116a61(int64_t a1);
int64_t function_116a81(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_116a91(int64_t a1);
int64_t function_116a9d(int64_t a1);
int64_t function_116aca(int64_t a1);
int64_t function_116b04(void);
int64_t function_116ba2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_116bc1(void);
int64_t function_116bcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_116c0f(int64_t a1);
int64_t function_116c15(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_116ccb(int64_t a1);
int64_t function_116d1e(void);
int64_t function_116d63(void);
int64_t function_116dd8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_116e22(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_116e7c(int64_t a1, int64_t a2);
int64_t function_116ea7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_116f38(int64_t a1);
int64_t function_116f43(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_116f8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_116f94(void);
int64_t function_116fa4(void);
int64_t function_1c251d();
int64_t function_1c257d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c25ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c268b(void);
int64_t function_1c2691(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c26b1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c26e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c274e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c278e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c2796(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c27b5(void);
int64_t function_1c27ee(void);
int64_t function_1c28e4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1c294b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1c2a1f(void);
int64_t function_1c2a31(void);
int64_t function_1c2a46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c2b08(void);
int64_t function_1c2b38(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1c2c0f(void);
int64_t function_1c2c33(void);
int64_t function_1c2c8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c2cac(void);
int64_t function_1c2d09(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c2da4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c2dd9(void);
int64_t function_1c2e00(void);
int64_t function_1c2e67(void);
int64_t function_1c2e74(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1c2ea5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1c2f55(int64_t a1);
int64_t function_1c2f58(int64_t a1);
int64_t function_20428c1();
int64_t function_22f1bb();
int64_t function_3c203182();
int64_t function_ffffffff857b84b4();
int64_t function_ffffffff98e11dcb();
int64_t function_ffffffffda9d6f69();
int64_t function_ffffffffffff666d();
int64_t unknown_10172b8c();
int64_t unknown_1101ff38();
int64_t unknown_1cd53fed();
int64_t unknown_2a61b566();
int64_t unknown_34438edb();
int64_t unknown_3571a5f1();
int64_t unknown_37806466();
int64_t unknown_382133e2();
int64_t unknown_547eedf6();
int64_t unknown_578141ea();
int64_t unknown_5826c5d2();
int64_t unknown_64b5bcde();
int64_t unknown_6906c82f();
int64_t unknown_7aa635c3();
int64_t unknown_8a3735f();
int64_t unknown_ffffffff822c2f06();
int64_t unknown_ffffffff87aece75();
int64_t unknown_ffffffff89925fa0();
int64_t unknown_ffffffff90511bde();
int64_t unknown_ffffffff9158dfb1();
int64_t unknown_ffffffff98f7ca52();
int64_t unknown_ffffffff9f221184();
int64_t unknown_ffffffffa02278bc();
int64_t unknown_ffffffffa0d67697();
int64_t unknown_ffffffffabd17ad0();
int64_t unknown_ffffffffb1e15ba2();
int64_t unknown_ffffffffb471e883();
int64_t unknown_ffffffffbe1d2afb();
int64_t unknown_ffffffffc15bd665();
int64_t unknown_ffffffffc7782009();
int64_t unknown_ffffffffcfa1cbbc();
int64_t unknown_ffffffffdaf1cac8();
int64_t unknown_ffffffffe9137ddf();
int64_t unknown_fffffffff3148cd1();
int64_t unknown_fffffffff971fa4e();

// Address range: 0x1169bf - 0x1169c0
int64_t function_1169bf(void) {
    // 0x1169bf
    int64_t result; // 0x1169bf
    return result;
}

// Address range: 0x1169c2 - 0x1169c9
int64_t function_1169c2(int64_t a1, int64_t a2) {
    // 0x1169c2
    unknown_ffffffffdaf1cac8(a1, a2);
    return a1 & 0xffffffff;
}

// Address range: 0x116a1b - 0x116a1c
int64_t function_116a1b(void) {
    // 0x116a1b
    int64_t result; // 0x116a1b
    return result;
}

// Address range: 0x116a32 - 0x116a33
int64_t function_116a32(int64_t a1) {
    // 0x116a32
    int64_t result; // 0x116a32
    return result;
}

// Address range: 0x116a41 - 0x116a4d
int64_t function_116a41(int64_t a1) {
    // 0x116a41
    int64_t v1; // 0x116a41
    return v1 & -256 | (int64_t)*(char *)0x1e800ab6ac88d0a;
}

// Address range: 0x116a5c - 0x116a61
int64_t function_116a5c(void) {
    // 0x116a5c
    return function_ffffffffffff666d();
}

// Address range: 0x116a61 - 0x116a81
int64_t function_116a61(int64_t a1) {
    // 0x116a61
    unknown_8a3735f();
    return function_ffffffffda9d6f69();
}

// Address range: 0x116a81 - 0x116a8c
int64_t function_116a81(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x116a81
    int64_t v1; // 0x116a81
    int32_t * v2 = (int32_t *)(v1 + 6); // 0x116a87
    *v2 = *v2 + (int32_t)v1;
    return function_116a1b();
}

// Address range: 0x116a91 - 0x116a92
int64_t function_116a91(int64_t a1) {
    // 0x116a91
    int64_t result; // 0x116a91
    return result;
}

// Address range: 0x116a9d - 0x116a9e
int64_t function_116a9d(int64_t a1) {
    // 0x116a9d
    int64_t result; // 0x116a9d
    return result;
}

// Address range: 0x116aca - 0x116acb
int64_t function_116aca(int64_t a1) {
    // 0x116aca
    int64_t result; // 0x116aca
    return result;
}

// Address range: 0x116b04 - 0x116b05
int64_t function_116b04(void) {
    // 0x116b04
    int64_t result; // 0x116b04
    return result;
}

// Address range: 0x116ba2 - 0x116ba9
int64_t function_116ba2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x116ba2
    int64_t result; // 0x116ba2
    return result;
}

// Address range: 0x116bc1 - 0x116bc4
int64_t function_116bc1(void) {
    // 0x116bc1
    int64_t result; // 0x116bc1
    return result;
}

// Address range: 0x116bcc - 0x116bd0
int64_t function_116bcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x116bcc
    int64_t result; // 0x116bcc
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x116c0f - 0x116c10
int64_t function_116c0f(int64_t a1) {
    // 0x116c0f
    int64_t result; // 0x116c0f
    return result;
}

// Address range: 0x116c15 - 0x116c1c
int64_t function_116c15(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x116c15
    int64_t v1; // 0x116c15
    int64_t result = v1;
    bool v2; // 0x116c15
    *(char *)result = (char)result + (char)(a4 / 256) + (char)v2;
    return result;
}

// Address range: 0x116ccb - 0x116cce
int64_t function_116ccb(int64_t a1) {
    // 0x116ccb
    int64_t result; // 0x116ccb
    return result;
}

// Address range: 0x116d1e - 0x116d1f
int64_t function_116d1e(void) {
    // 0x116d1e
    int64_t result; // 0x116d1e
    return result;
}

// Address range: 0x116d63 - 0x116d65
int64_t function_116d63(void) {
    // 0x116d63
    return function_116d1e();
}

// Address range: 0x116dd8 - 0x116de6
int64_t function_116dd8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x116dd8
    return unknown_ffffffff90511bde(a1, a2, a3);
}

// Address range: 0x116e22 - 0x116e7c
int64_t function_116e22(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x1374c50b); // 0x116e24
    int64_t v2; // 0x116e22
    *v1 = *v1 + (int32_t)v2;
    int32_t v3 = *(int32_t *)(a2 + 0x7807aef5); // 0x116e2a
    int64_t v4 = 2 * v2 % 256 ^ v2; // 0x116e30
    int64_t v5 = unknown_1101ff38(); // 0x116e32
    int64_t v6; // 0x116e22
    *(char *)a1 = *(char *)&v6 | (char)(a4 / 256);
    char * v7 = (char *)(v2 + 0x3701e80c); // 0x116e40
    *v7 = *v7 + (char)v4;
    int32_t * v8 = (int32_t *)(a2 - 0x4e3a79b7); // 0x116e51
    int32_t v9 = *v8; // 0x116e51
    int32_t v10 = v2; // 0x116e51
    int32_t v11 = v9 + v10; // 0x116e51
    *v8 = v11;
    if (v11 < 0 != ((v11 ^ v9) & (v11 ^ v10)) < 0) {
        // 0x116e82
        return v5 & 0xffff0000 | (int64_t)&g8 | ((v5 | 166) + (a4 + 0xffff) / 256) % 256;
    }
    // 0x116e5c
    float80_t v12; // 0x116e22
    *(int16_t *)(a2 - 66) = (int16_t)((float80_t)v3 / v12);
    unknown_ffffffffc15bd665();
    int32_t * v13 = (int32_t *)(v4 + a3); // 0x116e69
    *v13 = *v13 + v10;
    return function_ffffffff857b84b4();
}

// Address range: 0x116e7c - 0x116e82
int64_t function_116e7c(int64_t a1, int64_t a2) {
    // 0x116e7c
    int64_t v1; // 0x116e7c
    int64_t v2 = v1 & -0xff01 | (int64_t)&g9; // 0x116e7c
    bool v3; // 0x116e7c
    return (v2 + 232 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x116ea7 - 0x116eab
int64_t function_116ea7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x116ea7
    int64_t result; // 0x116ea7
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x116f38 - 0x116f39
int64_t function_116f38(int64_t a1) {
    // 0x116f38
    int64_t result; // 0x116f38
    return result;
}

// Address range: 0x116f43 - 0x116f62
int64_t function_116f43(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x116f43
    unknown_37806466();
    unknown_ffffffff98f7ca52();
    int64_t v1 = 0x100000000 * a3 | (int64_t)(uint32_t)__asm_in(-49); // 0x116f53
    int64_t v2 = (int64_t)*(int32_t *)(a3 + 0x1e8ecd6); // 0x116f53
    return v1 / v2 & 0xffffff00 | (int64_t)__asm_in_133((int16_t)(v1 % v2));
}

// Address range: 0x116f8b - 0x116f94
int64_t function_116f8b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x116f8b
    return function_22f1bb();
}

// Address range: 0x116f94 - 0x116f99
int64_t function_116f94(void) {
    // 0x116f94
    int64_t v1; // 0x116f94
    int64_t result = v1;
    *(char *)result = (char)result + 80;
    return result;
}

// Address range: 0x116fa4 - 0x116fa9
int64_t function_116fa4(void) {
    // 0x116fa4
    return function_ffffffff98e11dcb();
}

// Address range: 0x1c257d - 0x1c259e
int64_t function_1c257d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1c257d
    int64_t v1; // 0x1c257d
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = 2 * v2; // 0x1c257e
    *(int32_t *)v1 = v3;
    int64_t v4 = v1 - (v3 < v2 ? 0x91eb01e9 : 0x91eb01e8); // 0x1c2580
    int64_t v5; // 0x1c257d
    int32_t v6 = *(int32_t *)(8 * a1 + 55 + (int64_t)&v5); // 0x1c2585
    int64_t v7 = a3 & -0xff01 | (int64_t)"hread_once"; // 0x1c258c
    char v8 = *(char *)-0xdcfd884; // 0x1c258e
    int32_t v9 = *(int32_t *)((v7 & -256 | (int64_t)(v8 | (char)v7)) + 4 * v1); // 0x1c2594
    int32_t v10 = v6 | (int32_t)a4 | v9; // 0x1c2594
    __asm_out(93, (char)v4);
    int64_t result = v4 & 0xffffffff; // 0x1c2599
    if (v10 != 1 == v10 == 0) {
        result = function_1c251d();
    }
    // 0x1c259c
    __asm_out(63, (char)result);
    return result;
}

// Address range: 0x1c25ba - 0x1c25f5
int64_t function_1c25ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 - 64); // 0x1c25ba
    *v1 = *v1 + (char)a3;
    unknown_7aa635c3();
    __asm_in_133((int16_t)a3);
    unknown_5826c5d2();
    unknown_ffffffffe9137ddf();
    *(int32_t *)0x104c0ae5 = *(int32_t *)0x104c0ae5 + (int32_t)a1;
    return unknown_578141ea();
}

// Address range: 0x1c268b - 0x1c268c
int64_t function_1c268b(void) {
    // 0x1c268b
    int64_t result; // 0x1c268b
    return result;
}

// Address range: 0x1c2691 - 0x1c26b0
int64_t function_1c2691(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1c2691
    int64_t v1; // 0x1c2691
    uint64_t v2 = v1;
    int64_t v3 = a2;
    char * v4 = (char *)(a3 - 0x1392d358); // 0x1c269a
    char v5 = *v4 | (char)(v2 / 256); // 0x1c269a
    *v4 = v5;
    int64_t result = v2 & -256 | (int64_t)*(char *)0x10d4d001e8cd2d01; // 0x1c26a0
    if (v5 < 0) {
        result = function_1c268b();
    }
    // 0x1c26a3
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a3;
    return result;
}

// Address range: 0x1c26b1 - 0x1c26c0
int64_t function_1c26b1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1c26b1
    int64_t v1; // 0x1c26b1
    *(char *)a1 = (char)__asm_hlt(a1, a2, v1);
    bool v2; // 0x1c26b1
    int64_t v3 = v2 ? -4 : 4; // 0x1c26b5
    return unknown_ffffffffa02278bc((v2 ? -1 : 1) + a1 + v3, v3 + a2);
}

// Address range: 0x1c26e9 - 0x1c272a
int64_t function_1c26e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)-0x5f7378fe17c50cc1; // 0x1c26e9
    int64_t v2; // 0x1c26e9
    *(int32_t *)a1 = (int32_t)(v2 & 0xffffff00 | (int64_t)(v1 | (char)v2));
    bool v3; // 0x1c26e9
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0x1c26f6
    int64_t v5; // 0x1c26e9
    uint32_t v6 = *(int32_t *)&v5; // 0x1c26fb
    uint32_t v7 = v6 + (int32_t)v2; // 0x1c26fb
    *(int32_t *)a3 = v7;
    int32_t v8 = *(int32_t *)(((v2 / 256 + a4) % 256 | a4 & -256) - 0x3fb1000); // 0x1c26fd
    uint64_t result = unknown_ffffffffc7782009(v4); // 0x1c2703
    char * v9 = (char *)(result + 0x2c33c00); // 0x1c270a
    *v9 = *v9 + (char)result;
    char * v10 = (char *)(v2 - 0x62fe1800); // 0x1c2710
    char v11 = result / 256; // 0x1c2710
    *v10 = *v10 + v11;
    char * v12 = (char *)(v4 - 46); // 0x1c2716
    *v12 = *v12 + v11;
    char * v13 = (char *)(2 * a2 + 0x2133aa1c + v2); // 0x1c271a
    char v14 = *v13; // 0x1c271a
    *v13 = v14 + ((char)(v8 + (int32_t)v2 + (int32_t)(v7 < v6)) | (char)&g1);
    return result;
}

// Address range: 0x1c274e - 0x1c2778
int64_t function_1c274e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1c274e
    bool v1; // 0x1c274e
    int64_t v2 = v1 ? -1 : 1; // 0x1c274e
    int64_t v3 = v2 + a2; // 0x1c274e
    int64_t v4; // 0x1c274e
    *(char *)a3 = (char)v4 - 94;
    unknown_2a61b566(v2 + a1, v3);
    int32_t * v5 = (int32_t *)(v4 + 91 + 2 * v3); // 0x1c276b
    int64_t v6; // bp-8, 0x1c274e
    *v5 = *v5 ^ (int32_t)(int64_t)&v6;
    unknown_ffffffff87aece75();
    int64_t v7 = __asm_wait(); // 0x1c2774
    return (v7 + 34) % 256 | v7 & -256;
}

// Address range: 0x1c278e - 0x1c2792
int64_t function_1c278e(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 41); // 0x1c278e
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x1c278e
    return result;
}

// Address range: 0x1c2796 - 0x1c27a4
int64_t function_1c2796(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 + 0x7b93e85d); // 0x1c2796
    *v1 = *v1 | (char)a4;
    return unknown_ffffffffb1e15ba2(a1, a2, a3, a4, a5);
}

// Address range: 0x1c27b5 - 0x1c27ba
int64_t function_1c27b5(void) {
    // 0x1c27b5
    return function_20428c1();
}

// Address range: 0x1c27ee - 0x1c27ef
int64_t function_1c27ee(void) {
    // 0x1c27ee
    int64_t result; // 0x1c27ee
    return result;
}

// Address range: 0x1c28e4 - 0x1c28fd
int64_t function_1c28e4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1c28e4
    int64_t v1; // 0x1c28e4
    uint32_t v2 = (int32_t)v1;
    bool v3; // 0x1c28e4
    *(int32_t *)v1 = 0x1000 * v2 | v2 / 0x200000 | 2048 * (int32_t)v3;
    uint64_t v4 = unknown_1cd53fed(); // 0x1c28e7
    char * v5 = (char *)(v4 + 0x57f5600); // 0x1c28ec
    *v5 = *v5 + (char)v4;
    char * v6 = (char *)(a3 + 1); // 0x1c28f2
    *v6 = *v6 + (char)(v4 / 256);
    return unknown_ffffffffbe1d2afb();
}

// Address range: 0x1c294b - 0x1c29f5
int64_t function_1c294b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int64_t v3; // 0x1c294b
    __asm_out(6, (char)v3 | -101);
    if (-(char)v3 >= 0) {
        int32_t v4 = *(int32_t *)(v3 - 0x29fffe18); // 0x1c295e
        *(char *)-0x2505ab89 = *(char *)-0x2505ab89 & (char)(a3 / 256);
        int64_t v5; // 0x1c294b
        return __asm_hlt((int64_t)(58 * v4), (int64_t)&v5, v3 % 256 | a3);
    }
    // 0x1c2970
    *(int32_t *)a4 = 2 * (int32_t)a4;
    if (*(int32_t *)(a4 - 63) >= 0xfffffff9) {
        // 0x1c29de
        __asm_in_133((int16_t)v1);
        return unknown_547eedf6();
    }
    unsigned char v6 = *(char *)&v1; // 0x1c2979
    *(char *)v1 = v6 / 2 | 128 * v6;
    int64_t v7 = unknown_ffffffff9f221184(); // 0x1c297e
    uint64_t v8 = v1;
    char v9 = *(char *)(v8 - 0x24fe175d); // 0x1c298a
    int64_t v10 = v8 & -256 | (int64_t)(v9 | (char)v8); // 0x1c298a
    *(char *)v2 = *(char *)&v2 + ((char)v7 ^ -29);
    int32_t * v11 = (int32_t *)(v3 - 0x5a0617dc); // 0x1c2992
    *v11 = *v11 + (int32_t)v2;
    unknown_ffffffff89925fa0();
    unknown_ffffffff822c2f06();
    uint64_t v12 = unknown_ffffffff9158dfb1(); // 0x1c29ab
    char * v13 = (char *)(v12 + 5); // 0x1c29b0
    unsigned char v14 = *v13; // 0x1c29b0
    unsigned char v15 = v14 + (char)(v12 / 256); // 0x1c29b0
    *v13 = v15;
    char * v16 = (char *)(v10 + 0x5200e3ee); // 0x1c29b3
    *v16 = *v16 - (char)(v8 / 256) + (char)(v15 < v14);
    *(int32_t *)v2 = __asm_insd((int16_t)v10);
    return unknown_64b5bcde();
}

// Address range: 0x1c2a1f - 0x1c2a29
int64_t function_1c2a1f(void) {
    char v1 = *(char *)0x2b6f926; // 0x1c2a1f
    int64_t result; // 0x1c2a1f
    *(char *)0x2b6f926 = v1 + (char)((uint64_t)result / 256);
    __asm_out(-11, (char)result);
    return result;
}

// Address range: 0x1c2a31 - 0x1c2a32
int64_t function_1c2a31(void) {
    // 0x1c2a31
    int64_t result; // 0x1c2a31
    return result;
}

// Address range: 0x1c2a46 - 0x1c2a58
int64_t function_1c2a46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char v1 = *(char *)0x679a2d53; // 0x1c2a4c
    int64_t v2; // 0x1c2a46
    *(char *)0x679a2d53 = v1 + (char)((uint64_t)v2 / 256);
    __asm_hlt(a1, a2, a3);
    return function_1c2a31();
}

// Address range: 0x1c2b08 - 0x1c2b0d
int64_t function_1c2b08(void) {
    // 0x1c2b08
    return function_3c203182();
}

// Address range: 0x1c2b38 - 0x1c2bf0
int64_t function_1c2b38(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3 = a1;
    int64_t v4; // 0x1c2b38
    *(char *)v4 = 0;
    *(char *)a1 = __asm_insb((int16_t)a3);
    *(int32_t *)a3 = *(int32_t *)&v1 + (int32_t)a4;
    int64_t result2 = unknown_fffffffff971fa4e(); // 0x1c2b47
    if ((a3 & 64) != 0) {
        int64_t v5 = (int64_t)*(char *)-0x6df0ff661543fe18; // 0x1c2b54
        uint64_t v6 = v4 & 0xffffff00; // 0x1c2b54
        int64_t * v7 = (int64_t *)((result2 & 0xffffffff) - 8); // 0x1c2b5d
        *v7 = 4 * (int64_t)((a3 & 4) != 0) | (int64_t)(a3 % 2 != 0) | 16 * (int64_t)((a3 & 16) != 0) | 64 * (int64_t)((a3 & 64) != 0) | 128 * (int64_t)((char)a3 < 0) | 256 * (int64_t)((a3 & 256) != 0) | 512 * (int64_t)((a3 & (int64_t)&g2) != 0) | 1024 * (int64_t)((a3 & (int64_t)&g3) != 0) | 2048 * (int64_t)((a3 & (int64_t)L"\n2") != 0) | 0x4000 * (int64_t)((a3 & (int64_t)"le") != 0) | 2;
        int64_t v8 = v3;
        *(int32_t *)v8 = *(int32_t *)&v3 + (int32_t)v8;
        unsigned char v9 = (char)(v6 / 256); // 0x1c2b63
        unsigned char v10 = *(char *)((v6 | v5) + 0x41cf5e); // 0x1c2b63
        unsigned char v11 = v9 - v10; // 0x1c2b63
        if (v11 == 0) {
            // 0x1c2be8
            return unknown_3571a5f1();
        }
        int64_t v12 = 256 * (int64_t)v11 | v4 & 0xffff0000 | (v5 - (int64_t)(v10 > v9)) % 256; // 0x1c2b6b
        char * v13 = (char *)v12; // 0x1c2b6d
        *v13 = *v13 - 24;
        int64_t result = __asm_sti(); // 0x1c2b87
        __asm_outsb((int16_t)v1, *(char *)*v7);
        return result;
    }
    int64_t v14 = a4 & -0xff01 | (int64_t)&g4; // 0x1c2b42
    int32_t v15 = result2;
    *(int32_t *)-0x62b5fe171fcd99de = v15;
    int64_t v16 = v3 + ((a3 & (int64_t)&g3) != 0 ? -4 : 4); // 0x1c2bc2
    v3 = v16;
    if (v14 == 0) {
        // 0x1c2b93
        return result2;
    }
    int32_t * v17 = (int32_t *)(v16 + 1); // 0x1c2bc8
    *v17 = *v17 | v15;
    unknown_fffffffff3148cd1();
    char v18 = *(char *)&v2;
    __asm_outsb((int16_t)v1, v18);
    *(char *)v2 = v18 & (char)v4;
    int64_t result3 = unknown_382133e2(); // 0x1c2bdc
    char * v19 = (char *)(v14 - 43); // 0x1c2be1
    char v20 = result3; // 0x1c2be1
    *v19 = *v19 + v20;
    __asm_out_134((int16_t)v1, v20);
    return result3;
}

// Address range: 0x1c2c0f - 0x1c2c12
int64_t function_1c2c0f(void) {
    // 0x1c2c0f
    int64_t result; // 0x1c2c0f
    return result;
}

// Address range: 0x1c2c33 - 0x1c2c34
int64_t function_1c2c33(void) {
    // 0x1c2c33
    int64_t result; // 0x1c2c33
    return result;
}

// Address range: 0x1c2c8d - 0x1c2c91
int64_t function_1c2c8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c2c8d
    int64_t result; // 0x1c2c8d
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x1c2cac - 0x1c2cad
int64_t function_1c2cac(void) {
    // 0x1c2cac
    int64_t result; // 0x1c2cac
    return result;
}

// Address range: 0x1c2d09 - 0x1c2d6a
int64_t function_1c2d09(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a3; // 0x1c2d10
    char v2 = __asm_in_133(v1); // 0x1c2d10
    int64_t v3; // 0x1c2d09
    uint64_t v4 = (a4 & -256 | (int64_t)*(char *)(v3 - 84)) - 1; // 0x1c2d19
    if (v2 != 107 && v4 != 0) {
        function_1c2cac();
    }
    uint32_t v5 = (int32_t)v3 - (int32_t)a1; // 0x1c2d11
    *(char *)0x231622 = *(char *)0x231622 + (char)(v5 / 256);
    int32_t * v6 = (int32_t *)(a3 + 95); // 0x1c2d21
    *v6 = *v6 + v5;
    int64_t result = unknown_6906c82f(); // 0x1c2d29
    char * v7 = (char *)(v3 + (int64_t)&g5); // 0x1c2d2e
    char v8 = v4 / 256; // 0x1c2d2e
    char v9 = *v7 + v8; // 0x1c2d2e
    *v7 = v9;
    if (v9 == 0) {
        // 0x1c2d68
        return result;
    }
    if ((int32_t)result >= 0xe0c5c701) {
        // 0x1c2d3e
        return result & 0xffffffff ^ 0xbe356c7d;
    }
    int64_t v10 = __asm_iretd(); // 0x1c2d52
    *(char *)a1 = __asm_insb(v1);
    int64_t result2 = v10 & 0xba891ed8; // 0x1c2d59
    char * v11 = (char *)result2; // 0x1c2d5e
    *v11 = *v11 + v8;
    // 0x1c2d68
    return result2;
}

// Address range: 0x1c2da4 - 0x1c2dbe
int64_t function_1c2da4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c2da4
    bool v1; // 0x1c2da4
    int64_t v2 = v1 ? -1 : 1; // 0x1c2da4
    int64_t v3; // 0x1c2da4
    *(char *)0x3c83bad00013dc8 = (char)v3;
    return unknown_ffffffffcfa1cbbc(v2 + a1, v2 + a2);
}

// Address range: 0x1c2dd9 - 0x1c2ddc
int64_t function_1c2dd9(void) {
    // 0x1c2dd9
    int64_t result; // 0x1c2dd9
    return result;
}

// Address range: 0x1c2e00 - 0x1c2e01
int64_t function_1c2e00(void) {
    // 0x1c2e00
    int64_t result; // 0x1c2e00
    return result;
}

// Address range: 0x1c2e67 - 0x1c2e68
int64_t function_1c2e67(void) {
    // 0x1c2e67
    int64_t result; // 0x1c2e67
    return result;
}

// Address range: 0x1c2e74 - 0x1c2e9b
int64_t function_1c2e74(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1c2e74
    int64_t v1; // 0x1c2e74
    int64_t v2 = v1;
    int64_t v3 = unknown_ffffffffb471e883() | 150; // 0x1c2e82
    uint32_t v4 = *(int32_t *)v3; // 0x1c2e84
    unsigned char v5 = (char)unknown_10172b8c(); // 0x1c2e8c
    bool v6 = v4 > -1 - (int32_t)v3 ? v5 - 28 + (char)(v4 > -1 - (int32_t)v3) <= v5 : v5 > 27; // 0x1c2e8c
    *(char *)v2 = (char)v2 + (char)(a4 / 256) + (char)v6;
    int64_t v7 = unknown_ffffffffa0d67697(); // 0x1c2e90
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return v7 & -256 | (int64_t)(*(char *)(a4 - 128) | (char)v7);
}

// Address range: 0x1c2ea5 - 0x1c2f4d
int64_t function_1c2ea5(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1c2ea5
    int64_t v1; // 0x1c2ea5
    int64_t v2 = v1;
    int64_t v3 = a2;
    int32_t * v4 = (int32_t *)(a1 + 0x1e81e51); // 0x1c2ea5
    *v4 = *v4 | 83;
    *(int64_t *)v2 = v2 - v1;
    int64_t v5 = 2 * v1; // 0x1c2eb1
    uint32_t v6 = *(int32_t *)0x2aad392e; // 0x1c2eb3
    int64_t v7; // 0x1c2ea5
    int32_t v8 = (int64_t)&v7; // 0x1c2eb3
    int32_t v9 = v6 + v8; // 0x1c2eb3
    unsigned char v10 = llvm_ctpop_i8((char)v9); // 0x1c2eb3
    *(int32_t *)0x2aad392e = v9;
    int64_t v11 = v5 & 0xffff00ff | 256 * (64 * (int64_t)(v9 == 0) | (int64_t)(v9 < v6) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(v6 % 16 + (v8 & 8) > 15) | 4 * (int64_t)(v10 % 2 == 0)) | 512; // 0x1c2eb9
    int64_t v12 = (int64_t)(*(char *)v11 & (char)(a4 / 256)); // 0x1c2eba
    int32_t * v13 = (int32_t *)(a2 + 0x89d674 + (v11 & -256 | (v5 + v12) % 256)); // 0x1c2ebe
    int32_t v14 = v1; // 0x1c2ebe
    *v13 = *v13 + v14;
    unknown_ffffffffabd17ad0();
    if ((256 * v12 || a4 & -0xff01) == 0) {
        // 0x1c2f48
        function_1c2e67();
        int64_t result = __asm_wait(); // 0x1c2ed1
        __asm_out_134((int16_t)a3, (char)result);
        *(int32_t *)v3 = *(int32_t *)&v3 + v8;
        return result;
    }
    // 0x1c2ed5
    __asm_wait();
    int64_t v15 = unknown_34438edb() + 0xe850d2f0; // 0x1c2edc
    int32_t * v16 = (int32_t *)((v15 & 0xffffffff) - 70); // 0x1c2ee1
    uint32_t v17 = *v16; // 0x1c2ee1
    uint32_t v18 = v17 + v14; // 0x1c2ee1
    *v16 = v18;
    int64_t v19 = (v15 - (int64_t)(v18 < v17)) % 256 | v15 & 0xffffff00; // 0x1c2ee4
    char * v20 = (char *)v19; // 0x1c2ee6
    *v20 = *v20 + 43;
    *(int32_t *)v3 = *(int32_t *)&v3 + v8;
    *(int32_t *)-0x2ef39617 = *(int32_t *)-0x2ef39617 + (int32_t)a1;
    return (int64_t)(*(int32_t *)(v2 + 18 + 2 * v2) * (int32_t)v19);
}

// Address range: 0x1c2f55 - 0x1c2f56
int64_t function_1c2f55(int64_t a1) {
    // 0x1c2f55
    int64_t result; // 0x1c2f55
    return result;
}

// Address range: 0x1c2f58 - 0x1c2f5b
int64_t function_1c2f58(int64_t a1) {
    // 0x1c2f58
    int64_t result; // 0x1c2f58
    return result;
}
