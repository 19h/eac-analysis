/*
 * Targeted RetDec C for native executable gap queue batch 256.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xe9b9c-0xe9d9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe9d9c-0xe9f9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xea19c-0xea39c rank=- name=- kind=- bytes=- uncovered=-
 *   0xea39c-0xea59c rank=- name=- kind=- bytes=- uncovered=-
 *   0x21c666-0x21c866 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21c866-0x21ca66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21ca66-0x21cc66 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3124bb-0x3126bb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_19108c38();
int64_t function_1f73eaa();
int64_t function_21c666(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21c66a(int64_t a1, int64_t a2);
int64_t function_21c671(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9);
int64_t function_21c6dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21c795(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21c885(void);
int64_t function_21c8b0(void);
int64_t function_21c8c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21c8ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21c966(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21c9a8(void);
int64_t function_21ca21(void);
int64_t function_21ca4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21cb06(void);
int64_t function_21cb48(void);
int64_t function_21cbab(void);
int64_t function_21cbae(void);
int64_t function_21cbdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_21cc64(int64_t a1);
int64_t function_3124bb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3124d3(void);
int64_t function_3124f1(void);
int64_t function_31259d(void);
int64_t function_3125c9(void);
int64_t function_3125ce(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_312611(void);
int64_t function_312621(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_312640(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6e0c7ae();
int64_t function_84b1d6();
int64_t function_9876f3();
int64_t function_e9b5d();
int64_t function_e9b9c(int64_t a1, int64_t a2);
int64_t function_e9bc7(int64_t a1);
int64_t function_e9c1c(void);
int64_t function_e9c28(void);
int64_t function_e9c4a(void);
int64_t function_e9c77(int64_t a1);
int64_t function_e9c97(void);
int64_t function_e9ca4(void);
int64_t function_e9cc9(void);
int64_t function_e9cdf(void);
int64_t function_e9ce1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_e9d2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e9d41(int64_t a1);
int64_t function_e9d4b(void);
int64_t function_e9d7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e9ded(void);
int64_t function_e9e04(void);
int64_t function_e9e0d(void);
int64_t function_e9e43(int64_t a1);
int64_t function_e9e58(int64_t a1);
int64_t function_e9e64(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_e9ed9(int64_t a1);
int64_t function_e9f08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e9f11(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e9f77(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e9f85(int64_t a1);
int64_t function_ea19c(void);
int64_t function_ea215(void);
int64_t function_ea284(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ea2a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ea2e0(void);
int64_t function_ea2fa(void);
int64_t function_ea325(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ea362(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ea375(void);
int64_t function_ea385(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ea3a8(void);
int64_t function_ea3ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ea3c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ea437(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ffffffffad21d080();
int64_t function_ffffffffd34befc2();
int64_t function_ffffffffd9e61f30();
int64_t function_ffffffffe8e061e2();
int64_t unknown_104803e7();
int64_t unknown_3a30e324();
int64_t unknown_3a9dc946();
int64_t unknown_3b030976();
int64_t unknown_3d23b408();
int64_t unknown_4871aa3();
int64_t unknown_5838d625();
int64_t unknown_5a23e42b();
int64_t unknown_7a883994();
int64_t unknown_819264a();
int64_t unknown_cdcf604();
int64_t unknown_daf508a();
int64_t unknown_ffffffff8a97e681();
int64_t unknown_ffffffff8be5a65e();
int64_t unknown_ffffffff8fb56bf5();
int64_t unknown_ffffffff93cbea68();
int64_t unknown_ffffffffa9fb75b6();
int64_t unknown_ffffffffb1d40855();
int64_t unknown_ffffffffb79a7eb7();
int64_t unknown_ffffffffb7a2fd52();
int64_t unknown_ffffffffbbc9b83a();
int64_t unknown_ffffffffbeea0154();
int64_t unknown_ffffffffc001f439();
int64_t unknown_ffffffffc0f4fdbc();
int64_t unknown_ffffffffe49bd0fb();
int64_t unknown_ffffffffef55d0a0();
int64_t unknown_fffffffffbcf7b92();
int64_t unknown_fffffffffc16ff93();

// Address range: 0xe9b9c - 0xe9bc6
int64_t function_e9b9c(int64_t a1, int64_t a2) {
    // 0xe9b9c
    unknown_5838d625();
    int64_t v1 = unknown_ffffffffb79a7eb7(); // 0xe9bb1
    int64_t v2; // 0xe9b9c
    uint32_t v3 = *(int32_t *)(v1 + (4 * v2 & -1024)) + (int32_t)v1; // 0xe9bb6
    int64_t result = v3; // 0xe9bc3
    if (((v3 + 0x5afe17ff ^ v3) & (v3 ^ -0x80000000)) < 0) {
        result = function_e9b5d();
    }
    // 0xe9bc6
    return result;
}

// Address range: 0xe9bc7 - 0xe9bd5
int64_t function_e9bc7(int64_t a1) {
    // 0xe9bc7
    *(char *)0x4c1083d1 = *(char *)0x4c1083d1 - 71;
    int64_t result; // 0xe9bc7
    return result;
}

// Address range: 0xe9c1c - 0xe9c1d
int64_t function_e9c1c(void) {
    // 0xe9c1c
    int64_t result; // 0xe9c1c
    return result;
}

// Address range: 0xe9c28 - 0xe9c2e
int64_t function_e9c28(void) {
    // 0xe9c28
    return function_ffffffffd9e61f30();
}

// Address range: 0xe9c4a - 0xe9c4f
int64_t function_e9c4a(void) {
    // 0xe9c4a
    return function_9876f3();
}

// Address range: 0xe9c77 - 0xe9c78
int64_t function_e9c77(int64_t a1) {
    // 0xe9c77
    int64_t result; // 0xe9c77
    return result;
}

// Address range: 0xe9c97 - 0xe9c99
int64_t function_e9c97(void) {
    // 0xe9c97
    return function_e9c1c();
}

// Address range: 0xe9ca4 - 0xe9ca5
int64_t function_e9ca4(void) {
    // 0xe9ca4
    int64_t result; // 0xe9ca4
    return result;
}

// Address range: 0xe9cc9 - 0xe9cca
int64_t function_e9cc9(void) {
    // 0xe9cc9
    int64_t result; // 0xe9cc9
    return result;
}

// Address range: 0xe9cdf - 0xe9ce1
int64_t function_e9cdf(void) {
    // 0xe9cdf
    return function_e9cc9();
}

// Address range: 0xe9ce1 - 0xe9d2a
int64_t function_e9ce1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xe9ce1
    int64_t v1; // 0xe9ce1
    int32_t * v2 = (int32_t *)(v1 + 8); // 0xe9ce1
    *v2 = *v2 + (int32_t)v1;
    *(char *)(a2 - 22) = (char)v1;
    char * v3 = (char *)(a5 + 0x4494d803); // 0xe9ce7
    *v3 = *v3 - (char)v1;
    bool v4; // 0xe9ce1
    int64_t v5 = (v4 ? -4 : 4) + a2; // 0xe9cee
    int64_t v6 = unknown_ffffffff8fb56bf5(); // 0xe9cef
    int32_t * v7 = (int32_t *)(v5 + 2 * v1); // 0xe9cf4
    *v7 = *v7 + 1;
    unsigned char v8 = *(char *)((int64_t)((int32_t)v6 >> 31) - 69); // 0xe9cfb
    int64_t v9 = unknown_cdcf604(); // 0xe9cfe
    uint32_t v10 = *(int32_t *)-0x18ef7a51; // 0xe9d0a
    uint32_t v11 = v10 + (int32_t)a4; // 0xe9d0a
    *(int32_t *)-0x18ef7a51 = v11;
    int64_t v12 = 0x10000 * (int32_t)v5 >> 16; // 0xe9d11
    if (v11 < v10 || v11 == 0) {
        v12 = function_e9ca4();
    }
    int64_t v13 = v9 & 0xffffffff; // 0xe9d03
    int64_t v14 = v12;
    int32_t * v15 = (int32_t *)(v13 + 102); // 0xe9d16
    *v15 = *v15 ^ (int32_t)(v1 & 0xffffff00 | (int64_t)v8);
    int32_t * v16 = (int32_t *)(v13 + 109); // 0xe9d1b
    int64_t v17; // 0xe9ce1
    *v16 = *v16 + (int32_t)(int64_t)&v17;
    return v14 + 104 & 116 | v14 & 0xf101c900;
}

// Address range: 0xe9d2a - 0xe9d3a
int64_t function_e9d2a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4; // 0xe9d2a
    uint32_t v2 = v1 + (int32_t)a3; // 0xe9d2a
    char * v3 = (char *)(a1 - 111); // 0xe9d2d
    int64_t result; // 0xe9d2a
    *v3 = (char)result + (char)(v2 < v1) + *v3;
    char * v4 = (char *)(int64_t)v2; // 0xe9d30
    *v4 = *v4 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0xe9d41 - 0xe9d42
int64_t function_e9d41(int64_t a1) {
    // 0xe9d41
    int64_t result; // 0xe9d41
    return result;
}

// Address range: 0xe9d4b - 0xe9d55
int64_t function_e9d4b(void) {
    // 0xe9d4b
    return unknown_ffffffffbeea0154();
}

// Address range: 0xe9d7f - 0xe9d88
int64_t function_e9d7f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe9d7f
    int64_t v1; // 0xe9d7f
    __asm_out(104, (int32_t)v1);
    return function_1f73eaa();
}

// Address range: 0xe9ded - 0xe9def
int64_t function_e9ded(void) {
    // 0xe9ded
    int64_t v1; // 0xe9ded
    return function_e9e64(v1, v1, v1, v1, (int64_t)&g3);
}

// Address range: 0xe9e04 - 0xe9e05
int64_t function_e9e04(void) {
    // 0xe9e04
    int64_t result; // 0xe9e04
    return result;
}

// Address range: 0xe9e0d - 0xe9e0e
int64_t function_e9e0d(void) {
    // 0xe9e0d
    int64_t result; // 0xe9e0d
    return result;
}

// Address range: 0xe9e43 - 0xe9e56
int64_t function_e9e43(int64_t a1) {
    // 0xe9e43
    unknown_819264a();
    if ((a1 & 64) == 0) {
        function_e9e0d();
    }
    // 0xe9e4c
    return unknown_ffffffffb1d40855();
}

// Address range: 0xe9e58 - 0xe9e60
int64_t function_e9e58(int64_t a1) {
    // 0xe9e58
    return unknown_ffffffff8be5a65e(a1);
}

// Address range: 0xe9e64 - 0xe9ecc
int64_t function_e9e64(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0xe9e64
    int64_t v1; // 0xe9e64
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a1;
    int16_t v2 = a3; // 0xe9e66
    *(int32_t *)a1 = __asm_insd(v2);
    int64_t v3 = v1 & 0xffffffff; // 0xe9e67
    __asm_int3(v3);
    unknown_3b030976();
    int64_t v4 = unknown_ffffffff8a97e681(); // 0xe9e7b
    *(char *)v3 = 2 * (char)v1;
    __asm_out_133(v2, (char)v4);
    int64_t v5 = unknown_daf508a() & -256 | (int64_t)__asm_in(-30); // 0xe9e89
    bool v6; // 0xe9e64
    int64_t v7 = (v6 ? -4 : 4) + v3; // 0xe9e95
    *(int32_t *)v5 = (int32_t)v5;
    int64_t v8 = unknown_ffffffffef55d0a0(v7); // 0xe9e9a
    int64_t v9; // 0xe9e64
    *(char *)a2 = *(char *)&v9 - 1;
    char * v10 = (char *)(v8 + 0x24aa000); // 0xe9ea1
    *v10 = *v10 + (char)v8;
    uint64_t v11 = a4 / 256; // 0xe9ea7
    uint64_t v12 = v8 + v11; // 0xe9ea7
    int64_t v13 = v8 & -256; // 0xe9ea7
    *(int32_t *)v7 = (int32_t)(v12 % 256 | v13);
    uint64_t v14 = v12 + 153; // 0xe9eb2
    int64_t result = v14 % 256 | v13; // 0xe9eb2
    char * v15 = (char *)(v1 + 0x8009900); // 0xe9eb4
    unsigned char v16 = *v15; // 0xe9eb4
    unsigned char v17 = v16 + (char)v11; // 0xe9eb4
    *v15 = v17;
    int64_t v18 = 256 * (v14 + v11 + (int64_t)(v17 < v16)) & 0xff00 | a4 & -0xff01; // 0xe9eba
    int64_t v19; // bp-8, 0xe9e64
    int32_t * v20 = (int32_t *)(4 * v1 - 0x23ff4451 + (int64_t)&v19); // 0xe9ebc
    *v20 = *v20 + (int32_t)v18;
    __asm_out_134(v2, (int32_t)result);
    float80_t v21; // 0xe9e64
    *(int16_t *)(v18 + 0x1e8a387) = (int16_t)v21;
    return result;
}

// Address range: 0xe9ed9 - 0xe9edb
int64_t function_e9ed9(int64_t a1) {
    // 0xe9ed9
    int64_t result; // 0xe9ed9
    return result;
}

// Address range: 0xe9f08 - 0xe9f0b
int64_t function_e9f08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe9f08
    int64_t v1; // 0xe9f08
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0xe9f08
    int64_t result; // 0xe9f08
    if (v3 != 0) {
        bool v4; // 0xe9f08
        result = (int32_t)v2 >> v3 | (int32_t)((v2 & 0xffffffff) << (int64_t)(33 - v3)) | (int32_t)v4 << 32 - v3;
    }
    return result;
}

// Address range: 0xe9f11 - 0xe9f1a
int64_t function_e9f11(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 105); // 0xe9f16
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0xe9f11
    return result;
}

// Address range: 0xe9f77 - 0xe9f83
int64_t function_e9f77(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0xe9f77
    int64_t v2; // 0xe9f77
    if (v1 != 0) {
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    return v2 & -256 | (int64_t)__asm_in(-64);
}

// Address range: 0xe9f85 - 0xe9f95
int64_t function_e9f85(int64_t a1) {
    // 0xe9f85
    return unknown_fffffffffc16ff93(a1);
}

// Address range: 0xea19c - 0xea19d
int64_t function_ea19c(void) {
    // 0xea19c
    int64_t result; // 0xea19c
    return result;
}

// Address range: 0xea215 - 0xea217
int64_t function_ea215(void) {
    // 0xea215
    int64_t result; // 0xea215
    return result;
}

// Address range: 0xea284 - 0xea29b
int64_t function_ea284(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0xea28c
    int64_t result; // 0xea284
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(result - 0x1ea77ec2); // 0xea28c
        *v2 = *v2 >> v1;
    }
    return result;
}

// Address range: 0xea2a6 - 0xea2b4
int64_t function_ea2a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xea2a6
    int64_t v1; // 0xea2a6
    int32_t * v2 = (int32_t *)((v1 + a4 & 0xffffffff) - 128); // 0xea2ad
    *v2 = *v2 + (int32_t)v1;
    return a3 & 0xffffffff;
}

// Address range: 0xea2e0 - 0xea2e1
int64_t function_ea2e0(void) {
    // 0xea2e0
    int64_t result; // 0xea2e0
    return result;
}

// Address range: 0xea2fa - 0xea2fb
int64_t function_ea2fa(void) {
    // 0xea2fa
    int64_t result; // 0xea2fa
    return result;
}

// Address range: 0xea325 - 0xea358
int64_t function_ea325(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_5a23e42b(); // 0xea325
    // 0xea336
    int64_t v2; // 0xea325
    uint32_t v3 = (int32_t)v2; // 0xea337
    uint32_t v4 = *(int32_t *)(a2 + 0xa64f89) + v3; // 0xea337
    uint64_t v5 = v1 - (v4 < v3 ? 0xfededc74 : 0xfededc73); // 0xea33d
    *(char *)0x39907aa7989701e8 = (char)v5;
    char v6 = *(char *)(int64_t)v4; // 0xea34b
    *(int32_t *)0xe8ac76cb = *(int32_t *)0xe8ac76cb + (int32_t)a4;
    return 256 * (int64_t)(v6 ^ (char)(v5 / 256)) | v5 & 0xffff00ff;
}

// Address range: 0xea362 - 0xea365
int64_t function_ea362(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xea362
    int64_t result; // 0xea362
    *(int32_t *)a1 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0xea375 - 0xea376
int64_t function_ea375(void) {
    // 0xea375
    int64_t result; // 0xea375
    return result;
}

// Address range: 0xea385 - 0xea3a6
int64_t function_ea385(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3 & -0xff01 | (int64_t)&g2; // 0xea389
    unknown_7a883994();
    int64_t result = unknown_4871aa3(); // 0xea39d
    __asm_out_134((int16_t)v1, (int32_t)result);
    *(char *)v1 = (char)a4 | (char)&g1;
    return result;
}

// Address range: 0xea3a8 - 0xea3ad
int64_t function_ea3a8(void) {
    // 0xea3a8
    return function_ffffffffe8e061e2();
}

// Address range: 0xea3ad - 0xea3bc
int64_t function_ea3ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a4 + 96); // 0xea3ad
    *v1 = *v1 + (int32_t)a4;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return function_19108c38();
}

// Address range: 0xea3c9 - 0xea408
int64_t function_ea3c9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0xea3c9
    *(int32_t *)0x3e990349 = *(int32_t *)0x3e990349 + (int32_t)v2;
    uint32_t v3 = 0x10000 * (int32_t)unknown_104803e7() >> 16; // 0xea3eb
    int64_t result = v3; // 0xea3eb
    *(char *)a1 = (char)(a4 | a1);
    char * v4 = (char *)(a2 - 0x69706069); // 0xea3ef
    *v4 = *v4 | (char)(v2 / 256);
    *(int32_t *)a1 = v3;
    char * v5 = (char *)result; // 0xea3fb
    *v5 = *v5 + (char)v3;
    char * v6 = (char *)(v1 + 0x3d000002); // 0xea3fd
    *v6 = *v6 + (char)(v3 / 256);
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v2;
    return result;
}

// Address range: 0xea437 - 0xea4b1
int64_t function_ea437(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = (int64_t)*(int32_t *)0xb3ecc4aa37212a; // 0xea437
    if (a4 != 0) {
        // 0xea443
        return result;
    }
    int64_t v1; // 0xea437
    bool v2; // 0xea437
    if (true == !v2) {
        // 0xea4ab
        *(char *)-0x6d80354e = *(char *)-0x6d80354e + (char)(v1 / 256);
        return result;
    }
    // 0xea459
    *(char *)0x790fe167 = *(char *)0x790fe167 >> 1;
    return 0xffffffec * v1 & 0xfffffffc;
}

// Address range: 0x21c666 - 0x21c669
int64_t function_21c666(int64_t a1, int64_t a2, int64_t a3) {
    // 0x21c666
    int64_t v1; // 0x21c666
    return (int64_t)&v1;
}

// Address range: 0x21c66a - 0x21c671
int64_t function_21c66a(int64_t a1, int64_t a2) {
    // 0x21c66a
    int64_t v1; // 0x21c66a
    *(char *)a2 = 2 * (char)v1;
    return function_6e0c7ae();
}

// Address range: 0x21c671 - 0x21c6dd
int64_t function_21c671(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9) {
    int64_t v1 = a2;
    int64_t v2 = a8;
    int32_t * v3 = (int32_t *)(a5 - 0x79c545fb); // 0x21c672
    *v3 = -*v3;
    int64_t v4; // 0x21c671
    *(char *)v4 = *(char *)&v4 + 21;
    int16_t v5 = a3; // 0x21c67e
    __asm_out_133(v5, (char)v4);
    int32_t v6 = v4;
    uint32_t v7 = (int32_t)a4 % 32; // 0x21c67f
    int32_t v8 = v6; // 0x21c67f
    if (v7 != 0) {
        *(int32_t *)v4 = v6 >> 32 - v7 | v6 << v7;
        v8 = *(int32_t *)&v4;
    }
    *(int32_t *)v4 = v8 ^ (int32_t)(int64_t)&v2;
    int64_t v9; // 0x21c671
    char v10 = *(char *)-0x4216c776 + (char)(v9 / 256); // 0x21c683
    *(char *)-0x4216c776 = v10;
    if (v10 < 0) {
        int64_t result = __asm_iretd(); // 0x21c6d2
        *(char *)(a4 - 29 + a5) = (char)v1;
        return result;
    }
    char * v11 = (char *)unknown_fffffffffbcf7b92(); // 0x21c691
    *v11 = *v11 / 2;
    *(int32_t *)a1 = *(int32_t *)&v1;
    __asm_in_135(v5);
    uint64_t v12 = (int64_t)__asm_in_136(-51); // 0x21c6a1
    bool v13; // 0x21c671
    char * v14 = (char *)(a1 - 94 + (v13 ? -4 : 4)); // 0x21c6a3
    *v14 = *v14 + (char)(a4 / 256);
    char * v15 = (char *)(v9 - 103 + 2 * v9); // 0x21c6ab
    *v15 = (char)(v12 / 256);
    return 256 * (int64_t)*v15 | v12 & -0xff01;
}

// Address range: 0x21c6dd - 0x21c6f4
int64_t function_21c6dd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21c6dd
    int64_t result; // 0x21c6dd
    return result;
}

// Address range: 0x21c795 - 0x21c7be
int64_t function_21c795(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21c795
    __asm_int(105);
    int64_t v1; // 0x21c795
    int32_t * v2 = (int32_t *)(v1 + 0x13d00f0); // 0x21c7a1
    *v2 = 2 * *v2;
    __asm_wait();
    __asm_wait();
    return unknown_ffffffffc0f4fdbc();
}

// Address range: 0x21c885 - 0x21c886
int64_t function_21c885(void) {
    // 0x21c885
    int64_t result; // 0x21c885
    return result;
}

// Address range: 0x21c8b0 - 0x21c8b1
int64_t function_21c8b0(void) {
    // 0x21c8b0
    int64_t result; // 0x21c8b0
    return result;
}

// Address range: 0x21c8c2 - 0x21c8de
int64_t function_21c8c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 0x60433337); // 0x21c8c2
    *v1 = *v1 + (char)a4;
    *(int32_t *)0x635778b = *(int32_t *)0x635778b & (int32_t)a3;
    function_84b1d6();
    return function_21c885();
}

// Address range: 0x21c8ed - 0x21c952
int64_t function_21c8ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x21c8ed
    int64_t v3 = v2 & 0xffffffff; // 0x21c8f2
    *(int32_t *)-0x24cc985d3363c097 = (int32_t)a1;
    int32_t * v4 = (int32_t *)(v3 - 75); // 0x21c902
    int32_t v5 = *v4; // 0x21c902
    int32_t v6 = a4; // 0x21c902
    int32_t v7 = v5 + v6; // 0x21c902
    *v4 = v7;
    int64_t v8; // 0x21c8ed
    if (v7 < 0 == ((v7 ^ v5) & (v7 ^ v6)) < 0) {
        // 0x21c8ed
        v8 = a1 & 0xffffffff;
    } else {
        v8 = function_21c8b0();
    }
    int64_t result = a3 & 0xffffffff; // 0x21c907
    *(int32_t *)result = (int32_t)(v8 & a3);
    bool v9; // 0x21c8ed
    *(int32_t *)((v9 ? -4 : 4) + v3) = *(int32_t *)&v1;
    return result;
}

// Address range: 0x21c966 - 0x21c978
int64_t function_21c966(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21c966
    int64_t v1; // 0x21c966
    int64_t v2 = v1;
    int64_t v3 = a4 - 1; // 0x21c968
    int64_t v4; // 0x21c966
    if (v3 == 0) {
        int64_t v5 = unknown_ffffffffa9fb75b6(); // 0x21c96a
        __asm_outsb((int16_t)a3, (char)v1);
        v4 = v5;
    }
    int64_t v6 = v4;
    *(char *)v2 = (char)(v2 & v3);
    char v7 = *(char *)v6; // 0x21c972
    return v6 & -0x10000 | (int64_t)((256 * (int16_t)v6 >> 8) * (int16_t)v7);
}

// Address range: 0x21c9a8 - 0x21c9a9
int64_t function_21c9a8(void) {
    // 0x21c9a8
    int64_t result; // 0x21c9a8
    return result;
}

// Address range: 0x21ca21 - 0x21ca22
int64_t function_21ca21(void) {
    // 0x21ca21
    int64_t result; // 0x21ca21
    return result;
}

// Address range: 0x21ca4c - 0x21ca70
int64_t function_21ca4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffb7a2fd52(); // 0x21ca4c
    bool v2; // 0x21ca4c
    if (v2) {
        // 0x21ca5f
        __asm_out_134((int16_t)a3, (int32_t)__asm_int3(a1));
        unknown_ffffffff93cbea68();
        return (int64_t)*(int32_t *)-0x3d0677fe17b6cf05;
    }
    // 0x21ca53
    return v1 + 0xe86f5eda & 0xffffffff;
}

// Address range: 0x21cb06 - 0x21cb0b
int64_t function_21cb06(void) {
    // 0x21cb06
    return function_ffffffffad21d080();
}

// Address range: 0x21cb48 - 0x21cb4a
int64_t function_21cb48(void) {
    // 0x21cb48
    int64_t result; // 0x21cb48
    return result;
}

// Address range: 0x21cbab - 0x21cbac
int64_t function_21cbab(void) {
    // 0x21cbab
    int64_t result; // 0x21cbab
    return result;
}

// Address range: 0x21cbae - 0x21cbaf
int64_t function_21cbae(void) {
    // 0x21cbae
    int64_t result; // 0x21cbae
    return result;
}

// Address range: 0x21cbdc - 0x21cc3b
int64_t function_21cbdc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x21cbdc
    int64_t v1; // 0x21cbdc
    *(char *)v1 = 61;
    int32_t * v2 = (int32_t *)(v1 - 0x55d9ced6); // 0x21cbeb
    uint32_t v3 = *v2; // 0x21cbeb
    uint32_t v4 = v3 + (int32_t)v1; // 0x21cbeb
    *v2 = v4;
    bool v5; // 0x21cbdc
    int64_t v6 = v5 ? -4 : 4;
    int64_t v7 = a4 & -256 | 123; // 0x21cbf1
    int64_t v8 = a2; // 0x21cbf1
    int64_t v9 = a1; // 0x21cbf1
    int64_t v10; // 0x21cbdc
    int64_t v11 = v10 & -256; // 0x21cbf3
    int64_t v12 = unknown_ffffffffe49bd0fb(); // 0x21cbf5
    uint32_t v13 = (int32_t)v8 + (int32_t)(v4 < v3) - *(int32_t *)v8; // 0x21cbfb
    v8 = v13;
    uint32_t v14 = (int32_t)v12;
    uint32_t v15 = *(int32_t *)v9; // 0x21cbfd
    v9 += v6;
    v7--;
    bool v16 = v15 > v14; // 0x21cbfe
    while (v7 != 0 == v15 == v14) {
        // 0x21cbf2
        v11 &= -256;
        v12 = unknown_ffffffffe49bd0fb();
        v13 = (int32_t)v8 + (int32_t)v16 - *(int32_t *)v8;
        v8 = v13;
        v14 = (int32_t)v12;
        v15 = *(int32_t *)v9;
        v9 += v6;
        v7--;
        v16 = v15 > v14;
    }
    int64_t v17 = v9 + v6; // 0x21cc00
    int64_t v18 = unknown_3d23b408(v17, v13); // 0x21cc02
    int32_t * v19 = (int32_t *)(v8 + 14); // 0x21cc07
    *v19 = *v19 + (int32_t)v11;
    *(char *)v17 = *(char *)v8;
    int32_t * v20 = (int32_t *)v18; // 0x21cc12
    int32_t v21 = *v20; // 0x21cc12
    int32_t v22 = a3; // 0x21cc12
    int32_t v23 = v21 + v22; // 0x21cc12
    *v20 = v23;
    if (v23 < 0 == ((v23 ^ v21) & (v23 ^ v22)) < 0) {
        function_21cbab();
    }
    int64_t v24 = unknown_3a30e324(); // 0x21cc1e
    uint32_t v25 = v14 % 32; // 0x21cc25
    if (v25 != 0) {
        int32_t * v26 = (int32_t *)v24; // 0x21cc25
        uint32_t v27 = *v26; // 0x21cc25
        *v26 = v27 >> 32 - v25 | v27 << v25;
    }
    int32_t * v28 = (int32_t *)((v5 ? -1 : 1) + v8); // 0x21cc2c
    *v28 = *v28 | -64;
    return unknown_ffffffffbbc9b83a();
}

// Address range: 0x21cc64 - 0x21cc65
int64_t function_21cc64(int64_t a1) {
    // 0x21cc64
    int64_t result; // 0x21cc64
    return result;
}

// Address range: 0x3124bb - 0x3124bd
int64_t function_3124bb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3124bb
    int64_t result; // 0x3124bb
    return result;
}

// Address range: 0x3124d3 - 0x3124d4
int64_t function_3124d3(void) {
    // 0x3124d3
    int64_t result; // 0x3124d3
    return result;
}

// Address range: 0x3124f1 - 0x3124f3
int64_t function_3124f1(void) {
    // 0x3124f1
    return function_3124d3();
}

// Address range: 0x31259d - 0x31259e
int64_t function_31259d(void) {
    // 0x31259d
    int64_t result; // 0x31259d
    return result;
}

// Address range: 0x3125c9 - 0x3125cd
int64_t function_3125c9(void) {
    // 0x3125c9
    int64_t result; // 0x3125c9
    return result;
}

// Address range: 0x3125ce - 0x3125fd
int64_t function_3125ce(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 31); // 0x3125ce
    *v1 = *v1 | 83;
    uint64_t v2 = a4 / 256; // 0x3125d4
    int64_t v3; // 0x3125ce
    int64_t v4 = v3 & -256 | v2 % 256; // 0x3125d4
    int32_t * v5 = (int32_t *)(a1 - 0x17fec22e); // 0x3125d6
    *v5 = *v5 + (int32_t)v3;
    uint32_t v6 = *(int32_t *)(v4 + 0xcf7fee3); // 0x3125de
    int64_t v7; // 0x3125ce
    int32_t v8 = *(int32_t *)&v7; // 0x3125e4
    *(int32_t *)v7 = v8 - 6 + (int32_t)(v6 > (int32_t)a1);
    int32_t * v9 = (int32_t *)(8 * a4 - 28 + (2 * v3 & 0xffffffff)); // 0x3125e9
    *v9 = *v9 + (int32_t)v3;
    *(char *)-0x175aaf61 = *(char *)-0x175aaf61 | (char)v2;
    int32_t * v10 = (int32_t *)(v7 - 127); // 0x3125f4
    *v10 = *v10 + (int32_t)a4;
    int64_t v11; // 0x3125ce
    __asm_outsd((int16_t)a3, *(int32_t *)&v11);
    int64_t result = v4; // 0x3125fa
    int64_t v12; // 0x3125ce
    if (!((a4 == 1 | *(int32_t *)&v12 == (int32_t)v4))) {
        result = function_31259d();
    }
    // 0x3125fc
    return result;
}

// Address range: 0x312611 - 0x312612
int64_t function_312611(void) {
    // 0x312611
    int64_t result; // 0x312611
    return result;
}

// Address range: 0x312621 - 0x312640
int64_t function_312621(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x312621
    int64_t v1; // 0x312621
    unsigned char v2 = (char)v1;
    unsigned char v3 = (char)v1 + v2; // 0x312621
    *(char *)a3 = v3;
    int64_t v4; // 0x312621
    char v5 = *(char *)&v4; // 0x312623
    *(char *)v4 = v5 + (char)(a4 / 256) + (char)(v3 < v2);
    __asm_int(-22);
    if (a4 != 1) {
        function_312611();
    }
    int32_t * v6 = (int32_t *)(v1 - 0x40f577fd); // 0x312629
    *v6 = *v6 + (int32_t)v1;
    unknown_ffffffffc001f439();
    return function_ffffffffd34befc2();
}

// Address range: 0x312640 - 0x31264b
int64_t function_312640(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_3a9dc946(a1, a2, a3, a4, a5); // 0x312640
    return (int64_t)(*(int32_t *)(a4 - 6) * (int32_t)v1);
}
