/*
 * Targeted RetDec C for native executable gap queue batch 265.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x167eaa-0x1680aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1680aa-0x1682aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1682aa-0x1684aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1684aa-0x1686aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x1686aa-0x1688aa rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a5f75-0x2a6175 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a6175-0x2a6375 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a6375-0x2a6575 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_167eaa(int64_t a1, int64_t a2, int64_t a3);
int64_t function_167ed5(int64_t a1, int64_t a2);
int64_t function_167f0b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_167f59(void);
int64_t function_167f7c(void);
int64_t function_167f95(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_1680f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_168123(int64_t a1);
int64_t function_16816a(int64_t a1);
int64_t function_1681be(void);
int64_t function_1681ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1681f6(void);
int64_t function_16822e(void);
int64_t function_16828c(void);
int64_t function_1682fc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_168357(int64_t a1);
int64_t function_168368(void);
int64_t function_168394(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1683d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_168539(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1686a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_16880e(void);
int64_t function_168830(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_16886b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2129819();
int64_t function_212d6dd();
int64_t function_2a5f75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a5f81(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2a5fae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a5ff0(int64_t a1);
int64_t function_2a5ff2(int64_t a1);
int64_t function_2a6039(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a6057(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a6088(void);
int64_t function_2a609f(void);
int64_t function_2a60db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2a6113(int64_t a1);
int64_t function_2a619c(void);
int64_t function_2a61a5(int64_t a1);
int64_t function_2a61aa(int64_t a1);
int64_t function_2a61ca(int64_t a1);
int64_t function_2a61d6(void);
int64_t function_2a61de(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_2a62ac(void);
int64_t function_2a62c9(int64_t a1);
int64_t function_2a62cc(void);
int64_t function_2a62ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a62e1(void);
int64_t function_2a62ff(int64_t a1, int64_t a2);
int64_t function_2a631b(void);
int64_t function_2a6322(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a6337(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_2a63c5(int64_t a1);
int64_t function_2a63e4(int64_t a1);
int64_t function_2a63e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a6402(void);
int64_t function_2a6483(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2a6490(void);
int64_t function_2a64da(void);
int64_t function_532087e9();
int64_t function_72ea323a();
int64_t function_7dad4e75();
int64_t function_96a7f86();
int64_t function_c57b8();
int64_t function_ffffffffb11fecd3();
int64_t unknown_16b19f1c();
int64_t unknown_2b1d6051();
int64_t unknown_2cb01d88();
int64_t unknown_3a343592();
int64_t unknown_4d765c25();
int64_t unknown_7947b6d6();
int64_t unknown_ffffffff872c488e();
int64_t unknown_ffffffffaa327213();
int64_t unknown_ffffffffaadeb868();
int64_t unknown_ffffffffad5b7eb9();
int64_t unknown_ffffffffb3fa900d();
int64_t unknown_ffffffffb711611a();
int64_t unknown_ffffffffe03895e9();
int64_t unknown_ffffffffe41bfdc0();

// Address range: 0x167eaa - 0x167ed4
int64_t function_167eaa(int64_t a1, int64_t a2, int64_t a3) {
    // 0x167eaa
    int64_t v1; // 0x167eaa
    bool v2; // 0x167eaa
    unknown_ffffffffad5b7eb9((v2 ? -4 : 4) + a1, 4 * a3 + 0x89029e89 + v1 & 0xffffffff);
    int32_t v3 = *(int32_t *)-0x44fe174d4305b9cf; // 0x167eb8
    __asm_out((int16_t)a3, (char)v3);
    return (int64_t)*(char *)-0x14a0c64980c6fe18 | (int64_t)(v3 & -256);
}

// Address range: 0x167ed5 - 0x167ee6
int64_t function_167ed5(int64_t a1, int64_t a2) {
    // 0x167ed5
    int64_t v1; // 0x167ed5
    int64_t v2 = v1;
    int64_t v3 = v1;
    bool v4; // 0x167ed5
    *(int32_t *)v2 = (int32_t)v2 + (int32_t)a2 + (int32_t)v4;
    return (v3 + 198) % 256 | v3 & -256;
}

// Address range: 0x167f0b - 0x167f2e
int64_t function_167f0b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t result = unknown_16b19f1c(); // 0x167f16
    char * v1 = (char *)(result + 0x4eeb4000); // 0x167f1b
    char v2 = result; // 0x167f1b
    *v1 = *v1 + v2;
    int64_t v3; // 0x167f0b
    char * v4 = (char *)(v3 + 0x1201e800); // 0x167f21
    *v4 = *v4 + (char)(a4 / 256);
    char * v5 = (char *)result; // 0x167f27
    *v5 = *v5 + v2;
    return result;
}

// Address range: 0x167f59 - 0x167f5e
int64_t function_167f59(void) {
    // 0x167f59
    return function_96a7f86();
}

// Address range: 0x167f7c - 0x167f95
int64_t function_167f7c(void) {
    // 0x167f7c
    int64_t v1; // 0x167f7c
    *(int32_t *)-0x586768fe176102c6 = (int32_t)v1;
    bool v2; // 0x167f7c
    if (!v2 && !v2) {
        // 0x167f87
        *(int64_t *)((v1 & 0xffffffff) - 8) = 0x1e8d9d3;
    }
    // 0x167f8f
    __asm_hlt();
    return __asm_sti();
}

// Address range: 0x167f95 - 0x1680c7
int64_t function_167f95(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x167f95
    int64_t v1; // 0x167f95
    int64_t result = v1 & -256 | 35; // 0x167f95
    bool v2; // 0x167f95
    if (!v2) {
        // 0x167f9d
        return result;
    }
    int64_t v3 = a4 - 1; // 0x167f9b
    if (v3 != 0 != ((int32_t)(v1 ^ a1) == 0)) {
        // 0x167f9d
        return result;
    }
    uint32_t v4 = *(int32_t *)(a3 + 116); // 0x168003
    int64_t v5 = result & 0xffffff23; // 0x168006
    char v6 = v1 / 256; // 0x16800c
    char v7 = unknown_ffffffffb3fa900d(v4) / 256; // 0x16800c
    char v8 = v7 + v6; // 0x16800c
    int64_t v9 = v5; // 0x16800f
    int64_t v10 = a2; // 0x16800f
    if (v8 < 0 == ((v8 ^ v6) & (v8 ^ v7)) < 0 != v8 != 0) {
        // 0x168011
        unknown_ffffffffb711611a();
        char v11 = *(char *)0x10186820; // 0x168019
        int64_t result2 = unknown_4d765c25(); // 0x16801f
        uint32_t v12 = v4 + (int32_t)(256 * (int64_t)(v11 & v8) | v1 & 0xffff00ff); // 0x168024
        uint64_t v13 = a4 - 2; // 0x168026
        if (v13 != 0 && v12 != 0) {
            int32_t * v14 = (int32_t *)(result2 + 10); // 0x167fbd
            *v14 = *v14 + (int32_t)result;
            return result2;
        }
        int64_t v15 = v4; // 0x168003
        char * v16 = (char *)(v5 - 0x664a5db8); // 0x168028
        *v16 = *v16 + (char)(v13 / 256);
        int64_t v17 = v15 + 1; // 0x16802f
        int64_t v18 = a2 + 1; // 0x16802f
        float80_t v19; // 0x167f95
        *(int64_t *)a3 = (int64_t)(v19 * (float80_t)*(float32_t *)v3);
        uint64_t v20 = a3 / 256; // 0x168032
        __asm_iretd(v17, v18);
        char v21 = v12 / 256; // 0x168036
        *(char *)0x13b4473d = *(char *)0x13b4473d + v21;
        int32_t * v22 = (int32_t *)((int64_t)v12 - 22); // 0x16803c
        *v22 = *v22 | (int32_t)v17;
        int64_t * v23 = (int64_t *)v5; // 0x16803f
        *v23 = -0x120e9400;
        uint64_t v24 = unknown_2b1d6051(); // 0x16804b
        unsigned char v25 = *(char *)-0x20c457a9; // 0x168050
        unsigned char v26 = v25 + v21; // 0x168050
        *(char *)-0x20c457a9 = v26;
        int32_t * v27 = (int32_t *)v24; // 0x168058
        *v27 = *v27 + 0x420ad85f + (int32_t)(v26 < v25);
        unsigned char v28 = (char)(v24 / 256); // 0x16805e
        char v29 = v28 - (char)((int64_t)&g1 >> 8); // 0x16805e
        unsigned char v30 = llvm_ctpop_i8(v29); // 0x16805e
        int64_t v31 = a3 & -256; // 0x168060
        int64_t v32 = v24 & -0xff01 | 256 * (64 * (int64_t)(v29 == 0) | (int64_t)(v28 < (char)((int64_t)&g1 >> 8)) | 128 * (int64_t)(v29 < 0) | 16 * (int64_t)(v28 % 16 - ((char)((int64_t)&g1 >> 8) & 15) > 15) | 4 * (int64_t)(v30 % 2 == 0)) | 512; // 0x168062
        int64_t * v33 = (int64_t *)(v5 - 8); // 0x168063
        *v33 = -0x4c4a7f00;
        *(char *)0x64642c6f = *(char *)0x64642c6f + v21;
        v9 = *v33;
        unsigned char v34 = (char)v24; // 0x16806f
        *(char *)v17 = v34;
        char * v35 = (char *)(v20 % 256 | v31); // 0x168070
        *v35 = *v35 - v21;
        int64_t result3 = v32 & -256 | (v24 + 48) % 256; // 0x168079
        *(int64_t *)((v31 | 202) + 0x13d001c) = *v23;
        if (v34 <= 207) {
            // 0x167f9d
            return result3;
        }
        int64_t v36 = v5 | 8; // 0x16807b
        uint32_t v37 = (int32_t)result3; // 0x16808c
        uint32_t v38 = v37 + (int32_t)v36; // 0x16808c
        uint32_t v39 = v38 + (int32_t)(v34 < 208); // 0x16808c
        v10 = v18 & 0xffffffff & v32;
        if (!((v34 < 208 ? v39 <= v37 : v38 < v37))) {
            int64_t result4 = v39; // 0x16808c
            int32_t * v40 = (int32_t *)(result4 - 0x6ffe17da); // 0x1680bd
            int32_t v41 = *v40; // 0x1680bd
            *v40 = v41 + ((int32_t)((v13 + v20) % 256 | v13 & 0xffff0000) | (int32_t)&g1);
            *(int64_t *)(v36 - 8) = v15 + 2;
            return result4;
        }
    }
    int64_t result5 = v10 & 0xffffffff; // 0x16809e
    int32_t * v42 = (int32_t *)(result5 - 71); // 0x1680a5
    *v42 = *v42 + (int32_t)v9;
    return result5;
}

// Address range: 0x1680f6 - 0x168112
int64_t function_1680f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1680f6
    int64_t v1; // 0x1680f6
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(v1 + 0x60e86b24); // 0x1680f8
    *v3 = *v3 + (int32_t)(v2 | v1);
    int64_t result = v2 & -256 | (int64_t)*(char *)(v2 % 256 + v1); // 0x1680fe
    *(int32_t *)0x2c4a152801e84e03 = (int32_t)result;
    char * v4 = (char *)(a2 + 0x3aa801e8 + v1); // 0x16810a
    *v4 = *v4 + (char)a3;
    return result;
}

// Address range: 0x168123 - 0x168126
int64_t function_168123(int64_t a1) {
    // 0x168123
    int64_t result; // 0x168123
    return result;
}

// Address range: 0x16816a - 0x16816b
int64_t function_16816a(int64_t a1) {
    // 0x16816a
    int64_t result; // 0x16816a
    return result;
}

// Address range: 0x1681be - 0x1681bf
int64_t function_1681be(void) {
    // 0x1681be
    int64_t result; // 0x1681be
    return result;
}

// Address range: 0x1681ca - 0x1681f4
int64_t function_1681ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1681ca
    int64_t v1; // 0x1681ca
    int32_t * v2 = (int32_t *)(v1 + 0x1e8ef92); // 0x1681cf
    int32_t v3 = *v2; // 0x1681cf
    *v2 = (int32_t)v1;
    int64_t v4 = 0xb623a79; // bp-8, 0x1681d5
    uint32_t v5 = *(int32_t *)0xe8f38969; // 0x1681e3
    uint32_t v6 = v5 + v3; // 0x1681e3
    *(int32_t *)0xe8f38969 = v6;
    uint32_t v7 = (int32_t)a4 % 32; // 0x1681e5
    int64_t v8; // 0x1681ca
    if (v7 != 0) {
        uint32_t v9 = *(int32_t *)&v8; // 0x1681e5
        *(int32_t *)v8 = (int32_t)(v6 < v5) << v7 - 1 | v9 << v7 | (int32_t)((int64_t)v9 >> (int64_t)(33 - v7));
    }
    char * v10 = (char *)((int64_t)&v4 + 123 + 8 * v8); // 0x1681e7
    *v10 = *v10 + (char)a4;
    return v3 | 43;
}

// Address range: 0x1681f6 - 0x168205
int64_t function_1681f6(void) {
    // 0x1681f6
    int64_t result; // 0x1681f6
    int32_t * v1 = (int32_t *)(result + 0x2215df01); // 0x1681ff
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x16822e - 0x16822f
int64_t function_16822e(void) {
    // 0x16822e
    int64_t result; // 0x16822e
    return result;
}

// Address range: 0x16828c - 0x168293
int64_t function_16828c(void) {
    // 0x16828c
    unknown_3a343592();
    return function_16822e();
}

// Address range: 0x1682fc - 0x1682ff
int64_t function_1682fc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1682fc
    int64_t result; // 0x1682fc
    return result;
}

// Address range: 0x168357 - 0x16835a
int64_t function_168357(int64_t a1) {
    // 0x168357
    int64_t result; // 0x168357
    return result;
}

// Address range: 0x168368 - 0x168369
int64_t function_168368(void) {
    // 0x168368
    int64_t result; // 0x168368
    return result;
}

// Address range: 0x168394 - 0x1683d8
int64_t function_168394(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x168394
    int64_t v1; // 0x168394
    char * v2 = (char *)(v1 + 0x1e86fee); // 0x168395
    unsigned char v3 = *v2; // 0x168395
    unsigned char v4 = v3 + (char)(v1 / 256); // 0x168395
    bool v5; // 0x168394
    unsigned char v6 = v4 + (char)v5; // 0x168395
    bool v7 = v5 ? v6 <= v3 : v4 < v3; // 0x168395
    *v2 = v6;
    int64_t v8; // 0x168394
    *(char *)a1 = *(char *)&v8;
    int64_t v9 = v5 ? -2 : 2; // 0x16839b
    char * v10 = (char *)(v1 + 112); // 0x16839d
    *v10 = *v10 - (char)(v1 / 256) + (char)v7;
    int32_t * v11 = (int32_t *)(a3 - 0x490dd092 + 2 * v1); // 0x1683a5
    *v11 = *v11 + (int32_t)v1;
    int32_t * v12 = (int32_t *)(4 * a6 - 83 + v1); // 0x1683b3
    *v12 = *v12 + (int32_t)v1;
    int64_t v13 = v9 + a2; // bp-16, 0x1683b9
    int64_t v14 = unknown_ffffffffe41bfdc0(v9 + a1); // 0x1683ba
    *(int32_t *)(v14 + 6) = (int32_t)(int64_t)&v13;
    return function_7dad4e75();
}

// Address range: 0x1683d8 - 0x168539
int64_t function_1683d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 0x6908dea1 + 4 * a1); // 0x1683da
    uint32_t v2 = *v1; // 0x1683da
    int32_t v3 = a2; // 0x1683da
    uint32_t v4 = v2 + v3; // 0x1683da
    *v1 = v4;
    int64_t v5; // 0x1683d8
    int64_t v6 = v5 - (v4 < v2 ? 0xe87f242f : 0xe87f242e); // 0x1683e1
    int64_t v7; // 0x1683d8
    int32_t * v8 = (int32_t *)(a4 + 32 + v7); // 0x1683e7
    *v8 = *v8 + v3;
    int32_t * v9 = (int32_t *)((v6 & 0xffffffff) + 0x1e87a13); // 0x1683eb
    *v9 = *v9 & 73;
    uint32_t v10 = *(int32_t *)&v7 | (int32_t)v6; // 0x1683f4
    char * v11 = (char *)((int64_t)v10 - 0x3f69f100); // 0x1683f6
    *v11 = *v11 + (char)v10;
    return function_c57b8(a1, 169, a3, a4, a5);
}

// Address range: 0x168539 - 0x1686a6
int64_t function_168539(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x3d778c54; // bp-32, 0x168582
    int64_t v2 = (int64_t)&v1; // 0x168606
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x16860e
    int64_t v4 = *v3; // 0x16860e
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x16860e
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x168612
    *v6 = 0x4786d55d;
    int64_t * v7 = (int64_t *)(v2 - 32); // 0x168642
    *v7 = a5;
    v1 = *v6;
    *v6 = 0x1875d597;
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x168651
    *v7 = 310;
    *v8 = v4;
    *v3 = *v6;
    *v8 = a2;
    *v6 = v2;
    int64_t v9 = *v5; // 0x168688
    *v6 = v9;
    *v8 = v9;
    int64_t v10; // 0x168539
    return function_c57b8(a1, a2, a3, *v7, v10);
}

// Address range: 0x1686a6 - 0x1687e4
int64_t function_1686a6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1686a6
    int64_t v1; // 0x1686a6
    return function_c57b8(a1, a2, a3, a5, v1);
}

// Address range: 0x16880e - 0x168811
int64_t function_16880e(void) {
    // 0x16880e
    int64_t result; // 0x16880e
    return result;
}

// Address range: 0x168830 - 0x168838
int64_t function_168830(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x168830
    int64_t v1; // 0x168830
    char * v2 = (char *)(v1 - 127); // 0x168830
    *v2 = *v2 | (char)a4;
    return function_72ea323a();
}

// Address range: 0x16886b - 0x168871
int64_t function_16886b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x16886b
    int64_t v1; // 0x16886b
    int64_t result = v1 & -256 | (int64_t)__asm_in((int16_t)a3); // 0x16886b
    char * v2 = (char *)(result - 16); // 0x16886c
    *v2 = *v2 | (char)(a4 / 256);
    return result;
}

// Address range: 0x2a5f75 - 0x2a5f7a
int64_t function_2a5f75(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a5f75
    int64_t v1; // 0x2a5f75
    return v1 + a1 & 0xffffffff;
}

// Address range: 0x2a5f81 - 0x2a5f95
int64_t function_2a5f81(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = unknown_2cb01d88(); // 0x2a5f81
    char * v2 = (char *)(v1 + 0x7104e00); // 0x2a5f87
    *v2 = *v2 + (char)v1;
    int32_t * v3 = (int32_t *)(a3 + 1); // 0x2a5f8f
    int64_t v4; // 0x2a5f81
    *v3 = *v3 + (int32_t)v4;
    return (v1 + a4 / 256) % 256 | v1 & -256;
}

// Address range: 0x2a5fae - 0x2a5fb7
int64_t function_2a5fae(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a5fae
    *(char *)a3 = (char)a4;
    int64_t result; // 0x2a5fae
    return result;
}

// Address range: 0x2a5ff0 - 0x2a5ff1
int64_t function_2a5ff0(int64_t a1) {
    // 0x2a5ff0
    int64_t result; // 0x2a5ff0
    return result;
}

// Address range: 0x2a5ff2 - 0x2a5ff5
int64_t function_2a5ff2(int64_t a1) {
    // 0x2a5ff2
    int64_t result; // 0x2a5ff2
    return result;
}

// Address range: 0x2a6039 - 0x2a6057
int64_t function_2a6039(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a6039
    int64_t v1; // 0x2a6039
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(4 * a1 + a3); // 0x2a6045
    *v3 = *v3 + (int32_t)v2;
    bool v4; // 0x2a6039
    int64_t v5 = v4 ? -1 : 1; // 0x2a6050
    *(int64_t *)v2 = v2 + 8;
    return function_212d6dd(v5 + a1, v5 + a2);
}

// Address range: 0x2a6057 - 0x2a6078
int64_t function_2a6057(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a6057
    int64_t v1; // 0x2a6057
    uint64_t v2 = v1;
    int64_t v3 = a3 & -256 | 123; // 0x2a6057
    uint32_t v4 = (int32_t)a4 % 32; // 0x2a6059
    if (v4 != 0) {
        int32_t * v5 = (int32_t *)v3; // 0x2a6059
        uint32_t v6 = *v5; // 0x2a6059
        *v5 = v6 >> v4 | v6 << 32 - v4;
    }
    char * v7 = (char *)v3; // 0x2a605b
    *v7 = *v7 + (char)v1;
    int64_t result = unknown_ffffffffaadeb868(); // 0x2a6062
    *(char *)(a1 + 0x79e917 + 8 * v2) = (char)(v2 / 256);
    int32_t * v8 = (int32_t *)(a4 - 10); // 0x2a6072
    *v8 = *v8 + (int32_t)a5;
    return result;
}

// Address range: 0x2a6088 - 0x2a608e
int64_t function_2a6088(void) {
    // 0x2a6088
    return unknown_ffffffff872c488e();
}

// Address range: 0x2a609f - 0x2a60a8
int64_t function_2a609f(void) {
    // 0x2a609f
    int64_t v1; // 0x2a609f
    int64_t v2 = v1 & -195; // 0x2a609f
    int32_t * v3 = (int32_t *)v2; // 0x2a60a1
    *v3 = *v3 + (int32_t)v2;
    return function_ffffffffb11fecd3();
}

// Address range: 0x2a60db - 0x2a60f3
int64_t function_2a60db(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2a60db
    int64_t v1; // 0x2a60db
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(4 * a2 + a1); // 0x2a60e8
    *v3 = *v3 + (int32_t)v1;
    int32_t * v4 = (int32_t *)((v2 + 0x17001cf7 & 0xffffff00 | (v2 + 124) % 256) + 12); // 0x2a60eb
    *v4 = *v4 + (int32_t)a5;
    return a2 & 0xffffffff;
}

// Address range: 0x2a6113 - 0x2a6116
int64_t function_2a6113(int64_t a1) {
    // 0x2a6113
    int64_t result; // 0x2a6113
    return result;
}

// Address range: 0x2a619c - 0x2a619d
int64_t function_2a619c(void) {
    // 0x2a619c
    int64_t result; // 0x2a619c
    return result;
}

// Address range: 0x2a61a5 - 0x2a61a6
int64_t function_2a61a5(int64_t a1) {
    // 0x2a61a5
    int64_t result; // 0x2a61a5
    return result;
}

// Address range: 0x2a61aa - 0x2a61ad
int64_t function_2a61aa(int64_t a1) {
    // 0x2a61aa
    int64_t result; // 0x2a61aa
    return result;
}

// Address range: 0x2a61ca - 0x2a61cd
int64_t function_2a61ca(int64_t a1) {
    // 0x2a61ca
    int64_t result; // 0x2a61ca
    return result;
}

// Address range: 0x2a61d6 - 0x2a61d9
int64_t function_2a61d6(void) {
    // 0x2a61d6
    int64_t result; // 0x2a61d6
    return result;
}

// Address range: 0x2a61de - 0x2a625d
int64_t function_2a61de(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x2a61de
    int64_t v1; // 0x2a61de
    int32_t * v2 = (int32_t *)(v1 - 2); // 0x2a61de
    *v2 = *v2 & (int32_t)a3;
    int64_t v3 = unknown_ffffffffe03895e9(); // 0x2a61e3
    char * v4 = (char *)v3; // 0x2a61e8
    *v4 = *v4 & 18;
    int32_t * v5 = (int32_t *)(a4 + 0x2c872277); // 0x2a61ed
    *v5 = *v5 + (int32_t)v3;
    char * v6 = (char *)(v3 + 0x7105c00); // 0x2a61f3
    *v6 = *v6 + (char)v3;
    uint64_t v7 = a4 / 256; // 0x2a61f9
    int32_t * v8 = (int32_t *)(v1 + 0x3d002b00); // 0x2a61fb
    int32_t v9 = *v8 + (int32_t)v1; // 0x2a61fb
    *v8 = v9;
    int64_t v10 = (v3 + v7) % 256 | v3 & -256; // 0x2a6201
    if (v9 >= 0) {
        v10 = function_2a619c();
    }
    char * v11 = (char *)(4 * v1 + 58 + v1); // 0x2a6203
    *v11 = *v11 + (char)(a3 / 256);
    uint32_t v12 = (int32_t)v10 >> 31; // 0x2a6209
    char * v13 = (char *)(v10 - 14); // 0x2a620a
    *v13 = *v13 + (char)v7;
    int64_t v14 = unknown_ffffffffaa327213(); // 0x2a620d
    int32_t v15 = v14; // 0x2a6216
    *(int32_t *)a1 = v15;
    bool v16; // 0x2a61de
    int64_t v17 = (v16 ? -4 : 4) + a1; // 0x2a6216
    *(int32_t *)v17 = v15;
    int32_t * v18 = (int32_t *)(a4 + 0x3a918ff5); // 0x2a621b
    uint32_t v19 = *v18; // 0x2a621b
    uint32_t v20 = (int32_t)v17 - 4 + v19; // 0x2a621b
    *v18 = v20;
    unsigned char v21 = (char)(v14 + v7); // 0x2a6225
    unsigned char v22 = v20 < v19 ? 3 : 2; // 0x2a6225
    char * v23 = (char *)(a4 + 0x1e8944d); // 0x2a6227
    *v23 = *v23 + v21 - v22 + (char)(v20 < v19 | v22 > v21);
    int64_t v24 = a2 - 4; // 0x2a622d
    char * v25 = (char *)((int64_t)v12 - 115); // 0x2a6234
    *v25 = *v25 + (char)v12;
    int32_t * v26 = (int32_t *)(a4 + 0x23462bf4); // 0x2a6239
    int32_t v27 = v15 & -256 | 232; // 0x2a6239
    *v26 = *v26 + v27;
    int32_t * v28 = (int32_t *)((v1 & 0xffffffff) - 78); // 0x2a623f
    *v28 = *v28 + v27;
    int64_t v29 = __asm_int3(v17 - 8, v24); // 0x2a6244
    int32_t * v30 = (int32_t *)v24; // 0x2a6259
    *v30 = *v30 - 0x1c50ccd8;
    return v29 + v24 & 0xffffffff;
}

// Address range: 0x2a62ac - 0x2a62ae
int64_t function_2a62ac(void) {
    // 0x2a62ac
    int64_t v1; // 0x2a62ac
    return function_2a62ff(v1, v1);
}

// Address range: 0x2a62c9 - 0x2a62cb
int64_t function_2a62c9(int64_t a1) {
    // 0x2a62c9
    int64_t result; // 0x2a62c9
    return result;
}

// Address range: 0x2a62cc - 0x2a62cd
int64_t function_2a62cc(void) {
    // 0x2a62cc
    int64_t result; // 0x2a62cc
    return result;
}

// Address range: 0x2a62ce - 0x2a62da
int64_t function_2a62ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a62ce
    return unknown_7947b6d6(a1, a2, a3, a4);
}

// Address range: 0x2a62e1 - 0x2a62e2
int64_t function_2a62e1(void) {
    // 0x2a62e1
    int64_t result; // 0x2a62e1
    return result;
}

// Address range: 0x2a62ff - 0x2a6307
int64_t function_2a62ff(int64_t a1, int64_t a2) {
    // 0x2a62ff
    int64_t v1; // 0x2a62ff
    int64_t v2 = v1;
    bool v3; // 0x2a62ff
    return (v2 + 250 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x2a631b - 0x2a631c
int64_t function_2a631b(void) {
    // 0x2a631b
    int64_t result; // 0x2a631b
    return result;
}

// Address range: 0x2a6322 - 0x2a6326
int64_t function_2a6322(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a6322
    bool v1; // 0x2a6322
    if (a4 != 1 == v1) {
        function_2a62cc();
    }
    // 0x2a6324
    return function_2a631b();
}

// Address range: 0x2a6337 - 0x2a6363
int64_t function_2a6337(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5 & 0xffffffff | 0x100000000 * a3; // 0x2a633d
    int64_t v2; // 0x2a6337
    int64_t v3 = v2 & 0xffffffff; // 0x2a633d
    int64_t v4 = v1 / v3 & 0xffffffff; // 0x2a633d
    char v5 = *(char *)0x18247646; // 0x2a633f
    *(char *)0x18247646 = v5 + (char)((uint64_t)v2 / 256);
    int32_t * v6 = (int32_t *)v4; // 0x2a6347
    *v6 = *v6 ^ 0x3f5eab4c;
    int32_t * v7 = (int32_t *)(v4 - 0x408e03b0); // 0x2a634f
    *v7 = *v7 + (int32_t)a4;
    char * v8 = (char *)(v1 % v3 & 0xffffffff); // 0x2a6358
    *v8 = *v8 - (char)(a4 / 256);
    int64_t v9; // 0x2a6337
    return (int64_t)*(int32_t *)&v9;
}

// Address range: 0x2a63c5 - 0x2a63c8
int64_t function_2a63c5(int64_t a1) {
    // 0x2a63c5
    int64_t result; // 0x2a63c5
    return result;
}

// Address range: 0x2a63e4 - 0x2a63e7
int64_t function_2a63e4(int64_t a1) {
    // 0x2a63e4
    int64_t result; // 0x2a63e4
    return result;
}

// Address range: 0x2a63e7 - 0x2a63f8
int64_t function_2a63e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a63e7
    int64_t v1; // 0x2a63e7
    int64_t v2 = v1;
    return (v2 + 4) % 256 | v2 & 0xffffff00;
}

// Address range: 0x2a6402 - 0x2a6409
int64_t function_2a6402(void) {
    // 0x2a6402
    __asm_in_133(-114);
    return function_2129819();
}

// Address range: 0x2a6483 - 0x2a648d
int64_t function_2a6483(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2a6483
    int64_t v1; // 0x2a6483
    *(int32_t *)a1 = (int32_t)(int64_t)&v1;
    bool v2; // 0x2a6483
    return function_532087e9((v2 ? -4 : 4) + a1);
}

// Address range: 0x2a6490 - 0x2a6494
int64_t function_2a6490(void) {
    // 0x2a6490
    int64_t result; // 0x2a6490
    return result;
}

// Address range: 0x2a64da - 0x2a64dd
int64_t function_2a64da(void) {
    // 0x2a64da
    int64_t result; // 0x2a64da
    return result;
}
