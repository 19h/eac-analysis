/*
 * Targeted RetDec C for native executable gap queue batch 1058.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x28a8cb-0x28aacb rank=- name=- kind=- bytes=- uncovered=-
 *   0x28accb-0x28aecb rank=- name=- kind=- bytes=- uncovered=-
 *   0x334223-0x334423 rank=- name=- kind=- bytes=- uncovered=-
 *   0x334423-0x334623 rank=- name=- kind=- bytes=- uncovered=-
 *   0x334623-0x334823 rank=- name=- kind=- bytes=- uncovered=-
 *   0x334823-0x334a23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x334a23-0x334c23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x334c23-0x334e23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x335023-0x335223 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d68a7-0x3d6aa7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d6ca7-0x3d6ea7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d6ea7-0x3d70a7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d70a7-0x3d72a7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d72a7-0x3d74a7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d74a7-0x3d76a7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d76a7-0x3d78a7 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g9;
extern int g10;
extern int g11;
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

int64_t function_1142104();
int64_t function_14db4354();
int64_t function_21b4be8();
int64_t function_28a8cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_28a9b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_28aa7d(void);
int64_t function_28accb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_28ae98(void);
int64_t function_334223(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_334271(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3343d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3344f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_334626(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_33479a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_334907(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_334a38(void);
int64_t function_334a56(int64_t a1);
int64_t function_334a62(void);
int64_t function_334a78(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_334ac7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_334af6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_334b4a(void);
int64_t function_334b58(void);
int64_t function_334b60(void);
int64_t function_334b8d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_334ba3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_334bc9(int64_t a1);
int64_t function_334bdc(int64_t a1);
int64_t function_334bea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_334c02(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_334c09(int64_t a1, int32_t a2);
int64_t function_334c1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_334c47(void);
int64_t function_334c59(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_334c67(void);
int64_t function_334c6c(int64_t a1);
int64_t function_334cc7(int64_t a1);
int64_t function_334cfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_334d0d(int64_t a1);
int64_t function_334d1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_334d2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_334d4e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_334d6d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_334ff7();
int64_t function_335023(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_335114(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_335151(int64_t a1);
int64_t function_335160(void);
int64_t function_335178(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3351c9(void);
int64_t function_3351d7(void);
int64_t function_3351da(void);
int64_t function_337e7b();
int64_t function_35682775();
int64_t function_3d68a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3d6a2f(int64_t a1, int64_t a2);
int64_t function_3d6c3c();
int64_t function_3d6ca7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d6d73(int64_t a1);
int64_t function_3d6d86(int64_t a1);
int64_t function_3d6d87(void);
int64_t function_3d6d93(void);
int64_t function_3d6dc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d6dde(void);
int64_t function_3d6dee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3d6e35(int64_t a1);
int64_t function_3d6e49(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3d6e7f(void);
int64_t function_3d6f9a(void);
int64_t function_3d6fe3(int64_t a1);
int64_t function_3d702d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3d7131(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3d71d1(void);
int64_t function_3d720d(int64_t a1);
int64_t function_3d7214(void);
int64_t function_3d721f(int64_t a1, int64_t a2);
int64_t function_3d7238(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d730e(void);
int64_t function_3d733b(int64_t a1);
int64_t function_3d734e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d73ff(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d7404(void);
int64_t function_3d740c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d741b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d7431(void);
int64_t function_3d743d(void);
int64_t function_3d7460(int64_t a1, int64_t a2);
int64_t function_3d7469(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d7474(int64_t a1);
int64_t function_3d748d(void);
int64_t function_3d74cb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3d7568(int64_t a1, int64_t a2);
int64_t function_3d75ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d761c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d764c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3d768a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3d7719(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3d7886(int64_t a1);
int64_t function_55dd6af2();
int64_t function_8f0700b();
int64_t function_c4258();
int64_t function_caf2a();
int64_t function_e3efe3c();
int64_t function_ffffffffbf35398f();
int64_t function_ffffffffcf3eb168();
int64_t function_fffffffff93eb777();
int64_t unknown_1ed364a6();
int64_t unknown_29224507();
int64_t unknown_2bd0272c();
int64_t unknown_3ab2f843();
int64_t unknown_3cd0bddd();
int64_t unknown_4687ac61();
int64_t unknown_47577128();
int64_t unknown_49a42a87();
int64_t unknown_546418b1();
int64_t unknown_574fcae1();
int64_t unknown_618efb7f();
int64_t unknown_79f67e1d();
int64_t unknown_7f3206e7();
int64_t unknown_91b1a4();
int64_t unknown_ffffffff8537b24f();
int64_t unknown_ffffffff8b63473e();
int64_t unknown_ffffffff8bced2a2();
int64_t unknown_ffffffff920a57ca();
int64_t unknown_ffffffff9e11abac();
int64_t unknown_ffffffffa34558de();
int64_t unknown_ffffffffcc5d63e9();
int64_t unknown_ffffffffe843a826();
int64_t unknown_ffffffffefbe724c();

// Address range: 0x28a8cb - 0x28a991
int64_t function_28a8cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x28a8cb
    int64_t v1; // 0x28a8cb
    char * v2 = (char *)(v1 - 125); // 0x28a8cb
    char v3 = a4; // 0x28a8cb
    *v2 = *v2 | v3;
    char * v4 = (char *)((v1 & -256 | (int64_t)__asm_in((int16_t)a3)) - 119); // 0x28a8cf
    *v4 = *v4 | v3;
    int64_t v5; // bp-8, 0x28a8cb
    v5 = (int64_t)&v5 + 16;
    return function_caf2a(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x28a9b6 - 0x28a9ba
int64_t function_28a9b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 104); // 0x28a9b6
    int64_t result; // 0x28a9b6
    *v1 = *v1 | (char)result;
    return result;
}

// Address range: 0x28aa7d - 0x28aa80
int64_t function_28aa7d(void) {
    // 0x28aa7d
    int64_t result; // 0x28aa7d
    return result;
}

// Address range: 0x28accb - 0x28ae14
int64_t function_28accb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x28accb
    int64_t v1; // bp-16, 0x28accb
    int64_t v2 = (int64_t)&v1; // 0x28ad90
    int64_t v3 = v2 + 16; // 0x28ad97
    v1 = v3;
    int64_t v4 = *(int64_t *)(v2 + 32); // 0x28ada6
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x28ada6
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 8); // 0x28adad
    *v6 = v4;
    int64_t * v7 = (int64_t *)(v2 + 24); // 0x28adc9
    *v7 = *v5;
    v1 = 0xab3ba52;
    *v6 = v4;
    *(int64_t *)(v2 + 40) = *v5;
    int64_t * v8 = (int64_t *)v3; // 0x28ade1
    int64_t v9 = *v8; // 0x28ade1
    *v5 = v9;
    v1 = v9;
    int64_t v10 = *v7; // 0x28adf3
    *v8 = v10;
    *v5 = v10;
    int64_t v11; // 0x28accb
    return function_caf2a(a1, a2, a3, 0x400fa1c5 - v11 ^ a4, a5, a6);
}

// Address range: 0x28ae98 - 0x28ae9b
int64_t function_28ae98(void) {
    // 0x28ae98
    int64_t result; // 0x28ae98
    return result;
}

// Address range: 0x334223 - 0x334271
int64_t function_334223(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x334223
    int64_t v1; // 0x334223
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x334223
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    int64_t v5 = v1 + (a4 ^ 0x7eb72e1a); // 0x33423b
    *(int64_t *)(v5 - 8) = v5 + 8;
    return function_caf2a(a1, a2, a3, a5, v1, v1);
}

// Address range: 0x334271 - 0x3343d9
int64_t function_334271(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a3; // bp-32, 0x33438b
    return function_caf2a(a1, a2, (int64_t)&v1, a4, a5, a6);
}

// Address range: 0x3343d9 - 0x3344f2
int64_t function_3343d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3343d9
    return function_caf2a(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x3344f2 - 0x334626
int64_t function_3344f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)a1; // 0x334530
    *v1 = 0x3334b6;
    int64_t v2 = a1 - 8; // 0x334538
    int64_t v3 = a1 - 16; // 0x334557
    int64_t * v4 = (int64_t *)v3; // 0x334557
    *(int64_t *)v2 = 0x39998f77;
    int64_t * v5 = (int64_t *)(a1 - 24); // 0x334566
    int64_t v6 = *(int64_t *)(a1 + 24); // 0x33457c
    *v4 = v6;
    *v5 = v2;
    int64_t v7 = *v1; // 0x3345a3
    *v5 = v7;
    int64_t * v8 = (int64_t *)(a1 - 32); // 0x3345a7
    *v8 = v3;
    int64_t * v9 = (int64_t *)(a1 - 40); // 0x3345c4
    *v9 = v6;
    *v4 = *v8;
    *(int64_t *)(a1 - 48) = v7;
    *v1 = *v8;
    int64_t v10 = *v5; // 0x3345de
    *v8 = v10;
    *v9 = v10;
    *v5 = v2;
    int64_t v11; // 0x3344f2
    return function_caf2a(v11, a2, a3, a4, v11, v11);
}

// Address range: 0x334626 - 0x33479a
int64_t function_334626(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x334626
    int64_t v1; // bp-56, 0x334626
    v1 = (int64_t)&v1;
    return function_caf2a(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x33479a - 0x334907
int64_t function_33479a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x298af7fa; // bp-48, 0x3348a2
    int64_t v2 = (int64_t)&v1; // 0x3348de
    *(int64_t *)(v2 - 8) = 0x298af7fa;
    *(int64_t *)(v2 - 16) = 0x298af7fa;
    int64_t v3; // 0x33479a
    return function_caf2a(a1, a2, a3, a4, v3, v3);
}

// Address range: 0x334907 - 0x334a38
int64_t function_334907(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x334907
    int64_t v1; // bp-32, 0x334907
    v1 = (int64_t)&v1 + 16;
    return function_caf2a(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x334a38 - 0x334a3d
int64_t function_334a38(void) {
    // 0x334a38
    return function_337e7b();
}

// Address range: 0x334a56 - 0x334a5b
int64_t function_334a56(int64_t a1) {
    // 0x334a56
    int64_t v1; // 0x334a56
    return v1 & -0xff01 | (int64_t)&g2;
}

// Address range: 0x334a62 - 0x334a63
int64_t function_334a62(void) {
    // 0x334a62
    int64_t result; // 0x334a62
    return result;
}

// Address range: 0x334a78 - 0x334aab
int64_t function_334a78(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x334a78
    int64_t v1; // 0x334a78
    int64_t v2 = v1 | a3;
    int64_t result = v2 & 0xffffffff; // 0x334a78
    uint32_t v3 = (int32_t)v1; // 0x334a7d
    int32_t v4 = v3 - 67; // 0x334a7d
    int64_t v5 = unknown_49a42a87(); // 0x334a81
    if (v4 == 0) {
        if (v3 >= 67) {
            function_334a62();
        }
        // 0x334a8b
        return result;
    }
    int32_t * v6 = (int32_t *)(4 * a1 - 115 + a4); // 0x334a91
    *v6 = *v6 + (int32_t)v2;
    uint32_t v7 = (int32_t)(v5 | a4 / 256 % 256); // 0x334a9c
    int64_t v8; // bp-16, 0x334a78
    int32_t v9 = (int64_t)&v8; // 0x334a9c
    uint32_t v10 = v7 + v9; // 0x334a9c
    uint32_t v11 = v10 - ((int32_t)(v10 < v7) | v9); // 0x334a9e
    int32_t * v12 = (int32_t *)result; // 0x334aa0
    *v12 = *v12 + (int32_t)a1;
    char v13; // 0x334a78
    int64_t v14 = v13 < (char)v2 ? 148 : 147; // 0x334aa5
    int64_t result2 = (v14 + (int64_t)v11) % 256 | (int64_t)(v11 & -256); // 0x334aa5
    char * v15 = (char *)(result2 + 39); // 0x334aa7
    *v15 = *v15 + (char)v4;
    return result2;
}

// Address range: 0x334ac7 - 0x334aec
int64_t function_334ac7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x334ac7
    int64_t v1; // 0x334ac7
    int32_t * v2 = (int32_t *)(v1 + 119); // 0x334acd
    *v2 = *v2 + (int32_t)a3;
    int64_t result = unknown_574fcae1(0xe8fd2096); // 0x334adb
    int64_t v3; // 0x334ac7
    *(char *)0xe8fd2096 = *(char *)&v3;
    return result;
}

// Address range: 0x334af6 - 0x334b35
int64_t function_334af6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int32_t * v2 = (int32_t *)(4 * a2 - 0x2b69a6ec + a4); // 0x334af8
    int64_t v3; // 0x334af6
    *v2 = *v2 + (int32_t)v3;
    if (a4 == 0) {
        // 0x334b30
        return function_21b4be8();
    }
    int32_t v4 = v1;
    uint32_t v5 = v4 % 32; // 0x334b11
    int32_t v6 = v4; // 0x334b11
    if (v5 != 0) {
        int32_t * v7 = (int32_t *)(a1 + 127); // 0x334b11
        *v7 = *v7 >> v5;
        v6 = v1;
    }
    int32_t * v8 = (int32_t *)(((a2 ^ (int64_t)(int32_t)&g3) & 0xffffffff) - 8); // 0x334b14
    *v8 = *v8 + v6;
    char * v9 = (char *)(v1 - 0x7fc65063); // 0x334b1c
    char v10 = unknown_79f67e1d(); // 0x334b1c
    *v9 = *v9 + v10;
    *(char *)v1 = *(char *)&v1 + (v10 | -32);
    unknown_2bd0272c();
    // 0x334b30
    return function_21b4be8();
}

// Address range: 0x334b4a - 0x334b4d
int64_t function_334b4a(void) {
    // 0x334b4a
    return function_334bc9((int64_t)&g11);
}

// Address range: 0x334b58 - 0x334b59
int64_t function_334b58(void) {
    // 0x334b58
    int64_t result; // 0x334b58
    return result;
}

// Address range: 0x334b60 - 0x334b63
int64_t function_334b60(void) {
    // 0x334b60
    int64_t v1; // 0x334b60
    return function_334ba3(v1, v1, v1);
}

// Address range: 0x334b8d - 0x334ba3
int64_t function_334b8d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x334b8d
    int64_t v1; // 0x334b8d
    __asm_out(-49, (int32_t)v1);
    return unknown_91b1a4(v1 & 0xffffffff);
}

// Address range: 0x334ba3 - 0x334bc3
int64_t function_334ba3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x334ba3
    int64_t v1; // 0x334ba3
    __asm_outsd((int16_t)a3, (int32_t)v1);
    int64_t result; // 0x334ba3
    if ((*(int32_t *)0x7ba02fa8 & (int32_t)v1) != 0) {
        result = function_334b58();
    }
    // 0x334bbb
    return result;
}

// Address range: 0x334bc9 - 0x334bcc
int64_t function_334bc9(int64_t a1) {
    // 0x334bc9
    int64_t result; // 0x334bc9
    return result;
}

// Address range: 0x334bdc - 0x334bdf
int64_t function_334bdc(int64_t a1) {
    // 0x334bdc
    int64_t result; // 0x334bdc
    return result;
}

// Address range: 0x334bea - 0x334bf1
int64_t function_334bea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 27); // 0x334bea
    uint32_t v2 = *v1; // 0x334bea
    uint32_t v3 = v2 + (int32_t)a3; // 0x334bea
    *v1 = v3;
    return function_334c09(a1, (int32_t)(v3 < v2));
}

// Address range: 0x334c02 - 0x334c09
int64_t function_334c02(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x334c02
    int64_t result; // 0x334c02
    char * v1 = (char *)(a1 + 0x50ae0001 + result); // 0x334c02
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x334c09 - 0x334c11
int64_t function_334c09(int64_t a1, int32_t a2) {
    int32_t * v1 = (int32_t *)((int64_t)a2 - 0x73481fac); // 0x334c0a
    int64_t result; // 0x334c09
    bool v2; // 0x334c09
    *v1 = (int32_t)v2 - (int32_t)result + *v1;
    return result;
}

// Address range: 0x334c1a - 0x334c25
int64_t function_334c1a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x334c1a
    int64_t result; // 0x334c1a
    return result;
}

// Address range: 0x334c47 - 0x334c48
int64_t function_334c47(void) {
    // 0x334c47
    int64_t result; // 0x334c47
    return result;
}

// Address range: 0x334c59 - 0x334c67
int64_t function_334c59(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x334c59
    return function_334c47();
}

// Address range: 0x334c67 - 0x334c6c
int64_t function_334c67(void) {
    // 0x334c67
    int64_t result; // 0x334c67
    return result;
}

// Address range: 0x334c6c - 0x334c79
int64_t function_334c6c(int64_t a1) {
    // 0x334c6c
    return function_35682775(a1);
}

// Address range: 0x334cc7 - 0x334ccd
int64_t function_334cc7(int64_t a1) {
    // 0x334cc7
    return function_1142104();
}

// Address range: 0x334cfb - 0x334d02
int64_t function_334cfb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x334cfb
    return function_e3efe3c();
}

// Address range: 0x334d0d - 0x334d1f
int64_t function_334d0d(int64_t a1) {
    char v1 = *(char *)0xa01a14; // 0x334d0d
    int64_t v2; // 0x334d0d
    *(char *)0xa01a14 = v1 + (char)((uint64_t)v2 / 256);
    return (int64_t)(*(int32_t *)0x30ed06b17476d93c & -256 | 139);
}

// Address range: 0x334d1f - 0x334d2c
int64_t function_334d1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x334d1f
    int64_t v1; // 0x334d1f
    bool v2; // 0x334d1f
    *(char *)v1 = (char)v2;
    return function_55dd6af2();
}

// Address range: 0x334d2e - 0x334d4e
int64_t function_334d2e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x334d2e
    int64_t v1; // 0x334d2e
    int32_t * v2 = (int32_t *)(v1 - 79); // 0x334d30
    int64_t v3; // 0x334d2e
    *v2 = *v2 + (int32_t)(int64_t)&v3;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int32_t * v4 = (int32_t *)(a4 + 99); // 0x334d36
    *v4 = *v4 + (int32_t)a2;
    unsigned char v5 = *(char *)0x7f08e40; // 0x334d39
    unsigned char v6 = (char)((uint64_t)v1 / 256); // 0x334d39
    unsigned char v7 = v5 + v6; // 0x334d39
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x334d39
    *(char *)0x7f08e40 = v7;
    char * v9 = (char *)((v1 & -0xff01 | 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v7 < v5) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v5 % 16 + v6 % 16 > 15) | 4 * (int64_t)(v8 % 2 == 0)) | 512) + 0x10d39974); // 0x334d40
    *v9 = 128 * (char)(v7 < v5) | *v9 / 2;
    return unknown_ffffffffefbe724c();
}

// Address range: 0x334d4e - 0x334d6b
int64_t function_334d4e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x334d4e
    int64_t v1; // 0x334d4e
    uint64_t v2 = v1;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x334d4e
    char v3 = *(char *)&result; // 0x334d51
    *(char *)result = v3 + (char)((char)v2 < (char)(v2 / 256));
    int32_t * v4 = (int32_t *)(a3 + 0x581fba59); // 0x334d59
    *v4 = *v4 - (int32_t)a3;
    int32_t * v5 = (int32_t *)(a2 + 8); // 0x334d5f
    *v5 = *v5 + (int32_t)v1;
    char * v6 = (char *)(a1 + 0x1b00bafc + 2 * v1); // 0x334d62
    *v6 = *v6 - (char)(a3 / 256);
    return result;
}

// Address range: 0x334d6d - 0x334ded
int64_t function_334d6d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int32_t * v2 = (int32_t *)(a4 - 0x47d06132); // 0x334d6d
    int64_t v3; // 0x334d6d
    *v2 = *v2 + (int32_t)v3;
    char * v4 = (char *)(v3 + 49); // 0x334d73
    *v4 = *v4 + (char)v3;
    int64_t v5; // 0x334d6d
    int64_t v6; // 0x334d6d
    int64_t v7; // 0x334d6d
    int64_t v8; // 0x334d6d
    int64_t v9; // 0x334d6d
    int64_t v10; // 0x334d6d
    bool v11; // 0x334d6d
    if (a3 / 256 > v3) {
        // 0x334d6d
        v5 = v11 ? -4 : 4;
        v8 = a4;
        v9 = a1;
    } else {
        int32_t * v12 = (int32_t *)(a1 + 0x3dd66500); // 0x334d80
        int32_t v13 = v3; // 0x334d80
        *v12 = *v12 + v13;
        int64_t v14; // bp-8, 0x334d6d
        uint64_t v15 = (int64_t)&v14 + a4; // 0x334d86
        uint32_t v16 = v13 - *(int32_t *)(8 * a2 - 80 + v3); // 0x334d88
        char * v17 = (char *)(v3 + 0x3801e802); // 0x334d92
        *v17 = *v17 - (char)(v15 / 256);
        unsigned char v18 = *(char *)&v1 & (char)v15; // 0x334da1
        int64_t v19 = v15 & 0xffffff00 | (int64_t)v18; // 0x334da1
        uint32_t v20 = *(int32_t *)0x3f8f013d004a5d84 - 0x7af875e2; // 0x334da3
        int64_t v21 = v20; // 0x334da3
        int64_t v22 = (int64_t)*(int32_t *)(a1 - 0x158a59cd) - 8; // 0x334da8
        *(int64_t *)v22 = 0x68716400;
        char * v23 = (char *)((int64_t)v16 - 112 + v21); // 0x334dad
        *v23 = *v23 + (char)(v20 / 256);
        int64_t v24 = v11 ? -4 : 4;
        int64_t v25 = v24 + a1; // 0x334db3
        char * v26 = (char *)(v19 + 0xf013d25); // 0x334db4
        *v26 = *v26 + v18;
        int32_t * v27 = (int32_t *)(v25 - 57); // 0x334dba
        *v27 = *v27 & -9;
        int64_t v28 = v1 & -0xff01 | (int64_t)&g10; // 0x334dbe
        v1 = v28;
        char v29 = *(char *)v28; // 0x334dc0
        int32_t * v30 = (int32_t *)(v25 + 1); // 0x334dc2
        *v30 = 256 * (int32_t)(v29 | (char)(v16 / 256)) | v16 & -0xff01;
        v5 = v24;
        v8 = v19;
        v7 = (int64_t)*v30;
        v10 = v22;
        v6 = v21;
        v9 = v25;
    }
    uint64_t v31 = v8;
    char * v32 = (char *)v6; // 0x334dc7
    *v32 = *v32 + (char)v1;
    char v33 = *(char *)v1; // 0x334dc9
    char * v34 = (char *)(256 * (int64_t)(v33 + (char)(v31 / 256)) | v31 & -0xff01); // 0x334dcb
    *v34 = *v34 + (char)v31;
    *(int64_t *)(v10 - 8) = *(int64_t *)((v6 | 96) - 6);
    int64_t result = unknown_ffffffffa34558de(v9 + v5); // 0x334dd8
    char v35 = *(char *)-0x6531bb14; // 0x334de5
    *(char *)-0x6531bb14 = v35 + (char)(v7 / 256);
    return result;
}

// Address range: 0x335023 - 0x3350ed
int64_t function_335023(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x335023
    int64_t v1; // 0x335023
    int32_t v2 = v1;
    bool v3; // 0x335023
    int32_t v4 = (v3 ? 0x7202005e : 0x7202005d) + v2; // 0x335023
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x335023
    int32_t * v6 = (int32_t *)v1;
    *v6 = v4;
    __asm_out(-88, v2);
    int32_t * v7 = v6; // 0x33502c
    int32_t v8 = v2; // 0x33502c
    int64_t result; // 0x335023
    if (v5 % 2 == 0) {
        int64_t v9 = function_334ff7(); // 0x33502c
        v7 = (int32_t *)v9;
        result = v9;
        v8 = v9;
    }
    uint32_t v10 = 2 * v8; // 0x335033
    *v7 = v10;
    if (a4 == 1 || v10 == 0) {
        // 0x335037
        return result;
    }
    int32_t * v11 = (int32_t *)(a3 + 0x5902e042); // 0x33503d
    *v11 = (int32_t)(v10 < v8) - (int32_t)result + *v11;
    int64_t result2 = result & -210;
    int64_t v12 = a5; // bp-8, 0x335047
    if ((int32_t)result2 < 0x2aa02301) {
        // 0x335037
        return result2;
    }
    int64_t v13 = v3 ? -1 : 1; // 0x335048
    int64_t v14 = v13 + a1; // 0x335048
    *(char *)v14 = (char)result2;
    int64_t v15 = v14 + v13; // 0x335050
    int64_t v16 = result & -256 | 13; // 0x335051
    char * v17 = (char *)(a3 - 84); // 0x335055
    *v17 = *v17 & (char)(result / 256);
    int32_t v18 = *(int32_t *)(v16 + 0x2f01e877); // 0x335058
    int64_t v19 = (int32_t)(int64_t)&v12 - v18; // 0x335058
    int64_t v20 = v16 + 0x3d00025b; // 0x33505e
    int32_t * v21 = (int32_t *)v15; // 0x335063
    uint32_t v22 = *v21; // 0x335063
    uint32_t v23 = v22 + (int32_t)(v13 + a2); // 0x335063
    *v21 = v23;
    uint64_t v24 = a4 - 2; // 0x33506b
    char v25 = *(char *)0x4391b5cf; // 0x33506d
    *(char *)0x4489384c = -1;
    int32_t * v26 = (int32_t *)((256 * (int64_t)((char)(v24 / 256) - v25 + (char)(v23 < v22)) | v24 & -0xff01) + 0x10e46d716); // 0x3350d5
    uint32_t v27 = *v26; // 0x3350d5
    *v26 = v27 / 0x2000 | 0x100000 * v27;
    if ((int32_t)v20 > 0x6afe01) {
        // 0x335077
        *(int64_t *)(v19 - 8) = v19;
        return v20 & 0xffffff68;
    }
    int64_t result3 = __asm_hlt() & 0xffffffff ^ 0x1d1a1f61; // 0x3350e2
    int32_t * v28 = (int32_t *)result3; // 0x3350ea
    *v28 = *v28 | (int32_t)v15;
    *(int64_t *)(v19 - 8) = result3;
    return result3;
}

// Address range: 0x335114 - 0x33514a
int64_t function_335114(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = *(int16_t *)0xab4f29; // 0x335121
    char v2 = a4; // 0x335129
    __asm_out_133(-112, v2);
    bool v3; // 0x335114
    int64_t v4 = (v3 ? -4 : 4) + (a1 & 0xffffffff); // 0x33512b
    int64_t v5; // 0x335114
    unsigned char v6 = (char)v5;
    *(char *)(a4 & 0xffffffff) = v6 / 2 | 128 * v6;
    unsigned char v7 = (char)a2 % 32; // 0x335132
    if (v7 != 0) {
        char * v8 = (char *)(v4 - 73); // 0x335132
        *v8 = *v8 << v7;
    }
    float80_t v9; // 0x335114
    *(int16_t *)(v4 + 80) = (int16_t)((float80_t)v1 / v9);
    __asm_out_133(-18, v2);
    __asm_int(2);
    return function_ffffffffbf35398f();
}

// Address range: 0x335151 - 0x335154
int64_t function_335151(int64_t a1) {
    // 0x335151
    int64_t result; // 0x335151
    return result;
}

// Address range: 0x335160 - 0x335161
int64_t function_335160(void) {
    // 0x335160
    int64_t result; // 0x335160
    return result;
}

// Address range: 0x335178 - 0x3351bd
int64_t function_335178(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x335178
    int64_t v1; // 0x335178
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = a4;
    int64_t v5 = a3;
    char v6 = a4; // 0x335178
    *(char *)v3 = (char)v3 + v6;
    int32_t * v7 = (int32_t *)(a4 + 0x5aa97c19); // 0x33517a
    int64_t v8; // 0x335178
    *v7 = *v7 & (int32_t)v8;
    int64_t v9; // 0x335178
    int32_t v10 = *(int32_t *)&v9; // 0x335180
    *(int32_t *)a2 = -v10;
    char * v11 = (char *)a3; // 0x335182
    *v11 = *(char *)&v5 + (char)(v2 / 256) + (char)(v10 != 0);
    v9 = 0x614349e0;
    int64_t v12 = v8;
    *(char *)v12 = *(char *)&v8 + (char)v12;
    *v11 = (char)v8;
    int64_t v13 = v8;
    *(char *)v13 = *(char *)&v8 + (char)v13;
    char * v14 = (char *)(a3 - 0x4323e4e1); // 0x335199
    *v14 = *v14 + v6;
    int64_t v15 = v5;
    uint32_t v16 = (int32_t)a1; // 0x3351a3
    uint32_t v17 = v16 + (int32_t)v2; // 0x3351a3
    uint32_t v18 = (int32_t)((v15 + 190 + (int64_t)(v17 < v16)) % 256 | v15 & 0xffffff00) | (int32_t)&g9; // 0x3351a8
    int64_t v19; // bp-8, 0x335178
    int64_t v20 = (int64_t)&v19 & 0xffffffff; // 0x3351b2
    int64_t v21 = v8 & 0xffffff17 | 232; // 0x3351b5
    int64_t v22 = __asm_wait(v20); // 0x3351b5
    int64_t v23 = v17; // 0x3351b5
    while (v18 >= 0x23dedf02) {
        // 0x3351a1
        v15 = v21;
        v16 = (int32_t)v20;
        v17 = v16 + (int32_t)v2;
        v18 = (int32_t)((v15 + 190 + (int64_t)(v17 < v16)) % 256 | v15 & 0xffffff00) | (int32_t)&g9;
        v20 = v23 & 0xffffffff;
        v21 = v22 & 0xffffff17 | 232;
        v22 = __asm_wait(v20);
        v23 = v17;
    }
    int64_t result = __asm_int3(); // 0x3351b8
    char v24 = *(char *)&v4; // 0x3351b9
    *(char *)v4 = (char)(v18 != 0x23dedf01) + (char)v2 + v24;
    return result;
}

// Address range: 0x3351c9 - 0x3351ce
int64_t function_3351c9(void) {
    // 0x3351c9
    int64_t v1; // 0x3351c9
    return v1 & -256 | (int64_t)__asm_in_134(-123);
}

// Address range: 0x3351d7 - 0x3351d9
int64_t function_3351d7(void) {
    // 0x3351d7
    return function_335160();
}

// Address range: 0x3351da - 0x3351db
int64_t function_3351da(void) {
    // 0x3351da
    int64_t result; // 0x3351da
    return result;
}

// Address range: 0x3d68a7 - 0x3d6a0a
int64_t function_3d68a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7 + 16; // 0x3d6972
    int64_t v2 = *(int64_t *)v1; // 0x3d6972
    int64_t * v3 = (int64_t *)(a7 - 8); // 0x3d6972
    *v3 = v2;
    int64_t * v4 = (int64_t *)(a7 - 16); // 0x3d6976
    *v4 = v2;
    *(int64_t *)(a7 + 8) = *v3;
    *v3 = 0x2329d1e5;
    *v4 = v2;
    *(int64_t *)(a7 + 24) = *v3;
    *v3 = a2;
    *v4 = a6;
    *(int64_t *)a7 = v1;
    return function_c4258();
}

// Address range: 0x3d6a2f - 0x3d6a36
int64_t function_3d6a2f(int64_t a1, int64_t a2) {
    // 0x3d6a2f
    int64_t v1; // 0x3d6a2f
    *(char *)a1 = (char)v1;
    return function_fffffffff93eb777();
}

// Address range: 0x3d6ca7 - 0x3d6cac
int64_t function_3d6ca7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d6ca7
    int64_t result; // 0x3d6ca7
    bool v1; // 0x3d6ca7
    if (!v1) {
        result = function_3d6c3c();
    }
    int32_t * v2 = (int32_t *)(a3 + 127); // 0x3d6ca9
    *v2 = *v2 + (int32_t)a3;
    return result;
}

// Address range: 0x3d6d73 - 0x3d6d76
int64_t function_3d6d73(int64_t a1) {
    // 0x3d6d73
    int64_t result; // 0x3d6d73
    return result;
}

// Address range: 0x3d6d86 - 0x3d6d87
int64_t function_3d6d86(int64_t a1) {
    // 0x3d6d86
    int64_t result; // 0x3d6d86
    return result;
}

// Address range: 0x3d6d87 - 0x3d6d88
int64_t function_3d6d87(void) {
    // 0x3d6d87
    int64_t result; // 0x3d6d87
    return result;
}

// Address range: 0x3d6d93 - 0x3d6d94
int64_t function_3d6d93(void) {
    // 0x3d6d93
    int64_t result; // 0x3d6d93
    return result;
}

// Address range: 0x3d6dc0 - 0x3d6dde
int64_t function_3d6dc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d6dc0
    *(char *)a1 = (char)a3;
    int64_t v1; // 0x3d6dc0
    int16_t v2 = 256 * (int16_t)v1 >> 8; // 0x3d6dc3
    int64_t v3 = v1 & -0x10000 | (int64_t)(v2 * v2); // 0x3d6dc3
    int32_t * v4 = (int32_t *)(v1 - 40); // 0x3d6dc5
    *v4 = *v4 + (int32_t)a1;
    int64_t v5; // 0x3d6dc0
    *(int32_t *)a1 = *(int32_t *)&v5;
    char * v6 = (char *)(2 * v3); // 0x3d6dd3
    unsigned char v7 = *v6; // 0x3d6dd3
    unsigned char v8 = v7 + (char)v1; // 0x3d6dd3
    *v6 = v8;
    char * v9 = (char *)v3; // 0x3d6dd6
    unsigned char v10 = *v9; // 0x3d6dd6
    char v11 = a4; // 0x3d6dd6
    unsigned char v12 = v10 + v11; // 0x3d6dd6
    unsigned char v13 = v12 + (char)(v8 < v7); // 0x3d6dd6
    *v9 = v13;
    char * v14 = (char *)(a2 - 123 + a4); // 0x3d6dd8
    *v14 = *v14 + v11 + (char)(v8 < v7 ? v13 <= v10 : v12 < v10);
    return function_3d6e49(a1 - 4, a2 - 4, a3, a4);
}

// Address range: 0x3d6dde - 0x3d6de8
int64_t function_3d6dde(void) {
    // 0x3d6dde
    unknown_7f3206e7();
    return function_3d6d93();
}

// Address range: 0x3d6dee - 0x3d6e23
int64_t function_3d6dee(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x3d6dee
    int64_t v3 = 0x100000000 * v2 >> 32; // 0x3d6df1
    uint64_t v4 = v3 * v3; // 0x3d6df1
    int64_t v5 = v4 & 0xffffffff; // 0x3d6df1
    int32_t * v6 = (int32_t *)(v5 + 8); // 0x3d6df3
    int64_t v7; // 0x3d6dee
    *v6 = *v6 + (int32_t)(int64_t)&v7;
    int64_t v8 = v5; // 0x3d6dfc
    int64_t v9; // 0x3d6dee
    if (llvm_ctpop_i8((char)v9 - *(char *)(a4 - 0x77931a61)) % 2 == 0) {
        v8 = function_3d6d87();
    }
    uint64_t v10 = v4 / 0x100000000; // 0x3d6df1
    char * v11 = (char *)v10; // 0x3d6dfe
    *v11 = *v11 + (char)v8;
    *(int32_t *)a6 = *(int32_t *)&v1;
    bool v12; // 0x3d6dee
    int64_t v13 = v12 ? -4 : 4; // 0x3d6e00
    int64_t v14 = v13 + a6; // 0x3d6e00
    int64_t v15 = v1 + v13; // 0x3d6e00
    v1 = v15;
    int64_t v16 = unknown_29224507(v14, v15); // 0x3d6e01
    char * v17 = (char *)(a4 - 100); // 0x3d6e06
    *v17 = *v17 + (char)a4;
    char * v18 = (char *)(v10 + 0x1e8aabd + 4 * v14); // 0x3d6e09
    *v18 = *v18 | (char)v9;
    int32_t * v19 = (int32_t *)(v16 + 58); // 0x3d6e11
    *v19 = *v19 ^ (int32_t)a5;
    uint32_t v20 = (int32_t)a4 % 32; // 0x3d6e15
    if (v20 != 0) {
        *(int32_t *)v9 = *(int32_t *)&v9 << v20;
    }
    char * v21 = (char *)(v1 - 78); // 0x3d6e1b
    *v21 = *v21 >> 1;
    return function_8f0700b((int32_t)v10 + (int32_t)v14);
}

// Address range: 0x3d6e35 - 0x3d6e36
int64_t function_3d6e35(int64_t a1) {
    // 0x3d6e35
    int64_t result; // 0x3d6e35
    return result;
}

// Address range: 0x3d6e49 - 0x3d6e53
int64_t function_3d6e49(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3d6e49
    int64_t v1; // 0x3d6e49
    int64_t v2 = v1;
    int64_t result = (v2 + a4 / 256) % 256 | v2 & -256; // 0x3d6e49
    int32_t * v3 = (int32_t *)(a4 + 79 + result); // 0x3d6e4b
    *v3 = *v3 + (int32_t)a2;
    return result;
}

// Address range: 0x3d6e7f - 0x3d6e80
int64_t function_3d6e7f(void) {
    // 0x3d6e7f
    int64_t result; // 0x3d6e7f
    return result;
}

// Address range: 0x3d6f9a - 0x3d6f9f
int64_t function_3d6f9a(void) {
    // 0x3d6f9a
    int64_t result; // 0x3d6f9a
    int64_t v1 = result;
    *(char *)v1 = (char)(result | v1);
    return result;
}

// Address range: 0x3d6fe3 - 0x3d6feb
int64_t function_3d6fe3(int64_t a1) {
    // 0x3d6fe3
    return unknown_ffffffffcc5d63e9(a1);
}

// Address range: 0x3d702d - 0x3d70cb
int64_t function_3d702d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3d702d
    int64_t v1; // 0x3d702d
    int64_t v2 = a4 - 256 * v1 & 0xff00 | a4 & -0xff01; // 0x3d702d
    int32_t * v3 = (int32_t *)(a1 - 0x3184a86f); // 0x3d702f
    *v3 = *v3 + (int32_t)v1;
    char * v4 = (char *)(v1 + 112); // 0x3d703a
    *v4 = *v4 >> 1;
    char * v5 = (char *)(unknown_3ab2f843() + 1); // 0x3d7042
    *v5 = 2 * *v5;
    int32_t * v6 = (int32_t *)v2; // 0x3d704b
    *v6 = *v6 + (int32_t)v1;
    int64_t v7 = __asm_int1() & 0xcab28ecc | 0x354d7133; // 0x3d704e
    char * v8 = (char *)v7; // 0x3d7054
    *v8 = *v8 - (char)v7;
    unknown_4687ac61(a6, a5);
    unsigned char v9 = (char)a3 - (char)v1; // 0x3d7060
    if (llvm_ctpop_i8(v9) % 2 == 0) {
        // 0x3d7064
        return 0x637206ea;
    }
    int32_t * v10 = (int32_t *)(a3 & -256 | (int64_t)v9); // 0x3d709e
    *v10 = *v10 + (int32_t)a6;
    int64_t v11 = unknown_ffffffff9e11abac(); // 0x3d70a6
    int32_t * v12 = (int32_t *)a6; // 0x3d70ab
    *v12 = *v12 + (int32_t)v2;
    int64_t v13 = v11 & -256 | (int64_t)*(char *)-0x172e0dd5eae445c6; // 0x3d70ad
    int32_t * v14 = (int32_t *)(v13 + 56); // 0x3d70b6
    *v14 = *v14 + (int32_t)a5;
    int64_t v15 = unknown_ffffffff920a57ca(v13 & 0xffffffff, a5 - 4); // 0x3d70c4
    return (v15 & 0xff00) + v2 & 0xff00 | v15 & -0xff01;
}

// Address range: 0x3d7131 - 0x3d71b4
int64_t function_3d7131(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char v1 = *(char *)0x6dbefa38; // 0x3d7131
    int64_t v2; // 0x3d7131
    *(char *)0x6dbefa38 = v1 + (char)((uint64_t)v2 / 256);
    char v3 = *(char *)(a1 - 126); // 0x3d7137
    int64_t result = __asm_in_135(81) ^ 0x274bbf67; // 0x3d713f
    if ((256 * (int64_t)(v3 + (char)(a4 / 256)) || a4 & -0xff01) != 1) {
        // 0x3d71ae
        return result;
    }
    // 0x3d7146
    *(int64_t *)result = a5;
    return result;
}

// Address range: 0x3d71d1 - 0x3d71d2
int64_t function_3d71d1(void) {
    // 0x3d71d1
    int64_t result; // 0x3d71d1
    return result;
}

// Address range: 0x3d720d - 0x3d7210
int64_t function_3d720d(int64_t a1) {
    // 0x3d720d
    int64_t result; // 0x3d720d
    return result;
}

// Address range: 0x3d7214 - 0x3d7215
int64_t function_3d7214(void) {
    // 0x3d7214
    int64_t result; // 0x3d7214
    return result;
}

// Address range: 0x3d721f - 0x3d722f
int64_t function_3d721f(int64_t a1, int64_t a2) {
    // 0x3d721f
    int64_t v1; // 0x3d721f
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x3d721f
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x3d721f
    int64_t result = unknown_ffffffffe843a826(v3); // 0x3d7220
    int32_t * v4 = (int32_t *)(v3 - 0x49fec293); // 0x3d7225
    *v4 = *v4 + (int32_t)v1;
    return result;
}

// Address range: 0x3d7238 - 0x3d7250
int64_t function_3d7238(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d7238
    int64_t v1; // 0x3d7238
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 - 39); // 0x3d723f
    int32_t v4 = *v3 + (int32_t)a1; // 0x3d723f
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x3d723f
    *v3 = v4;
    *(int32_t *)(v2 - 22 + 2 * v2) = (int32_t)(256 * v1 & 0xff00 ^ a4);
    if (v5 % 2 == 0) {
        function_3d7214();
    }
    // 0x3d7249
    unknown_ffffffff8537b24f();
    return function_3d71d1();
}

// Address range: 0x3d730e - 0x3d7325
int64_t function_3d730e(void) {
    // 0x3d730e
    int64_t v1; // 0x3d730e
    return v1 + 0x740820bb & 0xffffff07 | 248;
}

// Address range: 0x3d733b - 0x3d733c
int64_t function_3d733b(int64_t a1) {
    // 0x3d733b
    int64_t result; // 0x3d733b
    return result;
}

// Address range: 0x3d734e - 0x3d7352
int64_t function_3d734e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d734e
    int64_t v1; // 0x3d734e
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v1;
    bool v3; // 0x3d734e
    return (v2 - v1 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x3d73ff - 0x3d7403
int64_t function_3d73ff(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d73ff
    int64_t v1; // 0x3d73ff
    return function_3d740c(a1, a2, (uint64_t)v1 % 256 | a3, v1);
}

// Address range: 0x3d7404 - 0x3d740c
int64_t function_3d7404(void) {
    // 0x3d7404
    int64_t v1; // 0x3d7404
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return 0x10000 * (int32_t)v2 >> 16;
}

// Address range: 0x3d740c - 0x3d7416
int64_t function_3d740c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d740c
    int64_t v1; // 0x3d740c
    int64_t v2 = v1;
    char * v3 = (char *)(a4 - 0x133ec5f5); // 0x3d740d
    *v3 = *v3 - (char)a4;
    return (v2 + 173) % 256 | v2 & -256;
}

// Address range: 0x3d741b - 0x3d7426
int64_t function_3d741b(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + (int64_t)&g1); // 0x3d741b
    int64_t v2; // 0x3d741b
    *v1 = *v1 + (char)v2;
    return function_14db4354();
}

// Address range: 0x3d7431 - 0x3d7432
int64_t function_3d7431(void) {
    // 0x3d7431
    int64_t result; // 0x3d7431
    return result;
}

// Address range: 0x3d743d - 0x3d744a
int64_t function_3d743d(void) {
    // 0x3d743d
    int64_t v1; // 0x3d743d
    int64_t v2 = v1;
    int64_t result = (v2 + 61) % 256 | v2 & -256; // 0x3d743d
    *(int32_t *)0x683076295a08640a = (int32_t)result;
    return result;
}

// Address range: 0x3d7460 - 0x3d7468
int64_t function_3d7460(int64_t a1, int64_t a2) {
    // 0x3d7460
    return function_ffffffffcf3eb168();
}

// Address range: 0x3d7469 - 0x3d7472
int64_t function_3d7469(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d7469
    int64_t v1; // 0x3d7469
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)a2;
    return (v2 + 141) % 256 | v2 & -256;
}

// Address range: 0x3d7474 - 0x3d7477
int64_t function_3d7474(int64_t a1) {
    // 0x3d7474
    int64_t result; // 0x3d7474
    return result;
}

// Address range: 0x3d748d - 0x3d748f
int64_t function_3d748d(void) {
    // 0x3d748d
    return function_3d7431();
}

// Address range: 0x3d74cb - 0x3d754f
int64_t function_3d74cb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3d74cb
    int64_t v1; // 0x3d74cb
    unsigned char v2 = (char)(v1 / 256) + (char)a3; // 0x3d74cb
    uint64_t v3 = a4 - 1; // 0x3d74cd
    if (v3 != 0 != (v2 == 0)) {
        // 0x3d74cf
        return v1 & -0xff01 | v1 & 0xff00 | 256 * (int64_t)v2;
    }
    // 0x3d752f
    *(char *)(a4 + 109) = (char)(v3 / 256);
    int64_t v4 = __asm_fnstenv(); // 0x3d7532
    *(int224_t *)(v4 + a3) = (int224_t)v4;
    int64_t v5 = 256 * (int64_t)((char)(a3 / 256) >> 1) | a3 & -0xff01; // 0x3d7537
    int64_t v6 = 0xffffffb8 * v5; // 0x3d753b
    int64_t v7 = v6 & 0xfffffff8; // bp-24, 0x3d753e
    int32_t * v8 = (int32_t *)(v1 & -256); // 0x3d753f
    *v8 = *v8 ^ (int32_t)(int64_t)&v7;
    int16_t v9 = v5; // 0x3d7549
    int64_t v10; // 0x3d74cb
    __asm_outsb(v9, *(char *)&v10);
    return v6 & 0xffffff00 | (int64_t)__asm_in(v9);
}

// Address range: 0x3d7568 - 0x3d757b
int64_t function_3d7568(int64_t a1, int64_t a2) {
    // 0x3d7568
    int64_t v1; // 0x3d7568
    int32_t * v2 = (int32_t *)(v1 + 0x3f0a8842); // 0x3d7568
    *v2 = *v2 + 0x5cd43d3f;
    *(char *)-0x33326386 = *(char *)-0x33326386 + (char)v1;
    int64_t v3; // 0x3d7568
    return v1 & -256 | (int64_t)*(char *)&v3;
}

// Address range: 0x3d75ab - 0x3d75b2
int64_t function_3d75ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d75ab
    int64_t result; // 0x3d75ab
    *(int32_t *)a4 = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0x3d761c - 0x3d763f
int64_t function_3d761c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d761c
    int64_t v1; // 0x3d761c
    __asm_pxor(v1, v1);
    int64_t v2 = 0x10000 * (int32_t)v1 >> 16; // 0x3d761f
    *(char *)v2 = 2 * (char)v1;
    int64_t v3 = v2; // 0x3d7629
    while (true) {
        char * v4 = (char *)(v3 - 0x57efa265); // 0x3d762f
        *v4 = *v4 + (char)(v3 / 256);
        v3 = unknown_ffffffff8b63473e();
    }
}

// Address range: 0x3d764c - 0x3d7651
int64_t function_3d764c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3d764c
    int64_t result; // 0x3d764c
    return result;
}

// Address range: 0x3d768a - 0x3d76ea
int64_t function_3d768a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3d768a
    int64_t v1; // 0x3d768a
    *(char *)v1 = (char)(a3 / 256);
    int64_t v2; // 0x3d768a
    uint32_t v3 = *(int32_t *)&v2 ^ (int32_t)v1; // 0x3d768e
    int32_t * v4 = (int32_t *)(v1 + 0x799f7e39); // 0x3d7694
    *v4 = *v4 + (int32_t)a1;
    char * v5 = (char *)((int64_t)v3 - 0x102d21ec); // 0x3d769a
    unsigned char v6 = *v5; // 0x3d769a
    unsigned char v7 = v6 + (char)a4; // 0x3d769a
    *v5 = v7;
    unknown_1ed364a6();
    uint32_t v8 = *(int32_t *)(a1 - 0xb1d5143) + v3 + (int32_t)(v7 < v6); // 0x3d76a5
    unknown_546418b1();
    __asm_wait(a1);
    char * v9 = (char *)(a3 - 84); // 0x3d76c8
    *v9 = *v9 ^ (char)v8;
    char * v10 = (char *)(int64_t)v8; // 0x3d76cf
    *v10 = *v10 - (char)a3;
    __asm_outsb((int16_t)a3, *(char *)(a2 + a1 & 0xffffffff));
    int64_t result = unknown_3cd0bddd(); // 0x3d76d7
    *(char *)a1 = (char)result;
    *(int32_t *)-0x7b66fe179f5ec5d3 = (int32_t)result;
    return result;
}

// Address range: 0x3d7719 - 0x3d77e1
int64_t function_3d7719(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a3 & -0xff01 | (int64_t)&g5; // 0x3d7719
    int64_t v3; // 0x3d7719
    char v4 = v3; // 0x3d771d
    unsigned char v5 = *(char *)(a1 - 116); // 0x3d771d
    if (v5 < v4) {
        // 0x3d779c
        unknown_ffffffff8bced2a2();
        int32_t v6 = *(int32_t *)(a1 + 58); // 0x3d77a2
        int32_t * v7 = (int32_t *)(a4 - 0x15fea710); // 0x3d77c8
        *v7 = *v7 + (int32_t)v2;
        int32_t v8 = *(int32_t *)&v1; // 0x3d77e0
        *(int32_t *)((int64_t)((int32_t)(v5 > v4) + (int32_t)a1 + v6) - 4) = v8;
        int64_t v9; // 0x3d7719
        return (int64_t)&v9;
    }
    unsigned char v10 = llvm_ctpop_i8(v4 - v5); // 0x3d771d
    int64_t v11 = unknown_47577128(); // 0x3d7722
    if (v10 % 2 == 0) {
        // 0x3d7729
        return __asm_in_135(-112);
    }
    uint64_t v12 = v11 + a4 / 256; // 0x3d773d
    int64_t result = v12 % 256 | v11 & -256; // 0x3d773d
    int32_t * v13 = (int32_t *)(v3 + 0x45002b00); // 0x3d773f
    *v13 = *v13 + (int32_t)v3;
    char * v14 = (char *)(result - 0x7ff665e); // 0x3d7747
    *v14 = *v14 + (char)((int64_t)&g5 >> 8);
    char * v15 = (char *)(v1 + 0x1e81a08); // 0x3d774d
    char v16 = *v15 | (char)a4; // 0x3d774d
    unsigned char v17 = llvm_ctpop_i8(v16); // 0x3d774d
    *v15 = v16;
    if (v17 % 2 == 0) {
        // 0x3d7794
        return result;
    }
    int16_t v18 = v2; // 0x3d7758
    __asm_outsb(v18, *(char *)&v1);
    int32_t * v19 = (int32_t *)v2; // 0x3d776b
    uint32_t v20 = *v19; // 0x3d776b
    uint32_t v21 = v20 + (int32_t)v2; // 0x3d776b
    *v19 = v21;
    char * v22 = (char *)(result + 8 * v3); // 0x3d776d
    *v22 = *v22 - 24 + (char)(v21 < v20);
    __asm_out_136(v18, (int32_t)result);
    char * v23 = (char *)result; // 0x3d7773
    *v23 = *v23 - (char)v12;
    return unknown_618efb7f();
}

// Address range: 0x3d7886 - 0x3d7887
int64_t function_3d7886(int64_t a1) {
    // 0x3d7886
    int64_t result; // 0x3d7886
    return result;
}
