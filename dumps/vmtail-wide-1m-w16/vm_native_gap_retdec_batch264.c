/*
 * Targeted RetDec C for native executable gap queue batch 264.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x147513-0x147713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x147713-0x147913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x147913-0x147b13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x147b13-0x147d13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3134bb-0x3136bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3138bb-0x313abb rank=- name=- kind=- bytes=- uncovered=-
 *   0x313abb-0x313cbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x313cbb-0x313ebb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_147504();
int64_t function_147513(void);
int64_t function_14751b(void);
int64_t function_147546(int64_t a1, int64_t a2);
int64_t function_14759c(void);
int64_t function_1475b0(int64_t a1);
int64_t function_14767d(void);
int64_t function_147730(int64_t a1);
int64_t function_1477c7(void);
int64_t function_1477f7(int64_t a1);
int64_t function_1477fa(void);
int64_t function_147825(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_147869(void);
int64_t function_1478d1(void);
int64_t function_14794e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_147a40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_147a64(int64_t a1);
int64_t function_147a66(int64_t a1);
int64_t function_147baa(int64_t a1, int64_t a2);
int64_t function_147bb3(void);
int64_t function_147c61(void);
int64_t function_147c87(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_147cc1(int64_t a1);
int64_t function_147ccc(int64_t a1);
int64_t function_16e3928();
int64_t function_27973dbc();
int64_t function_3134bb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_313525(void);
int64_t function_31352b(int64_t a1);
int64_t function_31353a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_313561(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_313572(void);
int64_t function_3135ab(int64_t a1, int64_t a2, int64_t a3);
int64_t function_313603(void);
int64_t function_313619(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31365c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_3138bb(int64_t result);
int64_t function_3138ce(void);
int64_t function_3138ff(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_31390f(void);
int64_t function_3139ec(int64_t a1);
int64_t function_313ada(void);
int64_t function_313b0a(void);
int64_t function_313b0e(void);
int64_t function_313b47(int64_t a1);
int64_t function_313b4c(void);
int64_t function_313b66(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_313bd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_313c06(void);
int64_t function_313c47(int64_t a1, int64_t a2, int64_t a3);
int64_t function_313cfe(void);
int64_t function_313d46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_313dde(void);
int64_t function_313e20(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_313e3a(int64_t a1);
int64_t function_313e4e(int64_t a1);
int64_t function_313e56(int64_t a1);
int64_t function_313ead(int64_t a1);
int64_t function_35cd1e8();
int64_t function_cfaa74();
int64_t function_ffffffffd9173df3();
int64_t function_ffffffffe9b83cf1();
int64_t unknown_106c13d1();
int64_t unknown_11053ce0();
int64_t unknown_3d331d08();
int64_t unknown_497322e1();
int64_t unknown_4e32789d();
int64_t unknown_540ac328();
int64_t unknown_73328954();
int64_t unknown_7fc57e59();
int64_t unknown_9225f66();
int64_t unknown_d9e545b();
int64_t unknown_ffffffff8033254c();
int64_t unknown_ffffffff8185f3ec();
int64_t unknown_ffffffffaf567a81();
int64_t unknown_ffffffffb3c4acfd();
int64_t unknown_ffffffffb855b980();
int64_t unknown_ffffffffbd3175c1();
int64_t unknown_ffffffffcb4b8cd2();
int64_t unknown_ffffffffdef09f3b();
int64_t unknown_ffffffffe18ac57b();
int64_t unknown_ffffffffe4153457();
int64_t unknown_ffffffffe8372eba();
int64_t unknown_ffffffffe83d4079();
int64_t unknown_ffffffffebd4838b();
int64_t unknown_fffffffffa6f74b1();
int64_t unknown_fffffffffd49b2cb();

// Address range: 0x147513 - 0x14751a
int64_t function_147513(void) {
    // 0x147513
    int64_t v1; // 0x147513
    return (int64_t)&v1;
}

// Address range: 0x14751b - 0x14751d
int64_t function_14751b(void) {
    // 0x14751b
    return function_147504();
}

// Address range: 0x147546 - 0x14759b
int64_t function_147546(int64_t a1, int64_t a2) {
    int64_t v1 = unknown_ffffffffebd4838b(); // 0x147585
    char * v2 = (char *)(a2 - 120); // 0x14758a
    unsigned char v3 = *v2; // 0x14758a
    char v4 = v1; // 0x14758a
    unsigned char v5 = v3 + v4; // 0x14758a
    *v2 = v5;
    int64_t v6; // 0x147546
    unsigned char v7 = *(char *)&v6; // 0x14758d
    unsigned char v8 = v7 + v4; // 0x14758d
    unsigned char v9 = v8 + (char)(v5 < v3); // 0x14758d
    bool v10 = v5 < v3 ? v9 <= v7 : v8 < v7; // 0x14758d
    *(char *)v6 = v9;
    *(char *)a1 = v4;
    int32_t * v11 = (int32_t *)(v6 - 0x501f1b76); // 0x147595
    int64_t v12; // 0x147546
    *v11 = *v11 + (int32_t)v12;
    return (v1 + 28 + (int64_t)v10) % 256 | v1 & -256;
}

// Address range: 0x14759c - 0x1475a6
int64_t function_14759c(void) {
    // 0x14759c
    int64_t result; // 0x14759c
    *(char *)0x1e852e759ff1eac = (char)result;
    return result;
}

// Address range: 0x1475b0 - 0x1475b3
int64_t function_1475b0(int64_t a1) {
    // 0x1475b0
    int64_t result; // 0x1475b0
    return result;
}

// Address range: 0x14767d - 0x147690
int64_t function_14767d(void) {
    // 0x14767d
    return function_35cd1e8();
}

// Address range: 0x147730 - 0x147731
int64_t function_147730(int64_t a1) {
    // 0x147730
    int64_t result; // 0x147730
    return result;
}

// Address range: 0x1477c7 - 0x1477d0
int64_t function_1477c7(void) {
    // 0x1477c7
    int64_t v1; // 0x1477c7
    int32_t * v2 = (int32_t *)(v1 + 0x355c664e); // 0x1477c7
    *v2 = *v2 + (int32_t)v1;
    return function_1477fa();
}

// Address range: 0x1477f7 - 0x1477f8
int64_t function_1477f7(int64_t a1) {
    // 0x1477f7
    int64_t result; // 0x1477f7
    return result;
}

// Address range: 0x1477fa - 0x147800
int64_t function_1477fa(void) {
    // 0x1477fa
    int64_t v1; // 0x1477fa
    return v1 + 0x16ce0c38 & 0xffffffff;
}

// Address range: 0x147825 - 0x147838
int64_t function_147825(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x147825
    int64_t v1; // 0x147825
    __asm_outsd(2063, (int32_t)v1);
    return function_cfaa74();
}

// Address range: 0x147869 - 0x14786c
int64_t function_147869(void) {
    // 0x147869
    int64_t result; // 0x147869
    return result;
}

// Address range: 0x1478d1 - 0x1478d3
int64_t function_1478d1(void) {
    // 0x1478d1
    int64_t result; // 0x1478d1
    return result;
}

// Address range: 0x14794e - 0x147a2c
int64_t function_14794e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    char * v2 = (char *)(a2 - 0x3bfe17c6 + a4);
    char v3 = *v2; // 0x1479ab
    char v4 = v3 - 26; // 0x1479ab
    *v2 = v4;
    if ((v3 ^ -2) >= 230 && v4 != 0) {
        // 0x147a22
        return unknown_540ac328();
    }
    if (v4 < 0 == ((v4 ^ v3) & v3 + 102) < 0) {
        int32_t * v5 = (int32_t *)(v1 - 84); // 0x14796e
        *v5 = *v5 + (int32_t)a1;
        unknown_ffffffffe18ac57b();
        *(int32_t *)a1 = *(int32_t *)&v1;
        bool v6; // 0x14794e
        int64_t v7 = v6 ? -4 : 4; // 0x147978
        int64_t v8 = *(int64_t *)0xe8f07aac; // 0x147979
        int64_t result = unknown_ffffffffb855b980(v7 + a1, v1 + v7, v8, 2 * a4 & 0xfe00 | a4 & -0xff01); // 0x14797a
        uint32_t v9 = (int32_t)a4 % 32; // 0x14797f
        if (v9 != 0) {
            int32_t * v10 = (int32_t *)(result + 0x1e85300); // 0x14797f
            *v10 = *v10 << v9;
        }
        // 0x14798d
        return result;
    }
    // 0x1479b7
    __asm_sti();
    int64_t v11; // 0x14794e
    char * v12 = (char *)(v11 + 0x2c077ab4); // 0x1479bd
    *v12 = *v12 & (char)a4;
    int32_t * v13 = (int32_t *)(a1 + 0x5a1e0e90); // 0x1479c8
    uint32_t v14 = *v13; // 0x1479c8
    uint32_t v15 = v14 + (int32_t)a1; // 0x1479c8
    *v13 = v15;
    *(char *)0x89aef201e87999 = (char)(a4 / 256);
    char v16 = *(char *)(2 * a4 + a3); // 0x1479d8
    int64_t v17 = unknown_497322e1(); // 0x1479db
    int32_t v18 = *(int32_t *)&v1; // 0x1479e0
    uint32_t v19 = v18 | (int32_t)(a3 & 0xffffff00 | (int64_t)((char)(v15 < v14) + (char)a3 - v16)); // 0x1479e0
    int64_t v20; // bp-8, 0x14794e
    int64_t v21 = (int64_t)&v20;
    int64_t v22; // 0x14794e
    int64_t v23; // 0x14794e
    int64_t v24; // 0x14794e
    int64_t v25; // 0x1479eb
    if ((char)v17 < 125) {
        // 0x1479e4
        v22 = v1;
        v23 = a4;
        v24 = v21;
    } else {
        // 0x1479e6
        unknown_ffffffff8185f3ec();
        v25 = *(int64_t *)v21;
        v1 = v25;
        __asm_outsb((int16_t)v19, *(char *)v25);
        v22 = v25;
        v23 = a4 - 1;
        v24 = v21 + 8;
    }
    int64_t v26 = v24;
    int64_t v27 = v23;
    int32_t * v28 = (int32_t *)(v22 + 0x394298d6); // 0x1479f2
    uint32_t v29 = *v28; // 0x1479f2
    uint32_t v30 = v29 + (int32_t)v27; // 0x1479f2
    *v28 = v30;
    while (v30 >= v29) {
        // 0x1479e4
        v21 = v26;
        int64_t v31 = v27;
        // 0x1479e6
        unknown_ffffffff8185f3ec();
        v25 = *(int64_t *)v21;
        v1 = v25;
        __asm_outsb((int16_t)v19, *(char *)v25);
        v22 = v25;
        v23 = v31 - 1;
        v24 = v21 + 8;
        // 0x1479f0
        v26 = v24;
        v27 = v23;
        v28 = (int32_t *)(v22 + 0x394298d6);
        v29 = *v28;
        v30 = v29 + (int32_t)v27;
        *v28 = v30;
    }
    int64_t v32 = v19; // 0x1479e0
    int64_t v33 = v32 + 0xe8008000 + (int64_t)(v30 < v29); // 0x1479fe
    int32_t * v34 = (int32_t *)((int64_t)(v19 + 83) + 1); // 0x147a03
    *v34 = *v34 + (int32_t)v26;
    char * v35 = (char *)((int64_t)(v19 - 20) + 70); // 0x147a0b
    *v35 = *v35 + (char)((v32 + 83) / 256);
    return (int64_t)((int32_t)v33 - *(int32_t *)(v33 & 0xffffffff));
}

// Address range: 0x147a40 - 0x147a64
int64_t function_147a40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x147a40
    return unknown_ffffffffe4153457();
}

// Address range: 0x147a64 - 0x147a65
int64_t function_147a64(int64_t a1) {
    // 0x147a64
    int64_t result; // 0x147a64
    return result;
}

// Address range: 0x147a66 - 0x147a67
int64_t function_147a66(int64_t a1) {
    // 0x147a66
    int64_t result; // 0x147a66
    return result;
}

// Address range: 0x147baa - 0x147baf
int64_t function_147baa(int64_t a1, int64_t a2) {
    // 0x147baa
    int64_t result; // 0x147baa
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x147bb3 - 0x147bba
int64_t function_147bb3(void) {
    // 0x147bb3
    int64_t v1; // 0x147bb3
    int64_t result = v1 | 232; // 0x147bb3
    int32_t * v2 = (int32_t *)result; // 0x147bb5
    *v2 = *v2 + (int32_t)v1;
    return result;
}

// Address range: 0x147c61 - 0x147c62
int64_t function_147c61(void) {
    // 0x147c61
    int64_t result; // 0x147c61
    return result;
}

// Address range: 0x147c87 - 0x147ca9
int64_t function_147c87(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x147c87
    int64_t v1; // 0x147c87
    uint32_t v2 = (int32_t)v1 | 0x83f80b2; // 0x147c89
    unsigned char v3 = llvm_ctpop_i8((char)v2); // 0x147c89
    int64_t result = v2; // 0x147c8f
    if (v3 % 2 == 0) {
        result = function_147c61();
    }
    int32_t * v4 = (int32_t *)(result + 0x2bbef3c19); // 0x147ca2
    *v4 = *v4 + (int32_t)v1;
    return result;
}

// Address range: 0x147cc1 - 0x147cc4
int64_t function_147cc1(int64_t a1) {
    // 0x147cc1
    int64_t result; // 0x147cc1
    return result;
}

// Address range: 0x147ccc - 0x147cd3
int64_t function_147ccc(int64_t a1) {
    // 0x147ccc
    return unknown_ffffffffcb4b8cd2(a1);
}

// Address range: 0x3134bb - 0x313516
int64_t function_3134bb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x3134bd
    return __asm_sti();
    // 0x3134f4
    int64_t v1; // 0x3134bb
    *(int32_t *)a4 = (int32_t)v1 + (int32_t)a4;
    unknown_ffffffffb3c4acfd();
    char * v2 = (char *)(a3 + 0x66e73a96); // 0x3134fc
    *v2 = *v2 + (char)(a4 / 256);
    int64_t result = unknown_3d331d08(); // 0x313502
    int32_t * v3 = (int32_t *)(v1 - 61); // 0x313507
    *v3 = *v3 + (int32_t)result;
    return result;
}

// Address range: 0x313525 - 0x313526
int64_t function_313525(void) {
    // 0x313525
    int64_t result; // 0x313525
    return result;
}

// Address range: 0x31352b - 0x31352e
int64_t function_31352b(int64_t a1) {
    // 0x31352b
    int64_t result; // 0x31352b
    return result;
}

// Address range: 0x31353a - 0x31355c
int64_t function_31353a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x31353a
    int64_t v1; // 0x31353a
    int64_t v2 = v1;
    *(char *)(v1 - 24 + 2 * ((v2 + 247) % 256 | v2 & 0x7fffffffffffff00)) = 1;
    __asm_in((int16_t)a3);
    uint32_t v3 = *(int32_t *)(a1 + 58); // 0x313545
    int32_t * v4 = (int32_t *)(a1 - 24); // 0x313548
    *v4 = *v4 - (int32_t)a3 + (int32_t)(v3 > (int32_t)a1);
    uint32_t v5 = (int32_t)a4 % 32; // 0x31354e
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)(8 * a2 - 0x291ead16 + a5); // 0x31354e
        *v6 = *v6 << v5;
    }
    unknown_d9e545b();
    return function_313525();
}

// Address range: 0x313561 - 0x313572
int64_t function_313561(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x313561
    int64_t v1; // 0x313561
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a4;
    int32_t * v2 = (int32_t *)(a3 - 123); // 0x313563
    *v2 = *v2 & (int32_t)v1;
    __asm_sti();
    return function_3135ab(a1, a2, a3);
}

// Address range: 0x313572 - 0x313573
int64_t function_313572(void) {
    // 0x313572
    int64_t result; // 0x313572
    return result;
}

// Address range: 0x3135ab - 0x3135c9
int64_t function_3135ab(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = unknown_fffffffffa6f74b1(); // 0x3135ab
    char * v2 = (char *)(v1 + 0x29d9400); // 0x3135b2
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0x3135ab
    char * v4 = (char *)((256 * v3 & 0xff00 | a3 & -0xff01) + 1); // 0x3135b8
    *v4 = *v4 + (char)(v1 / 256);
    int64_t result = unknown_ffffffffbd3175c1(); // 0x3135bb
    *(char *)0x1086fab1b170099 = (char)result;
    return result;
}

// Address range: 0x313603 - 0x31360a
int64_t function_313603(void) {
    // 0x313603
    int64_t result; // 0x313603
    unsigned char v1 = (char)result;
    *(char *)result = v1 / 128 | 2 * v1;
    return result;
}

// Address range: 0x313619 - 0x31365b
int64_t function_313619(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x313619
    int64_t result; // 0x313619
    bool v1; // 0x313619
    if (!v1) {
        // 0x31361b
        return result;
    }
    int64_t v2 = unknown_ffffffffdef09f3b(); // 0x313635
    uint32_t v3 = (int32_t)a4 % 32; // 0x31364c
    if (v3 != 0) {
        int32_t v4 = v2; // 0x313640
        int32_t * v5 = (int32_t *)(result + 0x2ded1cc4); // 0x31364c
        uint32_t v6 = *v5; // 0x31364c
        *v5 = v6 >> v3 | (int32_t)((int64_t)v6 << (int64_t)(33 - v3)) | (int32_t)(v4 - 0x19aa74e4 < v4 + 0x33fe1708) << 32 - v3;
    }
    unknown_7fc57e59();
    return __asm_hlt();
}

// Address range: 0x31365c - 0x313688
int64_t function_31365c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x31365c
    int64_t v1; // 0x31365c
    int64_t v2 = 2 * v1; // 0x31365c
    int32_t * v3 = (int32_t *)(v2 & 0xffffffff); // 0x31365e
    *v3 = *v3 | (int32_t)v2;
    int64_t v4 = unknown_9225f66(); // 0x313660
    int32_t * v5 = (int32_t *)a1; // 0x313667
    *v5 = (int32_t)(v4 + 0xff00 & 0xff00 | v4 & 0xffff00ff);
    int32_t * v6 = (int32_t *)(unknown_ffffffffe8372eba() + 56); // 0x313670
    *v6 = *v6 + (int32_t)a2;
    int64_t v7; // 0x31365c
    uint32_t v8 = *(int32_t *)&v7; // 0x313673
    int64_t result = v8; // 0x313673
    *v5 = __asm_insd((int16_t)a3);
    __asm_out_133((int16_t)(256 * v1 | a3 % 256), (char)v8);
    int32_t * v9 = (int32_t *)(result - 0x23aa8ffe); // 0x31367f
    *v9 = *v9 + (int32_t)a1;
    return result;
}

// Address range: 0x3138bb - 0x3138c1
int64_t function_3138bb(int64_t result) {
    // 0x3138bb
    return result;
}

// Address range: 0x3138ce - 0x3138cf
int64_t function_3138ce(void) {
    // 0x3138ce
    int64_t result; // 0x3138ce
    return result;
}

// Address range: 0x3138ff - 0x31390f
int64_t function_3138ff(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x3138ff
    int64_t v1; // 0x3138ff
    int64_t v2; // 0x3138ff
    if ((char)(a3 / 256) - (char)v2 < 0) {
        v1 = function_3138ce();
    }
    char * v3 = (char *)(a1 + 108 + a2); // 0x313904
    *v3 = *v3 | (char)a3;
    *(int64_t *)v2 = a4;
    return function_16e3928(v1 & 0xffffffff);
}

// Address range: 0x31390f - 0x313915
int64_t function_31390f(void) {
    // 0x31390f
    int64_t result; // 0x31390f
    return result;
}

// Address range: 0x3139ec - 0x3139ef
int64_t function_3139ec(int64_t a1) {
    // 0x3139ec
    int64_t result; // 0x3139ec
    return result;
}

// Address range: 0x313ada - 0x313ae8
int64_t function_313ada(void) {
    // 0x313ada
    return unknown_11053ce0();
}

// Address range: 0x313b0a - 0x313b0b
int64_t function_313b0a(void) {
    // 0x313b0a
    int64_t result; // 0x313b0a
    return result;
}

// Address range: 0x313b0e - 0x313b0f
int64_t function_313b0e(void) {
    // 0x313b0e
    int64_t result; // 0x313b0e
    return result;
}

// Address range: 0x313b47 - 0x313b4c
int64_t function_313b47(int64_t a1) {
    // 0x313b47
    int64_t result; // 0x313b47
    bool v1; // 0x313b47
    if (v1 || v1) {
        result = function_313b0a();
    }
    // 0x313b49
    return result;
}

// Address range: 0x313b4c - 0x313b50
int64_t function_313b4c(void) {
    // 0x313b4c
    bool v1; // 0x313b4c
    if (true == !v1) {
        function_313b0e();
    }
    // 0x313b4e
    return __asm_wait((int64_t)&g1);
}

// Address range: 0x313b66 - 0x313bd4
int64_t function_313b66(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x313b66
    int32_t * v3 = (int32_t *)(v2 - 2); // 0x313b6b
    *v3 = *v3 / 0x1000;
    char v4 = a4; // 0x313b6f
    *(char *)a1 = *(char *)&v1 | v4;
    char * v5 = (char *)(v2 - 0x7a1061c1); // 0x313b71
    char v6 = *v5; // 0x313b71
    unsigned char v7 = (char)(a3 / 256); // 0x313b71
    *v5 = v6 + v7;
    if (-1 - v6 >= v7) {
        int64_t v8 = v2 + 0xe89fb8fa; // 0x313bb8
        int32_t * v9 = (int32_t *)(a3 + 0x108f6495 + a4); // 0x313bbd
        *v9 = *v9 + (int32_t)v8;
        unknown_fffffffffd49b2cb(v8 & 0xffffffff);
        return function_27973dbc();
    }
    char * v10 = (char *)(v1 + 61); // 0x313b7b
    *v10 = *v10 | v4;
    int32_t * v11 = (int32_t *)(v1 - 101); // 0x313b7e
    *v11 = *v11 + (int32_t)v1;
    unknown_ffffffffe83d4079();
    unknown_4e32789d(*(int32_t *)(v2 + 0x1e86eae) | (int32_t)v1);
    bool v12; // 0x313b66
    return unknown_ffffffffaf567a81(v2, (v12 ? -4 : 4) + a2);
}

// Address range: 0x313bd4 - 0x313bfb
int64_t function_313bd4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x313bd4
    int64_t v1; // 0x313bd4
    int64_t result = v1 + 0xc401e82a & 0xffffffff; // 0x313be4
    int32_t * v2 = (int32_t *)(result + 0x1d583f0a); // 0x313bf4
    *v2 = *v2 + (int32_t)v1;
    return result;
}

// Address range: 0x313c06 - 0x313c0b
int64_t function_313c06(void) {
    // 0x313c06
    return function_ffffffffd9173df3();
}

// Address range: 0x313c47 - 0x313c58
int64_t function_313c47(int64_t a1, int64_t a2, int64_t a3) {
    // 0x313c47
    int64_t v1; // 0x313c47
    char * v2 = (char *)(v1 + 0xab0002 + 4 * v1); // 0x313c47
    *v2 = *v2 + (char)a3;
    unknown_73328954(a1, a2, a3);
    return function_ffffffffe9b83cf1();
}

// Address range: 0x313cfe - 0x313cff
int64_t function_313cfe(void) {
    // 0x313cfe
    int64_t result; // 0x313cfe
    return result;
}

// Address range: 0x313d46 - 0x313dd3
int64_t function_313d46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x313d46
    bool v1; // 0x313d46
    if ((int32_t)unknown_ffffffff8033254c() != -0x1900c0f0) {
        int64_t result = unknown_106c13d1((v1 ? -1 : 1) + a1); // 0x313dcb
        char * v2 = (char *)result; // 0x313dd0
        *v2 = *v2 | (char)a4;
        return result;
    }
    // 0x313d52
    int64_t v3; // 0x313d46
    char v4 = *(char *)(a2 + 0x1fa0629c) & (char)v3; // 0x313d52
    if (v4 >= 0) {
        function_313cfe();
    }
    int32_t * v5 = (int32_t *)(v3 - 83); // 0x313d5d
    *v5 = *v5 + (int32_t)v3;
    char v6 = v3 / 256; // 0x313d60
    *(char *)0x1fec1467 = *(char *)0x1fec1467 + v6;
    *(char *)0x3ac5cc81 = *(char *)0x3ac5cc81 + v6;
    __asm_in_134(112);
    uint32_t v7 = *(int32_t *)((v1 ? -1 : 1) + a2); // 0x313d83
    int64_t result2 = v7; // 0x313d83
    char * v8 = (char *)(result2 - 102); // 0x313d87
    unsigned char v9 = *v8; // 0x313d87
    unsigned char v10 = v9 + (*(char *)(a1 - 109) | v4); // 0x313d87
    *v8 = v10;
    char * v11 = (char *)result2; // 0x313d8c
    *v11 = *v11 - (char)v7 + (char)(v10 < v9);
    *(char *)0x20455d98 = *(char *)0x20455d98 + v6;
    return result2;
}

// Address range: 0x313dde - 0x313de1
int64_t function_313dde(void) {
    // 0x313dde
    int64_t result; // 0x313dde
    return result;
}

// Address range: 0x313e20 - 0x313e30
int64_t function_313e20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 + 0x2168f8a); // 0x313e20
    int64_t v2; // 0x313e20
    bool v3; // 0x313e20
    *v1 = (int32_t)v3 - (int32_t)v2 + *v1;
    int64_t v4; // bp-14865, 0x313e20
    return *(int64_t *)((int64_t)&v4 + a3 & 0xffffffff);
}

// Address range: 0x313e3a - 0x313e3b
int64_t function_313e3a(int64_t a1) {
    // 0x313e3a
    int64_t result; // 0x313e3a
    return result;
}

// Address range: 0x313e4e - 0x313e4f
int64_t function_313e4e(int64_t a1) {
    // 0x313e4e
    int64_t result; // 0x313e4e
    return result;
}

// Address range: 0x313e56 - 0x313e62
int64_t function_313e56(int64_t a1) {
    // 0x313e56
    return (int64_t)*(int32_t *)-0x217e7950fc9afe18;
}

// Address range: 0x313ead - 0x313eaf
int64_t function_313ead(int64_t a1) {
    // 0x313ead
    return __asm_wait(a1);
}
