/*
 * Targeted RetDec C for native executable gap queue batch 340.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2f981e-0x2f9a1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f9a1e-0x2f9c1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f9c1e-0x2f9e1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2f9e1e-0x2fa01e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fa01e-0x2fa21e rank=- name=- kind=- bytes=- uncovered=-
 *   0x45ee34-0x45f034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45f034-0x45f234 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45f234-0x45f434 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_sldt(void);
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

int64_t function_15042bfc();
int64_t function_2f981e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2f994c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2f9a6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f9bc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f9d12(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f9e85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2f9ff0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fa1b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fa1bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2fa1c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_35c0d70();
int64_t function_45ee34(void);
int64_t function_45ee6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45ee77(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_45ee7f(void);
int64_t function_45eedc(void);
int64_t function_45eee5(void);
int64_t function_45eef9(void);
int64_t function_45ef19(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_45ef5a(void);
int64_t function_45ef5c(int64_t a1);
int64_t function_45efc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45f090(int64_t a1);
int64_t function_45f0e3(void);
int64_t function_45f126(void);
int64_t function_45f143(void);
int64_t function_45f173(int64_t a1, int64_t a2, int64_t a3);
int64_t function_45f1d1(void);
int64_t function_45f1da(int64_t a1, int64_t a2);
int64_t function_45f1fe(void);
int64_t function_45f2b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45f2fd(void);
int64_t function_45f312(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45f32d(void);
int64_t function_45f333(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_45f37c(int64_t a1);
int64_t function_45f3a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_caf2a();
int64_t function_ffffffffbf04ccac();
int64_t function_ffffffffc8d829f5();
int64_t function_ffffffffe6a6fe35();
int64_t unknown_fffffffff6773dc0();

// Address range: 0x2f981e - 0x2f994c
int64_t function_2f981e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7; // bp-24, 0x2f9878
    int64_t v2 = (int64_t)&v1; // bp-40, 0x2f991a
    return function_caf2a(a1, a2, a3, a4, a5, a6, (int64_t)&v2);
}

// Address range: 0x2f994c - 0x2f9a6c
int64_t function_2f994c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2f994c
    int64_t v1; // 0x2f994c
    return function_caf2a(a1, 0x2f4330, a3, a4, a5, v1, a1);
}

// Address range: 0x2f9a6c - 0x2f9bc8
int64_t function_2f9a6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f9a6c
    int64_t v1; // 0x2f9a6c
    return function_caf2a(a1, a2, a3, a4, a5, v1, 0x728efe71);
}

// Address range: 0x2f9bc8 - 0x2f9d12
int64_t function_2f9bc8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f9bc8
    int64_t v1; // 0x2f9bc8
    return function_caf2a(a1, a2, a3, a4, v1, v1, 169);
}

// Address range: 0x2f9d12 - 0x2f9e85
int64_t function_2f9d12(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f9d12
    int64_t v1; // bp-16, 0x2f9d12
    int64_t v2 = (int64_t)&v1; // 0x2f9d1b
    v1 = 310;
    int64_t * v3 = (int64_t *)(v2 - 16); // 0x2f9d47
    *(int64_t *)(v2 - 8) = 0x2f4ba1;
    int64_t v4 = v2 - 24; // 0x2f9d78
    int64_t * v5 = (int64_t *)v4; // 0x2f9d78
    *v5 = 0x52f3559b;
    int64_t v6 = v2 - 40; // 0x2f9d82
    int64_t * v7 = (int64_t *)v6; // 0x2f9d82
    *v7 = v4;
    *v7 = v1;
    int64_t * v8 = (int64_t *)(v2 - 48); // 0x2f9da4
    *v8 = v1;
    int64_t * v9 = (int64_t *)(v2 - 56); // 0x2f9dbb
    *v9 = v6;
    int64_t v10 = *v5; // 0x2f9dc4
    *v9 = v10;
    int64_t * v11 = (int64_t *)(v2 - 64); // 0x2f9dcb
    *v11 = a4;
    *v8 = v1;
    *(int64_t *)(v2 - 32) = v1;
    *v8 = *v3;
    *v11 = *v9;
    *v9 = v10;
    int64_t v12 = *v11; // 0x2f9e09
    *v3 = v10;
    *v9 = a5;
    *v8 = v4;
    *v9 = *v7;
    int64_t v13; // 0x2f9d12
    bool v14; // 0x2f9d12
    return function_caf2a(a1, a2, a3, v12, a5, v13, 0x4000 * (int64_t)v14 | 2048 * (int64_t)v14 | 1024 * (int64_t)v14 | 512 * (int64_t)v14 | 256 * (int64_t)v14 | 128 * (int64_t)v14 | 64 * (int64_t)v14 | 16 * (int64_t)v14 | (int64_t)v14 | 4 * (int64_t)v14 | 2);
}

// Address range: 0x2f9e85 - 0x2f9ff0
int64_t function_2f9e85(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f9e85
    int64_t v1; // 0x2f9e85
    return function_caf2a(a1, a2, a3, a4, v1, v1, a5);
}

// Address range: 0x2f9ff0 - 0x2fa136
int64_t function_2f9ff0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2f9ff0
    int64_t v1; // 0x2f9ff0
    return function_caf2a(a1, a2, a3, a4, v1, v1, a5);
}

// Address range: 0x2fa1b3 - 0x2fa1bb
int64_t function_2fa1b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 127); // 0x2fa1b3
    *v1 = *v1 | (char)a4;
    int64_t v2; // 0x2fa1b3
    return function_2fa1c3(a1, a2, a3, a4, v2, (int64_t)&g1, (int64_t)&g1);
}

// Address range: 0x2fa1bb - 0x2fa1c3
int64_t function_2fa1bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2fa1bb
    int64_t result; // 0x2fa1bb
    return result;
}

// Address range: 0x2fa1c3 - 0x2fa219
int64_t function_2fa1c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2fa1c3
    int64_t result; // 0x2fa1c3
    return result;
}

// Address range: 0x45ee34 - 0x45ee43
int64_t function_45ee34(void) {
    // 0x45ee34
    bool v1; // 0x45ee34
    int64_t v2 = unknown_fffffffff6773dc0() + 0xd417224d + (int64_t)(bool)v1; // 0x45ee3a
    return (v2 + 64) % 256 | v2 & 0xffffff00;
}

// Address range: 0x45ee6c - 0x45ee77
int64_t function_45ee6c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45ee6c
    bool v1; // 0x45ee6c
    return function_ffffffffbf04ccac((int32_t)(v1 ? a4 : a1));
}

// Address range: 0x45ee77 - 0x45ee7f
int64_t function_45ee77(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x45ee77
    int64_t result; // 0x45ee77
    bool v1; // 0x45ee77
    *(char *)a1 = (char)result - (char)(a3 / 256) + (char)v1;
    return result;
}

// Address range: 0x45ee7f - 0x45ee8d
int64_t function_45ee7f(void) {
    // 0x45ee7f
    int64_t v1; // 0x45ee7f
    uint64_t v2 = v1;
    char * v3 = (char *)(v2 - 0x63f50878); // 0x45ee7f
    bool v4; // 0x45ee7f
    *v3 = *v3 + (char)(v2 / 256) + (char)v4;
    return v2 & 0x6f009986 | 0x90ff6679;
}

// Address range: 0x45eedc - 0x45eedd
int64_t function_45eedc(void) {
    // 0x45eedc
    int64_t result; // 0x45eedc
    return result;
}

// Address range: 0x45eee5 - 0x45eee6
int64_t function_45eee5(void) {
    // 0x45eee5
    int64_t result; // 0x45eee5
    return result;
}

// Address range: 0x45eef9 - 0x45eefb
int64_t function_45eef9(void) {
    // 0x45eef9
    return function_45eee5();
}

// Address range: 0x45ef19 - 0x45ef36
int64_t function_45ef19(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45ef19
    int64_t result; // 0x45ef19
    int64_t v1; // 0x45ef19
    if (*(char *)(v1 + 0x67c2333b) == (char)a3) {
        result = function_45eedc();
    }
    char * v2 = (char *)(a2 + 81); // 0x45ef26
    unsigned char v3 = *v2; // 0x45ef26
    unsigned char v4 = (char)result; // 0x45ef26
    *v2 = v3 - v4;
    int32_t * v5 = (int32_t *)(v1 + 0x412fe17b); // 0x45ef2f
    *v5 = (int32_t)(v3 < v4) - (int32_t)a1 + *v5;
    return result;
}

// Address range: 0x45ef5a - 0x45ef5b
int64_t function_45ef5a(void) {
    // 0x45ef5a
    int64_t result; // 0x45ef5a
    return result;
}

// Address range: 0x45ef5c - 0x45ef65
int64_t function_45ef5c(int64_t a1) {
    // 0x45ef5c
    int64_t v1; // 0x45ef5c
    int64_t result = v1;
    bool v2; // 0x45ef5c
    *(char *)result = (char)result - (char)a1 + (char)v2;
    return result;
}

// Address range: 0x45efc4 - 0x45f01a
int64_t function_45efc4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x45efc4
    int32_t * v3 = (int32_t *)(4 * v2 + a2); // 0x45efce
    uint32_t v4 = *v3; // 0x45efce
    uint32_t v5 = (int32_t)a1; // 0x45efce
    *v3 = v4 - v5;
    uint32_t v6 = (int32_t)v2; // 0x45efd1
    uint32_t v7 = *(int32_t *)(a2 + 34) + (int32_t)(v4 < v5); // 0x45efd1
    bool v8 = v4 < v5 ? v7 != -1 | (int32_t)(v4 < v5) + v6 - v7 > v6 : v7 > v6; // 0x45efd1
    unsigned char v9 = (char)a4 % 32; // 0x45efd6
    bool v10 = v8; // 0x45efd6
    if (v9 != 0) {
        unsigned char v11 = *(char *)&v1; // 0x45efd6
        *(char *)v1 = v11 >> v9 | (char)((int16_t)v11 << (int16_t)(9 - v9)) | (char)v8 << 8 - v9;
        v10 = (v11 & 1 << v9 - 1) != 0;
    }
    __asm_int1();
    int64_t v12; // 0x45efc4
    int32_t v13 = *(int32_t *)&v12; // 0x45efd9
    int64_t v14 = 256 * (int64_t)((int32_t)v10 + (int32_t)a4 + v13) + a3 & 0xff00 | a3 & -0xff01; // 0x45efdb
    int64_t v15 = *(int64_t *)(4 * v2 - 115 + v1); // 0x45efdd
    int32_t * v16 = (int32_t *)(v14 - 31); // 0x45efec
    int32_t v17 = v14; // 0x45efec
    *v16 = *v16 | v17;
    int32_t * v18 = (int32_t *)(v1 - 0x4680e343); // 0x45effb
    *v18 = v17 + (int32_t)((v15 | v2) - 8) & *v18;
    __asm_int3();
    return function_35c0d70();
}

// Address range: 0x45f090 - 0x45f091
int64_t function_45f090(int64_t a1) {
    // 0x45f090
    int64_t result; // 0x45f090
    return result;
}

// Address range: 0x45f0e3 - 0x45f0ea
int64_t function_45f0e3(void) {
    // 0x45f0e3
    return function_ffffffffc8d829f5();
}

// Address range: 0x45f126 - 0x45f136
int64_t function_45f126(void) {
    // 0x45f126
    return function_ffffffffe6a6fe35();
}

// Address range: 0x45f143 - 0x45f145
int64_t function_45f143(void) {
    // 0x45f143
    int64_t result; // 0x45f143
    return result;
}

// Address range: 0x45f173 - 0x45f17f
int64_t function_45f173(int64_t a1, int64_t a2, int64_t a3) {
    // 0x45f173
    int64_t result; // 0x45f173
    char * v1 = (char *)(result + 0x2743fac6); // 0x45f173
    *v1 = *v1 | (char)a3;
    return result;
}

// Address range: 0x45f1d1 - 0x45f1d7
int64_t function_45f1d1(void) {
    // 0x45f1d1
    int64_t v1; // 0x45f1d1
    uint64_t v2 = v1;
    return v2 / 16 % 16 | v2 & -256;
}

// Address range: 0x45f1da - 0x45f1e3
int64_t function_45f1da(int64_t a1, int64_t a2) {
    // 0x45f1da
    int64_t v1; // 0x45f1da
    return v1 & 0xffffffff ^ 0x1bcc2200;
}

// Address range: 0x45f1fe - 0x45f1ff
int64_t function_45f1fe(void) {
    // 0x45f1fe
    int64_t result; // 0x45f1fe
    return result;
}

// Address range: 0x45f2b3 - 0x45f2d7
int64_t function_45f2b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a3 - 0x3587e346 + 2 * a2); // 0x45f2b6
    int64_t v2; // 0x45f2b3
    *v1 = *v1 & (int32_t)v2;
    int32_t * v3 = (int32_t *)((a1 & 0xffffffff ^ 81) + 90); // 0x45f2c9
    *v3 = 0x40000 * *v3;
    return a3 & 0xffffffff;
}

// Address range: 0x45f2fd - 0x45f2fe
int64_t function_45f2fd(void) {
    // 0x45f2fd
    int64_t result; // 0x45f2fd
    return result;
}

// Address range: 0x45f312 - 0x45f32d
int64_t function_45f312(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45f312
    int64_t v1; // 0x45f312
    bool v2; // 0x45f312
    if (v2) {
        int64_t v3 = 17 * v1; // 0x45f321
        uint64_t v4 = v3 + 144; // 0x45f324
        __asm_out((int16_t)a3, (char)v4);
        return v4 % 256 | v3 & 0xffffff00;
    }
    // 0x45f314
    return v1 | 234;
}

// Address range: 0x45f32d - 0x45f32f
int64_t function_45f32d(void) {
    // 0x45f32d
    int64_t v1; // 0x45f32d
    return function_45f3a7(v1, v1, v1, v1, (int64_t)&g1);
}

// Address range: 0x45f333 - 0x45f35a
int64_t function_45f333(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x45f333
    int64_t v1; // 0x45f333
    char v2 = (char)v1 - 1; // 0x45f34a
    unsigned char v3 = llvm_ctpop_i8(v2); // 0x45f34a
    *(char *)a2 = v2;
    if (v3 % 2 == 0) {
        function_45f2fd();
    }
    // 0x45f34f
    *(char *)a1 = *(char *)0x1db8cdd8;
    bool v4; // 0x45f333
    int64_t v5 = v4 ? -1 : 1; // 0x45f352
    return function_15042bfc(v5 + a1, v5 + 0x1db8cdd8);
}

// Address range: 0x45f37c - 0x45f380
int64_t function_45f37c(int64_t a1) {
    // 0x45f37c
    int64_t result; // 0x45f37c
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x45f3a7 - 0x45f42a
int64_t function_45f3a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x45f3a7
    int64_t result; // 0x45f3a7
    return result;
}
