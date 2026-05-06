/*
 * Targeted RetDec C for native executable gap queue batch 492.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2ca307-0x2ca507 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ca507-0x2ca707 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ca707-0x2ca907 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ca907-0x2cab07 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2cab07-0x2cad07 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4738ee-0x473aee rank=- name=- kind=- bytes=- uncovered=-
 *   0x473aee-0x473cee rank=- name=- kind=- bytes=- uncovered=-
 *   0x473cee-0x473eee rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2ca307(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ca329(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ca47d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2ca5fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2ca742(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2ca88f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2ca9f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2cab00(int64_t a1, int64_t a2);
int64_t function_2cac6f(int64_t a1);
int64_t function_2cac81(int64_t a1);
int64_t function_2cd962c8();
int64_t function_4738ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_47390b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_47393b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_473ace(void);
int64_t function_473ae1(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_473b00(int64_t a1);
int64_t function_473b57(void);
int64_t function_473b5f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_473bab(int64_t a1, int64_t a2, int64_t a3);
int64_t function_473be5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_473ca5(void);
int64_t function_473ca6(void);
int64_t function_473cbf(void);
int64_t function_473cde(int64_t a1);
int64_t function_473cf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_473d0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_473d3a(int64_t a1);
int64_t function_473d4f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_473d90(int64_t a1, int64_t a2);
int64_t function_473da9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_473e89(void);
int64_t function_473e9a(void);
int64_t function_473edd(int64_t a1);
int64_t function_5cb8b332();
int64_t function_cf3c7();
int64_t function_ffffffff9cd84f6a();
int64_t function_ffffffffdf5e7a57();

// Address range: 0x2ca307 - 0x2ca329
int64_t function_2ca307(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ca307
    int64_t v1; // 0x2ca307
    return function_cf3c7(a1, a2, a3, a4, v1, a4);
}

// Address range: 0x2ca329 - 0x2ca47d
int64_t function_2ca329(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ca329
    int64_t v1; // bp-48, 0x2ca329
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x2ca329
    return function_cf3c7(a1, a2, a3, a4, v2, v2);
}

// Address range: 0x2ca47d - 0x2ca5fc
int64_t function_2ca47d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2ca47d
    int64_t v1; // bp-24, 0x2ca47d
    int64_t v2 = (int64_t)&v1; // 0x2ca5d3
    int64_t v3 = v2 + 16; // 0x2ca5d9
    v1 = v3;
    *(int64_t *)(v2 + 8) = *(int64_t *)v3;
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x2ca5fc - 0x2ca742
int64_t function_2ca5fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2ca5fc
    int64_t v1; // bp-32, 0x2ca5fc
    int64_t v2 = (int64_t)&v1; // 0x2ca660
    int64_t v3 = v2 - 8; // 0x2ca67b
    int64_t * v4 = (int64_t *)v3; // 0x2ca67b
    *v4 = 0x1694268b;
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x2ca68d
    int64_t v6 = *(int64_t *)(v2 + 24); // 0x2ca693
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x2ca693
    *v7 = v6;
    *v5 = v6;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x2ca69a
    *v8 = v6;
    int64_t * v9 = (int64_t *)(v2 + 8); // 0x2ca6a6
    int64_t v10 = *v9; // 0x2ca6a6
    *v7 = v10;
    *v5 = v3;
    *(int64_t *)(v2 - 40) = v6;
    *v8 = v6;
    *v4 = *v5;
    *v8 = v10;
    *v9 = v10;
    int64_t v11 = *v7; // 0x2ca701
    *v5 = v11;
    *v8 = v11;
    *v5 = *v4;
    *v7 = v2;
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x2ca742 - 0x2ca88f
int64_t function_2ca742(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2ca742
    *(int64_t *)(a5 - 8) = a5;
    *(int64_t *)(a5 - 16) = a5;
    int64_t v1; // 0x2ca742
    return function_cf3c7(a1, a2, v1, a4, a5, a6);
}

// Address range: 0x2ca88f - 0x2ca9f0
int64_t function_2ca88f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ca88f
    int64_t v1; // 0x2ca88f
    return function_cf3c7(a1, a2, a3, a4, v1, v1);
}

// Address range: 0x2ca9f0 - 0x2cab00
int64_t function_2ca9f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2ca9f0
    bool v1; // 0x2ca9f0
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x2ca9f0
    int64_t v3 = v2; // bp-48, 0x2caa5b
    int64_t v4 = (int64_t)&v3; // 0x2caa97
    int64_t * v5 = (int64_t *)(v4 - 16); // 0x2caaac
    *v5 = v2;
    int64_t * v6 = (int64_t *)(v4 - 8); // 0x2caaaf
    int64_t v7 = v4 + 8; // 0x2caaaf
    int64_t * v8 = (int64_t *)v7; // 0x2caaaf
    *v8 = *v6;
    *v5 = 0x5717d8d0;
    *(int64_t *)(v4 + 24) = 0x5717d8d0;
    *v6 = v7;
    int64_t v9 = *v8; // 0x2caaec
    v3 = v9;
    *v6 = v9;
    int64_t v10; // 0x2ca9f0
    return function_cf3c7(a1, a2, a3, a4, v10, v10);
}

// Address range: 0x2cab00 - 0x2cac37
int64_t function_2cab00(int64_t a1, int64_t a2) {
    // 0x2cab00
    int64_t v1; // bp-32, 0x2cab00
    int64_t v2 = (int64_t)&v1; // 0x2cabbe
    int64_t v3 = v2 - 8; // 0x2cabc6
    int64_t * v4 = (int64_t *)v3; // 0x2cabc6
    int64_t v5 = v2 + 16; // 0x2cabd9
    int64_t * v6 = (int64_t *)v5; // 0x2cabd9
    *v6 = a2;
    *(int64_t *)(v2 - 16) = v3;
    *v4 = 0x2abdab;
    *(int64_t *)(v2 + 32) = v1;
    int64_t * v7 = (int64_t *)(v2 + 8); // 0x2cac03
    int64_t v8 = *v7; // 0x2cac03
    v1 = v8;
    *v4 = v8;
    *v7 = *v6;
    v1 = v5;
    int64_t v9; // 0x2cab00
    return function_cf3c7(a1, v9, v9, v9, v9, v9);
}

// Address range: 0x2cac6f - 0x2cac72
int64_t function_2cac6f(int64_t a1) {
    // 0x2cac6f
    int64_t result; // 0x2cac6f
    return result;
}

// Address range: 0x2cac81 - 0x2cac82
int64_t function_2cac81(int64_t a1) {
    // 0x2cac81
    int64_t result; // 0x2cac81
    return result;
}

// Address range: 0x4738ee - 0x473909
int64_t function_4738ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = *(int32_t *)(int64_t)(-19 * *(int32_t *)(a4 + 106 + 8 * a4)); // 0x473902
    int64_t result = v1; // 0x473902
    char * v2 = (char *)(result + 0x6e401b60); // 0x473903
    int64_t v3; // 0x4738ee
    *v2 = *v2 ^ (char)(0x45650718 * (int32_t)v3 / 256);
    return result;
}

// Address range: 0x47390b - 0x473913
int64_t function_47390b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x47390b
    int64_t v1; // 0x47390b
    uint32_t v2 = *(int32_t *)(a1 + 94); // 0x47390d
    return (v1 & 0xffffffff | 0x100000000 * a3) / (int64_t)v2 & 0xffffffff;
}

// Address range: 0x47393b - 0x473a4e
int64_t function_47393b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3 = a6;
    int64_t v4; // 0x47393b
    unsigned char v5 = *(char *)(a3 - 0x7f8ad1dc) + (char)(v4 / 256); // 0x47393b
    int64_t v6 = 256 * (int64_t)v5 | v4 & -0xff01; // 0x47393b
    if (v5 == 0) {
        // 0x4739c3
        float80_t v7; // 0x47393b
        *(int16_t *)v4 = (int16_t)v7;
        uint64_t v8 = v6 + 237; // 0x4739ca
        __asm_out((int16_t)a3 & -256 | 25, (char)v8);
        unsigned char v9 = *(char *)&v1; // 0x4739cd
        unsigned char v10 = *(char *)&v2; // 0x4739cd
        char v11 = v9 - v10; // 0x4739cd
        unsigned char v12 = llvm_ctpop_i8(v11); // 0x4739cd
        bool v13; // 0x47393b
        v2 += (v13 ? -1 : 1);
        int64_t result = v4 & -0x10000 | (int64_t)&g1 & -0xff01 | 512 | v8 % 256 | 256 * (64 * (int64_t)(v11 == 0) | (int64_t)(v9 >= v10) | 128 * (int64_t)(v11 < 0) | 16 * (int64_t)(v9 % 16 - v10 % 16 > 15) | 4 * (int64_t)(v12 % 2 == 0)); // 0x4739d6
        if (v12 % 2 != 0) {
            // 0x473a0f
            return result & 0xffffffff ^ 0x167c98a6;
        }
        // 0x4739d9
        *(int64_t *)0x1b49b9d2 = 0x74ab29e5;
        // 0x4739e0
        return result;
    }
    int32_t v14 = a3;
    *(int32_t *)a3 = v14 + (int32_t)a1 + (int32_t)((int32_t)v6 < (int32_t)a2);
    int64_t result3 = v6 & -256 | (v4 + 192) % 256; // 0x473951
    int32_t * v15 = (int32_t *)result3; // 0x473953
    *v15 = (int32_t)((char)v4 < 64) + v14 + *v15;
    int32_t v16 = (int64_t)&v3; // 0x473958
    uint32_t v17 = *(int32_t *)(a4 + 52); // 0x473958
    uint32_t v18 = v16 - v17; // 0x473958
    if (v18 == 0) {
        int64_t v19 = v18; // 0x473958
        int64_t result2 = (v19 + 43 + (int64_t)(v17 > v16)) % 256 | v19 & 0xffffff00; // 0x47395f
        *(int32_t *)v2 = (int32_t)result2;
        return result2;
    }
    if (v17 < v16) {
        // 0x473965
        return __asm_iretd();
    }
    int32_t v20 = *(int32_t *)(v2 + 0x574b65df); // 0x4739a8
    char * v21 = (char *)((int64_t)(v20 + v14 & -0xff01 | 0x4500) + 0x60ff094f); // 0x4739b4
    *v21 = *v21 / 2;
    int32_t * v22 = (int32_t *)(v2 + 88); // 0x4739ba
    int32_t v23 = *v22 + (int32_t)v4; // 0x4739ba
    *v22 = v23;
    if (v23 != 0) {
        // 0x4739e0
        return result3;
    }
    int32_t * v24 = (int32_t *)((a4 & -256 | 110) - 64); // 0x4739bf
    *v24 = *v24 + (*(int32_t *)(2 * result3 + 0xf8cb285e) ^ -0xf8f7873);
    return result3;
}

// Address range: 0x473ace - 0x473acf
int64_t function_473ace(void) {
    // 0x473ace
    int64_t result; // 0x473ace
    return result;
}

// Address range: 0x473ae1 - 0x473ae8
int64_t function_473ae1(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x473ae1
    int64_t v1; // 0x473ae1
    int64_t v2 = v1;
    int32_t result = __asm_in(115); // 0x473ae1
    *(char *)v2 = (char)(v2 ^ a3 / 256);
    return result;
}

// Address range: 0x473b00 - 0x473b03
int64_t function_473b00(int64_t a1) {
    // 0x473b00
    return a1 & 0xffffffff;
}

// Address range: 0x473b57 - 0x473b58
int64_t function_473b57(void) {
    // 0x473b57
    int64_t result; // 0x473b57
    return result;
}

// Address range: 0x473b5f - 0x473b72
int64_t function_473b5f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x473b5f
    return function_473b57();
}

// Address range: 0x473bab - 0x473be5
int64_t function_473bab(int64_t a1, int64_t a2, int64_t a3) {
    // 0x473bab
    int64_t v1; // 0x473bab
    *(char *)a1 = (char)v1 ^ 40;
    bool v2; // 0x473bab
    int64_t v3 = v2 ? -1 : 1; // 0x473bae
    int64_t v4; // 0x473bab
    return function_5cb8b332(v3 + a1, *(int32_t *)&v4 ^ (int32_t)a2, 0x9ccd5791);
}

// Address range: 0x473be5 - 0x473c9e
int64_t function_473be5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v2; // 0x473be5
    uint32_t v3 = *(int32_t *)&v2 & (*(int32_t *)0x5a6653c53f8c7f09 | 0x239c76f7); // 0x473bf9
    int64_t v4 = ((int64_t)(v3 / 256) + a4) % 256 | a4 & -256; // 0x473bfc
    v2 = v4;
    if (v3 < 0x5f147da9) {
        int32_t v5 = v3 - 0x1f0f2f25; // 0x473c88
        if (v5 == 0) {
            // 0x473c68
            return v1 & 0xffffffff;
        }
        // 0x473c8f
        return v5 & -0x30b60700 | 0x30b60698;
    }
    int32_t v6 = v3 - 0x5f147da9; // 0x473c00
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x473c00
    int32_t * v8 = (int32_t *)v4; // 0x473c0b
    int64_t v9; // 0x473be5
    *v8 = *v8 & ((int32_t)v9 & -256 | 103);
    int64_t v10 = (0x4000 * (int64_t)(v6 == 0) | (int64_t)(v3 & -0xff01 | 512) | 0x8000 * (int64_t)(v6 < 0) | 0x1000 * (int64_t)(v3 % 16 > 24) | 1024 * (int64_t)(v7 % 2 == 0)) ^ 75; // 0x473c0d
    *(char *)(v9 & 0xffffffff ^ 0xbd7ff) = *(char *)&v1;
    return (int64_t)((int32_t)v10 - *(int32_t *)v10);
}

// Address range: 0x473ca5 - 0x473ca6
int64_t function_473ca5(void) {
    // 0x473ca5
    int64_t result; // 0x473ca5
    return result;
}

// Address range: 0x473ca6 - 0x473ca7
int64_t function_473ca6(void) {
    // 0x473ca6
    int64_t result; // 0x473ca6
    return result;
}

// Address range: 0x473cbf - 0x473cc9
int64_t function_473cbf(void) {
    // 0x473cbf
    int64_t result; // 0x473cbf
    int64_t * v1 = (int64_t *)(result + 0x3e7251d6); // 0x473cbf
    *v1 = *v1 - result;
    return result;
}

// Address range: 0x473cde - 0x473ce6
int64_t function_473cde(int64_t a1) {
    // 0x473cde
    int64_t result; // 0x473cde
    int32_t * v1 = (int32_t *)(result + 60); // 0x473cde
    *v1 = *v1 & -0x1cab7345;
    return result;
}

// Address range: 0x473cf4 - 0x473d09
int64_t function_473cf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x473cf4
    int64_t v1; // 0x473cf4
    bool v2; // 0x473cf4
    if (v2) {
        v1 = function_473ca6();
    }
    int64_t v3 = v1 + 0x6d4b0084; // 0x473cfb
    *(char *)a1 = (char)v3;
    return v3 & 0xffffffff ^ 31;
}

// Address range: 0x473d0f - 0x473d17
int64_t function_473d0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x473d0f
    int64_t v1; // 0x473d0f
    *(int32_t *)a3 = (int32_t)(v1 & a4);
    return a1 & 0xffffffff;
}

// Address range: 0x473d3a - 0x473d3b
int64_t function_473d3a(int64_t a1) {
    // 0x473d3a
    int64_t result; // 0x473d3a
    return result;
}

// Address range: 0x473d4f - 0x473d5f
int64_t function_473d4f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x473d4f
    int64_t v1; // 0x473d4f
    char * v2 = (char *)(v1 + 0x31f2da47); // 0x473d51
    *v2 = *v2 - (char)v1;
    *(int64_t *)(((v1 | v1) & 0xffffffff) - 8) = a3;
    return function_ffffffff9cd84f6a();
}

// Address range: 0x473d90 - 0x473d99
int64_t function_473d90(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 112); // 0x473d90
    uint32_t v2 = *v1; // 0x473d90
    *v1 = v2 / 8 | 0x20000000 * v2;
    return function_ffffffffdf5e7a57();
}

// Address range: 0x473da9 - 0x473e5b
int64_t function_473da9(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x473da9
    int64_t v1; // 0x473da9
    int64_t v2 = v1 ^ 0x530f77ae; // 0x473db8
    unsigned char v3 = *(char *)(a4 - 118) + (char)a3; // 0x473dbe
    int64_t v4 = a3 & -256; // 0x473dbe
    *(int32_t *)-0x7a3e94e875bf97e0 = (int32_t)v2;
    *(int64_t *)((v1 & 0xffffffff) - 8) = -0x189ad2cd;
    char * v5 = (char *)((v4 | (int64_t)v3) - 0x11f68589); // 0x473dd5
    *v5 = *v5 / 2;
    unsigned char v6 = v3 | (char)v2; // 0x473ddb
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x473ddb
    int64_t v8 = v4 | (int64_t)v6; // 0x473ddb
    int64_t result = __asm_in_133((int16_t)v8); // 0x473ddd
    if (v7 % 2 == 0) {
        // 0x473de8
        return result;
    }
    // 0x473e52
    *(int32_t *)-0x189ad327 = *(int32_t *)-0x189ad327 ^ (int32_t)v8;
    *(char *)-0x721ed02a = *(char *)-0x721ed02a + (char)(a3 / 256);
    return result;
}

// Address range: 0x473e89 - 0x473e8c
int64_t function_473e89(void) {
    // 0x473e89
    int64_t result; // 0x473e89
    return result;
}

// Address range: 0x473e9a - 0x473e9f
int64_t function_473e9a(void) {
    // 0x473e9a
    return function_2cd962c8();
}

// Address range: 0x473edd - 0x473ede
int64_t function_473edd(int64_t a1) {
    // 0x473edd
    int64_t result; // 0x473edd
    return result;
}
