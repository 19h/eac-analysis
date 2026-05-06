/*
 * Targeted RetDec C for native executable gap queue batch 930.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x13d668-0x13d868 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13d868-0x13da68 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13da68-0x13dc68 rank=- name=- kind=- bytes=- uncovered=-
 *   0x13de68-0x13e068 rank=- name=- kind=- bytes=- uncovered=-
 *   0x158513-0x158713 rank=- name=- kind=- bytes=- uncovered=-
 *   0x158713-0x158913 rank=- name=- kind=- bytes=- uncovered=-
 *   0x158913-0x158b13 rank=- name=- kind=- bytes=- uncovered=-
 *   0x158d13-0x158f13 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_13d668(int64_t a1);
int64_t function_13d6c7(void);
int64_t function_13d72f(int64_t a1, int64_t a2);
int64_t function_13d75f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_13d777(void);
int64_t function_13d81f(void);
int64_t function_13d832(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13d84f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13d906(int64_t a1);
int64_t function_13d912(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13d919(void);
int64_t function_13d92e(int64_t a1);
int64_t function_13d942(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_13d9db(int64_t a1, int64_t a2, int64_t a3);
int64_t function_13da30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13da46(void);
int64_t function_13da5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13da65(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_13da9c(void);
int64_t function_13daa2(void);
int64_t function_13daaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13de68(int64_t a1);
int64_t function_13decc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_13dee9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_13df43(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result, int64_t a7);
int64_t function_13df81(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_13dfc3(void);
int64_t function_13dfe7(int64_t a1);
int64_t function_13dff3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_158513(void);
int64_t function_158635(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_1587bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_158907(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_158acd(void);
int64_t function_158d13(int64_t a1);
int64_t function_158d1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c80207e();
int64_t function_cdc60();
int64_t function_fffffffffbe86cee();
int64_t unknown_246b1285();
int64_t unknown_34ecc28();
int64_t unknown_4d1483a7();
int64_t unknown_55a13a6f();
int64_t unknown_646dc364();
int64_t unknown_681ee56f();
int64_t unknown_6f964872();
int64_t unknown_701eb150();
int64_t unknown_ffffffff9357fc70();
int64_t unknown_ffffffffe728dd41();
int64_t unknown_fffffffff1f19f38();

// Address range: 0x13d668 - 0x13d66f
int64_t function_13d668(int64_t a1) {
    // 0x13d668
    int64_t v1; // 0x13d668
    *(char *)a1 = (char)v1;
    bool v2; // 0x13d668
    return unknown_ffffffff9357fc70((v2 ? -1 : 1) + a1);
}

// Address range: 0x13d6c7 - 0x13d6cc
int64_t function_13d6c7(void) {
    // 0x13d6c7
    return function_fffffffffbe86cee();
}

// Address range: 0x13d72f - 0x13d736
int64_t function_13d72f(int64_t a1, int64_t a2) {
    // 0x13d72f
    int64_t v1; // 0x13d72f
    int64_t v2 = __asm_wait(v1 & 0xffffffff); // 0x13d730
    bool v3; // 0x13d72f
    return (v2 + 218 + (int64_t)v3) % 256 | v2 & -256;
}

// Address range: 0x13d75f - 0x13d777
int64_t function_13d75f(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x13d75f
    int64_t v1; // 0x13d75f
    uint64_t v2 = v1;
    *(char *)(a1 - 47) = (char)(a4 / 256);
    int64_t v3; // 0x13d75f
    __asm_outsb((int16_t)a3, *(char *)&v3);
    int64_t v4; // 0x13d75f
    *(int32_t *)v4 = *(int32_t *)&v4 + (int32_t)a2;
    int32_t v5 = *(int32_t *)(v4 - 0x4e3a00fd); // 0x13d769
    return v5 * (int32_t)((v2 / 256 % 256 | v2) - v1);
}

// Address range: 0x13d777 - 0x13d77d
int64_t function_13d777(void) {
    // 0x13d777
    int64_t v1; // 0x13d777
    unsigned char v2 = (char)v1; // 0x13d777
    bool v3; // 0x13d777
    return v1 & -256 | (int64_t)(128 * v2 | v2 / 4 | 64 * (char)v3);
}

// Address range: 0x13d81f - 0x13d820
int64_t function_13d81f(void) {
    // 0x13d81f
    int64_t result; // 0x13d81f
    return result;
}

// Address range: 0x13d832 - 0x13d84d
int64_t function_13d832(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13d832
    unknown_fffffffff1f19f38();
    int64_t v1 = unknown_ffffffffe728dd41(); // 0x13d83b
    int64_t v2; // 0x13d832
    return (int64_t)(*(int32_t *)(4 * a3 + 0x47a78689 + v2) * (int32_t)v1);
}

// Address range: 0x13d84f - 0x13d8fa
int64_t function_13d84f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a1;
    int64_t v2; // 0x13d84f
    int32_t v3 = (int32_t)v2 - 0x17988218; // 0x13d854
    uint32_t v4 = v3 + (int32_t)v2; // 0x13d854
    int64_t v5 = a4 - 1; // 0x13d856
    int64_t v6; // 0x13d84f
    int64_t v7; // 0x13d84f
    if (v5 != 0 == v4 == 0) {
        // 0x13d89f
        v6 = unknown_4d1483a7();
    } else {
        int32_t v8 = v3 + (int32_t)a1; // 0x13d858
        int64_t * v9 = (int64_t *)(int64_t)v4; // 0x13d85a
        int64_t v10 = *v9; // 0x13d85a
        v6 = unknown_646dc364();
        v7 = v10;
        if (v5 == 1 || v8 == 0) {
            unsigned char v11 = llvm_ctpop_i8((char)v8); // 0x13d858
            *v9 = v10;
            if (v11 % 2 == 0) {
                function_13d81f();
            }
            // 0x13d868
            bool v12; // 0x13d84f
            int64_t v13 = v12 ? -1 : 1; // 0x13d868
            int64_t v14 = v1 + v13; // 0x13d868
            v1 = v14;
            int32_t v15 = *(int32_t *)(unknown_55a13a6f(v14, v13 + a2) & 0xffffffff); // 0x13d871
            __asm_outsd((int16_t)a3, v15);
            int32_t * v16 = (int32_t *)(v2 - 24); // 0x13d872
            *v16 = *v16 ^ 0x319f8e01;
            unknown_6f964872();
            unknown_246b1285();
            int64_t v17 = __asm_wait(v1) & -0xff01 | (int64_t)&g1; // 0x13d88e
            uint64_t v18 = v17 + 26; // 0x13d890
            char * v19 = (char *)(v2 + 0x6b01e857); // 0x13d892
            *v19 = *v19 - (char)v18 + (char)((char)v17 > 229);
            return (v18 % 256 | v17 & 0xffffff00) + 0x80008001 & 0xffffffff;
        }
    }
    int32_t * v20 = (int32_t *)(v7 - 23); // 0x13d8a6
    *v20 = *v20 + (int32_t)a2;
    *(char *)v1 = *(char *)&v1 + (char)v6;
    return __asm_in((int16_t)((int32_t)v6 >> 31));
}

// Address range: 0x13d906 - 0x13d907
int64_t function_13d906(int64_t a1) {
    // 0x13d906
    int64_t result; // 0x13d906
    return result;
}

// Address range: 0x13d912 - 0x13d919
int64_t function_13d912(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13d912
    int64_t result; // 0x13d912
    return result;
}

// Address range: 0x13d919 - 0x13d91b
int64_t function_13d919(void) {
    // 0x13d919
    int64_t result; // 0x13d919
    return result;
}

// Address range: 0x13d92e - 0x13d92f
int64_t function_13d92e(int64_t a1) {
    // 0x13d92e
    int64_t result; // 0x13d92e
    return result;
}

// Address range: 0x13d942 - 0x13d954
int64_t function_13d942(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x13d942
    __asm_sti();
    char * v1 = (char *)(a2 + 0x1e450dab); // 0x13d944
    *v1 = *v1 & (char)(a4 / 256);
    int64_t result = unknown_701eb150(); // 0x13d94a
    __asm_int(-125);
    return result;
}

// Address range: 0x13d9db - 0x13d9f0
int64_t function_13d9db(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13d9db
    return function_2c80207e();
}

// Address range: 0x13da30 - 0x13da41
int64_t function_13da30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13da30
    int64_t v1; // 0x13da30
    int64_t v2 = v1;
    *(int32_t *)a3 = 2 * (int32_t)v1;
    return v2 & -256 | (int64_t)(*(char *)(v1 - 0x1622c33) | (char)v2);
}

// Address range: 0x13da46 - 0x13da4b
int64_t function_13da46(void) {
    // 0x13da46
    int64_t result; // 0x13da46
    return result;
}

// Address range: 0x13da5a - 0x13da65
int64_t function_13da5a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13da5a
    int64_t result; // 0x13da5a
    return result;
}

// Address range: 0x13da65 - 0x13da8e
int64_t function_13da65(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int64_t v2; // 0x13da65
    int32_t * v3 = (int32_t *)(v2 + 8 * v2); // 0x13da65
    uint32_t v4 = *v3; // 0x13da65
    bool v5; // 0x13da65
    *v3 = 1024 * v4 | 512 * (int32_t)v5 | v4 / 0x800000;
    int64_t v6 = unknown_681ee56f(); // 0x13da69
    char * v7 = (char *)(v2 - 73); // 0x13da6e
    unsigned char v8 = *v7; // 0x13da6e
    unsigned char v9 = v8 + (char)(a3 / 256); // 0x13da6e
    *v7 = v9;
    int64_t result = v6; // 0x13da71
    if (v9 < v8) {
        char * v10 = (char *)v6; // 0x13da73
        *v10 = (char)(v9 < v8) - (char)v6 + *v10;
        *(int32_t *)v1 = *(int32_t *)&v1 | (int32_t)a3;
        *(char *)-0x3fd91f81 = *(char *)-0x3fd91f81 + (char)(v2 / 256);
        result = v2 + 0x2000068 & 0xffffffff;
    }
    // 0x13da89
    return result;
}

// Address range: 0x13da9c - 0x13da9d
int64_t function_13da9c(void) {
    // 0x13da9c
    int64_t result; // 0x13da9c
    return result;
}

// Address range: 0x13daa2 - 0x13daa3
int64_t function_13daa2(void) {
    // 0x13daa2
    int64_t result; // 0x13daa2
    return result;
}

// Address range: 0x13daaf - 0x13db32
int64_t function_13daaf(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13daaf
    int64_t v1; // 0x13daaf
    uint64_t v2 = (uint64_t)v1 / 256; // 0x13dab1
    char v3 = v2; // 0x13dab1
    if (((v3 - (char)a3 ^ v3) & (char)(v2 ^ a3)) < 0) {
        function_13daa2();
    }
    int64_t result = __asm_int1(); // 0x13dac1
    int32_t * v4 = (int32_t *)(a2 - 86); // 0x13dacd
    *v4 = *v4 & (int32_t)result;
    return result;
}

// Address range: 0x13de68 - 0x13de6b
int64_t function_13de68(int64_t a1) {
    // 0x13de68
    int64_t v1; // 0x13de68
    uint64_t result = v1;
    *(char *)result = (char)(result / 256 ^ result);
    return result;
}

// Address range: 0x13decc - 0x13dee9
int64_t function_13decc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x13decc
    int64_t v1; // 0x13decc
    int64_t v2 = v1;
    *(int32_t *)v2 = (int32_t)(v2 | a1);
    int32_t * v3 = (int32_t *)(v2 + 123); // 0x13dece
    *v3 = *v3 & (int32_t)a3;
    int64_t v4 = v2 + 0xc891264d; // 0x13ded1
    char v5 = *(char *)-0x17159f23; // 0x13ded6
    *(char *)-0x17159f23 = v5 + (char)((uint64_t)v1 / 256);
    int64_t v6; // 0x13decc
    *(int32_t *)a1 = *(int32_t *)&v6 | (int32_t)v4;
    return v4 & 0xffffffff;
}

// Address range: 0x13dee9 - 0x13df29
int64_t function_13dee9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x13dee9
    int64_t v1; // 0x13dee9
    uint64_t v2 = v1;
    *(int64_t *)(v2 + 0x3dfbcfd9) = a5;
    int64_t v3; // 0x13dee9
    *(int32_t *)a4 = *(int32_t *)&v3 + (int32_t)v1;
    int64_t v4 = __asm_iretd(); // 0x13def1
    int32_t * v5 = (int32_t *)(((v4 + 102) % 256 | v4 & -256) + 0x443e4abe); // 0x13def7
    uint32_t v6 = *v5; // 0x13def7
    *v5 = v6 / 8 | 0x20000000 * v6;
    *(char *)-0x120daef5 = *(char *)-0x120daef5 + (char)(v2 / 256);
    uint32_t v7 = (int32_t)a1; // 0x13df17
    uint32_t result = (int32_t)a2 + v7; // 0x13df17
    int64_t v8; // 0x13dee9
    char v9 = *(char *)&v8; // 0x13df25
    *(char *)a2 = (char)(result < v7) + (char)a4 + v9;
    return result;
}

// Address range: 0x13df43 - 0x13df59
int64_t function_13df43(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t result, int64_t a7) {
    // 0x13df43
    unknown_34ecc28();
    int64_t v1; // 0x13df43
    unsigned char v2 = (char)v1;
    unsigned char v3 = (char)(v1 / 256) + v2; // 0x13df4b
    *(char *)a2 = v3;
    uint32_t v4 = (int32_t)a1; // 0x13df52
    uint32_t v5 = (int32_t)a3 + v4; // 0x13df52
    bool v6 = v3 < v2 ? v5 + (int32_t)(v3 < v2) <= v4 : v5 < v4; // 0x13df52
    int32_t * v7 = (int32_t *)(a5 + 6); // 0x13df54
    *v7 = 0x80000000 * (int32_t)v6 | *v7 / 2;
    return result;
}

// Address range: 0x13df81 - 0x13dfa3
int64_t function_13df81(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x13df81
    int64_t v1; // 0x13df81
    uint64_t v2 = v1;
    int64_t v3 = a3 & 0xffffffff; // 0x13df82
    char * v4 = (char *)((__asm_int1() & 0xffffffff) - 127); // 0x13df83
    *v4 = *v4 & (char)(a4 / 256);
    int64_t v5; // 0x13df81
    *(char *)v3 = *(char *)&v5 & (char)a4;
    int64_t v6 = v3; // bp-16, 0x13df89
    char v7 = *(char *)(a2 + 104); // 0x13df8a
    float80_t v8; // 0x13df81
    *(float32_t *)a4 = (float32_t)v8;
    *(char *)-0x5fe7a167 = *(char *)-0x5fe7a167 + (char)(v2 / 256);
    int32_t * v9 = (int32_t *)(v2 + (int64_t)&v6 & 0xffffffff); // 0x13df9e
    *v9 = *v9 + (int32_t)a1;
    return (256 * (int64_t)((char)(a3 / 256) - v7) | a3 & 0xffff00ff) ^ 232;
}

// Address range: 0x13dfc3 - 0x13dfc4
int64_t function_13dfc3(void) {
    // 0x13dfc3
    int64_t result; // 0x13dfc3
    return result;
}

// Address range: 0x13dfe7 - 0x13dfea
int64_t function_13dfe7(int64_t a1) {
    // 0x13dfe7
    int64_t result; // 0x13dfe7
    return result;
}

// Address range: 0x13dff3 - 0x13dff7
int64_t function_13dff3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x13dff3
    int64_t v1; // 0x13dff3
    *(char *)a3 = (char)v1 + (char)((uint64_t)v1 / 256);
    return function_13dfc3();
}

// Address range: 0x158513 - 0x158635
int64_t function_158513(void) {
    // 0x158513
    int64_t v1; // 0x158513
    int64_t v2 = (int64_t)&v1; // 0x158578
    int64_t v3 = *(int64_t *)(v2 + 40); // 0x158587
    v1 = v3;
    int64_t * v4 = (int64_t *)(v2 - 8); // 0x15858b
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x1585a2
    *v5 = v2;
    int64_t v6 = *(int64_t *)(v2 + 16); // 0x1585ab
    *v4 = v6;
    *v5 = 0x1c60bae0;
    *(int64_t *)(v2 - 24) = v3;
    *(int64_t *)(v2 + 8) = *v4;
    *v4 = 0x2ceae6f3;
    *v5 = v6;
    *(int64_t *)(v2 + 24) = *v4;
    *v4 = v1;
    *v5 = v2;
    *v4 = v1;
    *v5 = v1;
    int64_t v7; // 0x158513
    return function_cdc60(v7, v7, v7, v7, v7);
}

// Address range: 0x158635 - 0x1587bb
int64_t function_158635(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x158635
    int64_t v1; // 0x158635
    return function_cdc60(a1, a2, a3, a4, v1);
}

// Address range: 0x1587bb - 0x158907
int64_t function_1587bb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x1587bb
    int64_t v1; // 0x1587bb
    return function_cdc60(a1, a2, a3, v1, v1);
}

// Address range: 0x158907 - 0x158a6e
int64_t function_158907(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x158907
    int64_t v1; // 0x158907
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x158907
    int64_t v3 = 0x79d11b01 * v2; // 0x158907
    int64_t v4 = v3 & 0xffffffff; // 0x158907
    int64_t v5 = v3 != 0x79d11b0100000000 * v2 >> 32; // 0x15890d
    int64_t v6 = v1 - 16; // 0x1589ee
    *(int64_t *)v6 = v6;
    int64_t * v7 = (int64_t *)(v1 - 8); // 0x158a07
    bool v8; // 0x158907
    *v7 = 0x4000 * (int64_t)v8 | 1024 * (int64_t)v8 | 512 * (int64_t)v8 | v5 | 256 * (int64_t)v8 | 128 * (int64_t)v8 | 2048 * v5 | 64 * (int64_t)v8 | 16 * (int64_t)v8 | 4 * (int64_t)v8 | 2;
    int64_t * v9 = (int64_t *)v1; // 0x158a0a
    int64_t * v10 = (int64_t *)(v1 + 16); // 0x158a0a
    *v10 = *v9;
    *v9 = a5;
    *v7 = a4;
    int64_t v11 = v1 + 8; // 0x158a31
    int64_t * v12 = (int64_t *)v11; // 0x158a32
    *v12 = v4;
    *(int64_t *)(v1 + 40) = v4;
    int64_t v13 = *v10; // 0x158a3a
    *v12 = v13;
    *v9 = v13;
    int64_t v14 = v1 + 24; // 0x158a45
    *v10 = *(int64_t *)v14;
    *v9 = v11;
    *v12 = v14;
    return function_cdc60(a1, a2, a3, a4, *v9);
}

// Address range: 0x158acd - 0x158ad0
int64_t function_158acd(void) {
    // 0x158acd
    int64_t result; // 0x158acd
    return result;
}

// Address range: 0x158d13 - 0x158d1f
int64_t function_158d13(int64_t a1) {
    // 0x158d13
    int64_t v1; // 0x158d13
    return function_cdc60(v1, v1, v1, v1, v1);
}

// Address range: 0x158d1f - 0x158e56
int64_t function_158d1f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x158d1f
    int64_t v1; // bp-56, 0x158d1f
    v1 = (int64_t)&v1;
    return function_cdc60(a1, a2, 0x43fd43fd * (0x100000000 * a3 >> 32) & 0xffffffff, a4, a5);
}
