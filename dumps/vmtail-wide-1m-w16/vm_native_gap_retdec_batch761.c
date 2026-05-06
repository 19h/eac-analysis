/*
 * Targeted RetDec C for native executable gap queue batch 761.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x19d685-0x19d885 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19d885-0x19da85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19da85-0x19dc85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19dc85-0x19de85 rank=- name=- kind=- bytes=- uncovered=-
 *   0x19de85-0x19e085 rank=- name=- kind=- bytes=- uncovered=-
 *   0x24917d-0x24937d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24937d-0x24957d rank=- name=- kind=- bytes=- uncovered=-
 *   0x24957d-0x24977d rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_10b55e73();
int64_t function_19d63e();
int64_t function_19d685(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19d6dd(int64_t a1);
int64_t function_19d704(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19d75c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19d7a8(void);
int64_t function_19d7b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19d842(void);
int64_t function_19d871(void);
int64_t function_19d881(void);
int64_t function_19d8ad(int64_t a1, int64_t a2);
int64_t function_19d8bd(void);
int64_t function_19d8dd(void);
int64_t function_19d8ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_19d952(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19d988(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19da58(void);
int64_t function_19da9c(void);
int64_t function_19daf7(void);
int64_t function_19db0d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_19db17(void);
int64_t function_19db1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19db29(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19db59(void);
int64_t function_19db5c(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19db92(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19dc20(void);
int64_t function_19dc87(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_19dd60(void);
int64_t function_19dda2(void);
int64_t function_19dddd(void);
int64_t function_19de06(int64_t a1);
int64_t function_19de42(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19de59(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_19de8e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_19dfe3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_19e03d(void);
int64_t function_24917d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_249192(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2492f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_24945f(void);
int64_t function_249487(void);
int64_t function_2494a5(void);
int64_t function_2494b0(int64_t a1, int64_t a2);
int64_t function_2494c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24956f(void);
int64_t function_2495d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t result, int64_t a10);
int64_t function_24960f(void);
int64_t function_249615(void);
int64_t function_249642(void);
int64_t function_249661(void);
int64_t function_2496ad(void);
int64_t function_2496f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24972c(void);
int64_t function_249740(void);
int64_t function_249744(void);
int64_t function_249747(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_249749(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24d1b5();
int64_t function_cf3c7();
int64_t function_ffffffff96482660();
int64_t function_ffffffffada2158c();
int64_t function_ffffffffc79ada1d();
int64_t function_ffffffffd6cefc97();
int64_t function_ffffffffe8756d26();
int64_t unknown_1a553e99();
int64_t unknown_6023eb6d();
int64_t unknown_68bdb8e3();
int64_t unknown_6dd998();
int64_t unknown_821eeb8();
int64_t unknown_ffffffffa926efd6();
int64_t unknown_ffffffffcb3820cc();
int64_t unknown_ffffffffdb1cf879();
int64_t unknown_ffffffffdd1ff3bd();
int64_t unknown_ffffffffe9a5fc4c();

// Address range: 0x19d685 - 0x19d699
int64_t function_19d685(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if (a4 != 1) {
        function_19d63e();
    }
    // 0x19d687
    return 0x9b17a22e;
}

// Address range: 0x19d6dd - 0x19d6e2
int64_t function_19d6dd(int64_t a1) {
    // 0x19d6dd
    int64_t result; // 0x19d6dd
    return result;
}

// Address range: 0x19d704 - 0x19d70e
int64_t function_19d704(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 + 0x4e8f79d + 4 * a4); // 0x19d704
    *v1 = *v1 + (int32_t)a2;
    int64_t v2; // 0x19d704
    return v2 & -256 | (int64_t)__asm_in(59);
}

// Address range: 0x19d75c - 0x19d761
int64_t function_19d75c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19d75c
    int64_t result; // 0x19d75c
    return result;
}

// Address range: 0x19d7a8 - 0x19d7ad
int64_t function_19d7a8(void) {
    // 0x19d7a8
    return function_ffffffffd6cefc97();
}

// Address range: 0x19d7b7 - 0x19d7e5
int64_t function_19d7b7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19d7b7
    float80_t v1; // 0x19d7b7
    *(float32_t *)a2 = (float32_t)v1;
    int32_t * v2 = (int32_t *)(a3 + 0x50ff8ef0); // 0x19d7cb
    int32_t v3 = *v2 | (int32_t)a2; // 0x19d7cb
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x19d7cb
    *v2 = v3;
    int64_t v5 = a5 & -0xff01 | 0x4000 * (int64_t)(v3 == 0) | 0x8000 * (int64_t)(v3 < 0) | 1024 * (int64_t)(v4 % 2 == 0) | 512; // 0x19d7d2
    char v6 = *(char *)0x1449d6da; // 0x19d7d3
    int64_t v7; // 0x19d7b7
    *(char *)0x1449d6da = v6 + (char)((uint64_t)v7 / 256);
    __asm_int(52);
    int32_t * v8 = (int32_t *)(v5 + 9); // 0x19d7dc
    *v8 = *v8 + (int32_t)v5;
    return function_ffffffffe8756d26();
}

// Address range: 0x19d842 - 0x19d843
int64_t function_19d842(void) {
    // 0x19d842
    int64_t result; // 0x19d842
    return result;
}

// Address range: 0x19d871 - 0x19d873
int64_t function_19d871(void) {
    // 0x19d871
    int64_t v1; // 0x19d871
    return function_19d8ed(v1, v1, v1, v1, (int64_t)&g5);
}

// Address range: 0x19d881 - 0x19d884
int64_t function_19d881(void) {
    // 0x19d881
    int64_t result; // 0x19d881
    return result;
}

// Address range: 0x19d8ad - 0x19d8b9
int64_t function_19d8ad(int64_t a1, int64_t a2) {
    // 0x19d8ad
    int64_t v1; // 0x19d8ad
    *(char *)-0x3ab98e4c = *(char *)-0x3ab98e4c + (char)(v1 / 256);
    *(char *)a1 = (char)v1;
    return v1 & 0xffffffff;
}

// Address range: 0x19d8bd - 0x19d8be
int64_t function_19d8bd(void) {
    // 0x19d8bd
    int64_t result; // 0x19d8bd
    return result;
}

// Address range: 0x19d8dd - 0x19d8df
int64_t function_19d8dd(void) {
    // 0x19d8dd
    return function_19d8bd();
}

// Address range: 0x19d8ed - 0x19d951
int64_t function_19d8ed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x19d8ed
    int64_t v1; // 0x19d8ed
    bool v2; // 0x19d8ed
    if (v2 || v2) {
        // 0x19d8ef
        return v1 - (v2 ? 0x13d00b4 : 0x13d00b3) & 0xffffffff;
    }
    char v3 = *(char *)0x4bfc7243; // 0x19d93c
    *(char *)0x4bfc7243 = v3 + (char)((uint64_t)v1 / 256);
    char * v4 = (char *)(0xffffffab * a2 & 0xffffffff); // 0x19d94f
    *v4 = *v4 - 63;
    return a4 & 0xffffff00 | 193;
}

// Address range: 0x19d952 - 0x19d973
int64_t function_19d952(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = __asm_iretd(); // 0x19d952
    int64_t v2; // 0x19d952
    int32_t * v3 = (int32_t *)(v2 + 0x3aaba263); // 0x19d95c
    *v3 = (int32_t)a1 & -256 | *v3 | 163;
    int64_t v4; // 0x19d952
    *(char *)v4 = *(char *)&v4 | (char)a3;
    return __asm_int1(v1 & 0xffffffff, a2, a3, 0x68ff018b);
}

// Address range: 0x19d988 - 0x19d9f9
int64_t function_19d988(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t result; // 0x19d988
    bool v2; // 0x19d988
    if (v2) {
        // 0x19d98f
        return result;
    }
    int64_t v3 = 257 * a3 & 0xff00 | a3 & -0xff01; // 0x19d9a6
    *(char *)(2 * result) = (char)result;
    *(int32_t *)a1 = (int32_t)__asm_int1(a1, 0x500b60db, v3, v1);
    int32_t * v4 = (int32_t *)v3; // 0x19d9ba
    *v4 = *v4 + (int32_t)v1;
    char v5 = __asm_in(117); // 0x19d9be
    int16_t v6 = v3; // 0x19d9c0
    __asm_outsb(v6, *(char *)0x500b60db);
    int64_t v7; // 0x19d988
    int32_t v8 = *(int32_t *)&v7; // 0x19d9c8
    int32_t v9 = (v2 ? 0xfffffffc : 4) + a1; // 0x19d9c8
    int32_t v10 = v8 + v9; // 0x19d9c8
    *(int32_t *)v7 = v10;
    char * v11 = (char *)0x500b60db; // 0x19d9ca
    if (v10 < 0 != ((v10 ^ v8) & (v10 ^ v9)) < 0) {
        // 0x19d9cc
        v7 = 0x82ed0ff5;
        *(char *)0x500b60db = *(char *)0x500b60db | v5 + 79;
        *(char *)v1 = *(char *)&v1 + (char)a3;
        v11 = v2 ? (char *)0x500b60d7 : (char *)0x500b60df;
    }
    // 0x19d9e0
    __asm_outsb(v6, *v11);
    uint32_t v12 = (int32_t)v1 % 32; // 0x19d9e8
    if (v12 != 0) {
        int32_t * v13 = (int32_t *)(v3 - 0x6f00dbab);
        *v13 = *v13 >> v12;
    }
    char * v14 = (char *)v3; // 0x19d9ee
    *v14 = *v14 + (char)(v7 / 256);
    return function_ffffffffc79ada1d();
}

// Address range: 0x19da58 - 0x19da59
int64_t function_19da58(void) {
    // 0x19da58
    int64_t result; // 0x19da58
    return result;
}

// Address range: 0x19da9c - 0x19daa3
int64_t function_19da9c(void) {
    // 0x19da9c
    return function_10b55e73();
}

// Address range: 0x19daf7 - 0x19daf8
int64_t function_19daf7(void) {
    // 0x19daf7
    int64_t result; // 0x19daf7
    return result;
}

// Address range: 0x19db0d - 0x19db12
int64_t function_19db0d(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x19db0d
    int64_t result; // 0x19db0d
    *(char *)a4 = (char)(result & a4 / 256);
    return result;
}

// Address range: 0x19db17 - 0x19db18
int64_t function_19db17(void) {
    // 0x19db17
    int64_t result; // 0x19db17
    return result;
}

// Address range: 0x19db1c - 0x19db29
int64_t function_19db1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19db1c
    int64_t result; // 0x19db1c
    bool v1; // 0x19db1c
    if (v1) {
        result = function_19daf7();
    }
    // 0x19db1e
    *(char *)a1 = __asm_insb((int16_t)a3);
    char v2 = *(char *)0xfdf5f27; // 0x19db20
    int64_t v3; // 0x19db1c
    *(char *)0xfdf5f27 = v2 + (char)((uint64_t)v3 / 256);
    return result;
}

// Address range: 0x19db29 - 0x19db40
int64_t function_19db29(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19db29
    int64_t v1; // 0x19db29
    *(char *)a1 = (char)v1;
    bool v2; // 0x19db29
    int32_t * v3 = (int32_t *)(a2 + 46 + (v2 ? -1 : 1)); // 0x19db39
    *v3 = *v3 + (int32_t)v1;
    return function_19db17();
}

// Address range: 0x19db59 - 0x19db5c
int64_t function_19db59(void) {
    // 0x19db59
    int64_t result; // 0x19db59
    return result;
}

// Address range: 0x19db5c - 0x19db60
int64_t function_19db5c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19db5c
    int64_t result; // 0x19db5c
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x19db92 - 0x19dba8
int64_t function_19db92(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_6dd998() & -0xff01 | (int64_t)&g2; // 0x19db97
    return v1 & -256 | (int64_t)((char)v1 - *(char *)(a4 - 0x7ec2fdd3));
}

// Address range: 0x19dc20 - 0x19dc21
int64_t function_19dc20(void) {
    // 0x19dc20
    int64_t result; // 0x19dc20
    return result;
}

// Address range: 0x19dc87 - 0x19dd34
int64_t function_19dc87(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x19dc87
    int64_t v1; // 0x19dc87
    int64_t v2 = v1;
    int64_t v3 = a2;
    int32_t * v4 = (int32_t *)(a2 - 0x32f9a70e); // 0x19dc87
    *v4 = *v4 + (int32_t)a3;
    char v5 = *(char *)((v2 & -0x10000 | (int64_t)&g4 | (v2 + 162 + (int64_t)((v2 & 256) != 0)) % 256) + 4 * a4); // 0x19dc93
    int64_t v6 = 256 * (int64_t)(v5 ^ (char)(a4 / 256)) | a4 & -0xff01; // 0x19dc93
    char v7 = v1 / 256; // 0x19dc9d
    *(char *)0x4b9e7a4 = *(char *)0x4b9e7a4 + v7;
    unsigned char v8 = *(char *)&v3; // 0x19dcb0
    int32_t * v9 = (int32_t *)v6; // 0x19dcb2
    uint32_t v10 = *v9; // 0x19dcb2
    *v9 = v10 / 2 | 0x80000000 * v10;
    *(char *)0x4c0e44bb = *(char *)0x4c0e44bb + v7;
    *(char *)(v6 + 104) = 0;
    *(char *)-0xfe28719 = *(char *)-0xfe28719 + v7;
    int64_t v11 = (int64_t)*(char *)&v3; // 0x19dcef
    int64_t v12 = (int64_t)(*(int32_t *)0x375d5e54fe26580a & -256); // 0x19dcef
    int64_t v13 = v12 | v11; // 0x19dcef
    bool v14; // 0x19dc87
    v3 += (v14 ? -1 : 1);
    char * v15 = (char *)(8 * v13 + 0x13d0050); // 0x19dcf3
    char v16 = *v15 + v8; // 0x19dcf3
    *v15 = v16;
    __asm_out((int16_t)(v1 % 256 | a3), (int32_t)v13);
    if (v16 != 0) {
        // 0x19dd30
        __asm_iretd();
        return (int64_t)*(int32_t *)v3;
    }
    int32_t * v17 = (int32_t *)(v3 + 85); // 0x19dcfd
    uint32_t v18 = *v17; // 0x19dcfd
    *v17 = v18 / 512 | 0x800000 * v18;
    __asm_int(-80);
    if (v1 != 1 != (v12 & 0x4000) != 0) {
        // 0x19dd07
        return v13 + 0x13d0043 & 0xffffffff;
    }
    unsigned char v19 = *(char *)((v1 & -256 | (int64_t)v8) + v11); // 0x19dcce
    __asm_out_133(-68, v19);
    return (int64_t)v19 | v12;
}

// Address range: 0x19dd60 - 0x19dd68
int64_t function_19dd60(void) {
    // 0x19dd60
    int64_t result; // 0x19dd60
    return result;
}

// Address range: 0x19dda2 - 0x19ddaa
int64_t function_19dda2(void) {
    // 0x19dda2
    int64_t result; // 0x19dda2
    return result;
}

// Address range: 0x19dddd - 0x19dde5
int64_t function_19dddd(void) {
    // 0x19dddd
    unknown_68bdb8e3();
    int64_t v1; // 0x19dddd
    return function_19de59(v1, v1, v1, v1);
}

// Address range: 0x19de06 - 0x19de09
int64_t function_19de06(int64_t a1) {
    // 0x19de06
    int64_t result; // 0x19de06
    return result;
}

// Address range: 0x19de42 - 0x19de4d
int64_t function_19de42(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19de42
    return unknown_ffffffffe9a5fc4c(a1, a2, a3, a4);
}

// Address range: 0x19de59 - 0x19de6d
int64_t function_19de59(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x19de59
    int64_t v1; // 0x19de59
    int32_t * v2 = (int32_t *)(v1 - 12); // 0x19de5d
    *v2 = *v2 + (int32_t)a4;
    return unknown_6023eb6d();
}

// Address range: 0x19de8e - 0x19df3e
int64_t function_19de8e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x19de8e
    int64_t v3 = v2 % 256 | v2; // 0x19de91
    uint64_t v4 = unknown_1a553e99(); // 0x19de93
    char * v5 = (char *)(v4 + 0x3226000); // 0x19de98
    *v5 = *v5 + (char)v4;
    char * v6 = (char *)(v3 + 0x4201e800); // 0x19de9e
    *v6 = *v6 + (char)(a4 / 256);
    char * v7 = (char *)(a4 + 0x2ee93a95); // 0x19dea4
    *v7 = *v7 + (char)(v4 / 256);
    unknown_821eeb8();
    float80_t v8; // 0x19de8e
    *(float32_t *)(v2 - 0x54f128fd) = (float32_t)v8;
    *(char *)a2 = *(char *)&v1 + (char)(v2 / 256);
    int32_t * v9 = (int32_t *)v3; // 0x19dec2
    *v9 = *v9 + (int32_t)a1;
    int64_t result = unknown_ffffffffa926efd6(); // 0x19ded0
    char * v10 = (char *)(a1 - 0x7744db68); // 0x19ded5
    *v10 = *v10 + (char)a3;
    return result;
}

// Address range: 0x19dfe3 - 0x19dfe6
int64_t function_19dfe3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x19dfe3
    int64_t result; // 0x19dfe3
    return result;
}

// Address range: 0x19e03d - 0x19e041
int64_t function_19e03d(void) {
    // 0x19e03d
    int64_t v1; // 0x19e03d
    return 0x1000000000000 * v1 >> 48;
}

// Address range: 0x24917d - 0x249192
int64_t function_24917d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24917d
    int64_t v1; // 0x24917d
    return function_cf3c7(a1, a2, a3, a5, v1, v1);
}

// Address range: 0x249192 - 0x2492f2
int64_t function_249192(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x249192
    int64_t v1; // bp-56, 0x249192
    int64_t v2 = (int64_t)&v1; // 0x24929c
    v1 = 0x2422e1;
    *(int64_t *)(v2 - 8) = v2;
    int64_t v3 = v1; // 0x2492e5
    v1 = v2 + 16;
    int64_t v4; // 0x249192
    return function_cf3c7(a1, a2, a3, v3, a5, v4);
}

// Address range: 0x2492f2 - 0x24945f
int64_t function_2492f2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2492f2
    int64_t v1; // bp-32, 0x2492f2
    int64_t v2 = (int64_t)&v1; // 0x2493ab
    int64_t v3 = v2 + 16; // 0x2493b3
    int64_t * v4 = (int64_t *)v3; // 0x2493b3
    int64_t v5 = *v4; // 0x2493b3
    int64_t v6 = v2 - 8; // 0x2493b3
    int64_t * v7 = (int64_t *)v6; // 0x2493b3
    int64_t * v8 = (int64_t *)(v2 - 16); // 0x2493b7
    *(int64_t *)(v2 - 24) = v5;
    *v7 = v5;
    *v8 = a6;
    *v7 = a7;
    *v4 = v1;
    *(int64_t *)(v2 + 32) = *v7;
    *v7 = a3;
    v1 = v3;
    int64_t v9 = v2 + 8; // 0x24943c
    v1 = *(int64_t *)v9;
    *v8 = v6;
    *v7 = v9;
    return function_cf3c7(a1, a2, a3, a4, a5, a6);
}

// Address range: 0x24945f - 0x249464
int64_t function_24945f(void) {
    // 0x24945f
    return function_24d1b5();
}

// Address range: 0x249487 - 0x249488
int64_t function_249487(void) {
    // 0x249487
    int64_t result; // 0x249487
    return result;
}

// Address range: 0x2494a5 - 0x2494a6
int64_t function_2494a5(void) {
    // 0x2494a5
    int64_t result; // 0x2494a5
    return result;
}

// Address range: 0x2494b0 - 0x2494c1
int64_t function_2494b0(int64_t a1, int64_t a2) {
    // 0x2494b0
    unknown_ffffffffdd1ff3bd(a1, a2);
    return function_ffffffff96482660();
}

// Address range: 0x2494c1 - 0x2494d7
int64_t function_2494c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffcb3820cc(); // 0x2494c6
    int64_t v2; // 0x2494c1
    char v3 = 2 * (char)v2; // 0x2494cb
    char * v4 = (char *)a3; // 0x2494cb
    *v4 = v3;
    int64_t v5; // 0x2494c1
    unsigned char v6 = *(char *)&v5; // 0x2494d0
    *v4 = v6 / 2 | 128 * v6;
    int64_t result = v1; // 0x2494d2
    if (a4 != 1 && v3 != 0) {
        result = function_249487();
    }
    // 0x2494d4
    return result;
}

// Address range: 0x24956f - 0x249574
int64_t function_24956f(void) {
    // 0x24956f
    return function_ffffffffada2158c();
}

// Address range: 0x2495d6 - 0x24960e
int64_t function_2495d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t result, int64_t a10) {
    // 0x2495d6
    int64_t v1; // 0x2495d6
    int64_t v2 = v1;
    int64_t v3 = a6;
    int64_t v4 = a10;
    *(int32_t *)v2 = (int32_t)v2 / 2;
    int32_t * v5 = (int32_t *)(v2 - 0x67671a8c); // 0x2495e3
    *v5 = *v5 ^ 2;
    *(char *)v3 = *(char *)&v3 - (char)v1;
    v4 = 0x3d004808;
    int32_t * v6 = (int32_t *)(a1 + 57 + ((a7 & (int64_t)&g1) == 0 ? 4 : -4)); // 0x24960b
    *v6 = *v6 + (int32_t)(int64_t)&v4;
    return result;
}

// Address range: 0x24960f - 0x249614
int64_t function_24960f(void) {
    // 0x24960f
    int64_t result; // 0x24960f
    return result;
}

// Address range: 0x249615 - 0x249616
int64_t function_249615(void) {
    // 0x249615
    int64_t result; // 0x249615
    return result;
}

// Address range: 0x249642 - 0x249643
int64_t function_249642(void) {
    // 0x249642
    int64_t result; // 0x249642
    return result;
}

// Address range: 0x249661 - 0x249662
int64_t function_249661(void) {
    // 0x249661
    int64_t result; // 0x249661
    return result;
}

// Address range: 0x2496ad - 0x2496ae
int64_t function_2496ad(void) {
    // 0x2496ad
    int64_t result; // 0x2496ad
    return result;
}

// Address range: 0x2496f8 - 0x24971f
int64_t function_2496f8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2496f8
    int64_t result; // 0x2496f8
    bool v1; // 0x2496f8
    if (a4 != 1 == v1) {
        result = function_2496ad();
    }
    // 0x2496fa
    *(int32_t *)0x175c438f01e80d07 = (int32_t)result;
    __asm_outsd((int16_t)a3, (int32_t)a2);
    int32_t * v2 = (int32_t *)(a2 - 0xd7759f8); // 0x249712
    int64_t v3; // 0x2496f8
    *v2 = *v2 + (int32_t)v3;
    return result;
}

// Address range: 0x24972c - 0x24972d
int64_t function_24972c(void) {
    // 0x24972c
    int64_t result; // 0x24972c
    return result;
}

// Address range: 0x249740 - 0x249741
int64_t function_249740(void) {
    // 0x249740
    int64_t result; // 0x249740
    return result;
}

// Address range: 0x249744 - 0x249746
int64_t function_249744(void) {
    // 0x249744
    int64_t v1; // 0x249744
    return function_249749(v1, v1, v1, v1, v1);
}

// Address range: 0x249747 - 0x249749
int64_t function_249747(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x249747
    int64_t result; // 0x249747
    *(int32_t *)a4 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x249749 - 0x24977a
int64_t function_249749(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    __asm_int1(a1, a2, a3, a4);
    int64_t v2 = a3 & -256 | 104; // 0x24974f
    int32_t * v3 = (int32_t *)(v2 + 92); // 0x249751
    int32_t v4 = *v3 - 1; // 0x249751
    *v3 = v4;
    if (a4 == 0) {
        function_24972c();
    }
    if (v4 >= 0) {
        function_249740();
    }
    // 0x249758
    int64_t v5; // 0x249749
    int32_t * v6 = (int32_t *)(v5 + 0x71faecae); // 0x249758
    *v6 = *v6 - 0x6a3aad50;
    uint32_t v7 = *(int32_t *)0x95c552b0; // 0x24975e
    bool v8; // 0x249749
    int64_t v9 = v8 ? -4 : 4; // 0x24975e
    int64_t v10 = v9 + 0x95c552b0; // 0x24975e
    uint64_t v11 = __asm_wait(v1 + v9, v10); // 0x24975f
    *(int64_t *)v11 = a5;
    char * v12 = (char *)(v2 - 24); // 0x249764
    *v12 = (char)(v7 < *(int32_t *)&v1) - (char)(v11 / 256) + *v12;
    *(int32_t *)v5 = *(int32_t *)&v5 + (int32_t)v11;
    __asm_outsb((int16_t)v2, *(char *)v10);
    int64_t v13; // 0x249749
    *(char *)v11 = *(char *)&v13 - (char)v11;
    return unknown_ffffffffdb1cf879();
}
