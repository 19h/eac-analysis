/*
 * Targeted RetDec C for native executable gap queue batch 312.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x192685-0x192885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x192a85-0x192c85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f761e-0x2f781e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f781e-0x2f7a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f7a1e-0x2f7c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f7c1e-0x2f7e1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x45ca34-0x45cc34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45d034-0x45d234 rank=- name=- kind=- bytes=- uncovered=-
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
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint32_t __readfsdword(int64_t offset);
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
int64_t __asm_rsm(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
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

int64_t function_18c5aa01();
int64_t function_192685(void);
int64_t function_1926ed(void);
int64_t function_1926f9(void);
int64_t function_192753(void);
int64_t function_1927a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_192a85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_192aae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_192ad4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_192b0b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_192b2a(int64_t a1);
int64_t function_192b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_192b33(void);
int64_t function_192b39(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_192b4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_192b55(void);
int64_t function_192b73(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_192bf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_192c12(int64_t a1);
int64_t function_192c3e(int64_t a1);
int64_t function_192c57(int64_t a1);
int64_t function_1f3017c4();
int64_t function_2f761e(int64_t a1, int64_t a2);
int64_t function_2f7631(int64_t a1);
int64_t function_2f7678(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f768e(void);
int64_t function_2f7696(void);
int64_t function_2f769b(void);
int64_t function_2f769d(int64_t a1);
int64_t function_2f769e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f76ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f7814(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f7837(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f786e(int64_t a1);
int64_t function_2f7882(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f7887(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_2f78dc(int64_t a1, int64_t a2);
int64_t function_2f78f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f7919(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f791b(int64_t a1, int64_t a2, int64_t a3, int32_t a4);
int64_t function_2f794f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f79a7(int64_t a1);
int64_t function_2f79cc(void);
int64_t function_2f79e2(void);
int64_t function_2f79e6(void);
int64_t function_2f7a21(int64_t a1, int64_t a2);
int64_t function_2f7a5b(void);
int64_t function_2f7a8e(void);
int64_t function_2f7a96(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f7ac5(void);
int64_t function_2f7b42(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f7b90(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f7bb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f7bda(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2f7c0a(void);
int64_t function_2f7c43(void);
int64_t function_2f7c47(void);
int64_t function_2f7c5f(int64_t a1, int64_t a2);
int64_t function_2f7c6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2f7c9b(void);
int64_t function_2f7cb9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2f7cec(int64_t a1);
int64_t function_2f7d31(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_2f7da7(int64_t a1, int64_t a2);
int64_t function_45ca34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45ca97(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_45cacd(void);
int64_t function_45cae9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45caeb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45cb19(void);
int64_t function_45cb60(int64_t a1);
int64_t function_45cb9e(int64_t a1, int64_t a2);
int64_t function_45cbd4(void);
int64_t function_45d034(void);
int64_t function_45d0b6(void);
int64_t function_45d0b9(int64_t a1);
int64_t function_45d0dd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45d105(void);
int64_t function_45d120(void);
int64_t function_45d15d(void);
int64_t function_45d15f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_7b2b85a2();
int64_t function_e7cdfd3();
int64_t function_ffffffffb44cff94();
int64_t function_ffffffffb4be1d3f();
int64_t function_ffffffffdf6d5e03();
int64_t unknown_106704bf();
int64_t unknown_10eae524();
int64_t unknown_1562b5b();
int64_t unknown_21789ad();
int64_t unknown_24b895e0();
int64_t unknown_2fdd46a7();
int64_t unknown_2fde64b7();
int64_t unknown_381e67c5();
int64_t unknown_3d1b131c();
int64_t unknown_492359c4();
int64_t unknown_52323be5();
int64_t unknown_7c9a2fc9();
int64_t unknown_ffffffff8820a56a();
int64_t unknown_ffffffff8821d7d6();
int64_t unknown_ffffffff9ee7c923();
int64_t unknown_ffffffffb46d4030();
int64_t unknown_ffffffffb46e74a4();
int64_t unknown_ffffffffd8dd18a2();

// Address range: 0x192685 - 0x192686
int64_t function_192685(void) {
    // 0x192685
    int64_t result; // 0x192685
    return result;
}

// Address range: 0x1926ed - 0x1926ee
int64_t function_1926ed(void) {
    // 0x1926ed
    int64_t result; // 0x1926ed
    return result;
}

// Address range: 0x1926f9 - 0x1926fb
int64_t function_1926f9(void) {
    // 0x1926f9
    int64_t result; // 0x1926f9
    return result;
}

// Address range: 0x192753 - 0x192756
int64_t function_192753(void) {
    // 0x192753
    int64_t result; // 0x192753
    return result;
}

// Address range: 0x1927a1 - 0x1927c8
int64_t function_1927a1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a2 - 0x407d6f50); // 0x1927a3
    bool v2; // 0x1927a1
    *v1 = *v1 - (v2 ? -0x141e2633 : -0x141e2634);
    return unknown_381e67c5();
}

// Address range: 0x192a85 - 0x192aa9
int64_t function_192a85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x192a85
    int64_t v1; // 0x192a85
    uint64_t v2 = v1;
    *(int64_t *)v2 = v2 / 0x1000000 | 0x10000000000 * v2;
    *(int32_t *)0x6d00cbe6 = *(int32_t *)0x6d00cbe6 + 0x6d00cbe6;
    int32_t * v3 = (int32_t *)(a1 - 12); // 0x192a90
    *v3 = *v3 - 56;
    int64_t v4; // 0x192a85
    char * v5 = (char *)(v4 + 0x2048d40a); // 0x192a94
    *v5 = *v5 + (char)(v4 / 256);
    unsigned char v6 = *(char *)&v4; // 0x192a9a
    unknown_ffffffffb46e74a4();
    int64_t v7 = __asm_int3((int64_t)&g1, (int64_t)&g1, (int64_t)&g1, (int64_t)&g1); // 0x192aa3
    return v7 + 0x4bf40013 + (int64_t)(v6 < (char)v4) & 0xffffffff;
}

// Address range: 0x192aae - 0x192ab1
int64_t function_192aae(int64_t a1, int64_t a2, int64_t a3) {
    // 0x192aae
    int64_t result; // 0x192aae
    *(int32_t *)a2 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x192ad4 - 0x192ae1
int64_t function_192ad4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __asm_wait(); // 0x192ad4
    int64_t v2; // 0x192ad4
    char * v3 = (char *)(v2 - 42); // 0x192ad7
    *v3 = *v3 + (char)v2;
    unknown_24b895e0();
    return __asm_int3(a1, a2, a3, v1 & 0xffffffff);
}

// Address range: 0x192b0b - 0x192b27
int64_t function_192b0b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x192b0b
    unknown_3d1b131c();
    int64_t v1; // 0x192b0b
    int32_t * v2 = (int32_t *)(v1 + 42); // 0x192b1b
    *v2 = *v2 + (int32_t)a3;
    unknown_10eae524();
    return __asm_wait();
}

// Address range: 0x192b2a - 0x192b2b
int64_t function_192b2a(int64_t a1) {
    // 0x192b2a
    int64_t result; // 0x192b2a
    return result;
}

// Address range: 0x192b30 - 0x192b33
int64_t function_192b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x192b30
    int64_t v1; // 0x192b30
    *(char *)a3 = (char)v1;
    return v1 & -256 | (uint64_t)v1 % 256;
}

// Address range: 0x192b33 - 0x192b36
int64_t function_192b33(void) {
    // 0x192b33
    int64_t v1; // 0x192b33
    return function_192b73(v1, v1, v1, v1);
}

// Address range: 0x192b39 - 0x192b49
int64_t function_192b39(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x192b39
    int64_t v1; // 0x192b39
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return __asm_int3(a1, a2, a3, a4);
}

// Address range: 0x192b4d - 0x192b55
int64_t function_192b4d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x192b4d
    int64_t v1; // 0x192b4d
    char * v2 = (char *)(v1 - 46); // 0x192b4d
    *v2 = *v2 | (char)a4;
    return function_e7cdfd3();
}

// Address range: 0x192b55 - 0x192b5b
int64_t function_192b55(void) {
    // 0x192b55
    return unknown_1562b5b();
}

// Address range: 0x192b73 - 0x192b83
int64_t function_192b73(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 + 0x6810cd80); // 0x192b73
    int64_t v2; // 0x192b73
    *v1 = *v1 + (int32_t)v2;
    int64_t v3; // 0x192b73
    *(char *)a3 = *(char *)&v3 + (char)a4;
    int64_t result = v2 & 0x730f0833; // 0x192b7b
    __asm_out((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x192bf4 - 0x192c07
int64_t function_192bf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x192bf4
    *(int64_t *)(a2 - 0x77d0e86f) = a5;
    int64_t v1; // 0x192bf4
    __asm_out_133(-125, (int32_t)v1);
    int64_t v2; // 0x192bf4
    *(int32_t *)a1 = *(int32_t *)&v2;
    bool v3; // 0x192bf4
    return function_192c3e((v3 ? -4 : 4) + a1);
}

// Address range: 0x192c12 - 0x192c15
int64_t function_192c12(int64_t a1) {
    // 0x192c12
    int64_t result; // 0x192c12
    return result;
}

// Address range: 0x192c3e - 0x192c4a
int64_t function_192c3e(int64_t a1) {
    // 0x192c3e
    *(int32_t *)0x39f3ac4b = *(int32_t *)0x39f3ac4b + (int32_t)a1;
    int64_t v1; // 0x192c3e
    bool v2; // 0x192c3e
    return 2 * v1 & 0xfffffffe | (int64_t)v2;
}

// Address range: 0x192c57 - 0x192c58
int64_t function_192c57(int64_t a1) {
    // 0x192c57
    int64_t result; // 0x192c57
    return result;
}

// Address range: 0x2f761e - 0x2f7630
int64_t function_2f761e(int64_t a1, int64_t a2) {
    // 0x2f761e
    int64_t v1; // 0x2f761e
    int32_t * v2 = (int32_t *)(v1 - 61); // 0x2f761e
    *v2 = *v2 + (int32_t)v1;
    *(int32_t *)0x675cd7f01796abb5 = (int32_t)v1;
    int64_t result = unknown_ffffffffb46d4030(a1, a2); // 0x2f762a
    int64_t v3; // 0x2f761e
    *(char *)a1 = *(char *)&v3;
    return result;
}

// Address range: 0x2f7631 - 0x2f7632
int64_t function_2f7631(int64_t a1) {
    // 0x2f7631
    int64_t result; // 0x2f7631
    return result;
}

// Address range: 0x2f7678 - 0x2f7682
int64_t function_2f7678(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f7678
    int64_t result; // 0x2f7678
    int32_t * v1 = (int32_t *)(result + 0x80002f + 4 * result); // 0x2f7678
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x2f768e - 0x2f768f
int64_t function_2f768e(void) {
    // 0x2f768e
    int64_t result; // 0x2f768e
    return result;
}

// Address range: 0x2f7696 - 0x2f769b
int64_t function_2f7696(void) {
    // 0x2f7696
    return function_ffffffffb44cff94();
}

// Address range: 0x2f769b - 0x2f769d
int64_t function_2f769b(void) {
    // 0x2f769b
    int64_t v1; // 0x2f769b
    return function_2f769e(v1, v1, v1);
}

// Address range: 0x2f769d - 0x2f769e
int64_t function_2f769d(int64_t a1) {
    // 0x2f769d
    int64_t result; // 0x2f769d
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x2f769e - 0x2f76ac
int64_t function_2f769e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f769e
    int64_t v1; // 0x2f769e
    uint64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a1 + 0x68766598); // 0x2f76a6
    *v3 = *v3 + (int32_t)a3;
    return (v2 / 256 + v2) % 256 | v2 & -256;
}

// Address range: 0x2f76ad - 0x2f7762
int64_t function_2f76ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 8); // 0x2f76b3
    int32_t v2 = *v1; // 0x2f76b3
    int64_t v3; // 0x2f76ad
    int32_t v4 = v3; // 0x2f76b3
    int32_t v5 = v2 + v4; // 0x2f76b3
    *v1 = v5;
    if (v5 < 0 != ((v5 ^ v2) & (v5 ^ v4)) < 0) {
        char * v6 = (char *)(a4 - 0x617a14ca); // 0x2f76bd
        *v6 = *v6 + (char)v3;
        unknown_7c9a2fc9();
        int64_t v7 = a2 + 1; // 0x2f76cb
        int64_t v8 = unknown_ffffffff8821d7d6(a1 + 1, v7, 0xe8d598f3); // 0x2f76d0
        __asm_out(-0x670d, (char)v8);
        return v8 & -256 | (int64_t)*(char *)v7;
    }
    // 0x2f771d
    unknown_ffffffff9ee7c923();
    uint32_t v9 = *(int32_t *)(4 * v3 + a1) | (int32_t)a4; // 0x2f7722
    int64_t v10 = v9; // 0x2f7722
    char * v11 = (char *)v10; // 0x2f7727
    *v11 = *v11 | -37;
    char * v12 = (char *)(a2 - 0x17ff6ebc); // 0x2f7734
    *v12 = *v12 + (char)v3;
    int32_t * v13 = (int32_t *)v10; // 0x2f773a
    *v13 = *v13 + v9;
    int32_t * v14 = (int32_t *)(v10 + 0x64fcbe0a); // 0x2f773c
    *v14 = *v14 | 5;
    __asm_out_134(-60, (char)v9);
    int64_t v15 = *(int64_t *)-0x17fe17923c0cf273; // 0x2f7752
    return (v15 + 42) % 256 | v15 & -256;
}

// Address range: 0x2f7814 - 0x2f781e
int64_t function_2f7814(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 0x4a68150e); // 0x2f7814
    *v1 = *v1 - 1;
    int64_t result; // 0x2f7814
    return result;
}

// Address range: 0x2f7837 - 0x2f7838
int64_t function_2f7837(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f7837
    int64_t result; // 0x2f7837
    return result;
}

// Address range: 0x2f786e - 0x2f7882
int64_t function_2f786e(int64_t a1) {
    // 0x2f786e
    int64_t v1; // 0x2f786e
    int32_t * v2 = (int32_t *)(v1 + 0x2e22a077); // 0x2f7874
    *v2 = *v2 + (int32_t)a1;
    return v1 & 0xffffffff ^ 0x70991fca;
}

// Address range: 0x2f7882 - 0x2f7887
int64_t function_2f7882(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f7882
    int64_t result; // 0x2f7882
    bool v1; // 0x2f7882
    if (a4 != 1 && !v1) {
        result = function_2f7837(a1, a2, a3, a4);
    }
    // 0x2f7884
    return result;
}

// Address range: 0x2f7887 - 0x2f78cd
int64_t function_2f7887(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2f7887
    int64_t v1; // 0x2f7887
    int64_t v2 = v1 + 0xe8f40a76; // 0x2f7887
    int32_t * v3 = (int32_t *)(v2 & 0xffffffff); // 0x2f788c
    *v3 = *v3 + (int32_t)v2;
    int32_t * v4 = (int32_t *)(a4 - 0x66b56fee + (v1 & -256 | 232)); // 0x2f7897
    *v4 = *v4 + (int32_t)v1;
    char * v5 = (char *)(4 * v1 + a4); // 0x2f789e
    *v5 = *v5 + (char)a3;
    uint64_t v6 = unknown_2fdd46a7(); // 0x2f78a1
    char * v7 = (char *)(v6 + 0x2508e00); // 0x2f78a6
    *v7 = *v7 + (char)v6;
    char * v8 = (char *)(v1 - 0x53fe1800); // 0x2f78ac
    *v8 = *v8 + (char)(v6 / 256);
    char * v9 = (char *)(a3 - 0x17f37451); // 0x2f78b2
    *v9 = *v9 + (char)(a3 / 256);
    int64_t result = unknown_492359c4(); // 0x2f78be
    __asm_outsb((int16_t)a3, *(char *)(v6 + 0x5c5d7704 & 0xffffffff));
    return result;
}

// Address range: 0x2f78dc - 0x2f78f0
int64_t function_2f78dc(int64_t a1, int64_t a2) {
    // 0x2f78dc
    bool v1; // 0x2f78dc
    if (v1) {
        int64_t result = (int64_t)*(int32_t *)-0x175df926646905c6; // 0x2f78e5
        int32_t * v2 = (int32_t *)result; // 0x2f78ee
        *v2 = *v2 + (int32_t)a2;
        return result;
    }
    // 0x2f78e4
    int64_t result2; // 0x2f78dc
    return result2;
}

// Address range: 0x2f78f1 - 0x2f7918
int64_t function_2f78f1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f78f1
    int64_t v1; // 0x2f78f1
    *(char *)a1 = (char)v1;
    bool v2; // 0x2f78f1
    int64_t v3 = v2 ? -1 : 1; // 0x2f78f1
    uint32_t v4 = *(int32_t *)(v1 - 0x20fe171d) | (int32_t)(v1 % 256 | a4); // 0x2f78f9
    *(int64_t *)0x3f359b94 = 0x1e83a94;
    char * v5 = (char *)((int64_t)((int32_t)a3 >> 1) - 53); // 0x2f790d
    char v6 = v4 / 256; // 0x2f790d
    *v5 = *v5 & v6;
    char * v7 = (char *)(v1 + 5); // 0x2f7910
    *v7 = *v7 + v6;
    return function_2f791b(v3 + a1, v3 + a2, *(int64_t *)0x3f359b94, v4);
}

// Address range: 0x2f7919 - 0x2f791b
int64_t function_2f7919(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f7919
    int64_t result; // 0x2f7919
    *(int32_t *)a4 = (int32_t)result + (int32_t)a3;
    return result;
}

// Address range: 0x2f791b - 0x2f792a
int64_t function_2f791b(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    // 0x2f791b
    int64_t result; // 0x2f791b
    return result;
}

// Address range: 0x2f794f - 0x2f795c
int64_t function_2f794f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f794f
    int64_t v1; // 0x2f794f
    uint64_t result = v1;
    char * v2 = (char *)(a4 + 90); // 0x2f794f
    *v2 = *v2 | (char)(result / 256);
    char * v3 = (char *)(a3 + 0x1e8e0b8); // 0x2f7952
    *v3 = -*v3;
    __asm_out_135((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x2f79a7 - 0x2f79b1
int64_t function_2f79a7(int64_t a1) {
    int64_t v1 = unknown_21789ad(a1); // 0x2f79a7
    bool v2; // 0x2f79a7
    return (v1 + 99 + (int64_t)(bool)v2) % 256 | v1 & -256;
}

// Address range: 0x2f79cc - 0x2f79da
int64_t function_2f79cc(void) {
    // 0x2f79cc
    int64_t v1; // 0x2f79cc
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return v2 & -256 | (int64_t)*(char *)0x3cda0068454c3a0a;
}

// Address range: 0x2f79e2 - 0x2f79e3
int64_t function_2f79e2(void) {
    // 0x2f79e2
    int64_t result; // 0x2f79e2
    return result;
}

// Address range: 0x2f79e6 - 0x2f79eb
int64_t function_2f79e6(void) {
    // 0x2f79e6
    return function_ffffffffdf6d5e03();
}

// Address range: 0x2f7a21 - 0x2f7a2b
int64_t function_2f7a21(int64_t a1, int64_t a2) {
    // 0x2f7a21
    int64_t result; // 0x2f7a21
    __readfsbyte(a2 + 0x60068de + result);
    return result;
}

// Address range: 0x2f7a5b - 0x2f7a5d
int64_t function_2f7a5b(void) {
    // 0x2f7a5b
    return function_2f79e2();
}

// Address range: 0x2f7a8e - 0x2f7a95
int64_t function_2f7a8e(void) {
    // 0x2f7a8e
    int64_t v1; // 0x2f7a8e
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    return function_1f3017c4();
}

// Address range: 0x2f7a96 - 0x2f7aa9
int64_t function_2f7a96(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2f7a96
    unknown_ffffffffd8dd18a2();
    return a2 & 0xffffffff;
}

// Address range: 0x2f7ac5 - 0x2f7aca
int64_t function_2f7ac5(void) {
    // 0x2f7ac5
    return function_7b2b85a2();
}

// Address range: 0x2f7b42 - 0x2f7b4b
int64_t function_2f7b42(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x4e3a0556); // 0x2f7b42
    int64_t result; // 0x2f7b42
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x2f7b90 - 0x2f7b93
int64_t function_2f7b90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f7b90
    int64_t result; // 0x2f7b90
    return result;
}

// Address range: 0x2f7bb1 - 0x2f7bcd
int64_t function_2f7bb1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = unknown_2fde64b7(); // 0x2f7bb1
    char * v2 = (char *)(v1 + 0x2508e00); // 0x2f7bb6
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0x2f7bb1
    char * v4 = (char *)(v3 + 0x2901e800); // 0x2f7bbc
    *v4 = *v4 + (char)(v1 / 256);
    int64_t v5; // 0x2f7bb1
    *(int32_t *)a4 = *(int32_t *)&v5 + (int32_t)a2;
    return v1 & -0xff01 | 256 * a3 & 0xff00;
}

// Address range: 0x2f7bda - 0x2f7bea
int64_t function_2f7bda(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = unknown_52323be5(); // 0x2f7bdf
    __asm_outsb((int16_t)a3, *(char *)0x9d86b485);
    return result;
}

// Address range: 0x2f7c0a - 0x2f7c0b
int64_t function_2f7c0a(void) {
    // 0x2f7c0a
    int64_t result; // 0x2f7c0a
    return result;
}

// Address range: 0x2f7c43 - 0x2f7c44
int64_t function_2f7c43(void) {
    // 0x2f7c43
    int64_t result; // 0x2f7c43
    return result;
}

// Address range: 0x2f7c47 - 0x2f7c48
int64_t function_2f7c47(void) {
    // 0x2f7c47
    int64_t result; // 0x2f7c47
    return result;
}

// Address range: 0x2f7c5f - 0x2f7c6c
int64_t function_2f7c5f(int64_t a1, int64_t a2) {
    // 0x2f7c5f
    unknown_ffffffff8820a56a(a1, a2);
    return function_2f7c47();
}

// Address range: 0x2f7c6c - 0x2f7c8d
int64_t function_2f7c6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2f7c6c
    int64_t v1; // 0x2f7c6c
    int64_t v2 = v1;
    int64_t v3 = a4;
    *(char *)a1 = (char)v1;
    int64_t v4; // 0x2f7c6c
    int64_t v5; // 0x2f7c6c
    bool v6; // 0x2f7c6c
    if (!v6) {
        int64_t v7 = function_2f7c0a(); // 0x2f7c6d
        v5 = v7;
        v4 = v7;
    } else {
        // 0x2f7c6c
        v4 = v5;
    }
    // 0x2f7c70
    *(char *)v3 = *(char *)&v3 | (char)v4;
    int32_t * v8 = (int32_t *)(v2 - 91 + 8 * v2); // 0x2f7c74
    int32_t v9 = *v8 + (int32_t)v2; // 0x2f7c74
    *v8 = v9;
    int64_t v10; // 0x2f7c6c
    int32_t v11; // 0x2f7c6c
    if (v9 != 0) {
        int64_t v12 = function_2f7c43(); // 0x2f7c78
        v5 = v12;
        v10 = v12;
        v11 = v12;
    } else {
        // 0x2f7c70
        v10 = v5;
        v11 = *(int32_t *)&v5;
    }
    // 0x2f7c7a
    *(int32_t *)v10 = v11 + (int32_t)a2;
    uint64_t v13 = v5; // 0x2f7c7c
    char v14 = *(char *)(a2 + 0x6b81fa20); // 0x2f7c7c
    char v15 = *(char *)(a3 + 0x63da01e8); // 0x2f7c82
    return 256 * (int64_t)((v14 | (char)(v13 / 256)) - v15) | v13 & -0xff01;
}

// Address range: 0x2f7c9b - 0x2f7c9d
int64_t function_2f7c9b(void) {
    // 0x2f7c9b
    int64_t result; // 0x2f7c9b
    return result;
}

// Address range: 0x2f7cb9 - 0x2f7ce9
int64_t function_2f7cb9(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = unknown_106704bf(); // 0x2f7cb9
    int32_t * v2 = (int32_t *)(a4 - 128); // 0x2f7cbe
    bool v3; // 0x2f7cb9
    *v2 = (int32_t)v3 - (int32_t)v1 + *v2;
    char * v4 = (char *)(a2 + 0x528bf0ab); // 0x2f7cc1
    char v5 = v1; // 0x2f7cc1
    *v4 = *v4 + v5;
    int64_t v6; // 0x2f7cb9
    uint32_t v7 = *(int32_t *)(v1 + 1) + (int32_t)v6; // 0x2f7cc7
    int32_t * v8 = (int32_t *)(a2 - 0xde23cb3); // 0x2f7ccb
    *v8 = *v8 ^ (int32_t)a2;
    int64_t v9; // 0x2f7cb9
    *(int32_t *)a1 = *(int32_t *)&v9;
    char * v10 = (char *)(int64_t)v7; // 0x2f7cd7
    *v10 = *v10 + (char)(a4 / 256);
    char * v11 = (char *)v1; // 0x2f7cd9
    *v11 = *v11 + v5;
    *(char *)0x3d7f16e2 = *(char *)0x3d7f16e2 + (char)(v7 / 256);
    return (v1 + 235) % 256 | v1 & -256;
}

// Address range: 0x2f7cec - 0x2f7cf0
int64_t function_2f7cec(int64_t a1) {
    // 0x2f7cec
    return __asm_hlt(a1);
}

// Address range: 0x2f7d31 - 0x2f7d42
int64_t function_2f7d31(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x2f7d31
    int64_t v1; // 0x2f7d31
    char * v2 = (char *)(v1 + 0x42ba8f5e); // 0x2f7d31
    *v2 = *v2 - (char)(a3 / 256);
    return v1 & -7 ^ 254;
}

// Address range: 0x2f7da7 - 0x2f7dae
int64_t function_2f7da7(int64_t a1, int64_t a2) {
    // 0x2f7da7
    return function_18c5aa01();
}

// Address range: 0x45ca34 - 0x45ca37
int64_t function_45ca34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45ca34
    int64_t result; // 0x45ca34
    return result;
}

// Address range: 0x45ca97 - 0x45cac1
int64_t function_45ca97(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x45ca97
    int64_t v1; // 0x45ca97
    uint64_t v2 = v1;
    int64_t v3 = v1 + 0x54a3083c; // 0x45ca97
    __writegsbyte(v3, __readgsbyte(v3) ^ (char)(v2 / 256));
    int64_t result = (v2 + 20) % 256 | v2 & -256; // 0x45caa7
    *(int64_t *)((v1 - v2 & 0xffffffff) - 8) = result;
    int32_t * v4 = (int32_t *)(2 * v1); // 0x45caae
    uint32_t v5 = *v4; // 0x45caae
    uint32_t v6 = ((char)v2 < 236 ? 0x61459d42 : 0x61459d41) + v5; // 0x45caae
    bool v7 = (char)v2 < 236 ? v6 <= v5 : v5 > 0x9eba62be; // 0x45caae
    *v4 = v6;
    char * v8 = (char *)((a4 & -256 | (int64_t)*(char *)(v1 + 75)) + 25); // 0x45cab5
    *v8 = *v8 + (char)(a3 / 256) + (char)v7;
    return result;
}

// Address range: 0x45cacd - 0x45cad0
int64_t function_45cacd(void) {
    // 0x45cacd
    int64_t v1; // 0x45cacd
    return function_45caeb(v1, v1, v1);
}

// Address range: 0x45cae9 - 0x45caeb
int64_t function_45cae9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45cae9
    int64_t result; // 0x45cae9
    return result;
}

// Address range: 0x45caeb - 0x45cafa
int64_t function_45caeb(int64_t a1, int64_t a2, int64_t a3) {
    int16_t v1 = a3; // 0x45caf1
    int64_t v2; // 0x45caeb
    __asm_outsb(v1, (char)v2);
    *(int32_t *)a1 = __asm_insd(v1);
    return v2 & 0x3a77a1de;
}

// Address range: 0x45cb19 - 0x45cb21
int64_t function_45cb19(void) {
    // 0x45cb19
    int64_t result; // 0x45cb19
    return result;
}

// Address range: 0x45cb60 - 0x45cb63
int64_t function_45cb60(int64_t a1) {
    // 0x45cb60
    int64_t result; // 0x45cb60
    return result;
}

// Address range: 0x45cb9e - 0x45cbb0
int64_t function_45cb9e(int64_t a1, int64_t a2) {
    // 0x45cb9e
    int64_t v1; // 0x45cb9e
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 - 77); // 0x45cb9f
    *v3 = *v3 - (char)(v2 / 256);
    return v1 | 234;
}

// Address range: 0x45cbd4 - 0x45cbdb
int64_t function_45cbd4(void) {
    // 0x45cbd4
    return function_ffffffffb4be1d3f();
}

// Address range: 0x45d034 - 0x45d03f
int64_t function_45d034(void) {
    // 0x45d034
    int64_t v1; // 0x45d034
    int64_t v2 = v1;
    __asm_int(-34);
    return ((v2 | 118) + 100 & 123 | v2 & -256) ^ 151;
}

// Address range: 0x45d0b6 - 0x45d0b9
int64_t function_45d0b6(void) {
    // 0x45d0b6
    int64_t result; // 0x45d0b6
    return result;
}

// Address range: 0x45d0b9 - 0x45d0bc
int64_t function_45d0b9(int64_t a1) {
    // 0x45d0b9
    int64_t result; // 0x45d0b9
    return result;
}

// Address range: 0x45d0dd - 0x45d0e3
int64_t function_45d0dd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45d0dd
    int64_t result; // 0x45d0dd
    return result;
}

// Address range: 0x45d105 - 0x45d108
int64_t function_45d105(void) {
    // 0x45d105
    int64_t v1; // 0x45d105
    return function_45d15f(v1, v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x45d120 - 0x45d121
int64_t function_45d120(void) {
    // 0x45d120
    int64_t result; // 0x45d120
    return result;
}

// Address range: 0x45d15d - 0x45d15f
int64_t function_45d15d(void) {
    // 0x45d15d
    return __asm_in_136(19);
}

// Address range: 0x45d15f - 0x45d22b
int64_t function_45d15f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45d15f
    int64_t v1; // 0x45d15f
    uint32_t v2 = (int32_t)v1; // 0x45d15f
    int32_t v3 = v2 + 0xd127605; // 0x45d15f
    int64_t v4 = v3; // 0x45d15f
    int64_t v5 = a4 - 1; // 0x45d164
    int64_t result2 = v4; // 0x45d164
    int64_t v6 = v5; // 0x45d164
    bool v7 = v2 > 0xf2ed89fa; // 0x45d164
    int64_t v8; // 0x45d15f
    int64_t v9; // 0x45d15f
    int64_t v10; // 0x45d15f
    int64_t v11; // 0x45d15f
    if (v5 == 0 || v3 == 0) {
        int64_t result = v4; // 0x45d167
        if (v3 < 0 == (v3 & (v2 ^ -0x80000000)) < 0) {
            result = function_45d105();
        }
        // 0x45d16a
        __asm_out_133(69, (int32_t)result);
        if (v3 != 0) {
            // 0x45d175
            return result;
        }
        char * v12 = (char *)(v1 - 0x5e16efe9); // 0x45d1bc
        char v13 = *v12 ^ (char)a1; // 0x45d1bc
        *v12 = v13;
        int64_t v14 = a3; // bp-8, 0x45d1c3
        v10 = a3;
        v9 = v5;
        if (v13 >= 0) {
            goto lab_0x45d1aa;
        } else {
            // 0x45d1c6
            result2 = __asm_int3((int64_t)&g1, (int64_t)&g1, (int64_t)&g1, (int64_t)&g1);
            int32_t v15 = (int64_t)&v14; // 0x45d1cb
            int32_t v16 = v15 - 98; // 0x45d1cb
            v6 = (int64_t)(*(int32_t *)(4 * v5 - 44 + v1) | (int32_t)v5);
            v8 = v1 & -256 | (int64_t)*(char *)(a1 - 0x740461de);
            v11 = v16;
            v7 = (v15 ^ -2) < 0xffffff9e;
            if (v16 < 0 == ((v16 ^ v15) & v15 + 0x7fffff9e) < 0) {
                // 0x45d175
                return result2;
            }
            goto lab_0x45d1d6;
        }
    } else {
        goto lab_0x45d1d6;
    }
  lab_0x45d1d6:;
    int64_t v17 = v11;
    int32_t v18 = v8; // 0x45d1d1
    int32_t v19 = v17; // 0x45d1d1
    int32_t v20 = v7; // 0x45d1d1
    int32_t v21 = v19 + v18 + v20; // 0x45d1d1
    int32_t v22 = v21 + v20; // 0x45d1d1
    *(int64_t *)(v17 - 8) = v17;
    v10 = a3 & -256 | 209;
    v9 = v6;
    if (v21 < 0 != ((v22 ^ v18) & (v22 ^ v19)) < 0) {
        // 0x45d175
        return result2;
    }
    goto lab_0x45d1aa;
  lab_0x45d1aa:;
    uint64_t v23 = v9;
    char * v24 = (char *)(v23 - 127 + 2 * v23); // 0x45d1aa
    *v24 = *v24 | (char)(v23 / 256);
    return v10 & 0xffffffff;
}
