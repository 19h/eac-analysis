/*
 * Targeted RetDec C for native executable gap queue batch 1098.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x3902a0-0x3904a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3904a0-0x3906a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3906a0-0x3908a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3908a0-0x390aa0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x390aa0-0x390ca0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x390ca0-0x390ea0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x390ea0-0x3910a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3910a0-0x3912a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x392bcb-0x392dcb rank=- name=- kind=- bytes=- uncovered=-
 *   0x392dcb-0x392fcb rank=- name=- kind=- bytes=- uncovered=-
 *   0x392fcb-0x3931cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3931cb-0x3933cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3933cb-0x3935cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3935cb-0x3937cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3937cb-0x3939cb rank=- name=- kind=- bytes=- uncovered=-
 *   0x3939cb-0x393bcb rank=- name=- kind=- bytes=- uncovered=-
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
extern int g5;
extern int g10;
extern int g11;
extern int g12;
extern int g13;
extern int g14;
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

int64_t function_1170057b();
int64_t function_2c1702f();
int64_t function_390273();
int64_t function_3902a0(void);
int64_t function_3902c3(int64_t a1, int64_t a2, int64_t a3);
int64_t function_390301(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_39033f(void);
int64_t function_390341(void);
int64_t function_390396(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_390439(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39045a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3904b9(void);
int64_t function_3904d9(int64_t a1);
int64_t function_3904e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3904fb(void);
int64_t function_390530(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39053a(void);
int64_t function_3905a0(void);
int64_t function_3905a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_39071c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_390832(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_390952(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_390b17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_390c52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_390d9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_390f2d(int64_t a1, int64_t a2, int64_t a3);
int64_t function_39108b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_391267(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_39126f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_391277(int64_t a1, int64_t a2);
int64_t function_392bcb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_392c6c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_392d3f(void);
int64_t function_392d58(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_392eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_392f97(int64_t a1, int64_t a2, int64_t a3);
int64_t function_393005(void);
int64_t function_39300b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393022(void);
int64_t function_393068(int64_t a1);
int64_t function_393070(int64_t a1);
int64_t function_39309b(void);
int64_t function_3930d8(void);
int64_t function_393116(void);
int64_t function_393131(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393169(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_39318f(void);
int64_t function_393198(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3931cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393225(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393399(void);
int64_t function_3933a3(void);
int64_t function_3933ad(int64_t a1);
int64_t function_3933e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393411(int64_t a1, int64_t a2, int64_t a3);
int64_t function_393465(void);
int64_t function_393483(int64_t a1);
int64_t function_3934a0(void);
int64_t function_3934ab(void);
int64_t function_3934be(void);
int64_t function_3934d8(int64_t a1, int64_t a2);
int64_t function_393532(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393571(int64_t a1);
int64_t function_39357a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_3935a9(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3935e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_393634(void);
int64_t function_393654(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_3936da(void);
int64_t function_393705(int64_t a1);
int64_t function_39370f(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393736(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393783(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3937bd(int64_t a1, int64_t a2, int64_t a3);
int64_t function_3937d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_3937f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_3938b8(int64_t a1, int64_t a2);
int64_t function_3938bf(int64_t a1);
int64_t function_3938ea(int64_t a1);
int64_t function_3938f1(void);
int64_t function_3938ff(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4);
int64_t function_393988(int64_t a1, uint64_t a2, int64_t a3, int64_t a4);
int64_t function_393a4b(void);
int64_t function_393a4d(void);
int64_t function_393a4e(void);
int64_t function_393a66(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393aa8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4);
int64_t function_393acd(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393acf(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393af9(void);
int64_t function_393afb(void);
int64_t function_393b05(void);
int64_t function_393b12(int64_t a1);
int64_t function_393b36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_393b48(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_393bba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_4065ad();
int64_t function_64a09819();
int64_t function_77e33698();
int64_t function_8348e40();
int64_t function_b94d8c1();
int64_t function_c4258();
int64_t function_ffffffffaa999edc();
int64_t function_ffffffffadc65465();
int64_t function_ffffffffc35ec826();
int64_t function_fffffffff89649bb();
int64_t unknown_124657af();
int64_t unknown_1e6816a7();
int64_t unknown_2c399e2d();
int64_t unknown_323c7322();
int64_t unknown_34b0fb6f();
int64_t unknown_399b1938();
int64_t unknown_3a0c2b14();
int64_t unknown_3a401aa3();
int64_t unknown_3acd43e0();
int64_t unknown_3adf4aa0();
int64_t unknown_3da69a3c();
int64_t unknown_3e0cd1d0();
int64_t unknown_4129e3a9();
int64_t unknown_533a6927();
int64_t unknown_5506b983();
int64_t unknown_7d3cbc36();
int64_t unknown_f380f5e();
int64_t unknown_ffffffff824251e9();
int64_t unknown_ffffffff883a1d11();
int64_t unknown_ffffffff8bc6e61a();
int64_t unknown_ffffffff8bd3a406();
int64_t unknown_ffffffff913b37f0();
int64_t unknown_ffffffff91be19e1();
int64_t unknown_ffffffffa94dfeba();
int64_t unknown_ffffffffc29f5b3d();
int64_t unknown_ffffffffd0c51a8d();
int64_t unknown_ffffffffd69090ba();
int64_t unknown_ffffffffe0b5e67f();
int64_t unknown_fffffffff43ec660();
int64_t unknown_fffffffffa6caa94();

// Address range: 0x3902a0 - 0x3902a8
int64_t function_3902a0(void) {
    // 0x3902a0
    return unknown_4129e3a9();
}

// Address range: 0x3902c3 - 0x3902d8
int64_t function_3902c3(int64_t a1, int64_t a2, int64_t a3) {
    // 0x3902c3
    int64_t v1; // 0x3902c3
    uint64_t v2 = v1;
    char v3 = v2;
    *(char *)v2 = 2 * v3;
    int64_t v4; // 0x3902c3
    char v5 = *(char *)&v4; // 0x3902c5
    char * v6 = (char *)(v2 - 0x193afeef); // 0x3902c7
    *v6 = *v6 + v3;
    char * v7 = (char *)(2 * a1 + 0x36650148 + (a3 & -256 | (int64_t)(v5 ^ (char)a3))); // 0x3902cd
    *v7 = *v7 + (char)(v2 / 256);
    return function_390273();
}

// Address range: 0x390301 - 0x39030c
int64_t function_390301(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x390301
    int64_t result; // 0x390301
    char * v1 = (char *)(result + 47); // 0x390306
    *v1 = *v1 + (char)(a3 / 256);
    return result;
}

// Address range: 0x39033f - 0x390340
int64_t function_39033f(void) {
    // 0x39033f
    int64_t result; // 0x39033f
    return result;
}

// Address range: 0x390341 - 0x390342
int64_t function_390341(void) {
    // 0x390341
    int64_t result; // 0x390341
    return result;
}

// Address range: 0x390396 - 0x390438
int64_t function_390396(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x390396
    int64_t v1; // 0x390396
    int64_t v2 = v1;
    int64_t v3 = a2;
    int32_t * v4 = (int32_t *)(v2 + 2); // 0x39039f
    *v4 = *v4 + (int32_t)a2;
    int64_t v5 = a4 & -0xff01 | (int64_t)&g2; // 0x3903a2
    int32_t v6 = *(int32_t *)&v3; // 0x3903a5
    __asm_outsd((int16_t)a3, v6);
    int32_t v7 = (int32_t)v1 + 0x5fdc0fe ^ -0x5dfe1751; // 0x3903b0
    bool v8; // 0x390396
    if (v7 >= 0) {
        char * v9 = (char *)v5; // 0x390411
        *v9 = *v9 + (char)v1;
        int64_t result = 0x10000 * v7 >> 16; // 0x390414
        *(int32_t *)a1 = *(int32_t *)&v3;
        int64_t v10 = v8 ? -4 : 4; // 0x39041d
        int64_t v11 = 8 * v2 + 0xabddff01 + result; // 0x39041e
        char * v12 = (char *)(v10 + 0x3a8c87be + v3); // 0x390427
        *v12 = *v12 | (char)v11;
        *(int32_t *)((v2 + a1 + v10 & 0xffffffff) + 0x47062047) = (int32_t)v11;
        return result;
    }
    unsigned char v13 = llvm_ctpop_i8((char)v7); // 0x3903b0
    int64_t v14 = v7; // 0x3903b8
    if (v13 % 2 == 0) {
        v14 = function_390341();
    }
    // 0x3903ba
    if (v7 == 0) {
        // 0x3903ec
        __asm_int(43);
        int32_t v15 = *(int32_t *)(v2 - 0x7efe17c6 + 8 * v2); // 0x3903f0
        return v15 * (int32_t)v14;
    }
    // 0x3903bc
    *(int32_t *)a1 = v6;
    int64_t v16 = (v8 ? -4 : 4) + a1; // 0x3903bc
    int32_t * v17 = (int32_t *)(v16 + 0x8f9470c); // 0x3903c0
    int32_t v18 = v16; // 0x3903c0
    *v17 = *v17 + v18;
    int64_t v19 = v14 + 0xe8d31670; // 0x3903c6
    int32_t * v20 = (int32_t *)v16; // 0x3903cb
    *v20 = *v20 + v18;
    __readfsbyte((8 * v19 & 0x7fffffff8) + a3);
    return (int64_t)(*(int32_t *)v5 & (int32_t)v19);
}

// Address range: 0x390439 - 0x390458
int64_t function_390439(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x390439
    int64_t v1; // 0x390439
    int32_t * v2 = (int32_t *)(v1 - 0x17e03a23); // 0x390439
    *v2 = *v2 >> 1;
    __asm_pcmpgtb(v1, a3);
    return function_1170057b();
}

// Address range: 0x39045a - 0x390475
int64_t function_39045a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39045a
    *(int64_t *)((unknown_fffffffff43ec660() & 0xffffffff) - 8) = 58;
    unsigned char v1 = *(char *)0x1e8aabd; // 0x390474
    return (int64_t)v1 | (int64_t)(0x1000000 * (int32_t)a4 >> 16);
}

// Address range: 0x3904b9 - 0x3904bc
int64_t function_3904b9(void) {
    // 0x3904b9
    int64_t result; // 0x3904b9
    return result;
}

// Address range: 0x3904d9 - 0x3904dc
int64_t function_3904d9(int64_t a1) {
    // 0x3904d9
    int64_t result; // 0x3904d9
    return result;
}

// Address range: 0x3904e1 - 0x3904eb
int64_t function_3904e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3904e1
    *(char *)a1 = __asm_insb((int16_t)a3);
    return 0x118c01e8;
}

// Address range: 0x3904fb - 0x3904fc
int64_t function_3904fb(void) {
    // 0x3904fb
    int64_t result; // 0x3904fb
    return result;
}

// Address range: 0x390530 - 0x390534
int64_t function_390530(int64_t a1, int64_t a2, int64_t a3) {
    // 0x390530
    *(char *)a1 = __asm_insb((int16_t)a3);
    int64_t result; // 0x390530
    return result;
}

// Address range: 0x39053a - 0x39053c
int64_t function_39053a(void) {
    // 0x39053a
    return function_3904fb();
}

// Address range: 0x3905a0 - 0x3905a7
int64_t function_3905a0(void) {
    // 0x3905a0
    return unknown_1e6816a7();
}

// Address range: 0x3905a8 - 0x39071c
int64_t function_3905a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x3905a8
    bool v1; // 0x3905a8
    int64_t v2 = (v1 ? -4 : 4) + a1; // 0x3905a8
    int64_t v3; // 0x3905a8
    *(char *)a5 = (char)v3;
    int32_t * v4 = (int32_t *)(v3 + 0x3ae88a18); // 0x3905b6
    *v4 = *v4 + (int32_t)v3;
    int32_t * v5 = (int32_t *)(v2 + 0x489a74f8); // 0x3905c1
    *v5 = *v5 + (int32_t)a2;
    char * v6 = (char *)(v3 + 0x51529c00); // 0x3905c7
    *v6 = *v6 + (char)v3;
    int64_t v7 = 0x490bf350; // bp-8, 0x390626
    int64_t v8 = (int64_t)&v7; // 0x390692
    int64_t * v9 = (int64_t *)(v8 - 8); // 0x39069a
    *v9 = a5;
    *v9 = 0x5073473d;
    *(int64_t *)(v8 - 16) = 310;
    *(int64_t *)(v8 + 24) = *v9;
    int64_t v10 = v8 + 16; // 0x390708
    v7 = v10;
    return function_c4258(v2, a2, a3, a6, *v9, v3, v10, 0x38e5a1);
}

// Address range: 0x39071c - 0x390832
int64_t function_39071c(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39071c
    int64_t v1; // 0x39071c
    return function_c4258(a1, a2, a3, a4, 0x38e822, v1, a2, (int64_t)&g14);
}

// Address range: 0x390832 - 0x390952
int64_t function_390832(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 0x5d61e307; // bp-40, 0x390897
    int64_t v2 = (int64_t)&v1; // 0x3908da
    int64_t * v3 = (int64_t *)(v2 - 8); // 0x3908e2
    *v3 = 0x33f78fc0;
    int64_t * v4 = (int64_t *)(v2 - 16); // 0x3908e7
    int64_t * v5 = (int64_t *)(v2 - 24); // 0x3908ec
    *v5 = a4;
    bool v6; // 0x390832
    *v4 = 0x4000 * (int64_t)v6 | 2048 * (int64_t)v6 | 1024 * (int64_t)v6 | 512 * (int64_t)v6 | 256 * (int64_t)v6 | 128 * (int64_t)v6 | 64 * (int64_t)v6 | 16 * (int64_t)v6 | (int64_t)v6 | 4 * (int64_t)v6 | 2;
    *(int64_t *)(v2 + 8) = *v3;
    *v3 = 0x14b0f8c9;
    *v4 = 0x38eb8c;
    *(int64_t *)(v2 + 24) = *v3;
    *v4 = v1;
    v1 = *v5;
    *v3 = v2;
    int64_t v7 = v2 + 16; // 0x390939
    int64_t v8 = v1;
    v1 = v7;
    int64_t v9; // 0x390832
    return function_c4258(a1, a2, a3, v8, a5, v9, v7, 0x9a65df8);
}

// Address range: 0x390952 - 0x390b17
int64_t function_390952(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x390952
    int64_t v1; // 0x390952
    int64_t v2 = v1 - 8; // 0x3909c2
    int64_t v3 = v1 - 16; // 0x3909ca
    int64_t * v4 = (int64_t *)v3; // 0x3909ce
    *v4 = a4;
    int64_t * v5 = (int64_t *)(v1 - 24); // 0x3909d2
    *v5 = a2;
    int64_t v6 = *v4; // 0x3909df
    int64_t v7 = *(int64_t *)(v1 + 24); // 0x3909e7
    *v4 = v7;
    int64_t * v8 = (int64_t *)(v1 - 32); // 0x390a01
    int64_t * v9 = (int64_t *)(v1 - 40); // 0x390a25
    *v9 = a3;
    *v5 = v2;
    int64_t * v10 = (int64_t *)v1; // 0x390a3d
    *v5 = a2;
    *v9 = a1;
    *v10 = v7;
    int64_t v11 = *v5; // 0x390a9e
    *v5 = 0x51168992;
    *v8 = *v10;
    *(int64_t *)(v1 + 8) = *v5;
    *v5 = v2;
    *v5 = *v4;
    *v8 = v3;
    int64_t v12; // bp-32, 0x390952
    int64_t result = function_c4258(a1, v11, a3, v6, a5, v1, (int64_t)&v12, (int64_t)&g14); // 0x390b12
    return result;
}

// Address range: 0x390b17 - 0x390c52
int64_t function_390b17(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x390b17
    int64_t v1; // 0x390b17
    return function_c4258(a1, a2, a3, v1, a5, v1, 0x67ee0016, (int64_t)&g14);
}

// Address range: 0x390c52 - 0x390d9d
int64_t function_390c52(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0x38f363; // bp-24, 0x390c9e
    int64_t v2 = (int64_t)&v1; // 0x390d72
    *(int64_t *)(v2 - 8) = 0x38f363;
    *(int64_t *)(v2 - 16) = v2;
    int64_t v3; // 0x390c52
    return function_c4258(a1, a2, a3, a4, a5, v3, 0x38f363, (int64_t)&g14);
}

// Address range: 0x390d9d - 0x390f2d
int64_t function_390d9d(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x390d9d
    bool v1; // 0x390d9d
    int64_t result = function_c4258(a1, a2, a3, a4, a5, a6, 0x4000 * (int64_t)(bool)v1 | 2048 * (int64_t)v1 | 1024 * (int64_t)v1 | 512 * (int64_t)v1 | 256 * (int64_t)v1 | 128 * (int64_t)v1 | 64 * (int64_t)v1 | 16 * (int64_t)v1 | (int64_t)v1 | 4 * (int64_t)v1 | 2, (int64_t)&g14); // 0x390f28
    return result;
}

// Address range: 0x390f2d - 0x39108b
int64_t function_390f2d(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x38fbb3; // bp-24, 0x390f86
    int64_t v2 = (int64_t)&v1; // 0x390f90
    int64_t v3 = v2 - 8; // 0x390fb2
    int64_t * v4 = (int64_t *)v3; // 0x390fbf
    int64_t * v5 = (int64_t *)(v2 - 16); // 0x390fd3
    *v5 = 0x693a3f46;
    int64_t v6 = v2 - 24; // 0x390fdd
    int64_t * v7 = (int64_t *)v6; // 0x390fde
    int64_t v8 = *(int64_t *)(v2 + 24); // 0x390fe4
    *v5 = v8;
    *v7 = v8;
    *v7 = v6;
    v1 = v8;
    *v5 = 0x79512319;
    *(int64_t *)(v2 - 32) = *(int64_t *)(v2 + 8);
    *(int64_t *)(v2 + 16) = *v5;
    *v5 = *v4;
    *v7 = v3;
    int64_t v9 = *v4; // 0x391077
    *v5 = v9;
    *v7 = v9;
    int64_t v10; // 0x390f2d
    return function_c4258(a1, a2, a3, v10, v10, v10, v1, 310);
}

// Address range: 0x39108b - 0x3911f6
int64_t function_39108b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39108b
    int64_t v1; // bp-40, 0x39108b
    v1 = (int64_t)&v1 + 8;
    int64_t v2; // 0x39108b
    bool v3; // 0x39108b
    return function_c4258(a1, 169, a3, a4, v2, v2, 0x4000 * (int64_t)v3 | 2048 * (int64_t)v3 | 1024 * (int64_t)v3 | 512 * (int64_t)v3 | 256 * (int64_t)v3 | 128 * (int64_t)v3 | 64 * (int64_t)v3 | 16 * (int64_t)v3 | (int64_t)v3 | 4 * (int64_t)v3 | 2, v2);
}

// Address range: 0x391267 - 0x39126f
int64_t function_391267(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x391267
    int64_t v1; // 0x391267
    char * v2 = (char *)(v1 - 127); // 0x391267
    *v2 = *v2 | (char)a4;
    return function_391277(a1, (int64_t)&g14);
}

// Address range: 0x39126f - 0x391277
int64_t function_39126f(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x39126f
    int64_t result; // 0x39126f
    return result;
}

// Address range: 0x391277 - 0x3912a0
int64_t function_391277(int64_t a1, int64_t a2) {
    // 0x391277
    int64_t result; // 0x391277
    return result;
}

// Address range: 0x392bcb - 0x392c37
int64_t function_392bcb(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x392bcb
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t v1; // 0x392bcb
    int64_t v2 = (v1 / 256 + a3) % 256 | a3 & -256; // 0x392bce
    int32_t * v3 = (int32_t *)(v2 + 0x822c0b); // 0x392bd0
    *v3 = -1 - *v3;
    int32_t * v4 = (int32_t *)(v1 + 0x1669d39c + 4 * v1); // 0x392bde
    *v4 = *v4 + (int32_t)a2;
    int32_t * v5 = (int32_t *)((__asm_int3() & 0xffffffff) + 0x59d05ae9); // 0x392be9
    *v5 = *v5 + (int32_t)v1;
    int16_t v6 = v2; // 0x392bef
    int32_t v7 = v1; // 0x392bef
    __asm_out(v6, v7);
    char v8 = v1 / 256; // 0x392bf0
    *(char *)-0x5bbbb509 = *(char *)-0x5bbbb509 + v8;
    __asm_out(v6, v7);
    *(char *)-0x254733f3 = *(char *)-0x254733f3 + v8;
    char v9 = *(char *)(a1 + 0x3af2500 + (4 * v1 & 0x3fffffffc)); // 0x392c0c
    __asm_out_133(14, (char)unknown_ffffffff8bc6e61a());
    unknown_533a6927();
    unknown_7d3cbc36();
    return 256 * (int64_t)(v9 | (char)(a3 / 256)) | v2 & 0xffff00ff;
}

// Address range: 0x392c6c - 0x392d2a
int64_t function_392c6c(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    int16_t v1 = a3; // 0x392c72
    __asm_outsd(v1, *(int32_t *)(int32_t *)&g13);
    bool v2; // 0x392c6c
    if (!v2) {
        // 0x392c76
        return function_ffffffffadc65465();
    }
    // 0x392ca1
    *(char *)a3 = (char)(a4 / 256 | a3);
    uint64_t v3 = function_4065ad(); // 0x392ca7
    unknown_3a0c2b14();
    int64_t result = unknown_ffffffffa94dfeba(); // 0x392cb4
    if (*(char *)(4 * a2 + a4) > -1 - (char)(v3 / 256)) {
        // 0x392cf1
        *(int32_t *)a1 = (int32_t)result;
        int64_t v4; // 0x392c6c
        char * v5 = (char *)(v4 + 55); // 0x392cf2
        *v5 = *v5 + (char)result;
        return result;
    }
    // 0x392cbb
    *(int32_t *)a1 = __asm_insd(v1);
    int32_t * v6 = (int32_t *)(a1 + 82); // 0x392cbc
    uint32_t v7 = *v6; // 0x392cbc
    *v6 = v7 / 0x2000000 | 256 * v7;
    char * v8 = (char *)result; // 0x392cc4
    char v9 = (*v8 | 5) - 80; // 0x392cd0
    *v8 = v9;
    return result & -256 | (int64_t)(v9 + (char)result);
}

// Address range: 0x392d3f - 0x392d40
int64_t function_392d3f(void) {
    // 0x392d3f
    int64_t result; // 0x392d3f
    return result;
}

// Address range: 0x392d58 - 0x392e96
int64_t function_392d58(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x392d58
    int64_t v1; // 0x392d58
    int64_t v2 = v1;
    int64_t v3 = a3;
    int64_t v4 = a2;
    int64_t v5; // 0x392d58
    bool v6; // 0x392d58
    int64_t v7; // 0x392d58
    int64_t v8; // 0x392d58
    int64_t v9; // 0x392d58
    int64_t v10; // bp-8, 0x392d58
    bool v11; // 0x392d58
    if (true == !v11) {
        int64_t v12 = (int64_t)&v10;
        int64_t v13 = unknown_3e0cd1d0() + 2 * v12; // 0x392dd1
        int32_t * v14 = (int32_t *)((v13 & 0xffffffff) + 0x19c71033); // 0x392dd3
        *v14 = *v14 + (int32_t)v12;
        int64_t v15 = v4; // 0x392ddb
        v4 = v13 & 0xffff00ff;
        unsigned char v16 = *(char *)-0x66d2bef673fe17cc; // 0x392ddd
        v3 = v3 & -256 | 169;
        char * v17 = (char *)(v15 & 0xffffff00 | (int64_t)v16); // 0x392de9
        *v17 = *v17 - v16;
        int64_t v18 = a4 - 1; // 0x392df1
        if (v18 != 0 != (v15 & 0x4000) != 0) {
            int64_t v19 = (int64_t)*(int32_t *)v3; // 0x392df3
            int64_t v20 = -0x43c5f5f1 * v19; // 0x392df3
            char * v21 = (char *)(v20 & 0xffffffff); // 0x392df9
            char v22 = *v21; // 0x392df9
            *v21 = v22 - (char)(v3 / 256) + (char)(v20 != -0x43c5f5f100000000 * v19 >> 32);
            int32_t * v23 = (int32_t *)(a1 - 59); // 0x392dfb
            *v23 = *v23 - 1;
            __asm_wait();
            __asm_int(104);
            char * v24 = (char *)(v3 + 0x13d00fd); // 0x392e01
            *v24 = *v24 + (char)(v1 / 256);
            int32_t v25 = *(int32_t *)-0x23f33b3f04f97b88; // 0x392e07
            v3 = v25 & -0xff01 | (int32_t)&g12;
            int64_t v26 = unknown_f380f5e(); // 0x392e58
            int32_t * v27 = (int32_t *)(v4 - 34); // 0x392e64
            int32_t v28 = v26; // 0x392e64
            *v27 = *v27 + v28;
            int32_t v29 = v28 - *(int32_t *)((v1 & -256) + 0x4e01e8df + 8 * v26); // 0x392e6a
            __asm_out((int16_t)v3, (v29 + 42) % 256 | v29 & -256);
            char * v30 = (char *)v4; // 0x392e75
            unsigned char v31 = *v30; // 0x392e75
            unsigned char v32 = (char)(v3 / 256); // 0x392e75
            char v33 = v31 + v32; // 0x392e75
            unsigned char v34 = llvm_ctpop_i8(v33); // 0x392e75
            *v30 = v33;
            *(int32_t *)a1 = __asm_insd((int16_t)v3);
            int64_t v35 = unknown_ffffffffe0b5e67f(); // 0x392e79
            *(char *)-0x7bc4e8fe = *(char *)-0x7bc4e8fe - 107;
            int32_t * v36 = (int32_t *)(v3 + (v1 & -0x10000 | (int64_t)&g11)); // 0x392e88
            *v36 = *v36 + 1;
            int64_t v37 = ((v35 & 0xffff00ff | 256 * (64 * (int64_t)(v33 == 0) | (int64_t)(v33 < v31) | 128 * (int64_t)(v33 < 0) | 16 * (int64_t)(v31 % 16 + v32 % 16 > 15) | 4 * (int64_t)(v34 % 2 == 0)) | 512) ^ 128) + 0x2601e875; // 0x392e8d
            char * v38 = (char *)(int64_t)((int32_t)v37 >> 31); // 0x392e93
            *v38 = *v38 + (char)v37;
            return v37 & 0xffffffff;
        }
        // 0x392dbd
        v5 = v12;
        v8 = v18;
        int64_t v39; // bp+6517, 0x392d58
        v9 = (int64_t)&v39;
        v6 = (v15 & 256) != 0;
    } else {
        // 0x392d5a
        *(int64_t *)(a3 + 1) = a5;
        int64_t v40; // 0x392d58
        int64_t v41 = (int64_t)&v40; // 0x392d5a
        char v42 = *(char *)&v4; // 0x392d5d
        *(int32_t *)v3 = *(int32_t *)&v3 & (int32_t)v2;
        *(char *)0xbb6a3a80 = __asm_insb((int16_t)v3);
        uint32_t v43 = (int32_t)v4; // 0x392d71
        uint32_t v44 = v43 - 0x4495c580; // 0x392d71
        int32_t v45 = v41; // 0x392d73
        int32_t v46 = v44 < 0xbb6a3a80; // 0x392d73
        uint32_t v47 = v43 + v45; // 0x392d73
        uint32_t v48 = v47 + v46; // 0x392d73
        unsigned char v49 = llvm_ctpop_i8((char)v48); // 0x392d73
        bool v50 = v44 < 0xbb6a3a80 ? v48 <= v43 : v47 < v43; // 0x392d73
        v4 = v48;
        __asm_iretd(v44, v48);
        unknown_5506b983();
        v5 = (int64_t)&v10;
        v8 = a4 & -256 | (int64_t)(v42 ^ (char)a4);
        v7 = (int64_t)((char)v1 - *(char *)(v2 + (8 * v1 | 1)));
        v9 = v41;
        v6 = ((int32_t)(v2 + 24 & 254 | v2 & 0xffff0000 | 256 * (16 * (int64_t)(v43 % 16 + (v45 & 8) + v46 > 15) | (int64_t)v50 | 64 * (int64_t)(v48 == 0) | 128 * (int64_t)(v48 < 0) | 4 * (int64_t)(v49 % 2 == 0))) | 512) < 0x625686be;
    }
    int32_t v51 = *(int32_t *)(v8 + 0x3aae3000); // 0x392d82
    uint32_t v52 = (int32_t)v6 - v51 + (int32_t)v3; // 0x392d82
    v3 = (v7 | (int64_t)v52) % 256 | (int64_t)(v52 & -256);
    unknown_fffffffffa6caa94();
    *(int64_t *)(v9 - 8) = v5;
    int64_t v53 = unknown_3a401aa3() - v4; // 0x392da2
    uint32_t v54 = (int32_t)v8 % 32; // 0x392da4
    if (v54 != 0) {
        int32_t * v55 = (int32_t *)(v53 & 0xffffffff); // 0x392da4
        uint32_t v56 = *v55; // 0x392da4
        *v55 = v56 >> 32 - v54 | v56 << v54;
    }
    *(int64_t *)(v9 - 16) = 0;
    return 0x10000 * (int32_t)v53 >> 16;
}

// Address range: 0x392eb8 - 0x392ebe
int64_t function_392eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x392eb8
    int64_t result; // 0x392eb8
    return result;
}

// Address range: 0x392f97 - 0x392fb9
int64_t function_392f97(int64_t a1, int64_t a2, int64_t a3) {
    // 0x392f97
    unknown_3adf4aa0();
    int64_t v1; // 0x392f97
    int32_t * v2 = (int32_t *)(v1 + 19 & 0xffffffff); // 0x392f9f
    *v2 = *v2 | 0x107f84f;
    *(int32_t *)a3 = (int32_t)a3;
    int64_t result = unknown_124657af(); // 0x392fa9
    int32_t * v3 = (int32_t *)(v1 + 0x500091c9); // 0x392fae
    *v3 = *v3 + (int32_t)v1;
    return result;
}

// Address range: 0x393005 - 0x39300a
int64_t function_393005(void) {
    // 0x393005
    return function_8348e40();
}

// Address range: 0x39300b - 0x393015
int64_t function_39300b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(4 * a2 + 0x4fb50ec4 + a4); // 0x39300b
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x39300b
    return result;
}

// Address range: 0x393022 - 0x393026
int64_t function_393022(void) {
    // 0x393022
    int64_t result; // 0x393022
    return result;
}

// Address range: 0x393068 - 0x39306b
int64_t function_393068(int64_t a1) {
    // 0x393068
    int64_t result; // 0x393068
    return result;
}

// Address range: 0x393070 - 0x393071
int64_t function_393070(int64_t a1) {
    // 0x393070
    int64_t result; // 0x393070
    return result;
}

// Address range: 0x39309b - 0x3930a0
int64_t function_39309b(void) {
    // 0x39309b
    return function_ffffffffaa999edc();
}

// Address range: 0x3930d8 - 0x3930db
int64_t function_3930d8(void) {
    // 0x3930d8
    int64_t result; // 0x3930d8
    return result;
}

// Address range: 0x393116 - 0x393119
int64_t function_393116(void) {
    // 0x393116
    int64_t result; // 0x393116
    return result;
}

// Address range: 0x393131 - 0x393169
int64_t function_393131(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = unknown_ffffffffc29f5b3d(); // 0x393131
    float80_t v2; // 0x393131
    *(int16_t *)(a3 + 0x7549c43a) = (int16_t)v2;
    int32_t * v3 = (int32_t *)v1; // 0x39314c
    uint32_t v4 = *v3; // 0x39314c
    uint32_t v5 = (int32_t)a4 % 32; // 0x39314c
    int32_t v6 = 0; // 0x39314c
    if (v5 != 0) {
        uint32_t v7 = v4 >> 32 - v5 | v4 << v5; // 0x39314c
        *v3 = v7;
        v6 = v7 % 2 != 0;
    }
    int32_t v8 = *(int32_t *)(a4 - 0x37f7970b + 2 * a4); // 0x39314e
    char v9 = *(char *)-0x1857dfa4; // 0x393155
    int64_t v10; // 0x393131
    *(char *)-0x1857dfa4 = v9 + (char)((v6 + (int32_t)v10 + v8) / 256);
    int32_t * v11 = (int32_t *)(v1 + 0xb36a010f & 0xffffffff); // 0x393160
    *v11 = *v11 | (int32_t)v10;
    return function_2c1702f(*(int32_t *)(a1 - 0x60ce19f) | (int32_t)a1);
}

// Address range: 0x393169 - 0x393186
int64_t function_393169(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x393169
    int64_t v1; // 0x393169
    uint64_t v2 = v1;
    unknown_34b0fb6f();
    *(char *)-0x3fce4b8a = *(char *)-0x3fce4b8a + (char)(v2 / 256);
    *(char *)v2 = (char)(a4 / 256);
    return a3 + 0xfabf8a87 & 0xffffffff;
}

// Address range: 0x39318f - 0x393191
int64_t function_39318f(void) {
    // 0x39318f
    int64_t v1; // 0x39318f
    return function_3931cb(v1, v1, v1, v1);
}

// Address range: 0x393198 - 0x3931ab
int64_t function_393198(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x393198
    int64_t v1; // 0x393198
    int64_t v2 = v1;
    int64_t result = (v2 - (a4 & 0xff00) & 0xff00 | v2 & 0xffff00ff) ^ 0x3d00366e; // 0x39319a
    int32_t * v3 = (int32_t *)(result - 0x44093f61); // 0x39319f
    *v3 = *v3 + (int32_t)a4;
    return result;
}

// Address range: 0x3931cb - 0x39321b
int64_t function_3931cb(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3931cb
    int64_t v1; // 0x3931cb
    *(char *)-0x26d4fa2c = *(char *)-0x26d4fa2c + (char)(v1 / 256);
    __asm_outsb((int16_t)a3, (char)v1);
    int64_t v2 = unknown_ffffffff91be19e1(); // 0x3931db
    float80_t v3; // 0x3931cb
    *(int64_t *)v1 = (int64_t)v3;
    *(int32_t *)-0x755b4610 = *(int32_t *)-0x755b4610 + (int32_t)a1;
    int64_t v4 = v2 & -0xff01 | (int64_t)&g5; // 0x3931f0
    int64_t v5 = v4 & -256; // 0x3931f8
    uint32_t v6 = *(int32_t *)(((v4 + 144) % 256 | v5) + 0x5d8501f); // 0x3931fa
    int64_t v7; // bp-8, 0x3931cb
    int32_t * v8 = (int32_t *)(((v4 + 120 + (int64_t)(v6 > -1 - (int32_t)(int64_t)&v7)) % 256 | v5) - 15); // 0x393203
    *v8 = *v8 + (int32_t)a4;
    __asm_in(-90);
    unknown_ffffffff883a1d11();
    return __asm_wait();
}

// Address range: 0x393225 - 0x39322c
int64_t function_393225(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x393225
    int64_t result; // 0x393225
    return result;
}

// Address range: 0x393399 - 0x39339a
int64_t function_393399(void) {
    // 0x393399
    int64_t result; // 0x393399
    return result;
}

// Address range: 0x3933a3 - 0x3933a7
int64_t function_3933a3(void) {
    // 0x3933a3
    int64_t result; // 0x3933a3
    return result;
}

// Address range: 0x3933ad - 0x3933b8
int64_t function_3933ad(int64_t a1) {
    // 0x3933ad
    int64_t v1; // 0x3933ad
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x3933e7 - 0x3933f5
int64_t function_3933e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint32_t v1 = (int32_t)a4 % 32; // 0x3933e9
    if (v1 != 0) {
        int64_t v2; // 0x3933e7
        uint32_t v3 = (int32_t)v2;
        *(int32_t *)v2 = v3 >> 32 - v1 | v3 << v1;
    }
    int64_t result; // 0x3933e7
    bool v4; // 0x3933e7
    if (a4 != 1 == v4) {
        result = function_393399();
    }
    // 0x3933ed
    return result;
}

// Address range: 0x393411 - 0x393414
int64_t function_393411(int64_t a1, int64_t a2, int64_t a3) {
    // 0x393411
    int64_t result; // 0x393411
    *(int32_t *)a3 = 2 * (int32_t)result;
    return result;
}

// Address range: 0x393465 - 0x393466
int64_t function_393465(void) {
    // 0x393465
    int64_t result; // 0x393465
    return result;
}

// Address range: 0x393483 - 0x393484
int64_t function_393483(int64_t a1) {
    // 0x393483
    int64_t result; // 0x393483
    return result;
}

// Address range: 0x3934a0 - 0x3934a3
int64_t function_3934a0(void) {
    // 0x3934a0
    int64_t result; // 0x3934a0
    return result;
}

// Address range: 0x3934ab - 0x3934b0
int64_t function_3934ab(void) {
    // 0x3934ab
    return function_77e33698();
}

// Address range: 0x3934be - 0x3934bf
int64_t function_3934be(void) {
    // 0x3934be
    int64_t result; // 0x3934be
    return result;
}

// Address range: 0x3934d8 - 0x39352e
int64_t function_3934d8(int64_t a1, int64_t a2) {
    // 0x3934da
    unknown_3acd43e0();
    unknown_ffffffff824251e9();
    bool v1; // 0x3934d8
    int64_t v2 = v1 ? -4 : 4; // 0x3934e8
    int64_t v3 = v2 + a2; // 0x3934e8
    int32_t v4 = (int32_t)a2 >> 31; // 0x3934ea
    int64_t v5; // 0x3934d8
    int32_t * v6 = (int32_t *)(v5 - 86); // 0x3934f1
    *v6 = *v6 + v4;
    __asm_outsb((int16_t)v4, *(char *)v3);
    int32_t v7 = *(int32_t *)0x1301e873; // 0x3934fe
    int32_t v8 = a1; // 0x3934fe
    *(int32_t *)0x1301e873 = (int32_t)((char)v5 < (char)v5) - v8 + v7;
    __asm_iretd(v8, (int32_t)v3);
    int64_t v9 = __asm_wait() & -256 | (int64_t)__asm_in_134(-0x178d); // 0x393512
    char * v10 = (char *)v9; // 0x393513
    *v10 = *v10 & 122;
    *(int32_t *)a1 = (int32_t)v9;
    unknown_323c7322(v2 + a1);
    unknown_2c399e2d();
    return function_393571((int64_t)&g14);
}

// Address range: 0x393532 - 0x39354f
int64_t function_393532(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = unknown_399b1938(); // 0x393532
    char * v2 = (char *)(v1 + 0x360ee00); // 0x393537
    *v2 = *v2 + (char)v1;
    int64_t v3; // 0x393532
    char * v4 = (char *)(v3 + 0x2901e800); // 0x39353d
    *v4 = *v4 + (char)(v1 / 256);
    int64_t v5; // 0x393532
    *(int32_t *)a4 = *(int32_t *)&v5 + (int32_t)a2;
    __asm_in_135(-72);
    __asm_int3();
    return function_ffffffffc35ec826();
}

// Address range: 0x393571 - 0x393574
int64_t function_393571(int64_t a1) {
    // 0x393571
    int64_t result; // 0x393571
    return result;
}

// Address range: 0x39357a - 0x3935a8
int64_t function_39357a(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 31); // 0x39357f
    *v1 = *v1 + (int32_t)a3;
    int64_t v2; // 0x39357a
    int64_t v3; // 0x39357a
    int64_t v4 = (int64_t)(*(int32_t *)&v2 & (int32_t)v3); // 0x393585
    char * v5 = (char *)(a4 + 0x1e8f7ca); // 0x393587
    *v5 = *v5 & (char)(a4 / 256);
    int64_t v6 = v4; // bp-8, 0x393594
    int32_t * v7 = (int32_t *)(v4 + 0x2376cda40); // 0x393595
    *v7 = *v7 ^ (int32_t)(int64_t)&v6;
    int64_t result = v4 * v4; // 0x39359a
    int32_t * v8 = (int32_t *)(v3 - 9); // 0x39359d
    *v8 = *v8 + (int32_t)result;
    return result;
}

// Address range: 0x3935a9 - 0x3935b0
int64_t function_3935a9(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 - 24); // 0x3935a9
    int64_t result; // 0x3935a9
    *v1 = *v1 | (int32_t)result;
    return result;
}

// Address range: 0x3935e0 - 0x3935e4
int64_t function_3935e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(a1 - 120); // 0x3935e0
    *v1 = *v1 + (int32_t)a4;
    int64_t result; // 0x3935e0
    return result;
}

// Address range: 0x393634 - 0x393637
int64_t function_393634(void) {
    // 0x393634
    int64_t result; // 0x393634
    return result;
}

// Address range: 0x393654 - 0x39366e
int64_t function_393654(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    int64_t v2; // 0x393654
    int32_t * v3 = (int32_t *)(v2 + 0x50172737); // 0x393654
    *v3 = *v3 + (int32_t)a3;
    int64_t v4; // 0x393654
    char * v5 = (char *)(v4 - 0x17208060); // 0x39365a
    *v5 = *v5 | (char)(v4 / 256);
    *(int32_t *)(a4 + 16) = (int32_t)v2;
    *(int32_t *)a1 = *(int32_t *)&v1 + (int32_t)a1;
    char v6 = *(char *)&v4 | (char)(a3 / 256); // 0x393667
    *(char *)v4 = v6;
    int64_t result = a6; // 0x393669
    if (v6 < 1) {
        result = function_393654(v1, a2, a3, a4, (int64_t)&g14, (int64_t)&g14);
    }
    // 0x39366b
    return result;
}

// Address range: 0x3936da - 0x3936df
int64_t function_3936da(void) {
    // 0x3936da
    return function_64a09819();
}

// Address range: 0x393705 - 0x393706
int64_t function_393705(int64_t a1) {
    // 0x393705
    int64_t result; // 0x393705
    return result;
}

// Address range: 0x39370f - 0x393732
int64_t function_39370f(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x39370f
    int64_t v1; // 0x39370f
    int64_t v2 = v1;
    unsigned char v3 = (char)v2; // 0x39370f
    *(char *)a1 = v3;
    bool v4; // 0x39370f
    *(char *)((v4 ? -1 : 1) + a1) = __asm_insb((int16_t)a3);
    int32_t * v5 = (int32_t *)(v1 + (int64_t)&g10); // 0x393724
    *v5 = *v5 >> 1;
    return ((v2 + 198) % 256 | v2 & -256) - 0x41d6c599 + (int64_t)(v3 < 58);
}

// Address range: 0x393736 - 0x39375a
int64_t function_393736(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x393736
    int64_t v1; // 0x393736
    int32_t * v2 = (int32_t *)(v1 + 0x3d00b095); // 0x39373f
    *v2 = *v2 + (int32_t)v1;
    int64_t v3; // 0x393736
    *(int32_t *)v3 = *(int32_t *)&v3 + (int32_t)v1;
    char * v4 = (char *)(v3 - 0x1bff972c); // 0x39374d
    *v4 = *v4 + (char)(v3 / 256);
    int64_t v5; // 0x393736
    return function_fffffffff89649bb(*(int32_t *)&v5);
}

// Address range: 0x393783 - 0x393787
int64_t function_393783(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x393783
    int64_t v1; // 0x393783
    return function_3937d0(a1, a2, a3, v1 & 0xffffffff);
}

// Address range: 0x3937bd - 0x3937c3
int64_t function_3937bd(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a2 + 45); // 0x3937bf
    int64_t v2; // 0x3937bd
    *v1 = *v1 + (int32_t)v2;
    return 0;
}

// Address range: 0x3937d0 - 0x3937f5
int64_t function_3937d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = (int32_t *)(a4 - 114 + 4 * a4); // 0x3937d5
    uint32_t v2 = *v1; // 0x3937d5
    int64_t v3; // 0x3937d0
    int32_t v4 = v3; // 0x3937d5
    uint32_t v5 = v2 + v4; // 0x3937d5
    *v1 = v5;
    int64_t v6; // 0x3937d0
    unsigned char v7 = *(char *)&v6; // 0x3937e7
    bool v8; // 0x3937d0
    int64_t v9 = v8 ? -1 : 1; // 0x3937e7
    int64_t result = unknown_ffffffff913b37f0(v9 + a1, v4 + (int32_t)a2 - (int32_t)v3 + (int32_t)(v5 < v2)); // 0x3937e9
    char * v10 = (char *)(a4 + 0x1e8886e); // 0x3937ef
    char v11 = *v10; // 0x3937ef
    int64_t v12; // bp+460737734, 0x3937d0
    *v10 = (char)(v7 > (char)(int64_t)&v12) - (char)a4 + v11;
    return result;
}

// Address range: 0x3937f6 - 0x393818
int64_t function_3937f6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x3937f6
    __asm_hlt();
    __asm_int3();
    return unknown_ffffffff8bd3a406() ^ 53;
}

// Address range: 0x3938b8 - 0x3938bc
int64_t function_3938b8(int64_t a1, int64_t a2) {
    // 0x3938b8
    int64_t v1; // 0x3938b8
    *(int32_t *)a1 = 2 * (int32_t)v1;
    return __asm_iretd((int32_t)a1, (int32_t)a2);
}

// Address range: 0x3938bf - 0x3938c0
int64_t function_3938bf(int64_t a1) {
    // 0x3938bf
    int64_t result; // 0x3938bf
    return result;
}

// Address range: 0x3938ea - 0x3938f0
int64_t function_3938ea(int64_t a1) {
    // 0x3938ea
    return 0xb286dc71;
}

// Address range: 0x3938f1 - 0x3938f2
int64_t function_3938f1(void) {
    // 0x3938f1
    int64_t result; // 0x3938f1
    return result;
}

// Address range: 0x3938ff - 0x393987
int64_t function_3938ff(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4) {
    // 0x3938ff
    int64_t v1; // 0x3938ff
    uint64_t v2 = v1;
    *(char *)a1 = (char)(a4 / 256) + (char)a1;
    int64_t v3; // 0x3938ff
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    char v5 = *(char *)0x7223d37c + (char)(v2 / 256); // 0x393975
    *(char *)0x7223d37c = v5;
    uint64_t v6 = a4 - 1; // 0x393980
    if (v6 == 0 || v5 == 0) {
        // 0x393982
        return v3 & 0xb060104f | 0x4f9fefb0;
    }
    int64_t v7 = v3 + 0x38016600; // 0x393954
    int32_t * v8 = (int32_t *)(a2 - 77); // 0x393956
    uint32_t v9 = *v8; // 0x393956
    uint32_t v10 = v9 + (int32_t)v2; // 0x393956
    *v8 = v10;
    int64_t v11 = v7 + a3 / 256 + (int64_t)(v10 < v9) & 80; // 0x393959
    char * v12 = (char *)(v11 | v7 & 0xb3650600); // 0x393960
    unsigned char v13 = *v12; // 0x393960
    unsigned char v14 = v13 + (char)v11; // 0x393960
    *v12 = v14;
    return (a1 - v6 / 256 + (int64_t)(v14 < v13)) % 256 | a1 & 0xffffff00;
}

// Address range: 0x393988 - 0x3939f1
int64_t function_393988(int64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    // 0x393988
    int64_t v1; // 0x393988
    int64_t v2 = v1 & 0xffffffff; // 0x393988
    int64_t v3 = a2 & 0xffffffff; // 0x393988
    int64_t v4 = v3; // 0x393988
    char v5 = v1 / 256; // 0x393990
    *(char *)-0x5426ff69 = *(char *)-0x5426ff69 + v5;
    char v6 = a2; // 0x393996
    char * v7 = (char *)v3; // 0x393996
    *v7 = (char)v1 + v6;
    *(char *)0x6c219a85 = *(char *)0x6c219a85 + (char)(a2 / 256);
    *v7 = *(char *)&v2 + v6;
    char * v8 = (char *)(v1 - 0x1bff4d00); // 0x39399c
    char v9 = *v8 + v5; // 0x39399c
    *v8 = v9;
    int64_t v10 = (a4 & -0xff01 | (int64_t)&g1) - 1; // 0x3939a2
    if (v10 != 0 != (v9 == 0)) {
        // 0x3939a4
        *(char *)0x6c287ac5 = *(char *)0x6c287ac5 + 123;
        bool v11; // 0x393988
        return function_b94d8c1((v11 ? -4 : 4) + a1, v2, 0x6c219a85, v10);
    }
    int64_t v12 = v4 & -256; // 0x3939cd
    int64_t v13 = v12 + 0xbeb60068; // 0x3939d4
    int64_t v14 = v13 & 0xffffff68 | (int64_t)((int32_t)v12 < 0x540a6f01); // 0x3939d4
    int32_t * v15 = (int32_t *)(v14 - 87); // 0x3939d9
    *v15 = *v15 ^ 0x6c219a85;
    char v16 = *(char *)&v4;
    __asm_outsb(-0x657b, v16);
    *(char *)v2 = v16 & (char)v14;
    __writegsbyte(-0x3ff2a613, __readgsbyte(-0x3ff2a613) + v5);
    return v13 & 0xffffff00 | (int64_t)*(char *)((v14 & 105) + v1);
}

// Address range: 0x393a4b - 0x393a4c
int64_t function_393a4b(void) {
    // 0x393a4b
    int64_t result; // 0x393a4b
    return result;
}

// Address range: 0x393a4d - 0x393a4e
int64_t function_393a4d(void) {
    // 0x393a4d
    int64_t result; // 0x393a4d
    return result;
}

// Address range: 0x393a4e - 0x393a4f
int64_t function_393a4e(void) {
    // 0x393a4e
    int64_t result; // 0x393a4e
    return result;
}

// Address range: 0x393a66 - 0x393a8a
int64_t function_393a66(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a3;
    int64_t v2; // 0x393a66
    *(char *)0x17230c0372877403 = (char)v2;
    *(char *)a1 = (char)(v2 ^ a4);
    function_393a4b();
    bool v3; // 0x393a66
    int64_t v4 = __asm_iretd((int32_t)((v3 ? 0xffffffff : 1) + a1), (int32_t)a2); // 0x393a75
    char * v5 = (char *)v4; // 0x393a7c
    *v5 = *v5 + (char)v4;
    int32_t v6 = *(int32_t *)&v1; // 0x393a83
    int64_t v7; // bp-16, 0x393a66
    *(int32_t *)v1 = v6 + (int32_t)(int64_t)&v7;
    return function_393afb();
}

// Address range: 0x393aa8 - 0x393acd
int64_t function_393aa8(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    // 0x393aa8
    int64_t v1; // 0x393aa8
    unsigned char v2 = (char)v1;
    unsigned char v3 = v2 + (char)(a4 / 256); // 0x393aa8
    *(char *)v1 = v3;
    int64_t v4 = unknown_ffffffffd69090ba(); // 0x393ab9
    if (((char)(v1 - (v3 < v2 ? 225 : 224)) ^ -128) < 0) {
        v4 = function_393a4d();
    }
    int32_t * v5 = (int32_t *)v4; // 0x393abb
    uint32_t v6 = (int32_t)v4; // 0x393abb
    *v5 = *v5 + v6;
    int32_t v7 = *(int32_t *)0x7f171fe5 - (int32_t)v1 + (int32_t)(v6 < 0x6ff3f701); // 0x393ac3
    *(int32_t *)0x7f171fe5 = v7;
    int64_t v8 = a4 - 1; // 0x393ac9
    if (v8 != 0 == v7 == 0) {
        function_393a4e();
    }
    // 0x393acb
    return function_393acf(a1, a2, 0xbf58ad7d, v8);
}

// Address range: 0x393acd - 0x393acf
int64_t function_393acd(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x393acd
    int64_t result; // 0x393acd
    return result;
}

// Address range: 0x393acf - 0x393ae8
int64_t function_393acf(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x393acf
    float80_t v1; // 0x393acf
    __pseudo_get_significand(v1);
    __pseudo_get_exponent(v1);
    int64_t v2 = __asm_hlt(); // 0x393ae5
    return (int64_t)(*(int32_t *)v2 ^ (int32_t)v2);
}

// Address range: 0x393af9 - 0x393afb
int64_t function_393af9(void) {
    // 0x393af9
    int64_t result; // 0x393af9
    return result;
}

// Address range: 0x393afb - 0x393afc
int64_t function_393afb(void) {
    // 0x393afb
    int64_t result; // 0x393afb
    return result;
}

// Address range: 0x393b05 - 0x393b06
int64_t function_393b05(void) {
    // 0x393b05
    int64_t result; // 0x393b05
    return result;
}

// Address range: 0x393b12 - 0x393b14
int64_t function_393b12(int64_t a1) {
    // 0x393b12
    int64_t result; // 0x393b12
    return result;
}

// Address range: 0x393b36 - 0x393b48
int64_t function_393b36(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int32_t * v1 = (int32_t *)(unknown_3da69a3c() + 0x37c64f98); // 0x393b3b
    uint32_t v2 = *v1; // 0x393b3b
    int64_t v3; // 0x393b36
    uint32_t v4 = v2 + (int32_t)v3; // 0x393b3b
    *v1 = v4;
    int64_t v5; // 0x393b36
    uint32_t v6 = *(int32_t *)&v5; // 0x393b41
    int32_t * v7 = (int32_t *)a3; // 0x393b41
    *v7 = 0x2000000 * v6 | v6 / 256 | 0x1000000 * (int32_t)(v4 < v2);
    *v7 = *(int32_t *)&v5 + (int32_t)a4;
    return __asm_in_136((int16_t)a3);
}

// Address range: 0x393b48 - 0x393bad
int64_t function_393b48(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x393b48
    unknown_ffffffffd0c51a8d();
    int64_t v1 = __asm_iretd((int32_t)a1, (int32_t)a2); // 0x393b8c
    int64_t v2; // 0x393b48
    *(int32_t *)a3 = (int32_t)(v2 ^ a3) + (int32_t)a3;
    return v1 & 0xe83d3baf;
}

// Address range: 0x393bba - 0x393bc4
int64_t function_393bba(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    // 0x393bba
    int64_t result; // 0x393bba
    *(int32_t *)(result + 0x1e84ba3) = (int32_t)a4;
    char * v1 = (char *)(result + 58); // 0x393bc0
    *v1 = *v1 ^ (char)(a4 / 256);
    return result;
}
