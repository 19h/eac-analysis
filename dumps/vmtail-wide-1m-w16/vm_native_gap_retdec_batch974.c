/*
 * Targeted RetDec C for native executable gap queue batch 974.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x292f1f-0x29311f rank=- name=- kind=- bytes=- uncovered=-
 *   0x35be8a-0x35c08a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35c08a-0x35c28a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35c28a-0x35c48a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35c48a-0x35c68a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35c68a-0x35c88a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35c88a-0x35ca8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35ca8a-0x35cc8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x35cc8a-0x35ce8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d20ff-0x3d22ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d22ff-0x3d24ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d24ff-0x3d26ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d26ff-0x3d28ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d28ff-0x3d2aff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d2aff-0x3d2cff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d2cff-0x3d2eff rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_225acc5();
int64_t function_225ad0b();
int64_t function_28b5267e();
int64_t function_292f1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_292f83(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_292fcf(void);
int64_t function_293042(void);
int64_t function_29308d(void);
int64_t function_29310e(int64_t a1, int64_t a2);
int64_t function_35be8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_35bf1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_35c083(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35c1e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_35c323(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_35c491(int64_t a1, int64_t a2);
int64_t function_35c5a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_35c730(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35c87e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_35c9ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_35cb04(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_35cc18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_35ce38(int64_t a1, int64_t a2, int64_t a3);
int64_t function_35ce75(void);
int64_t function_35ce79(void);
int64_t function_3d1e730e();
int64_t function_3d20df();
int64_t function_3d20ff(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3d2135(int64_t a1);
int64_t function_3d214c(int64_t a1, int64_t a2);
int64_t function_3d216f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d2180(void);
int64_t function_3d21a3(int64_t a1);
int64_t function_3d21b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d21e4(void);
int64_t function_3d21f1(void);
int64_t function_3d21f4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3d2231(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3d224c(int64_t a1);
int64_t function_3d2257(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d226c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d228e(void);
int64_t function_3d229a(void);
int64_t function_3d22a5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d22b1(void);
int64_t function_3d2318(void);
int64_t function_3d2335(void);
int64_t function_3d2359(void);
int64_t function_3d23da(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d23e9(int64_t a1);
int64_t function_3d246a(int64_t a1);
int64_t function_3d24d9(void);
int64_t function_3d252f(void);
int64_t function_3d253c(void);
int64_t function_3d255c(int64_t a1);
int64_t function_3d2645(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3d268a(void);
int64_t function_3d268d(int64_t a1);
int64_t function_3d26f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d2838(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d286a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d28ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d2a18(void);
int64_t function_3d2a35(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d2a40(void);
int64_t function_3d2a55(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d2a7b(int64_t a1);
int64_t function_3d2b5c(void);
int64_t function_3d2b81(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d2bc3(int64_t a1);
int64_t function_3d2bdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d2bf4(void);
int64_t function_3d2c0f(void);
int64_t function_3d2cd0(void);
int64_t function_3d2d08(int64_t a1);
int64_t function_3d2d7d(void);
int64_t function_3d2dcb(void);
int64_t function_3d2dcf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d2dd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d2df4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d2e00(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d2e2d(int64_t a1);
int64_t function_3d2e3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d2ec0(int64_t a1, int64_t result);
int64_t function_3d2ef5(int64_t a1, int64_t a2);
int64_t function_3e0651f0();
int64_t function_cf3c7();
int64_t function_ffffffffd1b114d1();
int64_t unknown_22537ca();
int64_t unknown_5f7673b8();
int64_t unknown_6d2fac5a();
int64_t unknown_71def3f6();
int64_t unknown_ffffffff88294170();
int64_t unknown_ffffffff8c3db4eb();
int64_t unknown_ffffffff9de17397();
int64_t unknown_ffffffffb04a7d60();
int64_t unknown_ffffffffcb02e081();
int64_t unknown_ffffffffd475b5a0();
int64_t unknown_fffffffff1322905();
int64_t unknown_fffffffffc49014d();

// Address range: 0x292f1f - 0x292f81
int64_t function_292f1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 93); // 0x292f28
    int32_t v2 = a1; // 0x292f28
    int64_t v3; // 0x292f1f
    *v1 = *v1 + v2 + (int32_t)(*(char *)v3 > -1 - (char)a3);
    uint32_t v4 = v2 - *(int32_t *)(v3 + 0x13d0050); // 0x292f34
    int64_t v5 = v4; // 0x292f34
    unknown_ffffffff88294170(v4);
    __asm_in(-0x2f3e);
    unknown_fffffffffc49014d();
    unsigned char v6 = *(char *)0x7508d0aa; // 0x292f52
    *(int32_t *)0x4e18e85e = *(int32_t *)0x4e18e85e + v4;
    *(int32_t *)v5 = *(int32_t *)0x1e8aea5;
    bool v7; // 0x292f1f
    int64_t v8 = v7 ? -4 : 4; // 0x292f7a
    unknown_ffffffffcb02e081(v8 + v5, v8 + 0x1e8aea5, (int64_t)v6 | 0x7508d0c2);
    return __asm_int1();
}

// Address range: 0x292f83 - 0x292fc5
int64_t function_292f83(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x292f83
    int64_t v1; // 0x292f83
    *(char *)(v1 + 42) = -117;
    int64_t v2 = unknown_ffffffff9de17397(); // 0x292f91
    int64_t v3; // bp-8, 0x292f83
    uint32_t v4 = (int32_t)(int64_t)&v3; // 0x292f96
    *(char *)a1 = (char)v2;
    bool v5; // 0x292f83
    uint64_t v6 = unknown_ffffffffd475b5a0((v5 ? -1 : 1) + a1); // 0x292f9a
    int64_t v7 = (v6 + (-1 - v4 < v4 ? 20 : 19)) % 256 | v6 & -256; // 0x292f9f
    char * v8 = (char *)(v7 - 121); // 0x292fa1
    *v8 = *v8 + (char)v1;
    char * v9 = (char *)(v7 + 60); // 0x292fa4
    *v9 = *v9 - 24;
    unsigned char v10 = (char)(v6 / 256); // 0x292fad
    int64_t v11; // 0x292f83
    *(char *)a4 = *(char *)&v11 - v10;
    int64_t v12 = unknown_5f7673b8(); // 0x292fb2
    char * v13 = (char *)(v1 + 4 * v1); // 0x292fb7
    *v13 = (char)(v10 < 139) - (char)v12 + *v13;
    int64_t v14; // 0x292f83
    __asm_outsb((int16_t)a3 & -256 | 139, *(char *)&v14);
    *(int32_t *)a2 = *(int32_t *)&v14 + (int32_t)v12;
    return function_3d1e730e();
}

// Address range: 0x292fcf - 0x292fd0
int64_t function_292fcf(void) {
    // 0x292fcf
    int64_t result; // 0x292fcf
    return result;
}

// Address range: 0x293042 - 0x29304c
int64_t function_293042(void) {
    // 0x293042
    int64_t result; // 0x293042
    bool v1; // 0x293042
    if (!v1) {
        result = function_292fcf();
    }
    // 0x293044
    *(char *)result = 0;
    return result;
}

// Address range: 0x29308d - 0x29308e
int64_t function_29308d(void) {
    // 0x29308d
    int64_t result; // 0x29308d
    return result;
}

// Address range: 0x29310e - 0x29311e
int64_t function_29310e(int64_t a1, int64_t a2) {
    // 0x29310e
    int64_t v1; // 0x29310e
    int64_t v2 = v1;
    return (v2 + 252) % 256 | v2 & -256;
}

// Address range: 0x35be8a - 0x35bf1d
int64_t function_35be8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x35be8a
    return function_cf3c7(a1, a2, a3, a4, a5, a6, a8);
}

// Address range: 0x35bf1d - 0x35c083
int64_t function_35bf1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x35bf1d
    int64_t v1; // bp-32, 0x35bf1d
    int64_t v2 = (int64_t)&v1; // 0x35bf94
    v1 = v2;
    int64_t v3; // 0x35bf1d
    return function_cf3c7(a1, a2, a3, 169, v3, v3, v2);
}

// Address range: 0x35c083 - 0x35c1e2
int64_t function_35c083(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0xacaafba; // bp-40, 0x35c0e4
    int64_t v2 = (int64_t)&v1; // 0x35c12a
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x35c132
    int64_t v4 = v2 - 8; // 0x35c132
    *(int64_t *)v4 = v3;
    int64_t v5 = v2 - 16; // 0x35c13a
    int64_t * v6 = (int64_t *)v5; // 0x35c13f
    *v6 = a1;
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x35c151
    *v7 = v2;
    int64_t v8 = v2 - 32; // 0x35c152
    int64_t * v9 = (int64_t *)v8; // 0x35c152
    *v7 = a4;
    *v9 = a5;
    int64_t * v10 = (int64_t *)(v2 - 40); // 0x35c16a
    *v10 = v8;
    *v9 = v5;
    bool v11; // 0x35c083
    v1 = 0x4000 * (int64_t)v11 | 2048 * (int64_t)v11 | 1024 * (int64_t)v11 | 512 * (int64_t)v11 | 256 * (int64_t)v11 | 128 * (int64_t)v11 | 64 * (int64_t)v11 | 16 * (int64_t)v11 | (int64_t)v11 | 4 * (int64_t)v11 | 2;
    *v7 = 0x2d0d9ae1;
    *v10 = v3;
    *(int64_t *)(v2 + 8) = *v7;
    *v9 = v4;
    *v10 = *v7;
    int64_t v12 = *v6; // 0x35c1c4
    *v7 = v12;
    *v9 = v12;
    int64_t v13; // 0x35c083
    return function_cf3c7(*v6, a2, a3, a4, *v9, v13, v1);
}

// Address range: 0x35c1e2 - 0x35c323
int64_t function_35c1e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x35c1e2
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 310);
}

// Address range: 0x35c323 - 0x35c491
int64_t function_35c323(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x35c323
    int64_t v1; // 0x35c323
    return function_cf3c7(a1, a2, 0x350c55b, a4, a5, v1, 169);
}

// Address range: 0x35c491 - 0x35c5a6
int64_t function_35c491(int64_t a1, int64_t a2) {
    // 0x35c491
    int64_t v1; // 0x35c491
    return function_cf3c7(a1, a2, v1, v1, v1, v1, 0x7c66b867);
}

// Address range: 0x35c5a6 - 0x35c730
int64_t function_35c5a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x35c5a6
    int64_t v1; // bp-48, 0x35c5a6
    int64_t v2 = (int64_t)&v1; // 0x35c6d6
    int64_t v3 = v2 + ((int64_t)&g2 ^ 0x8c00) + 8; // 0x35c706
    v1 = v3;
    int64_t v4 = *(int64_t *)v3; // 0x35c712
    *(int64_t *)(v2 + ((int64_t)&g2 ^ 0x8c00)) = v4;
    *(int64_t *)(v2 + ((int64_t)&g2 ^ 0x8c00) - 8) = v4;
    return function_cf3c7(a1, a2, 0x359b7b, a4, a5, a6, 0x359b7b);
}

// Address range: 0x35c730 - 0x35c87e
int64_t function_35c730(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x35c730
    int64_t v1; // bp-56, 0x35c730
    int64_t v2 = (int64_t)&v1; // 0x35c7ec
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x35c802
    *v3 = 0x3ecf077c;
    v1 = a5;
    int64_t v4 = v2 + 24; // 0x35c813
    *(int64_t *)v4 = *v3;
    *v3 = 0x717bfe77;
    *(int64_t *)(v2 - 8) = 0x359da5;
    *(int64_t *)(v2 + 40) = *v3;
    v1 = v2 + 16;
    *v3 = v4;
    int64_t v5; // 0x35c730
    return function_cf3c7(a1, a2, a3, a4, v5, v5, 0x4593ec0d);
}

// Address range: 0x35c87e - 0x35c9ca
int64_t function_35c87e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x35c87e
    int64_t v1; // bp-40, 0x35c87e
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x35c87e
    return function_cf3c7(a1, a2, a3, 310, v2, v2, v2);
}

// Address range: 0x35c9ca - 0x35cb04
int64_t function_35c9ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x35c9ca
    int64_t v1; // bp-48, 0x35c9ca
    int64_t v2 = (int64_t)&v1; // 0x35ca62
    int64_t v3 = v2 + 16; // 0x35ca68
    v1 = v3;
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x35ca77
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x35ca77
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 8); // 0x35ca80
    *v6 = v3;
    int64_t v7 = v1; // 0x35ca8e
    v1 = 0x7a9d2349;
    *(int64_t *)(v2 - 16) = a5;
    int64_t * v8 = (int64_t *)v3; // 0x35caa7
    *v8 = v1;
    v1 = 0x51c14007;
    *v6 = v7;
    *(int64_t *)(v2 + 40) = v4;
    *v6 = v1;
    int64_t v9 = *v5; // 0x35cac7
    v1 = v9;
    *v6 = v9;
    *v5 = *v8;
    v1 = v3;
    int64_t v10; // 0x35c9ca
    return function_cf3c7(a1, a2, a3, a4, v10, v10, 0x6499d2c9);
}

// Address range: 0x35cb04 - 0x35cc18
int64_t function_35cb04(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x35cb04
    int64_t v1; // bp-24, 0x35cb04
    int64_t v2 = (int64_t)&v1; // 0x35cb63
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 24); // 0x35cb7f
    int64_t v4 = *(int64_t *)(v2 + 24); // 0x35cb85
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x35cb85
    *v5 = v4;
    *v3 = v4;
    int64_t v6 = v2 + 8; // 0x35cb91
    int64_t v7 = *(int64_t *)v6; // 0x35cb91
    *v5 = v7;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x35cb98
    *v3 = 0x15f57d33;
    *v8 = v4;
    v1 = *v5;
    *v5 = 0x597a2326;
    *v3 = 0x3f764bcc;
    *v8 = v7;
    *(int64_t *)(v2 + 16) = *v5;
    *v5 = v2;
    *v5 = v1;
    *(int64_t *)(v2 - 8) = v6;
    return function_cf3c7(a1, a2, a3, 0x5ac98082, a5, a6, 0x35a45f);
}

// Address range: 0x35cc18 - 0x35cd91
int64_t function_35cc18(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x35cc18
    int64_t v1; // bp-32, 0x35cc18
    int64_t v2 = (int64_t)&v1; // 0x35cc61
    int64_t v3 = v2 + 16; // 0x35ccf5
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x35cd44
    *v4 = *(int64_t *)v3;
    v1 = a5;
    *(int64_t *)(v2 - 8) = v3;
    *v4 = v2 + 24;
    int64_t v5; // 0x35cc18
    return function_cf3c7(a1, a2, a3, a4, v1, v5, v5);
}

// Address range: 0x35ce38 - 0x35ce4b
int64_t function_35ce38(int64_t a1, int64_t a2, int64_t a3) {
    // 0x35ce38
    int64_t v1; // 0x35ce38
    __asm_out((int16_t)a3, (char)v1);
    return v1 + 0xc7495242 & 0xffffffff;
}

// Address range: 0x35ce75 - 0x35ce78
int64_t function_35ce75(void) {
    // 0x35ce75
    int64_t result; // 0x35ce75
    return result;
}

// Address range: 0x35ce79 - 0x35ce7c
int64_t function_35ce79(void) {
    // 0x35ce79
    int64_t result; // 0x35ce79
    return result;
}

// Address range: 0x3d20ff - 0x3d211b
int64_t function_3d20ff(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char v1 = a3 / 256; // 0x3d20ff
    if (llvm_ctpop_i8(v1 - *(char *)(a4 + 48)) % 2 != 0) {
        function_3d20df();
    }
    // 0x3d2104
    int64_t v2; // 0x3d20ff
    char v3 = *(char *)(v2 + 0x742801e8); // 0x3d2104
    int64_t result = unknown_22537ca(); // 0x3d2110
    char v4 = __asm_insb((int16_t)(256 * (int64_t)(v1 - v3) | a3 % 256)); // 0x3d211a
    *(char *)a1 = v4;
    return result;
}

// Address range: 0x3d2135 - 0x3d213d
int64_t function_3d2135(int64_t a1) {
    // 0x3d2135
    return unknown_ffffffff8c3db4eb(a1);
}

// Address range: 0x3d214c - 0x3d2153
int64_t function_3d214c(int64_t a1, int64_t a2) {
    // 0x3d214c
    bool v1; // 0x3d214c
    int64_t v2 = v1 ? -4 : 4; // 0x3d214c
    return function_225acc5(v2 + a1, v2 + a2);
}

// Address range: 0x3d216f - 0x3d2172
int64_t function_3d216f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d216f
    int64_t result; // 0x3d216f
    return result;
}

// Address range: 0x3d2180 - 0x3d218c
int64_t function_3d2180(void) {
    // 0x3d2180
    int64_t v1; // 0x3d2180
    return v1 & -256 | (int64_t)*(char *)0xf0e00437ef70a03;
}

// Address range: 0x3d21a3 - 0x3d21a6
int64_t function_3d21a3(int64_t a1) {
    // 0x3d21a3
    int64_t result; // 0x3d21a3
    return result;
}

// Address range: 0x3d21b7 - 0x3d21bc
int64_t function_3d21b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d21b7
    int64_t result; // 0x3d21b7
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x3d21e4 - 0x3d21e9
int64_t function_3d21e4(void) {
    // 0x3d21e4
    return function_3e0651f0();
}

// Address range: 0x3d21f1 - 0x3d21f2
int64_t function_3d21f1(void) {
    // 0x3d21f1
    int64_t result; // 0x3d21f1
    return result;
}

// Address range: 0x3d21f4 - 0x3d2230
int64_t function_3d21f4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3d21f4
    int64_t v1; // 0x3d21f4
    char * v2 = (char *)(v1 - 50); // 0x3d21f4
    *v2 = *v2 + (char)v1;
    unsigned char v3 = *(char *)((v1 & 204 | 51) + v1); // 0x3d21fa
    int32_t * v4 = (int32_t *)(a1 - 16); // 0x3d2201
    int32_t v5 = *v4; // 0x3d2201
    int32_t v6 = v1; // 0x3d2201
    int32_t v7 = v5 + v6; // 0x3d2201
    *v4 = v7;
    *(char *)a4 = (char)(v7 == 0 | v7 < 0 != ((v7 ^ v5) & (v7 ^ v6)) < 0);
    uint32_t v8 = (int32_t)v1; // 0x3d220d
    int32_t v9 = a3; // 0x3d220d
    uint32_t v10 = v8 + v9; // 0x3d220d
    int64_t v11 = (v1 & -256 | (int64_t)v3) - (v10 < v8 ? 0xd0830069 : 0xd0830068); // 0x3d220f
    *(int64_t *)((int64_t)v10 - 8) = 0x12594d00;
    char * v12 = (char *)(v1 + 0x1a00013d); // 0x3d2219
    *v12 = *v12 - (char)v11;
    uint32_t v13 = (int32_t)v11; // 0x3d2222
    __asm_out_133((int16_t)(*(int32_t *)(a1 + 96) | v9), v13);
    uint32_t v14 = *(int32_t *)(v1 - 0x131155b); // 0x3d2223
    unsigned char v15 = (char)(v1 / 256); // 0x3d2229
    unsigned char v16 = v15 + (char)(a4 / 256); // 0x3d2229
    bool v17 = v14 > v13 ? v16 + (char)(v14 > v13) <= v15 : v16 < v15; // 0x3d2229
    int64_t result = v13 - v14; // 0x3d222b
    if (v16 != (char)(v14 > v13) && !v17) {
        result = function_3d21f1();
    }
    // 0x3d222d
    return result;
}

// Address range: 0x3d2231 - 0x3d2249
int64_t function_3d2231(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3d2231
    int64_t v1; // 0x3d2231
    char * v2 = (char *)(8 * a2 + 0x20e1013d + v1); // 0x3d2231
    *v2 = *v2 + (char)v1;
    int32_t * v3 = (int32_t *)(a4 + 18); // 0x3d223b
    *v3 = 2 * *v3;
    int64_t v4; // 0x3d2231
    unsigned char v5 = *(char *)&v4; // 0x3d223f
    *(char *)a3 = v5 / 128 | 2 * v5;
    return __asm_hlt(a6);
}

// Address range: 0x3d224c - 0x3d2255
int64_t function_3d224c(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 0x60c50111); // 0x3d224c
    int64_t v2; // 0x3d224c
    *v1 = *v1 + (int32_t)v2;
    return __asm_wait(a1);
}

// Address range: 0x3d2257 - 0x3d226c
int64_t function_3d2257(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d2257
    return __asm_sti();
}

// Address range: 0x3d226c - 0x3d228e
int64_t function_3d226c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d226c
    int64_t v1; // 0x3d226c
    bool v2; // 0x3d226c
    if (v2) {
        v1 = function_3d22b1();
    }
    int32_t v3 = 2 * (int32_t)v1 | (int32_t)!v2; // 0x3d2271
    *(int32_t *)v1 = v3;
    int64_t v4 = v1; // 0x3d2278
    if (v3 != 0) {
        v4 = function_3d22a5(a1, 0x960a1fa8, (int64_t)&g3);
    }
    // 0x3d227a
    int64_t v5; // 0x3d226c
    int32_t * v6 = (int32_t *)((v5 + a1 & 0xffffffff) - 0x1cf45ee0); // 0x3d2288
    *v6 = (int32_t)v5 + 0x13d9a6f7 + *v6;
    return v4 ^ 61;
}

// Address range: 0x3d228e - 0x3d2298
int64_t function_3d228e(void) {
    // 0x3d228e
    int64_t v1; // 0x3d228e
    bool v2; // 0x3d228e
    return v1 + (int64_t)v2 + __asm_sti() & 0xffffffff;
}

// Address range: 0x3d229a - 0x3d229c
int64_t function_3d229a(void) {
    // 0x3d229a
    int64_t result; // 0x3d229a
    return result;
}

// Address range: 0x3d22a5 - 0x3d22ac
int64_t function_3d22a5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d22a5
    int64_t v1; // 0x3d22a5
    uint16_t v2 = (int16_t)v1; // 0x3d22a5
    uint16_t v3 = (int16_t)*(char *)(a2 + 0x13d00d8); // 0x3d22a5
    return v1 & -0x10000 | (int64_t)(v2 / v3 % 256) | (int64_t)(256 * (v2 % v3));
}

// Address range: 0x3d22b1 - 0x3d22b2
int64_t function_3d22b1(void) {
    // 0x3d22b1
    int64_t result; // 0x3d22b1
    return result;
}

// Address range: 0x3d2318 - 0x3d231c
int64_t function_3d2318(void) {
    // 0x3d2318
    int64_t v1; // 0x3d2318
    bool v2; // 0x3d2318
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x3d2335 - 0x3d2338
int64_t function_3d2335(void) {
    // 0x3d2335
    int64_t result; // 0x3d2335
    return result;
}

// Address range: 0x3d2359 - 0x3d235f
int64_t function_3d2359(void) {
    // 0x3d2359
    int64_t result; // 0x3d2359
    return result;
}

// Address range: 0x3d23da - 0x3d23e8
int64_t function_3d23da(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d23da
    int64_t result; // 0x3d23da
    return result;
}

// Address range: 0x3d23e9 - 0x3d23ea
int64_t function_3d23e9(int64_t a1) {
    // 0x3d23e9
    int64_t result; // 0x3d23e9
    return result;
}

// Address range: 0x3d246a - 0x3d246b
int64_t function_3d246a(int64_t a1) {
    // 0x3d246a
    int64_t result; // 0x3d246a
    return result;
}

// Address range: 0x3d24d9 - 0x3d24da
int64_t function_3d24d9(void) {
    // 0x3d24d9
    int64_t result; // 0x3d24d9
    return result;
}

// Address range: 0x3d252f - 0x3d2531
int64_t function_3d252f(void) {
    // 0x3d252f
    return function_3d24d9();
}

// Address range: 0x3d253c - 0x3d2541
int64_t function_3d253c(void) {
    // 0x3d253c
    return function_28b5267e();
}

// Address range: 0x3d255c - 0x3d255d
int64_t function_3d255c(int64_t a1) {
    // 0x3d255c
    int64_t result; // 0x3d255c
    return result;
}

// Address range: 0x3d2645 - 0x3d2688
int64_t function_3d2645(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a2 - 0x62e9488a); // 0x3d2654
    *v1 = *v1 - (char)(a4 / 256);
    int64_t result = unknown_ffffffffb04a7d60() & 0xffffffff; // 0x3d265f
    __asm_wait(result);
    uint32_t v2 = (int32_t)a4 % 32; // 0x3d2663
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)(a2 - 92); // 0x3d2663
        *v3 = *v3 << v2;
    }
    return result;
}

// Address range: 0x3d268a - 0x3d268b
int64_t function_3d268a(void) {
    // 0x3d268a
    int64_t result; // 0x3d268a
    return result;
}

// Address range: 0x3d268d - 0x3d2690
int64_t function_3d268d(int64_t a1) {
    // 0x3d268d
    int64_t result; // 0x3d268d
    return result;
}

// Address range: 0x3d26f0 - 0x3d27d9
int64_t function_3d26f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t result = unknown_71def3f6(); // 0x3d26f0
    int64_t v3; // 0x3d26f0
    unsigned char v4 = (char)result + (char)(v3 / 256); // 0x3d26f5
    uint64_t v5 = a4 - 2; // 0x3d26f9
    if (v5 == 0 || v4 == 0) {
        // 0x3d26fb
        return result;
    }
    int64_t v6 = 256 * (int64_t)v4 | v3 & -0xff01; // 0x3d26f5
    int64_t v7 = result & -256; // 0x3d273e
    int64_t v8 = (result + v5 / 256) % 256 | v7; // 0x3d273e
    int32_t * v9 = (int32_t *)(v8 - 0x4c18c9db); // 0x3d2740
    *v9 = *v9 + (int32_t)v3;
    uint32_t v10 = *(int32_t *)&v2; // 0x3d2748
    *(int32_t *)v2 = v10 / 2 | 0x80000000 * v10;
    *(int32_t *)a1 = (int32_t)v8;
    bool v11; // 0x3d26f0
    uint64_t v12 = (v11 ? -4 : 4) + a1; // 0x3d274a
    char * v13 = (char *)(v3 - 0x5dfec300 + v6); // 0x3d274b
    *v13 = *v13 & -119;
    *(int32_t *)v12 = __asm_insd((int16_t)v1);
    char * v14 = (char *)v6; // 0x3d2756
    *v14 = *v14 + v4;
    unsigned char v15 = *(char *)&v1; // 0x3d2758
    if (v15 < 117) {
        int32_t * v16 = (int32_t *)v5; // 0x3d275d
        *v16 = (int32_t)(v15 < 117) - (int32_t)v5 + *v16;
        *(char *)(v6 - 37) = (char)(v12 / 256);
        return v12 & 0xffffffff;
    }
    char * v17 = (char *)v5; // 0x3d27c1
    *v17 = *v17 & (char)(v1 / 256);
    *(char *)-0xccbbb36 = *(char *)-0xccbbb36 + v4;
    int64_t result2 = v7 | (int64_t)__asm_in_134((int16_t)v1); // 0x3d27c9
    int64_t v18 = 0x100000000 * (v12 + (v11 ? 0xfffffffc : 4)) / 0x100000000; // 0x3d27cb
    int64_t v19 = 50 * v18; // 0x3d27cb
    int32_t * v20 = (int32_t *)result2; // 0x3d27ce
    *v20 = *v20 + (v19 == 0x3200000000 * v18 >> 32 ? -24 : -23);
    int32_t * v21 = (int32_t *)(result2 - 0x338b3f54); // 0x3d27d1
    *v21 = *v21 + (int32_t)v19;
    return result2;
}

// Address range: 0x3d2838 - 0x3d2841
int64_t function_3d2838(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d2838
    int64_t result; // 0x3d2838
    return result;
}

// Address range: 0x3d286a - 0x3d287a
int64_t function_3d286a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d286a
    int64_t result; // 0x3d286a
    float80_t v1; // 0x3d286a
    *(int16_t *)(result - 0x5699d27) = (int16_t)v1;
    return result;
}

// Address range: 0x3d28ff - 0x3d2915
int64_t function_3d28ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_fffffffff1322905(); // 0x3d28ff
    unsigned char v2 = (char)a4 % 32; // 0x3d290e
    if (v2 != 0) {
        char * v3 = (char *)(a4 + 0x2f750039); // 0x3d290e
        unsigned char v4 = *v3; // 0x3d290e
        *v3 = v4 >> v2 | (char)((int16_t)v4 << (int16_t)(9 - v2)) | (char)((int32_t)v1 > 0x29bdb343) << 8 - v2;
    }
    return v1 + 0xd6424cbc & 0xffffffff;
}

// Address range: 0x3d2a18 - 0x3d2a19
int64_t function_3d2a18(void) {
    // 0x3d2a18
    int64_t result; // 0x3d2a18
    return result;
}

// Address range: 0x3d2a35 - 0x3d2a38
int64_t function_3d2a35(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d2a35
    int64_t result; // 0x3d2a35
    *(int32_t *)a4 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x3d2a40 - 0x3d2a45
int64_t function_3d2a40(void) {
    // 0x3d2a40
    return function_ffffffffd1b114d1();
}

// Address range: 0x3d2a55 - 0x3d2a66
int64_t function_3d2a55(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4;
    uint32_t v2 = v1 % 32; // 0x3d2a5e
    if (v2 != 0) {
        *(int32_t *)a4 = v1 << 32 - v2 | v1 >> v2;
    }
    return a1 & 0xffffffff;
}

// Address range: 0x3d2a7b - 0x3d2a99
int64_t function_3d2a7b(int64_t a1) {
    // 0x3d2a7b
    int64_t v1; // 0x3d2a7b
    uint64_t v2 = v1;
    unsigned char v3 = *(char *)(v2 + 9) + (char)(v2 / 256); // 0x3d2a8b
    int64_t result = 256 * (int64_t)v3 | v2 & -0xff01; // 0x3d2a8e
    if (v3 != 0) {
        result = function_3d2a18();
    }
    int32_t * v4 = (int32_t *)((v1 & 0xffffffff & result) - 86); // 0x3d2a94
    *v4 = *v4 + (int32_t)a1;
    return result;
}

// Address range: 0x3d2b5c - 0x3d2b5d
int64_t function_3d2b5c(void) {
    // 0x3d2b5c
    int64_t result; // 0x3d2b5c
    return result;
}

// Address range: 0x3d2b81 - 0x3d2b86
int64_t function_3d2b81(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d2b81
    int64_t result; // 0x3d2b81
    *(char *)a3 = 2 * (char)result;
    return result;
}

// Address range: 0x3d2bc3 - 0x3d2bc8
int64_t function_3d2bc3(int64_t a1) {
    // 0x3d2bc3
    return function_3d2b5c();
}

// Address range: 0x3d2bdc - 0x3d2be5
int64_t function_3d2bdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d2bdc
    int64_t v1; // 0x3d2bdc
    __asm_out_135(104, (int32_t)v1);
    return function_225ad0b();
}

// Address range: 0x3d2bf4 - 0x3d2bf7
int64_t function_3d2bf4(void) {
    // 0x3d2bf4
    int64_t result; // 0x3d2bf4
    return result;
}

// Address range: 0x3d2c0f - 0x3d2c10
int64_t function_3d2c0f(void) {
    // 0x3d2c0f
    int64_t result; // 0x3d2c0f
    return result;
}

// Address range: 0x3d2cd0 - 0x3d2cd3
int64_t function_3d2cd0(void) {
    // 0x3d2cd0
    int64_t result; // 0x3d2cd0
    return result;
}

// Address range: 0x3d2d08 - 0x3d2d14
int64_t function_3d2d08(int64_t a1) {
    // 0x3d2d08
    int64_t v1; // 0x3d2d08
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v2 = (char)v2 + 1;
    return (v3 + 207) % 256 | v3 & -256;
}

// Address range: 0x3d2d7d - 0x3d2d80
int64_t function_3d2d7d(void) {
    // 0x3d2d7d
    int64_t v1; // 0x3d2d7d
    return function_3d2dd6(v1, v1, v1, (int64_t)&g3);
}

// Address range: 0x3d2dcb - 0x3d2dcd
int64_t function_3d2dcb(void) {
    // 0x3d2dcb
    int64_t result; // 0x3d2dcb
    return result;
}

// Address range: 0x3d2dcf - 0x3d2dd5
int64_t function_3d2dcf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d2dcf
    int64_t v1; // 0x3d2dcf
    int64_t v2 = v1;
    char v3 = *(char *)(v2 + 5 + 2 * v2); // 0x3d2dcf
    bool v4; // 0x3d2dcf
    return function_3d2e3c(a1, a2, a3 & -256 | (int64_t)(v3 + (char)a3 + (char)v4), v1);
}

// Address range: 0x3d2dd6 - 0x3d2df3
int64_t function_3d2dd6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    return function_3d2e00(a1, a2, a3);
}

// Address range: 0x3d2df4 - 0x3d2e00
int64_t function_3d2df4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d2df4
    int64_t v1; // 0x3d2df4
    int64_t v2 = v1;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    char * v3 = (char *)(a4 + 61); // 0x3d2df8
    *v3 = -*v3;
    return v2 - (v1 & 0xff00) & 0xff00 | v2 & -0xff01;
}

// Address range: 0x3d2e00 - 0x3d2e02
int64_t function_3d2e00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d2e00
    int64_t result; // 0x3d2e00
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x3d2e2d - 0x3d2e30
int64_t function_3d2e2d(int64_t a1) {
    // 0x3d2e2d
    int64_t result; // 0x3d2e2d
    return result;
}

// Address range: 0x3d2e3c - 0x3d2ea6
int64_t function_3d2e3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d2e3c
    int64_t v1; // 0x3d2e3c
    if (*(char *)(v1 + 2) > (char)(v1 / 256)) {
        // 0x3d2ea1
        return 0xc02b0a60;
    }
    // 0x3d2e41
    bool v2; // 0x3d2e3c
    int64_t v3 = (v2 ? -2 : 2) + a1; // 0x3d2e4b
    char * v4 = (char *)v3; // 0x3d2e51
    *v4 = *v4 ^ (char)v1;
    int64_t v5 = a4 - 1; // 0x3d2e59
    int64_t v6 = unknown_6d2fac5a(v3); // 0x3d2e59
    if (v5 != 0) {
        v6 = function_3d2df4(v3, a2, a3, v5);
    }
    // 0x3d2e5b
    return v6 & -256 | (int64_t)__asm_in_136(64);
}

// Address range: 0x3d2ec0 - 0x3d2ece
int64_t function_3d2ec0(int64_t a1, int64_t result) {
    // 0x3d2ec0
    *(int32_t *)a1 = 0x7296149e;
    return result;
}

// Address range: 0x3d2ef5 - 0x3d2efe
int64_t function_3d2ef5(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x457ca926); // 0x3d2ef5
    int64_t result; // 0x3d2ef5
    *v1 = *v1 + (int32_t)result;
    return result;
}
