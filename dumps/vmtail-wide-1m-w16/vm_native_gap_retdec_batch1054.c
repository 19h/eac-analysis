/*
 * Targeted RetDec C for native executable gap queue batch 1054.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2c5264-0x2c5464 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c5464-0x2c5664 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c5664-0x2c5864 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c5864-0x2c5a64 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c5a64-0x2c5c64 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c5c64-0x2c5e64 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c5e64-0x2c6064 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c6064-0x2c6264 rank=- name=- kind=- bytes=- uncovered=-
 *   0x40a265-0x40a465 rank=- name=- kind=- bytes=- uncovered=-
 *   0x40a465-0x40a565 rank=- name=- kind=- bytes=- uncovered=-
 *   0x40a665-0x40a865 rank=- name=- kind=- bytes=- uncovered=-
 *   0x40aa65-0x40ac65 rank=- name=- kind=- bytes=- uncovered=-
 *   0x40ac65-0x40ae65 rank=- name=- kind=- bytes=- uncovered=-
 *   0x40ae65-0x40b065 rank=- name=- kind=- bytes=- uncovered=-
 *   0x41aa40-0x41ac40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e80f9-0x4e82f9 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g4;
extern int g7;
extern int g8;
extern int g9;
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

int64_t function_2c5264(int64_t a1);
int64_t function_2c52e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c5439(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c558e(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_2c571c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c5874(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c5999(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2c5b08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_2c5c46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c5e01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_2c5f56(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2c60c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_2c6242(void);
int64_t function_40a232();
int64_t function_40a265(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40a272(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40a2ad(int64_t a1, int64_t a2);
int64_t function_40a2e8(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_40a318(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40a336(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_40a3bd(int64_t a1);
int64_t function_40a3d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_40a60c();
int64_t function_40a63b();
int64_t function_40a665(int64_t a1, int64_t a2);
int64_t function_40a67d(void);
int64_t function_40a68f(void);
int64_t function_40a6a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40a76c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40a821(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_40a881();
int64_t function_40aa65(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40aabf(void);
int64_t function_40ab1c(void);
int64_t function_40ab63(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40aba6(void);
int64_t function_40abd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_40ac02(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40ac1a(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_40ad38(int64_t a1);
int64_t function_40ad60(void);
int64_t function_40ada5(int64_t a1);
int64_t function_40adbc(void);
int64_t function_40adc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_40add1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_40ae52(void);
int64_t function_40aec0(int64_t a1);
int64_t function_40aec9(int64_t a1);
int64_t function_40aef1(void);
int64_t function_40af31(int64_t a1);
int64_t function_40af4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41aa40(int64_t a1, int64_t a2, int64_t a3);
int64_t function_41aaa7(int64_t a1);
int64_t function_41ab14(void);
int64_t function_41abd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_41abee(void);
int64_t function_41ac0f(int64_t a1);
int64_t function_41ac1f(int64_t a1);
int64_t function_41ac23(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e80f3();
int64_t function_4e80f9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e8109(void);
int64_t function_4e8110(void);
int64_t function_4e811e(void);
int64_t function_4e812d(void);
int64_t function_4e8133(void);
int64_t function_4e816b(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e81be(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4e81c9(void);
int64_t function_4e81e6(void);
int64_t function_4e81e7(void);
int64_t function_4e81fc(void);
int64_t function_4e8203(void);
int64_t function_4e8211(void);
int64_t function_4e8220(void);
int64_t function_4e8226(void);
int64_t function_4e82c1(void);
int64_t function_4e82d7(void);
int64_t function_4e82de(void);
int64_t function_4e82ec(void);
int64_t function_7359b1f7();
int64_t function_cf3c7();
int64_t function_ffffffffa9cdffed();
int64_t function_ffffffffd657014a();
int64_t function_ffffffffef5dc32a();
int64_t function_ffffffffef5dc5d7();

// Address range: 0x2c5264 - 0x2c52e6
int64_t function_2c5264(int64_t a1) {
    // 0x2c5264
    int64_t v1; // 0x2c5264
    return function_cf3c7(v1, v1, v1, v1, v1, v1, 0x759fde4f);
}

// Address range: 0x2c52e6 - 0x2c5439
int64_t function_2c52e6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x34fd663b; // bp-40, 0x2c5367
    int64_t v2 = (int64_t)&v1; // 0x2c5391
    int64_t * v3 = (int64_t *)(v2 + 16); // 0x2c5399
    int64_t v4 = *v3; // 0x2c5399
    int64_t * v5 = (int64_t *)(v2 - 8); // 0x2c5399
    *v5 = v4;
    int64_t v6 = v2 - 16; // 0x2c539d
    int64_t * v7 = (int64_t *)v6; // 0x2c539d
    int64_t * v8 = (int64_t *)(v2 - 24); // 0x2c53b4
    *v7 = 0x13e94129;
    int64_t * v9 = (int64_t *)(v2 - 32); // 0x2c53c6
    *v9 = v4;
    bool v10; // 0x2c52e6
    *v8 = 0x4000 * (int64_t)v10 | 2048 * (int64_t)v10 | 1024 * (int64_t)v10 | 512 * (int64_t)v10 | 256 * (int64_t)v10 | 128 * (int64_t)v10 | 64 * (int64_t)v10 | 16 * (int64_t)v10 | (int64_t)v10 | 4 * (int64_t)v10 | 2;
    v1 = *v7;
    *v8 = 0x568a236e;
    *v3 = *v7;
    *v8 = v6;
    *v7 = v2;
    *v8 = *v5;
    *v7 = v2;
    int64_t v11; // 0x2c52e6
    return function_cf3c7(a1, a2, a3, a4, a5, v11, v1);
}

// Address range: 0x2c5439 - 0x2c558e
int64_t function_2c5439(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2c5439
    int64_t v1; // bp-56, 0x2c5439
    int64_t v2 = (int64_t)&v1; // 0x2c555d
    int64_t v3 = v2 + 8; // 0x2c5561
    v1 = v3;
    int64_t v4 = *(int64_t *)(v2 + 24); // 0x2c557a
    *(int64_t *)(v2 + 16) = v4;
    *(int64_t *)v3 = v4;
    int64_t v5; // 0x2c5439
    return function_cf3c7(a1, a2, a3, a4, a5, v5, 0x1a64f9a3);
}

// Address range: 0x2c558e - 0x2c571c
int64_t function_2c558e(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x29cbef; // bp-56, 0x2c5637
    int64_t v2 = (int64_t)&v1; // 0x2c5644
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x2c5675
    *v3 = 0x67a54235;
    *(int64_t *)(v2 - 16) = 310;
    *(int64_t *)(v2 + 16) = v1;
    int64_t v4 = v1; // 0x2c569f
    v1 = 0x29cbef;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x2c56a8
    *(int64_t *)(v2 + 40) = *v5;
    *v3 = v4;
    *v5 = a4;
    *v5 = v2 + 24;
    int64_t v6; // 0x2c558e
    return function_cf3c7(a1, a2, a3, *v5, v6, v6, 0x3815052b);
}

// Address range: 0x2c571c - 0x2c5874
int64_t function_2c571c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c571c
    int64_t v1; // 0x2c571c
    int64_t * v2 = (int64_t *)v1; // 0x2c57c6
    int64_t v3 = *(int64_t *)(v1 + 32); // 0x2c57ca
    int64_t * v4 = (int64_t *)(v1 - 8); // 0x2c57ca
    *v4 = v3;
    int64_t * v5 = (int64_t *)(v1 - 16); // 0x2c57ce
    int64_t * v6 = (int64_t *)(v1 - 24); // 0x2c57f1
    *v5 = 0x53f7b20a;
    *v6 = 0x41aaf5dd;
    int64_t * v7 = (int64_t *)(v1 - 32); // 0x2c580e
    *v7 = v3;
    *v2 = *v5;
    *v5 = 0x3f8ce142;
    *v7 = a1;
    *v6 = *(int64_t *)(v1 + 8);
    *(int64_t *)(v1 + 16) = *v5;
    int64_t v8 = *v4; // 0x2c5833
    *v5 = v8;
    *v6 = v8;
    int64_t v9 = *v2; // 0x2c584c
    *v4 = v9;
    *v5 = v9;
    *v7 = *v5;
    int64_t v10; // bp-24, 0x2c571c
    return function_cf3c7(*v7, a2, a3, a4, a5, v1, (int64_t)&v10);
}

// Address range: 0x2c5874 - 0x2c5999
int64_t function_2c5874(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c5874
    int64_t v1; // 0x2c5874
    return function_cf3c7(a1, a2, 0x29eb3a, a4, v1, v1, 169);
}

// Address range: 0x2c5999 - 0x2c5b08
int64_t function_2c5999(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2c5999
    bool v1; // 0x2c5999
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2);
}

// Address range: 0x2c5b08 - 0x2c5c46
int64_t function_2c5b08(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x2c5b08
    int64_t v1; // bp-48, 0x2c5b08
    v1 = (int64_t)&v1 + 16;
    bool v2; // 0x2c5b08
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v2 | 2048 * (int64_t)v2 | 1024 * (int64_t)v2 | 512 * (int64_t)v2 | 256 * (int64_t)v2 | 128 * (int64_t)v2 | 64 * (int64_t)v2 | 16 * (int64_t)v2 | (int64_t)v2 | 4 * (int64_t)v2 | 2);
}

// Address range: 0x2c5c46 - 0x2c5e01
int64_t function_2c5c46(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x2c5c46
    int64_t v1; // 0x2c5c46
    int64_t v2 = v1 - 16; // 0x2c5cc6
    int64_t * v3 = (int64_t *)v2; // 0x2c5cc6
    *v3 = 0x27929408;
    int64_t * v4 = (int64_t *)(v1 - 24); // 0x2c5ccc
    int64_t v5 = *(int64_t *)(v1 + 24); // 0x2c5cd2
    *v3 = v5;
    int64_t v6 = v1 - 32; // 0x2c5ce3
    int64_t * v7 = (int64_t *)v6; // 0x2c5ce3
    *v7 = a3;
    *v4 = v1 - 8;
    int64_t v8 = *(int64_t *)v1; // 0x2c5d10
    *v4 = v8;
    *v7 = 0x271af725;
    int64_t * v9 = (int64_t *)(v1 - 40); // 0x2c5d46
    *v9 = v5;
    *v3 = *v7;
    *v7 = a4;
    *v9 = 0x1145f9d5;
    *(int64_t *)(v1 - 48) = v8;
    int64_t v10 = *v9; // 0x2c5d57
    *v9 = v10 - 0x7267e27f;
    *(int64_t *)(v1 + 8) = v10;
    *v9 = v6;
    *v7 = v2;
    int64_t v11; // bp-32, 0x2c5c46
    return function_cf3c7(a1, a2, a3, *v7, a5, v1, (int64_t)&v11);
}

// Address range: 0x2c5e01 - 0x2c5f56
int64_t function_2c5e01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x3f1c9a6c; // bp-40, 0x2c5e75
    int64_t v2 = (int64_t)&v1; // 0x2c5f12
    *(int64_t *)(v2 - 8) = 0x3f1c9a6c;
    int64_t v3 = v2 - 16; // 0x2c5f38
    *(int64_t *)(v2 - 24) = v3;
    *(int64_t *)v3 = v2;
    int64_t v4; // 0x2c5e01
    return function_cf3c7(a1, a2, a3, a4, a5, v4, v4);
}

// Address range: 0x2c5f56 - 0x2c60c7
int64_t function_2c5f56(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int64_t v1 = a7; // bp-24, 0x2c603d
    return function_cf3c7(a1, a2, a3, a4, a5, a6, (int64_t)&v1);
}

// Address range: 0x2c60c7 - 0x2c61fe
int64_t function_2c60c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x2c60c7
    int64_t v1; // bp-56, 0x2c60c7
    v1 = (int64_t)&v1 + 8;
    return function_cf3c7(a1, a2, a3, a4, a5, a6, 0x72eb9fe0);
}

// Address range: 0x2c6242 - 0x2c6245
int64_t function_2c6242(void) {
    // 0x2c6242
    int64_t result; // 0x2c6242
    return result;
}

// Address range: 0x40a265 - 0x40a270
int64_t function_40a265(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t v1 = a2;
    __asm_outsd((int16_t)a3, v1);
    int64_t result; // 0x40a265
    bool v2; // 0x40a265
    if (!v2) {
        result = function_40a232();
    }
    // 0x40a269
    *(int32_t *)(result + 0x5486d12) = v1;
    return result;
}

// Address range: 0x40a272 - 0x40a294
int64_t function_40a272(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    bool v2; // 0x40a272
    unsigned char v3 = v2 ? 28 : 27; // 0x40a272
    int64_t v4 = v2 ? -1 : 1; // 0x40a279
    char * v5 = (char *)(a3 + 112); // 0x40a27a
    char v6 = *v5; // 0x40a27a
    int64_t v7; // 0x40a272
    *v5 = (char)((char)v7 < (char)v7) + (char)a3 + v6;
    uint32_t v8 = (int32_t)(v7 + a4 + (int64_t)(v2 | v3 > (char)v7)); // 0x40a27d
    uint32_t v9 = v8 + (int32_t)v7; // 0x40a27d
    char * v10 = (char *)(v7 - 0x4dcb2f7c); // 0x40a27f
    *v10 = *v10 - (char)v7 + (char)(v9 < v8);
    int64_t v11 = v4 + a2 ^ v7;
    int64_t v12 = (int64_t)&v1; // 0x40a28d
    int64_t v13 = v9; // 0x40a28d
    v12 -= 8;
    while (v13 != 1 == (int32_t)v11 == 0) {
        // 0x40a28e
        v13--;
        v12 -= 8;
    }
    // 0x40a292
    return function_40a2e8(v4 + a1, v11 & 0xffffffff, v7 & 0xff00 | a3 & -0xff01);
}

// Address range: 0x40a2ad - 0x40a2b0
int64_t function_40a2ad(int64_t a1, int64_t a2) {
    // 0x40a2ad
    int64_t v1; // 0x40a2ad
    bool v2; // 0x40a2ad
    return function_40a318(a1, (v2 ? -1 : 1) + a2, v1, v1);
}

// Address range: 0x40a2e8 - 0x40a2ee
int64_t function_40a2e8(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x40a2e8
    *(char *)-0x243df00e = (char)(a3 / 256);
    int64_t result; // 0x40a2e8
    return result;
}

// Address range: 0x40a318 - 0x40a32f
int64_t function_40a318(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40a318
    *(int32_t *)0x5a488777 = *(int32_t *)0x5a488777 ^ (int32_t)a2;
    int64_t v1; // 0x40a318
    bool v2; // 0x40a318
    return (int64_t)(*(int32_t *)(a1 + 8 + (v2 ? -8 : 8)) & (int32_t)v1);
}

// Address range: 0x40a336 - 0x40a3a2
int64_t function_40a336(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40a336
    *(char *)a1 = __asm_insb((int16_t)a3);
    int32_t v1 = *(int32_t *)(a4 - 0x5852cbad) | (int32_t)a3; // 0x40a339
    int64_t v2; // 0x40a336
    *(char *)v2 = *(char *)&v2 & (char)v1;
    bool v3; // 0x40a336
    int64_t v4 = __asm_iretd(a1, (v3 ? -4 : 4) + a2, v1); // 0x40a342
    return v4 + 1 & 64 | v4 & -256;
}

// Address range: 0x40a3bd - 0x40a3c0
int64_t function_40a3bd(int64_t a1) {
    // 0x40a3bd
    int64_t result; // 0x40a3bd
    return result;
}

// Address range: 0x40a3d2 - 0x40a564
int64_t function_40a3d2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int32_t * v1 = (int32_t *)(a1 + 94); // 0x40a3d4
    int64_t result; // 0x40a3d2
    *v1 = *v1 + (int32_t)result;
    return result;
}

// Address range: 0x40a665 - 0x40a66c
int64_t function_40a665(int64_t a1, int64_t a2) {
    // 0x40a665
    int64_t result; // 0x40a665
    return result;
}

// Address range: 0x40a67d - 0x40a68b
int64_t function_40a67d(void) {
    // 0x40a67d
    int64_t result; // 0x40a67d
    bool v1; // 0x40a67d
    if (!v1) {
        result = function_40a60c();
    }
    // 0x40a695
    return result;
}

// Address range: 0x40a68f - 0x40a695
int64_t function_40a68f(void) {
    // 0x40a68f
    int64_t v1; // 0x40a68f
    bool v2; // 0x40a68f
    unsigned char v3 = (char)v1 - (v2 ? 121 : 120); // 0x40a68f
    unsigned char v4 = llvm_ctpop_i8(v3); // 0x40a68f
    int64_t v5 = v1 & -256 | (int64_t)v3; // 0x40a691
    if (v4 % 2 != 0) {
        v5 = function_40a63b();
    }
    int64_t v6 = v5;
    return (int64_t)(*(int32_t *)v6 & (int32_t)v6);
}

// Address range: 0x40a6a9 - 0x40a737
int64_t function_40a6a9(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40a6a9
    bool v1; // 0x40a6a9
    if (v1 || v1) {
        // 0x40a719
        int64_t v2; // 0x40a6a9
        int64_t v3 = 256 * (64 * (int64_t)v1 | 128 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1) | v2 & -0xff01; // 0x40a719
        int32_t * v4 = (int32_t *)((int64_t)((int32_t)v3 >> 31) - 0x63de28b1); // 0x40a71d
        *v4 = *v4 | -0x29677ae6;
        return (v2 + 249) % 256 | v3 & -768 | 512;
    }
    int64_t result = a3 & 0xffff00ff | (int64_t)(int32_t)&g8; // 0x40a6ec
    __asm_out_133(-5, (char)result);
    return result;
}

// Address range: 0x40a76c - 0x40a81f
int64_t function_40a76c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    int64_t result; // 0x40a76c
    int32_t * v3 = (int32_t *)(result - 0x58ffd897); // 0x40a76c
    *v3 = *v3 + (int32_t)a4;
    int64_t v4; // 0x40a76c
    int32_t v5 = *(int32_t *)&v4 & (int32_t)a1; // 0x40a772
    unsigned char v6 = llvm_ctpop_i8((char)v5); // 0x40a772
    *(int32_t *)v4 = v5;
    if (v6 % 2 == 0) {
        // 0x40a77a
        return function_ffffffffa9cdffed();
    }
    char v7 = result; // 0x40a7e7
    char v8 = *(char *)(a3 + 87); // 0x40a7e7
    char v9 = v7 - v8; // 0x40a7e7
    if (v9 >= 0) {
        // 0x40a864
        return result;
    }
    int64_t v10 = a4 & -0xff01 | (int64_t)&g2; // 0x40a775
    if (v9 == 0) {
        int32_t * v11 = (int32_t *)(v2 + 46); // 0x40a7aa
        *v11 = *v11 - (int32_t)v10;
        int64_t v12 = (int32_t)result > 0x434b9039 ? 0x5caf665b : 0x5caf665a; // 0x40a7b4
        int64_t v13 = (result + 0xbcb46fc6 & 0xffff00ff | (int64_t)(int32_t)&g1) - v12; // 0x40a7b4
        *(int32_t *)0x7049f121b25bb2cd = (int32_t)v13;
        int32_t * v14 = (int32_t *)(v13 & 0xffffffff); // 0x40a7c5
        *v14 = *v14 | 126;
        __asm_in(-126);
        __asm_outsd((int16_t)a3, *(int32_t *)&v2);
        return v4 & 0xffffffff;
    }
    if (((v9 ^ v7) & (v8 ^ v7)) >= 0) {
        // 0x40a864
        return result;
    }
    unsigned char v15 = (char)result; // 0x40a7f2
    unsigned char v16 = (char)result; // 0x40a7f2
    unsigned char v17 = v15 - v16; // 0x40a7f2
    int64_t v18 = v10 - 1; // 0x40a7f9
    if (v18 != 0 != (v17 == 0)) {
        char * v19 = (char *)((result & -256 | (int64_t)v17) + 89); // 0x40a7fb
        *v19 = (char)(v15 < v16) - (char)v18 + *v19;
        *(char *)v2 = *(char *)&v2 & v17;
    }
    // 0x40a808
    *(char *)v2 = *(char *)&v1;
    return result;
}

// Address range: 0x40a821 - 0x40a858
int64_t function_40a821(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40a821
    __asm_int1();
    int64_t v1 = __asm_sti(a1, a2); // 0x40a822
    bool v2; // 0x40a821
    if (v2) {
        int64_t v3 = v1; // 0x40a825
        // 0x40a827
        return v3 | 53;
    }
    int32_t v4 = (int32_t)v1 ^ 0x10d223ea; // 0x40a83e
    int64_t result = v4; // 0x40a844
    if (v4 >= 0) {
        result = function_40a881();
    }
    uint32_t v5 = (int32_t)a4 % 32; // 0x40a846
    if (v5 != 0) {
        uint32_t v6 = *(int32_t *)0x4b271a69; // 0x40a846
        *(int32_t *)0x4b271a69 = v6 >> v5 | (int32_t)((int64_t)v6 << (int64_t)(33 - v5));
    }
    *(int32_t *)0x265e53c0e1357fa0 = (int32_t)result;
    return result;
}

// Address range: 0x40aa65 - 0x40aa6f
int64_t function_40aa65(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40aa65
    int64_t result; // 0x40aa65
    __asm_out((int16_t)a3, (char)result);
    return result;
}

// Address range: 0x40aabf - 0x40aacd
int64_t function_40aabf(void) {
    // 0x40aabf
    int64_t v1; // 0x40aabf
    int64_t result = __asm_iretd(v1, v1, (int32_t)v1); // 0x40aac2
    __asm_rcl((char)v1);
    return result;
}

// Address range: 0x40ab1c - 0x40ab1d
int64_t function_40ab1c(void) {
    // 0x40ab1c
    int64_t result; // 0x40ab1c
    return result;
}

// Address range: 0x40ab63 - 0x40ab81
int64_t function_40ab63(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40ab63
    int64_t v1; // 0x40ab63
    if (*(int32_t *)(a2 - 0x5cf4d091) <= (int32_t)a3) {
        v1 = function_40ab1c();
    }
    int64_t v2 = v1 ^ 183; // 0x40ab6b
    int64_t * v3 = (int64_t *)v2; // 0x40ab6d
    *v3 = *v3 | a3;
    return v2 + 0x2ae0558d & 0xffffffff;
}

// Address range: 0x40aba6 - 0x40aba8
int64_t function_40aba6(void) {
    // 0x40aba6
    int64_t v1; // 0x40aba6
    return function_40ac02(v1, v1, v1, v1);
}

// Address range: 0x40abd3 - 0x40abdb
int64_t function_40abd3(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40abd3
    int64_t v1; // 0x40abd3
    return __asm_wait(a1, a2, a3, *(int32_t *)(v1 + 2) & (int32_t)a4);
}

// Address range: 0x40ac02 - 0x40ac19
int64_t function_40ac02(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(2 * a1 + a2); // 0x40ac05
    *v1 = 0x200000 * *v1;
    int32_t v2 = *(int32_t *)(a4 & -0xff01 | (int64_t)&g7); // 0x40ac14
    return -109 * v2;
}

// Address range: 0x40ac1a - 0x40ad00
int64_t function_40ac1a(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40ac1a
    int64_t result; // 0x40ac1a
    bool v1; // 0x40ac1a
    if (v1) {
        // 0x40ac1c
        return result;
    }
    int32_t * v2 = (int32_t *)(a2 - 105); // 0x40ac27
    *v2 = (int32_t)result + (int32_t)(a1 % 2 != 0) + *v2;
    return result;
}

// Address range: 0x40ad38 - 0x40ad42
int64_t function_40ad38(int64_t a1) {
    // 0x40ad38
    int64_t v1; // 0x40ad38
    int64_t v2 = v1;
    return (v2 + (uint64_t)v1 / 256) % 256 | v2 & -256;
}

// Address range: 0x40ad60 - 0x40ad63
int64_t function_40ad60(void) {
    // 0x40ad60
    int64_t result; // 0x40ad60
    return result;
}

// Address range: 0x40ada5 - 0x40ada8
int64_t function_40ada5(int64_t a1) {
    // 0x40ada5
    int64_t result; // 0x40ada5
    return result;
}

// Address range: 0x40adbc - 0x40adbd
int64_t function_40adbc(void) {
    // 0x40adbc
    int64_t result; // 0x40adbc
    return result;
}

// Address range: 0x40adc6 - 0x40add1
int64_t function_40adc6(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40adc6
    float80_t v1; // 0x40adc6
    *(int16_t *)a4 = (int16_t)v1;
    int64_t v2; // 0x40adc6
    return 256 * (int64_t)*(char *)(a3 - 65) | v2 & -0xff01;
}

// Address range: 0x40add1 - 0x40adde
int64_t function_40add1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40add1
    __asm_in(-36);
    return function_7359b1f7();
}

// Address range: 0x40ae52 - 0x40ae59
int64_t function_40ae52(void) {
    // 0x40ae52
    int64_t v1; // 0x40ae52
    return function_ffffffffd657014a((int32_t)v1);
}

// Address range: 0x40aec0 - 0x40aec5
int64_t function_40aec0(int64_t a1) {
    // 0x40aec0
    int64_t result; // 0x40aec0
    return result;
}

// Address range: 0x40aec9 - 0x40aeca
int64_t function_40aec9(int64_t a1) {
    // 0x40aec9
    int64_t result; // 0x40aec9
    return result;
}

// Address range: 0x40aef1 - 0x40aef3
int64_t function_40aef1(void) {
    // 0x40aef1
    int64_t v1; // 0x40aef1
    return function_40af4b(v1, v1, v1, v1, (int64_t)&g9);
}

// Address range: 0x40af31 - 0x40af32
int64_t function_40af31(int64_t a1) {
    // 0x40af31
    int64_t result; // 0x40af31
    return result;
}

// Address range: 0x40af4b - 0x40afca
int64_t function_40af4b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint32_t v1 = (int32_t)a4; // 0x40af4e
    int64_t v2; // 0x40af4b
    uint32_t v3 = (int32_t)v2 + v1; // 0x40af4e
    uint32_t v4 = v3 + (int32_t)((char)v2 < (char)v2); // 0x40af4e
    bool v5 = (char)v2 < (char)v2 ? v4 <= v1 : v3 < v1; // 0x40af4e
    char v6 = (char)v4 | (char)&g4; // 0x40af50
    int64_t v7 = v2 - (int64_t)&g3; // 0x40af55
    char v8 = v5; // 0x40af5d
    char v9 = v6 + (char)((int64_t)&g4 >> 8) + v8; // 0x40af5d
    char v10 = v9 + v8; // 0x40af5d
    bool v11; // 0x40af4b
    if (((v10 ^ v6) & (v10 ^ (char)((int64_t)&g4 >> 8))) >= 0) {
        // 0x40afc1
        return __asm_sti((v11 ? -4 : 4) + a1, *(int64_t *)(v7 + 8));
    }
    int64_t v12 = __asm_hlt(); // 0x40af61
    if (v9 <= 0) {
        // 0x40afc1
        return __asm_sti((v11 ? -4 : 4) + a1, *(int64_t *)v7);
    }
    char * v13 = (char *)(v2 - 93); // 0x40af69
    *v13 = *v13 | (char)a3;
    *(int64_t *)(v7 - 8) = a1;
    return (v2 ^ 60 ^ v12) & 0xffffffff;
}

// Address range: 0x41aa40 - 0x41aa43
int64_t function_41aa40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41aa40
    return __asm_int3(a1, a2, a3);
}

// Address range: 0x41aaa7 - 0x41aab6
int64_t function_41aaa7(int64_t a1) {
    // 0x41aaa7
    float80_t v1; // 0x41aaa7
    *(float32_t *)(a1 - 77) = (float32_t)v1;
    return (int64_t)*(int32_t *)0x48490f0a752d7732;
}

// Address range: 0x41ab14 - 0x41ab1a
int64_t function_41ab14(void) {
    // 0x41ab14
    int64_t result; // 0x41ab14
    return result;
}

// Address range: 0x41abd2 - 0x41abda
int64_t function_41abd2(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41abd2
    __asm_in_135((int16_t)a3);
    return function_41ac1f(a1);
}

// Address range: 0x41abee - 0x41abef
int64_t function_41abee(void) {
    // 0x41abee
    int64_t result; // 0x41abee
    return result;
}

// Address range: 0x41ac0f - 0x41ac12
int64_t function_41ac0f(int64_t a1) {
    // 0x41ac0f
    int64_t result; // 0x41ac0f
    bool v1; // 0x41ac0f
    if (v1) {
        result = function_41abee();
    }
    // 0x41ac11
    return result;
}

// Address range: 0x41ac1f - 0x41ac22
int64_t function_41ac1f(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 - 66); // 0x41ac1f
    int64_t v2; // 0x41ac1f
    bool v3; // 0x41ac1f
    return v1 + (int32_t)v2 + (int32_t)v3;
}

// Address range: 0x41ac23 - 0x41ac38
int64_t function_41ac23(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a3 - 84); // 0x41ac26
    *v1 = *v1 + (int32_t)a1;
    char * v2 = (char *)(a3 - 0x5ae76215); // 0x41ac2f
    int64_t v3; // 0x41ac23
    *v2 = *v2 - (char)((v3 | a1) / 256);
    return v3 & -13;
}

// Address range: 0x4e80f9 - 0x4e80fa
int64_t function_4e80f9(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e80f9
    int64_t result; // 0x4e80f9
    __asm_outsd((int16_t)a3, (int32_t)result);
    return result;
}

// Address range: 0x4e8109 - 0x4e810b
int64_t function_4e8109(void) {
    // 0x4e8109
    return function_4e80f3();
}

// Address range: 0x4e8110 - 0x4e8111
int64_t function_4e8110(void) {
    // 0x4e8110
    int64_t result; // 0x4e8110
    return result;
}

// Address range: 0x4e811e - 0x4e8120
int64_t function_4e811e(void) {
    // 0x4e811e
    return function_4e8110();
}

// Address range: 0x4e812d - 0x4e812e
int64_t function_4e812d(void) {
    // 0x4e812d
    int64_t result; // 0x4e812d
    return result;
}

// Address range: 0x4e8133 - 0x4e8135
int64_t function_4e8133(void) {
    // 0x4e8133
    return function_4e812d();
}

// Address range: 0x4e816b - 0x4e8171
int64_t function_4e816b(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e816b
    int64_t v1; // 0x4e816b
    __asm_out_136((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5dc5d7();
}

// Address range: 0x4e81be - 0x4e81c4
int64_t function_4e81be(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4e81be
    int64_t v1; // 0x4e81be
    __asm_out_136((int16_t)a3, (int32_t)v1);
    return function_ffffffffef5dc32a();
}

// Address range: 0x4e81c9 - 0x4e81ca
int64_t function_4e81c9(void) {
    // 0x4e81c9
    int64_t result; // 0x4e81c9
    return result;
}

// Address range: 0x4e81e6 - 0x4e81e7
int64_t function_4e81e6(void) {
    // 0x4e81e6
    int64_t result; // 0x4e81e6
    return result;
}

// Address range: 0x4e81e7 - 0x4e81e9
int64_t function_4e81e7(void) {
    // 0x4e81e7
    return function_4e81c9();
}

// Address range: 0x4e81fc - 0x4e81fe
int64_t function_4e81fc(void) {
    // 0x4e81fc
    return function_4e81e6();
}

// Address range: 0x4e8203 - 0x4e8204
int64_t function_4e8203(void) {
    // 0x4e8203
    int64_t result; // 0x4e8203
    return result;
}

// Address range: 0x4e8211 - 0x4e8213
int64_t function_4e8211(void) {
    // 0x4e8211
    return function_4e8203();
}

// Address range: 0x4e8220 - 0x4e8221
int64_t function_4e8220(void) {
    // 0x4e8220
    int64_t result; // 0x4e8220
    return result;
}

// Address range: 0x4e8226 - 0x4e8228
int64_t function_4e8226(void) {
    // 0x4e8226
    return function_4e8220();
}

// Address range: 0x4e82c1 - 0x4e82c2
int64_t function_4e82c1(void) {
    // 0x4e82c1
    int64_t result; // 0x4e82c1
    return result;
}

// Address range: 0x4e82d7 - 0x4e82d9
int64_t function_4e82d7(void) {
    // 0x4e82d7
    return function_4e82c1();
}

// Address range: 0x4e82de - 0x4e82df
int64_t function_4e82de(void) {
    // 0x4e82de
    int64_t result; // 0x4e82de
    return result;
}

// Address range: 0x4e82ec - 0x4e82ee
int64_t function_4e82ec(void) {
    // 0x4e82ec
    return function_4e82de();
}
