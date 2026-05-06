/*
 * Targeted RetDec C for native executable gap queue batch 653.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x19c685-0x19c885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19c885-0x19ca85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19ca85-0x19cb85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19cc85-0x19ce85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19ce85-0x19d085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x321dbb-0x321ebb rank=- name=- kind=- bytes=- uncovered=-
 *   0x321ebb-0x3220bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3220bb-0x3222bb rank=- name=- kind=- bytes=- uncovered=-
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
typedef struct { uint8_t bytes[32]; } int256_t;
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
int64_t unknown_b6ccb9(void);
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
void __asm_clts(void);
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
int256_t __asm_vpcmpeqw(int256_t left, int256_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psadbw(int128_t left, int128_t right);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_vpunpckhdq(int128_t left, int128_t right);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
int128_t __asm_pmaxub(int128_t left, int128_t right);
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

int64_t function_19c685(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19c736(int64_t a1);
int64_t function_19c79a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19c79c(int64_t a1, int64_t a2);
int64_t function_19c7a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19c87d(void);
int64_t function_19c88e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19c8ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19c8d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19c8e7(void);
int64_t function_19c914(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19c92b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_19c979(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19c9e8(int64_t a1);
int64_t function_19c9f0(int32_t a1);
int64_t function_19ca06(void);
int64_t function_19ca0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19ca52(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19ca5e(void);
int64_t function_19ca61(void);
int64_t function_19ca70(int64_t a1);
int64_t function_19cafd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19cb3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19cc85(void);
int64_t function_19cc87(void);
int64_t function_19cc95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19ccd3(void);
int64_t function_19cd0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19cd15(void);
int64_t function_19cd4d(void);
int64_t function_19cd7c(void);
int64_t function_19cddb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19cdf2(int64_t a1, int64_t a2);
int64_t function_19ce3f(void);
int64_t function_19ce5c(void);
int64_t function_19ce7f(void);
int64_t function_19cecd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19cf40(void);
int64_t function_19cf5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19cf97(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19cfc1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19cfe1(void);
int64_t function_19d071(int64_t a1);
int64_t function_2021aa3();
int64_t function_2023e81();
int64_t function_321dbb(void);
int64_t function_321dcb(int64_t a1);
int64_t function_321de2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_321e54(void);
int64_t function_321e5f(int64_t a1);
int64_t function_321ecc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_321f0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_321f8f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_321fcb(int64_t a1);
int64_t function_32203b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_32204d(int64_t a1);
int64_t function_322077(int64_t a1);
int64_t function_3220e0(void);
int64_t function_322112(void);
int64_t function_322113(void);
int64_t function_322121(int64_t a1, int64_t a2);
int64_t function_32214e(void);
int64_t function_322150(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_322177(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32221c(void);
int64_t function_322239(int64_t a1);
int64_t function_32224a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_322270(void);
int64_t function_32228e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3222b1(int64_t a1, int64_t a2);
int64_t function_32230b();
int64_t function_41fb1da5();
int64_t function_6b1b0a1f();
int64_t function_72ec2806();
int64_t function_ae2cc50();
int64_t function_bf62c07();
int64_t function_ffffffff893cdaf8();
int64_t function_ffffffffbd6bcfa7();
int64_t function_ffffffffe1ff5cea();
int64_t function_fffffffff881807c();
int64_t unknown_19f14f3d();
int64_t unknown_1a73855d();
int64_t unknown_1c9ed06f();
int64_t unknown_3a1e5a30();
int64_t unknown_3a37d881();
int64_t unknown_3d3405f1();
int64_t unknown_3e09f39c();
int64_t unknown_431b061a();
int64_t unknown_77109d8();
int64_t unknown_79d0118f();
int64_t unknown_ffffffff80246d29();
int64_t unknown_ffffffffabcf1bf8();
int64_t unknown_ffffffffafcf2e18();
int64_t unknown_ffffffffb6a3498a();
int64_t unknown_ffffffffc4114a17();
int64_t unknown_fffffffff6f31a83();
int64_t unknown_fffffffffb562638();

// Address range: 0x19c685 - 0x19c698
int64_t function_19c685(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19c685
    int64_t v1; // 0x19c685
    int32_t * v2 = (int32_t *)(v1 - 48); // 0x19c685
    *v2 = *v2 + (int32_t)v1;
    uint64_t result = __asm_int1(); // 0x19c688
    char * v3 = (char *)(v1 + a4); // 0x19c68e
    *v3 = *v3 + (char)(result / 256);
    *(char *)0x5fc8c699 = *(char *)0x5fc8c699 + (char)(v1 / 256);
    return result;
}

// Address range: 0x19c736 - 0x19c73a
int64_t function_19c736(int64_t a1) {
    // 0x19c736
    int64_t v1; // 0x19c736
    return unknown_fffffffffb562638(a1, v1);
}

// Address range: 0x19c79a - 0x19c79c
int64_t function_19c79a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19c79a
    int64_t result; // 0x19c79a
    return result;
}

// Address range: 0x19c79c - 0x19c7a7
int64_t function_19c79c(int64_t a1, int64_t a2) {
    // 0x19c79c
    bool v1; // 0x19c79c
    int64_t v2 = v1 ? -1 : 1; // 0x19c7a1
    return unknown_fffffffffb562638(v2 + a1, v2 + a2);
}

// Address range: 0x19c7a8 - 0x19c7c1
int64_t function_19c7a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19c7a8
    *(char *)a4 = (char)a3;
    int64_t result = __asm_iretd(); // 0x19c7b7
    unsigned char v1 = *(char *)-0x670a8e41; // 0x19c7b8
    int64_t v2; // 0x19c7a8
    unsigned char v3 = v1 + (char)((uint64_t)v2 / 256); // 0x19c7b8
    *(char *)-0x670a8e41 = v3;
    int64_t v4; // 0x19c7a8
    int32_t v5 = *(int32_t *)&v4; // 0x19c7be
    *(int32_t *)a1 = v5 - (int32_t)result + (int32_t)(v3 < v1);
    return result;
}

// Address range: 0x19c87d - 0x19c88c
int64_t function_19c87d(void) {
    // 0x19c87d
    return unknown_fffffffff6f31a83() & -256 | (int64_t)*(char *)-0x765640a1b1c5d581;
}

// Address range: 0x19c88e - 0x19c8ab
int64_t function_19c88e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19c88e
    int64_t v1; // 0x19c88e
    *(int32_t *)a1 = 2 * (int32_t)v1;
    *(int32_t *)(a3 + 40) = (int32_t)v1;
    int64_t v2; // 0x19c88e
    *(int32_t *)v2 = *(int32_t *)&v2 ^ 0x991ab72;
    int32_t * v3 = (int32_t *)(a4 + 0x6b1c1fa0); // 0x19c899
    *v3 = *v3 - (int32_t)v2;
    uint32_t v4 = (int32_t)v2; // 0x19c8a2
    int32_t v5 = v4 - 0x2afe01; // 0x19c8a2
    return a1 & 0xffff00ff | 256 * (64 * (int64_t)(v5 == 0) | (int64_t)(v4 < 0x2afe01) | 128 * (int64_t)(v5 < 0) | 16 * (int64_t)(v4 % 16 > 16) | 4 * (int64_t)(llvm_ctpop_i8((char)v5) % 2 == 0)) | 512;
}

// Address range: 0x19c8ab - 0x19c8d3
int64_t function_19c8ab(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19c8ab
    int64_t v1; // 0x19c8ab
    __asm_out((int16_t)a3, (char)v1);
    *(int32_t *)0x1d925008680a50d6 = (int32_t)v1;
    *(char *)0x7eea7fc0 = *(char *)0x7eea7fc0 + (char)(v1 / 256);
    int32_t * v2 = (int32_t *)(4 * v1 - 82 + (v1 & 0x447af89b | v1 & 0xffffffff)); // 0x19c8c7
    *v2 = *v2 + (int32_t)a4;
    return function_19c8e7();
}

// Address range: 0x19c8d3 - 0x19c8e7
int64_t function_19c8d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)*(int32_t *)-0xe4fa26; // 0x19c8d3
    int64_t v2 = 5 * v1; // 0x19c8d3
    int64_t v3; // 0x19c8d3
    __asm_out_133((int16_t)a3, (int32_t)v3);
    bool v4; // 0x19c8d3
    uint32_t v5 = ((int32_t)(256 * (64 * (int64_t)v4 | 128 * (int64_t)v4 | 16 * (int64_t)v4 | 4 * (int64_t)v4 | (int64_t)(v2 != 0x500000000 * v1 >> 32)) | v3 & 0xffff00ff) | 512) - 0x2f447119; // 0x19c8dc
    int64_t v6 = v5; // 0x19c8e1
    if (a4 != 1 && v5 != 0) {
        v6 = function_19c914(a1, v2 & 0xffffffff, a3);
    }
    int64_t v7 = v6;
    return v7 & 0xffffff00 | v3 & 0xffffffff | (v7 + 46) % 256;
}

// Address range: 0x19c8e7 - 0x19c8f1
int64_t function_19c8e7(void) {
    // 0x19c8e7
    int64_t result; // 0x19c8e7
    return result;
}

// Address range: 0x19c914 - 0x19c928
int64_t function_19c914(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19c914
    unknown_431b061a();
    return unknown_ffffffff80246d29();
}

// Address range: 0x19c92b - 0x19c948
int64_t function_19c92b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x19c92b
    bool v1; // 0x19c92b
    unknown_19f14f3d((v1 ? -1 : 1) + a1);
    return (int64_t)*(int32_t *)-0x4efe171f244a04c4;
}

// Address range: 0x19c979 - 0x19c997
int64_t function_19c979(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2; // bp-8, 0x19c97a
    int64_t v2 = unknown_3a37d881(); // 0x19c97b
    int64_t v3; // 0x19c979
    int32_t * v4 = (int32_t *)(v3 - 24 + 4 * v3); // 0x19c982
    *v4 = *v4 + (int32_t)v3;
    int32_t * v5 = (int32_t *)v2; // 0x19c987
    *v5 = *v5 + (int32_t)(int64_t)&v1;
    int64_t v6; // 0x19c979
    uint32_t result = *(int32_t *)&v6 & (int32_t)v2; // 0x19c98a
    *(char *)-0x17725cd8 = *(char *)-0x17725cd8 | (char)result;
    return result;
}

// Address range: 0x19c9e8 - 0x19c9e9
int64_t function_19c9e8(int64_t a1) {
    // 0x19c9e8
    int64_t result; // 0x19c9e8
    return result;
}

// Address range: 0x19c9f0 - 0x19c9f3
int64_t function_19c9f0(int32_t a1) {
    // 0x19c9f0
    int64_t v1; // 0x19c9f0
    return v1 & 0xffffffff;
}

// Address range: 0x19ca06 - 0x19ca07
int64_t function_19ca06(void) {
    // 0x19ca06
    int64_t result; // 0x19ca06
    return result;
}

// Address range: 0x19ca0e - 0x19ca36
int64_t function_19ca0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = unknown_ffffffffc4114a17() & a4;
    uint32_t v2 = (int32_t)v1; // 0x19ca13
    int64_t result = v1 & 0xffffffff; // 0x19ca15
    int64_t v3 = a2; // 0x19ca15
    if (v2 >= 0) {
        int32_t * v4 = (int32_t *)(a4 - 10); // 0x19ca1a
        *v4 = *v4 + (int32_t)a3;
        char * v5 = (char *)(((v1 + 104 | 186) + 16 & 207 | v1 & 0xffffff00) + 69); // 0x19ca22
        *v5 = *v5 | (char)(v2 / 256);
        result = unknown_3a1e5a30();
        v3 = 0xf710f41b;
    }
    // 0x19ca2f
    int64_t v6; // 0x19ca0e
    int32_t * v7 = (int32_t *)(v6 - 122); // 0x19ca2f
    *v7 = *v7 + (int32_t)v3;
    int32_t * v8 = (int32_t *)(v6 - 23); // 0x19ca32
    *v8 = *v8 & (int32_t)a1;
    return result;
}

// Address range: 0x19ca52 - 0x19ca58
int64_t function_19ca52(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19ca52
    int64_t result; // 0x19ca52
    return result;
}

// Address range: 0x19ca5e - 0x19ca5f
int64_t function_19ca5e(void) {
    // 0x19ca5e
    int64_t v1; // 0x19ca5e
    return (int64_t)&v1;
}

// Address range: 0x19ca61 - 0x19ca66
int64_t function_19ca61(void) {
    // 0x19ca61
    return function_ffffffffe1ff5cea();
}

// Address range: 0x19ca70 - 0x19ca73
int64_t function_19ca70(int64_t a1) {
    // 0x19ca70
    int64_t result; // 0x19ca70
    return result;
}

// Address range: 0x19cafd - 0x19cb0b
int64_t function_19cafd(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19cafd
    int64_t v1; // 0x19cafd
    *(char *)a3 = (char)(v1 / 256 ^ v1);
    __asm_int(-102);
    return v1 & -256 | (int64_t)__asm_in(44);
}

// Address range: 0x19cb3f - 0x19cb55
int64_t function_19cb3f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19cb3f
    int64_t v1; // 0x19cb3f
    uint64_t v2 = (uint64_t)v1 / 256; // 0x19cb3f
    *(char *)a4 = (char)(v1 & v2);
    __writegsbyte(-0x26521b6, __readgsbyte(-0x26521b6) + (char)v2);
    return function_ae2cc50(v1 & 0xf1687d10 | 0xe9782ef);
}

// Address range: 0x19cc85 - 0x19cc86
int64_t function_19cc85(void) {
    // 0x19cc85
    int64_t result; // 0x19cc85
    return result;
}

// Address range: 0x19cc87 - 0x19cc8c
int64_t function_19cc87(void) {
    // 0x19cc87
    return function_2021aa3();
}

// Address range: 0x19cc95 - 0x19ccd1
int64_t function_19cc95(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19cc95
    int64_t v1; // 0x19cc95
    bool v2; // 0x19cc95
    *(int32_t *)a1 = 2 * (int32_t)v1 + (int32_t)v2;
    char v3 = v1 / 256; // 0x19cc97
    *(char *)0x64446c9e = *(char *)0x64446c9e + v3;
    int32_t * v4 = (int32_t *)(v1 + 0x51839a14); // 0x19ccb1
    *v4 = *v4 + (int32_t)v1;
    uint32_t result = *(int32_t *)0x3d00110af6059a37 - 0x3b904be2; // 0x19ccba
    __asm_out_134(-59, result);
    *(char *)0x8aa7bcd = *(char *)0x8aa7bcd + v3;
    return result;
}

// Address range: 0x19ccd3 - 0x19ccd4
int64_t function_19ccd3(void) {
    // 0x19ccd3
    int64_t result; // 0x19ccd3
    return result;
}

// Address range: 0x19cd0d - 0x19cd14
int64_t function_19cd0d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19cd0d
    return function_6b1b0a1f();
}

// Address range: 0x19cd15 - 0x19cd1d
int64_t function_19cd15(void) {
    // 0x19cd15
    int64_t result; // 0x19cd15
    return result;
}

// Address range: 0x19cd4d - 0x19cd4e
int64_t function_19cd4d(void) {
    // 0x19cd4d
    int64_t result; // 0x19cd4d
    return result;
}

// Address range: 0x19cd7c - 0x19cd7e
int64_t function_19cd7c(void) {
    // 0x19cd7c
    return function_19cd4d();
}

// Address range: 0x19cddb - 0x19cde4
int64_t function_19cddb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + (int64_t)&g1); // 0x19cddd
    *v1 = *v1 + (int32_t)a4;
    int64_t v2; // 0x19cddb
    return (v2 ^ v2) & 0xffffffff;
}

// Address range: 0x19cdf2 - 0x19cdff
int64_t function_19cdf2(int64_t a1, int64_t a2) {
    // 0x19cdf2
    unknown_ffffffffabcf1bf8(a1, a2);
    return function_2023e81(*(int32_t *)(a2 + 19) + (int32_t)a1);
}

// Address range: 0x19ce3f - 0x19ce40
int64_t function_19ce3f(void) {
    // 0x19ce3f
    int64_t result; // 0x19ce3f
    return result;
}

// Address range: 0x19ce5c - 0x19ce5e
int64_t function_19ce5c(void) {
    // 0x19ce5c
    return function_19ce3f();
}

// Address range: 0x19ce7f - 0x19ce84
int64_t function_19ce7f(void) {
    // 0x19ce7f
    return function_ffffffffbd6bcfa7();
}

// Address range: 0x19cecd - 0x19cee0
int64_t function_19cecd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19cecd
    unknown_1c9ed06f(a1, a2, a3, a4, a5);
    int64_t result = unknown_77109d8(); // 0x19ced2
    int32_t * v1 = (int32_t *)(a2 - 0x6175816b); // 0x19ced7
    *v1 = *v1 + (int32_t)a4;
    return result;
}

// Address range: 0x19cf40 - 0x19cf41
int64_t function_19cf40(void) {
    // 0x19cf40
    int64_t result; // 0x19cf40
    return result;
}

// Address range: 0x19cf5d - 0x19cf85
int64_t function_19cf5d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19cf5d
    int64_t v1; // 0x19cf5d
    int64_t v2 = v1;
    bool v3; // 0x19cf5d
    *(char *)v2 = (char)v2 + (char)a4 + (char)v3;
    return (int64_t)(*(int32_t *)(a4 - 91) + (int32_t)v2);
}

// Address range: 0x19cf97 - 0x19cf9c
int64_t function_19cf97(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19cf97
    return function_19cf40();
}

// Address range: 0x19cfc1 - 0x19cfd0
int64_t function_19cfc1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19cfc1
    int64_t v1; // 0x19cfc1
    __asm_out_133((int16_t)a3, (int32_t)v1);
    bool v2; // 0x19cfc1
    *(int32_t *)(a3 & 0xffffffff) = 0x80000000 * (int32_t)v2 | (int32_t)v1 / 2;
    return function_fffffffff881807c();
}

// Address range: 0x19cfe1 - 0x19cfe7
int64_t function_19cfe1(void) {
    // 0x19cfe1
    return function_bf62c07();
}

// Address range: 0x19d071 - 0x19d072
int64_t function_19d071(int64_t a1) {
    // 0x19d071
    int64_t result; // 0x19d071
    return result;
}

// Address range: 0x321dbb - 0x321dbc
int64_t function_321dbb(void) {
    // 0x321dbb
    int64_t result; // 0x321dbb
    return result;
}

// Address range: 0x321dcb - 0x321dce
int64_t function_321dcb(int64_t a1) {
    // 0x321dcb
    int64_t result; // 0x321dcb
    return result;
}

// Address range: 0x321de2 - 0x321e1c
int64_t function_321de2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x321de2
    int64_t v1; // 0x321de2
    int64_t v2 = v1;
    int32_t v3 = a1; // 0x321de2
    char * v4 = (char *)(a2 - 0x72c5e059); // 0x321de4
    *v4 = (char)(v3 % 2 != 0) - (char)v2 + *v4;
    int64_t v5; // 0x321de2
    __asm_outsb((int16_t)a3, *(char *)&v5);
    int64_t v6 = unknown_3d3405f1(); // 0x321deb
    int32_t v7 = (v3 >> 1) + (int32_t)v1; // 0x321df0
    int64_t v8; // 0x321de2
    *(int32_t *)a3 = *(int32_t *)&v8 + (int32_t)v6;
    int64_t v9; // 0x321de2
    int32_t * v10 = (int32_t *)(((v2 - (int64_t)&v9) % 256 | v2 & -256) + 0x699c8438); // 0x321e08
    *v10 = *v10 + v7;
    return unknown_ffffffffafcf2e18(v7) & -256 | (int64_t)__asm_in(-20);
}

// Address range: 0x321e54 - 0x321e56
int64_t function_321e54(void) {
    // 0x321e54
    int64_t v1; // 0x321e54
    return function_321ecc(v1, v1, v1, v1);
}

// Address range: 0x321e5f - 0x321e62
int64_t function_321e5f(int64_t a1) {
    // 0x321e5f
    int64_t result; // 0x321e5f
    return result;
}

// Address range: 0x321ecc - 0x321edb
int64_t function_321ecc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x321ecc
    int64_t v1; // 0x321ecc
    int64_t v2 = (v1 ^ 0x1aa681f0) + 0xfffe1762; // 0x321ed1
    unsigned char v3 = (char)a4; // 0x321ed6
    unsigned char v4 = *(char *)(v2 & 0xffffffff) + v3; // 0x321ed6
    char v5 = *(char *)((a4 & -256 | (int64_t)v4) + 35); // 0x321ed8
    return v2 & 0xffffff00 | (int64_t)((char)v2 - v5 + (char)(v4 < v3));
}

// Address range: 0x321f0e - 0x321f25
int64_t function_321f0e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x321f0e
    int64_t v1; // 0x321f0e
    *(int32_t *)0x480038d49fd45a93 = (int32_t)v1;
    __asm_in(58);
    return function_41fb1da5();
}

// Address range: 0x321f8f - 0x321fb9
int64_t function_321f8f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x321f8f
    int64_t v1; // 0x321f8f
    int64_t v2 = unknown_3e09f39c() + 2 * v1 & 0xffffffff; // 0x321f9d
    __asm_rcl(*(char *)v2);
    uint32_t v3 = (int32_t)a4 % 32; // 0x321fa5
    if (v3 != 0) {
        int32_t * v4 = (int32_t *)v2; // 0x321fa5
        uint32_t v5 = *v4; // 0x321fa5
        *v4 = v5 >> 32 - v3 | v5 << v3;
    }
    int64_t v6 = a3 + 0x353a51ad; // 0x321f9f
    int64_t v7 = a1 + 0xff94c54f; // 0x321fa8
    char * v8 = (char *)((v6 & 0xffffffff) - 0x7f9885a); // 0x321fad
    *v8 = *v8 + (char)v6;
    return (a4 / 256 + v7) % 256 | v7 & 0xffffff00;
}

// Address range: 0x321fcb - 0x321fcc
int64_t function_321fcb(int64_t a1) {
    // 0x321fcb
    int64_t result; // 0x321fcb
    return result;
}

// Address range: 0x32203b - 0x322046
int64_t function_32203b(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 + 0x140091b8); // 0x32203b
    int64_t v2; // 0x32203b
    *v1 = *v1 + (int32_t)v2;
    return function_72ec2806();
}

// Address range: 0x32204d - 0x322050
int64_t function_32204d(int64_t a1) {
    // 0x32204d
    int64_t result; // 0x32204d
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x322077 - 0x322078
int64_t function_322077(int64_t a1) {
    // 0x322077
    int64_t result; // 0x322077
    return result;
}

// Address range: 0x3220e0 - 0x3220e1
int64_t function_3220e0(void) {
    // 0x3220e0
    int64_t result; // 0x3220e0
    return result;
}

// Address range: 0x322112 - 0x322113
int64_t function_322112(void) {
    // 0x322112
    int64_t result; // 0x322112
    return result;
}

// Address range: 0x322113 - 0x322114
int64_t function_322113(void) {
    // 0x322113
    int64_t result; // 0x322113
    return result;
}

// Address range: 0x322121 - 0x322125
int64_t function_322121(int64_t a1, int64_t a2) {
    // 0x322121
    return __asm_int3(a1, a2);
}

// Address range: 0x32214e - 0x322150
int64_t function_32214e(void) {
    // 0x32214e
    int64_t v1; // 0x32214e
    return function_322177(v1, v1, v1, v1, (int64_t)&g2);
}

// Address range: 0x322150 - 0x322164
int64_t function_322150(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x322150
    int64_t v1; // 0x322150
    __asm_out_135(92, (char)v1);
    unknown_1a73855d();
    int32_t result = __asm_in_136((int16_t)a3); // 0x32215c
    *(int32_t *)a1 = 0;
    return result;
}

// Address range: 0x322177 - 0x322189
int64_t function_322177(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x322177
    *(char *)(5 * a2) = (char)a4;
    int64_t v1; // 0x322177
    __asm_wait(v1 & 0xffffffff);
    if (a4 != 1 && (char)v1 != 97) {
        function_322112();
    }
    // 0x322181
    return unknown_ffffffffb6a3498a();
}

// Address range: 0x32221c - 0x32221d
int64_t function_32221c(void) {
    // 0x32221c
    int64_t result; // 0x32221c
    return result;
}

// Address range: 0x322239 - 0x32224a
int64_t function_322239(int64_t a1) {
    // 0x322239
    bool v1; // 0x322239
    if (v1) {
        // 0x322249
        int64_t result; // 0x322239
        return result;
    }
    // 0x32223b
    return function_322270();
}

// Address range: 0x32224a - 0x32226a
int64_t function_32224a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t v1 = __asm_in_137(15); // 0x32224a
    *(int32_t *)a1 = v1;
    bool v2; // 0x32224a
    int64_t v3 = (v2 ? -4 : 4) + a1; // 0x32224c
    *(int32_t *)((int64_t)v1 + 54) = v1;
    char * v4 = (char *)(a4 + 0x13d0021); // 0x322256
    *v4 = -1 - *v4;
    unknown_79d0118f(v3);
    if ((a5 & 65) != 0) {
        function_32221c();
    }
    if ((a5 & 64) == 0) {
        function_3222b1(v3, a2);
    }
    // 0x322265
    return function_ffffffff893cdaf8();
}

// Address range: 0x322270 - 0x322275
int64_t function_322270(void) {
    // 0x322270
    int64_t result; // 0x322270
    return result;
}

// Address range: 0x32228e - 0x3222ad
int64_t function_32228e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a3 + 0x1e8aea5); // 0x32228f
    *v1 = *v1 >> 1;
    int32_t * v2 = (int32_t *)(a1 - 0x61fe173a); // 0x32229b
    int64_t v3; // 0x32228e
    int64_t v4; // 0x32228e
    *v2 = *v2 - (*(char *)&v3 > (char)v4 ? -0x17fec24f : -0x17fec250);
    int32_t * v5 = (int32_t *)(a4 - 2 + v4); // 0x3222a5
    *v5 = *v5 + (int32_t)v4;
    return function_32230b();
}

// Address range: 0x3222b1 - 0x3222bb
int64_t function_3222b1(int64_t a1, int64_t a2) {
    // 0x3222b1
    bool v1; // 0x3222b1
    return a1 + 0xe84b0db8 + a2 + (int64_t)(bool)v1 & 0xffffffff;
}
