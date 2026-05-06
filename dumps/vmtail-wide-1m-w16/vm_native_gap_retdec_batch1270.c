/*
 * Targeted RetDec C for native executable gap queue batch 1270.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x13ac09-0x13ae09 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13b209-0x13b409 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d7f16-0x2d8116 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d8116-0x2d8316 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d8316-0x2d8516 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d8716-0x2d8916 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d8916-0x2d8b16 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d8b16-0x2d8d16 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2d8d16-0x2d8f16 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34bbe6-0x34bde6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34bde6-0x34bfe6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34c1e6-0x34c3e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34c3e6-0x34c5e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34c5e6-0x34c7e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34c7e6-0x34c9e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x34c9e6-0x34cbe6 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_100f4144();
int64_t function_1140e53();
int64_t function_13abe7();
int64_t function_13ac09(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13ac23(void);
int64_t function_13ac24(void);
int64_t function_13ac25(int64_t a1);
int64_t function_13ac90(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13aca8(void);
int64_t function_13acb8(void);
int64_t function_13acc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13ace0(void);
int64_t function_13acef(void);
int64_t function_13ad17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13ad64(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13adb4(void);
int64_t function_13add7(int64_t a1, int64_t a2, uint32_t a3);
int64_t function_13ae2d();
int64_t function_13b209(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_13b290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13b2fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13b32e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13b361(void);
int64_t function_1f6a180b();
int64_t function_21586e3();
int64_t function_21d5ac9();
int64_t function_24b9cbc6();
int64_t function_2d7f16(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d7f76(void);
int64_t function_2d7f8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d7fc1(void);
int64_t function_2d7fc6(void);
int64_t function_2d7fd0(void);
int64_t function_2d7fd1(void);
int64_t function_2d7ffb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d8035(void);
int64_t function_2d8040(int64_t a1);
int64_t function_2d80b7(void);
int64_t function_2d8107(int64_t a1);
int64_t function_2d8149(void);
int64_t function_2d817a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d818b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d82df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d8370(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2d83fd(void);
int64_t function_2d8445(void);
int64_t function_2d8469(void);
int64_t function_2d847c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d8496(int64_t a1);
int64_t function_2d84b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2d84f5(int64_t a1);
int64_t function_2d86ee();
int64_t function_2d8716(int64_t a1);
int64_t function_2d8735(void);
int64_t function_2d877e(int64_t a1);
int64_t function_2d87a6(void);
int64_t function_2d87fb(int64_t a1);
int64_t function_2d8927(void);
int64_t function_2d8942(int64_t a1);
int64_t function_2d896c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d897b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d8980(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d89aa(void);
int64_t function_2d89c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d89f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d8a79(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d8b3e(void);
int64_t function_2d8b55(int64_t a1);
int64_t function_2d8b81(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d8bc0(void);
int64_t function_2d8bd1(void);
int64_t function_2d8bfc(int64_t a1);
int64_t function_2d8c19(void);
int64_t function_2d8c41(void);
int64_t function_2d8c54(int64_t a1);
int64_t function_2d8c5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d8cea(int64_t a1);
int64_t function_2d8d0c(int64_t a1);
int64_t function_2d8d29(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2d8d45(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2d8e7a(void);
int64_t function_2d8ed6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2d8f02(void);
int64_t function_34bbe6(int64_t a1);
int64_t function_34bc58(int64_t a1);
int64_t function_34bd34(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34bd57(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_34bd66(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34bdf2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34beba(void);
int64_t function_34bf04(void);
int64_t function_34bf14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34bf6e(void);
int64_t function_34bfb0(void);
int64_t function_34c1e6(void);
int64_t function_34c1e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34c20c(void);
int64_t function_34c21e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34c224(uint64_t a1, int64_t a2, int64_t a3);
int64_t function_34c282(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34c2c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34c2eb(void);
int64_t function_34c2ed(int64_t a1, int64_t a2);
int64_t function_34c2f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34c377(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_34c417(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34c42a(void);
int64_t function_34c48d(void);
int64_t function_34c4c9(void);
int64_t function_34c4f7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34c535(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34c540(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34c5f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34c63b(void);
int64_t function_34c649(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34c67f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34c6bd(void);
int64_t function_34c6bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34c734(int64_t a1);
int64_t function_34c73d(void);
int64_t function_34c76a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_34c838(int64_t a1, int64_t a2, int64_t a3);
int64_t function_34c862(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34c8a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34c901(void);
int64_t function_34c908(int64_t a1);
int64_t function_34c97f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34c9a4(void);
int64_t function_34c9ae(void);
int64_t function_34c9ba(void);
int64_t function_34c9d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34c9f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_34cad1(void);
int64_t function_34cb00(void);
int64_t function_34cb19(void);
int64_t function_34cb1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3a6c25df();
int64_t function_4336b260();
int64_t function_54018e46();
int64_t function_6410508();
int64_t function_ffffffffdb3f8a12();
int64_t unknown_1033e530();
int64_t unknown_13db1b3e();
int64_t unknown_14295c8e();
int64_t unknown_1983c321();
int64_t unknown_1e95cef6();
int64_t unknown_2102d8de();
int64_t unknown_23909bae();
int64_t unknown_29247cc9();
int64_t unknown_2b28a94b();
int64_t unknown_2bb8d51f();
int64_t unknown_2df34b76();
int64_t unknown_3843380a();
int64_t unknown_3906e55a();
int64_t unknown_3a41f9e7();
int64_t unknown_3ac5f6c6();
int64_t unknown_3ad8153c();
int64_t unknown_4736acb6();
int64_t unknown_4833749e();
int64_t unknown_4baa6669();
int64_t unknown_4c7711d();
int64_t unknown_4e3864ca();
int64_t unknown_52f735b();
int64_t unknown_5a3c93f();
int64_t unknown_68fb5c30();
int64_t unknown_7194e91();
int64_t unknown_726db615();
int64_t unknown_7278770b();
int64_t unknown_7ddb4e97();
int64_t unknown_c6a770();
int64_t unknown_d8ae4ce();
int64_t unknown_ffffffff81b4af0e();
int64_t unknown_ffffffff81d1cd6b();
int64_t unknown_ffffffff8455dd2c();
int64_t unknown_ffffffff89d78483();
int64_t unknown_ffffffff8a0cc60f();
int64_t unknown_ffffffff8e649615();
int64_t unknown_ffffffff8f2dfc7f();
int64_t unknown_ffffffff918883ed();
int64_t unknown_ffffffff94acaacf();
int64_t unknown_ffffffff9892655e();
int64_t unknown_ffffffff99c45067();
int64_t unknown_ffffffff9b32754e();
int64_t unknown_ffffffffaa029873();
int64_t unknown_ffffffffabfec295();
int64_t unknown_ffffffffae35c1d1();
int64_t unknown_ffffffffb38fc6bf();
int64_t unknown_ffffffffb48a82f4();
int64_t unknown_ffffffffb9b3e2c9();
int64_t unknown_ffffffffbbbf5904();
int64_t unknown_ffffffffbe41aae9();
int64_t unknown_ffffffffbe91406e();
int64_t unknown_ffffffffd0900641();
int64_t unknown_ffffffffd8daab86();
int64_t unknown_ffffffffdeb66572();
int64_t unknown_ffffffffe868b46c();
int64_t unknown_ffffffffedff5ebd();
int64_t unknown_fffffffffaaaaafb();

// Address range: 0x13ac09 - 0x13ac22
int64_t function_13ac09(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13ac09
    int64_t v1; // 0x13ac09
    int64_t v2 = v1;
    *(char *)a2 = (char)(v2 & v1);
    char * v3 = (char *)(2 * v1); // 0x13ac0b
    *v3 = *v3 | (char)v1;
    int64_t v4; // 0x13ac09
    __asm_outsd((int16_t)a3, *(int32_t *)&v4);
    int64_t result = a4 + 0xffffffff & 0xffffffff; // 0x13ac1d
    if ((int32_t)((v2 + 3) % 256 || v2 & 0xffffff00) >= 0x2ff15f01) {
        result = function_13abe7();
    }
    // 0x13ac20
    return result;
}

// Address range: 0x13ac23 - 0x13ac24
int64_t function_13ac23(void) {
    // 0x13ac23
    int64_t result; // 0x13ac23
    return result;
}

// Address range: 0x13ac24 - 0x13ac25
int64_t function_13ac24(void) {
    // 0x13ac24
    int64_t result; // 0x13ac24
    return result;
}

// Address range: 0x13ac25 - 0x13ac39
int64_t function_13ac25(int64_t a1) {
    // 0x13ac25
    *(int32_t *)a1 = __asm_insd(0x4dbe);
    int64_t v1; // 0x13ac25
    return v1 & -0xff01 | (int64_t)&g4;
}

// Address range: 0x13ac90 - 0x13ac98
int64_t function_13ac90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13ac90
    int64_t result; // 0x13ac90
    return result;
}

// Address range: 0x13aca8 - 0x13acaa
int64_t function_13aca8(void) {
    // 0x13aca8
    int64_t v1; // 0x13aca8
    return v1 & 0xffffffff;
}

// Address range: 0x13acb8 - 0x13acb9
int64_t function_13acb8(void) {
    // 0x13acb8
    int64_t result; // 0x13acb8
    return result;
}

// Address range: 0x13acc7 - 0x13acca
int64_t function_13acc7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13acc7
    int64_t result; // 0x13acc7
    return result;
}

// Address range: 0x13ace0 - 0x13ace1
int64_t function_13ace0(void) {
    // 0x13ace0
    int64_t result; // 0x13ace0
    return result;
}

// Address range: 0x13acef - 0x13acf0
int64_t function_13acef(void) {
    // 0x13acef
    int64_t result; // 0x13acef
    return result;
}

// Address range: 0x13ad17 - 0x13ad2a
int64_t function_13ad17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13ad17
    int64_t v1; // 0x13ad17
    int32_t v2 = v1; // 0x13ad17
    int64_t v3; // 0x13ad17
    if (v2 < 0x22310001) {
        v3 = function_13acb8();
    }
    // 0x13ad1e
    __asm_out_134(117, (char)v3);
    int64_t result = v3; // 0x13ad27
    if (a4 != 1 && v2 != 0x22310001) {
        result = function_13acef();
    }
    // 0x13ad29
    return result;
}

// Address range: 0x13ad64 - 0x13ad76
int64_t function_13ad64(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13ad64
    int64_t v1; // 0x13ad64
    return function_13add7(a1, a2, (int32_t)v1 + (int32_t)a3);
}

// Address range: 0x13adb4 - 0x13adc0
int64_t function_13adb4(void) {
    char v1 = *(char *)0x33a036bc; // 0x13adb5
    int64_t v2; // 0x13adb4
    *(char *)0x33a036bc = v1 + (char)((uint64_t)v2 / 256);
    return function_13ae2d();
}

// Address range: 0x13add7 - 0x13adfe
int64_t function_13add7(int64_t a1, int64_t a2, uint32_t a3) {
    // 0x13add7
    int64_t result; // 0x13add7
    char v1 = result; // 0x13adde
    *(char *)0x502890013d00433a = v1;
    if ((v1 ^ (char)a3) < 0) {
        // 0x13adeb
        return result;
    }
    char * v2 = (char *)((result & 0xffffffff) - 0x4c3d7052); // 0x13aded
    *v2 = 128 * (char)(*(int64_t *)0x400a5add % 2 != 0) | *v2 / 2;
    char * v3 = (char *)(result + 80); // 0x13adf3
    *v3 = *v3 + (char)(a3 / 256);
    *(int64_t *)0x400a5add = a2;
    char v4 = *(char *)-0x78eafa01; // 0x13adf8
    *(char *)-0x78eafa01 = v4 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x13b209 - 0x13b244
int64_t function_13b209(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x13b209
    int64_t v1; // 0x13b209
    int32_t * v2 = (int32_t *)(v1 - 0x60ff3500); // 0x13b209
    *v2 = *v2 + (int32_t)v1;
    if ((v1 & 0xffffffff) != 0) {
        int64_t v3 = unknown_1983c321(); // 0x13b21a
        uint32_t v4 = (int32_t)v3 > 0xa437fabf ? 37 : 36; // 0x13b225
        int32_t * v5 = (int32_t *)(2 * v1); // 0x13b22b
        *v5 = *v5 + (int32_t)v1;
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        return v1 + 0x5bc80540 + v3 + (int64_t)((int32_t)v3 > 0xa437fabf | v4 > (int32_t)a6) & 0xffffffff;
    }
    // 0x13b230
    __asm_out((int16_t)a3, (char)a4 ^ 118);
    int32_t * v6 = (int32_t *)(2 * v1 + 58 + v1); // 0x13b233
    *v6 = *v6 - (int32_t)v1;
    int64_t result = unknown_5a3c93f(); // 0x13b239
    char * v7 = (char *)(v1 & -0xff01 | (int64_t)&g3); // 0x13b242
    *v7 = *v7 >> 1;
    return result;
}

// Address range: 0x13b290 - 0x13b29e
int64_t function_13b290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13b290
    int64_t v1; // 0x13b290
    int64_t v2 = v1;
    int64_t v3 = -1 - (int32_t)a4 < (int32_t)v1 ? 0xf4c5d6aa : 0xf4c5d6a9; // 0x13b294
    return ((v2 + 24) % 256 | v2 & 0xffffff00) - v3 & 0xffffffff;
}

// Address range: 0x13b2fb - 0x13b32e
int64_t function_13b2fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13b2fb
    int64_t v1; // 0x13b2fb
    uint32_t v2 = (int32_t)v1 + (int32_t)a4; // 0x13b2fb
    char v3 = v2; // 0x13b2fb
    int64_t v4; // 0x13b2fb
    if (llvm_ctpop_i8(v3) % 2 == 0) {
        char * v5 = (char *)unknown_7278770b(); // 0x13b30d
        *v5 = *v5 ^ v3;
        int64_t v6 = unknown_ffffffff8e649615(); // 0x13b30f
        int3_t v7; // 0x13b2fb
        __frontend_reg_store_fpr(v7, 1.0);
        v4 = (int64_t)((0x10000 * (v2 / 256 % 256 ^ (int32_t)v6) + 0x57ab0000) / 0x10000);
    }
    // 0x13b325
    return v4 + 0x3e35e082 & 0xffffffff;
}

// Address range: 0x13b32e - 0x13b341
int64_t function_13b32e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13b32e
    int64_t v1; // 0x13b32e
    uint64_t v2 = v1;
    int64_t result = v2 & 0xffffffff; // 0x13b333
    *(char *)v1 = (char)(v2 / 256);
    *(char *)-0x765793c3 = *(char *)-0x765793c3 + (char)(v1 / 256);
    char * v3 = (char *)(8 * a1 + 70 + result); // 0x13b33c
    *v3 = *v3 | (char)a3;
    return result;
}

// Address range: 0x13b361 - 0x13b364
int64_t function_13b361(void) {
    // 0x13b361
    int64_t result; // 0x13b361
    return result;
}

// Address range: 0x2d7f16 - 0x2d7f41
int64_t function_2d7f16(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)0x47f1671d; // 0x2d7f16
    int64_t v2; // 0x2d7f16
    unsigned char v3 = v1 + (char)((uint64_t)v2 / 256); // 0x2d7f16
    *(char *)0x47f1671d = v3;
    int64_t v4 = (a3 + a1 + (int64_t)(v3 < v1)) % 256 | a3 & -256; // 0x2d7f1d
    int64_t v5 = __asm_iretd(v2 & 0xffffffff) & 0x2fffebfa | 0xd0001405; // 0x2d7f25
    char v6 = v5;
    __asm_out_133((int16_t)v4, (int32_t)v5);
    unsigned char v7 = (v6 + (char)a4) % 32;
    if (v7 != 0) {
        int32_t * v8 = (int32_t *)(v5 + 31);
        *v8 = *v8 >> (int32_t)v7;
    }
    char * v9 = (char *)v5; // 0x2d7f36
    *v9 = *v9 + v6;
    uint32_t v10 = *(int32_t *)v4; // 0x2d7f38
    int64_t result = v10; // 0x2d7f38
    char * v11 = (char *)result; // 0x2d7f3a
    *v11 = *v11 + (char)v10;
    return result;
}

// Address range: 0x2d7f76 - 0x2d7f77
int64_t function_2d7f76(void) {
    // 0x2d7f76
    int64_t result; // 0x2d7f76
    return result;
}

// Address range: 0x2d7f8d - 0x2d7f99
int64_t function_2d7f8d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d7f8d
    int64_t v1; // 0x2d7f8d
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return unknown_7ddb4e97(a1, a2, a3, a4);
}

// Address range: 0x2d7fc1 - 0x2d7fc3
int64_t function_2d7fc1(void) {
    // 0x2d7fc1
    return function_2d7f76();
}

// Address range: 0x2d7fc6 - 0x2d7fc7
int64_t function_2d7fc6(void) {
    // 0x2d7fc6
    int64_t result; // 0x2d7fc6
    return result;
}

// Address range: 0x2d7fd0 - 0x2d7fd1
int64_t function_2d7fd0(void) {
    // 0x2d7fd0
    int64_t result; // 0x2d7fd0
    return result;
}

// Address range: 0x2d7fd1 - 0x2d7fd4
int64_t function_2d7fd1(void) {
    // 0x2d7fd1
    int64_t result; // 0x2d7fd1
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 - (int32_t)result;
    return result;
}

// Address range: 0x2d7ffb - 0x2d802d
int64_t function_2d7ffb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d7ffb
    int64_t v1; // 0x2d7ffb
    *(char *)a1 = *(char *)(char *)&g6 + (char)(v1 / 256);
    unsigned char v2 = (char)v1; // 0x2d7ffe
    *(char *)0x23a605401470013d = v2;
    unsigned char v3 = (char)(v1 / 256) + v2; // 0x2d800d
    int64_t v4 = v1 & 0xffffff00 | (int64_t)v3; // 0x2d800d
    int64_t v5; // 0x2d7ffb
    int64_t v6 = (int64_t)&v5; // 0x2d800f
    int64_t v7 = v6; // 0x2d8010
    int64_t v8 = v4; // 0x2d8010
    bool v9 = false; // 0x2d8010
    if (v3 < v2) {
        char * v10 = (char *)(a3 + 0x3d0001e8); // 0x2d8012
        *v10 = *v10 ^ (char)a3;
        int32_t v11; // 0x2d7ffb
        int32_t v12 = v11 + (int32_t)v1; // 0x2d8018
        int64_t v13 = v4 - 8; // 0x2d801e
        *(int64_t *)v13 = v4;
        int64_t v14 = v6; // 0x2d801f
        if (v12 >= 0) {
            v14 = function_2d7fc6();
        }
        uint32_t v15 = (int32_t)a4 % 32; // 0x2d8021
        v7 = v14;
        v8 = v13;
        v9 = v12 < v11;
        if (v15 != 0) {
            uint32_t v16 = *(int32_t *)0x6817ccac; // 0x2d8021
            *(int32_t *)0x6817ccac = v16 >> v15;
            v7 = v14;
            v8 = v13;
            v9 = (v16 & 1 << v15 - 1) != 0;
        }
    }
    // 0x2d8024
    __asm_out_133((int16_t)a3, (int32_t)v7);
    *(int64_t *)(v8 - 8) = -0x7bfc7000;
    int64_t result = v7; // 0x2d802a
    if (v9) {
        result = function_2d7fd0();
    }
    // 0x2d802c
    return result;
}

// Address range: 0x2d8035 - 0x2d803f
int64_t function_2d8035(void) {
    // 0x2d8035
    int64_t v1; // 0x2d8035
    int32_t * v2 = (int32_t *)(v1 - 0x3852fb1d); // 0x2d8035
    *v2 = *v2 ^ (int32_t)v1;
    return __asm_sti();
}

// Address range: 0x2d8040 - 0x2d8044
int64_t function_2d8040(int64_t a1) {
    // 0x2d8040
    int64_t result; // 0x2d8040
    return result;
}

// Address range: 0x2d80b7 - 0x2d80bc
int64_t function_2d80b7(void) {
    // 0x2d80b7
    return function_6410508();
}

// Address range: 0x2d8107 - 0x2d810b
int64_t function_2d8107(int64_t a1) {
    // 0x2d8107
    int64_t v1; // 0x2d8107
    *(int32_t *)a1 = 2 * (int32_t)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x2d8149 - 0x2d814a
int64_t function_2d8149(void) {
    // 0x2d8149
    int64_t result; // 0x2d8149
    return result;
}

// Address range: 0x2d817a - 0x2d8189
int64_t function_2d817a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d817a
    int64_t result; // 0x2d817a
    char * v1 = (char *)(result - 0x61e9feec); // 0x2d817a
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x2d818b - 0x2d8245
int64_t function_2d818b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d818b
    int64_t v1; // 0x2d818b
    int64_t v2; // 0x2d818b
    if ((char)v2 == (char)v2) {
        v1 = function_2d8149();
    }
    // 0x2d818e
    bool v3; // 0x2d818b
    int64_t v4 = v3 ? -1 : 1; // 0x2d818b
    int64_t v5 = v4 + a1; // 0x2d818b
    int32_t v6 = v1; // 0x2d818e
    *(int32_t *)v5 = v6;
    int64_t v7 = (int64_t)(*(int32_t *)(v4 + a2) + (int32_t)a4); // 0x2d818f
    int64_t v8 = -25; // bp-8, 0x2d8198
    uint32_t v9 = v6 ^ 238 ^ *(int32_t *)(a3 - 0x4dfb675d); // 0x2d81a6
    if (v9 == 0) {
        // 0x2d81ae
        __asm_out_135(58, 0);
        int32_t * v10 = (int32_t *)(a3 + 98); // 0x2d81b5
        *v10 = *v10 - (int32_t)(int64_t)&v8;
        char * v11 = (char *)(256 * v7 + a3 & 0xff00 | a3 & -0xff01); // 0x2d81be
        *v11 = *v11 ^ 50;
        unknown_ffffffffae35c1d1();
        return function_1140e53();
    }
    int64_t result = v9; // 0x2d81a6
    int32_t v12 = *(int32_t *)0xc3fc673a - 0x3c0398c6; // 0x2d8210
    unsigned char v13 = llvm_ctpop_i8((char)v12); // 0x2d8210
    *(int32_t *)0xc3fc673a = v12;
    if (v13 % 2 != 0) {
        // 0x2d81f8
        return result;
    }
    int64_t v14 = 2 * a3 + 0xe07182 + v7 & 0xffffffff; // 0x2d8191
    int64_t v15 = v7 - 1; // 0x2d8224
    if (v15 != 0 == v9 == -0x1608c7ff) {
        char * v16 = (char *)v14; // 0x2d8238
        *v16 = *v16 + (char)v9;
        return result ^ 0xe100;
    }
    // 0x2d8226
    unknown_68fb5c30(v5 + (v3 ? -4 : 4), v14, 0x3de7618, v15);
    char * v17 = (char *)(v14 + 0x5e2d367e); // 0x2d822c
    *v17 = *v17 + 118;
    return (int64_t)*(int32_t *)v14;
}

// Address range: 0x2d82df - 0x2d8329
int64_t function_2d82df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = a4 - 1; // 0x2d82df
    bool v2; // 0x2d82df
    if (v1 == 0 || v2) {
        int64_t result = unknown_3a41f9e7(); // 0x2d82e1
        char * v3 = (char *)(result + 0x1e8e1d4); // 0x2d82e6
        *v3 = *v3 + (char)(v1 / 256);
        return result;
    }
    // 0x2d831e
    int64_t result2; // 0x2d82df
    return result2;
}

// Address range: 0x2d8370 - 0x2d83d6
int64_t function_2d8370(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = unknown_2df34b76(); // 0x2d8370
    char * v3 = (char *)(v2 + 0x251e800); // 0x2d8375
    *v3 = *v3 + (char)v2;
    int64_t v4; // 0x2d8370
    char * v5 = (char *)(v4 + 0x1c01e800); // 0x2d837b
    *v5 = *v5 + (char)(a4 / 256);
    unknown_c6a770();
    int64_t v6 = a4;
    int64_t v7 = unknown_ffffffffabfec295(); // 0x2d838f
    char v8 = *(char *)&v1 + (char)v1; // 0x2d8394
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x2d8394
    *(char *)v1 = v8;
    while (v9 % 2 == 0) {
        int64_t v10 = 0x10000 * (int32_t)v7 >> 16; // 0x2d8396
        int64_t v11 = v4 + 0xe8f89096 + v6; // 0x2d83bd
        unsigned char v12 = (char)v11; // 0x2d83bf
        unsigned char v13 = v12 + 58; // 0x2d83bf
        if (v12 <= 197 && v13 != 0) {
            int32_t v14 = *(int32_t *)v10; // 0x2d83c3
            int32_t * v15 = (int32_t *)(v10 - 75); // 0x2d83c5
            *v15 = *v15 & (int32_t)a2;
            return (v14 & (int32_t)(v11 & 0xffffff00 | (int64_t)v13)) - (int32_t)v4;
        }
        v6 = v10;
        v7 = unknown_ffffffffabfec295();
        v8 = *(char *)&v1 + (char)v1;
        v9 = llvm_ctpop_i8(v8);
        *(char *)v1 = v8;
    }
    // 0x2d8399
    return __asm_hlt();
}

// Address range: 0x2d83fd - 0x2d83ff
int64_t function_2d83fd(void) {
    // 0x2d83fd
    int64_t result; // 0x2d83fd
    return result;
}

// Address range: 0x2d8445 - 0x2d844a
int64_t function_2d8445(void) {
    // 0x2d8445
    return function_100f4144();
}

// Address range: 0x2d8469 - 0x2d846a
int64_t function_2d8469(void) {
    // 0x2d8469
    int64_t result; // 0x2d8469
    return result;
}

// Address range: 0x2d847c - 0x2d8483
int64_t function_2d847c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d847c
    return function_21586e3();
}

// Address range: 0x2d8496 - 0x2d8499
int64_t function_2d8496(int64_t a1) {
    // 0x2d8496
    int64_t result; // 0x2d8496
    return result;
}

// Address range: 0x2d84b2 - 0x2d84ee
int64_t function_2d84b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = __asm_iretd(a1) & -256 | (int64_t)*(char *)-0x39fcff4cdd5f54f6; // 0x2d84b3
    int64_t v1; // 0x2d84b2
    if (llvm_ctpop_i8(*(char *)(v1 + 0x50013d01)) % 2 == 0) {
        // 0x2d84c8
        __asm_out_135(-120, (int32_t)result);
        char * v2 = (char *)(result + (a5 & 0xff00) & 0xff00 | a5 & -0xff01); // 0x2d84ce
        *v2 = *v2 - (char)(v1 / 256);
        return __asm_int3() ^ 126;
    }
    // 0x2d84d5
    bool v3; // 0x2d84b2
    int64_t v4 = v3 ? -1 : 1; // 0x2d84da
    int32_t * v5 = (int32_t *)result; // 0x2d84dc
    *v5 = *v5 + (int32_t)(v4 + a1);
    int32_t * v6 = (int32_t *)(a2 + 75 + v4); // 0x2d84e3
    *v6 = *v6 + (int32_t)v1;
    return result;
}

// Address range: 0x2d84f5 - 0x2d84f6
int64_t function_2d84f5(int64_t a1) {
    // 0x2d84f5
    int64_t result; // 0x2d84f5
    return result;
}

// Address range: 0x2d8716 - 0x2d8724
int64_t function_2d8716(int64_t a1) {
    // 0x2d8716
    __asm_in(-67);
    *(int32_t *)-0x38cfccdd = *(int32_t *)-0x38cfccdd + (int32_t)a1;
    return function_2d86ee();
}

// Address range: 0x2d8735 - 0x2d8738
int64_t function_2d8735(void) {
    // 0x2d8735
    int64_t result; // 0x2d8735
    return result;
}

// Address range: 0x2d877e - 0x2d877f
int64_t function_2d877e(int64_t a1) {
    // 0x2d877e
    int64_t result; // 0x2d877e
    return result;
}

// Address range: 0x2d87a6 - 0x2d87a7
int64_t function_2d87a6(void) {
    // 0x2d87a6
    int64_t result; // 0x2d87a6
    return result;
}

// Address range: 0x2d87fb - 0x2d87fe
int64_t function_2d87fb(int64_t a1) {
    // 0x2d87fb
    int64_t result; // 0x2d87fb
    result = function_2d87a6();
    // 0x2d87fd
    return result;
}

// Address range: 0x2d8927 - 0x2d8928
int64_t function_2d8927(void) {
    // 0x2d8927
    int64_t result; // 0x2d8927
    return result;
}

// Address range: 0x2d8942 - 0x2d8945
int64_t function_2d8942(int64_t a1) {
    // 0x2d8942
    int64_t result; // 0x2d8942
    return result;
}

// Address range: 0x2d896c - 0x2d8972
int64_t function_2d896c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d896c
    return a1 & 0xffffffff;
}

// Address range: 0x2d897b - 0x2d8980
int64_t function_2d897b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d897b
    int64_t result; // 0x2d897b
    int64_t v1 = result;
    char v2 = a3; // 0x2d897b
    bool v3; // 0x2d897b
    *(char *)v1 = (char)v1 - v2 + (char)v3;
    int64_t v4; // 0x2d897b
    *(char *)a2 = *(char *)&v4 + v2;
    return result;
}

// Address range: 0x2d8980 - 0x2d8997
int64_t function_2d8980(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2d8980
    __asm_in_136(-28);
    int64_t v1 = __asm_int3(); // 0x2d8983
    int64_t v2; // 0x2d8980
    *(int32_t *)(2 * v1 + v2) = 0x3d003a02;
    uint32_t v3 = (int32_t)v1; // 0x2d898b
    int64_t v4; // bp-8, 0x2d8980
    uint32_t v5 = v3 + (int32_t)(int64_t)&v4; // 0x2d898b
    int64_t v6 = a4 - 1; // 0x2d898d
    int64_t result = v5; // 0x2d898d
    if (v6 != 0 == v5 == 0) {
        result = function_2d8927();
    }
    char * v7 = (char *)result; // 0x2d898f
    *v7 = (char)(v5 < v3) + (char)v6 + *v7;
    return result;
}

// Address range: 0x2d89aa - 0x2d89ab
int64_t function_2d89aa(void) {
    // 0x2d89aa
    int64_t result; // 0x2d89aa
    return result;
}

// Address range: 0x2d89c7 - 0x2d89d2
int64_t function_2d89c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d89c7
    unknown_ffffffff94acaacf(a1, a2, a3, a4);
    return function_2d89aa();
}

// Address range: 0x2d89f0 - 0x2d8a6b
int64_t function_2d89f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x2d89f0
    __asm_outsd((int16_t)a3, (int32_t)v2);
    *(char *)a3 = (char)(v2 / 256) + (char)a3;
    int64_t v3 = unknown_fffffffffaaaaafb(); // 0x2d89f5
    int32_t v4 = *(int32_t *)&v1 | (int32_t)v2; // 0x2d89fa
    *(int32_t *)a3 = v4;
    if (v4 >= 0 == (v4 != 0)) {
        // 0x2d8a66
        return v3 & 0xffffffff ^ 0x830e1a1f;
    }
    // 0x2d89fe
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v2;
    return 0xe85fb7ae;
}

// Address range: 0x2d8a79 - 0x2d8acd
int64_t function_2d8a79(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffff89d78483(); // 0x2d8a7d
    char * v2 = (char *)(a1 - 0x344ce804); // 0x2d8a82
    char v3 = *v2; // 0x2d8a82
    char v4 = v1; // 0x2d8a82
    char v5 = v3 + v4; // 0x2d8a82
    *v2 = v5;
    if (((v5 ^ v3) & (v5 ^ v4)) >= 0) {
        // 0x2d8ac4
        return unknown_d8ae4ce();
    }
    // 0x2d8a8a
    int64_t v6; // 0x2d8a79
    int64_t v7 = v6 % 256 | a4; // 0x2d8a79
    int32_t * v8 = (int32_t *)(v1 + 8 * v6); // 0x2d8a8a
    *v8 = *v8 - 1;
    char v9 = *(char *)(v7 + 0x3a80a372); // 0x2d8a8f
    *(char *)-0x3bd08cee = (char)((char)(((int32_t)v6 - (int32_t)a2) / 256) - v9 >= 0);
    __asm_int(118);
    if (v7 == 0) {
        // 0x2d8ab2
        return unknown_ffffffffb38fc6bf();
    }
    // 0x2d8aa8
    return (v1 | v7) & 0xffffffff;
}

// Address range: 0x2d8b3e - 0x2d8b41
int64_t function_2d8b3e(void) {
    // 0x2d8b3e
    int64_t result; // 0x2d8b3e
    return result;
}

// Address range: 0x2d8b55 - 0x2d8b5b
int64_t function_2d8b55(int64_t a1) {
    // 0x2d8b55
    return unknown_52f735b(a1);
}

// Address range: 0x2d8b81 - 0x2d8b8e
int64_t function_2d8b81(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d8b81
    int64_t v1; // 0x2d8b81
    int64_t v2 = v1;
    return v2 & -256 | (int64_t)(*(char *)(a1 - 0x23fec300) | (char)v2);
}

// Address range: 0x2d8bc0 - 0x2d8bc3
int64_t function_2d8bc0(void) {
    // 0x2d8bc0
    int64_t result; // 0x2d8bc0
    return result;
}

// Address range: 0x2d8bd1 - 0x2d8bd4
int64_t function_2d8bd1(void) {
    // 0x2d8bd1
    int64_t result; // 0x2d8bd1
    return result;
}

// Address range: 0x2d8bfc - 0x2d8c01
int64_t function_2d8bfc(int64_t a1) {
    char * v1 = (char *)(a1 + 37); // 0x2d8bfc
    *v1 = *v1 >> 1;
    int64_t result; // 0x2d8bfc
    return result;
}

// Address range: 0x2d8c19 - 0x2d8c1a
int64_t function_2d8c19(void) {
    // 0x2d8c19
    int64_t result; // 0x2d8c19
    return result;
}

// Address range: 0x2d8c41 - 0x2d8c48
int64_t function_2d8c41(void) {
    // 0x2d8c41
    int64_t v1; // 0x2d8c41
    return v1 + 0x880157ef & 0xffffffff;
}

// Address range: 0x2d8c54 - 0x2d8c55
int64_t function_2d8c54(int64_t a1) {
    // 0x2d8c54
    int64_t result; // 0x2d8c54
    return result;
}

// Address range: 0x2d8c5f - 0x2d8cd5
int64_t function_2d8c5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    __asm_out_135(-18, (int32_t)unknown_ffffffff99c45067());
    bool v2; // 0x2d8c5f
    if (!v2) {
        function_2d8c19();
    }
    // 0x2d8c6a
    int64_t v3; // 0x2d8c5f
    uint64_t v4 = (0x100000000 * v3 >> 32) * (0x100000000 * a1 >> 32) / 0x100000000; // 0x2d8c5f
    int64_t v5 = a4 & -0xff01; // 0x2d8c6a
    int64_t v6 = a4 & 0xff00 & 256 * v4 | v5; // 0x2d8c6a
    int64_t v7 = unknown_ffffffffdeb66572(); // 0x2d8c6c
    __asm_int(71);
    int64_t v8 = v7 + 0x177699ce; // 0x2d8c73
    int32_t * v9 = (int32_t *)(v8 & 0xffffffff); // 0x2d8c78
    *v9 = *v9 + (int32_t)v8;
    int32_t * v10 = (int32_t *)((4 * (v8 + v3) & 0x3fffffffc) + v4); // 0x2d8c83
    *v10 = *v10 + (int32_t)v6;
    *(char *)(v6 - 84) = (char)v3;
    int32_t * v11 = (int32_t *)unknown_7194e91(); // 0x2d8c95
    uint32_t v12 = *v11; // 0x2d8c95
    uint32_t v13 = v12 + (int32_t)v1; // 0x2d8c95
    *v11 = v13;
    __asm_outsb((int16_t)v4, *(char *)&v1);
    int64_t v14 = unknown_4833749e(); // 0x2d8c98
    int32_t v15 = *(int32_t *)(v14 - 30); // 0x2d8c9e
    uint32_t v16 = ((int32_t)v5 | (int32_t)&g5) + (int32_t)(v13 < v12) - v15; // 0x2d8c9e
    *(int32_t *)a1 = *(int32_t *)&v1;
    char * v17 = (char *)v4; // 0x2d8cb0
    char v18 = *v17; // 0x2d8cb0
    unsigned char v19 = (char)v16; // 0x2d8cb0
    *v17 = v18 + v19;
    char * v20 = (char *)((v14 & 0xffffffff ^ 0x711501e8) + v4); // 0x2d8cb2
    *v20 = *v20 + (char)(v16 / 256) + (char)(-1 - v18 < v19);
    unknown_ffffffffedff5ebd(a1 + 4, v1 + 4, a5 & 0xffffffff, v16);
    unknown_4e3864ca();
    return __asm_int1();
}

// Address range: 0x2d8cea - 0x2d8ceb
int64_t function_2d8cea(int64_t a1) {
    // 0x2d8cea
    int64_t result; // 0x2d8cea
    return result;
}

// Address range: 0x2d8d0c - 0x2d8d23
int64_t function_2d8d0c(int64_t a1) {
    // 0x2d8d0c
    int64_t v1; // 0x2d8d0c
    *(char *)a1 = (char)v1;
    bool v2; // 0x2d8d0c
    unknown_2bb8d51f((v2 ? -1 : 1) + a1);
    return function_54018e46();
}

// Address range: 0x2d8d29 - 0x2d8d45
int64_t function_2d8d29(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_1033e530(); // 0x2d8d2a
    float80_t v1; // 0x2d8d29
    *(int16_t *)(a3 + 0x2f27a53) = (int16_t)v1;
    return result;
}

// Address range: 0x2d8d45 - 0x2d8e7a
int64_t function_2d8d45(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    char * v2 = (char *)(a2 - 98); // 0x2d8d45
    unsigned char v3 = *v2; // 0x2d8d45
    int64_t v4; // 0x2d8d45
    unsigned char v5 = v3 + (char)v4; // 0x2d8d45
    *v2 = v5;
    int64_t result = unknown_ffffffff9b32754e(); // 0x2d8d48
    if (v5 < v3 || v5 == 0) {
        // 0x2d8d4f
        __asm_out_134(-58, (char)result);
        return result;
    }
    int32_t * v6 = (int32_t *)(result + 74); // 0x2d8d58
    uint32_t v7 = (int32_t)a4; // 0x2d8d58
    int32_t v8 = *v6 + v7; // 0x2d8d58
    *v6 = v8;
    int32_t v9 = result; // 0x2d8d5b
    __asm_out_133((int16_t)a3, v9);
    int32_t v10 = *(int32_t *)&v1; // 0x2d8d61
    __asm_outsd(-0x22c1, v10);
    bool v11; // 0x2d8d45
    if (v8 == 0) {
        // 0x2d8d8e
        *(int32_t *)a1 = v10;
        *(char *)((v11 ? -4 : 4) + a1) = (char)result;
        return result;
    }
    // 0x2d8d64
    if (llvm_ctpop_i8((char)v8) % 2 != 0) {
        int64_t v12 = unknown_ffffffffe868b46c(); // 0x2d8d66
        int64_t result2 = (v12 + 255) % 256 | v12 & -256; // 0x2d8d72
        char * v13 = (char *)(result2 + 1); // 0x2d8d76
        *v13 = -*v13;
        return result2;
    }
    char * v14 = (char *)(v4 + a4); // 0x2d8db7
    uint64_t v15 = a4 / 256; // 0x2d8db7
    char v16 = v15; // 0x2d8db7
    char v17 = *v14 & v16; // 0x2d8db7
    *v14 = v17;
    if (v17 >= 0) {
        char v18 = *(char *)0xd585dd3f | (char)result; // 0x2d8dbe
        *(char *)0xd585dd3f = v18;
        int64_t v19 = unknown_3ac5f6c6(); // 0x2d8dc0
        if (v18 == 0) {
            // 0x2d8e03
            return v4 & 0xffffff00;
        }
        uint64_t v20 = v19 + v15; // 0x2d8dcc
        int64_t v21 = v19 & -256; // 0x2d8dcc
        int32_t * v22 = (int32_t *)((v20 % 256 | v21) - 3); // 0x2d8dce
        uint32_t v23 = *v22; // 0x2d8dce
        uint32_t v24 = v23 + (int32_t)v4; // 0x2d8dce
        *v22 = v24;
        int32_t * v25 = (int32_t *)(((v20 + 209 + (int64_t)(v24 < v23)) % 256 | v21) + 0x736b103a); // 0x2d8dd8
        *v25 = *v25 + v7;
        char * v26 = (char *)(8 * a1 + 0xb3a483e7); // 0x2d8ddf
        *v26 = *v26 + v16;
        return __asm_iretd(a1);
    }
    int32_t * v27 = (int32_t *)(v4 + 0xc0a2722); // 0x2d8e07
    *v27 = *v27 + (int32_t)v4;
    uint32_t v28 = v7 % 32; // 0x2d8e13
    if (v28 != 0) {
        int32_t * v29 = (int32_t *)result; // 0x2d8e13
        *v29 = *v29 >> v28;
    }
    int64_t v30 = (v11 ? -1 : 1) + a1; // 0x2d8e0d
    int64_t v31 = result & -256; // 0x2d8e17
    int64_t result3 = v31 | v15 % 256; // 0x2d8e17
    int32_t * v32 = (int32_t *)result3; // 0x2d8e19
    uint32_t v33 = *v32; // 0x2d8e19
    *v32 = v33 / 0x400000 | 1024 * v33;
    if (*(int32_t *)v30 != v9) {
        // 0x2d8e1f
        return result3;
    }
    unsigned char v34 = (char)a4 % 32; // 0x2d8e54
    if (v34 != 0) {
        char * v35 = (char *)(result3 + 77); // 0x2d8e54
        unsigned char v36 = *v35; // 0x2d8e54
        *v35 = v36 >> v34 | (char)((v33 & 0x200000) != 0) << 8 - v34 | (char)((int16_t)v36 << (int16_t)(9 - v34));
    }
    int64_t v37 = v11 ? -4 : 4; // 0x2d8e15
    int64_t v38 = v30 + v37; // 0x2d8e15
    int32_t v39 = v31 | (int64_t)(*(char *)result3 + v16); // 0x2d8e67
    *(int32_t *)v38 = v39;
    *(char *)(v38 + v37) = __asm_insb(0x763f);
    *(int32_t *)-0x29fe17515a494e36 = v39;
    return function_3a6c25df();
}

// Address range: 0x2d8e7a - 0x2d8e7d
int64_t function_2d8e7a(void) {
    // 0x2d8e7a
    int64_t result; // 0x2d8e7a
    return result;
}

// Address range: 0x2d8ed6 - 0x2d8ef8
int64_t function_2d8ed6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2d8ed6
    int64_t v1; // 0x2d8ed6
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 - (int32_t)a4;
    int64_t v3 = unknown_2102d8de(); // 0x2d8ed8
    int32_t * v4 = (int32_t *)(v3 - 0x17fed1f1); // 0x2d8ede
    *v4 = -1 - *v4;
    int32_t * v5 = (int32_t *)(a4 + 0x3a90bc20); // 0x2d8ee4
    *v5 = *v5 + (int32_t)a2;
    return v3 & 0xffffffff ^ 0x1e879b1;
}

// Address range: 0x2d8f02 - 0x2d8f05
int64_t function_2d8f02(void) {
    // 0x2d8f02
    int64_t result; // 0x2d8f02
    return result;
}

// Address range: 0x34bbe6 - 0x34bbe9
int64_t function_34bbe6(int64_t a1) {
    // 0x34bbe6
    int64_t result; // 0x34bbe6
    return result;
}

// Address range: 0x34bc58 - 0x34bc66
int64_t function_34bc58(int64_t a1) {
    // 0x34bc58
    int64_t v1; // 0x34bc58
    int64_t v2 = v1;
    bool v3; // 0x34bc58
    int64_t result = (v2 - (v3 ? 14 : 13)) % 256 | v2 & -256; // 0x34bc58
    *(int32_t *)0x3601f0ceec48eff6 = (int32_t)result;
    return result;
}

// Address range: 0x34bd34 - 0x34bd3a
int64_t function_34bd34(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34bd34
    int64_t result; // 0x34bd34
    char * v1 = (char *)(2 * result + a2); // 0x34bd34
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x34bd57 - 0x34bd61
int64_t function_34bd57(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x34bd57
    *(char *)(a1 + 0x13d0099) = (char)(a4 / 256);
    int64_t result; // 0x34bd57
    return result;
}

// Address range: 0x34bd66 - 0x34bd89
int64_t function_34bd66(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34bd66
    int64_t v1; // 0x34bd66
    int32_t * v2 = (int32_t *)(v1 - 0x6cd0b1f2); // 0x34bd66
    *v2 = *v2 | 15;
    int64_t result = unknown_ffffffffaa029873(); // 0x34bd6d
    int64_t v3; // 0x34bd66
    *(int32_t *)a3 = *(int32_t *)&v3 + (int32_t)v1;
    return result;
}

// Address range: 0x34bdf2 - 0x34bdf6
int64_t function_34bdf2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34bdf2
    int64_t result; // 0x34bdf2
    return result;
}

// Address range: 0x34beba - 0x34becc
int64_t function_34beba(void) {
    // 0x34beba
    int64_t v1; // 0x34beba
    int32_t * v2 = (int32_t *)(v1 + 0x5ec4cb3); // 0x34beba
    bool v3; // 0x34beba
    *v2 = *v2 - (v3 ? 98 : 97);
    unknown_ffffffffb9b3e2c9();
    return function_34bf14(v1, v1, v1, v1, (int64_t)&g7);
}

// Address range: 0x34bf04 - 0x34bf14
int64_t function_34bf04(void) {
    int64_t result = unknown_ffffffff8a0cc60f(0xa24d0dab); // 0x34bf09
    int64_t v1; // 0x34bf04
    char * v2 = (char *)(v1 - 0x7c07c58c); // 0x34bf0e
    *v2 = *v2 + (char)result;
    return result;
}

// Address range: 0x34bf14 - 0x34bf6d
int64_t function_34bf14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    char * v2 = (char *)(a4 - 0x7eefe18); // 0x34bf14
    *v2 = *v2 + 1;
    uint32_t v3 = *(int32_t *)(a4 + 36) + (int32_t)a2; // 0x34bf20
    int64_t v4; // 0x34bf14
    uint32_t v5 = *(int32_t *)&v1 & (int32_t)v4 + 0xb66fe18; // 0x34bf2b
    *(char *)0xfbb8bdd3 = *(char *)0xfbb8bdd3 + (char)(v5 / 256);
    int64_t v6 = v5; // 0x34bf2f
    char * v7 = (char *)(v6 + 0x2d964126); // 0x34bf30
    unsigned char v8 = *v7; // 0x34bf30
    *v7 = v8 / 128 | 2 * v8;
    *(char *)0x33ae01e80147eb9c = (char)unknown_3ad8153c(v6, v3, 0xfbb8bdd3);
    char * v9 = (char *)(v6 - 16); // 0x34bf4e
    *v9 = *v9 + (char)(v1 / 256);
    char v10 = *(char *)(int64_t)v3; // 0x34bf53
    __asm_outsb(256 * (int16_t)(*(char *)0xfbb8bdd3 & -67) | 211, v10);
    unknown_3906e55a();
    return unknown_4baa6669();
}

// Address range: 0x34bf6e - 0x34bf74
int64_t function_34bf6e(void) {
    // 0x34bf6e
    return function_21d5ac9();
}

// Address range: 0x34bfb0 - 0x34bfb2
int64_t function_34bfb0(void) {
    // 0x34bfb0
    int64_t result; // 0x34bfb0
    return result;
}

// Address range: 0x34c1e6 - 0x34c1e7
int64_t function_34c1e6(void) {
    // 0x34c1e6
    int64_t result; // 0x34c1e6
    return result;
}

// Address range: 0x34c1e7 - 0x34c20c
int64_t function_34c1e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34c1e7
    unknown_ffffffff918883ed();
    int64_t v1; // 0x34c1e7
    *(char *)a2 = 2 * (char)v1;
    int32_t * v2 = (int32_t *)(a3 - 0x6e50ff6f + v1); // 0x34c1f7
    *v2 = *v2 + (int32_t)v1;
    uint64_t v3 = (int64_t)(*(int32_t *)-0x176dfaf254554166 / 256) + a4; // 0x34c202
    int64_t v4 = a4 & 0xffffff00; // 0x34c202
    int64_t v5 = v3 % 256 | v4; // 0x34c202
    int32_t * v6 = (int32_t *)(v5 - 10); // 0x34c204
    *v6 = *v6 + (int32_t)v5;
    return (v3 + 21) % 256 | v4;
}

// Address range: 0x34c20c - 0x34c20d
int64_t function_34c20c(void) {
    // 0x34c20c
    int64_t result; // 0x34c20c
    return result;
}

// Address range: 0x34c21e - 0x34c224
int64_t function_34c21e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34c21e
    return function_34c20c();
}

// Address range: 0x34c224 - 0x34c25f
int64_t function_34c224(uint64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 / 0x20000000 % 8 | 16 * a1 & 0xfffffff0;
    int64_t v2; // 0x34c224
    uint64_t v3 = v2;
    int64_t v4; // 0x34c224
    uint64_t v5 = v4;
    int64_t v6 = v1; // 0x34c22b
    int64_t v7 = v3 & -256; // 0x34c22e
    *(int32_t *)0x1036aa3c = *(int32_t *)0x1036aa3c >> 1;
    int64_t v8 = unknown_ffffffffd0900641(); // 0x34c23b
    uint64_t v9 = (v8 + 58) % 256; // 0x34c240
    int64_t v10 = v8 & 0xffffff00; // 0x34c240
    uint64_t v11 = v5 / 256; // 0x34c242
    int64_t v12 = 2 * v11;
    int64_t v13 = 512 * v11 & 0xfe00 | v5 & -0xff01; // 0x34c242
    int32_t * v14 = (int32_t *)v6; // 0x34c246
    uint32_t v15 = *v14; // 0x34c246
    int32_t v16 = (char)v12 < (char)v11 ? -0x6970fe17 : -0x6970fe18; // 0x34c246
    *v14 = v15 - v16;
    __asm_out_135(-27, (int32_t)(v9 | v10));
    while (v15 <= v16) {
        // 0x34c229
        v3 = v7;
        v5 = v13;
        v6 = v1 | 8 * (int64_t)((char)v12 < (char)v11 | v15 < v16);
        v7 = v3 & -256;
        *(int32_t *)0x1036aa3c = *(int32_t *)0x1036aa3c >> 1;
        v8 = unknown_ffffffffd0900641();
        v9 = (v8 + 58) % 256;
        v10 = v8 & 0xffffff00;
        v11 = v5 / 256;
        v12 = 2 * v11;
        v13 = 512 * v11 & 0xfe00 | v5 & -0xff01;
        v14 = (int32_t *)v6;
        v15 = *v14;
        v16 = (char)v12 < (char)v11 ? -0x6970fe17 : -0x6970fe18;
        *v14 = v15 - v16;
        __asm_out_135(-27, (int32_t)(v9 | v10));
    }
    unsigned char v17 = *(char *)(v9 | v7); // 0x34c24e
    char v18 = *(char *)0x6ff2f959; // 0x34c252
    *(char *)0x6ff2f959 = v18 + (char)(v3 / 256);
    return function_34c2c7(v10 | (int64_t)v17, a2, v6, v13 & -512 | (v5 - v12) % 256);
}

// Address range: 0x34c282 - 0x34c288
int64_t function_34c282(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34c282
    int64_t result; // 0x34c282
    *(int32_t *)a1 = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0x34c2c7 - 0x34c2e8
int64_t function_34c2c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34c2c7
    int64_t v1; // 0x34c2c7
    int32_t * v2 = (int32_t *)(v1 + 0x8ac7a5e); // 0x34c2ce
    *v2 = *v2 + (int32_t)v1;
    int32_t * v3 = (int32_t *)(a4 - 59); // 0x34c2d9
    *v3 = *v3 + (int32_t)a3;
    return unknown_ffffffffbe41aae9();
}

// Address range: 0x34c2eb - 0x34c2ed
int64_t function_34c2eb(void) {
    // 0x34c2eb
    int64_t v1; // 0x34c2eb
    return function_34c2f6(v1, v1, v1, v1);
}

// Address range: 0x34c2ed - 0x34c2f6
int64_t function_34c2ed(int64_t a1, int64_t a2) {
    // 0x34c2ed
    return unknown_ffffffffb48a82f4(a1, a2);
}

// Address range: 0x34c2f6 - 0x34c314
int64_t function_34c2f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x5ffe1720); // 0x34c2f6
    *v1 = *v1 + (int32_t)a4;
    unknown_3843380a();
    char * v2 = (char *)(a1 + 117); // 0x34c309
    int64_t v3; // 0x34c2f6
    *v2 = *v2 + (char)v3;
    return unknown_726db615();
}

// Address range: 0x34c377 - 0x34c3d2
int64_t function_34c377(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_ffffffff8f2dfc7f(); // 0x34c379
    int64_t v2 = v1 & 0xffffffff; // 0x34c37f
    unknown_14295c8e();
    int64_t v3 = __asm_int3(); // 0x34c393
    int32_t * v4 = (int32_t *)(v3 - 0x17e5f100); // 0x34c394
    *v4 = *v4 + 0x28312f01;
    char * v5 = (char *)(a1 + 40 + 8 * v3); // 0x34c39e
    char v6 = v1; // 0x34c39e
    *v5 = *v5 + v6;
    char * v7 = (char *)(v3 - 0x7b9557b); // 0x34c3a2
    *v7 = *v7 + v6;
    int64_t v8 = unknown_23909bae(); // 0x34c3a8
    int32_t * v9 = (int32_t *)(v2 - 0x6e706bae); // 0x34c3ad
    *v9 = *v9 + (int32_t)a4;
    __asm_out_133((int16_t)v1, (int32_t)v8);
    int64_t v10 = unknown_4736acb6(); // 0x34c3b5
    int64_t v11; // 0x34c377
    char * v12 = (char *)(8 * v11 - 0x7cd5c217 + v2); // 0x34c3ba
    unsigned char v13 = *v12; // 0x34c3ba
    unsigned char v14 = v13 + v6; // 0x34c3ba
    *v12 = v14;
    int64_t v15 = ((v10 - (v14 < v13 ? 72 : 71)) % 256 | v10 & 0xffffff00) + v11; // 0x34c3c3
    int32_t * v16 = (int32_t *)((v15 & 0xffffffff) + 0x5284ce4d); // 0x34c3c5
    *v16 = *v16 + (int32_t)v11;
    return v15 + 0x323a07fc & 0xffffffff;
}

// Address range: 0x34c417 - 0x34c41f
int64_t function_34c417(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34c417
    int64_t result; // 0x34c417
    int64_t v1 = result;
    *(char *)v1 = (char)(v1 & a1);
    return result;
}

// Address range: 0x34c42a - 0x34c42b
int64_t function_34c42a(void) {
    // 0x34c42a
    int64_t result; // 0x34c42a
    return result;
}

// Address range: 0x34c48d - 0x34c48e
int64_t function_34c48d(void) {
    // 0x34c48d
    int64_t result; // 0x34c48d
    return result;
}

// Address range: 0x34c4c9 - 0x34c4d3
int64_t function_34c4c9(void) {
    // 0x34c4c9
    int64_t result; // 0x34c4c9
    int32_t * v1 = (int32_t *)(8 * result + result); // 0x34c4cf
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x34c4f7 - 0x34c4f9
int64_t function_34c4f7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34c4f7
    int64_t result; // 0x34c4f7
    return result;
}

// Address range: 0x34c535 - 0x34c53e
int64_t function_34c535(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34c535
    int64_t result; // 0x34c535
    return result;
}

// Address range: 0x34c540 - 0x34c5e9
int64_t function_34c540(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t result; // 0x34c540
    *(char *)0x21cc65f = (char)(result / 256);
    bool v2; // 0x34c540
    if (a4 != 1 == v2) {
        // 0x34c5a9
        return result;
    }
    // 0x34c5b6
    if (*(char *)(result + 0x5f58de2d) > (char)a3) {
        int32_t * v3 = (int32_t *)(a3 - 119); // 0x34c5e0
        *v3 = *v3 + (int32_t)result;
        *(char *)v1 = *(char *)&v1 ^ (char)result;
        return result;
    }
    uint64_t v4 = unknown_29247cc9(); // 0x34c5c3
    char * v5 = (char *)(v4 + 0x6447dc0a); // 0x34c5c8
    *v5 = *v5 + (char)(v4 / 256);
    char * v6 = (char *)v4; // 0x34c5ce
    *v6 = *v6 - (char)v4;
    return __asm_emms();
}

// Address range: 0x34c5f0 - 0x34c5fc
int64_t function_34c5f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34c5f0
    return unknown_1e95cef6(a1, a2, a3);
}

// Address range: 0x34c63b - 0x34c63c
int64_t function_34c63b(void) {
    // 0x34c63b
    int64_t result; // 0x34c63b
    return result;
}

// Address range: 0x34c649 - 0x34c67a
int64_t function_34c649(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34c649
    int64_t v1; // 0x34c649
    int64_t v2 = v1;
    *(char *)-0x27c0900401e8fe18 = (char)v1;
    unsigned char v3 = *(char *)((v2 + a4) % 256 + v2); // 0x34c655
    float80_t v4; // 0x34c649
    *(float32_t *)-0x5e84d621 = (float32_t)v4;
    uint32_t v5 = (int32_t)v1 % 32; // 0x34c664
    if (v5 == 0) {
        if ((char)a2 < 250) {
            function_34c63b();
            goto lab_0x34c668;
        } else {
            goto lab_0x34c668;
        }
    } else {
        if ((0x80000000 >> v5 - 1 & (int32_t)(a4 & 0xffffff00 | (int64_t)v3)) == 0) {
            goto lab_0x34c668;
        } else {
            function_34c63b();
            goto lab_0x34c668;
        }
    }
  lab_0x34c668:;
    int64_t v6 = unknown_ffffffffbe91406e(); // 0x34c668
    char v7 = __asm_in(-41); // 0x34c66d
    int32_t * v8 = (int32_t *)((v1 & 0xffffffff) - 14); // 0x34c676
    *v8 = *v8 + (int32_t)v1;
    return v6 & -256 | (int64_t)v7;
}

// Address range: 0x34c67f - 0x34c6ba
int64_t function_34c67f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x34c67f
    bool v3; // 0x34c67f
    if (v3 || v3) {
        // 0x34c6a5
        *(char *)a4 = 2 * (char)a4;
        int32_t v4 = 2 * (int32_t)v2; // 0x34c6a7
        int32_t v5 = v4 ^ 124;
        __asm_out_135(96, v5);
        return v5 + 8 & 254 | v4 & -256;
    }
    int32_t * v6 = (int32_t *)(v2 - 0x17c6850a); // 0x34c681
    *v6 = *v6 + (int32_t)a2;
    int64_t v7 = 2 * v2; // 0x34c687
    *(int32_t *)-0x179d2470 = *(int32_t *)-0x179d2470 + (int32_t)a1;
    int32_t * v8 = (int32_t *)(v1 - 43); // 0x34c68f
    uint32_t v9 = *v8; // 0x34c68f
    uint32_t v10 = v9 + (int32_t)v1; // 0x34c68f
    *v8 = v10;
    char * v11 = (char *)(v2 + 0x1e884f0 + v1); // 0x34c692
    *v11 = *v11 + (char)(v2 / 256) + (char)(v10 < v9);
    char v12 = v7; // 0x34c699
    __asm_out_134(9, v12);
    *(char *)v1 = *(char *)&v1 + v12;
    return v7 & 0xffffffff;
}

// Address range: 0x34c6bd - 0x34c6bf
int64_t function_34c6bd(void) {
    // 0x34c6bd
    int64_t result; // 0x34c6bd
    return result;
}

// Address range: 0x34c6bf - 0x34c6c9
int64_t function_34c6bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34c6bf
    int64_t v1; // 0x34c6bf
    int64_t result = v1;
    bool v2; // 0x34c6bf
    if (a4 == 1 || v2) {
        // 0x34c6c1
        *(int32_t *)result = 2 * (int32_t)result;
        return function_1f6a180b();
    }
    // 0x34c6fe
    return result;
}

// Address range: 0x34c734 - 0x34c737
int64_t function_34c734(int64_t a1) {
    // 0x34c734
    int64_t result; // 0x34c734
    return result;
}

// Address range: 0x34c73d - 0x34c73f
int64_t function_34c73d(void) {
    // 0x34c73d
    int64_t result; // 0x34c73d
    return result;
}

// Address range: 0x34c76a - 0x34c775
int64_t function_34c76a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x34c76a
    int64_t result; // 0x34c76a
    int32_t * v1 = (int32_t *)((a4 - 256 * result & 0xff00 | a4 & -0xff01) + 34); // 0x34c76f
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x34c838 - 0x34c84e
int64_t function_34c838(int64_t a1, int64_t a2, int64_t a3) {
    // 0x34c838
    int64_t v1; // 0x34c838
    uint64_t v2 = v1;
    unknown_13db1b3e();
    *(char *)v2 = (char)(v2 / 256) + (char)v2;
    int64_t v3; // 0x34c838
    *(char *)v3 = *(char *)&v3 | (char)a3;
    __asm_wait(a1, a2);
    unknown_2b28a94b();
    bool v4; // 0x34c838
    int64_t v5 = v4 ? -4 : 4; // 0x34c84a
    return function_34c8a0(v5 + a1, v5 + a2, a3, v1);
}

// Address range: 0x34c862 - 0x34c8a0
int64_t function_34c862(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t result = unknown_ffffffff81d1cd6b(); // 0x34c865
    int64_t v1; // 0x34c862
    uint64_t v2 = v1 / 256; // 0x34c86a
    int64_t v3 = 0x100000000 * a1 >> 32; // 0x34c86e
    int64_t v4 = 0x1e8fa1d * v3; // 0x34c86e
    if (v4 != 0x1e8fa1d00000000 * v3 >> 32 || ((int32_t)v1 & -256 || 154) + (int32_t)(512 * v2 & 0xfe00 || v1 & 0xffff00ff) == (int32_t)(2 * (char)v2 < (char)v2)) {
        int32_t v5 = *(int32_t *)result; // 0x34c878
        return v4 + 113 + 8 * (int64_t)(v5 ^ (int32_t)a4) & 0xffffffff;
    }
    char * v6 = (char *)((v4 & 0xffffffff) - 0x57f5772b); // 0x34c895
    *v6 = *v6 + (char)(result / 256);
    return result;
}

// Address range: 0x34c8a0 - 0x34c8a9
int64_t function_34c8a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34c8a0
    int64_t v1; // 0x34c8a0
    *(char *)a1 = (char)v1;
    bool v2; // 0x34c8a0
    return 2 * v1 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x34c901 - 0x34c904
int64_t function_34c901(void) {
    // 0x34c901
    int64_t v1; // 0x34c901
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x34c908 - 0x34c90b
int64_t function_34c908(int64_t a1) {
    // 0x34c908
    int64_t result; // 0x34c908
    return result;
}

// Address range: 0x34c97f - 0x34c990
int64_t function_34c97f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34c97f
    bool v1; // 0x34c97f
    unknown_ffffffffd8daab86((v1 ? -4 : 4) + a1);
    return function_4336b260();
}

// Address range: 0x34c9a4 - 0x34c9a5
int64_t function_34c9a4(void) {
    // 0x34c9a4
    int64_t result; // 0x34c9a4
    return result;
}

// Address range: 0x34c9ae - 0x34c9af
int64_t function_34c9ae(void) {
    // 0x34c9ae
    int64_t result; // 0x34c9ae
    return result;
}

// Address range: 0x34c9ba - 0x34c9c5
int64_t function_34c9ba(void) {
    // 0x34c9ba
    int64_t result; // 0x34c9ba
    return result;
}

// Address range: 0x34c9d4 - 0x34c9de
int64_t function_34c9d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x34c9d4
    bool v1; // 0x34c9d4
    if (!v1) {
        function_34c9ae();
    }
    // 0x34c9d6
    return function_24b9cbc6();
}

// Address range: 0x34c9f5 - 0x34ca6e
int64_t function_34c9f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a4 + 0x2f3201e8); // 0x34c9f5
    int64_t v2; // 0x34c9f5
    char v3 = v2; // 0x34c9f5
    bool v4; // 0x34c9f5
    *v1 = *v1 + v3 + (char)v4;
    int64_t v5 = unknown_ffffffffbbbf5904(); // 0x34c9fb
    *(int32_t *)a1 = (int32_t)v5;
    int64_t v6 = v5; // 0x34ca03
    if ((char)v5 + v3 >= 0) {
        v6 = function_34c9a4();
    }
    int64_t v7 = v4 ? -4 : 4; // 0x34ca00
    int64_t v8 = v7 + a1; // 0x34ca00
    int64_t v9 = unknown_ffffffff81b4af0e(); // 0x34ca08
    int32_t * v10 = (int32_t *)(v8 + 0x5aff0890); // 0x34ca0d
    *v10 = *v10 + (int32_t)a2;
    int64_t v11 = unknown_4c7711d(); // 0x34ca17
    if ((v9 & 0x4100) == 0) {
        char * v12 = (char *)(v11 + 0x4f757c09); // 0x34ca20
        *v12 = *v12 + (char)a4;
        return unknown_ffffffff8455dd2c();
    }
    int64_t v13 = __asm_wait(v8, a2); // 0x34ca47
    int32_t * v14 = (int32_t *)(a4 + 0x6e0620f0); // 0x34ca52
    uint32_t v15 = *v14; // 0x34ca52
    uint32_t v16 = v15 + (*(int32_t *)(v6 - 8) | (int32_t)a3); // 0x34ca52
    *v14 = v16;
    unsigned char v17 = (char)v13; // 0x34ca58
    bool v18 = v16 < v15 ? v17 - 60 + (char)(v16 < v15) <= v17 : v17 > 59; // 0x34ca58
    __asm_wait(v8 + v7, v7 + a2 & 0xffffffff);
    int64_t v19 = __asm_hlt(); // 0x34ca65
    uint32_t v20 = (int32_t)v19; // 0x34ca66
    uint32_t v21 = *(int32_t *)v19 + v20; // 0x34ca66
    uint32_t v22 = v21 + (int32_t)v18; // 0x34ca66
    bool v23 = v18 ? v22 <= v20 : v21 < v20; // 0x34ca66
    return ((int64_t)v22 + 87 + (v23 ? 24 : 25)) % 256 | (int64_t)(v22 & -256);
}

// Address range: 0x34cad1 - 0x34cad2
int64_t function_34cad1(void) {
    // 0x34cad1
    int64_t result; // 0x34cad1
    return result;
}

// Address range: 0x34cb00 - 0x34cb01
int64_t function_34cb00(void) {
    // 0x34cb00
    int64_t result; // 0x34cb00
    return result;
}

// Address range: 0x34cb19 - 0x34cb1a
int64_t function_34cb19(void) {
    // 0x34cb19
    int64_t result; // 0x34cb19
    return result;
}

// Address range: 0x34cb1e - 0x34cbe2
int64_t function_34cb1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7;
    int64_t v2; // 0x34cb1e
    int32_t * v3 = (int32_t *)(a2 + 0x18829b3f + 8 * v2); // 0x34cb1e
    *v3 = *v3 + (int32_t)v2;
    int64_t v4; // 0x34cb1e
    if (a4 == 1) {
        v4 = function_34cb00();
    } else {
        // 0x34cb28
        v4 = function_34cb19();
    }
    int64_t v5 = (int64_t)&v1; // 0x34cb25
    char * v6 = (char *)(v2 + 0xa87f800); // 0x34cb2c
    *v6 = 2 * *v6;
    char v7 = *(char *)-0x45f354c7 + (char)(v2 / 256); // 0x34cb32
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x34cb32
    *(char *)-0x45f354c7 = v7;
    if (v8 % 2 != 0) {
        unsigned char v9 = *(char *)-0x17fe17893cfa7d5e; // 0x34cb9a
        int32_t v10 = (int32_t)(v4 & 0xffffff00 | (int64_t)v9) + 0x4813e308; // 0x34cba3
        unsigned char v11 = llvm_ctpop_i8((char)v10); // 0x34cba3
        int64_t result = (int64_t)(v10 & -256) | (int64_t)*(char *)0x2ca66ca801e8724a; // 0x34cba8
        if (v11 % 2 == 0) {
            // 0x34cc2e
            return result;
        }
        int32_t * v12 = (int32_t *)(a3 + 0x20a52f7c); // 0x34cbb5
        *v12 = *v12 + (int32_t)v5;
        return result;
    }
    if (a4 != 2) {
        function_34cad1();
    }
    uint32_t v13 = __asm_in_137((int16_t)a3); // 0x34cb42
    bool v14; // 0x34cb1e
    int64_t v15 = (v14 ? -4 : 4) + v5; // 0x34cb43
    *(char *)a5 = (char)a5;
    if (a4 == 2) {
        // 0x34cbd1
        *(int32_t *)0x1036b42f = *(int32_t *)0x1036b42f + (int32_t)a6;
        char * v16 = (char *)(v15 + 0x2c15befb); // 0x34cbda
        *v16 = *v16 | (char)v13 - 16 + (char)(v13 < 0x200f2f01);
        return v13 & -256 | 172;
    }
    int64_t v17 = unknown_ffffffff9892655e(v15); // 0x34cb58
    __asm_out_134(-28, (char)v17);
    *(int32_t *)0x68bf01e801e892b9 = (int32_t)v17;
    return function_ffffffffdb3f8a12();
}
