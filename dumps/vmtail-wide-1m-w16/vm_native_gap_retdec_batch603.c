/*
 * Targeted RetDec C for native executable gap queue batch 603.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x201634-0x201834 rank=- name=- kind=- bytes=- uncovered=-
 *   0x201834-0x201a34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x201a34-0x201c34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3212bb-0x3214bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3214bb-0x3216bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3216bb-0x3218bb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3218bb-0x321abb rank=- name=- kind=- bytes=- uncovered=-
 *   0x321abb-0x321cbb rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_201634(void);
int64_t function_201654(void);
int64_t function_201657(int64_t a1);
int64_t function_20165d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_201728(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_20182e(int64_t a1);
int64_t function_201840(void);
int64_t function_201845(int64_t a1, int64_t a2, int64_t a3);
int64_t function_20184d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_201855(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_201901(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2019b0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2019fb(int64_t a1, int64_t a2, int64_t a3);
int64_t function_201aac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_201ae6(void);
int64_t function_201b32(void);
int64_t function_201b41(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_201ba5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_201c2c(int64_t a1);
int64_t function_2088fd1();
int64_t function_303358e1();
int64_t function_3212bb(int64_t a1, int64_t a2);
int64_t function_321338(void);
int64_t function_32138b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_3213e6(void);
int64_t function_321412(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3214fb(void);
int64_t function_321530(void);
int64_t function_321542(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_321576(void);
int64_t function_321578(void);
int64_t function_32159b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3215f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_321635(int64_t a1);
int64_t function_32163b(void);
int64_t function_321678(void);
int64_t function_3216d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3217ef(int64_t a1);
int64_t function_3217f2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3218e7(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3218ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32192e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_32198f(void);
int64_t function_3219b2(void);
int64_t function_3219f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_321a9a(int64_t a1);
int64_t function_321b59(int64_t a1);
int64_t function_321b8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_321bae(int64_t a1, int64_t a2, int64_t a3);
int64_t function_321bf1(int64_t a1);
int64_t function_321bff(int64_t a1);
int64_t function_321c12(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffffe8399ea4();
int64_t function_fffffffff4ce2f97();
int64_t unknown_109af062();
int64_t unknown_1ae427fc();
int64_t unknown_54578401();
int64_t unknown_687ecd6d();
int64_t unknown_7416646b();
int64_t unknown_7c8b205e();
int64_t unknown_ffffffff8b9d1584();
int64_t unknown_ffffffffaa77b565();
int64_t unknown_ffffffffac201934();
int64_t unknown_ffffffffc48ae06e();
int64_t unknown_ffffffffd2612e27();
int64_t unknown_ffffffffd91287a0();
int64_t unknown_ffffffffd9df1978();

// Address range: 0x201634 - 0x20163a
int64_t function_201634(void) {
    // 0x201634
    int64_t v1; // 0x201634
    return __asm_sti(v1);
}

// Address range: 0x201654 - 0x201656
int64_t function_201654(void) {
    // 0x201654
    int64_t v1; // 0x201654
    return function_20165d(v1, v1, v1, v1);
}

// Address range: 0x201657 - 0x20165d
int64_t function_201657(int64_t a1) {
    // 0x201657
    int64_t v1; // 0x201657
    return v1 + 0x1db80107 & 0xffffffff;
}

// Address range: 0x20165d - 0x2016a5
int64_t function_20165d(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x20165d
    int64_t v1; // 0x20165d
    unsigned char v2 = (char)v1;
    unsigned char v3 = v2 + (char)(a3 / 256); // 0x201669
    *(char *)v1 = v3;
    int32_t v4 = a1; // 0x20166b
    int64_t v5; // 0x20165d
    *(int32_t *)a3 = (int32_t)(v3 < v2) - v4 + *(int32_t *)&v5;
    int64_t * v6 = (int64_t *)((v1 + a2 & 0xffffffff) - 8); // 0x20166d
    *v6 = a2;
    int32_t * v7 = (int32_t *)(v1 - 0x5dbdd5f9); // 0x201670
    *v7 = *v7 + (int32_t)a3;
    int32_t v8 = *(int32_t *)(a1 + 87) + v4; // 0x20167b
    unknown_ffffffff8b9d1584(v8);
    int32_t * v9 = (int32_t *)(a3 + 69); // 0x201683
    *v9 = *v9 + v8;
    bool v10; // 0x20165d
    int32_t * v11 = (int32_t *)(a2 + 6 + (v10 ? -4 : 4)); // 0x201687
    *v11 = *v11 & -0x17afad55;
    *(char *)a3 = *(char *)&v5 | (char)(v1 / 256);
    int32_t * v12 = (int32_t *)(8 * a3 - 0x3449d997 + v1); // 0x201692
    *v12 = *v12 | (int32_t)v1;
    int64_t result = unknown_ffffffffd91287a0(); // 0x20169a
    char * v13 = (char *)(*v6 + 0x4f310e62); // 0x20169f
    *v13 = *v13 + (char)result;
    return result;
}

// Address range: 0x201728 - 0x201825
int64_t function_201728(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x201728
    int64_t v1; // 0x201728
    int64_t v2 = v1;
    *(int32_t *)-0x173061ca = *(int32_t *)-0x173061ca + (int32_t)a1;
    __asm_out(-24, (char)v2 + 62 + (char)v1);
    int32_t * v3 = (int32_t *)(8 * v1 - 0x7bf9f7f0); // 0x20173c
    int32_t v4 = a3; // 0x20173c
    *v3 = *v3 + v4;
    uint64_t v5 = v1 + a4; // 0x201743
    int64_t v6 = unknown_ffffffffac201934(); // 0x201747
    int64_t v7 = (v6 + v5 / 256) % 256 | v6 & -256; // 0x201750
    *(int32_t *)-0x67d93449 = *(int32_t *)-0x67d93449 + v4;
    *(int32_t *)(a3 + 58 + v7) = (int32_t)v7;
    *(char *)a1 = (char)unknown_109af062();
    bool v8; // 0x201728
    int64_t v9 = (v8 ? -1 : 1) + a1; // 0x201766
    int32_t v10 = (int32_t)unknown_687ecd6d(v9) < 0x9594ccb4 ? 0x5706ac7 : 0x5706ac6; // 0x201777
    int32_t v11 = (int32_t)unknown_ffffffffd9df1978() - v10; // 0x201777
    char v12 = v11; // 0x201777
    int64_t result = v11; // 0x201777
    if (llvm_ctpop_i8(v12) % 2 != 0) {
        // 0x20177e
        return result;
    }
    int32_t v13 = (int32_t)v5 + (int32_t)a2; // 0x2017d6
    if (v13 >= 0) {
        char * v14 = (char *)(v2 - 24 + 8 * v2); // 0x201790
        *v14 = *v14 | (char)(a3 / 256);
        int32_t * v15 = (int32_t *)(a2 + 0x3aa60fd2); // 0x201794
        uint32_t v16 = *v15; // 0x201794
        uint32_t v17 = v16 + v11; // 0x201794
        *v15 = v17;
        int32_t * v18 = (int32_t *)(result - 98); // 0x20179a
        *v18 = *v18 - v13 + (int32_t)(v17 < v16);
        return result;
    }
    char * v19 = (char *)result; // 0x2017da
    *v19 = (*v19 & v12) + 48;
    int32_t * v20 = (int32_t *)(int64_t)v13; // 0x2017e0
    *v20 = *v20 + 1;
    int32_t * v21 = (int32_t *)(v2 - 0x62ffc000); // 0x2017e4
    int64_t v22; // bp-8, 0x201728
    *v21 = *v21 + (int32_t)(int64_t)&v22;
    int64_t v23 = v9 + (v8 ? -4 : 4); // 0x2017ea
    char * v24 = (char *)v23; // 0x2017ec
    *v24 = *v24 + (char)v1;
    *(int32_t *)v23 = __asm_insd((int16_t)(v11 >> 31));
    return unknown_1ae427fc();
}

// Address range: 0x20182e - 0x201831
int64_t function_20182e(int64_t a1) {
    // 0x20182e
    int64_t result; // 0x20182e
    return result;
}

// Address range: 0x201840 - 0x201843
int64_t function_201840(void) {
    // 0x201840
    int64_t result; // 0x201840
    return result;
}

// Address range: 0x201845 - 0x201849
int64_t function_201845(int64_t a1, int64_t a2, int64_t a3) {
    // 0x201845
    int64_t v1; // 0x201845
    return v1 & -256 | (int64_t)__asm_in(-8);
}

// Address range: 0x20184d - 0x201851
int64_t function_20184d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x20184d
    return a2 & 0xffffffff;
}

// Address range: 0x201855 - 0x201865
int64_t function_201855(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 0x605ec498); // 0x201855
    unsigned char v2 = *v1; // 0x201855
    unsigned char v3 = v2 + (char)a3; // 0x201855
    *v1 = v3;
    int64_t v4; // 0x201855
    int32_t v5 = *(int32_t *)&v4; // 0x20185b
    int64_t v6; // 0x201855
    *(int32_t *)a2 = v5 + (int32_t)v6 + (int32_t)(v3 < v2);
    return unknown_ffffffffaa77b565();
}

// Address range: 0x201901 - 0x201906
int64_t function_201901(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x201901
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x201901
    return result;
}

// Address range: 0x2019b0 - 0x2019b2
int64_t function_2019b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2019b0
    int64_t result; // 0x2019b0
    return result;
}

// Address range: 0x2019fb - 0x201a10
int64_t function_2019fb(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2019fb
    int64_t v1; // 0x2019fb
    *(int32_t *)(a3 + 100) = (int32_t)v1;
    return v1 & -256 | (int64_t)*(char *)-0x35fec2fff5fff7fc;
}

// Address range: 0x201aac - 0x201ac8
int64_t function_201aac(int64_t a1, int64_t a2, int64_t a3) {
    // 0x201aac
    int64_t v1; // 0x201aac
    *(char *)a1 = (char)v1 - 124;
    return function_2088fd1();
}

// Address range: 0x201ae6 - 0x201ae7
int64_t function_201ae6(void) {
    // 0x201ae6
    int64_t result; // 0x201ae6
    return result;
}

// Address range: 0x201b32 - 0x201b33
int64_t function_201b32(void) {
    // 0x201b32
    int64_t result; // 0x201b32
    return result;
}

// Address range: 0x201b41 - 0x201b6f
int64_t function_201b41(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t v3; // 0x201b41
    if (*(char *)(v3 + 0xe0028f4) < (char)__asm_wait()) {
        function_201b32();
    }
    int32_t * v4 = (int32_t *)(a2 + 90); // 0x201b4a
    *v4 = *v4 + (int32_t)v3;
    unknown_7c8b205e();
    __asm_wait();
    char v5 = *(char *)&v1; // 0x201b5f
    char v6 = *(char *)&v2; // 0x201b5f
    v2++;
    v1++;
    if (a4 != 1 == v5 == v6) {
        function_201ae6();
    }
    // 0x201b63
    return unknown_7416646b();
}

// Address range: 0x201ba5 - 0x201c13
int64_t function_201ba5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a5 - 0x41cb3530); // 0x201bf5
    int64_t v2; // 0x201ba5
    *v1 = *v1 + (int32_t)v2;
    int64_t result = unknown_54578401(); // 0x201bfb
    *(int32_t *)-0x17ddfbf9 = *(int32_t *)-0x17ddfbf9 >> 1;
    int32_t * v3 = (int32_t *)(a3 - 0x62c1ef2b); // 0x201c06
    *v3 = *v3 + (int32_t)a4;
    return result;
}

// Address range: 0x201c2c - 0x201c2f
int64_t function_201c2c(int64_t a1) {
    // 0x201c2c
    int64_t result; // 0x201c2c
    return result;
}

// Address range: 0x3212bb - 0x3212c9
int64_t function_3212bb(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 - 0x355bce5e); // 0x3212bb
    *v1 = *v1 | (int32_t)a1;
    char v2 = *(char *)0x58d091ca; // 0x3212c3
    int64_t result; // 0x3212bb
    *(char *)0x58d091ca = v2 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x321338 - 0x32133b
int64_t function_321338(void) {
    // 0x321338
    int64_t result; // 0x321338
    return result;
}

// Address range: 0x32138b - 0x321390
int64_t function_32138b(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x32138b
    int64_t result; // 0x32138b
    *(char *)a4 = (char)(result & a4 / 256);
    return result;
}

// Address range: 0x3213e6 - 0x3213e7
int64_t function_3213e6(void) {
    // 0x3213e6
    int64_t result; // 0x3213e6
    return result;
}

// Address range: 0x321412 - 0x321425
int64_t function_321412(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x321412
    int64_t v1; // 0x321412
    __asm_outsb((int16_t)a3, (char)v1);
    int64_t v2; // 0x321412
    if (a4 == 0) {
        v2 = function_3213e6();
    }
    // 0x321418
    *(char *)a1 = __asm_insb((int16_t)((int32_t)v2 >> 31));
    *(char *)-0x7d289df = *(char *)-0x7d289df + (char)(v1 / 256);
    return function_fffffffff4ce2f97();
}

// Address range: 0x3214fb - 0x321501
int64_t function_3214fb(void) {
    // 0x3214fb
    int64_t result; // 0x3214fb
    return result;
}

// Address range: 0x321530 - 0x321531
int64_t function_321530(void) {
    // 0x321530
    int64_t result; // 0x321530
    return result;
}

// Address range: 0x321542 - 0x321559
int64_t function_321542(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x321542
    int64_t v1; // 0x321542
    int64_t result = v1 & -256 | (int64_t)*(char *)0x68f6477dd6351e2c; // 0x321542
    char * v2 = (char *)result; // 0x32154b
    *v2 = *v2 + (char)(a3 / 256);
    int64_t v3; // 0x321542
    *(int32_t *)a6 = *(int32_t *)&v3 + (int32_t)result;
    return result;
}

// Address range: 0x321576 - 0x321577
int64_t function_321576(void) {
    // 0x321576
    int64_t result; // 0x321576
    return result;
}

// Address range: 0x321578 - 0x32157d
int64_t function_321578(void) {
    // 0x321578
    return function_321530();
}

// Address range: 0x32159b - 0x3215f0
int64_t function_32159b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3 = a1;
    uint32_t v4 = *(int32_t *)(a2 - 0x797d030); // 0x32159b
    int64_t v5; // 0x32159b
    int64_t v6 = (v5 & 0xffffffff | 0x100000000 * a3) / (int64_t)v4 & 0xffffffff; // 0x3215a1
    bool v7; // 0x32159b
    if (v7 || false) {
        v6 = function_321576();
    }
    char * v8 = (char *)(a4 - 0x7b34b9cf); // 0x3215a3
    *v8 = *v8 + 94;
    int32_t v9 = v6; // 0x3215aa
    uint32_t v10 = v9 >> 31; // 0x3215aa
    int64_t v11 = v10; // 0x3215aa
    *(char *)v1 = *(char *)&v1 / 2;
    int64_t v12 = v6 + 88 + (int64_t)(v9 < 0xb722a101); // 0x3215ba
    int64_t v13 = v12 & 135 | v6 & 0xedb7a000; // 0x3215ba
    unsigned char v14 = *(char *)&v3; // 0x3215bc
    int64_t v15 = v7 ? -1 : 1; // 0x3215bc
    char * v16 = (char *)v11; // 0x3215bd
    *v16 = (char)(*(char *)&v2 < v14) + (char)v12 + *v16;
    char * v17 = (char *)(v1 + 8); // 0x3215c5
    *v17 = *v17 - (char)v10;
    int32_t * v18 = (int32_t *)v13; // 0x3215ca
    *v18 = *v18 + (int32_t)v13;
    int64_t v19 = (v13 | 0x100000000 * v11) / (int64_t)*(int32_t *)(v13 + 0x3d13647a); // 0x3215cc
    int32_t * v20 = (int32_t *)(v19 & 0xffffffff); // 0x3215d2
    *v20 = *v20 ^ -24;
    int32_t * v21 = (int32_t *)(v15 + 0x6e246909 + v2); // 0x3215d5
    *v21 = *v21 + (int32_t)v1;
    uint32_t v22 = *(int32_t *)-0x1040e316; // 0x3215e3
    uint32_t v23 = (int32_t)(v3 + v15); // 0x3215e3
    int32_t v24 = v22 - v23; // 0x3215e3
    unsigned char v25 = llvm_ctpop_i8((char)v24); // 0x3215e3
    *(int32_t *)-0x1040e316 = v24;
    return v19 & 0xffff0000 | (v19 + 123) % 256 | 256 * (64 * (int64_t)(v24 == 0) | (int64_t)(v22 < v23) | 128 * (int64_t)(v24 < 0) | 16 * (int64_t)(v22 % 16 - v23 % 16 > 15) | 4 * (int64_t)(v25 % 2 == 0)) | 512;
}

// Address range: 0x3215f0 - 0x32160a
int64_t function_3215f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3215f0
    int64_t v1; // 0x3215f0
    int32_t * v2 = (int32_t *)(v1 - 94 + 4 * v1); // 0x3215f0
    *v2 = *v2 ^ (int32_t)v1;
    *(char *)-0x1f9ec4fe = *(char *)-0x1f9ec4fe + (char)(v1 / 256);
    *(char *)a1 = (char)(v1 / 256);
    __asm_hlt();
    return __asm_hlt();
}

// Address range: 0x321635 - 0x321636
int64_t function_321635(int64_t a1) {
    // 0x321635
    int64_t result; // 0x321635
    return result;
}

// Address range: 0x32163b - 0x32163e
int64_t function_32163b(void) {
    // 0x32163b
    int64_t result; // 0x32163b
    return result;
}

// Address range: 0x321678 - 0x32167b
int64_t function_321678(void) {
    // 0x321678
    int64_t result; // 0x321678
    return result;
}

// Address range: 0x3216d8 - 0x321786
int64_t function_3216d8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3216d8
    int64_t v1; // 0x3216d8
    int64_t v2 = v1;
    int64_t v3 = a4 - 1; // 0x3216d8
    bool v4; // 0x3216d8
    if (v3 != 0 == v4) {
        // 0x321757
        *(char *)0x60cc1e60 = *(char *)0x60cc1e60 + (char)(v1 / 256);
        return (v2 + 132) % 256 | v2 & -256;
    }
    unsigned char v5 = (char)a2;
    char v6 = (char)v2 + v5; // 0x3216da
    *(char *)a2 = v6;
    int32_t v7; // 0x3216d8
    bool v8; // 0x3216d8
    int64_t v9; // 0x3216d8
    int64_t v10; // 0x3216d8
    int64_t v11; // 0x3216d8
    if (v6 < 1) {
        // 0x3216da
        v7 = a3;
        v8 = v6 < v5;
        v11 = a1;
    } else {
        // 0x3216e0
        *(int32_t *)v10 = *(int32_t *)&v10 + (int32_t)v1;
        int64_t v12 = v4 ? -1 : 1; // 0x3216e2
        int64_t v13 = v12 + a1; // 0x3216e2
        unknown_ffffffffc48ae06e(v13, v12 + a2);
        char * v14; // 0x3216d8
        v10 = (int64_t)v14;
        int32_t * v15 = (int32_t *)v13; // 0x321700
        int32_t v16 = a3;
        *v15 = *v15 + v16;
        int64_t v17 = __asm_wait(); // 0x321709
        int32_t * v18 = (int32_t *)(8 * v13 + v3); // 0x321712
        uint32_t v19 = *v18; // 0x321712
        int64_t v20; // bp-16, 0x3216d8
        uint32_t v21 = v19 + (int32_t)(int64_t)&v20; // 0x321712
        *v18 = v21;
        unsigned char v22 = (char)v3 % 32; // 0x321715
        bool v23 = v21 < v19; // 0x321715
        if (v22 != 0) {
            char v24; // 0x3216d8
            v23 = (v24 & 1 << v22 - 1) != 0;
        }
        __asm_outsb((int16_t)a3, *(char *)0x3d3b5500);
        v7 = v16;
        v9 = v17;
        v8 = v23;
        v11 = v13;
    }
    int32_t * v25 = (int32_t *)v11; // 0x32171d
    int16_t v26 = (int16_t)(v7 + (int32_t)v8 + *v25); // 0x321725
    uint64_t v27 = v9 & -256 | (int64_t)__asm_in_133(v26); // 0x321725
    char * v28 = (char *)(v10 + 84); // 0x321767
    *v28 = *v28 ^ (char)(v27 / 256);
    uint64_t v29 = v27 + 0x1ceb4600; // 0x32176a
    *v25 = __asm_insd(v26);
    char * v30 = (char *)(v10 + 0x6fd13a0e); // 0x321777
    *v30 = *v30 - (char)(v29 / 256);
    *(int32_t *)0x791f043b0aa079 = (int32_t)v29;
    return v29 & 0xffffffff;
}

// Address range: 0x3217ef - 0x3217f2
int64_t function_3217ef(int64_t a1) {
    // 0x3217ef
    int64_t result; // 0x3217ef
    return result;
}

// Address range: 0x3217f2 - 0x3217fb
int64_t function_3217f2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3217f2
    int64_t result; // 0x3217f2
    return result;
}

// Address range: 0x3218e7 - 0x3218ff
int64_t function_3218e7(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3218e7
    int64_t result; // 0x3218e7
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x3218ff - 0x32191f
int64_t function_3218ff(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = (char)a4 % 32; // 0x32190c
    if (v1 != 0) {
        unsigned char v2 = *(char *)0xa361df8d; // 0x32190c
        unsigned char v3 = *(char *)0x910055a8; // 0x32190a
        int64_t v4; // 0x3218ff
        *(char *)0xa361df8d = v2 << v1 | (char)((int16_t)v2 >> (int16_t)(9 - v1)) | (char)(v3 > (char)v4) << v1 - 1;
    }
    *(char *)a3 = (char)a3 ^ -88;
    *(char *)a5 = -88;
    return 0x910055a8;
}

// Address range: 0x32192e - 0x32193d
int64_t function_32192e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 0x72d768a3); // 0x32192e
    *v1 = *v1 + (int32_t)a2;
    int64_t result; // 0x32192e
    return result;
}

// Address range: 0x32198f - 0x321990
int64_t function_32198f(void) {
    // 0x32198f
    int64_t result; // 0x32198f
    return result;
}

// Address range: 0x3219b2 - 0x3219b3
int64_t function_3219b2(void) {
    // 0x3219b2
    int64_t result; // 0x3219b2
    return result;
}

// Address range: 0x3219f2 - 0x321a99
int64_t function_3219f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a4;
    int64_t v2 = a3;
    char v3 = a3;
    *(char *)a3 = v3 >> 7 | 2 * v3;
    int64_t v4; // 0x3219f2
    char v5 = *(char *)&v4; // 0x3219f9
    int32_t v6; // 0x3219f2
    int64_t v7; // 0x3219f2
    int32_t v8; // 0x3219f2
    int64_t v9; // 0x3219f2
    if (v5 < v3) {
        // 0x3219f2
        v6 = v2;
        v7 = v2;
        v8 = *(int32_t *)&v2;
    } else {
        unsigned char v10 = llvm_ctpop_i8(v3 - v5); // 0x3219f9
        __asm_int1();
        char v11 = __asm_in_133((int16_t)v2); // 0x3219ff
        int32_t v12 = v2;
        v6 = v12;
        v7 = v2;
        v8 = v12;
        v9 = v11;
        if (v10 % 2 == 0) {
            v6 = v12;
            v7 = v2;
            v8 = v12;
            v9 = function_32198f();
        }
    }
    // 0x321a04
    *(int32_t *)v7 = v8 + v6;
    *(char *)v1 = (char)v9;
    char * v13 = (char *)(a1 + 61 + 2 * a5); // 0x321a09
    *v13 = *v13 + (char)v2;
    int32_t * v14 = (int32_t *)(a5 - 0x70feae6f); // 0x321a0d
    uint32_t v15 = *v14; // 0x321a0d
    uint32_t v16 = v15 + (int32_t)v1; // 0x321a0d
    *v14 = v16;
    int64_t result = __asm_iretd(); // 0x321a19
    unsigned char v17 = *(char *)&v1; // 0x321a1a
    unsigned char v18 = v17 + (char)v1; // 0x321a1a
    unsigned char v19 = v18 + (char)(v16 < v15); // 0x321a1a
    *(char *)v1 = v19;
    if (v1 == 0) {
        // 0x321a95
        return result;
    }
    int64_t result2 = unknown_ffffffffd2612e27(); // 0x321a20
    char * v20 = (char *)result2; // 0x321a26
    char v21 = result2; // 0x321a26
    *v20 = (char)(v16 < v15 ? v19 <= v17 : v18 < v17) - v21 + *v20;
    *(char *)a1 = v21;
    return result2;
}

// Address range: 0x321a9a - 0x321ab6
int64_t function_321a9a(int64_t a1) {
    // 0x321a9a
    int64_t v1; // 0x321a9a
    int64_t v2 = v1 & 0xffffffff ^ 0x2937dee7; // 0x321a9a
    *(int32_t *)-0x763bbf84afaec5f2 = (int32_t)v2;
    uint64_t v3 = v2 | 0x13d00ac; // 0x321aa8
    return v3 & 0xffffff00 | (int64_t)*(char *)(v3 % 256 + v1);
}

// Address range: 0x321b59 - 0x321b5c
int64_t function_321b59(int64_t a1) {
    // 0x321b59
    int64_t result; // 0x321b59
    return result;
}

// Address range: 0x321b8e - 0x321b9b
int64_t function_321b8e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 58); // 0x321b93
    *v1 = *v1 / 2;
    return function_ffffffffe8399ea4();
}

// Address range: 0x321bae - 0x321bba
int64_t function_321bae(int64_t a1, int64_t a2, int64_t a3) {
    // 0x321bae
    return function_303358e1();
}

// Address range: 0x321bf1 - 0x321bf4
int64_t function_321bf1(int64_t a1) {
    // 0x321bf1
    int64_t result; // 0x321bf1
    return result;
}

// Address range: 0x321bff - 0x321c12
int64_t function_321bff(int64_t a1) {
    // 0x321bff
    int64_t v1; // 0x321bff
    uint64_t v2 = v1;
    *(char *)-0x6fc744fa = *(char *)-0x6fc744fa + (char)(v2 / 256);
    unsigned char v3 = *(char *)((v1 + 168) % 256 + v2); // 0x321c0d
    __asm_out(-53, v3);
    return v1 & -256 | (int64_t)v3;
}

// Address range: 0x321c12 - 0x321c34
int64_t function_321c12(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 61); // 0x321c14
    *v1 = *v1 + 1;
    int64_t v2; // 0x321c12
    *(char *)a1 = *(char *)&v2 + (char)a4;
    int32_t * v3 = (int32_t *)(a3 - 18); // 0x321c1b
    *v3 = *v3 & 0x2c55293a;
    __asm_hlt();
    return __asm_int1();
}
