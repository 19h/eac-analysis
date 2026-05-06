/*
 * Targeted RetDec C for native executable gap queue batch 591.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x328255-0x328455 rank=- name=- kind=- bytes=- uncovered=-
 *   0x328455-0x328655 rank=- name=- kind=- bytes=- uncovered=-
 *   0x328655-0x328855 rank=- name=- kind=- bytes=- uncovered=-
 *   0x328855-0x328a55 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42261f-0x42281f rank=- name=- kind=- bytes=- uncovered=-
 *   0x422a1f-0x422c1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x422c1f-0x422e1f rank=- name=- kind=- bytes=- uncovered=-
 *   0x422e1f-0x42301f rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1254a32c();
int64_t function_328255(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_328360(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3284e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_328630(int64_t a1, int64_t a2);
int64_t function_328758(int64_t a1, int64_t a2, int64_t a3);
int64_t function_328899(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_328a2a(void);
int64_t function_4225df();
int64_t function_42261b();
int64_t function_42261f(int64_t a1, int64_t a2, int64_t a3);
int64_t function_422648(int64_t a1, int64_t a2, int64_t a3);
int64_t function_42268f(void);
int64_t function_422698(void);
int64_t function_4226a3(void);
int64_t function_4226b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42274d(int64_t a1, int64_t a2);
int64_t function_42276e(int64_t a1);
int64_t function_422779(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4227a0(void);
int64_t function_4227b4(int64_t a1, int64_t a2, int64_t a3);
int64_t function_422a05();
int64_t function_422a1f(void);
int64_t function_422a40(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_422a74(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_422abe(void);
int64_t function_422ac6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_422bb1(void);
int64_t function_422bea(void);
int64_t function_422c23(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_422cac(void);
int64_t function_422cba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_422cd0(int64_t a1);
int64_t function_422cfb(void);
int64_t function_422cff(void);
int64_t function_422d0a(void);
int64_t function_422d20(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_422f2b(void);
int64_t function_422f2d(void);
int64_t function_422f48(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_63379575();
int64_t function_6f7d6d62();
int64_t function_caf2a();
int64_t function_ffffffffa00a6356();
int64_t function_ffffffffdf93ccf8();

// Address range: 0x328255 - 0x328360
int64_t function_328255(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = __asm_in((int16_t)a3); // 0x328255
    int64_t v2; // 0x328255
    int64_t v3 = v2 & -256 | (int64_t)v1; // 0x328255
    char * v4 = (char *)v3; // 0x328256
    *v4 = (*v4 | v1) + v1;
    int64_t v5; // bp-8, 0x328255
    int64_t v6 = (int64_t)&v5; // 0x328295
    int64_t v7 = *(int64_t *)(v6 + 32); // 0x3282a1
    int64_t v8 = v6 - 8; // 0x3282a1
    int64_t * v9 = (int64_t *)v8; // 0x3282a1
    *v9 = v7;
    int64_t * v10 = (int64_t *)(v6 - 16); // 0x3282a5
    *v10 = v7;
    int64_t v11 = *(int64_t *)(v6 + 16); // 0x3282b4
    *v9 = v11;
    int64_t v12 = v6 - 24; // 0x3282cf
    *v10 = v2 ^ v6 ^ *v10;
    *(int64_t *)(v6 - 32) = v7;
    v5 = *v10;
    *(int64_t *)v12 = v12;
    *v10 = v11;
    *(int64_t *)(v6 + 24) = *v9;
    *v10 = v8;
    *v9 = v6 + 8;
    return function_caf2a(a1, a2, v3, a4, v2, v2, v3);
}

// Address range: 0x328360 - 0x3284e8
int64_t function_328360(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x328360
    int64_t v1; // bp-48, 0x328360
    int64_t v2 = (int64_t)&v1; // 0x3284a5
    v1 = v2 + 8;
    *(int64_t *)(v2 + 16) = v2 + 32;
    int64_t v3; // 0x328360
    return function_caf2a(a1, a2, a3, a4, a5, v3, 0x7bf351ea);
}

// Address range: 0x3284e8 - 0x328630
int64_t function_3284e8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3284e8
    int64_t v1; // bp-40, 0x3284e8
    int64_t v2 = (int64_t)&v1; // 0x328560
    int64_t v3 = *(int64_t *)(v2 + 32); // 0x32856c
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x32856c
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x328570
    *v5 = v3;
    int64_t * v6 = (int64_t *)(v2 - 24); // 0x328573
    *v6 = v3;
    int64_t v7 = *(int64_t *)(v2 + 16); // 0x32857f
    *v6 = v7;
    *v5 = a5;
    *v4 = v3;
    int64_t v8 = *v5; // 0x3285a4
    *v6 = v8;
    *(int64_t *)(v2 + 8) = *v4;
    *v4 = 0x4d8393ff;
    *v5 = v7;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v1;
    *v6 = v3;
    *(int64_t *)(v2 - 32) = a2;
    *v5 = v2;
    *v4 = v1;
    *v5 = v1;
    return function_caf2a(a1, a2, a3, a4, v8, a6, 0x32589d);
}

// Address range: 0x328630 - 0x328758
int64_t function_328630(int64_t a1, int64_t a2) {
    // 0x328630
    int64_t v1; // 0x328630
    return function_caf2a(a1, a2, v1, v1, v1, v1, 0xfeddf38);
}

// Address range: 0x328758 - 0x328899
int64_t function_328758(int64_t a1, int64_t a2, int64_t a3) {
    // 0x328758
    int64_t v1; // 0x328758
    return function_caf2a(a1, a2, a3, v1, v1, v1, 0x27eaab04);
}

// Address range: 0x328899 - 0x3289e7
int64_t function_328899(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x328899
    int64_t v1; // bp-72, 0x328899
    v1 = (int64_t)&v1;
    int64_t v2; // 0x328899
    return function_caf2a(a1, a2, a3, a4, v2, v2, v2);
}

// Address range: 0x328a2a - 0x328a2d
int64_t function_328a2a(void) {
    // 0x328a2a
    int64_t result; // 0x328a2a
    return result;
}

// Address range: 0x42261f - 0x42263a
int64_t function_42261f(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42261f
    int64_t v1; // 0x42261f
    __asm_out((int16_t)a3 % 256 | (int16_t)&g1, (char)v1 | 78);
    int64_t v2 = function_42261b(); // 0x422627
    char * v3 = (char *)v2; // 0x42262b
    unsigned char v4 = *v3; // 0x42262b
    unsigned char v5 = v4 + (char)v2; // 0x42262b
    *v3 = v5;
    int64_t v6 = v2 & -256 | (int64_t)*(char *)-0x42afa891ac809f30; // 0x42262d
    int32_t v7 = *(int32_t *)v6; // 0x422636
    int64_t result = v6; // 0x422638
    if (llvm_ctpop_i8((char)((int32_t)(v5 < v4) + (int32_t)v1 - v7)) % 2 != 0) {
        result = function_4225df();
    }
    // 0x42263a
    return result;
}

// Address range: 0x422648 - 0x422652
int64_t function_422648(int64_t a1, int64_t a2, int64_t a3) {
    // 0x422648
    int64_t v1; // 0x422648
    __asm_out((int16_t)a3, (char)v1);
    char v2 = __asm_in_133(-49); // 0x422649
    int32_t * v3 = (int32_t *)(a2 + 0x6033a6a3); // 0x42264b
    bool v4; // 0x422648
    *v3 = (int32_t)v4 - (int32_t)v1 + *v3;
    return v1 & -256 | (int64_t)v2;
}

// Address range: 0x42268f - 0x422690
int64_t function_42268f(void) {
    // 0x42268f
    int64_t result; // 0x42268f
    return result;
}

// Address range: 0x422698 - 0x42269d
int64_t function_422698(void) {
    // 0x422698
    return function_1254a32c();
}

// Address range: 0x4226a3 - 0x4226a4
int64_t function_4226a3(void) {
    // 0x4226a3
    int64_t result; // 0x4226a3
    return result;
}

// Address range: 0x4226b4 - 0x42270b
int64_t function_4226b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4226b4
    int64_t v1; // 0x4226b4
    int64_t v2 = v1;
    int64_t result = 0; // 0x4226c3
    if (((v2 + 9) % 256 || v2 & 0xffffff00) != 0xdb6f205) {
        result = function_42268f();
    }
    int64_t v3 = a4 - 1; // 0x4226c5
    if (v3 != 0 == ((v2 + 9) % 256 || v2 & 0xffffff00) == 0xdb6f205) {
        // 0x422708
        return result;
    }
    int32_t v4 = (int32_t)result ^ 0x71052275; // 0x4226c8
    *(int16_t *)-0x37fa93fa = (int16_t)v1;
    int64_t v5 = v4; // 0x4226d3
    if (v4 >= 0) {
        v5 = function_4226a3();
    }
    int64_t v6 = v5;
    int64_t result2 = 256 * v6 & 0xff00 | v6 & -0x10000 | (v6 + 126) % 256; // 0x4226d7
    int64_t v7 = v3 & -0xff01; // 0x4226d9
    bool v8; // 0x4226b4
    int64_t v9 = v8 ? -1 : 1; // 0x4226dc
    int64_t v10 = v9 + a1; // 0x4226dc
    *(int32_t *)v10 = (int32_t)result2;
    int64_t v11 = v10 + (v8 ? -4 : 4); // 0x4226dd
    *(char *)v11 = *(char *)0xe5517b89;
    int64_t v12 = v11 + v9; // 0x4226de
    int64_t v13 = 4 * v1 + 85 + v12; // 0x4226df
    __writegsdword(v13, __readgsdword(v13) ^ (int32_t)a3);
    int32_t * v14 = (int32_t *)(v12 + 0xf1d501e); // 0x4226e4
    *v14 = *v14 | (int32_t)v9 - 0x1aae8477;
    int32_t * v15 = (int32_t *)(v7 - 123); // 0x4226ea
    *v15 = *v15 - (int32_t)v7;
    return result2;
}

// Address range: 0x42274d - 0x422752
int64_t function_42274d(int64_t a1, int64_t a2) {
    // 0x42274d
    int64_t v1; // 0x42274d
    int64_t v2 = v1;
    char v3 = *(char *)(a2 - 74 + v1); // 0x42274d
    return v2 & -256 | (int64_t)(v3 | (char)v2);
}

// Address range: 0x42276e - 0x422779
int64_t function_42276e(int64_t a1) {
    // 0x42276e
    int64_t v1; // 0x42276e
    return v1 + 0x25d479f4 & 0xffffffff;
}

// Address range: 0x422779 - 0x42277e
int64_t function_422779(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x422779
    int64_t result; // 0x422779
    return result;
}

// Address range: 0x4227a0 - 0x4227a3
int64_t function_4227a0(void) {
    // 0x4227a0
    int64_t result; // 0x4227a0
    return result;
}

// Address range: 0x4227b4 - 0x42281e
int64_t function_4227b4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4227b4
    int64_t v1; // 0x4227b4
    uint64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4 = a2;
    bool v5; // 0x4227b4
    if (true == !v5) {
        unsigned char v6 = (char)v3; // 0x42280d
        *(char *)0x6db33b57341372f4 = v6;
        return ((v3 + 75) % 256 | v3 & 0xffffff00) + 0x501616c4 + (int64_t)(v6 > 180) & 0xffffffff;
    }
    int32_t * v7 = (int32_t *)(v2 - 63); // 0x4227b6
    uint32_t v8 = *v7; // 0x4227b6
    *v7 = v8 - 0x132ad1fd;
    int32_t v9 = *(int32_t *)&v4; // 0x4227c7
    *(int32_t *)v4 = (int32_t)(v8 < 0x132ad1fd) - (int32_t)v1 + v9;
    *(char *)v2 = (char)(v2 / 256);
    int64_t v10; // bp-8, 0x4227b4
    return (int64_t)&v10;
}

// Address range: 0x422a1f - 0x422a23
int64_t function_422a1f(void) {
    // 0x422a1f
    int64_t result; // 0x422a1f
    return result;
}

// Address range: 0x422a40 - 0x422a47
int64_t function_422a40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a1 - 26); // 0x422a40
    int32_t v2 = *v1; // 0x422a40
    *v1 = 2 * v2 | (int32_t)(v2 < 0);
    int64_t result; // 0x422a40
    return result;
}

// Address range: 0x422a74 - 0x422a89
int64_t function_422a74(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x422a74
    bool v1; // 0x422a74
    if (v1) {
        function_422a05();
    }
    unsigned char v2 = (char)a4 % 32; // 0x422a81
    if (v2 != 0) {
        *(char *)a1 = (char)a1 << v2;
    }
    return function_ffffffffdf93ccf8();
}

// Address range: 0x422abe - 0x422ac1
int64_t function_422abe(void) {
    // 0x422abe
    int64_t result; // 0x422abe
    return result;
}

// Address range: 0x422ac6 - 0x422b17
int64_t function_422ac6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x422ac6
    char v3 = v2 / 256; // 0x422ac6
    char v4 = v2;
    bool v5; // 0x422ac6
    char v6 = v5; // 0x422ac6
    char v7 = v3 + v4 + v6; // 0x422ac6
    char v8 = v7 + v6; // 0x422ac6
    int16_t v9 = a3; // 0x422aca
    __asm_outsd(v9, (int32_t)a2);
    if (v7 < 0 != ((v8 ^ v3) & (v8 ^ v4)) < 0) {
        // 0x422acd
        return function_ffffffffa00a6356();
    }
    int64_t result = 256 * (int64_t)v7 | v2 & -0xff01; // 0x422ac6
    int64_t v10; // 0x422ac6
    int64_t v11 = (int64_t)&v10 - 8; // 0x422b13
    *(int64_t *)v11 = a2;
    int64_t v12 = v2 - 1; // 0x422b14
    if (v12 == 0) {
        // 0x422b16
        __asm_outsb(v9, *(char *)&v1);
        return result;
    }
    int64_t v13 = v12; // 0x422b14
    int64_t v14 = v11; // 0x422b13
    __asm_out_134(77, (int32_t)result);
    v14 -= 8;
    *(int64_t *)v14 = v1;
    v13--;
    while (v13 != 0) {
        // 0x422b11
        __asm_out_134(77, (int32_t)result);
        v14 -= 8;
        *(int64_t *)v14 = v1;
        v13--;
    }
    // 0x422b16
    __asm_outsb(v9, *(char *)&v1);
    return result;
}

// Address range: 0x422bb1 - 0x422bb4
int64_t function_422bb1(void) {
    // 0x422bb1
    int64_t result; // 0x422bb1
    return result;
}

// Address range: 0x422bea - 0x422bed
int64_t function_422bea(void) {
    // 0x422bea
    int64_t result; // 0x422bea
    return result;
}

// Address range: 0x422c23 - 0x422c3e
int64_t function_422c23(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(2 * a3 + 0x7c11df92); // 0x422c29
    int64_t v2; // 0x422c23
    *v1 = *v1 & (char)v2;
    return function_63379575((int32_t)(a4 & a1));
}

// Address range: 0x422cac - 0x422cba
int64_t function_422cac(void) {
    // 0x422cac
    return function_422cff();
}

// Address range: 0x422cba - 0x422cce
int64_t function_422cba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x422cba
    int64_t v1; // 0x422cba
    __asm_out_134(40, (int32_t)v1);
    int64_t v2; // 0x422cba
    v2 = function_422d20(a1, a2, a3, a4, v1, v1, (int64_t)&g2);
    int64_t v3 = v2;
    char v4 = *(char *)(v1 - 11); // 0x422cbe
    __asm_outsb((int16_t)a3, (char)a2);
    bool v5; // 0x422cba
    return v3 & -256 | (int64_t)((char)v3 + (char)v5 + v4);
}

// Address range: 0x422cd0 - 0x422cd3
int64_t function_422cd0(int64_t a1) {
    // 0x422cd0
    int64_t result; // 0x422cd0
    return result;
}

// Address range: 0x422cfb - 0x422cfc
int64_t function_422cfb(void) {
    // 0x422cfb
    int64_t result; // 0x422cfb
    return result;
}

// Address range: 0x422cff - 0x422d01
int64_t function_422cff(void) {
    // 0x422cff
    int64_t result; // 0x422cff
    return result;
}

// Address range: 0x422d0a - 0x422d1a
int64_t function_422d0a(void) {
    int64_t v1 = -0x3e3a2fa3; // bp-8, 0x422d0a
    int64_t v2; // 0x422d0a
    *(char *)(8 * v2 + (int64_t)&v1) = -1;
    return function_6f7d6d62();
}

// Address range: 0x422d20 - 0x422e71
int64_t function_422d20(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x422d20
    int64_t v1; // 0x422d20
    uint64_t v2 = v1;
    int64_t v3 = a2;
    uint32_t v4 = (int32_t)a2;
    *(int32_t *)a2 = v4 / 2 | 0x80000000 * v4;
    int32_t * v5 = (int32_t *)(v2 + 0x1806385a); // 0x422d24
    *v5 = *v5 - 54;
    char * v6 = (char *)(v1 + 85); // 0x422d31
    *v6 = *v6 / 2;
    int64_t v7; // 0x422d20
    char v8 = *(char *)&v7; // 0x422d3b
    int64_t v9 = 256 * (int64_t)(v8 & (char)(v2 / 256)) | v2 & -0xff01; // 0x422d3b
    int64_t v10 = v9; // 0x422d3f
    if (v9 >= a4 / 256) {
        v10 = function_422cfb();
    }
    int64_t v11 = (a4 - v7 / 256) % 256 | a4 & -256; // 0x422d2f
    *(int64_t *)-8 = *(int64_t *)v10;
    uint32_t v12 = (int32_t)a1; // 0x422d4a
    uint32_t v13 = *(int32_t *)&v3; // 0x422d4a
    int32_t v14 = v12 - v13; // 0x422d4a
    uint64_t v15 = 256 * (64 * (int64_t)(v14 == 0) | (int64_t)(v13 > v12) | 128 * (int64_t)(v14 < 0) | 16 * (int64_t)(v12 % 16 - v13 % 16 > 15) | 4 * (int64_t)(llvm_ctpop_i8((char)v14) % 2 == 0)) | 512; // 0x422d4c
    int64_t v16 = v15 | v10 & -0xff01; // 0x422d4c
    int32_t * v17 = (int32_t *)(v11 + 0x7f9d9a10); // 0x422d4d
    *v17 = *v17 - v12;
    int32_t * v18 = (int32_t *)(a1 + 64); // 0x422d53
    int32_t v19 = *v18 ^ (int32_t)v11; // 0x422d53
    *v18 = v19;
    int64_t v20 = v16; // 0x422d56
    if (v19 < 0) {
        char v21 = *(char *)(v16 + 0x7b8d3aea); // 0x422d58
        v20 = 256 * (int64_t)(v21 + (char)(v15 / 256)) | v16 & -0xff01;
    }
    int64_t v22 = v20 & 0xffffffff; // 0x422d5e
    int64_t result = a1 & 0xf462f50c | 0xb9d0af3; // 0x422d5f
    if (v11 == 1) {
        // 0x422d6b
        *(char *)v22 = __asm_insb(0x1ee1);
        return result;
    }
    // 0x422de2
    *(int32_t *)v22 = (int32_t)result;
    int64_t result2 = v1 & 0xffffffff; // 0x422de3
    int32_t v23 = *(int32_t *)-0x6e85eeb4 + (int32_t)v3; // 0x422de5
    *(int32_t *)-0x6e85eeb4 = v23;
    if (v23 == 0) {
        // 0x422ded
        return result2;
    }
    char v24 = v3;
    __asm_outsb(0x1ee1, v24);
    __asm_outsb(-31, v24);
    return result2;
}

// Address range: 0x422f2b - 0x422f2c
int64_t function_422f2b(void) {
    // 0x422f2b
    int64_t result; // 0x422f2b
    return result;
}

// Address range: 0x422f2d - 0x422f2e
int64_t function_422f2d(void) {
    // 0x422f2d
    int64_t result; // 0x422f2d
    return result;
}

// Address range: 0x422f48 - 0x422fd7
int64_t function_422f48(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x422f48
    int64_t v1; // 0x422f48
    bool v2; // 0x422f48
    if (v2) {
        char * v3 = (char *)(a1 + 97); // 0x422f58
        *v3 = *v3 + (char)(a3 / 256);
        return (v1 | a3) & 0xffffffff;
    }
    int64_t v4 = v1 & 0xffffffff ^ 0xb270fff; // 0x422fc9
    return (v4 + 169 + (int64_t)((char)v4 > 184)) % 256 | v4 & 0xffffff00;
}
