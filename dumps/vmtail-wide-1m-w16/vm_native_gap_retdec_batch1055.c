/*
 * Targeted RetDec C for native executable gap queue batch 1055.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x215c33-0x215e33 rank=- name=- kind=- bytes=- uncovered=-
 *   0x215e33-0x216033 rank=- name=- kind=- bytes=- uncovered=-
 *   0x216033-0x216233 rank=- name=- kind=- bytes=- uncovered=-
 *   0x216433-0x216633 rank=- name=- kind=- bytes=- uncovered=-
 *   0x216633-0x216833 rank=- name=- kind=- bytes=- uncovered=-
 *   0x216833-0x216a33 rank=- name=- kind=- bytes=- uncovered=-
 *   0x216a33-0x216c33 rank=- name=- kind=- bytes=- uncovered=-
 *   0x429b17-0x429d17 rank=- name=- kind=- bytes=- uncovered=-
 *   0x429d17-0x429f17 rank=- name=- kind=- bytes=- uncovered=-
 *   0x429f17-0x42a117 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42a117-0x42a317 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42a317-0x42a517 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42a717-0x42a917 rank=- name=- kind=- bytes=- uncovered=-
 *   0x42a917-0x42ab17 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5203c0-0x5205c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5207c0-0x5209c0 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g6;
extern int g7;
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

int64_t function_1a8ab311();
int64_t function_1d7e60b6();
int64_t function_215c33(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_215c4d(void);
int64_t function_215d08(void);
int64_t function_215d0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_215dac(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_215dd1(int64_t a1);
int64_t function_215e00(void);
int64_t function_215e08(void);
int64_t function_215e34(void);
int64_t function_215e44(void);
int64_t function_215e4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_215e74(void);
int64_t function_215eb7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_215ed2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_215eff(void);
int64_t function_215f4d(void);
int64_t function_215f83(int64_t a1);
int64_t function_21603a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2160ef(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2160fe(void);
int64_t function_21611e(void);
int64_t function_21613b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_21615f(void);
int64_t function_216178(int64_t a1, int64_t a2, int64_t a3);
int64_t function_216433(int64_t a1);
int64_t function_216448(void);
int64_t function_216457(int64_t a1);
int64_t function_2164bd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_21652c(void);
int64_t function_216530(int64_t a1);
int64_t function_216551(void);
int64_t function_216555(int64_t a1, int64_t a2, int64_t a3);
int64_t function_2165d0(void);
int64_t function_21660f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5);
int64_t function_2166bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_216738(void);
int64_t function_216760(void);
int64_t function_216765(int64_t a1);
int64_t function_216768(int64_t a1, int64_t a2, int64_t a3);
int64_t function_216775(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_216810(int64_t a1);
int64_t function_216927(void);
int64_t function_2169b3(void);
int64_t function_216a6e(void);
int64_t function_216a72(void);
int64_t function_216a7a(void);
int64_t function_216ab2(void);
int64_t function_216abf(void);
int64_t function_216ada(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_216af3(void);
int64_t function_216b16(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_216b26(int64_t a1);
int64_t function_216b27(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_216b46(void);
int64_t function_216b52(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_216b7e(void);
int64_t function_216bca(void);
int64_t function_216bfc(void);
int64_t function_323e32b5();
int64_t function_37cfb46c();
int64_t function_38776ced();
int64_t function_3d603141();
int64_t function_429b17(void);
int64_t function_429ba1(void);
int64_t function_429bb2(void);
int64_t function_429bcf(void);
int64_t function_429bd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_429beb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_429c25(void);
int64_t function_429c63(int32_t a1);
int64_t function_429c72(void);
int64_t function_429ccc(void);
int64_t function_429cfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_429d5e(void);
int64_t function_429d6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_429e02(int64_t a1);
int64_t function_429e0d(int64_t a1);
int64_t function_429e24(int64_t a1);
int64_t function_429e2d(void);
int64_t function_429e6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_429f17(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_429f2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_429f3a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_429f66(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_429fb4(void);
int64_t function_429ffa(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42a003(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42a0ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_42a31a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_42a37c(int64_t a1);
int64_t function_42a3e9(int64_t a1);
int64_t function_42a3f6(int64_t a1);
int64_t function_42a3f8(int64_t a1, uint64_t a2);
int64_t function_42a41c(void);
int64_t function_42a44e(int64_t a1, int64_t a2, int64_t a3);
int64_t function_42a47a(void);
int64_t function_42a49d(void);
int64_t function_42a4d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42a4e2(int64_t a1);
int64_t function_42a707();
int64_t function_42a717(int64_t a1, int64_t a2);
int64_t function_42a733(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42a754(void);
int64_t function_42a7a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_42a7b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_42a8d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_42a96e(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4);
int64_t function_42a9ec(void);
int64_t function_42aa20(int64_t a1);
int64_t function_42aaa0(void);
int64_t function_42aab5(void);
int64_t function_42aac4(void);
int64_t function_42aaef(void);
int64_t function_42aaf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5200fa();
int64_t function_520199();
int64_t function_5201ad();
int64_t function_5201d9();
int64_t function_520217();
int64_t function_520248();
int64_t function_520254();
int64_t function_520270();
int64_t function_52032d();
int64_t function_520346();
int64_t function_520349();
int64_t function_520352();
int64_t function_520395();
int64_t function_5203c0(char a1);
int64_t function_5204c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_520510(void);
int64_t function_520530(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_52065a();
int64_t function_5206d7();
int64_t function_5206e0();
int64_t function_520711();
int64_t function_52071e();
int64_t function_520726();
int64_t function_5207c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5207c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_5207d8(void);
int64_t function_5207f0(void);
int64_t function_520820(uint64_t a1);
int64_t function_520898(void);
int64_t function_5208c0(char a1);
int64_t function_5208e8(void);
int64_t function_520908(void);
int64_t function_520928(int32_t a1);
int64_t function_5209a0(void);
int64_t function_5209f0();
int64_t function_520af8();
int64_t function_520b40();
int64_t function_520b68();
int64_t function_520c20();
int64_t function_520c48();
int64_t function_520c70();
int64_t function_520c98();
int64_t function_520cf1();
int64_t function_520d1b();
int64_t function_520d3d();
int64_t function_520e9d();
int64_t function_520ea7();
int64_t function_520f30();
int64_t function_520f3a();
int64_t function_521001();
int64_t function_567700();
int64_t function_6bb823b5();
int64_t function_8b86c69();
int64_t function_ffffffff9552ad60();
int64_t function_ffffffffb196e81a();
int64_t function_ffffffffda787a2e();
int64_t function_fffffffff0e07983();
int64_t unknown_15610e6();
int64_t unknown_21a32f5c();
int64_t unknown_2ffee1c3();
int64_t unknown_5fe860c3();
int64_t unknown_6317041f();
int64_t unknown_7389efb5();
int64_t unknown_ffffffffb1f7fbb2();
int64_t unknown_ffffffffb60649c5();

// Address range: 0x215c33 - 0x215c4a
int64_t function_215c33(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x215c33
    int64_t v1; // 0x215c33
    *(int32_t *)a1 = (int32_t)v1;
    *(char *)(v1 - 34) = (char)(a4 / 256);
    bool v2; // 0x215c33
    return (int64_t)(-0x795b3c49 * *(int32_t *)(a2 + 41 + v1 + (v2 ? -4 : 4)));
}

// Address range: 0x215c4d - 0x215c50
int64_t function_215c4d(void) {
    // 0x215c4d
    int64_t result; // 0x215c4d
    return result;
}

// Address range: 0x215d08 - 0x215d09
int64_t function_215d08(void) {
    // 0x215d08
    int64_t result; // 0x215d08
    return result;
}

// Address range: 0x215d0f - 0x215d67
int64_t function_215d0f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x215d0f
    int64_t v1; // 0x215d0f
    int64_t v2 = v1;
    char v3 = v1 / 256; // 0x215d0f
    *(char *)0x4e604016 = *(char *)0x4e604016 + v3;
    int64_t v4 = v2 & -256 | (int64_t)(*(char *)(v2 + 126) + (char)v2 ^ 3); // 0x215d18
    unsigned char v5 = *(char *)(v1 + 0x18a5aeab); // 0x215d1a
    char * v6 = (char *)(v4 + 2 * v1); // 0x215d20
    *v6 = *v6 + v5;
    int32_t * v7 = (int32_t *)(a2 + 0x7e013daa); // 0x215d23
    uint32_t v8 = *v7; // 0x215d23
    uint32_t v9 = (int32_t)a4; // 0x215d23
    *v7 = v8 - v9;
    *(char *)v4 = -106;
    char * v10 = (char *)(a2 - 0x5566e7c8); // 0x215d32
    *v10 = *v10 + (v8 < v9 ? 122 : 121);
    int64_t v11 = 0x868d543; // bp-8, 0x215d38
    *(char *)0xead7745 = *(char *)0xead7745 + v3;
    int32_t v12 = *(int32_t *)(a1 - 100); // 0x215d44
    int32_t v13 = 256 * (int64_t)v5 | a3 & 0xffff00ff; // 0x215d48
    int64_t v14 = v4; // 0x215d4b
    if (((v13 - 99 ^ v13) & v13 + 0x7fffff9d) < 0) {
        v14 = function_215d08();
    }
    unsigned char v15 = *(char *)0x13d00d3057c320a; // 0x215d4f
    int64_t v16 = (char)v14 < 94 ? 0xa1ecb71 : 0xa1ecb70; // 0x215d58
    *(int64_t *)(int64_t)((int32_t)(int64_t)&v11 - v12) = -0x73cd309;
    return (v14 & 0xffffff00 | (int64_t)v15) - v16 & 0xffffffff;
}

// Address range: 0x215dac - 0x215dd1
int64_t function_215dac(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    unknown_ffffffffb1f7fbb2();
    bool v2; // 0x215dac
    if (v2) {
        // 0x215e06
        return (int64_t)&v1;
    }
    char * v3 = (char *)(a2 - 78); // 0x215dbf
    *v3 = *v3 - (char)a3;
    *(char *)(a3 + 0x7b1e09a3) = 0;
    int64_t v4; // 0x215dac
    return v4 & 0xffff0000 | (int64_t)&g4;
}

// Address range: 0x215dd1 - 0x215ddc
int64_t function_215dd1(int64_t a1) {
    char v1 = *(char *)0x67bbecda; // 0x215dd3
    int64_t v2; // 0x215dd1
    *(char *)0x67bbecda = v1 + (char)((uint64_t)v2 / 256);
    return v2 | 19;
}

// Address range: 0x215e00 - 0x215e06
int64_t function_215e00(void) {
    // 0x215e00
    int64_t result; // 0x215e00
    return result;
}

// Address range: 0x215e08 - 0x215e09
int64_t function_215e08(void) {
    // 0x215e08
    int64_t result; // 0x215e08
    return result;
}

// Address range: 0x215e34 - 0x215e36
int64_t function_215e34(void) {
    // 0x215e34
    return function_215e08();
}

// Address range: 0x215e44 - 0x215e47
int64_t function_215e44(void) {
    // 0x215e44
    int64_t result; // 0x215e44
    return result;
}

// Address range: 0x215e4b - 0x215e52
int64_t function_215e4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x215e4b
    unknown_21a32f5c(a1, a2, a3, a4, a5);
    return a4 & 0xffffffff;
}

// Address range: 0x215e74 - 0x215e75
int64_t function_215e74(void) {
    // 0x215e74
    int64_t result; // 0x215e74
    return result;
}

// Address range: 0x215eb7 - 0x215ed0
int64_t function_215eb7(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x215eb7
    int64_t v1; // 0x215eb7
    char * v2 = (char *)(v1 + 0x23b5ba78); // 0x215ebf
    *v2 = *v2 + (char)(a4 / 256);
    __asm_in((int16_t)a3);
    return function_215e74();
}

// Address range: 0x215ed2 - 0x215eda
int64_t function_215ed2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x215ed2
    *(char *)(a4 + 0x7f37fc54) = (char)a4;
    int64_t result; // 0x215ed2
    return result;
}

// Address range: 0x215eff - 0x215f00
int64_t function_215eff(void) {
    // 0x215eff
    int64_t result; // 0x215eff
    return result;
}

// Address range: 0x215f4d - 0x215f4f
int64_t function_215f4d(void) {
    // 0x215f4d
    return function_215eff();
}

// Address range: 0x215f83 - 0x215f86
int64_t function_215f83(int64_t a1) {
    // 0x215f83
    int64_t result; // 0x215f83
    return result;
}

// Address range: 0x21603a - 0x21604e
int64_t function_21603a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)0x1019df41; // 0x21603a
    int64_t v2; // 0x21603a
    *(char *)0x1019df41 = v1 + (char)((uint64_t)v2 / 256);
    __asm_sti();
    unsigned char v3 = (char)a4 % 32; // 0x216043
    if (v3 != 0) {
        char * v4 = (char *)((int64_t)((int32_t)v2 >> 31) - 0x4c4be220); // 0x216043
        *v4 = *v4 >> v3;
    }
    return function_1d7e60b6();
}

// Address range: 0x2160ef - 0x2160f3
int64_t function_2160ef(int64_t a1, int64_t a2, int64_t a3) {
    // 0x2160ef
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x2160ef
    return result;
}

// Address range: 0x2160fe - 0x2160ff
int64_t function_2160fe(void) {
    // 0x2160fe
    int64_t result; // 0x2160fe
    return result;
}

// Address range: 0x21611e - 0x21611f
int64_t function_21611e(void) {
    // 0x21611e
    int64_t result; // 0x21611e
    return result;
}

// Address range: 0x21613b - 0x216156
int64_t function_21613b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x21613b
    int64_t v1; // 0x21613b
    *(char *)a1 = (char)v1;
    uint32_t v2 = *(int32_t *)(a3 & -0xff01 | (int64_t)&g7); // 0x21614b
    int64_t v3; // 0x21613b
    if (v2 < 0xffffffc5) {
        v3 = function_2160fe();
    }
    int64_t result = v3; // 0x216151
    if (v2 == -60) {
        result = function_21611e();
    }
    // 0x216153
    return result;
}

// Address range: 0x21615f - 0x216164
int64_t function_21615f(void) {
    // 0x21615f
    int64_t v1; // 0x21615f
    return v1 & -0xff01 | (int64_t)&g6;
}

// Address range: 0x216178 - 0x216195
int64_t function_216178(int64_t a1, int64_t a2, int64_t a3) {
    // 0x216178
    float80_t v1; // 0x216178
    *(float80_t *)(a3 + 0x68081015) = __asm_fbstp(v1);
    int64_t result; // 0x216178
    return result;
}

// Address range: 0x216433 - 0x216434
int64_t function_216433(int64_t a1) {
    // 0x216433
    int64_t result; // 0x216433
    return result;
}

// Address range: 0x216448 - 0x216449
int64_t function_216448(void) {
    // 0x216448
    int64_t result; // 0x216448
    return result;
}

// Address range: 0x216457 - 0x21645a
int64_t function_216457(int64_t a1) {
    // 0x216457
    int64_t result; // 0x216457
    return result;
}

// Address range: 0x2164bd - 0x216522
int64_t function_2164bd(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x2164bd
    unknown_2ffee1c3();
    function_216448();
    // 0x2164c4
    __asm_wait();
    uint32_t v1 = *(int32_t *)(a2 - 0x2fdebfc6); // 0x2164cd
    int64_t v2 = 2 * a3 / 256 | (int64_t)(v1 > (int32_t)a4); // 0x2164d3
    int64_t v3 = 256 * v2 & 0xff00 | a3 & -0xff01; // 0x2164d3
    char * v4 = (char *)v3; // 0x2164de
    char v5 = *v4 + (char)v2; // 0x2164de
    *v4 = v5;
    int64_t v6; // 0x2164bd
    unsigned char v7 = *(char *)0x20c762e7 ^ (char)(v6 / 256); // 0x2164e0
    *v4 = v5 | v7;
    *(int32_t *)(a1 - 10) = (int32_t)(256 * (int64_t)v7 | v6 & 0xffff00ff);
    *(char *)a1 = __asm_insb((int16_t)v3);
    __asm_int(44);
    unsigned char v8 = *v4; // 0x21650d
    *v4 = v8 - 45;
    int32_t v9 = *(int32_t *)0x7a22a215; // 0x21650f
    *(int32_t *)0x7a22a215 = (int32_t)(v8 > 44) - (int32_t)v6 + v9;
    return __asm_in_133(-16);
}

// Address range: 0x21652c - 0x21652d
int64_t function_21652c(void) {
    // 0x21652c
    int64_t result; // 0x21652c
    return result;
}

// Address range: 0x216530 - 0x216533
int64_t function_216530(int64_t a1) {
    // 0x216530
    int64_t result; // 0x216530
    return result;
}

// Address range: 0x216551 - 0x216552
int64_t function_216551(void) {
    // 0x216551
    int64_t result; // 0x216551
    return result;
}

// Address range: 0x216555 - 0x216560
int64_t function_216555(int64_t a1, int64_t a2, int64_t a3) {
    // 0x216555
    int64_t v1; // 0x216555
    return v1 & -256 | (int64_t)__asm_in_134(39);
}

// Address range: 0x2165d0 - 0x2165d1
int64_t function_2165d0(void) {
    // 0x2165d0
    int64_t result; // 0x2165d0
    return result;
}

// Address range: 0x21660f - 0x216645
int64_t function_21660f(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t result; // 0x21660f
    int64_t v2; // 0x21660f
    bool v3; // 0x21660f
    if (v3) {
        // 0x216640
        *(int32_t *)a1 = (int32_t)v2;
        *(char *)result = *(char *)&result + (char)(v2 / 256);
        *(char *)v1 = *(char *)&v1 | (char)(a3 / 256);
        return result;
    }
    // 0x21662a
    *(int32_t *)a3 = (int32_t)a3 + (int32_t)a1;
    int32_t v4 = result; // 0x21662e
    unsigned char v5 = (char)(result / 256); // 0x21662f
    unsigned char v6 = v5 + (char)result; // 0x21662f
    char v7 = __asm_in((int16_t)(v4 >> 31)); // 0x216631
    int32_t * v8 = (int32_t *)(v2 - 90); // 0x216632
    *v8 = *v8 + (int32_t)(v4 < 0) + (int32_t)(v6 < v5);
    int32_t * v9 = (int32_t *)(a4 - 8); // 0x216637
    int64_t v10; // 0x21660f
    *v9 = *v9 + (int32_t)(int64_t)&v10;
    return result & -0x10000 | (int64_t)v7 | 256 * (int64_t)v6;
}

// Address range: 0x2166bd - 0x2166dc
int64_t function_2166bd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = unknown_5fe860c3(); // 0x2166bd
    int64_t v1; // 0x2166bd
    if (a4 != 0) {
        int32_t * v2 = (int32_t *)(a4 - 0x1a30297c); // 0x2166c4
        *v2 = *v2 + (int32_t)v1;
        return result;
    }
    // 0x2166cb
    *(int64_t *)0x1e8bd8e = 0xa9fb80a;
    char * v3 = (char *)(a2 + 25); // 0x2166d6
    *v3 = *v3 + (char)v1;
    return (result & 0xff00) + v1 & 0xff00 | result & 0xffff00ff;
}

// Address range: 0x216738 - 0x216739
int64_t function_216738(void) {
    // 0x216738
    int64_t result; // 0x216738
    return result;
}

// Address range: 0x216760 - 0x216764
int64_t function_216760(void) {
    // 0x216760
    int64_t result; // 0x216760
    return result;
}

// Address range: 0x216765 - 0x216766
int64_t function_216765(int64_t a1) {
    // 0x216765
    int64_t result; // 0x216765
    return result;
}

// Address range: 0x216768 - 0x216770
int64_t function_216768(int64_t a1, int64_t a2, int64_t a3) {
    // 0x216768
    int64_t v1; // 0x216768
    int32_t v2 = -126 * (int32_t)v1; // 0x21676a
    return v2 + 250 & 254 | v2 & -256;
}

// Address range: 0x216775 - 0x2167d0
int64_t function_216775(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    uint64_t v2 = a4 - 1; // 0x216777
    int64_t result2; // 0x216775
    int64_t v3; // 0x216775
    if (v2 != 0 == (int32_t)v3 == 0) {
        result2 = function_216738();
    }
    char * v4 = (char *)(v3 - 89); // 0x216779
    *v4 = (char)(v2 / 256);
    int64_t v5 = 256 * (int64_t)*v4 | v2 & -0xff01; // 0x216779
    float80_t v6; // 0x216775
    *(int32_t *)(a2 + (int64_t)&g1) = (int32_t)v6;
    *(int32_t *)v1 = *(int32_t *)&v1 - (int32_t)v3;
    int64_t v7 = a1; // bp-8, 0x21678b
    *(char *)result2 = *(char *)&result2 + (char)v2;
    int32_t * v8 = (int32_t *)(v1 + 0x108c140a); // 0x2167a4
    int32_t v9 = a1; // 0x2167a4
    *v8 = *v8 + v9;
    int32_t v10 = v5; // 0x2167aa
    int64_t v11; // 0x216775
    *(int32_t *)v11 = *(int32_t *)&v11 | v10;
    int64_t result = (int64_t)&v7; // 0x2167ac
    result2 = result;
    if (v5 == 0) {
        // 0x216797
        return result;
    }
    // 0x2167af
    *(int32_t *)-0x61423c48 = *(int32_t *)-0x61423c48 + v9;
    int64_t v12 = unknown_ffffffffb60649c5(); // 0x2167bf
    result2 = v12;
    int32_t * v13 = (int32_t *)(v12 - 76); // 0x2167cb
    *v13 = *v13 + v10;
    uint32_t v14 = (int32_t)v2 % 32; // 0x2167ce
    if (v14 != 0) {
        uint32_t v15 = *(int32_t *)v12; // 0x2167ce
        *(int32_t *)result2 = v15 >> 32 - v14 | v15 << v14;
    }
    return result2;
}

// Address range: 0x216810 - 0x216811
int64_t function_216810(int64_t a1) {
    // 0x216810
    int64_t result; // 0x216810
    return result;
}

// Address range: 0x216927 - 0x216928
int64_t function_216927(void) {
    // 0x216927
    int64_t result; // 0x216927
    return result;
}

// Address range: 0x2169b3 - 0x2169b4
int64_t function_2169b3(void) {
    // 0x2169b3
    int64_t result; // 0x2169b3
    return result;
}

// Address range: 0x216a6e - 0x216a6f
int64_t function_216a6e(void) {
    // 0x216a6e
    int64_t result; // 0x216a6e
    return result;
}

// Address range: 0x216a72 - 0x216a73
int64_t function_216a72(void) {
    // 0x216a72
    int64_t result; // 0x216a72
    return result;
}

// Address range: 0x216a7a - 0x216a7c
int64_t function_216a7a(void) {
    // 0x216a7a
    return function_216a6e();
}

// Address range: 0x216ab2 - 0x216ab3
int64_t function_216ab2(void) {
    // 0x216ab2
    int64_t result; // 0x216ab2
    return result;
}

// Address range: 0x216abf - 0x216ac0
int64_t function_216abf(void) {
    // 0x216abf
    int64_t result; // 0x216abf
    return result;
}

// Address range: 0x216ada - 0x216af1
int64_t function_216ada(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // bp-8, 0x216ada
    int64_t v3; // 0x216ada
    bool v4; // 0x216ada
    if ((int32_t)v3 + (int32_t)a4 - ((int32_t)(int64_t)&v2 || (int32_t)v4) < 0) {
        function_216a72();
    }
    int64_t v5 = __asm_int3(); // 0x216ae7
    char * v6 = (char *)(a3 - 16); // 0x216aea
    uint64_t v7 = a4 / 256; // 0x216aea
    *v6 = *v6 | (char)v7;
    *(int32_t *)v1 = *(int32_t *)&v1 + (int32_t)a3;
    return (v5 - v7) % 256 | v5 & -256;
}

// Address range: 0x216af3 - 0x216af6
int64_t function_216af3(void) {
    // 0x216af3
    int64_t result; // 0x216af3
    return result;
}

// Address range: 0x216b16 - 0x216b26
int64_t function_216b16(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x216b16
    int64_t v1; // 0x216b16
    if ((v1 & 0xffffffff) == 0) {
        function_216ab2();
    }
    // 0x216b19
    unknown_6317041f();
    bool v2; // 0x216b16
    if (v2) {
        function_216abf();
    }
    // 0x216b21
    return function_fffffffff0e07983();
}

// Address range: 0x216b26 - 0x216b27
int64_t function_216b26(int64_t a1) {
    // 0x216b26
    int64_t result; // 0x216b26
    return result;
}

// Address range: 0x216b27 - 0x216b37
int64_t function_216b27(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x216b27
    int64_t result; // 0x216b27
    return result;
}

// Address range: 0x216b46 - 0x216b50
int64_t function_216b46(void) {
    // 0x216b46
    return function_38776ced();
}

// Address range: 0x216b52 - 0x216b62
int64_t function_216b52(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x216b52
    int64_t v1; // 0x216b52
    *(char *)a4 = (char)v1;
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x216b56
    int32_t * v3 = (int32_t *)((v2 * v2 & 0xffffffff) + 10); // 0x216b58
    *v3 = *v3 + (int32_t)v1;
    return function_8b86c69();
}

// Address range: 0x216b7e - 0x216b7f
int64_t function_216b7e(void) {
    // 0x216b7e
    int64_t result; // 0x216b7e
    return result;
}

// Address range: 0x216bca - 0x216bcb
int64_t function_216bca(void) {
    // 0x216bca
    int64_t result; // 0x216bca
    return result;
}

// Address range: 0x216bfc - 0x216c0c
int64_t function_216bfc(void) {
    // 0x216bfc
    bool v1; // 0x216bfc
    if (!v1) {
        function_216b7e();
    }
    if (v1 || false) {
        function_216bca();
    }
    char v2 = *(char *)0x3ab61308; // 0x216c01
    int64_t v3; // 0x216bfc
    *(char *)0x3ab61308 = v2 + (char)((uint64_t)v3 / 256);
    return function_ffffffffb196e81a();
}

// Address range: 0x429b17 - 0x429b18
int64_t function_429b17(void) {
    // 0x429b17
    int64_t result; // 0x429b17
    return result;
}

// Address range: 0x429ba1 - 0x429ba2
int64_t function_429ba1(void) {
    // 0x429ba1
    int64_t result; // 0x429ba1
    return result;
}

// Address range: 0x429bb2 - 0x429bb3
int64_t function_429bb2(void) {
    // 0x429bb2
    int64_t result; // 0x429bb2
    return result;
}

// Address range: 0x429bcf - 0x429bd0
int64_t function_429bcf(void) {
    // 0x429bcf
    int64_t result; // 0x429bcf
    return result;
}

// Address range: 0x429bd1 - 0x429be3
int64_t function_429bd1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2;
    int64_t v2; // 0x429bd1
    bool v3; // 0x429bd1
    if (!v3) {
        v2 = function_429ba1();
    }
    // 0x429bd6
    *(int32_t *)a2 = (int32_t)(v2 & a2);
    int32_t v4 = *(int32_t *)&v1; // 0x429bde
    *(int32_t *)v1 = 2 * v4 | (int32_t)(v4 < 0);
    return function_429bb2();
}

// Address range: 0x429beb - 0x429bfa
int64_t function_429beb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x429beb
    int64_t v1; // 0x429beb
    int64_t v2 = v1;
    int32_t v3 = v1;
    int32_t v4 = 2 * v3; // 0x429beb
    __asm_outsd((int16_t)a3, (int32_t)v1);
    if (v4 < 0 == (v4 ^ v3) < 0) {
        function_429bcf();
    }
    // 0x429bf6
    return (v2 | a3) % 256 | v2 & 0xffffff00;
}

// Address range: 0x429c25 - 0x429c35
int64_t function_429c25(void) {
    // 0x429c25
    return function_6bb823b5();
}

// Address range: 0x429c63 - 0x429c67
int64_t function_429c63(int32_t a1) {
    // 0x429c63
    int64_t result; // 0x429c63
    return result;
}

// Address range: 0x429c72 - 0x429c73
int64_t function_429c72(void) {
    // 0x429c72
    int64_t result; // 0x429c72
    return result;
}

// Address range: 0x429ccc - 0x429ccd
int64_t function_429ccc(void) {
    // 0x429ccc
    int64_t result; // 0x429ccc
    return result;
}

// Address range: 0x429cfc - 0x429d43
int64_t function_429cfc(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3;
    char v2 = *(char *)((a4 & 0xffffffff) + 0x4540ad08); // 0x429d03
    int32_t * v3 = (int32_t *)((a1 & 0xffffff00 | (int64_t)(v2 & (char)a1)) + 0x4496c12c); // 0x429d09
    *v3 = *v3 & (int32_t)a3;
    int32_t v4 = __asm_in_133(123); // 0x429d1a
    __asm_outsb((int16_t)v1, *(char *)0x2917aa6e);
    int32_t * v5 = (int32_t *)(v1 + 18);
    *v5 = *v5 - 120;
    int64_t v6 = (int64_t)*(int32_t *)&v1; // 0x429d26
    int64_t v7 = 0x275ac290 * v6; // 0x429d26
    char * v8 = (char *)((v7 & 0xfffffff0) - 105); // 0x429d2c
    char v9 = *v8; // 0x429d2c
    *v8 = v9 - (char)v4 + (char)(v7 != 0x275ac29000000000 * v6 >> 32);
    function_429ccc();
    int32_t v10 = *(int32_t *)0x2917aa6e; // 0x429d3d
    __asm_outsd((int16_t)v1 % 256 | (int16_t)&g2, v10);
    return function_323e32b5();
}

// Address range: 0x429d5e - 0x429d5f
int64_t function_429d5e(void) {
    // 0x429d5e
    int64_t result; // 0x429d5e
    return result;
}

// Address range: 0x429d6a - 0x429dc8
int64_t function_429d6a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x429d6a
    __asm_hlt();
    unsigned char v1 = (char)a4 % 32; // 0x429dc0
    if (v1 != 0) {
        *(char *)-0x533f483f = *(char *)-0x533f483f >> v1;
    }
    int64_t v2; // 0x429d6a
    return v2 & 0xffffff00 | 30;
}

// Address range: 0x429e02 - 0x429e05
int64_t function_429e02(int64_t a1) {
    // 0x429e02
    int64_t result; // 0x429e02
    return result;
}

// Address range: 0x429e0d - 0x429e0e
int64_t function_429e0d(int64_t a1) {
    // 0x429e0d
    int64_t result; // 0x429e0d
    return result;
}

// Address range: 0x429e24 - 0x429e25
int64_t function_429e24(int64_t a1) {
    // 0x429e24
    int64_t result; // 0x429e24
    return result;
}

// Address range: 0x429e2d - 0x429e2e
int64_t function_429e2d(void) {
    // 0x429e2d
    int64_t result; // 0x429e2d
    return result;
}

// Address range: 0x429e6e - 0x429f12
int64_t function_429e6e(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    bool v2; // 0x429e6e
    if (!v2) {
        // 0x429eaf
        int64_t result; // 0x429e6e
        return result;
    }
    // 0x429ed5
    int64_t result2; // 0x429e6e
    int32_t * v3 = (int32_t *)(a4 + 40 + 2 * result2); // 0x429ed5
    uint32_t v4 = (int32_t)result2; // 0x429ed5
    *v3 = (int32_t)v2 + v4 + *v3;
    char v5 = (char)result2 & -22; // 0x429ed9
    int16_t v6 = a3;
    if (v5 >= 0 == (v5 != 0)) {
        // 0x429e77
        *(char *)a1 = __asm_insb(v6);
        return result2;
    }
    // 0x429edd
    __asm_outsd(v6, *(int32_t *)&v1);
    int64_t result3 = (int64_t)*(int32_t *)-0x50a65451fbd57466; // 0x429ee0
    v1 += (v2 ? -1 : 1);
    if (*(char *)-0x2a67bffb > (char)a3) {
        // 0x429eaf
        return result3;
    }
    int32_t * v7 = (int32_t *)(result3 + 111); // 0x429f01
    *v7 = 0x800000 * *v7;
    return result3 - (v4 < (int32_t)v1 ? 0x7f66e920 : 0x7f66e91f) & 0xffffffff;
}

// Address range: 0x429f17 - 0x429f2b
int64_t function_429f17(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x429f17
    int64_t v1; // 0x429f17
    float80_t v2; // 0x429f17
    *(int16_t *)v1 = (int16_t)v2;
    int64_t v3; // 0x429f17
    *(char *)-0x361c27ff = (char)((int32_t)a4 - *(int32_t *)&v3);
    return function_ffffffff9552ad60();
}

// Address range: 0x429f2b - 0x429f3a
int64_t function_429f2b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a4 - 48); // 0x429f2b
    int64_t v2; // 0x429f2b
    int32_t v3 = *v1 - (int32_t)v2; // 0x429f2b
    unsigned char v4 = llvm_ctpop_i8((char)v3); // 0x429f2b
    *v1 = v3;
    if (v4 % 2 != 0) {
        function_429f66(a1, a2, a5, a4);
    }
    // 0x429f31
    return function_37cfb46c();
}

// Address range: 0x429f3a - 0x429f60
int64_t function_429f3a(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    int64_t v1 = a1;
    int64_t v2; // 0x429f3a
    bool v3; // 0x429f3a
    if (!v3) {
        int64_t v4 = unknown_15610e6(); // 0x429f45
        int64_t v5; // 0x429f3a
        *(char *)(v5 - 86) = *(char *)(a1 + 0x52bd572b) + (char)a4;
        *(char *)v1 = *(char *)&v1 + 1;
        char * v6 = (char *)(v1 + 0x397f2160); // 0x429f4f
        *v6 = *v6 | (char)(a3 / 256);
        v2 = v4;
    }
    // 0x429f56
    return v2 & 0x624409f3;
}

// Address range: 0x429f66 - 0x429f6c
int64_t function_429f66(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x429f66
    int64_t v1; // 0x429f66
    unsigned char v2 = (char)v1; // 0x429f68
    bool v3; // 0x429f66
    unsigned char v4 = v3 ? -45 : -46; // 0x429f68
    int64_t result = v1 & -256 | (int64_t)(v2 - v4); // 0x429f68
    char * v5 = (char *)result; // 0x429f6a
    *v5 = *v5 - (char)v1 + (char)(v3 | v4 > v2);
    return result;
}

// Address range: 0x429fb4 - 0x429fb7
int64_t function_429fb4(void) {
    // 0x429fb4
    int64_t result; // 0x429fb4
    return result;
}

// Address range: 0x429ffa - 0x42a001
int64_t function_429ffa(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x429ffa
    int64_t v1; // 0x429ffa
    *(int32_t *)a1 = 2 * (int32_t)v1;
    return __asm_in_133(112);
}

// Address range: 0x42a003 - 0x42a0c5
int64_t function_42a003(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a2 - 0x5275931e); // 0x42a003
    char v2 = *v1; // 0x42a003
    unsigned char v3 = (char)a4; // 0x42a003
    unsigned char v4 = v3 % 32; // 0x42a003
    bool v5; // 0x42a003
    bool v6; // 0x42a003
    bool v7; // 0x42a003
    bool v8; // 0x42a003
    if (v4 != 0) {
        char v9 = v2 << v4; // 0x42a003
        *v1 = v9;
        char v10 = (v2 << v4 - 1) / 128; // 0x42a003
        v5 = v10 != 0;
        v8 = v9 == 0;
        v7 = v9 < 0;
        bool v11; // 0x42a003
        v6 = v4 == 1 ? v9 >> 7 != v10 : v11;
    }
    bool v12 = v5; // 0x42a003
    int64_t result; // 0x42a003
    while (v8 || v7 != v6) {
        bool v13 = v12;
        v12 = true;
        if (!v13) {
            int32_t * v14 = (int32_t *)(result + 0x74487f3c); // 0x42a037
            *v14 = *v14 ^ (int32_t)result;
            int64_t v15 = a2; // bp-8, 0x42a03d
            int64_t v16 = (int64_t)&v15; // 0x42a03d
            int32_t * v17 = (int32_t *)(8 * result + a2); // 0x42a03e
            int32_t v18 = *v17; // 0x42a03e
            *v17 = v18 - (int32_t)v16;
            if ((int64_t)v18 < v16) {
                // 0x42a069
                __asm_out_135((int16_t)a3, (int32_t)result);
                return result;
            }
            uint64_t v19 = result + 160; // 0x42a044
            int64_t result2 = v19 % 256 | result & -256; // 0x42a044
            *(int32_t *)0x3cffcf1b = *(int32_t *)0x3cffcf1b + 40;
            *(int32_t *)0x43603616 = *(int32_t *)0x43603616 & 93;
            char v20 = *(char *)(result - 0x1907b842); // 0x42a058
            char v21 = v3 - v20; // 0x42a058
            if (((v21 ^ v3) & (v20 ^ v3)) < 0) {
                char * v22 = (char *)(2 * a2 + a1); // 0x42a0ac
                *v22 = *v22 + (char)v19;
                return result2;
            }
            // 0x42a060
            if (llvm_ctpop_i8(v21) % 2 != 0) {
                // 0x42a0c1
                __asm_in_136((int16_t)a3);
                return a3 & 0xffffffff;
            }
            // 0x42a064
            __asm_out(-119, (char)v19);
            return result2;
        }
    }
    // 0x42a00c
    int32_t v23; // 0x42a003
    *(int32_t *)(result - 0xfe9f809) = (int32_t)(int64_t)&v23;
    return result;
}

// Address range: 0x42a0ce - 0x42a2aa
int64_t function_42a0ce(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x42a0ce
    int64_t result; // 0x42a0ce
    bool v1; // 0x42a0ce
    if (v1) {
        // 0x42a0d0
        return result & 0xffffffff ^ 0x62211714;
    }
    int32_t * v2 = (int32_t *)(result + 0x464a3522); // 0x42a0d7
    *v2 = *v2 - (int32_t)result;
    char * v3 = (char *)(result - 47); // 0x42a0e3
    char v4 = *v3 & (char)result; // 0x42a0e3
    unsigned char v5 = llvm_ctpop_i8(v4); // 0x42a0e3
    *v3 = v4;
    if (v5 % 2 != 0) {
        // 0x42a0eb
        return result;
    }
    // 0x42a149
    *(int64_t *)a3 = result ^ a3;
    uint64_t v6 = result + 0xefc8d4c6; // 0x42a14d
    *(char *)((v6 & 0xffffff30) + 0x6bbb1450) = (char)(v6 / 256);
    return __asm_int1((int64_t)&g8);
}

// Address range: 0x42a31a - 0x42a327
int64_t function_42a31a(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int32_t result = __asm_in_133(7); // 0x42a31a
    int64_t v1; // 0x42a31a
    __asm_outsd((int16_t)a3, (int32_t)v1);
    int64_t v2 = a6 - 95; // 0x42a31e
    __readfsbyte(v2);
    __writefsbyte(v2, 0);
    return result;
}

// Address range: 0x42a37c - 0x42a37d
int64_t function_42a37c(int64_t a1) {
    // 0x42a37c
    int64_t result; // 0x42a37c
    return result;
}

// Address range: 0x42a3e9 - 0x42a3ec
int64_t function_42a3e9(int64_t a1) {
    // 0x42a3e9
    int64_t result; // 0x42a3e9
    return result;
}

// Address range: 0x42a3f6 - 0x42a3f7
int64_t function_42a3f6(int64_t a1) {
    // 0x42a3f6
    int64_t result; // 0x42a3f6
    return result;
}

// Address range: 0x42a3f8 - 0x42a413
int64_t function_42a3f8(int64_t a1, uint64_t a2) {
    // 0x42a3f8
    int64_t v1; // 0x42a3f8
    int32_t * v2 = (int32_t *)(v1 - 0x2689734); // 0x42a3f8
    *v2 = *v2 + (int32_t)v1;
    *(char *)(v1 - 0x11b738df) = (char)(a2 / 256);
    bool v3; // 0x42a3f8
    int64_t v4 = v3 ? -8 : 8; // 0x42a40b
    return function_3d603141(v4 + a1, v4 + 0xe51f7c08, a2);
}

// Address range: 0x42a41c - 0x42a421
int64_t function_42a41c(void) {
    // 0x42a41c
    return function_ffffffffda787a2e();
}

// Address range: 0x42a44e - 0x42a47a
int64_t function_42a44e(int64_t a1, int64_t a2, int64_t a3) {
    // 0x42a44e
    float80_t v1; // 0x42a44e
    *(int16_t *)(a1 + 97) = (int16_t)v1;
    char v2 = *(char *)-0x75fc2e22; // 0x42a46c
    int64_t v3; // 0x42a44e
    *(char *)-0x75fc2e22 = (char)((uint64_t)v3 / 256) ^ 3 ^ v2;
    return function_1a8ab311();
}

// Address range: 0x42a47a - 0x42a47b
int64_t function_42a47a(void) {
    // 0x42a47a
    int64_t result; // 0x42a47a
    return result;
}

// Address range: 0x42a49d - 0x42a4a1
int64_t function_42a49d(void) {
    // 0x42a49d
    int64_t v1; // 0x42a49d
    return v1 & 0xffffffff;
}

// Address range: 0x42a4d6 - 0x42a4da
int64_t function_42a4d6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42a4d6
    int64_t result; // 0x42a4d6
    return result;
}

// Address range: 0x42a4e2 - 0x42a4e8
int64_t function_42a4e2(int64_t a1) {
    // 0x42a4e2
    int64_t result; // 0x42a4e2
    *(char *)a1 = (char)(result / 256 & result);
    return result;
}

// Address range: 0x42a717 - 0x42a71d
int64_t function_42a717(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 + 0x175d699c); // 0x42a717
    int64_t result; // 0x42a717
    *v1 = *v1 - (char)((uint64_t)result / 256);
    return result;
}

// Address range: 0x42a733 - 0x42a751
int64_t function_42a733(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a3 + 0x53204840); // 0x42a733
    *v1 = *v1 - (char)a4;
    int32_t * v2 = (int32_t *)(a4 + 23 + 2 * a4); // 0x42a739
    int64_t v3; // 0x42a733
    *v2 = *v2 | (int32_t)v3;
    char v4 = v3; // 0x42a73d
    if ((11 - v4 & v4) < 0) {
        function_42a707();
    }
    // 0x42a741
    __asm_in_134(77);
    return unknown_7389efb5();
}

// Address range: 0x42a754 - 0x42a755
int64_t function_42a754(void) {
    // 0x42a754
    int64_t result; // 0x42a754
    return result;
}

// Address range: 0x42a7a7 - 0x42a7ab
int64_t function_42a7a7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x42a7a7
    int64_t result; // 0x42a7a7
    return result;
}

// Address range: 0x42a7b4 - 0x42a875
int64_t function_42a7b4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x42a7b4
    int64_t v1; // 0x42a7b4
    bool v2; // 0x42a7b4
    if (v2) {
        v1 = function_42a754();
    }
    int64_t v3 = v1;
    int64_t result = (v3 + 207) % 256 | v3 & -256; // 0x42a7b6
    if ((char)v3 <= 49) {
        // 0x42a7bd
        return result;
    }
    int32_t result2 = (int32_t)result ^ -0x61408fa5; // 0x42a7e5
    int16_t v4 = a3; // 0x42a7ea
    __asm_out_135(v4, result2);
    if (result2 < 0) {
        // 0x42a81f
        *(int32_t *)a1 = __asm_insd(v4);
        return __asm_iretd() & 0xf2d54d3e | 0xd2ab2c1;
    }
    // 0x42a7ed
    __readgsdword(a3 - 116);
    // 0x42a7bd
    return result2;
}

// Address range: 0x42a8d0 - 0x42a94b
int64_t function_42a8d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x42a8d0
    int64_t v1; // 0x42a8d0
    int32_t v2 = v1; // 0x42a8d0
    int32_t v3 = *(int32_t *)(2 * v1 + a4); // 0x42a8d0
    int32_t v4 = v3 + v2; // 0x42a8d0
    int64_t result = v4; // 0x42a8d0
    if (v4 < 0 != ((v4 ^ v2) & (v4 ^ v3)) < 0) {
        // 0x42a92a
        *(char *)a1 = (char)v4;
        return result;
    }
    int32_t * v5 = (int32_t *)(a4 + 84 + 8 * result); // 0x42a8d6
    uint32_t v6 = *v5; // 0x42a8d6
    *v5 = v6 / 64 | 0x4000000 * v6;
    if (v4 == 0 || (v6 & 32) != 0) {
        // 0x42a8dd
        return result;
    }
    // 0x42a943
    *(int32_t *)a4 = (int32_t)v1;
    return result & 0xffffff00 | (int64_t)((v4 + 31) % 256);
}

// Address range: 0x42a96e - 0x42a9a7
int64_t function_42a96e(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4) {
    // 0x42a96e
    bool v1; // 0x42a96e
    bool v2 = v1;
    int64_t result; // 0x42a96e
    if (!v1 && !v2) {
        // 0x42a9a7
        return result;
    }
    // 0x42a970
    int64_t v3; // 0x42a96e
    uint32_t v4 = (int32_t)v3; // 0x42a976
    bool v5 = v2 ? v4 + 0x39240d + (int32_t)v2 <= v4 : v4 > 0xffc6dbf2; // 0x42a976
    char v6 = *(char *)(a1 + 127); // 0x42a97b
    int32_t * v7 = (int32_t *)(v3 - 34); // 0x42a982
    *v7 = *v7 - (int32_t)a1;
    char v8 = __asm_insb((int16_t)(256 * (int64_t)((char)v5 + (char)(a3 / 256) - v6) | a3 % 256)); // 0x42a985
    *(char *)a1 = v8;
    unsigned char v9 = (char)(a2 / 256); // 0x42a986
    int64_t v10; // 0x42a96e
    unsigned char v11 = *(char *)&v10 + v9; // 0x42a986
    int64_t v12 = 256 * (int64_t)v11 | a2 & 0xffff00ff; // 0x42a986
    *(char *)-0x74d438d80ccb9de9 = (char)a2;
    result = v12;
    if (v11 < v9) {
        // 0x42a993
        result = v12 & 0xffffff00 | (a2 + 126 + (int64_t)(v11 < v9)) % 256;
    }
    // 0x42a9a7
    return result;
}

// Address range: 0x42a9ec - 0x42a9ef
int64_t function_42a9ec(void) {
    // 0x42a9ec
    int64_t result; // 0x42a9ec
    return result;
}

// Address range: 0x42aa20 - 0x42aa25
int64_t function_42aa20(int64_t a1) {
    // 0x42aa20
    return __asm_int1(a1);
}

// Address range: 0x42aaa0 - 0x42aaa6
int64_t function_42aaa0(void) {
    // 0x42aaa0
    int64_t result; // 0x42aaa0
    return result;
}

// Address range: 0x42aab5 - 0x42aab6
int64_t function_42aab5(void) {
    // 0x42aab5
    int64_t result; // 0x42aab5
    return result;
}

// Address range: 0x42aac4 - 0x42aac6
int64_t function_42aac4(void) {
    // 0x42aac4
    int64_t v1; // 0x42aac4
    return function_42aaf2(v1, v1, v1, v1);
}

// Address range: 0x42aaef - 0x42aaf2
int64_t function_42aaef(void) {
    // 0x42aaef
    int64_t v1; // 0x42aaef
    bool v2; // 0x42aaef
    return 0x80000000 * (int64_t)v2 | (uint64_t)v1 / 2 % 0x80000000;
}

// Address range: 0x42aaf2 - 0x42ab05
int64_t function_42aaf2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int16_t v1 = a3; // 0x42aaf2
    int64_t v2; // 0x42aaf2
    __asm_outsb(v1, (char)v2);
    int32_t * v3 = (int32_t *)(v2 - 0xd0ac55d); // 0x42aaf3
    *v3 = (int32_t)a1;
    *(int32_t *)(int64_t)*v3 = __asm_insd(v1);
    int64_t result = __asm_int1((int64_t)&g8); // 0x42aafc
    int64_t v4; // 0x42aaf2
    __asm_outsb(v1, *(char *)&v4);
    unsigned char v5 = (char)a4 % 32; // 0x42aafe
    if (v5 != 0) {
        unsigned char v6 = *(char *)0x283a22a2; // 0x42aafe
        bool v7; // 0x42aaf2
        *(char *)0x283a22a2 = v6 >> v5 | (char)v7 << 8 - v5 | (char)((int16_t)v6 << (int16_t)(9 - v5));
    }
    return result;
}

// Address range: 0x5203c0 - 0x5204b6
int64_t function_5203c0(char a1) {
    // 0x5203c0
    int64_t v1; // 0x5203c0
    int64_t v2 = v1;
    int64_t v3 = v1;
    int64_t v4; // 0x5203c0
    int64_t v5 = 0; // 0x5203cd
    char v6; // 0x5203c0
    if (v6 == -1) {
        v5 = function_520908();
    }
    int64_t result = v5; // 0x5203d5
    if ((char)v5 != (char)v4) {
        result = function_520820((int64_t)&g8);
    }
    // 0x5203db
    if (v1 == 0) {
        // 0x520740
        return result;
    }
    uint64_t v7 = v1 + 1; // 0x5203f8
    if (v7 > (v1 == v1 + 16 ? 15 : v1)) {
        function_520c70();
    }
    // 0x520424
    *(char *)(2 * v1) = a1;
    *(char *)(v7 + v1) = 0;
    int64_t v8 = function_567700(*(int64_t *)(v2 + 16), *(int64_t *)(v2 + 24), v1); // 0x520447
    int64_t result2 = v8; // 0x52044e
    if ((char)v8 == 0) {
        result2 = function_520b68();
    }
    // 0x520454
    if (a1 == 0) {
        // 0x520461
        if ((char)v1 != 1 == v7 == 0) {
            // 0x520740
            return result2;
        }
    }
    // 0x520473
    if (v6 != 0) {
        // 0x520740
        return result2;
    }
    if (v6 == 0) {
        function_520b40();
    }
    int64_t v9; // 0x5203c0
    if (v6 == 0) {
        v9 = function_520cf1();
    }
    // 0x520499
    *(int64_t *)v9 = -0x8000000000000000;
    int32_t * v10; // 0x5203c0
    return (int64_t)v10;
}

// Address range: 0x5204c0 - 0x52050b
int64_t function_5204c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x5204c0
    int64_t v1; // 0x5204c0
    int64_t v2 = v1;
    if (v2 == 0) {
        function_520e9d();
    }
    if ((int32_t)v1 == -1) {
        // 0x5204cf
        if (*(int64_t *)(v2 + 16) >= *(int64_t *)(v2 + 24)) {
            function_520c98();
        }
    }
    if ((char)v1 != 0) {
        function_5201ad();
    }
    // 0x5204f2
    return function_520270();
}

// Address range: 0x520510 - 0x520529
int64_t function_520510(void) {
    // 0x520510
    int64_t v1; // 0x520510
    int64_t v2 = v1;
    if (*(int64_t *)(v2 + 16) >= *(int64_t *)(v2 + 24)) {
        function_5209f0();
    }
    // 0x52051e
    return function_520254();
}

// Address range: 0x520530 - 0x520583
int64_t function_520530(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = a3; // 0x520534
    int64_t v2; // 0x520530
    unsigned char v3 = (char)v2 ^ 1 | (char)(v1 == 10); // 0x52053a
    int64_t result = v2 & -256 | (int64_t)v3; // 0x52053d
    if (v3 == 0) {
        result = function_5201d9();
    }
    if (v1 != 8 && (int32_t)a4 != 0) {
        // 0x520600
        return result;
    }
    if (v2 != 0) {
        function_520217();
    }
    if (v2 == 0) {
        function_521001();
    }
    // 0x520579
    return function_520248();
}

// Address range: 0x5207c0 - 0x5207c3
int64_t function_5207c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x5207c0
    int64_t result; // 0x5207c0
    char * v1 = (char *)(result - 127); // 0x5207c0
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x5207c4 - 0x5207d3
int64_t function_5207c4(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x5207c4
    int64_t v1; // 0x5207c4
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x5207d8 - 0x5207e7
int64_t function_5207d8(void) {
    // 0x5207d8
    int64_t v1; // 0x5207d8
    if (*(char *)(v1 + 73) != (char)v1) {
        function_5200fa();
    }
    // 0x5207e2
    return function_520199();
}

// Address range: 0x5207f0 - 0x520819
int64_t function_5207f0(void) {
    // 0x5207f0
    int64_t v1; // 0x5207f0
    int64_t v2 = v1;
    if (v2 == 0) {
        function_520f30();
    }
    if ((int32_t)v1 != -1) {
        // 0x520811
        return function_52065a();
    }
    // 0x5207ff
    if (*(int64_t *)(v2 + 16) >= *(int64_t *)(v2 + 24)) {
        function_520d1b();
    }
    // 0x520811
    return function_52065a();
}

// Address range: 0x520820 - 0x520894
int64_t function_520820(uint64_t a1) {
    // 0x520820
    int64_t v1; // 0x520820
    if (v1 == 0) {
        function_520f3a();
    }
    int64_t v2; // 0x520820
    if ((int32_t)v1 == -1) {
        uint64_t v3 = *(int64_t *)(v1 + 16); // 0x52082f
        int64_t v4 = v3; // 0x520837
        if (v3 >= *(int64_t *)(v1 + 24)) {
            v4 = function_520d3d();
        }
        // 0x52083d
        v2 = (int64_t)*(char *)v4;
    }
    int64_t result = 0x100000000000000 * v2 >> 56; // 0x52084d
    if (a1 < 11) {
        result = function_52032d();
    }
    char v5 = v2;
    if (v5 < 58) {
        // 0x520880
        return function_520346();
    }
    if (v5 < 103) {
        // 0x520880
        return function_5209a0();
    }
    // 0x52086b
    if (v5 >= 71) {
        // 0x520880
        return result;
    }
    int64_t v6 = result + 0xffffffc9; // 0x520873
    int64_t result2 = v6 & 0xffffffff; // 0x520879
    if ((int32_t)v6 != -1) {
        result2 = function_520352();
    }
    // 0x520880
    return result2;
}

// Address range: 0x520898 - 0x5208b9
int64_t function_520898(void) {
    // 0x520898
    int64_t result; // 0x520898
    int64_t v1; // 0x520898
    if (v1 != 0) {
        result = function_520395();
    }
    // 0x5208a6
    return result;
}

// Address range: 0x5208c0 - 0x5208e5
int64_t function_5208c0(char a1) {
    // 0x5208c0
    int64_t v1; // 0x5208c0
    if (v1 != 0) {
        function_5206e0();
    }
    if (v1 == 0) {
        function_520726();
    }
    // 0x5208db
    return function_520711();
}

// Address range: 0x5208e8 - 0x520904
int64_t function_5208e8(void) {
    // 0x5208e8
    int64_t v1; // 0x5208e8
    int64_t v2 = v1;
    if (*(int64_t *)(v2 + 16) >= *(int64_t *)(v2 + 24)) {
        function_520c20();
    }
    // 0x5208f6
    return function_52071e();
}

// Address range: 0x520908 - 0x520924
int64_t function_520908(void) {
    // 0x520908
    int64_t v1; // 0x520908
    int64_t v2 = v1;
    if (*(int64_t *)(v2 + 16) >= *(int64_t *)(v2 + 24)) {
        function_520c48();
    }
    // 0x520916
    return 0;
}

// Address range: 0x520928 - 0x52099a
int64_t function_520928(int32_t a1) {
    // 0x520928
    if (a1 == 0) {
        function_520ea7();
    }
    // 0x52093e
    int64_t v1; // 0x520928
    uint64_t v2 = 0x100000000 * v1 + 0x100000000 >> 32; // 0x520967
    if ((v1 == v1 + 16 ? 15 : v1) < v2) {
        function_520af8();
    }
    // 0x520972
    *(char *)(2 * v1) = (char)a1;
    *(char *)(v2 + v1) = 0;
    return function_5206d7();
}

// Address range: 0x5209a0 - 0x5209a8
int64_t function_5209a0(void) {
    // 0x5209a0
    return function_520349();
}
