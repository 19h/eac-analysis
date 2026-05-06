/*
 * Targeted RetDec C for native executable gap queue batch 676.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x24f6bc-0x24f8bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x24f8bc-0x24fabc rank=- name=- kind=- bytes=- uncovered=-
 *   0x24fabc-0x24fcbc rank=- name=- kind=- bytes=- uncovered=-
 *   0x24fcbc-0x24febc rank=- name=- kind=- bytes=- uncovered=-
 *   0x24febc-0x2500bc rank=- name=- kind=- bytes=- uncovered=-
 *   0x2654c2-0x2656c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2656c2-0x2658c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2658c2-0x265ac2 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
extern int g4;
extern int g5;
extern int g8;
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

int64_t function_24f666();
int64_t function_24f6bc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24f6d6(int64_t a1);
int64_t function_24f6f0(void);
int64_t function_24f71b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24f748(int64_t a1);
int64_t function_24f763(int64_t a1);
int64_t function_24f782(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24f78e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_24f7c4(int64_t a1);
int64_t function_24f855(int64_t a1);
int64_t function_24f8b1(void);
int64_t function_24f8d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_24f977(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24f9e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24fa6b(void);
int64_t function_24fb1b(int64_t a1, int64_t a2);
int64_t function_24fb77(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24fc70(void);
int64_t function_24fcac(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24fd36(int64_t a1);
int64_t function_24fd6f(int64_t a1);
int64_t function_24fd99(void);
int64_t function_24fdaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24fe64(int64_t a1);
int64_t function_24fed8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_24ff87(int64_t a1, int64_t a2, int64_t a3);
int64_t function_24ffa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_24fffb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_25001e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_250067(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_250097(void);
int64_t function_2654c2(void);
int64_t function_2654c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_265623(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2657d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_26597e(void);
int64_t function_2659b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2659c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2659cb(int64_t a1);
int64_t function_2659d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4a0290();
int64_t function_caf2a();
int64_t unknown_28889439();
int64_t unknown_34322348();
int64_t unknown_38a18bca();
int64_t unknown_3ab39fa9();
int64_t unknown_3d26e1fc();
int64_t unknown_608c32e3();
int64_t unknown_6a894b01();
int64_t unknown_6a925050();
int64_t unknown_74e9d5cf();
int64_t unknown_ffffffff825f6782();
int64_t unknown_ffffffff862d1001();
int64_t unknown_ffffffffa391327d();
int64_t unknown_ffffffffb462ef1b();
int64_t unknown_ffffffffe0e87a33();
int64_t unknown_ffffffffe4261975();
int64_t unknown_ffffffffff106da2();

// Address range: 0x24f6bc - 0x24f6d3
int64_t function_24f6bc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x24f6bc
    int64_t v1; // 0x24f6bc
    int32_t v2 = 2 * (int32_t)v1; // 0x24f6c5
    *(int32_t *)a3 = v2;
    int64_t result = v1 + 0xe82bf667 & 0xffffffff; // 0x24f6c7
    if (v2 == 0) {
        result = function_24f666();
    }
    // 0x24f6c9
    *(char *)0xaa001e86fd24fb6 = (char)result;
    return result;
}

// Address range: 0x24f6d6 - 0x24f6d7
int64_t function_24f6d6(int64_t a1) {
    // 0x24f6d6
    int64_t result; // 0x24f6d6
    return result;
}

// Address range: 0x24f6f0 - 0x24f6f3
int64_t function_24f6f0(void) {
    // 0x24f6f0
    int64_t result; // 0x24f6f0
    return result;
}

// Address range: 0x24f71b - 0x24f722
int64_t function_24f71b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x24f71b
    int64_t v1; // 0x24f71b
    *(int32_t *)a3 = (int32_t)v1 + (int32_t)a2;
    return function_4a0290();
}

// Address range: 0x24f748 - 0x24f756
int64_t function_24f748(int64_t a1) {
    // 0x24f748
    int64_t v1; // 0x24f748
    int64_t v2 = v1;
    int64_t result = unknown_6a925050() & -0xff01 | (int64_t)&g5; // 0x24f74f
    bool v3; // 0x24f748
    *(char *)v2 = (char)!v3 + (char)v2 + (char)result;
    return result;
}

// Address range: 0x24f763 - 0x24f764
int64_t function_24f763(int64_t a1) {
    // 0x24f763
    int64_t result; // 0x24f763
    return result;
}

// Address range: 0x24f782 - 0x24f78e
int64_t function_24f782(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24f782
    int64_t v1; // 0x24f782
    int64_t v2 = v1;
    return (v2 + 133) % 256 | v2 & -256;
}

// Address range: 0x24f78e - 0x24f792
int64_t function_24f78e(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 - 40); // 0x24f78e
    *v1 = *v1 + (char)(a3 / 256);
    int64_t result; // 0x24f78e
    return result;
}

// Address range: 0x24f7c4 - 0x24f831
int64_t function_24f7c4(int64_t a1) {
    int64_t result = unknown_74e9d5cf(a1); // 0x24f7c4
    bool v1; // 0x24f7c4
    if (true == !v1) {
        // 0x24f82f
        return (result + 120) % 256 | result & -256;
    }
    // 0x24f7cb
    return result;
}

// Address range: 0x24f855 - 0x24f858
int64_t function_24f855(int64_t a1) {
    // 0x24f855
    int64_t result; // 0x24f855
    return result;
}

// Address range: 0x24f8b1 - 0x24f8b2
int64_t function_24f8b1(void) {
    // 0x24f8b1
    int64_t result; // 0x24f8b1
    return result;
}

// Address range: 0x24f8d4 - 0x24f976
int64_t function_24f8d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t v1 = a4;
    int64_t v2 = a2;
    int64_t v3 = a8;
    unsigned char v4 = *(char *)(a4 + 0x3c057000 + 4 * a4); // 0x24f8d4
    bool v5; // 0x24f8d4
    if (!v5 && !v5) {
        function_24f8b1();
    }
    int64_t v6 = a3 & -0xff01; // 0x24f8d4
    int64_t v7 = unknown_608c32e3(); // 0x24f8dd
    int32_t * v8 = (int32_t *)(a2 - 0x17caeb82); // 0x24f8e3
    *v8 = *v8 ^ (int32_t)a4;
    int64_t v9; // 0x24f8d4
    uint64_t v10 = v7 + v9; // 0x24f8e9
    int32_t * v11 = (int32_t *)(a1 + 34); // 0x24f8f4
    *v11 = *v11 + (int32_t)v1;
    char v12 = *(char *)-0x17da86fd; // 0x24f8fd
    int32_t * v13 = (int32_t *)((256 * (int64_t)v4 | v6) + 1); // 0x24f903
    *v13 = *v13 + (int32_t)v9;
    unsigned char v14 = (char)(v1 / 256 + v10); // 0x24f906
    unsigned char v15 = *(char *)&v1 + v14; // 0x24f906
    int64_t result = 256 * (int64_t)(v12 + (char)(v10 / 256)) | v10 & 0xffff0000 | (int64_t)v15; // 0x24f906
    if (v15 >= v14 && v15 != 0) {
        // 0x24f90d
        return result;
    }
    unsigned char v16 = *(char *)(2 * v9 + 0x3c2ec8c + (v10 & 0xffffffff)) | (char)v9; // 0x24f8eb
    int64_t v17 = v9 & -256 | (int64_t)v16; // 0x24f8eb
    v1 = a7;
    int64_t v18 = unknown_ffffffffb462ef1b(result); // 0x24f915
    int32_t * v19 = (int32_t *)(a7 - 8); // 0x24f923
    *v19 = *v19 + (int32_t)(int64_t)&v3;
    uint32_t v20 = *(int32_t *)(v17 + v9); // 0x24f926
    char v21 = *(char *)-0x75e3431c; // 0x24f929
    *(char *)-0x75e3431c = v21 + v16 + (char)(v20 > -1 - (int32_t)v18);
    char * v22 = (char *)((v6 | (int64_t)&g4) - 74); // 0x24f930
    *v22 = *v22 + (char)v1;
    unknown_28889439();
    int64_t v23 = unknown_34322348(v3) & 0xffffffff; // 0x24f947
    int32_t * v24 = (int32_t *)v1; // 0x24f949
    *v24 = *v24 | (int32_t)v1;
    int64_t v25; // bp+16, 0x24f8d4
    char v26 = *(char *)(v17 + ((int64_t)&v25 & 248)); // 0x24f94b
    *(int64_t *)(v23 - 8) = *(int64_t *)(v2 - 86);
    int64_t v27 = v23 - 16; // 0x24f950
    *(int64_t *)v27 = -0x2d80fe18;
    int32_t * v28 = (int32_t *)(a6 - 0x1a00294c); // 0x24f955
    *v28 = *v28 + (int32_t)v9;
    *(char *)0x24695201e8fe36bc = v26;
    int64_t v29 = __asm_iretd(v3); // 0x24f965
    unsigned char v30 = *(char *)&v2; // 0x24f966
    unsigned char v31 = (char)(v29 / 256); // 0x24f966
    char v32 = v30 - v31; // 0x24f966
    char v33 = llvm_ctpop_i8(v32); // 0x24f966
    *(char *)v2 = v32;
    *(char *)v3 = (char)v29;
    int64_t v34 = 0x4000 * (int64_t)v5 | 1024 * (int64_t)v5 | 512 * (int64_t)v5 | 256 * (int64_t)v5; // 0x24f969
    int64_t v35 = 2048 * (int64_t)(((v32 ^ v30) & (v30 ^ v31)) < 0); // 0x24f968
    bool v36 = v32 < 0; // 0x24f968
    bool v37 = v32 == 0; // 0x24f968
    int64_t v38 = v29; // 0x24f968
    int64_t v39 = v27; // 0x24f968
    int64_t v40 = 16 * (int64_t)(v30 % 16 - v31 % 16 > 15); // 0x24f968
    char v41 = v33; // 0x24f968
    int64_t v42 = v30 < v31; // 0x24f968
    while (true) {
        // 0x24f969
        v39 -= 8;
        *(int64_t *)v39 = v34 | v35 | 128 * (int64_t)v36 | 64 * (int64_t)v37 | v40 | v42 | 4 * (int64_t)(v41 % 2 == 0) | 2;
        int32_t v43 = (int32_t)v38 & -0xdaf2a04; // 0x24f96a
        v41 = llvm_ctpop_i8((char)v43);
        v35 = 0;
        v36 = v43 < 0;
        v37 = v43 == 0;
        v38 = unknown_ffffffffe4261975();
        v40 = 0;
        v42 = 0;
    }
}

// Address range: 0x24f977 - 0x24f9bc
int64_t function_24f977(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffff825f6782(); // 0x24f97c
    float32_t v2 = *(float32_t *)(a3 - 71); // 0x24f981
    int64_t v3 = (int64_t)(0x5101e83a * *(int32_t *)(a3 - 0x5b883c6)); // 0x24f984
    char * v4 = (char *)(v3 - 0x475ad3a8); // 0x24f98e
    *v4 = -1 - *v4;
    int64_t v5; // 0x24f977
    char v6 = v5; // 0x24f994
    *(char *)(v1 + 4 * v5) = v6;
    *(int32_t *)-0x1768a378615bd3bb = (int32_t)unknown_ffffffffff106da2();
    int32_t * v7 = (int32_t *)v3; // 0x24f9aa
    *v7 = *v7 + (int32_t)a2;
    *(int64_t *)0x97fab2b5 = 0;
    float80_t v8; // 0x24f977
    *(float32_t *)(4 * a3 + 17 + v3) = (float32_t)(v8 - (float80_t)v2);
    char * v9 = (char *)(a2 - 83); // 0x24f9b4
    *v9 = *v9 + v6;
    return *(int64_t *)0x97fab2b5;
}

// Address range: 0x24f9e4 - 0x24f9fd
int64_t function_24f9e4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(8 * a3 + a4); // 0x24f9e8
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x24f9e4
    __asm_out((int16_t)a3, (char)v2);
    return unknown_3d26e1fc((int32_t)(a3 | a1));
}

// Address range: 0x24fa6b - 0x24fa6d
int64_t function_24fa6b(void) {
    // 0x24fa6b
    int64_t result; // 0x24fa6b
    return result;
}

// Address range: 0x24fb1b - 0x24fb23
int64_t function_24fb1b(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 - 0x7fe17081); // 0x24fb1b
    int64_t v2; // 0x24fb1b
    *v1 = *v1 + (char)v2;
    int64_t v3; // 0x24fb1b
    return v2 & -256 | (int64_t)*(char *)&v3;
}

// Address range: 0x24fb77 - 0x24fbc6
int64_t function_24fb77(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x24fb77
    int64_t v1; // 0x24fb77
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a2;
    uint64_t v5 = v1 + 0xc8b2432; // 0x24fb77
    char * v6 = (char *)(v5 & 0xffffffff); // 0x24fb7c
    char v7 = a4; // 0x24fb7c
    *v6 = (char)((int32_t)v1 > 0xf374dbcd) + v7 + *v6;
    *(char *)v2 = (char)v2 - v7 + (char)((char)v5 < 178);
    unsigned char v8 = *(char *)(v5 % 256 + v2) & 115; // 0x24fb89
    int64_t result = v5 & 0xffffff00 | (int64_t)v8; // 0x24fb89
    if (a4 != 0) {
        // 0x24fb8d
        return result;
    }
    // 0x24fbaf
    *(char *)v3 = *(char *)&v3 ^ v8;
    *(int32_t *)0x57d5680a = (int32_t)result;
    *(int32_t *)a1 = *(int32_t *)&v4;
    return result;
}

// Address range: 0x24fc70 - 0x24fc73
int64_t function_24fc70(void) {
    // 0x24fc70
    int64_t result; // 0x24fc70
    return result;
}

// Address range: 0x24fcac - 0x24fcbe
int64_t function_24fcac(int64_t a1, int64_t a2, int64_t a3) {
    // 0x24fcac
    int64_t v1; // 0x24fcac
    char * v2 = (char *)(v1 + 2 * v1);
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0x24fcac
    int64_t v4 = v3;
    *(int32_t *)v4 = (int32_t)v4;
    return (int64_t)*(int32_t *)&v3;
}

// Address range: 0x24fd36 - 0x24fd39
int64_t function_24fd36(int64_t a1) {
    // 0x24fd36
    return __asm_hlt(a1);
}

// Address range: 0x24fd6f - 0x24fd71
int64_t function_24fd6f(int64_t a1) {
    // 0x24fd6f
    int64_t result; // 0x24fd6f
    return result;
}

// Address range: 0x24fd99 - 0x24fd9a
int64_t function_24fd99(void) {
    // 0x24fd99
    int64_t result; // 0x24fd99
    return result;
}

// Address range: 0x24fdaa - 0x24fe3c
int64_t function_24fdaa(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24fdaa
    int64_t v1; // 0x24fdaa
    int64_t v2 = v1;
    int64_t v3 = v1 & 0xffffffff; // 0x24fdb4
    bool v4; // 0x24fdaa
    if (!v4 && !v4) {
        int32_t v5 = *(int32_t *)((v1 + a3 & 0xffffffff) + 0x7a25990f); // 0x24fe27
        int64_t v6 = unknown_ffffffffe0e87a33(v5 & (int32_t)a1); // 0x24fe2d
        char v7 = __readgsbyte(256 * (v3 | (int64_t)(char)&g8) + v2 & 0xff00 | v2 & -0xff01); // 0x24fe37
        return 256 * (int64_t)(v7 ^ (char)((int64_t)&g2 >> 8)) | (v6 | (int64_t)&g2) & -0xff01;
    }
    char v8 = *(char *)(v3 - 0x5ffe1787); // 0x24fdb8
    int32_t v9 = *(int32_t *)(a4 & -256 | (int64_t)((char)a4 - v8)); // 0x24fdc2
    uint32_t v10 = v9 & ((int32_t)(v1 / 256 % 256 | a3) ^ 130); // 0x24fdc2
    int64_t result = v10; // 0x24fdaf
    if (v10 != 0) {
        result = function_24fd99();
    }
    // 0x24fdb1
    return result;
}

// Address range: 0x24fe64 - 0x24fe65
int64_t function_24fe64(int64_t a1) {
    // 0x24fe64
    int64_t result; // 0x24fe64
    return result;
}

// Address range: 0x24fed8 - 0x24ff00
int64_t function_24fed8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a4 - 0x5ce5365f); // 0x24fedc
    int64_t v2; // 0x24fed8
    *v1 = *v1 + ((char)v2 | (char)L"\n2");
    int64_t v3 = v2 & -0xffe9 | (int64_t)L"\n2" | 232; // 0x24fee2
    int32_t * v4 = (int32_t *)(v3 + 5); // 0x24fee4
    *v4 = *v4 + (int32_t)v3;
    return unknown_6a894b01();
}

// Address range: 0x24ff87 - 0x24ff92
int64_t function_24ff87(int64_t a1, int64_t a2, int64_t a3) {
    // 0x24ff87
    int64_t v1; // 0x24ff87
    int64_t v2 = ((uint64_t)v1 % 256 | 0x100000000 * a3 | v1 & 0xffffff00) / (v1 & 0xffffffff); // 0x24ff88
    *(int32_t *)a1 = (int32_t)v2;
    return v2 & 0xffffffff;
}

// Address range: 0x24ffa3 - 0x24ffd7
int64_t function_24ffa3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x24ffa3
    unknown_3ab39fa9();
    int16_t v1 = a3; // 0x24ffa8
    int64_t v2; // 0x24ffa3
    __asm_outsb(v1, (char)v2);
    int64_t v3 = 2 * a2; // 0x24ffaf
    __asm_in(v1);
    __asm_in_133(-42);
    int32_t * v4 = (int32_t *)(a4 - 40); // 0x24ffba
    *v4 = *v4 + (int32_t)v3;
    int64_t v5 = unknown_38a18bca(); // 0x24ffc4
    char * v6 = (char *)(v5 + 0x1e88e05); // 0x24ffc9
    *v6 = *v6 + (char)v5;
    bool v7; // 0x24ffa3
    *(char *)((v7 ? -1 : 1) + (v3 & 0xfffffffe)) = (char)v2;
    return a3 & 0xffffffff;
}

// Address range: 0x24fffb - 0x250019
int64_t function_24fffb(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = unknown_ffffffff862d1001(); // 0x24fffb
    int64_t v2 = v1 & -0x10000; // 0x250000
    bool v3; // 0x24fffb
    int64_t v4 = v2 | (int64_t)"OW" | (v1 + (v3 ? 176 : 175)) % 256; // 0x25000a
    *(int32_t *)a1 = (int32_t)v4;
    int32_t * v5 = (int32_t *)(a4 - 0x2acd8d2f); // 0x250010
    *v5 = *v5 + (int32_t)a2;
    return v2 | (int64_t)"OW" & -256 | (v4 + a4 / 256) % 256;
}

// Address range: 0x25001e - 0x25003f
int64_t function_25001e(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x25001e
    int64_t v1; // 0x25001e
    int64_t v2 = v1 & 0xce008000; // 0x250020
    *(int32_t *)a1 = (int32_t)v1 - (int32_t)v2;
    uint64_t v3 = a4 / 256; // 0x250027
    int32_t * v4 = (int32_t *)(a3 + 1); // 0x250029
    *v4 = *v4 + (int32_t)v1;
    return (v2 | ((v3 | 1) + 226) % 256) + 0x1e85017 | (int64_t)((char)v3 < 30);
}

// Address range: 0x250067 - 0x25008b
int64_t function_250067(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a3 + 0x17679fa2); // 0x250069
    int64_t v2; // 0x250067
    *v1 = *v1 + (int32_t)v2;
    int64_t v3 = unknown_ffffffffa391327d(); // 0x250077
    int32_t * v4 = (int32_t *)(v2 + 9); // 0x25007c
    *v4 = *v4 | (int32_t)v3;
    char v5 = *(char *)(a3 - 8); // 0x25007f
    char * v6 = (char *)((a3 & -256 | (int64_t)((char)a3 - v5)) + 4); // 0x250082
    *v6 = *v6 | (char)(a4 / 256);
    return v3 & 0xe7eb01e8;
}

// Address range: 0x250097 - 0x25009a
int64_t function_250097(void) {
    // 0x250097
    int64_t result; // 0x250097
    return result;
}

// Address range: 0x2654c2 - 0x2654c4
int64_t function_2654c2(void) {
    // 0x2654c2
    int64_t v1; // 0x2654c2
    return v1 & -139;
}

// Address range: 0x2654c5 - 0x265623
int64_t function_2654c5(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a6;
    int32_t v2 = *(int32_t *)(a1 + 88); // 0x2654c5
    int64_t v3 = (int64_t)&v1; // 0x26550b
    int64_t v4 = *(int64_t *)(v3 + 32); // 0x265556
    *(int64_t *)(v3 - 8) = v4;
    int64_t * v5 = (int64_t *)(v3 - 16); // 0x26555e
    *(int64_t *)(v3 - 24) = v3;
    *(int64_t *)(v3 - 32) = *v5;
    int64_t v6 = *v5; // 0x265576
    int64_t v7 = *(int64_t *)(v6 + 16); // 0x26557a
    int64_t * v8 = (int64_t *)(v6 - 8); // 0x26557a
    *v8 = v7;
    int64_t * v9 = (int64_t *)(v6 - 16); // 0x265582
    int64_t * v10 = (int64_t *)(v6 - 32); // 0x265591
    *v9 = 0x33a85500;
    *v10 = a1;
    *(int64_t *)(v6 - 24) = v4;
    *(int64_t *)v6 = *v9;
    *v9 = v7;
    *(int64_t *)(v6 + 24) = *v8;
    *v9 = v6;
    *v8 = v6 + 8;
    int64_t v11; // 0x2654c5
    return function_caf2a(*v10, v2 ^ (int32_t)a2, a3, a6, a5, v11, 0x2625c8);
}

// Address range: 0x265623 - 0x2657d4
int64_t function_265623(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x265623
    bool v1; // 0x265623
    int64_t v2 = 0x4000 * (int64_t)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2; // 0x265623
    int64_t v3 = v2; // bp-48, 0x2656ab
    int64_t v4 = (int64_t)&v3; // 0x2656b8
    int64_t v5 = *(int64_t *)(v4 + 24); // 0x2656f3
    int64_t * v6 = (int64_t *)(v4 - 8); // 0x2656f7
    int64_t * v7 = (int64_t *)(v4 - 16); // 0x2656fa
    *v7 = v5;
    v3 = v2;
    int64_t v8 = *v6; // 0x26571a
    *v7 = v8;
    int64_t * v9 = (int64_t *)(v4 + 16); // 0x265726
    *v9 = v3;
    v3 = a4;
    *v6 = v4;
    int64_t v10 = v3; // 0x265742
    *v7 = v10;
    int64_t * v11 = (int64_t *)(v4 + 8); // 0x26574b
    *(int64_t *)(v4 + 40) = v5;
    v3 = a2;
    *v9 = *v11;
    *v11 = v4 + 32;
    v3 = *v9;
    int64_t v12; // 0x265623
    return function_caf2a(a1, (int32_t)a2, a3, v10, v8, v12, 0x26281e);
}

// Address range: 0x2657d4 - 0x265956
int64_t function_2657d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = 0x2629ea; // bp-24, 0x265829
    int64_t result = function_caf2a(a1, (int32_t)a2, a3, a4, a5, a6, (int64_t)&v1 + 8); // 0x265951
    return result;
}

// Address range: 0x26597e - 0x26597f
int64_t function_26597e(void) {
    // 0x26597e
    int64_t result; // 0x26597e
    return result;
}

// Address range: 0x2659b3 - 0x2659c0
int64_t function_2659b3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1; // 0x2659b3
    if (a4 == 0) {
        v1 = function_26597e();
    }
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result - 1); // 0x2659ba
    *v2 = *v2 + (char)a4;
    return result;
}

// Address range: 0x2659c1 - 0x2659c7
int64_t function_2659c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2659c1
    int64_t result; // 0x2659c1
    char * v1 = (char *)(result - 127); // 0x2659c1
    *v1 = *v1 | (char)a4;
    return result;
}

// Address range: 0x2659cb - 0x2659ce
int64_t function_2659cb(int64_t a1) {
    // 0x2659cb
    int64_t result; // 0x2659cb
    return result;
}

// Address range: 0x2659d3 - 0x2659e0
int64_t function_2659d3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2659d3
    int64_t v1; // 0x2659d3
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(result + 49); // 0x2659da
    *v2 = *v2 + (char)a4;
    return result;
}
