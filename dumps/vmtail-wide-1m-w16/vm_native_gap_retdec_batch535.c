/*
 * Targeted RetDec C for native executable gap queue batch 535.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2ffc1e-0x2ffe1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ffe1e-0x30001e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30001e-0x30021e rank=- name=- kind=- bytes=- uncovered=-
 *   0x30021e-0x30041e rank=- name=- kind=- bytes=- uncovered=-
 *   0x37ed30-0x37ef30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37ef30-0x37f130 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37f130-0x37f330 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37f330-0x37f530 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g7;
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

int64_t function_2ffc1e(void);
int64_t function_2ffc67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ffcad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ffd34(int64_t a1);
int64_t function_2ffd47(void);
int64_t function_2ffd70(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2ffd96(int64_t a1);
int64_t function_2ffdd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ffe05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2ffe19(int64_t a1);
int64_t function_2ffe9d(int64_t a1);
int64_t function_2ffec2(int64_t a1);
int64_t function_2fff09(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fffef(int64_t a1, int64_t a2, int64_t a3, int64_t result);
int64_t function_30002b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_300047(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_300071(void);
int64_t function_30007a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30014f(void);
int64_t function_300179(void);
int64_t function_3001b6(void);
int64_t function_3001b8(int64_t a1, int64_t a2);
int64_t function_3001c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3001c7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3001e3(void);
int64_t function_3001fa(int64_t a1);
int64_t function_30020b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_300245(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_30030f(void);
int64_t function_300406(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37ed30(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37ed61(int64_t a1);
int64_t function_37ed66(int64_t a1);
int64_t function_37ee18(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37ee1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37ee83(void);
int64_t function_37ee8d(int64_t a1);
int64_t function_37eed0(void);
int64_t function_37eed5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37ef06(int64_t a1, int64_t a2);
int64_t function_37ef2a(void);
int64_t function_37ef38(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37ef5e(int64_t a1, int64_t a2);
int64_t function_37ef94(void);
int64_t function_37f02c(int64_t a1, int64_t a2);
int64_t function_37f0c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37f0d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37f121(void);
int64_t function_37f126(void);
int64_t function_37f12b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_37f141(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37f197(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37f1b8(void);
int64_t function_37f21a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_37f2c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37f346(int64_t a1);
int64_t function_37f3e4(void);
int64_t function_37f425(void);
int64_t function_37f440(int64_t a1);
int64_t function_37f449(void);
int64_t function_37f450(void);
int64_t function_37f457(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37f48e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_37f4b5(void);
int64_t function_37f4bb(void);
int64_t function_37f4c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6838a442();
int64_t function_deed43();
int64_t function_ffffffff80303376();
int64_t function_ffffffff83c3f67d();
int64_t function_ffffffff9024f57d();
int64_t function_ffffffffc9134fdf();
int64_t function_ffffffffe907ef93();
int64_t unknown_11024bd9();
int64_t unknown_18ad9179();
int64_t unknown_28e83c32();
int64_t unknown_2b5d0a34();
int64_t unknown_2c42dc9a();
int64_t unknown_39f4a68c();
int64_t unknown_3b309719();
int64_t unknown_7639a124();
int64_t unknown_83e10aa();
int64_t unknown_ffffffff82677913();
int64_t unknown_ffffffff90711e8d();
int64_t unknown_ffffffff914eb531();
int64_t unknown_ffffffffb4552b40();
int64_t unknown_ffffffffba07a6cf();
int64_t unknown_ffffffffba3aa25d();
int64_t unknown_ffffffffe3918ec4();
int64_t unknown_ffffffffff21c535();

// Address range: 0x2ffc1e - 0x2ffc1f
int64_t function_2ffc1e(void) {
    // 0x2ffc1e
    int64_t result; // 0x2ffc1e
    return result;
}

// Address range: 0x2ffc67 - 0x2ffcac
int64_t function_2ffc67(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a5;
    *(char *)a4 = (char)a4;
    char * v3 = (char *)(a1 + 0x1e81ac5); // 0x2ffc69
    int64_t v4; // 0x2ffc67
    bool v5; // 0x2ffc67
    *v3 = (char)v5 - (char)v4 + *v3;
    int64_t result = __asm_wait(); // 0x2ffc6f
    int64_t v6; // 0x2ffc67
    *(char *)a1 = *(char *)&v6;
    int64_t v7 = v5 ? -1 : 1; // 0x2ffc70
    v6 = v7 + a2;
    *(int32_t *)(v7 + a1) = (int32_t)result;
    char * v8 = (char *)(v4 % 256 | a4 & -256); // 0x2ffc72
    char v9 = *v8 - 58; // 0x2ffc72
    *v8 = v9;
    if (v9 != 0) {
        // 0x2ffc77
        return (int64_t)&v2;
    }
    // 0x2ffcaa
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v6;
    return result;
}

// Address range: 0x2ffcad - 0x2ffcb0
int64_t function_2ffcad(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ffcad
    int64_t result; // 0x2ffcad
    return result;
}

// Address range: 0x2ffd34 - 0x2ffd47
int64_t function_2ffd34(int64_t a1) {
    // 0x2ffd34
    return __asm_wait();
}

// Address range: 0x2ffd47 - 0x2ffd4a
int64_t function_2ffd47(void) {
    // 0x2ffd47
    int64_t result; // 0x2ffd47
    return result;
}

// Address range: 0x2ffd70 - 0x2ffd83
int64_t function_2ffd70(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2ffd70
    int64_t v1; // 0x2ffd70
    *(int32_t *)a1 = (int32_t)v1;
    int32_t * v2 = (int32_t *)(v1 - 0x675d3d00); // 0x2ffd7a
    *v2 = *v2 + (int32_t)a2;
    return 2 * (a3 % 256 & a3 / 256 | a3 & 0x7fffff00);
}

// Address range: 0x2ffd96 - 0x2ffd99
int64_t function_2ffd96(int64_t a1) {
    // 0x2ffd96
    int64_t result; // 0x2ffd96
    return result;
}

// Address range: 0x2ffdd0 - 0x2ffde8
int64_t function_2ffdd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 0x47daf5c8); // 0x2ffdd6
    int64_t v2; // 0x2ffdd0
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x2ffdd0
    __asm_outsd((int16_t)a3, *(int32_t *)&v3);
    return a2 & 0xe8b693af;
}

// Address range: 0x2ffe05 - 0x2ffe0d
int64_t function_2ffe05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2ffe05
    int64_t v1; // 0x2ffe05
    return v1 & -0xff01 | (int64_t)&g1;
}

// Address range: 0x2ffe19 - 0x2ffe1a
int64_t function_2ffe19(int64_t a1) {
    // 0x2ffe19
    int64_t result; // 0x2ffe19
    return result;
}

// Address range: 0x2ffe9d - 0x2ffea0
int64_t function_2ffe9d(int64_t a1) {
    // 0x2ffe9d
    int64_t v1; // 0x2ffe9d
    return (int64_t)&v1;
}

// Address range: 0x2ffec2 - 0x2ffec3
int64_t function_2ffec2(int64_t a1) {
    // 0x2ffec2
    int64_t result; // 0x2ffec2
    return result;
}

// Address range: 0x2fff09 - 0x2fff29
int64_t function_2fff09(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = __asm_in((int16_t)a3); // 0x2fff0a
    uint32_t v2 = (int32_t)a4 % 32; // 0x2fff0b
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)(int64_t)v1; // 0x2fff0b
        uint32_t v4 = *v3; // 0x2fff0b
        *v3 = v4 >> 32 - v2 | v4 << v2;
    }
    unknown_ffffffff82677913();
    int64_t v5; // 0x2fff09
    char * v6 = (char *)((v5 & 0xffffffff) + 0xf0079fe); // 0x2fff14
    *v6 = *v6 + (char)v5;
    unknown_7639a124();
    return a4 & 0xffffff06;
}

// Address range: 0x2fffef - 0x300016
int64_t function_2fffef(int64_t a1, int64_t a2, int64_t a3, int64_t result) {
    // 0x2fffef
    int64_t v1; // 0x2fffef
    uint64_t v2 = v1;
    char v3 = v2 / 256; // 0x2fffef
    *(char *)-0xf12070a = *(char *)-0xf12070a + v3;
    *(char *)-0x4fdeb0f4 = *(char *)-0x4fdeb0f4 + v3;
    int32_t * v4 = (int32_t *)(v2 - 94); // 0x30000b
    *v4 = *v4 - 0x5c00073;
    return result;
}

// Address range: 0x30002b - 0x30003d
int64_t function_30002b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x30002b
    unknown_ffffffffff21c535();
    uint32_t v1 = __asm_in_133(121); // 0x300034
    return ((int64_t)v1 + a4) % 256 | (int64_t)(v1 & -256);
}

// Address range: 0x300047 - 0x300071
int64_t function_300047(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 + 0x28a214fb; // 0x300047
    bool v2; // 0x300047
    __writefsbyte(v1, __readfsbyte(v1) + 77 + (char)v2);
    int64_t v3 = a3 & -0xff01 | (int64_t)&g4; // 0x30004f
    *(int32_t *)-0x5f145532 = *(int32_t *)-0x5f145532 + (int32_t)v3;
    int64_t v4; // 0x300047
    char * v5 = (char *)(v4 + 0x753101e8); // 0x300059
    *v5 = *v5 + (char)v4;
    return function_30007a(a1, a2, v3, a4, (int64_t)&g7);
}

// Address range: 0x300071 - 0x300074
int64_t function_300071(void) {
    // 0x300071
    int64_t result; // 0x300071
    return result;
}

// Address range: 0x30007a - 0x30010b
int64_t function_30007a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x30007a
    int64_t v1; // 0x30007a
    *(char *)a1 = (char)v1;
    bool v2; // 0x30007a
    int64_t v3 = v2 ? -1 : 1; // 0x30007b
    int64_t v4 = v3 + a1; // 0x30007b
    int64_t v5 = v3 + a2; // 0x30007b
    *(char *)v4 = (char)a5;
    int64_t v6 = v4 + v3; // 0x300086
    unknown_ffffffff90711e8d(v6, v5, 0xd201e876);
    uint32_t v7 = (int32_t)v6; // 0x30008c
    uint32_t v8 = *(int32_t *)(4 * v1 + 82 + v1); // 0x30008c
    int32_t v9 = v8 + v7; // 0x30008c
    int64_t result = unknown_2c42dc9a(v9) & -256 | (int64_t)*(char *)-0x4dfe172fae3bfaf8; // 0x300099
    if (((v9 ^ v7) & (v9 ^ v8)) >= 0) {
        // 0x300103
        return result;
    }
    int16_t v10 = 0x4000 * (int16_t)v2 | 1024 * (int16_t)v2 | 512 * (int16_t)v2 | 256 * (int16_t)v2 | (int16_t)(v9 < v7) | 64 * (int16_t)(v9 == 0) | 128 * (int16_t)(v9 < 0) | 16 * (int16_t)(v8 % 16 + v7 % 16 > 15) | 2048 * (int16_t)(((v9 ^ v7) & (v9 ^ v8)) < 0) | 4 * (int16_t)(llvm_ctpop_i8((char)v9) % 2 == 0) | 2; // 0x300090
    __asm_out(v10, (int32_t)result);
    uint32_t v11 = *(int32_t *)(a4 - 0x178ce000) + (int32_t)a4; // 0x3000b0
    int64_t v12 = v11; // 0x3000b0
    int32_t * v13 = (int32_t *)(2 * v5 - 0x72a8ff55 + v12); // 0x3000b6
    *v13 = *v13 + v11;
    __asm_in_134(v10);
    unknown_ffffffffe3918ec4();
    int32_t * v14 = (int32_t *)(v12 - 0x515a300a); // 0x3000c3
    *v14 = *v14 ^ (int32_t)v1;
    return unknown_ffffffffba07a6cf();
}

// Address range: 0x30014f - 0x300150
int64_t function_30014f(void) {
    // 0x30014f
    int64_t result; // 0x30014f
    return result;
}

// Address range: 0x300179 - 0x30017c
int64_t function_300179(void) {
    // 0x300179
    int64_t v1; // 0x300179
    return function_3001c7(v1, v1, v1, (int64_t)&g7);
}

// Address range: 0x3001b6 - 0x3001b8
int64_t function_3001b6(void) {
    // 0x3001b6
    int64_t v1; // 0x3001b6
    return function_3001c0(v1, v1, v1, v1, (int64_t)&g7);
}

// Address range: 0x3001b8 - 0x3001c0
int64_t function_3001b8(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 0x89801e8); // 0x3001b8
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x3001b8
    return result;
}

// Address range: 0x3001c0 - 0x3001c3
int64_t function_3001c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3001c0
    int64_t result; // 0x3001c0
    return result;
}

// Address range: 0x3001c7 - 0x3001e1
int64_t function_3001c7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x3001c7
    int64_t v1; // 0x3001c7
    uint64_t v2 = v1;
    int64_t v3 = v1;
    bool v4; // 0x3001c7
    int64_t v5 = v4 ? 239 : 238; // 0x3001c7
    *(int32_t *)0x2415013d01e801e8 = (int32_t)((v3 - v5) % 256 | v3 & 0xffffff00);
    int64_t v6 = unknown_11024bd9() & 0xffffffff; // 0x3001d8
    int32_t v7 = 0x10000 * (int32_t)a1 >> 16; // 0x3001d9
    unsigned char v8 = (char)v7; // 0x3001da
    unsigned char v9 = v8 - 66 + (char)(a4 % 2 != 0); // 0x3001da
    bool v10 = a4 % 2 != 0 ? v9 <= v8 : v8 > 65; // 0x3001da
    char * v11 = (char *)(v2 + a2); // 0x3001dc
    *v11 = (char)v10 - (char)(v2 / 256) + *v11;
    int16_t v12 = a3; // 0x3001df
    *(char *)v6 = __asm_insb(v12);
    *(int32_t *)v6 = __asm_insd(v12);
    return (int64_t)v9 | (int64_t)(v7 & -256);
}

// Address range: 0x3001e3 - 0x3001e6
int64_t function_3001e3(void) {
    // 0x3001e3
    int64_t result; // 0x3001e3
    return result;
}

// Address range: 0x3001fa - 0x3001fb
int64_t function_3001fa(int64_t a1) {
    // 0x3001fa
    int64_t result; // 0x3001fa
    return result;
}

// Address range: 0x30020b - 0x300245
int64_t function_30020b(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x30020b
    int64_t v1; // 0x30020b
    int64_t v2 = v1;
    bool v3; // 0x30020b
    unsigned char v4 = (char)v3 + (char)(a3 / 256) - *(char *)(v1 - 0x4c06b100); // 0x30020b
    int64_t v5 = 256 * (int64_t)v4 | a3 & -0xff01; // 0x30020b
    char * v6 = (char *)(8 * v5 + a1); // 0x300211
    *v6 = *v6 + (char)v1;
    int64_t v7 = (v2 + 70) % 256 | v2 & -256; // 0x300215
    char * v8 = (char *)(v7 + 0x28013d2f); // 0x300219
    *v8 = *v8 + (char)a4;
    int64_t v9 = v7 + 0x6216744c; // 0x300221
    int64_t v10 = a4 + a2; // 0x300226
    *(char *)a4 = (char)v9;
    char * v11 = (char *)((2 * v10 & 0x1fffffffe) + 61 + (v9 & 0xffffffff)); // 0x300231
    *v11 = *v11 + v4;
    int32_t * v12 = (int32_t *)(a6 - 97); // 0x300235
    *v12 = *v12 + (int32_t)v9;
    return function_ffffffffc9134fdf(a6, (int32_t)v10, v5);
}

// Address range: 0x300245 - 0x300279
int64_t function_300245(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x300245
    int64_t v1; // 0x300245
    char * v2 = (char *)((v1 & 0xffffff3a) + 101); // 0x300254
    *v2 = *v2 + (char)((uint64_t)v1 / 256);
    unknown_ffffffffba3aa25d();
    *(int32_t *)-0x20ce1596 = *(int32_t *)-0x20ce1596 + (int32_t)a1;
    return unknown_18ad9179();
}

// Address range: 0x30030f - 0x300314
int64_t function_30030f(void) {
    // 0x30030f
    return function_ffffffff80303376();
}

// Address range: 0x300406 - 0x30040d
int64_t function_300406(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x300406
    *(char *)a2 = (char)a3;
    int64_t v1; // 0x300406
    return v1 ^ 113;
}

// Address range: 0x37ed30 - 0x37ed42
int64_t function_37ed30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x54771c39; // 0x37ed31
    int64_t v2; // 0x37ed30
    *(char *)0x54771c39 = v1 + (char)((uint64_t)v2 / 256);
    char v3 = v2;
    *(char *)a3 = v3 >> 1;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    uint32_t v4 = (int32_t)a4 % 32; // 0x37ed3b
    int64_t v5; // 0x37ed30
    if (v4 != 0) {
        uint32_t v6 = *(int32_t *)&v5; // 0x37ed3b
        *(int32_t *)v5 = v6 >> v4 | (int32_t)(v3 % 2 != 0) << 32 - v4 | (int32_t)((int64_t)v6 << (int64_t)(33 - v4));
    }
    int64_t v7 = v5 & 129 | 126; // 0x37ed3d
    int64_t result = v7 | v5 & -256; // 0x37ed3d
    char * v8 = (char *)result; // 0x37ed40
    *v8 = *v8 ^ (char)v7;
    return result;
}

// Address range: 0x37ed61 - 0x37ed64
int64_t function_37ed61(int64_t a1) {
    // 0x37ed61
    int64_t result; // 0x37ed61
    return result;
}

// Address range: 0x37ed66 - 0x37ed69
int64_t function_37ed66(int64_t a1) {
    // 0x37ed66
    int64_t result; // 0x37ed66
    return result;
}

// Address range: 0x37ee18 - 0x37ee1e
int64_t function_37ee18(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37ee18
    int64_t result; // 0x37ee18
    return result;
}

// Address range: 0x37ee1f - 0x37ee32
int64_t function_37ee1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x37ee1f
    int64_t v1; // 0x37ee1f
    *(int32_t *)-0x175dff1f7a7ffa18 = (int32_t)v1;
    int32_t * v2 = (int32_t *)(a1 + 84); // 0x37ee2a
    *v2 = *v2 + (int32_t)a4;
    return v1 & -256 | 146;
}

// Address range: 0x37ee83 - 0x37ee8b
int64_t function_37ee83(void) {
    // 0x37ee83
    int64_t v1; // 0x37ee83
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return function_ffffffffe907ef93();
}

// Address range: 0x37ee8d - 0x37ee8e
int64_t function_37ee8d(int64_t a1) {
    // 0x37ee8d
    int64_t result; // 0x37ee8d
    return result;
}

// Address range: 0x37eed0 - 0x37eed1
int64_t function_37eed0(void) {
    // 0x37eed0
    int64_t result; // 0x37eed0
    return result;
}

// Address range: 0x37eed5 - 0x37eedd
int64_t function_37eed5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37eed5
    int64_t v1; // 0x37eed5
    __asm_frstor(*(int864_t *)&v1);
    int64_t result; // 0x37eed5
    return result;
}

// Address range: 0x37ef06 - 0x37ef1e
int64_t function_37ef06(int64_t a1, int64_t a2) {
    // 0x37ef06
    int64_t v1; // 0x37ef06
    bool v2; // 0x37ef06
    unsigned char v3 = (char)v1 - 81 + (char)v2; // 0x37ef07
    int32_t * v4 = (int32_t *)(a1 - 110); // 0x37ef0c
    int32_t v5 = *v4 | (int32_t)a2; // 0x37ef0c
    *v4 = v5;
    if (v5 == 0 || v5 < 0 != v3 % 2 != v3 / 128) {
        function_37eed0();
    }
    // 0x37ef13
    unknown_3b309719();
    return function_ffffffff9024f57d();
}

// Address range: 0x37ef2a - 0x37ef2b
int64_t function_37ef2a(void) {
    // 0x37ef2a
    int64_t result; // 0x37ef2a
    return result;
}

// Address range: 0x37ef38 - 0x37ef42
int64_t function_37ef38(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37ef38
    int64_t result; // 0x37ef38
    int32_t * v1 = (int32_t *)(result + 15); // 0x37ef38
    *v1 = *v1 + 0x1768d267;
    return result;
}

// Address range: 0x37ef5e - 0x37ef60
int64_t function_37ef5e(int64_t a1, int64_t a2) {
    // 0x37ef5e
    int64_t result; // 0x37ef5e
    return result;
}

// Address range: 0x37ef94 - 0x37ef96
int64_t function_37ef94(void) {
    // 0x37ef94
    return function_37ef2a();
}

// Address range: 0x37f02c - 0x37f0be
int64_t function_37f02c(int64_t a1, int64_t a2) {
    // 0x37f02c
    unknown_2b5d0a34();
    bool v1; // 0x37f02c
    if (!v1) {
        // 0x37f035
        return function_ffffffff83c3f67d();
    }
    // 0x37f06f
    int64_t v2; // 0x37f02c
    unsigned char v3 = *(char *)(a1 + 0x1e80048) | (char)v2; // 0x37f06f
    *(int32_t *)a1 = (int32_t)a2;
    int64_t v4 = v1 ? -4 : 4; // 0x37f075
    char * v5 = (char *)(v2 - 0x662a9100); // 0x37f076
    *v5 = *v5 + v3;
    int64_t v6 = v4 + a1;
    int64_t v7; // 0x37f02c
    int64_t v8 = v7;
    char v9 = *(char *)((v2 & -0x10000 | (int64_t)v3 | 0xf100) - 11); // 0x37f07e
    int64_t v10 = v8 & -256 | (int64_t)(v9 | (char)v8); // 0x37f07e
    int64_t v11; // 0x37f02c
    int32_t * v12 = (int32_t *)(v11 + 1); // 0x37f081
    int64_t v13; // 0x37f02c
    *v12 = (int32_t)v13;
    int64_t v14 = (int64_t)*v12; // 0x37f081
    int64_t v15 = *(int64_t *)v14; // 0x37f084
    int64_t v16 = unknown_39f4a68c(v6) & 0xffffffff; // 0x37f08b
    __asm_out_135(125, (char)v6);
    *(int32_t *)v16 = (int32_t)v6;
    int64_t v17 = v16 + v4; // 0x37f091
    char * v18 = (char *)(v6 & 0xffffffff); // 0x37f092
    char v19 = *v18 + (char)v15; // 0x37f092
    *v18 = v19;
    int64_t v20 = v15 - 1; // 0x37f094
    while (v20 != 0 == v19 == 0) {
        // 0x37f07e
        v6 = v17;
        v8 = v10;
        v9 = *(char *)((v2 & -0x10000 | (int64_t)v3 | 0xf100) - 11);
        v10 = v8 & -256 | (int64_t)(v9 | (char)v8);
        v12 = (int32_t *)(v20 + 1);
        *v12 = (int32_t)(v14 + 8);
        v14 = (int64_t)*v12;
        v15 = *(int64_t *)v14;
        v16 = unknown_39f4a68c(v6) & 0xffffffff;
        __asm_out_135(125, (char)v6);
        *(int32_t *)v16 = (int32_t)v6;
        v17 = v16 + v4;
        v18 = (char *)(v6 & 0xffffffff);
        v19 = *v18 + (char)v15;
        *v18 = v19;
        v20 = v15 - 1;
    }
    // 0x37f096
    *(char *)v20 = (char)v20;
    unknown_83e10aa(v17);
    return __asm_in((int16_t)v10);
}

// Address range: 0x37f0c3 - 0x37f0c4
int64_t function_37f0c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37f0c3
    int64_t result; // 0x37f0c3
    return result;
}

// Address range: 0x37f0d1 - 0x37f0d6
int64_t function_37f0d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37f0d1
    int64_t result; // 0x37f0d1
    bool v1; // 0x37f0d1
    if (a4 != 1 == v1) {
        result = function_37f0c3(a1, a2, a3, a4);
    }
    // 0x37f0d3
    return result;
}

// Address range: 0x37f121 - 0x37f122
int64_t function_37f121(void) {
    // 0x37f121
    int64_t result; // 0x37f121
    return result;
}

// Address range: 0x37f126 - 0x37f127
int64_t function_37f126(void) {
    // 0x37f126
    int64_t result; // 0x37f126
    return result;
}

// Address range: 0x37f12b - 0x37f141
int64_t function_37f12b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37f12b
    unknown_ffffffff914eb531();
    int64_t v1; // 0x37f12b
    *(char *)a3 = (char)v1 + (char)a3;
    __asm_iretd();
    unknown_ffffffffb4552b40();
    return function_37f121();
}

// Address range: 0x37f141 - 0x37f146
int64_t function_37f141(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x37f141
    int64_t result; // 0x37f141
    if (v1 != 0) {
        uint32_t v2 = (int32_t)result;
        *(int32_t *)result = v2 >> 32 - v1 | v2 << v1;
    }
    return result;
}

// Address range: 0x37f197 - 0x37f1ae
int64_t function_37f197(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37f197
    int64_t result; // 0x37f197
    *(char *)a3 = (char)result + (char)a4;
    int64_t v1; // 0x37f197
    *(char *)a2 = *(char *)&v1 & (char)result;
    *(char *)0x3d999174 = *(char *)0x3d999174 - (char)a3;
    int32_t * v2 = (int32_t *)(result + 68); // 0x37f1a2
    *v2 = *v2 + (int32_t)a4;
    return result;
}

// Address range: 0x37f1b8 - 0x37f1bc
int64_t function_37f1b8(void) {
    // 0x37f1b8
    int64_t result; // 0x37f1b8
    return result;
}

// Address range: 0x37f21a - 0x37f29d
int64_t function_37f21a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x37f21a
    int64_t v1; // 0x37f21a
    int64_t v2 = v1 + 0xe82e341e; // 0x37f21d
    int32_t * v3 = (int32_t *)(v2 & 0xffffffff); // 0x37f222
    *v3 = *v3 + (int32_t)v2;
    int64_t result = unknown_28e83c32(); // 0x37f22c
    char * v4 = (char *)(a3 + 0x1e83a95); // 0x37f231
    *v4 = *v4 + (char)(a3 / 256);
    return result;
}

// Address range: 0x37f2c4 - 0x37f2ce
int64_t function_37f2c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 + 0x4b071287); // 0x37f2c6
    *v1 = *v1 + (int32_t)a3;
    int64_t result; // 0x37f2c4
    return result;
}

// Address range: 0x37f346 - 0x37f347
int64_t function_37f346(int64_t a1) {
    // 0x37f346
    int64_t result; // 0x37f346
    return result;
}

// Address range: 0x37f3e4 - 0x37f3e5
int64_t function_37f3e4(void) {
    // 0x37f3e4
    int64_t result; // 0x37f3e4
    return result;
}

// Address range: 0x37f425 - 0x37f426
int64_t function_37f425(void) {
    // 0x37f425
    int64_t result; // 0x37f425
    return result;
}

// Address range: 0x37f440 - 0x37f443
int64_t function_37f440(int64_t a1) {
    // 0x37f440
    int64_t result; // 0x37f440
    return result;
}

// Address range: 0x37f449 - 0x37f44e
int64_t function_37f449(void) {
    // 0x37f449
    return function_deed43();
}

// Address range: 0x37f450 - 0x37f455
int64_t function_37f450(void) {
    // 0x37f450
    return function_6838a442();
}

// Address range: 0x37f457 - 0x37f46c
int64_t function_37f457(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x37f457
    int64_t v1; // 0x37f457
    int64_t v2 = (v1 + 212) % 256; // 0x37f45a
    if (a4 != 1) {
        v2 = function_37f3e4();
    }
    char * v3 = (char *)((int64_t)((int32_t)v1 >> 31) - 68); // 0x37f45c
    *v3 = *v3 | (char)v2;
    return __asm_iretd();
}

// Address range: 0x37f48e - 0x37f4ac
int64_t function_37f48e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x37f48e
    int64_t v1; // 0x37f48e
    int64_t v2 = v1;
    bool v3; // 0x37f48e
    if (v3 || v3) {
        // 0x37f49c
        __asm_hlt();
        __asm_outsd((int16_t)a3, *(int32_t *)((v3 ? -1 : 1) + a2));
        *(int32_t *)v2 = (int32_t)v2 >> 10;
        return a4 & 0xffffff00 | (int64_t)*(char *)(v2 + a4 % 256);
    }
    // 0x37f490
    return a1 & 0xffffffff;
}

// Address range: 0x37f4b5 - 0x37f4b6
int64_t function_37f4b5(void) {
    // 0x37f4b5
    int64_t result; // 0x37f4b5
    return result;
}

// Address range: 0x37f4bb - 0x37f4bc
int64_t function_37f4bb(void) {
    // 0x37f4bb
    int64_t result; // 0x37f4bb
    return result;
}

// Address range: 0x37f4c3 - 0x37f4d3
int64_t function_37f4c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37f4c3
    bool v1; // 0x37f4c3
    if (a4 != 1 && !v1) {
        function_37f4b5();
    }
    // 0x37f4c5
    int64_t v2; // 0x37f4c3
    char * v3 = (char *)(v2 - 0x76245063); // 0x37f4ca
    *v3 = 2 * *v3;
    __asm_hlt();
    return function_37f4bb();
}
