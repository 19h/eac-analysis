/*
 * Targeted RetDec C for native executable gap queue batch 305.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x16bcaa-0x16beaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16beaa-0x16c0aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16c0aa-0x16c2aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b07ce-0x1b09ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b09ce-0x1b0bce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b0bce-0x1b0dce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b0dce-0x1b0fce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b0fce-0x1b11ce rank=- name=- kind=- bytes=- uncovered=-
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
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint32_t __readfsdword(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
void __writegsbyte(int64_t offset, uint8_t value);
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
void unknown_b6ccb9(void);
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
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
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
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
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

int64_t function_1581154();
int64_t function_16b70ca9();
int64_t function_16bcaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16bcef(int64_t a1);
int64_t function_16bd2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16bd44(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16bd76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16bdde(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16be89(int64_t a1);
int64_t function_16bf05(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16bf38(int64_t a1);
int64_t function_16bf3e(void);
int64_t function_16bf80(void);
int64_t function_16bf84(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16bf90(int64_t a1);
int64_t function_16bf91(void);
int64_t function_16bf95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16bfde(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16c019(void);
int64_t function_16c054(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16c07c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_16c151(int64_t a1);
int64_t function_16c1cb(void);
int64_t function_16c1f5(int64_t a1, int64_t a2);
int64_t function_16c225(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1b07ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1b07ff(void);
int64_t function_1b080b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1b08ad(void);
int64_t function_1b08db(void);
int64_t function_1b0909(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b0938(void);
int64_t function_1b094b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b099f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b09c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1b0a2d(void);
int64_t function_1b0a42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result);
int64_t function_1b0a73(void);
int64_t function_1b0ae1(void);
int64_t function_1b0ae2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1b0bd7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1b0c08(int64_t a1);
int64_t function_1b0c33(void);
int64_t function_1b0c5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1b0ce7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1b0d05(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b0d8d(int64_t a1, int64_t a2);
int64_t function_1b0dac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1b0dd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b0de7(int64_t a1);
int64_t function_1b0ec5(int64_t a1);
int64_t function_1b0f67(void);
int64_t function_1b0f7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b108a(void);
int64_t function_1b1111(void);
int64_t function_1b1121(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ffffffffb0acb13c();
int64_t function_ffffffffb1e09388();
int64_t function_ffffffffb4a3cd3c();
int64_t function_ffffffffbf14badf();
int64_t unknown_10e90e39();
int64_t unknown_171bdb25();
int64_t unknown_19a67b14();
int64_t unknown_1aa3fdf6();
int64_t unknown_1b8ad317();
int64_t unknown_290e24eb();
int64_t unknown_3a79848d();
int64_t unknown_3b0b7c60();
int64_t unknown_3b83f605();
int64_t unknown_491190ab();
int64_t unknown_53184803();
int64_t unknown_5645efd8();
int64_t unknown_68028c7b();
int64_t unknown_6b07a08d();
int64_t unknown_719bd9ef();
int64_t unknown_78b6d523();
int64_t unknown_79727da7();
int64_t unknown_7b4ec17b();
int64_t unknown_7e8f50fa();
int64_t unknown_8064ce7();
int64_t unknown_834feb();
int64_t unknown_ffffffff8479a6f5();
int64_t unknown_ffffffff89187c91();
int64_t unknown_ffffffff8c7d6345();
int64_t unknown_ffffffff93c3c07e();
int64_t unknown_ffffffff9b4016ee();
int64_t unknown_ffffffffa12e0bc8();
int64_t unknown_ffffffffb4a408ba();
int64_t unknown_ffffffffb8accebf();
int64_t unknown_ffffffffbf668124();
int64_t unknown_ffffffffc4a70c3e();
int64_t unknown_ffffffffc85145fe();
int64_t unknown_ffffffffde20e60d();

// Address range: 0x16bcaa - 0x16bcbb
int64_t function_16bcaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int32_t * v2 = (int32_t *)(a2 - 127); // 0x16bcaa
    *v2 = *v2 + (int32_t)a3;
    if (a4 == 1) {
        // 0x16bcaf
        int64_t result; // 0x16bcaa
        return result;
    }
    int64_t result2 = unknown_ffffffffb4a408ba(); // 0x16bcb4
    *(char *)v1 = *(char *)&v1 ^ (char)result2;
    return result2;
}

// Address range: 0x16bcef - 0x16bcf0
int64_t function_16bcef(int64_t a1) {
    // 0x16bcef
    int64_t result; // 0x16bcef
    return result;
}

// Address range: 0x16bd2c - 0x16bd41
int64_t function_16bd2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x4dfdb8a0); // 0x16bd2e
    int64_t v2; // 0x16bd2c
    *v1 = *v1 + (int32_t)v2;
    *(int32_t *)a1 = (int32_t)a3;
    bool v3; // 0x16bd2c
    return unknown_ffffffffc4a70c3e((v3 ? -4 : 4) + a1);
}

// Address range: 0x16bd44 - 0x16bd74
int64_t function_16bd44(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16bd44
    int64_t v1; // 0x16bd44
    char * v2 = (char *)(v1 - 0x17ff5b00); // 0x16bd44
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0x16bd44
    int64_t v4 = v3;
    *(int32_t *)v4 = *(int32_t *)&v3 + (int32_t)v4;
    *(char *)-0x662eb181fb17ff67 = (char)v3;
    char * v5 = (char *)(v1 + 100); // 0x16bd57
    *v5 = *v5 + (char)a3;
    v3 = unknown_3b0b7c60();
    int32_t * v6 = (int32_t *)(a2 + 85); // 0x16bd5f
    *v6 = *v6 ^ (int32_t)a2;
    return v3 | 1;
}

// Address range: 0x16bd76 - 0x16bdd8
int64_t function_16bd76(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16bd76
    int64_t v1; // 0x16bd76
    uint64_t v2 = v1;
    __asm_wait(a1, a2);
    unknown_ffffffff93c3c07e();
    char * v3 = (char *)(v2 + 0x1a002803); // 0x16bd7d
    char v4 = *v3 + (char)(v2 / 256); // 0x16bd7d
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x16bd7d
    *v3 = v4;
    if (v5 % 2 != 0) {
        // 0x16bdd0
        return unknown_5645efd8();
    }
    // 0x16bd87
    unknown_3a79848d();
    return unknown_834feb();
}

// Address range: 0x16bdde - 0x16be80
int64_t function_16bdde(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16bdde
    int64_t v1; // 0x16bdde
    int64_t v2 = (a3 - v1 / 256) % 256 | a3 & -256; // 0x16bdde
    *(char *)a1 = (char)v1;
    bool v3; // 0x16bdde
    int64_t v4 = v3 ? -1 : 1; // 0x16bde0
    int64_t v5 = v4 + a1; // 0x16bde0
    int32_t * v6 = (int32_t *)(unknown_8064ce7(v5, v4 + a2, v2) - 0x13ffe566); // 0x16bde6
    int32_t v7 = v2; // 0x16bde6
    *v6 = *v6 + v7;
    int32_t * v8 = (int32_t *)(v1 + 4); // 0x16bdec
    uint32_t v9 = *v8; // 0x16bdec
    *v8 = (int32_t)v5;
    unknown_1aa3fdf6(v9);
    char v10 = a4; // 0x16bdf8
    unsigned char v11 = v10 % 32; // 0x16bdf8
    if (v11 != 0) {
        char * v12 = (char *)(v1 - 0x45d5d3a0); // 0x16bdf8
        unsigned char v13 = *v12; // 0x16bdf8
        *v12 = v13 >> 8 - v11 | v13 << v11;
    }
    int64_t v14 = v9; // 0x16bdec
    *(char *)0x766291ba5d362980 = (char)unknown_3b83f605();
    unknown_19a67b14();
    __asm_wait(v14 - 1, a5 - 1);
    int64_t v15 = unknown_78b6d523(); // 0x16be1d
    int32_t * v16 = (int32_t *)(a5 + 0x159f9fed + 4 * v15); // 0x16be22
    *v16 = *v16 - 1;
    *(int32_t *)0x1b97e24cfacb01e8 = (int32_t)v15;
    int64_t result = v15 & 0xffffffff ^ 0x570e508; // 0x16be61
    if (v10 < 0) {
        // 0x16be52
        return result;
    }
    int32_t * v17 = (int32_t *)(v1 + 103); // 0x16be6a
    int32_t v18 = *v17; // 0x16be6a
    *v17 = v18 + ((int32_t)v1 & -0x10000 | (int32_t)((int64_t)&g1 & -256));
    *(char *)(v14 - 2) = (char)result;
    *(char *)0x1218a724 = (char)((v7 - *(int32_t *)(a4 + 0x6d3950)) / 256);
    return result & 0xffffff00 | (int64_t)*(char *)-0x6edb6b54fec2fe18;
}

// Address range: 0x16be89 - 0x16be8a
int64_t function_16be89(int64_t a1) {
    // 0x16be89
    int64_t result; // 0x16be89
    return result;
}

// Address range: 0x16bf05 - 0x16bf0e
int64_t function_16bf05(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16bf05
    return a2 & 0xffffffff;
}

// Address range: 0x16bf38 - 0x16bf3b
int64_t function_16bf38(int64_t a1) {
    // 0x16bf38
    int64_t result; // 0x16bf38
    return result;
}

// Address range: 0x16bf3e - 0x16bf43
int64_t function_16bf3e(void) {
    // 0x16bf3e
    return function_ffffffffb4a3cd3c();
}

// Address range: 0x16bf80 - 0x16bf81
int64_t function_16bf80(void) {
    // 0x16bf80
    int64_t result; // 0x16bf80
    return result;
}

// Address range: 0x16bf84 - 0x16bf90
int64_t function_16bf84(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16bf84
    unknown_6b07a08d();
    return function_16bf80();
}

// Address range: 0x16bf90 - 0x16bf91
int64_t function_16bf90(int64_t a1) {
    // 0x16bf90
    int64_t result; // 0x16bf90
    return result;
}

// Address range: 0x16bf91 - 0x16bf95
int64_t function_16bf91(void) {
    // 0x16bf91
    int64_t result; // 0x16bf91
    char * v1 = (char *)(result + 103); // 0x16bf91
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x16bf95 - 0x16bfb9
int64_t function_16bf95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16bf95
    int64_t v1; // 0x16bf95
    int64_t v2 = v1;
    int64_t v3 = (v2 + v1) % 256 | v2 & -256; // 0x16bfa1
    int32_t * v4 = (int32_t *)v3; // 0x16bfa3
    *v4 = *v4 | (int32_t)v3;
    int64_t v5 = unknown_491190ab(); // 0x16bfa5
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int32_t v6 = *(int32_t *)v5; // 0x16bfab
    unsigned char v7 = *(char *)0x1e8ef2c6b82220e; // 0x16bfad
    return (int64_t)(v6 + (int32_t)v5 & -256) | (int64_t)v7;
}

// Address range: 0x16bfde - 0x16bff0
int64_t function_16bfde(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16bfde
    int64_t v1; // 0x16bfde
    char * v2 = (char *)(v1 - 0x17ec2156); // 0x16bfde
    *v2 = *v2 + (char)v1;
    int32_t * v3 = (int32_t *)(a2 + 61); // 0x16bfe4
    uint32_t v4 = *v3; // 0x16bfe4
    uint32_t v5 = v4 + (int32_t)a4; // 0x16bfe4
    *v3 = v5;
    int64_t result = v1 & -0xff01 | (int64_t)&g5; // 0x16bfe7
    int32_t * v6 = (int32_t *)(a4 - 0x1448b900); // 0x16bfe9
    *v6 = *v6 - (int32_t)result + (int32_t)(v5 < v4);
    return result;
}

// Address range: 0x16c019 - 0x16c01c
int64_t function_16c019(void) {
    // 0x16c019
    int64_t result; // 0x16c019
    return result;
}

// Address range: 0x16c054 - 0x16c05e
int64_t function_16c054(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x13d0063); // 0x16c054
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x16c054
    uint64_t v3 = v2;
    return v3 % 256 * (int64_t)*(char *)&v2 | v3 & -0x10000;
}

// Address range: 0x16c07c - 0x16c113
int64_t function_16c07c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x16c07c
    int32_t * v3 = (int32_t *)(v2 + 0x760d5059); // 0x16c07c
    *v3 = *v3 & (int32_t)v2;
    int32_t v4 = v2; // 0x16c082
    __asm_out(36, v4);
    char v5 = *(char *)&v1; // 0x16c08b
    char v6 = (char)((v4 & -256 | 199) < 0x889c0001) + (char)(a3 / 256) + v5; // 0x16c08b
    *(char *)a1 = v6;
    int32_t v7 = __asm_in(-23); // 0x16c08d
    if (v6 != 0) {
        int32_t * v8 = (int32_t *)(a3 + 0x3d002111 + a4); // 0x16c0fd
        *v8 = *v8 + ((v7 + 24) % 256 | v7 & -256);
        return unknown_7b4ec17b(v1 - 1, a2 - 1);
    }
    int64_t v9 = v7; // 0x16c08d
    int64_t v10 = (v9 + 204) % 256 | v9 & -256;
    int64_t v11 = v10 & 23 | 232; // 0x16c09b
    int64_t v12 = v11 | v10 & -256; // 0x16c09b
    int32_t * v13 = (int32_t *)v12; // 0x16c09d
    uint32_t v14 = (int32_t)v12;
    *v13 = *v13 + v14;
    int32_t v15 = v14 - 0x10f94001; // 0x16c09f
    while (llvm_ctpop_i8((char)v15) % 2 == 0) {
        // 0x16c098
        v10 = v12;
        v11 = v10 & 23 | 232;
        v12 = v11 | v10 & -256;
        v13 = (int32_t *)v12;
        v14 = (int32_t)v12;
        *v13 = *v13 + v14;
        v15 = v14 - 0x10f94001;
    }
    // 0x16c0a9
    return (v11 | v10 & -0x10000 | 256 * (128 * (int64_t)(v15 < 0) | (int64_t)(v14 < 0x10f94001))) ^ 634;
}

// Address range: 0x16c151 - 0x16c152
int64_t function_16c151(int64_t a1) {
    // 0x16c151
    int64_t result; // 0x16c151
    return result;
}

// Address range: 0x16c1cb - 0x16c1cc
int64_t function_16c1cb(void) {
    // 0x16c1cb
    int64_t result; // 0x16c1cb
    return result;
}

// Address range: 0x16c1f5 - 0x16c210
int64_t function_16c1f5(int64_t a1, int64_t a2) {
    // 0x16c1f5
    int64_t result; // 0x16c1f5
    bool v1; // 0x16c1f5
    if (v1) {
        int32_t * v2 = (int32_t *)(function_16c1cb() + 27); // 0x16c1f9
        int64_t v3; // 0x16c1f5
        *v2 = *v2 + (int32_t)v3;
        int64_t v4 = __asm_hlt() ^ 55; // 0x16c1fe
        *(char *)a1 = (char)v4;
        result = v4;
    }
    // 0x16c20d
    return result;
}

// Address range: 0x16c225 - 0x16c230
int64_t function_16c225(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16c225
    int64_t result; // 0x16c225
    float80_t v1; // 0x16c225
    *(float80_t *)(result - 0x1e7fc087) = __asm_fbstp(v1);
    __asm_out_133((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x1b07ce - 0x1b07f1
int64_t function_1b07ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1b07ce
    int64_t v1; // 0x1b07ce
    int64_t v2 = v1;
    *(char *)-0x54e3102c = *(char *)-0x54e3102c ^ (char)v2;
    char * v3 = (char *)(a4 + 0x3aab1b00); // 0x1b07d4
    unsigned char v4 = *v3; // 0x1b07d4
    unsigned char v5 = v4 + (char)(v1 / 256); // 0x1b07d4
    *v3 = v5;
    *(int32_t *)(v1 - 0x5851ec23) = (int32_t)a4;
    bool v6; // 0x1b07ce
    int64_t v7 = v6 ? 0xffffffff : 1; // 0x1b07e2
    return v7 + a1 + ((v2 + 215 + (int64_t)(v5 < v4)) % 256 | v2 & 0xffffff00) & 0xffffffff;
}

// Address range: 0x1b07ff - 0x1b0800
int64_t function_1b07ff(void) {
    // 0x1b07ff
    int64_t result; // 0x1b07ff
    return result;
}

// Address range: 0x1b080b - 0x1b0816
int64_t function_1b080b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1b080b
    float80_t v1; // 0x1b080b
    *(int16_t *)(a4 + 0x1e8bad4) = (int16_t)v1;
    int64_t result; // 0x1b080b
    return result;
}

// Address range: 0x1b08ad - 0x1b08ae
int64_t function_1b08ad(void) {
    // 0x1b08ad
    int64_t result; // 0x1b08ad
    return result;
}

// Address range: 0x1b08db - 0x1b08de
int64_t function_1b08db(void) {
    // 0x1b08db
    int64_t result; // 0x1b08db
    return result;
}

// Address range: 0x1b0909 - 0x1b091e
int64_t function_1b0909(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b0909
    int64_t v1; // 0x1b0909
    uint64_t v2 = v1;
    int64_t v3; // 0x1b0909
    if (*(char *)(v2 + 69) != (char)(v2 / 256)) {
        v3 = function_1b08ad();
    }
    unsigned char v4 = (char)v3; // 0x1b0913
    *(char *)v3 = v4 / 128 | 2 * v4;
    int32_t * v5 = (int32_t *)(a3 + 0x2ca1013d); // 0x1b0915
    *v5 = *v5 - (int32_t)a1;
    return a3 & 0xffffffff;
}

// Address range: 0x1b0938 - 0x1b0939
int64_t function_1b0938(void) {
    // 0x1b0938
    int64_t result; // 0x1b0938
    return result;
}

// Address range: 0x1b094b - 0x1b0998
int64_t function_1b094b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b094b
    int64_t v1; // 0x1b094b
    return v1 & 0xffffffff ^ 0xc17ba24f;
}

// Address range: 0x1b099f - 0x1b09a7
int64_t function_1b099f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b099f
    int64_t result; // 0x1b099f
    *(int32_t *)a3 = -(int32_t)result;
    return result;
}

// Address range: 0x1b09c9 - 0x1b09d4
int64_t function_1b09c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1b09c9
    int64_t v1; // 0x1b09c9
    uint64_t result = v1;
    bool v2; // 0x1b09c9
    if (a4 == 1 || v2) {
        // 0x1b09cb
        return result;
    }
    char * v3 = (char *)(a4 - 0x14dd3682); // 0x1b09ce
    *v3 = *v3 + (char)(result / 256);
    return result;
}

// Address range: 0x1b0a2d - 0x1b0a2e
int64_t function_1b0a2d(void) {
    // 0x1b0a2d
    int64_t result; // 0x1b0a2d
    return result;
}

// Address range: 0x1b0a42 - 0x1b0a5e
int64_t function_1b0a42(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result) {
    // 0x1b0a42
    int64_t v1; // 0x1b0a42
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 | -122;
    int64_t v3; // 0x1b0a42
    int64_t v4 = (int64_t)&v3; // bp-8, 0x1b0a47
    int32_t v5; // 0x1b0a42
    int64_t v6; // 0x1b0a42
    int32_t v7; // 0x1b0a42
    int64_t v8; // 0x1b0a42
    if (llvm_ctpop_i8((char)(int64_t)&v4 + 42) % 2 != 0) {
        int64_t v9 = function_1b0a2d(); // 0x1b0a4b
        v8 = v9;
        int32_t v10 = v9;
        v5 = v10;
        v6 = v9;
        v7 = v10;
    } else {
        // 0x1b0a42
        v5 = v8;
        v6 = v8;
        v7 = *(int32_t *)&v8;
    }
    // 0x1b0a4d
    *(int32_t *)v6 = v7 + v5;
    float80_t v11; // 0x1b0a42
    *(float64_t *)(5 * a4) = (float64_t)v11;
    return result;
}

// Address range: 0x1b0a73 - 0x1b0a7d
int64_t function_1b0a73(void) {
    // 0x1b0a73
    int64_t v1; // 0x1b0a73
    __asm_out_134(39, (char)v1);
    return unknown_68028c7b();
}

// Address range: 0x1b0ae1 - 0x1b0ae2
int64_t function_1b0ae1(void) {
    // 0x1b0ae1
    int64_t result; // 0x1b0ae1
    return result;
}

// Address range: 0x1b0ae2 - 0x1b0bd2
int64_t function_1b0ae2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1b0ae2
    unknown_719bd9ef();
    unknown_7e8f50fa();
    int16_t v1 = a3; // 0x1b0af9
    __asm_in_135(v1);
    int64_t v2; // 0x1b0ae2
    *(char *)(a1 + 56) = (char)(v2 / 256) ^ -82;
    int64_t v3 = unknown_53184803(); // 0x1b0afd
    uint64_t v4 = a4 / 2 % 128; // 0x1b0b09
    int64_t v5 = (int64_t)(*(int32_t *)(a2 + 0x78744623) + (int32_t)v3); // 0x1b0b0d
    int32_t * v6 = (int32_t *)(a2 - 85 + 4 * a3); // 0x1b0b16
    *v6 = *v6 + (int32_t)(v4 | a4 & 0xffffff00);
    char * v7 = (char *)v5; // 0x1b0b1a
    char v8 = *v7 + (char)a3; // 0x1b0b1a
    unsigned char v9 = llvm_ctpop_i8(v8); // 0x1b0b1a
    *v7 = v8;
    *(char *)a1 = (char)v4;
    bool v10; // 0x1b0ae2
    int64_t v11 = v10 ? -1 : 1; // 0x1b0b1d
    int64_t v12 = v11 + a1; // 0x1b0b1d
    unknown_ffffffffbf668124(v12);
    if (v9 % 2 == 0) {
        function_1b0ae1();
    }
    // 0x1b0b25
    int64_t v13; // bp-16, 0x1b0ae2
    int64_t v14 = v13 + v2; // 0x1b0b76
    int32_t * v15 = (int32_t *)v12; // 0x1b0b78
    int32_t v16 = *v15; // 0x1b0b78
    int32_t v17 = v14; // 0x1b0b78
    int32_t v18 = v16 + v17; // 0x1b0b78
    *v15 = v18;
    int64_t v19 = v12; // 0x1b0b7a
    int64_t v20 = (int64_t)&v13; // 0x1b0b7a
    int64_t v21 = v14; // 0x1b0b7a
    int32_t v22 = v17; // 0x1b0b7a
    bool v23 = v18 < 0; // 0x1b0b7a
    if (v18 < 0 == ((v18 ^ v16) & (v18 ^ v17)) < 0) {
        v20 = (2 * v20 + 16 & 0xfffffffe) + 8;
        v19 += v11;
        __asm_out_134(-40, (char)(v14 - a3));
        int64_t v24 = *(int64_t *)v20 + v2; // 0x1b0b76
        int32_t * v25 = (int32_t *)v19; // 0x1b0b78
        int32_t v26 = *v25; // 0x1b0b78
        int32_t v27 = v24;
        int32_t v28 = v26 + v27; // 0x1b0b78
        *v25 = v28;
        v21 = v24;
        v22 = v27;
        v23 = v28 < 0;
        while (v28 < 0 == ((v28 ^ v26) & (v28 ^ v27)) < 0) {
            // 0x1b0b7c
            v20 = (2 * v20 + 16 & 0xfffffffe) + 8;
            v19 += v11;
            __asm_out_134(-40, (char)(v24 - a3));
            v24 = *(int64_t *)v20 + v2;
            v25 = (int32_t *)v19;
            v26 = *v25;
            v27 = v24;
            v28 = v26 + v27;
            *v25 = v28;
            v21 = v24;
            v22 = v27;
            v23 = v28 < 0;
        }
    }
    // 0x1b0b9f
    if (!v23) {
        // 0x1b0b63
        __asm_out(-69, v22);
        return v21 & 0xffffffff;
    }
    int64_t v29 = v5 + a3; // 0x1b0ba3
    int64_t v30 = a3 & 0xffffff00 | (int64_t)__asm_in_136(v1); // 0x1b0baa
    *(int32_t *)0xda401e820363a9f = (int32_t)v30;
    int64_t result = unknown_ffffffffa12e0bc8(); // 0x1b0bc2
    if ((v30 + (v29 & 0xff00) & 0xff00 || v29 & 0xffff00ff) != 1) {
        // 0x1b0bd5
        return result;
    }
    char * v31 = (char *)result; // 0x1b0bcc
    unsigned char v32 = *v31; // 0x1b0bcc
    *v31 = v32 / 128 | 2 * v32;
    return result;
}

// Address range: 0x1b0bd7 - 0x1b0c04
int64_t function_1b0bd7(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x1b0bd7
    int64_t result; // 0x1b0bd7
    bool v1; // 0x1b0bd7
    if (v1) {
        // 0x1b0c01
        return result;
    }
    int32_t * v2 = (int32_t *)(result - 0x7bff6e16); // 0x1b0be1
    uint32_t v3 = *v2; // 0x1b0be1
    uint32_t v4 = v3 + (int32_t)a2; // 0x1b0be1
    *v2 = v4;
    int32_t * v5 = (int32_t *)(2 * result); // 0x1b0be7
    *v5 = *v5 + 0x50b33d7e + (int32_t)(v4 < v3);
    unknown_ffffffff8479a6f5();
    unknown_ffffffffc85145fe();
    int64_t result2 = a4 & 0xffffffff; // 0x1b0bfa
    char * v6 = (char *)(result2 + 2); // 0x1b0bfb
    *v6 = (char)result + (char)(a3 / 256) + (char)v1 + *v6;
    return result2;
}

// Address range: 0x1b0c08 - 0x1b0c0a
int64_t function_1b0c08(int64_t a1) {
    // 0x1b0c08
    int64_t result; // 0x1b0c08
    return result;
}

// Address range: 0x1b0c33 - 0x1b0c41
int64_t function_1b0c33(void) {
    // 0x1b0c33
    unknown_10e90e39();
    return function_16b70ca9();
}

// Address range: 0x1b0c5d - 0x1b0ce6
int64_t function_1b0c5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a6;
    int64_t result; // 0x1b0c5d
    bool v2; // 0x1b0c5d
    if (v2) {
        // 0x1b0c60
        return result;
    }
    int64_t result2 = __asm_sti(); // 0x1b0ce1
    int32_t * v3 = (int32_t *)(a5 + 37); // 0x1b0ce2
    int32_t v4 = *v3; // 0x1b0ce2
    *v3 = (int32_t)(-1 - (int32_t)(int64_t)&v1 < (int32_t)result) + (int32_t)result + v4;
    return result2;
}

// Address range: 0x1b0ce7 - 0x1b0cf8
int64_t function_1b0ce7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffff9b4016ee(); // 0x1b0ce8
    *(char *)(a3 - 16) = (char)(a4 / 256);
    int64_t v2; // 0x1b0ce7
    bool v3; // 0x1b0ce7
    int64_t v4 = v1 + v2 + (int64_t)v3; // 0x1b0cf0
    int32_t * v5 = (int32_t *)(a1 + 57); // 0x1b0cf2
    uint32_t v6 = *v5; // 0x1b0cf2
    uint32_t v7 = v6 + (int32_t)a3; // 0x1b0cf2
    *v5 = v7;
    return (v4 - (v7 < v6 ? 18 : 17)) % 256 | v4 & 0xffffff00;
}

// Address range: 0x1b0d05 - 0x1b0d2b
int64_t function_1b0d05(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b0d05
    unknown_ffffffffde20e60d();
    int64_t v1; // 0x1b0d05
    int32_t * v2 = (int32_t *)((0x243a01e8 * v1 & 0xfffffff8) + 53); // 0x1b0d21
    *v2 = *v2 ^ (int32_t)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x1b0d8d - 0x1b0d9a
int64_t function_1b0d8d(int64_t a1, int64_t a2) {
    // 0x1b0d8d
    int64_t v1; // 0x1b0d8d
    int32_t * v2 = (int32_t *)(v1 - 0x4b62c572); // 0x1b0d8d
    *v2 = *v2 + (int32_t)a2;
    return function_ffffffffbf14badf();
}

// Address range: 0x1b0dac - 0x1b0daf
int64_t function_1b0dac(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1b0dac
    int64_t v1; // 0x1b0dac
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x1b0dac
    return v3 == 0 ? v2 : (int64_t)((int32_t)v2 << v3);
}

// Address range: 0x1b0dd8 - 0x1b0de1
int64_t function_1b0dd8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x5b019dd3); // 0x1b0dd8
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x1b0dd8
    return result;
}

// Address range: 0x1b0de7 - 0x1b0deb
int64_t function_1b0de7(int64_t a1) {
    // 0x1b0de7
    int64_t result; // 0x1b0de7
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + 1;
    return result;
}

// Address range: 0x1b0ec5 - 0x1b0ed5
int64_t function_1b0ec5(int64_t a1) {
    // 0x1b0ec5
    int64_t result; // 0x1b0ec5
    int32_t * v1 = (int32_t *)(result - 0x25d0d9d4); // 0x1b0ec5
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1b0f67 - 0x1b0f6c
int64_t function_1b0f67(void) {
    // 0x1b0f67
    return function_1581154();
}

// Address range: 0x1b0f7e - 0x1b1062
int64_t function_1b0f7e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b0f7e
    int64_t v1; // 0x1b0f7e
    int64_t v2 = v1;
    int64_t v3 = a4;
    int64_t v4 = a2;
    int64_t v5 = v1 & 0x17a75bb4 | 0xe858a44b; // 0x1b0f7e
    int32_t * v6 = (int32_t *)(v5 + 0x1d80930a); // 0x1b0f83
    *v6 = *v6 + (int32_t)v1;
    uint32_t v7 = (int32_t)a4 % 32; // 0x1b0f89
    if (v7 != 0) {
        int32_t * v8 = (int32_t *)v5; // 0x1b0f89
        uint32_t v9 = *v8; // 0x1b0f89
        *v8 = v9 >> 32 - v7 | v9 << v7;
    }
    int64_t v10 = unknown_ffffffff89187c91(); // 0x1b0f8b
    char v11 = *(char *)(8 * v2 - 0x170e2d67 + v1); // 0x1b0f90
    int64_t v12 = v1 & -0xff01; // 0x1b0f90
    int64_t v13 = 256 * (int64_t)(v11 | (char)(v1 / 256)) | v12; // 0x1b0f90
    int32_t * v14 = (int32_t *)(a1 - 0x15b8c2a4); // 0x1b0f97
    int32_t v15 = *v14 + (int32_t)v10; // 0x1b0f97
    *v14 = v15;
    int16_t v16; // 0x1b0f7e
    int64_t v17; // 0x1b0f7e
    int64_t v18; // 0x1b0f7e
    int64_t v19; // 0x1b0f7e
    bool v20; // 0x1b0f7e
    if (v15 == 0) {
        // .dec_label_pc_1b0fe5_crit_edge
        v16 = a3;
        v17 = v13;
        v18 = a1;
    } else {
        // 0x1b0f9f
        *(char *)a1 = (char)v10;
        int64_t v21 = v20 ? -1 : 1; // 0x1b0fa0
        int64_t v22 = v21 + a1; // 0x1b0fa0
        unknown_79727da7(v22);
        int16_t v23 = a3;
        char v24 = __asm_insb(v23); // 0x1b0fa6
        char * v25 = (char *)v22; // 0x1b0fa6
        *v25 = v24;
        __asm_outsb(v23, *(char *)&v4);
        *v25 = (char)__asm_in_135(v23);
        int64_t v26 = v22 + v21; // 0x1b0fab
        int64_t v27 = (int64_t)(-0x694efe18 * *(int32_t *)&v4); // 0x1b0fac
        uint32_t v28 = *(int32_t *)&v3; // 0x1b0fb7
        uint32_t v29 = (int32_t)v13; // 0x1b0fb7
        *(int32_t *)v3 = v28 - v29;
        int64_t v30 = unknown_ffffffffb8accebf(v26); // 0x1b0fb9
        *(int32_t *)v26 = (int32_t)v30;
        char v31 = *(char *)(v4 + 0x2001e848); // 0x1b0fc1
        *(int64_t *)(v27 - 8) = v30 & -256 | (int64_t)((char)v30 + (char)(v28 < v29) - v31);
        v3 = v3 & -256 | 232;
        int32_t * v32 = (int32_t *)(a3 + 91 + 4 * a3); // 0x1b0fd0
        uint32_t v33 = *v32; // 0x1b0fd0
        int32_t v34 = v33 + v29; // 0x1b0fd0
        unsigned char v35 = llvm_ctpop_i8((char)v34); // 0x1b0fd0
        *v32 = v34;
        int64_t v36 = v27 - 16; // 0x1b0fd4
        *(int64_t *)v36 = 0x4000 * (int64_t)v20 | 1024 * (int64_t)v20 | 512 * (int64_t)v20 | 256 * (int64_t)v20 | (int64_t)(v34 < v33) | 64 * (int64_t)(v34 == 0) | 128 * (int64_t)(v34 < 0) | 16 * (int64_t)(v33 % 16 + v29 % 16 > 15) | 2048 * (int64_t)(((v34 ^ v33) & (v34 ^ v29)) < 0) | 4 * (int64_t)(v35 % 2 == 0) | 2;
        v16 = v23;
        v17 = v12 | (int64_t)&g2;
        v19 = v36;
        v18 = v26 + (v20 ? -4 : 4);
    }
    uint64_t v37 = v17;
    int64_t v38 = unknown_290e24eb(); // 0x1b0fe5
    char * v39 = (char *)(4 * v3 - 0x17d1b953); // 0x1b0fea
    *v39 = *v39 + (char)v37;
    int32_t * v40 = (int32_t *)(v37 - 112); // 0x1b0ff1
    *v40 = *v40 + (int32_t)v4;
    int64_t v41 = v4; // 0x1b0ff5
    v4 = (int64_t)__asm_in_136(v16) & 0xffffffff | v38 & 0xffffff00;
    *(int64_t *)(v19 - 8) = v18;
    char * v42 = (char *)(v2 - 24 + 2 * v2); // 0x1b1003
    unsigned char v43 = *v42 + 1; // 0x1b1003
    *v42 = v43;
    if (v43 < 1) {
        int64_t v44 = v41 & 0xffffffff ^ 0xe8586a1a; // 0x1b0ff7
        uint32_t v45 = (int32_t)v3 % 32; // 0x1b1058
        if (v45 != 0) {
            int32_t * v46 = (int32_t *)v44; // 0x1b1058
            *v46 = *v46 >> v45;
        }
        int32_t * v47 = (int32_t *)(v3 - 0x47f2590b); // 0x1b105c
        *v47 = *v47 + (int32_t)v37;
        return (v3 / 256 + v44) % 256 | v44 & 0xffffff00;
    }
    int32_t v48 = v18 + v2; // 0x1b1011
    uint64_t v49 = unknown_1b8ad317(v48, v4, 0xd6aaaebd); // 0x1b1011
    char * v50 = (char *)(v49 + 0x35fb900); // 0x1b1016
    *v50 = *v50 + (char)v49;
    *(char *)0xd6aaaebe = *(char *)0xd6aaaebe + (char)(v49 / 256);
    int64_t v51 = unknown_171bdb25(); // 0x1b101f
    int32_t * v52 = (int32_t *)(v37 + 88 + 4 * v4); // 0x1b102f
    *v52 = *v52 + v48;
    char v53 = *(char *)0xd6aaaebd; // 0x1b1033
    char * v54 = (char *)((256 * (int64_t)(v53 + (char)(v37 / 256)) | v37 & -0xff01) + 4 * v2); // 0x1b1039
    *v54 = *v54 | -67;
    char * v55 = (char *)(v2 + 27); // 0x1b103c
    *v55 = *v55 + (((char)v51 | 96) ^ 22);
    int64_t result = unknown_ffffffff8c7d6345(2 * v48); // 0x1b103f
    __asm_out_137(-0x5143, (char)result);
    *(int64_t *)(v19 - 16) = v4 + (v20 ? -4 : 4);
    char * v56 = (char *)(v2 + 0x318751b4); // 0x1b1050
    *v56 = *v56 | 6;
    return result;
}

// Address range: 0x1b108a - 0x1b108f
int64_t function_1b108a(void) {
    // 0x1b108a
    return function_ffffffffb1e09388();
}

// Address range: 0x1b1111 - 0x1b1112
int64_t function_1b1111(void) {
    // 0x1b1111
    int64_t result; // 0x1b1111
    return result;
}

// Address range: 0x1b1121 - 0x1b1194
int64_t function_1b1121(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1b1121
    int64_t result; // 0x1b1121
    int64_t v1; // 0x1b1121
    bool v2; // 0x1b1121
    if (!v2) {
        // 0x1b117e
        __asm_outsd((int16_t)a3, (int32_t)v1);
        int64_t v3 = function_1b1111(); // 0x1b1180
        char v4 = *(char *)0x84edf89; // 0x1b1182
        char v5 = v1 / 256; // 0x1b1182
        char v6 = v4 + v5; // 0x1b1182
        *(char *)0x84edf89 = v6;
        result = v3;
        if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0) {
            result = function_ffffffffb0acb13c();
        }
    } else {
        uint32_t v7 = (int32_t)a4 % 32; // 0x1b1123
        if (v7 != 0) {
            int32_t * v8 = (int32_t *)(v1 - 0x794c1700); // 0x1b1123
            *v8 = *v8 << v7;
        }
    }
    // 0x1b118e
    return result;
}
