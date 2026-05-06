/*
 * Targeted RetDec C for native executable gap queue batch 271.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1065bf-0x1067bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1688aa-0x168aaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x168aaa-0x168caa rank=- name=- kind=- bytes=- uncovered=-
 *   0x168caa-0x168eaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x168eaa-0x1690aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1690aa-0x1692aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e28e8-0x1e2ae8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e2ae8-0x1e2ce8 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1065bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1065c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1067b6(void);
int64_t function_1688aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_168936(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_168ab8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_168bea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_168d4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_168f1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_169097(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16922f(void);
int64_t function_169230(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_169235(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16923d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1e28e8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1e2921(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e294e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e296c(void);
int64_t function_1e297f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e29a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1e29c3(void);
int64_t function_1e29c9(void);
int64_t function_1e29d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e2a00(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e2acb(void);
int64_t function_1e2aee(void);
int64_t function_1e2b14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e2b67(int64_t a1);
int64_t function_1e2b87(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e2b9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_206b8b6();
int64_t function_4a682cf3();
int64_t function_7f1d546();
int64_t function_c57b8();
int64_t function_caf2a();
int64_t unknown_102891d9();
int64_t unknown_105df81e();
int64_t unknown_3a291aaf();
int64_t unknown_3b01783f();
int64_t unknown_fdff34();
int64_t unknown_ffffffff8308366d();
int64_t unknown_ffffffff9ddab64c();
int64_t unknown_ffffffffbd1d3106();
int64_t unknown_ffffffffc8263b41();

// Address range: 0x1065bf - 0x1065c2
int64_t function_1065bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1065bf
    int64_t result; // 0x1065bf
    char * v1 = (char *)(result - 125); // 0x1065bf
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x1065c3 - 0x106660
int64_t function_1065c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1065c3
    int64_t v1; // 0x1065c3
    if ((char)((uint64_t)v1 / 256) == 0) {
        // 0x1065eb
        return function_caf2a();
    }
    // 0x1065c7
    return v1 ^ 36;
}

// Address range: 0x1067b6 - 0x1067b9
int64_t function_1067b6(void) {
    // 0x1067b6
    int64_t result; // 0x1067b6
    return result;
}

// Address range: 0x1688aa - 0x168936
int64_t function_1688aa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1688aa
    int64_t v1; // 0x1688aa
    return function_c57b8(a1, a2, a3, a4, v1, v1, v1, 0x17fec54b);
}

// Address range: 0x168936 - 0x168ab8
int64_t function_168936(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x168936
    int64_t v1; // 0x168936
    return function_c57b8(a1, a2, a3, a4, v1, v1, v1, (int64_t)&g4);
}

// Address range: 0x168ab8 - 0x168bea
int64_t function_168ab8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x168ab8
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x165744, (int64_t)&g4);
}

// Address range: 0x168bea - 0x168d4f
int64_t function_168bea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x168bea
    int64_t v1; // bp-32, 0x168bea
    int64_t v2 = (int64_t)&v1; // 0x168c59
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x168c61
    int64_t * v4 = (int64_t *)v3; // 0x168c6c
    *v4 = 0x3fb90128;
    int64_t v5 = v2 - 16; // 0x168c74
    int64_t * v6 = (int64_t *)v5; // 0x168c74
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x168c84
    int64_t v8 = *(int64_t *)(v2 + 24); // 0x168c8e
    *v6 = v8;
    *v7 = v3;
    int64_t v9 = *(int64_t *)(v2 + 8); // 0x168cae
    *v6 = v9;
    *v7 = 0x18ee6362;
    *(int64_t *)(v2 - 32) = v8;
    v1 = *v6;
    *v6 = v5;
    *v7 = v9;
    *(int64_t *)(v2 + 16) = *v6;
    *v6 = v2;
    *v4 = v1;
    *v6 = v1;
    int64_t v10; // 0x168bea
    return function_c57b8(a1, a2, a3, a4, a5, v10, 0x166782, 169);
}

// Address range: 0x168d4f - 0x168f1f
int64_t function_168d4f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x168d4f
    int64_t v1; // bp-48, 0x168d4f
    v1 = (int64_t)&v1 + 16;
    return function_c57b8(a1, a2, a3, a4, a5, a6, 0x166bee, (int64_t)&g4);
}

// Address range: 0x168f1f - 0x169097
int64_t function_168f1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x168f1f
    int64_t v1; // 0x168f1f
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x168f1f
    int64_t v3 = -0x36ba1c19 * v2 != -0x36ba1c1900000000 * v2 >> 32; // 0x168f25
    bool v4; // 0x168f1f
    int64_t result = function_c57b8(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | v3 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 2048 * v3 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | 4 * (int64_t)v4 | 2, (int64_t)&g4); // 0x169092
    return result;
}

// Address range: 0x169097 - 0x1691bd
int64_t function_169097(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x169097
    int64_t v1; // bp-40, 0x169097
    int64_t v2 = (int64_t)&v1; // 0x169110
    int64_t v3 = v2 - 8; // 0x169118
    int64_t * v4 = (int64_t *)v3; // 0x169118
    *v4 = a1;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x169119
    int64_t v6 = *v4; // 0x169120
    int64_t v7 = *(int64_t *)(v2 + 32); // 0x169121
    *v4 = v7;
    *v5 = v7;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x169128
    *v8 = v7;
    int64_t v9 = *(int64_t *)(v2 + 16); // 0x169137
    *v4 = v9;
    *v5 = v9;
    *v8 = v7;
    int64_t v10 = v2 + 8; // 0x169159
    *(int64_t *)v10 = *v4;
    *v4 = 0x7a5009c;
    *v8 = v9;
    *v5 = v9;
    *(int64_t *)(v2 + 24) = *v4;
    *v5 = v3;
    *v4 = v10;
    int64_t v11; // bp-48, 0x169097
    int64_t v12; // 0x169097
    int64_t result = function_c57b8(v6, a2, a3, a4, a5, v12, (int64_t)&v11, (int64_t)&g4); // 0x1691b8
    return result;
}

// Address range: 0x16922f - 0x169230
int64_t function_16922f(void) {
    // 0x16922f
    int64_t result; // 0x16922f
    return result;
}

// Address range: 0x169230 - 0x169235
int64_t function_169230(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x169230
    *v1 = *v1 | (char)a4;
    int64_t v2; // 0x169230
    return function_16923d(a1, a2, a3, a4, v2, v2, (int64_t)&g4);
}

// Address range: 0x169235 - 0x16923d
int64_t function_169235(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x169235
    int64_t v1; // 0x169235
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a1 + 28 + 4 * v2); // 0x169237
    *v3 = *v3 + (char)a4;
    return v2 & -164;
}

// Address range: 0x16923d - 0x1692a9
int64_t function_16923d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x16923d
    int64_t result; // 0x16923d
    return result;
}

// Address range: 0x1e28e8 - 0x1e2900
int64_t function_1e28e8(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1e28e8
    int64_t v1; // 0x1e28e8
    int32_t v2 = v1;
    int64_t v3 = 0x10000 * v2 >> 16; // 0x1e28e8
    *(int32_t *)v3 = v2 + (int32_t)v1;
    int64_t result = v3 & 0xffff00ff | (int64_t)&g2; // 0x1e28f0
    int32_t * v4 = (int32_t *)result; // 0x1e28f8
    *v4 = *v4 + (int32_t)a1;
    __asm_int(19);
    char * v5 = (char *)(4 * a3 + a1); // 0x1e28fc
    *v5 = *v5 + (char)(a3 / 256);
    return result;
}

// Address range: 0x1e2921 - 0x1e294e
int64_t function_1e2921(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1e2921
    int64_t v1; // 0x1e2921
    int64_t v2 = v1;
    unsigned char v3 = (char)a4 % 32; // 0x1e2922
    int64_t v4; // 0x1e2921
    if (v3 != 0) {
        v4 = v2 & -256 | (int64_t)((char)v2 >> v3);
    }
    int64_t v5 = 2 * v1; // 0x1e2924
    int32_t * v6 = (int32_t *)(a4 - 0x753b5996 + v5); // 0x1e2924
    int32_t v7 = a5; // 0x1e2924
    *v6 = *v6 + v7;
    int32_t * v8 = (int32_t *)(v5 - 0x660399f1 + v4); // 0x1e292d
    *v8 = *v8 + (int32_t)v4;
    int64_t result = unknown_3b01783f(); // 0x1e2939
    int32_t * v9 = (int32_t *)(a4 + 0xb5827c1); // 0x1e2945
    *v9 = *v9 + v7;
    return result;
}

// Address range: 0x1e294e - 0x1e295f
int64_t function_1e294e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e294e
    int64_t v1; // 0x1e294e
    int64_t result = v1;
    *(int32_t *)result = ((int32_t)v1 & -256 | 232) + (int32_t)result;
    *(char *)-0x73dfedea = *(char *)-0x73dfedea + 53;
    return result;
}

// Address range: 0x1e296c - 0x1e296d
int64_t function_1e296c(void) {
    // 0x1e296c
    int64_t result; // 0x1e296c
    return result;
}

// Address range: 0x1e297f - 0x1e29a8
int64_t function_1e297f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x64e23592); // 0x1e2989
    *v1 = *v1 + (int32_t)a4;
    int16_t v2 = a3; // 0x1e298f
    *(int32_t *)a1 = __asm_insd(v2);
    int64_t v3; // 0x1e297f
    __asm_outsb(v2, *(char *)&v3);
    int64_t v4; // 0x1e297f
    int64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 & (char)v5;
    int64_t v6; // 0x1e297f
    return function_206b8b6(((v6 & (int64_t)&g1) == 0 ? 4 : -4) + a1);
}

// Address range: 0x1e29a8 - 0x1e29b5
int64_t function_1e29a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    char * v1 = (char *)a6; // 0x1e29ac
    *v1 = *v1 + (char)a3;
    int64_t v2; // 0x1e29a8
    unsigned char v3 = (char)v2;
    __asm_out(-59, v3);
    *(char *)v2 = v3 / 128 | 2 * v3;
    return function_1e296c();
}

// Address range: 0x1e29c3 - 0x1e29c4
int64_t function_1e29c3(void) {
    // 0x1e29c3
    int64_t result; // 0x1e29c3
    return result;
}

// Address range: 0x1e29c9 - 0x1e29cc
int64_t function_1e29c9(void) {
    // 0x1e29c9
    int64_t result; // 0x1e29c9
    return result;
}

// Address range: 0x1e29d1 - 0x1e29d9
int64_t function_1e29d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e29d1
    bool v1; // 0x1e29d1
    if (a4 != 1 && !v1) {
        function_1e29c3();
    }
    // 0x1e29d3
    return unknown_102891d9();
}

// Address range: 0x1e2a00 - 0x1e2a0c
int64_t function_1e2a00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e2a00
    __asm_out_133((int16_t)a3, (char)unknown_ffffffffbd1d3106(a1, a2, a3));
    __asm_iretd();
    return function_7f1d546();
}

// Address range: 0x1e2acb - 0x1e2ace
int64_t function_1e2acb(void) {
    // 0x1e2acb
    int64_t result; // 0x1e2acb
    return result;
}

// Address range: 0x1e2aee - 0x1e2b0b
int64_t function_1e2aee(void) {
    // 0x1e2aee
    return function_4a682cf3(0xd0a2670a);
}

// Address range: 0x1e2b14 - 0x1e2b65
int64_t function_1e2b14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1e2b14
    unknown_105df81e();
    int64_t v1 = 2 * a1; // 0x1e2b24
    int64_t v2 = 0x4000 * a2; // 0x1e2b26
    int64_t v3; // 0x1e2b14
    int64_t v4 = (int64_t)&v3; // 0x1e2b29
    int32_t * v5 = (int32_t *)(v4 + a4); // 0x1e2b2a
    *v5 = *v5 + ((a2 & 0x40000) == 0 ? 58 : 59);
    int32_t v6 = v2; // 0x1e2b2e
    unknown_fdff34((int32_t)v1, v6, a5);
    unknown_ffffffffc8263b41();
    int64_t v7 = unknown_ffffffff9ddab64c(); // 0x1e2b46
    int32_t * v8 = (int32_t *)(a4 - 114); // 0x1e2b4b
    int32_t v9 = v7; // 0x1e2b4b
    *v8 = *v8 + v9;
    *(int32_t *)-0x17e74cc96054be06 = v9;
    int64_t v10; // 0x1e2b14
    int32_t * v11 = (int32_t *)(((v7 ^ v10) & 0xffffffff) + 110); // 0x1e2b5d
    *v11 = *v11 + v6;
    __asm_out_134((int16_t)a5, v9);
    int64_t result = function_1e2b9f(v1 & 0xfffffffe, v2 & 0xffffc000, a5, (a4 & 0xffff00ff | (int64_t)(int32_t)&g3) + v4 & 0xffffffff, v10, v10); // 0x1e2b63
    return result;
}

// Address range: 0x1e2b67 - 0x1e2b6f
int64_t function_1e2b67(int64_t a1) {
    // 0x1e2b67
    return unknown_ffffffff8308366d(a1);
}

// Address range: 0x1e2b87 - 0x1e2b9d
int64_t function_1e2b87(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e2b87
    int64_t result; // 0x1e2b87
    int32_t * v1 = (int32_t *)(result + 0x3c0ad879); // 0x1e2b87
    *v1 = *v1 + (int32_t)a4;
    int32_t * v2 = (int32_t *)(a3 + 0x2516a233 + 4 * result); // 0x1e2b94
    *v2 = *v2 + (int32_t)result;
    return result;
}

// Address range: 0x1e2b9f - 0x1e2ce6
int64_t function_1e2b9f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1e2b9f
    int64_t v1; // 0x1e2b9f
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a3;
    int64_t v2 = unknown_3a291aaf(); // 0x1e2ba9
    unsigned char v3 = (char)v2 ^ 17; // 0x1e2bb5
    if (v3 == 0) {
        // 0x1e2bbc
        bool v4; // 0x1e2b9f
        return 0x4000 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 70;
    }
    // 0x1e2bb9
    return v2 & -256 | (int64_t)v3;
}
