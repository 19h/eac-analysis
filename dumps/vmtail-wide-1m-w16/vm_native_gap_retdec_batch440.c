/*
 * Targeted RetDec C for native executable gap queue batch 440.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x31d4bb-0x31d6bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31d8bb-0x31dabb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31dabb-0x31dcbb rank=- name=- kind=- bytes=- uncovered=-
 *   0x31dcbb-0x31debb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e4896-0x3e4a96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e4a96-0x3e4c96 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e4e96-0x3e5096 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e5096-0x3e5296 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_31d4bb(int64_t a1);
int64_t function_31d4e7(void);
int64_t function_31d55d(void);
int64_t function_31d57b(void);
int64_t function_31d58d(int64_t a1);
int64_t function_31d599(void);
int64_t function_31d5a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31d5dd(void);
int64_t function_31d605(void);
int64_t function_31d646(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_31d684(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31d693(int64_t a1, int64_t a2, int64_t a3);
int64_t function_31d8bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31d8e6(int64_t a1);
int64_t function_31d8e7(int64_t a1);
int64_t function_31d8ff(void);
int64_t function_31d914(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31d99d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_31d9c5(int64_t a1);
int64_t function_31d9f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31da64(int64_t a1);
int64_t function_31daa5(void);
int64_t function_31daf2(int64_t a1);
int64_t function_31dafd(int64_t a1);
int64_t function_31db1a(void);
int64_t function_31db8d(int64_t a1, int64_t a2);
int64_t function_31dbf6(int64_t a1);
int64_t function_31dc36(void);
int64_t function_31dc6b(int64_t a1);
int64_t function_31dcaf(int64_t a1, int64_t a2, int64_t a3);
int64_t function_31dcbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31dd72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_31dd7f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_31ddaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_31ddda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e488a();
int64_t function_3e4896(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3e48bd(void);
int64_t function_3e48d8(void);
int64_t function_3e48e5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e4923(void);
int64_t function_3e4971(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3e49c4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3e49f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e4a74(int64_t a1);
int64_t function_3e4aac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e4ac1(void);
int64_t function_3e4ae5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5);
int64_t function_3e4bda(void);
int64_t function_3e4c2a(void);
int64_t function_3e4c54(int64_t a1);
int64_t function_3e4c62(int64_t a1);
int64_t function_3e4e96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_3e507b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e50f8(void);
int64_t function_3e513b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3e5181(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3e518f(int64_t a1, int64_t a2);
int64_t function_3e51ab(int64_t a1);
int64_t function_3e5225(void);
int64_t function_3e5285(void);
int64_t function_416dc41a();
int64_t function_ffffffff803a996a();
int64_t function_ffffffff93804924();
int64_t function_ffffffffaf26e6e5();
int64_t function_ffffffffcae3c303();
int64_t unknown_12cb69f();
int64_t unknown_18d0c6b6();
int64_t unknown_21abcea();
int64_t unknown_3d741998();
int64_t unknown_3d9e47df();
int64_t unknown_52bc8de3();
int64_t unknown_56b41439();
int64_t unknown_6eb66ba7();
int64_t unknown_7c2cd5da();
int64_t unknown_ffffffff973c64cd();
int64_t unknown_ffffffffb3c81cd2();
int64_t unknown_ffffffffb4bf2f5c();
int64_t unknown_ffffffffb6253471();
int64_t unknown_ffffffffbeb78e4f();
int64_t unknown_ffffffffe8711363();
int64_t unknown_fffffffff13313b5();
int64_t unknown_fffffffff1479e6a();

// Address range: 0x31d4bb - 0x31d4bd
int64_t function_31d4bb(int64_t a1) {
    // 0x31d4bb
    int64_t result; // 0x31d4bb
    *(int32_t *)a1 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x31d4e7 - 0x31d4ec
int64_t function_31d4e7(void) {
    // 0x31d4e7
    return function_ffffffffaf26e6e5();
}

// Address range: 0x31d55d - 0x31d567
int64_t function_31d55d(void) {
    int64_t v1 = unknown_ffffffffe8711363(); // 0x31d55d
    return (v1 + 198) % 256 | v1 & -256;
}

// Address range: 0x31d57b - 0x31d57d
int64_t function_31d57b(void) {
    // 0x31d57b
    int64_t result; // 0x31d57b
    return result;
}

// Address range: 0x31d58d - 0x31d599
int64_t function_31d58d(int64_t a1) {
    // 0x31d58d
    int64_t v1; // 0x31d58d
    return function_31d5a4(a1, v1, v1, (int64_t)&g5);
}

// Address range: 0x31d599 - 0x31d5a4
int64_t function_31d599(void) {
    int64_t v1 = unknown_12cb69f(); // 0x31d59e
    bool v2; // 0x31d599
    if (v2) {
        v1 = function_31d5dd();
    }
    // 0x31d5a0
    int64_t v3; // 0x31d599
    return v1 + 2 * v3 & 0xffffffff;
}

// Address range: 0x31d5a4 - 0x31d5ad
int64_t function_31d5a4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31d5a4
    int64_t v1; // 0x31d5a4
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a3 - 0x44bcef31); // 0x31d5a4
    uint32_t v4 = *v3; // 0x31d5a4
    uint32_t v5 = v4 + (int32_t)v2; // 0x31d5a4
    *v3 = v5;
    return (v2 + (int64_t)(v5 < v4)) % 256 | v2 & -256;
}

// Address range: 0x31d5dd - 0x31d5e2
int64_t function_31d5dd(void) {
    // 0x31d5dd
    int64_t result; // 0x31d5dd
    return result;
}

// Address range: 0x31d605 - 0x31d606
int64_t function_31d605(void) {
    // 0x31d605
    int64_t result; // 0x31d605
    return result;
}

// Address range: 0x31d646 - 0x31d683
int64_t function_31d646(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x31d646
    int64_t v1; // 0x31d646
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(int32_t *)v3 = 2 * (int32_t)v3;
    int64_t v4; // 0x31d646
    uint64_t v5 = v4;
    *(char *)v5 = *(char *)&v4 | (char)(v5 / 256);
    char v6 = *(char *)&v4 & (char)a4; // 0x31d652
    *(char *)v4 = v6;
    int64_t v7; // 0x31d646
    if (v6 != 0) {
        v7 = function_31d605();
    }
    uint64_t v8 = v7;
    int64_t result = v8 & -256 | v8 + 37 & 151 | 104; // 0x31d65d
    char * v9 = (char *)result; // 0x31d661
    *v9 = *v9 + 61;
    int32_t * v10 = (int32_t *)(a1 - 0x41254f00); // 0x31d664
    *v10 = *v10 + (int32_t)v4;
    int32_t * v11 = (int32_t *)(v2 + 0x3401585f + 2 * v2); // 0x31d66b
    int32_t v12 = *v11 | (int32_t)a2; // 0x31d66b
    *v11 = v12;
    if (((v8 / 256 + a4) % 256 || a4 & -256) == 1 || v12 == 0) {
        // 0x31d674
        return result;
    }
    // 0x31d6b4
    return result;
}

// Address range: 0x31d684 - 0x31d693
int64_t function_31d684(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31d684
    int64_t result; // 0x31d684
    return result;
}

// Address range: 0x31d693 - 0x31d6b4
int64_t function_31d693(int64_t a1, int64_t a2, int64_t a3) {
    // 0x31d693
    int64_t v1; // 0x31d693
    *(char *)-0x2fea49a2914dfe18 = (char)v1;
    unknown_21abcea();
    return unknown_fffffffff13313b5();
}

// Address range: 0x31d8bb - 0x31d8e5
int64_t function_31d8bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x31d8bb
    int64_t v1; // 0x31d8bb
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    unknown_ffffffffb3c81cd2();
    char * v3 = (char *)(a3 + 0x1e8af35); // 0x31d8d1
    *v3 = *v3 + (char)((uint64_t)v1 / 256);
    int64_t result = unknown_3d9e47df(); // 0x31d8d8
    int32_t * v4 = (int32_t *)a5; // 0x31d8de
    *v4 = *v4 + (int32_t)a1;
    return result;
}

// Address range: 0x31d8e6 - 0x31d8e7
int64_t function_31d8e6(int64_t a1) {
    // 0x31d8e6
    int64_t result; // 0x31d8e6
    return result;
}

// Address range: 0x31d8e7 - 0x31d8ef
int64_t function_31d8e7(int64_t a1) {
    // 0x31d8e7
    int64_t v1; // 0x31d8e7
    return v1 + 0xc45efe18 & 0xffffffff;
}

// Address range: 0x31d8ff - 0x31d900
int64_t function_31d8ff(void) {
    // 0x31d8ff
    int64_t result; // 0x31d8ff
    return result;
}

// Address range: 0x31d914 - 0x31d945
int64_t function_31d914(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31d914
    int64_t v1; // 0x31d914
    int32_t * v2 = (int32_t *)(v1 + 0xe8d531db & 0xffffffff); // 0x31d920
    int32_t v3 = a3; // 0x31d920
    int32_t v4 = *v2 + v3; // 0x31d920
    int32_t v5 = v1; // 0x31d929
    int32_t v6 = v4 + v5; // 0x31d929
    *v2 = v6;
    if (((v6 ^ v4) & (v6 ^ v5)) >= 0) {
        function_31d8ff();
    }
    int64_t v7 = 0xe8a01531; // bp-8, 0x31d92d
    int64_t v8 = a4 & -0xff01 | (int64_t)&g1; // 0x31d92e
    int64_t result = unknown_56b41439(); // 0x31d932
    int32_t * v9 = (int32_t *)(v8 - 58); // 0x31d938
    *v9 = *v9 | -0x175d8b91;
    int32_t * v10 = (int32_t *)(a3 + 34); // 0x31d93f
    *v10 = *v10 + v3;
    int32_t * v11 = (int32_t *)v8; // 0x31d942
    *v11 = *v11 | (int32_t)(int64_t)&v7;
    return result;
}

// Address range: 0x31d99d - 0x31d9b8
int64_t function_31d99d(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(unknown_6eb66ba7() - 0x7b702e9d); // 0x31d9a9
    *v1 = 0x100000 * *v1;
    return unknown_18d0c6b6();
}

// Address range: 0x31d9c5 - 0x31d9c8
int64_t function_31d9c5(int64_t a1) {
    // 0x31d9c5
    int64_t result; // 0x31d9c5
    return result;
}

// Address range: 0x31d9f6 - 0x31d9f8
int64_t function_31d9f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31d9f6
    int64_t result; // 0x31d9f6
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x31da64 - 0x31da77
int64_t function_31da64(int64_t a1) {
    int64_t result = unknown_fffffffff1479e6a(a1); // 0x31da64
    int64_t v1; // 0x31da64
    int32_t * v2 = (int32_t *)(v1 - 0x7eff865f); // 0x31da69
    *v2 = -1 - *v2;
    return result;
}

// Address range: 0x31daa5 - 0x31daa6
int64_t function_31daa5(void) {
    // 0x31daa5
    int64_t result; // 0x31daa5
    return result;
}

// Address range: 0x31daf2 - 0x31daf8
int64_t function_31daf2(int64_t a1) {
    // 0x31daf2
    int64_t v1; // 0x31daf2
    return v1 & 0xffffffff;
}

// Address range: 0x31dafd - 0x31db00
int64_t function_31dafd(int64_t a1) {
    // 0x31dafd
    int64_t result; // 0x31dafd
    return result;
}

// Address range: 0x31db1a - 0x31db23
int64_t function_31db1a(void) {
    // 0x31db1a
    return function_31daa5();
}

// Address range: 0x31db8d - 0x31dbac
int64_t function_31db8d(int64_t a1, int64_t a2) {
    // 0x31db8d
    bool v1; // 0x31db8d
    bool v2 = v1;
    int64_t v3; // 0x31db8d
    int64_t v4 = unknown_3d741998() + v3; // 0x31db97
    int32_t * v5 = (int32_t *)(v3 + 4 * a2); // 0x31db99
    int32_t v6 = v4; // 0x31db99
    *v5 = *v5 + v6;
    char * v7 = (char *)((v4 & 0xffffffff) + (8 * v3 | 1)); // 0x31dba1
    *v7 = *v7 + (char)v3;
    *(int32_t *)a1 = v6;
    return function_ffffffff803a996a((v2 ? -4 : 4) + a1 + (v2 ? -1 : 1));
}

// Address range: 0x31dbf6 - 0x31dbf7
int64_t function_31dbf6(int64_t a1) {
    // 0x31dbf6
    int64_t result; // 0x31dbf6
    return result;
}

// Address range: 0x31dc36 - 0x31dc37
int64_t function_31dc36(void) {
    // 0x31dc36
    int64_t result; // 0x31dc36
    return result;
}

// Address range: 0x31dc6b - 0x31dc71
int64_t function_31dc6b(int64_t a1) {
    // 0x31dc6b
    return unknown_ffffffffb6253471(a1);
}

// Address range: 0x31dcaf - 0x31dcb4
int64_t function_31dcaf(int64_t a1, int64_t a2, int64_t a3) {
    // 0x31dcaf
    int64_t v1; // 0x31dcaf
    int64_t result = v1 & -256 | (int64_t)__asm_in((int16_t)a3); // 0x31dcb2
    bool v2; // 0x31dcaf
    if (v2) {
        result = function_31dc36();
    }
    // 0x31dcb4
    return result;
}

// Address range: 0x31dcbe - 0x31dce1
int64_t function_31dcbe(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31dcbe
    int64_t v1; // 0x31dcbe
    *(char *)-0x419bffc7409cba5f = (char)v1;
    unknown_ffffffff973c64cd();
    *(char *)a1 = (char)v1;
    bool v2; // 0x31dcbe
    int64_t v3 = v2 ? -1 : 1; // 0x31dccc
    float80_t v4; // 0x31dcbe
    return unknown_7c2cd5da(v3 + a1, v3 + a2) + (v4 < v4 ? 0x616951b1 : 0x616951b0) & 0xffffffff;
}

// Address range: 0x31dd72 - 0x31dd7f
int64_t function_31dd72(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x31dd72
    int64_t result; // 0x31dd72
    *(int16_t *)&g2 = (int16_t)result;
    return result;
}

// Address range: 0x31dd7f - 0x31ddad
int64_t function_31dd7f(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3;
    int64_t v2; // 0x31dd7f
    unsigned char v3 = (char)v2; // 0x31dd8a
    unsigned char v4 = *(char *)(4 * v2 + 48 + v2) + v3; // 0x31dd8a
    int64_t result = v2 & -256 | (int64_t)v4; // 0x31dd8a
    if (v4 < v3) {
        // 0x31dda8
        return result;
    }
    char * v5 = (char *)result; // 0x31dd97
    *v5 = *v5 + v4;
    int32_t * v6 = (int32_t *)result; // 0x31dd9a
    *v6 = *v6 + (int32_t)result;
    *(char *)-0x324a885d = *(char *)-0x324a885d + (char)(v2 / 256);
    *(char *)v1 = *(char *)&v1 & v4;
    return result;
}

// Address range: 0x31ddaf - 0x31ddb4
int64_t function_31ddaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x31ddaf
    int64_t result; // 0x31ddaf
    return result;
}

// Address range: 0x31ddda - 0x31de5b
int64_t function_31ddda(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x31ddda
    if (llvm_ctpop_i8(0) % 2 == 0) {
        // 0x31dddd
        bool v1; // 0x31ddda
        return unknown_52bc8de3((v1 ? -4 : 4) + a1);
    }
    // 0x31de41
    int64_t v2; // 0x31ddda
    __asm_outsd((int16_t)v2 + (int16_t)a3, (int32_t)v2);
    unknown_ffffffffbeb78e4f();
    return unknown_ffffffffb4bf2f5c();
}

// Address range: 0x3e4896 - 0x3e48b4
int64_t function_3e4896(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int16_t v1 = a3; // 0x3e4896
    int64_t v2; // 0x3e4896
    __asm_out(v1, (int32_t)v2);
    __asm_outsb(v1, (char)v2);
    char * v3 = (char *)(v2 - 11); // 0x3e48a2
    *v3 = *v3 - (char)(a4 / 256);
    __asm_int(-50);
    char * v4 = (char *)(v2 + 17); // 0x3e48ae
    char v5 = *v4 & (char)(v2 / 256); // 0x3e48ae
    *v4 = v5;
    int64_t v6; // 0x3e4896
    int64_t result = (int64_t)*(int32_t *)&v6; // 0x3e48b1
    if (v5 >= 0) {
        result = function_3e488a();
    }
    // 0x3e48b3
    return result;
}

// Address range: 0x3e48bd - 0x3e48be
int64_t function_3e48bd(void) {
    // 0x3e48bd
    int64_t result; // 0x3e48bd
    return result;
}

// Address range: 0x3e48d8 - 0x3e48dd
int64_t function_3e48d8(void) {
    // 0x3e48d8
    return function_ffffffff93804924();
}

// Address range: 0x3e48e5 - 0x3e48e9
int64_t function_3e48e5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e48e5
    return a2 & 0xffffffff;
}

// Address range: 0x3e4923 - 0x3e4924
int64_t function_3e4923(void) {
    // 0x3e4923
    int64_t result; // 0x3e4923
    return result;
}

// Address range: 0x3e4971 - 0x3e497f
int64_t function_3e4971(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x3e4971
    bool v1; // 0x3e4971
    bool v2 = v1;
    int64_t result; // 0x3e4971
    if (a4 == 0) {
        result = function_3e4923();
    }
    unsigned char v3 = (char)a1;
    char v4 = v2; // 0x3e4973
    unsigned char v5 = v4 + (char)a3; // 0x3e4973
    char v6 = v3 - v5; // 0x3e4973
    bool v7 = v2 ? v5 != -1 | v6 - v4 > v3 : v5 > v3; // 0x3e4973
    *(char *)a1 = v6;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v8; // 0x3e4971
    char v9 = *(char *)&v8; // 0x3e4976
    *(char *)v8 = (char)v7 - (char)(a4 / 256) + v9;
    return result;
}

// Address range: 0x3e49c4 - 0x3e49c8
int64_t function_3e49c4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3e49c4
    int64_t result; // 0x3e49c4
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x3e49f5 - 0x3e4a73
int64_t function_3e49f5(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = *(int32_t *)(4 * a1 + a3); // 0x3e49fb
    int64_t v2; // 0x3e49f5
    return v1 & ((int32_t)v2 & -0xff01 ^ 92 | (int32_t)&g4);
}

// Address range: 0x3e4a74 - 0x3e4a77
int64_t function_3e4a74(int64_t a1) {
    // 0x3e4a74
    int64_t result; // 0x3e4a74
    int64_t v1 = result;
    *(char *)v1 = (char)result + (char)v1;
    return result;
}

// Address range: 0x3e4aac - 0x3e4ab7
int64_t function_3e4aac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e4aac
    return a4 + 0xffffffff & 0xffffffff;
}

// Address range: 0x3e4ac1 - 0x3e4ac2
int64_t function_3e4ac1(void) {
    // 0x3e4ac1
    int64_t result; // 0x3e4ac1
    return result;
}

// Address range: 0x3e4ae5 - 0x3e4b85
int64_t function_3e4ae5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5) {
    // 0x3e4ae5
    float80_t v1; // 0x3e4ae5
    float80_t v2 = v1;
    __asm_int(-123);
    unsigned char v3 = *(char *)-0x1ecbb77733f59dfd; // 0x3e4b0e
    int64_t v4; // 0x3e4ae5
    int64_t result = v4 & -256 | (int64_t)v3; // 0x3e4b0e
    __asm_out_134(4, v3);
    *(char *)0xc09112cf = v3;
    __asm_out_135(31, (int32_t)result);
    *(char *)-0x77a89eb2e340f0f4 = v3;
    if (v2 != v2 || 0.0L != 0.0L) {
        // 0x3e4b60
        return result;
    }
    unsigned char v5 = *(char *)(v4 + 0x1ccaf64c) ^ -62; // 0x3e4b35
    if (v5 < 0) {
        char v6 = v5 + 6;
        int64_t result2 = (int64_t)v6 | 0x945f2900; // 0x3e4b75
        if (v5 > 249) {
            // 0x3e4b7e
            int64_t v7; // 0x3e4ae5
            return result2 & -256 | (int64_t)(*(char *)(v7 + 98) + v6);
        }
        // 0x3e4b60
        return result2;
    }
    int64_t result3 = (int64_t)v5 | 0x945f2900; // 0x3e4b3d
    if (a5 == 0) {
        result3 = function_3e4ac1();
    }
    char * v8 = (char *)(a5 - 0x5fddcb51); // 0x3e4b3f
    char v9 = result3;
    *v8 = *v8 & v9;
    int64_t v10; // 0x3e4ae5
    unsigned char v11 = *(char *)&v10 + (char)(a5 / 256); // 0x3e4b48
    *(char *)v10 = v11;
    *(char *)0x7611d7f8741c504c = v9;
    int64_t v12 = v10 & -0xff01 | (int64_t)"tdi2"; // 0x3e4b59
    v10 = v12;
    if (v11 <= 0) {
        // 0x3e4b7e
        return result3 & -256 | (int64_t)(*(char *)(v12 + 98) + v9);
    }
    // 0x3e4b60
    return result3;
}

// Address range: 0x3e4bda - 0x3e4bdd
int64_t function_3e4bda(void) {
    // 0x3e4bda
    int64_t result; // 0x3e4bda
    return result;
}

// Address range: 0x3e4c2a - 0x3e4c30
int64_t function_3e4c2a(void) {
    // 0x3e4c2a
    int64_t result; // 0x3e4c2a
    int64_t v1 = result;
    __asm_int(14);
    *(char *)v1 = (char)(result | v1);
    return result;
}

// Address range: 0x3e4c54 - 0x3e4c57
int64_t function_3e4c54(int64_t a1) {
    // 0x3e4c54
    int64_t result; // 0x3e4c54
    return result;
}

// Address range: 0x3e4c62 - 0x3e4c65
int64_t function_3e4c62(int64_t a1) {
    // 0x3e4c62
    int64_t result; // 0x3e4c62
    return result;
}

// Address range: 0x3e4e96 - 0x3e5077
int64_t function_3e4e96(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x3e4e96
    bool v1; // 0x3e4e96
    if (v1 || v1) {
        // 0x3e4e98
        int64_t result; // 0x3e4e96
        return result;
    }
    // 0x3e4f58
    int64_t v2; // 0x3e4e96
    int32_t result2 = (int32_t)v2 ^ 0x2f593375; // 0x3e4f58
    if (result2 >= 0) {
        // 0x3e4e98
        return result2;
    }
    // 0x3e4fb8
    *(char *)a1 = (char)result2;
    return function_ffffffffcae3c303((v1 ? -1 : 1) + a1);
}

// Address range: 0x3e507b - 0x3e5092
int64_t function_3e507b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e507b
    int64_t v1; // 0x3e507b
    return v1 & 0xa64c7cf7 | 0x59b38308;
}

// Address range: 0x3e50f8 - 0x3e50fb
int64_t function_3e50f8(void) {
    // 0x3e50f8
    int64_t v1; // 0x3e50f8
    __asm_fbld(*(float80_t *)&v1);
    int64_t result; // 0x3e50f8
    return result;
}

// Address range: 0x3e513b - 0x3e513d
int64_t function_3e513b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3e513b
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x3e513b
    return result;
}

// Address range: 0x3e5181 - 0x3e518f
int64_t function_3e5181(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3e5181
    int64_t v1; // 0x3e5181
    int64_t v2 = v1;
    float80_t v3; // 0x3e5181
    *(float64_t *)a3 = (float64_t)v3;
    int32_t v4; // 0x3e5181
    *(int32_t *)a1 = (int32_t)(int64_t)&v4;
    return (v2 + 115) % 256 | v2 & -256;
}

// Address range: 0x3e518f - 0x3e51ab
int64_t function_3e518f(int64_t a1, int64_t a2) {
    // 0x3e518f
    int64_t v1; // 0x3e518f
    uint64_t v2 = v1 + 0xc204337; // 0x3e518f
    unsigned char v3 = *(char *)(v2 % 256 + v1); // 0x3e5194
    int32_t * v4 = (int32_t *)(3 * (v2 & 0xffffff00 | (int64_t)v3)); // 0x3e5195
    uint32_t v5 = *v4; // 0x3e5195
    *v4 = v5 - 113;
    char * v6 = (char *)(v1 + 71); // 0x3e519a
    *v6 = *v6 - 84 + (char)(v5 > 112);
    int64_t v7 = __asm_wait(); // 0x3e519e
    return (v7 + 17) % 256 | v7 & -256;
}

// Address range: 0x3e51ab - 0x3e51b0
int64_t function_3e51ab(int64_t a1) {
    // 0x3e51ab
    int64_t result; // 0x3e51ab
    *(char *)a1 = (char)result;
    return result;
}

// Address range: 0x3e5225 - 0x3e5228
int64_t function_3e5225(void) {
    // 0x3e5225
    int64_t result; // 0x3e5225
    return result;
}

// Address range: 0x3e5285 - 0x3e528d
int64_t function_3e5285(void) {
    // 0x3e5285
    return function_416dc41a();
}
