/*
 * Targeted RetDec C for native executable gap queue batch 413.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xf3f9c-0xf419c rank=- name=- kind=- bytes=- uncovered=-
 *   0xf419c-0xf439c rank=- name=- kind=- bytes=- uncovered=-
 *   0x10e9bf-0x10ebbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10edbf-0x10efbf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10efbf-0x10f1bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x10f1bf-0x10f3bf rank=- name=- kind=- bytes=- uncovered=-
 *   0x2aed75-0x2aef75 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2aef75-0x2af175 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_10e959();
int64_t function_10e9bf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_10ea66(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10ea8b(void);
int64_t function_10ea96(void);
int64_t function_10ea99(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10ea9b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_10eaba(int64_t a1, int64_t a2, int64_t a3);
int64_t function_10eade(int64_t a1, int64_t a2, int64_t a3);
int64_t function_10eaef(int64_t a1);
int64_t function_10eb4e(void);
int64_t function_10eb50(void);
int64_t function_10eb6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10edbf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_10ede3(int64_t a1);
int64_t function_10ede7(void);
int64_t function_10edea(int64_t a1);
int64_t function_10ee06(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_10ee57(void);
int64_t function_10ee78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10ee91(int64_t a1, int64_t a2, int64_t a3);
int64_t function_10eeac(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10eeca(void);
int64_t function_10eedc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10eef9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_10efd9(void);
int64_t function_10f055(void);
int64_t function_10f0bd(void);
int64_t function_10f10a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_10f1e6(int64_t a1);
int64_t function_10f1f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10f239(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10f250(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_10f32b(int64_t a1, int64_t a2);
int64_t function_10f379(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2aed75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2aedaf(int64_t a1);
int64_t function_2aee70(int64_t a1);
int64_t function_2aee81(void);
int64_t function_2aee97(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2aef32(void);
int64_t function_2aef3f(void);
int64_t function_2aef4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2aef79(void);
int64_t function_2aef90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_2af0f6(int64_t a1, int64_t a2);
int64_t function_2af16c(int64_t a1);
int64_t function_3ec7cbe1();
int64_t function_f3f99();
int64_t function_f3f9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f3fd1(void);
int64_t function_f3fea(void);
int64_t function_f4028(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f403d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f4075(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_f40a3(void);
int64_t function_f4151(void);
int64_t function_f41e0(int64_t a1);
int64_t function_f4200(int64_t a1);
int64_t function_f4245(int64_t a1, int64_t a2, int64_t a3);
int64_t function_f42ab(int64_t a1);
int64_t function_f42bc(int64_t a1);
int64_t function_f42f8(int32_t a1);
int64_t function_ffffffff841ac485();
int64_t function_ffffffffb212d760();
int64_t function_ffffffffbb25184b();
int64_t function_ffffffffe7c8ef49();
int64_t unknown_10e7cce4();
int64_t unknown_12125396();
int64_t unknown_17dd689a();
int64_t unknown_1abc76b2();
int64_t unknown_1cbf2503();
int64_t unknown_211ea3ab();
int64_t unknown_26d8219a();
int64_t unknown_3a98d8fc();
int64_t unknown_3d6af1a5();
int64_t unknown_4a736d1a();
int64_t unknown_610d09f4();
int64_t unknown_695bb8b8();
int64_t unknown_6f1522bd();
int64_t unknown_b53b63f();
int64_t unknown_ffffffff97d53471();
int64_t unknown_ffffffffa3615e69();
int64_t unknown_ffffffffa8f9185d();
int64_t unknown_ffffffffb707de01();
int64_t unknown_ffffffffb92eea58();
int64_t unknown_ffffffffbcf03d91();
int64_t unknown_ffffffffc088ab88();
int64_t unknown_ffffffffc6397697();
int64_t unknown_ffffffffc830d7dc();
int64_t unknown_ffffffffcb068af2();
int64_t unknown_ffffffffce1b917f();
int64_t unknown_ffffffffd86df7c7();

// Address range: 0xf3f9c - 0xf3fad
int64_t function_f3f9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf3f9c
    int64_t v1; // 0xf3f9c
    int64_t v2; // 0xf3f9c
    if (*(char *)(a2 + 0x152a1b1f) == (char)((uint64_t)v2 / 256)) {
        v1 = function_f3f99();
    }
    int64_t result = v1;
    *(int32_t *)result = (int32_t)(256 * result & 0xff00 | a4) + (int32_t)result;
    return result;
}

// Address range: 0xf3fd1 - 0xf3fd2
int64_t function_f3fd1(void) {
    // 0xf3fd1
    int64_t result; // 0xf3fd1
    return result;
}

// Address range: 0xf3fea - 0xf3fec
int64_t function_f3fea(void) {
    // 0xf3fea
    return function_f3fd1();
}

// Address range: 0xf4028 - 0xf4033
int64_t function_f4028(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf4028
    int64_t v1; // 0xf4028
    uint64_t v2 = v1;
    char * v3 = (char *)(4 * a1 + 63 + v2); // 0xf4028
    *v3 = *v3 + (char)(v2 / 256);
    return function_ffffffffbb25184b();
}

// Address range: 0xf403d - 0xf4050
int64_t function_f403d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf403d
    int64_t v1; // 0xf403d
    *(char *)(v1 + 23) = (char)a3;
    return 0;
}

// Address range: 0xf4075 - 0xf407b
int64_t function_f4075(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xf4075
    int64_t result; // 0xf4075
    return result;
}

// Address range: 0xf40a3 - 0xf40a4
int64_t function_f40a3(void) {
    // 0xf40a3
    int64_t result; // 0xf40a3
    return result;
}

// Address range: 0xf4151 - 0xf4154
int64_t function_f4151(void) {
    // 0xf4151
    int64_t result; // 0xf4151
    return result;
}

// Address range: 0xf41e0 - 0xf41e2
int64_t function_f41e0(int64_t a1) {
    // 0xf41e0
    int64_t v1; // 0xf41e0
    return v1 & 0xffffffff;
}

// Address range: 0xf4200 - 0xf4201
int64_t function_f4200(int64_t a1) {
    // 0xf4200
    int64_t result; // 0xf4200
    return result;
}

// Address range: 0xf4245 - 0xf4262
int64_t function_f4245(int64_t a1, int64_t a2, int64_t a3) {
    // 0xf4245
    int64_t v1; // 0xf4245
    *(char *)a2 = (char)(v1 & v1);
    *(int32_t *)-0x5d1bff6e849d1f3c = (int32_t)v1;
    return unknown_ffffffffb92eea58();
}

// Address range: 0xf42ab - 0xf42b2
int64_t function_f42ab(int64_t a1) {
    // 0xf42ab
    int64_t result; // 0xf42ab
    return result;
}

// Address range: 0xf42bc - 0xf42bd
int64_t function_f42bc(int64_t a1) {
    // 0xf42bc
    int64_t result; // 0xf42bc
    return result;
}

// Address range: 0xf42f8 - 0xf4304
int64_t function_f42f8(int32_t a1) {
    // 0xf42f8
    int64_t result; // 0xf42f8
    return result;
}

// Address range: 0x10e9bf - 0x10e9c9
int64_t function_10e9bf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x10e9bf
    int64_t result; // 0x10e9bf
    int64_t v1; // 0x10e9bf
    if ((int32_t)v1 + (int32_t)a2 >= 0) {
        result = function_10e959();
    }
    // 0x10e9c3
    return result;
}

// Address range: 0x10ea66 - 0x10ea89
int64_t function_10ea66(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10ea66
    int64_t v1; // 0x10ea66
    *(char *)a1 = (char)v1;
    bool v2; // 0x10ea66
    int64_t v3 = v2 ? -1 : 1; // 0x10ea6a
    int64_t v4 = v3 + a1; // 0x10ea6a
    int64_t v5 = v3 + a2; // 0x10ea6a
    int64_t v6 = unknown_ffffffff97d53471(v4, v5); // 0x10ea6b
    *(int32_t *)v4 = (int32_t)v6;
    int32_t * v7 = (int32_t *)(v5 - 0x6459d308 + 4 * (v4 + (v2 ? 0x3ffffffffffffffc : 4))); // 0x10ea7b
    uint32_t v8 = *v7; // 0x10ea7b
    uint32_t v9 = v8 + (int32_t)v5; // 0x10ea7b
    *v7 = v9;
    return (v6 + 194 + (int64_t)(v9 < v8)) % 256 | v6 & -256;
}

// Address range: 0x10ea8b - 0x10ea92
int64_t function_10ea8b(void) {
    // 0x10ea8b
    return unknown_ffffffffbcf03d91();
}

// Address range: 0x10ea96 - 0x10ea98
int64_t function_10ea96(void) {
    // 0x10ea96
    int64_t v1; // 0x10ea96
    return function_10ea9b(v1, v1, v1, v1);
}

// Address range: 0x10ea99 - 0x10ea9b
int64_t function_10ea99(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10ea99
    int64_t result; // 0x10ea99
    return result;
}

// Address range: 0x10ea9b - 0x10eab2
int64_t function_10ea9b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x10ea9b
    __asm_hlt();
    char * v1 = (char *)(a2 + 0x1e9f34bc); // 0x10eaa2
    unsigned char v2 = *v1; // 0x10eaa2
    unsigned char v3 = v2 + (char)(a4 / 256); // 0x10eaa2
    *v1 = v3;
    int64_t v4; // 0x10ea9b
    int64_t v5 = a4 - v4 + (int64_t)(v3 < v2); // 0x10eaa8
    int32_t * v6 = (int32_t *)(a3 - 113); // 0x10eaaa
    *v6 = *v6 + (int32_t)v5;
    return v5 & 0xffffffff;
}

// Address range: 0x10eaba - 0x10eabf
int64_t function_10eaba(int64_t a1, int64_t a2, int64_t a3) {
    // 0x10eaba
    int64_t result; // 0x10eaba
    return result;
}

// Address range: 0x10eade - 0x10eae5
int64_t function_10eade(int64_t a1, int64_t a2, int64_t a3) {
    // 0x10eade
    return unknown_10e7cce4(a1, a2, a3);
}

// Address range: 0x10eaef - 0x10eaf0
int64_t function_10eaef(int64_t a1) {
    // 0x10eaef
    int64_t result; // 0x10eaef
    return result;
}

// Address range: 0x10eb4e - 0x10eb4f
int64_t function_10eb4e(void) {
    // 0x10eb4e
    int64_t result; // 0x10eb4e
    return result;
}

// Address range: 0x10eb50 - 0x10eb51
int64_t function_10eb50(void) {
    // 0x10eb50
    int64_t result; // 0x10eb50
    return result;
}

// Address range: 0x10eb6a - 0x10ebae
int64_t function_10eb6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10eb6a
    int64_t v1; // 0x10eb6a
    char * v2 = (char *)(v1 - 95); // 0x10eb6c
    *v2 = 2 * *v2;
    char v3 = *(char *)(a1 - 128); // 0x10eb76
    int32_t * v4 = (int32_t *)((a4 & -256 | (int64_t)(v3 & (char)a4)) + 0x7b4ebfd7); // 0x10eb7a
    int32_t v5 = *v4; // 0x10eb7a
    bool v6; // 0x10eb6a
    *v4 = v5 + (int32_t)((a3 - v1 / 256 + (int64_t)v6) % 256 | a3 & 0xffffff00);
    __asm_int(58);
    int32_t v7 = v1; // 0x10eb8e
    int32_t v8 = 2 * v7; // 0x10eb8e
    if (v8 < 0 == (v8 ^ v7) < 0) {
        // 0x10eba5
        unknown_211ea3ab();
        function_10eb50();
        return function_10eb4e();
    }
    int32_t * v9 = (int32_t *)(unknown_26d8219a() - 0x55aa03ef); // 0x10eb99
    *v9 = (int32_t)a1;
    return unknown_3d6af1a5(*v9);
}

// Address range: 0x10edbf - 0x10edc6
int64_t function_10edbf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x10edbf
    return unknown_ffffffffd86df7c7(a1, a2, a3);
}

// Address range: 0x10ede3 - 0x10ede6
int64_t function_10ede3(int64_t a1) {
    // 0x10ede3
    int64_t result; // 0x10ede3
    return result;
}

// Address range: 0x10ede7 - 0x10edea
int64_t function_10ede7(void) {
    // 0x10ede7
    int64_t result; // 0x10ede7
    return result;
}

// Address range: 0x10edea - 0x10edf2
int64_t function_10edea(int64_t a1) {
    // 0x10edea
    *(int32_t *)-0x7c51092a = (int32_t)a1;
    int64_t result; // 0x10edea
    return result;
}

// Address range: 0x10ee06 - 0x10ee0f
int64_t function_10ee06(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x10ee06
    int64_t v1; // 0x10ee06
    int64_t v2 = v1;
    uint32_t v3 = (int32_t)a1; // 0x10ee06
    uint32_t v4 = 2 * v3; // 0x10ee06
    int64_t result = ((int64_t)(v4 < v3) - a4 / 256 + v2) % 256 | v2 & -256; // 0x10ee08
    int32_t * v5 = (int32_t *)(result - 118); // 0x10ee0a
    *v5 = *v5 + (int32_t)a2;
    int64_t v6; // 0x10ee06
    *(char *)(int64_t)v4 = *(char *)&v6;
    return result;
}

// Address range: 0x10ee57 - 0x10ee6f
int64_t function_10ee57(void) {
    // 0x10ee57
    return function_ffffffffb212d760();
}

// Address range: 0x10ee78 - 0x10ee81
int64_t function_10ee78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10ee78
    int64_t v1; // 0x10ee78
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 - 0x7fffeecb); // 0x10ee78
    *v3 = *v3 + (int32_t)v2;
    return v2 + 256 * a4 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x10ee91 - 0x10ee9e
int64_t function_10ee91(int64_t a1, int64_t a2, int64_t a3) {
    // 0x10ee91
    int64_t v1; // 0x10ee91
    *(char *)a3 = (char)v1 - (char)((uint64_t)v1 / 256);
    unknown_17dd689a(a1, a2, a3);
    return function_ffffffffe7c8ef49();
}

// Address range: 0x10eeac - 0x10eec6
int64_t function_10eeac(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)((a1 & 0xffffffff) - 0x17e05100); // 0x10eeaf
    *v1 = *v1 + ((char)a4 < (char)(a1 / 256) ? -0x5f0ea8fe : -0x5f0ea8ff);
    int64_t v2; // 0x10eeac
    return __asm_int1(v2 & 0xffffffff);
}

// Address range: 0x10eeca - 0x10eecb
int64_t function_10eeca(void) {
    // 0x10eeca
    int64_t result; // 0x10eeca
    return result;
}

// Address range: 0x10eedc - 0x10eee6
int64_t function_10eedc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result; // 0x10eedc
    if ((uint32_t)((int32_t)a4 + (int32_t)a3) >= 2) {
        result = function_10eeca();
    }
    // 0x10eee5
    return result;
}

// Address range: 0x10eef9 - 0x10ef1c
int64_t function_10eef9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x10eef9
    int64_t v1; // 0x10eef9
    int64_t v2 = v1;
    int64_t v3 = v1 + 0xa48301e8; // 0x10eefe
    int64_t * v4 = (int64_t *)(v1 + 0xe8587f6a & 0xffffffff); // 0x10ef05
    uint64_t v5 = *v4; // 0x10ef05
    *v4 = v5 / 0x8000000000000000 | 2 * v5;
    int32_t * v6 = (int32_t *)((v3 & 0xffffffff) - 73); // 0x10ef0d
    *v6 = *v6 + (int32_t)v3;
    int64_t v7 = -1 - (int32_t)a3 < (int32_t)v1 ? 90 : 89; // 0x10ef17
    return (v2 - v7) % 256 | v2 & 0xffffff00;
}

// Address range: 0x10efd9 - 0x10efe2
int64_t function_10efd9(void) {
    // 0x10efd9
    int64_t result; // 0x10efd9
    return result;
}

// Address range: 0x10f055 - 0x10f05b
int64_t function_10f055(void) {
    // 0x10f055
    int64_t result; // 0x10f055
    return result;
}

// Address range: 0x10f0bd - 0x10f0be
int64_t function_10f0bd(void) {
    // 0x10f0bd
    int64_t result; // 0x10f0bd
    return result;
}

// Address range: 0x10f10a - 0x10f1e4
int64_t function_10f10a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int32_t * v2 = (int32_t *)(a1 - 0x15b7521c); // 0x10f10a
    int64_t v3; // 0x10f10a
    int32_t v4 = *v2 + (int32_t)v3; // 0x10f10a
    unsigned char v5 = llvm_ctpop_i8((char)v4); // 0x10f10a
    *v2 = v4;
    if (v5 % 2 == 0) {
        function_10f0bd();
    }
    // 0x10f114
    unknown_4a736d1a();
    __asm_hlt();
    int64_t v6; // 0x10f10a
    int64_t v7 = v6;
    int64_t v8; // 0x10f10a
    int64_t v9 = v8;
    uint64_t v10 = a3 - a1 & 0xffffffff;
    int64_t * v11 = (int64_t *)v9; // 0x10f171
    *v11 = v1;
    *(char *)v10 = 108;
    *(int32_t *)a1 = (int32_t)*v11;
    bool v12; // 0x10f10a
    int64_t v13 = a1 + (v12 ? -4 : 4); // 0x10f175
    int64_t v14; // 0x10f10a
    *(char *)0x1e86c8c = *(char *)0x1e86c8c + (char)(v14 / 256);
    __asm_outsb((int16_t)v10, *(char *)&v1);
    int64_t v15 = unknown_ffffffffce1b917f(); // 0x10f179
    char v16 = *(char *)v13; // 0x10f186
    unsigned char v17 = v16 | *(char *)(v10 + 0x1e80099) ^ (char)(v10 / 256); // 0x10f186
    int64_t v18 = 256 * (int64_t)v17 | v10 & -0xff01; // 0x10f186
    int32_t * v19 = (int32_t *)v15; // 0x10f188
    *v19 = *v19 + (int32_t)v15;
    char * v20 = (char *)v15; // 0x10f18a
    *v20 = *v20 - 124;
    uint64_t v21 = unknown_12125396(); // 0x10f190
    char * v22 = (char *)(v21 + 5); // 0x10f195
    *v22 = *v22 + (char)(v21 / 256);
    unsigned char v23 = *(char *)v18; // 0x10f198
    while (v17 == v23) {
        int64_t v24 = v14 & 0xffffff00 | 199; // 0x10f184
        int64_t v25 = v7 - v24 + (int64_t)(v17 < v23); // 0x10f1a2
        int64_t v26 = v25 + v13 & 0xffffffff; // 0x10f1a4
        int64_t v27 = *v11; // 0x10f1a6
        int64_t v28 = ((v27 & (int64_t)&g1) != 0 ? -4 : 4) + v26; // 0x10f1a9
        v14 = 0xed717400;
        if (*(int32_t *)v26 != (int32_t)v24) {
            // 0x10f1ac
            return function_10f1f1(v28, v1, v18, 0x1e86c8c);
        }
        v7 = v25 & 0xffffffff;
        v9 += 8;
        v10 = v18;
        v11 = (int64_t *)v9;
        *v11 = v1;
        *(char *)v10 = 108;
        *(int32_t *)v28 = (int32_t)*v11;
        v13 = v28 + ((v27 & (int64_t)&g1) != 0 ? -4 : 4);
        *(char *)0x1e86c8c = *(char *)0x1e86c8c + (char)(v14 / 256);
        __asm_outsb((int16_t)v10, *(char *)&v1);
        v15 = unknown_ffffffffce1b917f();
        v16 = *(char *)v13;
        v17 = v16 | *(char *)(v10 + 0x1e80099) ^ (char)(v10 / 256);
        v18 = 256 * (int64_t)v17 | v10 & -0xff01;
        v19 = (int32_t *)v15;
        *v19 = *v19 + (int32_t)v15;
        v20 = (char *)v15;
        *v20 = *v20 - 124;
        v21 = unknown_12125396();
        v22 = (char *)(v21 + 5);
        *v22 = *v22 + (char)(v21 / 256);
        v23 = *(char *)v18;
    }
    int64_t v29 = v9 - 8; // 0x10f1b0
    *(int64_t *)v29 = v1;
    unknown_695bb8b8();
    *(int32_t *)0x91d07940 = *(int32_t *)0x91d07940 - (int32_t)v7;
    unsigned char v30 = *(char *)(v13 - 0x5668f065); // 0x10f1d4
    int32_t * v31 = (int32_t *)(v1 - 0x2d04d87f); // 0x10f1de
    *v31 = *v31 + (int32_t)v29;
    return v30 > (char)v10 ? 0xed717417 : 0xed717418;
}

// Address range: 0x10f1e6 - 0x10f1f1
int64_t function_10f1e6(int64_t a1) {
    // 0x10f1e6
    int64_t v1; // 0x10f1e6
    __asm_int3((int32_t)v1 + (int32_t)a1);
    return unknown_ffffffffcb068af2();
}

// Address range: 0x10f1f1 - 0x10f215
int64_t function_10f1f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x10f1f1
    __asm_int(-64);
    int64_t v1; // 0x10f1f1
    __asm_out(-109, (char)v1);
    int64_t v2 = unknown_1cbf2503(); // 0x10f1fd
    *(int32_t *)a2 = (int32_t)v1 ^ 0xc01e810;
    return v2 & 0x6b54 | 0xffff94ab;
}

// Address range: 0x10f239 - 0x10f24c
int64_t function_10f239(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_b53b63f(); // 0x10f239
    char * v1 = (char *)(a4 - 0x179d0e2e); // 0x10f241
    *v1 = *v1 + 1;
    return result;
}

// Address range: 0x10f250 - 0x10f2c2
int64_t function_10f250(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = unknown_ffffffffa8f9185d(); // 0x10f257
    int32_t * v3 = (int32_t *)(v2 + 20); // 0x10f27e
    int64_t v4; // 0x10f250
    *v3 = *v3 | (int32_t)v4;
    *(char *)a1 = (char)v2;
    bool v5; // 0x10f250
    int64_t v6 = v5 ? 0xffffffff : 1; // 0x10f281
    int64_t v7 = v2 + v4; // 0x10f285
    *(int32_t *)-0x17dd6172 = *(int32_t *)-0x17dd6172 + (int32_t)(v6 + a1);
    int32_t * v8 = (int32_t *)(a3 + 0x3d0e10d5); // 0x10f28d
    uint32_t v9 = *v8; // 0x10f28d
    uint32_t v10 = (int32_t)a4; // 0x10f28d
    uint32_t v11 = v9 + v10; // 0x10f28d
    *v8 = v11;
    __asm_out(24, (char)v7);
    int32_t * v12 = (int32_t *)((v7 & 0xffffffff) + 8); // 0x10f297
    *v12 = *v12 + 0xba801e8 + (int32_t)(v11 < v9);
    int64_t v13 = v1 & 0xffffffff; // 0x10f2a0
    int32_t * v14 = (int32_t *)(v13 - 62); // 0x10f2a3
    *v14 = 2 * *v14;
    uint32_t v15 = v10 % 32; // 0x10f2b2
    bool v16 = (int32_t)v1 < 0x8410001; // 0x10f2b2
    if (v15 != 0) {
        uint32_t v17 = *(int32_t *)&v1; // 0x10f2b2
        *(int32_t *)v13 = v17 >> v15;
        v16 = (v17 & 1 << v15 - 1) != 0;
    }
    char * v18 = (char *)(a4 - 0x4aa5c828); // 0x10f2b5
    *v18 = (char)v16 - (char)a4 + *v18;
    __asm_out_133((int16_t)a3 & -256 | 240, (char)v1);
    return v1 & 0x5c00013d;
}

// Address range: 0x10f32b - 0x10f32d
int64_t function_10f32b(int64_t a1, int64_t a2) {
    // 0x10f32b
    return a1 & 0xffffffff;
}

// Address range: 0x10f379 - 0x10f3be
int64_t function_10f379(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 73); // 0x10f379
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x10f379
    *(char *)a4 = *(char *)&v2 | 22;
    int32_t v3 = a1; // 0x10f393
    *(int32_t *)0x6c12db9a = *(int32_t *)0x6c12db9a + v3;
    int16_t v4 = a3; // 0x10f399
    int64_t v5; // 0x10f379
    __asm_outsb(v4, *(char *)&v5);
    __asm_outsd(v4, *(int32_t *)&v5);
    uint32_t v6 = *(int32_t *)-0x5dfe17ff4c0113c6; // 0x10f39b
    __asm_out(42, (char)v6 + 30);
    unknown_1abc76b2();
    bool v7; // 0x10f379
    int32_t * v8 = (int32_t *)(a2 + 65 + (v7 ? -4 : 4)); // 0x10f3b3
    *v8 = (int32_t)(v6 > 0xfa58eae1) + v3 + *v8;
    return unknown_6f1522bd();
}

// Address range: 0x2aed75 - 0x2aed97
int64_t function_2aed75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_610d09f4(); // 0x2aed75
    char * v2 = (char *)(v1 - 87); // 0x2aed7a
    *v2 = *v2 | (char)a4;
    unknown_ffffffffc088ab88();
    int64_t v3; // 0x2aed75
    int32_t v4 = *(int32_t *)&v3; // 0x2aed87
    *(int32_t *)a2 = (int32_t)((int32_t)v1 < 0x9cc62c8d) - (int32_t)a3 + v4;
    unknown_ffffffffc6397697();
    return __asm_sti();
}

// Address range: 0x2aedaf - 0x2aedb2
int64_t function_2aedaf(int64_t a1) {
    // 0x2aedaf
    int64_t v1; // 0x2aedaf
    return v1 | 245;
}

// Address range: 0x2aee70 - 0x2aee71
int64_t function_2aee70(int64_t a1) {
    // 0x2aee70
    int64_t result; // 0x2aee70
    return result;
}

// Address range: 0x2aee81 - 0x2aee84
int64_t function_2aee81(void) {
    // 0x2aee81
    int64_t result; // 0x2aee81
    return result;
}

// Address range: 0x2aee97 - 0x2aeebb
int64_t function_2aee97(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2aee97
    int64_t v1; // 0x2aee97
    unsigned char v2 = (char)v1;
    unsigned char v3 = 2 * v2; // 0x2aeea6
    *(char *)v1 = v3;
    int64_t v4 = v1 + 0x13d0000 + (int64_t)(v3 < v2); // 0x2aeea8
    char v5 = *(char *)(v4 + 6); // 0x2aeeae
    int64_t v6 = (v4 & 0xffffff00 | (int64_t)(v5 & (char)v4)) + 0x1012831a; // 0x2aeeb1
    int64_t v7; // 0x2aee97
    *(char *)a4 = *(char *)&v7 | (char)v6;
    return v6 & 0xffffffff;
}

// Address range: 0x2aef32 - 0x2aef33
int64_t function_2aef32(void) {
    // 0x2aef32
    int64_t result; // 0x2aef32
    return result;
}

// Address range: 0x2aef3f - 0x2aef40
int64_t function_2aef3f(void) {
    // 0x2aef3f
    int64_t result; // 0x2aef3f
    return result;
}

// Address range: 0x2aef4c - 0x2aef79
int64_t function_2aef4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2aef4c
    bool v1; // 0x2aef4c
    int64_t v2 = v1 ? -4 : 4; // 0x2aef4c
    char * v3 = (char *)(v2 + a2); // 0x2aef4e
    __asm_outsb((int16_t)a3, *v3);
    int64_t v4; // 0x2aef4c
    int64_t v5 = (int64_t)&v4; // bp-8, 0x2aef4f
    int64_t result; // 0x2aef4c
    if ((int32_t)result != (int32_t)result) {
        // 0x2aef52
        return result;
    }
    char * v6 = (char *)(v2 + a1); // 0x2aef56
    char v7 = *v6 | (char)a3; // 0x2aef56
    *v6 = v7;
    __asm_wait();
    __asm_in(-16);
    if (v7 == 0) {
        function_2aef3f();
    }
    // 0x2aef5d
    *v3 = (char)((result + (int64_t)&v5) / 256);
    int64_t v8 = unknown_ffffffffa3615e69(); // 0x2aef63
    return v8 & 0xff97dc19 | 0x6823e6;
}

// Address range: 0x2aef79 - 0x2aef86
int64_t function_2aef79(void) {
    // 0x2aef79
    bool v1; // 0x2aef79
    if (v1 || v1) {
        function_2aef79();
    }
    // 0x2aef80
    return __asm_iretd();
}

// Address range: 0x2aef90 - 0x2af011
int64_t function_2aef90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a3;
    int64_t v2; // 0x2aef90
    if ((int32_t)v2 > 0x24a0a643) {
        function_3ec7cbe1();
    }
    int32_t v3 = a1; // 0x2aef9b
    __asm_int3(v3);
    int64_t result = __asm_int3(v3); // 0x2aefa1
    int32_t * v4 = (int32_t *)(2 * a2 + a4); // 0x2aefa4
    int32_t v5 = *v4; // 0x2aefa4
    int32_t v6 = a2;
    int32_t v7 = v5 + v6; // 0x2aefa4
    *v4 = v7;
    if (((v7 ^ v5) & (v7 ^ v6)) >= 0) {
        // 0x2af00a
        return result;
    }
    int64_t v8 = v1; // 0x2aefa7
    int64_t v9; // 0x2aef90
    char * v10 = (char *)(v9 + 0x5500013d); // 0x2aefb0
    unsigned char v11 = *v10; // 0x2aefb0
    char v12 = v8; // 0x2aefb0
    unsigned char v13 = v11 + v12; // 0x2aefb0
    *v10 = v13;
    uint32_t v14 = *(int32_t *)&v9; // 0x2aefb6
    int64_t v15; // bp+16, 0x2aef90
    uint32_t v16 = (int32_t)(v13 < v11) | (int32_t)(int64_t)&v15; // 0x2aefb6
    int32_t v17 = v14 - v16; // 0x2aefb6
    unsigned char v18 = llvm_ctpop_i8((char)v17); // 0x2aefb6
    *(int32_t *)v9 = v17;
    int32_t v19 = v6; // 0x2aefb8
    bool v20 = v13 < v11 | v14 < v16; // 0x2aefb8
    if (v18 % 2 == 0) {
        int64_t v21 = (a8 & (int64_t)&g1) == 0 ? 4 : 0xfffffffc; // 0x2aefce
        uint32_t v22 = *(int32_t *)(v1 + 0x4e2cd9ee); // 0x2aefd0
        int64_t v23 = unknown_ffffffffc830d7dc(); // 0x2aefd6
        int64_t * v24 = (int64_t *)(a5 - 32); // 0x2aefdb
        *v24 = (int64_t)(v22 < (int32_t)v1) - a6 + *v24;
        int64_t v25 = v1; // 0x2aefdf
        v1 = v23 & 0xffffffff;
        int32_t * v26 = (int32_t *)(a1 + 102); // 0x2aefe4
        *v26 = *v26 + v3;
        v19 = v21 + a2;
        v20 = (int32_t)(v25 + v2) < 0x8f268801;
    }
    int64_t v27 = v8 & 0xffffffff; // 0x2aefa7
    *(char *)v27 = (char)v20 + v12 + *(char *)&v1;
    *(int32_t *)a1 = __asm_insd((int16_t)v1);
    unknown_ffffffffb707de01();
    *(int32_t *)v27 = v19;
    return __asm_in_134(-113);
}

// Address range: 0x2af0f6 - 0x2af105
int64_t function_2af0f6(int64_t a1, int64_t a2) {
    // 0x2af0f6
    unknown_3a98d8fc(a1, a2);
    float80_t v1; // 0x2af0f6
    *(int16_t *)a2 = (int16_t)v1;
    return function_ffffffff841ac485();
}

// Address range: 0x2af16c - 0x2af16f
int64_t function_2af16c(int64_t a1) {
    // 0x2af16c
    int64_t result; // 0x2af16c
    return result;
}
