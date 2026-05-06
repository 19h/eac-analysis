/*
 * Targeted RetDec C for native executable gap queue batch 571.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1d9a5a-0x1d9c5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d9c5a-0x1d9e5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d9e5a-0x1da05a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1da05a-0x1da25a rank=- name=- kind=- bytes=- uncovered=-
 *   0x3208bb-0x320abb rank=- name=- kind=- bytes=- uncovered=-
 *   0x320abb-0x320cbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x320cbb-0x320ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3210bb-0x3212bb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1d9a5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1d9b35(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d9b3b(int64_t a1, int64_t a2);
int64_t function_1d9bba(void);
int64_t function_1d9bce(int64_t a1);
int64_t function_1d9be7(void);
int64_t function_1d9c04(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d9c50(int64_t a1);
int64_t function_1d9c64(void);
int64_t function_1d9c81(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d9c84(void);
int64_t function_1d9c8d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1d9cc5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1d9d16(void);
int64_t function_1d9d31(void);
int64_t function_1d9d39(void);
int64_t function_1d9d7b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d9d8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d9d9b(void);
int64_t function_1d9d9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d9de7(int64_t a1);
int64_t function_1d9eb6(int64_t a1);
int64_t function_1d9ec2(void);
int64_t function_1d9f42(void);
int64_t function_1d9f59(void);
int64_t function_1d9f72(void);
int64_t function_1d9f7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d9fca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d9ff0(int64_t a1);
int64_t function_1d9ff1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1da031(int64_t a1);
int64_t function_1da085(void);
int64_t function_1da0fb(void);
int64_t function_1da105(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1da167(void);
int64_t function_1da17a(void);
int64_t function_1da1b0(int64_t a1);
int64_t function_1da1c1(int64_t a1, int64_t a2);
int64_t function_1da1c7(int64_t a1);
int64_t function_1da1db(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1da1e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1da22d(void);
int64_t function_2328260();
int64_t function_3208bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_320996(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_320ac6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_320be0(void);
int64_t function_320cae(void);
int64_t function_320cef(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_320cf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_320d08(void);
int64_t function_320d0c(void);
int64_t function_320d26(void);
int64_t function_320d2e(void);
int64_t function_320d3a(void);
int64_t function_320d54(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_320e93(void);
int64_t function_3210bb(void);
int64_t function_3210f3(void);
int64_t function_32112d(int64_t a1);
int64_t function_32113e(void);
int64_t function_321154(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3211f0(int64_t a1);
int64_t function_3211fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_321271(int64_t a1);
int64_t function_321272(int64_t a1, int64_t a2, int64_t a3);
int64_t function_329077();
int64_t function_63cad6f3();
int64_t function_89108a5();
int64_t function_c823b();
int64_t function_ffffffff8157a114();
int64_t function_ffffffffaff2f9f9();
int64_t function_ffffffffbbd1a1e5();
int64_t function_ffffffffe873c16a();
int64_t unknown_3273a076();
int64_t unknown_488365ca();
int64_t unknown_68e2b102();
int64_t unknown_7a863c1();
int64_t unknown_ffffffff91aa87ed();
int64_t unknown_ffffffff94254262();
int64_t unknown_ffffffff9aa8621c();

// Address range: 0x1d9a5a - 0x1d9ac8
int64_t function_1d9a5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t result = a6;
    int64_t v1; // 0x1d9a5a
    *(char *)a1 = (char)v1;
    bool v2; // 0x1d9a5a
    int64_t v3 = v2 ? -1 : 1; // 0x1d9a5a
    int64_t v4 = v3 + a1; // 0x1d9a5a
    int64_t v5 = v3 + a2; // 0x1d9a5a
    int64_t v6 = unknown_ffffffff94254262(v4, v5); // 0x1d9a5c
    int32_t * v7 = (int32_t *)(v1 - 7); // 0x1d9a61
    *v7 = *v7 + 0x72adff6f;
    float80_t v8; // 0x1d9a5a
    *(float32_t *)a3 = (float32_t)v8;
    __asm_int(-34);
    int64_t v9 = 0xa9ada385 * v5; // 0x1d9a71
    int32_t v10 = v4; // 0x1d9a7c
    *(int32_t *)0x1e896b8 = v10;
    *(int16_t *)((v9 & 0xffffffff) - 0x7c73e4ea) = (int16_t)v8;
    int32_t * v11 = (int32_t *)v6; // 0x1d9a8a
    uint32_t v12 = *v11; // 0x1d9a8a
    uint32_t v13 = v12 + v10; // 0x1d9a8a
    *v11 = v13 + (int32_t)v1 + (int32_t)(v13 < v12);
    *(int32_t *)v4 = *(int32_t *)0xe81b5642;
    int32_t * v14 = (int32_t *)(4 * a5 - 126 + (int64_t)&result); // 0x1d9a90
    *v14 = *v14 + (int32_t)a5;
    int64_t v15 = (a5 - (v1 & 0xff00) & 0xff00 | a5 & -0xff01) + 0x1e801e8; // 0x1d9a96
    uint32_t v16 = (int32_t)v9; // 0x1d9aa1
    uint32_t v17 = 2 * v16; // 0x1d9aa1
    int16_t v18 = v17; // 0x1d9aa3
    __asm_out(v18, (char)v15);
    char * v19 = (char *)v15; // 0x1d9aa4
    *v19 = (char)v1 + (char)a4 + (char)(v17 < v16) + *v19;
    __asm_out_133(v18, (int32_t)result);
    *(char *)0x193101e8089325 = (char)result;
    return result;
}

// Address range: 0x1d9b35 - 0x1d9b3a
int64_t function_1d9b35(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d9b35
    int64_t result; // 0x1d9b35
    return result;
}

// Address range: 0x1d9b3b - 0x1d9b48
int64_t function_1d9b3b(int64_t a1, int64_t a2) {
    // 0x1d9b3b
    int64_t v1; // 0x1d9b3b
    char * v2 = (char *)(8 * v1 + a2); // 0x1d9b40
    *v2 = *v2 | (char)v1;
    return function_89108a5(0x8897049e);
}

// Address range: 0x1d9bba - 0x1d9bbb
int64_t function_1d9bba(void) {
    // 0x1d9bba
    int64_t result; // 0x1d9bba
    return result;
}

// Address range: 0x1d9bce - 0x1d9bd1
int64_t function_1d9bce(int64_t a1) {
    // 0x1d9bce
    int64_t result; // 0x1d9bce
    return result;
}

// Address range: 0x1d9be7 - 0x1d9be8
int64_t function_1d9be7(void) {
    // 0x1d9be7
    int64_t result; // 0x1d9be7
    return result;
}

// Address range: 0x1d9c04 - 0x1d9c20
int64_t function_1d9c04(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d9c04
    return unknown_ffffffff9aa8621c();
}

// Address range: 0x1d9c50 - 0x1d9c53
int64_t function_1d9c50(int64_t a1) {
    // 0x1d9c50
    int64_t result; // 0x1d9c50
    return result;
}

// Address range: 0x1d9c64 - 0x1d9c65
int64_t function_1d9c64(void) {
    // 0x1d9c64
    int64_t result; // 0x1d9c64
    return result;
}

// Address range: 0x1d9c81 - 0x1d9c83
int64_t function_1d9c81(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d9c81
    return a4 & 0xffffffff;
}

// Address range: 0x1d9c84 - 0x1d9c85
int64_t function_1d9c84(void) {
    // 0x1d9c84
    int64_t result; // 0x1d9c84
    return result;
}

// Address range: 0x1d9c8d - 0x1d9cc2
int64_t function_1d9c8d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1d9c8d
    int64_t v1; // 0x1d9c8d
    uint64_t v2 = v1;
    int64_t v3 = v1;
    uint64_t v4 = (v3 + 172) % 256 | v3 & 0xffffff00; // 0x1d9c8d
    *(char *)a2 = (char)a2 - (char)(a4 / 256) + (char)((char)v3 > 83);
    uint64_t v5 = v2 / 256;
    if (v4 > v5) {
        // 0x1d9cbe
        return (a3 + 67 + ((char)a3 > 188 ? 217 : 218)) % 256 | a3 & 0xffffff00;
    }
    int64_t v6 = a3 & 0xffffffff; // 0x1d9c91
    int64_t v7 = v6; // 0x1d9c99
    if (v6 < v4) {
        v7 = function_1d9c64();
    }
    uint32_t v8 = (int32_t)v2;
    unsigned char v9 = *(char *)-0x1eb7875c; // 0x1d9c9c
    char v10 = v5; // 0x1d9c9c
    unsigned char v11 = v9 + v10; // 0x1d9c9c
    *(char *)-0x1eb7875c = v11;
    *(int32_t *)v2 = v8 / 0x2000000 | 256 * v8 | 128 * (int32_t)(v11 < v9);
    __asm_out_134(-40, (char)v7);
    int32_t v12 = *(int32_t *)0x20e49560; // 0x1d9ca8
    bool v13; // 0x1d9c8d
    *(int32_t *)0x20e49560 = v12 | (int32_t)((v13 ? 0xfffffffc : 4) + a1);
    *(char *)0x26320fba = *(char *)0x26320fba + v10;
    return function_ffffffff8157a114();
}

// Address range: 0x1d9cc5 - 0x1d9cdd
int64_t function_1d9cc5(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char v1 = *(char *)(a2 + 0x17404b27); // 0x1d9cc5
    bool v2; // 0x1d9cc5
    int64_t v3 = 256 * (int64_t)(v1 + (char)(a3 / 256) + (char)v2) | a3 & -0xff01; // 0x1d9cc5
    int64_t v4; // 0x1d9cc5
    int32_t * v5 = (int32_t *)(v4 + 0x3d01e87c); // 0x1d9ccd
    *v5 = *v5 + (int32_t)a4;
    int32_t * v6 = (int32_t *)(v4 - 0x46a9d669); // 0x1d9cd3
    *v6 = *v6 + (int32_t)v3;
    int64_t result = v4 & -256 | (int64_t)__asm_in((int16_t)v3); // 0x1d9cda
    if (a4 != 1) {
        result = function_1d9c84();
    }
    // 0x1d9cdc
    return result;
}

// Address range: 0x1d9d16 - 0x1d9d17
int64_t function_1d9d16(void) {
    // 0x1d9d16
    int64_t result; // 0x1d9d16
    return result;
}

// Address range: 0x1d9d31 - 0x1d9d33
int64_t function_1d9d31(void) {
    // 0x1d9d31
    return function_1d9d16();
}

// Address range: 0x1d9d39 - 0x1d9d3a
int64_t function_1d9d39(void) {
    // 0x1d9d39
    int64_t result; // 0x1d9d39
    return result;
}

// Address range: 0x1d9d7b - 0x1d9d7e
int64_t function_1d9d7b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d9d7b
    int64_t v1; // 0x1d9d7b
    __asm_outsb((int16_t)a3, (char)v1);
    return function_1d9d39();
}

// Address range: 0x1d9d8e - 0x1d9d9b
int64_t function_1d9d8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d9d8e
    int64_t v1; // 0x1d9d8e
    *(int32_t *)a1 = (int32_t)(v1 | a3);
    int64_t v2; // 0x1d9d8e
    *(int32_t *)a4 = *(int32_t *)&v2 + (int32_t)a2;
    return v1 & 0xffffffff;
}

// Address range: 0x1d9d9b - 0x1d9d9d
int64_t function_1d9d9b(void) {
    // 0x1d9d9b
    int64_t result; // 0x1d9d9b
    bool v1; // 0x1d9d9b
    if (true == !v1) {
        result = function_1d9d39();
    }
    // 0x1d9d9d
    return result;
}

// Address range: 0x1d9d9e - 0x1d9de2
int64_t function_1d9d9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d9d9e
    __asm_hlt(a1, a2);
    int64_t v1 = unknown_3273a076(); // 0x1d9da1
    int32_t * v2 = (int32_t *)(a3 + 21); // 0x1d9da8
    *v2 = *v2 + (int32_t)a1;
    *(int32_t *)0x6401e84278064709 = (int32_t)v1;
    __asm_int(-54);
    __asm_sti();
    int64_t v3; // 0x1d9d9e
    int16_t v4 = (a3 - v3) % 256 | a3 & 0xff00; // 0x1d9dd4
    __asm_in(v4);
    int32_t v5 = __asm_in_135(v4); // 0x1d9dd5
    char * v6 = (char *)(int64_t)v5; // 0x1d9ddb
    *v6 = *v6 | (char)v5;
    return function_ffffffffe873c16a();
}

// Address range: 0x1d9de7 - 0x1d9de8
int64_t function_1d9de7(int64_t a1) {
    // 0x1d9de7
    int64_t result; // 0x1d9de7
    return result;
}

// Address range: 0x1d9eb6 - 0x1d9eb9
int64_t function_1d9eb6(int64_t a1) {
    // 0x1d9eb6
    int64_t result; // 0x1d9eb6
    return result;
}

// Address range: 0x1d9ec2 - 0x1d9ec9
int64_t function_1d9ec2(void) {
    // 0x1d9ec2
    int64_t result; // 0x1d9ec2
    return result;
}

// Address range: 0x1d9f42 - 0x1d9f46
int64_t function_1d9f42(void) {
    // 0x1d9f42
    int64_t result; // 0x1d9f42
    return result;
}

// Address range: 0x1d9f59 - 0x1d9f5c
int64_t function_1d9f59(void) {
    // 0x1d9f59
    int64_t result; // 0x1d9f59
    return result;
}

// Address range: 0x1d9f72 - 0x1d9f73
int64_t function_1d9f72(void) {
    // 0x1d9f72
    int64_t result; // 0x1d9f72
    return result;
}

// Address range: 0x1d9f7a - 0x1d9fc9
int64_t function_1d9f7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d9f7a
    int64_t v1; // 0x1d9f7a
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 + 13); // 0x1d9f7a
    int32_t v4 = v2; // 0x1d9f7a
    *v3 = *v3 + v4;
    int64_t v5; // 0x1d9f7a
    int32_t v6 = *(int32_t *)&v5; // 0x1d9f7d
    *(int32_t *)a1 = v6 - v4;
    int64_t v7 = v1 & 0xffffffff; // 0x1d9f7f
    v5 = v7;
    if (v2 <= (int64_t)v6) {
        int32_t * v8 = (int32_t *)(v7 + 10); // 0x1d9fa4
        *v8 = *v8 + (int32_t)v1;
        __asm_out_136(83, (int32_t)a1);
        *(char *)v5 = (char)unknown_7a863c1();
        bool v9; // 0x1d9f7a
        return unknown_488365ca(v5 + (v9 ? -1 : 1));
    }
    unsigned char v10 = (char)a1 - (char)(v1 / 256); // 0x1d9f82
    int64_t v11 = a1 & 0xffffff00 | (int64_t)v10; // 0x1d9f88
    if (a4 != 1 == v10 == 0) {
        v11 = function_1d9f72();
    }
    // 0x1d9f8a
    *(int32_t *)0x67fb2793 = *(int32_t *)0x67fb2793 + (int32_t)v1;
    return v11 + v2 & 0xffffffff;
}

// Address range: 0x1d9fca - 0x1d9fef
int64_t function_1d9fca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x1d9fcf
    if (v1 != 0) {
        char * v2 = (char *)(a4 - 24); // 0x1d9fcf
        *v2 = *v2 >> v1;
    }
    bool v3; // 0x1d9fca
    int64_t v4 = (v3 ? -1 : 1) + a1; // 0x1d9fce
    int32_t * v5 = (int32_t *)(a2 - 0x3f7f65fe); // 0x1d9fd2
    int64_t v6; // 0x1d9fca
    *v5 = *v5 + (int32_t)v6;
    int32_t * v7 = (int32_t *)(a3 - 0x483ddbb0); // 0x1d9fdd
    *v7 = *v7 + (int32_t)a2;
    __asm_wait(v4);
    unknown_ffffffff91aa87ed();
    return function_1d9ff1(v4, a2, a3, a4);
}

// Address range: 0x1d9ff0 - 0x1d9ff1
int64_t function_1d9ff0(int64_t a1) {
    // 0x1d9ff0
    int64_t result; // 0x1d9ff0
    return result;
}

// Address range: 0x1d9ff1 - 0x1da00d
int64_t function_1d9ff1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 - 0x7cfe17aa); // 0x1d9ffa
    int64_t v2; // 0x1d9ff1
    *v1 = *v1 | (char)((uint64_t)v2 / 256);
    char v3 = __asm_in_137(1); // 0x1da000
    uint64_t v4 = v2 & -256 | (int64_t)v3; // 0x1da000
    return 256 * (int64_t)(v3 & (char)(v4 / 256)) | v4 & -0xff01;
}

// Address range: 0x1da031 - 0x1da039
int64_t function_1da031(int64_t a1) {
    // 0x1da031
    int64_t v1; // 0x1da031
    return v1 + 0x1e86f61 & 0xffff00ff | 0x2800;
}

// Address range: 0x1da085 - 0x1da08a
int64_t function_1da085(void) {
    // 0x1da085
    return function_63cad6f3();
}

// Address range: 0x1da0fb - 0x1da100
int64_t function_1da0fb(void) {
    // 0x1da0fb
    return function_ffffffffaff2f9f9();
}

// Address range: 0x1da105 - 0x1da112
int64_t function_1da105(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0x1775b900); // 0x1da105
    *v1 = *v1 ^ (char)a3;
    int64_t v2; // 0x1da105
    *(int32_t *)v2 = *(int32_t *)&v2 + (int32_t)a3;
    return function_ffffffffbbd1a1e5();
}

// Address range: 0x1da167 - 0x1da16c
int64_t function_1da167(void) {
    // 0x1da167
    return __asm_int1();
}

// Address range: 0x1da17a - 0x1da17b
int64_t function_1da17a(void) {
    // 0x1da17a
    int64_t result; // 0x1da17a
    return result;
}

// Address range: 0x1da1b0 - 0x1da1b6
int64_t function_1da1b0(int64_t a1) {
    // 0x1da1b0
    return 0x10000 * (int32_t)__asm_wait(a1) >> 16;
}

// Address range: 0x1da1c1 - 0x1da1c5
int64_t function_1da1c1(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 - 81); // 0x1da1c1
    int64_t result; // 0x1da1c1
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x1da1c7 - 0x1da1ca
int64_t function_1da1c7(int64_t a1) {
    // 0x1da1c7
    int64_t result; // 0x1da1c7
    return result;
}

// Address range: 0x1da1db - 0x1da1e2
int64_t function_1da1db(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1da1db
    int64_t v1; // 0x1da1db
    int64_t v2 = v1;
    bool v3; // 0x1da1db
    return (v2 - (v3 ? 96 : 95)) % 256 | v2 & 0xffffff00;
}

// Address range: 0x1da1e7 - 0x1da21b
int64_t function_1da1e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1da1e7
    int64_t v1; // 0x1da1e7
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a1;
    int64_t v2 = a1 - 0x150ec56c; // 0x1da1e9
    __writegsbyte(v2, __readgsbyte(v2) + (char)a4);
    int64_t v3; // 0x1da1e7
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 | (char)v4;
    unsigned char v5 = *(char *)0x21cd9804; // 0x1da1fd
    unsigned char v6 = v5 + (char)(v1 / 256); // 0x1da1fd
    *(char *)0x21cd9804 = v6;
    unsigned char v7 = (char)v3; // 0x1da203
    unsigned char v8 = v7 + 16 + (char)(v6 < v5); // 0x1da203
    int64_t result = v3 & -256 | (int64_t)v8; // 0x1da203
    v3 = result;
    if (v6 < v5 ? v8 <= v7 : v7 > 239) {
        // 0x1da20f
        return result;
    }
    char v9 = *(char *)0x79f451a; // 0x1da213
    *(char *)0x79f451a = v9 + (char)((int64_t)&g1 >> 8);
    int64_t v10; // 0x1da1e7
    return (int64_t)(*(int32_t *)&v10 + (int32_t)result);
}

// Address range: 0x1da22d - 0x1da22f
int64_t function_1da22d(void) {
    // 0x1da22d
    int64_t result; // 0x1da22d
    return result;
}

// Address range: 0x3208bb - 0x320996
int64_t function_3208bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3208bb
    int64_t v1; // 0x3208bb
    int64_t v2 = v1;
    int64_t v3 = (v2 + 36) % 256 | v2 & -256; // 0x3208bb
    int32_t * v4 = (int32_t *)v3; // 0x3208bf
    *v4 = *v4 ^ (int32_t)v3;
    int64_t v5; // bp-8, 0x3208bb
    v5 = (int64_t)&v5;
    int64_t v6; // bp-24, 0x3208bb
    v6 = (int64_t)&v6 + 16;
    return function_c823b(a1);
}

// Address range: 0x320996 - 0x320ac6
int64_t function_320996(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x320996
    int64_t v1; // bp-32, 0x320996
    int64_t v2 = (int64_t)&v1; // 0x3209ed
    v1 = v2;
    int64_t v3 = v2 - 16; // 0x320a0a
    int64_t * v4 = (int64_t *)v3; // 0x320a0a
    *v4 = 0x6b06dc12;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x320a10
    int64_t v6 = *(int64_t *)(v2 + 24); // 0x320a16
    *v4 = v6;
    *v5 = v6;
    int64_t * v7 = (int64_t *)(v2 - 32); // 0x320a1d
    *v7 = v6;
    int64_t * v8 = (int64_t *)(v2 + 8); // 0x320a2c
    int64_t v9 = *v8; // 0x320a2c
    *v4 = v9;
    *v5 = v6;
    *(int64_t *)(v2 - 8) = v6;
    *(int64_t *)(v2 - 40) = v9;
    *v7 = v9;
    *v8 = *v5;
    *v7 = *v4;
    *v5 = v3;
    *v4 = v2;
    return function_c823b(v9);
}

// Address range: 0x320ac6 - 0x320be0
int64_t function_320ac6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x320ac6
    int64_t v1; // bp-32, 0x320ac6
    v1 = (int64_t)&v1 + 16;
    return function_c823b(a1);
}

// Address range: 0x320be0 - 0x320be5
int64_t function_320be0(void) {
    // 0x320be0
    return function_329077();
}

// Address range: 0x320cae - 0x320cb0
int64_t function_320cae(void) {
    // 0x320cae
    int64_t v1; // 0x320cae
    return function_320cf1(v1, v1, v1, v1);
}

// Address range: 0x320cef - 0x320cf1
int64_t function_320cef(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x320cef
    int64_t v1; // 0x320cef
    int64_t v2 = v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x320cf1 - 0x320cfe
int64_t function_320cf1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x320cf1
    int64_t v1; // 0x320cf1
    int32_t * v2 = (int32_t *)(v1 - 2); // 0x320cf1
    *v2 = *v2 + (int32_t)a4;
    return v1 & 0xffffffff;
}

// Address range: 0x320d08 - 0x320d09
int64_t function_320d08(void) {
    // 0x320d08
    int64_t result; // 0x320d08
    return result;
}

// Address range: 0x320d0c - 0x320d20
int64_t function_320d0c(void) {
    char v1 = *(char *)-0x77b3dde2; // 0x320d17
    int64_t v2; // 0x320d0c
    *(char *)-0x77b3dde2 = v1 + (char)((uint64_t)v2 / 256);
    return (int64_t)(*(int32_t *)0x62f18a3a08605f10 & -30);
}

// Address range: 0x320d26 - 0x320d27
int64_t function_320d26(void) {
    // 0x320d26
    int64_t result; // 0x320d26
    return result;
}

// Address range: 0x320d2e - 0x320d2f
int64_t function_320d2e(void) {
    // 0x320d2e
    int64_t result; // 0x320d2e
    return result;
}

// Address range: 0x320d3a - 0x320d3b
int64_t function_320d3a(void) {
    // 0x320d3a
    int64_t result; // 0x320d3a
    return result;
}

// Address range: 0x320d54 - 0x320e03
int64_t function_320d54(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t result = __asm_wait(a1); // 0x320d54
    // 0x320db6
    return result;
    int64_t v1 = result; // 0x320d59
    bool v2; // 0x320d54
    if (!v2 && !v2) {
        v1 = function_320d2e();
    }
    int64_t v3 = v1;
    int64_t v4; // 0x320d54
    int64_t v5; // 0x320d54
    uint32_t v6; // 0x320dc8
    if (v2) {
        uint32_t v7 = (int32_t)a3; // 0x320dc8
        v6 = (int32_t)a4;
        uint32_t v8 = v6 + v7; // 0x320dc8
        int64_t v9 = v8; // 0x320dc8
        char * v10 = (char *)(v9 - 0x6600f502); // 0x320dca
        unsigned char v11 = *v10; // 0x320dca
        char v12 = a4 / 256; // 0x320dca
        char v13 = v8 < v7; // 0x320dca
        unsigned char v14 = v11 + v12; // 0x320dca
        char v15 = v14 + v13; // 0x320dca
        *v10 = v15;
        if (v15 == 0 || (v8 < v7 ? v15 <= v11 : v14 < v11)) {
            goto lab_0x320dfa;
        } else {
            char v16 = v15 + v13; // 0x320dca
            v4 = v3;
            v5 = v9;
            if (v15 < 0 == ((v16 ^ v11) & (v16 ^ v12)) < 0) {
                goto lab_0x320d6e;
            } else {
                // 0x320dd4
                if (llvm_ctpop_i8(v15) % 2 == 0) {
                    int64_t result2 = (v3 + 195) % 256 | v3 & -256; // 0x320dd7
                    int32_t * v17 = (int32_t *)result2; // 0x320dd9
                    *v17 = *v17 + (int32_t)result2;
                    return result2;
                }
                goto lab_0x320dfa;
            }
        }
    } else {
        char v18 = *(char *)-0x967d97; // 0x320d62
        int64_t v19; // 0x320d54
        *(char *)-0x967d97 = v18 + (char)((uint64_t)v19 / 256);
        v4 = __asm_hlt(0x803cd94, v3 & 0xffffffff);
        v5 = a3;
        goto lab_0x320d6e;
    }
  lab_0x320dfa:;
    int64_t result3 = unknown_68e2b102(); // 0x320dfc
    uint32_t v20 = v6 % 32; // 0x320e01
    if (v20 != 0) {
        int32_t * v21 = (int32_t *)result3; // 0x320e01
        *v21 = *v21 << v20;
    }
    // 0x320db6
    return result3;
  lab_0x320d6e:
    // 0x320d6e
    if (0x10000 * (int32_t)v4 >> 16 >= *(int32_t *)0x803cd94) {
        function_320d08();
    }
    // 0x320d74
    return v5 & 0xffffffff;
}

// Address range: 0x320e93 - 0x320e94
int64_t function_320e93(void) {
    // 0x320e93
    int64_t result; // 0x320e93
    return result;
}

// Address range: 0x3210bb - 0x3210d5
int64_t function_3210bb(void) {
    char v1 = *(char *)-0x7fcc523e; // 0x3210bb
    int64_t v2; // 0x3210bb
    *(char *)-0x7fcc523e = v1 + (char)((uint64_t)v2 / 256);
    int64_t v3 = v2 | -0x2ac1ff97; // 0x3210c1
    *(int32_t *)0x13dce1d71ecde7c = (int32_t)v3;
    return v3 & 0x2ad9ff97 ^ 0x22c1d186;
}

// Address range: 0x3210f3 - 0x3210f5
int64_t function_3210f3(void) {
    // 0x3210f3
    int64_t result; // 0x3210f3
    return result;
}

// Address range: 0x32112d - 0x321131
int64_t function_32112d(int64_t a1) {
    // 0x32112d
    int64_t result; // 0x32112d
    return result;
}

// Address range: 0x32113e - 0x321141
int64_t function_32113e(void) {
    // 0x32113e
    int64_t result; // 0x32113e
    return result;
}

// Address range: 0x321154 - 0x321198
int64_t function_321154(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x321154
    int64_t result; // 0x321154
    int16_t v1 = ((uint64_t)result / 256 + a3) % 256 | a3 & 0xff00; // 0x321156
    __asm_out_133(v1, (int32_t)result);
    char * v2 = (char *)(3 * a2); // 0x32115c
    char v3 = *v2 - (char)(result / 256); // 0x32115c
    *v2 = v3;
    if (v3 == 0) {
        // 0x321196
        *(char *)a1 = (char)result;
        return result;
    }
    char v4 = __asm_in(v1); // 0x32116f
    return result & 0xfec200 | (int64_t)v4 & -0xff013e00 | (int64_t)__asm_in_137(-35) | 0xff013d00;
}

// Address range: 0x3211f0 - 0x3211f1
int64_t function_3211f0(int64_t a1) {
    // 0x3211f0
    int64_t result; // 0x3211f0
    return result;
}

// Address range: 0x3211fc - 0x321206
int64_t function_3211fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3211fc
    int64_t result; // 0x3211fc
    return result;
}

// Address range: 0x321271 - 0x321272
int64_t function_321271(int64_t a1) {
    // 0x321271
    int64_t result; // 0x321271
    return result;
}

// Address range: 0x321272 - 0x3212b9
int64_t function_321272(int64_t a1, int64_t a2, int64_t a3) {
    // 0x321272
    bool v1; // 0x321272
    bool v2 = v1;
    int64_t v3 = a2;
    if (v1) {
        // 0x321274
        return function_2328260();
    }
    // 0x3212b0
    int64_t v4; // 0x321272
    unsigned char v5 = (char)v4; // 0x3212b0
    unsigned char v6 = (char)v2 + (char)v4; // 0x3212b0
    bool v7 = v2 ? v6 != -1 | (char)v2 + v5 - v6 > v5 : v6 > v5; // 0x3212b0
    char v8 = __asm_insb((int16_t)a3 - (int16_t)a1 + (int16_t)v7); // 0x3212b6
    *(char *)a1 = v8;
    return v4 & -256 | (int64_t)*(char *)&v3;
}
