/*
 * Targeted RetDec C for native executable gap queue batch 410.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1d525a-0x1d545a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d545a-0x1d565a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d565a-0x1d585a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d585a-0x1d5a5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d5a5a-0x1d5c5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x31c2bb-0x31c4bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31c4bb-0x31c6bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31cabb-0x31ccbb rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
extern int g4;
extern int g5;
extern int g6;
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

int64_t function_1bb1f337();
int64_t function_1d525a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d52f6(int64_t a1);
int64_t function_1d52f7(void);
int64_t function_1d52fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d53cb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1d5451(void);
int64_t function_1d5475(int64_t a1);
int64_t function_1d5486(void);
int64_t function_1d5491(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1d54a9(void);
int64_t function_1d54ee(int64_t a1);
int64_t function_1d556b(void);
int64_t function_1d559c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d55a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d5605(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d5625(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d562e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1d56a9(void);
int64_t function_1d56be(void);
int64_t function_1d576d(void);
int64_t function_1d5813(void);
int64_t function_1d583c(void);
int64_t function_1d583f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d58c4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1d58f8(int64_t a1, int64_t a2);
int64_t function_1d58fc(int64_t a1);
int64_t function_1d5900(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d595b(void);
int64_t function_1d5987(void);
int64_t function_1d59b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d59d7(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_1d59fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d5a3d(void);
int64_t function_1d5a46(void);
int64_t function_1d5afa(void);
int64_t function_1d5b22(int64_t a1);
int64_t function_1d5b47(void);
int64_t function_1d5b9a(void);
int64_t function_1d5ba7(void);
int64_t function_1d5be4(int64_t a1);
int64_t function_1d5c2a(void);
int64_t function_2649b578();
int64_t function_31c2bb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_31c2c3(int64_t a1);
int64_t function_31c44b(void);
int64_t function_31c464(void);
int64_t function_31c484(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31c4cd(void);
int64_t function_31c536(void);
int64_t function_31c574(void);
int64_t function_31c57a(void);
int64_t function_31c67a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31cabb(void);
int64_t function_31cb07(int64_t a1);
int64_t function_31cb0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31cb54(void);
int64_t function_31cb66(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31cbcb(void);
int64_t function_31cc33(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31ccb6(void);
int64_t function_44a6b38();
int64_t function_46a828f1();
int64_t function_621f4254();
int64_t function_c84e08d();
int64_t function_ffffffffb23322db();
int64_t function_ffffffffc7bfdc72();
int64_t function_ffffffffd8763f37();
int64_t function_ffffffffe86e455c();
int64_t unknown_16b20504();
int64_t unknown_171d4b0a();
int64_t unknown_1c165ec5();
int64_t unknown_206127c();
int64_t unknown_3ac5c44e();
int64_t unknown_3b67004c();
int64_t unknown_3d1f3c97();
int64_t unknown_3d1f420f();
int64_t unknown_41e50e9();
int64_t unknown_645b12b1();
int64_t unknown_70909115();
int64_t unknown_84cc285();
int64_t unknown_ffffffffa1abb675();
int64_t unknown_ffffffffab799c7a();
int64_t unknown_fffffffff5f24b20();
int64_t unknown_fffffffff8465609();

// Address range: 0x1d525a - 0x1d52e1
int64_t function_1d525a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d525a
    int64_t v1; // 0x1d525a
    uint64_t result = v1;
    int64_t v2 = a3;
    __asm_int(-87);
    *(int32_t *)result = (int32_t)(result | v1);
    unsigned char v3 = *(char *)0x6b224168; // 0x1d5261
    char v4 = v1 / 256; // 0x1d5261
    char v5 = v3 + v4; // 0x1d5261
    *(char *)0x6b224168 = v5;
    if (v5 < 1) {
        uint32_t v6 = (int32_t)a4 % 32; // 0x1d52df
        if (v6 != 0) {
            *(int32_t *)v2 = *(int32_t *)&v2 >> v6;
        }
        return result;
    }
    char * v7 = (char *)(v1 - 13); // 0x1d5272
    *v7 = (char)(v5 < v3) + (char)a4 + *v7;
    unsigned char v8 = *(char *)0xe5f7c7c; // 0x1d5275
    unsigned char v9 = v8 + v4; // 0x1d5275
    *(char *)0xe5f7c7c = v9;
    uint32_t v10 = 0x10000 * (int32_t)v1 >> 16; // 0x1d527d
    uint32_t v11 = v9 < v8 ? -0x13b9896f : -0x13b98970; // 0x1d527f
    uint32_t v12 = v10 - v11; // 0x1d527f
    int32_t v13 = v9 < v8; // 0x1d527f
    int64_t result2 = v12; // 0x1d527f
    if (((v12 - v13 ^ v10) & (v10 ^ -0x80000000)) < 0) {
        // 0x1d5286
        return result2 & 0xffff00ff | 256 * (16 * (int64_t)(v10 % 16 + v13 - v11 % 2 > 15) | (int64_t)(v9 < v8 | v10 < v11) | 4 * (int64_t)(llvm_ctpop_i8((char)v12) % 2 == 0)) | 512;
    }
    // 0x1d529f
    *(char *)-0x38243658 = *(char *)-0x38243658 + (char)(result / 256);
    return result2;
}

// Address range: 0x1d52f6 - 0x1d52f7
int64_t function_1d52f6(int64_t a1) {
    // 0x1d52f6
    int64_t result; // 0x1d52f6
    return result;
}

// Address range: 0x1d52f7 - 0x1d52fe
int64_t function_1d52f7(void) {
    // 0x1d52f7
    int64_t result; // 0x1d52f7
    return result;
}

// Address range: 0x1d52fe - 0x1d532b
int64_t function_1d52fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d52fe
    int64_t v1; // 0x1d52fe
    int64_t v2 = v1;
    *(char *)0x775a5bfe = *(char *)0x775a5bfe >> 1;
    int32_t * v3 = (int32_t *)(unknown_171d4b0a() + 8 * a4); // 0x1d5309
    *v3 = *v3 >> 27;
    unknown_70909115();
    char v4 = *(char *)(v1 + 24); // 0x1d5314
    int64_t result = unknown_fffffffff5f24b20(); // 0x1d531a
    char * v5 = (char *)(result - 24); // 0x1d5321
    *v5 = *v5 + (char)a4;
    int32_t * v6 = (int32_t *)(a1 - 0x3f5775e); // 0x1d5324
    int32_t v7 = *v6; // 0x1d5324
    *v6 = v7 + (int32_t)(v2 & 0xffffff00 | (int64_t)(v4 + (char)v2));
    return result;
}

// Address range: 0x1d53cb - 0x1d53e2
int64_t function_1d53cb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1d53cb
    int64_t v1; // 0x1d53cb
    char * v2 = (char *)(v1 - 0x1afe179b); // 0x1d53cb
    *v2 = *v2 + (char)(v1 / 256);
    *(char *)(v1 + 0x5612d800) = (char)(a4 / 256);
    float80_t v3; // 0x1d53cb
    *(int16_t *)(a4 + 0x1e89ed4) = (int16_t)v3;
    return function_ffffffffb23322db();
}

// Address range: 0x1d5451 - 0x1d545c
int64_t function_1d5451(void) {
    // 0x1d5451
    return function_ffffffffc7bfdc72();
}

// Address range: 0x1d5475 - 0x1d5479
int64_t function_1d5475(int64_t a1) {
    // 0x1d5475
    int64_t result; // 0x1d5475
    return result;
}

// Address range: 0x1d5486 - 0x1d5487
int64_t function_1d5486(void) {
    // 0x1d5486
    int64_t result; // 0x1d5486
    return result;
}

// Address range: 0x1d5491 - 0x1d54a6
int64_t function_1d5491(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_3d1f3c97(); // 0x1d5491
    int64_t v2; // 0x1d5491
    int32_t * v3 = (int32_t *)(a3 + 0x42829e84 + 2 * v2); // 0x1d549b
    *v3 = *v3 + (int32_t)v2;
    int64_t v4; // 0x1d5491
    char v5 = *(char *)&v4; // 0x1d54a2
    *(char *)a3 = v5 + (char)(a4 / 256 + (int64_t)(-1 - (int32_t)v2 < (int32_t)a4) + v1);
    return function_1d5486();
}

// Address range: 0x1d54a9 - 0x1d54aa
int64_t function_1d54a9(void) {
    // 0x1d54a9
    int64_t result; // 0x1d54a9
    return result;
}

// Address range: 0x1d54ee - 0x1d5502
int64_t function_1d54ee(int64_t a1) {
    // 0x1d54ee
    int64_t result; // 0x1d54ee
    *(int32_t *)a1 = (int32_t)result;
    *(int64_t *)0xd8ff2bab = 0x13d0000;
    return result;
}

// Address range: 0x1d556b - 0x1d556d
int64_t function_1d556b(void) {
    // 0x1d556b
    int64_t v1; // 0x1d556b
    return function_1d55a7(v1, v1, v1, v1);
}

// Address range: 0x1d559c - 0x1d55a7
int64_t function_1d559c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d559c
    int64_t v1; // 0x1d559c
    return v1 & 0xffffffff ^ 0x630441f0;
}

// Address range: 0x1d55a7 - 0x1d5604
int64_t function_1d55a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d55a7
    int64_t v1; // 0x1d55a7
    unsigned char v2 = (char)v1; // 0x1d55a8
    unsigned char v3 = *(char *)(a4 + 97); // 0x1d55a8
    char v4 = v2 - v3; // 0x1d55a8
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x1d55a8
    int64_t v6 = unknown_645b12b1(); // 0x1d55ab
    bool v7; // 0x1d55a7
    int64_t v8 = 0x4000 * (int64_t)v7 | 1024 * (int64_t)v7 | 512 * (int64_t)v7 | 256 * (int64_t)v7 | (int64_t)(v3 > v2) | 64 * (int64_t)(v4 == 0) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v2 % 16 - v3 % 16 > 15) | 4 * (int64_t)(v5 % 2 == 0) | 2048 * (int64_t)(((v4 ^ v2) & (v3 ^ v2)) < 0) | 2; // bp-8, 0x1d55b0
    unsigned char v9 = (char)a4 % 32; // 0x1d55b2
    if (v9 != 0) {
        char * v10 = (char *)(a3 - 24); // 0x1d55b2
        *v10 = *v10 >> v9;
    }
    int64_t v11 = (v7 ? -1 : 1) + a2; // 0x1d55a7
    int64_t v12 = (v7 ? -4 : 4) + a1; // 0x1d55b1
    int32_t * v13 = (int32_t *)(v11 + 0x283b6d1d); // 0x1d55b5
    *v13 = *v13 + (int32_t)a4;
    __asm_out(-96, (char)v6);
    int64_t v14 = unknown_1c165ec5(); // 0x1d55bf
    int64_t v15 = a3 & -0xff01 | (int64_t)&g3; // 0x1d55c5
    int64_t v16 = v14 & 0xffffffff; // 0x1d55c8
    __asm_outsd((int16_t)v15, *(int32_t *)v16);
    int32_t * v17 = (int32_t *)(a4 - 0x3a3e7ce0 + v15); // 0x1d55cd
    *v17 = *v17 + (int32_t)(int64_t)&v8;
    int32_t * v18 = (int32_t *)(v1 - 32 + 8 * v1); // 0x1d55d6
    *v18 = *v18 + (int32_t)v12;
    int64_t v19 = a4 & -0xff01 | (int64_t)&g5; // 0x1d55da
    uint32_t v20 = (int32_t)v19 % 32; // 0x1d55dc
    if (v20 != 0) {
        int32_t * v21 = (int32_t *)v19; // 0x1d55dc
        uint32_t v22 = *v21; // 0x1d55dc
        *v21 = v22 >> v20 | v22 << 32 - v20;
    }
    int64_t v23 = v11 ^ v1;
    *(int32_t *)v12 = (int32_t)v23;
    if (v19 != 0) {
        // 0x1d55e5
        return v23 & 0xffffffff;
    }
    int64_t v24 = (v14 & (int64_t)&g1) == 0 ? 4 : -4; // 0x1d55de
    return function_1d5625(v24 + v12, v16, v15);
}

// Address range: 0x1d5605 - 0x1d5625
int64_t function_1d5605(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4; // 0x1d5610
    int64_t v2; // 0x1d5605
    char v3 = (char)v2 > (char)v2; // 0x1d5610
    unsigned char v4 = *(char *)(a2 + 0x791400ab + a4) + v3; // 0x1d5610
    unsigned char v5 = v1 - v4; // 0x1d5610
    bool v6 = (char)v2 > (char)v2 ? v4 != -1 | v5 - v3 > v1 : v4 > v1; // 0x1d5610
    int32_t * v7 = (int32_t *)((a4 & -256 | (int64_t)v5) + 0x20c50f3a); // 0x1d561c
    *v7 = *v7 + (int32_t)v2;
    return (int64_t)(*(int32_t *)0x7bf401e87c8e98f4 - (v6 ? -0x17c74520 : -0x17c74521));
}

// Address range: 0x1d5625 - 0x1d562d
int64_t function_1d5625(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d5625
    int64_t v1; // 0x1d5625
    return v1 & 0xffff00ff | (int64_t)&g6;
}

// Address range: 0x1d562e - 0x1d5696
int64_t function_1d562e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1d562e
    int64_t v1; // 0x1d562e
    *(char *)v1 = 0;
    char * v2 = (char *)(a1 - 0x24d1b6c6); // 0x1d5630
    unsigned char v3 = *v2; // 0x1d5630
    *v2 = v3 / 2 | 128 * v3;
    uint32_t v4 = (int32_t)a4; // 0x1d5638
    uint32_t v5 = v4 + (int32_t)a1; // 0x1d5638
    uint32_t v6 = (int32_t)v1; // 0x1d563d
    uint32_t v7 = *(int32_t *)((int64_t)v5 - 25); // 0x1d563d
    int32_t v8 = v6 - v7; // 0x1d563d
    if (v8 >= 0) {
        // 0x1d5648
        unknown_3ac5c44e(0xec08f8e1);
        return function_2649b578();
    }
    int64_t v9 = 0; // 0x1d5636
    int64_t v10 = v5 < v4 ? 198 : 197; // 0x1d563b
    int32_t v11 = a3; // 0x1d5693
    int32_t v12 = v11 >> 1; // 0x1d5693
    unsigned char v13 = llvm_ctpop_i8((char)v12); // 0x1d5693
    bool v14; // 0x1d562e
    *(int64_t *)((int64_t)v8 - 8) = 128 * (int64_t)(v11 < 0) | (int64_t)(v11 % 2 != 0) | 64 * (int64_t)(v12 == 0) | 4 * (int64_t)(v13 % 2 == 0) | 0x4000 * (int64_t)v14 | 1024 * (int64_t)v14 | 256 * (int64_t)v14 | 16 * (int64_t)(v6 % 16 - v7 % 16 > 15) | 2;
    return 0x10000 * (int32_t)((v9 + v10) % 256 | v9 & 0xff00) >> 16;
}

// Address range: 0x1d56a9 - 0x1d56aa
int64_t function_1d56a9(void) {
    // 0x1d56a9
    int64_t result; // 0x1d56a9
    return result;
}

// Address range: 0x1d56be - 0x1d56c1
int64_t function_1d56be(void) {
    // 0x1d56be
    return function_1d56a9();
}

// Address range: 0x1d576d - 0x1d576e
int64_t function_1d576d(void) {
    // 0x1d576d
    int64_t result; // 0x1d576d
    return result;
}

// Address range: 0x1d5813 - 0x1d581f
int64_t function_1d5813(void) {
    // 0x1d5813
    return (int64_t)*(int32_t *)0x1e847937d6d1a9f;
}

// Address range: 0x1d583c - 0x1d583d
int64_t function_1d583c(void) {
    // 0x1d583c
    int64_t result; // 0x1d583c
    return result;
}

// Address range: 0x1d583f - 0x1d58ad
int64_t function_1d583f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x1d583f
    int32_t * v3 = (int32_t *)(2 * a1 + 0x7305806b + v2); // 0x1d583f
    bool v4; // 0x1d583f
    *v3 = (int32_t)v4 - (int32_t)v2 + *v3;
    int64_t v5 = unknown_3b67004c(); // 0x1d5846
    int64_t v6; // 0x1d583f
    __asm_outsb((int16_t)a3, *(char *)&v6);
    int64_t v7 = v5; // 0x1d5852
    if (a4 == 0) {
        v7 = function_1d583c();
    }
    // 0x1d5854
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a3;
    int64_t v8 = v7 & 0xffffffff; // 0x1d5859
    int64_t v9; // 0x1d583f
    int64_t v10 = v9;
    *(int32_t *)v10 = *(int32_t *)&v9 + (int32_t)v10;
    unknown_206127c(v8);
    unknown_ffffffffa1abb675();
    int64_t v11 = unknown_ffffffffab799c7a(); // 0x1d5874
    char * v12 = (char *)(v11 + 41); // 0x1d5879
    *v12 = *v12 + (char)v11;
    int64_t v13 = unknown_84cc285(); // 0x1d587f
    char v14 = v13; // 0x1d5884
    *(char *)-0x1afcedfe17f7fa80 = v14;
    int32_t v15 = *(char *)(v11 + 80) > (char)v9 ? 81 : 80; // 0x1d588d
    *(int32_t *)-0x71e2276c = *(int32_t *)-0x71e2276c - v15;
    unsigned char v16 = *(char *)v13 + v14; // 0x1d5894
    int64_t v17 = v13 & -256; // 0x1d5894
    *(int32_t *)v8 = (int32_t)(v17 | (int64_t)v16);
    int64_t result = v17 | (int64_t)(v16 + (char)((256 * v9 & a4) / 256)); // 0x1d5897
    int32_t * v18 = (int32_t *)(v9 + 1); // 0x1d5899
    *v18 = *v18 + (int32_t)v9;
    int32_t * v19 = (int32_t *)(result - 0x4647ca23); // 0x1d589f
    *v19 = *v19 | (int32_t)(v7 + (v4 ? 0xfffffffc : 4));
    return result;
}

// Address range: 0x1d58c4 - 0x1d58ca
int64_t function_1d58c4(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1d58c4
    int64_t v1; // 0x1d58c4
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a2 + 3); // 0x1d58c6
    *v3 = *v3 + (int32_t)a4;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x1d58f8 - 0x1d58fc
int64_t function_1d58f8(int64_t a1, int64_t a2) {
    // 0x1d58f8
    return a1 & 0xffffffff;
}

// Address range: 0x1d58fc - 0x1d5900
int64_t function_1d58fc(int64_t a1) {
    // 0x1d58fc
    int64_t result; // 0x1d58fc
    return result;
}

// Address range: 0x1d5900 - 0x1d590f
int64_t function_1d5900(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_fffffffff8465609(); // 0x1d5902
    return v1 & 56 | (int64_t)&g4 | 199 | v1 & -0x10000;
}

// Address range: 0x1d595b - 0x1d5960
int64_t function_1d595b(void) {
    // 0x1d595b
    return function_621f4254();
}

// Address range: 0x1d5987 - 0x1d5988
int64_t function_1d5987(void) {
    // 0x1d5987
    int64_t result; // 0x1d5987
    return result;
}

// Address range: 0x1d59b5 - 0x1d59be
int64_t function_1d59b5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = a4 - 1; // 0x1d59b5
    int64_t result; // 0x1d59b5
    bool v2; // 0x1d59b5
    if (v1 == 0 || v2) {
        // 0x1d59b7
        return result;
    }
    // 0x1d59ba
    int64_t v3; // 0x1d59b5
    unsigned char v4 = (char)v3; // 0x1d59ba
    unsigned char v5 = v4 + (char)(v1 / 256); // 0x1d59ba
    if (v5 >= v4 && v5 != 0) {
        result = function_1d5987();
    }
    // 0x1d59b7
    return result;
}

// Address range: 0x1d59d7 - 0x1d59e3
int64_t function_1d59d7(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x1d59d7
    int64_t v1; // 0x1d59d7
    char * v2 = (char *)(v1 + 0x13d00ba); // 0x1d59d7
    *v2 = *v2 + (char)(a3 / 256);
    int64_t v3; // 0x1d59d7
    *(char *)a1 = *(char *)&v3;
    bool v4; // 0x1d59d7
    int64_t v5 = v4 ? -1 : 1; // 0x1d59dd
    return function_46a828f1(v5 + a1, v5 + a2);
}

// Address range: 0x1d59fe - 0x1d5a1b
int64_t function_1d59fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d59fe
    unknown_16b20504();
    int64_t result = unknown_3d1f420f(); // 0x1d5a09
    int32_t * v1 = (int32_t *)(a1 - 73); // 0x1d5a0e
    int64_t v2; // 0x1d59fe
    *v1 = *v1 + (int32_t)v2;
    return result;
}

// Address range: 0x1d5a3d - 0x1d5a3e
int64_t function_1d5a3d(void) {
    // 0x1d5a3d
    int64_t result; // 0x1d5a3d
    return result;
}

// Address range: 0x1d5a46 - 0x1d5a48
int64_t function_1d5a46(void) {
    // 0x1d5a46
    return function_1d5a3d();
}

// Address range: 0x1d5afa - 0x1d5afc
int64_t function_1d5afa(void) {
    // 0x1d5afa
    int64_t result; // 0x1d5afa
    return result;
}

// Address range: 0x1d5b22 - 0x1d5b23
int64_t function_1d5b22(int64_t a1) {
    // 0x1d5b22
    int64_t result; // 0x1d5b22
    return result;
}

// Address range: 0x1d5b47 - 0x1d5b48
int64_t function_1d5b47(void) {
    // 0x1d5b47
    int64_t result; // 0x1d5b47
    return result;
}

// Address range: 0x1d5b9a - 0x1d5b9b
int64_t function_1d5b9a(void) {
    // 0x1d5b9a
    int64_t result; // 0x1d5b9a
    return result;
}

// Address range: 0x1d5ba7 - 0x1d5bab
int64_t function_1d5ba7(void) {
    // 0x1d5ba7
    return function_1d5b9a();
}

// Address range: 0x1d5be4 - 0x1d5be7
int64_t function_1d5be4(int64_t a1) {
    // 0x1d5be4
    int64_t result; // 0x1d5be4
    return result;
}

// Address range: 0x1d5c2a - 0x1d5c34
int64_t function_1d5c2a(void) {
    // 0x1d5c2a
    unknown_41e50e9();
    return function_ffffffffe86e455c();
}

// Address range: 0x31c2bb - 0x31c2c1
int64_t function_31c2bb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x31c2bb
    int64_t result; // 0x31c2bb
    return result;
}

// Address range: 0x31c2c3 - 0x31c2c4
int64_t function_31c2c3(int64_t a1) {
    // 0x31c2c3
    int64_t result; // 0x31c2c3
    return result;
}

// Address range: 0x31c44b - 0x31c450
int64_t function_31c44b(void) {
    // 0x31c44b
    return function_44a6b38();
}

// Address range: 0x31c464 - 0x31c469
int64_t function_31c464(void) {
    // 0x31c464
    return function_c84e08d();
}

// Address range: 0x31c484 - 0x31c4ae
int64_t function_31c484(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31c484
    float80_t v1; // 0x31c484
    *(float32_t *)a3 = (float32_t)v1;
    int32_t * v2 = (int32_t *)(a3 + 0x492f3444); // 0x31c493
    *v2 = *v2 + 1;
    uint32_t v3 = __asm_in((int16_t)a3); // 0x31c499
    bool v4; // 0x31c484
    int64_t v5 = v4 ? -1 : 1; // 0x31c49a
    int64_t v6; // 0x31c484
    unsigned char v7 = *(char *)(v6 + (int64_t)(v3 % 256)); // 0x31c49b
    char * v8 = (char *)(((int64_t)(v3 & -256) | (int64_t)v7) + 120); // 0x31c49d
    *v8 = *v8 + (char)a3;
    return function_ffffffffd8763f37(v5 + a1, v5 + a2 + (v4 ? -4 : 4));
}

// Address range: 0x31c4cd - 0x31c4ce
int64_t function_31c4cd(void) {
    // 0x31c4cd
    int64_t result; // 0x31c4cd
    return result;
}

// Address range: 0x31c536 - 0x31c537
int64_t function_31c536(void) {
    // 0x31c536
    int64_t result; // 0x31c536
    return result;
}

// Address range: 0x31c574 - 0x31c576
int64_t function_31c574(void) {
    // 0x31c574
    return function_31c536();
}

// Address range: 0x31c57a - 0x31c57f
int64_t function_31c57a(void) {
    // 0x31c57a
    int64_t result; // 0x31c57a
    return result;
}

// Address range: 0x31c67a - 0x31c686
int64_t function_31c67a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x78d0ee68); // 0x31c67a
    int64_t v2; // 0x31c67a
    *v1 = *v1 + (int32_t)v2;
    return function_1bb1f337();
}

// Address range: 0x31cabb - 0x31cac2
int64_t function_31cabb(void) {
    char v1 = *(char *)-0x62d73d; // 0x31cabb
    int64_t result; // 0x31cabb
    *(char *)-0x62d73d = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x31cb07 - 0x31cb08
int64_t function_31cb07(int64_t a1) {
    // 0x31cb07
    int64_t result; // 0x31cb07
    return result;
}

// Address range: 0x31cb0e - 0x31cb25
int64_t function_31cb0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x31cb0e
    int64_t result; // 0x31cb0e
    *(int32_t *)0x67a3b5b5383aea2f = (int32_t)result;
    unsigned char v1 = (char)a4 % 32; // 0x31cb19
    if (v1 != 0) {
        char * v2 = (char *)(result + 0xa4c700); // 0x31cb19
        *v2 = *v2 << v1;
    }
    return result;
}

// Address range: 0x31cb54 - 0x31cb55
int64_t function_31cb54(void) {
    // 0x31cb54
    int64_t result; // 0x31cb54
    return result;
}

// Address range: 0x31cb66 - 0x31cb85
int64_t function_31cb66(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31cb66
    int64_t v1; // 0x31cb66
    int64_t v2 = v1;
    char * v3 = (char *)(8 * a1 - 0x708561ed + v2); // 0x31cb68
    *v3 = *v3 - 1;
    *(int32_t *)(a2 + 108) = 0;
    return v2 & -256 | (int64_t)(*(char *)-0x585822dc + (char)v2);
}

// Address range: 0x31cbcb - 0x31cbcd
int64_t function_31cbcb(void) {
    // 0x31cbcb
    return function_31cb54();
}

// Address range: 0x31cc33 - 0x31cc3c
int64_t function_31cc33(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x2082bf05); // 0x31cc35
    *v1 = *v1 - 1;
    int64_t result; // 0x31cc33
    return result;
}

// Address range: 0x31ccb6 - 0x31ccbb
int64_t function_31ccb6(void) {
    // 0x31ccb6
    return __asm_iretd();
}
