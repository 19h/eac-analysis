/*
 * Targeted RetDec C for native executable gap queue batch 806.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xe0f66-0xe1166 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe1166-0xe1366 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe1366-0xe1566 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2980c9-0x2982c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2982c9-0x2984c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2984c9-0x2986c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2986c9-0x2988c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a0519-0x2a0719 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_166cd26();
int64_t function_2980b2();
int64_t function_2980c9(int64_t a1, int64_t a2);
int64_t function_2980d8(int64_t a1);
int64_t function_298108(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29812b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_298187(void);
int64_t function_298189(int64_t a1, int64_t a2);
int64_t function_2981ba(void);
int64_t function_2981f6(int64_t a1);
int64_t function_2981fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_298279(void);
int64_t function_298282(void);
int64_t function_298293(int64_t a1);
int64_t function_2982b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2982d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2983df(void);
int64_t function_29841b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2984df(void);
int64_t function_2984f5(void);
int64_t function_298538(void);
int64_t function_29853a(void);
int64_t function_29855c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_298583(int64_t a1);
int64_t function_2985b5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2985ba(void);
int64_t function_2985d7(void);
int64_t function_29865f(void);
int64_t function_298664(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2986f4(void);
int64_t function_298729(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_298778(void);
int64_t function_298789(void);
int64_t function_2987b9(void);
int64_t function_2987e4(int64_t a1);
int64_t function_29880c(void);
int64_t function_29883a(int64_t a1);
int64_t function_298845(int64_t a1);
int64_t function_298847(void);
int64_t function_298864(void);
int64_t function_298884(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_298897(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a0519(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a0574(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a059d(void);
int64_t function_2a0685(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a06b9(void);
int64_t function_2a06e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39954f75();
int64_t function_3b98821();
int64_t function_522a2b21();
int64_t function_c57b8();
int64_t function_e0f66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_e101f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_e1197(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_e130e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_e14f8(int64_t a1);
int64_t function_e150a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffffc9d62455();
int64_t function_ffffffffe8bf76c0();
int64_t unknown_2bad2b3d();
int64_t unknown_2c6c7c74();
int64_t unknown_30b1250e();
int64_t unknown_389f0b43();
int64_t unknown_3e8bdd65();
int64_t unknown_428fc93c();
int64_t unknown_5343205c();
int64_t unknown_6066a68b();
int64_t unknown_702b5ef6();
int64_t unknown_ffffffff884b439e();
int64_t unknown_ffffffff9a0aa918();
int64_t unknown_ffffffffacb4942c();
int64_t unknown_ffffffffe82ac0c9();
int64_t unknown_ffffffffe8a1a972();

// Address range: 0xe0f66 - 0xe101f
int64_t function_e0f66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xe0f66
    int64_t v1; // bp+16, 0xe0f66
    v1 = (int64_t)&v1;
    int64_t v2; // 0xe0f66
    return function_c57b8(a1, a2, a3, a4, a5, v2, v2);
}

// Address range: 0xe101f - 0xe1197
int64_t function_e101f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xe101f
    return function_c57b8(a1, a2, a3, a4, a5, a6, a7);
}

// Address range: 0xe1197 - 0xe130e
int64_t function_e1197(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xe1197
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0xe09a4);
}

// Address range: 0xe130e - 0xe1448
int64_t function_e130e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xe130e
    return function_c57b8(a1, a2, a3, 0xe0b90, a5, a6, 310);
}

// Address range: 0xe14f8 - 0xe14f9
int64_t function_e14f8(int64_t a1) {
    // 0xe14f8
    int64_t result; // 0xe14f8
    return result;
}

// Address range: 0xe150a - 0xe150c
int64_t function_e150a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe150a
    return __asm_in((int16_t)a3);
}

// Address range: 0x2980c9 - 0x2980d7
int64_t function_2980c9(int64_t a1, int64_t a2) {
    // 0x2980c9
    int64_t v1; // 0x2980c9
    return (int64_t)&v1;
}

// Address range: 0x2980d8 - 0x2980e8
int64_t function_2980d8(int64_t a1) {
    // 0x2980d8
    int64_t v1; // 0x2980d8
    return v1 & 0x36fec220 | 0xc9013ddf;
}

// Address range: 0x298108 - 0x298128
int64_t function_298108(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x298108
    unknown_30b1250e();
    int32_t * v1 = (int32_t *)(unknown_ffffffff9a0aa918() - 0x554186d6); // 0x298119
    int64_t v2; // 0x298108
    *v1 = *v1 + (int32_t)v2;
    return function_2980b2();
}

// Address range: 0x29812b - 0x298140
int64_t function_29812b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29812b
    int64_t v1; // 0x29812b
    *(char *)-0x380dfffec232955a = (char)v1;
    int64_t v2 = __asm_hlt(); // 0x298134
    *(int32_t *)a3 = (int32_t)v1 & -0x6daf45be;
    return v2 & -256 | 150;
}

// Address range: 0x298187 - 0x298189
int64_t function_298187(void) {
    // 0x298187
    int64_t result; // 0x298187
    return result;
}

// Address range: 0x298189 - 0x29818b
int64_t function_298189(int64_t a1, int64_t a2) {
    // 0x298189
    int64_t result; // 0x298189
    *(char *)a2 = 2 * (char)result;
    return result;
}

// Address range: 0x2981ba - 0x2981bf
int64_t function_2981ba(void) {
    // 0x2981ba
    return function_522a2b21();
}

// Address range: 0x2981f6 - 0x2981fd
int64_t function_2981f6(int64_t a1) {
    // 0x2981f6
    int64_t result; // 0x2981f6
    char * v1 = (char *)(result + 0x1d4f9b60); // 0x2981f6
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x2981fd - 0x298234
int64_t function_2981fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x2981fd
    *(int32_t *)a3 = (int32_t)(v2 & v2);
    char * v3 = (char *)(a3 - 5); // 0x29820d
    *v3 = (char)(v2 / 256);
    unsigned char v4 = *(char *)&v1; // 0x298219
    unsigned char v5 = v4 + *v3; // 0x298219
    *(char *)a2 = v5;
    int32_t * v6 = (int32_t *)(int64_t)*(int32_t *)-0x56323627ffa8fec3; // 0x298224
    uint32_t v7 = *v6; // 0x298224
    *v6 = v7 / 0x800000 | 1024 * v7 | 512 * (int32_t)(v5 < v4);
    bool v8; // 0x2981fd
    unknown_ffffffffacb4942c((v8 ? -1 : 1) + a1);
    return function_ffffffffc9d62455();
}

// Address range: 0x298279 - 0x29827a
int64_t function_298279(void) {
    // 0x298279
    int64_t result; // 0x298279
    return result;
}

// Address range: 0x298282 - 0x298285
int64_t function_298282(void) {
    // 0x298282
    int64_t result; // 0x298282
    return result;
}

// Address range: 0x298293 - 0x2982a0
int64_t function_298293(int64_t a1) {
    // 0x298293
    int64_t v1; // 0x298293
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x2982b2 - 0x2982d2
int64_t function_2982b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2982b2
    int64_t v1; // 0x2982b2
    unsigned char v2 = (char)v1;
    *(char *)v1 = 2 * v2;
    char * v3 = (char *)(a4 + 1); // 0x2982bd
    *v3 = *v3 + 71 + (char)(v2 > -1 - v2);
    int32_t * v4 = (int32_t *)(8 * v1 + (a4 & -0xff01 | 256 * a3 & 0xff00)); // 0x2982c9
    *v4 = *v4 + (int32_t)a2;
    int32_t * v5 = (int32_t *)(a1 - 56 + 4 * a1); // 0x2982cd
    *v5 = *v5 + (int32_t)a1;
    return 0x3289c600;
}

// Address range: 0x2982d3 - 0x2983da
int64_t function_2982d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    char v2 = *(char *)-0x70a70524 + (char)((int64_t)&g2 >> 8); // 0x2982d5
    *(char *)-0x70a70524 = v2;
    int64_t v3; // 0x2982d3
    if (v2 < 0) {
        // 0x298321
        v3 = a5;
        if (a4 == 1) {
            char v4 = a3; // 0x298329
            int64_t v5; // 0x2982d3
            if ((int32_t)a5 > 0xc0bf4eca) {
                int64_t v6 = a5 + 0x3f40b135; // 0x298324
                char * v7 = (char *)(v5 + 0x73bdd18a); // 0x29832b
                *v7 = *v7 + 52;
                char * v8 = (char *)(v6 & 0xffffffff); // 0x298332
                *v8 = *v8 + (char)v6;
                v4 = *(char *)&v1;
            }
            int64_t v9 = a1 & 0xffffffff ^ 0x2a52853c; // 0x29833f
            int32_t * v10 = (int32_t *)(a2 + 76); // 0x298347
            uint32_t v11 = *v10; // 0x298347
            *v10 = v11 / 128 | 0x4000000 * v11;
            if (v9 != 0x4090201) {
                // 0x298354
                return (v1 / 256 + v9) % 256 | v9 & 0xffffff00;
            }
            char * v12 = (char *)(a2 + 0x1a1e3c1d); // 0x2983bc
            *v12 = *v12 & -44;
            int64_t v13 = unknown_ffffffffe82ac0c9(); // 0x2983c3
            int32_t v14 = *(int32_t *)&v1; // 0x2983c8
            int64_t v15; // bp+16, 0x2982d3
            *(int32_t *)v1 = v14 + (int32_t)(int64_t)&v15;
            char * v16 = (char *)(256 * (int64_t)(v4 + (char)((int64_t)&g2 >> 8)) | (v5 | (int64_t)&g2) & -0xff01); // 0x2983ca
            *v16 = *v16 | (char)v13;
            *(char *)a6 = __asm_insb((int16_t)v1);
            return v13 & -0xff01 | (int64_t)&g1;
        }
    }
    // 0x2982df
    __asm_outsd((int16_t)a3 & -256 | 1, (int32_t)a2);
    uint32_t v17 = (int32_t)v3; // 0x2982ee
    uint32_t v18 = *(int32_t *)v3; // 0x2982ee
    uint32_t v19 = v17 - v18; // 0x2982ee
    int64_t result = v19; // 0x2982f0
    if (v18 > v17 || v19 == 0) {
        result = function_298279();
    }
    // 0x2982f2
    return result;
}

// Address range: 0x2983df - 0x2983e0
int64_t function_2983df(void) {
    // 0x2983df
    int64_t result; // 0x2983df
    return result;
}

// Address range: 0x29841b - 0x2984cd
int64_t function_29841b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a1;
    unsigned char v2 = (char)a3;
    *(char *)a3 = v2 / 128 | 2 * v2;
    int32_t v3 = *(int32_t *)&v1; // 0x29842d
    int32_t v4 = a3; // 0x29842d
    int32_t v5 = v3 + v4; // 0x29842d
    *(int32_t *)v1 = v5;
    if (((v5 ^ v3) & (v5 ^ v4)) >= 0) {
        // 0x298437
        return unknown_2bad2b3d();
    }
    // 0x298461
    int64_t v6; // 0x29841b
    int64_t v7 = 4 * v6 + a3; // 0x29842f
    char v8 = v7; // 0x298461
    *(char *)v1 = v8;
    bool v9; // 0x29841b
    v1 += (v9 ? -1 : 1);
    int64_t v10; // 0x29841b
    if (v5 < 0) {
        int64_t v11 = unknown_2c6c7c74(v1); // 0x29846e
        char * v12 = (char *)(v11 + 0x7102a00); // 0x298473
        *v12 = *v12 + (char)v11;
        char * v13 = (char *)(v6 - 0x42fe1800); // 0x298479
        *v13 = *v13 + (char)(a4 / 256);
        char * v14 = (char *)(((a4 + 41) % 256 | a4 & -256) - 0x451fe400); // 0x29847f
        unsigned char v15 = *v14; // 0x29847f
        unsigned char v16 = v15 + (char)v6; // 0x29847f
        *v14 = v16;
        int32_t * v17 = (int32_t *)(v10 - 0x451aeceb); // 0x29848e
        *v17 = *v17 + (int32_t)v6;
        return v11 + 0x6e654ab2 + (int64_t)(v16 < v15) & 0xffffffff;
    }
    int64_t v18 = v7 & 0xffffffff; // 0x29842f
    int32_t * v19 = (int32_t *)(a4 - 112 + v18); // 0x29844e
    *v19 = *v19 + v4;
    char v20 = v8 + 6; // 0x298454
    int64_t result = unknown_5343205c(); // 0x298456
    int64_t v21 = (int64_t)*(int32_t *)(256 * v18 + a3 & 0xff00 | a3 & -0xff01); // 0x29845b
    v1 = v21;
    if (v20 < 0 != (v20 & (v8 ^ -128)) < 0) {
        // 0x298460
        return result;
    }
    char * v22 = (char *)(v21 + 35); // 0x2984bc
    *v22 = *v22 | (char)(a4 / 256);
    int32_t * v23 = (int32_t *)v1; // 0x2984bf
    *v23 = *v23 + (int32_t)v1;
    char * v24 = (char *)(a2 - 0x35592915); // 0x2984c2
    unsigned char v25 = *v24; // 0x2984c2
    *v24 = v25 / 2 | 128 * (char)((result & 256) != 0);
    *(int32_t *)v6 = *(int32_t *)&v6 + (int32_t)a4;
    return result - v10 + (int64_t)(v25 % 2 != 0) & 0xffffffff;
}

// Address range: 0x2984df - 0x2984e0
int64_t function_2984df(void) {
    // 0x2984df
    int64_t result; // 0x2984df
    return result;
}

// Address range: 0x2984f5 - 0x2984f7
int64_t function_2984f5(void) {
    // 0x2984f5
    return function_2984df();
}

// Address range: 0x298538 - 0x29853a
int64_t function_298538(void) {
    // 0x298538
    int64_t result; // 0x298538
    return result;
}

// Address range: 0x29853a - 0x29853c
int64_t function_29853a(void) {
    // 0x29853a
    int64_t result; // 0x29853a
    return result;
}

// Address range: 0x29855c - 0x29857f
int64_t function_29855c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 97); // 0x29855c
    *v1 = -1 - *v1;
    int64_t v2 = unknown_3e8bdd65(); // 0x29855f
    bool v3; // 0x29855c
    int64_t v4 = v3 ? -1 : 1; // 0x298564
    int64_t v5 = v4 + a1; // 0x298564
    int64_t v6 = v4 + a2; // 0x298564
    char * v7 = (char *)v6; // 0x298565
    *v7 = *v7 & (char)v2;
    int64_t result = unknown_ffffffffe8a1a972(v5, v6); // 0x29856c
    *(int32_t *)-0x17a86d88 = *(int32_t *)-0x17a86d88 + (int32_t)v5;
    int32_t * v8 = (int32_t *)(a3 - 0xa8eef2b); // 0x298577
    *v8 = *v8 + (int32_t)a4;
    return result;
}

// Address range: 0x298583 - 0x298588
int64_t function_298583(int64_t a1) {
    // 0x298583
    return __asm_wait(a1);
}

// Address range: 0x2985b5 - 0x2985b8
int64_t function_2985b5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2985b5
    int64_t result; // 0x2985b5
    return result;
}

// Address range: 0x2985ba - 0x2985bb
int64_t function_2985ba(void) {
    // 0x2985ba
    int64_t result; // 0x2985ba
    return result;
}

// Address range: 0x2985d7 - 0x2985d9
int64_t function_2985d7(void) {
    // 0x2985d7
    return function_2985ba();
}

// Address range: 0x29865f - 0x298660
int64_t function_29865f(void) {
    // 0x29865f
    int64_t result; // 0x29865f
    return result;
}

// Address range: 0x298664 - 0x298668
int64_t function_298664(int64_t a1, int64_t a2, int64_t a3) {
    // 0x298664
    int64_t result; // 0x298664
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x2986f4 - 0x2986f5
int64_t function_2986f4(void) {
    // 0x2986f4
    int64_t result; // 0x2986f4
    return result;
}

// Address range: 0x298729 - 0x298753
int64_t function_298729(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2; // 0x298729
    unsigned char v3 = (char)v2;
    *(char *)v2 = v3 / 128 | 2 * v3;
    *(char *)a4 = v3;
    int64_t v4 = v2 & -256 | (int64_t)*(char *)&v1; // 0x298730
    unsigned char v5 = (char)a4 % 32; // 0x298732
    if (v5 != 0) {
        char * v6 = (char *)(4 * v2 - 0x6e7045e9 + v4); // 0x298732
        unsigned char v7 = *v6; // 0x298732
        *v6 = v7 >> 8 - v5 | v7 << v5;
    }
    __asm_out(88, (int32_t)v4);
    int64_t v8 = unknown_389f0b43(); // 0x29873d
    int32_t * v9 = (int32_t *)v8; // 0x298742
    *v9 = *v9 + (int32_t)v8;
    *(int32_t *)(v8 - 65) = (int32_t)a3;
    return v8 & -256 | 85;
}

// Address range: 0x298778 - 0x298779
int64_t function_298778(void) {
    // 0x298778
    int64_t result; // 0x298778
    return result;
}

// Address range: 0x298789 - 0x298790
int64_t function_298789(void) {
    // 0x298789
    int64_t v1; // 0x298789
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v1;
    return function_3b98821();
}

// Address range: 0x2987b9 - 0x2987c3
int64_t function_2987b9(void) {
    // 0x2987b9
    int64_t result; // 0x2987b9
    bool v1; // 0x2987b9
    if (v1) {
        result = function_298778();
    }
    // 0x2987bd
    return result;
}

// Address range: 0x2987e4 - 0x2987fd
int64_t function_2987e4(int64_t a1) {
    // 0x2987e4
    int64_t v1; // 0x2987e4
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x2987e4
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x2987e4
    int32_t * v4 = (int32_t *)(v3 + 0x6208e578); // 0x2987ec
    *v4 = *v4 / 2;
    return function_166cd26(v3);
}

// Address range: 0x29880c - 0x29880d
int64_t function_29880c(void) {
    // 0x29880c
    int64_t result; // 0x29880c
    return result;
}

// Address range: 0x29883a - 0x298842
int64_t function_29883a(int64_t a1) {
    // 0x29883a
    int64_t result; // 0x29883a
    return result;
}

// Address range: 0x298845 - 0x298846
int64_t function_298845(int64_t a1) {
    // 0x298845
    int64_t result; // 0x298845
    return result;
}

// Address range: 0x298847 - 0x29884a
int64_t function_298847(void) {
    // 0x298847
    int64_t result; // 0x298847
    return result;
}

// Address range: 0x298864 - 0x298865
int64_t function_298864(void) {
    // 0x298864
    int64_t result; // 0x298864
    return result;
}

// Address range: 0x298884 - 0x29888b
int64_t function_298884(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x298884
    *(char *)a3 = (char)a4;
    bool v1; // 0x298884
    if (a4 != 1 == v1) {
        function_298864();
    }
    // 0x298888
    return function_29880c();
}

// Address range: 0x298897 - 0x29889e
int64_t function_298897(int64_t a1, int64_t a2, int64_t a3) {
    // 0x298897
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return unknown_ffffffff884b439e();
}

// Address range: 0x2a0519 - 0x2a0544
int64_t function_2a0519(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a0519
    int64_t result; // 0x2a0519
    bool v1; // 0x2a0519
    if (v1 || false) {
        int32_t * v2 = (int32_t *)a5; // 0x2a0521
        *v2 = *v2 + (int32_t)a3;
        *(int32_t *)0x39ab53698401cf76 = (int32_t)a5;
        int64_t v3 = unknown_428fc93c(); // 0x2a0536
        int32_t * v4 = (int32_t *)(a1 - 0x7c39fe18 + (4 * (a3 + a1) & 0x3fffffffc)); // 0x2a053d
        *v4 = *v4 + (int32_t)a4;
        return v3 + result & 0xffffffff;
    }
    // 0x2a051b
    return result;
}

// Address range: 0x2a0574 - 0x2a059d
int64_t function_2a0574(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a0574
    int64_t v1; // 0x2a0574
    float80_t v2; // 0x2a0574
    *(float32_t *)(2 * v1 - 0xfb8fec3) = (float32_t)v2;
    int64_t v3 = v1 + 0xf14cded; // 0x2a0584
    int32_t v4 = *(int32_t *)(v3 & 0xffffffff); // 0x2a0589
    int64_t v5 = (int32_t)((int32_t)v1 < 0xf0eb3213) + (int32_t)v3 + v4; // 0x2a0589
    char * v6 = (char *)(v5 + 11); // 0x2a058b
    *v6 = 2 * *v6;
    int64_t result = v5 - 0x21b8ce; // 0x2a058e
    bool v7; // 0x2a0574
    *(int32_t *)((v7 ? -1 : 1) + a1) = (int32_t)result;
    return result;
}

// Address range: 0x2a059d - 0x2a05a2
int64_t function_2a059d(void) {
    // 0x2a059d
    int64_t result; // 0x2a059d
    return result;
}

// Address range: 0x2a0685 - 0x2a0693
int64_t function_2a0685(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a0685
    unknown_6066a68b(a1, a2, a3);
    return function_39954f75();
}

// Address range: 0x2a06b9 - 0x2a06ba
int64_t function_2a06b9(void) {
    // 0x2a06b9
    int64_t result; // 0x2a06b9
    return result;
}

// Address range: 0x2a06e5 - 0x2a0700
int64_t function_2a06e5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 44); // 0x2a06e5
    uint32_t v2 = *v1; // 0x2a06e5
    int64_t v3; // 0x2a06e5
    uint32_t v4 = v2 + (int32_t)v3; // 0x2a06e5
    *v1 = v4;
    int64_t v5; // 0x2a06e5
    int32_t v6 = *(int32_t *)&v5; // 0x2a06e8
    *(int32_t *)v5 = v6 + (int32_t)a3 + (int32_t)(v4 < v2);
    char * v7 = (char *)(v3 + 0x18454e07); // 0x2a06ea
    unsigned char v8 = *v7; // 0x2a06ea
    unsigned char v9 = v8 + (char)v5; // 0x2a06ea
    *v7 = v9;
    unknown_702b5ef6();
    if (v9 >= v8 && v9 != 0) {
        function_2a06b9();
    }
    // 0x2a06f8
    bool v10; // 0x2a06e5
    char * v11 = (char *)(a2 - 108 + (v10 ? -4 : 4)); // 0x2a06f8
    *v11 = *v11 + (char)a4;
    return function_ffffffffe8bf76c0();
}
