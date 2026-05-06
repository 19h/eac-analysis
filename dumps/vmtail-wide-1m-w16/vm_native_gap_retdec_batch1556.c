/*
 * Targeted RetDec C for native executable gap queue batch 1556.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x36a59e-0x36a79e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36a79e-0x36a99e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36a99e-0x36ab9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36ab9e-0x36ad9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x41dbcb-0x41ddcb rank=- name=- kind=- bytes=- uncovered=-
 *   0x41ddcb-0x41dfcb rank=- name=- kind=- bytes=- uncovered=-
 *   0x41dfcb-0x41e1cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x41e1cb-0x41e3cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x41e3cb-0x41e5cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x41e5cb-0x41e61c rank=- name=- kind=- bytes=- uncovered=-
 *   0x5180b6-0x5182b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5182b6-0x5184b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5184b6-0x5186b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5186b6-0x5188b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5188b6-0x518ab6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x518ab6-0x518b00 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_15d1fdd3();
int64_t function_259ce();
int64_t function_2e53b7f0();
int64_t function_36a59e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36a663(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_36a7d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_36a91d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36aa84(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_36abb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_41dbcb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41dbf4(void);
int64_t function_41dc32(void);
int64_t function_41dc82(void);
int64_t function_41dcb7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41dd2d(void);
int64_t function_41dd53(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41de01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41de79(int64_t a1);
int64_t function_41de7e(int64_t a1);
int64_t function_41dead(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41df49(void);
int64_t function_41df68(int64_t a1);
int64_t function_41e01c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41e086(void);
int64_t function_41e100(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41e11d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41e155(void);
int64_t function_41e17a(void);
int64_t function_41e1c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41e1f5(int64_t a1);
int64_t function_41e235(int64_t a1);
int64_t function_41e28e(int64_t a1);
int64_t function_41e29c(void);
int64_t function_41e2b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41e2f3(void);
int64_t function_41e2fc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41e327(void);
int64_t function_41e32e(void);
int64_t function_41e375(void);
int64_t function_41e3b1(int64_t a1);
int64_t function_41e472(void);
int64_t function_41e4dd(int64_t a1);
int64_t function_41e507(void);
int64_t function_41e52e(void);
int64_t function_41e535(void);
int64_t function_41e539(void);
int64_t function_41e542(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_451f2();
int64_t function_508620();
int64_t function_50d7a0();
int64_t function_50e0e0();
int64_t function_50f6f0();
int64_t function_50f7d0();
int64_t function_517200();
int64_t function_517ea0();
int64_t function_517ff4();
int64_t function_5180b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5180c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5180cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5180e8(void);
int64_t function_5180ee(int64_t a1);
int64_t function_518120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_518acd(void);
int64_t function_518aed(int64_t a1);
int64_t function_569070();
int64_t function_c57b8();
int64_t function_ffffffffb645f2fb();
int64_t function_ffffffffc4cf1c8f();
int64_t unknown_ffffffffaea6014f();

// Address range: 0x36a59e - 0x36a663
int64_t function_36a59e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36a59e
    int64_t v1; // bp-32, 0x36a59e
    v1 = (int64_t)&v1;
    int64_t v2; // bp-16, 0x36a59e
    int64_t v3 = (int64_t)&v2; // 0x36a629
    int64_t * v4 = (int64_t *)(v3 + 8); // 0x36a63e
    *v4 = a3;
    v2 = v3 + 24;
    int64_t v5 = *v4; // 0x36a652
    *(int64_t *)(v3 - 8) = v5;
    int64_t v6; // 0x36a59e
    return function_c57b8(a1, a2, v5, v6, v6, v6, a4);
}

// Address range: 0x36a663 - 0x36a7d1
int64_t function_36a663(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x36a663
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x36894e);
}

// Address range: 0x36a7d1 - 0x36a91d
int64_t function_36a7d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x36a7d1
    bool v1; // 0x36a7d1
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x36a7d1
    int64_t v3 = v2; // bp-48, 0x36a85e
    int64_t v4 = (int64_t)&v3; // 0x36a89f
    int64_t v5 = v4 - 8; // 0x36a8a7
    int64_t * v6 = (int64_t *)v5; // 0x36a8a7
    int64_t * v7 = (int64_t *)(v4 - 16); // 0x36a8ac
    int64_t v8; // 0x36a7d1
    *v7 = v8 + 0x5dbe8bf4;
    int64_t * v9 = (int64_t *)(v4 - 24); // 0x36a8ad
    *v9 = v2;
    *v6 = v2;
    int64_t v10 = v4 + 8; // 0x36a8bf
    int64_t * v11 = (int64_t *)v10; // 0x36a8bf
    *v11 = v2;
    *v7 = 0x6c0db37a;
    *v9 = *v7;
    *(int64_t *)(v4 + 24) = *v6;
    *v6 = v3;
    *v7 = v4;
    v3 = *v11;
    *v6 = a2;
    *v7 = v5;
    *v6 = v10;
    return function_c57b8(a1, *v6, a3, a4, a5, a6, v8);
}

// Address range: 0x36a91d - 0x36aa84
int64_t function_36a91d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36a91d
    int64_t v1; // bp-56, 0x36a91d
    int64_t v2 = (int64_t)&v1; // 0x36aa08
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x36aa11
    bool v4; // 0x36a91d
    *v3 = 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    int64_t v5 = v2 + 16; // 0x36aa14
    int64_t * v6 = (int64_t *)v5; // 0x36aa14
    *v6 = v1;
    v1 = a2;
    *v3 = a4;
    int64_t v7 = v1; // 0x36aa59
    v1 = v5;
    *(int64_t *)(v2 + 8) = *v6;
    v1 = v7;
    *v3 = v2;
    int64_t v8 = v1; // 0x36aa76
    v1 = v5;
    int64_t v9; // 0x36a91d
    return function_c57b8(a1, v8, a3, a4, v9, v9, 0x3ad7b3c);
}

// Address range: 0x36aa84 - 0x36abb4
int64_t function_36aa84(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x46822d30; // bp-32, 0x36aacf
    int64_t v2 = (int64_t)&v1; // 0x36ab39
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x36ab41
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x36ab52
    *v4 = a6;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x36ab56
    *v5 = a6;
    *v3 = 0x2eb2ff80;
    *(int64_t *)(v2 - 24) = 169;
    *(int64_t *)(v2 + 24) = *v3;
    *v3 = v1;
    *v4 = v2;
    int64_t v6 = *v5; // 0x36ab99
    v1 = v6;
    *v3 = v6;
    int64_t v7; // 0x36aa84
    return function_c57b8(a1, a2, a3, a4, a5, v7, v1);
}

// Address range: 0x36abb4 - 0x36ad33
int64_t function_36abb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x36abb4
    int64_t v1; // bp-56, 0x36abb4
    int64_t v2 = (int64_t)&v1; // 0x36acf6
    int64_t v3 = v2 + 16; // 0x36ad08
    v1 = v3;
    int64_t v4 = *(int64_t *)v3; // 0x36ad15
    *(int64_t *)(v2 + 8) = v4;
    v1 = v4;
    return function_c57b8(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0x41dbcb - 0x41dbf3
int64_t function_41dbcb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41dbcb
    bool v1; // 0x41dbcb
    bool v2 = v1;
    char * v3 = (char *)(a4 + 9); // 0x41dbcb
    int64_t v4; // 0x41dbcb
    *v3 = *v3 | (char)v4;
    int16_t v5 = (int16_t)v4 ^ 59; // 0x41dbd2
    int16_t v6 = (int16_t)*(char *)(a1 + 16); // 0x41dbd2
    int16_t v7 = v5 / v6; // 0x41dbd2
    __asm_out(66, (char)v7);
    *(char *)a1 = *(char *)a5;
    int32_t * v8 = (int32_t *)(a5 + 30 + (v2 ? -1 : 1) + (v2 ? -4 : 4)); // 0x41dbeb
    int64_t v9; // 0x41dbcb
    *v8 = *v8 | (int32_t)(int64_t)&v9;
    return (v4 & 0xffff0000 | (int64_t)(v7 % 256) | (int64_t)(256 * (v5 % v6))) + 0xb62a68a1 & 0xffffffff;
}

// Address range: 0x41dbf4 - 0x41dc02
int64_t function_41dbf4(void) {
    // 0x41dbf4
    return function_15d1fdd3();
}

// Address range: 0x41dc32 - 0x41dc33
int64_t function_41dc32(void) {
    // 0x41dc32
    int64_t result; // 0x41dc32
    return result;
}

// Address range: 0x41dc82 - 0x41dc87
int64_t function_41dc82(void) {
    // 0x41dc82
    return function_ffffffffb645f2fb();
}

// Address range: 0x41dcb7 - 0x41dcbd
int64_t function_41dcb7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41dcb7
    int64_t v1; // 0x41dcb7
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_2e53b7f0();
}

// Address range: 0x41dd2d - 0x41dd33
int64_t function_41dd2d(void) {
    // 0x41dd2d
    int64_t result; // 0x41dd2d
    return result;
}

// Address range: 0x41dd53 - 0x41dd5d
int64_t function_41dd53(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41dd53
    int64_t result; // 0x41dd53
    return result;
}

// Address range: 0x41de01 - 0x41de77
int64_t function_41de01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41de01
    int64_t v1; // 0x41de01
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x41de79 - 0x41de7a
int64_t function_41de79(int64_t a1) {
    // 0x41de79
    int64_t result; // 0x41de79
    return result;
}

// Address range: 0x41de7e - 0x41de87
int64_t function_41de7e(int64_t a1) {
    // 0x41de7e
    int64_t v1; // 0x41de7e
    int64_t v2 = v1;
    int64_t result = (v2 + 178 + (int64_t)((char)v1 > (char)v2)) % 256 | v2 & -256; // 0x41de7f
    int32_t * v3 = (int32_t *)result; // 0x41de81
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x41dead - 0x41dec5
int64_t function_41dead(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41dead
    __asm_rcl(*(int32_t *)(a4 & -256 | 99));
    int64_t v1; // 0x41dead
    return v1 & 0xffffffff ^ 0x5ea9f9ec;
}

// Address range: 0x41df49 - 0x41df4c
int64_t function_41df49(void) {
    // 0x41df49
    int64_t result; // 0x41df49
    return result;
}

// Address range: 0x41df68 - 0x41df69
int64_t function_41df68(int64_t a1) {
    // 0x41df68
    int64_t result; // 0x41df68
    return result;
}

// Address range: 0x41e01c - 0x41e023
int64_t function_41e01c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41e01c
    int64_t v1; // 0x41e01c
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x41e01c
    int64_t v3 = v2 ? -4 : 4; // 0x41e01e
    int64_t v4; // 0x41e01c
    *(char *)a4 = *(char *)&v4 + (char)a3;
    return __asm_wait(v3 + a1, v3 + a2);
}

// Address range: 0x41e086 - 0x41e089
int64_t function_41e086(void) {
    // 0x41e086
    int64_t result; // 0x41e086
    return result;
}

// Address range: 0x41e100 - 0x41e11d
int64_t function_41e100(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x41e100
    int64_t v1; // 0x41e100
    int32_t v2 = v1;
    *(int32_t *)v1 = v2 - (int32_t)a3;
    int64_t result = unknown_ffffffffaea6014f(a5); // 0x41e10e
    int32_t * v3 = (int32_t *)(a6 - 0x3fcc8e82); // 0x41e114
    *v3 = *v3 | v2;
    *(char *)a5 = __asm_insb((int16_t)a6);
    return result;
}

// Address range: 0x41e11d - 0x41e135
int64_t function_41e11d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41e11d
    int64_t v1; // 0x41e11d
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x41e11d
    unsigned char v4 = *(char *)&v3; // 0x41e12c
    unsigned char v5 = v4 + (char)a3; // 0x41e12c
    *(char *)a3 = v5;
    return v2 - (v5 < v4 ? 0x3a7b3d95 : 0x3a7b3d94) & 0xffffffff;
}

// Address range: 0x41e155 - 0x41e157
int64_t function_41e155(void) {
    // 0x41e155
    int64_t result; // 0x41e155
    return result;
}

// Address range: 0x41e17a - 0x41e17b
int64_t function_41e17a(void) {
    // 0x41e17a
    int64_t result; // 0x41e17a
    return result;
}

// Address range: 0x41e1c0 - 0x41e1cc
int64_t function_41e1c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41e1c0
    int64_t v1; // 0x41e1c0
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 + 2 * v1); // 0x41e1c5
    *v3 = *v3 + (int32_t)v1;
    return v2 + 0x1000 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x41e1f5 - 0x41e1f8
int64_t function_41e1f5(int64_t a1) {
    // 0x41e1f5
    int64_t result; // 0x41e1f5
    return result;
}

// Address range: 0x41e235 - 0x41e236
int64_t function_41e235(int64_t a1) {
    // 0x41e235
    int64_t result; // 0x41e235
    return result;
}

// Address range: 0x41e28e - 0x41e291
int64_t function_41e28e(int64_t a1) {
    // 0x41e28e
    int64_t result; // 0x41e28e
    return result;
}

// Address range: 0x41e29c - 0x41e29d
int64_t function_41e29c(void) {
    // 0x41e29c
    int64_t result; // 0x41e29c
    return result;
}

// Address range: 0x41e2b3 - 0x41e2bd
int64_t function_41e2b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_hlt(); // 0x41e2b5
    __asm_out(125, (char)result);
    return result;
}

// Address range: 0x41e2f3 - 0x41e2fc
int64_t function_41e2f3(void) {
    // 0x41e2f3
    int64_t result; // 0x41e2f3
    return result;
}

// Address range: 0x41e2fc - 0x41e314
int64_t function_41e2fc(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 79); // 0x41e2fe
    *v1 = *v1 ^ (int32_t)a1;
    int64_t v2; // 0x41e2fc
    unsigned char v3 = llvm_ctpop_i8((char)v2 & -49 ^ (char)a2); // 0x41e308
    __asm_in((int16_t)a3);
    if (v3 % 2 != 0) {
        function_41e29c();
    }
    // 0x41e30d
    return function_41e32e();
}

// Address range: 0x41e327 - 0x41e32e
int64_t function_41e327(void) {
    // 0x41e327
    int64_t v1; // 0x41e327
    return v1 & 0x8c1d26df | 0x73e2d920;
}

// Address range: 0x41e32e - 0x41e331
int64_t function_41e32e(void) {
    // 0x41e32e
    int64_t v1; // 0x41e32e
    unsigned char v2 = (char)v1; // 0x41e32e
    unsigned char v3 = (char)v1;
    char v4 = v2 - v3; // 0x41e32e
    return v1 & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v2 < v3) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v2 % 16 - v3 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v4) % 2 == 0)) | 512;
}

// Address range: 0x41e375 - 0x41e378
int64_t function_41e375(void) {
    // 0x41e375
    int64_t result; // 0x41e375
    return result;
}

// Address range: 0x41e3b1 - 0x41e3b3
int64_t function_41e3b1(int64_t a1) {
    // 0x41e3b1
    int64_t result; // 0x41e3b1
    return result;
}

// Address range: 0x41e472 - 0x41e477
int64_t function_41e472(void) {
    // 0x41e472
    return function_ffffffffc4cf1c8f();
}

// Address range: 0x41e4dd - 0x41e4e2
int64_t function_41e4dd(int64_t a1) {
    // 0x41e4dd
    return function_41e539();
}

// Address range: 0x41e507 - 0x41e508
int64_t function_41e507(void) {
    // 0x41e507
    int64_t result; // 0x41e507
    return result;
}

// Address range: 0x41e52e - 0x41e52f
int64_t function_41e52e(void) {
    // 0x41e52e
    int64_t result; // 0x41e52e
    return result;
}

// Address range: 0x41e535 - 0x41e539
int64_t function_41e535(void) {
    // 0x41e535
    int64_t result; // 0x41e535
    return result;
}

// Address range: 0x41e539 - 0x41e53a
int64_t function_41e539(void) {
    // 0x41e539
    int64_t result; // 0x41e539
    return result;
}

// Address range: 0x41e542 - 0x41e614
int64_t function_41e542(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x41e542
    __asm_int(-125);
    int64_t v1; // 0x41e542
    int64_t result = v1 & 0xffffffff; // 0x41e557
    bool v2; // 0x41e542
    if (v2) {
        result = function_41e52e();
    }
    int64_t v3 = (int64_t)*(int32_t *)(a1 + 0x73665c5e); // 0x41e54b
    __asm_out(-2, (char)result);
    if (v2 == (-0x1edb8d67 * v3 != -0x1edb8d6700000000 * v3 >> 32)) {
        // 0x41e55e
        return result;
    }
    // 0x41e590
    return v1 & 0xffffffff;
}

// Address range: 0x5180b6 - 0x5180be
int64_t function_5180b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5180b6
    int64_t result; // 0x5180b6
    char * v1 = (char *)(result - 123); // 0x5180b6
    *v1 = *v1 + (char)a4;
    float80_t v2; // 0x5180b6
    *(int32_t *)a1 = (int32_t)v2;
    return result;
}

// Address range: 0x5180c0 - 0x5180cc
int64_t function_5180c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x5180c0
    int64_t v1; // 0x5180c0
    *(char *)a6 = (char)v1 + (char)a5;
    return function_517ea0();
}

// Address range: 0x5180cc - 0x5180e8
int64_t function_5180cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5180cc
    int64_t v1; // 0x5180cc
    *(char *)v1 = 0;
    if ((char)a3 == 0) {
        // 0x5180de
        return function_517ea0();
    }
    // 0x5180d4
    if (*(int64_t *)(a4 + 48) == v1) {
        function_517ff4();
    }
    // 0x5180de
    return function_517ea0();
}

// Address range: 0x5180e8 - 0x5180ee
int64_t function_5180e8(void) {
    // 0x5180e8
    int64_t result; // 0x5180e8
    *(char *)result = 1;
    return result;
}

// Address range: 0x5180ee - 0x51811a
int64_t function_5180ee(int64_t a1) {
    // 0x5180ee
    __stack_chk_fail();
    int64_t result = *(int64_t *)(a1 + 24); // 0x518103
    if (result != g1) {
        // 0x518118
        return result;
    }
    // 0x518110
    return function_517200();
}

// Address range: 0x518120 - 0x518acb
int64_t function_518120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a2; // bp-104, 0x51813c
    int64_t v2 = a4; // bp-120, 0x518155
    int64_t v3 = __readfsqword(40); // 0x518171
    int64_t v4 = function_50e0e0(); // 0x518184
    int32_t v5 = *(int32_t *)(a6 + 24) & 74; // 0x518190
    int64_t v6 = 10; // 0x518120
    int64_t v7; // 0x518120
    int64_t v8; // 0x518120
    int64_t v9; // 0x518120
    int32_t * v10; // 0x518120
    int64_t v11; // 0x518120
    int64_t v12; // 0x518120
    int64_t v13; // 0x518120
    switch (v5) {
        case 64: {
            // 0x5188e0
            v6 = 8;
            goto lab_0x5181ae;
        }
        case 8: {
            int64_t v14 = (int64_t)&v1; // 0x5184d2
            int64_t v15 = function_50f6f0(&v1, &v2); // 0x5184d6
            v11 = v14;
            v7 = 16;
            v12 = v14;
            v13 = a3;
            v9 = a5;
            v10 = (int32_t *)&v2;
            v8 = v15 & 0xffffffff;
            if ((char)v15 != 0) {
                goto lab_0x518a7a;
            } else {
                goto lab_0x5181d5;
            }
        }
        default: {
            goto lab_0x5181ae;
        }
    }
  lab_0x51824f:;
    // 0x51824f
    int64_t v16; // 0x518120
    int64_t v17 = v16; // 0x518252
    int64_t v18; // 0x518120
    int64_t v19 = v18; // 0x518252
    int64_t v20; // 0x518120
    int64_t v21 = v20; // 0x518252
    int32_t * v22; // 0x518120
    int32_t * v23 = v22; // 0x518252
    int32_t v24; // 0x518120
    int32_t v25 = v24; // 0x518252
    char v26; // 0x518120
    char v27 = v26; // 0x518252
    int32_t v28; // 0x518120
    int32_t v29 = v28; // 0x518252
    int64_t v30; // 0x518120
    int64_t v31 = v30; // 0x518252
    int64_t v32; // 0x518120
    int64_t v33 = v32; // 0x518252
    int64_t v34; // 0x518120
    int64_t v35 = v34; // 0x518252
    int64_t v36; // 0x518120
    int64_t v37 = v36; // 0x518252
    int64_t v38; // 0x518120
    int64_t v39 = v38; // 0x518252
    goto lab_0x518257;
  lab_0x518341:;
    // 0x518341
    int64_t v215; // 0x518120
    int64_t v134 = v215; // 0x518341
    int64_t v216; // 0x518120
    int64_t v124 = v216; // 0x518341
    int64_t v217; // 0x518120
    int64_t v176 = v217; // 0x518341
    int32_t * v218; // 0x518120
    int32_t * v177 = v218; // 0x518341
    int32_t v219; // 0x518120
    int32_t v122 = v219; // 0x518341
    char v220; // 0x518120
    char v120 = v220; // 0x518341
    int64_t v178 = 1; // 0x518341
    int64_t v221; // 0x518120
    int64_t v118 = v221; // 0x518341
    int64_t v222; // 0x518120
    int64_t v116 = v222; // 0x518341
    int64_t v223; // 0x518120
    int64_t v114 = v223; // 0x518341
    int64_t v224; // 0x518120
    int64_t v112 = v224; // 0x518341
    goto lab_0x518346;
  lab_0x518301:;
    // 0x518301
    int64_t v264; // 0x518120
    int64_t v270 = v264; // 0x518306
    int64_t v263; // 0x518120
    int64_t v271 = v263; // 0x518306
    int64_t v272 = 1; // 0x518306
    int64_t v267; // 0x518120
    int64_t v273 = v267; // 0x518306
    uint64_t v242; // 0x518120
    if (v242 >= v263) {
        goto lab_0x5185e0;
    } else {
        goto lab_0x518312;
    }
  lab_0x5185e0:;
    // 0x5185e0
    int64_t v239; // 0x518290
    uint64_t v279 = v263 * v239; // 0x5185e0
    int64_t v280 = 0x100000000 * v273 >> 32; // 0x5185eb
    v270 = v264 + 1 & 0xffffffff;
    v271 = v280 + v279;
    int64_t v265; // 0x518120
    int64_t v241; // 0x5182a0
    v272 = v265 | (int64_t)(v241 - v280 < v279);
    goto lab_0x518312;
  lab_0x518312:;
    int64_t v281 = v272;
    int64_t v282 = v271;
    int64_t v283 = v270;
    int64_t v238; // 0x518120
    int64_t v284 = function_50f7d0(function_50d7a0(v238)); // 0x51831e
    v215 = v238;
    int64_t v237; // 0x518120
    v216 = v237;
    int64_t v236; // 0x518120
    v217 = v236;
    int32_t * v235; // 0x518120
    v218 = v235;
    int32_t v234; // 0x518120
    v219 = v234;
    char v233; // 0x518120
    v220 = v233;
    int64_t v230; // 0x518120
    v221 = v230;
    v222 = v281;
    v223 = v283;
    v224 = v282;
    int64_t v258; // 0x518120
    if ((int32_t)v284 == -1 == (int32_t)function_50f7d0(v258) == -1) {
        goto lab_0x518341;
    }
    int64_t v259 = function_50f7d0(v238) & 0xffffffff; // 0x51861b
    int64_t v260 = v281; // 0x51861b
    int64_t v261 = v283; // 0x51861b
    int64_t v262 = v282; // 0x51861b
    goto lab_0x5182df;
  lab_0x5184ae_3:;
    // 0x5184ae
    int64_t v285; // 0x518120
    int64_t v73 = v285; // 0x5184b7
    int64_t v286; // 0x518120
    int64_t v74 = v286; // 0x5184b7
    int32_t v75 = 1; // 0x5184b7
    char * v72; // 0x5181e6
    int64_t v76 = (int64_t)*v72; // 0x5184b7
    int64_t v97; // 0x518120
    int64_t v77 = v97; // 0x5184b7
    int64_t v287; // 0x518120
    int64_t v78 = v287; // 0x5184b7
    int64_t v288; // 0x518120
    int64_t v79 = v288; // 0x5184b7
    int64_t v289; // 0x518120
    int64_t v81 = v289; // 0x5184b7
    goto lab_0x518240_3;
  lab_0x51841b:;
    // 0x51841b
    int32_t v103; // 0x518120
    int32_t * v85; // 0x518120
    int32_t * v86; // 0x518120
    if (*v85 != v103) {
        // 0x518423
        if (*v86 != v103) {
            // break -> 0x518240
            goto lab_0x518240_3;
        }
    }
    // 0x51842f
    int64_t v95; // 0x518120
    int32_t v290 = v95;
    v28 = v290;
    int64_t v69; // 0x518120
    v16 = v69;
    int64_t v100; // 0x518120
    v18 = v100;
    int64_t v99; // 0x518120
    v20 = v99;
    int32_t * v70; // 0x518120
    v22 = v70;
    v24 = 0;
    char v110; // 0x5181ec
    v26 = v110;
    int64_t v98; // 0x518120
    v30 = v98;
    v32 = v97;
    v34 = 1;
    v36 = v95;
    int64_t v94; // 0x518120
    v38 = v94;
    int64_t v106 = 0; // 0x51843e
    int64_t v107 = 16; // 0x51843e
    int64_t v108 = 0; // 0x51843e
    if (v5 != 0 && v290 != 16) {
        goto lab_0x51824f;
    }
    goto lab_0x518450;
  lab_0x518450:
    // 0x518450
    v289 = v108;
    v288 = v107;
    v287 = v106;
    int64_t v291 = v1; // 0x518450
    int64_t v292; // 0x518120
    int64_t v293; // 0x518120
    char v294; // 0x518120
    int64_t v295; // 0x518120
    int64_t v296; // 0x518120
    int64_t v297; // 0x518120
    int64_t v298; // 0x518120
    if (v291 == 0) {
        // 0x51850c
        v296 = v100;
        v292 = v2;
        goto lab_0x518511;
    } else {
        int64_t * v299 = (int64_t *)(v291 + 16); // 0x51845e
        uint64_t v300 = *v299; // 0x51845e
        int64_t * v301 = (int64_t *)(v291 + 24); // 0x518462
        uint64_t v302 = *v301; // 0x518462
        int64_t v303 = v302; // 0x518466
        int64_t v304 = v300; // 0x518466
        if (v300 < v302) {
            // 0x51846c
            v304 = v300 + 4;
            *v299 = v304;
            v303 = *v301;
        }
        uint64_t v305 = v304; // 0x51847c
        int64_t v306; // 0x518120
        if (v305 >= v303) {
            // 0x518940
            v306 = *(int64_t *)v291;
        } else {
            // 0x51848a
            v306 = (int64_t)*(int32_t *)v305;
        }
        int64_t v307 = v306;
        int64_t v308 = v2; // 0x51848f
        if ((int32_t)v307 == -1) {
            // 0x5186d0
            v1 = 0;
            v296 = -1;
            v292 = v308;
            goto lab_0x518511;
        } else {
            int64_t v309 = 0x100000000 * v307 >> 32; // 0x51849d
            v297 = v309;
            v295 = v99;
            if (v308 == 0) {
                goto lab_0x518522;
            } else {
                // 0x5184a3
                v285 = v309;
                v286 = v99;
                v298 = v309;
                v294 = 0;
                v293 = v308;
                if ((int32_t)v99 != -1) {
                    goto lab_0x5184ae_3;
                }
                goto lab_0x518582;
            }
        }
    }
  lab_0x518511:;
    int64_t v310 = v292;
    int64_t v311 = v296;
    v285 = v311;
    v286 = v99;
    if (v310 == 0) {
        goto lab_0x5184ae_3;
    }
    // 0x518516
    v297 = v311;
    v295 = v99;
    v298 = v311;
    v294 = 1;
    v293 = v310;
    if ((int32_t)v99 == -1) {
        goto lab_0x518582;
    } else {
        goto lab_0x518522;
    }
  lab_0x518582:;
    int64_t v312 = v293;
    uint64_t v313 = *(int64_t *)(v312 + 16); // 0x518582
    int64_t v314; // 0x518120
    if (v313 >= *(int64_t *)(v312 + 24)) {
        // 0x518950
        v314 = *(int64_t *)v312;
    } else {
        // 0x518590
        v314 = (int64_t)*(int32_t *)v313;
    }
    int64_t v315 = v314;
    int64_t v316; // 0x518120
    char v317; // 0x518120
    if ((int32_t)v315 == -1) {
        // 0x5186e0
        v2 = 0;
        v316 = v99;
        v317 = 1;
    } else {
        // 0x51859b
        v316 = 0x100000000 * v315 >> 32;
        v317 = 0;
    }
    // 0x5185a1
    v285 = v298;
    v286 = v316;
    v297 = v298;
    v295 = v316;
    if (v317 == v294) {
        goto lab_0x5184ae_3;
    }
    goto lab_0x518522;
  lab_0x518522:;
    int64_t v318 = function_50f7d0(v69) & 0xffffffff; // 0x51852e
    int64_t v87 = v297; // 0x518530
    int64_t v88 = v295; // 0x518530
    int64_t v89 = (int64_t)*v72; // 0x518530
    int64_t v90 = v318; // 0x518530
    int64_t v91 = v287; // 0x518530
    int64_t v92 = v288; // 0x518530
    int64_t v93 = v289; // 0x518530
    if (v287 == 0) {
        // break -> 0x518240
        goto lab_0x518240_3;
    }
    goto lab_0x5183f0;
  lab_0x5181ae:;
    int64_t v319 = (int64_t)&v1; // 0x5181c0
    int64_t v320 = function_50f6f0(&v1, &v2); // 0x5181c4
    v11 = v319;
    v7 = v6;
    if ((char)v320 != 0) {
        // 0x5189b8
        v28 = v6;
        v16 = v319;
        v18 = a3;
        v20 = a5;
        v22 = (int32_t *)&v2;
        v24 = 0x1000000 * (int32_t)v320 >> 24;
        v26 = 0;
        v30 = (int64_t)*(char *)(v4 + 32);
        v32 = 0;
        v34 = 0;
        v36 = v6;
        v38 = 0;
        goto lab_0x51824f;
    } else {
        goto lab_0x5181d5;
    }
  lab_0x5181d5:;
    int64_t v80 = v7;
    v70 = (int32_t *)&v2;
    v69 = v11;
    int64_t v321 = function_50f7d0(v69); // 0x5181d9
    int64_t v66 = v321 & 0xffffffff; // 0x5181de
    int32_t v322 = *(int32_t *)(v4 + 224); // 0x5181e0
    v72 = (char *)(v4 + 32);
    unsigned char v323 = *v72; // 0x5181e6
    int64_t v64 = v323; // 0x5181e6
    int32_t v67 = v321; // 0x5181ea
    v110 = v322 == v67;
    int64_t v65; // 0x518120
    int64_t v63; // 0x518120
    if (v322 == v67) {
        goto lab_0x5181ff;
    } else {
        // 0x5181f3
        v63 = v64;
        v65 = v66;
        if (*(int32_t *)(v4 + 228) != v67) {
            goto lab_0x5183e8;
        } else {
            goto lab_0x5181ff;
        }
    }
  lab_0x518a7a:;
    int32_t * v324 = v10;
    int64_t v325 = v9;
    int64_t v326 = v13;
    int64_t v327 = v12;
    char v328 = *(char *)(v4 + 32); // 0x518a7a
    int64_t v40 = (int64_t)&g3; // bp-72, 0x518a94
    int64_t v60; // 0x518120
    int64_t v254; // 0x518120
    int64_t v61; // 0x518120
    int64_t v255; // 0x518120
    int64_t v62; // 0x518120
    int64_t v253; // 0x518120
    int64_t v59; // 0x518120
    int64_t v245; // 0x518120
    int64_t v54; // 0x518120
    char v248; // 0x518120
    char v57; // 0x518120
    int32_t v247; // 0x518120
    int32_t v56; // 0x518120
    int64_t v252; // 0x518120
    int64_t v251; // 0x518120
    int64_t v250; // 0x518120
    int32_t * v246; // 0x518120
    int32_t * v55; // 0x518120
    int32_t v249; // 0x518120
    int32_t v58; // 0x518120
    int64_t v243; // 0x518120
    int64_t v52; // 0x518120
    int64_t v244; // 0x518120
    int64_t v53; // 0x518120
    if (v328 != 0) {
        // 0x5188eb
        v52 = v327;
        v53 = v326;
        v54 = v325;
        v55 = v324;
        v56 = v328;
        v57 = 0;
        v58 = 22;
        v59 = 0;
        v60 = 0;
        v61 = 16;
        v62 = 0;
        goto lab_0x518910;
    } else {
        unsigned char v329 = *(char *)(v4 + 328); // 0x518aa2
        int32_t v330 = v329; // 0x518ab5
        v243 = v327;
        v244 = v326;
        v245 = v325;
        v246 = v324;
        v247 = v330;
        v248 = 0;
        v249 = 22;
        v250 = 16;
        v251 = 0x7fffffffffffffff;
        v252 = -1;
        v253 = 0;
        v254 = 0;
        v255 = 0;
        if (v329 != 0) {
            goto lab_0x518760;
        } else {
            // 0x518ac0
            v134 = v327;
            v124 = v326;
            v176 = v325;
            v177 = v324;
            v122 = v330;
            v120 = 0;
            v178 = v8;
            v118 = 0;
            v116 = v329;
            v114 = 0;
            v112 = 0;
            goto lab_0x518346;
        }
    }
  lab_0x5181ff:
    if (v323 != 0) {
        // 0x5183d8
        v63 = v64;
        v65 = v66;
        if (*(int32_t *)(v4 + 76) != v67) {
            goto lab_0x518207;
        } else {
            goto lab_0x5183e8;
        }
    } else {
        goto lab_0x518207;
    }
  lab_0x518257:
    // 0x518257
    v40 = (int64_t)&g3;
    int64_t v41 = v17; // 0x518271
    int64_t v42 = v19; // 0x518271
    int64_t v43 = v21; // 0x518271
    int32_t * v44 = v23; // 0x518271
    int32_t v45 = v25; // 0x518271
    char v46 = v27; // 0x518271
    int32_t v47 = v29; // 0x518271
    int64_t v48 = v33; // 0x518271
    int64_t v49 = v35; // 0x518271
    int64_t v50 = v37; // 0x518271
    int64_t v51 = v39; // 0x518271
    v52 = v17;
    v53 = v19;
    v54 = v21;
    v55 = v23;
    v56 = v25;
    v57 = v27;
    v58 = v29;
    v59 = v33;
    v60 = v35;
    v61 = v37;
    v62 = v39;
    if ((char)v31 != 0) {
        goto lab_0x518910;
    } else {
        goto lab_0x518277;
    }
  lab_0x518207:
    // 0x518207
    v63 = v64;
    v65 = v66;
    if (*(int32_t *)(v4 + 72) == v67) {
        goto lab_0x5183e8;
    } else {
        int64_t v68 = function_50f6f0((int64_t *)function_50d7a0(v69), (int64_t *)v70); // 0x518221
        if ((char)v68 == 0) {
            int64_t v71 = function_50f7d0(v69); // 0x5189a4
            v63 = (int64_t)*v72;
            v65 = v71 & 0xffffffff;
            goto lab_0x5183e8;
        } else {
            // 0x518232
            v73 = a3;
            v74 = a5;
            v75 = 0x1000000 * (int32_t)v68 >> 24;
            v76 = (int64_t)*v72;
            v77 = v66;
            v78 = 0;
            v79 = v80;
            v81 = 0;
            goto lab_0x518240_3;
        }
    }
  lab_0x5183e8:;
    int32_t * v82 = (int32_t *)(v4 + 76);
    int32_t * v83 = (int32_t *)(v4 + 72);
    int32_t * v84 = (int32_t *)(v4 + 240);
    v85 = (int32_t *)(v4 + 232);
    v86 = (int32_t *)(v4 + 236);
    v87 = a3;
    v88 = a5;
    v89 = v63;
    v90 = v65;
    v91 = 0;
    v92 = v80;
    v93 = 0;
    while (true) {
      lab_0x5183f0:
        // 0x5183f0
        v94 = v93;
        v95 = v92;
        int64_t v96 = v91;
        v97 = v90;
        v98 = v89;
        v99 = v88;
        v100 = v87;
        int32_t v101; // 0x518120
        if (v98 == 0) {
            // 0x5183f0
            v101 = v97;
        } else {
            int32_t v102 = v97;
            v73 = v100;
            v74 = v99;
            v75 = 0;
            v76 = v98;
            v77 = v97;
            v78 = v96;
            v79 = v95;
            v81 = v94;
            v101 = v102;
            if (*v82 == v102) {
                // break -> 0x518240
                break;
            }
        }
        // 0x5183fd
        v103 = v101;
        v73 = v100;
        v74 = v99;
        v75 = 0;
        v76 = v98;
        v77 = v97;
        v78 = v96;
        v79 = v95;
        v81 = v94;
        if (*v83 == v103) {
            // break -> 0x518240
            break;
        }
        // 0x518406
        if (*v84 == v103) {
            int32_t v104 = v95; // 0x518544
            unsigned char v105 = (char)v96 ^ 1 | (char)(v104 == 10); // 0x51854b
            if (v105 == 0) {
                goto lab_0x51841b;
            } else {
                // 0x518554
                v106 = 1;
                v107 = 8;
                v108 = 0;
                if (v5 != 0 && v104 != 8) {
                    // 0x5186f8
                    v106 = v105;
                    v107 = v95;
                    v108 = v94 + 1 & 0xffffffff;
                }
                goto lab_0x518450;
            }
        } else {
            // 0x518412
            v73 = v100;
            v74 = v99;
            v75 = 0;
            v76 = v98;
            v77 = v97;
            v78 = 0;
            v79 = v95;
            v81 = v94;
            if (v96 == 0) {
                // break -> 0x518240
                break;
            }
            goto lab_0x51841b;
        }
    }
    goto lab_0x518240_3;
  lab_0x518910:
    // 0x518910
    function_259ce(&v40, 32);
    v41 = v52;
    v42 = v53;
    v43 = v54;
    v44 = v55;
    v45 = v56;
    v46 = v57;
    v47 = v58;
    v48 = v59;
    v49 = v60;
    v50 = v61;
    v51 = v62;
    goto lab_0x518277;
  lab_0x518760:;
    int64_t v274 = v255;
    int64_t v156 = v254;
    char v154 = v248;
    int32_t v152 = v247;
    int64_t v275 = v245;
    int64_t v276 = v244;
    int64_t v147 = v243;
    int64_t v140; // 0x518120
    int64_t v184; // 0x518120
    int64_t v138; // 0x518120
    int64_t v182; // 0x518120
    int64_t v136; // 0x518120
    int64_t v180; // 0x518120
    char v189; // 0x518120
    int64_t v145; // 0x518120
    int64_t v142; // 0x518120
    int64_t v186; // 0x518120
    int64_t v166; // 0x518120
    int64_t v175; // 0x518120
    int64_t v172; // 0x518120
    int32_t n; // 0x518120
    int64_t v144; // 0x518120
    int64_t v188; // 0x518120
    int64_t v168; // 0x51876b
    int32_t * wstr; // 0x518778
    char * v228; // 0x51878a
    if ((char)v152 != 0) {
        // 0x518a60
        v134 = v147;
        v124 = v276;
        v176 = v275;
        v177 = v246;
        v122 = 0;
        v120 = v154;
        v178 = v152 % 256;
        v118 = v156;
        v116 = 0;
        v114 = v274;
        v112 = 0;
        goto lab_0x518346;
    } else {
        int64_t v277 = v253;
        v166 = v252;
        v175 = v251;
        v172 = v250;
        n = v249;
        v168 = v4 + 240;
        wstr = (int32_t *)v168;
        v228 = (char *)(v4 + 32);
        char v278 = *v228; // 0x51878a
        v144 = v276;
        v142 = v275;
        v145 = v277;
        v140 = 0;
        v138 = v274;
        v136 = 0;
        if (v278 == 0) {
            goto lab_0x51879b;
        } else {
            // 0x518792
            v144 = v276;
            v142 = v275;
            v145 = v277;
            v140 = 0;
            v138 = v274;
            v136 = 0;
            v188 = v276;
            v186 = v275;
            v189 = v278;
            v184 = 0;
            v182 = v274;
            v180 = 0;
            if (*(int32_t *)(v4 + 76) == (int32_t)v277) {
                goto lab_0x518872;
            } else {
                goto lab_0x51879b;
            }
        }
    }
  lab_0x518277:;
    int64_t v229 = v51;
    v230 = v49;
    int64_t v231 = v48;
    int32_t v232 = v47;
    v233 = v46;
    v234 = v45;
    v235 = v44;
    v236 = v43;
    v237 = v42;
    v238 = v41;
    v239 = 0x100000000 * v50 >> 32;
    unsigned char v240 = *(char *)(v4 + 328); // 0x518293
    v241 = v233 == 0 ? 0x7fffffffffffffff : -0x8000000000000000;
    v242 = v241 / v239;
    v243 = v238;
    v244 = v237;
    v245 = v236;
    v246 = v235;
    v247 = v234;
    v248 = v233;
    v249 = v232;
    v250 = v239;
    v251 = v241;
    v252 = v242;
    v253 = v231;
    v254 = v230;
    v255 = v229;
    int64_t v155; // 0x518120
    int64_t v157; // 0x518120
    int64_t v158; // 0x518120
    int64_t v159; // 0x518120
    int64_t v149; // 0x518120
    char v153; // 0x518120
    int32_t v151; // 0x518120
    int32_t * v150; // 0x518120
    int64_t v146; // 0x518120
    int64_t v148; // 0x518120
    if (v240 != 0) {
        goto lab_0x518760;
    } else {
        int64_t v256 = v234 % 256;
        v134 = v238;
        v124 = v237;
        v176 = v236;
        v177 = v235;
        v122 = 0;
        v120 = v233;
        v178 = v256;
        v118 = v230;
        v116 = v240;
        v114 = v229;
        v112 = 0;
        if ((char)v234 != 0) {
            goto lab_0x518346;
        } else {
            int64_t v257 = v232 + 48;
            v258 = (int64_t)v235;
            v259 = v231;
            v260 = v256;
            v261 = v229;
            v262 = 0;
            while (true) {
              lab_0x5182df:
                // 0x5182df
                v263 = v262;
                v264 = v261;
                v265 = v260;
                int64_t v266 = v259;
                if (v232 < 11) {
                    // 0x5182eb
                    v146 = v238;
                    v148 = v237;
                    v149 = v236;
                    v150 = v235;
                    v151 = v234;
                    v153 = v233;
                    v155 = v230;
                    v157 = v265;
                    v158 = v264;
                    v159 = v263;
                    if (v266 < v257 != (int32_t)v266 > 47) {
                        // break -> 0x518710
                        break;
                    }
                    // 0x5182fe
                    v267 = v266 + 0xffffffd0;
                    goto lab_0x518301;
                } else {
                    int64_t v268 = v266 + 0xffffffd0; // 0x5185b0
                    v267 = v268;
                    if ((int32_t)v268 < 10) {
                        goto lab_0x518301;
                    } else {
                        int32_t v269 = v266;
                        if (v269 < 103) {
                            // 0x518708
                            v267 = v266 + 0xffffffa9;
                            goto lab_0x518301;
                        } else {
                            // 0x5185c4
                            v146 = v238;
                            v148 = v237;
                            v149 = v236;
                            v150 = v235;
                            v151 = v234;
                            v153 = v233;
                            v155 = v230;
                            v157 = v265;
                            v158 = v264;
                            v159 = v263;
                            if (v269 >= 71) {
                                // break -> 0x518710
                                break;
                            }
                            // 0x5185d0
                            v270 = v264;
                            v271 = v263;
                            v272 = 1;
                            v273 = v266 + 0xffffffc9;
                            if (v242 < v263) {
                                goto lab_0x518312;
                            } else {
                                goto lab_0x5185e0;
                            }
                        }
                    }
                }
            }
            goto lab_0x518710;
        }
    }
  lab_0x518240_3:;
    int32_t v109 = v79;
    v28 = v109;
    v16 = v69;
    v18 = v73;
    v20 = v74;
    v22 = v70;
    v24 = v75;
    v26 = v110;
    v30 = v76;
    v32 = v77;
    v34 = v78;
    v36 = v79;
    v38 = v81;
    v17 = v69;
    v19 = v73;
    v21 = v74;
    v23 = v70;
    v25 = v75;
    v27 = v110;
    v29 = 22;
    v31 = v76;
    v33 = v77;
    v35 = v78;
    v37 = v79;
    v39 = v81;
    if (v109 == 16) {
        goto lab_0x518257;
    } else {
        goto lab_0x51824f;
    }
  lab_0x518346:;
    int64_t v111 = v112;
    int64_t v113 = v114;
    int64_t v115 = v116;
    int64_t v117 = v118;
    char v119 = v120;
    int32_t v121 = v122;
    int64_t v123 = v124;
    int64_t v125 = v40; // 0x518346
    int64_t v126; // 0x518120
    int64_t v127; // 0x518120
    int64_t v128; // 0x518120
    int64_t v129; // 0x518120
    if (*(int64_t *)(v125 - 24) != 0) {
        int64_t v130 = (int64_t)&v40; // 0x51863f
        function_451f2(&v40, 0x100000000000000 * v113 >> 56);
        int64_t v131 = *(int64_t *)(v4 + 16); // 0x51864c
        if ((char)function_569070(v131, *(int64_t *)(v4 + 24), v130) == 0) {
            // 0x51865d
            *(int32_t *)a7 = 4;
        }
        int64_t v132 = v40; // 0x51866b
        v129 = v130;
        v127 = v132;
        if ((char)v117 == 1 || (int32_t)v113 != 0) {
            goto lab_0x518686;
        } else {
            // 0x51867b
            v128 = v130;
            v126 = v132;
            v129 = v130;
            v127 = v132;
            if (*(int64_t *)(v132 - 24) == 0) {
                goto lab_0x51836c;
            } else {
                goto lab_0x518686;
            }
        }
    } else {
        int64_t v133 = v134;
        v129 = v133;
        v127 = v125;
        if ((char)v117 == 1) {
            goto lab_0x518686;
        } else {
            // 0x518363
            v128 = v133;
            v126 = v125;
            v129 = v133;
            v127 = v125;
            if ((int32_t)v113 != 0) {
                goto lab_0x518686;
            } else {
                goto lab_0x51836c;
            }
        }
    }
  lab_0x51879b:;
    int64_t v135 = v136;
    int64_t v137 = v138;
    int64_t v139 = v140;
    int64_t v141 = v142;
    int64_t v143 = v144;
    int32_t c = v145; // 0x51879b
    v146 = v147;
    v148 = v143;
    v149 = v141;
    v150 = wstr;
    v151 = v152;
    v153 = v154;
    v155 = v156;
    v157 = v139;
    v158 = v137;
    v159 = v135;
    int64_t v160; // 0x518120
    int64_t v161; // 0x518120
    int64_t v162; // 0x518120
    int64_t v163; // 0x518120
    int64_t v164; // 0x518120
    if (*(int32_t *)(v4 + 72) == c) {
        goto lab_0x518710;
    } else {
        int32_t * v165 = wmemchr(wstr, c, n); // 0x5187b3
        v146 = v147;
        v148 = v143;
        v149 = v141;
        v150 = wstr;
        v151 = v152;
        v153 = v154;
        v155 = v156;
        v157 = v139;
        v158 = v137;
        v159 = v135;
        if (v165 == NULL) {
            goto lab_0x518710;
        } else {
            // 0x5187c1
            v164 = v143;
            v163 = v141;
            v160 = 1;
            v161 = v137;
            v162 = v135;
            if (v135 <= 0x100000000 * v166 >> 32) {
                int64_t v167 = (int64_t)v165 - v168 >> 2; // 0x5187c4
                int32_t v169 = v167; // 0x5187cb
                int32_t v170 = v169 - 15; // 0x5187cb
                uint64_t v171 = v135 * v172; // 0x5187dc
                int64_t v173 = 0x100000000 * v167;
                int64_t v174 = (v170 < 0 == (14 - v169 & v169) < 0 == (v170 != 0) ? v173 - 0x600000000 : v173) >> 32; // 0x5187e7
                v164 = v143;
                v163 = v141;
                v160 = v139 & 0xffffffff | (int64_t)(v175 - v174 < v171);
                v161 = v137 + 1 & 0xffffffff;
                v162 = v174 + v171;
            }
            goto lab_0x5187fc;
        }
    }
  lab_0x518710:
    // 0x518710
    v134 = v146;
    v124 = v148;
    v176 = v149;
    v177 = v150;
    v122 = v151;
    v120 = v153;
    v178 = 0;
    v118 = v155;
    v116 = v157;
    v114 = v158;
    v112 = v159;
    goto lab_0x518346;
  lab_0x518872:;
    int64_t v179 = v180;
    int64_t v181 = v182;
    int64_t v183 = v184;
    int64_t v185 = v186;
    int64_t v187 = v188;
    if ((int32_t)v181 == 0) {
        // 0x518a43
        v134 = v147;
        v124 = v187;
        v176 = v185;
        v177 = wstr;
        v122 = v189;
        v120 = v154;
        v178 = 0;
        v118 = v156;
        v116 = v183;
        v114 = v181;
        v112 = v179;
        goto lab_0x518346;
    } else {
        // 0x51887b
        function_451f2(&v40, 0x100000000000000 * v181 >> 56);
        v164 = v187;
        v163 = v185;
        v160 = v183;
        v161 = 0;
        v162 = v179;
        goto lab_0x5187fc;
    }
  lab_0x518686:;
    int64_t v190 = v127;
    int64_t v191 = v129;
    v128 = v191;
    v126 = v190;
    int64_t v192; // 0x518120
    int64_t v193; // 0x518120
    if ((char)v121 != 0) {
        goto lab_0x51836c;
    } else {
        if ((char)v115 == 0) {
            // 0x518980
            *(int64_t *)a8 = v119 != 0 ? -v111 : v111;
            v193 = v191;
            v192 = v190;
        } else {
            // 0x51869a
            *(int64_t *)a8 = v119 == 0 ? 0x7fffffffffffffff : -0x8000000000000000;
            *(int32_t *)a7 = 4;
            v193 = v191;
            v192 = v190;
        }
        goto lab_0x518383;
    }
  lab_0x51836c:
    // 0x51836c
    *(int64_t *)a8 = 0;
    *(int32_t *)a7 = 4;
    v193 = v128;
    v192 = v126;
    goto lab_0x518383;
  lab_0x5187fc:;
    int64_t v198 = v162;
    int64_t v199 = v161;
    int64_t v200 = v160;
    int64_t v201 = v163;
    int64_t v202 = v1; // 0x5187fc
    int64_t v203 = v164; // 0x518804
    if (v202 != 0) {
        int64_t * v204 = (int64_t *)(v202 + 16); // 0x518806
        uint64_t v205 = *v204; // 0x518806
        v203 = -1;
        if (v205 < *(int64_t *)(v202 + 24)) {
            // 0x518814
            *v204 = v205 + 4;
            v203 = -1;
        }
    }
    int64_t v206 = v203;
    int64_t v207 = function_50f7d0(v147); // 0x518828
    int64_t v208 = v2; // 0x51882d
    int64_t v209 = v201; // 0x51883b
    char v210 = 1; // 0x51883b
    if (v208 != 0) {
        // 0x518841
        v209 = v201;
        v210 = 0;
        if ((int32_t)v201 == -1) {
            uint64_t v211 = *(int64_t *)(v208 + 16); // 0x5188a8
            int64_t v212; // 0x518120
            if (v211 >= *(int64_t *)(v208 + 24)) {
                // 0x5189d0
                v212 = *(int64_t *)v208;
            } else {
                // 0x5188b6
                v212 = (int64_t)*(int32_t *)v211;
            }
            int64_t v213 = v212;
            if ((int32_t)v213 == -1) {
                // 0x518968
                v2 = 0;
                v209 = v201;
                v210 = 1;
            } else {
                // 0x5188c1
                v209 = 0x100000000 * v213 >> 32;
                v210 = 0;
            }
        }
    }
    int64_t v214 = v209;
    v215 = v147;
    v216 = v206;
    v217 = v214;
    v218 = wstr;
    v219 = v152;
    v220 = v154;
    v221 = v156;
    v222 = v200;
    v223 = v199;
    v224 = v198;
    if (v210 == (char)((int32_t)v207 == -1)) {
        goto lab_0x518341;
    } else {
        int64_t v225 = function_50f7d0(v147); // 0x518856
        int64_t v226 = v225 & 0xffffffff; // 0x51885b
        char v227 = *v228; // 0x51885d
        v144 = v206;
        v142 = v214;
        v145 = v226;
        v140 = v200;
        v138 = v199;
        v136 = v198;
        if (v227 == 0) {
            goto lab_0x51879b;
        } else {
            // 0x518869
            v144 = v206;
            v142 = v214;
            v145 = v226;
            v140 = v200;
            v138 = v199;
            v136 = v198;
            v188 = v206;
            v186 = v214;
            v189 = v227;
            v184 = v200;
            v182 = v199;
            v180 = v198;
            if (*(int32_t *)(v4 + 76) != (int32_t)v225) {
                goto lab_0x51879b;
            } else {
                goto lab_0x518872;
            }
        }
    }
  lab_0x518383:
    // 0x518383
    if ((char)v178 != 0) {
        int32_t * v194 = (int32_t *)a7; // 0x51838c
        *v194 = *v194 | 2;
    }
    int64_t v195 = v192 - 24; // 0x51838f
    int64_t result = v1; // 0x518398
    int64_t v196 = v193; // 0x5183a2
    if (v195 != (int64_t)&g2) {
        // 0x5189f0
        int64_t v197; // bp-73, 0x518120
        function_508620(v195, &v197, v123);
        v196 = result;
    }
    // 0x5183a8
    if (v3 == __readfsqword(40)) {
        // 0x5183bf
        return result;
    }
    // 0x518a75
    __stack_chk_fail();
    v12 = v196;
    v13 = v123;
    v9 = v176;
    v10 = v177;
    v8 = v178;
    goto lab_0x518a7a;
}

// Address range: 0x518acd - 0x518ace
int64_t function_518acd(void) {
    // 0x518acd
    int64_t result; // 0x518acd
    return result;
}

// Address range: 0x518aed - 0x518af8
int64_t function_518aed(int64_t a1) {
    // 0x518aed
    int64_t result; // 0x518aed
    int32_t * v1 = (int32_t *)(result - 119); // 0x518aed
    *v1 = *v1 - 1;
    return result;
}
