/*
 * Targeted RetDec C for native executable gap queue batch 834.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x1dc85a-0x1dca5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1dca5a-0x1dcc5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x1dcc5a-0x1dce5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x266ac2-0x266cc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x266cc2-0x266ec2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x266ec2-0x2670c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2670c2-0x2672c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2672c2-0x2674c2 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1dc85a(void);
int64_t function_1dc922(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_1dc9c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dca30(void);
int64_t function_1dca57(int64_t a1);
int64_t function_1dca5e(int64_t a1);
int64_t function_1dcac7(int64_t a1);
int64_t function_1dcaf5(void);
int64_t function_1dcb27(void);
int64_t function_1dcb2b(void);
int64_t function_1dcb39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_1dcb8e(int64_t a1);
int64_t function_1dcbb2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dcbf0(void);
int64_t function_1dcc31(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dcc45(void);
int64_t function_1dcc48(void);
int64_t function_1dcc60(void);
int64_t function_1dcc93(int64_t a1, int64_t a2, int64_t a3);
int64_t function_1dccbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dccc2(int64_t a1);
int64_t function_1dccf4(void);
int64_t function_1dcd81(int64_t a1);
int64_t function_1dcdcd(int64_t a1);
int64_t function_1dcdd3(void);
int64_t function_1dce08(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1dce20(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_266ac2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_266afc(void);
int64_t function_266b25(int64_t a1);
int64_t function_266b45(void);
int64_t function_266b91(int64_t a1, int64_t a2);
int64_t function_266ba3(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_266bb8(int64_t a1);
int64_t function_266bc7(void);
int64_t function_266bcf(void);
int64_t function_266bf5(int64_t a1);
int64_t function_266c0a(int64_t a1);
int64_t function_266ca8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_266d01(int64_t a1, int64_t a2);
int64_t function_266d1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_266d8b(void);
int64_t function_266dd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_266e27(void);
int64_t function_266e38(void);
int64_t function_266e3d(void);
int64_t function_266e3e(void);
int64_t function_266e57(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_266ef2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_266f12(void);
int64_t function_266f14(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_266f81(void);
int64_t function_266fa2(int64_t a1, int64_t a2, int64_t a3);
int64_t function_266fdc(int64_t a1);
int64_t function_26700d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_267044(int64_t a1);
int64_t function_2670f0(void);
int64_t function_2670fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2671c2(void);
int64_t function_2672a2(void);
int64_t function_2672a7(int64_t a1);
int64_t function_2672f3(int64_t a1, uint64_t a2, int64_t a3, int64_t a4);
int64_t function_2673ed(void);
int64_t function_2673fe(void);
int64_t function_267442(int64_t a1);
int64_t function_26744b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_9af63d0();
int64_t function_caf2a();
int64_t function_ffffffff843acb98();
int64_t function_ffffffffa027ab9d();
int64_t function_ffffffffb067008a();
int64_t function_ffffffffcb1ea147();
int64_t unknown_489b3951();
int64_t unknown_6fb7e528();
int64_t unknown_7ccb244b();
int64_t unknown_ab52a02();
int64_t unknown_ea320c();
int64_t unknown_ffffffff901b042b();
int64_t unknown_ffffffff9046671e();
int64_t unknown_ffffffffddec8113();
int64_t unknown_ffffffffebd9a301();

// Address range: 0x1dc85a - 0x1dc85b
int64_t function_1dc85a(void) {
    // 0x1dc85a
    int64_t result; // 0x1dc85a
    return result;
}

// Address range: 0x1dc922 - 0x1dc99c
int64_t function_1dc922(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x1dc922
    int64_t v1; // 0x1dc922
    int64_t v2 = v1;
    char * v3 = (char *)(v2 - 60 + 4 * v2); // 0x1dc924
    char v4 = *v3 - (char)((uint64_t)v1 / 256); // 0x1dc924
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x1dc924
    *v3 = v4;
    if (v5 % 2 != 0) {
        // 0x1dc992
        return v2 | 256 * a3 & 0xff00;
    }
    // 0x1dc92a
    int64_t v6; // 0x1dc922
    return (int64_t)&v6;
}

// Address range: 0x1dc9c0 - 0x1dca27
int64_t function_1dc9c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dc9c0
    int64_t v1; // 0x1dc9c0
    char * v2 = (char *)(v1 + a2 & 0xffffffff); // 0x1dc9d4
    char v3 = a4; // 0x1dc9d4
    *v2 = *v2 + v3;
    int32_t v4 = a4; // 0x1dc9d8
    *(int32_t *)a3 = v4;
    char * v5 = (char *)((a1 & 0xffffffff) + 0x3d000004); // 0x1dc9e8
    *v5 = *v5 - 126;
    int32_t * v6 = (int32_t *)(a4 + 0x1bb0cf03); // 0x1dc9ee
    *v6 = *v6 + v4;
    int64_t result = unknown_ffffffffebd9a301((int32_t)a1, 0x93c2823a); // 0x1dc9fb
    char * v7 = (char *)(v1 - 128); // 0x1dca00
    *v7 = *v7 + v3;
    __asm_outsd((int16_t)a3, *(int32_t *)0x93c2823a);
    char * v8 = (char *)result; // 0x1dca04
    *v8 = *v8 + (char)result;
    return result;
}

// Address range: 0x1dca30 - 0x1dca33
int64_t function_1dca30(void) {
    // 0x1dca30
    int64_t result; // 0x1dca30
    return result;
}

// Address range: 0x1dca57 - 0x1dca58
int64_t function_1dca57(int64_t a1) {
    // 0x1dca57
    int64_t result; // 0x1dca57
    return result;
}

// Address range: 0x1dca5e - 0x1dca66
int64_t function_1dca5e(int64_t a1) {
    // 0x1dca5e
    int64_t v1; // 0x1dca5e
    return v1 + 0x8d01e836 & 0xffffffff;
}

// Address range: 0x1dcac7 - 0x1dcacd
int64_t function_1dcac7(int64_t a1) {
    // 0x1dcac7
    int64_t result; // 0x1dcac7
    __asm_out_133(1, (char)result);
    return result;
}

// Address range: 0x1dcaf5 - 0x1dcaf6
int64_t function_1dcaf5(void) {
    // 0x1dcaf5
    int64_t result; // 0x1dcaf5
    return result;
}

// Address range: 0x1dcb27 - 0x1dcb28
int64_t function_1dcb27(void) {
    // 0x1dcb27
    int64_t result; // 0x1dcb27
    return result;
}

// Address range: 0x1dcb2b - 0x1dcb2c
int64_t function_1dcb2b(void) {
    // 0x1dcb2b
    int64_t result; // 0x1dcb2b
    return result;
}

// Address range: 0x1dcb39 - 0x1dcb7d
int64_t function_1dcb39(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a2;
    int64_t v2; // 0x1dcb39
    int32_t * v3 = (int32_t *)(8 * v2 + a4); // 0x1dcb39
    int32_t v4 = *v3 ^ (int32_t)a2; // 0x1dcb39
    *v3 = v4;
    if (v4 < 1) {
        function_1dcb27();
    }
    // 0x1dcb3f
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)v2;
    uint32_t v5 = (int32_t)a4; // 0x1dcb49
    int64_t v6 = unknown_489b3951(); // 0x1dcb4b
    int64_t v7; // 0x1dcb39
    int64_t v8; // 0x1dcb39
    int64_t v9 = (int64_t)(*(int32_t *)&v7 > v5) + (int64_t)&v8 - v7; // 0x1dcb50
    int64_t v10 = v9 & 0xffffffff; // 0x1dcb50
    int32_t * v11 = (int32_t *)(v10 + v1); // 0x1dcb55
    *v11 = *v11 + v5;
    int32_t * v12 = (int32_t *)(v1 + 119); // 0x1dcb5b
    int32_t v13 = *v12; // 0x1dcb5b
    int32_t v14 = v6; // 0x1dcb5b
    int32_t v15 = v13 + v14; // 0x1dcb5b
    *v12 = v15;
    *(char *)a3 = (char)a4;
    if (v15 < 0 != ((v15 ^ v13) & (v15 ^ v14)) < 0) {
        function_1dcaf5();
    }
    int32_t v16 = (int32_t)*(int64_t *)v10; // 0x1dcb64
    int32_t v17 = (int32_t)v9 + 8 | v16; // 0x1dcb64
    unsigned char v18 = llvm_ctpop_i8((char)v17); // 0x1dcb64
    *(int64_t *)((int64_t)v17 - 8) = 512 * (int64_t)((a6 & (int64_t)&g1) != 0) | 256 * (int64_t)((a6 & 256) != 0) | 1024 * (int64_t)((a6 & (int64_t)&g2) != 0) | 0x4000 * (int64_t)((a6 & (int64_t)"le") != 0) | 64 * (int64_t)(v17 == 0) | 128 * (int64_t)(v17 < 0) | 4 * (int64_t)(v18 % 2 == 0) | 2;
    int32_t v19 = v17 - 8;
    __asm_out_134(125, v19);
    *(int32_t *)0x1463e0d4f9f001e8 = v19;
    *(int32_t *)-0x66e04c5d = *(int32_t *)-0x66e04c5d & v16;
    return __asm_hlt();
}

// Address range: 0x1dcb8e - 0x1dcb97
int64_t function_1dcb8e(int64_t a1) {
    // 0x1dcb8e
    int64_t v1; // 0x1dcb8e
    *(char *)a1 = (char)v1;
    int64_t v2; // 0x1dcb8e
    bool v3; // 0x1dcb8e
    if (!v3 && !v3) {
        v2 = function_1dcb2b();
    }
    // 0x1dcb91
    return v2 & 0xd1858be2;
}

// Address range: 0x1dcbb2 - 0x1dcbc0
int64_t function_1dcbb2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dcbb2
    return function_ffffffffcb1ea147();
}

// Address range: 0x1dcbf0 - 0x1dcbf1
int64_t function_1dcbf0(void) {
    // 0x1dcbf0
    int64_t result; // 0x1dcbf0
    return result;
}

// Address range: 0x1dcc31 - 0x1dcc42
int64_t function_1dcc31(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dcc31
    int64_t v1; // 0x1dcc31
    int64_t v2 = __asm_wait(v1 & 0xffffffff); // 0x1dcc33
    bool v3; // 0x1dcc31
    if (v3 || v3) {
        v2 = function_1dcbf0();
    }
    // 0x1dcc36
    *(int32_t *)v2 = -1 - (int32_t)v1;
    __asm_out((int16_t)(v1 % 256 | a3 & 0xff00), (char)v2);
    return 0xa4ec9a9;
}

// Address range: 0x1dcc45 - 0x1dcc46
int64_t function_1dcc45(void) {
    // 0x1dcc45
    int64_t result; // 0x1dcc45
    return result;
}

// Address range: 0x1dcc48 - 0x1dcc49
int64_t function_1dcc48(void) {
    // 0x1dcc48
    int64_t result; // 0x1dcc48
    return result;
}

// Address range: 0x1dcc60 - 0x1dcc62
int64_t function_1dcc60(void) {
    // 0x1dcc60
    return function_1dcc48();
}

// Address range: 0x1dcc93 - 0x1dcc9c
int64_t function_1dcc93(int64_t a1, int64_t a2, int64_t a3) {
    // 0x1dcc93
    int64_t v1; // 0x1dcc93
    *(char *)a3 = (char)(v1 | a3);
    return function_1dccf4();
}

// Address range: 0x1dccbc - 0x1dccc2
int64_t function_1dccbc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dccbc
    int64_t v1; // 0x1dccbc
    *(int32_t *)a1 = (int32_t)v1 + (int32_t)a4;
    return 0x10000 * (int32_t)v1 >> 16;
}

// Address range: 0x1dccc2 - 0x1dccd1
int64_t function_1dccc2(int64_t a1) {
    char v1 = *(char *)-0x2f075a45; // 0x1dccc8
    int64_t v2; // 0x1dccc2
    *(char *)-0x2f075a45 = v1 - (char)((uint64_t)v2 / 256);
    return v2 | 80;
}

// Address range: 0x1dccf4 - 0x1dccf9
int64_t function_1dccf4(void) {
    // 0x1dccf4
    int64_t v1; // 0x1dccf4
    int64_t v2 = v1;
    return (v2 + 60 + (int64_t)((char)v2 < 158)) % 256 | v2 & -256;
}

// Address range: 0x1dcd81 - 0x1dcd82
int64_t function_1dcd81(int64_t a1) {
    // 0x1dcd81
    int64_t result; // 0x1dcd81
    return result;
}

// Address range: 0x1dcdcd - 0x1dcdd0
int64_t function_1dcdcd(int64_t a1) {
    // 0x1dcdcd
    int64_t result; // 0x1dcdcd
    return result;
}

// Address range: 0x1dcdd3 - 0x1dcdd8
int64_t function_1dcdd3(void) {
    // 0x1dcdd3
    return function_ffffffff843acb98();
}

// Address range: 0x1dce08 - 0x1dce15
int64_t function_1dce08(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dce08
    int64_t v1; // 0x1dce08
    *(int32_t *)a4 = 2 * (int32_t)v1;
    return unknown_6fb7e528();
}

// Address range: 0x1dce20 - 0x1dce22
int64_t function_1dce20(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1dce20
    int64_t result; // 0x1dce20
    return result;
}

// Address range: 0x266ac2 - 0x266afc
int64_t function_266ac2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x266ac2
    int64_t v1; // 0x266ac2
    v1 = (int64_t)&v1 + 16;
    return function_caf2a();
}

// Address range: 0x266afc - 0x266b01
int64_t function_266afc(void) {
    // 0x266afc
    int64_t result; // 0x266afc
    return result;
}

// Address range: 0x266b25 - 0x266b2b
int64_t function_266b25(int64_t a1) {
    // 0x266b25
    return unknown_ffffffff901b042b(a1);
}

// Address range: 0x266b45 - 0x266b4c
int64_t function_266b45(void) {
    // 0x266b45
    return unknown_7ccb244b();
}

// Address range: 0x266b91 - 0x266ba3
int64_t function_266b91(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 - 0x6d70c582); // 0x266b91
    int64_t v2; // 0x266b91
    *v1 = *v1 + (int32_t)v2;
    return (int64_t)(0x1e8bec6 * *(int32_t *)(a2 - 0x662f5fc));
}

// Address range: 0x266ba3 - 0x266bab
int64_t function_266ba3(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x266ba3
    if (v1 != 0) {
        int64_t v2; // 0x266ba3
        int32_t * v3 = (int32_t *)(v2 - 24); // 0x266ba3
        uint32_t v4 = *v3; // 0x266ba3
        bool v5; // 0x266ba3
        *v3 = (int32_t)v5 << 32 - v1 | v4 >> v1 | (int32_t)((int64_t)v4 << (int64_t)(33 - v1));
    }
    return function_9af63d0();
}

// Address range: 0x266bb8 - 0x266bc0
int64_t function_266bb8(int64_t a1) {
    // 0x266bb8
    int64_t result; // 0x266bb8
    return result;
}

// Address range: 0x266bc7 - 0x266bcf
int64_t function_266bc7(void) {
    // 0x266bc7
    int64_t result; // 0x266bc7
    return result;
}

// Address range: 0x266bcf - 0x266bd2
int64_t function_266bcf(void) {
    // 0x266bcf
    int64_t result; // 0x266bcf
    return result;
}

// Address range: 0x266bf5 - 0x266bf6
int64_t function_266bf5(int64_t a1) {
    // 0x266bf5
    int64_t result; // 0x266bf5
    return result;
}

// Address range: 0x266c0a - 0x266c0b
int64_t function_266c0a(int64_t a1) {
    // 0x266c0a
    int64_t result; // 0x266c0a
    return result;
}

// Address range: 0x266ca8 - 0x266cb1
int64_t function_266ca8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x266ca8
    int64_t result; // 0x266ca8
    *(char *)a4 = (char)result;
    return result;
}

// Address range: 0x266d01 - 0x266d03
int64_t function_266d01(int64_t a1, int64_t a2) {
    // 0x266d01
    int64_t result; // 0x266d01
    return result;
}

// Address range: 0x266d1c - 0x266d82
int64_t function_266d1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x266d1c
    int64_t result; // 0x266d1c
    bool v1; // 0x266d1c
    if (v1) {
        // 0x266d20
        return result;
    }
    // 0x266d79
    *(int32_t *)-0x5afec2ff9a00001f = (int32_t)result;
    return result;
}

// Address range: 0x266d8b - 0x266d8c
int64_t function_266d8b(void) {
    // 0x266d8b
    int64_t result; // 0x266d8b
    return result;
}

// Address range: 0x266dd1 - 0x266df7
int64_t function_266dd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2; // 0x266dd1
    int32_t * v3 = (int32_t *)(2 * v2 + 61); // 0x266dd1
    *v3 = *v3 + (int32_t)v2;
    int32_t * v4 = (int32_t *)(v2 + 0x5489ec0c); // 0x266dd5
    int32_t v5 = *v4 + (int32_t)a2; // 0x266dd5
    *v4 = v5;
    unknown_ea320c();
    if (a4 != 1 && v5 != 0) {
        function_266d8b();
    }
    // 0x266de2
    __asm_hlt();
    *(int32_t *)(v1 - 128) = (int32_t)a1;
    unsigned char v6 = *(char *)&v1; // 0x266df5
    return (int64_t)v6 | (int64_t)(*(int32_t *)-0x7bfca73cfec2ffd8 & -256);
}

// Address range: 0x266e27 - 0x266e2c
int64_t function_266e27(void) {
    // 0x266e27
    return function_ffffffffb067008a();
}

// Address range: 0x266e38 - 0x266e39
int64_t function_266e38(void) {
    // 0x266e38
    int64_t result; // 0x266e38
    return result;
}

// Address range: 0x266e3d - 0x266e3e
int64_t function_266e3d(void) {
    // 0x266e3d
    int64_t result; // 0x266e3d
    return result;
}

// Address range: 0x266e3e - 0x266e40
int64_t function_266e3e(void) {
    // 0x266e3e
    int64_t result; // 0x266e3e
    return result;
}

// Address range: 0x266e57 - 0x266eac
int64_t function_266e57(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    *(char *)a1 = (char)(a4 / 256) + (char)a1;
    int64_t v3; // 0x266e57
    int64_t v4 = v3 & 0x39a855cd | 0xc657aa32; // 0x266e59
    *(char *)a2 = *(char *)&v1 ^ (char)v3;
    uint64_t v5 = a3 / 256; // 0x266e66
    int64_t v6 = (v4 | 256 * a3) & 0xff00 | v4 & 0xffff00ff; // 0x266e69
    if (v5 <= a3) {
        v6 = function_266e38();
    }
    uint64_t v7 = a4 == 0 ? 256 * (v5 - a3) & 0xff00 | a3 & -0xff01 : (int64_t)((int32_t)v6 >> 31);
    *(char *)v1 = (char)(v7 / 256);
    if (*(char *)&v1 - *(char *)&v2 >= 0) {
        int16_t v8 = v6; // 0x266ea9
        int16_t v9 = (int16_t)v3 % 256; // 0x266ea9
        return v6 & -0x10000 | (int64_t)(v8 / v9 % 256) | (int64_t)(256 * (v8 % v9));
    }
    // 0x266e7d
    *(char *)0x5c62c589 = *(char *)0x5c62c589 + (char)(v3 / 256);
    if (a4 == 0) {
        function_266e3d();
    }
    unsigned char v10 = (char)a4 % 32; // 0x266e95
    if (v10 != 0) {
        char * v11 = (char *)(v7 + 36); // 0x266e95
        *v11 = *v11 >> v10;
    }
    return function_ffffffffa027ab9d();
}

// Address range: 0x266ef2 - 0x266f05
int64_t function_266ef2(int64_t a1, int64_t a2, int64_t a3) {
    char v1 = *(char *)-0x1b1a00; // 0x266ef9
    int64_t v2; // 0x266ef2
    *(char *)-0x1b1a00 = v1 + (char)((uint64_t)v2 / 256);
    int64_t result = __asm_wait(a1); // 0x266eff
    int32_t * v3 = (int32_t *)(a2 - 94); // 0x266f00
    *v3 = 0x1000000 * *v3;
    return result;
}

// Address range: 0x266f12 - 0x266f14
int64_t function_266f12(void) {
    // 0x266f12
    int64_t result; // 0x266f12
    return result;
}

// Address range: 0x266f14 - 0x266f2a
int64_t function_266f14(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    unsigned char v1 = *(char *)-0x602891e4; // 0x266f15
    int64_t result; // 0x266f14
    unsigned char v2 = v1 + (char)(result / 256); // 0x266f15
    *(char *)-0x602891e4 = v2;
    int32_t * v3 = (int32_t *)(a1 + 0xb5b06f3 + 8 * result); // 0x266f1b
    uint32_t v4 = *v3; // 0x266f1b
    *v3 = v4 / 0x4000 | 0x80000 * v4 | 0x40000 * (int32_t)(v2 < v1);
    char * v5 = (char *)(result + 10); // 0x266f23
    *v5 = *v5 + (char)(result / 256);
    return result;
}

// Address range: 0x266f81 - 0x266f82
int64_t function_266f81(void) {
    // 0x266f81
    int64_t result; // 0x266f81
    return result;
}

// Address range: 0x266fa2 - 0x266faf
int64_t function_266fa2(int64_t a1, int64_t a2, int64_t a3) {
    // 0x266fa2
    return function_266f81();
}

// Address range: 0x266fdc - 0x266fdd
int64_t function_266fdc(int64_t a1) {
    // 0x266fdc
    int64_t result; // 0x266fdc
    return result;
}

// Address range: 0x26700d - 0x26701f
int64_t function_26700d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x26700d
    __asm_out_133(-110, (char)unknown_ffffffffddec8113());
    return unknown_ffffffff9046671e();
}

// Address range: 0x267044 - 0x267045
int64_t function_267044(int64_t a1) {
    // 0x267044
    int64_t result; // 0x267044
    return result;
}

// Address range: 0x2670f0 - 0x2670f1
int64_t function_2670f0(void) {
    // 0x2670f0
    int64_t result; // 0x2670f0
    return result;
}

// Address range: 0x2670fc - 0x2671b9
int64_t function_2670fc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = unknown_ab52a02(); // 0x2670fc
    bool v1; // 0x2670fc
    if (true != !v1 || (*(int32_t *)(result - 65) & (int32_t)a2) < 0) {
        // 0x267103
        return result;
    }
    int64_t v2 = (a3 - result) % 256 | a3 & -256; // 0x267181
    char * v3 = (char *)result; // 0x267188
    *v3 = *v3 + (char)result;
    int64_t v4 = result + 0xc3000000; // 0x26718a
    int32_t * v5 = (int32_t *)(v2 + 0x4842c9fb); // 0x26718f
    int64_t v6; // 0x2670fc
    *v5 = *v5 + (int32_t)v6;
    __asm_out((int16_t)v2, (char)v4);
    return v4 & 0xfc7c5808 | 0x383a7f7;
}

// Address range: 0x2671c2 - 0x2671f0
int64_t function_2671c2(void) {
    char v1 = *(char *)0x57e93f1; // 0x2671ea
    int64_t result; // 0x2671c2
    *(char *)0x57e93f1 = v1 + (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x2672a2 - 0x2672a5
int64_t function_2672a2(void) {
    // 0x2672a2
    int64_t result; // 0x2672a2
    return result;
}

// Address range: 0x2672a7 - 0x2672af
int64_t function_2672a7(int64_t a1) {
    // 0x2672a7
    int64_t v1; // 0x2672a7
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x2672f3 - 0x267352
int64_t function_2672f3(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    // 0x2672f3
    int64_t v1; // 0x2672f3
    *(int32_t *)0x375d9467c5795050 = (int32_t)v1;
    return a2 % 256 | (int64_t)(__asm_in(-6) & -256);
}

// Address range: 0x2673ed - 0x2673f0
int64_t function_2673ed(void) {
    // 0x2673ed
    int64_t result; // 0x2673ed
    return result;
}

// Address range: 0x2673fe - 0x267401
int64_t function_2673fe(void) {
    // 0x2673fe
    int64_t result; // 0x2673fe
    return result;
}

// Address range: 0x267442 - 0x267443
int64_t function_267442(int64_t a1) {
    // 0x267442
    int64_t result; // 0x267442
    return result;
}

// Address range: 0x26744b - 0x267459
int64_t function_26744b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int16_t v1 = a3; // 0x26744b
    int64_t v2; // 0x26744b
    __asm_out(v1, (char)v2);
    int64_t v3 = a1; // bp-8, 0x26744c
    *(int32_t *)a2 = (int32_t)v2;
    __asm_in_135(v1);
    bool v4; // 0x26744b
    int64_t result = __asm_sti((int64_t)&v3 & 0xfffffff8 & a4 + a1 + (int64_t)v4); // 0x267457
    return result;
}
