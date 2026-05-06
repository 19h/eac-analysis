/*
 * Targeted RetDec C for native executable gap queue batch 978.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x365ab6-0x365cb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x365cb6-0x365eb6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x365eb6-0x3660b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3660b6-0x3662b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3662b6-0x3664b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3664b6-0x3666b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3666b6-0x3668b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3668b6-0x366ab6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3afa15-0x3afc15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3afc15-0x3afe15 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3afe15-0x3b0015 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b0015-0x3b0215 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b0215-0x3b0415 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b0415-0x3b0615 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b0615-0x3b0815 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b0815-0x3b0a15 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_365ab6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_365b51(int64_t a1, int64_t a2);
int64_t function_365c63(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_365da1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_365ef7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_366094(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3661c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_366328(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_36649d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_366629(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36679b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_366909(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3afa01();
int64_t function_3afa15(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3afa1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3afb23(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3afb33(int64_t a1);
int64_t function_3afb45(int64_t a1);
int64_t function_3afb4b(void);
int64_t function_3afb4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3afbaa(void);
int64_t function_3afbd6(void);
int64_t function_3afbf7(void);
int64_t function_3afc3e(void);
int64_t function_3afc56(void);
int64_t function_3afc94(void);
int64_t function_3afc95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3afd82(void);
int64_t function_3afd93(void);
int64_t function_3afd9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3afe0f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3afe41(int64_t a1);
int64_t function_3afe6b(void);
int64_t function_3afe78(void);
int64_t function_3afe89(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3afeb9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3afef3(int64_t a1, int64_t a2);
int64_t function_3aff27(void);
int64_t function_3aff3d(void);
int64_t function_3aff52(void);
int64_t function_3aff5b(int64_t a1, int64_t a2);
int64_t function_3affbb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3afff5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b001c(void);
int64_t function_3b0036(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b00a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b00d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b0132(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b015c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b0195(void);
int64_t function_3b01b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b020f(void);
int64_t function_3b0273(void);
int64_t function_3b028d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b02b6(void);
int64_t function_3b02ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b02d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b031f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b0389(void);
int64_t function_3b03eb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3b03fa(void);
int64_t function_3b040a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b0465(int64_t a1, int64_t a2);
int64_t function_3b046f(void);
int64_t function_3b0491(void);
int64_t function_3b049a(int64_t a1);
int64_t function_3b0556(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b056a(void);
int64_t function_3b0570(void);
int64_t function_3b0593(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b05a2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b05b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b05e9(int64_t a1);
int64_t function_3b0688(void);
int64_t function_3b06ab(void);
int64_t function_3b06b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3b084b(void);
int64_t function_3b0858(void);
int64_t function_3b0861(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b08b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b090b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b0965(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3b09f5(void);
int64_t function_3b09ff(void);
int64_t function_3df18c14();
int64_t function_8bbd9e();
int64_t function_a3f812();
int64_t function_c6d58();
int64_t function_e390bcb();
int64_t function_ffffffff9a186571();
int64_t function_ffffffffa7d90a04();
int64_t function_ffffffffba9d9cf8();
int64_t function_ffffffffc67506d1();
int64_t unknown_227f0a2a();
int64_t unknown_28cf6e1d();
int64_t unknown_2ab727c2();
int64_t unknown_3ad484b0();
int64_t unknown_3ad75b83();
int64_t unknown_3b111272();
int64_t unknown_3d3d6028();
int64_t unknown_4211622c();
int64_t unknown_46035590();
int64_t unknown_48b0ee27();
int64_t unknown_50337139();
int64_t unknown_ffffffff89718316();
int64_t unknown_ffffffff8db693ce();
int64_t unknown_ffffffff90b2befc();
int64_t unknown_ffffffff921fb65b();
int64_t unknown_ffffffffa558a44a();
int64_t unknown_ffffffffabc48d37();
int64_t unknown_ffffffffbc7b99fb();
int64_t unknown_ffffffffc078744a();
int64_t unknown_ffffffffd356ca28();
int64_t unknown_ffffffffd8405e19();
int64_t unknown_ffffffffd92b97fd();
int64_t unknown_ffffffffe4512ebf();

// Address range: 0x365ab6 - 0x365b51
int64_t function_365ab6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x365ab6
    int64_t v1; // 0x365ab6
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x365ab6
    return function_c6d58(a1, a2, v2, v2, v2, v2, a3);
}

// Address range: 0x365b51 - 0x365c63
int64_t function_365b51(int64_t a1, int64_t a2) {
    // 0x365b51
    int64_t v1; // 0x365b51
    bool v2; // 0x365b51
    return function_c6d58(a1, a2, v1, v1, v1, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x365c63 - 0x365da1
int64_t function_365c63(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x365c63
    int64_t v1; // 0x365c63
    return function_c6d58(a1, v1, a3, a4, v1, v1, 169);
}

// Address range: 0x365da1 - 0x365ef7
int64_t function_365da1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x365da1
    int64_t v1; // bp-40, 0x365da1
    int64_t v2 = (int64_t)&v1; // 0x365e7e
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x365e98
    *v3 = 0x6ab2145;
    int64_t * v4 = (int64_t *)(v2 - 24); // 0x365e9e
    bool v5; // 0x365da1
    *v4 = 0x4000 * (int64_t)(bool)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2;
    int64_t * v6 = (int64_t *)(v2 - 8); // 0x365ea4
    int64_t * v7 = (int64_t *)(v2 + 8); // 0x365ea4
    *v7 = *v6;
    *v6 = 0x7a529fe6;
    *v3 = 0x1c31af38;
    *v4 = 0x361e2c;
    *(int64_t *)(v2 + 24) = *v6;
    *v6 = v1;
    *v3 = v1;
    int64_t v8 = *v7; // 0x365ed9
    v1 = v8;
    *v6 = v8;
    return function_c6d58(a1, a2, a3, a4, a5, a6, v1);
}

// Address range: 0x365ef7 - 0x366094
int64_t function_365ef7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x365ef7
    return function_c6d58(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x366094 - 0x3661c7
int64_t function_366094(int64_t a1, int64_t a2, int64_t a3) {
    // 0x366094
    int64_t v1; // 0x366094
    return function_c6d58(a1, a2, a3, v1, v1, v1, 0x277b3f58);
}

// Address range: 0x3661c7 - 0x366328
int64_t function_3661c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3661c7
    int64_t v1; // bp-40, 0x3661c7
    int64_t v2 = (int64_t)&v1; // 0x366227
    v1 = a5;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3662a5
    *v3 = a5;
    int64_t * v4 = (int64_t *)(v2 + 16); // 0x3662b6
    *v4 = v1;
    *v3 = v2;
    int64_t v5 = v2 + 8; // 0x3662dd
    int64_t * v6 = (int64_t *)v5; // 0x3662de
    *(int64_t *)(v2 + 40) = 0x36309c;
    v1 = v5;
    *v6 = v2 + 24;
    int64_t v7 = *v4; // 0x366307
    *v6 = v7;
    v1 = v7;
    int64_t v8; // 0x3661c7
    return function_c6d58(a1, a2, *v6, a4, v8, v8, 0x4ec677bf);
}

// Address range: 0x366328 - 0x36649d
int64_t function_366328(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x366328
    int64_t v1; // bp-40, 0x366328
    int64_t v2 = (int64_t)&v1; // 0x366395
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x36642d
    *v3 = 0x363359;
    v1 = a7;
    int64_t v4 = v2 + 16; // 0x366440
    *(int64_t *)v4 = a7;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x366450
    *v5 = *v3;
    *(int64_t *)(v2 + 32) = v1;
    v1 = a4;
    *v3 = v4;
    *v5 = v1;
    int64_t v6 = *(int64_t *)v1; // 0x366482
    *(int64_t *)(v1 - 8) = v6;
    *(int64_t *)(v1 - 16) = v6;
    return function_c6d58(a1, a2, a3, v1, a5, a6, 0x4b3380c5);
}

// Address range: 0x36649d - 0x366629
int64_t function_36649d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4; // bp-32, 0x366522
    int64_t * v2 = (int64_t *)(a4 - 8); // 0x36653f
    int64_t * v3 = (int64_t *)(a4 + 32); // 0x366542
    int64_t v4 = *v3; // 0x366542
    *v2 = v4;
    int64_t * v5 = (int64_t *)(a4 - 16); // 0x366546
    *v5 = v4;
    int64_t * v6 = (int64_t *)(a4 + 16); // 0x366555
    int64_t v7 = *v6; // 0x366555
    *(int64_t *)(a4 - 24) = v7;
    *v2 = 0x3a1e13bb;
    *v5 = a3;
    *v6 = v4;
    *v2 = v7;
    int64_t * v8 = (int64_t *)a4; // 0x3665ad
    *v3 = *v8;
    int64_t * v9 = (int64_t *)(a4 + 8); // 0x3665da
    *v9 = a6;
    *v8 = a5;
    *v2 = a3;
    *v8 = a4 + 24;
    int64_t v10 = *v9; // 0x36661a
    *v2 = v10;
    return function_c6d58(*v2, a2, a3, a4, *v8, v10, (int64_t)&v1);
}

// Address range: 0x366629 - 0x36679b
int64_t function_366629(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x366629
    int64_t v1; // bp-32, 0x366629
    int64_t v2 = (int64_t)&v1; // 0x366699
    int64_t v3 = v2 - 8; // 0x3666a5
    int64_t * v4 = (int64_t *)v3; // 0x3666a5
    int64_t v5 = v2 - 16; // 0x3666ad
    int64_t * v6 = (int64_t *)v5; // 0x3666ad
    *v6 = a3;
    int64_t v7 = *(int64_t *)(v2 + 32); // 0x3666dd
    *v4 = v7;
    *v6 = v7;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x3666e4
    *v8 = v7;
    int64_t v9 = *(int64_t *)(v2 + 16); // 0x3666f3
    *v4 = v9;
    *v6 = a4;
    *v8 = v7;
    v1 = v7;
    *v8 = v3;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x366740
    *v10 = 0x73be2444;
    int64_t * v11 = (int64_t *)(v2 - 40); // 0x366746
    *v11 = v9;
    *(int64_t *)(v2 + 8) = *v8;
    *v10 = v3;
    int64_t v12 = *v8; // 0x36676e
    *v11 = v12;
    *v8 = *v6;
    *v10 = v5;
    int64_t v13; // 0x366629
    return function_c6d58(v12, a2, a3, *v6, a5, v13, 0x3637c5);
}

// Address range: 0x36679b - 0x366909
int64_t function_36679b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x36679b
    bool v1; // 0x36679b
    return function_c6d58(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2);
}

// Address range: 0x366909 - 0x366a56
int64_t function_366909(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x366909
    int64_t v1; // bp-16, 0x366909
    int64_t v2 = (int64_t)&v1; // 0x366919
    int64_t v3 = v2 - 8; // 0x36695c
    int64_t * v4 = (int64_t *)v3; // 0x36695c
    v1 = 0x3645a7;
    *v4 = 0xb6e3114;
    int64_t v5 = v2 - 16; // 0x36696b
    int64_t * v6 = (int64_t *)v5; // 0x36696b
    int64_t v7 = v2 - 24; // 0x366970
    int64_t * v8 = (int64_t *)v7; // 0x366979
    *v6 = v5;
    int64_t v9 = *(int64_t *)(v2 + 24); // 0x36699f
    *v6 = v9;
    *v8 = v9;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x3669ba
    *v10 = v5;
    *(int64_t *)(v2 - 40) = v1;
    *v4 = v9;
    *v10 = v1;
    *(int64_t *)(v2 + 8) = *v8;
    *v10 = v7;
    *v8 = v3;
    int64_t v11; // 0x366909
    return function_c6d58(a1, a2, a3, a4, v11, v11, v2);
}

// Address range: 0x3afa15 - 0x3afa1e
int64_t function_3afa15(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3afa15
    int64_t v1; // 0x3afa15
    unsigned char v2 = (char)(v1 / 256) - (char)v1; // 0x3afa15
    int64_t result = 256 * (int64_t)v2 | v1 & -0xff01; // 0x3afa17
    if (a4 != 1 == v2 == 0) {
        result = function_3afa01();
    }
    int32_t * v3 = (int32_t *)(a4 - 87); // 0x3afa19
    *v3 = *v3 + (int32_t)v1;
    return result;
}

// Address range: 0x3afa1f - 0x3afa4a
int64_t function_3afa1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3afa1f
    int64_t v1; // 0x3afa1f
    uint64_t v2 = v1;
    int64_t v3 = v2 % 256 & v1 / 256 | v2 & -256; // 0x3afa1f
    unknown_48b0ee27();
    int32_t * v4 = (int32_t *)(2 * a3); // 0x3afa2f
    *v4 = *v4 + (int32_t)v1;
    int32_t * v5 = (int32_t *)(v3 + 110); // 0x3afa3a
    *v5 = *v5 + (int32_t)v3;
    return unknown_ffffffffc078744a();
}

// Address range: 0x3afb23 - 0x3afb33
int64_t function_3afb23(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3afb23
    int64_t result; // 0x3afb23
    int32_t * v1 = (int32_t *)(result - 0x17e79af3); // 0x3afb23
    *v1 = *v1 / 2;
    int32_t * v2 = (int32_t *)(result + 8); // 0x3afb29
    *v2 = *v2 + (int32_t)result;
    char * v3 = (char *)(result + 22); // 0x3afb2c
    *v3 = *v3 ^ (char)(a4 / 256);
    return result;
}

// Address range: 0x3afb33 - 0x3afb34
int64_t function_3afb33(int64_t a1) {
    // 0x3afb33
    int64_t result; // 0x3afb33
    return result;
}

// Address range: 0x3afb45 - 0x3afb4a
int64_t function_3afb45(int64_t a1) {
    // 0x3afb45
    int64_t v1; // 0x3afb45
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x3afb4b - 0x3afb4e
int64_t function_3afb4b(void) {
    // 0x3afb4b
    int64_t result; // 0x3afb4b
    return result;
}

// Address range: 0x3afb4e - 0x3afb64
int64_t function_3afb4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3afb4e
    int64_t v1; // 0x3afb4e
    int64_t v2 = v1;
    bool v3; // 0x3afb4e
    int64_t v4 = (v3 ? -4 : 4) + a1; // 0x3afb4e
    char * v5 = (char *)(v4 + 8 * v1); // 0x3afb50
    char v6 = *v5; // 0x3afb50
    *v5 = v6 + (char)v2 + (char)((int32_t)v1 > (int32_t)v2);
    uint64_t result = unknown_ffffffff921fb65b(v4); // 0x3afb55
    char * v7 = (char *)(v4 + 0x44dc9e3a + 8 * v4); // 0x3afb5a
    *v7 = *v7 + (char)(result / 256);
    return result;
}

// Address range: 0x3afbaa - 0x3afbae
int64_t function_3afbaa(void) {
    // 0x3afbaa
    int64_t v1; // 0x3afbaa
    int64_t result = v1;
    *(char *)result = (char)result / 2;
    return result;
}

// Address range: 0x3afbd6 - 0x3afbd7
int64_t function_3afbd6(void) {
    // 0x3afbd6
    int64_t result; // 0x3afbd6
    return result;
}

// Address range: 0x3afbf7 - 0x3afbfe
int64_t function_3afbf7(void) {
    // 0x3afbf7
    int64_t result; // 0x3afbf7
    return result;
}

// Address range: 0x3afc3e - 0x3afc40
int64_t function_3afc3e(void) {
    // 0x3afc3e
    return function_3afbd6();
}

// Address range: 0x3afc56 - 0x3afc57
int64_t function_3afc56(void) {
    // 0x3afc56
    int64_t result; // 0x3afc56
    return result;
}

// Address range: 0x3afc94 - 0x3afc95
int64_t function_3afc94(void) {
    // 0x3afc94
    int64_t result; // 0x3afc94
    return result;
}

// Address range: 0x3afc95 - 0x3afd7c
int64_t function_3afc95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3afc95
    int64_t v1; // 0x3afc95
    uint64_t result = v1;
    bool v2; // 0x3afc95
    if (v2 || v2) {
        // 0x3afc97
        return result;
    }
    if ((int32_t)(result & a2) >= 0) {
        // 0x3afd1b
        return (result / 256 + result) % 256 | result & -256;
    }
    // 0x3afc97
    return result;
}

// Address range: 0x3afd82 - 0x3afd83
int64_t function_3afd82(void) {
    // 0x3afd82
    int64_t result; // 0x3afd82
    return result;
}

// Address range: 0x3afd93 - 0x3afd94
int64_t function_3afd93(void) {
    // 0x3afd93
    int64_t result; // 0x3afd93
    return result;
}

// Address range: 0x3afd9b - 0x3afdd2
int64_t function_3afd9b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = *(int32_t *)(a1 + 95); // 0x3afd9c
    if (a4 != 1 != ((v1 & 0x810d516) == 0) && (v1 & 0x810d516) == 0) {
        function_3afd93();
    }
    // 0x3afdab
    *(char *)a1 = *(char *)a5;
    __asm_in(11);
    unknown_ffffffff8db693ce();
    return function_3afd82();
}

// Address range: 0x3afe0f - 0x3afe3e
int64_t function_3afe0f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    unknown_ffffffffd8405e19();
    int64_t v2 = unknown_ffffffffd356ca28(); // 0x3afe22
    char * v3 = (char *)(2 * a4 + a1); // 0x3afe27
    *v3 = *v3 + (char)(a4 / 256);
    *(int32_t *)a1 = (int32_t)v2;
    bool v4; // 0x3afe0f
    int64_t v5 = v4 ? -4 : 4; // 0x3afe2a
    int64_t v6 = v5 + a1; // 0x3afe2a
    int64_t v7 = a3 & -256 | 234; // 0x3afe2e
    *(int32_t *)v6 = *(int32_t *)&v1;
    unknown_ffffffffabc48d37(v6 + v5, v1 + v5, v7);
    return v7 & 0xffffffea;
}

// Address range: 0x3afe41 - 0x3afe5d
int64_t function_3afe41(int64_t a1) {
    // 0x3afe41
    int64_t v1; // 0x3afe41
    int32_t * v2 = (int32_t *)(v1 - 79); // 0x3afe41
    *v2 = *v2 + (int32_t)a1;
    char v3 = __asm_in_133(0x368e); // 0x3afe4d
    uint64_t v4 = v1 & -256 | (int64_t)v3; // 0x3afe4d
    uint32_t v5 = *(int32_t *)0xb3033664; // 0x3afe58
    *(int32_t *)0xb3033664 = v5 - 0x4cfcc972;
    return v4 & -256 | (int64_t)(v3 + (char)(v5 > 0x4cfcc971) + (char)(v4 / 256));
}

// Address range: 0x3afe6b - 0x3afe6c
int64_t function_3afe6b(void) {
    // 0x3afe6b
    int64_t result; // 0x3afe6b
    return result;
}

// Address range: 0x3afe78 - 0x3afe7f
int64_t function_3afe78(void) {
    // 0x3afe78
    int64_t result; // 0x3afe78
    return result;
}

// Address range: 0x3afe89 - 0x3afe8c
int64_t function_3afe89(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3afe89
    int64_t result; // 0x3afe89
    *(int32_t *)a4 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x3afeb9 - 0x3afef3
int64_t function_3afeb9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3afeb9
    int64_t v1; // 0x3afeb9
    int64_t v2 = v1;
    *(char *)0x3fc74fd7 = *(char *)0x3fc74fd7 + (char)(v1 / 256);
    int32_t v3 = a2; // 0x3afed8
    __asm_out_134(-98, v3);
    char * v4 = (char *)(a3 - 0x683d8e26); // 0x3afeda
    char v5 = a3; // 0x3afeda
    *v4 = *v4 - v5;
    uint32_t v6 = 0x10000 * v3 >> 16; // 0x3afee0
    char * v7 = (char *)((((0x2008cae * v2 / 256 | v2) + 251) % 256 | v2 & 0xffffff00) + (v1 & -256 | 85)); // 0x3afee3
    *v7 = *v7 | v5;
    char * v8 = (char *)((int64_t)v6 - 0x38fffec3); // 0x3afee6
    *v8 = *v8 - (char)(v6 / 256);
    return v1 & 0xffffffff;
}

// Address range: 0x3afef3 - 0x3aff10
int64_t function_3afef3(int64_t a1, int64_t a2) {
    // 0x3afef3
    unknown_ffffffff90b2befc();
    return a1 & 0xffffffff;
}

// Address range: 0x3aff27 - 0x3aff28
int64_t function_3aff27(void) {
    // 0x3aff27
    int64_t result; // 0x3aff27
    return result;
}

// Address range: 0x3aff3d - 0x3aff3f
int64_t function_3aff3d(void) {
    // 0x3aff3d
    return function_3aff27();
}

// Address range: 0x3aff52 - 0x3aff57
int64_t function_3aff52(void) {
    // 0x3aff52
    return function_ffffffff9a186571();
}

// Address range: 0x3aff5b - 0x3aff69
int64_t function_3aff5b(int64_t a1, int64_t a2) {
    // 0x3aff5b
    int64_t result; // 0x3aff5b
    return result;
}

// Address range: 0x3affbb - 0x3affdf
int64_t function_3affbb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3affbb
    int64_t v1; // 0x3affbb
    int64_t v2 = v1;
    char * v3 = (char *)(a2 + 55); // 0x3affc1
    *v3 = *v3 + (char)v2;
    int64_t v4 = 0x1289f600; // bp-8, 0x3affca
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a2 + (int32_t)((int32_t)v1 < 0x6322f801);
    int64_t v5; // 0x3affbb
    int32_t v6 = *(int32_t *)&v5; // 0x3affd3
    *(int32_t *)a1 = v6 + (int32_t)(int64_t)&v4;
    __asm_out(-102, *(char *)(v1 % 256 + v2) | -24);
    return function_3b001c();
}

// Address range: 0x3afff5 - 0x3afff8
int64_t function_3afff5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3afff5
    int64_t result; // 0x3afff5
    return result;
}

// Address range: 0x3b001c - 0x3b002f
int64_t function_3b001c(void) {
    // 0x3b001c
    __asm_wait();
    bool v1; // 0x3b001c
    if (!v1) {
        // 0x3b002a
        return function_a3f812();
    }
    int64_t result = unknown_3d3d6028(); // 0x3b0022
    int32_t * v2 = (int32_t *)result; // 0x3b0027
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x3b0036 - 0x3b0043
int64_t function_3b0036(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b0036
    int64_t result; // 0x3b0036
    return result;
}

// Address range: 0x3b00a5 - 0x3b00bd
int64_t function_3b00a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b00a5
    int64_t result; // 0x3b00a5
    char * v1 = (char *)(result + 0x13d0000); // 0x3b00aa
    *v1 = *v1 + (char)a3;
    char * v2 = (char *)(a2 + 0x359bcf76); // 0x3b00b1
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x3b00d8 - 0x3b00dd
int64_t function_3b00d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b00d8
    int64_t result; // 0x3b00d8
    *(int32_t *)a2 = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0x3b0132 - 0x3b0151
int64_t function_3b0132(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b0132
    int64_t v1; // 0x3b0132
    *(int32_t *)-0x213bf73453a1505 = (int32_t)v1;
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a4;
    float80_t v2; // 0x3b0132
    *(int16_t *)(v1 + 0xea3b711) = (int16_t)v2;
    return function_ffffffffba9d9cf8();
}

// Address range: 0x3b015c - 0x3b0178
int64_t function_3b015c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b015c
    int64_t v1; // 0x3b015c
    __asm_outsd((int16_t)a3, (int32_t)v1);
    int32_t * v2 = (int32_t *)(a3 + 104 + v1); // 0x3b015d
    *v2 = *v2 | (int32_t)a3;
    int64_t result = unknown_3b111272(); // 0x3b016c
    *(char *)0x7ef42678 = *(char *)0x7ef42678 + (char)(v1 / 256);
    return result;
}

// Address range: 0x3b0195 - 0x3b0196
int64_t function_3b0195(void) {
    // 0x3b0195
    int64_t result; // 0x3b0195
    return result;
}

// Address range: 0x3b01b9 - 0x3b01da
int64_t function_3b01b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b01b9
    int64_t v1; // 0x3b01b9
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    unsigned char v3 = (char)a1; // 0x3b01c1
    unsigned char v4 = (int32_t)v2 < 0x6fbe3701 ? 43 : 42; // 0x3b01c1
    unsigned char v5 = v3 - v4; // 0x3b01c1
    int64_t result = a1 & 0xffffff00 | (int64_t)v5; // 0x3b01c1
    if (a4 != 1 != (v5 == 0)) {
        // 0x3b01c7
        return result;
    }
    int64_t result2 = result; // 0x3b01c8
    if ((int32_t)v2 >= 0x6fbe3701 && v4 <= v3 && v5 != 0) {
        result2 = function_3b0195();
    }
    // 0x3b01c7
    return result2;
}

// Address range: 0x3b020f - 0x3b0214
int64_t function_3b020f(void) {
    // 0x3b020f
    return function_ffffffffa7d90a04();
}

// Address range: 0x3b0273 - 0x3b0276
int64_t function_3b0273(void) {
    // 0x3b0273
    int64_t result; // 0x3b0273
    return result;
}

// Address range: 0x3b028d - 0x3b0294
int64_t function_3b028d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b028d
    int64_t v1; // 0x3b028d
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + (char)a4;
    return function_8bbd9e();
}

// Address range: 0x3b02b6 - 0x3b02b9
int64_t function_3b02b6(void) {
    // 0x3b02b6
    int64_t result; // 0x3b02b6
    return result;
}

// Address range: 0x3b02ba - 0x3b02d0
int64_t function_3b02ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b02ba
    bool v1; // 0x3b02ba
    *(char *)a3 = (char)v1;
    int64_t result = unknown_2ab727c2(); // 0x3b02bc
    __asm_out_135((int16_t)a3, (int32_t)result);
    *(char *)-0x38033e34 = *(char *)-0x38033e34 + (char)a3;
    return result;
}

// Address range: 0x3b02d5 - 0x3b02da
int64_t function_3b02d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b02d5
    int64_t result; // 0x3b02d5
    *(char *)result = (char)a3;
    return result;
}

// Address range: 0x3b031f - 0x3b0328
int64_t function_3b031f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b031f
    int64_t result; // 0x3b031f
    *(char *)a3 = 2 * (char)result;
    return result;
}

// Address range: 0x3b0389 - 0x3b038a
int64_t function_3b0389(void) {
    // 0x3b0389
    int64_t result; // 0x3b0389
    return result;
}

// Address range: 0x3b03eb - 0x3b03f9
int64_t function_3b03eb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 0x3ce50869); // 0x3b03f0
    char v2 = *v1; // 0x3b03f0
    char v3 = a3 / 256; // 0x3b03f0
    char v4 = v2 + v3; // 0x3b03f0
    *v1 = v4;
    while (v4 < 0 == ((v4 ^ v2) & (v4 ^ v3)) < 0) {
        // continue -> 0x3b03f6
    }
    // 0x3b03f8
    int64_t v5; // 0x3b03eb
    bool v6; // 0x3b03eb
    return v5 + 0x533f90af + (int64_t)v6 & 0xffffffff;
}

// Address range: 0x3b03fa - 0x3b0409
int64_t function_3b03fa(void) {
    // 0x3b03fa
    int64_t result; // 0x3b03fa
    bool v1; // 0x3b03fa
    if (v1) {
        result = function_3b0389();
    }
    // 0x3b03fc
    return result;
}

// Address range: 0x3b040a - 0x3b0420
int64_t function_3b040a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b040a
    int64_t v1; // 0x3b040a
    uint32_t v2 = (int32_t)v1; // 0x3b040a
    uint32_t v3 = *(int32_t *)(8 * a4 + 124 + v1) + v2; // 0x3b040a
    int64_t result = v3; // 0x3b040e
    if (v3 >= v2) {
        result = function_3df18c14();
    }
    // 0x3b0414
    *(int32_t *)a2 = (int32_t)a3 + (int32_t)a2;
    char * v4 = (char *)(a3 + 0x731afe60); // 0x3b0417
    *v4 = *v4 + (char)v1;
    return result;
}

// Address range: 0x3b0465 - 0x3b046d
int64_t function_3b0465(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x1f7d0fc9); // 0x3b0465
    int64_t result; // 0x3b0465
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3b046f - 0x3b0477
int64_t function_3b046f(void) {
    // 0x3b046f
    return unknown_4211622c();
}

// Address range: 0x3b0491 - 0x3b0496
int64_t function_3b0491(void) {
    // 0x3b0491
    return function_ffffffffc67506d1();
}

// Address range: 0x3b049a - 0x3b04a2
int64_t function_3b049a(int64_t a1) {
    // 0x3b049a
    int64_t v1; // 0x3b049a
    return v1 + 0xa83aec04 & 0xffffffff;
}

// Address range: 0x3b0556 - 0x3b055d
int64_t function_3b0556(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b0556
    int64_t v1; // 0x3b0556
    return v1 & 0xffffffff;
}

// Address range: 0x3b056a - 0x3b056b
int64_t function_3b056a(void) {
    // 0x3b056a
    int64_t result; // 0x3b056a
    return result;
}

// Address range: 0x3b0570 - 0x3b0571
int64_t function_3b0570(void) {
    // 0x3b0570
    int64_t result; // 0x3b0570
    return result;
}

// Address range: 0x3b0593 - 0x3b05a2
int64_t function_3b0593(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b0593
    return function_3b056a();
}

// Address range: 0x3b05a2 - 0x3b05b3
int64_t function_3b05a2(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = __asm_int1(); // 0x3b05a4
    char v1 = *(char *)0x479886b3; // 0x3b05ac
    int64_t v2; // 0x3b05a2
    *(char *)0x479886b3 = v1 + (char)((uint64_t)v2 / 256);
    return result;
}

// Address range: 0x3b05b4 - 0x3b05cb
int64_t function_3b05b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b05b4
    int64_t v1; // 0x3b05b4
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    char * v3 = (char *)(a1 + 5); // 0x3b05b6
    *v3 = *v3 + (char)a3;
    char * v4 = (char *)(v2 + 0x1e80142); // 0x3b05b9
    unsigned char v5 = *v4; // 0x3b05b9
    unsigned char v6 = v5 + (char)v2; // 0x3b05b9
    *v4 = v6;
    int64_t result; // 0x3b05b4
    if (v6 < v5 || v6 == 0) {
        result = function_3b0570();
    }
    // 0x3b05c8
    return result;
}

// Address range: 0x3b05e9 - 0x3b05ec
int64_t function_3b05e9(int64_t a1) {
    // 0x3b05e9
    int64_t result; // 0x3b05e9
    return result;
}

// Address range: 0x3b0688 - 0x3b0689
int64_t function_3b0688(void) {
    // 0x3b0688
    int64_t result; // 0x3b0688
    return result;
}

// Address range: 0x3b06ab - 0x3b06ac
int64_t function_3b06ab(void) {
    // 0x3b06ab
    int64_t result; // 0x3b06ab
    return result;
}

// Address range: 0x3b06b2 - 0x3b0822
int64_t function_3b06b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a4;
    int64_t v2 = a6;
    int64_t v3; // 0x3b06b2
    *(char *)(a4 - 0x9c94995) = (char)(v3 / 256);
    __asm_iretd();
    uint64_t v4 = unknown_ffffffffe4512ebf(); // 0x3b06b9
    int32_t v5; // 0x3b06b2
    int64_t v6; // 0x3b06b2
    int64_t v7; // 0x3b06b2
    bool v8; // 0x3b06b2
    if (v8) {
        char * v9 = (char *)(v4 + 0x48c6d600); // 0x3b06df
        *v9 = *v9 + (char)v4;
        char * v10 = (char *)(v3 + 0x2b01e800); // 0x3b06e5
        char v11 = v4 / 256;
        *v10 = *v10 + v11;
        char v12 = (char)(v1 / 256) + v11; // 0x3b06eb
        int64_t v13 = 256 * (int64_t)v12 | v1 & -0xff01; // 0x3b06eb
        v1 = v13;
        char v14 = v11; // 0x3b06ed
        if (v12 < 1) {
            v14 = function_3b0688() / 256;
        }
        int32_t v15 = *(int32_t *)(v13 - 0x42e80c00); // 0x3b06f1
        unknown_ffffffffd92b97fd();
        v5 = a2;
        v6 = v13;
        v7 = v15 + ((int32_t)v3 & -256 | 59) + (int32_t)(-1 - v14 < (char)a3);
    } else {
        int32_t v16 = a2;
        *(int32_t *)v1 = *(int32_t *)&v1 + v16;
        v5 = v16;
        v6 = v1;
    }
    int64_t v17 = v6; // 0x3b06fc
    v1 = v17 & -256 | (int64_t)(*(char *)(a2 + 94) | (char)v17);
    int32_t v18 = *(int32_t *)(a3 + 1); // 0x3b06ff
    int32_t * v19 = (int32_t *)(a1 + 95); // 0x3b0709
    *v19 = *v19 + (int32_t)v7;
    uint64_t v20 = unknown_28cf6e1d(); // 0x3b0717
    char * v21 = (char *)(a1 + 0x5ab21295); // 0x3b071c
    *v21 = *v21 + (char)(v20 / 256);
    unsigned char v22 = llvm_ctpop_i8((char)v20 / 2); // 0x3b0722
    int64_t v23 = v20 & -256; // 0x3b0726
    if (v22 % 2 == 0) {
        v23 = function_3b06ab();
    }
    // 0x3b0728
    if ((v23 & 0x4100) != 0) {
        // 0x3b0741
        __asm_out(-111, 40);
        return unknown_ffffffffa558a44a();
    }
    int64_t v24 = __asm_sti(); // 0x3b072e
    int64_t v25 = v1;
    int64_t v26 = unknown_50337139() & 0xffffffff; // 0x3b0738
    v1 = v26;
    if (v26 != 0) {
        // 0x3b073b
        *(int32_t *)a1 = __asm_insd(-0x62e9);
        return v25 & 0xffffff00 | (int64_t)__asm_in(-82);
    }
    if ((*(int32_t *)v25 & (int32_t)v24) != 0) {
        // 0x3b080b
        return v25 - ((int32_t)v25 < 0x9ec1f701 ? 0x5e2a4dd7 : 0x5e2a4dd6) & 0xffffffff;
    }
    char v27 = *(char *)(2 * (int64_t)(v18 | v5) - 0x1f70d5ed); // 0x3b07b2
    unsigned char v28 = ((char)v25 - v27) / 2; // 0x3b07bb
    *(int64_t *)(((int64_t)&v2 + 0xe8a49d17 & 0xffffffff) - 8) = -0x175b62e9;
    __asm_out_136(-0x62e9, v28);
    return v25 & 0xffffff00 | (int64_t)v28;
}

// Address range: 0x3b084b - 0x3b0850
int64_t function_3b084b(void) {
    // 0x3b084b
    return function_e390bcb();
}

// Address range: 0x3b0858 - 0x3b0859
int64_t function_3b0858(void) {
    // 0x3b0858
    int64_t result; // 0x3b0858
    return result;
}

// Address range: 0x3b0861 - 0x3b0869
int64_t function_3b0861(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b0861
    int64_t v1; // 0x3b0861
    __asm_outsb((int16_t)a3, (char)v1);
    return function_3b0858();
}

// Address range: 0x3b08b8 - 0x3b08e9
int64_t function_3b08b8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b08b8
    int64_t v1; // 0x3b08b8
    uint64_t v2 = v1;
    char * v3 = (char *)(a4 - 0x190c9201); // 0x3b08b8
    *v3 = (char)(v2 / 256);
    int64_t v4 = 256 * (int64_t)*v3 | v2 & -0xff01; // 0x3b08b8
    *(char *)0x703cf0e9 = *(char *)0x703cf0e9 + 55;
    char * v5 = (char *)v4; // 0x3b08c5
    *v5 = *v5 | -92;
    *(char *)-0x17541913 = *(char *)-0x17541913 | (char)v1;
    *(int32_t *)0x3e8d33d = *(int32_t *)0x3e8d33d + (int32_t)a3;
    uint32_t v6 = (int32_t)a4; // 0x3b08d8
    int64_t v7; // 0x3b08b8
    int64_t result = (int64_t)(*(int32_t *)&v7 >> v6 % 32);
    int32_t * v8 = (int32_t *)(result - 111); // 0x3b08da
    *v8 = *v8 + v6;
    int32_t * v9 = (int32_t *)(result - 110); // 0x3b08e5
    *v9 = *v9 + (int32_t)v4;
    return result;
}

// Address range: 0x3b090b - 0x3b0931
int64_t function_3b090b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b090b
    int64_t v1; // 0x3b090b
    __asm_outsb((int16_t)a3, (char)v1);
    *(int32_t *)a4 = (int32_t)v1;
    *(char *)0x4c4fa8c21501e888 = (char)unknown_ffffffff89718316();
    return unknown_227f0a2a();
}

// Address range: 0x3b0965 - 0x3b09ec
int64_t function_3b0965(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3 & -0xff01 | (int64_t)&g4; // 0x3b096d
    int64_t v2; // 0x3b0965
    *(int32_t *)a1 = (int32_t)v2 + (int32_t)a2;
    *(int16_t *)v1 = (int16_t)v2;
    int64_t v3; // 0x3b0965
    __asm_outsb((int16_t)v1, *(char *)&v3);
    unknown_3ad75b83();
    uint64_t v4 = unknown_46035590(); // 0x3b098a
    char v5 = *(char *)v4; // 0x3b0991
    int64_t result = 256 * (int64_t)(v5 | (char)(v4 / 256)) | v4 & -0xff01; // 0x3b0991
    int32_t * v6; // 0x3b0965
    bool v7; // 0x3b0965
    int64_t v8 = (v7 ? -4 : 4) + (int64_t)v6; // 0x3b0993
    v3 = v8;
    if (*v6 <= *v6) {
        // 0x3b0996
        *(char *)-0x62b5fe176eb2feb9 = (char)v4;
        unsigned char v9 = *(char *)(v4 % 256 + (v2 & -0xff01 | (int64_t)&g3)); // 0x3b09a0
        return result & -256 | (int64_t)v9;
    }
    int32_t * v10 = (int32_t *)(v8 + 65 + 4 * v8); // 0x3b09ba
    int32_t v11 = *v10 + (int32_t)v2; // 0x3b09ba
    *v10 = v11;
    if (v11 == 0) {
        // 0x3b09c0
        return result;
    }
    unsigned char v12 = (char)(v2 + a4 / 256) - *(char *)(v2 - 0xc1efe18); // 0x3b09e1
    __asm_out(114, (char)v4);
    if ((v2 & 0xffffff00 || (int64_t)v12) != 1 == v12 == 0) {
        // 0x3b09a5
        return unknown_3ad484b0();
    }
    // 0x3b09c0
    return result;
}

// Address range: 0x3b09f5 - 0x3b09fc
int64_t function_3b09f5(void) {
    // 0x3b09f5
    return unknown_ffffffffbc7b99fb();
}

// Address range: 0x3b09ff - 0x3b0a02
int64_t function_3b09ff(void) {
    // 0x3b09ff
    int64_t result; // 0x3b09ff
    return result;
}
