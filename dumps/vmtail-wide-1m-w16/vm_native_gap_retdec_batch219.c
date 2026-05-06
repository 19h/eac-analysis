/*
 * Targeted RetDec C for native executable gap queue batch 219.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x180a85-0x180c85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x180c85-0x180e85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x180e85-0x181085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x181285-0x181485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e881e-0x2e8a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e8a1e-0x2e8c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e8c1e-0x2e8e1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e8e1e-0x2e901e rank=- name=- kind=- bytes=- uncovered=-
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
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt();
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_wait(void);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
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

int64_t function_16b8c1f();
int64_t function_180a5e();
int64_t function_180a7e();
int64_t function_180a85(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_180ac6(void);
int64_t function_180acf(void);
int64_t function_180af5(void);
int64_t function_180b05(int64_t a1);
int64_t function_180b94(int64_t a1, int64_t a2);
int64_t function_180ba6(int64_t a1, int64_t a2);
int64_t function_180c6b(void);
int64_t function_180cdd(void);
int64_t function_180cdf(void);
int64_t function_180ce4(int64_t a1);
int64_t function_180d2a(int64_t a1);
int64_t function_180d40(void);
int64_t function_180d9a(void);
int64_t function_180da2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_180da4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_180eb2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_180f7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_180f98(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_181045(int64_t a1, int64_t a2, int64_t a3);
int64_t function_181276();
int64_t function_181285(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1812c5(int64_t a1);
int64_t function_1812ed(void);
int64_t function_1812f1(int64_t a1);
int64_t function_18131b(int64_t a1);
int64_t function_18133b(void);
int64_t function_18133e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_181351(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1813ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1813f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18146d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e881e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e8822(void);
int64_t function_2e8826(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e886b(void);
int64_t function_2e88db(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e892f(void);
int64_t function_2e8940(int64_t a1);
int64_t function_2e8953(void);
int64_t function_2e896c(void);
int64_t function_2e8a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e8a7b(void);
int64_t function_2e8aa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e8ab2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2e8af3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2e8bb4(void);
int64_t function_2e8be8(void);
int64_t function_2e8bf8(void);
int64_t function_2e8c13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e8cbe(int64_t a1, int64_t a2);
int64_t function_2e8ce4(void);
int64_t function_2e8ce6(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_2e8cf7(int64_t a1);
int64_t function_2e8d6c(void);
int64_t function_2e8e00(void);
int64_t function_2e8e0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e8e21(int64_t a1, int64_t a2);
int64_t function_2e8e54(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e8eeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e8f31(void);
int64_t function_2e8f58(void);
int64_t function_2e8f74(int64_t a1);
int64_t function_2e8f76(void);
int64_t function_43356e69();
int64_t function_5cc9c1b5();
int64_t function_64130622();
int64_t function_ffffffff8868e3e3();
int64_t function_ffffffffb10d27ee();
int64_t function_ffffffffb435a458();
int64_t function_ffffffffcfd646a7();
int64_t function_ffffffffe03006fd();
int64_t function_ffffffffe8d21b68();
int64_t unknown_3db1f809();
int64_t unknown_5b359ee6();
int64_t unknown_6367b6f3();
int64_t unknown_690db1ac();
int64_t unknown_69128dd7();
int64_t unknown_6a8276b8();
int64_t unknown_74f1d8e();
int64_t unknown_f9ee6b8();
int64_t unknown_ffffffff8914a181();
int64_t unknown_ffffffffa0b34f46();
int64_t unknown_ffffffffa4e5ca03();
int64_t unknown_ffffffffb4a513b2();
int64_t unknown_ffffffffce1e8a44();
int64_t unknown_ffffffffe52cdccb();

// Address range: 0x180a85 - 0x180ac3
int64_t function_180a85(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a1 + 58); // 0x180a85
    unsigned char v2 = *v1; // 0x180a85
    unsigned char v3 = v2 + (char)(a4 / 256); // 0x180a85
    *v1 = v3;
    if (v3 >= v2 && v3 != 0) {
        // 0x180ab0
        int64_t result; // 0x180a85
        __asm_out((int16_t)a3, (int32_t)result);
        return result;
    }
    // 0x180a8a
    __asm_wait();
    int32_t v4 = a1; // 0x180a92
    *(int32_t *)-0x17226767 = *(int32_t *)-0x17226767 + v4;
    __asm_int(16);
    int64_t v5; // 0x180a85
    unsigned char v6 = (char)v5; // 0x180a9d
    unsigned char v7 = v6 - 43; // 0x180a9d
    int64_t v8 = v5 & 0xffffff00 | (int64_t)v7; // 0x180a9f
    if (v6 < 43 || v7 == 0) {
        v8 = function_180a5e();
    }
    int64_t v9 = a3 + a2; // 0x180a98
    int32_t * v10 = (int32_t *)((v8 | 230) - 11); // 0x180aa3
    *v10 = *v10 + v4;
    char * v11 = (char *)unknown_690db1ac(); // 0x180aab
    *v11 = *v11 + (char)(v5 / 256);
    int64_t result2 = __asm_in((int16_t)v9);
    __asm_out((int16_t)(v9 & 0xffffffff), (int32_t)result2);
    return result2;
}

// Address range: 0x180ac6 - 0x180ac8
int64_t function_180ac6(void) {
    // 0x180ac6
    return function_180a7e();
}

// Address range: 0x180acf - 0x180ad0
int64_t function_180acf(void) {
    // 0x180acf
    int64_t result; // 0x180acf
    return result;
}

// Address range: 0x180af5 - 0x180afb
int64_t function_180af5(void) {
    // 0x180af5
    int64_t result; // 0x180af5
    return result;
}

// Address range: 0x180b05 - 0x180b08
int64_t function_180b05(int64_t a1) {
    // 0x180b05
    return function_180acf();
}

// Address range: 0x180b94 - 0x180b9c
int64_t function_180b94(int64_t a1, int64_t a2) {
    // 0x180b94
    int64_t result; // 0x180b94
    return result;
}

// Address range: 0x180ba6 - 0x180bac
int64_t function_180ba6(int64_t a1, int64_t a2) {
    // 0x180ba6
    __asm_int(6);
    int64_t result; // 0x180ba6
    return result;
}

// Address range: 0x180c6b - 0x180c6c
int64_t function_180c6b(void) {
    // 0x180c6b
    int64_t result; // 0x180c6b
    return result;
}

// Address range: 0x180cdd - 0x180cdf
int64_t function_180cdd(void) {
    // 0x180cdd
    return function_180c6b();
}

// Address range: 0x180cdf - 0x180ce0
int64_t function_180cdf(void) {
    // 0x180cdf
    int64_t result; // 0x180cdf
    return result;
}

// Address range: 0x180ce4 - 0x180cea
int64_t function_180ce4(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 44); // 0x180ce4
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x180ce4
    return result;
}

// Address range: 0x180d2a - 0x180d2d
int64_t function_180d2a(int64_t a1) {
    // 0x180d2a
    int64_t result; // 0x180d2a
    __asm_out_133(124, (char)result);
    return result;
}

// Address range: 0x180d40 - 0x180d41
int64_t function_180d40(void) {
    // 0x180d40
    int64_t result; // 0x180d40
    return result;
}

// Address range: 0x180d9a - 0x180da1
int64_t function_180d9a(void) {
    // 0x180d9a
    int64_t v1; // 0x180d9a
    return function_180da4(v1, 0xaf80af15, v1, v1, (int64_t)&g1, (int64_t)&g1);
}

// Address range: 0x180da2 - 0x180da4
int64_t function_180da2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180da2
    int64_t result; // 0x180da2
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x180da4 - 0x180e8b
int64_t function_180da4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x180da4
    *(int32_t *)-0x46097c6dfcef2210 = (int32_t)__asm_int1(a1, a2);
    uint64_t v1 = a4 - (a3 & 0xff00);
    int64_t v2 = v1 & 0xff00 | a4 & -0xff01; // 0x180daf
    int64_t v3 = unknown_6a8276b8(); // 0x180db2
    int64_t v4 = a2; // 0x180db8
    int32_t * v5 = (int32_t *)v2; // 0x180dc0
    int64_t v6 = (int64_t)&v4; // 0x180db8
    v6 -= 8;
    *(int64_t *)v6 = 0x282233a7;
    int64_t v7 = v3 & -256; // 0x180dbe
    int64_t v8; // 0x180da4
    *v5 = *v5 + (int32_t)v8;
    int16_t v9 = (v3 + v1 / 256) % 256 | v7; // 0x180dc2
    int16_t v10 = (int16_t)*(char *)(a1 + 0x10fb209e); // 0x180dc2
    int16_t v11 = v9 / v10; // 0x180dc2
    int64_t v12 = v11; // 0x180dc2
    int64_t v13 = (v7 | v12) & -0xff01 | (int64_t)(256 * (v9 % v10)); // 0x180dc2
    char * v14 = (char *)(v2 + 0x229c1366 + v13); // 0x180dc8
    char v15 = *v14 | (char)v11; // 0x180dc8
    *v14 = v15;
    while (v15 >= 0) {
        // 0x180db9
        v6 -= 8;
        *(int64_t *)v6 = 0x282233a7;
        v7 = v13 & -256;
        *v5 = *v5 + (int32_t)v8;
        v9 = (v13 + v1 / 256) % 256 | v7;
        v10 = (int16_t)*(char *)(a1 + 0x10fb209e);
        v11 = v9 / v10;
        v12 = v11;
        v13 = (v7 | v12) & -0xff01 | (int64_t)(256 * (v9 % v10));
        v14 = (char *)(v2 + 0x229c1366 + v13);
        v15 = *v14 | (char)v11;
        *v14 = v15;
    }
    // 0x180dd1
    int64_t v16; // 0x180da4
    int32_t v17 = *(int32_t *)&v16 + (int32_t)a1; // 0x180dd1
    unsigned char v18 = llvm_ctpop_i8((char)v17); // 0x180dd1
    *(int32_t *)v16 = v17;
    if (v18 % 2 != 0) {
        int64_t v19 = v12 & 100 | 155; // 0x180dd5
        __asm_out_133(110, (char)v19);
        return v13 & -256 | v19;
    }
    int32_t * v20 = (int32_t *)(a3 + 31); // 0x180de0
    uint32_t v21 = *v20; // 0x180de0
    uint32_t v22 = v21 + (int32_t)a2; // 0x180de0
    *v20 = v22;
    int64_t v23 = a3 & -256 | 30; // 0x180de3
    char * v24 = (char *)v13; // 0x180de5
    *v24 = *v24 + (char)a4 + (char)(v22 < v21);
    bool v25; // 0x180da4
    int64_t v26 = (v25 ? -4 : 4) + a1; // 0x180de7
    *(int32_t *)v16 = *(int32_t *)&v16 | (int32_t)v26;
    int64_t result = unknown_ffffffffa4e5ca03(v26, 0xe01e8a3, v23); // 0x180dfd
    *(char *)v26 = (char)result;
    if (v2 != 0) {
        // 0x180e05
        return result;
    }
    int32_t v27 = v26 + (v25 ? 0xffffffff : 1); // 0x180e78
    *(int32_t *)-0x171e1281 = *(int32_t *)-0x171e1281 + v27;
    int32_t * v28 = (int32_t *)(v23 + 0x647b10d1); // 0x180e7e
    *v28 = *v28 + v27;
    return result + v8 & 0xffffffff;
}

// Address range: 0x180eb2 - 0x180ede
int64_t function_180eb2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a3 - 96); // 0x180ebb
    *v1 = *v1 | (int32_t)a4;
    char v2 = *(char *)0x16378dcb; // 0x180ec4
    int64_t v3; // 0x180eb2
    *(char *)0x16378dcb = v2 + (char)((uint64_t)v3 / 256);
    __asm_int(122);
    char * v4 = (char *)(unknown_69128dd7() + 20); // 0x180ed6
    *v4 = *v4 + (char)a3;
    return function_ffffffff8868e3e3();
}

// Address range: 0x180f7b - 0x180f98
int64_t function_180f7b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x180f7b
    unknown_ffffffff8914a181();
    __asm_in_134(53);
    int64_t result = unknown_74f1d8e(); // 0x180f88
    char * v1 = (char *)result; // 0x180f95
    int64_t v2; // 0x180f7b
    *v1 = *v1 - (char)((uint64_t)v2 / 256);
    return result;
}

// Address range: 0x180f98 - 0x181043
int64_t function_180f98(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2; // 0x180f98
    int32_t v3 = v2;
    *(int32_t *)v2 = v3 + (int32_t)a4;
    *(int32_t *)a3 = *(int32_t *)&v1 + (int32_t)a2;
    int32_t * v4 = (int32_t *)(a2 + 0x380e9eec); // 0x180faa
    uint32_t v5 = *v4; // 0x180faa
    uint32_t v6 = v5 + v3; // 0x180faa
    *v4 = v6;
    if (v6 < v5 || v6 == 0) {
        // 0x180fb2
        return unknown_f9ee6b8();
    }
    // 0x18102a
    int64_t v7; // 0x180f98
    __asm_outsb((int16_t)v1, *(char *)&v7);
    return unknown_ffffffffce1e8a44();
}

// Address range: 0x181045 - 0x181056
int64_t function_181045(int64_t a1, int64_t a2, int64_t a3) {
    // 0x181045
    return 0x9fc30a1e;
}

// Address range: 0x181285 - 0x181291
int64_t function_181285(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 - 30); // 0x181289
    int64_t v2; // 0x181285
    char v3 = *v1 | (char)(*(int32_t *)(v2 + 127) + (int32_t)v2); // 0x181289
    *v1 = v3;
    int64_t result = a4 & 0xffffffff; // 0x18128c
    if (v3 == 0) {
        result = function_181276();
    }
    int32_t * v4 = (int32_t *)(result - 28); // 0x18128e
    *v4 = *v4 + (int32_t)v2;
    return result;
}

// Address range: 0x1812c5 - 0x1812c6
int64_t function_1812c5(int64_t a1) {
    // 0x1812c5
    int64_t result; // 0x1812c5
    return result;
}

// Address range: 0x1812ed - 0x1812ef
int64_t function_1812ed(void) {
    // 0x1812ed
    int64_t v1; // 0x1812ed
    return function_181351(v1, v1, v1, v1);
}

// Address range: 0x1812f1 - 0x1812fa
int64_t function_1812f1(int64_t a1) {
    // 0x1812f1
    int64_t result; // 0x1812f1
    return result;
}

// Address range: 0x18131b - 0x181328
int64_t function_18131b(int64_t a1) {
    // 0x18131b
    int64_t result; // 0x18131b
    return result;
}

// Address range: 0x18133b - 0x18133c
int64_t function_18133b(void) {
    // 0x18133b
    int64_t result; // 0x18133b
    return result;
}

// Address range: 0x18133e - 0x18134b
int64_t function_18133e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x18133e
    int64_t v1; // 0x18133e
    uint64_t v2 = v1;
    int64_t result = v1;
    char * v3 = (char *)(result - 24 + 8 * result); // 0x18133e
    *v3 = *v3 + (char)v2;
    *(char *)a1 = (char)(v2 / 256);
    return result;
}

// Address range: 0x181351 - 0x181387
int64_t function_181351(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x181351
    int64_t v1; // 0x181351
    int64_t v2 = 2 * v1; // 0x181351
    *(int32_t *)-0x173390a6 = *(int32_t *)-0x173390a6 + (int32_t)a1;
    int32_t * v3 = (int32_t *)(a3 - 0x12aaef2a); // 0x181359
    *v3 = *v3 + (int32_t)a3;
    int64_t v4 = 0x68e02b00; // bp-8, 0x18135f
    char * v5 = (char *)((v2 & 0xffffffff) - 121); // 0x181364
    *v5 = *v5 + (char)(v1 / 256);
    int32_t * v6 = (int32_t *)(a3 + 44); // 0x18136c
    *v6 = *v6 + (int32_t)(int64_t)&v4;
    uint32_t v7 = *(int32_t *)-0x7ce5b73d99b69ca2; // 0x181376
    char v8 = *(char *)(a1 - 0x42ff9706); // 0x18137f
    return 256 * (int64_t)(v8 + (char)((int32_t)v2 < 0xfb13ef01) + (char)(v7 / 256)) | (int64_t)(v7 & -0xff01);
}

// Address range: 0x1813ac - 0x1813c3
int64_t function_1813ac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffb4a513b2(); // 0x1813ac
    int32_t v2 = a4; // 0x1813b1
    int32_t * v3 = (int32_t *)v1;
    *v3 = v2;
    int32_t * v4 = v3; // 0x1813b3
    int32_t v5 = v2; // 0x1813b3
    int64_t v6 = v1; // 0x1813b3
    bool v7; // 0x1813ac
    if (!v7) {
        v6 = function_18133b();
        v4 = (int32_t *)v6;
        v5 = *v4;
    }
    // 0x1813b5
    *v4 = v5 + (int32_t)v6;
    return function_ffffffffb10d27ee();
}

// Address range: 0x1813f1 - 0x1813fc
int64_t function_1813f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1813f1
    return function_ffffffffb435a458();
}

// Address range: 0x18146d - 0x181478
int64_t function_18146d(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x1400cbc8); // 0x18146d
    int64_t v2; // 0x18146d
    *v1 = *v1 + (int32_t)v2;
    return function_ffffffffe8d21b68();
}

// Address range: 0x2e881e - 0x2e8820
int64_t function_2e881e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e881e
    int64_t result; // 0x2e881e
    return result;
}

// Address range: 0x2e8822 - 0x2e8823
int64_t function_2e8822(void) {
    // 0x2e8822
    int64_t result; // 0x2e8822
    return result;
}

// Address range: 0x2e8826 - 0x2e883c
int64_t function_2e8826(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e8826
    int64_t result; // 0x2e8826
    int32_t * v1 = (int32_t *)(result + 0x346df575); // 0x2e8829
    *v1 = *v1 + (int32_t)a3;
    char v2 = *(char *)0x1b26673a; // 0x2e8833
    int64_t v3; // 0x2e8826
    *(char *)0x1b26673a = v2 + (char)((int64_t)&v3 / 256);
    return result;
}

// Address range: 0x2e886b - 0x2e886d
int64_t function_2e886b(void) {
    // 0x2e886b
    int64_t result; // 0x2e886b
    return result;
}

// Address range: 0x2e88db - 0x2e88e2
int64_t function_2e88db(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = __asm_sti(a1, a2, a3); // 0x2e88db
    // 0x2e88e2
    return result;
}

// Address range: 0x2e892f - 0x2e8934
int64_t function_2e892f(void) {
    // 0x2e892f
    return function_ffffffffcfd646a7();
}

// Address range: 0x2e8940 - 0x2e8946
int64_t function_2e8940(int64_t a1) {
    // 0x2e8940
    return unknown_ffffffffa0b34f46(a1);
}

// Address range: 0x2e8953 - 0x2e8959
int64_t function_2e8953(void) {
    // 0x2e8953
    __asm_sti((int64_t)&g1, (int64_t)&g1, (int64_t)&g1);
    return function_5cc9c1b5();
}

// Address range: 0x2e896c - 0x2e8971
int64_t function_2e896c(void) {
    // 0x2e896c
    return function_ffffffffe03006fd();
}

// Address range: 0x2e8a20 - 0x2e8a25
int64_t function_2e8a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 + 40); // 0x2e8a20
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x2e8a20
    return result;
}

// Address range: 0x2e8a7b - 0x2e8a7c
int64_t function_2e8a7b(void) {
    // 0x2e8a7b
    int64_t result; // 0x2e8a7b
    return result;
}

// Address range: 0x2e8aa9 - 0x2e8ab2
int64_t function_2e8aa9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e8aa9
    int64_t result; // 0x2e8aa9
    return result;
}

// Address range: 0x2e8ab2 - 0x2e8af1
int64_t function_2e8ab2(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x2e8ab2
    int64_t v1; // 0x2e8ab2
    uint64_t v2 = v1;
    *(char *)0x62858bb9 = *(char *)0x62858bb9 + (char)(v1 / 256);
    *(int32_t *)v2 = 2 * (int32_t)v2;
    char * v3 = (char *)(a4 + 28 + ((v2 / 256 + v2) % 256 | v2 & -256)); // 0x2e8abe
    *v3 = *v3 | -41;
    __asm_int3(a5);
    int64_t v4 = unknown_ffffffffe52cdccb(); // 0x2e8ac5
    char * v5 = (char *)v4; // 0x2e8ae2
    char v6 = *v5; // 0x2e8ae2
    *v5 = v6 - (char)(a3 / 256) + (char)((int32_t)v4 >= 0x3322f801);
    return v1 & 0xffffffff;
}

// Address range: 0x2e8af3 - 0x2e8b88
int64_t function_2e8af3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    __asm_in((int16_t)a3);
    int64_t v2; // 0x2e8af3
    if ((int32_t)v2 > 0x4ffcb1e7) {
        function_2e8a7b();
    }
    int32_t * v3 = (int32_t *)a6; // 0x2e8b06
    *v3 = *v3 + (int32_t)a6;
    uint32_t v4 = (int32_t)__asm_iretd(); // 0x2e8b09
    int64_t v5 = a1 & 0xffffff00; // 0x2e8b0a
    char * v6 = (char *)(8 * v2 + ((a1 + 124) % 256 | v5)); // 0x2e8b10
    unsigned char v7 = *v6; // 0x2e8b10
    *v6 = v7 / 128 | 2 * v7;
    int32_t * v8 = (int32_t *)(v1 - 119); // 0x2e8b13
    *v8 = *v8 + (int32_t)v1;
    int64_t result = v5 | (int64_t)*(char *)0x3d00006846cc3a0a; // 0x2e8b16
    int32_t v9 = v2; // 0x2e8b1f
    uint32_t v10 = v4 + v9; // 0x2e8b1f
    if (v10 >= v4 && v10 != 0) {
        // 0x2e8b24
        return result;
    }
    if (((v10 ^ v4) & (v10 ^ v9)) < 0) {
        // 0x2e8b7e
        *(char *)-0x290dc87b = *(char *)-0x290dc87b + (char)(v2 / 256);
        return result;
    }
    // 0x2e8b5a
    *(int32_t *)(int64_t)v10 = *(int32_t *)&v1;
    return result;
}

// Address range: 0x2e8bb4 - 0x2e8bb5
int64_t function_2e8bb4(void) {
    // 0x2e8bb4
    int64_t result; // 0x2e8bb4
    return result;
}

// Address range: 0x2e8be8 - 0x2e8be9
int64_t function_2e8be8(void) {
    // 0x2e8be8
    int64_t result; // 0x2e8be8
    return result;
}

// Address range: 0x2e8bf8 - 0x2e8bfd
int64_t function_2e8bf8(void) {
    // 0x2e8bf8
    return function_16b8c1f();
}

// Address range: 0x2e8c13 - 0x2e8ca1
int64_t function_2e8c13(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    bool v3; // 0x2e8c13
    if (v3) {
        // 0x2e8c5e
        int64_t v4; // 0x2e8c13
        int32_t * v5 = (int32_t *)(v4 + 0x2f054305); // 0x2e8c63
        *v5 = *v5 | (int32_t)v4;
        char * v6 = (char *)(a4 & -256 | 18); // 0x2e8c6e
        *v6 = *v6 + 12;
        __readgsbyte(v4 + 44);
        int64_t v7; // 0x2e8c13
        int64_t v8 = v7;
        *(char *)v8 = *(char *)&v7 + (char)v8;
        uint32_t v9 = *(int32_t *)&v1; // 0x2e8c7f
        *(char *)(int64_t)v9 = 2 * (char)v9;
        __asm_in_136(65);
        __asm_outsd((int16_t)v1, *(int32_t *)&v2);
        int64_t v10 = v3 ? -1 : 1; // 0x2e8c8d
        return __asm_int1((v3 ? -4 : 4) + a1 + v10, v2 + v10);
    }
    // 0x2e8c15
    return function_2e8be8();
}

// Address range: 0x2e8cbe - 0x2e8cc6
int64_t function_2e8cbe(int64_t a1, int64_t a2) {
    // 0x2e8cbe
    unknown_5b359ee6(a1, a2);
    int64_t v1; // 0x2e8cbe
    bool v2; // 0x2e8cbe
    return unknown_6367b6f3(a1, (v2 ? -1 : 1) + a2, v1);
}

// Address range: 0x2e8ce4 - 0x2e8ce6
int64_t function_2e8ce4(void) {
    // 0x2e8ce4
    int64_t result; // 0x2e8ce4
    int64_t v1 = result;
    *(char *)v1 = (char)(result / 256 & v1);
    return result;
}

// Address range: 0x2e8ce6 - 0x2e8cf6
int64_t function_2e8ce6(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t result = unknown_6367b6f3(a1, a2, a3); // 0x2e8ceb
    int64_t v1; // 0x2e8ce6
    char * v2 = (char *)(v1 + 0x5bddc40f); // 0x2e8cf0
    *v2 = *v2 + (char)(a3 / 256) + (char)((int32_t)v1 < 0x826d0001);
    return result;
}

// Address range: 0x2e8cf7 - 0x2e8d03
int64_t function_2e8cf7(int64_t a1) {
    // 0x2e8cf7
    int64_t result; // 0x2e8cf7
    *(char *)0x78013d00003332b7 = (char)result;
    return result;
}

// Address range: 0x2e8d6c - 0x2e8d6f
int64_t function_2e8d6c(void) {
    // 0x2e8d6c
    int64_t result; // 0x2e8d6c
    return result;
}

// Address range: 0x2e8e00 - 0x2e8e0a
int64_t function_2e8e00(void) {
    // 0x2e8e00
    bool v1; // 0x2e8e00
    if (!v1) {
        // 0x2e8e0b
        int64_t result; // 0x2e8e00
        return result;
    }
    int64_t result2 = unknown_3db1f809(); // 0x2e8e03
    int32_t * v2 = (int32_t *)result2; // 0x2e8e08
    *v2 = *v2 + (int32_t)result2;
    return result2;
}

// Address range: 0x2e8e0d - 0x2e8e13
int64_t function_2e8e0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e8e0d
    int64_t v1; // 0x2e8e0d
    int64_t v2 = v1;
    return v2 + 256 * a3 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x2e8e21 - 0x2e8e3f
int64_t function_2e8e21(int64_t a1, int64_t a2) {
    // 0x2e8e21
    int64_t v1; // 0x2e8e21
    uint64_t v2 = v1;
    char * v3 = (char *)(a1 - 0x43757dff); // 0x2e8e21
    *v3 = *v3 + (char)(v2 / 256);
    char * v4 = (char *)(v1 + 0x1900013d); // 0x2e8e34
    *v4 = *v4 + (char)v2;
    return (v2 + 121) % 256 | v2 & -256;
}

// Address range: 0x2e8e54 - 0x2e8e61
int64_t function_2e8e54(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e8e54
    return function_43356e69();
}

// Address range: 0x2e8eeb - 0x2e8ef8
int64_t function_2e8eeb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e8eeb
    int64_t result; // 0x2e8eeb
    return result;
}

// Address range: 0x2e8f31 - 0x2e8f32
int64_t function_2e8f31(void) {
    // 0x2e8f31
    int64_t result; // 0x2e8f31
    return result;
}

// Address range: 0x2e8f58 - 0x2e8f5d
int64_t function_2e8f58(void) {
    // 0x2e8f58
    return function_64130622();
}

// Address range: 0x2e8f74 - 0x2e8f76
int64_t function_2e8f74(int64_t a1) {
    // 0x2e8f74
    int64_t v1; // 0x2e8f74
    bool v2; // 0x2e8f74
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x2e8f76 - 0x2e8f78
int64_t function_2e8f76(void) {
    // 0x2e8f76
    return function_2e8f31();
}
