/*
 * Targeted RetDec C for native executable gap queue batch 886.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1017ee-0x1019ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x1019ee-0x101bee rank=- name=- kind=- bytes=- uncovered=-
 *   0x101bee-0x101dee rank=- name=- kind=- bytes=- uncovered=-
 *   0x3af015-0x3af215 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3af215-0x3af415 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3af415-0x3af615 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3af615-0x3af815 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3af815-0x3afa15 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_100a9cd0();
int64_t function_1017ee(void);
int64_t function_1017ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10188d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1019cf(void);
int64_t function_101a13(int64_t a1);
int64_t function_101a44(void);
int64_t function_101a5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_101b83(int64_t a1);
int64_t function_101b96(void);
int64_t function_101bac(int64_t a1);
int64_t function_101bc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_101be8(int64_t a1);
int64_t function_101c02(void);
int64_t function_101c0a(void);
int64_t function_101c19(int64_t a1);
int64_t function_101c48(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_101c5e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_101c6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_101cfc(void);
int64_t function_101d15(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_101d6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_101d98(int64_t a1, int64_t a2, int32_t a3, int64_t a4, int64_t a5);
int64_t function_2aa6d0ba();
int64_t function_3af015(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3af096(void);
int64_t function_3af0f7(void);
int64_t function_3af122(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3af173(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3af188(void);
int64_t function_3af296(void);
int64_t function_3af29c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3af30e(int64_t a1, int64_t a2);
int64_t function_3af322(void);
int64_t function_3af338(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3af34f(void);
int64_t function_3af381(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3af39e(int64_t a1);
int64_t function_3af3b1(void);
int64_t function_3af3ef(int64_t a1);
int64_t function_3af468(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3af483(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3af4e2(void);
int64_t function_3af50c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3af56e(int64_t a1);
int64_t function_3af572(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3af5a1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3af5cd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3af648(void);
int64_t function_3af649(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3af674(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3af6d8(int64_t a1);
int64_t function_3af6f9(void);
int64_t function_3af763(void);
int64_t function_3af76e(void);
int64_t function_3af792(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3af868(void);
int64_t function_3af8b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3d0eceb3();
int64_t function_3daaf427();
int64_t function_a3bb273();
int64_t function_c9849();
int64_t function_ffffffff9aadd60f();
int64_t function_ffffffffac0ef4b2();
int64_t function_ffffffffb181ff7e();
int64_t function_ffffffffdb21d611();
int64_t unknown_162d53a8();
int64_t unknown_2bdf27e();
int64_t unknown_3ab50cec();
int64_t unknown_3d1202d2();
int64_t unknown_3e03ec65();
int64_t unknown_3f7d11aa();
int64_t unknown_4969159c();
int64_t unknown_5e063eb7();
int64_t unknown_63795d89();
int64_t unknown_7fe1ad21();
int64_t unknown_b33043e();
int64_t unknown_f088c11();
int64_t unknown_ffffffff9f3b7970();
int64_t unknown_ffffffffab5b715a();
int64_t unknown_ffffffffabf02f8c();
int64_t unknown_ffffffffaca5cbc8();
int64_t unknown_ffffffffbf2e86ef();
int64_t unknown_ffffffffc5936d4f();
int64_t unknown_ffffffffc8458208();
int64_t unknown_ffffffffc8ad3a1b();
int64_t unknown_ffffffffd34596bc();
int64_t unknown_ffffffffe07b4989();
int64_t unknown_ffffffffe2314599();
int64_t unknown_ffffffffebc68469();

// Address range: 0x1017ee - 0x1017ef
int64_t function_1017ee(void) {
    // 0x1017ee
    int64_t result; // 0x1017ee
    return result;
}

// Address range: 0x1017ef - 0x10188d
int64_t function_1017ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 85); // 0x1017ef
    int64_t v2; // 0x1017ef
    *v1 = *v1 | (char)v2;
    int64_t v3; // bp+24, 0x1017ef
    return function_c9849(a1, a2, a3, a4, v2, v2, v3);
}

// Address range: 0x10188d - 0x1019cf
int64_t function_10188d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x10188d
    return function_c9849(a1, a2, a3, a4, a5, a6, 0x2202e9e);
}

// Address range: 0x1019cf - 0x1019d4
int64_t function_1019cf(void) {
    // 0x1019cf
    int64_t result; // 0x1019cf
    return result;
}

// Address range: 0x101a13 - 0x101a16
int64_t function_101a13(int64_t a1) {
    // 0x101a13
    int64_t result; // 0x101a13
    return result;
}

// Address range: 0x101a44 - 0x101a45
int64_t function_101a44(void) {
    // 0x101a44
    int64_t result; // 0x101a44
    return result;
}

// Address range: 0x101a5c - 0x101b1a
int64_t function_101a5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = a4 - 1; // 0x101a5c
    bool v2; // 0x101a5c
    if (v1 != 0 && !v2) {
        function_101a44();
    }
    int64_t v3 = unknown_ffffffffebc68469(); // 0x101a63
    if (v2 || v2) {
        int64_t v4 = unknown_3d1202d2(); // 0x101acc
        int32_t * v5 = (int32_t *)(v4 - 60); // 0x101ad1
        uint32_t v6 = *v5; // 0x101ad1
        int64_t v7; // 0x101a5c
        uint32_t v8 = v6 + (int32_t)v7; // 0x101ad1
        *v5 = v8;
        return (v4 + v1 / 256 + (int64_t)(v8 < v6)) % 256 | v4 & -256;
    }
    // 0x101a6a
    return (v3 + 167) % 256 | v3 & -256;
}

// Address range: 0x101b83 - 0x101b89
int64_t function_101b83(int64_t a1) {
    // 0x101b83
    return unknown_63795d89(a1);
}

// Address range: 0x101b96 - 0x101b97
int64_t function_101b96(void) {
    // 0x101b96
    int64_t result; // 0x101b96
    return result;
}

// Address range: 0x101bac - 0x101bad
int64_t function_101bac(int64_t a1) {
    // 0x101bac
    int64_t result; // 0x101bac
    return result;
}

// Address range: 0x101bc3 - 0x101bc6
int64_t function_101bc3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x101bc3
    int64_t result; // 0x101bc3
    return result;
}

// Address range: 0x101be8 - 0x101beb
int64_t function_101be8(int64_t a1) {
    // 0x101be8
    int64_t result; // 0x101be8
    return result;
}

// Address range: 0x101c02 - 0x101c03
int64_t function_101c02(void) {
    // 0x101c02
    int64_t result; // 0x101c02
    return result;
}

// Address range: 0x101c0a - 0x101c0b
int64_t function_101c0a(void) {
    // 0x101c0a
    int64_t result; // 0x101c0a
    return result;
}

// Address range: 0x101c19 - 0x101c24
int64_t function_101c19(int64_t a1) {
    // 0x101c19
    return function_2aa6d0ba();
}

// Address range: 0x101c48 - 0x101c5e
int64_t function_101c48(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char v1 = *(char *)0x725354f; // 0x101c48
    int64_t v2; // 0x101c48
    *(char *)0x725354f = v1 + (char)((uint64_t)v2 / 256);
    char v3 = v2; // 0x101c50
    int64_t v4 = v2 & -256; // 0x101c50
    unsigned char v5 = ((char)a4 | (char)&g5) % 32; // 0x101c52
    if (v5 == 0) {
        if (((v3 - 2 ^ v3) & v3 + 126) >= 0) {
            // 0x101c57
            return v4 & -256 | a2 % 256;
        }
    } else {
        bool v6 = v5 == 1 ? ((char)((int64_t)&g5 >> 8) << v5 - 1 ^ (char)((int64_t)&g5 >> 8) << v5) < 0 : ((v3 - 2 ^ v3) & v3 + 126) < 0; // 0x101c52
        if (!v6) {
            // 0x101c57
            return v4 & -256 | a2 % 256;
        }
    }
    // 0x101c57
    return function_101c0a() & -256 | a2 % 256;
}

// Address range: 0x101c5e - 0x101c69
int64_t function_101c5e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x101c5e
    bool v1; // 0x101c5e
    if (v1) {
        function_101c02();
    }
    int64_t result = __asm_hlt(); // 0x101c60
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x101c6a - 0x101c82
int64_t function_101c6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x101c6a
    int64_t result; // 0x101c6a
    *(int32_t *)0x3d00a406d05f1d5f = (int32_t)result;
    *(int16_t *)(a4 + 45) = (int16_t)result;
    return result;
}

// Address range: 0x101cfc - 0x101d00
int64_t function_101cfc(void) {
    // 0x101cfc
    int64_t v1; // 0x101cfc
    return (int64_t)&v1;
}

// Address range: 0x101d15 - 0x101d2f
int64_t function_101d15(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffc8ad3a1b(); // 0x101d15
    int64_t v2; // 0x101d15
    int32_t * v3 = (int32_t *)(v2 - 122); // 0x101d1a
    *v3 = *v3 | (int32_t)v1;
    uint32_t v4 = (int32_t)a3; // 0x101d1f
    int32_t v5 = v2; // 0x101d1f
    uint32_t v6 = v5 + v4; // 0x101d1f
    int64_t v7; // 0x101d15
    *(int32_t *)a4 = (int32_t)(v6 < v4) + v5 + *(int32_t *)&v7;
    return function_101d98(a1, a2, v6, a4, v2);
}

// Address range: 0x101d6e - 0x101d98
int64_t function_101d6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x101d6e
    int64_t v1; // 0x101d6e
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    int64_t v3 = unknown_2bdf27e(a5); // 0x101d78
    char * v4 = (char *)(v3 + (int64_t)&g1); // 0x101d7d
    *v4 = *v4 + (char)v3;
    int64_t v5 = unknown_ffffffffe07b4989(); // 0x101d83
    float80_t v6; // 0x101d6e
    *(int64_t *)v1 = (int64_t)v6;
    int32_t v7 = v5; // 0x101d92
    __asm_out((int16_t)a3, v7);
    return 0x10000 * v7 >> 16 & -233;
}

// Address range: 0x101d98 - 0x101dd1
int64_t function_101d98(int64_t a1, int64_t a2, int32_t a3, int64_t a4, int64_t a5) {
    // 0x101d98
    int64_t v1; // 0x101d98
    uint64_t v2 = v1;
    int64_t v3 = a2;
    char v4 = v2 / 256; // 0x101d98
    __writegsbyte(-0xc7ad95f, __readgsbyte(-0xc7ad95f) + v4);
    char * v5 = (char *)((v1 & 0xf19dff97 | 0xe620068) + 0x784ed080); // 0x101dae
    *v5 = *v5 ^ (char)v2;
    char v6 = *(char *)0x145406bd + v4; // 0x101db6
    *(char *)0x145406bd = v6;
    uint32_t v7 = (int32_t)a4 % 32; // 0x101dc1
    if (v7 != 0) {
        uint32_t v8 = *(int32_t *)0x47c9460; // 0x101dc1
        uint32_t v9 = 32 - v7;
        uint32_t v10 = v8 >> v9 | v8 << v7; // 0x101dc1
        *(int32_t *)0x47c9460 = v10 >> v9 | v10 << v7;
    }
    if (v6 < 0) {
        // 0x101dcb
        return 0x47c9460;
    }
    // 0x101dc9
    return (int64_t)*(int32_t *)&v3;
}

// Address range: 0x3af015 - 0x3af06b
int64_t function_3af015(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t result = __asm_iretd(); // 0x3af015
    char * v1 = (char *)(result - 81); // 0x3af018
    *v1 = *v1 + (char)(a4 / 256);
    return result;
    int64_t v2 = __asm_hlt(); // 0x3af05f
    char v3 = *(char *)-0x30313868; // 0x3af065
    return v2 & -0x10000 | (int64_t)((256 * (int16_t)v2 >> 8) * (int16_t)v3);
}

// Address range: 0x3af096 - 0x3af09c
int64_t function_3af096(void) {
    // 0x3af096
    return function_a3bb273();
}

// Address range: 0x3af0f7 - 0x3af113
int64_t function_3af0f7(void) {
    // 0x3af0f7
    int64_t v1; // 0x3af0f7
    int64_t * v2 = (int64_t *)(v1 + 0x246e31c6); // 0x3af0f7
    *v2 = *v2 ^ 0x13d009e;
    return v1 & -256 | (int64_t)*(char *)0x2402bbb6b1f8585d;
}

// Address range: 0x3af122 - 0x3af130
int64_t function_3af122(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 77); // 0x3af12c
    int64_t v2; // 0x3af122
    *v1 = *v1 | (int32_t)v2;
    bool v3; // 0x3af122
    return v2 + 0xa32f43af + (int64_t)v3 & 0xffffffff;
}

// Address range: 0x3af173 - 0x3af17b
int64_t function_3af173(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3af173
    return function_ffffffffdb21d611();
}

// Address range: 0x3af188 - 0x3af189
int64_t function_3af188(void) {
    // 0x3af188
    int64_t result; // 0x3af188
    return result;
}

// Address range: 0x3af296 - 0x3af297
int64_t function_3af296(void) {
    // 0x3af296
    int64_t result; // 0x3af296
    return result;
}

// Address range: 0x3af29c - 0x3af2ec
int64_t function_3af29c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x3af29c
    char * v3 = (char *)(v2 + 0x7c09d800); // 0x3af29c
    *v3 = *v3 + (char)(a4 / 256);
    uint32_t v4 = (int32_t)unknown_162d53a8(); // 0x3af2a7
    int16_t v5 = a3; // 0x3af2ac
    __asm_in(v5);
    if (((v4 + 0x6b45f654 ^ v4) & (v4 ^ -0x80000000)) < 0) {
        function_3af296();
    }
    // 0x3af2b0
    __asm_iretd();
    unknown_5e063eb7();
    __asm_outsd(v5, *(int32_t *)&v1);
    char * v6 = (char *)(v2 - 0x49a90b60); // 0x3af2bc
    char v7 = a4; // 0x3af2bc
    *v6 = (char)(v4 < 0x94ba09ac) - v7 + *v6;
    int32_t * v8 = (int32_t *)(a1 + 0x2a590823 + 4 * v2); // 0x3af2d2
    int64_t v9 = unknown_ffffffffaca5cbc8(); // 0x3af2c2
    int64_t v10 = 0xa88634a; // 0x3af2c2
    int64_t v11; // 0x3af29c
    int64_t v12 = (int64_t)&v11; // 0x3af2c2
    char * v13 = (char *)(v9 - 111); // 0x3af2c7
    *v13 = *v13 + v7;
    uint32_t v14 = *(int32_t *)((v1 + v9 & 0xffffffff) + v10); // 0x3af2cc
    *v8 = *v8 + (int32_t)a4;
    unsigned char v15 = (char)v10 - (char)a3; // 0x3af2d9
    unsigned char v16 = llvm_ctpop_i8(v15); // 0x3af2d9
    v9 = *(int64_t *)v12;
    v10 = v10 & -256 | (int64_t)v15;
    v12 += 8;
    while (v16 % 2 != 0) {
        // 0x3af2c7
        v13 = (char *)(v9 - 111);
        *v13 = *v13 + v7;
        v14 = *(int32_t *)((v1 + v9 & 0xffffffff) + v10);
        *v8 = *v8 + (int32_t)a4;
        v15 = (char)v10 - (char)a3;
        v16 = llvm_ctpop_i8(v15);
        v9 = *(int64_t *)v12;
        v10 = v10 & -256 | (int64_t)v15;
        v12 += 8;
    }
    int32_t * v17 = (int32_t *)(8 * a4 - 0x3a9d7eea + (int64_t)v14); // 0x3af2df
    *v17 = *v17 + (int32_t)a1;
    return unknown_ffffffffbf2e86ef();
}

// Address range: 0x3af30e - 0x3af315
int64_t function_3af30e(int64_t a1, int64_t a2) {
    // 0x3af30e
    int64_t v1; // 0x3af30e
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a2;
    return function_ffffffffac0ef4b2();
}

// Address range: 0x3af322 - 0x3af325
int64_t function_3af322(void) {
    // 0x3af322
    int64_t result; // 0x3af322
    return result;
}

// Address range: 0x3af338 - 0x3af349
int64_t function_3af338(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_b33043e(); // 0x3af338
    uint32_t v1 = *(int32_t *)(a3 - 0x3e62f6d5); // 0x3af33d
    int64_t v2; // 0x3af338
    char * v3 = (char *)(v2 + 1); // 0x3af344
    *v3 = *v3 + 123 + (char)(v1 < (int32_t)a2);
    return result;
}

// Address range: 0x3af34f - 0x3af354
int64_t function_3af34f(void) {
    // 0x3af34f
    return function_3daaf427();
}

// Address range: 0x3af381 - 0x3af391
int64_t function_3af381(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3af381
    bool v1; // 0x3af381
    int32_t * v2 = (int32_t *)((v1 ? -4 : 4) + a2); // 0x3af38b
    *v2 = *v2 + (int32_t)a3;
    int64_t v3; // 0x3af381
    return v3 & 0xffffffff;
}

// Address range: 0x3af39e - 0x3af3a1
int64_t function_3af39e(int64_t a1) {
    // 0x3af39e
    int64_t result; // 0x3af39e
    return result;
}

// Address range: 0x3af3b1 - 0x3af3ba
int64_t function_3af3b1(void) {
    // 0x3af3b1
    int64_t result; // 0x3af3b1
    __asm_out_133(106, (int32_t)result);
    return result;
}

// Address range: 0x3af3ef - 0x3af3f5
int64_t function_3af3ef(int64_t a1) {
    // 0x3af3ef
    int64_t result; // 0x3af3ef
    float80_t v1; // 0x3af3ef
    *(float64_t *)result = (float64_t)v1;
    return result;
}

// Address range: 0x3af468 - 0x3af471
int64_t function_3af468(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3af468
    *(int32_t *)a4 = 0;
    return function_ffffffff9aadd60f();
}

// Address range: 0x3af483 - 0x3af4d6
int64_t function_3af483(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3af483
    int64_t v1; // 0x3af483
    int64_t v2 = v1;
    int64_t v3 = unknown_ffffffffabf02f8c(); // 0x3af486
    *(int32_t *)(v2 & 0xffffffff) = (int32_t)v2;
    int64_t v4; // 0x3af483
    __asm_fldenv(*(int224_t *)&v4);
    int64_t v5 = unknown_ffffffffe2314599(); // 0x3af493
    char * v6 = (char *)v5; // 0x3af49f
    unsigned char v7 = *v6; // 0x3af49f
    *v6 = v7 / 128 | 2 * v7;
    __asm_out_134(-25, (char)v5);
    unknown_3f7d11aa();
    int64_t v8 = unknown_7fe1ad21(); // 0x3af4a9
    int32_t v9 = v8; // 0x3af4ae
    __asm_out_133(35, v9);
    int32_t * v10 = (int32_t *)((v3 & 0xffffffff) + 0x4001e89a); // 0x3af4b0
    *v10 = *v10 + v9;
    int32_t * v11 = (int32_t *)(v8 + 0xa25f0eb0 & 0xffffffff); // 0x3af4c1
    *v11 = *v11 + (int32_t)a6;
    int64_t result = __asm_wait(); // 0x3af4c4
    char * v12 = (char *)(a3 & -0xff01 | (int64_t)&g6); // 0x3af4cb
    *v12 = *v12 + (char)v1;
    return result;
}

// Address range: 0x3af4e2 - 0x3af4e7
int64_t function_3af4e2(void) {
    // 0x3af4e2
    return function_ffffffffb181ff7e();
}

// Address range: 0x3af50c - 0x3af510
int64_t function_3af50c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3af50c
    int64_t result; // 0x3af50c
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x3af56e - 0x3af571
int64_t function_3af56e(int64_t a1) {
    // 0x3af56e
    int64_t result; // 0x3af56e
    return result;
}

// Address range: 0x3af572 - 0x3af59b
int64_t function_3af572(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 35); // 0x3af577
    int64_t v2; // 0x3af572
    char v3 = (uint64_t)v2 / 256; // 0x3af577
    *v1 = *v1 + v3;
    char * v4 = (char *)a3; // 0x3af58b
    int64_t v5; // 0x3af572
    *v4 = *(char *)&v5 + (char)a3;
    *v4 = *(char *)&v5 + (char)v2;
    *(char *)-0x78fb4069 = *(char *)-0x78fb4069 + v3;
    return a4 & 0xffffffff;
}

// Address range: 0x3af5a1 - 0x3af5a7
int64_t function_3af5a1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3af5a1
    int64_t result; // 0x3af5a1
    bool v1; // 0x3af5a1
    *(int32_t *)a3 = (int32_t)result - (int32_t)a1 + (int32_t)v1;
    return result;
}

// Address range: 0x3af5cd - 0x3af625
int64_t function_3af5cd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3af5cd
    int64_t v1; // 0x3af5cd
    int64_t v2 = v1 + 0x4bf4ca68 & 0xffefd63b | 0x1029c4; // 0x3af5d2
    bool v3; // 0x3af5cd
    int64_t v4 = v3 ? -1 : 1; // 0x3af5d7
    *(char *)(v4 + a1) = (char)v2;
    char v5 = v1 / 256; // 0x3af5d9
    *(char *)-0x34f2b220 = *(char *)-0x34f2b220 + v5;
    int64_t v6 = a3 / 256 | a4;
    int64_t v7; // 0x3af5cd
    unsigned char v8 = *(char *)&v7; // 0x3af5e1
    v7 = v4 + a2;
    *(int32_t *)(v1 - 13) = (int32_t)v1;
    if ((char)v6 == 0) {
        int32_t * v9 = (int32_t *)(v2 & 0xffffff00 | (int64_t)v8); // 0x3af621
        *v9 = *v9 + (int32_t)(256 * v6 & 0xff00 | a3 & 0xffff00ff);
        return __asm_in_135(-26);
    }
    // 0x3af5e7
    __asm_outsb((int16_t)((int32_t)v1 >> 31), *(char *)v7);
    *(char *)-0x70ca8808 = *(char *)-0x70ca8808 + v5;
    *(char *)-0x67d47af2 = *(char *)-0x67d47af2 - 45;
    return function_3d0eceb3();
}

// Address range: 0x3af648 - 0x3af649
int64_t function_3af648(void) {
    // 0x3af648
    int64_t result; // 0x3af648
    return result;
}

// Address range: 0x3af649 - 0x3af666
int64_t function_3af649(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffc5936d4f(); // 0x3af649
    char * v3 = (char *)(a4 + 0x2d9501e8); // 0x3af650
    *v3 = *v3 + (char)a4;
    int64_t v4 = v2 & 0xffffffff ^ 0x2e62e9c7; // 0x3af656
    int64_t v5 = v4 & 0xffffff00; // 0x3af65e
    if (*(char *)&v1 >= (char)v4) {
        v5 = function_3af648();
    }
    // 0x3af660
    int64_t v6; // 0x3af649
    *(int32_t *)v6 = *(int32_t *)&v6 + (int32_t)v1;
    return v5 & -256 | (int64_t)__asm_in_136(-100);
}

// Address range: 0x3af674 - 0x3af677
int64_t function_3af674(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3af674
    int64_t result; // 0x3af674
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x3af6d8 - 0x3af6da
int64_t function_3af6d8(int64_t a1) {
    // 0x3af6d8
    int64_t result; // 0x3af6d8
    return result;
}

// Address range: 0x3af6f9 - 0x3af6fc
int64_t function_3af6f9(void) {
    // 0x3af6f9
    int64_t result; // 0x3af6f9
    return result;
}

// Address range: 0x3af763 - 0x3af764
int64_t function_3af763(void) {
    // 0x3af763
    int64_t result; // 0x3af763
    return result;
}

// Address range: 0x3af76e - 0x3af773
int64_t function_3af76e(void) {
    // 0x3af76e
    return function_100a9cd0();
}

// Address range: 0x3af792 - 0x3af7c4
int64_t function_3af792(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3af792
    int64_t v1; // 0x3af792
    int64_t v2 = v1;
    int32_t v3 = a4; // 0x3af792
    *(int32_t *)v2 = (int32_t)v2 + v3;
    int64_t v4; // 0x3af792
    uint32_t v5 = *(int32_t *)&v4; // 0x3af794
    uint32_t v6 = v5 + (int32_t)v4; // 0x3af794
    *(int32_t *)v4 = v6;
    unknown_4969159c();
    char * v7 = (char *)(v1 + 122); // 0x3af79b
    *v7 = *v7 + (char)(a4 / 256) + (char)(v6 < v5);
    v4 = a5;
    int32_t * v8 = (int32_t *)(a2 - 0x1701f57d + 4 * a1); // 0x3af79f
    *v8 = *v8 + (int32_t)a5;
    int64_t v9; // 0x3af792
    if ((int32_t)(int64_t)&v9 + v3 < 1) {
        v4 = function_3af763();
    }
    int64_t result = unknown_ffffffffd34596bc(); // 0x3af7b6
    char * v10 = (char *)(result - 0x2de3a9fc); // 0x3af7bb
    *v10 = *v10 + (char)result;
    return result;
}

// Address range: 0x3af868 - 0x3af875
int64_t function_3af868(void) {
    // 0x3af868
    int64_t result; // 0x3af868
    int32_t * v1 = (int32_t *)(result - 69); // 0x3af868
    *v1 = *v1 + 1;
    return result;
}

// Address range: 0x3af8b3 - 0x3afa10
int64_t function_3af8b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3af8b3
    int64_t v1; // 0x3af8b3
    uint64_t v2 = v1;
    int32_t v3 = a3; // 0x3af8b3
    int32_t v4 = a4; // 0x3af8b3
    uint32_t v5 = v4 + v3; // 0x3af8b3
    int64_t result = unknown_3ab50cec(); // 0x3af8e6
    int64_t v6; // 0x3af8b3
    if (v5 < 0 == ((v5 ^ v3) & (v5 ^ v4)) < 0) {
        // 0x3af8ed
        *(int64_t *)a1 = a5;
        int32_t * v7 = (int32_t *)(result + 5); // 0x3af8f6
        int32_t v8 = *v7; // 0x3af8f6
        int32_t v9 = a2; // 0x3af8f6
        int32_t v10 = v8 + v9; // 0x3af8f6
        *v7 = v10;
        if (v10 < 0 == ((v10 ^ v8) & (v10 ^ v9)) < 0) {
            // 0x3af8fb
            *(int32_t *)v6 = *(int32_t *)&v6 + v5;
            return result;
        }
        // 0x3af8c2
        *(int32_t *)-0x43f0ab37 = *(int32_t *)-0x43f0ab37 + (int32_t)a1;
        return result;
    }
    int64_t v11 = v5; // 0x3af8b3
    uint64_t v12 = unknown_ffffffffab5b715a(); // 0x3af954
    unsigned char v13 = (char)(v2 / 256); // 0x3af95b
    char v14 = -1 - (char)(v12 / 256) < (char)(v5 / 256); // 0x3af95b
    unsigned char v15 = *(char *)v11 + v14; // 0x3af95b
    unsigned char v16 = v13 - v15; // 0x3af95b
    bool v17 = -1 - (char)(v12 / 256) < (char)(v5 / 256) ? v15 != -1 | v16 - v14 > v13 : v15 > v13; // 0x3af95b
    v6 = 256 * (int64_t)v16 | v2 & -0xff01;
    int64_t v18 = (v11 + a1 + (int64_t)v17) % 256 | v11 & 0xffffff00; // 0x3af95d
    unknown_3e03ec65();
    int64_t v19 = unknown_ffffffff9f3b7970(); // 0x3af96a
    unsigned char v20 = (char)v19; // 0x3af97b
    int32_t * v21 = (int32_t *)(a2 - 124); // 0x3af97e
    *v21 = (int32_t)a2;
    int64_t v22 = a4 - 1; // 0x3af983
    int64_t result2; // 0x3af8b3
    if (v22 != 0 == v20 < 2) {
        // 0x3af9fc
        *(int32_t *)a1 = __asm_insd((int16_t)v18);
        result2 = unknown_ffffffffc8458208();
        if ((*(char *)v22 || (char)v6) >= 0) {
            // 0x3afa09
            return unknown_f088c11();
        }
    } else {
        int64_t v23 = (int64_t)*(int32_t *)(int64_t)*v21; // 0x3af982
        int32_t v24 = *(int32_t *)v18 | (int32_t)a1; // 0x3af985
        int64_t v25 = (v19 & 0xffffff00 | (int64_t)(v20 / 2)) - 8; // 0x3af987
        *(int64_t *)v25 = (int64_t)&g2;
        result2 = v23;
        if (v24 >= 0 != v24 != 0) {
            int64_t v26 = v24; // 0x3af985
            int32_t * v27 = (int32_t *)v26; // 0x3af9a3
            *v27 = *v27 - 0x68482f73;
            char * v28 = (char *)(v26 + 0x4ee77aa1); // 0x3af9ad
            unsigned char v29 = *v28; // 0x3af9ad
            unsigned char v30 = (char)v6; // 0x3af9ad
            char v31 = v29 + v30; // 0x3af9ad
            unsigned char v32 = llvm_ctpop_i8(v31); // 0x3af9ad
            *v28 = v31;
            bool v33; // 0x3af8b3
            *(int64_t *)((v25 & -256 | 152) - 8) = 0x4000 * (int64_t)v33 | 1024 * (int64_t)v33 | 512 * (int64_t)v33 | 256 * (int64_t)v33 | (int64_t)(v31 < v29) | 64 * (int64_t)(v31 == 0) | 128 * (int64_t)(v31 < 0) | 16 * (int64_t)(v30 % 16 + v29 % 16 > 15) | 4 * (int64_t)(v32 % 2 == 0) | 2048 * (int64_t)(((v31 ^ v29) & (v31 ^ v30)) < 0) | 2;
            *v27 = 0x20000000 * *v27;
            int32_t * v34 = (int32_t *)(a4 + 32); // 0x3af9b9
            *v34 = *v34 + v24;
            return (v23 + 0x4bb61da6 | 0x31d1693e) + 0xcf9b6642 & 0xcfffffc1;
        }
    }
    // 0x3af918
    return result2;
}
