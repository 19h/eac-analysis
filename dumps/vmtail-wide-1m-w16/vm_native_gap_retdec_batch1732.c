/*
 * Targeted RetDec C for native executable gap queue batch 1732.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x70a90-0x70c90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x17b8aa-0x17baaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x17baaa-0x17bcaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x17bcaa-0x17beaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x17beaa-0x17bf1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d8f16-0x2d9116 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d9116-0x2d9316 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d9316-0x2d9516 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d9516-0x2d9584 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34cbe6-0x34cde6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34cde6-0x34cfe6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34cfe6-0x34d1e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52c360-0x52c560 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52c560-0x52c760 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52c760-0x52c960 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52c960-0x52c9e0 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_124e79e();
int64_t function_17b8aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17b9fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_17bb56(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17bc9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_17bdc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21ce6ec();
int64_t function_2d8f03();
int64_t function_2d8f16(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2d8f42(void);
int64_t function_2d8f7d(void);
int64_t function_2d8f9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d900c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2d9095(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d91ad(int64_t a1);
int64_t function_2d91c0(void);
int64_t function_2d91c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d91e8(void);
int64_t function_2d91ef(void);
int64_t function_2d91f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d9208(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d9297(int64_t a1);
int64_t function_2d92b2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2d9344(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d938b(void);
int64_t function_2d93ab(void);
int64_t function_2d93f5(int64_t a1);
int64_t function_2d9439(void);
int64_t function_2d94b5(void);
int64_t function_2d94b7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_30bb95();
int64_t function_34cba6();
int64_t function_34cbe6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34cbfe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_34cd2f(void);
int64_t function_34cd63(void);
int64_t function_34cd9a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34cdbd(int64_t a1, int64_t a2);
int64_t function_34ce68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34cee7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34cef8(void);
int64_t function_34cf21(void);
int64_t function_34cf6e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_34cf83(int64_t a1, int64_t a2);
int64_t function_34cfdf(void);
int64_t function_34d019(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_34d046(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34d072(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34d0b0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34d0ba(void);
int64_t function_34d0e4(int64_t a1);
int64_t function_34d0ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34d13b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34d179(int64_t a1, int64_t a2);
int64_t function_34d183(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34d1ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4dd80be9();
int64_t function_5099931();
int64_t function_52c050();
int64_t function_52c360(void);
int64_t function_52c361(int64_t a1, int64_t a2, int64_t a3);
int64_t function_52c390(int64_t result, int64_t a2, int64_t a3);
int64_t function_52c3b0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_52c3d0(int64_t a1, int64_t str);
int64_t function_52c400(int64_t a1, uint64_t a2, uint64_t a3);
int64_t function_52c470(int64_t a1, uint64_t a2, int64_t a3, int64_t a4);
int64_t function_542650();
int64_t function_70a34();
int64_t function_70a90(void);
int64_t function_70a97(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_70ab7(void);
int64_t function_70aba(int64_t a1);
int64_t function_70abd(int64_t a1);
int64_t function_70ace(void);
int64_t function_70ae4(void);
int64_t function_70aef(void);
int64_t function_70af6(void);
int64_t function_70b0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_70b1b(int64_t a1);
int64_t function_70b3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_70b69(void);
int64_t function_70b87(int64_t a1);
int64_t function_70b99(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_70bc4(int64_t a1, int64_t a2);
int64_t function_70bda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5);
int64_t function_70c50(int64_t a1, int64_t a2);
int64_t function_70c7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_9612d8();
int64_t function_c9849();
int64_t function_ffffffffa83f3724();
int64_t function_ffffffffdd2f7a25();
int64_t unknown_1224fdf();
int64_t unknown_182e9bf1();
int64_t unknown_215ed0b();
int64_t unknown_28e5357d();
int64_t unknown_2df9a22d();
int64_t unknown_4478906e();
int64_t unknown_4b931320();
int64_t unknown_51f17cf5();
int64_t unknown_73354230();
int64_t unknown_7e2e098a();
int64_t unknown_ffffffff8434b8f5();
int64_t unknown_ffffffff8528504c();
int64_t unknown_ffffffff8ba44d20();
int64_t unknown_ffffffff9bc198c5();
int64_t unknown_ffffffff9f33acbe();
int64_t unknown_ffffffffa6383000();
int64_t unknown_ffffffffab420c04();
int64_t unknown_ffffffffad324499();
int64_t unknown_ffffffffb9362e20();
int64_t unknown_ffffffffba741913();
int64_t unknown_ffffffffbc2172d5();
int64_t unknown_ffffffffd31ff2e4();
int64_t unknown_ffffffffd725f97b();
int64_t unknown_ffffffffee34f85f();
int64_t unknown_ffffffffefd2bfaa();

// Address range: 0x70a90 - 0x70a91
int64_t function_70a90(void) {
    // 0x70a90
    int64_t result; // 0x70a90
    return result;
}

// Address range: 0x70a97 - 0x70aa7
int64_t function_70a97(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t result; // 0x70a97
    result = function_70a34();
    // 0x70a99
    int64_t v2; // 0x70a97
    *(char *)a4 = (char)v2 + (char)a4;
    *(char *)v1 = *(char *)&v1 + (char)result;
    __asm_out(99, (int32_t)result);
    return result;
}

// Address range: 0x70ab7 - 0x70aba
int64_t function_70ab7(void) {
    // 0x70ab7
    int64_t result; // 0x70ab7
    return result;
}

// Address range: 0x70aba - 0x70abd
int64_t function_70aba(int64_t a1) {
    // 0x70aba
    int64_t result; // 0x70aba
    return result;
}

// Address range: 0x70abd - 0x70ac1
int64_t function_70abd(int64_t a1) {
    // 0x70abd
    int64_t v1; // 0x70abd
    return v1 & 0xffffffff;
}

// Address range: 0x70ace - 0x70ad4
int64_t function_70ace(void) {
    // 0x70ace
    return function_4dd80be9();
}

// Address range: 0x70ae4 - 0x70ae5
int64_t function_70ae4(void) {
    // 0x70ae4
    int64_t result; // 0x70ae4
    return result;
}

// Address range: 0x70aef - 0x70af0
int64_t function_70aef(void) {
    // 0x70aef
    int64_t result; // 0x70aef
    return result;
}

// Address range: 0x70af6 - 0x70af7
int64_t function_70af6(void) {
    // 0x70af6
    int64_t result; // 0x70af6
    return result;
}

// Address range: 0x70b0a - 0x70b19
int64_t function_70b0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x70b0a
    int64_t v1; // 0x70b0a
    uint64_t v2 = v1;
    __asm_iretd();
    int64_t v3 = a3 & 0xffffffff; // 0x70b0e
    if ((char)(v2 / 256 || v2) < 0) {
        v3 = function_70af6();
    }
    // 0x70b10
    return v3 & 0x543ea30a;
}

// Address range: 0x70b1b - 0x70b23
int64_t function_70b1b(int64_t a1) {
    // 0x70b1b
    bool v1; // 0x70b1b
    __asm_sti((v1 ? -4 : 4) + a1);
    return function_124e79e();
}

// Address range: 0x70b3a - 0x70b51
int64_t function_70b3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x70b3a
    int64_t v1; // 0x70b3a
    int32_t v2 = *(int32_t *)(v1 - 0xc27701c); // 0x70b44
    char * v3 = (char *)(a4 + 60); // 0x70b4b
    *v3 = *v3 + (char)v1;
    return -0x4d9781fe - v2 + ((int32_t)v1 ^ 0x22648fd1);
}

// Address range: 0x70b69 - 0x70b6a
int64_t function_70b69(void) {
    // 0x70b69
    int64_t result; // 0x70b69
    return result;
}

// Address range: 0x70b87 - 0x70b88
int64_t function_70b87(int64_t a1) {
    // 0x70b87
    int64_t result; // 0x70b87
    return result;
}

// Address range: 0x70b99 - 0x70b9c
int64_t function_70b99(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x70b99
    int64_t result; // 0x70b99
    return result;
}

// Address range: 0x70bc4 - 0x70bca
int64_t function_70bc4(int64_t a1, int64_t a2) {
    // 0x70bc4
    int64_t result; // 0x70bc4
    return result;
}

// Address range: 0x70bda - 0x70c42
int64_t function_70bda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x70bda
    int64_t v1; // 0x70bda
    uint64_t v2 = v1;
    int32_t v3 = *(int32_t *)(a1 + 30); // 0x70bda
    *(char *)v2 = (char)(v2 / 256);
    int16_t v4 = a3; // 0x70be7
    bool v5; // 0x70bda
    *(char *)((v5 ? -4 : 4) + a1) = __asm_insb(v4);
    int64_t v6; // 0x70bda
    __asm_outsb(v4, *(char *)&v6);
    int64_t v7 = v2 & -0x10000 | (int64_t)&g3 | 2 * v2 & 254; // 0x70bec
    *(char *)0x1492fd25361db5f = (char)v7;
    int64_t v8 = v7 - 0x7724772e; // 0x70bfe
    __writegsbyte(v8, __readgsbyte(v8) ^ (char)a4);
    int64_t v9 = __readfsqword(40); // 0x70c28
    int64_t result = (int32_t)v1 - v3 & -0xff01 | (int32_t)&g4; // 0x70c31
    if (v1 != v9) {
        // 0x70c33
        __stack_chk_fail();
        result = (int64_t)&g7;
    }
    // 0x70c38
    return result;
}

// Address range: 0x70c50 - 0x70c7b
int64_t function_70c50(int64_t a1, int64_t a2) {
    // 0x70c50
    __readfsqword(40);
    return function_30bb95();
}

// Address range: 0x70c7b - 0x70c8b
int64_t function_70c7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = a6 & 0xffffffff; // 0x70c80
    int64_t v1; // 0x70c7b
    if ((char)v1 >= 0) {
        // 0x70ceb
        return result;
    }
    // 0x70c89
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x17b8aa - 0x17b9fb
int64_t function_17b8aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17b8aa
    int64_t v1; // bp-16, 0x17b8aa
    int64_t v2 = (int64_t)&v1; // 0x17b909
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x17b91f
    int64_t * v4 = (int64_t *)v3; // 0x17b920
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x17b923
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x17b927
    *v6 = v5;
    int64_t v7 = v2 - 24; // 0x17b92e
    int64_t * v8 = (int64_t *)v7; // 0x17b93d
    *v8 = v3;
    int64_t v9 = v2 + 8; // 0x17b946
    int64_t * v10 = (int64_t *)v9; // 0x17b946
    int64_t v11 = *v10; // 0x17b946
    *(int64_t *)(v2 - 32) = v11;
    *v8 = v7;
    *v6 = v5;
    *v10 = *v4;
    *v6 = 0x68b72f8f;
    *v8 = v11;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = a1;
    *v4 = v9;
    int64_t v12; // 0x17b8aa
    return function_c9849(*v4, a2, a3, a4, v12);
}

// Address range: 0x17b9fb - 0x17bb56
int64_t function_17b9fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x17b9fb
    int64_t v1; // bp-40, 0x17b9fb
    int64_t v2 = (int64_t)&v1; // 0x17baf0
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x17baf9
    *v3 = 0x64dc7b5a;
    *(int64_t *)(v2 + 32) = v1;
    int64_t v4 = v2 + 8; // 0x17bafc
    int64_t * v5 = (int64_t *)v4; // 0x17bb00
    v1 = *v5;
    *(int64_t *)(v2 - 24) = a1;
    *v3 = v4;
    v1 = *v5;
    return function_c9849(a1, a2, a3, a4, a5);
}

// Address range: 0x17bb56 - 0x17bc9e
int64_t function_17bb56(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17bb56
    int64_t v1; // bp-40, 0x17bb56
    int64_t v2 = (int64_t)&v1; // 0x17bbc2
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x17bbd7
    int64_t * v4 = (int64_t *)v3; // 0x17bbd8
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x17bbdb
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x17bbdf
    *v6 = v5;
    int64_t * v7 = (int64_t *)(v2 + 16); // 0x17bbf1
    int64_t v8 = *v7; // 0x17bbf1
    *v4 = v8;
    int64_t * v9 = (int64_t *)(v2 - 24); // 0x17bc18
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x17bc23
    v1 = v5;
    *v6 = 0x4793ead6;
    *v9 = 0x344100b1;
    *v10 = v8;
    *v7 = *v6;
    *v10 = a4;
    *v9 = v3;
    *v6 = v2;
    int64_t v11; // 0x17bb56
    return function_c9849(a1, a2, a3, a4, v11);
}

// Address range: 0x17bc9e - 0x17bdc0
int64_t function_17bc9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 169; // bp-16, 0x17bcb6
    int64_t v2; // bp-48, 0x17bc9e
    v2 = (int64_t)&v2;
    int64_t v3 = (int64_t)&v1; // 0x17bd9d
    *(int64_t *)(v3 - 8) = 169;
    *(int64_t *)(v3 - 16) = 169;
    int64_t v4; // 0x17bc9e
    return function_c9849(a1, v4, a3, a4, a5);
}

// Address range: 0x17bdc0 - 0x17bf1f
int64_t function_17bdc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x17bdc0
    int64_t v1; // 0x17bdc0
    return function_c9849(a1, a2, a3, a4, v1);
}

// Address range: 0x2d8f16 - 0x2d8f3f
int64_t function_2d8f16(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2d8f16
    int64_t v1; // 0x2d8f16
    *(char *)a1 = (char)v1;
    bool v2; // 0x2d8f16
    int64_t v3 = v2 ? -1 : 1; // 0x2d8f16
    unknown_ffffffff8ba44d20(v3 + a1, v3 + a2);
    int32_t * v4 = (int32_t *)(a3 + 28); // 0x2d8f21
    *v4 = *v4 + 77;
    int64_t result = unknown_2df9a22d(); // 0x2d8f27
    char * v5 = (char *)(result + 0x38c5600); // 0x2d8f2c
    *v5 = *v5 + (char)result;
    int64_t v6; // 0x2d8f16
    char * v7 = (char *)((256 * (int64_t)*(char *)&v6 | v1 & -0xff01) + 0x1201e800); // 0x2d8f32
    *v7 = *v7 + (char)(a4 / 256);
    char * v8 = (char *)(result + 1); // 0x2d8f38
    *v8 = *v8 + (char)v1;
    return result;
}

// Address range: 0x2d8f42 - 0x2d8f50
int64_t function_2d8f42(void) {
    // 0x2d8f42
    unknown_ffffffff8528504c();
    return function_5099931();
}

// Address range: 0x2d8f7d - 0x2d8f7f
int64_t function_2d8f7d(void) {
    // 0x2d8f7d
    return function_2d8f03();
}

// Address range: 0x2d8f9a - 0x2d8fff
int64_t function_2d8f9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d8f9a
    int64_t v1; // 0x2d8f9a
    *(char *)a1 = (char)v1;
    int64_t v2 = v1 & 0xffffffff; // 0x2d8fea
    bool v3; // 0x2d8f9a
    unknown_182e9bf1((v3 ? -1 : 1) + a1, v2);
    int32_t * v4 = (int32_t *)(v2 + 0x3e97d45); // 0x2d8ff2
    *v4 = *v4 + (int32_t)v1;
    return unknown_ffffffffa6383000();
}

// Address range: 0x2d900c - 0x2d9026
int64_t function_2d900c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2d900c
    *(char *)-0x27d08750 = *(char *)-0x27d08750 & (char)(a3 / 256);
    int64_t result; // 0x2d900c
    return result;
}

// Address range: 0x2d9095 - 0x2d909a
int64_t function_2d9095(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x2d9095
    int64_t v2; // 0x2d9095
    if (v1 != 0) {
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    return v2 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x2d91ad - 0x2d91b0
int64_t function_2d91ad(int64_t a1) {
    // 0x2d91ad
    int64_t result; // 0x2d91ad
    return result;
}

// Address range: 0x2d91c0 - 0x2d91c5
int64_t function_2d91c0(void) {
    // 0x2d91c0
    return function_ffffffffdd2f7a25();
}

// Address range: 0x2d91c9 - 0x2d91e6
int64_t function_2d91c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d91c9
    int64_t v1; // 0x2d91c9
    *(char *)(v1 + 4 * a1) = (char)a3;
    int64_t result = unknown_ffffffffbc2172d5(); // 0x2d91ce
    int64_t v2 = (int64_t)*(int32_t *)(a3 + 67 + 4 * v1); // 0x2d91d4
    if ((int32_t)v1 == (int32_t)a4 || 0x170028d6 * v2 != 0x170028d600000000 * v2 >> 32) {
        // 0x2d9218
        return result;
    }
    // 0x2d91de
    unknown_ffffffffd31ff2e4();
    return __asm_in(78);
}

// Address range: 0x2d91e8 - 0x2d91e9
int64_t function_2d91e8(void) {
    // 0x2d91e8
    int64_t result; // 0x2d91e8
    return result;
}

// Address range: 0x2d91ef - 0x2d91f6
int64_t function_2d91ef(void) {
    // 0x2d91ef
    return unknown_ffffffff8434b8f5();
}

// Address range: 0x2d91f7 - 0x2d9208
int64_t function_2d91f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 0x6af601e8); // 0x2d91fc
    int64_t v2; // 0x2d91f7
    *v1 = *v1 - (char)v2;
    return (v2 & 0xffff00ff | (int64_t)(int32_t)&g6) ^ 0xaf9dded8;
}

// Address range: 0x2d9208 - 0x2d9218
int64_t function_2d9208(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d9208
    int64_t v1; // 0x2d9208
    char * v2 = (char *)(v1 + 8 * v1); // 0x2d9208
    *v2 = *v2 | (char)a4;
    return unknown_ffffffffba741913(a1, a2, a3, a4) + 0x5fb0038 & 0xffffffff;
}

// Address range: 0x2d9297 - 0x2d9298
int64_t function_2d9297(int64_t a1) {
    // 0x2d9297
    int64_t result; // 0x2d9297
    return result;
}

// Address range: 0x2d92b2 - 0x2d92be
int64_t function_2d92b2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2d92b2
    int64_t result; // 0x2d92b2
    *(int32_t *)a4 = 2 * (int32_t)result;
    char * v1 = (char *)(a4 - 0x38fec294); // 0x2d92b4
    *v1 = *v1 + (char)(a3 / 256);
    return result;
}

// Address range: 0x2d9344 - 0x2d9353
int64_t function_2d9344(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d9344
    int64_t v1; // 0x2d9344
    char * v2 = (char *)(v1 - 0x17fb5f5c); // 0x2d9344
    bool v3; // 0x2d9344
    *v2 = *v2 + (char)v1 + (char)v3;
    int32_t * v4 = (int32_t *)(a2 + 97); // 0x2d934b
    *v4 = *v4 + (int32_t)a4;
    return function_9612d8();
}

// Address range: 0x2d938b - 0x2d938e
int64_t function_2d938b(void) {
    // 0x2d938b
    int64_t result; // 0x2d938b
    return result;
}

// Address range: 0x2d93ab - 0x2d93ac
int64_t function_2d93ab(void) {
    // 0x2d93ab
    int64_t result; // 0x2d93ab
    return result;
}

// Address range: 0x2d93f5 - 0x2d9405
int64_t function_2d93f5(int64_t a1) {
    function_2d93ab();
    // 0x2d93f7
    return 0xfffe8803;
}

// Address range: 0x2d9439 - 0x2d943a
int64_t function_2d9439(void) {
    // 0x2d9439
    int64_t result; // 0x2d9439
    return result;
}

// Address range: 0x2d94b5 - 0x2d94b7
int64_t function_2d94b5(void) {
    // 0x2d94b5
    return function_2d9439();
}

// Address range: 0x2d94b7 - 0x2d94ec
int64_t function_2d94b7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2d94b7
    int64_t v1; // 0x2d94b7
    __asm_outsd((int16_t)a3, (int32_t)v1);
    unknown_ffffffff9f33acbe();
    int64_t v2 = __asm_hlt(); // 0x2d94bf
    *(char *)-0x41c2c2aafe1793f9 = (char)v2;
    int64_t v3 = v2 + 0x948676 & 0xffffff00 | (int64_t)__asm_in_133(-24); // 0x2d94d6
    int32_t * v4 = (int32_t *)(v3 + 0x7194475); // 0x2d94d8
    *v4 = *v4 + *(int32_t *)(v1 + 0x6201e82a);
    int32_t * v5 = (int32_t *)(v3 + 5); // 0x2d94de
    *v5 = *v5 + (int32_t)a2;
    return unknown_215ed0b();
}

// Address range: 0x34cbe6 - 0x34cbf9
int64_t function_34cbe6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34cbe6
    int64_t v1; // 0x34cbe6
    int64_t v2 = v1 & -256 | 200; // 0x34cbf2
    if (*(char *)(a3 + 18) < (char)a3) {
        v2 = function_34cba6();
    }
    // 0x34cbf4
    *(int32_t *)a4 = 2 * (int32_t)a4;
    return v2 / 2 % 0x80000000;
}

// Address range: 0x34cbfe - 0x34ccfb
int64_t function_34cbfe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    unsigned char v1 = *(char *)-0x327df806fe170b12; // 0x34cbfe
    int64_t v2; // 0x34cbfe
    int64_t v3 = (int32_t)v2 >> 31; // 0x34cc07
    char * v4 = (char *)(v3 + 0x1e8dadd); // 0x34cc08
    *v4 = *v4 + (char)v2;
    int32_t * v5 = (int32_t *)v3; // 0x34cc0e
    *v5 = 0x400000 * *v5;
    int32_t v6 = (int32_t)(v2 & 0x800000 | (int64_t)v1) & 0x800035; // 0x34cc11
    bool v7; // 0x34cbfe
    int64_t v8 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 64 * (int64_t)(v6 == 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v6) % 2 == 0) | 2; // bp-8, 0x34cc16
    int64_t v9 = (int64_t)&v8; // 0x34cc16
    int64_t result = unknown_ffffffffb9362e20(); // 0x34cc1a
    char * v10 = (char *)(v2 - 85); // 0x34cc1f
    int32_t * v11 = (int32_t *)(v3 + 0x1f24a7f0);
    *v10 = *v10 + (char)a4;
    int64_t v12 = v9 - 8; // 0x34cc26
    *(int64_t *)v12 = v9;
    while (a4 != 0) {
        int32_t v13 = *v11; // 0x34cc2c
        int32_t v14 = v12; // 0x34cc2c
        int32_t v15 = v13 + v14; // 0x34cc2c
        *v11 = v15;
        if (v15 < 0 == ((v15 ^ v13) & (v15 ^ v14)) < 0 != v15 != 0) {
            // 0x34cc34
            return result;
        }
        int64_t v16 = v12;
        *v10 = *v10 + (char)a4;
        v12 = v16 - 8;
        *(int64_t *)v12 = v16;
    }
    int64_t v17 = ((v9 & (int64_t)&g2) == 0 ? 1 : -1) + a1; // 0x34cc6d
    int32_t * v18 = (int32_t *)(a6 - 85 + 4 * v2); // 0x34cc70
    *v18 = *v18 + (int32_t)v2;
    *(int32_t *)0xcbe5a301e898a6 = 0x7f01e8c1;
    // 0x34cc34
    return (int64_t)(*(int32_t *)v17 + (int32_t)v17);
}

// Address range: 0x34cd2f - 0x34cd30
int64_t function_34cd2f(void) {
    // 0x34cd2f
    int64_t result; // 0x34cd2f
    return result;
}

// Address range: 0x34cd63 - 0x34cd64
int64_t function_34cd63(void) {
    // 0x34cd63
    int64_t result; // 0x34cd63
    return result;
}

// Address range: 0x34cd9a - 0x34cd9e
int64_t function_34cd9a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34cd9a
    int64_t v1; // 0x34cd9a
    *(int32_t *)a1 = (int32_t)v1;
    int64_t result; // 0x34cd9a
    bool v2; // 0x34cd9a
    if (true == !v2) {
        result = function_34cd2f();
    }
    // 0x34cd9d
    return result;
}

// Address range: 0x34cdbd - 0x34cdc8
int64_t function_34cdbd(int64_t a1, int64_t a2) {
    // 0x34cdbd
    unknown_ffffffff9bc198c5();
    return function_34cd63();
}

// Address range: 0x34ce68 - 0x34ceb0
int64_t function_34ce68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34ce68
    __asm_out_135(96, (char)unknown_4478906e());
    int64_t v1; // 0x34ce68
    char * v2 = (char *)(2 * v1 + a4); // 0x34ce6f
    *v2 = *v2 | (char)a4;
    int64_t v3 = unknown_28e5357d(); // 0x34ce77
    int32_t * v4 = (int32_t *)(((a4 & 0xff00) + a4 & 0xff00 | a4 & -0xff01) + 0x6d2a7e67); // 0x34ce8e
    uint32_t v5 = *v4; // 0x34ce8e
    *v4 = v5 / 2 | 0x80000000 * v5;
    *(int32_t *)a1 = *(int32_t *)0x310ce2e4fb5f01e8;
    bool v6; // 0x34ce68
    int64_t v7 = v6 ? 0xfffffffc : 4; // 0x34ce9d
    int64_t v8; // 0x34ce68
    uint32_t v9 = *(int32_t *)&v8; // 0x34cea0
    int64_t v10 = -1 - (int32_t)(v7 + a1) < (int32_t)a2 ? 233 : 232; // 0x34cea3
    int64_t v11 = ((int64_t)v9 - v10) % 256 | (int64_t)(v9 & -256); // 0x34cea3
    int32_t * v12 = (int32_t *)v11; // 0x34cea5
    int32_t v13 = *v12 + (int32_t)v3; // 0x34cea5
    unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x34cea5
    *v12 = v13;
    int64_t v15 = v11; // 0x34cea7
    if (v14 % 2 != 0) {
        v15 = function_ffffffffa83f3724();
    }
    int64_t v16 = v15;
    uint32_t v17 = (int32_t)a4 % 32; // 0x34cead
    return v17 == 0 ? v16 : (int64_t)((int32_t)v16 >> v17);
}

// Address range: 0x34cee7 - 0x34ceea
int64_t function_34cee7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34cee7
    int64_t result; // 0x34cee7
    return result;
}

// Address range: 0x34cef8 - 0x34cefb
int64_t function_34cef8(void) {
    // 0x34cef8
    int64_t result; // 0x34cef8
    return result;
}

// Address range: 0x34cf21 - 0x34cf22
int64_t function_34cf21(void) {
    // 0x34cf21
    int64_t result; // 0x34cf21
    return result;
}

// Address range: 0x34cf6e - 0x34cf7d
int64_t function_34cf6e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x34cf6e
    int64_t v1; // 0x34cf6e
    int64_t v2 = v1 | a4 / 256 % 256; // 0x34cf6e
    int64_t result = v2; // 0x34cf78
    if (v2 < 0xffffffffb101e801) {
        result = function_34cf21();
    }
    // 0x34cf7a
    return result;
}

// Address range: 0x34cf83 - 0x34cf88
int64_t function_34cf83(int64_t a1, int64_t a2) {
    // 0x34cf83
    int64_t result; // 0x34cf83
    return result;
}

// Address range: 0x34cfdf - 0x34cfe0
int64_t function_34cfdf(void) {
    // 0x34cfdf
    int64_t result; // 0x34cfdf
    return result;
}

// Address range: 0x34d019 - 0x34d03c
int64_t function_34d019(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x34d019
    unknown_4b931320();
    *(char *)-0xfcaafdb = *(char *)-0xfcaafdb - (char)(a3 / 256);
    int64_t result = unknown_73354230(); // 0x34d02a
    int32_t * v1 = (int32_t *)(a3 + 123); // 0x34d037
    int64_t v2; // 0x34d019
    *v1 = *v1 - (int32_t)v2;
    return result;
}

// Address range: 0x34d046 - 0x34d06a
int64_t function_34d046(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34d046
    bool v1; // 0x34d046
    if (v1) {
        function_34cfdf();
    }
    // 0x34d056
    unknown_ffffffffee34f85f();
    __asm_iretd();
    __asm_in_134((int16_t)a3 % 256 | (int16_t)&g5);
    return function_21ce6ec();
}

// Address range: 0x34d072 - 0x34d0af
int64_t function_34d072(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34d072
    unknown_ffffffffd725f97b();
    unknown_7e2e098a();
    unknown_ffffffffad324499();
    int32_t * v1 = (int32_t *)(a4 + 0x5f1d2a5c); // 0x34d09d
    *v1 = *v1 / 2;
    unknown_ffffffffefd2bfaa();
    return function_34d0ba();
}

// Address range: 0x34d0b0 - 0x34d0ba
int64_t function_34d0b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34d0b0
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1; // 0x34d0b0
    bool v2; // 0x34d0b0
    int64_t v3 = v1 - (v2 ? 0xfbb501e9 : 0xfbb501e8); // 0x34d0b2
    __asm_out_135(-101, (char)v3);
    return v3 & 0xffffffff;
}

// Address range: 0x34d0ba - 0x34d0bc
int64_t function_34d0ba(void) {
    // 0x34d0ba
    int64_t result; // 0x34d0ba
    return result;
}

// Address range: 0x34d0e4 - 0x34d0e7
int64_t function_34d0e4(int64_t a1) {
    // 0x34d0e4
    int64_t result; // 0x34d0e4
    return result;
}

// Address range: 0x34d0ef - 0x34d118
int64_t function_34d0ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)((unknown_51f17cf5() & -220) - 0x6ec1d4f9); // 0x34d0f8
    int32_t v2 = *v1; // 0x34d0f8
    *v1 = -v2;
    int64_t v3 = unknown_ffffffffab420c04() - (v2 == 0 ? 0x7f00797e : 0x7f00797f); // 0x34d103
    int32_t v4 = (int32_t)v3 >> 31; // 0x34d108
    char * v5 = (char *)(v3 & 0xffffffff); // 0x34d109
    *v5 = *v5 + (char)v3;
    int64_t v6; // 0x34d0ef
    char * v7 = (char *)(v6 - 24); // 0x34d10b
    *v7 = 2 * *v7;
    int32_t * v8 = (int32_t *)a1; // 0x34d10e
    int64_t v9; // 0x34d0ef
    *v8 = *(int32_t *)&v9 + v4;
    *v8 = __asm_insd((int16_t)v4);
    return __asm_sti(a1);
}

// Address range: 0x34d13b - 0x34d172
int64_t function_34d13b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34d13b
    int64_t v1; // 0x34d13b
    *(int32_t *)v1 = 0x13dc5fc;
    float80_t v2; // 0x34d13b
    *(float80_t *)(v1 + 0x6305928f) = __asm_fbstp(v2);
    int64_t result; // 0x34d13b
    if (a4 == 0) {
        // 0x34d1bf
        return result;
    }
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result | (char)v3;
    int64_t v4 = result;
    result = v4 + 0xb3c9fe & 0xffffffff;
    char * v5 = (char *)(v1 + 0xb49d70d4 & 0xffffffff); // 0x34d15c
    unsigned char v6 = *v5; // 0x34d15c
    unsigned char v7 = v6 + (char)(v1 / 256); // 0x34d15c
    *v5 = v7;
    char * v8 = (char *)((v4 + a3) % 256 | a3 & -256); // 0x34d165
    *v8 = *v8 + 37 + (char)(v7 < v6);
    int64_t v9 = result + 0x3d00f696; // 0x34d169
    int64_t v10 = v9 & 0xffffffff; // 0x34d169
    result = v10;
    int32_t * v11 = (int32_t *)v10; // 0x34d16e
    uint32_t v12 = *v11; // 0x34d16e
    uint32_t v13 = v12 + (int32_t)v9; // 0x34d16e
    *v11 = v13;
    while (v13 >= v12 && v13 != 0) {
        // 0x34d169
        v9 = result + 0x3d00f696;
        v10 = v9 & 0xffffffff;
        result = v10;
        v11 = (int32_t *)v10;
        v12 = *v11;
        v13 = v12 + (int32_t)v9;
        *v11 = v13;
    }
    // 0x34d172
    return result;
}

// Address range: 0x34d179 - 0x34d183
int64_t function_34d179(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 0x5b31544b); // 0x34d179
    int64_t result; // 0x34d179
    *v1 = *v1 + (int32_t)result;
    char * v2 = (char *)(a1 - 113); // 0x34d17f
    *v2 = *v2 & (char)(result / 256);
    return result;
}

// Address range: 0x34d183 - 0x34d1bf
int64_t function_34d183(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34d183
    bool v1; // 0x34d183
    int64_t v2 = (v1 ? -4 : 4) + a2; // 0x34d18d
    *(char *)a3 = (char)*(int32_t *)(a4 + 2 + v2);
    int64_t v3; // 0x34d183
    uint32_t v4 = 61 * *(int32_t *)((v3 & 0xffffffff) + 0xfa067ea); // 0x34d199
    int32_t * v5 = (int32_t *)(int64_t)v4; // 0x34d1a0
    *v5 = *v5 + v4;
    uint32_t v6 = *(int32_t *)0x67e0ebc7aab1052a; // 0x34d1a2
    int64_t result = v6; // 0x34d1a2
    int32_t * v7 = (int32_t *)(v2 - 92); // 0x34d1b3
    *v7 = *v7 | (int32_t)a1;
    char * v8 = (char *)result; // 0x34d1bd
    *v8 = *v8 + (char)v6;
    return result;
}

// Address range: 0x34d1ca - 0x34d1e5
int64_t function_34d1ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34d1ca
    int64_t v1; // 0x34d1ca
    *(int32_t *)a1 = (int32_t)v1;
    char v2 = *(char *)(a2 - 110 + 2 * v1) | (char)v1; // 0x34d1d1
    __asm_out_135(63, v2);
    char * v3 = (char *)(256 * v1 + a3 & 0xff00 | a3 & -0xff01); // 0x34d1d7
    *v3 = *v3 + v2;
    return unknown_1224fdf();
}

// Address range: 0x52c360 - 0x52c361
int64_t function_52c360(void) {
    // 0x52c360
    int64_t result; // 0x52c360
    return result;
}

// Address range: 0x52c361 - 0x52c381
int64_t function_52c361(int64_t a1, int64_t a2, int64_t a3) {
    // 0x52c361
    int64_t v1; // 0x52c361
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_52c050(a1, 0, *(int64_t *)(a1 + 8), a2, a3, v1);
}

// Address range: 0x52c390 - 0x52c3aa
int64_t function_52c390(int64_t result, int64_t a2, int64_t a3) {
    // 0x52c390
    int64_t v1; // 0x52c390
    function_52c050(result, 0, *(int64_t *)(result + 8), a2, a3, v1);
    return result;
}

// Address range: 0x52c3b0 - 0x52c3c1
int64_t function_52c3b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x52c3b0
    int64_t v1; // 0x52c3b0
    return function_52c050(a1, 0, *(int64_t *)(a1 + 8), a2, a3, v1);
}

// Address range: 0x52c3d0 - 0x52c3fe
int64_t function_52c3d0(int64_t a1, int64_t str) {
    int32_t len = strlen((char *)str); // 0x52c3df
    int64_t v1; // 0x52c3d0
    return function_52c050(a1, 0, *(int64_t *)(a1 + 8), str, (int64_t)len, v1);
}

// Address range: 0x52c400 - 0x52c46e
int64_t function_52c400(int64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x52c400
    int64_t v2; // 0x52c400
    if (v1 >= a2) {
        uint64_t v3 = v1 - a2; // 0x52c407
        return function_52c050(a1, (int32_t)a2, v3 > a3 ? a3 : v3, v2, v2, v1);
    }
    // 0x52c41b
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, v1, v2, v1);
    return function_52c050((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int32_t)"basic_string::replace" ^ (int32_t)"basic_string::replace", 0x6863696877282073, (int64_t)"basic_string::replace", (int64_t)strlen("basic_string::replace"), v1);
}

// Address range: 0x52c470 - 0x52c9e0
int64_t function_52c470(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x52c473
    int64_t v2; // 0x52c470
    if (v1 >= a2) {
        // 0x52c47c
        return function_52c050(a1, (int32_t)a2, 0, a3, a4, v2);
    }
    // 0x52c486
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", a2, v1, a4, v2);
    int64_t v3 = *(int64_t *)(v1 + 8); // 0x52c4b4
    if (!((((int64_t)"basic_string::replace" < 0x6863696877282073 || (int64_t)"basic_string::replace" == 0x6863696877282073) ^ true))) {
        int64_t v4 = a2 < 0x6863696877282073 - (int64_t)"basic_string::replace" ? a2 : 0x6863696877282073 - (int64_t)"basic_string::replace"; // 0x52c4c4
        int64_t v5 = *(int64_t *)v1; // 0x52c4b8
        return function_52c050((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int32_t)"basic_string::replace", v4, v5, v3, 0x6863696877282073);
    }
    // 0x52c4d2
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", (int64_t)"basic_string::replace", 0x6863696877282073, v3, 0x6863696877282073);
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", (int64_t)"basic_string::replace", 0x6863696877282073, 0x65723a3a676e6972, 0x6863696877282073);
    strlen((char *)0x6863696877282073);
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", (int64_t)"basic_string::replace", 0x6863696877282073, 0x65723a3a676e6972, 0x6863696877282073);
    strlen("basic_string::replace");
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", (int64_t)"basic_string::replace", 0x6863696877282073, 0x65723a3a676e6972, 0x6863696877282073);
    if (!((((int64_t)"basic_string::replace" < 0xd7d3c8c797629398 || (int64_t)"basic_string::replace" == -0x282c3738689d6c68) ^ true))) {
        // 0x52c61f
        return function_52c050((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int32_t)((int64_t)"basic_string::replace" - 0x6f705f5f203a7325), -(int64_t)"basic_string::replace" > 0x282c3738689d6c68 ? 0 : -0x282c3738689d6c68 - (int64_t)"basic_string::replace", 0x6863696877282073, 0x65723a3a676e6972, 0x6863696877282073);
    }
    // 0x52c627
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", (int64_t)"basic_string::replace" - 0x6f705f5f203a7325, 0x6863696877282073, 0x65723a3a676e6972, 0x6863696877282073);
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", (int64_t)"basic_string::replace" - 0x6f705f5f203a7325, 0x6863696877282073, -0x2f12f2e0fb9b701, 0x6863696877282073);
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", (int64_t)"basic_string::replace" - 0x6f705f5f203a7325, 0x6863696877282073, -0x6b54989686e1d774, 0x6863696877282073);
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", (int64_t)"basic_string::replace" - 0x6f705f5f203a7325, 0x6863696877282073, -0x6b54989686e1d774, 0x6863696877282073);
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", (int64_t)"basic_string::replace" - 0x6f705f5f203a7325, 0x6863696877282073, 0x29757a2520736920, 0x6863696877282073);
    strlen((char *)0x6863696877282073);
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", (int64_t)"basic_string::replace" - 0x6f705f5f203a7325, 0x6863696877282073, 0x29757a2520736920, 0x6863696877282073);
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", (int64_t)"basic_string::replace" - 0x6f705f5f203a7325, 0x6863696877282073, -0x3eedef4356b4b753, 0x6863696877282073);
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", (int64_t)"basic_string::replace" - 0x6f705f5f203a7325, 0x6863696877282073, 0x58aea7543223283a, 0x6863696877282073);
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", (int64_t)"basic_string::replace" - 0x6f705f5f203a7325, 0x6863696877282073, 0x6863696877282073, 0x6863696877282073);
    uint64_t v6 = *(int64_t *)((int64_t)"basic_string::replace" - 0x6f705f5f203a731d); // 0x52c8f4
    uint64_t v7 = v6 - 0x6863696877282073; // 0x52c8fe
    int64_t v8 = v7 < 0x6863696877282073 ? v7 : 0x6863696877282073; // 0x52c907
    int64_t v9; // 0x52c470
    int64_t v10; // 0x52c470
    if (v6 < 0x6863696877282073) {
        // 0x52c927
        v9 = function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::insert", 0x6863696877282073, v6, v8, 0x6863696877282073);
        v10 = (int64_t)"basic_string::insert";
    } else {
        // 0x52c910
        v9 = 0x6863696877282073;
        v10 = (int64_t)"basic_string::replace";
        if ((int64_t)"basic_string::replace" < 0x6863696877282074) {
            int64_t v11 = *(int64_t *)((int64_t)"basic_string::replace" - 0x6f705f5f203a7325); // 0x52c901
            return function_52c050((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int32_t)"basic_string::replace", 0, v11 + 0x6863696877282073, v8, 0x6863696877282073);
        }
    }
    uint64_t v12 = v10;
    function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", v12, v9, v8, 0x6863696877282073);
    uint64_t v13 = *(int64_t *)(v9 + 8); // 0x52c964
    int64_t v14; // 0x52c470
    int64_t result; // 0x52c9d3
    if (v13 < v8) {
        // 0x52c9a2
        function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", v8, v13, v8, 0x6863696877282073);
        // 0x52c9bd
        v14 = v8;
        result = function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", (int64_t)"basic_string::replace", v14, v14, 0x6863696877282073);
        return result;
    }
    // 0x52c97d
    if ((int64_t)"basic_string::replace" >= 0x6863696877282074) {
        int64_t v15 = 0x6863696877282073 - (int64_t)"basic_string::replace";
        v14 = 0x6863696877282073;
        result = function_542650("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::replace", (int64_t)"basic_string::replace", v14, v14, v15);
        return result;
    }
    uint64_t v16 = v13 - v8; // 0x52c96e
    int64_t v17 = v16 < 0x6863696877282073 ? v16 : 0x6863696877282073; // 0x52c974
    int64_t v18 = v12 < 0x6863696877282073 - (int64_t)"basic_string::replace" ? v12 : 0x6863696877282073 - (int64_t)"basic_string::replace"; // 0x52c98d
    int64_t v19 = *(int64_t *)v9; // 0x52c968
    return function_52c050((int64_t)"%s: __pos (which is %zu) > this->size() (which is %zu)", (int32_t)"basic_string::replace", v18, v19 + v8, v17, 0x6863696877282073 - (int64_t)"basic_string::replace");
}
