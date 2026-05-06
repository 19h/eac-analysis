/*
 * Targeted RetDec C for native executable gap queue batch 477.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1730aa-0x1732aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1732aa-0x1734aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1734aa-0x1736aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1736aa-0x1738aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1738aa-0x173aaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x37d530-0x37d730 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37d730-0x37d930 rank=- name=- kind=- bytes=- uncovered=-
 *   0x37d930-0x37db30 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1730aa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_17311f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_173176(int64_t a1);
int64_t function_17318e(void);
int64_t function_1731ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_173234(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_173297(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1732b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1732e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1733a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1733ee(int64_t a1, int64_t a2);
int64_t function_173406(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17348f(int64_t a1);
int64_t function_1734c0(void);
int64_t function_1734d2(int64_t a1);
int64_t function_1734f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_173556(void);
int64_t function_17356d(int64_t a1);
int64_t function_17357f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_17360e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_173685(int64_t a1);
int64_t function_17368e(int64_t a1);
int64_t function_17369e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_17372f(int64_t a1);
int64_t function_173732(int64_t a1, int64_t a2);
int64_t function_17374b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_173764(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_173779(void);
int64_t function_173783(int64_t a1);
int64_t function_173794(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1737d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_173842(void);
int64_t function_1738da(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, char a5);
int64_t function_173a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_173a4d(int64_t a1);
int64_t function_173a65(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_173a8c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2e0edb2f();
int64_t function_37d530(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37d5cc(int64_t a1);
int64_t function_37d5d7(void);
int64_t function_37d5ea(int64_t a1);
int64_t function_37d652(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37d6f8(void);
int64_t function_37d6fc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5);
int64_t function_37d72f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_37d760(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37d7ec(int64_t a1);
int64_t function_37d81d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_37d923(int64_t a1);
int64_t function_37d925(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37d972(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_37d9a7(void);
int64_t function_37d9d1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_37da20(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_37daf5(int64_t a1);
int64_t function_37dafe(void);
int64_t function_37db22(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3fb33f75();
int64_t function_ffffffff85e42f39();
int64_t function_ffffffffa1df13fb();
int64_t function_ffffffffaf4d52dd();
int64_t unknown_131cebcf();
int64_t unknown_17570de1();
int64_t unknown_1c398108();
int64_t unknown_1f981d66();
int64_t unknown_2173ec14();
int64_t unknown_2249712d();
int64_t unknown_30bae739();
int64_t unknown_3a7d9c1d();
int64_t unknown_3aa37938();
int64_t unknown_3ab164ff();
int64_t unknown_3acc858a();
int64_t unknown_3e09cdbe();
int64_t unknown_4895ec0();
int64_t unknown_5ae1b2b1();
int64_t unknown_68961d39();
int64_t unknown_7342b27b();
int64_t unknown_7ad3d63b();
int64_t unknown_7ecb7ff9();
int64_t unknown_ffffffff8cef8c9f();
int64_t unknown_ffffffff9cb890aa();
int64_t unknown_ffffffffa398ed85();
int64_t unknown_ffffffffa49b34e8();
int64_t unknown_ffffffffad5c4496();
int64_t unknown_ffffffffb1e04373();
int64_t unknown_ffffffffb4543d33();
int64_t unknown_ffffffffb4a44396();
int64_t unknown_ffffffffc4c07dd6();
int64_t unknown_ffffffffc54d3180();
int64_t unknown_ffffffffc81ac26a();
int64_t unknown_ffffffffd208b13d();
int64_t unknown_ffffffffd40e3d95();
int64_t unknown_ffffffffd7489c23();
int64_t unknown_ffffffffda6ec648();
int64_t unknown_ffffffffe85a8a09();
int64_t unknown_ffffffffe8cd680a();
int64_t unknown_fffffffffa4e75ed();
int64_t unknown_fffffffffc3df12e();

// Address range: 0x1730aa - 0x1730d3
int64_t function_1730aa(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x1730aa
    unknown_5ae1b2b1();
    int32_t * v1 = (int32_t *)(a5 + 40); // 0x1730b2
    int64_t v2; // 0x1730aa
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x1730aa
    int32_t * v4 = (int32_t *)(4 * a1 - 44 + (int64_t)&v3); // 0x1730b5
    uint32_t v5 = *v4; // 0x1730b5
    *v4 = v5 / 512 | 0x800000 * v5;
    unknown_4895ec0();
    int64_t result = unknown_131cebcf(); // 0x1730c9
    char * v6 = (char *)(a3 + a2); // 0x1730ce
    *v6 = *v6 + (char)(a4 / 256);
    return result;
}

// Address range: 0x17311f - 0x17314c
int64_t function_17311f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17311f
    int64_t v1; // 0x17311f
    *(int32_t *)(v1 - 0x382bfe18) = 0x798d7f;
    if (*(int32_t *)(v1 - 81) + (int32_t)v1 < 0) {
        // 0x173142
        *(int32_t *)-0x17be59b5 = *(int32_t *)-0x17be59b5 + (int32_t)a1;
        return 2 * v1 & 0xffffffff;
    }
    // 0x173130
    unknown_3aa37938();
    return a1 & 0xffffffff;
}

// Address range: 0x173176 - 0x173179
int64_t function_173176(int64_t a1) {
    // 0x173176
    int64_t result; // 0x173176
    return result;
}

// Address range: 0x17318e - 0x17318f
int64_t function_17318e(void) {
    // 0x17318e
    int64_t result; // 0x17318e
    return result;
}

// Address range: 0x1731ca - 0x173223
int64_t function_1731ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x1731d0
    if (v1 != 0) {
        *(char *)0x175588 = *(char *)0x175588 >> v1;
    }
    // 0x173204
    *(char *)-0x9ad202a = *(char *)-0x9ad202a - 1;
    int64_t v2; // 0x1731ca
    int32_t v3 = *(int32_t *)(v2 + 0x9a577434 & 0xffffffff); // 0x1731e6
    *(int32_t *)a1 = (int32_t)a2;
    bool v4; // 0x1731ca
    int64_t v5 = v4 ? 0xfffffffc : 4; // 0x1731e8
    unknown_ffffffffe8cd680a();
    *(int32_t *)0x321610 = *(int32_t *)0x321610 + (int32_t)(v5 + a1);
    int64_t v6 = unknown_3a7d9c1d(0x6fc1a362); // 0x173217
    uint64_t v7 = v6 + 140; // 0x17321c
    char * v8 = (char *)(int64_t)(v3 & (int32_t)a4); // 0x17321e
    *v8 = *v8 + (char)v7;
    return v7 % 256 | v6 & -256;
}

// Address range: 0x173234 - 0x173297
int64_t function_173234(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x173234
    int64_t v3; // 0x173234
    bool v4; // 0x173234
    if (!v4) {
        int64_t result = unknown_ffffffffc81ac26a(); // 0x173264
        *(int32_t *)a1 = (int32_t)a2;
        int32_t * v5 = (int32_t *)(8 * v2 + 0x795eb9e6); // 0x173270
        *v5 = *v5 + (int32_t)v3;
        return result;
    }
    char * v6 = (char *)(v3 + (8 * v3 | 1)); // 0x173236
    *v6 = *v6 ^ (char)(a4 / 256);
    *(char *)a3 = (char)a4;
    int64_t v7 = v3 + 0xffffffe8; // 0x173281
    *(int32_t *)v2 = *(int32_t *)&v2 + (int32_t)v3;
    int32_t v8 = *(int32_t *)v3; // 0x173286
    *(int32_t *)(a1 - 0x111136c) = (int32_t)v7;
    __asm_outsd((int16_t)v7, *(int32_t *)&v1);
    int64_t v9 = v3 & 0xffffffff; // 0x17328f
    unknown_ffffffffad5c4496(v9);
    return function_1732b9(v9, v1, v7 & 0xffffffff, (int64_t)(v8 | (int32_t)a4));
}

// Address range: 0x173297 - 0x1732b9
int64_t function_173297(int64_t a1, int64_t a2, int64_t a3) {
    // 0x173297
    int64_t v1; // 0x173297
    *(char *)a1 = (char)v1;
    bool v2; // 0x173297
    int64_t v3 = v2 ? -1 : 1; // 0x173297
    int64_t v4 = v3 + a1; // 0x173297
    *(int64_t *)v4 = unknown_ffffffff8cef8c9f(v4, v3 + a2, a3);
    __asm_in((int16_t)a3);
    uint64_t v5 = unknown_ffffffff9cb890aa(); // 0x1732a4
    char * v6 = (char *)v5; // 0x1732a9
    *v6 = *v6 + (char)(v5 / 256);
    int32_t * v7 = (int32_t *)a3; // 0x1732ab
    *v7 = *v7 | -27;
    uint64_t v8 = v5 + 7; // 0x1732ae
    *(char *)0x8000175c0e01e8 = (char)v8;
    return v8 % 256 | v5 & -256;
}

// Address range: 0x1732b9 - 0x1732c7
int64_t function_1732b9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1732b9
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x1732b9
    int64_t v2; // 0x1732b9
    *(int32_t *)a1 = *(int32_t *)&v1 & (int32_t)v2;
    char * v3 = (char *)(v2 - 0x3bfe1800); // 0x1732bc
    *v3 = *v3 + (char)(v2 / 256);
    char * v4 = (char *)(a1 + 110); // 0x1732c2
    *v4 = *v4 + (char)a4;
    return v2 ^ 246;
}

// Address range: 0x1732e0 - 0x173345
int64_t function_1732e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1732e0
    int64_t v1; // 0x1732e0
    int64_t v2 = v1;
    int64_t v3 = a3;
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a2;
    int32_t * v4 = (int32_t *)(a4 + 0x2c8e26fa); // 0x1732ed
    *v4 = *v4 + (int32_t)v1;
    int64_t v5 = a4 + a3; // 0x1732f3
    int64_t v6 = ((v2 | 58) + v1) % 256 | v2 & -256; // 0x1732f9
    int32_t * v7 = (int32_t *)(a3 - 0x52ba4f34); // 0x1732fc
    uint32_t v8 = *v7; // 0x1732fc
    uint32_t v9 = v8 + (int32_t)v6; // 0x1732fc
    *v7 = v9;
    int32_t v10 = *(int32_t *)-0x6e5971b2; // 0x173302
    *(int32_t *)-0x6e5971b2 = v10 + (int32_t)a3 + (int32_t)(v9 < v8);
    *(char *)0xe80060d6 = __asm_insb((int16_t)a3);
    unsigned char v11 = (char)v5; // 0x173312
    unsigned char v12 = v11 % 32; // 0x173312
    if (v12 != 0) {
        *(char *)v3 = *(char *)&v3 << v12;
    }
    *(char *)(v5 & 0xffffffff) = v11;
    int64_t v13 = (v6 + 0xe80060d6) / 2 & 0x7fffff00 | (int64_t)*(char *)0x12ec55f501e851c1; // 0x173327
    char * v14 = (char *)v13; // 0x173333
    *v14 = *v14 + v11;
    int32_t * v15 = (int32_t *)v13; // 0x173335
    *v15 = *v15 + (int32_t)v13;
    return unknown_ffffffffd208b13d() & -256 | (int64_t)__asm_in((int16_t)v3);
}

// Address range: 0x1733a6 - 0x1733a9
int64_t function_1733a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1733a6
    int64_t result; // 0x1733a6
    return result;
}

// Address range: 0x1733ee - 0x1733f1
int64_t function_1733ee(int64_t a1, int64_t a2) {
    // 0x1733ee
    return a1 & 0xffffffff;
}

// Address range: 0x173406 - 0x17340f
int64_t function_173406(int64_t a1, int64_t a2, int64_t a3) {
    // 0x173406
    return a2 & 0xffffffff;
}

// Address range: 0x17348f - 0x173493
int64_t function_17348f(int64_t a1) {
    // 0x17348f
    int64_t result; // 0x17348f
    return result;
}

// Address range: 0x1734c0 - 0x1734c1
int64_t function_1734c0(void) {
    // 0x1734c0
    int64_t result; // 0x1734c0
    return result;
}

// Address range: 0x1734d2 - 0x1734d5
int64_t function_1734d2(int64_t a1) {
    // 0x1734d2
    int64_t result; // 0x1734d2
    return result;
}

// Address range: 0x1734f9 - 0x1734fc
int64_t function_1734f9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1734f9
    int64_t result; // 0x1734f9
    return result;
}

// Address range: 0x173556 - 0x173557
int64_t function_173556(void) {
    // 0x173556
    int64_t result; // 0x173556
    return result;
}

// Address range: 0x17356d - 0x17356f
int64_t function_17356d(int64_t a1) {
    // 0x17356d
    int64_t v1; // 0x17356d
    return v1 & 0xffffffff;
}

// Address range: 0x17357f - 0x17359b
int64_t function_17357f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffa398ed85() & 0x72c8fe00 | 0x8d37018e; // 0x17358b
    int32_t * v2 = (int32_t *)(a4 + 0x501e825); // 0x17358d
    int32_t v3 = *v2 + (int32_t)v1; // 0x17358d
    *v2 = v3;
    int64_t result = v1; // 0x173593
    if (v3 < 0) {
        result = function_173556();
    }
    int32_t * v4 = (int32_t *)result; // 0x173595
    *v4 = *v4 + (int32_t)a3;
    return result;
}

// Address range: 0x17360e - 0x17361b
int64_t function_17360e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x17360e
    int64_t result; // 0x17360e
    *(char *)0x3d00b1abce48f2de = (char)result;
    int32_t * v1 = (int32_t *)(a3 - 17); // 0x173617
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x173685 - 0x173688
int64_t function_173685(int64_t a1) {
    // 0x173685
    int64_t result; // 0x173685
    return result;
}

// Address range: 0x17368e - 0x173691
int64_t function_17368e(int64_t a1) {
    // 0x17368e
    int64_t result; // 0x17368e
    return result;
}

// Address range: 0x17369e - 0x1736a3
int64_t function_17369e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x17369e
    int64_t v1; // 0x17369e
    return (uint64_t)v1 / 2 % 0x80000000;
}

// Address range: 0x17372f - 0x173732
int64_t function_17372f(int64_t a1) {
    // 0x17372f
    int64_t result; // 0x17372f
    return result;
}

// Address range: 0x173732 - 0x173748
int64_t function_173732(int64_t a1, int64_t a2) {
    // 0x173732
    int64_t v1; // 0x173732
    int64_t v2 = v1 & 0xffffffff; // 0x173732
    unknown_68961d39(v2);
    int32_t * v3 = (int32_t *)(a2 - 0x41e93f46); // 0x17373a
    *v3 = *v3 + (int32_t)a2;
    bool v4; // 0x173732
    return unknown_ffffffffda6ec648((v4 ? -4 : 4) + v2);
}

// Address range: 0x17374b - 0x173751
int64_t function_17374b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)a4; // 0x17374d
    *v1 = *v1 - (char)a4;
    int64_t v2; // 0x17374b
    return a4 & -256 | (int64_t)*(char *)&v2;
}

// Address range: 0x173764 - 0x173778
int64_t function_173764(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x173764
    int64_t v1; // 0x173764
    int32_t * v2 = (int32_t *)(v1 + 0x2057c6f8); // 0x173766
    int32_t v3 = *v2; // 0x173766
    *v2 = v3 + (int32_t)v1 + (int32_t)((char)v1 > (char)(a4 / 256));
    __asm_iretd();
    uint64_t result = unknown_ffffffffb1e04373() & -256 | (int64_t)__asm_in_133(-8); // 0x173772
    int64_t v4; // 0x173764
    *(char *)v4 = *(char *)&v4 + (char)(result / 256);
    return result;
}

// Address range: 0x173779 - 0x17377a
int64_t function_173779(void) {
    // 0x173779
    int64_t result; // 0x173779
    return result;
}

// Address range: 0x173783 - 0x173794
int64_t function_173783(int64_t a1) {
    int64_t v1 = __asm_wait(); // 0x173786
    __asm_out(108, (char)v1);
    *(int32_t *)a1 = (int32_t)v1;
    bool v2; // 0x173783
    return function_ffffffffa1df13fb((v2 ? -4 : 4) + a1);
}

// Address range: 0x173794 - 0x1737a4
int64_t function_173794(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x173794
    return function_ffffffff85e42f39();
}

// Address range: 0x1737d4 - 0x173825
int64_t function_1737d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1737d4
    int64_t v1; // 0x1737d4
    if (0x100000000 * v1 >> 32 < a4) {
        function_173779();
    }
    int64_t v2 = unknown_fffffffffa4e75ed(); // 0x1737e7
    char * v3 = (char *)((((v2 + 98) % 256 | v2 & 0xffffff00) + 0x93adc0be & 0xffffffff) - 7); // 0x1737fe
    *v3 = *v3 + 58;
    unknown_ffffffffe85a8a09();
    int32_t v4 = a1; // 0x173808
    *(int32_t *)0x1043350f = *(int32_t *)0x1043350f + v4;
    unknown_2173ec14();
    return unknown_ffffffffd7489c23(*(int32_t *)(a1 + 0x5a313346) ^ v4);
}

// Address range: 0x173842 - 0x173847
int64_t function_173842(void) {
    // 0x173842
    return function_3fb33f75();
}

// Address range: 0x1738da - 0x173a05
int64_t function_1738da(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, char a5) {
    // 0x1738da
    int64_t v1; // 0x1738da
    uint64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = a1;
    __asm_iretd();
    uint64_t v5 = a4 / 256; // 0x1738db
    int64_t v6 = v5 % 256 | a3 & -256; // 0x1738db
    int64_t v7 = __asm_int1(); // 0x1738dd
    int32_t * v8 = (int32_t *)(v2 - 60); // 0x1738e2
    uint32_t v9 = *v8; // 0x1738e2
    uint32_t v10 = v9 + (int32_t)a1; // 0x1738e2
    *v8 = v10;
    int16_t v11 = v6; // 0x1738e5
    char v12 = v7; // 0x1738e5
    __asm_out_134(v11, v12);
    char v13 = v10 < v9 ? 64 : 63; // 0x1738e6
    if (v13 < v12) {
        // 0x1738ea
        return v7 & -256 | (int64_t)(v12 - v13);
    }
    // 0x1738ed
    *(char *)-0x24ed1d01 = *(char *)-0x24ed1d01 + (char)(v2 / 256);
    int32_t * v14 = (int32_t *)(v6 - 0x6f89de0f); // 0x173907
    uint32_t v15 = *v14; // 0x173907
    uint32_t v16 = v15 + *(int32_t *)-0x17e51dd174dc947d; // 0x173907
    *v14 = v16;
    char * v17 = (char *)(v2 - 24); // 0x17390d
    *v17 = *v17 + (char)v2 + (char)(v16 < v15);
    uint32_t v18 = *(int32_t *)0x6c5b501b; // 0x173914
    uint32_t v19 = v18 + (int32_t)v4; // 0x173914
    *(int32_t *)0x6c5b501b = v19;
    int64_t v20 = __asm_sti(); // 0x17391a
    __asm_out_135(v11, (int32_t)v20);
    char * v21 = (char *)v20;
    char v22 = *v21;
    if (v19 == 0) {
        // 0x173924
        *v21 = v22 ^ (char)v20;
        return unknown_ffffffffb4543d33() | 101;
    }
    char v23 = a4; // 0x173971
    char v24 = v19 < v18; // 0x173971
    char v25 = v22 + v23 + v24; // 0x173971
    char v26 = v25 + v24; // 0x173971
    *v21 = v25;
    if (v25 < 0 == ((v26 ^ v22) & (v26 ^ v23)) < 0 == (v25 != 0)) {
        // 0x1739e8
        *(int32_t *)v4 = *(int32_t *)&v4 + (int32_t)v6;
        int64_t result = unknown_3ab164ff(); // 0x1739f9
        char * v27 = (char *)result; // 0x173a00
        *v27 = *v27 - (char)result;
        return result;
    }
    // 0x173975
    __asm_in_136(36);
    char * v28 = (char *)(unknown_ffffffffc54d3180() + 0x79788e06); // 0x17397f
    *v28 = *v28 & -24;
    int32_t * v29 = (int32_t *)(v6 + 44); // 0x173986
    uint32_t v30 = *v29; // 0x173986
    uint32_t v31 = v30 + (int32_t)v4; // 0x173986
    *v29 = v31;
    char v32 = *(char *)&v3;
    __asm_outsb(v11, v32);
    *(char *)v3 = v32 + (char)v5 + (char)(v31 < v30);
    return unknown_ffffffffb4a44396();
}

// Address range: 0x173a20 - 0x173a2e
int64_t function_173a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x173a20
    int64_t v1; // 0x173a20
    int32_t * v2 = (int32_t *)(v1 + 61); // 0x173a27
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x173a20
    return (int64_t)&v3;
}

// Address range: 0x173a4d - 0x173a50
int64_t function_173a4d(int64_t a1) {
    // 0x173a4d
    int64_t result; // 0x173a4d
    return result;
}

// Address range: 0x173a65 - 0x173a8c
int64_t function_173a65(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 0x9d86670); // 0x173a72
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x173a65
    int64_t v3 = *(int64_t *)((int64_t)(0x107d877 * *(int32_t *)(v2 - 0x1856264)) + 8); // 0x173a78
    char * v4 = (char *)(8 * v2 + 118 + v2); // 0x173a7b
    unsigned char v5 = *v4; // 0x173a7b
    unsigned char v6 = v5 + (char)((int32_t)v2 >> 31); // 0x173a7b
    *v4 = v6;
    int32_t * v7 = (int32_t *)(((v3 & 1024) == 0 ? 4 : -4) + a1); // 0x173a81
    *v7 = *v7 + (int32_t)v2;
    return a4 - 256 * (v2 + 24 + (int64_t)(v6 < v5)) & 0xff00 | a4 & 0xffff00ff;
}

// Address range: 0x173a8c - 0x173a9d
int64_t function_173a8c(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t result = unknown_ffffffffd40e3d95(); // 0x173a8f
    int64_t v1; // 0x173a8c
    char * v2 = (char *)(v1 + 0x4ec5495c); // 0x173a94
    *v2 = *v2 + (char)(a3 / 256);
    return result;
}

// Address range: 0x37d530 - 0x37d53f
int64_t function_37d530(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_30bae739(a1, a2, a3, a4); // 0x37d531
    if (a4 == 0) {
        // 0x37d542
        return result;
    }
    // 0x37d53a
    return result + 0xe86ece68 & 0xffffffff;
}

// Address range: 0x37d5cc - 0x37d5d7
int64_t function_37d5cc(int64_t a1) {
    // 0x37d5cc
    return unknown_ffffffffc4c07dd6(a1);
}

// Address range: 0x37d5d7 - 0x37d5e4
int64_t function_37d5d7(void) {
    // 0x37d5d7
    return function_ffffffffaf4d52dd();
}

// Address range: 0x37d5ea - 0x37d5eb
int64_t function_37d5ea(int64_t a1) {
    // 0x37d5ea
    int64_t result; // 0x37d5ea
    return result;
}

// Address range: 0x37d652 - 0x37d6e0
int64_t function_37d652(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ffffffffa49b34e8(); // 0x37d690
    int64_t v1; // 0x37d652
    bool v2; // 0x37d652
    if (!v2) {
        // 0x37d697
        *(char *)-0x792f1262 = *(char *)-0x792f1262 + (char)(v1 / 256);
        return result;
    }
    uint32_t v3 = (int32_t)a4 % 32; // 0x37d6d2
    char v4 = v1; // 0x37d6d2
    int64_t v5; // 0x37d652
    if (v3 != 0) {
        int32_t * v6 = (int32_t *)(a2 + 0x6008019d); // 0x37d6d2
        *v6 = *v6 >> v3;
        int64_t v7; // 0x37d652
        v5 = v7;
        v4 = *(char *)&v7;
    }
    // 0x37d6cf
    *(char *)v5 = v4 + (char)a3;
    return v1 & 0xffffffff;
}

// Address range: 0x37d6f8 - 0x37d6f9
int64_t function_37d6f8(void) {
    // 0x37d6f8
    int64_t result; // 0x37d6f8
    return result;
}

// Address range: 0x37d6fc - 0x37d72e
int64_t function_37d6fc(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x37d6fc
    char * v3 = (char *)(v2 + 0x73ba3a0d); // 0x37d6fc
    unsigned char v4 = (char)a4; // 0x37d6fc
    *v3 = *v3 + v4;
    int64_t v5 = unknown_1c398108(); // 0x37d702
    if (a5 % 2 != 0) {
        unsigned char v6 = *(char *)&v1; // 0x37d70a
        *(int32_t *)0x3afee917 = *(int32_t *)0x3afee917 + (int32_t)a1;
        return ((v5 + a4 / 256 + (int64_t)(v6 > v4)) % 256 | v5 & 0xffffff00) + v2 & 0xffffffff;
    }
    int32_t * v7 = (int32_t *)((v5 + 0xe823f810 & 0xffffffff) + 0x45cf1903); // 0x37d71f
    *v7 = *v7 + (int32_t)v1;
    int64_t result = unknown_2249712d(); // 0x37d727
    __asm_out_137(-19, (int32_t)result);
    return result;
}

// Address range: 0x37d72f - 0x37d746
int64_t function_37d72f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x37d72f
    int64_t v1; // 0x37d72f
    __asm_out(-24, (char)v1);
    int32_t * v2 = (int32_t *)(a3 - 0x5dadf6b); // 0x37d733
    uint32_t v3 = *v2; // 0x37d733
    uint32_t v4 = (int32_t)a3; // 0x37d733
    uint32_t v5 = v3 + v4; // 0x37d733
    *v2 = v5;
    uint32_t v6 = *(int32_t *)(a4 + 0x1e8466c) + v4; // 0x37d739
    if (v5 < v3 ? v6 + (int32_t)(v5 < v3) <= v4 : v6 < v4) {
        function_37d6f8();
    }
    // 0x37d741
    return function_2e0edb2f();
}

// Address range: 0x37d760 - 0x37d77d
int64_t function_37d760(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_1f981d66(); // 0x37d760
    *(int32_t *)a1 = (int32_t)v1;
    unsigned char v2 = *(char *)-0x3bc64031; // 0x37d766
    *(char *)-0x3bc64031 = v2 - 24;
    int64_t v3; // 0x37d760
    char * v4 = (char *)(v3 - 53); // 0x37d76d
    *v4 = *v4 + (char)v3 + (char)(v2 > 23);
    char * v5 = (char *)(a3 + 0x7ca101e8); // 0x37d772
    *v5 = *v5 | (char)a4;
    return (v1 + v3) % 256 | v1 & -256;
}

// Address range: 0x37d7ec - 0x37d7f0
int64_t function_37d7ec(int64_t a1) {
    // 0x37d7ec
    int64_t result; // 0x37d7ec
    return result;
}

// Address range: 0x37d81d - 0x37d921
int64_t function_37d81d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x37d81d
    int64_t v1; // 0x37d81d
    int32_t * v2 = (int32_t *)(v1 - 0x9295b96); // 0x37d823
    uint32_t v3 = *v2; // 0x37d823
    uint32_t v4 = v3 + (int32_t)v1; // 0x37d823
    *v2 = v4;
    int32_t * v5 = (int32_t *)(a1 - 0x77f627cd); // 0x37d829
    *v5 = *v5 - (v4 < v3 ? -0xed6fe17 : -0xed6fe18);
    uint64_t v6 = 2 * v1; // 0x37d8aa
    int64_t result = v6 & 0xffffffff; // 0x37d8aa
    if ((v6 / 256 % 256 || a4 & -256) != 1) {
        int32_t * v7 = (int32_t *)result; // 0x37d91f
        *v7 = *v7 + (int32_t)v6;
        return result;
    }
    char * v8 = (char *)(v1 + 0x1a08a000); // 0x37d8b0
    *v8 = *v8 + 54;
    int64_t v9 = unknown_3e09cdbe(); // 0x37d8b8
    int32_t * v10 = (int32_t *)result; // 0x37d8c1
    *v10 = *v10 + (int32_t)v6;
    return v9 + 2 * v1 & 0xffffffff;
}

// Address range: 0x37d923 - 0x37d924
int64_t function_37d923(int64_t a1) {
    // 0x37d923
    int64_t result; // 0x37d923
    return result;
}

// Address range: 0x37d925 - 0x37d947
int64_t function_37d925(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x37d925
    int64_t v1; // 0x37d925
    uint32_t result = (int32_t)v1 | -0x7fcb557b; // 0x37d927
    int32_t * v2 = (int32_t *)(v1 - 29); // 0x37d92e
    *v2 = *v2 + (int32_t)v1;
    *(int32_t *)0x825013d003a7fe9 = result;
    return result;
}

// Address range: 0x37d972 - 0x37d97c
int64_t function_37d972(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x37d972
    if (v1 != 0) {
        char * v2 = (char *)(a1 - 0x6fa9f65d); // 0x37d972
        unsigned char v3 = *v2; // 0x37d972
        bool v4; // 0x37d972
        *v2 = v3 >> v1 | (char)v4 << 8 - v1 | (char)((int16_t)v3 << (int16_t)(9 - v1));
    }
    int64_t result; // 0x37d972
    return result;
}

// Address range: 0x37d9a7 - 0x37d9aa
int64_t function_37d9a7(void) {
    // 0x37d9a7
    int64_t result; // 0x37d9a7
    return result;
}

// Address range: 0x37d9d1 - 0x37da11
int64_t function_37d9d1(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x37d9d1
    int64_t v1; // 0x37d9d1
    int32_t * v2 = (int32_t *)(v1 - 0x5ff1432b);
    *v2 = *v2 + (int32_t)v1;
    int64_t v3 = unknown_17570de1(); // 0x37d9da
    int64_t v4; // 0x37d9d1
    *(int32_t *)v4 = *(int32_t *)&v4 | 1;
    unsigned char v5 = *(char *)-0x177d018f; // 0x37d9e3
    char v6 = v5 / 128; // 0x37d9e3
    *(char *)-0x177d018f = v6 | 2 * v5;
    char * v7 = (char *)v3; // 0x37d9ea
    *v7 = *v7 + (char)a4 + (char)(v6 != 0);
    char * v8 = (char *)(v1 + 109); // 0x37d9ed
    *v8 = *v8 - (char)(a4 / 256);
    __asm_int3();
    int64_t v9; // 0x37d9d1
    __asm_outsd((int16_t)a3, *(int32_t *)&v9);
    unknown_7ecb7ff9();
    *(char *)0x207e01e8780bf507 = (char)v4;
    int64_t result = v4 & 0xffffffe8; // 0x37da08
    int32_t * v10 = (int32_t *)(result + 0x47cc80a); // 0x37da0a
    int64_t v11; // 0x37d9d1
    *v10 = *v10 + (int32_t)(int64_t)&v11;
    return result;
}

// Address range: 0x37da20 - 0x37da8a
int64_t function_37da20(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a4;
    int64_t v2; // 0x37da20
    int32_t * v3 = (int32_t *)(v2 + 0x3fccba0a); // 0x37da20
    *v3 = *v3 + (int32_t)v2;
    int64_t v4 = unknown_fffffffffc3df12e(); // 0x37da28
    *(char *)a4 = *(char *)&v1 + (char)(a3 / 256);
    bool v5; // 0x37da20
    int64_t v6 = v5 ? -4 : 4; // 0x37da33
    int64_t v7 = v6 + a1; // 0x37da33
    int32_t * v8 = (int32_t *)(a2 + 51);
    int64_t v9 = a5; // 0x37da33
    __asm_out_134((int16_t)v9, (char)((v4 + 40) % 256));
    unknown_7ad3d63b();
    int64_t v10 = __asm_wait(); // 0x37da3a
    *(char *)-0x1754efac = *(char *)-0x1754efac | (char)v10;
    int32_t v11 = *v8 + (int32_t)v7; // 0x37da47
    *v8 = v11;
    int64_t v12 = v1 - 1; // 0x37da4a
    v1 = v12;
    v9 = v9 + v7 & 0xffffffff;
    while (v11 != 0 && v12 != 0) {
        // 0x37da34
        __asm_out_134((int16_t)v9, (char)v10);
        unknown_7ad3d63b();
        v10 = __asm_wait();
        *(char *)-0x1754efac = *(char *)-0x1754efac | (char)v10;
        v11 = *v8 + (int32_t)v7;
        *v8 = v11;
        v12 = v1 - 1;
        v1 = v12;
        v9 = v9 + v7 & 0xffffffff;
    }
    int64_t v13 = v10; // 0x37da50
    if (v12 != 0) {
        int64_t v14 = v10 + 0xe8769ee6; // 0x37da52
        int32_t * v15 = (int32_t *)(v7 + 111); // 0x37da57
        *v15 = *v15 + (int32_t)v14;
        v13 = v14 & 0xffffffff;
    }
    char * v16 = (char *)v13; // 0x37da5c
    *v16 = *v16 + 35;
    __asm_out_137(72, (int32_t)v13);
    int32_t * v17 = (int32_t *)(v2 + 0x1700cb00); // 0x37da63
    int64_t v18; // bp+16, 0x37da20
    *v17 = *v17 + (int32_t)(int64_t)&v18;
    unknown_7342b27b();
    *(int32_t *)v7 = (int32_t)__asm_iretd();
    char * v19 = (char *)(v2 + 29); // 0x37da81
    *v19 = *v19 + (char)(v1 / 256);
    return unknown_3acc858a(v7 + v6);
}

// Address range: 0x37daf5 - 0x37daf8
int64_t function_37daf5(int64_t a1) {
    // 0x37daf5
    int64_t result; // 0x37daf5
    return result;
}

// Address range: 0x37dafe - 0x37daff
int64_t function_37dafe(void) {
    // 0x37dafe
    int64_t result; // 0x37dafe
    return result;
}

// Address range: 0x37db22 - 0x37db2b
int64_t function_37db22(int64_t a1, int64_t a2, int64_t a3) {
    // 0x37db22
    int64_t v1; // 0x37db22
    return 2 * v1 & 0xffffffff;
}
