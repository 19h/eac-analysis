/*
 * Targeted RetDec C for native executable gap queue batch 529.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x19a685-0x19a885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19a885-0x19aa85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19aa85-0x19ac85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x275241-0x275441 rank=- name=- kind=- bytes=- uncovered=-
 *   0x275441-0x275641 rank=- name=- kind=- bytes=- uncovered=-
 *   0x275641-0x275841 rank=- name=- kind=- bytes=- uncovered=-
 *   0x275841-0x275a41 rank=- name=- kind=- bytes=- uncovered=-
 *   0x275a41-0x275c41 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_19a685(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19a6b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19a6cc(void);
int64_t function_19a6eb(void);
int64_t function_19a706(void);
int64_t function_19a75e(void);
int64_t function_19a7aa(int64_t a1);
int64_t function_19a84b(void);
int64_t function_19a89b(void);
int64_t function_19a8b6(void);
int64_t function_19a8d5(int64_t a1);
int64_t function_19a8e9(void);
int64_t function_19a917(void);
int64_t function_19a92b(void);
int64_t function_19a948(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19a959(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_19a96e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_19a983(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19a9a3(int64_t a1);
int64_t function_19a9b1(void);
int64_t function_19a9b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19a9c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19aa09(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19aa34(void);
int64_t function_19aa48(void);
int64_t function_19aa98(void);
int64_t function_19aaa6(void);
int64_t function_19aaa7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19aac7(void);
int64_t function_19ab10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19ab5f(void);
int64_t function_19ab7d(void);
int64_t function_19ab8f(void);
int64_t function_19ab95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_19ac05(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6);
int64_t function_19ac35(int64_t a1);
int64_t function_2029c1f();
int64_t function_275241(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint32_t a6);
int64_t function_275373(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_275509(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_275673(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2757ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2758da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_275a72(void);
int64_t function_275aee(void);
int64_t function_275b06(int64_t a1);
int64_t function_275b13(void);
int64_t function_275b46(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_275bb5(int64_t a1, int64_t a2);
int64_t function_275bcd(void);
int64_t function_275be9(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_275c26(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3a3b384();
int64_t function_8375c85();
int64_t function_cf3c7();
int64_t unknown_201aa48();
int64_t unknown_21f89bfc();
int64_t unknown_23b3c312();
int64_t unknown_39b3f057();
int64_t unknown_3a41c21a();
int64_t unknown_4363fd54();
int64_t unknown_467f6a7();
int64_t unknown_47b498b4();
int64_t unknown_622a2c1f();
int64_t unknown_68493a8f();
int64_t unknown_ffffffffdc8369f4();

// Address range: 0x19a685 - 0x19a69c
int64_t function_19a685(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19a685
    int64_t v1; // 0x19a685
    return v1 ^ 44;
}

// Address range: 0x19a6b0 - 0x19a6b7
int64_t function_19a6b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19a6b0
    int64_t result; // 0x19a6b0
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x19a6cc - 0x19a6cd
int64_t function_19a6cc(void) {
    // 0x19a6cc
    int64_t result; // 0x19a6cc
    return result;
}

// Address range: 0x19a6eb - 0x19a6ed
int64_t function_19a6eb(void) {
    // 0x19a6eb
    return function_19a6cc();
}

// Address range: 0x19a706 - 0x19a70b
int64_t function_19a706(void) {
    // 0x19a706
    return function_2029c1f();
}

// Address range: 0x19a75e - 0x19a761
int64_t function_19a75e(void) {
    // 0x19a75e
    int64_t result; // 0x19a75e
    return result;
}

// Address range: 0x19a7aa - 0x19a7b0
int64_t function_19a7aa(int64_t a1) {
    // 0x19a7aa
    int64_t result; // 0x19a7aa
    return result;
}

// Address range: 0x19a84b - 0x19a84c
int64_t function_19a84b(void) {
    // 0x19a84b
    int64_t result; // 0x19a84b
    return result;
}

// Address range: 0x19a89b - 0x19a89d
int64_t function_19a89b(void) {
    // 0x19a89b
    return function_19a84b();
}

// Address range: 0x19a8b6 - 0x19a8b9
int64_t function_19a8b6(void) {
    // 0x19a8b6
    int64_t v1; // 0x19a8b6
    int64_t v2 = v1;
    return (v2 + 239) % 256 | v2 & -256;
}

// Address range: 0x19a8d5 - 0x19a8d8
int64_t function_19a8d5(int64_t a1) {
    // 0x19a8d5
    int64_t result; // 0x19a8d5
    return result;
}

// Address range: 0x19a8e9 - 0x19a8ea
int64_t function_19a8e9(void) {
    // 0x19a8e9
    int64_t result; // 0x19a8e9
    return result;
}

// Address range: 0x19a917 - 0x19a91c
int64_t function_19a917(void) {
    // 0x19a917
    return function_3a3b384();
}

// Address range: 0x19a92b - 0x19a92c
int64_t function_19a92b(void) {
    // 0x19a92b
    int64_t result; // 0x19a92b
    return result;
}

// Address range: 0x19a948 - 0x19a954
int64_t function_19a948(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19a948
    bool v1; // 0x19a948
    if (a4 != 1 && !v1) {
        function_19a8e9();
    }
    char * v2 = (char *)(a4 - 59); // 0x19a94a
    int64_t v3; // 0x19a948
    *v2 = *v2 | (char)((uint64_t)v3 / 256);
    __asm_int3();
    return unknown_4363fd54();
}

// Address range: 0x19a959 - 0x19a962
int64_t function_19a959(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x19a959
    int64_t result; // 0x19a959
    char * v1 = (char *)(result + 0x1e8acf8); // 0x19a959
    *v1 = *v1 + (char)(a4 / 256);
    return result;
}

// Address range: 0x19a96e - 0x19a973
int64_t function_19a96e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x19a96e
    int64_t v1; // 0x19a96e
    int64_t v2 = v1;
    bool v3; // 0x19a96e
    *(char *)v2 = (char)v2 - (char)(a4 / 256) + (char)v3;
    int64_t v4; // 0x19a96e
    *(char *)a1 = *(char *)&v4;
    return function_19a92b();
}

// Address range: 0x19a983 - 0x19a98b
int64_t function_19a983(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x19a985
    int64_t v2; // 0x19a983
    if (v1 != 0) {
        unsigned char v3 = (char)v2;
        *(char *)v2 = v3 >> 8 - v1 | v3 << v1;
    }
    bool v4; // 0x19a983
    return 2 * v2 & 0xfffffffe | (int64_t)v4;
}

// Address range: 0x19a9a3 - 0x19a9a4
int64_t function_19a9a3(int64_t a1) {
    // 0x19a9a3
    int64_t result; // 0x19a9a3
    return result;
}

// Address range: 0x19a9b1 - 0x19a9b2
int64_t function_19a9b1(void) {
    // 0x19a9b1
    int64_t result; // 0x19a9b1
    return result;
}

// Address range: 0x19a9b2 - 0x19a9bc
int64_t function_19a9b2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19a9b2
    return unknown_201aa48(a1, a2, a3, a4);
}

// Address range: 0x19a9c3 - 0x19a9c8
int64_t function_19a9c3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19a9c3
    int64_t result; // 0x19a9c3
    return result;
}

// Address range: 0x19aa09 - 0x19aa18
int64_t function_19aa09(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19aa09
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t v1; // 0x19aa09
    bool v2; // 0x19aa09
    int64_t v3 = v1 - (v2 ? 0xca9d483b : 0xca9d483a); // 0x19aa0a
    char v4 = *(char *)(v3 & 0xffffffff); // 0x19aa0f
    return v3 & 0xffffff00 | (int64_t)((char)v3 - v4);
}

// Address range: 0x19aa34 - 0x19aa37
int64_t function_19aa34(void) {
    // 0x19aa34
    int64_t result; // 0x19aa34
    return result;
}

// Address range: 0x19aa48 - 0x19aa51
int64_t function_19aa48(void) {
    // 0x19aa48
    int64_t v1; // 0x19aa48
    int32_t * v2 = (int32_t *)(v1 - 0x1ca20fa); // 0x19aa48
    *v2 = *v2 + (int32_t)v1;
    __asm_hlt();
    return function_19aaa7(v1, v1, v1);
}

// Address range: 0x19aa98 - 0x19aa99
int64_t function_19aa98(void) {
    // 0x19aa98
    int64_t result; // 0x19aa98
    return result;
}

// Address range: 0x19aaa6 - 0x19aaa7
int64_t function_19aaa6(void) {
    // 0x19aaa6
    int64_t result; // 0x19aaa6
    return result;
}

// Address range: 0x19aaa7 - 0x19aab8
int64_t function_19aaa7(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(8 * a1 + a3); // 0x19aaa9
    int64_t v2; // 0x19aaa7
    *v1 = *v1 + (int32_t)(v2 | v2);
    return v2 + 0x57db3d7a & 0xffffffff;
}

// Address range: 0x19aac7 - 0x19aacc
int64_t function_19aac7(void) {
    // 0x19aac7
    int64_t result; // 0x19aac7
    return result;
}

// Address range: 0x19ab10 - 0x19ab2e
int64_t function_19ab10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(unknown_3a41c21a() + 0x1e812bd); // 0x19ab19
    *v1 = *v1 - (int32_t)a4;
    return a4 & 0xffffffff;
}

// Address range: 0x19ab5f - 0x19ab60
int64_t function_19ab5f(void) {
    // 0x19ab5f
    int64_t result; // 0x19ab5f
    return result;
}

// Address range: 0x19ab7d - 0x19ab83
int64_t function_19ab7d(void) {
    // 0x19ab7d
    int64_t v1; // 0x19ab7d
    return v1 ^ 27;
}

// Address range: 0x19ab8f - 0x19ab91
int64_t function_19ab8f(void) {
    // 0x19ab8f
    int64_t result; // 0x19ab8f
    return result;
}

// Address range: 0x19ab95 - 0x19abf6
int64_t function_19ab95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x19ab95
    *(char *)a1 = (char)unknown_467f6a7();
    bool v1; // 0x19ab95
    int64_t v2 = v1 ? -1 : 1; // 0x19abab
    int64_t v3 = v2 + a1; // 0x19abab
    uint64_t v4 = unknown_47b498b4(v3); // 0x19abae
    int64_t v5 = a5 & 0xffffffff; // 0x19abb3
    uint32_t v6 = (int32_t)a5 >> 31; // 0x19abb4
    *(int32_t *)v3 = __asm_insd((int16_t)v6);
    char * v7 = (char *)(v4 & 0xffffffff); // 0x19abb8
    *v7 = -*v7;
    char * v8 = (char *)(v5 - 0x17fe9e00); // 0x19abba
    *v8 = *v8 + (char)a5;
    int64_t v9; // 0x19ab95
    int64_t v10; // 0x19ab95
    *(int32_t *)v9 = *(int32_t *)&v9 + (int32_t)v10;
    int64_t v11 = v5; // 0x19abc4
    if ((char)(v4 / 256) + (char)(a5 / 256) < 1) {
        v11 = function_19ab5f();
    }
    int64_t v12 = v6; // 0x19abb4
    char * v13 = (char *)(v12 - 103 + v11); // 0x19abc6
    char v14 = v6; // 0x19abc6
    *v13 = *v13 + v14;
    unsigned char v15 = (char)v11; // 0x19abca
    unsigned char v16 = v15 + v14; // 0x19abca
    int64_t result = v11 & -256 | (int64_t)v16; // 0x19abca
    char * v17 = (char *)v12; // 0x19abcc
    *v17 = *v17 + (char)(v16 < v15) + (char)(v9 / 256);
    int32_t v18 = *(int32_t *)&v9 + (int32_t)result; // 0x19abd1
    *(int32_t *)v9 = v18;
    v9 = v9 & -256 | 95;
    if (v18 == 0) {
        // 0x19ab97
        return result;
    }
    int32_t * v19 = (int32_t *)(v12 - 0x2c59e539); // 0x19abde
    *v19 = *v19 + (int32_t)a2;
    unsigned char v20 = *(char *)(4 * a2 + v12); // 0x19abe6
    char * v21 = (char *)(v9 - 107); // 0x19abea
    char v22 = *v21; // 0x19abea
    *v21 = (char)(v20 > -1 - (char)(v11 / 256)) - (char)v9 + v22;
    return unknown_ffffffffdc8369f4(2 * v2 + v3);
}

// Address range: 0x19ac05 - 0x19ac24
int64_t function_19ac05(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6) {
    // 0x19ac05
    int64_t v1; // 0x19ac05
    char * v2 = (char *)(v1 + 0x1d0123f7); // 0x19ac05
    unsigned char v3 = *v2; // 0x19ac05
    unsigned char v4 = (char)a3; // 0x19ac05
    *v2 = v3 - v4;
    unknown_23b3c312();
    int64_t v5; // 0x19ac05
    int32_t v6 = *(int32_t *)&v5; // 0x19ac13
    *(int32_t *)a3 = (int32_t)(v3 < v4) + (int32_t)a1 + v6;
    int64_t v7; // 0x19ac05
    int64_t v8 = (int64_t)&v7; // 0x19ac15
    int64_t v9; // 0x19ac05
    *(int32_t *)a6 = *(int32_t *)&v9 + (int32_t)v1;
    bool v10; // 0x19ac05
    int32_t * v11 = (int32_t *)(a3 - 55 + 8 * ((v10 ? 0x1fffffffffffffff : 1) + a1)); // 0x19ac1c
    *v11 = *v11 + (int32_t)a4;
    return (v8 - a4 / 256) % 256 | v8 & -256;
}

// Address range: 0x19ac35 - 0x19ac37
int64_t function_19ac35(int64_t a1) {
    // 0x19ac35
    int64_t result; // 0x19ac35
    return result;
}

// Address range: 0x275241 - 0x275373
int64_t function_275241(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint32_t a6) {
    // 0x275241
    int64_t v1; // 0x275241
    return function_cf3c7(a1, a2, (int64_t)a6, a4, a5, v1, v1, 0x6a723942);
}

// Address range: 0x275373 - 0x275509
int64_t function_275373(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x275373
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 169, (int64_t)&g4);
}

// Address range: 0x275509 - 0x275673
int64_t function_275509(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x275509
    int64_t v1; // bp-32, 0x275509
    int64_t v2 = (int64_t)&v1; // 0x275554
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x275568
    int64_t * v4 = (int64_t *)v3; // 0x275569
    *v4 = 0xd12d43c;
    int64_t v5 = v2 - 16; // 0x275571
    int64_t * v6 = (int64_t *)v5; // 0x275571
    int64_t * v7 = (int64_t *)(v2 - 24); // 0x275579
    *v6 = v5;
    *v4 = *v6;
    int64_t v8 = *(int64_t *)(v2 + 32); // 0x275594
    *v4 = v8;
    *v6 = v8;
    *v7 = v8;
    int64_t * v9 = (int64_t *)(v2 + 16); // 0x2755a7
    int64_t v10 = *v9; // 0x2755a7
    *v4 = v10;
    *v6 = a3;
    *v7 = a6;
    int64_t * v11 = (int64_t *)(v2 - 32); // 0x2755c3
    *v11 = v10;
    int64_t v12 = *v6; // 0x2755e2
    *v6 = v2;
    *v11 = v8;
    v1 = *v6;
    *v11 = v10;
    *v9 = *v6;
    *v6 = *v4;
    *v7 = a1;
    *(int64_t *)(v2 - 40) = v12;
    *v7 = v3;
    int64_t v13 = *v4; // 0x275658
    *v6 = v13;
    *v7 = v13;
    return function_cf3c7(*v7, a2, v12, a4, a5, *v7, 0x273f0d, 169);
}

// Address range: 0x275673 - 0x2757ad
int64_t function_275673(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x275673
    bool v1; // 0x275673
    int64_t v2 = 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x275673
    int64_t v3; // bp-56, 0x275673
    v3 = (int64_t)&v3 + 16;
    return function_cf3c7(a1, a2, a3, v2, a5, a6, a2, v2);
}

// Address range: 0x2757ad - 0x2758da
int64_t function_2757ad(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2757ad
    int64_t v1; // bp-32, 0x2757ad
    int64_t v2 = (int64_t)&v1; // 0x275815
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x27581d
    int64_t * v4 = (int64_t *)v3; // 0x27581e
    *v4 = 0x685e2eaf;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x275826
    *v5 = 0x6d5d36c3;
    int64_t v6 = v2 - 24; // 0x27582b
    int64_t * v7 = (int64_t *)v6; // 0x275833
    int64_t v8 = *(int64_t *)(v2 + 24); // 0x275839
    *v5 = v8;
    *v7 = v8;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x275840
    *v9 = v8;
    int64_t v10 = *(int64_t *)(v2 + 8); // 0x27584c
    *v5 = 0x203b3d0;
    *v7 = 0x42142247;
    *v9 = v8;
    v1 = *v5;
    *v5 = a3;
    *v7 = v10;
    *(int64_t *)(v2 + 16) = v10;
    *v5 = *v4;
    *v7 = *v5;
    *v9 = v6;
    *v7 = v3;
    int64_t v11 = *v4; // 0x2758c6
    *v5 = v11;
    *v7 = v11;
    int64_t v12; // 0x2757ad
    return function_cf3c7(a1, 169, *v7, a4, v12, v12, v12, a2);
}

// Address range: 0x2758da - 0x275a72
int64_t function_2758da(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2758da
    int64_t v1; // bp-32, 0x2758da
    int64_t v2 = (int64_t)&v1; // 0x275936
    v1 = v2;
    int64_t v3 = v2 - 8; // 0x27594d
    *(int64_t *)v3 = 0xe6a450d;
    int64_t v4 = v2 - 16; // 0x275956
    int64_t * v5 = (int64_t *)v4; // 0x275956
    *v5 = 0x3b2fc590;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x275964
    *v6 = 0x44c0b201;
    int64_t v7 = *(int64_t *)(v2 + 24); // 0x27596a
    *v5 = v7;
    *v6 = a6;
    int64_t * v8 = (int64_t *)(v2 - 32); // 0x27597b
    *v6 = v3;
    *v6 = v1;
    *v8 = v1;
    int64_t * v9 = (int64_t *)(v2 - 40); // 0x2759d1
    *v9 = v4;
    int64_t * v10 = (int64_t *)(v2 - 48); // 0x2759d2
    *v8 = 0x6044a781;
    *v9 = 0x638ee142;
    *v10 = v7;
    *v5 = *v8;
    *v9 = 0x48061353;
    *v10 = *v8;
    v1 = *v8;
    *v8 = a3;
    *v10 = *v6;
    *v8 = v4;
    int64_t v11 = *v6; // 0x275a51
    *v8 = v11;
    *v9 = v11;
    return function_cf3c7(a1, a2, *v8, a4, a5, *v6, 0x271ddf, 86);
}

// Address range: 0x275a72 - 0x275a77
int64_t function_275a72(void) {
    // 0x275a72
    int64_t result; // 0x275a72
    return result;
}

// Address range: 0x275aee - 0x275af0
int64_t function_275aee(void) {
    // 0x275aee
    int64_t v1; // 0x275aee
    return function_275b46(v1, v1, v1, v1, v1);
}

// Address range: 0x275b06 - 0x275b08
int64_t function_275b06(int64_t a1) {
    // 0x275b06
    int64_t result; // 0x275b06
    return result;
}

// Address range: 0x275b13 - 0x275b14
int64_t function_275b13(void) {
    // 0x275b13
    int64_t result; // 0x275b13
    return result;
}

// Address range: 0x275b46 - 0x275bb0
int64_t function_275b46(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x275b46
    int64_t v1; // 0x275b46
    *(int32_t *)0x355a74b57a88140a = (int32_t)v1;
    __asm_in(-98);
    int32_t v2 = 0x10000 * (int32_t)unknown_39b3f057() >> 16; // 0x275b57
    __asm_int(121);
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    bool v3; // 0x275b46
    uint32_t v4 = (int32_t)a1 - (((int32_t)(a4 / 256) - (int32_t)v1 + (int32_t)v3 + v2) % 256 | v2 & -256); // 0x275b64
    uint64_t v5 = 0xffffffb3 * a4; // 0x275b66
    char * v6 = (char *)((int64_t)v4 + 80); // 0x275b6b
    *v6 = *v6 | (char)(v5 / 256);
    int64_t v7 = a3 & -0xff01 | (int64_t)&g3; // 0x275b6e
    int32_t * v8 = (int32_t *)((v5 & 0xffffffff) + 28); // 0x275b70
    int32_t v9 = v7; // 0x275b70
    *v8 = *v8 + v9;
    int32_t * v10 = (int32_t *)(v1 - 27); // 0x275b78
    uint32_t v11 = *v10; // 0x275b78
    uint32_t v12 = v11 + v9; // 0x275b78
    *v10 = v12;
    char * v13 = (char *)(v1 - 0x2b43ad8c); // 0x275b7b
    *v13 = *v13 + (char)(v1 / 256) + (char)(v12 < v11);
    int64_t v14; // 0x275b46
    *(char *)a2 = *(char *)&v14 ^ (char)a5;
    int64_t v15 = unknown_68493a8f(v4); // 0x275b89
    char * v16 = (char *)(a2 + (int64_t)&g1); // 0x275b8e
    *v16 = *v16 - 96;
    __asm_hlt();
    *(char *)((v15 & 0xffffffff) - 92) = -96 - (char)((int64_t)&g3 >> 8);
    int64_t v17 = unknown_21f89bfc(); // 0x275b9b
    char v18 = *(char *)(v7 + 0x68e0fb); // 0x275ba1
    int64_t v19 = v17 & -0x10000 | (int64_t)((256 * (int16_t)v17 >> 8) * (int16_t)v18); // 0x275ba1
    uint32_t v20 = (int32_t)v19; // 0x275baa
    int32_t v21 = v20 - 0xab75101; // 0x275baa
    return v19 & -0xff01 | 256 * (64 * (int64_t)(v21 == 0) | (int64_t)(v20 < 0xab75101) | 128 * (int64_t)(v21 < 0) | 16 * (int64_t)(v20 % 16 > 16) | 4 * (int64_t)(llvm_ctpop_i8((char)v21) % 2 == 0)) | 512;
}

// Address range: 0x275bb5 - 0x275bbf
int64_t function_275bb5(int64_t a1, int64_t a2) {
    // 0x275bb5
    unknown_622a2c1f(a1, a2);
    int64_t v1; // 0x275bb5
    return function_275be9(a1, a2, v1, v1);
}

// Address range: 0x275bcd - 0x275bd2
int64_t function_275bcd(void) {
    // 0x275bcd
    return function_8375c85();
}

// Address range: 0x275be9 - 0x275bee
int64_t function_275be9(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(4 * a3 + a4); // 0x275beb
    *v1 = *v1 & (int32_t)a4;
    int64_t result; // 0x275be9
    return result;
}

// Address range: 0x275c26 - 0x275c29
int64_t function_275c26(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x275c26
    int64_t result; // 0x275c26
    return result;
}
