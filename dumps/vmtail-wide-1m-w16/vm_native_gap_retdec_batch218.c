/*
 * Targeted RetDec C for native executable gap queue batch 218.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x180485-0x180685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x180885-0x180a85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e801e-0x2e821e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e821e-0x2e841e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e841e-0x2e861e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e861e-0x2e881e rank=- name=- kind=- bytes=- uncovered=-
 *   0xe559c-0xe579c rank=- name=- kind=- bytes=- uncovered=-
 *   0xe579c-0xe599c rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
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

int64_t function_180485(void);
int64_t function_180490(int64_t a1, int64_t a2);
int64_t function_1804a4(int64_t a1);
int64_t function_180548(void);
int64_t function_180568(void);
int64_t function_18057c(int64_t a1);
int64_t function_180581(void);
int64_t function_180598(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7);
int64_t function_18062b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_180885(void);
int64_t function_1808a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1808ab(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1808c5(void);
int64_t function_18099f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1809aa(void);
int64_t function_1809c9(int64_t a1);
int64_t function_1809fd(int64_t a1);
int64_t function_1809ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_180a7c(int64_t a1);
int64_t function_2e801e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e804d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e80d2(void);
int64_t function_2e8150(void);
int64_t function_2e8154(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e8156(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2e81f5(void);
int64_t function_2e8322(void);
int64_t function_2e833c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2e8420(void);
int64_t function_2e8475(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2e85b5(void);
int64_t function_2e85d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e862e(void);
int64_t function_2e8652(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e8669(void);
int64_t function_2e866e(void);
int64_t function_2e86a2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2e872d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e873c(void);
int64_t function_2e878d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e87ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2e87fd(int64_t a1);
int64_t function_2e8800(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2e8851();
int64_t function_430707e();
int64_t function_cdc60();
int64_t function_e559c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_e56e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_e58d0(void);
int64_t function_e5939(void);
int64_t function_ffffffff9a8af956();
int64_t function_ffffffff9e937ca3();
int64_t function_ffffffffa171b8a0();
int64_t function_ffffffffdd1a8bf8();
int64_t function_ffffffffe8aafedd();
int64_t unknown_1e99b22c();
int64_t unknown_2ee0709a();
int64_t unknown_3d19ee45();
int64_t unknown_4868a579();
int64_t unknown_5793cd3b();
int64_t unknown_5b80640e();
int64_t unknown_683d8fe9();
int64_t unknown_690e837b();
int64_t unknown_ffffffff84c1a558();
int64_t unknown_ffffffffc4b3ffe0();
int64_t unknown_ffffffffddf95073();
int64_t unknown_fffffffff0c87b57();
int64_t unknown_fffffffffd0d3754();

// Address range: 0xe559c - 0xe56e6
int64_t function_e559c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0xe559c
    int64_t v1; // 0xe559c
    return function_cdc60(a1, a2, a3, a4 - ((v1 ^ 0x102f003) + 1 ^ 0x37fd93ff ^ v1), a5, a6, 0x6c92ca71, 0xe4014, 169);
}

// Address range: 0xe56e6 - 0xe58ce
int64_t function_e56e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xe56e6
    int64_t v1; // bp-32, 0xe56e6
    int64_t v2 = (int64_t)&v1; // 0xe5745
    int64_t * v3 = (int64_t *)(v2 - 16); // 0xe5775
    *v3 = a1;
    int64_t v4 = v2 - 8; // 0xe577e
    int64_t * v5 = (int64_t *)v4; // 0xe577e
    int64_t v6 = *v3; // 0xe5783
    int64_t v7 = *(int64_t *)(v2 + 32); // 0xe5787
    *v5 = v7;
    *v3 = v7;
    int64_t * v8 = (int64_t *)(v2 + 16); // 0xe579a
    int64_t v9 = *v8; // 0xe579a
    *v5 = v9;
    *(int64_t *)(v2 + 8) = v7;
    int64_t * v10 = (int64_t *)(v2 - 24); // 0xe57ca
    int64_t * v11 = (int64_t *)(v2 - 40); // 0xe580c
    *v11 = a5;
    int64_t * v12 = (int64_t *)(v2 - 48); // 0xe582c
    *v12 = a2;
    int64_t v13 = *v12; // 0xe5853
    int64_t v14 = *v11; // 0xe5857
    *v11 = a4;
    *v8 = v9;
    *(int64_t *)(v2 - 32) = v4;
    *v11 = *v10;
    int64_t v15 = *v10; // 0xe58a4
    *(int64_t *)(v15 - 8) = *(int64_t *)v15;
    *(int64_t *)(v15 - 16) = v15;
    int64_t v16; // 0xe56e6
    bool v17; // 0xe56e6
    return function_cdc60(v6, v13, a3, a4, v14, v16, 0xe4277, 169, 0x4000 * (int64_t)v17 | 2048 * (int64_t)v17 | 1024 * (int64_t)v17 | 512 * (int64_t)v17 | 256 * (int64_t)v17 | 128 * (int64_t)v17 | 64 * (int64_t)v17 | 16 * (int64_t)v17 | (int64_t)v17 | 4 * (int64_t)v17 | 2);
}

// Address range: 0xe58d0 - 0xe58d3
int64_t function_e58d0(void) {
    // 0xe58d0
    int64_t result; // 0xe58d0
    return result;
}

// Address range: 0xe5939 - 0xe593c
int64_t function_e5939(void) {
    // 0xe5939
    int64_t result; // 0xe5939
    return result;
}

// Address range: 0x180485 - 0x180486
int64_t function_180485(void) {
    // 0x180485
    int64_t result; // 0x180485
    return result;
}

// Address range: 0x180490 - 0x18049e
int64_t function_180490(int64_t a1, int64_t a2) {
    // 0x180490
    unknown_2ee0709a();
    return __asm_hlt();
}

// Address range: 0x1804a4 - 0x1804a5
int64_t function_1804a4(int64_t a1) {
    // 0x1804a4
    int64_t result; // 0x1804a4
    return result;
}

// Address range: 0x180548 - 0x18054a
int64_t function_180548(void) {
    // 0x180548
    return function_180581();
}

// Address range: 0x180568 - 0x18056b
int64_t function_180568(void) {
    // 0x180568
    int64_t result; // 0x180568
    return result;
}

// Address range: 0x18057c - 0x18057f
int64_t function_18057c(int64_t a1) {
    // 0x18057c
    int64_t result; // 0x18057c
    return result;
}

// Address range: 0x180581 - 0x180586
int64_t function_180581(void) {
    // 0x180581
    int64_t result; // 0x180581
    return result;
}

// Address range: 0x180598 - 0x180629
int64_t function_180598(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7) {
    // 0x180598
    if (a4 != 0) {
        // 0x18059c
        return function_ffffffffa171b8a0();
    }
    bool v1; // 0x180598
    int64_t v2 = (v1 ? -1 : 1) + a2; // 0x1805b5
    int64_t v3; // 0x180598
    int32_t * v4 = (int32_t *)(v3 + 18); // 0x1805b6
    *v4 = 2 * *v4;
    unsigned char v5 = *(char *)0x27d06f010709d40a; // 0x1805ba
    int64_t v6 = v3 & -256 | (int64_t)v5; // 0x1805ba
    int32_t v7 = v6; // 0x1805c9
    *(int32_t *)a1 = v7;
    int64_t v8 = (v1 ? -4 : 4) + a1; // 0x1805c9
    char * v9 = (char *)v6; // 0x1805ca
    *v9 = *v9 + v5;
    char * v10 = (char *)(v2 + 0x3d000005); // 0x1805cc
    *v10 = *v10 + (char)(a3 / 256);
    uint32_t v11 = v7 + 0x447a1cbe; // 0x1805dc
    unsigned char v12 = (char)v11; // 0x1805dc
    int64_t v13; // 0x180598
    if (llvm_ctpop_i8(v12) % 2 != 0) {
        // 0x1805e3
        unknown_683d8fe9(v8, v2);
        char * v14 = (char *)(v8 - 92); // 0x1805e8
        *v14 = *v14 + (char)(v13 / 256);
        unsigned char v15 = *(char *)-0x20f0830e; // 0x1805eb
        unsigned char v16 = v15 + (char)(v13 / 256); // 0x1805eb
        *(char *)-0x20f0830e = v16;
        *(char *)0x6dd5e898 = *(char *)0x6dd5e898 + (char)(v16 < v15);
        return 0x6dd5e898;
    }
    int64_t v17 = v11; // 0x1805dc
    char * v18 = (char *)(2 * v2 + 0x3d00f824 + v13); // 0x1805fc
    *v18 = 2 * *v18;
    char v19 = a7 / 256; // 0x180606
    *(char *)v13 = *(char *)&v13 & v19;
    int16_t v20 = v11; // 0x180608
    *(char *)v8 = __asm_insb(v20);
    char v21 = __asm_in_133(92); // 0x18060c
    int64_t v22 = v13 - v17 & 0xffffff00; // 0x180611
    v13 = v22;
    char * v23 = (char *)(v22 | 86); // 0x180614
    char v24 = *v23 + (char)((char)(v11 / 256) < v12) - v19; // 0x180614
    *v23 = v24;
    if (v24 != 0) {
        // 0x1805a5
        unknown_ffffffff84c1a558();
        __asm_outsb(v20, *(char *)v2);
        return __asm_iretd() & -256 | (int64_t)__asm_in_134(v20);
    }
    // 0x180619
    *(char *)-0x3aea65e0 = *(char *)-0x3aea65e0 + (char)(v13 / 256);
    *(int64_t *)a6 = v17 + a6;
    return (int64_t)v21 | (int64_t)(0x10000 * (int32_t)a3 >> 16 & -256);
}

// Address range: 0x18062b - 0x180685
int64_t function_18062b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x18062b
    int64_t v1; // 0x18062b
    int64_t v2 = v1 & -0xff01; // 0x18062b
    bool v3; // 0x18062b
    int32_t * v4 = (int32_t *)(a1 - a2 + (int64_t)v3 & 0xffffffff); // 0x180639
    *v4 = *v4 | -0x2dd218fb;
    unknown_3d19ee45((int64_t)*(int32_t *)0x3c70cd27dd5013d);
    int32_t * v5 = (int32_t *)(2 * a2 - 0x7dd1e0c9 + (v2 | (int64_t)&g5)); // 0x180644
    uint32_t v6 = *v5; // 0x180644
    uint32_t v7 = v6 + (int32_t)a4; // 0x180644
    *v5 = v7;
    __asm_sti();
    int64_t v8 = unknown_fffffffffd0d3754(); // 0x18064e
    int64_t v9; // 0x18062b
    char v10 = *(char *)&v9; // 0x180653
    int32_t * v11 = (int32_t *)(a4 + 0x5e801e8); // 0x180659
    *v11 = *v11 - 0x6c586cc9;
    float80_t v12; // 0x18062b
    *(int64_t *)((a4 % 256 ^ a3) - 0x45fe178c) = (int64_t)v12;
    int64_t v13 = (v2 | (int64_t)&g5 & -0xff01 | 256 * (int64_t)((char)(v7 < v6) + (char)((int64_t)&g5 >> 8) - v10)) + (v8 & 0xffffff00 | v8 + 11 & 23 | 232); // 0x180672
    if ((char)((v13 | a3) / 256) == 0) {
        // 0x180678
        return v13 & 0xffffffff;
    }
    // 0x180680
    return v13 & 0xffff00ff | (int64_t)&g6;
}

// Address range: 0x180885 - 0x18088c
int64_t function_180885(void) {
    // 0x180885
    int64_t v1; // 0x180885
    return function_1808ab(v1, v1, v1);
}

// Address range: 0x1808a0 - 0x1808ab
int64_t function_1808a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 58); // 0x1808a0
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x1808a0
    __asm_out((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x1808ab - 0x1808ac
int64_t function_1808ab(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1808ab
    return __asm_in((int16_t)a3);
}

// Address range: 0x1808c5 - 0x1808c6
int64_t function_1808c5(void) {
    // 0x1808c5
    int64_t result; // 0x1808c5
    return result;
}

// Address range: 0x18099f - 0x1809a8
int64_t function_18099f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18099f
    *(int32_t *)a4 = 0;
    return function_ffffffff9a8af956();
}

// Address range: 0x1809aa - 0x1809af
int64_t function_1809aa(void) {
    // 0x1809aa
    return function_ffffffffe8aafedd();
}

// Address range: 0x1809c9 - 0x1809ca
int64_t function_1809c9(int64_t a1) {
    // 0x1809c9
    int64_t result; // 0x1809c9
    return result;
}

// Address range: 0x1809fd - 0x1809fe
int64_t function_1809fd(int64_t a1) {
    // 0x1809fd
    int64_t result; // 0x1809fd
    return result;
}

// Address range: 0x1809ff - 0x180a40
int64_t function_1809ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    __asm_wait();
    int64_t v2; // 0x1809ff
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x180a07
    *(int32_t *)v3 = (int32_t)unknown_5b80640e(v3);
    bool v4; // 0x1809ff
    int64_t v5 = v3 + (v4 ? -4 : 4); // 0x180a0d
    uint64_t v6 = unknown_1e99b22c(v5); // 0x180a26
    *(int32_t *)v5 = __asm_insd((int16_t)v1);
    *(char *)v1 = *(char *)&v1 | (char)(v6 / 256);
    *(char *)a4 = (char)a4;
    int64_t result = unknown_5793cd3b(); // 0x180a34
    int32_t * v7 = (int32_t *)(result + 0x824e80a); // 0x180a3a
    *v7 = (int32_t)v2 + 16 + *v7;
    return result;
}

// Address range: 0x180a7c - 0x180a81
int64_t function_180a7c(int64_t a1) {
    // 0x180a7c
    int64_t v1; // 0x180a7c
    int64_t v2 = v1;
    bool v3; // 0x180a7c
    return (v2 + 162 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x2e801e - 0x2e8024
int64_t function_2e801e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e801e
    *(int64_t *)a3 = a4;
    int64_t result; // 0x2e801e
    return result;
}

// Address range: 0x2e804d - 0x2e8076
int64_t function_2e804d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e804d
    unknown_fffffffff0c87b57();
    char * v1 = (char *)(a3 - 0x17fe172f); // 0x2e805a
    int64_t v2; // 0x2e804d
    *v1 = *v1 - (char)v2;
    *(int32_t *)-0x57654e98 = *(int32_t *)-0x57654e98 + (int32_t)a1;
    unknown_ffffffffddf95073();
    return (int64_t)*(int32_t *)(a4 + 1);
}

// Address range: 0x2e80d2 - 0x2e80d4
int64_t function_2e80d2(void) {
    // 0x2e80d2
    int64_t result; // 0x2e80d2
    return result;
}

// Address range: 0x2e8150 - 0x2e8152
int64_t function_2e8150(void) {
    // 0x2e8150
    int64_t v1; // 0x2e8150
    return function_2e8156(v1, v1, v1, v1, (int64_t)&g7);
}

// Address range: 0x2e8154 - 0x2e8156
int64_t function_2e8154(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e8154
    int64_t v1; // 0x2e8154
    return v1 + a4 & 0xffffffff;
}

// Address range: 0x2e8156 - 0x2e81e1
int64_t function_2e8156(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2e8156
    __asm_hlt();
    int32_t v1 = __asm_in_135(96); // 0x2e8168
    char * v2 = (char *)((int64_t)v1 + 0x2ac11217); // 0x2e816b
    char v3 = a3; // 0x2e816b
    *v2 = *v2 | v3;
    unsigned char v4 = llvm_ctpop_i8((char)v1 | v3); // 0x2e8171
    int64_t v5 = unknown_4868a579(); // 0x2e8173
    if (v4 % 2 != 0) {
        // 0x2e817d
        int64_t v6; // 0x2e8156
        return v5 + v6 & 0xffffff00 | 218;
    }
    // 0x2e81d0
    __asm_iretd();
    unknown_ffffffffc4b3ffe0();
    return __asm_sti();
}

// Address range: 0x2e81f5 - 0x2e81f6
int64_t function_2e81f5(void) {
    // 0x2e81f5
    int64_t result; // 0x2e81f5
    return result;
}

// Address range: 0x2e8322 - 0x2e8325
int64_t function_2e8322(void) {
    // 0x2e8322
    int64_t result; // 0x2e8322
    return result;
}

// Address range: 0x2e833c - 0x2e83d5
int64_t function_2e833c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2e833c
    int64_t v1; // 0x2e833c
    *(char *)a3 = 2 * (char)v1;
    char * v2 = (char *)(a4 - 19); // 0x2e834d
    *v2 = *v2 | (char)(a4 / 256);
    int64_t v3 = __asm_iretd(); // 0x2e8350
    __readfsbyte(a4 - 29);
    char v4 = *(char *)-0x37d575a1; // 0x2e8358
    *(char *)-0x37d575a1 = v4 + (char)((int64_t)"_Resume" >> 8);
    int32_t * v5 = (int32_t *)((v1 & 0xffffffff) + 0x1bbfba784); // 0x2e835e
    *v5 = *v5 + (int32_t)v1;
    int32_t v6; // bp+127, 0x2e833c
    uint32_t v7 = (int32_t)(int64_t)&v6; // 0x2e8364
    uint32_t v8 = v6 + v7; // 0x2e8364
    uint32_t v9 = v8 + (int32_t)((char)v3 < 129); // 0x2e8364
    int64_t result = v9; // 0x2e8364
    if ((char)v3 < 129 ? v9 <= v7 : v8 < v7) {
        char * v10 = (char *)result; // 0x2e83d0
        *v10 = *v10 + (char)v9;
        return result;
    }
    // 0x2e8368
    bool v11; // 0x2e833c
    int64_t v12 = v11 ? -1 : 1; // 0x2e8368
    int64_t v13 = v12 + a2; // 0x2e8368
    char v14 = *(char *)(v13 + 11); // 0x2e8369
    float80_t v15; // 0x2e833c
    *(int32_t *)(2 * (result & 0xffffff00 | (int64_t)((char)v9 - v14))) = (int32_t)v15;
    int32_t * v16 = (int32_t *)(v13 + 0x304b3f3f); // 0x2e8376
    *v16 = *v16 ^ 0x16106017;
    return function_ffffffff9e937ca3(v12 + a1, v13);
}

// Address range: 0x2e8420 - 0x2e8423
int64_t function_2e8420(void) {
    // 0x2e8420
    int64_t result; // 0x2e8420
    return result;
}

// Address range: 0x2e8475 - 0x2e857d
int64_t function_2e8475(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2 = a2;
    int64_t v3 = unknown_690e837b(); // 0x2e8475
    *(char *)a4 = (char)a4 + (char)(a3 / 256);
    int32_t * v4 = (int32_t *)v3; // 0x2e847c
    uint32_t v5 = *v4; // 0x2e847c
    *v4 = v5 / 8 | 0x20000000 * v5;
    uint32_t v6 = *(int32_t *)&v1; // 0x2e847f
    uint32_t v7 = v6 + (int32_t)a3; // 0x2e847f
    *(int32_t *)a3 = v7;
    int32_t v8 = v3; // 0x2e8481
    int32_t v9 = v7 < v6 ? 0x68eabc : 0x68eabb; // 0x2e8481
    if (v9 > v8) {
        // 0x2e8488
        return v8 - v9;
    }
    int32_t v10 = *(int32_t *)&v2; // 0x2e84a2
    __asm_outsd((int16_t)v1, v10);
    if (a4 != 0) {
        // 0x2e8488
        return v8 - v9;
    }
    bool v11 = v7 < v6 | v9 > v8; // 0x2e8481
    int64_t v12; // 0x2e8475
    unsigned char v13 = (char)(v12 / 256); // 0x2e84a3
    char v14 = v11; // 0x2e84a3
    unsigned char v15 = *(char *)(v12 - 83) + v14; // 0x2e84a3
    unsigned char v16 = v13 - v15; // 0x2e84a3
    bool v17 = v11 ? v15 != -1 | v16 - v14 > v13 : v15 > v13; // 0x2e84a3
    char * v18 = (char *)((256 * (int64_t)v16 | v12 & -0xff01) - 5); // 0x2e8518
    char v19 = *v18; // 0x2e8518
    *v18 = 2 * v19;
    int32_t v20 = *(int32_t *)0x992fdafc; // 0x2e851d
    unsigned char v21 = (v19 < 0 ? -105 : -106) + (char)v20; // 0x2e8523
    int64_t v22 = v20 & -256; // 0x2e8523
    int64_t v23 = (int64_t)v21 | v22; // 0x2e8523
    int64_t v24 = (int64_t)((int32_t)v17 - v10) - 1; // 0x2e8525
    if (v24 != 0 && v21 != 0) {
        // 0x2e856a
        *(char *)0x7f9cb675 = *(char *)0x7f9cb675 + v16;
        return (int64_t)*(int32_t *)v23;
    }
    // 0x2e8527
    *(char *)-0x303d03d2 = *(char *)-0x303d03d2 + v16;
    uint32_t v25 = (int32_t)v24 % 32; // 0x2e852e
    if (v25 != 0) {
        int32_t * v26 = (int32_t *)v23; // 0x2e852e
        uint32_t v27 = *v26; // 0x2e852e
        *v26 = v27 >> 32 - v25 | v27 << v25;
    }
    return v22 | 188;
}

// Address range: 0x2e85b5 - 0x2e85ba
int64_t function_2e85b5(void) {
    // 0x2e85b5
    int64_t v1; // 0x2e85b5
    return v1 & -256 | 238;
}

// Address range: 0x2e85d5 - 0x2e85dc
int64_t function_2e85d5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e85d5
    int64_t result; // 0x2e85d5
    return result;
}

// Address range: 0x2e862e - 0x2e8631
int64_t function_2e862e(void) {
    // 0x2e862e
    int64_t result; // 0x2e862e
    return result;
}

// Address range: 0x2e8652 - 0x2e865b
int64_t function_2e8652(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e8652
    int64_t v1; // 0x2e8652
    __asm_outsb((int16_t)a3, (char)v1);
    return v1 + 0xff04c3c6 & 0xffffffff;
}

// Address range: 0x2e8669 - 0x2e866a
int64_t function_2e8669(void) {
    // 0x2e8669
    int64_t result; // 0x2e8669
    return result;
}

// Address range: 0x2e866e - 0x2e866f
int64_t function_2e866e(void) {
    // 0x2e866e
    int64_t result; // 0x2e866e
    return result;
}

// Address range: 0x2e86a2 - 0x2e871d
int64_t function_2e86a2(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a3; // bp-8, 0x2e86b6
    int64_t v2; // 0x2e86a2
    int64_t v3 = v2 & -256 | (int64_t)__asm_in_134((int16_t)a3); // 0x2e86ba
    if ((int32_t)((int64_t)&v1 & a4) >= 0) {
        v3 = function_2e8669();
    }
    int64_t v4 = v3;
    __asm_out_136(0x5d48, (int32_t)v4);
    char * v5 = (char *)v4; // 0x2e86c5
    *v5 = *v5 + (char)a4;
    char v6 = v4; // 0x2e86c7
    if (llvm_ctpop_i8(v6 - 1) % 2 == 0) {
        // 0x2e8714
        return (v4 + 96) % 256 | v4 & -256;
    }
    // 0x2e86d0
    int64_t v7; // 0x2e86a2
    *(char *)v7 = *(char *)&v7 - 24;
    int32_t * v8 = (int32_t *)(2 * a1 + 0xd505d30); // 0x2e86d3
    *v8 = *v8 + (int32_t)a4;
    int32_t v9 = *(int32_t *)(v7 - 81); // 0x2e86d7
    *v5 = v6;
    char * v10 = (char *)((int64_t)(v9 + (int32_t)a2) + 0x6932e77b); // 0x2e86ec
    *v10 = *v10 + (char)(a4 / 256);
    return (v4 + 13) % 256 | v4 & -256;
}

// Address range: 0x2e872d - 0x2e8731
int64_t function_2e872d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e872d
    int64_t v1; // 0x2e872d
    return v1 & 0xffffffff;
}

// Address range: 0x2e873c - 0x2e873d
int64_t function_2e873c(void) {
    // 0x2e873c
    int64_t result; // 0x2e873c
    return result;
}

// Address range: 0x2e878d - 0x2e8798
int64_t function_2e878d(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x64082d8d); // 0x2e878d
    *v1 = *v1 + (int32_t)a3;
    return function_ffffffffdd1a8bf8();
}

// Address range: 0x2e87ca - 0x2e87e5
int64_t function_2e87ca(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = __asm_wait(); // 0x2e87cc
    uint32_t v1 = (int32_t)a4 % 32; // 0x2e87ce
    if (v1 != 0) {
        uint32_t v2 = (int32_t)result;
        *(int32_t *)result = v2 >> 32 - v1 | v2 << v1;
    }
    int32_t v3 = *(int32_t *)-0x114e2329 & (int32_t)a1; // 0x2e87d0
    if (a4 == 1 || v3 == 0) {
        // 0x2e87d8
        return function_430707e(v3);
    }
    // 0x2e882e
    return result;
}

// Address range: 0x2e87fd - 0x2e87fe
int64_t function_2e87fd(int64_t a1) {
    // 0x2e87fd
    int64_t result; // 0x2e87fd
    return result;
}

// Address range: 0x2e8800 - 0x2e880e
int64_t function_2e8800(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2e8800
    int64_t v1; // 0x2e8800
    __asm_outsd((int16_t)a3, (int32_t)v1);
    return function_2e8851();
}
