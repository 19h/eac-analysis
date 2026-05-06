/*
 * Targeted RetDec C for native executable gap queue batch 982.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xe2766-0xe2966 rank=- name=- kind=- bytes=- uncovered=-
 *   0xe2f66-0xe3166 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2998c9-0x299ac9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x299ec9-0x29a0c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x29a0c9-0x29a2c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x29a2c9-0x29a4c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x29a4c9-0x29a6c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x29a6c9-0x29a8c9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x395fe1-0x3961e1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3961e1-0x3963e1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3963e1-0x3965e1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3965e1-0x3967e1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3967e1-0x3969e1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3969e1-0x396be1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x396be1-0x396de1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x396de1-0x396fe1 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1065a295();
int64_t function_1515995f();
int64_t function_2998c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2999ec(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_299ec9(int64_t a1);
int64_t function_299efc(int64_t a1);
int64_t function_299f10(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_299f37(void);
int64_t function_299f6b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_299f76(int64_t a1, int64_t a2, int64_t a3);
int64_t function_299fc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29a000(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29a045(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result);
int64_t function_29a0f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29a118(void);
int64_t function_29a11e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29a14b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29a17f(void);
int64_t function_29a1b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29a1c3(void);
int64_t function_29a1e1(void);
int64_t function_29a21b(int64_t a1);
int64_t function_29a22d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29a23d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29a2b5(int64_t a1);
int64_t function_29a2c6(void);
int64_t function_29a2e1(void);
int64_t function_29a2e7(int64_t a1);
int64_t function_29a30c(int64_t a1);
int64_t function_29a315(void);
int64_t function_29a34f(void);
int64_t function_29a366(void);
int64_t function_29a42a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_29a4bb(void);
int64_t function_29a58c(int64_t a1);
int64_t function_29a5b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29a67e(void);
int64_t function_29a6be(void);
int64_t function_29a6c5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_29a768(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29a780(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_29a86b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_29a888(void);
int64_t function_395fe1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_39607a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3961e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_396330(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_396446(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_39657c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3966f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39685a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_396a4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_396b95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_396d0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_396e5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_396fc3(void);
int64_t function_396fd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_396fd9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5888b510();
int64_t function_c1f1296();
int64_t function_c6d58();
int64_t function_cf3c7();
int64_t function_e2766(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e2868(void);
int64_t function_e2891(int64_t a1);
int64_t function_e2f66(void);
int64_t function_e2f98(void);
int64_t function_e30b7(void);
int64_t function_e30c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e30c5(void);
int64_t function_e30e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e313e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffffa6646436();
int64_t function_ffffffffbf40a26d();
int64_t function_ffffffffec29c8cb();
int64_t function_ffffffffee7da72b();
int64_t function_fffffffffd5ca014();
int64_t unknown_2806924f();
int64_t unknown_3b00d0e8();
int64_t unknown_604c9072();
int64_t unknown_94c74a5();
int64_t unknown_ffffffffab3535e0();
int64_t unknown_ffffffffec6d4a13();
int64_t unknown_fffffffff6ac99cf();

// Address range: 0xe2766 - 0xe2853
int64_t function_e2766(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe2766
    int64_t v1; // 0xe2766
    v1 = (int64_t)&v1;
    int64_t v2; // bp-8, 0xe2766
    v2 = (int64_t)&v2 + 16;
    return function_c6d58(a1, a2);
}

// Address range: 0xe2868 - 0xe286b
int64_t function_e2868(void) {
    // 0xe2868
    int64_t result; // 0xe2868
    return result;
}

// Address range: 0xe2891 - 0xe2892
int64_t function_e2891(int64_t a1) {
    // 0xe2891
    int64_t result; // 0xe2891
    return result;
}

// Address range: 0xe2f66 - 0xe2f67
int64_t function_e2f66(void) {
    // 0xe2f66
    int64_t result; // 0xe2f66
    return result;
}

// Address range: 0xe2f98 - 0xe2f9e
int64_t function_e2f98(void) {
    // 0xe2f98
    return unknown_94c74a5();
}

// Address range: 0xe30b7 - 0xe30c2
int64_t function_e30b7(void) {
    // 0xe30b7
    int64_t v1; // 0xe30b7
    int64_t v2 = v1;
    *(char *)(v2 - 0x5a065947) = (char)v2;
    return function_e30c5();
}

// Address range: 0xe30c3 - 0xe30c5
int64_t function_e30c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe30c3
    int64_t result; // 0xe30c3
    return result;
}

// Address range: 0xe30c5 - 0xe30c8
int64_t function_e30c5(void) {
    // 0xe30c5
    int64_t v1; // 0xe30c5
    return v1 ^ 109;
}

// Address range: 0xe30e2 - 0xe3103
int64_t function_e30e2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe30e2
    int64_t v1; // 0xe30e2
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t result = unknown_3b00d0e8(); // 0xe30e2
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a3;
    if (*(int32_t *)result == (int32_t)a4) {
        // 0xe3175
        return result;
    }
    unsigned char v4 = *(char *)&v3; // 0xe30fb
    *(char *)v3 = v4 / 2 | 128 * v4;
    return result;
}

// Address range: 0xe313e - 0xe3150
int64_t function_e313e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe313e
    int64_t v1; // 0xe313e
    int64_t v2 = (v1 + a4) % 256 | a4 & 0xffffff00; // 0xe3145
    int32_t * v3 = (int32_t *)v2; // 0xe3147
    *v3 = *v3 | (int32_t)v2;
    return unknown_2806924f();
}

// Address range: 0x2998c9 - 0x2999d6
int64_t function_2998c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2998c9
    int64_t v1; // 0x2998c9
    uint64_t v2 = v1;
    int64_t v3 = a2;
    unsigned char v4 = *(char *)0x57a217d1; // 0x2998ca
    unsigned char v5 = (char)(v2 / 256); // 0x2998ca
    unsigned char v6 = v4 + v5; // 0x2998ca
    *(char *)0x57a217d1 = v6;
    __asm_wait();
    int64_t v7 = __asm_wait(); // 0x2998d1
    bool v8; // 0x2998c9
    if (((v6 ^ v4) & (v6 ^ v5)) < 0) {
        uint32_t v9 = (int32_t)a2;
        int32_t v10 = a3;
        uint32_t v11 = v10 + v9 + (int32_t)(v6 < v4); // 0x2998d6
        int64_t v12 = ((int32_t)v2 > v9 ? 0x3d006911 : 0x3d006910) + unknown_ffffffffab3535e0(v11); // 0x2998e1
        uint32_t v13 = 2 * v11; // 0x2998e6
        int64_t v14 = v13; // 0x2998e6
        int32_t * v15 = (int32_t *)v14; // 0x2998e8
        uint32_t v16 = *v15; // 0x2998e8
        *v15 = 0x800000 * v16 | 0x400000 * (int32_t)(v13 < v11) | v16 / 1024;
        if (v13 < 0 != (v13 ^ v11) < 0) {
            // 0x299919
            return v12 & 0xffffffff;
        }
        // 0x2998ed
        *(int32_t *)v3 = *(int32_t *)&v3 - v10;
        *v15 = (int32_t)v12;
        return function_1515995f((v8 ? -4 : 4) + v14);
    }
    int64_t v17 = 256 * (64 * (int64_t)(v6 == 0) | (int64_t)(v6 < v4) | 128 * (int64_t)(v6 < 0) | 16 * (int64_t)(v4 % 16 + v5 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v6) % 2 == 0)) | v7 & -0xff01; // 0x299955
    int64_t v18 = v17 | 512; // 0x299955
    int64_t v19 = 256 * v2 & 0xff00 | v2 & -0xff01; // 0x299956
    int64_t v20 = a3 & -256 | (int64_t)(*(char *)(v18 - 31) + (char)a3); // 0x299958
    int64_t v21; // bp-8, 0x2998c9
    *(int32_t *)(a3 & 0xffffffff) = (int32_t)v20 + (int32_t)(int64_t)&v21;
    *(char *)-0x6cbf19b = *(char *)-0x6cbf19b + (char)v2;
    char v22 = *(char *)(v19 + 0x68006800); // 0x299964
    uint32_t v23 = *(int32_t *)v20 | (int32_t)v19; // 0x29996a
    int64_t v24 = (a4 & -256 | (int64_t)(v22 & (char)a4)) - 1; // 0x29996c
    if (v23 == 0 || v24 == 0) {
        // 0x29996e
        if (*(int32_t *)(v18 + 0x7f8601e8) == -(int32_t)v24) {
            // 0x2999b6
            __asm_outsd((int16_t)v20, *(int32_t *)&v3);
            return unknown_fffffffff6ac99cf(0xe0cf75d6);
        }
        unsigned char v25 = *(char *)0x51c0397f; // 0x299978
        unsigned char v26 = (char)(v23 / 256); // 0x299978
        char v27 = v25 + v26; // 0x299978
        unsigned char v28 = llvm_ctpop_i8(v27); // 0x299978
        *(char *)0x51c0397f = v27;
        __asm_out((int16_t)v20, (int32_t)v18);
        return v7 & 190 | v17 & -0x10000 | 256 * (64 * (int64_t)(v27 == 0) | (int64_t)(v27 < v25) | 128 * (int64_t)(v27 < 0) | 16 * (int64_t)(v25 % 16 + v26 % 16 > 15) | 4 * (int64_t)(v28 % 2 == 0)) | 512;
    }
    int32_t * v29 = (int32_t *)(3 * v24); // 0x299987
    *v29 = *v29 & (int32_t)v1;
    char * v30 = (char *)((int64_t)v23 + 0x540768); // 0x29998b
    *v30 = *v30 - (char)v23;
    __asm_out_133(42, 0);
    __asm_int3();
    char v31 = v23 / 256;
    *(char *)-0x1f52c552 = *(char *)-0x1f52c552 + v31;
    *(char *)0x508b13f1 = *(char *)0x508b13f1 - 15;
    char * v32 = (char *)(v3 + (v8 ? 4 : 6)); // 0x2999b1
    *v32 = *v32 + v31;
    return 0x508b13f1;
}

// Address range: 0x2999ec - 0x299abb
int64_t function_2999ec(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2999ec
    __asm_out_134(111, 0x3fa3a28e);
    unsigned char v1 = *(char *)-0x53f907fe; // 0x2999fb
    int64_t v2; // 0x2999ec
    unsigned char v3 = v1 + (char)(v2 / 256); // 0x2999fb
    *(char *)-0x53f907fe = v3;
    int64_t v4 = a4 - 1; // 0x299a01
    int64_t result2; // 0x2999ec
    if (v4 == 0 || v3 == 0) {
        // 0x299a03
        *(char *)0x3fa3a28e = *(char *)0x3fa3a28e - 94;
        int64_t result = unknown_ffffffffec6d4a13(); // 0x299a0d
        char * v5 = (char *)result; // 0x299a13
        *v5 = *v5 + ((char)v4 | (char)&g1);
        result2 = result;
        if (result == -0x7368b8ff) {
            char * v6 = (char *)(v2 + 88); // 0x299a1d
            *v6 = *v6 & (char)(a3 / 256);
            return result;
        }
    } else {
        uint32_t v7 = *(int32_t *)-0x180954b555e845d6; // 0x299a79
        unsigned char v8 = *(char *)((int64_t)"jS/" - 61); // 0x299a82
        unsigned char v9 = v3 < v1 ? 56 : 55; // 0x299a82
        *(char *)((int64_t)"jS/" - 61) = v8 - v9;
        int64_t v10 = v7; // 0x299a85
        int32_t * v11 = (int32_t *)(v2 + 0x3d002a0d); // 0x299a86
        *v11 = *v11 - (int32_t)v2 + (int32_t)(v3 < v1 | v8 < v9);
        *(int32_t *)0xb8b7ca53 = *(int32_t *)0xb8b7ca53 + (int32_t)v2;
        *(int32_t *)(v10 + 0x147d1fe) = -0x474835c9;
        *(int32_t *)0x75d2ebeb0068c37f = 0x3fa3a28e;
        *(char *)v10 = -114;
        uint32_t v12 = v7 + (int32_t)a3; // 0x299aa6
        int32_t v13 = *(int32_t *)(v4 & 0xffffffff) + 0xdf42351; // 0x299aa9
        int64_t v14 = (int64_t)(v13 & -256) | (int64_t)__asm_in((int16_t)v12); // 0x299aaf
        result2 = v14;
        if (v7 != 1 != (v13 == 0)) {
            // 0x299ab2
            *(int64_t *)0x3dc95c00 = -0x6fec8c00;
            *(int64_t *)0x3dc95bf8 = (int64_t)v12;
            return v14 & -209;
        }
    }
    // 0x299a47
    return result2;
}

// Address range: 0x299ec9 - 0x299ef4
int64_t function_299ec9(int64_t a1) {
    // 0x299ec9
    int64_t v1; // 0x299ec9
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a1;
    char v2 = v1 / 256; // 0x299ed4
    *(char *)0x7fa8f9db = *(char *)0x7fa8f9db + v2;
    *(char *)0x79053af5 = *(char *)0x79053af5 + v2;
    return (int64_t)((*(int32_t *)0x67f976730f750068 | 142) ^ -0x29fdefbf);
}

// Address range: 0x299efc - 0x299efd
int64_t function_299efc(int64_t a1) {
    // 0x299efc
    int64_t result; // 0x299efc
    return result;
}

// Address range: 0x299f10 - 0x299f18
int64_t function_299f10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 + 0xe950068 + a4); // 0x299f10
    int64_t result; // 0x299f10
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x299f37 - 0x299f38
int64_t function_299f37(void) {
    // 0x299f37
    int64_t result; // 0x299f37
    return result;
}

// Address range: 0x299f6b - 0x299f73
int64_t function_299f6b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x299f6b
    int64_t result; // 0x299f6b
    return result;
}

// Address range: 0x299f76 - 0x299f7b
int64_t function_299f76(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 18); // 0x299f76
    *v1 = *v1 + (int32_t)a3;
    return function_299f37();
}

// Address range: 0x299fc1 - 0x299fe7
int64_t function_299fc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 0x739a97b2); // 0x299fc9
    int64_t v2; // 0x299fc1
    *v1 = *v1 + (int32_t)v2;
    uint64_t v3 = v2 + 0x15a5f7dc; // 0x299fcf
    char v4 = *(char *)(2 * a2 + 0x6d46ea4f + v2); // 0x299fd5
    int64_t result = 256 * (int64_t)((char)(v3 / 256) - v4) | v3 & 0xffff00ff; // 0x299fd5
    int32_t * v5 = (int32_t *)result; // 0x299fe2
    *v5 = *v5 + (int32_t)result;
    return result;
}

// Address range: 0x29a000 - 0x29a045
int64_t function_29a000(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x29a000
    int64_t v1; // 0x29a000
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 + 0x79beffae + 4 * v1); // 0x29a000
    *v3 = *v3 & (int32_t)v1;
    int64_t v4 = (v2 & 0xff00) + v1 & 0xff00 | v2 & -0xffc3; // 0x29a00d
    int32_t * v5 = (int32_t *)v4; // 0x29a00f
    uint32_t v6 = (int32_t)v4; // 0x29a00f
    *v5 = *v5 + v6;
    int64_t v7; // 0x29a000
    uint32_t v8 = *(int32_t *)&v7; // 0x29a011
    bool v9; // 0x29a000
    int64_t v10 = v9 ? 0x7ffffffc : 4; // 0x29a011
    int64_t result = a1 + 0x7c01697f + v10 + (int64_t)(v8 > v6) & 0x6b58ff86 | 0x94a70079; // 0x29a018
    int32_t * v11 = (int32_t *)(a2 - 90); // 0x29a021
    *v11 = *v11 & v6;
    char * v12 = (char *)(result + 0x13d0017); // 0x29a03d
    *v12 = *v12 + (char)a3;
    return result;
}

// Address range: 0x29a045 - 0x29a0ae
int64_t function_29a045(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result) {
    // 0x29a045
    int64_t v1; // 0x29a045
    if (a4 != 1 != ((v1 & 219) == 0)) {
        // 0x29a04b
        return v1 & 0xffffffff;
    }
    // 0x29a094
    *(int32_t *)a2 = 0;
    float80_t v2; // 0x29a045
    *(int32_t *)(a5 - 0x4856fec3) = (int32_t)v2;
    return result;
}

// Address range: 0x29a0f7 - 0x29a10e
int64_t function_29a0f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29a0f7
    int64_t v1; // 0x29a0f7
    uint64_t result = v1 & 0xffffffff ^ 0x7087b590; // 0x29a0f7
    char v2 = *(char *)0x3755a003; // 0x29a0fc
    *(char *)0x3755a003 = v2 + (char)((uint64_t)v1 / 256);
    if ((v1 & 0x4000) != 0) {
        // 0x29a11d
        return result;
    }
    uint32_t v3 = (int32_t)a4 % 32; // 0x29a105
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)result; // 0x29a105
        uint32_t v5 = *v4; // 0x29a105
        *v4 = v5 >> 32 - v3 | v5 << v3;
    }
    __asm_out_133(-68, (char)result);
    return (result / 256 + result) % 256 | result & 0xffffff00;
}

// Address range: 0x29a118 - 0x29a11d
int64_t function_29a118(void) {
    // 0x29a118
    int64_t v1; // 0x29a118
    return v1 & 0xffffffff ^ 0x231e9987;
}

// Address range: 0x29a11e - 0x29a130
int64_t function_29a11e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x29a11e
    bool v1; // 0x29a11e
    int64_t v2 = v1 ? -1 : 1; // 0x29a120
    return function_ffffffffbf40a26d(v2 + a1, v2 + a2);
}

// Address range: 0x29a14b - 0x29a151
int64_t function_29a14b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29a14b
    int64_t result; // 0x29a14b
    return result;
}

// Address range: 0x29a17f - 0x29a181
int64_t function_29a17f(void) {
    // 0x29a17f
    return function_29a1e1();
}

// Address range: 0x29a1b0 - 0x29a1ba
int64_t function_29a1b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29a1b0
    int64_t v1; // 0x29a1b0
    int64_t v2 = v1;
    char v3 = *(char *)(a4 + 0x500316); // 0x29a1b2
    bool v4; // 0x29a1b0
    return v2 & -256 | (int64_t)((char)v4 + (char)v2 - v3);
}

// Address range: 0x29a1c3 - 0x29a1c6
int64_t function_29a1c3(void) {
    // 0x29a1c3
    int64_t result; // 0x29a1c3
    return result;
}

// Address range: 0x29a1e1 - 0x29a1e4
int64_t function_29a1e1(void) {
    // 0x29a1e1
    int64_t result; // 0x29a1e1
    return result;
}

// Address range: 0x29a21b - 0x29a21c
int64_t function_29a21b(int64_t a1) {
    // 0x29a21b
    int64_t result; // 0x29a21b
    return result;
}

// Address range: 0x29a22d - 0x29a237
int64_t function_29a22d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29a22d
    int64_t v1; // 0x29a22d
    __asm_out_135((int16_t)a3, (char)v1);
    return function_1065a295();
}

// Address range: 0x29a23d - 0x29a243
int64_t function_29a23d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x29a23d
    int64_t v1; // 0x29a23d
    __asm_out_135((int16_t)a3, (char)v1);
    return function_fffffffffd5ca014();
}

// Address range: 0x29a2b5 - 0x29a2c6
int64_t function_29a2b5(int64_t a1) {
    // 0x29a2b5
    int64_t v1; // 0x29a2b5
    int64_t result = v1;
    *(int32_t *)result = (int32_t)result;
    return result;
}

// Address range: 0x29a2c6 - 0x29a2cb
int64_t function_29a2c6(void) {
    // 0x29a2c6
    return function_5888b510();
}

// Address range: 0x29a2e1 - 0x29a2e2
int64_t function_29a2e1(void) {
    // 0x29a2e1
    int64_t result; // 0x29a2e1
    return result;
}

// Address range: 0x29a2e7 - 0x29a2ea
int64_t function_29a2e7(int64_t a1) {
    // 0x29a2e7
    int64_t result; // 0x29a2e7
    return result;
}

// Address range: 0x29a30c - 0x29a30f
int64_t function_29a30c(int64_t a1) {
    // 0x29a30c
    return __asm_iretd(a1);
}

// Address range: 0x29a315 - 0x29a316
int64_t function_29a315(void) {
    // 0x29a315
    int64_t result; // 0x29a315
    return result;
}

// Address range: 0x29a34f - 0x29a351
int64_t function_29a34f(void) {
    // 0x29a34f
    return function_29a2e1();
}

// Address range: 0x29a366 - 0x29a36b
int64_t function_29a366(void) {
    // 0x29a366
    return function_c1f1296();
}

// Address range: 0x29a42a - 0x29a43a
int64_t function_29a42a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x29a42a
    int64_t result; // 0x29a42a
    *(char *)a2 = (char)result + (char)(a4 / 256);
    *(char *)-0x2472ddf612c51b2c = (char)result;
    return result;
}

// Address range: 0x29a4bb - 0x29a4c0
int64_t function_29a4bb(void) {
    // 0x29a4bb
    return function_ffffffffec29c8cb();
}

// Address range: 0x29a58c - 0x29a5a6
int64_t function_29a58c(int64_t a1) {
    // 0x29a58c
    int64_t v1; // 0x29a58c
    *(int32_t *)-0x45d15bf7f59030e5 = (int32_t)v1;
    int32_t * v2 = (int32_t *)(a1 - 93); // 0x29a597
    *v2 = -1 - *v2;
    return function_ffffffffa6646436();
}

// Address range: 0x29a5b2 - 0x29a5c6
int64_t function_29a5b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x29a5b2
    int64_t v1; // 0x29a5b2
    *(int32_t *)a1 = 2 * (int32_t)v1;
    int64_t v2; // 0x29a5b2
    int32_t v3 = -57 * *(int32_t *)&v2; // 0x29a5b5
    return (v3 + 85) % 256 | v3 & -256;
}

// Address range: 0x29a67e - 0x29a681
int64_t function_29a67e(void) {
    // 0x29a67e
    int64_t result; // 0x29a67e
    return result;
}

// Address range: 0x29a6be - 0x29a6c3
int64_t function_29a6be(void) {
    // 0x29a6be
    return function_ffffffffee7da72b();
}

// Address range: 0x29a6c5 - 0x29a75c
int64_t function_29a6c5(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = __asm_wait(); // 0x29a6d0
    unsigned char v1 = (char)(result / 256); // 0x29a6d6
    unsigned char v2 = *(char *)(a1 + 27); // 0x29a6d6
    if (v2 < v1) {
        // 0x29a6db
        return 0x8200d536;
    }
    // 0x29a758
    if (v2 <= v1) {
        // 0x29a6db
        return result;
    }
    // 0x29a75a
    return result | 0xd500;
}

// Address range: 0x29a768 - 0x29a778
int64_t function_29a768(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t result = *(int32_t *)(int32_t *)&g2; // 0x29a76e
    int64_t v1; // 0x29a768
    bool v2; // 0x29a768
    *(char *)a3 = (char)v2 + (char)v1 + (char)result;
    return result;
}

// Address range: 0x29a780 - 0x29a81b
int64_t function_29a780(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x29a780
    int64_t v1; // 0x29a780
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = v2 + (int32_t)v1; // 0x29a782
    *(int32_t *)v1 = v3;
    int32_t result2 = __asm_in_136((int16_t)a3); // 0x29a784
    int64_t v4 = 0x229d3700; // bp-8, 0x29a787
    uint32_t result = (int32_t)(256 * v1 + a4 & 0xff00 | a4 & 0xffff00ff) + (int32_t)(int64_t)&v4; // 0x29a792
    if (result != 0) {
        // 0x29a796
        return result;
    }
    int32_t * v5 = (int32_t *)(a1 - 0x4bc296b4); // 0x29a815
    *v5 = *v5 + (int32_t)(2 * a2 | (int64_t)(v3 < v2));
    return result2;
}

// Address range: 0x29a86b - 0x29a874
int64_t function_29a86b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x29a86b
    return unknown_604c9072(a1, a2, a3, a4, a5);
}

// Address range: 0x29a888 - 0x29a88c
int64_t function_29a888(void) {
    // 0x29a888
    int64_t v1; // 0x29a888
    int64_t v2 = v1;
    return (v2 + 27) % 256 | v2 & -256;
}

// Address range: 0x395fe1 - 0x39607a
int64_t function_395fe1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x395fe1
    int64_t result; // 0x395fe1
    int64_t v1 = result;
    int64_t v2 = a4 - 1; // 0x395fe1
    if (v2 != 0) {
        // 0x39602c
        return function_cf3c7(a1, a2, a5, v2, result, result, result);
    }
    // 0x395fe3
    *(int64_t *)v1 = *(int64_t *)(v1 + 24);
    *(int64_t *)(v1 - 8) = 0xd63d0e0;
    *(int64_t *)(v1 - 16) = a3 + 8 & 0xffffffff;
    return result;
}

// Address range: 0x39607a - 0x3961e4
int64_t function_39607a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x39607a
    int64_t v1; // bp-40, 0x39607a
    int64_t v2 = (int64_t)&v1; // 0x3960ee
    int64_t v3 = v2 - 16; // 0x396105
    int64_t * v4 = (int64_t *)v3; // 0x396106
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x39610c
    int64_t v6 = v2 - 8; // 0x39610c
    int64_t * v7 = (int64_t *)v6; // 0x39610c
    *v7 = v5;
    *v4 = v5;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x396126
    *v8 = v6;
    int64_t v9 = *(int64_t *)(v2 + 8); // 0x39612f
    *v4 = v9;
    int64_t * v10 = (int64_t *)(v2 - 32); // 0x396149
    *v8 = 0x66858cf5;
    *v10 = a3;
    int64_t * v11 = (int64_t *)(v2 - 40); // 0x396158
    *v11 = v5;
    int64_t v12 = *v11; // 0x396164
    *v11 = v12 - 0x6d5f99d1;
    *v8 = v12;
    *v7 = v12;
    *v8 = v9;
    *(int64_t *)(v2 + 16) = *v4;
    *v8 = v3;
    *v4 = v2;
    return function_cf3c7(a1, a2, *v10, a4, a5, a6, 0x1427f37);
}

// Address range: 0x3961e4 - 0x396330
int64_t function_3961e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3961e4
    int64_t v1; // bp-40, 0x3961e4
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x3961e4
    return function_cf3c7(a1, a2, a3, a4, v2, v2, 169);
}

// Address range: 0x396330 - 0x396446
int64_t function_396330(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x396330
    int64_t v1; // 0x396330
    int64_t * v2 = (int64_t *)(v1 - 8); // 0x39638c
    int64_t * v3 = (int64_t *)(v1 - 16); // 0x396393
    *v3 = 0x6d7c6fbb;
    int64_t * v4 = (int64_t *)(v1 - 24); // 0x396398
    int64_t v5 = *(int64_t *)(v1 + 24); // 0x3963a7
    *v3 = v5;
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v1 - 32); // 0x3963ae
    *v6 = v5;
    int64_t v7 = v1 + 8; // 0x3963ba
    int64_t v8 = *(int64_t *)v7; // 0x3963ba
    *v3 = v8;
    *v6 = v5;
    *v4 = v5;
    *(int64_t *)v1 = *v3;
    *v6 = v8;
    *v4 = v8;
    *(int64_t *)(v1 + 16) = *v3;
    int64_t v9 = *v2; // 0x396406
    *v3 = v9;
    *v4 = v9;
    *v2 = v7;
    int64_t v10; // bp-32, 0x396330
    return function_cf3c7(a1, v5, a3, a4, a5, v1, (int64_t)&v10);
}

// Address range: 0x396446 - 0x39657c
int64_t function_396446(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x396446
    bool v1; // 0x396446
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x396446
    int64_t v3 = v2; // bp-48, 0x3964bf
    int64_t v4 = (int64_t)&v3; // 0x3964fb
    int64_t * v5 = (int64_t *)(v4 - 8); // 0x396503
    *v5 = 0x5767a83;
    int64_t * v6 = (int64_t *)(v4 - 16); // 0x396511
    *v6 = v2;
    int64_t v7 = v4 + 8; // 0x396514
    *(int64_t *)v7 = *v5;
    *v6 = 0x673fa076;
    *(int64_t *)(v4 + 24) = *v5;
    *v5 = v7;
    int64_t v8; // 0x396446
    return function_cf3c7(a1, a2, a3, a4, a5, v8, 0x5dd15ca5);
}

// Address range: 0x39657c - 0x3966f3
int64_t function_39657c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39657c
    int64_t v1; // 0x39657c
    return function_cf3c7(a1, a2, a3, v1, v1, v1, 310);
}

// Address range: 0x3966f3 - 0x39685a
int64_t function_3966f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3966f3
    int64_t v1; // 0x3966f3
    return function_cf3c7(a1, a2, a3, v1, v1, v1, 169);
}

// Address range: 0x39685a - 0x396a4c
int64_t function_39685a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39685a
    int64_t v1; // bp-32, 0x39685a
    int64_t v2 = (int64_t)&v1; // 0x3968fe
    int64_t v3 = v2 - 8; // 0x39690a
    int64_t * v4 = (int64_t *)v3; // 0x39690a
    *v4 = 0x2fe1d6c8;
    int64_t v5 = v2 - 16; // 0x39690f
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x39691b
    int64_t v7 = *(int64_t *)(v2 + 24); // 0x39692c
    *(int64_t *)v5 = v7;
    *v6 = v7;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x396947
    *v8 = v5;
    *v6 = v1;
    int64_t v9 = v2 - 40; // 0x396979
    int64_t * v10 = (int64_t *)v9; // 0x396988
    *v10 = v9;
    *v8 = v7;
    *v4 = *v6;
    *v6 = 0x6d413a4f;
    *v10 = v7;
    *v8 = v1;
    *(int64_t *)(v2 + 8) = *v6;
    *v6 = a5;
    *v8 = v3;
    *v10 = a4;
    *v6 = v3;
    int64_t v11; // 0x39685a
    return function_cf3c7(a1, a2, a3, a4, *v6, v11, 0x39447a);
}

// Address range: 0x396a4c - 0x396b95
int64_t function_396a4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x396a4c
    int64_t v1; // bp-48, 0x396a4c
    int64_t v2 = (int64_t)&v1; // 0x396b39
    v1 = a1;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x396b48
    *v3 = 0x394ab9;
    *(int64_t *)(v2 + 32) = 0x394ab9;
    int64_t v4 = v1; // 0x396b4d
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x396b4e
    *v3 = *v5;
    v1 = a5;
    *v5 = v2 + 24;
    bool v6; // 0x396a4c
    return function_cf3c7(v4, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v6 | 2048 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 128 * (int64_t)v6 | 64 * (int64_t)v6 | 16 * (int64_t)v6 | (int64_t)v6 | 4 * (int64_t)v6 | 2);
}

// Address range: 0x396b95 - 0x396d0d
int64_t function_396b95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x396b95
    int64_t v1; // bp-48, 0x396b95
    v1 = (int64_t)&v1;
    bool v2; // 0x396b95
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x396d0d - 0x396e5e
int64_t function_396d0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x396d0d
    int64_t v1; // bp-32, 0x396d0d
    int64_t v2 = (int64_t)&v1; // 0x396d8c
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x396d94
    int64_t * v4 = (int64_t *)v3; // 0x396d95
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x396d98
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x396d9c
    *v6 = v5;
    *(int64_t *)(v2 - 24) = v5;
    int64_t v7 = v2 + 16; // 0x396dab
    int64_t * v8 = (int64_t *)v7; // 0x396dab
    *v8 = v5;
    *v4 = 0x78e297d8;
    *v6 = *v8;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = a4;
    *v6 = v3;
    v1 = v7;
    int64_t v9; // 0x396d0d
    return function_cf3c7(a1, a2, a3, *v4, a5, v9, v9);
}

// Address range: 0x396e5e - 0x396fc3
int64_t function_396e5e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x3915eb; // bp-24, 0x396eb5
    int64_t v2 = (int64_t)&v1; // 0x396ec1
    int64_t v3 = v2 - 8; // 0x396edf
    int64_t * v4 = (int64_t *)v3; // 0x396eeb
    int64_t v5 = v2 - 16; // 0x396eef
    int64_t * v6 = (int64_t *)v5; // 0x396eef
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x396ef1
    *v7 = v5;
    *v6 = a4;
    int64_t v8 = *(int64_t *)(v2 + 24); // 0x396f14
    *v6 = v8;
    *v7 = v8;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x396f1b
    *v9 = v8;
    int64_t v10 = v2 + 8; // 0x396f27
    int64_t v11 = *(int64_t *)v10; // 0x396f27
    *v9 = v11;
    *v6 = v5;
    *v7 = v8;
    v1 = *v6;
    *v7 = a5;
    *v9 = v11 ^ 0x7cdc2aef;
    *v6 = v11;
    *(int64_t *)(v2 + 16) = v11;
    *v7 = *v4;
    *v6 = v3;
    *v4 = v10;
    return function_cf3c7(a1, a2, a3, *v6, *v7, a6, v1);
}

// Address range: 0x396fc3 - 0x396fc8
int64_t function_396fc3(void) {
    // 0x396fc3
    int64_t result; // 0x396fc3
    return result;
}

// Address range: 0x396fd0 - 0x396fd9
int64_t function_396fd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x396fd0
    int64_t v1; // 0x396fd0
    return (v1 ^ v1) & 0xffffffff;
}

// Address range: 0x396fd9 - 0x396fdc
int64_t function_396fd9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x396fd9
    int64_t result; // 0x396fd9
    return result;
}
