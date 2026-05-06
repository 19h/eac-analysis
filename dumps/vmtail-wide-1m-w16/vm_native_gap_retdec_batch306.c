/*
 * Targeted RetDec C for native executable gap queue batch 306.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x109dbf-0x109fbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x109fbf-0x10a1bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10a1bf-0x10a3bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e5ae8-0x1e5ce8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e5ce8-0x1e5ee8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e60e8-0x1e62e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1e62e8-0x1e64e8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25aac2-0x25acc2 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_109dbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result);
int64_t function_109df8(void);
int64_t function_109dff(int64_t a1);
int64_t function_109e42(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_109ef2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_109f78(int64_t a1);
int64_t function_109fdc(void);
int64_t function_10a010(void);
int64_t function_10a0a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10a100(void);
int64_t function_10a12e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result, int64_t a6, int64_t a7);
int64_t function_10a1cc(void);
int64_t function_10a225(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10a252(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int32_t a5);
int64_t function_10a318(void);
int64_t function_10a32d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e5ae8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_1e5b12(int64_t a1);
int64_t function_1e5b58(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e5b98(void);
int64_t function_1e5ba0(void);
int64_t function_1e5bcd(void);
int64_t function_1e5bd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e5be9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e5c47(void);
int64_t function_1e5c5a(void);
int64_t function_1e5c77(void);
int64_t function_1e5c91(int64_t a1);
int64_t function_1e5ca9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e5d83(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e5dfc(int64_t a1);
int64_t function_1e5e66(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e5e93(int64_t a1);
int64_t function_1e60e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e6142(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e619c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_1e61f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1e6216(int64_t a1);
int64_t function_1e622f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1e629d(void);
int64_t function_1e634c(int64_t a1);
int64_t function_1e63e4(void);
int64_t function_1e63ee(void);
int64_t function_1e641a(void);
int64_t function_1e6432(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1e6456(void);
int64_t function_1e6493(void);
int64_t function_1f8a9f8();
int64_t function_25aac2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25aac7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25abc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_25ac6b(void);
int64_t function_457d7061();
int64_t function_489a3f54();
int64_t function_aca6173();
int64_t function_ffffffffe8986751();
int64_t unknown_1aab59d5();
int64_t unknown_240f5baf();
int64_t unknown_3a3d38c1();
int64_t unknown_3ac704f3();
int64_t unknown_3b107efa();
int64_t unknown_4821f152();
int64_t unknown_530f431e();
int64_t unknown_56a1b4ab();
int64_t unknown_691b79d7();
int64_t unknown_ffffffffad639509();
int64_t unknown_ffffffffb064046c();
int64_t unknown_ffffffffc07e9918();
int64_t unknown_ffffffffc2a475e2();
int64_t unknown_ffffffffc48c2067();
int64_t unknown_ffffffffc7a3c38a();
int64_t unknown_fffffffffc136dbc();

// Address range: 0x109dbf - 0x109df0
int64_t function_109dbf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result) {
    // 0x109dbf
    int64_t v1; // 0x109dbf
    int64_t v2 = v1;
    unsigned char v3 = (char)a4 % 32; // 0x109dcb
    if (v3 != 0) {
        char * v4 = (char *)(a1 + 0x652542f6); // 0x109dcb
        unsigned char v5 = *v4; // 0x109dcb
        *v4 = v5 >> v3 | v5 << 8 - v3;
    }
    int32_t * v6 = (int32_t *)result; // 0x109de1
    int64_t v7; // 0x109dbf
    *v6 = *v6 + (int32_t)(int64_t)&v7 ^ (int32_t)a3;
    int32_t * v8 = (int32_t *)(((v2 - a3) % 256 | v2 & -256) - 0x7d8d8bf5); // 0x109dea
    *v8 = *v8 | (int32_t)result;
    return result;
}

// Address range: 0x109df8 - 0x109dfa
int64_t function_109df8(void) {
    // 0x109df8
    int64_t result; // 0x109df8
    return result;
}

// Address range: 0x109dff - 0x109e02
int64_t function_109dff(int64_t a1) {
    // 0x109dff
    int64_t v1; // 0x109dff
    int64_t v2 = v1;
    bool v3; // 0x109dff
    return (v2 + 62 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x109e42 - 0x109e49
int64_t function_109e42(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x109e42
    return function_457d7061();
}

// Address range: 0x109ef2 - 0x109f04
int64_t function_109ef2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a2 - 0x17b34b94); // 0x109ef4
    int64_t result; // 0x109ef2
    *v1 = *v1 & (int32_t)result;
    int32_t * v2 = (int32_t *)((result & -0xff01 | (int64_t)&g4) + 8 * a1); // 0x109efa
    *v2 = *v2 + (int32_t)a4;
    return result;
}

// Address range: 0x109f78 - 0x109f7a
int64_t function_109f78(int64_t a1) {
    // 0x109f78
    int64_t result; // 0x109f78
    return result;
}

// Address range: 0x109fdc - 0x109fdd
int64_t function_109fdc(void) {
    // 0x109fdc
    int64_t result; // 0x109fdc
    return result;
}

// Address range: 0x10a010 - 0x10a011
int64_t function_10a010(void) {
    // 0x10a010
    int64_t result; // 0x10a010
    return result;
}

// Address range: 0x10a0a1 - 0x10a0ac
int64_t function_10a0a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10a0a1
    int64_t result; // 0x10a0a1
    return result;
}

// Address range: 0x10a100 - 0x10a102
int64_t function_10a100(void) {
    // 0x10a100
    int64_t result; // 0x10a100
    return result;
}

// Address range: 0x10a12e - 0x10a1ca
int64_t function_10a12e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t result, int64_t a6, int64_t a7) {
    int64_t v1 = a3;
    int64_t v2; // 0x10a12e
    char v3 = v2 / 256; // 0x10a12e
    char v4 = *(char *)0x173f6935 + v3; // 0x10a12e
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x10a12e
    *(char *)0x173f6935 = v4;
    unsigned char v6 = (char)a3;
    if (v5 % 2 != 0) {
        unsigned char v7 = (char)result + v6; // 0x10a139
        *(char *)a3 = v7;
        int32_t * v8 = (int32_t *)(a2 - 64); // 0x10a13b
        *v8 = (v7 < v6 ? 0x7d167138 : 0x7d167137) + *v8;
        *(char *)0x60058849 = *(char *)0x60058849 + v3;
        *(char *)v1 = *(char *)&v1 + v3;
        return result;
    }
    // 0x10a1a3
    unknown_56a1b4ab();
    *(char *)a3 = v6 + 81;
    int64_t result2 = unknown_3a3d38c1(); // 0x10a1bb
    char * v9 = (char *)(v2 - 0x17872d90 + 2 * result2); // 0x10a1c0
    *v9 = (char)(v6 < 175) - (char)v2 + *v9;
    int32_t * v10 = (int32_t *)(v1 + 14); // 0x10a1c7
    *v10 = *v10 + (int32_t)a1;
    return result2;
}

// Address range: 0x10a1cc - 0x10a1da
int64_t function_10a1cc(void) {
    unsigned char v1 = *(char *)-0x17e0f989; // 0x10a1cc
    *(char *)-0x17e0f989 = v1 / 128 | 2 * v1;
    int64_t v2; // 0x10a1cc
    return v2 & 0xffffffff & v2;
}

// Address range: 0x10a225 - 0x10a243
int64_t function_10a225(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10a225
    int64_t v1; // 0x10a225
    int64_t v2 = v1 + 0xa3cc0968; // 0x10a22a
    __asm_outsd((int16_t)a3, (int32_t)v1);
    int64_t v3 = (int64_t)*(int32_t *)(v2 & 0xffffffff); // 0x10a232
    if ((int32_t)(v2 || v1) < 0 == (0x1e8a63a * v3 != 0x1e8a63a00000000 * v3 >> 32)) {
        function_489a3f54();
    }
    // 0x10a23e
    return __asm_in(-48);
}

// Address range: 0x10a252 - 0x10a26e
int64_t function_10a252(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int32_t a5) {
    // 0x10a252
    int64_t v1; // 0x10a252
    int64_t v2 = v1 & 0xffffff00 | a4 / 256 % 256; // 0x10a258
    unsigned char v3 = *(char *)v2; // 0x10a260
    bool v4; // 0x10a252
    int64_t v5 = v2 + (v4 ? -1 : 1); // 0x10a260
    int64_t v6 = unknown_ffffffffc48c2067(v5); // 0x10a261
    char * v7 = (char *)(v5 + 1); // 0x10a266
    *v7 = (char)(v3 > (char)a1) - (char)v6 + *v7;
    return a3 & 0xffffffff;
}

// Address range: 0x10a318 - 0x10a31d
int64_t function_10a318(void) {
    // 0x10a318
    return function_1f8a9f8();
}

// Address range: 0x10a32d - 0x10a3bf
int64_t function_10a32d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10a32d
    int64_t v1; // 0x10a32d
    bool v2; // 0x10a32d
    if (v2 || v2) {
        // 0x10a33f
        return 0x10000 * (int32_t)v1 >> 16;
    }
    char * v3 = (char *)(a3 + 111); // 0x10a3ae
    *v3 = *v3 & (char)v1;
    char v4 = *(char *)0x600902bb; // 0x10a3b4
    *(char *)0x600902bb = v4 + (char)((int64_t)&g3 >> 8);
    return 2 * a4 & 0xfffffffe | (int64_t)((a4 & 256) != 0);
}

// Address range: 0x1e5ae8 - 0x1e5b0d
int64_t function_1e5ae8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x1e5ae8
    int64_t v1; // 0x1e5ae8
    char * v2 = (char *)((v1 & 0xffff00ff | (int64_t)&g5) - 0x42858990); // 0x1e5aee
    *v2 = *v2 + (char)(a4 / 256);
    unknown_3b107efa();
    unknown_ffffffffad639509();
    return function_aca6173();
}

// Address range: 0x1e5b12 - 0x1e5b1d
int64_t function_1e5b12(int64_t a1) {
    uint64_t v1 = unknown_ffffffffc07e9918(a1); // 0x1e5b12
    char v2 = *(char *)(v1 + 5); // 0x1e5b17
    bool v3; // 0x1e5b12
    return 256 * (int64_t)((char)v3 - v2 + (char)(v1 / 256)) | v1 & -0xff01;
}

// Address range: 0x1e5b58 - 0x1e5b5a
int64_t function_1e5b58(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e5b58
    return __asm_in_133((int16_t)a3);
}

// Address range: 0x1e5b98 - 0x1e5b9b
int64_t function_1e5b98(void) {
    // 0x1e5b98
    int64_t result; // 0x1e5b98
    return result;
}

// Address range: 0x1e5ba0 - 0x1e5ba1
int64_t function_1e5ba0(void) {
    // 0x1e5ba0
    int64_t result; // 0x1e5ba0
    return result;
}

// Address range: 0x1e5bcd - 0x1e5bce
int64_t function_1e5bcd(void) {
    // 0x1e5bcd
    int64_t result; // 0x1e5bcd
    return result;
}

// Address range: 0x1e5bd5 - 0x1e5be9
int64_t function_1e5bd5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e5bd5
    int64_t v1; // 0x1e5bd5
    int64_t v2 = v1;
    char v3 = (char)v2 & 123; // 0x1e5bd5
    bool v4; // 0x1e5bd5
    int64_t v5 = 0x4000 * (int64_t)v4 | 1024 * (int64_t)v4 | 64 * (int64_t)(v3 == 0) | 512 * (int64_t)v4 | 256 * (int64_t)v4 | 4 * (int64_t)(llvm_ctpop_i8(v3) % 2 == 0) | 2; // bp-8, 0x1e5bd7
    uint64_t v6 = (int64_t)&v5; // 0x1e5bd7
    uint32_t v7 = (int32_t)a4 % 32; // 0x1e5bd8
    int32_t * v8 = (int32_t *)(v7 == 0 ? v2 : (int64_t)((int32_t)v2 >> v7)); // 0x1e5bda
    uint32_t v9 = *v8; // 0x1e5bda
    uint32_t v10 = v9 + (int32_t)v6; // 0x1e5bda
    *v8 = v10;
    int64_t v11 = v10 < v9; // 0x1e5bdc
    uint64_t v12 = *(int64_t *)(a4 + 0x22aa87d) + v11; // 0x1e5bdc
    int64_t v13 = v6 - v12; // 0x1e5bdc
    if (v13 == 0 || (v10 < v9 ? v12 != -1 || v13 - v11 > v6 : v12 > v6)) {
        function_1e5bcd();
    }
    // 0x1e5be5
    return function_1e5ba0();
}

// Address range: 0x1e5be9 - 0x1e5c15
int64_t function_1e5be9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e5be9
    int64_t v1; // 0x1e5be9
    int16_t v2 = 256 * (int16_t)v1 >> 8; // 0x1e5bec
    int64_t v3 = v1 & -0x10000 | (int64_t)(v2 * v2); // 0x1e5bec
    int32_t * v4 = (int32_t *)(v3 + 0x7c5c1b5c); // 0x1e5bee
    *v4 = *v4 + (int32_t)v1;
    *(char *)0x206efdc = *(char *)0x206efdc & (char)a4;
    int64_t v5 = 0x100000000 * v3 >> 32; // 0x1e5bfa
    bool v6; // 0x1e5be9
    int64_t v7 = (v6 ? -1 : 1) + a1; // 0x1e5bff
    int64_t v8; // 0x1e5be9
    *(int32_t *)a3 = *(int32_t *)&v8 + (int32_t)v7;
    int64_t result = (v5 + 24) % 256 | v5 & -0x8100; // 0x1e5c0f
    int32_t * v9 = (int32_t *)((a4 + 0xc8080105 + 2 * v7 & 0xffffffff) + v7); // 0x1e5c11
    *v9 = *v9 + (int32_t)result;
    return result;
}

// Address range: 0x1e5c47 - 0x1e5c48
int64_t function_1e5c47(void) {
    // 0x1e5c47
    int64_t result; // 0x1e5c47
    return result;
}

// Address range: 0x1e5c5a - 0x1e5c5b
int64_t function_1e5c5a(void) {
    // 0x1e5c5a
    int64_t result; // 0x1e5c5a
    return result;
}

// Address range: 0x1e5c77 - 0x1e5c79
int64_t function_1e5c77(void) {
    // 0x1e5c77
    return function_1e5c47();
}

// Address range: 0x1e5c91 - 0x1e5c98
int64_t function_1e5c91(int64_t a1) {
    // 0x1e5c91
    int64_t result; // 0x1e5c91
    bool v1; // 0x1e5c91
    if (!v1) {
        result = function_1e5c5a();
    }
    // 0x1e5c94
    return result;
}

// Address range: 0x1e5ca9 - 0x1e5ccc
int64_t function_1e5ca9(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = unknown_240f5baf(); // 0x1e5ca9
    __readgsdword(v1 - 40);
    int32_t * v2 = (int32_t *)v1; // 0x1e5cb4
    *v2 = *v2 | (int32_t)v1;
    int64_t result = unknown_fffffffffc136dbc(); // 0x1e5cb6
    int64_t v3; // 0x1e5ca9
    char * v4 = (char *)(v3 + 0x476f2c00); // 0x1e5cbb
    *v4 = *v4 + 1;
    char * v5 = (char *)result; // 0x1e5cc2
    unsigned char v6 = *v5; // 0x1e5cc2
    *v5 = v6 / 128 | 2 * v6;
    return result;
}

// Address range: 0x1e5d83 - 0x1e5da8
int64_t function_1e5d83(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e5d83
    int64_t v1; // 0x1e5d83
    int64_t v2 = v1;
    int64_t v3 = ((256 * unknown_ffffffffc7a3c38a() | v2) & 0xff00 | v2 & 0xffff00ff) ^ v1;
    int32_t * v4 = (int32_t *)(v3 & 0xffffffff); // 0x1e5d96
    uint32_t v5 = *v4; // 0x1e5d96
    uint32_t v6 = v5 + (int32_t)v3; // 0x1e5d96
    *v4 = v6;
    return v3 - (v6 < v5 ? 0x98120f0b : 0x98120f0a) & 0xffffffff;
}

// Address range: 0x1e5dfc - 0x1e5dfd
int64_t function_1e5dfc(int64_t a1) {
    // 0x1e5dfc
    int64_t result; // 0x1e5dfc
    return result;
}

// Address range: 0x1e5e66 - 0x1e5e6f
int64_t function_1e5e66(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e5e66
    return unknown_ffffffffb064046c(a1, a2, a3, a4);
}

// Address range: 0x1e5e93 - 0x1e5e96
int64_t function_1e5e93(int64_t a1) {
    // 0x1e5e93
    int64_t result; // 0x1e5e93
    return result;
}

// Address range: 0x1e60e8 - 0x1e60fc
int64_t function_1e60e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1e60e8
    int64_t result; // 0x1e60e8
    int32_t v1 = a4 - 256 * result & 0xff00 | a4 & 0xffff00ff; // 0x1e60ea
    *(int32_t *)a1 = v1 + (int32_t)result;
    int64_t v2 = (int64_t)(*(int32_t *)(a2 - 15 + 4 * result) & (int32_t)a2); // 0x1e60ec
    int32_t * v3 = (int32_t *)v2; // 0x1e60f6
    *v3 = *v3 - v1;
    *(char *)a1 = *(char *)v2;
    return result;
}

// Address range: 0x1e6142 - 0x1e6161
int64_t function_1e6142(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e6142
    int64_t v1; // 0x1e6142
    *(int32_t *)a3 = 2 * (int32_t)v1;
    __asm_in_134((int16_t)a3);
    unknown_4821f152();
    int32_t * v2 = (int32_t *)(a3 - 0x276140a4); // 0x1e6156
    *v2 = *v2 + (int32_t)a1;
    return function_ffffffffe8986751();
}

// Address range: 0x1e619c - 0x1e61f6
int64_t function_1e619c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1e619c
    int64_t v1; // 0x1e619c
    int64_t v2 = v1 & 0xd687bd4d; // 0x1e619c
    int64_t v3 = a4 & -0xff01 | (int64_t)&g6; // 0x1e61a1
    int32_t * v4 = (int32_t *)(v1 - 0x6fff547d); // 0x1e61a3
    *v4 = *v4 + (int32_t)a3;
    char * v5 = (char *)v3; // 0x1e61ac
    *v5 = *v5 | (char)v2;
    int32_t * v6 = (int32_t *)(a3 + 0x97c7336); // 0x1e61b0
    *v6 = *v6 + (int32_t)v1;
    uint16_t v7 = ((int16_t)v2 + 24 & 125) * (int16_t)*(char *)(v1 + 1); // 0x1e61b6
    char v8 = v7 / 256; // 0x1e61b6
    int64_t v9 = v1 & 0xd6870000 | (int64_t)v7; // 0x1e61b6
    unsigned char v10 = (char)v1; // 0x1e61b9
    unsigned char v11 = *(char *)(v9 - 0x2901cb76) + v10; // 0x1e61b9
    bool v12 = v8 != 0 == (v8 != -1) ? v11 + (char)(v8 != 0 == (v8 != -1)) <= v10 : v11 < v10; // 0x1e61b9
    int32_t * v13 = (int32_t *)((v9 + v1 + (int64_t)v12 & 0xffffffff) + 0x6400bb60); // 0x1e61c1
    *v13 = *v13 + (int32_t)v3;
    __readgsdword(v3 - 0x214b7a92);
    unknown_1aab59d5();
    unknown_ffffffffc2a475e2();
    int32_t * v14 = (int32_t *)(a1 + 0x6db14d30); // 0x1e61e6
    *v14 = *v14 + (int32_t)a1;
    return unknown_3ac704f3(a6);
}

// Address range: 0x1e61f7 - 0x1e61fd
int64_t function_1e61f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1e61f7
    int64_t result; // 0x1e61f7
    return result;
}

// Address range: 0x1e6216 - 0x1e6224
int64_t function_1e6216(int64_t a1) {
    // 0x1e6216
    return unknown_530f431e() ^ 28;
}

// Address range: 0x1e622f - 0x1e6234
int64_t function_1e622f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1e622f
    int64_t v1; // 0x1e622f
    return v1 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x1e629d - 0x1e62a5
int64_t function_1e629d(void) {
    // 0x1e629d
    int64_t result; // 0x1e629d
    return result;
}

// Address range: 0x1e634c - 0x1e634f
int64_t function_1e634c(int64_t a1) {
    // 0x1e634c
    int64_t result; // 0x1e634c
    return result;
}

// Address range: 0x1e63e4 - 0x1e63e5
int64_t function_1e63e4(void) {
    // 0x1e63e4
    int64_t result; // 0x1e63e4
    return result;
}

// Address range: 0x1e63ee - 0x1e63f0
int64_t function_1e63ee(void) {
    // 0x1e63ee
    return function_1e63e4();
}

// Address range: 0x1e641a - 0x1e641b
int64_t function_1e641a(void) {
    // 0x1e641a
    int64_t result; // 0x1e641a
    return result;
}

// Address range: 0x1e6432 - 0x1e6436
int64_t function_1e6432(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1e6432
    int64_t result; // 0x1e6432
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x1e6456 - 0x1e6458
int64_t function_1e6456(void) {
    // 0x1e6456
    int64_t result; // 0x1e6456
    return result;
}

// Address range: 0x1e6493 - 0x1e6497
int64_t function_1e6493(void) {
    // 0x1e6493
    int64_t v1; // 0x1e6493
    int64_t result = v1;
    *(char *)result = (char)result + 60;
    return result;
}

// Address range: 0x25aac2 - 0x25aac7
int64_t function_25aac2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25aac2
    int64_t result; // 0x25aac2
    return result;
}

// Address range: 0x25aac7 - 0x25abc8
int64_t function_25aac7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25aac7
    bool v1; // 0x25aac7
    if (v1) {
        int64_t result = unknown_691b79d7(0x91e268a0); // 0x25aad1
        char * v2 = (char *)result; // 0x25aad6
        *v2 = *v2 + (char)result;
        return result;
    }
    int64_t result2; // 0x25aac7
    if (a4 == 1) {
        // 0x25ab4f
        return result2;
    }
    // 0x25aba3
    *(char *)0x91e268a0 = (char)a2;
    return result2;
}

// Address range: 0x25abc9 - 0x25abd4
int64_t function_25abc9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x25abc9
    return __asm_wait();
}

// Address range: 0x25ac6b - 0x25ac6e
int64_t function_25ac6b(void) {
    // 0x25ac6b
    int64_t result; // 0x25ac6b
    return result;
}
