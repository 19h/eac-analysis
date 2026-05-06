/*
 * Targeted RetDec C for native executable gap queue batch 699.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3c09dd-0x3c0bdd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c0bdd-0x3c0ddd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c0ddd-0x3c0fdd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c0fdd-0x3c11dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x3c11dd-0x3c13dd rank=- name=- kind=- bytes=- uncovered=-
 *   0x430293-0x430493 rank=- name=- kind=- bytes=- uncovered=-
 *   0x430493-0x430693 rank=- name=- kind=- bytes=- uncovered=-
 *   0x430693-0x430893 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
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

int64_t function_1790aae();
int64_t function_2250558();
int64_t function_3c09dd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c09f1(void);
int64_t function_3c0a07(int64_t a1);
int64_t function_3c0a3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c0a76(int64_t a1);
int64_t function_3c0a80(int64_t a1);
int64_t function_3c0abf(int64_t a1);
int64_t function_3c0b34(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c0b39(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c0b3b(void);
int64_t function_3c0b54(void);
int64_t function_3c0b78(int64_t a1, int64_t a2);
int64_t function_3c0b9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c0be9(void);
int64_t function_3c0c1b(int64_t a1);
int64_t function_3c0c37(void);
int64_t function_3c0c3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c0c55(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3c0c67(void);
int64_t function_3c0c7d(void);
int64_t function_3c0c95(void);
int64_t function_3c0c9c(void);
int64_t function_3c0cab(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c0cd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3c0d1d(void);
int64_t function_3c0d3c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_3c0e26(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3c0e6c(int64_t a1);
int64_t function_3c0ec9(int64_t a1);
int64_t function_3c0f01(void);
int64_t function_3c0f10(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3c0f47(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c10af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3c11f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3c139a(void);
int64_t function_3c139e(void);
int64_t function_43022f();
int64_t function_430244();
int64_t function_430293(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_4303f0(void);
int64_t function_4303fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_43048a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4306c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_430721(int64_t a1);
int64_t function_430740(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_43079d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4307f0(void);
int64_t function_430811(void);
int64_t function_430837(int64_t a1, int64_t a2, int64_t a3);
int64_t function_430889(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4d3df3a9();
int64_t function_7aab8e80();
int64_t function_caf2a();
int64_t function_ffffffffb7ea5b54();
int64_t unknown_234e0507();
int64_t unknown_24222716();
int64_t unknown_3a695153();
int64_t unknown_3dce023e();
int64_t unknown_480f0099();
int64_t unknown_513cb24a();
int64_t unknown_6e469742();
int64_t unknown_ffffffffe83d49a7();
int64_t unknown_fffffffffa4e114d();

// Address range: 0x3c09dd - 0x3c09ea
int64_t function_3c09dd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c09dd
    __asm_in((int16_t)a3);
    __asm_int(62);
    return function_1790aae();
}

// Address range: 0x3c09f1 - 0x3c09f2
int64_t function_3c09f1(void) {
    // 0x3c09f1
    int64_t result; // 0x3c09f1
    return result;
}

// Address range: 0x3c0a07 - 0x3c0a0c
int64_t function_3c0a07(int64_t a1) {
    // 0x3c0a07
    int64_t result; // 0x3c0a07
    // 0x3c0a09
    return result;
}

// Address range: 0x3c0a3e - 0x3c0a48
int64_t function_3c0a3e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c0a3e
    int64_t result; // 0x3c0a3e
    *(int32_t *)a1 = (int32_t)result + (int32_t)a4;
    return result;
}

// Address range: 0x3c0a76 - 0x3c0a77
int64_t function_3c0a76(int64_t a1) {
    // 0x3c0a76
    int64_t result; // 0x3c0a76
    return result;
}

// Address range: 0x3c0a80 - 0x3c0a83
int64_t function_3c0a80(int64_t a1) {
    // 0x3c0a80
    int64_t result; // 0x3c0a80
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x3c0abf - 0x3c0ac0
int64_t function_3c0abf(int64_t a1) {
    // 0x3c0abf
    int64_t result; // 0x3c0abf
    return result;
}

// Address range: 0x3c0b34 - 0x3c0b38
int64_t function_3c0b34(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c0b34
    return function_3c0b3b();
}

// Address range: 0x3c0b39 - 0x3c0b3b
int64_t function_3c0b39(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c0b39
    int64_t result; // 0x3c0b39
    return result;
}

// Address range: 0x3c0b3b - 0x3c0b3c
int64_t function_3c0b3b(void) {
    // 0x3c0b3b
    int64_t result; // 0x3c0b3b
    return result;
}

// Address range: 0x3c0b54 - 0x3c0b5b
int64_t function_3c0b54(void) {
    // 0x3c0b54
    int64_t v1; // 0x3c0b54
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 | v1);
    return function_4d3df3a9();
}

// Address range: 0x3c0b78 - 0x3c0b7a
int64_t function_3c0b78(int64_t a1, int64_t a2) {
    // 0x3c0b78
    int64_t result; // 0x3c0b78
    return result;
}

// Address range: 0x3c0b9f - 0x3c0bab
int64_t function_3c0b9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffe83d49a7(a1, a2, a3, a4); // 0x3c0ba1
    return (v1 + 132) % 256 | v1 & -256;
}

// Address range: 0x3c0be9 - 0x3c0bea
int64_t function_3c0be9(void) {
    // 0x3c0be9
    int64_t result; // 0x3c0be9
    return result;
}

// Address range: 0x3c0c1b - 0x3c0c1c
int64_t function_3c0c1b(int64_t a1) {
    // 0x3c0c1b
    int64_t result; // 0x3c0c1b
    return result;
}

// Address range: 0x3c0c37 - 0x3c0c38
int64_t function_3c0c37(void) {
    // 0x3c0c37
    int64_t result; // 0x3c0c37
    return result;
}

// Address range: 0x3c0c3d - 0x3c0c54
int64_t function_3c0c3d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c0c3d
    int64_t v1; // 0x3c0c3d
    // 0x3c0c3f
    *(char *)a4 = (char)a4 + (char)a3;
    *(char *)a1 = (char)v1;
    char v2 = *(char *)0x61fddc4d; // 0x3c0c46
    int64_t v3; // 0x3c0c3d
    *(char *)0x61fddc4d = v2 + (char)((uint64_t)v3 / 256);
    bool v4; // 0x3c0c3d
    return unknown_fffffffffa4e114d((v4 ? -1 : 1) + a1);
}

// Address range: 0x3c0c55 - 0x3c0c5b
int64_t function_3c0c55(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3c0c55
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return function_7aab8e80();
}

// Address range: 0x3c0c67 - 0x3c0c68
int64_t function_3c0c67(void) {
    // 0x3c0c67
    int64_t result; // 0x3c0c67
    return result;
}

// Address range: 0x3c0c7d - 0x3c0c7f
int64_t function_3c0c7d(void) {
    // 0x3c0c7d
    int64_t v1; // 0x3c0c7d
    return function_3c0cab(v1, v1, v1, v1);
}

// Address range: 0x3c0c95 - 0x3c0c97
int64_t function_3c0c95(void) {
    // 0x3c0c95
    return function_3c0c37();
}

// Address range: 0x3c0c9c - 0x3c0c9d
int64_t function_3c0c9c(void) {
    // 0x3c0c9c
    int64_t result; // 0x3c0c9c
    return result;
}

// Address range: 0x3c0cab - 0x3c0cb2
int64_t function_3c0cab(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c0cab
    *(char *)a3 = (char)a4;
    int64_t v1; // 0x3c0cab
    __asm_out(-20, (char)v1);
    return function_3c0c67();
}

// Address range: 0x3c0cd5 - 0x3c0d09
int64_t function_3c0cd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3c0cd5
    int64_t v1; // 0x3c0cd5
    *(char *)a1 = (char)v1;
    int32_t * v2 = (int32_t *)(v1 + 0x1600e60a); // 0x3c0ce1
    int32_t v3 = *v2; // 0x3c0ce1
    int32_t v4 = a4; // 0x3c0ce1
    int32_t v5 = v3 + v4; // 0x3c0ce1
    *v2 = v5;
    int64_t v6 = v1 & -256 | (int64_t)*(char *)0x3a2b90985e01e835; // 0x3c0cf0
    if (((v5 ^ v3) & (v5 ^ v4)) >= 0) {
        v6 = function_3c0c9c();
    }
    // 0x3c0cf2
    bool v7; // 0x3c0cd5
    int64_t v8 = (v7 ? -1 : 1) + a1; // 0x3c0cde
    *(char *)(a4 + 20) = (char)(v6 / 256);
    int32_t * v9 = (int32_t *)((a3 & -0xff01 | (int64_t)&g2) + 85); // 0x3c0cf7
    uint32_t v10 = *v9; // 0x3c0cf7
    uint32_t v11 = v10 + (int32_t)v8; // 0x3c0cf7
    *v9 = v11;
    int32_t * v12 = (int32_t *)(v8 + 1); // 0x3c0cfc
    int32_t v13 = (int32_t)v6 & -0xff01 | (int32_t)&g5; // 0x3c0cfc
    *v12 = *v12 - v13 + (int32_t)(v11 < v10);
    __asm_out_133(62, v13);
    return unknown_234e0507();
}

// Address range: 0x3c0d1d - 0x3c0d1e
int64_t function_3c0d1d(void) {
    // 0x3c0d1d
    int64_t result; // 0x3c0d1d
    return result;
}

// Address range: 0x3c0d3c - 0x3c0d9c
int64_t function_3c0d3c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x3c0d3c
    int64_t v1; // 0x3c0d3c
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 - 114;
    int64_t v3 = unknown_513cb24a(); // 0x3c0d44
    int32_t * v4 = (int32_t *)(v3 - 107); // 0x3c0d49
    *v4 = *v4 + (int32_t)v1;
    char * v5 = (char *)(a1 - 79); // 0x3c0d4d
    *v5 = *v5 + (char)(a4 / 256);
    int64_t v6 = (v3 + v1 / 256) % 256 | v3 & -256; // 0x3c0d51
    char * v7 = (char *)(v1 + 0x1e89948); // 0x3c0d53
    *v7 = *v7 | (char)a4;
    int32_t * v8 = (int32_t *)(v1 - 0x54280852); // 0x3c0d59
    uint32_t v9 = *v8; // 0x3c0d59
    *v8 = (int32_t)v1;
    char v10 = *(char *)(a2 - 0x66fe1748); // 0x3c0d61
    int64_t v11; // bp-8, 0x3c0d3c
    int32_t v12 = (int64_t)&v11; // 0x3c0d68
    *(int32_t *)v6 = (int32_t)v6;
    int64_t v13 = v6; // 0x3c0d70
    if ((int32_t)a6 == v12) {
        v13 = function_3c0d1d();
    }
    uint32_t v14 = v9 / 256; // 0x3c0d5f
    int64_t v15 = v9 & -0xff01; // 0x3c0d61
    int32_t * v16 = (int32_t *)(4 * a1 - 0x5041fac0); // 0x3c0d74
    uint32_t v17 = (int32_t)(((int64_t)v14 + a4) % 256 | a4 & 0xffffff00); // 0x3c0d74
    *v16 = *v16 + v17;
    unsigned char v18 = *(char *)(v13 % 256 + (256 * (int64_t)(v10 | (char)v14) | v15) & 0xffffffff); // 0x3c0d7b
    __asm_out(-46, v18);
    char v19 = *(char *)(v1 - 24); // 0x3c0d82
    int32_t * v20 = (int32_t *)(a1 - 0x4b66006e); // 0x3c0d85
    uint32_t v21 = *v20; // 0x3c0d85
    uint32_t v22 = v21 + v12; // 0x3c0d85
    *v20 = v22;
    int32_t v23 = *(int32_t *)(v15 | (int64_t)&g1 & -0xff01 | 256 * (int64_t)(v19 ^ (char)((int64_t)&g1 >> 8))); // 0x3c0d8b
    int32_t * v24 = (int32_t *)(v13 & -256 | (int64_t)v18); // 0x3c0d8d
    uint32_t v25 = *v24; // 0x3c0d8d
    int32_t v26 = v25 + v17; // 0x3c0d8d
    unsigned char v27 = llvm_ctpop_i8((char)v26); // 0x3c0d8d
    *v24 = v26;
    __asm_iretd();
    bool v28; // 0x3c0d3c
    *(int64_t *)(int64_t)(v12 - v23 + (int32_t)(v22 < v21)) = 0x4000 * (int64_t)v28 | 1024 * (int64_t)v28 | 512 * (int64_t)v28 | 256 * (int64_t)v28 | (int64_t)(v26 < v25) | 64 * (int64_t)(v26 == 0) | 128 * (int64_t)(v26 < 0) | 16 * (int64_t)(v25 % 16 + v17 % 16 > 15) | 2048 * (int64_t)(((v26 ^ v25) & (v26 ^ v17)) < 0) | 4 * (int64_t)(v27 % 2 == 0) | 2;
    int64_t result = unknown_480f0099(); // 0x3c0d93
    int32_t * v29 = (int32_t *)(a1 - 128); // 0x3c0d98
    *v29 = *v29 + (int32_t)a1;
    return result;
}

// Address range: 0x3c0e26 - 0x3c0e53
int64_t function_3c0e26(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3c0e26
    int64_t v1; // 0x3c0e26
    *(int32_t *)a4 = 2 * (int32_t)v1;
    int64_t v2; // 0x3c0e26
    __asm_outsb((int16_t)a3, *(char *)&v2);
    uint64_t v3 = unknown_3dce023e() + 2 * v1; // 0x3c0e3f
    int64_t v4; // 0x3c0e26
    uint32_t v5 = *(int32_t *)&v4; // 0x3c0e41
    uint32_t v6 = v5 + (int32_t)v3; // 0x3c0e41
    *(int32_t *)a3 = v6;
    char v7 = *(char *)(v3 % 256 + (v1 & -256 | 246)); // 0x3c0e43
    int32_t * v8 = (int32_t *)((256 * (v1 / 256 + a3 / 256 + (int64_t)(v6 < v5)) & 0xff00 | a3 & -0xff01) + 68); // 0x3c0e48
    uint32_t v9 = *v8; // 0x3c0e48
    uint32_t v10 = v9 + (int32_t)a1; // 0x3c0e48
    *v8 = v10;
    int64_t v11; // 0x3c0e26
    char v12 = *(char *)&v11; // 0x3c0e4b
    *(char *)a1 = v7 + (char)(a4 / 256) + v12 + (char)(v10 < v9);
    return unknown_3a695153();
}

// Address range: 0x3c0e6c - 0x3c0e6d
int64_t function_3c0e6c(int64_t a1) {
    // 0x3c0e6c
    int64_t result; // 0x3c0e6c
    return result;
}

// Address range: 0x3c0ec9 - 0x3c0eca
int64_t function_3c0ec9(int64_t a1) {
    // 0x3c0ec9
    int64_t result; // 0x3c0ec9
    return result;
}

// Address range: 0x3c0f01 - 0x3c0f02
int64_t function_3c0f01(void) {
    // 0x3c0f01
    int64_t result; // 0x3c0f01
    return result;
}

// Address range: 0x3c0f10 - 0x3c0f47
int64_t function_3c0f10(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_24222716(); // 0x3c0f10
    int32_t * v2 = (int32_t *)(a3 + 0x1e8aea5); // 0x3c0f15
    *v2 = *v2 + (int32_t)a1;
    char v3 = v1; // 0x3c0f1b
    __asm_out(-34, v3);
    *(char *)-0x94ffe179b80efeb = v3;
    __asm_out_134((int16_t)a3, (int32_t)v1);
    int64_t v4 = v1 + 0x17d7ff0c; // 0x3c0f2b
    int32_t * v5 = (int32_t *)((v4 & 0xffffffff) - 69); // 0x3c0f32
    *v5 = *v5 - 1;
    *(int32_t *)a1 = (int32_t)v4;
    bool v6; // 0x3c0f10
    int64_t v7 = (v6 ? -4 : 4) + a1; // 0x3c0f35
    int64_t v8; // 0x3c0f10
    char * v9 = (char *)(v8 + 58 + v7); // 0x3c0f36
    *v9 = *v9 + (char)(a4 / 256);
    unknown_6e469742(v7);
    return function_2250558();
}

// Address range: 0x3c0f47 - 0x3c10af
int64_t function_3c0f47(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c0f47
    int64_t v1; // 0x3c0f47
    int64_t v2 = v1;
    *(char *)(v2 - 65 + 2 * v2) = (char)(v1 / 256);
    char * v3 = (char *)(v1 - 0x7eb76400); // 0x3c0f4b
    *v3 = *v3 + (char)v1;
    char v4 = __asm_in_135((int16_t)a3); // 0x3c0f52
    int64_t v5 = v1 & -256 | (int64_t)v4; // 0x3c0f52
    char * v6 = (char *)v5; // 0x3c0f53
    *v6 = (*v6 | v4) + v4;
    return function_caf2a(a1, v5, a3, a4, v1, v1, 169);
}

// Address range: 0x3c10af - 0x3c11f8
int64_t function_3c10af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3c10af
    int64_t v1; // bp-48, 0x3c10af
    int64_t v2 = (int64_t)&v1; // 0x3c1177
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3c118e
    int64_t v4 = v2 + 8; // 0x3c118e
    *(int64_t *)v4 = *v3;
    *v3 = 0x7dd923ca;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x3c11a0
    *v5 = 0x33c8b19d;
    *(int64_t *)(v2 + 24) = *v3;
    *v5 = v2;
    *v3 = v4;
    int64_t v6; // 0x3c10af
    return function_caf2a(310, a2, a3, a4, a5, a6, v6);
}

// Address range: 0x3c11f8 - 0x3c1372
int64_t function_3c11f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3c11f8
    int64_t v1; // 0x3c11f8
    bool v2; // 0x3c11f8
    return function_caf2a(a1, a2, a3, a4, a5, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x3c139a - 0x3c139d
int64_t function_3c139a(void) {
    // 0x3c139a
    int64_t result; // 0x3c139a
    return result;
}

// Address range: 0x3c139e - 0x3c13a1
int64_t function_3c139e(void) {
    // 0x3c139e
    int64_t result; // 0x3c139e
    return result;
}

// Address range: 0x430293 - 0x4303ea
int64_t function_430293(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x430293
    bool v1; // 0x430293
    if (v1) {
        function_43022f();
    }
    // 0x430295
    int64_t v2; // 0x430293
    if ((int32_t)(v2 & v2) < 0) {
        function_430244();
    }
    int32_t v3 = __asm_in((int16_t)a3 & -256 | 72); // 0x4302a1
    *(char *)a1 = (char)v3;
    return __asm_sti((v1 ? -1 : 1) + a1, (int64_t)(v3 + 13 & 233 | v3 & 0x31f62300)) ^ 135;
}

// Address range: 0x4303f0 - 0x4303f3
int64_t function_4303f0(void) {
    // 0x4303f0
    int64_t result; // 0x4303f0
    return result;
}

// Address range: 0x4303fc - 0x43040b
int64_t function_4303fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4303fc
    int64_t result; // 0x4303fc
    char * v1 = (char *)(result - 49); // 0x430403
    *v1 = *v1 ^ (char)a4;
    return result;
}

// Address range: 0x43048a - 0x430695
int64_t function_43048a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x43048a
    int64_t v1; // 0x43048a
    uint64_t v2 = v1;
    int64_t v3 = a1;
    bool v4; // 0x43048a
    int64_t v5 = v1 + 0x3c278f1c + (int64_t)v4; // 0x43048a
    int16_t v6 = 33; // bp-2, 0x43048f
    uint32_t v7 = (int32_t)v2;
    int32_t v8 = v7 + 0x7576c9e3; // 0x430492
    *(int32_t *)v2 = v8;
    *(char *)0x646e719c6e29281c = (char)v5;
    if (v8 >= 1) {
        uint32_t v9 = *(int32_t *)0x4fd21bb6 & (int32_t)a3; // 0x4304a5
        char * v10 = (char *)(5 * v3); // 0x4304ab
        *v10 = *v10 | (char)(v2 / 256);
        int32_t * v11 = (int32_t *)(int64_t)v9; // 0x4304ae
        *v11 = *v11 - (int32_t)((v5 + 101) % 256 | v5 & 0xffffff00);
        int32_t v12 = v9 ^ (int32_t)a2; // 0x4304b0
        int32_t v13 = (int32_t)v5 >> 31; // 0x4304b2
        if (v12 >= 0 == (v12 != 0)) {
            // 0x4304e0
            __asm_in_137(-84);
            *(char *)v3 = *(char *)&v3 | (char)v13;
            *(char *)v3 = __asm_insb((int16_t)v13);
            return (int64_t)*(char *)(v2 + 55) | 0x877cef00;
        }
        // 0x4304b5
        *(char *)v3 = (char)(__asm_wait() / 256);
        int64_t v14 = __asm_in((int16_t)v13); // 0x4304c4
        int32_t * v15; // 0x43048a
        if (*v15 < *(int32_t *)&v3) {
            // 0x4304c9
            return v14 & 0xffffffff ^ 0x3c3c9c78;
        }
        // 0x4304f6
        return v14 | 206;
    }
    int32_t * v16 = (int32_t *)(v3 - 0x40ea74e2); // 0x4304ff
    *v16 = (int32_t)(v7 > 0x8a89361c) - v7 + *v16;
    *(int32_t *)v3 = __asm_insd((int16_t)a3);
    char * v17 = (char *)((v5 & 0xffffffff) + 77); // 0x430506
    unsigned char v18 = *v17; // 0x430506
    unsigned char v19 = (char)(v2 / 256); // 0x430506
    *v17 = v18 - v19;
    uint32_t v20 = (int32_t)v5; // 0x430509
    bool v21 = v18 < v19 ? v20 + 0x73221da0 + (int32_t)(v18 < v19) <= v20 : v20 > 0x8cdde25f; // 0x430509
    int64_t result = __asm_int1(); // 0x430511
    if (v21) {
        // 0x430514
        return result;
    }
    char * v22 = (char *)(v2 - 35); // 0x43058e
    char v23 = *v22 - 28; // 0x43058e
    *v22 = v23;
    if (v23 == 0) {
        // 0x430594
        return result & 0x5d3cefe | 0xfa2c3101;
    }
    if (v23 >= 0) {
        // 0x430514
        return result;
    }
    // 0x430635
    *(int32_t *)v3 = __asm_insd((int16_t)*(int64_t *)&v6);
    return result + 0xd531f87f & 0xffffffff;
}

// Address range: 0x4306c9 - 0x4306f3
int64_t function_4306c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_hlt(); // 0x4306c9
    bool v1; // 0x4306c9
    if (v1 || v1) {
        // 0x4306f2
        __asm_out_138((int16_t)a3, (char)result);
        return result;
    }
    // 0x4306e2
    return result;
}

// Address range: 0x430721 - 0x430722
int64_t function_430721(int64_t a1) {
    // 0x430721
    int64_t result; // 0x430721
    return result;
}

// Address range: 0x430740 - 0x430745
int64_t function_430740(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x430740
    int64_t result; // 0x430740
    *(char *)a1 = (char)(result & a4 / 256);
    return result;
}

// Address range: 0x43079d - 0x4307c6
int64_t function_43079d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int32_t v2 = *(int32_t *)0x615f58360ac752ff; // 0x43079d
    bool v3; // 0x43079d
    uint64_t v4 = v3 ? -0x4ebe9e79 : -0x4ebe9e7a; // 0x4307ab
    int64_t v5; // 0x43079d
    int64_t v6 = v5 - v4; // 0x4307ab
    bool v7 = v3 | v5 < v4; // 0x4307ab
    int64_t v8 = v5 - 8; // 0x4307b2
    *(int64_t *)v8 = a4;
    int64_t v9 = v8; // 0x4307b3
    bool v10 = v7; // 0x4307b3
    if (v7 || v6 == 0) {
        uint64_t v11 = v10 ? -0x4ebe9e79 : -0x4ebe9e7a; // 0x4307ab
        int64_t v12 = v6 - v11; // 0x4307ab
        v10 |= v6 < v11;
        v9 -= 8;
        *(int64_t *)v9 = v1;
        while (v10 || v12 == 0) {
            uint64_t v13 = v12;
            v11 = v10 ? -0x4ebe9e79 : -0x4ebe9e7a;
            v12 = v13 - v11;
            v10 |= v13 < v11;
            v9 -= 8;
            *(int64_t *)v9 = v1;
        }
    }
    int16_t v14 = v2; // 0x4307a6
    int16_t v15 = (int16_t)*(char *)(v5 + 124); // 0x4307a6
    uint64_t v16 = v1;
    *(char *)v16 = *(char *)&v1 - (char)(v16 / 256);
    return (int64_t)(v14 / v15 & 45) | (int64_t)(v2 & -0x2cd60000) | (int64_t)(256 * (v14 % v15) & -0x4a00);
}

// Address range: 0x4307f0 - 0x4307f2
int64_t function_4307f0(void) {
    // 0x4307f0
    int64_t v1; // 0x4307f0
    return function_430837(v1, v1, v1);
}

// Address range: 0x430811 - 0x430816
int64_t function_430811(void) {
    // 0x430811
    return function_ffffffffb7ea5b54();
}

// Address range: 0x430837 - 0x43084b
int64_t function_430837(int64_t a1, int64_t a2, int64_t a3) {
    // 0x430837
    int64_t v1; // 0x430837
    char * v2 = (char *)(v1 + 121); // 0x430842
    unsigned char v3 = *v2; // 0x430842
    *v2 = v3 / 2 | 128 * v3;
    *(int32_t *)(v1 - 0x229b0cdb) = (int32_t)a3;
    return (int64_t)*(int32_t *)-0x6f6ca652e28ae045;
}

// Address range: 0x430889 - 0x430892
int64_t function_430889(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x430889
    int64_t v1; // 0x430889
    return v1 & 0xffffffff;
}
