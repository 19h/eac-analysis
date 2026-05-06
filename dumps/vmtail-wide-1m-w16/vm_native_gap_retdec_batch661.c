/*
 * Targeted RetDec C for native executable gap queue batch 661.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x400ed1-0x400fd1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4011d1-0x4012d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4012d1-0x4014d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4014d1-0x4016d1 rank=- name=- kind=- bytes=- uncovered=-
 *   0x449925-0x449a25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x449b25-0x449d25 rank=- name=- kind=- bytes=- uncovered=-
 *   0x449f25-0x44a125 rank=- name=- kind=- bytes=- uncovered=-
 *   0x44a125-0x44a325 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g3;
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

int64_t function_400e8c();
int64_t function_400eb8();
int64_t function_400ed1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_400efb(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_400f33(int64_t a1, int64_t a2, int64_t a3);
int64_t function_400f9b(void);
int64_t function_400fa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_400fb9(void);
int64_t function_4011c4();
int64_t function_4011d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4011eb(void);
int64_t function_40121b(void);
int64_t function_401242(void);
int64_t function_401243(void);
int64_t function_40124b(void);
int64_t function_40125f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4012b1(void);
int64_t function_4012bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4012cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4013bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4014e5(int64_t a1, int64_t a2);
int64_t function_401507(void);
int64_t function_401521(int64_t a1);
int64_t function_401563(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8);
int64_t function_40160d(void);
int64_t function_401621(void);
int64_t function_40166a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4016a8(int64_t a1);
int64_t function_449925(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5);
int64_t function_44994c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_449957(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4499e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_449b25(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_449bb8(int64_t a1, int64_t a2);
int64_t function_449bde(int64_t a1);
int64_t function_449c0e(void);
int64_t function_449c2d(void);
int64_t function_449c5b(void);
int64_t function_449c75(int64_t a1, int64_t a2, int64_t a3);
int64_t function_449d02(void);
int64_t function_449f25(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44a037(void);
int64_t function_44a08c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_44a162(void);
int64_t function_44a180(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44a1a5(int64_t a1);
int64_t function_44a1a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44a1bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_44a1dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_44a200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_44a26a(void);
int64_t function_44a282(int64_t a1, int64_t a2);
int64_t function_44a312(int64_t a1);
int64_t function_4caf6fda();
int64_t function_56c9c85();
int64_t function_ffffffff9d0cca2e();
int64_t function_ffffffffac206f93();
int64_t unknown_ffffffff99111cc7();

// Address range: 0x400ed1 - 0x400eeb
int64_t function_400ed1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x400ed1
    int64_t v1; // 0x400ed1
    __asm_out((int16_t)a3, (int32_t)v1);
    int64_t result; // 0x400ed1
    if (a4 != 0) {
        // 0x400ed4
        return result;
    }
    if ((char)((uint64_t)v1 / 256 & a3) >= 0) {
        result = function_400eb8();
    }
    // 0x400ed4
    return result;
}

// Address range: 0x400efb - 0x400f1f
int64_t function_400efb(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a4; // bp-8, 0x400f00
    int64_t v3; // 0x400efb
    int64_t result = v3 | a1 % 256; // 0x400f01
    if ((char)(v3 || a1) == 0) {
        result = function_400e8c();
    }
    int32_t * v4 = (int32_t *)(a4 + 74); // 0x400f03
    *v4 = *v4 + (int32_t)(int64_t)&v2;
    if (a4 != 1) {
        // 0x400f2c
        return result;
    }
    // 0x400f08
    __asm_int(123);
    *(int32_t *)v1 = *(int32_t *)&v1 + 1;
    *(char *)0x29580853 = *(char *)0x29580853 - 32;
    bool v5; // 0x400efb
    char * v6 = (char *)((v5 ? -1 : 1) + a1); // 0x400f19
    *v6 = *v6 ^ (char)(result / 256);
    return v3 & 0xffffffff;
}

// Address range: 0x400f33 - 0x400f39
int64_t function_400f33(int64_t a1, int64_t a2, int64_t a3) {
    // 0x400f33
    int64_t result; // 0x400f33
    return result;
}

// Address range: 0x400f9b - 0x400f9f
int64_t function_400f9b(void) {
    // 0x400f9b
    int64_t result; // 0x400f9b
    return result;
}

// Address range: 0x400fa0 - 0x400fb1
int64_t function_400fa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x400fa0
    int64_t result; // 0x400fa0
    char * v1 = (char *)(result + 0x25dc4f27); // 0x400fa0
    bool v2; // 0x400fa0
    *v1 = *v1 + 66 + (char)v2;
    int64_t v3; // 0x400fa0
    __asm_outsb((int16_t)a3, *(char *)&v3);
    *(char *)-0x29409143 = *(char *)-0x29409143 + (char)a3;
    return result;
}

// Address range: 0x400fb9 - 0x400fbc
int64_t function_400fb9(void) {
    // 0x400fb9
    int64_t result; // 0x400fb9
    return result;
}

// Address range: 0x4011d1 - 0x4011e0
int64_t function_4011d1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4011d1
    int64_t v1; // 0x4011d1
    bool v2; // 0x4011d1
    if (v2) {
        v1 = function_4011c4();
    }
    int64_t v3 = v1 - (v2 ? 0x4d82468b : 0x4d82468a); // 0x4011d3
    int64_t v4; // 0x4011d1
    return v3 & 0xffffff00 | (int64_t)*(char *)((v3 & 154) + v4);
}

// Address range: 0x4011eb - 0x4011ec
int64_t function_4011eb(void) {
    // 0x4011eb
    int64_t result; // 0x4011eb
    return result;
}

// Address range: 0x40121b - 0x401224
int64_t function_40121b(void) {
    // 0x40121d
    return function_40124b();
}

// Address range: 0x401242 - 0x401243
int64_t function_401242(void) {
    // 0x401242
    int64_t result; // 0x401242
    return result;
}

// Address range: 0x401243 - 0x40124b
int64_t function_401243(void) {
    // 0x401243
    int64_t result; // 0x401243
    return result;
}

// Address range: 0x40124b - 0x40124c
int64_t function_40124b(void) {
    // 0x40124b
    int64_t result; // 0x40124b
    return result;
}

// Address range: 0x40125f - 0x401297
int64_t function_40125f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40125f
    int64_t v1; // 0x40125f
    int64_t v2 = v1;
    int32_t * v3 = (int32_t *)(a4 - 0x7ec79292 + v1); // 0x40125f
    bool v4; // 0x40125f
    *v3 = (int32_t)v4 + (int32_t)a4 + *v3;
    int32_t * v5 = (int32_t *)(a2 - 58); // 0x401268
    *v5 = *v5 & (int32_t)a3;
    unsigned char v6 = (char)a4 % 32; // 0x401270
    if (v6 != 0) {
        char * v7 = (char *)(a3 + 94); // 0x401270
        unsigned char v8 = *v7; // 0x401270
        *v7 = v8 >> 8 - v6 | v8 << v6;
    }
    int64_t v9 = (2 * v2 & 254 | v2 & 0xffffff00) + 0x425cf877 & 0xffffff93 | 108; // 0x40127f
    if (*(char *)(v1 + 71) + (char)a5 >= 0) {
        v9 = function_401242();
    }
    int64_t * v10 = (int64_t *)(a4 + 119); // 0x401282
    *v10 = *v10 & v1;
    int32_t * v11 = (int32_t *)(a2 + 13); // 0x401288
    *v11 = *v11 + (int32_t)a2;
    int32_t v12 = *(int32_t *)(v1 + 0x6ed52d47); // 0x401290
    return v12 * (int32_t)((0x100000000 * v9 - 0x206be5a900000000) / 0x100000000);
}

// Address range: 0x4012b1 - 0x4012bc
int64_t function_4012b1(void) {
    // 0x4012b1
    int64_t v1; // 0x4012b1
    return function_4012cb(v1, v1, v1, v1, v1, v1);
}

// Address range: 0x4012bc - 0x4012cb
int64_t function_4012bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4012bc
    int64_t result; // 0x4012bc
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x4012cb - 0x40133b
int64_t function_4012cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4012cb
    int64_t v1; // 0x4012cb
    int64_t v2 = v1;
    int64_t v3 = a2;
    int64_t v4 = ((v2 + 53) % 256 | v2 & 0xffffff00) - ((char)v2 > 202 ? 0x555472 : 0x555471); // 0x4012ce
    uint32_t v5 = (int32_t)a3;
    uint32_t v6 = (int32_t)v1; // 0x4012d5
    *(int32_t *)a3 = v5 - v6;
    int32_t * v7 = (int32_t *)(a4 - 0x5eba062c); // 0x4012d7
    uint32_t v8 = *v7; // 0x4012d7
    uint32_t v9 = v8 + v5; // 0x4012d7
    uint32_t v10 = v9 + (int32_t)(v5 < v6); // 0x4012d7
    bool v11 = v5 < v6 ? v10 <= v8 : v9 < v8; // 0x4012d7
    *v7 = v10;
    uint32_t v12 = (int32_t)((v4 + 242) % 256 | v4 & 0xffffff00); // 0x4012de
    uint32_t v13 = v11 ? 0x62794204 : 0x62794203; // 0x4012de
    int64_t v14 = v12 - v13; // 0x4012e4
    if (!v11 && v13 <= v12) {
        v14 = function_4012b1();
    }
    int32_t v15 = (int32_t)v14 ^ -0x5a2e0adc; // 0x4012e6
    if (v15 == 0) {
        // 0x40132d
        __asm_in_134(-6);
        return function_4012cb(a1 - 4, v3 - 4, a3, a4, a5, a6);
    }
    uint32_t result = *(int32_t *)(a4 + 1) & v15; // 0x4012f5
    *(char *)v3 = *(char *)&v3 + (char)(result / 256);
    *(char *)a1 = (char)result;
    int32_t * v16 = (int32_t *)(a4 - 26); // 0x4012fe
    int64_t v17; // bp-24, 0x4012cb
    *v16 = *v16 - (int32_t)(int64_t)&v17;
    return result;
}

// Address range: 0x4013bc - 0x4014e3
int64_t function_4013bc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4013bc
    int64_t v1; // 0x4013bc
    uint64_t v2 = v1;
    char v3 = *(char *)(a2 + 0x113f9408); // 0x401403
    int64_t result = 256 * (int64_t)(v3 ^ (char)(v2 / 256)) | v2 & -0xff01; // 0x401403
    int32_t v4 = a2;
    if ((int32_t)v1 + v4 < 0) {
        // 0x4013f2
        return result;
    }
    char v5 = *(char *)(a1 + 110); // 0x401414
    int64_t v6 = a4 & -256; // 0x401414
    int16_t v7 = a3; // 0x401417
    __asm_outsb(v7, (char)a2);
    unsigned char v8 = __asm_in(v7); // 0x40141e
    int64_t v9; // bp+763187508, 0x4013bc
    int64_t result2 = (int64_t)&v9 & -256 | (int64_t)v8; // 0x40141e
    int64_t v10; // 0x4013bc
    int32_t v11 = *(int32_t *)((v6 | (int64_t)((char)(((int32_t)(int64_t)&v10 ^ -4) < 0x2d7d5134) + (char)a4 + v5)) + 0x184de649); // 0x40141f
    char v12 = v1; // 0x40142b
    unsigned char v13 = *(char *)(v1 + 0x8379435); // 0x40142b
    if (v13 > v12) {
        // 0x4013f2
        return result2;
    }
    int64_t v14 = result & 0xffffffff; // 0x40140e
    int64_t * v15 = (int64_t *)v14; // 0x401427
    char v16 = v8 + 123; // 0x401437
    unsigned char v17 = llvm_ctpop_i8(v16); // 0x401437
    bool v18; // 0x4013bc
    *v15 = 0x4000 * (int64_t)v18 | 1024 * (int64_t)v18 | 512 * (int64_t)v18 | 256 * (int64_t)v18 | (int64_t)(v8 < 133) | 64 * (int64_t)(v16 == 0) | 128 * (int64_t)(v16 < 0) | 16 * (int64_t)(v8 % 16 > 20) | 4 * (int64_t)(v17 % 2 == 0) | 2048 * (int64_t)(((v16 ^ v8) & (v8 ^ -128)) < 0) | 2;
    if (v16 == 0) {
        // 0x4013f2
        return result2;
    }
    int64_t v19 = v11 + v4; // 0x40141f
    int64_t v20 = *v15 & -256 | 248; // 0x40143f
    int64_t v21 = result2 / 256; // 0x401495
    if (v21 < result2) {
        char v22 = *(char *)0x100eb7b57; // 0x401499
        __asm_outsd((int16_t)v20, *(int32_t *)v19);
        return 256 * (int64_t)(v22 + (char)v21) | result2 & -0xff01;
    }
    int64_t v23 = (v13 > v12 ? 255 : 0) | v6; // 0x401435
    int64_t v24 = result2 + 0xcd63ba47; // 0x4014a9
    int64_t v25 = v14 - 8; // 0x4014ae
    *(int64_t *)v25 = v24 & 0xffffffff;
    int32_t * v26 = (int32_t *)(v23 + 28); // 0x4014af
    *v26 = (int32_t)((int32_t)result2 < 0x329c45b9) - (int32_t)v25 + *v26;
    int64_t v27 = v24 & 0x941d7fb; // 0x4014b2
    char * v28 = (char *)(v19 + 0x46ab1a2b); // 0x4014b8
    *v28 = *v28 - 96;
    *(int32_t *)(v27 - 87 + v23) = (int32_t)v20;
    int32_t * v29 = (int32_t *)(v20 + 91); // 0x4014c2
    *v29 = *v29 ^ (int32_t)v23;
    int64_t * v30 = (int64_t *)(v14 - 16); // 0x4014c5
    *v30 = 0xb79c6913;
    char v31 = *(char *)0x71260e60; // 0x4014c7
    *v30 = 0x71260e60;
    uint32_t v32 = (int32_t)(v24 & 0x941d700 | (int64_t)(v31 | (char)v27)); // 0x4014d0
    uint32_t v33 = 0x10000 * v32 / 0x10000; // 0x4014d1
    *(int64_t *)(v14 - 24) = v23;
    if (*(int32_t *)0xb79c6913 <= v32) {
        int64_t result3 = v33; // 0x4014d1
        float80_t v34; // 0x4013bc
        *(int32_t *)(result3 + 10) = (int32_t)v34;
        return result3;
    }
    int32_t * v35 = (int32_t *)(v19 - 0x1cde7d8a); // 0x4014d5
    *v35 = *v35 & 0x71260e60;
    return v33 - 0x5e54f191;
}

// Address range: 0x4014e5 - 0x4014f9
int64_t function_4014e5(int64_t a1, int64_t a2) {
    // 0x4014e5
    return function_56c9c85();
}

// Address range: 0x401507 - 0x401510
int64_t function_401507(void) {
    // 0x401507
    int64_t v1; // 0x401507
    int64_t result = function_401563(v1, v1, v1, v1, v1, v1, (int64_t)&g3, (int64_t)&g3); // 0x40150e
    return result;
}

// Address range: 0x401521 - 0x401522
int64_t function_401521(int64_t a1) {
    // 0x401521
    int64_t result; // 0x401521
    return result;
}

// Address range: 0x401563 - 0x401579
int64_t function_401563(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8) {
    int32_t v1 = __asm_insd((int16_t)a7); // 0x40156f
    int32_t * v2 = (int32_t *)a1; // 0x40156f
    *v2 = v1;
    int64_t result; // 0x401563
    char * v3 = (char *)(result + 83); // 0x401570
    *v3 = *v3 + (char)(a7 / 256);
    char * v4 = (char *)(a7 - 111); // 0x401573
    *v4 = *v4 + (char)a7;
    *v2 = (int32_t)result;
    return result;
}

// Address range: 0x40160d - 0x401621
int64_t function_40160d(void) {
    // 0x40160d
    int64_t v1; // 0x40160d
    int64_t v2 = v1;
    *(char *)v2 = (char)v2 + 43;
    return v2 & -256 | (int64_t)*(char *)0x3f008575b87d2787;
}

// Address range: 0x401621 - 0x401626
int64_t function_401621(void) {
    // 0x401621
    return function_4caf6fda();
}

// Address range: 0x40166a - 0x401672
int64_t function_40166a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40166a
    int64_t result; // 0x40166a
    __asm_out((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x4016a8 - 0x4016ac
int64_t function_4016a8(int64_t a1) {
    // 0x4016a8
    int64_t result; // 0x4016a8
    return result;
}

// Address range: 0x449925 - 0x449949
int64_t function_449925(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, uint64_t a5) {
    // 0x449925
    int64_t v1; // 0x449925
    uint64_t v2 = v1;
    int64_t result = (v2 & 0xffffff00 | (int64_t)*(char *)(v2 % 256 + v1)) ^ 0x61796de1; // 0x44992b
    *(int32_t *)a1 = (int32_t)v1;
    bool v3; // 0x449925
    int64_t v4 = (v3 ? -4 : 4) + a2; // 0x449930
    char * v5 = (char *)(a4 + 0x2f3be81c); // 0x449933
    *v5 = *v5 + (char)(a5 % 2 == 0) + (char)result;
    int32_t * v6 = (int32_t *)(v4 - 41 + 2 * v4); // 0x449939
    *v6 = *v6 + 0x77d06c3;
    char * v7 = (char *)(2 * result + a3); // 0x449941
    *v7 = *v7 | (char)(a4 / 256);
    return result;
}

// Address range: 0x44994c - 0x449957
int64_t function_44994c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x44994c
    int64_t v1; // 0x44994c
    int64_t v2 = v1;
    unsigned char v3 = *(char *)(v1 + 0x145b02da); // 0x44994c
    *(char *)a1 = __asm_insb((int16_t)a3);
    bool v4; // 0x44994c
    return 256 * (int64_t)v3 | v2 & -0x10000 | (v2 - (v4 ? 19 : 18)) % 256;
}

// Address range: 0x449957 - 0x4499e5
int64_t function_449957(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    unsigned char v2 = *(char *)0x751daae1; // 0x44995a
    unsigned char v3 = (char)a3; // 0x44995a
    bool v4; // 0x449957
    char v5 = v4; // 0x44995a
    unsigned char v6 = v2 + v3; // 0x44995a
    char v7 = v6 + v5; // 0x44995a
    *(char *)0x751daae1 = v7;
    int64_t result; // 0x449957
    *(int32_t *)(result - 40) = (int32_t)a3;
    if (v7 == 0) {
        bool v8 = v4 ? v7 <= v2 : v6 < v2; // 0x44995a
        unsigned char v9 = llvm_ctpop_i8(v7); // 0x44995a
        __asm_outsd((int16_t)a3, *(int32_t *)&v1);
        return 256 * (64 * (int64_t)(v7 == 0) | (int64_t)v8 | 128 * (int64_t)(v7 < 0) | 16 * (int64_t)(v3 % 16 + v5 + v2 % 16 > 15) | 4 * (int64_t)(v9 % 2 == 0)) | 0x4a120227;
    }
    // 0x4499a4
    if (*(char *)(result + 18) != 59) {
        // 0x4499ac
        return result;
    }
    // 0x4499dc
    *(int32_t *)0x4819b60afc796abd = (int32_t)result;
    return result;
}

// Address range: 0x4499e6 - 0x4499eb
int64_t function_4499e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4499e6
    int64_t result; // 0x4499e6
    return result;
}

// Address range: 0x449b25 - 0x449bac
int64_t function_449b25(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x449b25
    bool v1; // 0x449b25
    if (!v1) {
        // 0x449b9e
        int32_t result; // 0x449b25
        return result;
    }
    int64_t result2 = __asm_wait(); // 0x449b2c
    *(int32_t *)a1 = (int32_t)result2;
    return result2;
}

// Address range: 0x449bb8 - 0x449bc1
int64_t function_449bb8(int64_t a1, int64_t a2) {
    // 0x449bb8
    int64_t result; // 0x449bb8
    *(int32_t *)a1 = (int32_t)result >> 20;
    int32_t * v1 = (int32_t *)(8 * result + a1); // 0x449bbb
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x449bde - 0x449bdf
int64_t function_449bde(int64_t a1) {
    // 0x449bde
    int64_t result; // 0x449bde
    return result;
}

// Address range: 0x449c0e - 0x449c0f
int64_t function_449c0e(void) {
    // 0x449c0e
    int64_t result; // 0x449c0e
    return result;
}

// Address range: 0x449c2d - 0x449c2e
int64_t function_449c2d(void) {
    // 0x449c2d
    int64_t result; // 0x449c2d
    return result;
}

// Address range: 0x449c5b - 0x449c62
int64_t function_449c5b(void) {
    // 0x449c5b
    __asm_int(90);
    return function_449c0e();
}

// Address range: 0x449c75 - 0x449c7f
int64_t function_449c75(int64_t a1, int64_t a2, int64_t a3) {
    // 0x449c75
    bool v1; // 0x449c75
    if (v1 || false) {
        function_449c2d();
    }
    // 0x449c77
    return a2 & 0xffffffff;
}

// Address range: 0x449d02 - 0x449d07
int64_t function_449d02(void) {
    // 0x449d02
    return function_ffffffff9d0cca2e();
}

// Address range: 0x449f25 - 0x44a00e
int64_t function_449f25(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x449f25
    int64_t v1; // 0x449f25
    return v1 & 0x4ab7bdba | 0xb5484245;
}

// Address range: 0x44a037 - 0x44a038
int64_t function_44a037(void) {
    // 0x44a037
    int64_t result; // 0x44a037
    return result;
}

// Address range: 0x44a08c - 0x44a14b
int64_t function_44a08c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    char * v2 = (char *)(a2 - 0x65344ec8 + 4 * a4); // 0x44a08c
    int64_t result; // 0x44a08c
    char v3 = result / 256; // 0x44a08c
    *v2 = *v2 + v3;
    *(char *)a4 = (char)result;
    char * v4 = (char *)(result + 0x156fb9d5); // 0x44a09f
    *v4 = *v4 + 108;
    if (((int32_t)result & -0x251e3cab) < 1) {
        function_44a037();
    }
    // 0x44a0ad
    __asm_hlt();
    int64_t v5 = __asm_int3(a1, (int32_t)v1); // 0x44a0ae
    unsigned char v6 = (char)(result - a3) - (char)a3 + (char)((int32_t)v5 < 0x5893678c); // 0x44a0b8
    unsigned char v7 = llvm_ctpop_i8(v6); // 0x44a0b8
    char * v8 = (char *)(a3 - 0x45c387db); // 0x44a0bc
    *v8 = v3;
    if (v7 % 2 != 0) {
        // 0x44a120
        __asm_outsb((int16_t)a3, *(char *)&v1);
        int32_t * v9 = (int32_t *)(result + 121); // 0x44a127
        int32_t v10 = *v9; // 0x44a127
        *v9 = v10 + ((int32_t)a5 & -256 | (int32_t)((int32_t)result < (int32_t)result) | 224);
        return result;
    }
    int64_t v11 = v5 & -0xff01 | (int64_t)&g2; // 0x44a0ba
    int32_t * v12 = (int32_t *)(v11 + 49); // 0x44a0c4
    int64_t v13; // 0x44a08c
    *v12 = *v12 & (int32_t)(int64_t)&v13;
    unsigned char v14 = (char)v11; // 0x44a0c7
    unsigned char v15 = v14 - 2; // 0x44a0c7
    int64_t result2 = v11 & -256 | (int64_t)v15; // 0x44a0c7
    if (v15 != 0) {
        // 0x44a119
        return result2;
    }
    int64_t v16 = 256 * (int64_t)*v8 | result & -0x10000; // 0x44a0b8
    int64_t v17 = v16 | (int64_t)v6; // 0x44a0bc
    int64_t v18 = a3 & -0xff01 | (int64_t)&g1; // 0x44a0d0
    uint32_t v19 = (int32_t)result2; // 0x44a0d2
    uint32_t v20 = v14 < 2 ? -0x3d88a880 : -0x3d88a881; // 0x44a0d2
    uint32_t v21 = v19 - v20; // 0x44a0d2
    bool v22 = v14 < 2 | v20 > v19; // 0x44a0d2
    int64_t v23 = v21; // 0x44a0d2
    int32_t * v24 = (int32_t *)(v17 - 0x69ddd514 + 2 * v23); // 0x44a0d7
    uint32_t v25 = *v24; // 0x44a0d7
    int32_t v26 = v17; // 0x44a0d7
    int32_t v27 = v22; // 0x44a0d7
    uint32_t v28 = v25 + v26; // 0x44a0d7
    uint32_t v29 = v28 + v27; // 0x44a0d7
    bool v30 = v22 ? v29 <= v25 : v28 < v25; // 0x44a0d7
    *v24 = v29;
    if (v29 != 0 && !v30) {
        int32_t * v31 = (int32_t *)v17; // 0x44a146
        *v31 = *v31 - (int32_t)v18;
        *(char *)a1 = *(char *)v23;
        return v1 & 0xffffffff;
    }
    int32_t v32 = v29 + v27; // 0x44a0d7
    *(char *)0x62d328e7c43a7be7 = (char)v21;
    if (((v32 ^ v25) & (v32 ^ v26)) >= 0) {
        int64_t v33 = 0x100000000 * a1 >> 32; // 0x44a10b
        int64_t v34 = -0x75e4756a * v33 == -0x75e4756a00000000 * v33 >> 32 ? 89 : 90; // 0x44a111
        return v23 & 0xc2ded000 | v34 + v23 & 253 | 0x3d212f02;
    }
    char * v35 = (char *)(v17 - 0x643c6c9e + v23); // 0x44a0ec
    unsigned char v36 = *v35; // 0x44a0ec
    unsigned char v37 = v36 + (char)(v21 / 256); // 0x44a0ec
    unsigned char v38 = v37 + (char)v30; // 0x44a0ec
    *v35 = v38;
    int64_t v39 = v30 ? v38 <= v36 : v37 < v36 ? 255 : 0; // 0x44a0f3
    *(char *)a1 = __asm_insb((int16_t)v18);
    int32_t * v40 = (int32_t *)(v18 - 70); // 0x44a104
    *v40 = *v40 - (int32_t)v18;
    return (int64_t)(v21 + 0x243cbdd7 - *(int32_t *)(v39 | v16));
}

// Address range: 0x44a162 - 0x44a164
int64_t function_44a162(void) {
    // 0x44a162
    int64_t result; // 0x44a162
    return result;
}

// Address range: 0x44a180 - 0x44a19c
int64_t function_44a180(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44a180
    int64_t v1; // 0x44a180
    int64_t v2 = (int64_t)(*(int32_t *)(v1 + 95) ^ (int32_t)a3); // 0x44a180
    uint64_t v3 = v1 ^ 66; // 0x44a183
    uint64_t v4 = *(int64_t *)(v1 - 0x1dbc9b2a); // 0x44a187
    unsigned char v5 = (char)v3; // 0x44a18e
    unsigned char v6 = v3 < v4 ? 27 : 26; // 0x44a18e
    unsigned char v7 = v5 - v6; // 0x44a18e
    *(int32_t *)(v2 - 0x1c6d9d5f) = (int32_t)v1;
    int64_t result = v1 & -256 | (int64_t)v7; // 0x44a196
    if (v3 >= v4 && v6 <= v5 && v7 != 0) {
        bool v8; // 0x44a180
        int64_t v9 = v8 ? -1 : 1; // 0x44a186
        result = function_44a200(v9 + a1, v9 + a2, v2, v1, (int64_t)&g3, (int64_t)&g3, (int64_t)&g3);
    }
    // 0x44a198
    return result;
}

// Address range: 0x44a1a5 - 0x44a1a6
int64_t function_44a1a5(int64_t a1) {
    // 0x44a1a5
    int64_t result; // 0x44a1a5
    return result;
}

// Address range: 0x44a1a9 - 0x44a1b8
int64_t function_44a1a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    unsigned char v1 = *(char *)(a2 + 30); // 0x44a1a9
    int32_t * v2 = (int32_t *)(a3 - 0x51a2cc6); // 0x44a1ad
    *v2 = *v2 - (int32_t)a2 + (int32_t)(v1 > (char)a4);
    return function_44a1dc(a5, a2, a3, a4);
}

// Address range: 0x44a1bf - 0x44a1c8
int64_t function_44a1bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 0x7fd1c66b); // 0x44a1bf
    int64_t result; // 0x44a1bf
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x44a1dc - 0x44a1fe
int64_t function_44a1dc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x44a1dc
    return unknown_ffffffff99111cc7() & -6;
}

// Address range: 0x44a200 - 0x44a230
int64_t function_44a200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x44a200
    int64_t v1; // 0x44a200
    int64_t v2 = v1;
    bool v3; // 0x44a200
    if (!v3) {
        // 0x44a224
        return (v2 + 36) % 256 | v2 & -256;
    }
    // 0x44a203
    return (int64_t)*(int32_t *)0x4c264639e0b8e47a;
}

// Address range: 0x44a26a - 0x44a26b
int64_t function_44a26a(void) {
    // 0x44a26a
    int64_t result; // 0x44a26a
    return result;
}

// Address range: 0x44a282 - 0x44a28c
int64_t function_44a282(int64_t a1, int64_t a2) {
    // 0x44a282
    int64_t result; // 0x44a282
    *(int32_t *)a1 = (int32_t)result;
    char * v1 = (char *)(a2 + 96); // 0x44a286
    bool v2; // 0x44a282
    *v1 = *v1 - (v2 ? 111 : 110);
    return result;
}

// Address range: 0x44a312 - 0x44a31b
int64_t function_44a312(int64_t a1) {
    // 0x44a312
    bool v1; // 0x44a312
    return function_ffffffffac206f93((v1 ? -1 : 1) + a1);
}
