/*
 * Targeted RetDec C for native executable gap queue batch 1187.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x13a809-0x13aa09 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13aa09-0x13ac09 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bcba9-0x2bcda9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bcda9-0x2bcfa9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bcfa9-0x2bd1a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bd1a9-0x2bd3a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bd3a9-0x2bd5a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bd7a9-0x2bd9a9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2bd9a9-0x2bdba9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2df70e-0x2df90e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2df90e-0x2dfb0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2dfb0e-0x2dfd0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2dff0e-0x2e010e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e010e-0x2e030e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e040e-0x2e050e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e050e-0x2e070e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_13a809(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13a850(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13a875(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13a8b8(int64_t a1);
int64_t function_13a8e4(void);
int64_t function_13a916(void);
int64_t function_13a92d(void);
int64_t function_13a947(void);
int64_t function_13a94a(void);
int64_t function_13a94e(void);
int64_t function_13a998(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_13a9a0(void);
int64_t function_13a9a2(void);
int64_t function_13a9a6(void);
int64_t function_13a9b8(int64_t a1, int64_t a2);
int64_t function_13a9e9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_13aa0a(int64_t a1, int32_t a2, int64_t a3, int64_t a4);
int64_t function_13aa12(int64_t a1, int64_t a2);
int64_t function_13aa41(void);
int64_t function_13aa4d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13aa67(int64_t a1);
int64_t function_13aaaa(int64_t a1);
int64_t function_13aae4(void);
int64_t function_13ab47(void);
int64_t function_13ab8e(void);
int64_t function_13abf6(void);
int64_t function_2164013();
int64_t function_2bcba9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bcbdd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bcc0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bcc73(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2bcc93(int64_t a1);
int64_t function_2bccad(int64_t a1, int64_t a2);
int64_t function_2bccc8(void);
int64_t function_2bcce5(int64_t a1);
int64_t function_2bcd03(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bcd2f(void);
int64_t function_2bcde2(void);
int64_t function_2bcde4(void);
int64_t function_2bcde6(void);
int64_t function_2bce0d(void);
int64_t function_2bce14(int64_t a1);
int64_t function_2bce26(void);
int64_t function_2bce33(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bce49(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2bce81(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2bceb2(void);
int64_t function_2bcee3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2bcf68(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bcf90(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bcfad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bd003(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2bd023(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bd093(int64_t a1);
int64_t function_2bd0c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bd127(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_2bd221(void);
int64_t function_2bd225(void);
int64_t function_2bd241(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2bd268(int64_t a1, int64_t a2);
int64_t function_2bd26a(void);
int64_t function_2bd291(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bd2a5(void);
int64_t function_2bd2b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bd2f8(void);
int64_t function_2bd311(void);
int64_t function_2bd31a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bd37f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bd3e8(int64_t a1);
int64_t function_2bd3f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2bd48e(void);
int64_t function_2bd492(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2bd4cc(int64_t a1);
int64_t function_2bd50e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bd53d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2bd54e(void);
int64_t function_2bd7a4();
int64_t function_2bd7a9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2bd885(int64_t a1);
int64_t function_2bd8d3(void);
int64_t function_2bd8f0(void);
int64_t function_2bd900(void);
int64_t function_2bd964(void);
int64_t function_2bd96e(void);
int64_t function_2bd983(void);
int64_t function_2bda9b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2bdabe(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2bdad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2bdb5c(void);
int64_t function_2bdb67(void);
int64_t function_2df70e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2df733(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2df795(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2df7d6(void);
int64_t function_2df80d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2df840(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2df876(void);
int64_t function_2df878(int64_t a1, int64_t a2);
int64_t function_2df892(void);
int64_t function_2df89d(void);
int64_t function_2df8b4(void);
int64_t function_2df8df(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2df982(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2df9d7(int64_t a1);
int64_t function_2dfa0b(int64_t a1);
int64_t function_2dfa67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2dfa7a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2dfa83(void);
int64_t function_2dfaab(void);
int64_t function_2dfbac(int64_t a1, int64_t a2);
int64_t function_2dfc62(void);
int64_t function_2dfc72(void);
int64_t function_2dfc75(void);
int64_t function_2dfc78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_2dff0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2dff38(int64_t a1);
int64_t function_2dff4d(void);
int64_t function_2dff65(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2dff9a(void);
int64_t function_2dffda(void);
int64_t function_2dffe1(void);
int64_t function_2dfff3(void);
int64_t function_2e0019(int64_t a1, int64_t a2);
int64_t function_2e001c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e002f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2e00a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e00cc(int64_t a1, int64_t a2);
int64_t function_2e0208(void);
int64_t function_2e0226(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e0237(void);
int64_t function_2e0276(void);
int64_t function_2e028e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2e02c3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e040e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e0452(void);
int64_t function_2e048d(int64_t a1);
int64_t function_2e04db(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e04fe(void);
int64_t function_2e0500(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e050f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e0543(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e0548(int64_t a1, int64_t a2);
int64_t function_2e0576(int64_t a1);
int64_t function_2e066b(int64_t a1);
int64_t function_2e0679(void);
int64_t function_2e067c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e06bf(void);
int64_t function_2e06e8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_47a4fdf8();
int64_t function_61bfc98();
int64_t function_8db251();
int64_t function_971de7d();
int64_t function_ffffffff8ef3fd37();
int64_t function_ffffffff91bcde10();
int64_t function_ffffffffb03911a3();
int64_t function_ffffffffbe2dc31d();
int64_t function_ffffffffe22ad73b();
int64_t function_ffffffffe35f77a8();
int64_t function_ffffffffec17396e();
int64_t function_ffffffffef2fe372();
int64_t function_ffffffffff4a97f7();
int64_t unknown_14da8be3();
int64_t unknown_16af87e();
int64_t unknown_1de6dc0c();
int64_t unknown_21dfe44();
int64_t unknown_3a33c196();
int64_t unknown_3a375f6f();
int64_t unknown_3a37c9ad();
int64_t unknown_3ac81e18();
int64_t unknown_3b16d97c();
int64_t unknown_3d2fe4fd();
int64_t unknown_3df9d016();
int64_t unknown_44206d9f();
int64_t unknown_46056890();
int64_t unknown_4bb4f576();
int64_t unknown_4bf486bd();
int64_t unknown_5316b710();
int64_t unknown_54bc6581();
int64_t unknown_5abea315();
int64_t unknown_60a0db71();
int64_t unknown_666ff2();
int64_t unknown_732d0b4f();
int64_t unknown_7b4b3118();
int64_t unknown_82dd405();
int64_t unknown_889fc80();
int64_t unknown_c96f90();
int64_t unknown_ffffffff805effee();
int64_t unknown_ffffffff88ad9e8a();
int64_t unknown_ffffffff8be3da83();
int64_t unknown_ffffffff8cdc5bf8();
int64_t unknown_ffffffff8e4ca0ab();
int64_t unknown_ffffffff91332653();
int64_t unknown_ffffffff9213ffeb();
int64_t unknown_ffffffffa82d367f();
int64_t unknown_ffffffffab63515e();
int64_t unknown_ffffffffb4690895();
int64_t unknown_ffffffffb4b91579();
int64_t unknown_ffffffffc36b518d();
int64_t unknown_ffffffffcbe55333();
int64_t unknown_ffffffffcc0285fd();
int64_t unknown_ffffffffccb99411();
int64_t unknown_ffffffffcf7fba9c();
int64_t unknown_ffffffffd0249e67();
int64_t unknown_ffffffffdb33acf8();
int64_t unknown_ffffffffdc3aea95();
int64_t unknown_ffffffffe7c0eca1();
int64_t unknown_ffffffffe884feac();
int64_t unknown_ffffffffefb6941b();

// Address range: 0x13a809 - 0x13a812
int64_t function_13a809(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13a809
    int64_t v1; // 0x13a809
    int64_t result = v1;
    *(char *)result = (char)(result ^ a4);
    return result;
}

// Address range: 0x13a850 - 0x13a85a
int64_t function_13a850(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13a850
    int64_t result; // 0x13a850
    *(int32_t *)(result - 52) = (int32_t)a4;
    return result;
}

// Address range: 0x13a875 - 0x13a883
int64_t function_13a875(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13a875
    *(char *)(a1 - 74) = (char)a4;
    char v1 = *(char *)0x7743a781; // 0x13a87a
    int64_t result; // 0x13a875
    *(char *)0x7743a781 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x13a8b8 - 0x13a8c6
int64_t function_13a8b8(int64_t a1) {
    // 0x13a8b8
    int64_t v1; // 0x13a8b8
    __asm_out(49, (char)v1);
    return __asm_in(79);
}

// Address range: 0x13a8e4 - 0x13a8e9
int64_t function_13a8e4(void) {
    // 0x13a8e4
    return function_8db251();
}

// Address range: 0x13a916 - 0x13a917
int64_t function_13a916(void) {
    // 0x13a916
    int64_t result; // 0x13a916
    return result;
}

// Address range: 0x13a92d - 0x13a932
int64_t function_13a92d(void) {
    // 0x13a92d
    return function_ffffffffec17396e();
}

// Address range: 0x13a947 - 0x13a94a
int64_t function_13a947(void) {
    // 0x13a947
    return function_13a916();
}

// Address range: 0x13a94a - 0x13a94b
int64_t function_13a94a(void) {
    // 0x13a94a
    int64_t result; // 0x13a94a
    return result;
}

// Address range: 0x13a94e - 0x13a94f
int64_t function_13a94e(void) {
    // 0x13a94e
    int64_t result; // 0x13a94e
    return result;
}

// Address range: 0x13a998 - 0x13a99e
int64_t function_13a998(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x13a998
    int64_t v1; // 0x13a998
    int64_t result = v1 & -256 | a4 / 256 % 256; // 0x13a998
    int32_t * v2 = (int32_t *)result; // 0x13a99a
    *v2 = *v2 + (int32_t)v1;
    return result;
}

// Address range: 0x13a9a0 - 0x13a9a2
int64_t function_13a9a0(void) {
    // 0x13a9a0
    return function_13a94e();
}

// Address range: 0x13a9a2 - 0x13a9a3
int64_t function_13a9a2(void) {
    // 0x13a9a2
    int64_t result; // 0x13a9a2
    return result;
}

// Address range: 0x13a9a6 - 0x13a9ad
int64_t function_13a9a6(void) {
    // 0x13a9a6
    return function_47a4fdf8();
}

// Address range: 0x13a9b8 - 0x13a9c9
int64_t function_13a9b8(int64_t a1, int64_t a2) {
    // 0x13a9b8
    bool v1; // 0x13a9b8
    int64_t v2 = v1 ? 0xa601e8cc : 0xa601e8cb; // 0x13a9b8
    float80_t v3; // 0x13a9b8
    *(int16_t *)a2 = (int16_t)v3;
    int64_t v4; // 0x13a9b8
    int32_t v5 = *(int32_t *)&v4; // 0x13a9bf
    int32_t v6; // 0x13a9b8
    int64_t v7; // 0x13a9b8
    *(int32_t *)((v7 - v2 & 0xffffffff) + 0x1e88400) = (int32_t)(int64_t)&v6;
    return function_13aa0a(a1, v5 + (int32_t)a2, v4, (int64_t)&g1);
}

// Address range: 0x13a9e9 - 0x13aa0a
int64_t function_13a9e9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x13a9e9
    int64_t v1; // 0x13a9e9
    uint32_t v2 = *(int32_t *)&v1; // 0x13a9f0
    int64_t v3 = unknown_ffffffff8cdc5bf8(); // 0x13a9f2
    char * v4 = (char *)(v1 - 0x22a73a00); // 0x13a9f7
    *v4 = (char)(v2 > (int32_t)a4) - (char)(a4 / 256) + *v4;
    char v5 = __asm_in_133(-120); // 0x13a9fd
    int32_t * v6 = (int32_t *)(a4 - 75); // 0x13aa04
    *v6 = *v6 + (int32_t)a3;
    int64_t v7; // 0x13a9e9
    *(int32_t *)a1 = (int32_t)(v3 & 0xffffff00 | v7 | (int64_t)v5);
    return __asm_in(-103);
}

// Address range: 0x13aa0a - 0x13aa12
int64_t function_13aa0a(int64_t a1, int32_t a2, int64_t a3, int64_t a4) {
    // 0x13aa0a
    int64_t result; // 0x13aa0a
    return result;
}

// Address range: 0x13aa12 - 0x13aa1f
int64_t function_13aa12(int64_t a1, int64_t a2) {
    // 0x13aa12
    return unknown_7b4b3118(a1, a2);
}

// Address range: 0x13aa41 - 0x13aa42
int64_t function_13aa41(void) {
    // 0x13aa41
    int64_t result; // 0x13aa41
    return result;
}

// Address range: 0x13aa4d - 0x13aa54
int64_t function_13aa4d(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x57c9c687); // 0x13aa4d
    int64_t result; // 0x13aa4d
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x13aa67 - 0x13aa6a
int64_t function_13aa67(int64_t a1) {
    // 0x13aa67
    int64_t result; // 0x13aa67
    return result;
}

// Address range: 0x13aaaa - 0x13aaad
int64_t function_13aaaa(int64_t a1) {
    // 0x13aaaa
    int64_t result; // 0x13aaaa
    return result;
}

// Address range: 0x13aae4 - 0x13aae9
int64_t function_13aae4(void) {
    // 0x13aae4
    return function_ffffffffe35f77a8();
}

// Address range: 0x13ab47 - 0x13ab4a
int64_t function_13ab47(void) {
    // 0x13ab47
    int64_t result; // 0x13ab47
    return result;
}

// Address range: 0x13ab8e - 0x13ab91
int64_t function_13ab8e(void) {
    // 0x13ab8e
    int64_t result; // 0x13ab8e
    return result;
}

// Address range: 0x13abf6 - 0x13abf7
int64_t function_13abf6(void) {
    // 0x13abf6
    int64_t result; // 0x13abf6
    return result;
}

// Address range: 0x2bcba9 - 0x2bcbb4
int64_t function_2bcba9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bcba9
    int64_t result; // 0x2bcba9
    *(char *)(result - 6) = (char)result;
    return result;
}

// Address range: 0x2bcbdd - 0x2bcbed
int64_t function_2bcbdd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bcbdd
    unknown_14da8be3(a1, a2, a3, a4);
    uint32_t result = -0x176df2e0 * *(int32_t *)(a1 + 1); // 0x2bcbe2
    int64_t v1; // 0x2bcbdd
    int32_t * v2 = (int32_t *)(8 * v1 + a4); // 0x2bcbe9
    *v2 = *v2 + result;
    return result;
}

// Address range: 0x2bcc0a - 0x2bcc58
int64_t function_2bcc0a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t result = unknown_ffffffffccb99411(); // 0x2bcc0b
    int64_t v2; // 0x2bcc0a
    int64_t v3; // 0x2bcc0a
    uint32_t v4 = (int32_t)(int64_t)&v2 + (int32_t)v3; // 0x2bcc17
    uint64_t v5 = a4 - 1; // 0x2bcc19
    if (v5 != 0 != (v4 == 0)) {
        // 0x2bcc1b
        return result;
    }
    int64_t v6 = (int64_t)(-0x17e2d8c6 * *(int32_t *)(a5 - 6)); // 0x2bcc10
    char * v7 = (char *)(a5 + 0x5401e800); // 0x2bcc2c
    *v7 = *v7 + (char)(v5 / 256);
    int32_t * v8 = (int32_t *)(a3 + 0x634e0099 + a5); // 0x2bcc32
    *v8 = *v8 + v4;
    int64_t v9 = unknown_21dfe44(); // 0x2bcc3e
    char * v10 = (char *)(8 * v6 + (int64_t)v4); // 0x2bcc43
    *v10 = *v10 - 1;
    float80_t v11; // 0x2bcc0a
    *(int32_t *)v6 = (int32_t)v11;
    int32_t * v12 = (int32_t *)(v1 - 0x2515775b); // 0x2bcc50
    *v12 = *v12 + 0x99fffb;
    *(char *)v1 = *(char *)&v1 & (char)a3;
    return (int64_t)((int32_t)v9 - *(int32_t *)(v6 + 0x408f243a));
}

// Address range: 0x2bcc73 - 0x2bcc90
int64_t function_2bcc73(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2bcc73
    int64_t result; // 0x2bcc73
    *(int64_t *)(((result | result) & 0xffffffff) - 8) = a1;
    char * v1 = (char *)(a1 - 0x173e0f75); // 0x2bcc77
    *v1 = *v1 ^ (char)(a3 / 256);
    int32_t * v2 = (int32_t *)(a2 + 35); // 0x2bcc7d
    *v2 = *v2 + (int32_t)result;
    char * v3 = (char *)(a3 + 4); // 0x2bcc83
    *v3 = *v3 | (char)a4;
    return result;
}

// Address range: 0x2bcc93 - 0x2bcc94
int64_t function_2bcc93(int64_t a1) {
    // 0x2bcc93
    int64_t result; // 0x2bcc93
    return result;
}

// Address range: 0x2bccad - 0x2bccb6
int64_t function_2bccad(int64_t a1, int64_t a2) {
    // 0x2bccad
    float80_t v1; // 0x2bccad
    *(int16_t *)(a2 + 0x272a2dfd) = (int16_t)v1;
    int64_t result; // 0x2bccad
    return result;
}

// Address range: 0x2bccc8 - 0x2bccc9
int64_t function_2bccc8(void) {
    // 0x2bccc8
    int64_t result; // 0x2bccc8
    return result;
}

// Address range: 0x2bcce5 - 0x2bcced
int64_t function_2bcce5(int64_t a1) {
    int64_t v1 = unknown_ffffffff9213ffeb(a1); // 0x2bcce5
    return (v1 & 0xff00) + v1 & 0xff00 | v1 & -0xff01;
}

// Address range: 0x2bcd03 - 0x2bcd2a
int64_t function_2bcd03(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bcd05
    *(char *)a2 = 0;
    return unknown_3ac81e18();
}

// Address range: 0x2bcd2f - 0x2bcd34
int64_t function_2bcd2f(void) {
    // 0x2bcd2f
    int64_t v1; // 0x2bcd2f
    return (int64_t)&v1;
}

// Address range: 0x2bcde2 - 0x2bcde3
int64_t function_2bcde2(void) {
    // 0x2bcde2
    int64_t result; // 0x2bcde2
    return result;
}

// Address range: 0x2bcde4 - 0x2bcde5
int64_t function_2bcde4(void) {
    // 0x2bcde4
    int64_t result; // 0x2bcde4
    return result;
}

// Address range: 0x2bcde6 - 0x2bcde7
int64_t function_2bcde6(void) {
    // 0x2bcde6
    int64_t result; // 0x2bcde6
    return result;
}

// Address range: 0x2bce0d - 0x2bce0f
int64_t function_2bce0d(void) {
    // 0x2bce0d
    return function_2bcde6();
}

// Address range: 0x2bce14 - 0x2bce1f
int64_t function_2bce14(int64_t a1) {
    // 0x2bce14
    int64_t v1; // 0x2bce14
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x2bce26 - 0x2bce27
int64_t function_2bce26(void) {
    // 0x2bce26
    int64_t result; // 0x2bce26
    return result;
}

// Address range: 0x2bce33 - 0x2bce43
int64_t function_2bce33(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    uint64_t v2 = a4 - 1; // 0x2bce33
    if (v2 != 0) {
        function_2bce26();
    }
    // 0x2bce35
    *(char *)(a4 - 0x1549495e) = (char)(v2 / 256);
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a1;
    return function_2bcde4();
}

// Address range: 0x2bce49 - 0x2bce81
int64_t function_2bce49(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2bce49
    unknown_732d0b4f();
    bool v1; // 0x2bce49
    if (v1) {
        function_2bcde2();
    }
    // 0x2bce57
    unknown_ffffffffab63515e();
    unknown_ffffffffd0249e67();
    __asm_iretd();
    unsigned char v2 = *(char *)(a3 - 0x9fe172d); // 0x2bce76
    int64_t v3 = __asm_int1(); // 0x2bce7c
    int64_t v4; // 0x2bce49
    int64_t v5 = v2 > (char)((uint64_t)v4 / 256) ? 158 : 157; // 0x2bce7d
    return (v3 - v5) % 256 | v3 & -256;
}

// Address range: 0x2bce81 - 0x2bceaa
int64_t function_2bce81(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2bce81
    int64_t v1; // 0x2bce81
    int64_t v2 = v1;
    int32_t v3 = *(int32_t *)(4 * (-255 * v2 & 0xff00 | v2 & 0x3fffffffffff00ff) + a3); // 0x2bce8a
    int64_t * v4 = (int64_t *)(int64_t)(v3 | (int32_t)v1); // 0x2bce8d
    int64_t v5 = *v4; // 0x2bce8d
    int64_t v6 = unknown_ffffffffb4690895(); // 0x2bce8f
    int32_t * v7 = (int32_t *)(a4 - 0x42fe37e8 + 4 * a4); // 0x2bce9b
    int32_t v8 = v5; // 0x2bce9b
    *v7 = *v7 - v8;
    *v4 = -24;
    int32_t * v9 = (int32_t *)(8 * v5 + a4); // 0x2bcea4
    uint32_t v10 = *v9; // 0x2bcea4
    uint32_t v11 = v10 + v8; // 0x2bcea4
    *v9 = v11;
    return (v6 + a4 / 256 + (v11 < v10 ? 188 : 189)) % 256 | v6 & -256;
}

// Address range: 0x2bceb2 - 0x2bceb3
int64_t function_2bceb2(void) {
    // 0x2bceb2
    int64_t result; // 0x2bceb2
    return result;
}

// Address range: 0x2bcee3 - 0x2bcf23
int64_t function_2bcee3(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2bcee3
    int64_t v1; // 0x2bcee3
    uint64_t v2 = v1 + 120; // 0x2bcee4
    int64_t v3 = v1 & 0xffffff00; // 0x2bcee4
    int32_t * v4 = (int32_t *)((v2 % 256 | v3) + 0x5f82da0a); // 0x2bcee8
    *v4 = *v4 + (int32_t)a1;
    int64_t v5 = (v2 & 134 | v3) + 0x80002d; // 0x2bcef5
    __asm_out(96, (char)v5);
    uint32_t v6 = *(int32_t *)(v5 & 0xffffffbf) + (int32_t)v5; // 0x2bcefc
    int64_t v7; // 0x2bcee3
    *(int32_t *)a1 = *(int32_t *)&v7;
    uint64_t v8 = a4 / 256 + (int64_t)v6; // 0x2bceff
    int64_t v9 = v8 % 256 | (int64_t)(v6 & -256); // 0x2bceff
    int64_t v10; // 0x2bcee3
    *(int32_t *)a3 = *(int32_t *)&v10 + (int32_t)v9;
    int32_t * v11 = (int32_t *)(v9 - 0x66e631c6); // 0x2bcf04
    *v11 = *v11 ^ -0x3dfe17e2;
    int64_t v12; // 0x2bcee3
    *(char *)a4 = *(char *)&v12 + (char)v8;
    *(int32_t *)0xc201e81e = *(int32_t *)0xc201e81e + (int32_t)v1;
    *(int32_t *)0x1901e8cb66869109 = (int32_t)a4;
    return a4 & 0xffffffff;
}

// Address range: 0x2bcf68 - 0x2bcf85
int64_t function_2bcf68(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bcf68
    unknown_60a0db71();
    int32_t * v1 = (int32_t *)(a3 + 0x20c11489); // 0x2bcf7b
    uint32_t v2 = *v1; // 0x2bcf7b
    int32_t v3 = v2 + ((int32_t)a1 & -256 | 232); // 0x2bcf7b
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x2bcf7b
    *v1 = v3;
    int64_t v5; // 0x2bcf68
    return v5 & 0xffff00ff | 256 * (16 * (int64_t)((v2 & 8) != 0) | (int64_t)(v3 < v2) | 64 * (int64_t)(v3 == 0) | 128 * (int64_t)(v3 < 0) | 4 * (int64_t)(v4 % 2 == 0)) | 512;
}

// Address range: 0x2bcf90 - 0x2bcf9d
int64_t function_2bcf90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bcf90
    return a4 & 0xffffffff;
}

// Address range: 0x2bcfad - 0x2bcfc2
int64_t function_2bcfad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2bcfad
    int64_t v1; // 0x2bcfad
    int64_t v2 = v1;
    bool v3; // 0x2bcfad
    *(char *)v2 = (char)v2 + (char)a4 + (char)v3;
    int64_t result = (v2 + 232) % 256 | v2 & -256; // 0x2bcfb5
    int32_t * v4 = (int32_t *)(result - 94); // 0x2bcfbe
    *v4 = *v4 + (int32_t)v1;
    return result;
}

// Address range: 0x2bd003 - 0x2bd01a
int64_t function_2bd003(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2bd003
    unknown_1de6dc0c();
    *(char *)(a4 + a1) = (char)(a3 / 256);
    return unknown_3df9d016();
}

// Address range: 0x2bd023 - 0x2bd06b
int64_t function_2bd023(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bd023
    bool v1; // 0x2bd023
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x2bd025
    int64_t v3; // 0x2bd023
    if ((int32_t)v3 < (int32_t)v3) {
        char * v4 = (char *)(v2 + 0x3d7f06c5); // 0x2bd064
        *v4 = *v4 ^ -13;
        return v3 & 0xffffffff;
    }
    char * v5 = (char *)(a4 + 0x14e7a638); // 0x2bd03a
    *v5 = *v5 | (char)(v3 / 256);
    char * v6 = (char *)(v3 + 118); // 0x2bd040
    *v6 = *v6 + (char)v3;
    unknown_ffffffff91332653(v2);
    __asm_in_134((int16_t)a3);
    int64_t v7; // 0x2bd023
    return (int64_t)&v7;
}

// Address range: 0x2bd093 - 0x2bd094
int64_t function_2bd093(int64_t a1) {
    // 0x2bd093
    int64_t result; // 0x2bd093
    return result;
}

// Address range: 0x2bd0c7 - 0x2bd0df
int64_t function_2bd0c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bd0c7
    int64_t v1; // 0x2bd0c7
    int64_t v2 = v1;
    return v2 & -256 | (int64_t)(*(char *)(v2 + 0x17b075f) | (char)v2);
}

// Address range: 0x2bd127 - 0x2bd19d
int64_t function_2bd127(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = unknown_3b16d97c(); // 0x2bd176
    uint64_t v2 = v1 + 132; // 0x2bd17b
    int64_t v3 = v2 % 256 | v1 & -256; // 0x2bd17f
    if ((char)v2 > -102) {
        int64_t v4; // 0x2bd127
        uint32_t v5 = (int32_t)v4; // 0x2bd16c
        int64_t v6; // 0x2bd127
        uint32_t v7 = v5 + (int32_t)v6; // 0x2bd16c
        int64_t v8 = v7; // 0x2bd16c
        char * v9 = (char *)(v6 + v8); // 0x2bd16f
        *v9 = *v9 - (char)(a3 / 256) + (char)(v7 < v5);
        *(int64_t *)v6 = v8;
        int64_t v10 = unknown_3b16d97c(); // 0x2bd176
        uint64_t v11 = v10 + 132; // 0x2bd17b
        // 0x2bd16a
        while ((char)v11 > 154) {
            // 0x2bd16a
            v5 = (int32_t)v8;
            v7 = v5 + (int32_t)v6;
            v8 = v7;
            v9 = (char *)(v6 + v8);
            *v9 = *v9 - (char)(a3 / 256) + (char)(v7 < v5);
            *(int64_t *)v6 = v8;
            v10 = unknown_3b16d97c();
            v11 = v10 + 132;
        }
        // 0x2bd176
        v3 = v11 % 256 | v10 & -256;
    }
    int32_t * v12 = (int32_t *)(v3 + 0x681d5c03); // 0x2bd182
    *v12 = *v12 + (int32_t)a3;
    int64_t result = unknown_c96f90(); // 0x2bd18a
    *(char *)0x1dbb7301e877053b = (char)result;
    return result;
}

// Address range: 0x2bd221 - 0x2bd223
int64_t function_2bd221(void) {
    // 0x2bd221
    return function_2bd26a();
}

// Address range: 0x2bd225 - 0x2bd226
int64_t function_2bd225(void) {
    // 0x2bd225
    int64_t result; // 0x2bd225
    return result;
}

// Address range: 0x2bd241 - 0x2bd267
int64_t function_2bd241(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2bd248
    int64_t v1; // 0x2bd241
    return v1 | 118;
}

// Address range: 0x2bd268 - 0x2bd26a
int64_t function_2bd268(int64_t a1, int64_t a2) {
    // 0x2bd268
    int64_t result; // 0x2bd268
    *(int32_t *)a2 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x2bd26a - 0x2bd26b
int64_t function_2bd26a(void) {
    // 0x2bd26a
    int64_t result; // 0x2bd26a
    return result;
}

// Address range: 0x2bd291 - 0x2bd2a0
int64_t function_2bd291(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4; // 0x2bd291
    int64_t v2; // 0x2bd291
    uint32_t v3 = *(int32_t *)(v2 - 42) + v1; // 0x2bd291
    __asm_out(78, (char)v2);
    int64_t result = unknown_ffffffffcf7fba9c(); // 0x2bd29b
    if (v3 >= v1 && v3 != 0) {
        result = function_2bd225();
    }
    // 0x2bd29d
    return result;
}

// Address range: 0x2bd2a5 - 0x2bd2aa
int64_t function_2bd2a5(void) {
    // 0x2bd2a5
    return function_ffffffffb03911a3();
}

// Address range: 0x2bd2b3 - 0x2bd2ba
int64_t function_2bd2b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bd2b3
    int64_t v1; // 0x2bd2b3
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a2;
    return function_2bd31a(a1, a2, a3, a4);
}

// Address range: 0x2bd2f8 - 0x2bd2fb
int64_t function_2bd2f8(void) {
    // 0x2bd2f8
    int64_t result; // 0x2bd2f8
    return result;
}

// Address range: 0x2bd311 - 0x2bd312
int64_t function_2bd311(void) {
    // 0x2bd311
    int64_t result; // 0x2bd311
    return result;
}

// Address range: 0x2bd31a - 0x2bd356
int64_t function_2bd31a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)0x40c46a24; // 0x2bd31c
    int64_t v2; // 0x2bd31a
    unsigned char v3 = (char)v2; // 0x2bd31c
    *(char *)0x40c46a24 = v1 + v3;
    __asm_in(-36);
    int64_t v4 = 0x100000000 * a4 >> 32; // 0x2bd332
    uint64_t v5 = 0x5e0013d * v4; // 0x2bd332
    bool v6; // 0x2bd31a
    int64_t v7 = 2048 * (int64_t)(v5 != 0x5e0013d00000000 * v4 >> 32) | 0x4000 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 16 * (int64_t)(v1 % 16 + v3 % 16 > 15) | 6; // bp-16, 0x2bd340
    char v8 = __asm_in_133(-112); // 0x2bd341
    char v9 = v5 / 256; // 0x2bd344
    unsigned char v10 = v8 | v9; // 0x2bd344
    int64_t result = (*(int64_t *)0xd014d40b2f9e77 | (int64_t)v8) & -256 | (int64_t)v10; // 0x2bd344
    int32_t * v11 = (int32_t *)(result + 26); // 0x2bd346
    *v11 = *v11 + (int32_t)(int64_t)&v7;
    int64_t v12; // 0x2bd31a
    *(char *)a1 = *(char *)&v12 + v10;
    char * v13 = (char *)result; // 0x2bd353
    *v13 = *v13 - v9 + (char)((int32_t)result < 0xd425ad01);
    return result;
}

// Address range: 0x2bd37f - 0x2bd39f
int64_t function_2bd37f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2bd37f
    int64_t v1; // 0x2bd37f
    char v2 = v1;
    *(char *)-0x17647be307330d5b = v2;
    char v3 = v2; // 0x2bd388
    int64_t v4; // 0x2bd37f
    bool v5; // 0x2bd37f
    if (a4 != 1 == v5) {
        int64_t v6 = function_2bd311(); // 0x2bd388
        v3 = v6;
        v4 = v6;
    }
    char v7 = *(char *)(v4 + 17); // 0x2bd38b
    *(char *)a2 = (v7 ^ (char)a3) + (char)a2;
    *(char *)a1 = v3;
    char v8 = *(char *)-0x99b568; // 0x2bd391
    *(char *)-0x99b568 = v8 + (char)((uint64_t)v1 / 256);
    return v4 & -256 | 48;
}

// Address range: 0x2bd3e8 - 0x2bd3eb
int64_t function_2bd3e8(int64_t a1) {
    // 0x2bd3e8
    int64_t result; // 0x2bd3e8
    return result;
}

// Address range: 0x2bd3f0 - 0x2bd484
int64_t function_2bd3f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2bd3f0
    __asm_in_133(-126);
    unknown_ffffffffdb33acf8();
    int64_t v1 = (int64_t)*(int32_t *)(2 * a1 - 40); // 0x2bd3f7
    unknown_82dd405();
    int64_t v2; // 0x2bd3f0
    bool v3; // 0x2bd3f0
    if (v3 == (0x72357003 * v1 != 0x7235700300000000 * v1 >> 32)) {
        // 0x2bd46f
        *(int32_t *)a1 = 0x80002d;
        int64_t result = unknown_ffffffffa82d367f((v3 ? -4 : 4) + a1); // 0x2bd479
        char * v4 = (char *)(a4 + 0x8cf5e00); // 0x2bd47e
        *v4 = *v4 + (char)v2;
        return result;
    }
    int64_t result2 = unknown_5316b710(); // 0x2bd40a
    *(char *)-0x1780050b = *(char *)-0x1780050b | (char)result2;
    int32_t * v5 = (int32_t *)(a1 - 113); // 0x2bd416
    *v5 = *v5 + (int32_t)v2;
    return result2;
}

// Address range: 0x2bd48e - 0x2bd491
int64_t function_2bd48e(void) {
    // 0x2bd48e
    int64_t result; // 0x2bd48e
    return result;
}

// Address range: 0x2bd492 - 0x2bd4c2
int64_t function_2bd492(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2bd492
    *(int32_t *)(uint64_t)unknown_44206d9f() = (int32_t)a5;
    return (int64_t)(*(int32_t *)(a2 + 58) * (int32_t)unknown_4bf486bd());
}

// Address range: 0x2bd4cc - 0x2bd4cf
int64_t function_2bd4cc(int64_t a1) {
    // 0x2bd4cc
    int64_t result; // 0x2bd4cc
    return result;
}

// Address range: 0x2bd50e - 0x2bd514
int64_t function_2bd50e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bd50e
    int64_t result; // 0x2bd50e
    return result;
}

// Address range: 0x2bd53d - 0x2bd546
int64_t function_2bd53d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2bd53d
    int64_t v1; // 0x2bd53d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 + 0x58804efa); // 0x2bd53f
    *v3 = *v3 + (int32_t)v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x2bd54e - 0x2bd553
int64_t function_2bd54e(void) {
    // 0x2bd54e
    return function_ffffffffe22ad73b();
}

// Address range: 0x2bd7a9 - 0x2bd835
int64_t function_2bd7a9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2bd7a9
    int64_t v1; // 0x2bd7a9
    int64_t v2 = v1;
    int64_t v3 = a3;
    uint64_t v4 = a4 / 256; // 0x2bd7a9
    bool v5; // 0x2bd7a9
    int64_t result2 = (v2 + v4 + (int64_t)v5) % 256 | v2 & -256; // 0x2bd7a9
    int32_t * v6 = (int32_t *)result2;
    uint32_t v7 = *v6; // 0x2bd7ab
    int32_t v8 = v7 + (int32_t)a4; // 0x2bd7ab
    *v6 = v8;
    if (v8 < v7) {
        int32_t * v9 = v6; // 0x2bd7af
        int32_t v10 = v8; // 0x2bd7af
        int64_t result = result2; // 0x2bd7af
        if (a4 != 1 && v8 != 0) {
            result = function_2bd7a4();
            v9 = (int32_t *)result;
            v10 = *v9;
        }
        // 0x2bd7b1
        *v9 = v10 + (int32_t)result;
        return result;
    }
    char * v11 = (char *)result2; // 0x2bd82d
    *v11 = (char)v4;
    if ((256 * (int64_t)*v11 || a4 & -0xff01) != 1 != (v8 == 0)) {
        // 0x2bd831
        *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a2;
        return result2;
    }
    int64_t result3 = unknown_ffffffff8e4ca0ab(); // 0x2bd7da
    *(char *)-0x21bdf914 = *(char *)-0x21bdf914 + (char)v1;
    char * v12 = (char *)(v3 + 14); // 0x2bd7f7
    *v12 = *v12 + (char)(v1 / 256);
    return result3;
}

// Address range: 0x2bd885 - 0x2bd886
int64_t function_2bd885(int64_t a1) {
    // 0x2bd885
    int64_t result; // 0x2bd885
    return result;
}

// Address range: 0x2bd8d3 - 0x2bd8d4
int64_t function_2bd8d3(void) {
    // 0x2bd8d3
    int64_t result; // 0x2bd8d3
    return result;
}

// Address range: 0x2bd8f0 - 0x2bd8f1
int64_t function_2bd8f0(void) {
    // 0x2bd8f0
    int64_t result; // 0x2bd8f0
    return result;
}

// Address range: 0x2bd900 - 0x2bd902
int64_t function_2bd900(void) {
    // 0x2bd900
    return function_2bd8d3();
}

// Address range: 0x2bd964 - 0x2bd966
int64_t function_2bd964(void) {
    // 0x2bd964
    return function_2bd8f0();
}

// Address range: 0x2bd96e - 0x2bd974
int64_t function_2bd96e(void) {
    // 0x2bd96e
    int64_t result; // 0x2bd96e
    return result;
}

// Address range: 0x2bd983 - 0x2bd98e
int64_t function_2bd983(void) {
    // 0x2bd983
    return function_ffffffff91bcde10();
}

// Address range: 0x2bda9b - 0x2bdaa1
int64_t function_2bda9b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2bda9b
    int64_t v1; // 0x2bda9b
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_ffffffffbe2dc31d();
}

// Address range: 0x2bdabe - 0x2bdacd
int64_t function_2bdabe(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2bdabe
    int64_t v1; // 0x2bdabe
    uint64_t v2 = v1;
    int64_t v3 = v2 & -256 | a4 / 256 % 256; // 0x2bdabe
    int32_t * v4 = (int32_t *)(v3 + 2); // 0x2bdac0
    *v4 = *v4 + (int32_t)v3;
    char v5 = *(char *)(a4 + 41); // 0x2bdac3
    float80_t v6; // 0x2bdabe
    *(int32_t *)(a2 - 0x42c6fe18) = (int32_t)v6;
    return 256 * (int64_t)(v5 ^ (char)(v2 / 256)) | v3 & -0xff01;
}

// Address range: 0x2bdad0 - 0x2bdb4b
int64_t function_2bdad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2bdad0
    int64_t v1; // 0x2bdad0
    char * v2 = (char *)(v1 - 0xbd74451); // 0x2bdad7
    bool v3; // 0x2bdad0
    *v2 = 128 * (char)v3 | *v2 / 2;
    uint32_t v4 = (int32_t)a4 % 32; // 0x2bdb42
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)(v1 + 10); // 0x2bdb42
        *v5 = *v5 >> v4;
    }
    return __asm_sti(0xac6e01e8);
}

// Address range: 0x2bdb5c - 0x2bdb5d
int64_t function_2bdb5c(void) {
    // 0x2bdb5c
    int64_t result; // 0x2bdb5c
    return result;
}

// Address range: 0x2bdb67 - 0x2bdb7b
int64_t function_2bdb67(void) {
    // 0x2bdb67
    function_2bdb5c();
    int64_t v1; // 0x2bdb67
    __asm_sti(v1);
    return unknown_ffffffffb4b91579();
}

// Address range: 0x2df70e - 0x2df72c
int64_t function_2df70e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x2df712
    if (v1 != 0) {
        bool v2; // 0x2df70e
        *(int32_t *)a5 = (int32_t)a5 << v1 | (int32_t)((a5 & 0xffffffff) >> (int64_t)(33 - v1)) | (int32_t)(bool)v2 << v1 - 1;
    }
    return unknown_ffffffffefb6941b();
}

// Address range: 0x2df733 - 0x2df781
int64_t function_2df733(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2df733
    int64_t v1; // 0x2df733
    int64_t v2 = v1;
    bool v3; // 0x2df733
    if ((int16_t)v2 < 0 == v3) {
        // 0x2df773
        return (v2 + 227) % 256 | v2 & -256;
    }
    // 0x2df736
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t result = v2 ^ 58; // 0x2df738
    __asm_out(-37, (char)result);
    return result;
}

// Address range: 0x2df795 - 0x2df798
int64_t function_2df795(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2df795
    int64_t result; // 0x2df795
    return result;
}

// Address range: 0x2df7d6 - 0x2df7d8
int64_t function_2df7d6(void) {
    // 0x2df7d6
    int64_t v1; // 0x2df7d6
    return function_2df840(v1, v1, v1, v1);
}

// Address range: 0x2df80d - 0x2df827
int64_t function_2df80d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2df80d
    int64_t v1; // 0x2df80d
    uint64_t v2 = v1;
    return v2 / 2 % 128 | v2 & -256;
}

// Address range: 0x2df840 - 0x2df86f
int64_t function_2df840(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2df840
    int64_t v1; // 0x2df840
    *(char *)a2 = (char)v1 + (char)(a4 / 256);
    int64_t v2 = __asm_sti(a1); // 0x2df856
    *(int64_t *)0x3ae5a914 = 0x3ae5a91c;
    char * v3 = (char *)v2; // 0x2df85e
    unsigned char v4 = (char)v2; // 0x2df85e
    char v5 = *v3 + v4; // 0x2df85e
    *v3 = v5;
    unsigned char v6 = v5 + v4; // 0x2df862
    char * v7 = (char *)(a4 - 84 + (v2 & -256 | (int64_t)v6)); // 0x2df864
    *v7 = *v7 + 18 + (char)(v6 < v4);
    *(int64_t *)0x3ae5a904 = -0x299ed100;
    return __asm_iretd();
}

// Address range: 0x2df876 - 0x2df878
int64_t function_2df876(void) {
    // 0x2df876
    int64_t result; // 0x2df876
    return result;
}

// Address range: 0x2df878 - 0x2df886
int64_t function_2df878(int64_t a1, int64_t a2) {
    int64_t result = unknown_16af87e(a1, a2); // 0x2df878
    *(char *)a1 = (char)result;
    char * v1 = (char *)(a2 + 0x5d2f1e1b); // 0x2df87e
    int64_t v2; // 0x2df878
    *v1 = *v1 + (char)v2;
    return result;
}

// Address range: 0x2df892 - 0x2df893
int64_t function_2df892(void) {
    // 0x2df892
    int64_t result; // 0x2df892
    return result;
}

// Address range: 0x2df89d - 0x2df8a3
int64_t function_2df89d(void) {
    // 0x2df89d
    return function_ffffffffff4a97f7();
}

// Address range: 0x2df8b4 - 0x2df8b9
int64_t function_2df8b4(void) {
    // 0x2df8b4
    return function_2164013();
}

// Address range: 0x2df8df - 0x2df980
int64_t function_2df8df(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 34); // 0x2df8df
    unsigned char v2 = *v1; // 0x2df8df
    *v1 = v2 / 2 | 128 * v2;
    int64_t v3; // 0x2df8df
    bool v4; // 0x2df8df
    if (a4 != 1 && !v4) {
        v3 = function_2df892();
    }
    int64_t v5 = v3;
    int64_t v6; // 0x2df8df
    char * v7 = (char *)(v6 - 98); // 0x2df8f1
    *v7 = *v7 + (char)v6;
    int64_t v8 = ((v5 + 145) % 256 | v5 & 0xffffff00) ^ 0x55cb0068; // 0x2df8f9
    int32_t v9 = *(int32_t *)v8 & (int32_t)v8; // 0x2df8fe
    unsigned char v10 = (char)v9 & -114; // 0x2df900
    if (llvm_ctpop_i8(v10) % 2 != 0) {
        // 0x2df97b
        return unknown_54bc6581();
    }
    // 0x2df904
    return (int64_t)v10 | (int64_t)(v9 & -256);
}

// Address range: 0x2df982 - 0x2df9b0
int64_t function_2df982(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2df982
    unknown_ffffffff88ad9e8a();
    int32_t * v1 = (int32_t *)unknown_ffffffffdc3aea95(); // 0x2df99b
    int64_t v2; // 0x2df982
    *v1 = *v1 + (int32_t)v2;
    int64_t result = unknown_3a37c9ad(); // 0x2df9a7
    __asm_out_135(80, (int32_t)result);
    return result;
}

// Address range: 0x2df9d7 - 0x2df9da
int64_t function_2df9d7(int64_t a1) {
    // 0x2df9d7
    int64_t result; // 0x2df9d7
    return result;
}

// Address range: 0x2dfa0b - 0x2dfa0d
int64_t function_2dfa0b(int64_t a1) {
    // 0x2dfa0b
    int64_t result; // 0x2dfa0b
    return result;
}

// Address range: 0x2dfa67 - 0x2dfa78
int64_t function_2dfa67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2dfa67
    return unknown_4bb4f576(a1, a2, a3, a4, a5);
}

// Address range: 0x2dfa7a - 0x2dfa82
int64_t function_2dfa7a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2dfa7a
    int64_t v1; // 0x2dfa7a
    bool v2; // 0x2dfa7a
    *(char *)(a3 & 0xffffffff) = (char)v1 - (char)((uint64_t)v1 / 256) + (char)v2;
    return function_ffffffffef2fe372();
}

// Address range: 0x2dfa83 - 0x2dfa86
int64_t function_2dfa83(void) {
    // 0x2dfa83
    int64_t v1; // 0x2dfa83
    bool v2; // 0x2dfa83
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x2dfaab - 0x2dfab0
int64_t function_2dfaab(void) {
    // 0x2dfaab
    return function_61bfc98();
}

// Address range: 0x2dfbac - 0x2dfbd0
int64_t function_2dfbac(int64_t a1, int64_t a2) {
    // 0x2dfbac
    int64_t result; // 0x2dfbac
    *(char *)0x200d4fa01e8ec38 = (char)result;
    return result;
}

// Address range: 0x2dfc62 - 0x2dfc6c
int64_t function_2dfc62(void) {
    // 0x2dfc62
    int64_t v1; // 0x2dfc62
    int32_t * v2 = (int32_t *)(v1 + 10); // 0x2dfc62
    *v2 = *v2 + (int32_t)v1;
    return function_ffffffff8ef3fd37();
}

// Address range: 0x2dfc72 - 0x2dfc73
int64_t function_2dfc72(void) {
    // 0x2dfc72
    int64_t result; // 0x2dfc72
    return result;
}

// Address range: 0x2dfc75 - 0x2dfc76
int64_t function_2dfc75(void) {
    // 0x2dfc75
    int64_t result; // 0x2dfc75
    return result;
}

// Address range: 0x2dfc78 - 0x2dfd09
int64_t function_2dfc78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a5;
    unknown_666ff2();
    int64_t v3 = unknown_ffffffff8be3da83(); // 0x2dfc7d
    uint32_t v4 = (int32_t)a3;
    int32_t v5 = v4 + 40; // 0x2dfc82
    int64_t v6 = 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v4 < 0xffffffd8) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v4 % 16 > 23) | 4 * (int64_t)(llvm_ctpop_i8((char)v5) % 2 == 0)) | v3 & -0xff01 | 512; // 0x2dfc85
    int32_t v7 = *(int32_t *)v6 + (int32_t)(v4 < 0xffffffd8) + (int32_t)v6; // 0x2dfc86
    if (v7 >= 0) {
        int64_t v8 = v7; // 0x2dfc8b
        if (a4 != 1 && v7 != 0) {
            v8 = function_2dfc75();
        }
        uint64_t v9 = v8;
        return (v9 / 256 + v9) % 256 | v9 & -256;
    }
    int64_t v10 = __asm_int3() + (a3 & 0xffffff00); // 0x2dfccb
    unknown_46056890();
    int64_t v11 = a2 & 0xffffffff; // 0x2dfcd2
    bool v12; // 0x2dfc78
    int64_t v13 = v12 ? -4 : 4; // 0x2dfcd2
    int64_t v14 = v13 + a2; // 0x2dfcd2
    v1 = v14;
    int32_t * v15 = (int32_t *)(v14 - 0x172d7d44); // 0x2dfcd4
    uint32_t v16 = *v15; // 0x2dfcd4
    int64_t v17; // 0x2dfc78
    *v15 = *(int32_t *)(v17 + 121);
    int32_t * v18 = (int32_t *)((int64_t)v16 + 126); // 0x2dfcda
    *v18 = *v18 + (int32_t)a5;
    int32_t * v19 = (int32_t *)v11; // 0x2dfcdd
    *v19 = *(int32_t *)&v1 - (int32_t)a2;
    uint32_t v20 = 0x10000 * (int32_t)a1 >> 16; // 0x2dfce0
    int64_t v21 = v20; // 0x2dfce0
    v2 = v21;
    char * v22 = (char *)(v11 + 41); // 0x2dfce2
    unsigned char v23 = *v22; // 0x2dfce2
    unsigned char v24 = (char)(v20 / 256); // 0x2dfce2
    unsigned char v25 = v23 + v24; // 0x2dfce2
    *v22 = v25;
    char v26 = v25 < v23; // 0x2dfce5
    unsigned char v27 = *(char *)((v10 & 0xffffffff) + 0x1d01e89c) + v26; // 0x2dfce5
    unsigned char v28 = v24 - v27; // 0x2dfce5
    *v19 = __asm_insd((int16_t)v10);
    if (v25 < v23 ? v27 != -1 || v28 - v26 > v24 : v27 > v24) {
        // 0x2dfd70
        return 256 * (int64_t)v28 | v21 & 0xffff00ff;
    }
    // 0x2dfcf4
    *(char *)v11 = (char)(int64_t)&v2;
    int64_t v29 = (v12 ? -1 : 1) + v11; // 0x2dfcf5
    int64_t v30 = v1 + v13; // 0x2dfcf6
    int64_t v31 = unknown_3d2fe4fd(v29, v30); // 0x2dfcf7
    int32_t * v32 = (int32_t *)(v30 + 70); // 0x2dfcfc
    uint32_t v33 = *v32; // 0x2dfcfc
    uint32_t v34 = v33 + v16; // 0x2dfcfc
    *v32 = v34;
    int32_t * v35 = (int32_t *)(2 * v17 - 0x5f627e8c); // 0x2dfd01
    *v35 = *v35 + (int32_t)v29;
    return (v31 + a5 / 256 + (int64_t)(v34 < v33)) % 256 | v31 & -256;
}

// Address range: 0x2dff0e - 0x2dff37
int64_t function_2dff0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = unknown_5abea315(); // 0x2dff0e
    int64_t v2 = (v1 + 133) % 256 | v1 & -256; // 0x2dff19
    int64_t v3; // 0x2dff0e
    char * v4 = (char *)(8 * v3 + 0x4a0b8e01 + v2); // 0x2dff1c
    *v4 = (char)(v1 / 256);
    int32_t * v5 = (int32_t *)((v2 & -0xff01 | 256 * (int64_t)*v4) + 0x6c7bbe14); // 0x2dff23
    uint32_t v6 = *v5; // 0x2dff23
    uint32_t v7 = (char)v1 < 123 ? -80 : -81; // 0x2dff23
    *v5 = v6 - v7;
    int64_t v8; // 0x2dff0e
    char v9 = *(char *)&v8; // 0x2dff2a
    *(char *)a2 = v9 + 88 + (char)((char)v1 < 123 | v6 < v7);
    bool v10; // 0x2dff0e
    int64_t v11 = v10 ? -1 : 1; // 0x2dff2c
    int64_t v12 = unknown_ffffffffcbe55333(v11 + a1, v11 + a2); // 0x2dff2d
    char * v13 = (char *)v12; // 0x2dff32
    *v13 = *v13 + (char)a4;
    return v12 | 58;
}

// Address range: 0x2dff38 - 0x2dff39
int64_t function_2dff38(int64_t a1) {
    // 0x2dff38
    int64_t result; // 0x2dff38
    return result;
}

// Address range: 0x2dff4d - 0x2dff4f
int64_t function_2dff4d(void) {
    // 0x2dff4d
    int64_t v1; // 0x2dff4d
    return v1 & 0xffffffff;
}

// Address range: 0x2dff65 - 0x2dff71
int64_t function_2dff65(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2dff65
    return unknown_3a375f6f(a1, a2, a3, a4, a5);
}

// Address range: 0x2dff9a - 0x2dff9b
int64_t function_2dff9a(void) {
    // 0x2dff9a
    int64_t result; // 0x2dff9a
    return result;
}

// Address range: 0x2dffda - 0x2dffdc
int64_t function_2dffda(void) {
    // 0x2dffda
    return function_2dff9a();
}

// Address range: 0x2dffe1 - 0x2dffe3
int64_t function_2dffe1(void) {
    // 0x2dffe1
    int64_t result; // 0x2dffe1
    return result;
}

// Address range: 0x2dfff3 - 0x2dfff4
int64_t function_2dfff3(void) {
    // 0x2dfff3
    int64_t result; // 0x2dfff3
    return result;
}

// Address range: 0x2e0019 - 0x2e001c
int64_t function_2e0019(int64_t a1, int64_t a2) {
    // 0x2e0019
    int64_t v1; // 0x2e0019
    bool v2; // 0x2e0019
    return function_2e002f(a1, (v2 ? -1 : 1) + a2, v1, v1, (int64_t)&g1);
}

// Address range: 0x2e001c - 0x2e002f
int64_t function_2e001c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x4ab6519); // 0x2e0024
    *v1 = *v1 + (int32_t)a2;
    int64_t v2; // 0x2e001c
    return v2 | 232;
}

// Address range: 0x2e002f - 0x2e00a2
int64_t function_2e002f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2e002f
    int64_t v1; // 0x2e002f
    bool v2; // 0x2e002f
    char v3 = *(char *)(v1 - 24); // 0x2e0069
    int32_t v4 = a1; // 0x2e006e
    *(int32_t *)-0x297d5d8b = *(int32_t *)-0x297d5d8b + v4;
    int32_t v5 = *(int32_t *)((256 * (int64_t)((char)v2 + (char)(a3 / 256) + v3) | a3 & -0xff01) + 0x3a82f440); // 0x2e0074
    uint32_t v6 = v5 | v4; // 0x2e0074
    int64_t v7 = v6; // 0x2e0074
    unknown_889fc80(v6);
    unknown_ffffffffc36b518d();
    int32_t * v8 = (int32_t *)v7; // 0x2e0093
    *v8 = *v8 + (int32_t)v1;
    unknown_3a33c196((v2 ? -1 : 1) + v7);
    return unknown_ffffffffe7c0eca1() & -256 | (int64_t)__asm_in_133(-36);
}

// Address range: 0x2e00a3 - 0x2e00cb
int64_t function_2e00a3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e00a3
    int64_t v1; // 0x2e00a3
    *(char *)a1 = (char)v1;
    bool v2; // 0x2e00a3
    int64_t v3 = (v2 ? -1 : 1) + a1; // 0x2e00a5
    int64_t v4 = unknown_ffffffffe884feac(v3) + 0x20945206; // 0x2e00ab
    int32_t v5 = v4; // 0x2e00b0
    __asm_out_135(-72, v5);
    *(int32_t *)-0x5b38ffecf234fe18 = v5;
    int64_t v6 = v4 & 0xffff00ff; // 0x2e00bb
    __asm_int(-24);
    int32_t * v7 = (int32_t *)(v6 | 256 * a3 & 0xff00); // 0x2e00bf
    uint32_t v8 = *v7; // 0x2e00bf
    uint32_t v9 = v8 + (int32_t)a4; // 0x2e00bf
    *v7 = v9;
    char * v10 = (char *)v3; // 0x2e00c1
    unsigned char v11 = *v10; // 0x2e00c1
    char v12 = v9 < v8; // 0x2e00c1
    unsigned char v13 = v12 + (char)v1; // 0x2e00c1
    char v14 = v11 - v13; // 0x2e00c1
    bool v15 = v9 < v8 ? v13 != -1 | v11 < v14 - v12 : v11 < v13; // 0x2e00c1
    unsigned char v16 = llvm_ctpop_i8(v14); // 0x2e00c1
    *v10 = v14;
    return v6 | 256 * (128 * (int64_t)(v14 < 0) | 64 * (int64_t)(v14 == 0) | 16 * (int64_t)(v11 % 16 + v12 - v13 % 16 > 15) | (int64_t)v15 | 4 * (int64_t)(v16 % 2 == 0)) | 512;
}

// Address range: 0x2e00cc - 0x2e00db
int64_t function_2e00cc(int64_t a1, int64_t a2) {
    // 0x2e00cc
    int64_t v1; // 0x2e00cc
    *(char *)a1 = *(char *)(v1 + a2 & 0xffffffff);
    return v1 & -256 | (int64_t)*(char *)0x10c87d9d01e8ec00;
}

// Address range: 0x2e0208 - 0x2e0209
int64_t function_2e0208(void) {
    // 0x2e0208
    int64_t result; // 0x2e0208
    return result;
}

// Address range: 0x2e0226 - 0x2e022b
int64_t function_2e0226(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e0226
    return function_2e0208();
}

// Address range: 0x2e0237 - 0x2e0238
int64_t function_2e0237(void) {
    // 0x2e0237
    int64_t result; // 0x2e0237
    return result;
}

// Address range: 0x2e0276 - 0x2e0277
int64_t function_2e0276(void) {
    // 0x2e0276
    int64_t result; // 0x2e0276
    return result;
}

// Address range: 0x2e028e - 0x2e02c3
int64_t function_2e028e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2e028e
    int64_t v1; // 0x2e028e
    int64_t result = v1 & -256 | (int64_t)*(char *)0x5f9a1720c5e4592c; // 0x2e0297
    bool v2; // 0x2e028e
    if (v2 || false) {
        result = function_2e0276();
    }
    uint32_t v3 = (int32_t)a3;
    uint32_t v4 = (int32_t)v1 + v3; // 0x2e0299
    uint32_t v5 = v4 + (int32_t)v2; // 0x2e0299
    bool v6 = v2 ? v5 <= v3 : v4 < v3; // 0x2e0299
    *(int32_t *)a3 = v5;
    int32_t v7 = *(int32_t *)(v1 - 37); // 0x2e029b
    int64_t v8 = (int32_t)v6 + (int32_t)a2 + v7; // 0x2e029b
    char * v9 = (char *)v8; // 0x2e029e
    *v9 = -1 - *v9;
    uint32_t v10 = (int32_t)a1; // 0x2e02a0
    uint32_t v11 = *(int32_t *)(v1 + 0x13dabb3); // 0x2e02a0
    char * v12 = (char *)(result - 0x1def0cf3 + v8); // 0x2e02a6
    *v12 = *v12 - (char)(a3 / 256) + (char)(v11 > v10);
    uint32_t v13 = (int32_t)a4 % 32; // 0x2e02b2
    if (v13 != 0) {
        uint32_t v14 = *(int32_t *)0x2ad25ef; // 0x2e02b2
        *(int32_t *)0x2ad25ef = v14 >> 32 - v13 | v14 << v13;
    }
    char * v15 = (char *)((int64_t)(v10 - v11) - 103); // 0x2e02bd
    *v15 = *v15 - 91;
    return result;
}

// Address range: 0x2e02c3 - 0x2e02ca
int64_t function_2e02c3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e02c3
    int64_t result; // 0x2e02c3
    return result;
}

// Address range: 0x2e040e - 0x2e0418
int64_t function_2e040e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e040e
    int64_t v1; // 0x2e040e
    uint64_t result = v1;
    char * v2 = (char *)(a4 - 0x4a8cfe18); // 0x2e0411
    bool v3; // 0x2e040e
    *v2 = (char)v3 - (char)(result / 256) + *v2;
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x2e0452 - 0x2e0457
int64_t function_2e0452(void) {
    // 0x2e0452
    return function_971de7d();
}

// Address range: 0x2e048d - 0x2e048e
int64_t function_2e048d(int64_t a1) {
    // 0x2e048d
    int64_t result; // 0x2e048d
    return result;
}

// Address range: 0x2e04db - 0x2e04e1
int64_t function_2e04db(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e04db
    int64_t result; // 0x2e04db
    *(char *)a3 = 2 * (char)result;
    return result;
}

// Address range: 0x2e04fe - 0x2e0500
int64_t function_2e04fe(void) {
    // 0x2e04fe
    int64_t v1; // 0x2e04fe
    return function_2e050f(v1, v1, v1, v1);
}

// Address range: 0x2e0500 - 0x2e050f
int64_t function_2e0500(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e0500
    int64_t v1; // 0x2e0500
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x2e0500
    int64_t v3 = v2;
    *(char *)v3 = *(char *)&v2 + (char)v3;
    int64_t v4 = v2;
    *(char *)-0x6411d8f2 = *(char *)-0x6411d8f2 + (char)(v1 / 256);
    int64_t v5; // 0x2e0500
    *(int32_t *)a4 = *(int32_t *)&v5 | (int32_t)a4;
    return 2 * v4 & 254 | v4 & -256;
}

// Address range: 0x2e050f - 0x2e0540
int64_t function_2e050f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e050f
    int64_t v1; // 0x2e050f
    *(int32_t *)a4 = (int32_t)(v1 ^ v1);
    char * v2 = (char *)((v1 + 0x5e673f76 & 0xffffffff) - 0x7ffe1702); // 0x2e051a
    char v3 = (uint64_t)v1 / 256; // 0x2e051a
    *v2 = *v2 + v3;
    int64_t v4 = v1 + 0x3f673e39; // 0x2e0521
    __asm_out(-42, (char)v4);
    int32_t v5 = v4; // 0x2e0538
    __asm_out_136((int16_t)(v5 >> 31), v5);
    *(char *)0x312efc41 = *(char *)0x312efc41 + v3;
    return v4 & 0xffffffff;
}

// Address range: 0x2e0543 - 0x2e0545
int64_t function_2e0543(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e0543
    int64_t result; // 0x2e0543
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x2e0548 - 0x2e055c
int64_t function_2e0548(int64_t a1, int64_t a2) {
    // 0x2e0548
    int64_t v1; // 0x2e0548
    int64_t result = v1;
    *(char *)result = (char)result + 1;
    return result;
}

// Address range: 0x2e0576 - 0x2e0579
int64_t function_2e0576(int64_t a1) {
    // 0x2e0576
    int64_t result; // 0x2e0576
    return result;
}

// Address range: 0x2e066b - 0x2e0678
int64_t function_2e066b(int64_t a1) {
    // 0x2e066b
    int64_t result; // 0x2e066b
    return result;
}

// Address range: 0x2e0679 - 0x2e067a
int64_t function_2e0679(void) {
    // 0x2e0679
    int64_t result; // 0x2e0679
    return result;
}

// Address range: 0x2e067c - 0x2e0683
int64_t function_2e067c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 0x1e8e0e0); // 0x2e067c
    *v1 = 2 * *v1;
    int64_t result; // 0x2e067c
    return result;
}

// Address range: 0x2e06bf - 0x2e06c0
int64_t function_2e06bf(void) {
    // 0x2e06bf
    int64_t result; // 0x2e06bf
    return result;
}

// Address range: 0x2e06e8 - 0x2e0702
int64_t function_2e06e8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffff805effee(); // 0x2e06e8
    if (a4 != 1) {
        // 0x2e0768
        return result;
    }
    // 0x2e06ef
    if ((char)(unknown_ffffffffcc0285fd() / 256) + (char)(a3 / 256) < 1) {
        function_2e06bf();
    }
    // 0x2e0700
    return __asm_sti(a1);
}
