/*
 * Targeted RetDec C for native executable gap queue batch 474.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2fe01e-0x2fe21e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fe21e-0x2fe41e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fe41e-0x2fe61e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fe61e-0x2fe81e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fe81e-0x2fea1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36bd1b-0x36bf1b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36bf1b-0x36c11b rank=- name=- kind=- bytes=- uncovered=-
 *   0x36c11b-0x36c31b rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g4;
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

int64_t function_11bbe6b5();
int64_t function_1373dd4();
int64_t function_16ce476();
int64_t function_17f5c2b0();
int64_t function_1d31cb9c();
int64_t function_2fe01e(void);
int64_t function_2fe05c(void);
int64_t function_2fe0a6(void);
int64_t function_2fe0c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fe0c6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2fe0d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fe11e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fe12d(int64_t a1);
int64_t function_2fe135(int64_t a1);
int64_t function_2fe13c(int64_t a1);
int64_t function_2fe18f(void);
int64_t function_2fe193(void);
int64_t function_2fe1c3(int64_t a1);
int64_t function_2fe1d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fe200(void);
int64_t function_2fe227(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2fe2b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fe2fa(int64_t a1);
int64_t function_2fe311(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fe371(int64_t a1);
int64_t function_2fe37a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2fe3aa(int64_t a1, int64_t a2);
int64_t function_2fe413(int64_t a1, int64_t a2);
int64_t function_2fe44b(void);
int64_t function_2fe4df(void);
int64_t function_2fe510(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fe534(void);
int64_t function_2fe54d(void);
int64_t function_2fe57d(int64_t a1, int64_t a2);
int64_t function_2fe655(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2fe673(void);
int64_t function_2fe690(int64_t a1);
int64_t function_2fe69f(void);
int64_t function_2fe6c6(void);
int64_t function_2fe6d2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2fe6ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fe73b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fe87f(int64_t a1);
int64_t function_2fe888(void);
int64_t function_2fe899(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2fe941(void);
int64_t function_2fe96d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2fe97c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fe9a6(int64_t a1);
int64_t function_36bd1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36bd30(void);
int64_t function_36bd41(int64_t a1, int64_t a2, int64_t a3);
int64_t function_36bd92(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36bd9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36bdba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36bdd6(int64_t a1);
int64_t function_36bfd7(void);
int64_t function_36bfe4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36c0b8(int64_t a1);
int64_t function_36c0cc(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_36c12f(void);
int64_t function_36c146(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36c165(void);
int64_t function_36c1b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_36c233(int64_t a1);
int64_t function_36c235(int64_t a1, int64_t a2);
int64_t function_36c262(void);
int64_t function_36c28a(void);
int64_t function_36c2b1(void);
int64_t function_36c2be(void);
int64_t function_36c2c9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t result);
int64_t function_36c2e0(void);
int64_t function_36c2f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_36c300(void);
int64_t function_36c30b(void);
int64_t function_c6a4359();
int64_t function_c6ab2bd();
int64_t function_ffffffff9aa2c483();
int64_t function_ffffffffce3c014e();
int64_t unknown_20a4a003();
int64_t unknown_217e73a();
int64_t unknown_3717900e();
int64_t unknown_43a4e96();
int64_t unknown_602adcd2();
int64_t unknown_619e4bc1();
int64_t unknown_63babd47();
int64_t unknown_6c98ada5();
int64_t unknown_a7ed1e2();
int64_t unknown_bc567e3();
int64_t unknown_ffffffff884f79eb();
int64_t unknown_ffffffff8f38a7ea();
int64_t unknown_ffffffff9430131d();
int64_t unknown_ffffffffa2ffd59d();
int64_t unknown_ffffffffa831e302();
int64_t unknown_ffffffffae5b65f0();
int64_t unknown_ffffffffafd47bff();
int64_t unknown_ffffffffb4bd3ef2();
int64_t unknown_ffffffffb6312112();
int64_t unknown_ffffffffba7acfa8();
int64_t unknown_ffffffffbc9db442();
int64_t unknown_ffffffffc2cf77c0();
int64_t unknown_ffffffffc390d019();
int64_t unknown_ffffffffc7354389();
int64_t unknown_ffffffffd27980ea();
int64_t unknown_ffffffffd4c28ab6();
int64_t unknown_fffffffff8da30c3();

// Address range: 0x2fe01e - 0x2fe01f
int64_t function_2fe01e(void) {
    // 0x2fe01e
    int64_t result; // 0x2fe01e
    return result;
}

// Address range: 0x2fe05c - 0x2fe05d
int64_t function_2fe05c(void) {
    // 0x2fe05c
    int64_t result; // 0x2fe05c
    return result;
}

// Address range: 0x2fe0a6 - 0x2fe0a8
int64_t function_2fe0a6(void) {
    // 0x2fe0a6
    int64_t v1; // 0x2fe0a6
    return function_2fe0c6(v1, v1, v1);
}

// Address range: 0x2fe0c4 - 0x2fe0c6
int64_t function_2fe0c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fe0c4
    *(int32_t *)a4 = 0;
    int64_t result; // 0x2fe0c4
    return result;
}

// Address range: 0x2fe0c6 - 0x2fe0cd
int64_t function_2fe0c6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2fe0c6
    return function_ffffffff9aa2c483();
}

// Address range: 0x2fe0d4 - 0x2fe0db
int64_t function_2fe0d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fe0d4
    int64_t v1; // 0x2fe0d4
    int32_t * v2 = (int32_t *)(v1 - 74); // 0x2fe0d4
    uint32_t v3 = *v2 + (int32_t)a4; // 0x2fe0d4
    *v2 = v3;
    int64_t result; // 0x2fe0d4
    if (v3 <= 0) {
        result = function_2fe05c();
    }
    // 0x2fe0db
    return result;
}

// Address range: 0x2fe11e - 0x2fe127
int64_t function_2fe11e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x2fe11e
    int64_t result; // 0x2fe11e
    if (v1 != 0) {
        char * v2 = (char *)(result - 0x2b9e9ffb + 2 * result); // 0x2fe11e
        unsigned char v3 = *v2; // 0x2fe11e
        *v2 = v3 >> 8 - v1 | v3 << v1;
    }
    // 0x2fe127
    return result;
}

// Address range: 0x2fe12d - 0x2fe135
int64_t function_2fe12d(int64_t a1) {
    // 0x2fe12d
    int64_t v1; // 0x2fe12d
    int64_t v2 = v1;
    char v3 = *(char *)(2 * a1 + 0x59daf88f); // 0x2fe12d
    return v2 & -256 | (int64_t)(v3 & (char)v2);
}

// Address range: 0x2fe135 - 0x2fe138
int64_t function_2fe135(int64_t a1) {
    // 0x2fe135
    int64_t result; // 0x2fe135
    return result;
}

// Address range: 0x2fe13c - 0x2fe143
int64_t function_2fe13c(int64_t a1) {
    int64_t result = unknown_ffffffffbc9db442(a1); // 0x2fe13c
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x2fe18f - 0x2fe190
int64_t function_2fe18f(void) {
    // 0x2fe18f
    int64_t result; // 0x2fe18f
    return result;
}

// Address range: 0x2fe193 - 0x2fe194
int64_t function_2fe193(void) {
    // 0x2fe193
    int64_t result; // 0x2fe193
    return result;
}

// Address range: 0x2fe1c3 - 0x2fe1c5
int64_t function_2fe1c3(int64_t a1) {
    // 0x2fe1c3
    int64_t result; // 0x2fe1c3
    return result;
}

// Address range: 0x2fe1d0 - 0x2fe1e8
int64_t function_2fe1d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3; // 0x2fe1d0
    int32_t * v4 = (int32_t *)(v3 - 24); // 0x2fe1d0
    *v4 = *v4 & (int32_t)v3;
    int64_t v5; // 0x2fe1d0
    int64_t v6 = v5;
    *(int32_t *)v6 = *(int32_t *)&v5 + (int32_t)v6;
    unsigned char v7 = (char)a4 % 32; // 0x2fe1db
    bool v8 = (int32_t)v5 < 0x87a61d01; // 0x2fe1db
    if (v7 != 0) {
        unsigned char v9 = *(char *)&v1; // 0x2fe1db
        unsigned char v10 = v9 >> 8 - v7 | v9 << v7; // 0x2fe1db
        *(char *)v1 = v10;
        v8 = v10 % 2 != 0;
    }
    char v11 = *(char *)&v2; // 0x2fe1de
    *(char *)v2 = (char)v8 - (char)v3 + v11;
    *(char *)a1 = (char)v5;
    return function_2fe193();
}

// Address range: 0x2fe200 - 0x2fe202
int64_t function_2fe200(void) {
    // 0x2fe200
    return function_2fe18f();
}

// Address range: 0x2fe227 - 0x2fe2b4
int64_t function_2fe227(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2fe227
    int64_t v1; // 0x2fe227
    char * v2 = (char *)(8 * v1 - 0x62a5f90b + v1); // 0x2fe227
    *v2 = *v2 + (char)(a3 / 256);
    float80_t v3; // 0x2fe227
    *(float64_t *)(v1 + 0x8d07756) = (float64_t)v3;
    __asm_psrlq(v1, *(int64_t *)(a2 - 18));
    if (*(char *)(2 * v1 - 0x71125d12) != (char)a5) {
        int32_t * v4 = (int32_t *)(a5 - 0x748fc7da); // 0x2fe28f
        *v4 = *v4 + (int32_t)v1;
        unknown_ffffffffa2ffd59d();
        unknown_ffffffffba7acfa8();
        return __asm_int1(&g3);
    }
    int32_t * v5 = (int32_t *)(v1 + 105); // 0x2fe252
    uint32_t v6 = *v5; // 0x2fe252
    uint32_t v7 = (int32_t)a1; // 0x2fe252
    int32_t v8 = v6 + v7; // 0x2fe252
    *v5 = v8;
    if (v8 < 0 != ((v8 ^ v6) & (v8 ^ v7)) < 0) {
        unsigned char v9 = *(char *)-0x17c6c2b4; // 0x2fe257
        *(char *)-0x17c6c2b4 = v9 / 128 | 2 * v9;
        return v1 & -256 | (int64_t)*(char *)-0x83d5febdefec300;
    }
    unsigned char v10 = llvm_ctpop_i8((char)v8); // 0x2fe252
    int64_t v11 = 0x100000000 * (256 * (64 * (int64_t)(v8 == 0) | (int64_t)(v8 < v6) | 16 * (int64_t)(v6 % 16 + v7 % 16 > 15) | 128 * (int64_t)(((v8 ^ v6) & (v8 ^ v7)) < 0) | 4 * (int64_t)(v10 % 2 == 0)) | v1 & 0xffff0000 | (int64_t)__asm_in(-0x6758)) >> 32 | 512; // 0x2fe26c
    uint64_t v12 = v11 * v11; // 0x2fe26c
    int32_t * v13 = (int32_t *)(v12 / 0x100000000); // 0x2fe270
    *v13 = *v13 - ((int32_t)a5 + v7);
    return v12 & 0xffffffff;
}

// Address range: 0x2fe2b5 - 0x2fe2ec
int64_t function_2fe2b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x2fe2b9
    int64_t v2; // 0x2fe2b5
    __asm_outsd(v1, (int32_t)v2);
    int64_t v3 = unknown_ffffffffc2cf77c0(); // 0x2fe2ba
    __asm_frstor(*(int864_t *)(v3 + 0x1e8a500));
    *(int32_t *)a4 = (int32_t)a1;
    int32_t v4 = v3; // 0x2fe2cd
    *(int32_t *)0x717a1a4b01e8a18b = v4;
    int32_t * v5 = (int32_t *)(v2 + 0x26aad86c); // 0x2fe2dc
    *v5 = *v5 + v4;
    *(char *)a1 = (char)v3;
    bool v6; // 0x2fe2b5
    int64_t v7 = (v6 ? -1 : 1) + a1; // 0x2fe2e3
    unknown_ffffffffd27980ea(v7);
    *(int32_t *)v7 = __asm_insd(v1);
    return __asm_in_133(v1);
}

// Address range: 0x2fe2fa - 0x2fe308
int64_t function_2fe2fa(int64_t a1) {
    // 0x2fe2fa
    unknown_ffffffffa831e302(a1);
    return function_1d31cb9c();
}

// Address range: 0x2fe311 - 0x2fe321
int64_t function_2fe311(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2fe311
    int64_t v1; // 0x2fe311
    int64_t v2 = v1;
    *(char *)v2 = (char)(v2 ^ a5);
    int64_t v3; // 0x2fe311
    *(char *)v3 = *(char *)&v3 - 85;
    int32_t * v4 = (int32_t *)(v1 - 0x6bff6700); // 0x2fe319
    *v4 = *v4 + (int32_t)a1;
    return function_2fe37a(a1, a2, a3, a4);
}

// Address range: 0x2fe371 - 0x2fe379
int64_t function_2fe371(int64_t a1) {
    // 0x2fe371
    return (int64_t)__asm_in_134((char)a1) | 0x1e89200;
}

// Address range: 0x2fe37a - 0x2fe38d
int64_t function_2fe37a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2fe37a
    int64_t v1; // 0x2fe37a
    int64_t v2 = v1;
    *(char *)v2 = (char)(v2 & v1);
    *(char *)a1 = __asm_insb((int16_t)a3);
    *(char *)(int64_t)(0x10000 * (int32_t)v2 >> 16) = (char)v2 + (char)(a4 / 256);
    uint64_t v3 = unknown_ffffffffc7354389(); // 0x2fe383
    char * v4 = (char *)(a4 - 109); // 0x2fe388
    *v4 = (char)(v3 / 256);
    int64_t v5; // 0x2fe37a
    *(char *)a3 = *(char *)&v5 + (char)a4;
    return 256 * (int64_t)*v4 | v3 & -0xff01;
}

// Address range: 0x2fe3aa - 0x2fe412
int64_t function_2fe3aa(int64_t a1, int64_t a2) {
    // 0x2fe3aa
    int64_t v1; // 0x2fe3aa
    int64_t v2 = v1;
    int64_t v3 = a1;
    uint64_t v4 = 256 * v2 & 0xff00 | v2; // 0x2fe3ae
    int64_t v5 = (int32_t)unknown_ffffffffd4c28ab6() >> 31; // 0x2fe3b5
    int64_t v6; // bp+19448, 0x2fe3aa
    int64_t v7 = (int64_t)&v6;
    int64_t v8; // 0x2fe3aa
    char * v9 = (char *)v8; // 0x2fe3c8
    char * v10 = (char *)(a2 - 0x60fe1733 + 8 * v3); // 0x2fe3bb
    *v10 = *v10 | (char)(v4 / 256);
    unsigned char v11 = *(char *)(v4 - 0x4bc2e9fd); // 0x2fe3c2
    char v12 = *v9 + (char)(v11 > (char)(v8 / 256)) + (char)v3; // 0x2fe3c8
    *v9 = v12;
    int64_t v13 = unknown_602adcd2(); // 0x2fe3cc
    while (v12 != 0) {
        // 0x2fe3bb
        v10 = (char *)(a2 - 0x60fe1733 + 8 * v3);
        *v10 = *v10 | (char)(v4 / 256);
        v11 = *(char *)(v4 - 0x4bc2e9fd);
        v12 = *v9 + (char)(v11 > (char)(v8 / 256)) + (char)v3;
        *v9 = v12;
        v13 = unknown_602adcd2();
    }
    int64_t v14 = v7 - 8; // 0x2fe3d3
    *(int64_t *)v14 = v13;
    int32_t * v15 = (int32_t *)(v13 - 35); // 0x2fe3d4
    *v15 = *v15 - 0x2a40c2d0;
    *(int32_t *)v3 = __asm_insd((int16_t)v5);
    v5 = v13 & 0xffffffff;
    int64_t v16 = unknown_bc567e3(); // 0x2fe3dd
    char v17 = *(char *)&v3; // 0x2fe3e2
    char * v18 = (char *)((v16 & -0x10000 | (int64_t)((256 * (int16_t)v16 >> 8) * (int16_t)v17)) - 0x6ea12cf9); // 0x2fe3e6
    *v18 = *v18 + (char)v2;
    char v19 = *(char *)(v5 + 9) ^ (char)unknown_ffffffffb4bd3ef2(); // 0x2fe3f2
    while (v19 >= 0) {
        int64_t v20 = v8 & -256 | 211; // 0x2fe3e4
        v8 = v20;
        if (llvm_ctpop_i8(v19) % 2 != 0) {
            // 0x2fe3f9
            bool v21; // 0x2fe3aa
            int64_t v22 = v21 ? 0xfffffffc : 4; // 0x2fe3f9
            int32_t v23 = *(int32_t *)v4; // 0x2fe3fe
            int32_t * v24 = (int32_t *)(v7 - 0x34b1b90a + 4 * (int64_t)((int32_t)(v22 + a2) - v23)); // 0x2fe401
            *v24 = *v24 - 24;
            int32_t * v25 = (int32_t *)(v20 - 11); // 0x2fe409
            *v25 = *v25 + (int32_t)v20;
            return unknown_ffffffffb6312112();
        }
        v7 = v14;
        v9 = (char *)v8;
        v10 = (char *)(a2 - 0x60fe1733 + 8 * v3);
        *v10 = *v10 | (char)(v4 / 256);
        v11 = *(char *)(v4 - 0x4bc2e9fd);
        v12 = *v9 + (char)(v11 > (char)(v8 / 256)) + (char)v3;
        *v9 = v12;
        v13 = unknown_602adcd2();
        while (v12 != 0) {
            // 0x2fe3bb
            v10 = (char *)(a2 - 0x60fe1733 + 8 * v3);
            *v10 = *v10 | (char)(v4 / 256);
            v11 = *(char *)(v4 - 0x4bc2e9fd);
            v12 = *v9 + (char)(v11 > (char)(v8 / 256)) + (char)v3;
            *v9 = v12;
            v13 = unknown_602adcd2();
        }
        // 0x2fe3d3
        v14 = v7 - 8;
        *(int64_t *)v14 = v13;
        v15 = (int32_t *)(v13 - 35);
        *v15 = *v15 - 0x2a40c2d0;
        *(int32_t *)v3 = __asm_insd((int16_t)v5);
        v5 = v13 & 0xffffffff;
        v16 = unknown_bc567e3();
        v17 = *(char *)&v3;
        v18 = (char *)((v16 & -0x10000 | (int64_t)((256 * (int16_t)v16 >> 8) * (int16_t)v17)) - 0x6ea12cf9);
        *v18 = *v18 + (char)v2;
        v19 = *(char *)(v5 + 9) ^ (char)unknown_ffffffffb4bd3ef2();
    }
  lab_0x2fe40c:
    // 0x2fe40c
    return unknown_ffffffffb6312112();
}

// Address range: 0x2fe413 - 0x2fe41d
int64_t function_2fe413(int64_t a1, int64_t a2) {
    // 0x2fe413
    return unknown_ffffffffc390d019(a1, a2);
}

// Address range: 0x2fe44b - 0x2fe450
int64_t function_2fe44b(void) {
    // 0x2fe44b
    return function_16ce476();
}

// Address range: 0x2fe4df - 0x2fe4e0
int64_t function_2fe4df(void) {
    // 0x2fe4df
    int64_t result; // 0x2fe4df
    return result;
}

// Address range: 0x2fe510 - 0x2fe534
int64_t function_2fe510(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fe510
    int64_t v1; // 0x2fe510
    *(char *)a1 = (char)v1;
    bool v2; // 0x2fe510
    int64_t v3 = (v2 ? -1 : 1) + a2; // 0x2fe510
    int64_t v4 = v1 & 0xffffffff; // 0x2fe511
    int64_t v5 = a3 - v1; // 0x2fe513
    int16_t v6 = v5; // 0x2fe515
    __asm_out(v6, (int32_t)__asm_wait(v4, v3));
    *(int32_t *)v4 = __asm_insd(v6);
    unsigned char v7 = *(char *)0x4e8f0824; // 0x2fe51c
    unsigned char v8 = (char)(v1 / 256); // 0x2fe51c
    char v9 = v7 + v8; // 0x2fe51c
    unsigned char v10 = llvm_ctpop_i8(v9); // 0x2fe51c
    *(char *)0x4e8f0824 = v9;
    uint64_t v11 = __asm_wait(0xb3a78327, v3); // 0x2fe525
    unsigned char v12 = *(char *)(v11 % 256 + v1); // 0x2fe52d
    *(int32_t *)((v11 & -0x10000 | (int64_t)v12 | 256 * (64 * (int64_t)(v9 == 0) | (int64_t)(v9 < v7) | 128 * (int64_t)(v9 < 0) | 16 * (int64_t)(v7 % 16 + v8 % 16 > 15) | 4 * (int64_t)(v10 % 2 == 0)) | 512) + v1) = (int32_t)v5;
    return unknown_217e73a();
}

// Address range: 0x2fe534 - 0x2fe53d
int64_t function_2fe534(void) {
    // 0x2fe534
    return function_2fe4df();
}

// Address range: 0x2fe54d - 0x2fe557
int64_t function_2fe54d(void) {
    // 0x2fe54d
    return unknown_217e73a();
}

// Address range: 0x2fe57d - 0x2fe581
int64_t function_2fe57d(int64_t a1, int64_t a2) {
    // 0x2fe57d
    int64_t result; // 0x2fe57d
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x2fe655 - 0x2fe65f
int64_t function_2fe655(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 0x77ec7572); // 0x2fe655
    int64_t v2; // 0x2fe655
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x2fe655
    *(int32_t *)a3 = *(int32_t *)&v3 | (int32_t)a1;
    return function_2fe6d2(a1, a2, a3);
}

// Address range: 0x2fe673 - 0x2fe67d
int64_t function_2fe673(void) {
    // 0x2fe673
    int64_t v1; // 0x2fe673
    int32_t * v2 = (int32_t *)(v1 + 10); // 0x2fe673
    *v2 = *v2 + (int32_t)v1;
    return function_11bbe6b5();
}

// Address range: 0x2fe690 - 0x2fe696
int64_t function_2fe690(int64_t a1) {
    // 0x2fe690
    return unknown_43a4e96(a1);
}

// Address range: 0x2fe69f - 0x2fe6a9
int64_t function_2fe69f(void) {
    // 0x2fe69f
    unknown_6c98ada5();
    return function_1373dd4();
}

// Address range: 0x2fe6c6 - 0x2fe6c8
int64_t function_2fe6c6(void) {
    // 0x2fe6c6
    int64_t v1; // 0x2fe6c6
    return function_2fe73b(v1, v1, v1, v1, (int64_t)&g4);
}

// Address range: 0x2fe6d2 - 0x2fe6e8
int64_t function_2fe6d2(int64_t a1, int64_t a2, int64_t a3) {
    int32_t result = __asm_in_133((int16_t)a3); // 0x2fe6d5
    int32_t * v1 = (int32_t *)(a3 + 60); // 0x2fe6dc
    *v1 = *v1 + (int32_t)a3;
    *(int32_t *)-0x6dfa4846978ad8f7 = result;
    return result;
}

// Address range: 0x2fe6ff - 0x2fe713
int64_t function_2fe6ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2fe6ff
    int64_t v1; // 0x2fe6ff
    int64_t v2 = v1;
    __asm_in_135(47);
    int32_t * v3 = (int32_t *)(v2 - 0x2b9afa18 + 2 * v2); // 0x2fe703
    *v3 = *v3 + (int32_t)a3;
    return a3 & 0xffffffff;
}

// Address range: 0x2fe73b - 0x2fe866
int64_t function_2fe73b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2fe73b
    int64_t result; // 0x2fe73b
    return result;
}

// Address range: 0x2fe87f - 0x2fe880
int64_t function_2fe87f(int64_t a1) {
    // 0x2fe87f
    int64_t result; // 0x2fe87f
    return result;
}

// Address range: 0x2fe888 - 0x2fe889
int64_t function_2fe888(void) {
    // 0x2fe888
    int64_t result; // 0x2fe888
    return result;
}

// Address range: 0x2fe899 - 0x2fe92f
int64_t function_2fe899(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2fe899
    int64_t v1; // 0x2fe899
    uint64_t v2 = v1;
    bool v3; // 0x2fe899
    if (true != !v3) {
        int64_t v4 = v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1); // 0x2fe899
        int64_t result = (int64_t)(*(int32_t *)v4 | (int32_t)v4); // 0x2fe89e
        if (a4 == 0) {
            result = function_2fe888();
        }
        // 0x2fe8a0
        return result;
    }
    // 0x2fe917
    unknown_ffffffff9430131d();
    int64_t result2 = __asm_int1((int64_t *)a1); // 0x2fe91e
    uint32_t v5 = (int32_t)a4 % 32; // 0x2fe91f
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)result2; // 0x2fe91f
        uint32_t v7 = *v6; // 0x2fe91f
        *v6 = v7 >> 32 - v5 | v7 << v5;
    }
    int32_t * v8 = (int32_t *)((a4 & -0xff01 | (int64_t)&g2) - 0x7ffedb06); // 0x2fe925
    *v8 = *v8 + (int32_t)v1;
    return result2;
}

// Address range: 0x2fe941 - 0x2fe942
int64_t function_2fe941(void) {
    // 0x2fe941
    int64_t result; // 0x2fe941
    return result;
}

// Address range: 0x2fe96d - 0x2fe972
int64_t function_2fe96d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2fe96d
    int64_t result; // 0x2fe96d
    return result;
}

// Address range: 0x2fe97c - 0x2fe99f
int64_t function_2fe97c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 121); // 0x2fe97c
    int32_t v2 = *v1 + (int32_t)a1; // 0x2fe97c
    *v1 = v2;
    uint32_t v3 = (int32_t)a4 % 32; // 0x2fe97f
    int64_t v4 = a2; // 0x2fe97f
    if (v3 != 0) {
        uint32_t v5 = (int32_t)a2; // 0x2fe97f
        v4 = v5 << 32 - v3 | v5 >> v3;
    }
    unsigned char v6 = llvm_ctpop_i8((char)v2); // 0x2fe97c
    int64_t v7; // 0x2fe97c
    *(char *)-0x41a990299f05eaef = (char)v7;
    if (v6 % 2 == 0) {
        function_2fe941();
    }
    int32_t v8 = *(int32_t *)(a3 + 0x7f449207); // 0x2fe98c
    *(char *)0x2a91e199 = *(char *)0x2a91e199 + (char)(v7 / 256);
    char * v9 = (char *)(v4 + 4 * v7); // 0x2fe998
    *v9 = *v9 & (char)a4;
    *(int64_t *)((int64_t)(v8 | (int32_t)v7) - 8) = a3;
    return __asm_int1((int64_t *)a1);
}

// Address range: 0x2fe9a6 - 0x2fe9a7
int64_t function_2fe9a6(int64_t a1) {
    // 0x2fe9a6
    int64_t result; // 0x2fe9a6
    return result;
}

// Address range: 0x36bd1b - 0x36bd21
int64_t function_36bd1b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36bd1b
    int64_t result; // 0x36bd1b
    return result;
}

// Address range: 0x36bd30 - 0x36bd31
int64_t function_36bd30(void) {
    // 0x36bd30
    int64_t result; // 0x36bd30
    return result;
}

// Address range: 0x36bd41 - 0x36bd7e
int64_t function_36bd41(int64_t a1, int64_t a2, int64_t a3) {
    // 0x36bd41
    int64_t v1; // 0x36bd41
    int64_t v2 = (int64_t)(*(int32_t *)(unknown_63babd47() - 0x74a30af5) + (int32_t)v1); // 0x36bd4b
    __asm_in_133((int16_t)a3);
    *(int64_t *)(v2 - 8) = 0x73fead00;
    float80_t v3; // 0x36bd41
    *(int16_t *)0x1c2fbe0f = (int16_t)v3;
    int64_t v4 = v2 - 16; // 0x36bd64
    *(int64_t *)v4 = 0x3a0a6800;
    int64_t v5; // 0x36bd41
    *(int32_t *)a2 = *(int32_t *)&v5 ^ (int32_t)v4;
    *(char *)0x7761df7a = *(char *)0x7761df7a + (char)(v1 / 256);
    return function_c6ab2bd();
}

// Address range: 0x36bd92 - 0x36bd9d
int64_t function_36bd92(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36bd92
    int64_t v1; // 0x36bd92
    return v1 & 0xffffffff ^ 0x68fcd1;
}

// Address range: 0x36bd9d - 0x36bda1
int64_t function_36bd9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x36bd9d
    return function_36bd30();
}

// Address range: 0x36bdba - 0x36bdd6
int64_t function_36bdba(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x36bdba
    int64_t v1; // 0x36bdba
    *(char *)a1 = (char)v1;
    unsigned char v2 = (char)a4 % 32; // 0x36bdc1
    if (v2 != 0) {
        bool v3; // 0x36bdba
        char * v4 = (char *)(a1 + 75 + (v3 ? -1 : 1)); // 0x36bdc1
        *v4 = *v4 >> v2;
    }
    int64_t v5 = 0x100000000 * v1 >> 32; // 0x36bdcd
    uint64_t v6 = v5 * v5; // 0x36bdcd
    int32_t * v7 = (int32_t *)(v1 + 65); // 0x36bdcf
    *v7 = *v7 + (int32_t)(v6 / 0x100000000);
    return v6 & 0xffffff20;
}

// Address range: 0x36bdd6 - 0x36bdde
int64_t function_36bdd6(int64_t a1) {
    // 0x36bdd6
    int64_t result; // 0x36bdd6
    return result;
}

// Address range: 0x36bfd7 - 0x36bfda
int64_t function_36bfd7(void) {
    // 0x36bfd7
    int64_t result; // 0x36bfd7
    return result;
}

// Address range: 0x36bfe4 - 0x36c002
int64_t function_36bfe4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffff8f38a7ea(); // 0x36bfe4
    bool v1; // 0x36bfe4
    if (a4 != 1 != v1) {
        // 0x36bfeb
        return result;
    }
    char v2 = *(char *)-0x2f1244fd; // 0x36bffc
    int64_t v3; // 0x36bfe4
    *(char *)-0x2f1244fd = v2 + (char)((uint64_t)v3 / 256);
    return result;
}

// Address range: 0x36c0b8 - 0x36c0c8
int64_t function_36c0b8(int64_t a1) {
    // 0x36c0b8
    int64_t v1; // 0x36c0b8
    *(char *)(unknown_619e4bc1() - 16) = (char)((uint64_t)v1 / 256);
    return function_17f5c2b0();
}

// Address range: 0x36c0cc - 0x36c123
int64_t function_36c0cc(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    unknown_a7ed1e2();
    char * v2 = (char *)(a2 + 25); // 0x36c0e1
    *v2 = *v2 + (char)(a4 / 256);
    __asm_wait(a1, a2);
    int64_t v3 = unknown_ffffffff884f79eb(); // 0x36c0e5
    *(int32_t *)a4 = *(int32_t *)&v1 + (int32_t)a2;
    int64_t v4; // 0x36c0cc
    *(int32_t *)a1 = (int32_t)v4;
    bool v5; // 0x36c0cc
    int64_t v6 = (v5 ? -4 : 4) + a1; // 0x36c0f6
    char * v7 = (char *)((2 * v4 & 0x1fffffffe) + 58); // 0x36c0f7
    *v7 = *v7 + (char)v4;
    int64_t v8; // 0x36c0cc
    v8 = 256 * (int64_t)(*(char *)&v8 & (char)(a3 / 256)) | a3 & -0xff01;
    unknown_20a4a003(v6);
    uint64_t v9 = unknown_3717900e(); // 0x36c108
    char * v10 = (char *)(v9 + 0x20b3000); // 0x36c10d
    *v10 = *v10 + (char)v9;
    char * v11 = (char *)((v3 & 0xffffffff) - 0x3bfe1800); // 0x36c113
    *v11 = *v11 + (char)(v9 / 256);
    char * v12 = (char *)(v6 + 110); // 0x36c119
    *v12 = *v12 + (char)v1;
    return __asm_hlt();
}

// Address range: 0x36c12f - 0x36c132
int64_t function_36c12f(void) {
    // 0x36c12f
    int64_t result; // 0x36c12f
    return result;
}

// Address range: 0x36c146 - 0x36c14e
int64_t function_36c146(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 9); // 0x36c146
    int64_t v2; // 0x36c146
    *v1 = *v1 + (int32_t)v2;
    return function_ffffffffce3c014e();
}

// Address range: 0x36c165 - 0x36c166
int64_t function_36c165(void) {
    // 0x36c165
    int64_t result; // 0x36c165
    return result;
}

// Address range: 0x36c1b4 - 0x36c223
int64_t function_36c1b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = unknown_fffffffff8da30c3(); // 0x36c1bd
    __asm_out_138((int16_t)a3, (char)v2);
    int64_t v3; // 0x36c1b4
    *(char *)a2 = (char)(v2 & v3);
    int128_t v4 = 2 * v2 & 0xfe00 | v2 & -0xff01; // 0x36c1c7
    uint128_t v5 = v4 * v4; // 0x36c1c7
    int64_t v6 = (int64_t)(v5 / 0x8000000000000000) + (int64_t)v5; // 0x36c1cb
    int32_t * v7 = (int32_t *)(a2 + 21); // 0x36c1d2
    uint32_t v8 = *v7; // 0x36c1d2
    *v7 = v8 / 2 | 0x80000000 * v8;
    int16_t v9 = v6; // 0x36c1de
    __asm_outsd(v9, *(int32_t *)a5);
    __asm_hlt();
    int64_t v10; // 0x36c1b4
    *(int32_t *)v10 = -1 - *(int32_t *)&v10;
    char * v11 = (char *)(v6 & 0xffffffff); // 0x36c1e5
    unsigned char v12 = *v11; // 0x36c1e5
    *v11 = v12 / 2 | 128 * v12;
    *(char *)a1 = *(char *)a5;
    bool v13; // 0x36c1b4
    int64_t v14 = v13 ? -1 : 1; // 0x36c1e7
    int64_t v15 = v14 + a1; // 0x36c1e7
    unknown_ffffffffae5b65f0(v15, v14 + a5);
    int32_t v16 = *(int32_t *)&v1; // 0x36c1ef
    *(int32_t *)v1 = 0x2000 * v16;
    int64_t v17 = v1 & -0xff01 | (int64_t)&g1; // 0x36c1f4
    char * v18 = (char *)v17; // 0x36c1f7
    *v18 = *v18 + (char)((v16 & 0x80000) != 0) - (char)v17;
    unknown_ffffffffafd47bff();
    *(char *)v15 = __asm_insb(v9);
    uint32_t v19 = __asm_in_133(v9); // 0x36c201
    uint64_t v20 = (0x100000000 * v6 | (int64_t)v19) % (int64_t)*(int32_t *)v17; // 0x36c202
    int32_t * v21 = (int32_t *)(v20 + 0x16d510d6); // 0x36c211
    *v21 = *v21 + (int32_t)v20;
    return function_c6a4359();
}

// Address range: 0x36c233 - 0x36c235
int64_t function_36c233(int64_t a1) {
    // 0x36c233
    return a1 & 0xffffffff;
}

// Address range: 0x36c235 - 0x36c23f
int64_t function_36c235(int64_t a1, int64_t a2) {
    // 0x36c235
    int64_t v1; // 0x36c235
    uint64_t v2 = v1;
    *(int32_t *)a1 = (int32_t)v1;
    bool v3; // 0x36c235
    return 0x40000000 * v2 & 0xc0000000 | v2 / 8 % 0x20000000 | 0x20000000 * (int64_t)v3;
}

// Address range: 0x36c262 - 0x36c263
int64_t function_36c262(void) {
    // 0x36c262
    int64_t result; // 0x36c262
    return result;
}

// Address range: 0x36c28a - 0x36c28c
int64_t function_36c28a(void) {
    // 0x36c28a
    int64_t v1; // 0x36c28a
    return function_36c2c9(v1, v1, v1, v1, v1, v1, (int64_t)&g4);
}

// Address range: 0x36c2b1 - 0x36c2b2
int64_t function_36c2b1(void) {
    // 0x36c2b1
    int64_t result; // 0x36c2b1
    return result;
}

// Address range: 0x36c2be - 0x36c2c9
int64_t function_36c2be(void) {
    // 0x36c2be
    int64_t v1; // 0x36c2be
    int64_t v2 = v1 & -256 | (int64_t)*(char *)-0x27f09abe57eb4e3b; // 0x36c2be
    bool v3; // 0x36c2be
    return (int64_t)(*(int32_t *)v2 + (int32_t)v3 + (int32_t)v2);
}

// Address range: 0x36c2c9 - 0x36c2d8
int64_t function_36c2c9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t result) {
    char * v1 = (char *)(a4 + 25); // 0x36c2cc
    *v1 = *v1 + (char)(a3 / 256);
    char v2 = *(char *)0x650ad6; // 0x36c2cf
    int64_t v3; // 0x36c2c9
    *(char *)0x650ad6 = v2 + (char)((uint64_t)v3 / 256);
    return result;
}

// Address range: 0x36c2e0 - 0x36c2e1
int64_t function_36c2e0(void) {
    // 0x36c2e0
    int64_t result; // 0x36c2e0
    return result;
}

// Address range: 0x36c2f6 - 0x36c300
int64_t function_36c2f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if (a4 == 0) {
        function_36c2e0();
    }
    int32_t * v1 = (int32_t *)(a1 + 0x2d353cdc); // 0x36c2f8
    *v1 = *v1 + (int32_t)a4;
    return function_36c2b1();
}

// Address range: 0x36c300 - 0x36c301
int64_t function_36c300(void) {
    // 0x36c300
    int64_t result; // 0x36c300
    return result;
}

// Address range: 0x36c30b - 0x36c30c
int64_t function_36c30b(void) {
    // 0x36c30b
    int64_t result; // 0x36c30b
    return result;
}
