/*
 * Targeted RetDec C for native executable gap queue batch 310.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x16c2aa-0x16c4aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16c4aa-0x16c6aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16c6aa-0x16c8aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16c8aa-0x16caaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x16caaa-0x16ccaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x2aa175-0x2aa375 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2aa575-0x2aa775 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2aa775-0x2aa975 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_16c28d();
int64_t function_16c2aa(void);
int64_t function_16c2ae(void);
int64_t function_16c2c2(void);
int64_t function_16c2d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16c2e8(void);
int64_t function_16c300(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16c36a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16c372(void);
int64_t function_16c382(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_16c3ac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16c3d8(void);
int64_t function_16c3ee(void);
int64_t function_16c3f8(void);
int64_t function_16c41e(void);
int64_t function_16c432(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16c436(int64_t a1, int64_t a2);
int64_t function_16c43d(int64_t a1);
int64_t function_16c448(void);
int64_t function_16c454(int64_t a1, int64_t a2);
int64_t function_16c45b(int64_t a1);
int64_t function_16c469(void);
int64_t function_16c47c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16c484(void);
int64_t function_16c4e5(void);
int64_t function_16c516(void);
int64_t function_16c534(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16c59d(void);
int64_t function_16c683(void);
int64_t function_16c6a6(int64_t a1);
int64_t function_16c6f9(void);
int64_t function_16c70d(int64_t a1);
int64_t function_16c71b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16c739(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16c76a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16c7cb(void);
int64_t function_16c7dd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_16c81c(int64_t a1);
int64_t function_16c83f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16c90f(int64_t a1);
int64_t function_16c91d(void);
int64_t function_16c954(void);
int64_t function_16c98f(void);
int64_t function_16c99b(void);
int64_t function_16c9ac(void);
int64_t function_16c9d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16c9ea(void);
int64_t function_16c9f0(int64_t a1);
int64_t function_16ca23(int64_t a1);
int64_t function_16cb16(int64_t a1, int64_t a2);
int64_t function_16cb27(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16cb35(int64_t a1);
int64_t function_16cb44(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_16cb6e(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_16cc0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16cc34(int64_t a1, int64_t a2, int64_t a3);
int64_t function_16cc51(void);
int64_t function_16cc59(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24b582ed();
int64_t function_25ec52bb();
int64_t function_2aa144();
int64_t function_2aa175(int64_t a1, int64_t a2);
int64_t function_2aa180(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2aa1a8(void);
int64_t function_2aa1ad(void);
int64_t function_2aa1cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2aa1db(void);
int64_t function_2aa1ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2aa246(void);
int64_t function_2aa268(void);
int64_t function_2aa269(void);
int64_t function_2aa279(void);
int64_t function_2aa27b(void);
int64_t function_2aa280(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2aa28a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2aa2bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2aa30e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2aa55e();
int64_t function_2aa575(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2aa5e9(void);
int64_t function_2aa5f9(void);
int64_t function_2aa607(void);
int64_t function_2aa65e(void);
int64_t function_2aa664(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2aa682(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2aa6a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2aa727(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2aa849(void);
int64_t function_2aa8f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2aa90e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2aa929(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e50d7b3();
int64_t function_58d0ee00();
int64_t function_762c1c86();
int64_t function_7a23b();
int64_t function_ca22e4();
int64_t function_ffffffffea32ce2b();
int64_t function_fffffffff875dba6();
int64_t unknown_2ca5a398();
int64_t unknown_30b92c35();
int64_t unknown_4aab488f();
int64_t unknown_612170ba();
int64_t unknown_74a419f5();
int64_t unknown_db336fc();
int64_t unknown_f2c8aeb();
int64_t unknown_ffffffff822c89b3();
int64_t unknown_ffffffffc42e37ad();
int64_t unknown_ffffffffd43548cf();
int64_t unknown_fffffffff272486a();
int64_t unknown_fffffffffecc09b9();

// Address range: 0x16c2aa - 0x16c2ab
int64_t function_16c2aa(void) {
    // 0x16c2aa
    int64_t result; // 0x16c2aa
    return result;
}

// Address range: 0x16c2ae - 0x16c2b1
int64_t function_16c2ae(void) {
    // 0x16c2ae
    int64_t v1; // 0x16c2ae
    return function_16c300(v1, v1, v1);
}

// Address range: 0x16c2c2 - 0x16c2c8
int64_t function_16c2c2(void) {
    // 0x16c2c2
    int64_t result; // 0x16c2c2
    return result;
}

// Address range: 0x16c2d9 - 0x16c2e5
int64_t function_16c2d9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x16c2d9
    int64_t result; // 0x16c2d9
    *(char *)a4 = (char)result + (char)a4;
    char v1 = *(char *)0x11d0dee3; // 0x16c2dc
    *(char *)0x11d0dee3 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x16c2e8 - 0x16c2eb
int64_t function_16c2e8(void) {
    // 0x16c2e8
    int64_t result; // 0x16c2e8
    return result;
}

// Address range: 0x16c300 - 0x16c308
int64_t function_16c300(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16c300
    int64_t v1; // 0x16c300
    char * v2 = (char *)(v1 - 113); // 0x16c300
    unsigned char v3 = *v2; // 0x16c300
    unsigned char v4 = v3 + (char)a3; // 0x16c300
    *v2 = v4;
    if (v4 >= v3 && v4 != 0) {
        function_16c28d();
    }
    // 0x16c305
    return __asm_wait();
}

// Address range: 0x16c36a - 0x16c36f
int64_t function_16c36a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16c36a
    return function_16c3ac(a1, a2, a3);
}

// Address range: 0x16c372 - 0x16c373
int64_t function_16c372(void) {
    // 0x16c372
    int64_t result; // 0x16c372
    return result;
}

// Address range: 0x16c382 - 0x16c3ab
int64_t function_16c382(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x16c382
    int64_t v1; // 0x16c382
    *(int32_t *)a1 = (int32_t)v1 - 0x70fec300;
    char * v2 = (char *)((v1 & -256 | a3 / 256 % 256) + 0xc1b3816); // 0x16c38c
    *v2 = *v2 - 1;
    int64_t v3 = unknown_2ca5a398(); // 0x16c392
    int32_t * v4 = (int32_t *)(a3 + 0xdbe56fb); // 0x16c3a0
    int32_t v5 = *v4 + (int32_t)v3; // 0x16c3a0
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x16c3a0
    *v4 = v5;
    int64_t result = v3; // 0x16c3a6
    if (v6 % 2 == 0) {
        result = function_16c372();
    }
    // 0x16c3a8
    return result;
}

// Address range: 0x16c3ac - 0x16c3bc
int64_t function_16c3ac(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16c3ac
    int64_t v1; // 0x16c3ac
    int64_t v2 = v1;
    char v3 = *(char *)(a3 - 0x4a0fff98 + v1); // 0x16c3ac
    return v2 & -256 | (int64_t)(v3 & (char)v2);
}

// Address range: 0x16c3d8 - 0x16c3dd
int64_t function_16c3d8(void) {
    // 0x16c3d8
    return function_24b582ed();
}

// Address range: 0x16c3ee - 0x16c3ef
int64_t function_16c3ee(void) {
    // 0x16c3ee
    int64_t result; // 0x16c3ee
    return result;
}

// Address range: 0x16c3f8 - 0x16c3f9
int64_t function_16c3f8(void) {
    // 0x16c3f8
    int64_t result; // 0x16c3f8
    return result;
}

// Address range: 0x16c41e - 0x16c41f
int64_t function_16c41e(void) {
    // 0x16c41e
    int64_t result; // 0x16c41e
    return result;
}

// Address range: 0x16c432 - 0x16c436
int64_t function_16c432(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16c432
    return function_16c41e();
}

// Address range: 0x16c436 - 0x16c43a
int64_t function_16c436(int64_t a1, int64_t a2) {
    // 0x16c436
    int64_t v1; // 0x16c436
    *(char *)a1 = (char)v1;
    int64_t result; // 0x16c436
    bool v2; // 0x16c436
    if (v2) {
        result = function_16c3ee();
    }
    // 0x16c439
    return result;
}

// Address range: 0x16c43d - 0x16c43e
int64_t function_16c43d(int64_t a1) {
    // 0x16c43d
    int64_t result; // 0x16c43d
    return result;
}

// Address range: 0x16c448 - 0x16c44d
int64_t function_16c448(void) {
    // 0x16c448
    return function_ffffffffea32ce2b();
}

// Address range: 0x16c454 - 0x16c457
int64_t function_16c454(int64_t a1, int64_t a2) {
    // 0x16c454
    int64_t result; // 0x16c454
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x16c45b - 0x16c45f
int64_t function_16c45b(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 9); // 0x16c45b
    int64_t result; // 0x16c45b
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x16c469 - 0x16c46b
int64_t function_16c469(void) {
    // 0x16c469
    return function_16c3f8();
}

// Address range: 0x16c47c - 0x16c483
int64_t function_16c47c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x16c47c
    int64_t result; // 0x16c47c
    if (v1 != 0) {
        char * v2 = (char *)(result + 0x60a64134); // 0x16c47c
        unsigned char v3 = *v2; // 0x16c47c
        *v2 = v3 >> v1 | v3 << 8 - v1;
    }
    return result;
}

// Address range: 0x16c484 - 0x16c485
int64_t function_16c484(void) {
    // 0x16c484
    int64_t result; // 0x16c484
    return result;
}

// Address range: 0x16c4e5 - 0x16c4e6
int64_t function_16c4e5(void) {
    // 0x16c4e5
    int64_t result; // 0x16c4e5
    return result;
}

// Address range: 0x16c516 - 0x16c517
int64_t function_16c516(void) {
    // 0x16c516
    int64_t result; // 0x16c516
    return result;
}

// Address range: 0x16c534 - 0x16c55f
int64_t function_16c534(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16c534
    int64_t result; // 0x16c534
    return result;
}

// Address range: 0x16c59d - 0x16c5a1
int64_t function_16c59d(void) {
    // 0x16c59d
    int64_t result; // 0x16c59d
    return result;
}

// Address range: 0x16c683 - 0x16c688
int64_t function_16c683(void) {
    // 0x16c683
    return function_58d0ee00();
}

// Address range: 0x16c6a6 - 0x16c6b4
int64_t function_16c6a6(int64_t a1) {
    char v1 = *(char *)-0x67f1524f; // 0x16c6aa
    int64_t v2; // 0x16c6a6
    *(char *)-0x67f1524f = v1 + (char)((uint64_t)v2 / 256);
    return __asm_int1(a1);
}

// Address range: 0x16c6f9 - 0x16c6fa
int64_t function_16c6f9(void) {
    // 0x16c6f9
    int64_t result; // 0x16c6f9
    return result;
}

// Address range: 0x16c70d - 0x16c714
int64_t function_16c70d(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 0x56f80966); // 0x16c70d
    int64_t result; // 0x16c70d
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x16c71b - 0x16c721
int64_t function_16c71b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16c71b
    return function_16c76a(a1, a2, a3, a4);
}

// Address range: 0x16c739 - 0x16c748
int64_t function_16c739(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x16c73f
    if (v1 != 0) {
        unsigned char v2 = (char)a2;
        *(char *)a2 = v2 << 8 - v1 | v2 >> v1;
    }
    int64_t v3; // 0x16c739
    int64_t v4 = 0x40f013d * (0x100000000 * v3 >> 32); // 0x16c739
    char * v5 = (char *)(v3 - 0x1716f139); // 0x16c741
    *v5 = (char)v4;
    return v4 & 0xffffff00 | (int64_t)*v5;
}

// Address range: 0x16c76a - 0x16c780
int64_t function_16c76a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16c76a
    int64_t v1; // 0x16c76a
    int32_t v2 = v1; // 0x16c76a
    bool v3; // 0x16c76a
    *(int32_t *)a2 = v2 + (int32_t)v1 + (int32_t)v3;
    __asm_out_134((int16_t)a3, v2);
    char * v4 = (char *)(8 * v1 + a4); // 0x16c773
    char v5 = *v4 & (char)v1; // 0x16c773
    *v4 = v5;
    int64_t v6; // 0x16c76a
    if (v5 >= 0) {
        v6 = function_16c6f9();
    }
    // 0x16c779
    return (v6 ^ 0xeb782fa9) + a1 & 0xffffffff;
}

// Address range: 0x16c7cb - 0x16c7d7
int64_t function_16c7cb(void) {
    // 0x16c7cb
    int64_t v1; // 0x16c7cb
    uint64_t v2 = v1;
    return v2 % 256 * (int64_t)*(char *)(v1 - 65) | v2 & -0x10000;
}

// Address range: 0x16c7dd - 0x16c80b
int64_t function_16c7dd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x16c7dd
    int64_t v1; // 0x16c7dd
    int64_t v2 = v1;
    *(int32_t *)0x78b7b6ef = *(int32_t *)0x78b7b6ef + (int32_t)v1;
    int32_t * v3 = (int32_t *)(a4 - 0x6ffb1dd0); // 0x16c7f0
    *v3 = *v3 - 0x360f7000;
    *(int32_t *)a1 = (int32_t)(v2 + a4 / 256 & 83 | v2 & 0xffffff00) | 172;
    bool v4; // 0x16c7dd
    return function_762c1c86((v4 ? -4 : 4) + a1);
}

// Address range: 0x16c81c - 0x16c81d
int64_t function_16c81c(int64_t a1) {
    // 0x16c81c
    int64_t result; // 0x16c81c
    return result;
}

// Address range: 0x16c83f - 0x16c8c6
int64_t function_16c83f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x16c83f
    bool v3; // 0x16c83f
    if (v3) {
        int32_t * v4 = (int32_t *)(a2 + 33); // 0x16c8c3
        *v4 = *v4 + (int32_t)a1;
        return v2 & 0xffffffff;
    }
    // 0x16c845
    *(char *)a4 = (char)(v2 ^ a4);
    char * v5 = (char *)(a4 + 61); // 0x16c847
    *v5 = *v5 + (char)a4;
    *(char *)a1 = *(char *)&v1;
    return a3 & 0xffff00ff | (int64_t)(int32_t)&g2;
}

// Address range: 0x16c90f - 0x16c912
int64_t function_16c90f(int64_t a1) {
    // 0x16c90f
    int64_t result; // 0x16c90f
    return result;
}

// Address range: 0x16c91d - 0x16c920
int64_t function_16c91d(void) {
    // 0x16c91d
    int64_t result; // 0x16c91d
    return result;
}

// Address range: 0x16c954 - 0x16c955
int64_t function_16c954(void) {
    // 0x16c954
    int64_t result; // 0x16c954
    return result;
}

// Address range: 0x16c98f - 0x16c994
int64_t function_16c98f(void) {
    // 0x16c98f
    return function_ca22e4();
}

// Address range: 0x16c99b - 0x16c99c
int64_t function_16c99b(void) {
    // 0x16c99b
    int64_t result; // 0x16c99b
    return result;
}

// Address range: 0x16c9ac - 0x16c9ae
int64_t function_16c9ac(void) {
    // 0x16c9ac
    return __asm_iretd();
}

// Address range: 0x16c9d6 - 0x16c9e7
int64_t function_16c9d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16c9d6
    int64_t v1; // 0x16c9d6
    int32_t * v2 = (int32_t *)(v1 + a3); // 0x16c9d6
    *v2 = *v2 + (int32_t)v1;
    __asm_out_135(-33, (char)v1);
    int64_t v3; // 0x16c9d6
    uint32_t v4 = *(int32_t *)&v3; // 0x16c9db
    bool v5; // 0x16c9d6
    int64_t v6 = (v5 ? -4 : 4) + a1; // 0x16c9db
    int64_t result = v1 & -0xff01 | (int64_t)"PERAND_SIZE"; // 0x16c9dc
    int32_t * v7 = (int32_t *)(v6 - 0x60f8294c); // 0x16c9de
    *v7 = *v7 + (int32_t)v6 + (int32_t)(v4 > (int32_t)v1);
    *(char *)v6 = (char)result;
    return result;
}

// Address range: 0x16c9ea - 0x16c9ec
int64_t function_16c9ea(void) {
    // 0x16c9ea
    return function_16c99b();
}

// Address range: 0x16c9f0 - 0x16c9f5
int64_t function_16c9f0(int64_t a1) {
    // 0x16c9f0
    int64_t v1; // 0x16c9f0
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x16ca23 - 0x16ca25
int64_t function_16ca23(int64_t a1) {
    // 0x16ca23
    int64_t result; // 0x16ca23
    return result;
}

// Address range: 0x16cb16 - 0x16cb25
int64_t function_16cb16(int64_t a1, int64_t a2) {
    // 0x16cb16
    bool v1; // 0x16cb16
    int64_t v2 = v1 ? -4 : 4; // 0x16cb1f
    return function_fffffffff875dba6(v2 + a1, v2 + a2);
}

// Address range: 0x16cb27 - 0x16cb35
int64_t function_16cb27(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16cb27
    int64_t v1; // 0x16cb27
    int32_t * v2 = (int32_t *)(v1 + 46); // 0x16cb27
    *v2 = *v2 + (int32_t)a1;
    int64_t v3; // 0x16cb27
    *(char *)a2 = *(char *)&v3 + (char)a4;
    *(char *)a1 = *(char *)&v3;
    bool v4; // 0x16cb27
    int64_t v5 = v4 ? -1 : 1; // 0x16cb2c
    __asm_in_136((int16_t)a3);
    char * v6 = (char *)(v1 + 88); // 0x16cb2f
    *v6 = *v6 ^ (char)a3;
    return function_16cb44(v5 + a1, v5 + a2, a3, a4);
}

// Address range: 0x16cb35 - 0x16cb3f
int64_t function_16cb35(int64_t a1) {
    // 0x16cb35
    int64_t v1; // 0x16cb35
    int64_t v2 = v1;
    return (v2 | 21) + 34 & 32 | v2 & -256;
}

// Address range: 0x16cb44 - 0x16cb52
int64_t function_16cb44(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    uint64_t v1 = a4 % 64; // 0x16cb44
    int64_t result; // 0x16cb44
    if (v1 != 0) {
        int64_t * v2 = (int64_t *)(result - 0x1f897700); // 0x16cb44
        *v2 = *v2 << v1;
    }
    char * v3 = (char *)(a4 + 51); // 0x16cb4b
    *v3 = *v3 + 64;
    return result;
}

// Address range: 0x16cb6e - 0x16cc0e
int64_t function_16cb6e(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x16cb6e
    int64_t v1; // 0x16cb6e
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3 = v1 / 256; // 0x16cb77
    unsigned char v4 = (char)v3; // 0x16cb77
    unsigned char v5 = (char)v1; // 0x16cb77
    int64_t v6; // 0x16cb6e
    if (v4 != v5) {
        char v7 = *(char *)&v6; // 0x16cb75
        int64_t v8; // bp-8, 0x16cb6e
        *(int32_t *)0x5c9d030c0bbce819 = (int32_t)(int64_t)&v8;
        int32_t v9 = *(int32_t *)0x27a007a; // 0x16cba3
        *(int32_t *)0x27a007a = v9 & (int32_t)(256 * (int64_t)(v7 & (char)(a3 / 256)) | a3 & 0xffff00ff);
        return 0x13d006e;
    }
    if (v3 < v1) {
        // 0x16cbe0
        return 0x10000 * (int32_t)v6 >> 16;
    }
    int64_t v10 = unknown_74a419f5(); // 0x16cbef
    *(int32_t *)0x13d003a794b9bec = (int32_t)v10;
    return v10 - (v4 < v5 ? 0x11f707 : 0x11f706) & 0xffffff6f;
}

// Address range: 0x16cc0f - 0x16cc34
int64_t function_16cc0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16cc0f
    int64_t v1; // 0x16cc0f
    bool v2; // 0x16cc0f
    int64_t v3 = v1 + a1 + (int64_t)v2; // 0x16cc0f
    uint64_t v4 = v1 + (a4 & -256);
    int64_t v5 = v4 & 0xff00 | a4 & -0xff01; // 0x16cc12
    *(int32_t *)-0x4df53fe5 = (int32_t)v3;
    char * v6 = (char *)(v5 - 50); // 0x16cc1c
    *v6 = *v6 & (char)(v4 / 256);
    int32_t * v7 = (int32_t *)v5; // 0x16cc20
    *v7 = *v7 | (int32_t)a2;
    return function_2e50d7b3(v3, 0x9c013dfc);
}

// Address range: 0x16cc34 - 0x16cc4e
int64_t function_16cc34(int64_t a1, int64_t a2, int64_t a3) {
    // 0x16cc34
    int64_t result; // 0x16cc34
    int32_t * v1 = (int32_t *)(result - 0x18fe1724); // 0x16cc3a
    int32_t v2 = result; // 0x16cc3a
    *v1 = *v1 + v2;
    __asm_out_134((int16_t)a3, v2);
    return result;
}

// Address range: 0x16cc51 - 0x16cc52
int64_t function_16cc51(void) {
    // 0x16cc51
    int64_t result; // 0x16cc51
    return result;
}

// Address range: 0x16cc59 - 0x16cc90
int64_t function_16cc59(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16cc59
    int64_t v1; // 0x16cc59
    *(char *)0x5071e7b39d68794f = (char)v1;
    __asm_out_134((int16_t)a3, (int32_t)v1);
    char v2 = *(char *)0x2fcccf79; // 0x16cc72
    char v3 = v1 / 256; // 0x16cc72
    char v4 = v2 + v3; // 0x16cc72
    *(char *)0x2fcccf79 = v4;
    int64_t v5 = v1 & 0xffffffff; // 0x16cc78
    if (((v4 ^ v2) & (v4 ^ v3)) < 0) {
        v5 = function_16cc51();
    }
    // 0x16cc7a
    return v5 + 0x7b890068 & 0xffffffff;
}

// Address range: 0x2aa175 - 0x2aa17f
int64_t function_2aa175(int64_t a1, int64_t a2) {
    function_2aa144();
    // 0x2aa177
    int64_t v1; // 0x2aa175
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a2;
    return __asm_wait();
}

// Address range: 0x2aa180 - 0x2aa18f
int64_t function_2aa180(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2aa180
    return unknown_4aab488f(a1, a2, a3, a4);
}

// Address range: 0x2aa1a8 - 0x2aa1a9
int64_t function_2aa1a8(void) {
    // 0x2aa1a8
    int64_t result; // 0x2aa1a8
    return result;
}

// Address range: 0x2aa1ad - 0x2aa1be
int64_t function_2aa1ad(void) {
    // 0x2aa1ad
    unknown_ffffffff822c89b3();
    int64_t v1 = __asm_int3(); // 0x2aa1b2
    int64_t v2; // 0x2aa1ad
    bool v3; // 0x2aa1ad
    return (v2 + (int64_t)v3 + v1) % 256 | v1 & -256;
}

// Address range: 0x2aa1cc - 0x2aa1d3
int64_t function_2aa1cc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2aa1cc
    return function_7a23b();
}

// Address range: 0x2aa1db - 0x2aa1dc
int64_t function_2aa1db(void) {
    // 0x2aa1db
    int64_t result; // 0x2aa1db
    return result;
}

// Address range: 0x2aa1ec - 0x2aa22e
int64_t function_2aa1ec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2aa1ec
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int64_t v1; // 0x2aa1ec
    uint32_t v2 = (int32_t)v1; // 0x2aa1f6
    int32_t v3 = v2 + 0x303403ff; // 0x2aa1f6
    if (v2 < 0xcfcbfc01 || v3 == 0) {
        char * v4 = (char *)(a4 + 0x1aef56a6); // 0x2aa202
        *v4 = *v4 + (char)((uint64_t)v1 / 256);
        return (int64_t)&g1;
    }
    int64_t v5 = (v1 & -0xff01 | 0x8000 * (int64_t)(v3 < 0) | 0x1000 * (int64_t)(v2 % 16 > 16) | 1024 * (int64_t)(llvm_ctpop_i8((char)v3) % 2 == 0) | 512) - 0xaa64e86f; // 0x2aa21b
    int64_t v6 = v5 & 0xffffffff; // 0x2aa225
    if ((int32_t)v5 >= 0xfe013de1) {
        v6 = function_2aa1a8();
    }
    // 0x2aa227
    return (v6 | a2) & 0xffffffff;
}

// Address range: 0x2aa246 - 0x2aa24a
int64_t function_2aa246(void) {
    // 0x2aa246
    int64_t result; // 0x2aa246
    return result;
}

// Address range: 0x2aa268 - 0x2aa269
int64_t function_2aa268(void) {
    // 0x2aa268
    int64_t result; // 0x2aa268
    return result;
}

// Address range: 0x2aa269 - 0x2aa275
int64_t function_2aa269(void) {
    // 0x2aa269
    int64_t v1; // 0x2aa269
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + 1;
    return function_25ec52bb();
}

// Address range: 0x2aa279 - 0x2aa27a
int64_t function_2aa279(void) {
    // 0x2aa279
    int64_t result; // 0x2aa279
    return result;
}

// Address range: 0x2aa27b - 0x2aa280
int64_t function_2aa27b(void) {
    // 0x2aa27b
    int64_t v1; // 0x2aa27b
    int32_t * v2 = (int32_t *)(v1 - 28); // 0x2aa27b
    *v2 = *v2 | (int32_t)v1;
    return function_2aa28a(v1, v1, v1, v1);
}

// Address range: 0x2aa280 - 0x2aa28a
int64_t function_2aa280(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2aa280
    int64_t result; // 0x2aa280
    return result;
}

// Address range: 0x2aa28a - 0x2aa2ae
int64_t function_2aa28a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2aa28a
    int64_t v1; // 0x2aa28a
    __asm_out((int16_t)a3, (char)v1);
    *(int32_t *)a4 = (int32_t)v1 + 14;
    int32_t v2 = __asm_in_137(7); // 0x2aa297
    return (int64_t)(((v2 | 244) + 232) % 256) | (int64_t)(v2 & -256);
}

// Address range: 0x2aa2bb - 0x2aa2fe
int64_t function_2aa2bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2aa2bb
    *(char *)-0x177d37b5 = *(char *)-0x177d37b5 | (char)a4;
    int32_t * v1 = (int32_t *)(a2 - 0x3aff4578); // 0x2aa2db
    int64_t v2; // 0x2aa2bb
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x2aa2bb
    char v4 = *(char *)&v3; // 0x2aa2e1
    unknown_f2c8aeb();
    int64_t v5 = (int64_t)*(int32_t *)-0x6a7db30b; // 0x2aa2ea
    if (v4 - (char)v2 < 0 != 0x65f13025 * v5 != 0x65f1302500000000 * v5 >> 32) {
        function_2aa279();
    }
    // 0x2aa2f6
    return unknown_db336fc();
}

// Address range: 0x2aa30e - 0x2aa374
int64_t function_2aa30e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2aa30e
    int64_t v1; // 0x2aa30e
    int64_t v2 = v1;
    bool v3; // 0x2aa30e
    *(char *)v2 = (char)v1 + (char)v2 + (char)v3;
    *(int32_t *)-0x5062d6a5ccfe172d = (int32_t)a3;
    return a3 & 0xffffffff;
}

// Address range: 0x2aa575 - 0x2aa5de
int64_t function_2aa575(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2aa575
    int64_t v1; // 0x2aa575
    uint64_t v2 = v1;
    int64_t v3 = a1;
    int64_t v4 = v2 ^ a3;
    int32_t v5 = v4; // 0x2aa575
    char v6 = v4; // 0x2aa575
    bool v7; // 0x2aa575
    int64_t v8 = 64 * (int64_t)(v5 == 0) | 128 * (int64_t)(v5 < 0) | 4 * (int64_t)(llvm_ctpop_i8(v6) % 2 == 0) | 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | 2; // bp-8, 0x2aa577
    char * v9 = (char *)(8 * a4 + (a2 & 0xffffffff)); // 0x2aa58c
    unsigned char v10 = (char)a2; // 0x2aa58c
    *v9 = *v9 + v10;
    unsigned char v11 = (char)(v2 / 256); // 0x2aa58f
    unsigned char v12 = *(char *)(a4 - 123); // 0x2aa58f
    char v13 = v12 > v11; // 0x2aa592
    int64_t v14; // 0x2aa575
    unsigned char v15 = *(char *)&v14 + v13; // 0x2aa592
    unsigned char v16 = v10 - v15; // 0x2aa592
    if (a4 != 1 == v16 == 0) {
        // 0x2aa5d3
        return function_2aa55e();
    }
    bool v17 = v12 > v11 ? v15 != -1 | v16 - v13 > v10 : v15 > v10; // 0x2aa592
    __asm_out((int16_t)v4, v16);
    int32_t v18 = *(int32_t *)&v3; // 0x2aa598
    *(int32_t *)v3 = v18 - ((int32_t)v17 | (int32_t)(int64_t)&v8);
    *(char *)0x28beb4a1 = *(char *)0x28beb4a1 + v11;
    int32_t * v19 = (int32_t *)((a2 & 0xffffff00 | (int64_t)v16) + 1); // 0x2aa5a0
    *v19 = *v19 ^ (int32_t)v3;
    *(char *)v3 = v16 + v6;
    return __asm_sti(v3 + (v7 ? -1 : 1));
}

// Address range: 0x2aa5e9 - 0x2aa5ec
int64_t function_2aa5e9(void) {
    // 0x2aa5e9
    int64_t result; // 0x2aa5e9
    return result;
}

// Address range: 0x2aa5f9 - 0x2aa5fc
int64_t function_2aa5f9(void) {
    // 0x2aa5f9
    int64_t result; // 0x2aa5f9
    return result;
}

// Address range: 0x2aa607 - 0x2aa608
int64_t function_2aa607(void) {
    // 0x2aa607
    int64_t result; // 0x2aa607
    return result;
}

// Address range: 0x2aa65e - 0x2aa65f
int64_t function_2aa65e(void) {
    // 0x2aa65e
    int64_t result; // 0x2aa65e
    return result;
}

// Address range: 0x2aa664 - 0x2aa66b
int64_t function_2aa664(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_fffffffff272486a(a1, a2, a3); // 0x2aa664
    int64_t v1; // 0x2aa664
    *(char *)a1 = (char)v1;
    return result;
}

// Address range: 0x2aa682 - 0x2aa69a
int64_t function_2aa682(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2aa682
    int64_t v1; // 0x2aa682
    int32_t * v2 = (int32_t *)(v1 + 0xb6c3816); // 0x2aa686
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x2aa682
    *(int32_t *)a1 = *(int32_t *)&v3 + (int32_t)a2;
    uint64_t v4 = a4 - 1; // 0x2aa695
    int64_t v5 = v1 & -256 | a4 / 256 % 256; // 0x2aa695
    if (v4 != 0) {
        v5 = function_2aa65e();
    }
    int64_t v6 = v5;
    return (v6 + v4 / 256) % 256 | v6 & -256;
}

// Address range: 0x2aa6a6 - 0x2aa723
int64_t function_2aa6a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2aa6a6
    int64_t v1; // 0x2aa6a6
    int32_t * v2 = (int32_t *)(v1 + 0x60409c94); // 0x2aa6a9
    *v2 = *v2 + ((int32_t)v1 | 232);
    int64_t v3 = unknown_fffffffffecc09b9(); // 0x2aa6b3
    *(char *)0x353a9177224601e8 = (char)v3;
    __asm_out_133(94, (int32_t)v3);
    int64_t v4; // 0x2aa6a6
    __asm_outsd((int16_t)a3, *(int32_t *)&v4);
    int64_t result = unknown_ffffffffd43548cf(); // 0x2aa6c9
    int64_t v5; // 0x2aa6a6
    uint64_t v6 = v5;
    *(char *)v6 = *(char *)&v5 + (char)(v6 / 256);
    return result;
}

// Address range: 0x2aa727 - 0x2aa7bb
int64_t function_2aa727(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2aa727
    int64_t v1; // 0x2aa727
    int64_t v2 = v1;
    int64_t v3 = a3;
    bool v4; // 0x2aa727
    int64_t v5 = (v4 ? -4 : 4) + a2; // 0x2aa727
    int64_t v6 = v5; // 0x2aa727
    int64_t v7 = a4 - 1; // 0x2aa728
    if (v7 != 0 && !v4) {
        int32_t * v8 = (int32_t *)v7; // 0x2aa73d
        *v8 = *v8 + (int32_t)v5;
        *(char *)v3 = *(char *)&v3 + (char)v1;
        return v1 & 0xffffffff;
    }
    int64_t v9 = __asm_int1((int64_t)&g3); // 0x2aa72a
    char v10 = (char)v9 + (char)a3; // 0x2aa72b
    v3 = a3 & -256 | (int64_t)v10;
    if (v10 < 0) {
        // 0x2aa72f
        return unknown_30b92c35();
    }
    int32_t * v11 = (int32_t *)(8 * a1 - 0x13c529b2); // 0x2aa74e
    *v11 = *v11 + (int32_t)v2;
    int32_t v12 = v9; // 0x2aa755
    *(int32_t *)0x1e8a9380038dfc7 = v12;
    *(int32_t *)-0x175b42af1e71c2f7 = v12;
    uint32_t v13 = *(int32_t *)0xabe53aee; // 0x2aa76c
    int32_t v14 = v1 - v9; // 0x2aa76c
    uint32_t v15 = v13 + v14; // 0x2aa76c
    *(int32_t *)0xabe53aee = v15;
    char v16 = *(char *)&v6; // 0x2aa76f
    int32_t * v17 = (int32_t *)(v3 - 0x62077cfe); // 0x2aa771
    int32_t v18; // 0x2aa727
    *v17 = (int32_t)(int64_t)&v18;
    *(int32_t *)0x3a2c8f8e = *(int32_t *)0x3a2c8f8e + (int32_t)v3;
    *(int32_t *)0x50e53b25 = *(int32_t *)0x50e53b25 + *v17;
    *(int32_t *)-0x54de98db856b8bf6 = v12 | 0x77f63ab;
    int32_t v19 = *(int32_t *)(v2 & -256 | (int64_t)((char)v2 - v16 + (char)(v15 < v13))); // 0x2aa79f
    unknown_ffffffffc42e37ad(0xabe53a95);
    *(int32_t *)0xabe53a5b = *(int32_t *)0xabe53a5b & v14;
    return unknown_612170ba() | (int64_t)((v19 + 232) % 256);
}

// Address range: 0x2aa849 - 0x2aa84c
int64_t function_2aa849(void) {
    // 0x2aa849
    int64_t result; // 0x2aa849
    return result;
}

// Address range: 0x2aa8f3 - 0x2aa8f9
int64_t function_2aa8f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2aa8f3
    int64_t result; // 0x2aa8f3
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x2aa90e - 0x2aa913
int64_t function_2aa90e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2aa90e
    int64_t result; // 0x2aa90e
    return result;
}

// Address range: 0x2aa929 - 0x2aa932
int64_t function_2aa929(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2aa929
    int64_t result; // 0x2aa929
    return result;
}
