/*
 * Targeted RetDec C for native executable gap queue batch 730.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x19d085-0x19d285 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19d285-0x19d485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19d485-0x19d685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22c666-0x22c866 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22c866-0x22ca66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22ca66-0x22cc66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22cc66-0x22ce66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x22ce66-0x22d066 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1357ead5();
int64_t function_156d35b();
int64_t function_19d085(void);
int64_t function_19d0b7(void);
int64_t function_19d0b9(void);
int64_t function_19d0bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19d0ec(int64_t a1, int64_t a2);
int64_t function_19d10c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19d144(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19d177(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19d1cd(void);
int64_t function_19d1de(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19d1f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19d238(int64_t a1);
int64_t function_19d29c(void);
int64_t function_19d29f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19d2db(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19d2f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19d30c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19d39a(void);
int64_t function_19d3a7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_19d417(void);
int64_t function_19d426(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19d46a(int64_t a1);
int64_t function_19d471(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_19d489(int64_t a1);
int64_t function_19d4b6(void);
int64_t function_19d4bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_19d4df(void);
int64_t function_19d4f1(void);
int64_t function_19d510(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19d519(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19d529(int64_t a1, int64_t a2);
int64_t function_201ecfc();
int64_t function_2231d655();
int64_t function_22c666(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_22c6c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22c82b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22c96a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_22cad3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22cc3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22cd8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_22cedf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_22d032(void);
int64_t function_22d05b(int64_t a1);
int64_t function_80064176();
int64_t function_cdc60();
int64_t function_ffffffffc36e6be0();
int64_t unknown_24a9e826();
int64_t unknown_ffffffff85fda526();
int64_t unknown_ffffffffbf1b0f3c();
int64_t unknown_ffffffffc8e821a0();
int64_t unknown_ffffffffdcff1b96();

// Address range: 0x19d085 - 0x19d086
int64_t function_19d085(void) {
    // 0x19d085
    int64_t result; // 0x19d085
    return result;
}

// Address range: 0x19d0b7 - 0x19d0b9
int64_t function_19d0b7(void) {
    // 0x19d0b7
    int64_t v1; // 0x19d0b7
    return function_19d0ec(v1, (int64_t)&g2);
}

// Address range: 0x19d0b9 - 0x19d0ba
int64_t function_19d0b9(void) {
    // 0x19d0b9
    int64_t result; // 0x19d0b9
    return result;
}

// Address range: 0x19d0bc - 0x19d0ca
int64_t function_19d0bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19d0bc
    int64_t v1; // 0x19d0bc
    return v1 & 0xffffffff;
}

// Address range: 0x19d0ec - 0x19d108
int64_t function_19d0ec(int64_t a1, int64_t a2) {
    // 0x19d0ec
    int64_t v1; // 0x19d0ec
    int64_t v2 = v1 + 0x19b12d90; // 0x19d0ed
    uint32_t v3 = (int32_t)v1;
    uint32_t v4 = (int32_t)v2; // 0x19d0fc
    int32_t v5 = v4 + v3; // 0x19d0fc
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x19d0fc
    *(int32_t *)a1 = v5;
    return (v2 & 0xffff00ff | 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v5 < v3) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v4 % 16 + v3 % 16 > 15) | 4 * (int64_t)(v6 % 2 == 0)) | 512) + 0x6dfcebdb & 0xffffffff;
}

// Address range: 0x19d10c - 0x19d13f
int64_t function_19d10c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19d10c
    int64_t v1; // 0x19d10c
    int64_t v2 = v1;
    int64_t v3 = (0x100000000 * a3 | v2 & 0xffffff00 | v2 + 75 & 194 | 61) % (a2 & 0xffffffff); // 0x19d118
    *(int32_t *)-0x6aff51fe7752ad12 = (int32_t)unknown_24a9e826();
    int32_t v4 = __asm_in(61); // 0x19d12f
    int64_t result = v4; // 0x19d12f
    int32_t * v5 = (int32_t *)(v1 + 4 * v1); // 0x19d131
    uint32_t v6 = *v5; // 0x19d131
    uint32_t v7 = v6 + v4; // 0x19d131
    *v5 = v7;
    if ((int32_t)a2 == 1 || v7 == 0) {
        // 0x19d136
        __asm_out((int16_t)v3, v4);
        return result;
    }
    // 0x19d139
    int64_t v8; // 0x19d10c
    char v9 = *(char *)&v8; // 0x19d139
    *(char *)v8 = (char)(v7 < v6) + (char)(v3 / 256) + v9;
    __asm_out((int16_t)v3, v4);
    return result;
}

// Address range: 0x19d144 - 0x19d172
int64_t function_19d144(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3 & -0xff01; // 0x19d144
    int64_t v2; // 0x19d144
    *(int32_t *)a1 = (int32_t)v2;
    uint32_t v3 = (int32_t)a4 % 32; // 0x19d14e
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)v1; // 0x19d14e
        uint32_t v5 = *v4; // 0x19d14e
        *v4 = v5 >> v3 | v5 << 32 - v3;
    }
    bool v6; // 0x19d144
    int64_t v7 = v6 ? 0xfffffffc : 4; // 0x19d14d
    int64_t v8; // 0x19d144
    uint32_t v9 = *(int32_t *)&v8; // 0x19d151
    float80_t v10; // 0x19d144
    *(int32_t *)(v2 + 36) = (int32_t)v10;
    char * v11 = (char *)(v1 + 0x1a505b3d + 2 * v2); // 0x19d156
    unsigned char v12 = *v11; // 0x19d156
    unsigned char v13 = (char)(v2 / 256); // 0x19d156
    char v14 = v9 > -1 - (int32_t)(v7 + a1); // 0x19d156
    unsigned char v15 = v12 + v13; // 0x19d156
    char v16 = v15 + v14; // 0x19d156
    unsigned char v17 = llvm_ctpop_i8(v16); // 0x19d156
    bool v18 = v9 > -1 - (int32_t)(v7 + a1) ? v16 <= v12 : v15 < v12; // 0x19d156
    *v11 = v16;
    *(char *)0x63de0e65 = *(char *)0x63de0e65 + v13;
    int64_t v19; // 0x19d144
    int64_t result = (int64_t)&v19; // 0x19d164
    *(int64_t *)((v2 & 0xffff00ff | 256 * (64 * (int64_t)(v16 == 0) | (int64_t)v18 | 128 * (int64_t)(v16 < 0) | 16 * (int64_t)(v13 % 16 + v14 + v12 % 16 > 15) | 4 * (int64_t)(v17 % 2 == 0)) & 0xfffffd00 | 512) - 8) = result;
    char * v20 = (char *)(v2 - 0x2440d385); // 0x19d169
    *v20 = *v20 + (char)result;
    return result;
}

// Address range: 0x19d177 - 0x19d1cc
int64_t function_19d177(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19d177
    int64_t v1; // 0x19d177
    int64_t v2 = v1;
    int64_t v3 = a2; // bp-16, 0x19d18d
    unsigned char v4 = *(char *)(char *)&g1; // 0x19d18e
    unsigned char v5 = v4 + (char)a4; // 0x19d18e
    unsigned char v6 = v5 + (char)((int32_t)v1 < 0x770fd801); // 0x19d18e
    *(char *)v2 = v6;
    __asm_in_133(-31);
    int64_t v7 = unknown_ffffffffc8e821a0(); // 0x19d197
    uint32_t v8 = (int32_t)a4 % 32; // 0x19d19c
    if (v8 != 0) {
        int32_t * v9 = (int32_t *)v7; // 0x19d19c
        uint32_t v10 = *v9; // 0x19d19c
        *v9 = v10 >> 32 - v8 | v10 << v8;
    }
    bool v11 = (int32_t)v1 < 0x770fd801 ? v6 <= v4 : v5 < v4; // 0x19d18e
    char * v12 = (char *)(v1 - 0x16fffec3); // 0x19d19e
    *v12 = *v12 + (char)v7;
    uint32_t v13 = (int32_t)(v2 - (v1 & 0xff00) + (v11 ? 0xff00 : 0) & 0xff00 | v2 & 0xffff00ff); // 0x19d1a4
    uint32_t v14 = *(int32_t *)(a4 + 0x388a45ff); // 0x19d1a4
    int32_t * v15 = (int32_t *)(v1 - 0x41fb2fff); // 0x19d1aa
    *v15 = v14 - v13 + *v15 + (int32_t)(v14 > v13);
    int64_t result = unknown_ffffffffbf1b0f3c(); // 0x19d1b5
    int32_t * v16 = (int32_t *)(v1 - 0x7e5ac5e0); // 0x19d1ba
    *v16 = *v16 | (int32_t)v1;
    __asm_out((int16_t)a3, (int32_t)result);
    int32_t * v17 = (int32_t *)(3 * a1); // 0x19d1c9
    *v17 = *v17 + (int32_t)(int64_t)&v3;
    return result;
}

// Address range: 0x19d1cd - 0x19d1d9
int64_t function_19d1cd(void) {
    // 0x19d1cd
    return function_ffffffffc36e6be0();
}

// Address range: 0x19d1de - 0x19d1f4
int64_t function_19d1de(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19d1de
    int64_t v1; // 0x19d1de
    *(char *)a3 = (char)(v1 & (uint64_t)v1 / 256);
    return v1 & 0xffffffff ^ 0xceb1c526;
}

// Address range: 0x19d1f4 - 0x19d1fe
int64_t function_19d1f4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19d1f4
    int64_t v1; // 0x19d1f4
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)v1;
    *(int32_t *)a1 = v3 / 2 | 0x80000000 * v3;
    int64_t result = (v2 + 245 + (int64_t)(v3 % 2 != 0)) % 256 | v2 & -256; // 0x19d1f6
    *(int32_t *)(a4 - 22) = (int32_t)result;
    return result;
}

// Address range: 0x19d238 - 0x19d239
int64_t function_19d238(int64_t a1) {
    // 0x19d238
    int64_t result; // 0x19d238
    return result;
}

// Address range: 0x19d29c - 0x19d29d
int64_t function_19d29c(void) {
    // 0x19d29c
    int64_t result; // 0x19d29c
    return result;
}

// Address range: 0x19d29f - 0x19d2cc
int64_t function_19d29f(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)-0x40c81d5a; // 0x19d29f
    int64_t v2; // 0x19d29f
    unsigned char v3 = (char)(v2 / 256); // 0x19d29f
    char v4 = v1 + v3; // 0x19d29f
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x19d29f
    *(char *)-0x40c81d5a = v4;
    int16_t v6 = a3; // 0x19d2a6
    __asm_out(v6, (int32_t)(256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v4 < v1) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v1 % 16 + v3 % 16 > 15) | 4 * (int64_t)(v5 % 2 == 0)) | v2 & 0xffff00ff) | 512);
    *(char *)-0x21e39cba = *(char *)-0x21e39cba - (char)v2;
    char * v7 = (char *)(a3 - 14); // 0x19d2ad
    *v7 = *v7 - (char)v2;
    int32_t * v8 = (int32_t *)(int64_t)*(int32_t *)0x3de5da0000b3d2ef; // 0x19d2bc
    int32_t v9 = *v8 + (int32_t)v2; // 0x19d2bc
    *v8 = v9;
    if (v9 < 1) {
        function_19d29c();
    }
    // 0x19d2c0
    *(char *)a1 = __asm_insb(v6);
    return function_201ecfc();
}

// Address range: 0x19d2db - 0x19d2ef
int64_t function_19d2db(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x3052beb6); // 0x19d2db
    int64_t v2; // 0x19d2db
    *v1 = *v1 - (int32_t)v2;
    int64_t v3; // 0x19d2db
    *(char *)a2 = *(char *)&v3 & (char)v2;
    return function_156d35b();
}

// Address range: 0x19d2f8 - 0x19d30b
int64_t function_19d2f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a3; // 0x19d2f8
    int32_t v2 = __asm_insd(v1); // 0x19d2f8
    int32_t * v3 = (int32_t *)a1; // 0x19d2f8
    *v3 = v2;
    __asm_in(85);
    __asm_int(17);
    __asm_int1();
    int64_t v4 = __asm_int3(); // 0x19d2ff
    *v3 = __asm_insd(v1);
    return (v4 + 118) % 256 | v4 & -256;
}

// Address range: 0x19d30c - 0x19d383
int64_t function_19d30c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19d36a
    __asm_out_134((int16_t)a3, (char)a1);
    int64_t v1; // 0x19d30c
    *(char *)(v1 & 0xffffffff) = 44;
    return 0x6540092c;
}

// Address range: 0x19d39a - 0x19d39f
int64_t function_19d39a(void) {
    // 0x19d39a
    return function_1357ead5();
}

// Address range: 0x19d3a7 - 0x19d3c0
int64_t function_19d3a7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a4 & 0xffffffff; // 0x19d3a7
    int64_t v2; // 0x19d3a7
    *(char *)v1 = 2 * (char)v2;
    char * v3 = (char *)(v1 + 0x3d002381); // 0x19d3ad
    *v3 = *v3 + (char)(v2 / 256);
    int64_t v4; // 0x19d3a7
    char v5 = *(char *)&v4; // 0x19d3b8
    return (256 * (int64_t)((char)(-1 - (int32_t)a1 < (int32_t)v2) + (char)(a4 / 256) + v5) | a4 & 0xffff00ff) + 0xd98666ef & 0xffffffff;
}

// Address range: 0x19d417 - 0x19d41a
int64_t function_19d417(void) {
    // 0x19d417
    int64_t result; // 0x19d417
    return result;
}

// Address range: 0x19d426 - 0x19d42b
int64_t function_19d426(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19d426
    int64_t v1; // 0x19d426
    int64_t v2 = v1;
    return (v2 + a4) % 256 | v2 & -256;
}

// Address range: 0x19d46a - 0x19d46b
int64_t function_19d46a(int64_t a1) {
    // 0x19d46a
    int64_t result; // 0x19d46a
    return result;
}

// Address range: 0x19d471 - 0x19d489
int64_t function_19d471(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x19d471
    int64_t result; // 0x19d471
    float80_t v1; // 0x19d471
    *(int16_t *)result = (int16_t)v1;
    if ((*(char *)(a3 - 0x6625c7af) || (char)(a4 / 256)) == 0) {
        // 0x19d47c
        return result;
    }
    // 0x19d480
    __asm_wait();
    return function_80064176();
}

// Address range: 0x19d489 - 0x19d4a5
int64_t function_19d489(int64_t a1) {
    // 0x19d489
    unknown_ffffffffdcff1b96();
    bool v1; // 0x19d489
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x19d49d
    int32_t * v3 = (int32_t *)(3 * v2); // 0x19d49f
    *v3 = *v3 + (int32_t)v2;
    return -0x17ba5000;
}

// Address range: 0x19d4b6 - 0x19d4b7
int64_t function_19d4b6(void) {
    // 0x19d4b6
    int64_t result; // 0x19d4b6
    return result;
}

// Address range: 0x19d4bf - 0x19d4d5
int64_t function_19d4bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x19d4bf
    int64_t v1; // 0x19d4bf
    uint64_t v2 = v1;
    int32_t v3 = __asm_in(99); // 0x19d4c4
    int32_t * v4 = (int32_t *)a5; // 0x19d4c6
    *v4 = *v4 - (int32_t)v2;
    *(char *)-0x420d6931 = *(char *)-0x420d6931 + (char)(a5 / 256);
    char * v5 = (char *)(int64_t)v3; // 0x19d4ce
    char v6 = *v5 + (char)(v2 / 256); // 0x19d4ce
    *v5 = v6;
    if (v6 == 0) {
        function_19d4b6();
    }
    // 0x19d4d3
    return v2 & 0xffffffff;
}

// Address range: 0x19d4df - 0x19d4e0
int64_t function_19d4df(void) {
    // 0x19d4df
    int64_t result; // 0x19d4df
    return result;
}

// Address range: 0x19d4f1 - 0x19d4f2
int64_t function_19d4f1(void) {
    // 0x19d4f1
    int64_t result; // 0x19d4f1
    return result;
}

// Address range: 0x19d510 - 0x19d518
int64_t function_19d510(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19d510
    return function_2231d655();
}

// Address range: 0x19d519 - 0x19d529
int64_t function_19d519(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19d519
    int64_t v1; // 0x19d519
    int32_t v2 = v1; // 0x19d519
    bool v3; // 0x19d519
    if (v2 + (int32_t)a1 == (int32_t)v3) {
        function_19d4df();
    }
    // 0x19d51d
    *(int32_t *)(a3 + 26) = v2;
    unknown_ffffffff85fda526();
    return function_19d4f1();
}

// Address range: 0x19d529 - 0x19d536
int64_t function_19d529(int64_t a1, int64_t a2) {
    // 0x19d529
    int64_t v1; // 0x19d529
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return __asm_hlt();
}

// Address range: 0x22c666 - 0x22c6c8
int64_t function_22c666(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x22c666
    int64_t v1; // bp+16, 0x22c666
    v1 = (int64_t)&v1 + 16;
    return function_cdc60(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x22c6c8 - 0x22c82b
int64_t function_22c6c8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x22c6c8
    int64_t v1; // bp-64, 0x22c6c8
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x22c6c8
    return function_cdc60(a1, a2, a3, a4, v2, v2);
}

// Address range: 0x22c82b - 0x22c96a
int64_t function_22c82b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x22c82b
    int64_t v1; // 0x22c82b
    return function_cdc60(a1, a2, 0x222f38, a4, a5, v1);
}

// Address range: 0x22c96a - 0x22cad3
int64_t function_22c96a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x22c96a
    return function_cdc60(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x22cad3 - 0x22cc3a
int64_t function_22cad3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x22cad3
    int64_t v1; // bp-32, 0x22cad3
    v1 = (int64_t)&v1;
    int64_t v2; // 0x22cad3
    return function_cdc60(a1, a2, a3, a4, v2, v2);
}

// Address range: 0x22cc3a - 0x22cd8a
int64_t function_22cc3a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x22cc3a
    *(int64_t *)(a5 - 8) = a5;
    *(int64_t *)(a5 - 16) = a5;
    int64_t v1; // 0x22cc3a
    return function_cdc60(a1, a2, a3, a4, a5, v1);
}

// Address range: 0x22cd8a - 0x22cedf
int64_t function_22cd8a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x22cd8a
    int64_t v1; // bp-48, 0x22cd8a
    int64_t v2 = (int64_t)&v1; // 0x22ce3c
    int64_t v3 = v2 + 16; // 0x22ce42
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x22ce51
    int64_t v5 = *v4; // 0x22ce51
    int64_t * v6 = (int64_t *)(v2 + 8); // 0x22ce51
    v1 = v5;
    *(int64_t *)(v2 - 8) = v5;
    *v6 = a2;
    *v4 = a7;
    v1 = v5;
    *(int64_t *)(v2 + 48) = v5;
    int64_t * v7 = (int64_t *)v3; // 0x22cea8
    int64_t v8 = *v7; // 0x22cea8
    *v6 = v8;
    v1 = v8;
    int64_t v9 = *(int64_t *)(v2 + 24); // 0x22cec4
    *v7 = v9;
    *v6 = v9;
    return function_cdc60(a1, *v6, a3, a4, a5, a6);
}

// Address range: 0x22cedf - 0x22d023
int64_t function_22cedf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x22cedf
    int64_t v1; // bp-48, 0x22cedf
    int64_t v2 = (int64_t)&v1; // 0x22cf77
    int64_t v3 = *(int64_t *)(v2 + 40); // 0x22cf86
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x22cf8a
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x22cf8d
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 + 24); // 0x22cf99
    int64_t v7 = *v6; // 0x22cf99
    v1 = v7;
    *v4 = v7;
    *v5 = 0x34265df7;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x22cfc7
    *v8 = v3;
    int64_t v9 = v2 + 8; // 0x22cfcd
    *(int64_t *)v9 = *v4;
    *v4 = 0x5491fca4;
    *v8 = v3;
    *v5 = v7;
    *v6 = *v4;
    *v4 = a6;
    *v5 = v9;
    int64_t v10 = *v4; // 0x22d002
    *v8 = v10;
    *v4 = v1;
    return function_cdc60(a1, a2, a3, a4, a5, v10);
}

// Address range: 0x22d032 - 0x22d035
int64_t function_22d032(void) {
    // 0x22d032
    int64_t result; // 0x22d032
    return result;
}

// Address range: 0x22d05b - 0x22d05c
int64_t function_22d05b(int64_t a1) {
    // 0x22d05b
    int64_t result; // 0x22d05b
    return result;
}
