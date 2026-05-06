/*
 * Targeted RetDec C for native executable gap queue batch 732.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x331623-0x331823 rank=- name=- kind=- bytes=- uncovered=-
 *   0x331823-0x331a23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x331a23-0x331c23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x331c23-0x331e23 rank=- name=- kind=- bytes=- uncovered=-
 *   0x452be3-0x452de3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x452de3-0x452fe3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4531e3-0x4533e3 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4533e3-0x4535e3 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_240a6f3d();
int64_t function_331623(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_331702(void);
int64_t function_331707(int64_t a1);
int64_t function_331752(void);
int64_t function_331761(void);
int64_t function_33176c(void);
int64_t function_33176e(int64_t a1);
int64_t function_33176f(int64_t a1, int64_t a2);
int64_t function_331774(int64_t a1);
int64_t function_331789(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33183c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_331850(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33186c(int64_t a1);
int64_t function_331870(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5);
int64_t function_3318ab(void);
int64_t function_3318ed(void);
int64_t function_331906(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_331934(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_331a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_331a5d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_331ab0(void);
int64_t function_331ae7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_331b3d(void);
int64_t function_331b47(void);
int64_t function_331b76(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_331b80(void);
int64_t function_331b91(void);
int64_t function_331bb3(void);
int64_t function_331bc5(int64_t a1);
int64_t function_331bd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_331bf4(int64_t a1);
int64_t function_331c15(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_331c4a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_331caf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_331cce(int64_t a1);
int64_t function_331ce8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_331d6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_331dbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_452b87();
int64_t function_452be3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_452d13(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_452d8e(int64_t a1, int64_t a2);
int64_t function_452d90(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_452dae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_452db3(void);
int64_t function_452dd3(int64_t a1, int64_t a2);
int64_t function_452df2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_452e6d(int64_t a1);
int64_t function_452e7d(void);
int64_t function_452e7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, int64_t a7);
int64_t function_452f6a(void);
int64_t function_452f6d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_452f84(void);
int64_t function_4531e3(void);
int64_t function_453214(void);
int64_t function_453240(void);
int64_t function_453249(int64_t a1);
int64_t function_453257(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_453284(int64_t a1);
int64_t function_453289(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4532cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4532e7(void);
int64_t function_4532fb(void);
int64_t function_45332e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_453347(int64_t a1);
int64_t function_453409(int64_t a1, int64_t a2);
int64_t function_45345a(void);
int64_t function_453468(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_4534ab(void);
int64_t function_4534e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_453516(void);
int64_t function_45355f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_453571(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_453575(void);
int64_t function_45357e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45359e(void);
int64_t function_4535bd(void);
int64_t function_4535db(int64_t a1, int64_t a2, int64_t a3);
int64_t function_c9849();
int64_t function_ffffffffd065a1df();
int64_t function_ffffffffe3771489();
int64_t unknown_1701a6a();
int64_t unknown_194cacd3();
int64_t unknown_283c82f9();
int64_t unknown_2888a652();
int64_t unknown_841b61b();
int64_t unknown_b5ad43();
int64_t unknown_b839a9();
int64_t unknown_e96cc9e();
int64_t unknown_ffffffff8fd7cabe();
int64_t unknown_ffffffff9e35005f();
int64_t unknown_ffffffffecf33014();

// Address range: 0x331623 - 0x331702
int64_t function_331623(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x331623
    int64_t v1; // 0x331623
    int64_t v2 = (int64_t)&v1; // 0x33165e
    *(int64_t *)(v2 - 16) = v2 - 8;
    *(int64_t *)(v2 + 32) = v1;
    *(int64_t *)(v2 + 8) = v2 + 24;
    return function_c9849();
}

// Address range: 0x331702 - 0x331707
int64_t function_331702(void) {
    // 0x331702
    int64_t result; // 0x331702
    return result;
}

// Address range: 0x331707 - 0x331716
int64_t function_331707(int64_t a1) {
    // 0x331707
    int64_t v1; // 0x331707
    int32_t * v2 = (int32_t *)(v1 - 0x6bff6700); // 0x33170e
    *v2 = *v2 + (int32_t)a1;
    return function_33176f(a1, v1);
}

// Address range: 0x331752 - 0x331753
int64_t function_331752(void) {
    // 0x331752
    int64_t result; // 0x331752
    return result;
}

// Address range: 0x331761 - 0x331762
int64_t function_331761(void) {
    // 0x331761
    int64_t result; // 0x331761
    return result;
}

// Address range: 0x33176c - 0x33176d
int64_t function_33176c(void) {
    // 0x33176c
    int64_t result; // 0x33176c
    return result;
}

// Address range: 0x33176e - 0x33176f
int64_t function_33176e(int64_t a1) {
    // 0x33176e
    int64_t result; // 0x33176e
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x33176f - 0x331770
int64_t function_33176f(int64_t a1, int64_t a2) {
    // 0x33176f
    int64_t result; // 0x33176f
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x331774 - 0x331775
int64_t function_331774(int64_t a1) {
    // 0x331774
    int64_t result; // 0x331774
    return result;
}

// Address range: 0x331789 - 0x33183b
int64_t function_331789(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x331789
    char * v3 = (char *)(8 * v2 + 19 + v2); // 0x33178f
    *v3 = *v3 + (char)v2;
    char * v4 = (char *)(v2 + 0x6401e894); // 0x331793
    *v4 = *v4 + (char)a4;
    __asm_outsb((int16_t)a3, *(char *)&v1);
    char v5 = v2 / 256; // 0x3317a8
    char v6 = unknown_b839a9() / 256; // 0x3317a8
    char v7 = v6 + v5; // 0x3317a8
    if (((v7 ^ v5) & (v7 ^ v6)) < 0) {
        function_33176c();
    }
    // 0x3317ac
    return function_331752();
}

// Address range: 0x33183c - 0x331850
int64_t function_33183c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 98); // 0x33183c
    int32_t v2 = *v1; // 0x33183c
    int32_t v3 = a3; // 0x33183c
    bool v4; // 0x33183c
    int32_t v5 = (bool)v4; // 0x33183c
    int32_t v6 = v2 + v3 + v5; // 0x33183c
    int32_t v7 = v6 + v5; // 0x33183c
    *v1 = v6;
    if (((v7 ^ v2) & (v7 ^ v3)) < 0) {
        __asm_sti((int32_t)a1);
    }
    int64_t v8 = __asm_iretd(); // 0x331843
    uint32_t v9 = (int32_t)a4 % 32; // 0x331844
    if (v9 != 0) {
        int32_t * v10 = (int32_t *)(v8 - 0x7d975021); // 0x331844
        uint32_t v11 = *v10; // 0x331844
        *v10 = v11 >> v9 | v11 << 32 - v9;
    }
    return a2 & 0xffffffff;
}

// Address range: 0x331850 - 0x33185e
int64_t function_331850(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x331850
    int64_t v1; // 0x331850
    __asm_out_133((int16_t)a3, (char)v1);
    char v2 = *(char *)0x6433b359; // 0x331852
    *(char *)0x6433b359 = v2 + (char)((uint64_t)v1 / 256);
    return unknown_ffffffff9e35005f();
}

// Address range: 0x33186c - 0x331870
int64_t function_33186c(int64_t a1) {
    // 0x33186c
    int64_t v1; // 0x33186c
    return __asm_sti((int32_t)v1 + (int32_t)a1);
}

// Address range: 0x331870 - 0x33188b
int64_t function_331870(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5) {
    int64_t v1 = a4;
    int64_t v2; // 0x331870
    uint32_t v3 = (int32_t)v2; // 0x331870
    bool v4; // 0x331870
    uint32_t v5 = v3 - 0x2fd568f1 + (int32_t)v4; // 0x331870
    bool v6 = v4 ? v5 <= v3 : v3 > 0x2fd568f0; // 0x331870
    int64_t result = v5; // 0x331870
    char * v7 = (char *)result; // 0x331875
    *v7 = *v7 + (char)(a4 / 256) + (char)v6;
    uint32_t v8 = (int32_t)a4 % 32; // 0x33187a
    if (v8 != 0) {
        uint32_t v9 = *(int32_t *)&v1; // 0x33187a
        *(int32_t *)v1 = v9 >> v8 | v9 << 32 - v8;
    }
    *(char *)0xffa1389 = *(char *)0xffa1389 + (char)(a5 / 256);
    return result;
}

// Address range: 0x3318ab - 0x3318ac
int64_t function_3318ab(void) {
    // 0x3318ab
    int64_t result; // 0x3318ab
    return result;
}

// Address range: 0x3318ed - 0x3318f0
int64_t function_3318ed(void) {
    // 0x3318ed
    int64_t result; // 0x3318ed
    return result;
}

// Address range: 0x331906 - 0x331922
int64_t function_331906(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x13a53343); // 0x331906
    int64_t v2; // 0x331906
    *v1 = *v1 + (int32_t)v2;
    char * v3 = (char *)(a4 - 50); // 0x33190c
    *v3 = *v3 + (char)a4;
    char v4 = *(char *)-0x1ea046e7 + (char)(v2 / 256); // 0x331912
    *(char *)-0x1ea046e7 = v4;
    int64_t result = 0x10000 * (int32_t)v2 >> 16; // 0x331918
    if (v4 >= 0) {
        result = function_3318ab();
    }
    // 0x33191a
    return result;
}

// Address range: 0x331934 - 0x331943
int64_t function_331934(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x331934
    int64_t v1; // 0x331934
    int64_t v2 = v1;
    *(int32_t *)a4 = 2 * (int32_t)v1;
    __asm_out(-90, (char)v2);
    int64_t v3; // 0x331934
    return (v2 - (*(int32_t *)&v3 > (int32_t)v2 ? 35 : 34)) % 256 | v2 & -256;
}

// Address range: 0x331a00 - 0x331a4b
int64_t function_331a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x331a00
    int64_t v1; // 0x331a00
    uint64_t v2 = v1;
    __asm_out_133((int16_t)a3, (char)v1);
    unknown_ffffffffecf33014();
    *(int32_t *)(a2 + 54) = (int32_t)v1;
    *(char *)0x37a49b24 = *(char *)0x37a49b24 + (char)(v2 / 256);
    __asm_wait();
    int64_t v3; // 0x331a00
    *(int32_t *)(((v2 & 0xff00) + a3 & 0xff00 | v2 & -0xff01) - 13) = *(int32_t *)&v3;
    return (int64_t)*(int32_t *)(0x13dbdfd * v2 & 0xffffffff);
}

// Address range: 0x331a5d - 0x331a88
int64_t function_331a5d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)(a3 / 256) + (char)a4; // 0x331a5d
    int64_t v2 = a3 & -0xff01; // 0x331a5d
    unknown_e96cc9e();
    int64_t v3 = unknown_1701a6a(); // 0x331a64
    __asm_outsd((int16_t)(256 * (int64_t)v1 | v2), (int32_t)a2);
    int64_t v4; // 0x331a5d
    if (a4 != 1 == v1 == 0) {
        int32_t * v5 = (int32_t *)(256 * (int64_t)(v1 / 2 | 128 * v1) | v2); // 0x331a86
        *v5 = *v5 | (int32_t)a1;
        return v3 + v4 & 0xffffffff;
    }
    int64_t * v6 = (int64_t *)(v4 + 0x583bda2f); // 0x331a71
    *v6 = *v6 | a2;
    __asm_out(-44, (char)v3);
    int64_t v7; // 0x331a5d
    return (int64_t)&v7;
}

// Address range: 0x331ab0 - 0x331ab1
int64_t function_331ab0(void) {
    // 0x331ab0
    int64_t result; // 0x331ab0
    return result;
}

// Address range: 0x331ae7 - 0x331b3a
int64_t function_331ae7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x331ae7
    int64_t v1; // 0x331ae7
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t result = v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1); // 0x331aed
    bool v4; // 0x331ae7
    if (v4) {
        function_331ab0();
        // 0x331af1
        result = unknown_283c82f9();
        *(char *)-0x5074ce01 = *(char *)-0x5074ce01 + (char)(v1 / 256);
    }
    int32_t v5 = a2;
    *(int32_t *)a2 = -v5;
    int64_t v6 = a4 - 1; // 0x331b05
    if (v6 != 0 == v5 == 0) {
        // 0x331b38
        return result;
    }
    unsigned char v7 = *(char *)0x3d00006829ec962a; // 0x331b09
    int32_t * v8 = (int32_t *)(a1 - 34 + 4 * v1); // 0x331b12
    *v8 = *v8 + (int32_t)a1;
    char v9 = *(char *)&v3; // 0x331b16
    *(char *)v3 = v9 ^ ((char)v6 | (char)&g3);
    __asm_out(-61, v7);
    return result & -256 | (int64_t)v7;
}

// Address range: 0x331b3d - 0x331b45
int64_t function_331b3d(void) {
    // 0x331b3d
    return unknown_b5ad43();
}

// Address range: 0x331b47 - 0x331b4c
int64_t function_331b47(void) {
    // 0x331b47
    int64_t v1; // 0x331b47
    int64_t v2 = v1;
    bool v3; // 0x331b47
    return (v2 + 192 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x331b76 - 0x331b7a
int64_t function_331b76(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x331b76
    return function_331bd5(a1, a2, (a4 / 256 + a3) % 256 | a3 & -256, a4);
}

// Address range: 0x331b80 - 0x331b85
int64_t function_331b80(void) {
    // 0x331b80
    int64_t v1; // 0x331b80
    return v1 | 126;
}

// Address range: 0x331b91 - 0x331b92
int64_t function_331b91(void) {
    // 0x331b91
    int64_t result; // 0x331b91
    return result;
}

// Address range: 0x331bb3 - 0x331bb4
int64_t function_331bb3(void) {
    // 0x331bb3
    int64_t result; // 0x331bb3
    return result;
}

// Address range: 0x331bc5 - 0x331bc8
int64_t function_331bc5(int64_t a1) {
    // 0x331bc5
    int64_t result; // 0x331bc5
    return result;
}

// Address range: 0x331bd5 - 0x331be8
int64_t function_331bd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)-0x4c582771; // 0x331bd5
    int64_t v2; // 0x331bd5
    bool v3; // 0x331bd5
    *(char *)-0x4c582771 = (char)v3 - (char)((uint64_t)v2 / 256) + v1;
    return v2 & -256 | (int64_t)*(char *)0x56ad8dbad7ec0019;
}

// Address range: 0x331bf4 - 0x331bf5
int64_t function_331bf4(int64_t a1) {
    // 0x331bf4
    int64_t result; // 0x331bf4
    return result;
}

// Address range: 0x331c15 - 0x331c4a
int64_t function_331c15(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x331c15
    int64_t v1; // 0x331c15
    uint64_t v2 = v1;
    unknown_841b61b();
    char * v3 = (char *)(int64_t)*(int32_t *)0x863f601e87c0580; // 0x331c23
    *v3 = *v3 + (char)(v2 / 256);
    __asm_in_134((int16_t)a3);
    int32_t * v4 = (int32_t *)((v2 & 0xffffffff) + 57); // 0x331c42
    int64_t v5; // 0x331c15
    *v4 = *v4 + (int32_t)(int64_t)&v5;
    bool v6; // 0x331c15
    char v7 = *(char *)(4 * a2 + a1 + (v6 ? -1 : 1)); // 0x331c46
    return a5 & 0xffff0000 | (int64_t)((256 * (int16_t)a5 >> 8) * (int16_t)v7);
}

// Address range: 0x331c4a - 0x331c58
int64_t function_331c4a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t result = unknown_2888a652(a1, a2, a3, a4, a5); // 0x331c4c
    int64_t v1; // 0x331c4a
    char * v2 = (char *)(2 * a2 - 81 + v1); // 0x331c51
    *v2 = *v2 + (char)(a4 / 256);
    return result;
}

// Address range: 0x331caf - 0x331cbf
int64_t function_331caf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x331caf
    return unknown_ffffffff8fd7cabe();
}

// Address range: 0x331cce - 0x331ce6
int64_t function_331cce(int64_t a1) {
    int64_t result = (int64_t)*(int32_t *)0x12201e8c0380123; // 0x331cd0
    int32_t * v1 = (int32_t *)result; // 0x331cdb
    *v1 = *v1 + 0x6d28ecf1;
    return result;
}

// Address range: 0x331ce8 - 0x331cf1
int64_t function_331ce8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x331ce8
    int64_t result; // 0x331ce8
    return result;
}

// Address range: 0x331d6d - 0x331d78
int64_t function_331d6d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x331d6d
    int64_t result; // 0x331d6d
    int32_t * v1 = (int32_t *)(result + 0x74bc080a); // 0x331d6d
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x331dbf - 0x331ddb
int64_t function_331dbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x331dbf
    int64_t v1; // 0x331dbf
    uint64_t v2 = v1;
    __asm_out(-123, (char)v2);
    *(char *)a1 = __asm_insb((int16_t)a3);
    char v3 = *(char *)(a4 + 23); // 0x331dc4
    int64_t v4; // 0x331dbf
    uint32_t v5 = *(int32_t *)&v4; // 0x331dca
    *(int32_t *)v4 = v5 - 0x13d004b;
    int32_t * v6 = (int32_t *)(v1 + 0x50051ce2); // 0x331dd2
    *v6 = (int32_t)(v5 < 0x13d004b) + (int32_t)v1 + *v6;
    return (256 * (int64_t)(v3 + (char)(v2 / 256)) | v2 & 0xffff00ff) + 0xffffffff & 0xffffffff;
}

// Address range: 0x452be3 - 0x452ce8
int64_t function_452be3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    char * v3 = (char *)(a2 + 0x43a18ac8); // 0x452be5
    int64_t v4; // 0x452be3
    char v5 = v4 / 256; // 0x452be5
    *v3 = *v3 & v5;
    char v6 = a4;
    int64_t v7 = v4 & 0xffffffff; // 0x452bec
    int64_t v8 = a1;
    int64_t v9 = v8; // 0x452bec
    while (v7 != 0) {
        bool v10; // 0x452be3
        int64_t v11 = v8 + (v10 ? -1 : 1); // 0x452bec
        v7--;
        v9 = v11;
        if (*(char *)v8 != v6) {
            // break -> 
            break;
        }
        v8 = v11;
        v9 = v8;
    }
    *(char *)v1 = (char)v4;
    int64_t v12 = v4 & -256 | (int64_t)*(char *)&v1; // 0x452bee
    __asm_out(19, v6);
    int32_t * v13 = (int32_t *)(4 * v1 + v2); // 0x452bf2
    int32_t v14 = *v13 ^ (int32_t)v4; // 0x452bf2
    *v13 = v14;
    if (v14 != 0) {
        uint64_t v15 = function_452b87(); // 0x452bf5
        uint32_t v16 = *(int32_t *)-0x61d4d600; // 0x452bf9
        char v17 = *(char *)v9; // 0x452bff
        return 256 * (int64_t)(v17 + (char)(v15 / 256) + (char)(v16 > (int32_t)v12)) | v15 & -0xff01;
    }
    int32_t * v18 = (int32_t *)v12; // 0x452c75
    uint32_t v19 = *v18; // 0x452c75
    uint32_t v20 = (int32_t)v9; // 0x452c75
    int32_t v21 = v19 - v20; // 0x452c75
    *v18 = v21;
    if (v9 <= (int64_t)v19) {
        // 0x452c17
        return a4 & 0xffffffff;
    }
    if (v19 < v20 || v21 == 0) {
        int64_t v22 = a4 & 0x8bd6c6a4 | 0x7429395b; // 0x452c7b
        char * v23 = (char *)(v9 - 117); // 0x452c80
        *v23 = *v23 - 1;
        char * v24 = (char *)v22; // 0x452c85
        *v24 = *v24 | v5;
        __asm_outsb((int16_t)v1, *(char *)&v2);
        char * v25 = (char *)(v12 - 15); // 0x452c8a
        *v25 = *v25 + (char)v1;
        return v22 + 199 & 230 | v22 & 0xffffff00;
    }
    // 0x452c72
    return __asm_int1();
}

// Address range: 0x452d13 - 0x452d3c
int64_t function_452d13(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(a3 + 0x616bb196); // 0x452d13
    int32_t * v2 = (int32_t *)(a4 + 94); // 0x452d1c
    int64_t v3; // 0x452d13
    *v2 = *v2 + (int32_t)v3;
    char * v4 = (char *)(v3 + 0x5fa7273e); // 0x452d25
    *v4 = *v4 ^ (char)((v1 & (int32_t)v3) / 256);
    unknown_194cacd3();
    return function_452d90(a1, a2, a3, (int64_t)&g4);
}

// Address range: 0x452d8e - 0x452d90
int64_t function_452d8e(int64_t a1, int64_t a2) {
    // 0x452d8e
    int64_t result; // 0x452d8e
    return result;
}

// Address range: 0x452d90 - 0x452da9
int64_t function_452d90(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    uint32_t v1 = *(int32_t *)-0x5078e2b0f4f0d960; // 0x452d91
    int64_t result = v1; // 0x452d91
    int32_t * v2 = (int32_t *)(a4 + 74); // 0x452d9a
    *v2 = *v2 & -0x3fe235d9;
    if (((char)(v1 / 256) ^ (char)(a3 / 256)) < 0) {
        // 0x452dc1
        return result;
    }
    // 0x452da6
    *(char *)a1 = (char)v1;
    return result & 0xffffff5f;
}

// Address range: 0x452dae - 0x452db2
int64_t function_452dae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 128); // 0x452dae
    bool v2; // 0x452dae
    *v1 = 128 * (char)v2 | *v1 / 2;
    int64_t result; // 0x452dae
    return result;
}

// Address range: 0x452db3 - 0x452db4
int64_t function_452db3(void) {
    // 0x452db3
    int64_t result; // 0x452db3
    return result;
}

// Address range: 0x452dd3 - 0x452de1
int64_t function_452dd3(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a1 - 0x1256699c); // 0x452dd9
    *v1 = *v1 + 119;
    int64_t result; // 0x452dd3
    return result;
}

// Address range: 0x452df2 - 0x452e6b
int64_t function_452df2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x452df2
    int64_t v1; // 0x452df2
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(4 * a4 + a3); // 0x452df2
    uint32_t v4 = *v3 ^ 0x12960cd; // 0x452df2
    *v3 = v4;
    int64_t result = function_452db3(); // 0x452dfe
    if (v4 >= 0) {
        // 0x452e05
        __asm_out(61, (char)result);
        *(int32_t *)a1 = __asm_insd((int16_t)a3);
        return result;
    }
    uint64_t v5 = result + 0x5e1b83ca; // 0x452e0f
    int64_t result2 = v5 & 0xffffff00 | (int64_t)*(char *)(v5 % 256 + v2); // 0x452e14
    char v6 = a3; // 0x452e16
    char v7 = *(char *)result2; // 0x452e16
    unsigned char v8 = v7 + v6; // 0x452e16
    if (((v8 ^ v6) & (v8 ^ v7)) >= 0) {
        // 0x452e6a
        return a1 & 0xffffffff;
    }
    // 0x452e1a
    *(int32_t *)v2 = (int32_t)(v2 ^ a4);
    char * v9 = (char *)((a3 & -256 | (int64_t)v8) - 126); // 0x452e1c
    *v9 = *v9 + (char)(v2 / 256);
    return result2;
}

// Address range: 0x452e6d - 0x452e6e
int64_t function_452e6d(int64_t a1) {
    // 0x452e6d
    int64_t result; // 0x452e6d
    return result;
}

// Address range: 0x452e7d - 0x452e7e
int64_t function_452e7d(void) {
    // 0x452e7d
    int64_t result; // 0x452e7d
    return result;
}

// Address range: 0x452e7e - 0x452f66
int64_t function_452e7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3 = a6;
    bool v4; // 0x452e7e
    int32_t v5 = 2 * (int32_t)a1 | (int32_t)v4; // 0x452e7f
    *(int32_t *)a1 = v5;
    int64_t result; // 0x452e7e
    int64_t result3; // 0x452e7e
    if (v5 < 1) {
        // 0x452ef8
        if ((char)result3 - *(char *)&v2 < 0) {
            result = function_452e7d();
        }
        // 0x452ee3
        return result;
    }
    uint64_t v6 = a5 / 256; // 0x452e83
    unsigned char v7 = (char)v6; // 0x452e83
    uint64_t v8 = result3 / 256; // 0x452e83
    unsigned char v9 = (char)v8; // 0x452e83
    int64_t v10 = a4 - 1; // 0x452edd
    if (v10 != 0 == v7 == v9) {
        if (v7 < v9) {
            // 0x452ee3
            return result;
        }
        int32_t v11 = *(int32_t *)(result3 - 0x5ed7e655 + v2); // 0x452f4f
        uint32_t v12 = v11 | (int32_t)(int64_t)&v3; // 0x452f4f
        int64_t result2 = __asm_int3(); // 0x452f56
        int32_t * v13 = (int32_t *)(v2 + 0x7750e6a4); // 0x452f57
        *v13 = *v13 | v12;
        *(char *)v1 = *(char *)&v1 + 1;
        *(int64_t *)((int64_t)v12 - 8) = -0x2464da73;
        return result2;
    }
    char v14 = result3;
    if (v6 < v8) {
        // 0x452f0a
        *(char *)result3 = v14 - (char)a5;
        return result3;
    }
    if (v7 != v9) {
        // 0x452ee3
        return result;
    }
    char v15 = v14 ^ -128; // 0x452ebc
    int64_t v16 = result3 & -256; // 0x452ebc
    if (v15 < 0 == v14 < 0 == (v15 != 0)) {
        // 0x452ee3
        return v16 | (int64_t)v15;
    }
    unsigned char v17 = *(char *)v10; // 0x452ec1
    char v18 = *(char *)(a4 + 0x4a2b0b5b); // 0x452ec3
    return v16 | (int64_t)(v18 + v15 + (char)(v17 < (char)v10));
}

// Address range: 0x452f6a - 0x452f6b
int64_t function_452f6a(void) {
    // 0x452f6a
    int64_t result; // 0x452f6a
    return result;
}

// Address range: 0x452f6d - 0x452f71
int64_t function_452f6d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x452f6d
    int64_t result; // 0x452f6d
    *(char *)a3 = (char)result - 102;
    return result;
}

// Address range: 0x452f84 - 0x452f89
int64_t function_452f84(void) {
    // 0x452f84
    return function_ffffffffe3771489();
}

// Address range: 0x4531e3 - 0x4531e5
int64_t function_4531e3(void) {
    // 0x4531e3
    int64_t v1; // 0x4531e3
    return v1 | 162;
}

// Address range: 0x453214 - 0x453215
int64_t function_453214(void) {
    // 0x453214
    int64_t result; // 0x453214
    return result;
}

// Address range: 0x453240 - 0x453241
int64_t function_453240(void) {
    // 0x453240
    int64_t result; // 0x453240
    return result;
}

// Address range: 0x453249 - 0x45324a
int64_t function_453249(int64_t a1) {
    // 0x453249
    int64_t result; // 0x453249
    return result;
}

// Address range: 0x453257 - 0x453284
int64_t function_453257(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x453257
    bool v1; // 0x453257
    bool v2 = v1;
    int64_t v3; // 0x453257
    if (!v1) {
        // 0x453266
        __asm_out_135((int16_t)a3, (int32_t)v3);
        int64_t v4 = function_453240(); // 0x453271
        __asm_out_136(80, (int32_t)v4);
        return (v4 + 93) % 256 | v4 & -256;
    }
    unsigned char v5 = (char)v3; // 0x453259
    bool v6 = v2 ? v5 + 46 + (char)v2 <= v5 : v5 > 209; // 0x453259
    __asm_hlt();
    int64_t v7 = __asm_int1(); // 0x45325d
    unsigned char v8 = (char)v7; // 0x45325e
    unsigned char v9 = (v6 ? -121 : -122) + v8; // 0x45325e
    int64_t result = v7 & -256 | (int64_t)v9; // 0x453261
    if (v6 ? v9 <= v8 : v8 > 121) {
        result = function_453214();
    }
    // 0x453263
    return result;
}

// Address range: 0x453284 - 0x453288
int64_t function_453284(int64_t a1) {
    // 0x453284
    int64_t result; // 0x453284
    return result;
}

// Address range: 0x453289 - 0x45329d
int64_t function_453289(int64_t a1, int64_t a2, int64_t a3) {
    // 0x453289
    return (int64_t)*(int32_t *)0x3a4e58ab9234a374;
}

// Address range: 0x4532cf - 0x4532dc
int64_t function_4532cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4532cf
    int64_t v1; // 0x4532cf
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 - (char)v1;
    if (a4 == 1) {
        // 0x4532d7
        return a3 + 0x163fd2a1 & 0xffffffff;
    }
    // 0x4532de
    return a3 & 0xffffffff;
}

// Address range: 0x4532e7 - 0x4532f9
int64_t function_4532e7(void) {
    // 0x4532e7
    int64_t result; // 0x4532e7
    __asm_out(-120, (char)result);
    char * v1 = (char *)(result - 0x19ff9a3b); // 0x4532ef
    int64_t v2; // bp-8, 0x4532e7
    *v1 = *v1 + (char)((int64_t)&v2 / 0x8000);
    return result;
}

// Address range: 0x4532fb - 0x4532fc
int64_t function_4532fb(void) {
    // 0x4532fb
    int64_t result; // 0x4532fb
    return result;
}

// Address range: 0x45332e - 0x453335
int64_t function_45332e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45332e
    return function_ffffffffd065a1df();
}

// Address range: 0x453347 - 0x45334b
int64_t function_453347(int64_t a1) {
    // 0x453347
    bool v1; // 0x453347
    if (v1) {
        function_4532fb();
    }
    // 0x453349
    return __asm_int3();
}

// Address range: 0x453409 - 0x45340d
int64_t function_453409(int64_t a1, int64_t a2) {
    // 0x453409
    int64_t v1; // 0x453409
    return v1 & 0xffffffff;
}

// Address range: 0x45345a - 0x453468
int64_t function_45345a(void) {
    // 0x45345a
    *(int64_t *)0x3ec7d310 = -35;
    int64_t result; // 0x45345a
    return result;
}

// Address range: 0x453468 - 0x453489
int64_t function_453468(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x453468
    int64_t v1; // 0x453468
    __asm_outsb((int16_t)a3, (char)v1);
    char * v2 = (char *)(v1 - 0x24c25d2); // 0x453469
    *v2 = *v2 & (char)v1;
    int64_t v3 = 0x100000000 * a2 >> 32; // 0x45346f
    int64_t v4 = 0x1a61c6ed * v3; // 0x45346f
    int64_t v5; // 0x453468
    __asm_outsd((int16_t)v4, *(int32_t *)&v5);
    int64_t v6 = __asm_int1(); // 0x453476
    char v7 = *(char *)(v6 + 0x432a2273); // 0x453477
    int64_t result = v6 & -256 | (int64_t)((char)(v4 != 0x1a61c6ed00000000 * v3 >> 32) - v7 + (char)v6); // 0x453477
    *(int32_t *)result = (int32_t)v1;
    char * v8 = (char *)(v1 - 0x548d8354); // 0x45347f
    *v8 = *v8 | (char)(a4 / 256);
    return result;
}

// Address range: 0x4534ab - 0x4534b1
int64_t function_4534ab(void) {
    // 0x4534ab
    int64_t v1; // 0x4534ab
    return v1 & 0xffffffff ^ 0x5eafd373;
}

// Address range: 0x4534e3 - 0x4534ea
int64_t function_4534e3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4534e3
    return function_240a6f3d();
}

// Address range: 0x453516 - 0x453517
int64_t function_453516(void) {
    // 0x453516
    int64_t result; // 0x453516
    return result;
}

// Address range: 0x45355f - 0x453570
int64_t function_45355f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x453565
    int64_t v2; // 0x45355f
    bool v3; // 0x45355f
    if (v1 != 0 == v3) {
        v2 = function_453516();
    }
    // 0x453567
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    uint32_t v4 = (int32_t)v1 % 32; // 0x45356a
    if (v4 != 0) {
        int64_t v5; // 0x45355f
        int32_t * v6 = (int32_t *)(v5 + 43 + 2 * v2); // 0x45356a
        *v6 = *v6 << v4;
    }
    return function_453575();
}

// Address range: 0x453571 - 0x453575
int64_t function_453571(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x453571
    int64_t result; // 0x453571
    return result;
}

// Address range: 0x453575 - 0x453576
int64_t function_453575(void) {
    // 0x453575
    int64_t result; // 0x453575
    return result;
}

// Address range: 0x45357e - 0x453588
int64_t function_45357e(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x2dd55dd1); // 0x45357f
    *v1 = *v1 & (int32_t)a2;
    int64_t result; // 0x45357e
    return result;
}

// Address range: 0x45359e - 0x45359f
int64_t function_45359e(void) {
    // 0x45359e
    int64_t result; // 0x45359e
    return result;
}

// Address range: 0x4535bd - 0x4535bf
int64_t function_4535bd(void) {
    // 0x4535bd
    return function_45359e();
}

// Address range: 0x4535db - 0x4535e3
int64_t function_4535db(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4535db
    return a3 & 0xffffff46;
}
