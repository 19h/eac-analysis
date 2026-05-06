/*
 * Targeted RetDec C for native executable gap queue batch 797.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xfab9c-0xfad9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfad9c-0xfaf9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xfaf9c-0xfb19c rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a4539-0x3a4739 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a4739-0x3a4939 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a4939-0x3a4b39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a4b39-0x3a4d39 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3a4d39-0x3a4f39 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1774dd2();
int64_t function_23ae75c();
int64_t function_3a4539(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_3a45b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a4626(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3a4741(int64_t a1);
int64_t function_3a478c(void);
int64_t function_3a47a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a47f6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3a48eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a4923(void);
int64_t function_3a493c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a4962(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a4a07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3a4aba(int64_t a1);
int64_t function_3a4b2b(void);
int64_t function_3a4c06(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a4c4a(void);
int64_t function_3a4c6d(void);
int64_t function_3a4c72(void);
int64_t function_3a4c75(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a4c77(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3a4cb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a4d2f(void);
int64_t function_3a4d7e(void);
int64_t function_3a4dc7(void);
int64_t function_3a4e7a(void);
int64_t function_b012b2();
int64_t function_c6d58();
int64_t function_fab9c(int64_t a1);
int64_t function_fad20(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fad25(int64_t a1, int64_t a2);
int64_t function_fad71(int64_t a1, int64_t a2);
int64_t function_fad8f(void);
int64_t function_fadaf(int64_t a1);
int64_t function_fadc0(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_fae4d(int64_t a1);
int64_t function_faea3(void);
int64_t function_faeb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_fb037(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ffffffffabef5f8f();
int64_t function_ffffffffb4d8e26b();
int64_t function_ffffffffdc200952();
int64_t unknown_15df0839();
int64_t unknown_222a3a6();
int64_t unknown_23c2a2cf();
int64_t unknown_289d8169();
int64_t unknown_28b06992();
int64_t unknown_2cfa5bbf();
int64_t unknown_38797ad5();
int64_t unknown_3aaee0d3();
int64_t unknown_3ad90986();
int64_t unknown_43ba8f73();
int64_t unknown_7f40662c();
int64_t unknown_ffffffffa10fc48f();
int64_t unknown_ffffffffab591549();
int64_t unknown_ffffffffabc53cde();
int64_t unknown_ffffffffabefa6cf();
int64_t unknown_ffffffffad7f6785();
int64_t unknown_ffffffffb1d4dda9();
int64_t unknown_ffffffffb4c78044();
int64_t unknown_ffffffffb8d9a231();
int64_t unknown_ffffffffc92454bd();
int64_t unknown_ffffffffcec7ce13();
int64_t unknown_ffffffffd929f74f();
int64_t unknown_ffffffffdfda86f2();
int64_t unknown_fffffffff0acacc3();
int64_t unknown_fffffffffffffff8();

// Address range: 0xfab9c - 0xfaba8
int64_t function_fab9c(int64_t a1) {
    // 0xfab9c
    float80_t v1; // 0xfab9c
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0xfab9c
    __asm_out(-98, (int32_t)v2);
    return (int64_t)*(int32_t *)0xe0bf01e8;
}

// Address range: 0xfad20 - 0xfad24
int64_t function_fad20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xfad20
    return function_fad8f();
}

// Address range: 0xfad25 - 0xfad2c
int64_t function_fad25(int64_t a1, int64_t a2) {
    // 0xfad25
    return function_b012b2();
}

// Address range: 0xfad71 - 0xfad79
int64_t function_fad71(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x3de1e674); // 0xfad71
    *v1 = *v1 | 10;
    int64_t result; // 0xfad71
    return result;
}

// Address range: 0xfad8f - 0xfad98
int64_t function_fad8f(void) {
    // 0xfad8f
    return (int64_t)*(int32_t *)0x255ca0975a573a91;
}

// Address range: 0xfadaf - 0xfadb2
int64_t function_fadaf(int64_t a1) {
    // 0xfadaf
    int64_t result; // 0xfadaf
    return result;
}

// Address range: 0xfadc0 - 0xfae42
int64_t function_fadc0(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0xfadc0
    int64_t v1; // 0xfadc0
    unsigned char v2 = (char)v1 ^ -66; // 0xfadc0
    if (llvm_ctpop_i8(v2) % 2 == 0) {
        int64_t v3 = v1 & -256 | (int64_t)v2; // 0xfadc0
        char * v4 = (char *)(v3 - 0x17fe177c); // 0xfae20
        *v4 = *v4 + (char)v1;
        unsigned char v5 = *(char *)0x1e8127d498b32ff; // 0xfae2b
        int64_t result = v3 + 0xdce5a843 & 0xffffff00 | (int64_t)v5; // 0xfae2b
        int32_t * v6 = (int32_t *)(2 * v1 + 29 + result); // 0xfae37
        *v6 = *v6 + (int32_t)a4;
        uint32_t v7 = *(int32_t *)0x1f7d88f; // 0xfae3b
        *(int32_t *)0x1f7d88f = v7 / 2 | 0x80000000 * v7;
        *(char *)a3 = v5;
        return result;
    }
    int64_t v8 = a3; // 0xfadce
    unsigned char v9 = *(char *)(unknown_23c2a2cf() - 64) + (char)v8; // 0xfadce
    v8 = v8 & -256 | (int64_t)v9;
    while (a4 == 0) {
        // 0xfadc4
        v9 = *(char *)(unknown_23c2a2cf() - 64) + (char)v8;
        v8 = v8 & -256 | (int64_t)v9;
    }
    char * v10 = (char *)v8; // 0xfadd3
    *v10 = (char)(v9 < (char)a3) - (char)(a4 / 256) + *v10;
    *(char *)a1 = *(char *)(char *)&g7 ^ (char)(a3 / 256);
    *(int32_t *)a1 = (int32_t)unknown_ffffffffabc53cde();
    return v1 & 0xffffffff;
}

// Address range: 0xfae4d - 0xfae50
int64_t function_fae4d(int64_t a1) {
    // 0xfae4d
    int64_t result; // 0xfae4d
    return result;
}

// Address range: 0xfaea3 - 0xfaeab
int64_t function_faea3(void) {
    // 0xfaea3
    return unknown_ffffffffb1d4dda9();
}

// Address range: 0xfaeb7 - 0xfb037
int64_t function_faeb7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = unknown_2cfa5bbf(); // 0xfaeb9
    uint32_t v3 = (int32_t)a4 % 32; // 0xfaebe
    bool v4; // 0xfaeb7
    if (v3 != 0) {
        uint32_t v5 = *(int32_t *)&v1; // 0xfaebe
        *(int32_t *)v1 = v5 >> v3 | (int32_t)v4 << 32 - v3 | (int32_t)((int64_t)v5 << (int64_t)(33 - v3));
    }
    char * v6 = (char *)(a1 + 0x1e80bb8); // 0xfaec0
    int64_t v7; // 0xfaeb7
    *v6 = *v6 ^ (char)v7;
    int32_t * v8 = (int32_t *)(v1 + 4 * a1); // 0xfaec6
    *v8 = *v8 + 0x6311b609;
    *(char *)a1 = *(char *)&v1;
    unknown_38797ad5(v2 & 0xffffffff, v1 + (v4 ? -1 : 1));
    __asm_hlt();
    *(char *)0x1f82749 = *(char *)0x1f82749 + (char)a4;
    __asm_int3();
    return function_c6d58();
}

// Address range: 0xfb037 - 0xfb17b
int64_t function_fb037(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xfb037
    int64_t v1; // 0xfb037
    int64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0xfb123
    int64_t * v4 = (int64_t *)(v2 + 8); // 0xfb140
    *v3 = *v4;
    *v4 = a6;
    *(int64_t *)v2 = v2 + 24;
    *v3 = *v4;
    return function_c6d58();
}

// Address range: 0x3a4539 - 0x3a4589
int64_t function_3a4539(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x3a4539
    int64_t v1; // 0x3a4539
    float80_t v2; // 0x3a4539
    *(float32_t *)(v1 - 107) = (float32_t)v2;
    bool v3; // 0x3a4539
    *(char *)0x1e888f0 = *(char *)0x1e888f0 + (v3 ? 38 : 37);
    int64_t v4; // 0x3a4539
    uint32_t v5 = *(int32_t *)&v4 | 0x1e888f0; // 0x3a4544
    int32_t * v6 = (int32_t *)(int64_t)v5; // 0x3a4546
    *v6 = *v6 - (int32_t)v1;
    int64_t v7 = unknown_ffffffffd929f74f(); // 0x3a4548
    int64_t v8 = v7 | a3 / 256 % 256; // 0x3a454e
    __asm_out_133((int16_t)a3, (int32_t)v8);
    int64_t v9; // 0x3a4539
    int64_t v10 = v9 & 0xffffffff; // 0x3a4551
    int64_t v11 = a4 / 256 % 256 & v8 | v7 & 0xffffff00; // 0x3a4553
    int32_t * v12 = (int32_t *)(v1 - 0x17fec22f); // 0x3a455b
    int32_t v13 = v11; // 0x3a455b
    *v12 = *v12 + v13;
    *(int32_t *)(a3 & 0xffffffff) = *(int32_t *)&v4 + v13;
    int64_t v14 = unknown_289d8169(v10); // 0x3a4563
    __asm_out(-15, (int32_t)v14);
    int32_t * v15 = (int32_t *)(v14 + 1); // 0x3a456a
    *v15 = *v15 + (int32_t)a4;
    int64_t v16 = unknown_43ba8f73(); // 0x3a456d
    *(int64_t *)0xe89256dd = 0x13d0000;
    uint32_t v17 = *(int32_t *)((int64_t)(*(int32_t *)(v11 + 91) | v5) - 0x4219271e); // 0x3a457d
    uint64_t v18 = (v16 & 0xffffffff) * (int64_t)v17; // 0x3a457d
    *(char *)v10 = *(char *)&v9 & (char)(v18 / 0x10000000000);
    return v18 & 0xffffffff;
}

// Address range: 0x3a45b2 - 0x3a45dc
int64_t function_3a45b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    char v2 = __asm_in(39); // 0x3a45b2
    bool v3; // 0x3a45b2
    char v4 = v3 ? -104 : -105; // 0x3a45b5
    int64_t v5; // 0x3a45b2
    int32_t * v6 = (int32_t *)(((v5 | (int64_t)v2) & -256 | (int64_t)(v2 + v4)) - 9); // 0x3a45ba
    *v6 = *v6 + (int32_t)a1;
    int64_t v7 = unknown_fffffffff0acacc3(); // 0x3a45bd
    char * v8 = (char *)v7; // 0x3a45c2
    unsigned char v9 = (char)v7; // 0x3a45c2
    *v8 = *v8 | v9;
    char v10 = v9 - 121; // 0x3a45c9
    unsigned char v11 = llvm_ctpop_i8(v10); // 0x3a45c9
    v1 = 512 * (int64_t)((a5 & (int64_t)&g1) != 0) | 256 * (int64_t)((a5 & 256) != 0) | 1024 * (int64_t)((a5 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((a5 & (int64_t)"le") != 0) | (int64_t)(v9 < 121) | 64 * (int64_t)(v10 == 0) | 128 * (int64_t)(v10 < 0) | 16 * (int64_t)(v9 % 16 > 24) | 2048 * (int64_t)((120 - v9 & v9) < 0) | 4 * (int64_t)(v11 % 2 == 0) | 2;
    __asm_out_134(98, v10);
    if (a4 == 1 || v10 == 0) {
        // 0x3a45d0
        return v7 & -256 | (int64_t)v10;
    }
    int32_t * v12 = (int32_t *)((v5 | a1) & 0xffffffff); // 0x3a45d3
    *v12 = *v12 + (int32_t)(int64_t)&v1;
    return function_ffffffffb4d8e26b();
}

// Address range: 0x3a4626 - 0x3a4713
int64_t function_3a4626(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = unknown_7f40662c(); // 0x3a4626
    __asm_int(-41);
    int64_t v3 = a4 - 1; // 0x3a4631
    v1 = a2;
    int64_t v4 = a3; // 0x3a4631
    int64_t v5 = v3; // 0x3a4631
    int64_t v6 = a1; // 0x3a4631
    int64_t v7 = v2; // 0x3a4631
    char * v8; // 0x3a4626
    int64_t v9; // 0x3a4626
    bool v10; // 0x3a4626
    if (v3 != 0 != v10) {
        // 0x3a4633
        unknown_15df0839();
        __asm_in_135((int16_t)a3);
        if (!v10) {
            // 0x3a463e
            return unknown_ffffffffb4c78044();
        }
        // 0x3a467b
        unknown_3ad90986();
        int64_t v11 = unknown_ffffffffa10fc48f(); // 0x3a4689
        char v12 = *(char *)&v1; // 0x3a468e
        v5 = 256 * (int64_t)(v12 | (char)(v3 / 256)) | v3 & -0xff01;
        v7 = v11 ^ 178;
        int32_t * v13 = (int32_t *)(a6 - 24 + v9); // 0x3a4692
        *v13 = *v13 + (int32_t)a6;
        int32_t * v14 = (int32_t *)(v7 - 119); // 0x3a4697
        *v14 = *v14 + (int32_t)v5;
        __asm_out(28, (int32_t)v7);
        v4 = (int64_t)*(char *)0xaaaaaf5d | 0xaaaaaf00;
        v6 = (v10 ? 0xffffffff : 1) + a1 + v4 & 0xffffffff;
        v8 = (char *)-67;
    }
    int32_t * v15 = (int32_t *)(v1 + 0x100944de); // 0x3a46ab
    *v15 = *v15 + (int32_t)v6;
    int32_t * v16 = (int32_t *)v7; // 0x3a46b1
    *v16 = *v16 | 0x6f627a16;
    unknown_ffffffffc92454bd();
    __asm_hlt();
    int64_t v17 = unknown_3aaee0d3(); // 0x3a46cd
    char * v18 = (char *)(v17 + 0x48c6c200); // 0x3a46d2
    *v18 = *v18 + (char)v17;
    int32_t * v19 = (int32_t *)((int64_t)v8 + 0x4700c700); // 0x3a46da
    *v19 = *v19 + (int32_t)v9;
    int64_t v20 = v6 + (v10 ? -1 : 1); // 0x3a46e4
    int32_t * v21 = (int32_t *)(4 * v4 + 0x2ebeeb50 + v20); // 0x3a46e5
    *v21 = *v21 + (int32_t)((v17 + v5 / 256) % 256 | v17 & 0xffffff00);
    int64_t v22 = unknown_ffffffffdfda86f2(v20); // 0x3a46ec
    __asm_out(47, (int32_t)v22);
    int32_t * v23 = (int32_t *)(v20 + 0x3703ab33); // 0x3a46fc
    int64_t v24; // 0x3a4626
    *v23 = *v23 + (int32_t)(int64_t)&v24;
    int64_t v25 = v22 + v20; // 0x3a4709
    uint64_t v26 = v25 + 190; // 0x3a470d
    int64_t result = v26 % 256 | v25 & 0xffffff00; // 0x3a470d
    char * v27 = (char *)result; // 0x3a4711
    *v27 = *v27 - (char)v26;
    return result;
}

// Address range: 0x3a4741 - 0x3a4743
int64_t function_3a4741(int64_t a1) {
    // 0x3a4741
    int64_t result; // 0x3a4741
    return result;
}

// Address range: 0x3a478c - 0x3a4796
int64_t function_3a478c(void) {
    // 0x3a478c
    return function_ffffffffabef5f8f();
}

// Address range: 0x3a47a6 - 0x3a47b0
int64_t function_3a47a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x3a47a8
    int64_t result; // 0x3a47a6
    if (v1 != 0) {
        uint32_t v2 = (int32_t)result;
        *(int32_t *)result = v2 >> 32 - v1 | v2 << v1;
    }
    return result;
}

// Address range: 0x3a47f6 - 0x3a4802
int64_t function_3a47f6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3a47f6
    int64_t v1; // 0x3a47f6
    *(char *)(a2 + 0x732d925a + 8 * a1) = (char)v1;
    return a1 & 0xffffffff;
}

// Address range: 0x3a48eb - 0x3a4902
int64_t function_3a48eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a48eb
    int64_t v1; // 0x3a48eb
    int32_t * v2 = (int32_t *)(v1 - 0x63fa1772); // 0x3a48f7
    *v2 = *v2 + (*(int32_t *)(a1 - 24) | (int32_t)a4);
    return function_ffffffffdc200952();
}

// Address range: 0x3a4923 - 0x3a4924
int64_t function_3a4923(void) {
    // 0x3a4923
    int64_t result; // 0x3a4923
    return result;
}

// Address range: 0x3a493c - 0x3a495a
int64_t function_3a493c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a493c
    unknown_fffffffffffffff8();
    unknown_ffffffffab591549();
    int64_t v1; // 0x3a493c
    *(int32_t *)(a1 - 0x1735fbc6 + 2 * v1) = (int32_t)0.0;
    int32_t * v2 = (int32_t *)((v1 / 256 + a4) % 256 | a4 & -256); // 0x3a4953
    *v2 = *v2 + (int32_t)a1;
    return __asm_iretd();
}

// Address range: 0x3a4962 - 0x3a49fe
int64_t function_3a4962(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int32_t v3 = a4; // 0x3a4962
    *(int32_t *)0x5324da05 = *(int32_t *)0x5324da05 + v3;
    uint32_t v4 = *(int32_t *)(a4 + 0x28cdfb); // 0x3a4968
    int64_t v5 = __asm_int3(); // 0x3a496e
    int64_t v6; // 0x3a4962
    int32_t * v7 = (int32_t *)(v6 - 2 + v6); // 0x3a4971
    *v7 = *v7 + (int32_t)a3;
    int64_t v8 = (int64_t)*(int32_t *)&v2; // 0x3a4975
    int64_t v9 = 85 * v8; // 0x3a4975
    uint32_t v10 = (int32_t)v5 & -0xff01 | (int32_t)&g3; // 0x3a497a
    uint32_t v11 = v9 != 0x5500000000 * v8 >> 32 ? -0x68b1fedc : -0x68b1fedd; // 0x3a497a
    int32_t v12 = v10 - v11; // 0x3a497a
    int64_t result = unknown_ffffffffad7f6785(); // 0x3a497f
    if (v12 != 0) {
        // 0x3a49e6
        return result;
    }
    int64_t v13 = result; // 0x3a4986
    if (llvm_ctpop_i8((char)v12) % 2 == 0) {
        v13 = function_3a4923();
    }
    int32_t * v14 = (int32_t *)v13; // 0x3a4988
    int32_t v15 = *v14; // 0x3a4988
    *v14 = (int32_t)(v9 != 0x5500000000 * v8 >> 32 | v10 < v11) - (int32_t)v6 + v15;
    int64_t result2 = unknown_28b06992(); // 0x3a498c
    unsigned char v16 = *(char *)&v1; // 0x3a4991
    unsigned char v17 = *(char *)&v2; // 0x3a4991
    int64_t v18 = v2 - 1; // 0x3a4991
    int64_t v19 = v1 - 1; // 0x3a4991
    v2 = v18;
    v1 = v19;
    if (v16 >= v17) {
        int32_t * v20 = (int32_t *)((v9 & 0xffffffff) + 45); // 0x3a49f6
        *v20 = *v20 + (int32_t)v18;
        return result2;
    }
    // 0x3a4994
    __asm_outsb((int16_t)v9, *(char *)v19);
    __asm_iretd();
    char v21 = *(char *)-0x16f83da4; // 0x3a4998
    *(char *)-0x16f83da4 = (char)(v16 < v17) + (char)v4 + v21;
    int32_t * v22 = (int32_t *)(int64_t)v4; // 0x3a499e
    *v22 = *v22 + v3;
    return function_23ae75c();
}

// Address range: 0x3a4a07 - 0x3a4a10
int64_t function_3a4a07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3a4a07
    int64_t result; // 0x3a4a07
    int32_t * v1 = (int32_t *)(result - 0x669c97f6); // 0x3a4a07
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x3a4aba - 0x3a4abb
int64_t function_3a4aba(int64_t a1) {
    // 0x3a4aba
    int64_t result; // 0x3a4aba
    return result;
}

// Address range: 0x3a4b2b - 0x3a4b38
int64_t function_3a4b2b(void) {
    // 0x3a4b2b
    return unknown_222a3a6();
}

// Address range: 0x3a4c06 - 0x3a4c30
int64_t function_3a4c06(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a4c06
    bool v1; // 0x3a4c06
    if (a4 != 1 == v1) {
        // 0x3a4c2b
        return unknown_ffffffffb8d9a231();
    }
    if (!v1 && !v1) {
        // 0x3a4c0d
        unknown_ffffffffcec7ce13();
        int32_t * v2 = (int32_t *)(a4 + 0x3a1494f4); // 0x3a4c1b
        *v2 = *v2 + (int32_t)a1;
        __asm_in_136(90);
    }
    // 0x3a4c25
    return __asm_sti();
}

// Address range: 0x3a4c4a - 0x3a4c4b
int64_t function_3a4c4a(void) {
    // 0x3a4c4a
    int64_t result; // 0x3a4c4a
    return result;
}

// Address range: 0x3a4c6d - 0x3a4c6e
int64_t function_3a4c6d(void) {
    // 0x3a4c6d
    int64_t result; // 0x3a4c6d
    return result;
}

// Address range: 0x3a4c72 - 0x3a4c74
int64_t function_3a4c72(void) {
    // 0x3a4c72
    int64_t v1; // 0x3a4c72
    return function_3a4c77(v1, v1, v1, v1);
}

// Address range: 0x3a4c75 - 0x3a4c77
int64_t function_3a4c75(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3a4c75
    int64_t result; // 0x3a4c75
    return result;
}

// Address range: 0x3a4c77 - 0x3a4caf
int64_t function_3a4c77(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    unsigned char v1 = (char)(a3 / 256); // 0x3a4c7a
    int64_t result; // 0x3a4c77
    unsigned char v2 = (char)result + v1; // 0x3a4c7a
    if (v2 >= v1) {
        char * v3 = (char *)(result + 95); // 0x3a4c95
        *v3 = -1 - *v3;
        return result;
    }
    int64_t result2 = __asm_in_137((int16_t)(256 * (int64_t)v2 | a3 % 256)); // 0x3a4c7e
    int64_t v4 = a4 - 1; // 0x3a4c7f
    if (v4 == 0 || v2 == 0) {
        int32_t * v5 = (int32_t *)(result + 0x1700d35d); // 0x3a4c86
        *v5 = *v5 + (int32_t)v4;
        return result2;
    }
    int64_t result3 = result2; // 0x3a4cac
    if (v2 >= 0) {
        result3 = function_3a4c6d();
    }
    // 0x3a4caf
    return result3;
}

// Address range: 0x3a4cb0 - 0x3a4d1c
int64_t function_3a4cb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a3;
    int64_t v3; // 0x3a4cb0
    int32_t * v4 = (int32_t *)(v3 - 0x17fec25b); // 0x3a4cb3
    *v4 = *v4 + (int32_t)a1;
    int32_t * v5 = (int32_t *)(a4 + 0x19d21061); // 0x3a4cbb
    *v5 = *v5 + (int32_t)a3;
    int64_t v6 = (__asm_sti() & 0xffffff00 ^ 0x1e866b4) + 0xf8ff0043; // 0x3a4cca
    int64_t v7 = -0x7e540000; // bp-16, 0x3a4cd0
    int64_t v8 = v6 & 0xfffffff7; // 0x3a4cda
    int64_t v9 = (int64_t)&v7; // 0x3a4cda
    if ((int32_t)v6 >= 0x940a4701) {
        // 0x3a4cdc
        bool v10; // 0x3a4cb0
        int64_t v11 = v10 ? -4 : 4; // 0x3a4ccf
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v3;
        char * v12 = (char *)(v11 + a2); // 0x3a4cdf
        *v12 = *v12 + (char)(v1 / 256);
        char * v13 = (char *)(v11 + a1); // 0x3a4ce7
        int32_t v14 = *(int32_t *)(v1 - 100); // 0x3a4ce9
        int64_t v15; // bp-8, 0x3a4cb0
        v9 = (int32_t)(int64_t)&v15 - v14;
        char v16 = *(char *)0xcd50bf3; // 0x3a4cec
        *(char *)0xcd50bf3 = *v13 + (char)(v3 / 256) + v16;
        int32_t v17 = __asm_in_137((int16_t)v2); // 0x3a4cf2
        v8 = (int64_t)(v17 & -0xff01) | (int64_t)&g6;
        unsigned char v18 = (char)v1; // 0x3a4cf5
        unsigned char v19 = *(char *)(8 * v1 + v9) + v18; // 0x3a4cf5
        float80_t v20; // 0x3a4cb0
        float80_t v21 = v19 < v18 | v19 == 0 ? v20 : (float80_t)*(int32_t *)(v3 - 24); // 0x3a4cf8
        *v13 = (char)v8;
        v1 = 0xafb0623a;
        *(int32_t *)0xafb0623a = (int32_t)v21;
    }
    uint32_t v22 = *(int32_t *)&v2; // 0x3a4d09
    int32_t v23 = v9; // 0x3a4d09
    int32_t v24 = (int32_t)v8 < 0xf7f4a801; // 0x3a4d09
    uint32_t v25 = v22 + v23; // 0x3a4d09
    uint32_t v26 = v25 + v24; // 0x3a4d09
    int32_t v27 = v26 + v24; // 0x3a4d09
    *(int32_t *)v2 = v26;
    int64_t result = v8; // 0x3a4d0d
    if (((v27 ^ v22) & (v27 ^ v23)) >= 0) {
        result = function_3a4d7e();
    }
    bool v28 = (int32_t)v8 < 0xf7f4a801 ? v26 <= v22 : v25 < v22; // 0x3a4d09
    int32_t * v29 = (int32_t *)(v1 + 0x61f9d402); // 0x3a4d0f
    uint32_t v30 = *v29; // 0x3a4d0f
    *v29 = 0x10000 * v30 | 0x8000 * (int32_t)v28 | v30 / 0x20000;
    *(int64_t *)v9 = 0x13d0008;
    return result;
}

// Address range: 0x3a4d2f - 0x3a4d34
int64_t function_3a4d2f(void) {
    // 0x3a4d2f
    return function_1774dd2();
}

// Address range: 0x3a4d7e - 0x3a4d84
int64_t function_3a4d7e(void) {
    // 0x3a4d7e
    int64_t result; // 0x3a4d7e
    return result;
}

// Address range: 0x3a4dc7 - 0x3a4dde
int64_t function_3a4dc7(void) {
    int64_t result = unknown_ffffffffabefa6cf(); // 0x3a4dc9
    int64_t v1; // 0x3a4dc7
    int32_t * v2 = (int32_t *)(v1 + 0xffffffe8 & 0xffffffff); // 0x3a4dd1
    *v2 = *v2 ^ (int32_t)v1;
    int32_t * v3 = (int32_t *)(v1 - 117); // 0x3a4dd5
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x3a4e7a - 0x3a4e7d
int64_t function_3a4e7a(void) {
    // 0x3a4e7a
    int64_t result; // 0x3a4e7a
    return result;
}
