/*
 * Targeted RetDec C for native executable gap queue batch 970.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1ce601-0x1ce801 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cea01-0x1cec01 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cec01-0x1cee01 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cee01-0x1cf001 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cf001-0x1cf201 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cf201-0x1cf401 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1cf401-0x1cf601 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37211b-0x37231b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37231b-0x37251b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37251b-0x37271b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37271b-0x37291b rank=- name=- kind=- bytes=- uncovered=-
 *   0x37291b-0x372b1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x372b1b-0x372d1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x372d1b-0x372f1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x372f1b-0x37311b rank=- name=- kind=- bytes=- uncovered=-
 *   0x3bddb5-0x3bdfb5 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_162580f7();
int64_t function_1ce601(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1ce63b(void);
int64_t function_1ce655(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1ce67d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1ce69c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ce6f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ce78c(void);
int64_t function_1cea01(void);
int64_t function_1cea55(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ceaef(void);
int64_t function_1ceb04(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1ceb63(int64_t a1);
int64_t function_1ceb75(void);
int64_t function_1ceb8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cebb5(void);
int64_t function_1cebeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cec5b(int64_t a1, int64_t a2);
int64_t function_1cec5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cecb7(int64_t a1);
int64_t function_1ceccf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cece9(int64_t a1);
int64_t function_1ced0a(int64_t a1);
int64_t function_1ced17(void);
int64_t function_1ced2d(void);
int64_t function_1ced64(int64_t a1, int64_t a2);
int64_t function_1ced69(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ced6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ced97(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1ceda2(void);
int64_t function_1cedbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cedd4(void);
int64_t function_1cede3(void);
int64_t function_1cee39(void);
int64_t function_1cee98(int64_t a1);
int64_t function_1ceef6(void);
int64_t function_1cef00(void);
int64_t function_1cef14(void);
int64_t function_1cef53(void);
int64_t function_1cef62(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_1cf0c2(void);
int64_t function_1cf0c9(int64_t a1);
int64_t function_1cf0d8(void);
int64_t function_1cf0db(int64_t a1);
int64_t function_1cf0ed(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1cf11f(int64_t a1);
int64_t function_1cf150(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_1cf186(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_1cf201(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1cf205(void);
int64_t function_1cf20e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cf296(int64_t a1);
int64_t function_1cf33b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cf369(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1cf3ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1cf3f8(int64_t a1);
int64_t function_1cf447(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cf4ab(void);
int64_t function_1cf4b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1cf4c8(void);
int64_t function_1cf4ed(void);
int64_t function_1cf4ff(void);
int64_t function_1cf54c(void);
int64_t function_1cf55d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37211b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_372176(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3722d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_372455(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_372595(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_372768(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3728d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_372a44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_372b7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_372ca9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_372de9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_372f52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3730c4(void);
int64_t function_3730da(void);
int64_t function_3bddb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3bde3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3bdf97(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3bdfb1(void);
int64_t function_58cf131();
int64_t function_c823b();
int64_t function_caf2a();
int64_t function_ffffffffe8d73362();
int64_t function_ffffffffe8f153e7();
int64_t unknown_10e9778a();
int64_t unknown_1111f39d();
int64_t unknown_1ae89cc9();
int64_t unknown_1dc92d4d();
int64_t unknown_24c7e9aa();
int64_t unknown_2a2083fe();
int64_t unknown_3a2af3f3();
int64_t unknown_480eb9aa();
int64_t unknown_4fad0308();
int64_t unknown_541d965b();
int64_t unknown_541e3284();
int64_t unknown_7a163064();
int64_t unknown_e27be0d();
int64_t unknown_ffffffff841e2998();
int64_t unknown_ffffffff844bf31e();
int64_t unknown_ffffffffb3d71573();
int64_t unknown_ffffffffbfb87c7d();
int64_t unknown_ffffffffc517b28a();
int64_t unknown_ffffffffceeedd8c();

// Address range: 0x1ce601 - 0x1ce60c
int64_t function_1ce601(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1ce601
    int64_t v1; // 0x1ce601
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    bool v3; // 0x1ce601
    int64_t v4 = v3 ? -4 : 4; // 0x1ce606
    return unknown_e27be0d(v4 + a1, v4 + a2);
}

// Address range: 0x1ce63b - 0x1ce654
int64_t function_1ce63b(void) {
    // 0x1ce63b
    unknown_1dc92d4d();
    int64_t v1 = __asm_sti(); // 0x1ce64c
    bool v2; // 0x1ce63b
    char * v3 = (char *)((v1 - (int64_t)v2) % 256 | v1 & -256); // 0x1ce64f
    *v3 = *v3 + 43;
    int64_t v4; // 0x1ce63b
    return function_1ce69c(v4, 0x401e8ee, v4, v4, (int64_t)&g3);
}

// Address range: 0x1ce655 - 0x1ce660
int64_t function_1ce655(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1ce655
    int64_t v1; // 0x1ce655
    int64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v2;
    int32_t * v3 = (int32_t *)(v1 - 0x6bff6700); // 0x1ce658
    bool v4; // 0x1ce655
    *v3 = *v3 + (int32_t)((v4 ? 0xfffffffc : 4) + a1);
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x1ce67d - 0x1ce691
int64_t function_1ce67d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1ce67d
    int64_t result; // 0x1ce67d
    __asm_out(-66, (char)result);
    int32_t * v1 = (int32_t *)(result - 3); // 0x1ce68b
    *v1 = *v1 >> 1;
    bool v2; // 0x1ce67d
    *(int32_t *)((v2 ? -4 : 4) + a1) = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x1ce69c - 0x1ce6c4
int64_t function_1ce69c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_480eb9aa(); // 0x1ce6a4
    int64_t v2; // 0x1ce69c
    int32_t * v3 = (int32_t *)(v2 + 47 + 2 * v2); // 0x1ce6a9
    *v3 = *v3 + (int32_t)a4;
    char * v4 = (char *)v1; // 0x1ce6ae
    unsigned char v5 = *v4; // 0x1ce6ae
    *v4 = v5 / 128 | 2 * v5;
    char * v6 = (char *)(a1 - 27); // 0x1ce6b0
    *v6 = *v6 | -24;
    int64_t v7 = v1 + v2; // 0x1ce6b4
    float80_t v8; // 0x1ce69c
    *(int32_t *)(v2 - 53) = (int32_t)v8;
    char * v9 = (char *)(v2 - 0x41521d85); // 0x1ce6bb
    *v9 = *v9 + (char)a4;
    return (v7 + 202) % 256 | v7 & 0xffffff00;
}

// Address range: 0x1ce6f5 - 0x1ce779
int64_t function_1ce6f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ce6f5
    bool v1; // 0x1ce6f5
    if (true != !v1) {
        // 0x1ce6f7
        int64_t result; // 0x1ce6f5
        return result;
    }
    // 0x1ce770
    __asm_iretd();
    return (a3 + 91 + (int64_t)v1) % 256 | a3 & 0xffffff00;
}

// Address range: 0x1ce78c - 0x1ce78d
int64_t function_1ce78c(void) {
    // 0x1ce78c
    int64_t result; // 0x1ce78c
    return result;
}

// Address range: 0x1cea01 - 0x1cea04
int64_t function_1cea01(void) {
    // 0x1cea01
    int64_t result; // 0x1cea01
    return result;
}

// Address range: 0x1cea55 - 0x1cea6a
int64_t function_1cea55(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1cea55
    return (int64_t)*(int32_t *)0x308301e800b32864;
}

// Address range: 0x1ceaef - 0x1ceaf0
int64_t function_1ceaef(void) {
    // 0x1ceaef
    int64_t result; // 0x1ceaef
    return result;
}

// Address range: 0x1ceb04 - 0x1ceb16
int64_t function_1ceb04(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1ceb04
    int64_t v1; // 0x1ceb04
    int64_t v2 = v1 + 0x1738adbc; // 0x1ceb04
    int32_t v3 = v1;
    int32_t v4 = v2; // 0x1ceb09
    int32_t v5 = v4 + v3; // 0x1ceb09
    *(int32_t *)a1 = v5;
    int64_t v6 = v2 & 0xffffffff; // 0x1ceb0b
    if (((v5 ^ v3) & (v5 ^ v4)) >= 0) {
        v6 = function_1ceaef();
    }
    // 0x1ceb0d
    return v6 & 0xffffffff ^ 0xe8de14df;
}

// Address range: 0x1ceb63 - 0x1ceb64
int64_t function_1ceb63(int64_t a1) {
    // 0x1ceb63
    int64_t result; // 0x1ceb63
    return result;
}

// Address range: 0x1ceb75 - 0x1ceb77
int64_t function_1ceb75(void) {
    // 0x1ceb75
    int64_t v1; // 0x1ceb75
    return function_1cebeb(v1, v1, v1, v1);
}

// Address range: 0x1ceb8c - 0x1ceba1
int64_t function_1ceb8c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ceb8c
    int64_t v1; // 0x1ceb8c
    int32_t * v2 = (int32_t *)(8 * v1 - 0x9fa37be + v1); // 0x1ceb8c
    *v2 = *v2 | (int32_t)v1;
    int64_t result = unknown_1111f39d(); // 0x1ceb97
    char * v3 = (char *)(v1 + 126 + (v1 + a4 & 0xffffffff)); // 0x1ceb9c
    *v3 = *v3 | (char)v1;
    return result;
}

// Address range: 0x1cebb5 - 0x1cebb8
int64_t function_1cebb5(void) {
    // 0x1cebb5
    int64_t result; // 0x1cebb5
    return result;
}

// Address range: 0x1cebeb - 0x1cec5a
int64_t function_1cebeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x1cebeb
    char v3 = v2 / 256 & a3; // 0x1cebeb
    *(char *)a3 = v3;
    if (v3 < 0) {
        char * v4 = (char *)(v2 + 10); // 0x1cec51
        *v4 = *v4 | (char)(v2 / 256);
        return (int64_t)__asm_in((int16_t)a3) & 0x54088066 | v2 & 0x54088000;
    }
    int64_t v5 = unknown_4fad0308(); // 0x1cec02
    int32_t * v6 = (int32_t *)(v1 - 0x17fec270); // 0x1cec12
    *v6 = *v6 + (int32_t)a1;
    int64_t v7 = v5 + v2; // 0x1cec18
    int32_t v8 = *(int32_t *)&v1 + (int32_t)v2; // 0x1cec1a
    unsigned char v9 = llvm_ctpop_i8((char)v8); // 0x1cec1a
    *(int32_t *)v1 = v8;
    if (v9 % 2 == 0) {
        int32_t * v10 = (int32_t *)(a1 - 111); // 0x1cec21
        *v10 = *v10 + (int32_t)v7;
        return (int64_t)*(int32_t *)&v1;
    }
    int64_t v11 = v7 & 0xffffff00; // 0x1cec2e
    int64_t v12 = (v7 + 232) % 256 | v11; // 0x1cec2e
    int32_t * v13 = (int32_t *)v12; // 0x1cec30
    *v13 = *v13 + (int32_t)v12;
    return v11 | 116;
}

// Address range: 0x1cec5b - 0x1cec5f
int64_t function_1cec5b(int64_t a1, int64_t a2) {
    // 0x1cec5b
    int64_t v1; // 0x1cec5b
    int64_t v2 = v1;
    return (v2 + 3) % 256 | v2 & -256;
}

// Address range: 0x1cec5f - 0x1ceca8
int64_t function_1cec5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1cec5f
    int64_t v1; // 0x1cec5f
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    __asm_int(-116);
    int64_t v3; // 0x1cec5f
    char v4 = *(char *)&v3; // 0x1cec7d
    bool v5; // 0x1cec5f
    int64_t v6 = v5 ? -1 : 1; // 0x1cec7d
    int32_t * v7 = (int32_t *)((v2 & -0x10000 | (int64_t)&g1 & -256 | (int64_t)(v4 + 69)) - 0x5cbf2925); // 0x1cec84
    *v7 = *v7 + (int32_t)a1;
    __asm_wait();
    *(char *)0x391ed4ee = *(char *)0x391ed4ee + 72;
    *(int32_t *)0x2a23b3661201e84b = (int32_t)unknown_ffffffff841e2998();
    return function_1ceccf(a1, v6 + a2, (int64_t)&g3, (int64_t)&g3);
}

// Address range: 0x1cecb7 - 0x1cecba
int64_t function_1cecb7(int64_t a1) {
    // 0x1cecb7
    int64_t result; // 0x1cecb7
    return result;
}

// Address range: 0x1ceccf - 0x1cecdc
int64_t function_1ceccf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ceccf
    int64_t v1; // 0x1ceccf
    return (v1 | 128) + 0xdc01e836 & 0xffffffff;
}

// Address range: 0x1cece9 - 0x1cecf3
int64_t function_1cece9(int64_t a1) {
    // 0x1cece9
    int64_t result; // 0x1cece9
    *(char *)0x5db801e812950038 = (char)result;
    return result;
}

// Address range: 0x1ced0a - 0x1ced0d
int64_t function_1ced0a(int64_t a1) {
    // 0x1ced0a
    int64_t result; // 0x1ced0a
    return result;
}

// Address range: 0x1ced17 - 0x1ced18
int64_t function_1ced17(void) {
    // 0x1ced17
    int64_t result; // 0x1ced17
    return result;
}

// Address range: 0x1ced2d - 0x1ced2f
int64_t function_1ced2d(void) {
    // 0x1ced2d
    return function_1ced17();
}

// Address range: 0x1ced64 - 0x1ced67
int64_t function_1ced64(int64_t a1, int64_t a2) {
    // 0x1ced64
    int64_t v1; // 0x1ced64
    bool v2; // 0x1ced64
    return function_1ced6a(a1, (v2 ? -1 : 1) + a2, v1, v1);
}

// Address range: 0x1ced69 - 0x1ced6a
int64_t function_1ced69(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ced69
    int64_t result; // 0x1ced69
    return result;
}

// Address range: 0x1ced6a - 0x1ced84
int64_t function_1ced6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ced6a
    if (llvm_ctpop_i8(*(char *)(a2 - 20) & 36) % 2 == 0) {
        // 0x1ced92
        int64_t result; // 0x1ced6a
        return result;
    }
    int32_t * v1 = (int32_t *)(a4 - 60); // 0x1ced79
    float80_t v2; // 0x1ced6a
    int32_t v3 = (int32_t)(v2 < v2) + *v1; // 0x1ced79
    *v1 = v3;
    return 256 * (int64_t)(v3 >= 0) | unknown_ffffffff844bf31e(0xcc6b0810) & -0xff01;
}

// Address range: 0x1ced97 - 0x1ced9e
int64_t function_1ced97(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 0x1c4c2a3a); // 0x1ced97
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x1ced97
    return result;
}

// Address range: 0x1ceda2 - 0x1ceda5
int64_t function_1ceda2(void) {
    // 0x1ceda2
    int64_t result; // 0x1ceda2
    return result;
}

// Address range: 0x1cedbe - 0x1cedd3
int64_t function_1cedbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1cedbe
    int64_t v1; // 0x1cedbe
    char * v2 = (char *)(v1 - 78); // 0x1cedc0
    unsigned char v3 = *v2; // 0x1cedc0
    unsigned char v4 = v3 + (char)a4; // 0x1cedc0
    *v2 = v4;
    return unknown_1ae89cc9() + v1 + (int64_t)(v4 < v3) & 0xffffffff;
}

// Address range: 0x1cedd4 - 0x1cedd7
int64_t function_1cedd4(void) {
    // 0x1cedd4
    int64_t result; // 0x1cedd4
    return result;
}

// Address range: 0x1cede3 - 0x1cede4
int64_t function_1cede3(void) {
    // 0x1cede3
    int64_t result; // 0x1cede3
    return result;
}

// Address range: 0x1cee39 - 0x1cee3b
int64_t function_1cee39(void) {
    // 0x1cee39
    int64_t result; // 0x1cee39
    return result;
}

// Address range: 0x1cee98 - 0x1ceea3
int64_t function_1cee98(int64_t a1) {
    // 0x1cee98
    int64_t result; // 0x1cee98
    *(int32_t *)0x3d0012ba67dd7dbc = (int32_t)result;
    return result;
}

// Address range: 0x1ceef6 - 0x1ceef7
int64_t function_1ceef6(void) {
    // 0x1ceef6
    int64_t result; // 0x1ceef6
    return result;
}

// Address range: 0x1cef00 - 0x1cef03
int64_t function_1cef00(void) {
    // 0x1cef00
    int64_t result; // 0x1cef00
    return result;
}

// Address range: 0x1cef14 - 0x1cef18
int64_t function_1cef14(void) {
    // 0x1cef14
    int64_t v1; // 0x1cef14
    return function_1cef62(v1, v1, v1, v1);
}

// Address range: 0x1cef53 - 0x1cef56
int64_t function_1cef53(void) {
    // 0x1cef53
    return function_1ceef6();
}

// Address range: 0x1cef62 - 0x1cef89
int64_t function_1cef62(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x1cef62
    int64_t v1; // 0x1cef62
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + a2); // 0x1cef64
    *v3 = *v3 + (int32_t)a1;
    int64_t v4; // 0x1cef62
    __asm_outsb((int16_t)a3, *(char *)&v4);
    *(char *)0x3a1d6f6e = *(char *)0x3a1d6f6e + (char)v1;
    *(int32_t *)a1 = *(int32_t *)&v4;
    bool v5; // 0x1cef62
    int64_t v6 = v5 ? -4 : 4; // 0x1cef71
    int64_t v7 = (2 * v2 + a4 / 256) % 256 | v2 & -256; // 0x1cef72
    char * v8 = (char *)(v7 - 0x4d8077fd); // 0x1cef76
    *v8 = *v8 + (char)a3;
    char v9 = *(char *)(v7 + 0x234d0dab); // 0x1cef7e
    return unknown_ffffffffc517b28a((int32_t)(v6 + a1) + (int32_t)a3, v6 + a2, 256 * (int64_t)(v9 + (char)(a3 / 256)) | a3 & -0xff01);
}

// Address range: 0x1cf0c2 - 0x1cf0c3
int64_t function_1cf0c2(void) {
    // 0x1cf0c2
    int64_t result; // 0x1cf0c2
    return result;
}

// Address range: 0x1cf0c9 - 0x1cf0d5
int64_t function_1cf0c9(int64_t a1) {
    // 0x1cf0c9
    return function_162580f7(a1);
}

// Address range: 0x1cf0d8 - 0x1cf0da
int64_t function_1cf0d8(void) {
    // 0x1cf0d8
    return function_1cf0c2();
}

// Address range: 0x1cf0db - 0x1cf0de
int64_t function_1cf0db(int64_t a1) {
    // 0x1cf0db
    int64_t result; // 0x1cf0db
    return result;
}

// Address range: 0x1cf0ed - 0x1cf0f9
int64_t function_1cf0ed(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1cf0ed
    __asm_in_133((int16_t)a3);
    return function_58cf131();
}

// Address range: 0x1cf11f - 0x1cf120
int64_t function_1cf11f(int64_t a1) {
    // 0x1cf11f
    int64_t result; // 0x1cf11f
    return result;
}

// Address range: 0x1cf150 - 0x1cf171
int64_t function_1cf150(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x1cf150
    int64_t v1; // 0x1cf150
    int64_t v2 = v1;
    int64_t v3 = a2;
    *(char *)v2 = (char)v2 + (char)(a3 / 256);
    int64_t v4 = unknown_541d965b(); // 0x1cf155
    int32_t * v5 = (int32_t *)(a3 + a1); // 0x1cf15a
    int32_t v6 = v4; // 0x1cf15a
    *v5 = *v5 + v6;
    char * v7 = (char *)(v1 - 76 + v1); // 0x1cf15e
    uint64_t v8 = a4 / 256; // 0x1cf15e
    *v7 = *v7 + (char)v8;
    uint32_t v9 = (int32_t)a4 % 32; // 0x1cf162
    int64_t v10 = v9 == 0 ? v4 : (int64_t)(v6 << v9);
    int32_t * v11 = (int32_t *)((int64_t)((int32_t)v10 >> 31) + 11); // 0x1cf167
    *v11 = *v11 + (int32_t)v1;
    *(int32_t *)v3 = *(int32_t *)&v3 - (int32_t)v1;
    return (v10 + v8) % 256 | v10 & -256;
}

// Address range: 0x1cf186 - 0x1cf1bc
int64_t function_1cf186(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x1cf186
    int64_t v1; // 0x1cf186
    uint64_t v2 = v1;
    unknown_ffffffffceeedd8c();
    unsigned char v3 = (char)a4 % 32; // 0x1cf18b
    if (v3 != 0) {
        *(char *)a3 = (char)a3 >> v3;
    }
    int32_t * v4 = (int32_t *)(a4 + 119); // 0x1cf196
    *v4 = *v4 + (int32_t)v2;
    *(char *)(a3 + 0x643a425e) = (char)(v2 / 256);
    unknown_ffffffffbfb87c7d();
    unknown_24c7e9aa();
    return result;
}

// Address range: 0x1cf201 - 0x1cf204
int64_t function_1cf201(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1cf201
    int64_t result; // 0x1cf201
    return result;
}

// Address range: 0x1cf205 - 0x1cf206
int64_t function_1cf205(void) {
    // 0x1cf205
    int64_t result; // 0x1cf205
    return result;
}

// Address range: 0x1cf20e - 0x1cf21d
int64_t function_1cf20e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1cf20e
    int64_t v1; // 0x1cf20e
    int32_t * v2 = (int32_t *)(v1 - 93); // 0x1cf20e
    *v2 = *v2 + (int32_t)a4;
    return function_1cf205();
}

// Address range: 0x1cf296 - 0x1cf297
int64_t function_1cf296(int64_t a1) {
    // 0x1cf296
    int64_t result; // 0x1cf296
    return result;
}

// Address range: 0x1cf33b - 0x1cf342
int64_t function_1cf33b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 117); // 0x1cf33b
    int64_t result; // 0x1cf33b
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1cf369 - 0x1cf390
int64_t function_1cf369(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)0x67037bc53ae0fc31; // 0x1cf369
    int64_t v2; // 0x1cf369
    *(char *)0x5810e279 = *(char *)0x5810e279 + (char)(v2 / 256);
    *(char *)a2 = (char)v2 + (char)(a3 / 256);
    char v3 = *(char *)-0xbbc0c70; // 0x1cf389
    *(char *)-0xbbc0c70 = v3 | (char)((v2 | 256 * a3) / 256);
    return (v2 & 0xffffff00 | (int64_t)v1) + 0x7b188dd & 0xffffffff;
}

// Address range: 0x1cf3ed - 0x1cf3f8
int64_t function_1cf3ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_3a2af3f3(a1, a2, a3, a4, a5); // 0x1cf3ed
    int64_t v1; // 0x1cf3ed
    *(char *)(v1 + a2) = (char)a4;
    return result;
}

// Address range: 0x1cf3f8 - 0x1cf3fe
int64_t function_1cf3f8(int64_t a1) {
    // 0x1cf3f8
    return unknown_2a2083fe(a1);
}

// Address range: 0x1cf447 - 0x1cf453
int64_t function_1cf447(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1cf447
    int64_t v1; // 0x1cf447
    int64_t result = v1;
    bool v2; // 0x1cf447
    *(char *)result = (char)result + (char)a4 + (char)v2;
    __asm_out_134(-24, (int32_t)result);
    int32_t * v3 = (int32_t *)(result - 37);
    *v3 = *v3 + (int32_t)v1;
    return result;
}

// Address range: 0x1cf4ab - 0x1cf4ac
int64_t function_1cf4ab(void) {
    // 0x1cf4ab
    int64_t result; // 0x1cf4ab
    return result;
}

// Address range: 0x1cf4b9 - 0x1cf4c4
int64_t function_1cf4b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x1cf4b9
    bool v2; // 0x1cf4b9
    if (v1 != 0 == v2) {
        function_1cf4ab();
    }
    if (v1 == 1 || v2) {
        // 0x1cf4bd
        return a2 & 0xffffffff;
    }
    // 0x1cf4c0
    return __asm_int1();
}

// Address range: 0x1cf4c8 - 0x1cf4c9
int64_t function_1cf4c8(void) {
    // 0x1cf4c8
    int64_t result; // 0x1cf4c8
    return result;
}

// Address range: 0x1cf4ed - 0x1cf4f4
int64_t function_1cf4ed(void) {
    // 0x1cf4ed
    return function_ffffffffe8d73362();
}

// Address range: 0x1cf4ff - 0x1cf501
int64_t function_1cf4ff(void) {
    // 0x1cf4ff
    return function_1cf4c8();
}

// Address range: 0x1cf54c - 0x1cf550
int64_t function_1cf54c(void) {
    // 0x1cf54c
    int64_t v1; // 0x1cf54c
    uint64_t v2 = v1;
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x1cf55d - 0x1cf58f
int64_t function_1cf55d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1cf55d
    unknown_7a163064();
    int64_t v1; // 0x1cf55d
    *(char *)a1 = (char)v1;
    bool v2; // 0x1cf55d
    int64_t v3 = v2 ? -1 : 1; // 0x1cf56c
    unknown_ffffffffb3d71573(v3 + a1, v3 + a2);
    char * v4 = (char *)(v1 - 8); // 0x1cf572
    *v4 = *v4 + (char)v1;
    unknown_541e3284();
    int64_t result = unknown_10e9778a(); // 0x1cf583
    char * v5 = (char *)(v1 + 28); // 0x1cf589
    *v5 = *v5 ^ (char)a4;
    return result;
}

// Address range: 0x37211b - 0x372176
int64_t function_37211b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37211b
    int64_t v1; // 0x37211b
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x37211b
    return function_caf2a(a1, v2, v2, v2, v2, v2);
}

// Address range: 0x372176 - 0x3722d8
int64_t function_372176(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x372176
    int64_t v1; // 0x372176
    return function_caf2a(a1, a2, a3, a4, a5, v1);
}

// Address range: 0x3722d8 - 0x372455
int64_t function_3722d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3722d8
    return function_caf2a(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x372455 - 0x372595
int64_t function_372455(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x372455
    int64_t v1; // 0x372455
    return function_caf2a(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x372595 - 0x372768
int64_t function_372595(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x372595
    int64_t v1; // bp-32, 0x372595
    v1 = (int64_t)&v1;
    int64_t v2; // 0x372595
    return function_caf2a(a1, a2, a3, a4, a5, v2);
}

// Address range: 0x372768 - 0x3728d2
int64_t function_372768(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x372768
    int64_t v1; // bp-32, 0x372768
    int64_t v2 = (int64_t)&v1; // 0x3728a3
    *(int64_t *)(v2 - 8) = v2 + 8;
    int64_t v3; // 0x372768
    return function_caf2a(a1, a2, a3, a4, a5, v3);
}

// Address range: 0x3728d2 - 0x372a44
int64_t function_3728d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3728d2
    int64_t v1; // 0x3728d2
    return function_caf2a(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x372a44 - 0x372b7a
int64_t function_372a44(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x372a44
    bool v1; // 0x372a44
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x372a44
    int64_t v3; // bp-40, 0x372a44
    int64_t v4 = (int64_t)&v3; // 0x372ae0
    int64_t * v5 = (int64_t *)(v4 + 16); // 0x372ae8
    int64_t v6 = *v5; // 0x372ae8
    int64_t * v7 = (int64_t *)(v4 - 8); // 0x372ae8
    *v7 = v6;
    int64_t * v8 = (int64_t *)(v4 - 16); // 0x372aec
    int64_t * v9 = (int64_t *)(v4 - 24); // 0x372b02
    *(int64_t *)(v4 - 32) = v2;
    v3 = v2;
    *v8 = 0x6c7a940c;
    *v9 = v6;
    *v5 = *v8;
    *v9 = *v7;
    *v7 = a2;
    *v8 = v4 + 8;
    int64_t v10 = *v7; // 0x372b6c
    *v9 = v10;
    return function_caf2a(a1, v10, 0x3471ee4c, a4, a5, 310);
}

// Address range: 0x372b7a - 0x372ca9
int64_t function_372b7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x372b7a
    int64_t v1; // bp-64, 0x372b7a
    v1 = (int64_t)&v1 + 8;
    int64_t v2; // 0x372b7a
    return function_caf2a(a1, a2, a3, v2, a5, a6);
}

// Address range: 0x372ca9 - 0x372de9
int64_t function_372ca9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x372ca9
    int64_t v1; // 0x372ca9
    return function_caf2a(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x372de9 - 0x372f52
int64_t function_372de9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x372de9
    return function_caf2a(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x372f52 - 0x3730c4
int64_t function_372f52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x372f52
    int64_t v1; // bp-40, 0x372f52
    int64_t v2 = (int64_t)&v1; // 0x372fe2
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x372fea
    int64_t * v4 = (int64_t *)v3; // 0x372feb
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x372fee
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x372ff6
    int64_t v7 = v2 - 24; // 0x372fff
    int64_t * v8 = (int64_t *)v7; // 0x372fff
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x373014
    *v6 = v2;
    int64_t * v10 = (int64_t *)(v2 + 8); // 0x373033
    int64_t v11 = *v10; // 0x373033
    *v6 = v11;
    *v8 = 0x36ecd8;
    *v8 = 0x42b13994;
    v1 = v5;
    *v9 = 0x51c6a649;
    *(int64_t *)(v2 - 40) = v11;
    *v10 = *v8;
    *v8 = a4;
    *v9 = v7;
    *v8 = v3;
    *v6 = *v4;
    *v8 = v3;
    int64_t v12; // 0x372f52
    return function_caf2a(a1, a2, a3, *v8, *v8, v12);
}

// Address range: 0x3730c4 - 0x3730c9
int64_t function_3730c4(void) {
    // 0x3730c4
    int64_t result; // 0x3730c4
    return result;
}

// Address range: 0x3730da - 0x3730df
int64_t function_3730da(void) {
    // 0x3730da
    return function_ffffffffe8f153e7();
}

// Address range: 0x3bddb5 - 0x3bde3b
int64_t function_3bddb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3bddb5
    int64_t v1; // 0x3bddb5
    uint32_t v2 = (int32_t)v1;
    *(int32_t *)v1 = v2 / 256 | 0x1000000 * v2;
    return function_c823b(a1, a2);
}

// Address range: 0x3bde3b - 0x3bdf81
int64_t function_3bde3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3bde3b
    int64_t v1; // bp-64, 0x3bde3b
    int64_t v2 = (int64_t)&v1; // 0x3bdf30
    v1 = v2;
    *(int64_t *)(v2 + 32) = v1;
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x3bdf40
    int64_t v4 = *v3; // 0x3bdf40
    v1 = v4;
    *(int64_t *)(v2 - 8) = v4;
    *v3 = v2 + 24;
    return function_c823b(a1, a2);
}

// Address range: 0x3bdf97 - 0x3bdfa5
int64_t function_3bdf97(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3bdf97
    int64_t v1; // 0x3bdf97
    int64_t v2 = v1;
    char * v3 = (char *)(v2 - 57); // 0x3bdf97
    *v3 = *v3 | (char)a4;
    return (v2 + 36) % 256 | v2 & -256;
}

// Address range: 0x3bdfb1 - 0x3bdfb4
int64_t function_3bdfb1(void) {
    // 0x3bdfb1
    return __asm_sti();
}
