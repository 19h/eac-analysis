/*
 * Targeted RetDec C for native executable gap queue batch 1209.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x28496e-0x284b6e rank=- name=- kind=- bytes=- uncovered=-
 *   0x284b6e-0x284d6e rank=- name=- kind=- bytes=- uncovered=-
 *   0x284d6e-0x284f6e rank=- name=- kind=- bytes=- uncovered=-
 *   0x284f6e-0x28516e rank=- name=- kind=- bytes=- uncovered=-
 *   0x28516e-0x28536e rank=- name=- kind=- bytes=- uncovered=-
 *   0x28536e-0x28556e rank=- name=- kind=- bytes=- uncovered=-
 *   0x28576e-0x28596e rank=- name=- kind=- bytes=- uncovered=-
 *   0x325ebb-0x3260bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3260bb-0x3262bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3262bb-0x3264bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3264bb-0x3266bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3266bb-0x3268bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3268bb-0x326abb rank=- name=- kind=- bytes=- uncovered=-
 *   0x326abb-0x326bbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x404cd1-0x404ed1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x404ed1-0x4050d1 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1cb44944();
int64_t function_2107dfb();
int64_t function_21ab649();
int64_t function_21ace81();
int64_t function_28496e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_284985(void);
int64_t function_2849ac(void);
int64_t function_2849bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2849f1(int64_t a1);
int64_t function_284a65(int64_t a1);
int64_t function_284a7d(int64_t a1);
int64_t function_284a8f(void);
int64_t function_284ade(int64_t a1);
int64_t function_284b19(int64_t a1, int64_t a2);
int64_t function_284b5c(void);
int64_t function_284c10(int64_t a1, int64_t a2);
int64_t function_284c26(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_284c68(int64_t a1);
int64_t function_284cb9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_284ce2(void);
int64_t function_284cf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_284cfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_284d9f(void);
int64_t function_284dfe(void);
int64_t function_284e18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_284e22(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_284e66(void);
int64_t function_284e77(int64_t a1);
int64_t function_284ea1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_284f03(void);
int64_t function_284f23(void);
int64_t function_284f97(int64_t a1);
int64_t function_285021(void);
int64_t function_285069(void);
int64_t function_28507c(void);
int64_t function_2850bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2850c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2850de(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28510e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_285135(void);
int64_t function_28513e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2851e1(int64_t a1);
int64_t function_285222(int64_t a1);
int64_t function_285231(int64_t a1, int64_t a2, int64_t a3);
int64_t function_285240(int64_t a1);
int64_t function_285299(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_285307(void);
int64_t function_285391(void);
int64_t function_2853a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2853bc(int64_t a1);
int64_t function_2853c4(void);
int64_t function_285407(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28544c(void);
int64_t function_285484(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_28576e(void);
int64_t function_2857e4(void);
int64_t function_285806(void);
int64_t function_28582a(void);
int64_t function_285832(int64_t a1, int64_t a2, int64_t a3);
int64_t function_285856(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_285879(void);
int64_t function_285882(void);
int64_t function_2858b0(int64_t a1);
int64_t function_2858e9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_28593e(void);
int64_t function_29030129();
int64_t function_3035324b();
int64_t function_325ebb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_325eff(int64_t a1);
int64_t function_325fa7(int64_t a1);
int64_t function_325fcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_325fef(void);
int64_t function_326033(void);
int64_t function_326043(void);
int64_t function_32605f(void);
int64_t function_326064(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3260a8(void);
int64_t function_3260bb(void);
int64_t function_32610c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_32611c(int64_t a1);
int64_t function_3261c7(void);
int64_t function_3261e3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3261ee(int64_t a1, int64_t a2, int64_t a3);
int64_t function_326203(int64_t a1, int64_t a2);
int64_t function_326283(void);
int64_t function_3262c8(void);
int64_t function_3262d8(int64_t a1);
int64_t function_32635f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_326375(void);
int64_t function_32637d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_326425(void);
int64_t function_32645a(void);
int64_t function_326463(void);
int64_t function_32646d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_32652f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_326543(void);
int64_t function_32655d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_326665(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_326674(void);
int64_t function_3266c2(void);
int64_t function_3266e5(void);
int64_t function_32672c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_326755(void);
int64_t function_326761(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_326777(int64_t a1);
int64_t function_326787(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_326799(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3267c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3268eb(int64_t a1);
int64_t function_326901(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32694a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_326973(void);
int64_t function_326989(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3269b2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3269dc(void);
int64_t function_3269ee(int64_t a1);
int64_t function_3269fe(void);
int64_t function_326a08(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_326b78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_326b81(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_326b88(void);
int64_t function_326b99(int64_t a1);
int64_t function_326b9e(void);
int64_t function_326ba0(void);
int64_t function_326ba7(int64_t a1, int64_t a2);
int64_t function_3e93be20();
int64_t function_404c8b();
int64_t function_404cd1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_404d6b(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_404dc2(void);
int64_t function_404dd9(int64_t a1);
int64_t function_404ddd(void);
int64_t function_404e03(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_404e69(void);
int64_t function_404ea3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_404f2c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_404f75(int64_t a1);
int64_t function_404fa0(int64_t a1);
int64_t function_405032(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40505a(int64_t a1);
int64_t function_582a324c();
int64_t function_6c2771fe();
int64_t function_7315e90b();
int64_t function_caf2a();
int64_t function_f6fe();
int64_t function_ffffffff873362f7();
int64_t function_ffffffff96546ea7();
int64_t function_ffffffffa5ffb19c();
int64_t function_ffffffffabe85d23();
int64_t function_ffffffffc6dff861();
int64_t function_ffffffffe8b4e4f1();
int64_t function_ffffffffe91a4f0e();
int64_t function_ffffffffecf264fd();
int64_t function_fffffffffb0939ad();
int64_t unknown_2360b58a();
int64_t unknown_288b5f41();
int64_t unknown_2f32bbaa();
int64_t unknown_37bf29ae();
int64_t unknown_38823a1();
int64_t unknown_3891e476();
int64_t unknown_3aa0c571();
int64_t unknown_3abc80e5();
int64_t unknown_3ccf5def();
int64_t unknown_3d2a3c16();
int64_t unknown_64b74f1c();
int64_t unknown_677c0de0();
int64_t unknown_69b16372();
int64_t unknown_6ebf2915();
int64_t unknown_7c3d41b9();
int64_t unknown_7d936a04();
int64_t unknown_ffffffff84edff43();
int64_t unknown_ffffffff9033a694();
int64_t unknown_ffffffff90f49388();
int64_t unknown_ffffffff9881ec0e();
int64_t unknown_ffffffff9af68b2b();
int64_t unknown_ffffffffbe346824();
int64_t unknown_ffffffffcb03e5bf();
int64_t unknown_ffffffffce3b52c2();
int64_t unknown_ffffffffd85f6932();
int64_t unknown_ffffffffe834266b();
int64_t unknown_fffffffff21e3db4();
int64_t unknown_fffffffffc926610();

// Address range: 0x28496e - 0x284978
int64_t function_28496e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x28496e
    int64_t v1; // 0x28496e
    int64_t v2 = v1;
    *(char *)a2 = (char)v2 + (char)(a4 / 256) + (char)((int32_t)v2 > -1 - (int32_t)v1);
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x284985 - 0x284986
int64_t function_284985(void) {
    // 0x284985
    int64_t result; // 0x284985
    return result;
}

// Address range: 0x2849ac - 0x2849af
int64_t function_2849ac(void) {
    // 0x2849ac
    int64_t result; // 0x2849ac
    return result;
}

// Address range: 0x2849bc - 0x2849da
int64_t function_2849bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_288b5f41(); // 0x2849c3
    char * v1 = (char *)(result + 115); // 0x2849d2
    *v1 = *v1 - 77;
    return result;
}

// Address range: 0x2849f1 - 0x2849fb
int64_t function_2849f1(int64_t a1) {
    // 0x2849f1
    return function_582a324c();
}

// Address range: 0x284a65 - 0x284a66
int64_t function_284a65(int64_t a1) {
    // 0x284a65
    int64_t result; // 0x284a65
    return result;
}

// Address range: 0x284a7d - 0x284a80
int64_t function_284a7d(int64_t a1) {
    // 0x284a7d
    int64_t result; // 0x284a7d
    return result;
}

// Address range: 0x284a8f - 0x284a94
int64_t function_284a8f(void) {
    // 0x284a8f
    return function_ffffffffc6dff861();
}

// Address range: 0x284ade - 0x284ae1
int64_t function_284ade(int64_t a1) {
    // 0x284ade
    int64_t result; // 0x284ade
    return result;
}

// Address range: 0x284b19 - 0x284b2b
int64_t function_284b19(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0xa9da99e); // 0x284b19
    int64_t v2; // 0x284b19
    *v1 = *v1 + (int32_t)v2;
    return (v2 & 0x68c331fa) + a2 & 0xffffffff;
}

// Address range: 0x284b5c - 0x284b5f
int64_t function_284b5c(void) {
    // 0x284b5c
    int64_t result; // 0x284b5c
    return result;
}

// Address range: 0x284c10 - 0x284c26
int64_t function_284c10(int64_t a1, int64_t a2) {
    // 0x284c10
    int64_t v1; // 0x284c10
    return a2 & 0xffff0000 | (int64_t)"alize" | (uint64_t)v1 % 256;
}

// Address range: 0x284c26 - 0x284c3c
int64_t function_284c26(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x284c26
    int64_t result; // 0x284c26
    uint32_t v1 = (int32_t)result;
    bool v2; // 0x284c26
    int32_t v3 = v2; // 0x284c26
    uint32_t v4 = v3 + (int32_t)result; // 0x284c26
    int32_t v5 = v1 - v4; // 0x284c26
    bool v6 = v2 ? v4 != -1 | v5 - v3 > v1 : v4 > v1; // 0x284c26
    *(int32_t *)a5 = v5;
    char v7 = *(char *)-0x181857ca; // 0x284c2f
    *(char *)-0x181857ca = v7 + (char)((int64_t)&g3 >> 8);
    char * v8 = (char *)(a1 - 0x5f819070); // 0x284c35
    *v8 = (char)a4 - (char)a3 + (char)v6 & *v8;
    return result;
}

// Address range: 0x284c68 - 0x284c69
int64_t function_284c68(int64_t a1) {
    // 0x284c68
    int64_t result; // 0x284c68
    return result;
}

// Address range: 0x284cb9 - 0x284cbd
int64_t function_284cb9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x284cb9
    int64_t v1; // 0x284cb9
    return function_284cfa(a1, a2, a3, v1, (int64_t)&g4);
}

// Address range: 0x284ce2 - 0x284ce3
int64_t function_284ce2(void) {
    // 0x284ce2
    int64_t result; // 0x284ce2
    return result;
}

// Address range: 0x284cf4 - 0x284cfa
int64_t function_284cf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x284cf4
    int64_t v1; // 0x284cf4
    int64_t v2 = v1;
    return (v2 - a4) % 256 | v2 & -256;
}

// Address range: 0x284cfa - 0x284d7b
int64_t function_284cfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 - 26); // 0x284cfa
    uint32_t v2 = *v1; // 0x284cfa
    uint32_t v3 = v2 + (int32_t)a3; // 0x284cfa
    *v1 = v3;
    int64_t v4 = __asm_int3(); // 0x284cfd
    if (v3 >= v2 && v3 != 0) {
        // 0x284d1e
        __asm_out_135(-67, 0x10000 * (int32_t)v4 >> 16);
        return function_29030129();
    }
    // 0x284d01
    int64_t v5; // 0x284cfa
    int32_t * v6 = (int32_t *)(4 * a4 + 0x27b80107 + v5); // 0x284d07
    *v6 = *v6 + (int32_t)a4;
    uint32_t v7 = (int32_t)unknown_6ebf2915() | 0x5c0019d; // 0x284d14
    int64_t result = v7; // 0x284d14
    if (v7 >= 0) {
        // 0x284d1b
        return result;
    }
    // 0x284d55
    __asm_out_136((int16_t)a3, v7);
    int64_t v8; // 0x284cfa
    unsigned char v9 = *(char *)&v8 | (char)a4; // 0x284d56
    int64_t v10 = a4 & -256 | (int64_t)v9; // 0x284d56
    v8 = 0x517bbc8c;
    if (v9 < 0) {
        int32_t * v11 = (int32_t *)v10; // 0x284d47
        *v11 = *v11 + (int32_t)v5;
        return result & 0xffffff00 | (int64_t)*(char *)0x557f012304a47f0a;
    }
    char * v12 = (char *)result; // 0x284d61
    *v12 = *v12 | (char)a3;
    int32_t * v13 = (int32_t *)(v10 + 0x78766ad8); // 0x284d63
    *v13 = *v13 | -0x4ccbfe18;
    *(int32_t *)a1 = v7;
    char * v14 = (char *)(result + 24); // 0x284d6e
    *v14 = *v14 + (char)v7;
    bool v15; // 0x284cfa
    int64_t v16 = __asm_hlt((v15 ? -4 : 4) + a1, v8); // 0x284d75
    unsigned char v17 = v9 % 32;
    if (v17 != 0) {
        int32_t * v18 = (int32_t *)(v5 - 108); // 0x284d76
        uint32_t v19 = *v18; // 0x284d76
        uint32_t v20 = (int32_t)v17; // 0x284d76
        *v18 = v19 >> v20 | v19 << 32 - v20;
    }
    return (v16 + 199) % 256 | v16 & -256;
}

// Address range: 0x284d9f - 0x284da0
int64_t function_284d9f(void) {
    // 0x284d9f
    int64_t result; // 0x284d9f
    return result;
}

// Address range: 0x284dfe - 0x284e06
int64_t function_284dfe(void) {
    // 0x284dfe
    int64_t v1; // 0x284dfe
    __asm_out_135(-96, (int32_t)v1);
    return function_ffffffffe91a4f0e();
}

// Address range: 0x284e18 - 0x284e22
int64_t function_284e18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x284e18
    int64_t v1; // 0x284e18
    int64_t v2 = v1;
    *(char *)v2 = (char)v1 + (char)v2;
    return v1 + 0x3dc96770 & 0xffffffff;
}

// Address range: 0x284e22 - 0x284e35
int64_t function_284e22(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x284e22
    return unknown_ffffffff9af68b2b();
}

// Address range: 0x284e66 - 0x284e67
int64_t function_284e66(void) {
    // 0x284e66
    int64_t result; // 0x284e66
    return result;
}

// Address range: 0x284e77 - 0x284e7e
int64_t function_284e77(int64_t a1) {
    // 0x284e77
    return function_284e66();
}

// Address range: 0x284ea1 - 0x284eac
int64_t function_284ea1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x284ea1
    int64_t result; // 0x284ea1
    return result;
}

// Address range: 0x284f03 - 0x284f06
int64_t function_284f03(void) {
    // 0x284f03
    int64_t result; // 0x284f03
    return result;
}

// Address range: 0x284f23 - 0x284f24
int64_t function_284f23(void) {
    // 0x284f23
    int64_t result; // 0x284f23
    return result;
}

// Address range: 0x284f97 - 0x284f9d
int64_t function_284f97(int64_t a1) {
    // 0x284f97
    return function_2107dfb();
}

// Address range: 0x285021 - 0x285022
int64_t function_285021(void) {
    // 0x285021
    int64_t result; // 0x285021
    return result;
}

// Address range: 0x285069 - 0x28506b
int64_t function_285069(void) {
    // 0x285069
    return function_285021();
}

// Address range: 0x28507c - 0x28507e
int64_t function_28507c(void) {
    // 0x28507c
    int64_t v1; // 0x28507c
    return function_2850de(v1, v1, v1, v1);
}

// Address range: 0x2850bc - 0x2850c3
int64_t function_2850bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2850bc
    int64_t result; // 0x2850bc
    int32_t * v1 = (int32_t *)(result + 27); // 0x2850bc
    *v1 = *v1 + (int32_t)a1;
    return result;
}

// Address range: 0x2850c3 - 0x2850c7
int64_t function_2850c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2850c3
    int64_t result; // 0x2850c3
    char * v1 = (char *)(2 * result + a3); // 0x2850c3
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x2850de - 0x2850ef
int64_t function_2850de(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 126); // 0x2850de
    int64_t result; // 0x2850de
    *v1 = *v1 + (char)(result / 256);
    int32_t * v2 = (int32_t *)(result + 5); // 0x2850e9
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x28510e - 0x285119
int64_t function_28510e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x28510e
    int64_t result; // 0x28510e
    char v1 = *(char *)(result - 48); // 0x28510e
    char * v2 = (char *)((a3 & -256 | (int64_t)(v1 | (char)a3)) - 24); // 0x285113
    char v3 = *v2; // 0x285113
    *v2 = v3 + (char)a4 + (char)(-1 - (char)result < (char)(result / 256));
    return result;
}

// Address range: 0x285135 - 0x285137
int64_t function_285135(void) {
    // 0x285135
    int64_t result; // 0x285135
    return result;
}

// Address range: 0x28513e - 0x2851cc
int64_t function_28513e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x28513e
    int64_t v1; // 0x28513e
    int64_t v2 = v1;
    unsigned char v3 = (char)a4; // 0x28513e
    unsigned char v4 = *(char *)(v1 + 109); // 0x28513e
    unsigned char v5 = v3 - v4; // 0x28513e
    int64_t v6 = a4 & -0x10000 | (int64_t)v5 | 256 * (v1 + a4 / 256 + (int64_t)(v4 > v3)) & 0xff00; // 0x285141
    int32_t v7 = v1; // 0x285143
    int32_t v8 = v1; // 0x285143
    int32_t v9 = v8 + v7; // 0x285143
    if (v9 < 0 == ((v9 ^ v7) & (v9 ^ v8)) < 0 != v9 != 0) {
        int64_t result = v9; // 0x285145
        *(char *)result = (char)v9 + (char)a3;
        int32_t * v10 = (int32_t *)v6; // 0x2851c4
        *v10 = *v10 + v8;
        return result;
    }
    char * v11 = (char *)(a2 - 0x75833f01); // 0x28517e
    *v11 = *v11 + v5;
    int32_t * v12 = (int32_t *)(v2 + 0x69de013d); // 0x285187
    *v12 = *v12 | (int32_t)a3 & -0xff01;
    char * v13 = (char *)v6; // 0x28518d
    unsigned char v14 = *v13; // 0x28518d
    unsigned char v15 = v14 + (char)v2; // 0x28518d
    *v13 = v15;
    return (v2 - (v15 < v14 ? 248 : 247)) % 256 | v2 & -256;
}

// Address range: 0x2851e1 - 0x2851e4
int64_t function_2851e1(int64_t a1) {
    // 0x2851e1
    int64_t result; // 0x2851e1
    return result;
}

// Address range: 0x285222 - 0x285225
int64_t function_285222(int64_t a1) {
    // 0x285222
    int64_t result; // 0x285222
    return result;
}

// Address range: 0x285231 - 0x285233
int64_t function_285231(int64_t a1, int64_t a2, int64_t a3) {
    // 0x285231
    int64_t v1; // 0x285231
    return v1 & 0xffffffff;
}

// Address range: 0x285240 - 0x285241
int64_t function_285240(int64_t a1) {
    // 0x285240
    int64_t result; // 0x285240
    return result;
}

// Address range: 0x285299 - 0x2852b0
int64_t function_285299(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x285299
    int64_t v1; // 0x285299
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 - 8); // 0x285299
    *v3 = *v3 + (int32_t)v1;
    char * v4 = (char *)(v1 - 0x10a03bba); // 0x28529c
    *v4 = (char)(a4 / 256);
    *(int32_t *)a1 = (int32_t)v2;
    return (v2 + (int64_t)*v4 | a3 / 256) % 256 | v2 & -256;
}

// Address range: 0x285307 - 0x28530f
int64_t function_285307(void) {
    // 0x285307
    int64_t v1; // 0x285307
    bool v2; // 0x285307
    return v1 + 0xc343661f + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x285391 - 0x285392
int64_t function_285391(void) {
    // 0x285391
    int64_t result; // 0x285391
    return result;
}

// Address range: 0x2853a3 - 0x2853ab
int64_t function_2853a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2853a3
    return unknown_2f32bbaa(a1, a2, a3, a4);
}

// Address range: 0x2853bc - 0x2853bf
int64_t function_2853bc(int64_t a1) {
    // 0x2853bc
    int64_t result; // 0x2853bc
    return result;
}

// Address range: 0x2853c4 - 0x2853c9
int64_t function_2853c4(void) {
    // 0x2853c4
    return function_1cb44944();
}

// Address range: 0x285407 - 0x285427
int64_t function_285407(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_3d2a3c16(); // 0x285410
    int64_t v2; // 0x285407
    int32_t * v3 = (int32_t *)(v2 - 0x246613bd); // 0x285415
    *v3 = *v3 + (int32_t)a2;
    int64_t v4 = v1 + 0xe86dda5e; // 0x28541d
    int32_t * v5 = (int32_t *)(a4 + 49); // 0x285422
    *v5 = *v5 + (int32_t)v4;
    return v4 & 0xffffffff;
}

// Address range: 0x28544c - 0x28544d
int64_t function_28544c(void) {
    // 0x28544c
    int64_t result; // 0x28544c
    return result;
}

// Address range: 0x285484 - 0x2854c1
int64_t function_285484(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    unknown_2360b58a();
    __asm_int3();
    int64_t v2; // 0x285484
    *(int32_t *)a3 = (int32_t)(v2 | a3);
    int32_t * v3 = (int32_t *)(a3 + 0x3df8b48d); // 0x28549b
    *v3 = *v3 + (int32_t)a1;
    function_28544c();
    *(char *)v1 = *(char *)&v1 + (char)a3;
    unknown_fffffffff21e3db4();
    return unknown_ffffffffcb03e5bf();
}

// Address range: 0x28576e - 0x28576f
int64_t function_28576e(void) {
    // 0x28576e
    int64_t result; // 0x28576e
    return result;
}

// Address range: 0x2857e4 - 0x2857e9
int64_t function_2857e4(void) {
    // 0x2857e4
    return function_ffffffff873362f7();
}

// Address range: 0x285806 - 0x285809
int64_t function_285806(void) {
    // 0x285806
    int64_t result; // 0x285806
    return result;
}

// Address range: 0x28582a - 0x285832
int64_t function_28582a(void) {
    // 0x28582a
    int64_t v1; // 0x28582a
    char * v2 = (char *)(v1 - 57); // 0x28582a
    *v2 = *v2 | (char)(v1 / 256);
    return function_3e93be20();
}

// Address range: 0x285832 - 0x28583d
int64_t function_285832(int64_t a1, int64_t a2, int64_t a3) {
    // 0x285832
    int64_t result; // 0x285832
    int32_t * v1 = (int32_t *)(2 * result - 117 + result); // 0x285838
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x285856 - 0x285870
int64_t function_285856(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x285856
    int64_t v1; // 0x285856
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 - 0x17f9ec1d); // 0x28585e
    char v4 = v2 / 256; // 0x28585e
    *v3 = *v3 & v4;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    *(char *)-0x791fd092 = *(char *)-0x791fd092 + v4;
    bool v5; // 0x285856
    return v1 - (v5 ? 0x68f84bb5 : 0x68f84bb4);
}

// Address range: 0x285879 - 0x28587b
int64_t function_285879(void) {
    // 0x285879
    int64_t v1; // 0x285879
    return function_2858e9(v1, v1, v1);
}

// Address range: 0x285882 - 0x285886
int64_t function_285882(void) {
    // 0x285882
    int64_t result; // 0x285882
    return result;
}

// Address range: 0x2858b0 - 0x2858b1
int64_t function_2858b0(int64_t a1) {
    // 0x2858b0
    int64_t result; // 0x2858b0
    return result;
}

// Address range: 0x2858e9 - 0x285913
int64_t function_2858e9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2858e9
    bool v1; // 0x2858e9
    int64_t v2 = v1 ? -4 : 4; // 0x2858e9
    int64_t v3 = v2 + a1; // 0x2858e9
    int64_t v4; // 0x2858e9
    int64_t v5 = ((int32_t)v4 < (int32_t)v4 ? 0xe8fbf831 : 0xe8fbf830) + v4; // 0x2858eb
    int32_t * v6 = (int32_t *)(v5 & 0xffffffff); // 0x2858f0
    int32_t v7 = *v6; // 0x2858f0
    *v6 = 2 * v7 | (int32_t)(v7 < 0);
    int32_t * v8 = (int32_t *)(v3 + 0x6000b7e); // 0x2858f7
    *v8 = *v8 - (int32_t)v3;
    int64_t v9; // 0x2858e9
    *(char *)a3 = *(char *)&v9 | (char)v4;
    *(int32_t *)v3 = *(int32_t *)(v2 + a2);
    *(char *)(v3 + v2) = (char)v5 - 6;
    return 0xe00b3c2;
}

// Address range: 0x28593e - 0x285946
int64_t function_28593e(void) {
    // 0x28593e
    int64_t result; // 0x28593e
    int64_t v1 = result;
    bool v2; // 0x28593e
    *(int32_t *)v1 = (int32_t)v1 - 0x434bc231 + (int32_t)v2;
    return result;
}

// Address range: 0x325ebb - 0x325eca
int64_t function_325ebb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x325ebb
    *(int32_t *)0x10e5a0c6 = *(int32_t *)0x10e5a0c6 + (int32_t)a1;
    int64_t v1; // 0x325ebb
    return 2 * v1 + v1 & 0xffffffff;
}

// Address range: 0x325eff - 0x325f02
int64_t function_325eff(int64_t a1) {
    // 0x325eff
    int64_t result; // 0x325eff
    return result;
}

// Address range: 0x325fa7 - 0x325fa8
int64_t function_325fa7(int64_t a1) {
    // 0x325fa7
    int64_t result; // 0x325fa7
    return result;
}

// Address range: 0x325fcc - 0x325fe2
int64_t function_325fcc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x3f65b34b); // 0x325fd2
    *v1 = *v1 + (int32_t)a4;
    return a3 & 0xffffffff;
}

// Address range: 0x325fef - 0x325ff0
int64_t function_325fef(void) {
    // 0x325fef
    int64_t result; // 0x325fef
    return result;
}

// Address range: 0x326033 - 0x326035
int64_t function_326033(void) {
    // 0x326033
    return function_3260a8();
}

// Address range: 0x326043 - 0x326045
int64_t function_326043(void) {
    // 0x326043
    int64_t v1; // 0x326043
    return function_326064(v1, v1, v1, v1);
}

// Address range: 0x32605f - 0x326063
int64_t function_32605f(void) {
    // 0x32605f
    return function_325fef();
}

// Address range: 0x326064 - 0x326090
int64_t function_326064(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x326064
    unknown_ffffffffe834266b();
    *(int32_t *)0x105e5571 = *(int32_t *)0x105e5571 + (int32_t)a1;
    unknown_3891e476();
    int64_t v1; // 0x326064
    int32_t * v2 = (int32_t *)((v1 & 0xff00 | a4 & -0xff01) - 24); // 0x326078
    *v2 = *v2 & (int32_t)v1;
    int64_t v3; // 0x326064
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a3;
    __asm_sti();
    return __asm_wait();
}

// Address range: 0x3260a8 - 0x3260af
int64_t function_3260a8(void) {
    // 0x3260a8
    int64_t result; // 0x3260a8
    return result;
}

// Address range: 0x3260bb - 0x3260be
int64_t function_3260bb(void) {
    // 0x3260bb
    int64_t result; // 0x3260bb
    return result;
}

// Address range: 0x32610c - 0x32611c
int64_t function_32610c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32610c
    int64_t result; // 0x32610c
    int32_t * v1 = (int32_t *)(2 * a2 + 0x911934 + result); // 0x32610c
    *v1 = *v1 + (int32_t)a2;
    char * v2 = (char *)(a3 - 0x1708e5c6); // 0x326113
    *v2 = *v2 - (char)result;
    return result;
}

// Address range: 0x32611c - 0x32611d
int64_t function_32611c(int64_t a1) {
    // 0x32611c
    int64_t result; // 0x32611c
    return result;
}

// Address range: 0x3261c7 - 0x3261c8
int64_t function_3261c7(void) {
    // 0x3261c7
    int64_t result; // 0x3261c7
    return result;
}

// Address range: 0x3261e3 - 0x3261eb
int64_t function_3261e3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3261e3
    int64_t v1; // 0x3261e3
    int64_t v2 = v1;
    bool v3; // 0x3261e3
    int64_t v4 = v3 ? -1 : 1; // 0x3261e8
    return unknown_fffffffffc926610(v4 + a1, (256 * v2 & 0xff00 | v2 & 0xffff00ff) + v4);
}

// Address range: 0x3261ee - 0x3261f4
int64_t function_3261ee(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3261ee
    int64_t result; // 0x3261ee
    bool v1; // 0x3261ee
    if (v1) {
        result = function_3261c7();
    }
    // 0x3261f0
    __asm_out_136((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x326203 - 0x32620f
int64_t function_326203(int64_t a1, int64_t a2) {
    // 0x326203
    return unknown_fffffffffc926610(a1, a2);
}

// Address range: 0x326283 - 0x326286
int64_t function_326283(void) {
    // 0x326283
    int64_t result; // 0x326283
    return result;
}

// Address range: 0x3262c8 - 0x3262d3
int64_t function_3262c8(void) {
    // 0x3262c8
    return function_6c2771fe();
}

// Address range: 0x3262d8 - 0x3262df
int64_t function_3262d8(int64_t a1) {
    // 0x3262d8
    int64_t v1; // 0x3262d8
    int64_t v2 = v1;
    char v3 = *(char *)(v2 + 0x1e893596); // 0x3262d8
    bool v4; // 0x3262d8
    return v2 & -256 | (int64_t)(v3 + (char)v2 + (char)v4);
}

// Address range: 0x32635f - 0x326375
int64_t function_32635f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x2ff7efd2); // 0x326362
    int64_t v2; // 0x32635f
    *v1 = *v1 + (int32_t)v2;
    unknown_69b16372();
    return function_32637d(a1, a2, a3, a4, (int64_t)&g4);
}

// Address range: 0x326375 - 0x32637d
int64_t function_326375(void) {
    // 0x326375
    int64_t v1; // 0x326375
    int32_t * v2 = (int32_t *)(v1 + 0xe875fe53 & 0xffffffff); // 0x32637a
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x326375
    return (int64_t)&v3;
}

// Address range: 0x32637d - 0x32640d
int64_t function_32637d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3; // 0x32637d
    unsigned char v4 = *(char *)(v3 % 256 + v3); // 0x32637d
    *(int32_t *)a1 = (int32_t)(v3 & 0xffffff00 | (int64_t)v4);
    bool v5; // 0x32637d
    int64_t v6 = (v5 ? -4 : 4) + a1; // 0x32637e
    uint64_t result = unknown_ffffffff90f49388(v6); // 0x326381
    if ((int32_t)v3 != -(int32_t)result) {
        // 0x3263e2
        *(int32_t *)(v2 + 0x163a300d) = (int32_t)v3;
        return result;
    }
    unsigned char v7 = *(char *)(result + 0x1e878da) | (char)(result / 256); // 0x32638b
    char * v8 = (char *)(v6 + 0x49c0a12e); // 0x326391
    unsigned char v9 = *v8; // 0x326391
    char v10 = v9 - v7; // 0x326391
    *v8 = v10;
    if (v9 < v7 || v10 == 0) {
        int64_t v11 = (result + 199) % 256 | result & -0x10000 | 256 * (int64_t)v7; // 0x3263eb
        *(int32_t *)v11 = (int32_t)v11;
        function_f6fe();
        return function_ffffffff96546ea7();
    }
    // 0x326399
    *(int32_t *)v1 = *(int32_t *)&v1 + ((int32_t)a4 & -256 | 232);
    int64_t result2 = __asm_hlt(v6, v2); // 0x3263a0
    int32_t * v12 = (int32_t *)result2; // 0x3263a4
    int32_t v13 = *v12 + (int32_t)v1; // 0x3263a4
    *v12 = v13;
    if (v13 >= 0) {
        // 0x32640a
        return result2;
    }
    // 0x3263a8
    return (int64_t)*(int32_t *)&v2;
}

// Address range: 0x326425 - 0x32642a
int64_t function_326425(void) {
    // 0x326425
    return function_ffffffffabe85d23();
}

// Address range: 0x32645a - 0x326460
int64_t function_32645a(void) {
    // 0x32645a
    int64_t v1; // 0x32645a
    int64_t v2 = v1;
    return (v2 + 159) % 256 | v2 & -256;
}

// Address range: 0x326463 - 0x326465
int64_t function_326463(void) {
    // 0x326463
    int64_t result; // 0x326463
    return result;
}

// Address range: 0x32646d - 0x3264f7
int64_t function_32646d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x32646d
    int64_t v1; // 0x32646d
    uint64_t v2 = v1;
    if (a4 == 0) {
        // 0x3264cf
        return (int64_t)(*(int32_t *)(v2 - 12) ^ (int32_t)v1);
    }
    int64_t result = v1 & -256 | (int64_t)__asm_in_137(-99); // 0x326474
    // 0x32649a
    return result;
    uint32_t v3 = (int32_t)result; // 0x326478
    bool v4; // 0x32646d
    uint32_t v5 = v4 ? 0xfbee653 : 0xfbee652; // 0x326478
    char v6 = *(char *)(a1 + 0x1e8a135); // 0x326482
    __asm_out(37, (char)(v3 - v5));
    char v7 = v2 / 256; // 0x32648b
    *(char *)-0x5e5fbbae = *(char *)-0x5e5fbbae + v7;
    __asm_outsd((int16_t)a3, *(int32_t *)0x2301e895);
    *(char *)(a3 & -0xff01 | (int64_t)&g1) = v7;
    return 256 * (int64_t)((char)(v4 | v5 > v3) + (char)(a4 / 256) + v6) | a4 & 0xffff00ff;
}

// Address range: 0x32652f - 0x32653b
int64_t function_32652f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x32652f
    return function_fffffffffb0939ad();
}

// Address range: 0x326543 - 0x326544
int64_t function_326543(void) {
    // 0x326543
    int64_t result; // 0x326543
    return result;
}

// Address range: 0x32655d - 0x32660d
int64_t function_32655d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32655d
    int64_t v1; // 0x32655d
    uint64_t v2 = v1;
    char v3 = a3;
    bool v4; // 0x32655d
    *(char *)a3 = v3 - (char)(v2 / 256) + (char)v4;
    int64_t v5 = (int64_t)*(int32_t *)(v2 - 0x35e189ec); // 0x32655f
    int64_t v6 = 85 * v5; // 0x32655f
    int64_t v7 = v6 & 0xffffffff; // 0x32655f
    *(char *)v2 = (char)v2 + v3 + (char)(v6 != 0x5500000000 * v5 >> 32);
    int32_t * v8 = (int32_t *)(v7 - 1); // 0x326572
    int32_t v9 = *v8 + (int32_t)v2; // 0x326572
    *v8 = v9;
    if (v9 > 0) {
        // 0x3265e2
        *(int32_t *)-0x684cbb27 = *(int32_t *)-0x684cbb27 + 0x44506274;
        return unknown_3ccf5def();
    }
    int32_t * v10 = (int32_t *)(a3 - 0x4d2cabec); // 0x3265f5
    *v10 = *v10 + (int32_t)a3;
    char * v11 = (char *)(v7 + 58); // 0x3265fb
    *v11 = *v11 - 98;
    int32_t * v12 = (int32_t *)(v7 - 121); // 0x326600
    *v12 = *v12 - 0x17174dd8;
    return unknown_ffffffff9881ec0e(0xe8e8b228);
}

// Address range: 0x326665 - 0x326674
int64_t function_326665(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x326665
    bool v1; // 0x326665
    return unknown_3aa0c571((v1 ? -4 : 4) + a1);
}

// Address range: 0x326674 - 0x326679
int64_t function_326674(void) {
    // 0x326674
    return function_3035324b();
}

// Address range: 0x3266c2 - 0x3266c7
int64_t function_3266c2(void) {
    // 0x3266c2
    return function_21ace81();
}

// Address range: 0x3266e5 - 0x3266e6
int64_t function_3266e5(void) {
    // 0x3266e5
    int64_t result; // 0x3266e5
    return result;
}

// Address range: 0x32672c - 0x326744
int64_t function_32672c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x32672c
    unknown_ffffffffd85f6932();
    bool v1; // 0x32672c
    int64_t result = unknown_ffffffff84edff43((v1 ? -1 : 1) + a1); // 0x32673d
    __asm_out_134((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x326755 - 0x326756
int64_t function_326755(void) {
    // 0x326755
    int64_t result; // 0x326755
    return result;
}

// Address range: 0x326761 - 0x326765
int64_t function_326761(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x326761
    *(char *)a3 = (char)a4;
    return function_3266e5();
}

// Address range: 0x326777 - 0x32677a
int64_t function_326777(int64_t a1) {
    // 0x326777
    int64_t result; // 0x326777
    return result;
}

// Address range: 0x326787 - 0x326796
int64_t function_326787(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x326787
    int64_t result; // 0x326787
    // 0x326789
    int64_t v1; // 0x326787
    __asm_fldenv(*(int224_t *)&v1);
    *(int32_t *)a2 = (int32_t)(result | a2);
    int64_t v2; // 0x326787
    char * v3 = (char *)(v2 - 61); // 0x32678e
    *v3 = *v3 + (char)(result / 256);
    return result;
}

// Address range: 0x326799 - 0x3267c2
int64_t function_326799(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x326799
    *(char *)a4 = 35;
    char v1 = *(char *)0x31bc5ea3; // 0x32679c
    int64_t v2; // 0x326799
    *(char *)0x31bc5ea3 = v1 + (char)((uint64_t)v2 / 256);
    bool v3; // 0x326799
    return function_21ab649((v3 ? -4 : 4) + a1);
}

// Address range: 0x3267c2 - 0x326825
int64_t function_3267c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3267c2
    int64_t v1; // 0x3267c2
    int64_t v2 = v1;
    int64_t v3 = ((v2 + 138) % 256 | v2 & 0xffffff00) + v1; // 0x3267ce
    uint32_t v4 = *(int32_t *)0x172a35a0; // 0x3267d0
    uint32_t v5 = v4 + (int32_t)v1; // 0x3267d0
    *(int32_t *)0x172a35a0 = v5;
    if (v5 < v4 || v5 == 0) {
        // 0x326815
        return v3 & 0xffffffff;
    }
    // 0x3267d4
    *(int32_t *)a1 = (int32_t)a2;
    bool v6; // 0x3267c2
    int64_t v7 = v6 ? -4 : 4; // 0x3267d8
    int64_t v8 = v7 + a1; // 0x3267d8
    unknown_677c0de0(v8 + (v6 ? -1 : 1), v7 + a2, 0x172a35a0);
    if (*(char *)v8 == (char)v3) {
        // 0x32681b
        return unknown_ffffffffbe346824();
    }
    // 0x3267e1
    return function_ffffffffe8b4e4f1();
}

// Address range: 0x3268eb - 0x3268ec
int64_t function_3268eb(int64_t a1) {
    // 0x3268eb
    int64_t result; // 0x3268eb
    return result;
}

// Address range: 0x326901 - 0x326918
int64_t function_326901(int64_t a1, int64_t a2, int64_t a3) {
    // 0x326901
    int64_t v1; // 0x326901
    bool v2; // 0x326901
    return v1 + 0xf644c4b2 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x32694a - 0x32694f
int64_t function_32694a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x32694a
    int64_t result; // 0x32694a
    return result;
}

// Address range: 0x326973 - 0x326974
int64_t function_326973(void) {
    // 0x326973
    int64_t result; // 0x326973
    return result;
}

// Address range: 0x326989 - 0x3269b2
int64_t function_326989(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 16); // 0x32698b
    int64_t v2; // 0x326989
    *v1 = *v1 + (int32_t)v2;
    int32_t * v3 = (int32_t *)(unknown_ffffffff9033a694() + 0x15ac360b); // 0x326993
    *v3 = *v3 + (int32_t)v2;
    int64_t v4 = unknown_38823a1(); // 0x32699b
    int32_t * v5 = (int32_t *)(v2 + 118); // 0x3269a5
    *v5 = *v5 & (int32_t)v4;
    int64_t result = unknown_37bf29ae(); // 0x3269a8
    *(int32_t *)a1 = __asm_insd(-2439);
    return result;
}

// Address range: 0x3269b2 - 0x3269db
int64_t function_3269b2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3269b2
    int64_t v1; // 0x3269b2
    int64_t result = (int64_t)&v1; // 0x3269b2
    int64_t v2 = result; // bp-8, 0x3269b2
    unknown_7c3d41b9();
    int64_t v3; // 0x3269b2
    char * v4 = (char *)(8 * v3 + (int64_t)&v2); // 0x3269b8
    *v4 = *v4 | 64;
    uint64_t v5 = unknown_ffffffffce3b52c2(); // 0x3269bc
    int64_t v6 = v5 / 2 % 128 | v5 & -256; // 0x3269c8
    int32_t * v7 = (int32_t *)(8 * v6 + a3); // 0x3269ca
    *v7 = *v7 + (int32_t)v6;
    int64_t v8; // 0x3269b2
    *(int32_t *)a3 = *(int32_t *)&v8 + (int32_t)v3;
    return result;
}

// Address range: 0x3269dc - 0x3269e4
int64_t function_3269dc(void) {
    // 0x3269dc
    int64_t v1; // 0x3269dc
    __asm_hlt(v1, v1);
    return unknown_3abc80e5();
}

// Address range: 0x3269ee - 0x3269f1
int64_t function_3269ee(int64_t a1) {
    // 0x3269ee
    int64_t result; // 0x3269ee
    return result;
}

// Address range: 0x3269fe - 0x326a08
int64_t function_3269fe(void) {
    int64_t result = unknown_7d936a04(); // 0x3269fe
    __asm_out(20, (char)result);
    return result;
}

// Address range: 0x326a08 - 0x326b6b
int64_t function_326a08(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x326a08
    bool v1; // 0x326a08
    int64_t v2 = v1 ? -4 : 4; // 0x326a08
    int64_t v3 = v2 + a1; // 0x326a08
    int64_t v4 = v2 + a2; // 0x326a08
    int64_t v5; // 0x326a08
    char v6 = *(char *)(v5 + 40) | (char)a4; // 0x326a10
    char v7 = v5; // 0x326a13
    char v8 = v6 + v7; // 0x326a13
    int64_t v9 = unknown_64b74f1c(v3, v4); // 0x326a15
    if (v8 < 0 != ((v8 ^ v6) & (v8 ^ v7)) < 0) {
        int64_t v10 = v5 & 0xffffffff; // 0x326a0f
        int64_t v11 = v9 + 0xe84cc039; // 0x326a1d
        int64_t v12 = v11 & 0xffffffff; // 0x326a1d
        int32_t * v13 = (int32_t *)v12; // 0x326a22
        int32_t v14 = a3; // 0x326a22
        *v13 = *v13 + v14;
        *(int64_t *)(v10 - 8) = v12;
        *(int64_t *)(v10 - 16) = v4;
        int64_t v15 = v12 ^ 118; // 0x326a2b
        int32_t * v16 = (int32_t *)v15; // 0x326a2d
        *v16 = *v16 + v14;
        char * v17 = (char *)(v15 + 76); // 0x326a2f
        *v17 = *v17 | -75;
        return (v15 + 119) % 256 | v11 & 0xffffff00;
    }
    int64_t v18 = v5 + 8 & 0xffffffff; // 0x326a8d
    int64_t * v19 = (int64_t *)(v18 - 8); // 0x326a93
    int64_t * v20 = (int64_t *)v18; // 0x326a9e
    *v20 = 0x3231a7;
    int64_t v21 = v18 - 16; // 0x326aa9
    int64_t * v22 = (int64_t *)v21; // 0x326ab9
    *v22 = v9;
    *v19 = 0x45356e9;
    int64_t * v23 = (int64_t *)(v18 - 24); // 0x326ace
    int64_t v24 = *(int64_t *)(v18 + 24); // 0x326add
    *v22 = v24;
    *v23 = v24;
    int64_t * v25 = (int64_t *)(v18 - 32); // 0x326ae4
    *v25 = v24;
    int64_t v26 = *(int64_t *)(v18 + 8); // 0x326af0
    *v25 = v26;
    *v22 = v3;
    *v23 = v21;
    *v20 = v24;
    *v22 = 0x7c52284f;
    *v23 = v26;
    *(int64_t *)(v18 + 16) = *v22;
    *v22 = v18;
    *v22 = *v19;
    return function_caf2a(*v22);
}

// Address range: 0x326b78 - 0x326b81
int64_t function_326b78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x326b78
    int64_t v1; // 0x326b78
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 127); // 0x326b7c
    *v3 = *v3 + (char)a4;
    while (true) {
        // continue -> 0x326b7f
    }
}

// Address range: 0x326b81 - 0x326b87
int64_t function_326b81(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x326b81
    int64_t result; // 0x326b81
    return result;
}

// Address range: 0x326b88 - 0x326b8b
int64_t function_326b88(void) {
    // 0x326b88
    int64_t result; // 0x326b88
    return result;
}

// Address range: 0x326b99 - 0x326b9a
int64_t function_326b99(int64_t a1) {
    // 0x326b99
    int64_t result; // 0x326b99
    return result;
}

// Address range: 0x326b9e - 0x326ba0
int64_t function_326b9e(void) {
    // 0x326b9e
    return function_326ba7((int64_t)&g4, (int64_t)&g4);
}

// Address range: 0x326ba0 - 0x326ba7
int64_t function_326ba0(void) {
    // 0x326ba0
    int64_t result; // 0x326ba0
    return result;
}

// Address range: 0x326ba7 - 0x326bbb
int64_t function_326ba7(int64_t a1, int64_t a2) {
    // 0x326ba7
    int64_t result; // 0x326ba7
    return result;
}

// Address range: 0x404cd1 - 0x404d1e
int64_t function_404cd1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x404cd1
    int64_t v1; // 0x404cd1
    int64_t v2 = v1;
    bool v3; // 0x404cd1
    *(char *)v2 = 2 * (char)v2 | (char)v3;
    *(char *)(a1 + 0x5ed90530) = (char)(a4 / 256);
    int64_t v4 = v2 & 0xffffffcd | 0x100000000 * a3; // 0x404cdb
    int64_t v5 = (int64_t)*(int32_t *)0x51948d94; // 0x404cdb
    int64_t v6 = v4 / v5; // 0x404cdb
    int64_t v7 = v4 % v5; // 0x404cdb
    int64_t v8; // 0x404cd1
    unsigned char v9 = *(char *)&v8; // 0x404ce2
    int64_t v10; // 0x404cd1
    unsigned char v11 = *(char *)&v10; // 0x404ce2
    int64_t v12 = v3 ? -1 : 1; // 0x404ce2
    int64_t v13 = v12 + a1; // 0x404ce2
    int64_t v14 = v12 + a2; // 0x404ce2
    v10 = v13;
    v8 = v14;
    unsigned char v15 = (char)(v6 / 256); // 0x404ce3
    unsigned char v16 = v15 + (char)v7; // 0x404ce3
    unsigned char v17 = v16 + (char)(v9 < v11); // 0x404ce3
    int64_t v18 = 256 * (int64_t)v17 | v6 & 0xffff00ff; // 0x404ce5
    if (v9 < v11 ? v17 <= v15 : v16 < v15) {
        v18 = function_404c8b();
    }
    // 0x404ce7
    __asm_out(112, (char)v18);
    int64_t v19; // 0x404cd1
    *(int32_t *)v19 = *(int32_t *)&v19 & (int32_t)v14;
    char v20 = *(char *)-0x10bf5ee6; // 0x404cf0
    *(char *)-0x10bf5ee6 = v20 + (char)(v18 / 256);
    int16_t v21 = v7; // 0x404cf6
    unsigned char v22 = llvm_ctpop_i8(__asm_in(v21) | -97); // 0x404cf7
    int32_t v23 = __asm_in_133(45); // 0x404cfa
    int64_t result = v23; // 0x404cfc
    if (v22 % 2 == 0) {
        int64_t v24 = a4 & -256 | (int64_t)(*(char *)(v13 - 75) ^ (char)a4); // 0x404ce7
        char * v25 = (char *)((v7 & 0xffffffff) - 127); // 0x404cfe
        unsigned char v26 = *v25; // 0x404cfe
        char v27 = v26 / 128; // 0x404cfe
        *v25 = v27 | 2 * v26;
        *(char *)v10 = __asm_insb(v21);
        __asm_outsb(v21, *(char *)v8);
        uint32_t v28 = (0x10000 * v23 >> 16) - (v27 == 0 ? 0x64db4b8e : 0x64db4b8d) - (int32_t)v24; // 0x404d0f
        *(int32_t *)(v24 + 0x7d858d74) = -0x52ce4cbf;
        int64_t v29; // 0x404cd1
        __asm_out_134(v21 + (int16_t)(int64_t)&v29, (char)v28);
        result = v28;
    }
    // 0x404d1b
    return result;
}

// Address range: 0x404d6b - 0x404d72
int64_t function_404d6b(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x404d6b
    int64_t v1; // 0x404d6b
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 - (char)(a3 / 256);
    return function_ffffffffecf264fd();
}

// Address range: 0x404dc2 - 0x404dc7
int64_t function_404dc2(void) {
    // 0x404dc2
    return function_7315e90b();
}

// Address range: 0x404dd9 - 0x404ddc
int64_t function_404dd9(int64_t a1) {
    // 0x404dd9
    int64_t result; // 0x404dd9
    return result;
}

// Address range: 0x404ddd - 0x404dde
int64_t function_404ddd(void) {
    // 0x404ddd
    int64_t result; // 0x404ddd
    return result;
}

// Address range: 0x404e03 - 0x404e36
int64_t function_404e03(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x404e03
    int32_t * v3 = (int32_t *)(v2 - 110); // 0x404e0a
    int32_t v4 = *v3 | (int32_t)a2; // 0x404e0a
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x404e0a
    *v3 = v4;
    if (v5 % 2 != 0) {
        // 0x404e0f
        return __asm_int1();
    }
    int64_t v6; // 0x404e03
    if ((char)((v2 ^ v2) / 256) >= 0) {
        v6 = function_404ddd();
    }
    int64_t v7 = v2 & 0xff00 ^ v2; // 0x404e17
    char * v8 = (char *)(v7 - 49); // 0x404e1b
    char v9 = a3; // 0x404e1b
    *v8 = *v8 + v9;
    unsigned char v10 = *(char *)&v1; // 0x404e1e
    int64_t v11; // 0x404e03
    char v12 = *(char *)&v11; // 0x404e20
    char * v13 = (char *)(v7 + 59); // 0x404e28
    *v13 = (char)(v10 > -1 - v9) - v12 + (char)v1 + *v13;
    return v6 + 12 & 19;
}

// Address range: 0x404e69 - 0x404e6e
int64_t function_404e69(void) {
    // 0x404e69
    return function_ffffffffa5ffb19c();
}

// Address range: 0x404ea3 - 0x404f1b
int64_t function_404ea3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x404ea3
    int64_t result; // 0x404ea3
    bool v1; // 0x404ea3
    if (v1 || v1) {
        // 0x404ea5
        return result;
    }
    // 0x404f15
    __writegsbyte(a1, __readgsbyte(a1) & (char)((uint64_t)result / 256));
    return result;
}

// Address range: 0x404f2c - 0x404f61
int64_t function_404f2c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x404f2c
    int64_t v1; // 0x404f2c
    char * v2 = (char *)(v1 + 22); // 0x404f2c
    unsigned char v3 = *v2; // 0x404f2c
    unsigned char v4 = v3 + (char)(a4 / 256); // 0x404f2c
    *v2 = v4;
    int32_t * v5 = (int32_t *)(a4 - 112); // 0x404f2f
    *v5 = *v5 - (int32_t)v1 + (int32_t)(v4 < v3);
    int64_t result; // 0x404f2c
    *(int32_t *)result = *(int32_t *)&result ^ (int32_t)v1;
    return result;
}

// Address range: 0x404f75 - 0x404f76
int64_t function_404f75(int64_t a1) {
    // 0x404f75
    int64_t result; // 0x404f75
    return result;
}

// Address range: 0x404fa0 - 0x404fa3
int64_t function_404fa0(int64_t a1) {
    // 0x404fa0
    int64_t result; // 0x404fa0
    return result;
}

// Address range: 0x405032 - 0x405044
int64_t function_405032(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405032
    int64_t v1; // 0x405032
    *(int32_t *)a3 = -6 * (int32_t)v1 + (int32_t)v1;
    char v2 = __asm_in_137(-86); // 0x40503c
    return (v1 | (int64_t)v2) & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x40505a - 0x40505b
int64_t function_40505a(int64_t a1) {
    // 0x40505a
    int64_t result; // 0x40505a
    return result;
}
