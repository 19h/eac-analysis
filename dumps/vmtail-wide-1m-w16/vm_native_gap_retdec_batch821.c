/*
 * Targeted RetDec C for native executable gap queue batch 821.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3611be-0x3613be rank=- name=- kind=- bytes=- uncovered=-
 *   0x3613be-0x3615be rank=- name=- kind=- bytes=- uncovered=-
 *   0x3615be-0x3617be rank=- name=- kind=- bytes=- uncovered=-
 *   0x3617be-0x3619be rank=- name=- kind=- bytes=- uncovered=-
 *   0x3619be-0x361bbe rank=- name=- kind=- bytes=- uncovered=-
 *   0x453be3-0x453de3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x453de3-0x453fe3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x453fe3-0x4541e3 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_3611a5();
int64_t function_3611be(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3611dd(void);
int64_t function_361209(int64_t a1);
int64_t function_36121d(int64_t a1);
int64_t function_36127f(int64_t a1);
int64_t function_361297(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36130f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36131a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_361345(void);
int64_t function_361350(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_361352(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_361356(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3613ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3613dd(void);
int64_t function_3613fb(int64_t a1);
int64_t function_361444(void);
int64_t function_3614ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36152e(int64_t a1);
int64_t function_36154c(void);
int64_t function_36160e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3616b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_361766(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36176e(void);
int64_t function_361783(int64_t a1);
int64_t function_36179a(void);
int64_t function_3617a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36182e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_361851(int64_t a1);
int64_t function_36189a(int64_t a1);
int64_t function_36191d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_361959(void);
int64_t function_36197c(void);
int64_t function_361986(void);
int64_t function_361991(void);
int64_t function_36199c(void);
int64_t function_3619b1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3619c2(void);
int64_t function_361a1e(void);
int64_t function_361a41(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_361a73(int64_t a1);
int64_t function_361aa7(int64_t a1);
int64_t function_361b6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_361b9a(void);
int64_t function_361ba3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_453be3(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_453cf1(int64_t a1);
int64_t function_453cfa(void);
int64_t function_453d28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_453d73(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_453e3a(void);
int64_t function_453e9f(int64_t a1, int64_t a2);
int64_t function_453efc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_453f3d(void);
int64_t function_453f5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_453f68(void);
int64_t function_453f72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_45405a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_454084(int64_t a1);
int64_t function_45409c(void);
int64_t function_4541a6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_4541c2(int64_t result);
int64_t function_57ffaa();
int64_t function_ffffffff943803be();
int64_t function_ffffffffb48b587a();
int64_t function_ffffffffb69548c8();
int64_t function_ffffffffc76013ed();
int64_t function_ffffffffdc480b1f();
int64_t function_fffffffff2bd53ed();
int64_t unknown_36916a27();
int64_t unknown_3aca2e76();
int64_t unknown_b6c8e95();
int64_t unknown_ffffffff843f49d4();
int64_t unknown_ffffffffac9838c2();
int64_t unknown_ffffffffaff4798c();
int64_t unknown_ffffffffe90ae42c();

// Address range: 0x3611be - 0x3611d9
int64_t function_3611be(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3611be
    int64_t v1; // 0x3611be
    bool v2; // 0x3611be
    if (v2) {
        v1 = function_3611a5();
    }
    // 0x3611c1
    *(char *)a1 = (char)v1;
    int64_t v3; // bp-1574250015, 0x3611be
    __asm_out((int16_t)a3, (int32_t)(int64_t)&v3);
    char v4 = *(char *)0x79b24bd4; // 0x3611cd
    int64_t v5; // 0x3611be
    *(char *)0x79b24bd4 = v4 + (char)((uint64_t)v5 / 256);
    int64_t v6; // 0x3611be
    int64_t result = v6 & 0xffffffff; // 0x3611d3
    *(int64_t *)((v1 & 0xffffffff) - 8) = result;
    uint32_t v7 = *(int32_t *)&v6; // 0x3611d7
    *(int32_t *)result = v7 / 0x1000000 | 256 * v7;
    return result;
}

// Address range: 0x3611dd - 0x3611e0
int64_t function_3611dd(void) {
    // 0x3611dd
    int64_t result; // 0x3611dd
    return result;
}

// Address range: 0x361209 - 0x361212
int64_t function_361209(int64_t a1) {
    // 0x361209
    int64_t v1; // 0x361209
    int64_t v2 = v1;
    return v2 & -256 | (int64_t)((char)v2 - *(char *)(v1 + 0xb66c150));
}

// Address range: 0x36121d - 0x361224
int64_t function_36121d(int64_t a1) {
    // 0x36121d
    int64_t v1; // 0x36121d
    return v1 & -256;
}

// Address range: 0x36127f - 0x361284
int64_t function_36127f(int64_t a1) {
    // 0x36127f
    int64_t result; // 0x36127f
    return result;
}

// Address range: 0x361297 - 0x3612ae
int64_t function_361297(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x361297
    int64_t v1; // 0x361297
    uint32_t v2 = (int32_t)v1;
    *(int32_t *)a3 = v2 + (int32_t)a1 + (int32_t)(v2 > (int32_t)a4);
    function_57ffaa();
    return v1 & 0xffffffff ^ 113;
}

// Address range: 0x36130f - 0x361310
int64_t function_36130f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36130f
    int64_t result; // 0x36130f
    return result;
}

// Address range: 0x36131a - 0x361345
int64_t function_36131a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36131a
    int64_t v1; // 0x36131a
    *(int32_t *)(v1 + (int64_t)&g2) = (int32_t)a3;
    int64_t v2; // 0x36131a
    *(char *)a3 = *(char *)&v2 | (char)v1;
    int64_t result = unknown_ffffffffe90ae42c(); // 0x361326
    int32_t * v3 = (int32_t *)(v1 - 83); // 0x36132b
    *v3 = *v3 + (int32_t)a1;
    *(char *)-0x47cb15c5 = *(char *)-0x47cb15c5 + (char)(v1 / 256);
    int64_t v4; // 0x36131a
    *(int32_t *)a1 = *(int32_t *)&v4 ^ (int32_t)result;
    return result;
}

// Address range: 0x361345 - 0x36134b
int64_t function_361345(void) {
    // 0x361345
    int64_t v1; // 0x361345
    char * v2 = (char *)(v1 - 56); // 0x361345
    *v2 = *v2 | 10;
    return function_36130f(v1, v1, v1, v1);
}

// Address range: 0x361350 - 0x361352
int64_t function_361350(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x361350
    int64_t v1; // 0x361350
    return v1 + a4 & 0xffffffff;
}

// Address range: 0x361352 - 0x361355
int64_t function_361352(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result; // 0x361352
    if (a4 == 0) {
        result = function_36130f(a1, a2, a3, 0);
    }
    // 0x361355
    return result;
}

// Address range: 0x361356 - 0x361390
int64_t function_361356(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a4 + 0x15cc94d7); // 0x361357
    uint32_t v2 = (int32_t)a3; // 0x361361
    unsigned char v3 = *(char *)-0x5cc35c96; // 0x361363
    int64_t v4; // 0x361356
    unsigned char v5 = v3 + (char)(v4 / 256); // 0x361363
    *(char *)-0x5cc35c96 = v5;
    uint32_t v6 = v5 < v3 ? -0x1356f9d9 : -0x1356f9da; // 0x361369
    int32_t v7 = *(int32_t *)-0x17b950b3; // 0x36136e
    int32_t * v8 = (int32_t *)(v4 + (int64_t)(v2 - v6)); // 0x361374
    *v8 = *v8 + (int32_t)v4;
    *(char *)(v4 - 111) = (char)(-0x2e47ff4d * v1 - v7 + (int32_t)(v5 < v3 | v6 > v2));
    return function_ffffffffc76013ed();
}

// Address range: 0x3613ab - 0x3613af
int64_t function_3613ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3613ab
    int64_t v1; // 0x3613ab
    int64_t result = v1;
    *(char *)result = (char)result + (char)a4;
    return result;
}

// Address range: 0x3613dd - 0x3613df
int64_t function_3613dd(void) {
    // 0x3613dd
    return __asm_wait();
}

// Address range: 0x3613fb - 0x3613ff
int64_t function_3613fb(int64_t a1) {
    // 0x3613fb
    int64_t result; // 0x3613fb
    uint64_t v1 = result;
    *(char *)(v1 & 0xffffffff) = (char)(v1 / 256) + (char)v1;
    return result;
}

// Address range: 0x361444 - 0x361445
int64_t function_361444(void) {
    // 0x361444
    return __asm_wait();
}

// Address range: 0x3614ba - 0x3614e9
int64_t function_3614ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x3614c9
    if (v1 != 0) {
        char * v2 = (char *)(a2 + 99); // 0x3614c9
        *v2 = *v2 >> v1;
    }
    // 0x3614e8
    int64_t v3; // 0x3614ba
    return v3 & -256 | (int64_t)__asm_in_133((int16_t)a3);
}

// Address range: 0x36152e - 0x361538
int64_t function_36152e(int64_t a1) {
    // 0x36152e
    int64_t v1; // 0x36152e
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x36154c - 0x36154d
int64_t function_36154c(void) {
    // 0x36154c
    int64_t result; // 0x36154c
    return result;
}

// Address range: 0x36160e - 0x361618
int64_t function_36160e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36160e
    int64_t result; // 0x36160e
    *(int32_t *)(a4 + 98) = (int32_t)result;
    *(char *)0x60f9cd18 = *(char *)0x60f9cd18 + (char)(result / 256);
    return result;
}

// Address range: 0x3616b2 - 0x36175e
int64_t function_3616b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3; // 0x3616b2
    char * v4 = (char *)(v3 + 0x319244f6); // 0x3616b2
    *v4 = (char)a4;
    unsigned char v5 = *v4 + (char)v3; // 0x3616b8
    if (llvm_ctpop_i8(v5) % 2 == 0) {
        char * v6 = (char *)(v1 + (int64_t)&g1); // 0x361700
        int64_t v7; // 0x3616b2
        char v8 = *v6 + (char)v7; // 0x361700
        *v6 = v8;
        int64_t result = (int64_t)*(int32_t *)&v1; // 0x361712
        if (v8 == 0) {
            // 0x361715
            return result;
        }
        char v9 = *(char *)&v7; // 0x361759
        *(char *)v7 = v9 + (char)((int64_t)&g5 >> 8);
        return result;
    }
    int64_t v10 = v3 & -256 | (int64_t)v5; // 0x3616b8
    uint32_t v11 = *(int32_t *)&v2; // 0x3616bc
    uint32_t v12 = v11 + (int32_t)v10; // 0x3616bc
    *(int32_t *)v2 = v12;
    int64_t v13 = v2; // 0x3616be
    int64_t v14 = v10 & 0xffffffff; // 0x3616be
    int64_t v15 = (v13 - (v12 < v11 ? 253 : 252)) % 256 | v13 & 0xffffff00; // 0x3616bf
    __asm_sti(v14, v15);
    __asm_sti(v14, v15);
    return unknown_ffffffff843f49d4() & -256 | 26;
}

// Address range: 0x361766 - 0x361769
int64_t function_361766(int64_t a1, int64_t a2, int64_t a3) {
    // 0x361766
    int64_t result; // 0x361766
    __asm_outsb((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x36176e - 0x361773
int64_t function_36176e(void) {
    // 0x36176e
    int64_t result; // 0x36176e
    return result;
}

// Address range: 0x361783 - 0x361788
int64_t function_361783(int64_t a1) {
    // 0x361783
    int64_t v1; // 0x361783
    int64_t v2 = v1;
    return (v2 + 132) % 256 | v2 & -256;
}

// Address range: 0x36179a - 0x36179b
int64_t function_36179a(void) {
    // 0x36179a
    int64_t result; // 0x36179a
    return result;
}

// Address range: 0x3617a9 - 0x3617e3
int64_t function_3617a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3617a9
    *(int32_t *)a1 = (int32_t)a3;
    int64_t v1; // 0x3617a9
    unsigned char v2 = (char)((int32_t)v1 / 256); // 0x3617b6
    unsigned char v3 = v2 + (char)v1; // 0x3617b6
    unsigned char v4 = v3 + (char)((char)v1 > 136); // 0x3617b6
    int64_t v5 = (char)v1 > 136 ? v4 <= v2 : v3 < v2 ? 0x13d00b4 : 0x13d00b3; // 0x3617c0
    uint64_t v6 = a2 - v5 & 0xffffffff | 0x100000000 * (256 * (int64_t)v4 | v1 & 0xffff00ff); // 0x3617c5
    uint64_t v7 = v6 / 0x3c01e802; // 0x3617c5
    int64_t v8 = v7 & 0xffffffff; // 0x3617c5
    char * v9 = (char *)(v8 + 0xdfcd9be); // 0x3617c9
    *v9 = *v9 / 2;
    uint32_t v10 = (int32_t)v1 & -256 | 81; // 0x3617d4
    uint32_t v11 = v10 + (int32_t)v7; // 0x3617d4
    int32_t * v12 = (int32_t *)(v6 % 0x3c01e802); // 0x3617d6
    int32_t v13 = *v12; // 0x3617d6
    int32_t v14 = v1; // 0x3617d6
    int32_t v15 = v11 < v10; // 0x3617d6
    int32_t v16 = v13 + v14 + v15; // 0x3617d6
    int32_t v17 = v16 + v15; // 0x3617d6
    *v12 = v16;
    int64_t result = v8; // 0x3617d8
    if (v16 < 0 == ((v17 ^ v13) & (v17 ^ v14)) < 0 == (v16 != 0)) {
        result = function_36179a();
    }
    // 0x3617da
    *(char *)-0x24bd011d = *(char *)-0x24bd011d + (char)(v11 / 256);
    return result;
}

// Address range: 0x36182e - 0x361851
int64_t function_36182e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 0x13d007f); // 0x36182e
    *v1 = *v1 + (char)(a3 / 256);
    int64_t v2; // 0x36182e
    __asm_out((int16_t)a3, (int32_t)v2);
    int32_t * v3 = (int32_t *)(v2 + 8); // 0x361835
    *v3 = *v3 & 0x391823cb;
    *(char *)-0x7a4fbd65 = (char)v2;
    return function_ffffffffdc480b1f();
}

// Address range: 0x361851 - 0x361875
int64_t function_361851(int64_t a1) {
    // 0x361851
    int64_t v1; // 0x361851
    *(char *)a1 = (char)v1;
    int32_t * v2 = (int32_t *)(v1 - 0x19397888); // 0x36185d
    *v2 = *v2 + (int32_t)v1;
    *(int32_t *)-0x71fe17c0f9527286 = (int32_t)v1;
    return 2 * v1 & 0xffffff5d;
}

// Address range: 0x36189a - 0x3618a2
int64_t function_36189a(int64_t a1) {
    // 0x36189a
    int64_t result; // 0x36189a
    return result;
}

// Address range: 0x36191d - 0x361948
int64_t function_36191d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x36191d
    int64_t v1; // 0x36191d
    int32_t * v2 = (int32_t *)(v1 + 18); // 0x36191d
    *v2 = *v2 - (int32_t)v1;
    bool v3; // 0x36191d
    int64_t v4 = (v3 ? -1 : 1) + a1; // 0x361920
    int64_t v5 = unknown_36916a27(v4); // 0x361921
    char * v6 = (char *)(v5 + 0x7834c00); // 0x361926
    *v6 = *v6 + (char)v5;
    int64_t v7 = (v5 + a4 / 256) % 256 | v5 & -256; // 0x36192c
    int32_t * v8 = (int32_t *)(v1 + 0x4b00b900); // 0x36192e
    *v8 = *v8 + (int32_t)v1;
    *(int32_t *)v4 = (int32_t)v7;
    *(int32_t *)(v4 + (v3 ? -28 : -20)) = -0x5b7e79ff;
    return v7 & -0xff01 | (int64_t)&g3;
}

// Address range: 0x361959 - 0x36195c
int64_t function_361959(void) {
    // 0x361959
    int64_t result; // 0x361959
    return result;
}

// Address range: 0x36197c - 0x361981
int64_t function_36197c(void) {
    // 0x36197c
    return function_ffffffffb48b587a();
}

// Address range: 0x361986 - 0x361987
int64_t function_361986(void) {
    // 0x361986
    int64_t result; // 0x361986
    return result;
}

// Address range: 0x361991 - 0x361996
int64_t function_361991(void) {
    // 0x361991
    return function_fffffffff2bd53ed();
}

// Address range: 0x36199c - 0x36199f
int64_t function_36199c(void) {
    // 0x36199c
    int64_t result; // 0x36199c
    return result;
}

// Address range: 0x3619b1 - 0x3619be
int64_t function_3619b1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3619b1
    int64_t v1; // 0x3619b1
    int64_t v2 = v1;
    return (v2 + 95) % 256 | v2 & -256;
}

// Address range: 0x3619c2 - 0x3619cf
int64_t function_3619c2(void) {
    // 0x3619c2
    int64_t result; // 0x3619c2
    unsigned char v1 = (char)result;
    *(char *)result = v1 / 128 | 2 * v1;
    int32_t * v2 = (int32_t *)(result - 0x5b08ec12); // 0x3619c8
    int64_t v3; // bp-8, 0x3619c2
    *v2 = *v2 + (int32_t)(int64_t)&v3;
    return result;
}

// Address range: 0x361a1e - 0x361a1f
int64_t function_361a1e(void) {
    // 0x361a1e
    int64_t result; // 0x361a1e
    return result;
}

// Address range: 0x361a41 - 0x361a4a
int64_t function_361a41(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a2 + 61 + a4); // 0x361a41
    *v1 = *v1 + (char)(a4 / 256);
    int64_t v2; // 0x361a41
    *(int32_t *)a1 = *(int32_t *)&v2 + (int32_t)a2;
    int64_t result; // 0x361a41
    return result;
}

// Address range: 0x361a73 - 0x361a75
int64_t function_361a73(int64_t a1) {
    // 0x361a73
    int64_t result; // 0x361a73
    return result;
}

// Address range: 0x361aa7 - 0x361aa8
int64_t function_361aa7(int64_t a1) {
    // 0x361aa7
    int64_t result; // 0x361aa7
    return result;
}

// Address range: 0x361b6b - 0x361b98
int64_t function_361b6b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    unknown_3aca2e76();
    __asm_in_134((int16_t)a3);
    int64_t v2; // 0x361b6b
    *(int32_t *)a1 = (int32_t)(int64_t)&v1 + (int32_t)v2;
    unknown_ffffffffaff4798c();
    return unknown_b6c8e95();
}

// Address range: 0x361b9a - 0x361b9d
int64_t function_361b9a(void) {
    // 0x361b9a
    int64_t result; // 0x361b9a
    return result;
}

// Address range: 0x361ba3 - 0x361bbe
int64_t function_361ba3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x361ba3
    int64_t v1; // 0x361ba3
    int32_t * v2 = (int32_t *)(v1 + 0x7123a70a); // 0x361ba8
    *v2 = *v2 + (int32_t)a4;
    __asm_int3();
    return function_ffffffff943803be();
}

// Address range: 0x453be3 - 0x453ce9
int64_t function_453be3(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x453be3
    int64_t result; // 0x453be3
    int64_t v1 = result;
    bool v2; // 0x453be3
    bool v3 = v2;
    int32_t v4; // bp-8, 0x453be3
    if (v2) {
        // 0x453c5d
        int64_t v5; // 0x453be3
        v4 = (int64_t)&v5;
        *(char *)a1 = __asm_insb((int16_t)a3);
        unsigned char v6 = (char)(a4 / 256); // 0x453c5f
        unsigned char v7 = (char)result + v6; // 0x453c5f
        bool v8 = v3 ? v7 + (char)v3 <= v6 : v7 < v6; // 0x453c5f
        __asm_fbld(*(float80_t *)(a3 + 0x145d7b1d));
        char v9 = *(char *)0x267e0c2a; // 0x453c67
        *(char *)0x267e0c2a = (char)v8 - (char)(a3 / 256) + v9;
        return result;
    }
    int32_t v10 = __asm_insd((int16_t)a3); // 0x453be7
    int32_t * v11 = (int32_t *)a1; // 0x453be7
    *v11 = v10;
    int64_t v12 = 257 * v1 & 0xff00 | v1 & -0xff01; // 0x453be8
    char * v13 = (char *)v12; // 0x453bea
    *v13 = (char)a4;
    int64_t v14 = a4 & -256 | (int64_t)*v13; // 0x453bea
    int32_t v15 = result; // 0x453bec
    v4 = v15;
    __asm_sti(a1, a2);
    *v11 = (int32_t)a2;
    int64_t v16 = (v2 ? -4 : 4) + a1; // 0x453bf1
    int32_t v17 = *(int32_t *)(v16 + 21); // 0x453bf2
    __asm_in(-120);
    int32_t * v18 = (int32_t *)(v12 + 0x582ac131 + v14); // 0x453bf9
    uint32_t v19 = *v18; // 0x453bf9
    *v18 = (int32_t)v12;
    int32_t v20 = (int32_t)v14 + (int32_t)a3; // 0x453c00
    if (v20 < 0) {
        char * v21 = (char *)(2 * a3 + 86 + (int64_t)v20); // 0x453c04
        *v21 = *v21 & -120;
        return (int64_t)*(int32_t *)0x634b05bff9546ad3;
    }
    // 0x453c7e
    int64_t v22; // 0x453be3
    int64_t result2 = v22 & 0xffffffff; // 0x453bf7
    char * v23 = (char *)(int64_t)v19; // 0x453c7e
    *v23 = *v23 + (char)(v19 / 256);
    if (v20 == 1) {
        return result2;
    }
    int64_t v24 = (int64_t)&v4; // 0x453bec
    *(int32_t *)result2 = *(int32_t *)&v22 | (int32_t)v22;
    unsigned char v25 = (char)v24; // 0x453cac
    unsigned char v26 = *(char *)(int64_t)(v17 ^ (int32_t)v16) + v25; // 0x453cac
    int32_t * v27 = (int32_t *)(result + 113 + result2); // 0x453cb6
    *v27 = *v27 + v15 + (int32_t)(v26 < v25);
    *(int64_t *)((v24 & -256 | (int64_t)v26) - 8) = 0x308c635;
    return result2;
}

// Address range: 0x453cf1 - 0x453cf4
int64_t function_453cf1(int64_t a1) {
    // 0x453cf1
    int64_t result; // 0x453cf1
    return result;
}

// Address range: 0x453cfa - 0x453cfb
int64_t function_453cfa(void) {
    // 0x453cfa
    int64_t result; // 0x453cfa
    return result;
}

// Address range: 0x453d28 - 0x453d4c
int64_t function_453d28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x453d28
    int64_t v1; // 0x453d28
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v1 + (int32_t)v2;
    uint32_t v3 = (int32_t)a2; // 0x453d32
    int64_t v4; // 0x453d28
    uint32_t v5 = *(int32_t *)&v4; // 0x453d32
    unsigned char v6 = llvm_ctpop_i8((char)(v3 - v5)); // 0x453d32
    int32_t * v7 = (int32_t *)(v1 + 0x4b743626); // 0x453d35
    uint32_t v8 = *v7; // 0x453d35
    *v7 = 0x100000 * v8 | v8 / 0x2000 | 0x80000 * (int32_t)(v5 > v3);
    int64_t result; // 0x453d28
    if (v6 % 2 != 0) {
        result = function_453cfa();
    }
    // 0x453d3e
    return result;
}

// Address range: 0x453d73 - 0x453d7d
int64_t function_453d73(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 125); // 0x453d73
    int64_t v2; // 0x453d73
    *v1 = *v1 + (char)v2;
    return __asm_in_134((int16_t)a3);
}

// Address range: 0x453e3a - 0x453e52
int64_t function_453e3a(void) {
    // 0x453e3a
    int64_t result; // 0x453e3a
    // 0x453e50
    __asm_out_135(-64, (int32_t)result);
    return result;
}

// Address range: 0x453e9f - 0x453ed9
int64_t function_453e9f(int64_t a1, int64_t a2) {
    // 0x453e9f
    return a2 & 0xffffffff;
}

// Address range: 0x453efc - 0x453f03
int64_t function_453efc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x453efc
    return function_453f68();
}

// Address range: 0x453f3d - 0x453f3e
int64_t function_453f3d(void) {
    // 0x453f3d
    int64_t result; // 0x453f3d
    return result;
}

// Address range: 0x453f5b - 0x453f68
int64_t function_453f5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x453f5b
    int64_t v1; // 0x453f5b
    return v1 & -68;
}

// Address range: 0x453f68 - 0x453f71
int64_t function_453f68(void) {
    // 0x453f68
    int64_t result; // 0x453f68
    *(int32_t *)-0x65b84a32e89115bb = (int32_t)result;
    return result;
}

// Address range: 0x453f72 - 0x454016
int64_t function_453f72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x453f72
    int64_t v1; // 0x453f72
    uint32_t v2 = (int32_t)v1; // 0x453f72
    bool v3; // 0x453f72
    uint32_t v4 = *(int32_t *)(v1 + 88) + (int32_t)v3; // 0x453f72
    uint32_t v5 = v2 - v4; // 0x453f72
    int64_t result = v1 & 0xffffffff; // 0x453f76
    if (v4 <= v2) {
        int64_t v6 = result; // 0x453f80
        if (v5 == 0) {
            v6 = function_453f3d();
        }
        // 0x453f82
        return v6 & -256 | (int64_t)__asm_in_136(2);
    }
    if (a4 == 1 || v5 == 0) {
        // 0x453f7e
        if (v5 == 0) {
            // 0x453fb5
            return result;
        }
        // 0x453f82
        return result & -256 | (int64_t)__asm_in_136(2);
    }
    uint32_t v7 = *(int32_t *)(a4 - 104) ^ (int32_t)v1; // 0x453fab
    uint32_t v8 = v7 + 0x678337c1; // 0x453fae
    int64_t result2 = v8; // 0x453fae
    if (v7 <= 0x987cc83e) {
        // 0x453fb5
        return result2;
    }
    if (((v8 ^ v7) & (v7 ^ -0x80000000)) >= 0) {
        char * v9 = (char *)(result2 + 35); // 0x453fef
        *v9 = *v9 + (char)(v5 / 256);
        return result2 & 0xffffff00 | (int64_t)(*(char *)result2 & (char)v8);
    }
    int32_t v10 = a1;
    int32_t v11 = *(int32_t *)((v3 ? -4 : 4) + a2); // 0x453fb8
    if (v11 < v10 == ((v11 - v10 ^ v11) & (v11 ^ v10)) > -1) {
        // 0x454010
        return result2 & 0xffffff00 | (int64_t)((v7 + 161) % 256);
    }
    // 0x453fb5
    return result2;
}

// Address range: 0x45405a - 0x454072
int64_t function_45405a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45405a
    unknown_ffffffffac9838c2();
    return function_ffffffffb69548c8(a4 & 0xffffffff);
}

// Address range: 0x454084 - 0x454087
int64_t function_454084(int64_t a1) {
    // 0x454084
    int64_t result; // 0x454084
    return result;
}

// Address range: 0x45409c - 0x45409f
int64_t function_45409c(void) {
    // 0x45409c
    int64_t result; // 0x45409c
    return result;
}

// Address range: 0x4541a6 - 0x4541af
int64_t function_4541a6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x4541a6
    int64_t result; // 0x4541a6
    if ((result & 0x4000) != 0) {
        // 0x4541ed
        return result;
    }
    // 0x4541aa
    *(char *)a3 = (char)(a4 / 256 | a3);
    return result;
}

// Address range: 0x4541c2 - 0x4541c8
int64_t function_4541c2(int64_t result) {
    // 0x4541c2
    __asm_int((char)result);
    return result;
}
