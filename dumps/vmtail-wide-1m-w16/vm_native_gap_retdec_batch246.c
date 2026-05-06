/*
 * Targeted RetDec C for native executable gap queue batch 246.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x144913-0x144b13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x144b13-0x144d13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x144d13-0x144f13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18b285-0x18b485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18b485-0x18b685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18b685-0x18b885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18b885-0x18ba85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x18ba85-0x18bc85 rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
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

int64_t function_144913(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14491a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1449d3(void);
int64_t function_144a62(void);
int64_t function_144ab7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_144b5d(void);
int64_t function_144ba4(int64_t a1);
int64_t function_144bae(void);
int64_t function_144baf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5);
int64_t function_144c66(int64_t a1);
int64_t function_144c84(void);
int64_t function_144ca7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_144d0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_144dc6(int64_t a1);
int64_t function_144e28(void);
int64_t function_144e82(int64_t a1, int64_t a2);
int64_t function_144ead(void);
int64_t function_144ebb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_144f01(int64_t a1);
int64_t function_18b285(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_18b399(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_18b4f9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18b666(void);
int64_t function_18b66b(void);
int64_t function_18b687(int64_t a1);
int64_t function_18b6a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18b6fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18b83c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_18b89d(int64_t a1);
int64_t function_18b8c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18b8ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18b8f3(void);
int64_t function_18b900(int64_t a1);
int64_t function_18b903(void);
int64_t function_18b90c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18b922(int64_t a1);
int64_t function_18b995(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18b9ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_18ba74(void);
int64_t function_18ba77(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18ba79(int64_t a1, int64_t a2, int64_t a3);
int64_t function_18baa7(void);
int64_t function_18bac4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18bb2b(void);
int64_t function_18bb2d(void);
int64_t function_18bb3a(void);
int64_t function_18bb91(void);
int64_t function_18bb9c(int64_t a1);
int64_t function_18bbe5(void);
int64_t function_18bbef(int64_t a1);
int64_t function_18bbf4(void);
int64_t function_18bc2f(void);
int64_t function_18cc4b();
int64_t function_2012bf0();
int64_t function_2013707();
int64_t function_794f4912();
int64_t function_c4258();
int64_t function_ffffffff8e1ebba8();
int64_t function_ffffffffd91ead25();
int64_t function_fffffffff7a1bb9e();
int64_t unknown_10ce8771();
int64_t unknown_175653f2();
int64_t unknown_1c2264bd();
int64_t unknown_25ee6ce7();
int64_t unknown_2a05861f();
int64_t unknown_301ed4f3();
int64_t unknown_3ad92750();
int64_t unknown_3f37a6fc();
int64_t unknown_5a7fac0f();
int64_t unknown_5c238eb5();
int64_t unknown_5e3c0680();
int64_t unknown_69e46ed6();
int64_t unknown_6d97fe91();
int64_t unknown_7417dd09();
int64_t unknown_7a515ff9();
int64_t unknown_f1d9ec4();
int64_t unknown_ffffffff81603612();
int64_t unknown_ffffffffa00ee1dd();
int64_t unknown_ffffffffa125bd04();
int64_t unknown_ffffffffafb6041d();
int64_t unknown_ffffffffb4024a5a();
int64_t unknown_ffffffffb456910f();
int64_t unknown_ffffffffb74e4c47();
int64_t unknown_ffffffffe03c4ccd();
int64_t unknown_ffffffffe10521ff();
int64_t unknown_ffffffffe69e921b();
int64_t unknown_ffffffffe88a40db();
int64_t unknown_ffffffffe8e27cb7();
int64_t unknown_ffffffffe91431c8();
int64_t unknown_fffffffff8c11ef1();
int64_t unknown_fffffffff9df2ad1();

// Address range: 0x144913 - 0x144919
int64_t function_144913(int64_t a1, int64_t a2, int64_t a3) {
    // 0x144913
    int64_t result; // 0x144913
    int32_t * v1 = (int32_t *)(result - 0x5d9637fd); // 0x144913
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x14491a - 0x144925
int64_t function_14491a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14491a
    int64_t v1; // 0x14491a
    int64_t v2 = v1 & -256 | (int64_t)__asm_in((int16_t)a3); // 0x14491a
    bool v3; // 0x14491a
    return v2 + 256 * ((int64_t)v3 - v1) & 0xff00 | v2 & -0xff01;
}

// Address range: 0x1449d3 - 0x1449d4
int64_t function_1449d3(void) {
    // 0x1449d3
    int64_t result; // 0x1449d3
    return result;
}

// Address range: 0x144a62 - 0x144a65
int64_t function_144a62(void) {
    // 0x144a62
    int64_t result; // 0x144a62
    return result;
}

// Address range: 0x144ab7 - 0x144b06
int64_t function_144ab7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t * v1 = (int32_t *)(unknown_1c2264bd() + 14); // 0x144abc
    *v1 = *v1 ^ 58;
    int64_t v2 = unknown_ffffffffe91431c8(); // 0x144ac2
    int64_t v3; // 0x144ab7
    char * v4 = (char *)(v3 - 0x17496953); // 0x144ac8
    unsigned char v5 = *v4; // 0x144ac8
    *v4 = v5 / 2 | 128 * v5;
    int64_t * v6 = (int64_t *)((a3 & 0xffffffff) + 0xaecd733 + 4 * a6); // 0x144acf
    *v6 = *v6 + a4;
    int32_t * v7 = (int32_t *)(v3 - 0x27083759); // 0x144ad9
    *v7 = *v7 + (int32_t)v3;
    unknown_ffffffffe03c4ccd();
    int64_t v8 = unknown_175653f2(); // 0x144aec
    __asm_out((int16_t)v2 % 256 | (int16_t)&g3, (char)v8);
    return unknown_ffffffffe10521ff() & 0xffffffff ^ 0xaaaf755a;
}

// Address range: 0x144b5d - 0x144b63
int64_t function_144b5d(void) {
    // 0x144b5d
    int64_t result; // 0x144b5d
    return result;
}

// Address range: 0x144ba4 - 0x144ba5
int64_t function_144ba4(int64_t a1) {
    // 0x144ba4
    int64_t result; // 0x144ba4
    return result;
}

// Address range: 0x144bae - 0x144baf
int64_t function_144bae(void) {
    // 0x144bae
    int64_t result; // 0x144bae
    return result;
}

// Address range: 0x144baf - 0x144c46
int64_t function_144baf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, uint64_t a5) {
    int64_t v1 = a2;
    unsigned char v2 = (char)a2;
    int64_t v3; // 0x144baf
    unsigned char v4 = (char)v3; // 0x144baf
    *(char *)a2 = v2 - v4;
    int64_t v5 = unknown_ffffffffe8e27cb7(); // 0x144bb1
    *(char *)a1 = __asm_insb((int16_t)a3);
    int32_t * v6 = (int32_t *)(a3 + 0x40432e0b); // 0x144bc1
    *v6 = *v6 + (int32_t)a1;
    int32_t * v7 = (int32_t *)(a3 + 65); // 0x144bd0
    uint32_t v8 = *v7; // 0x144bd0
    uint32_t v9 = v8 + (int32_t)a5; // 0x144bd0
    *v7 = v9;
    *(int32_t *)a1 = *(int32_t *)&v1;
    bool v10; // 0x144baf
    int64_t v11 = v10 ? -4 : 4; // 0x144bd3
    int64_t v12 = v1 + v11; // 0x144bd3
    v1 = v12;
    if (v9 < v8 || v9 == 0) {
        char * v13 = (char *)v12; // 0x144bd6
        *v13 = *v13 | (char)(a5 / 256);
        int32_t * v14 = (int32_t *)(a5 + 0x1e82bf9); // 0x144bd8
        uint32_t v15 = *v14; // 0x144bd8
        *v14 = v15 / 512 | 0x800000 * v15;
        unsigned char v16 = (char)a5 % 32; // 0x144be0
        if (v16 != 0) {
            unsigned char v17 = *(char *)-0x768cc66f; // 0x144be0
            *(char *)-0x768cc66f = v17 >> v16 | v17 << 8 - v16;
        }
        char * v18 = (char *)(v11 + a1); // 0x144be6
        *v18 = *v18 & (char)(v5 - (v2 < v4 ? 2 : 1)) + 68;
        return (a3 / 256 | a3) % 256 | a3 & 0xffffff00;
    }
    char v19 = *(char *)-0x2396fc3; // 0x144c36
    *(char *)-0x2396fc3 = v19 + (char)((uint64_t)v3 / 256);
    unsigned char v20 = (char)a5 % 32; // 0x144c3c
    if (v20 != 0) {
        char * v21 = (char *)a5; // 0x144c3c
        *v21 = *v21 >> v20;
    }
    return (a3 + 22) % 256 | a3 & 0xffffff00;
}

// Address range: 0x144c66 - 0x144c67
int64_t function_144c66(int64_t a1) {
    // 0x144c66
    int64_t result; // 0x144c66
    return result;
}

// Address range: 0x144c84 - 0x144c85
int64_t function_144c84(void) {
    // 0x144c84
    int64_t result; // 0x144c84
    return result;
}

// Address range: 0x144ca7 - 0x144d0b
int64_t function_144ca7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    bool v2; // 0x144ca7
    if (v2 || false) {
        int16_t v3 = a3; // 0x144cdf
        __asm_in(v3);
        int32_t v4 = *(int32_t *)(a2 + 0x5e801e8); // 0x144ce0
        int64_t v5; // 0x144ca7
        *(char *)((int64_t)(v4 ^ (int32_t)v5) - 0x315d877e) = (char)((uint64_t)v5 / 256);
        __asm_outsb(v3, *(char *)&v1);
        unknown_301ed4f3();
        unknown_3f37a6fc();
        int64_t result = unknown_7417dd09(); // 0x144d03
        char * v6 = (char *)((v2 ? -4 : 4) + a1); // 0x144d08
        *v6 = *v6 + (char)result;
        return result;
    }
    // 0x144ca9
    return function_144c84();
}

// Address range: 0x144d0c - 0x144d80
int64_t function_144d0c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_ffffffff81603612(); // 0x144d0c
    *(char *)(v1 & 0xffffffff) = __asm_insb((int16_t)a3);
    int64_t result = unknown_2a05861f(); // 0x144d19
    int64_t v2; // 0x144d0c
    if ((*(int32_t *)(v1 - 0x51e59644) || (int32_t)v2) >= 0) {
        // 0x144d78
        __asm_in_134(2);
        unknown_5e3c0680();
        return __asm_int3();
    }
    int32_t * v3 = (int32_t *)(result + 0x23012336); // 0x144d25
    *v3 = *v3 + (int32_t)a4;
    return result;
}

// Address range: 0x144dc6 - 0x144dcd
int64_t function_144dc6(int64_t a1) {
    // 0x144dc6
    int64_t result; // 0x144dc6
    int32_t * v1 = (int32_t *)(result - 0x80cc556); // 0x144dc6
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x144e28 - 0x144e29
int64_t function_144e28(void) {
    // 0x144e28
    int64_t result; // 0x144e28
    return result;
}

// Address range: 0x144e82 - 0x144e8a
int64_t function_144e82(int64_t a1, int64_t a2) {
    // 0x144e82
    bool v1; // 0x144e82
    if (v1) {
        function_144e28();
    }
    int64_t v2 = v1 ? -4 : 4; // 0x144e84
    return function_fffffffff7a1bb9e(v2 + a1, v2 + a2);
}

// Address range: 0x144ead - 0x144eae
int64_t function_144ead(void) {
    // 0x144ead
    int64_t result; // 0x144ead
    return result;
}

// Address range: 0x144ebb - 0x144ed5
int64_t function_144ebb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x144ebb
    int64_t result; // 0x144ebb
    bool v1; // 0x144ebb
    if (!v1) {
        // 0x144f2b
        return result;
    }
    int64_t result2 = function_144ead(); // 0x144ec3
    int32_t * v2 = (int32_t *)(result - 2); // 0x144ece
    *v2 = *v2 + (int32_t)result;
    *(char *)a3 = *(char *)(a2 - 0x34d87c6) + (char)a1;
    return result2;
}

// Address range: 0x144f01 - 0x144f0b
int64_t function_144f01(int64_t a1) {
    // 0x144f01
    int64_t v1; // 0x144f01
    return v1 & -256 | (int64_t)*(char *)0x1a44759101e85200;
}

// Address range: 0x18b285 - 0x18b399
int64_t function_18b285(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x18b285
    int64_t v1; // 0x18b285
    return function_c4258(a1 & 0xffffffff ^ 0x37ffc193, a6, a3, a4, v1, v1, v1);
}

// Address range: 0x18b399 - 0x18b4f9
int64_t function_18b399(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x55941fb0; // bp-24, 0x18b402
    int64_t v2 = (int64_t)&v1; // 0x18b459
    int64_t v3 = v2 + 16; // 0x18b461
    int64_t * v4 = (int64_t *)v3; // 0x18b461
    int64_t v5 = v2 - 8; // 0x18b461
    int64_t * v6 = (int64_t *)v5; // 0x18b461
    int64_t * v7 = (int64_t *)(v2 - 16); // 0x18b465
    *v6 = a7;
    *v7 = a3;
    int64_t v8 = *v6; // 0x18b48a
    *v6 = v5 ^ a7 ^ v8;
    v1 = v8;
    *v4 = v8;
    *v7 = *v4;
    *(int64_t *)(v2 + 32) = v1;
    v1 = 0x35368fa6;
    *v6 = a5;
    int64_t v9 = v1; // 0x18b4cc
    v1 = v3;
    *(int64_t *)(v2 + 8) = *v4;
    v1 = v3;
    return function_c4258(a1, a2, *v7, a4, v9, a6, v3);
}

// Address range: 0x18b4f9 - 0x18b666
int64_t function_18b4f9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18b4f9
    int64_t v1; // 0x18b4f9
    return function_c4258(a1, a2, v1, v1, v1, v1, a3);
}

// Address range: 0x18b666 - 0x18b66b
int64_t function_18b666(void) {
    // 0x18b666
    return function_18cc4b();
}

// Address range: 0x18b66b - 0x18b66c
int64_t function_18b66b(void) {
    // 0x18b66b
    int64_t result; // 0x18b66b
    return result;
}

// Address range: 0x18b687 - 0x18b688
int64_t function_18b687(int64_t a1) {
    // 0x18b687
    int64_t result; // 0x18b687
    return result;
}

// Address range: 0x18b6a1 - 0x18b6fd
int64_t function_18b6a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18b6ba
    int64_t v1; // 0x18b6a1
    int32_t * v2 = (int32_t *)(a2 - 0x295410fc + 2 * v1); // 0x18b6a1
    *v2 = *v2 + (int32_t)a1;
    int64_t v3; // 0x18b6a1
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 - (char)v4;
    unsigned char v5 = *(char *)&v3; // 0x18b6aa
    *(char *)v3 = v5 / 128 | 2 * v5;
    char * v6 = (char *)(a1 - 125); // 0x18b6ac
    *v6 = *v6 + (char)v3;
    unknown_5c238eb5();
    unknown_f1d9ec4();
    int32_t * v7 = (int32_t *)(v1 - 64); // 0x18b6c5
    int32_t v8 = *v7; // 0x18b6c5
    int32_t v9 = v1; // 0x18b6c5
    int32_t v10 = v8 + v9; // 0x18b6c5
    *v7 = v10;
    int64_t result = unknown_fffffffff9df2ad1(); // 0x18b6cb
    v3 = result;
    float80_t v11; // 0x18b6a1
    if (v10 < 0 == ((v10 ^ v8) & (v10 ^ v9)) < 0 != v11 != v11 || ((v10 ^ v8) & (v10 ^ v9)) >= 0) {
        // 0x18b6d2
        return result;
    }
    // 0x18b6e3
    return __asm_wait();
}

// Address range: 0x18b6fe - 0x18b83b
int64_t function_18b6fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a4;
    int64_t v3; // 0x18b6fe
    int32_t * v4 = (int32_t *)(8 * v3 + a1); // 0x18b6ff
    *v4 = *v4 + (int32_t)(int64_t)&v2;
    int32_t * v5 = (int32_t *)(v3 - 0x64ca9ff9); // 0x18b703
    int64_t v6; // 0x18b6fe
    *v5 = *v5 + (int32_t)v6;
    unknown_5a7fac0f();
    int32_t * v7 = (int32_t *)(a2 - 0x66fe1706 + 8 * v6); // 0x18b712
    uint32_t v8 = *v7; // 0x18b712
    uint32_t v9 = v8 + (int32_t)v3; // 0x18b712
    *v7 = v9;
    __asm_hlt();
    int64_t v10; // bp+16, 0x18b6fe
    int64_t v11 = (int64_t)&v10; // 0x18b71a
    int64_t v12; // 0x18b6fe
    uint64_t v13 = v12;
    v11 -= 8;
    int64_t v14; // 0x18b6fe
    *(int64_t *)v11 = v14;
    int64_t v15; // 0x18b6fe
    char v16 = *(char *)(v15 - 0x17e54b00); // 0x18b722
    unsigned char v17 = (char)v13 + (char)(v9 < v8) + v16; // 0x18b722
    int64_t v18 = v13 & -256 | (int64_t)v17; // 0x18b722
    uint32_t v19 = (int32_t)v14; // 0x18b728
    uint32_t v20 = v19 + (int32_t)v15; // 0x18b728
    int64_t v21 = v20; // 0x18b728
    int32_t v22 = *(int32_t *)0x6f23dd7c61d78081; // 0x18b72a
    int16_t v23 = v18;
    char v24 = __asm_in(v23); // 0x18b733
    int64_t v25 = v15 - 1; // 0x18b735
    while (v25 != 0) {
        // 0x18b71f
        v13 = v18;
        v11 -= 8;
        *(int64_t *)v11 = v21;
        v16 = *(char *)(v25 - 0x17e54b00);
        v17 = (char)v13 + (char)(v20 < v19) + v16;
        v18 = v13 & -256 | (int64_t)v17;
        v19 = (int32_t)v21;
        v20 = v19 + (int32_t)v25;
        v21 = v20;
        v22 = *(int32_t *)0x6f23dd7c61d78081;
        v23 = v18;
        v24 = __asm_in(v23);
        v25--;
    }
    // 0x18b737
    *(int32_t *)v6 = *(int32_t *)&v6;
    int64_t v26 = (int64_t)(*(int32_t *)v18 | (int32_t)a1); // 0x18b739
    int64_t v27 = v6; // 0x18b73b
    v6 = (int64_t)v24 & 0xffffffff | (int64_t)(v22 & -256);
    int64_t v28 = v27 & 0xffffffe8 | 23; // 0x18b73c
    uint32_t v29 = *(int32_t *)&v1; // 0x18b747
    uint32_t v30 = *(int32_t *)v26; // 0x18b747
    int64_t v31 = (v2 & (int64_t)&g1) != 0 ? -4 : 4; // 0x18b747
    int64_t v32 = v31 + v26; // 0x18b747
    v1 += v31;
    if (v29 == v30) {
        char * v33 = (char *)(v11 & 0xfffffff8); // 0x18b74a
        *v33 = *v33 + (char)v11;
        int64_t v34 = v6;
        int64_t v35 = (v34 + v11 / 256) % 256 | v34 & -256; // 0x18b74c
        v6 = v35;
        unknown_ffffffffb4024a5a(v32, v1);
        char * v36 = (char *)(v18 + 85); // 0x18b759
        unsigned char v37 = *v36; // 0x18b759
        unsigned char v38 = v37 + v17; // 0x18b759
        *v36 = v38;
        char v39 = *(char *)(v35 - 0x17edbb00); // 0x18b75e
        int64_t v40 = 256 * (int64_t)(v39 + (char)(v13 / 256) + (char)(v38 < v37)) | v18 & -0xff01; // 0x18b75e
        int32_t * v41 = (int32_t *)(v35 + 0x1e8013d + 2 * v40); // 0x18b764
        *v41 = *v41 + (int32_t)v28;
        int64_t v42 = unknown_10ce8771(); // 0x18b76b
        int64_t v43 = v32 + ((v2 & (int64_t)&g1) != 0 ? -1 : 1); // 0x18b772
        *(char *)v43 = __asm_insb((int16_t)v40);
        int32_t * v44 = (int32_t *)(v43 + 104); // 0x18b774
        *v44 = *v44 + v20;
        return v42 & -256;
    }
    // 0x18b7c3
    *(char *)v32 = __asm_insb(v23);
    int64_t v45 = v6;
    uint32_t v46 = (int32_t)v45 + (int32_t)(v29 < v30) + *(int32_t *)v45; // 0x18b7c4
    int64_t v47 = v46; // 0x18b7c4
    *(char *)0x1fbd38ce = *(char *)0x1fbd38ce + (char)(v46 / 256);
    int32_t v48 = v18; // 0x18b7cd
    *(int32_t *)0x8eb6c60 = *(int32_t *)0x8eb6c60 | v48;
    unknown_ffffffffe88a40db();
    __asm_in_134(26);
    int32_t * v49 = (int32_t *)(v32 + 109); // 0x18b7e5
    *v49 = *v49 + (int32_t)v1;
    char * v50 = (char *)v47; // 0x18b7ed
    char v51 = v46; // 0x18b7ed
    *v50 = *v50 + v51;
    int64_t v52 = __asm_wait(); // 0x18b7ef
    int32_t * v53 = (int32_t *)(v1 - 35); // 0x18b7f0
    *v53 = *v53 + (int32_t)v52;
    unknown_7a515ff9();
    unknown_ffffffffa125bd04();
    int32_t * v54 = (int32_t *)(v47 + 0x6ca93aa4); // 0x18b803
    *v54 = *v54 + (int32_t)v1;
    int64_t v55 = unknown_ffffffffb456910f(); // 0x18b809
    char * v56 = (char *)(v18 + 0x1e80079); // 0x18b80e
    *v56 = *v56 & v51;
    __asm_out(v23, (char)v55);
    int64_t * v57 = (int64_t *)((int64_t)(*(int32_t *)(v18 + 64 + 4 * v32) - 1) + 100); // 0x18b815
    *v57 = *v57 ^ v32;
    char v58 = __asm_in_134(112); // 0x18b819
    int32_t * v59 = (int32_t *)(v28 - 0x5f900a3f + 2 * v1); // 0x18b820
    *v59 = *v59 + v48;
    int32_t * v60 = (int32_t *)(v21 + 0x1319c4f5); // 0x18b829
    *v60 = *v60 + v48;
    int32_t * v61 = (int32_t *)(v18 - 0x194dfe18); // 0x18b831
    *v61 = *v61 - 65;
    return 0x10000 * (int32_t)(v55 & 0xff00 | (int64_t)v58) + 0x60f20000 >> 16;
}

// Address range: 0x18b83c - 0x18b890
int64_t function_18b83c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t result; // 0x18b83c
    bool v2; // 0x18b83c
    if (true != !v2) {
        // 0x18b83e
        return result;
    }
    // 0x18b870
    *(char *)a2 = (char)result + (char)a2;
    int32_t * v3 = (int32_t *)(v1 - 117); // 0x18b878
    *v3 = (int32_t)a4 - 1 + *v3;
    *(int32_t *)v1 = *(int32_t *)&v1 - 0x17c505ec;
    return unknown_6d97fe91();
}

// Address range: 0x18b89d - 0x18b89e
int64_t function_18b89d(int64_t a1) {
    // 0x18b89d
    int64_t result; // 0x18b89d
    return result;
}

// Address range: 0x18b8c7 - 0x18b8ea
int64_t function_18b8c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18b8c7
    int64_t v1; // 0x18b8c7
    *(int32_t *)0x62f61c5901e806e0 = (int32_t)v1;
    *(char *)(v1 & 0xffffffff) = 0;
    unknown_ffffffffa00ee1dd();
    float80_t v2; // 0x18b8c7
    bool v3; // 0x18b8c7
    *(float80_t *)(a2 - 66 + (v3 ? -4 : 4)) = __asm_fbstp(v2);
    return function_2012bf0(((a5 & (int64_t)&g1) == 0 ? 4 : -4) + a1);
}

// Address range: 0x18b8ea - 0x18b8f3
int64_t function_18b8ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 37); // 0x18b8eb
    int64_t v2; // 0x18b8ea
    *v1 = *v1 + (int32_t)(int64_t)&v2;
    return function_794f4912();
}

// Address range: 0x18b8f3 - 0x18b8f9
int64_t function_18b8f3(void) {
    // 0x18b8f3
    return function_2013707();
}

// Address range: 0x18b900 - 0x18b903
int64_t function_18b900(int64_t a1) {
    // 0x18b900
    int64_t result; // 0x18b900
    return result;
}

// Address range: 0x18b903 - 0x18b907
int64_t function_18b903(void) {
    // 0x18b903
    int64_t v1; // 0x18b903
    int64_t v2 = v1;
    return (v2 + (uint64_t)v1 / 256) % 256 | v2 & -256;
}

// Address range: 0x18b90c - 0x18b920
int64_t function_18b90c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18b90c
    return unknown_ffffffffe69e921b();
}

// Address range: 0x18b922 - 0x18b925
int64_t function_18b922(int64_t a1) {
    // 0x18b922
    int64_t result; // 0x18b922
    return result;
}

// Address range: 0x18b995 - 0x18b9a3
int64_t function_18b995(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18b995
    int64_t v1; // 0x18b995
    int32_t * v2 = (int32_t *)(v1 + 0x15aaae1c + 2 * v1); // 0x18b997
    *v2 = *v2 + (int32_t)a2;
    return a4 & 0xffffffff;
}

// Address range: 0x18b9ab - 0x18ba54
int64_t function_18b9ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x18b9ab
    int64_t v1; // 0x18b9ab
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a2;
    bool v5; // 0x18b9ab
    if (v5) {
        uint32_t v6 = (int32_t)a2;
        int64_t result = unknown_ffffffffafb6041d(); // 0x18ba17
        int32_t v7 = 2 * v6; // 0x18ba21
        *(int32_t *)a2 = v7;
        if (a4 == 1 || v7 == 0) {
            // 0x18ba25
            return result;
        }
        // 0x18ba53
        return 256 * (128 * (int64_t)(v7 < 0) | (int64_t)(v7 < v6) | 16 * (int64_t)((v6 & 8) != 0) | 4 * (int64_t)(llvm_ctpop_i8((char)v7) % 2 == 0)) | result & -0xff01 | 512;
    }
    uint32_t v8 = *(int32_t *)0x13e83b8 + (int32_t)a1; // 0x18b9b1
    *(int32_t *)0x13e83b8 = v8;
    if (v8 >= 1) {
        // 0x18b9b9
        return 2 * v1 & 0xffffffff;
    }
    int32_t v9 = a3;
    unsigned char v10 = (char)a4 % 32; // 0x18b9e9
    int32_t v11 = v9; // 0x18b9e9
    int64_t v12 = a3; // 0x18b9e9
    int32_t v13 = v9; // 0x18b9e9
    v4 = a2;
    if (v10 != 0) {
        *(char *)v2 = (char)v2 << v10;
        v12 = v3;
        v11 = v12;
        v13 = *(int32_t *)&v3;
    }
    int64_t v14 = unknown_fffffffff8c11ef1(); // 0x18b9eb
    __asm_out_135(-84, (int32_t)v14);
    *(int32_t *)v12 = v13 + v11;
    __asm_outsd((int16_t)v4, *(int32_t *)&v4);
    return v14 & -256 | 251;
}

// Address range: 0x18ba74 - 0x18ba76
int64_t function_18ba74(void) {
    // 0x18ba74
    int64_t v1; // 0x18ba74
    return function_18ba79(v1, v1, v1);
}

// Address range: 0x18ba77 - 0x18ba79
int64_t function_18ba77(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18ba77
    int64_t result; // 0x18ba77
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x18ba79 - 0x18ba8b
int64_t function_18ba79(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18ba79
    int64_t v1; // 0x18ba79
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x18ba79
    int64_t v3 = v2 ? 0xfffffffc : 4; // 0x18ba7c
    char * v4 = (char *)(v1 - 0x16bbe566); // 0x18ba7d
    *v4 = *v4 + (char)a3;
    uint32_t v5 = *(int32_t *)(v1 - 86); // 0x18ba83
    return v1 - (v5 > (int32_t)(v3 + a1) ? 0xcec901e9 : 0xcec901e8) & 0xffffffff;
}

// Address range: 0x18baa7 - 0x18baaa
int64_t function_18baa7(void) {
    // 0x18baa7
    int64_t result; // 0x18baa7
    return result;
}

// Address range: 0x18bac4 - 0x18bb09
int64_t function_18bac4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18bac4
    int64_t v1; // 0x18bac4
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4; // 0x18bac4
    uint32_t v4 = 2 * v3; // 0x18bac4
    if (llvm_ctpop_i8((char)v4) % 2 != 0) {
        // 0x18bac9
        *(char *)v2 = (char)v2 + (char)(v4 < v3) + (char)(v1 / 256);
        int64_t v5 = unknown_69e46ed6(); // 0x18bad0
        char * v6 = (char *)(int64_t)v4; // 0x18bad5
        *v6 = *v6 | (char)v5;
        *(char *)0x57f4d665 = *(char *)0x57f4d665 & 101;
        return unknown_25ee6ce7();
    }
    int32_t * v7 = (int32_t *)(3 * (v1 & -256 | (uint64_t)v1 % 256)); // 0x18bae8
    *v7 = *v7 + (int32_t)v2;
    int32_t v8 = a3; // 0x18baf3
    *(int32_t *)-0x54d9ea10 = v8;
    int32_t * v9 = (int32_t *)(a1 - 99); // 0x18baf9
    *v9 = *v9 ^ v8;
    __asm_int3();
    return function_ffffffffd91ead25();
}

// Address range: 0x18bb2b - 0x18bb2c
int64_t function_18bb2b(void) {
    // 0x18bb2b
    int64_t result; // 0x18bb2b
    return result;
}

// Address range: 0x18bb2d - 0x18bb3a
int64_t function_18bb2d(void) {
    // 0x18bb2d
    int64_t v1; // 0x18bb2d
    int64_t v2 = -1 - (int32_t)v1 < (int32_t)v1 ? 0x2a956277 : 0x2a956276; // 0x18bb2f
    return v1 - v2 & 0xffffffff;
}

// Address range: 0x18bb3a - 0x18bb54
int64_t function_18bb3a(void) {
    // 0x18bb3a
    int64_t v1; // 0x18bb3a
    *(int32_t *)-0x439a44c55c14fe18 = (int32_t)v1;
    unknown_ffffffffb74e4c47();
    unknown_3ad92750();
    __asm_int3();
    return function_18bb2b();
}

// Address range: 0x18bb91 - 0x18bb92
int64_t function_18bb91(void) {
    // 0x18bb91
    int64_t result; // 0x18bb91
    return result;
}

// Address range: 0x18bb9c - 0x18bba7
int64_t function_18bb9c(int64_t a1) {
    char * v1 = (char *)(a1 - 0x71a6fe97); // 0x18bb9c
    *v1 = 2 * *v1;
    return function_ffffffff8e1ebba8();
}

// Address range: 0x18bbe5 - 0x18bbe7
int64_t function_18bbe5(void) {
    // 0x18bbe5
    return function_18bb91();
}

// Address range: 0x18bbef - 0x18bbf0
int64_t function_18bbef(int64_t a1) {
    // 0x18bbef
    int64_t result; // 0x18bbef
    return result;
}

// Address range: 0x18bbf4 - 0x18bbf5
int64_t function_18bbf4(void) {
    // 0x18bbf4
    int64_t result; // 0x18bbf4
    return result;
}

// Address range: 0x18bc2f - 0x18bc32
int64_t function_18bc2f(void) {
    // 0x18bc2f
    int64_t result; // 0x18bc2f
    return result;
}
