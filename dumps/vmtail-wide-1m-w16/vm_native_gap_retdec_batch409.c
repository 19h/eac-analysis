/*
 * Targeted RetDec C for native executable gap queue batch 409.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x170aaa-0x170caa rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fbc1e-0x2fbe1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fbe1e-0x2fc01e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2fc01e-0x2fc21e rank=- name=- kind=- bytes=- uncovered=-
 *   0x43c467-0x43c667 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43c667-0x43c867 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43c867-0x43ca67 rank=- name=- kind=- bytes=- uncovered=-
 *   0x43cc67-0x43ce67 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
extern int g3;
extern int g4;
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

int64_t function_1143cc57();
int64_t function_170aaa(void);
int64_t function_170af1(void);
int64_t function_170b05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_170b3e(void);
int64_t function_170b4f(int64_t a1);
int64_t function_170b5b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_170be7(int64_t a1);
int64_t function_170c14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6);
int64_t function_21e70cde();
int64_t function_2fbc1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fbcdd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2fbd50(int64_t a1);
int64_t function_2fbd97(void);
int64_t function_2fbe01(int64_t result);
int64_t function_2fbe17(int64_t a1);
int64_t function_2fbe3c(void);
int64_t function_2fbee6(void);
int64_t function_2fbeee(void);
int64_t function_2fbefa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fbfc5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2fbfd4(int64_t a1);
int64_t function_2fc02c(void);
int64_t function_2fc051(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2fc068(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2fc0e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fc11f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2fc12f(void);
int64_t function_2fc186(int64_t a1);
int64_t function_2fc1ae(void);
int64_t function_2fc1cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43c454();
int64_t function_43c467(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_43c4cd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43c4ef(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_43c546(void);
int64_t function_43c558(void);
int64_t function_43c576(void);
int64_t function_43c5a4(int64_t a1);
int64_t function_43c5af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_43c6de(void);
int64_t function_43c736(void);
int64_t function_43c778(int64_t a1);
int64_t function_43c77b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_43c7a6(void);
int64_t function_43c7a8(void);
int64_t function_43c7c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_43c80e(int64_t a1);
int64_t function_43c812(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_43cc67(int64_t a1, int64_t a2, int64_t a3);
int64_t function_43cdc8(void);
int64_t function_43cdfc(int64_t a1);
int64_t function_6a3176b5();
int64_t function_ffffffff94ada5d0();
int64_t function_ffffffff9dbe779a();
int64_t function_ffffffffa0479dff();
int64_t function_ffffffffabb3be3f();
int64_t function_ffffffffee4108be();
int64_t unknown_13b02347();
int64_t unknown_3902c917();
int64_t unknown_3a422832();
int64_t unknown_3d31a92a();
int64_t unknown_400f6c80();
int64_t unknown_7a30fa08();
int64_t unknown_ffffffff990c1d25();
int64_t unknown_ffffffffa896bd20();
int64_t unknown_ffffffffafcd4b10();
int64_t unknown_ffffffffd4112462();
int64_t unknown_ffffffffd426c522();
int64_t unknown_ffffffffdfe9ce6e();

// Address range: 0x170aaa - 0x170aad
int64_t function_170aaa(void) {
    // 0x170aaa
    int64_t result; // 0x170aaa
    return result;
}

// Address range: 0x170af1 - 0x170af6
int64_t function_170af1(void) {
    // 0x170af1
    return function_21e70cde();
}

// Address range: 0x170b05 - 0x170b0a
int64_t function_170b05(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x170b05
    int64_t result; // 0x170b05
    return result;
}

// Address range: 0x170b3e - 0x170b3f
int64_t function_170b3e(void) {
    // 0x170b3e
    int64_t result; // 0x170b3e
    return result;
}

// Address range: 0x170b4f - 0x170b50
int64_t function_170b4f(int64_t a1) {
    // 0x170b4f
    int64_t result; // 0x170b4f
    return result;
}

// Address range: 0x170b5b - 0x170bdf
int64_t function_170b5b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = unknown_ffffffffd4112462(); // 0x170b5b
    int64_t v2; // 0x170b5b
    char * v3 = (char *)(v2 - 0x6cdf3000); // 0x170b61
    char v4 = *v3; // 0x170b61
    char v5 = a4 / 256; // 0x170b61
    char v6 = v4 + v5; // 0x170b61
    *v3 = v6;
    int64_t result = v1; // 0x170b67
    if (v6 < 0 == ((v6 ^ v4) & (v6 ^ v5)) < 0 == (v6 != 0)) {
        result = function_170b3e();
    }
    int32_t * v7 = (int32_t *)(a2 + 0x6e9a01e8); // 0x170b69
    int32_t v8 = *v7 + (int32_t)a1; // 0x170b69
    *v7 = v8;
    if (a4 != 1 == v8 == 0) {
        // 0x170b82
        return result;
    }
    // 0x170b71
    if (llvm_ctpop_i8((char)v8) % 2 != 0) {
        // 0x170b74
        return unknown_400f6c80();
    }
    // 0x170bd8
    *(char *)-0x4c8e727d = *(char *)-0x4c8e727d - 122;
    return result;
}

// Address range: 0x170be7 - 0x170be8
int64_t function_170be7(int64_t a1) {
    // 0x170be7
    int64_t result; // 0x170be7
    return result;
}

// Address range: 0x170c14 - 0x170ca6
int64_t function_170c14(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2 = a6;
    int64_t v3 = unknown_ffffffff990c1d25(); // 0x170c1f
    int64_t v4 = __asm_in(-93); // 0x170c24
    int64_t v5 = (v3 & 0xffffff00 | v4) + 0x3bff6f00; // 0x170c2a
    int64_t result2; // 0x170c14
    int64_t v6; // 0x170c14
    int64_t v7; // 0x170c14
    if ((v5 + a4 & 0xffffffff) == 1) {
        char * v8 = (char *)(a3 + 61); // 0x170c39
        *v8 = *v8 + (char)a3;
        int64_t v9 = v5 & 0xffffff00; // 0x170c3e
        *(int32_t *)-0x17baceb7 = *(int32_t *)-0x17baceb7 + (int32_t)a1;
        uint32_t v10 = (int32_t)(int64_t)&v2 + (int32_t)a3; // 0x170c48
        int64_t v11 = v10; // 0x170c48
        __asm_outsd((int16_t)v10, *(int32_t *)&v1);
        result2 = v9 | (v4 + 232) % 256;
        v7 = v11;
        v6 = 0;
        if ((v5 & 1024) == 0) {
            int64_t result = (v4 + 208 + (int64_t)((v5 & 256) != 0)) % 256 | v9; // 0x170c51
            int32_t * v12 = (int32_t *)v11; // 0x170c53
            *v12 = *v12 + (int32_t)result;
            return result;
        }
    } else {
        char v13 = __asm_in(-126); // 0x170c84
        *(char *)0x150e8594 = *(char *)0x150e8594 + (char)(a5 / 256);
        result2 = v5 & 0xffffff00 | (int64_t)v13;
        v7 = a3;
    }
    char * v14 = (char *)(v6 - 64); // 0x170c94
    *v14 = *v14 + (char)v7;
    unsigned char v15 = *(char *)0x5570d19; // 0x170c9a
    *(char *)0x5570d19 = v15 / 2 | 128 * v15;
    int32_t * v16 = (int32_t *)(v6 + 0xd87543); // 0x170ca0
    *v16 = *v16 - (int32_t)v6;
    return result2;
}

// Address range: 0x2fbc1e - 0x2fbc80
int64_t function_2fbc1e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2fbc1e
    int64_t v1; // 0x2fbc1e
    int64_t result = v1;
    int64_t v2 = a2;
    if (a4 == 1) {
        // 0x2fbc20
        return result;
    }
    int64_t v3 = a2 & 0xffffffff; // 0x2fbc70
    *(char *)(result & 0xffffffff) = (char)result + (char)a2;
    char * v4 = (char *)(v3 + 61); // 0x2fbc73
    *v4 = *v4 + (char)((uint64_t)v1 / 256);
    *(int32_t *)v3 = *(int32_t *)&v2 + (int32_t)a2;
    int32_t * v5 = (int32_t *)(3 * v3); // 0x2fbc78
    *v5 = *v5 & (int32_t)a3;
    return a2 & 0x11a9cd41 | 0xee5632be;
}

// Address range: 0x2fbcdd - 0x2fbd38
int64_t function_2fbcdd(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int32_t v1 = *(int32_t *)(a1 + 6); // 0x2fbcdd
    int64_t v2; // 0x2fbcdd
    *(int32_t *)a4 = (int32_t)a4 - (int32_t)v2;
    bool v3; // 0x2fbcdd
    int64_t v4 = (v3 ? -1 : 1) + a1; // 0x2fbce2
    int64_t v5 = a3 & -0xff01 | (int64_t)&g3; // 0x2fbce3
    char * v6 = (char *)(v4 - 24); // 0x2fbcf9
    *v6 = 2 * *v6;
    unknown_7a30fa08(v4, v5 + 0x48087c85 + 8 * v2 & 0xffffffff, v5);
    int64_t v7 = v4 & 0xffffffff ^ 0x7a84b43d; // 0x2fbd07
    unknown_3902c917((int32_t)v7);
    __asm_in_133((int16_t)v5);
    int64_t v8 = unknown_ffffffffd426c522(); // 0x2fbd1c
    char * v9 = (char *)(v2 - 82 + 4 * v7); // 0x2fbd21
    *v9 = *v9 + (char)(a4 / 256);
    int32_t * v10 = (int32_t *)((int64_t)((int32_t)v2 & -256 & v1 | 96) + 0x1cc8c717); // 0x2fbd28
    *v10 = *v10 + (int32_t)v8;
    return function_ffffffffabb3be3f();
}

// Address range: 0x2fbd50 - 0x2fbd59
int64_t function_2fbd50(int64_t a1) {
    // 0x2fbd50
    int64_t result; // 0x2fbd50
    char * v1 = (char *)(result + 0x3d01e87d); // 0x2fbd50
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x2fbd97 - 0x2fbda5
int64_t function_2fbd97(void) {
    // 0x2fbd97
    int64_t v1; // 0x2fbd97
    *(int32_t *)0x1e88800a0a53c9b = (int32_t)v1;
    return function_ffffffff9dbe779a();
}

// Address range: 0x2fbe01 - 0x2fbe05
int64_t function_2fbe01(int64_t result) {
    // 0x2fbe01
    return result;
}

// Address range: 0x2fbe17 - 0x2fbe1d
int64_t function_2fbe17(int64_t a1) {
    // 0x2fbe17
    return unknown_ffffffffa896bd20(a1);
}

// Address range: 0x2fbe3c - 0x2fbe3d
int64_t function_2fbe3c(void) {
    // 0x2fbe3c
    int64_t result; // 0x2fbe3c
    return result;
}

// Address range: 0x2fbee6 - 0x2fbee8
int64_t function_2fbee6(void) {
    // 0x2fbee6
    int64_t v1; // 0x2fbee6
    return function_2fbefa(v1, v1, v1, v1, (int64_t)&g4);
}

// Address range: 0x2fbeee - 0x2fbefa
int64_t function_2fbeee(void) {
    // 0x2fbeee
    int64_t v1; // 0x2fbeee
    int32_t * v2 = (int32_t *)(v1 - 108); // 0x2fbeee
    *v2 = *v2 ^ 0xff6ab94;
    return v1 & 0x17fa95c5 | 0xe8056a3a;
}

// Address range: 0x2fbefa - 0x2fbf96
int64_t function_2fbefa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = *(int32_t *)-0x111defd; // 0x2fbefc
    uint32_t v2 = (int32_t)a1; // 0x2fbefc
    uint32_t v3 = v1 + v2; // 0x2fbefc
    *(int32_t *)-0x111defd = v3;
    int32_t v4 = a3; // 0x2fbf08
    uint32_t v5 = v4 + v2; // 0x2fbf08
    uint32_t v6 = v5 + (int32_t)(v3 < v1); // 0x2fbf08
    int64_t result = unknown_ffffffffafcd4b10(v6); // 0x2fbf0a
    int32_t * v7 = (int32_t *)result; // 0x2fbf0f
    *v7 = *v7 - v4 + (int32_t)(v3 < v1 ? v6 <= v2 : v5 < v2);
    int64_t v8 = (a4 + 0x3788f56 & 0xffffffff) - 1; // 0x2fbf11
    if (v8 == 0) {
        // 0x2fbf14
        return result;
    }
    int64_t result2 = unknown_13b02347(); // 0x2fbf41
    char * v9 = (char *)(int64_t)v6; // 0x2fbf46
    *v9 = *v9 + (char)v8;
    return result2;
}

// Address range: 0x2fbfc5 - 0x2fbfca
int64_t function_2fbfc5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2fbfc5
    int64_t result; // 0x2fbfc5
    return result;
}

// Address range: 0x2fbfd4 - 0x2fbfd5
int64_t function_2fbfd4(int64_t a1) {
    // 0x2fbfd4
    int64_t result; // 0x2fbfd4
    return result;
}

// Address range: 0x2fc02c - 0x2fc033
int64_t function_2fc02c(void) {
    // 0x2fc02c
    return unknown_3a422832();
}

// Address range: 0x2fc051 - 0x2fc062
int64_t function_2fc051(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2fc051
    int64_t v1; // 0x2fc051
    int32_t v2 = v1;
    *(int32_t *)-0x176db217aade76f7 = v2;
    *(int32_t *)v1 = v2 + (int32_t)a4;
    return function_1143cc57();
}

// Address range: 0x2fc068 - 0x2fc0d1
int64_t function_2fc068(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffdfe9ce6e(); // 0x2fc068
    bool v2; // 0x2fc068
    if (!v2) {
        // 0x2fc0cf
        return __asm_hlt();
    }
    char * v3 = (char *)(a4 & -0xff01 | 256 * a3 & 0xff00); // 0x2fc072
    *v3 = *v3 | (char)v1;
    int32_t * v4 = (int32_t *)(a2 - 11); // 0x2fc076
    int64_t v5; // 0x2fc068
    *v4 = *v4 + (int32_t)v5;
    return v1 & -256 | a3 % 256;
}

// Address range: 0x2fc0e4 - 0x2fc0ef
int64_t function_2fc0e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2fc0e4
    int64_t v1; // 0x2fc0e4
    char * v2 = (char *)(v1 - 114); // 0x2fc0e9
    *v2 = *v2 + (char)a4;
    return v1 + 0xbbcd997c & 0xffffffff;
}

// Address range: 0x2fc11f - 0x2fc12e
int64_t function_2fc11f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_3d31a92a(a1, a2, a3, a4, a5); // 0x2fc124
    int64_t v1; // 0x2fc11f
    int32_t * v2 = (int32_t *)(8 * v1 + a1); // 0x2fc129
    *v2 = *v2 + (int32_t)a4;
    return result;
}

// Address range: 0x2fc12f - 0x2fc131
int64_t function_2fc12f(void) {
    // 0x2fc12f
    int64_t result; // 0x2fc12f
    return result;
}

// Address range: 0x2fc186 - 0x2fc187
int64_t function_2fc186(int64_t a1) {
    // 0x2fc186
    int64_t result; // 0x2fc186
    return result;
}

// Address range: 0x2fc1ae - 0x2fc1af
int64_t function_2fc1ae(void) {
    // 0x2fc1ae
    int64_t result; // 0x2fc1ae
    return result;
}

// Address range: 0x2fc1cb - 0x2fc1d9
int64_t function_2fc1cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 0x7fffcfb3); // 0x2fc1d0
    int64_t result; // 0x2fc1cb
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x43c467 - 0x43c496
int64_t function_43c467(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x43c467
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    char v1 = *(char *)(a2 - 74); // 0x43c468
    int64_t v2 = 256 * (int64_t)(v1 | (char)(a4 / 256)) | a4 & -0xff01; // 0x43c468
    int64_t v3; // 0x43c467
    int32_t * v4 = (int32_t *)(v3 - 0x66ff86e1); // 0x43c46c
    *v4 = *v4 / 0x10000;
    int64_t result; // 0x43c467
    if ((char)v3 != 0 && v2 != 1) {
        result = function_43c454();
    }
    if (v2 == 2) {
        // 0x43c480
        return __asm_int1();
    }
    // 0x43c487
    return result;
}

// Address range: 0x43c4cd - 0x43c4d1
int64_t function_43c4cd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x43c4cd
    __asm_in_133((int16_t)a3);
    int64_t v1; // 0x43c4cd
    return (int64_t)&v1;
}

// Address range: 0x43c4ef - 0x43c501
int64_t function_43c4ef(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x43c4ef
    int64_t v1; // 0x43c4ef
    __asm_outsb((int16_t)a3, (char)v1);
    unsigned char v2 = (char)(a4 / 256); // 0x43c4fb
    unsigned char v3 = (char)v1;
    char v4 = v2 - v3; // 0x43c4fb
    return v1 & -0xff01 | 256 * (64 * (int64_t)(v4 == 0) | (int64_t)(v2 < v3) | 128 * (int64_t)(v4 < 0) | 16 * (int64_t)(v2 % 16 - v3 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8(v4) % 2 == 0)) | 512;
}

// Address range: 0x43c546 - 0x43c54b
int64_t function_43c546(void) {
    // 0x43c546
    return function_6a3176b5();
}

// Address range: 0x43c558 - 0x43c559
int64_t function_43c558(void) {
    // 0x43c558
    int64_t result; // 0x43c558
    return result;
}

// Address range: 0x43c576 - 0x43c577
int64_t function_43c576(void) {
    // 0x43c576
    int64_t result; // 0x43c576
    return result;
}

// Address range: 0x43c5a4 - 0x43c5ad
int64_t function_43c5a4(int64_t a1) {
    // 0x43c5a4
    int64_t result; // 0x43c5a4
    int32_t * v1 = (int32_t *)(result + 0x1201e86); // 0x43c5a4
    uint32_t v2 = *v1; // 0x43c5a4
    *v1 = v2 / 2 | 0x80000000 * v2;
    return result;
}

// Address range: 0x43c5af - 0x43c6c2
int64_t function_43c5af(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x43c5af
    int64_t v1; // 0x43c5af
    char v2 = *(char *)(v1 + 36 + 2 * v1); // 0x43c5af
    int32_t v3 = v1; // 0x43c5b3
    int32_t v4 = v3 + 0x1f56cee0; // 0x43c5b3
    int64_t result = v4; // 0x43c5b8
    if (v4 < 0 == (v4 & (v3 ^ -0x80000000)) < 0) {
        result = function_43c576();
    }
    int64_t v5 = a3 & -256 | (int64_t)(v2 + (char)a3); // 0x43c5af
    if (v4 != 0) {
        // 0x43c61f
        __asm_outsb((int16_t)v5, (char)a2);
        return result;
    }
    int32_t v6 = (int32_t)result + (int32_t)v1; // 0x43c5bc
    int32_t v7 = v6 + 0x6dcfba0e; // 0x43c5be
    if (v7 < 0 == (v7 & (v6 ^ -0x80000000)) < 0 == (v7 != 0)) {
        function_43c558();
    }
    uint32_t v8 = __asm_in_134((int16_t)v5); // 0x43c5cd
    int64_t result2 = v8; // 0x43c5cd
    int32_t v9 = v8 + 0x51db5bf8; // 0x43c5ce
    if (llvm_ctpop_i8((char)v9) % 2 != 0) {
        // 0x43c5d5
        return result2;
    }
    int64_t v10 = a4 - 1; // 0x43c5e8
    if (v10 != 0 != (v9 == 0)) {
        // 0x43c5ea
        int64_t v11; // 0x43c5af
        *(int32_t *)v11 = *(int32_t *)&v11 & v8;
        return v11 & 0xffffffff;
    }
    uint32_t v12 = (int32_t)a6; // 0x43c62d
    uint32_t v13 = *(int32_t *)(a1 - 0x1ae2e8b4) + v12; // 0x43c62d
    uint32_t v14 = v13 + (int32_t)(v8 < 0xae24a408); // 0x43c62d
    int64_t v15 = v14; // 0x43c62d
    int64_t v16; // 0x43c5af
    if (v14 == 0 || (v8 < 0xae24a408 ? v14 <= v12 : v13 < v12)) {
        // 0x43c637
        int64_t v17; // bp+16, 0x43c5af
        uint32_t v18 = (int32_t)(int64_t)&v17; // 0x43c635
        int32_t v19 = v18 - v8; // 0x43c635
        int64_t v20 = v10 & -0xff01 | (int64_t)&g2; // 0x43c639
        v16 = v20;
        if (v19 == 0) {
            if (v19 >= 0) {
                // 0x43c641
                return result2 & -256 | (int64_t)(v8 > v18) | 2 * result2 & 254;
            }
            // 0x43c6b3
            __asm_outsd((int16_t)*(int32_t *)(v20 - 0x4b6e839) & 35, *(int32_t *)v15);
            return result2 & -256 | (int64_t)((char)v8 - *(char *)(result2 + 84));
        }
    } else {
        // 0x43c637
        v16 = v10 & -0xff01 | (int64_t)&g2;
    }
    int32_t * v21 = (int32_t *)(v1 - 0x3edb9f0f); // 0x43c600
    int32_t v22 = v1; // 0x43c600
    int32_t v23 = *v21 - v22; // 0x43c600
    *v21 = v23;
    if (v23 == 0) {
        // 0x43c60a
        return __asm_in_135(28);
    }
    int32_t * v24 = (int32_t *)v16; // 0x43c64e
    *v24 = *v24 | v22;
    return result2 & -256 | (int64_t)*(char *)v15;
}

// Address range: 0x43c6de - 0x43c6e3
int64_t function_43c6de(void) {
    // 0x43c6de
    return function_ffffffffa0479dff();
}

// Address range: 0x43c736 - 0x43c738
int64_t function_43c736(void) {
    // 0x43c736
    int64_t v1; // 0x43c736
    return function_43c77b(v1, v1, v1, v1);
}

// Address range: 0x43c778 - 0x43c77b
int64_t function_43c778(int64_t a1) {
    // 0x43c778
    int64_t v1; // 0x43c778
    return v1 & -256 | (uint64_t)v1 / 256 % 256;
}

// Address range: 0x43c77b - 0x43c791
int64_t function_43c77b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x43c77b
    int64_t v1; // 0x43c77b
    int32_t * v2 = (int32_t *)(v1 + 2 * a4); // 0x43c77b
    *v2 = *v2 - (int32_t)a1;
    bool v3; // 0x43c77b
    __asm_outsd((int16_t)a3, *(int32_t *)((v3 ? -1 : 1) + a2));
    return v1 + 0x18dc355 & 0xffffffff;
}

// Address range: 0x43c7a6 - 0x43c7a7
int64_t function_43c7a6(void) {
    // 0x43c7a6
    int64_t result; // 0x43c7a6
    return result;
}

// Address range: 0x43c7a8 - 0x43c7ae
int64_t function_43c7a8(void) {
    // 0x43c7a8
    int64_t result; // 0x43c7a8
    return result;
}

// Address range: 0x43c7c2 - 0x43c7e1
int64_t function_43c7c2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x43c7c2
    int64_t v1; // 0x43c7c2
    *(char *)-0x4ac8008205a3b8d8 = (char)v1;
    char * v2 = (char *)(a2 - 0x61cc9800); // 0x43c7cb
    char v3 = *v2 | 10; // 0x43c7cb
    *v2 = v3;
    int64_t result; // 0x43c7c2
    if (v3 >= 0) {
        result = function_43c7a6();
    }
    // 0x43c7d5
    int64_t v4; // 0x43c7c2
    *(int32_t *)v4 = *(int32_t *)&v4 - (int32_t)v1;
    return result;
}

// Address range: 0x43c80e - 0x43c811
int64_t function_43c80e(int64_t a1) {
    // 0x43c80e
    int64_t result; // 0x43c80e
    return result;
}

// Address range: 0x43c812 - 0x43ca66
int64_t function_43c812(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a2;
    int64_t v2; // 0x43c812
    int64_t v3 = v2 % 256 | a4; // 0x43c812
    int32_t v4 = (int32_t)v2 & -0x7393d880; // 0x43c814
    char * v5; // 0x43c830
    if (v3 != 1 == v4 == 0) {
        // 0x43c830
        v5 = (char *)(v3 + 0xd7014fd);
        int64_t result; // 0x43c812
        *v5 = *v5 + (char)result;
        return result;
    }
    if (v4 >= 0 != v4 != 0) {
        uint64_t v6 = v2 + 234; // 0x43c829
        int64_t v7 = v2 & -256; // 0x43c829
        if ((char)v2 > 21) {
            // 0x43c85e
            return v6 % 256 | v7;
        }
        int64_t result2 = v7 | v6 & 192 | 63;
        v5 = (char *)(v3 + 0xd7014fd);
        *v5 = *v5 + (char)result2;
        return result2;
    }
    char * v8 = (char *)(a2 - 0x31ce370a); // 0x43c887
    char v9 = *v8 ^ (char)a3; // 0x43c887
    *v8 = v9;
    uint64_t v10 = (0x100000000 * v2 >> 32) * (int64_t)*(int32_t *)(v2 - 0x4d317ec5); // 0x43c88d
    uint64_t v11 = v10 / 0x100000000; // 0x43c88d
    int32_t v12 = v11; // 0x43c88d
    if (v9 == 0 || v12 != 0 == (v12 != -1)) {
        // 0x43c844
        *(char *)-0x4ac728cdeef77ce9 = (char)v10;
        int16_t v13 = v11; // 0x43c84f
        *(char *)a1 = __asm_insb(v13);
        __asm_outsb(v13, *(char *)&v1);
        return (int64_t)*(int32_t *)0x4d24ce40;
    }
    int64_t result3 = v10 & 0xffffff00 | (int64_t)*(char *)((v10 % 256 ^ 110) + v2); // 0x43c898
    __asm_out((int16_t)v11, (int32_t)result3);
    return result3;
}

// Address range: 0x43cc67 - 0x43cc77
int64_t function_43cc67(int64_t a1, int64_t a2, int64_t a3) {
    // 0x43cc67
    int64_t result; // 0x43cc67
    __asm_outsd((int16_t)a3, (int32_t)result);
    char * v1 = (char *)(a2 + 0x2568a27e); // 0x43cc71
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x43cdc8 - 0x43cdcd
int64_t function_43cdc8(void) {
    // 0x43cdc8
    return function_ffffffff94ada5d0();
}

// Address range: 0x43cdfc - 0x43ce02
int64_t function_43cdfc(int64_t a1) {
    // 0x43cdfc
    int64_t v1; // 0x43cdfc
    *(char *)a1 = (char)v1;
    bool v2; // 0x43cdfc
    return function_ffffffffee4108be((v2 ? -1 : 1) + a1);
}
