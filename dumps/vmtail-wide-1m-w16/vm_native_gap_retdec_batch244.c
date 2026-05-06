/*
 * Targeted RetDec C for native executable gap queue batch 244.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xe7f9c-0xe819c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe819c-0xe839c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe859c-0xe879c rank=- name=- kind=- bytes=- uncovered=-
 *   0x1654aa-0x1656aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x3104bb-0x3106bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3106bb-0x3108bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3108bb-0x310abb rank=- name=- kind=- bytes=- uncovered=-
 *   0x310cbb-0x310ebb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1654aa(void);
int64_t function_1654c0(void);
int64_t function_1654d4(void);
int64_t function_16553d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16556e(int64_t a1);
int64_t function_1655e9(void);
int64_t function_1655f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3104bb(int64_t a1);
int64_t function_31054e(int64_t a1);
int64_t function_310599(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3105b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3105e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3105fd(void);
int64_t function_310602(void);
int64_t function_3106a8(int64_t a1, int64_t a2);
int64_t function_3106c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_310703(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_310739(void);
int64_t function_310771(void);
int64_t function_31078c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3107da(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31088f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3108aa(void);
int64_t function_3108b2(void);
int64_t function_3108f6(void);
int64_t function_3108f8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_310937(void);
int64_t function_31093f(void);
int64_t function_310948(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_310963(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3109be(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_310a64(void);
int64_t function_310a7a(void);
int64_t function_310a83(void);
int64_t function_310a8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_310ab1(void);
int64_t function_310cbb(int64_t a1);
int64_t function_310cd0(void);
int64_t function_310ce2(void);
int64_t function_310ce4(int64_t a1);
int64_t function_310cf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_310d65(void);
int64_t function_310da9(int64_t a1, int64_t a2);
int64_t function_310e08(int64_t a1);
int64_t function_310e27(int64_t a1);
int64_t function_310e3b(void);
int64_t function_310e79(int64_t a1);
int64_t function_310e8e(void);
int64_t function_3defe1e4();
int64_t function_e7f9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e7fc9(void);
int64_t function_e7ff0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_e8039(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_e80ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e810c(int64_t a1);
int64_t function_e8132(void);
int64_t function_e8146(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e815d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e818f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_e820d(int64_t a1);
int64_t function_e826e(int64_t a1);
int64_t function_e830e(void);
int64_t function_e831c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e8362(void);
int64_t function_e8366(int64_t a1, int64_t a2, int64_t a3);
int64_t function_e838e(void);
int64_t function_e859c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e85d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_e8600(void);
int64_t function_e8681(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e870a(int64_t a1);
int64_t function_ffffffff9036827a();
int64_t function_ffffffffdae5ae6c();
int64_t function_ffffffffe7f956b3();
int64_t function_fffffffff21e0b2a();
int64_t unknown_103fada9();
int64_t unknown_20349d45();
int64_t unknown_289285b1();
int64_t unknown_2eb96feb();
int64_t unknown_3a7bda9f();
int64_t unknown_3a988ab0();
int64_t unknown_46c30a7e();
int64_t unknown_63324b41();
int64_t unknown_740c9ded();
int64_t unknown_a0578b6();
int64_t unknown_ffffffff88328bba();
int64_t unknown_ffffffff891244e4();
int64_t unknown_ffffffff8daeeb45();
int64_t unknown_ffffffff947e6c07();
int64_t unknown_ffffffff9660c969();
int64_t unknown_ffffffff9c6d9778();
int64_t unknown_ffffffffbe4e04fa();
int64_t unknown_ffffffffbe8fcb36();
int64_t unknown_ffffffffd3108689();
int64_t unknown_ffffffffd857924c();
int64_t unknown_ffffffffdef94934();
int64_t unknown_ffffffffdf18a6c8();
int64_t unknown_ffffffffe9219b52();
int64_t unknown_fffffffff98d7772();

// Address range: 0xe7f9c - 0xe7fa2
int64_t function_e7f9c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe7f9c
    int64_t v1; // 0xe7f9c
    bool v2; // 0xe7f9c
    char v3 = (char)v1 - (v2 ? -128 : 127); // 0xe7f9c
    if (v3 < 0) {
        // 0xe7fa1
        return a4 & 0xffffffff;
    }
    // 0xe7fa0
    return v1 & -256 | (int64_t)v3;
}

// Address range: 0xe7fc9 - 0xe7fca
int64_t function_e7fc9(void) {
    // 0xe7fc9
    int64_t result; // 0xe7fc9
    return result;
}

// Address range: 0xe7ff0 - 0xe8038
int64_t function_e7ff0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3; // 0xe7ff0
    int64_t v4 = (int64_t)&v3; // 0xe7ff1
    unsigned char v5 = *(char *)0x26e333fd; // 0xe7ff6
    int64_t v6; // 0xe7ff0
    unsigned char v7 = v5 + (char)(v6 / 256); // 0xe7ff6
    *(char *)0x26e333fd = v7;
    int64_t v8 = 257 * v4 & 0xff00 | v4 & -0x10000 | (a4 / 256 + v4 + (int64_t)(v7 < v5)) % 256; // 0xe7ffc
    if (v6 != *(int64_t *)((v6 & -0xff01 | (int64_t)&g2) - 0x22832000)) {
        // 0xe8023
        *(int32_t *)v2 = *(int32_t *)&v2 + (int32_t)((v6 & 0xffffffff) - 8);
        unsigned char v9 = *(char *)0x4f3b202c; // 0xe8025
        unsigned char v10 = v9 + (char)((int64_t)&g2 >> 8); // 0xe8025
        *(char *)0x4f3b202c = v10;
        return v8 - (v10 < v9 ? 0x3e6f5ba8 : 0x3e6f5ba7) & 0xffffffff;
    }
    int64_t v11 = 0x10000 * (int32_t)v8 >> 16; // 0xe800a
    char * v12 = (char *)(8 * v11 + 0x14013d00 + v1); // 0xe800b
    *v12 = *v12 - (char)a4;
    int64_t result = v11; // 0xe8036
    if ((*(char *)&v1 || (char)((int64_t)&g2 >> 8)) != 0) {
        result = function_e7fc9();
    }
    // 0xe8038
    return result;
}

// Address range: 0xe8039 - 0xe80c9
int64_t function_e8039(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = __asm_in((int16_t)a3); // 0xe8039
    int64_t v2; // 0xe8039
    int64_t result = v2 & -256 | v1; // 0xe8039
    *(char *)-0x77f67cbf = *(char *)-0x77f67cbf + (char)(v2 / 256);
    int32_t * v3 = (int32_t *)(a3 - 118); // 0xe8040
    int32_t v4 = *v3; // 0xe8040
    int32_t v5 = v2; // 0xe8040
    int32_t v6 = v4 + v5; // 0xe8040
    *v3 = v6;
    if (v6 > 0 || v6 < 0 != ((v6 ^ v4) & (v6 ^ v5)) < 0) {
        // 0xe8047
        return result;
    }
    int64_t v7 = result & -256; // 0xe80b3
    int64_t result2 = v7 | (v1 + (int64_t)((int32_t)a2 < (int32_t)v2)) % 256; // 0xe80b3
    if ((int32_t)result2 < 0x1a23f002) {
        // 0xe8047
        return result2;
    }
    int64_t v8 = v7 | a4 / 256 % 256; // 0xe80bc
    bool v9; // 0xe8039
    int32_t * v10 = (int32_t *)((v9 ? -8 : 8) + a1); // 0xe80be
    *v10 = *v10 + (int32_t)v8;
    *(char *)a3 = (char)a4;
    return v8 + 0x9f25c06e & 0xffffffff;
}

// Address range: 0xe80ca - 0xe80fa
int64_t function_e80ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x190427ed; // 0xe80e5
    int64_t v2; // 0xe80ca
    *(char *)0x190427ed = v1 + (char)((uint64_t)v2 / 256);
    return (int64_t)*(int32_t *)0x3afed8b67002c57c;
}

// Address range: 0xe810c - 0xe810d
int64_t function_e810c(int64_t a1) {
    // 0xe810c
    int64_t result; // 0xe810c
    return result;
}

// Address range: 0xe8132 - 0xe8133
int64_t function_e8132(void) {
    // 0xe8132
    int64_t result; // 0xe8132
    return result;
}

// Address range: 0xe8146 - 0xe815d
int64_t function_e8146(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe8146
    unknown_ffffffffd857924c();
    int64_t v1; // 0xe8146
    int32_t * v2 = (int32_t *)(v1 + 12); // 0xe8154
    *v2 = (int32_t)a2 - 0x172caaff + *v2;
    return 0xa49e8d91;
}

// Address range: 0xe815d - 0xe817a
int64_t function_e815d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe815d
    int64_t v1; // 0xe815d
    *(int32_t *)a3 = 2 * (int32_t)v1;
    bool v2; // 0xe815d
    return unknown_ffffffff9c6d9778((v2 ? -1 : 1) + a1);
}

// Address range: 0xe818f - 0xe8205
int64_t function_e818f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0xe818f
    int64_t v1; // 0xe818f
    int64_t v2 = v1;
    bool v3; // 0xe818f
    if (v3 || false) {
        // 0xe81fc
        return ((v2 & 171) + a4 / 256) % 256 | v2 & -256;
    }
    int32_t * v4 = (int32_t *)(a5 + 0x1e8e1d4 + 2 * v2); // 0xe8198
    *v4 = *v4 | (int32_t)v1;
    unknown_289285b1();
    char * v5 = (char *)(a3 + 53); // 0xe81b0
    *v5 = *v5 - 31;
    int64_t v6 = (v3 ? -4 : 4) + a1; // 0xe81b3
    int64_t result = unknown_ffffffff88328bba(v6); // 0xe81b4
    int32_t * v7 = (int32_t *)(a2 - 0x54e65b8b); // 0xe81c0
    int64_t v8; // 0xe818f
    *v7 = *v7 + (int32_t)(int64_t)&v8;
    char * v9 = (char *)(v6 + 0x1e882fb); // 0xe81c6
    *v9 = *v9 + (char)(a4 / 256);
    return result;
}

// Address range: 0xe820d - 0xe820e
int64_t function_e820d(int64_t a1) {
    // 0xe820d
    int64_t result; // 0xe820d
    return result;
}

// Address range: 0xe826e - 0xe826f
int64_t function_e826e(int64_t a1) {
    // 0xe826e
    int64_t result; // 0xe826e
    return result;
}

// Address range: 0xe830e - 0xe830f
int64_t function_e830e(void) {
    // 0xe830e
    int64_t result; // 0xe830e
    return result;
}

// Address range: 0xe831c - 0xe835e
int64_t function_e831c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe831c
    int64_t v1; // 0xe831c
    uint64_t v2 = v1;
    char * v3 = (char *)(a1 - 0x2c80076b); // 0xe8321
    *v3 = *v3 | 61;
    int32_t v4 = *(int32_t *)(a2 - 76) + ((int32_t)v1 | 0x70fe14ab); // 0xe8328
    unsigned char v5 = (char)(v2 / 256); // 0xe8334
    char v6 = 0x13d0001 * v4 < 0xffffffed; // 0xe8334
    unsigned char v7 = v6 + (char)a4; // 0xe8334
    char v8 = v5 - v7; // 0xe8334
    bool v9 = 0x13d0001 * v4 < 0xffffffed ? v7 != -1 | v8 - v6 > v5 : v7 > v5; // 0xe8334
    int64_t result = 256 * (128 * (int64_t)(v8 < 0) | 64 * (int64_t)(v8 == 0) | 16 * (int64_t)(v5 % 16 + v6 - v7 % 16 > 15) | (int64_t)v9 | 4 * (int64_t)(llvm_ctpop_i8(v8) % 2 == 0)) | (int64_t)(v4 & -0xff01 | 512); // 0xe8336
    if (v8 == 0) {
        // 0xe83b3
        return result;
    }
    unsigned char v10 = v8 + (char)v2; // 0xe8342
    int32_t result2 = __asm_in_133(-85); // 0xe8344
    if (v10 < v8) {
        // 0xe8368
        return result2;
    }
    unsigned char v11 = *(char *)-0x706b55b1; // 0xe8348
    unsigned char v12 = v11 + v10; // 0xe8348
    *(char *)-0x706b55b1 = v12;
    int64_t v13 = result & 0xffffffff; // 0xe834f
    if (v12 < v11 || v12 == 0) {
        v13 = function_e830e();
    }
    int64_t v14 = v13;
    char * v15 = (char *)((result + 0xd9d605ac & 0xffffffff) + 52); // 0xe8354
    *v15 = -*v15;
    return v14 & -256 | v14 - (v12 < v11 ? 180 : 179) & 182 | 73;
}

// Address range: 0xe8362 - 0xe8363
int64_t function_e8362(void) {
    // 0xe8362
    int64_t result; // 0xe8362
    return result;
}

// Address range: 0xe8366 - 0xe8368
int64_t function_e8366(int64_t a1, int64_t a2, int64_t a3) {
    // 0xe8366
    int64_t result; // 0xe8366
    return result;
}

// Address range: 0xe838e - 0xe838f
int64_t function_e838e(void) {
    // 0xe838e
    int64_t result; // 0xe838e
    return result;
}

// Address range: 0xe859c - 0xe85d4
int64_t function_e859c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0xe859c
    int32_t * v3 = (int32_t *)(8 * a3 + 0x1e8013d + v2); // 0xe859c
    *v3 = *v3 + (int32_t)a3;
    int64_t v4 = unknown_103fada9(); // 0xe85a3
    *(int32_t *)a1 = (int32_t)v4;
    char * v5 = (char *)v4; // 0xe85a9
    char v6 = v4; // 0xe85a9
    *v5 = 2 * v6 + *v5;
    *(char *)0x756b2e6025ac5b66 = v6;
    bool v7; // 0xe859c
    *(int32_t *)((v7 ? -4 : 4) + a1) = *(int32_t *)&v1;
    int32_t * v8 = (int32_t *)((256 * v2 + a3 & 0xff00 | a3 & -0xff01) - 83); // 0xe85c4
    *v8 = *v8 + (int32_t)v2;
    int64_t v9; // bp-1, 0xe859c
    return (int64_t)&v9;
}

// Address range: 0xe85d5 - 0xe85de
int64_t function_e85d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xe85d5
    return 0x7f67d3bf;
}

// Address range: 0xe8600 - 0xe8601
int64_t function_e8600(void) {
    // 0xe8600
    int64_t result; // 0xe8600
    return result;
}

// Address range: 0xe8681 - 0xe86a2
int64_t function_e8681(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe8681
    unknown_ffffffffd3108689();
    return unknown_3a7bda9f();
}

// Address range: 0xe870a - 0xe870b
int64_t function_e870a(int64_t a1) {
    // 0xe870a
    int64_t result; // 0xe870a
    return result;
}

// Address range: 0x1654aa - 0x1654ac
int64_t function_1654aa(void) {
    // 0x1654aa
    int64_t result; // 0x1654aa
    __asm_out(-51, (int32_t)result);
    return result;
}

// Address range: 0x1654c0 - 0x1654cb
int64_t function_1654c0(void) {
    // 0x1654c0
    int64_t v1; // 0x1654c0
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 - 0x3d3bfa40); // 0x1654c0
    *v3 = *v3 | (char)(v2 / 256);
    return function_ffffffffe7f956b3();
}

// Address range: 0x1654d4 - 0x1654ef
int64_t function_1654d4(void) {
    // 0x1654d4
    int64_t v1; // 0x1654d4
    int64_t v2 = v1;
    unsigned char v3 = (char)v2;
    *(char *)v2 = v3 - 24;
    int32_t * v4 = (int32_t *)(v1 - 0x40ff3900); // 0x1654d7
    *v4 = *v4 + (int32_t)v1;
    unsigned char v5 = *(char *)(v1 - 0x6b26b13a); // 0x1654dd
    *(int32_t *)v2 = 2 * (int32_t)v2 | (int32_t)(v5 > v3);
    return unknown_740c9ded();
}

// Address range: 0x16553d - 0x16554b
int64_t function_16553d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x16553d
    int64_t result; // 0x16553d
    *(int32_t *)-0x579dd3626efe173e = (int32_t)result;
    return result;
}

// Address range: 0x16556e - 0x165571
int64_t function_16556e(int64_t a1) {
    // 0x16556e
    int64_t result; // 0x16556e
    return result;
}

// Address range: 0x1655e9 - 0x1655f6
int64_t function_1655e9(void) {
    // 0x1655e9
    int64_t result; // 0x1655e9
    char * v1 = (char *)(result - 119); // 0x1655e9
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x1655f7 - 0x1656aa
int64_t function_1655f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x165676
    int64_t v1; // bp-8, 0x1655f7
    return (int64_t)&v1;
    // 0x1655f9
    int64_t result; // 0x1655f7
    return result;
}

// Address range: 0x3104bb - 0x3104c4
int64_t function_3104bb(int64_t a1) {
    // 0x3104bb
    int64_t v1; // 0x3104bb
    return v1 + 0x862afe3a & 0xffffffff;
}

// Address range: 0x31054e - 0x310551
int64_t function_31054e(int64_t a1) {
    // 0x31054e
    int64_t result; // 0x31054e
    return result;
}

// Address range: 0x310599 - 0x3105b2
int64_t function_310599(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x3d006889; // bp-8, 0x31059f
    int64_t result; // 0x310599
    int32_t * v2 = (int32_t *)(result - 34); // 0x3105a4
    *v2 = *v2 + (int32_t)(int64_t)&v1;
    int64_t v3; // 0x310599
    int32_t v4 = *(int32_t *)&v3; // 0x3105a7
    int64_t v5; // 0x310599
    int32_t v6 = *(int32_t *)&v5; // 0x3105a7
    bool v7; // 0x310599
    int64_t v8 = v7 ? -4 : 4; // 0x3105a7
    v5 = v8 + a1;
    v3 = v8 + a2;
    *(char *)(a4 + 2) = (char)a4;
    if (((v4 - v6 ^ v4) & (v6 ^ v4)) >= 0) {
        // 0x3105ae
        return __asm_int1(v5, v3 + (v7 ? -1 : 1));
    }
    // 0x3105ad
    return result;
}

// Address range: 0x3105b9 - 0x3105e8
int64_t function_3105b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3105b9
    int64_t v1; // 0x3105b9
    uint64_t v2 = v1 + 0x28c5a164; // 0x3105c0
    char * v3 = (char *)(a4 - 73); // 0x3105c7
    *v3 = *v3 | (char)(v2 / 256);
    int64_t v4 = (0x100000000 * v2 / 0x100000000 & -0xff01) * (0x100000000 * a1 >> 32); // 0x3105ce
    char v5 = *(char *)(v4 & 0xffffffff); // 0x3105d0
    int64_t v6 = v4 & 0xffffff00 | (int64_t)((char)v4 - v5); // 0x3105d0
    int32_t * v7 = (int32_t *)(v6 + 98); // 0x3105d7
    *v7 = *v7 - ((int32_t)v6 < 0x53e15f01 ? -0x598b050f : -0x598b0510);
    unknown_ffffffff891244e4();
    return function_ffffffff9036827a();
}

// Address range: 0x3105e8 - 0x3105fd
int64_t function_3105e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3105e8
    __asm_sti();
    uint32_t v1 = (uint32_t)(int32_t)a4 % 32; // 0x3105f8
    if (v1 != 0) {
        int32_t * v2 = (int32_t *)(a3 & -0xff01 | (int64_t)"le"); // 0x3105f8
        *v2 = *v2 >> v1;
    }
    return function_310602();
}

// Address range: 0x3105fd - 0x310602
int64_t function_3105fd(void) {
    // 0x3105fd
    int64_t result; // 0x3105fd
    return result;
}

// Address range: 0x310602 - 0x31060f
int64_t function_310602(void) {
    // 0x310602
    int64_t v1; // 0x310602
    *(char *)0x53e2f50c = *(char *)0x53e2f50c + (char)(v1 / 256);
    return __asm_int1(v1, v1);
}

// Address range: 0x3106a8 - 0x3106b1
int64_t function_3106a8(int64_t a1, int64_t a2) {
    // 0x3106a8
    int64_t v1; // 0x3106a8
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a2;
    return unknown_3a988ab0(a1, a2);
}

// Address range: 0x3106c6 - 0x3106c8
int64_t function_3106c6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3106c6
    int64_t result; // 0x3106c6
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x310703 - 0x310720
int64_t function_310703(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x310703
    int64_t v1; // 0x310703
    int64_t v2 = 2 * v1; // 0x310703
    char v3 = *(char *)(a2 - 112 + 8 * v1); // 0x310705
    *(int32_t *)a1 = (int32_t)v1;
    bool v4; // 0x310703
    int64_t v5 = v4 ? -4 : 4; // 0x310709
    int32_t v6 = *(int32_t *)((a3 & -256 | (int64_t)(v3 & (char)a3)) - 24); // 0x31070b
    int32_t * v7 = (int32_t *)(v1 - 0x7fffce8f); // 0x31070e
    *v7 = *v7 + (int32_t)v1;
    char * v8 = (char *)(a2 + 0x1e80007 + v1 + v5); // 0x310714
    *v8 = *v8 + (char)v1;
    *(int32_t *)(v5 + a1 + (v4 ? -1 : 1)) = (int32_t)v2;
    char * v9 = (char *)(v1 + 1); // 0x31071c
    *v9 = *v9 + (char)(v6 ^ (int32_t)a4);
    return v2 & 0xffffffff;
}

// Address range: 0x310739 - 0x31073a
int64_t function_310739(void) {
    // 0x310739
    int64_t result; // 0x310739
    return result;
}

// Address range: 0x310771 - 0x310772
int64_t function_310771(void) {
    // 0x310771
    int64_t result; // 0x310771
    return result;
}

// Address range: 0x31078c - 0x3107da
int64_t function_31078c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x31078c
    int64_t v1; // 0x31078c
    uint64_t v2 = v1;
    bool v3; // 0x31078c
    uint32_t v4 = (int32_t)v3 + (int32_t)a4 - *(int32_t *)(a1 + 0x38a54b3a); // 0x31078c
    unsigned char v5 = *(char *)0x7432f02c; // 0x310792
    unsigned char v6 = v5 + (char)(v4 / 256); // 0x310792
    *(char *)0x7432f02c = v6;
    *(int32_t *)(v2 & 0xffffffff) = (int32_t)v2 - (int32_t)a1 + (int32_t)(v6 < v5);
    *(int32_t *)a1 = __asm_insd((int16_t)((int32_t)v1 >> 31));
    __asm_int(-77);
    __asm_in_133(-99);
    if (*(char *)-0x14cd1030 < (char)v2) {
        function_310739();
    }
    uint64_t result = unknown_ffffffffdf18a6c8(); // 0x3107c2
    char * v7 = (char *)(v1 - 111); // 0x3107c7
    *v7 = *v7 + (char)(result / 256);
    char * v8 = (char *)(v2 - 0x17ff6e07); // 0x3107ca
    *v8 = *v8 + (char)(v2 / 256);
    int64_t v9 = v1 + (int64_t)v4; // 0x3107d0
    char * v10 = (char *)((v9 & 0xffffffff) + 0x65d4640a); // 0x3107d2
    *v10 = *v10 - (char)v9;
    return result;
}

// Address range: 0x3107da - 0x3107f1
int64_t function_3107da(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3107da
    int64_t v1; // 0x3107da
    char v2 = v1;
    bool v3; // 0x3107da
    char v4 = v3; // 0x3107e6
    char v5 = v2 - 3 + v4; // 0x3107e6
    char v6 = v5 + v4; // 0x3107e6
    *(char *)v1 = v5;
    int64_t result; // 0x3107da
    if (v5 < 0 != ((v6 ^ v2) & (v6 ^ -128)) < 0) {
        result = function_310771();
    }
    // 0x3107ea
    return result;
}

// Address range: 0x31088f - 0x310897
int64_t function_31088f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x31088f
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1; // 0x31088f
    return function_3108f8(a1, a2, a3, v1);
}

// Address range: 0x3108aa - 0x3108ae
int64_t function_3108aa(void) {
    // 0x3108aa
    int64_t v1; // 0x3108aa
    return v1 ^ 232;
}

// Address range: 0x3108b2 - 0x3108b3
int64_t function_3108b2(void) {
    // 0x3108b2
    int64_t result; // 0x3108b2
    return result;
}

// Address range: 0x3108f6 - 0x3108f7
int64_t function_3108f6(void) {
    // 0x3108f6
    int64_t result; // 0x3108f6
    return result;
}

// Address range: 0x3108f8 - 0x310913
int64_t function_3108f8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3108f8
    int64_t result; // 0x3108f8
    int64_t v1 = result;
    *(int32_t *)a1 = (int32_t)result;
    bool v2; // 0x3108f8
    int64_t v3 = v2 ? 252 : 4; // 0x3108fa
    int64_t v4; // 0x3108f8
    *(char *)a3 = *(char *)&v4 | -77;
    *(char *)0x48e80007 = *(char *)0x48e80007 + (char)(v3 + a1);
    char * v5 = (char *)((256 * result + v1 & 0xff00 | v1 & -0xff01) - 115); // 0x310909
    *v5 = *v5 | (char)(a4 / 256);
    return result;
}

// Address range: 0x310937 - 0x310938
int64_t function_310937(void) {
    // 0x310937
    int64_t result; // 0x310937
    return result;
}

// Address range: 0x31093f - 0x310940
int64_t function_31093f(void) {
    // 0x31093f
    int64_t result; // 0x31093f
    return result;
}

// Address range: 0x310948 - 0x31094b
int64_t function_310948(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x310948
    int64_t result; // 0x310948
    bool v1; // 0x310948
    *(int32_t *)a4 = 2 * (int32_t)result + (int32_t)v1;
    return result;
}

// Address range: 0x310963 - 0x3109b8
int64_t function_310963(int64_t a1, int64_t a2, int64_t a3) {
    // 0x310963
    int64_t v1; // 0x310963
    int64_t v2 = v1;
    unknown_ffffffff9660c969();
    bool v3; // 0x310963
    if (!v3) {
        function_3108f6();
    }
    unsigned char v4 = (char)a1;
    unsigned char v5 = (char)unknown_fffffffff98d7772(); // 0x310971
    if (v4 <= v5) {
        int64_t v6 = unknown_a0578b6(); // 0x3109b0
        return (v6 - (v4 > v5 ? 132 : 131)) % 256 | v6 & -256;
    }
    int64_t v7 = function_31093f(); // 0x310972
    char * v8 = (char *)(a2 - 0x59fe17ca); // 0x310976
    *v8 = *v8 + (char)(v7 / 256);
    int64_t result = v7; // 0x31097e
    if ((int32_t)(v1 & a2) != 0) {
        result = function_310937();
    }
    int64_t v9 = (v2 + 226) % 256 | v2 & -256; // 0x310980
    int32_t * v10 = (int32_t *)v9; // 0x310985
    *v10 = *v10 + (int32_t)result;
    unsigned char v11 = *(char *)-0x17a56993; // 0x31098a
    *(char *)-0x17a56993 = v11 / 128 | 2 * v11;
    char * v12 = (char *)v9; // 0x310994
    *v12 = *v12 - 1;
    return result;
}

// Address range: 0x3109be - 0x310a53
int64_t function_3109be(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x3109be
    char * v3 = (char *)(v2 - 0x7062d5fc); // 0x3109be
    char v4 = v2 / 256; // 0x3109be
    *v3 = *v3 | v4;
    char * v5 = (char *)(v2 - 24); // 0x3109c4
    *v5 = *v5 - v4;
    int64_t v6; // 0x3109be
    uint32_t v7 = *(int32_t *)&v6; // 0x3109c7
    uint32_t v8 = v7 + (int32_t)a3; // 0x3109c7
    *(int32_t *)a1 = v8;
    if (v8 < v7) {
        char * v9 = (char *)(v2 + 0x7339c00); // 0x3109cb
        *v9 = *v9 + (char)v2;
        char * v10 = (char *)(v2 - 0x46fe1800); // 0x3109d1
        *v10 = *v10 + (char)(a4 / 256);
        unknown_46c30a7e();
        unknown_2eb96feb();
        return (int64_t)*(int32_t *)-0x74dcfe17c3e3ff1d;
    }
    char v11 = __asm_in((int16_t)v1); // 0x3109fc
    __asm_iretd();
    int64_t v12 = unknown_ffffffff947e6c07(); // 0x310a01
    if (v8 != 0) {
        // 0x310a30
        unknown_ffffffffbe8fcb36();
        unknown_ffffffff8daeeb45();
        int64_t v13 = unknown_ffffffffe9219b52(); // 0x310a4c
        return (v13 + 90) % 256 | v13 & -256;
    }
    char * v14 = (char *)(((int64_t)v11 & 0xffffffff | v2 & 0xffffff00) + 101); // 0x310a0a
    unsigned char v15 = *v14; // 0x310a0a
    unsigned char v16 = (char)(v1 / 256); // 0x310a0a
    *v14 = v15 - v16;
    int64_t v17 = v12 + 0x1e88a94 + (int64_t)(v15 < v16); // 0x310a0f
    *(char *)v1 = *(char *)&v1 + (char)v17;
    return v17 & 0xffffffff;
}

// Address range: 0x310a64 - 0x310a65
int64_t function_310a64(void) {
    // 0x310a64
    int64_t result; // 0x310a64
    return result;
}

// Address range: 0x310a7a - 0x310a7c
int64_t function_310a7a(void) {
    // 0x310a7a
    return function_310a64();
}

// Address range: 0x310a83 - 0x310a84
int64_t function_310a83(void) {
    // 0x310a83
    int64_t result; // 0x310a83
    return result;
}

// Address range: 0x310a8e - 0x310a99
int64_t function_310a8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x310a8e
    int64_t v1; // 0x310a8e
    *(int32_t *)a1 = (int32_t)v1;
    unsigned char v2 = (char)a4 % 32; // 0x310a8f
    if (v2 != 0) {
        char * v3 = (char *)(v1 + 10); // 0x310a8f
        *v3 = *v3 >> v2;
    }
    bool v4; // 0x310a8e
    int64_t v5 = v4 ? -4 : 4; // 0x310a8e
    return function_fffffffff21e0b2a(v5 + a1, v5 + a2);
}

// Address range: 0x310ab1 - 0x310ab3
int64_t function_310ab1(void) {
    // 0x310ab1
    return function_310a83();
}

// Address range: 0x310cbb - 0x310cc2
int64_t function_310cbb(int64_t a1) {
    // 0x310cbb
    int64_t result; // 0x310cbb
    return result;
}

// Address range: 0x310cd0 - 0x310cd1
int64_t function_310cd0(void) {
    // 0x310cd0
    int64_t result; // 0x310cd0
    return result;
}

// Address range: 0x310ce2 - 0x310ce3
int64_t function_310ce2(void) {
    // 0x310ce2
    int64_t result; // 0x310ce2
    return result;
}

// Address range: 0x310ce4 - 0x310ce5
int64_t function_310ce4(int64_t a1) {
    // 0x310ce4
    int64_t result; // 0x310ce4
    return result;
}

// Address range: 0x310cf4 - 0x310d4d
int64_t function_310cf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = unknown_ffffffffbe4e04fa(); // 0x310cf4
    *(char *)a1 = __asm_insb((int16_t)a3);
    unsigned char v3 = (char)a4 % 32; // 0x310cfa
    bool v4; // 0x310cf4
    if (v3 != 0) {
        char v5 = *(char *)&v1 << v3; // 0x310cfa
        unsigned char v6 = llvm_ctpop_i8(v5); // 0x310cfa
        *(char *)v1 = v5;
        v4 = v6 % 2 == 0;
    }
    int64_t v7 = v2; // 0x310d07
    if (!v4) {
        v7 = function_310cd0();
    }
    int32_t * v8 = (int32_t *)(v1 + 13); // 0x310d13
    int32_t v9 = *v8 + (int32_t)a1; // 0x310d13
    *v8 = v9;
    int32_t v10 = v7; // 0x310d16
    *(int32_t *)a1 = v10;
    __asm_out_134((int16_t)v1, v10);
    int64_t v11 = v7; // 0x310d1d
    if (a4 != 1 && v9 != 0) {
        v11 = function_310ce2();
    }
    // 0x310d20
    bool v12; // 0x310cf4
    int64_t v13 = (v12 ? -4 : 4) + a1; // 0x310d16
    int32_t * v14 = (int32_t *)(v11 + 0x22b845d3); // 0x310d22
    *v14 = *v14 - 0x1fc544f;
    char v15 = v11; // 0x310d28
    __asm_out_135((int16_t)v1, v15);
    *(char *)v13 = v15;
    int64_t v16 = unknown_ffffffffdef94934(v13 + (v12 ? -1 : 1)); // 0x310d2e
    *(int32_t *)0x76dd13dcae9fd00a = (int32_t)v16;
    return unknown_20349d45();
}

// Address range: 0x310d65 - 0x310d6a
int64_t function_310d65(void) {
    // 0x310d65
    return function_ffffffffdae5ae6c();
}

// Address range: 0x310da9 - 0x310db6
int64_t function_310da9(int64_t a1, int64_t a2) {
    // 0x310da9
    return function_3defe1e4();
}

// Address range: 0x310e08 - 0x310e11
int64_t function_310e08(int64_t a1) {
    // 0x310e08
    int64_t v1; // 0x310e08
    return 0x57013d00 * v1 & 0xffffff00;
}

// Address range: 0x310e27 - 0x310e2a
int64_t function_310e27(int64_t a1) {
    // 0x310e27
    int64_t result; // 0x310e27
    return result;
}

// Address range: 0x310e3b - 0x310e48
int64_t function_310e3b(void) {
    // 0x310e3b
    return unknown_63324b41();
}

// Address range: 0x310e79 - 0x310e7c
int64_t function_310e79(int64_t a1) {
    // 0x310e79
    int64_t result; // 0x310e79
    return result;
}

// Address range: 0x310e8e - 0x310e8f
int64_t function_310e8e(void) {
    // 0x310e8e
    int64_t result; // 0x310e8e
    return result;
}
