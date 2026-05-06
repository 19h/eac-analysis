/*
 * Targeted RetDec C for native executable gap queue batch 1466.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3643be-0x3645be rank=- name=- kind=- bytes=- uncovered=-
 *   0x3647be-0x3649be rank=- name=- kind=- bytes=- uncovered=-
 *   0x364bbe-0x364dbe rank=- name=- kind=- bytes=- uncovered=-
 *   0x364dbe-0x364fbe rank=- name=- kind=- bytes=- uncovered=-
 *   0x364fbe-0x3650ab rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b78c9-0x3b7ac9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b7ac9-0x3b7cc9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b7cc9-0x3b7ec9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3b7ec9-0x3b80c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fadd6-0x4fafd6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fafd6-0x4fb1d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fb1d6-0x4fb3d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fb3d6-0x4fb5d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fb5d6-0x4fb7d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fb7d6-0x4fb9d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fb9d6-0x4fbb00 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_13d6530();
int64_t function_17878d1();
int64_t function_1fd40();
int64_t function_20540();
int64_t function_20a50();
int64_t function_29cbda8f();
int64_t function_3643be(void);
int64_t function_3643c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3643e8(void);
int64_t function_364411(void);
int64_t function_364474(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3644db(void);
int64_t function_3644fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_36452a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36459e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3645bd(void);
int64_t function_3645d7();
int64_t function_3647be(void);
int64_t function_3647db(void);
int64_t function_364873(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3648c4(void);
int64_t function_3648f0(int64_t a1);
int64_t function_36492d(int64_t a1);
int64_t function_364934(int64_t a1);
int64_t function_3649a5(int64_t a1);
int64_t function_3649b1(void);
int64_t function_364b6b();
int64_t function_364bbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_364bfc(void);
int64_t function_364c2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_364cce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_364ded(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_364df9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_364e48(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_364e8c(int64_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_364f80(int64_t a1);
int64_t function_364fc7(void);
int64_t function_364ff4(int64_t a1);
int64_t function_36500b(void);
int64_t function_36505a(void);
int64_t function_36508c(int64_t a1);
int64_t function_3b78c9(void);
int64_t function_3b794c(void);
int64_t function_3b7996(void);
int64_t function_3b79c0(void);
int64_t function_3b79d4(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_3b7a53(void);
int64_t function_3b7aeb(int64_t a1);
int64_t function_3b7b92(void);
int64_t function_3b7bad(void);
int64_t function_3b7c28(int64_t a1);
int64_t function_3b7c31(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b7c6e(int64_t a1, int64_t a2);
int64_t function_3b7c7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b7cfa(void);
int64_t function_3b7d01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b7d84(void);
int64_t function_3b7da4(void);
int64_t function_3b7db7(int64_t a1);
int64_t function_3b7dfe(int64_t a1, int64_t a2);
int64_t function_3b7e95(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3b7ef9(void);
int64_t function_3b7f5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3b8014(void);
int64_t function_3b801c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3b8074(void);
int64_t function_3b8095(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3cfde916();
int64_t function_3d367954();
int64_t function_435bb62();
int64_t function_4f8cc0();
int64_t function_4fad40();
int64_t function_4fadb1();
int64_t function_4fadb8();
int64_t function_4fadd6(int64_t a1, int64_t a2);
int64_t function_4fadec(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fae80(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fafc0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fb100(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fb240(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fb380(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fb4c0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fb600(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fb740(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fb880(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fb9c0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fca70();
int64_t function_5423f0();
int64_t function_555b835();
int64_t function_703bf9ab();
int64_t function_ffffffffb6429fe5();
int64_t function_ffffffffba324870();
int64_t function_ffffffffe98d4f04();
int64_t function_fffffffff8187e14();
int64_t unknown_10f7aea7();
int64_t unknown_16942612();
int64_t unknown_194211b8();
int64_t unknown_30848ae6();
int64_t unknown_38a60e01();
int64_t unknown_3d3d677b();
int64_t unknown_4404d75d();
int64_t unknown_5926dfb2();
int64_t unknown_6242464e();
int64_t unknown_66517657();
int64_t unknown_698d55e9();
int64_t unknown_69fe09ff();
int64_t unknown_7236eaad();
int64_t unknown_7541112();
int64_t unknown_76af0ffd();
int64_t unknown_77beea88();
int64_t unknown_7a28513b();
int64_t unknown_7be2949e();
int64_t unknown_ffffffff893cb6da();
int64_t unknown_ffffffff89c4aa4b();
int64_t unknown_ffffffff8a3deea5();
int64_t unknown_ffffffff8a6a4a6a();
int64_t unknown_ffffffff95d241c4();
int64_t unknown_ffffffff99e30461();
int64_t unknown_ffffffffa03b5e89();
int64_t unknown_ffffffffa0447196();
int64_t unknown_ffffffffa063e2b8();
int64_t unknown_ffffffffa0b2f6d8();
int64_t unknown_ffffffffb4735ed6();
int64_t unknown_ffffffffc127723e();
int64_t unknown_ffffffffccc99f07();
int64_t unknown_ffffffffceba4607();
int64_t unknown_ffffffffd4039cb7();
int64_t unknown_fffffffffe8c4818();
int64_t unknown_ffffffffffbda247();

// Address range: 0x3643be - 0x3643c7
int64_t function_3643be(void) {
    char v1 = *(char *)0x7bfcfac5; // 0x3643be
    int64_t result; // 0x3643be
    *(char *)0x7bfcfac5 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x3643c7 - 0x3643e7
int64_t function_3643c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3643c7
    int64_t v1; // bp-8, 0x3643c7
    int64_t v2; // 0x3643c7
    *(int32_t *)a4 = (int32_t)(int64_t)&v1 + (int32_t)v2;
    int64_t v3; // 0x3643c7
    *(char *)a1 = *(char *)&v3 >> 1;
    float80_t v4; // 0x3643c7
    *(int32_t *)0x3c00e404 = (int32_t)v4;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return 0x8c001086;
}

// Address range: 0x3643e8 - 0x3643f3
int64_t function_3643e8(void) {
    // 0x3643e8
    int64_t v1; // 0x3643e8
    uint64_t v2 = v1;
    bool v3; // 0x3643e8
    return v2 / 128 % 0x2000000 | 0x4000000 * v2 & 0xfc000000 | 0x2000000 * (int64_t)v3;
}

// Address range: 0x364411 - 0x364412
int64_t function_364411(void) {
    // 0x364411
    int64_t result; // 0x364411
    return result;
}

// Address range: 0x364474 - 0x3644d7
int64_t function_364474(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x68135b3c); // 0x364479
    *v1 = *v1 + (int32_t)a4;
    unknown_77beea88();
    uint32_t v2 = *(int32_t *)0x13dcf9e00186939 & -182;
    char * v3 = (char *)(int64_t)v2; // 0x36449d
    int64_t v4; // 0x364474
    *v3 = *v3 + (char)v2 + (char)(v2 < *(int32_t *)&v4);
    int64_t v5; // 0x364474
    char * v6 = (char *)(v5 + 0xc61900); // 0x3644bc
    *v6 = *v6 | 82;
    __asm_out(19, *(char *)-0x9702fff97fe4ff6 + 28);
    bool v7; // 0x364474
    char * v8 = (char *)(a1 - 0x31cfdd77 + (v7 ? -4 : 4)); // 0x3644c9
    *v8 = *v8 + (char)v5;
    return function_3d367954();
}

// Address range: 0x3644db - 0x3644e0
int64_t function_3644db(void) {
    // 0x3644db
    return function_ffffffffba324870();
}

// Address range: 0x3644fa - 0x364529
int64_t function_3644fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3644fa
    bool v1; // 0x3644fa
    int64_t v2 = (v1 ? -1 : 1) + a2; // 0x3644fc
    __asm_int1();
    int32_t * v3 = (int32_t *)(256 * unknown_ffffffffccc99f07() & 0xff00 | a3); // 0x36450b
    *v3 = *v3 + (int32_t)v2;
    unknown_ffffffffa0b2f6d8();
    *(int32_t *)a1 = *(int32_t *)v2;
    int64_t v4 = v1 ? -4 : 4; // 0x364526
    return function_36459e(v4 + a1, v2 + v4, a6, a4);
}

// Address range: 0x36452a - 0x364595
int64_t function_36452a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x36452a
    int64_t v1; // 0x36452a
    int32_t * v2 = (int32_t *)(v1 - 10); // 0x36452c
    int32_t v3 = v1; // 0x36452c
    *v2 = *v2 + v3;
    int64_t v4; // 0x36452a
    *(char *)a3 = *(char *)&v4 + (char)v1;
    char * v5 = (char *)(v1 - 0x179a97b2); // 0x364531
    *v5 = *v5 - (char)(v1 / 256);
    int32_t * v6 = (int32_t *)(a3 - 0x7c4718); // 0x364537
    *v6 = *v6 + v3;
    int64_t v7 = unknown_ffffffffffbda247(); // 0x364541
    int64_t v8; // 0x36452a
    unsigned char v9 = *(char *)&v8; // 0x364546
    if (v7 > (int64_t)v9) {
        // 0x364556
        if ((char)unknown_4404d75d() < 113) {
            function_3645d7();
        }
        // 0x364562
        unknown_ffffffff8a6a4a6a();
        return function_3cfde916();
    }
    if (v9 <= (char)v7) {
        function_3645bd();
    }
    // 0x364583
    unknown_ffffffffa03b5e89();
    return unknown_ffffffffa0447196(a5, a2 - 4);
}

// Address range: 0x36459e - 0x3645ba
int64_t function_36459e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36459e
    int64_t v1; // 0x36459e
    *(int32_t *)a1 = (int32_t)v1;
    int64_t result = unknown_7236eaad(); // 0x3645a7
    char * v2 = (char *)(v1 + 99); // 0x3645ac
    *v2 = *v2 + (char)a3;
    return result;
}

// Address range: 0x3645bd - 0x3645be
int64_t function_3645bd(void) {
    // 0x3645bd
    int64_t result; // 0x3645bd
    return result;
}

// Address range: 0x3647be - 0x3647c3
int64_t function_3647be(void) {
    // 0x3647be
    return unknown_ffffffff95d241c4();
}

// Address range: 0x3647db - 0x3647e0
int64_t function_3647db(void) {
    // 0x3647db
    int64_t v1; // 0x3647db
    int64_t v2 = v1;
    return (v2 + 115) % 256 | v2 & -256;
}

// Address range: 0x364873 - 0x3648b6
int64_t function_364873(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x364873
    bool v1; // 0x364873
    if (v1) {
        // 0x3648a7
        __asm_iretd();
        return unknown_ffffffffd4039cb7();
    }
    // 0x364875
    int64_t result; // 0x364873
    return result;
}

// Address range: 0x3648c4 - 0x3648c9
int64_t function_3648c4(void) {
    // 0x3648c4
    int64_t result; // 0x3648c4
    __asm_out(-45, (char)result);
    return result;
}

// Address range: 0x3648f0 - 0x3648f6
int64_t function_3648f0(int64_t a1) {
    // 0x3648f0
    int64_t result; // 0x3648f0
    *(int32_t *)a1 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x36492d - 0x36492e
int64_t function_36492d(int64_t a1) {
    // 0x36492d
    int64_t result; // 0x36492d
    return result;
}

// Address range: 0x364934 - 0x364949
int64_t function_364934(int64_t a1) {
    // 0x364934
    int64_t v1; // 0x364934
    int64_t v2 = v1;
    int64_t v3 = (v2 + v1) % 256 | v2 & -256; // 0x364934
    int32_t * v4 = (int32_t *)v3; // 0x364936
    *v4 = *v4 | (int32_t)v3;
    unknown_ffffffffc127723e();
    int32_t * v5 = (int32_t *)(a1 - 0x5f2a4519 + 2 * v1); // 0x36493d
    *v5 = *v5 & (int32_t)v1;
    return function_435bb62();
}

// Address range: 0x3649a5 - 0x3649a6
int64_t function_3649a5(int64_t a1) {
    // 0x3649a5
    int64_t result; // 0x3649a5
    return result;
}

// Address range: 0x3649b1 - 0x3649b4
int64_t function_3649b1(void) {
    // 0x3649b1
    int64_t result; // 0x3649b1
    return result;
}

// Address range: 0x364bbe - 0x364bf5
int64_t function_364bbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    *(int32_t *)0x1d6be9c5 = *(int32_t *)0x1d6be9c5 + (int32_t)a1;
    int64_t result; // 0x364bbe
    int64_t v2 = result / 256 % 256 ^ a4; // 0x364bc4
    uint64_t v3 = __asm_hlt(); // 0x364bc6
    int64_t v4 = result + 0x17b6bec6; // 0x364bc8
    int32_t * v5 = (int32_t *)v2; // 0x364bcd
    *v5 = *v5 + (int32_t)v4;
    char v6 = __asm_in(84); // 0x364bcf
    char * v7 = (char *)(result - 70); // 0x364bd7
    *v7 = *v7 & (char)(v3 / 256);
    uint32_t v8 = (int32_t)v2 % 32; // 0x364bdd
    if (v8 != 0) {
        uint64_t v9 = v4 & 0xffffff00 | (int64_t)v6; // 0x364bcf
        char v10 = *(char *)(v9 + (v3 & 0xffffffff)); // 0x364bda
        int32_t * v11 = (int32_t *)(256 * (int64_t)(v10 | (char)(v9 / 256)) | v9 & -0xff01); // 0x364bdd
        uint32_t v12 = *v11; // 0x364bdd
        *v11 = v12 >> 32 - v8 | v12 << v8;
    }
    unknown_30848ae6();
    int32_t v13 = *(int32_t *)&v1; // 0x364be5
    *(int32_t *)v1 = v13 - (int32_t)result;
    if (result <= (int64_t)v13) {
        function_364b6b();
    }
    // 0x364bea
    return result;
}

// Address range: 0x364bfc - 0x364bfd
int64_t function_364bfc(void) {
    // 0x364bfc
    int64_t result; // 0x364bfc
    return result;
}

// Address range: 0x364c2b - 0x364cba
int64_t function_364c2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3; // 0x364c2b
    char * v4 = (char *)(8 * v3 + 0x6e49a301 + v3); // 0x364c2b
    *v4 = *v4 + (char)a4;
    unsigned char v5 = (char)v3 + 9; // 0x364c32
    if (v5 == 0) {
      lab_0x364c42:
        // 0x364c42
        function_364bfc();
        char * v6 = (char *)(unknown_ffffffff89c4aa4b() + 0x1e8fa25); // 0x364c4a
        *v6 = *v6 + (char)v1;
        return unknown_ffffffff99e30461();
    }
    int64_t v7 = v3 & -256 | (int64_t)v5; // 0x364c2b
    int64_t v8 = a1 + v2; // 0x364c82
    int64_t v9 = v7 & 0xffffff17 | 232; // 0x364c84
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v3;
    int64_t v10 = a4 & 0xffffffff; // 0x364c90
    int64_t v11 = v8 & 0xffffffff; // 0x364c91
    int32_t * v12 = (int32_t *)v9; // 0x364c93
    int32_t v13 = v8;
    *v12 = *v12 + v13;
    uint64_t v14 = v7 / 256; // 0x364c84
    *(char *)v1 = *(char *)&v1 + (char)v14;
    int64_t v15 = unknown_10f7aea7(v10); // 0x364ca1
    uint32_t v16 = *(int32_t *)&v2; // 0x364ca6
    uint32_t v17 = (int32_t)v1;
    int32_t v18 = v16 - v17; // 0x364ca6
    *(int32_t *)v2 = v18;
    while (v18 == 0) {
        int32_t * v19 = (int32_t *)(v2 + 0x366d10 + 8 * v1); // 0x364c65
        *v19 = *v19 + (int32_t)v2;
        if (llvm_ctpop_i8(*(char *)v11) % 2 != 0) {
            // 0x364c71
            return (v8 + v14) % 256 | v8 & 0xffffff00;
        }
        int64_t v20 = v1; // 0x364c7f
        v7 = v8 & 0xffffff00 | (int64_t)__asm_in_133((int16_t)v20);
        if ((*(int32_t *)(v2 + 58) & 0x9194fc) == 0) {
            goto lab_0x364c42;
        }
        int64_t v21 = v9;
        v8 = v10 + v2;
        v9 = v7 & 0xffffff17 | 232;
        *(int32_t *)v20 = (int32_t)v20 + (int32_t)v3;
        v10 = v21 & 0xffffffff;
        v11 = v8 & 0xffffffff;
        v12 = (int32_t *)v9;
        v13 = v8;
        *v12 = *v12 + v13;
        v14 = v7 / 256;
        *(char *)v1 = *(char *)&v1 + (char)v14;
        v15 = unknown_10f7aea7(v10);
        v16 = *(int32_t *)&v2;
        v17 = (int32_t)v1;
        v18 = v16 - v17;
        *(int32_t *)v2 = v18;
    }
    int32_t * v22 = (int32_t *)(v11 + 9); // 0x364caa
    *v22 = (int32_t)(v16 < v17) - v13 + *v22;
    int64_t v23; // 0x364c2b
    *(int32_t *)v23 = *(int32_t *)&v23 / 2;
    return v15 + 0xffffffff & 0xffffffff ^ 28;
}

// Address range: 0x364cce - 0x364d73
int64_t function_364cce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffb4735ed6(); // 0x364cd0
    uint32_t v3 = -24 * *(int32_t *)(a2 - 58); // 0x364cdc
    int64_t v4 = v3; // 0x364cdc
    int32_t * v5 = (int32_t *)(a7 - 82); // 0x364ce0
    *v5 = *v5 + (int32_t)a1;
    int64_t v6 = __asm_iretd(); // 0x364ce3
    uint32_t v7 = (int32_t)a7; // 0x364cf6
    if (v7 >= 0xd3723cb5) {
        int32_t * v8 = (int32_t *)(a1 - 0x57fe6206); // 0x364cfe
        *v8 = *v8 + v3;
        char * v9 = (char *)((a7 & 0xffffff51 | 174) + v4); // 0x364d04
        *v9 = *v9 ^ -118;
        int64_t v10 = unknown_7541112() + (v6 & 0xffffffff); // 0x364d11
        return (v10 + 200) % 256 | v10 & 0xffffff00;
    }
    // 0x364d3a
    int64_t v11; // 0x364cce
    char v12 = *(char *)(v11 - 0x76f5c5f8); // 0x364ce4
    int64_t v13 = a3 & -256 | (int64_t)(v12 | (char)a3); // 0x364ce4
    unsigned char v14 = *(char *)(v13 + 0x3601e8d9) & (char)v2; // 0x364ceb
    int32_t * v15 = (int32_t *)(4 * v11 - 0x6140a9bf); // 0x364d3a
    *v15 = *v15 + v7;
    int16_t v16 = v13; // 0x364d41
    __asm_outsd(v16, *(int32_t *)&v1);
    __asm_wait(a1, v1);
    int32_t * v17 = (int32_t *)((v2 & 0xffffff00 | (int64_t)v14) - 14); // 0x364d47
    *v17 = *v17 + (int32_t)v1;
    int64_t v18 = v4 - 8; // 0x364d4a
    int64_t * v19 = (int64_t *)v18; // 0x364d4a
    *v19 = a1;
    __asm_outsd(v16, *(int32_t *)&v1);
    char v20 = *(char *)0x48383567 + v14; // 0x364d54
    unsigned char v21 = llvm_ctpop_i8(v20); // 0x364d54
    *(char *)0x48383567 = v20;
    if (v21 % 2 == 0) {
        // 0x364d5d
        return __asm_sti(a1);
    }
    int64_t v22 = *v19; // 0x364d62
    int32_t * v23 = (int32_t *)(v22 - 55); // 0x364d65
    uint32_t v24 = *v23; // 0x364d65
    uint32_t v25 = (int32_t)v18 + 8 + v24; // 0x364d65
    *v23 = v25;
    return ((v22 + 209 + (int64_t)(v25 < v24)) % 256 | v22 & 0xffffff00) + v6 & 0xffffffff ^ 16;
}

// Address range: 0x364ded - 0x364df7
int64_t function_364ded(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x364ded
    int64_t v1; // 0x364ded
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return (v3 - a4 / 256) % 256 | v3 & -256;
}

// Address range: 0x364df9 - 0x364e23
int64_t function_364df9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x364df9
    __asm_hlt();
    *(char *)a1 = __asm_insb((int16_t)a3);
    uint64_t v1 = unknown_38a60e01(); // 0x364dfb
    int64_t v2; // 0x364df9
    *(char *)v2 = *(char *)&v2 + (char)a4;
    int64_t v3; // 0x364df9
    char v4 = *(char *)(v3 - 24); // 0x364e04
    uint32_t v5 = (0x10000 * (int32_t)a3 >> 16) + (int32_t)v2; // 0x364e07
    int64_t v6 = (v2 | (int64_t)v5) & 0xff00 | (int64_t)(v5 & -0xff01); // 0x364e09
    int32_t * v7 = (int32_t *)(v3 - 107); // 0x364e0e
    *v7 = *v7 & -0x76a4fe18;
    *(int32_t *)v6 = (int32_t)v6;
    int32_t * v8 = (int32_t *)(a2 - 0x1712570c); // 0x364e17
    *v8 = *v8 | -0x7b84e4ff;
    return function_364e8c(a1, a2, 256 * (int64_t)(v4 | (char)(v1 / 256)) | v1 & 0xffff00ff, (int32_t)(a4 | a2));
}

// Address range: 0x364e48 - 0x364e6b
int64_t function_364e48(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_6242464e(); // 0x364e48
    int64_t v2 = unknown_66517657(); // 0x364e51
    __asm_outsb((int16_t)a3, *(char *)(v1 + a2 & 0xffffffff));
    char * v3 = (char *)(v2 + 0x77ca000); // 0x364e57
    *v3 = *v3 + (char)v2;
    int64_t v4; // 0x364e48
    int32_t * v5 = (int32_t *)(v4 + 0x73014d00); // 0x364e60
    *v5 = *v5 + (int32_t)v4;
    return function_ffffffffe98d4f04();
}

// Address range: 0x364e8c - 0x364f41
int64_t function_364e8c(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x364e8c
    float80_t v1; // 0x364e8c
    *(int16_t *)(a3 - 0x25f19215) = (int16_t)v1;
    unknown_ffffffff8a3deea5();
    int64_t v2; // 0x364e8c
    int32_t v3 = *(int32_t *)&v2; // 0x364ea6
    uint32_t v4 = v3 ^ a4; // 0x364ea6
    if (v4 == 0) {
        // 0x364eab
        return unknown_5926dfb2();
    }
    uint64_t v5 = (int64_t)v4 - a2; // 0x364eea
    int64_t v6 = a3 & 0xffffffff; // 0x364eec
    int32_t v7 = a3; // 0x364eee
    __asm_out_134(-92, v7);
    *(char *)v6 = (char)v3 + (char)a3;
    *(char *)(int64_t)(0x10000 * v7 >> 16 ^ 144) = (char)(v5 / 256);
    unknown_69fe09ff();
    bool v8; // 0x364e8c
    int64_t v9 = v8 ? -4 : 4; // 0x364f00
    int64_t v10 = v9 + a1; // 0x364f00
    int64_t v11 = v9 + a2; // 0x364f00
    int32_t * v12 = (int32_t *)(v6 - 0xa195a37); // 0x364f07
    *v12 = *v12 + (int32_t)v11;
    int64_t v13 = __asm_wait(v10, v11); // 0x364f0d
    *(int32_t *)0x298035f77f6601e8 = (int32_t)v13;
    *(char *)v10 = __asm_insb(0x62c9);
    uint32_t v14 = (int32_t)v5 % 32; // 0x364f2c
    if (v14 != 0) {
        int32_t * v15 = (int32_t *)v13; // 0x364f2c
        uint32_t v16 = *v15; // 0x364f2c
        *v15 = v16 >> 32 - v14 | v16 << v14;
    }
    int64_t v17; // 0x364e8c
    *(char *)0xd4f22bbf = *(char *)0xd4f22bbf + (char)v17;
    int64_t result = unknown_7a28513b(); // 0x364f35
    char * v18 = (char *)(v10 + 0x211e5a25); // 0x364f3a
    *v18 = *v18 + (char)v13;
    return result;
}

// Address range: 0x364f80 - 0x364f81
int64_t function_364f80(int64_t a1) {
    // 0x364f80
    int64_t result; // 0x364f80
    return result;
}

// Address range: 0x364fc7 - 0x364fcc
int64_t function_364fc7(void) {
    // 0x364fc7
    return function_ffffffffb6429fe5();
}

// Address range: 0x364ff4 - 0x364ff8
int64_t function_364ff4(int64_t a1) {
    // 0x364ff4
    int64_t result; // 0x364ff4
    int32_t * v1 = (int32_t *)(result - 110); // 0x364ff4
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x36500b - 0x36500d
int64_t function_36500b(void) {
    // 0x36500b
    int64_t result; // 0x36500b
    return result;
}

// Address range: 0x36505a - 0x36505c
int64_t function_36505a(void) {
    // 0x36505a
    int64_t result; // 0x36505a
    return result;
}

// Address range: 0x36508c - 0x36508e
int64_t function_36508c(int64_t a1) {
    // 0x36508c
    int64_t result; // 0x36508c
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x3b78c9 - 0x3b78ce
int64_t function_3b78c9(void) {
    // 0x3b78c9
    return function_17878d1();
}

// Address range: 0x3b794c - 0x3b7956
int64_t function_3b794c(void) {
    // 0x3b794c
    return function_29cbda8f();
}

// Address range: 0x3b7996 - 0x3b7997
int64_t function_3b7996(void) {
    // 0x3b7996
    int64_t result; // 0x3b7996
    return result;
}

// Address range: 0x3b79c0 - 0x3b79c1
int64_t function_3b79c0(void) {
    // 0x3b79c0
    int64_t result; // 0x3b79c0
    return result;
}

// Address range: 0x3b79d4 - 0x3b7a1c
int64_t function_3b79d4(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffff893cb6da(); // 0x3b79d4
    unsigned char v2 = (char)(a3 / 256); // 0x3b79da
    int64_t v3; // 0x3b79d4
    unsigned char v4 = *(char *)(v1 & -256 | (uint64_t)v3 % 256); // 0x3b79da
    int64_t v5 = unknown_698d55e9(); // 0x3b79e3
    int32_t * v6 = (int32_t *)((256 * (int64_t)(v2 - v4) | a3 & -0xff01) - 0x1ec56310); // 0x3b79ee
    uint32_t v7 = *v6; // 0x3b79ee
    uint32_t v8 = (int32_t)v5; // 0x3b79ee
    *v6 = v7 - v8;
    if (v5 < (int64_t)v7) {
        // 0x3b79f7
        unknown_76af0ffd();
        return function_3b79c0();
    }
    // 0x3b7a06
    bool v9; // 0x3b79d4
    int64_t v10 = (v9 ? -1 : 1) + a2; // 0x3b79d9
    int64_t v11 = 0x100000000 * v10 >> 32; // 0x3b79f4
    uint32_t v12 = (int32_t)a4 % 32; // 0x3b7a06
    if (v12 != 0) {
        int32_t * v13 = (int32_t *)(v11 + 4 * a1); // 0x3b7a06
        uint32_t v14 = *v13; // 0x3b7a06
        *v13 = v14 << v12 | (int32_t)(v7 < v8) << v12 - 1 | (int32_t)((int64_t)v14 >> (int64_t)(33 - v12));
    }
    int64_t v15 = v11 & 0xbca3b26c; // 0x3b7a09
    __asm_out(-24, (char)v15);
    int64_t v16 = v15; // 0x3b7a12
    if ((int32_t)(256 * (int64_t)(v4 + (char)(a4 / 256) + (char)(v4 > v2)) || a4 & 0xffff00ff) + (int32_t)v10 >= 2) {
        v16 = function_3b7996();
    }
    // 0x3b7a16
    return v16 + 0xf801e888 & 0xffffffff;
}

// Address range: 0x3b7a53 - 0x3b7a54
int64_t function_3b7a53(void) {
    // 0x3b7a53
    int64_t result; // 0x3b7a53
    return result;
}

// Address range: 0x3b7aeb - 0x3b7aec
int64_t function_3b7aeb(int64_t a1) {
    // 0x3b7aeb
    int64_t result; // 0x3b7aeb
    return result;
}

// Address range: 0x3b7b92 - 0x3b7b95
int64_t function_3b7b92(void) {
    // 0x3b7b92
    int64_t result; // 0x3b7b92
    return result;
}

// Address range: 0x3b7bad - 0x3b7bae
int64_t function_3b7bad(void) {
    // 0x3b7bad
    int64_t result; // 0x3b7bad
    return result;
}

// Address range: 0x3b7c28 - 0x3b7c2a
int64_t function_3b7c28(int64_t a1) {
    // 0x3b7c28
    int64_t result; // 0x3b7c28
    return result;
}

// Address range: 0x3b7c31 - 0x3b7c38
int64_t function_3b7c31(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 4); // 0x3b7c31
    *v1 = *v1 + (char)a4;
    int64_t result; // 0x3b7c31
    return result;
}

// Address range: 0x3b7c6e - 0x3b7c7d
int64_t function_3b7c6e(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + (int64_t)&g1); // 0x3b7c71
    int64_t v2; // 0x3b7c6e
    *v1 = *v1 + (int32_t)v2;
    return function_555b835();
}

// Address range: 0x3b7c7d - 0x3b7cc2
int64_t function_3b7c7d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_7be2949e() & 0xffffffff ^ 0xe8dd1064; // 0x3b7c9d
    int32_t * v2 = (int32_t *)(v1 - 0x17fec286); // 0x3b7ca2
    *v2 = *v2 + (int32_t)v1;
    int32_t * v3 = (int32_t *)v1; // 0x3b7ca8
    *v3 = *v3 + (int32_t)a3;
    int64_t v4; // 0x3b7c7d
    int64_t v5; // 0x3b7c7d
    int32_t v6 = *(int32_t *)&v4 | (int32_t)v5; // 0x3b7caa
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x3b7caa
    bool v8; // 0x3b7c7d
    *(int64_t *)(v1 - 8) = 0x4000 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | 256 * (int64_t)v8 | 64 * (int64_t)(v6 == 0) | 128 * (int64_t)(v6 < 0) | 4 * (int64_t)(v7 % 2 == 0) | 2;
    unknown_ffffffffa063e2b8();
    return function_13d6530();
}

// Address range: 0x3b7cfa - 0x3b7cfb
int64_t function_3b7cfa(void) {
    // 0x3b7cfa
    int64_t result; // 0x3b7cfa
    return result;
}

// Address range: 0x3b7d01 - 0x3b7d32
int64_t function_3b7d01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffceba4607(); // 0x3b7d01
    char * v2 = (char *)(a1 + 0x1f3d3af6); // 0x3b7d06
    *v2 = *v2 ^ (char)v1;
    int64_t v3 = unknown_16942612(); // 0x3b7d0c
    char v4 = *(char *)v3; // 0x3b7d11
    int64_t v5 = v3 + 0xe878924a; // 0x3b7d13
    int32_t * v6 = (int32_t *)(v5 & 0xffffffff); // 0x3b7d18
    int64_t v7; // 0x3b7d01
    *v6 = *v6 + (int32_t)v7;
    int32_t v8 = *(int32_t *)(a4 & -256 | (int64_t)(v4 + (char)a4)); // 0x3b7d1b
    uint32_t result = v8 & (int32_t)v5; // 0x3b7d1b
    *(char *)-0x174c3979 = *(char *)-0x174c3979 | (char)result;
    bool v9; // 0x3b7d01
    int32_t * v10 = (int32_t *)(a1 - 0x508a8600 + (v9 ? -1 : 1)); // 0x3b7d25
    *v10 = *v10 - 0x1e8f182;
    return result;
}

// Address range: 0x3b7d84 - 0x3b7d8b
int64_t function_3b7d84(void) {
    // 0x3b7d84
    return function_fffffffff8187e14();
}

// Address range: 0x3b7da4 - 0x3b7da5
int64_t function_3b7da4(void) {
    // 0x3b7da4
    int64_t result; // 0x3b7da4
    return result;
}

// Address range: 0x3b7db7 - 0x3b7db8
int64_t function_3b7db7(int64_t a1) {
    // 0x3b7db7
    int64_t result; // 0x3b7db7
    return result;
}

// Address range: 0x3b7dfe - 0x3b7e1d
int64_t function_3b7dfe(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 105); // 0x3b7e04
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x3b7dfe
    *(char *)0x514700918da2544d = (char)v2 | (char)&g3;
    unknown_fffffffffe8c4818();
    return function_3b7da4();
}

// Address range: 0x3b7e95 - 0x3b7ec7
int64_t function_3b7e95(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 & -256 | 199; // 0x3b7e97
    int64_t v2; // 0x3b7e95
    int64_t * v3 = (int64_t *)(((v2 ^ v2) & 0xffffffff) - 8); // 0x3b7e99
    *v3 = 0x3d000809;
    int32_t * v4 = (int32_t *)(a2 + 83); // 0x3b7e9e
    *v4 = *v4 + (int32_t)v2;
    bool v5; // 0x3b7e95
    int64_t v6 = (v5 ? -8 : 8) + a1; // 0x3b7ea6
    int64_t v7 = unknown_194211b8(v6, *v3, v1); // 0x3b7eb2
    *(char *)v6 = __asm_insb((int16_t)v1);
    *(char *)-0x39cbd741 = *(char *)-0x39cbd741 + (char)(v2 / 256);
    return v7 + 0x538f43af + (int64_t)((char)v7 < 139);
}

// Address range: 0x3b7ef9 - 0x3b7efa
int64_t function_3b7ef9(void) {
    // 0x3b7ef9
    int64_t result; // 0x3b7ef9
    return result;
}

// Address range: 0x3b7f5e - 0x3b7ffe
int64_t function_3b7f5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3b7f5e
    int64_t v1; // 0x3b7f5e
    int32_t * v2 = (int32_t *)(v1 - 0x7c0ff4d4); // 0x3b7f5e
    *v2 = *v2 + (int32_t)v1;
    int64_t v3 = unknown_3d3d677b(); // 0x3b7f74
    int64_t v4; // 0x3b7f5e
    int32_t * v5 = (int32_t *)(v4 + 0x3a4e5f68); // 0x3b7f7a
    uint32_t v6 = (int32_t)a3; // 0x3b7f7a
    *v5 = *v5 + v6;
    bool v7; // 0x3b7f5e
    int64_t v8 = v7 ? -4 : 4; // 0x3b7f80
    int64_t v9 = v8 + a1; // 0x3b7f80
    __asm_out(-74, (char)v3);
    int32_t * v10 = (int32_t *)(v4 - 104); // 0x3b7f87
    int32_t v11 = *v10; // 0x3b7f87
    int32_t v12 = v8 + a2; // 0x3b7f87
    int32_t v13 = v11 + v12; // 0x3b7f87
    *v10 = v13;
    if (v13 < 0 == ((v13 ^ v11) & (v13 ^ v12)) < 0) {
        // 0x3b7ffb
        *(int32_t *)v9 = __asm_insd((int16_t)a3);
        return v3 ^ 232;
    }
    int64_t v14 = *(int64_t *)0x73d343ef; // 0x3b7f8d
    int32_t * v15 = (int32_t *)(v14 + 32); // 0x3b7f92
    int32_t v16 = v9; // 0x3b7f92
    *v15 = *v15 + v16;
    __asm_rcl(*(char *)(a3 - 0x305dfe18));
    int64_t v17 = __asm_sti(v9); // 0x3b7f9e
    uint32_t v18 = *(int32_t *)&v4; // 0x3b7fa4
    uint32_t v19 = v18 + (int32_t)v14; // 0x3b7fa4
    uint32_t v20 = v19 + (int32_t)(-1 - v12 < v6); // 0x3b7fa4
    bool v21 = -1 - v12 < v6 ? v20 <= v18 : v19 < v18; // 0x3b7fa4
    *(int32_t *)v4 = v20;
    *(int32_t *)0x163308da = *(int32_t *)0x163308da + v16;
    return (v17 + (int64_t)v21) % 256 | v17 & -256;
}

// Address range: 0x3b8014 - 0x3b8015
int64_t function_3b8014(void) {
    // 0x3b8014
    int64_t result; // 0x3b8014
    return result;
}

// Address range: 0x3b801c - 0x3b8034
int64_t function_3b801c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3b801c
    int64_t v1; // 0x3b801c
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 - (char)a3;
    int64_t v3; // 0x3b801c
    *(char *)v3 = *(char *)&v3 + 116;
    int64_t v4; // 0x3b801c
    *(int32_t *)a1 = *(int32_t *)&v4;
    int32_t * v5 = (int32_t *)(v1 + 1); // 0x3b802f
    *v5 = *v5 + (int32_t)a4;
    return function_3b8014();
}

// Address range: 0x3b8074 - 0x3b8078
int64_t function_3b8074(void) {
    // 0x3b8074
    int64_t result; // 0x3b8074
    return result;
}

// Address range: 0x3b8095 - 0x3b80a0
int64_t function_3b8095(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3b8095
    return function_703bf9ab();
}

// Address range: 0x4fadd6 - 0x4fadec
int64_t function_4fadd6(int64_t a1, int64_t a2) {
    // 0x4fadd6
    int64_t v1; // 0x4fadd6
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v3 = 2 * (char)v3;
    int64_t v4 = *(int64_t *)(v2 - 24) + v2; // 0x4faddf
    function_4fca70(v4, *(int32_t *)(v4 + 32) | (int32_t)a2);
    return function_4fadb8();
}

// Address range: 0x4fadec - 0x4fae75
int64_t function_4fadec(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4fadec
    int64_t v1; // 0x4fadec
    int64_t v2 = v1;
    __stack_chk_fail();
    int64_t v3 = function_5423f0(); // 0x4fadf1
    int64_t v4; // 0x4fadec
    int64_t v5; // 0x4fae52
    if (a3 == 1) {
        // 0x4fadff
        function_1fd40(v3);
        int64_t v6 = *(int64_t *)(v2 - 24) + v2; // 0x4fae07
        int32_t * v7 = (int32_t *)(v6 + 32); // 0x4fae0b
        *v7 = *v7 | 1;
        function_20a50();
        v4 = v6;
        if (*(char *)(v6 + 28) % 2 == 0) {
            // 0x4fae52
            v5 = function_20a50();
            function_20540();
            _Unwind_Resume((struct _Unwind_Exception *)v5);
            return function_4fad40();
        }
    }
    int64_t v8 = v4;
    function_1fd40(v3);
    int64_t v9 = *(int64_t *)(*(int64_t *)v8 - 24) + v8; // 0x4fae26
    int32_t * v10 = (int32_t *)(v9 + 32); // 0x4fae29
    *v10 = *v10 | 1;
    if (*(char *)(v9 + 28) % 2 == 0) {
        // 0x4fae33
        function_20540();
        return function_4fadb1();
    }
    // 0x4fae52
    v5 = function_20a50();
    function_20540();
    _Unwind_Resume((struct _Unwind_Exception *)v5);
    return function_4fad40();
}

// Address range: 0x4fae80 - 0x4fafb5
int64_t function_4fae80(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4fae9a
    function_4f8cc0();
    int64_t v2 = 0; // 0x4faeb2
    int64_t v3 = a1; // 0x4faeb2
    int64_t v4 = a1; // 0x4faeb2
    int64_t v5; // 0x4fae80
    int64_t v6; // 0x4fae80
    int64_t v7; // 0x4fae80
    int64_t v8; // 0x4fae80
    int64_t v9; // 0x4fae80
    int32_t v10; // 0x4fae80
    int32_t v11; // 0x4fae80
    char v12; // 0x4fae80
    if (v12 == 0) {
        goto lab_0x4faef8;
    } else {
        // 0x4faeb4
        char v13; // bp-37, 0x4fae80
        int64_t v14 = *(int64_t *)((int64_t)&v13 - 24); // 0x4faebe
        v10 = 0;
        v7 = a2;
        v5 = a1;
        v11 = 0;
        v8 = 0;
        v6 = a1;
        v9 = a1;
        if (*(int64_t *)(a1 + 256 + v14) == 0) {
            goto lab_0x4faf31;
        } else {
            goto lab_0x4faef1;
        }
    }
  lab_0x4faef8:;
    int64_t result = v3;
    if (v1 == __readfsqword(40)) {
        // 0x4faf0a
        return result;
    }
    // 0x4faf2c
    __stack_chk_fail();
    int32_t v15; // 0x4fae80
    v11 = v15;
    v8 = v2;
    v6 = result;
    v9 = v4;
    goto lab_0x4faf31;
  lab_0x4faf31:;
    int64_t v16 = v9;
    int64_t v17 = v6;
    int64_t v18 = function_5423f0(); // 0x4faf31
    int64_t v19 = v8 - 1; // 0x4faf36
    int64_t v20 = v17; // 0x4faf3d
    int64_t v21; // 0x4faf92
    if (v19 == 0) {
        // 0x4faf3f
        function_1fd40(v18);
        int64_t v22 = *(int64_t *)(*(int64_t *)v17 - 24) + v17; // 0x4faf47
        int32_t * v23 = (int32_t *)(v22 + 32); // 0x4faf4b
        *v23 = *v23 | 1;
        function_20a50();
        v20 = v22;
        if (*(char *)(v22 + 28) % 2 == 0) {
            // 0x4faf92
            v21 = function_20a50();
            function_20540();
            _Unwind_Resume((struct _Unwind_Exception *)v21);
            return function_4fae80(v21, v16, v19);
        }
    }
    int64_t v24 = v20;
    function_1fd40(v18);
    int64_t v25 = *(int64_t *)(*(int64_t *)v24 - 24) + v24; // 0x4faf66
    int32_t * v26 = (int32_t *)(v25 + 32); // 0x4faf69
    *v26 = *v26 | 1;
    if (*(char *)(v25 + 28) % 2 != 0) {
        // 0x4faf92
        v21 = function_20a50();
        function_20540();
        _Unwind_Resume((struct _Unwind_Exception *)v21);
        return function_4fae80(v21, v16, v19);
    }
    // 0x4faf73
    function_20540();
    v10 = v11;
    v7 = v19;
    v5 = v24;
    goto lab_0x4faef1;
  lab_0x4faef1:;
    int64_t v27 = v5;
    int64_t v28 = v7;
    int32_t v29 = v10;
    v15 = v29;
    v2 = v28;
    v3 = v27;
    v4 = v29;
    if (v29 != 0) {
        int64_t v30 = *(int64_t *)(*(int64_t *)v27 - 24) + v27; // 0x4faf1f
        uint32_t v31 = *(int32_t *)(v30 + 32) | v29; // 0x4faf22
        function_4fca70(v30, v31);
        v15 = v29;
        v2 = v28;
        v3 = v27;
        v4 = v31;
    }
    goto lab_0x4faef8;
}

// Address range: 0x4fafc0 - 0x4fb0f5
int64_t function_4fafc0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4fafda
    function_4f8cc0();
    int64_t v2 = 0; // 0x4faff2
    int64_t v3 = a1; // 0x4faff2
    int64_t v4 = a1; // 0x4faff2
    int64_t v5; // 0x4fafc0
    int64_t v6; // 0x4fafc0
    int64_t v7; // 0x4fafc0
    int64_t v8; // 0x4fafc0
    int64_t v9; // 0x4fafc0
    int32_t v10; // 0x4fafc0
    int32_t v11; // 0x4fafc0
    char v12; // 0x4fafc0
    if (v12 == 0) {
        goto lab_0x4fb038;
    } else {
        // 0x4faff4
        char v13; // bp-37, 0x4fafc0
        int64_t v14 = *(int64_t *)((int64_t)&v13 - 24); // 0x4faffe
        v10 = 0;
        v7 = a2;
        v5 = a1;
        v11 = 0;
        v8 = 0;
        v6 = a1;
        v9 = a1;
        if (*(int64_t *)(a1 + 256 + v14) == 0) {
            goto lab_0x4fb071;
        } else {
            goto lab_0x4fb031;
        }
    }
  lab_0x4fb038:;
    int64_t result = v3;
    if (v1 == __readfsqword(40)) {
        // 0x4fb04a
        return result;
    }
    // 0x4fb06c
    __stack_chk_fail();
    int32_t v15; // 0x4fafc0
    v11 = v15;
    v8 = v2;
    v6 = result;
    v9 = v4;
    goto lab_0x4fb071;
  lab_0x4fb071:;
    int64_t v16 = v9;
    int64_t v17 = v6;
    int64_t v18 = function_5423f0(); // 0x4fb071
    int64_t v19 = v8 - 1; // 0x4fb076
    int64_t v20 = v17; // 0x4fb07d
    int64_t v21; // 0x4fb0d2
    if (v19 == 0) {
        // 0x4fb07f
        function_1fd40(v18);
        int64_t v22 = *(int64_t *)(*(int64_t *)v17 - 24) + v17; // 0x4fb087
        int32_t * v23 = (int32_t *)(v22 + 32); // 0x4fb08b
        *v23 = *v23 | 1;
        function_20a50();
        v20 = v22;
        if (*(char *)(v22 + 28) % 2 == 0) {
            // 0x4fb0d2
            v21 = function_20a50();
            function_20540();
            _Unwind_Resume((struct _Unwind_Exception *)v21);
            return function_4fafc0(v21, v16, v19);
        }
    }
    int64_t v24 = v20;
    function_1fd40(v18);
    int64_t v25 = *(int64_t *)(*(int64_t *)v24 - 24) + v24; // 0x4fb0a6
    int32_t * v26 = (int32_t *)(v25 + 32); // 0x4fb0a9
    *v26 = *v26 | 1;
    if (*(char *)(v25 + 28) % 2 != 0) {
        // 0x4fb0d2
        v21 = function_20a50();
        function_20540();
        _Unwind_Resume((struct _Unwind_Exception *)v21);
        return function_4fafc0(v21, v16, v19);
    }
    // 0x4fb0b3
    function_20540();
    v10 = v11;
    v7 = v19;
    v5 = v24;
    goto lab_0x4fb031;
  lab_0x4fb031:;
    int64_t v27 = v5;
    int64_t v28 = v7;
    int32_t v29 = v10;
    v15 = v29;
    v2 = v28;
    v3 = v27;
    v4 = v29;
    if (v29 != 0) {
        int64_t v30 = *(int64_t *)(*(int64_t *)v27 - 24) + v27; // 0x4fb05f
        uint32_t v31 = *(int32_t *)(v30 + 32) | v29; // 0x4fb062
        function_4fca70(v30, v31);
        v15 = v29;
        v2 = v28;
        v3 = v27;
        v4 = v31;
    }
    goto lab_0x4fb038;
}

// Address range: 0x4fb100 - 0x4fb235
int64_t function_4fb100(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4fb11a
    function_4f8cc0();
    int64_t v2 = 0; // 0x4fb132
    int64_t v3 = a1; // 0x4fb132
    int64_t v4 = a1; // 0x4fb132
    int64_t v5; // 0x4fb100
    int64_t v6; // 0x4fb100
    int64_t v7; // 0x4fb100
    int64_t v8; // 0x4fb100
    int64_t v9; // 0x4fb100
    int32_t v10; // 0x4fb100
    int32_t v11; // 0x4fb100
    char v12; // 0x4fb100
    if (v12 == 0) {
        goto lab_0x4fb178;
    } else {
        // 0x4fb134
        char v13; // bp-37, 0x4fb100
        int64_t v14 = *(int64_t *)((int64_t)&v13 - 24); // 0x4fb13e
        v10 = 0;
        v7 = a2;
        v5 = a1;
        v11 = 0;
        v8 = 0;
        v6 = a1;
        v9 = a1;
        if (*(int64_t *)(a1 + 256 + v14) == 0) {
            goto lab_0x4fb1b1;
        } else {
            goto lab_0x4fb171;
        }
    }
  lab_0x4fb178:;
    int64_t result = v3;
    if (v1 == __readfsqword(40)) {
        // 0x4fb18a
        return result;
    }
    // 0x4fb1ac
    __stack_chk_fail();
    int32_t v15; // 0x4fb100
    v11 = v15;
    v8 = v2;
    v6 = result;
    v9 = v4;
    goto lab_0x4fb1b1;
  lab_0x4fb1b1:;
    int64_t v16 = v9;
    int64_t v17 = v6;
    int64_t v18 = function_5423f0(); // 0x4fb1b1
    int64_t v19 = v8 - 1; // 0x4fb1b6
    int64_t v20 = v17; // 0x4fb1bd
    int64_t v21; // 0x4fb212
    if (v19 == 0) {
        // 0x4fb1bf
        function_1fd40(v18);
        int64_t v22 = *(int64_t *)(*(int64_t *)v17 - 24) + v17; // 0x4fb1c7
        int32_t * v23 = (int32_t *)(v22 + 32); // 0x4fb1cb
        *v23 = *v23 | 1;
        function_20a50();
        v20 = v22;
        if (*(char *)(v22 + 28) % 2 == 0) {
            // 0x4fb212
            v21 = function_20a50();
            function_20540();
            _Unwind_Resume((struct _Unwind_Exception *)v21);
            return function_4fb100(v21, v16, v19);
        }
    }
    int64_t v24 = v20;
    function_1fd40(v18);
    int64_t v25 = *(int64_t *)(*(int64_t *)v24 - 24) + v24; // 0x4fb1e6
    int32_t * v26 = (int32_t *)(v25 + 32); // 0x4fb1e9
    *v26 = *v26 | 1;
    if (*(char *)(v25 + 28) % 2 != 0) {
        // 0x4fb212
        v21 = function_20a50();
        function_20540();
        _Unwind_Resume((struct _Unwind_Exception *)v21);
        return function_4fb100(v21, v16, v19);
    }
    // 0x4fb1f3
    function_20540();
    v10 = v11;
    v7 = v19;
    v5 = v24;
    goto lab_0x4fb171;
  lab_0x4fb171:;
    int64_t v27 = v5;
    int64_t v28 = v7;
    int32_t v29 = v10;
    v15 = v29;
    v2 = v28;
    v3 = v27;
    v4 = v29;
    if (v29 != 0) {
        int64_t v30 = *(int64_t *)(*(int64_t *)v27 - 24) + v27; // 0x4fb19f
        uint32_t v31 = *(int32_t *)(v30 + 32) | v29; // 0x4fb1a2
        function_4fca70(v30, v31);
        v15 = v29;
        v2 = v28;
        v3 = v27;
        v4 = v31;
    }
    goto lab_0x4fb178;
}

// Address range: 0x4fb240 - 0x4fb375
int64_t function_4fb240(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4fb25a
    function_4f8cc0();
    int64_t v2 = 0; // 0x4fb272
    int64_t v3 = a1; // 0x4fb272
    int64_t v4 = a1; // 0x4fb272
    int64_t v5; // 0x4fb240
    int64_t v6; // 0x4fb240
    int64_t v7; // 0x4fb240
    int64_t v8; // 0x4fb240
    int64_t v9; // 0x4fb240
    int32_t v10; // 0x4fb240
    int32_t v11; // 0x4fb240
    char v12; // 0x4fb240
    if (v12 == 0) {
        goto lab_0x4fb2b8;
    } else {
        // 0x4fb274
        char v13; // bp-37, 0x4fb240
        int64_t v14 = *(int64_t *)((int64_t)&v13 - 24); // 0x4fb27e
        v10 = 0;
        v7 = a2;
        v5 = a1;
        v11 = 0;
        v8 = 0;
        v6 = a1;
        v9 = a1;
        if (*(int64_t *)(a1 + 256 + v14) == 0) {
            goto lab_0x4fb2f1;
        } else {
            goto lab_0x4fb2b1;
        }
    }
  lab_0x4fb2b8:;
    int64_t result = v3;
    if (v1 == __readfsqword(40)) {
        // 0x4fb2ca
        return result;
    }
    // 0x4fb2ec
    __stack_chk_fail();
    int32_t v15; // 0x4fb240
    v11 = v15;
    v8 = v2;
    v6 = result;
    v9 = v4;
    goto lab_0x4fb2f1;
  lab_0x4fb2f1:;
    int64_t v16 = v9;
    int64_t v17 = v6;
    int64_t v18 = function_5423f0(); // 0x4fb2f1
    int64_t v19 = v8 - 1; // 0x4fb2f6
    int64_t v20 = v17; // 0x4fb2fd
    int64_t v21; // 0x4fb352
    if (v19 == 0) {
        // 0x4fb2ff
        function_1fd40(v18);
        int64_t v22 = *(int64_t *)(*(int64_t *)v17 - 24) + v17; // 0x4fb307
        int32_t * v23 = (int32_t *)(v22 + 32); // 0x4fb30b
        *v23 = *v23 | 1;
        function_20a50();
        v20 = v22;
        if (*(char *)(v22 + 28) % 2 == 0) {
            // 0x4fb352
            v21 = function_20a50();
            function_20540();
            _Unwind_Resume((struct _Unwind_Exception *)v21);
            return function_4fb240(v21, v16, v19);
        }
    }
    int64_t v24 = v20;
    function_1fd40(v18);
    int64_t v25 = *(int64_t *)(*(int64_t *)v24 - 24) + v24; // 0x4fb326
    int32_t * v26 = (int32_t *)(v25 + 32); // 0x4fb329
    *v26 = *v26 | 1;
    if (*(char *)(v25 + 28) % 2 != 0) {
        // 0x4fb352
        v21 = function_20a50();
        function_20540();
        _Unwind_Resume((struct _Unwind_Exception *)v21);
        return function_4fb240(v21, v16, v19);
    }
    // 0x4fb333
    function_20540();
    v10 = v11;
    v7 = v19;
    v5 = v24;
    goto lab_0x4fb2b1;
  lab_0x4fb2b1:;
    int64_t v27 = v5;
    int64_t v28 = v7;
    int32_t v29 = v10;
    v15 = v29;
    v2 = v28;
    v3 = v27;
    v4 = v29;
    if (v29 != 0) {
        int64_t v30 = *(int64_t *)(*(int64_t *)v27 - 24) + v27; // 0x4fb2df
        uint32_t v31 = *(int32_t *)(v30 + 32) | v29; // 0x4fb2e2
        function_4fca70(v30, v31);
        v15 = v29;
        v2 = v28;
        v3 = v27;
        v4 = v31;
    }
    goto lab_0x4fb2b8;
}

// Address range: 0x4fb380 - 0x4fb4b5
int64_t function_4fb380(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4fb39a
    function_4f8cc0();
    int64_t v2 = 0; // 0x4fb3b2
    int64_t v3 = a1; // 0x4fb3b2
    int64_t v4 = a1; // 0x4fb3b2
    int64_t v5; // 0x4fb380
    int64_t v6; // 0x4fb380
    int64_t v7; // 0x4fb380
    int64_t v8; // 0x4fb380
    int64_t v9; // 0x4fb380
    int32_t v10; // 0x4fb380
    int32_t v11; // 0x4fb380
    char v12; // 0x4fb380
    if (v12 == 0) {
        goto lab_0x4fb3f8;
    } else {
        // 0x4fb3b4
        char v13; // bp-37, 0x4fb380
        int64_t v14 = *(int64_t *)((int64_t)&v13 - 24); // 0x4fb3be
        v10 = 0;
        v7 = a2;
        v5 = a1;
        v11 = 0;
        v8 = 0;
        v6 = a1;
        v9 = a1;
        if (*(int64_t *)(a1 + 256 + v14) == 0) {
            goto lab_0x4fb431;
        } else {
            goto lab_0x4fb3f1;
        }
    }
  lab_0x4fb3f8:;
    int64_t result = v3;
    if (v1 == __readfsqword(40)) {
        // 0x4fb40a
        return result;
    }
    // 0x4fb42c
    __stack_chk_fail();
    int32_t v15; // 0x4fb380
    v11 = v15;
    v8 = v2;
    v6 = result;
    v9 = v4;
    goto lab_0x4fb431;
  lab_0x4fb431:;
    int64_t v16 = v9;
    int64_t v17 = v6;
    int64_t v18 = function_5423f0(); // 0x4fb431
    int64_t v19 = v8 - 1; // 0x4fb436
    int64_t v20 = v17; // 0x4fb43d
    int64_t v21; // 0x4fb492
    if (v19 == 0) {
        // 0x4fb43f
        function_1fd40(v18);
        int64_t v22 = *(int64_t *)(*(int64_t *)v17 - 24) + v17; // 0x4fb447
        int32_t * v23 = (int32_t *)(v22 + 32); // 0x4fb44b
        *v23 = *v23 | 1;
        function_20a50();
        v20 = v22;
        if (*(char *)(v22 + 28) % 2 == 0) {
            // 0x4fb492
            v21 = function_20a50();
            function_20540();
            _Unwind_Resume((struct _Unwind_Exception *)v21);
            return function_4fb380(v21, v16, v19);
        }
    }
    int64_t v24 = v20;
    function_1fd40(v18);
    int64_t v25 = *(int64_t *)(*(int64_t *)v24 - 24) + v24; // 0x4fb466
    int32_t * v26 = (int32_t *)(v25 + 32); // 0x4fb469
    *v26 = *v26 | 1;
    if (*(char *)(v25 + 28) % 2 != 0) {
        // 0x4fb492
        v21 = function_20a50();
        function_20540();
        _Unwind_Resume((struct _Unwind_Exception *)v21);
        return function_4fb380(v21, v16, v19);
    }
    // 0x4fb473
    function_20540();
    v10 = v11;
    v7 = v19;
    v5 = v24;
    goto lab_0x4fb3f1;
  lab_0x4fb3f1:;
    int64_t v27 = v5;
    int64_t v28 = v7;
    int32_t v29 = v10;
    v15 = v29;
    v2 = v28;
    v3 = v27;
    v4 = v29;
    if (v29 != 0) {
        int64_t v30 = *(int64_t *)(*(int64_t *)v27 - 24) + v27; // 0x4fb41f
        uint32_t v31 = *(int32_t *)(v30 + 32) | v29; // 0x4fb422
        function_4fca70(v30, v31);
        v15 = v29;
        v2 = v28;
        v3 = v27;
        v4 = v31;
    }
    goto lab_0x4fb3f8;
}

// Address range: 0x4fb4c0 - 0x4fb5f5
int64_t function_4fb4c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4fb4da
    function_4f8cc0();
    int64_t v2 = 0; // 0x4fb4f2
    int64_t v3 = a1; // 0x4fb4f2
    int64_t v4 = a1; // 0x4fb4f2
    int64_t v5; // 0x4fb4c0
    int64_t v6; // 0x4fb4c0
    int64_t v7; // 0x4fb4c0
    int64_t v8; // 0x4fb4c0
    int64_t v9; // 0x4fb4c0
    int32_t v10; // 0x4fb4c0
    int32_t v11; // 0x4fb4c0
    char v12; // 0x4fb4c0
    if (v12 == 0) {
        goto lab_0x4fb538;
    } else {
        // 0x4fb4f4
        char v13; // bp-37, 0x4fb4c0
        int64_t v14 = *(int64_t *)((int64_t)&v13 - 24); // 0x4fb4fe
        v10 = 0;
        v7 = a2;
        v5 = a1;
        v11 = 0;
        v8 = 0;
        v6 = a1;
        v9 = a1;
        if (*(int64_t *)(a1 + 256 + v14) == 0) {
            goto lab_0x4fb571;
        } else {
            goto lab_0x4fb531;
        }
    }
  lab_0x4fb538:;
    int64_t result = v3;
    if (v1 == __readfsqword(40)) {
        // 0x4fb54a
        return result;
    }
    // 0x4fb56c
    __stack_chk_fail();
    int32_t v15; // 0x4fb4c0
    v11 = v15;
    v8 = v2;
    v6 = result;
    v9 = v4;
    goto lab_0x4fb571;
  lab_0x4fb571:;
    int64_t v16 = v9;
    int64_t v17 = v6;
    int64_t v18 = function_5423f0(); // 0x4fb571
    int64_t v19 = v8 - 1; // 0x4fb576
    int64_t v20 = v17; // 0x4fb57d
    int64_t v21; // 0x4fb5d2
    if (v19 == 0) {
        // 0x4fb57f
        function_1fd40(v18);
        int64_t v22 = *(int64_t *)(*(int64_t *)v17 - 24) + v17; // 0x4fb587
        int32_t * v23 = (int32_t *)(v22 + 32); // 0x4fb58b
        *v23 = *v23 | 1;
        function_20a50();
        v20 = v22;
        if (*(char *)(v22 + 28) % 2 == 0) {
            // 0x4fb5d2
            v21 = function_20a50();
            function_20540();
            _Unwind_Resume((struct _Unwind_Exception *)v21);
            return function_4fb4c0(v21, v16, v19);
        }
    }
    int64_t v24 = v20;
    function_1fd40(v18);
    int64_t v25 = *(int64_t *)(*(int64_t *)v24 - 24) + v24; // 0x4fb5a6
    int32_t * v26 = (int32_t *)(v25 + 32); // 0x4fb5a9
    *v26 = *v26 | 1;
    if (*(char *)(v25 + 28) % 2 != 0) {
        // 0x4fb5d2
        v21 = function_20a50();
        function_20540();
        _Unwind_Resume((struct _Unwind_Exception *)v21);
        return function_4fb4c0(v21, v16, v19);
    }
    // 0x4fb5b3
    function_20540();
    v10 = v11;
    v7 = v19;
    v5 = v24;
    goto lab_0x4fb531;
  lab_0x4fb531:;
    int64_t v27 = v5;
    int64_t v28 = v7;
    int32_t v29 = v10;
    v15 = v29;
    v2 = v28;
    v3 = v27;
    v4 = v29;
    if (v29 != 0) {
        int64_t v30 = *(int64_t *)(*(int64_t *)v27 - 24) + v27; // 0x4fb55f
        uint32_t v31 = *(int32_t *)(v30 + 32) | v29; // 0x4fb562
        function_4fca70(v30, v31);
        v15 = v29;
        v2 = v28;
        v3 = v27;
        v4 = v31;
    }
    goto lab_0x4fb538;
}

// Address range: 0x4fb600 - 0x4fb735
int64_t function_4fb600(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4fb61a
    function_4f8cc0();
    int64_t v2 = 0; // 0x4fb632
    int64_t v3 = a1; // 0x4fb632
    int64_t v4 = a1; // 0x4fb632
    int64_t v5; // 0x4fb600
    int64_t v6; // 0x4fb600
    int64_t v7; // 0x4fb600
    int64_t v8; // 0x4fb600
    int64_t v9; // 0x4fb600
    int32_t v10; // 0x4fb600
    int32_t v11; // 0x4fb600
    char v12; // 0x4fb600
    if (v12 == 0) {
        goto lab_0x4fb678;
    } else {
        // 0x4fb634
        char v13; // bp-37, 0x4fb600
        int64_t v14 = *(int64_t *)((int64_t)&v13 - 24); // 0x4fb63e
        v10 = 0;
        v7 = a2;
        v5 = a1;
        v11 = 0;
        v8 = 0;
        v6 = a1;
        v9 = a1;
        if (*(int64_t *)(a1 + 256 + v14) == 0) {
            goto lab_0x4fb6b1;
        } else {
            goto lab_0x4fb671;
        }
    }
  lab_0x4fb678:;
    int64_t result = v3;
    if (v1 == __readfsqword(40)) {
        // 0x4fb68a
        return result;
    }
    // 0x4fb6ac
    __stack_chk_fail();
    int32_t v15; // 0x4fb600
    v11 = v15;
    v8 = v2;
    v6 = result;
    v9 = v4;
    goto lab_0x4fb6b1;
  lab_0x4fb6b1:;
    int64_t v16 = v9;
    int64_t v17 = v6;
    int64_t v18 = function_5423f0(); // 0x4fb6b1
    int64_t v19 = v8 - 1; // 0x4fb6b6
    int64_t v20 = v17; // 0x4fb6bd
    int64_t v21; // 0x4fb712
    if (v19 == 0) {
        // 0x4fb6bf
        function_1fd40(v18);
        int64_t v22 = *(int64_t *)(*(int64_t *)v17 - 24) + v17; // 0x4fb6c7
        int32_t * v23 = (int32_t *)(v22 + 32); // 0x4fb6cb
        *v23 = *v23 | 1;
        function_20a50();
        v20 = v22;
        if (*(char *)(v22 + 28) % 2 == 0) {
            // 0x4fb712
            v21 = function_20a50();
            function_20540();
            _Unwind_Resume((struct _Unwind_Exception *)v21);
            return function_4fb600(v21, v16, v19);
        }
    }
    int64_t v24 = v20;
    function_1fd40(v18);
    int64_t v25 = *(int64_t *)(*(int64_t *)v24 - 24) + v24; // 0x4fb6e6
    int32_t * v26 = (int32_t *)(v25 + 32); // 0x4fb6e9
    *v26 = *v26 | 1;
    if (*(char *)(v25 + 28) % 2 != 0) {
        // 0x4fb712
        v21 = function_20a50();
        function_20540();
        _Unwind_Resume((struct _Unwind_Exception *)v21);
        return function_4fb600(v21, v16, v19);
    }
    // 0x4fb6f3
    function_20540();
    v10 = v11;
    v7 = v19;
    v5 = v24;
    goto lab_0x4fb671;
  lab_0x4fb671:;
    int64_t v27 = v5;
    int64_t v28 = v7;
    int32_t v29 = v10;
    v15 = v29;
    v2 = v28;
    v3 = v27;
    v4 = v29;
    if (v29 != 0) {
        int64_t v30 = *(int64_t *)(*(int64_t *)v27 - 24) + v27; // 0x4fb69f
        uint32_t v31 = *(int32_t *)(v30 + 32) | v29; // 0x4fb6a2
        function_4fca70(v30, v31);
        v15 = v29;
        v2 = v28;
        v3 = v27;
        v4 = v31;
    }
    goto lab_0x4fb678;
}

// Address range: 0x4fb740 - 0x4fb875
int64_t function_4fb740(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4fb75a
    function_4f8cc0();
    int64_t v2 = 0; // 0x4fb772
    int64_t v3 = a1; // 0x4fb772
    int64_t v4 = a1; // 0x4fb772
    int64_t v5; // 0x4fb740
    int64_t v6; // 0x4fb740
    int64_t v7; // 0x4fb740
    int64_t v8; // 0x4fb740
    int64_t v9; // 0x4fb740
    int32_t v10; // 0x4fb740
    int32_t v11; // 0x4fb740
    char v12; // 0x4fb740
    if (v12 == 0) {
        goto lab_0x4fb7b8;
    } else {
        // 0x4fb774
        char v13; // bp-37, 0x4fb740
        int64_t v14 = *(int64_t *)((int64_t)&v13 - 24); // 0x4fb77e
        v10 = 0;
        v7 = a2;
        v5 = a1;
        v11 = 0;
        v8 = 0;
        v6 = a1;
        v9 = a1;
        if (*(int64_t *)(a1 + 256 + v14) == 0) {
            goto lab_0x4fb7f1;
        } else {
            goto lab_0x4fb7b1;
        }
    }
  lab_0x4fb7b8:;
    int64_t result = v3;
    if (v1 == __readfsqword(40)) {
        // 0x4fb7ca
        return result;
    }
    // 0x4fb7ec
    __stack_chk_fail();
    int32_t v15; // 0x4fb740
    v11 = v15;
    v8 = v2;
    v6 = result;
    v9 = v4;
    goto lab_0x4fb7f1;
  lab_0x4fb7f1:;
    int64_t v16 = v9;
    int64_t v17 = v6;
    int64_t v18 = function_5423f0(); // 0x4fb7f1
    int64_t v19 = v8 - 1; // 0x4fb7f6
    int64_t v20 = v17; // 0x4fb7fd
    int64_t v21; // 0x4fb852
    if (v19 == 0) {
        // 0x4fb7ff
        function_1fd40(v18);
        int64_t v22 = *(int64_t *)(*(int64_t *)v17 - 24) + v17; // 0x4fb807
        int32_t * v23 = (int32_t *)(v22 + 32); // 0x4fb80b
        *v23 = *v23 | 1;
        function_20a50();
        v20 = v22;
        if (*(char *)(v22 + 28) % 2 == 0) {
            // 0x4fb852
            v21 = function_20a50();
            function_20540();
            _Unwind_Resume((struct _Unwind_Exception *)v21);
            return function_4fb740(v21, v16, v19);
        }
    }
    int64_t v24 = v20;
    function_1fd40(v18);
    int64_t v25 = *(int64_t *)(*(int64_t *)v24 - 24) + v24; // 0x4fb826
    int32_t * v26 = (int32_t *)(v25 + 32); // 0x4fb829
    *v26 = *v26 | 1;
    if (*(char *)(v25 + 28) % 2 != 0) {
        // 0x4fb852
        v21 = function_20a50();
        function_20540();
        _Unwind_Resume((struct _Unwind_Exception *)v21);
        return function_4fb740(v21, v16, v19);
    }
    // 0x4fb833
    function_20540();
    v10 = v11;
    v7 = v19;
    v5 = v24;
    goto lab_0x4fb7b1;
  lab_0x4fb7b1:;
    int64_t v27 = v5;
    int64_t v28 = v7;
    int32_t v29 = v10;
    v15 = v29;
    v2 = v28;
    v3 = v27;
    v4 = v29;
    if (v29 != 0) {
        int64_t v30 = *(int64_t *)(*(int64_t *)v27 - 24) + v27; // 0x4fb7df
        uint32_t v31 = *(int32_t *)(v30 + 32) | v29; // 0x4fb7e2
        function_4fca70(v30, v31);
        v15 = v29;
        v2 = v28;
        v3 = v27;
        v4 = v31;
    }
    goto lab_0x4fb7b8;
}

// Address range: 0x4fb880 - 0x4fb9b5
int64_t function_4fb880(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4fb89a
    function_4f8cc0();
    int64_t v2 = 0; // 0x4fb8b2
    int64_t v3 = a1; // 0x4fb8b2
    int64_t v4 = a1; // 0x4fb8b2
    int64_t v5; // 0x4fb880
    int64_t v6; // 0x4fb880
    int64_t v7; // 0x4fb880
    int64_t v8; // 0x4fb880
    int64_t v9; // 0x4fb880
    int32_t v10; // 0x4fb880
    int32_t v11; // 0x4fb880
    char v12; // 0x4fb880
    if (v12 == 0) {
        goto lab_0x4fb8f8;
    } else {
        // 0x4fb8b4
        char v13; // bp-37, 0x4fb880
        int64_t v14 = *(int64_t *)((int64_t)&v13 - 24); // 0x4fb8be
        v10 = 0;
        v7 = a2;
        v5 = a1;
        v11 = 0;
        v8 = 0;
        v6 = a1;
        v9 = a1;
        if (*(int64_t *)(a1 + 256 + v14) == 0) {
            goto lab_0x4fb931;
        } else {
            goto lab_0x4fb8f1;
        }
    }
  lab_0x4fb8f8:;
    int64_t result = v3;
    if (v1 == __readfsqword(40)) {
        // 0x4fb90a
        return result;
    }
    // 0x4fb92c
    __stack_chk_fail();
    int32_t v15; // 0x4fb880
    v11 = v15;
    v8 = v2;
    v6 = result;
    v9 = v4;
    goto lab_0x4fb931;
  lab_0x4fb931:;
    int64_t v16 = v9;
    int64_t v17 = v6;
    int64_t v18 = function_5423f0(); // 0x4fb931
    int64_t v19 = v8 - 1; // 0x4fb936
    int64_t v20 = v17; // 0x4fb93d
    int64_t v21; // 0x4fb992
    if (v19 == 0) {
        // 0x4fb93f
        function_1fd40(v18);
        int64_t v22 = *(int64_t *)(*(int64_t *)v17 - 24) + v17; // 0x4fb947
        int32_t * v23 = (int32_t *)(v22 + 32); // 0x4fb94b
        *v23 = *v23 | 1;
        function_20a50();
        v20 = v22;
        if (*(char *)(v22 + 28) % 2 == 0) {
            // 0x4fb992
            v21 = function_20a50();
            function_20540();
            _Unwind_Resume((struct _Unwind_Exception *)v21);
            return function_4fb880(v21, v16, v19);
        }
    }
    int64_t v24 = v20;
    function_1fd40(v18);
    int64_t v25 = *(int64_t *)(*(int64_t *)v24 - 24) + v24; // 0x4fb966
    int32_t * v26 = (int32_t *)(v25 + 32); // 0x4fb969
    *v26 = *v26 | 1;
    if (*(char *)(v25 + 28) % 2 != 0) {
        // 0x4fb992
        v21 = function_20a50();
        function_20540();
        _Unwind_Resume((struct _Unwind_Exception *)v21);
        return function_4fb880(v21, v16, v19);
    }
    // 0x4fb973
    function_20540();
    v10 = v11;
    v7 = v19;
    v5 = v24;
    goto lab_0x4fb8f1;
  lab_0x4fb8f1:;
    int64_t v27 = v5;
    int64_t v28 = v7;
    int32_t v29 = v10;
    v15 = v29;
    v2 = v28;
    v3 = v27;
    v4 = v29;
    if (v29 != 0) {
        int64_t v30 = *(int64_t *)(*(int64_t *)v27 - 24) + v27; // 0x4fb91f
        uint32_t v31 = *(int32_t *)(v30 + 32) | v29; // 0x4fb922
        function_4fca70(v30, v31);
        v15 = v29;
        v2 = v28;
        v3 = v27;
        v4 = v31;
    }
    goto lab_0x4fb8f8;
}

// Address range: 0x4fb9c0 - 0x4fbaf5
int64_t function_4fb9c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __readfsqword(40); // 0x4fb9da
    function_4f8cc0();
    int64_t v2 = 0; // 0x4fb9f2
    int64_t v3 = a1; // 0x4fb9f2
    int64_t v4 = a1; // 0x4fb9f2
    int64_t v5; // 0x4fb9c0
    int64_t v6; // 0x4fb9c0
    int64_t v7; // 0x4fb9c0
    int64_t v8; // 0x4fb9c0
    int64_t v9; // 0x4fb9c0
    int32_t v10; // 0x4fb9c0
    int32_t v11; // 0x4fb9c0
    char v12; // 0x4fb9c0
    if (v12 == 0) {
        goto lab_0x4fba38;
    } else {
        // 0x4fb9f4
        char v13; // bp-37, 0x4fb9c0
        int64_t v14 = *(int64_t *)((int64_t)&v13 - 24); // 0x4fb9fe
        v10 = 0;
        v7 = a2;
        v5 = a1;
        v11 = 0;
        v8 = 0;
        v6 = a1;
        v9 = a1;
        if (*(int64_t *)(a1 + 256 + v14) == 0) {
            goto lab_0x4fba71;
        } else {
            goto lab_0x4fba31;
        }
    }
  lab_0x4fba38:;
    int64_t result = v3;
    if (v1 == __readfsqword(40)) {
        // 0x4fba4a
        return result;
    }
    // 0x4fba6c
    __stack_chk_fail();
    int32_t v15; // 0x4fb9c0
    v11 = v15;
    v8 = v2;
    v6 = result;
    v9 = v4;
    goto lab_0x4fba71;
  lab_0x4fba71:;
    int64_t v16 = v9;
    int64_t v17 = v6;
    int64_t v18 = function_5423f0(); // 0x4fba71
    int64_t v19 = v8 - 1; // 0x4fba76
    int64_t v20 = v17; // 0x4fba7d
    int64_t v21; // 0x4fbad2
    if (v19 == 0) {
        // 0x4fba7f
        function_1fd40(v18);
        int64_t v22 = *(int64_t *)(*(int64_t *)v17 - 24) + v17; // 0x4fba87
        int32_t * v23 = (int32_t *)(v22 + 32); // 0x4fba8b
        *v23 = *v23 | 1;
        function_20a50();
        v20 = v22;
        if (*(char *)(v22 + 28) % 2 == 0) {
            // 0x4fbad2
            v21 = function_20a50();
            function_20540();
            _Unwind_Resume((struct _Unwind_Exception *)v21);
            return function_4fb9c0(v21, v16, v19);
        }
    }
    int64_t v24 = v20;
    function_1fd40(v18);
    int64_t v25 = *(int64_t *)(*(int64_t *)v24 - 24) + v24; // 0x4fbaa6
    int32_t * v26 = (int32_t *)(v25 + 32); // 0x4fbaa9
    *v26 = *v26 | 1;
    if (*(char *)(v25 + 28) % 2 != 0) {
        // 0x4fbad2
        v21 = function_20a50();
        function_20540();
        _Unwind_Resume((struct _Unwind_Exception *)v21);
        return function_4fb9c0(v21, v16, v19);
    }
    // 0x4fbab3
    function_20540();
    v10 = v11;
    v7 = v19;
    v5 = v24;
    goto lab_0x4fba31;
  lab_0x4fba31:;
    int64_t v27 = v5;
    int64_t v28 = v7;
    int32_t v29 = v10;
    v15 = v29;
    v2 = v28;
    v3 = v27;
    v4 = v29;
    if (v29 != 0) {
        int64_t v30 = *(int64_t *)(*(int64_t *)v27 - 24) + v27; // 0x4fba5f
        uint32_t v31 = *(int32_t *)(v30 + 32) | v29; // 0x4fba62
        function_4fca70(v30, v31);
        v15 = v29;
        v2 = v28;
        v3 = v27;
        v4 = v31;
    }
    goto lab_0x4fba38;
}
