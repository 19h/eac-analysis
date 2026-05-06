/*
 * Targeted RetDec C for native executable gap queue batch 1460.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1a303d-0x1a323d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a323d-0x1a343d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a343d-0x1a363d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a363d-0x1a383d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a383d-0x1a3a3d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a3a3d-0x1a3c3d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a3c3d-0x1a3e3d rank=- name=- kind=- bytes=- uncovered=-
 *   0x1a3e3d-0x1a3e94 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e219b-0x2e239b rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e239b-0x2e259b rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e259b-0x2e279b rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e279b-0x2e299b rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e299b-0x2e2b9b rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e2b9b-0x2e2d9b rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e2d9b-0x2e2f9b rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e2f9b-0x2e2fee rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1a303d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a308c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a3206(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a337c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1a34bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a35fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a3744(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a38c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1a3a07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a3b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1a3cd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21626b1();
int64_t function_25278481();
int64_t function_2e219b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e21c8(int64_t a1);
int64_t function_2e21f8(int64_t a1, int64_t a2);
int64_t function_2e2222(void);
int64_t function_2e222d(void);
int64_t function_2e2238(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e226d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e22f5(int64_t a1);
int64_t function_2e2317(int64_t a1);
int64_t function_2e2364(void);
int64_t function_2e23ca(void);
int64_t function_2e2409(int64_t a1);
int64_t function_2e244a(void);
int64_t function_2e24b2(void);
int64_t function_2e25ce(void);
int64_t function_2e2604(void);
int64_t function_2e260d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2e263d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e269a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2e26ed(int64_t a1);
int64_t function_2e26f5(void);
int64_t function_2e27a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e281e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2e299f(void);
int64_t function_2e29b4(void);
int64_t function_2e29ba(void);
int64_t function_2e29be(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e29d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e2add(void);
int64_t function_2e2b02(void);
int64_t function_2e2b28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e2b3b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e2b45(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e2bb4(void);
int64_t function_2e2bb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e2bce(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e2bdd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e2c05(int64_t a1);
int64_t function_2e2c39(void);
int64_t function_2e2c4d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e2c5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e2d6c(int64_t a1);
int64_t function_2e2d78(void);
int64_t function_2e2d96(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2e2de2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e2ee4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e2f1b(int64_t a1, int64_t a2);
int64_t function_2e2f40(void);
int64_t function_2e2f51(void);
int64_t function_2e2fc3(void);
int64_t function_39f822cb();
int64_t function_c57b8();
int64_t function_d9e2d8();
int64_t function_ffffffff897a26ef();
int64_t function_ffffffffafcb55ed();
int64_t function_ffffffffb44bc164();
int64_t unknown_2839070a();
int64_t unknown_2e8b6844();
int64_t unknown_3c268b11();
int64_t unknown_3e00a3a8();
int64_t unknown_4346fba5();
int64_t unknown_45896747();
int64_t unknown_7be16004();
int64_t unknown_af135d1();
int64_t unknown_ffffffff802f6c57();
int64_t unknown_ffffffff92119f7b();
int64_t unknown_ffffffff9528cb4c();
int64_t unknown_ffffffff9d5eb2d6();
int64_t unknown_ffffffff9dd3be44();
int64_t unknown_ffffffff9e13e5ec();
int64_t unknown_ffffffffa07e2bfb();
int64_t unknown_ffffffffa10ac421();
int64_t unknown_ffffffffaa57e508();
int64_t unknown_ffffffffb18fadf0();
int64_t unknown_ffffffffb62b6ee7();
int64_t unknown_ffffffffd2f56abb();
int64_t unknown_ffffffffe3f2db26();
int64_t unknown_ffffffffec384fbc();
int64_t unknown_fffffffff0d410c8();
int64_t unknown_fffffffff826835b();

// Address range: 0x1a303d - 0x1a308c
int64_t function_1a303d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a303d
    int64_t v1; // 0x1a303d
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x1a303d
    return function_c57b8(a1, a2, a3, a4, v2, v2, a5);
}

// Address range: 0x1a308c - 0x1a3206
int64_t function_1a308c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5; // bp-40, 0x1a311e
    int64_t v2 = (int64_t)&v1; // 0x1a314a
    int64_t * v3 = (int64_t *)(v2 + 24); // 0x1a3162
    int64_t v4 = *v3; // 0x1a3162
    v1 = v4;
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x1a3166
    int64_t v6 = v2 + 8; // 0x1a3179
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x1a318a
    *v5 = a5;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x1a3194
    *v8 = *v7;
    *(int64_t *)v6 = *v5;
    *v5 = 0x42b6bbaa;
    *v8 = v4;
    *v3 = *v5;
    *v5 = a1;
    *v5 = v6;
    *v5 = v1;
    *v7 = v1;
    int64_t v9; // 0x1a308c
    return function_c57b8(*v5, a2, a3, a4, v9, v9, 0x7c2e5ad3);
}

// Address range: 0x1a3206 - 0x1a337c
int64_t function_1a3206(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a3206
    int64_t v1; // bp-56, 0x1a3206
    v1 = (int64_t)&v1;
    int64_t v2; // bp-40, 0x1a3206
    int64_t v3 = (int64_t)&v2; // 0x1a3317
    v2 = a2;
    *(int64_t *)(v3 - 8) = v3 + 16;
    *(int64_t *)(v3 + 8) = v3 + 24;
    int64_t v4; // 0x1a3206
    bool v5; // 0x1a3206
    return function_c57b8(a1, v2, a3, a4, a5, v4, 0x4000 * (int64_t)v5 | 2048 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5 | 128 * (int64_t)v5 | 64 * (int64_t)v5 | 16 * (int64_t)v5 | (int64_t)v5 | 4 * (int64_t)v5 | 2);
}

// Address range: 0x1a337c - 0x1a34bc
int64_t function_1a337c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a337c
    int64_t v1; // 0x1a337c
    int64_t v2 = v1;
    *(int64_t *)(v2 - 8) = 0x5c117724;
    int64_t v3 = v2 - 16; // 0x1a3405
    int64_t * v4 = (int64_t *)v3; // 0x1a340e
    int64_t v5 = *(int64_t *)(v2 + 24); // 0x1a3411
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x1a3415
    *v6 = v5;
    *(int64_t *)(v2 - 32) = v5;
    *(int64_t *)v2 = v5;
    *(int64_t *)(v2 + 16) = *(int64_t *)(v2 + 8);
    *v4 = 0x47738814;
    *v6 = v3;
    *v4 = a3;
    *v6 = v3;
    int64_t v7; // bp-32, 0x1a337c
    return function_c57b8(a1, a2, *v4, *v4, v1, v1, (int64_t)&v7);
}

// Address range: 0x1a34bc - 0x1a35fd
int64_t function_1a34bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a34bc
    int64_t v1; // 0x1a34bc
    return function_c57b8(a1, a2, a3, 0x3140c0f6, a5, v1, v1);
}

// Address range: 0x1a35fd - 0x1a3744
int64_t function_1a35fd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a35fd
    bool v1; // 0x1a35fd
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x1a35fd
    int64_t v3 = 0x685e656a; // bp-40, 0x1a3666
    int64_t v4 = (int64_t)&v3; // 0x1a3697
    int64_t v5 = *(int64_t *)(v4 + 16); // 0x1a369f
    int64_t v6 = v4 - 8; // 0x1a369f
    int64_t * v7 = (int64_t *)v6; // 0x1a369f
    *v7 = v5;
    int64_t * v8 = (int64_t *)(v4 - 16); // 0x1a36a3
    int64_t * v9 = (int64_t *)(v4 - 24); // 0x1a36a6
    *v8 = 0x66fb9e02;
    *v9 = v2;
    int64_t v10 = v4 + 8; // 0x1a36c2
    *(int64_t *)v10 = *v7;
    *v8 = v5;
    *(int64_t *)(v4 + 32) = v5;
    int64_t v11 = *v7; // 0x1a36d6
    *v8 = v11;
    *v7 = v3;
    *v8 = v11;
    *v9 = a3;
    *(int64_t *)(v4 - 32) = v2;
    *v8 = v6;
    *v7 = v10;
    return function_c57b8(a1, a2, *v9, a4, a5, a6, v3);
}

// Address range: 0x1a3744 - 0x1a38c0
int64_t function_1a3744(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a3744
    int64_t v1; // bp-40, 0x1a3744
    int64_t v2 = (int64_t)&v1; // 0x1a37b3
    v1 = a4;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x1a37d1
    *v3 = a2;
    int64_t v4 = v1; // 0x1a37ee
    v1 = v2;
    int64_t v5 = v2 + 8; // 0x1a37f2
    int64_t * v6 = (int64_t *)v5; // 0x1a37f3
    int64_t v7 = *(int64_t *)(v2 + 40); // 0x1a37f7
    v1 = v7;
    *v3 = v5;
    int64_t v8 = *(int64_t *)(v2 + 24); // 0x1a3817
    v1 = v8;
    *v3 = 0x5fbad25e;
    *(int64_t *)(v2 - 16) = v7;
    *v6 = *v3;
    *v3 = v8;
    *(int64_t *)(v2 + 32) = v8;
    v1 = *v6;
    *v3 = v5;
    int64_t v9 = *v6; // 0x1a38a5
    v1 = v9;
    *v3 = v9;
    return function_c57b8(a1, a2, a3, v4, a5, a6, 0x19a8ff);
}

// Address range: 0x1a38c0 - 0x1a3a07
int64_t function_1a38c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1a38c0
    int64_t v1; // 0x1a38c0
    return function_c57b8(0x548eef91, a2, a3, a4, v1, v1, 310);
}

// Address range: 0x1a3a07 - 0x1a3b60
int64_t function_1a3a07(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a3a07
    int64_t v1; // 0x1a3a07
    return function_c57b8(0x296f5d30, a2, 0x63be3e12, a4, a5, v1, a6);
}

// Address range: 0x1a3b60 - 0x1a3cd3
int64_t function_1a3b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1a3b60
    int64_t v1; // bp-64, 0x1a3b60
    v1 = (int64_t)&v1;
    int64_t v2; // 0x1a3b60
    return function_c57b8(a1, a2, a3, a4, a5, v2, 0x68ea4c57);
}

// Address range: 0x1a3cd3 - 0x1a3e65
int64_t function_1a3cd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1a3cd3
    int64_t v1; // bp-32, 0x1a3cd3
    int64_t v2 = (int64_t)&v1; // bp-48, 0x1a3e58
    int64_t v3; // 0x1a3cd3
    return function_c57b8(a1, a2, a3, a4, v3, v3, (int64_t)&v2 + 16);
}

// Address range: 0x2e219b - 0x2e21c7
int64_t function_2e219b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_4346fba5() + 0x1e3d19dc; // 0x2e21ae
    __writegsbyte(v1, __readgsbyte(v1) + 1);
    unknown_ffffffffd2f56abb();
    int64_t v2; // 0x2e219b
    *(char *)(v2 + 0x20410013) = (char)a4;
    return unknown_fffffffff0d410c8();
}

// Address range: 0x2e21c8 - 0x2e21d2
int64_t function_2e21c8(int64_t a1) {
    // 0x2e21c8
    int64_t v1; // 0x2e21c8
    int64_t result = v1;
    bool v2; // 0x2e21c8
    if (v2) {
        // 0x2e21cf
        return (result + 86 + (int64_t)v2) % 256 | result & -256;
    }
    // 0x2e21ca
    return result;
}

// Address range: 0x2e21f8 - 0x2e2200
int64_t function_2e21f8(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x6fff76e8); // 0x2e21f8
    int64_t result; // 0x2e21f8
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2e2222 - 0x2e2223
int64_t function_2e2222(void) {
    // 0x2e2222
    int64_t result; // 0x2e2222
    return result;
}

// Address range: 0x2e222d - 0x2e2232
int64_t function_2e222d(void) {
    // 0x2e222d
    return function_39f822cb();
}

// Address range: 0x2e2238 - 0x2e226b
int64_t function_2e2238(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e223a
    function_d9e2d8();
    int64_t v1 = unknown_ffffffff9528cb4c(); // 0x2e2246
    char * v2 = (char *)(a4 + 74); // 0x2e224d
    *v2 = *v2 | (char)a4;
    int64_t v3 = unknown_fffffffff826835b(); // 0x2e2255
    int64_t v4; // 0x2e2238
    int32_t * v5 = (int32_t *)(((v3 + v4) % 256 | v3 & -256) + (8 * ((v1 + 16) % 256 | v1 & 0xffffff00) | 1)); // 0x2e2262
    *v5 = *v5 | (int32_t)a1;
    return function_ffffffffb44bc164();
}

// Address range: 0x2e226d - 0x2e228d
int64_t function_2e226d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e226d
    int64_t v1; // 0x2e226d
    unknown_ffffffff92119f7b((int32_t)(v1 & a1 & v1));
    return v1 + (a2 & 0xff00) & 0xff00 | a2 & 0xffff00ff;
}

// Address range: 0x2e22f5 - 0x2e22f8
int64_t function_2e22f5(int64_t a1) {
    // 0x2e22f5
    int64_t result; // 0x2e22f5
    return result;
}

// Address range: 0x2e2317 - 0x2e2318
int64_t function_2e2317(int64_t a1) {
    // 0x2e2317
    int64_t result; // 0x2e2317
    return result;
}

// Address range: 0x2e2364 - 0x2e2365
int64_t function_2e2364(void) {
    // 0x2e2364
    int64_t result; // 0x2e2364
    return result;
}

// Address range: 0x2e23ca - 0x2e23d2
int64_t function_2e23ca(void) {
    // 0x2e23ca
    unknown_af135d1();
    return function_2e2364();
}

// Address range: 0x2e2409 - 0x2e240d
int64_t function_2e2409(int64_t a1) {
    // 0x2e2409
    int64_t result; // 0x2e2409
    return result;
}

// Address range: 0x2e244a - 0x2e244e
int64_t function_2e244a(void) {
    // 0x2e244a
    int64_t v1; // 0x2e244a
    int64_t result = v1;
    *(char *)result = (char)result + 60;
    return result;
}

// Address range: 0x2e24b2 - 0x2e24b5
int64_t function_2e24b2(void) {
    // 0x2e24b2
    int16_t v1; // 0x2e24b2
    return (uint16_t)v1;
}

// Address range: 0x2e25ce - 0x2e25d7
int64_t function_2e25ce(void) {
    // 0x2e25ce
    return unknown_ffffffff9d5eb2d6();
}

// Address range: 0x2e2604 - 0x2e260c
int64_t function_2e2604(void) {
    // 0x2e2604
    return function_ffffffffafcb55ed();
}

// Address range: 0x2e260d - 0x2e2628
int64_t function_2e260d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2e260d
    int64_t v1; // 0x2e260d
    char * v2 = (char *)(v1 - 22); // 0x2e2616
    *v2 = *v2 - (char)(a3 / 256);
    int64_t v3; // 0x2e260d
    *(int32_t *)a1 = *(int32_t *)&v3;
    bool v4; // 0x2e260d
    int64_t v5 = v4 ? -4 : 4; // 0x2e2619
    unknown_ffffffffa10ac421(v5 + a1 + (v4 ? -1 : 1), v5 + a2);
    return function_21626b1();
}

// Address range: 0x2e263d - 0x2e2656
int64_t function_2e263d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4; // bp-8, 0x2e263d
    int64_t v2 = unknown_2e8b6844(); // 0x2e263e
    char * v3 = (char *)(v2 + 0x202c000); // 0x2e2643
    *v3 = *v3 + (char)v2;
    int32_t * v4 = (int32_t *)(a3 + 1); // 0x2e264b
    *v4 = *v4 + (int32_t)(int64_t)&v1;
    return function_ffffffff897a26ef();
}

// Address range: 0x2e269a - 0x2e26b1
int64_t function_2e269a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 113); // 0x2e269a
    int64_t v2; // 0x2e269a
    *v1 = *v1 + (int32_t)v2;
    int64_t result = v2 | a4 / 256 % 256; // 0x2e269d
    *(int32_t *)-0x175f6c9882e5e6c9 = (int32_t)result;
    int32_t * v3 = (int32_t *)(v2 + 0x18437609 + 8 * result); // 0x2e26a9
    *v3 = *v3 + (int32_t)a4;
    return result;
}

// Address range: 0x2e26ed - 0x2e26f0
int64_t function_2e26ed(int64_t a1) {
    // 0x2e26ed
    int64_t result; // 0x2e26ed
    return result;
}

// Address range: 0x2e26f5 - 0x2e26fa
int64_t function_2e26f5(void) {
    // 0x2e26f5
    return function_25278481();
}

// Address range: 0x2e27a6 - 0x2e27b0
int64_t function_2e27a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x13d00db); // 0x2e27a6
    int64_t result; // 0x2e27a6
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2e281e - 0x2e2997
int64_t function_2e281e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int32_t v2; // 0x2e281e
    uint32_t v3 = v2;
    uint32_t v4 = (int32_t)a4 % 32; // 0x2e281e
    int64_t v5; // 0x2e281e
    int64_t v6; // 0x2e281e
    int64_t v7; // 0x2e281e
    if (v4 != 0) {
        uint32_t v8 = (int32_t)v7;
        *(int32_t *)v7 = v8 >> 32 - v4 | v8 << v4;
        v5 = v6;
    }
    int32_t * v9 = (int32_t *)(a3 + 0x1c56b3a + 4 * v5); // 0x2e2821
    *v9 = *v9 | (int32_t)a3;
    int64_t v10 = v6;
    *(char *)v10 = *(char *)&v6 - (char)v10;
    int64_t v11 = v6 >> 63; // 0x2e282b
    *(char *)a1 = (char)v6;
    bool v12; // 0x2e281e
    int64_t v13 = (v12 ? -1 : 1) + a1; // 0x2e2831
    unknown_ffffffff9dd3be44(v13);
    char v14 = *(char *)0x605fb64f; // 0x2e2848
    *(char *)0x605fb64f = v14 + (char)((uint64_t)v7 / 256);
    int32_t v15 = __asm_in((int16_t)v11); // 0x2e2850
    int64_t v16 = v13; // bp-15648, 0x2e2851
    unsigned char v17 = (char)v15; // 0x2e2852
    int64_t v18 = v17 + 35; // 0x2e2852
    int64_t v19 = v15 & -256; // 0x2e2852
    v6 = v18 | v19;
    bool v20 = v17 > 220; // 0x2e2854
    if (v4 != 0) {
        v20 = (v3 >> v4 | v3 << 32 - v4) < 0;
    }
    char v21 = a4; // 0x2e2832
    v6 = (v18 - a4 + (int64_t)v20) % 256 | v19;
    *(int32_t *)v13 = *(int32_t *)&v1;
    int64_t v22 = v12 ? -4 : 4; // 0x2e2859
    int64_t v23 = v13 + v22; // 0x2e2859
    int64_t v24 = v1 + v22; // 0x2e2859
    v1 = v24;
    unsigned char v25 = *(char *)v23; // 0x2e286a
    unsigned char v26 = v21 - v25; // 0x2e286a
    if (v25 <= v21 && v26 != 0) {
        // 0x2e286e
        return v6 | 196;
    }
    // 0x2e28d8
    int64_t v27; // bp-16, 0x2e281e
    int64_t v28 = (int64_t)&v27; // 0x2e282d
    int64_t v29 = a4 & -256 | (int64_t)v26; // 0x2e286a
    if (v25 < v21) {
        int32_t v30 = *(int32_t *)(v28 + 75 + 2 * v11); // 0x2e28db
        return unknown_ffffffffb62b6ee7(v23, v24, v11 & -256 | 18, v30 + (int32_t)v29);
    }
    int64_t v31 = (int64_t)&v16; // 0x2e2851
    if (v29 == 1) {
        int32_t * v32 = (int32_t *)(v11 + 120); // 0x2e293a
        *v32 = *v32 + (int32_t)v31;
        unknown_45896747();
        __asm_hlt();
        return (int64_t)*(int32_t *)0x3b3aa762e8ab01e8;
    }
    int32_t v33 = v28; // 0x2e292f
    v1 = v24;
    int64_t v34 = v31; // 0x2e2937
    int64_t result = (int64_t)(*(int32_t *)v1 | -0x175335a2); // 0x2e292a
    v6 = result;
    int32_t v35 = (v12 ? 0xfffffffc : 4) + v1; // 0x2e292f
    int32_t v36 = v35 + v33; // 0x2e292f
    v1 = v36;
    while (v36 < 0 == ((v36 ^ v35) & (v36 ^ v33)) < 0 != v36 != 0) {
        // 0x2e2933
        v34 -= 8;
        *(int64_t *)v34 = v23;
        result = (int64_t)(*(int32_t *)v1 | -0x175335a2);
        v6 = result;
        v35 = 4 + v1;
        v36 = v35 + v33;
        v1 = v36;
    }
    // 0x2e28bb
    return result;
}

// Address range: 0x2e299f - 0x2e29a0
int64_t function_2e299f(void) {
    // 0x2e299f
    int64_t result; // 0x2e299f
    return result;
}

// Address range: 0x2e29b4 - 0x2e29b5
int64_t function_2e29b4(void) {
    // 0x2e29b4
    int64_t result; // 0x2e29b4
    return result;
}

// Address range: 0x2e29ba - 0x2e29bb
int64_t function_2e29ba(void) {
    // 0x2e29ba
    int64_t result; // 0x2e29ba
    return result;
}

// Address range: 0x2e29be - 0x2e29d7
int64_t function_2e29be(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e29be
    int64_t v1; // 0x2e29be
    int64_t v2 = v1;
    __asm_iretd();
    int64_t v3 = a4 - 1; // 0x2e29c6
    bool v4; // 0x2e29be
    if (v3 != 0 == v4) {
        function_2e29ba();
    }
    // 0x2e29c8
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)v3;
    return __asm_wait((int32_t)(a3 ^ a1));
}

// Address range: 0x2e29d8 - 0x2e2a82
int64_t function_2e29d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffb18fadf0(); // 0x2e29e6
    *(int32_t *)a2 = 2 * (int32_t)a2;
    *(int32_t *)-0x1a9e606060439ea6 = (int32_t)v2 & -36;
    int32_t v3 = *(int32_t *)-0x4cccf209 + (int32_t)unknown_7be16004(); // 0x2e2a03
    if (llvm_ctpop_i8((char)v3) % 2 != 0) {
        // 0x2e2a0b
        unknown_3c268b11();
        return function_2e29b4();
    }
    uint32_t v4 = (int32_t)a4 % 32; // 0x2e29e2
    int64_t v5 = v4 == 0 ? a1 : (int64_t)((int32_t)a1 >> v4);
    int64_t v6; // 0x2e29d8
    int64_t result = 256 * (int64_t)*(char *)(v6 + 59) | (int64_t)(v3 & -0xff01); // 0x2e2a7b
    *(int32_t *)v5 = (int32_t)result;
    char v7 = *(char *)&v1; // 0x2e2a81
    *(char *)(v5 + ((a5 & (int64_t)&g1) == 0 ? 4 : -4)) = v7;
    return result;
}

// Address range: 0x2e2add - 0x2e2ae0
int64_t function_2e2add(void) {
    // 0x2e2add
    int64_t result; // 0x2e2add
    return result;
}

// Address range: 0x2e2b02 - 0x2e2b03
int64_t function_2e2b02(void) {
    // 0x2e2b02
    int64_t result; // 0x2e2b02
    return result;
}

// Address range: 0x2e2b28 - 0x2e2b3b
int64_t function_2e2b28(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e2b28
    int64_t v1; // 0x2e2b28
    bool v2; // 0x2e2b28
    return v1 + 0x7a273c63 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x2e2b3b - 0x2e2b45
int64_t function_2e2b3b(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 26); // 0x2e2b3c
    int64_t result; // 0x2e2b3b
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2e2b45 - 0x2e2b67
int64_t function_2e2b45(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e2b45
    int64_t v1; // 0x2e2b45
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a4;
    int32_t * v2 = (int32_t *)(a3 - 100 + 4 * v1); // 0x2e2b4e
    *v2 = *v2 + (int32_t)a2;
    __asm_rcl(*(int32_t *)(a4 - 120 + 8 * a4));
    int32_t * v3 = (int32_t *)(a2 - 19); // 0x2e2b62
    *v3 = *v3 + (int32_t)a3;
    return function_2e2b02();
}

// Address range: 0x2e2bb4 - 0x2e2bb5
int64_t function_2e2bb4(void) {
    // 0x2e2bb4
    int64_t result; // 0x2e2bb4
    return result;
}

// Address range: 0x2e2bb6 - 0x2e2bce
int64_t function_2e2bb6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffec384fbc(); // 0x2e2bb6
    int64_t v2; // 0x2e2bb6
    *(char *)a3 = (char)v2 >> 1;
    return v1 & -256 | (int64_t)*(char *)-0x15fe177d55f131d2;
}

// Address range: 0x2e2bce - 0x2e2bd8
int64_t function_2e2bce(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e2bce
    int64_t v1; // 0x2e2bce
    bool v2; // 0x2e2bce
    *(char *)v1 = (char)v2;
    return v1 | 221;
}

// Address range: 0x2e2bdd - 0x2e2be6
int64_t function_2e2bdd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e2bdd
    int16_t v1; // 0x2e2bdd
    uint16_t v2 = v1;
    int16_t v3; // 0x2e2bdd
    *(int32_t *)(int64_t)v2 = *(int32_t *)&v3 + (int32_t)v2;
    return function_2e2bb4();
}

// Address range: 0x2e2c05 - 0x2e2c0a
int64_t function_2e2c05(int64_t a1) {
    // 0x2e2c05
    int64_t v1; // 0x2e2c05
    return v1 & -256 | 60;
}

// Address range: 0x2e2c39 - 0x2e2c3a
int64_t function_2e2c39(void) {
    // 0x2e2c39
    int64_t result; // 0x2e2c39
    return result;
}

// Address range: 0x2e2c4d - 0x2e2c5f
int64_t function_2e2c4d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e2c4d
    int64_t v1; // 0x2e2c4d
    unsigned char v2 = (char)v1 | 121; // 0x2e2c4d
    unsigned char v3 = llvm_ctpop_i8(v2); // 0x2e2c4d
    int64_t result = v1 & -256 | (int64_t)v2; // 0x2e2c4f
    if (v3 % 2 == 0) {
        result = function_2e2c39();
    }
    int32_t * v4 = (int32_t *)result; // 0x2e2c51
    uint32_t v5 = *v4; // 0x2e2c51
    uint32_t v6 = (int32_t)a3; // 0x2e2c51
    uint32_t v7 = v5 + v6; // 0x2e2c51
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x2e2c51
    *v4 = v7;
    int64_t v9; // 0x2e2c4d
    __asm_outsb((int16_t)a3, *(char *)&v9);
    *(int32_t *)a3 = v6 / 0x10000000 | 32 * v6 | 16 * (int32_t)(v7 < v5);
    if (v8 % 2 != 0) {
        // 0x2e2c59
        *(char *)(v1 + 88) = (char)v1;
    }
    // 0x2e2c5c
    return result;
}

// Address range: 0x2e2c5f - 0x2e2c9a
int64_t function_2e2c5f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e2c5f
    int64_t v1; // 0x2e2c5f
    int32_t * v2 = (int32_t *)(v1 + 0xf0b01e8); // 0x2e2c5f
    *v2 = *v2 + 1;
    uint32_t v3 = (int32_t)v1; // 0x2e2c6b
    *(int32_t *)a1 = v3;
    bool v4; // 0x2e2c5f
    int64_t v5 = (v4 ? -4 : 4) + a1; // 0x2e2c6b
    int64_t v6 = -0x17a57fd2; // bp-8, 0x2e2c6c
    int32_t * v7 = (int32_t *)(v5 + 0x74fcca8a); // 0x2e2c71
    *v7 = *v7 + (int32_t)(int64_t)&v6;
    char * v8 = (char *)(v1 + 0x601e898); // 0x2e2c7c
    unsigned char v9 = *v8; // 0x2e2c7c
    *v8 = 84;
    *(int32_t *)a3 = (int32_t)v5;
    int64_t v10 = a3; // bp-24, 0x2e2c88
    uint32_t v11 = *(int32_t *)(a2 + 0x44e201e8); // 0x2e2c8a
    int32_t * v12 = (int32_t *)((int64_t)&v10 + 43 + (1024 * (int64_t)v9 | 0x95dc0000)); // 0x2e2c90
    *v12 = *v12 - (int32_t)v1 + (int32_t)(v11 > v3);
    return v3 - v11;
}

// Address range: 0x2e2d6c - 0x2e2d71
int64_t function_2e2d6c(int64_t a1) {
    // 0x2e2d6c
    int64_t result; // 0x2e2d6c
    __asm_out(4, (char)result);
    return result;
}

// Address range: 0x2e2d78 - 0x2e2d79
int64_t function_2e2d78(void) {
    // 0x2e2d78
    int64_t result; // 0x2e2d78
    return result;
}

// Address range: 0x2e2d96 - 0x2e2dcf
int64_t function_2e2d96(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2e2d96
    int64_t v1; // 0x2e2d96
    int64_t v2 = v1;
    uint64_t v3 = a4 / 256; // 0x2e2d96
    int64_t v4 = (v2 + v3) % 256 | v2 & -256; // 0x2e2d96
    int32_t * v5 = (int32_t *)(v1 + 0x855a487); // 0x2e2d98
    int32_t v6 = a3; // 0x2e2d98
    *v5 = *v5 + v6;
    int32_t * v7 = (int32_t *)(2 * v4 + a1); // 0x2e2d9e
    uint32_t v8 = *v7; // 0x2e2d9e
    *v7 = (int32_t)a2;
    int64_t v9 = v8; // 0x2e2d9e
    *(int32_t *)a1 = (int32_t)v4;
    bool v10; // 0x2e2d96
    int64_t v11 = unknown_3e00a3a8((v10 ? -4 : 4) + a1, v8) + v1; // 0x2e2da7
    int32_t * v12 = (int32_t *)(v9 - 0x4cd66b11); // 0x2e2da9
    *v12 = *v12 + v6;
    int64_t v13 = (2 * v11 & 254 | v11 & 0xffffff00) + 0xe8aa5c46; // 0x2e2db1
    int64_t v14 = a4 + a3; // 0x2e2db6
    int32_t * v15 = (int32_t *)v9; // 0x2e2dbf
    int32_t v16 = *v15; // 0x2e2dbf
    int32_t v17 = v14; // 0x2e2dbf
    int32_t v18 = v16 + v17; // 0x2e2dbf
    *v15 = v18;
    int64_t result = (v13 + v3) % 256 | v13 & 0xffffff00; // 0x2e2dc1
    if (((v18 ^ v16) & (v18 ^ v17)) >= 0) {
        result = function_2e2d78();
    }
    int32_t v19 = __readfsdword(result); // 0x2e2dc4
    int32_t * v20 = (int32_t *)(v14 & 0xffffffff); // 0x2e2dca
    *v20 = *v20 + 53 * v19;
    return result;
}

// Address range: 0x2e2de2 - 0x2e2eb1
int64_t function_2e2de2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e2de2
    int64_t v1; // 0x2e2de2
    int32_t * v2 = (int32_t *)(v1 - 0x1f9c0782); // 0x2e2de2
    *v2 = *v2 + (int32_t)v1;
    int32_t * v3 = (int32_t *)(v1 + 0x6b2d925c); // 0x2e2ded
    *v3 = *v3 + (int32_t)v1;
    *(char *)a1 = (char)v1 | 14;
    bool v4; // 0x2e2de2
    unknown_ffffffffa07e2bfb((v4 ? -1 : 1) + a1);
    int64_t v5 = unknown_ffffffffaa57e508(); // 0x2e2e01
    return (v5 + 75) % 256 | v5 & -256;
}

// Address range: 0x2e2ee4 - 0x2e2f1b
int64_t function_2e2ee4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e2ee4
    int64_t v1; // 0x2e2ee4
    *(char *)a2 = -1 - (char)v1;
    int64_t v2 = unknown_ffffffff9e13e5ec(); // 0x2e2ee6
    int32_t * v3 = (int32_t *)v2; // 0x2e2eeb
    *v3 = *v3 + (int32_t)a3;
    char * v4 = (char *)v2; // 0x2e2eed
    *v4 = *v4 | (char)v2;
    int32_t * v5 = (int32_t *)(8 * a4 - 48 + v1); // 0x2e2ef4
    *v5 = *v5 + (int32_t)v2;
    __asm_in_133(14);
    int64_t result = unknown_2839070a(); // 0x2e2f04
    int32_t * v6 = (int32_t *)(v1 - 0x29fd34d5); // 0x2e2f0c
    *v6 = *v6 - 0x3901e838;
    return result;
}

// Address range: 0x2e2f1b - 0x2e2f27
int64_t function_2e2f1b(int64_t a1, int64_t a2) {
    // 0x2e2f1b
    unknown_ffffffffe3f2db26(a1, a2);
    return a2 & 0xffffffff;
}

// Address range: 0x2e2f40 - 0x2e2f41
int64_t function_2e2f40(void) {
    // 0x2e2f40
    int64_t result; // 0x2e2f40
    return result;
}

// Address range: 0x2e2f51 - 0x2e2f58
int64_t function_2e2f51(void) {
    // 0x2e2f51
    unknown_ffffffff802f6c57();
    return function_2e2f40();
}

// Address range: 0x2e2fc3 - 0x2e2fc5
int64_t function_2e2fc3(void) {
    // 0x2e2fc3
    int64_t result; // 0x2e2fc3
    return result;
}
