/*
 * Targeted RetDec C for native executable gap queue batch 441.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x41ec1f-0x41ee1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x41ee1f-0x41f01f rank=- name=- kind=- bytes=- uncovered=-
 *   0x41f01f-0x41f21f rank=- name=- kind=- bytes=- uncovered=-
 *   0x41f21f-0x41f41f rank=- name=- kind=- bytes=- uncovered=-
 *   0x41f41f-0x41f61f rank=- name=- kind=- bytes=- uncovered=-
 *   0x43dc67-0x43de67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43e067-0x43e267 rank=- name=- kind=- bytes=- uncovered=-
 *   0x462434-0x462634 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
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

int64_t function_41ec02();
int64_t function_41ec1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41ec4e(int64_t a1);
int64_t function_41ed1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_41ee26(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41ee72(void);
int64_t function_41ee98(int64_t a1);
int64_t function_41eecd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_41ef59(int64_t a1);
int64_t function_41eff7(void);
int64_t function_41f017(void);
int64_t function_41f029(int64_t a1);
int64_t function_41f065(void);
int64_t function_41f08f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41f09d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_41f113(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41f138(void);
int64_t function_41f185(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41f1ec(void);
int64_t function_41f215(void);
int64_t function_41f2e5(void);
int64_t function_41f313(void);
int64_t function_41f357(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_41f386(void);
int64_t function_41f3c8(void);
int64_t function_41f40d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41f434(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_41f456(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_41f45a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_41f505(void);
int64_t function_41f535(void);
int64_t function_41f564(void);
int64_t function_41f5b2(void);
int64_t function_43dc5f();
int64_t function_43dc67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_43dc7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43dca2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43dcb1(void);
int64_t function_43dcb8(void);
int64_t function_43dcb9(void);
int64_t function_43dcc8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43dcde(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5);
int64_t function_43dcfc(void);
int64_t function_43dd10(int64_t a1);
int64_t function_43dd39(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_43dd80(void);
int64_t function_43ddde(void);
int64_t function_43de08(int64_t a1);
int64_t function_43de14(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_43de2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43de39(void);
int64_t function_43de47(void);
int64_t function_43e067(void);
int64_t function_43e07f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_43e13d(void);
int64_t function_43e150(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43e175(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43e18d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_43e204(void);
int64_t function_43e241(int64_t a1, int64_t a2);
int64_t function_462434(void);
int64_t function_46246a(void);
int64_t function_462572(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4625ac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4625df(void);
int64_t function_4625f4(void);
int64_t function_46261c(void);
int64_t function_4e1852f6();
int64_t function_4f34a4ae();
int64_t function_ffffffffba406b02();
int64_t function_ffffffffbc9bcebd();
int64_t function_ffffffffcb5ce367();
int64_t function_ffffffffe0cc4999();

// Address range: 0x41ec1f - 0x41ec2a
int64_t function_41ec1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41ec1f
    bool v1; // 0x41ec1f
    if (v1 || v1) {
        function_41ec02();
    }
    int16_t v2 = a3; // 0x41ec21
    *(int32_t *)a1 = __asm_insd(v2);
    __asm_in(v2);
    return a1 & 0xffffffff;
}

// Address range: 0x41ec4e - 0x41ec59
int64_t function_41ec4e(int64_t a1) {
    // 0x41ec4e
    int64_t v1; // 0x41ec4e
    bool v2; // 0x41ec4e
    return v1 + 0x39b59058 + (int64_t)v2 & 0xffffffff;
}

// Address range: 0x41ed1d - 0x41ee04
int64_t function_41ed1d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x41ed1d
    int64_t result; // 0x41ed1d
    return result;
}

// Address range: 0x41ee26 - 0x41ee30
int64_t function_41ee26(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41ee26
    int64_t v1; // 0x41ee26
    bool v2; // 0x41ee26
    return function_41ee98(v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512);
}

// Address range: 0x41ee72 - 0x41ee76
int64_t function_41ee72(void) {
    // 0x41ee72
    int64_t v1; // bp-93, 0x41ee72
    return (int64_t)&v1;
}

// Address range: 0x41ee98 - 0x41ee9b
int64_t function_41ee98(int64_t a1) {
    // 0x41ee98
    int64_t result; // 0x41ee98
    return result;
}

// Address range: 0x41eecd - 0x41ef54
int64_t function_41eecd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    bool v2; // 0x41eecd
    int64_t v3; // 0x41eecd
    if (v2) {
        // 0x41ef4a
        return (v3 | 0x7c591161) + 0xc4234b3d & 0xc7ffffbe;
    }
    // 0x41eecf
    __asm_outsd((int16_t)a3, (int32_t)a2);
    if (!v2 && !v2) {
        // 0x41eed3
        return a3 & 0xffffffff;
    }
    int16_t v4 = v3; // 0x41eed5
    int32_t v5 = __asm_in_133(v4); // 0x41eed5
    if (v2) {
        // 0x41eed8
        return (int64_t)(96 * *(int32_t *)(v3 + 2 * a1));
    }
    int64_t v6 = v3 & 0xffffffff; // 0x41eed0
    *(int32_t *)-0x3c1f8e69daabc3ff = 256 * (16 * (int32_t)v2 | 64 * (int32_t)v2 | (int32_t)v2 | 4 * (int32_t)v2) | v5 & -0xff01 | 512;
    int32_t * v7 = (int32_t *)(v3 + 0x1ad30f19); // 0x41eef5
    *v7 = *v7 | (int32_t)v3;
    char * v8 = (char *)(2 * a1 + 5 + v3); // 0x41eefe
    unsigned char v9 = *v8; // 0x41eefe
    *v8 = v9 - 89;
    unsigned char v10 = (char)(v3 / 256); // 0x41ef03
    char v11 = v9 > 88; // 0x41ef03
    unsigned char v12 = v11 + (char)(v3 / 256); // 0x41ef03
    char v13 = v10 - v12; // 0x41ef03
    bool v14 = v9 > 88 ? v12 != -1 | v13 - v11 > v10 : v12 > v10; // 0x41ef03
    *(int32_t *)a1 = *(int32_t *)&v1;
    int64_t v15 = v2 ? -4 : 4; // 0x41ef07
    int32_t * v16 = (int32_t *)(v3 - 79); // 0x41ef09
    *v16 = *v16 - (int32_t)a6 + (int32_t)v14;
    float80_t v17; // 0x41eecd
    *(int32_t *)(v6 - 0x5eedc5ce) = (int32_t)((float80_t)(float64_t)a4 - v17);
    char v18 = *(char *)(v6 + 109); // 0x41ef1d
    *(float80_t *)(v6 + 6) = __asm_fbstp(v17);
    __asm_outsb(v4, *(char *)(v1 + 2 * v15));
    char * v19 = (char *)(8 * (v15 + a1) + 107 + (256 * (int64_t)(v18 & (char)(a4 / 256)) | a4 & -0xff01)); // 0x41ef2c
    *v19 = *v19 + v13;
    return (int64_t)(*(int32_t *)-0x4b851124d1a3726b - 0x662fc86e);
}

// Address range: 0x41ef59 - 0x41ef5c
int64_t function_41ef59(int64_t a1) {
    // 0x41ef59
    int64_t result; // 0x41ef59
    return result;
}

// Address range: 0x41eff7 - 0x41eff8
int64_t function_41eff7(void) {
    // 0x41eff7
    int64_t result; // 0x41eff7
    return result;
}

// Address range: 0x41f017 - 0x41f019
int64_t function_41f017(void) {
    // 0x41f017
    int64_t result; // 0x41f017
    return result;
}

// Address range: 0x41f029 - 0x41f02c
int64_t function_41f029(int64_t a1) {
    // 0x41f029
    int64_t result; // 0x41f029
    return result;
}

// Address range: 0x41f065 - 0x41f067
int64_t function_41f065(void) {
    // 0x41f065
    return function_41eff7();
}

// Address range: 0x41f08f - 0x41f093
int64_t function_41f08f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41f08f
    int64_t result; // 0x41f08f
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x41f09d - 0x41f112
int64_t function_41f09d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x41f09d
    __asm_fbld(*(float80_t *)(a3 - 0x243af1db));
    int64_t v1; // 0x41f09d
    int64_t v2 = v1 | (int64_t)&g2; // 0x41f0f2
    bool v3; // 0x41f09d
    int64_t v4 = v2 & -0xff01 | 256 * (64 * (int64_t)v3 | 128 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3) | 512; // 0x41f0f4
    *(char *)a1 = (char)a1 - (char)(a4 / 256) + (char)v3;
    int64_t v5; // 0x41f09d
    *(int32_t *)v5 = *(int32_t *)&v5 & (int32_t)v4;
    uint32_t v6 = (*(int32_t *)v4 ^ (int32_t)a4) - 0x1dbd28d; // 0x41f0fe
    unsigned char v7 = llvm_ctpop_i8((char)v6); // 0x41f0fe
    int64_t result = v6; // 0x41f0fe
    if (v7 % 2 != 0) {
        // 0x41f157
        return result;
    }
    char * v8 = (char *)result; // 0x41f105
    *v8 = *v8 - (char)v2;
    int32_t * v9 = (int32_t *)(a1 + 0x7bca7c8f + 2 * a3); // 0x41f107
    *v9 = *v9 | (int32_t)v5;
    return result;
}

// Address range: 0x41f113 - 0x41f127
int64_t function_41f113(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = a2 & 0x95769fe6 | 0x6a896019; // 0x41f11b
    char v2 = *(char *)(a4 + 22); // 0x41f120
    return 256 * (int64_t)(v2 | (char)(v1 / 256)) | v1 & 0xffff00ff;
}

// Address range: 0x41f138 - 0x41f13c
int64_t function_41f138(void) {
    // 0x41f138
    int64_t v1; // 0x41f138
    return function_41f185(v1, v1, v1, v1);
}

// Address range: 0x41f185 - 0x41f1a8
int64_t function_41f185(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41f185
    int64_t v1; // 0x41f185
    int32_t * v2 = (int32_t *)(8 * a1 + 113 + v1); // 0x41f185
    uint32_t v3 = *v2; // 0x41f185
    *v2 = v3 / 0x8000000 | 32 * v3;
    char * v4 = (char *)(v1 + 0x38174dde); // 0x41f18f
    *v4 = *v4 + (char)v1;
    char * v5 = (char *)(2 * (int64_t)((int32_t)v1 >> 31) + a4); // 0x41f198
    *v5 = *v5 + (char)((int64_t)&g1 >> 8);
    return v1 + 0xdb6564db & 0xffffffff;
}

// Address range: 0x41f1ec - 0x41f1ef
int64_t function_41f1ec(void) {
    // 0x41f1ec
    int64_t result; // 0x41f1ec
    return result;
}

// Address range: 0x41f215 - 0x41f216
int64_t function_41f215(void) {
    // 0x41f215
    int64_t result; // 0x41f215
    return result;
}

// Address range: 0x41f2e5 - 0x41f2e6
int64_t function_41f2e5(void) {
    // 0x41f2e5
    int64_t result; // 0x41f2e5
    return result;
}

// Address range: 0x41f313 - 0x41f314
int64_t function_41f313(void) {
    // 0x41f313
    int64_t result; // 0x41f313
    return result;
}

// Address range: 0x41f357 - 0x41f380
int64_t function_41f357(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x41f357
    int64_t v1; // 0x41f357
    bool v2; // 0x41f357
    *(char *)a2 = (char)(v1 - (v2 ? 238 : 237) | v1);
    int64_t v3; // 0x41f357
    uint32_t v4 = *(int32_t *)&v3; // 0x41f35e
    int64_t v5 = (v2 ? -4 : 4) + a1; // 0x41f35e
    v3 = v5;
    int64_t result; // 0x41f357
    int64_t v6; // 0x41f357
    if (*(int32_t *)&v6 > v4) {
        // 0x41f361
        result = function_41f313();
    } else {
        // 0x41f361
        result = function_41f2e5();
    }
    // 0x41f363
    if (a4 != 1) {
        // 0x41f388
        return result;
    }
    // 0x41f366
    *(char *)-89 = *(char *)-89 ^ (char)(a3 / 256);
    *(char *)v5 = (char)result;
    unsigned char v7 = *(char *)0x2f4494581f620721; // 0x41f36e
    int64_t v8 = result & -256; // 0x41f36e
    char * v9 = (char *)(v8 | (int64_t)v7); // 0x41f377
    *v9 = *v9 + v7;
    return v8 | (int64_t)(v7 & 47);
}

// Address range: 0x41f386 - 0x41f388
int64_t function_41f386(void) {
    // 0x41f386
    int64_t result; // 0x41f386
    return result;
}

// Address range: 0x41f3c8 - 0x41f3c9
int64_t function_41f3c8(void) {
    // 0x41f3c8
    int64_t result; // 0x41f3c8
    return result;
}

// Address range: 0x41f40d - 0x41f415
int64_t function_41f40d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41f40d
    return function_ffffffffcb5ce367();
}

// Address range: 0x41f434 - 0x41f43f
int64_t function_41f434(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41f434
    float80_t v1; // 0x41f434
    *(int64_t *)a1 = (int64_t)v1;
    int64_t result; // 0x41f434
    return result;
}

// Address range: 0x41f456 - 0x41f459
int64_t function_41f456(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x41f456
    int64_t result; // 0x41f456
    *(char *)a3 = (char)result + (char)(a4 / 256);
    return result;
}

// Address range: 0x41f45a - 0x41f4c9
int64_t function_41f45a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    bool v3; // 0x41f45a
    if (!v3) {
        // 0x41f45c
        int64_t result; // 0x41f45a
        return result;
    }
    char v4 = a3; // 0x41f4bf
    int64_t v5; // 0x41f45a
    unsigned char v6 = *(char *)(v5 + 0x4954592c); // 0x41f4bf
    int64_t result2 = 0x10000 * (int32_t)v5 >> 16; // 0x41f4c6
    if (v6 >= v4) {
        // 0x41f45c
        return result2;
    }
    char v7 = v4 - v6; // 0x41f4bf
    unsigned char v8 = llvm_ctpop_i8(v7); // 0x41f4bf
    unsigned char v9 = *(char *)0x7f52a40e612b48a0; // 0x41f49c
    int64_t v10 = result2 & 0xffffff00; // 0x41f49c
    int64_t v11 = 0x4000 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 64 * (int64_t)(v7 == 0) | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v4 % 16 - v6 % 16 > 15) | 4 * (int64_t)(v8 % 2 == 0) | 2048 * (int64_t)(((v7 ^ v4) & (v6 ^ v4)) < 0) | 2; // bp-8, 0x41f4a5
    char * v12 = (char *)(4 * (v10 | (int64_t)v9) + v5); // 0x41f4a8
    *v12 = *v12 + v9;
    int64_t v13; // 0x41f45a
    int32_t v14 = *(int32_t *)&v13; // 0x41f4ab
    *(int32_t *)v13 = v14 ^ (int32_t)(int64_t)&v11;
    uint32_t v15 = *(int32_t *)&v2; // 0x41f4ad
    char v16 = *(char *)(v2 + (v3 ? -4 : 4)); // 0x41f4ae
    return v10 | (int64_t)(v16 + v9 + (char)(*(int32_t *)&v1 < v15));
}

// Address range: 0x41f505 - 0x41f506
int64_t function_41f505(void) {
    // 0x41f505
    int64_t result; // 0x41f505
    return result;
}

// Address range: 0x41f535 - 0x41f53d
int64_t function_41f535(void) {
    // 0x41f535
    int64_t result; // 0x41f535
    return result;
}

// Address range: 0x41f564 - 0x41f569
int64_t function_41f564(void) {
    // 0x41f564
    return function_ffffffffbc9bcebd();
}

// Address range: 0x41f5b2 - 0x41f5b6
int64_t function_41f5b2(void) {
    // 0x41f5b2
    int64_t result; // 0x41f5b2
    return result;
}

// Address range: 0x43dc67 - 0x43dc7a
int64_t function_43dc67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a6 - 113); // 0x43dc67
    int64_t v2; // 0x43dc67
    int64_t v3 = *v1 & v2; // 0x43dc67
    *v1 = v3;
    int64_t result; // 0x43dc67
    if (v3 >= 0) {
        result = function_43dc5f();
    }
    int32_t * v4 = (int32_t *)(a1 + 0x762e5d75); // 0x43dc6d
    int32_t v5 = *v4 + (int32_t)a2; // 0x43dc6d
    *v4 = v5;
    if (v5 != 0) {
        // 0x43dca7
        return result;
    }
    // 0x43dc78
    return __asm_hlt();
}

// Address range: 0x43dc7c - 0x43dc80
int64_t function_43dc7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4;
    unsigned char v2 = v1 % 32; // 0x43dc7c
    if (v2 != 0) {
        bool v3; // 0x43dc7c
        *(char *)a4 = v1 >> v2 | (char)((int16_t)a4 % 256 << (int16_t)(9 - v2)) | (char)(bool)v3 << 8 - v2;
    }
    return function_43dcc8(a1, a2, a3);
}

// Address range: 0x43dca2 - 0x43dca7
int64_t function_43dca2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43dca2
    int64_t result; // 0x43dca2
    return result;
}

// Address range: 0x43dcb1 - 0x43dcb2
int64_t function_43dcb1(void) {
    // 0x43dcb1
    int64_t result; // 0x43dcb1
    return result;
}

// Address range: 0x43dcb8 - 0x43dcb9
int64_t function_43dcb8(void) {
    // 0x43dcb8
    int64_t result; // 0x43dcb8
    return result;
}

// Address range: 0x43dcb9 - 0x43dcbb
int64_t function_43dcb9(void) {
    // 0x43dcb9
    int64_t v1; // 0x43dcb9
    return function_43dd39(v1, v1, v1, v1, (int64_t)&g4);
}

// Address range: 0x43dcc8 - 0x43dcd7
int64_t function_43dcc8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x43dcc8
    int64_t v1; // 0x43dcc8
    int64_t v2 = v1 % 256 | v1; // 0x43dcca
    int32_t * v3 = (int32_t *)(v2 - 49); // 0x43dcce
    uint32_t v4 = *v3; // 0x43dcce
    *v3 = v4 / 0x8000000 | 32 * v4;
    return v1 & -256 | (int64_t)*(char *)v2;
}

// Address range: 0x43dcde - 0x43dcfc
int64_t function_43dcde(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5) {
    if (a4 == 0) {
        function_43dcb1();
    }
    int64_t v1 = __asm_hlt() ^ a4 % 256; // 0x43dceb
    char * v2 = (char *)v1; // 0x43dcf3
    char v3 = *v2 + (char)(a5 / 256); // 0x43dcf3
    unsigned char v4 = llvm_ctpop_i8(v3); // 0x43dcf3
    *v2 = v3;
    int64_t result = 0x10000 * (int32_t)v1 >> 16; // 0x43dcf7
    if (v4 % 2 == 0) {
        result = function_43dcb8();
    }
    // 0x43dcf9
    return result;
}

// Address range: 0x43dcfc - 0x43dcff
int64_t function_43dcfc(void) {
    // 0x43dcfc
    int64_t result; // 0x43dcfc
    return result;
}

// Address range: 0x43dd10 - 0x43dd11
int64_t function_43dd10(int64_t a1) {
    // 0x43dd10
    int64_t result; // 0x43dd10
    return result;
}

// Address range: 0x43dd39 - 0x43dd56
int64_t function_43dd39(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x43dd39
    int64_t v1; // 0x43dd39
    int64_t result = v1 & 0x3768c6ea | 0xc8973915; // 0x43dd39
    int64_t v2; // 0x43dd39
    char v3 = *(char *)(2 * a5 + 0x3c036bb3 + (int64_t)&v2); // 0x43dd49
    __asm_out(7, (int32_t)result);
    if ((256 * (int64_t)(v3 ^ (char)(a4 / 256)) || a4 & -0xff01) == 0) {
        // 0x43ddbb
        return result;
    }
    // 0x43dd54
    return a2 & 0xffffffff;
}

// Address range: 0x43dd80 - 0x43dd83
int64_t function_43dd80(void) {
    // 0x43dd80
    int64_t result; // 0x43dd80
    return result;
}

// Address range: 0x43ddde - 0x43dde3
int64_t function_43ddde(void) {
    // 0x43ddde
    return function_ffffffffba406b02();
}

// Address range: 0x43de08 - 0x43de0b
int64_t function_43de08(int64_t a1) {
    // 0x43de08
    int64_t result; // 0x43de08
    return result;
}

// Address range: 0x43de14 - 0x43de19
int64_t function_43de14(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x43de14
    int64_t result; // 0x43de14
    char * v1 = (char *)(a3 + 13 + result); // 0x43de14
    *v1 = *v1 + (char)(a4 / 256);
    return result;
}

// Address range: 0x43de2f - 0x43de39
int64_t function_43de2f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43de2f
    bool v1; // 0x43de2f
    if (!v1) {
        // 0x43de4c
        int64_t result; // 0x43de2f
        return result;
    }
    // 0x43de31
    *(int64_t *)a1 = a2;
    return a4 & 0xffffffff;
}

// Address range: 0x43de39 - 0x43de3f
int64_t function_43de39(void) {
    // 0x43de39
    return function_4f34a4ae();
}

// Address range: 0x43de47 - 0x43de4c
int64_t function_43de47(void) {
    // 0x43de47
    int64_t v1; // 0x43de47
    return v1 + 0xea25b058 & 0xffffffff;
}

// Address range: 0x43e067 - 0x43e06d
int64_t function_43e067(void) {
    // 0x43e067
    int64_t v1; // 0x43e067
    return v1 + 0xa22f1ed8 & 0xffffffff;
}

// Address range: 0x43e07f - 0x43e13b
int64_t function_43e07f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x43e07f
    int64_t v1; // 0x43e07f
    int64_t result = v1;
    uint32_t v2 = *(int32_t *)(4 * a4 - 0x3cccaf75 + (v1 ^ 55)) ^ (int32_t)a3; // 0x43e083
    int16_t v3 = v2; // 0x43e0a1
    __asm_outsb(v3, (char)v1);
    int32_t * v4 = (int32_t *)(int64_t)v2; // 0x43e0a8
    *v4 = *v4 >> 6;
    int32_t * v5 = (int32_t *)(a5 + 47 + v1); // 0x43e0ab
    uint32_t v6 = *v5; // 0x43e0ab
    int32_t v7 = v6 + v2; // 0x43e0ab
    *v5 = v7;
    if (v7 < 0 != ((v7 ^ v6) & (v7 ^ v2)) < 0) {
        // 0x43e110
        return result;
    }
    // 0x43e0b1
    *(char *)a1 = __asm_insb(v3);
    int64_t v8 = (result + 36 + (int64_t)(v7 < v6)) % 256 | result & -256; // 0x43e0b4
    int32_t v9 = v8; // 0x43e0b9
    *(int32_t *)0x3ee45a324cb91bd9 = v9;
    *(int32_t *)0x72b8242e224d4573 = v9;
    return v8 + 0x535c4dff & 0xffffffff;
}

// Address range: 0x43e13d - 0x43e140
int64_t function_43e13d(void) {
    // 0x43e13d
    int64_t result; // 0x43e13d
    return result;
}

// Address range: 0x43e150 - 0x43e175
int64_t function_43e150(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43e150
    return (int64_t)(-0x4effb263 * *(int32_t *)(a4 + 127));
}

// Address range: 0x43e175 - 0x43e179
int64_t function_43e175(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43e175
    int64_t result; // 0x43e175
    __asm_outsb((int16_t)a3, (char)result);
    __asm_int(63);
    return result;
}

// Address range: 0x43e18d - 0x43e1d6
int64_t function_43e18d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x43e18d
    int64_t v1; // 0x43e18d
    int64_t result = v1;
    bool v2; // 0x43e18d
    if (v2) {
        // 0x43e190
        return result;
    }
    int64_t result2 = (result + 181) % 256 | result & -256; // 0x43e1cb
    *(int32_t *)0x52a106de06dd3692 = (int32_t)result2;
    return result2;
}

// Address range: 0x43e204 - 0x43e20a
int64_t function_43e204(void) {
    // 0x43e204
    return function_4e1852f6();
}

// Address range: 0x43e241 - 0x43e243
int64_t function_43e241(int64_t a1, int64_t a2) {
    // 0x43e241
    int64_t result; // 0x43e241
    return result;
}

// Address range: 0x462434 - 0x462438
int64_t function_462434(void) {
    // 0x462434
    int64_t result; // 0x462434
    return result;
}

// Address range: 0x46246a - 0x462476
int64_t function_46246a(void) {
    // 0x46246a
    int64_t v1; // 0x46246a
    *(int32_t *)0x328f3e60 = *(int32_t *)0x328f3e60 - (int32_t)v1;
    return function_ffffffffe0cc4999();
}

// Address range: 0x462572 - 0x4625ab
int64_t function_462572(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(9 * a2);
    __asm_out_134(-82, 29);
    int32_t v2 = (int32_t)__asm_in_135(7) | 0x765db200; // 0x46257e
    int64_t v3; // 0x462572
    int32_t * v4 = (int32_t *)v3; // 0x462586
    *v4 = *v4 - v2;
    *v1 = *v1 | (char)v3;
    int64_t v5 = v3 - 1; // 0x462591
    while (v5 != 0) {
        // 0x462574
        __asm_out_134(-82, 29);
        v2 = (int32_t)__asm_in_135(7) | 0x765db200;
        v4 = (int32_t *)v5;
        *v4 = *v4 - v2;
        *v1 = *v1 | (char)v5;
        v5--;
    }
    // 0x462593
    __asm_out(-88, v2 ^ -0x259f5e04);
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v6; // 0x462572
    return (int64_t)(106 * *(int32_t *)(v6 - 0x74dee825));
}

// Address range: 0x4625ac - 0x4625b4
int64_t function_4625ac(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4625ac
    int64_t result; // 0x4625ac
    return result;
}

// Address range: 0x4625df - 0x4625e0
int64_t function_4625df(void) {
    // 0x4625df
    int64_t result; // 0x4625df
    return result;
}

// Address range: 0x4625f4 - 0x4625f6
int64_t function_4625f4(void) {
    // 0x4625f4
    int64_t result; // 0x4625f4
    return result;
}

// Address range: 0x46261c - 0x462623
int64_t function_46261c(void) {
    // 0x46261c
    return function_4625df();
}
