/*
 * Targeted RetDec C for native executable gap queue batch 600.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3447d8-0x3449d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3449d8-0x344bd8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x344bd8-0x344dd8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x344dd8-0x344fd8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x466034-0x466234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x466434-0x466634 rank=- name=- kind=- bytes=- uncovered=-
 *   0x466634-0x466734 rank=- name=- kind=- bytes=- uncovered=-
 *   0x466834-0x466a34 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
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

int64_t function_25767e8();
int64_t function_3447c2();
int64_t function_3447d8(int64_t a1);
int64_t function_34480c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3448e6(int64_t a1);
int64_t function_3448fb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_344917(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_344930(void);
int64_t function_344962(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3449a0(int64_t a1, int64_t a2);
int64_t function_3449d9(int64_t a1, int64_t a2);
int64_t function_3449e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_344a23(int64_t a1, int64_t a2, int64_t a3);
int64_t function_344a6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_344aaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_344ab2(int64_t a1);
int64_t function_344ad7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_344b59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_344b7b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_344b92(void);
int64_t function_344bda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_344c9d(void);
int64_t function_344cb0(int64_t a1);
int64_t function_344ce5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_344d19(void);
int64_t function_344daf(void);
int64_t function_344dd7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_344e26(void);
int64_t function_344e40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_344e97(void);
int64_t function_344ea7(void);
int64_t function_344eba(void);
int64_t function_344ec0(void);
int64_t function_344ed6(void);
int64_t function_344ee0(void);
int64_t function_344efc(void);
int64_t function_344f0c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_344f3e(void);
int64_t function_344f43(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_344f4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3acc600b();
int64_t function_3cc649d3();
int64_t function_465fcb();
int64_t function_466034(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_466086(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4660be(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4660e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4660f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_466194(int64_t a1);
int64_t function_4661b0(void);
int64_t function_466434(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_466501(void);
int64_t function_466549(void);
int64_t function_466558(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_466606(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_466660(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4666a1(void);
int64_t function_4666a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4666b3(void);
int64_t function_4666d5(void);
int64_t function_4666f5(void);
int64_t function_466704(void);
int64_t function_46670a(void);
int64_t function_46671d(void);
int64_t function_46672e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_466834(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_466877(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4668d8(void);
int64_t function_4668d9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_466940(int64_t a1);
int64_t function_466985(int64_t a1);
int64_t function_4669e4(int64_t a1);
int64_t function_6b37d5a3();
int64_t function_ffffffff803483a8();
int64_t function_ffffffff9e4eb9ff();
int64_t function_ffffffffc1964665();
int64_t unknown_1049ae2b();
int64_t unknown_2f39a901();
int64_t unknown_583f202c();
int64_t unknown_5fea9a1f();
int64_t unknown_7dfb06ac();
int64_t unknown_7fd23cf0();
int64_t unknown_ffffffff9e25785f();
int64_t unknown_ffffffffb40d4606();
int64_t unknown_ffffffffba206aef();
int64_t unknown_ffffffffba343d7f();
int64_t unknown_ffffffffba62e5ae();
int64_t unknown_ffffffffbe742ef2();
int64_t unknown_ffffffffc0ba8440();
int64_t unknown_ffffffffc2eb5078();

// Address range: 0x3447d8 - 0x3447e2
int64_t function_3447d8(int64_t a1) {
    // 0x3447d8
    bool v1; // 0x3447d8
    if (v1) {
        function_3447c2();
    }
    int32_t * v2 = (int32_t *)(a1 - 41); // 0x3447da
    int64_t v3; // 0x3447d8
    *v2 = *v2 + (int32_t)v3;
    return function_3acc600b();
}

// Address range: 0x34480c - 0x3448a4
int64_t function_34480c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x34480c
    *(char *)(a1 - 0x3878a9c6) = -1;
    unknown_5fea9a1f();
    int64_t v1; // 0x34480c
    *(char *)v1 = *(char *)&v1 | (char)__asm_wait();
    uint64_t v2 = unknown_583f202c(); // 0x344826
    int64_t v3 = v2 & -256; // 0x34482b
    *(int32_t *)0xea60e41 = *(int32_t *)0xea60e41 ^ (int32_t)a6;
    int64_t result = v3 | (int64_t)&g5 >> 8 & 255; // 0x344839
    int32_t v4 = *(int32_t *)0x3a45046c; // 0x34483b
    int32_t v5 = a3; // 0x34483b
    int32_t v6 = v4 + v5; // 0x34483b
    *(int32_t *)0x3a45046c = v6;
    if (((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x344843
        return result;
    }
    char * v7 = (char *)(result + 0x24dff00); // 0x344878
    *v7 = *v7 + (char)((int64_t)&g5 >> 8 & 255);
    int64_t v8; // 0x34480c
    char * v9 = (char *)((v8 + 0x1e83986 & 0xffffffff) + 0x4d01e800); // 0x34487e
    *v9 = *v9 + (char)(v2 / 256);
    uint64_t v10 = v1 + a3; // 0x344884
    int64_t v11 = v10 & 0xffffffff; // 0x344884
    char v12 = __asm_in(-103); // 0x344886
    int64_t v13 = v3 | (int64_t)v12; // 0x344886
    char * v14 = (char *)(a2 - 0x2f5aab44); // 0x344888
    *v14 = *v14 + (char)(v10 / 256);
    int32_t * v15 = (int32_t *)(v13 - 0x6c81c0ba); // 0x344893
    *v15 = *v15 + ((int32_t)a4 & -0xff01 | (int32_t)&g5);
    unsigned char v16 = *(char *)(v11 + (int64_t)v12); // 0x344899
    int64_t result2 = v13 & -256 | (int64_t)v16; // 0x344899
    *(int32_t *)a1 = (int32_t)result2;
    char * v17 = (char *)(v11 + 59); // 0x34489b
    *v17 = *v17 + v16;
    return result2;
}

// Address range: 0x3448e6 - 0x3448e9
int64_t function_3448e6(int64_t a1) {
    // 0x3448e6
    int64_t v1; // 0x3448e6
    return v1 ^ 18;
}

// Address range: 0x3448fb - 0x344916
int64_t function_3448fb(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2;
    unknown_2f39a901();
    int64_t v2; // 0x3448fb
    *(char *)a2 = (char)(v2 | a2);
    int32_t * v3 = (int32_t *)(v1 - 0x17c0c93f); // 0x344905
    *v3 = *v3 + 0x4b0a301;
    __asm_sti();
    return (int64_t)*(int32_t *)&v1;
}

// Address range: 0x344917 - 0x34492f
int64_t function_344917(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_wait(); // 0x34491b
    char * v2 = (char *)(((a4 - a3) % 256 | a4 & -256) + 0x613f01e8); // 0x344926
    *v2 = -*v2;
    return (v1 + 34) % 256 | v1 & -256;
}

// Address range: 0x344930 - 0x344942
int64_t function_344930(void) {
    // 0x344930
    __asm_in(-29);
    int64_t v1; // 0x344930
    char * v2 = (char *)(v1 + 0x6801e87a); // 0x344934
    *v2 = *v2 + (char)v1;
    __asm_wait();
    return function_3cc649d3();
}

// Address range: 0x344962 - 0x34496b
int64_t function_344962(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x344962
    int64_t v1; // 0x344962
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a2;
    return (v1 | v1) & -256 | (int64_t)__asm_in(27);
}

// Address range: 0x3449a0 - 0x3449d9
int64_t function_3449a0(int64_t a1, int64_t a2) {
    // 0x3449a0
    int64_t v1; // 0x3449a0
    uint64_t v2 = v1;
    unknown_ffffffffba62e5ae();
    char v3 = v2 / 256; // 0x3449ad
    *(char *)-0xc07a4c = *(char *)-0xc07a4c + v3;
    int64_t v4 = unknown_ffffffffc0ba8440(); // 0x3449b3
    uint16_t v5 = (int16_t)v4; // 0x3449bb
    uint16_t v6 = (int16_t)*(char *)(v2 + 0x29865300); // 0x3449bb
    *(char *)0x3c2c43cb = *(char *)0x3c2c43cb + v3;
    return v4 & -0x10000 | (int64_t)(v5 / v6 % 256) | (int64_t)(256 * (v5 % v6));
}

// Address range: 0x3449d9 - 0x3449e5
int64_t function_3449d9(int64_t a1, int64_t a2) {
    // 0x3449d9
    int64_t v1; // 0x3449d9
    *(char *)-0x2467871f = *(char *)-0x2467871f + (char)v1;
    return v1 & -256 | v1 % 256;
}

// Address range: 0x3449e9 - 0x344a17
int64_t function_3449e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char v1 = *(char *)-0x17cb5707; // 0x3449f2
    int64_t v2; // 0x3449e9
    *(char *)-0x17cb5707 = v1 + (char)((uint64_t)v2 / 256);
    float80_t v3; // 0x3449e9
    *(int32_t *)a3 = (int32_t)v3;
    int64_t v4; // 0x3449e9
    __asm_outsb((int16_t)a3, *(char *)&v4);
    unknown_ffffffffb40d4606();
    return 0x1e801e8;
}

// Address range: 0x344a23 - 0x344a2f
int64_t function_344a23(int64_t a1, int64_t a2, int64_t a3) {
    // 0x344a23
    return unknown_1049ae2b();
}

// Address range: 0x344a6d - 0x344a71
int64_t function_344a6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x344a6d
    return a4 & 0xffffffff;
}

// Address range: 0x344aaa - 0x344ab1
int64_t function_344aaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x344aaa
    int64_t result; // 0x344aaa
    *(int32_t *)a1 = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0x344ab2 - 0x344ab8
int64_t function_344ab2(int64_t a1) {
    // 0x344ab2
    int64_t v1; // 0x344ab2
    return v1 & 0xffffffff ^ 0x6801e81a;
}

// Address range: 0x344ad7 - 0x344ade
int64_t function_344ad7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x344ad7
    int64_t result; // 0x344ad7
    return result;
}

// Address range: 0x344b59 - 0x344b7b
int64_t function_344b59(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x344b59
    int64_t v1; // 0x344b59
    *(char *)a2 = (char)(v1 | a4);
    int64_t v2; // 0x344b59
    unsigned char v3 = *(char *)&v2; // 0x344b64
    unsigned char v4 = *(char *)0x8ac01e8a20c0107; // 0x344b66
    int64_t v5 = v1 & -256; // 0x344b66
    char * v6 = (char *)((v5 | (int64_t)v4) + (8 * v1 | 5)); // 0x344b6f
    *v6 = *v6 + (char)(v1 / 256) + (char)(v3 > (char)v1);
    return v5 | 182;
}

// Address range: 0x344b7b - 0x344b8f
int64_t function_344b7b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x10b7250f); // 0x344b7b
    *v1 = *v1 + (int32_t)a2;
    char * v2 = (char *)(a2 - 0x347abbe4); // 0x344b81
    *v2 = *v2 | (char)(a3 / 256);
    int64_t result; // 0x344b7b
    return result;
}

// Address range: 0x344b92 - 0x344b97
int64_t function_344b92(void) {
    // 0x344b92
    return function_ffffffff9e4eb9ff();
}

// Address range: 0x344bda - 0x344bf5
int64_t function_344bda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x344bda
    int64_t result; // 0x344bda
    uint32_t v1 = (int32_t)result;
    uint32_t v2 = v1 + (int32_t)a4; // 0x344bda
    *(int32_t *)a1 = v2;
    *(char *)0x40971607 = *(char *)0x40971607 - (v2 < v1 ? 7 : 6);
    int32_t v3 = result; // 0x344be3
    __asm_out((int16_t)a3, v3);
    *(int32_t *)(a4 + 16) = v3;
    int64_t v4; // 0x344bda
    *(char *)a3 = *(char *)&v4 + (char)result;
    __asm_out_133(-24, v3);
    *(char *)-0x1801500b = *(char *)-0x1801500b + (char)(result / 256);
    return result;
}

// Address range: 0x344c9d - 0x344c9e
int64_t function_344c9d(void) {
    // 0x344c9d
    int64_t result; // 0x344c9d
    return result;
}

// Address range: 0x344cb0 - 0x344cb1
int64_t function_344cb0(int64_t a1) {
    // 0x344cb0
    int64_t result; // 0x344cb0
    return result;
}

// Address range: 0x344ce5 - 0x344cf4
int64_t function_344ce5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x344ce5
    unknown_ffffffffba206aef(a1, a2, a3);
    return unknown_ffffffffbe742ef2();
}

// Address range: 0x344d19 - 0x344d1a
int64_t function_344d19(void) {
    // 0x344d19
    int64_t result; // 0x344d19
    return result;
}

// Address range: 0x344daf - 0x344db0
int64_t function_344daf(void) {
    // 0x344daf
    int64_t result; // 0x344daf
    return result;
}

// Address range: 0x344dd7 - 0x344df5
int64_t function_344dd7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x344dd7
    int64_t v1; // 0x344dd7
    int32_t * v2 = (int32_t *)(v1 - 24); // 0x344dd7
    *v2 = *v2 + (int32_t)v1;
    int32_t * v3 = (int32_t *)(a2 - 0x6f25bc8); // 0x344dda
    *v3 = *v3 + (int32_t)v1;
    char * v4 = (char *)(v1 - 0x60f243f9); // 0x344de4
    char v5 = *v4 + -1 - (char)v1; // 0x344de4
    *v4 = v5;
    unknown_7fd23cf0();
    if (v5 == 0) {
        function_344daf();
    }
    // 0x344df3
    return function_344e40(a1, a2, a3 & -0xff01 | (int64_t)&g2);
}

// Address range: 0x344e26 - 0x344e2b
int64_t function_344e26(void) {
    // 0x344e26
    int64_t v1; // 0x344e26
    int64_t v2 = v1;
    return (v2 + 134) % 256 | v2 & -256;
}

// Address range: 0x344e40 - 0x344e6f
int64_t function_344e40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x344e40
    __asm_fbld(*(float80_t *)(8 * a3 + 0x739e1656));
    int64_t result; // 0x344e40
    bool v1; // 0x344e40
    if (v1) {
        // 0x344e50
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        unsigned char v2 = *(char *)(a2 - 0x66de1b73); // 0x344e53
        char v3 = result; // 0x344e59
        *(char *)0x14ffa913 = *(char *)0x14ffa913 & v3;
        int32_t * v4 = (int32_t *)(result - 0x486b224b); // 0x344e64
        *v4 = *v4 + (int32_t)result;
        char * v5 = (char *)((0x1600 - (result & 0xff00) & 0xff00 | (int64_t)v2 | 0x739e0056) + 97); // 0x344e6c
        *v5 = (char)((char)(result / 256) > 22) - v3 + *v5;
        return result;
    }
    // 0x344e4a
    return result;
}

// Address range: 0x344e97 - 0x344e98
int64_t function_344e97(void) {
    // 0x344e97
    int64_t result; // 0x344e97
    return result;
}

// Address range: 0x344ea7 - 0x344ea8
int64_t function_344ea7(void) {
    // 0x344ea7
    int64_t result; // 0x344ea7
    return result;
}

// Address range: 0x344eba - 0x344ebf
int64_t function_344eba(void) {
    // 0x344eba
    return function_6b37d5a3();
}

// Address range: 0x344ec0 - 0x344ec1
int64_t function_344ec0(void) {
    // 0x344ec0
    int64_t result; // 0x344ec0
    return result;
}

// Address range: 0x344ed6 - 0x344ed8
int64_t function_344ed6(void) {
    // 0x344ed6
    return function_344ec0();
}

// Address range: 0x344ee0 - 0x344ee2
int64_t function_344ee0(void) {
    // 0x344ee0
    int64_t v1; // 0x344ee0
    return function_344f4d(v1, v1, v1, v1);
}

// Address range: 0x344efc - 0x344f09
int64_t function_344efc(void) {
    // 0x344efc
    *(char *)0x552601e8aa557ed0 = (char)__asm_in_135(-118);
    int64_t v1; // 0x344efc
    return function_344f43(v1, v1, v1, v1, v1);
}

// Address range: 0x344f0c - 0x344f14
int64_t function_344f0c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x344f0c
    return function_344ea7();
}

// Address range: 0x344f3e - 0x344f43
int64_t function_344f3e(void) {
    // 0x344f3e
    return function_ffffffff803483a8();
}

// Address range: 0x344f43 - 0x344f4b
int64_t function_344f43(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x344f43
    int64_t v1; // 0x344f43
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x344f4d - 0x344fab
int64_t function_344f4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 0x19ecc400); // 0x344f4d
    int64_t v2; // 0x344f4d
    *v1 = *v1 + (char)v2;
    int64_t v3; // 0x344f4d
    unsigned char v4 = *(char *)&v3; // 0x344f54
    bool v5; // 0x344f4d
    int64_t v6 = v5 ? -1 : 1; // 0x344f54
    int64_t v7 = v6 + a1; // 0x344f54
    __asm_iretd(v7, a2, a3);
    unknown_ffffffff9e25785f();
    int32_t v8 = *(int32_t *)(__asm_int1() + 47); // 0x344f60
    __asm_in_134((int16_t)a3);
    int64_t v9; // 0x344f4d
    *(char *)v7 = *(char *)&v9;
    int64_t v10 = v7 + v6; // 0x344f78
    int64_t v11 = v6 + a2; // 0x344f78
    v3 = v10;
    v9 = v11;
    int64_t v12 = unknown_ffffffffba343d7f(v10, v11); // 0x344f79
    int32_t * v13 = (int32_t *)v11; // 0x344f87
    int32_t v14 = *v13; // 0x344f87
    *v13 = ((int32_t)v12 + 0x3bae5333 | (int32_t)(v4 > (char)v2) + (int32_t)v2 + v8) + v14;
    int64_t v15 = (int64_t)((int32_t)v3 - *(int32_t *)a3); // 0x344f8b
    v3 = v15;
    char * v16 = (char *)v15; // 0x344f8d
    *v16 = *v16 | (char)a3;
    return unknown_7dfb06ac((int32_t)v7 - 0x5fff7611 + (int32_t)v3);
}

// Address range: 0x466034 - 0x466040
int64_t function_466034(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a4 - 76); // 0x466034
    int32_t v3 = *v2; // 0x466034
    int32_t v4 = 2 * v3; // 0x466034
    *v2 = v4;
    int64_t v5; // 0x466034
    if (v3 >= 0 && v4 != 0) {
        v5 = function_465fcb();
    }
    int64_t v6 = v5 + 0xea42e36a; // 0x466039
    *(int32_t *)v1 = *(int32_t *)&v1 | (int32_t)v6;
    return v6 & 0xffffffff;
}

// Address range: 0x466086 - 0x466095
int64_t function_466086(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = __asm_in(-114); // 0x466088
    uint32_t v2 = (int32_t)a4 % 32; // 0x46608d
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)(a1 - 0x4343fabf); // 0x46608d
        *v3 = *v3 << v2;
    }
    int64_t v4; // 0x466086
    return v4 * v4 & 0xffffff00 | (int64_t)v1;
}

// Address range: 0x4660be - 0x4660c8
int64_t function_4660be(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4660be
    return 0xa81c4d32;
}

// Address range: 0x4660e6 - 0x4660ec
int64_t function_4660e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x4660e6
    int64_t result; // 0x4660e6
    __asm_outsd(v1, (int32_t)result);
    __asm_out(v1, (int32_t)result);
    return result;
}

// Address range: 0x4660f8 - 0x466178
int64_t function_4660f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x4660f8
    // 0x4660fa
    return v2 ^ 10;
    // 0x466139
    *(char *)a1 = (char)(a4 | a1);
    char * v3 = (char *)(v2 + 0x586c9d27); // 0x46613c
    *v3 = *v3 & 82;
    uint64_t v4 = __asm_int3() + 0xe3f301ff; // 0x466145
    int64_t v5 = v4 & 0xffffffff; // 0x466151
    uint32_t v6 = *(int32_t *)&v1; // 0x466152
    int64_t v7 = v6; // 0x466152
    char * v8 = (char *)(3 * a1); // 0x466153
    *v8 = *v8 ^ (char)v2;
    uint32_t v9 = *(int32_t *)&v1; // 0x466156
    int32_t v10 = v9 - 0x7d9d6600; // 0x466156
    unsigned char v11 = llvm_ctpop_i8((char)v10); // 0x466156
    *(int32_t *)v7 = v10;
    int64_t v12 = v5; // bp-16, 0x46615f
    bool v13; // 0x4660f8
    int64_t v14 = 0x4000 * (int64_t)v13 | 512 * (int64_t)v13 | 256 * (int64_t)v13 | (int64_t)(v9 < 0x7d9d6600) | 64 * (int64_t)(v10 == 0) | 128 * (int64_t)(v10 < 0) | 2048 * (int64_t)((0x7d9d65ff - v9 & v9) < 0) | 4 * (int64_t)(v11 % 2 == 0) | 2; // 0x466162
    int32_t * v15 = (int32_t *)v14; // 0x466162
    int64_t v16 = (int64_t)&v12; // 0x466163
    char v17 = *(char *)(a3 - 0x59ebd88a); // 0x466164
    int64_t result = 256 * (int64_t)(v17 | (char)(v6 / 256)) | v7 & 0xffff00ff; // 0x466164
    int32_t v18 = result; // 0x46616e
    *v15 = *v15 - v18;
    __asm_out_133(23, v18);
    if ((int64_t)*(int32_t *)(v2 - 119) >= v16) {
        // 0x466177
        return result;
    }
    char * v19 = (char *)(result + 127 + 2 * v14); // 0x466110
    *v19 = *v19 + (char)(v4 / 256);
    *(int64_t *)(v16 - 8) = v5;
    return __asm_hlt() & -256 | 46;
}

// Address range: 0x466194 - 0x466197
int64_t function_466194(int64_t a1) {
    // 0x466194
    int64_t result; // 0x466194
    return result;
}

// Address range: 0x4661b0 - 0x4661b3
int64_t function_4661b0(void) {
    // 0x4661b0
    int64_t result; // 0x4661b0
    return result;
}

// Address range: 0x466434 - 0x466447
int64_t function_466434(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x466434
    int64_t v1; // 0x466434
    char * v2 = (char *)((v1 & 0xffffffff) + 72); // 0x466437
    bool v3; // 0x466434
    *v2 = (char)v3 - (char)a4 + *v2;
    return v1 & 0xffffff89 | 118;
}

// Address range: 0x466501 - 0x466504
int64_t function_466501(void) {
    // 0x466501
    int64_t result; // 0x466501
    return result;
}

// Address range: 0x466549 - 0x46654f
int64_t function_466549(void) {
    // 0x466549
    int64_t v1; // 0x466549
    uint64_t v2 = v1;
    bool v3; // 0x466549
    return 256 * (v2 / 256 + 35 + (int64_t)v3) & 0xff00 | v2 & -0xff01;
}

// Address range: 0x466558 - 0x4665fb
int64_t function_466558(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x466558
    int64_t v1; // 0x466558
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x466558
    int64_t v3 = (v2 ? -4 : 4) + a2; // 0x466558
    uint64_t v4 = __asm_iretd(a5, v3, v1 & 0xffffffff); // 0x466561
    char v5 = *(char *)-0x3ad2ae2d; // 0x466569
    *(char *)-0x3ad2ae2d = v5 - (char)((int64_t)&g1 >> 8);
    int64_t v6; // 0x466558
    int32_t v7 = *(int32_t *)-0x57028766 & (int32_t)(int64_t)&v6; // 0x466570
    *(int32_t *)-0x57028766 = v7;
    char * v8 = (char *)(v3 - 0x326f85b3); // 0x466578
    unsigned char v9 = *v8; // 0x466578
    *v8 = 56;
    if (v7 < 0) {
        uint32_t v10 = *(int32_t *)0x7f1a6234; // 0x4665f2
        *(int32_t *)0x7f1a6234 = v10 / 1024 | 0x400000 * v10;
        return (v4 + 158 + (int64_t)((int32_t)v4 > 0x83582fe7)) % 256 | v4 + 0x7ca7d018 & 0xffffff00;
    }
    int64_t v11 = a4 & -0x10000 | ((int64_t)&g1 & -256 | 56) & -256; // 0x466578
    *(char *)((v11 | (int64_t)v9) + 119) = (char)a5;
    char v12 = *(char *)0x13f26262; // 0x46658e
    int64_t v13 = (v4 + 28) % 256 | v4 & -0x10000 | 256 * (int64_t)(v12 & (char)(v4 / 256)); // 0x46658e
    *(int32_t *)(a5 + 0x65640269) = 0x206041c6;
    *(int32_t *)a5 = (int32_t)v13;
    char v14 = *(char *)-0x5482a399; // 0x4665c7
    int32_t * v15 = (int32_t *)((v11 | (int64_t)(v9 - v14)) + 0x258f2808); // 0x4665d0
    *v15 = *v15 & (int32_t)v3;
    *(int64_t *)0x62f25f31 = v13 & 0xffffffff;
    return 0x206041c6;
}

// Address range: 0x466606 - 0x466622
int64_t function_466606(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x466606
    unknown_ffffffffc2eb5078();
    int64_t v1 = __asm_hlt(); // 0x46660d
    int32_t * v2 = (int32_t *)(8 * v1 + a1); // 0x46660e
    int32_t v3 = *v2; // 0x46660e
    *v2 = 2 * v3 | (int32_t)(v3 < 0);
    int64_t v4; // 0x466606
    *(char *)a1 = *(char *)&v4;
    bool v5; // 0x466606
    int64_t v6 = v5 ? -1 : 1; // 0x466611
    v4 = v6 + a2;
    int32_t * v7 = (int32_t *)(a1 - 69 + v6); // 0x466612
    int64_t v8; // 0x466606
    *v7 = *v7 & (int32_t)v8;
    return v1 & -256 | (int64_t)((char)v1 - *(char *)(v4 + 67));
}

// Address range: 0x466660 - 0x46666b
int64_t function_466660(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x466660
    int64_t result; // 0x466660
    return result;
}

// Address range: 0x4666a1 - 0x4666a3
int64_t function_4666a1(void) {
    // 0x4666a1
    return function_4666b3();
}

// Address range: 0x4666a3 - 0x4666b3
int64_t function_4666a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4666a3
    int64_t v1; // 0x4666a3
    __asm_psrlq(v1, a4);
    return __asm_wait();
}

// Address range: 0x4666b3 - 0x4666b4
int64_t function_4666b3(void) {
    // 0x4666b3
    int64_t result; // 0x4666b3
    return result;
}

// Address range: 0x4666d5 - 0x4666d6
int64_t function_4666d5(void) {
    // 0x4666d5
    int64_t result; // 0x4666d5
    return result;
}

// Address range: 0x4666f5 - 0x4666f6
int64_t function_4666f5(void) {
    // 0x4666f5
    int64_t result; // 0x4666f5
    return result;
}

// Address range: 0x466704 - 0x466709
int64_t function_466704(void) {
    // 0x466704
    int64_t result; // 0x466704
    return result;
}

// Address range: 0x46670a - 0x466715
int64_t function_46670a(void) {
    // 0x46670a
    int64_t v1; // 0x46670a
    __asm_iretd(v1, v1, v1);
    bool v2; // 0x46670a
    if (v2) {
        function_46672e(v1, v1, v1);
    }
    // 0x46670d
    __asm_int(100);
    return function_25767e8();
}

// Address range: 0x46671d - 0x466725
int64_t function_46671d(void) {
    // 0x46671d
    bool v1; // 0x46671d
    if (!v1) {
        function_4666d5();
    }
    // 0x46671f
    return function_ffffffffc1964665();
}

// Address range: 0x46672e - 0x466731
int64_t function_46672e(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = *(int32_t *)(a1 + 115); // 0x46672e
    int64_t v2; // 0x46672e
    return (v2 & 0xffffffff | 0x100000000 * a3) / (int64_t)v1 & 0xffffffff;
}

// Address range: 0x466834 - 0x466876
int64_t function_466834(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x466834
    int64_t v1; // 0x466834
    uint64_t v2 = v1;
    int64_t v3 = a2;
    __asm_outsb((int16_t)a3, (char)a2);
    char v4 = *(char *)(v2 + 0x389e8063); // 0x466839
    char * v5 = (char *)(v1 + 89); // 0x46683f
    unsigned char v6 = *v5; // 0x46683f
    unsigned char v7 = (char)(v1 / 256); // 0x46683f
    *v5 = v6 - v7;
    int32_t v8 = a1; // 0x466847
    int32_t v9 = *(int32_t *)(2 * v1 - 0x2d68ff8a + (256 * (int64_t)(v4 ^ (char)(v2 / 256)) | v2 & -0xff01)); // 0x466847
    int32_t v10 = v9 + v8 + 2 * (int32_t)(v6 < v7); // 0x466847
    if (((v10 ^ v8) & (v10 ^ v9)) >= 0) {
        // 0x466850
        *(char *)-0x64613b69 = *(char *)-0x64613b69 | 87;
        float80_t v11; // 0x466834
        *(int32_t *)0xee2757a7 = (int32_t)v11;
        return v1 & 0xffffffff;
    }
    int16_t v12 = a4; // 0x466836
    int16_t v13 = (int16_t)*(char *)((v1 & 0xffffffff) + 54); // 0x466836
    uint32_t v14 = *(int32_t *)0xee27574c; // 0x466868
    *(int32_t *)0xee27574c = v14 - 0x11d8a898;
    unsigned char v15 = *(char *)0xee2757d8; // 0x46686b
    unsigned char v16 = v14 > 0x11d8a897 ? 105 : 104; // 0x46686b
    *(char *)0xee2757d8 = v15 - v16;
    int64_t v17 = v14 > 0x11d8a897 | v15 < v16 ? 0xdd268867 : 0xdd268866; // 0x46686e
    __asm_outsd(0x5768, *(int32_t *)&v3);
    return (a4 & 0xffff0000 | (int64_t)(v12 / v13 % 256) | (int64_t)(256 * (v12 % v13))) - v17 & 0xffffffff;
}

// Address range: 0x466877 - 0x4668c9
int64_t function_466877(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x466877
    int64_t v1; // 0x466877
    return v1 & 0x13daf700 | (int64_t)__asm_in(33) | 0xec250800;
}

// Address range: 0x4668d8 - 0x4668d9
int64_t function_4668d8(void) {
    // 0x4668d8
    int64_t result; // 0x4668d8
    return result;
}

// Address range: 0x4668d9 - 0x4668e1
int64_t function_4668d9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4668d9
    int64_t result; // 0x4668d9
    return result;
}

// Address range: 0x466940 - 0x466942
int64_t function_466940(int64_t a1) {
    // 0x466940
    int64_t result; // 0x466940
    return result;
}

// Address range: 0x466985 - 0x466986
int64_t function_466985(int64_t a1) {
    // 0x466985
    int64_t result; // 0x466985
    return result;
}

// Address range: 0x4669e4 - 0x4669eb
int64_t function_4669e4(int64_t a1) {
    // 0x4669e4
    int64_t result; // 0x4669e4
    float80_t v1; // 0x4669e4
    *(int16_t *)(result - 0x6ce7fd8c) = (int16_t)v1;
    return result;
}
