/*
 * Targeted RetDec C for native executable gap queue batch 1294.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x29004c-0x29024c rank=- name=- kind=- bytes=- uncovered=-
 *   0x29024c-0x29034c rank=- name=- kind=- bytes=- uncovered=-
 *   0x29044c-0x29064c rank=- name=- kind=- bytes=- uncovered=-
 *   0x29064c-0x29084c rank=- name=- kind=- bytes=- uncovered=-
 *   0x290c4c-0x290e4c rank=- name=- kind=- bytes=- uncovered=-
 *   0x290e4c-0x29104c rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cb479-0x3cb679 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cb679-0x3cb879 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cb879-0x3cba79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cba79-0x3cbc79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cbc79-0x3cbe79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cbe79-0x3cc079 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cc079-0x3cc279 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cc279-0x3cc479 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4debf9-0x4decf9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4decf9-0x4ded79 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g8;
extern int g9;
extern int g10;
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
int128_t __asm_packsswb(int128_t left, int128_t right);
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

int64_t function_1e2ac157();
int64_t function_224b703();
int64_t function_224be83();
int64_t function_29004c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29014d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_29044c(void);
int64_t function_2904fb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_290506(void);
int64_t function_29050f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_290542(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_290599(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29059f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2905d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_290629(int64_t a1);
int64_t function_2906a2(int64_t a1);
int64_t function_2907b5(void);
int64_t function_2907cd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2907f3(int64_t a1);
int64_t function_2907f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2907fb(int64_t a1, int64_t a2);
int64_t function_290c22();
int64_t function_290c4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_290c7e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_290c86(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_290cb2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_290cb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_290e02(int64_t a1);
int64_t function_290e24(int64_t a1);
int64_t function_290f00(void);
int64_t function_290f29(int64_t a1);
int64_t function_290f87(void);
int64_t function_290f91(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_290f97(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_291021(void);
int64_t function_3cb479(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3cb4a2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_3cb530(void);
int64_t function_3cb581(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cb58b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cb598(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cb602(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3cb655(int64_t a1);
int64_t function_3cb676(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_3cb820(void);
int64_t function_3cb84f(void);
int64_t function_3cb8e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cb977(int64_t a1);
int64_t function_3cb97b(void);
int64_t function_3cb97f(void);
int64_t function_3cb9a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cb9f8(int64_t a1, int64_t a2);
int64_t function_3cba33(void);
int64_t function_3cba5b(void);
int64_t function_3cba69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_3cbab2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3cbade(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3cbbd3(void);
int64_t function_3cbbd9(int64_t a1, uint64_t a2, uint64_t a3);
int64_t function_3cbc54(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cbc58(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3cbc5e(void);
int64_t function_3cbc68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3cbd35(void);
int64_t function_3cbd4e(void);
int64_t function_3cbd90(void);
int64_t function_3cbda5(void);
int64_t function_3cbde0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3cbdf5(void);
int64_t function_3cbdf8(void);
int64_t function_3cbe10(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cbe7c(void);
int64_t function_3cbea0(void);
int64_t function_3cbea5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3cbfb4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3cbfdf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cc01d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3cc146(void);
int64_t function_3cc152(void);
int64_t function_3cc160(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3cc173(void);
int64_t function_3cc1aa(void);
int64_t function_3cc1bd(int64_t a1, int64_t a2);
int64_t function_3cc1f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3cc21d(int64_t a1);
int64_t function_3cc25e(int64_t a1, int64_t a2);
int64_t function_3cc28e(void);
int64_t function_3cc2ad(int64_t a1);
int64_t function_3cc2b7(void);
int64_t function_3cc2bf(void);
int64_t function_3cc2cf(void);
int64_t function_3cc32b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3cc3cf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3cc400(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4debc0();
int64_t function_4debf9(void);
int64_t function_4dec7e(void);
int64_t function_4dec81(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4dec87(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4decaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4dece6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_593bfa();
int64_t function_6e00669();
int64_t function_c57b8();
int64_t function_ffffffff92cbbfe5();
int64_t function_ffffffffa5bfef91();
int64_t function_ffffffffc33ea136();
int64_t function_ffffffffd1f5abca();
int64_t function_ffffffffe793a149();
int64_t unknown_179b977();
int64_t unknown_1a3aad09();
int64_t unknown_1b97b677();
int64_t unknown_2144c611();
int64_t unknown_22369fe5();
int64_t unknown_253785b2();
int64_t unknown_2875e5f1();
int64_t unknown_2a3764c1();
int64_t unknown_2a94dc00();
int64_t unknown_3a40e32d();
int64_t unknown_3a586da7();
int64_t unknown_3a65793b();
int64_t unknown_3b451ff0();
int64_t unknown_3d111a32();
int64_t unknown_3d3e9d87();
int64_t unknown_3d968606();
int64_t unknown_4315784();
int64_t unknown_4a664a87();
int64_t unknown_54b03cf0();
int64_t unknown_691bcf06();
int64_t unknown_6922471a();
int64_t unknown_6c972056();
int64_t unknown_7fa450fe();
int64_t unknown_82a4c87();
int64_t unknown_b152985();
int64_t unknown_ffffffff85a34696();
int64_t unknown_ffffffff88471cff();
int64_t unknown_ffffffff91e2bbd2();
int64_t unknown_ffffffff97c3a5b5();
int64_t unknown_ffffffff9832de0c();
int64_t unknown_ffffffffa2429e8d();
int64_t unknown_ffffffffa2a971c3();
int64_t unknown_ffffffffa3fbcd4b();
int64_t unknown_ffffffffaa42c07d();
int64_t unknown_ffffffffabf1a6d3();
int64_t unknown_ffffffffbbb6e9b2();
int64_t unknown_ffffffffbd6ff8b9();
int64_t unknown_ffffffffbdb292fe();
int64_t unknown_ffffffffc744cc84();
int64_t unknown_ffffffffcf672f64();
int64_t unknown_ffffffffd2bdac9c();
int64_t unknown_ffffffffd42e6694();
int64_t unknown_ffffffffe024c891();
int64_t unknown_ffffffffe17acd21();
int64_t unknown_ffffffffe9164a59();
int64_t unknown_ffffffffec4856fb();
int64_t unknown_ffffffffeecebc16();

// Address range: 0x29004c - 0x29014d
int64_t function_29004c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29004c
    int64_t v1; // 0x29004c
    return function_c57b8(a1, a2, v1, v1);
}

// Address range: 0x29014d - 0x290263
int64_t function_29014d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x29014d
    bool v1; // 0x29014d
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x29014d
    int64_t v3; // 0x29014d
    int64_t * v4 = (int64_t *)(v3 - 8); // 0x29020a
    *v4 = a3;
    int64_t * v5 = (int64_t *)(v3 - 16); // 0x29020b
    *v5 = a4;
    int64_t * v6 = (int64_t *)(v3 - 24); // 0x29020f
    *v6 = v2;
    *v5 = v2;
    int64_t * v7 = (int64_t *)(v3 + 8); // 0x290213
    *v7 = v2;
    *v6 = a2;
    *v5 = a6;
    *(int64_t *)(v3 + 24) = *v4;
    int64_t * v8 = (int64_t *)v3; // 0x290239
    int64_t v9 = *v8; // 0x290239
    *v4 = v9;
    *v5 = v9;
    int64_t v10 = *v7; // 0x290248
    *v8 = v10;
    *v4 = v10;
    return function_c57b8(a1, *v6, *v4, *v5);
}

// Address range: 0x29044c - 0x29044e
int64_t function_29044c(void) {
    // 0x29044c
    int64_t v1; // 0x29044c
    return v1 & -16;
}

// Address range: 0x2904fb - 0x290506
int64_t function_2904fb(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 0x640a698e); // 0x2904fb
    *v1 = *v1 + (int32_t)a3;
    return function_1e2ac157();
}

// Address range: 0x290506 - 0x29050f
int64_t function_290506(void) {
    // 0x290506
    int64_t result; // 0x290506
    return result;
}

// Address range: 0x29050f - 0x29052c
int64_t function_29050f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29050f
    int64_t v1; // 0x29050f
    uint64_t v2 = v1;
    char v3 = *(char *)0x73ffd18; // 0x290511
    *(char *)0x73ffd18 = v3 + (char)((uint64_t)v1 / 256);
    *(char *)v2 = (char)(v2 / 256) + (char)v2;
    return function_6e00669();
}

// Address range: 0x290542 - 0x29058f
int64_t function_290542(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)-0x17f98feb52a714de; // 0x290542
    int64_t v2; // 0x290542
    *(char *)a1 = (char)v2;
    int64_t v3 = -0x7377a500; // bp-8, 0x29054e
    int64_t v4 = v2 & 0xffffff00 | (int64_t)(v1 - 55); // 0x290553
    int64_t v5 = a4; // 0x29055e
    int64_t v6 = v4; // 0x29055e
    if (v1 <= 54) {
        // 0x290560
        v6 = v4 - 8;
        *(int64_t *)v6 = -0xf93ae00;
        v5 = a4 - 1;
    }
    // 0x290567
    bool v7; // 0x290542
    int64_t v8 = (v7 ? -1 : 1) + a2; // 0x29054d
    int64_t v9 = (int64_t)&v3; // 0x29055c
    *(int64_t *)(v6 - 8) = v8;
    char * v10 = (char *)v8; // 0x29056d
    *v10 = *v10 + (char)v9;
    char v11 = *(char *)(0x40000 * v5 & 0xfffc0000); // 0x29056f
    int32_t v12 = *(int32_t *)(v8 + 0x53a0948); // 0x29057c
    char * v13 = (char *)((int64_t)(v12 & (int32_t)v8) + 0x3d013d5a); // 0x290588
    *v13 = *v13 - 36;
    return (v9 & 0xffff0000 | (int64_t)((256 * (int16_t)v9 >> 8) * (int16_t)v11)) + 0xdf525be7 & 0xffffffff;
}

// Address range: 0x290599 - 0x29059e
int64_t function_290599(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x290599
    int64_t result; // 0x290599
    return result;
}

// Address range: 0x29059f - 0x2905b0
int64_t function_29059f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29059f
    int64_t result; // 0x29059f
    bool v1; // 0x29059f
    if (a4 != 1 == v1) {
        // 0x2905d1
        return result;
    }
    char v2 = *(char *)-0x3fdc7b55; // 0x2905a4
    *(char *)-0x3fdc7b55 = v2 + (char)((uint64_t)result / 256);
    return function_ffffffffd1f5abca();
}

// Address range: 0x2905d2 - 0x2905e2
int64_t function_2905d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)-0x17d6db24; // 0x2905d5
    int64_t v2; // 0x2905d2
    *(char *)-0x17d6db24 = v1 + (char)((uint64_t)v2 / 256);
    return 0x10000 * (int32_t)v2 >> 16;
}

// Address range: 0x290629 - 0x290633
int64_t function_290629(int64_t a1) {
    // 0x290629
    int64_t result; // 0x290629
    *(int32_t *)(result - 1) = 0x1b3c0088;
    return result;
}

// Address range: 0x2906a2 - 0x2906a5
int64_t function_2906a2(int64_t a1) {
    // 0x2906a2
    int64_t result; // 0x2906a2
    return result;
}

// Address range: 0x2907b5 - 0x2907b6
int64_t function_2907b5(void) {
    // 0x2907b5
    int64_t result; // 0x2907b5
    return result;
}

// Address range: 0x2907cd - 0x2907cf
int64_t function_2907cd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2907cd
    int64_t result; // 0x2907cd
    return result;
}

// Address range: 0x2907f3 - 0x2907f8
int64_t function_2907f3(int64_t a1) {
    // 0x2907f3
    int64_t v1; // 0x2907f3
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x2907f3
    return function_2907fb((v2 ? -4 : 4) + a1, v1);
}

// Address range: 0x2907f9 - 0x2907fb
int64_t function_2907f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2907f9
    int64_t result; // 0x2907f9
    return result;
}

// Address range: 0x2907fb - 0x29082a
int64_t function_2907fb(int64_t a1, int64_t a2) {
    // 0x2907fb
    int64_t v1; // 0x2907fb
    *(int32_t *)a1 = 2 * (int32_t)v1;
    *(char *)a1 = (char)v1;
    bool v2; // 0x2907fb
    int64_t v3 = v2 ? -1 : 1; // 0x29080a
    int64_t v4 = v3 + a1; // 0x29080a
    *(char *)v4 = 0;
    uint64_t v5 = v1 / 2 % 0x80000000; // 0x29080f
    int64_t v6 = unknown_6922471a(v4 + v3, v3 + a2); // 0x290814
    char * v7 = (char *)v6; // 0x290819
    *v7 = *v7 + (char)v6;
    __asm_iretd(*(int64_t *)v5);
    return *(int64_t *)(v5 + 8);
}

// Address range: 0x290c4c - 0x290c51
int64_t function_290c4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x290c4c
    int64_t result; // 0x290c4c
    return result;
}

// Address range: 0x290c7e - 0x290c86
int64_t function_290c7e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x290c7e
    int64_t result; // 0x290c7e
    return result;
}

// Address range: 0x290c86 - 0x290c98
int64_t function_290c86(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x290c86
    int64_t v1; // 0x290c86
    if ((int32_t)v1 > -0x7d2b6062) {
        function_290c22();
    }
    int64_t v2 = unknown_ffffffffd42e6694(); // 0x290c8e
    return (a4 / 256 + 28 + v2) % 256 | v2 & -256;
}

// Address range: 0x290cb2 - 0x290cb6
int64_t function_290cb2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x290cb2
    int64_t result; // 0x290cb2
    return result;
}

// Address range: 0x290cb6 - 0x290cd1
int64_t function_290cb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_2a3764c1(); // 0x290cbb
    int64_t result = a3 & 0xffffffff; // 0x290cc1
    int32_t * v2 = (int32_t *)(a4 - 0x17c83900); // 0x290cc5
    int32_t v3 = *v2; // 0x290cc5
    int64_t v4; // 0x290cb6
    *v2 = (int32_t)((int32_t)v4 < (int32_t)v4) - (int32_t)v1 + v3;
    int32_t * v5 = (int32_t *)(result + 1); // 0x290ccb
    *v5 = *v5 + (int32_t)v4;
    return result;
}

// Address range: 0x290e02 - 0x290e0b
int64_t function_290e02(int64_t a1) {
    // 0x290e02
    int64_t v1; // 0x290e02
    return v1 & 0xfe174472 | 0x1e8bb8d;
}

// Address range: 0x290e24 - 0x290e29
int64_t function_290e24(int64_t a1) {
    // 0x290e24
    int64_t result; // 0x290e24
    return result;
}

// Address range: 0x290f00 - 0x290f0d
int64_t function_290f00(void) {
    int64_t result = unknown_3d968606(); // 0x290f00
    int32_t * v1 = (int32_t *)(result + 83); // 0x290f05
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x290f29 - 0x290f2c
int64_t function_290f29(int64_t a1) {
    // 0x290f29
    int64_t result; // 0x290f29
    return result;
}

// Address range: 0x290f87 - 0x290f88
int64_t function_290f87(void) {
    // 0x290f87
    int64_t result; // 0x290f87
    return result;
}

// Address range: 0x290f91 - 0x290f96
int64_t function_290f91(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x290f91
    int64_t result; // 0x290f91
    char * v1 = (char *)(result + 1 + 8 * result); // 0x290f91
    *v1 = *v1 | (char)(a3 / 256);
    return result;
}

// Address range: 0x290f97 - 0x290fa5
int64_t function_290f97(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x290f97
    int64_t result; // 0x290f97
    int64_t v1; // 0x290f97
    if (a4 != 1 == (*(char *)(v1 - 112) & 25) == 0) {
        result = function_290f87();
    }
    int32_t * v2 = (int32_t *)(a4 - 71); // 0x290f9f
    *v2 = *v2 + (int32_t)a3;
    return result;
}

// Address range: 0x291021 - 0x291024
int64_t function_291021(void) {
    // 0x291021
    int64_t result; // 0x291021
    return result;
}

// Address range: 0x3cb479 - 0x3cb4a1
int64_t function_3cb479(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3cb479
    int64_t v1; // 0x3cb479
    int32_t * v2 = (int32_t *)(v1 + 8 * a5); // 0x3cb47d
    *v2 = *v2 + (int32_t)a6;
    unknown_4a664a87();
    int64_t v3 = unknown_ffffffff85a34696(); // 0x3cb490
    char * v4 = (char *)(a4 + 0x1e8249c); // 0x3cb499
    *v4 = 2 * *v4;
    return v3 + v1 & 0xffffffff;
}

// Address range: 0x3cb4a2 - 0x3cb51b
int64_t function_3cb4a2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x3cb4a2
    int64_t v1; // 0x3cb4a2
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v3 = (char)v3;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    *(char *)a1 = (char)unknown_253785b2();
    bool v4; // 0x3cb4a2
    int64_t v5 = (v4 ? -1 : 1) + a1; // 0x3cb4b1
    int32_t * v6 = (int32_t *)(a2 + 0x3adddaa0); // 0x3cb4b3
    *v6 = *v6 + (int32_t)v2;
    int64_t v7 = ((a4 & (int64_t)&g2) == 0 ? 4 : -4) + a2; // 0x3cb4b9
    int64_t v8 = a3 & -256 | 50; // 0x3cb4ba
    int64_t v9 = unknown_ffffffffa2a971c3(v5, v7, v8); // 0x3cb4bd
    int32_t * v10 = (int32_t *)(v9 - 0x7297e576); // 0x3cb4c6
    *v10 = *v10 + (int32_t)v8;
    int64_t v11 = unknown_ffffffff91e2bbd2(v5 + ((a5 & (int64_t)&g2) == 0 ? 4 : -4)); // 0x3cb4cc
    char * v12 = (char *)(v2 - 7 + 4 * v2); // 0x3cb4d1
    *v12 = *v12 + (char)v11;
    int32_t * v13 = (int32_t *)(v11 + 0xb21242d4 & 0xffffffff ^ 232); // 0x3cb4dc
    int32_t v14 = *v13; // 0x3cb4dc
    int32_t v15 = v7; // 0x3cb4dc
    int32_t v16 = v14 + v15; // 0x3cb4dc
    *v13 = v16;
    if (v16 < 0 == ((v16 ^ v14) & (v16 ^ v15)) < 0 == (v16 != 0)) {
        function_ffffffffa5bfef91();
    }
    int64_t v17 = 7 * v9 & 0xffffffff; // 0x3cb4c3
    int64_t v18 = unknown_54b03cf0(); // 0x3cb4ea
    *(char *)(v2 + 14) = (char)(a3 / 256);
    unknown_ffffffff88471cff(*(int64_t *)(v17 + 8));
    int64_t v19 = *(int64_t *)(v17 + 16); // 0x3cb502
    int64_t v20 = __asm_wait(); // 0x3cb503
    unsigned char v21 = (char)v18 > 64 ? -32 : -33; // 0x3cb504
    unknown_ffffffff9832de0c();
    __asm_wait();
    int32_t * v22 = (int32_t *)(v7 + 24 + 4 * v19); // 0x3cb50e
    int32_t v23 = *v22; // 0x3cb50e
    *v22 = v23 + (int32_t)v19 + (int32_t)((char)v18 > 64 | v21 > (char)v20);
    return function_224b703();
}

// Address range: 0x3cb530 - 0x3cb531
int64_t function_3cb530(void) {
    // 0x3cb530
    int64_t result; // 0x3cb530
    return result;
}

// Address range: 0x3cb581 - 0x3cb58b
int64_t function_3cb581(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_3d3e9d87(a1, a2, a3, a4); // 0x3cb581
    int64_t v2; // 0x3cb581
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)v2;
    return function_3cb598(a1, a2, a3, a4);
}

// Address range: 0x3cb58b - 0x3cb598
int64_t function_3cb58b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t result; // 0x3cb58b
    bool v2; // 0x3cb58b
    if (!v2 && !v2) {
        result = function_3cb530();
    }
    int32_t * v3 = (int32_t *)(result + a1); // 0x3cb593
    *v3 = *v3 + (int32_t)a4;
    int64_t v4; // 0x3cb58b
    *(int32_t *)v1 = *(int32_t *)&v1 ^ (int32_t)v4;
    return result;
}

// Address range: 0x3cb598 - 0x3cb5ef
int64_t function_3cb598(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3cb598
    int64_t v1; // 0x3cb598
    int32_t * v2 = (int32_t *)(a4 - 70 + v1); // 0x3cb5a7
    *v2 = *v2 + (int32_t)v1;
    if (*(int32_t *)(3 * v1) > -1 - (int32_t)v1) {
        // 0x3cb5b0
        return __asm_in(-80);
    }
    int32_t * v3 = (int32_t *)(a3 + 29); // 0x3cb5eb
    *v3 = *v3 + (int32_t)v1;
    return v1 & -256 | (int64_t)(*(char *)0xd3753801e8ea2d % 128);
}

// Address range: 0x3cb602 - 0x3cb643
int64_t function_3cb602(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3cb602
    int64_t v1; // 0x3cb602
    int64_t v2 = v1;
    bool v3; // 0x3cb602
    bool v4 = v3;
    int64_t v5 = a6;
    *(char *)a3 = (char)a4;
    uint32_t v6 = (int32_t)(v2 + 256 & 0xff00 | v2 & 0xffff00ff); // 0x3cb606
    bool v7 = v4 ? (v4 ? -0x11310ad3 : -0x11310ad4) + v6 <= v6 : v6 > 0x11310ad3; // 0x3cb606
    int64_t v8 = unknown_2144c611(); // 0x3cb60b
    uint64_t v9 = v8 - (v7 ? 46 : 45); // 0x3cb610
    int64_t v10 = v9 % 256 | v8 & -256; // 0x3cb610
    int32_t * v11 = (int32_t *)(v10 + 0x60487e0a); // 0x3cb617
    *v11 = *v11 + (int32_t)(int64_t)&v5;
    *(int32_t *)a1 = (int32_t)v10;
    char * v12 = (char *)(a4 - 0x14fe17b3); // 0x3cb61e
    *v12 = *v12 + (char)v9;
    int32_t * v13 = (int32_t *)(a3 + 1);
    while (true) {
        int64_t v14 = unknown_3d111a32(); // 0x3cb62c
        char * v15 = (char *)(v14 + 0x492b7c00); // 0x3cb631
        *v15 = *v15 + (char)v14;
        int64_t v16; // bp+16, 0x3cb602
        *v13 = *v13 + (int32_t)(int64_t)&v16;
    }
}

// Address range: 0x3cb655 - 0x3cb658
int64_t function_3cb655(int64_t a1) {
    // 0x3cb655
    int64_t result; // 0x3cb655
    return result;
}

// Address range: 0x3cb676 - 0x3cb7fc
int64_t function_3cb676(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x3cb676
    int64_t v1; // 0x3cb676
    int32_t v2 = (int32_t)v1 ^ 0x2901e8e1; // 0x3cb676
    if (v2 == 0) {
        // 0x3cb6dc
        __asm_out(17, (int32_t)((unknown_22369fe5() / 256 + a4) % 256 | a4 & 0xffffff00));
        return result;
    }
    // 0x3cb67e
    *(int32_t *)0x19933a822bd424f3 = v2;
    unknown_ffffffffa2429e8d();
    return unknown_ffffffffd2bdac9c();
}

// Address range: 0x3cb820 - 0x3cb821
int64_t function_3cb820(void) {
    // 0x3cb820
    int64_t result; // 0x3cb820
    return result;
}

// Address range: 0x3cb84f - 0x3cb854
int64_t function_3cb84f(void) {
    // 0x3cb84f
    return function_ffffffffc33ea136();
}

// Address range: 0x3cb8e2 - 0x3cb976
int64_t function_3cb8e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3cb8e2
    int64_t v1; // 0x3cb8e2
    char v2 = (char)v1 | 1; // 0x3cb8e2
    if (v2 < 0) {
        // 0x3cb952
        return v1 & -256 | (int64_t)v2;
    }
    char v3 = *(char *)0x5ed7a0f1; // 0x3cb8ea
    *(char *)0x5ed7a0f1 = v3 + (char)((uint64_t)v1 / 256);
    return unknown_179b977();
}

// Address range: 0x3cb977 - 0x3cb97b
int64_t function_3cb977(int64_t a1) {
    // 0x3cb977
    int64_t result; // 0x3cb977
    return result;
}

// Address range: 0x3cb97b - 0x3cb97e
int64_t function_3cb97b(void) {
    // 0x3cb97b
    int64_t result; // 0x3cb97b
    return result;
}

// Address range: 0x3cb97f - 0x3cb981
int64_t function_3cb97f(void) {
    // 0x3cb97f
    int64_t result; // 0x3cb97f
    return result;
}

// Address range: 0x3cb9a6 - 0x3cb9b1
int64_t function_3cb9a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 0x305d9188); // 0x3cb9a6
    *v1 = *v1 + (char)a4;
    int64_t result; // 0x3cb9a6
    return result;
}

// Address range: 0x3cb9f8 - 0x3cba04
int64_t function_3cb9f8(int64_t a1, int64_t a2) {
    // 0x3cb9f8
    return unknown_ffffffffbdb292fe(a1, a2);
}

// Address range: 0x3cba33 - 0x3cba34
int64_t function_3cba33(void) {
    // 0x3cba33
    int64_t result; // 0x3cba33
    return result;
}

// Address range: 0x3cba5b - 0x3cba5c
int64_t function_3cba5b(void) {
    // 0x3cba5b
    int64_t result; // 0x3cba5b
    return result;
}

// Address range: 0x3cba69 - 0x3cbab1
int64_t function_3cba69(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    uint32_t v1 = (int32_t)a2; // 0x3cba6b
    int64_t v2; // 0x3cba69
    uint32_t v3 = (int32_t)v2 + v1; // 0x3cba6b
    if (v3 >= v1 && v3 != 0) {
        // 0x3cbaa1
        unknown_3a586da7();
        *(int32_t *)a3 = (int32_t)a1;
        *(char *)a1 = __asm_insb((int16_t)a3);
        return unknown_ffffffffbbb6e9b2();
    }
    // 0x3cba74
    unknown_ffffffffaa42c07d();
    int32_t * v4 = (int32_t *)(4 * v2 - 0x17f82fef + v2); // 0x3cba7c
    *v4 = *v4 + 0x28d24401;
    char * v5 = (char *)(4 * v2 - 82 + v2); // 0x3cba87
    char v6 = *v5; // 0x3cba87
    char v7 = a5 / 256; // 0x3cba87
    char v8 = v6 + v7; // 0x3cba87
    *v5 = v8;
    int64_t result = unknown_ffffffffe024c891(); // 0x3cba91
    if (((v8 ^ v6) & (v8 ^ v7)) < 0) {
        result = function_3cba33();
    }
    // 0x3cba93
    return result;
}

// Address range: 0x3cbab2 - 0x3cbad6
int64_t function_3cbab2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3cbab2
    int64_t v1; // 0x3cbab2
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t v3; // 0x3cbab2
    int64_t v4 = v3;
    *(int32_t *)v4 = *(int32_t *)&v3 + (int32_t)v4;
    *(int32_t *)a1 = (int32_t)v3;
    int64_t v5 = v3;
    uint64_t v6 = a4 / 256; // 0x3cbabb
    v3 = (v5 + v6) % 256 | v5 & -256;
    int32_t * v7 = (int32_t *)(a4 + 1); // 0x3cbabd
    int32_t v8 = *v7; // 0x3cbabd
    int32_t v9 = a3; // 0x3cbabd
    int32_t v10 = v8 + v9; // 0x3cbabd
    *v7 = v10;
    int64_t v11; // 0x3cbab2
    if (((v10 ^ v8) & (v10 ^ v9)) < 0) {
        int64_t v12 = function_3cba5b(); // 0x3cbac0
        v3 = v12;
        v11 = v12;
    } else {
        // 0x3cbab2
        v11 = v3;
    }
    char * v13 = (char *)(v11 + 6); // 0x3cbac3
    *v13 = *v13 + (char)v1;
    int64_t result = unknown_ffffffffabf1a6d3(); // 0x3cbacd
    char * v14 = (char *)(a2 + 105); // 0x3cbad2
    *v14 = *v14 + (char)v6;
    return result;
}

// Address range: 0x3cbade - 0x3cbb96
int64_t function_3cbade(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3cbade
    *(int32_t *)(a2 + 0xe7ece3c) = (int32_t)a3;
    uint64_t v1 = unknown_2875e5f1(); // 0x3cbaea
    int64_t v2; // 0x3cbade
    char * v3 = (char *)(v2 - 39); // 0x3cbaf0
    *v3 = *v3 + (char)(v1 / 256);
    char * v4 = (char *)v1; // 0x3cbaf3
    *v4 = *v4 - (char)v1;
    int64_t result = unknown_2a94dc00(); // 0x3cbafa
    __asm_frstor(*(int864_t *)&v2);
    int32_t * v5 = (int32_t *)(a3 + 47); // 0x3cbb02
    uint32_t v6 = *v5; // 0x3cbb02
    uint32_t v7 = v6 + (int32_t)a1; // 0x3cbb02
    *v5 = v7;
    if (v7 >= v6 && v7 != 0) {
        // 0x3cbb07
        __asm_out_134((int16_t)a3, (char)result);
        return result;
    }
    int64_t v8 = unknown_ffffffffa3fbcd4b() & 0x9d9e8236; // 0x3cbb4c
    int32_t * v9 = (int32_t *)(v2 - 0x2cfe17fa); // 0x3cbb51
    int64_t v10; // 0x3cbade
    *v9 = *v9 + (int32_t)v10;
    int64_t v11; // 0x3cbade
    int64_t v12 = (int64_t)&v11; // 0x3cbb57
    int32_t v13 = *(int32_t *)(v2 + 0x1c8b8ddb); // 0x3cbb5a
    int32_t * v14 = (int32_t *)(a4 - 14); // 0x3cbb62
    uint32_t v15 = *v14; // 0x3cbb62
    uint32_t v16 = v15 + (int32_t)v8; // 0x3cbb62
    *v14 = v16;
    int64_t v17 = v16 < v15 ? 0x2b0c : 0x2b0b; // 0x3cbb6e
    int64_t v18 = 2 * a4; // 0x3cbb73
    char * v19 = (char *)(a2 - 0x3acaac2d + 2 * v10); // 0x3cbb77
    *v19 = *v19 + 1;
    int64_t v20 = unknown_82a4c87(v13); // 0x3cbb81
    int32_t * v21 = (int32_t *)(((((a4 / 256 + v12) % 256 | v12 & 0xff00) - v17) / 256 % 256 | v2 & -256) - 51); // 0x3cbb86
    *v21 = *v21 - v13;
    uint32_t v22 = (int32_t)v18 & 30; // 0x3cbb89
    if (v22 != 0) {
        int32_t * v23 = (int32_t *)v20; // 0x3cbb89
        uint32_t v24 = *v23; // 0x3cbb89
        *v23 = v24 >> 32 - v22 | v24 << v22;
    }
    int16_t v25 = (int16_t)v20 & -0x17fb; // 0x3cbb93
    int16_t v26 = (int16_t)*(char *)(v18 & 0xfffffffe); // 0x3cbb93
    return v20 & 0x2f010000 | (int64_t)(v25 / v26 % 256) | (int64_t)(256 * (v25 % v26));
}

// Address range: 0x3cbbd3 - 0x3cbbd8
int64_t function_3cbbd3(void) {
    // 0x3cbbd3
    int64_t result; // 0x3cbbd3
    int64_t v1 = result;
    *(char *)v1 = (char)v1 - (char)(result / 256);
    return result;
}

// Address range: 0x3cbbd9 - 0x3cbc2e
int64_t function_3cbbd9(int64_t a1, uint64_t a2, uint64_t a3) {
    // 0x3cbbd9
    bool v1; // 0x3cbbd9
    int64_t v2 = v1; // 0x3cbbd9
    int64_t v3; // 0x3cbbd9
    uint64_t v4 = v3 + v2; // 0x3cbbd9
    int64_t v5 = a2 - v4; // 0x3cbbd9
    uint64_t v6 = (int64_t)(v1 ? v4 != -1 | v5 - v2 > a2 : v4 > a2); // 0x3cbbdc
    int32_t v7 = a1; // 0x3cbbe1
    *(int32_t *)0x5704a3e8 = *(int32_t *)0x5704a3e8 + v7;
    unsigned char v8 = *(char *)((v6 % 256 | v3 & -256) - 24) | (char)(a3 / 256); // 0x3cbbed
    int64_t v9 = 256 * (int64_t)v8 | a3 & -0xff01; // 0x3cbbed
    int32_t * v10 = (int32_t *)v5; // 0x3cbbf0
    uint32_t v11 = *v10; // 0x3cbbf0
    uint32_t v12 = v11 + v7; // 0x3cbbf0
    *v10 = v12;
    unsigned char v13 = v12 < v11 ? 18 : 17; // 0x3cbbf2
    int16_t v14 = v9; // 0x3cbbf4
    char v15 = __asm_insb(v14); // 0x3cbbf4
    char * v16 = (char *)a1; // 0x3cbbf4
    *v16 = v15;
    unknown_7fa450fe();
    int32_t v17 = *(int32_t *)(v9 + 0xe2bf440); // 0x3cbbfd
    char * v18 = (char *)((unknown_1a3aad09() & -0xff01 | (int64_t)&g10) + 5); // 0x3cbc0a
    *v18 = *v18 | v8;
    unknown_ffffffffeecebc16();
    *v16 = __asm_insb(v14);
    *(char *)0x20d54e01e8ec72a5 = (char)unknown_ffffffffe17acd21();
    int64_t v19; // 0x3cbbd9
    int64_t v20 = v19;
    *(int32_t *)v20 = *(int32_t *)&v19 - (int32_t)v20;
    return function_3cbc58(a1, (int64_t)((int32_t)v5 - v17 + (int32_t)(v12 < v11 | (char)v6 + (char)v3 < v13)), v9);
}

// Address range: 0x3cbc54 - 0x3cbc58
int64_t function_3cbc54(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3cbc54
    int64_t v1; // 0x3cbc54
    return v1 & -256 | (int64_t)__asm_in_135(3);
}

// Address range: 0x3cbc58 - 0x3cbc5a
int64_t function_3cbc58(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3cbc58
    int64_t result; // 0x3cbc58
    return result;
}

// Address range: 0x3cbc5e - 0x3cbc5f
int64_t function_3cbc5e(void) {
    // 0x3cbc5e
    int64_t result; // 0x3cbc5e
    return result;
}

// Address range: 0x3cbc68 - 0x3cbd03
int64_t function_3cbc68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3cbc68
    int64_t v1; // 0x3cbc68
    uint64_t v2 = v1;
    *(char *)v2 = (char)v2 - (char)(v2 / 256);
    unknown_1b97b677();
    int64_t v3; // 0x3cbc68
    int64_t v4 = a3 & 0xffffff00 | (int64_t)((char)a3 - *(char *)&v3); // 0x3cbc76
    v3 = v4;
    int64_t v5 = unknown_ffffffffc744cc84(v4); // 0x3cbc7e
    int32_t * v6 = (int32_t *)(v4 + 27); // 0x3cbc83
    *v6 = *v6 | -0x17295684;
    int32_t * v7 = (int32_t *)(v5 + 0x49328400); // 0x3cbc8a
    *v7 = *v7 + (int32_t)v5;
    char * v8 = (char *)(2 * v5 + 0x6ecd9cca); // 0x3cbc90
    *v8 = *v8 + (char)a5;
    if (llvm_ctpop_i8((char)((a5 ^ a2) / 256) + 116) % 2 == 0) {
        // 0x3cbcd9
        return v5 & -0xff01 | (int64_t)&g8;
    }
    // 0x3cbc9d
    return -0x6513fec3 * (int64_t)*(int32_t *)v5 & 0xffffffff;
}

// Address range: 0x3cbd35 - 0x3cbd36
int64_t function_3cbd35(void) {
    // 0x3cbd35
    int64_t result; // 0x3cbd35
    return result;
}

// Address range: 0x3cbd4e - 0x3cbd58
int64_t function_3cbd4e(void) {
    // 0x3cbd4e
    return unknown_6c972056();
}

// Address range: 0x3cbd90 - 0x3cbd92
int64_t function_3cbd90(void) {
    // 0x3cbd90
    return function_3cbd35();
}

// Address range: 0x3cbda5 - 0x3cbda6
int64_t function_3cbda5(void) {
    // 0x3cbda5
    int64_t result; // 0x3cbda5
    return result;
}

// Address range: 0x3cbde0 - 0x3cbdea
int64_t function_3cbde0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3cbde0
    int64_t v1; // 0x3cbde0
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x3cbde0
    return function_224be83((v2 ? -4 : 4) + a1);
}

// Address range: 0x3cbdf5 - 0x3cbdf6
int64_t function_3cbdf5(void) {
    // 0x3cbdf5
    int64_t result; // 0x3cbdf5
    return result;
}

// Address range: 0x3cbdf8 - 0x3cbdfd
int64_t function_3cbdf8(void) {
    // 0x3cbdf8
    return function_ffffffff92cbbfe5();
}

// Address range: 0x3cbe10 - 0x3cbe3d
int64_t function_3cbe10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = a4 - 1; // 0x3cbe10
    if (v1 != 0) {
        function_3cbda5();
    }
    int32_t v2 = __asm_in_136((int16_t)a3); // 0x3cbe12
    char v3 = *(char *)(a2 - 0x43fe1787 + 8 * a2); // 0x3cbe13
    int64_t v4 = v3 & (char)(v1 / 256); // 0x3cbe13
    char * v5 = (char *)(256 * v4 | v1 & -0xff01); // 0x3cbe1a
    int64_t v6; // 0x3cbe10
    *v5 = *v5 - (char)(v6 / 256);
    int32_t * v7 = (int32_t *)((v6 & -0xff01 | (int64_t)&g9) + 0x310147cc); // 0x3cbe27
    uint32_t v8 = *v7; // 0x3cbe27
    uint32_t v9 = v8 + (int32_t)(256 * (v4 - (int64_t)(v2 ^ 96)) & 0xff00 | v1 & 0xffff0000); // 0x3cbe27
    *v7 = v9;
    if (v9 < v8 || v9 == 0) {
        function_3cbdf5();
    }
    int32_t * v10 = (int32_t *)(a1 + 0x6c193a90); // 0x3cbe2f
    *v10 = *v10 - 2 * (int32_t)v6;
    return unknown_3a65793b();
}

// Address range: 0x3cbe7c - 0x3cbe84
int64_t function_3cbe7c(void) {
    // 0x3cbe7c
    return unknown_4315784();
}

// Address range: 0x3cbea0 - 0x3cbea1
int64_t function_3cbea0(void) {
    // 0x3cbea0
    int64_t result; // 0x3cbea0
    return result;
}

// Address range: 0x3cbea5 - 0x3cbf86
int64_t function_3cbea5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3cbea5
    int64_t result; // 0x3cbea5
    if (a4 == 1) {
        // 0x3cbea7
        return result;
    }
    int32_t * v1 = (int32_t *)(a3 - 0x2aadfe18 + 8 * a2); // 0x3cbed0
    uint32_t v2 = *v1; // 0x3cbed0
    int32_t v3 = a3; // 0x3cbed0
    uint32_t v4 = v2 + v3; // 0x3cbed0
    *v1 = v4;
    char * v5 = (char *)(a3 + 80); // 0x3cbed7
    char v6 = *v5; // 0x3cbed7
    char v7 = result / 256; // 0x3cbed7
    char v8 = v4 < v2; // 0x3cbed7
    char v9 = v6 + v7 + v8; // 0x3cbed7
    char v10 = v9 + v8; // 0x3cbed7
    *v5 = v9;
    if (((v10 ^ v6) & (v10 ^ v7)) >= 0) {
        // 0x3cbea7
        return result;
    }
    unsigned char v11 = (char)result; // 0x3cbedd
    char v12 = v11 - 88; // 0x3cbedd
    int64_t result2 = result & -256 | (int64_t)v12; // 0x3cbedd
    if (v12 < 0 == ((v12 ^ v11) & v11 + 40) < 0 == (v12 != 0)) {
        char * v13 = (char *)(a3 - 0x70fe17b6); // 0x3cbeaa
        *v13 = *v13 + (char)(a3 / 256);
        return result2;
    }
    uint32_t v14 = (int32_t)result2 + (int32_t)(v11 > 87) + *(int32_t *)result2; // 0x3cbee1
    uint64_t v15 = a4 - 2; // 0x3cbee3
    if (v15 != 0 != (v14 == 0)) {
        // 0x3cbee5
        *(char *)(int64_t)v14 = (char)(v15 / 256);
        *(char *)0x450745f0 = *(char *)0x450745f0 + (char)a1;
        char * v16 = (char *)(result - 0x43d27e00); // 0x3cbeef
        *v16 = *v16 + (char)(a3 / 256);
        return unknown_ffffffffec4856fb();
    }
    int32_t * v17 = (int32_t *)(result - 0x175fff60);
    bool v18; // 0x3cbea5
    int64_t v19 = v18 ? -1 : 1;
    uint32_t v20 = (int32_t)v15;
    uint32_t v21 = v20 % 32;
    uint64_t v22 = (int64_t)(33 - v21);
    uint32_t v23 = 32 - v21;
    int64_t v24 = unknown_ffffffffcf672f64() & 0xffffffff; // 0x3cbf63
    int64_t v25 = (int64_t)((int32_t)a1 + (int32_t)((v14 + 260 & 256) != 0) - *v17); // 0x3cbf64
    uint32_t v26 = (int32_t)result; // 0x3cbf6a
    int32_t v27 = v26 + v3; // 0x3cbf6a
    int32_t v28 = a2;
    int64_t v29 = v24; // 0x3cbf6c
    int64_t v30 = v25; // 0x3cbf6c
    int32_t v31 = v28; // 0x3cbf6c
    if (v27 >= v26 && v27 != 0) {
        uint32_t v32 = v27;
        *(char *)v25 = *(char *)v24;
        int32_t * v33; // 0x3cbf4c
        uint32_t v34; // 0x3cbf4c
        if (v21 != 0) {
            v33 = (int32_t *)(a2 + 0x5401e86e & 0xffffffff);
            v34 = *v33;
            *v33 = v34 >> v21 | (int32_t)(v28 > 0xabfe1791) << v23 | (int32_t)((int64_t)v34 << v22);
        }
        int64_t v35 = v25 + v19; // 0x3cbf4b
        int64_t v36 = v24 + v19; // 0x3cbf4b
        unknown_3a40e32d(v35, v36);
        int64_t v37 = unknown_ffffffffe9164a59(); // 0x3cbf53
        int64_t v38 = unknown_ffffffffcf672f64() & 0xffffffff; // 0x3cbf63
        int32_t v39 = *v17; // 0x3cbf64
        int64_t v40 = (int32_t)v35 + (int32_t)((v37 + 260 & 256) != 0) - v39; // 0x3cbf64
        int32_t v41 = v32 + v3; // 0x3cbf6a
        int32_t v42 = v36;
        v29 = v38;
        v30 = v40;
        v31 = v42;
        while (v41 >= v32 && v41 != 0) {
            int64_t v43 = v36;
            v32 = v41;
            uint32_t v44 = v42;
            *(char *)v40 = *(char *)v38;
            if (v21 != 0) {
                v33 = (int32_t *)(v43 + 0x5401e86e & 0xffffffff);
                v34 = *v33;
                *v33 = v34 >> v21 | (int32_t)(v44 > 0xabfe1791) << v23 | (int32_t)((int64_t)v34 << v22);
            }
            // 0x3cbf58
            v35 = v40 + v19;
            v36 = v38 + v19;
            unknown_3a40e32d(v35, v36);
            v37 = unknown_ffffffffe9164a59();
            v38 = unknown_ffffffffcf672f64() & 0xffffffff;
            v39 = *v17;
            v40 = (int32_t)v35 + (int32_t)((v37 + 260 & 256) != 0) - v39;
            v41 = v32 + v3;
            v42 = v36;
            v29 = v38;
            v30 = v40;
            v31 = v42;
        }
    }
    // 0x3cbf6e
    *(int32_t *)v30 = v31;
    int64_t v45 = v30 + (v18 ? -4 : 4); // 0x3cbf70
    int32_t * v46 = (int32_t *)(int64_t)(*(int32_t *)v45 | v20); // 0x3cbf77
    *v46 = *v46 + (int32_t)v45;
    return unknown_b152985(v45, v29);
}

// Address range: 0x3cbfb4 - 0x3cbfc8
int64_t function_3cbfb4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3cbfb4
    int64_t result; // 0x3cbfb4
    int64_t v1 = 2 * result; // 0x3cbfb4
    char * v2 = (char *)(result + 0x1e80049 + v1); // 0x3cbfb4
    char v3 = result; // 0x3cbfb4
    *v2 = *v2 + v3;
    int64_t v4; // 0x3cbfb4
    *(int32_t *)a1 = *(int32_t *)&v4;
    char * v5 = (char *)v1; // 0x3cbfbc
    *v5 = *v5 + v3;
    int64_t v6; // 0x3cbfb4
    unsigned char v7 = *(char *)&v6; // 0x3cbfbf
    char v8 = result; // 0x3cbfbf
    unsigned char v9 = v7 + v8; // 0x3cbfbf
    *(char *)a3 = v9;
    char * v10 = (char *)(a3 - 0x36c4e7ae); // 0x3cbfc1
    *v10 = *v10 + v8 + (char)(v9 < v7);
    return result;
}

// Address range: 0x3cbfdf - 0x3cbffd
int64_t function_3cbfdf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3cbfdf
    __asm_sti();
    unknown_3b451ff0();
    return __asm_hlt();
}

// Address range: 0x3cc01d - 0x3cc02d
int64_t function_3cc01d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3cc01d
    int64_t v1; // 0x3cc01d
    uint64_t v2 = v1;
    char v3 = *(char *)(v1 - 0x5df5e049); // 0x3cc01f
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a3;
    return (256 * (int64_t)((char)(v2 / 256) - v3) | v2 & 0xffff00ff) - v1 & 0xffffff7e;
}

// Address range: 0x3cc146 - 0x3cc147
int64_t function_3cc146(void) {
    // 0x3cc146
    int64_t result; // 0x3cc146
    return result;
}

// Address range: 0x3cc152 - 0x3cc156
int64_t function_3cc152(void) {
    // 0x3cc152
    return function_3cc146();
}

// Address range: 0x3cc160 - 0x3cc16d
int64_t function_3cc160(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3cc160
    int64_t result; // 0x3cc160
    return result;
}

// Address range: 0x3cc173 - 0x3cc178
int64_t function_3cc173(void) {
    // 0x3cc173
    return function_593bfa();
}

// Address range: 0x3cc1aa - 0x3cc1bd
int64_t function_3cc1aa(void) {
    // 0x3cc1aa
    return unknown_ffffffff97c3a5b5(0x475afd16);
}

// Address range: 0x3cc1bd - 0x3cc1f5
int64_t function_3cc1bd(int64_t a1, int64_t a2) {
    // 0x3cc1bd
    int64_t v1; // 0x3cc1bd
    int64_t v2 = v1 & -256 | (int64_t)*(char *)0x7db3f68aaad8619f; // 0x3cc1c4
    int32_t * v3 = (int32_t *)v2; // 0x3cc1d9
    uint32_t v4 = *v3; // 0x3cc1d9
    uint32_t v5 = (int32_t)v2; // 0x3cc1d9
    int32_t v6 = v4 + v5; // 0x3cc1d9
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x3cc1d9
    *v3 = v6;
    int64_t result = v2 & -0xff01 | 256 * (64 * (int64_t)(v6 == 0) | (int64_t)(v6 < v4) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v5 % 16 + v4 % 16 > 15) | 4 * (int64_t)(v7 % 2 == 0)) | 512; // 0x3cc1db
    int32_t * v8 = (int32_t *)result; // 0x3cc1f0
    *v8 = *v8 + (int32_t)result;
    return result;
}

// Address range: 0x3cc1f5 - 0x3cc210
int64_t function_3cc1f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3cc1f5
    int64_t result; // 0x3cc1f5
    *(int32_t *)a1 = (int32_t)(result | result) + (int32_t)result;
    int64_t v1; // 0x3cc1f5
    __asm_outsb((int16_t)a3, *(char *)&v1);
    return result;
}

// Address range: 0x3cc21d - 0x3cc21e
int64_t function_3cc21d(int64_t a1) {
    // 0x3cc21d
    int64_t result; // 0x3cc21d
    return result;
}

// Address range: 0x3cc25e - 0x3cc261
int64_t function_3cc25e(int64_t a1, int64_t a2) {
    // 0x3cc25e
    bool v1; // 0x3cc25e
    *(char *)a1 = (char)v1;
    int64_t result; // 0x3cc25e
    return result;
}

// Address range: 0x3cc28e - 0x3cc293
int64_t function_3cc28e(void) {
    // 0x3cc28e
    return function_ffffffffe793a149();
}

// Address range: 0x3cc2ad - 0x3cc2ae
int64_t function_3cc2ad(int64_t a1) {
    // 0x3cc2ad
    int64_t result; // 0x3cc2ad
    return result;
}

// Address range: 0x3cc2b7 - 0x3cc2b8
int64_t function_3cc2b7(void) {
    // 0x3cc2b7
    int64_t result; // 0x3cc2b7
    return result;
}

// Address range: 0x3cc2bf - 0x3cc2c1
int64_t function_3cc2bf(void) {
    // 0x3cc2bf
    return function_3cc2b7();
}

// Address range: 0x3cc2cf - 0x3cc2d2
int64_t function_3cc2cf(void) {
    // 0x3cc2cf
    int64_t result; // 0x3cc2cf
    return result;
}

// Address range: 0x3cc32b - 0x3cc3c3
int64_t function_3cc32b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x3cc32b
    int64_t v3; // 0x3cc32b
    int64_t v4; // 0x3cc32b
    int64_t v5; // 0x3cc32b
    int64_t v6; // 0x3cc32b
    bool v7; // 0x3cc32b
    if (a4 == 1) {
        char v8 = v6; // 0x3cc32d
        if (llvm_ctpop_i8(v8 - 1) % 2 == 0) {
            // 0x3cc336
            *(int32_t *)a1 = (int32_t)&g1;
            *(char *)v5 = 0;
            int64_t v9 = v5; // bp-16, 0x3cc34a
            int32_t * v10 = (int32_t *)(v5 + 0x61aaf3e4);
            *v10 = *v10 | (int32_t)(int64_t)&v9;
            *(char *)0x2fd86263 = *(char *)0x2fd86263 + (char)(v6 / 256);
            return v5 + 0x41fa9f75 & 0xffffffff;
        }
        int64_t v11 = (v7 ? -1 : 1) + a1; // 0x3cc363
        int64_t v12 = __asm_iretd(v11); // 0x3cc364
        v5 = v12;
        v2 = v11;
        v3 = v12;
        v4 = v12;
        if (((v8 - (char)a1 ^ v8) & (char)(v6 ^ a1)) < 0) {
            goto lab_0x3cc38f;
        } else {
            goto lab_0x3cc367;
        }
    } else {
        int64_t v13 = __asm_iretd(a1); // 0x3cc364
        v5 = v13;
        v2 = a1;
        v3 = v13;
        v4 = v13;
        if (v7) {
            goto lab_0x3cc38f;
        } else {
            goto lab_0x3cc367;
        }
    }
  lab_0x3cc38f:
    // 0x3cc38f
    *(int32_t *)v4 = 0;
    int32_t * v14 = (int32_t *)(v1 - 48); // 0x3cc391
    *v14 = 16 * *v14;
    __asm_outsb((int16_t)a3, *(char *)&v1);
    int64_t result = __asm_sti(); // 0x3cc398
    *(char *)result = *(char *)&v5 - (char)result;
    return result;
  lab_0x3cc367:;
    unsigned char v15 = (char)(v3 / 256) - *(char *)(v2 - 103); // 0x3cc367
    unsigned char v16 = llvm_ctpop_i8(v15); // 0x3cc367
    int64_t result2 = 256 * (int64_t)v15 | v3 & -0xff01; // 0x3cc367
    v5 = result2;
    if (v16 % 2 != 0) {
        // 0x3cc36c
        return result2;
    }
    // 0x3cc3b0
    __asm_hlt();
    unknown_ffffffffbd6ff8b9();
    return (v6 & 0xffffffff | 0x100000000 * a3) / (a2 & 0xffffffff) & 0xffffffff;
}

// Address range: 0x3cc3cf - 0x3cc3e2
int64_t function_3cc3cf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3cc3cf
    int64_t v1; // 0x3cc3cf
    *(int16_t *)(v1 + 0x3d00d81e) = (int16_t)v1;
    int64_t v2; // 0x3cc3cf
    *(int32_t *)(v1 & 0xffffffff) = *(int32_t *)&v2 + (int32_t)a3;
    return a3 & 0xffffffff;
}

// Address range: 0x3cc400 - 0x3cc40a
int64_t function_3cc400(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_691bcf06(a1, a2, a3, a4); // 0x3cc400
    int64_t v1; // 0x3cc400
    *(char *)a4 = (char)v1 + (char)a4;
    return result;
}

// Address range: 0x4debf9 - 0x4debfb
int64_t function_4debf9(void) {
    // 0x4debf9
    int64_t result; // 0x4debf9
    bool v1; // 0x4debf9
    if (v1) {
        result = function_4debc0();
    }
    // 0x4debfb
    return result;
}

// Address range: 0x4dec7e - 0x4dec81
int64_t function_4dec7e(void) {
    // 0x4dec7e
    int64_t result; // 0x4dec7e
    return result;
}

// Address range: 0x4dec81 - 0x4dec87
int64_t function_4dec81(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4dec81
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x4dec81
    return result;
}

// Address range: 0x4dec87 - 0x4dec8d
int64_t function_4dec87(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4dec87
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x4dec87
    return result;
}

// Address range: 0x4decaa - 0x4decb1
int64_t function_4decaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4decaa
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x4decaa
    return result;
}

// Address range: 0x4dece6 - 0x4ded78
int64_t function_4dece6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4dece6
    __asm_frstor(*(int864_t *)(a3 - 77));
    int64_t v1; // 0x4dece6
    int64_t v2 = a3 - 15; // 0x4ded2b
    int32_t * v3 = (int32_t *)v2; // 0x4ded2b
    int32_t v4 = *v3; // 0x4ded2b
    int32_t v5 = v1; // 0x4ded2b
    int32_t v6 = v4 + v5; // 0x4ded2b
    *v3 = v6;
    int64_t result; // 0x4dece6
    if (v6 < 1) {
        // 0x4ded78
        return result;
    }
    if (((v6 ^ v4) & (v6 ^ v5)) >= 0) {
        // 0x4ded78
        return result;
    }
    char v7 = v1 / 256; // 0x4ded32
    char v8 = *(char *)v2; // 0x4ded32
    char v9 = v8 + v7; // 0x4ded32
    int64_t result2 = 256 * (int64_t)v9 | v1 & -0xff01; // 0x4ded32
    if (v9 < 1 || ((v9 ^ v7) & (v9 ^ v8)) >= 0) {
        // 0x4ded78
        return result2;
    }
    int32_t v10 = v6 + v5; // 0x4ded39
    if (v10 < 1 || ((v10 ^ v5) & (v10 ^ v6)) >= 0) {
        // 0x4ded78
        return result2;
    }
    char v11 = v1; // 0x4ded40
    char v12 = v11 + 98; // 0x4ded40
    int64_t result3 = __asm_int1(); // 0x4ded42
    if (v12 < 1 || (v12 & (v11 ^ -128)) >= 0) {
        // 0x4ded78
        return result3;
    }
    // 0x4ded47
    return result3 + 0x487ef162 & 0xffffffff;
}
