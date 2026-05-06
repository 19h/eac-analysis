/*
 * Targeted RetDec C for native executable gap queue batch 298.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x16b4aa-0x16b6aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16b6aa-0x16b8aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16b8aa-0x16baaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16baaa-0x16bcaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a9375-0x2a9575 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a9575-0x2a9775 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f681e-0x2f6a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f6a1e-0x2f6c1e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_14f5b82e();
int64_t function_16795ce();
int64_t function_167f4cf();
int64_t function_16b4aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16b502(void);
int64_t function_16b51f(void);
int64_t function_16b56c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16b5a1(void);
int64_t function_16b5fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16b618(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16b68c(void);
int64_t function_16b6cf(int64_t a1);
int64_t function_16b715(void);
int64_t function_16b741(void);
int64_t function_16b77f(int64_t a1);
int64_t function_16b798(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_16b7cd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16b810(void);
int64_t function_16b852(int64_t a1);
int64_t function_16b85a(int64_t a1);
int64_t function_16b869(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16b873(void);
int64_t function_16b8ae(void);
int64_t function_16b8fe(void);
int64_t function_16b912(void);
int64_t function_16b99c(void);
int64_t function_16b9a3(void);
int64_t function_16b9b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16b9b9(int64_t a1);
int64_t function_16ba2f(void);
int64_t function_16ba3d(void);
int64_t function_16ba3f(void);
int64_t function_16ba41(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16ba77(void);
int64_t function_16babb(void);
int64_t function_16bad2(void);
int64_t function_16bae8(void);
int64_t function_16baf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16bb08(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_16bb9d(void);
int64_t function_16bbaf(void);
int64_t function_16bbff(int64_t a1);
int64_t function_16bca2(void);
int64_t function_2a931c();
int64_t function_2a9375(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a9384(void);
int64_t function_2a93df(void);
int64_t function_2a9413(void);
int64_t function_2a9431(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a943a(int64_t a1);
int64_t function_2a951c(void);
int64_t function_2a952e(void);
int64_t function_2a953a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a9575(void);
int64_t function_2a959b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a95c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a9608(int64_t a1);
int64_t function_2a961f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a962d(void);
int64_t function_2a9639(int64_t a1);
int64_t function_2a965d(int64_t a1);
int64_t function_2a9679(void);
int64_t function_2a968f(void);
int64_t function_2a9695(void);
int64_t function_2a96c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_2a96ff(void);
int64_t function_2a9700(int64_t a1, int64_t a2);
int64_t function_2a9713(void);
int64_t function_2a9748(int64_t a1);
int64_t function_2a9751(int64_t a1);
int64_t function_2f681e(void);
int64_t function_2f68be(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f6901(void);
int64_t function_2f6930(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f69d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f69d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2f6a9b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f6b53(void);
int64_t function_2f6b5d(int64_t a1);
int64_t function_2f6b61(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f6b79(void);
int64_t function_2f6c04(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_30bdcd();
int64_t function_3d28b78e();
int64_t function_535763();
int64_t function_78aebd8c();
int64_t function_83f6d40();
int64_t function_ffffffff8a42b911();
int64_t unknown_136e5536();
int64_t unknown_1ae4d75b();
int64_t unknown_41074c0e();
int64_t unknown_5c11b657();
int64_t unknown_5f5dd56d();
int64_t unknown_8266d52();
int64_t unknown_ffffffff87788ccb();

// Address range: 0x16b4aa - 0x16b4c1
int64_t function_16b4aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16b4aa
    int64_t v1; // 0x16b4aa
    uint32_t v2 = *(int32_t *)(v1 + 81 + 2 * v1); // 0x16b4aa
    int64_t v3 = (v1 & 0xffffffff | 0x100000000 * a3) / (int64_t)v2; // 0x16b4aa
    *(int32_t *)a1 = *(int32_t *)(a2 - v1 & 0xffffffff);
    char * v4 = (char *)(v3 & 0xffffffff); // 0x16b4b1
    *v4 = *v4 | (char)v3;
    return (v1 | a4) & 0xffffffff;
}

// Address range: 0x16b502 - 0x16b504
int64_t function_16b502(void) {
    // 0x16b502
    int64_t v1; // 0x16b502
    return function_16b56c(v1, v1, v1, v1);
}

// Address range: 0x16b51f - 0x16b522
int64_t function_16b51f(void) {
    // 0x16b51f
    int64_t result; // 0x16b51f
    return result;
}

// Address range: 0x16b56c - 0x16b580
int64_t function_16b56c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16b56c
    *(int32_t *)-0x34e8b890 = *(int32_t *)-0x34e8b890 + (int32_t)a1;
    int64_t result; // 0x16b56c
    *(int32_t *)a1 = (int32_t)result;
    int32_t * v1 = (int32_t *)(a4 - 58); // 0x16b577
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x16b5a1 - 0x16b5a6
int64_t function_16b5a1(void) {
    // 0x16b5a1
    return function_3d28b78e();
}

// Address range: 0x16b5fb - 0x16b618
int64_t function_16b5fb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16b5fb
    int64_t v1; // 0x16b5fb
    char * v2 = (char *)(v1 - 0x5afe1800); // 0x16b5fb
    *v2 = *v2 + (char)v1;
    char * v3 = (char *)(a4 + 0x3aa48300); // 0x16b601
    int64_t v4; // 0x16b5fb
    *v3 = *v3 + (char)(v4 / 256);
    *(int32_t *)v4 = *(int32_t *)&v4 + (int32_t)a3;
    return 0x10000 * (int32_t)v1 + 0x2590000 >> 16;
}

// Address range: 0x16b618 - 0x16b61f
int64_t function_16b618(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16b618
    int64_t result; // 0x16b618
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x16b68c - 0x16b691
int64_t function_16b68c(void) {
    // 0x16b68c
    return function_14f5b82e();
}

// Address range: 0x16b6cf - 0x16b6d0
int64_t function_16b6cf(int64_t a1) {
    // 0x16b6cf
    int64_t result; // 0x16b6cf
    return result;
}

// Address range: 0x16b715 - 0x16b721
int64_t function_16b715(void) {
    // 0x16b715
    int64_t result; // 0x16b715
    return result;
}

// Address range: 0x16b741 - 0x16b753
int64_t function_16b741(void) {
    // 0x16b741
    int64_t result; // 0x16b741
    *(int32_t *)0x1e869a3068a3d32 = (int32_t)result;
    return result;
}

// Address range: 0x16b77f - 0x16b780
int64_t function_16b77f(int64_t a1) {
    // 0x16b77f
    int64_t result; // 0x16b77f
    return result;
}

// Address range: 0x16b798 - 0x16b7ba
int64_t function_16b798(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x16b798
    int64_t result; // 0x16b798
    if (a4 == 0) {
        // 0x16b7b1
        return result;
    }
    int32_t v1 = result;
    *(int32_t *)result = v1 + 0x3f51522a;
    *(int32_t *)-0x3545a105e842ffe1 = v1;
    return result;
}

// Address range: 0x16b7cd - 0x16b7d8
int64_t function_16b7cd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16b7cd
    int64_t v1; // 0x16b7cd
    int64_t v2 = v1;
    __asm_out((int16_t)a3, (char)v2);
    return (v2 + 153) % 256 | v2 & -256;
}

// Address range: 0x16b810 - 0x16b813
int64_t function_16b810(void) {
    // 0x16b810
    int64_t result; // 0x16b810
    return result;
}

// Address range: 0x16b852 - 0x16b855
int64_t function_16b852(int64_t a1) {
    // 0x16b852
    int64_t result; // 0x16b852
    return result;
}

// Address range: 0x16b85a - 0x16b85e
int64_t function_16b85a(int64_t a1) {
    // 0x16b85a
    int64_t result; // 0x16b85a
    return result;
}

// Address range: 0x16b869 - 0x16b873
int64_t function_16b869(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16b869
    int64_t result; // 0x16b869
    char * v1 = (char *)(result - 0x17fe9e00); // 0x16b869
    *v1 = *v1 + (char)result;
    int32_t * v2 = (int32_t *)(result + 1); // 0x16b86f
    *v2 = *v2 + (int32_t)a4;
    return result;
}

// Address range: 0x16b873 - 0x16b878
int64_t function_16b873(void) {
    // 0x16b873
    return function_ffffffff8a42b911();
}

// Address range: 0x16b8ae - 0x16b8af
int64_t function_16b8ae(void) {
    // 0x16b8ae
    int64_t result; // 0x16b8ae
    return result;
}

// Address range: 0x16b8fe - 0x16b8ff
int64_t function_16b8fe(void) {
    // 0x16b8fe
    int64_t result; // 0x16b8fe
    return result;
}

// Address range: 0x16b912 - 0x16b916
int64_t function_16b912(void) {
    // 0x16b912
    bool v1; // 0x16b912
    if (!v1) {
        function_16b8ae();
    }
    // 0x16b914
    return function_16b8fe();
}

// Address range: 0x16b99c - 0x16b99d
int64_t function_16b99c(void) {
    // 0x16b99c
    int64_t result; // 0x16b99c
    return result;
}

// Address range: 0x16b9a3 - 0x16b9a4
int64_t function_16b9a3(void) {
    // 0x16b9a3
    int64_t result; // 0x16b9a3
    return result;
}

// Address range: 0x16b9b1 - 0x16b9b9
int64_t function_16b9b1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 0x75f87532); // 0x16b9b1
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x16b9b1
    return result;
}

// Address range: 0x16b9b9 - 0x16b9f1
int64_t function_16b9b9(int64_t a1) {
    // 0x16b9b9
    *(char *)(a1 - 0x5e520bc6) = 0;
    function_30bdcd();
    int64_t v1 = __asm_sti(); // 0x16b9d7
    int64_t v2 = v1 & 132 | 123; // 0x16b9d8
    int64_t v3; // 0x16b9b9
    *(char *)v3 = *(char *)&v3 - 39;
    int32_t * v4 = (int32_t *)(v2 | v1 & -256); // 0x16b9e2
    *v4 = *v4 + 1;
    unsigned char v5 = llvm_ctpop_i8((char)v2 - 1); // 0x16b9e4
    char v6 = *(char *)(v3 - 117); // 0x16b9e9
    int64_t v7 = v1 & -0x10000 | (int64_t)((256 * (int16_t)v2 >> 8) * (int16_t)v6); // 0x16b9ec
    if (v5 % 2 == 0) {
        v7 = function_16b9a3();
    }
    // 0x16b9ee
    *(int32_t *)a1 = (int32_t)v7;
    return function_16b99c();
}

// Address range: 0x16ba2f - 0x16ba30
int64_t function_16ba2f(void) {
    // 0x16ba2f
    int64_t result; // 0x16ba2f
    return result;
}

// Address range: 0x16ba3d - 0x16ba3f
int64_t function_16ba3d(void) {
    // 0x16ba3d
    int64_t v1; // 0x16ba3d
    return function_16ba41(v1, v1, v1);
}

// Address range: 0x16ba3f - 0x16ba41
int64_t function_16ba3f(void) {
    // 0x16ba3f
    int64_t result; // 0x16ba3f
    return result;
}

// Address range: 0x16ba41 - 0x16ba72
int64_t function_16ba41(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16ba41
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1 = __asm_in(26); // 0x16ba45
    bool v2; // 0x16ba41
    if (v2) {
        v1 = function_16ba2f();
    }
    // 0x16ba47
    int64_t v3; // 0x16ba41
    int32_t * v4 = (int32_t *)(v3 - 0x52b7d7f8); // 0x16ba47
    int32_t v5 = a3; // 0x16ba47
    *v4 = *v4 + v5;
    int32_t * v6 = (int32_t *)v1; // 0x16ba4e
    *v6 = *v6 - v5;
    int64_t v7 = unknown_5c11b657((v2 ? -4 : 4) + a1); // 0x16ba51
    int32_t * v8 = (int32_t *)(v3 - 49); // 0x16ba62
    *v8 = (int32_t)v7 - 0x6bfe17ce & *v8;
    int64_t result = unknown_5f5dd56d(); // 0x16ba67
    char * v9 = (char *)(a2 + 0x1e8f197); // 0x16ba6c
    *v9 = *v9 + (char)result;
    return result;
}

// Address range: 0x16ba77 - 0x16ba7a
int64_t function_16ba77(void) {
    // 0x16ba77
    int64_t result; // 0x16ba77
    return result;
}

// Address range: 0x16babb - 0x16babc
int64_t function_16babb(void) {
    // 0x16babb
    int64_t result; // 0x16babb
    return result;
}

// Address range: 0x16bad2 - 0x16bad3
int64_t function_16bad2(void) {
    // 0x16bad2
    int64_t result; // 0x16bad2
    return result;
}

// Address range: 0x16bae8 - 0x16bae9
int64_t function_16bae8(void) {
    // 0x16bae8
    int64_t result; // 0x16bae8
    return result;
}

// Address range: 0x16baf3 - 0x16baf7
int64_t function_16baf3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16baf3
    return function_16babb();
}

// Address range: 0x16bb08 - 0x16bb60
int64_t function_16bb08(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = unknown_41074c0e() + 0xde67b38e; // 0x16bb0d
    int3_t v3; // 0x16bb08
    int3_t v4 = v3 - 1; // 0x16bb12
    __frontend_reg_store_fpr(v4, (float80_t)*(float32_t *)(a1 + 40 + a3));
    int32_t v5 = a2; // 0x16bb18
    *(int32_t *)a4 = (int32_t)a4 + v5;
    char v6 = v2 + a4 / 256; // 0x16bb1b
    *(char *)-0x4521035f2c2bd991 = v6;
    if (a4 != 0) {
        int64_t v7 = v1;
        *(char *)v7 = (char)v7;
        int64_t v8; // 0x16bb08
        int32_t * v9 = (int32_t *)(2 * v8); // 0x16bb38
        *v9 = *v9 + v5;
        int64_t v10 = v2 & 0xffffff00 | (int64_t)(*(char *)(a1 + 0xc8bc736) | v6 - 107); // 0x16bb3b
        __frontend_reg_store_fpr(v4, __frontend_reg_load_fpr(v4) * (float80_t)*(float32_t *)&v1);
        __asm_out_133(-24, (int32_t)v10);
        int32_t * v11 = (int32_t *)(v1 - 8); // 0x16bb45
        int32_t v12 = *v11 + (int32_t)v8; // 0x16bb45
        *v11 = v12;
        int64_t v13 = v10; // 0x16bb48
        if (v12 != 0) {
            v13 = function_16bad2();
        }
        // 0x16bb4a
        *(int64_t *)a1 = (int64_t)__frontend_reg_load_fpr(v4);
        float80_t v14 = __frontend_reg_load_fpr(v3); // 0x16bb4d
        __frontend_reg_store_fpr(v3, (float80_t)*(float32_t *)v13 / v14);
    }
    int64_t result = unknown_1ae4d75b(); // 0x16bb5c
    if (v1 == 0) {
        result = function_16bae8();
    }
    // 0x16bb5e
    return result;
}

// Address range: 0x16bb9d - 0x16bba4
int64_t function_16bb9d(void) {
    // 0x16bb9d
    return function_78aebd8c();
}

// Address range: 0x16bbaf - 0x16bbbc
int64_t function_16bbaf(void) {
    // 0x16bbaf
    int64_t v1; // 0x16bbaf
    int64_t v2 = v1;
    return (v2 + 25) % 256 | v2 & -256;
}

// Address range: 0x16bbff - 0x16bc09
int64_t function_16bbff(int64_t a1) {
    // 0x16bbff
    int64_t v1; // 0x16bbff
    int64_t v2 = v1;
    bool v3; // 0x16bbff
    return (v2 - (v3 ? 251 : 250)) % 256 | v2 & -256;
}

// Address range: 0x16bca2 - 0x16bca9
int64_t function_16bca2(void) {
    // 0x16bca2
    int64_t result; // 0x16bca2
    return result;
}

// Address range: 0x2a9375 - 0x2a9381
int64_t function_2a9375(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a9375
    int64_t v1; // 0x2a9375
    *(int32_t *)a1 = (int32_t)v1;
    int64_t result; // 0x2a9375
    int64_t v2 = result;
    *(char *)v2 = *(char *)&result + (char)v2;
    bool v3; // 0x2a9375
    char * v4 = (char *)(a1 + 5 + (v3 ? -4 : 4)); // 0x2a9378
    *v4 = *v4 + (char)a3;
    char * v5 = (char *)(result + 0x6800a8); // 0x2a937b
    *v5 = *v5 + (char)result;
    return result;
}

// Address range: 0x2a9384 - 0x2a9387
int64_t function_2a9384(void) {
    // 0x2a9384
    return function_2a931c();
}

// Address range: 0x2a93df - 0x2a93e3
int64_t function_2a93df(void) {
    // 0x2a93df
    int64_t result; // 0x2a93df
    return result;
}

// Address range: 0x2a9413 - 0x2a9414
int64_t function_2a9413(void) {
    // 0x2a9413
    int64_t result; // 0x2a9413
    return result;
}

// Address range: 0x2a9431 - 0x2a943a
int64_t function_2a9431(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a9431
    bool v1; // 0x2a9431
    if (!v1) {
        // 0x2a9433
        *(int32_t *)a2 = (int32_t)a4 + (int32_t)a2;
    }
    // 0x2a9437
    int64_t v2; // 0x2a9431
    *(int32_t *)a1 = (int32_t)v2;
    return function_2a9413();
}

// Address range: 0x2a943a - 0x2a9441
int64_t function_2a943a(int64_t a1) {
    // 0x2a943a
    int64_t result; // 0x2a943a
    return result;
}

// Address range: 0x2a951c - 0x2a951d
int64_t function_2a951c(void) {
    // 0x2a951c
    int64_t result; // 0x2a951c
    return result;
}

// Address range: 0x2a952e - 0x2a9539
int64_t function_2a952e(void) {
    // 0x2a952e
    return function_167f4cf();
}

// Address range: 0x2a953a - 0x2a9545
int64_t function_2a953a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a953a
    int64_t v1; // 0x2a953a
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    char * v3 = (char *)(v1 + 0x3d000002); // 0x2a953c
    *v3 = *v3 + (char)a4;
    int64_t result; // 0x2a953a
    int64_t v4 = result;
    *(int32_t *)v4 = *(int32_t *)&result + (int32_t)v4;
    return result;
}

// Address range: 0x2a9575 - 0x2a9578
int64_t function_2a9575(void) {
    // 0x2a9575
    int64_t result; // 0x2a9575
    return result;
}

// Address range: 0x2a959b - 0x2a95a7
int64_t function_2a959b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a959b
    return function_16795ce();
}

// Address range: 0x2a95c5 - 0x2a95d3
int64_t function_2a95c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a95c5
    int64_t v1; // 0x2a95c5
    return v1 & 0xffffffff;
}

// Address range: 0x2a9608 - 0x2a9609
int64_t function_2a9608(int64_t a1) {
    // 0x2a9608
    int64_t result; // 0x2a9608
    return result;
}

// Address range: 0x2a961f - 0x2a9627
int64_t function_2a961f(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 - 101); // 0x2a961f
    uint32_t v2 = *v1; // 0x2a961f
    uint32_t v3 = v2 + (int32_t)a2; // 0x2a961f
    *v1 = v3;
    int64_t v4; // 0x2a961f
    int32_t v5 = *(int32_t *)&v4; // 0x2a9622
    int64_t v6; // 0x2a961f
    *(int32_t *)a3 = v5 - (int32_t)v6 + (int32_t)(v3 < v2);
    int64_t v7; // 0x2a961f
    *(char *)a1 = *(char *)&v7;
    return function_2a968f();
}

// Address range: 0x2a962d - 0x2a9630
int64_t function_2a962d(void) {
    // 0x2a962d
    return function_2a9679();
}

// Address range: 0x2a9639 - 0x2a963c
int64_t function_2a9639(int64_t a1) {
    // 0x2a9639
    int64_t result; // 0x2a9639
    return result;
}

// Address range: 0x2a965d - 0x2a9660
int64_t function_2a965d(int64_t a1) {
    // 0x2a965d
    int64_t result; // 0x2a965d
    return result;
}

// Address range: 0x2a9679 - 0x2a9682
int64_t function_2a9679(void) {
    // 0x2a9679
    int64_t result; // 0x2a9679
    int32_t * v1 = (int32_t *)(result - 49); // 0x2a9679
    *v1 = 2 * *v1;
    char v2 = *(char *)-0x7455d7d; // 0x2a967c
    *(char *)-0x7455d7d = v2 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x2a968f - 0x2a9690
int64_t function_2a968f(void) {
    // 0x2a968f
    int64_t result; // 0x2a968f
    return result;
}

// Address range: 0x2a9695 - 0x2a9696
int64_t function_2a9695(void) {
    // 0x2a9695
    int64_t result; // 0x2a9695
    return result;
}

// Address range: 0x2a96c5 - 0x2a96fa
int64_t function_2a96c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    int32_t * v1 = (int32_t *)(a1 + 0x7523d90d); // 0x2a96c5
    int64_t v2; // 0x2a96c5
    *v1 = *v1 + (int32_t)v2;
    if (llvm_ctpop_i8((char)(v2 & a3)) % 2 == 0) {
        // 0x2a96d5
        __asm_int(10);
        return (result + 28) % 256 | result & -256;
    }
    char * v3 = (char *)result; // 0x2a96e3
    char v4 = v2 / 256; // 0x2a96e3
    *v3 = *v3 & v4;
    unsigned char v5 = *(char *)(a2 - 0xb5363f2); // 0x2a96e5
    char * v6 = (char *)(a3 - 0x7e8bf066); // 0x2a96ec
    *v6 = *v6 - (char)a4 + (char)(v5 > (char)v2);
    *(char *)-0x48d9a105 = *(char *)-0x48d9a105 + v4;
    return result;
}

// Address range: 0x2a96ff - 0x2a9700
int64_t function_2a96ff(void) {
    // 0x2a96ff
    int64_t result; // 0x2a96ff
    return result;
}

// Address range: 0x2a9700 - 0x2a970b
int64_t function_2a9700(int64_t a1, int64_t a2) {
    // 0x2a9700
    int64_t v1; // 0x2a9700
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 + 10); // 0x2a9700
    unsigned char v4 = *v3; // 0x2a9700
    unsigned char v5 = v4 + (char)(v2 / 256); // 0x2a9700
    *v3 = v5;
    char v6 = v2; // 0x2a9703
    char v7 = v5 < v4; // 0x2a9703
    char v8 = v6 + 119 + v7; // 0x2a9703
    *(char *)a1 = v8;
    int64_t result = v2 & -256 | (int64_t)v8; // 0x2a9708
    if (v8 < 0 != (v8 + v7 & (v6 ^ -128)) < 0) {
        result = function_2a96ff();
    }
    // 0x2a970a
    return result;
}

// Address range: 0x2a9713 - 0x2a9714
int64_t function_2a9713(void) {
    // 0x2a9713
    int64_t result; // 0x2a9713
    return result;
}

// Address range: 0x2a9748 - 0x2a9749
int64_t function_2a9748(int64_t a1) {
    // 0x2a9748
    int64_t result; // 0x2a9748
    return result;
}

// Address range: 0x2a9751 - 0x2a9754
int64_t function_2a9751(int64_t a1) {
    // 0x2a9751
    int64_t result; // 0x2a9751
    return result;
}

// Address range: 0x2f681e - 0x2f681f
int64_t function_2f681e(void) {
    // 0x2f681e
    int64_t result; // 0x2f681e
    return result;
}

// Address range: 0x2f68be - 0x2f68cb
int64_t function_2f68be(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f68be
    int64_t v1; // 0x2f68be
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 | -103;
    char * v3 = (char *)(a3 - 67); // 0x2f68c1
    char v4 = v2; // 0x2f68c1
    *v3 = *v3 + v4;
    *(char *)a1 = v4;
    bool v5; // 0x2f68be
    return unknown_ffffffff87788ccb((v5 ? -1 : 1) + a1);
}

// Address range: 0x2f6901 - 0x2f6904
int64_t function_2f6901(void) {
    // 0x2f6901
    int64_t result; // 0x2f6901
    return result;
}

// Address range: 0x2f6930 - 0x2f6955
int64_t function_2f6930(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_136e5536(); // 0x2f6930
    int16_t v2 = a3; // 0x2f693b
    bool v3; // 0x2f6930
    __asm_outsd(v2, *(int32_t *)((v3 ? -1 : 1) + a2));
    int64_t v4; // 0x2f6930
    int64_t v5 = (char)v4 < (char)v4 ? 0x1e8c423 : 0x1e8c422; // 0x2f693c
    int64_t v6 = (v1 + 256 * a3 & 0xff00 | v1 & 0xffff00ff) - v5; // 0x2f693c
    __asm_out(v2, (char)v6);
    int32_t * v7 = (int32_t *)((v6 & 0xffffffff) + 56); // 0x2f6944
    *v7 = *v7 + (int32_t)v6;
    return unknown_8266d52();
}

// Address range: 0x2f69d1 - 0x2f69d6
int64_t function_2f69d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f69d1
    return a3 & 0xffffffff;
}

// Address range: 0x2f69d8 - 0x2f6a8b
int64_t function_2f69d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2 = a2;
    int64_t result; // 0x2f69d8
    bool v3; // 0x2f69d8
    if (a4 != 1 != v3) {
        // 0x2f69da
        return result;
    }
    int32_t * v4 = (int32_t *)(a2 + 0x15b00089); // 0x2f69db
    *v4 = *v4 + (int32_t)a1;
    uint64_t v5 = result / 256; // 0x2f69e6
    if ((char)(v5 & result) != 0) {
        // 0x2f69ea
        int64_t v6; // 0x2f69d8
        *(char *)v6 = *(char *)&v6 / 2;
        *(char *)-0xf819eec = *(char *)-0xf819eec + (char)v5;
        *(char *)v1 = *(char *)&v1 - 6;
        return function_535763();
    }
    uint32_t v7 = (int32_t)result;
    *(int32_t *)result = v7 / 64 | 0x4000000 * v7;
    char v8 = *(char *)(result + 0x76357023); // 0x2f6a60
    *(char *)0x25f84672 = (char)v5 - v8 + *(char *)0x25f84672;
    uint64_t v9 = __asm_sti(); // 0x2f6a76
    unsigned char v10 = *(char *)(a1 - 0x524ac0f9); // 0x2f6a77
    int16_t v11 = a3 & 0xff00 | (int64_t)v10; // 0x2f6a80
    __asm_out_134(v11, (int32_t)v9);
    __asm_outsb(v11, *(char *)&v2);
    return 256 * (int64_t)((char)(v9 / 256) - v10) | v9 & -0xff01;
}

// Address range: 0x2f6a9b - 0x2f6ab1
int64_t function_2f6a9b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f6a9b
    int64_t v1; // 0x2f6a9b
    uint64_t v2 = v1;
    int32_t v3 = *(int32_t *)-0x36b2955c; // 0x2f6a9d
    int32_t * v4 = (int32_t *)(v1 - 112 + 2 * (v1 + (a3 & 0xff00) & 0xff00 | a3 & 0x7fffffffffff00ff)); // 0x2f6aa3
    *v4 = *v4 & -28;
    int64_t v5; // 0x2f6a9b
    *(int32_t *)(int64_t)(v3 & (int32_t)a1) = *(int32_t *)&v5;
    bool v6; // 0x2f6a9b
    unsigned char v7 = *(char *)(a2 - 5 + (v6 ? -4 : 4)); // 0x2f6aab
    return v2 % 256 * (int64_t)v7 | v2 & -0x10000;
}

// Address range: 0x2f6b53 - 0x2f6b58
int64_t function_2f6b53(void) {
    // 0x2f6b53
    return function_83f6d40();
}

// Address range: 0x2f6b5d - 0x2f6b5e
int64_t function_2f6b5d(int64_t a1) {
    // 0x2f6b5d
    int64_t result; // 0x2f6b5d
    return result;
}

// Address range: 0x2f6b61 - 0x2f6b66
int64_t function_2f6b61(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f6b61
    int64_t result; // 0x2f6b61
    return result;
}

// Address range: 0x2f6b79 - 0x2f6b7e
int64_t function_2f6b79(void) {
    // 0x2f6b79
    int64_t result; // 0x2f6b79
    return result;
}

// Address range: 0x2f6c04 - 0x2f6c1a
int64_t function_2f6c04(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f6c04
    int64_t v1; // 0x2f6c04
    int64_t result = v1 & -0xff01 | (int64_t)&g1; // 0x2f6c07
    char * v2 = (char *)(result + 0x1e8d74c); // 0x2f6c09
    *v2 = *v2 + 1;
    int32_t * v3 = (int32_t *)(a4 + 35); // 0x2f6c0f
    *v3 = 4 * *v3;
    return result;
}
