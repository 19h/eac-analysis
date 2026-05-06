/*
 * Targeted RetDec C for native executable gap queue batch 336.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x26ee41-0x26f041 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26f041-0x26f241 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26f241-0x26f441 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26f441-0x26f641 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26f641-0x26f841 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ee99e-0x3eeb9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x3eed9e-0x3eef9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x439c67-0x439e67 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_26ee41(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_26eed9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_26ef3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_26ef6e(void);
int64_t function_26ef70(void);
int64_t function_26ef85(int64_t a1);
int64_t function_26efdb(void);
int64_t function_26f018(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26f053(void);
int64_t function_26f067(void);
int64_t function_26f075(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_26f1bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_26f318(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26f48a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26f641(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_26f81b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3ee976();
int64_t function_3ee97e();
int64_t function_3ee99e(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_3eeb02(void);
int64_t function_3eeb08(void);
int64_t function_3eeb86(void);
int64_t function_3eed9e(int64_t a1, int64_t a2);
int64_t function_3eedd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3eeeed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_439c40();
int64_t function_439c67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_439c6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_439cf2(int64_t a1, uint64_t a2);
int64_t function_439d14(int64_t a1);
int64_t function_439d5b(void);
int64_t function_439d72(void);
int64_t function_439d78(int64_t a1);
int64_t function_439da9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_554f7e27();
int64_t function_c6d58();
int64_t function_ffffffff8614ea73();
int64_t function_ffffffffbc30ae64();
int64_t function_ffffffffdfa7022e();
int64_t unknown_310713aa();
int64_t unknown_3b28d74b();
int64_t unknown_3e32bedf();
int64_t unknown_67d6e7b();
int64_t unknown_728d7ca();
int64_t unknown_866307();
int64_t unknown_ffffffff91ebea47();
int64_t unknown_ffffffffcbfa4c2e();
int64_t unknown_ffffffffe38e007c();

// Address range: 0x26ee41 - 0x26eed8
int64_t function_26ee41(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x26ee41
    int64_t v1; // 0x26ee41
    uint64_t v2 = v1;
    int64_t v3 = unknown_ffffffff91ebea47(); // 0x26ee41
    uint64_t v4 = ((char)v2 > (char)(v2 / 256) ? 157 : 156) + v3; // 0x26ee49
    if (a4 == 0) {
        // 0x26eec7
        unknown_728d7ca(v4 % 256 | v3 & 0xffffff00);
        int64_t result = unknown_866307(); // 0x26eecf
        char * v5 = (char *)result; // 0x26eed4
        unsigned char v6 = *v5; // 0x26eed4
        *v5 = v6 / 128 | 2 * v6;
        return result;
    }
    int64_t v7 = (v4 + a4 / 256) % 256 | v3 & -256; // 0x26ee4f
    int32_t * v8 = (int32_t *)v7; // 0x26ee51
    *v8 = *v8 + (int32_t)a1;
    int32_t * v9 = (int32_t *)(v7 + 0xbc0f2d8); // 0x26ee53
    *v9 = *v9 | (int32_t)a2;
    return v1 & 0xffffffff;
}

// Address range: 0x26eed9 - 0x26eefb
int64_t function_26eed9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x26eed9
    *(char *)0x1e858ccd99ef649 = (char)unknown_3e32bedf();
    *(int32_t *)a1 = -0x2c025959;
    return 0xd3fda7ef;
}

// Address range: 0x26ef3c - 0x26ef54
int64_t function_26ef3c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_3b28d74b(); // 0x26ef3c
    char v2 = __asm_in_134(-45); // 0x26ef4d
    int64_t v3; // 0x26ef3c
    *(int32_t *)a1 = (int32_t)v3;
    return v1 + 0x5900013d & 0xffffff00 | (int64_t)v2;
}

// Address range: 0x26ef6e - 0x26ef6f
int64_t function_26ef6e(void) {
    // 0x26ef6e
    int64_t result; // 0x26ef6e
    return result;
}

// Address range: 0x26ef70 - 0x26ef73
int64_t function_26ef70(void) {
    // 0x26ef70
    int64_t result; // 0x26ef70
    return result;
}

// Address range: 0x26ef85 - 0x26ef87
int64_t function_26ef85(int64_t a1) {
    // 0x26ef85
    int64_t result; // 0x26ef85
    return result;
}

// Address range: 0x26efdb - 0x26efdd
int64_t function_26efdb(void) {
    // 0x26efdb
    return function_26ef6e();
}

// Address range: 0x26f018 - 0x26f044
int64_t function_26f018(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = *(char *)-0x179a3375; // 0x26f018
    *(char *)-0x179a3375 = v1 / 128 | 2 * v1;
    int64_t v2; // 0x26f018
    float80_t v3; // 0x26f018
    *(int32_t *)(v2 - 0x46bef194) = (int32_t)v3;
    unknown_ffffffffcbfa4c2e();
    int32_t * v4 = (int32_t *)(a4 - 24); // 0x26f02f
    *v4 = *v4 + 1;
    int32_t * v5 = (int32_t *)(v2 + 0x1e84c4e); // 0x26f037
    *v5 = *v5 + (int32_t)a5;
    return __asm_int1();
}

// Address range: 0x26f053 - 0x26f054
int64_t function_26f053(void) {
    // 0x26f053
    int64_t result; // 0x26f053
    return result;
}

// Address range: 0x26f067 - 0x26f069
int64_t function_26f067(void) {
    // 0x26f067
    return function_26f053();
}

// Address range: 0x26f075 - 0x26f1bd
int64_t function_26f075(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_67d6e7b(); // 0x26f075
    char * v2 = (char *)(v1 + 0x50509c00); // 0x26f07a
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0x26f075
    return function_c6d58(a1, a2, a3, a4, a5, v3, 0xd265835);
}

// Address range: 0x26f1bd - 0x26f318
int64_t function_26f1bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x26f1bd
    int64_t v1; // bp-64, 0x26f1bd
    int64_t v2 = (int64_t)&v1 + 16; // 0x26f289
    int64_t v3 = v2; // bp-48, 0x26f2a5
    v1 = (int64_t)&v3;
    return function_c6d58(a1, a2, a3, a4, a5, a6, v2);
}

// Address range: 0x26f318 - 0x26f48a
int64_t function_26f318(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x26f318
    int64_t v1; // bp-40, 0x26f318
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x26f318
    return function_c6d58(a1, a2, a3, a4, v2, v2, 310);
}

// Address range: 0x26f48a - 0x26f641
int64_t function_26f48a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5; // bp-40, 0x26f557
    int64_t v2 = (int64_t)&v1; // 0x26f590
    int64_t v3 = v2 - 8; // 0x26f598
    int64_t * v4 = (int64_t *)v3; // 0x26f598
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x26f5a1
    *(int64_t *)(v2 + 8) = a5;
    *v4 = v3;
    *v5 = 0x26d733;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v1;
    *v5 = a4;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x26f5e4
    *v6 = a3;
    *(int64_t *)(v2 - 32) = a1;
    *v5 = v2;
    *v4 = v1;
    *v5 = v2;
    int64_t v7; // 0x26f48a
    return function_c6d58(a1, a2, *v6, *v5, v7, v7, v7);
}

// Address range: 0x26f641 - 0x26f784
int64_t function_26f641(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x26f641
    int64_t v1; // bp-48, 0x26f641
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x26f641
    return function_c6d58(a1, a2, a3, a4, a5, v2, 0x26d976);
}

// Address range: 0x26f81b - 0x26f820
int64_t function_26f81b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x26f81b
    __asm_in((int16_t)a3);
    return a2 & 0xffffffff;
}

// Address range: 0x3ee99e - 0x3eead3
int64_t function_3ee99e(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x3ee99e
    int64_t result; // 0x3ee99e
    int16_t v1; // 0x3ee9f2
    int64_t v2; // 0x3ee9f5
    int64_t v3; // 0x3ee99e
    int32_t v4; // 0x3ee9f6
    switch (a4) {
        case 1: {
            // 0x3ee9a0
            return (v3 | (int64_t)__asm_in((int16_t)a3)) & -256 | a2 % 256;
        }
        case 2: {
            int32_t v5 = a2;
            int64_t v6 = function_3ee976(); // 0x3ee9a7
            bool v7; // 0x3ee99e
            // 0x3ee9f5
            __asm_out(28, (int32_t)v6);
            *(char *)(a2 - 85) = (char)a3;
            int32_t * v8 = (int32_t *)(v3 + 72); // 0x3ee9dd
            *v8 = v5;
            *(char *)0x10472bd7 = 43;
            int64_t v9 = (v7 ? -4 : 4) + (int64_t)*v8; // 0x3ee9ec
            unknown_310713aa();
            v1 = a3;
            __asm_outsb(v1, *(char *)v9);
            v2 = __asm_wait();
            int32_t * v10 = (int32_t *)v9; // 0x3ee9f6
            uint32_t v11 = *v10; // 0x3ee9f6
            uint32_t v12 = (int32_t)a3; // 0x3ee9f6
            v4 = v11 - v12;
            *v10 = v4;
            if (v11 >= v12 && v4 != 0) {
                int32_t v13 = *(int32_t *)(a1 - 57); // 0x3eea56
                uint64_t v14 = (0x100000000 * v2 >> 32) * (int64_t)*(int32_t *)(a3 - 0x55c7b4b8); // 0x3eea59
                char v15 = __asm_insb((int16_t)(v14 / 0x100000000)); // 0x3eea5f
                *(char *)(int64_t)((int32_t)a1 - v13) = v15;
                return v14 & 0xffffffff;
            }
            // break -> 0x3ee9fa
            break;
        }
        default: {
            // 0x3ee9fe
            return result;
        }
    }
    unsigned char v16 = llvm_ctpop_i8((char)v4); // 0x3ee9f6
    __asm_out_133(v1, (int32_t)v2);
    result = v2;
    if (v16 % 2 != 0) {
        result = function_3ee97e();
    }
    // 0x3ee9fe
    return result;
}

// Address range: 0x3eeb02 - 0x3eeb07
int64_t function_3eeb02(void) {
    // 0x3eeb02
    return function_554f7e27();
}

// Address range: 0x3eeb08 - 0x3eeb0d
int64_t function_3eeb08(void) {
    // 0x3eeb08
    return function_ffffffffdfa7022e();
}

// Address range: 0x3eeb86 - 0x3eeb88
int64_t function_3eeb86(void) {
    // 0x3eeb86
    int64_t result; // 0x3eeb86
    return result;
}

// Address range: 0x3eed9e - 0x3eedb4
int64_t function_3eed9e(int64_t a1, int64_t a2) {
    // 0x3eed9e
    __asm_wait();
    return __asm_wait() + 0x53ed4acc & 0xffffffff;
}

// Address range: 0x3eedd4 - 0x3eeeeb
int64_t function_3eedd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3eedd4
    int64_t v1; // 0x3eedd4
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 27); // 0x3eedd4
    *(int64_t *)(v4 - 8) = 0x364d366a;
    bool v5; // 0x3eedd4
    if (true != !v5) {
        // 0x3eede3
        return (v2 + 69) % 256 | v2 & -256;
    }
    // 0x3eee38
    *(int64_t *)(v4 - 16) = a4;
    __asm_out_135(57, (char)v1);
    int16_t v6 = (int16_t)*(int64_t *)v4 & -256 | 229;
    float80_t v7; // 0x3eedd4
    if (a4 == 0) {
        // 0x3eee44
        *(int16_t *)(v2 & 0xffffffff) = (int16_t)v7;
        *(char *)a1 = __asm_insb(v6);
        *(int64_t *)(v4 - 24) = 0;
        return 0x10000 * (int32_t)v1 >> 16 & -166;
    }
    int64_t v8 = a4; // 0x3eee3e
    __asm_outsb(v6, *(char *)&v3);
    while (v8 != 1) {
        v8--;
        __asm_outsb(v6, *(char *)&v3);
    }
    // 0x3eee44
    *(int16_t *)(v2 & 0xffffffff) = (int16_t)v7;
    *(char *)a1 = __asm_insb(v6);
    *(int64_t *)(v4 - 24) = 0;
    return 0x10000 * (int32_t)v1 >> 16 & -166;
}

// Address range: 0x3eeeed - 0x3eef9b
int64_t function_3eeeed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a7;
    int64_t v2; // 0x3eeeed
    uint32_t v3 = 0x10000 * (int32_t)v2 >> 16; // 0x3eeef2
    int64_t v4 = (int64_t)&v1; // 0x3eeef5
    *(int64_t *)(v4 - 8) = a1;
    int32_t * v5 = (int32_t *)a3; // 0x3eeefa
    uint32_t v6 = *v5; // 0x3eeefa
    *v5 = v6 - v3;
    char v7 = *(char *)(a2 + 110); // 0x3eeefc
    unsigned char v8 = v7 + (char)(v3 / 256) + (char)(v6 < v3); // 0x3eeefc
    int64_t result = 256 * (int64_t)v8 | (int64_t)(v3 & -0xff01); // 0x3eeefc
    int32_t * v9 = (int32_t *)(a3 - 0x23438515); // 0x3eeeff
    int32_t v10 = *v9 & (int32_t)v2; // 0x3eeeff
    *v9 = v10;
    char * v11 = (char *)a3;
    if (v10 >= 0) {
        // 0x3eef76
        *v11 = v8;
        return result;
    }
    // 0x3eef08
    *(int64_t *)(v4 - 16) = a6;
    if (v10 < 1) {
        // 0x3eefc6
        return result;
    }
    // 0x3eef96
    *(int64_t *)(v4 - 24) = 256 * (int64_t)*v11 | a3 & -0xff01;
    return result;
}

// Address range: 0x439c67 - 0x439c6d
int64_t function_439c67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x439c67
    int64_t result; // 0x439c67
    return result;
}

// Address range: 0x439c6e - 0x439c97
int64_t function_439c6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x439c6e
    bool v1; // 0x439c6e
    int64_t result; // 0x439c6e
    bool v2; // 0x439c6e
    if (a4 == 1 || v2) {
        // 0x439c70
        int64_t v3; // 0x439c6e
        int64_t v4 = v3 & -256 | 60; // 0x439c70
        int128_t v5 = v4; // 0x439c74
        v1 = -0x7f01e59f * v5 != -0x7f01e59f0000000000000000 * v5 >> 64;
        result = v4;
    }
    // 0x439c7b
    if (v1) {
        // 0x439c7d
        return result;
    }
    // 0x439c85
    if (llvm_ctpop_i8((char)result + 112 | 95) % 2 == 0) {
        function_439c40();
    }
    // 0x439c8b
    return unknown_ffffffffe38e007c();
}

// Address range: 0x439cf2 - 0x439d07
int64_t function_439cf2(int64_t a1, uint64_t a2) {
    // 0x439cf2
    int64_t v1; // 0x439cf2
    *(char *)0x57c44e5ba201cc16 = (char)v1;
    __asm_out(55, (int32_t)a2);
    char * v2 = (char *)(a1 - 102); // 0x439cff
    *v2 = *v2 - (char)(a2 / 256);
    return function_ffffffffbc30ae64();
}

// Address range: 0x439d14 - 0x439d15
int64_t function_439d14(int64_t a1) {
    // 0x439d14
    int64_t result; // 0x439d14
    return result;
}

// Address range: 0x439d5b - 0x439d5c
int64_t function_439d5b(void) {
    // 0x439d5b
    int64_t result; // 0x439d5b
    return result;
}

// Address range: 0x439d72 - 0x439d73
int64_t function_439d72(void) {
    // 0x439d72
    int64_t result; // 0x439d72
    return result;
}

// Address range: 0x439d78 - 0x439d7b
int64_t function_439d78(int64_t a1) {
    // 0x439d78
    int64_t result; // 0x439d78
    return result;
}

// Address range: 0x439da9 - 0x439e07
int64_t function_439da9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x439da9
    int64_t result; // 0x439da9
    bool v1; // 0x439da9
    if (!v1 && !v1) {
        // 0x439dbf
        return result;
    }
    // 0x439dab
    if (!v1 && true) {
        // 0x439dad
        return function_ffffffff8614ea73();
    }
    int64_t v2 = a1; // 0x439dab
    int64_t v3; // 0x439da9
    int64_t v4 = v3;
    unsigned char v5 = (char)v4 | 32; // 0x439e03
    unsigned char v6 = v5 - 41; // 0x439e03
    while (v5 >= 41 == (v5 < 41 || v6 == 0)) {
        int64_t v7 = function_439d5b(); // 0x439dbb
        int32_t v8 = (int32_t)v2 + 0x46ca57d9; // 0x439df8
        result = v7;
        v2 = v8;
        if (v8 < 1) {
            // 0x439dbf
            return result;
        }
        v4 = v7;
        v5 = (char)v4 | 32;
        v6 = v5 - 41;
    }
    // 0x439dbf
    return v4 & -256 | (int64_t)v6;
}
