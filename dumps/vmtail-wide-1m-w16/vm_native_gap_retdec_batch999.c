/*
 * Targeted RetDec C for native executable gap queue batch 999.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x20fa42-0x20fc42 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20fe42-0x210042 rank=- name=- kind=- bytes=- uncovered=-
 *   0x267ec2-0x2680c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2680c2-0x2682c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2682c2-0x2684c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2684c2-0x2686c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2686c2-0x2688c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2688c2-0x268ac2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x268ac2-0x268bc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x383a30-0x383c30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x383e30-0x384030 rank=- name=- kind=- bytes=- uncovered=-
 *   0x384030-0x384230 rank=- name=- kind=- bytes=- uncovered=-
 *   0x384230-0x384430 rank=- name=- kind=- bytes=- uncovered=-
 *   0x384430-0x384630 rank=- name=- kind=- bytes=- uncovered=-
 *   0x384630-0x384830 rank=- name=- kind=- bytes=- uncovered=-
 *   0x384830-0x384a30 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_20fa42(int64_t a1, int64_t a2);
int64_t function_20fa72(void);
int64_t function_20fa8e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_20fb1a(void);
int64_t function_20fb1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_20fb9e(void);
int64_t function_20fbc4(void);
int64_t function_20fc00(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20fde6();
int64_t function_20fe42(int64_t a1);
int64_t function_20fe82(int64_t a1);
int64_t function_20fe8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_20fef3(void);
int64_t function_20fff2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_210033(int64_t a1);
int64_t function_267ec2(void);
int64_t function_267ecc(int64_t a1);
int64_t function_267fc3(int64_t a1);
int64_t function_268027(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_268034(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_268100(void);
int64_t function_26812d(void);
int64_t function_268130(void);
int64_t function_26813b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_26817e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_268204(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26827f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2682e1(void);
int64_t function_2682e2(void);
int64_t function_2682fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2683cd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_268474(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2684a0(void);
int64_t function_2684ad(void);
int64_t function_2684cb(void);
int64_t function_2684f8(void);
int64_t function_268537(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2685cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_268665(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26867d(void);
int64_t function_268683(void);
int64_t function_2686a0(int64_t a1);
int64_t function_2686a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2686e4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5, uint64_t a6);
int64_t function_2687a8(void);
int64_t function_2687bb(void);
int64_t function_2687ed(void);
int64_t function_268834(void);
int64_t function_268854(int64_t a1);
int64_t function_26885f(int64_t a1);
int64_t function_2688b4(void);
int64_t function_2688f7(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_268948(void);
int64_t function_268958(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2689ac(int64_t a1);
int64_t function_2689fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_268ad0(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_268ae2(int64_t a1);
int64_t function_268b1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_268b57(void);
int64_t function_268bac(int64_t a1, int64_t a2);
int64_t function_34a0ffcb();
int64_t function_383a28();
int64_t function_383a30(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_383ae4(int64_t a1);
int64_t function_383b1b(int64_t a1);
int64_t function_383b21(void);
int64_t function_383b2f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_383b94(void);
int64_t function_383bb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_383de1();
int64_t function_383e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_383ee2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_383f43(void);
int64_t function_383f5d(void);
int64_t function_383f81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_383faa(void);
int64_t function_383fe9(void);
int64_t function_383ff7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_384112(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_38412b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38417f(void);
int64_t function_384192(void);
int64_t function_3841b0(int64_t a1);
int64_t function_3841b6(int64_t a1);
int64_t function_3841c3(void);
int64_t function_3841c6(void);
int64_t function_3841d1(int64_t a1);
int64_t function_3841e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3841f9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_38422a(void);
int64_t function_384265(void);
int64_t function_3842ea(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_384327(void);
int64_t function_384339(void);
int64_t function_384356(void);
int64_t function_384396(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_384574(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_384700(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_384888(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_384a0d(void);
int64_t function_384a26(void);
int64_t function_384a27(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_77ade1ad();
int64_t function_cc59c();
int64_t function_ffffffffb4762528();
int64_t unknown_242135a8();
int64_t unknown_248ae852();
int64_t unknown_26431ba2();
int64_t unknown_2a2ca466();
int64_t unknown_2a6c8c8b();
int64_t unknown_2ec098e3();
int64_t unknown_3920cd99();
int64_t unknown_3abaa467();
int64_t unknown_3d273c7c();
int64_t unknown_3d287116();
int64_t unknown_3d490a38();
int64_t unknown_40312974();
int64_t unknown_40ab6e56();
int64_t unknown_44c0efb8();
int64_t unknown_47f3970d();
int64_t unknown_49b2d099();
int64_t unknown_523dc9b8();
int64_t unknown_609c2235();
int64_t unknown_68837e55();
int64_t unknown_6b204b97();
int64_t unknown_6c5f34d8();
int64_t unknown_6cdb90b();
int64_t unknown_706e350d();
int64_t unknown_78296d6();
int64_t unknown_7f716996();
int64_t unknown_8eb980();
int64_t unknown_ffffffff84b083ea();
int64_t unknown_ffffffff91dc0930();
int64_t unknown_ffffffffa10fe218();
int64_t unknown_ffffffffa59c5e41();
int64_t unknown_ffffffffac9c8a70();
int64_t unknown_ffffffffbc4df91c();
int64_t unknown_ffffffffbe909d39();
int64_t unknown_ffffffffc053f04a();
int64_t unknown_ffffffffc321638c();
int64_t unknown_ffffffffc8bc7f41();
int64_t unknown_ffffffffc8ec855e();
int64_t unknown_ffffffffcb6fc055();
int64_t unknown_ffffffffd3cf52c0();
int64_t unknown_ffffffffd4215591();
int64_t unknown_ffffffffec9a98d8();
int64_t unknown_fffffffff3c42548();
int64_t unknown_fffffffffacf9418();
int64_t unknown_ffffffffff00665d();
int64_t unknown_ffffffffff2237a6();

// Address range: 0x20fa42 - 0x20fa4b
int64_t function_20fa42(int64_t a1, int64_t a2) {
    // 0x20fa42
    *(int32_t *)a1 = *(int32_t *)a2;
    int64_t result; // 0x20fa42
    return result;
}

// Address range: 0x20fa72 - 0x20fa73
int64_t function_20fa72(void) {
    // 0x20fa72
    int64_t result; // 0x20fa72
    return result;
}

// Address range: 0x20fa8e - 0x20fb17
int64_t function_20fa8e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x20fa8e
    unknown_6c5f34d8();
    unknown_49b2d099();
    int64_t v1; // 0x20fa8e
    int32_t * v2 = (int32_t *)(v1 + 124); // 0x20fa9d
    int32_t v3 = v1; // 0x20fa9d
    *v2 = *v2 + v3;
    int64_t v4 = unknown_ffffffffff2237a6(); // 0x20faa0
    char v5 = *(char *)(a3 - 24); // 0x20faab
    int32_t * v6 = (int32_t *)v4; // 0x20faae
    int32_t v7 = *v6 + (int32_t)v4; // 0x20faae
    *v6 = v7;
    int64_t v8 = a1; // 0x20fab0
    if (v7 != 0) {
      lab_0x20fb05:
        // 0x20fb05
        unknown_47f3970d();
        int32_t * v9 = (int32_t *)(v8 + 0x2f8afc90); // 0x20fb0c
        *v9 = *v9 + (int32_t)v1;
        return unknown_fffffffffacf9418();
    }
    // 0x20fab2
    bool v10; // 0x20fa8e
    int64_t v11 = v10 ? -4 : 4; // 0x20fab4
    int64_t v12 = 256 * (int64_t)(v5 + (char)(a4 / 256)) | a4 & -0xff01; // 0x20fab2
    int64_t v13 = 0xe8053a85; // 0x20fab2
    int64_t v14 = a1; // 0x20fab2
    *(int32_t *)v14 = *(int32_t *)v13;
    v14 += v11;
    v13 += v11;
    int64_t v15 = unknown_ffffffffd3cf52c0(v14, v13); // 0x20faba
    char * v16 = (char *)(v15 + 0x1e8fb05); // 0x20fabf
    unsigned char v17 = *v16; // 0x20fabf
    unsigned char v18 = v17 + (char)v15; // 0x20fabf
    *v16 = v18;
    if (v18 < v17 || v18 == 0) {
        function_20fa72();
    }
    // 0x20fac7
    int3_t v19; // 0x20fa8e
    float80_t v20 = __frontend_reg_load_fpr(v19); // 0x20fac7
    __frontend_reg_store_fpr(v19, v20 * (float80_t)*(float32_t *)a3);
    unsigned char v21 = *(char *)(v13 + 23) & (char)v12; // 0x20facd
    uint64_t v22 = unknown_78296d6(); // 0x20fad0
    int32_t * v23 = (int32_t *)a3; // 0x20fad5
    *v23 = *v23 + (int32_t)a3;
    char v24 = *(char *)(v22 + 8 * v1); // 0x20fad7
    int32_t * v25 = (int32_t *)(256 * (int64_t)(v24 | (char)(v22 / 256)) | v22 & -0xff01); // 0x20fada
    *v25 = *v25 + v3;
    int3_t v26 = v19 - 1; // 0x20fadc
    __frontend_reg_store_fpr(v26, *(float80_t *)(v13 - 0xf960bd2));
    int64_t v27 = unknown_ffffffff84b083ea() & 0xffffffff | 0x100000000 * a3; // 0x20fae9
    int64_t v28 = (int64_t)*(int32_t *)(a3 + 80); // 0x20fae9
    while ((char)v22 <= 66) {
        int64_t v29 = v27 % v28; // 0x20fae9
        unsigned char v30 = (char)v29 + (char)(v12 / 256); // 0x20fb01
        v12 = v12 & -256 | (int64_t)v21;
        int64_t v31 = v29 & 0xffffff00 | (int64_t)v30; // 0x20fb03
        v8 = v14;
        if (v30 == 0) {
            goto lab_0x20fb05;
        }
        *(int32_t *)v14 = *(int32_t *)v13;
        v14 += v11;
        v13 += v11;
        v15 = unknown_ffffffffd3cf52c0(v14, v13);
        v16 = (char *)(v15 + 0x1e8fb05);
        v17 = *v16;
        v18 = v17 + (char)v15;
        *v16 = v18;
        if (v18 < v17 || v18 == 0) {
            function_20fa72();
        }
        // 0x20fac7
        v20 = __frontend_reg_load_fpr(v26);
        __frontend_reg_store_fpr(v26, v20 * (float80_t)*(float32_t *)v31);
        v21 = *(char *)(v13 + 23) & (char)v12;
        v22 = unknown_78296d6();
        v23 = (int32_t *)v31;
        *v23 = *v23 + (int32_t)v31;
        v24 = *(char *)(v22 + 8 * v1);
        v25 = (int32_t *)(256 * (int64_t)(v24 | (char)(v22 / 256)) | v22 & -0xff01);
        *v25 = *v25 + v3;
        v26--;
        __frontend_reg_store_fpr(v26, *(float80_t *)(v13 - 0xf960bd2));
        v27 = unknown_ffffffff84b083ea() & 0xffffffff | 0x100000000 * v31;
        v28 = (int64_t)*(int32_t *)(v31 + 80);
    }
    int64_t v32 = v27 / v28; // 0x20fae9
    int32_t * v33 = (int32_t *)(v14 - 125); // 0x20faf2
    *v33 = *v33 + (int32_t)v1;
    __asm_out(125, (char)v32);
    int64_t result = v32 & 0xffffff75; // 0x20faf7
    unsigned char v34 = (v21 + (char)(v1 / 256)) % 32; // 0x20fafa
    if (v34 != 0) {
        char * v35 = (char *)(result - 0x38efe18); // 0x20fafa
        *v35 = *v35 >> v34;
    }
    return result;
}

// Address range: 0x20fb1a - 0x20fb1c
int64_t function_20fb1a(void) {
    // 0x20fb1a
    int64_t result; // 0x20fb1a
    return result;
}

// Address range: 0x20fb1c - 0x20fb39
int64_t function_20fb1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x20fb1c
    int64_t result; // 0x20fb1c
    int64_t v1 = result + a3; // 0x20fb1c
    unsigned char v2 = (char)a4 % 32; // 0x20fb1e
    if (v2 != 0) {
        char * v3 = (char *)((v1 & 0xffffffff) - 0x2ad4b2f2); // 0x20fb1e
        *v3 = *v3 << v2;
    }
    char * v4 = (char *)(a2 + 0x1e876a2); // 0x20fb24
    char v5 = *v4 - (char)(result / 256); // 0x20fb24
    *v4 = v5;
    if (v5 < 0) {
        // 0x20fb38
        return result & -256 | (int64_t)__asm_in((int16_t)v1);
    }
    // 0x20fb2c
    return result;
}

// Address range: 0x20fb9e - 0x20fb9f
int64_t function_20fb9e(void) {
    // 0x20fb9e
    int64_t result; // 0x20fb9e
    return result;
}

// Address range: 0x20fbc4 - 0x20fbc5
int64_t function_20fbc4(void) {
    // 0x20fbc4
    int64_t result; // 0x20fbc4
    return result;
}

// Address range: 0x20fc00 - 0x20fc09
int64_t function_20fc00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20fc00
    int64_t result; // 0x20fc00
    return result;
}

// Address range: 0x20fe42 - 0x20fe5f
int64_t function_20fe42(int64_t a1) {
    // 0x20fe42
    int64_t v1; // 0x20fe42
    int32_t * v2 = (int32_t *)(v1 + 112); // 0x20fe49
    int32_t v3 = *v2 + (int32_t)a1; // 0x20fe49
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x20fe49
    *v2 = v3;
    int64_t v5; // 0x20fe42
    if (v4 % 2 == 0) {
        v5 = function_20fde6();
    }
    // 0x20fe4f
    __readgsbyte((int64_t)(0x10000 * (int32_t)v5 >> 16) + 58);
    return unknown_ffffffffff00665d();
}

// Address range: 0x20fe82 - 0x20fe85
int64_t function_20fe82(int64_t a1) {
    // 0x20fe82
    int64_t result; // 0x20fe82
    return result;
}

// Address range: 0x20fe8c - 0x20feab
int64_t function_20fe8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(unknown_3920cd99() - 0xf277bf6); // 0x20fe98
    *v1 = *v1 + (char)a4;
    *(int32_t *)(a4 - 50) = (int32_t)a3;
    return __asm_int3(a1);
}

// Address range: 0x20fef3 - 0x20fef8
int64_t function_20fef3(void) {
    // 0x20fef3
    return function_34a0ffcb();
}

// Address range: 0x20fff2 - 0x210015
int64_t function_20fff2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x20fff2
    int64_t v1; // 0x20fff2
    int32_t * v2 = (int32_t *)(v1 + 0x68faa756); // 0x20fff2
    *v2 = *v2 + (int32_t)v1;
    *(char *)-0x69dc007f = *(char *)-0x69dc007f + (char)(a4 / 256);
    uint32_t v3 = (int32_t)v1; // 0x20fffe
    uint32_t v4 = v3 / 0x2000; // 0x20fffe
    int64_t v5 = v4 | 0x80000 * v3; // 0x20fffe
    char v6 = *(char *)(v1 + 0x13db3ad + 2 * v1); // 0x210001
    bool v7; // 0x20fff2
    int64_t v8 = v7 ? -1 : 1; // 0x210008
    int32_t * v9 = (int32_t *)(v1 + 18); // 0x21000b
    *v9 = *v9 | 83;
    char * v10 = (char *)(a1 - 25 + v8 + 8 * (a3 & 0x1fffffffffffff00 | (int64_t)(v6 | (char)a3))); // 0x210010
    *v10 = *v10 + (char)v1;
    return v5 & 0xffffff00 | (int64_t)((char)v4 - *(char *)v5);
}

// Address range: 0x210033 - 0x210034
int64_t function_210033(int64_t a1) {
    // 0x210033
    int64_t result; // 0x210033
    return result;
}

// Address range: 0x267ec2 - 0x267ec3
int64_t function_267ec2(void) {
    // 0x267ec2
    int64_t result; // 0x267ec2
    return result;
}

// Address range: 0x267ecc - 0x267ecd
int64_t function_267ecc(int64_t a1) {
    // 0x267ecc
    int64_t result; // 0x267ecc
    return result;
}

// Address range: 0x267fc3 - 0x267fc4
int64_t function_267fc3(int64_t a1) {
    // 0x267fc3
    int64_t result; // 0x267fc3
    return result;
}

// Address range: 0x268027 - 0x26802f
int64_t function_268027(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x268027
    int64_t result; // 0x268027
    return result;
}

// Address range: 0x268034 - 0x2680cf
int64_t function_268034(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x268034
    int64_t v1; // 0x268034
    int64_t v2 = v1;
    int64_t v3 = a1;
    *(char *)v2 = 2 * (char)v2;
    *(char *)a1 = *(char *)&v3 + (char)(a4 / 256);
    int64_t result; // 0x268034
    int64_t v4 = result;
    *(char *)v4 = *(char *)&result + (char)v4;
    unsigned char v5 = *(char *)0x3bea248; // 0x268041
    unsigned char v6 = v5 + (char)(v1 / 256); // 0x268041
    *(char *)0x3bea248 = v6;
    uint32_t v7 = 2 * (int32_t)result | (int32_t)(v6 < v5); // 0x268047
    result = v7;
    int32_t v8 = v1;
    int32_t v9 = v1; // 0x268050
    uint32_t v10 = (v8 & -256) + v9; // 0x268050
    int64_t v11 = v10; // 0x268050
    if (v10 < 0 != ((v10 ^ v8) & (v10 ^ v9)) < 0) {
        unsigned char v12 = (char)(v10 / 256); // 0x268079
        unsigned char v13 = (char)v7 + v12; // 0x268079
        char * v14 = (char *)(256 * (int64_t)v13 | v11 & 0xffff00ff); // 0x26807b
        *v14 = *v14 + (v13 < v12 ? 122 : 121);
        return result;
    }
    int32_t * v15 = (int32_t *)(v1 + 0x364b00b3); // 0x26809d
    *v15 = *v15 + 1;
    *(char *)0x3d26afcb = *(char *)0x3d26afcb + 1;
    unsigned char v16 = *(char *)(result % 256 + v11); // 0x2680b7
    int64_t v17 = result & -256 | (int64_t)v16; // 0x2680b7
    result = v17;
    char * v18 = (char *)v17; // 0x2680c1
    *v18 = *v18 + v16;
    if (llvm_ctpop_i8(v16 & 118) % 2 == 0) {
        // 0x2680cf
        return result;
    }
    int32_t v19 = result; // 0x268086
    __asm_out_133(0x79c7, v19);
    return (int64_t)(*(int32_t *)0xb3a79c7 ^ v19);
}

// Address range: 0x268100 - 0x268108
int64_t function_268100(void) {
    // 0x268100
    int64_t v1; // 0x268100
    return v1 & 0xffffffff ^ 0x34e001e8;
}

// Address range: 0x26812d - 0x268130
int64_t function_26812d(void) {
    // 0x26812d
    int64_t result; // 0x26812d
    return result;
}

// Address range: 0x268130 - 0x26813b
int64_t function_268130(void) {
    // 0x268130
    int64_t v1; // 0x268130
    __asm_out_134(-81, (int32_t)v1);
    return __asm_int3(v1);
}

// Address range: 0x26813b - 0x26817c
int64_t function_26813b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x26813b
    bool v1; // 0x26813b
    int64_t v2; // 0x268177
    if ((int16_t)unknown_ffffffffc8bc7f41() < 0 == v1) {
        // 0x268175
        v2 = __asm_wait(((a5 & (int64_t)&g1) == 0 ? 4 : -4) + a1, a2, a3);
        return v2 & -256 | (int64_t)__asm_in((int16_t)a3);
    }
    // 0x268143
    __asm_wait(a1, a2, a3);
    int64_t v3 = unknown_ffffffffc053f04a(); // 0x268144
    *(char *)0x3c2869e8 = *(char *)0x3c2869e8 + 125;
    int64_t v4 = a4 - 1; // 0x268155
    if (v4 != 0 != (v3 & 0x4000) != 0) {
        // 0x268157
        *(int32_t *)-0x3b86ec5a = *(int32_t *)-0x3b86ec5a + (int32_t)v4;
        return v3 & -256 | v3 - ((v3 & 256) != 0 ? 7 : 6) & 14 | 241;
    }
    int64_t v5 = 256 * (a3 / 8 & 224 | a3 / 0x1000 % 16 | 16 * (int64_t)((v3 & 256) != 0)) | a3 & -0xff01; // 0x268172
    int64_t v6 = (a5 & (int64_t)&g1) == 0 ? 4 : -4; // 0x268176
    v2 = __asm_wait(v6 + a1, a2, v5);
    return v2 & -256 | (int64_t)__asm_in((int16_t)v5);
}

// Address range: 0x26817e - 0x2681a0
int64_t function_26817e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x26817e
    int64_t v1; // 0x26817e
    int32_t * v2 = (int32_t *)(v1 + 0x4a8bce03); // 0x26817e
    *v2 = *v2 + (int32_t)a3;
    int64_t result; // 0x26817e
    char * v3 = (char *)(result + 0x4adc8000); // 0x26818c
    *v3 = *v3 + (char)result;
    char * v4 = (char *)(v1 + 0x1201e800); // 0x268193
    *v4 = *v4 + (char)(result / 256);
    int64_t v5 = result;
    *(char *)v5 = *(char *)&result + (char)v5;
    return result;
}

// Address range: 0x268204 - 0x26820c
int64_t function_268204(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x268204
    int64_t result; // 0x268204
    return result;
}

// Address range: 0x26827f - 0x2682e1
int64_t function_26827f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_ffffffffc321638c(); // 0x268286
    return (v1 + 19) % 256 | v1 & -256;
}

// Address range: 0x2682e1 - 0x2682e2
int64_t function_2682e1(void) {
    // 0x2682e1
    int64_t result; // 0x2682e1
    return result;
}

// Address range: 0x2682e2 - 0x2682e9
int64_t function_2682e2(void) {
    // 0x2682e2
    return function_2682e1();
}

// Address range: 0x2682fb - 0x26839d
int64_t function_2682fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2682fb
    int64_t v1; // 0x2682fb
    uint64_t v2 = v1;
    int64_t v3 = v1;
    bool v4; // 0x2682fb
    if (true != !v4) {
        int64_t v5 = 257 * v3 & 0xff00 | v3 & -0xff01; // 0x268304
        int32_t v6 = v5; // 0x268306
        *(int32_t *)a1 = v6;
        if (v6 >= 0xe2c20001) {
            int64_t v7 = (v4 ? -4 : 4) + a1; // 0x268306
            int64_t v8 = v2 + 92 + 2 * v7 & 0xffffffff; // 0x26830d
            int64_t v9 = __asm_wait(v7, v8, a3); // 0x268316
            int64_t v10 = v9 & -256; // 0x268317
            char v11 = *(char *)-0x4c1976d5; // 0x268324
            *(char *)-0x4c1976d5 = v11 + (char)((v5 + (v2 & 0xff00)) / 256);
            int32_t v12 = (v9 + 183) % 256 | v10; // 0x26832a
            *(int32_t *)v7 = v12;
            int32_t * v13 = (int32_t *)v8; // 0x26832c
            uint32_t v14 = *v13; // 0x26832c
            uint32_t v15 = v14 + v12; // 0x26832c
            *v13 = v15;
            return (v9 + 175 + (int64_t)(v15 < v14)) % 256 | v10;
        }
    }
    // 0x26837c
    *(char *)a3 = 0;
    unknown_2a6c8c8b();
    __asm_iretd(0x10e12092);
    int64_t result = unknown_7f716996(); // 0x268390
    *(char *)0x6fb8163f = *(char *)0x6fb8163f + (char)(v2 / 256);
    return result;
}

// Address range: 0x2683cd - 0x268470
int64_t function_2683cd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2683cd
    unknown_ffffffffec9a98d8();
    char * v1 = (char *)(a3 - 0x31215273); // 0x2683d7
    char v2 = *v1; // 0x2683d7
    unsigned char v3 = (char)a4 % 32; // 0x2683d7
    bool v4; // 0x2683cd
    if (v3 != 0) {
        *v1 = v2 >> v3;
        v4 = (v2 & 1 << v3 - 1) != 0;
    }
    char * v5 = (char *)(unknown_2ec098e3() - 50); // 0x2683e2
    *v5 = *v5 / 2 | 128 * (char)v4;
    __asm_int1();
    int64_t v6 = ((a4 + 24) % 256 | a4 & -256) + 0xea426b5b; // 0x2683f2
    int64_t v7; // 0x2683cd
    int32_t * v8 = (int32_t *)(v7 - 62); // 0x2683ff
    *v8 = *v8 + (int32_t)v6;
    unknown_706e350d();
    bool v9; // 0x2683cd
    int64_t v10 = v9 ? -4 : 4; // 0x268411
    int64_t v11 = v10 + (v6 & 0xffffffff); // 0x268411
    int64_t v12 = unknown_ffffffffa10fe218(); // 0x268412
    char * v13 = (char *)(v7 + 0x4001e800); // 0x26841f
    *v13 = *v13 + (char)(a4 / 256);
    char * v14 = (char *)(v7 - 0x50ff6659); // 0x268425
    *v14 = *v14 + ((char)v12 & 74);
    float80_t v15; // 0x2683cd
    *(int64_t *)(8 * v7 + 0x553a8e63) = (int64_t)v15;
    __asm_wait(a1, v11, 0x800026);
    int64_t v16 = unknown_ffffffffbe909d39(); // 0x268433
    unsigned char v17 = *(char *)v11; // 0x268438
    *(int32_t *)a1 = (int32_t)(v16 & 0xffffff00 | (int64_t)v17);
    int64_t v18 = v10 + a1; // 0x26843b
    unknown_fffffffff3c42548(v18, v11 + (v9 ? -1 : 1));
    *(char *)v18 = __asm_insb(38);
    unknown_ffffffffcb6fc055();
    int64_t v19 = __asm_hlt(); // 0x268454
    char * v20 = (char *)v19; // 0x268455
    *v20 = *v20 - (char)v19;
    int64_t v21 = unknown_2a2ca466(); // 0x268460
    *(char *)0x800039 = *(char *)0x800039 >> 4;
    return v21 ^ 222;
}

// Address range: 0x268474 - 0x268499
int64_t function_268474(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x268474
    int64_t v1; // 0x268474
    int32_t * v2 = (int32_t *)(v1 + 77); // 0x26847f
    *v2 = *v2 + (int32_t)a2;
    bool v3; // 0x268474
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0x268482
    *(char *)v4 = 0;
    *(char *)(v4 + (v3 ? -1 : 1)) = __asm_insb((int16_t)a3);
    int64_t result = unknown_ffffffffd4215591(); // 0x26848b
    char * v5 = (char *)(result + 5); // 0x268492
    *v5 = *v5 + (char)result;
    return result;
}

// Address range: 0x2684a0 - 0x2684a7
int64_t function_2684a0(void) {
    // 0x2684a0
    return unknown_6cdb90b();
}

// Address range: 0x2684ad - 0x2684ae
int64_t function_2684ad(void) {
    // 0x2684ad
    int64_t result; // 0x2684ad
    return result;
}

// Address range: 0x2684cb - 0x2684cd
int64_t function_2684cb(void) {
    // 0x2684cb
    return function_2684ad();
}

// Address range: 0x2684f8 - 0x26850a
int64_t function_2684f8(void) {
    // 0x2684f8
    int64_t v1; // 0x2684f8
    *(int32_t *)0x7bf67d69f8007992 = (int32_t)v1;
    return unknown_6cdb90b();
}

// Address range: 0x268537 - 0x268547
int64_t function_268537(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x268537
    int64_t v1; // 0x268537
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t v3; // 0x268537
    *(char *)v3 = *(char *)&v3 / 2;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return unknown_8eb980();
}

// Address range: 0x2685cc - 0x268600
int64_t function_2685cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2685cc
    int64_t v1; // 0x2685cc
    char v2 = (uint64_t)v1 / 256; // 0x2685d3
    *(char *)-0x5ff57b26 = *(char *)-0x5ff57b26 + v2;
    __asm_int1();
    *(char *)0x94b5ef4 = *(char *)0x94b5ef4 + v2;
    return (int64_t)*(int32_t *)-0x1df1004bfebbff98;
}

// Address range: 0x268665 - 0x26866e
int64_t function_268665(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x268665
    int64_t v1; // 0x268665
    return v1 + 0xd43af070 & 0xffffff00 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x26867d - 0x26867f
int64_t function_26867d(void) {
    // 0x26867d
    int64_t v1; // 0x26867d
    return function_2686e4(v1, v1, v1, v1, (int64_t)&g3, (int64_t)&g3);
}

// Address range: 0x268683 - 0x268686
int64_t function_268683(void) {
    // 0x268683
    int64_t result; // 0x268683
    return result;
}

// Address range: 0x2686a0 - 0x2686a3
int64_t function_2686a0(int64_t a1) {
    // 0x2686a0
    int64_t result; // 0x2686a0
    return result;
}

// Address range: 0x2686a7 - 0x2686b3
int64_t function_2686a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2686a7
    unknown_3d273c7c(a1, a2, a3, a4, a5);
    int64_t v1; // 0x2686a7
    int32_t * v2 = (int32_t *)(v1 + 4 * a4); // 0x2686ac
    *v2 = *v2 + (int32_t)a3;
    return v1 & 0xffffffff;
}

// Address range: 0x2686e4 - 0x268794
int64_t function_2686e4(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5, uint64_t a6) {
    // 0x2686e4
    int64_t v1; // 0x2686e4
    bool v2; // 0x2686e4
    int64_t v3 = 256 * (v1 + a3 / 256 + (int64_t)v2) & 0xff00 | a3 & -0xff01; // 0x2686ea
    uint32_t v4 = (int32_t)v1 - *(int32_t *)(a4 - 0x115959ff); // 0x2686ec
    int64_t v5 = v4; // 0x2686ec
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v6 = v2 ? -4 : 4; // 0x2686f2
    if (*(char *)v5 == (char)(v1 / 256)) {
        int32_t v7 = *(int32_t *)(v5 + 0x79865624); // 0x2686f8
        int32_t * v8 = (int32_t *)(a5 + 0x5b351667); // 0x268749
        *v8 = (int32_t)(v4 < 0xb8ff0001) + (int32_t)v1 + v7 | *v8;
        int64_t v9; // bp+332725969, 0x2686e4
        int64_t result = (int64_t)&v9; // 0x268771
        __asm_out_133((int16_t)v3, (int32_t)result);
        int32_t * v10 = (int32_t *)(9 * (v6 + a2)); // 0x26877a
        *v10 = *v10 & (int32_t)a5;
        return result;
    }
    int32_t * v11 = (int32_t *)(v3 - 3); // 0x26870c
    *v11 = *v11 + (int32_t)a5;
    int64_t result2 = v5 & 0xffffff00 | (int64_t)(*(char *)0x3dac8069a3b655 - 24); // 0x268711
    int32_t v12 = result2; // 0x268714
    *(int32_t *)0x7c983aa5 = *(int32_t *)0x7c983aa5 + v12;
    char * v13 = (char *)(a5 - 79); // 0x268720
    *v13 = *v13 + (char)(v4 / 256);
    *(char *)0x1320692b = *(char *)0x1320692b + (char)(a5 / 256);
    *(int32_t *)(v6 + a1) = v12;
    int64_t * v14 = (int64_t *)(result2 - 0x4b5e2a00); // 0x268733
    *v14 = *v14 - result2;
    char v15 = *(char *)0x5d295f43 + (char)(a6 / 256); // 0x26873c
    *(char *)0x5d295f43 = v15;
    if (v15 >= 0) {
        // 0x268793
        return result2;
    }
    // 0x268744
    __asm_out_134(58, v12);
    return result2;
}

// Address range: 0x2687a8 - 0x2687ab
int64_t function_2687a8(void) {
    // 0x2687a8
    int64_t result; // 0x2687a8
    return result;
}

// Address range: 0x2687bb - 0x2687be
int64_t function_2687bb(void) {
    // 0x2687bb
    int64_t result; // 0x2687bb
    return result;
}

// Address range: 0x2687ed - 0x2687f3
int64_t function_2687ed(void) {
    // 0x2687ed
    int64_t result; // 0x2687ed
    return result;
}

// Address range: 0x268834 - 0x268837
int64_t function_268834(void) {
    // 0x268834
    int64_t result; // 0x268834
    return result;
}

// Address range: 0x268854 - 0x26885e
int64_t function_268854(int64_t a1) {
    // 0x268854
    int64_t result; // 0x268854
    return result;
}

// Address range: 0x26885f - 0x268863
int64_t function_26885f(int64_t a1) {
    // 0x26885f
    int64_t result; // 0x26885f
    return result;
}

// Address range: 0x2688b4 - 0x2688b7
int64_t function_2688b4(void) {
    // 0x2688b4
    int64_t result; // 0x2688b4
    return result;
}

// Address range: 0x2688f7 - 0x268926
int64_t function_2688f7(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    char v1 = *(char *)0x6591cdfe; // 0x2688f7
    int64_t v2; // 0x2688f7
    *(char *)0x6591cdfe = v1 + (char)((uint64_t)v2 / 256);
    int64_t v3 = unknown_3d287116(); // 0x26890f
    int32_t * v4 = (int32_t *)(a1 + 0x32bc2d71); // 0x268915
    *v4 = *v4 + (int32_t)v3;
    return result;
}

// Address range: 0x268948 - 0x268949
int64_t function_268948(void) {
    // 0x268948
    int64_t result; // 0x268948
    return result;
}

// Address range: 0x268958 - 0x268976
int64_t function_268958(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffc8ec855e(); // 0x268958
    char v2 = *(char *)(v1 + 0x1e89b05); // 0x26895d
    int64_t v3 = v1 & -256 | (int64_t)(v2 ^ (char)v1); // 0x268963
    if (a4 != 1) {
        v3 = function_268948();
    }
    char * v4 = (char *)v3; // 0x268965
    *v4 = *v4 - (char)v3;
    int64_t v5 = unknown_40312974(); // 0x26896e
    return (v5 + 254) % 256 | v5 & -256;
}

// Address range: 0x2689ac - 0x2689b1
int64_t function_2689ac(int64_t a1) {
    // 0x2689ac
    int64_t result; // 0x2689ac
    return result;
}

// Address range: 0x2689fc - 0x268a91
int64_t function_2689fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2689fc
    int64_t v1; // 0x2689fc
    int32_t v2 = v1; // 0x268a03
    int32_t result2 = v2; // bp-8, 0x268a03
    int32_t v3 = v2 + 0x1e85ac2; // 0x268a04
    if (v3 < 0 == (v3 & (v2 ^ -0x80000000)) < 0) {
        int64_t v4 = unknown_3abaa467(); // 0x268a61
        return v4 & -256 | (int64_t)(*(char *)(a1 - 0x8a43e72) & (char)v4);
    }
    uint32_t v5 = (int32_t)a1; // 0x268a0e
    uint32_t v6 = (int32_t)(int64_t)&result2 + v5; // 0x268a0e
    int64_t v7 = v6; // 0x268a0e
    int32_t * v8 = (int32_t *)(a2 - 50); // 0x268a10
    uint32_t v9 = *v8; // 0x268a10
    uint32_t v10 = v9 + v6; // 0x268a10
    uint32_t v11 = v10 + (int32_t)(v6 < v5); // 0x268a10
    *v8 = v11;
    __asm_int3(v7);
    int64_t result = unknown_ffffffffbc4df91c(); // 0x268a16
    if (v11 == 0 || (v6 < v5 ? v11 <= v9 : v10 < v9)) {
        int32_t * v12 = (int32_t *)(v1 + 0x18f7d011); // 0x268a1d
        *v12 = *v12 + (int32_t)v1;
        return result;
    }
    int32_t * v13 = (int32_t *)result; // 0x268a26
    *v13 = *v13 + (int32_t)v1;
    *(char *)v7 = __asm_insb((int16_t)a3);
    return result2;
}

// Address range: 0x268ad0 - 0x268ad7
int64_t function_268ad0(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x268ad0
    __asm_wait(a1, a2, a3);
    int64_t v1; // 0x268ad0
    bool v2; // 0x268ad0
    *(char *)a1 = (char)v1 + (char)(a3 / 256) + (char)v2;
    int64_t v3; // 0x268ad0
    *(int32_t *)a1 = *(int32_t *)&v3 & (int32_t)v1;
    return function_268b1f(a1, a2, a3, v1);
}

// Address range: 0x268ae2 - 0x268ae3
int64_t function_268ae2(int64_t a1) {
    // 0x268ae2
    int64_t result; // 0x268ae2
    return result;
}

// Address range: 0x268b1f - 0x268b46
int64_t function_268b1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x268b1f
    int64_t v1; // 0x268b1f
    uint64_t v2 = v1;
    *(int32_t *)0x13daa3eaa0c68fb = (int32_t)v2;
    unsigned char v3 = (char)(v2 / 256); // 0x268b28
    int64_t result = unknown_6b204b97(); // 0x268b2a
    __asm_out(-52, (char)result);
    int32_t * v4 = (int32_t *)(result - 0xad4e7b6); // 0x268b31
    *v4 = *v4 + (int32_t)a2 + (int32_t)(-1 - v3 < v3);
    char * v5 = (char *)(a4 + 107); // 0x268b37
    *v5 = *v5 + (char)a4;
    return result;
}

// Address range: 0x268b57 - 0x268b5f
int64_t function_268b57(void) {
    // 0x268b57
    int64_t v1; // 0x268b57
    int64_t v2 = v1 + 0xff5afec3; // 0x268b57
    int64_t result = v2 & 0xffffffff; // 0x268b57
    char * v3 = (char *)result; // 0x268b5c
    *v3 = *v3 + (char)v2;
    return result;
}

// Address range: 0x268bac - 0x268bb6
int64_t function_268bac(int64_t a1, int64_t a2) {
    // 0x268bac
    int64_t v1; // 0x268bac
    uint64_t v2 = v1;
    return v2 % 256 * (int64_t)*(char *)(a1 - 0x4d4129e2) | v2 & -0x10000;
}

// Address range: 0x383a30 - 0x383a64
int64_t function_383a30(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x383a30
    bool v2; // 0x383a30
    if (v1 != 0 && !v2) {
        function_383a28();
    }
    // 0x383a32
    int64_t v3; // 0x383a30
    int32_t * v4 = (int32_t *)(unknown_3d490a38() + v3 & 0xffffffff); // 0x383a39
    *v4 = *v4 + (int32_t)a3;
    int64_t v5 = unknown_ffffffffa59c5e41(); // 0x383a3b
    char * v6 = (char *)v5; // 0x383a40
    *v6 = *v6 + (char)v5;
    char * v7 = (char *)(a1 + 0x2c800079); // 0x383a42
    char v8 = v3 / 256; // 0x383a42
    *v7 = *v7 + v8;
    uint64_t v9 = v3 + a2 + v5; // 0x383a4a
    char * v10 = (char *)((v9 & 0xffffffff) - 10); // 0x383a4c
    *v10 = *v10 + (char)(v9 / 256);
    uint64_t v11 = unknown_68837e55(); // 0x383a4f
    char * v12 = (char *)(v3 - 0x78fec252); // 0x383a5c
    *v12 = *v12 + (char)v3;
    char * v13 = (char *)v1; // 0x383a62
    *v13 = *v13 + (char)(a3 / 256);
    return (0x10000 * (int32_t)v11 >> 16) - 0x3fe774a + (int32_t)(-1 - v8 < (char)(v11 / 256));
}

// Address range: 0x383ae4 - 0x383ae7
int64_t function_383ae4(int64_t a1) {
    // 0x383ae4
    int64_t result; // 0x383ae4
    return result;
}

// Address range: 0x383b1b - 0x383b1e
int64_t function_383b1b(int64_t a1) {
    // 0x383b1b
    int64_t result; // 0x383b1b
    return result;
}

// Address range: 0x383b21 - 0x383b22
int64_t function_383b21(void) {
    // 0x383b21
    int64_t result; // 0x383b21
    return result;
}

// Address range: 0x383b2f - 0x383b3f
int64_t function_383b2f(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_609c2235(); // 0x383b37
    bool v2; // 0x383b2f
    if (v2 || false) {
        v1 = function_383b21();
    }
    int32_t * v3 = (int32_t *)v1; // 0x383b39
    *v3 = *v3 + (int32_t)a3;
    return __asm_int1();
}

// Address range: 0x383b94 - 0x383b97
int64_t function_383b94(void) {
    // 0x383b94
    int64_t result; // 0x383b94
    return result;
}

// Address range: 0x383bb0 - 0x383c2f
int64_t function_383bb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x383bb0
    int64_t v1; // 0x383bb0
    *(char *)a4 = (char)(v1 / 256);
    int64_t result = unknown_523dc9b8(); // 0x383bb2
    bool v2; // 0x383bb0
    if (v2) {
        char * v3 = (char *)((4 * a4 & 0x3fffffffc) - 0x655afdaa + v1); // 0x383c23
        *v3 = *v3 + (char)a4;
        return unknown_ffffffff91dc0930();
    }
    // 0x383bb9
    return result;
}

// Address range: 0x383e30 - 0x383ecf
int64_t function_383e30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x383e30
    int64_t v1; // 0x383e30
    int64_t v2 = (int64_t)&v1; // 0x383e48
    int64_t v3; // 0x383e30
    unknown_248ae852((int32_t)v3 + (int32_t)a1);
    unknown_40ab6e56();
    int32_t v4 = a2; // 0x383e55
    int32_t v5 = a5 % 2 != 0; // 0x383e55
    uint32_t v6 = v4 - ((int32_t)v2 | v5); // 0x383e55
    if (((v6 - v5 ^ v4) & (int32_t)(v2 ^ a2)) >= 0) {
        function_383de1();
    }
    int64_t v7 = v3 + a4; // 0x383e42
    int64_t v8 = v6; // 0x383e55
    int32_t * v9 = (int32_t *)v8; // 0x383e60
    *v9 = *v9 + (int32_t)v3;
    *(char *)0x103a266b = *(char *)0x103a266b >> 1;
    int64_t v10 = unknown_ffffffffac9c8a70() & 0x4c9da054 | 0xb3625fab; // 0x383e6f
    uint32_t v11 = *(int32_t *)0x304c5e88; // 0x383e81
    *(int32_t *)0x304c5e88 = v11 - 0x6bd336a7;
    unsigned char v12 = (char)v10; // 0x383e87
    unsigned char v13 = v12 - 124 + (char)(v11 > 0x6bd336a6); // 0x383e87
    int64_t v14 = v10 & 0xffffff00; // 0x383e87
    int32_t * v15 = (int32_t *)((v7 & 0xffffff00 | 241) + 0x7e0fac00); // 0x383e8e
    uint32_t v16 = *v15; // 0x383e8e
    *v15 = v16 / 0x10000 | 0x20000 * v16 | 0x10000 * (int32_t)(v13 <= v12 | v11 <= 0x6bd336a6);
    unsigned char v17 = v13 & -31;
    char * v18 = (char *)(v14 | (int64_t)v17); // 0x383e96
    *v18 = v17 + *v18;
    int32_t * v19 = (int32_t *)((v14 | 227) - 6); // 0x383e9f
    *v19 = *v19 + v6;
    uint64_t v20 = unknown_242135a8(); // 0x383ea2
    unsigned char v21 = (char)v20 % 32; // 0x383eb5
    if (v21 != 0) {
        char * v22 = (char *)v8; // 0x383eb5
        unsigned char v23 = *v22; // 0x383eb5
        *v22 = v23 << 8 - v21 | v23 >> v21;
    }
    char * v24 = (char *)(((v7 & 0xffff0000 | (int64_t)(int32_t)"cxa_get_globals_fast" | ((v20 / 256 | 241) + v20) % 256) + v3 & 0xffffffff) + 39); // 0x383eb8
    *v24 = *v24 | 123;
    abort();
    // UNREACHABLE
}

// Address range: 0x383ee2 - 0x383eef
int64_t function_383ee2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x383ee2
    int64_t result; // 0x383ee2
    char * v1 = (char *)(2 * result & 0xffffffff); // 0x383eea
    *v1 = *v1 | (char)(a4 / 256);
    return result;
}

// Address range: 0x383f43 - 0x383f44
int64_t function_383f43(void) {
    // 0x383f43
    int64_t result; // 0x383f43
    return result;
}

// Address range: 0x383f5d - 0x383f60
int64_t function_383f5d(void) {
    // 0x383f5d
    int64_t v1; // 0x383f5d
    __asm_wait(v1, v1, v1);
    return function_383f43();
}

// Address range: 0x383f81 - 0x383f87
int64_t function_383f81(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x383f81
    int64_t result; // 0x383f81
    return result;
}

// Address range: 0x383faa - 0x383fab
int64_t function_383faa(void) {
    // 0x383faa
    int64_t result; // 0x383faa
    return result;
}

// Address range: 0x383fe9 - 0x383fea
int64_t function_383fe9(void) {
    // 0x383fe9
    int64_t result; // 0x383fe9
    return result;
}

// Address range: 0x383ff7 - 0x384057
int64_t function_383ff7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int64_t result2; // 0x383ff7
    bool v2; // 0x383ff7
    char v3 = (char)result2 + (char)a4 + (char)v2; // 0x383ff7
    *(char *)result2 = v3;
    int64_t v4 = a4 - 1; // 0x383ffb
    if (v4 != 0 == v3 == 0) {
        char * v5 = (char *)(a3 - 5); // 0x38404e
        *v5 = (char)(result2 / 256);
        int64_t result = __asm_int1(); // 0x384053
        *(char *)v1 = *(char *)&v1 | *v5;
        return result;
    }
    if (v4 != 1 && v3 != 0) {
        // 0x384041
        return result2;
    }
    if (v3 < 0) {
        function_383fe9();
    }
    int32_t * v6 = (int32_t *)(result2 - 0x2a368e37); // 0x384001
    *v6 = *v6 + (int32_t)a2;
    return function_383faa();
}

// Address range: 0x384112 - 0x384115
int64_t function_384112(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x384112
    int64_t result; // 0x384112
    *(char *)a3 = (char)result - (char)(a4 / 256);
    return result;
}

// Address range: 0x38412b - 0x384132
int64_t function_38412b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x38412b
    return a3 & 0xffffffff;
}

// Address range: 0x38417f - 0x384180
int64_t function_38417f(void) {
    // 0x38417f
    int64_t result; // 0x38417f
    return result;
}

// Address range: 0x384192 - 0x384193
int64_t function_384192(void) {
    // 0x384192
    int64_t result; // 0x384192
    return result;
}

// Address range: 0x3841b0 - 0x3841b4
int64_t function_3841b0(int64_t a1) {
    // 0x3841b0
    int64_t result; // 0x3841b0
    int32_t * v1 = (int32_t *)(result + 42); // 0x3841b0
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3841b6 - 0x3841c2
int64_t function_3841b6(int64_t a1) {
    // 0x3841b6
    int64_t v1; // 0x3841b6
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 + 0x8356301 + 8 * v1); // 0x3841b6
    *v3 = *v3 + (char)(v2 / 256);
    int64_t result = (v2 + 114) % 256 | v2 & -256; // 0x3841bf
    if ((char)v2 >= 142) {
        result = function_38417f();
    }
    // 0x3841c1
    return result;
}

// Address range: 0x3841c3 - 0x3841c4
int64_t function_3841c3(void) {
    // 0x3841c3
    int64_t result; // 0x3841c3
    return result;
}

// Address range: 0x3841c6 - 0x3841cf
int64_t function_3841c6(void) {
    // 0x3841c6
    int64_t v1; // 0x3841c6
    int32_t * v2 = (int32_t *)(v1 + 0x5230a50a); // 0x3841c6
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x3841c6
    return (int64_t)(*(int32_t *)&v3 & (int32_t)v1);
}

// Address range: 0x3841d1 - 0x3841dd
int64_t function_3841d1(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 0x747ad064); // 0x3841d1
    int64_t result; // 0x3841d1
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3841e1 - 0x3841f8
int64_t function_3841e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x17c64404); // 0x3841e1
    bool v2; // 0x3841e1
    *v1 = *v1 + (int32_t)a4 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(8 * a1 + 58 + a3); // 0x3841e7
    int32_t v4 = a2; // 0x3841e7
    *v3 = *v3 + v4;
    int64_t v5; // 0x3841e1
    if (llvm_ctpop_i8((char)(*(int32_t *)(v5 - 0x22fe177e) | v4)) % 2 != 0) {
        function_384192();
    }
    // 0x3841f6
    return function_3841c3();
}

// Address range: 0x3841f9 - 0x3841fd
int64_t function_3841f9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3841f9
    int64_t result; // 0x3841f9
    return result;
}

// Address range: 0x38422a - 0x38422f
int64_t function_38422a(void) {
    // 0x38422a
    return function_ffffffffb4762528();
}

// Address range: 0x384265 - 0x38426d
int64_t function_384265(void) {
    // 0x384265
    int64_t result; // 0x384265
    return result;
}

// Address range: 0x3842ea - 0x3842f5
int64_t function_3842ea(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3842ea
    int64_t v1; // 0x3842ea
    int64_t v2 = v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x384327 - 0x384328
int64_t function_384327(void) {
    // 0x384327
    int64_t result; // 0x384327
    return result;
}

// Address range: 0x384339 - 0x38433a
int64_t function_384339(void) {
    // 0x384339
    int64_t result; // 0x384339
    return result;
}

// Address range: 0x384356 - 0x384357
int64_t function_384356(void) {
    // 0x384356
    int64_t result; // 0x384356
    return result;
}

// Address range: 0x384396 - 0x384574
int64_t function_384396(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a5;
    int64_t v2 = a4 - 1; // 0x384396
    int64_t v3; // 0x384396
    if (v2 != 0) {
        v3 = function_384327();
    }
    char v4 = v3 ^ a3; // 0x384398
    *(char *)a3 = v4;
    int64_t result = unknown_26431ba2(); // 0x38439c
    if (v4 != 0) {
        // 0x3843a3
        int64_t v5; // 0x384396
        char * v6 = (char *)(v5 + 0x4a0f01e8); // 0x3843a3
        *v6 = *v6 + (char)result;
        return result;
    }
    int64_t v7 = unknown_44c0efb8(); // 0x3843b2
    int64_t v8 = (v2 & -0xff01 | (int64_t)&g2) - 1; // 0x3843b7
    int64_t v9 = v7; // 0x3843b7
    if (v8 != 0) {
        v9 = function_384339();
    }
    uint32_t v10 = (int32_t)v9 - 0x17fe1774; // 0x3843b9
    int64_t v11 = v10; // 0x3843bf
    if (v8 != 1 && v10 != 0) {
        v11 = function_384356();
    }
    char * v12 = (char *)(v11 - 0x23f9700); // 0x3843c1
    *v12 = *v12 + (char)v11;
    return (int64_t)(*(int32_t *)&v1 + (int32_t)v11);
}

// Address range: 0x384574 - 0x384700
int64_t function_384574(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1; // bp-32, 0x3845cc
    int64_t v2 = a1 - 8; // 0x3845ef
    int64_t * v3 = (int64_t *)v2; // 0x3845ef
    *(int64_t *)(a1 - 16) = v2;
    *(int64_t *)(a1 - 24) = *v3;
    int64_t v4 = *v3; // 0x384613
    int64_t v5 = *(int64_t *)(v4 + 32); // 0x38461b
    int64_t * v6 = (int64_t *)(v4 - 8); // 0x38461b
    *v6 = v5;
    int64_t * v7 = (int64_t *)(v4 - 16); // 0x38461f
    *v7 = v5;
    int64_t * v8 = (int64_t *)(v4 - 24); // 0x384622
    *v8 = v5;
    int64_t * v9 = (int64_t *)(v4 + 16); // 0x38462e
    int64_t v10 = *v9; // 0x38462e
    *v6 = v10;
    *v7 = a1;
    int64_t * v11 = (int64_t *)(v4 - 32); // 0x384662
    *v11 = a6;
    *v8 = v4;
    int64_t v12 = *v7; // 0x384678
    *v11 = v12;
    *v7 = 0x1fbd5221;
    *v8 = v5;
    *(int64_t *)v4 = *v7;
    *v8 = 0x51b0c7c2;
    *v11 = v10;
    *v9 = *v7;
    *v7 = a4;
    *v6 = v4 + 8;
    int64_t result = function_cc59c(v12, a2, 0x343fd * (0x100000000 * a3 >> 32) & 0xffffffff, a4, a5, a6, (int64_t)&v1); // 0x3846fb
    return result;
}

// Address range: 0x384700 - 0x384888
int64_t function_384700(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x94ccad3; // bp-24, 0x384811
    int64_t v2 = (int64_t)&v1; // 0x384839
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x38485b
    *v3 = a3;
    int64_t v4 = *v3; // 0x38487e
    *v3 = v2 + 8;
    bool v5; // 0x384700
    return function_cc59c(a1, a2, v4, a4, a5, a6, 0x4000 * (int64_t)(bool)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2);
}

// Address range: 0x384888 - 0x3849c9
int64_t function_384888(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x384888
    int64_t v1; // bp-16, 0x384888
    int64_t v2 = (int64_t)&v1; // 0x3849ad
    int64_t v3 = v2; // bp-24, 0x3849ad
    v1 = v2 + 16;
    int64_t v4; // 0x384888
    return function_cc59c(a1, a2, a3, a5, a5, v4, (int64_t)&v3);
}

// Address range: 0x384a0d - 0x384a12
int64_t function_384a0d(void) {
    // 0x384a0d
    return function_77ade1ad();
}

// Address range: 0x384a26 - 0x384a27
int64_t function_384a26(void) {
    // 0x384a26
    int64_t result; // 0x384a26
    return result;
}

// Address range: 0x384a27 - 0x384a2c
int64_t function_384a27(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x384a27
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x384a27
    return result;
}
