/*
 * Targeted RetDec C for native executable gap queue batch 283.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x169caa-0x169eaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x169eaa-0x16a0aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16a0aa-0x16a2aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16a4aa-0x16a6aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x3152bb-0x3154bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3154bb-0x3156bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3156bb-0x3158bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3158bb-0x315abb rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
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

int64_t function_169caa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_169dd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_169f02(void);
int64_t function_169f2b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_169f6b(int64_t a1);
int64_t function_169f76(int64_t a1);
int64_t function_169f91(void);
int64_t function_169f98(int64_t a1);
int64_t function_169fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_169fe5(int64_t a1, int64_t a2);
int64_t function_16a028(int64_t a1);
int64_t function_16a0b9(int64_t a1);
int64_t function_16a0c3(int64_t a1);
int64_t function_16a0e0(int64_t a1);
int64_t function_16a137(int64_t a1, int64_t a2);
int64_t function_16a186(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16a1ab(void);
int64_t function_16a1b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16a1df(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16a217(int64_t a1, int64_t a2);
int64_t function_16a249(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_16a257(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16a28f(void);
int64_t function_16a29c(int64_t a1, int64_t a2);
int64_t function_16a4aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16a4f3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16a510(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16a54b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16a562(void);
int64_t function_16a56a(int64_t a1);
int64_t function_16a5d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16a5e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16a628(void);
int64_t function_1705a0();
int64_t function_219550f();
int64_t function_2a6bded1();
int64_t function_315267();
int64_t function_3152bb(int64_t a1);
int64_t function_31531d(void);
int64_t function_315320(int64_t a1, int64_t a2, int64_t a3);
int64_t function_315340(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_31540a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31546f(int64_t a1);
int64_t function_315474(void);
int64_t function_31547f(void);
int64_t function_3154a4(void);
int64_t function_3154af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3154bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31553a(void);
int64_t function_31553f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_315557(void);
int64_t function_31555b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31555d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3155a3(void);
int64_t function_3155d9(int64_t a1);
int64_t function_31561b(void);
int64_t function_315638(int64_t a1, int64_t a2, int64_t a3);
int64_t function_315645(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31569f(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5);
int64_t function_31572a(int64_t a1);
int64_t function_315730(int64_t a1);
int64_t function_315738(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_315754(void);
int64_t function_315761(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_315780(int64_t a1);
int64_t function_315824(void);
int64_t function_315827(int64_t a1, int64_t a2);
int64_t function_315834(int64_t a1);
int64_t function_315839(int64_t a1);
int64_t function_315861(void);
int64_t function_315874(int64_t a1, int64_t a2);
int64_t function_3158ff(void);
int64_t function_31595e(void);
int64_t function_315974(int64_t a1, int64_t a2, int64_t a3);
int64_t function_315985(void);
int64_t function_3159da(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3159f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_315a92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_42334268();
int64_t function_7654a815();
int64_t function_c57b8();
int64_t function_ffffffff81d1a5bc();
int64_t function_ffffffffa406abab();
int64_t function_ffffffffe833f208();
int64_t unknown_1184cfcc();
int64_t unknown_250915cd();
int64_t unknown_2d15aa33();
int64_t unknown_322f6b36();
int64_t unknown_3a422cf9();
int64_t unknown_51b081fa();
int64_t unknown_54710303();
int64_t unknown_6229ab51();
int64_t unknown_633564b();
int64_t unknown_66dfd740();
int64_t unknown_7a3772cf();
int64_t unknown_e8aa4de();
int64_t unknown_ffffffffa83bf2de();
int64_t unknown_ffffffffb4cae9f2();
int64_t unknown_ffffffffcc05c9fa();
int64_t unknown_ffffffffdc4b0dbd();
int64_t unknown_ffffffffdd746bed();
int64_t unknown_ffffffffe10e84c2();
int64_t unknown_fffffffff8c798c0();

// Address range: 0x169caa - 0x169dd7
int64_t function_169caa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x169caa
    return function_c57b8(a1);
}

// Address range: 0x169dd7 - 0x169f02
int64_t function_169dd7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x169dd7
    return function_c57b8(a1);
}

// Address range: 0x169f02 - 0x169f07
int64_t function_169f02(void) {
    // 0x169f02
    return function_1705a0();
}

// Address range: 0x169f2b - 0x169f5b
int64_t function_169f2b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_2d15aa33(); // 0x169f2d
    bool v2; // 0x169f2b
    int64_t v3 = v2 ? -4 : 4; // 0x169f32
    int64_t v4 = v3 + a2; // 0x169f32
    int64_t v5 = (a4 / 256 + (a3 & 250)) % 256 | a3 & 0x89149400; // 0x169f39
    int32_t * v6 = (int32_t *)(v4 + 0x10936f75); // 0x169f3b
    int64_t v7; // 0x169f2b
    *v6 = *v6 + (int32_t)v7;
    uint32_t v8 = (int32_t)a4 % 32; // 0x169f43
    if (v8 != 0) {
        int32_t * v9 = (int32_t *)v5; // 0x169f43
        *v9 = *v9 >> v8;
    }
    int64_t v10 = v3 + a1; // 0x169f32
    char * v11 = (char *)(v5 + 0xbb5a409); // 0x169f45
    *v11 = *v11 + (char)a4;
    int64_t result = unknown_6229ab51(v10, v4, v1 & 0xffffffff); // 0x169f4b
    *(int32_t *)(a4 + 81) = (int32_t)v10;
    return result;
}

// Address range: 0x169f6b - 0x169f6e
int64_t function_169f6b(int64_t a1) {
    // 0x169f6b
    int64_t v1; // 0x169f6b
    return v1 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x169f76 - 0x169f7f
int64_t function_169f76(int64_t a1) {
    // 0x169f76
    int64_t result; // 0x169f76
    int32_t * v1 = (int32_t *)(result + 5); // 0x169f79
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x169f91 - 0x169f92
int64_t function_169f91(void) {
    // 0x169f91
    int64_t result; // 0x169f91
    return result;
}

// Address range: 0x169f98 - 0x169f99
int64_t function_169f98(int64_t a1) {
    // 0x169f98
    int64_t result; // 0x169f98
    return result;
}

// Address range: 0x169fe0 - 0x169fe4
int64_t function_169fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 14); // 0x169fe0
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x169fe0
    return result;
}

// Address range: 0x169fe5 - 0x169fef
int64_t function_169fe5(int64_t a1, int64_t a2) {
    // 0x169fe5
    int64_t result; // 0x169fe5
    *(int32_t *)a2 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x16a028 - 0x16a032
int64_t function_16a028(int64_t a1) {
    // 0x16a028
    int64_t result; // 0x16a028
    char * v1 = (char *)(result + 0x7ca31b65); // 0x16a029
    *v1 = *v1 & (char)result;
    return result;
}

// Address range: 0x16a0b9 - 0x16a0bc
int64_t function_16a0b9(int64_t a1) {
    // 0x16a0b9
    int64_t result; // 0x16a0b9
    return result;
}

// Address range: 0x16a0c3 - 0x16a0cc
int64_t function_16a0c3(int64_t a1) {
    // 0x16a0c3
    int64_t v1; // 0x16a0c3
    bool v2; // 0x16a0c3
    return (v1 & 0xffff00ff | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512) + 0x897166ff & 0xffffffff;
}

// Address range: 0x16a0e0 - 0x16a0e1
int64_t function_16a0e0(int64_t a1) {
    // 0x16a0e0
    int64_t result; // 0x16a0e0
    return result;
}

// Address range: 0x16a137 - 0x16a143
int64_t function_16a137(int64_t a1, int64_t a2) {
    // 0x16a137
    int64_t v1; // 0x16a137
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x16a137
    int64_t v3 = v2 ? -4 : 4; // 0x16a137
    char * v4 = (char *)(v1 + 0x64009900); // 0x16a138
    *v4 = *v4 + (char)(v1 / 256);
    return function_ffffffffa406abab(v3 + a1, v3 + a2);
}

// Address range: 0x16a186 - 0x16a18b
int64_t function_16a186(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16a186
    int64_t result; // 0x16a186
    return result;
}

// Address range: 0x16a1ab - 0x16a1ac
int64_t function_16a1ab(void) {
    // 0x16a1ab
    int64_t result; // 0x16a1ab
    return result;
}

// Address range: 0x16a1b2 - 0x16a1cb
int64_t function_16a1b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16a1b2
    int64_t v1; // 0x16a1b2
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x16a1b2
    uint32_t v3 = *v2; // 0x16a1b2
    uint32_t v4 = v3 + (int32_t)a4; // 0x16a1b2
    *v2 = v4;
    return 2 * v1 & 0xfffffffe | (int64_t)(v4 < v3);
}

// Address range: 0x16a1df - 0x16a1e8
int64_t function_16a1df(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16a1df
    int64_t v1; // 0x16a1df
    int32_t * v2 = (int32_t *)(4 * a3 - 0x7acd32f2 + v1); // 0x16a1df
    *v2 = *v2 + (int32_t)v1;
    return function_16a249(a1, a2, a3, v1, v1, v1);
}

// Address range: 0x16a217 - 0x16a221
int64_t function_16a217(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 127); // 0x16a21b
    int64_t result; // 0x16a217
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x16a249 - 0x16a256
int64_t function_16a249(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char v1 = *(char *)-0x54d31eb0; // 0x16a249
    int64_t result; // 0x16a249
    *(char *)-0x54d31eb0 = v1 + (char)((uint64_t)result / 256);
    char * v2 = (char *)(a2 + 84); // 0x16a253
    *v2 = *v2 | (char)a4;
    return result;
}

// Address range: 0x16a257 - 0x16a26f
int64_t function_16a257(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16a257
    int64_t v1; // 0x16a257
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 + 0x1f8900b1); // 0x16a25d
    *v3 = *v3 | (int32_t)a3;
    bool v4; // 0x16a257
    return ((v2 - (v4 ? 65 : 64) & 139) + 152 & 187 | v2 & 0xffffff00) + 0x663a00b3 & 0xffffffff;
}

// Address range: 0x16a28f - 0x16a290
int64_t function_16a28f(void) {
    // 0x16a28f
    int64_t result; // 0x16a28f
    return result;
}

// Address range: 0x16a29c - 0x16a29f
int64_t function_16a29c(int64_t a1, int64_t a2) {
    // 0x16a29c
    int64_t result; // 0x16a29c
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x16a4aa - 0x16a4ef
int64_t function_16a4aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16a4aa
    float80_t v1; // 0x16a4aa
    *(int32_t *)a1 = (int32_t)v1;
    unknown_fffffffff8c798c0();
    int64_t v2; // 0x16a4aa
    int64_t v3 = a3 & -256 | (int64_t)(*(char *)&v2 ^ (char)a3); // 0x16a4bf
    int32_t * v4 = (int32_t *)(a4 + 0x3a049600); // 0x16a4c1
    *v4 = *v4 | (int32_t)v3;
    unknown_250915cd();
    int64_t v5; // 0x16a4aa
    __asm_out((int16_t)v3, *(int32_t *)&v5);
    unknown_e8aa4de();
    bool v6; // 0x16a4aa
    return (int64_t)*(int32_t *)((v6 ? -4 : 4) + a2);
}

// Address range: 0x16a4f3 - 0x16a509
int64_t function_16a4f3(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 103); // 0x16a4f3
    *v1 = *v1 ^ 0x1e801e8;
    int32_t * v2 = (int32_t *)(a3 - 42); // 0x16a4ff
    int64_t v3; // 0x16a4f3
    *v2 = *v2 + (int32_t)v3;
    return function_ffffffff81d1a5bc();
}

// Address range: 0x16a510 - 0x16a54b
int64_t function_16a510(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16a510
    int64_t v1; // 0x16a510
    uint64_t v2 = v1;
    char v3 = *(char *)(a1 - 0x320dfeff + v1); // 0x16a510
    int64_t v4 = a4 & -256 | (int64_t)(v3 + (char)a4); // 0x16a510
    *(int32_t *)a1 = (int32_t)v1;
    int64_t v5; // 0x16a510
    int64_t v6 = v5;
    *(char *)v6 = *(char *)&v5 + (char)v6;
    char * v7 = (char *)v4; // 0x16a51a
    *v7 = *v7 + (char)v2;
    int64_t v8; // 0x16a510
    *(char *)a5 = *(char *)&v8 + (char)v5;
    int64_t v9 = v4 - 1; // 0x16a52c
    uint32_t v10 = (int32_t)v9 % 32; // 0x16a52e
    if (v10 != 0) {
        int32_t * v11 = (int32_t *)v9; // 0x16a52e
        *v11 = *v11 >> v10;
    }
    bool v12; // 0x16a510
    int64_t v13 = v12 ? -4 : 4; // 0x16a517
    int64_t v14 = v13 + a1; // 0x16a517
    int64_t v15 = v13 + a2; // 0x16a517
    int64_t v16 = unknown_322f6b36(v14, v15, 0xb9842e4e, v9); // 0x16a530
    *(char *)v14 = *(char *)v15;
    int64_t v17 = v12 ? -1 : 1; // 0x16a535
    int64_t v18 = v14 + v17; // 0x16a535
    unsigned char v19 = *(char *)0x4bb03e40; // 0x16a539
    unsigned char v20 = v19 + (char)(v2 / 256); // 0x16a539
    *(char *)0x4bb03e40 = v20;
    int32_t * v21 = (int32_t *)(8 * v1 + 0x51ad9521 + v16); // 0x16a53f
    *v21 = *v21 + (int32_t)v18 + (int32_t)(v20 < v19);
    *(int32_t *)(v2 & 0xffffffff) = (int32_t)v2 + (int32_t)v1;
    return __asm_iretd(v18, v15 + v17);
}

// Address range: 0x16a54b - 0x16a55c
int64_t function_16a54b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x3f088800); // 0x16a553
    int64_t v2; // 0x16a54b
    *v1 = *v1 + (int32_t)v2;
    *(char *)a1 = (char)a4;
    bool v3; // 0x16a54b
    return function_16a56a((v3 ? -1 : 1) + a1);
}

// Address range: 0x16a562 - 0x16a565
int64_t function_16a562(void) {
    // 0x16a562
    int64_t result; // 0x16a562
    return result;
}

// Address range: 0x16a56a - 0x16a577
int64_t function_16a56a(int64_t a1) {
    // 0x16a56a
    int64_t v1; // 0x16a56a
    uint64_t v2 = (v1 & 0xffffffff) * (a1 & 0xffffffff); // 0x16a56b
    __asm_out_133(50, (char)v2);
    return (v2 - (v2 > 0xffffffff ? 203 : 202)) % 256 | v2 & 0xffffff00;
}

// Address range: 0x16a5d4 - 0x16a5e6
int64_t function_16a5d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16a5d4
    int64_t result; // 0x16a5d4
    *(int32_t *)-0x17752dc7e655d828 = (int32_t)result;
    int32_t * v1 = (int32_t *)(result - 111); // 0x16a5df
    *v1 = (int32_t)result + (int32_t)a3 + *v1;
    return result;
}

// Address range: 0x16a5e6 - 0x16a603
int64_t function_16a5e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16a5e6
    int64_t v1; // 0x16a5e6
    *(char *)a1 = (char)v1;
    bool v2; // 0x16a5e6
    unknown_ffffffffdd746bed((v2 ? -1 : 1) + a1);
    char * v3 = (char *)((a4 & -256 | 191) - 0x182f7a4a); // 0x16a5ee
    *v3 = *v3 | -65;
    unknown_ffffffffcc05c9fa();
    return unknown_54710303();
}

// Address range: 0x16a628 - 0x16a62d
int64_t function_16a628(void) {
    // 0x16a628
    return function_7654a815();
}

// Address range: 0x3152bb - 0x3152dd
int64_t function_3152bb(int64_t a1) {
    // 0x3152bb
    int64_t v1; // 0x3152bb
    *(int32_t *)0xa08acd0 = *(int32_t *)0xa08acd0 + (int32_t)v1;
    if ((int32_t)v1 != 0x559694b4) {
        function_315267();
    }
    // 0x3152c9
    unknown_7a3772cf();
    bool v2; // 0x3152bb
    return unknown_ffffffffa83bf2de((v2 ? -1 : 1) + a1);
}

// Address range: 0x31531d - 0x315320
int64_t function_31531d(void) {
    // 0x31531d
    int64_t result; // 0x31531d
    return result;
}

// Address range: 0x315320 - 0x315327
int64_t function_315320(int64_t a1, int64_t a2, int64_t a3) {
    // 0x315320
    int64_t v1; // 0x315320
    *(char *)a3 = (char)(v1 | (uint64_t)v1 / 256);
    return function_219550f();
}

// Address range: 0x315340 - 0x315409
int64_t function_315340(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x315340
    if (a4 != 1) {
        // 0x3153fe
        return __asm_int3();
    }
    bool v1; // 0x315340
    if (!v1) {
        // 0x31537d
        int64_t result; // 0x315340
        return result;
    }
    // 0x315385
    return a1 & 0xffffffff;
}

// Address range: 0x31540a - 0x315434
int64_t function_31540a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x31540a
    int64_t v1; // 0x31540a
    uint64_t v2 = v1 + 0x6cffe18; // 0x31540a
    char * v3 = (char *)(a1 - 0x1745ff60); // 0x315410
    *v3 = *v3 + (char)(v2 / 256);
    int32_t * v4 = (int32_t *)(a4 + 0x162b88ff); // 0x315416
    *v4 = *v4 + (int32_t)v1;
    uint32_t v5 = *(int32_t *)(a1 - 0x17069db8 + a3); // 0x31541c
    int64_t v6 = (v2 & 0xffffffff | 0x100000000 * a3) / (int64_t)v5 + a1; // 0x315423
    int64_t result = v6 & 0xffffffff; // 0x315423
    __asm_out_133(-58, (char)v6);
    int32_t * v7 = (int32_t *)(result + 0x1e8d505); // 0x315427
    *v7 = *v7 & (int32_t)v6;
    return result;
}

// Address range: 0x31546f - 0x315472
int64_t function_31546f(int64_t a1) {
    // 0x31546f
    int64_t result; // 0x31546f
    return result;
}

// Address range: 0x315474 - 0x315479
int64_t function_315474(void) {
    // 0x315474
    return function_ffffffffe833f208();
}

// Address range: 0x31547f - 0x315480
int64_t function_31547f(void) {
    // 0x31547f
    int64_t result; // 0x31547f
    return result;
}

// Address range: 0x3154a4 - 0x3154a5
int64_t function_3154a4(void) {
    // 0x3154a4
    int64_t result; // 0x3154a4
    return result;
}

// Address range: 0x3154af - 0x3154bf
int64_t function_3154af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3154af
    return unknown_ffffffffdc4b0dbd();
}

// Address range: 0x3154bf - 0x31550e
int64_t function_3154bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3154bf
    int64_t v1; // 0x3154bf
    int64_t v2 = v1;
    int64_t v3 = a2;
    *(char *)v2 = (char)v2 - (char)a3;
    if (0x100000000000000 * v2 >> 56 < a3) {
        function_3154a4();
    }
    unsigned char v4 = (char)a4 % 32; // 0x3154c4
    if (v4 != 0) {
        *(char *)v3 = *(char *)&v3 << v4;
    }
    unknown_1184cfcc();
    float80_t v5; // 0x3154bf
    *(int64_t *)(v1 + 51) = (int64_t)v5;
    uint32_t v6 = *(int32_t *)(4 * v1 + a3) | (int32_t)a4; // 0x3154ce
    bool v7; // 0x3154bf
    int64_t v8 = __asm_iretd((v7 ? -4 : 4) + a1, v3); // 0x3154e9
    if ((*(int32_t *)((int64_t)v6 + 101) & v6 - 1) >= 2) {
        v8 = function_31547f();
    }
    int16_t v9 = a3; // 0x3154eb
    __asm_out(v9, (int32_t)v8);
    int64_t result = unknown_3a422cf9(); // 0x3154f3
    char v10 = result; // 0x3154f8
    __asm_out_134(v9, v10);
    __asm_out_133(39, v10);
    return result;
}

// Address range: 0x31553a - 0x31553b
int64_t function_31553a(void) {
    // 0x31553a
    int64_t result; // 0x31553a
    return result;
}

// Address range: 0x31553f - 0x315543
int64_t function_31553f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x31553f
    int64_t result; // 0x31553f
    return result;
}

// Address range: 0x315557 - 0x31555a
int64_t function_315557(void) {
    // 0x315557
    int64_t v1; // 0x315557
    return function_31555d(v1, v1, v1, v1);
}

// Address range: 0x31555b - 0x31555d
int64_t function_31555b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31555b
    int64_t result; // 0x31555b
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x31555d - 0x31556a
int64_t function_31555d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31555d
    __asm_int1((int32_t)a1);
    bool v1; // 0x31555d
    if (a4 != 1 == v1) {
        function_31553a();
    }
    // 0x315560
    return function_2a6bded1();
}

// Address range: 0x3155a3 - 0x3155a9
int64_t function_3155a3(void) {
    // 0x3155a3
    int64_t result; // 0x3155a3
    return result;
}

// Address range: 0x3155d9 - 0x3155dc
int64_t function_3155d9(int64_t a1) {
    // 0x3155d9
    int64_t result; // 0x3155d9
    return result;
}

// Address range: 0x31561b - 0x31561d
int64_t function_31561b(void) {
    // 0x31561b
    int64_t v1; // 0x31561b
    return function_315645(v1, v1, v1, v1, (int64_t)&g3);
}

// Address range: 0x315638 - 0x315640
int64_t function_315638(int64_t a1, int64_t a2, int64_t a3) {
    // 0x315638
    return unknown_66dfd740(a1, a2, a3);
}

// Address range: 0x315645 - 0x31566c
int64_t function_315645(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_633564b(); // 0x315645
    unsigned char v2 = __readfsbyte(a3 - 0x17f66f09); // 0x31564a
    int32_t * v3 = (int32_t *)(a4 + 0x2196602e); // 0x315651
    int64_t v4; // 0x315645
    *v3 = *v3 + (int32_t)v4;
    uint32_t v5 = *(int32_t *)-0x3bccc150; // 0x315658
    uint32_t v6 = (int32_t)(256 * (int64_t)v2 | v1 & 0xffff00ff); // 0x315658
    int32_t v7 = v5 + v6; // 0x315658
    unsigned char v8 = llvm_ctpop_i8((char)v7); // 0x315658
    *(int32_t *)-0x3bccc150 = v7;
    char v9 = *(char *)(a3 + 0x2db501e8); // 0x315664
    return 256 * (int64_t)((64 * (char)(v7 == 0) | (char)(v7 < v5) | 128 * (char)(v7 < 0) | 16 * (char)(v6 % 16 + v5 % 16 > 15) | 4 * (char)(v8 % 2 == 0) | 2) - v9) | v1 & -0xff01;
}

// Address range: 0x31569f - 0x315706
int64_t function_31569f(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5) {
    // 0x31569f
    int64_t v1; // 0x31569f
    char * v2 = (char *)(v1 + 0x623a106f); // 0x3156a1
    unsigned char v3 = *v2; // 0x3156a1
    bool v4; // 0x31569f
    char v5 = v4; // 0x3156a1
    unsigned char v6 = v5 + (char)v1; // 0x3156a1
    char v7 = v3 - v6; // 0x3156a1
    *v2 = v7;
    int64_t v8 = v4 ? v6 != -1 | v3 < v7 - v5 : v3 < v6; // 0x3156a7
    int64_t v9 = v8 & 0xffffffff; // 0x3156a7
    int32_t * v10 = (int32_t *)(v9 - 32); // 0x3156a9
    int32_t v11 = v1; // 0x3156a9
    *v10 = *v10 + v11;
    *(int32_t *)a1 = (int32_t)v8;
    int64_t v12 = v4 ? -4 : 4; // 0x3156ac
    int64_t v13 = v12 + a1; // 0x3156ac
    char * v14 = (char *)(a3 + 0x1e8aea5); // 0x3156ad
    unsigned char v15 = *v14; // 0x3156ad
    unsigned char v16 = v15 + (char)a3; // 0x3156ad
    *v14 = v16;
    __asm_out_133(-44, (char)v8);
    char * v17 = (char *)v9; // 0x3156b5
    unsigned char v18 = (char)a4; // 0x3156b5
    *v17 = *v17 + v18 + (char)(v16 < v15);
    uint64_t v19 = unknown_ffffffffe10e84c2(); // 0x3156bc
    int32_t * v20 = (int32_t *)v19; // 0x3156c2
    *v20 = *v20 ^ (int32_t)v19;
    char * v21 = (char *)v19; // 0x3156c4
    char v22 = *v21 + 70; // 0x3156c4
    *v21 = v22;
    unsigned char v23 = v22 + (char)v19; // 0x3156c8
    int64_t v24 = v19 & -256; // 0x3156c8
    *(int32_t *)v13 = (int32_t)(v24 | (int64_t)v23);
    int64_t v25 = v13 + v12; // 0x3156ca
    char v26 = a4 / 256; // 0x3156cb
    int64_t v27 = v24 | (int64_t)(v23 + v26); // 0x3156cb
    int32_t * v28 = (int32_t *)(v1 - 0x6630f900); // 0x3156cd
    *v28 = *v28 + v11;
    char * v29 = (char *)(a4 - 0x73bcccff + 8 * v25); // 0x3156d3
    *v29 = *v29 + (char)(v19 / 256);
    char * v30 = (char *)(2 * a4 - 0x180cfe18 + v27); // 0x3156da
    *v30 = v26;
    *(int32_t *)v25 = (int32_t)v27;
    char * v31 = (char *)(v1 + 119); // 0x3156e2
    *v31 = *v31 + (char)(a3 / 256);
    int64_t v32 = unknown_ffffffffb4cae9f2(0x15f22ad5); // 0x3156ec
    int64_t v33; // 0x31569f
    *(int32_t *)v33 = *(int32_t *)&v33 | (int32_t)v1;
    unsigned char v34 = v18 % 32; // 0x3156f9
    if (v34 != 0) {
        char * v35 = (char *)((256 * (int64_t)*v30 | a4 & -0xff01) - 0x60c1fe18); // 0x3156f9
        *v35 = *v35 >> v34;
    }
    return v32 & -256 | (int64_t)__readgsbyte(0xb38d389c);
}

// Address range: 0x31572a - 0x31572b
int64_t function_31572a(int64_t a1) {
    // 0x31572a
    int64_t result; // 0x31572a
    return result;
}

// Address range: 0x315730 - 0x315731
int64_t function_315730(int64_t a1) {
    // 0x315730
    int64_t result; // 0x315730
    return result;
}

// Address range: 0x315738 - 0x315742
int64_t function_315738(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 3); // 0x315738
    int64_t result; // 0x315738
    *v1 = *v1 + (int32_t)result;
    int64_t v2; // 0x315738
    *(char *)a1 = *(char *)&v2 | (char)result;
    return result;
}

// Address range: 0x315754 - 0x315756
int64_t function_315754(void) {
    // 0x315754
    int64_t result; // 0x315754
    return result;
}

// Address range: 0x315761 - 0x31576c
int64_t function_315761(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x315761
    int64_t v1; // 0x315761
    int64_t v2 = v1;
    unsigned char v3 = (char)a4 % 32; // 0x315761
    int64_t v4; // 0x315761
    if (v3 != 0) {
        v4 = v2 & -256 | (int64_t)((char)v2 >> v3);
    }
    uint64_t v5 = v4;
    unsigned char v6 = *(char *)(v5 + 8); // 0x315765
    return v5 % 256 * (int64_t)v6 | v5 & -0x10000;
}

// Address range: 0x315780 - 0x315783
int64_t function_315780(int64_t a1) {
    // 0x315780
    int64_t result; // 0x315780
    return result;
}

// Address range: 0x315824 - 0x315827
int64_t function_315824(void) {
    // 0x315824
    int64_t result; // 0x315824
    return result;
}

// Address range: 0x315827 - 0x315832
int64_t function_315827(int64_t a1, int64_t a2) {
    // 0x315827
    int64_t result; // 0x315827
    return result;
}

// Address range: 0x315834 - 0x315837
int64_t function_315834(int64_t a1) {
    // 0x315834
    int64_t result; // 0x315834
    return result;
}

// Address range: 0x315839 - 0x31583f
int64_t function_315839(int64_t a1) {
    // 0x315839
    int64_t result; // 0x315839
    return result;
}

// Address range: 0x315861 - 0x315865
int64_t function_315861(void) {
    // 0x315861
    int64_t result; // 0x315861
    return result;
}

// Address range: 0x315874 - 0x31587f
int64_t function_315874(int64_t a1, int64_t a2) {
    // 0x315874
    int64_t v1; // 0x315874
    return v1 & 0xffffffff;
}

// Address range: 0x3158ff - 0x315900
int64_t function_3158ff(void) {
    // 0x3158ff
    int64_t result; // 0x3158ff
    return result;
}

// Address range: 0x31595e - 0x31595f
int64_t function_31595e(void) {
    // 0x31595e
    int64_t result; // 0x31595e
    return result;
}

// Address range: 0x315974 - 0x315977
int64_t function_315974(int64_t a1, int64_t a2, int64_t a3) {
    // 0x315974
    int64_t v1; // 0x315974
    __asm_outsb((int16_t)a3, (char)v1);
    return function_3158ff();
}

// Address range: 0x315985 - 0x31598c
int64_t function_315985(void) {
    // 0x315985
    return function_42334268();
}

// Address range: 0x3159da - 0x3159e0
int64_t function_3159da(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3159da
    int64_t result; // 0x3159da
    *(int64_t *)(4 * a2 + 37 + result) = a3;
    return result;
}

// Address range: 0x3159f0 - 0x315a0f
int64_t function_3159f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3159f0
    unknown_51b081fa();
    int64_t v1; // 0x3159f0
    int32_t * v2 = (int32_t *)(8 * a1 - 0x17e09285 + v1); // 0x3159fd
    *v2 = *v2 + (int32_t)a2;
    int32_t * v3 = (int32_t *)(v1 - 93); // 0x315a04
    *v3 = *v3 + (2 * (int32_t)v1 >> 31);
    return a4 & 0xffffffff;
}

// Address range: 0x315a92 - 0x315ab7
int64_t function_315a92(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x315a92
    int64_t v1; // 0x315a92
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t v3 = v2 & a1;
    int32_t v4 = *(int32_t *)0x3cef3bb8; // 0x315a97
    *(int32_t *)(int64_t)((int32_t)a1 - v4) = (int32_t)v3;
    int64_t v5 = v3 & 0xffffff97 | 104; // 0x315a9e
    int32_t * v6 = (int32_t *)(a4 - 125); // 0x315aa2
    *v6 = *v6 + (int32_t)a4;
    return (int64_t)(*(int32_t *)v5 + (int32_t)v5);
}
