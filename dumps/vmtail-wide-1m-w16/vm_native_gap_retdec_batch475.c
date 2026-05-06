/*
 * Targeted RetDec C for native executable gap queue batch 475.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x11d946-0x11db46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11db46-0x11dd46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11dd46-0x11df46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11df46-0x11e146 rank=- name=- kind=- bytes=- uncovered=-
 *   0x11e146-0x11e346 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e5c96-0x3e5e96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e5e96-0x3e6096 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e6096-0x3e6296 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_11d930();
int64_t function_11d946(int64_t a1, int64_t a2);
int64_t function_11d989(int64_t a1);
int64_t function_11d98e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11d9f7(void);
int64_t function_11d9fc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_11da3f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_11daa0(void);
int64_t function_11db16(int64_t a1);
int64_t function_11db29(void);
int64_t function_11db2e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_11dbab(void);
int64_t function_11dbbb(void);
int64_t function_11dbbe(int64_t a1, uint64_t a2, int64_t a3, int64_t a4);
int64_t function_11dd20(void);
int64_t function_11dd37(void);
int64_t function_11dd4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11dd78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11de6a(int64_t a1);
int64_t function_11de9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11deae(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11df0d(void);
int64_t function_11dfdd(void);
int64_t function_11dff6(int64_t a1);
int64_t function_11e019(void);
int64_t function_11e04e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_11e15a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11e182(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_11e26a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_11e296(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3e5c96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3e5ddc(int64_t a1);
int64_t function_3e5e19(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e5e28(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3e5fa2(int64_t a1);
int64_t function_3e5fad(void);
int64_t function_3e5fcd(void);
int64_t function_3e5fe3(int64_t a1);
int64_t function_3e5ff6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3e601a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e6026(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e6091(void);
int64_t function_3e609f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e614d(void);
int64_t function_3e61fe(void);
int64_t function_3e6222(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e6285(int64_t a1);
int64_t function_3e6287(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5c26eaf9();
int64_t function_72171b7c();
int64_t function_ffffffffdc3c1400();
int64_t function_ffffffffdd150628();
int64_t function_fffffffff2b6dcc2();
int64_t unknown_10488601();
int64_t unknown_2e33d198();
int64_t unknown_33e3668f();
int64_t unknown_39c9a49e();
int64_t unknown_3a27a462();
int64_t unknown_3d13c21f();
int64_t unknown_4b02ed88();
int64_t unknown_59c080f7();
int64_t unknown_5dc15bae();
int64_t unknown_7434e8df();
int64_t unknown_7fe9b47e();
int64_t unknown_c6c6acc();
int64_t unknown_db869d();
int64_t unknown_ffffffff8bc8d27b();
int64_t unknown_ffffffff913a4644();
int64_t unknown_ffffffff9ecfd3a7();
int64_t unknown_ffffffffb65067ea();
int64_t unknown_ffffffffc671edc5();
int64_t unknown_ffffffffd42084db();
int64_t unknown_ffffffffeb02be9d();
int64_t unknown_ffffffffffe34bb4();

// Address range: 0x11d946 - 0x11d94f
int64_t function_11d946(int64_t a1, int64_t a2) {
    // 0x11d946
    int64_t result; // 0x11d946
    bool v1; // 0x11d946
    if (!v1 && !v1) {
        result = function_11d930();
    }
    int32_t * v2 = (int32_t *)(a1 - 65); // 0x11d948
    *v2 = *v2 + (int32_t)a2;
    return result;
}

// Address range: 0x11d989 - 0x11d98c
int64_t function_11d989(int64_t a1) {
    // 0x11d989
    int64_t result; // 0x11d989
    return result;
}

// Address range: 0x11d98e - 0x11d9f0
int64_t function_11d98e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11d98e
    int64_t v1; // 0x11d98e
    uint64_t result = v1;
    int64_t v2 = a3;
    int64_t v3 = a1;
    char v4 = result ^ v1; // 0x11d98e
    *(char *)v1 = v4;
    if (v4 != 0) {
        unsigned char v5 = *(char *)&v3; // 0x11d9e7
        char v6 = *(char *)&v2; // 0x11d9ee
        *(char *)v2 = v6 - (char)(result / 256) + (char)(v5 > (char)result);
        return result;
    }
    int64_t v7 = unknown_2e33d198(); // 0x11d992
    char v8 = v7; // 0x11d997
    uint64_t v9 = v7 + 152; // 0x11d997
    if ((103 - v8 & v8) < 0) {
        // 0x11d9ba
        *(char *)v3 = (char)v9;
        bool v10; // 0x11d98e
        return unknown_ffffffffc671edc5(v3 + (v10 ? -1 : 1)) ^ 202;
    }
    int32_t * v11 = (int32_t *)((v9 % 256 | v7 & -256) - 0x6c853428); // 0x11d99b
    *v11 = *v11 - 1;
    return unknown_ffffffff9ecfd3a7();
}

// Address range: 0x11d9f7 - 0x11d9fb
int64_t function_11d9f7(void) {
    // 0x11d9f7
    int64_t result; // 0x11d9f7
    return result;
}

// Address range: 0x11d9fc - 0x11da3e
int64_t function_11d9fc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a1;
    *(int32_t *)-0x27186028 = *(int32_t *)-0x27186028 + (int32_t)a2;
    int64_t v2; // 0x11d9fc
    char v3 = *(char *)(v2 - 0x7e7ff864); // 0x11da02
    int32_t * v4 = (int32_t *)(v2 - 0x631bfe18); // 0x11da08
    *v4 = (int32_t)v2;
    unknown_3d13c21f();
    int32_t * v5 = (int32_t *)(a3 - 0x1dfe1779); // 0x11da1e
    uint32_t v6 = *v5; // 0x11da1e
    uint32_t v7 = v6 + (int32_t)(256 * (int64_t)(v3 | (char)(a4 / 256)) | a4 & 0xffff00ff); // 0x11da1e
    *v5 = v7;
    uint64_t v8 = __asm_int3((int64_t)&g2); // 0x11da24
    unsigned char v9 = *(char *)&v1; // 0x11da25
    char v10 = v8;
    unsigned char v11 = v9 + v10; // 0x11da25
    unsigned char v12 = v11 + (char)(v7 < v6); // 0x11da25
    bool v13 = v7 < v6 ? v12 <= v9 : v11 < v9; // 0x11da25
    *(char *)v1 = v12;
    uint32_t v14 = (int32_t)v2; // 0x11da27
    uint32_t v15 = *v4 + v14; // 0x11da27
    bool v16 = v13 ? v15 + (int32_t)v13 <= v14 : v15 < v14; // 0x11da27
    int32_t * v17 = (int32_t *)(v8 + 0x782dcf72); // 0x11da29
    *v17 = *v17 - (int32_t)v2 + (int32_t)v16;
    char v18 = *(char *)(a3 + 0x1f7b64ff); // 0x11da2f
    int64_t result = 256 * (int64_t)(v18 & (char)(v8 / 256)) | v8 & -0xffcf; // 0x11da35
    char * v19 = (char *)result; // 0x11da3c
    *v19 = *v19 + (v10 & 49);
    return result;
}

// Address range: 0x11da3f - 0x11da8d
int64_t function_11da3f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x11da3f
    int64_t v1; // 0x11da3f
    uint64_t v2 = v1;
    char v3 = v2 / 256; // 0x11da41
    *(char *)0xab1fc48 = *(char *)0xab1fc48 + v3;
    char * v4 = (char *)(a3 - 77); // 0x11da47
    *v4 = *v4 + (char)(a4 / 256);
    char * v5 = (char *)(v1 + 69); // 0x11da4a
    *v5 = *v5 + v3;
    int32_t * v6 = (int32_t *)(a2 + 123 + 8 * v2); // 0x11da4f
    *v6 = *v6 + (int32_t)a3;
    uint32_t v7 = (int32_t)a1; // 0x11da5e
    *(int32_t *)0x2ca4165 = *(int32_t *)0x2ca4165 + v7;
    bool v8; // 0x11da3f
    int64_t v9 = v8 ? -4 : 4; // 0x11da64
    int64_t v10 = v9 + a2; // 0x11da64
    uint32_t v11 = *(int32_t *)(a3 - 0x73fa7f7a) + v7; // 0x11da6f
    int64_t v12 = v11; // 0x11da6f
    int64_t v13 = unknown_ffffffff8bc8d27b(v11, v10); // 0x11da75
    char * v14 = (char *)(v2 - 0xf2b6afb + 4 * v10); // 0x11da7a
    *v14 = *v14 + (char)v13 + (char)(v11 < v7);
    uint32_t v15 = *(int32_t *)v12; // 0x11da81
    return unknown_4b02ed88(v9 + v12) + 0x363aa2c8 + (int64_t)(v15 > (int32_t)v13) & 0xffffffff;
}

// Address range: 0x11daa0 - 0x11dab0
int64_t function_11daa0(void) {
    // 0x11daa0
    int64_t v1; // 0x11daa0
    int32_t * v2 = (int32_t *)(v1 - 111); // 0x11daa2
    *v2 = *v2 + (int32_t)v1;
    return v1 & -256 | (int64_t)__asm_in_134(104);
}

// Address range: 0x11db16 - 0x11db17
int64_t function_11db16(int64_t a1) {
    // 0x11db16
    int64_t result; // 0x11db16
    return result;
}

// Address range: 0x11db29 - 0x11db2e
int64_t function_11db29(void) {
    // 0x11db29
    return function_72171b7c();
}

// Address range: 0x11db2e - 0x11db91
int64_t function_11db2e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x11db2e
    int64_t result; // 0x11db2e
    bool v1; // 0x11db2e
    if (v1 || false) {
        // 0x11db88
        *(char *)(result + 0x7b01e81c) = (char)(a4 / 256);
        return (result & 0xffffffff | 0x100000000 * a3) / (a2 & 0xffffffff) & 0xffffffff;
    }
    // 0x11db30
    return result;
}

// Address range: 0x11dbab - 0x11dbbb
int64_t function_11dbab(void) {
    // 0x11dbab
    int64_t v1; // 0x11dbab
    *(char *)-0x6f7007f7f577fe18 = (char)v1;
    return function_fffffffff2b6dcc2();
}

// Address range: 0x11dbbb - 0x11dbbc
int64_t function_11dbbb(void) {
    // 0x11dbbb
    int64_t result; // 0x11dbbb
    return result;
}

// Address range: 0x11dbbe - 0x11dbe4
int64_t function_11dbbe(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    // 0x11dbbe
    int64_t v1; // 0x11dbbe
    int64_t v2 = v1;
    bool v3; // 0x11dbbe
    int64_t v4 = a3 & -256 | (int64_t)(128 * (char)v3 | (char)a3 / 2); // 0x11dbc0
    int64_t v5 = v2 - (a3 & 0xff00) & 0xff00 | v2 & 0xffff00ff; // 0x11dbc2
    int32_t * v6 = (int32_t *)(a4 - 14); // 0x11dbc9
    *v6 = *v6 + (int32_t)v1;
    int32_t * v7 = (int32_t *)(v5 - 0x3ffd76d4); // 0x11dbcc
    *v7 = *v7 | (int32_t)a4;
    int64_t v8 = v3 ? -1 : 1; // 0x11dbd6
    int64_t v9 = v8 + a1; // 0x11dbd6
    unknown_7434e8df(v9, v5 + v8, v4, a2 / 2 % 0x80000000);
    *(int32_t *)(v9 + (v3 ? -4 : 4)) = __asm_insd((int16_t)v4);
    return function_11dbbb();
}

// Address range: 0x11dd20 - 0x11dd21
int64_t function_11dd20(void) {
    // 0x11dd20
    int64_t result; // 0x11dd20
    return result;
}

// Address range: 0x11dd37 - 0x11dd38
int64_t function_11dd37(void) {
    // 0x11dd37
    int64_t result; // 0x11dd37
    return result;
}

// Address range: 0x11dd4f - 0x11dd69
int64_t function_11dd4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11dd4f
    int64_t v1; // 0x11dd4f
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int32_t * v4 = (int32_t *)(2 * v1 + 0x601e0147); // 0x11dd4f
    uint32_t v5 = *v4; // 0x11dd4f
    int32_t v6 = a1; // 0x11dd4f
    uint32_t v7 = v5 + v6; // 0x11dd4f
    *v4 = v7;
    int64_t v8 = v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1); // 0x11dd58
    if (((v7 ^ v5) & (v7 ^ v6)) >= 0) {
        v8 = function_11dd20();
    }
    // 0x11dd5a
    *(char *)a5 = *(char *)&v3;
    return v8 + (v7 < v5 ? 0x8601e8ad : 0x8601e8ac) & 0xffffffff;
}

// Address range: 0x11dd78 - 0x11de23
int64_t function_11dd78(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x11dd78
    int64_t v1; // 0x11dd78
    int64_t v2 = v1;
    int64_t v3 = a3;
    int32_t * v4 = (int32_t *)(8 * a4 - 0x187cfe18 + v1); // 0x11dd78
    *v4 = *v4 & 0x2667ce98;
    int32_t * v5 = (int32_t *)(a3 - 119); // 0x11dd89
    uint32_t v6 = *v5; // 0x11dd89
    uint32_t v7 = v6 + (int32_t)a2; // 0x11dd89
    *v5 = v7;
    int64_t v8 = a4 - 1; // 0x11dd94
    if (v8 != 0 == v7 == 0) {
        function_11dd37();
    }
    int64_t v9 = unknown_ffffffffeb02be9d() + (v7 < v6 ? 0x4bb87b35 : 0x4bb87b34); // 0x11dd9c
    *(char *)(v2 + v8) = (char)v2;
    char v10 = *(char *)&v3; // 0x11ddad
    char v11 = v9; // 0x11ddad
    char v12 = v10 + v11; // 0x11ddad
    *(char *)v3 = v12;
    int64_t v13 = v3; // bp-8, 0x11ddaf
    if (((v12 ^ v10) & (v12 ^ v11)) < 0) {
        // 0x11dddd
        bool v14; // 0x11dd78
        __asm_iretd((v14 ? -1 : 1) + a1);
        unknown_ffffffffb65067ea();
        int32_t * v15 = (int32_t *)(a2 - 67); // 0x11ddef
        *v15 = *v15 + (int32_t)v8;
        int64_t v16 = unknown_10488601(); // 0x11ddfb
        return (v16 + 86) % 256 | v16 & -256;
    }
    int64_t v17 = (int64_t)&v13; // 0x11ddb0
    char v18 = *(char *)(v3 - 26); // 0x11ddb8
    int64_t v19 = v17 & -0x10000 | (int64_t)((256 * (int16_t)v17 >> 8) * (int16_t)v18); // 0x11ddb8
    int64_t v20 = (v9 & 0xffffffff) - 1; // 0x11ddbc
    if (v20 != 0 == v12 == 0) {
        // 0x11de0a
        __asm_out((int16_t)v3, (int32_t)v20);
        char * v21 = (char *)(v20 & 0xffffffff); // 0x11de16
        *v21 = *v21 + 2 * (char)v20;
        return function_11de9c(a1, a2, v3, v19 & 0xffffffff);
    }
    char * v22 = (char *)v19; // 0x11ddc0
    unsigned char v23 = *v22; // 0x11ddc0
    char v24 = v23 / 128; // 0x11ddc0
    *v22 = v24 | 2 * v23;
    int64_t result = v19; // 0x11ddc3
    if (v23 / 64 % 2 == v24) {
        // 0x11ddc5
        result = unknown_c6c6acc();
    }
    // 0x11ddcb
    return result;
}

// Address range: 0x11de6a - 0x11de6d
int64_t function_11de6a(int64_t a1) {
    // 0x11de6a
    int64_t result; // 0x11de6a
    return result;
}

// Address range: 0x11de9c - 0x11dea2
int64_t function_11de9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x31012964); // 0x11de9c
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x11de9c
    return result;
}

// Address range: 0x11deae - 0x11deb6
int64_t function_11deae(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11deae
    return unknown_ffffffffffe34bb4(a1, a2, a3, a4);
}

// Address range: 0x11df0d - 0x11df0e
int64_t function_11df0d(void) {
    // 0x11df0d
    int64_t result; // 0x11df0d
    return result;
}

// Address range: 0x11dfdd - 0x11dff0
int64_t function_11dfdd(void) {
    unsigned char v1 = *(char *)-0x17b8cb2b; // 0x11dfe4
    *(char *)-0x17b8cb2b = v1 / 128 | 2 * v1;
    return function_ffffffffdd150628();
}

// Address range: 0x11dff6 - 0x11dff7
int64_t function_11dff6(int64_t a1) {
    // 0x11dff6
    int64_t result; // 0x11dff6
    return result;
}

// Address range: 0x11e019 - 0x11e01c
int64_t function_11e019(void) {
    // 0x11e019
    int64_t result; // 0x11e019
    return result;
}

// Address range: 0x11e04e - 0x11e117
int64_t function_11e04e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x11e04e
    int32_t * v3 = (int32_t *)(v2 + 6); // 0x11e04e
    int32_t v4 = v2; // 0x11e04e
    *v3 = *v3 + v4;
    int32_t * v5 = (int32_t *)(a1 + 0xcdbb792); // 0x11e051
    *v5 = *v5 | 0x5cf6ab74;
    char * v6 = (char *)(v2 - 93);
    int3_t v7; // 0x11e04e
    int3_t v8 = v7 - 1;
    char * v9 = (char *)(v2 - 0x3984945d);
    int64_t v10 = a3;
    unknown_3a27a462();
    uint32_t v11 = __asm_in_135((int16_t)v10); // 0x11e061
    uint64_t v12 = v10 + a4; // 0x11e062
    *(int32_t *)-0x3ffe1774cfff7610 = v11;
    int64_t v13 = v12 & 0xffffffff; // 0x11e070
    *v6 = *v6 - (char)(v11 / 256);
    __frontend_reg_store_fpr(v8, (float80_t)*(int64_t *)v13);
    char * v14 = (char *)(v13 + 0x1701e88e); // 0x11e077
    unsigned char v15 = *v14; // 0x11e077
    unsigned char v16 = v15 + (char)(v12 / 256); // 0x11e077
    *v14 = v16;
    int64_t v17; // 0x11e04e
    *(char *)v17 = *(char *)&v17 - (char)v2 + (char)(v16 < v15);
    __frontend_reg_load_fpr(v8);
    __asm_int1();
    unknown_33e3668f();
    char v18 = *v9 | (char)(v2 / 256); // 0x11e08e
    *v9 = v18;
    int64_t result = unknown_39c9a49e(); // 0x11e098
    while (v18 != 0) {
        int64_t v19 = v10 & -256 | (int64_t)(*(char *)&v1 | (char)v10); // 0x11e06e
        int32_t * v20 = (int32_t *)v19; // 0x11e09f
        int32_t v21 = *v20; // 0x11e09f
        int32_t v22 = v21 + v4; // 0x11e09f
        *v20 = v22;
        int64_t v23 = v11; // 0x11e0a2
        if (v22 < 0 == ((v22 ^ v21) & (v22 ^ v4)) < 0 != v22 != 0) {
            // 0x11e0a4
            return result;
        }
        v10 = v19;
        unknown_3a27a462();
        v11 = __asm_in_135((int16_t)v10);
        v12 = v10 + v23;
        *(int32_t *)-0x3ffe1774cfff7610 = v11;
        v13 = v12 & 0xffffffff;
        *v6 = *v6 - (char)(v11 / 256);
        __frontend_reg_store_fpr(v8, (float80_t)*(int64_t *)v13);
        v14 = (char *)(v13 + 0x1701e88e);
        v15 = *v14;
        v16 = v15 + (char)(v12 / 256);
        *v14 = v16;
        *(char *)v17 = *(char *)&v17 - (char)v2 + (char)(v16 < v15);
        __frontend_reg_load_fpr(v8);
        __asm_int1();
        unknown_33e3668f();
        v18 = *v9 | (char)(v2 / 256);
        *v9 = v18;
        result = unknown_39c9a49e();
    }
    uint32_t v24 = (*(int32_t *)(v2 - 0x17cb0bb2) | v4) + (int32_t)v1; // 0x11e102
    int64_t result2 = result + 0x8600 & 0xff00 | result & -0xff01; // 0x11e104
    if (v24 == 0) {
        result2 = function_5c26eaf9();
    }
    int32_t * v25 = (int32_t *)((int64_t)v24 - 0x10ff863b); // 0x11e111
    *v25 = *v25 + v4;
    return result2;
}

// Address range: 0x11e15a - 0x11e160
int64_t function_11e15a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11e15a
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return function_ffffffffdc3c1400();
}

// Address range: 0x11e182 - 0x11e194
int64_t function_11e182(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x11e182
    int64_t v1; // 0x11e182
    __asm_out_136((int16_t)a3, (char)v1);
    *(char *)a1 = (char)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x11e26a - 0x11e296
int64_t function_11e26a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x11e26a
    *(int32_t *)-0x17beef40 = (int32_t)a3;
    int64_t v1; // 0x11e26a
    int32_t * v2 = (int32_t *)(v1 + 0x3527f34a + v1); // 0x11e270
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x11e26a
    uint32_t v4 = *(int32_t *)&v3; // 0x11e277
    bool v5; // 0x11e26a
    int64_t v6 = v5 ? -4 : 4; // 0x11e277
    int64_t v7 = v6 + a1; // 0x11e277
    int64_t v8 = unknown_7fe9b47e(v7); // 0x11e278
    char v9 = *(char *)v8; // 0x11e27d
    unsigned char v10 = v9 + (char)v8 + (char)(v4 > (int32_t)v1); // 0x11e27d
    int64_t v11 = v8 & -256; // 0x11e27d
    int64_t v12 = v11 | (int64_t)v10; // 0x11e27d
    char * v13 = (char *)v12; // 0x11e280
    *v13 = *v13 - 32;
    uint32_t v14 = (int32_t)v12; // 0x11e288
    *(int32_t *)v7 = v14;
    *(char *)-0x5a1766b8 = *(char *)-0x5a1766b8 + (char)(v1 / 256);
    __asm_out((int16_t)a3, v14);
    uint32_t v15 = *(int32_t *)(v7 + v6); // 0x11e290
    return v11 | (int64_t)(v10 - 36 + (char)(v15 > v14));
}

// Address range: 0x11e296 - 0x11e346
int64_t function_11e296(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x11e296
    int64_t v1; // 0x11e296
    *(char *)a1 = (char)v1;
    bool v2; // 0x11e296
    int64_t v3 = (v2 ? -1 : 1) + a1; // 0x11e296
    int64_t v4 = unknown_db869d(v3); // 0x11e297
    unsigned char v5 = (char)a4; // 0x11e29c
    unsigned char v6 = *(char *)(v4 + 0x54a67397) + v5; // 0x11e29c
    __asm_int3((int64_t)&g2);
    int64_t result = unknown_5dc15bae(); // 0x11e2a8
    if ((int32_t)v4 + 0x28d91c6 + (int32_t)(v6 < v5) < 0) {
        // 0x11e2b1
        return result;
    }
    int64_t v7 = a4 & -256; // 0x11e29c
    char * v8 = (char *)result; // 0x11e2b2
    unsigned char v9 = *v8; // 0x11e2b2
    *v8 = (v9 / 128 | 2 * v9) - (char)result;
    int64_t v10 = a3 + 0xf7834ae; // 0x11e2c8
    __asm_wait();
    unsigned char v11 = *(char *)(v1 - 0x64ddd405 + (v7 | (int64_t)v6)) & v6; // 0x11e2ce
    int64_t v12 = v7 | (int64_t)v11; // 0x11e2ce
    int64_t v13 = unknown_ffffffffd42084db(); // 0x11e2d5
    if (v11 == 0) {
        int32_t v14 = 0x10000 * (int32_t)v13 >> 16; // 0x11e331
        uint32_t v15 = v14 + 0x6e063c4b; // 0x11e332
        char v16 = (char)(v15 / 128) & -2; // 0x11e337
        int64_t v17 = 256 * (int64_t)v16 | (int64_t)(v15 & -0xff01); // 0x11e337
        *(char *)(v17 + (v12 + 0xf087cb52 & 0xffffffff)) = (char)v10;
        if (v16 < 1) {
            // 0x11e308
            return v17 & 0xfffffe00 | (int64_t)((v14 + 162) % 256);
        }
        int64_t result2 = unknown_ffffffff913a4644(); // 0x11e33e
        *(char *)0xf087cb63 = *(char *)0xf087cb63 - 68;
        return result2;
    }
    int32_t * v18 = (int32_t *)(v1 - 0x17feb807); // 0x11e2dc
    *v18 = *v18 + (int32_t)v1;
    int32_t * v19 = (int32_t *)(v12 + 0x3ae993f5); // 0x11e2e3
    uint32_t v20 = *v19; // 0x11e2e3
    int32_t v21 = v3; // 0x11e2e3
    int32_t v22 = v20 + v21; // 0x11e2e3
    *v19 = v22;
    char * v23 = (char *)(v12 + 43); // 0x11e2e9
    *v23 = (char)(a4 / 256);
    int64_t v24 = 256 * (int64_t)*v23 | v12 & -0xff01; // 0x11e2e9
    unsigned char v25 = v11 % 32; // 0x11e2ec
    bool v26 = ((v22 ^ v20) & (v22 ^ v21)) < 0; // 0x11e2ec
    int64_t v27 = v24; // 0x11e2ec
    if (v25 != 0) {
        unsigned char v28 = v25 - 1; // 0x11e2ec
        unsigned char v29 = v11 << v25 | (char)((int16_t)v11 >> (int16_t)(9 - v25)) | (char)(v22 < v20) << v28; // 0x11e2ec
        v26 = v25 == 1 ? (v29 ^ v11 << v28) < 0 : ((v22 ^ v20) & (v22 ^ v21)) < 0;
        v27 = v24 & -256 | (int64_t)v29;
    }
    if (v22 < 0 == v26 == (v22 != 0)) {
        function_11e296(v3, a2, v10 & 0xffffffff, v27);
    }
    // 0x11e2f0
    return unknown_59c080f7();
}

// Address range: 0x3e5c96 - 0x3e5da6
int64_t function_3e5c96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3e5c96
    int64_t v1; // 0x3e5c96
    int64_t v2 = v1;
    int64_t v3 = a2; // bp-8, 0x3e5c97
    int32_t * v4 = (int32_t *)((a3 & -256 | 116) - 127); // 0x3e5ca0
    *v4 = *v4 ^ (int32_t)v1;
    char v5 = v2;
    unsigned char v6 = v5 - 78; // 0x3e5ca8
    unsigned char v7 = v5 - 50; // 0x3e5ca8
    bool v8 = ((int32_t)v2 ^ -2) < 0x2838bb2 ? v7 + (char)(((int32_t)v2 ^ -2) < 0x2838bb2) <= v6 : v7 < v6; // 0x3e5ca8
    char v9 = *(char *)0x785a79e3 + (char)v8 - (char)(v1 / 256); // 0x3e5caa
    unsigned char v10 = llvm_ctpop_i8(v9); // 0x3e5caa
    *(char *)0x785a79e3 = v9;
    int64_t result = (int64_t)&v3; // 0x3e5cb0
    if (v10 % 2 == 0) {
        // 0x3e5cb7
        return result;
    }
    char * v11 = (char *)(v1 + 82); // 0x3e5d31
    char v12 = *v11; // 0x3e5d31
    char v13 = v12 + 116; // 0x3e5d31
    *v11 = v13;
    if (v13 < 0 == (v13 & (v12 ^ -128)) < 0) {
        // 0x3e5ccd
        return result & -256 | (int64_t)__asm_in((int16_t)((int32_t)result >> 31));
    }
    // 0x3e5d39
    int32_t v14; // 0x3e5c96
    if ((v14 & (int32_t)*(int64_t *)(v1 + 8)) != 0) {
        // 0x3e5cb7
        return result;
    }
    // 0x3e5d45
    *(int32_t *)0x415012f40 = *(int32_t *)0x415012f40 + 0x2effc36c;
    return result;
}

// Address range: 0x3e5ddc - 0x3e5de1
int64_t function_3e5ddc(int64_t a1) {
    // 0x3e5ddc
    int64_t v1; // 0x3e5ddc
    int64_t v2 = v1;
    bool v3; // 0x3e5ddc
    return (v2 + 200 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x3e5e19 - 0x3e5e27
int64_t function_3e5e19(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e5e19
    int64_t v1; // 0x3e5e19
    return v1 & 0xffffffff;
}

// Address range: 0x3e5e28 - 0x3e5f6b
int64_t function_3e5e28(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int32_t v2 = (int32_t)a2 + 1; // 0x3e5e2a
    *(int32_t *)a2 = v2;
    int64_t v3; // 0x3e5e28
    int32_t v4 = v3;
    bool v5; // 0x3e5e28
    if (v2 == 0 || v5) {
        uint32_t v6 = v4 / 0x100000 | 0x1000 * v4; // 0x3e5e30
        int64_t v7 = (int64_t)(*(int32_t *)(int64_t)v6 ^ (int32_t)a1); // 0x3e5e33
        *(int32_t *)v7 = v6;
        uint32_t v8 = (int32_t)a4 % 32; // 0x3e5e3a
        if (v8 != 0) {
            int32_t * v9 = (int32_t *)(v3 + 102); // 0x3e5e3a
            *v9 = *v9 << v8;
        }
        return __asm_hlt((v5 ? -4 : 4) + v7);
    }
    // 0x3e5eac
    *(char *)a1 = __asm_insb((int16_t)(v4 >> 31));
    int32_t v10 = *(int32_t *)&v1; // 0x3e5eba
    int64_t v11 = v1 + (v5 ? 0xfffffffc : 4); // 0x3e5eba
    int64_t v12 = v11 & 0xffffffff; // 0x3e5eba
    v1 = v12;
    int32_t v13 = v10 & (int32_t)v11; // 0x3e5ebf
    if (v13 < 0) {
        // 0x3e5f0a
        return (int64_t)v13 + 0x66553712;
    }
    int64_t v14 = __asm_wait(); // 0x3e5ee8
    int32_t * v15 = (int32_t *)(v12 - 54); // 0x3e5ef2
    *v15 = -1 - *v15;
    *(char *)0x947974b2 = *(char *)v1;
    uint32_t v16 = (int32_t)a4 % 32; // 0x3e5f05
    if (v16 != 0) {
        int32_t * v17 = (int32_t *)(v3 + 8); // 0x3e5f05
        uint32_t v18 = *v17; // 0x3e5f05
        unsigned char v19 = *((v5 ? (char *)0x918944d3 : (char *)0x918944d5)); // 0x3e5eff
        *v17 = v18 >> v16 | (int32_t)((int64_t)v18 << (int64_t)(33 - v16)) | (int32_t)(v19 < (char)(a4 / 256)) << 32 - v16;
    }
    return v14 & -256 | 216;
}

// Address range: 0x3e5fa2 - 0x3e5fa7
int64_t function_3e5fa2(int64_t a1) {
    // 0x3e5fa2
    int64_t v1; // 0x3e5fa2
    return v1 | 57;
}

// Address range: 0x3e5fad - 0x3e5fb0
int64_t function_3e5fad(void) {
    // 0x3e5fad
    int64_t v1; // 0x3e5fad
    return function_3e601a(v1, v1, v1, (int64_t)&g2);
}

// Address range: 0x3e5fcd - 0x3e5fce
int64_t function_3e5fcd(void) {
    // 0x3e5fcd
    int64_t result; // 0x3e5fcd
    return result;
}

// Address range: 0x3e5fe3 - 0x3e5fe7
int64_t function_3e5fe3(int64_t a1) {
    // 0x3e5fe3
    return __asm_int3(a1);
}

// Address range: 0x3e5ff6 - 0x3e6005
int64_t function_3e5ff6(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3e5ff6
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int32_t * v1 = (int32_t *)(a1 + 53); // 0x3e6001
    *v1 = (int32_t)(a4 % 2 != 0) - (int32_t)a3 + *v1;
    int64_t v2; // 0x3e5ff6
    return v2 & -256 | (int64_t)*(char *)0x39634635a899077f;
}

// Address range: 0x3e601a - 0x3e6022
int64_t function_3e601a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e601a
    __asm_in_133(116);
    bool v1; // 0x3e601a
    return __asm_iretd((v1 ? -4 : 4) + a1);
}

// Address range: 0x3e6026 - 0x3e602a
int64_t function_3e6026(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e6026
    int64_t v1; // 0x3e6026
    *(int32_t *)a1 = (int32_t)(v1 | a3);
    return function_3e5fcd();
}

// Address range: 0x3e6091 - 0x3e609f
int64_t function_3e6091(void) {
    // 0x3e6091
    int64_t v1; // 0x3e6091
    return v1 & 0x4bb21a4;
}

// Address range: 0x3e609f - 0x3e60a3
int64_t function_3e609f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e609f
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x3e609f
    return result;
}

// Address range: 0x3e614d - 0x3e614f
int64_t function_3e614d(void) {
    // 0x3e614d
    int64_t result; // 0x3e614d
    return result;
}

// Address range: 0x3e61fe - 0x3e61ff
int64_t function_3e61fe(void) {
    // 0x3e61fe
    int64_t result; // 0x3e61fe
    return result;
}

// Address range: 0x3e6222 - 0x3e6283
int64_t function_3e6222(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e6222
    int64_t v1; // 0x3e6222
    int64_t v2 = v1;
    uint32_t v3 = *(int32_t *)(v1 + 13) ^ (int32_t)a3; // 0x3e6223
    if (v3 == 0) {
        // 0x3e6281
        return v2 & 0xffffff00 | (int64_t)__asm_in_134(31);
    }
    char * v4 = (char *)(4 * (int64_t)v3 + a4); // 0x3e6228
    *v4 = *v4 + (char)v3;
    int32_t * v5 = (int32_t *)((v1 & 0xffffffff) + 0x3f4204a1); // 0x3e622c
    *v5 = *v5 / 0x40000;
    int64_t v6 = v2 & 0xff00 & v1 | v2 & 0xffff00ff; // 0x3e6235
    char * v7 = (char *)(v1 - 38 + 2 * v6); // 0x3e6237
    char v8 = v2; // 0x3e6237
    *v7 = *v7 - v8;
    __asm_out_138(6, v8);
    int16_t v9 = v3; // 0x3e623f
    *(char *)a1 = __asm_insb(v9);
    int64_t v10; // 0x3e6222
    __asm_outsb(v9, *(char *)&v10);
    return v6 & 0xffffff00 | (int64_t)*(char *)-0x5c27ed7bea73724;
}

// Address range: 0x3e6285 - 0x3e6287
int64_t function_3e6285(int64_t a1) {
    // 0x3e6285
    int64_t result; // 0x3e6285
    return result;
}

// Address range: 0x3e6287 - 0x3e6296
int64_t function_3e6287(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e6287
    int64_t v1; // 0x3e6287
    int64_t result = v1;
    if (a4 == 0) {
        // 0x3e629b
        return result;
    }
    // 0x3e628b
    return (result + 127) % 256 | result & -256;
}
