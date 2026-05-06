/*
 * Targeted RetDec C for native executable gap queue batch 248.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xe879c-0xe899c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe899c-0xe8b9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe8b9c-0xe8d9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe8d9c-0xe8f9c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe8f9c-0xe919c rank=- name=- kind=- bytes=- uncovered=-
 *   0x144f13-0x145113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x310ebb-0x3110bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3114bb-0x3116bb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_144ee6();
int64_t function_144f13(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_144f73(void);
int64_t function_144fa1(int64_t a1);
int64_t function_144fc0(int64_t a1);
int64_t function_145050(void);
int64_t function_145067(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_145089(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_1450e5(void);
int64_t function_21a7e116();
int64_t function_310e91();
int64_t function_310ebb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_310f0e(void);
int64_t function_310f39(void);
int64_t function_310f4e(void);
int64_t function_310f59(int64_t a1);
int64_t function_310f61(int64_t a1);
int64_t function_311061(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_311083(int64_t a1);
int64_t function_311085(void);
int64_t function_3114bb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3114e0(void);
int64_t function_3114f5(void);
int64_t function_3114fb(int64_t a1);
int64_t function_311525(void);
int64_t function_311554(void);
int64_t function_311588(void);
int64_t function_3115c7(int64_t a1);
int64_t function_31162f(int64_t a1);
int64_t function_311665(void);
int64_t function_31166a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_71071dd();
int64_t function_e875a();
int64_t function_e879c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e88ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e8915(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e8966(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e89bf(int64_t a1);
int64_t function_e8a1a(int64_t a1);
int64_t function_e8a34(int64_t a1, int64_t a2);
int64_t function_e8a46(int64_t a1);
int64_t function_e8ac4(void);
int64_t function_e8ae4(void);
int64_t function_e8ae7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e8af8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e8b3e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_e8b62(void);
int64_t function_e8bc3(int64_t a1);
int64_t function_e8bea(int64_t a1);
int64_t function_e8c2f(void);
int64_t function_e8c3f(void);
int64_t function_e8c43(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e8c66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e8cb2(void);
int64_t function_e8ce9(void);
int64_t function_e8d3f(int64_t a1);
int64_t function_e8d43(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_e8dbd(void);
int64_t function_e8dc4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e8dec(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_e8e63(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e8e81(int64_t a1);
int64_t function_e8ecd(void);
int64_t function_e8ef2(void);
int64_t function_e8ef5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e8f26(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e8f77(void);
int64_t function_e8f8a(int64_t a1);
int64_t function_e8f8d(void);
int64_t function_e8fb4(void);
int64_t function_e9023(void);
int64_t function_e9026(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e9041(int64_t a1);
int64_t function_e907d(void);
int64_t function_e9095(void);
int64_t function_e9116(void);
int64_t function_e9124(void);
int64_t function_e9147(int64_t a1);
int64_t function_e9152(int64_t a1);
int64_t function_e916c(int64_t a1);
int64_t function_ffffffffb46e1f4c();
int64_t function_ffffffffe8519713();
int64_t function_ffffffffe8b51a7d();
int64_t function_fffffffff04e47f9();
int64_t unknown_210fc4f6();
int64_t unknown_2f805289();
int64_t unknown_303576c();
int64_t unknown_3d393ad6();
int64_t unknown_3de17654();
int64_t unknown_448430d4();
int64_t unknown_680e9b0f();
int64_t unknown_6aff712f();
int64_t unknown_78d201cc();
int64_t unknown_a26677();
int64_t unknown_d40de6e();
int64_t unknown_e207a89();
int64_t unknown_f045f01();
int64_t unknown_f05be4e();
int64_t unknown_f0f2deb();
int64_t unknown_ffffffff8e0791c7();
int64_t unknown_ffffffff98c14338();
int64_t unknown_ffffffffabc2a8c5();
int64_t unknown_ffffffffb3bc12c7();
int64_t unknown_ffffffffbdc68a94();
int64_t unknown_ffffffffc86ff857();
int64_t unknown_ffffffffe3f8b358();
int64_t unknown_ffffffffebd1423c();
int64_t unknown_fffffffffa5948d4();

// Address range: 0xe879c - 0xe8857
int64_t function_e879c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1;
    uint64_t v2 = a4 - 1; // 0xe879c
    int64_t v3; // 0xe879c
    bool v4; // 0xe879c
    if (v2 != 0 && !v4) {
        v3 = function_e875a();
    }
    // 0xe879e
    int64_t v5; // 0xe879c
    int32_t * v6 = (int32_t *)(v5 - 12); // 0xe87a4
    *v6 = *v6 + (int32_t)v3;
    unsigned char v7 = llvm_ctpop_i8((char)(v5 & a3)); // 0xe87ad
    char v8 = v3; // 0xe87b0
    *(char *)-0x31f3a2ef1fe1766 = v8;
    if (v7 % 2 == 0) {
        // 0xe8834
        *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v5;
        uint32_t v9 = (int32_t)a2; // 0xe8846
        int32_t v10 = *(int32_t *)(v5 - 0x7d6eb100); // 0xe8848
        return unknown_3de17654(v3 & 0xffffffff, (int32_t)(-1 - (int32_t)v2 < v9) + v9 + v10, (a3 - v5) % 256 | a3 & -256) + v5 & 0xffffffff;
    }
    char v11 = a3;
    *(char *)a3 = v8 + v11;
    unknown_ffffffffb3bc12c7();
    char * v12 = (char *)(v5 - 103); // 0xe87c6
    *v12 = *v12 + v11;
    int64_t v13 = 76 * v2 & 0xfffffffc; // 0xe87c9
    int64_t v14 = v4 ? -1 : 1; // 0xe87cf
    int64_t v15 = v1 + v14; // 0xe87cf
    int64_t v16 = v14 + a2; // 0xe87cf
    uint64_t v17 = unknown_3d393ad6(v15, v16) + 2 * v5; // 0xe87d7
    int32_t * v18 = (int32_t *)(a3 + 0x127410cc); // 0xe87d9
    uint32_t v19 = *v18; // 0xe87d9
    uint32_t v20 = v19 + (int32_t)v17; // 0xe87d9
    *v18 = v20;
    char v21 = *(char *)((v17 & 0xffffffff) + 0x182351d9); // 0xe87df
    unsigned char v22 = v21 + (char)v5 + (char)(v20 < v19); // 0xe87df
    int64_t v23 = v5 & -256; // 0xe87df
    int32_t * v24 = (int32_t *)((v5 & 0xfffffff7 | v17 & 247 | v17 & 0xffff0000 | 256 * (int64_t)(v22 + (char)(v17 / 256)) | 8) + 0x38e5f802); // 0xe87eb
    uint32_t v25 = *v24; // 0xe87eb
    uint32_t v26 = v25 + (int32_t)a3; // 0xe87eb
    *v24 = v26;
    int64_t v27 = unknown_210fc4f6(); // 0xe87f1
    unsigned char v28 = (char)v27; // 0xe87f6
    unsigned char v29 = v28 - 56 + (char)(v26 < v25); // 0xe87f6
    bool v30 = v26 < v25 ? v29 <= v28 : v28 > 55; // 0xe87f6
    int64_t v31 = v27 & -256; // 0xe87f6
    int64_t v32 = v31 | (int64_t)v29; // 0xe87f6
    char * v33 = (char *)(v32 + 1); // 0xe87fa
    *v33 = *v33 + (char)(v2 / 256) + (char)v30;
    int32_t * v34 = (int32_t *)(v32 + 0xbb4d27); // 0xe87fe
    uint32_t v35 = *v34; // 0xe87fe
    uint32_t v36 = (int32_t)(v23 | (int64_t)v22); // 0xe87fe
    int32_t v37 = v35 - v36; // 0xe87fe
    unsigned char v38 = llvm_ctpop_i8((char)v37); // 0xe87fe
    *v34 = v37;
    *(int64_t *)v13 = 0x4000 * (int64_t)v4 | 1024 * (int64_t)v4 | 512 * (int64_t)v4 | 256 * (int64_t)v4 | (int64_t)(v35 < v36) | 64 * (int64_t)(v37 == 0) | 128 * (int64_t)(v37 < 0) | 16 * (int64_t)(v35 % 16 - v36 % 16 > 15) | 2048 * (int64_t)(((v37 ^ v35) & (v35 ^ v36)) < 0) | 4 * (int64_t)(v38 % 2 == 0) | 2;
    *(int32_t *)v15 = *(int32_t *)v16;
    *(char *)0x175a540f = *(char *)0x175a540f + (char)(v5 / 256);
    *(int64_t *)(v13 - 8) = v23;
    return v31 | (int64_t)(v29 + 26);
}

// Address range: 0xe88ef - 0xe8912
int64_t function_e88ef(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = unknown_f045f01(); // 0xe88fb
    char * v2 = (char *)(v1 + 0x2362000); // 0xe8900
    *v2 = *v2 + (char)v1;
    char * v3 = (char *)(a3 + 1); // 0xe8906
    *v3 = *v3 + (char)(v1 / 256);
    return unknown_680e9b0f();
}

// Address range: 0xe8915 - 0xe891d
int64_t function_e8915(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe8915
    return function_71071dd();
}

// Address range: 0xe8966 - 0xe896f
int64_t function_e8966(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe8966
    int64_t result; // 0xe8966
    return result;
}

// Address range: 0xe89bf - 0xe89dc
int64_t function_e89bf(int64_t a1) {
    // 0xe89bf
    int64_t v1; // 0xe89bf
    unknown_fffffffffa5948d4(2 * (int32_t)a1, unknown_ffffffffabc2a8c5() + 0xdd069a88 + 4 * v1 & 0xffffffff);
    return function_ffffffffe8519713();
}

// Address range: 0xe8a1a - 0xe8a1d
int64_t function_e8a1a(int64_t a1) {
    // 0xe8a1a
    int64_t result; // 0xe8a1a
    return result;
}

// Address range: 0xe8a34 - 0xe8a38
int64_t function_e8a34(int64_t a1, int64_t a2) {
    // 0xe8a34
    int64_t v1; // 0xe8a34
    return v1 & 0xffffffff;
}

// Address range: 0xe8a46 - 0xe8a49
int64_t function_e8a46(int64_t a1) {
    // 0xe8a46
    int64_t result; // 0xe8a46
    return result;
}

// Address range: 0xe8ac4 - 0xe8ac5
int64_t function_e8ac4(void) {
    // 0xe8ac4
    int64_t result; // 0xe8ac4
    return result;
}

// Address range: 0xe8ae4 - 0xe8ae5
int64_t function_e8ae4(void) {
    // 0xe8ae4
    int64_t result; // 0xe8ae4
    return result;
}

// Address range: 0xe8ae7 - 0xe8af8
int64_t function_e8ae7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0xe8ae7
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a1 + 0x570e5f3a); // 0xe8ae7
        uint32_t v3 = *v2; // 0xe8ae7
        *v2 = v3 >> v1 | v3 << 32 - v1;
    }
    int64_t v4; // 0xe8ae7
    *(char *)0x38e2e801e86c98 = (char)v4;
    return function_e8ac4();
}

// Address range: 0xe8af8 - 0xe8b00
int64_t function_e8af8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = __asm_wait(a1, a2, a3, a4, a5); // 0xe8afa
    bool v1; // 0xe8af8
    if (v1) {
        result = function_e8ae4();
    }
    int32_t * v2 = (int32_t *)(8 * a4 + a1); // 0xe8afc
    *v2 = *v2 + (int32_t)a2;
    return result;
}

// Address range: 0xe8b3e - 0xe8b59
int64_t function_e8b3e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = unknown_f05be4e(); // 0xe8b48
    char * v2 = (char *)(v1 + 0x252e000); // 0xe8b4d
    *v2 = *v2 + (char)v1;
    int32_t * v3 = (int32_t *)(a3 + 1); // 0xe8b55
    int64_t v4; // 0xe8b3e
    *v3 = *v3 + (int32_t)v4;
    return (v1 + a4 / 256) % 256 | v1 & -256;
}

// Address range: 0xe8b62 - 0xe8b65
int64_t function_e8b62(void) {
    // 0xe8b62
    int64_t result; // 0xe8b62
    return result;
}

// Address range: 0xe8bc3 - 0xe8bc4
int64_t function_e8bc3(int64_t a1) {
    // 0xe8bc3
    int64_t result; // 0xe8bc3
    return result;
}

// Address range: 0xe8bea - 0xe8beb
int64_t function_e8bea(int64_t a1) {
    // 0xe8bea
    int64_t result; // 0xe8bea
    return result;
}

// Address range: 0xe8c2f - 0xe8c30
int64_t function_e8c2f(void) {
    // 0xe8c2f
    int64_t result; // 0xe8c2f
    return result;
}

// Address range: 0xe8c3f - 0xe8c40
int64_t function_e8c3f(void) {
    // 0xe8c3f
    int64_t result; // 0xe8c3f
    return result;
}

// Address range: 0xe8c43 - 0xe8c66
int64_t function_e8c43(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe8c43
    *(int32_t *)0x103e7952 = *(int32_t *)0x103e7952 + (int32_t)a1;
    int64_t result = unknown_ffffffffc86ff857(); // 0xe8c5c
    if ((*(char *)(a3 - 0x75cdaab8) || (char)a3) == 0) {
        result = function_e8c2f();
    }
    char * v1 = (char *)(a4 - 0x7f73daa6); // 0xe8c5e
    *v1 = *v1 + 91;
    return result;
}

// Address range: 0xe8c66 - 0xe8c96
int64_t function_e8c66(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0xe8c66
    __asm_rcl(*(char *)(4 * v2 + a3));
    char * v3 = (char *)(a2 - 70); // 0xe8c6f
    *v3 = *v3 | (char)a4;
    int64_t v4 = (v2 & 0x3b013df2) + v2; // 0xe8c75
    *(int32_t *)-0x55266a82 = *(int32_t *)-0x55266a82 + (int32_t)a1;
    int64_t v5; // 0xe8c66
    uint32_t v6 = *(int32_t *)&v5; // 0xe8c7e
    int64_t v7 = ((a5 & (int64_t)&g1) == 0 ? 4 : -4) + a1; // 0xe8c7e
    v5 = v7;
    int32_t * v8 = (int32_t *)(v4 & 0xffffffff); // 0xe8c7f
    uint32_t v9 = *v8; // 0xe8c7f
    uint32_t v10 = (int32_t)a4 % 32; // 0xe8c7f
    v5 = v7;
    if (v10 != 0) {
        *v8 = (int32_t)(v6 > (int32_t)v4) << 32 - v10 | v9 >> v10 | (int32_t)((int64_t)v9 << (int64_t)(33 - v10));
    }
    unknown_2f805289(v5);
    int64_t v11 = __asm_sti(); // 0xe8c88
    *(int32_t *)v5 = *(int32_t *)&v1;
    int64_t result = unknown_ffffffffbdc68a94(v5 + 5, v1 + 4); // 0xe8c93
    if (*(char *)(v5 + 4) <= (char)v11) {
        result = function_e8c3f();
    }
    // 0xe8c95
    return result;
}

// Address range: 0xe8cb2 - 0xe8cb7
int64_t function_e8cb2(void) {
    // 0xe8cb2
    return function_21a7e116();
}

// Address range: 0xe8ce9 - 0xe8cea
int64_t function_e8ce9(void) {
    // 0xe8ce9
    int64_t result; // 0xe8ce9
    return result;
}

// Address range: 0xe8d3f - 0xe8d42
int64_t function_e8d3f(int64_t a1) {
    // 0xe8d3f
    int64_t result; // 0xe8d3f
    return result;
}

// Address range: 0xe8d43 - 0xe8d4b
int64_t function_e8d43(int64_t a1, int64_t a2, uint64_t a3) {
    // 0xe8d43
    int64_t v1; // 0xe8d43
    *(char *)a3 = 2 * (char)v1;
    *(char *)(v1 + 83) = (char)(a3 / 256);
    return function_e8ce9();
}

// Address range: 0xe8dbd - 0xe8dbe
int64_t function_e8dbd(void) {
    // 0xe8dbd
    int64_t result; // 0xe8dbd
    return result;
}

// Address range: 0xe8dc4 - 0xe8dce
int64_t function_e8dc4(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe8dc4
    return unknown_78d201cc(a1, a2, a3);
}

// Address range: 0xe8dec - 0xe8e33
int64_t function_e8dec(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0xe8dec
    int64_t v1; // 0xe8dec
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a4 % 32; // 0xe8dec
    if (v3 != 0) {
        *(int32_t *)v2 = (int32_t)v2 >> v3;
    }
    int64_t result = function_e8dbd(); // 0xe8dfa
    uint32_t v4 = (int32_t)result;
    *(int32_t *)-0xdfe1734bd8222f7 = v4;
    if ((*(char *)(v1 + 58 + 2 * v2) & (char)(a3 / 256)) == 0) {
        // 0xe8e32
        return result;
    }
    uint32_t v5 = v4 + (int32_t)a3; // 0xe8e09
    *(int32_t *)result = v5;
    char v6 = result;
    *(char *)-0x6efe1701f627ff97 = v6;
    *(char *)result = v6 + (char)a4 + (char)(v5 < v4);
    return result;
}

// Address range: 0xe8e63 - 0xe8e7a
int64_t function_e8e63(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)-0x384b3a96; // 0xe8e63
    int64_t result; // 0xe8e63
    *(char *)-0x384b3a96 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0xe8e81 - 0xe8e84
int64_t function_e8e81(int64_t a1) {
    // 0xe8e81
    int64_t result; // 0xe8e81
    return result;
}

// Address range: 0xe8ecd - 0xe8ece
int64_t function_e8ecd(void) {
    // 0xe8ecd
    int64_t result; // 0xe8ecd
    return result;
}

// Address range: 0xe8ef2 - 0xe8ef3
int64_t function_e8ef2(void) {
    // 0xe8ef2
    int64_t result; // 0xe8ef2
    return result;
}

// Address range: 0xe8ef5 - 0xe8f03
int64_t function_e8ef5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe8ef5
    int64_t result; // 0xe8ef5
    *(char *)a3 = (char)(result & (uint64_t)result / 256);
    return result;
}

// Address range: 0xe8f26 - 0xe8f40
int64_t function_e8f26(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x6ffec297); // 0xe8f28
    uint32_t v2 = (int32_t)a4; // 0xe8f28
    *v1 = *v1 + v2;
    int64_t v3; // 0xe8f26
    uint32_t v4 = *(int32_t *)(2 * v3 & 0xffffffff) + v2; // 0xe8f2e
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    if (v4 < v2 || v4 == 0) {
        function_e8ecd();
    }
    // 0xe8f33
    return function_e8ef2();
}

// Address range: 0xe8f77 - 0xe8f78
int64_t function_e8f77(void) {
    // 0xe8f77
    int64_t result; // 0xe8f77
    return result;
}

// Address range: 0xe8f8a - 0xe8f8b
int64_t function_e8f8a(int64_t a1) {
    // 0xe8f8a
    int64_t result; // 0xe8f8a
    return result;
}

// Address range: 0xe8f8d - 0xe8f8f
int64_t function_e8f8d(void) {
    // 0xe8f8d
    return function_e8f77();
}

// Address range: 0xe8fb4 - 0xe8fb6
int64_t function_e8fb4(void) {
    // 0xe8fb4
    int64_t result; // 0xe8fb4
    return result;
}

// Address range: 0xe9023 - 0xe9024
int64_t function_e9023(void) {
    // 0xe9023
    int64_t result; // 0xe9023
    return result;
}

// Address range: 0xe9026 - 0xe9039
int64_t function_e9026(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe9026
    int64_t v1; // 0xe9026
    __asm_rcl_133(*(int32_t *)(v1 - 116));
    int64_t result = unknown_6aff712f(); // 0xe9029
    int32_t * v2 = (int32_t *)(a3 - 127); // 0xe9033
    *v2 = *v2 + 71 * *(int32_t *)(v1 - 6 + 8 * result);
    return result;
}

// Address range: 0xe9041 - 0xe9042
int64_t function_e9041(int64_t a1) {
    // 0xe9041
    int64_t result; // 0xe9041
    return result;
}

// Address range: 0xe907d - 0xe907f
int64_t function_e907d(void) {
    // 0xe907d
    return function_e9023();
}

// Address range: 0xe9095 - 0xe9096
int64_t function_e9095(void) {
    // 0xe9095
    int64_t result; // 0xe9095
    return result;
}

// Address range: 0xe9116 - 0xe911d
int64_t function_e9116(void) {
    // 0xe9116
    return function_fffffffff04e47f9();
}

// Address range: 0xe9124 - 0xe9125
int64_t function_e9124(void) {
    // 0xe9124
    int64_t result; // 0xe9124
    return result;
}

// Address range: 0xe9147 - 0xe914c
int64_t function_e9147(int64_t a1) {
    // 0xe9147
    int64_t result; // 0xe9147
    int64_t v1 = result;
    *(int32_t *)v1 = (int32_t)v1 + (int32_t)a1;
    return result;
}

// Address range: 0xe9152 - 0xe9153
int64_t function_e9152(int64_t a1) {
    // 0xe9152
    int64_t result; // 0xe9152
    return result;
}

// Address range: 0xe916c - 0xe918d
int64_t function_e916c(int64_t a1) {
    // 0xe916c
    int64_t v1; // 0xe916c
    if ((char)v1 <= (char)v1) {
        function_e9124();
    }
    // 0xe9170
    *(char *)0x5008447d = *(char *)0x5008447d + (char)(v1 / 256);
    char * v2 = (char *)(v1 - 0x74fb4609); // 0xe917c
    *v2 = *v2 & 6;
    return unknown_e207a89();
}

// Address range: 0x144f13 - 0x144f46
int64_t function_144f13(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 1); // 0x144f14
    *v1 = *v1 - 38;
    int64_t v2; // 0x144f13
    int64_t v3 = v2 + a1; // 0x144f1d
    *(int32_t *)0x28001e891e60023 = (int32_t)v2;
    unknown_ffffffff98c14338((int32_t)v3);
    int32_t * v4 = (int32_t *)(v3 & 0xffffffff); // 0x144f3c
    int32_t v5 = *v4 + (int32_t)a2; // 0x144f3c
    *v4 = v5;
    if (v5 != 0) {
        function_144ee6();
    }
    // 0x144f41
    return unknown_ffffffffe3f8b358();
}

// Address range: 0x144f73 - 0x144f76
int64_t function_144f73(void) {
    // 0x144f73
    int64_t result; // 0x144f73
    return result;
}

// Address range: 0x144fa1 - 0x144fa4
int64_t function_144fa1(int64_t a1) {
    // 0x144fa1
    int64_t result; // 0x144fa1
    return result;
}

// Address range: 0x144fc0 - 0x144fc2
int64_t function_144fc0(int64_t a1) {
    // 0x144fc0
    int64_t result; // 0x144fc0
    return result;
}

// Address range: 0x145050 - 0x145051
int64_t function_145050(void) {
    // 0x145050
    int64_t result; // 0x145050
    return result;
}

// Address range: 0x145067 - 0x145086
int64_t function_145067(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x145067
    int32_t * v3 = (int32_t *)(v2 - 0x40f06300); // 0x14506a
    *v3 = *v3 + 1;
    bool v4; // 0x145067
    *(char *)(unknown_a26677() & 0xffffffff) = *(char *)(v1 + (v4 ? -1 : 1));
    char * v5 = (char *)((v2 & -256 | 12) - 92); // 0x145083
    *v5 = *v5 + (char)(a3 / 256);
    return a1 & 0xffffff00 | (int64_t)*(char *)&v1;
}

// Address range: 0x145089 - 0x1450b9
int64_t function_145089(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x145089
    __asm_int(-42);
    char * v1 = (char *)(a4 - 17); // 0x14508d
    int64_t v2; // 0x145089
    *v1 = *v1 + (char)((uint64_t)v2 / 256);
    uint32_t v3 = (int32_t)v2 ^ -0x435bb266; // 0x145096
    int64_t result = v3; // 0x145096
    if (v3 != 0) {
        // 0x1450fa
        return result;
    }
    char v4 = *(char *)(result - 52); // 0x1450a2
    if ((256 * (int32_t)(v4 & (char)(v3 / 256)) || v3 & -0xff01) == 0x22310001) {
        function_145050();
    }
    int64_t result2 = __asm_wait((int64_t)&g2, (int64_t)&g2, (int64_t)&g2, (int64_t)&g2, (int64_t)&g2); // 0x1450ae
    char * v5 = (char *)(result2 + 65); // 0x1450b1
    *v5 = *v5 + (char)(a4 / 256);
    int64_t v6; // 0x145089
    *(char *)v6 = *(char *)&v6 - (char)result2;
    return result2;
}

// Address range: 0x1450e5 - 0x1450ed
int64_t function_1450e5(void) {
    // 0x1450e5
    return unknown_f0f2deb();
}

// Address range: 0x310ebb - 0x310ee5
int64_t function_310ebb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x310ebb
    int64_t v1; // 0x310ebb
    *(char *)(v1 + 0x3a0013ce) = (char)a3;
    unknown_ffffffff8e0791c7();
    __asm_sti();
    __asm_hlt();
    int64_t v2 = unknown_448430d4(); // 0x310ece
    *(int64_t *)a1 = v2;
    bool v3; // 0x310ebb
    int32_t * v4 = (int32_t *)((v3 ? -8 : 8) + a1); // 0x310ed8
    *v4 = *v4 + ((int32_t)a3 & -256 | 180);
    uint32_t v5 = (int32_t)v2 >> 31; // 0x310edd
    int64_t result = v2 + a4 / 256 & 34 | v2 & -256; // 0x310ee0
    if ((char)v5 != -(char)(v5 / 256)) {
        result = function_310e91();
    }
    // 0x310ee2
    return result;
}

// Address range: 0x310f0e - 0x310f0f
int64_t function_310f0e(void) {
    // 0x310f0e
    int64_t result; // 0x310f0e
    return result;
}

// Address range: 0x310f39 - 0x310f3d
int64_t function_310f39(void) {
    // 0x310f39
    bool v1; // 0x310f39
    if (true == !v1) {
        function_310f0e();
    }
    // 0x310f3b
    return __asm_hlt();
}

// Address range: 0x310f4e - 0x310f53
int64_t function_310f4e(void) {
    // 0x310f4e
    return function_ffffffffb46e1f4c();
}

// Address range: 0x310f59 - 0x310f5a
int64_t function_310f59(int64_t a1) {
    // 0x310f59
    int64_t result; // 0x310f59
    return result;
}

// Address range: 0x310f61 - 0x310f73
int64_t function_310f61(int64_t a1) {
    int64_t v1 = unknown_303576c(); // 0x310f63
    unsigned char v2 = *(char *)v1; // 0x310f68
    int64_t result = (v1 + 232 + (int64_t)(v2 < (char)v1)) % 256 | v1 & -256; // 0x310f6b
    int32_t * v3 = (int32_t *)(result - 38); // 0x310f6d
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x311061 - 0x31107d
int64_t function_311061(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x311061
    int64_t v1; // 0x311061
    char * v2 = (char *)(v1 - 0x24d03929); // 0x311061
    *v2 = *v2 + (char)(a3 / 256);
    int64_t v3 = v1 ^ 215; // 0x31106e
    __asm_out((int16_t)a3, (int32_t)v3);
    return (v3 + 227) % 256 | v1 & -256;
}

// Address range: 0x311083 - 0x311084
int64_t function_311083(int64_t a1) {
    // 0x311083
    int64_t result; // 0x311083
    return result;
}

// Address range: 0x311085 - 0x311088
int64_t function_311085(void) {
    // 0x311085
    int64_t result; // 0x311085
    return result;
}

// Address range: 0x3114bb - 0x3114dd
int64_t function_3114bb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3114bb
    int64_t v1; // 0x3114bb
    uint64_t v2 = v1;
    int64_t result = v1;
    char v3 = *(char *)0x5b26b3c2 + (char)(v2 / 256); // 0x3114bb
    *(char *)0x5b26b3c2 = v3;
    *(int32_t *)a1 = (int32_t)result;
    if (v3 >= 0) {
        // 0x3114dd
        return result;
    }
    char * v4 = (char *)(v2 + 0x3d00cb27); // 0x3114cd
    *v4 = *v4 + (char)result;
    int32_t * v5 = (int32_t *)(v2 - 57); // 0x3114d3
    uint32_t v6 = *v5; // 0x3114d3
    uint32_t v7 = v6 + (int32_t)v2; // 0x3114d3
    *v5 = v7;
    return (result + 70 + (int64_t)(v7 < v6)) % 256 | result & -256;
}

// Address range: 0x3114e0 - 0x3114e1
int64_t function_3114e0(void) {
    // 0x3114e0
    int64_t result; // 0x3114e0
    return result;
}

// Address range: 0x3114f5 - 0x3114f7
int64_t function_3114f5(void) {
    // 0x3114f5
    int64_t result; // 0x3114f5
    return result;
}

// Address range: 0x3114fb - 0x3114fe
int64_t function_3114fb(int64_t a1) {
    // 0x3114fb
    int64_t result; // 0x3114fb
    return result;
}

// Address range: 0x311525 - 0x311528
int64_t function_311525(void) {
    // 0x311525
    int64_t result; // 0x311525
    return result;
}

// Address range: 0x311554 - 0x311556
int64_t function_311554(void) {
    // 0x311554
    return function_3114e0();
}

// Address range: 0x311588 - 0x31158d
int64_t function_311588(void) {
    // 0x311588
    return function_ffffffffe8b51a7d();
}

// Address range: 0x3115c7 - 0x3115d1
int64_t function_3115c7(int64_t a1) {
    // 0x3115c7
    int64_t v1; // 0x3115c7
    return v1 & -256 | (int64_t)*(char *)0x1e800ab46a05c0a;
}

// Address range: 0x31162f - 0x31163d
int64_t function_31162f(int64_t a1) {
    // 0x31162f
    __asm_in(-89);
    unknown_ffffffffebd1423c();
    int64_t v1; // 0x31162f
    return function_31166a(v1, v1, v1, v1);
}

// Address range: 0x311665 - 0x31166a
int64_t function_311665(void) {
    // 0x311665
    return unknown_d40de6e();
}

// Address range: 0x31166a - 0x31166e
int64_t function_31166a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x31166a
    *(char *)a3 = (char)(a4 / 256);
    int64_t v1; // 0x31166a
    bool v2; // 0x31166a
    return 2 * v1 & 0xfffffffe | (int64_t)v2;
}
