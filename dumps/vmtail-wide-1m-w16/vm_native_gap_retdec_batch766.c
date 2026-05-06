/*
 * Targeted RetDec C for native executable gap queue batch 766.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x6c690-0x6c890 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6c890-0x6ca90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6ca90-0x6cc90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x381b30-0x381c30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x381d30-0x381f30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x381f30-0x382130 rank=- name=- kind=- bytes=- uncovered=-
 *   0x382130-0x382330 rank=- name=- kind=- bytes=- uncovered=-
 *   0x382330-0x382430 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1e170e6d();
int64_t function_3796efd6();
int64_t function_381b30(void);
int64_t function_381bb6(int64_t a1, int64_t a2);
int64_t function_381bc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_381bde(void);
int64_t function_381be3(void);
int64_t function_381bfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_381d12();
int64_t function_381d30(int64_t a1, int64_t a2);
int64_t function_381d3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_381d88(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_381d95(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_381e38(int64_t a1);
int64_t function_381e6e(int64_t a1);
int64_t function_381e71(int64_t a1, int64_t a2, int64_t a3);
int64_t function_381ea0(void);
int64_t function_381ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_381f16(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_381f7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_381fd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38202b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_382049(void);
int64_t function_38205f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_38219a(int64_t a1);
int64_t function_382204(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_382379(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_38239a(void);
int64_t function_3823a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_611750();
int64_t function_6c690(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6c6d1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6c758(void);
int64_t function_6c772(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_6c794(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_6c810(int64_t a1);
int64_t function_6c81d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6c883(void);
int64_t function_6c888(void);
int64_t function_6c8f1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6c958(int64_t a1, int64_t a2);
int64_t function_6c9b1(int64_t a1, int64_t a2);
int64_t function_6c9cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6c9f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_6cac9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6cae0(void);
int64_t function_6cb0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_7d4f8db3();
int64_t function_ffffffff9abfe7d5();
int64_t function_ffffffffb2de59a8();
int64_t function_ffffffffca78a3f9();
int64_t function_fffffffff7db67f7();
int64_t unknown_1042f792();
int64_t unknown_10447cc8();
int64_t unknown_10afa51f();
int64_t unknown_1128b30d();
int64_t unknown_24c9cd65();
int64_t unknown_27475b83();
int64_t unknown_3a42c38d();
int64_t unknown_4326123b();
int64_t unknown_4ed106bf();
int64_t unknown_76549d36();
int64_t unknown_7a7e0729();
int64_t unknown_ffffffff8dec58a6();
int64_t unknown_ffffffffad7d58e9();
int64_t unknown_ffffffffe8139933();
int64_t unknown_ffffffffecb963e8();
int64_t unknown_fffffffff5f8cd09();
int64_t unknown_fffffffffab4ddde();
int64_t unknown_fffffffffbb819f4();

// Address range: 0x6c690 - 0x6c692
int64_t function_6c690(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6c690
    int64_t result; // 0x6c690
    return result;
}

// Address range: 0x6c6d1 - 0x6c6d8
int64_t function_6c6d1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6c6d1
    return function_7d4f8db3();
}

// Address range: 0x6c758 - 0x6c75a
int64_t function_6c758(void) {
    // 0x6c758
    int64_t v1; // 0x6c758
    return function_6c794(v1, v1, v1);
}

// Address range: 0x6c772 - 0x6c78e
int64_t function_6c772(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x6c772
    __asm_int1(0xf13a0380);
    *(char *)0xf13a0369 = *(char *)0xf13a0369 | (char)(a4 / 256);
    return function_ffffffffb2de59a8();
}

// Address range: 0x6c794 - 0x6c7be
int64_t function_6c794(int64_t a1, int64_t a2, uint64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x11df053e); // 0x6c794
    *v1 = *v1 | -0x2db9ffce;
    int64_t v2; // 0x6c794
    uint64_t v3 = v2 + 77; // 0x6c79f
    int64_t result = v3 % 256 | v2 & -256; // 0x6c79f
    char v4 = a3 / 256; // 0x6c7a2
    char v5 = *(char *)(v2 - 0x59c49bf) + (char)((char)v2 < 179); // 0x6c7a2
    if ((((char)((char)v2 < 179) + v4 - v5 ^ v4) & (v5 ^ v4)) < 0) {
        // 0x6c7cb
        return result;
    }
    // 0x6c7aa
    *(char *)-0x41c19756 = *(char *)-0x41c19756 ^ (char)v3;
    *(int32_t *)0x7bf6345d522f60f6 = (int32_t)result;
    return result;
}

// Address range: 0x6c810 - 0x6c813
int64_t function_6c810(int64_t a1) {
    // 0x6c810
    int64_t result; // 0x6c810
    return result;
}

// Address range: 0x6c81d - 0x6c842
int64_t function_6c81d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6c81d
    int64_t v1; // 0x6c81d
    int64_t v2 = v1;
    int64_t v3 = (int64_t)(*(int32_t *)(v1 + 105) + (int32_t)a2); // 0x6c81d
    *(int64_t *)v2 = v2 + 1;
    __asm_outsd((int16_t)a3, *(int32_t *)v3);
    *(char *)-0x244b52df8f5c3a78 = *(char *)v3;
    char * v4 = (char *)(4 * a1 + 34 + a4); // 0x6c839
    *v4 = *v4 + (char)(v1 / 256);
    return function_3796efd6();
}

// Address range: 0x6c883 - 0x6c884
int64_t function_6c883(void) {
    // 0x6c883
    int64_t result; // 0x6c883
    return result;
}

// Address range: 0x6c888 - 0x6c889
int64_t function_6c888(void) {
    // 0x6c888
    int64_t result; // 0x6c888
    return result;
}

// Address range: 0x6c8f1 - 0x6c8f5
int64_t function_6c8f1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6c8f1
    bool v1; // 0x6c8f1
    *(int32_t *)a3 = (int32_t)v1;
    return function_6c888();
}

// Address range: 0x6c958 - 0x6c975
int64_t function_6c958(int64_t a1, int64_t a2) {
    // 0x6c958
    return (int64_t)(*(int32_t *)(a2 - 0x1affe15d) | (int32_t)__asm_sti(a1, a2));
}

// Address range: 0x6c9b1 - 0x6c9bf
int64_t function_6c9b1(int64_t a1, int64_t a2) {
    // 0x6c9b1
    int64_t v1; // 0x6c9b1
    *(int32_t *)a2 = (int32_t)v1 & 0x61607fc5;
    return (int64_t)*(int32_t *)0x87dd6182;
}

// Address range: 0x6c9cf - 0x6c9dc
int64_t function_6c9cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6c9cf
    return function_ffffffffca78a3f9();
}

// Address range: 0x6c9f6 - 0x6ca7f
int64_t function_6c9f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x6c9f6
    int64_t v1; // 0x6c9f6
    uint64_t result3 = v1;
    int64_t v2 = a6;
    int32_t v3 = a2;
    __asm_outsd((int16_t)a3, v3);
    int32_t * v4; // 0x6ca6c
    bool v5; // 0x6c9f6
    if (true == !v5) {
        // 0x6ca6c
        int64_t result; // 0x6c9f6
        v4 = (int32_t *)result;
        *v4 = *v4 + (int32_t)result;
        return result;
    }
    // 0x6c9f9
    float80_t v6; // 0x6c9f6
    *(int16_t *)(a2 - 0x703a6e85) = (int16_t)v6;
    int64_t v7 = a4 - 1; // 0x6ca01
    if (v7 != 0 == v5) {
        unsigned char v8 = (char)v7 % 32; // 0x6ca67
        if (v8 != 0) {
            char * v9 = (char *)(a1 - 79 + 8 * v7); // 0x6ca67
            *v9 = *v9 >> v8;
        }
        int64_t result2 = result3 & -256 | (int64_t)*(char *)(result3 % 256 + v1);
        v4 = (int32_t *)result2;
        *v4 = *v4 + (int32_t)result2;
        return result2;
    }
    if (v5) {
        uint64_t v10 = __asm_hlt(); // 0x6ca42
        return v10 & -256 | (int64_t)*(char *)(v10 % 256 + v1);
    }
    if (!v5) {
        int32_t v11 = *(int32_t *)(((int64_t)&v2 | 7) + 8 * v1); // 0x6ca08
        __asm_out(90, (int32_t)result3);
        __asm_outsb(3415, *(char *)(int64_t)(v3 - v11));
        return result3;
    }
    char * v12 = (char *)(v7 + 4 * a1); // 0x6ca1a
    char v13 = *v12 + (char)(result3 / 256); // 0x6ca1a
    *v12 = v13;
    if (v13 != 0) {
        // 0x6ca79
        return result3;
    }
    // 0x6ca20
    return v7 & 0xffffffff;
}

// Address range: 0x6cac9 - 0x6cacd
int64_t function_6cac9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6cac9
    int64_t result; // 0x6cac9
    return result;
}

// Address range: 0x6cae0 - 0x6cae1
int64_t function_6cae0(void) {
    // 0x6cae0
    int64_t result; // 0x6cae0
    return result;
}

// Address range: 0x6cb0b - 0x6cc8a
int64_t function_6cb0b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x6cb0b
    bool v1; // 0x6cb0b
    if (v1) {
        // 0x6cb0d
        return function_6cae0();
    }
    uint64_t result = __asm_sti(a1, a2); // 0x6cb2f
    // 0x6cb32
    return result + (v1 ? 0x6a714cb4 : 0x6a714cb3) & 0xffffffff;
    if (v1) {
        // 0x6cbf2
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        return result;
    }
    int64_t result2 = result & -53; // 0x6cbec
    int32_t * v2 = (int32_t *)(a4 + 0x35f1b26b + 2 * a3); // 0x6cc6b
    *v2 = *v2 - 1;
    int32_t * v3 = (int32_t *)(result2 + 0xf5aa47); // 0x6cc74
    *v3 = *v3 ^ (int32_t)a4;
    char * v4 = (char *)(a3 + 0x494d3f0); // 0x6cc7a
    *v4 = *v4 + (char)(result / 256);
    return result2;
}

// Address range: 0x381b30 - 0x381b35
int64_t function_381b30(void) {
    // 0x381b30
    return unknown_76549d36();
}

// Address range: 0x381bb6 - 0x381bc3
int64_t function_381bb6(int64_t a1, int64_t a2) {
    // 0x381bb6
    int64_t v1; // 0x381bb6
    char v2 = v1; // 0x381bb6
    __asm_out_133(99, v2);
    __asm_out_133(57, v2);
    return a1 & 0xffffffff;
}

// Address range: 0x381bc4 - 0x381bc9
int64_t function_381bc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x381bc4
    int64_t v1; // 0x381bc4
    int64_t v2 = v1;
    return (v2 + a3) % 256 | v2 & -256;
}

// Address range: 0x381bde - 0x381bdf
int64_t function_381bde(void) {
    // 0x381bde
    int64_t result; // 0x381bde
    return result;
}

// Address range: 0x381be3 - 0x381be5
int64_t function_381be3(void) {
    // 0x381be3
    return function_381bde();
}

// Address range: 0x381bfa - 0x381c17
int64_t function_381bfa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 66); // 0x381c00
    *v1 = *v1 + (int32_t)a2;
    return __asm_wait() & 0xda083327;
}

// Address range: 0x381d30 - 0x381d3d
int64_t function_381d30(int64_t a1, int64_t a2) {
    // 0x381d30
    int64_t v1; // 0x381d30
    if ((int32_t)v1 <= (int32_t)a1) {
        function_381d12();
    }
    // 0x381d35
    return unknown_4326123b();
}

// Address range: 0x381d3d - 0x381d49
int64_t function_381d3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x381d3d
    return a3 & 0xffffffff;
}

// Address range: 0x381d88 - 0x381d92
int64_t function_381d88(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x381d88
    int64_t result; // 0x381d88
    if (a4 == 1 || (char)(a3 / 256) == (char)(result / 256)) {
        // 0x381d8c
        *(int32_t *)a2 = (int32_t)result + (int32_t)a2;
        return 2 * result & 0xffffffff;
    }
    // 0x381d93
    return result;
}

// Address range: 0x381d95 - 0x381e06
int64_t function_381d95(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int32_t v2 = *(int32_t *)(a3 + 0x3d562f3a); // 0x381d95
    int64_t v3; // 0x381d95
    bool v4; // 0x381d95
    int64_t v5 = (int32_t)v4 + (int32_t)v3 - v2; // 0x381d95
    int64_t v6 = a3 & 0xffffffff ^ 232; // 0x381d9d
    int32_t * v7 = (int32_t *)(4 * a4 + 20 + v5); // 0x381d9f
    *v7 = *v7 + (int32_t)a1;
    int32_t * v8 = (int32_t *)(v6 - 106); // 0x381da3
    uint32_t v9 = *v8; // 0x381da3
    uint32_t v10 = v9 + (int32_t)v3; // 0x381da3
    *v8 = v10;
    int64_t v11 = a4 - (v10 < v9 ? 0xe8004878 : 0xe8004877); // 0x381da9
    int32_t * v12 = (int32_t *)v6; // 0x381dae
    *v12 = *v12 + (int32_t)a2;
    int16_t v13 = *(int16_t *)(v3 + 0x4b00d3c0); // 0x381db0
    uint32_t v14 = *(int32_t *)&v1; // 0x381db7
    int64_t v15 = v11 & v3;
    int32_t * v16 = (int32_t *)(a2 + 0x7917d40c); // 0x381dbb
    *v16 = *v16 + (int32_t)v15;
    char * v17 = (char *)(v3 + 83); // 0x381dc1
    *v17 = *v17 + (char)(v14 / 256);
    char * v18 = (char *)(a2 - v5 & 0xffffffff); // 0x381dd1
    *v18 = *v18 & (char)v11;
    *(int64_t *)(v5 - 8) = v15 & 0xffffffff;
    float80_t v19; // 0x381d95
    *(int16_t *)((int64_t)v14 - 0x17fe17c5) = (int16_t)(v19 - (float80_t)v13);
    *(int32_t *)-0x16d18c1c = *(int32_t *)-0x16d18c1c + (int32_t)v1;
    uint32_t v20 = *(int32_t *)0x8c02e4d; // 0x381de3
    uint32_t v21 = v20 + (int32_t)v6; // 0x381de3
    *(int32_t *)0x8c02e4d = v21;
    uint64_t v22 = unknown_fffffffffbb819f4(); // 0x381dee
    char v23 = *(char *)(v1 - 45); // 0x381df6
    int64_t v24 = 256 * (int64_t)(v23 + (char)(v21 < v20) + (char)(v22 / 256)); // 0x381df6
    char v25 = *(char *)(v24 | v22 & -0xff01); // 0x381df9
    return 0x10000 * (int32_t)(v24 | (int64_t)((char)v22 - v25)) >> 16;
}

// Address range: 0x381e38 - 0x381e39
int64_t function_381e38(int64_t a1) {
    // 0x381e38
    int64_t result; // 0x381e38
    return result;
}

// Address range: 0x381e6e - 0x381e71
int64_t function_381e6e(int64_t a1) {
    // 0x381e6e
    int64_t result; // 0x381e6e
    return result;
}

// Address range: 0x381e71 - 0x381e7a
int64_t function_381e71(int64_t a1, int64_t a2, int64_t a3) {
    // 0x381e71
    int64_t v1; // 0x381e71
    return v1 & 0xe8760baf;
}

// Address range: 0x381ea0 - 0x381ea1
int64_t function_381ea0(void) {
    // 0x381ea0
    int64_t result; // 0x381ea0
    return result;
}

// Address range: 0x381ec0 - 0x381ee9
int64_t function_381ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_10447cc8(); // 0x381ec2
    int64_t v2; // 0x381ec0
    int64_t v3 = -1 - (char)a3 < (char)v2 ? 45 : 44; // 0x381ec9
    char v4 = *(char *)(((v3 + v1) % 256 | v1 & -256) + (8 * v2 | 1)); // 0x381ecb
    if (llvm_ctpop_i8(v4 & (char)a4) % 2 != 0) {
        function_381ea0();
    }
    // 0x381ed1
    unknown_fffffffffab4ddde();
    return unknown_ffffffffad7d58e9();
}

// Address range: 0x381f16 - 0x381f2f
int64_t function_381f16(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 - 0x218ad2fb + 4 * a4); // 0x381f1c
    *v1 = *v1 + (char)(a3 / 256);
    unknown_7a7e0729();
    return __asm_int3();
}

// Address range: 0x381f7a - 0x381fd0
int64_t function_381f7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x381f7a
    bool v3; // 0x381f7a
    unknown_27475b83((int32_t)v2 + (int32_t)a1 + (int32_t)v3);
    unknown_1042f792(0x3c080038);
    __asm_iretd(0x3c080038);
    *(char *)0x3c080038 = *(char *)0x3c080038 + (char)v2;
    int64_t v4 = (int64_t)((int32_t)v2 - *(int32_t *)(v2 - 0x17dc19f3)); // 0x381f96
    int32_t * v5 = (int32_t *)(v2 + 0x7dacd911); // 0x381f9c
    *v5 = *v5 + (int32_t)v2;
    *(char *)a3 = *(char *)&v1 - (char)a3;
    int64_t v6; // 0x381f7a
    unsigned char v7 = llvm_ctpop_i8((char)(*(int32_t *)&v6 - *(int32_t *)0x3c080038)); // 0x381fad
    int64_t v8 = (a5 & (int64_t)&g1) == 0 ? 4 : -4; // 0x381fad
    int64_t v9 = v8 + a2; // 0x381fad
    v6 = v9;
    float80_t v10; // 0x381f7a
    *(int32_t *)(v8 + 0x3c080038) = (int32_t)v10;
    __asm_frstor(*(int864_t *)(8 * v2 + 85 + v4));
    *(int64_t *)v4 = v9;
    if (v7 % 2 != 0) {
        // 0x381fb8
        unknown_4ed106bf();
    }
    // 0x381fc0
    return function_1e170e6d();
}

// Address range: 0x381fd1 - 0x381fdc
int64_t function_381fd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x381fd1
    int64_t v1; // 0x381fd1
    char * v2 = (char *)(v1 + 0x6901e82c); // 0x381fd4
    *v2 = *v2 + (char)(v1 / 256);
    return a4 & 0xffffffff;
}

// Address range: 0x38202b - 0x38203d
int64_t function_38202b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x38202b
    unknown_ffffffffe8139933();
    return function_fffffffff7db67f7();
}

// Address range: 0x382049 - 0x38204e
int64_t function_382049(void) {
    // 0x382049
    return function_ffffffff9abfe7d5();
}

// Address range: 0x38205f - 0x382187
int64_t function_38205f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3 = a7;
    int64_t v4; // 0x38205f
    int32_t v5 = v4; // 0x38205f
    int32_t v6 = v4; // 0x38205f
    uint32_t v7 = v5 + v6; // 0x38205f
    __asm_out(-126, (int32_t)v4);
    uint64_t v8 = a4 - 1; // 0x382063
    if (v8 != 0 == (v7 != 0) || ((v7 ^ v5) & (v7 ^ v6)) >= 0) {
        // 0x382068
        return v4 + 0x72e2408d + v4 & 0xffffffff;
    }
    char * v9 = (char *)v8; // 0x3820de
    *v9 = (char)(v4 / 256);
    unsigned char v10 = (char)v4; // 0x3820e0
    char v11 = v10 + 122; // 0x3820e0
    unknown_ffffffffecb963e8();
    if (v11 < 0 == (v11 & (v10 ^ -128)) < 0 != v11 != 0) {
        // 0x3820eb
        return a5 & -256 | (int64_t)*(char *)&v1;
    }
    if (v10 <= 133) {
        // 0x38209b
        return unknown_ffffffff8dec58a6(0x71f7f207);
    }
    // 0x382103
    unknown_fffffffff5f8cd09();
    int32_t * v12 = (int32_t *)(v1 + 9); // 0x38210f
    *v12 = *v12 + (int32_t)v1;
    unknown_10afa51f();
    int32_t v13 = v7 / 256 % 256 ^ -0x27270280;
    int32_t v14 = __asm_in(-75); // 0x382127
    int64_t v15 = v14; // 0x382127
    *v9 = *v9 | (char)v14;
    uint64_t v16 = v8 / 256 + v15; // 0x382152
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v4;
    __asm_out_134((int16_t)v13, (char)v16);
    *(int32_t *)v2 = *(int32_t *)&v2 + v13;
    int64_t result = function_611750(v16 % 256 | v15 & 0xffffff00, 0xe85bfeb9); // 0x382168
    int32_t * v17 = (int32_t *)(a6 + 0x73d93558); // 0x382174
    *v17 = *v17 + (int32_t)(int64_t)&v3;
    return result;
}

// Address range: 0x38219a - 0x38219d
int64_t function_38219a(int64_t a1) {
    // 0x38219a
    int64_t v1; // 0x38219a
    int64_t v2 = v1;
    return (v2 + 230) % 256 | v2 & -256;
}

// Address range: 0x382204 - 0x38236c
int64_t function_382204(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    char * v2 = (char *)(a3 - 103); // 0x382204
    unsigned char v3 = *v2; // 0x382204
    *v2 = v3 / 2 | 128 * v3;
    int64_t v4 = unknown_1128b30d(); // 0x382207
    int64_t v5; // 0x382204
    char * v6 = (char *)(v5 + 37); // 0x38220c
    uint64_t v7 = v5 / 256; // 0x38220c
    char v8 = v7; // 0x38220c
    *v6 = *v6 | v8;
    int32_t v9 = v4; // 0x382210
    *(int32_t *)-0x17fdf6ff86f7801e = v9;
    int32_t * v10 = (int32_t *)(v4 + 4 * a3); // 0x382219
    *v10 = *v10 + (int32_t)v5;
    *(int32_t *)a1 = v9;
    int64_t v11 = v5 & 59 | 196; // 0x38221f
    int64_t v12 = v5 & 0xffffff00; // 0x38221f
    char * v13 = (char *)(v11 | v12); // 0x38224a
    char v14 = v11; // 0x38224a
    char v15 = *v13 + v14; // 0x38224a
    *v13 = v15;
    unsigned char v16 = *(char *)-0x7ba1bbaa; // 0x38224f
    unsigned char v17 = v16 + v8; // 0x38224f
    *(char *)-0x7ba1bbaa = v17;
    unsigned char v18 = (char)a5 | (char)&g2; // 0x382258
    unsigned char v19 = (char)(v17 < v16) + (char)v5; // 0x382258
    bool v20 = v17 < v16 ? v19 != -1 | v18 < v18 + (char)(v17 < v16) - v19 : v18 < v19; // 0x382258
    unsigned char v21 = v14 - 71 + v15 + (char)v20; // 0x38225a
    int64_t v22 = v12 | (int64_t)v21; // 0x38225a
    unsigned char v23 = *(char *)v22; // 0x38225d
    int64_t v24 = unknown_24c9cd65(a1 - 4); // 0x38225f
    __asm_out_135((int16_t)v22, (int32_t)v24);
    char * v25 = (char *)v24; // 0x382265
    unsigned char v26 = *v25; // 0x382265
    char v27 = v24; // 0x382265
    char v28 = v21 < v23; // 0x382265
    unsigned char v29 = v28 + v27; // 0x382265
    char v30 = v26 - v29; // 0x382265
    bool v31 = v21 < v23 ? v29 != -1 | v26 < v30 - v28 : v26 < v29; // 0x382265
    *v25 = v30;
    int32_t * v32 = (int32_t *)(a4 + 0x13d006b); // 0x382267
    *v32 = -1 - *v32;
    int64_t v33 = v7 + v5 + (int64_t)v31; // 0x38226d
    int64_t v34 = 256 * v33 & 0xff00 | v5 & -0xff01; // 0x38226d
    char * v35 = (char *)(8 * v22 + v24); // 0x38226f
    *v35 = *v35 & (char)(a4 / 256);
    *(char *)v1 = *(char *)&v1 - v27;
    int32_t v36 = *(int32_t *)0x6aad454affc082b4; // 0x382274
    unsigned char v37 = *(char *)&v1; // 0x38227e
    int64_t v38 = v1 - 1; // 0x38227e
    v1 = v38;
    *(char *)0x17f25989 = *(char *)0x17f25989 + (char)v33;
    int32_t * v39 = (int32_t *)(v34 + 0x5fa7b800); // 0x382288
    *v39 = *v39 | (int32_t)v38;
    *(int64_t *)((int64_t)(v36 & -256 | (int32_t)v37) - 8) = v34;
    int64_t v40; // bp+16, 0x382204
    return (int64_t)&v40;
}

// Address range: 0x382379 - 0x38238f
int64_t function_382379(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x382379
    int64_t v1; // 0x382379
    *(int32_t *)a1 = (int32_t)(v1 / 256 % 256 | a3) + (int32_t)v1;
    int64_t v2 = unknown_3a42c38d(); // 0x382386
    return (v2 + 192) % 256 | v2 & -256;
}

// Address range: 0x38239a - 0x38239b
int64_t function_38239a(void) {
    // 0x38239a
    int64_t result; // 0x38239a
    return result;
}

// Address range: 0x3823a4 - 0x3823b2
int64_t function_3823a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3823a4
    int64_t v1; // 0x3823a4
    *(char *)(a4 + 0x1decec98) = (char)v1;
    return function_38239a();
}
