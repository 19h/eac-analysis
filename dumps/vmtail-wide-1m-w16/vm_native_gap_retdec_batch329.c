/*
 * Targeted RetDec C for native executable gap queue batch 329.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xd1dc7-0xd1fc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd1fc7-0xd21c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xd21c7-0xd23c7 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3190bb-0x3192bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3192bb-0x3194bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3194bb-0x3196bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3196bb-0x3198bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3198bb-0x319abb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_130f0a59();
int64_t function_14abdd01();
int64_t function_3190bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3190c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3190da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_319209(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_319347(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3194d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_319618(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_319739(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_319871(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3199a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3199ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_319a17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_48bc1e09();
int64_t function_cc59c();
int64_t function_d1dc7(void);
int64_t function_d1de5(int64_t a1);
int64_t function_d1e51(int64_t a1);
int64_t function_d1eb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d1ee1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d1f97(void);
int64_t function_d2006(void);
int64_t function_d200d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_d203d(int64_t a1, int64_t a2);
int64_t function_d2040(int64_t a1, int64_t a2);
int64_t function_d2050(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_d2068(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_d2122(int64_t a1);
int64_t function_d2143(void);
int64_t function_d21b3(void);
int64_t function_d21bb(int64_t a1);
int64_t function_d21cd(void);
int64_t function_d2266(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_d2323(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_fffffffff1b2d8c8();
int64_t unknown_1c94330c();
int64_t unknown_32842249();
int64_t unknown_34d6ce6();
int64_t unknown_42e4932b();
int64_t unknown_4872137f();
int64_t unknown_ffffffffb1d29afe();
int64_t unknown_ffffffffb3133d7e();

// Address range: 0xd1dc7 - 0xd1dd3
int64_t function_d1dc7(void) {
    // 0xd1dc7
    int64_t v1; // 0xd1dc7
    bool v2; // 0xd1dc7
    int64_t v3 = v1 + 0x3da5803a + (int64_t)v2; // 0xd1dc7
    int32_t * v4 = (int32_t *)(v3 & 0xffffffff); // 0xd1dcc
    *v4 = *v4 + (int32_t)v3;
    return function_14abdd01();
}

// Address range: 0xd1de5 - 0xd1de8
int64_t function_d1de5(int64_t a1) {
    // 0xd1de5
    int64_t result; // 0xd1de5
    return result;
}

// Address range: 0xd1e51 - 0xd1e52
int64_t function_d1e51(int64_t a1) {
    // 0xd1e51
    int64_t result; // 0xd1e51
    return result;
}

// Address range: 0xd1eb5 - 0xd1ebf
int64_t function_d1eb5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xd1eb5
    int64_t result; // 0xd1eb5
    return result;
}

// Address range: 0xd1ee1 - 0xd1f8c
int64_t function_d1ee1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0xd1ee1
    int64_t v3 = v2 + 0x1e8e4f4; // 0xd1ee1
    int64_t result = v3 & 0xffffffff; // 0xd1ee1
    int32_t v4 = v3; // 0xd1eee
    int32_t v5 = v2;
    if (v5 != v4) {
        // 0xd1f78
        bool v6; // 0xd1ee1
        char * v7 = (char *)(a1 - 0x17ffd739 + (v6 ? -4 : 4)); // 0xd1f78
        *v7 = *v7 + 1;
        __asm_out_133(-116, v4);
        return result;
    }
    if (v5 <= v4) {
        uint64_t v8 = result + v2; // 0xd1f5a
        __asm_out(14, (char)v8);
        return v8 % 256 | v3 & 0xffffff00;
    }
    // 0xd1f05
    float80_t v9; // 0xd1ee1
    *(int32_t *)(8 * v2 + 0x4e0aa001 + result) = (int32_t)v9;
    char * v10 = (char *)result; // 0xd1f0e
    *v10 = *v10 - (char)v3;
    return v3 & 0xffffff00 | (int64_t)*(char *)&v1;
}

// Address range: 0xd1f97 - 0xd1f9c
int64_t function_d1f97(void) {
    // 0xd1f97
    return function_48bc1e09();
}

// Address range: 0xd2006 - 0xd200d
int64_t function_d2006(void) {
    // 0xd2006
    unknown_1c94330c();
    int64_t v1; // 0xd2006
    return function_d2068(v1, v1, v1, v1);
}

// Address range: 0xd200d - 0xd2020
int64_t function_d200d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0xd200d
    int64_t v1; // 0xd200d
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 + 0x410d4dfa); // 0xd2014
    *v3 = *v3 + (int32_t)v1;
    int64_t v4; // 0xd200d
    *(char *)a4 = *(char *)&v4 | (char)(v1 / 256);
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0xd203d - 0xd2040
int64_t function_d203d(int64_t a1, int64_t a2) {
    // 0xd203d
    int64_t v1; // 0xd203d
    bool v2; // 0xd203d
    return function_d2050(a1, (v2 ? -1 : 1) + a2, v1, v1, (int64_t)&g1);
}

// Address range: 0xd2040 - 0xd204a
int64_t function_d2040(int64_t a1, int64_t a2) {
    // 0xd2040
    int64_t result; // 0xd2040
    bool v1; // 0xd2040
    if (v1) {
        // 0xd204c
        return result;
    }
    // 0xd2042
    *(char *)a1 = (char)a2;
    int32_t * v2 = (int32_t *)(result - 0x5bc52127); // 0xd2043
    *v2 = *v2 + (v1 ? 70 : 69);
    return result;
}

// Address range: 0xd2050 - 0xd2068
int64_t function_d2050(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0xd2050
    int64_t v1; // 0xd2050
    uint64_t v2 = v1;
    __asm_out_133(-113, (int32_t)v1);
    *(char *)0x2e95cf59 = *(char *)0x2e95cf59 + (char)(v2 / 256);
    char * v3 = (char *)(v2 - 41); // 0xd2061
    *v3 = *v3 + (char)(a3 / 256);
    return 0x68ea3b8a;
}

// Address range: 0xd2068 - 0xd20fe
int64_t function_d2068(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0xd2068
    unsigned char v3 = llvm_ctpop_i8((char)v2 - 1); // 0xd2068
    int16_t v4 = a3; // 0xd206d
    *(char *)a1 = __asm_insb(v4);
    if (v3 % 2 != 0) {
        int64_t v5 = unknown_34d6ce6(); // 0xd20e0
        *(int32_t *)v1 = *(int32_t *)&v1 ^ (int32_t)v2;
        char * v6 = (char *)(v5 + 0x1e800b3); // 0xd20e7
        *v6 = *v6 + (char)a4;
        __asm_int(117);
        return unknown_ffffffffb1d29afe() & -256 | (int64_t)__asm_in_134(v4);
    }
    // 0xd2070
    int64_t v7; // 0xd2068
    *(int32_t *)v7 = *(int32_t *)&v7 + (int32_t)v2;
    char * v8 = (char *)(v7 + 65); // 0xd2072
    *v8 = *v8 + (char)a4;
    unknown_4872137f();
    __asm_in(-105);
    *(char *)0x5b02e787 = *(char *)0x5b02e787 + (char)(v2 / 256);
    int32_t v9 = *(int32_t *)(a3 + 0x2a383ac3) & (int32_t)v1; // 0xd208d
    *(char *)-0x20759864 = *(char *)-0x20759864 + (char)v2;
    return (v9 + 83) % 256 | v9 & -256;
}

// Address range: 0xd2122 - 0xd2125
int64_t function_d2122(int64_t a1) {
    // 0xd2122
    int64_t result; // 0xd2122
    return result;
}

// Address range: 0xd2143 - 0xd214c
int64_t function_d2143(void) {
    // 0xd2143
    return unknown_32842249();
}

// Address range: 0xd21b3 - 0xd21b8
int64_t function_d21b3(void) {
    // 0xd21b3
    return function_130f0a59();
}

// Address range: 0xd21bb - 0xd21bd
int64_t function_d21bb(int64_t a1) {
    // 0xd21bb
    int64_t result; // 0xd21bb
    return result;
}

// Address range: 0xd21cd - 0xd21dc
int64_t function_d21cd(void) {
    // 0xd21cd
    return __asm_hlt();
}

// Address range: 0xd2266 - 0xd2282
int64_t function_d2266(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xd2266
    bool v1; // 0xd2266
    int64_t v2 = v1 ? -4 : 4; // 0xd226c
    int64_t v3 = v2 + a1; // 0xd226c
    int64_t result = unknown_ffffffffb3133d7e(v3, v2 + a2, 2 * (int32_t)a3); // 0xd2278
    char * v4 = (char *)v3; // 0xd227d
    *v4 = *v4 + (char)a4;
    return result;
}

// Address range: 0xd2323 - 0xd2330
int64_t function_d2323(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_42e4932b(a1, a2, a3, a4); // 0xd2325
    uint32_t v1 = (int32_t)a4 % 32; // 0xd232a
    if (v1 != 0) {
        *(int32_t *)a2 = (int32_t)a2 >> v1;
    }
    return result;
}

// Address range: 0x3190bb - 0x3190c5
int64_t function_3190bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3190bb
    int64_t v1; // 0x3190bb
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(v2 - 63); // 0x3190bd
    *v3 = *v3 + (char)a4;
    return function_fffffffff1b2d8c8();
}

// Address range: 0x3190c7 - 0x3190da
int64_t function_3190c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3190c7
    int64_t v1; // 0x3190c7
    return function_cc59c(a1, a2, a3, a4, v1, v1, v1, a4);
}

// Address range: 0x3190da - 0x319209
int64_t function_3190da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3190da
    int64_t v1; // bp-32, 0x3190da
    int64_t v2 = (int64_t)&v1; // 0x319158
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x319160
    int64_t * v4 = (int64_t *)v3; // 0x31916b
    int64_t v5 = *(int64_t *)(v2 + 32); // 0x31916e
    *v4 = v5;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x319172
    *v6 = v5;
    int64_t v7 = *(int64_t *)(v2 + 16); // 0x31917a
    *v4 = v7;
    *v6 = 0x793963a5;
    *(int64_t *)(v2 - 24) = v5;
    int64_t v8 = v2 + 8; // 0x3191a0
    *(int64_t *)v8 = *v4;
    *v6 = v7;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = a2;
    *v6 = v3;
    *v4 = v8;
    int64_t v9; // 0x3190da
    return function_cc59c(a1, *v4, a3, a4, a5, v9, 0x313e8f, 169);
}

// Address range: 0x319209 - 0x319347
int64_t function_319209(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x319209
    return function_cc59c(a1, a2, a3, a4, a5, a6, a7, (int64_t)&g1);
}

// Address range: 0x319347 - 0x3194d0
int64_t function_319347(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x319347
    int64_t v1; // bp-56, 0x319347
    int64_t v2 = (int64_t)&v1; // 0x31941e
    v1 = 0x84e6890;
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x31946d
    bool v4; // 0x319347
    *v3 = 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2;
    int64_t v5 = v2 + 16; // 0x319470
    int64_t * v6 = (int64_t *)v5; // 0x319470
    *v6 = v1;
    int64_t v7; // 0x319347
    *v3 = v7 ^ 0x3ead6a66;
    int64_t v8 = v1; // 0x319495
    int64_t * v9 = (int64_t *)(v2 + 8); // 0x31949d
    int64_t v10 = *v9; // 0x31949d
    v1 = v10;
    *v3 = v10;
    *v9 = *v6;
    v1 = v5;
    return function_cc59c(v8, a2, a3, a4, a5, v7, 0x54a3065f, (int64_t)&g1);
}

// Address range: 0x3194d0 - 0x319618
int64_t function_3194d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3194d0
    int64_t v1; // bp-64, 0x3194d0
    v1 = (int64_t)&v1;
    int64_t v2; // bp-48, 0x3194d0
    v2 = (int64_t)&v2 + 16;
    int64_t v3; // 0x3194d0
    bool v4; // 0x3194d0
    return function_cc59c(a1, 310, a3, a4, a5, v3, 0x4000 * (int64_t)v4 | 2048 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 128 * (int64_t)v4 | 64 * (int64_t)v4 | 16 * (int64_t)v4 | (int64_t)v4 | 4 * (int64_t)v4 | 2, 0x314522);
}

// Address range: 0x319618 - 0x319739
int64_t function_319618(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x319618
    int64_t v1; // bp-64, 0x319618
    int64_t v2 = (int64_t)&v1; // 0x3196b9
    v1 = 0x259ff833;
    bool v3; // 0x319618
    *(int64_t *)(v2 - 8) = 0x4000 * (int64_t)(bool)v3 | 2048 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3 | 2;
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x3196de
    int64_t v5 = v2 + 24; // 0x3196de
    *(int64_t *)v5 = *v4;
    *v4 = a2;
    v1 = 0x1245b763;
    *(int64_t *)(v2 + 40) = 0x1245b763;
    int64_t v6 = *v4; // 0x3196f3
    v1 = v6;
    *v4 = v5;
    int64_t v7 = *(int64_t *)(v2 + 16); // 0x319725
    *v4 = v7;
    v1 = v7;
    return function_cc59c(a1, v6, a3, a4, a5, a6, 0x3bf79a40, (int64_t)&g1);
}

// Address range: 0x319739 - 0x319871
int64_t function_319739(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x319739
    bool v1; // 0x319739
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x319739
    int64_t v3 = v2; // bp-48, 0x3197b7
    int64_t v4 = (int64_t)&v3; // 0x3197f8
    int64_t v5 = v4 - 8; // 0x319800
    int64_t * v6 = (int64_t *)v5; // 0x319800
    *v6 = 0x67e70543;
    int64_t * v7 = (int64_t *)(v4 - 16); // 0x31980e
    *v7 = v2;
    *(int64_t *)(v4 + 8) = *v6;
    *v6 = 0x63506ffa;
    *v7 = 0x31d825ad;
    *(int64_t *)(v4 - 24) = 0x314972;
    *(int64_t *)(v4 + 24) = *v6;
    *v6 = a6;
    *v7 = v5;
    *v6 = 0x314972;
    v3 = v4 + 16;
    return function_cc59c(0x314972, a2, a3, a4, a5, *v6, 0xe049d75, (int64_t)&g1);
}

// Address range: 0x319871 - 0x319981
int64_t function_319871(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x319871
    int64_t v1; // bp-40, 0x319871
    v1 = (int64_t)&v1 + 16;
    int64_t v2; // 0x319871
    return function_cc59c(a1, a2, a3, a4, v2, v2, 0x314bb5, (int64_t)&g1);
}

// Address range: 0x3199a6 - 0x3199ad
int64_t function_3199a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3199a6
    int64_t v1; // 0x3199a6
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    char * v3 = (char *)(a4 - 127); // 0x3199a8
    *v3 = *v3 + (char)a4;
    return function_319a17(a1, a2, a3, a4, (int64_t)&g1);
}

// Address range: 0x3199ad - 0x319a17
int64_t function_3199ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3199ad
    int64_t result; // 0x3199ad
    __asm_outsb((int16_t)a3, (char)result);
    float80_t v1; // 0x3199ad
    *(int64_t *)(a1 + 72) = (int64_t)v1;
    return result;
}

// Address range: 0x319a17 - 0x319abb
int64_t function_319a17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x319a17
    return result;
}
