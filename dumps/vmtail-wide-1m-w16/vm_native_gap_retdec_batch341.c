/*
 * Targeted RetDec C for native executable gap queue batch 341.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xf179c-0xf199c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d2e5a-0x1d305a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d325a-0x1d345a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1d345a-0x1d365a rank=- name=- kind=- bytes=- uncovered=-
 *   0x25d0c2-0x25d2c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25d2c2-0x25d4c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25d6c2-0x25d8c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25d8c2-0x25dac2 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1d2e13();
int64_t function_1d2e5a(int64_t a1, int64_t a2);
int64_t function_1d2e72(void);
int64_t function_1d2e73(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d2e76(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1d2f16(int64_t a1);
int64_t function_1d2f48(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d2fce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d3033(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d325a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d32c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d3313(void);
int64_t function_1d3324(void);
int64_t function_1d3326(void);
int64_t function_1d334b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1d336b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1d3371(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1d33fa(void);
int64_t function_1d3421(void);
int64_t function_1d3469(int64_t a1);
int64_t function_1d3499(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d34d3(void);
int64_t function_1d34e7(void);
int64_t function_1d34f8(int64_t a1);
int64_t function_1d3509(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1d35cb(void);
int64_t function_1d35d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d35e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1d3603(int64_t a1);
int64_t function_1d362a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25d076();
int64_t function_25d0c2(int64_t a1);
int64_t function_25d0ea(void);
int64_t function_25d0f7(void);
int64_t function_25d122(void);
int64_t function_25d15c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25d19a(int64_t a1);
int64_t function_25d19c(int64_t a1);
int64_t function_25d1b4(int64_t a1);
int64_t function_25d1bc(void);
int64_t function_25d1fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25d26d(void);
int64_t function_25d304(void);
int64_t function_25d33a(void);
int64_t function_25d35b(void);
int64_t function_25d35f(int64_t a1);
int64_t function_25d392(int64_t a1);
int64_t function_25d3b1(void);
int64_t function_25d3bd(int64_t a1, int64_t a2);
int64_t function_25d44b(void);
int64_t function_25d4a0(void);
int64_t function_25d69d();
int64_t function_25d6c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_25d728(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25d736(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25d75c(int64_t a1);
int64_t function_25d76f(void);
int64_t function_25d79f(int64_t a1, int64_t a2);
int64_t function_25d7e9(void);
int64_t function_25d810(void);
int64_t function_25d81e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_25d86f(void);
int64_t function_25d875(int64_t a1);
int64_t function_25d883(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25d8cf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_25d979(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25d98f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_25d996(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25da39(void);
int64_t function_25da5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25da94(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25da96(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3e2bd92f();
int64_t function_3ee6007f();
int64_t function_68683cc0();
int64_t function_cdc60();
int64_t function_f179c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f180f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_ffffffff8357f255();
int64_t function_ffffffffb1ebb4ba();
int64_t function_ffffffffb4b2fae7();
int64_t function_fffffffff0309a75();
int64_t unknown_104d2733();
int64_t unknown_113fc8c();
int64_t unknown_12b2e1af();
int64_t unknown_2e43be3f();
int64_t unknown_38d2f5aa();
int64_t unknown_38ec1bf3();
int64_t unknown_699e6540();
int64_t unknown_6a8a3c7f();
int64_t unknown_70bab96e();
int64_t unknown_730f3d2();
int64_t unknown_73d4547f();
int64_t unknown_a9724e();
int64_t unknown_b4e2dac();
int64_t unknown_ffffffff871f1075();
int64_t unknown_ffffffff8a745f63();
int64_t unknown_ffffffffa527168a();
int64_t unknown_ffffffffb3f6991c();
int64_t unknown_ffffffffd90d91a2();
int64_t unknown_ffffffffe89ba368();

// Address range: 0xf179c - 0xf180f
int64_t function_f179c(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf179c
    int64_t v1; // 0xf179c
    return function_cdc60(a1, v1);
}

// Address range: 0xf180f - 0xf1975
int64_t function_f180f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xf180f
    return function_cdc60(a1, a2);
}

// Address range: 0x1d2e5a - 0x1d2e61
int64_t function_1d2e5a(int64_t a1, int64_t a2) {
    // 0x1d2e5a
    int64_t v1; // 0x1d2e5a
    char v2 = v1 / 256; // 0x1d2e5a
    char v3 = v1;
    char v4 = v2 + v3; // 0x1d2e5a
    int64_t v5 = __asm_wait((int64_t)&g6, (int64_t)&g6, (int64_t)&g6, (int64_t)&g6, (int64_t)&g6); // 0x1d2e5d
    *(char *)a1 = (char)v1;
    int64_t result = v5; // 0x1d2e5f
    if (v4 < 0 == ((v4 ^ v2) & (v4 ^ v3)) < 0) {
        result = function_1d2e13();
    }
    // 0x1d2e61
    return result;
}

// Address range: 0x1d2e72 - 0x1d2e73
int64_t function_1d2e72(void) {
    // 0x1d2e72
    int64_t result; // 0x1d2e72
    return result;
}

// Address range: 0x1d2e73 - 0x1d2e76
int64_t function_1d2e73(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d2e73
    int64_t result; // 0x1d2e73
    bool v1; // 0x1d2e73
    if (a4 != 1 && !v1) {
        result = function_1d2e72();
    }
    // 0x1d2e75
    return result;
}

// Address range: 0x1d2e76 - 0x1d2ee0
int64_t function_1d2e76(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x1d2e76
    int64_t result; // 0x1d2e76
    bool v1; // 0x1d2e76
    if (!v1) {
        int32_t * v2 = (int32_t *)(2 * result); // 0x1d2ed2
        *v2 = -1 - *v2;
        *(char *)0x1d5a50dc = *(char *)0x1d5a50dc + (char)(result / 256);
        int32_t * v3 = (int32_t *)(result + 113); // 0x1d2edb
        *v3 = *v3 - (int32_t)a4;
        return result;
    }
    char v4 = a3;
    unknown_73d4547f();
    int64_t v5 = (v1 ? -1 : 1) + a2; // 0x1d2e82
    int64_t v6 = __asm_int1(a1, v5, a3); // 0x1d2e89
    __asm_out(103, (char)v6 - 113);
    *(char *)a3 = v4 - 80;
    char v7 = __asm_in_133(72); // 0x1d2e92
    unsigned char v8 = *(char *)v5; // 0x1d2e96
    char v9 = *(char *)(result - 43); // 0x1d2e99
    int64_t v10 = a3 & -256 | (int64_t)(v4 - v9 + (char)(v8 < v7)); // 0x1d2e99
    __asm_int1((int64_t)v7 & 0xffffffff | v6 & 0xffffff00, v5, v10);
    char * v11 = (char *)(result & 0xffffffee); // 0x1d2eaf
    *v11 = *v11 | (char)(a3 / 256);
    return v10 & 0xffffffff;
}

// Address range: 0x1d2f16 - 0x1d2f17
int64_t function_1d2f16(int64_t a1) {
    // 0x1d2f16
    int64_t result; // 0x1d2f16
    return result;
}

// Address range: 0x1d2f48 - 0x1d2f5d
int64_t function_1d2f48(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d2f48
    int64_t v1; // 0x1d2f48
    *(char *)a3 = (char)(__asm_iretd() ^ v1);
    return function_ffffffff8357f255();
}

// Address range: 0x1d2fce - 0x1d3021
int64_t function_1d2fce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d2fce
    int64_t v1; // 0x1d2fce
    uint64_t v2 = v1;
    bool v3; // 0x1d2fce
    bool v4 = v3;
    int32_t * v5 = (int32_t *)(a4 + 0x64620778); // 0x1d2fce
    *v5 = *v5 & (int32_t)a3;
    int32_t v6 = *(int32_t *)(a4 + 0x6ea6ce00); // 0x1d2fd4
    unsigned char v7 = *(char *)0x3a7eab50020e0dd7; // 0x1d2fe5
    *(int32_t *)0x7d5b013d0000d33f = (int32_t)v1 - v6 & -256 | (int32_t)v7;
    __asm_in_133(0);
    char v8 = *(char *)(v1 - 54); // 0x1d3000
    int64_t v9 = a3 & -0xff01 | (int64_t)&g5; // 0x1d3006
    int64_t v10 = v4 ? -4 : 4; // 0x1d300e
    int64_t v11 = v10 + a1; // 0x1d300e
    int64_t v12 = *(int64_t *)(v1 & (a2 | -256)) + v10; // 0x1d300e
    *(int32_t *)v11 = (int32_t)__asm_int1(v11, v12, v9);
    int64_t result = __asm_hlt(v11 + (v4 ? -5 : 5), v12 + (v4 ? -1 : 1), v9); // 0x1d3017
    char v13 = *(char *)((256 * (int64_t)(v8 + (char)(v2 / 256)) | v2 & -0xff01) + 0x1a38665e); // 0x1d3018
    __asm_rcl(v13);
    return result;
}

// Address range: 0x1d3033 - 0x1d3038
int64_t function_1d3033(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x1d3033
    if (v1 != 0) {
        uint32_t v2 = (int32_t)a2;
        *(int32_t *)a2 = v2 >> 32 - v1 | v2 << v1;
    }
    int64_t result; // 0x1d3033
    return result;
}

// Address range: 0x1d325a - 0x1d327b
int64_t function_1d325a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3 + 0x3a0ca402; // 0x1d325c
    int64_t v2; // 0x1d325a
    int64_t result = unknown_ffffffffe89ba368(v1 & 0xffffffff, v2 & 0xffffffff); // 0x1d3262
    uint32_t v3 = *(int32_t *)-0x6ddb9592; // 0x1d3267
    uint32_t v4 = v3 + (int32_t)v1; // 0x1d3267
    *(int32_t *)-0x6ddb9592 = v4;
    char * v5 = (char *)(v2 + 0x4f7c01e8); // 0x1d3273
    *v5 = *v5 + (char)a4 + (char)(v4 < v3);
    return result;
}

// Address range: 0x1d32c3 - 0x1d32c7
int64_t function_1d32c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d32c3
    int64_t v1; // 0x1d32c3
    *(int32_t *)a4 = 2 * (int32_t)v1;
    return __asm_wait(a1, a2, a3, a4, a5);
}

// Address range: 0x1d3313 - 0x1d3319
int64_t function_1d3313(void) {
    // 0x1d3313
    int64_t v1; // 0x1d3313
    bool v2; // 0x1d3313
    return v1 - (v2 ? 0x3c008001 : 0x3c008000) & 0xffffffff;
}

// Address range: 0x1d3324 - 0x1d3325
int64_t function_1d3324(void) {
    // 0x1d3324
    int64_t result; // 0x1d3324
    return result;
}

// Address range: 0x1d3326 - 0x1d3327
int64_t function_1d3326(void) {
    // 0x1d3326
    int64_t result; // 0x1d3326
    return result;
}

// Address range: 0x1d334b - 0x1d335d
int64_t function_1d334b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d334b
    int64_t result; // 0x1d334b
    int32_t * v1 = (int32_t *)(4 * a4 + 0x2ad2731d + result); // 0x1d334d
    *v1 = *v1 + (int32_t)result;
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x1d336b - 0x1d336f
int64_t function_1d336b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1d336b
    int64_t result; // 0x1d336b
    return result;
}

// Address range: 0x1d3371 - 0x1d33c7
int64_t function_1d3371(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1d3371
    int64_t v1; // 0x1d3371
    uint64_t v2 = v1;
    int64_t v3 = a2;
    unknown_6a8a3c7f();
    bool v4; // 0x1d3371
    if (!v4) {
        int64_t result = unknown_b4e2dac(); // 0x1d33a6
        int64_t v5 = a4 & -0xff01 | (int64_t)&g3; // 0x1d33ab
        uint32_t v6 = (int32_t)v5; // 0x1d33ae
        uint32_t v7 = v6 % 32; // 0x1d33ae
        if (v7 != 0) {
            int32_t * v8 = (int32_t *)a6; // 0x1d33ae
            uint32_t v9 = *v8; // 0x1d33ae
            *v8 = v9 >> v7 | v9 << 32 - v7;
        }
        int32_t * v10 = (int32_t *)(v5 + 0x74966f4); // 0x1d33b4
        *v10 = *v10 + (int32_t)v2;
        int32_t * v11 = (int32_t *)(a6 - 0x2f5c1bd6); // 0x1d33ba
        *v11 = *v11 + v6;
        *(char *)v3 = *(char *)&v3 & (char)(v2 / 256);
        return result;
    }
    int64_t v12 = unknown_113fc8c(a7); // 0x1d3386
    unsigned char v13 = (char)v12; // 0x1d338b
    unsigned char v14 = 2 * v13; // 0x1d338b
    unsigned char v15 = llvm_ctpop_i8(v14); // 0x1d338b
    int64_t v16 = v12 & -256 | (int64_t)v14; // 0x1d338d
    if (v15 % 2 == 0) {
        v16 = function_1d3324();
    }
    uint32_t v17 = (int32_t)a2; // 0x1d338f
    uint32_t v18 = *(int32_t *)(v2 + 0x2d4986fc) + (int32_t)(v14 < v13); // 0x1d338f
    bool v19 = v14 < v13 ? v18 != -1 | (int32_t)(v14 < v13) + v17 - v18 > v17 : v18 > v17; // 0x1d338f
    int64_t v20 = v16 - (v19 ? 0xbf01e8a4 : 0xbf01e8a3); // 0x1d3395
    __asm_out_134((int16_t)a6, (int32_t)v20);
    int64_t v21 = v20 & 0xffffffff; // 0x1d339c
    if ((int16_t)v20 >= 0) {
        v21 = function_1d3326();
    }
    int64_t v22 = v21;
    int64_t v23; // bp+24, 0x1d3371
    char v24 = *(char *)(2 * a6 + (int64_t)&v23); // 0x1d339e
    return v22 & -256 | (int64_t)(v24 | (char)v22);
}

// Address range: 0x1d33fa - 0x1d33fb
int64_t function_1d33fa(void) {
    // 0x1d33fa
    int64_t result; // 0x1d33fa
    return result;
}

// Address range: 0x1d3421 - 0x1d3423
int64_t function_1d3421(void) {
    // 0x1d3421
    return function_1d33fa();
}

// Address range: 0x1d3469 - 0x1d3470
int64_t function_1d3469(int64_t a1) {
    // 0x1d3469
    int64_t v1; // 0x1d3469
    return v1 & 0xffffffff ^ 0x96f689e;
}

// Address range: 0x1d3499 - 0x1d349f
int64_t function_1d3499(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 24); // 0x1d3499
    *v1 = *v1 | (char)a4;
    int64_t result; // 0x1d3499
    return result;
}

// Address range: 0x1d34d3 - 0x1d34d4
int64_t function_1d34d3(void) {
    // 0x1d34d3
    int64_t result; // 0x1d34d3
    return result;
}

// Address range: 0x1d34e7 - 0x1d34e8
int64_t function_1d34e7(void) {
    // 0x1d34e7
    int64_t result; // 0x1d34e7
    return result;
}

// Address range: 0x1d34f8 - 0x1d34fc
int64_t function_1d34f8(int64_t a1) {
    // 0x1d34f8
    int64_t result; // 0x1d34f8
    return result;
}

// Address range: 0x1d3509 - 0x1d3565
int64_t function_1d3509(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2; // 0x1d3509
    char v3 = v2; // 0x1d3509
    unsigned char v4 = v3 + (char)(a3 / 256); // 0x1d3509
    if (v4 != 0) {
        // 0x1d350d
        *(char *)-0x3b661742 = *(char *)-0x3b661742 + (char)a4;
        return function_1d34d3();
    }
    // 0x1d353a
    int64_t v5; // 0x1d3509
    if (*(char *)(a1 - 59) > v3) {
        v5 = function_1d34e7();
    }
    int32_t * v6 = (int32_t *)(v2 - 0x70bbbf08); // 0x1d3548
    uint32_t v7 = *v6; // 0x1d3548
    uint32_t v8 = v7 + (int32_t)v5; // 0x1d3548
    *v6 = v8;
    char v9 = *(char *)&v1; // 0x1d3557
    *(char *)v1 = v9 + (char)a3 + (char)(v8 < v7);
    *(char *)a1 = __asm_insb((int16_t)(256 * (int64_t)v4 | a3 % 256));
    return unknown_ffffffff8a745f63();
}

// Address range: 0x1d35cb - 0x1d35ce
int64_t function_1d35cb(void) {
    // 0x1d35cb
    int64_t result; // 0x1d35cb
    return result;
}

// Address range: 0x1d35d2 - 0x1d35d9
int64_t function_1d35d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d35d2
    return a3 & 0xffffffff;
}

// Address range: 0x1d35e6 - 0x1d35f5
int64_t function_1d35e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1d35e6
    int64_t result; // 0x1d35e6
    *(char *)(a1 - 0x177261be) = (char)(result / 256);
    int64_t v1; // 0x1d35e6
    *(char *)result = *(char *)&v1 - (char)a4;
    return result;
}

// Address range: 0x1d3603 - 0x1d3604
int64_t function_1d3603(int64_t a1) {
    // 0x1d3603
    int64_t result; // 0x1d3603
    return result;
}

// Address range: 0x1d362a - 0x1d3652
int64_t function_1d362a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1d362a
    int64_t v1; // 0x1d362a
    int32_t v2 = v1; // 0x1d362c
    int32_t v3 = *(int32_t *)(a2 - 0x6715b614); // 0x1d362c
    uint32_t result = v3 + v2; // 0x1d362c
    if (llvm_ctpop_i8((char)result) % 2 == 0) {
        // 0x1d3634
        return result;
    }
    if (result < 0 == ((result ^ v2) & (result ^ v3)) < 0) {
        // 0x1d3634
        return result;
    }
    // 0x1d3639
    unknown_2e43be3f();
    char * v4 = (char *)(a3 + 0x75f7deac); // 0x1d363e
    unsigned char v5 = *v4; // 0x1d363e
    *v4 = v5 / 128 | 2 * v5;
    return unknown_a9724e();
}

// Address range: 0x25d0c2 - 0x25d0db
int64_t function_25d0c2(int64_t a1) {
    // 0x25d0c2
    __asm_int(-47);
    int64_t v1; // 0x25d0c2
    uint64_t v2 = v1 & 0xffffffff ^ 0xc1f4eac4; // 0x25d0c5
    char v3 = *(char *)(a1 + 0x6501e86d); // 0x25d0ca
    int64_t v4 = v2 & 0xffff0060 | 256 * (int64_t)((char)(v2 / 256) - v3) | 159; // 0x25d0d0
    char * v5 = (char *)(v4 + 0x1e8a800); // 0x25d0d2
    char v6 = *v5 & -35; // 0x25d0d2
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x25d0d2
    *v5 = v6;
    int64_t result = v4; // 0x25d0d9
    if (v7 % 2 == 0) {
        result = function_25d076();
    }
    // 0x25d0db
    return result;
}

// Address range: 0x25d0ea - 0x25d0ed
int64_t function_25d0ea(void) {
    // 0x25d0ea
    int64_t result; // 0x25d0ea
    return result;
}

// Address range: 0x25d0f7 - 0x25d0f8
int64_t function_25d0f7(void) {
    // 0x25d0f7
    int64_t result; // 0x25d0f7
    return result;
}

// Address range: 0x25d122 - 0x25d125
int64_t function_25d122(void) {
    // 0x25d122
    int64_t result; // 0x25d122
    return result;
}

// Address range: 0x25d15c - 0x25d15f
int64_t function_25d15c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25d15c
    int64_t result; // 0x25d15c
    bool v1; // 0x25d15c
    if (a4 != 1 == v1) {
        result = function_25d0f7();
    }
    // 0x25d15e
    return result;
}

// Address range: 0x25d19a - 0x25d19b
int64_t function_25d19a(int64_t a1) {
    // 0x25d19a
    int64_t result; // 0x25d19a
    return result;
}

// Address range: 0x25d19c - 0x25d19f
int64_t function_25d19c(int64_t a1) {
    // 0x25d19c
    int64_t result; // 0x25d19c
    return result;
}

// Address range: 0x25d1b4 - 0x25d1b7
int64_t function_25d1b4(int64_t a1) {
    // 0x25d1b4
    int64_t result; // 0x25d1b4
    return result;
}

// Address range: 0x25d1bc - 0x25d1c1
int64_t function_25d1bc(void) {
    // 0x25d1bc
    return function_ffffffffb1ebb4ba();
}

// Address range: 0x25d1fe - 0x25d253
int64_t function_25d1fe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25d1fe
    int64_t v1; // 0x25d1fe
    *(char *)a2 = (char)(v1 & v1);
    int64_t v2 = a3 & -256 | (int64_t)(*(char *)(v1 + 8 * v1) & (char)a3); // 0x25d200
    *(char *)0x2ee77f7188b8b43d = (char)v1 + 63;
    int32_t * v3 = (int32_t *)(v1 + 101); // 0x25d212
    *v3 = *v3 - 78;
    unknown_ffffffffb3f6991c();
    char * v4 = (char *)(a4 + 0x12b2f425); // 0x25d21b
    *v4 = *v4 + (char)v1;
    unknown_104d2733();
    __asm_in_135((int16_t)v2);
    __asm_int1(0x35f58100, a2, v2);
    return function_fffffffff0309a75();
}

// Address range: 0x25d26d - 0x25d275
int64_t function_25d26d(void) {
    // 0x25d26d
    return function_3ee6007f();
}

// Address range: 0x25d304 - 0x25d305
int64_t function_25d304(void) {
    // 0x25d304
    int64_t result; // 0x25d304
    return result;
}

// Address range: 0x25d33a - 0x25d33c
int64_t function_25d33a(void) {
    // 0x25d33a
    return function_25d304();
}

// Address range: 0x25d35b - 0x25d35d
int64_t function_25d35b(void) {
    // 0x25d35b
    int64_t v1; // 0x25d35b
    return function_25d3bd(v1, v1);
}

// Address range: 0x25d35f - 0x25d368
int64_t function_25d35f(int64_t a1) {
    char v1 = *(char *)0x5f609a66; // 0x25d35f
    int64_t result; // 0x25d35f
    *(char *)0x5f609a66 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x25d392 - 0x25d397
int64_t function_25d392(int64_t a1) {
    // 0x25d392
    int64_t result; // 0x25d392
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x25d3b1 - 0x25d3b6
int64_t function_25d3b1(void) {
    // 0x25d3b1
    return function_68683cc0();
}

// Address range: 0x25d3bd - 0x25d3d3
int64_t function_25d3bd(int64_t a1, int64_t a2) {
    // 0x25d3bd
    int64_t result; // 0x25d3bd
    *(char *)a1 = (char)result;
    *(int32_t *)0x52de12c6 = *(int32_t *)0x52de12c6 >> 26;
    return result;
}

// Address range: 0x25d44b - 0x25d450
int64_t function_25d44b(void) {
    // 0x25d44b
    int64_t result; // 0x25d44b
    return result;
}

// Address range: 0x25d4a0 - 0x25d4a3
int64_t function_25d4a0(void) {
    // 0x25d4a0
    int64_t result; // 0x25d4a0
    return result;
}

// Address range: 0x25d6c2 - 0x25d727
int64_t function_25d6c2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 62); // 0x25d6c2
    int32_t v2 = *v1; // 0x25d6c2
    int32_t v3 = a1; // 0x25d6c2
    int32_t v4 = v2 + v3; // 0x25d6c2
    *v1 = v4;
    unknown_730f3d2();
    if (((v4 ^ v2) & (v4 ^ v3)) >= 0) {
        // 0x25d6d5
        return a2 & 0xffffffff;
    }
    int64_t v5 = a3 & -256 | 211; // 0x25d6ca
    int64_t v6 = 0x4a91c16d; // bp-8, 0x25d6d9
    unknown_38ec1bf3();
    char * v7 = (char *)(v5 + 0x1e8340e); // 0x25d6fd
    char v8 = *v7 + (char)(a4 / 256); // 0x25d6fd
    *v7 = v8;
    int64_t v9 = __asm_in((int16_t)v5); // 0x25d704
    if (v8 != 0) {
        v9 = function_25d69d();
    }
    int64_t v10 = *(int64_t *)((int64_t)&v6 + a1 & 0xffffffff); // 0x25d710
    unsigned char v11 = *(char *)-0x176e967f; // 0x25d714
    *(char *)-0x176e967f = v11 / 128 | 2 * v11;
    int64_t result = __asm_int3(); // 0x25d71d
    unsigned char v12 = (char)v10 % 32; // 0x25d71e
    if (v12 != 0) {
        char * v13 = (char *)(v10 + 0x1e89796); // 0x25d71e
        unsigned char v14 = *v13; // 0x25d71e
        *v13 = v14 >> v12 | v14 << 8 - v12;
    }
    if ((char)v9 >= 0) {
        // 0x25d6d5
        return result;
    }
    // 0x25d726
    return 0x10000 * (int32_t)result >> 16;
}

// Address range: 0x25d728 - 0x25d736
int64_t function_25d728(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25d728
    int64_t v1; // 0x25d728
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0x25d72a
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)(a2 - 0x175146c6); // 0x25d72a
        uint32_t v5 = *v4; // 0x25d72a
        *v4 = v5 >> 32 - v3 | v5 << v3;
    }
    int64_t result = (v2 + 104) % 256 | v2 & -256; // 0x25d728
    int32_t * v6 = (int32_t *)(v1 - 102); // 0x25d730
    *v6 = *v6 + (int32_t)result;
    return result;
}

// Address range: 0x25d736 - 0x25d747
int64_t function_25d736(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25d736
    bool v1; // 0x25d736
    unknown_699e6540((v1 ? -4 : 4) + a1);
    __asm_out_136(-12, (int32_t)__asm_int3());
    return function_3e2bd92f();
}

// Address range: 0x25d75c - 0x25d75f
int64_t function_25d75c(int64_t a1) {
    // 0x25d75c
    int64_t result; // 0x25d75c
    return result;
}

// Address range: 0x25d76f - 0x25d779
int64_t function_25d76f(void) {
    // 0x25d76f
    unknown_ffffffff871f1075();
    return __asm_in_137(-33);
}

// Address range: 0x25d79f - 0x25d7a4
int64_t function_25d79f(int64_t a1, int64_t a2) {
    // 0x25d79f
    int64_t result; // 0x25d79f
    *(int32_t *)a1 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x25d7e9 - 0x25d7ee
int64_t function_25d7e9(void) {
    // 0x25d7e9
    return function_ffffffffb4b2fae7();
}

// Address range: 0x25d810 - 0x25d811
int64_t function_25d810(void) {
    // 0x25d810
    int64_t result; // 0x25d810
    return result;
}

// Address range: 0x25d81e - 0x25d836
int64_t function_25d81e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x25d81e
    int64_t v1; // 0x25d81e
    *(char *)a1 = (char)v1 - (char)a4;
    unsigned char v2 = *(char *)(v1 + (int64_t)*(char *)0x3a858bc8b401e8e7); // 0x25d82d
    int64_t result = v1 & -256 | (int64_t)v2; // 0x25d830
    if (*(char *)(a4 + 21) > (char)(a4 / 256)) {
        result = function_25d810();
    }
    // 0x25d832
    __asm_out_138((int16_t)((int32_t)v1 >> 31), (char)result);
    return result;
}

// Address range: 0x25d86f - 0x25d872
int64_t function_25d86f(void) {
    // 0x25d86f
    int64_t result; // 0x25d86f
    return result;
}

// Address range: 0x25d875 - 0x25d881
int64_t function_25d875(int64_t a1) {
    // 0x25d875
    int64_t v1; // 0x25d875
    return v1 & -256 | (int64_t)*(char *)0x22f8b6e7013d00cf;
}

// Address range: 0x25d883 - 0x25d888
int64_t function_25d883(int64_t a1, int64_t a2, int64_t a3) {
    // 0x25d883
    int64_t result; // 0x25d883
    return result;
}

// Address range: 0x25d8cf - 0x25d961
int64_t function_25d8cf(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = __asm_sti(); // 0x25d8cf
    char v2 = *(char *)0x8ddbc2a5; // 0x25d8d9
    char v3 = *(char *)-0x3dd5381c; // 0x25d8dd
    int64_t v4; // 0x25d8cf
    *(char *)-0x3dd5381c = (v2 | (char)(v4 / 256)) + 1 + v3;
    unsigned char v5 = (char)a4;
    unsigned char v6 = v5 % 32; // 0x25d8e5
    if (v6 != 0) {
        *(char *)a4 = v5 << 8 - v6 | v5 >> v6;
    }
    int64_t result = (v1 + 119) % 256 | v1 & -256; // 0x25d8d6
    int32_t * v7 = (int32_t *)(a2 + 0x1cb7f94b); // 0x25d8e7
    int32_t v8 = *v7; // 0x25d8e7
    int32_t v9 = v8 + 0x41e7734d; // 0x25d8e7
    *v7 = v9;
    if (v9 < 0 == (v9 & (v8 ^ -0x80000000)) < 0 != v9 != 0) {
        // 0x25d8f3
        return result;
    }
    char * v10 = (char *)(result - 0x138bd9ad); // 0x25d932
    *v10 = *v10 + (char)(a4 / 256);
    if ((a4 & -0x10000 || (int64_t)&g4 || (int64_t)(v5 / 128 || 2 * v5)) == 0) {
        char v11 = __asm_insb(-0x3db6); // 0x25d928
        bool v12; // 0x25d8cf
        *(char *)(0x4000 * (int64_t)v12 | 2048 * (int64_t)v12 | 1024 * (int64_t)v12 | 512 * (int64_t)v12 | 256 * (int64_t)v12 | 128 * (int64_t)v12 | 64 * (int64_t)v12 | 16 * (int64_t)v12 | (int64_t)v12 | 4 * (int64_t)v12 | 2) = v11;
        return result;
    }
    // 0x25d943
    *(int32_t *)0x8ddbc29c = *(int32_t *)0x8ddbc29c + (int32_t)v4;
    int32_t v13 = __asm_in_137(-121); // 0x25d95c
    return (int64_t)((v13 + 224) % 256) | (int64_t)(v13 & -256);
}

// Address range: 0x25d979 - 0x25d98f
int64_t function_25d979(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25d979
    int64_t v1; // 0x25d979
    __asm_out_136(-27, (int32_t)v1);
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a2;
    int64_t result = unknown_ffffffffa527168a(); // 0x25d984
    __asm_out(-90, (char)result);
    return result;
}

// Address range: 0x25d98f - 0x25d996
int64_t function_25d98f(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 24); // 0x25d98f
    int64_t result; // 0x25d98f
    bool v2; // 0x25d98f
    *v1 = *v1 + (int32_t)result + (int32_t)v2;
    int64_t v3; // 0x25d98f
    *(int32_t *)a2 = *(int32_t *)&v3 + (int32_t)a1;
    return result;
}

// Address range: 0x25d996 - 0x25da12
int64_t function_25d996(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25d996
    unknown_ffffffffd90d91a2();
    int16_t v1 = *(int16_t *)-0x4f469d7d; // 0x25d9a3
    unknown_12b2e1af();
    *(char *)(a1 - 0x69fe175d) = 0;
    int64_t v2; // 0x25d996
    float80_t v3; // 0x25d996
    *(int64_t *)(v2 + 0x8165279) = (int64_t)((float80_t)v1 / v3);
    return 4 * (v2 & 0x3fff00ff | (int64_t)(int32_t)&g2) + 0xe873356c & 0xffff00fc | (int64_t)&g1;
}

// Address range: 0x25da39 - 0x25da3a
int64_t function_25da39(void) {
    // 0x25da39
    int64_t result; // 0x25da39
    return result;
}

// Address range: 0x25da5b - 0x25da93
int64_t function_25da5b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x768f0f94); // 0x25da5c
    bool v2; // 0x25da5b
    *v1 = *v1 - (v2 ? 0x48a2c601 : 0x48a2c600);
    int64_t v3; // 0x25da5b
    int64_t v4 = v3 & 0xffffffff; // 0x25da67
    int64_t v5 = unknown_70bab96e(); // 0x25da68
    uint16_t v6 = (int16_t)v3;
    *(int16_t *)v4 = v6 / 2 | 0x8000 * v6;
    char v7 = __asm_in_135(v6); // 0x25da75
    int32_t * v8 = (int32_t *)(a1 - 7); // 0x25da78
    *v8 = *v8 + (int32_t)a1;
    int64_t v9; // 0x25da5b
    int32_t v10 = *(int32_t *)&v9; // 0x25da7b
    int64_t v11 = v10 & (int32_t)(v5 & 0xffffff00 | (int64_t)v7); // 0x25da7b
    int32_t * v12 = (int32_t *)(a1 + 0x796c0ad0 + v11); // 0x25da7e
    int64_t v13; // 0x25da5b
    *v12 = *v12 + (int32_t)(int64_t)&v13;
    int32_t * v14 = (int32_t *)(v11 - 0x6a281664); // 0x25da87
    uint32_t v15 = *v14; // 0x25da87
    uint32_t v16 = v15 + (int32_t)v3; // 0x25da87
    *v14 = v16;
    if (v16 >= v15) {
        function_25da39();
    }
    // 0x25da91
    return function_25da96(a1, a2, v4, v9);
}

// Address range: 0x25da94 - 0x25da96
int64_t function_25da94(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25da94
    int64_t result; // 0x25da94
    *(int32_t *)a4 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x25da96 - 0x25dab5
int64_t function_25da96(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x25da96
    int64_t v1; // 0x25da96
    *(char *)a1 = __asm_insb((int16_t)((int32_t)v1 >> 31));
    int64_t result = unknown_38d2f5aa(); // 0x25daa4
    char * v2 = (char *)((0x55b600a * v1 & 0xfffffffe) + 0x21f42880); // 0x25daa9
    *v2 = *v2 + (char)(a4 / 256);
    return result;
}
