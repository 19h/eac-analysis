/*
 * Targeted RetDec C for native executable gap queue batch 223.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x183285-0x183485 rank=- name=- kind=- bytes=- uncovered=-
 *   0x183485-0x183685 rank=- name=- kind=- bytes=- uncovered=-
 *   0x183685-0x183885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x183885-0x183a85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x183a85-0x183c85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2eae1e-0x2eb01e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2eb21e-0x2eb41e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2eb41e-0x2eb61e rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
extern int g4;
extern int g5;
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

int64_t function_183285(void);
int64_t function_183288(int64_t a1);
int64_t function_183293(void);
int64_t function_1832b9(void);
int64_t function_1832c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1832e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1832ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18331c(int64_t a1);
int64_t function_183357(int64_t a1);
int64_t function_183384(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_18341b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_18344a(int64_t a1);
int64_t function_183454(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_18356a(int64_t a1);
int64_t function_18356d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_183639(void);
int64_t function_18365b(int64_t a1);
int64_t function_18366b(void);
int64_t function_1836c8(int64_t a1);
int64_t function_1836d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1836ed(void);
int64_t function_183712(int64_t a1);
int64_t function_18371a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_183756(void);
int64_t function_1837cb(int64_t a1);
int64_t function_183815(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_183838(int64_t a1, int64_t a2);
int64_t function_18389d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1838f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1839c1(void);
int64_t function_1839f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_183a4e(int64_t a1);
int64_t function_183a78(int64_t a1);
int64_t function_183c53(void);
int64_t function_183c69(void);
int64_t function_20129b8();
int64_t function_2eae1e(void);
int64_t function_2eae30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2eae4d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2eae7a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2eaea0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2eaf10(int64_t a1);
int64_t function_2eaf3c(int64_t a1, int64_t a2);
int64_t function_2eaf44(int64_t a1);
int64_t function_2eaf67(int64_t a1);
int64_t function_2eaf6b(int64_t a1);
int64_t function_2eaf7f(void);
int64_t function_2eafc9(void);
int64_t function_2eafe7(void);
int64_t function_2eafeb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2eb00c(int64_t a1, int64_t a2);
int64_t function_2eb215();
int64_t function_2eb21e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2eb2ec(int64_t a1);
int64_t function_2eb3bc(void);
int64_t function_2eb3c2(void);
int64_t function_2eb421(void);
int64_t function_2eb42b(int64_t a1);
int64_t function_2eb45b(void);
int64_t function_2eb464(void);
int64_t function_2eb501(void);
int64_t function_2eb520(int64_t a1);
int64_t function_2eb52d(void);
int64_t function_2eb570(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2eb5ad(void);
int64_t function_2eb5d7(void);
int64_t function_30843b87();
int64_t function_3af9e952();
int64_t function_3d18375a();
int64_t function_3f1edf42();
int64_t function_5a299310();
int64_t function_7c9db79b();
int64_t function_8ca4fec();
int64_t function_ffffffffa2c756d2();
int64_t function_ffffffffe0333cab();
int64_t unknown_1560efa4();
int64_t unknown_ffffffff942dd16f();
int64_t unknown_ffffffff9bb2a736();
int64_t unknown_ffffffffa322911b();
int64_t unknown_ffffffffe1c3d597();

// Address range: 0x183285 - 0x183286
int64_t function_183285(void) {
    // 0x183285
    int64_t v1; // 0x183285
    bool v2; // 0x183285
    return v1 & -0xff01 | 256 * (64 * (int64_t)v2 | 128 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2) | 512;
}

// Address range: 0x183288 - 0x18328f
int64_t function_183288(int64_t a1) {
    // 0x183288
    return function_30843b87();
}

// Address range: 0x183293 - 0x183294
int64_t function_183293(void) {
    // 0x183293
    int64_t result; // 0x183293
    return result;
}

// Address range: 0x1832b9 - 0x1832ba
int64_t function_1832b9(void) {
    // 0x1832b9
    int64_t result; // 0x1832b9
    return result;
}

// Address range: 0x1832c0 - 0x1832c4
int64_t function_1832c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1832c0
    return function_1832b9();
}

// Address range: 0x1832e8 - 0x1832ee
int64_t function_1832e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 16); // 0x1832e8
    int64_t result; // 0x1832e8
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x1832ee - 0x183312
int64_t function_1832ee(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1832ee
    int64_t v1; // 0x1832ee
    if ((*(int32_t *)(8 * v1 + a3 & 0xffffffff) || (int32_t)a4) != 0) {
        function_183293();
    }
    int64_t v2 = v1 & 0xffffffff; // 0x1832f2
    int64_t v3; // 0x1832ee
    int64_t v4 = (int64_t)&v3; // 0x1832f2
    *(char *)-0x38a84bff80d924aa = (char)v4;
    *(char *)-0x7e18ccfa = (char)v1;
    *(int64_t *)(v2 - 8) = v4;
    *(int64_t *)(v2 - 16) = 0x59dd6409;
    return v1 & 0xffffffff;
}

// Address range: 0x18331c - 0x18331d
int64_t function_18331c(int64_t a1) {
    // 0x18331c
    int64_t result; // 0x18331c
    return result;
}

// Address range: 0x183357 - 0x18335d
int64_t function_183357(int64_t a1) {
    // 0x183357
    int64_t result; // 0x183357
    return result;
}

// Address range: 0x183384 - 0x1833b5
int64_t function_183384(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = *(int32_t *)0x688aa7835c45152c; // 0x183393
    int64_t result = v1; // 0x183393
    int64_t v2; // 0x183384
    char * v3 = (char *)(v2 - 0x66004002); // 0x18339c
    *v3 = *v3 + (char)(v1 / 256);
    int32_t * v4 = (int32_t *)result; // 0x1833a7
    *v4 = *v4 + v1;
    bool v5; // 0x183384
    int32_t * v6 = (int32_t *)(a2 - 0x7087d027 + (v5 ? -1 : 1)); // 0x1833ae
    *v6 = *v6 - (int32_t)a1;
    return result;
}

// Address range: 0x18341b - 0x18342a
int64_t function_18341b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18341b
    int64_t v1; // 0x18341b
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a3;
    int64_t result = v1 ^ 191; // 0x18341e
    char * v2 = (char *)(result + 4 * a4); // 0x183420
    unsigned char v3 = *v2; // 0x183420
    *v2 = v3 / 128 | 2 * v3;
    return result;
}

// Address range: 0x18344a - 0x18344d
int64_t function_18344a(int64_t a1) {
    // 0x18344a
    int64_t result; // 0x18344a
    __asm_out_133(76, (char)result);
    return result;
}

// Address range: 0x183454 - 0x183569
int64_t function_183454(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    uint64_t v1 = __asm_wait(); // 0x183456
    if ((int32_t)(a2 & a1) >= 0) {
        // 0x183459
        return __asm_sti();
    }
    unsigned char v2 = (char)a3;
    int64_t v3 = v1 & 153 | 102; // 0x18349c
    __asm_int(-77);
    char v4 = v3; // 0x1834a2
    char v5 = v4 + v2; // 0x1834a2
    *(char *)a3 = v5;
    int64_t v6; // 0x183454
    if (v5 < 0 == ((v5 ^ v2) & (v5 ^ v4)) < 0) {
        int64_t v7 = v1 & -256; // 0x18349c
        int64_t result2 = v3 | v7; // 0x18349c
        if (v5 < v2 || v5 == 0) {
            unsigned char v8 = *(char *)result2 + v4; // 0x18355c
            int64_t result = v7 | (int64_t)v8; // 0x18355c
            *(char *)v6 = -1;
            char * v9 = (char *)result; // 0x183566
            *v9 = *v9 + v8;
            return result;
        }
        // 0x1834e2
        return result2;
    }
    int64_t v10 = a1 + 0x3d00aa37 & 0xffffffff; // 0x1834ad
    int32_t * v11 = (int32_t *)v10; // 0x1834af
    int32_t v12 = *v11; // 0x1834af
    *v11 = 0x10000 * v12;
    unsigned char v13 = *(char *)(v3 + v6); // 0x1834b7
    int32_t v14 = *(int32_t *)0x3d00aa37; // 0x1834b8
    __asm_outsd((int16_t)(2 * a3 & 254 | a3 & 0xff00 | (int64_t)((v12 & 0x10000) != 0)), v14);
    char * v15 = (char *)((v1 / 256 % 256 ^ a4) + 0x13dc7e5); // 0x1834c0
    *v15 = *v15 + (char)(a4 / 256);
    char * v16 = (char *)(((a5 & (int64_t)&g2) == 0 ? 4 : -4) + v10); // 0x1834c7
    *v16 = *v16 + (char)(a3 / 256);
    return v1 & -0x10000 | (int64_t)&g1 | (int64_t)v13;
}

// Address range: 0x18356a - 0x18356d
int64_t function_18356a(int64_t a1) {
    // 0x18356a
    int64_t result; // 0x18356a
    return result;
}

// Address range: 0x18356d - 0x183584
int64_t function_18356d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x18356d
    __asm_iretd(a1);
    int64_t v1; // 0x18356d
    *(char *)a3 = (char)v1 + 46;
    return v1 & 0xffffffff;
}

// Address range: 0x183639 - 0x183640
int64_t function_183639(void) {
    // 0x183639
    return function_3f1edf42();
}

// Address range: 0x18365b - 0x18365e
int64_t function_18365b(int64_t a1) {
    // 0x18365b
    int64_t result; // 0x18365b
    return result;
}

// Address range: 0x18366b - 0x18366e
int64_t function_18366b(void) {
    // 0x18366b
    int64_t result; // 0x18366b
    return result;
}

// Address range: 0x1836c8 - 0x1836d6
int64_t function_1836c8(int64_t a1) {
    // 0x1836c8
    int64_t v1; // 0x1836c8
    return v1 + 0x933028f & 0xffffffff;
}

// Address range: 0x1836d6 - 0x1836ed
int64_t function_1836d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 75); // 0x1836dc
    *v1 = *v1 + (int32_t)a1;
    char * v2 = (char *)(a1 + 0x89d8e804); // 0x1836e4
    *v2 = *v2 ^ (char)a4;
    int64_t result; // 0x1836d6
    return result;
}

// Address range: 0x1836ed - 0x1836f2
int64_t function_1836ed(void) {
    // 0x1836ed
    return function_3d18375a();
}

// Address range: 0x183712 - 0x183714
int64_t function_183712(int64_t a1) {
    // 0x183712
    int64_t result; // 0x183712
    return result;
}

// Address range: 0x18371a - 0x183740
int64_t function_18371a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x18371a
    if (v1 != 0) {
        *(int32_t *)a1 = (int32_t)a1 << v1;
    }
    __asm_iretd(a1);
    __asm_in(-95);
    int64_t v2; // 0x18371a
    int64_t result = v2 & 0xffffffff; // 0x183734
    int32_t * v3 = (int32_t *)(2 * result + 0x4bf013d); // 0x183735
    *v3 = *v3 + 15;
    return result;
}

// Address range: 0x183756 - 0x183759
int64_t function_183756(void) {
    // 0x183756
    int64_t result; // 0x183756
    return result;
}

// Address range: 0x1837cb - 0x1837d8
int64_t function_1837cb(int64_t a1) {
    char * v1 = (char *)(a1 - 0x3cff973c); // 0x1837cb
    int64_t v2; // 0x1837cb
    *v1 = *v1 - (char)v2;
    return __asm_hlt(a1);
}

// Address range: 0x183815 - 0x18381c
int64_t function_183815(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x183815
    int64_t result; // 0x183815
    return result;
}

// Address range: 0x183838 - 0x18384f
int64_t function_183838(int64_t a1, int64_t a2) {
    // 0x183838
    int64_t result; // 0x183838
    *(int32_t *)-0x42d05963 = *(int32_t *)-0x42d05963 + (int32_t)result;
    *(int32_t *)0x91216f7f = (int32_t)a2;
    return result;
}

// Address range: 0x18389d - 0x1838a3
int64_t function_18389d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x18389d
    return function_ffffffffe0333cab();
}

// Address range: 0x1838f0 - 0x183997
int64_t function_1838f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1838f0
    bool v1; // 0x1838f0
    if (!v1) {
        // 0x1838f4
        int64_t result; // 0x1838f0
        return result;
    }
    // 0x183938
    int64_t v2; // 0x1838f0
    uint32_t v3 = (int32_t)v2 >> 31; // 0x183938
    int64_t v4 = __asm_int1(); // 0x18393f
    char v5 = (uint64_t)v2 / 256; // 0x183940
    char v6 = *(char *)-0x597837b9 + v5; // 0x183940
    *(char *)-0x597837b9 = v6;
    int64_t result2 = v3; // 0x183946
    if (v6 >= 0) {
        // 0x1838f4
        return result2;
    }
    // 0x18398f
    *(char *)(v4 & 0xffffffff) = (char)v3 - v5;
    return result2;
}

// Address range: 0x1839c1 - 0x1839c6
int64_t function_1839c1(void) {
    // 0x1839c1
    return function_20129b8();
}

// Address range: 0x1839f0 - 0x1839f7
int64_t function_1839f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1839f0
    int64_t result; // 0x1839f0
    return result;
}

// Address range: 0x183a4e - 0x183a4f
int64_t function_183a4e(int64_t a1) {
    // 0x183a4e
    int64_t result; // 0x183a4e
    return result;
}

// Address range: 0x183a78 - 0x183a7b
int64_t function_183a78(int64_t a1) {
    // 0x183a78
    int64_t result; // 0x183a78
    return result;
}

// Address range: 0x183c53 - 0x183c54
int64_t function_183c53(void) {
    // 0x183c53
    int64_t result; // 0x183c53
    return result;
}

// Address range: 0x183c69 - 0x183c6b
int64_t function_183c69(void) {
    // 0x183c69
    return function_183c53();
}

// Address range: 0x2eae1e - 0x2eae2f
int64_t function_2eae1e(void) {
    // 0x2eae1e
    return __asm_sti();
}

// Address range: 0x2eae30 - 0x2eae4b
int64_t function_2eae30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2eae30
    unknown_ffffffff9bb2a736();
    int64_t result; // 0x2eae30
    *(char *)a2 = (char)result + (char)a4;
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x2eae4d - 0x2eae61
int64_t function_2eae4d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    char * v1 = (char *)(a3 - 0x36ddfec3); // 0x2eae4f
    *v1 = *v1 & (char)(a4 / 256);
    return 0x83dc2a95;
}

// Address range: 0x2eae7a - 0x2eae8c
int64_t function_2eae7a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2eae7a
    int64_t result; // 0x2eae7a
    __asm_out_134((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x2eaea0 - 0x2eaeae
int64_t function_2eaea0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2eaea0
    int64_t result; // 0x2eaea0
    return result;
}

// Address range: 0x2eaf10 - 0x2eaf16
int64_t function_2eaf10(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 - 118); // 0x2eaf10
    *v1 = *v1 + (int32_t)a1;
    int64_t result; // 0x2eaf10
    return result;
}

// Address range: 0x2eaf3c - 0x2eaf43
int64_t function_2eaf3c(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 + 0x72a68c16); // 0x2eaf3c
    int64_t result; // 0x2eaf3c
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2eaf44 - 0x2eaf47
int64_t function_2eaf44(int64_t a1) {
    // 0x2eaf44
    int64_t result; // 0x2eaf44
    return result;
}

// Address range: 0x2eaf67 - 0x2eaf68
int64_t function_2eaf67(int64_t a1) {
    // 0x2eaf67
    int64_t result; // 0x2eaf67
    return result;
}

// Address range: 0x2eaf6b - 0x2eaf6e
int64_t function_2eaf6b(int64_t a1) {
    // 0x2eaf6b
    int64_t result; // 0x2eaf6b
    return result;
}

// Address range: 0x2eaf7f - 0x2eaf81
int64_t function_2eaf7f(void) {
    // 0x2eaf7f
    int64_t v1; // 0x2eaf7f
    return function_2eafeb(v1, v1, v1);
}

// Address range: 0x2eafc9 - 0x2eafca
int64_t function_2eafc9(void) {
    // 0x2eafc9
    int64_t result; // 0x2eafc9
    return result;
}

// Address range: 0x2eafe7 - 0x2eafe9
int64_t function_2eafe7(void) {
    // 0x2eafe7
    return function_2eafc9();
}

// Address range: 0x2eafeb - 0x2eaff7
int64_t function_2eafeb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2eafeb
    int64_t v1; // 0x2eafeb
    int64_t v2 = v1;
    *(int32_t *)0x129b151 = *(int32_t *)0x129b151 + (int32_t)v1;
    char * v3 = (char *)(a3 + 67 + 4 * v1); // 0x2eaff3
    *v3 = *v3 & (char)v1;
    return 257 * v2 & 0xff00 | v2 & -0xff01;
}

// Address range: 0x2eb00c - 0x2eb01e
int64_t function_2eb00c(int64_t a1, int64_t a2) {
    // 0x2eb00c
    int64_t v1; // 0x2eb00c
    char * v2 = (char *)(v1 - 0x7b9bfea8); // 0x2eb00c
    *v2 = *v2 | 122;
    int64_t v3; // 0x2eb00c
    *(char *)a1 = *(char *)&v3 ^ (char)v1;
    return unknown_ffffffffa322911b(a1, a2);
}

// Address range: 0x2eb21e - 0x2eb290
int64_t function_2eb21e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2eb21e
    int64_t v1; // 0x2eb21e
    bool v2; // 0x2eb21e
    if (v2 || v2) {
        // 0x2eb28e
        return v1 & -0xff01 | (int64_t)&g4;
    }
    uint32_t v3 = *(int32_t *)-0x52fe176fe5a9d555; // 0x2eb221
    char * v4 = (char *)((int64_t)v3 + 0x3ae2400); // 0x2eb22c
    *v4 = *v4 + (char)v3;
    char * v5 = (char *)(v1 - 0x57fe1800); // 0x2eb232
    *v5 = *v5 + (char)(v3 / 256);
    char * v6 = (char *)((256 * a1 + a4 & 0xff00 | a4 & -0xff01) - 0x3d2f3200); // 0x2eb238
    *v6 = *v6 + (char)v1;
    uint32_t v7 = v3 - 0x108961c | (int32_t)v1; // 0x2eb243
    int64_t v8 = v7; // 0x2eb243
    int32_t * v9 = (int32_t *)(a2 - 9); // 0x2eb245
    *v9 = *v9 + (int32_t)a2;
    __asm_out((int16_t)((int32_t)v1 >> 31), (char)v7);
    int32_t * v10 = (int32_t *)v8; // 0x2eb249
    *v10 = *v10 + v7;
    *(int32_t *)a1 = v7;
    char * v11 = (char *)(a2 - 0x2fe1754 + 4 * a2); // 0x2eb251
    *v11 = *v11 | (char)(v1 / 256 + v8);
    __asm_iretd((v2 ? -4 : 4) + a1);
    int64_t v12 = unknown_ffffffff942dd16f(); // 0x2eb266
    char * v13 = (char *)v12; // 0x2eb26b
    unsigned char v14 = *v13; // 0x2eb26b
    unsigned char v15 = (char)v12; // 0x2eb26b
    *v13 = v14 - v15;
    int64_t result = v12; // 0x2eb26f
    if (v14 < v15) {
        result = function_2eb215();
    }
    // 0x2eb271
    return result;
}

// Address range: 0x2eb2ec - 0x2eb2ed
int64_t function_2eb2ec(int64_t a1) {
    // 0x2eb2ec
    int64_t result; // 0x2eb2ec
    return result;
}

// Address range: 0x2eb3bc - 0x2eb3bd
int64_t function_2eb3bc(void) {
    // 0x2eb3bc
    int64_t result; // 0x2eb3bc
    return result;
}

// Address range: 0x2eb3c2 - 0x2eb3c5
int64_t function_2eb3c2(void) {
    // 0x2eb3c2
    int64_t result; // 0x2eb3c2
    return result;
}

// Address range: 0x2eb421 - 0x2eb426
int64_t function_2eb421(void) {
    // 0x2eb421
    return function_ffffffffa2c756d2();
}

// Address range: 0x2eb42b - 0x2eb42e
int64_t function_2eb42b(int64_t a1) {
    // 0x2eb42b
    int64_t result; // 0x2eb42b
    return result;
}

// Address range: 0x2eb45b - 0x2eb460
int64_t function_2eb45b(void) {
    // 0x2eb45b
    return function_3af9e952();
}

// Address range: 0x2eb464 - 0x2eb469
int64_t function_2eb464(void) {
    // 0x2eb464
    return function_8ca4fec();
}

// Address range: 0x2eb501 - 0x2eb506
int64_t function_2eb501(void) {
    // 0x2eb501
    return function_5a299310();
}

// Address range: 0x2eb520 - 0x2eb521
int64_t function_2eb520(int64_t a1) {
    // 0x2eb520
    int64_t result; // 0x2eb520
    return result;
}

// Address range: 0x2eb52d - 0x2eb52f
int64_t function_2eb52d(void) {
    // 0x2eb52d
    int64_t result; // 0x2eb52d
    return result;
}

// Address range: 0x2eb570 - 0x2eb5a8
int64_t function_2eb570(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 8); // 0x2eb572
    int64_t v2; // 0x2eb570
    *v1 = *v1 + (int32_t)v2;
    char * v3 = (char *)(a3 - 123); // 0x2eb57c
    *v3 = *v3 + (char)a3;
    int64_t v4 = (a4 & 0xffff00ff | (int64_t)(int32_t)&g5) + 0xb5ec01e8; // 0x2eb581
    uint32_t v5 = (int32_t)v2 % 32; // 0x2eb586
    if (v5 != 0) {
        int32_t * v6 = (int32_t *)(v4 & 0xffffffff); // 0x2eb586
        uint32_t v7 = *v6; // 0x2eb586
        *v6 = v7 >> 32 - v5 | v7 << v5;
    }
    int64_t v8 = a4 + 0xd86b6381 & 0xffffffff; // 0x2eb575
    unknown_ffffffffe1c3d597(v8);
    int64_t v9 = unknown_1560efa4(); // 0x2eb59e
    int16_t v10 = v4; // 0x2eb5a3
    char v11 = __asm_in_135(v10); // 0x2eb5a3
    *(char *)v8 = __asm_insb(v10);
    return v9 & -256 | (int64_t)v11;
}

// Address range: 0x2eb5ad - 0x2eb5b3
int64_t function_2eb5ad(void) {
    // 0x2eb5ad
    return function_7c9db79b();
}

// Address range: 0x2eb5d7 - 0x2eb5da
int64_t function_2eb5d7(void) {
    // 0x2eb5d7
    int64_t result; // 0x2eb5d7
    return result;
}
