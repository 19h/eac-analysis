/*
 * Targeted RetDec C for native executable gap queue batch 1031.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1c9955-0x1c9b55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c9b55-0x1c9d55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c9d55-0x1c9f55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c9f55-0x1ca155 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ca155-0x1ca355 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ca355-0x1ca555 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ca555-0x1ca755 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1ca755-0x1ca955 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2524bc-0x2526bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x252abc-0x252cbc rank=- name=- kind=- bytes=- uncovered=-
 *   0x252cbc-0x252ebc rank=- name=- kind=- bytes=- uncovered=-
 *   0x252ebc-0x2530bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x2530bc-0x2532bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x2532bc-0x2534bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x481830-0x481a30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x481c30-0x481e30 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1c9955(int64_t a1, int64_t a2, int32_t a3);
int64_t function_1c9961(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1c9aa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1c9c0c(int64_t a1, int64_t a2);
int64_t function_1c9d3d(int64_t a1, int64_t a2);
int64_t function_1c9e7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c9fb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1ca113(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ca2b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1ca3f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1ca53a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1ca6bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1ca816(void);
int64_t function_1ca94f(void);
int64_t function_1ca950(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25244c();
int64_t function_2524bc(int64_t a1);
int64_t function_2524c8(void);
int64_t function_2524dd(int64_t a1);
int64_t function_252512(void);
int64_t function_25256b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25257d(void);
int64_t function_2525e4(void);
int64_t function_252603(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25261e(void);
int64_t function_252620(void);
int64_t function_25263a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_252abc(void);
int64_t function_252ae5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8);
int64_t function_252bf1(void);
int64_t function_252c2d(int64_t a1);
int64_t function_252c44(void);
int64_t function_252c50(int64_t a1);
int64_t function_252ca1(void);
int64_t function_252d25(int64_t a1);
int64_t function_252d3d(int64_t a1);
int64_t function_252d41(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_252d80(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_252da7(int64_t a1, int64_t a2);
int64_t function_252dbf(void);
int64_t function_252dc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_252df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_252eb6(void);
int64_t function_252eca(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_252f3c(int64_t a1);
int64_t function_252fa8(void);
int64_t function_252fea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2530a0(void);
int64_t function_25310f(void);
int64_t function_25312d(int64_t a1);
int64_t function_25312f(int64_t a1);
int64_t function_253136(int64_t a1);
int64_t function_253141(void);
int64_t function_253154(int64_t a1, int64_t a2, int64_t a3);
int64_t function_253178(void);
int64_t function_2531ec(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2532af(void);
int64_t function_25331d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3552e8e();
int64_t function_481817();
int64_t function_481830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8);
int64_t function_481c30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_481c3e(void);
int64_t function_481c57(void);
int64_t function_481c5c(void);
int64_t function_481c6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_481c89(void);
int64_t function_481c9c(void);
int64_t function_481cc8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5, int64_t a6);
int64_t function_59599de();
int64_t function_c6d58();
int64_t function_cc59c();
int64_t function_ffffffff99033adc();
int64_t function_ffffffffd58133e1();
int64_t function_ffffffffe875fabb();
int64_t unknown_13725196();
int64_t unknown_154b525();
int64_t unknown_1a5d4ee2();
int64_t unknown_2c3ba240();
int64_t unknown_3622eb06();
int64_t unknown_3abeca2a();
int64_t unknown_62f8146d();
int64_t unknown_6691b23();
int64_t unknown_ffffffff8fdb5929();
int64_t unknown_ffffffffacc51a5e();
int64_t unknown_ffffffffb99b18ac();
int64_t unknown_ffffffffd86e4678();
int64_t unknown_fffffffffa8bb16d();
int64_t unknown_fffffffffdea2b0d();

// Address range: 0x1c9955 - 0x1c9961
int64_t function_1c9955(int64_t a1, int64_t a2, int32_t a3) {
    // 0x1c9955
    int64_t v1; // 0x1c9955
    return function_cc59c(a1, a3, v1, v1, v1, v1, 0x100000000 * a2 >> 32);
}

// Address range: 0x1c9961 - 0x1c9aa6
int64_t function_1c9961(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x30fa7f39; // bp-40, 0x1c99cc
    int64_t v2 = (int64_t)&v1; // 0x1c99f7
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x1c99ff
    int64_t v4 = *v3; // 0x1c99ff
    int64_t v5 = v2 - 8; // 0x1c99ff
    int64_t * v6 = (int64_t *)v5; // 0x1c99ff
    *v6 = v4;
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x1c9a03
    *v7 = a3;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x1c9a0f
    *v7 = 0x7d12ff37;
    bool v9; // 0x1c9961
    *(int64_t *)(v2 - 32) = 0x4000 * (int64_t)(bool)v9 | 2048 * (int64_t)v9 | 1024 * (int64_t)v9 | 512 * (int64_t)v9 | 256 * (int64_t)v9 | 128 * (int64_t)v9 | 64 * (int64_t)v9 | 16 * (int64_t)v9 | (int64_t)v9 | 4 * (int64_t)v9 | 2;
    v1 = *v7;
    *v7 = 0x514f0d13;
    *v8 = v4;
    *v3 = *v7;
    *v7 = *v6;
    *v8 = v5;
    int64_t v10 = *v6; // 0x1c9a88
    *v7 = v10;
    *v8 = v10;
    return function_cc59c(a1, (int32_t)a2, *v7, a4, a5, a6, v1);
}

// Address range: 0x1c9aa6 - 0x1c9c0c
int64_t function_1c9aa6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1c9aa6
    int64_t v1; // bp-56, 0x1c9aa6
    int64_t v2 = (int64_t)&v1; // 0x1c9b7b
    *(int64_t *)(v2 + 16) = a6;
    v1 = 0xc7c25c3;
    *(int64_t *)(v2 + 32) = v1;
    v1 = a5;
    *(int64_t *)(v2 - 8) = 0x3f0bf3b0;
    *(int64_t *)(v2 + 8) = v2 + 24;
    int64_t v3; // 0x1c9aa6
    return function_cc59c(0x1bee7b, (int32_t)a2, a3, a4, v1, v3, v3);
}

// Address range: 0x1c9c0c - 0x1c9d3d
int64_t function_1c9c0c(int64_t a1, int64_t a2) {
    // 0x1c9c0c
    int64_t v1; // 0x1c9c0c
    return function_cc59c(a1, (int32_t)a2, v1, v1, v1, v1, 0x1bf0a5);
}

// Address range: 0x1c9d3d - 0x1c9e7f
int64_t function_1c9d3d(int64_t a1, int64_t a2) {
    // 0x1c9d3d
    int64_t v1; // bp-40, 0x1c9d3d
    int64_t v2 = (int64_t)&v1; // 0x1c9daf
    int64_t * v3 = (int64_t *)(v2 + 32); // 0x1c9dd1
    int64_t v4 = *v3; // 0x1c9dd1
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x1c9dd1
    *v5 = v4;
    int64_t v6 = v2 - 16; // 0x1c9dd5
    int64_t * v7 = (int64_t *)v6; // 0x1c9dd5
    *v7 = v4;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x1c9dd8
    *v8 = v4;
    int64_t v9 = *(int64_t *)(v2 + 16); // 0x1c9de7
    *v5 = 0x26b11965;
    *v7 = 0x1a957aa1;
    *v8 = v4;
    int64_t * v10 = (int64_t *)(v2 + 8); // 0x1c9e0b
    *v10 = *v5;
    *v7 = v6;
    *v5 = v9;
    *v3 = v9;
    *v5 = *v10;
    *v10 = v2 + 24;
    int64_t v11; // 0x1c9d3d
    return function_cc59c(a1, (int32_t)v1, v11, v11, v11, v11, 0x1bf314);
}

// Address range: 0x1c9e7f - 0x1c9fb6
int64_t function_1c9e7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1c9e7f
    int64_t v1; // bp-24, 0x1c9e7f
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x1c9e7f
    bool v3; // 0x1c9e7f
    return function_cc59c(0x1bf524, 169, a3, a4, v2, v2, 0x4000 * (int64_t)v3 | 2048 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3 | 2);
}

// Address range: 0x1c9fb6 - 0x1ca113
int64_t function_1c9fb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1c9fb6
    int64_t v1; // bp-40, 0x1c9fb6
    int64_t v2 = (int64_t)&v1; // 0x1ca0bd
    v1 = v2;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x1ca0c6
    *v3 = a3;
    *(int64_t *)(v2 + 32) = v1;
    v1 = a2;
    *v3 = v2;
    int64_t v4 = v1; // 0x1ca109
    v1 = v2 + 16;
    int64_t v5; // 0x1c9fb6
    return function_cc59c(a1, (int32_t)v4, a3, a4, a5, v5, a6);
}

// Address range: 0x1ca113 - 0x1ca2b6
int64_t function_1ca113(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ca113
    int64_t v1; // 0x1ca113
    return function_cc59c(a1, (int32_t)a2, a3, a4, v1, v1, 0x258e7be4);
}

// Address range: 0x1ca2b6 - 0x1ca3f8
int64_t function_1ca2b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1ca2b6
    int64_t v1; // bp-56, 0x1ca2b6
    v1 = (int64_t)&v1;
    int64_t v2; // 0x1ca2b6
    return function_cc59c(a1, (int32_t)a2, a3, a4, v2, v2, 310);
}

// Address range: 0x1ca3f8 - 0x1ca53a
int64_t function_1ca3f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1ca3f8
    int64_t v1; // 0x1ca3f8
    return function_cc59c(a1, (int32_t)a2, a3, v1, v1, v1, 0x74fec6db);
}

// Address range: 0x1ca53a - 0x1ca6bd
int64_t function_1ca53a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6; // bp-24, 0x1ca61f
    int64_t v2; // bp-56, 0x1ca53a
    v2 = (int64_t)&v2;
    int64_t v3 = (int64_t)&v1; // 0x1ca677
    *(int64_t *)(v3 - 16) = a6;
    *(int64_t *)(v3 - 8) = v3 + 8;
    int64_t v4; // 0x1ca53a
    return function_cc59c(a1, (int32_t)a2, 0x281a30aa, a4, a5, v4, v1);
}

// Address range: 0x1ca6bd - 0x1ca811
int64_t function_1ca6bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1ca6bd
    int64_t v1; // bp-40, 0x1ca6bd
    v1 = (int64_t)&v1;
    int64_t v2; // 0x1ca6bd
    return function_cc59c(a1, (int32_t)a2, a3, a4, a5, v2, a6);
}

// Address range: 0x1ca816 - 0x1ca81c
int64_t function_1ca816(void) {
    // 0x1ca816
    int64_t result; // 0x1ca816
    char * v1 = (char *)(result - 119); // 0x1ca816
    unsigned char v2 = *v1; // 0x1ca816
    *v1 = v2 / 2 | 128 * v2;
    return result;
}

// Address range: 0x1ca94f - 0x1ca950
int64_t function_1ca94f(void) {
    // 0x1ca94f
    int64_t result; // 0x1ca94f
    return result;
}

// Address range: 0x1ca950 - 0x1ca954
int64_t function_1ca950(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x1ca950
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x1ca950
    return result;
}

// Address range: 0x2524bc - 0x2524c2
int64_t function_2524bc(int64_t a1) {
    // 0x2524bc
    int64_t v1; // 0x2524bc
    return v1 & 0xfec216ad | 0x13de952;
}

// Address range: 0x2524c8 - 0x2524cc
int64_t function_2524c8(void) {
    // 0x2524c8
    return function_25244c();
}

// Address range: 0x2524dd - 0x2524ea
int64_t function_2524dd(int64_t a1) {
    // 0x2524dd
    int64_t v1; // 0x2524dd
    return v1 & -256 | (int64_t)*(char *)-0x76a6fddc4bb0c4fa;
}

// Address range: 0x252512 - 0x252513
int64_t function_252512(void) {
    // 0x252512
    int64_t result; // 0x252512
    return result;
}

// Address range: 0x25256b - 0x252578
int64_t function_25256b(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 - 0x17653e80); // 0x25256b
    int64_t v2; // 0x25256b
    *v1 = *v1 | (char)v2;
    return function_59599de((int32_t)a2 + (int32_t)a1);
}

// Address range: 0x25257d - 0x252580
int64_t function_25257d(void) {
    // 0x25257d
    int64_t result; // 0x25257d
    return result;
}

// Address range: 0x2525e4 - 0x2525e5
int64_t function_2525e4(void) {
    // 0x2525e4
    int64_t result; // 0x2525e4
    return result;
}

// Address range: 0x252603 - 0x252619
int64_t function_252603(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x252603
    bool v1; // 0x252603
    int32_t * v2 = (int32_t *)(unknown_62f8146d((v1 ? -1 : 1) + a1) & 0xffffffff); // 0x252613
    *v2 = *v2 + (int32_t)a3;
    return (int64_t)(*(int32_t *)((a4 & 0xffffffff) - 24) ^ (int32_t)a4);
}

// Address range: 0x25261e - 0x25261f
int64_t function_25261e(void) {
    // 0x25261e
    int64_t result; // 0x25261e
    return result;
}

// Address range: 0x252620 - 0x25262b
int64_t function_252620(void) {
    // 0x252620
    return unknown_ffffffff8fdb5929();
}

// Address range: 0x25263a - 0x252643
int64_t function_25263a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result; // 0x25263a
    if (a4 == 0) {
        result = function_2525e4();
    }
    // 0x25263c
    return result;
}

// Address range: 0x252abc - 0x252abd
int64_t function_252abc(void) {
    // 0x252abc
    int64_t result; // 0x252abc
    return result;
}

// Address range: 0x252ae5 - 0x252bce
int64_t function_252ae5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8) {
    int64_t v1 = a4;
    int64_t v2; // 0x252ae5
    *(char *)-0x6f83320c = *(char *)-0x6f83320c + (char)(v2 / 256);
    bool v3; // 0x252ae5
    int64_t v4 = v3 ? -1 : 1; // 0x252af5
    int64_t v5 = v4 + a2; // 0x252af5
    *(char *)0x68e75401e8d5813a = (char)v5;
    uint32_t v6 = (int32_t)a4 % 32; // 0x252b03
    if (v6 != 0) {
        int32_t * v7 = (int32_t *)(v2 + 0x501e83a); // 0x252b03
        uint32_t v8 = *v7; // 0x252b03
        *v7 = v8 >> 32 - v6 | v8 << v6;
    }
    int64_t v9 = v4 + a1; // 0x252af5
    float80_t v10; // 0x252ae5
    *(int64_t *)0x63271310 = (int64_t)v10;
    int64_t v11 = v5 + 0xd5fe17c8; // 0x252b15
    int64_t v12 = v11 & 0xffffffff; // 0x252b1a
    char v13 = a8 / 256; // 0x252b1b
    char v14 = *(char *)0x29ba2bd5 ^ v13; // 0x252b1b
    *(char *)0x29ba2bd5 = v14;
    int32_t v15; // 0x252ae5
    int64_t v16; // 0x252ae5
    int64_t v17; // 0x252ae5
    int64_t v18; // 0x252ae5
    if (v14 < 0) {
        // 0x252b9f
        unknown_154b525();
        int32_t v19 = unknown_13725196();
        *(int32_t *)v9 = v19;
        int64_t v20 = v9 + (v3 ? -4 : 4); // 0x252b9f
        int64_t v21 = v1 - 1; // 0x252ba2
        v1 = v21;
        v15 = v19;
        v16 = v21;
        v18 = v12;
        v17 = v20;
        if (v21 == 0) {
            char * v22 = (char *)v12; // 0x252ba4
            *v22 = *v22 | v13;
            return unknown_ffffffffb99b18ac(v20);
        }
    } else {
        int64_t v23 = (v2 & 0xffffff00 | 159) - (v3 ? 0xd62ebc6b : 0xd62ebc6a); // 0x252ae8
        unknown_3abeca2a(v9, v23 & 0xffffff35, v12);
        *(int32_t *)v1 = (int32_t)v23;
        uint64_t v24 = v1;
        *(char *)v24 = (char)(v24 / 256);
        int64_t v25 = v1 & -0xff01 | 256 * (int64_t)*(char *)&v1; // 0x252b2b
        v1 = v25;
        int64_t v26 = unknown_2c3ba240(); // 0x252b3a
        *(char *)-0x26e484fe17c585ad = (char)v26;
        v15 = v26;
        v16 = v25;
        v18 = (int64_t)(*(int32_t *)(v25 - 0x12400c00) ^ (int32_t)v11);
        v17 = v9;
    }
    // 0x252b48
    __asm_out((int16_t)v18, v15);
    int32_t * v27 = (int32_t *)(2 * v17); // 0x252b49
    *v27 = *v27 ^ (int32_t)v16;
    return function_ffffffffe875fabb();
}

// Address range: 0x252bf1 - 0x252bf2
int64_t function_252bf1(void) {
    // 0x252bf1
    int64_t result; // 0x252bf1
    return result;
}

// Address range: 0x252c2d - 0x252c30
int64_t function_252c2d(int64_t a1) {
    // 0x252c2d
    int64_t result; // 0x252c2d
    return result;
}

// Address range: 0x252c44 - 0x252c49
int64_t function_252c44(void) {
    // 0x252c44
    return function_ffffffffd58133e1();
}

// Address range: 0x252c50 - 0x252c54
int64_t function_252c50(int64_t a1) {
    // 0x252c50
    int64_t result; // 0x252c50
    return result;
}

// Address range: 0x252ca1 - 0x252ca6
int64_t function_252ca1(void) {
    // 0x252ca1
    return function_3552e8e();
}

// Address range: 0x252d25 - 0x252d26
int64_t function_252d25(int64_t a1) {
    // 0x252d25
    int64_t result; // 0x252d25
    return result;
}

// Address range: 0x252d3d - 0x252d3e
int64_t function_252d3d(int64_t a1) {
    // 0x252d3d
    int64_t result; // 0x252d3d
    return result;
}

// Address range: 0x252d41 - 0x252d5b
int64_t function_252d41(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x252d41
    int64_t v1; // 0x252d41
    char * v2 = (char *)(4 * v1 + a2); // 0x252d41
    *v2 = *v2 ^ -31;
    int64_t v3 = v1 + 0xc2ff147c; // 0x252d45
    int32_t * v4 = (int32_t *)(a2 + 49); // 0x252d4a
    *v4 = *v4 + (int32_t)a2;
    *(int32_t *)-0x2c661f6541b15ef6 = (int32_t)v3;
    return v3 & 0xffffffff;
}

// Address range: 0x252d80 - 0x252d87
int64_t function_252d80(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x252d80
    if (v1 != 0) {
        char * v2 = (char *)(a4 + 27); // 0x252d80
        unsigned char v3 = *v2; // 0x252d80
        *v2 = v3 >> v1 | v3 << 8 - v1;
    }
    char * v4 = (char *)(a4 + 127); // 0x252d83
    *v4 = *v4 + (char)(a4 / 256);
    int64_t result; // 0x252d80
    return result;
}

// Address range: 0x252da7 - 0x252dad
int64_t function_252da7(int64_t a1, int64_t a2) {
    // 0x252da7
    int64_t result; // 0x252da7
    int32_t * v1 = (int32_t *)(result + 4 * a2); // 0x252da7
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x252dbf - 0x252dc1
int64_t function_252dbf(void) {
    // 0x252dbf
    int64_t v1; // 0x252dbf
    return function_252df0(v1, v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x252dc1 - 0x252df0
int64_t function_252dc1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x252dc1
    int64_t v1; // 0x252dc1
    uint64_t v2 = v1;
    *(char *)v2 = (char)v2 - (char)v1;
    *(char *)-0x1441eb27 = *(char *)-0x1441eb27 + (char)(v2 / 256);
    int16_t v3; // 0x252dc1
    int64_t v4 = v3; // 0x252dd8
    int32_t v5 = *(int32_t *)(v4 + 8); // 0x252ddb
    *(char *)v4 = (char)v3 & (char)a4;
    float80_t v6; // 0x252dc1
    *(int64_t *)-0x6129330f = (int64_t)((float80_t)v5 / v6);
    return v4 & 0xff00 | (int64_t)(((v3 ^ 216) + 215) % 256);
}

// Address range: 0x252df0 - 0x252e68
int64_t function_252df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x252df0
    int64_t v1; // 0x252df0
    int64_t result = v1 & 0xffffff00 | (uint64_t)v1 % 256; // 0x252df1
    int64_t v2 = a4 - 1; // 0x252df5
    bool v3; // 0x252df0
    if (v2 != 0 == v3) {
        // 0x252e65
        return result;
    }
    // 0x252df7
    *(int32_t *)a3 = (int32_t)v2 + (int32_t)a3;
    return result;
}

// Address range: 0x252eb6 - 0x252eb7
int64_t function_252eb6(void) {
    // 0x252eb6
    int64_t result; // 0x252eb6
    return result;
}

// Address range: 0x252eca - 0x252f10
int64_t function_252eca(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x252eca
    int64_t v1; // 0x252eca
    uint64_t v2 = v1;
    *(char *)v2 = (char)(v2 / 256) + (char)v2;
    int32_t * v3 = (int32_t *)(a1 + 0x248d6188); // 0x252ece
    *v3 = *v3 + (int32_t)v1;
    int64_t v4 = unknown_1a5d4ee2(); // 0x252edb
    char v5 = __asm_in(-17); // 0x252ee1
    int64_t v6 = v4 & -256 | (int64_t)v5; // 0x252ee1
    uint32_t v7 = *(int32_t *)(a1 + 125); // 0x252ee4
    *(int32_t *)v6 = (int32_t)v6;
    char * v8 = (char *)((a3 & 0xffffffff) - 0x6d58fe18); // 0x252ee9
    *v8 = *v8 | (char)(a4 / 256);
    char * v9 = (char *)(v6 & -256 | (int64_t)(v5 + 6 + (char)(v5 > 33))); // 0x252ef4
    *v9 = *v9 + (char)a4;
    int32_t * v10 = (int32_t *)((int64_t)v7 - 0x4679fe18); // 0x252ef6
    *v10 = *v10 + v7;
    unknown_3622eb06();
    __asm_iretd();
    unknown_fffffffffdea2b0d();
    return function_252eb6();
}

// Address range: 0x252f3c - 0x252f56
int64_t function_252f3c(int64_t a1) {
    char * v1 = (char *)(a1 + 0x6501e81c); // 0x252f42
    *v1 = *v1 ^ -91;
    __asm_out_133(-5, -88);
    int64_t v2; // 0x252f3c
    return v2 & 0xec033800 | 0x13fcc7a8;
}

// Address range: 0x252fa8 - 0x252fa9
int64_t function_252fa8(void) {
    // 0x252fa8
    int64_t result; // 0x252fa8
    return result;
}

// Address range: 0x252fea - 0x253088
int64_t function_252fea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x252fea
    bool v1; // 0x252fea
    if (v1) {
        // 0x253064
        unknown_ffffffffd86e4678();
        return a2 & 0xffffffff;
    }
    // 0x252fec
    return function_252fa8();
}

// Address range: 0x2530a0 - 0x2530a1
int64_t function_2530a0(void) {
    // 0x2530a0
    int64_t result; // 0x2530a0
    return result;
}

// Address range: 0x25310f - 0x253110
int64_t function_25310f(void) {
    // 0x25310f
    int64_t result; // 0x25310f
    return result;
}

// Address range: 0x25312d - 0x25312e
int64_t function_25312d(int64_t a1) {
    // 0x25312d
    int64_t result; // 0x25312d
    return result;
}

// Address range: 0x25312f - 0x253130
int64_t function_25312f(int64_t a1) {
    // 0x25312f
    int64_t result; // 0x25312f
    return result;
}

// Address range: 0x253136 - 0x25313b
int64_t function_253136(int64_t a1) {
    // 0x253136
    int64_t result; // 0x253136
    return result;
}

// Address range: 0x253141 - 0x253142
int64_t function_253141(void) {
    // 0x253141
    int64_t result; // 0x253141
    return result;
}

// Address range: 0x253154 - 0x25316e
int64_t function_253154(int64_t a1, int64_t a2, int64_t a3) {
    // 0x253154
    int64_t v1; // 0x253154
    *(char *)a3 = (char)v1 - (char)((uint64_t)v1 / 256);
    int64_t v2 = unknown_ffffffffacc51a5e(); // 0x253158
    float80_t v3; // 0x253154
    *(int32_t *)(v2 + 1) = (int32_t)v3;
    int32_t * v4 = (int32_t *)v2; // 0x253163
    uint32_t v5 = *v4; // 0x253163
    *v4 = v5 / 0x100000 | 0x1000 * v5;
    __asm_int1();
    unknown_fffffffffa8bb16d();
    return function_253141();
}

// Address range: 0x253178 - 0x25317b
int64_t function_253178(void) {
    // 0x253178
    int64_t result; // 0x253178
    return result;
}

// Address range: 0x2531ec - 0x25321c
int64_t function_2531ec(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)*(int32_t *)0x3dc1dc67094f9751; // 0x25320b
    int32_t * v1 = (int32_t *)result; // 0x253214
    *v1 = *v1 + (int32_t)a1;
    int64_t v2; // 0x2531ec
    int32_t * v3 = (int32_t *)(v2 - 0xe000000); // 0x253216
    *v3 = *v3 - (int32_t)v2;
    return result;
}

// Address range: 0x2532af - 0x2532b4
int64_t function_2532af(void) {
    // 0x2532af
    return function_ffffffff99033adc();
}

// Address range: 0x25331d - 0x25344f
int64_t function_25331d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_6691b23(); // 0x25331d
    char * v2 = (char *)(v1 - 0x7cb76400); // 0x253322
    *v2 = *v2 + (char)v1;
    __asm_in_134((int16_t)a3);
    int64_t v3; // 0x25331d
    char * v4 = (char *)(v3 + 87); // 0x253329
    *v4 = *v4 | (char)a3;
    return function_c6d58(a1);
}

// Address range: 0x481830 - 0x481918
int64_t function_481830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, uint64_t a8) {
    // 0x481830
    int64_t v1; // 0x481830
    int64_t v2 = v1;
    int64_t v3 = a2;
    int32_t * v4 = (int32_t *)(4 * a1 + 48 + a3); // 0x481830
    *v4 = *v4 - 1;
    int64_t v5 = (v2 + 127) % 256 | v2 & -256; // 0x481836
    char * v6 = (char *)(v5 + 0x1b7c3d41); // 0x481838
    char v7 = a4; // 0x481838
    *v6 = *v6 + v7;
    int64_t result = v5; // 0x48183f
    if (a8 % 2 == 0) {
        uint32_t v8 = *(int32_t *)(v1 + 0x24f79f4b); // 0x481841
        int32_t * v9 = (int32_t *)(v5 - 0x61bf1f5d); // 0x481847
        int32_t v10 = *v9; // 0x481847
        int64_t v11; // bp+16, 0x481830
        int32_t v12 = v8 > (int32_t)(int64_t)&v11; // 0x481847
        int32_t v13 = v12 + (int32_t)v1; // 0x481847
        int32_t v14 = v10 - v13; // 0x481847
        *v9 = v14;
        int64_t * v15 = (int64_t *)(a7 + 0x4fa261c8); // 0x48184e
        int64_t v16 = *v15; // 0x48184e
        int64_t v17 = v16 >> 16; // 0x48184e
        *v15 = v17;
        int64_t v18 = v5; // 0x481857
        if (((v14 - v12 ^ v10) & (v13 ^ v10)) < 0) {
            v18 = function_481817();
        }
        char * v19 = (char *)(a7 + 57); // 0x481859
        unsigned char v20 = *v19; // 0x481859
        *v19 = v20 / 2 | 128 * (char)((int16_t)v16 < 0);
        unsigned char v21 = *(char *)(v18 % 256 + v1); // 0x481864
        int64_t v22 = v18 & -256; // 0x481864
        result = v22 | (int64_t)v21;
        if (v17 != 0 && v20 % 2 == 0) {
            // 0x481867
            return v22 | (int64_t)(v21 + 37);
        }
    }
    // 0x481890
    if (llvm_ctpop_i8(*(char *)(a4 - 21) | (char)a3) % 2 != 0) {
        // 0x48190c
        *(int32_t *)a7 = *(int32_t *)&v3;
        return result & 0xce5a15b5 | 0x31a5ea4a;
    }
    // 0x481895
    *(int32_t *)-0x6efac97af8ffe7b3 = (int32_t)result;
    char * v23 = (char *)(v1 + 40); // 0x48189e
    *v23 = *v23 + v7;
    return result;
}

// Address range: 0x481c30 - 0x481c33
int64_t function_481c30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x481c30
    return result;
}

// Address range: 0x481c3e - 0x481c46
int64_t function_481c3e(void) {
    // 0x481c3e
    int64_t v1; // 0x481c3e
    bool v2; // 0x481c3e
    return v1 + 0x6aa3a47c + (int64_t)v2 & 0xffffffff ^ 43;
}

// Address range: 0x481c57 - 0x481c58
int64_t function_481c57(void) {
    // 0x481c57
    int64_t result; // 0x481c57
    return result;
}

// Address range: 0x481c5c - 0x481c5e
int64_t function_481c5c(void) {
    // 0x481c5c
    int64_t result; // 0x481c5c
    return result;
}

// Address range: 0x481c6e - 0x481c87
int64_t function_481c6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x481c6e
    int64_t v1; // 0x481c6e
    int64_t v2 = v1 ^ a2;
    int64_t v3 = 0x100000000 * v2 >> 32; // 0x481c73
    while ((int32_t)v2 == 0 || 26 * v3 != 0x1a00000000 * v3 >> 32) {
        // continue -> 0x481c76
    }
    int32_t * v4 = (int32_t *)(v1 - 81); // 0x481c7e
    *v4 = *v4 | (int32_t)a3;
    return function_481c57();
}

// Address range: 0x481c89 - 0x481c8a
int64_t function_481c89(void) {
    // 0x481c89
    int64_t result; // 0x481c89
    return result;
}

// Address range: 0x481c9c - 0x481c9d
int64_t function_481c9c(void) {
    // 0x481c9c
    int64_t result; // 0x481c9c
    return result;
}

// Address range: 0x481cc8 - 0x481d54
int64_t function_481cc8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x481cc8
    uint32_t v3 = (int32_t)v2; // 0x481cc8
    uint32_t v4 = *(int32_t *)(v2 + 0x6a4e302); // 0x481cc8
    if (((v3 - v4 ^ v3) & (v4 ^ v3)) >= 0) {
        uint64_t v5 = v2 - (v4 > v3 ? 162 : 161); // 0x481d47
        *(char *)0x528e6e18 = *(char *)0x528e6e18 | -52;
        __asm_out_133(78, (char)v5);
        return v5 % 256 | v2 & -256;
    }
    // 0x481cd1
    *(char *)a2 = (char)a2 - (char)(a4 / 256);
    uint32_t v6 = *(int32_t *)0x20dede1e & (int32_t)v2; // 0x481cd3
    int64_t v7 = (int64_t)*(int32_t *)&v1; // 0x481cdb
    char v8 = *(char *)(v2 + (int64_t)(v6 % 256)); // 0x481ce1
    int64_t v9 = (int64_t)(v8 + 20 + (char)(-0x54a810c0 * v7 != -0x54a810c000000000 * v7 >> 32)) | (int64_t)(v6 & -256); // 0x481ce3
    int32_t * v10 = (int32_t *)(v9 + 96); // 0x481ce5
    int32_t v11 = *v10; // 0x481ce5
    *v10 = v11 - (int32_t)a5;
    int64_t v12 = v9; // 0x481ce9
    if ((int64_t)v11 >= a5) {
        v12 = function_481c89();
    }
    int64_t result = v12; // 0x481cf7
    if ((char)v12 > -124) {
        result = function_481c9c();
    }
    // 0x481cf9
    return result;
}
