/*
 * Targeted RetDec C for native executable gap queue batch 493.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x37db30-0x37dd30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37dd30-0x37df30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37df30-0x37e130 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37e130-0x37e330 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f3f9e-0x3f419e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f419e-0x3f439e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f439e-0x3f459e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f459e-0x3f479e rank=- name=- kind=- bytes=- uncovered=-
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
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
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

int64_t function_23514005();
int64_t function_37db30(void);
int64_t function_37db3b(void);
int64_t function_37dbdd(int64_t a1);
int64_t function_37dbf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37dc18(void);
int64_t function_37dce2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_37dd09(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37dd4f(int64_t a1);
int64_t function_37dd71(void);
int64_t function_37ddf6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37de40(int64_t a1);
int64_t function_37de43(void);
int64_t function_37de6e(int64_t a1);
int64_t function_37de7d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37df02(void);
int64_t function_37df0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37df33(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37df43(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37df6c(int64_t a1);
int64_t function_37df7c(void);
int64_t function_37dfc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37dfea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_37e046(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37e0bc(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_37e142(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37e156(int64_t a1);
int64_t function_37e1b3(void);
int64_t function_37e1d6(void);
int64_t function_37e1e2(void);
int64_t function_37e1e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37e2c5(void);
int64_t function_3f2e6d83();
int64_t function_3f3f9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3f40a8(void);
int64_t function_3f40ba(void);
int64_t function_3f40e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3f420c(void);
int64_t function_3f421c(int64_t a1);
int64_t function_3f423a(void);
int64_t function_3f428a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f42af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3f43bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3f4588(int64_t a1);
int64_t function_3f45b9(void);
int64_t function_3f45e9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3f45f5(void);
int64_t function_3f45f9(void);
int64_t function_3f45fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_55fdd970();
int64_t function_7257137d();
int64_t function_a3ea50();
int64_t function_ffffffffa7fe4c5b();
int64_t function_ffffffffc589dbb9();
int64_t unknown_141d9412();
int64_t unknown_1ccb2d1f();
int64_t unknown_1ef6c577();
int64_t unknown_217d6cf8();
int64_t unknown_2a9001e5();
int64_t unknown_3042470b();
int64_t unknown_3ad51121();
int64_t unknown_3d9b46de();
int64_t unknown_473dc930();
int64_t unknown_5d4822c3();
int64_t unknown_ffffffffb3b4761a();
int64_t unknown_ffffffffb466bf1d();
int64_t unknown_ffffffffc5ba194c();

// Address range: 0x37db30 - 0x37db31
int64_t function_37db30(void) {
    // 0x37db30
    int64_t result; // 0x37db30
    return result;
}

// Address range: 0x37db3b - 0x37db40
int64_t function_37db3b(void) {
    // 0x37db3b
    return function_ffffffffc589dbb9();
}

// Address range: 0x37dbdd - 0x37dbde
int64_t function_37dbdd(int64_t a1) {
    // 0x37dbdd
    int64_t result; // 0x37dbdd
    return result;
}

// Address range: 0x37dbf2 - 0x37dbfb
int64_t function_37dbf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37dbf2
    int64_t result; // 0x37dbf2
    int32_t * v1 = (int32_t *)(result + 0x5a054803); // 0x37dbf2
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x37dc18 - 0x37dc22
int64_t function_37dc18(void) {
    // 0x37dc18
    return function_55fdd970();
}

// Address range: 0x37dce2 - 0x37dcf6
int64_t function_37dce2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x37dce2
    int64_t v1; // 0x37dce2
    int16_t v2 = (256 * (int16_t)v1 >> 8) * (256 * (int16_t)a5 >> 8); // 0x37dcee
    *(char *)a4 = (char)a4;
    return v1 & -0x10000 | (int64_t)(v2 & -256) | (int64_t)(v2 & 58);
}

// Address range: 0x37dd09 - 0x37dd12
int64_t function_37dd09(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = *(char *)(a5 - 40); // 0x37dd0b
    int64_t v2; // 0x37dd09
    return 2 * v2 & 0xfffffffe | (int64_t)(v1 > (char)v2);
}

// Address range: 0x37dd4f - 0x37dd50
int64_t function_37dd4f(int64_t a1) {
    // 0x37dd4f
    int64_t result; // 0x37dd4f
    return result;
}

// Address range: 0x37dd71 - 0x37dd79
int64_t function_37dd71(void) {
    // 0x37dd71
    return __asm_hlt();
}

// Address range: 0x37ddf6 - 0x37de29
int64_t function_37ddf6(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a1; // 0x37de02
    *(int32_t *)-0x17c3b7f7 = *(int32_t *)-0x17c3b7f7 + v1;
    int32_t * v2 = (int32_t *)(a3 + 0x3aa62b22); // 0x37de0f
    *v2 = *v2 + v1;
    __asm_sti();
    __asm_in(-28);
    return unknown_1ccb2d1f() & 0xe8eebbaf;
}

// Address range: 0x37de40 - 0x37de41
int64_t function_37de40(int64_t a1) {
    // 0x37de40
    int64_t result; // 0x37de40
    return result;
}

// Address range: 0x37de43 - 0x37de44
int64_t function_37de43(void) {
    // 0x37de43
    int64_t result; // 0x37de43
    return result;
}

// Address range: 0x37de6e - 0x37de7a
int64_t function_37de6e(int64_t a1) {
    // 0x37de6e
    unknown_1ef6c577(a1);
    return function_37de43();
}

// Address range: 0x37de7d - 0x37de85
int64_t function_37de7d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37de7d
    int64_t result; // 0x37de7d
    return result;
}

// Address range: 0x37df02 - 0x37df0b
int64_t function_37df02(void) {
    // 0x37df02
    int64_t v1; // 0x37df02
    int32_t * v2 = (int32_t *)(v1 + 24); // 0x37df02
    *v2 = *v2 + (int32_t)v1;
    return unknown_3042470b();
}

// Address range: 0x37df0e - 0x37df20
int64_t function_37df0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffb3b4761a(); // 0x37df14
    int64_t v2; // 0x37df0e
    int32_t * v3 = (int32_t *)(v2 - 56 + 2 * v2); // 0x37df19
    uint32_t v4 = *v3; // 0x37df19
    uint32_t v5 = v4 + (int32_t)a2; // 0x37df19
    *v3 = v5;
    return (v1 + 207 + (int64_t)(v5 < v4)) % 256 | v1 & -256;
}

// Address range: 0x37df33 - 0x37df36
int64_t function_37df33(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37df33
    int64_t result; // 0x37df33
    *(int32_t *)a2 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x37df43 - 0x37df66
int64_t function_37df43(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_ffffffffc5ba194c(); // 0x37df43
    int32_t * v2 = (int32_t *)(v1 - 0x17fe827c); // 0x37df49
    *v2 = *v2 + (int32_t)a2;
    int32_t * v3 = (int32_t *)(v1 + 0x2a621574); // 0x37df4f
    uint32_t v4 = *v3; // 0x37df4f
    int64_t v5; // 0x37df43
    uint32_t v6 = v4 + (int32_t)v5; // 0x37df4f
    *v3 = v6;
    *(int32_t *)0x1e8a6feed0d0629 = (int32_t)v1;
    return (v1 - (v6 < v4 ? 50 : 49)) % 256 | v1 & -256;
}

// Address range: 0x37df6c - 0x37df6f
int64_t function_37df6c(int64_t a1) {
    // 0x37df6c
    int64_t result; // 0x37df6c
    return result;
}

// Address range: 0x37df7c - 0x37df7d
int64_t function_37df7c(void) {
    // 0x37df7c
    int64_t result; // 0x37df7c
    return result;
}

// Address range: 0x37dfc0 - 0x37dfe9
int64_t function_37dfc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37dfc0
    bool v1; // 0x37dfc0
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x37dfc3
    int64_t v3; // 0x37dfc0
    char * v4 = (char *)(v3 + 0x773d01e8); // 0x37dfd2
    *v4 = *v4 + (char)v3;
    int64_t result = unknown_3d9b46de(v2); // 0x37dfd8
    int32_t * v5 = (int32_t *)(result - 0xa8369cc); // 0x37dfdd
    *v5 = *v5 + (int32_t)v2;
    return result;
}

// Address range: 0x37dfea - 0x37e00a
int64_t function_37dfea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a4 - 1; // 0x37dfed
    bool v2; // 0x37dfea
    if (v1 != 0 && !v2) {
        function_37df7c();
    }
    int64_t result = unknown_217d6cf8(); // 0x37dff2
    int32_t * v3 = (int32_t *)v1; // 0x37e007
    *v3 = *v3 + (int32_t)a6;
    return result;
}

// Address range: 0x37e046 - 0x37e058
int64_t function_37e046(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 46); // 0x37e054
    *v1 = *v1 + (int32_t)a2;
    int64_t v2; // 0x37e046
    return v2 + 0x9d01e8e8 & 0xffffffff;
}

// Address range: 0x37e0bc - 0x37e13d
int64_t function_37e0bc(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x37e0bc
    *(char *)a4 = (char)a4;
    char * v1 = (char *)(a4 + 0xd01e851); // 0x37e0be
    int64_t v2; // 0x37e0bc
    *v1 = *v1 | (char)v2;
    int64_t v3 = v2 & 0xffffffff; // 0x37e0c4
    int64_t v4; // 0x37e0bc
    int64_t v5 = (int64_t)&v4 + 0x2894b7da; // 0x37e0c8
    int16_t * v6 = (int16_t *)(((v5 + a4 / 256) % 256 | v5 & 0xffffff00) + (8 * (v2 + a4) & 0x7fffffff8)); // 0x37e0d1
    *v6 = *v6 ^ (int16_t)v2;
    int64_t * v7 = (int64_t *)(v3 - 8); // 0x37e0d7
    *v7 = -34;
    int64_t * v8 = (int64_t *)(v3 - 16); // 0x37e0da
    *v8 = a2;
    int64_t v9 = unknown_2a9001e5(); // 0x37e0df
    int32_t * v10 = (int32_t *)(a1 + 1); // 0x37e0e9
    uint32_t v11 = (int32_t)((v9 + 218) % 256 | v9 & 0xffffff00); // 0x37e0e9
    *v10 = *v10 | v11;
    int64_t v12 = *v8; // 0x37e0ec
    int32_t v13 = v12; // 0x37e0ef
    uint32_t result = v11 + v13; // 0x37e0ef
    if (result >= v11 && result != 0) {
        uint32_t v14 = result - 0x14599f51;
        unsigned char v15 = *(char *)((int64_t)v14 + 5); // 0x37e0fe
        return (int64_t)v15 * (int64_t)((result + 175) % 256) | (int64_t)(v14 & -0x10000);
    }
    // 0x37e107
    if (((result ^ v11) & (result ^ v13)) >= 0) {
        // 0x37e13b
        return result;
    }
    char * v16 = (char *)(unknown_141d9412() - 0x23d3fff6); // 0x37e111
    char v17 = *v16 + 18; // 0x37e111
    unsigned char v18 = llvm_ctpop_i8(v17); // 0x37e111
    *v16 = v17;
    *(char *)a1 = *(char *)v12;
    bool v19; // 0x37e0bc
    int64_t v20 = v19 ? -1 : 1; // 0x37e117
    int64_t v21 = v20 + a1; // 0x37e117
    int64_t v22 = v12 + v20; // 0x37e117
    int64_t result2 = unknown_3ad51121(v21, v22); // 0x37e11b
    __asm_outsd((int16_t)a3, *(int32_t *)v22);
    if (v18 % 2 != 0) {
        // 0x37e13b
        return result2;
    }
    // 0x37e123
    *v7 = 2 * v2 & 0xffffffff;
    unknown_473dc930();
    char * v23 = (char *)(v2 - 52); // 0x37e12f
    char v24 = *v23 | (char)(a3 / 256); // 0x37e12f
    unsigned char v25 = llvm_ctpop_i8(v24); // 0x37e12f
    *v23 = v24;
    *v8 = 0x4000 * (int64_t)v19 | 1024 * (int64_t)v19 | 512 * (int64_t)v19 | 256 * (int64_t)v19 | 64 * (int64_t)(v24 == 0) | 128 * (int64_t)(v24 < 0) | 4 * (int64_t)(v25 % 2 == 0) | 2;
    int64_t result3 = __asm_iretd(); // 0x37e133
    char * v26 = (char *)v21; // 0x37e134
    *v26 = *v26 | (char)result3;
    return result3;
}

// Address range: 0x37e142 - 0x37e153
int64_t function_37e142(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37e142
    return 0x10000 * (int32_t)a4 >> 16;
}

// Address range: 0x37e156 - 0x37e157
int64_t function_37e156(int64_t a1) {
    // 0x37e156
    int64_t result; // 0x37e156
    return result;
}

// Address range: 0x37e1b3 - 0x37e1b4
int64_t function_37e1b3(void) {
    // 0x37e1b3
    int64_t result; // 0x37e1b3
    return result;
}

// Address range: 0x37e1d6 - 0x37e1d7
int64_t function_37e1d6(void) {
    // 0x37e1d6
    int64_t result; // 0x37e1d6
    return result;
}

// Address range: 0x37e1e2 - 0x37e1e8
int64_t function_37e1e2(void) {
    // 0x37e1e2
    return function_a3ea50();
}

// Address range: 0x37e1e8 - 0x37e23f
int64_t function_37e1e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37e1e8
    int64_t v1; // 0x37e1e8
    uint64_t v2 = v1;
    int64_t v3 = a2;
    unknown_5d4822c3();
    int32_t * v4 = (int32_t *)(a2 + 10); // 0x37e203
    int64_t v5; // bp-8, 0x37e1e8
    *v4 = *v4 + (int32_t)(int64_t)&v5;
    __asm_outsb((int16_t)a3, *(char *)&v3);
    int32_t * v6 = (int32_t *)(a1 - 107); // 0x37e20c
    uint32_t v7 = *v6; // 0x37e20c
    int64_t v8; // bp-23053, 0x37e1e8
    uint32_t v9 = v7 + (int32_t)(int64_t)&v8; // 0x37e20c
    *v6 = v9;
    int64_t v10 = a3 & -256 | 157; // 0x37e213
    *(int32_t *)a1 = __asm_insd((int16_t)v10);
    int32_t * v11 = (int32_t *)v10; // 0x37e216
    *v11 = (int32_t)(256 * (2 * v2 / 256 | (int64_t)(v9 < v7)) & 0xff00 | v2 & 0xffff00ff);
    *(char *)0x2d2911f = *(char *)0x2d2911f + (char)(*v11 / 256);
    int64_t v12 = (int64_t)(*(int32_t *)0x3d584e00edbc6708 | -0x5c803855); // 0x37e21e
    if (a4 != 1) {
        v12 = function_37e1b3();
    }
    uint64_t v13 = v12 + 221; // 0x37e220
    int64_t v14 = v12 & -256; // 0x37e220
    bool v15; // 0x37e1e8
    int64_t v16 = v15 ? -2 : 2; // 0x37e223
    char * v17 = (char *)(v13 % 256 | v14); // 0x37e224
    *v17 = *v17 - 106;
    int64_t v18 = v16 + a1; // 0x37e229
    int64_t v19 = v3 + v16; // 0x37e229
    int32_t * v20 = (int32_t *)v18; // 0x37e232
    *v20 = ((int32_t)(v13 & 94 | v14) | 161) + *v20;
    int32_t * v21 = (int32_t *)v19; // 0x37e235
    __asm_outsd((int16_t)((int32_t)v12 >> 31), *v21);
    *v20 = *v21;
    int64_t v22 = v15 ? -4 : 4; // 0x37e238
    return function_3f2e6d83(v18 + v22, v19 + v22);
}

// Address range: 0x37e2c5 - 0x37e2c8
int64_t function_37e2c5(void) {
    // 0x37e2c5
    int64_t result; // 0x37e2c5
    return result;
}

// Address range: 0x3f3f9e - 0x3f409e
int64_t function_3f3f9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3f3f9e
    bool v1; // 0x3f3f9e
    bool v2 = v1;
    *(char *)(a4 + 82) = (char)a3;
    int16_t v3 = a3; // 0x3f3fa1
    *(char *)a1 = __asm_insb(v3);
    int64_t result; // 0x3f3f9e
    if (a4 != 1 != v2 || v2 || v1) {
        // 0x3f3fa4
        return result;
    }
    // 0x3f4090
    int64_t v4; // 0x3f3f9e
    __asm_outsd(v3, *(int32_t *)&v4);
    return result;
}

// Address range: 0x3f40a8 - 0x3f40b0
int64_t function_3f40a8(void) {
    // 0x3f40a8
    int64_t v1; // 0x3f40a8
    uint64_t v2 = v1;
    return (v2 + 205 | v2 / 256) % 256 | v2 & -256;
}

// Address range: 0x3f40ba - 0x3f40bb
int64_t function_3f40ba(void) {
    // 0x3f40ba
    int64_t result; // 0x3f40ba
    return result;
}

// Address range: 0x3f40e9 - 0x3f4103
int64_t function_3f40e9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3f40e9
    unknown_ffffffffb466bf1d();
    int64_t result = function_3f40ba(); // 0x3f40f8
    int64_t v1; // 0x3f40e9
    uint32_t v2 = *(int32_t *)(v1 - 75) + (int32_t)a5; // 0x3f40fb
    char * v3 = (char *)(int64_t)v2; // 0x3f4100
    *v3 = *v3 + (char)v2;
    return result;
}

// Address range: 0x3f420c - 0x3f4211
int64_t function_3f420c(void) {
    // 0x3f420c
    return function_23514005();
}

// Address range: 0x3f421c - 0x3f421d
int64_t function_3f421c(int64_t a1) {
    // 0x3f421c
    int64_t result; // 0x3f421c
    return result;
}

// Address range: 0x3f423a - 0x3f4245
int64_t function_3f423a(void) {
    // 0x3f423a
    return function_7257137d();
}

// Address range: 0x3f428a - 0x3f428e
int64_t function_3f428a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f428a
    int64_t result; // 0x3f428a
    return result;
}

// Address range: 0x3f42af - 0x3f43bb
int64_t function_3f42af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a1 - 0xc8c81f4); // 0x3f42af
    int32_t v3 = *v2; // 0x3f42af
    int32_t v4 = a4; // 0x3f42af
    bool v5; // 0x3f42af
    int32_t v6 = v5; // 0x3f42af
    int32_t v7 = v6 + v4 + v3; // 0x3f42af
    int32_t v8 = v7 + v6; // 0x3f42af
    *v2 = v7;
    int64_t v9; // 0x3f42af
    if (((v8 ^ v3) & (v8 ^ v4)) >= 0) {
        int64_t v10 = __asm_int3(); // 0x3f42b8
        *(int32_t *)v1 = *(int32_t *)&v1 | (int32_t)v9;
        int64_t v11 = v10 & 0xffffffff; // 0x3f42bd
        int64_t result = a5 & 0xffffffff; // 0x3f42bd
        int32_t * v12 = (int32_t *)(2 * v11 + result); // 0x3f42c1
        *v12 = *v12 / 2;
        char * v13 = (char *)(v11 + 0x15c03143); // 0x3f42c4
        *v13 = *v13 + (char)(v9 / 256);
        return result;
    }
    int32_t * v14 = (int32_t *)(a3 + 0xb971952); // 0x3f42d0
    int32_t v15 = a1; // 0x3f42d0
    *v14 = *v14 - v15;
    int32_t v16 = (int32_t)v9 & -0x76bec6f0; // 0x3f42d6
    if (v16 >= 0 != v16 != 0) {
        // 0x3f42dd
        return __asm_wait();
    }
    int32_t * v17 = (int32_t *)(a3 + 0x524f0e0c); // 0x3f42e5
    int32_t v18 = *v17; // 0x3f42e5
    int64_t result2 = v16; // 0x3f4342
    v18 |= v15;
    *v17 = v18;
    char v19 = *(char *)(a3 + 0x383bf05d) & ((char)result2 ^ -114) ^ 34; // 0x3f42f3
    int64_t result3 = result2 & 0xffffff00 | (int64_t)v19; // 0x3f42f3
    while (v19 >= 0) {
        // 0x3f4341
        int64_t v20; // 0x3f42af
        int32_t v21 = v20; // 0x3f4341
        int32_t v22 = v21 - 0x265e17c9; // 0x3f4342
        result2 = v22;
        v20 = result3;
        if (v22 < 0 == ((v22 ^ v21) & v21 + 0x59a1e837) < 0 != v22 != 0) {
            // 0x3f4349
            *(int32_t *)0x1abb7b61723b2582 = v22;
            int32_t v23 = *(int32_t *)(a3 + 120 + 4 * a3) + (int32_t)v9; // 0x3f4352
            if (llvm_ctpop_i8((char)v23) % 2 == 0) {
                // 0x3f43ae
                *(int32_t *)a1 = __asm_insd((int16_t)a3);
                return result2;
            }
            // 0x3f4359
            *(int32_t *)a1 = *(int32_t *)&v1;
            int32_t * v24 = (int32_t *)(result2 - 76); // 0x3f435a
            *v24 = *v24 + v23;
            return a4 & 0xffffffff;
        }
        v18 |= v15;
        *v17 = v18;
        v19 = *(char *)(a3 + 0x383bf05d) & ((char)result2 ^ -114) ^ 34;
        result3 = result2 & 0xffffff00 | (int64_t)v19;
    }
    // 0x3f42f9
    return result3;
}

// Address range: 0x3f43bc - 0x3f4453
int64_t function_3f43bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3f43bc
    int64_t v1; // 0x3f43bc
    uint64_t result = v1;
    char v2 = a2;
    bool v3; // 0x3f43bc
    if (!v3 && true) {
        // 0x3f43be
        __asm_outsb((int16_t)(2 * a3 & 254 | a3 & 0xff00), v2);
        return result;
    }
    // 0x3f440f
    *(char *)a1 = v2;
    int64_t v4 = (v3 ? -1 : 1) + a1; // 0x3f4416
    int16_t v5 = a3; // 0x3f4417
    *(char *)v4 = __asm_insb(v5);
    char v6 = *(char *)(a3 + 99); // 0x3f4418
    int32_t v7 = (int32_t)((result | 34) + 122 & 253 | result & 0xffff0000 | 256 * (int64_t)(v6 + (char)(result / 256))) + 0x8ddf2fb; // 0x3f441f
    uint64_t result2 = (int64_t)(v7 & -256) | (int64_t)__asm_in(-103); // 0x3f4425
    if (v7 != 0) {
        // 0x3f4451
        return result2;
    }
    int64_t v8 = 256 * (int64_t)*(char *)(result2 + 0x52010a72) | a4 & -0xff01; // 0x3f442c
    __asm_out(v5, (int32_t)result2);
    char * v9 = (char *)(v8 + 108); // 0x3f4433
    *v9 = *v9 | (char)(result2 / 256);
    int32_t * v10 = (int32_t *)(v8 - 0x4aded723); // 0x3f4440
    uint32_t v11 = *v10; // 0x3f4440
    *v10 = v11 / 0x1000 | 0x100000 * v11;
    return v4 + 0x6af0b557 & 0xffffff00 | (v4 + 239) % 256;
}

// Address range: 0x3f4588 - 0x3f4589
int64_t function_3f4588(int64_t a1) {
    // 0x3f4588
    int64_t result; // 0x3f4588
    return result;
}

// Address range: 0x3f45b9 - 0x3f45ba
int64_t function_3f45b9(void) {
    // 0x3f45b9
    int64_t result; // 0x3f45b9
    return result;
}

// Address range: 0x3f45e9 - 0x3f45f5
int64_t function_3f45e9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3f45e9
    int64_t v1; // 0x3f45e9
    bool v2; // 0x3f45e9
    if (v2 || false) {
        v1 = function_3f45b9();
    }
    // 0x3f45eb
    *(char *)a1 = (char)(a3 / 256) + (char)a1;
    return v1 & 0x968126be | 0x697ed941;
}

// Address range: 0x3f45f5 - 0x3f45f9
int64_t function_3f45f5(void) {
    // 0x3f45f5
    int64_t result; // 0x3f45f5
    return result;
}

// Address range: 0x3f45f9 - 0x3f45fe
int64_t function_3f45f9(void) {
    // 0x3f45f9
    return function_ffffffffa7fe4c5b();
}

// Address range: 0x3f45fe - 0x3f4760
int64_t function_3f45fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x3f45fe
    int64_t v1; // 0x3f45fe
    uint32_t v2 = (int32_t)v1; // 0x3f4601
    uint32_t v3 = (int32_t)v1;
    if (v3 == v2) {
        // 0x3f464f
        int64_t result; // 0x3f45fe
        return result;
    }
    if (v3 <= v2) {
        // 0x3f4609
        return v1 & -256 | (int64_t)*(char *)0x6fcb2668c92a68f9;
    }
    int16_t v4 = a3; // 0x3f4676
    __asm_outsd(v4, (int32_t)v1);
    bool v5; // 0x3f45fe
    uint32_t v6 = v2 + 1 + (int32_t)((v5 ? 0xfffffffc : 4) + a1); // 0x3f4678
    int64_t result2 = v6; // 0x3f4678
    if (v6 <= v2) {
        // 0x3f464f
        return result2;
    }
    // 0x3f46c5
    __asm_out(v4 & -256, v6);
    *(char *)0x46f3473852404b4f = (char)v6;
    return result2;
}
