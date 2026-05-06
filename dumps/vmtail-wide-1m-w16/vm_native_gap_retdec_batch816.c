/*
 * Targeted RetDec C for native executable gap queue batch 816.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3949e1-0x394be1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x394be1-0x394de1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x394de1-0x394fe1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x394fe1-0x3951e1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3951e1-0x3953e1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d0bff-0x3d0cff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d0eff-0x3d10ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d12ff-0x3d14ff rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
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

int64_t function_17a10de();
int64_t function_3949e1(void);
int64_t function_394a35(void);
int64_t function_394a60(void);
int64_t function_394a87(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_394afc(void);
int64_t function_394b44(void);
int64_t function_394b4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6);
int64_t function_394b99(int64_t a1, int64_t a2, int64_t a3);
int64_t function_394bc5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_394c38(void);
int64_t function_394c83(void);
int64_t function_394cb3(void);
int64_t function_394cbd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_394ce4(int64_t a1);
int64_t function_394de8(void);
int64_t function_394e2d(void);
int64_t function_394e3b(void);
int64_t function_394ee7(void);
int64_t function_394f29(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_394f70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_394fd6(int64_t a1);
int64_t function_3950ad(void);
int64_t function_3950d5(void);
int64_t function_3950fb(void);
int64_t function_39510d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_395175(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_39538d(void);
int64_t function_39538e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d0bbf();
int64_t function_3d0bfe();
int64_t function_3d0bff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d0c48(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d0c59(int64_t a1);
int64_t function_3d0c62(int64_t a1);
int64_t function_3d0c82(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d0ca4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d0eff(void);
int64_t function_3d0f2f(void);
int64_t function_3d0f39(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d0fa4(int64_t a1);
int64_t function_3d0fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d0feb(int64_t a1);
int64_t function_3d1001(void);
int64_t function_3d106e(int64_t a1, int64_t a2);
int64_t function_3d10c0(void);
int64_t function_3d10e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d12ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d132d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3d14b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_47a04ef5();
int64_t function_5edc73c();
int64_t function_c823b();
int64_t function_cf3c7();
int64_t function_ffffffffd1fa1070();
int64_t function_ffffffffe23ef4ed();
int64_t unknown_29d544c9();
int64_t unknown_3a5862c7();
int64_t unknown_3ac4df86();
int64_t unknown_3b39d7ea();
int64_t unknown_523f3933();
int64_t unknown_55dfeb7e();
int64_t unknown_628c1e9a();
int64_t unknown_63ff19b();
int64_t unknown_65fd7ef3();
int64_t unknown_686838ad();
int64_t unknown_78977cfe();
int64_t unknown_7df14d33();
int64_t unknown_bb5fb4b();
int64_t unknown_ed04760();
int64_t unknown_ffffffff869282dd();
int64_t unknown_ffffffff91845668();
int64_t unknown_ffffffff9d8f7fd2();
int64_t unknown_ffffffffa03b33e4();
int64_t unknown_ffffffffc439f478();
int64_t unknown_ffffffffd443ec92();
int64_t unknown_ffffffffe89c2a69();
int64_t unknown_ffffffffea9f8e66();
int64_t unknown_ffffffffeae14428();

// Address range: 0x3949e1 - 0x3949e2
int64_t function_3949e1(void) {
    // 0x3949e1
    int64_t v1; // 0x3949e1
    return v1 & 0xffffffff;
}

// Address range: 0x394a35 - 0x394a36
int64_t function_394a35(void) {
    // 0x394a35
    int64_t result; // 0x394a35
    return result;
}

// Address range: 0x394a60 - 0x394a69
int64_t function_394a60(void) {
    // 0x394a60
    unknown_ffffffffea9f8e66();
    int64_t v1; // 0x394a60
    return v1 & 0xffffffff;
}

// Address range: 0x394a87 - 0x394aed
int64_t function_394a87(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffd443ec92(); // 0x394a8c
    int64_t v2; // 0x394a87
    if ((int32_t)v2 >= 0x6e61ac46) {
        // 0x394a93
        *(int32_t *)v1 = (int32_t)v1;
        unknown_63ff19b();
        return function_394a35();
    }
    int64_t v3 = ((a5 & (int64_t)&g1) != 0 ? -1 : 1) + a1; // 0x394ad4
    int64_t v4 = v1 + 1; // 0x394ad5
    *(int32_t *)v3 = (int32_t)v4;
    int64_t v5 = v3 + ((a5 & (int64_t)&g1) != 0 ? -4 : 4); // 0x394ad7
    int64_t v6 = (v4 + a4) % 256 | v4 & 0xffffff00; // 0x394ad8
    *(int32_t *)0x743ae45a = *(int32_t *)0x743ae45a + (int32_t)v5;
    *(int32_t *)v6 = (int32_t)v6;
    return unknown_ffffffffa03b33e4(v5);
}

// Address range: 0x394afc - 0x394afd
int64_t function_394afc(void) {
    // 0x394afc
    int64_t result; // 0x394afc
    return result;
}

// Address range: 0x394b44 - 0x394b45
int64_t function_394b44(void) {
    // 0x394b44
    int64_t result; // 0x394b44
    return result;
}

// Address range: 0x394b4a - 0x394b98
int64_t function_394b4a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6) {
    // 0x394b4a
    int64_t v1; // 0x394b4a
    uint64_t result = v1;
    int32_t * v2 = (int32_t *)(a4 - 0x10fe17a0); // 0x394b50
    *v2 = *v2 + (int32_t)v1;
    if (a4 != 0) {
        // 0x394b59
        return result;
    }
    // 0x394b5b
    if ((char)(result / 256 || result - (a6 % 2 == 0 ? 235 : 236)) < 1) {
        function_394afc();
    }
    // 0x394b62
    unknown_ffffffff91845668();
    *(char *)-0x25b90667 = *(char *)-0x25b90667 + (char)a3;
    unknown_3ac4df86();
    *(int32_t *)&g4 = *(int32_t *)&g4 + (int32_t)a3;
    return a2 & 0xffffffff & a3;
}

// Address range: 0x394b99 - 0x394ba5
int64_t function_394b99(int64_t a1, int64_t a2, int64_t a3) {
    // 0x394b99
    int64_t v1; // 0x394b99
    *(char *)a2 = (char)(v1 / 256 | v1);
    char * v2 = (char *)(v1 - 0x5d07fe18); // 0x394b9c
    *v2 = *v2 ^ (char)v1;
    return function_394b44();
}

// Address range: 0x394bc5 - 0x394c05
int64_t function_394bc5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char v1 = *(char *)0x13ddfbaf9c7f2d8; // 0x394bc5
    char * v2 = (char *)(a2 - 0x7f7ee63e); // 0x394bd1
    *v2 = *v2 + (char)a4;
    uint32_t v3 = (int32_t)a4 & -119; // 0x394bdd
    int32_t v4 = v3 - 0x13d00b3; // 0x394bdd
    __asm_out_133((int16_t)a3, v4);
    unsigned char v5 = v1 + (char)(v3 < 0x13d00b3) - (char)(a3 / 256); // 0x394be3
    unsigned char v6 = (char)v4; // 0x394be5
    int64_t v7 = (int64_t)(v6 + 127) | (int64_t)(v4 & -256); // 0x394be5
    char * v8 = (char *)(v7 - 69); // 0x394be9
    unsigned char v9 = *v8; // 0x394be9
    unsigned char v10 = v5 % 32; // 0x394be9
    bool v11 = v6 < 129; // 0x394be9
    if (v10 != 0) {
        unsigned char v12 = v10 - 1; // 0x394be9
        *v8 = v9 << v10 | (char)(v6 < 129) << v12 | (char)((int16_t)v9 >> (int16_t)(9 - v10));
        v11 = (v9 & 128 >> v12) != 0;
    }
    // 0x394bef
    int64_t v13; // 0x394bc5
    int64_t v14 = (!v11 ? 8 : 16) + v13;
    *(int32_t *)((v7 ^ 196) + 2) = (int32_t)a1;
    int64_t v15 = v14 - 8; // 0x394bfc
    *(int64_t *)v15 = v14;
    int64_t v16 = v15 + (v13 & 0xffffff00 | (int64_t)v5) & 0xffffffff; // 0x394bfd
    *(int64_t *)(v16 - 8) = v16;
    return a1 & 0xffffffff;
}

// Address range: 0x394c38 - 0x394c3a
int64_t function_394c38(void) {
    // 0x394c38
    int64_t result; // 0x394c38
    return result;
}

// Address range: 0x394c83 - 0x394c88
int64_t function_394c83(void) {
    // 0x394c83
    return function_5edc73c();
}

// Address range: 0x394cb3 - 0x394cb5
int64_t function_394cb3(void) {
    // 0x394cb3
    int64_t result; // 0x394cb3
    return result;
}

// Address range: 0x394cbd - 0x394cd6
int64_t function_394cbd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_3a5862c7(); // 0x394cc1
    *(char *)(a1 + 87 + v1) = (char)((int64_t)&g3 >> 8);
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v2; // 0x394cbd
    int64_t result = v2 & 0xffffffff; // 0x394ccd
    int32_t * v3 = (int32_t *)(result + 0x450cc80a); // 0x394ccf
    *v3 = 2 * (int32_t)v2 + *v3;
    return result;
}

// Address range: 0x394ce4 - 0x394ce5
int64_t function_394ce4(int64_t a1) {
    // 0x394ce4
    int64_t result; // 0x394ce4
    return result;
}

// Address range: 0x394de8 - 0x394de9
int64_t function_394de8(void) {
    // 0x394de8
    int64_t result; // 0x394de8
    return result;
}

// Address range: 0x394e2d - 0x394e2e
int64_t function_394e2d(void) {
    // 0x394e2d
    int64_t result; // 0x394e2d
    return result;
}

// Address range: 0x394e3b - 0x394e3d
int64_t function_394e3b(void) {
    // 0x394e3b
    return function_394de8();
}

// Address range: 0x394ee7 - 0x394ee8
int64_t function_394ee7(void) {
    // 0x394ee7
    int64_t result; // 0x394ee7
    return result;
}

// Address range: 0x394f29 - 0x394f70
int64_t function_394f29(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x394f29
    bool v1; // 0x394f29
    if (a4 != 1 && !v1) {
        function_394ee7();
    }
    // 0x394f2b
    *(int32_t *)a1 = (int32_t)a2;
    int64_t v2 = v1 ? -4 : 4; // 0x394f2b
    int64_t v3 = v2 + a2; // 0x394f2b
    int64_t v4 = unknown_7df14d33(v2 + a1 + (v1 ? -1 : 1), v3) & 0xffffffff; // 0x394f35
    int32_t * v5 = (int32_t *)(a4 + 0x2808f74c); // 0x394f39
    *v5 = *v5 + (int32_t)a3;
    *(char *)-0x27706272 = *(char *)-0x27706272 + (char)a3;
    unknown_bb5fb4b(v4);
    int64_t v6 = v4 + v2; // 0x394f4c
    *(char *)v6 = __asm_insb((int16_t)a3);
    char * v7 = (char *)(v2 + 105 + v3); // 0x394f54
    int64_t v8; // 0x394f29
    *v7 = *v7 | (char)((uint64_t)v8 / 256);
    int64_t result = v6 + 0x6d0d01e8 & 0xffffffff; // 0x394f64
    char * v9 = (char *)result; // 0x394f6c
    *v9 = *v9 - 30;
    return result;
}

// Address range: 0x394f70 - 0x394fa0
int64_t function_394f70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_ffffffffc439f478(); // 0x394f72
    char * v2 = (char *)(a1 + 110); // 0x394f77
    *v2 = *v2 + (char)a4;
    int64_t v3 = v1 & 98 | 157; // 0x394f7d
    int64_t v4; // 0x394f70
    *(char *)a6 = *(char *)&v4 | (char)v3;
    int32_t * v5 = (int32_t *)(a4 + 0x7809a3aa); // 0x394f86
    *v5 = 4 * *v5;
    *(int64_t *)a1 = 2 * (v3 | v1 & 0x7fffff00);
    int64_t v6 = unknown_628c1e9a(a1 + 8); // 0x394f94
    int64_t result = (v6 + 147) % 256 | v6 & -256; // 0x394f99
    *(int32_t *)result = (int32_t)result;
    return result;
}

// Address range: 0x394fd6 - 0x394fd7
int64_t function_394fd6(int64_t a1) {
    // 0x394fd6
    int64_t result; // 0x394fd6
    return result;
}

// Address range: 0x3950ad - 0x3950bb
int64_t function_3950ad(void) {
    // 0x3950ad
    return function_47a04ef5();
}

// Address range: 0x3950d5 - 0x3950d6
int64_t function_3950d5(void) {
    // 0x3950d5
    int64_t result; // 0x3950d5
    return result;
}

// Address range: 0x3950fb - 0x3950fd
int64_t function_3950fb(void) {
    // 0x3950fb
    return function_3950d5();
}

// Address range: 0x39510d - 0x395149
int64_t function_39510d(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 0x650b0dbd); // 0x39510d
    int64_t v2; // 0x39510d
    *v1 = *v1 + (int32_t)v2;
    __asm_hlt();
    *(char *)a1 = __asm_insb((int16_t)a3);
    unknown_ffffffffeae14428();
    int64_t v3 = unknown_523f3933(); // 0x39512d
    uint64_t v4 = v3 + 122; // 0x395132
    while ((char)v4 >= 166) {
        // 0x395121
        unknown_ffffffffeae14428();
        v3 = unknown_523f3933();
        v4 = v3 + 122;
    }
    int64_t result = v4 % 256 | v3 & -256; // 0x395132
    int32_t * v5 = (int32_t *)(a1 + 1); // 0x39513b
    *v5 = *v5 + (int32_t)result;
    return result;
}

// Address range: 0x395175 - 0x3952f1
int64_t function_395175(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x395175
    bool v1; // 0x395175
    int64_t v2 = unknown_55dfeb7e((v1 ? -1 : 1) + a1); // 0x395178
    char * v3 = (char *)(v2 - 0x3f6bf100); // 0x39517e
    *v3 = *v3 + (char)v2;
    return function_cf3c7();
}

// Address range: 0x39538d - 0x39538e
int64_t function_39538d(void) {
    // 0x39538d
    int64_t result; // 0x39538d
    return result;
}

// Address range: 0x39538e - 0x395392
int64_t function_39538e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39538e
    int64_t result; // 0x39538e
    char * v1 = (char *)(result - 127); // 0x39538e
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x3d0bff - 0x3d0c0c
int64_t function_3d0bff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d0bff
    int64_t v1; // 0x3d0bff
    __asm_out((int16_t)a3, (char)v1);
    int64_t v2; // 0x3d0bff
    bool v3; // 0x3d0bff
    if (v3) {
        v2 = function_3d0bfe();
    }
    int64_t v4 = a4 - 1; // 0x3d0c02
    int64_t result = v2; // 0x3d0c02
    if (v4 != 0 == v3) {
        result = function_3d0bbf();
    }
    char * v5 = (char *)v4; // 0x3d0c09
    *v5 = *v5 + (char)result;
    return result;
}

// Address range: 0x3d0c48 - 0x3d0c56
int64_t function_3d0c48(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d0c48
    int64_t v1; // 0x3d0c48
    return v1 & 0xffffff7e;
}

// Address range: 0x3d0c59 - 0x3d0c62
int64_t function_3d0c59(int64_t a1) {
    int64_t v1 = unknown_ed04760(a1); // 0x3d0c5a
    return (v1 + 114) % 256 | v1 & -256;
}

// Address range: 0x3d0c62 - 0x3d0c73
int64_t function_3d0c62(int64_t a1) {
    int64_t result = unknown_ffffffffe89c2a69(a1); // 0x3d0c62
    int32_t * v1 = (int32_t *)(a1 + 108); // 0x3d0c68
    int64_t v2; // 0x3d0c62
    *v1 = *v1 + (int32_t)v2;
    return result;
}

// Address range: 0x3d0c82 - 0x3d0c98
int64_t function_3d0c82(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d0c82
    int64_t v1; // 0x3d0c82
    char * v2 = (char *)(v1 + 0x16bab3df + 4 * v1); // 0x3d0c84
    *v2 = *v2 - (char)a4;
    return function_ffffffffe23ef4ed();
}

// Address range: 0x3d0ca4 - 0x3d0cf2
int64_t function_3d0ca4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d0ca4
    unknown_29d544c9();
    *(char *)a1 = (char)unknown_ffffffff9d8f7fd2();
    bool v1; // 0x3d0ca4
    unknown_ffffffff869282dd((v1 ? -1 : 1) + a1);
    unknown_3b39d7ea();
    __asm_sti();
    return unknown_65fd7ef3();
}

// Address range: 0x3d0eff - 0x3d0f05
int64_t function_3d0eff(void) {
    // 0x3d0eff
    int64_t result; // 0x3d0eff
    int32_t * v1 = (int32_t *)(result + 0x20001c00); // 0x3d0eff
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3d0f2f - 0x3d0f30
int64_t function_3d0f2f(void) {
    // 0x3d0f2f
    int64_t result; // 0x3d0f2f
    return result;
}

// Address range: 0x3d0f39 - 0x3d0f4d
int64_t function_3d0f39(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d0f39
    int64_t v1; // 0x3d0f39
    *(char *)-0x64f71bfe17a152c6 = (char)v1;
    return function_ffffffffd1fa1070();
}

// Address range: 0x3d0fa4 - 0x3d0fad
int64_t function_3d0fa4(int64_t a1) {
    // 0x3d0fa4
    int64_t v1; // 0x3d0fa4
    *(char *)a1 = (char)v1;
    bool v2; // 0x3d0fa4
    if (v2 || v2) {
        function_3d0f2f();
    }
    // 0x3d0fa7
    return unknown_686838ad();
}

// Address range: 0x3d0fe0 - 0x3d0feb
int64_t function_3d0fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d0fe0
    int64_t v1; // 0x3d0fe0
    return v1 + 0x7801e89e & 0xffffffff;
}

// Address range: 0x3d0feb - 0x3d0fef
int64_t function_3d0feb(int64_t a1) {
    // 0x3d0feb
    return function_3d0feb((int64_t)&g5);
}

// Address range: 0x3d1001 - 0x3d1004
int64_t function_3d1001(void) {
    // 0x3d1001
    int64_t result; // 0x3d1001
    return result;
}

// Address range: 0x3d106e - 0x3d1074
int64_t function_3d106e(int64_t a1, int64_t a2) {
    // 0x3d106e
    return function_17a10de();
}

// Address range: 0x3d10c0 - 0x3d10c3
int64_t function_3d10c0(void) {
    // 0x3d10c0
    int64_t result; // 0x3d10c0
    return result;
}

// Address range: 0x3d10e2 - 0x3d10ff
int64_t function_3d10e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = a4 - 1; // 0x3d10e2
    bool v2; // 0x3d10e2
    if (v1 == 0 || v2) {
        char * v3 = (char *)(a4 + 0x64b86dd7); // 0x3d10f2
        *v3 = *v3 & (char)(v1 / 256);
        return unknown_78977cfe();
    }
    // 0x3d115e
    int64_t result; // 0x3d10e2
    return result;
}

// Address range: 0x3d12ff - 0x3d1318
int64_t function_3d12ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)-0x178fbabc; // 0x3d12ff
    *(char *)-0x178fbabc = v1 / 128 | 2 * v1;
    *(char *)0x415ee87 = *(char *)0x415ee87 | -93;
    return 0;
}

// Address range: 0x3d132d - 0x3d1471
int64_t function_3d132d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3d132d
    int64_t v1; // 0x3d132d
    int32_t * v2 = (int32_t *)(v1 + 0x210200e4); // 0x3d132f
    *v2 = *v2 + (int32_t)a4;
    char * v3 = (char *)(a5 - 0x7cb76400); // 0x3d133e
    *v3 = *v3 + (char)(v1 + a3);
    char v4 = __asm_in((int16_t)a3); // 0x3d1346
    char * v5 = (char *)(a4 + 87); // 0x3d1347
    *v5 = *v5 | v4;
    return function_c823b();
}

// Address range: 0x3d14b2 - 0x3d14c2
int64_t function_3d14b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d14b2
    int64_t v1; // 0x3d14b2
    bool v2; // 0x3d14b2
    int64_t v3 = v1 + 0x4ff7fc + (int64_t)v2; // 0x3d14b2
    int64_t v4 = v3 & 0xffffffff; // 0x3d14b2
    char * v5 = (char *)v4; // 0x3d14b7
    *v5 = *v5 + (char)v3;
    char * v6 = (char *)(v4 - 127); // 0x3d14b9
    *v6 = *v6 + (char)a4;
    return (v4 | 0x100000000 * a3) / (int64_t)*(int32_t *)(a3 - 1) & 0xffffffff;
}
