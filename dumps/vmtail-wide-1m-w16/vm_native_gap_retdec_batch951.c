/*
 * Targeted RetDec C for native executable gap queue batch 951.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x6e090-0x6e290 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6e290-0x6e490 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6e690-0x6e890 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6e890-0x6ea90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b7175-0x2b7375 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b7375-0x2b7575 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b7575-0x2b7775 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2b7775-0x2b7975 rank=- name=- kind=- bytes=- uncovered=-
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
int64_t __asm_emms(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
void __asm_fldenv(int224_t value);
int64_t __asm_fnstenv();
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
int256_t __asm_vprord(int256_t value, int count);
int256_t __asm_vpaddd(int256_t left, int256_t right);
int256_t __asm_vpxord(int256_t left, int256_t right);
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
int128_t __asm_pmulhw(int128_t left, int128_t right);
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

int64_t function_14ef86ba();
int64_t function_2b7175(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b7193(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b71f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b729a(void);
int64_t function_2b729d(int64_t a1);
int64_t function_2b72b8(void);
int64_t function_2b72c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b72ec(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_2b733c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b7360(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b7391(void);
int64_t function_2b739c(void);
int64_t function_2b73e4(void);
int64_t function_2b7407(void);
int64_t function_2b7528(void);
int64_t function_2b7578(void);
int64_t function_2b7588(void);
int64_t function_2b758a(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b7591(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_2b761b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2b7624(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b763c(void);
int64_t function_2b76c7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_2b774f(void);
int64_t function_2b777e(void);
int64_t function_2b77da(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b7800(void);
int64_t function_2b7809(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2b782f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b787f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2b794d(int64_t a1);
int64_t function_6e090(int64_t a1, int64_t a2, int64_t a3);
int64_t function_6e09f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6e0bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6e135(void);
int64_t function_6e148(void);
int64_t function_6e190(int64_t a1);
int64_t function_6e192(void);
int64_t function_6e195(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6e213(int64_t a1);
int64_t function_6e219(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6);
int64_t function_6e247(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6e252(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_6e272(int64_t a1);
int64_t function_6e286(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_6e2b5(void);
int64_t function_6e2df(void);
int64_t function_6e2e2(int64_t a1);
int64_t function_6e2e5(void);
int64_t function_6e2f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6e380(int64_t a1);
int64_t function_6e3c7(void);
int64_t function_6e3e1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_6e3f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6e41b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6e690(void);
int64_t function_6e6de(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6e71a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6e7d7(int64_t a1);
int64_t function_6e7f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6e842(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_6e851(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6e8a5(int64_t a1);
int64_t function_6e8ab(void);
int64_t function_6e8b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6e8ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6e910(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_6e924(int64_t a1);
int64_t function_6e932(void);
int64_t function_6e947(int64_t a1);
int64_t function_6e965(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_6ea34(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_ffffffffaf495efe();
int64_t function_ffffffffbd27db55();
int64_t function_ffffffffbed12306();
int64_t function_fffffffff24d5da9();
int64_t unknown_1090bddd();
int64_t unknown_14a13028();
int64_t unknown_17e4e65e();
int64_t unknown_3ad38e0a();
int64_t unknown_64247fd0();
int64_t unknown_6eab7455();
int64_t unknown_73e8e09();
int64_t unknown_ab776e();
int64_t unknown_c871046();
int64_t unknown_ffffffff8165784a();
int64_t unknown_ffffffff93dd93b8();
int64_t unknown_ffffffffab89d449();
int64_t unknown_ffffffffb61802a7();
int64_t unknown_ffffffffb726593e();
int64_t unknown_ffffffffc45cb633();
int64_t unknown_ffffffffeef67420();
int64_t unknown_ffffffffef95c4b5();

// Address range: 0x6e090 - 0x6e09f
int64_t function_6e090(int64_t a1, int64_t a2, int64_t a3) {
    // 0x6e090
    int64_t v1; // 0x6e090
    int64_t v2 = v1 + 0x6b8a7127; // 0x6e090
    int32_t * v3 = (int32_t *)((v1 & 0xffffffff) - 46); // 0x6e09b
    *v3 = *v3 + (int32_t)v2;
    return v2 & 0xffffffff;
}

// Address range: 0x6e09f - 0x6e0a6
int64_t function_6e09f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6e09f
    int64_t v1; // 0x6e09f
    int64_t result = v1 ^ 94; // 0x6e09f
    char v2 = result; // 0x6e0a1
    *(char *)(a4 - 110) = v2;
    __asm_out((int16_t)a3, v2);
    return result;
}

// Address range: 0x6e0bf - 0x6e0d1
int64_t function_6e0bf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 + 0x403f5bae); // 0x6e0bf
    *v1 = *v1 | 0x20401e0d;
    int64_t v2; // 0x6e0bf
    return v2 & -256 | (int64_t)__asm_in(0);
}

// Address range: 0x6e135 - 0x6e136
int64_t function_6e135(void) {
    // 0x6e135
    int64_t result; // 0x6e135
    return result;
}

// Address range: 0x6e148 - 0x6e149
int64_t function_6e148(void) {
    // 0x6e148
    int64_t result; // 0x6e148
    return result;
}

// Address range: 0x6e190 - 0x6e191
int64_t function_6e190(int64_t a1) {
    // 0x6e190
    int64_t result; // 0x6e190
    return result;
}

// Address range: 0x6e192 - 0x6e194
int64_t function_6e192(void) {
    // 0x6e192
    return function_6e148();
}

// Address range: 0x6e195 - 0x6e1c3
int64_t function_6e195(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int32_t v2 = a3; // 0x6e19c
    uint32_t v3 = *(int32_t *)(a3 - 0x4fc5defc); // 0x6e19c
    if (v3 <= -1 - v2) {
        function_6e135();
    }
    // 0x6e1a5
    __asm_hlt();
    *(int32_t *)a1 = __asm_insd((int16_t)(v3 + v2) & -256 | 65);
    char * v4 = (char *)(a5 - 0x25efb683); // 0x6e1b4
    int64_t v5; // 0x6e195
    *v4 = *v4 & (char)v5;
    return (int64_t)*(int32_t *)&v1;
}

// Address range: 0x6e213 - 0x6e219
int64_t function_6e213(int64_t a1) {
    // 0x6e213
    return function_ffffffffbed12306();
}

// Address range: 0x6e219 - 0x6e247
int64_t function_6e219(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6) {
    int32_t * v1 = (int32_t *)(a2 - 0x2e2a9b6); // 0x6e21a
    bool v2; // 0x6e219
    *v1 = (int32_t)v2 + (int32_t)a2 + *v1;
    int64_t v3; // 0x6e219
    char v4 = *(char *)&v3; // 0x6e226
    *(int64_t *)0x42c13530 = a5;
    __asm_wait();
    __asm_int(-85);
    *(int64_t *)0x42c13528 = -0xe8474ac;
    char v5 = __asm_insb((int16_t)(256 * (int64_t)(v4 | (char)(a6 / 256)) | a6 % 256)); // 0x6e243
    *(char *)0x31f18ad6 = v5;
    int64_t v6; // 0x6e219
    return v6 & 0xffffffff;
}

// Address range: 0x6e247 - 0x6e251
int64_t function_6e247(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6e247
    return a4 & 0xffffffff;
}

// Address range: 0x6e252 - 0x6e272
int64_t function_6e252(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x6e252
    int64_t v1; // 0x6e252
    int32_t * v2 = (int32_t *)(v1 & -256 | (int64_t)*(char *)-0x1deb5ef546ed264); // 0x6e25b
    uint32_t v3 = *v2; // 0x6e25b
    *v2 = v3 / 0x80000 | 0x2000 * v3;
    return a2 & 0xffffffff;
}

// Address range: 0x6e272 - 0x6e286
int64_t function_6e272(int64_t a1) {
    // 0x6e272
    return __asm_int1() & -159;
}

// Address range: 0x6e286 - 0x6e2aa
int64_t function_6e286(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    // 0x6e286
    int64_t v1; // 0x6e286
    int64_t v2 = v1;
    int64_t v3 = v1;
    uint64_t v4 = a4 - 1; // 0x6e286
    __writegsbyte(v2, __readgsbyte(v2) + (char)v3);
    char * v5 = (char *)(a2 - 0x2a70ff60); // 0x6e28b
    *v5 = *v5 + (char)a3;
    unsigned char v6 = (char)v4 % 32; // 0x6e293
    if (v6 != 0) {
        char * v7 = (char *)(a2 - 0x379df260); // 0x6e293
        unsigned char v8 = *v7; // 0x6e293
        *v7 = v8 >> v6 | v8 << 8 - v6;
    }
    int32_t v9 = *(int32_t *)(a3 - 85); // 0x6e299
    char * v10 = (char *)((int64_t)(v9 | (int32_t)a1) - 0x7a2860da); // 0x6e29c
    *v10 = *v10 ^ (char)(a3 / 256);
    int64_t v11; // 0x6e286
    int32_t v12 = *(int32_t *)&v11; // 0x6e2a4
    *(int32_t *)v11 = v12 & (int32_t)((v3 + 120) % 256 * (v4 % 256) | v3 & 0xffff0000);
    return v4 & 0xffffffff;
}

// Address range: 0x6e2b5 - 0x6e2c5
int64_t function_6e2b5(void) {
    // 0x6e2b5
    return function_14ef86ba(0x6bec6801872e9074);
}

// Address range: 0x6e2df - 0x6e2e2
int64_t function_6e2df(void) {
    // 0x6e2df
    int64_t result; // 0x6e2df
    return result;
}

// Address range: 0x6e2e2 - 0x6e2e5
int64_t function_6e2e2(int64_t a1) {
    // 0x6e2e2
    int64_t result; // 0x6e2e2
    return result;
}

// Address range: 0x6e2e5 - 0x6e2f2
int64_t function_6e2e5(void) {
    // 0x6e2e5
    int64_t v1; // 0x6e2e5
    int64_t v2 = v1;
    float80_t v3; // 0x6e2e5
    *(int32_t *)0x7b0768c1 = (int32_t)v3;
    bool v4; // 0x6e2e5
    return v2 & -256 | v2 + 89 + (int64_t)v4 & 71 | 184;
}

// Address range: 0x6e2f3 - 0x6e317
int64_t function_6e2f3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6e2f3
    int64_t v1; // 0x6e2f3
    *(char *)v1 = (char)a3;
    *(char *)0x31b20853bc09a194 = (char)v1 & 81;
    __asm_in(106);
    return v1 & 0xffffffff;
}

// Address range: 0x6e380 - 0x6e383
int64_t function_6e380(int64_t a1) {
    // 0x6e380
    int64_t result; // 0x6e380
    return result;
}

// Address range: 0x6e3c7 - 0x6e3c8
int64_t function_6e3c7(void) {
    // 0x6e3c7
    int64_t result; // 0x6e3c7
    return result;
}

// Address range: 0x6e3e1 - 0x6e3ef
int64_t function_6e3e1(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(2 * a4 - 0x7988f3ab); // 0x6e3e1
    *v1 = *v1 + (char)(a3 / 256);
    int64_t result; // 0x6e3e1
    char * v2 = (char *)(result + 55); // 0x6e3e8
    *v2 = *v2 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x6e3f7 - 0x6e41a
int64_t function_6e3f7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6e3f7
    int64_t v1; // 0x6e3f7
    *(int16_t *)(v1 + 0x1ca32b10) = (int16_t)v1;
    __asm_out_133(-104, (char)v1);
    int64_t v2; // 0x6e3f7
    *(int32_t *)a1 = *(int32_t *)&v2;
    bool v3; // 0x6e3f7
    int64_t v4 = (v3 ? -4 : 4) + a2; // 0x6e400
    v2 = v4;
    int64_t result = __asm_in_134((int16_t)a3); // 0x6e405
    if ((a5 & 64) != 0) {
        result = function_6e3c7();
    }
    // 0x6e407
    __readgsbyte(v4);
    return result;
}

// Address range: 0x6e41b - 0x6e46f
int64_t function_6e41b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    __asm_in_135(64);
    int64_t v2; // 0x6e41b
    int16_t v3 = v2; // 0x6e421
    __asm_outsb(v3, (char)v2);
    v1 = a5;
    int64_t v4 = a1;
    int64_t v5; // 0x6e41b
    int64_t v6 = v5;
    char v7 = a5; // 0x6e42c
    __asm_iretd();
    int64_t v8 = __asm_hlt(); // 0x6e428
    char v9 = v8; // 0x6e42c
    char v10 = v7 + v9; // 0x6e42c
    *(char *)v1 = v10;
    int64_t v11; // 0x6e41b
    __asm_outsb(v3, *(char *)&v11);
    while (v10 < 0 == ((v10 ^ v7) & (v10 ^ v9)) < 0 != v10 != 0) {
        // 0x6e425
        v5 = v4;
        v4 = v6;
        v6 = v5;
        v7 = *(char *)&v1;
        __asm_iretd();
        v8 = __asm_hlt();
        v9 = v8;
        v10 = v7 + v9;
        *(char *)v1 = v10;
        __asm_outsb(v3, *(char *)&v11);
    }
    if (v10 < 0 == ((v10 ^ v7) & (v10 ^ v9)) < 0) {
        // 0x6e46e
        return v8 & -256 | (int64_t)__asm_in_136(v3);
    }
    char * v12 = (char *)((v2 & 0xffffffff) - 0xf3f5f36); // 0x6e448
    *v12 = *v12 + (char)(v2 / 256);
    int64_t result = __asm_int1(); // 0x6e457
    *(char *)v6 = (char)result;
    return result;
}

// Address range: 0x6e690 - 0x6e691
int64_t function_6e690(void) {
    // 0x6e690
    int64_t result; // 0x6e690
    return result;
}

// Address range: 0x6e6de - 0x6e702
int64_t function_6e6de(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6e6de
    int64_t v1; // 0x6e6de
    int64_t result = v1 + 0x5deb82e8 & 0xffffffff; // 0x6e6f0
    float80_t v2; // 0x6e6de
    *(int16_t *)(result - 47) = (int16_t)v2;
    *(int64_t *)0xbcd77fa6 = a4;
    return result;
}

// Address range: 0x6e71a - 0x6e71e
int64_t function_6e71a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6e71a
    int64_t result; // 0x6e71a
    return result;
}

// Address range: 0x6e7d7 - 0x6e7d8
int64_t function_6e7d7(int64_t a1) {
    // 0x6e7d7
    int64_t result; // 0x6e7d7
    return result;
}

// Address range: 0x6e7f0 - 0x6e81d
int64_t function_6e7f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = (char)a4 % 32; // 0x6e818
    if (v1 != 0) {
        char * v2 = (char *)(a1 + 109); // 0x6e818
        unsigned char v3 = *v2; // 0x6e818
        *v2 = v3 >> 8 - v1 | v3 << v1;
    }
    int64_t v4; // 0x6e7f0
    return v4 & 0xffffffff;
}

// Address range: 0x6e842 - 0x6e850
int64_t function_6e842(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x6e842
    return a4 & 0xffffffff;
}

// Address range: 0x6e851 - 0x6e877
int64_t function_6e851(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6e851
    int64_t v1; // 0x6e851
    uint64_t v2 = v1;
    bool v3; // 0x6e851
    bool v4 = v3;
    uint32_t v5 = *(int32_t *)0x7b1e166027f20f4; // 0x6e851
    uint32_t v6 = *(int32_t *)(int64_t)v5 + v5; // 0x6e85a
    bool v7 = v4 ? v6 + (int32_t)v4 <= v5 : v6 < v5; // 0x6e85a
    char v8 = *(char *)(v2 + 2); // 0x6e85d
    float80_t v9; // 0x6e851
    *(int64_t *)(a4 + 30) = (int64_t)v9;
    uint32_t v10 = *(int32_t *)0x6130feb0; // 0x6e86a
    *(float64_t *)a1 = (float64_t)v9;
    return function_6e8b6(a1, a2, ((256 * (int64_t)(v8 + (char)(v2 / 256) + (char)v7) | v2 & 0xffff00ff) + 0x76b1203c & 0xffffffff | 0x100000000 * a3) % (int64_t)v10 & 0xffffffff, a4);
}

// Address range: 0x6e8a5 - 0x6e8a7
int64_t function_6e8a5(int64_t a1) {
    // 0x6e8a5
    int64_t result; // 0x6e8a5
    return result;
}

// Address range: 0x6e8ab - 0x6e8ae
int64_t function_6e8ab(void) {
    // 0x6e8ab
    int64_t result; // 0x6e8ab
    return result;
}

// Address range: 0x6e8b6 - 0x6e8b8
int64_t function_6e8b6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6e8b6
    int64_t result; // 0x6e8b6
    return result;
}

// Address range: 0x6e8ba - 0x6e903
int64_t function_6e8ba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6e8ba
    int64_t result; // 0x6e8ba
    if ((a4 & 0xff00 & 256 * result || a4 & -0xff01) == 1) {
        // 0x6e8be
        return function_ffffffffbd27db55();
    }
    // 0x6e8fe
    return result;
}

// Address range: 0x6e910 - 0x6e91f
int64_t function_6e910(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x6e910
    int64_t v1; // 0x6e910
    return function_fffffffff24d5da9(2 * (int32_t)a1 | (int32_t)((char)v1 > 14));
}

// Address range: 0x6e924 - 0x6e927
int64_t function_6e924(int64_t a1) {
    // 0x6e924
    int64_t result; // 0x6e924
    return result;
}

// Address range: 0x6e932 - 0x6e938
int64_t function_6e932(void) {
    // 0x6e932
    int64_t result; // 0x6e932
    return result;
}

// Address range: 0x6e947 - 0x6e94c
int64_t function_6e947(int64_t a1) {
    // 0x6e947
    int64_t result; // 0x6e947
    *(char *)a1 = -1 - (char)result;
    return result;
}

// Address range: 0x6e965 - 0x6ea2e
int64_t function_6e965(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x6e965
    int64_t result; // 0x6e965
    bool v1; // 0x6e965
    if (!v1) {
        int32_t * v2 = (int32_t *)(a2 + 0x630083f1); // 0x6e967
        *v2 = *v2 | -0x122399d0;
        return result;
    }
    uint64_t v3 = result + 8; // 0x6e9d9
    int32_t * v4 = (int32_t *)(a2 + 14); // 0x6e9da
    *v4 = *v4 & (int32_t)a4;
    if (v3 >= a3) {
        // 0x6e9e1
        return result;
    }
    unsigned char v5 = (char)a4 % 32; // 0x6ea20
    if (v5 != 0) {
        char * v6 = (char *)(result - 0x2bce341c); // 0x6ea20
        *v6 = *v6 << v5;
    }
    int64_t v7 = a3 - v3 & 0xffffffff; // 0x6e9dd
    if (*(int32_t *)v7 <= (int32_t)a1) {
        // 0x6e9e1
        return result;
    }
    // 0x6ea2d
    *(int64_t *)v3 = v7;
    return result;
}

// Address range: 0x6ea34 - 0x6ea78
int64_t function_6ea34(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint16_t v1 = (int16_t)a3; // 0x6ea39
    __asm_outsb(v1, (char)a2);
    int64_t result = __asm_int1(); // 0x6ea3f
    int32_t * v2 = (int32_t *)(a4 - 66); // 0x6ea46
    uint32_t v3 = *v2; // 0x6ea46
    *v2 = v3 + 0x6a04adb7;
    if (v3 > 0x95fb5248) {
        // 0x6ea94
        return result;
    }
    // 0x6ea57
    *(char *)a1 = __asm_insb(v1 % 256 | (int16_t)&g1);
    *(int64_t *)0x616170d0 = a4 - 1;
    return result;
}

// Address range: 0x2b7175 - 0x2b7182
int64_t function_2b7175(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b7175
    int64_t result; // 0x2b7175
    unsigned char v1 = (char)result;
    *(char *)result = v1 / 64 | 4 * v1;
    return result;
}

// Address range: 0x2b7193 - 0x2b71ad
int64_t function_2b7193(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b7193
    int64_t v1; // 0x2b7193
    *(int32_t *)0x620620772f91cc00 = (int32_t)v1;
    char * v2 = (char *)(a4 - 0x3cff6754); // 0x2b719c
    *v2 = 16 * *v2;
    return function_ffffffffaf495efe();
}

// Address range: 0x2b71f2 - 0x2b7234
int64_t function_2b71f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b71f2
    unknown_ffffffff8165784a();
    int64_t v1; // 0x2b71f2
    *(int32_t *)a2 = (int32_t)v1 + (int32_t)a1;
    __asm_in_135(106);
    int64_t result = unknown_73e8e09(); // 0x2b7202
    int32_t * v2 = (int32_t *)(result - 104); // 0x2b7208
    int32_t v3 = v1; // 0x2b7208
    *v2 = *v2 + v3;
    if (*(char *)(result + 0x801e854) > (char)v1) {
        // 0x2b7213
        return result;
    }
    int64_t v4 = 0x100000000 * result >> 32; // 0x2b7223
    int64_t v5 = v4 * v4; // 0x2b7223
    int32_t * v6 = (int32_t *)(v5 & 0xffffffff); // 0x2b7225
    *v6 = *v6 + (int32_t)v5;
    *(int64_t *)((int64_t)(*(int32_t *)(a3 - 0x5b98fe18 + v1) | v3) - 8) = 97;
    int64_t result2 = unknown_ffffffffc45cb633(); // 0x2b722d
    *(int32_t *)a1 = (int32_t)result2;
    return result2;
}

// Address range: 0x2b729a - 0x2b729b
int64_t function_2b729a(void) {
    // 0x2b729a
    int64_t result; // 0x2b729a
    return result;
}

// Address range: 0x2b729d - 0x2b72a8
int64_t function_2b729d(int64_t a1) {
    uint64_t v1 = unknown_ffffffffb61802a7(a1); // 0x2b729d
    bool v2; // 0x2b729d
    return 256 * (v1 / 0x4000 % 4 | 4 * (int64_t)(bool)v2 | v1 / 32 & 248) | v1 & -0xff01;
}

// Address range: 0x2b72b8 - 0x2b72b9
int64_t function_2b72b8(void) {
    // 0x2b72b8
    int64_t result; // 0x2b72b8
    return result;
}

// Address range: 0x2b72c4 - 0x2b72eb
int64_t function_2b72c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b72c4
    bool v1; // 0x2b72c4
    int64_t v2 = (v1 ? -1 : 1) + a1; // 0x2b72c4
    int32_t * v3 = (int32_t *)(a4 + 0x670657fa); // 0x2b72c7
    int64_t result; // 0x2b72c4
    *v3 = *v3 + (int32_t)result;
    *(int32_t *)(v2 - 111) = (int32_t)a4;
    float80_t v4; // 0x2b72c4
    *(int16_t *)(result + 0x7f7b5ead) = (int16_t)v4;
    int32_t * v5 = (int32_t *)(4 * result - 0x4ccba14a); // 0x2b72d8
    *v5 = *v5 + (int32_t)v2;
    *(int32_t *)0x1e826868408f8ff = (int32_t)result;
    return result;
}

// Address range: 0x2b72ec - 0x2b730b
int64_t function_2b72ec(int64_t a1, int64_t a2, uint64_t a3) {
    unsigned char v1 = *(char *)0x1e85875d62e6156; // 0x2b72ee
    unsigned char v2 = llvm_ctpop_i8(v1 & (char)(a3 / 256)); // 0x2b72f7
    int64_t v3; // 0x2b72ec
    int64_t v4 = v3 & -256 | (int64_t)v1; // 0x2b72f9
    if (v2 % 2 == 0) {
        v4 = function_2b72b8();
    }
    // 0x2b72fb
    *(int32_t *)0x440e2e8f2439e34 = (int32_t)v4;
    unknown_3ad38e0a();
    return function_2b729a();
}

// Address range: 0x2b733c - 0x2b7355
int64_t function_2b733c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2b733c
    int64_t v1; // 0x2b733c
    uint64_t v2 = v1;
    char * v3 = (char *)(a3 - 42 + 2 * v2); // 0x2b733c
    *v3 = *v3 + (char)(v2 / 256);
    unknown_c871046();
    return unknown_6eab7455(a5);
}

// Address range: 0x2b7360 - 0x2b7368
int64_t function_2b7360(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2b7360
    int64_t result; // 0x2b7360
    return result;
}

// Address range: 0x2b7391 - 0x2b7392
int64_t function_2b7391(void) {
    // 0x2b7391
    int64_t result; // 0x2b7391
    return result;
}

// Address range: 0x2b739c - 0x2b739e
int64_t function_2b739c(void) {
    // 0x2b739c
    int64_t result; // 0x2b739c
    return result;
}

// Address range: 0x2b73e4 - 0x2b73e7
int64_t function_2b73e4(void) {
    // 0x2b73e4
    int64_t result; // 0x2b73e4
    return result;
}

// Address range: 0x2b7407 - 0x2b740c
int64_t function_2b7407(void) {
    while (true) {
        // 0x2b7409
        __asm_int1();
    }
}

// Address range: 0x2b7528 - 0x2b752e
int64_t function_2b7528(void) {
    // 0x2b7528
    int64_t result; // 0x2b7528
    return result;
}

// Address range: 0x2b7578 - 0x2b7579
int64_t function_2b7578(void) {
    // 0x2b7578
    int64_t result; // 0x2b7578
    return result;
}

// Address range: 0x2b7588 - 0x2b758a
int64_t function_2b7588(void) {
    // 0x2b7588
    int64_t v1; // 0x2b7588
    return function_2b7591(v1, v1, v1, v1);
}

// Address range: 0x2b758a - 0x2b7591
int64_t function_2b758a(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2b758a
    int64_t result; // 0x2b758a
    int32_t * v1 = (int32_t *)(result + 8 * result); // 0x2b758a
    *v1 = *v1 + (int32_t)a3;
    return result;
}

// Address range: 0x2b7591 - 0x2b75dc
int64_t function_2b7591(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x2b7591
    int64_t v1; // 0x2b7591
    *(char *)-0x4550eac1fe1703e4 = (char)v1;
    __asm_out_137((int16_t)a3, (int32_t)v1);
    *(char *)a4 = (char)v1 - 24;
    *(int32_t *)-0x78d478b1 = *(int32_t *)-0x78d478b1 + (int32_t)v1;
    int64_t v2 = a1; // bp-8, 0x2b75aa
    unsigned char v3 = *(char *)(v1 + 0x6d666e6) | (char)a4; // 0x2b75ab
    int32_t * v4 = (int32_t *)(v1 - 24);
    int32_t * v5 = (int32_t *)(a2 + 0x7e031c3d);
    int32_t * v6 = (int32_t *)(a1 - 119);
    int32_t v7 = a1;
    char * v8 = (char *)(a3 - 45 + 8 * (a4 & 0x1fffffffffffff00 | (int64_t)v3));
    int64_t v9 = unknown_ffffffff93dd93b8(); // 0x2b75b2
    *v8 = *v8 + v3;
    char * v10 = (char *)v9; // 0x2b75bb
    *v10 = *v10 + v3;
    *v4 = *v4 + (int32_t)a3;
    *v5 = *v5 + (int32_t)(int64_t)&v2;
    int32_t v11 = *v6; // 0x2b75d1
    int32_t v12 = v11 + v7; // 0x2b75d1
    *v6 = v12;
    while (v12 < 0 == ((v12 ^ v11) & (v12 ^ v7)) < 0) {
        // 0x2b75b2
        v9 = unknown_ffffffff93dd93b8();
        *v8 = *v8 + v3;
        v10 = (char *)v9;
        *v10 = *v10 + v3;
        *v4 = *v4 + (int32_t)a3;
        *v5 = *v5 + (int32_t)(int64_t)&v2;
        v11 = *v6;
        v12 = v11 + v7;
        *v6 = v12;
    }
    int16_t v13 = v9; // 0x2b75c6
    int16_t v14 = (int16_t)*(char *)-0x34b11c4b; // 0x2b75c6
    unsigned char v15 = (char)(v13 / v14); // 0x2b75cd
    unsigned char v16 = 2 * v15; // 0x2b75cd
    return v9 & -0x10000 | (int64_t)(256 * (v13 % v14)) | (int64_t)(v16 - (char)(a4 / 256) + (char)(v16 < v15));
}

// Address range: 0x2b761b - 0x2b7620
int64_t function_2b761b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2b761b
    int64_t result; // 0x2b761b
    *(int32_t *)a1 = (int32_t)result + (int32_t)a2;
    return result;
}

// Address range: 0x2b7624 - 0x2b762d
int64_t function_2b7624(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b7624
    int64_t v1; // 0x2b7624
    return v1 & -256 | 2;
}

// Address range: 0x2b763c - 0x2b763f
int64_t function_2b763c(void) {
    // 0x2b763c
    int64_t result; // 0x2b763c
    return result;
}

// Address range: 0x2b76c7 - 0x2b774d
int64_t function_2b76c7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x2b76c7
    int64_t v1; // 0x2b76c7
    int64_t v2 = v1 ^ a4 / 256;
    int64_t result = unknown_64247fd0(); // 0x2b76ca
    int64_t v3 = a3; // bp-8, 0x2b76cf
    if ((char)v2 != 0) {
        // 0x2b76d4
        return result;
    }
    int64_t v4 = 256 * v2 & 0xff00 | a4 & -0xff01; // 0x2b76c7
    int64_t v5 = a3 & -0xff01 | (int64_t)&g2; // 0x2b76d0
    int64_t v6 = unknown_1090bddd(); // 0x2b76d7
    __asm_fbld(*(float80_t *)(v6 + 0x1e8ba28));
    int32_t v7 = (int32_t)v6 & -0x4baa8e8a; // 0x2b76e2
    char v8 = __asm_in_136((int16_t)v5); // 0x2b76e7
    if (v7 >= 0 != v7 != 0) {
        int64_t v9 = v8; // 0x2b76e7
        int32_t * v10 = (int32_t *)(v4 + 0x2e8bfa54); // 0x2b76ec
        *v10 = *v10 + (int32_t)v5;
        return (v6 | v9) & -256 | (v2 + v9) % 256;
    }
    // 0x2b7722
    unknown_14a13028();
    *(int32_t *)a1 = (int32_t)v4;
    bool v11; // 0x2b76c7
    __asm_sti((v11 ? -4 : 4) + a1);
    int64_t v12 = unknown_ab776e(); // 0x2b773d
    int32_t * v13 = (int32_t *)(v1 + 2); // 0x2b7742
    *v13 = *v13 - 1;
    int32_t * v14 = (int32_t *)(v1 - 0x16ffbe00); // 0x2b7747
    *v14 = *v14 + (int32_t)(int64_t)&v3;
    return (v12 + 184) % 256 | v12 & -256;
}

// Address range: 0x2b774f - 0x2b7758
int64_t function_2b774f(void) {
    // 0x2b774f
    int64_t v1; // 0x2b774f
    return v1 & 0x61c6a351 | 0x9e395cae;
}

// Address range: 0x2b777e - 0x2b777f
int64_t function_2b777e(void) {
    // 0x2b777e
    int64_t result; // 0x2b777e
    return result;
}

// Address range: 0x2b77da - 0x2b77df
int64_t function_2b77da(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2b77da
    int64_t result; // 0x2b77da
    bool v1; // 0x2b77da
    if (!v1) {
        result = function_2b777e();
    }
    // 0x2b77de
    return result;
}

// Address range: 0x2b7800 - 0x2b7803
int64_t function_2b7800(void) {
    // 0x2b7800
    int64_t result; // 0x2b7800
    return result;
}

// Address range: 0x2b7809 - 0x2b782f
int64_t function_2b7809(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int3_t v2; // 0x2b7809
    *(float32_t *)(a3 - 24) = (float32_t)__frontend_reg_load_fpr(v2);
    uint32_t v3 = *(int32_t *)&v1; // 0x2b780c
    int64_t v4; // 0x2b7809
    uint32_t v5 = v3 + (int32_t)v4; // 0x2b780c
    *(int32_t *)a4 = v5;
    int64_t v6 = __asm_int1(); // 0x2b780e
    int64_t v7; // 0x2b7809
    unsigned char v8 = *(char *)&v7; // 0x2b780f
    unsigned char v9 = v8 + (char)v6 + (char)(v5 < v3); // 0x2b780f
    bool v10; // 0x2b7809
    v7 = (v10 ? -1 : 1) + a1;
    int64_t result = v6 & -256 | (int64_t)v9; // 0x2b7812
    int64_t v11; // 0x2b7809
    if (v9 < v8) {
        char * v12 = (char *)(a2 - 0x64581bca); // 0x2b7814
        *v12 = *v12 | (char)v4;
        v11 = unknown_ffffffffeef67420(v7) & 0xffffffff;
        result = __asm_sti(v7);
    }
    char * v13 = (char *)result; // 0x2b7826
    unsigned char v14 = *v13; // 0x2b7826
    *v13 = v14 / 128 | 2 * v14;
    *(int64_t *)(v11 - 8) = a3;
    return result;
}

// Address range: 0x2b782f - 0x2b787f
int64_t function_2b782f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a4 | a3;
    int32_t v3 = v2; // 0x2b7836
    int64_t result = unknown_ffffffffb726593e(); // 0x2b7838
    if (a4 != 1 == v3 == 0) {
        // 0x2b787c
        return result;
    }
    // 0x2b783f
    int64_t v4; // 0x2b782f
    int32_t * v5 = (int32_t *)(result + v4 & 0xffffffff); // 0x2b7841
    *v5 = *v5 + v3;
    uint64_t v6 = unknown_ffffffffab89d449(); // 0x2b7843
    char * v7 = (char *)v6; // 0x2b7848
    *v7 = *v7 + (char)v6;
    char * v8 = (char *)(v2 & 0xffffffff); // 0x2b784e
    *v8 = *v8 + (char)v2;
    char * v9 = (char *)(v6 + 10); // 0x2b7850
    *v9 = *v9 + (char)(v6 / 256);
    return unknown_17e4e65e() & -256 | (int64_t)*(char *)&v1;
}

// Address range: 0x2b787f - 0x2b78ba
int64_t function_2b787f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __asm_int1(); // 0x2b7884
    int64_t v2; // 0x2b787f
    uint64_t v3 = (256 * v1 | v2) & 0xff00; // 0x2b7885
    *(char *)-0x45b21f65 = *(char *)-0x45b21f65 + (char)(v3 / 256);
    char * v4 = (char *)(3 * (v1 & -256 | 200)); // 0x2b789a
    *v4 = *v4 | (char)a3;
    unknown_ffffffffef95c4b5();
    *(int32_t *)((v3 | v2 & -0x10000) - 52) = *(int32_t *)0x523b34260d6c3a;
    int64_t v5; // 0x2b787f
    return (int64_t)&v5;
}

// Address range: 0x2b794d - 0x2b794e
int64_t function_2b794d(int64_t a1) {
    // 0x2b794d
    int64_t result; // 0x2b794d
    return result;
}
