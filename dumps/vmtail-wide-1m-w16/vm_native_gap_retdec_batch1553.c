/*
 * Targeted RetDec C for native executable gap queue batch 1553.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x496fb-0x498fb rank=- name=- kind=- bytes=- uncovered=-
 *   0x498fb-0x49afb rank=- name=- kind=- bytes=- uncovered=-
 *   0x49afb-0x49cfb rank=- name=- kind=- bytes=- uncovered=-
 *   0x49cfb-0x49efb rank=- name=- kind=- bytes=- uncovered=-
 *   0x367ab6-0x367cb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x367cb6-0x367eb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3680b6-0x3682b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3682b6-0x3684b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3684b6-0x368588 rank=- name=- kind=- bytes=- uncovered=-
 *   0x501d23-0x501f23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x501f23-0x502123 rank=- name=- kind=- bytes=- uncovered=-
 *   0x502123-0x502323 rank=- name=- kind=- bytes=- uncovered=-
 *   0x502323-0x502523 rank=- name=- kind=- bytes=- uncovered=-
 *   0x502523-0x502723 rank=- name=- kind=- bytes=- uncovered=-
 *   0x502723-0x5027f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53703b-0x53723b rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_17386d8();
int64_t function_27e1a();
int64_t function_36126();
int64_t function_367ab6(int64_t a1);
int64_t function_367b0b(void);
int64_t function_367b67(void);
int64_t function_367bb1(void);
int64_t function_367bb9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_367bd8(void);
int64_t function_367be2(void);
int64_t function_367c01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_367ce9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_367d2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_367d51(void);
int64_t function_367d88(void);
int64_t function_367d8d(void);
int64_t function_367db1(void);
int64_t function_367dd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_367e0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_367e42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3680b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3680cc(void);
int64_t function_36815f(void);
int64_t function_368209(void);
int64_t function_36825f(void);
int64_t function_3682a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_368344(int64_t a1);
int64_t function_36835c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_368447(int64_t a1);
int64_t function_36848a(void);
int64_t function_3684e3(void);
int64_t function_3684f3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_368506(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36856b(int64_t a1);
int64_t function_47156();
int64_t function_473f6();
int64_t function_47518();
int64_t function_475de();
int64_t function_47630();
int64_t function_47660();
int64_t function_495a4();
int64_t function_496fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_497ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4ad78();
int64_t function_4ae3c();
int64_t function_4e238();
int64_t function_4e27e();
int64_t function_4e2a6();
int64_t function_4e554();
int64_t function_4ea04();
int64_t function_4ea0a();
int64_t function_4f15a0();
int64_t function_4f3da();
int64_t function_4f5150();
int64_t function_4f5280();
int64_t function_4f722();
int64_t function_4fa50();
int64_t function_4fbc4();
int64_t function_4fcce0();
int64_t function_500b70();
int64_t function_500d70();
int64_t function_501d14();
int64_t function_501d23(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_501d60(int64_t a1, int64_t a2, int64_t a3);
int64_t function_501e40(int64_t a1, int64_t a2);
int64_t function_501f9b(void);
int64_t function_501fd0(int64_t a1, int64_t a2);
int64_t function_5020a0(int64_t a1);
int64_t function_5020b0(int64_t a1);
int64_t function_5020c0(int64_t a1);
int64_t function_5020d0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_502197(int64_t a1, int64_t a2);
int64_t function_5022db(void);
int64_t function_502310(int64_t a1, int64_t a2);
int64_t function_5023d0(int64_t a1);
int64_t function_5023e0(int64_t a1);
int64_t function_5023f0(int64_t a1);
int64_t function_502400(int64_t a1, int64_t a2, int64_t a3);
int64_t function_502517(int64_t a1, int64_t a2);
int64_t function_5026a3(void);
int64_t function_5026f0(int64_t a1, int64_t a2);
int64_t function_5027c0(int64_t a1);
int64_t function_5027d0(int64_t a1);
int64_t function_5027e0(int64_t a1);
int64_t function_52e330();
int64_t function_536fc0();
int64_t function_53703b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_5370b4(int64_t a1, int64_t a2);
int64_t function_5370e0(int64_t a1, int64_t a2);
int64_t function_5370f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_53716e(int64_t a1, int64_t a2);
int64_t function_5371c2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_537220(int64_t result);
int64_t function_54cb80();
int64_t function_54cf10();
int64_t function_54cf90();
int64_t function_54d0a0();
int64_t function_54d790();
int64_t function_565970();
int64_t function_565f30();
int64_t function_5679b0();
int64_t function_5679e0();
int64_t function_567a10();
int64_t function_ffffffff8036bb37();
int64_t unknown_1064450a();
int64_t unknown_6913a6fe();
int64_t unknown_ffffffff9f3ca50c();
int64_t unknown_ffffffffc1fb195a();

// Address range: 0x496fb - 0x497eb
int64_t function_496fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1 + (int64_t)&g6; // 0x49701
    function_4e238(v1);
    function_495a4(a1);
    function_47518(a1);
    int16_t * v2 = (int16_t *)(a1 + (int64_t)&g8); // 0x49728
    if (*v2 != 0) {
        int64_t v3 = a1 + 40; // 0x49732
        if (*(int32_t *)function_4ae3c(v3) < (int32_t)function_4e27e(v1)) {
            int64_t v4 = function_475de(a1); // 0x49751
            *(int16_t *)(a1 + (int64_t)&g7) = (int16_t)v4;
            function_4ad78(v3, v1, a1 + (int64_t)&g10, a1 + (int64_t)&g12);
            return function_4e2a6(v1);
        }
    }
    int16_t * v5 = (int16_t *)(a1 + (int64_t)&g9); // 0x49785
    if (*v5 != 0) {
        // 0x4978f
        *v2 = 0;
        int64_t v6 = function_475de(a1); // 0x497a3
        int64_t v7 = a1 + (int64_t)&g10; // 0x497a8
        *(int16_t *)(a1 + (int64_t)&g7) = (int16_t)v6;
        function_4ad78(a1 + 40, v1, v7, 0);
        *v5 = 0;
        *(int64_t *)(a1 + (int64_t)&g11) = *(int64_t *)v7;
    }
    // 0x497e3
    int64_t result; // 0x496fb
    return result;
}

// Address range: 0x497ec - 0x49ef8
int64_t function_497ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x497ec
    __readfsqword(40);
    int64_t * v1 = (int64_t *)(a1 + (int64_t)&g14); // 0x49830
    int64_t v2 = 0x100000000 * a2 >> 32; // bp-236, 0x49838
    if (*v1 == 0) {
        // 0x49eeb
        return 0;
    }
    uint64_t v3 = a2 & 0xffffffff; // 0x49842
    uint64_t v4 = *(int64_t *)(a1 + (int64_t)&g16); // 0x49851
    int64_t result = function_47156(a1 + (int64_t)&g15, v3 % v4, (int32_t *)&v2, (int32_t *)&v2); // 0x49865
    if (result == 0) {
        // 0x49eeb
        return 0;
    }
    int64_t v5 = *(int64_t *)result; // 0x49873
    if (v5 == 0) {
        // 0x49eeb
        return result;
    }
    int64_t v6 = function_47630(v3, 1); // 0x49889
    int64_t v7 = v5 + 16; // 0x49892
    int64_t result7 = 0; // bp-224, 0x49896
    int64_t v8 = function_4ea04(v7); // 0x498d1
    function_27e1a((int64_t)&result7, function_4ea0a(v7));
    int64_t v9 = *(int64_t *)(v8 + 8); // 0x49937
    int64_t v10 = *(int64_t *)v8; // 0x49941
    int64_t v11 = 0; // 0x49957
    int64_t v12 = 0; // 0x49957
    int64_t result2 = v9; // 0x49957
    int64_t v13 = 0; // 0x49957
    int64_t v14; // 0x497ec
    int64_t v15; // 0x497ec
    int64_t v16; // 0x497ec
    int64_t v17; // 0x497ec
    int64_t v18; // 0x497ec
    int64_t v19; // 0x497ec
    int64_t v20; // 0x497ec
    int32_t * v21; // 0x497ec
    int32_t * v22; // 0x497ec
    int32_t * v23; // 0x497ec
    int32_t * v24; // 0x497ec
    int32_t v25; // 0x497ec
    uint32_t v26; // 0x497ec
    int32_t v27; // 0x497ec
    int32_t v28; // 0x497ec
    int64_t v29; // 0x497ec
    int64_t v30; // 0x497ec
    int64_t v31; // 0x497ec
    int64_t v32; // 0x497ec
    int64_t v33; // 0x497ec
    int64_t v34; // 0x497ec
    int16_t v35; // bp-200, 0x497ec
    int64_t v36; // 0x497ec
    int64_t v37; // 0x497ec
    int64_t v38; // 0x497ec
    int64_t v39; // 0x497ec
    int64_t v40; // 0x497ec
    int64_t v41; // 0x497ec
    int64_t v42; // 0x497ec
    int64_t v43; // 0x497ec
    int64_t v44; // 0x4992f
    int64_t v45; // 0x497ec
    if (v9 != v10) {
        // 0x4995d
        int64_t v46; // bp-104, 0x497ec
        v44 = (int64_t)&v46;
        int64_t v47 = a1 + (int64_t)&g4;
        v45 = (int64_t)&v35;
        int64_t v48; // bp-198, 0x497ec
        int64_t v49 = (int64_t)&v48;
        int32_t v50 = v45;
        int64_t v51 = a1 + (int64_t)&g13;
        v42 = v10;
        v14 = 0;
        v17 = v10;
        int64_t v52; // 0x497ec
        v21 = (int32_t *)&v52;
        v39 = 0;
        v36 = 0;
        v25 = 16;
        v29 = 0;
        v32 = 0;
        while (true) {
          lab_0x4995d:
            // 0x4995d
            v33 = v32;
            v30 = v29;
            v26 = v25;
            v37 = v36;
            v40 = v39;
            v22 = v21;
            v15 = v14;
            v43 = v42;
            char v53 = *(char *)v43; // 0x4995d
            if (v53 == 113) {
                int64_t v54; // 0x497ec
                int32_t * v55; // 0x497ec
                int32_t v56; // 0x497ec
                if (v26 < 48) {
                    // 0x49c51
                    v56 = v26 + 8;
                    v55 = v22;
                    v54 = (int64_t)v26 + v44;
                } else {
                    int64_t v57 = (int64_t)v22; // 0x49c67
                    v56 = v26;
                    v55 = (int32_t *)(v57 + 8);
                    v54 = v57;
                }
                int64_t v58 = *(int64_t *)v54; // 0x49c7b
                int64_t v59 = v58 == 0 ? (int64_t)&g35 : v58; // 0x49c88
                v27 = v56;
                v23 = v55;
                v19 = v59 + 16;
                v20 = v59;
                goto lab_0x49c9a;
            } else {
                int64_t v60 = v17 & -256 | (int64_t)v53; // 0x4995d
                if (v53 > 113) {
                    if (v53 == 117) {
                        goto lab_0x49b64;
                    } else {
                        if (v53 > 117) {
                            // 0x49999
                            v34 = v33;
                            v31 = v30;
                            v28 = v26;
                            v38 = v37;
                            v41 = v40;
                            v24 = v22;
                            v18 = v60;
                            v16 = v15;
                            switch (v53) {
                                case 118: {
                                    int64_t v61; // 0x497ec
                                    int32_t * v62; // 0x497ec
                                    int32_t v63; // 0x497ec
                                    if (v26 < 48) {
                                        // 0x49c06
                                        v63 = v26 + 8;
                                        v62 = v22;
                                        v61 = (int64_t)v26 + v44;
                                    } else {
                                        int64_t v64 = (int64_t)v22; // 0x49c1c
                                        v63 = v26;
                                        v62 = (int32_t *)(v64 + 8);
                                        v61 = v64;
                                    }
                                    int64_t v65 = *(int64_t *)v61; // 0x49c30
                                    int64_t v66 = v65 != 0 ? v65 : (int64_t)&g36;
                                    v27 = v63;
                                    v23 = v62;
                                    v19 = v66 + 12;
                                    v20 = v66;
                                    goto lab_0x49c9a;
                                }
                                case 121: {
                                    goto lab_0x49bae;
                                }
                                default: {
                                    goto lab_0x49c9f;
                                }
                            }
                        } else {
                            // 0x4998c
                            v34 = v33;
                            v31 = v30;
                            v28 = v26;
                            v38 = v37;
                            v41 = v40;
                            v24 = v22;
                            v18 = v60;
                            v16 = v15;
                            if (v53 == 115) {
                                int64_t v67; // 0x497ec
                                int32_t * v68; // 0x497ec
                                int32_t v69; // 0x497ec
                                if (v26 < 48) {
                                    // 0x49ad9
                                    v69 = v26 + 8;
                                    v68 = v22;
                                    v67 = (int64_t)v26 + v44;
                                } else {
                                    int64_t v70 = (int64_t)v22; // 0x49aef
                                    v69 = v26;
                                    v68 = (int32_t *)(v70 + 8);
                                    v67 = v70;
                                }
                                int32_t * v71 = v68;
                                int32_t v72 = v69;
                                int64_t v73 = *(int64_t *)v67; // 0x49b03
                                int64_t v74 = v73; // 0x49b0b
                                int64_t v75 = 0; // 0x49b0b
                                if (v73 != 0) {
                                    int64_t v76 = -1; // 0x49b16
                                    int64_t v77 = 0; // 0x49b16
                                    while (v76 != 0) {
                                        int64_t v78 = v74;
                                        v76--;
                                        bool v79; // 0x497ec
                                        v74 = v78 + (v79 ? -1 : 1);
                                        v77 = v76;
                                        if (*(char *)v78 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v77 = 0;
                                    }
                                    v75 = 0xfffffffe - v77 & 0xffffffff;
                                }
                                // 0x49b23
                                v35 = v75;
                                int64_t v80 = function_36126(&result7, 0, &v35, &v48); // 0x49b3e
                                uint16_t v81 = v35; // 0x49b43
                                v34 = v33;
                                v31 = v30;
                                v28 = v72;
                                v38 = v37;
                                v41 = v40;
                                v24 = v71;
                                v18 = v80;
                                v16 = v15;
                                if (v81 == 0) {
                                    goto lab_0x49c9f;
                                } else {
                                    // 0x49b51
                                    v27 = v72;
                                    v23 = v71;
                                    v19 = v73 + (int64_t)v81;
                                    v20 = v73;
                                    goto lab_0x49c9a;
                                }
                            } else {
                                goto lab_0x49c9f;
                            }
                        }
                    }
                } else {
                    switch (v53) {
                        case 106: {
                            goto lab_0x49bae;
                        }
                        case 112: {
                            int64_t v82; // 0x497ec
                            int64_t v83; // 0x497ec
                            int32_t * v84; // 0x497ec
                            int32_t v85; // 0x497ec
                            if (v26 < 48) {
                                int32_t v86 = v26 + 8; // 0x499bc
                                v85 = v86;
                                v84 = v22;
                                v82 = (int64_t)v26 + v44;
                                v83 = v86;
                            } else {
                                int64_t v87 = (int64_t)v22; // 0x499d0
                                int64_t v88 = v87 + 8; // 0x499d8
                                v85 = v26;
                                v84 = (int32_t *)v88;
                                v82 = v87;
                                v83 = v88;
                            }
                            int32_t * v89 = v84;
                            int32_t v90 = v85;
                            int64_t v91 = *(int64_t *)v82; // 0x499e4
                            v35 = 0;
                            int64_t v92 = function_4fbc4(v47, v91, (int32_t)v83, v43); // 0x499fb
                            if (v92 != 0) {
                                int32_t v93 = *(int32_t *)(v92 + 24); // 0x49a05
                                v35 = v93;
                                function_4fa50(v47, v92, v93);
                            }
                            int64_t v94 = function_36126(&result7, 0, &v35, &v48); // 0x49a2b
                            v34 = v33;
                            v31 = v30;
                            v28 = v90;
                            v38 = v37;
                            v41 = v40;
                            v24 = v89;
                            v18 = v94;
                            v16 = v15;
                            if ((char)v6 != 0) {
                                if (v40 != 0) {
                                    // 0x49a82
                                    v34 = v33;
                                    v31 = v30;
                                    v28 = v90;
                                    v38 = v37;
                                    v41 = v40;
                                    v24 = v89;
                                    v18 = v94;
                                    v16 = v15;
                                    if (v37 == 0) {
                                        int64_t v95 = function_4fbc4(v47, v91, v50, v49); // 0x49a94
                                        v34 = v33;
                                        v31 = 0;
                                        v28 = v90;
                                        v38 = v91;
                                        v41 = v40;
                                        v24 = v89;
                                        v18 = 0;
                                        v16 = v15;
                                        if (v95 != 0) {
                                            int64_t v96 = function_4f3da(v95, *v1, v51); // 0x49ac0
                                            v34 = v33;
                                            v31 = v95;
                                            v28 = v90;
                                            v38 = v91;
                                            v41 = v40;
                                            v24 = v89;
                                            v18 = v96;
                                            v16 = v15;
                                        }
                                    }
                                } else {
                                    int64_t v97 = function_4fbc4(v47, v91, v50, v49); // 0x49a49
                                    v34 = 0;
                                    v31 = v30;
                                    v28 = v90;
                                    v38 = v37;
                                    v41 = v91;
                                    v24 = v89;
                                    v18 = 0;
                                    v16 = v15;
                                    if (v97 != 0) {
                                        int64_t v98 = function_4f3da(v97, *v1, v51); // 0x49a75
                                        v34 = v97;
                                        v31 = v30;
                                        v28 = v90;
                                        v38 = v37;
                                        v41 = v91;
                                        v24 = v89;
                                        v18 = v98;
                                        v16 = v98;
                                    }
                                }
                            }
                            goto lab_0x49c9f;
                        }
                        default: {
                            // 0x49975
                            v34 = v33;
                            v31 = v30;
                            v28 = v26;
                            v38 = v37;
                            v41 = v40;
                            v24 = v22;
                            v18 = v60;
                            v16 = v15;
                            if (v53 != 105) {
                                goto lab_0x49c9f;
                            } else {
                                goto lab_0x49b64;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x49caa:;
    uint32_t v99 = (int32_t)a2; // 0x49caa
    if (v99 == 6) {
        // 0x49dc7
        if (v11 == 0) {
            // 0x49eeb
            return result2;
        }
        int32_t * v100 = (int32_t *)(result7 + 34); // 0x49de0
        function_473f6(a1, v11, *v100, v9);
        int128_t v101 = __asm_movups(*(int128_t *)(result7 + 14)); // 0x49df4
        *(int64_t *)(v13 + 36) = *(int64_t *)(result7 + 2);
        __asm_movups_133(*(int128_t *)(v13 + 48), v101);
        *(int32_t *)(v13 + 44) = *(int32_t *)(result7 + 10);
        *(int32_t *)(v13 + 68) = *(int32_t *)(result7 + 30);
        uint32_t v102 = *v100; // 0x49e15
        int64_t result3 = v102; // 0x49e15
        int32_t * v103 = (int32_t *)(v13 + 28); // 0x49e1a
        *v103 = v102;
        if ((*(char *)(v13 + 32) & 64) == 0) {
            // 0x49eeb
            return result3;
        }
        int64_t result4 = result3 | 8; // 0x49e24
        *v103 = (int32_t)result4;
        // 0x49eeb
        return result4;
    }
    if (v99 < 7) {
        if (v99 != 4) {
            int64_t result5; // 0x497ec
            if (v99 < 5) {
                // 0x49cc0
                result5 = result2;
                if (v99 == 3 && v11 != 0) {
                    // 0x49d01
                    function_4f722(v11);
                    int32_t * v104 = (int32_t *)(v13 + 32); // 0x49d0b
                    *v104 = *v104 & -74 | 9;
                    *(int32_t *)(v13 + 24) = *(int32_t *)(result7 + 2);
                    uint32_t v105 = *(int32_t *)(result7 + 6); // 0x49d22
                    *(int32_t *)(v13 + 20) = v105;
                    result5 = v105;
                }
            } else {
                // 0x49da6
                result5 = result2;
                if (v11 != 0) {
                    int32_t * v106 = (int32_t *)(v13 + 32); // 0x49db5
                    uint32_t v107 = *v106 & -193 | 128;
                    *v106 = v107;
                    result5 = v107;
                }
            }
            // 0x49eeb
            return result5;
        }
        // 0x49d30
        if (v11 == 0) {
            // 0x49eeb
            return result2;
        }
        int32_t * v108 = (int32_t *)(v13 + 32); // 0x49d41
        uint32_t result6 = *v108 & -2; // 0x49d45
        *v108 = result6 | 16;
        if (*(int32_t *)(result7 + 2) == 0) {
            // 0x49eeb
            return result6;
        }
        int64_t v109 = 0; // 0x49d6e
        if (v12 != 0) {
            int64_t v110 = *(int64_t *)v12; // 0x49d70
            v109 = 0;
            if (v110 != 0) {
                // 0x49d78
                *v108 = result6 | 48;
                int64_t v111 = *(int64_t *)v11; // 0x49d89
                function_4e554(a1 + (int64_t)&g6, v110, v111, v9);
                v109 = v110;
            }
        }
        // 0x49eeb
        return function_47660(a1, *(int64_t *)v11, v109);
    }
    if (v99 == 8) {
        // 0x49e9b
        if (v11 == 0) {
            // 0x49eeb
            return result2;
        }
        uint32_t v112 = *(int32_t *)(result7 + 72); // 0x49eb5
        int128_t v113 = __asm_movups(*(int128_t *)(result7 + 14)); // 0x49eb8
        *(int64_t *)(v13 + 36) = *(int64_t *)(result7 + 2);
        int32_t * v114 = (int32_t *)(v13 + 32); // 0x49ec3
        *v114 = *v114 | 4;
        *(int32_t *)(v13 + 44) = *(int32_t *)(result7 + 10);
        __asm_movups_133(*(int128_t *)(v13 + 48), v113);
        if (v112 != 0) {
            int32_t * v115 = (int32_t *)(v13 + 68); // 0x49ed5
            uint32_t v116 = *v115; // 0x49ed5
            *v115 = v116 <= v112 ? 0 : v116 - v112;
        }
        // 0x49eeb
        return result7;
    }
    // 0x49cd3
    if (v99 > 7 || v11 == 0) {
        // 0x49eeb
        return result2;
    }
    int32_t v117 = *(int32_t *)(result7 + 34); // 0x49e4a
    int128_t v118 = __asm_movups(*(int128_t *)(result7 + 14)); // 0x49e4d
    *(int64_t *)(v13 + 36) = *(int64_t *)(result7 + 2);
    __asm_movups_133(*(int128_t *)(v13 + 48), v118);
    *(int32_t *)(v13 + 44) = *(int32_t *)(result7 + 10);
    int32_t * v119 = (int32_t *)(v13 + 32); // 0x49e64
    *v119 = *v119 | 2;
    *(int32_t *)(v13 + 72) = v117;
    *(int32_t *)(v13 + 64) = *(int32_t *)(result7 + 30);
    char * v120 = (char *)(v13 + 76); // 0x49e71
    char v121 = *v120; // 0x49e71
    if (v121 != -1) {
        // 0x49e7a
        *v120 = v121 + 1;
    }
    // 0x49e80
    if (v117 == 0) {
        // 0x49eeb
        return result7;
    }
    // 0x49e88
    if (*(int32_t *)(result7 + 38) == 0) {
        int64_t * v122 = (int64_t *)(v11 + 104); // 0x49e92
        *v122 = *v122 + 1;
    }
    // 0x49eeb
    return result7;
  lab_0x49c9a:;
    int64_t v123 = function_36126(&result7, 0, (int16_t *)v20, (int64_t *)v19); // 0x49c9a
    v34 = v33;
    v31 = v30;
    v28 = v27;
    v38 = v37;
    v41 = v40;
    v24 = v23;
    v18 = v123;
    v16 = v15;
    goto lab_0x49c9f;
  lab_0x49c9f:;
    int64_t v124 = v43 + 16; // 0x49c9f
    v42 = v124;
    v14 = v16;
    v17 = v18;
    v21 = v24;
    v39 = v41;
    v36 = v38;
    v25 = v28;
    v29 = v31;
    v32 = v34;
    v11 = v34;
    v12 = v31;
    result2 = v18;
    v13 = v16;
    if (v9 == v124) {
        // break -> 0x49caa
        goto lab_0x49caa;
    }
    goto lab_0x4995d;
  lab_0x49b64:;
    int64_t v125; // 0x497ec
    int32_t * v126; // 0x497ec
    int32_t v127; // 0x497ec
    if (v26 < 48) {
        // 0x49b70
        v127 = v26 + 8;
        v126 = v22;
        v125 = (int64_t)v26 + v44;
    } else {
        int64_t v128 = (int64_t)v22; // 0x49b86
        v127 = v26;
        v126 = (int32_t *)(v128 + 8);
        v125 = v128;
    }
    // 0x49b9a
    v35 = (int16_t)*(int32_t *)v125;
    v27 = v127;
    v23 = v126;
    int64_t v129; // bp-196, 0x497ec
    v19 = (int64_t)&v129;
    v20 = v45;
    goto lab_0x49c9a;
  lab_0x49bae:;
    int64_t v130; // 0x497ec
    int32_t * v131; // 0x497ec
    int32_t v132; // 0x497ec
    if (v26 < 48) {
        // 0x49bba
        v132 = v26 + 8;
        v131 = v22;
        v130 = (int64_t)v26 + v44;
    } else {
        int64_t v133 = (int64_t)v22; // 0x49bd0
        v132 = v26;
        v131 = (int32_t *)(v133 + 8);
        v130 = v133;
    }
    // 0x49be4
    v35 = (int16_t)*(int64_t *)v130;
    v27 = v132;
    v23 = v131;
    int64_t v134; // bp-192, 0x497ec
    v19 = (int64_t)&v134;
    v20 = v45;
    goto lab_0x49c9a;
}

// Address range: 0x367ab6 - 0x367ab7
int64_t function_367ab6(int64_t a1) {
    // 0x367ab6
    int64_t result; // 0x367ab6
    return result;
}

// Address range: 0x367b0b - 0x367b0c
int64_t function_367b0b(void) {
    // 0x367b0b
    int64_t result; // 0x367b0b
    return result;
}

// Address range: 0x367b67 - 0x367b69
int64_t function_367b67(void) {
    // 0x367b67
    int64_t v1; // 0x367b67
    return function_367bb9(v1, v1, v1);
}

// Address range: 0x367bb1 - 0x367bb4
int64_t function_367bb1(void) {
    // 0x367bb1
    int64_t result; // 0x367bb1
    return result;
}

// Address range: 0x367bb9 - 0x367bbf
int64_t function_367bb9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x367bb9
    return 0;
}

// Address range: 0x367bd8 - 0x367bd9
int64_t function_367bd8(void) {
    // 0x367bd8
    int64_t result; // 0x367bd8
    return result;
}

// Address range: 0x367be2 - 0x367be5
int64_t function_367be2(void) {
    // 0x367be2
    int64_t result; // 0x367be2
    return result;
}

// Address range: 0x367c01 - 0x367ce9
int64_t function_367c01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x367c01
    int64_t result = v2 & 0x214d5e2f; // 0x367c04
    *(int64_t *)0x1989b11 = *(int64_t *)0x1989b11 | a1;
    char * v3 = (char *)result; // 0x367c10
    char v4 = result; // 0x367c10
    *v3 = *v3 + v4;
    *(char *)a3 = v4;
    *v3 = *v3 + v4;
    int64_t v5 = a3 & -0xff01 | (int64_t)&g37; // 0x367c1b
    int64_t v6 = a4 - 1; // 0x367c1d
    if (v6 == 0) {
        // 0x367c1f
        *(char *)a1 = __asm_insb((int16_t)v5);
        return result;
    }
    // 0x367c6e
    if (llvm_ctpop_i8(v4 - 1) % 2 == 0) {
        int32_t * v7 = (int32_t *)result; // 0x367cbc
        uint32_t v8 = *v7; // 0x367cbc
        uint32_t v9 = (int32_t)v6 % 32; // 0x367cbc
        if (v9 != 0) {
            *v7 = v8 >> 32 - v9 | v8 << v9;
        }
        // 0x367c72
        return result;
    }
    int64_t v10 = a4 - 2; // 0x367c70
    if (v10 == 0) {
        // 0x367c72
        return result;
    }
    // 0x367c76
    __asm_outsb((int16_t)v5, *(char *)&v1);
    char v11 = *(char *)-0x78090c82 + (char)(v2 / 256); // 0x367c77
    unsigned char v12 = llvm_ctpop_i8(v11); // 0x367c77
    *(char *)-0x78090c82 = v11;
    int64_t v13 = v1;
    if (v12 % 2 != 0) {
        // 0x367c80
        bool v14; // 0x367c01
        v1 = v13 + (v14 ? -1 : 1);
        *(int32_t *)(v2 - 67) = (int32_t)result;
        // 0x367c72
        return 0;
    }
    int32_t * v15 = (int32_t *)(8 * v13 + v10); // 0x367caa
    *v15 = *v15 + (int32_t)v2;
    *(int32_t *)a1 = __asm_insd(0);
    return v2 & 0x214d0000 | (int64_t)*(char *)&v1 | 0xe700;
}

// Address range: 0x367ce9 - 0x367d2e
int64_t function_367ce9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x367ce9
    *(char *)0x58b8f3f4 = *(char *)0x58b8f3f4 + (char)(v2 / 256);
    if (a4 != 0) {
        int64_t result = unknown_6913a6fe(a5); // 0x367cf8
        char * v3 = (char *)(v2 & -256); // 0x367cfd
        *v3 = *v3 + (char)a4;
        return result;
    }
    int32_t * v4 = (int32_t *)(v2 + 0x13d00fa); // 0x367d02
    int64_t v5; // 0x367ce9
    *v4 = *v4 - (int32_t)(int64_t)&v5;
    int64_t v6 = a3 & -0xff01 | (int64_t)&g38; // 0x367d09
    int32_t * v7 = (int32_t *)(v2 - 0x73e69fa); // 0x367d0b
    uint32_t v8 = *v7; // 0x367d0b
    uint32_t v9 = (int32_t)v6; // 0x367d0b
    *v7 = v8 - v9;
    int32_t * v10 = (int32_t *)(v2 - 93); // 0x367d13
    *v10 = *v10 + (int32_t)v2 + (int32_t)(v8 < v9);
    __asm_in(69);
    uint32_t result2 = *(int32_t *)&v1; // 0x367d18
    *(char *)a5 = __asm_insb((int16_t)v6);
    *(int32_t *)0x6950b3f7013d00bf = result2;
    return result2;
}

// Address range: 0x367d2e - 0x367d39
int64_t function_367d2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x367d2e
    int64_t v1; // 0x367d2e
    int32_t * v2 = (int32_t *)(v1 - 0x5fbe7f4); // 0x367d2e
    *v2 = *v2 & (int32_t)a4;
    return function_17386d8();
}

// Address range: 0x367d51 - 0x367d52
int64_t function_367d51(void) {
    // 0x367d51
    int64_t result; // 0x367d51
    return result;
}

// Address range: 0x367d88 - 0x367d8b
int64_t function_367d88(void) {
    // 0x367d88
    int64_t result; // 0x367d88
    return result;
}

// Address range: 0x367d8d - 0x367d9d
int64_t function_367d8d(void) {
    // 0x367d8d
    return function_367d51();
}

// Address range: 0x367db1 - 0x367db4
int64_t function_367db1(void) {
    // 0x367db1
    int64_t result; // 0x367db1
    return result;
}

// Address range: 0x367dd7 - 0x367e0d
int64_t function_367dd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x367dd9
    if (v1 != 0) {
        char * v2 = (char *)(a1 + 0xfbbcd); // 0x367dd9
        *v2 = *v2 << v1;
    }
    int64_t v3; // 0x367dd7
    __asm_out_134(58, (char)v3);
    int32_t v4 = *(int32_t *)(a3 + 48 + 4 * a4); // 0x367def
    int32_t * v5 = (int32_t *)((v3 + a2 & 0xffffffff) + 0x16013ddd); // 0x367df5
    int32_t v6 = *v5; // 0x367df5
    *v5 = (int32_t)((char)a3 > -1 - (char)(v3 / 256)) - (int32_t)a1 + v6;
    int64_t result = unknown_1064450a(); // 0x367e04
    char * v7 = (char *)((int64_t)(v4 + (int32_t)v3) + 36); // 0x367e09
    *v7 = *v7 | (char)result;
    return result;
}

// Address range: 0x367e0d - 0x367e2b
int64_t function_367e0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x367e0d
    int64_t v1; // 0x367e0d
    __asm_out_135(-44, (int32_t)v1);
    return a1 & 0xffffffff;
}

// Address range: 0x367e42 - 0x367e69
int64_t function_367e42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 122); // 0x367e42
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x367e42
    int64_t v3; // 0x367e42
    *(char *)a2 = *(char *)&v2 & (char)v3;
    __asm_iretd();
    char * v4 = (char *)((8 * a4 + 512 & 0x7fffffff8) + a3); // 0x367e51
    *v4 = *v4 & (char)v3;
    int64_t v5 = unknown_ffffffffc1fb195a(); // 0x367e54
    int32_t * v6 = (int32_t *)v5; // 0x367e59
    *v6 = *v6 & (int32_t)v5;
    return (v5 + 249) % 256 | v5 & -256;
}

// Address range: 0x3680b6 - 0x3680cb
int64_t function_3680b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 - 111); // 0x3680b6
    *v1 = 2 * *v1;
    return (a4 + 219) % 256 | a4 & 0xffffff00;
}

// Address range: 0x3680cc - 0x3680cf
int64_t function_3680cc(void) {
    // 0x3680cc
    int64_t result; // 0x3680cc
    return result;
}

// Address range: 0x36815f - 0x3681a8
int64_t function_36815f(void) {
    // 0x36815f
    int64_t result; // 0x36815f
    return result;
}

// Address range: 0x368209 - 0x36820c
int64_t function_368209(void) {
    // 0x368209
    int64_t result; // 0x368209
    return result;
}

// Address range: 0x36825f - 0x368261
int64_t function_36825f(void) {
    // 0x36825f
    int64_t result; // 0x36825f
    return result;
}

// Address range: 0x3682a6 - 0x368315
int64_t function_3682a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3682a6
    int64_t v1; // 0x3682a6
    int64_t v2 = v1;
    bool v3; // 0x3682a6
    int64_t v4 = (v2 + 186 + (int64_t)v3) % 256 | v2 & 0xffffff00; // 0x3682a6
    char v5 = *(char *)((a1 & 0xffffffff) + 0x78013d00 + 2 * a3); // 0x3682b4
    int32_t v6; // 0x3682a6
    int32_t result = v6 & (int32_t)(a1 & 0xffff0000 | (int64_t)((256 * (int16_t)a1 >> 8) * (int16_t)v5)); // 0x3682bb
    if (result >= 0) {
        // 0x3682fd
        *(int64_t *)(v4 + -16 - (int64_t)&g3) = 0xac0900;
        return result;
    }
    int32_t * v7 = (int32_t *)((v3 ? -1 : 1) + a2); // 0x3682c7
    *v7 = *v7 - 0x53b5dc27;
    return *(int64_t *)v4;
}

// Address range: 0x368344 - 0x368347
int64_t function_368344(int64_t a1) {
    // 0x368344
    int64_t result; // 0x368344
    int64_t v1 = result;
    *(char *)v1 = 2 * (char)v1;
    return result;
}

// Address range: 0x36835c - 0x3683f4
int64_t function_36835c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x36835c
    int64_t v1; // 0x36835c
    uint64_t result = v1;
    bool v2; // 0x36835c
    if (v2 || false) {
        // 0x3683d5
        return result;
    }
    char v3 = *(char *)(a2 - 0x59b816a4); // 0x368363
    return 256 * (int64_t)(v3 | (char)(result / 256)) | result & -0xff01;
}

// Address range: 0x368447 - 0x368448
int64_t function_368447(int64_t a1) {
    // 0x368447
    int64_t result; // 0x368447
    return result;
}

// Address range: 0x36848a - 0x368494
int64_t function_36848a(void) {
    // 0x36848a
    return function_ffffffff8036bb37();
}

// Address range: 0x3684e3 - 0x3684e4
int64_t function_3684e3(void) {
    // 0x3684e3
    int64_t result; // 0x3684e3
    return result;
}

// Address range: 0x3684f3 - 0x368506
int64_t function_3684f3(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 0x7edf243a + 8 * a1); // 0x3684fc
    *v1 = *v1 + (char)(a3 / 256);
    int64_t v2; // 0x3684f3
    return v2 & -256 | (int64_t)*(char *)-0x341a4cfe17f69729;
}

// Address range: 0x368506 - 0x368568
int64_t function_368506(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = unknown_ffffffff9f3ca50c(); // 0x368506
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v3 = (int32_t)v2 >> 31; // 0x36850e
    uint32_t v4 = *(int32_t *)(v3 - 0x1765f2fc); // 0x36851f
    int64_t v5; // 0x368506
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v5;
    char * v6 = (char *)v2; // 0x368529
    *v6 = *v6 + (char)(v4 / 256);
    int64_t v7 = v2 + v3; // 0x36852d
    int64_t v8 = v7 & 0xffffffff; // 0x36852d
    char * v9 = (char *)(v8 + 0x1e8802f); // 0x36852f
    *v9 = *v9 + (char)v1;
    int32_t v10 = *(int32_t *)v8; // 0x368538
    int32_t * v11 = (int32_t *)(v8 + (8 * v5 | 1)); // 0x36853e
    *v11 = *v11 >> 25;
    int64_t v12 = v1 + 256 * v3;
    int64_t v13 = v1 & 0xffff00ff; // 0x368547
    *(int32_t *)(int64_t)(0x175726e * v10) = (int32_t)(v12 & 0xff00 | v13);
    *(int32_t *)0x766d9e3f01e81f1d = v4;
    uint32_t v14 = (int32_t)v7 % 32; // 0x368557
    if (v14 != 0) {
        int32_t * v15 = (int32_t *)((v12 ^ (int64_t)v4) & 0xff00 | v13); // 0x368557
        *v15 = *v15 << v14;
    }
    return (int64_t)*(int32_t *)-0x7ee4fe17d92d6788;
}

// Address range: 0x36856b - 0x368571
int64_t function_36856b(int64_t a1) {
    // 0x36856b
    return a1 & 0xffffffff;
}

// Address range: 0x501d23 - 0x501d5d
int64_t function_501d23(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x501d23
    int64_t v1; // 0x501d23
    char * v2 = (char *)(v1 - 57); // 0x501d23
    *v2 = *v2 + (char)a4;
    int64_t v3; // 0x501d23
    *(char *)a5 = *(char *)&v3 ^ (char)a5;
    int64_t v4; // 0x501d23
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 + (char)v5;
    *(int64_t *)(a1 + 24) = v4;
    if ((a3 & 17) == 0) {
        v4 = function_501d14();
    }
    if (a2 != 0) {
        v4 = function_501d14();
    }
    uint64_t v6 = *(int64_t *)(a1 + 160); // 0x501d3e
    int64_t v7; // 0x501d23
    if (v6 < 2) {
        int64_t v8 = function_501d14(); // 0x501d49
        v4 = v8;
        v7 = v8;
    } else {
        // 0x501d3e
        v7 = v4;
    }
    // 0x501d4b
    *(int64_t *)(a1 + 40) = v7;
    *(int64_t *)(a1 + 32) = v4;
    int64_t result = 4 * v6 - 4 + v4; // 0x501d53
    *(int64_t *)(a1 + 48) = result;
    return result;
}

// Address range: 0x501d60 - 0x501e40
int64_t function_501d60(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x501d6e
    int64_t * v2 = (int64_t *)a1; // 0x501d75
    *v2 = v1;
    int64_t * v3 = (int64_t *)(v1 - 24); // 0x501d78
    *(int64_t *)(*v3 + a1) = *(int64_t *)(a2 + 16);
    int64_t * v4 = (int64_t *)(a3 + 8); // 0x501d84
    int64_t v5 = *v4; // 0x501d84
    *(int64_t *)(a1 + 8) = v5;
    int64_t v6 = *v3 + a1; // 0x501d94
    int64_t v7 = *(int64_t *)(v5 - 24) + a3; // 0x501d9e
    function_54cf90(v6, v7);
    function_4fcce0(v6, v6 + 208);
    int64_t * v8 = (int64_t *)(v7 + 216); // 0x501db9
    *v8 = 0;
    int64_t v9 = a3 + 16; // 0x501dcb
    *(int64_t *)(v6 + 216) = *v8;
    *(int32_t *)(v6 + 224) = *(int32_t *)(v7 + 224);
    *(int64_t *)(v6 + 232) = 0;
    *(char *)(v6 + 228) = *(char *)(v7 + 228);
    int64_t v10 = a1 + 16; // 0x501e05
    *v4 = 0;
    *v2 = v9;
    *(int64_t *)(*(int64_t *)(a3 - 8) + a1) = *(int64_t *)(a2 + 24);
    function_500b70(v10, v9);
    int64_t result = *(int64_t *)(a1 - 8); // 0x501e2b
    *(int64_t *)(a1 + 232 + result) = v10;
    return result;
}

// Address range: 0x501e40 - 0x501f9b
// From class:    std::basic_ifstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_501e40(int64_t a1, int64_t a2) {
    // 0x501e40
    int64_t v1; // 0x501e40
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x501e40
    *(int64_t *)v1 = v2;
    *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 16);
    *(int64_t *)(v1 + 8) = 0;
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t v3 = v1 + 256; // 0x501e74
    function_54cb80(v3);
    int64_t * v4 = (int64_t *)v1; // 0x501e98
    *v4 = (int64_t)&g19;
    int64_t * v5 = (int64_t *)(v1 + 472); // 0x501e9e
    *v5 = 0;
    int32_t * v6 = (int32_t *)(v1 + 480); // 0x501ea9
    *v6 = 0;
    int64_t * v7 = (int64_t *)v3; // 0x501eb3
    *v7 = (int64_t)&g20;
    int64_t * v8 = (int64_t *)(a2 + 8); // 0x501eba
    char * v9 = (char *)(v1 + 484); // 0x501ebe
    *v9 = 0;
    int64_t * v10 = (int64_t *)(v1 + 488); // 0x501ec5
    *v10 = 0;
    *(int64_t *)(v1 + 496) = 0;
    *(int64_t *)(v1 + 504) = 0;
    *(int64_t *)(v1 + 8) = *v8;
    *(int64_t *)(v1 + (int64_t)&g1) = 0;
    int64_t v11 = *(int64_t *)(a2 - 24) + a2; // 0x501efd
    function_54cf90(v3, v11);
    function_4fcce0(v3, v1 + 464);
    int64_t * v12 = (int64_t *)(v11 + 216); // 0x501f17
    *v12 = 0;
    *v5 = *v12;
    *v6 = *(int32_t *)(v11 + 224);
    int64_t v13 = v1 + 16; // 0x501f4d
    *v10 = 0;
    *v9 = *(char *)(v11 + 228);
    *v8 = 0;
    *v7 = (int64_t)&g22;
    *v4 = (int64_t)&g21;
    int64_t result = function_500b70(v13, a2 + 16); // 0x501f86
    *v10 = v13;
    return result;
}

// Address range: 0x501f9b - 0x501fd0
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_501f9b(void) {
    // 0x501f9b
    while (true) {
        // 0x501f9e
        int64_t v1; // 0x501f9b
        *(int64_t *)(v1 + 256) = (int64_t)&g18;
        function_54cf10(v1);
        int64_t v2; // 0x501f9b
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        *(int64_t *)(v1 + 8) = 0;
        v2 = (int64_t)&g39;
    }
}

// Address range: 0x501fd0 - 0x502095
int64_t function_501fd0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x501fee
    int64_t v2 = *(int64_t *)(a2 - 24) + a2; // 0x501ff4
    function_54d0a0(v1, v2);
    function_4fcce0(v1, v1 + 208);
    function_4fcce0(v2, v2 + 208);
    int64_t * v3 = (int64_t *)(v1 + 216); // 0x50201d
    int64_t * v4 = (int64_t *)(v2 + 216); // 0x502024
    *v3 = *v4;
    *v4 = *v3;
    int32_t * v5 = (int32_t *)(v2 + 224); // 0x502042
    int32_t * v6 = (int32_t *)(v1 + 224); // 0x502048
    *v6 = *v5;
    *v5 = *v6;
    char * v7 = (char *)(v2 + 228); // 0x50205a
    char * v8 = (char *)(v1 + 228); // 0x502061
    *v8 = *v7;
    *v7 = *v8;
    int64_t * v9 = (int64_t *)(a2 + 8); // 0x502074
    int64_t v10 = *v9; // 0x502074
    int64_t * v11 = (int64_t *)(a1 + 8); // 0x502078
    *v11 = v10;
    *v9 = *v11;
    return function_500d70(a1 + 16, a2 + 16, v10);
}

// Address range: 0x5020a0 - 0x5020a5
int64_t function_5020a0(int64_t a1) {
    // 0x5020a0
    return a1 + 16;
}

// Address range: 0x5020b0 - 0x5020b9
int64_t function_5020b0(int64_t a1) {
    // 0x5020b0
    return function_4f15a0(a1 + 120);
}

// Address range: 0x5020c0 - 0x5020c9
int64_t function_5020c0(int64_t a1) {
    // 0x5020c0
    return function_4f15a0(a1 + 120);
}

// Address range: 0x5020d0 - 0x502197
int64_t function_5020d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x5020de
    int64_t * v2 = (int64_t *)a1; // 0x5020e9
    *v2 = v1;
    int64_t v3 = *(int64_t *)(v1 - 24) + a1; // 0x5020f0
    *(int64_t *)v3 = *(int64_t *)(a2 + 16);
    int64_t v4 = *(int64_t *)(a3 - 24) + a3; // 0x502100
    function_54cf90(v3, v4);
    function_4fcce0(v3, v3 + 208);
    int64_t * v5 = (int64_t *)(v4 + 216); // 0x50211a
    *v5 = 0;
    int64_t v6 = a3 + 8; // 0x50212c
    *(int64_t *)(v3 + 216) = *v5;
    *(int32_t *)(v3 + 224) = *(int32_t *)(v4 + 224);
    *(int64_t *)(v3 + 232) = 0;
    *(char *)(v3 + 228) = *(char *)(v4 + 228);
    int64_t v7 = a1 + 8; // 0x502161
    *v2 = v6;
    *(int64_t *)(*(int64_t *)(a3 - 16) + a1) = *(int64_t *)(a2 + 24);
    function_500b70(v7, v6);
    int64_t result = *(int64_t *)(a1 - 16); // 0x502182
    *(int64_t *)(a1 + 232 + result) = v7;
    return result;
}

// Address range: 0x502197 - 0x5022db
// From class:    std::basic_ofstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_502197(int64_t a1, int64_t a2) {
    // 0x502197
    int64_t v1; // 0x502197
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x502197
    *(int64_t *)v1 = v2;
    *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 16);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t v3 = v1 + 248; // 0x5021c4
    function_54cb80(v3);
    int64_t * v4 = (int64_t *)v1; // 0x5021e8
    *v4 = (int64_t)&g23;
    int64_t * v5 = (int64_t *)(v1 + 464); // 0x5021ee
    *v5 = 0;
    int32_t * v6 = (int32_t *)(v1 + 472); // 0x5021f9
    *v6 = 0;
    int64_t * v7 = (int64_t *)v3; // 0x502203
    *v7 = (int64_t)&g24;
    char * v8 = (char *)(v1 + 476); // 0x50220e
    *v8 = 0;
    int64_t * v9 = (int64_t *)(v1 + 480); // 0x502215
    *v9 = 0;
    *(int64_t *)(v1 + 488) = 0;
    *(int64_t *)(v1 + 496) = 0;
    *(int64_t *)(v1 + 504) = 0;
    int64_t v10 = *(int64_t *)(a2 - 24) + a2; // 0x502245
    function_54cf90(v3, v10);
    function_4fcce0(v3, v1 + 456);
    int64_t * v11 = (int64_t *)(v10 + 216); // 0x50225f
    *v11 = 0;
    *v5 = *v11;
    *v6 = *(int32_t *)(v10 + 224);
    int64_t v12 = v1 + 8; // 0x502295
    *v9 = 0;
    *v8 = *(char *)(v10 + 228);
    *v7 = (int64_t)&g26;
    *v4 = (int64_t)&g25;
    int64_t result = function_500b70(v12, a2 + 8); // 0x5022c6
    *v9 = v12;
    return result;
}

// Address range: 0x5022db - 0x502308
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_5022db(void) {
    // 0x5022db
    while (true) {
        // 0x5022de
        int64_t v1; // 0x5022db
        *(int64_t *)(v1 + 248) = (int64_t)&g18;
        function_54cf10(v1);
        int64_t v2; // 0x5022db
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        v2 = (int64_t)&g39;
    }
}

// Address range: 0x502310 - 0x5023c3
int64_t function_502310(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x50232e
    int64_t v2 = *(int64_t *)(a2 - 24) + a2; // 0x502334
    function_54d0a0(v1, v2);
    function_4fcce0(v1, v1 + 208);
    function_4fcce0(v2, v2 + 208);
    int64_t * v3 = (int64_t *)(v1 + 216); // 0x50235d
    int64_t * v4 = (int64_t *)(v2 + 216); // 0x502364
    *v3 = *v4;
    *v4 = *v3;
    int32_t * v5 = (int32_t *)(v2 + 224); // 0x502382
    int32_t * v6 = (int32_t *)(v1 + 224); // 0x502388
    *v6 = *v5;
    *v5 = *v6;
    char * v7 = (char *)(v2 + 228); // 0x50239a
    unsigned char v8 = *v7; // 0x50239a
    char * v9 = (char *)(v1 + 228); // 0x5023a1
    *v9 = v8;
    *v7 = *v9;
    return function_500d70(a1 + 8, a2 + 8, (int64_t)v8);
}

// Address range: 0x5023d0 - 0x5023d5
int64_t function_5023d0(int64_t a1) {
    // 0x5023d0
    return a1 + 8;
}

// Address range: 0x5023e0 - 0x5023e9
int64_t function_5023e0(int64_t a1) {
    // 0x5023e0
    return function_4f15a0(a1 + 112);
}

// Address range: 0x5023f0 - 0x5023f9
int64_t function_5023f0(int64_t a1) {
    // 0x5023f0
    return function_4f15a0(a1 + 112);
}

// Address range: 0x502400 - 0x502517
int64_t function_502400(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a2 + 16); // 0x50240b
    int64_t * v2 = (int64_t *)a1; // 0x502415
    *v2 = v1;
    int64_t * v3 = (int64_t *)(v1 - 24); // 0x502418
    *(int64_t *)(*v3 + a1) = *(int64_t *)(a2 + 24);
    int64_t * v4 = (int64_t *)(a3 + 8); // 0x502424
    int64_t v5 = *v4; // 0x502424
    *(int64_t *)(a1 + 8) = v5;
    int64_t v6 = *v3 + a1; // 0x502435
    int64_t v7 = *(int64_t *)(v5 - 24) + a3; // 0x50243f
    function_54cf90(v6, v7);
    function_4fcce0(v6, v6 + 208);
    int64_t * v8 = (int64_t *)(v7 + 216); // 0x502459
    *v8 = 0;
    int64_t v9 = a3 + 24; // 0x50246b
    *(int64_t *)(v6 + 216) = *v8;
    *(int32_t *)(v6 + 224) = *(int32_t *)(v7 + 224);
    *(int64_t *)(v6 + 232) = 0;
    *(char *)(v6 + 228) = *(char *)(v7 + 228);
    int64_t v10 = *(int64_t *)(a2 + 32); // 0x50249f
    int64_t v11 = a1 + 24; // 0x5024a3
    *v4 = 0;
    int64_t v12 = a1 + 16; // 0x5024b3
    int64_t * v13 = (int64_t *)v12; // 0x5024b3
    *v13 = v10;
    *(int64_t *)(*(int64_t *)(v10 - 24) + v12) = *(int64_t *)(a2 + 40);
    int64_t v14 = *(int64_t *)(a2 + 8); // 0x5024c4
    *v2 = v14;
    *(int64_t *)(*(int64_t *)(v14 - 24) + a1) = *(int64_t *)(a2 + 48);
    *v13 = *(int64_t *)(a2 + 56);
    *v2 = v9;
    *(int64_t *)(*(int64_t *)a3 + a1) = *(int64_t *)(a2 + 64);
    *v13 = *(int64_t *)(a2 + 72);
    function_500b70(v11, v9);
    int64_t result = *v2; // 0x502502
    *(int64_t *)(a1 + 232 + result) = v11;
    return result;
}

// Address range: 0x502517 - 0x5026a3
// From class:    std::basic_fstream<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_502517(int64_t a1, int64_t a2) {
    // 0x502517
    int64_t v1; // 0x502517
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x502517
    int64_t * v3 = (int64_t *)v1; // 0x50251e
    *v3 = v2;
    *(int64_t *)(*(int64_t *)(v2 - 24) + v1) = *(int64_t *)(v1 + 48);
    int64_t v4 = v1 + 16; // 0x502531
    int64_t * v5 = (int64_t *)v4; // 0x502531
    *v5 = *(int64_t *)(v1 + 56);
    int64_t v6 = *(int64_t *)(v1 + 32); // 0x502535
    *v5 = v6;
    *(int64_t *)(*(int64_t *)(v6 - 24) + v4) = *(int64_t *)(v1 + 40);
    int64_t v7 = *(int64_t *)(v1 + 16); // 0x50254a
    *v3 = v7;
    *(int64_t *)(*(int64_t *)(v7 - 24) + v1) = *(int64_t *)(v1 + 24);
    *(int64_t *)(v1 + 8) = 0;
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t v8 = v1 + 264; // 0x502574
    function_54cb80(v8);
    int64_t * v9 = (int64_t *)v1; // 0x502598
    *v9 = (int64_t)&g28;
    int64_t * v10 = (int64_t *)(v1 + 480); // 0x50259e
    *v10 = 0;
    int32_t * v11 = (int32_t *)(v1 + 488); // 0x5025a9
    *v11 = 0;
    int64_t * v12 = (int64_t *)v8; // 0x5025b3
    *v12 = (int64_t)&g29;
    int64_t * v13 = (int64_t *)(a2 + 8); // 0x5025ba
    char * v14 = (char *)(v1 + 492); // 0x5025be
    *v14 = 0;
    int64_t * v15 = (int64_t *)(v1 + 496); // 0x5025c5
    *v15 = 0;
    *(int64_t *)(v1 + 504) = 0;
    *(int64_t *)(v1 + (int64_t)&g1) = 0;
    *(int64_t *)(v1 + 8) = *v13;
    *(int64_t *)(v1 + (int64_t)&g2) = 0;
    int64_t v16 = *(int64_t *)(a2 - 24) + a2; // 0x5025fd
    function_54cf90(v8, v16);
    function_4fcce0(v8, v1 + 472);
    int64_t * v17 = (int64_t *)(v16 + 216); // 0x502617
    *v17 = 0;
    *v10 = *v17;
    *v11 = *(int32_t *)(v16 + 224);
    int64_t v18 = v1 + 24; // 0x50264d
    *v15 = 0;
    *v14 = *(char *)(v16 + 228);
    *v13 = 0;
    *v9 = (int64_t)&g30;
    *(int64_t *)(v1 + 16) = (int64_t)&g31;
    *v12 = (int64_t)&g32;
    int64_t result = function_500b70(v18, a2 + 24); // 0x50268e
    *v15 = v18;
    return result;
}

// Address range: 0x5026a3 - 0x5026e3
// From class:    std::basic_ios<wchar_t, std::char_traits<wchar_t> >
// Type:          constructor
int64_t function_5026a3(void) {
    // 0x5026a3
    while (true) {
        // 0x5026a6
        int64_t v1; // 0x5026a3
        *(int64_t *)(v1 + 264) = (int64_t)&g18;
        function_54cf10(v1);
        int64_t v2; // 0x5026a3
        _Unwind_Resume((struct _Unwind_Exception *)v2);
        *(int64_t *)(v1 + 8) = 0;
        *(int64_t *)(v1 + 16) = (int64_t)&g27;
        v2 = (int64_t)&g39;
    }
}

// Address range: 0x5026f0 - 0x5027b5
int64_t function_5026f0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 - 24) + a1; // 0x50270e
    int64_t v2 = *(int64_t *)(a2 - 24) + a2; // 0x502714
    function_54d0a0(v1, v2);
    function_4fcce0(v1, v1 + 208);
    function_4fcce0(v2, v2 + 208);
    int64_t * v3 = (int64_t *)(v1 + 216); // 0x50273d
    int64_t * v4 = (int64_t *)(v2 + 216); // 0x502744
    *v3 = *v4;
    *v4 = *v3;
    int32_t * v5 = (int32_t *)(v2 + 224); // 0x502762
    int32_t * v6 = (int32_t *)(v1 + 224); // 0x502768
    *v6 = *v5;
    *v5 = *v6;
    char * v7 = (char *)(v2 + 228); // 0x50277a
    char * v8 = (char *)(v1 + 228); // 0x502781
    *v8 = *v7;
    *v7 = *v8;
    int64_t * v9 = (int64_t *)(a2 + 8); // 0x502794
    int64_t v10 = *v9; // 0x502794
    int64_t * v11 = (int64_t *)(a1 + 8); // 0x502798
    *v11 = v10;
    *v9 = *v11;
    return function_500d70(a1 + 24, a2 + 24, v10);
}

// Address range: 0x5027c0 - 0x5027c5
int64_t function_5027c0(int64_t a1) {
    // 0x5027c0
    return a1 + 24;
}

// Address range: 0x5027d0 - 0x5027d9
int64_t function_5027d0(int64_t a1) {
    // 0x5027d0
    return function_4f15a0(a1 + 128);
}

// Address range: 0x5027e0 - 0x5027e9
int64_t function_5027e0(int64_t a1) {
    // 0x5027e0
    return function_4f15a0(a1 + 128);
}

// Address range: 0x53703b - 0x5370b4
int64_t function_53703b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x53703b
    int64_t v1; // 0x53703b
    unsigned char v2 = (char)v1;
    unsigned char v3 = 2 * v2; // 0x53703b
    *(char *)v1 = v3;
    bool v4 = v3 == 0; // 0x537040
    bool v5 = v3 < v2; // 0x537040
    int64_t v6; // 0x53703b
    if (v1 != 0) {
        // .lr.ph
        bool v7; // 0x53703b
        int64_t v8 = v7 ? -1 : 1; // 0x537040
        int64_t v9 = a1; // 0x53703b
        int64_t v10; // 0x53703b
        unsigned char v11 = *(char *)v10; // 0x537040
        char v12 = *(char *)v9; // 0x537040
        int64_t v13 = v10 + v8; // 0x537040
        char v14 = v12; // 0x537040
        v4 = false;
        while (v11 == v12) {
            int64_t v15; // 0x53703b
            int64_t v16 = v15 - 1; // 0x537040
            v9 += v8;
            v15 = v16;
            v14 = v11;
            v4 = true;
            if (v16 == 0) {
                // break -> ._crit_edge.loopexit
                break;
            }
            v11 = *(char *)v13;
            v12 = *(char *)v9;
            v13 += v8;
            v14 = v12;
            v4 = false;
        }
        // ._crit_edge.loopexit
        v5 = v11 < v14;
        v6 = v13;
    }
    bool v17 = v5;
    uint64_t v18 = (int64_t)!((v4 | v17)) - (int64_t)v17; // 0x537045
    if ((char)v18 == 0) {
        // 0x53704b
        return v18 % 256 | v1 & -256;
    }
    int64_t v19 = v1 + 16; // 0x537090
    function_5679e0(v19, v6);
    return function_5679b0(v19, v1, 0);
}

// Address range: 0x5370b4 - 0x5370d8
int64_t function_5370b4(int64_t a1, int64_t a2) {
    // 0x5370b4
    int64_t v1; // 0x5370b4
    function_52e330(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    return function_536fc0();
}

// Address range: 0x5370e0 - 0x5370e8
int64_t function_5370e0(int64_t a1, int64_t a2) {
    // 0x5370e0
    return function_54d790();
}

// Address range: 0x5370f0 - 0x53716e
// From class:    std::codecvt_byname<wchar_t, char, __mbstate_t>
// Type:          constructor
int64_t function_5370f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5370f0
    function_4f5280();
    *(int64_t *)a1 = (int64_t)&g33;
    bool v1; // 0x5370f0
    int64_t v2 = v1 ? -1 : 1;
    int64_t v3 = (int64_t)&g5; // 0x5370f0
    int64_t v4 = a2; // 0x5370f0
    int64_t v5 = 2; // 0x53711f
    unsigned char v6 = *(char *)v4; // 0x53711f
    char v7 = *(char *)v3; // 0x53711f
    char v8 = v7; // 0x53711f
    bool v9 = false; // 0x53711f
    while (v6 == v7) {
        v5--;
        v3 += v2;
        v4 += v2;
        v8 = v6;
        v9 = true;
        if (v5 == 0) {
            // break -> 
            break;
        }
        v6 = *(char *)v4;
        v7 = *(char *)v3;
        v8 = v7;
        v9 = false;
    }
    unsigned char v10 = v8;
    int64_t v11 = (int64_t)!((v6 < v10 | v9)) - (int64_t)(v6 < v10); // 0x537124
    int64_t v12 = (int64_t)"POSIX"; // 0x537128
    int64_t v13 = a2; // 0x537128
    if ((char)v11 == 0) {
        // 0x537144
        return v11 % 256 | (int64_t)&g33 & -256;
    }
    int64_t v14 = 6; // 0x537128
    unsigned char v15 = *(char *)v13; // 0x537139
    char v16 = *(char *)v12; // 0x537139
    v13 += v2;
    char v17 = v16; // 0x537139
    bool v18 = false; // 0x537139
    while (v15 == v16) {
        // 0x53712a
        v14--;
        v12 += v2;
        v17 = v15;
        v18 = true;
        if (v14 == 0) {
            // break -> 
            break;
        }
        v15 = *(char *)v13;
        v16 = *(char *)v12;
        v13 += v2;
        v17 = v16;
        v18 = false;
    }
    unsigned char v19 = v17;
    int64_t v20 = (int64_t)!((v15 < v19 | v18)) - (int64_t)(v15 < v19); // 0x53713e
    if ((char)v20 == 0) {
        // 0x537144
        return v20 % 256 | (int64_t)&g33 & -256;
    }
    int64_t v21 = a1 + 16; // 0x537150
    function_5679e0(v21, v13);
    return function_5679b0(v21, a2, 0);
}

// Address range: 0x53716e - 0x5371c2
// From class:    std::__cxx11::collate<wchar_t>
// Type:          constructor
int64_t function_53716e(int64_t a1, int64_t a2) {
    // 0x53716e
    int64_t v1; // 0x53716e
    function_4f5150(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int32_t *)(v1 + 8) = (int32_t)(a2 != 0) | ((int32_t)&g39 ^ (int32_t)&g39) & -256;
    *(int64_t *)v1 = (int64_t)&g34;
    int64_t result = function_565f30(); // 0x5371b2
    *(int64_t *)(v1 + 16) = result;
    return result;
}

// Address range: 0x5371c2 - 0x53721a
// From class:    std::__cxx11::collate<wchar_t>
// Type:          constructor
int64_t function_5371c2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5371c2
    int64_t v1; // 0x5371c2
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t v2 = a2; // bp-16, 0x5371f0
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g39 ^ (int32_t)&g39) & -256;
    *(int64_t *)v1 = (int64_t)&g34;
    int64_t result = function_567a10(&v2); // 0x53720b
    *(int64_t *)(v1 + 16) = result;
    return result;
}

// Address range: 0x537220 - 0x537226
int64_t function_537220(int64_t result) {
    // 0x537220
    return result;
}
