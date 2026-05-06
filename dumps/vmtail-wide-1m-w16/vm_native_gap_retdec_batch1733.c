/*
 * Targeted RetDec C for native executable gap queue batch 1733.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0xdf9c7-0xdfbc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdfbc7-0xdfdc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdfdc7-0xdffc7 rank=- name=- kind=- bytes=- uncovered=-
 *   0xdffc7-0xe0017 rank=- name=- kind=- bytes=- uncovered=-
 *   0x105af8-0x105b78 rank=- name=- kind=- bytes=- uncovered=-
 *   0x105b78-0x105c78 rank=- name=- kind=- bytes=- uncovered=-
 *   0x105c78-0x105e78 rank=- name=- kind=- bytes=- uncovered=-
 *   0x105e78-0x106078 rank=- name=- kind=- bytes=- uncovered=-
 *   0x106078-0x1060ab rank=- name=- kind=- bytes=- uncovered=-
 *   0x33cb79-0x33cd79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33cd79-0x33cf79 rank=- name=- kind=- bytes=- uncovered=-
 *   0x33d179-0x33d1ae rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d0eca-0x4d10ca rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d10ca-0x4d12ca rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d12ca-0x4d14ca rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d14ca-0x4d1510 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g6;
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
int128_t __asm_packsswb(int128_t left, int128_t right);
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

int64_t function_105af8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_105b2a(void);
int64_t function_105b8d(int64_t a1);
int64_t function_105b9d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_105c6c(void);
int64_t function_105c83(int64_t a1, int64_t a2);
int64_t function_105cd6(void);
int64_t function_105d43(int64_t a1, int64_t a2);
int64_t function_105d60(int64_t a1);
int64_t function_105d6c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_105de3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_105df4(void);
int64_t function_105e1e(int64_t a1);
int64_t function_105e27(void);
int64_t function_105e32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_105eba(void);
int64_t function_105ec1(void);
int64_t function_105f0b(void);
int64_t function_105f14(void);
int64_t function_105f34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_105fa5(int64_t a1, int64_t a2, int64_t a3);
int64_t function_105fb9(void);
int64_t function_105fba(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_105fe6(void);
int64_t function_106013(void);
int64_t function_10601b(int64_t a1);
int64_t function_10601d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_21c337c();
int64_t function_33cb6e();
int64_t function_33cb79(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33cb95(int64_t a1);
int64_t function_33cb9c(void);
int64_t function_33cbc6(int64_t a1);
int64_t function_33cbcc(int64_t a1);
int64_t function_33cbd9(int64_t a1);
int64_t function_33cbf9(void);
int64_t function_33cca7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_33cce8(void);
int64_t function_33cd6a(void);
int64_t function_33cd85(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33cda0(void);
int64_t function_33cde5(void);
int64_t function_33ce08(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_33ce62(void);
int64_t function_33ce63(void);
int64_t function_33ce79(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_33cef1(int64_t a1, int64_t a2, int64_t a3);
int64_t function_33cf46(void);
int64_t function_33cfa2();
int64_t function_33d179(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3f00fdc3();
int64_t function_3f12440d();
int64_t function_4d0060();
int64_t function_4d08f0();
int64_t function_4d09e0();
int64_t function_4d0c20();
int64_t function_4d0e20();
int64_t function_4d0eca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4d0ee0(int64_t a1);
int64_t function_cdc60();
int64_t function_df9c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_dfb01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_dfc33(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_dfd88(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_dfebd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_ffffffff88165f79();
int64_t function_ffffffff990a5f32();
int64_t function_ffffffff9a175ec3();
int64_t function_ffffffffe8cc239a();
int64_t unknown_13e9710();
int64_t unknown_340af08b();
int64_t unknown_3935e733();
int64_t unknown_3abe2e28();
int64_t unknown_41fd85d6();
int64_t unknown_438b3a8();
int64_t unknown_4cb6734f();
int64_t unknown_6a81eca1();
int64_t unknown_79c489cd();
int64_t unknown_ffffffff95afa747();
int64_t unknown_ffffffffa7164744();
int64_t unknown_ffffffffad4954c0();
int64_t unknown_ffffffffb42d98c1();
int64_t unknown_ffffffffe833e099();
int64_t unknown_ffffffffe854e923();

// Address range: 0xdf9c7 - 0xdfb01
int64_t function_df9c7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0xdf9c7
    return function_cdc60(a1, a2, a3, a4, a5, a6, 0xde656);
}

// Address range: 0xdfb01 - 0xdfc33
int64_t function_dfb01(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0xdfb01
    int64_t v1; // 0xdfb01
    return function_cdc60(a1, a2, a3, a4, a5, v1, 0x47df016a);
}

// Address range: 0xdfc33 - 0xdfd88
int64_t function_dfc33(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0xdfc33
    int64_t v1; // bp-40, 0xdfc33
    int64_t v2 = (int64_t)&v1; // 0xdfcb4
    int64_t * v3 = (int64_t *)(v2 - 8); // 0xdfd46
    *v3 = a1;
    v1 = 0xdea4e;
    *(int64_t *)(v2 + 32) = 0xdea4e;
    int64_t * v4 = (int64_t *)(v2 + 8); // 0xdfd54
    int64_t v5 = *v4; // 0xdfd54
    v1 = v5;
    *v3 = v5;
    int64_t v6 = *(int64_t *)(v2 + 16); // 0xdfd6a
    *v4 = v6;
    v1 = v6;
    int64_t v7; // 0xdfc33
    return function_cdc60(*v3, a2, a3, v7, v7, v7, a4);
}

// Address range: 0xdfd88 - 0xdfebd
int64_t function_dfd88(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 169; // bp-16, 0xdfda1
    int64_t v2; // 0xdfd88
    return function_cdc60(a1, a2, a3, a4, a5, v2, (int64_t)&v1);
}

// Address range: 0xdfebd - 0xe0017
int64_t function_dfebd(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0xdfebd
    return function_cdc60(a1, a2, a3, a4, a5, a6, 0xdee14);
}

// Address range: 0x105af8 - 0x105b12
int64_t function_105af8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x105af8
    int64_t v1; // 0x105af8
    bool v2; // 0x105af8
    if (!v2 && !v2) {
        // 0x105afb
        int64_t v3; // 0x105af8
        int32_t * v4 = (int32_t *)(v3 - 0x9e9e71a); // 0x105afb
        *v4 = *v4 - 44;
        v1 = (int64_t)*(int32_t *)0x8e3631403fb086;
    }
    uint64_t v5 = v1;
    return v5 % 256 * (a4 / 256 % 256) | v5 & -0x10000;
}

// Address range: 0x105b2a - 0x105b31
int64_t function_105b2a(void) {
    // 0x105b2a
    return function_3f12440d();
}

// Address range: 0x105b8d - 0x105b90
int64_t function_105b8d(int64_t a1) {
    // 0x105b8d
    int64_t result; // 0x105b8d
    return result;
}

// Address range: 0x105b9d - 0x105b9f
int64_t function_105b9d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x105b9d
    int64_t result; // 0x105b9d
    return result;
}

// Address range: 0x105c6c - 0x105c6d
int64_t function_105c6c(void) {
    // 0x105c6c
    int64_t result; // 0x105c6c
    return result;
}

// Address range: 0x105c83 - 0x105cb9
int64_t function_105c83(int64_t a1, int64_t a2) {
    int64_t v1 = a1;
    int32_t * v2 = (int32_t *)(a1 + 0x63010749); // 0x105c8d
    int64_t v3; // 0x105c83
    *v2 = *v2 + (int32_t)v3;
    __asm_int3();
    uint32_t v4 = *(int32_t *)&v1; // 0x105c96
    *(int32_t *)v1 = v4 / 0x2000 | 0x80000 * v4;
    int64_t v5; // 0x105c83
    *(int32_t *)v5 = *(int32_t *)&v5 + (int32_t)v3;
    int64_t v6 = unknown_6a81eca1() & 0xffffffff; // 0x105ca1
    v1 = v6;
    int32_t result = __asm_in(90); // 0x105cac
    int32_t * v7 = (int32_t *)(v6 - 0x630134ae); // 0x105cb0
    *v7 = -*v7;
    return result;
}

// Address range: 0x105cd6 - 0x105cdb
int64_t function_105cd6(void) {
    // 0x105cd6
    return function_ffffffff9a175ec3();
}

// Address range: 0x105d43 - 0x105d4a
int64_t function_105d43(int64_t a1, int64_t a2) {
    // 0x105d43
    return function_ffffffff990a5f32();
}

// Address range: 0x105d60 - 0x105d61
int64_t function_105d60(int64_t a1) {
    // 0x105d60
    int64_t result; // 0x105d60
    return result;
}

// Address range: 0x105d6c - 0x105d88
int64_t function_105d6c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x105d6c
    int64_t result; // 0x105d6c
    int32_t * v1 = (int32_t *)(result + 0x1e89a12); // 0x105d6c
    int32_t v2 = *v1 & -39; // 0x105d6c
    unsigned char v3 = llvm_ctpop_i8((char)v2); // 0x105d6c
    *v1 = v2;
    if (v3 % 2 != 0) {
        // 0x105d75
        *(int32_t *)a3 = (int32_t)a1;
        return result;
    }
    char * v4 = (char *)(a3 + 0x1e8c400); // 0x105d82
    *v4 = *v4 + (char)(a4 / 256);
    return result;
}

// Address range: 0x105de3 - 0x105df4
int64_t function_105de3(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 - 0x319a2f41); // 0x105dea
    int64_t result; // 0x105de3
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x105df4 - 0x105df5
int64_t function_105df4(void) {
    // 0x105df4
    int64_t result; // 0x105df4
    return result;
}

// Address range: 0x105e1e - 0x105e21
int64_t function_105e1e(int64_t a1) {
    // 0x105e1e
    int64_t result; // 0x105e1e
    bool v1; // 0x105e1e
    if (!v1) {
        result = function_105df4();
    }
    // 0x105e20
    return result;
}

// Address range: 0x105e27 - 0x105e2c
int64_t function_105e27(void) {
    // 0x105e27
    return function_ffffffffe8cc239a();
}

// Address range: 0x105e32 - 0x105e3d
int64_t function_105e32(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a4 - 24); // 0x105e32
    int64_t result; // 0x105e32
    *v1 = *v1 ^ (char)result;
    int64_t v2; // 0x105e32
    *(int32_t *)a3 = *(int32_t *)&v2 + (int32_t)a1;
    return result;
}

// Address range: 0x105eba - 0x105ec1
int64_t function_105eba(void) {
    // 0x105eba
    return unknown_ffffffffb42d98c1();
}

// Address range: 0x105ec1 - 0x105ec6
int64_t function_105ec1(void) {
    // 0x105ec1
    return function_ffffffff88165f79();
}

// Address range: 0x105f0b - 0x105f0c
int64_t function_105f0b(void) {
    // 0x105f0b
    int64_t result; // 0x105f0b
    return result;
}

// Address range: 0x105f14 - 0x105f19
int64_t function_105f14(void) {
    // 0x105f14
    return function_3f00fdc3();
}

// Address range: 0x105f34 - 0x105f66
int64_t function_105f34(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5;
    int64_t v2; // 0x105f34
    int32_t * v3 = (int32_t *)(v2 - 0x72d8a0dd); // 0x105f34
    *v3 = *v3 + (int32_t)v2;
    bool v4; // 0x105f34
    int64_t v5 = v4 ? -4 : 4; // 0x105f3a
    int64_t v6 = v5 + a1; // 0x105f3a
    int64_t v7 = v5 + a2; // 0x105f3a
    *(char *)v6 = (char)v2;
    int64_t v8 = (int64_t)&v1; // bp-8, 0x105f3d
    unknown_ffffffffa7164744(v6 + (v4 ? -1 : 1), v7);
    char * v9 = (char *)(v7 + 0x70dee358); // 0x105f43
    *v9 = 2 * *v9;
    int64_t v10 = unknown_4cb6734f(); // 0x105f51
    if (a4 != 1 == (v2 & 20) == 0) {
        v10 = function_105f0b();
    }
    int32_t * v11 = (int32_t *)(a4 + 0x4d2b9aa9); // 0x105f55
    uint32_t v12 = *v11; // 0x105f55
    uint32_t v13 = v12 + (int32_t)(int64_t)&v8; // 0x105f55
    *v11 = v13;
    int64_t result = (v13 < v12 ? 213 : 212) | v10 & -256; // 0x105f5b
    int32_t * v14 = (int32_t *)(result - 58); // 0x105f60
    *v14 = *v14 + (int32_t)v2;
    return result;
}

// Address range: 0x105fa5 - 0x105fb0
int64_t function_105fa5(int64_t a1, int64_t a2, int64_t a3) {
    // 0x105fa5
    int64_t v1; // 0x105fa5
    return v1 & 0xffffffff;
}

// Address range: 0x105fb9 - 0x105fba
int64_t function_105fb9(void) {
    // 0x105fb9
    int64_t result; // 0x105fb9
    return result;
}

// Address range: 0x105fba - 0x105fd9
int64_t function_105fba(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x105fba
    int64_t v1; // 0x105fba
    int64_t v2 = v1;
    unknown_ffffffffad4954c0();
    *(char *)(a2 + 0x7892eb16) = (char)a4;
    unknown_79c489cd();
    char * v3 = (char *)(v2 - 256 * v1 & 0xff00 | v2 & -0xff01); // 0x105fcc
    *v3 = *v3 + (char)v2;
    unknown_41fd85d6();
    return function_105fb9();
}

// Address range: 0x105fe6 - 0x105fe7
int64_t function_105fe6(void) {
    // 0x105fe6
    int64_t result; // 0x105fe6
    return result;
}

// Address range: 0x106013 - 0x106014
int64_t function_106013(void) {
    // 0x106013
    int64_t result; // 0x106013
    return result;
}

// Address range: 0x10601b - 0x10601c
int64_t function_10601b(int64_t a1) {
    // 0x10601b
    int64_t result; // 0x10601b
    return result;
}

// Address range: 0x10601d - 0x106031
int64_t function_10601d(int64_t a1, int64_t a2, int64_t a3) {
    // 0x10601d
    unknown_ffffffffe854e923();
    __asm_in_133(-24);
    int64_t v1; // 0x10601d
    int32_t v2 = (int32_t)v1 + (int32_t)a1; // 0x106029
    *(int32_t *)a2 = v2;
    if (v2 < 1) {
        function_105fe6();
    }
    // 0x10602d
    return function_106013();
}

// Address range: 0x33cb79 - 0x33cb86
int64_t function_33cb79(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33cb79
    int64_t result; // 0x33cb79
    *(int32_t *)a1 = (int32_t)result;
    int64_t v1 = (result + a3) % 256 | a3 & -256; // 0x33cb7a
    float80_t v2; // 0x33cb79
    *(int64_t *)(v1 + 0x1e81646 + 4 * v1) = (int64_t)v2;
    return result;
}

// Address range: 0x33cb95 - 0x33cb96
int64_t function_33cb95(int64_t a1) {
    // 0x33cb95
    int64_t result; // 0x33cb95
    return result;
}

// Address range: 0x33cb9c - 0x33cba8
int64_t function_33cb9c(void) {
    function_33cb6e();
    // 0x33cb9e
    return unknown_438b3a8();
}

// Address range: 0x33cbc6 - 0x33cbc7
int64_t function_33cbc6(int64_t a1) {
    // 0x33cbc6
    int64_t result; // 0x33cbc6
    return result;
}

// Address range: 0x33cbcc - 0x33cbcf
int64_t function_33cbcc(int64_t a1) {
    // 0x33cbcc
    int64_t v1; // 0x33cbcc
    return v1 | 166;
}

// Address range: 0x33cbd9 - 0x33cbdb
int64_t function_33cbd9(int64_t a1) {
    // 0x33cbd9
    int64_t result; // 0x33cbd9
    return result;
}

// Address range: 0x33cbf9 - 0x33cbfe
int64_t function_33cbf9(void) {
    // 0x33cbf9
    return function_21c337c();
}

// Address range: 0x33cca7 - 0x33ccaf
int64_t function_33cca7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x33cca7
    int64_t result; // 0x33cca7
    int32_t * v1 = (int32_t *)(result + 8 * a1); // 0x33cca7
    *v1 = *v1 + (int32_t)a2;
    return result;
}

// Address range: 0x33cce8 - 0x33cceb
int64_t function_33cce8(void) {
    // 0x33cce8
    int64_t result; // 0x33cce8
    return result;
}

// Address range: 0x33cd6a - 0x33cd6b
int64_t function_33cd6a(void) {
    // 0x33cd6a
    int64_t result; // 0x33cd6a
    return result;
}

// Address range: 0x33cd85 - 0x33cd8c
int64_t function_33cd85(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33cd85
    int64_t v1; // 0x33cd85
    return function_33ce08(a1, a2, (uint64_t)v1 % 256 | a3 & -256, v1);
}

// Address range: 0x33cda0 - 0x33cda3
int64_t function_33cda0(void) {
    // 0x33cda0
    return function_33cd6a();
}

// Address range: 0x33cde5 - 0x33cde8
int64_t function_33cde5(void) {
    // 0x33cde5
    int64_t result; // 0x33cde5
    return result;
}

// Address range: 0x33ce08 - 0x33ce50
int64_t function_33ce08(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33ce08
    __asm_in_133(-8);
    int64_t v1 = unknown_13e9710(); // 0x33ce0a
    uint32_t v2 = (int32_t)a4;
    uint32_t v3 = v2 % 32; // 0x33ce11
    if (v3 != 0) {
        *(int32_t *)a4 = v2 >> 32 - v3 | v2 << v3;
    }
    int32_t * v4 = (int32_t *)(a2 - 41); // 0x33ce16
    int64_t v5; // 0x33ce08
    *v4 = *v4 + (int32_t)v5;
    unknown_3abe2e28();
    unknown_3935e733();
    *(int32_t *)(a1 - 32) = ((int32_t)v1 >> 1) + (int32_t)v5;
    return unknown_ffffffff95afa747() & 0x8d2fbda5 | 0x72d0425a;
}

// Address range: 0x33ce62 - 0x33ce63
int64_t function_33ce62(void) {
    // 0x33ce62
    int64_t result; // 0x33ce62
    return result;
}

// Address range: 0x33ce63 - 0x33ce64
int64_t function_33ce63(void) {
    // 0x33ce63
    int64_t result; // 0x33ce63
    return result;
}

// Address range: 0x33ce79 - 0x33cecb
int64_t function_33ce79(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x33ce79
    __asm_in(-24);
    int32_t * v1 = (int32_t *)(a1 + 102); // 0x33ce7b
    uint32_t v2 = *v1; // 0x33ce7b
    int64_t v3; // 0x33ce79
    uint32_t v4 = v2 + (int32_t)v3; // 0x33ce7b
    *v1 = v4;
    int64_t v5 = __asm_int3(); // 0x33ce82
    int64_t v6; // 0x33ce79
    int64_t v7; // 0x33ce79
    int64_t v8; // 0x33ce79
    if (v4 < v2) {
        // 0x33ce79
        v6 = a4 / 256;
        v7 = v5;
    } else {
        uint64_t v9 = unknown_340af08b(); // 0x33ce85
        char * v10 = (char *)(v9 + 0x1fd8000); // 0x33ce8a
        *v10 = *v10 + (char)v9;
        char * v11 = (char *)(a3 + 1); // 0x33ce90
        *v11 = *v11 + (char)(v9 / 256);
        int64_t v12 = unknown_ffffffffe833e099(); // 0x33ce93
        int64_t v13 = (v12 + 58) % 256 | v12 & -256; // 0x33ce98
        *(char *)v8 = *(char *)&v8 + (char)a4;
        *(int32_t *)-0x54553bfe173bc5ec = (int32_t)v13;
        char * v14 = (char *)(v13 + 0x67db0ca2); // 0x33cea9
        unsigned char v15 = *v14; // 0x33cea9
        int64_t v16 = a4 / 256;
        unsigned char v17 = v15 + (char)v16; // 0x33cea9
        *v14 = v17;
        v6 = v16;
        v7 = v13 + 0x7101e83a + (int64_t)(v17 < v15) & 0xffffffff;
    }
    int64_t v18 = v7 ^ v6 % 256; // 0x33cec0
    int32_t * v19 = (int32_t *)(v18 + 1); // 0x33cec3
    int32_t v20 = *v19 + (int32_t)v8; // 0x33cec3
    *v19 = v20;
    int64_t result = v18; // 0x33cec6
    if (v20 < 0) {
        result = function_33ce63();
    }
    // 0x33cec8
    return result;
}

// Address range: 0x33cef1 - 0x33cf0c
int64_t function_33cef1(int64_t a1, int64_t a2, int64_t a3) {
    // 0x33cef1
    int64_t v1; // 0x33cef1
    bool v2; // 0x33cef1
    uint64_t v3 = v1 + 14 + (int64_t)v2; // 0x33cef3
    int64_t v4; // 0x33cef1
    *(char *)a2 = *(char *)&v4 & (char)v3;
    return v3 % 256 | v1 & -256;
}

// Address range: 0x33cf46 - 0x33cf48
int64_t function_33cf46(void) {
    // 0x33cf46
    return function_33cfa2();
}

// Address range: 0x33d179 - 0x33d184
int64_t function_33d179(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x33d179
    int64_t result; // 0x33d179
    char * v1 = (char *)(result - 0x17fc1444); // 0x33d179
    *v1 = *v1 - (char)(result / 256);
    int64_t v2; // 0x33d179
    *(int32_t *)a4 = *(int32_t *)&v2 + (int32_t)a1;
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    return result;
}

// Address range: 0x4d0eca - 0x4d0ed9
int64_t function_4d0eca(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4d0eca
    int64_t result; // 0x4d0eca
    return result;
}

// Address range: 0x4d0ee0 - 0x4d1508
// Used cryptographic patterns:
//  - Lucifer__outerbridge__DFLTKY (8-bit)
int64_t function_4d0ee0(int64_t a1) {
    int64_t v1 = 0; // bp-440, 0x4d0f04
    int32_t v2 = 1; // 0x4d0f34
    int64_t v3; // bp-344, 0x4d0ee0
    int64_t str; // bp-408, 0x4d0ee0
    int64_t str2; // bp-504, 0x4d0ee0
    int64_t v4; // bp-520, 0x4d0ee0
    int64_t v5; // 0x4d0ee0
    while (true) {
        int32_t v6 = v2;
        int32_t v7 = v6 - 1; // 0x4d0f46
        uint32_t v8 = v7 % 2; // 0x4d0f4d
        uint32_t v9 = v7 >> 1; // 0x4d0f51
        int64_t v10 = v9; // 0x4d0f51
        if ((int32_t)a1 != 0) {
            // 0x4d0f5b
            printf("  CAMELLIA-ECB-%3d (%s): ", 64 * v10 + 128 & 0xffffffc0, v8 != 0 ? "enc" : "dec");
        }
        int32_t v11 = v9 + 2;
        int64_t v12 = 0x100000000 * v10;
        int32_t v13 = 8 * v11; // 0x4d0f89
        int64_t v14 = v12 >> 31; // 0x4d0f9e
        int32_t v15 = 64 * v11; // 0x4d0fa5
        int64_t v16 = (v12 >> 27) + (int64_t)&g1;
        int64_t v17 = 0;
        memcpy(&v1, (int64_t *)(32 * ((0x100000000 * v17 >> 32) + v14) + (int64_t)"\x01#Eg\x89\xab\xcd\xef\xfe\xdc\xba\x98vT2\x10"), v13);
        int64_t v18; // 0x4d0ee0
        int64_t v19; // 0x4d109c
        int64_t v20; // 0x4d1017
        if (v8 != 0) {
            // 0x4d1090
            function_4d0060(&v3, &v1, v15);
            v19 = *(int64_t *)(16 * v17 + (int64_t)"\x01#Eg\x89\xab\xcd\xef\xfe\xdc\xba\x98vT2\x10");
            v4 = v19;
            v18 = *(int64_t *)v16;
        } else {
            // 0x4d0ff9
            function_4d08f0(&v3, &v1, v15);
            v4 = *(int64_t *)v16;
            v20 = *(int64_t *)(16 * v17 + (int64_t)"\x01#Eg\x89\xab\xcd\xef\xfe\xdc\xba\x98vT2\x10");
            v18 = v20;
        }
        // 0x4d102a
        str2 = v18;
        function_4d09e0(&v3, (int64_t)v8, &v4, &str);
        if (memcmp(&str, &str2, 16) != 0) {
            // break (via goto) -> 0x4d12d0
            goto lab_0x4d12d0;
        }
        int64_t v21 = v17 + 1; // 0x4d1068
        int64_t v22 = v16 + 16; // 0x4d1068
        while (v17 != 1) {
            // 0x4d0fb6
            v16 = v22;
            v17 = v21;
            memcpy(&v1, (int64_t *)(32 * ((0x100000000 * v17 >> 32) + v14) + (int64_t)"\x01#Eg\x89\xab\xcd\xef\xfe\xdc\xba\x98vT2\x10"), v13);
            if (v8 != 0) {
                // 0x4d1090
                function_4d0060(&v3, &v1, v15);
                v19 = *(int64_t *)(16 * v17 + (int64_t)"\x01#Eg\x89\xab\xcd\xef\xfe\xdc\xba\x98vT2\x10");
                v4 = v19;
                v18 = *(int64_t *)v16;
            } else {
                // 0x4d0ff9
                function_4d08f0(&v3, &v1, v15);
                v4 = *(int64_t *)v16;
                v20 = *(int64_t *)(16 * v17 + (int64_t)"\x01#Eg\x89\xab\xcd\xef\xfe\xdc\xba\x98vT2\x10");
                v18 = v20;
            }
            // 0x4d102a
            str2 = v18;
            function_4d09e0(&v3, (int64_t)v8, &v4, &str);
            if (memcmp(&str, &str2, 16) != 0) {
                // break (via goto) -> 0x4d12d0
                goto lab_0x4d12d0;
            }
            // 0x4d105c
            v21 = v17 + 1;
            v22 = v16 + 16;
        }
        if ((int32_t)a1 != 0) {
            // 0x4d10d0
            puts("passed");
            if (v6 == 6) {
                // 0x4d10e3
                putchar(10);
                // 0x4d10ed
                v5 = 1;
                goto lab_0x4d10fa;
            }
        } else {
            if (v6 == 6) {
                // 0x4d10ed
                v5 = 1;
                goto lab_0x4d10fa;
            }
        }
        // 0x4d1080
        v2 = v6 + 1;
    }
  lab_0x4d12d0:;
    int64_t result = 1; // 0x4d12dd
    if ((int32_t)a1 != 0) {
        // 0x4d14f0
        puts("failed");
        result = 1;
    }
  lab_0x4d12e3:
    // 0x4d12e3
    return result;
  lab_0x4d10fa:;
    int64_t v23 = v5;
    uint64_t v24 = v23 + 0xffffffff; // 0x4d10fa
    uint64_t v25 = v24 % 2; // 0x4d1106
    int32_t v26 = (int32_t)v24 >> 1; // 0x4d1109
    int64_t v27 = v26; // 0x4d1109
    if ((int32_t)a1 == 0) {
        goto lab_0x4d1140;
    } else {
        // 0x4d1114
        printf("  CAMELLIA-CBC-%3d (%s): ", 64 * v27 + 128 & 0xffffffc0, v25 != 0 ? "enc" : "dec");
        goto lab_0x4d1140;
    }
  lab_0x4d1140:;
    int32_t v28 = v26 + 2;
    v4 = 0x706050403020100;
    str2 = 0x706050403020100;
    memcpy(&v1, (int64_t *)((0x100000000 * v27 >> 27) + (int64_t)&g2), 8 * v28);
    int32_t v29 = 64 * v28; // 0x4d11a1
    if (v25 != 0) {
        // 0x4d12c0
        function_4d0060(&v3, &v1, v29);
        goto lab_0x4d11b1;
    } else {
        // 0x4d11ac
        function_4d08f0(&v3, &v1, v29);
        goto lab_0x4d11b1;
    }
  lab_0x4d11b1:;
    int64_t v30 = 0xf0e0d0c0b0a0908; // 0x4d11c7
    int64_t v31 = 0xf0e0d0c0b0a0908; // 0x4d11c7
    int64_t v32 = (int64_t)&g4; // 0x4d11c7
    int64_t v33 = 48 * (int64_t)v26 + (int64_t)&g3; // 0x4d11c7
    goto lab_0x4d11ca;
  lab_0x4d11ca:;
    int64_t v34 = v25 != 0 ? v32 : v33;
    int64_t v35 = v25 != 0 ? v31 : v30;
    int64_t v36 = v25 != 0 ? v33 : v32;
    int64_t v37 = v25 != 0 ? str2 : v4;
    int64_t v38 = v37;
    int64_t v39 = *(int64_t *)v34;
    v4 = v39;
    int64_t v40 = *(int64_t *)(v34 + 8);
    int64_t v41 = *(int64_t *)v36;
    str2 = v41;
    int64_t v42 = *(int64_t *)(v36 + 8);
    function_4d0c20(&v3, v25, 16, &v38, &v4, &str, v39, v40, v41, v42, v37, v35);
    int64_t v43; // 0x4d0ee0
    if (memcmp(&str, &str2, 16) != 0) {
        goto lab_0x4d12d0;
    } else {
        int64_t v44 = v32 + 16; // 0x4d1243
        v30 = v40;
        v31 = v42;
        v32 = v44;
        v33 += 16;
        if (v44 != (int64_t)&g5) {
            goto lab_0x4d11ca;
        } else {
            if ((int32_t)a1 != 0) {
                // 0x4d1300
                puts("passed");
                if (v23 != 6) {
                    // 0x4d1270
                    v5 = v23 + 1 & 0xffffffff;
                    goto lab_0x4d10fa;
                } else {
                    // 0x4d1316
                    putchar(10);
                    // 0x4d1320
                    v43 = 1;
                    goto lab_0x4d1338;
                }
            } else {
                if (v23 == 6) {
                    // 0x4d1320
                    v43 = 1;
                    goto lab_0x4d1338;
                } else {
                    // 0x4d1270
                    v5 = v23 + 1 & 0xffffffff;
                    goto lab_0x4d10fa;
                }
            }
        }
    }
  lab_0x4d1338:;
    int64_t v45 = v43;
    uint64_t v46 = v45 + 0xffffffff; // 0x4d1338
    uint64_t v47 = v46 % 2; // 0x4d1342
    if ((int32_t)a1 == 0) {
        goto lab_0x4d136e;
    } else {
        // 0x4d134c
        printf("  CAMELLIA-CTR-128 (%s): ", v47 != 0 ? "enc" : "dec");
        goto lab_0x4d136e;
    }
  lab_0x4d136e:;
    int32_t v48 = (int32_t)v46 >> 1; // 0x4d1345
    int64_t v49 = 0x100000000 * (int64_t)v48;
    int64_t v50 = 0; // bp-528, 0x4d1379
    int64_t v51 = v49 >> 28; // 0x4d1385
    int64_t v52 = *(int64_t *)(v51 + (int64_t)&g6); // bp-472, 0x4d13a0
    v1 = *(int64_t *)(v51 + (int64_t)&g7);
    function_4d0060(&v3, &v1, 128);
    int32_t n = *(int32_t *)((v49 >> 30) + (int64_t)&g8); // 0x4d13d3
    int64_t v53 = n; // 0x4d13d3
    int64_t v54 = 48 * (int64_t)v48;
    int64_t v55; // bp-456, 0x4d0ee0
    int64_t str3; // 0x4d0ee0
    if (v47 != 0) {
        // 0x4d1460
        memcpy(&str, (int64_t *)(v54 + (int64_t)"Single block msg"), n);
        function_4d0e20(&v3, v53, &v50, &v52, &v55, &str, &str);
        str3 = v54 + (int64_t)&g9;
        goto lab_0x4d142e;
    } else {
        // 0x4d13de
        memcpy(&str, (int64_t *)(v54 + (int64_t)&g9), n);
        function_4d0e20(&v3, v53, &v50, &v52, &v55, &str, &str);
        str3 = v54 + (int64_t)"Single block msg";
        goto lab_0x4d142e;
    }
  lab_0x4d142e:
    // 0x4d142e
    if (memcmp(&str, (int64_t *)str3, n) != 0) {
        goto lab_0x4d12d0;
    } else {
        if ((int32_t)a1 != 0) {
            // 0x4d14c0
            puts("passed");
            if (v45 != 6) {
                // 0x4d1458
                v43 = v45 + 1 & 0xffffffff;
                goto lab_0x4d1338;
            } else {
                // 0x4d14d5
                putchar(10);
                result = v45 & 0xffffff00;
                goto lab_0x4d12e3;
            }
        } else {
            // 0x4d1449
            result = 0;
            if (v45 == 6) {
                goto lab_0x4d12e3;
            } else {
                // 0x4d1458
                v43 = v45 + 1 & 0xffffffff;
                goto lab_0x4d1338;
            }
        }
    }
}
