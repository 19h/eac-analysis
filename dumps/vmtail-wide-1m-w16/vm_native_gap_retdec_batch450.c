/*
 * Targeted RetDec C for native executable gap queue batch 450.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1fde34-0x1fe034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f2b9e-0x3f2d9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f2d9e-0x3f2f9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f2f9e-0x3f319e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3f319e-0x3f339e rank=- name=- kind=- bytes=- uncovered=-
 *   0x40ef42-0x40f142 rank=- name=- kind=- bytes=- uncovered=-
 *   0x40f142-0x40f342 rank=- name=- kind=- bytes=- uncovered=-
 *   0x40f342-0x40f542 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1fde34(int64_t a1, int64_t a2, int32_t a3, int64_t a4);
int64_t function_1fde86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1fdff5(int64_t a1);
int64_t function_1fe02d(void);
int64_t function_3f2b38();
int64_t function_3f2b9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3f2c26(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3f2d84(int64_t a1);
int64_t function_3f2dc1(void);
int64_t function_3f2de7(int64_t a1);
int64_t function_3f2e10(void);
int64_t function_3f2e1b(void);
int64_t function_3f2e2f(void);
int64_t function_3f2e4e(void);
int64_t function_3f2e64(void);
int64_t function_3f2e8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3f2ead(void);
int64_t function_3f2eb5(void);
int64_t function_3f2ee1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3f2ffa(void);
int64_t function_3f2fff(int64_t a1);
int64_t function_3f304c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f30a3(void);
int64_t function_3f30a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3f3109(void);
int64_t function_3f3169(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f316d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3f31a0(void);
int64_t function_3f31c6(void);
int64_t function_3f31ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3f31f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f3267(int64_t a1);
int64_t function_3f3275(int64_t a1);
int64_t function_3f327e(void);
int64_t function_3f3289(void);
int64_t function_3f32e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3f336a(void);
int64_t function_3f336f(void);
int64_t function_3f3379(void);
int64_t function_40ef38();
int64_t function_40ef42(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_40f11d(int64_t a1);
int64_t function_40f199(int64_t a1);
int64_t function_40f1cc(int64_t a1);
int64_t function_40f252(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40f287(void);
int64_t function_40f28f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40f2cc(void);
int64_t function_40f2f0(int64_t a1);
int64_t function_40f305(void);
int64_t function_40f325(void);
int64_t function_40f350(int64_t a1, int64_t a2);
int64_t function_40f468(void);
int64_t function_40f49b(int64_t a1);
int64_t function_40f4c8(void);
int64_t function_76582217();
int64_t function_c57b8();
int64_t function_ffffffffb4e30dd6();
int64_t function_ffffffffb86af4da();
int64_t function_ffffffffbb7651b0();
int64_t function_ffffffffd56f0b57();
int64_t function_ffffffffd89f814a();
int64_t unknown_19b73711();
int64_t unknown_6a8e85b1();
int64_t unknown_ffffffffbc5b429a();
int64_t unknown_ffffffffdf49316c();

// Address range: 0x1fde34 - 0x1fde86
int64_t function_1fde34(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    // 0x1fde34
    int64_t v1; // 0x1fde34
    return function_c57b8(a1, (int32_t)a2, v1, v1);
}

// Address range: 0x1fde86 - 0x1fdfd9
int64_t function_1fde86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2 + 0x33fe4396; // bp-32, 0x1fdf02
    int64_t v2 = (int64_t)&v1; // 0x1fdf3e
    int64_t v3 = v2 + 16; // 0x1fdf46
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x1fdf46
    *v4 = 0x7d89b87c;
    *(int64_t *)(v2 - 16) = 0xa5b30c6;
    *(int64_t *)(v2 - 24) = a5;
    *(int64_t *)(v2 + 8) = *v4;
    *v4 = *(int64_t *)v3;
    *(int64_t *)(v2 + 32) = v1;
    v1 = 0x59136934;
    *v4 = a3;
    int64_t v5 = v1; // 0x1fdfcf
    v1 = v3;
    return function_c57b8(a1, (int32_t)a2, v5, a4);
}

// Address range: 0x1fdff5 - 0x1fdff8
int64_t function_1fdff5(int64_t a1) {
    // 0x1fdff5
    int64_t result; // 0x1fdff5
    return result;
}

// Address range: 0x1fe02d - 0x1fe030
int64_t function_1fe02d(void) {
    // 0x1fe02d
    int64_t result; // 0x1fe02d
    return result;
}

// Address range: 0x3f2b9e - 0x3f2c14
int64_t function_3f2b9e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3f2b9e
    int64_t result2; // 0x3f2b9e
    *(int32_t *)a4 = (int32_t)(result2 | a4);
    char * v1 = (char *)(result2 - 75); // 0x3f2ba0
    char v2 = a3; // 0x3f2ba0
    *v1 = *v1 + v2;
    char * v3 = (char *)(result2 - 26); // 0x3f2ba3
    unsigned char v4 = *v3; // 0x3f2ba3
    char v5 = result2; // 0x3f2ba3
    unsigned char v6 = v4 + v5; // 0x3f2ba3
    *v3 = v6;
    if (((v6 ^ v4) & (v6 ^ v5)) < 0) {
        int64_t result; // 0x3f2b9e
        if ((int32_t)(result2 || a3) < 0) {
            result = function_3f2b38();
        }
        // 0x3f2bad
        return result;
    }
    if (v6 < v4) {
        // 0x3f2bf1
        return a3 & -256 | (int64_t)(*(char *)(a3 + 0x33642ac0) & v2);
    }
    char * v7 = (char *)(a2 + 0x46cb3f16 + 4 * a4 & 0xffffffff); // 0x3f2bb2
    char v8 = *v7 ^ (char)a5; // 0x3f2bb2
    *v7 = v8;
    if (v8 < 0) {
        // 0x3f2bbd
        return __asm_hlt();
    }
    // 0x3f2c09
    *(char *)(2 * a5 + 0x74980f9 + result2) = v2;
    return result2;
}

// Address range: 0x3f2c26 - 0x3f2d5f
int64_t function_3f2c26(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3f2c26
    int64_t v1; // 0x3f2c26
    int32_t * v2 = (int32_t *)(v1 + 87); // 0x3f2c2b
    int32_t v3 = *v2 | (int32_t)a3; // 0x3f2c2b
    *v2 = v3;
    if (a4 == 0) {
        // 0x3f2c63
        return v1 & -0xff01 | 0x4000 * (int64_t)(v3 == 0) | 0x8000 * (int64_t)(v3 < 0) | 1024 * (int64_t)(llvm_ctpop_i8((char)v3) % 2 == 0) | 512;
    }
    unsigned char v4 = (char)v1 + 27; // 0x3f2c43
    if (v4 != 0) {
        // 0x3f2c55
        return v1 & -256 | (int64_t)v4;
    }
    // 0x3f2c47
    return __asm_sti();
}

// Address range: 0x3f2d84 - 0x3f2d92
int64_t function_3f2d84(int64_t a1) {
    // 0x3f2d84
    __asm_in((char)a1);
    __readgsdword(a1);
    return function_3f2e10();
}

// Address range: 0x3f2dc1 - 0x3f2dc9
int64_t function_3f2dc1(void) {
    // 0x3f2dc1
    return function_ffffffffbb7651b0();
}

// Address range: 0x3f2de7 - 0x3f2dec
int64_t function_3f2de7(int64_t a1) {
    // 0x3f2de7
    int64_t v1; // 0x3f2de7
    int64_t v2 = v1;
    bool v3; // 0x3f2de7
    return (v2 - (v3 ? 45 : 44)) % 256 | v2 & -256;
}

// Address range: 0x3f2e10 - 0x3f2e16
int64_t function_3f2e10(void) {
    // 0x3f2e10
    int64_t result; // 0x3f2e10
    *(char *)-0x3c4c6687 = *(char *)-0x3c4c6687 + (char)result;
    return result;
}

// Address range: 0x3f2e1b - 0x3f2e1c
int64_t function_3f2e1b(void) {
    // 0x3f2e1b
    int64_t result; // 0x3f2e1b
    return result;
}

// Address range: 0x3f2e2f - 0x3f2e30
int64_t function_3f2e2f(void) {
    // 0x3f2e2f
    int64_t result; // 0x3f2e2f
    return result;
}

// Address range: 0x3f2e4e - 0x3f2e57
int64_t function_3f2e4e(void) {
    // 0x3f2e4e
    unknown_6a8e85b1();
    bool v1; // 0x3f2e4e
    if (v1) {
        function_3f2e2f();
    }
    // 0x3f2e55
    return function_3f2eb5();
}

// Address range: 0x3f2e64 - 0x3f2e69
int64_t function_3f2e64(void) {
    // 0x3f2e64
    return function_ffffffffd56f0b57();
}

// Address range: 0x3f2e8e - 0x3f2e99
int64_t function_3f2e8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3f2e8e
    int64_t result; // 0x3f2e8e
    int64_t v1; // 0x3f2e8e
    if ((char)v1 != -(char)a6) {
        result = function_3f2e1b();
    }
    // 0x3f2e95
    *(int32_t *)a4 = (int32_t)a4 - (int32_t)a2;
    return result;
}

// Address range: 0x3f2ead - 0x3f2eaf
int64_t function_3f2ead(void) {
    // 0x3f2ead
    int64_t v1; // 0x3f2ead
    return function_3f2ee1(v1, v1, v1, v1, (int64_t)&g4);
}

// Address range: 0x3f2eb5 - 0x3f2ebc
int64_t function_3f2eb5(void) {
    // 0x3f2eb5
    int64_t v1; // 0x3f2eb5
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x3f2ee1 - 0x3f2fcf
int64_t function_3f2ee1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a5;
    int64_t v3; // 0x3f2ee1
    int64_t result = v3 | -0x3fb4afc0; // 0x3f2ee1
    *(int32_t *)a4 = (int32_t)v3 + (int32_t)a3;
    int64_t v4; // 0x3f2ee1
    *(char *)a4 = *(char *)&v4 & (char)(a4 / 256);
    char * v5 = (char *)(a4 - 0x74f0fd54); // 0x3f2ef2
    *v5 = *v5 + (char)v3;
    int64_t v6 = v2; // 0x3f2efa
    v2 = 0x9dcefa8;
    char * v7 = (char *)((a4 & -256 | 195) + 1); // 0x3f2f02
    *v7 = *v7 + 50;
    uint32_t v8 = *(int32_t *)&v1 ^ (int32_t)a1; // 0x3f2f11
    *(int32_t *)a3 = v8;
    if (v8 >= 1 || llvm_ctpop_i8(*(char *)(v6 - 19) & (char)result) % 2 == 0) {
        // 0x3f2f15
        return result;
    }
    uint32_t v9 = *(int32_t *)(result + 51); // 0x3f2f81
    uint32_t v10 = (int32_t)v6; // 0x3f2f85
    int32_t v11 = v9 > (int32_t)(int64_t)&v2; // 0x3f2f85
    int64_t v12; // 0x3f2ee1
    uint32_t v13 = *(int32_t *)&v12 + v11; // 0x3f2f85
    uint32_t v14 = v10 - v13; // 0x3f2f85
    bool v15 = v9 > (int32_t)(int64_t)&v2 ? v13 != -1 | v14 - v11 > v10 : v13 > v10; // 0x3f2f85
    char * v16 = (char *)(v3 + 93); // 0x3f2f87
    unsigned char v17 = *v16; // 0x3f2f87
    unsigned char v18 = (char)v15 + (char)v1; // 0x3f2f87
    *v16 = v17 - v18;
    if (v17 >= v18) {
        // 0x3f2f15
        return result;
    }
    int64_t v19 = v14; // 0x3f2f85
    uint32_t v20 = *(int32_t *)0x42ae6e0cad6d652e; // 0x3f2fb0
    int64_t result2 = v20; // 0x3f2fb0
    *(int64_t *)v3 = result2;
    char * v21 = (char *)v19; // 0x3f2fbc
    *v21 = *v21 + (char)v1;
    unsigned char v22 = llvm_ctpop_i8((char)v20 - 40); // 0x3f2fbe
    __asm_outsd((int16_t)v1, *(int32_t *)v19);
    if (v20 > 0x9d191d27 || v22 % 2 != 0) {
        // 0x3f2fcc
        __asm_out(-80, v20);
        return result2;
    }
    // 0x3f2f15
    return result2;
}

// Address range: 0x3f2ffa - 0x3f2ffc
int64_t function_3f2ffa(void) {
    // 0x3f2ffa
    int64_t v1; // 0x3f2ffa
    return function_3f304c(v1, v1, v1);
}

// Address range: 0x3f2fff - 0x3f3003
int64_t function_3f2fff(int64_t a1) {
    // 0x3f2fff
    int64_t v1; // 0x3f2fff
    return v1 | 120;
}

// Address range: 0x3f304c - 0x3f3062
int64_t function_3f304c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f304c
    int64_t v1; // 0x3f304c
    unsigned char v2 = (char)v1; // 0x3f3053
    unsigned char v3 = (char)v1 > (char)v1 ? 37 : 36; // 0x3f3053
    *(int64_t *)0x760bdcf8 = 0x760bdd00;
    int32_t v4 = (char)v1 > (char)v1 | v3 > v2 ? 0x2a13eff4 : 0x2a13eff3; // 0x3f3058
    __asm_out_134((int16_t)a3, v4 + (int32_t)(v1 & 0xffffff00 | (int64_t)(v2 - v3)));
    return __asm_in(32);
}

// Address range: 0x3f30a3 - 0x3f30a4
int64_t function_3f30a3(void) {
    // 0x3f30a3
    int64_t result; // 0x3f30a3
    return result;
}

// Address range: 0x3f30a9 - 0x3f3100
int64_t function_3f30a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3f30a9
    int64_t v1; // 0x3f30a9
    int32_t v2 = v1;
    int32_t v3 = v1; // 0x3f30aa
    int32_t v4 = v3 + v2; // 0x3f30aa
    *(int32_t *)a4 = v4;
    int32_t * v5 = (int32_t *)(a2 - 0x690e9e9b); // 0x3f30b1
    *v5 = 0x4000 * *v5;
    if (((v4 ^ v2) & (v4 ^ v3)) < 0) {
        // 0x3f30e6
        int64_t v6; // 0x3f30a9
        return (int64_t)&v6;
    }
    // 0x3f30fe
    return function_3f3169(a1, a2, 0xb70f32fd, (int64_t)&g4);
}

// Address range: 0x3f3109 - 0x3f310b
int64_t function_3f3109(void) {
    // 0x3f3109
    return function_3f30a3();
}

// Address range: 0x3f3169 - 0x3f316c
int64_t function_3f3169(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3f3169
    bool v1; // 0x3f3169
    *(char *)((v1 ? -4 : 4) + a1) = __asm_insb((int16_t)a3);
    int64_t result; // 0x3f3169
    return result;
}

// Address range: 0x3f316d - 0x3f3185
int64_t function_3f316d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3f316d
    int64_t v1; // 0x3f316d
    int32_t * v2 = (int32_t *)(v1 - 0x58fc9c9); // 0x3f316d
    *v2 = *v2 + (int32_t)a1;
    char * v3 = (char *)(a2 + 0x77cf4f54); // 0x3f3175
    unsigned char v4 = *v3;
    char v5 = v4 / 128 | 2 * v4; // 0x3f3175
    int64_t v6; // 0x3f316d
    uint32_t v7 = (int32_t)v6 - 0x1aded268; // 0x3f317b
    int64_t result = v7; // 0x3f317b
    int64_t v8; // 0x3f316d
    int64_t v9 = v8 - 1; // 0x3f3180
    while (v9 != 0 == v7 == 0) {
        // 0x3f3173
        v4 = v5;
        v5 = v4 / 128 | 2 * v4;
        v7 = (int32_t)result - 0x1aded268;
        result = v7;
        v9--;
    }
    // 0x3f3182
    *v3 = v5;
    return result;
}

// Address range: 0x3f31a0 - 0x3f31a1
int64_t function_3f31a0(void) {
    // 0x3f31a0
    int64_t result; // 0x3f31a0
    return result;
}

// Address range: 0x3f31c6 - 0x3f31cb
int64_t function_3f31c6(void) {
    // 0x3f31c6
    return function_ffffffffd89f814a();
}

// Address range: 0x3f31ce - 0x3f31ed
int64_t function_3f31ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t result; // 0x3f31ce
    if (a4 != 0) {
        char * v2 = (char *)(2 * a4 + a1); // 0x3f31d0
        *v2 = *v2 + (char)result;
        return result;
    }
    unsigned char v3 = *(char *)0x5940cce9; // 0x3f31d7
    char * v4 = (char *)(a3 + 127); // 0x3f31de
    *v4 = 128 * (char)(v3 > (char)(result / 256)) | *v4 / 2;
    int64_t v5 = a1 & 0xffffffff; // 0x3f31e2
    *(int32_t *)v5 = *(int32_t *)&v1;
    bool v6; // 0x3f31ce
    int64_t v7 = v6 ? -4 : 4; // 0x3f31e4
    return unknown_19b73711(v7 + v5, v1 + v7);
}

// Address range: 0x3f31f0 - 0x3f3236
int64_t function_3f31f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x3f31f0
    int32_t * v3 = (int32_t *)(2 * v2 + a3); // 0x3f31f6
    uint32_t v4 = *v3; // 0x3f31f6
    uint32_t v5 = (int32_t)a1; // 0x3f31f6
    int32_t v6 = v4 - v5; // 0x3f31f6
    *v3 = v6;
    __asm_out_135(31, (char)v2);
    if (v6 == 0) {
        // 0x3f3205
        *(char *)a1 = __readfsbyte(a2);
        return v2 & -256 | 132;
    }
    int64_t v7 = (int64_t)*(int32_t *)(a2 + 0x3e012835); // 0x3f31f0
    unsigned char v8 = llvm_ctpop_i8((char)v6); // 0x3f31f6
    int64_t v9; // 0x3f31f0
    int64_t v10 = (int64_t)&v9; // 0x3f3210
    int64_t result = __asm_sti(); // 0x3f31fe
    int64_t v11; // 0x3f31f0
    int64_t v12; // 0x3f31f0
    uint32_t v13; // 0x3f3216
    while (v8 % 2 == 0) {
        // 0x3f3210
        v12 = v10;
        v10 = v12 - 8;
        *(int64_t *)v10 = v7;
        if (v4 >= v5) {
            // 0x3f3213
            *(char *)v1 = *(char *)&v1 | (char)a4;
            v13 = (int32_t)result;
            v11 = result;
            if ((0x3b06d46e - v13 & v13) < 0) {
                v11 = function_3f31a0();
                goto lab_0x3f321d;
            } else {
                goto lab_0x3f321d;
            }
        }
        result = __asm_sti();
    }
    // 0x3f3201
    return result;
  lab_0x3f321d:;
    char v14 = *(char *)&v1; // 0x3f321d
    *(char *)v1 = v14 + (char)(v13 < 0x3b06d46f) + (char)(v11 / 256);
    int64_t v15 = v7 & 0xffffff00 | 111; // 0x3f321f
    __asm_rcl(*(int32_t *)(v11 + v15));
    *(int64_t *)(v12 - 16) = v15;
    *(int64_t *)(v12 - 24) = unknown_ffffffffbc5b429a();
    return __asm_int1();
}

// Address range: 0x3f3267 - 0x3f326d
int64_t function_3f3267(int64_t a1) {
    // 0x3f3267
    int64_t result; // 0x3f3267
    return result;
}

// Address range: 0x3f3275 - 0x3f3276
int64_t function_3f3275(int64_t a1) {
    // 0x3f3275
    int64_t result; // 0x3f3275
    return result;
}

// Address range: 0x3f327e - 0x3f327f
int64_t function_3f327e(void) {
    // 0x3f327e
    int64_t result; // 0x3f327e
    return result;
}

// Address range: 0x3f3289 - 0x3f3297
int64_t function_3f3289(void) {
    // 0x3f3289
    int64_t v1; // 0x3f3289
    int64_t v2 = v1 + 0xdd111685; // 0x3f3289
    __asm_out(83, (int32_t)v2);
    return v2 & 0xffffffff;
}

// Address range: 0x3f32e6 - 0x3f3351
int64_t function_3f32e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3f32e6
    int64_t result; // 0x3f32e6
    bool v1; // 0x3f32e6
    if (v1 || v1) {
        // 0x3f3335
        *(char *)0x30857b412fd8687d = (char)result;
        if (a4 != 1 == v1) {
            // 0x3f3384
            return result;
        }
        int32_t * v2 = (int32_t *)(result - 0x4e95cb31); // 0x3f3347
        *v2 = *v2 + (int32_t)result;
        return result;
    }
    int32_t * v3 = (int32_t *)(result + 39); // 0x3f32e8
    *v3 = 0x200000 * *v3;
    int32_t * v4 = (int32_t *)(a3 + 23); // 0x3f32f1
    int32_t v5 = *v4 ^ (int32_t)result; // 0x3f32f1
    *v4 = v5;
    int64_t v6 = result & 0xffffffff ^ 0xd50584f8; // 0x3f32f4
    if (a4 != 1 && v5 != 0) {
        v6 = function_3f327e();
    }
    // 0x3f32f6
    return v6 & -256 | (int64_t)__asm_in_136(103);
}

// Address range: 0x3f336a - 0x3f336f
int64_t function_3f336a(void) {
    // 0x3f336a
    return function_ffffffffb4e30dd6();
}

// Address range: 0x3f336f - 0x3f3377
int64_t function_3f336f(void) {
    // 0x3f336f
    int64_t result; // 0x3f336f
    return result;
}

// Address range: 0x3f3379 - 0x3f3381
int64_t function_3f3379(void) {
    // 0x3f3379
    int64_t result; // 0x3f3379
    float80_t v1; // 0x3f3379
    *(float64_t *)(result + 34) = (float64_t)v1;
    __asm_out_135(16, (char)result);
    return result;
}

// Address range: 0x40ef42 - 0x40f0e7
int64_t function_40ef42(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x40ef42
    int64_t v1; // 0x40ef42
    uint64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a1;
    int64_t v5 = __asm_wait(); // 0x40ef42
    char * v6 = (char *)(a4 - 56); // 0x40ef43
    unsigned char v7 = (char)(a4 / 256); // 0x40ef43
    *v6 = *v6 | v7;
    __asm_fbld(*(float80_t *)&v4);
    int64_t v8; // 0x40ef42
    *(char *)a2 = *(char *)&v8 & (char)(a3 / 256);
    char * v9 = (char *)(v2 - 38); // 0x40ef4a
    unsigned char v10 = *v9; // 0x40ef4a
    *v9 = v10 - v7;
    int64_t v11 = (v5 & 0xffff00ff | (int64_t)(int32_t)&g3) + 0x4498b1a0 + (int64_t)(v10 < v7); // 0x40ef4f
    unsigned char v12 = llvm_ctpop_i8((char)v11 - 20); // 0x40ef54
    int64_t v13 = v11 & 0xffffffff; // 0x40ef56
    v8 = v13;
    if (v12 % 2 != 0) {
        // 0x40ef59
        if (a4 != 1 == *(char *)(v13 - 0x1687f169) == (char)v3) {
            function_40ef38();
        }
        // 0x40ef63
        return __asm_in(55);
    }
    unsigned char v14 = *(char *)&v3; // 0x40efba
    int64_t result = a2 & 0xffffff00 | (int64_t)*(char *)v13; // 0x40efbd
    int64_t v15 = v13 - 1; // 0x40efbd
    v8 = v15;
    int64_t v16 = a4 - 1; // 0x40efbe
    if (v16 != 0 && (v14 & (char)(v2 / 256)) != 0) {
        // 0x40eff7
        *(char *)v3 = 128 * (char)((int32_t)result < 0xe61c58b2) | v14 / 2;
        int64_t v17 = v3;
        *(int32_t *)v17 = (int32_t)v17;
        unknown_ffffffffdf49316c();
        if ((char)(v2 ^ v16) != 0) {
            // 0x40f074
            return function_ffffffffb86af4da();
        }
        // 0x40f014
        return (int64_t)*(char *)-0x292585abeff84ecb | 0xb9242a70;
    }
    if (v16 == 0) {
        // 0x40ef9d
        return result + 0x42c3ae7a & 0xffffffff;
    }
    if ((v14 & (char)(v2 / 256)) == 0) {
        // 0x40efe4
        return result;
    }
    int32_t v18 = *(int32_t *)&v4; // 0x40efc5
    v4 -= 4;
    v8 = v13 - 5;
    if (*(int32_t *)v15 >= v18) {
        // 0x40efdc
        *(char *)(v13 + 60) = (char)v16;
        return result;
    }
    int64_t result2 = result ^ 0x7e004026; // 0x40efcb
    char * v19 = (char *)((v2 & -0xff01 | (int64_t)&g2) - 0x1c98c4a); // 0x40efd0
    *v19 = *v19 + (char)result2;
    __asm_outsb((int16_t)v3, *(char *)v8);
    return result2;
}

// Address range: 0x40f11d - 0x40f11e
int64_t function_40f11d(int64_t a1) {
    // 0x40f11d
    int64_t result; // 0x40f11d
    return result;
}

// Address range: 0x40f199 - 0x40f19a
int64_t function_40f199(int64_t a1) {
    // 0x40f199
    int64_t result; // 0x40f199
    return result;
}

// Address range: 0x40f1cc - 0x40f1cf
int64_t function_40f1cc(int64_t a1) {
    // 0x40f1cc
    int64_t result; // 0x40f1cc
    return result;
}

// Address range: 0x40f252 - 0x40f257
int64_t function_40f252(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 65); // 0x40f252
    *v1 = *v1 >> 20;
    int64_t result; // 0x40f252
    return result;
}

// Address range: 0x40f287 - 0x40f288
int64_t function_40f287(void) {
    // 0x40f287
    int64_t result; // 0x40f287
    return result;
}

// Address range: 0x40f28f - 0x40f2b7
int64_t function_40f28f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40f28f
    int64_t v1; // 0x40f28f
    int64_t v2 = v1;
    int64_t v3; // 0x40f28f
    if (a4 == 0) {
        v3 = function_40f287();
    }
    // 0x40f297
    *(char *)v2 = 2 * (char)v2;
    return v3 & 0x637d4200;
}

// Address range: 0x40f2cc - 0x40f2cd
int64_t function_40f2cc(void) {
    // 0x40f2cc
    int64_t result; // 0x40f2cc
    return result;
}

// Address range: 0x40f2f0 - 0x40f2fd
int64_t function_40f2f0(int64_t a1) {
    // 0x40f2f0
    return (int64_t)*(int32_t *)0xf4800a2d7c77869;
}

// Address range: 0x40f305 - 0x40f308
int64_t function_40f305(void) {
    // 0x40f305
    int64_t result; // 0x40f305
    return result;
}

// Address range: 0x40f325 - 0x40f32a
int64_t function_40f325(void) {
    // 0x40f325
    return function_76582217();
}

// Address range: 0x40f350 - 0x40f357
int64_t function_40f350(int64_t a1, int64_t a2) {
    // 0x40f350
    int64_t result; // 0x40f350
    return result;
}

// Address range: 0x40f468 - 0x40f470
int64_t function_40f468(void) {
    // 0x40f468
    int64_t result; // 0x40f468
    return result;
}

// Address range: 0x40f49b - 0x40f4a0
int64_t function_40f49b(int64_t a1) {
    // 0x40f49b
    int64_t v1; // 0x40f49b
    return 2 * v1 & 0xfffffffe;
}

// Address range: 0x40f4c8 - 0x40f4c9
int64_t function_40f4c8(void) {
    // 0x40f4c8
    int64_t result; // 0x40f4c8
    return result;
}
