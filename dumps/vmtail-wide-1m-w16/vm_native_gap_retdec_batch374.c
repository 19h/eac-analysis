/*
 * Targeted RetDec C for native executable gap queue batch 374.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x225266-0x225466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x225466-0x225666 rank=- name=- kind=- bytes=- uncovered=-
 *   0x270641-0x270841 rank=- name=- kind=- bytes=- uncovered=-
 *   0x270841-0x270a41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x270a41-0x270c41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x270c41-0x270e41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x270e41-0x271041 rank=- name=- kind=- bytes=- uncovered=-
 *   0x31b2bb-0x31b4bb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_14cfa35a();
int64_t function_16eb3dd();
int64_t function_22524c();
int64_t function_225266(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_225299(int64_t a1);
int64_t function_225311(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_225335(void);
int64_t function_225354(void);
int64_t function_22537c(int64_t a1);
int64_t function_22540f(int64_t a1);
int64_t function_225496(void);
int64_t function_2254a0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2254ad(int64_t a1, uint64_t a2);
int64_t function_2254cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_225525(void);
int64_t function_225558(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_22557b(void);
int64_t function_2255bb(void);
int64_t function_2255c8(void);
int64_t function_2255e5(int64_t a1);
int64_t function_225657(int64_t a1);
int64_t function_22565c(void);
int64_t function_270641(void);
int64_t function_270666(void);
int64_t function_270685(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2706ae(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_27070d(void);
int64_t function_270710(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_27077c(void);
int64_t function_27077e(int64_t a1, int64_t a2);
int64_t function_2707c0(void);
int64_t function_27080f(void);
int64_t function_270815(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2708b1(void);
int64_t function_2708b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_270970(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2709eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2709fe(int64_t a1, int64_t a2, int64_t a3);
int64_t function_270a5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_270a82(int64_t a1);
int64_t function_270ad8(void);
int64_t function_270b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_270b70(void);
int64_t function_270bee(void);
int64_t function_270c0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_270c1d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_270c72(int64_t a1);
int64_t function_270c9e(void);
int64_t function_270ce9(void);
int64_t function_270d17(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_270d3d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_270d82(void);
int64_t function_270d87(void);
int64_t function_270da6(int64_t a1);
int64_t function_270dd0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_270e00(int64_t a1);
int64_t function_270ef6(void);
int64_t function_270efe(int64_t a1);
int64_t function_270f42(int64_t a1, int64_t a2);
int64_t function_270f85(void);
int64_t function_270f88(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_270f9a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, char a5);
int64_t function_31b2bb(int64_t a1, int64_t a2);
int64_t function_31b2bf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_31b307(int64_t a1);
int64_t function_31b372(void);
int64_t function_31b3ab(void);
int64_t function_31b404(void);
int64_t function_31b421(void);
int64_t function_31b441(void);
int64_t function_31b460(void);
int64_t function_31b47a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31b4a2(void);
int64_t function_38861775();
int64_t function_3c243f43();
int64_t function_4fcf53d5();
int64_t function_ffffffff896bca3d();
int64_t function_ffffffffc1164a26();
int64_t function_ffffffffeb1e8116();
int64_t unknown_1640c13();
int64_t unknown_2d082bdf();
int64_t unknown_3b225eaa();
int64_t unknown_3d28f54a();
int64_t unknown_ffffffff802d2a78();
int64_t unknown_ffffffffab61c656();
int64_t unknown_ffffffffcd91c2ba();

// Address range: 0x225266 - 0x225280
int64_t function_225266(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x225266
    bool v1; // 0x225266
    if (v1 || false) {
        function_22524c();
    }
    char * v2 = (char *)(a1 + 0x3d480a66 + a2); // 0x225268
    int64_t v3; // 0x225266
    *v2 = *v2 + (char)((uint64_t)v3 / 256);
    int64_t v4 = unknown_ffffffff802d2a78(); // 0x225271
    return v4 & -256 | (int64_t)(*(char *)v4 + (char)v4);
}

// Address range: 0x225299 - 0x22529a
int64_t function_225299(int64_t a1) {
    // 0x225299
    int64_t result; // 0x225299
    return result;
}

// Address range: 0x225311 - 0x225323
int64_t function_225311(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x225311
    int64_t v1; // 0x225311
    int64_t v2 = v1;
    int64_t v3 = 256 * v2 & 0xff00 | v2; // 0x225311
    __asm_out((int16_t)a3, (int32_t)v3);
    int64_t result = v3 & -256 | (int64_t)*(char *)0x3d1b49060042c4ab; // 0x225314
    int32_t * v4 = (int32_t *)result; // 0x22531d
    *v4 = *v4 + (int32_t)result;
    int32_t * v5 = (int32_t *)(a4 + 127); // 0x22531f
    *v5 = *v5 & (int32_t)a4;
    return result;
}

// Address range: 0x225335 - 0x225338
int64_t function_225335(void) {
    // 0x225335
    int64_t result; // 0x225335
    return result;
}

// Address range: 0x225354 - 0x225357
int64_t function_225354(void) {
    // 0x225354
    int64_t result; // 0x225354
    return result;
}

// Address range: 0x22537c - 0x22537f
int64_t function_22537c(int64_t a1) {
    // 0x22537c
    int64_t result; // 0x22537c
    return result;
}

// Address range: 0x22540f - 0x225412
int64_t function_22540f(int64_t a1) {
    // 0x22540f
    int64_t result; // 0x22540f
    return result;
}

// Address range: 0x225496 - 0x22549d
int64_t function_225496(void) {
    // 0x225496
    int64_t result; // 0x225496
    return result;
}

// Address range: 0x2254a0 - 0x2254ad
int64_t function_2254a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2254a0
    int64_t v1; // 0x2254a0
    __asm_outsb((int16_t)a3, (char)v1);
    return function_ffffffffeb1e8116();
}

// Address range: 0x2254ad - 0x2254bc
int64_t function_2254ad(int64_t a1, uint64_t a2) {
    // 0x2254ad
    int64_t v1; // 0x2254ad
    char * v2 = (char *)(8 * v1 + 0x1e89ac5); // 0x2254ad
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0x2254ad
    char v4 = *(char *)&v3; // 0x2254b6
    int64_t v5 = v3;
    *(char *)v5 = v4 + (char)(a2 % 2 != 0) - (char)v5;
    return function_225525();
}

// Address range: 0x2254cb - 0x2254e9
int64_t function_2254cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2254cb
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1; // 0x2254cb
    unsigned char v2 = *(char *)(v1 - 0x17463154); // 0x2254da
    int32_t * v3 = (int32_t *)((v1 & -256 | (int64_t)v2) - 0x7f09cb4b); // 0x2254e0
    *v3 = *v3 + (int32_t)a4;
    return __asm_sti();
}

// Address range: 0x225525 - 0x22552a
int64_t function_225525(void) {
    // 0x225525
    int64_t result; // 0x225525
    return result;
}

// Address range: 0x225558 - 0x225565
int64_t function_225558(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x3a93b080); // 0x22555d
    int64_t v2; // 0x225558
    *v1 = *v1 + (int32_t)v2;
    return function_2255bb();
}

// Address range: 0x22557b - 0x22557e
int64_t function_22557b(void) {
    // 0x22557b
    int64_t result; // 0x22557b
    return result;
}

// Address range: 0x2255bb - 0x2255c7
int64_t function_2255bb(void) {
    // 0x2255bb
    int64_t v1; // 0x2255bb
    return v1 + 0x42cf4342 & 0xffffffff;
}

// Address range: 0x2255c8 - 0x2255d0
int64_t function_2255c8(void) {
    // 0x2255c8
    int64_t v1; // 0x2255c8
    return v1 + 0xef85f094 & 0xffffffff;
}

// Address range: 0x2255e5 - 0x2255ed
int64_t function_2255e5(int64_t a1) {
    // 0x2255e5
    int64_t result; // 0x2255e5
    return result;
}

// Address range: 0x225657 - 0x22565a
int64_t function_225657(int64_t a1) {
    // 0x225657
    int64_t result; // 0x225657
    return result;
}

// Address range: 0x22565c - 0x225661
int64_t function_22565c(void) {
    // 0x22565c
    return function_3c243f43();
}

// Address range: 0x270641 - 0x270642
int64_t function_270641(void) {
    // 0x270641
    int64_t result; // 0x270641
    return result;
}

// Address range: 0x270666 - 0x270667
int64_t function_270666(void) {
    // 0x270666
    int64_t result; // 0x270666
    return result;
}

// Address range: 0x270685 - 0x27068d
int64_t function_270685(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x270685
    return function_270666();
}

// Address range: 0x2706ae - 0x2706dd
int64_t function_2706ae(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2706ae
    int64_t v1; // 0x2706ae
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a3 + 23); // 0x2706ae
    int32_t v4 = a1; // 0x2706ae
    *v3 = *v3 + v4;
    int64_t v5; // 0x2706ae
    *(char *)a2 = *(char *)&v5 - (char)(a4 / 256);
    unknown_ffffffffcd91c2ba();
    unsigned char v6 = (char)a4; // 0x2706b9
    int64_t v7 = a4 & -256 | (int64_t)(v6 / 2 | 128 * v6); // 0x2706b9
    int16_t v8 = a3; // 0x2706bb
    *(int32_t *)a1 = __asm_insd(v8);
    int32_t v9 = __asm_in(v8); // 0x2706bc
    int32_t * v10 = (int32_t *)(v7 - 0x6edad40c); // 0x2706c2
    *v10 = *v10 + (int32_t)v2;
    char * v11 = (char *)(2 * a1 - 0x17c3898f + v2); // 0x2706cc
    *v11 = *v11 + (char)(v9 + (int32_t)(v2 / 256));
    int32_t * v12 = (int32_t *)(v2 + 0x2d00d3cb); // 0x2706d3
    *v12 = *v12 + v4;
    return v7 & 0xffffffff;
}

// Address range: 0x27070d - 0x27070e
int64_t function_27070d(void) {
    // 0x27070d
    int64_t result; // 0x27070d
    return result;
}

// Address range: 0x270710 - 0x270774
int64_t function_270710(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a3;
    unsigned char v2 = (char)(a3 / 256);
    unsigned char v3 = v2 % 16;
    int64_t v4; // 0x270710
    int64_t v5 = v4 & -256 | 92; // 0x270716
    *(char *)a1 = __asm_insb(v1);
    char * v6 = (char *)(v5 + 61); // 0x27071f
    *v6 = *v6 + 1;
    unsigned char v7 = (char)(v4 / 256); // 0x270723
    unsigned char v8 = v7 + v2; // 0x270723
    int64_t v9; // 0x270710
    uint32_t v10 = (int32_t)(256 * (64 * (int64_t)(v8 == 0) | (int64_t)(v8 < v7) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v7 % 16 + v3 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v8) % 2 == 0)) | v9 & 0xffff00ff) | 512; // 0x270727
    uint32_t v11 = v10 + 0x336b9eeb; // 0x270727
    v4 = 256 * (int64_t)v8 | v5 & -0xffa4;
    v9 = v11;
    while (v10 <= 0xcc946114 && v11 != 0) {
        // 0x270716
        v5 = v4 & -256 | 92;
        *(char *)a1 = __asm_insb(v1);
        v6 = (char *)(v5 + 61);
        *v6 = *v6 + 1;
        v7 = (char)(v4 / 256);
        v8 = v7 + v2;
        v10 = (int32_t)(256 * (64 * (int64_t)(v8 == 0) | (int64_t)(v8 < v7) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v7 % 16 + v3 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v8) % 2 == 0)) | v9 & 0xffff00ff) | 512;
        v11 = v10 + 0x336b9eeb;
        v4 = 256 * (int64_t)v8 | v5 & -0xffa4;
        v9 = v11;
    }
    // 0x27072e
    __asm_in(v1);
    __asm_wait();
    unknown_ffffffffab61c656();
    int64_t v12; // 0x270710
    *(int64_t *)v12 = a5;
    float80_t v13; // 0x270710
    *(float64_t *)((a4 & -0xff01 | (int64_t)&g3) - 0x7523f9f7) = (float64_t)v13;
    int32_t * v14 = (int32_t *)((int64_t)*(int32_t *)-0x753720dc72fffec3 - 44); // 0x270763
    *v14 = *v14 + (int32_t)a1;
    return function_38861775();
}

// Address range: 0x27077c - 0x27077e
int64_t function_27077c(void) {
    // 0x27077c
    return function_27070d();
}

// Address range: 0x27077e - 0x2707ba
int64_t function_27077e(int64_t a1, int64_t a2) {
    // 0x27077e
    int64_t v1; // 0x27077e
    int32_t * v2 = (int32_t *)(v1 - 0x2df61800); // 0x270788
    *v2 = *v2 | (int32_t)v1;
    int64_t v3; // 0x27077e
    int64_t v4 = v3;
    *(int32_t *)v4 = *(int32_t *)&v3 + (int32_t)v4;
    __asm_int1(-0xd2a0000);
    unknown_3b225eaa();
    return __asm_sti();
}

// Address range: 0x2707c0 - 0x2707c3
int64_t function_2707c0(void) {
    // 0x2707c0
    int64_t result; // 0x2707c0
    return result;
}

// Address range: 0x27080f - 0x270811
int64_t function_27080f(void) {
    // 0x27080f
    int64_t result; // 0x27080f
    return result;
}

// Address range: 0x270815 - 0x270817
int64_t function_270815(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x270815
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x270815
    return result;
}

// Address range: 0x2708b1 - 0x2708b2
int64_t function_2708b1(void) {
    // 0x2708b1
    int64_t result; // 0x2708b1
    return result;
}

// Address range: 0x2708b2 - 0x27096f
int64_t function_2708b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3 = __asm_wait(); // 0x2708b2
    int64_t v4 = v3; // 0x2708b4
    bool v5; // 0x2708b2
    if (true == !v5) {
        v4 = function_2708b1();
    }
    unsigned char v6 = (char)a4;
    uint64_t v7 = v4;
    *(char *)a4 = v6;
    unsigned char v8 = *(char *)(v2 - 128); // 0x2708ba
    int64_t v9; // 0x2708b2
    if (v8 > (char)(v7 / 256)) {
        uint32_t v10 = (int32_t)v3 >> 31; // 0x2708b3
        int32_t v11 = *(int32_t *)0xccf5c7; // 0x2708bf
        *(int32_t *)0xccf5c7 = (int32_t)(v8 > (char)(v7 / 256)) + (int32_t)v9 + v11;
        *(char *)v7 = 2 * (char)v7;
        int64_t v12 = __asm_hlt(); // 0x2708c8
        *(int32_t *)(int64_t)v10 = -0x6fc17979;
        int32_t * v13 = (int32_t *)(v9 + 0xab001f8 + 2 * v1); // 0x2708d8
        *v13 = *v13 + v10;
        __asm_out((int16_t)v10, ((int32_t)v12 | 0x13d0000) + (int32_t)v9);
        return function_ffffffff896bca3d();
    }
    unsigned char v14 = v6 % 32; // 0x27090e
    int32_t v15 = v2; // 0x27090e
    if (v14 != 0) {
        *(char *)v1 = *(char *)&v1 << v14;
        v15 = *(int32_t *)&v2;
    }
    // 0x270925
    *(int32_t *)v2 = v15 + (int32_t)v9;
    uint64_t v16 = __asm_iretd(); // 0x270920
    if (a4 == 1) {
        // 0x27096d
        return v16 & -256 | (int64_t)*(char *)(v16 % 256 + v9);
    }
    // 0x270927
    return (int64_t)(*(int32_t *)(v9 + 0x542b6ceb) | (int32_t)v16);
}

// Address range: 0x270970 - 0x270981
int64_t function_270970(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x270970
    int64_t result; // 0x270970
    *(char *)a4 = 2 * (char)result;
    return result;
}

// Address range: 0x2709eb - 0x2709fd
int64_t function_2709eb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2709eb
    int64_t v1; // 0x2709eb
    int32_t v2 = v1;
    *(int32_t *)a2 = 2 * v2 | (int32_t)(v2 < 0);
    char * v3 = (char *)((a3 - a2 & 0xffffffff) - 81); // 0x2709f8
    *v3 = *v3 + (char)v1;
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x2709fe - 0x270a02
int64_t function_2709fe(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2709fe
    int64_t result; // 0x2709fe
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x270a5c - 0x270a5f
int64_t function_270a5c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x270a5c
    int64_t result; // 0x270a5c
    return result;
}

// Address range: 0x270a82 - 0x270a83
int64_t function_270a82(int64_t a1) {
    // 0x270a82
    int64_t result; // 0x270a82
    return result;
}

// Address range: 0x270ad8 - 0x270ada
int64_t function_270ad8(void) {
    // 0x270ad8
    int64_t v1; // 0x270ad8
    return v1 & 0xffffffff;
}

// Address range: 0x270b60 - 0x270b63
int64_t function_270b60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x270b60
    int64_t result; // 0x270b60
    return result;
}

// Address range: 0x270b70 - 0x270b71
int64_t function_270b70(void) {
    // 0x270b70
    int64_t result; // 0x270b70
    return result;
}

// Address range: 0x270bee - 0x270bf0
int64_t function_270bee(void) {
    // 0x270bee
    int64_t v1; // 0x270bee
    return function_270c1d(v1, v1, v1);
}

// Address range: 0x270c0d - 0x270c1d
int64_t function_270c0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    unknown_1640c13();
    bool v2; // 0x270c0d
    if (!v2 && !v2) {
        function_270c72(a1);
    }
    // 0x270c14
    int64_t v3; // 0x270c0d
    *(int32_t *)(a4 + 0x20414882) = (int32_t)v3;
    return (int64_t)*(int32_t *)&v1;
}

// Address range: 0x270c1d - 0x270c1f
int64_t function_270c1d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x270c1d
    int64_t result; // 0x270c1d
    return result;
}

// Address range: 0x270c72 - 0x270c84
int64_t function_270c72(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 0x5083eb28); // 0x270c79
    int64_t result; // 0x270c72
    *v1 = *v1 ^ (int32_t)result;
    return result;
}

// Address range: 0x270c9e - 0x270cae
int64_t function_270c9e(void) {
    // 0x270c9e
    int64_t v1; // 0x270c9e
    *(int64_t *)((v1 + 0x3f00013d & 0xffffffff) - 8) = 0x6d825500;
    int64_t v2; // 0x270c9e
    return (int64_t)&v2;
}

// Address range: 0x270ce9 - 0x270cef
int64_t function_270ce9(void) {
    // 0x270ce9
    int64_t result; // 0x270ce9
    return result;
}

// Address range: 0x270d17 - 0x270d35
int64_t function_270d17(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x270d17
    int64_t v1; // 0x270d17
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v2 - 0x2c68f229); // 0x270d17
    *v3 = *v3 + (int32_t)a1;
    int32_t * v4 = (int32_t *)(a3 + 0x5eaf4602); // 0x270d1f
    int64_t v5; // 0x270d17
    int32_t v6 = *(int32_t *)&v5 > -1 - (int32_t)a4 ? -0x62308597 : -0x62308598; // 0x270d1f
    *v4 = *v4 - v6;
    *(char *)-0x63e313d0 = *(char *)-0x63e313d0 + (char)(v2 / 256);
    return function_ffffffffc1164a26();
}

// Address range: 0x270d3d - 0x270d56
int64_t function_270d3d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x270d3d
    int64_t v1; // 0x270d3d
    char v2 = *(char *)(v1 + 0x5bd1a2e4 + 4 * v1); // 0x270d3d
    int32_t * v3 = (int32_t *)unknown_3d28f54a(); // 0x270d49
    *v3 = *v3 + (int32_t)v1;
    uint16_t result = *(int16_t *)(256 * (int64_t)((char)(a3 / 256) - v2) | a3 & -0xff01); // 0x270d50
    return result;
}

// Address range: 0x270d82 - 0x270d83
int64_t function_270d82(void) {
    // 0x270d82
    int64_t result; // 0x270d82
    return result;
}

// Address range: 0x270d87 - 0x270d8a
int64_t function_270d87(void) {
    // 0x270d87
    int64_t result; // 0x270d87
    return result;
}

// Address range: 0x270da6 - 0x270da7
int64_t function_270da6(int64_t a1) {
    // 0x270da6
    int64_t result; // 0x270da6
    return result;
}

// Address range: 0x270dd0 - 0x270e00
int64_t function_270dd0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x270dd0
    unknown_2d082bdf();
    int64_t v1 = (int64_t)*(int32_t *)0x6c01e8e8315c03d8; // 0x270de7
    bool v2; // 0x270dd0
    if (v2) {
        v1 = function_270d82();
    }
    char * v3 = (char *)v1; // 0x270de9
    *v3 = *v3 + (char)a4;
    uint64_t v4 = v1 + 0xe87045f6; // 0x270deb
    uint32_t v5 = (int32_t)a1; // 0x270df0
    uint32_t v6 = (int32_t)a3 + v5; // 0x270df0
    char * v7 = (char *)(int64_t)v6; // 0x270df2
    *v7 = (char)(v6 < v5) - (char)(v4 / 256) + *v7;
    char * v8 = (char *)((v4 & 0xffffffff) + 0x2b67400); // 0x270df4
    *v8 = *v8 + (char)v4;
    int32_t * v9 = (int32_t *)(a3 + 1); // 0x270dfc
    int64_t v10; // 0x270dd0
    *v9 = *v9 + (int32_t)v10;
    return (v4 + a4 / 256) % 256 | v4 & 0xffffff00;
}

// Address range: 0x270e00 - 0x270e14
int64_t function_270e00(int64_t a1) {
    // 0x270e00
    int64_t v1; // 0x270e00
    int32_t v2 = 0x10000 * (int32_t)v1 >> 16 ^ -0x13f5778a; // 0x270e03
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a1;
    return v2 & 0x171a2500 | v2 + 2 & 9 | -0x171a250a;
}

// Address range: 0x270ef6 - 0x270ef7
int64_t function_270ef6(void) {
    // 0x270ef6
    int64_t result; // 0x270ef6
    return result;
}

// Address range: 0x270efe - 0x270eff
int64_t function_270efe(int64_t a1) {
    // 0x270efe
    int64_t result; // 0x270efe
    return result;
}

// Address range: 0x270f42 - 0x270f51
int64_t function_270f42(int64_t a1, int64_t a2) {
    // 0x270f42
    int64_t v1; // 0x270f42
    bool v2; // 0x270f42
    unsigned char v3 = (char)v1 - (v2 ? -32 : -33); // 0x270f42
    int64_t result = v1 & -256 | (int64_t)v3; // 0x270f44
    if (v3 != 0) {
        result = function_270ef6();
    }
    // 0x270f47
    *(int32_t *)0x9a2a01fe = *(int32_t *)0x9a2a01fe & (int32_t)a1;
    return result;
}

// Address range: 0x270f85 - 0x270f88
int64_t function_270f85(void) {
    // 0x270f85
    int64_t result; // 0x270f85
    return result;
}

// Address range: 0x270f88 - 0x270f93
int64_t function_270f88(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x270f88
    int64_t v1; // 0x270f88
    *(char *)a3 = 2 * (char)v1;
    return a1 & 0xffffffff;
}

// Address range: 0x270f9a - 0x270fae
int64_t function_270f9a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, char a5) {
    // 0x270f9a
    int64_t v1; // 0x270f9a
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a3 - 0x44b74d84); // 0x270fa6
    *v3 = *v3 + (int32_t)a3;
    return (v2 + a4 / 256) % 256 | v2 & -256;
}

// Address range: 0x31b2bb - 0x31b2bd
int64_t function_31b2bb(int64_t a1, int64_t a2) {
    // 0x31b2bb
    int64_t result; // 0x31b2bb
    return result;
}

// Address range: 0x31b2bf - 0x31b2f8
int64_t function_31b2bf(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x31b2bf
    int64_t result; // 0x31b2bf
    char v1 = result;
    bool v2; // 0x31b2bf
    *(char *)result = v1 + (char)a4 + (char)v2;
    *(char *)0x5e8000223d177ab6 = v1;
    if ((int32_t)result >= -0x4e97e2ff) {
        // 0x31b2da
        return result;
    }
    char * v3 = (char *)(a4 - 0x853cefd + 4 * result); // 0x31b2f1
    *v3 = *v3 + (char)(a3 / 256);
    return result;
}

// Address range: 0x31b307 - 0x31b30a
int64_t function_31b307(int64_t a1) {
    // 0x31b307
    int64_t result; // 0x31b307
    return result;
}

// Address range: 0x31b372 - 0x31b375
int64_t function_31b372(void) {
    // 0x31b372
    int64_t result; // 0x31b372
    return result;
}

// Address range: 0x31b3ab - 0x31b3b0
int64_t function_31b3ab(void) {
    // 0x31b3ab
    return function_16eb3dd();
}

// Address range: 0x31b404 - 0x31b405
int64_t function_31b404(void) {
    // 0x31b404
    int64_t result; // 0x31b404
    return result;
}

// Address range: 0x31b421 - 0x31b42c
int64_t function_31b421(void) {
    // 0x31b421
    return function_14cfa35a();
}

// Address range: 0x31b441 - 0x31b445
int64_t function_31b441(void) {
    // 0x31b441
    return function_4fcf53d5();
}

// Address range: 0x31b460 - 0x31b466
int64_t function_31b460(void) {
    // 0x31b460
    return function_31b404();
}

// Address range: 0x31b47a - 0x31b490
int64_t function_31b47a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31b47a
    int64_t v1; // 0x31b47a
    *(int32_t *)(v1 - 45 + 4 * v1) = (int32_t)v1;
    int32_t * v2 = (int32_t *)(v1 + 0x4902efb8); // 0x31b480
    *v2 = *v2 + (int32_t)v1;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return v1 & 0xa9013d00;
}

// Address range: 0x31b4a2 - 0x31b4a7
int64_t function_31b4a2(void) {
    // 0x31b4a2
    return function_4fcf53d5();
}
