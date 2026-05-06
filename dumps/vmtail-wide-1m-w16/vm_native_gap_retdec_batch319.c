/*
 * Targeted RetDec C for native executable gap queue batch 319.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x10a9bf-0x10abbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10abbf-0x10adbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10adbf-0x10afbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10afbf-0x10b1bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x25bac2-0x25bcc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45d234-0x45d434 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45d634-0x45d834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45da34-0x45dc34 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_10a9b9();
int64_t function_10a9bf(int64_t a1);
int64_t function_10a9da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10aaa8(void);
int64_t function_10aac9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_10aae1(void);
int64_t function_10ab09(void);
int64_t function_10ab1e(void);
int64_t function_10ab39(int64_t a1, int64_t a2);
int64_t function_10abe2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_10ac02(int64_t a1);
int64_t function_10ac1f(int64_t a1);
int64_t function_10ac33(int64_t a1, int64_t a2, int64_t a3);
int64_t function_10ac7c(int64_t a1);
int64_t function_10ad06(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10ad3b(void);
int64_t function_10ad3c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_10ae1a(void);
int64_t function_10ae1d(int64_t a1, int64_t a2);
int64_t function_10ae68(int64_t a1, int64_t a2);
int64_t function_10ae77(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10ae79(void);
int64_t function_10ae8d(void);
int64_t function_10af26(void);
int64_t function_10b102(void);
int64_t function_10b110(void);
int64_t function_10b12c(void);
int64_t function_10b137(int64_t a1, int64_t a2);
int64_t function_10b1a4(void);
int64_t function_1198371e();
int64_t function_25bac2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3d10b16f();
int64_t function_45d234(void);
int64_t function_45d244(int64_t a1);
int64_t function_45d25a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45d288(void);
int64_t function_45d2b2(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_45d2f5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45d31b(int64_t a1);
int64_t function_45d32e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_45d387(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45d3a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_45d40e(void);
int64_t function_45d5bc();
int64_t function_45d632();
int64_t function_45d634(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45d678(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45d685(void);
int64_t function_45d6ac(int64_t a1);
int64_t function_45d6ee(void);
int64_t function_45d6f0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45d70d(void);
int64_t function_45d719(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45d72b(void);
int64_t function_45d7a5(void);
int64_t function_45d7f3(uint64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45da34(void);
int64_t function_45dab8(void);
int64_t function_45db2d(int64_t a1);
int64_t function_45db3e(void);
int64_t function_cf3c7();
int64_t function_ffffffffe2ec161f();
int64_t unknown_222111f2();
int64_t unknown_661b11c5();
int64_t unknown_ffffffffb9250118();
int64_t unknown_ffffffffc53ffee8();
int64_t unknown_ffffffffe566246f();

// Address range: 0x10a9bf - 0x10a9c7
int64_t function_10a9bf(int64_t a1) {
    int64_t result = unknown_661b11c5(a1); // 0x10a9c4
    bool v1; // 0x10a9bf
    if (true == !v1) {
        result = function_10a9b9();
    }
    // 0x10a9c6
    return result;
}

// Address range: 0x10a9da - 0x10a9f4
int64_t function_10a9da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10a9da
    int64_t v1; // 0x10a9da
    *(int32_t *)a2 = 2 * (int32_t)v1;
    return unknown_222111f2();
}

// Address range: 0x10aaa8 - 0x10aaa9
int64_t function_10aaa8(void) {
    // 0x10aaa8
    int64_t result; // 0x10aaa8
    return result;
}

// Address range: 0x10aac9 - 0x10aace
int64_t function_10aac9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x10aac9
    int64_t result; // 0x10aac9
    *(char *)a4 = (char)result + (char)(a4 / 256);
    return result;
}

// Address range: 0x10aae1 - 0x10aae2
int64_t function_10aae1(void) {
    // 0x10aae1
    int64_t result; // 0x10aae1
    return result;
}

// Address range: 0x10ab09 - 0x10ab1b
int64_t function_10ab09(void) {
    // 0x10ab09
    int64_t v1; // 0x10ab09
    *(int32_t *)(v1 - 114) = (int32_t)v1;
    unsigned char v2 = (char)v1; // 0x10ab0c
    bool v3; // 0x10ab09
    char v4 = v3; // 0x10ab0c
    int64_t v5; // 0x10ab09
    unsigned char v6 = *(char *)&v5 + v4; // 0x10ab0c
    char v7 = v2 - v6; // 0x10ab0c
    if (v7 != 0) {
        function_10aae1();
    }
    int64_t result = unknown_ffffffffb9250118(); // 0x10ab17
    if (!((v3 ? v6 != -1 || v7 - v4 > v2 : v6 > v2))) {
        result = function_10aaa8();
    }
    // 0x10ab19
    return result;
}

// Address range: 0x10ab1e - 0x10ab1f
int64_t function_10ab1e(void) {
    // 0x10ab1e
    int64_t result; // 0x10ab1e
    return result;
}

// Address range: 0x10ab39 - 0x10ab43
int64_t function_10ab39(int64_t a1, int64_t a2) {
    // 0x10ab39
    int64_t result; // 0x10ab39
    return result;
}

// Address range: 0x10abe2 - 0x10ac02
int64_t function_10abe2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_ffffffffc53ffee8(); // 0x10abe2
    char v2 = *(char *)0x24072fa2; // 0x10abe7
    int64_t v3; // 0x10abe2
    bool v4; // 0x10abe2
    *(char *)0x24072fa2 = (char)v4 - (char)v3 + v2;
    int32_t * v5 = (int32_t *)(v3 - 0x58fe1766); // 0x10abee
    *v5 = *v5 + (int32_t)a2;
    char v6 = *(char *)-0x67ab83c5df78fec9; // 0x10abf4
    return v1 & -256 | (int64_t)(v6 & (char)(a4 / 256));
}

// Address range: 0x10ac02 - 0x10ac08
int64_t function_10ac02(int64_t a1) {
    // 0x10ac02
    return 0xe27bb41d;
}

// Address range: 0x10ac1f - 0x10ac26
int64_t function_10ac1f(int64_t a1) {
    // 0x10ac1f
    int64_t result; // 0x10ac1f
    int32_t * v1 = (int32_t *)(result + 0x74173a00); // 0x10ac1f
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x10ac33 - 0x10ac38
int64_t function_10ac33(int64_t a1, int64_t a2, int64_t a3) {
    // 0x10ac33
    int64_t result; // 0x10ac33
    *(char *)a2 = (char)(result & result);
    return result;
}

// Address range: 0x10ac7c - 0x10ac7f
int64_t function_10ac7c(int64_t a1) {
    // 0x10ac7c
    int64_t result; // 0x10ac7c
    return result;
}

// Address range: 0x10ad06 - 0x10ad12
int64_t function_10ad06(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10ad06
    int64_t result; // 0x10ad06
    *(int32_t *)a2 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x10ad3b - 0x10ad3c
int64_t function_10ad3b(void) {
    // 0x10ad3b
    int64_t result; // 0x10ad3b
    return result;
}

// Address range: 0x10ad3c - 0x10ada8
int64_t function_10ad3c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x10ad3c
    int64_t v1; // 0x10ad3c
    int32_t v2 = v1; // 0x10ad9b
    int32_t v3 = v2 - 0x5101e83a; // 0x10ad9b
    int64_t result = v3; // 0x10ad9b
    if (v2 >= 0x5101e83b) {
        // 0x10ada2
        *(int32_t *)0x2f13ada9 = *(int32_t *)0x2f13ada9 + (int32_t)a1;
        return result;
    }
    char * v4 = (char *)(a1 - 77);
    int32_t v5 = a1;
    uint32_t v6 = v2;
    int32_t v7 = v3;
    int64_t v8 = result & 0xffff00ff | 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v6 < 0x5101e83a) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v6 % 16 > 25) | 4 * (int64_t)(llvm_ctpop_i8((char)v7) % 2 == 0)) | 512; // 0x10ad8b
    if (v7 != 0) {
        v8 = function_10ad3b();
    }
    // 0x10ad8d
    int64_t v9; // 0x10ad3c
    int64_t v10 = v9 & -256;
    int64_t v11; // 0x10ad3c
    int64_t v12 = v11 & 0xffffffff;
    *v4 = *v4 ^ (char)a3;
    char * v13 = (char *)(a2 - 24 + v10); // 0x10ad91
    *v13 = *v13 + (char)(v11 / 256);
    int32_t * v14 = (int32_t *)(v12 + 58); // 0x10ad95
    *v14 = *v14 + v5;
    int32_t v15 = v8; // 0x10ad9b
    int32_t v16 = v15 - 0x5101e83a; // 0x10ad9b
    int64_t result2 = v16; // 0x10ad9b
    v11 = v12;
    while (v15 < 0x5101e83b) {
        // 0x10ad8a
        v6 = v15;
        v7 = v16;
        v8 = result2 & 0xffff00ff | 256 * (64 * (int64_t)(v7 == 0) | (int64_t)(v6 < 0x5101e83a) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v6 % 16 > 25) | 4 * (int64_t)(llvm_ctpop_i8((char)v7) % 2 == 0)) | 512;
        if (v7 != 0) {
            v8 = function_10ad3b();
        }
        // 0x10ad8d
        v10 &= -256;
        v12 = v11 & 0xffffffff;
        *v4 = *v4 ^ (char)a3;
        v13 = (char *)(a2 - 24 + v10);
        *v13 = *v13 + (char)(v11 / 256);
        v14 = (int32_t *)(v12 + 58);
        *v14 = *v14 + v5;
        v15 = v8;
        v16 = v15 - 0x5101e83a;
        result2 = v16;
        v11 = v12;
    }
    // 0x10ada2
    *(int32_t *)0x2f13ada9 = *(int32_t *)0x2f13ada9 + v5;
    return result2;
}

// Address range: 0x10ae1a - 0x10ae1c
int64_t function_10ae1a(void) {
    // 0x10ae1a
    int64_t result; // 0x10ae1a
    return result;
}

// Address range: 0x10ae1d - 0x10ae25
int64_t function_10ae1d(int64_t a1, int64_t a2) {
    // 0x10ae1d
    int64_t result; // 0x10ae1d
    *(int32_t *)a2 = 2 * (int32_t)result;
    int32_t * v1 = (int32_t *)(result - 67); // 0x10ae1f
    *v1 = *v1 | (int32_t)a2;
    return result;
}

// Address range: 0x10ae68 - 0x10ae76
int64_t function_10ae68(int64_t a1, int64_t a2) {
    // 0x10ae68
    unknown_ffffffffe566246f(a1, a2);
    *(int32_t *)(a2 - 0x5852fc84) = (int32_t)a2;
    return function_10ae79();
}

// Address range: 0x10ae77 - 0x10ae79
int64_t function_10ae77(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10ae77
    int64_t result; // 0x10ae77
    return result;
}

// Address range: 0x10ae79 - 0x10ae7a
int64_t function_10ae79(void) {
    // 0x10ae79
    int64_t result; // 0x10ae79
    return result;
}

// Address range: 0x10ae8d - 0x10ae8e
int64_t function_10ae8d(void) {
    // 0x10ae8d
    int64_t result; // 0x10ae8d
    return result;
}

// Address range: 0x10af26 - 0x10af27
int64_t function_10af26(void) {
    // 0x10af26
    int64_t result; // 0x10af26
    return result;
}

// Address range: 0x10b102 - 0x10b107
int64_t function_10b102(void) {
    // 0x10b102
    return function_3d10b16f();
}

// Address range: 0x10b110 - 0x10b111
int64_t function_10b110(void) {
    // 0x10b110
    int64_t result; // 0x10b110
    return result;
}

// Address range: 0x10b12c - 0x10b12d
int64_t function_10b12c(void) {
    // 0x10b12c
    int64_t result; // 0x10b12c
    return result;
}

// Address range: 0x10b137 - 0x10b13c
int64_t function_10b137(int64_t a1, int64_t a2) {
    // 0x10b137
    int64_t v1; // 0x10b137
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_10b12c();
}

// Address range: 0x10b1a4 - 0x10b1aa
int64_t function_10b1a4(void) {
    // 0x10b1a4
    int64_t result; // 0x10b1a4
    return result;
}

// Address range: 0x25bac2 - 0x25bc0a
int64_t function_25bac2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x25bac2
    return function_cf3c7(a1, a2, a3, a4);
}

// Address range: 0x45d234 - 0x45d235
int64_t function_45d234(void) {
    // 0x45d234
    int64_t result; // 0x45d234
    return result;
}

// Address range: 0x45d244 - 0x45d245
int64_t function_45d244(int64_t a1) {
    // 0x45d244
    int64_t result; // 0x45d244
    return result;
}

// Address range: 0x45d25a - 0x45d263
int64_t function_45d25a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45d25a
    return a2 & 0xffffffff;
}

// Address range: 0x45d288 - 0x45d28c
int64_t function_45d288(void) {
    // 0x45d288
    int64_t result; // 0x45d288
    return result;
}

// Address range: 0x45d2b2 - 0x45d2f1
int64_t function_45d2b2(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0x45d2b2
    int64_t v1; // 0x45d2b2
    int64_t v2 = v1;
    bool v3; // 0x45d2b2
    bool v4 = v3;
    int64_t v5 = a2;
    if (v3) {
        char * v6 = (char *)(v1 - 64); // 0x45d2b4
        *v6 = (char)v4 + (char)(a3 / 256) + *v6;
        int64_t v7 = (char)(a4 / 256) < (char)(v1 / 256) ? 40 : 39; // 0x45d2b9
        return (v2 - v7) % 256 | v2 & -256;
    }
    uint32_t v8 = (int32_t)v1; // 0x45d2cb
    uint32_t v9 = 2 * v8; // 0x45d2cb
    bool v10 = v4 ? (v9 | (int32_t)v4) <= v8 : v9 < v8; // 0x45d2cb
    char * v11 = (char *)(a2 + 46); // 0x45d2cd
    unsigned char v12 = (char)a3; // 0x45d2cd
    *v11 = (char)v10 - v12 + *v11;
    *(char *)a1 = *(char *)&v5;
    int64_t v13 = v3 ? -1 : 1; // 0x45d2d0
    int64_t v14 = v13 + a1; // 0x45d2d0
    v5 += v13;
    *(int32_t *)v14 = (int32_t)v2;
    int64_t v15 = v3 ? -4 : 4; // 0x45d2d1
    int64_t v16 = v14 + v15; // 0x45d2d1
    uint64_t v17 = a3 / 256; // 0x45d2d2
    int64_t v18 = 256 * (v17 - a3) & 0xff00 | a3 & -0xff01; // 0x45d2d2
    int32_t * v19 = (int32_t *)v18; // 0x45d2d4
    *v19 = (int32_t)v16 + (int32_t)((char)v17 < v12) + *v19;
    unsigned char v20 = *(char *)v16; // 0x45d2e0
    int32_t * v21 = (int32_t *)(v1 + 33); // 0x45d2ed
    int32_t v22 = *v21; // 0x45d2ed
    *v21 = v22 ^ (int32_t)v1 + (int32_t)v18 + (int32_t)(v20 > (char)v2);
    unsigned char v23 = *(char *)(v5 + v15); // 0x45d2f0
    return (int64_t)v23 | (int64_t)(*(int32_t *)v5 & -256);
}

// Address range: 0x45d2f5 - 0x45d2f9
int64_t function_45d2f5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45d2f5
    return a3 & 0xffffffff;
}

// Address range: 0x45d31b - 0x45d32e
int64_t function_45d31b(int64_t a1) {
    // 0x45d31b
    int64_t v1; // 0x45d31b
    int64_t v2 = v1;
    int64_t result = v2 & 0xc22bd200 | v2 + 18 & 125 | 0x3dd42d82; // 0x45d31d
    *(char *)-0x2f69d4ad3d7dff8f = (char)result;
    return result;
}

// Address range: 0x45d32e - 0x45d346
int64_t function_45d32e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x45d32e
    int64_t v1; // 0x45d32e
    __asm_outsd((int16_t)a3, (int32_t)v1);
    char * v2 = (char *)(a1 - 0x6abbeb79); // 0x45d32f
    bool v3; // 0x45d32e
    *v2 = (char)v3 - (char)a4 + *v2;
    int64_t v4; // 0x45d32e
    uint32_t v5 = *(int32_t *)&v4; // 0x45d335
    char * v6 = (char *)(v1 + 0x66260a34); // 0x45d337
    *v6 = *v6 + (char)(a3 / 256) + (char)(v5 < (int32_t)v1);
    return function_ffffffffe2ec161f();
}

// Address range: 0x45d387 - 0x45d396
int64_t function_45d387(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45d387
    int64_t v1; // 0x45d387
    bool v2; // 0x45d387
    return v1 - (v2 ? 0xca3f295 : 0xca3f294) & 0xffffffff;
}

// Address range: 0x45d3a1 - 0x45d40d
int64_t function_45d3a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x45d3a1
    int64_t result; // 0x45d3a1
    if (a4 != 1 && (result & 43) != 0) {
        // 0x45d3ad
        return result;
    }
    // 0x45d3aa
    *(char *)a1 = (char)result;
    if ((result & 43) != 0) {
        // 0x45d3ad
        return result;
    }
    int32_t * v1 = (int32_t *)(result - 0x18c79e94); // 0x45d405
    *v1 = *v1 & (int32_t)result;
    return result;
}

// Address range: 0x45d40e - 0x45d411
int64_t function_45d40e(void) {
    // 0x45d40e
    int64_t result; // 0x45d40e
    return result;
}

// Address range: 0x45d634 - 0x45d676
int64_t function_45d634(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = a3 & 0xffffffff; // 0x45d637
    bool v1; // 0x45d634
    if (!v1) {
        result = function_45d5bc();
    }
    // 0x45d639
    if (!v1) {
        // 0x45d63c
        return result;
    }
    int64_t v2 = result & -256; // 0x45d661
    if (v1) {
        v2 = function_45d632();
    }
    // 0x45d663
    return v2 & 0x70e63600 | (int64_t)(*(char *)0x3257d647f8327363 & 2);
}

// Address range: 0x45d678 - 0x45d685
int64_t function_45d678(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45d678
    int64_t v1; // 0x45d678
    uint64_t v2 = v1;
    __asm_int(25);
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x45d685 - 0x45d687
int64_t function_45d685(void) {
    // 0x45d685
    int64_t v1; // 0x45d685
    return function_45d6f0(v1, v1, v1);
}

// Address range: 0x45d6ac - 0x45d6b0
int64_t function_45d6ac(int64_t a1) {
    // 0x45d6ac
    int64_t result; // 0x45d6ac
    *(char *)a1 = 2 * (char)result;
    return result;
}

// Address range: 0x45d6ee - 0x45d6ef
int64_t function_45d6ee(void) {
    // 0x45d6ee
    int64_t result; // 0x45d6ee
    return result;
}

// Address range: 0x45d6f0 - 0x45d6fd
int64_t function_45d6f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45d6f0
    return function_1198371e();
}

// Address range: 0x45d70d - 0x45d70e
int64_t function_45d70d(void) {
    // 0x45d70d
    int64_t result; // 0x45d70d
    return result;
}

// Address range: 0x45d719 - 0x45d71f
int64_t function_45d719(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45d719
    int64_t v1; // 0x45d719
    *(char *)a4 = (char)v1 - (char)(v1 / 256);
    return v1 | 55;
}

// Address range: 0x45d72b - 0x45d72f
int64_t function_45d72b(void) {
    // 0x45d72b
    return function_45d70d();
}

// Address range: 0x45d7a5 - 0x45d7ab
int64_t function_45d7a5(void) {
    // 0x45d7a5
    int64_t result; // 0x45d7a5
    return result;
}

// Address range: 0x45d7f3 - 0x45d806
int64_t function_45d7f3(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45d7f3
    int64_t v1; // 0x45d7f3
    char * v2 = (char *)((v1 & 0xffffffff) - 23); // 0x45d7fe
    *v2 = *v2 & (char)(a1 / 256);
    return a1 & 0xffffffff;
}

// Address range: 0x45da34 - 0x45da35
int64_t function_45da34(void) {
    // 0x45da34
    int64_t result; // 0x45da34
    return result;
}

// Address range: 0x45dab8 - 0x45dac1
int64_t function_45dab8(void) {
    // 0x45dab8
    int64_t v1; // 0x45dab8
    *(char *)v1 = (char)v1;
    return v1 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x45db2d - 0x45db2e
int64_t function_45db2d(int64_t a1) {
    // 0x45db2d
    int64_t result; // 0x45db2d
    return result;
}

// Address range: 0x45db3e - 0x45db4c
int64_t function_45db3e(void) {
    // 0x45db3e
    int64_t v1; // 0x45db3e
    uint64_t v2 = v1;
    char v3 = *(char *)(v1 + 0x574dabc); // 0x45db43
    return 256 * (int64_t)(v3 ^ (char)(v2 / 256)) | v2 & -0xff01;
}
