/*
 * Targeted RetDec C for native executable gap queue batch 759.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x297cc9-0x297ec9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x297ec9-0x2980c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d91b9-0x3d93b9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47f030-0x47f230 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47f230-0x47f430 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47f430-0x47f630 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47f630-0x47f830 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47f830-0x47fa30 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
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

int64_t function_2124673();
int64_t function_297cc9(void);
int64_t function_297d3a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_297de0(int64_t a1);
int64_t function_297de6(int64_t a1, int64_t a2);
int64_t function_297e38(void);
int64_t function_297e3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_297e64(void);
int64_t function_297e7d(void);
int64_t function_297e84(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_297f2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_297f9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_297ff6(void);
int64_t function_29801f(int64_t a1, int64_t a2);
int64_t function_298032(int64_t a1);
int64_t function_2980b2(void);
int64_t function_3d9148();
int64_t function_3d91b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d91c6(void);
int64_t function_3d9201(void);
int64_t function_3d9263(void);
int64_t function_3d9287(void);
int64_t function_3d92c8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3d9352(int64_t a1);
int64_t function_3d9387(int64_t a1);
int64_t function_3ea60dcf();
int64_t function_47f030(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_47f036(int64_t a1);
int64_t function_47f060(void);
int64_t function_47f0da(void);
int64_t function_47f108(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_47f14d(void);
int64_t function_47f150(int64_t a1);
int64_t function_47f22e(void);
int64_t function_47f258(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47f2a3(void);
int64_t function_47f37c(int64_t a1);
int64_t function_47f3aa(void);
int64_t function_47f3e8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47f3fb(void);
int64_t function_47f40b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47f4dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47f50e(void);
int64_t function_47f5a2(int64_t a1);
int64_t function_47f5a5(void);
int64_t function_47f5a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_47f6b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47f6c2(int64_t a1);
int64_t function_47f6fb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47f730(int64_t a1);
int64_t function_47f752(void);
int64_t function_47f75a(void);
int64_t function_47f78f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47f79a(void);
int64_t function_47f7a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47f7ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47f7e7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47f813(int64_t a1, int64_t a2, int32_t a3);
int64_t function_47f844(void);
int64_t function_47f856(void);
int64_t function_47f8a9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_47f8ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_47f907(void);
int64_t function_47f929(void);
int64_t function_47f954(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47f970(void);
int64_t function_47f976(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_47f999(void);
int64_t function_47f9ac(int64_t a1);
int64_t function_47f9d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5e5dfa46();
int64_t function_ffffffff905f6f76();
int64_t function_ffffffffacff6bab();
int64_t function_ffffffffc0efbaa4();
int64_t function_ffffffffc24a9f47();
int64_t function_ffffffffd45c8cec();
int64_t unknown_135f512();
int64_t unknown_1667f34();
int64_t unknown_350855ec();
int64_t unknown_3e20961f();
int64_t unknown_73cc60d0();
int64_t unknown_ffffffffa631743c();
int64_t unknown_ffffffffb2660ddf();

// Address range: 0x297cc9 - 0x297cd2
int64_t function_297cc9(void) {
    // 0x297cc9
    int64_t v1; // 0x297cc9
    uint32_t v2 = (int32_t)v1;
    int32_t v3 = 2 * v2; // 0x297ccf
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x297ccf
    *(int32_t *)v1 = v3;
    return v1 & -0xff01 | 256 * (64 * (int64_t)(v3 == 0) | (int64_t)(v3 < v2) | 128 * (int64_t)(v3 < 0) | 16 * (int64_t)((v2 & 8) != 0) | 4 * (int64_t)(v4 % 2 == 0)) | 512;
}

// Address range: 0x297d3a - 0x297d40
int64_t function_297d3a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x297d3a
    int64_t result; // 0x297d3a
    return result;
}

// Address range: 0x297de0 - 0x297de3
int64_t function_297de0(int64_t a1) {
    // 0x297de0
    int64_t result; // 0x297de0
    return result;
}

// Address range: 0x297de6 - 0x297def
int64_t function_297de6(int64_t a1, int64_t a2) {
    int64_t result = unknown_350855ec(a1, a2); // 0x297de6
    int64_t v1; // 0x297de6
    *(int32_t *)a1 = (int32_t)v1;
    return result;
}

// Address range: 0x297e38 - 0x297e39
int64_t function_297e38(void) {
    // 0x297e38
    int64_t result; // 0x297e38
    return result;
}

// Address range: 0x297e3b - 0x297e5f
int64_t function_297e3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x297e3b
    int64_t v1; // 0x297e3b
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = (int32_t)v1 + v2; // 0x297e3b
    *(int32_t *)v1 = v3;
    int64_t result = __asm_int1(); // 0x297e3d
    if (v3 < v2) {
        // 0x297e56
        return __asm_int1();
    }
    // 0x297e40
    return result;
}

// Address range: 0x297e64 - 0x297e69
int64_t function_297e64(void) {
    // 0x297e64
    return function_3ea60dcf();
}

// Address range: 0x297e7d - 0x297e84
int64_t function_297e7d(void) {
    // 0x297e7d
    return function_297e38();
}

// Address range: 0x297e84 - 0x297f21
int64_t function_297e84(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    bool v2; // 0x297e84
    if (v2) {
        int64_t v3 = __asm_int1(); // 0x297e86
        int32_t * v4 = (int32_t *)(a1 - 97); // 0x297e89
        *v4 = *v4 + (int32_t)a1;
        return (v3 - a4 / 256) % 256 | v3 & -256;
    }
    // 0x297efd
    int64_t v5; // 0x297e84
    *(char *)v5 = (char)a4;
    unsigned char v6 = *(char *)&v1; // 0x297eff
    v1 += (v2 ? -1 : 1);
    *(int32_t *)(v5 & -256 | (int64_t)v6) = (int32_t)v5;
    int32_t v7 = *(int32_t *)v1; // 0x297f1b
    __asm_outsd((int16_t)a3 % 256 | (int16_t)&g6, v7);
    return unknown_1667f34();
}

// Address range: 0x297f2f - 0x297f5e
int64_t function_297f2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a5 - 104); // 0x297f30
    *v1 = *v1 + (int32_t)a4;
    __asm_in(28);
    int64_t v2 = __asm_iretd(); // 0x297f45
    char * v3 = (char *)v2; // 0x297f4c
    char v4 = v2; // 0x297f4c
    *v3 = *v3 + v4;
    return v2 & -256 | (int64_t)(v4 - *(char *)(a3 + 62));
}

// Address range: 0x297f9f - 0x297fad
int64_t function_297f9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x297f9f
    int64_t v1; // 0x297f9f
    int64_t result = v1;
    unsigned char v2 = *(char *)(a4 + 0x3ca801e8); // 0x297f9f
    *(char *)result = (char)result + (char)a4 + (char)(v2 > (char)a3);
    return result;
}

// Address range: 0x297ff6 - 0x297ffb
int64_t function_297ff6(void) {
    // 0x297ff6
    return function_2124673();
}

// Address range: 0x29801f - 0x298026
int64_t function_29801f(int64_t a1, int64_t a2) {
    // 0x29801f
    return function_ffffffffc0efbaa4();
}

// Address range: 0x298032 - 0x298044
int64_t function_298032(int64_t a1) {
    // 0x298032
    int64_t v1; // 0x298032
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 - 0x75000000); // 0x298032
    *v3 = *v3 + (int32_t)v1;
    *(char *)0x7ec08041 = *(char *)0x7ec08041 + (char)(v1 / 256);
    return 2 * v2 & 254 | v2 & -256;
}

// Address range: 0x2980b2 - 0x2980b4
int64_t function_2980b2(void) {
    // 0x2980b2
    int64_t result; // 0x2980b2
    return result;
}

// Address range: 0x3d91b9 - 0x3d91bb
int64_t function_3d91b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result; // 0x3d91b9
    if (a4 != 1) {
        result = function_3d9148(a1, a2, a3, a4);
    }
    // 0x3d91bb
    return result;
}

// Address range: 0x3d91c6 - 0x3d91c7
int64_t function_3d91c6(void) {
    // 0x3d91c6
    int64_t result; // 0x3d91c6
    return result;
}

// Address range: 0x3d9201 - 0x3d9203
int64_t function_3d9201(void) {
    // 0x3d9201
    return function_3d91c6();
}

// Address range: 0x3d9263 - 0x3d9268
int64_t function_3d9263(void) {
    // 0x3d9263
    return function_5e5dfa46();
}

// Address range: 0x3d9287 - 0x3d9288
int64_t function_3d9287(void) {
    // 0x3d9287
    int64_t result; // 0x3d9287
    return result;
}

// Address range: 0x3d92c8 - 0x3d933b
int64_t function_3d92c8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3d92c8
    bool v1; // 0x3d92c8
    if (!v1) {
        // 0x3d930c
        unknown_135f512();
    } else {
        // 0x3d92ca
        unknown_73cc60d0();
        if (!v1) {
            function_3d9287();
        }
    }
    int64_t v2 = unknown_3e20961f(); // 0x3d9319
    char * v3 = (char *)(v2 + 0x49448e00); // 0x3d931e
    *v3 = *v3 + (char)v2;
    int64_t v4; // 0x3d92c8
    int32_t * v5 = (int32_t *)(v4 + 0x19004200); // 0x3d9326
    *v5 = *v5 + (int32_t)v4;
    __asm_out(43, (char)(v2 + a4 / 256));
    return unknown_ffffffffa631743c();
}

// Address range: 0x3d9352 - 0x3d9353
int64_t function_3d9352(int64_t a1) {
    // 0x3d9352
    int64_t result; // 0x3d9352
    return result;
}

// Address range: 0x3d9387 - 0x3d9388
int64_t function_3d9387(int64_t a1) {
    // 0x3d9387
    int64_t result; // 0x3d9387
    return result;
}

// Address range: 0x47f030 - 0x47f033
int64_t function_47f030(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x47f030
    int64_t v1; // 0x47f030
    return v1 - a6 & 0xffffffff;
}

// Address range: 0x47f036 - 0x47f037
int64_t function_47f036(int64_t a1) {
    // 0x47f036
    int64_t result; // 0x47f036
    return result;
}

// Address range: 0x47f060 - 0x47f063
int64_t function_47f060(void) {
    // 0x47f060
    int64_t result; // 0x47f060
    return result;
}

// Address range: 0x47f0da - 0x47f0dd
int64_t function_47f0da(void) {
    // 0x47f0da
    int64_t result; // 0x47f0da
    return result;
}

// Address range: 0x47f108 - 0x47f130
int64_t function_47f108(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x47f108
    int64_t v1; // 0x47f108
    uint64_t v2 = v1;
    __asm_sti();
    int64_t v3 = __asm_sti(); // 0x47f114
    unsigned char v4 = (char)(a4 / 256); // 0x47f118
    unsigned char v5 = *(char *)(a3 - 46); // 0x47f118
    unsigned char v6 = v4 - v5; // 0x47f118
    int64_t v7 = v3 + 0x125aa555 + (int64_t)(v5 > v4); // 0x47f11b
    unsigned char v8 = *(char *)0x2671c69e; // 0x47f122
    char v9 = v6 > -1 - (char)(v2 / 256); // 0x47f122
    unsigned char v10 = v6 + v9; // 0x47f122
    char v11 = v8 - v10; // 0x47f122
    bool v12 = v6 > -1 - (char)(v2 / 256) ? v10 != -1 | v8 < v11 - v9 : v8 < v10; // 0x47f122
    *(char *)0x2671c69e = v11;
    return (v7 + (int64_t)!v12) % 256 | v7 & 0xffffff00;
}

// Address range: 0x47f14d - 0x47f150
int64_t function_47f14d(void) {
    // 0x47f14d
    int64_t result; // 0x47f14d
    return result;
}

// Address range: 0x47f150 - 0x47f151
int64_t function_47f150(int64_t a1) {
    // 0x47f150
    int64_t result; // 0x47f150
    return result;
}

// Address range: 0x47f22e - 0x47f230
int64_t function_47f22e(void) {
    // 0x47f22e
    int64_t result; // 0x47f22e
    return result;
}

// Address range: 0x47f258 - 0x47f25b
int64_t function_47f258(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47f258
    int64_t result; // 0x47f258
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x47f2a3 - 0x47f2b1
int64_t function_47f2a3(void) {
    int64_t v1 = unknown_ffffffffb2660ddf(); // 0x47f2a8
    return (v1 + 38) % 256 | v1 & -256;
}

// Address range: 0x47f37c - 0x47f37e
int64_t function_47f37c(int64_t a1) {
    // 0x47f37c
    int64_t v1; // 0x47f37c
    return __asm_hlt(v1, v1);
}

// Address range: 0x47f3aa - 0x47f3ad
int64_t function_47f3aa(void) {
    // 0x47f3aa
    int64_t result; // 0x47f3aa
    return result;
}

// Address range: 0x47f3e8 - 0x47f3ed
int64_t function_47f3e8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47f3e8
    int64_t result; // 0x47f3e8
    return result;
}

// Address range: 0x47f3fb - 0x47f3fc
int64_t function_47f3fb(void) {
    // 0x47f3fb
    int64_t result; // 0x47f3fb
    return result;
}

// Address range: 0x47f40b - 0x47f4db
int64_t function_47f40b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3; // 0x47f40b
    int64_t * v4 = (int64_t *)(v3 + 8); // 0x47f415
    int64_t v5 = *v4; // 0x47f415
    if ((v5 & (int64_t)L"\n2") != 0) {
        // 0x47f46d
        *v4 = 0xa3d33f6f;
        uint32_t v6 = (int32_t)a4 % 32; // 0x47f46e
        if (v6 != 0) {
            int32_t * v7 = (int32_t *)(a4 + 117); // 0x47f46e
            uint32_t v8 = *v7; // 0x47f46e
            *v7 = v8 >> 32 - v6 | v8 << v6;
        }
        *(char *)v2 = *(char *)&v1;
        return v3 + 0xd36e1ffe & 0xffffffff;
    }
    // 0x47f418
    *(char *)v3 = (char)(v3 / 256);
    int32_t v9 = *(int32_t *)&v2; // 0x47f420
    int64_t v10 = v2 + ((v5 & (int64_t)&g1) == 0 ? 4 : -4); // 0x47f420
    v2 = v10;
    if (v9 < (int32_t)(v3 & 0xffff00ff || 256 * v3 & 0xff00)) {
        // 0x47f423
        return function_ffffffffc24a9f47(v10);
    }
    uint32_t v11 = *(int32_t *)&v1; // 0x47f4c3
    char * v12 = (char *)(v1 + 8); // 0x47f4c5
    unsigned char v13 = *v12; // 0x47f4c5
    unsigned char v14 = (char)(v3 / 256); // 0x47f4c5
    char v15 = v11 > (int32_t)v3; // 0x47f4c5
    unsigned char v16 = v13 + v14; // 0x47f4c5
    char v17 = v16 + v15; // 0x47f4c5
    unsigned char v18 = llvm_ctpop_i8(v17); // 0x47f4c5
    bool v19 = v11 > (int32_t)v3 ? v17 <= v13 : v16 < v13; // 0x47f4c5
    *v12 = v17;
    int32_t v20 = *(int32_t *)-0x7eecf621eda72454; // 0x47f4c8
    *v4 = v3 & 0xffffffff;
    return 256 * (64 * (int64_t)(v17 == 0) | (int64_t)v19 | 128 * (int64_t)(v17 < 0) | 16 * (int64_t)(v14 % 16 + v15 + v13 % 16 > 15) | 4 * (int64_t)(v18 % 2 == 0)) | (int64_t)(v20 & -0xff01 | 512);
}

// Address range: 0x47f4dd - 0x47f4e7
int64_t function_47f4dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47f4dd
    int64_t v1; // 0x47f4dd
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v1;
    return (v2 + 187) % 256 | v2 & -256;
}

// Address range: 0x47f50e - 0x47f513
int64_t function_47f50e(void) {
    // 0x47f50e
    return function_ffffffff905f6f76();
}

// Address range: 0x47f5a2 - 0x47f5a5
int64_t function_47f5a2(int64_t a1) {
    // 0x47f5a2
    int64_t result; // 0x47f5a2
    return result;
}

// Address range: 0x47f5a5 - 0x47f5a8
int64_t function_47f5a5(void) {
    // 0x47f5a5
    int64_t result; // 0x47f5a5
    return result;
}

// Address range: 0x47f5a8 - 0x47f69a
int64_t function_47f5a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3 = a8;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v4 = v3; // 0x47f5ac
    uint32_t v5 = (int32_t)a7 >> 31; // 0x47f5ad
    int64_t v6 = v5; // 0x47f5ad
    int16_t v7 = v5; // 0x47f5b0
    __asm_out_133(v7, (char)a7 - 80);
    char v8 = __asm_in_134(v7); // 0x47f5b2
    v3 = v6;
    char v9 = __asm_in_135(56); // 0x47f5bc
    int64_t v10 = v6 - 58; // 0x47f5be
    char * v11 = (char *)v10; // 0x47f5be
    unsigned char v12 = (char)v4; // 0x47f5be
    *v11 = *v11 | v12;
    int64_t v13 = ((int64_t)v8 | a7 | (int64_t)v9) & 0xffffff00 | (int64_t)(v9 ^ 19); // 0x47f5c1
    unsigned char v14 = v12 % 32; // 0x47f5c8
    if (v14 != 0) {
        char * v15 = (char *)(v6 - 0x7d22ab8d); // 0x47f5c8
        unsigned char v16 = *v15; // 0x47f5c8
        *v15 = v16 >> v14 | (char)((int16_t)v16 << (int16_t)(9 - v14)) | (char)((int32_t)v13 > 0x985c385e) << 8 - v14;
    }
    uint64_t v17 = v13 + 0x67a3c7a1; // 0x47f5c3
    int64_t v18; // 0x47f5a8
    unsigned char v19 = *(char *)(v17 % 256 + v18); // 0x47f5ce
    __asm_out_136(117, (int32_t)(v17 & 0xffffff00 | (int64_t)v19));
    int32_t v20 = *(int32_t *)-0x5f8e75a00bfe565a; // 0x47f5d8
    *(char *)-0x28919b40de20a71f = (char)v20;
    unsigned char v21 = *(char *)&v1; // 0x47f5ea
    __asm_out_133(v7, v21);
    int64_t v22 = v18 + 2; // 0x47f5ee
    __writefsbyte(v22, __readfsbyte(v22) - v21);
    float80_t v23; // 0x47f5a8
    *(int16_t *)(v2 - 0x378e27a9) = (int16_t)v23;
    unsigned char v24 = (char)v18; // 0x47f5fd
    char * v25 = (char *)v6; // 0x47f5fd
    unsigned char v26 = *v25; // 0x47f5fd
    if (v26 >= v24) {
        int64_t result = __asm_wait(); // 0x47f604
        v3 = -104;
        int32_t * v27 = (int32_t *)v10; // 0x47f60b
        *v27 = *v27 & (int32_t)(int64_t)&v3;
        return result;
    }
    int64_t result2 = (int64_t)v21 | (int64_t)(v20 & -256); // 0x47f5ea
    unsigned char v28 = v24 - v26; // 0x47f5fd
    if (v28 != 0) {
        // 0x47f633
        return result2;
    }
    uint64_t v29 = v6 / 256;
    int64_t v30 = v18 & -256 | (int64_t)v28; // 0x47f5a8
    int64_t v31 = v4; // 0x47f648
    bool v32 = v26 > v24; // 0x47f5a8
    int64_t v33 = result2;
    int64_t v34; // bp+16, 0x47f5a8
    int64_t v35 = (int64_t)&v34;
    uint64_t v36 = v30 & 0xffffffff; // 0x47f646
    v1 = *(int64_t *)v35;
    v31--;
    while (v31 != 0) {
        // 0x47f623
        __asm_int(37);
        unsigned char v37 = (char)v30; // 0x47f627
        unsigned char v38 = v32 ? 56 : 55; // 0x47f627
        int64_t v39 = v30 & 0xffff0000 | (int64_t)(v37 - v38) | 256 * (v36 / 256 + v29 + (int64_t)(v32 | v38 > v37)) & 0xff00; // 0x47f629
        int32_t * v40 = (int32_t *)(v39 + 56); // 0x47f62e
        int32_t v41 = *v40 ^ (int32_t)v33; // 0x47f62e
        *v40 = v41;
        int64_t result3 = v39; // 0x47f631
        v30 = v33;
        v32 = false;
        if (v41 != 0) {
            // 0x47f633
            return result3;
        }
        v33 = v39;
        v35 += 16;
        v36 = v30 & 0xffffffff;
        v1 = *(int64_t *)v35;
        v31--;
    }
    int64_t * v42 = (int64_t *)(v35 + 8); // 0x47f657
    *v42 = 0xc97f0e45;
    __asm_wait();
    v1 = 0x55f05ded;
    int32_t * v43 = (int32_t *)(v33 + 24); // 0x47f661
    int32_t v44 = *v43; // 0x47f660
    int32_t v45 = *(int32_t *)(v36 - 37); // 0x47f660
    bool v46 = true; // 0x47f660
    int64_t v47 = *v42;
    int64_t result4; // 0x47f667
    while (v45 < 0) {
        // 0x47f661
        v44 = v44 / 0x8000 | 0x40000 * v44 | 0x20000 * (int32_t)v46;
        uint32_t v48 = (int32_t)v47; // 0x47f667
        v45 = v48 + 0x28abe412;
        unsigned char v49 = llvm_ctpop_i8((char)v45); // 0x47f667
        result4 = v45;
        v46 = v48 > 0xd7541bed;
        if (v49 % 2 != 0) {
            // 0x47f675
            *v43 = v44;
            int64_t v50 = (int64_t)*(int32_t *)0xb12c69a6; // 0x47f67b
            if (-101 * v50 != -0x6500000000 * v50 >> 32) {
                unsigned char v51 = *(char *)&v2; // 0x47f682
                char v52 = -101 * v50 != -0x6500000000 * v50 >> 32; // 0x47f682
                char v53 = v52 + (char)(v33 / 256); // 0x47f682
                char v54 = v51 - v53; // 0x47f682
                *(char *)v2 = v54;
                int32_t * v55 = (int32_t *)(v35 + 147 + 2 * v1); // 0x47f684
                *v55 = *v55 + 15 + (int32_t)(v53 != -1 | v51 < v54 - v52);
                *(char *)v2 = *(char *)v1;
                int64_t v56 = v2 - 1; // 0x47f689
                int64_t v57 = v1 - 1; // 0x47f689
                v2 = v56;
                v1 = v57;
                int32_t * v58 = (int32_t *)v56; // 0x47f68a
                *v58 = *v58 + (int32_t)v57;
                *(int64_t *)(v35 + 16) = v1;
                return v47 + 0x6d26178d & 0xffffffff;
            }
            return result4;
        }
        v47 = result4;
    }
    // 0x47f63b
    *v43 = v44;
    *v25 = *v25 + (char)v47;
    __asm_outsb(v7, *(char *)v1);
    result4 = v47;
  lab_0x47f633:
    // 0x47f633
    return result4;
}

// Address range: 0x47f6b0 - 0x47f6b5
int64_t function_47f6b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47f6b0
    int64_t result; // 0x47f6b0
    return result;
}

// Address range: 0x47f6c2 - 0x47f6c5
int64_t function_47f6c2(int64_t a1) {
    // 0x47f6c2
    int64_t result; // 0x47f6c2
    return result;
}

// Address range: 0x47f6fb - 0x47f70e
int64_t function_47f6fb(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 0x292e8f58); // 0x47f6fb
    int64_t result; // 0x47f6fb
    char v2 = result; // 0x47f6fb
    *v1 = *v1 & v2;
    int64_t v3; // 0x47f6fb
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)result;
    __asm_out_133((int16_t)a3, v2);
    return result;
}

// Address range: 0x47f730 - 0x47f733
int64_t function_47f730(int64_t a1) {
    // 0x47f730
    int64_t result; // 0x47f730
    return result;
}

// Address range: 0x47f752 - 0x47f754
int64_t function_47f752(void) {
    // 0x47f752
    int64_t v1; // 0x47f752
    return function_47f78f(v1, v1, v1, v1);
}

// Address range: 0x47f75a - 0x47f763
int64_t function_47f75a(void) {
    // 0x47f75a
    int64_t result; // 0x47f75a
    *(int32_t *)0x1c52ad408a4b472a = (int32_t)result;
    return result;
}

// Address range: 0x47f78f - 0x47f799
int64_t function_47f78f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47f78f
    int64_t v1; // 0x47f78f
    int64_t v2 = v1;
    uint32_t v3 = __readgsdword(a3); // 0x47f793
    uint32_t v4 = ((int32_t)a4 | (int32_t)(char)&g5) % 32; // 0x47f793
    if (v4 != 0) {
        __writegsdword(a3, v3 >> 32 - v4 | v3 << v4);
    }
    return (v2 + 199) % 256 | v2 & -256;
}

// Address range: 0x47f79a - 0x47f79b
int64_t function_47f79a(void) {
    // 0x47f79a
    int64_t result; // 0x47f79a
    return result;
}

// Address range: 0x47f7a3 - 0x47f7be
int64_t function_47f7a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47f7a3
    int64_t v1; // 0x47f7a3
    int64_t v2 = v1;
    uint64_t v3 = v1 / 256; // 0x47f7a3
    uint64_t v4 = ((v2 + v3) % 256 | v2 & 0xffffff00) * (int64_t)*(int32_t *)(a4 - 112); // 0x47f7a6
    char * v5 = (char *)(v4 & 0xffffffff); // 0x47f7b6
    *v5 = *v5 + (char)v3 + (char)(v4 > 0xffffffff);
    int64_t v6; // 0x47f7a3
    __asm_outsd(-0x25b6, *(int32_t *)&v6);
    return function_47f813(a1, a2, *(int32_t *)(v1 + 71) ^ 0x555da4a);
}

// Address range: 0x47f7ce - 0x47f7d2
int64_t function_47f7ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x47f7ce
    int64_t result; // 0x47f7ce
    return result;
}

// Address range: 0x47f7e7 - 0x47f801
int64_t function_47f7e7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47f7e7
    int64_t v1; // 0x47f7e7
    int32_t * v2 = (int32_t *)(v1 + 0x477b1797 + 2 * v1); // 0x47f7e7
    bool v3; // 0x47f7e7
    *v2 = (int32_t)v3 + (int32_t)v1 + *v2;
    __readgsbyte(v1 + 4 * a1);
    return function_ffffffffd45c8cec();
}

// Address range: 0x47f813 - 0x47f81b
int64_t function_47f813(int64_t a1, int64_t a2, int32_t a3) {
    // 0x47f813
    int64_t v1; // 0x47f813
    uint64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)a1;
    __asm_out_137((int16_t)a3, (int32_t)v2);
    return v2 % 256 & v1 | v2 & 0xffffff00;
}

// Address range: 0x47f844 - 0x47f845
int64_t function_47f844(void) {
    // 0x47f844
    int64_t result; // 0x47f844
    return result;
}

// Address range: 0x47f856 - 0x47f85b
int64_t function_47f856(void) {
    // 0x47f856
    return function_ffffffffacff6bab();
}

// Address range: 0x47f8a9 - 0x47f8c6
int64_t function_47f8a9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 2); // 0x47f8b1
    *v1 = *v1 ^ (char)(a4 / 256);
    int64_t result = __asm_sti(); // 0x47f8bd
    if (a4 != 1) {
        result = function_47f844();
    }
    int64_t v2 = (int64_t)(*(char *)(a2 + 56) - 54) | 0x7157aa00; // 0x47f8ba
    int32_t * v3 = (int32_t *)v2; // 0x47f8c0
    *v3 = *v3 ^ (int32_t)v2;
    return result;
}

// Address range: 0x47f8ce - 0x47f906
int64_t function_47f8ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x47f8ce
    int64_t result; // 0x47f8ce
    return result;
}

// Address range: 0x47f907 - 0x47f908
int64_t function_47f907(void) {
    // 0x47f907
    int64_t result; // 0x47f907
    return result;
}

// Address range: 0x47f929 - 0x47f930
int64_t function_47f929(void) {
    // 0x47f929
    int64_t result; // 0x47f929
    int64_t v1; // 0x47f929
    if ((v1 & 37) != 0) {
        result = function_47f907();
    }
    // 0x47f92d
    return result;
}

// Address range: 0x47f954 - 0x47f95f
int64_t function_47f954(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47f954
    int64_t v1; // 0x47f954
    __asm_out(-36, (char)v1);
    *(char *)a1 = (char)v1;
    bool v2; // 0x47f954
    int64_t v3 = v2 ? -1 : 1; // 0x47f956
    int64_t v4 = v3 + a1; // 0x47f956
    int64_t v5 = v3 + a2; // 0x47f956
    *(char *)v4 = (char)__asm_hlt(v4, v5);
    return function_47f976(v4 + v3, v5, a3, v1, v1, v1);
}

// Address range: 0x47f970 - 0x47f976
int64_t function_47f970(void) {
    // 0x47f970
    return (int64_t)*(int32_t *)0x1ab8665a;
}

// Address range: 0x47f976 - 0x47f97b
int64_t function_47f976(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x47f976
    int64_t result; // 0x47f976
    return result;
}

// Address range: 0x47f999 - 0x47f99a
int64_t function_47f999(void) {
    // 0x47f999
    int64_t result; // 0x47f999
    return result;
}

// Address range: 0x47f9ac - 0x47f9ae
int64_t function_47f9ac(int64_t a1) {
    // 0x47f9ac
    int64_t result; // 0x47f9ac
    return result;
}

// Address range: 0x47f9d8 - 0x47f9fe
int64_t function_47f9d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x47f9d8
    int64_t v1; // 0x47f9d8
    int64_t result = v1 & 0xffffffff; // 0x47f9d9
    if (a4 != 1) {
        // 0x47f9fd
        return result;
    }
    int32_t * v2 = (int32_t *)(v1 + 117); // 0x47f9e5
    int32_t v3 = *v2; // 0x47f9e5
    *v2 = (int32_t)((int32_t)v1 > (int32_t)v1) - (int32_t)v1 + v3;
    return result;
}
