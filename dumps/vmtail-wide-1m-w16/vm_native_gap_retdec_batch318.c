/*
 * Targeted RetDec C for native executable gap queue batch 318.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd13c7-0xd15c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x16ccaa-0x16ceaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16d0aa-0x16d2aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16d2aa-0x16d4aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f7e1e-0x2f801e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f801e-0x2f821e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f821e-0x2f841e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f861e-0x2f881e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_153d489();
int64_t function_16ccaa(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_16ccf0(void);
int64_t function_16cd26(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16cd33(void);
int64_t function_16cd36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16cd4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16cd82(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16cdbc(void);
int64_t function_16cde7(int64_t a1);
int64_t function_16ce98(void);
int64_t function_16d0aa(void);
int64_t function_16d0f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16d102(int64_t a1);
int64_t function_16d108(void);
int64_t function_16d10c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16d12a(int64_t a1, int64_t a2);
int64_t function_16d133(int64_t a1);
int64_t function_16d13c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16d19c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16d1fe(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16d212(void);
int64_t function_16d23f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16d250(void);
int64_t function_16d25a(void);
int64_t function_16d274(int64_t a1);
int64_t function_16d2a0(void);
int64_t function_16d2ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16d353(void);
int64_t function_16d36b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16d381(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_16d3a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16d3f3(int64_t a1, int64_t a2);
int64_t function_16d430(void);
int64_t function_16d45c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16d46b(int64_t a1);
int64_t function_16d498(void);
int64_t function_2f7e01();
int64_t function_2f7e1e(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_2f7e4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f7eea(int64_t a1, int64_t a2);
int64_t function_2f7f1f(int64_t a1);
int64_t function_2f7f7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f806a(void);
int64_t function_2f80b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f8120(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2f81b2(void);
int64_t function_2f81bf(void);
int64_t function_2f81c8(int64_t a1);
int64_t function_2f822b(int64_t a1);
int64_t function_2f8281(void);
int64_t function_2f82b0(void);
int64_t function_2f82cf(void);
int64_t function_2f82d1(int64_t a1);
int64_t function_2f82f4(void);
int64_t function_2f8301(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f8312(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f8331(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f8356(int64_t a1, int64_t a2);
int64_t function_2f8379(void);
int64_t function_2f83bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f861e(int64_t a1);
int64_t function_2f86eb(void);
int64_t function_2f8729(int64_t a1);
int64_t function_2f874a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f876b(void);
int64_t function_2f878c(void);
int64_t function_2f87a1(int64_t a1);
int64_t function_2f87b7(void);
int64_t function_2f87d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_c823b();
int64_t function_d138f();
int64_t function_d1392();
int64_t function_d13c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d1440(int64_t a1);
int64_t function_d1447(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ffffffff9c4ef996();
int64_t function_ffffffffee55d4b8();
int64_t unknown_140cbdc5();
int64_t unknown_1afc6049();
int64_t unknown_209dc52b();
int64_t unknown_2402d989();
int64_t unknown_25356825();
int64_t unknown_290b201d();
int64_t unknown_391f2afc();
int64_t unknown_3d58eafc();
int64_t unknown_3d747b67();
int64_t unknown_3ebc6051();
int64_t unknown_3faf0990();
int64_t unknown_3ff474d2();
int64_t unknown_5a8e2783();
int64_t unknown_6e9f0ab1();
int64_t unknown_ffffffff812a7778();
int64_t unknown_ffffffff81619c31();
int64_t unknown_ffffffff98328d1c();
int64_t unknown_ffffffff9f9432ea();
int64_t unknown_ffffffffa444caaf();
int64_t unknown_ffffffffa764645b();
int64_t unknown_ffffffffb44d653a();
int64_t unknown_ffffffffd414ae67();
int64_t unknown_ffffffffe20f02d8();
int64_t unknown_ffffffffeb710ee4();

// Address range: 0xd13c7 - 0xd141e
int64_t function_d13c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    unsigned char v2 = *(char *)-0x17e8cfecf470c8c6; // 0xd13cd
    __asm_outsb((int16_t)a3, (char)a2);
    int64_t v3; // 0xd13c7
    if ((int32_t)(v3 & 0xffffff00 || (int64_t)v2) + (int32_t)v3 < 0) {
        function_d138f();
    }
    int64_t v4 = a3 & 0xffffffff; // 0xd13dc
    int64_t v5 = unknown_ffffffffeb710ee4(v4); // 0xd13de
    *(char *)-0x17507c00d8b72056 = (char)v5;
    int32_t * v6 = (int32_t *)(v5 + 0x6728da0a); // 0xd13ec
    *v6 = *v6 + (int32_t)a4;
    __asm_in(-72);
    *(char *)v4 = *(char *)&v1;
    bool v7; // 0xd13c7
    int64_t v8 = v7 ? -1 : 1; // 0xd13f5
    int64_t v9 = unknown_391f2afc(v8 + v4, v1 + v8); // 0xd13f6
    int32_t * v10 = (int32_t *)v9; // 0xd1402
    *v10 = *v10 + (int32_t)v9;
    if ((char)v9 != -50) {
        function_d1392();
    }
    // 0xd140b
    return unknown_290b201d();
}

// Address range: 0xd1440 - 0xd1446
int64_t function_d1440(int64_t a1) {
    // 0xd1440
    int64_t result; // 0xd1440
    int32_t * v1 = (int32_t *)(result - 77); // 0xd1442
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0xd1447 - 0xd15aa
int64_t function_d1447(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xd1447
    int64_t v1; // 0xd1447
    int64_t v2 = v1;
    char * v3 = (char *)(2 * v2 & 254 | v2 & -256); // 0xd1449
    *v3 = *v3 - 100;
    int64_t v4; // bp-32, 0xd1447
    int64_t v5 = (int64_t)&v4; // 0xd150c
    int64_t * v6 = (int64_t *)(v5 + 8); // 0xd1521
    int64_t * v7 = (int64_t *)(v5 - 8); // 0xd152b
    *v7 = a1;
    int64_t v8 = v5 + 24; // 0xd153d
    *v7 = a4;
    v4 = a5;
    *(int64_t *)(v5 + 40) = *v6;
    *v6 = v8;
    v4 = *(int64_t *)(v5 + 16);
    *v6 = v8;
    return function_c823b(*v7);
}

// Address range: 0x16ccaa - 0x16cce2
int64_t function_16ccaa(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x16ccaa
    int64_t v1; // 0x16ccaa
    char * v2 = (char *)(v1 + 0x20d7d570); // 0x16ccaa
    *v2 = *v2 + (char)(a3 / 256);
    char * v3 = (char *)(2 * a3 + 100 + v1); // 0x16ccb0
    *v3 = *v3 - (char)v1;
    unsigned char v4 = *(char *)0x7ef782c4; // 0x16ccbd
    unsigned char v5 = v4 + (char)(v1 / 256); // 0x16ccbd
    *(char *)0x7ef782c4 = v5;
    int64_t v6 = __asm_sti(a1); // 0x16ccc3
    uint64_t v7 = v6 - (v5 < v4 ? 240 : 239); // 0x16ccc4
    *(char *)-0x1719a1f0 = *(char *)-0x1719a1f0 | (char)v7;
    int64_t v8 = (v7 % 256 | v6 & 0xffffff00) + v1; // 0x16cccc
    *(int32_t *)0x50b27d5 = *(int32_t *)0x50b27d5 + (int32_t)a1;
    *(int32_t *)a1 = (int32_t)v8;
    return v8 + 0xc2adfe18 & 0xffff00ff | 0xf000;
}

// Address range: 0x16ccf0 - 0x16ccf1
int64_t function_16ccf0(void) {
    // 0x16ccf0
    int64_t result; // 0x16ccf0
    return result;
}

// Address range: 0x16cd26 - 0x16cd30
int64_t function_16cd26(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16cd26
    int64_t v1; // 0x16cd26
    int32_t * v2 = (int32_t *)(v1 - 0x44c26178); // 0x16cd28
    *v2 = *v2 + (int32_t)a4;
    return function_16ccf0();
}

// Address range: 0x16cd33 - 0x16cd34
int64_t function_16cd33(void) {
    // 0x16cd33
    int64_t result; // 0x16cd33
    return result;
}

// Address range: 0x16cd36 - 0x16cd3d
int64_t function_16cd36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16cd36
    int64_t v1; // 0x16cd36
    return v1 & -0xff01 | (int64_t)&g4;
}

// Address range: 0x16cd4f - 0x16cd66
int64_t function_16cd4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16cd4f
    int64_t v1; // 0x16cd4f
    *(char *)a2 = (char)(v1 | v1);
    int64_t v2 = unknown_ffffffffa764645b(); // 0x16cd55
    int32_t * v3 = (int32_t *)(v1 - 40); // 0x16cd5f
    *v3 = *v3 + (int32_t)a4;
    return v2 & 0x17c511ba | 0xe83aee45;
}

// Address range: 0x16cd82 - 0x16cda2
int64_t function_16cd82(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16cd82
    int64_t v1; // 0x16cd82
    char * v2 = (char *)(v1 - 0x17ff5b00); // 0x16cd82
    *v2 = *v2 + (char)v1;
    int32_t * v3 = (int32_t *)(2 * v1); // 0x16cd88
    uint32_t v4 = *v3; // 0x16cd88
    uint32_t v5 = v4 + (int32_t)v1; // 0x16cd88
    *v3 = v5;
    *(char *)a3 = (char)a4;
    char * v6 = (char *)(4 * a3 + a4); // 0x16cd8d
    char v7 = *v6 + (char)(v1 / 256) + (char)(v5 < v4); // 0x16cd8d
    *v6 = v7;
    int64_t v8 = a4 - 1; // 0x16cd92
    int64_t v9 = __asm_in_133((int16_t)a3); // 0x16cd92
    if (v8 != 0 && v7 != 0) {
        v9 = function_16cd33();
    }
    int32_t * v10 = (int32_t *)v8; // 0x16cd97
    *v10 = *v10 + (int32_t)a3;
    int64_t v11 = (int32_t)a1 < (int32_t)v1 ? 0xabb5362d : 0xabb5362c; // 0x16cd9c
    return v9 - v11 & 0xffffffff;
}

// Address range: 0x16cdbc - 0x16cdbd
int64_t function_16cdbc(void) {
    // 0x16cdbc
    int64_t result; // 0x16cdbc
    return result;
}

// Address range: 0x16cde7 - 0x16cde8
int64_t function_16cde7(int64_t a1) {
    // 0x16cde7
    int64_t result; // 0x16cde7
    return result;
}

// Address range: 0x16ce98 - 0x16ce99
int64_t function_16ce98(void) {
    // 0x16ce98
    int64_t result; // 0x16ce98
    return result;
}

// Address range: 0x16d0aa - 0x16d0bb
int64_t function_16d0aa(void) {
    // 0x16d0aa
    int64_t result; // 0x16d0aa
    __asm_out(67, (char)result);
    return result;
}

// Address range: 0x16d0f2 - 0x16d102
int64_t function_16d0f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16d0f2
    bool v1; // 0x16d0f2
    if (!v1) {
        // 0x16d0fe
        int64_t result; // 0x16d0f2
        return result;
    }
    int64_t result2 = unknown_3d58eafc(); // 0x16d0f6
    int32_t * v2 = (int32_t *)result2; // 0x16d0fb
    *v2 = *v2 + (int32_t)result2;
    return result2;
}

// Address range: 0x16d102 - 0x16d108
int64_t function_16d102(int64_t a1) {
    // 0x16d102
    int64_t v1; // 0x16d102
    bool v2; // 0x16d102
    return v1 + 0xb759007a + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x16d108 - 0x16d109
int64_t function_16d108(void) {
    // 0x16d108
    int64_t result; // 0x16d108
    return result;
}

// Address range: 0x16d10c - 0x16d11b
int64_t function_16d10c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16d10c
    int64_t result; // 0x16d10c
    char * v1 = (char *)(result - 0x5d790b32); // 0x16d10c
    *v1 = *v1 + (char)a3;
    *(char *)0x5b3f4a19 = *(char *)0x5b3f4a19 + (char)(result / 256);
    return result;
}

// Address range: 0x16d12a - 0x16d133
int64_t function_16d12a(int64_t a1, int64_t a2) {
    // 0x16d12a
    int64_t v1; // 0x16d12a
    int64_t v2 = v1;
    bool v3; // 0x16d12a
    return (v2 - (v3 ? 12 : 11)) % 256 | v2 & -256;
}

// Address range: 0x16d133 - 0x16d136
int64_t function_16d133(int64_t a1) {
    // 0x16d133
    int64_t result; // 0x16d133
    return result;
}

// Address range: 0x16d13c - 0x16d19a
int64_t function_16d13c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x16d13c
    int32_t * v3 = (int32_t *)(4 * a2 - 0x695e3a12 + v2); // 0x16d13c
    *v3 = *v3 + (int32_t)a4;
    int64_t result; // 0x16d13c
    char v4 = *(char *)(result - 0x172666ff); // 0x16d143
    int64_t v5; // 0x16d13c
    uint32_t v6 = *(int32_t *)&v5; // 0x16d149
    uint32_t v7 = v6 + (int32_t)v2; // 0x16d149
    *(int32_t *)a3 = v7;
    int32_t v8 = *(int32_t *)&v1; // 0x16d14b
    int64_t v9 = v8 + (int32_t)a1 + (int32_t)(v7 < v6); // 0x16d14b
    uint32_t v10 = *(int32_t *)-0x174286ca; // 0x16d14e
    *(int32_t *)-0x174286ca = (int32_t)a3;
    v5 = v10;
    int32_t * v11 = (int32_t *)(result + v9); // 0x16d154
    uint32_t v12 = *v11; // 0x16d154
    uint32_t v13 = v12 + (int32_t)v2; // 0x16d154
    *v11 = v13;
    char v14 = v4 - (char)(v10 / 256) + (char)(v13 < v12); // 0x16d157
    int32_t v15 = *(int32_t *)((256 * (int64_t)v14 | v2 & -0xff01) + 0x6a01e80b); // 0x16d159
    if (v14 >= 0) {
        result = function_16d108();
    }
    if (v14 == 0) {
        int32_t * v16 = (int32_t *)(result - 0x4bc2978a); // 0x16d168
        *v16 = *v16 + (int32_t)a2;
        int32_t * v17 = (int32_t *)(v9 - 24); // 0x16d170
        *v17 = *v17 - 1;
        int32_t * v18 = (int32_t *)(a2 - 0x52ba8faa); // 0x16d173
        *v18 = (int32_t)v1 - 1 + *v18;
        return result;
    }
    uint64_t v19 = result; // 0x16d17a
    *(char *)v19 = *(char *)&result - (char)(v19 / 256);
    int64_t * v20 = (int64_t *)(int64_t)(39 * v15); // 0x16d17c
    int64_t v21 = *v20; // 0x16d17c
    int64_t result3 = unknown_5a8e2783(); // 0x16d17d
    result = result3;
    if ((int32_t)result3 == 0x13757cb4 || v1 == 1) {
        // 0x16d189
        *v20 = v21;
        int64_t result2 = unknown_3faf0990() & 0xf5080508; // 0x16d18f
        int32_t * v22 = (int32_t *)(v5 + v21); // 0x16d196
        *v22 = *v22 + (int32_t)result2;
        return result2;
    }
    // 0x16d1cc
    return result3;
}

// Address range: 0x16d19c - 0x16d1b3
int64_t function_16d19c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16d19c
    return unknown_6e9f0ab1();
}

// Address range: 0x16d1fe - 0x16d205
int64_t function_16d1fe(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 59); // 0x16d1fe
    uint32_t v2 = *v1; // 0x16d1fe
    bool v3; // 0x16d1fe
    *v1 = v2 / 512 | 0x1000000 * v2 | 0x800000 * (int32_t)v3;
    int64_t result; // 0x16d1fe
    return result;
}

// Address range: 0x16d212 - 0x16d213
int64_t function_16d212(void) {
    // 0x16d212
    int64_t result; // 0x16d212
    return result;
}

// Address range: 0x16d23f - 0x16d245
int64_t function_16d23f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16d23f
    int64_t result; // 0x16d23f
    int32_t * v1 = (int32_t *)(result + 8 * a4); // 0x16d23f
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x16d250 - 0x16d251
int64_t function_16d250(void) {
    // 0x16d250
    int64_t result; // 0x16d250
    return result;
}

// Address range: 0x16d25a - 0x16d25d
int64_t function_16d25a(void) {
    // 0x16d25a
    int64_t result; // 0x16d25a
    return result;
}

// Address range: 0x16d274 - 0x16d277
int64_t function_16d274(int64_t a1) {
    // 0x16d274
    int64_t result; // 0x16d274
    return result;
}

// Address range: 0x16d2a0 - 0x16d2a1
int64_t function_16d2a0(void) {
    // 0x16d2a0
    int64_t result; // 0x16d2a0
    return result;
}

// Address range: 0x16d2ba - 0x16d2c0
int64_t function_16d2ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16d2ba
    int64_t v1; // 0x16d2ba
    bool v2; // 0x16d2ba
    if ((char)v2 + (char)v1 <= (char)a4) {
        function_16d2a0();
    }
    // 0x16d2be
    return function_16d250();
}

// Address range: 0x16d353 - 0x16d356
int64_t function_16d353(void) {
    // 0x16d353
    int64_t result; // 0x16d353
    return result;
}

// Address range: 0x16d36b - 0x16d381
int64_t function_16d36b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16d36b
    int64_t v1; // 0x16d36b
    int32_t v2 = v1; // 0x16d36b
    __asm_out_134(5, v2);
    __asm_out_134(82, v2);
    return __asm_in_133((int16_t)a3);
}

// Address range: 0x16d381 - 0x16d3a2
int64_t function_16d381(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    uint64_t result = (int64_t)__asm_in_133((int16_t)a2); // 0x16d38e
    char * v1 = (char *)(result + 36); // 0x16d395
    *v1 = *v1 + (char)(result / 256);
    int64_t v2; // 0x16d381
    *(char *)(a2 & 0xffffffff) = *(char *)&v2 | (char)(a4 / 256);
    return result;
}

// Address range: 0x16d3a2 - 0x16d3c8
int64_t function_16d3a2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x2bf91800); // 0x16d3b9
    int64_t v2; // 0x16d3a2
    *v1 = *v1 | (int32_t)v2;
    uint32_t v3 = *(int32_t *)(a2 + 0x4e02da00) % 32; // 0x16d3c1
    if (v3 != 0) {
        int64_t v4; // 0x16d3a2
        uint32_t v5 = *(int32_t *)&v4; // 0x16d3c1
        *(int32_t *)v4 = v5 >> 32 - v3 | v5 << v3;
    }
    return function_153d489();
}

// Address range: 0x16d3f3 - 0x16d405
int64_t function_16d3f3(int64_t a1, int64_t a2) {
    // 0x16d3f3
    return function_ffffffffee55d4b8();
}

// Address range: 0x16d430 - 0x16d431
int64_t function_16d430(void) {
    // 0x16d430
    int64_t result; // 0x16d430
    return result;
}

// Address range: 0x16d45c - 0x16d463
int64_t function_16d45c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16d45c
    int64_t v1; // 0x16d45c
    bool v2; // 0x16d45c
    return v1 & -0x10000 | (int64_t)__asm_in_135((int16_t)a3) | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x16d46b - 0x16d46e
int64_t function_16d46b(int64_t a1) {
    // 0x16d46b
    int64_t result; // 0x16d46b
    return result;
}

// Address range: 0x16d498 - 0x16d49c
int64_t function_16d498(void) {
    // 0x16d498
    return __asm_in(-37);
}

// Address range: 0x2f7e1e - 0x2f7e4a
int64_t function_2f7e1e(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x2f7e1e
    int64_t v1; // 0x2f7e1e
    int64_t v2 = v1;
    __asm_int(-24);
    int32_t * v3 = (int32_t *)(a3 - 88); // 0x2f7e20
    *v3 = *v3 + (int32_t)a3;
    int64_t v4 = v1 & -223; // 0x2f7e23
    *(int32_t *)a1 = (int32_t)v4;
    char * v5 = (char *)(v4 + 5); // 0x2f7e26
    *v5 = *v5 + (char)(a3 / 256);
    *(char *)v2 = (char)v2;
    uint32_t v6 = (int32_t)((v4 ^ a4 / 256) % 256 | v1 & 0xffffff00) + (int32_t)v2; // 0x2f7e2d
    int64_t result = v6; // 0x2f7e2d
    if (a4 == 1 || v6 == 0) {
        int32_t * v7 = (int32_t *)(a2 - 0x6071fe18); // 0x2f7e33
        int32_t v8 = *v7; // 0x2f7e33
        *v7 = 2 * v8 | (int32_t)(v8 < 0);
        return result | 176;
    }
    // 0x2f7e48
    return result;
}

// Address range: 0x2f7e4b - 0x2f7ee2
int64_t function_2f7e4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 90); // 0x2f7e57
    int32_t v2 = *v1; // 0x2f7e57
    int64_t v3; // 0x2f7e4b
    int32_t v4 = v3; // 0x2f7e57
    int32_t v5 = v2 + v4; // 0x2f7e57
    *v1 = v5;
    bool v6; // 0x2f7e4b
    int64_t v7 = v3 + 0xe851acf7 + (int64_t)v6 & 0xffffffff; // 0x2f7e5a
    if (v5 == 0) {
        v7 = function_2f7e01();
    }
    bool v8 = v5 < 0; // 0x2f7e5d
    int64_t result = v7; // 0x2f7e5d
    int64_t v9 = a1; // 0x2f7e5d
    if (v5 < 0 == ((v5 ^ v2) & (v5 ^ v4)) < 0 != v5 != 0) {
      lab_0x2f7e5f:
        // 0x2f7e5f
        *(char *)(v9 - 0x33fe1762) = (char)!v8;
        return result;
    }
    int64_t v10 = a3; // 0x2f7e70
    int64_t v11 = a1;
    int64_t v12; // 0x2f7e4b
    unsigned char v13 = (char)v12 - *(char *)(a5 - 5); // 0x2f7e6b
    v10 = v10 & -0xff01 | (int64_t)&g2;
    unknown_ffffffff812a7778();
    while (v13 != 0) {
        int64_t v14 = v12 & -256 | (int64_t)v13; // 0x2f7e6b
        v9 = v11 + 4;
        __asm_sti(v9);
        int64_t v15 = unknown_140cbdc5(); // 0x2f7ebf
        char * v16 = (char *)v10; // 0x2f7ec4
        char v17 = *v16; // 0x2f7ec4
        char v18 = v15; // 0x2f7ec4
        char v19 = v17 + v18; // 0x2f7ec4
        unsigned char v20 = llvm_ctpop_i8(v19); // 0x2f7ec4
        *v16 = v19;
        if (v20 % 2 != 0) {
            int64_t result2 = unknown_3ff474d2(v11 + 8); // 0x2f7ecc
            int32_t * v21 = (int32_t *)(a5 - 0x475d650b); // 0x2f7edc
            *v21 = *v21 + (int32_t)v14;
            return result2;
        }
        // 0x2f7e5d
        v12 = v14;
        if (v19 < 0 == ((v19 ^ v17) & (v19 ^ v18)) < 0 != v19 != 0) {
            // 0x2f7e5d
            v8 = v19 < 0;
            result = 0x10000 * (int32_t)v15 >> 16;
            goto lab_0x2f7e5f;
        }
        v11 = v9;
        v13 = (char)v12 - *(char *)(a5 - 5);
        v10 = v10 & -0xff01 | (int64_t)&g2;
        unknown_ffffffff812a7778();
    }
    char * v22 = (char *)(v10 + 110); // 0x2f7e7f
    *v22 = *v22 | v13;
    int64_t result3 = unknown_2402d989(); // 0x2f7e83
    int32_t * v23 = (int32_t *)result3; // 0x2f7e88
    *v23 = *v23 + (int32_t)v11;
    __asm_rcl(*(int32_t *)a5);
    return result3;
}

// Address range: 0x2f7eea - 0x2f7eed
int64_t function_2f7eea(int64_t a1, int64_t a2) {
    // 0x2f7eea
    int64_t result; // 0x2f7eea
    return result;
}

// Address range: 0x2f7f1f - 0x2f7f25
int64_t function_2f7f1f(int64_t a1) {
    // 0x2f7f1f
    int64_t v1; // 0x2f7f1f
    return v1 & 0x2a8c2a96;
}

// Address range: 0x2f7f7a - 0x2f8040
int64_t function_2f7f7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x2f7f7a
    *(int32_t *)a1 = (int32_t)v2;
    char * v3 = (char *)(v2 + 94); // 0x2f7f7f
    bool v4; // 0x2f7f7a
    *v3 = (char)v4 - (char)a4 + *v3;
    int64_t v5 = unknown_ffffffff9f9432ea((v4 ? -4 : 4) + a1); // 0x2f7f82
    char v6 = *(char *)0x5ace8e8e; // 0x2f7f87
    *(char *)0x5ace8e8e = v6 + (char)((uint64_t)v2 / 256);
    int64_t v7 = v5 + 0x37f9e7b0; // 0x2f7f94
    uint32_t v8 = (int32_t)a4 % 32; // 0x2f7f99
    if (v8 != 0) {
        int32_t * v9 = (int32_t *)(2 * v7 & 0x1fffffffe); // 0x2f7f99
        uint32_t v10 = *v9; // 0x2f7f99
        *v9 = v10 >> v8 | v10 << 32 - v8;
    }
    int3_t v11; // 0x2f7f7a
    float80_t v12 = __frontend_reg_load_fpr(v11); // 0x2f7fa3
    __frontend_reg_store_fpr(v11, v12 - (float80_t)*(int16_t *)(a3 + 0x6f0f9e9c));
    int64_t result = unknown_ffffffffa444caaf(); // 0x2f7fa9
    if ((int32_t)v7 >= 0xc635a202) {
        // 0x2f7fb0
        return result;
    }
    int64_t v13 = a4 & -0xff01 | (int64_t)&g3; // 0x2f802f
    int64_t result2 = result;
    int3_t v14; // 0x2f7f7a
    int3_t v15 = v14;
    float80_t v16 = __frontend_reg_load_fpr(v15); // 0x2f8027
    __frontend_reg_store_fpr(v15, __frontend_reg_load_fpr(v15) - v16);
    int32_t * v17 = (int32_t *)(v1 + 0x10ff2341); // 0x2f8029
    int64_t v18; // 0x2f7f7a
    int32_t v19 = *v17 + (int32_t)v18; // 0x2f8029
    *v17 = v19;
    v13--;
    while (v13 != 0 && v19 != 0) {
        int64_t v20 = v18 & -256 | 5; // 0x2f800d
        *(char *)-0x16f9e8f8 = *(char *)-0x16f9e8f8 | (char)result2;
        int32_t * v21 = (int32_t *)(v20 + 0x3ff36357); // 0x2f8015
        *v21 = *v21 + (int32_t)a3;
        __asm_iretd();
        int64_t v22 = unknown_25356825(); // 0x2f801f
        v18 = v20;
        result2 = v22;
        v15++;
        v16 = __frontend_reg_load_fpr(v15);
        __frontend_reg_store_fpr(v15, __frontend_reg_load_fpr(v15) - v16);
        v17 = (int32_t *)(v1 + 0x10ff2341);
        v19 = *v17 + (int32_t)v18;
        *v17 = v19;
        v13--;
    }
    // 0x2f8031
    *(char *)v1 = *(char *)&v1 ^ (char)(v13 / 256);
    return result2;
}

// Address range: 0x2f806a - 0x2f806b
int64_t function_2f806a(void) {
    // 0x2f806a
    int64_t result; // 0x2f806a
    return result;
}

// Address range: 0x2f80b2 - 0x2f811f
int64_t function_2f80b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f80b2
    int64_t v1; // 0x2f80b2
    int64_t result = v1 & -256 | 129; // 0x2f80b2
    *(char *)a1 = __asm_insb((int16_t)a3);
    if (a4 != 0) {
        // 0x2f80b7
        return result;
    }
    // 0x2f810e
    *(int32_t *)result = 0x74aa0a18;
    int64_t result2 = unknown_ffffffff98328d1c(); // 0x2f8116
    char * v2 = (char *)(a3 - 82); // 0x2f811b
    *v2 = *v2 + 54;
    return result2;
}

// Address range: 0x2f8120 - 0x2f8175
int64_t function_2f8120(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2f8120
    bool v1; // 0x2f8120
    bool v2 = v1;
    int64_t v3; // 0x2f8120
    float80_t v4; // 0x2f8120
    *(float64_t *)v3 = (float64_t)v4;
    unsigned char v5 = (char)v3; // 0x2f8122
    unsigned char v6 = *(char *)(a2 + 64) + (char)v2; // 0x2f8122
    bool v7 = v2 ? v6 != -1 | (char)v2 + v5 - v6 > v5 : v6 > v5; // 0x2f8122
    int64_t v8 = unknown_209dc52b(); // 0x2f8125
    char * v9 = (char *)(v8 + 0x6af07180); // 0x2f812a
    *v9 = *v9 + (char)a4 + (char)v7;
    int32_t * v10 = (int32_t *)(a1 - 0x1369a06e); // 0x2f8135
    uint32_t v11 = *v10; // 0x2f8135
    uint32_t v12 = (int32_t)a4; // 0x2f8135
    uint32_t v13 = v11 + v12; // 0x2f8135
    *v10 = v13;
    uint32_t v14 = v12 % 32; // 0x2f813c
    bool v15 = v13 < v11; // 0x2f813c
    int64_t v16 = a2; // 0x2f813c
    if (v14 != 0) {
        int32_t v17 = a2; // 0x2f813c
        v15 = (0x80000000 >> v14 - 1 & v17) != 0;
        v16 = v17 << v14;
    }
    int32_t v18 = v8; // 0x2f813e
    int32_t v19 = v15; // 0x2f813e
    int32_t v20 = v18 + 0x20bd2c15 + v19; // 0x2f813e
    int64_t result = unknown_1afc6049(); // 0x2f8143
    if (v20 < 0 == (v20 + v19 & (v18 ^ -0x80000000)) < 0) {
        // 0x2f814a
        return result;
    }
    int64_t v21 = unknown_3d747b67() + 2 * v3; // 0x2f8168
    int32_t * v22 = (int32_t *)(a3 - 47); // 0x2f816a
    uint32_t v23 = *v22; // 0x2f816a
    uint32_t v24 = v23 + v12; // 0x2f816a
    *v22 = v24;
    int64_t v25; // 0x2f8120
    char v26 = *(char *)&v25; // 0x2f816d
    *(char *)v25 = v26 + (char)(a4 / 256) + (char)(v24 < v23);
    char * v27 = (char *)(2 * a1 + 104 + v16); // 0x2f816f
    *v27 = *v27 + (char)a3;
    return 256 * v25 + v21 & 0xff00 | v21 & 0xffff00ff;
}

// Address range: 0x2f81b2 - 0x2f81b3
int64_t function_2f81b2(void) {
    // 0x2f81b2
    int64_t result; // 0x2f81b2
    return result;
}

// Address range: 0x2f81bf - 0x2f81c0
int64_t function_2f81bf(void) {
    // 0x2f81bf
    int64_t result; // 0x2f81bf
    return result;
}

// Address range: 0x2f81c8 - 0x2f81d4
int64_t function_2f81c8(int64_t a1) {
    unsigned char v1 = *(char *)-0x392f0731; // 0x2f81c8
    int64_t v2; // 0x2f81c8
    unsigned char v3 = v1 + (char)((uint64_t)v2 / 256); // 0x2f81c8
    *(char *)-0x392f0731 = v3;
    int64_t result; // 0x2f81c8
    if (v3 >= v1 && v3 != 0) {
        result = function_2f81bf();
    }
    // 0x2f81d1
    return result;
}

// Address range: 0x2f822b - 0x2f8246
int64_t function_2f822b(int64_t a1) {
    int64_t v1 = unknown_ffffffff81619c31(); // 0x2f8230
    bool v2; // 0x2f822b
    if (!v2) {
        v1 = function_2f81b2();
    }
    int64_t v3 = v1;
    return v3 + 0xf001e83a & 0xffffff00 | (v3 + 86) % 256;
}

// Address range: 0x2f8281 - 0x2f8284
int64_t function_2f8281(void) {
    // 0x2f8281
    int64_t result; // 0x2f8281
    return result;
}

// Address range: 0x2f82b0 - 0x2f82b1
int64_t function_2f82b0(void) {
    // 0x2f82b0
    int64_t result; // 0x2f82b0
    return result;
}

// Address range: 0x2f82cf - 0x2f82d0
int64_t function_2f82cf(void) {
    // 0x2f82cf
    int64_t result; // 0x2f82cf
    return result;
}

// Address range: 0x2f82d1 - 0x2f82d9
int64_t function_2f82d1(int64_t a1) {
    // 0x2f82d1
    int64_t v1; // 0x2f82d1
    *(int32_t *)(a1 - 0x2f608340) = (int32_t)v1;
    return function_2f82cf();
}

// Address range: 0x2f82f4 - 0x2f82f6
int64_t function_2f82f4(void) {
    // 0x2f82f4
    return function_2f82b0();
}

// Address range: 0x2f8301 - 0x2f8304
int64_t function_2f8301(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f8301
    int64_t result; // 0x2f8301
    return result;
}

// Address range: 0x2f8312 - 0x2f8324
int64_t function_2f8312(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x6f08db97); // 0x2f8317
    *v1 = *v1 + (int32_t)a4;
    return function_ffffffff9c4ef996();
}

// Address range: 0x2f8331 - 0x2f833b
int64_t function_2f8331(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f8331
    return unknown_ffffffffb44d653a(a1, a2, a3);
}

// Address range: 0x2f8356 - 0x2f8368
int64_t function_2f8356(int64_t a1, int64_t a2) {
    // 0x2f8356
    *(char *)a1 = (char)a2;
    bool v1; // 0x2f8356
    int64_t v2 = v1 ? -1 : 1; // 0x2f8358
    int64_t v3 = v2 + a1; // 0x2f8358
    int64_t v4 = v2 + a2; // 0x2f8358
    int32_t * v5 = (int32_t *)(v3 + 0x4520fa88); // 0x2f835b
    *v5 = *v5 + (int32_t)v4;
    int64_t result = unknown_ffffffffd414ae67(v3, v4); // 0x2f8361
    char * v6 = (char *)v3; // 0x2f8366
    int64_t v7; // 0x2f8356
    *v6 = *v6 + (char)((uint64_t)v7 / 256);
    return result;
}

// Address range: 0x2f8379 - 0x2f837a
int64_t function_2f8379(void) {
    // 0x2f8379
    int64_t result; // 0x2f8379
    return result;
}

// Address range: 0x2f83bc - 0x2f841e
int64_t function_2f83bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t result; // 0x2f83bc
    bool v3; // 0x2f83bc
    int32_t v4 = (v3 ? -0x565c59f1 : -0x565c59f2) + (int32_t)result; // 0x2f83bc
    *(int32_t *)a4 = v4;
    if (v4 < 0) {
        // 0x2f83c6
        *(int32_t *)a1 = (int32_t)result;
        return result;
    }
    // 0x2f83c9
    *(int32_t *)v1 = (int32_t)a1;
    int64_t v5 = (int64_t)*(int32_t *)&v1; // 0x2f83ce
    unsigned char v6 = *(char *)&v1; // 0x2f83d0
    unsigned char v7 = (char)(result / 256); // 0x2f83d0
    *(char *)v5 = v6 - v7;
    int64_t result2 = (int64_t)*(int32_t *)&v2; // 0x2f83d2
    int64_t v8 = v2 + (v3 ? -4 : 4); // 0x2f83d2
    v2 = v8;
    int32_t * v9 = (int32_t *)(result2 + 0x2f00b314); // 0x2f83d3
    uint32_t v10 = *v9; // 0x2f83d3
    int32_t v11 = v6 < v7; // 0x2f83d3
    uint32_t v12 = (int32_t)v8 + v11; // 0x2f83d3
    int32_t v13 = v10 - v12; // 0x2f83d3
    unsigned char v14 = llvm_ctpop_i8((char)v13); // 0x2f83d3
    *v9 = v13;
    if (v14 % 2 == 0) {
        // 0x2f841d
        *(int32_t *)v5 = *(int32_t *)v2;
        return result2;
    }
    bool v15 = v6 < v7 ? v12 != -1 | v10 < v13 - v11 : v10 < v12; // 0x2f83d3
    char * v16 = (char *)(v1 - 126); // 0x2f83db
    unsigned char v17 = *v16; // 0x2f83db
    *v16 = v17 / 16 | 16 * (char)v15 | 32 * v17;
    int64_t result3 = result2 & 0xffff00ff; // 0x2f83df
    int32_t * v18 = (int32_t *)result3; // 0x2f83e2
    *v18 = *v18 + (int32_t)result3;
    return result3;
}

// Address range: 0x2f861e - 0x2f8627
int64_t function_2f861e(int64_t a1) {
    // 0x2f861e
    int64_t v1; // 0x2f861e
    *(char *)a1 = (char)(v1 / 256) + (char)v1;
    return v1 ^ 38;
}

// Address range: 0x2f86eb - 0x2f86ec
int64_t function_2f86eb(void) {
    // 0x2f86eb
    int64_t result; // 0x2f86eb
    return result;
}

// Address range: 0x2f8729 - 0x2f872c
int64_t function_2f8729(int64_t a1) {
    // 0x2f8729
    int64_t result; // 0x2f8729
    bool v1; // 0x2f8729
    if (v1) {
        result = function_2f86eb();
    }
    // 0x2f872b
    return result;
}

// Address range: 0x2f874a - 0x2f8755
int64_t function_2f874a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f874a
    return unknown_3ebc6051(a1, a2, a3);
}

// Address range: 0x2f876b - 0x2f876c
int64_t function_2f876b(void) {
    // 0x2f876b
    int64_t result; // 0x2f876b
    return result;
}

// Address range: 0x2f878c - 0x2f878d
int64_t function_2f878c(void) {
    // 0x2f878c
    int64_t result; // 0x2f878c
    return result;
}

// Address range: 0x2f87a1 - 0x2f87a2
int64_t function_2f87a1(int64_t a1) {
    // 0x2f87a1
    int64_t result; // 0x2f87a1
    return result;
}

// Address range: 0x2f87b7 - 0x2f87b8
int64_t function_2f87b7(void) {
    // 0x2f87b7
    int64_t result; // 0x2f87b7
    return result;
}

// Address range: 0x2f87d2 - 0x2f87e9
int64_t function_2f87d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffe20f02d8(); // 0x2f87d2
    int32_t * v2 = (int32_t *)(a3 - 24); // 0x2f87dd
    int64_t v3; // 0x2f87d2
    *v2 = (int32_t)v1 + (int32_t)v3 | *v2;
    return function_2f878c();
}
