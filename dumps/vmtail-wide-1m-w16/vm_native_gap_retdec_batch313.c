/*
 * Targeted RetDec C for native executable gap queue batch 313.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x14bf13-0x14c113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x14c113-0x14c313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b11ce-0x1b13ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b13ce-0x1b15ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b15ce-0x1b17ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x1b19ce-0x1b1bce rank=- name=- kind=- bytes=- uncovered=-
 *   0x25b2c2-0x25b4c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25b4c2-0x25b6c2 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_14bf13(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_14bfe1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_14bfe5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14c0b3(void);
int64_t function_14c104(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14c176(int64_t a1);
int64_t function_14c17c(void);
int64_t function_14c184(void);
int64_t function_14c1bc(int64_t a1);
int64_t function_14c1d2(void);
int64_t function_14c1d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_14c1d7(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_14c1e6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_14c2d1(void);
int64_t function_14c30a(int64_t a1);
int64_t function_1b11ce(uint64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b128b(int64_t a1);
int64_t function_1b1290(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1b130d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1b13af(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1b13cb(int64_t a1);
int64_t function_1b13cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b1419(int64_t a1);
int64_t function_1b145e(void);
int64_t function_1b1470(int64_t a1, int64_t a2);
int64_t function_1b14c7(int64_t a1);
int64_t function_1b14ea(int64_t a1);
int64_t function_1b150f(int64_t a1);
int64_t function_1b153f(void);
int64_t function_1b15b3(void);
int64_t function_1b15fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b1604(int64_t a1);
int64_t function_1b163a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1b166b(void);
int64_t function_1b16ae(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1b16ec(void);
int64_t function_1b1728(void);
int64_t function_1b173e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1b19ce(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_1b1a6a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1b1b48(int64_t a1);
int64_t function_25b290();
int64_t function_25b2c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_25b2fb(void);
int64_t function_25b333(void);
int64_t function_25b3e8(void);
int64_t function_25b3ff(void);
int64_t function_25b40a(void);
int64_t function_25b414(void);
int64_t function_25b471(void);
int64_t function_25b473(int64_t a1);
int64_t function_25b4c4(void);
int64_t function_25b4d0(void);
int64_t function_25b4ed(void);
int64_t function_25b574(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25b589(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25b5c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25b5e3(int64_t a1);
int64_t function_25b60b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25b640(int64_t a1, int64_t a2);
int64_t function_25b6af(void);
int64_t function_3ac51d7a();
int64_t function_3d1b2068();
int64_t function_3f6db9c8();
int64_t function_408f726e();
int64_t function_56e6377d();
int64_t function_8f51231();
int64_t function_ffffffffb1e9fd19();
int64_t function_ffffffffe90918de();
int64_t unknown_1d1fc5dc();
int64_t unknown_29c8da31();
int64_t unknown_2ab00d4d();
int64_t unknown_3184b71e();
int64_t unknown_3a3924d7();
int64_t unknown_3db967ea();
int64_t unknown_58e4b49d();
int64_t unknown_58fea9ae();
int64_t unknown_601b36ea();
int64_t unknown_60c028b4();
int64_t unknown_62210263();
int64_t unknown_771d0231();
int64_t unknown_b8f4fda();
int64_t unknown_ffffffffa3ac6615();
int64_t unknown_ffffffffafb8548f();
int64_t unknown_ffffffffb1e60f33();
int64_t unknown_ffffffffba903e34();
int64_t unknown_ffffffffbfccb81e();
int64_t unknown_ffffffffcc0fd9cc();
int64_t unknown_ffffffffcc4984c4();
int64_t unknown_ffffffffe49bb31c();
int64_t unknown_ffffffffe8b5c864();
int64_t unknown_ffffffffea7a8898();
int64_t unknown_fffffffff47f7ee0();

// Address range: 0x14bf13 - 0x14bf1e
int64_t function_14bf13(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x14bf13
    int64_t v1; // 0x14bf13
    char * v2 = (char *)(v1 - 74); // 0x14bf13
    *v2 = *v2 - (char)(a4 / 256);
    int64_t result = unknown_ffffffffe49bb31c(a1, a2, a3, a4); // 0x14bf16
    int32_t * v3 = (int32_t *)(result + 8 * a2); // 0x14bf1b
    *v3 = *v3 - (int32_t)v1;
    return result;
}

// Address range: 0x14bfe1 - 0x14bfe4
int64_t function_14bfe1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x14bfe1
    int64_t result; // 0x14bfe1
    return result;
}

// Address range: 0x14bfe5 - 0x14bff9
int64_t function_14bfe5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14bfe5
    int64_t v1; // 0x14bfe5
    uint64_t result = v1;
    *(char *)a1 = (char)(result / 256) + (char)v1 + (char)((char)result > -1 - (char)a4);
    *(char *)-0x213a0f09 = *(char *)-0x213a0f09 + (char)(v1 / 256);
    return result;
}

// Address range: 0x14c0b3 - 0x14c0b4
int64_t function_14c0b3(void) {
    // 0x14c0b3
    int64_t result; // 0x14c0b3
    return result;
}

// Address range: 0x14c104 - 0x14c11f
int64_t function_14c104(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)-0x17bb8ce0; // 0x14c108
    *(char *)-0x17bb8ce0 = v1 / 128 | 2 * v1;
    int64_t v2; // 0x14c104
    __asm_out(-38, (int32_t)v2);
    *(int32_t *)a2 = 0;
    unknown_3184b71e();
    return function_14c0b3();
}

// Address range: 0x14c176 - 0x14c177
int64_t function_14c176(int64_t a1) {
    // 0x14c176
    int64_t result; // 0x14c176
    return result;
}

// Address range: 0x14c17c - 0x14c17f
int64_t function_14c17c(void) {
    // 0x14c17c
    int64_t result; // 0x14c17c
    return result;
}

// Address range: 0x14c184 - 0x14c185
int64_t function_14c184(void) {
    // 0x14c184
    int64_t result; // 0x14c184
    return result;
}

// Address range: 0x14c1bc - 0x14c1bd
int64_t function_14c1bc(int64_t a1) {
    // 0x14c1bc
    int64_t result; // 0x14c1bc
    return result;
}

// Address range: 0x14c1d2 - 0x14c1d4
int64_t function_14c1d2(void) {
    // 0x14c1d2
    int64_t v1; // 0x14c1d2
    return function_14c1d7(v1, v1, v1);
}

// Address range: 0x14c1d5 - 0x14c1d7
int64_t function_14c1d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x14c1d5
    int64_t result; // 0x14c1d5
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x14c1d7 - 0x14c1e2
int64_t function_14c1d7(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x14c1d7
    int64_t v1; // 0x14c1d7
    *(char *)a1 = (char)(v1 ^ a3 / 256);
    bool v2; // 0x14c1d7
    uint64_t result = __asm_hlt((v2 ? -1 : 1) + a1, a2, a3); // 0x14c1df
    int64_t v3; // 0x14c1d7
    *(char *)a3 = *(char *)&v3 + (char)(result / 256);
    return result;
}

// Address range: 0x14c1e6 - 0x14c1ed
int64_t function_14c1e6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x14c1e6
    int64_t v1; // 0x14c1e6
    __asm_insd((int16_t)v1 + (int16_t)a3);
    float80_t v2; // 0x14c1e6
    *(int32_t *)a1 = (int32_t)v2;
    return function_14c184();
}

// Address range: 0x14c2d1 - 0x14c2d6
int64_t function_14c2d1(void) {
    // 0x14c2d1
    return function_ffffffffb1e9fd19();
}

// Address range: 0x14c30a - 0x14c30b
int64_t function_14c30a(int64_t a1) {
    // 0x14c30a
    int64_t result; // 0x14c30a
    return result;
}

// Address range: 0x1b11ce - 0x1b1285
int64_t function_1b11ce(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x1b11ce
    int32_t * v3 = (int32_t *)(v2 + 0x6e80080a); // 0x1b11ce
    *v3 = *v3 + (int32_t)v2;
    uint32_t v4 = (int32_t)a4 % 32; // 0x1b11d4
    int64_t v5; // 0x1b11ce
    if (v4 != 0) {
        uint32_t v6 = *(int32_t *)&v5; // 0x1b11d4
        *(int32_t *)v5 = v6 >> 32 - v4 | v6 << v4;
    }
    int32_t * v7 = (int32_t *)(v5 - 24); // 0x1b11d6
    *v7 = *v7 - (int32_t)a1;
    int32_t * v8 = (int32_t *)(v5 + a3); // 0x1b11d9
    *v8 = *v8 + (int32_t)v1;
    int64_t v9 = 2 * a3; // 0x1b11dd
    int64_t v10 = v9 & 254 | a3 & -256; // 0x1b11dd
    int32_t v11 = __asm_in((int16_t)v10); // 0x1b11df
    v5 = v11;
    int32_t * v12 = (int32_t *)(a4 + 0xc1e5445); // 0x1b11e2
    uint32_t v13 = *v12; // 0x1b11e2
    uint32_t v14 = v13 + (int32_t)v2; // 0x1b11e2
    *v12 = v14;
    int64_t v15 = v5; // 0x1b11f2
    char v16 = v15; // 0x1b11f2
    char v17 = v9; // 0x1b11f2
    char v18 = v14 < v13; // 0x1b11f2
    unsigned char v19 = v16 - (v18 | v17); // 0x1b11f2
    int64_t v20 = v15 & -256 | (int64_t)v19; // 0x1b11f2
    v5 = v20;
    if (((v19 - v18 ^ v16) & (char)(v15 ^ v9)) >= 0) {
        // 0x1b11f6
        return v2 & 0xffffffff;
    }
    char v21 = *(char *)-0x1712e45f; // 0x1b11ff
    int64_t v22; // 0x1b11ce
    *(char *)-0x1712e45f = v21 | (char)(int64_t)&v22;
    int32_t * v23 = (int32_t *)(v2 + 0x45dcc49e); // 0x1b1205
    *v23 = *v23 + (int32_t)v10;
    unsigned char v24 = llvm_ctpop_i8((char)v2 - v17); // 0x1b120d
    v5 = unknown_ffffffffa3ac6615();
    if (v24 % 2 == 0) {
        char * v25 = (char *)((v20 & 0xffffffff) + 4 * v2); // 0x1b1271
        *v25 = *v25 + (char)(v2 / 256);
        unknown_ffffffffe8b5c864();
        char v26 = *(char *)(v2 - 0x39ff5417); // 0x1b127f
        return 256 * (int64_t)((char)(a1 / 256) - v26) | a1 & 0xffff00ff;
    }
    // 0x1b1216
    *(int32_t *)a1 = *(int32_t *)&v1;
    bool v27; // 0x1b11ce
    int64_t v28 = v27 ? -4 : 4; // 0x1b1216
    int64_t v29 = unknown_ffffffffbfccb81e(v28 + a1 + (v27 ? -1 : 1), v1 + v28); // 0x1b1218
    char * v30 = (char *)(8 * *(int64_t *)(int64_t)v11 + v29); // 0x1b1223
    *v30 = *v30 % 2;
    unknown_29c8da31();
    return unknown_ffffffffba903e34();
}

// Address range: 0x1b128b - 0x1b128f
int64_t function_1b128b(int64_t a1) {
    // 0x1b128b
    int64_t result; // 0x1b128b
    int32_t * v1 = (int32_t *)(result + 127); // 0x1b128b
    *v1 = *v1 + (int32_t)a1;
    return result;
}

// Address range: 0x1b1290 - 0x1b12f1
int64_t function_1b1290(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1b1290
    int64_t v1; // 0x1b1290
    *(char *)a2 = (char)(v1 & v1);
    int64_t * v2 = (int64_t *)(v1 - 8); // 0x1b12a2
    int16_t v3 = a3; // 0x1b12a6
    int64_t v4 = unknown_58e4b49d(); // 0x1b1297
    int64_t v5; // 0x1b1290
    int64_t v6 = v5;
    int32_t * v7 = (int32_t *)(2 * a3 - 117 + a1); // 0x1b129c
    *v7 = *v7 + (int32_t)a1;
    *v2 = v6;
    *(char *)v4 = (char)v1;
    __asm_outsb(v3, *(char *)0x4c54cc);
    __asm_in(v3);
    v4 = unknown_58fea9ae();
    __asm_out_133(v3, (int32_t)v4);
    int64_t v8 = *v2; // 0x1b12ae
    int64_t v9 = v6 - 1; // 0x1b12b4
    int64_t v10 = 0x5cbc473a; // 0x1b12b4
    while (v9 != 0 == ((v8 & 64) != 0)) {
        // 0x1b129c
        v6 = v9;
        v7 = (int32_t *)(2 * a3 - 117 + v10);
        *v7 = *v7 + (int32_t)v10;
        *v2 = v6;
        *(char *)v4 = (char)v1;
        __asm_outsb(v3, *(char *)0x4c54cc);
        __asm_in(v3);
        v4 = unknown_58fea9ae();
        __asm_out_133(v3, (int32_t)v4);
        v8 = *v2;
        v9 = v6 - 1;
        v10 = 0x5cbc473a;
    }
    int64_t v11 = (v8 & (int64_t)&g2) == 0 ? 0x4c54d0 : 0x4c54c8; // 0x1b12be
    unsigned char v12 = (char)unknown_ffffffffcc0fd9cc(0x5d089c06, v11); // 0x1b12cb
    __asm_in_134(58);
    unsigned char v13 = (char)v11 + 127 + (char)(-1 - v12 < v12); // 0x1b12d0
    unsigned char v14 = llvm_ctpop_i8(v13); // 0x1b12d0
    int64_t result = (int64_t)v13 | 0x4c5400; // 0x1b12d0
    if (v14 % 2 != 0) {
        // 0x1b12bc
        return result;
    }
    int64_t v15 = (v6 + 0x5cbc4739 & 0xffffffff) - 1; // 0x1b12ba
    int32_t * v16 = (int32_t *)(9 * v15); // 0x1b12d4
    *v16 = *v16 + (int32_t)v15;
    float80_t v17; // 0x1b1290
    *(float80_t *)(2 * v1 & 0xffffffff) = __asm_fbstp(v17);
    return result & 0x54ef;
}

// Address range: 0x1b130d - 0x1b1339
int64_t function_1b130d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0xf00441); // 0x1b1312
    int32_t v2 = a1; // 0x1b1312
    *v1 = *v1 + v2;
    int64_t v3; // 0x1b130d
    int32_t * v4 = (int32_t *)(v3 + 0x40ad1a71); // 0x1b1321
    *v4 = *v4 + v2;
    __asm_iretd(a1);
    int64_t result = unknown_ffffffffb1e60f33(); // 0x1b132d
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v5; // 0x1b130d
    *(char *)a1 = *(char *)&v5;
    int64_t v6; // 0x1b130d
    *(char *)a3 = *(char *)&v6 | (char)(a4 / 256);
    return result;
}

// Address range: 0x1b13af - 0x1b13c9
int64_t function_1b13af(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1b13af
    int64_t v1; // 0x1b13af
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    char * v3 = (char *)a3; // 0x1b13b1
    int64_t result; // 0x1b13af
    int64_t v4; // 0x1b13af
    *v3 = *(char *)&v4 + (char)(result / 256);
    int64_t v5 = result;
    *(char *)v5 = *(char *)&result + (char)v5;
    *v3 = *(char *)&v4 + (char)result;
    uint32_t v6 = (int32_t)v1 + (int32_t)a3; // 0x1b13b7
    if (v6 != 0) {
        // 0x1b13ce
        return result;
    }
    // 0x1b13c2
    *(int64_t *)((int64_t)v6 - 8) = -0x6ac61f6;
    return result;
}

// Address range: 0x1b13cb - 0x1b13ce
int64_t function_1b13cb(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 113); // 0x1b13cb
    int64_t result; // 0x1b13cb
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1b13cf - 0x1b140a
int64_t function_1b13cf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b13cf
    bool v1; // 0x1b13cf
    int64_t v2 = (v1 ? -1 : 1) + a1; // 0x1b13d4
    __asm_iretd(v2);
    int64_t v3 = unknown_fffffffff47f7ee0(); // 0x1b13d6
    if ((*(char *)(v2 + 63) & (char)a3) == 0) {
        // 0x1b13e3
        return function_ffffffffe90918de();
    }
    // 0x1b1403
    return 0x10000 * (int32_t)v3 >> 16;
}

// Address range: 0x1b1419 - 0x1b141c
int64_t function_1b1419(int64_t a1) {
    // 0x1b1419
    int64_t result; // 0x1b1419
    return result;
}

// Address range: 0x1b145e - 0x1b145f
int64_t function_1b145e(void) {
    // 0x1b145e
    int64_t result; // 0x1b145e
    return result;
}

// Address range: 0x1b1470 - 0x1b1476
int64_t function_1b1470(int64_t a1, int64_t a2) {
    // 0x1b1470
    return function_1b145e();
}

// Address range: 0x1b14c7 - 0x1b14c8
int64_t function_1b14c7(int64_t a1) {
    // 0x1b14c7
    int64_t result; // 0x1b14c7
    return result;
}

// Address range: 0x1b14ea - 0x1b14ec
int64_t function_1b14ea(int64_t a1) {
    // 0x1b14ea
    int64_t result; // 0x1b14ea
    return result;
}

// Address range: 0x1b150f - 0x1b1510
int64_t function_1b150f(int64_t a1) {
    // 0x1b150f
    int64_t result; // 0x1b150f
    return result;
}

// Address range: 0x1b153f - 0x1b1542
int64_t function_1b153f(void) {
    // 0x1b153f
    int64_t v1; // 0x1b153f
    __asm_hlt(v1, v1, v1);
    return v1 & 0xffffffff;
}

// Address range: 0x1b15b3 - 0x1b15bb
int64_t function_1b15b3(void) {
    // 0x1b15b3
    return function_56e6377d();
}

// Address range: 0x1b15fa - 0x1b15fe
int64_t function_1b15fa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 47); // 0x1b15fa
    int64_t result; // 0x1b15fa
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1b1604 - 0x1b1606
int64_t function_1b1604(int64_t a1) {
    // 0x1b1604
    int64_t result; // 0x1b1604
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x1b163a - 0x1b1641
int64_t function_1b163a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1b163a
    int64_t result; // 0x1b163a
    return result;
}

// Address range: 0x1b166b - 0x1b1681
int64_t function_1b166b(void) {
    char v1 = *(char *)0xa212574; // 0x1b166d
    int64_t v2; // 0x1b166b
    *(char *)0xa212574 = v1 + (char)((uint64_t)v2 / 256);
    return function_3ac51d7a();
}

// Address range: 0x1b16ae - 0x1b16dd
int64_t function_1b16ae(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    uint64_t v1 = unknown_60c028b4(); // 0x1b16ae
    *(char *)(a3 + 0x1a58b0) = (char)(a4 / 256);
    char v2 = a4; // 0x1b16c6
    int64_t v3; // 0x1b16ae
    *(char *)a3 = *(char *)&v3 + v2;
    unsigned char v4 = *(char *)((v1 / 256 + v1 + (int64_t)((int32_t)v1 < 0x8b0ac101)) % 256 | v1 & 0xffffff00); // 0x1b16ca
    int64_t result = (a1 + 243 + (v4 > -1 - v2 ? 31 : 32)) % 256 | a1 & 0xffffff00; // 0x1b16d4
    int32_t * v5 = (int32_t *)(result - 8); // 0x1b16d6
    int32_t v6 = *v5; // 0x1b16d6
    *v5 = 2 * v6 | (int32_t)(v6 < 0);
    return result;
}

// Address range: 0x1b16ec - 0x1b16ed
int64_t function_1b16ec(void) {
    // 0x1b16ec
    int64_t result; // 0x1b16ec
    return result;
}

// Address range: 0x1b1728 - 0x1b1732
int64_t function_1b1728(void) {
    // 0x1b1728
    return function_3d1b2068();
}

// Address range: 0x1b173e - 0x1b17ce
int64_t function_1b173e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x1b173e
    int32_t v3 = v2;
    int32_t v4 = v3; // 0x1b174b
    int64_t v5; // 0x1b173e
    if (v3 > -0x5adbffff) {
        int64_t v6 = function_1b16ec(); // 0x1b174b
        v4 = v6;
        v5 = v6;
    }
    // 0x1b174d
    __asm_outsd((int16_t)a3, __readfsdword(a2));
    char * v7 = (char *)(v2 - 81); // 0x1b175c
    *v7 = *v7 + (char)(a3 / 256);
    int32_t v8 = __asm_in_134(-7); // 0x1b1764
    int64_t result = v8; // 0x1b1764
    if (v4 - *(int32_t *)(v5 + 0x8a13630) <= 0x9f295801) {
        // 0x1b1768
        return result & -256 | (int64_t)*(char *)&v1;
    }
    // 0x1b17c3
    *(char *)(a1 - a2 & 0xffffffff) = (char)v8;
    unsigned char v9 = (char)a2 % 32 & (char)a4;
    if (v9 != 0) {
        int32_t * v10 = (int32_t *)(v2 - 0x6091c577); // 0x1b17c8
        *v10 = *v10 << (int32_t)v9;
    }
    return result;
}

// Address range: 0x1b19ce - 0x1b1a66
int64_t function_1b19ce(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x1b19ce
    int64_t v1; // 0x1b19ce
    uint64_t v2 = v1;
    int64_t v3 = (int64_t)*(int32_t *)0xe5ac4d6; // 0x1b19ce
    int64_t v4 = -41 * v3; // 0x1b19ce
    int64_t v5 = v4 & 0xffffffff; // 0x1b19ce
    int64_t v6 = v1 & -256 | v2 % 256; // 0x1b19d6
    bool v7; // 0x1b19ce
    int64_t v8 = (v7 ? -1 : 1) + a2; // 0x1b19d6
    if (v4 == -0x2900000000 * v3 >> 32) {
        unsigned char v9 = (char)a4;
        *(char *)a4 = v9 / 2 | 128 * v9;
        *(int32_t *)v5 = (int32_t)v6;
        int64_t v10 = v1 & -256 | 61; // 0x1b19e3
        int64_t v11 = v8 + v10 & 0xffffffff; // 0x1b19e5
        *(int32_t *)(v10 + 0x5cd93600 + 4 * v11) = (int32_t)a5;
        int64_t v12 = __asm_hlt(v5 + (v7 ? -4 : 4), v11, a5); // 0x1b19f0
        return (int64_t)(*(int32_t *)v12 ^ (int32_t)v12);
    }
    // 0x1b1a1b
    *(char *)-0x17158cc3 = *(char *)-0x17158cc3 | (char)v2;
    int32_t * v13 = (int32_t *)v6; // 0x1b1a21
    int32_t v14 = a5; // 0x1b1a21
    *v13 = *v13 + v14;
    char * v15 = (char *)(a4 - 33); // 0x1b1a23
    *v15 = *v15 | (char)(a4 / 256);
    unknown_771d0231();
    *(int32_t *)v5 = __asm_insd((int16_t)a5);
    char * v16 = (char *)(a4 - 0x170b3ded + v1); // 0x1b1a36
    *v16 = *v16 + (char)a5;
    int32_t * v17 = (int32_t *)(v1 + 126); // 0x1b1a3d
    *v17 = *v17 + v14;
    unknown_2ab00d4d();
    int32_t * v18 = (int32_t *)(v1 + 8 * v1); // 0x1b1a51
    *v18 = *v18 + (int32_t)v8;
    __asm_int1(v5 + 1, v8 + 1);
    return 0x100000000 * unknown_62210263() >> 32;
}

// Address range: 0x1b1a6a - 0x1b1b27
int64_t function_1b1a6a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 + 30); // 0x1b1a74
    char v2 = 2 * *v1; // 0x1b1a74
    char v3 = llvm_ctpop_i8(v2); // 0x1b1a74
    *v1 = v2;
    char v4 = v3; // 0x1b1a79
    while (v4 % 2 == 0) {
        // 0x1b1abe
        unknown_ffffffffcc4984c4();
        char v5 = *(char *)-0x7efe17c5fc5c12ef - 124; // 0x1b1ace
        v4 = llvm_ctpop_i8(v5);
        if (v5 != 0) {
            uint64_t result = unknown_b8f4fda(); // 0x1b1ad4
            if (*(char *)0x1e8aea5 == -(char)(a4 / 256)) {
                // 0x1b1af6
                return result;
            }
            char * v6 = (char *)(result + 0x3600800); // 0x1b1adb
            *v6 = *v6 + (char)result;
            *(char *)0x1e8aea6 = *(char *)0x1e8aea6 + (char)(result / 256);
            int64_t v7 = unknown_601b36ea(); // 0x1b1ae4
            char * v8 = (char *)v7; // 0x1b1ae9
            *v8 = *v8 | -91;
            return (v7 + 175) % 256 | v7 & -256;
        }
    }
    char * v9 = (char *)(a4 - 111); // 0x1b1a86
    *v9 = *v9 - 91;
    return unknown_ffffffffafb8548f();
}

// Address range: 0x1b1b48 - 0x1b1b49
int64_t function_1b1b48(int64_t a1) {
    // 0x1b1b48
    int64_t result; // 0x1b1b48
    return result;
}

// Address range: 0x25b2c2 - 0x25b2f6
int64_t function_25b2c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a4;
    unsigned char v2 = (char)a2;
    unsigned char v3 = (char)(a4 / 256) + v2; // 0x25b2c9
    *(char *)a2 = v3;
    if (v3 >= v2 && v3 != 0) {
        function_25b290();
    }
    // 0x25b2cd
    int64_t v4; // 0x25b2c2
    char v5 = (uint64_t)v4 / 256; // 0x25b2d6
    char v6 = *(char *)-0x64b12c23 + v5; // 0x25b2d6
    *(char *)-0x64b12c23 = v6;
    int32_t v7; // 0x25b2c2
    if (v6 < 0) {
        function_25b2c2(0xea3b0a40, a2, a3, v1);
        v7 = v1;
    } else {
        // 0x25b2cd
        v7 = *(int32_t *)&v1;
    }
    // 0x25b2de
    *(int32_t *)v1 = v7 - 0x15c4f5c0;
    char * v8 = (char *)((a2 & 0xffffffd8) - 0x3ffec216); // 0x25b2eb
    *v8 = *v8 + v5;
    return unknown_ffffffffea7a8898();
}

// Address range: 0x25b2fb - 0x25b2fd
int64_t function_25b2fb(void) {
    // 0x25b2fb
    int64_t result; // 0x25b2fb
    return result;
}

// Address range: 0x25b333 - 0x25b338
int64_t function_25b333(void) {
    // 0x25b333
    return function_408f726e();
}

// Address range: 0x25b3e8 - 0x25b3eb
int64_t function_25b3e8(void) {
    // 0x25b3e8
    int64_t result; // 0x25b3e8
    return result;
}

// Address range: 0x25b3ff - 0x25b400
int64_t function_25b3ff(void) {
    // 0x25b3ff
    int64_t result; // 0x25b3ff
    return result;
}

// Address range: 0x25b40a - 0x25b40f
int64_t function_25b40a(void) {
    // 0x25b40a
    return function_8f51231();
}

// Address range: 0x25b414 - 0x25b416
int64_t function_25b414(void) {
    // 0x25b414
    int64_t result; // 0x25b414
    return result;
}

// Address range: 0x25b471 - 0x25b473
int64_t function_25b471(void) {
    // 0x25b471
    return function_25b3ff();
}

// Address range: 0x25b473 - 0x25b474
int64_t function_25b473(int64_t a1) {
    // 0x25b473
    int64_t result; // 0x25b473
    return result;
}

// Address range: 0x25b4c4 - 0x25b4c5
int64_t function_25b4c4(void) {
    // 0x25b4c4
    int64_t result; // 0x25b4c4
    return result;
}

// Address range: 0x25b4d0 - 0x25b4e0
int64_t function_25b4d0(void) {
    // 0x25b4d0
    unknown_1d1fc5dc();
    return function_3f6db9c8();
}

// Address range: 0x25b4ed - 0x25b4ef
int64_t function_25b4ed(void) {
    // 0x25b4ed
    return function_25b4c4();
}

// Address range: 0x25b574 - 0x25b588
int64_t function_25b574(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_3db967ea(); // 0x25b577
    int32_t * v1 = (int32_t *)result; // 0x25b57c
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x25b589 - 0x25b5be
int64_t function_25b589(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25b589
    int64_t v1; // 0x25b589
    uint32_t v2 = (int32_t)v1; // 0x25b589
    int32_t v3 = v2 - 0x2339cbb2; // 0x25b589
    int16_t v4 = *(int16_t *)(a3 + (int64_t)&g1); // 0x25b58e
    int64_t v5 = v3; // 0x25b594
    if (v3 >= 0) {
        v5 = function_25b5c5(a1, a2, a3, a4);
    }
    // 0x25b596
    *(char *)(a1 & 0xffffffff) = *(char *)(v5 & 0xffffffff);
    bool v6; // 0x25b589
    int32_t v7 = v6 ? -1 : 1; // 0x25b597
    uint32_t v8 = v7 + (int32_t)a1; // 0x25b597
    int64_t v9 = v8; // 0x25b597
    float80_t v10; // 0x25b589
    *(int64_t *)v9 = (int64_t)(v10 + (float80_t)v4);
    int64_t v11 = a2 & 0xffffffff; // 0x25b59b
    if (v2 > 0x2339cbb1 || v3 == 0) {
        v11 = function_25b60b(v9, (int64_t)(v7 + (int32_t)v5), a3);
    }
    uint64_t v12 = v11;
    int64_t result = v12 & -256 | (int64_t)*(char *)(v12 % 256 + v1); // 0x25b59d
    bool v13 = v3 < 0; // 0x25b59d
    int64_t v14 = a3; // 0x25b59d
    bool v15 = v2 > 0x2339cbb1; // 0x25b59d
    while (v13) {
        unsigned char v16 = (char)v14; // 0x25b5ae
        char v17 = v15; // 0x25b5ae
        unsigned char v18 = *(char *)(a4 - 0xbde7194) + v17; // 0x25b5ae
        char v19 = v16 - v18; // 0x25b5ae
        v15 = v15 ? v18 != -1 | v19 - v17 > v16 : v18 > v16;
        v13 = v19 < 0;
        v14 = v19;
        if (a4 != 0) {
            int32_t * v20 = (int32_t *)(v9 + 0x6800b3c8); // 0x25b5b6
            *v20 = *v20 + v8;
            return result;
        }
    }
    // 0x25b5a0
    return result & -51 ^ 134;
}

// Address range: 0x25b5c5 - 0x25b5e2
int64_t function_25b5c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25b5c5
    *(int32_t *)0x2e2a65ff = *(int32_t *)0x2e2a65ff + (int32_t)a4;
    int64_t result = unknown_3a3924d7(); // 0x25b5d1
    int64_t v1; // 0x25b5c5
    int16_t * v2 = (int16_t *)(v1 - 0x4601fe18); // 0x25b5d6
    *v2 = *v2 & (int16_t)a4;
    int64_t v3; // 0x25b5c5
    *(int32_t *)a3 = *(int32_t *)&v3 + 1;
    return result;
}

// Address range: 0x25b5e3 - 0x25b5e7
int64_t function_25b5e3(int64_t a1) {
    // 0x25b5e3
    int64_t result; // 0x25b5e3
    return result;
}

// Address range: 0x25b60b - 0x25b624
int64_t function_25b60b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x25b60b
    int64_t v1; // 0x25b60b
    int64_t v2 = v1;
    bool v3; // 0x25b60b
    if (v3 || v3) {
        // 0x25b60d
        *(int32_t *)0xf02b0e54 = *(int32_t *)0xf02b0e54 + (int32_t)v1;
        return ((v2 & 0xff00) + a3 & 0xff00 | v2 & 0xffff00ff) + 0xe8d65d7f & 0xffffffff;
    }
    // 0x25b620
    *(char *)a1 = (char)v2;
    return v2 & -256 | (int64_t)__asm_in_135((int16_t)a3);
}

// Address range: 0x25b640 - 0x25b648
int64_t function_25b640(int64_t a1, int64_t a2) {
    // 0x25b640
    int64_t result; // 0x25b640
    return result;
}

// Address range: 0x25b6af - 0x25b6b0
int64_t function_25b6af(void) {
    // 0x25b6af
    int64_t result; // 0x25b6af
    return result;
}
