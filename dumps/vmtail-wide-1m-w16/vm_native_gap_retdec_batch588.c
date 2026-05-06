/*
 * Targeted RetDec C for native executable gap queue batch 588.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1c5755-0x1c5955 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1c5b55-0x1c5d55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x24e2bc-0x24e4bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x24e4bc-0x24e6bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x24e6bc-0x24e8bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x24e8bc-0x24eabc rank=- name=- kind=- bytes=- uncovered=-
 *   0x24eabc-0x24ecbc rank=- name=- kind=- bytes=- uncovered=-
 *   0x51b9c0-0x51bbc0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
extern int g3;
extern int g4;
extern int g5;
extern int g6;
extern int g7;
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
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
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

int64_t function_1c5755(void);
int64_t function_1c57cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c5808(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c580a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1c589d(void);
int64_t function_1c58f4(void);
int64_t function_1c58f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1c5b55(void);
int64_t function_1c5b5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c5bda(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1c5c3e(void);
int64_t function_1c5cb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1c5d13(void);
int64_t function_1c5d21(int64_t a1);
int64_t function_1c5d2b(void);
int64_t function_1c5d34(int64_t a1);
int64_t function_24e2bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24e339(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24e364(int64_t a1);
int64_t function_24e39d(void);
int64_t function_24e3af(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_24e3d3(int64_t a1, int64_t a2);
int64_t function_24e410(void);
int64_t function_24e427(void);
int64_t function_24e429(void);
int64_t function_24e443(void);
int64_t function_24e477(void);
int64_t function_24e483(void);
int64_t function_24e4e0(void);
int64_t function_24e4ef(int64_t a1);
int64_t function_24e571(void);
int64_t function_24e596(int64_t a1, int64_t a2);
int64_t function_24e5c7(void);
int64_t function_24e5ca(void);
int64_t function_24e5d2(void);
int64_t function_24e5dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24e63b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24e663(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24e68e(void);
int64_t function_24e6c5(void);
int64_t function_24e6cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24e6fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24e79d(void);
int64_t function_24e7b7(void);
int64_t function_24e7ca(void);
int64_t function_24e7de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24e7f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24e81d(int64_t a1);
int64_t function_24e827(void);
int64_t function_24e82d(int64_t a1);
int64_t function_24e851(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24e876(void);
int64_t function_24e8ac(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_24e984(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_24e9b0(void);
int64_t function_24e9ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24ea70(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_24eabf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24ead8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24eb3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24eb56(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24ebdd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24ec41(void);
int64_t function_24ec54(int64_t a1);
int64_t function_24ec6b(void);
int64_t function_24ecaa(int64_t a1);
int64_t function_287af7();
int64_t function_325ee99b();
int64_t function_32ad568a();
int64_t function_3c43eb5e();
int64_t function_519050();
int64_t function_51a610();
int64_t function_51b9c0(void);
int64_t function_51b9d0(int64_t a1, int64_t a2);
int64_t function_51ba08(int64_t a1, int64_t a2, int64_t a3);
int64_t function_51ba54(int64_t a1, int64_t a2, int64_t a3);
int64_t function_51baa6(void);
int64_t function_51baf0(int64_t a1);
int64_t function_51bb20(int64_t result, int64_t a2);
int64_t function_558e17fe();
int64_t function_565970();
int64_t function_5681f0();
int64_t function_8d26652();
int64_t function_ffffffff95c5775e();
int64_t function_ffffffffbe2627d8();
int64_t unknown_1226d0d2();
int64_t unknown_3aa90323();
int64_t unknown_3ac20a05();
int64_t unknown_3e1610e5();
int64_t unknown_48d81ff6();
int64_t unknown_581c91d();
int64_t unknown_5878c18e();
int64_t unknown_58d6e8b8();
int64_t unknown_63e8e4de();
int64_t unknown_9bbd5b();
int64_t unknown_ffffffff867082f4();
int64_t unknown_ffffffff882f6f33();
int64_t unknown_ffffffffdadb5c26();
int64_t unknown_fffffffff6c77110();
int64_t unknown_fffffffffd576484();

// Address range: 0x1c5755 - 0x1c5761
int64_t function_1c5755(void) {
    // 0x1c5755
    return unknown_9bbd5b();
}

// Address range: 0x1c57cf - 0x1c57d3
int64_t function_1c57cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c57cf
    int64_t v1; // 0x1c57cf
    int64_t result = function_1c580a(a1, a2, a3, v1 / 256 % 256 | a4 & -256, v1, v1, (int64_t)&g7); // 0x1c57d1
    return result;
}

// Address range: 0x1c5808 - 0x1c580a
int64_t function_1c5808(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c5808
    int64_t result; // 0x1c5808
    return result;
}

// Address range: 0x1c580a - 0x1c588e
int64_t function_1c580a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1c580a
    int64_t v1; // 0x1c580a
    int64_t v2 = v1 ^ 104; // 0x1c580b
    uint32_t v3 = *(int32_t *)(v2 - 63) + (int32_t)v2; // 0x1c5813
    char v4 = v3; // 0x1c5813
    if (llvm_ctpop_i8(v4) % 2 != 0) {
        char v5 = *(char *)-0x18352add; // 0x1c581c
        *(char *)-0x18352add = v5 + (char)((uint64_t)v1 / 256);
        return __asm_wait();
    }
    int64_t v6 = v3; // 0x1c5813
    *(char *)0x5b729660443ab75c = v4;
    char * v7 = (char *)(v6 + a1); // 0x1c5871
    *v7 = *v7 + (char)(v3 / 256);
    char * v8 = (char *)v6; // 0x1c5874
    *v8 = *v8 + v4;
    unknown_fffffffffd576484();
    return unknown_5878c18e();
}

// Address range: 0x1c589d - 0x1c58a0
int64_t function_1c589d(void) {
    // 0x1c589d
    int64_t result; // 0x1c589d
    return result;
}

// Address range: 0x1c58f4 - 0x1c58f7
int64_t function_1c58f4(void) {
    // 0x1c58f4
    int64_t result; // 0x1c58f4
    return result;
}

// Address range: 0x1c58f8 - 0x1c5940
int64_t function_1c58f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1c58f8
    int64_t result; // 0x1c58f8
    unsigned char v1 = (char)result;
    if (v1 < 216) {
        // 0x1c58fd
        return result + 0x13d005b + (int64_t)(v1 != -41) & 0xffffffff;
    }
    char * v2 = (char *)(result + 0x24009c01); // 0x1c5934
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x1c5b55 - 0x1c5b5b
int64_t function_1c5b55(void) {
    // 0x1c5b55
    int64_t result; // 0x1c5b55
    return result;
}

// Address range: 0x1c5b5c - 0x1c5b87
int64_t function_1c5b5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1c5b5c
    int64_t v1; // 0x1c5b5c
    uint64_t v2 = v1;
    *(char *)a1 = (char)v1;
    unsigned char v3 = *(char *)0x3d580b6d; // 0x1c5b66
    unsigned char v4 = v3 + ((char)(v2 / 64) & -4); // 0x1c5b66
    *(char *)0x3d580b6d = v4;
    char * v5 = (char *)(a4 - 0x5062602a); // 0x1c5b6c
    char v6 = v1 / 256; // 0x1c5b6c
    *v5 = *v5 + v6 + (char)(v4 < v3);
    float80_t v7; // 0x1c5b5c
    *(int16_t *)(v1 + 11) = (int16_t)v7;
    int64_t v8; // 0x1c5b5c
    char v9 = *(char *)&v8; // 0x1c5b75
    char * v10 = (char *)((256 * (int64_t)(v9 & v6) | v1 & -0xff01) - 0x5dc153d3); // 0x1c5b77
    *v10 = *v10 - (char)v2;
    return a3 & 0xffffffff;
}

// Address range: 0x1c5bda - 0x1c5bec
int64_t function_1c5bda(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1c5bda
    int64_t result; // 0x1c5bda
    bool v1; // 0x1c5bda
    *(int32_t *)a2 = 0x80000000 * (int32_t)v1 | (int32_t)result / 2;
    char * v2 = (char *)(result + 4 * a4); // 0x1c5be2
    *v2 = *v2 ^ (char)(a3 / 256);
    return result;
}

// Address range: 0x1c5c3e - 0x1c5c3f
int64_t function_1c5c3e(void) {
    // 0x1c5c3e
    int64_t result; // 0x1c5c3e
    return result;
}

// Address range: 0x1c5cb4 - 0x1c5cfa
int64_t function_1c5cb4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)0x1700230e98998593; // 0x1c5cb4
    int64_t v2; // 0x1c5cb4
    int64_t result = v2 & -256 | (int64_t)v1; // 0x1c5cb4
    char * v3 = (char *)result; // 0x1c5cc3
    *v3 = *v3 + (char)(v2 / 256);
    *(char *)0x68e7ef2a2023e13a = v1;
    *(char *)-0x17e1e013 = *(char *)-0x17e1e013 - 47;
    int32_t * v4 = (int32_t *)(v2 + a2 & 0xffffffff); // 0x1c5cde
    *v4 = *v4 + (int32_t)v2;
    int64_t v5; // 0x1c5cb4
    *(int32_t *)a4 = *(int32_t *)&v5 + (int32_t)a4;
    return result;
}

// Address range: 0x1c5d13 - 0x1c5d19
int64_t function_1c5d13(void) {
    // 0x1c5d13
    int64_t result; // 0x1c5d13
    return result;
}

// Address range: 0x1c5d21 - 0x1c5d24
int64_t function_1c5d21(int64_t a1) {
    // 0x1c5d21
    int64_t v1; // 0x1c5d21
    int64_t v2 = v1;
    bool v3; // 0x1c5d21
    return (v2 - (v3 ? 230 : 229)) % 256 | v2 & -256;
}

// Address range: 0x1c5d2b - 0x1c5d34
int64_t function_1c5d2b(void) {
    // 0x1c5d2b
    int64_t v1; // 0x1c5d2b
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_8d26652();
}

// Address range: 0x1c5d34 - 0x1c5d3c
int64_t function_1c5d34(int64_t a1) {
    // 0x1c5d34
    int64_t result; // 0x1c5d34
    return result;
}

// Address range: 0x24e2bc - 0x24e317
int64_t function_24e2bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = __readgsbyte(0x1e80107ffd41c0a); // 0x24e2bc
    int64_t v2 = a2 & a1;
    int32_t v3 = v2; // 0x24e2c6
    if (v3 >= 0) {
        // 0x24e2ca
        return function_325ee99b(v3);
    }
    // 0x24e2ee
    int64_t v4; // 0x24e2bc
    uint32_t v5 = *(int32_t *)((v4 & -256 | (int64_t)v1) + 109); // 0x24e2ee
    int64_t v6 = unknown_63e8e4de(); // 0x24e2f1
    int32_t * v7 = (int32_t *)((v2 & 0xffffffff) - 0x3f3311b1); // 0x24e2fe
    *v7 = (v5 > -1 - (int32_t)a4 ? -113 : -112) + (int32_t)v4 + *v7;
    int64_t v8 = v6 + 0xd1c9f82b; // 0x24e304
    int32_t * v9 = (int32_t *)(v4 + 0x22c579a0); // 0x24e309
    int32_t v10 = v8; // 0x24e309
    *v9 = *v9 + v10;
    *(int32_t *)0xe82da050 = *(int32_t *)0xe82da050 + v10;
    return v8 & 0xffffffff;
}

// Address range: 0x24e339 - 0x24e352
int64_t function_24e339(int64_t a1, int64_t a2, int64_t a3) {
    // 0x24e339
    int64_t v1; // 0x24e339
    char * v2 = (char *)(v1 + 0x1fd0000); // 0x24e339
    *v2 = *v2 + (char)v1;
    char * v3 = (char *)(v1 + 0x5401e800); // 0x24e33f
    *v3 = *v3 + (char)(v1 / 256);
    int32_t * v4 = (int32_t *)(a2 - 0x500bff67 + a3); // 0x24e345
    *v4 = *v4 + (int32_t)a2;
    return __asm_int3();
}

// Address range: 0x24e364 - 0x24e365
int64_t function_24e364(int64_t a1) {
    // 0x24e364
    int64_t result; // 0x24e364
    return result;
}

// Address range: 0x24e39d - 0x24e39e
int64_t function_24e39d(void) {
    // 0x24e39d
    int64_t result; // 0x24e39d
    return result;
}

// Address range: 0x24e3af - 0x24e3d3
int64_t function_24e3af(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0x24e3af
    int64_t v1; // 0x24e3af
    int64_t v2 = v1;
    int64_t v3 = v1 + 0x667fb6a; // 0x24e3af
    int64_t v4 = v3 & 0xffffffff; // 0x24e3af
    *(int32_t *)v2 = (int32_t)(v2 & a2);
    char * v5 = (char *)(v4 - 0x728ac6c2 + (2 * (v3 + a1) & 0x1fffffffe)); // 0x24e3c1
    *v5 = *v5 | (char)(a3 / 256);
    *(int32_t *)a4 = (int32_t)v2 + (int32_t)a4;
    return v4 | a4 / 256 % 256;
}

// Address range: 0x24e3d3 - 0x24e3d8
int64_t function_24e3d3(int64_t a1, int64_t a2) {
    // 0x24e3d3
    int64_t v1; // 0x24e3d3
    *(char *)a1 = (char)(v1 / 256);
    return 256 * v1 & 0xff00 | v1 & -0xff01;
}

// Address range: 0x24e410 - 0x24e412
int64_t function_24e410(void) {
    // 0x24e410
    return function_24e429();
}

// Address range: 0x24e427 - 0x24e429
int64_t function_24e427(void) {
    // 0x24e427
    int64_t result; // 0x24e427
    return result;
}

// Address range: 0x24e429 - 0x24e42b
int64_t function_24e429(void) {
    // 0x24e429
    int64_t result; // 0x24e429
    return result;
}

// Address range: 0x24e443 - 0x24e444
int64_t function_24e443(void) {
    // 0x24e443
    int64_t result; // 0x24e443
    return result;
}

// Address range: 0x24e477 - 0x24e478
int64_t function_24e477(void) {
    // 0x24e477
    int64_t result; // 0x24e477
    return result;
}

// Address range: 0x24e483 - 0x24e485
int64_t function_24e483(void) {
    // 0x24e483
    return function_24e429();
}

// Address range: 0x24e4e0 - 0x24e4e2
int64_t function_24e4e0(void) {
    // 0x24e4e0
    return function_24e477();
}

// Address range: 0x24e4ef - 0x24e4f1
int64_t function_24e4ef(int64_t a1) {
    // 0x24e4ef
    int64_t result; // 0x24e4ef
    return result;
}

// Address range: 0x24e571 - 0x24e583
int64_t function_24e571(void) {
    // 0x24e571
    int64_t v1; // 0x24e571
    int32_t * v2 = (int32_t *)(v1 - 0x49000000); // 0x24e571
    uint32_t v3 = *v2; // 0x24e571
    uint32_t v4 = v3 + (int32_t)v1; // 0x24e571
    *v2 = v4;
    *(char *)0xa356e80 = *(char *)0xa356e80 + (char)(v1 / 256);
    return v4 < v3 ? 0xffffffff : 0;
}

// Address range: 0x24e596 - 0x24e5a2
int64_t function_24e596(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x7fc4a41a); // 0x24e596
    *v1 = *v1 + (int32_t)a1;
    return unknown_581c91d(a1, a2);
}

// Address range: 0x24e5c7 - 0x24e5c9
int64_t function_24e5c7(void) {
    // 0x24e5c7
    int64_t v1; // 0x24e5c7
    return function_24e5dc(v1, v1, v1, v1);
}

// Address range: 0x24e5ca - 0x24e5cb
int64_t function_24e5ca(void) {
    // 0x24e5ca
    int64_t result; // 0x24e5ca
    return result;
}

// Address range: 0x24e5d2 - 0x24e5d6
int64_t function_24e5d2(void) {
    // 0x24e5d2
    int64_t result; // 0x24e5d2
    return result;
}

// Address range: 0x24e5dc - 0x24e635
int64_t function_24e5dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24e5dc
    *(int32_t *)-0x4e05ea4f = *(int32_t *)-0x4e05ea4f + (int32_t)a4;
    int64_t v1; // 0x24e5dc
    int64_t v2 = 0x100000000 * v1 >> 32 ^ 0x2801c30b; // 0x24e5e7
    uint64_t v3 = v2 * v2; // 0x24e5e7
    uint64_t v4 = v3 / 0x100000000; // 0x24e5e7
    int64_t result = v3 & 0xffffffff; // 0x24e5e7
    int32_t * v5 = (int32_t *)(a1 + 104 + 2 * result); // 0x24e5e9
    *v5 = *v5 + (int32_t)v4;
    int64_t v6; // 0x24e5dc
    char v7 = *(char *)&v6; // 0x24e5ed
    char v8 = v6 / 256; // 0x24e5ed
    char v9 = v7 + v8; // 0x24e5ed
    *(char *)v6 = v9;
    if (v9 < 0 == ((v9 ^ v7) & (v9 ^ v8)) < 0 == (v9 != 0)) {
        // 0x24e631
        __asm_out((int16_t)v4, (char)v3);
        return result;
    }
    // 0x24e5f2
    *(char *)-0x15213107 = *(char *)-0x15213107 + (char)(v6 / 256);
    return result;
}

// Address range: 0x24e63b - 0x24e661
int64_t function_24e63b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24e63b
    int64_t v1; // 0x24e63b
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    uint64_t result = v2 & -256 | (int64_t)__asm_in((int16_t)a3); // 0x24e63d
    *(int32_t *)(a4 + 0x4ea26356) = (int32_t)a2;
    int32_t * v3 = (int32_t *)(a1 + 0x43013d00); // 0x24e652
    *v3 = *v3 & ((int32_t)v1 & -256 | 239);
    char * v4 = (char *)(result - 0x5584d6d6); // 0x24e658
    *v4 = *v4 - (char)(result / 256);
    return result;
}

// Address range: 0x24e663 - 0x24e66b
int64_t function_24e663(int64_t a1, int64_t a2, int64_t a3) {
    // 0x24e663
    int64_t v1; // 0x24e663
    return function_24e6cc(a1, a2, a3, v1);
}

// Address range: 0x24e68e - 0x24e68f
int64_t function_24e68e(void) {
    // 0x24e68e
    int64_t result; // 0x24e68e
    return result;
}

// Address range: 0x24e6c5 - 0x24e6c6
int64_t function_24e6c5(void) {
    // 0x24e6c5
    int64_t result; // 0x24e6c5
    return result;
}

// Address range: 0x24e6cc - 0x24e6fa
int64_t function_24e6cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x24e6cc
    int32_t * v3 = (int32_t *)(v2 - 77); // 0x24e6cc
    uint32_t v4 = *v3; // 0x24e6cc
    uint32_t v5 = v4 + (int32_t)v2; // 0x24e6cc
    *v3 = v5;
    uint32_t v6 = (int32_t)a4 % 32; // 0x24e6d1
    if (v6 != 0) {
        uint32_t v7 = *(int32_t *)&v1; // 0x24e6d1
        *(int32_t *)v1 = (int32_t)(v5 < v4) << v6 - 1 | v7 << v6 | (int32_t)((int64_t)v7 >> (int64_t)(33 - v6));
    }
    char * v8 = (char *)(v2 - 0xc3735c7); // 0x24e6d8
    unsigned char v9 = *v8; // 0x24e6d8
    unsigned char v10 = v9 + (char)v2; // 0x24e6d8
    *v8 = v10;
    int32_t * v11 = (int32_t *)(v2 + 0x3ab4f0f8); // 0x24e6e8
    int32_t v12 = *v11; // 0x24e6e8
    *v11 = v12 - (int32_t)v1 + (int32_t)((int32_t)v2 - 0x3c48fffb + (int32_t)(v10 < v9) < 0xdc021701);
    unknown_ffffffff867082f4();
    return __asm_sti();
}

// Address range: 0x24e6fc - 0x24e77f
int64_t function_24e6fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x6ffec298); // 0x24e6fe
    int64_t v2; // 0x24e6fc
    int32_t v3 = v2; // 0x24e6fe
    int32_t v4 = *v1 + v3; // 0x24e6fe
    *v1 = v4;
    if (v4 == 0) {
        // 0x24e740
        return 2 * v2 & 0xffffffff;
    }
    int32_t * v5 = (int32_t *)(v2 + 30); // 0x24e706
    int32_t v6 = *v5 & v3; // 0x24e706
    *v5 = v6;
    int64_t result = unknown_fffffffff6c77110() & -0xff01 | (int64_t)&g6; // 0x24e70f
    if (v6 < 0) {
        // 0x24e735
        return result;
    }
    unsigned char v7 = (char)a4 % 32; // 0x24e713
    if (v7 != 0) {
        char * v8 = (char *)(a1 - 24); // 0x24e713
        *v8 = *v8 >> v7;
    }
    int32_t * v9 = (int32_t *)(result - 0x51a300f6); // 0x24e718
    *v9 = *v9 + (int32_t)v2;
    uint32_t v10 = (int32_t)a4 % 32; // 0x24e71e
    if (v10 != 0) {
        int32_t * v11 = (int32_t *)result; // 0x24e71e
        uint32_t v12 = *v11; // 0x24e71e
        *v11 = v12 >> 32 - v10 | v12 << v10;
    }
    unknown_ffffffffdadb5c26();
    char * v13 = (char *)(a1 - 70); // 0x24e72a
    char v14 = *v13; // 0x24e72a
    char v15 = v2 / 256; // 0x24e72a
    char v16 = v14 + v15; // 0x24e72a
    *v13 = v16;
    uint64_t v17 = unknown_ffffffff882f6f33(); // 0x24e72d
    int64_t result2 = v17 & -256 | (int64_t)*(char *)(v17 % 256 + v2); // 0x24e733
    if (((v16 ^ v14) & (v16 ^ v15)) >= 0) {
        result2 = function_24e6c5();
    }
    // 0x24e735
    return result2;
}

// Address range: 0x24e79d - 0x24e79e
int64_t function_24e79d(void) {
    // 0x24e79d
    int64_t result; // 0x24e79d
    return result;
}

// Address range: 0x24e7b7 - 0x24e7b8
int64_t function_24e7b7(void) {
    // 0x24e7b7
    int64_t result; // 0x24e7b7
    return result;
}

// Address range: 0x24e7ca - 0x24e7cf
int64_t function_24e7ca(void) {
    // 0x24e7ca
    return function_32ad568a();
}

// Address range: 0x24e7de - 0x24e7f8
int64_t function_24e7de(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24e7de
    unknown_3e1610e5();
    bool v1; // 0x24e7de
    if (v1 || false) {
        function_24e7b7();
    }
    // 0x24e7e6
    int64_t v2; // 0x24e7de
    char v3 = v2 | a4; // 0x24e7eb
    *(char *)a4 = v3;
    if (v3 < 1) {
        function_24e79d();
    }
    // 0x24e7f0
    return unknown_48d81ff6();
}

// Address range: 0x24e7f9 - 0x24e817
int64_t function_24e7f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24e7f9
    int64_t v1; // 0x24e7f9
    int32_t * v2 = (int32_t *)(v1 - 0x627152f9); // 0x24e7f9
    *v2 = *v2 + (int32_t)v1;
    unknown_3ac20a05();
    int64_t v3 = unknown_1226d0d2(); // 0x24e80c
    return (v3 + 176) % 256 | v3 & -256;
}

// Address range: 0x24e81d - 0x24e825
int64_t function_24e81d(int64_t a1) {
    // 0x24e81d
    return unknown_3aa90323(a1);
}

// Address range: 0x24e827 - 0x24e829
int64_t function_24e827(void) {
    // 0x24e827
    int64_t result; // 0x24e827
    return result;
}

// Address range: 0x24e82d - 0x24e830
int64_t function_24e82d(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 122); // 0x24e82d
    int64_t result; // 0x24e82d
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x24e851 - 0x24e863
int64_t function_24e851(int64_t a1, int64_t a2, int64_t a3) {
    // 0x24e851
    int64_t v1; // 0x24e851
    int64_t result = v1 & 0xf8bbe3b3 | 0x7441c4c; // 0x24e851
    int32_t * v2 = (int32_t *)(result + 0x1001e817); // 0x24e856
    *v2 = *v2 + (int32_t)v1;
    char * v3 = (char *)(a2 - 0x349ea034); // 0x24e85c
    *v3 = *v3 | (char)v1;
    return result;
}

// Address range: 0x24e876 - 0x24e877
int64_t function_24e876(void) {
    // 0x24e876
    int64_t result; // 0x24e876
    return result;
}

// Address range: 0x24e8ac - 0x24e8c3
int64_t function_24e8ac(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x24e8ac
    int64_t v1; // 0x24e8ac
    int32_t * v2 = (int32_t *)(v1 + 0x7168bb4 + 2 * v1); // 0x24e8ae
    uint32_t v3 = *v2; // 0x24e8ae
    uint32_t v4 = v3 + (int32_t)a4; // 0x24e8ae
    *v2 = v4;
    unsigned char v5 = v4 < v3 ? 52 : 51; // 0x24e8b5
    bool v6; // 0x24e8ac
    if (v4 < v3 || v5 > (char)(v1 + a4 / 256 + (int64_t)v6)) {
        function_24e876();
    }
    // 0x24e8b9
    return __asm_sti() & 0xd06e0091;
}

// Address range: 0x24e984 - 0x24e9a6
int64_t function_24e984(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x24e984
    int64_t v1; // 0x24e984
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 + 0x292d6300); // 0x24e984
    *v3 = *v3 | (char)(a3 / 256);
    uint64_t v4 = v1 + 162; // 0x24e992
    int64_t result = v4 % 256 | v1 & -256; // 0x24e992
    *(char *)-0x53e1e763 = *(char *)-0x53e1e763 + (char)(v2 / 256);
    char * v5 = (char *)result; // 0x24e99c
    char v6 = v4; // 0x24e99c
    *v5 = *v5 + v6;
    int64_t v7; // 0x24e984
    *(char *)a3 = *(char *)&v7 + (char)(v1 / 256);
    *v5 = *v5 + 2 * v6;
    return result;
}

// Address range: 0x24e9b0 - 0x24e9b3
int64_t function_24e9b0(void) {
    // 0x24e9b0
    int64_t v1; // 0x24e9b0
    return v1 & -0xff01 | (int64_t)")\b";
}

// Address range: 0x24e9ef - 0x24ea4b
int64_t function_24e9ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t result = function_287af7(); // 0x24e9f1
    if ((int32_t)result >= 0x351ed601) {
        // 0x24ea3d
        int64_t v1; // 0x24e9ef
        return result & -256 | (int64_t)*(char *)(result % 256 + v1);
    }
    // 0x24e9fe
    return result;
}

// Address range: 0x24ea70 - 0x24eab7
int64_t function_24ea70(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x24ea70
    int64_t v1; // 0x24ea70
    int32_t * v2 = (int32_t *)(v1 + 0x7ed410a2); // 0x24ea70
    int32_t v3 = *v2 & (int32_t)v1; // 0x24ea70
    *v2 = v3;
    int64_t result = __asm_int3(); // 0x24ea77
    if (v3 < 0) {
        // 0x24ea7a
        return result;
    }
    // 0x24ea8c
    __asm_int(30);
    *(int32_t *)a1 = 0xda323e5;
    bool v4; // 0x24ea70
    int64_t v5 = (v4 ? -4 : 4) + a1; // 0x24ea9a
    *(char *)0xda323e5 = *(char *)0xda323e5 - 27;
    char * v6 = (char *)(v5 + 0x3d000016); // 0x24ea9d
    *v6 = *v6 + (char)a4;
    int32_t * v7 = (int32_t *)(a3 & -256 | 203); // 0x24eaa3
    uint32_t v8 = *v7; // 0x24eaa3
    uint32_t v9 = v8 + (int32_t)v1; // 0x24eaa3
    *v7 = v9;
    char * v10 = (char *)(v5 - 66); // 0x24eaa5
    *v10 = *v10 + (char)(a3 / 256) + (char)(v9 < v8);
    *(int32_t *)0x475adf7dc5e8e279 = 0xda323e5;
    return unknown_58d6e8b8(v5);
}

// Address range: 0x24eabf - 0x24ead8
int64_t function_24eabf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x24eabf
    int64_t v1; // 0x24eabf
    *(int32_t *)(a3 - 0x24ab61b9) = (int32_t)v1;
    int64_t v2; // 0x24eabf
    *(char *)a1 = *(char *)&v2;
    bool v3; // 0x24eabf
    int64_t v4 = v3 ? -1 : 1; // 0x24eac5
    return function_ffffffffbe2627d8(v4 + a1, v4 + a2);
}

// Address range: 0x24ead8 - 0x24eaf6
int64_t function_24ead8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x24ead8
    int64_t v1; // 0x24ead8
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v2; // 0x24ead8
    char v3 = *(char *)&v2; // 0x24eadd
    *(char *)-0x6e1b92a3 = *(char *)-0x6e1b92a3 + 58;
    char v4 = __asm_insb((int16_t)(a3 & 0xff00 | (int64_t)(v3 & (char)a3))); // 0x24eaea
    bool v5; // 0x24ead8
    *(char *)((v5 ? -4 : 4) + a1) = v4;
    *(char *)-0x6fe0130e = *(char *)-0x6fe0130e + 95;
    return function_3c43eb5e();
}

// Address range: 0x24eb3b - 0x24eb51
int64_t function_24eb3b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24eb3b
    int64_t v1; // 0x24eb3b
    __asm_fbld(*(float80_t *)&v1);
    return function_558e17fe();
}

// Address range: 0x24eb56 - 0x24ebb6
int64_t function_24eb56(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24eb56
    int64_t v1; // 0x24eb56
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    bool v2; // 0x24eb56
    if (*(char *)(a1 - 103 + (v2 ? -4 : 4)) < (char)v1) {
        // 0x24ebaa
        return result;
    }
    // 0x24eb5e
    __asm_out_133((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x24ebdd - 0x24ec01
int64_t function_24ebdd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24ebdd
    int64_t v1; // 0x24ebdd
    uint64_t v2 = v1;
    char v3 = *(char *)-0x45b7ec19; // 0x24ebe0
    int64_t v4 = v1 & -0xff01 | (int64_t)"lock"; // 0x24ebe7
    __asm_outsb((int16_t)a3, (char)a2);
    uint32_t v5 = (int32_t)a4 % 32; // 0x24ebea
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)v4; // 0x24ebea
        uint32_t v7 = *v6; // 0x24ebea
        *v6 = v7 >> 32 - v5 | v7 << v5;
    }
    int32_t * v8 = (int32_t *)(a1 + 21); // 0x24ebec
    *v8 = *v8 | (int32_t)a2;
    char v9 = *(char *)(a4 + 0x13d002d); // 0x24ebf3
    char * v10 = (char *)((256 * (int64_t)(v3 | (char)(v2 / 256)) | v2 & -0x10000 | (int64_t)(v9 + (char)v2)) - 9); // 0x24ebfb
    *v10 = *v10 ^ (char)a4;
    unsigned char v11 = (char)v4; // 0x24ebfe
    char v12 = v11 + 106; // 0x24ebfe
    return v4 & -0x10000 | (int64_t)v12 | 256 * (64 * (int64_t)(v12 == 0) | (int64_t)(v11 < 150) | 128 * (int64_t)(v12 < 0) | 16 * (int64_t)(v11 % 16 > 21) | 4 * (int64_t)(llvm_ctpop_i8(v12) % 2 == 0)) | 512;
}

// Address range: 0x24ec41 - 0x24ec46
int64_t function_24ec41(void) {
    // 0x24ec41
    return function_ffffffff95c5775e();
}

// Address range: 0x24ec54 - 0x24ec59
int64_t function_24ec54(int64_t a1) {
    // 0x24ec54
    int64_t result; // 0x24ec54
    return result;
}

// Address range: 0x24ec6b - 0x24ec6d
int64_t function_24ec6b(void) {
    // 0x24ec6b
    int64_t result; // 0x24ec6b
    return result;
}

// Address range: 0x24ecaa - 0x24ecad
int64_t function_24ecaa(int64_t a1) {
    // 0x24ecaa
    int64_t result; // 0x24ecaa
    return result;
}

// Address range: 0x51b9c0 - 0x51b9c5
int64_t function_51b9c0(void) {
    // 0x51b9c0
    return function_51a610();
}

// Address range: 0x51b9d0 - 0x51ba08
// From class:    std::__cxx11::numpunct<char>
// Type:          constructor
int64_t function_51b9d0(int64_t a1, int64_t a2) {
    // 0x51b9d0
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 8) = (int32_t)(a2 != 0);
    *(int64_t *)a1 = (int64_t)&g2;
    return function_5681f0();
}

// Address range: 0x51ba08 - 0x51ba54
// From class:    std::__cxx11::numpunct<char>
// Type:          constructor
int64_t function_51ba08(int64_t a1, int64_t a2, int64_t a3) {
    // 0x51ba08
    int64_t v1; // 0x51ba08
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = a2;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g7 ^ (int32_t)&g7) & -256;
    *(int64_t *)v1 = (int64_t)&g2;
    return function_5681f0();
}

// Address range: 0x51ba54 - 0x51baa6
// From class:    std::__cxx11::numpunct<char>
// Type:          constructor
int64_t function_51ba54(int64_t a1, int64_t a2, int64_t a3) {
    // 0x51ba54
    int64_t v1; // 0x51ba54
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    *(int64_t *)(v1 + 16) = 0;
    *(int32_t *)(v1 + 8) = (int32_t)(a3 != 0) | ((int32_t)&g7 ^ (int32_t)&g7) & -256;
    *(int64_t *)v1 = (int64_t)&g2;
    return function_5681f0();
}

// Address range: 0x51baa6 - 0x51bae2
int64_t function_51baa6(void) {
    // 0x51baa6
    int64_t v1; // 0x51baa6
    function_565970(v1);
    _Unwind_Resume((struct _Unwind_Exception *)v1);
    int64_t result = *(int64_t *)((int64_t)&g7 + 16); // 0x51bac3
    if (result != g3) {
        // 0x51bae0
        return result;
    }
    // 0x51bad0
    return (int64_t)*(char *)(*(int64_t *)(v1 + 16) + 72);
}

// Address range: 0x51baf0 - 0x51bb12
int64_t function_51baf0(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 24); // 0x51baf3
    if (result != g5) {
        // 0x51bb10
        return result;
    }
    // 0x51bb00
    return (int64_t)*(char *)(*(int64_t *)(a1 + 16) + 73);
}

// Address range: 0x51bb20 - 0x51bbb9
int64_t function_51bb20(int64_t result, int64_t a2) {
    int64_t v1 = __readfsqword(40); // 0x51bb29
    if (*(int64_t *)(a2 + 32) == g4) {
        int64_t str = *(int64_t *)(*(int64_t *)(a2 + 16) + 16); // 0x51bb54
        *(int64_t *)result = result + 16;
        int64_t v2 = -1; // 0x51bb62
        if (str != 0) {
            // 0x51bb64
            v2 = str + (int64_t)strlen((char *)str);
        }
        // 0x51bb71
        function_519050(result, str, v2);
    }
    // 0x51bb7c
    if (v1 == __readfsqword(40)) {
        // 0x51bb8f
        return result;
    }
    // 0x51bba4
    __stack_chk_fail();
    return (int64_t)&g7;
}
