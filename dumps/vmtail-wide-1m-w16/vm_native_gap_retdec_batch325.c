/*
 * Targeted RetDec C for native executable gap queue batch 325.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x10b1bf-0x10b3bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10b3bf-0x10b5bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10b5bf-0x10b7bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10b9bf-0x10bbbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x222c66-0x222e66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x222e66-0x223066 rank=- name=- kind=- bytes=- uncovered=-
 *   0x223266-0x223466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x223466-0x223666 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_10b1bf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_10b1cb(void);
int64_t function_10b1dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10b236(int64_t a1);
int64_t function_10b265(int64_t a1);
int64_t function_10b306(void);
int64_t function_10b338(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_10b3b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10b459(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10b461(int64_t a1);
int64_t function_10b4ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10b503(void);
int64_t function_10b508(void);
int64_t function_10b50d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10b533(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10b551(void);
int64_t function_10b5b0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_10b624(int64_t a1, int64_t a2, int64_t a3);
int64_t function_10b637(void);
int64_t function_10b640(int64_t a1);
int64_t function_10b649(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10b65f(int64_t a1);
int64_t function_10b741(void);
int64_t function_10b759(void);
int64_t function_10b79e(void);
int64_t function_10b9bf(void);
int64_t function_10b9ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10ba80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10bb06(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10bb14(void);
int64_t function_10bb34(void);
int64_t function_10bb54(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_10bb8b(int64_t a1);
int64_t function_15f332f();
int64_t function_222c66(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_222ccf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_222d05(void);
int64_t function_222d1c(int64_t a1, int64_t a2);
int64_t function_222d38(void);
int64_t function_222def(void);
int64_t function_222e25(int64_t a1);
int64_t function_222e28(void);
int64_t function_222e30(void);
int64_t function_222e34(void);
int64_t function_222e4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_222e60(int64_t a1, int64_t a2);
int64_t function_222e91(void);
int64_t function_222ea7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_222ee3(int64_t a1);
int64_t function_222f21(int64_t a1);
int64_t function_222f8c(void);
int64_t function_222fa2(void);
int64_t function_222fda(int64_t a1, int64_t a2);
int64_t function_222fdd(int64_t a1);
int64_t function_22303d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_22305b(int64_t a1);
int64_t function_223266(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2232a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2232bc(void);
int64_t function_223397(void);
int64_t function_223432(void);
int64_t function_223455(int64_t a1, int64_t a2);
int64_t function_223478(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2234d5(void);
int64_t function_2234df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_223520(int64_t a1);
int64_t function_223554(void);
int64_t function_22355b(void);
int64_t function_223579(void);
int64_t function_2235c4(void);
int64_t function_2235cf(void);
int64_t function_223604(void);
int64_t function_22361d(void);
int64_t function_223621(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24cd09dd();
int64_t function_2697c88();
int64_t function_57d303b();
int64_t function_7228a723();
int64_t function_7b93bcef();
int64_t function_a03bbd2();
int64_t function_ffffffff8447f887();
int64_t function_ffffffffd1129d54();
int64_t function_ffffffffeed902f5();
int64_t unknown_23d84bb8();
int64_t unknown_2af42dc7();
int64_t unknown_33bfbe61();
int64_t unknown_3a12b630();
int64_t unknown_5e4fd40c();
int64_t unknown_60c20ecc();
int64_t unknown_ffffffff94558e42();
int64_t unknown_ffffffff992b6c6f();
int64_t unknown_ffffffffacc0aeb7();
int64_t unknown_ffffffffad676add();

// Address range: 0x10b1bf - 0x10b1c6
int64_t function_10b1bf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x10b1bf
    int64_t v1; // 0x10b1bf
    *(char *)a3 = (char)(v1 | (uint64_t)v1 / 256);
    return unknown_2af42dc7(a1, a2, a3);
}

// Address range: 0x10b1cb - 0x10b1d1
int64_t function_10b1cb(void) {
    // 0x10b1cb
    int64_t result; // 0x10b1cb
    return result;
}

// Address range: 0x10b1dd - 0x10b1e1
int64_t function_10b1dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10b1dd
    int64_t result; // 0x10b1dd
    return result;
}

// Address range: 0x10b236 - 0x10b237
int64_t function_10b236(int64_t a1) {
    // 0x10b236
    int64_t result; // 0x10b236
    return result;
}

// Address range: 0x10b265 - 0x10b273
int64_t function_10b265(int64_t a1) {
    // 0x10b265
    return (int64_t)(*(int32_t *)-0x7e1263f3b78f9557 ^ 168);
}

// Address range: 0x10b306 - 0x10b30a
int64_t function_10b306(void) {
    // 0x10b306
    int64_t result; // 0x10b306
    return result;
}

// Address range: 0x10b338 - 0x10b3a8
int64_t function_10b338(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x10b338
    int64_t v1; // 0x10b338
    bool v2; // 0x10b338
    if (v2) {
        char v3 = v1;
        // 0x10b380
        *(char *)a1 = v3 + (char)a1;
        return a4 & 0xffff00ff | (int64_t)&g1;
        // 0x10b392
        *(char *)v1 = 2 * v3;
        char * v4 = (char *)(a4 + 6); // 0x10b399
        *v4 = *v4 + (char)(a4 / 256);
        int64_t v5; // 0x10b338
        int64_t v6 = v5;
        *(char *)v6 = *(char *)&v5 + (char)v6;
        return function_2697c88();
    }
    // 0x10b33a
    *(char *)a1 = (char)(v1 ^ a1);
    unknown_ffffffff94558e42();
    __asm_in(43);
    unsigned char v7 = *(char *)-0x4b31f5b3; // 0x10b346
    unsigned char v8 = v7 + (char)((uint64_t)v1 / 256); // 0x10b346
    *(char *)-0x4b31f5b3 = v8;
    unsigned char v9 = (char)a4 % 32; // 0x10b351
    if (v9 != 0) {
        unsigned char v10 = *(char *)0x1df177d; // 0x10b351
        *(char *)0x1df177d = (char)(v8 < v7) << 8 - v9 | v10 >> v9 | (char)((int16_t)v10 << (int16_t)(9 - v9));
    }
    return __asm_in_133((int16_t)a3);
}

// Address range: 0x10b3b0 - 0x10b3c9
int64_t function_10b3b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10b3b0
    int64_t v1; // 0x10b3b0
    bool v2; // 0x10b3b0
    *(char *)v1 = (char)v2;
    char * v3 = (char *)(a4 + 0x13d0006); // 0x10b3b2
    char v4 = a3; // 0x10b3b2
    *v3 = *v3 + v4;
    int64_t v5; // 0x10b3b0
    unsigned char v6 = *(char *)&v5; // 0x10b3b8
    *(char *)a1 = v6 / 2;
    char v7 = __asm_in_134((int16_t)a3); // 0x10b3bb
    int64_t v8; // 0x10b3b0
    *(int32_t *)a2 = *(int32_t *)&v8 / 2 | 0x80000000 * (int32_t)(v6 % 2 != 0);
    char * v9 = (char *)(a4 + 39); // 0x10b3c3
    *v9 = *v9 + v4;
    return v1 & -256 | (int64_t)v7;
}

// Address range: 0x10b459 - 0x10b45d
int64_t function_10b459(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10b459
    int64_t result; // 0x10b459
    return result;
}

// Address range: 0x10b461 - 0x10b462
int64_t function_10b461(int64_t a1) {
    // 0x10b461
    int64_t result; // 0x10b461
    return result;
}

// Address range: 0x10b4ee - 0x10b4fb
int64_t function_10b4ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10b4ee
    int64_t result; // 0x10b4ee
    *(int32_t *)-0x17069cd924a5a588 = (int32_t)result;
    *(int32_t *)a4 = (int32_t)result + (int32_t)a1;
    return result;
}

// Address range: 0x10b503 - 0x10b508
int64_t function_10b503(void) {
    // 0x10b503
    return function_24cd09dd();
}

// Address range: 0x10b508 - 0x10b50b
int64_t function_10b508(void) {
    // 0x10b508
    int64_t result; // 0x10b508
    return result;
}

// Address range: 0x10b50d - 0x10b51a
int64_t function_10b50d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10b50d
    int64_t v1; // 0x10b50d
    int32_t * v2 = (int32_t *)(v1 + 0x4b8a6e87); // 0x10b50f
    *v2 = *v2 + (int32_t)a4;
    return function_ffffffffd1129d54();
}

// Address range: 0x10b533 - 0x10b541
int64_t function_10b533(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10b533
    int64_t v1; // 0x10b533
    *(char *)a1 = (char)v1;
    int64_t v2; // 0x10b533
    *(int32_t *)a4 = *(int32_t *)&v2 + (int32_t)a2;
    bool v3; // 0x10b533
    return function_ffffffff8447f887((v3 ? -1 : 1) + a1);
}

// Address range: 0x10b551 - 0x10b554
int64_t function_10b551(void) {
    // 0x10b551
    int64_t result; // 0x10b551
    return result;
}

// Address range: 0x10b5b0 - 0x10b5d2
int64_t function_10b5b0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_23d84bb8(); // 0x10b5b2
    int64_t v2; // 0x10b5b0
    int32_t * v3 = (int32_t *)(v2 + 40); // 0x10b5b7
    *v3 = *v3 + (int32_t)a2;
    int64_t v4; // 0x10b5b0
    *(int32_t *)a4 = *(int32_t *)&v4 - 1;
    int32_t * v5 = (int32_t *)(a3 - 65); // 0x10b5c2
    *v5 = *v5 + (int32_t)v2;
    return v1 ^ a4 / 256 % 256;
}

// Address range: 0x10b624 - 0x10b632
int64_t function_10b624(int64_t a1, int64_t a2, int64_t a3) {
    // 0x10b624
    __asm_in_135(51);
    return unknown_3a12b630();
}

// Address range: 0x10b637 - 0x10b63a
int64_t function_10b637(void) {
    // 0x10b637
    int64_t result; // 0x10b637
    return result;
}

// Address range: 0x10b640 - 0x10b648
int64_t function_10b640(int64_t a1) {
    // 0x10b640
    int64_t result; // 0x10b640
    return result;
}

// Address range: 0x10b649 - 0x10b659
int64_t function_10b649(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10b649
    int64_t result; // 0x10b649
    int32_t * v1 = (int32_t *)(a2 + 0x7902503a + 4 * result); // 0x10b649
    *v1 = *v1 + (int32_t)result;
    char * v2 = (char *)(a1 + 0x3903bb23); // 0x10b650
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x10b65f - 0x10b660
int64_t function_10b65f(int64_t a1) {
    // 0x10b65f
    int64_t result; // 0x10b65f
    return result;
}

// Address range: 0x10b741 - 0x10b742
int64_t function_10b741(void) {
    // 0x10b741
    int64_t result; // 0x10b741
    return result;
}

// Address range: 0x10b759 - 0x10b75b
int64_t function_10b759(void) {
    // 0x10b759
    return function_10b741();
}

// Address range: 0x10b79e - 0x10b7a1
int64_t function_10b79e(void) {
    // 0x10b79e
    int64_t result; // 0x10b79e
    return result;
}

// Address range: 0x10b9bf - 0x10b9c9
int64_t function_10b9bf(void) {
    // 0x10b9bf
    int64_t v1; // 0x10b9bf
    int64_t v2 = v1;
    return v2 - ((int32_t)v2 < 0x66fd2401 ? 0x7128aa9 : 0x7128aa8) & 0xffffffff;
}

// Address range: 0x10b9ed - 0x10ba00
int64_t function_10b9ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10b9ed
    int64_t v1; // 0x10b9ed
    return v1 & 0xd1c52b0a;
}

// Address range: 0x10ba80 - 0x10bae0
int64_t function_10ba80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10ba80
    int64_t v1; // 0x10ba80
    int64_t v2 = v1;
    int64_t v3 = a3;
    bool v4; // 0x10ba80
    if (v4 || false) {
        int64_t v5 = (v4 ? -4 : 4) + a1; // 0x10bab8
        uint32_t v6 = (int32_t)v1; // 0x10bab9
        uint32_t v7 = *(int32_t *)(v5 + 0x60a301e8) + v6; // 0x10bab9
        bool v8 = (int32_t)a1 > (int32_t)v2 ? v7 + (int32_t)((int32_t)a1 > (int32_t)v2) <= v6 : v7 < v6; // 0x10bab9
        char * v9 = (char *)v5; // 0x10bac1
        char v10 = v2; // 0x10bac1
        *v9 = *v9 + v10 + (char)v8;
        __asm_out((int16_t)v3, v10);
        return unknown_60c20ecc();
    }
    int32_t * v11 = (int32_t *)(a2 - 0x31e78415); // 0x10bad0
    *v11 = *v11 + (int32_t)a2;
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a4;
    *(char *)(a1 & 0xffffffff) = (char)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x10bb06 - 0x10bb10
int64_t function_10bb06(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10bb06
    return unknown_5e4fd40c(a1, a2, a3, a4);
}

// Address range: 0x10bb14 - 0x10bb15
int64_t function_10bb14(void) {
    // 0x10bb14
    int64_t result; // 0x10bb14
    return result;
}

// Address range: 0x10bb34 - 0x10bb39
int64_t function_10bb34(void) {
    // 0x10bb34
    return function_a03bbd2();
}

// Address range: 0x10bb54 - 0x10bb85
int64_t function_10bb54(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = unknown_33bfbe61(); // 0x10bb5b
    int64_t v2; // 0x10bb54
    char v3 = llvm_ctpop_i8((char)((v2 | a4) / 256)); // 0x10bb60
    int64_t v4 = v2 & 0xff00 | a4; // 0x10bb60
    int64_t v5 = v1; // 0x10bb62
    if (v3 % 2 == 0) {
        v5 = function_10bb14();
    }
    int32_t * v6 = (int32_t *)(v4 - 0x7f32597c); // 0x10bb6b
    *v6 = *v6 + (int32_t)v2;
    int64_t result = v5 + 0xbbb048fa & 0xffffffff; // 0x10bb71
    int64_t v7; // 0x10bb54
    uint32_t v8 = *(int32_t *)&v7 + (int32_t)v4; // 0x10bb76
    char v9 = llvm_ctpop_i8((char)v8); // 0x10bb76
    v4 = v8;
    while (v8 < 1) {
        // 0x10bb62
        v5 = result;
        if (v9 % 2 == 0) {
            v5 = function_10bb14();
        }
        // 0x10bb66
        v6 = (int32_t *)(v4 - 0x7f32597c);
        *v6 = *v6 + (int32_t)v2;
        result = v5 + 0xbbb048fa & 0xffffffff;
        v8 = *(int32_t *)&v7 + (int32_t)v4;
        v9 = llvm_ctpop_i8((char)v8);
        v4 = v8;
    }
    int32_t * v10 = (int32_t *)(a2 - 0x310c5163); // 0x10bb7a
    *v10 = *v10 + (int32_t)a1;
    int32_t * v11 = (int32_t *)(v2 - 120); // 0x10bb80
    *v11 = *v11 + (int32_t)a6;
    return result;
}

// Address range: 0x10bb8b - 0x10bb8d
int64_t function_10bb8b(int64_t a1) {
    // 0x10bb8b
    int64_t result; // 0x10bb8b
    return result;
}

// Address range: 0x222c66 - 0x222c71
int64_t function_222c66(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x222c66
    return unknown_ffffffff992b6c6f();
}

// Address range: 0x222ccf - 0x222cd6
int64_t function_222ccf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = a4 & 0xffffffff; // 0x222ccf
    int64_t v1; // 0x222ccf
    bool v2; // 0x222ccf
    *(char *)result = 2 * (char)v1 + (char)v2;
    return result;
}

// Address range: 0x222d05 - 0x222d0a
int64_t function_222d05(void) {
    // 0x222d05
    return function_57d303b();
}

// Address range: 0x222d1c - 0x222d21
int64_t function_222d1c(int64_t a1, int64_t a2) {
    // 0x222d1c
    return (uint64_t)(a2 + 34) % 256 | a2 & 0xffffff00;
}

// Address range: 0x222d38 - 0x222d3d
int64_t function_222d38(void) {
    // 0x222d38
    int64_t result; // 0x222d38
    return result;
}

// Address range: 0x222def - 0x222df0
int64_t function_222def(void) {
    // 0x222def
    int64_t result; // 0x222def
    return result;
}

// Address range: 0x222e25 - 0x222e28
int64_t function_222e25(int64_t a1) {
    // 0x222e25
    int64_t result; // 0x222e25
    return result;
}

// Address range: 0x222e28 - 0x222e29
int64_t function_222e28(void) {
    // 0x222e28
    int64_t result; // 0x222e28
    return result;
}

// Address range: 0x222e30 - 0x222e33
int64_t function_222e30(void) {
    // 0x222e30
    int64_t result; // 0x222e30
    return result;
}

// Address range: 0x222e34 - 0x222e43
int64_t function_222e34(void) {
    // 0x222e34
    int64_t result; // 0x222e34
    *(char *)0x52069f7e49013d00 = (char)result;
    return result;
}

// Address range: 0x222e4c - 0x222e5f
int64_t function_222e4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x222e4c
    int64_t result; // 0x222e4c
    bool v1; // 0x222e4c
    if (true != !v1) {
        // 0x222e4e
        return result;
    }
    // 0x222e5e
    *(char *)a1 = __asm_insb((int16_t)a3);
    return result;
}

// Address range: 0x222e60 - 0x222e7c
int64_t function_222e60(int64_t a1, int64_t a2) {
    // 0x222e60
    int64_t v1; // 0x222e60
    char v2 = *(char *)0x18236b6d + (char)((uint64_t)v1 / 256); // 0x222e66
    *(char *)0x18236b6d = v2;
    if (v2 < 0) {
        // 0x222e6e
        function_222def();
    } else {
        if (v2 != 0) {
            // 0x222e70
            return __asm_hlt();
        }
    }
    function_222e28();
    // 0x222e70
    return __asm_hlt();
}

// Address range: 0x222e91 - 0x222e92
int64_t function_222e91(void) {
    // 0x222e91
    int64_t result; // 0x222e91
    return result;
}

// Address range: 0x222ea7 - 0x222ec3
int64_t function_222ea7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x222ea7
    int64_t v1; // 0x222ea7
    int64_t v2 = v1;
    int64_t v3; // 0x222ea7
    bool v4; // 0x222ea7
    if (!v4) {
        v3 = function_222e91();
    }
    int32_t v5 = a2; // 0x222ea9
    *(int32_t *)v2 = (int32_t)v2 + v5;
    __asm_in_134((int16_t)a3);
    int64_t result = unknown_ffffffffacc0aeb7(); // 0x222eb1
    *(char *)-0x1765d6ff = *(char *)-0x1765d6ff | (char)result;
    int32_t * v6 = (int32_t *)((v3 & 0xffffffff) + 2 * a2); // 0x222ebf
    *v6 = *v6 + v5;
    return result;
}

// Address range: 0x222ee3 - 0x222ee4
int64_t function_222ee3(int64_t a1) {
    // 0x222ee3
    int64_t result; // 0x222ee3
    return result;
}

// Address range: 0x222f21 - 0x222f24
int64_t function_222f21(int64_t a1) {
    // 0x222f21
    int64_t result; // 0x222f21
    return result;
}

// Address range: 0x222f8c - 0x222f8d
int64_t function_222f8c(void) {
    // 0x222f8c
    int64_t result; // 0x222f8c
    return result;
}

// Address range: 0x222fa2 - 0x222fa4
int64_t function_222fa2(void) {
    // 0x222fa2
    return function_222f8c();
}

// Address range: 0x222fda - 0x222fdd
int64_t function_222fda(int64_t a1, int64_t a2) {
    // 0x222fda
    int64_t v1; // 0x222fda
    *(int32_t *)a1 = (int32_t)v1;
    return function_22305b((int64_t)&g2);
}

// Address range: 0x222fdd - 0x222fde
int64_t function_222fdd(int64_t a1) {
    // 0x222fdd
    int64_t result; // 0x222fdd
    return result;
}

// Address range: 0x22303d - 0x223042
int64_t function_22303d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x22303d
    int64_t result; // 0x22303d
    return result;
}

// Address range: 0x22305b - 0x22305e
int64_t function_22305b(int64_t a1) {
    // 0x22305b
    int64_t result; // 0x22305b
    return result;
}

// Address range: 0x223266 - 0x22327b
int64_t function_223266(int64_t a1, int64_t a2, int64_t a3) {
    // 0x223266
    int64_t v1; // 0x223266
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 + 8 * a3); // 0x22326b
    *v3 = *v3 | (int32_t)v1;
    *(int32_t *)0x185882ef0fac8507 = (int32_t)v2;
    return (v2 + 195) % 256 | v2 & -256;
}

// Address range: 0x2232a7 - 0x2232bc
int64_t function_2232a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2232a7
    int64_t v1; // 0x2232a7
    __asm_outsd((int16_t)((v1 & 0xffffffff | 0x100000000 * a3) % (v1 & 0xffffffff)), (int32_t)v1);
    return (int64_t)*(int32_t *)0x201421013d00433b;
}

// Address range: 0x2232bc - 0x2232ce
int64_t function_2232bc(void) {
    // 0x2232bc
    int64_t v1; // 0x2232bc
    __asm_out_136(-28, (char)v1);
    return function_15f332f();
}

// Address range: 0x223397 - 0x22339a
int64_t function_223397(void) {
    // 0x223397
    int64_t result; // 0x223397
    return result;
}

// Address range: 0x223432 - 0x22343f
int64_t function_223432(void) {
    // 0x223432
    int64_t v1; // 0x223432
    return v1 & 0x10437797 | 0xefbc8868;
}

// Address range: 0x223455 - 0x22345e
int64_t function_223455(int64_t a1, int64_t a2) {
    // 0x223455
    return function_ffffffffeed902f5();
}

// Address range: 0x223478 - 0x22347f
int64_t function_223478(int64_t a1, int64_t a2, int64_t a3) {
    // 0x223478
    int64_t result; // 0x223478
    return result;
}

// Address range: 0x2234d5 - 0x2234df
int64_t function_2234d5(void) {
    // 0x2234d5
    return unknown_ffffffffad676add();
}

// Address range: 0x2234df - 0x2234e9
int64_t function_2234df(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2234df
    int64_t result; // 0x2234df
    return result;
}

// Address range: 0x223520 - 0x223521
int64_t function_223520(int64_t a1) {
    // 0x223520
    int64_t result; // 0x223520
    return result;
}

// Address range: 0x223554 - 0x223555
int64_t function_223554(void) {
    // 0x223554
    int64_t result; // 0x223554
    return result;
}

// Address range: 0x22355b - 0x22355d
int64_t function_22355b(void) {
    // 0x22355b
    return function_223554();
}

// Address range: 0x223579 - 0x22357e
int64_t function_223579(void) {
    // 0x223579
    return function_7b93bcef();
}

// Address range: 0x2235c4 - 0x2235c8
int64_t function_2235c4(void) {
    // 0x2235c4
    return function_22361d();
}

// Address range: 0x2235cf - 0x2235d0
int64_t function_2235cf(void) {
    // 0x2235cf
    int64_t result; // 0x2235cf
    return result;
}

// Address range: 0x223604 - 0x223605
int64_t function_223604(void) {
    // 0x223604
    int64_t result; // 0x223604
    return result;
}

// Address range: 0x22361d - 0x22361e
int64_t function_22361d(void) {
    // 0x22361d
    int64_t v1; // 0x22361d
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x223621 - 0x223644
int64_t function_223621(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x223621
    int64_t v3 = v2 + 0xe88e3882; // 0x223621
    *(int32_t *)a1 = (int32_t)v3;
    int64_t v4 = v3 & 0xffffffff; // 0x223629
    if (a4 != 1 && (int32_t)a3 != -(int32_t)v2) {
        v4 = function_223604();
    }
    // 0x22362b
    bool v5; // 0x223621
    int64_t v6 = v5 ? 0xfffffffc : 4; // 0x223628
    int32_t * v7 = (int32_t *)(v1 + 0x8929004); // 0x223631
    *v7 = *v7 + (int32_t)v4;
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)(v6 + a1);
    return function_7228a723();
}
