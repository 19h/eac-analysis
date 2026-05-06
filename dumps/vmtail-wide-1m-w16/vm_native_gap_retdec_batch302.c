/*
 * Targeted RetDec C for native executable gap queue batch 302.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x25a2c2-0x25a4c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25a4c2-0x25a6c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a9775-0x2a9975 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a9b75-0x2a9d75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a9d75-0x2a9f75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a9f75-0x2aa175 rank=- name=- kind=- bytes=- uncovered=-
 *   0x437267-0x437467 rank=- name=- kind=- bytes=- uncovered=-
 *   0x437667-0x437867 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_14b2a54b();
int64_t function_25a2ab();
int64_t function_25a2c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25a427(void);
int64_t function_25a481(void);
int64_t function_25a48a(int64_t a1);
int64_t function_25a4e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25a532(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_25a58e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25a61e(int64_t a1);
int64_t function_25a629(void);
int64_t function_25a677(int64_t a1);
int64_t function_2a9732();
int64_t function_2a9775(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a97ea(void);
int64_t function_2a97eb(void);
int64_t function_2a9810(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a9839(int64_t a1);
int64_t function_2a9843(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2a988c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a98d7(int64_t a1, int64_t a2);
int64_t function_2a9917(void);
int64_t function_2a9919(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2a9b60();
int64_t function_2a9b75(void);
int64_t function_2a9b79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a9c16(void);
int64_t function_2a9c21(void);
int64_t function_2a9c28(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2a9d4d(void);
int64_t function_2a9d99(void);
int64_t function_2a9dae(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2a9dc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a9e6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a9ede(void);
int64_t function_2a9ee2(int64_t a1);
int64_t function_2a9ef0(void);
int64_t function_2a9ef2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a9f2c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a9f34(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a9f4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a9f74(void);
int64_t function_2a9fa0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2a9fdd(void);
int64_t function_2a9feb(void);
int64_t function_2aa00e(void);
int64_t function_2aa020(void);
int64_t function_2aa02a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2aa0ea(int64_t a1);
int64_t function_2aa0ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_34b49ca4();
int64_t function_437255();
int64_t function_437267(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_437281(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4372e0(int64_t a1, int64_t a2);
int64_t function_437356(int64_t a1, int64_t a2);
int64_t function_437357(void);
int64_t function_43736e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4373b6(int64_t a1);
int64_t function_4373d5(void);
int64_t function_43740c(void);
int64_t function_43742c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_437456(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_437491();
int64_t function_437657();
int64_t function_437667(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4376f8(void);
int64_t function_437725(void);
int64_t function_437734(void);
int64_t function_437795(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ffffffff9b278b3b();
int64_t function_ffffffffbacdc2ef();
int64_t function_ffffffffd854dfec();
int64_t function_ffffffffe64433c4();
int64_t unknown_15262650();
int64_t unknown_1ce897ad();
int64_t unknown_3292ef17();
int64_t unknown_33398962();
int64_t unknown_37509c27();
int64_t unknown_6e9d6d68();
int64_t unknown_7b7d49f9();
int64_t unknown_7c04f043();
int64_t unknown_ffffffff9ad810f9();
int64_t unknown_ffffffff9fa8f03f();
int64_t unknown_ffffffffa595ef94();
int64_t unknown_ffffffffa7c7302f();
int64_t unknown_ffffffffb467d83c();
int64_t unknown_ffffffffbe6ec899();
int64_t unknown_ffffffffbf3a3090();
int64_t unknown_ffffffffc6cce1d5();
int64_t unknown_ffffffffc7b2fd7b();
int64_t unknown_ffffffffd221d085();
int64_t unknown_ffffffffd3dea6ff();
int64_t unknown_ffffffffd877d9a4();
int64_t unknown_ffffffffd9357726();
int64_t unknown_ffffffffdcf4e2de();
int64_t unknown_ffffffffe8775269();
int64_t unknown_ffffffffe8e08b45();
int64_t unknown_ffffffffe91aebcd();
int64_t unknown_fffffffff3ffee32();
int64_t unknown_fffffffff429161c();

// Address range: 0x25a2c2 - 0x25a366
int64_t function_25a2c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a3; // 0x25a2c2
    int64_t v3; // 0x25a2c2
    bool v4; // 0x25a2c2
    if (v4) {
        int64_t v5 = __asm_sti() >> 63; // 0x25a2c5
        int64_t v6 = unknown_ffffffffe91aebcd(); // 0x25a2c7
        int32_t v7 = a1; // 0x25a2cc
        *(int32_t *)-0x1770492d = *(int32_t *)-0x1770492d + v7;
        int32_t * v8 = (int32_t *)v5; // 0x25a2d2
        uint32_t v9 = *v8; // 0x25a2d2
        int32_t v10 = v5; // 0x25a2d2
        uint32_t v11 = v9 + v10; // 0x25a2d2
        *v8 = v11;
        char * v12 = (char *)v6; // 0x25a2d4
        unsigned char v13 = *v12; // 0x25a2d4
        unsigned char v14 = (char)a4 % 32; // 0x25a2d4
        bool v15 = v11 < v9; // 0x25a2d4
        if (v14 != 0) {
            unsigned char v16 = v14 - 1; // 0x25a2d4
            *v12 = (char)(v11 < v9) << v16 | v13 << v14 | (char)((int16_t)v13 >> (int16_t)(9 - v14));
            v15 = (v13 & 128 >> v16) != 0;
        }
        int64_t v17 = 2 * v6 & 0xfffffffe | (int64_t)v15; // 0x25a2dd
        if (v11 != 0) {
            v17 = function_25a2ab();
        }
        // 0x25a2df
        int64_t v18; // 0x25a2c2
        int32_t v19 = v18; // 0x25a2df
        uint32_t v20 = v10 + v19; // 0x25a2df
        int3_t v21; // 0x25a2c2
        if (((v20 ^ v10) & (v20 ^ v19)) < 0) {
            char v22 = __asm_in(-40); // 0x25a34a
            int3_t v23 = v21 - 3; // 0x25a34c
            float80_t v24 = __frontend_reg_load_fpr(v21); // 0x25a34c
            __frontend_reg_store_fpr(v21, __frontend_reg_load_fpr(v23));
            __frontend_reg_store_fpr(v23, v24);
            int32_t * v25 = (int32_t *)(a1 - 61); // 0x25a353
            *v25 = *v25 + v7;
            return (int64_t)v22 | 0x965de00;
        }
        // 0x25a2e3
        *(char *)a1 = *(char *)&v1;
        v1 += (v4 ? -1 : 1);
        __frontend_reg_load_fpr(v21);
        v3 = v17;
        v2 = v20;
    }
    char * v26 = (char *)(v2 + 18); // 0x25a2ed
    *v26 = *v26 + (char)(v3 / 256);
    char * v27 = (char *)v3; // 0x25a2f0
    *v27 = *v27 + (char)v3;
    __asm_sti();
    return function_ffffffff9b278b3b();
}

// Address range: 0x25a427 - 0x25a428
int64_t function_25a427(void) {
    // 0x25a427
    int64_t result; // 0x25a427
    return result;
}

// Address range: 0x25a481 - 0x25a486
int64_t function_25a481(void) {
    // 0x25a481
    return function_ffffffffbacdc2ef();
}

// Address range: 0x25a48a - 0x25a48b
int64_t function_25a48a(int64_t a1) {
    // 0x25a48a
    int64_t result; // 0x25a48a
    return result;
}

// Address range: 0x25a4e7 - 0x25a4ef
int64_t function_25a4e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25a4e7
    int64_t v1; // 0x25a4e7
    *(int32_t *)a2 = 2 * (int32_t)v1;
    int64_t v2; // 0x25a4e7
    return (int64_t)*(int32_t *)&v2;
}

// Address range: 0x25a532 - 0x25a540
int64_t function_25a532(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x25a532
    int64_t result; // 0x25a532
    return result;
}

// Address range: 0x25a58e - 0x25a60e
int64_t function_25a58e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    *(char *)a2 = -1;
    int64_t v2 = a4 - 1; // 0x25a591
    if (v2 == 0) {
        // 0x25a593
        return function_14b2a54b();
    }
    int32_t v3 = a1; // 0x25a5d1
    *(int32_t *)-0x6fd7df2 = *(int32_t *)-0x6fd7df2 + v3;
    float80_t v4; // 0x25a58e
    *(int64_t *)v1 = (int64_t)v4;
    *(int32_t *)-0x3905d019 = *(int32_t *)-0x3905d019 + v3;
    int32_t v5 = *(int32_t *)&v1 + v3; // 0x25a5e6
    int64_t v6; // 0x25a58e
    int32_t * v7 = (int32_t *)((v6 + 0xe8f03aae & 0xffffffff) + 0x1e8c800); // 0x25a5e8
    *v7 = *v7 & 0x426bf4a1;
    __asm_hlt(v5);
    int64_t v8 = unknown_ffffffffd3dea6ff(v5 & -0x170fc552); // 0x25a5f9
    char * v9 = (char *)v2; // 0x25a5fe
    *v9 = *v9 + (char)v6;
    char * v10 = (char *)(v8 + 0x6c976dd71); // 0x25a600
    *v10 = *v10 | 77;
    return __asm_in_134((int16_t)v1);
}

// Address range: 0x25a61e - 0x25a61f
int64_t function_25a61e(int64_t a1) {
    // 0x25a61e
    int64_t result; // 0x25a61e
    return result;
}

// Address range: 0x25a629 - 0x25a631
int64_t function_25a629(void) {
    // 0x25a629
    int64_t v1; // 0x25a629
    return v1 & 0xffffffff;
}

// Address range: 0x25a677 - 0x25a67c
int64_t function_25a677(int64_t a1) {
    // 0x25a677
    int64_t result; // 0x25a677
    return result;
}

// Address range: 0x2a9775 - 0x2a97df
int64_t function_2a9775(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffc7b2fd7b(); // 0x2a9775
    char v2 = (char)v1 ^ -6; // 0x2a977a
    int64_t v3 = v2; // 0x2a977a
    int64_t v4 = v1 & -256 | v3; // 0x2a977a
    *(int32_t *)a1 = (int32_t)v4;
    int64_t v5; // 0x2a9775
    if (a4 != 1) {
        int64_t v6 = 0x8000 * (int64_t)(v2 < 0) | 0x4000 * (int64_t)(v2 == 0) | v4 & -0xff01 | 1024 * (int64_t)(llvm_ctpop_i8(v2) % 2 == 0) | 512; // 0x2a97cf
        int64_t result = v6 & -0x3a00 | v3 | 232; // 0x2a97d3
        int32_t * v7 = (int32_t *)(result + 8); // 0x2a97d5
        *v7 = *v7 + (int32_t)v5;
        char v8 = *(char *)-0x1b8a2120; // 0x2a97d9
        *(char *)-0x1b8a2120 = v8 + (char)(*(int32_t *)(v6 - 77) / 256);
        return result;
    }
    // 0x2a9780
    bool v9; // 0x2a9775
    int64_t v10 = __asm_int1((v9 ? -4 : 4) + a1); // 0x2a9780
    int32_t * v11 = (int32_t *)v10; // 0x2a9787
    uint32_t v12 = *v11; // 0x2a9787
    uint32_t v13 = v12 + (int32_t)v10; // 0x2a9787
    *v11 = v13;
    unsigned char v14 = (char)v10; // 0x2a9789
    char v15 = v14 - 25 + (char)(v13 < v12); // 0x2a9789
    if (v15 < 0) {
        function_2a9732();
    }
    bool v16 = v13 < v12 ? v15 <= v14 : v14 > 24; // 0x2a9789
    __asm_wait();
    char v17 = *(char *)-0x7cd06995; // 0x2a978f
    *(char *)-0x7cd06995 = (char)v16 + (char)v5 + v17;
    *(char *)-0x34215b5d = *(char *)-0x34215b5d + (char)(v5 / 256);
    return a2 & 0xffffffff;
}

// Address range: 0x2a97ea - 0x2a97eb
int64_t function_2a97ea(void) {
    // 0x2a97ea
    int64_t result; // 0x2a97ea
    return result;
}

// Address range: 0x2a97eb - 0x2a97ec
int64_t function_2a97eb(void) {
    // 0x2a97eb
    int64_t result; // 0x2a97eb
    return result;
}

// Address range: 0x2a9810 - 0x2a9837
int64_t function_2a9810(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a9810
    bool v1; // 0x2a9810
    if (v1 || false) {
        function_2a97eb();
    }
    if (a4 != 1 && !v1) {
        function_2a97ea();
    }
    // 0x2a9814
    unknown_fffffffff429161c();
    int32_t v2 = __asm_hlt((int32_t)a1); // 0x2a981c
    *(int32_t *)-0x2008fec2ff05abba = v2;
    *(int32_t *)a1 = (int32_t)a2;
    uint64_t v3 = 0x100000000 * (int64_t)(v2 >> 31) | (int64_t)(0x10000 * v2 >> 16); // 0x2a982d
    uint64_t v4 = (int64_t)*(int32_t *)(a4 + 0x1329a28f); // 0x2a982d
    int32_t * v5 = (int32_t *)(v3 % v4); // 0x2a9833
    int64_t v6; // 0x2a9810
    *v5 = *v5 + (int32_t)v6;
    return v3 / v4 & 0xffffffff;
}

// Address range: 0x2a9839 - 0x2a983a
int64_t function_2a9839(int64_t a1) {
    // 0x2a9839
    int64_t result; // 0x2a9839
    return result;
}

// Address range: 0x2a9843 - 0x2a988c
int64_t function_2a9843(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2a9843
    int64_t v1; // 0x2a9843
    uint64_t v2 = (0x100000000 * v1 >> 32 & -256 | 26) * (int64_t)*(int32_t *)(a2 + 100); // 0x2a984c
    char * v3 = (char *)(v2 & 0xfffffffe); // 0x2a984f
    *v3 = *v3 + (char)v2;
    int64_t v4; // 0x2a9843
    *(int32_t *)a1 = *(int32_t *)&v4;
    bool v5; // 0x2a9843
    int64_t v6 = v5 ? -4 : 4; // 0x2a9856
    int64_t v7 = v6 + a1; // 0x2a9856
    int64_t v8 = v6 + a2; // 0x2a9856
    int64_t v9 = unknown_ffffffffe8e08b45(v7, v8, v2 / 0x100000000); // 0x2a9857
    int32_t * v10 = (int32_t *)v8; // 0x2a985c
    *v10 = *v10 + (int32_t)v1;
    char * v11 = (char *)(v1 + 0x530c0b7d); // 0x2a985e
    *v11 = *v11 & -32;
    unsigned char v12 = *(char *)-0x3839d08d; // 0x2a986c
    unsigned char v13 = v12 + (char)(v1 / 256); // 0x2a986c
    *(char *)-0x3839d08d = v13;
    char * v14 = (char *)(v8 - 43); // 0x2a9872
    *v14 = *v14 - (v13 < v12 ? -125 : -126);
    *(int32_t *)v7 = *v10;
    int64_t v15 = v8 + v6; // 0x2a9876
    v4 = v15;
    char v16 = *(char *)v9; // 0x2a9877
    unknown_ffffffffd221d085(v7 + v6, v15);
    int64_t result = __asm_int3(); // 0x2a9880
    char * v17 = (char *)(v6 + 107 + v15); // 0x2a9882
    char v18 = *v17; // 0x2a9882
    *v17 = v18 + (char)(((a4 & 0xff00 | (int64_t)(v16 ^ (char)a4)) + 0xffff) / 256);
    return result;
}

// Address range: 0x2a988c - 0x2a98d4
int64_t function_2a988c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x2a988c
    *(int16_t *)(v2 - 83) = (int16_t)v2;
    *(char *)-0x5ef28d5f = *(char *)-0x5ef28d5f + (char)(v2 / 256);
    bool v3; // 0x2a988c
    int64_t v4 = v3 ? -4 : 4; // 0x2a98a7
    int64_t v5 = a2; // 0x2a98a0
    int64_t v6 = a1; // 0x2a98a0
    *(int32_t *)v6 = *(int32_t *)a2;
    v6 += v4;
    v5 += v4;
    int64_t v7 = (v2 + 0xd843b6e7 + (int64_t)v3 & 0xffffffff) + 0x2a6a7a96 + (int64_t)false; // 0x2a98a8
    int64_t result = (v7 + 61) % 256 | v7 & 0xffffff00; // 0x2a98b7
    int32_t * v8 = (int32_t *)v5;
    uint32_t v9 = *v8; // 0x2a98ba
    int32_t v10 = (char)v7 < 195; // 0x2a98ba
    uint32_t v11 = (int32_t)v1 + v10; // 0x2a98ba
    int32_t v12 = v9 - v11; // 0x2a98ba
    bool v13 = (char)v7 < 195 ? v11 != -1 | v9 < v12 - v10 : v9 < v11; // 0x2a98ba
    *v8 = v12;
    while (v9 > v11) {
        // 0x2a98a7
        *(int32_t *)v6 = v12;
        v6 += v4;
        v5 += v4;
        v7 = result + 0x2a6a7a96 + (int64_t)v13;
        result = (v7 + 61) % 256 | v7 & 0xffffff00;
        v8 = (int32_t *)v5;
        v9 = *v8;
        v10 = (char)v7 < 195;
        v11 = (int32_t)v1 + v10;
        v12 = v9 - v11;
        v13 = (char)v7 < 195 ? v11 != -1 | v9 < v12 - v10 : v9 < v11;
        *v8 = v12;
    }
    // 0x2a98bf
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v6;
    *(int32_t *)v6 = *v8;
    *(char *)(v2 - 0x171a9d00) = (char)(v1 / 256);
    int32_t v14 = *(int32_t *)-0x6d37f2f; // 0x2a98ca
    *(int32_t *)-0x6d37f2f = v14 + (int32_t)(v6 + (v3 ? 0xfffffffc : 4));
    return result;
}

// Address range: 0x2a98d7 - 0x2a98ee
int64_t function_2a98d7(int64_t a1, int64_t a2) {
    // 0x2a98d7
    unknown_ffffffffdcf4e2de();
    int64_t v1; // 0x2a98d7
    int32_t * v2 = (int32_t *)(v1 + 50); // 0x2a98df
    *v2 = *v2 + (int32_t)a2;
    int64_t v3; // 0x2a98d7
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)a1;
    return function_2a9919(a1, a2, v1, v1, 104);
}

// Address range: 0x2a9917 - 0x2a9919
int64_t function_2a9917(void) {
    // 0x2a9917
    int64_t result; // 0x2a9917
    return result;
}

// Address range: 0x2a9919 - 0x2a9920
int64_t function_2a9919(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2a9919
    int64_t result; // 0x2a9919
    char * v1 = (char *)(result - 24); // 0x2a991a
    *v1 = *v1 - (char)(a4 / 256);
    int32_t * v2 = (int32_t *)(a5 + 9); // 0x2a991d
    int64_t v3; // 0x2a9919
    *v2 = *v2 + (int32_t)(int64_t)&v3;
    return result;
}

// Address range: 0x2a9b75 - 0x2a9b78
int64_t function_2a9b75(void) {
    // 0x2a9b75
    int64_t v1; // 0x2a9b75
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x2a9b79 - 0x2a9c0f
int64_t function_2a9b79(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a9b79
    bool v1; // 0x2a9b79
    if (v1) {
        function_2a9b60();
    }
    // 0x2a9b7b
    __asm_outsb(-0x17d8, (char)a2);
    uint32_t v2 = *(int32_t *)0x698b37b5; // 0x2a9b84
    int64_t v3; // 0x2a9b79
    uint32_t v4 = v2 + (int32_t)v3; // 0x2a9b84
    *(int32_t *)0x698b37b5 = v4;
    unknown_ffffffffbf3a3090();
    char * v5 = (char *)(a4 - 60); // 0x2a9b8f
    *v5 = *v5 + 58 + (char)(v4 < v2);
    int64_t v6 = unknown_ffffffffbe6ec899(); // 0x2a9b93
    char * v7 = (char *)(a2 + 1); // 0x2a9b98
    *v7 = *v7 | 126;
    *(char *)a1 = (char)v6;
    int64_t v8 = unknown_ffffffffd877d9a4((v1 ? -1 : 1) + a1); // 0x2a9b9e
    int64_t result = v8 & -256 | (int64_t)*(char *)-0x2dff0483fbfe17c6; // 0x2a9ba7
    char * v9 = (char *)(result + 0x1e80123); // 0x2a9bb0
    char v10 = *v9 - 9; // 0x2a9bb0
    *v9 = v10;
    if (v10 != 0) {
        // 0x2a9c03
        return result;
    }
    // 0x2a9bbb
    return result & -212;
}

// Address range: 0x2a9c16 - 0x2a9c1b
int64_t function_2a9c16(void) {
    // 0x2a9c16
    return function_34b49ca4();
}

// Address range: 0x2a9c21 - 0x2a9c22
int64_t function_2a9c21(void) {
    // 0x2a9c21
    int64_t result; // 0x2a9c21
    return result;
}

// Address range: 0x2a9c28 - 0x2a9c9f
int64_t function_2a9c28(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x2a9c28
    int64_t v1; // 0x2a9c28
    int32_t * v2 = (int32_t *)(a1 - 33 + v1); // 0x2a9c2d
    int32_t v3 = a1; // 0x2a9c2d
    int32_t v4 = *v2 + v3; // 0x2a9c2d
    *v2 = v4;
    if (v4 < 1) {
        // 0x2a9c9e
        return v1 & 0xe871f9b6;
    }
    char * v5 = (char *)(a2 + 0x1076601); // 0x2a9c33
    *v5 = *v5 + (char)(a4 / 256);
    unknown_7c04f043();
    unsigned char v6 = llvm_ctpop_i8(*(char *)-0x17a1685cf3f49189 + (char)a1); // 0x2a9c4b
    int64_t result = __asm_hlt(v3); // 0x2a9c4e
    if (v6 % 2 != 0) {
        result = function_2a9c21();
    }
    // 0x2a9c50
    return result;
}

// Address range: 0x2a9d4d - 0x2a9d4e
int64_t function_2a9d4d(void) {
    // 0x2a9d4d
    int64_t result; // 0x2a9d4d
    return result;
}

// Address range: 0x2a9d99 - 0x2a9d9a
int64_t function_2a9d99(void) {
    // 0x2a9d99
    int64_t result; // 0x2a9d99
    return result;
}

// Address range: 0x2a9dae - 0x2a9dc6
int64_t function_2a9dae(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2a9dae
    int64_t v1; // 0x2a9dae
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a2;
    *(char *)a1 = (char)(a4 / 256);
    int64_t result = a2 & 0xffffffff; // 0x2a9db4
    int64_t v2; // 0x2a9dae
    *(char *)result = *(char *)&v2 + (char)a2;
    return result;
}

// Address range: 0x2a9dc6 - 0x2a9e6e
int64_t function_2a9dc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    function_2a9d4d();
    unknown_ffffffffc6cce1d5();
    uint32_t v2 = (int32_t)a3;
    int32_t v3 = v2 - 103; // 0x2a9ddb
    *(int32_t *)a3 = v3;
    if ((102 - v2 & v2) >= 0) {
        int64_t result = a1 & 0xffffffff; // 0x2a9de4
        if (v2 < 103 || v3 == 0) {
            result = function_2a9d99();
        }
        // 0x2a9de6
        return result;
    }
    // 0x2a9e28
    bool v4; // 0x2a9dc6
    int64_t v5 = (v4 ? -4 : 4) + a1; // 0x2a9e28
    unknown_ffffffffa7c7302f(v5);
    int16_t v6; // 0x2a9dc6
    int64_t result3 = v6; // 0x2a9e34
    int32_t v7 = v5; // 0x2a9e36
    uint64_t v8 = unknown_ffffffffb467d83c(v7); // 0x2a9e36
    char v9 = *(char *)&v1; // 0x2a9e47
    char v10 = (char)(v8 / 256) + (char)((v7 & 0x100000) != 0) + v9; // 0x2a9e47
    *(char *)v1 = v10;
    int64_t result2 = unknown_15262650(v7 >> 21); // 0x2a9e49
    int64_t v11 = a4 - 1; // 0x2a9e4f
    if (v11 == 0 || v10 == 0) {
        int32_t * v12 = (int32_t *)result2; // 0x2a9e51
        *v12 = *v12 + (int32_t)v6;
        return result2;
    }
    // 0x2a9e58
    int64_t v13; // 0x2a9dc6
    int32_t * v14 = (int32_t *)(4 * v13 + 0x508019d + result3); // 0x2a9e58
    *v14 = *v14 + (int32_t)v11;
    unknown_6e9d6d68();
    return result3;
}

// Address range: 0x2a9e6e - 0x2a9ea7
int64_t function_2a9e6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 124); // 0x2a9e6e
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x2a9e6e
    int32_t * v2 = (int32_t *)(result + 0x2e2b407f); // 0x2a9e77
    int32_t v3 = *v2; // 0x2a9e77
    int32_t v4 = v3 + (int32_t)a1; // 0x2a9e77
    *v2 = v4;
    if (a4 == 0 != (v4 == 0)) {
        // 0x2a9e7f
        return result;
    }
    int64_t v5 = unknown_ffffffffa595ef94(); // 0x2a9e8d
    return (v5 - (v3 == 0 ? 135 : 136)) % 256 | v5 & -256;
}

// Address range: 0x2a9ede - 0x2a9edf
int64_t function_2a9ede(void) {
    // 0x2a9ede
    int64_t result; // 0x2a9ede
    return result;
}

// Address range: 0x2a9ee2 - 0x2a9ee5
int64_t function_2a9ee2(int64_t a1) {
    // 0x2a9ee2
    int64_t result; // 0x2a9ee2
    return result;
}

// Address range: 0x2a9ef0 - 0x2a9ef1
int64_t function_2a9ef0(void) {
    // 0x2a9ef0
    int64_t result; // 0x2a9ef0
    return result;
}

// Address range: 0x2a9ef2 - 0x2a9f25
int64_t function_2a9ef2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a9ef2
    __asm_int1(a1);
    int64_t v1 = unknown_7b7d49f9(); // 0x2a9ef3
    __asm_out((int16_t)a3, (int32_t)v1);
    *(int32_t *)-0x17bd1b2f = (int32_t)a2;
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x2a9f03
    int32_t v3 = *v2; // 0x2a9f03
    int64_t v4; // 0x2a9ef2
    int32_t v5 = v4; // 0x2a9f03
    int32_t v6 = v3 + v5; // 0x2a9f03
    *v2 = v6;
    if (((v6 ^ v3) & (v6 ^ v5)) < 0) {
        // 0x2a9f20
        return unknown_ffffffffd9357726();
    }
    // 0x2a9f08
    unknown_3292ef17();
    function_2a9ef0();
    return function_2a9f4e(v4 + a1 & 0xffffffff, a2, a3, 0x702e18e8);
}

// Address range: 0x2a9f2c - 0x2a9f34
int64_t function_2a9f2c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a9f2c
    int64_t v1; // 0x2a9f2c
    uint64_t v2 = v1;
    char * v3 = (char *)(a2 - 0x492ffe18); // 0x2a9f2d
    *v3 = *v3 & (char)(v2 / 256);
    return v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1);
}

// Address range: 0x2a9f34 - 0x2a9f43
int64_t function_2a9f34(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a2 - 0x772ab498); // 0x2a9f34
    int64_t result; // 0x2a9f34
    *v1 = *v1 + (char)result;
    int32_t * v2 = (int32_t *)(result - 0x5fe17b3 + result); // 0x2a9f3a
    *v2 = *v2 | (int32_t)result;
    return result;
}

// Address range: 0x2a9f4e - 0x2a9f6a
int64_t function_2a9f4e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a9f4e
    int64_t v1; // 0x2a9f4e
    uint64_t v2 = v1 + a1; // 0x2a9f4e
    bool v3; // 0x2a9f4e
    int64_t v4 = v3 ? -4 : 4; // 0x2a9f51
    __asm_in_135((int16_t)v2);
    char v5 = *(char *)((v2 & 0xffffffff) - 0x1dffecb1); // 0x2a9f55
    unknown_33398962();
    char * v6 = (char *)(a4 + 9); // 0x2a9f61
    *v6 = *v6 | (char)a4;
    return function_2a9fa0(v4 + a1, v4 + a2, 256 * (int64_t)(v5 ^ (char)(v2 / 256)) | v2 & 0xffff00ff);
}

// Address range: 0x2a9f74 - 0x2a9f75
int64_t function_2a9f74(void) {
    // 0x2a9f74
    int64_t result; // 0x2a9f74
    return result;
}

// Address range: 0x2a9fa0 - 0x2a9fba
int64_t function_2a9fa0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2a9fa0
    int64_t v1; // 0x2a9fa0
    uint64_t v2 = v1;
    char * v3 = (char *)(a2 - 45 + v2); // 0x2a9fa0
    *v3 = -*v3;
    char * v4 = (char *)(a3 + 62); // 0x2a9fa4
    *v4 = *v4 + (char)(v2 / 256);
    int64_t v5 = unknown_1ce897ad(); // 0x2a9fa7
    char * v6 = (char *)(v2 - 77); // 0x2a9faf
    unsigned char v7 = *v6; // 0x2a9faf
    unsigned char v8 = (char)a3; // 0x2a9faf
    *v6 = v7 - v8;
    int32_t * v9 = (int32_t *)(a2 + 7); // 0x2a9fb7
    *v9 = *v9 + (int32_t)a2;
    return (v5 & 0xffffff00 | 232) - (v7 < v8 ? 0xe83472e1 : 0xe83472e0) & 0xffffff0f;
}

// Address range: 0x2a9fdd - 0x2a9fdf
int64_t function_2a9fdd(void) {
    // 0x2a9fdd
    int64_t result; // 0x2a9fdd
    return result;
}

// Address range: 0x2a9feb - 0x2a9fed
int64_t function_2a9feb(void) {
    // 0x2a9feb
    int64_t result; // 0x2a9feb
    return result;
}

// Address range: 0x2aa00e - 0x2aa00f
int64_t function_2aa00e(void) {
    // 0x2aa00e
    int64_t result; // 0x2aa00e
    return result;
}

// Address range: 0x2aa020 - 0x2aa028
int64_t function_2aa020(void) {
    // 0x2aa020
    return unknown_37509c27();
}

// Address range: 0x2aa02a - 0x2aa0d8
int64_t function_2aa02a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x2aa02a
    bool v3; // 0x2aa02a
    if (v3) {
        char * v4 = (char *)(a2 - 0x17c30624); // 0x2aa055
        *v4 = -1 - *v4;
        uint32_t v5 = *(int32_t *)&v2; // 0x2aa05b
        int64_t v6; // 0x2aa02a
        uint32_t v7 = (int32_t)v6; // 0x2aa05b
        int32_t v8 = v5 + v7; // 0x2aa05b
        unsigned char v9 = llvm_ctpop_i8((char)v8); // 0x2aa05b
        *(int32_t *)v2 = v8;
        *(int32_t *)v2 = (int32_t)a4;
        return unknown_ffffffffe8775269() & -0xff01 | 256 * (64 * (int64_t)(v8 == 0) | (int64_t)(v8 < v5) | 128 * (int64_t)(v8 < 0) | 16 * (int64_t)(v5 % 16 + v7 % 16 > 15) | 4 * (int64_t)(v9 % 2 == 0)) | 512;
    }
    char v10 = a2;
    unknown_fffffffff3ffee32();
    char v11 = 16 * v10; // 0x2aa031
    *(char *)a2 = v11;
    char v12 = v10; // 0x2aa034
    if (v11 != 0) {
        char v13 = *(char *)&v1;
        char v14 = 16 * v13; // 0x2aa031
        *(char *)v1 = v14;
        v12 = v13;
        while (v14 != 0) {
            // 0x2aa031
            v13 = *(char *)&v1;
            v14 = 16 * v13;
            *(char *)v1 = v14;
            v12 = v13;
        }
    }
    // 0x2aa036
    if ((v12 & 16) != 0) {
        function_2aa00e();
    }
    int64_t result = unknown_ffffffff9fa8f03f(); // 0x2aa039
    *(int32_t *)v2 = *(int32_t *)&v2 + 0x1e89650;
    return result;
}

// Address range: 0x2aa0ea - 0x2aa0ed
int64_t function_2aa0ea(int64_t a1) {
    // 0x2aa0ea
    int64_t result; // 0x2aa0ea
    return result;
}

// Address range: 0x2aa0ed - 0x2aa10f
int64_t function_2aa0ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffff9ad810f9(); // 0x2aa0f3
    int64_t v2; // 0x2aa0ed
    char * v3 = (char *)(v2 - 0x33fedc0c); // 0x2aa0f8
    *v3 = -1 - *v3;
    int32_t * v4 = (int32_t *)((v1 & -256 | (int64_t)__asm_in_135((int16_t)a3)) - 0x59d35702); // 0x2aa101
    *v4 = *v4 + (int32_t)a2;
    bool v5; // 0x2aa0ed
    return function_ffffffffe64433c4((v5 ? -4 : 4) + a1);
}

// Address range: 0x437267 - 0x43727e
int64_t function_437267(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x437267
    int64_t v1; // 0x437267
    *(int32_t *)a1 = -1 - (int32_t)v1;
    __asm_in_133(-121);
    *(char *)(v1 - 108) = (char)a3;
    int64_t v2; // 0x437267
    return (int64_t)&v2;
}

// Address range: 0x437281 - 0x437294
int64_t function_437281(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = *(int32_t *)(a3 + 0x31efc711); // 0x437281
    if (llvm_ctpop_i8((char)(v1 - (int32_t)a2)) % 2 == 0) {
        function_437255();
    }
    // 0x437289
    *(char *)a1 = (char)a2;
    bool v2; // 0x437281
    return (int64_t)*(int32_t *)((v2 ? -1 : 1) + a2);
}

// Address range: 0x4372e0 - 0x4372f3
int64_t function_4372e0(int64_t a1, int64_t a2) {
    // 0x4372e0
    int64_t v1; // 0x4372e0
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a1;
    return function_437357();
}

// Address range: 0x437356 - 0x437357
int64_t function_437356(int64_t a1, int64_t a2) {
    // 0x437356
    return a2 & 0xffffffff;
}

// Address range: 0x437357 - 0x43736d
int64_t function_437357(void) {
    // 0x437357
    int64_t v1; // 0x437357
    int64_t v2 = v1;
    bool v3; // 0x437357
    *(char *)v2 = (char)(v1 / 256) + (char)v2 + (char)v3;
    return (int64_t)*(int32_t *)-0x7f8bc0d982168002;
}

// Address range: 0x43736e - 0x437376
int64_t function_43736e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x43736e
    int64_t result; // 0x43736e
    return result;
}

// Address range: 0x4373b6 - 0x4373b9
int64_t function_4373b6(int64_t a1) {
    // 0x4373b6
    int64_t result; // 0x4373b6
    return result;
}

// Address range: 0x4373d5 - 0x4373d6
int64_t function_4373d5(void) {
    // 0x4373d5
    int64_t result; // 0x4373d5
    return result;
}

// Address range: 0x43740c - 0x43740f
int64_t function_43740c(void) {
    // 0x43740c
    int64_t v1; // 0x43740c
    return function_437456(v1, v1, v1, v1);
}

// Address range: 0x43742c - 0x437433
int64_t function_43742c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43742c
    int64_t v1; // 0x43742c
    bool v2; // 0x43742c
    if (a4 != 1 == v2) {
        v1 = function_437491();
    }
    uint64_t v3 = v1;
    *(char *)(v3 & 0xffffffff) = (char)v3 + (char)v2 + (char)(v3 / 256);
    return function_4373d5();
}

// Address range: 0x437456 - 0x43745e
int64_t function_437456(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    unsigned char v2 = (char)a4;
    unsigned char v3 = v2 % 32; // 0x437456
    int32_t result; // 0x437456
    if (v3 == 0) {
        // 0x437456
        result = a2;
    } else {
        *(char *)a4 = v2 >> 8 - v3 | v2 << v3;
        result = *(int32_t *)&v1;
    }
    __asm_out_137(-25, (int32_t)a1);
    return result;
}

// Address range: 0x437667 - 0x4376d5
int64_t function_437667(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x437667
    int64_t v1; // 0x437667
    char v2 = v1; // 0x43766b
    bool v3; // 0x437667
    char v4 = v3 ? -53 : -54; // 0x43766b
    int64_t result = v1 & -256 | (int64_t)(v2 - v4); // 0x43766d
    if (a4 != 1 == v4 < v2) {
        result = function_437657();
    }
    // 0x43766f
    return result;
}

// Address range: 0x4376f8 - 0x4376f9
int64_t function_4376f8(void) {
    // 0x4376f8
    int64_t result; // 0x4376f8
    return result;
}

// Address range: 0x437725 - 0x437726
int64_t function_437725(void) {
    // 0x437725
    int64_t result; // 0x437725
    return result;
}

// Address range: 0x437734 - 0x437739
int64_t function_437734(void) {
    // 0x437734
    return function_ffffffffd854dfec();
}

// Address range: 0x437795 - 0x43783e
int64_t function_437795(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a5;
    int64_t v3; // 0x437795
    uint32_t result = (int32_t)v3 ^ -0x1b1d99d1; // 0x437795
    if (result != 0) {
        if (a4 >= a3) {
            // 0x4377a1
            return function_437725();
        }
        // 0x4377f9
        *(char *)(v3 + 0x61e26c2e) = (char)(a3 / 256);
        *(char *)(v3 + 68 & 0xffffffff) = (char)v1;
        return result;
    }
    char v4 = __asm_insb((int16_t)a3); // 0x4377bb
    char * v5 = (char *)a1; // 0x4377bb
    *v5 = v4;
    __asm_iretd();
    *v5 = *(char *)&v1;
    return (int64_t)&v2;
}
