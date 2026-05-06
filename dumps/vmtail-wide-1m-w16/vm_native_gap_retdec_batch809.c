/*
 * Targeted RetDec C for native executable gap queue batch 809.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x360fbe-0x3611be rank=- name=- kind=- bytes=- uncovered=-
 *   0x39e514-0x39e714 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39e714-0x39e914 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39e914-0x39eb14 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39ed14-0x39ef14 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d4ca7-0x3d4ea7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d4ea7-0x3d50a7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3d50a7-0x3d52a7 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_17a5215();
int64_t function_2e462f6f();
int64_t function_360f74();
int64_t function_360fbe(void);
int64_t function_360fee(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_36101b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36102d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36106a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_361085(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3610a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3610e7(int64_t a1);
int64_t function_361120(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_361161(void);
int64_t function_361163(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_361197(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3611b0(void);
int64_t function_39e514(int64_t a1, int64_t a2);
int64_t function_39e51d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39e5c9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39e5ec(void);
int64_t function_39e5f4(void);
int64_t function_39e61b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39e67e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39e6af(void);
int64_t function_39e6e8(void);
int64_t function_39e74c(int64_t a1);
int64_t function_39e751(void);
int64_t function_39e7de(int64_t a1);
int64_t function_39e802(int64_t a1);
int64_t function_39e846(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39e8d2(int64_t a1);
int64_t function_39e97d(void);
int64_t function_39e9a8(int64_t a1);
int64_t function_39e9f3(void);
int64_t function_39ea15(void);
int64_t function_39ea1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_39ed14(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39ed31(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39ed5b(int64_t a1);
int64_t function_39ed68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6, int64_t a7);
int64_t function_39ee09(void);
int64_t function_39ee0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39ee0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39ee82(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3d39e667();
int64_t function_3d4c9e();
int64_t function_3d4ca7(int64_t a1, int64_t a2);
int64_t function_3d4cc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d4cfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d4dc6(void);
int64_t function_3d4e28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d4e3b(void);
int64_t function_3d4e50(void);
int64_t function_3d4e99(void);
int64_t function_3d4f0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d4f46(void);
int64_t function_3d4f7f(void);
int64_t function_3d4f98(void);
int64_t function_3d4fd8(int64_t a1);
int64_t function_3d4fdf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3d5041(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d506f(int64_t a1);
int64_t function_3d50ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3d50c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3d5106(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_3d51aa(void);
int64_t function_3d51e5(void);
int64_t function_693f368e();
int64_t function_75f15b90();
int64_t function_ffffffffb04a914d();
int64_t unknown_17310b8();
int64_t unknown_255ee852();
int64_t unknown_26364cf1();
int64_t unknown_26f6044();
int64_t unknown_3a517ea9();
int64_t unknown_402c5f20();
int64_t unknown_4cb87b1();
int64_t unknown_54f43951();
int64_t unknown_5c02f698();
int64_t unknown_60cb92bf();
int64_t unknown_6aad11d();
int64_t unknown_7bcb14a2();
int64_t unknown_888da0();
int64_t unknown_ffffffffa1128b31();
int64_t unknown_ffffffffa526c2ec();
int64_t unknown_ffffffffb96ed425();
int64_t unknown_ffffffffca6c5c6a();
int64_t unknown_ffffffffe8447525();
int64_t unknown_ffffffffe9339bb2();
int64_t unknown_ffffffffebbf58c1();

// Address range: 0x360fbe - 0x360fc1
int64_t function_360fbe(void) {
    // 0x360fbe
    int64_t result; // 0x360fbe
    return result;
}

// Address range: 0x360fee - 0x361019
int64_t function_360fee(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x360fee
    int64_t v1; // 0x360fee
    bool v2; // 0x360fee
    if (a4 != 1 && !v2) {
        v1 = function_360f74();
    }
    uint64_t v3 = v1;
    unsigned char v4 = *(char *)-0x682173c0fec2c9fc; // 0x360ff3
    char * v5 = (char *)(a1 + 28); // 0x360ffc
    int64_t v6; // 0x360fee
    *v5 = *v5 + (char)((uint64_t)v6 / 256);
    char * v7 = (char *)(a2 + 0x1e8080b); // 0x360fff
    unsigned char v8 = *v7; // 0x360fff
    unsigned char v9 = (char)(a3 / 256); // 0x360fff
    *v7 = v8 - v9;
    char v10 = *(char *)(a2 + 72); // 0x361005
    *(int32_t *)a1 = (int32_t)(v3 & 0xffff0000 | (int64_t)v4 | 256 * (int64_t)((char)(v8 < v9) + (char)(v3 / 256) - v10));
    int64_t v11 = (v2 ? -4 : 4) + a1; // 0x361008
    __asm_int3(v11);
    __asm_wait();
    return function_361085(v11, a2, a3);
}

// Address range: 0x36101b - 0x36102d
int64_t function_36101b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffb96ed425(); // 0x36101b
    *(char *)a1 = __asm_insb((int16_t)a3);
    char v2 = __asm_in(-2); // 0x361021
    int32_t * v3 = (int32_t *)(a3 + 0x40c582); // 0x361023
    *v3 = *v3 / 0x20000000;
    return v1 & -256 | (int64_t)v2;
}

// Address range: 0x36102d - 0x361053
int64_t function_36102d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x36102d
    int64_t v1; // 0x36102d
    int32_t v2 = *(int32_t *)(v1 + 0x683ffedf) | (int32_t)a1; // 0x36102e
    unsigned char v3 = llvm_ctpop_i8((char)v2); // 0x36102e
    int64_t v4 = v2; // 0x36102e
    bool v5; // 0x36102d
    int64_t v6 = 0x4000 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 64 * (int64_t)(v2 == 0) | 128 * (int64_t)(v2 < 0) | 4 * (int64_t)(v3 % 2 == 0) | 2; // bp-8, 0x361034
    unknown_26f6044(v2);
    int64_t * v7 = (int64_t *)(v1 - 0x23e24a92); // 0x36103a
    *v7 = *v7 | v1;
    int64_t result = __asm_hlt(v4, a2); // 0x361041
    int32_t * v8 = (int32_t *)(8 * v1 - 0x8ebec7e + v4); // 0x361047
    *v8 = *v8 + (int32_t)(int64_t)&v6;
    int64_t v9; // 0x36102d
    *(char *)a3 = *(char *)&v9 | (char)a3;
    return result;
}

// Address range: 0x36106a - 0x36107c
int64_t function_36106a(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 - 119); // 0x36106c
    *v1 = *v1 - 86;
    return a3 & 0xffffffff;
}

// Address range: 0x361085 - 0x3610a4
int64_t function_361085(int64_t a1, int64_t a2, int64_t a3) {
    // 0x361085
    int64_t v1; // 0x361085
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t v3 = __asm_iretd() + 0xd9567f53; // 0x36108e
    int64_t v4; // 0x361085
    *(char *)a2 = *(char *)&v4 + (char)v1;
    return (int64_t)(*(int32_t *)(v3 & 0xffffffff) ^ (int32_t)v3);
}

// Address range: 0x3610a5 - 0x3610c3
int64_t function_3610a5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3610a5
    __asm_int1();
    int64_t result = unknown_17310b8(); // 0x3610b2
    int32_t * v1 = (int32_t *)(a4 + 30); // 0x3610b7
    *v1 = -*v1;
    int32_t * v2 = (int32_t *)(a3 - 0x42b57481); // 0x3610ba
    *v2 = *v2 + 1;
    return result;
}

// Address range: 0x3610e7 - 0x3610ea
int64_t function_3610e7(int64_t a1) {
    // 0x3610e7
    int64_t result; // 0x3610e7
    return result;
}

// Address range: 0x361120 - 0x361129
int64_t function_361120(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x361120
    int64_t v1; // 0x361120
    *(char *)a4 = (char)v1 + 44;
    return function_361163(a1, a2, a3, a4);
}

// Address range: 0x361161 - 0x361163
int64_t function_361161(void) {
    // 0x361161
    int64_t result; // 0x361161
    __asm_out(-67, (char)result);
    return result;
}

// Address range: 0x361163 - 0x361192
int64_t function_361163(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x361163
    uint128_t v3 = 0x8000000000000000 * (int128_t)a3 | (int128_t)(v2 & -256); // 0x361165
    uint128_t v4 = (int128_t)(uint64_t)v2; // 0x361165
    int64_t v5 = (int64_t)&v1; // 0x361169
    __asm_out(-118, (char)v5);
    v1 = 0x100000000000000 * (v1 - v5) >> 56;
    int32_t * v6 = (int32_t *)((int64_t)(v3 % v4) + 103); // 0x361173
    *v6 = *v6 | (int32_t)a1;
    __asm_hlt(a1, a2);
    *(char *)-0x100bb777 = *(char *)-0x100bb777 + (char)(v2 / 256);
    int32_t v7 = *(int32_t *)0x6899e3f9; // 0x36118c
    *(int32_t *)0x6899e3f9 = -8 - (int32_t)(v3 / v4) + v7;
    return v2 & 0xffffffff;
}

// Address range: 0x361197 - 0x3611ac
int64_t function_361197(int64_t a1, int64_t a2, int64_t a3) {
    // 0x361197
    bool v1; // 0x361197
    *(char *)a3 = (char)v1;
    int64_t result = unknown_888da0(); // 0x36119a
    char * v2 = (char *)result; // 0x3611a4
    *v2 = *v2 - 54;
    int64_t v3; // 0x361197
    *(char *)a1 = *(char *)&v3;
    return result;
}

// Address range: 0x3611b0 - 0x3611b3
int64_t function_3611b0(void) {
    // 0x3611b0
    int64_t result; // 0x3611b0
    return result;
}

// Address range: 0x39e514 - 0x39e517
int64_t function_39e514(int64_t a1, int64_t a2) {
    // 0x39e514
    *(char *)a2 = 0;
    int64_t result; // 0x39e514
    return result;
}

// Address range: 0x39e51d - 0x39e53d
int64_t function_39e51d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x39e51d
    int64_t result; // 0x39e51d
    if ((char)result == (char)a3) {
        // 0x39e53e
        return result;
    }
    int32_t * v1 = (int32_t *)(result + 0x13d00b0); // 0x39e537
    *v1 = *v1 ^ (int32_t)result;
    return a3 & 0xffffffff;
}

// Address range: 0x39e5c9 - 0x39e5d7
int64_t function_39e5c9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x39e5c9
    int64_t result; // 0x39e5c9
    __asm_rcl(*(char *)(result & 0xff00 | a3));
    return result;
}

// Address range: 0x39e5ec - 0x39e5f0
int64_t function_39e5ec(void) {
    // 0x39e5ec
    int64_t result; // 0x39e5ec
    return result;
}

// Address range: 0x39e5f4 - 0x39e5ff
int64_t function_39e5f4(void) {
    // 0x39e5f4
    return function_3d39e667();
}

// Address range: 0x39e61b - 0x39e636
int64_t function_39e61b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x39e61b
    int64_t result; // 0x39e61b
    bool v1; // 0x39e61b
    if (v1) {
        char v2 = *(char *)0x4aafe137; // 0x39e630
        *(char *)0x4aafe137 = v2 + (char)((uint64_t)result / 256);
        return result;
    }
    // 0x39e61d
    return result;
}

// Address range: 0x39e67e - 0x39e68f
int64_t function_39e67e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39e67e
    __asm_sti();
    unsigned char v1 = (unsigned char)(char)a4 % 32; // 0x39e684
    if (v1 != 0) {
        char * v2 = (char *)(a3 + 0x4245cb7e); // 0x39e684
        *v2 = *v2 << v1;
    }
    // 0x39e68c
    return a1 & 0xffffffff;
}

// Address range: 0x39e6af - 0x39e6b0
int64_t function_39e6af(void) {
    // 0x39e6af
    int64_t result; // 0x39e6af
    return result;
}

// Address range: 0x39e6e8 - 0x39e6f2
int64_t function_39e6e8(void) {
    // 0x39e6e8
    unknown_ffffffffebbf58c1();
    return function_75f15b90();
}

// Address range: 0x39e74c - 0x39e750
int64_t function_39e74c(int64_t a1) {
    // 0x39e74c
    int64_t v1; // 0x39e74c
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x39e751 - 0x39e758
int64_t function_39e751(void) {
    // 0x39e751
    int64_t result; // 0x39e751
    return result;
}

// Address range: 0x39e7de - 0x39e7e8
int64_t function_39e7de(int64_t a1) {
    // 0x39e7de
    int64_t v1; // 0x39e7de
    return v1 | 24;
}

// Address range: 0x39e802 - 0x39e805
int64_t function_39e802(int64_t a1) {
    // 0x39e802
    int64_t result; // 0x39e802
    return result;
}

// Address range: 0x39e846 - 0x39e8c2
int64_t function_39e846(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39e846
    bool v1; // 0x39e846
    int64_t v2 = v1 ? -4 : 4; // 0x39e852
    int64_t v3; // 0x39e846
    char * v4 = (char *)(v3 + 0x12450a88 & 0xffffffff); // 0x39e85a
    *v4 = *v4 - 24;
    *(int32_t *)0xbe598400 = *(int32_t *)0xbe598400 + (int32_t)v3;
    char v5 = *(char *)(a3 - 0x1714e44f); // 0x39e868
    int32_t * v6 = (int32_t *)((a4 & -256 | (int64_t)(v5 + (char)a4)) - 0xb5ad10b); // 0x39e86e
    *v6 = *v6 + (int32_t)v3;
    *(int32_t *)0x7901e8e9 = (int32_t)v3 + 0x35f39498;
    int64_t v7 = v1 ? 0x7901e8e5 : 0x7901e8ed; // 0x39e87a
    int32_t * v8 = (int32_t *)(v7 - 121); // 0x39e87f
    *v8 = *v8 + 0x5e596800;
    *(char *)0xf05be675 = *(char *)0xf05be675 - 117;
    int64_t result = unknown_7bcb14a2(v7); // 0x39e89c
    int64_t v9 = 0xf05be675; // 0x39e89c
    uint64_t v10 = result;
    unsigned char v11 = *(char *)(v10 + 5); // 0x39e8a1
    char * v12 = (char *)((v10 % 256 * (int64_t)v11 | v10 & -0x10000) - 53); // 0x39e8a4
    *v12 = *v12 - (char)v9;
    __asm_wait();
    result = unknown_4cb87b1();
    int64_t v13; // 0x39e846
    unsigned char v14 = *(char *)(a2 + 0x947af9d + v2) + (char)(v13 / 256); // 0x39e8b0
    v9--;
    v13 = 256 * (int64_t)v14;
    while (v9 != 0 && v14 != 0) {
        // 0x39e8a1
        v10 = result;
        v11 = *(char *)(v10 + 5);
        v12 = (char *)((v10 % 256 * (int64_t)v11 | v10 & -0x10000) - 53);
        *v12 = *v12 - (char)v9;
        __asm_wait();
        result = unknown_4cb87b1();
        v14 = *(char *)(a2 + 0x947af9d + v2) + (char)(v13 / 256);
        v9--;
        v13 = 256 * (int64_t)v14;
    }
    // 0x39e8b9
    return result;
}

// Address range: 0x39e8d2 - 0x39e8d3
int64_t function_39e8d2(int64_t a1) {
    // 0x39e8d2
    int64_t result; // 0x39e8d2
    return result;
}

// Address range: 0x39e97d - 0x39e97e
int64_t function_39e97d(void) {
    // 0x39e97d
    int64_t result; // 0x39e97d
    return result;
}

// Address range: 0x39e9a8 - 0x39e9a9
int64_t function_39e9a8(int64_t a1) {
    // 0x39e9a8
    int64_t result; // 0x39e9a8
    return result;
}

// Address range: 0x39e9f3 - 0x39e9fd
int64_t function_39e9f3(void) {
    // 0x39e9f3
    int64_t v1; // 0x39e9f3
    int64_t v2 = v1;
    *(char *)(v2 - 0x7d7ba9ff) = (char)v2;
    int64_t result; // 0x39e9f3
    bool v3; // 0x39e9f3
    if (!v3) {
        result = function_39e97d();
    }
    // 0x39e9fc
    return result;
}

// Address range: 0x39ea15 - 0x39ea16
int64_t function_39ea15(void) {
    // 0x39ea15
    int64_t result; // 0x39ea15
    return result;
}

// Address range: 0x39ea1f - 0x39eb13
int64_t function_39ea1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x39ea1f
    int64_t v1; // 0x39ea1f
    int64_t v2 = v1 & 0xffffffff; // 0x39ea1f
    uint64_t v3 = v2 * v2; // 0x39ea1f
    bool v4; // 0x39ea1f
    if (!v4) {
        // 0x39ea23
        __asm_out(-67, (char)v3);
        return a6 + 0xdce4bdf9 & 0xffffffff;
    }
    if (v3 > 0xffffffff == !v4) {
        function_39ea15();
    }
    int32_t * v5 = (int32_t *)(v1 - 0x4b5a01fd); // 0x39ea57
    int32_t v6 = *v5 & (int32_t)v1; // 0x39ea57
    *v5 = v6;
    int64_t v7 = a4 - 1; // 0x39ea5d
    if (v7 != 0 != (v6 == 0)) {
        // 0x39ea5f
        return a2 & 0xffffffff;
    }
    unsigned char v8 = (char)a2 & 117; // 0x39eadd
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x39eadd
    int64_t v10 = a2 & 0xffffff00 | (int64_t)v8; // 0x39eadd
    int64_t v11; // 0x39ea1f
    if (v9 % 2 != 0) {
        uint32_t result = (int32_t)v10 - *(int32_t *)(v1 + 0x68caa3); // 0x39eb05
        *(char *)v11 = *(char *)&v11 + (char)(result / 256);
        return result;
    }
    uint32_t v12 = *(int32_t *)(v11 - 112); // 0x39eae1
    int64_t result2 = v10; // 0x39eae4
    if (v7 != 0) {
        uint32_t v13 = (int32_t)a1; // 0x39eae1
        int32_t v14 = v13 - v12; // 0x39eae1
        unsigned char v15 = llvm_ctpop_i8((char)v14); // 0x39eae1
        result2 = 256 * (64 * (int64_t)(v14 == 0) | (int64_t)(v12 > v13) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(v13 % 16 - v12 % 16 > 15) | 4 * (int64_t)(v15 % 2 == 0)) | unknown_ffffffffa526c2ec() & -0xff01 | 512;
    }
    // 0x39eaf1
    return result2;
}

// Address range: 0x39ed14 - 0x39ed2f
int64_t function_39ed14(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = ((int32_t)a4 | (int32_t)(char)&g2) % 32; // 0x39ed18
    char v2; // 0x39ed14
    int64_t v3; // 0x39ed14
    if (v1 == 0) {
        // 0x39ed14
        v2 = v3;
    } else {
        int32_t * v4 = (int32_t *)(v3 & ((uint64_t)v3 / 256 | -256)); // 0x39ed18
        uint32_t v5 = *v4; // 0x39ed18
        *v4 = v5 >> 32 - v1 | v5 << v1;
        int64_t v6; // 0x39ed14
        v2 = *(char *)&v6;
    }
    int64_t result = unknown_ffffffffe8447525(); // 0x39ed1f
    int32_t * v7 = (int32_t *)(a2 - 0x50628fba); // 0x39ed29
    *v7 = *v7 + (int32_t)(a1 & 0xffffff00 | (int64_t)v2);
    return result;
}

// Address range: 0x39ed31 - 0x39ed5b
int64_t function_39ed31(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39ed31
    int64_t v1; // 0x39ed31
    unsigned char v2 = *(char *)(v1 - 24); // 0x39ed33
    int32_t * v3 = (int32_t *)(a1 - 99); // 0x39ed36
    int16_t v4; // 0x39ed31
    *v3 = (256 * (int32_t)v2 | (int32_t)(v4 % 256)) + *v3;
    char * v5 = (char *)(a3 + 62 + 8 * v1); // 0x39ed3b
    *v5 = *v5 + (char)v4;
    char * v6 = (char *)(a4 - 0x25e1c263); // 0x39ed44
    *v6 = *v6 + 44;
    bool v7; // 0x39ed31
    unknown_54f43951((v7 ? -4 : 4) + a1);
    return __asm_wait() & -256 | (int64_t)*(char *)-0x6eeb0a42fe179e00;
}

// Address range: 0x39ed5b - 0x39ed68
int64_t function_39ed5b(int64_t a1) {
    // 0x39ed5b
    int64_t v1; // 0x39ed5b
    int64_t v2 = v1;
    unsigned char v3 = *(char *)-0x238d095688fe17eb; // 0x39ed5d
    return v2 & -0x10000 | (int64_t)(256 * ((int16_t)v2 % ((int16_t)((uint64_t)v1 / 256) % 256))) | (int64_t)v3;
}

// Address range: 0x39ed68 - 0x39eded
int64_t function_39ed68(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int32_t a5, int64_t a6, int64_t a7) {
    int32_t v1 = a5;
    uint32_t v2 = *(int32_t *)-0x56fe1777ff5ffedd; // 0x39ed6f
    int64_t result = v2; // 0x39ed6f
    if ((int32_t)(int64_t)&v1 < 1) {
        char * v3 = (char *)result; // 0x39edeb
        *v3 = *v3 - (char)v2;
        return result;
    }
    int64_t v4 = (((int64_t)a5 & (int64_t)&g1) == 0 ? 4 : -4) + a1; // 0x39ed7b
    char * v5 = (char *)result; // 0x39ed7c
    char v6 = *v5 - (char)v2; // 0x39ed7c
    *v5 = v6;
    int64_t v7 = a4 - 1; // 0x39ed7e
    if (v7 != 0 != (v6 == 0)) {
        int32_t * v8 = (int32_t *)result; // 0x39ed83
        *v8 = *v8 + (int32_t)v4;
        return result;
    }
    int32_t * v9 = (int32_t *)(result + 19); // 0x39ed97
    *v9 = *v9 + (int32_t)a2;
    if (v7 == 1) {
        // 0x39eda3
        return unknown_3a517ea9(v4);
    }
    // 0x39eda9
    *v5 = *v5 - 74;
    return result;
}

// Address range: 0x39ee09 - 0x39ee0b
int64_t function_39ee09(void) {
    // 0x39ee09
    int64_t v1; // 0x39ee09
    return function_39ee0e(v1, v1, v1, v1);
}

// Address range: 0x39ee0c - 0x39ee0e
int64_t function_39ee0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39ee0c
    int64_t result; // 0x39ee0c
    *(int32_t *)a4 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x39ee0e - 0x39ee81
int64_t function_39ee0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39ee0e
    int64_t result2; // 0x39ee0e
    *(char *)a3 = (char)((uint64_t)result2 / 256);
    bool v1; // 0x39ee0e
    if (!v1) {
        // 0x39ee13
        unknown_6aad11d();
        int64_t result = unknown_402c5f20(); // 0x39ee1a
        int64_t v2; // 0x39ee0e
        __asm_outsb((int16_t)a3, *(char *)&v2);
        return result;
    }
    unsigned char v3 = (char)a4 % 32; // 0x39ee7b
    if (v3 != 0) {
        char * v4 = (char *)(a4 - 0x63d491a1); // 0x39ee7b
        unsigned char v5 = *v4; // 0x39ee7b
        *v4 = v5 >> 8 - v3 | v5 << v3;
    }
    return result2;
}

// Address range: 0x39ee82 - 0x39ef0f
int64_t function_39ee82(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x39ee82
    int64_t v1; // 0x39ee82
    bool v2; // 0x39ee82
    if (*(char *)(a2 + 0x1601e890) + (char)v2 != (char)(a3 / 256)) {
        // 0x39eee4
        unknown_60cb92bf();
        int64_t v3 = unknown_26364cf1(); // 0x39eeeb
        int32_t * v4 = (int32_t *)(v3 + 0x1e88005); // 0x39eef0
        *v4 = *v4 - (int32_t)v3;
        *(char *)a1 = *(char *)a5;
        int64_t v5 = v2 ? -1 : 1; // 0x39eef8
        int64_t v6 = v5 + a1; // 0x39eef8
        int64_t result = __asm_hlt(v6, v5 + a5); // 0x39ef0a
        int32_t * v7 = (int32_t *)(v1 & -0xff01 | (int64_t)&g4); // 0x39ef0d
        *v7 = *v7 + (int32_t)v6;
        return result;
    }
    int32_t v8 = a1; // 0x39ee8c
    *(int32_t *)a4 = (int32_t)a4 + v8;
    int32_t * v9 = (int32_t *)(v1 + 37); // 0x39ee8e
    int64_t v10 = a2;
    *v9 = *v9 >> 9;
    int64_t v11 = unknown_5c02f698(); // 0x39ee92
    int64_t v12 = v11 & 0xffffff00 | (int64_t)*(char *)0x1e800b329bcd70a; // 0x39ee9a
    while (*(char *)(8 * v1 + a1) <= (char)v11) {
        // 0x39ee8e
        v10 = v12;
        *v9 = *v9 >> 9;
        v11 = unknown_5c02f698();
        v12 = v11 & 0xffffff00 | (int64_t)*(char *)0x1e800b329bcd70a;
    }
    int64_t result2 = v10 & 0xffffffff; // 0x39eea3
    *(int32_t *)-0x179c4c53 = *(int32_t *)-0x179c4c53 + v8;
    int32_t * v13 = (int32_t *)(result2 + 0x43bb1036); // 0x39eeac
    *v13 = *v13 + (int32_t)v12;
    return result2;
}

// Address range: 0x3d4ca7 - 0x3d4cb5
int64_t function_3d4ca7(int64_t a1, int64_t a2) {
    // 0x3d4ca7
    int64_t v1; // 0x3d4ca7
    bool v2; // 0x3d4ca7
    if (!v2) {
        v1 = function_3d4c9e();
    }
    int64_t v3 = v1;
    char v4 = *(char *)-0x5f41da4f; // 0x3d4caa
    int64_t v5; // 0x3d4ca7
    *(char *)-0x5f41da4f = v4 + (char)((uint64_t)v5 / 256);
    return (v3 + 98) % 256 | v3 & -256;
}

// Address range: 0x3d4cc4 - 0x3d4cd5
int64_t function_3d4cc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d4cc4
    int64_t v1; // 0x3d4cc4
    *(char *)a4 = (char)v1;
    int64_t v2; // 0x3d4cc4
    *(char *)a1 = *(char *)&v2;
    return v1 + 0x7651d3a & 0xffffffff;
}

// Address range: 0x3d4cfc - 0x3d4dbc
int64_t function_3d4cfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d4cfc
    int64_t result; // 0x3d4cfc
    return result;
}

// Address range: 0x3d4dc6 - 0x3d4dc9
int64_t function_3d4dc6(void) {
    // 0x3d4dc6
    int64_t result; // 0x3d4dc6
    return result;
}

// Address range: 0x3d4e28 - 0x3d4e2f
int64_t function_3d4e28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 0x789cfe10); // 0x3d4e28
    int64_t result; // 0x3d4e28
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x3d4e3b - 0x3d4e40
int64_t function_3d4e3b(void) {
    // 0x3d4e3b
    return function_693f368e();
}

// Address range: 0x3d4e50 - 0x3d4e5b
int64_t function_3d4e50(void) {
    // 0x3d4e50
    int64_t v1; // 0x3d4e50
    *(char *)(v1 - 0x6efe179b) = (char)v1;
    return function_2e462f6f();
}

// Address range: 0x3d4e99 - 0x3d4e9c
int64_t function_3d4e99(void) {
    // 0x3d4e99
    int64_t result; // 0x3d4e99
    return result;
}

// Address range: 0x3d4f0d - 0x3d4f1a
int64_t function_3d4f0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d4f0d
    int64_t v1; // 0x3d4f0d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 + 0x1e841cf); // 0x3d4f0d
    *v3 = *v3 | -66;
    int64_t result = (v2 + 100) % 256 | v2 & -256; // 0x3d4f14
    __asm_out_133((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3d4f46 - 0x3d4f54
int64_t function_3d4f46(void) {
    // 0x3d4f46
    return function_ffffffffb04a914d();
}

// Address range: 0x3d4f7f - 0x3d4f81
int64_t function_3d4f7f(void) {
    // 0x3d4f7f
    int64_t v1; // 0x3d4f7f
    return function_3d4fdf(v1, v1, v1, v1);
}

// Address range: 0x3d4f98 - 0x3d4f9b
int64_t function_3d4f98(void) {
    // 0x3d4f98
    int64_t result; // 0x3d4f98
    return result;
}

// Address range: 0x3d4fd8 - 0x3d4fd9
int64_t function_3d4fd8(int64_t a1) {
    // 0x3d4fd8
    int64_t result; // 0x3d4fd8
    return result;
}

// Address range: 0x3d4fdf - 0x3d501a
int64_t function_3d4fdf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3d4fdf
    int64_t v1; // 0x3d4fdf
    uint64_t v2 = v1;
    int16_t v3 = a3; // 0x3d4fdf
    char v4 = __asm_insb(v3); // 0x3d4fdf
    char * v5 = (char *)a1; // 0x3d4fdf
    *v5 = v4;
    __asm_out_133(v3, (int32_t)v1);
    *(int32_t *)a3 = (int32_t)a1;
    int64_t v6 = v1 & -256; // 0x3d4feb
    *(int64_t *)0x917a0370 = -0x2dfec300;
    uint16_t v7 = (int16_t)(v6 | (int64_t)*(char *)-0x30ee7b42f7b5f82c); // 0x3d4ffe
    uint16_t v8 = (int16_t)(a3 / 256) % 256; // 0x3d4ffe
    int64_t v9 = (v6 | (int64_t)(v7 / v8)) & -0xff01 | (int64_t)(256 * (v7 % v8)); // 0x3d4ffe
    __asm_out_133(v3, (int32_t)v9);
    int64_t result = v9 & 0xffffffff ^ 0xec779c82; // 0x3d5004
    int32_t * v10 = (int32_t *)(a2 - 95); // 0x3d500f
    *v10 = *v10 + ((int32_t)v2 & -256 | 1);
    *(char *)-0x33e5d0e7 = *(char *)-0x33e5d0e7 + (char)(v2 / 256);
    *(int64_t *)0x917a3614 = a4;
    *v5 = (char)result;
    return result;
}

// Address range: 0x3d5041 - 0x3d5046
int64_t function_3d5041(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d5041
    int64_t result; // 0x3d5041
    *(int32_t *)a3 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x3d506f - 0x3d5076
int64_t function_3d506f(int64_t a1) {
    // 0x3d506f
    int64_t v1; // 0x3d506f
    int64_t result = v1;
    *(char *)result = 3 * (char)result;
    return result;
}

// Address range: 0x3d50ab - 0x3d50c4
int64_t function_3d50ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3d50ab
    unknown_ffffffffe9339bb2();
    int32_t * v1 = (int32_t *)(a1 - 0x45fec298); // 0x3d50b1
    int64_t v2; // 0x3d50ab
    *v1 = *v1 + (int32_t)v2;
    int64_t result = __asm_hlt(a1, a2); // 0x3d50b7
    *(int32_t *)(a3 + 0x3f01e800) = (int32_t)a1;
    return result;
}

// Address range: 0x3d50c4 - 0x3d50cb
int64_t function_3d50c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3d50c4
    int64_t result; // 0x3d50c4
    return result;
}

// Address range: 0x3d5106 - 0x3d5199
int64_t function_3d5106(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0x3d5106
    int64_t v1; // 0x3d5106
    char * v2 = (char *)(v1 + 0x1e85a02); // 0x3d5106
    *v2 = *v2 + (char)(a4 / 256);
    int64_t result; // 0x3d5106
    *(int32_t *)result = *(int32_t *)&result + (int32_t)a3;
    char * v3 = (char *)(a2 + 0x73db1f0a); // 0x3d511a
    *v3 = *v3 | (char)result;
    unsigned char v4 = *(char *)(a4 - 24) | (char)(a3 / 256); // 0x3d5120
    int64_t v5 = a3 & -0xff01; // 0x3d5120
    uint32_t v6 = (int32_t)a4; // 0x3d5123
    *(int32_t *)result = *(int32_t *)&result + v6;
    __asm_sti();
    int64_t v7 = unknown_ffffffffa1128b31(); // 0x3d512b
    char v8 = *(char *)(256 * (int64_t)v4 | v5); // 0x3d5130
    int64_t v9 = 256 * (int64_t)(v8 | v4) | v5; // 0x3d5130
    uint64_t v10 = v7 + 97; // 0x3d5132
    int64_t v11 = v7 & -256; // 0x3d5132
    char * v12 = (char *)(v10 % 256 | v11); // 0x3d5134
    *v12 = *v12 - (char)v10;
    int32_t v13 = *(int32_t *)(((v7 + 67) % 256 | v11) - 24); // 0x3d513f
    uint32_t v14 = (*(int32_t *)(v9 - 24) & (int32_t)v9) + v13; // 0x3d513f
    int32_t * v15 = (int32_t *)(8 * v1 + 0xe804d9d9); // 0x3d5142
    *v15 = *v15 + v6;
    *(char *)(int64_t)v14 = (char)(v14 / 256);
    int32_t * v16 = (int32_t *)(2 * a2 + 0xe804da4b); // 0x3d5148
    *v16 = *v16 + v6;
    int32_t v17 = (int32_t)unknown_255ee852((int32_t)a1 - 0x17fb25b5) - 0x70fe1775; // 0x3d5155
    int64_t v18 = v17; // 0x3d5155
    result = v18;
    if (v17 < 0) {
        int32_t * v19 = (int32_t *)v18; // 0x3d5197
        *v19 = *v19 + v6;
        return result;
    }
    char * v20 = (char *)(a5 + 0x22013d00); // 0x3d515d
    *v20 = *v20 + (char)v17;
    int64_t result2 = unknown_ffffffffca6c5c6a(); // 0x3d5164
    result = result2;
    uint32_t v21 = v6 % 32; // 0x3d516a
    if (v21 != 0) {
        uint32_t v22 = *(int32_t *)-0x1042f016; // 0x3d516a
        *(int32_t *)-0x1042f016 = v22 >> 32 - v21 | v22 << v21;
    }
    return result2;
}

// Address range: 0x3d51aa - 0x3d51af
int64_t function_3d51aa(void) {
    // 0x3d51aa
    return function_17a5215();
}

// Address range: 0x3d51e5 - 0x3d51e6
int64_t function_3d51e5(void) {
    // 0x3d51e5
    int64_t result; // 0x3d51e5
    return result;
}
