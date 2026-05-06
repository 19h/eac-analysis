/*
 * Targeted RetDec C for native executable gap queue batch 342.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x16e8aa-0x16eaaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16eaaa-0x16ecaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16ecaa-0x16eeaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16f0aa-0x16f2aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x3eef9e-0x3ef19e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ef19e-0x3ef39e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ef39e-0x3ef59e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ef59e-0x3ef79e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_16e893();
int64_t function_16e89c();
int64_t function_16e8a2();
int64_t function_16e8aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16e8da(void);
int64_t function_16e8f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16e938(int64_t a1, int64_t a2);
int64_t function_16e952(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_16e966(void);
int64_t function_16e993(int64_t a1);
int64_t function_16e9b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16e9fc(int64_t a1, int64_t a2);
int64_t function_16ea64(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16eb11(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_16ec9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16ee71(void);
int64_t function_16f0aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_16f12e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3eef9e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3eeffb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ef006(void);
int64_t function_3ef041(void);
int64_t function_3ef06c(int64_t a1);
int64_t function_3ef089(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ef0b6(void);
int64_t function_3ef0c0(void);
int64_t function_3ef107(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ef129(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ef146(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ef183(int64_t a1, int64_t a2);
int64_t function_3ef1c4(int64_t a1);
int64_t function_3ef22d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ef263(void);
int64_t function_3ef279(int64_t a1);
int64_t function_3ef299(void);
int64_t function_3ef2a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ef311(int64_t a1);
int64_t function_3ef326(void);
int64_t function_3ef342(int64_t a1);
int64_t function_3ef345(void);
int64_t function_3ef38a(void);
int64_t function_3ef390(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ef427(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3ef430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3ef643(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3ef6c6(int64_t a1);
int64_t function_3ef6db(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ef754(void);
int64_t function_70019f7f();
int64_t function_cf3c7();
int64_t function_ffffffff85b14464();
int64_t function_ffffffffc9767096();
int64_t function_ffffffffce7c72f1();
int64_t unknown_1c7c8a9d();
int64_t unknown_3a9149bf();
int64_t unknown_3d18d26b();
int64_t unknown_5127eab1();
int64_t unknown_ffffffffbe1d0a92();
int64_t unknown_ffffffffc073d8dd();

// Address range: 0x16e8aa - 0x16e8c5
int64_t function_16e8aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16e8aa
    int64_t v1; // 0x16e8aa
    if (a4 != 1) {
        v1 = function_16e8a2();
    }
    int64_t v2 = v1; // 0x16e8b1
    int64_t v3; // 0x16e8aa
    if (llvm_ctpop_i8((char)v3 - 1) % 2 == 0) {
        v2 = function_16e89c();
    }
    int64_t v4 = v2; // 0x16e8b4
    *(int32_t *)v4 = (int32_t)v4 + (int32_t)a2;
    int32_t * v5 = (int32_t *)(a3 + 0x1e89ec0); // 0x16e8bc
    *v5 = *v5 - (int32_t)v3;
    return function_16e893();
}

// Address range: 0x16e8da - 0x16e8dd
int64_t function_16e8da(void) {
    // 0x16e8da
    int64_t v1; // 0x16e8da
    return function_16e938(v1, v1);
}

// Address range: 0x16e8f5 - 0x16e936
int64_t function_16e8f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16e8f5
    int64_t v1; // 0x16e8f5
    uint64_t v2 = v1;
    int64_t v3 = a2;
    char v4 = *(char *)(v1 - 24); // 0x16e8f5
    int32_t v5 = (int32_t)(v2 & 0xffffff00 | (int64_t)((char)v2 - v4)) + (int32_t)a2; // 0x16e8f8
    *(int32_t *)a2 = v5;
    *(char *)(v1 + a4) = (char)(v2 / 256);
    int32_t v6; // 0x16e8f5
    if (v5 < 0) {
        function_16e952(a1, v3, a3, a4);
        v6 = v3;
    } else {
        // 0x16e8f5
        v6 = *(int32_t *)&v3;
    }
    // 0x16e8ff
    return v6 == (int32_t)v1 ? 0xff7a03e9 : 0xffbd01e8;
}

// Address range: 0x16e938 - 0x16e94e
int64_t function_16e938(int64_t a1, int64_t a2) {
    // 0x16e938
    int64_t v1; // 0x16e938
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x16e93d
    int64_t v3 = -1 * v2; // 0x16e93d
    float80_t v4; // 0x16e938
    *(float32_t *)0x39052713 = (float32_t)v4;
    int32_t v5 = *(int32_t *)0x6601e8b4; // 0x16e94b
    *(int32_t *)0x6601e8b4 = v5 - (int32_t)v3 + (int32_t)(v3 != -0x100000000 * v2 >> 32);
    return v1 + 0xf9f901e8 & 0xffffffff;
}

// Address range: 0x16e952 - 0x16e962
int64_t function_16e952(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x16e952
    int64_t v1; // 0x16e952
    int64_t v2 = v1;
    char * v3 = (char *)(v2 + 0x2513a00); // 0x16e954
    *v3 = *v3 + (char)v2;
    int32_t * v4 = (int32_t *)(v1 - 0x4ff8e00); // 0x16e95c
    *v4 = *v4 + (int32_t)v1;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x16e966 - 0x16e969
int64_t function_16e966(void) {
    // 0x16e966
    int64_t result; // 0x16e966
    return result;
}

// Address range: 0x16e993 - 0x16e997
int64_t function_16e993(int64_t a1) {
    // 0x16e993
    int64_t result; // 0x16e993
    return result;
}

// Address range: 0x16e9b0 - 0x16e9fb
int64_t function_16e9b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16e9b0
    int64_t v1; // 0x16e9b0
    bool v2; // 0x16e9b0
    if (v2 || v2) {
        int64_t result = v1 & -256 | 216; // 0x16e9b0
        int32_t * v3 = (int32_t *)result; // 0x16e9f6
        *v3 = *v3 + (int32_t)v1;
        __asm_outsb((int16_t)a3, *(char *)0x1bd71433);
        return result;
    }
    int64_t v4 = unknown_3a9149bf(); // 0x16e9b9
    int32_t * v5 = (int32_t *)(a1 + 0x5a99d216); // 0x16e9be
    *v5 = *v5 ^ (int32_t)v4;
    *(int32_t *)0x1bd713e0 = *(int32_t *)0x1bd713e0 + (int32_t)a1;
    int64_t v6 = v2 ? -1 : 1; // 0x16e9d1
    int64_t v7 = v6 + a1; // 0x16e9d1
    int64_t v8 = a3 & -0xff01 | (int64_t)"zydis_decoder_tree_root"; // 0x16e9d2
    char * v9 = (char *)(v8 - 76); // 0x16e9d4
    *v9 = *v9 + (char)v1;
    int64_t v10 = unknown_ffffffffc073d8dd(v7, v6 + 0x1bd71433, v8, a4 - 1); // 0x16e9d7
    *(char *)v7 = (char)v10;
    *(int32_t *)(v7 + v6) = (int32_t)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x16e9fc - 0x16ea05
int64_t function_16e9fc(int64_t a1, int64_t a2) {
    // 0x16e9fc
    int64_t v1; // 0x16e9fc
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x16e9fc
    int64_t v3 = v2 ? -4 : 4; // 0x16e9fe
    return __asm_wait(v3 + a1, v3 + a2);
}

// Address range: 0x16ea64 - 0x16eab2
int64_t function_16ea64(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16ea64
    int64_t v1; // 0x16ea64
    uint64_t v2 = v1;
    int64_t result = unknown_3d18d26b(); // 0x16ea64
    int32_t * v3 = (int32_t *)(a3 + 119); // 0x16ea6a
    int32_t v4 = *v3; // 0x16ea6a
    int32_t v5 = a4; // 0x16ea6a
    int32_t v6 = v4 + v5; // 0x16ea6a
    *v3 = v6;
    if (v6 < 0 != ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0x16ea6f
        return result;
    }
    int32_t * v7 = (int32_t *)result; // 0x16ea79
    *v7 = *v7 + 3;
    char v8 = *(char *)-0x17770ce4; // 0x16ea7c
    int32_t * v9 = (int32_t *)(a3 + 36); // 0x16ea82
    *v9 = *v9 + (int32_t)a2;
    float80_t v10; // 0x16ea64
    *(float64_t *)(result + 0x100d3be) = (float64_t)v10;
    uint64_t v11 = unknown_ffffffffbe1d0a92(); // 0x16ea8c
    char * v12 = (char *)((256 * (int64_t)(v8 | (char)(v2 / 256)) | v2 & -0xff01) + 0x28fb3af3); // 0x16ea91
    *v12 = *v12 & (char)(v11 / 256);
    unknown_1c7c8a9d();
    __asm_in(3);
    return unknown_5127eab1();
}

// Address range: 0x16eb11 - 0x16ec9a
int64_t function_16eb11(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a4 + 16); // 0x16eb11
    int64_t v2; // 0x16eb11
    *v1 = *v1 + (int32_t)v2;
    char * v3 = (char *)(2 * v2 & 0xfffffffe); // 0x16eb16
    *v3 = *v3 + 72;
    int64_t v4; // bp-48, 0x16eb11
    int64_t v5 = (int64_t)&v4; // 0x16ec25
    *(int64_t *)(v5 - 16) = a1;
    v4 = v5 + 16;
    return function_cf3c7(a1, a2, a3, a4);
}

// Address range: 0x16ec9a - 0x16ee6f
int64_t function_16ec9a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16ec9a
    return function_cf3c7(a1, a2, a3, a4);
}

// Address range: 0x16ee71 - 0x16ee74
int64_t function_16ee71(void) {
    // 0x16ee71
    int64_t result; // 0x16ee71
    return result;
}

// Address range: 0x16f0aa - 0x16f12e
int64_t function_16f0aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x16f0aa
    int64_t v1; // 0x16f0aa
    int64_t v2 = (int64_t)&v1; // 0x16f0b0
    *(int64_t *)(v2 - 8) = v2 + 8;
    v1 = v2 + 16;
    return function_cf3c7(a1, a2, a3, a4);
}

// Address range: 0x16f12e - 0x16f294
int64_t function_16f12e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x16f12e
    int64_t v1; // bp-32, 0x16f12e
    int64_t v2 = (int64_t)&v1; // 0x16f180
    int64_t v3 = v2 - 8; // 0x16f1a2
    int64_t * v4 = (int64_t *)v3; // 0x16f1a2
    *v4 = a3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x16f1aa
    *v5 = 0x74c4badc;
    *v4 = v3;
    int64_t v6; // 0x16f12e
    v1 = -0x12dc00b9 * (0x100000000 * v6 >> 32) & 0xffffffff;
    int64_t v7 = *(int64_t *)(v2 + 32); // 0x16f1d8
    *v4 = v7;
    *v5 = v7;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x16f1f3
    *v8 = v3;
    int64_t * v9 = (int64_t *)(v2 + 8); // 0x16f1fc
    int64_t v10 = *v9; // 0x16f1fc
    *v5 = v10;
    *v8 = v3;
    int64_t * v11 = (int64_t *)(v2 - 40); // 0x16f229
    *v11 = v7;
    *v4 = *v8;
    *v8 = 0x420722d3;
    int64_t * v12 = (int64_t *)(v2 - 32); // 0x16f238
    *v11 = v10;
    *v12 = v10;
    *v9 = *v8;
    *v12 = *v5;
    *v5 = a6;
    *v5 = v2 ^ a6 ^ *v5;
    return function_cf3c7(a1, v10, *v4, 0x74c4badc);
}

// Address range: 0x3eef9e - 0x3eefb4
int64_t function_3eef9e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3eef9e
    int64_t result; // 0x3eef9e
    __asm_out(97, (int32_t)result);
    return result;
}

// Address range: 0x3eeffb - 0x3eeffd
int64_t function_3eeffb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3eeffb
    int64_t result; // 0x3eeffb
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3ef006 - 0x3ef00b
int64_t function_3ef006(void) {
    // 0x3ef006
    return function_70019f7f();
}

// Address range: 0x3ef041 - 0x3ef042
int64_t function_3ef041(void) {
    // 0x3ef041
    int64_t result; // 0x3ef041
    return result;
}

// Address range: 0x3ef06c - 0x3ef077
int64_t function_3ef06c(int64_t a1) {
    // 0x3ef06c
    int64_t result; // 0x3ef06c
    return result;
}

// Address range: 0x3ef089 - 0x3ef093
int64_t function_3ef089(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ef089
    int64_t v1; // 0x3ef089
    bool v2; // 0x3ef089
    int32_t v3 = 2 * (int32_t)v1 + (int32_t)v2; // 0x3ef089
    *(int32_t *)a1 = v3;
    int64_t result; // 0x3ef089
    if (v3 < 0) {
        result = function_3ef041();
    }
    // 0x3ef08d
    return result;
}

// Address range: 0x3ef0b6 - 0x3ef0b7
int64_t function_3ef0b6(void) {
    // 0x3ef0b6
    int64_t result; // 0x3ef0b6
    return result;
}

// Address range: 0x3ef0c0 - 0x3ef0c7
int64_t function_3ef0c0(void) {
    // 0x3ef0c0
    int64_t v1; // 0x3ef0c0
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x3ef107 - 0x3ef10e
int64_t function_3ef107(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ef107
    return function_ffffffffc9767096();
}

// Address range: 0x3ef129 - 0x3ef145
int64_t function_3ef129(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ef129
    int64_t v1; // 0x3ef129
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v2 = (char)v2 & 60;
    uint32_t v4 = (int32_t)a4 % 32; // 0x3ef13d
    if (v4 != 0) {
        uint32_t v5 = (int32_t)a1; // 0x3ef134
        uint32_t v6 = *(int32_t *)(a2 + 34) + v5; // 0x3ef134
        int32_t * v7 = (int32_t *)((int64_t)(v6 - (int32_t)v2 + (int32_t)(v6 < v5)) + 0x54fe790b); // 0x3ef13d
        uint32_t v8 = *v7; // 0x3ef13d
        *v7 = v8 << v4 | (int32_t)((char)v3 < 64) << v4 - 1 | (int32_t)((int64_t)v8 >> (int64_t)(33 - v4));
    }
    return (v3 + 192) % 256 | v3 & -256;
}

// Address range: 0x3ef146 - 0x3ef157
int64_t function_3ef146(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ef146
    int64_t v1; // 0x3ef146
    return v1 + 0xa2580469 & 0xed88612e | 0x12779ed1;
}

// Address range: 0x3ef183 - 0x3ef18f
int64_t function_3ef183(int64_t a1, int64_t a2) {
    // 0x3ef183
    int64_t v1; // 0x3ef183
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x3ef183
    int64_t v3 = v2 ? -4 : 4; // 0x3ef188
    return function_ffffffffce7c72f1(v3 + a1, v3 + a2);
}

// Address range: 0x3ef1c4 - 0x3ef1c8
int64_t function_3ef1c4(int64_t a1) {
    // 0x3ef1c4
    int64_t result; // 0x3ef1c4
    return result;
}

// Address range: 0x3ef22d - 0x3ef25d
int64_t function_3ef22d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_iretd(); // 0x3ef250
    *(char *)-0x13ffe9b50ad8bcbf = (char)result;
    unsigned char v1 = (char)a4 % 32; // 0x3ef25a
    if (v1 != 0) {
        int64_t v2; // 0x3ef22d
        char * v3 = (char *)(v2 - 87); // 0x3ef25a
        unsigned char v4 = *v3; // 0x3ef25a
        bool v5; // 0x3ef22d
        *v3 = v4 << v1 | (char)v5 << v1 - 1 | (char)((int16_t)v4 >> (int16_t)(9 - v1));
    }
    return result;
}

// Address range: 0x3ef263 - 0x3ef268
int64_t function_3ef263(void) {
    // 0x3ef263
    int64_t v1; // 0x3ef263
    bool v2; // 0x3ef263
    return function_3ef2a7(v1, v1, v1, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x3ef279 - 0x3ef27a
int64_t function_3ef279(int64_t a1) {
    // 0x3ef279
    int64_t result; // 0x3ef279
    return result;
}

// Address range: 0x3ef299 - 0x3ef29c
int64_t function_3ef299(void) {
    // 0x3ef299
    int64_t result; // 0x3ef299
    return result;
}

// Address range: 0x3ef2a7 - 0x3ef2f0
int64_t function_3ef2a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ef2a7
    int64_t v1; // 0x3ef2a7
    int32_t v2 = v1 & v1; // 0x3ef2a7
    *(int32_t *)a3 = v2;
    int64_t result = __asm_int1(); // 0x3ef2a9
    if (v2 != 0) {
        // 0x3ef2ee
        *(char *)a1 = (char)v1;
        return result;
    }
    int64_t result2 = __asm_int1(); // 0x3ef2ac
    int32_t * v3 = (int32_t *)(8 * v1 + 17 + v1); // 0x3ef2b7
    *v3 = *v3 + (int32_t)a2;
    *(int32_t *)0x39be03fb = *(int32_t *)0x39be03fb ^ 0x4e003097;
    *(int32_t *)0x4e003097 = *(int32_t *)0x4e003097 + 0x758fa5f8;
    return result2;
}

// Address range: 0x3ef311 - 0x3ef314
int64_t function_3ef311(int64_t a1) {
    // 0x3ef311
    int64_t result; // 0x3ef311
    return result;
}

// Address range: 0x3ef326 - 0x3ef327
int64_t function_3ef326(void) {
    // 0x3ef326
    int64_t result; // 0x3ef326
    return result;
}

// Address range: 0x3ef342 - 0x3ef345
int64_t function_3ef342(int64_t a1) {
    // 0x3ef342
    int64_t result; // 0x3ef342
    return result;
}

// Address range: 0x3ef345 - 0x3ef347
int64_t function_3ef345(void) {
    // 0x3ef345
    return function_3ef326();
}

// Address range: 0x3ef38a - 0x3ef38b
int64_t function_3ef38a(void) {
    // 0x3ef38a
    int64_t result; // 0x3ef38a
    return result;
}

// Address range: 0x3ef390 - 0x3ef3b7
int64_t function_3ef390(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x2fbbcacd * *(int64_t *)0x58eba7d5 - 1; // 0x3ef39c
    int64_t v2; // 0x3ef390
    int64_t v3 = v2 & -256; // 0x3ef39c
    bool v4; // 0x3ef390
    if (v1 != 0 == v4) {
        v3 = function_3ef38a();
    }
    int64_t v5 = v4 ? -1 : 1; // 0x3ef390
    int64_t v6 = v5 + a2; // 0x3ef390
    int64_t v7 = v3 & -256 | 63; // 0x3ef39e
    char v8 = (char)a1 > 63 ? 51 : 50; // 0x3ef3a1
    *(char *)0x77ac86f5 = *(char *)0x77ac86f5 - v8;
    char * v9 = (char *)v6; // 0x3ef3a8
    *v9 = *v9 + (char)v2;
    int64_t v10 = (int64_t)*(int32_t *)v7; // 0x3ef3af
    return function_3ef430(v5 + a1, v6, a3, v1 - 256 * (v1 + (int64_t)(-124 * v10 != -0x7c00000000 * v10 >> 32)) & 0xff00 | v1 & -0xff01, -67, v7);
}

// Address range: 0x3ef427 - 0x3ef430
int64_t function_3ef427(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3ef427
    int64_t result; // 0x3ef427
    int64_t v1 = result;
    unsigned char v2 = (char)a4; // 0x3ef427
    unsigned char v3 = __readfsbyte(result + 8 * a3) + v2; // 0x3ef427
    int32_t * v4 = (int32_t *)(a4 & -256 | (int64_t)v3); // 0x3ef42b
    *v4 = *v4 + (int32_t)result + (int32_t)(v3 < v2);
    *(int64_t *)v1 = 2 * v1;
    return result;
}

// Address range: 0x3ef430 - 0x3ef531
int64_t function_3ef430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)*(int32_t *)(a3 + 52); // 0x3ef436
    int32_t v2 = *(int32_t *)0x18ca3b1a; // 0x3ef442
    int64_t v3; // 0x3ef430
    int32_t v4 = v2 - (int32_t)v3 + (int32_t)(0x4327ca8d * v1 != 0x4327ca8d00000000 * v1 >> 32); // 0x3ef442
    *(int32_t *)0x18ca3b1a = v4;
    int64_t result = (int64_t)__asm_in_133(60) | 0x6c027600; // 0x3ef44a
    if (v4 == 0) {
        // 0x3ef453
        return result;
    }
    // 0x3ef44f
    bool v5; // 0x3ef430
    int64_t v6 = (v5 ? -1 : 1) + a1 | v3;
    if ((int32_t)v6 < 0 || llvm_ctpop_i8((char)v6) % 2 != 0) {
        // 0x3ef453
        return result;
    }
    // 0x3ef4a6
    return result + 0x6a0b3e52 & 0xffffbfff;
}

// Address range: 0x3ef643 - 0x3ef646
int64_t function_3ef643(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3ef643
    int64_t result; // 0x3ef643
    return result;
}

// Address range: 0x3ef6c6 - 0x3ef6c7
int64_t function_3ef6c6(int64_t a1) {
    // 0x3ef6c6
    int64_t result; // 0x3ef6c6
    return result;
}

// Address range: 0x3ef6db - 0x3ef6f6
int64_t function_3ef6db(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3ef6db
    int64_t v1; // 0x3ef6db
    return v1 & 0x37294d;
}

// Address range: 0x3ef754 - 0x3ef759
int64_t function_3ef754(void) {
    // 0x3ef754
    return function_ffffffff85b14464();
}
