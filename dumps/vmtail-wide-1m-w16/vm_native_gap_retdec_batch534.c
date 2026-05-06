/*
 * Targeted RetDec C for native executable gap queue batch 534.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x153f13-0x154113 rank=- name=- kind=- bytes=- uncovered=-
 *   0x154113-0x154313 rank=- name=- kind=- bytes=- uncovered=-
 *   0x154313-0x154513 rank=- name=- kind=- bytes=- uncovered=-
 *   0x154513-0x154713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x154713-0x154913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cd3ff-0x3cd5ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cd5ff-0x3cd7ff rank=- name=- kind=- bytes=- uncovered=-
 *   0x3cd7ff-0x3cd9ff rank=- name=- kind=- bytes=- uncovered=-
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
void __writegsdword(int64_t offset, uint32_t value);
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
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

int64_t function_153f13(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_153f30(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_153f86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_153fa5(void);
int64_t function_153fc4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_153fc8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_153fed(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_154012(int64_t a1, int64_t a2, int64_t a3);
int64_t function_154017(void);
int64_t function_15404f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_15415d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_1541f7(void);
int64_t function_154204(int64_t a1, int64_t a2, int64_t a3);
int64_t function_154234(void);
int64_t function_15424d(void);
int64_t function_154250(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1542c4(void);
int64_t function_1542db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_154313(void);
int64_t function_154324(void);
int64_t function_154354(void);
int64_t function_15435d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_15437f(int64_t a1, int64_t a2);
int64_t function_1543d4(void);
int64_t function_154417(int64_t a1);
int64_t function_154436(void);
int64_t function_154485(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1544b0(void);
int64_t function_154501(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_154532(void);
int64_t function_154545(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1545ea(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_154657(int64_t a1);
int64_t function_1546a4(void);
int64_t function_1546cf(void);
int64_t function_1546d0(void);
int64_t function_1546d9(void);
int64_t function_1546df(void);
int64_t function_1546e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int16_t a5, int64_t a6);
int64_t function_15479c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_154802(void);
int64_t function_15482f(int64_t a1);
int64_t function_154886(void);
int64_t function_154887(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1548a9(void);
int64_t function_2fedfc7b();
int64_t function_3cd3ff(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3cd464(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3cd5bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3cd6ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3cd821(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3cd989(void);
int64_t function_6aabf6dd();
int64_t function_c57b8();
int64_t function_ffffffffbc089ed9();
int64_t function_ffffffffd0a0c19e();
int64_t function_ffffffffff172d68();
int64_t function_ffffffffffc0a8d1();
int64_t unknown_14a6e7ba();
int64_t unknown_30412385();
int64_t unknown_5dd3f5f9();
int64_t unknown_6818d75b();
int64_t unknown_7310093a();
int64_t unknown_81bbd0();
int64_t unknown_ffffffff86345bb2();
int64_t unknown_ffffffff901b2fd0();
int64_t unknown_ffffffffa63b670e();
int64_t unknown_ffffffffce1fcf2f();
int64_t unknown_ffffffffd4ffe4c1();
int64_t unknown_fffffffffe8d37a3();

// Address range: 0x153f13 - 0x153f1d
int64_t function_153f13(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 47); // 0x153f13
    int64_t result; // 0x153f13
    *v1 = *v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x153f30 - 0x153f41
int64_t function_153f30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 0x5ffe17f3); // 0x153f30
    *v1 = *v1 + (int32_t)a4;
    return function_2fedfc7b();
}

// Address range: 0x153f86 - 0x153fa4
int64_t function_153f86(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x153f86
    bool v1; // 0x153f86
    if (a4 != 1 == v1) {
        // 0x153fc7
        int64_t result; // 0x153f86
        return result;
    }
    // 0x153f88
    return __asm_in(-51);
}

// Address range: 0x153fa5 - 0x153faa
int64_t function_153fa5(void) {
    // 0x153fa5
    return function_ffffffffbc089ed9();
}

// Address range: 0x153fc4 - 0x153fc7
int64_t function_153fc4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x153fc4
    int64_t result; // 0x153fc4
    __asm_out((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x153fc8 - 0x153fda
int64_t function_153fc8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x153fc8
    bool v1; // 0x153fc8
    *(char *)a3 = (char)v1;
    unknown_81bbd0();
    __asm_sti();
    __asm_wait();
    return __asm_in_133((int16_t)a3);
}

// Address range: 0x153fed - 0x154012
int64_t function_153fed(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = unknown_5dd3f5f9(); // 0x153fed
    int64_t v2; // 0x153fed
    unsigned char v3 = (char)v2;
    *(char *)(a3 & 0xffffffff) = v3 / 2 | 128 * v3;
    uint64_t v4 = a3 + 75; // 0x153ff7
    int64_t v5 = v4 % 256 | a3 & 0xffffff00; // 0x153ff7
    char * v6 = (char *)v5; // 0x154005
    *v6 = *v6 + (char)v4;
    int64_t v7; // 0x153fed
    *(char *)a4 = *(char *)&v7 + (char)(v1 / 256);
    int64_t v8; // 0x153fed
    *(int32_t *)a2 = *(int32_t *)&v8 ^ (int32_t)a4;
    return v5 + 0x1298000 & 0xffffffff;
}

// Address range: 0x154012 - 0x154016
int64_t function_154012(int64_t a1, int64_t a2, int64_t a3) {
    // 0x154012
    int64_t result; // 0x154012
    *(char *)a3 = (char)(result ^ (uint64_t)result / 256);
    return result;
}

// Address range: 0x154017 - 0x15402c
int64_t function_154017(void) {
    // 0x154017
    int64_t v1; // 0x154017
    return v1 & -256;
}

// Address range: 0x15404f - 0x154131
int64_t function_15404f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int64_t v2; // 0x15404f
    bool v3; // 0x15404f
    int64_t v4 = 2 * v2 | (int64_t)v3; // 0x15404f
    uint64_t result = v4 & 0xffffffff; // 0x15404f
    char v5 = *(char *)(a1 + 1 + v2); // 0x154051
    int64_t v6 = result / 256; // 0x154051
    int16_t v7 = a3; // 0x1540c0
    *(int32_t *)a1 = __asm_insd(v7);
    if (v6 < (int64_t)v5) {
        // 0x1540c3
        *(char *)v1 = __asm_insb(v7);
        __asm_out_134(v7, 0x10000 * (int32_t)v4 >> 16);
        return v2 & 0xffffffff;
    }
    // 0x15408f
    if (llvm_ctpop_i8(v5 - (char)v6) % 2 != 0) {
        // 0x154058
        return result;
    }
    unsigned char v8 = *(char *)&v1; // 0x154094
    int64_t v9 = v1 + (v3 ? -1 : 1); // 0x154094
    v1 = v9;
    char v10 = *(char *)0x64acc79e + (char)(v2 / 256); // 0x154097
    unsigned char v11 = llvm_ctpop_i8(v10); // 0x154097
    *(char *)0x64acc79e = v10;
    if (v11 % 2 == 0) {
        int32_t * v12 = (int32_t *)(v9 + 64); // 0x15409f
        *v12 = *v12 + (int32_t)v2;
        return result;
    }
    char v13 = *(char *)(a2 - 0x3cd828ff); // 0x154115
    int32_t v14 = v8 > (char)v4 ? -256 : 0; // 0x154115
    int64_t v15 = v9 - 96; // 0x15411b
    __readgsbyte(v15);
    __writegsbyte(v15, 0);
    int32_t v16 = *(int32_t *)0x4345775a; // 0x154120
    *(int32_t *)0x4345775a = v16 + (v14 | (int32_t)(v13 ^ (char)(v8 > (char)v4)));
    return v2 & 0xffffff00;
}

// Address range: 0x15415d - 0x15416c
int64_t function_15415d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x15415d
    int64_t v1; // 0x15415d
    int64_t v2 = v1;
    char * v3 = (char *)(v1 - 0xca93879); // 0x154164
    *v3 = *v3 ^ (char)(a3 / 256);
    return ((v2 + 11) % 256 | v2 & 0xffffff00) + 0xf8ea7581 & 0xffffffff;
}

// Address range: 0x1541f7 - 0x1541f8
int64_t function_1541f7(void) {
    // 0x1541f7
    int64_t result; // 0x1541f7
    return result;
}

// Address range: 0x154204 - 0x15420e
int64_t function_154204(int64_t a1, int64_t a2, int64_t a3) {
    // 0x154204
    int64_t v1; // 0x154204
    uint32_t v2 = (int32_t)v1;
    uint32_t v3 = (int32_t)v1; // 0x154204
    *(int32_t *)a1 = v2 - v3;
    if (v2 < v3) {
        function_1541f7();
    }
    // 0x154208
    return function_6aabf6dd();
}

// Address range: 0x154234 - 0x154235
int64_t function_154234(void) {
    // 0x154234
    int64_t result; // 0x154234
    return result;
}

// Address range: 0x15424d - 0x154250
int64_t function_15424d(void) {
    // 0x15424d
    return function_154234();
}

// Address range: 0x154250 - 0x154270
int64_t function_154250(int64_t a1, int64_t a2, int64_t a3) {
    // 0x154250
    int64_t v1; // 0x154250
    int32_t v2 = *(int32_t *)(v1 + 0xe3ac452) + (int32_t)v1; // 0x154250
    *(int32_t *)0x4f040bd05088640a = (v2 + 124) % 256 | v2 & -256;
    return function_ffffffffffc0a8d1();
}

// Address range: 0x1542c4 - 0x1542c5
int64_t function_1542c4(void) {
    // 0x1542c4
    int64_t result; // 0x1542c4
    return result;
}

// Address range: 0x1542db - 0x1542e5
int64_t function_1542db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x1542db
    bool v2; // 0x1542db
    bool v3; // 0x1542db
    if (v1 != 0) {
        int32_t * v4 = (int32_t *)(a3 - 116); // 0x1542db
        uint32_t v5 = *v4; // 0x1542db
        int32_t v6 = v5 >> v1 | v5 << 32 - v1; // 0x1542db
        *v4 = v6;
        v2 = v1 == 1 ? v6 / 0x40000000 % 2 != (int32_t)(v6 < 0) : v3;
    }
    int64_t result; // 0x1542db
    if (v3 == v2 == !v3) {
        result = function_1542c4();
    }
    // 0x1542e0
    return result;
}

// Address range: 0x154313 - 0x154314
int64_t function_154313(void) {
    // 0x154313
    int64_t result; // 0x154313
    return result;
}

// Address range: 0x154324 - 0x154326
int64_t function_154324(void) {
    // 0x154324
    int64_t v1; // 0x154324
    return function_15435d(v1, v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x154354 - 0x15435d
int64_t function_154354(void) {
    // 0x154354
    int64_t result; // 0x154354
    char * v1 = (char *)(2 * result - 0x5c5459c4); // 0x154354
    *v1 = *v1 + (char)(result / 256);
    return result;
}

// Address range: 0x15435d - 0x15437b
int64_t function_15435d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x15435d
    int64_t v1; // 0x15435d
    int64_t v2 = v1 | v1;
    char * v3 = (char *)(a4 - 15); // 0x154366
    *v3 = *v3 + (char)((uint64_t)v1 / 256);
    return (v2 + 152) % 256 | v2 & 0xffffff00;
}

// Address range: 0x15437f - 0x154386
int64_t function_15437f(int64_t a1, int64_t a2) {
    // 0x15437f
    int64_t v1; // 0x15437f
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a1;
    __asm_wait();
    return function_154313();
}

// Address range: 0x1543d4 - 0x1543d5
int64_t function_1543d4(void) {
    // 0x1543d4
    int64_t result; // 0x1543d4
    return result;
}

// Address range: 0x154417 - 0x154418
int64_t function_154417(int64_t a1) {
    // 0x154417
    int64_t result; // 0x154417
    return result;
}

// Address range: 0x154436 - 0x154438
int64_t function_154436(void) {
    // 0x154436
    return function_1543d4();
}

// Address range: 0x154485 - 0x154491
int64_t function_154485(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 + 0x508e50e); // 0x154485
    unsigned char v2 = *v1; // 0x154485
    bool v3; // 0x154485
    *v1 = 64 * v2 | v2 / 8 | 32 * (char)(bool)v3;
    return function_ffffffffff172d68();
}

// Address range: 0x1544b0 - 0x1544c2
int64_t function_1544b0(void) {
    // 0x1544b0
    int64_t v1; // 0x1544b0
    uint64_t v2 = (v1 + 0xffa3) / 256 + v1; // 0x1544b5
    char * v3 = (char *)((v1 & -0xff01) + 18); // 0x1544bd
    *v3 = *v3 + (char)v2;
    return 0x10000 * (int32_t)(v2 % 256 | v1 & 0xff00) >> 16;
}

// Address range: 0x154501 - 0x154508
int64_t function_154501(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = __asm_hlt(a1, a2, a3, a4, a5); // 0x154501
    int32_t * v1 = (int32_t *)(result + 105); // 0x154504
    int64_t v2; // 0x154501
    *v1 = *v1 + (int32_t)v2;
    return result;
}

// Address range: 0x154532 - 0x154535
int64_t function_154532(void) {
    // 0x154532
    int64_t result; // 0x154532
    return result;
}

// Address range: 0x154545 - 0x154552
int64_t function_154545(int64_t a1, int64_t a2, int64_t a3) {
    // 0x154545
    int64_t v1; // 0x154545
    int64_t result = v1;
    *(int32_t *)result = -0x17acd775 * *(int32_t *)(a3 + 26) + (int32_t)result;
    return result;
}

// Address range: 0x1545ea - 0x1545fd
int64_t function_1545ea(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a5 - 9); // 0x1545ea
    int64_t v2; // 0x1545ea
    bool v3; // 0x1545ea
    *v1 = (char)v3 + (char)v2 + *v1;
    int32_t * v4 = (int32_t *)(a3 + 0x7a9ada3a); // 0x1545ee
    *v4 = *v4 | 68;
    int64_t result = v2 | a4 / 256 % 256; // 0x1545f6
    int32_t * v5 = (int32_t *)result; // 0x1545f8
    *v5 = *v5 + (int32_t)v2;
    return result;
}

// Address range: 0x154657 - 0x15465a
int64_t function_154657(int64_t a1) {
    // 0x154657
    int64_t result; // 0x154657
    return result;
}

// Address range: 0x1546a4 - 0x1546a5
int64_t function_1546a4(void) {
    // 0x1546a4
    int64_t result; // 0x1546a4
    return result;
}

// Address range: 0x1546cf - 0x1546d0
int64_t function_1546cf(void) {
    // 0x1546cf
    int64_t result; // 0x1546cf
    return result;
}

// Address range: 0x1546d0 - 0x1546d1
int64_t function_1546d0(void) {
    // 0x1546d0
    int64_t result; // 0x1546d0
    return result;
}

// Address range: 0x1546d9 - 0x1546da
int64_t function_1546d9(void) {
    // 0x1546d9
    int64_t result; // 0x1546d9
    return result;
}

// Address range: 0x1546df - 0x1546e0
int64_t function_1546df(void) {
    // 0x1546df
    int64_t result; // 0x1546df
    return result;
}

// Address range: 0x1546e4 - 0x15479c
int64_t function_1546e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int16_t a5, int64_t a6) {
    // 0x1546e4
    int64_t v1; // 0x1546e4
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4; // 0x1546e4
    bool v5; // 0x1546e4
    if (!v5 && !v5) {
        v4 = function_1546d0();
    }
    int32_t v6 = v1; // 0x1546e8
    *(int32_t *)v2 = (int32_t)v2 + v6;
    __asm_out_134((int16_t)a3, (int32_t)v4);
    int32_t * v7 = (int32_t *)(a3 - 0x78e652bb); // 0x1546fe
    uint32_t v8 = *v7; // 0x1546fe
    uint32_t v9 = v8 + (int32_t)v3; // 0x1546fe
    *v7 = v9;
    __asm_hlt((int64_t)&g1, (int64_t)&g1, (int64_t)&g1, (int64_t)&g1, (int64_t)&g1);
    int64_t v10 = unknown_ffffffffa63b670e(); // 0x15470d
    if (v9 >= v8 && v9 != 0) {
        v10 = function_1546cf();
    }
    int64_t v11 = a5; // 0x154707
    int64_t v12 = v10 + 0xe8124a3a; // 0x15470f
    int32_t * v13 = (int32_t *)(v11 - 104); // 0x154714
    int32_t v14 = *v13; // 0x154714
    int32_t v15 = v12; // 0x154714
    int32_t v16 = v14 + v15; // 0x154714
    *v13 = v16;
    int64_t v17 = v12 & 0xffffffff; // 0x154717
    if (((v16 ^ v14) & (v16 ^ v15)) >= 0) {
        v17 = function_1546df();
    }
    char * v18 = (char *)(v11 - 0x13fe17b6); // 0x15471b
    *v18 = *v18 & 120;
    *(int32_t *)a1 = (int32_t)unknown_ffffffffce1fcf2f();
    int64_t v19 = (v5 ? -4 : 4) + a1; // 0x154733
    unknown_7310093a(v19);
    *(int32_t *)(v1 + 97) = (int32_t)v1;
    if ((v1 + 0x7b940570 & 0xffffffff) == 0) {
        function_1546d9();
    }
    char * v20 = (char *)(v19 + 0x2a5f3a04); // 0x15474f
    *v20 = *v20 - 108;
    int64_t v21 = unknown_6818d75b(v19 + 4); // 0x154755
    int32_t * v22 = (int32_t *)(v1 - 0x7fffe9ce); // 0x154761
    *v22 = *v22 - 0x3c1d976c;
    char * v23 = (char *)(v21 - 21); // 0x154767
    *v23 = *v23 + (char)v21;
    *(int32_t *)0x112e32c94 = *(int32_t *)0x112e32c94 + v6;
    __asm_outsb((int16_t)(v17 / 256 % 256 | a3), *(char *)&v3);
    unknown_30412385();
    __asm_int3(2 * (int32_t)v19 + 16, a6);
    return function_ffffffffd0a0c19e();
}

// Address range: 0x15479c - 0x1547d7
int64_t function_15479c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x15479c
    bool v1; // 0x15479c
    int64_t v2 = (v1 ? -1 : 1) + a1; // 0x15479c
    uint64_t v3 = unknown_fffffffffe8d37a3(v2); // 0x15479d
    int64_t v4 = v1 ? -4 : 4; // 0x1547a2
    int64_t v5; // 0x15479c
    unsigned char v6 = *(char *)(v3 % 256 + v5); // 0x1547a3
    __asm_outsd((int16_t)a3, *(int32_t *)(v4 + a2));
    int64_t v7 = unknown_ffffffff86345bb2(); // 0x1547ac
    char v8 = __asm_insb((int16_t)(v3 & 0xff00 | (int64_t)(v6 + 26))); // 0x1547b1
    *(char *)(v2 + v4) = v8;
    char * v9 = (char *)(v7 + 35); // 0x1547b2
    *v9 = (char)(v6 < 230) + (char)(v5 / 256) + *v9;
    int32_t * v10 = (int32_t *)(a4 + 0x1ec5b14d); // 0x1547b5
    *v10 = *v10 + (int32_t)v5;
    unknown_ffffffffd4ffe4c1();
    unknown_ffffffff901b2fd0();
    return 0x8792d7ea;
}

// Address range: 0x154802 - 0x154805
int64_t function_154802(void) {
    // 0x154802
    int64_t result; // 0x154802
    return result;
}

// Address range: 0x15482f - 0x154832
int64_t function_15482f(int64_t a1) {
    // 0x15482f
    int64_t result; // 0x15482f
    return result;
}

// Address range: 0x154886 - 0x154887
int64_t function_154886(void) {
    // 0x154886
    int64_t result; // 0x154886
    return result;
}

// Address range: 0x154887 - 0x1548a8
int64_t function_154887(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_14a6e7ba(); // 0x154887
    char * v2 = (char *)(a2 - 86); // 0x154893
    *v2 = *v2 + (char)((v1 + 0x614f) / 256);
    int64_t v3; // 0x154887
    *(char *)a4 = *(char *)&v3 - 1;
    char v4 = *(char *)0x21d1c2a1; // 0x15489a
    int64_t v5; // 0x154887
    *(char *)0x21d1c2a1 = v4 + (char)((uint64_t)v5 / 256);
    return function_154886();
}

// Address range: 0x1548a9 - 0x1548ae
int64_t function_1548a9(void) {
    // 0x1548a9
    int64_t result; // 0x1548a9
    return result;
}

// Address range: 0x3cd3ff - 0x3cd464
int64_t function_3cd3ff(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3cd3ff
    int64_t v1; // 0x3cd3ff
    return function_c57b8(a1, v1, v1, v1, v1, v1, v1);
}

// Address range: 0x3cd464 - 0x3cd5bb
int64_t function_3cd464(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x3cb638; // bp-24, 0x3cd4b0
    int64_t v2; // bp-48, 0x3cd464
    v2 = (int64_t)&v2;
    int64_t v3 = (int64_t)&v1; // 0x3cd580
    *(int64_t *)(v3 - 8) = 0x3cb638;
    *(int64_t *)(v3 - 16) = v3;
    int64_t v4; // 0x3cd464
    return function_c57b8(a1, a2, v4, a4, v4, v4, a5);
}

// Address range: 0x3cd5bb - 0x3cd6ea
int64_t function_3cd5bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x35435de2; // bp-40, 0x3cd610
    int64_t v2 = (int64_t)&v1; // 0x3cd646
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x3cd64e
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x3cd64e
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x3cd652
    *v5 = v3;
    *v4 = 0x34106690;
    bool v6; // 0x3cd5bb
    *(int64_t *)(v2 - 24) = 0x4000 * (int64_t)(bool)v6 | 2048 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 128 * (int64_t)v6 | 64 * (int64_t)v6 | 16 * (int64_t)v6 | (int64_t)v6 | 4 * (int64_t)v6 | 2;
    *(int64_t *)(v2 + 8) = *v4;
    *(int64_t *)(v2 + 32) = v3;
    *v5 = a5;
    *v5 = v2;
    *v4 = v1;
    *v5 = v1;
    return function_c57b8(a1, a2, a3, a4, *v5, a6, v1);
}

// Address range: 0x3cd6ea - 0x3cd821
int64_t function_3cd6ea(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3cd6ea
    int64_t v1; // 0x3cd6ea
    return function_c57b8(a1, v1, a3, a4, a5, a6, 0x77d88842);
}

// Address range: 0x3cd821 - 0x3cd97b
int64_t function_3cd821(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3cd821
    int64_t v1; // 0x3cd821
    bool v2; // 0x3cd821
    return function_c57b8(a1, a2, a3, a4, a5, v1, 0x4000 * (int64_t)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x3cd989 - 0x3cd98b
int64_t function_3cd989(void) {
    // 0x3cd989
    int64_t result; // 0x3cd989
    return result;
}
